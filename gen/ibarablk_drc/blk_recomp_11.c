#include "recomp.h"
#include "blk_recomp_funcs.h"

/* FUN_0c07d620 */
void blk_f_0C07D620(sh3_t *c)
{
	LOCALS;
L_0C07D620: BLKS(0x0C07D620u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D622u, 1);  /* 0C07D620 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C07D622 mov #imm,Rn */
	r3 = 0x13Fu; UPD(0x0C07D626u, 2);  /* 0C07D624 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C07D626 mov Rm,Rn */
	r2 = 0xC3BC7CCu; UPD(0x0C07D62Au, 2);  /* 0C07D628 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C07D62A mov #imm,Rn */
	UPD(0x0C07D62Cu, 1);
L_0C07D62C: BLKS(0x0C07D62Cu);
	W32(r2, r7); UPD(0x0C07D62Eu, 1);  /* 0C07D62C mov.l Rm,@Rn */
	r1 += 0x1u;  /* 0C07D62E add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C07D630 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C07D632 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x60u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D62Cu, 6); goto L_0C07D62C; } goto L_0C07D638; }  /* 0C07D634 bf/s */
L_0C07D638: BLKS(0x0C07D638u);
	r3 = 0xC22E2B4u; UPD(0x0C07D63Au, 2);  /* 0C07D638 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C07D63A mov #imm,Rn */
	r2 = 0xC3C8484u; UPD(0x0C07D63Eu, 2);  /* 0C07D63C mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C07D63E mov #imm,Rn */
	r6 = 0x7u;  /* 0C07D640 mov #imm,Rn */
	UPD(0x0C07D642u, 2);
L_0C07D642: BLKS(0x0C07D642u);
	W8(r2, r7); UPD(0x0C07D644u, 1);  /* 0C07D642 mov.b Rm,@Rn */
	r1 += 0x1u;  /* 0C07D644 add #imm,Rn */
	W8(r3, r7); UPD(0x0C07D648u, 2);  /* 0C07D646 mov.b Rm,@Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C07D648 exts.w Rm,Rn */
	r2 += 0x1u;  /* 0C07D64A add #imm,Rn */
	T = (s32)r1 > (s32)r6;  /* 0C07D64C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D642u, 6); goto L_0C07D642; } goto L_0C07D652; }  /* 0C07D64E bf/s */
L_0C07D652: BLKS(0x0C07D652u);
	r0 = 0xC297A39u; UPD(0x0C07D654u, 2);  /* 0C07D652 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C07D654 mov #imm,Rn */
	W8(r0, r2); UPD(0x0C07D658u, 2);  /* 0C07D656 mov.b Rm,@Rn */
	r3 = 0xC3C53E0u; UPD(0x0C07D65Au, 1);  /* 0C07D658 mov.l @(disp,pc),Rn */
	r0 = 0xC28F609u; UPD(0x0C07D65Cu, 1);  /* 0C07D65A mov.l @(disp,pc),Rn */
	W8(r3, r2); UPD(0x0C07D65Eu, 1);  /* 0C07D65C mov.b Rm,@Rn */
	W8(r0, r2); UPD(0x0C07D660u, 1);  /* 0C07D65E mov.b Rm,@Rn */
	r3 = 0x7u;  /* 0C07D660 mov #imm,Rn */
	r6 = 0xC22E2ACu; UPD(0x0C07D664u, 2);  /* 0C07D662 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C07D664 mov #imm,Rn */
	r7 = 0xC3C847Cu; UPD(0x0C07D668u, 2);  /* 0C07D666 mov.l @(disp,pc),Rn */
L_0C07D668: BLKS(0x0C07D668u);
	r5 = r0;  /* 0C07D668 mov Rm,Rn */
	r4 = r0;  /* 0C07D66A mov Rm,Rn */
	IF(0x0C07D66Cu); W8(r0 + r6, r2); UPD(0x0C07D66Eu, 3);  /* 0C07D66C mov.b Rm,@(r0,Rn) */
	r5 += r7;  /* 0C07D66E add Rm,Rn */
	r4 += 0x1u;  /* 0C07D670 add #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C07D672 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C07D674 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W8(r5, r2); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07D668u, 7); goto L_0C07D668; } UPD(0x0C07D67Au, 1); goto L_0C07D67A; }  /* 0C07D676 bf/s */
L_0C07D67A: BLKS(0x0C07D67Au);
	r1 = 0xC297A38u; UPD(0x0C07D67Cu, 1);  /* 0C07D67A mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C07D67C mov #imm,Rn */
	r6 = 0xC28F608u; UPD(0x0C07D680u, 2);  /* 0C07D67E mov.l @(disp,pc),Rn */
	W8(r1, r7); UPD(0x0C07D682u, 1);  /* 0C07D680 mov.b Rm,@Rn */
	W8(r6, r7); UPD(0x0C07D684u, 1);  /* 0C07D682 mov.b Rm,@Rn */
	r15 = r14;  /* 0C07D684 mov Rm,Rn */
	IF(0x0C07D686u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C07D686 rts */
}

/* FUN_0c07d6c0 */
void blk_f_0C07D6C0(sh3_t *c)
{
	LOCALS;
L_0C07D6C0: BLKS(0x0C07D6C0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D6C2u, 1);  /* 0C07D6C0 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C07D6C2 mov #imm,Rn */
	r6 = 0xC22E2ACu; UPD(0x0C07D6C6u, 2);  /* 0C07D6C4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07D6C6 mov Rm,Rn */
	r7 = 0xC3C847Cu; UPD(0x0C07D6CAu, 2);  /* 0C07D6C8 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C07D6CA mov #imm,Rn */
	r3 = 0x7u;  /* 0C07D6CC mov #imm,Rn */
	IF(0x0C07D6CEu); ;  /* 0C07D6CE nop */
	UPD(0x0C07D6D0u, 3);
L_0C07D6D0: BLKS(0x0C07D6D0u);
	r4 = r0;  /* 0C07D6D0 mov Rm,Rn */
	r4 += r7;  /* 0C07D6D2 add Rm,Rn */
	W8(r4, r2); UPD(0x0C07D6D6u, 3);  /* 0C07D6D4 mov.b Rm,@Rn */
	IF(0x0C07D6D6u); W8(r0 + r6, r2); UPD(0x0C07D6D8u, 1);  /* 0C07D6D6 mov.b Rm,@(r0,Rn) */
	r4 = r0;  /* 0C07D6D8 mov Rm,Rn */
	r4 += 0x1u;  /* 0C07D6DA add #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C07D6DC exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C07D6DE cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07D6D0u, 7); goto L_0C07D6D0; }  /* 0C07D6E0 bf */
L_0C07D6E2: BLKS(0x0C07D6E2u);
	r3 = 0x0u;  /* 0C07D6E2 mov #imm,Rn */
	r1 = 0xC297A38u; UPD(0x0C07D6E6u, 2);  /* 0C07D6E4 mov.l @(disp,pc),Rn */
	r0 = 0xC28F608u; UPD(0x0C07D6E8u, 1);  /* 0C07D6E6 mov.l @(disp,pc),Rn */
	W8(r1, r3); UPD(0x0C07D6EAu, 1);  /* 0C07D6E8 mov.b Rm,@Rn */
	W8(r0, r3); UPD(0x0C07D6ECu, 1);  /* 0C07D6EA mov.b Rm,@Rn */
	r15 = r14;  /* 0C07D6EC mov Rm,Rn */
	IF(0x0C07D6EEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C07D6EE rts */
}

void blk_f_0C07D760(sh3_t *c)
{
	LOCALS;
	goto L_0C07D760;
L_0C07C160: BLKS(0x0C07C160u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07C162u, 1);  /* 0C07C160 mov.l Rm,@-Rn */
	r0 = 0x60u;  /* 0C07C162 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07C166u, 2);  /* 0C07C164 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07C168u, 1);  /* 0C07C166 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07C16Au, 1);  /* 0C07C168 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07C16Cu, 1);  /* 0C07C16A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07C16Eu, 1);  /* 0C07C16C mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C07C16E exts.w Rm,Rn */
	IF(0x0C07C170u); MACL = r13 * r0;  /* 0C07C170 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07C174u, 4);  /* 0C07C172 mov.l Rm,@-Rn */
	r0 = 0xC3BC81Au; UPD(0x0C07C176u, 1);  /* 0C07C174 mov.l @(disp,pc),Rn */
	IF(0x0C07C176u); r3 = MACL;  /* 0C07C176 sts macl,Rn */
	IF(0x0C07C178u); r15 -= 4; W32(r15, PR); UPD(0x0C07C17Au, 2);  /* 0C07C178 sts.l pr,@-Rn */
	IF(0x0C07C17Au); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07C17Cu, 1);  /* 0C07C17A mov.b @(r0,Rm),Rn */
	r8 = 0xC29D1D8u; UPD(0x0C07C17Eu, 1);  /* 0C07C17C mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C07C17E tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C1B2u, 4); goto L_0C07C1B2; } goto L_0C07C184; }  /* 0C07C180 bf/s */
L_0C07C184: BLKS(0x0C07C184u);
	r10 = r8;  /* 0C07C184 mov Rm,Rn */
	r9 = 0x0u;  /* 0C07C186 mov #imm,Rn */
	r10 += 0x18u;  /* 0C07C188 add #imm,Rn */
	IF(0x0C07C18Au); ;  /* 0C07C18A nop */
	UPD(0x0C07C18Cu, 5);
L_0C07C18C: BLKS(0x0C07C18Cu);
	r1 = R32(r8); UPD(0x0C07C18Eu, 1);  /* 0C07C18C mov.l @Rm,Rn */
	r4 = 0x10000000u; UPD(0x0C07C190u, 1);  /* 0C07C18E mov.l @(disp,pc),Rn */
	T = (r1 & r4) == 0;  /* 0C07C190 tst Rm,Rn */
	if (T) { UPD(0x0C07C1A4u, 4); goto L_0C07C1A4; }  /* 0C07C192 bt */
L_0C07C194: BLKS(0x0C07C194u);
	r0 = 0x270u; UPD(0x0C07C196u, 1);  /* 0C07C194 mov.w @(disp,pc),Rn */
	IF(0x0C07C196u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07C198u, 1);  /* 0C07C196 mov.b @(r0,Rm),Rn */
	r11 = r2 & 0xFF;  /* 0C07C198 extu.b Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C07C19A tst Rm,Rn */
	{ u32 c_ = !T; r12 = 0x60u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07C1A4u, 5); goto L_0C07C1A4; } goto L_0C07C1A0; }  /* 0C07C19C bf/s */
L_0C07C1A0: BLKS(0x0C07C1A0u);
	{ IF(0x0C07C1A2u); MACL = r13 * r12; /* slot mul.l Rm,Rn */ UPD(0x0C07C410u, 5); goto L_0C07C410; }  /* 0C07C1A0 bra */
L_0C07C1A4: BLKS(0x0C07C1A4u);
	r5 = 0x2A0u; UPD(0x0C07C1A6u, 1);  /* 0C07C1A4 mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C07C1A6 add #imm,Rn */
	r11 = 0x1u;  /* 0C07C1A8 mov #imm,Rn */
	r10 += r5;  /* 0C07C1AA add Rm,Rn */
	T = (s32)r9 > (s32)r11;  /* 0C07C1AC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += r5; /* slot add Rm,Rn */ if (c_) { UPD(0x0C07C18Cu, 7); goto L_0C07C18C; } UPD(0x0C07C1B2u, 1); goto L_0C07C1B2; }  /* 0C07C1AE bf/s */
L_0C07C1B2: BLKS(0x0C07C1B2u);
	r3 = 0x60u;  /* 0C07C1B2 mov #imm,Rn */
	UPD(0x0C07C1B4u, 1);
L_0C07C1B4: BLKS(0x0C07C1B4u);
	IF(0x0C07C1B4u); MACL = r13 * r3;  /* 0C07C1B4 mul.l Rm,Rn */
	r7 = 0xC3BC7CCu; UPD(0x0C07C1B8u, 3);  /* 0C07C1B6 mov.l @(disp,pc),Rn */
	IF(0x0C07C1B8u); r11 = MACL;  /* 0C07C1B8 sts macl,Rn */
	r11 += r7;  /* 0C07C1BA add Rm,Rn */
	r3 = r11;  /* 0C07C1BC mov Rm,Rn */
	r3 += 0x4Eu;  /* 0C07C1BE add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C07C1C2u, 5);  /* 0C07C1C0 mov.b @Rm,Rn */
	r2 = r6 & 0xFF;  /* 0C07C1C2 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07C1C4 tst Rm,Rn */
	if (T) { UPD(0x0C07C1EAu, 5); goto L_0C07C1EA; }  /* 0C07C1C6 bt */
L_0C07C1C8: BLKS(0x0C07C1C8u);
	r4 = 0x2A0u; UPD(0x0C07C1CAu, 1);  /* 0C07C1C8 mov.w @(disp,pc),Rn */
	IF(0x0C07C1CAu); MACL = r2 * r4;  /* 0C07C1CA mul.l Rm,Rn */
	r12 = 0xC29D1D8u; UPD(0x0C07C1CEu, 3);  /* 0C07C1CC mov.l @(disp,pc),Rn */
	IF(0x0C07C1CEu); r8 = MACL;  /* 0C07C1CE sts macl,Rn */
	r12 -= r4;  /* 0C07C1D0 sub Rm,Rn */
	r8 += r12;  /* 0C07C1D2 add Rm,Rn */
	r2 = R32(r8); UPD(0x0C07C1D6u, 4);  /* 0C07C1D4 mov.l @Rm,Rn */
	r0 = 0x10000000u; UPD(0x0C07C1D8u, 1);  /* 0C07C1D6 mov.l @(disp,pc),Rn */
	r2 &= r0;  /* 0C07C1D8 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07C1DA tst Rm,Rn */
	if (T) { UPD(0x0C07C1E4u, 5); goto L_0C07C1E4; }  /* 0C07C1DC bt */
L_0C07C1DE: BLKS(0x0C07C1DEu);
	r6 = R32(r8 + 0x10u); UPD(0x0C07C1E0u, 1);  /* 0C07C1DE mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C07C390u, 3); goto L_0C07C390; }  /* 0C07C1E0 bra */
L_0C07C1E4: BLKS(0x0C07C1E4u);
	W32(r11 + 0x34u, r2); UPD(0x0C07C1E6u, 1);  /* 0C07C1E4 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x30u, r2); UPD(0x0C07C1E8u, 1);  /* 0C07C1E6 mov.l Rm,@(disp,Rn) */
	W8(r3, r2); UPD(0x0C07C1EAu, 1);  /* 0C07C1E8 mov.b Rm,@Rn */
L_0C07C1EA: BLKS(0x0C07C1EAu);
	r3 = 0x60u;  /* 0C07C1EA mov #imm,Rn */
	IF(0x0C07C1ECu); MACL = r13 * r3;  /* 0C07C1EC mul.l Rm,Rn */
	r7 = 0xC3BC7CCu; UPD(0x0C07C1F0u, 4);  /* 0C07C1EE mov.l @(disp,pc),Rn */
	IF(0x0C07C1F0u); r8 = MACL;  /* 0C07C1F0 sts macl,Rn */
	r8 += r7;  /* 0C07C1F2 add Rm,Rn */
	r8 += 0x4Eu;  /* 0C07C1F4 add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r8); UPD(0x0C07C1F8u, 4);  /* 0C07C1F6 mov.b @Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C07C1F8 tst Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFB2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C214u, 4); goto L_0C07C214; } goto L_0C07C1FE; }  /* 0C07C1FA bf/s */
L_0C07C1FE: BLKS(0x0C07C1FEu);
	r0 = R32(r8); UPD(0x0C07C200u, 2);  /* 0C07C1FE mov.l @Rm,Rn */
	r4 = 0x4010u; UPD(0x0C07C202u, 1);  /* 0C07C200 mov.w @(disp,pc),Rn */
	r0 &= r4;  /* 0C07C202 and Rm,Rn */
	T = r0 == 0x10u;  /* 0C07C204 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C07C214u, 5); goto L_0C07C214; }  /* 0C07C206 bt */
L_0C07C208: BLKS(0x0C07C208u);
	r12 = 0x10u;  /* 0C07C208 mov #imm,Rn */
	T = r0 > r12;  /* 0C07C20A cmp/hi Rm,Rn */
	{ u32 c_ = T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C07C2C0u, 5); goto L_0C07C2C0; } goto L_0C07C210; }  /* 0C07C20C bt/s */
L_0C07C210: BLKS(0x0C07C210u);
	if (T) { UPD(0x0C07C230u, 4); goto L_0C07C230; }  /* 0C07C210 bt */
L_0C07C212: BLKS(0x0C07C212u);
	IF(0x0C07C212u); ;  /* 0C07C212 nop */
	UPD(0x0C07C214u, 1);
L_0C07C214: BLKS(0x0C07C214u);
	r15 = r14;  /* 0C07C214 mov Rm,Rn */
	IF(0x0C07C216u); PR = R32(r15); r15 += 4; UPD(0x0C07C218u, 2);  /* 0C07C216 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C21Au, 1);  /* 0C07C218 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07C21Cu, 1);  /* 0C07C21A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07C21Eu, 1);  /* 0C07C21C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C220u, 1);  /* 0C07C21E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C222u, 1);  /* 0C07C220 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C224u, 1);  /* 0C07C222 mov.l @Rm+,Rn */
	IF(0x0C07C224u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07C224 rts */
L_0C07C230: BLKS(0x0C07C230u);
	r2 = R32(r8 + 0x30u); UPD(0x0C07C232u, 1);  /* 0C07C230 mov.l @(disp,Rm),Rn */
	r8 += 0x40u;  /* 0C07C232 add #imm,Rn */
	r0 = R32(r8); UPD(0x0C07C236u, 2);  /* 0C07C234 mov.l @Rm,Rn */
	T = (s32)r2 > (s32)r0;  /* 0C07C236 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C244u, 4); goto L_0C07C244; } goto L_0C07C23C; }  /* 0C07C238 bf/s */
L_0C07C23C: BLKS(0x0C07C23Cu);
	r10 = 0xFFFFF000u; UPD(0x0C07C23Eu, 2);  /* 0C07C23C mov.w @(disp,pc),Rn */
	r10 += r2;  /* 0C07C23E add Rm,Rn */
	W32(r8 + 0x30u, r10); UPD(0x0C07C242u, 2);  /* 0C07C240 mov.l Rm,@(disp,Rn) */
	r2 = r10;  /* 0C07C242 mov Rm,Rn */
	UPD(0x0C07C244u, 1);
L_0C07C244: BLKS(0x0C07C244u);
	r6 = R32(r8 + 0x28u); UPD(0x0C07C246u, 1);  /* 0C07C244 mov.l @(disp,Rm),Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C07C248u, 1);  /* 0C07C246 mov.l @(disp,Rm),Rn */
	r6 += r2;  /* 0C07C248 add Rm,Rn */
	r7 = R32(r8 + 0x34u); UPD(0x0C07C24Cu, 2);  /* 0C07C24A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C07C24Eu, 1);  /* 0C07C24C mov.l Rm,@(disp,Rn) */
	r3 += r7;  /* 0C07C24E add Rm,Rn */
	r1 = 0xC0000u; UPD(0x0C07C252u, 2);  /* 0C07C250 mov.l @(disp,pc),Rn */
	r5 = 0x30C0000u; UPD(0x0C07C254u, 1);  /* 0C07C252 mov.l @(disp,pc),Rn */
	r6 += r1;  /* 0C07C254 add Rm,Rn */
	T = r6 > r5;  /* 0C07C256 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07C2A0u, 5); goto L_0C07C2A0; } UPD(0x0C07C25Cu, 1); goto L_0C07C25C; }  /* 0C07C258 bt/s */
L_0C07C25C: BLKS(0x0C07C25Cu);
	r2 = 0xFE8C0000u; UPD(0x0C07C25Eu, 1);  /* 0C07C25C mov.l @(disp,pc),Rn */
	r13 = 0x1180000u; UPD(0x0C07C260u, 1);  /* 0C07C25E mov.l @(disp,pc),Rn */
	r2 += r3;  /* 0C07C260 add Rm,Rn */
	T = r2 > r13;  /* 0C07C262 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r6 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C272u, 5); goto L_0C07C272; } goto L_0C07C268; }  /* 0C07C264 bf/s */
L_0C07C268: BLKS(0x0C07C268u);
	r11 = 0u - r7;  /* 0C07C268 neg Rm,Rn */
	r3 += r11;  /* 0C07C26A add Rm,Rn */
	W32(r8 + 0x34u, r11); UPD(0x0C07C26Eu, 4);  /* 0C07C26C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r3); UPD(0x0C07C270u, 1);  /* 0C07C26E mov.l Rm,@(disp,Rn) */
	r6 = r8;  /* 0C07C270 mov Rm,Rn */
	UPD(0x0C07C272u, 1);
L_0C07C272: BLKS(0x0C07C272u);
	r6 += 0x44u;  /* 0C07C272 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C07C276u, 2);  /* 0C07C274 mov.b @Rm,Rn */
	r9 = 0x13u;  /* 0C07C276 mov #imm,Rn */
	r4 = 0xC2B039Cu; UPD(0x0C07C27Au, 2);  /* 0C07C278 mov.l @(disp,pc),Rn */
	r12 = r3 & 0xFF;  /* 0C07C27A extu.b Rm,Rn */
	r0 = R32(r4); UPD(0x0C07C27Eu, 2);  /* 0C07C27C mov.l @Rm,Rn */
	T = r9 >= r12;  /* 0C07C27E cmp/hs Rm,Rn */
	IF(0x0C07C280u); r8 = T;  /* 0C07C280 movt Rn */
	r0 &= 0x3u;  /* 0C07C282 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07C284 tst Rm,Rn */
	IF(0x0C07C286u); r7 = T;  /* 0C07C286 movt Rn */
	r8 &= r7;  /* 0C07C288 and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C07C28A tst Rm,Rn */
	if (T) { UPD(0x0C07C214u, 10); goto L_0C07C214; }  /* 0C07C28C bt */
L_0C07C28E: BLKS(0x0C07C28Eu);
	r0 = r3;  /* 0C07C28E mov Rm,Rn */
	r0 += 0x1u;  /* 0C07C290 add #imm,Rn */
	{ W8(r6, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C07C214u, 5); goto L_0C07C214; }  /* 0C07C292 bra */
L_0C07C2A0: BLKS(0x0C07C2A0u);
	r0 = 0xC07C910u; UPD(0x0C07C2A2u, 1);  /* 0C07C2A0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C07C2A2 mov Rm,Rn */
	r15 = r14;  /* 0C07C2A4 mov Rm,Rn */
	IF(0x0C07C2A6u); PR = R32(r15); r15 += 4; UPD(0x0C07C2A8u, 3);  /* 0C07C2A6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C2AAu, 1);  /* 0C07C2A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07C2ACu, 1);  /* 0C07C2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07C2AEu, 1);  /* 0C07C2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C2B0u, 1);  /* 0C07C2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C2B2u, 1);  /* 0C07C2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C2B4u, 1);  /* 0C07C2B2 mov.l @Rm+,Rn */
	IF(0x0C07C2B4u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07C910u: TAIL(blk_f_0C07C910); default: JUMPD(tv_); } }  /* 0C07C2B4 jmp @Rn */
L_0C07C2C0: BLKS(0x0C07C2C0u);
	r9 = 0x4000u; UPD(0x0C07C2C2u, 1);  /* 0C07C2C0 mov.w @(disp,pc),Rn */
	T = r0 == r9;  /* 0C07C2C2 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C07C214u, 4); goto L_0C07C214; }  /* 0C07C2C4 bf */
L_0C07C2C6: BLKS(0x0C07C2C6u);
	r10 = 0xC07D3B0u; UPD(0x0C07C2C8u, 1);  /* 0C07C2C6 mov.l @(disp,pc),Rn */
	IF(0x0C07C2C8u); { u32 t_ = r10; PR = 0x0C07C2CCu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07D3B0, 0x0C07D3B0u, 0x0C07C2CCu); }  /* 0C07C2C8 jsr @Rn */
L_0C07C2CC: BLKS(0x0C07C2CCu);
	IF(0x0C07C2CCu); T = (s32)r0 >= 0;  /* 0C07C2CC cmp/pz Rn */
	if (!T) { UPD(0x0C07C300u, 4); goto L_0C07C300; }  /* 0C07C2CE bf */
L_0C07C2D0: BLKS(0x0C07C2D0u);
	r8 += 0x4Au;  /* 0C07C2D0 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C07C2D4u, 2);  /* 0C07C2D2 mov.w @Rm,Rn */
	r11 = 0xB4u; UPD(0x0C07C2D6u, 1);  /* 0C07C2D4 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB6u;  /* 0C07C2D6 add #imm,Rn */
	IF(0x0C07C2D8u); MACL = r7 * r11;  /* 0C07C2D8 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C07C2DCu, 4);  /* 0C07C2DA mov.l @(disp,pc),Rn */
	IF(0x0C07C2DCu); r10 = MACL;  /* 0C07C2DC sts macl,Rn */
	r10 += r2;  /* 0C07C2DE add Rm,Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C07C2E2u, 3);  /* 0C07C2E0 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x30u); UPD(0x0C07C2E4u, 1);  /* 0C07C2E2 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C07C2E4 add Rm,Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C07C2E8u, 2);  /* 0C07C2E6 mov.l Rm,@(disp,Rn) */
	r1 = R32(r8 + 0x34u); UPD(0x0C07C2EAu, 1);  /* 0C07C2E8 mov.l @(disp,Rm),Rn */
	r9 = R32(r10 + 0x28u); UPD(0x0C07C2ECu, 1);  /* 0C07C2EA mov.l @(disp,Rm),Rn */
	r9 += r1;  /* 0C07C2EC add Rm,Rn */
	{ W32(r8 + 0x2Cu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07C214u, 4); goto L_0C07C214; }  /* 0C07C2EE bra */
L_0C07C300: BLKS(0x0C07C300u);
	r8 += 0x44u;  /* 0C07C300 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C07C304u, 2);  /* 0C07C302 mov.b @Rm,Rn */
	r12 = 0xC0BC0B0u; UPD(0x0C07C306u, 1);  /* 0C07C304 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07C306 add #imm,Rn */
	r6 = r3 & 0xFF;  /* 0C07C308 extu.b Rm,Rn */
	r5 = R32(r8 + 0x2Cu); UPD(0x0C07C30Cu, 3);  /* 0C07C30A mov.l @(disp,Rm),Rn */
	IF(0x0C07C30Cu); { u32 t_ = r12; PR = 0x0C07C310u; r4 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC0B0, 0x0C0BC0B0u, 0x0C07C310u); }  /* 0C07C30C jsr @Rn */
L_0C07C310: BLKS(0x0C07C310u);
	T = (r0 & r0) == 0;  /* 0C07C310 tst Rm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C07C314u, 2);  /* 0C07C312 mov.l @(disp,Rm),Rn */
	IF(0x0C07C314u); r3 = T;  /* 0C07C314 movt Rn */
	r7 = 0x1500000u; UPD(0x0C07C318u, 2);  /* 0C07C316 mov.l @(disp,pc),Rn */
	r2 = 0xFFF00000u; UPD(0x0C07C31Au, 1);  /* 0C07C318 mov.l @(disp,pc),Rn */
	T = (s32)r6 > (s32)r7;  /* 0C07C31A cmp/gt Rm,Rn */
	IF(0x0C07C31Cu); r11 = T;  /* 0C07C31C movt Rn */
	T = (s32)r2 > (s32)r6;  /* 0C07C31E cmp/gt Rm,Rn */
	IF(0x0C07C320u); r5 = T;  /* 0C07C320 movt Rn */
	r3 |= r11;  /* 0C07C322 or Rm,Rn */
	r3 |= r5;  /* 0C07C324 or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C07C326 tst Rm,Rn */
	if (!T) { UPD(0x0C07C2A0u, 10); goto L_0C07C2A0; }  /* 0C07C328 bf */
L_0C07C32A: BLKS(0x0C07C32Au);
	r0 = R32(r8); UPD(0x0C07C32Cu, 1);  /* 0C07C32A mov.l @Rm,Rn */
	r4 = 0xFFFFBFFFu; UPD(0x0C07C32Eu, 1);  /* 0C07C32C mov.w @(disp,pc),Rn */
	r13 = 0x20000u; UPD(0x0C07C330u, 1);  /* 0C07C32E mov.l @(disp,pc),Rn */
	r0 &= r4;  /* 0C07C330 and Rm,Rn */
	r0 |= 0x4u;  /* 0C07C332 or #imm,r0 */
	W32(r8, r0); UPD(0x0C07C336u, 3);  /* 0C07C334 mov.l Rm,@Rn */
	W32(r8 + 0x30u, r13); UPD(0x0C07C338u, 1);  /* 0C07C336 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x34u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07C214u, 3); goto L_0C07C214; }  /* 0C07C338 bra */
L_0C07C390: BLKS(0x0C07C390u);
	r8 = 0xC068E60u; UPD(0x0C07C392u, 1);  /* 0C07C390 mov.l @(disp,pc),Rn */
	r4 = R32(r11 + 0x28u); UPD(0x0C07C394u, 1);  /* 0C07C392 mov.l @(disp,Rm),Rn */
	IF(0x0C07C394u); { u32 t_ = r8; PR = 0x0C07C398u; r5 = R32(r11 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C07C398u); }  /* 0C07C394 jsr @Rn */
L_0C07C398: BLKS(0x0C07C398u);
	r10 = 0xC069B20u; UPD(0x0C07C39Au, 1);  /* 0C07C398 mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C07C39A mov Rm,Rn */
	r12 = 0x50000u; UPD(0x0C07C39Eu, 2);  /* 0C07C39C mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C07C39E mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C07C3A2u, 2);  /* 0C07C3A0 mov.l @(disp,pc),Rn */
	IF(0x0C07C3A2u); { u32 t_ = r10; PR = 0x0C07C3A6u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07C3A6u); }  /* 0C07C3A2 jsr @Rn */
L_0C07C3A6: BLKS(0x0C07C3A6u);
	r10 = r0;  /* 0C07C3A6 mov Rm,Rn */
	r4 = r9;  /* 0C07C3A8 mov Rm,Rn */
	IF(0x0C07C3AAu); { u32 t_ = r8; PR = 0x0C07C3AEu; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07C3AEu); }  /* 0C07C3AA jsr @Rn */
L_0C07C3AE: BLKS(0x0C07C3AEu);
	r1 = R32(r11 + 0x30u); UPD(0x0C07C3B0u, 1);  /* 0C07C3AE mov.l @(disp,Rm),Rn */
	r10 -= r1;  /* 0C07C3B0 sub Rm,Rn */
	IF(0x0C07C3B2u); T = (s32)r10 >= 0;  /* 0C07C3B2 cmp/pz Rn */
	if (!T) { UPD(0x0C07C400u, 5); goto L_0C07C400; }  /* 0C07C3B4 bf */
L_0C07C3B6: BLKS(0x0C07C3B6u);
	r2 = r10;  /* 0C07C3B6 mov Rm,Rn */
	IF(0x0C07C3B8u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C07C3B8 shar Rn */
	IF(0x0C07C3BAu); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C07C3BA shar Rn */
	r5 = 0x1u;  /* 0C07C3BC mov #imm,Rn */
	r2 |= r5;  /* 0C07C3BE or Rm,Rn */
	r2 += r1;  /* 0C07C3C0 add Rm,Rn */
	r1 = R32(r11 + 0x34u); UPD(0x0C07C3C4u, 7);  /* 0C07C3C2 mov.l @(disp,Rm),Rn */
	r0 -= r1;  /* 0C07C3C4 sub Rm,Rn */
	IF(0x0C07C3C6u); T = (s32)r0 >= 0;  /* 0C07C3C6 cmp/pz Rn */
	{ u32 c_ = !T; W32(r11 + 0x30u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07C3F0u, 5); goto L_0C07C3F0; } UPD(0x0C07C3CCu, 1); goto L_0C07C3CC; }  /* 0C07C3C8 bf/s */
L_0C07C3CC: BLKS(0x0C07C3CCu);
	r6 = R32(r11 + 0x28u); UPD(0x0C07C3CEu, 1);  /* 0C07C3CC mov.l @(disp,Rm),Rn */
	IF(0x0C07C3CEu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07C3CE shar Rn */
	r6 += r2;  /* 0C07C3D0 add Rm,Rn */
	IF(0x0C07C3D2u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07C3D2 shar Rn */
	r2 = R32(r11 + 0x2Cu); UPD(0x0C07C3D6u, 4);  /* 0C07C3D4 mov.l @(disp,Rm),Rn */
	r0 |= 0x1u;  /* 0C07C3D6 or #imm,r0 */
	r0 += r1;  /* 0C07C3D8 add Rm,Rn */
	r2 += r0;  /* 0C07C3DA add Rm,Rn */
	W32(r11 + 0x34u, r0); UPD(0x0C07C3DEu, 4);  /* 0C07C3DC mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r6); UPD(0x0C07C3E0u, 1);  /* 0C07C3DE mov.l Rm,@(disp,Rn) */
	{ W32(r11 + 0x2Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07C1EAu, 3); goto L_0C07C1EA; }  /* 0C07C3E0 bra */
L_0C07C3F0: BLKS(0x0C07C3F0u);
	{ r0 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C07C3CCu, 3); goto L_0C07C3CC; }  /* 0C07C3F0 bra */
L_0C07C400: BLKS(0x0C07C400u);
	{ r10 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C07C3B6u, 3); goto L_0C07C3B6; }  /* 0C07C400 bra */
L_0C07C410: BLKS(0x0C07C410u);
	r0 = 0xC3BC7CCu; UPD(0x0C07C412u, 1);  /* 0C07C410 mov.l @(disp,pc),Rn */
	r2 = 0xC06A380u; UPD(0x0C07C414u, 1);  /* 0C07C412 mov.l @(disp,pc),Rn */
	IF(0x0C07C414u); r12 = MACL;  /* 0C07C414 sts macl,Rn */
	r12 += r0;  /* 0C07C416 add Rm,Rn */
	r7 = R32(r8 + 0x14u); UPD(0x0C07C41Au, 3);  /* 0C07C418 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x10u); UPD(0x0C07C41Cu, 1);  /* 0C07C41A mov.l @(disp,Rm),Rn */
	r5 = R32(r12 + 0x2Cu); UPD(0x0C07C41Eu, 1);  /* 0C07C41C mov.l @(disp,Rm),Rn */
	IF(0x0C07C41Eu); { u32 t_ = r2; PR = 0x0C07C422u; r4 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06A380, 0x0C06A380u, 0x0C07C422u); }  /* 0C07C41E jsr @Rn */
L_0C07C422: BLKS(0x0C07C422u);
	r7 = R32(r10); UPD(0x0C07C424u, 1);  /* 0C07C422 mov.l @Rm,Rn */
	r3 = 0xFFFFFFF4u;  /* 0C07C424 mov #imm,Rn */
	IF(0x0C07C426u); ARG0(0x473Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C07C426 shad Rm,Rn */
	r5 = 0u - r7;  /* 0C07C428 neg Rm,Rn */
	r5 += 0x60u;  /* 0C07C42A add #imm,Rn */
	r6 = 0x11u;  /* 0C07C42C mov #imm,Rn */
	IF(0x0C07C42Eu); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C07C42E shld Rm,Rn */
	T = (s32)r0 >= (s32)r5;  /* 0C07C430 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C07C43Au, 10); goto L_0C07C43A; }  /* 0C07C432 bt */
L_0C07C434: BLKS(0x0C07C434u);
	r4 = 0xFFFFFFFu; UPD(0x0C07C436u, 1);  /* 0C07C434 mov.l @(disp,pc),Rn */
	T = (s32)r0 >= (s32)r4;  /* 0C07C436 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C07C43Eu, 4); goto L_0C07C43E; }  /* 0C07C438 bf */
L_0C07C43A: BLKS(0x0C07C43Au);
	{ IF(0x0C07C43Cu); ; /* slot nop */ UPD(0x0C07C1A4u, 3); goto L_0C07C1A4; }  /* 0C07C43A bra */
L_0C07C43E: BLKS(0x0C07C43Eu);
	r10 = 0x1u;  /* 0C07C43E mov #imm,Rn */
	IF(0x0C07C440u); ARG0(0x4A9Du); { s32 s_ = (s32)r9; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = 0; else r10 >>= ((~s_ & 31) + 1); }  /* 0C07C440 shld Rm,Rn */
	r12 += 0x4Eu;  /* 0C07C442 add #imm,Rn */
	W8(r12, r10); UPD(0x0C07C446u, 4);  /* 0C07C444 mov.b Rm,@Rn */
	r12 += 0xFFFFFFB2u;  /* 0C07C446 add #imm,Rn */
	r2 = R32(r12); UPD(0x0C07C44Au, 2);  /* 0C07C448 mov.l @Rm,Rn */
	r8 = 0x4000u; UPD(0x0C07C44Cu, 1);  /* 0C07C44A mov.w @(disp,pc),Rn */
	T = (r2 & r8) == 0;  /* 0C07C44C tst Rm,Rn */
	if (T) { UPD(0x0C07C45Au, 4); goto L_0C07C45A; }  /* 0C07C44E bt */
L_0C07C450: BLKS(0x0C07C450u);
	r9 = 0xFFFFBFFFu; UPD(0x0C07C452u, 1);  /* 0C07C450 mov.w @(disp,pc),Rn */
	r2 &= r9;  /* 0C07C452 and Rm,Rn */
	W32(r12, r2); UPD(0x0C07C456u, 2);  /* 0C07C454 mov.l Rm,@Rn */
	W32(r12 + 0x34u, r11); UPD(0x0C07C458u, 1);  /* 0C07C456 mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x30u, r11); UPD(0x0C07C45Au, 1);  /* 0C07C458 mov.l Rm,@(disp,Rn) */
L_0C07C45A: BLKS(0x0C07C45Au);
	{ r3 = 0x60u; /* slot mov #imm,Rn */ UPD(0x0C07C1B4u, 3); goto L_0C07C1B4; }  /* 0C07C45A bra */
L_0C07D760: BLKS(0x0C07D760u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07D762u, 1);  /* 0C07D760 mov.l Rm,@-Rn */
	r2 = 0x60u;  /* 0C07D762 mov #imm,Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C07D764 exts.w Rm,Rn */
	IF(0x0C07D766u); MACL = r8 * r2;  /* 0C07D766 mul.l Rm,Rn */
	r0 = 0xC3BC7CCu; UPD(0x0C07D76Au, 5);  /* 0C07D768 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D76Cu, 1);  /* 0C07D76A mov.l Rm,@-Rn */
	IF(0x0C07D76Cu); r2 = MACL;  /* 0C07D76C sts macl,Rn */
	r2 += r0;  /* 0C07D76E add Rm,Rn */
	IF(0x0C07D770u); r15 -= 4; W32(r15, PR); UPD(0x0C07D772u, 3);  /* 0C07D770 sts.l pr,@-Rn */
	r3 = r2;  /* 0C07D772 mov Rm,Rn */
	r3 += 0x4Fu;  /* 0C07D774 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C07D778u, 3);  /* 0C07D776 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C07D778 add #imm,Rn */
	W8(r3, r0); UPD(0x0C07D77Cu, 2);  /* 0C07D77A mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C07D77C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07D77E tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07D7A0u, 5); goto L_0C07D7A0; } UPD(0x0C07D784u, 1); goto L_0C07D784; }  /* 0C07D780 bt/s */
L_0C07D784: BLKS(0x0C07D784u);
	r5 = 0xC07C160u; UPD(0x0C07D786u, 1);  /* 0C07D784 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C07D786 mov Rm,Rn */
	r15 = r14;  /* 0C07D788 mov Rm,Rn */
	IF(0x0C07D78Au); PR = R32(r15); r15 += 4; UPD(0x0C07D78Cu, 3);  /* 0C07D78A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07D78Eu, 1);  /* 0C07D78C mov.l @Rm+,Rn */
	IF(0x0C07D78Eu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07C160u: goto L_0C07C160; default: JUMPD(tv_); } }  /* 0C07D78E jmp @Rn */
L_0C07D7A0: BLKS(0x0C07D7A0u);
	r0 = R32(r2 + 0xCu); UPD(0x0C07D7A2u, 1);  /* 0C07D7A0 mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C07D7A2 mov Rm,Rn */
	r3 = 0xC07BFE0u; UPD(0x0C07D7A6u, 2);  /* 0C07D7A4 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C07D7A6 add #imm,Rn */
	r0 &= 0x7u;  /* 0C07D7A8 and #imm,r0 */
	IF(0x0C07D7AAu); { u32 t_ = r3; PR = 0x0C07D7AEu; W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C07BFE0, 0x0C07BFE0u, 0x0C07D7AEu); }  /* 0C07D7AA jsr @Rn */
L_0C07D7AE: BLKS(0x0C07D7AEu);
	{ IF(0x0C07D7B0u); ; /* slot nop */ UPD(0x0C07D784u, 3); goto L_0C07D784; }  /* 0C07D7AE bra */
}

void blk_f_0C07D7C0(sh3_t *c)
{
	LOCALS;
	goto L_0C07D7C0;
L_0C07C160: BLKS(0x0C07C160u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07C162u, 1);  /* 0C07C160 mov.l Rm,@-Rn */
	r0 = 0x60u;  /* 0C07C162 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07C166u, 2);  /* 0C07C164 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07C168u, 1);  /* 0C07C166 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07C16Au, 1);  /* 0C07C168 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07C16Cu, 1);  /* 0C07C16A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07C16Eu, 1);  /* 0C07C16C mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C07C16E exts.w Rm,Rn */
	IF(0x0C07C170u); MACL = r13 * r0;  /* 0C07C170 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07C174u, 4);  /* 0C07C172 mov.l Rm,@-Rn */
	r0 = 0xC3BC81Au; UPD(0x0C07C176u, 1);  /* 0C07C174 mov.l @(disp,pc),Rn */
	IF(0x0C07C176u); r3 = MACL;  /* 0C07C176 sts macl,Rn */
	IF(0x0C07C178u); r15 -= 4; W32(r15, PR); UPD(0x0C07C17Au, 2);  /* 0C07C178 sts.l pr,@-Rn */
	IF(0x0C07C17Au); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07C17Cu, 1);  /* 0C07C17A mov.b @(r0,Rm),Rn */
	r8 = 0xC29D1D8u; UPD(0x0C07C17Eu, 1);  /* 0C07C17C mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C07C17E tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C1B2u, 4); goto L_0C07C1B2; } goto L_0C07C184; }  /* 0C07C180 bf/s */
L_0C07C184: BLKS(0x0C07C184u);
	r10 = r8;  /* 0C07C184 mov Rm,Rn */
	r9 = 0x0u;  /* 0C07C186 mov #imm,Rn */
	r10 += 0x18u;  /* 0C07C188 add #imm,Rn */
	IF(0x0C07C18Au); ;  /* 0C07C18A nop */
	UPD(0x0C07C18Cu, 5);
L_0C07C18C: BLKS(0x0C07C18Cu);
	r1 = R32(r8); UPD(0x0C07C18Eu, 1);  /* 0C07C18C mov.l @Rm,Rn */
	r4 = 0x10000000u; UPD(0x0C07C190u, 1);  /* 0C07C18E mov.l @(disp,pc),Rn */
	T = (r1 & r4) == 0;  /* 0C07C190 tst Rm,Rn */
	if (T) { UPD(0x0C07C1A4u, 4); goto L_0C07C1A4; }  /* 0C07C192 bt */
L_0C07C194: BLKS(0x0C07C194u);
	r0 = 0x270u; UPD(0x0C07C196u, 1);  /* 0C07C194 mov.w @(disp,pc),Rn */
	IF(0x0C07C196u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07C198u, 1);  /* 0C07C196 mov.b @(r0,Rm),Rn */
	r11 = r2 & 0xFF;  /* 0C07C198 extu.b Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C07C19A tst Rm,Rn */
	{ u32 c_ = !T; r12 = 0x60u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07C1A4u, 5); goto L_0C07C1A4; } goto L_0C07C1A0; }  /* 0C07C19C bf/s */
L_0C07C1A0: BLKS(0x0C07C1A0u);
	{ IF(0x0C07C1A2u); MACL = r13 * r12; /* slot mul.l Rm,Rn */ UPD(0x0C07C410u, 5); goto L_0C07C410; }  /* 0C07C1A0 bra */
L_0C07C1A4: BLKS(0x0C07C1A4u);
	r5 = 0x2A0u; UPD(0x0C07C1A6u, 1);  /* 0C07C1A4 mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C07C1A6 add #imm,Rn */
	r11 = 0x1u;  /* 0C07C1A8 mov #imm,Rn */
	r10 += r5;  /* 0C07C1AA add Rm,Rn */
	T = (s32)r9 > (s32)r11;  /* 0C07C1AC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += r5; /* slot add Rm,Rn */ if (c_) { UPD(0x0C07C18Cu, 7); goto L_0C07C18C; } UPD(0x0C07C1B2u, 1); goto L_0C07C1B2; }  /* 0C07C1AE bf/s */
L_0C07C1B2: BLKS(0x0C07C1B2u);
	r3 = 0x60u;  /* 0C07C1B2 mov #imm,Rn */
	UPD(0x0C07C1B4u, 1);
L_0C07C1B4: BLKS(0x0C07C1B4u);
	IF(0x0C07C1B4u); MACL = r13 * r3;  /* 0C07C1B4 mul.l Rm,Rn */
	r7 = 0xC3BC7CCu; UPD(0x0C07C1B8u, 3);  /* 0C07C1B6 mov.l @(disp,pc),Rn */
	IF(0x0C07C1B8u); r11 = MACL;  /* 0C07C1B8 sts macl,Rn */
	r11 += r7;  /* 0C07C1BA add Rm,Rn */
	r3 = r11;  /* 0C07C1BC mov Rm,Rn */
	r3 += 0x4Eu;  /* 0C07C1BE add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C07C1C2u, 5);  /* 0C07C1C0 mov.b @Rm,Rn */
	r2 = r6 & 0xFF;  /* 0C07C1C2 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07C1C4 tst Rm,Rn */
	if (T) { UPD(0x0C07C1EAu, 5); goto L_0C07C1EA; }  /* 0C07C1C6 bt */
L_0C07C1C8: BLKS(0x0C07C1C8u);
	r4 = 0x2A0u; UPD(0x0C07C1CAu, 1);  /* 0C07C1C8 mov.w @(disp,pc),Rn */
	IF(0x0C07C1CAu); MACL = r2 * r4;  /* 0C07C1CA mul.l Rm,Rn */
	r12 = 0xC29D1D8u; UPD(0x0C07C1CEu, 3);  /* 0C07C1CC mov.l @(disp,pc),Rn */
	IF(0x0C07C1CEu); r8 = MACL;  /* 0C07C1CE sts macl,Rn */
	r12 -= r4;  /* 0C07C1D0 sub Rm,Rn */
	r8 += r12;  /* 0C07C1D2 add Rm,Rn */
	r2 = R32(r8); UPD(0x0C07C1D6u, 4);  /* 0C07C1D4 mov.l @Rm,Rn */
	r0 = 0x10000000u; UPD(0x0C07C1D8u, 1);  /* 0C07C1D6 mov.l @(disp,pc),Rn */
	r2 &= r0;  /* 0C07C1D8 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07C1DA tst Rm,Rn */
	if (T) { UPD(0x0C07C1E4u, 5); goto L_0C07C1E4; }  /* 0C07C1DC bt */
L_0C07C1DE: BLKS(0x0C07C1DEu);
	r6 = R32(r8 + 0x10u); UPD(0x0C07C1E0u, 1);  /* 0C07C1DE mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C07C390u, 3); goto L_0C07C390; }  /* 0C07C1E0 bra */
L_0C07C1E4: BLKS(0x0C07C1E4u);
	W32(r11 + 0x34u, r2); UPD(0x0C07C1E6u, 1);  /* 0C07C1E4 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x30u, r2); UPD(0x0C07C1E8u, 1);  /* 0C07C1E6 mov.l Rm,@(disp,Rn) */
	W8(r3, r2); UPD(0x0C07C1EAu, 1);  /* 0C07C1E8 mov.b Rm,@Rn */
L_0C07C1EA: BLKS(0x0C07C1EAu);
	r3 = 0x60u;  /* 0C07C1EA mov #imm,Rn */
	IF(0x0C07C1ECu); MACL = r13 * r3;  /* 0C07C1EC mul.l Rm,Rn */
	r7 = 0xC3BC7CCu; UPD(0x0C07C1F0u, 4);  /* 0C07C1EE mov.l @(disp,pc),Rn */
	IF(0x0C07C1F0u); r8 = MACL;  /* 0C07C1F0 sts macl,Rn */
	r8 += r7;  /* 0C07C1F2 add Rm,Rn */
	r8 += 0x4Eu;  /* 0C07C1F4 add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r8); UPD(0x0C07C1F8u, 4);  /* 0C07C1F6 mov.b @Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C07C1F8 tst Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFB2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C214u, 4); goto L_0C07C214; } goto L_0C07C1FE; }  /* 0C07C1FA bf/s */
L_0C07C1FE: BLKS(0x0C07C1FEu);
	r0 = R32(r8); UPD(0x0C07C200u, 2);  /* 0C07C1FE mov.l @Rm,Rn */
	r4 = 0x4010u; UPD(0x0C07C202u, 1);  /* 0C07C200 mov.w @(disp,pc),Rn */
	r0 &= r4;  /* 0C07C202 and Rm,Rn */
	T = r0 == 0x10u;  /* 0C07C204 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C07C214u, 5); goto L_0C07C214; }  /* 0C07C206 bt */
L_0C07C208: BLKS(0x0C07C208u);
	r12 = 0x10u;  /* 0C07C208 mov #imm,Rn */
	T = r0 > r12;  /* 0C07C20A cmp/hi Rm,Rn */
	{ u32 c_ = T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C07C2C0u, 5); goto L_0C07C2C0; } goto L_0C07C210; }  /* 0C07C20C bt/s */
L_0C07C210: BLKS(0x0C07C210u);
	if (T) { UPD(0x0C07C230u, 4); goto L_0C07C230; }  /* 0C07C210 bt */
L_0C07C212: BLKS(0x0C07C212u);
	IF(0x0C07C212u); ;  /* 0C07C212 nop */
	UPD(0x0C07C214u, 1);
L_0C07C214: BLKS(0x0C07C214u);
	r15 = r14;  /* 0C07C214 mov Rm,Rn */
	IF(0x0C07C216u); PR = R32(r15); r15 += 4; UPD(0x0C07C218u, 2);  /* 0C07C216 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C21Au, 1);  /* 0C07C218 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07C21Cu, 1);  /* 0C07C21A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07C21Eu, 1);  /* 0C07C21C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C220u, 1);  /* 0C07C21E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C222u, 1);  /* 0C07C220 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C224u, 1);  /* 0C07C222 mov.l @Rm+,Rn */
	IF(0x0C07C224u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07C224 rts */
L_0C07C230: BLKS(0x0C07C230u);
	r2 = R32(r8 + 0x30u); UPD(0x0C07C232u, 1);  /* 0C07C230 mov.l @(disp,Rm),Rn */
	r8 += 0x40u;  /* 0C07C232 add #imm,Rn */
	r0 = R32(r8); UPD(0x0C07C236u, 2);  /* 0C07C234 mov.l @Rm,Rn */
	T = (s32)r2 > (s32)r0;  /* 0C07C236 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C244u, 4); goto L_0C07C244; } goto L_0C07C23C; }  /* 0C07C238 bf/s */
L_0C07C23C: BLKS(0x0C07C23Cu);
	r10 = 0xFFFFF000u; UPD(0x0C07C23Eu, 2);  /* 0C07C23C mov.w @(disp,pc),Rn */
	r10 += r2;  /* 0C07C23E add Rm,Rn */
	W32(r8 + 0x30u, r10); UPD(0x0C07C242u, 2);  /* 0C07C240 mov.l Rm,@(disp,Rn) */
	r2 = r10;  /* 0C07C242 mov Rm,Rn */
	UPD(0x0C07C244u, 1);
L_0C07C244: BLKS(0x0C07C244u);
	r6 = R32(r8 + 0x28u); UPD(0x0C07C246u, 1);  /* 0C07C244 mov.l @(disp,Rm),Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C07C248u, 1);  /* 0C07C246 mov.l @(disp,Rm),Rn */
	r6 += r2;  /* 0C07C248 add Rm,Rn */
	r7 = R32(r8 + 0x34u); UPD(0x0C07C24Cu, 2);  /* 0C07C24A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C07C24Eu, 1);  /* 0C07C24C mov.l Rm,@(disp,Rn) */
	r3 += r7;  /* 0C07C24E add Rm,Rn */
	r1 = 0xC0000u; UPD(0x0C07C252u, 2);  /* 0C07C250 mov.l @(disp,pc),Rn */
	r5 = 0x30C0000u; UPD(0x0C07C254u, 1);  /* 0C07C252 mov.l @(disp,pc),Rn */
	r6 += r1;  /* 0C07C254 add Rm,Rn */
	T = r6 > r5;  /* 0C07C256 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07C2A0u, 5); goto L_0C07C2A0; } UPD(0x0C07C25Cu, 1); goto L_0C07C25C; }  /* 0C07C258 bt/s */
L_0C07C25C: BLKS(0x0C07C25Cu);
	r2 = 0xFE8C0000u; UPD(0x0C07C25Eu, 1);  /* 0C07C25C mov.l @(disp,pc),Rn */
	r13 = 0x1180000u; UPD(0x0C07C260u, 1);  /* 0C07C25E mov.l @(disp,pc),Rn */
	r2 += r3;  /* 0C07C260 add Rm,Rn */
	T = r2 > r13;  /* 0C07C262 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r6 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C272u, 5); goto L_0C07C272; } goto L_0C07C268; }  /* 0C07C264 bf/s */
L_0C07C268: BLKS(0x0C07C268u);
	r11 = 0u - r7;  /* 0C07C268 neg Rm,Rn */
	r3 += r11;  /* 0C07C26A add Rm,Rn */
	W32(r8 + 0x34u, r11); UPD(0x0C07C26Eu, 4);  /* 0C07C26C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r3); UPD(0x0C07C270u, 1);  /* 0C07C26E mov.l Rm,@(disp,Rn) */
	r6 = r8;  /* 0C07C270 mov Rm,Rn */
	UPD(0x0C07C272u, 1);
L_0C07C272: BLKS(0x0C07C272u);
	r6 += 0x44u;  /* 0C07C272 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C07C276u, 2);  /* 0C07C274 mov.b @Rm,Rn */
	r9 = 0x13u;  /* 0C07C276 mov #imm,Rn */
	r4 = 0xC2B039Cu; UPD(0x0C07C27Au, 2);  /* 0C07C278 mov.l @(disp,pc),Rn */
	r12 = r3 & 0xFF;  /* 0C07C27A extu.b Rm,Rn */
	r0 = R32(r4); UPD(0x0C07C27Eu, 2);  /* 0C07C27C mov.l @Rm,Rn */
	T = r9 >= r12;  /* 0C07C27E cmp/hs Rm,Rn */
	IF(0x0C07C280u); r8 = T;  /* 0C07C280 movt Rn */
	r0 &= 0x3u;  /* 0C07C282 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07C284 tst Rm,Rn */
	IF(0x0C07C286u); r7 = T;  /* 0C07C286 movt Rn */
	r8 &= r7;  /* 0C07C288 and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C07C28A tst Rm,Rn */
	if (T) { UPD(0x0C07C214u, 10); goto L_0C07C214; }  /* 0C07C28C bt */
L_0C07C28E: BLKS(0x0C07C28Eu);
	r0 = r3;  /* 0C07C28E mov Rm,Rn */
	r0 += 0x1u;  /* 0C07C290 add #imm,Rn */
	{ W8(r6, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C07C214u, 5); goto L_0C07C214; }  /* 0C07C292 bra */
L_0C07C2A0: BLKS(0x0C07C2A0u);
	r0 = 0xC07C910u; UPD(0x0C07C2A2u, 1);  /* 0C07C2A0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C07C2A2 mov Rm,Rn */
	r15 = r14;  /* 0C07C2A4 mov Rm,Rn */
	IF(0x0C07C2A6u); PR = R32(r15); r15 += 4; UPD(0x0C07C2A8u, 3);  /* 0C07C2A6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C2AAu, 1);  /* 0C07C2A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07C2ACu, 1);  /* 0C07C2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07C2AEu, 1);  /* 0C07C2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C2B0u, 1);  /* 0C07C2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C2B2u, 1);  /* 0C07C2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C2B4u, 1);  /* 0C07C2B2 mov.l @Rm+,Rn */
	IF(0x0C07C2B4u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07C910u: TAIL(blk_f_0C07C910); default: JUMPD(tv_); } }  /* 0C07C2B4 jmp @Rn */
L_0C07C2C0: BLKS(0x0C07C2C0u);
	r9 = 0x4000u; UPD(0x0C07C2C2u, 1);  /* 0C07C2C0 mov.w @(disp,pc),Rn */
	T = r0 == r9;  /* 0C07C2C2 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C07C214u, 4); goto L_0C07C214; }  /* 0C07C2C4 bf */
L_0C07C2C6: BLKS(0x0C07C2C6u);
	r10 = 0xC07D3B0u; UPD(0x0C07C2C8u, 1);  /* 0C07C2C6 mov.l @(disp,pc),Rn */
	IF(0x0C07C2C8u); { u32 t_ = r10; PR = 0x0C07C2CCu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07D3B0, 0x0C07D3B0u, 0x0C07C2CCu); }  /* 0C07C2C8 jsr @Rn */
L_0C07C2CC: BLKS(0x0C07C2CCu);
	IF(0x0C07C2CCu); T = (s32)r0 >= 0;  /* 0C07C2CC cmp/pz Rn */
	if (!T) { UPD(0x0C07C300u, 4); goto L_0C07C300; }  /* 0C07C2CE bf */
L_0C07C2D0: BLKS(0x0C07C2D0u);
	r8 += 0x4Au;  /* 0C07C2D0 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C07C2D4u, 2);  /* 0C07C2D2 mov.w @Rm,Rn */
	r11 = 0xB4u; UPD(0x0C07C2D6u, 1);  /* 0C07C2D4 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB6u;  /* 0C07C2D6 add #imm,Rn */
	IF(0x0C07C2D8u); MACL = r7 * r11;  /* 0C07C2D8 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C07C2DCu, 4);  /* 0C07C2DA mov.l @(disp,pc),Rn */
	IF(0x0C07C2DCu); r10 = MACL;  /* 0C07C2DC sts macl,Rn */
	r10 += r2;  /* 0C07C2DE add Rm,Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C07C2E2u, 3);  /* 0C07C2E0 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x30u); UPD(0x0C07C2E4u, 1);  /* 0C07C2E2 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C07C2E4 add Rm,Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C07C2E8u, 2);  /* 0C07C2E6 mov.l Rm,@(disp,Rn) */
	r1 = R32(r8 + 0x34u); UPD(0x0C07C2EAu, 1);  /* 0C07C2E8 mov.l @(disp,Rm),Rn */
	r9 = R32(r10 + 0x28u); UPD(0x0C07C2ECu, 1);  /* 0C07C2EA mov.l @(disp,Rm),Rn */
	r9 += r1;  /* 0C07C2EC add Rm,Rn */
	{ W32(r8 + 0x2Cu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07C214u, 4); goto L_0C07C214; }  /* 0C07C2EE bra */
L_0C07C300: BLKS(0x0C07C300u);
	r8 += 0x44u;  /* 0C07C300 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C07C304u, 2);  /* 0C07C302 mov.b @Rm,Rn */
	r12 = 0xC0BC0B0u; UPD(0x0C07C306u, 1);  /* 0C07C304 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07C306 add #imm,Rn */
	r6 = r3 & 0xFF;  /* 0C07C308 extu.b Rm,Rn */
	r5 = R32(r8 + 0x2Cu); UPD(0x0C07C30Cu, 3);  /* 0C07C30A mov.l @(disp,Rm),Rn */
	IF(0x0C07C30Cu); { u32 t_ = r12; PR = 0x0C07C310u; r4 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC0B0, 0x0C0BC0B0u, 0x0C07C310u); }  /* 0C07C30C jsr @Rn */
L_0C07C310: BLKS(0x0C07C310u);
	T = (r0 & r0) == 0;  /* 0C07C310 tst Rm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C07C314u, 2);  /* 0C07C312 mov.l @(disp,Rm),Rn */
	IF(0x0C07C314u); r3 = T;  /* 0C07C314 movt Rn */
	r7 = 0x1500000u; UPD(0x0C07C318u, 2);  /* 0C07C316 mov.l @(disp,pc),Rn */
	r2 = 0xFFF00000u; UPD(0x0C07C31Au, 1);  /* 0C07C318 mov.l @(disp,pc),Rn */
	T = (s32)r6 > (s32)r7;  /* 0C07C31A cmp/gt Rm,Rn */
	IF(0x0C07C31Cu); r11 = T;  /* 0C07C31C movt Rn */
	T = (s32)r2 > (s32)r6;  /* 0C07C31E cmp/gt Rm,Rn */
	IF(0x0C07C320u); r5 = T;  /* 0C07C320 movt Rn */
	r3 |= r11;  /* 0C07C322 or Rm,Rn */
	r3 |= r5;  /* 0C07C324 or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C07C326 tst Rm,Rn */
	if (!T) { UPD(0x0C07C2A0u, 10); goto L_0C07C2A0; }  /* 0C07C328 bf */
L_0C07C32A: BLKS(0x0C07C32Au);
	r0 = R32(r8); UPD(0x0C07C32Cu, 1);  /* 0C07C32A mov.l @Rm,Rn */
	r4 = 0xFFFFBFFFu; UPD(0x0C07C32Eu, 1);  /* 0C07C32C mov.w @(disp,pc),Rn */
	r13 = 0x20000u; UPD(0x0C07C330u, 1);  /* 0C07C32E mov.l @(disp,pc),Rn */
	r0 &= r4;  /* 0C07C330 and Rm,Rn */
	r0 |= 0x4u;  /* 0C07C332 or #imm,r0 */
	W32(r8, r0); UPD(0x0C07C336u, 3);  /* 0C07C334 mov.l Rm,@Rn */
	W32(r8 + 0x30u, r13); UPD(0x0C07C338u, 1);  /* 0C07C336 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x34u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07C214u, 3); goto L_0C07C214; }  /* 0C07C338 bra */
L_0C07C390: BLKS(0x0C07C390u);
	r8 = 0xC068E60u; UPD(0x0C07C392u, 1);  /* 0C07C390 mov.l @(disp,pc),Rn */
	r4 = R32(r11 + 0x28u); UPD(0x0C07C394u, 1);  /* 0C07C392 mov.l @(disp,Rm),Rn */
	IF(0x0C07C394u); { u32 t_ = r8; PR = 0x0C07C398u; r5 = R32(r11 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C07C398u); }  /* 0C07C394 jsr @Rn */
L_0C07C398: BLKS(0x0C07C398u);
	r10 = 0xC069B20u; UPD(0x0C07C39Au, 1);  /* 0C07C398 mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C07C39A mov Rm,Rn */
	r12 = 0x50000u; UPD(0x0C07C39Eu, 2);  /* 0C07C39C mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C07C39E mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C07C3A2u, 2);  /* 0C07C3A0 mov.l @(disp,pc),Rn */
	IF(0x0C07C3A2u); { u32 t_ = r10; PR = 0x0C07C3A6u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07C3A6u); }  /* 0C07C3A2 jsr @Rn */
L_0C07C3A6: BLKS(0x0C07C3A6u);
	r10 = r0;  /* 0C07C3A6 mov Rm,Rn */
	r4 = r9;  /* 0C07C3A8 mov Rm,Rn */
	IF(0x0C07C3AAu); { u32 t_ = r8; PR = 0x0C07C3AEu; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07C3AEu); }  /* 0C07C3AA jsr @Rn */
L_0C07C3AE: BLKS(0x0C07C3AEu);
	r1 = R32(r11 + 0x30u); UPD(0x0C07C3B0u, 1);  /* 0C07C3AE mov.l @(disp,Rm),Rn */
	r10 -= r1;  /* 0C07C3B0 sub Rm,Rn */
	IF(0x0C07C3B2u); T = (s32)r10 >= 0;  /* 0C07C3B2 cmp/pz Rn */
	if (!T) { UPD(0x0C07C400u, 5); goto L_0C07C400; }  /* 0C07C3B4 bf */
L_0C07C3B6: BLKS(0x0C07C3B6u);
	r2 = r10;  /* 0C07C3B6 mov Rm,Rn */
	IF(0x0C07C3B8u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C07C3B8 shar Rn */
	IF(0x0C07C3BAu); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C07C3BA shar Rn */
	r5 = 0x1u;  /* 0C07C3BC mov #imm,Rn */
	r2 |= r5;  /* 0C07C3BE or Rm,Rn */
	r2 += r1;  /* 0C07C3C0 add Rm,Rn */
	r1 = R32(r11 + 0x34u); UPD(0x0C07C3C4u, 7);  /* 0C07C3C2 mov.l @(disp,Rm),Rn */
	r0 -= r1;  /* 0C07C3C4 sub Rm,Rn */
	IF(0x0C07C3C6u); T = (s32)r0 >= 0;  /* 0C07C3C6 cmp/pz Rn */
	{ u32 c_ = !T; W32(r11 + 0x30u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07C3F0u, 5); goto L_0C07C3F0; } UPD(0x0C07C3CCu, 1); goto L_0C07C3CC; }  /* 0C07C3C8 bf/s */
L_0C07C3CC: BLKS(0x0C07C3CCu);
	r6 = R32(r11 + 0x28u); UPD(0x0C07C3CEu, 1);  /* 0C07C3CC mov.l @(disp,Rm),Rn */
	IF(0x0C07C3CEu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07C3CE shar Rn */
	r6 += r2;  /* 0C07C3D0 add Rm,Rn */
	IF(0x0C07C3D2u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07C3D2 shar Rn */
	r2 = R32(r11 + 0x2Cu); UPD(0x0C07C3D6u, 4);  /* 0C07C3D4 mov.l @(disp,Rm),Rn */
	r0 |= 0x1u;  /* 0C07C3D6 or #imm,r0 */
	r0 += r1;  /* 0C07C3D8 add Rm,Rn */
	r2 += r0;  /* 0C07C3DA add Rm,Rn */
	W32(r11 + 0x34u, r0); UPD(0x0C07C3DEu, 4);  /* 0C07C3DC mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r6); UPD(0x0C07C3E0u, 1);  /* 0C07C3DE mov.l Rm,@(disp,Rn) */
	{ W32(r11 + 0x2Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07C1EAu, 3); goto L_0C07C1EA; }  /* 0C07C3E0 bra */
L_0C07C3F0: BLKS(0x0C07C3F0u);
	{ r0 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C07C3CCu, 3); goto L_0C07C3CC; }  /* 0C07C3F0 bra */
L_0C07C400: BLKS(0x0C07C400u);
	{ r10 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C07C3B6u, 3); goto L_0C07C3B6; }  /* 0C07C400 bra */
L_0C07C410: BLKS(0x0C07C410u);
	r0 = 0xC3BC7CCu; UPD(0x0C07C412u, 1);  /* 0C07C410 mov.l @(disp,pc),Rn */
	r2 = 0xC06A380u; UPD(0x0C07C414u, 1);  /* 0C07C412 mov.l @(disp,pc),Rn */
	IF(0x0C07C414u); r12 = MACL;  /* 0C07C414 sts macl,Rn */
	r12 += r0;  /* 0C07C416 add Rm,Rn */
	r7 = R32(r8 + 0x14u); UPD(0x0C07C41Au, 3);  /* 0C07C418 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x10u); UPD(0x0C07C41Cu, 1);  /* 0C07C41A mov.l @(disp,Rm),Rn */
	r5 = R32(r12 + 0x2Cu); UPD(0x0C07C41Eu, 1);  /* 0C07C41C mov.l @(disp,Rm),Rn */
	IF(0x0C07C41Eu); { u32 t_ = r2; PR = 0x0C07C422u; r4 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06A380, 0x0C06A380u, 0x0C07C422u); }  /* 0C07C41E jsr @Rn */
L_0C07C422: BLKS(0x0C07C422u);
	r7 = R32(r10); UPD(0x0C07C424u, 1);  /* 0C07C422 mov.l @Rm,Rn */
	r3 = 0xFFFFFFF4u;  /* 0C07C424 mov #imm,Rn */
	IF(0x0C07C426u); ARG0(0x473Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C07C426 shad Rm,Rn */
	r5 = 0u - r7;  /* 0C07C428 neg Rm,Rn */
	r5 += 0x60u;  /* 0C07C42A add #imm,Rn */
	r6 = 0x11u;  /* 0C07C42C mov #imm,Rn */
	IF(0x0C07C42Eu); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C07C42E shld Rm,Rn */
	T = (s32)r0 >= (s32)r5;  /* 0C07C430 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C07C43Au, 10); goto L_0C07C43A; }  /* 0C07C432 bt */
L_0C07C434: BLKS(0x0C07C434u);
	r4 = 0xFFFFFFFu; UPD(0x0C07C436u, 1);  /* 0C07C434 mov.l @(disp,pc),Rn */
	T = (s32)r0 >= (s32)r4;  /* 0C07C436 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C07C43Eu, 4); goto L_0C07C43E; }  /* 0C07C438 bf */
L_0C07C43A: BLKS(0x0C07C43Au);
	{ IF(0x0C07C43Cu); ; /* slot nop */ UPD(0x0C07C1A4u, 3); goto L_0C07C1A4; }  /* 0C07C43A bra */
L_0C07C43E: BLKS(0x0C07C43Eu);
	r10 = 0x1u;  /* 0C07C43E mov #imm,Rn */
	IF(0x0C07C440u); ARG0(0x4A9Du); { s32 s_ = (s32)r9; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = 0; else r10 >>= ((~s_ & 31) + 1); }  /* 0C07C440 shld Rm,Rn */
	r12 += 0x4Eu;  /* 0C07C442 add #imm,Rn */
	W8(r12, r10); UPD(0x0C07C446u, 4);  /* 0C07C444 mov.b Rm,@Rn */
	r12 += 0xFFFFFFB2u;  /* 0C07C446 add #imm,Rn */
	r2 = R32(r12); UPD(0x0C07C44Au, 2);  /* 0C07C448 mov.l @Rm,Rn */
	r8 = 0x4000u; UPD(0x0C07C44Cu, 1);  /* 0C07C44A mov.w @(disp,pc),Rn */
	T = (r2 & r8) == 0;  /* 0C07C44C tst Rm,Rn */
	if (T) { UPD(0x0C07C45Au, 4); goto L_0C07C45A; }  /* 0C07C44E bt */
L_0C07C450: BLKS(0x0C07C450u);
	r9 = 0xFFFFBFFFu; UPD(0x0C07C452u, 1);  /* 0C07C450 mov.w @(disp,pc),Rn */
	r2 &= r9;  /* 0C07C452 and Rm,Rn */
	W32(r12, r2); UPD(0x0C07C456u, 2);  /* 0C07C454 mov.l Rm,@Rn */
	W32(r12 + 0x34u, r11); UPD(0x0C07C458u, 1);  /* 0C07C456 mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x30u, r11); UPD(0x0C07C45Au, 1);  /* 0C07C458 mov.l Rm,@(disp,Rn) */
L_0C07C45A: BLKS(0x0C07C45Au);
	{ r3 = 0x60u; /* slot mov #imm,Rn */ UPD(0x0C07C1B4u, 3); goto L_0C07C1B4; }  /* 0C07C45A bra */
L_0C07D7C0: BLKS(0x0C07D7C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07D7C2u, 1);  /* 0C07D7C0 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C07D7C2 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D7C6u, 2);  /* 0C07D7C4 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C07D7C6 exts.w Rm,Rn */
	IF(0x0C07D7C8u); r15 -= 4; W32(r15, PR); UPD(0x0C07D7CAu, 2);  /* 0C07D7C8 sts.l pr,@-Rn */
	r7 = 0x0u;  /* 0C07D7CA mov #imm,Rn */
	r4 = 0x13Fu; UPD(0x0C07D7CEu, 2);  /* 0C07D7CC mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C07D7CE mov Rm,Rn */
	r3 = 0xC3BC7CCu; UPD(0x0C07D7D2u, 2);  /* 0C07D7D0 mov.l @(disp,pc),Rn */
	r6 = 0xFFFFFFFFu;  /* 0C07D7D2 mov #imm,Rn */
	UPD(0x0C07D7D4u, 1);
L_0C07D7D4: BLKS(0x0C07D7D4u);
	r0 = R32(r3); UPD(0x0C07D7D6u, 1);  /* 0C07D7D4 mov.l @Rm,Rn */
	T = r8 == r7;  /* 0C07D7D6 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C07D7D8 negc Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C07D7DA tst Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C07D7DC negc Rm,Rn */
	r2 &= r0;  /* 0C07D7DE and Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C07D7E2u, 6);  /* 0C07D7E0 mov.l @(disp,Rm),Rn */
	T = r0 == 0x3u;  /* 0C07D7E2 cmp/eq #imm,r0 */
	IF(0x0C07D7E4u); r0 = T;  /* 0C07D7E4 movt Rn */
	T = (r2 & r0) == 0;  /* 0C07D7E6 tst Rm,Rn */
	{ u32 c_ = T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07D7F4u, 6); goto L_0C07D7F4; } goto L_0C07D7EC; }  /* 0C07D7E8 bt/s */
L_0C07D7EC: BLKS(0x0C07D7ECu);
	r2 = r5;  /* 0C07D7EC mov Rm,Rn */
	r2 += 0x1u;  /* 0C07D7EE add #imm,Rn */
	r5 = (u32)(s32)(s16)r2;  /* 0C07D7F0 exts.w Rm,Rn */
	r0 = r7;  /* 0C07D7F2 mov Rm,Rn */
	UPD(0x0C07D7F4u, 5);
L_0C07D7F4: BLKS(0x0C07D7F4u);
	r0 += 0x1u;  /* 0C07D7F4 add #imm,Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C07D7F6 exts.w Rm,Rn */
	T = (s32)r7 > (s32)r4;  /* 0C07D7F8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x60u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D7D4u, 6); goto L_0C07D7D4; } goto L_0C07D7FE; }  /* 0C07D7FA bf/s */
L_0C07D7FE: BLKS(0x0C07D7FEu);
	r3 = 0x60u;  /* 0C07D7FE mov #imm,Rn */
	IF(0x0C07D800u); MACL = r8 * r3;  /* 0C07D800 mul.l Rm,Rn */
	r7 = 0xC3BC7CCu; UPD(0x0C07D804u, 5);  /* 0C07D802 mov.l @(disp,pc),Rn */
	IF(0x0C07D804u); r3 = MACL;  /* 0C07D804 sts macl,Rn */
	r3 += r7;  /* 0C07D806 add Rm,Rn */
	r6 = r3;  /* 0C07D808 mov Rm,Rn */
	r6 += 0x4Fu;  /* 0C07D80A add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C07D80Eu, 5);  /* 0C07D80C mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C07D80E add #imm,Rn */
	W8(r6, r0); UPD(0x0C07D812u, 2);  /* 0C07D810 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C07D812 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07D814 tst Rm,Rn */
	IF(0x0C07D816u); r4 = T;  /* 0C07D816 movt Rn */
	T = (r5 & r5) == 0;  /* 0C07D818 tst Rm,Rn */
	IF(0x0C07D81Au); r5 = T;  /* 0C07D81A movt Rn */
	r4 |= r5;  /* 0C07D81C or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C07D81E tst Rm,Rn */
	{ u32 c_ = !T; r4 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07D840u, 10); goto L_0C07D840; } UPD(0x0C07D824u, 1); goto L_0C07D824; }  /* 0C07D820 bf/s */
L_0C07D824: BLKS(0x0C07D824u);
	r0 = 0xC07C160u; UPD(0x0C07D826u, 1);  /* 0C07D824 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C07D826 mov Rm,Rn */
	r15 = r14;  /* 0C07D828 mov Rm,Rn */
	IF(0x0C07D82Au); PR = R32(r15); r15 += 4; UPD(0x0C07D82Cu, 3);  /* 0C07D82A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07D82Eu, 1);  /* 0C07D82C mov.l @Rm+,Rn */
	IF(0x0C07D82Eu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07C160u: goto L_0C07C160; default: JUMPD(tv_); } }  /* 0C07D82E jmp @Rn */
L_0C07D840: BLKS(0x0C07D840u);
	r0 = R32(r3 + 0xCu); UPD(0x0C07D842u, 1);  /* 0C07D840 mov.l @(disp,Rm),Rn */
	r2 = 0xC07BFE0u; UPD(0x0C07D844u, 1);  /* 0C07D842 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C07D844 add #imm,Rn */
	r0 &= 0x7u;  /* 0C07D846 and #imm,r0 */
	IF(0x0C07D848u); { u32 t_ = r2; PR = 0x0C07D84Cu; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C07BFE0, 0x0C07BFE0u, 0x0C07D84Cu); }  /* 0C07D848 jsr @Rn */
L_0C07D84C: BLKS(0x0C07D84Cu);
	{ IF(0x0C07D84Eu); ; /* slot nop */ UPD(0x0C07D824u, 3); goto L_0C07D824; }  /* 0C07D84C bra */
}

/* FUN_0c07d8e0 */
void blk_f_0C07D8E0(sh3_t *c)
{
	LOCALS;
L_0C07D8E0: BLKS(0x0C07D8E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07D8E2u, 1);  /* 0C07D8E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07D8E4u, 1);  /* 0C07D8E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07D8E6u, 1);  /* 0C07D8E4 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C07D8E6 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07D8EAu, 2);  /* 0C07D8E8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07D8ECu, 1);  /* 0C07D8EA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r4;  /* 0C07D8EC exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07D8F0u, 2);  /* 0C07D8EE mov.l Rm,@-Rn */
	r10 = r11;  /* 0C07D8F0 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D8F4u, 2);  /* 0C07D8F2 mov.l Rm,@-Rn */
	r10 += r10;  /* 0C07D8F4 add Rm,Rn */
	IF(0x0C07D8F6u); r15 -= 4; W32(r15, PR); UPD(0x0C07D8F8u, 2);  /* 0C07D8F6 sts.l pr,@-Rn */
	r0 = r10;  /* 0C07D8F8 mov Rm,Rn */
	r3 = 0xC3C53EAu; UPD(0x0C07D8FCu, 2);  /* 0C07D8FA mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C07D8FC mov #imm,Rn */
	IF(0x0C07D8FEu); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C07D900u, 2);  /* 0C07D8FE mov.w @(r0,Rm),Rn */
	r0 = r2 & 0xFFFF;  /* 0C07D900 extu.w Rm,Rn */
	T = (s32)r12 >= (s32)r0;  /* 0C07D902 cmp/ge Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07D944u, 5); goto L_0C07D944; } goto L_0C07D908; }  /* 0C07D904 bt/s */
L_0C07D908: BLKS(0x0C07D908u);
	r8 = r11;  /* 0C07D908 mov Rm,Rn */
	r0 = 0x9u;  /* 0C07D90A mov #imm,Rn */
	r13 = 0xC073B10u; UPD(0x0C07D90Eu, 4);  /* 0C07D90C mov.l @(disp,pc),Rn */
	IF(0x0C07D90Eu); ARG0(0x480Du); { s32 s_ = (s32)r0; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C07D90E shld Rm,Rn */
	UPD(0x0C07D910u, 1);
L_0C07D910: BLKS(0x0C07D910u);
	r2 = 0xC22E2BEu; UPD(0x0C07D912u, 1);  /* 0C07D910 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C07D912 mov Rm,Rn */
	IF(0x0C07D914u); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07D916u, 2);  /* 0C07D914 mov.w @(r0,Rm),Rn */
	r6 = 0x60u;  /* 0C07D916 mov #imm,Rn */
	MACL = (u32)(u16)r7 * (u32)(u16)r6;  /* 0C07D918 mulu.w Rm,Rn */
	r5 = 0xC3BC7CCu; UPD(0x0C07D91Cu, 4);  /* 0C07D91A mov.l @(disp,pc),Rn */
	IF(0x0C07D91Cu); r3 = MACL;  /* 0C07D91C sts macl,Rn */
	r3 += r5;  /* 0C07D91E add Rm,Rn */
	r1 = R32(r3); UPD(0x0C07D922u, 3);  /* 0C07D920 mov.l @Rm,Rn */
	r4 = 0x40000000u; UPD(0x0C07D924u, 1);  /* 0C07D922 mov.l @(disp,pc),Rn */
	T = (r1 & r4) == 0;  /* 0C07D924 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0x44u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D934u, 4); goto L_0C07D934; } goto L_0C07D92A; }  /* 0C07D926 bt/s */
L_0C07D92A: BLKS(0x0C07D92Au);
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C07D92Cu, 2);  /* 0C07D92A mov.b @Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C07D92C extu.b Rm,Rn */
	T = r0 == r11;  /* 0C07D92E cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D970u, 5); goto L_0C07D970; } UPD(0x0C07D934u, 1); goto L_0C07D934; }  /* 0C07D930 bt/s */
L_0C07D934: BLKS(0x0C07D934u);
	r2 = 0xC3C53EAu; UPD(0x0C07D936u, 1);  /* 0C07D934 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C07D936 mov Rm,Rn */
	IF(0x0C07D938u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07D93Au, 2);  /* 0C07D938 mov.w @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C07D93A add #imm,Rn */
	r3 = r4 & 0xFFFF;  /* 0C07D93C extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r3;  /* 0C07D93E cmp/ge Rm,Rn */
	{ u32 c_ = !T; r8 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D910u, 6); goto L_0C07D910; } UPD(0x0C07D944u, 1); goto L_0C07D944; }  /* 0C07D940 bf/s */
L_0C07D944: BLKS(0x0C07D944u);
	r8 = 0xC3C53EAu; UPD(0x0C07D946u, 1);  /* 0C07D944 mov.l @(disp,pc),Rn */
	r8 += r10;  /* 0C07D946 add Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r8); UPD(0x0C07D94Au, 2);  /* 0C07D948 mov.w @Rm,Rn */
	r9 -= r12;  /* 0C07D94A sub Rm,Rn */
	W16(r8, r9); UPD(0x0C07D94Eu, 2);  /* 0C07D94C mov.w Rm,@Rn */
	r15 = r14;  /* 0C07D94E mov Rm,Rn */
	IF(0x0C07D950u); PR = R32(r15); r15 += 4; UPD(0x0C07D952u, 2);  /* 0C07D950 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07D954u, 1);  /* 0C07D952 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07D956u, 1);  /* 0C07D954 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07D958u, 1);  /* 0C07D956 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07D95Au, 1);  /* 0C07D958 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07D95Cu, 1);  /* 0C07D95A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07D95Eu, 1);  /* 0C07D95C mov.l @Rm+,Rn */
	IF(0x0C07D95Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07D95E rts */
L_0C07D970: BLKS(0x0C07D970u);
	r0 = R32(r3 + 0x4u); UPD(0x0C07D972u, 1);  /* 0C07D970 mov.l @(disp,Rm),Rn */
	T = r0 == 0x7u;  /* 0C07D972 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C07D934u, 4); goto L_0C07D934; }  /* 0C07D974 bt */
L_0C07D976: BLKS(0x0C07D976u);
	r7 = R32(r3 + 0x18u); UPD(0x0C07D978u, 1);  /* 0C07D976 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07D978 add #imm,Rn */
	r6 = 0xC2289E8u; UPD(0x0C07D97Cu, 2);  /* 0C07D97A mov.l @(disp,pc),Rn */
	r12 += 0x1u;  /* 0C07D97C add #imm,Rn */
	W32(r6, r7); UPD(0x0C07D980u, 2);  /* 0C07D97E mov.l Rm,@Rn */
	r5 = 0xC3C86B0u; UPD(0x0C07D982u, 1);  /* 0C07D980 mov.l @(disp,pc),Rn */
	r1 = R32(r3 + 0x20u); UPD(0x0C07D984u, 1);  /* 0C07D982 mov.l @(disp,Rm),Rn */
	W32(r5, r1); UPD(0x0C07D986u, 1);  /* 0C07D984 mov.l Rm,@Rn */
	r4 = R32(r3 + 0x38u); UPD(0x0C07D988u, 1);  /* 0C07D986 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C07D98Au, 1);  /* 0C07D988 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C07D98Cu, 1);  /* 0C07D98A mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x3Cu); UPD(0x0C07D98Eu, 1);  /* 0C07D98C mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x24u); UPD(0x0C07D990u, 1);  /* 0C07D98E mov.l @(disp,Rm),Rn */
	IF(0x0C07D990u); { u32 t_ = r13; PR = 0x0C07D994u; W32(r15, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C07D994u); }  /* 0C07D990 jsr @Rn */
L_0C07D994: BLKS(0x0C07D994u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07D934u, 3); goto L_0C07D934; }  /* 0C07D994 bra */
}

/* FUN_0c07d9c0 */
void blk_f_0C07D9C0(sh3_t *c)
{
	LOCALS;
L_0C07D9C0: BLKS(0x0C07D9C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07D9C2u, 1);  /* 0C07D9C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07D9C4u, 1);  /* 0C07D9C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07D9C6u, 1);  /* 0C07D9C4 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C07D9C6 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07D9CAu, 2);  /* 0C07D9C8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C07D9CA exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07D9CEu, 2);  /* 0C07D9CC mov.l Rm,@-Rn */
	r11 = r10;  /* 0C07D9CE mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D9D2u, 2);  /* 0C07D9D0 mov.l Rm,@-Rn */
	r11 += r11;  /* 0C07D9D2 add Rm,Rn */
	IF(0x0C07D9D4u); r15 -= 4; W32(r15, PR); UPD(0x0C07D9D6u, 2);  /* 0C07D9D4 sts.l pr,@-Rn */
	r0 = r11;  /* 0C07D9D6 mov Rm,Rn */
	r3 = 0xC3C53EAu; UPD(0x0C07D9DAu, 2);  /* 0C07D9D8 mov.l @(disp,pc),Rn */
	IF(0x0C07D9DAu); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C07D9DCu, 1);  /* 0C07D9DA mov.w @(r0,Rm),Rn */
	r0 = r2 & 0xFFFF;  /* 0C07D9DC extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r0;  /* 0C07D9DE cmp/ge Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07DA20u, 5); goto L_0C07DA20; } goto L_0C07D9E4; }  /* 0C07D9E0 bt/s */
L_0C07D9E4: BLKS(0x0C07D9E4u);
	r8 = r10;  /* 0C07D9E4 mov Rm,Rn */
	r0 = 0x9u;  /* 0C07D9E6 mov #imm,Rn */
	r12 = 0xC073B10u; UPD(0x0C07D9EAu, 4);  /* 0C07D9E8 mov.l @(disp,pc),Rn */
	IF(0x0C07D9EAu); ARG0(0x480Du); { s32 s_ = (s32)r0; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C07D9EA shld Rm,Rn */
	UPD(0x0C07D9ECu, 1);
L_0C07D9EC: BLKS(0x0C07D9ECu);
	r2 = 0xC22E2BEu; UPD(0x0C07D9EEu, 1);  /* 0C07D9EC mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C07D9EE mov Rm,Rn */
	IF(0x0C07D9F0u); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07D9F2u, 2);  /* 0C07D9F0 mov.w @(r0,Rm),Rn */
	r6 = 0x60u;  /* 0C07D9F2 mov #imm,Rn */
	MACL = (u32)(u16)r7 * (u32)(u16)r6;  /* 0C07D9F4 mulu.w Rm,Rn */
	r5 = 0xC3BC7CCu; UPD(0x0C07D9F8u, 4);  /* 0C07D9F6 mov.l @(disp,pc),Rn */
	IF(0x0C07D9F8u); r3 = MACL;  /* 0C07D9F8 sts macl,Rn */
	r3 += r5;  /* 0C07D9FA add Rm,Rn */
	r1 = R32(r3); UPD(0x0C07D9FEu, 3);  /* 0C07D9FC mov.l @Rm,Rn */
	r4 = 0x40000000u; UPD(0x0C07DA00u, 1);  /* 0C07D9FE mov.l @(disp,pc),Rn */
	T = (r1 & r4) == 0;  /* 0C07DA00 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0x44u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DA10u, 4); goto L_0C07DA10; } goto L_0C07DA06; }  /* 0C07DA02 bt/s */
L_0C07DA06: BLKS(0x0C07DA06u);
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C07DA08u, 2);  /* 0C07DA06 mov.b @Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C07DA08 extu.b Rm,Rn */
	T = r0 == r10;  /* 0C07DA0A cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DA40u, 5); goto L_0C07DA40; } UPD(0x0C07DA10u, 1); goto L_0C07DA10; }  /* 0C07DA0C bt/s */
L_0C07DA10: BLKS(0x0C07DA10u);
	r5 = 0xC3C53EAu; UPD(0x0C07DA12u, 1);  /* 0C07DA10 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C07DA12 mov Rm,Rn */
	IF(0x0C07DA14u); r4 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C07DA16u, 2);  /* 0C07DA14 mov.w @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C07DA16 add #imm,Rn */
	r3 = r4 & 0xFFFF;  /* 0C07DA18 extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r3;  /* 0C07DA1A cmp/ge Rm,Rn */
	{ u32 c_ = !T; r8 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D9ECu, 6); goto L_0C07D9EC; } UPD(0x0C07DA20u, 1); goto L_0C07DA20; }  /* 0C07DA1C bf/s */
L_0C07DA20: BLKS(0x0C07DA20u);
	r15 = r14;  /* 0C07DA20 mov Rm,Rn */
	IF(0x0C07DA22u); PR = R32(r15); r15 += 4; UPD(0x0C07DA24u, 2);  /* 0C07DA22 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07DA26u, 1);  /* 0C07DA24 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07DA28u, 1);  /* 0C07DA26 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07DA2Au, 1);  /* 0C07DA28 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07DA2Cu, 1);  /* 0C07DA2A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07DA2Eu, 1);  /* 0C07DA2C mov.l @Rm+,Rn */
	IF(0x0C07DA2Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07DA2E rts */
L_0C07DA40: BLKS(0x0C07DA40u);
	r0 = R32(r3 + 0x4u); UPD(0x0C07DA42u, 1);  /* 0C07DA40 mov.l @(disp,Rm),Rn */
	T = r0 == 0x7u;  /* 0C07DA42 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r3 += 0x40u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DA10u, 4); goto L_0C07DA10; } goto L_0C07DA48; }  /* 0C07DA44 bf/s */
L_0C07DA48: BLKS(0x0C07DA48u);
	r5 = R32(r3 + 0x1Cu); UPD(0x0C07DA4Au, 2);  /* 0C07DA48 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C07DA4A tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFC0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DA10u, 4); goto L_0C07DA10; } goto L_0C07DA50; }  /* 0C07DA4C bf/s */
L_0C07DA50: BLKS(0x0C07DA50u);
	r0 = R32(r3 + 0x18u); UPD(0x0C07DA52u, 2);  /* 0C07DA50 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07DA52 add #imm,Rn */
	r7 = 0xC2289E8u; UPD(0x0C07DA56u, 2);  /* 0C07DA54 mov.l @(disp,pc),Rn */
	W32(r7, r0); UPD(0x0C07DA58u, 1);  /* 0C07DA56 mov.l Rm,@Rn */
	r6 = 0xC3C86B0u; UPD(0x0C07DA5Au, 1);  /* 0C07DA58 mov.l @(disp,pc),Rn */
	r1 = R32(r3 + 0x20u); UPD(0x0C07DA5Cu, 1);  /* 0C07DA5A mov.l @(disp,Rm),Rn */
	W32(r6, r1); UPD(0x0C07DA5Eu, 1);  /* 0C07DA5C mov.l Rm,@Rn */
	r4 = R32(r3 + 0x38u); UPD(0x0C07DA60u, 1);  /* 0C07DA5E mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C07DA62u, 1);  /* 0C07DA60 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C07DA64u, 1);  /* 0C07DA62 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x3Cu); UPD(0x0C07DA66u, 1);  /* 0C07DA64 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x24u); UPD(0x0C07DA68u, 1);  /* 0C07DA66 mov.l @(disp,Rm),Rn */
	IF(0x0C07DA68u); { u32 t_ = r12; PR = 0x0C07DA6Cu; W32(r15, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C07DA6Cu); }  /* 0C07DA68 jsr @Rn */
L_0C07DA6C: BLKS(0x0C07DA6Cu);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07DA10u, 3); goto L_0C07DA10; }  /* 0C07DA6C bra */
}

/* FUN_0c07da90 */
void blk_f_0C07DA90(sh3_t *c)
{
	LOCALS;
L_0C07DA90: BLKS(0x0C07DA90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07DA92u, 1);  /* 0C07DA90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07DA94u, 1);  /* 0C07DA92 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07DA96u, 1);  /* 0C07DA94 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C07DA96 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07DA9Au, 2);  /* 0C07DA98 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C07DA9A exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07DA9Eu, 2);  /* 0C07DA9C mov.l Rm,@-Rn */
	r11 = r10;  /* 0C07DA9E mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07DAA2u, 2);  /* 0C07DAA0 mov.l Rm,@-Rn */
	r11 += r11;  /* 0C07DAA2 add Rm,Rn */
	IF(0x0C07DAA4u); r15 -= 4; W32(r15, PR); UPD(0x0C07DAA6u, 2);  /* 0C07DAA4 sts.l pr,@-Rn */
	r0 = r11;  /* 0C07DAA6 mov Rm,Rn */
	r3 = 0xC2860B2u; UPD(0x0C07DAAAu, 2);  /* 0C07DAA8 mov.l @(disp,pc),Rn */
	IF(0x0C07DAAAu); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C07DAACu, 1);  /* 0C07DAAA mov.w @(r0,Rm),Rn */
	r0 = r2 & 0xFFFF;  /* 0C07DAAC extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r0;  /* 0C07DAAE cmp/ge Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07DAE6u, 5); goto L_0C07DAE6; } goto L_0C07DAB4; }  /* 0C07DAB0 bt/s */
L_0C07DAB4: BLKS(0x0C07DAB4u);
	r8 = r10;  /* 0C07DAB4 mov Rm,Rn */
	r4 = 0x7u;  /* 0C07DAB6 mov #imm,Rn */
	IF(0x0C07DAB8u); ARG0(0x484Du); { s32 s_ = (s32)r4; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C07DAB8 shld Rm,Rn */
	r0 = 0xC2B0810u; UPD(0x0C07DABCu, 5);  /* 0C07DABA mov.l @(disp,pc),Rn */
	r12 = 0xC073B10u; UPD(0x0C07DABEu, 1);  /* 0C07DABC mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C07DABE add Rm,Rn */
	UPD(0x0C07DAC0u, 1);
L_0C07DAC0: BLKS(0x0C07DAC0u);
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r1 = v_; } UPD(0x0C07DAC2u, 1);  /* 0C07DAC0 mov.w @Rm+,Rn */
	r3 = 0x60u;  /* 0C07DAC2 mov #imm,Rn */
	MACL = (u32)(u16)r1 * (u32)(u16)r3;  /* 0C07DAC4 mulu.w Rm,Rn */
	r7 = 0xC3C27CCu; UPD(0x0C07DAC8u, 4);  /* 0C07DAC6 mov.l @(disp,pc),Rn */
	IF(0x0C07DAC8u); r3 = MACL;  /* 0C07DAC8 sts macl,Rn */
	r3 += r7;  /* 0C07DACA add Rm,Rn */
	r3 += 0x44u;  /* 0C07DACC add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C07DAD0u, 4);  /* 0C07DACE mov.b @Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C07DAD0 extu.b Rm,Rn */
	T = r5 == r10;  /* 0C07DAD2 cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DB00u, 5); goto L_0C07DB00; } UPD(0x0C07DAD8u, 1); goto L_0C07DAD8; }  /* 0C07DAD4 bt/s */
L_0C07DAD8: BLKS(0x0C07DAD8u);
	r2 = 0xC2860B2u; UPD(0x0C07DADAu, 1);  /* 0C07DAD8 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C07DADA mov Rm,Rn */
	IF(0x0C07DADCu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07DADEu, 2);  /* 0C07DADC mov.w @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C07DADE add #imm,Rn */
	r7 = r3 & 0xFFFF;  /* 0C07DAE0 extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r7;  /* 0C07DAE2 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C07DAC0u, 6); goto L_0C07DAC0; }  /* 0C07DAE4 bf */
L_0C07DAE6: BLKS(0x0C07DAE6u);
	r15 = r14;  /* 0C07DAE6 mov Rm,Rn */
	IF(0x0C07DAE8u); PR = R32(r15); r15 += 4; UPD(0x0C07DAEAu, 2);  /* 0C07DAE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07DAECu, 1);  /* 0C07DAEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07DAEEu, 1);  /* 0C07DAEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07DAF0u, 1);  /* 0C07DAEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07DAF2u, 1);  /* 0C07DAF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07DAF4u, 1);  /* 0C07DAF2 mov.l @Rm+,Rn */
	IF(0x0C07DAF4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07DAF4 rts */
L_0C07DB00: BLKS(0x0C07DB00u);
	r6 = R32(r3 + 0x18u); UPD(0x0C07DB02u, 1);  /* 0C07DB00 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07DB02 add #imm,Rn */
	r5 = 0xC2289E8u; UPD(0x0C07DB06u, 2);  /* 0C07DB04 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C07DB08u, 1);  /* 0C07DB06 mov.l Rm,@Rn */
	r0 = 0xC3C86B0u; UPD(0x0C07DB0Au, 1);  /* 0C07DB08 mov.l @(disp,pc),Rn */
	r4 = R32(r3 + 0x20u); UPD(0x0C07DB0Cu, 1);  /* 0C07DB0A mov.l @(disp,Rm),Rn */
	W32(r0, r4); UPD(0x0C07DB0Eu, 1);  /* 0C07DB0C mov.l Rm,@Rn */
	r4 = R32(r3 + 0x38u); UPD(0x0C07DB10u, 1);  /* 0C07DB0E mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C07DB12u, 1);  /* 0C07DB10 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C07DB14u, 1);  /* 0C07DB12 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x3Cu); UPD(0x0C07DB16u, 1);  /* 0C07DB14 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x24u); UPD(0x0C07DB18u, 1);  /* 0C07DB16 mov.l @(disp,Rm),Rn */
	IF(0x0C07DB18u); { u32 t_ = r12; PR = 0x0C07DB1Cu; W32(r15, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C07DB1Cu); }  /* 0C07DB18 jsr @Rn */
L_0C07DB1C: BLKS(0x0C07DB1Cu);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07DAD8u, 3); goto L_0C07DAD8; }  /* 0C07DB1C bra */
}

/* FUN_0c07db40 */
void blk_f_0C07DB40(sh3_t *c)
{
	LOCALS;
L_0C07DB40: BLKS(0x0C07DB40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07DB42u, 1);  /* 0C07DB40 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07DB44u, 1);  /* 0C07DB42 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07DB46u, 1);  /* 0C07DB44 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07DB48u, 1);  /* 0C07DB46 mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C07DB48 mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07DB4Cu, 2);  /* 0C07DB4A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07DB4Eu, 1);  /* 0C07DB4C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07DB50u, 1);  /* 0C07DB4E mov.l Rm,@-Rn */
	r8 = 0xC3BC7CCu; UPD(0x0C07DB52u, 1);  /* 0C07DB50 mov.l @(disp,pc),Rn */
	IF(0x0C07DB52u); r15 -= 4; W32(r15, PR); UPD(0x0C07DB54u, 1);  /* 0C07DB52 sts.l pr,@-Rn */
	r11 = 0xC22E2BEu; UPD(0x0C07DB56u, 1);  /* 0C07DB54 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07DB56 mov Rm,Rn */
	r12 = 0xC2A7A9Cu; UPD(0x0C07DB5Au, 2);  /* 0C07DB58 mov.l @(disp,pc),Rn */
	r13 = 0xC076AF0u; UPD(0x0C07DB5Cu, 1);  /* 0C07DB5A mov.l @(disp,pc),Rn */
L_0C07DB5C: BLKS(0x0C07DB5Cu);
	r7 = R32(r8); UPD(0x0C07DB5Eu, 1);  /* 0C07DB5C mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C07DB60u, 1);  /* 0C07DB5E mov.l @(disp,pc),Rn */
	T = (r7 & r0) == 0;  /* 0C07DB60 tst Rm,Rn */
	if (T) { UPD(0x0C07DBB8u, 4); goto L_0C07DBB8; }  /* 0C07DB62 bt */
L_0C07DB64: BLKS(0x0C07DB64u);
	r8 += 0x44u;  /* 0C07DB64 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C07DB68u, 2);  /* 0C07DB66 mov.b @Rm,Rn */
	r2 = 0x7u;  /* 0C07DB68 mov #imm,Rn */
	r0 = r6;  /* 0C07DB6A mov Rm,Rn */
	r0 &= 0x1Fu;  /* 0C07DB6C and #imm,r0 */
	r4 = 0xC3C53EAu; UPD(0x0C07DB70u, 4);  /* 0C07DB6E mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C07DB70 add Rm,Rn */
	r4 += r0;  /* 0C07DB72 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C07DB76u, 3);  /* 0C07DB74 mov.w @Rm,Rn */
	IF(0x0C07DB76u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07DB76 shld Rm,Rn */
	r1 = r3 & 0xFFFF;  /* 0C07DB78 extu.w Rm,Rn */
	r0 += r1;  /* 0C07DB7A add Rm,Rn */
	r0 += r0;  /* 0C07DB7C add Rm,Rn */
	IF(0x0C07DB7Eu); W16(r0 + r11, r10); UPD(0x0C07DB80u, 5);  /* 0C07DB7E mov.w Rm,@(r0,Rn) */
	r3 += 0x1u;  /* 0C07DB80 add #imm,Rn */
	r0 = r7;  /* 0C07DB82 mov Rm,Rn */
	r0 &= 0x4u;  /* 0C07DB84 and #imm,r0 */
	W16(r4, r3); UPD(0x0C07DB88u, 4);  /* 0C07DB86 mov.w Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C07DB88 tst Rm,Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DBB8u, 4); goto L_0C07DBB8; } goto L_0C07DB8E; }  /* 0C07DB8A bt/s */
L_0C07DB8E: BLKS(0x0C07DB8Eu);
	r0 = 0x10u;  /* 0C07DB8E mov #imm,Rn */
	r7 &= r0;  /* 0C07DB90 and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C07DB92 tst Rm,Rn */
	if (T) { UPD(0x0C07DBE0u, 7); goto L_0C07DBE0; }  /* 0C07DB94 bt */
L_0C07DB96: BLKS(0x0C07DB96u);
	r9 = r8;  /* 0C07DB96 mov Rm,Rn */
	r9 += 0x45u;  /* 0C07DB98 add #imm,Rn */
	W8(r9, r6); UPD(0x0C07DB9Cu, 3);  /* 0C07DB9A mov.b Rm,@Rn */
L_0C07DB9C: BLKS(0x0C07DB9Cu);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C07DB9Eu, 1);  /* 0C07DB9C mov.b @Rm,Rn */
	r4 = 0x7u;  /* 0C07DB9E mov #imm,Rn */
	r0 &= 0x1Fu;  /* 0C07DBA0 and #imm,r0 */
	r6 = 0xC29CF40u; UPD(0x0C07DBA4u, 3);  /* 0C07DBA2 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C07DBA4 add Rm,Rn */
	r6 += r0;  /* 0C07DBA6 add Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r6); UPD(0x0C07DBAAu, 3);  /* 0C07DBA8 mov.w @Rm,Rn */
	IF(0x0C07DBAAu); ARG0(0x404Du); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07DBAA shld Rm,Rn */
	r9 = r7 & 0xFFFF;  /* 0C07DBAC extu.w Rm,Rn */
	r0 += r9;  /* 0C07DBAE add Rm,Rn */
	r0 += r0;  /* 0C07DBB0 add Rm,Rn */
	r7 += 0x1u;  /* 0C07DBB2 add #imm,Rn */
	IF(0x0C07DBB4u); W16(r0 + r12, r10); UPD(0x0C07DBB6u, 6);  /* 0C07DBB4 mov.w Rm,@(r0,Rn) */
	W16(r6, r7); UPD(0x0C07DBB8u, 1);  /* 0C07DBB6 mov.w Rm,@Rn */
L_0C07DBB8: BLKS(0x0C07DBB8u);
	r5 = 0xFFu; UPD(0x0C07DBBAu, 1);  /* 0C07DBB8 mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C07DBBA add #imm,Rn */
	T = (s32)r10 > (s32)r5;  /* 0C07DBBC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x60u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DB5Cu, 5); goto L_0C07DB5C; } goto L_0C07DBC2; }  /* 0C07DBBE bf/s */
L_0C07DBC2: BLKS(0x0C07DBC2u);
	r15 = r14;  /* 0C07DBC2 mov Rm,Rn */
	IF(0x0C07DBC4u); PR = R32(r15); r15 += 4; UPD(0x0C07DBC6u, 3);  /* 0C07DBC4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07DBC8u, 1);  /* 0C07DBC6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07DBCAu, 1);  /* 0C07DBC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07DBCCu, 1);  /* 0C07DBCA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07DBCEu, 1);  /* 0C07DBCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07DBD0u, 1);  /* 0C07DBCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07DBD2u, 1);  /* 0C07DBD0 mov.l @Rm+,Rn */
	IF(0x0C07DBD2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07DBD2 rts */
L_0C07DBE0: BLKS(0x0C07DBE0u);
	r9 = r8;  /* 0C07DBE0 mov Rm,Rn */
	r9 += 0x45u;  /* 0C07DBE2 add #imm,Rn */
	r4 = R32(r8 + 0x28u); UPD(0x0C07DBE6u, 3);  /* 0C07DBE4 mov.l @(disp,Rm),Rn */
	r6 = r6 & 0xFF;  /* 0C07DBE6 extu.b Rm,Rn */
	IF(0x0C07DBE8u); { u32 t_ = r13; PR = 0x0C07DBECu; r5 = R32(r8 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C076AF0, 0x0C076AF0u, 0x0C07DBECu); }  /* 0C07DBE8 jsr @Rn */
L_0C07DBEC: BLKS(0x0C07DBECu);
	{ W8(r9, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C07DB9Cu, 3); goto L_0C07DB9C; }  /* 0C07DBEC bra */
}

/* FUN_0c07dc10 */
void blk_f_0C07DC10(sh3_t *c)
{
	LOCALS;
L_0C07DC10: BLKS(0x0C07DC10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07DC12u, 1);  /* 0C07DC10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07DC14u, 1);  /* 0C07DC12 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07DC16u, 1);  /* 0C07DC14 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07DC18u, 1);  /* 0C07DC16 mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C07DC18 mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07DC1Cu, 2);  /* 0C07DC1A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07DC1Eu, 1);  /* 0C07DC1C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07DC20u, 1);  /* 0C07DC1E mov.l Rm,@-Rn */
	r8 = 0xC3C27CCu; UPD(0x0C07DC22u, 1);  /* 0C07DC20 mov.l @(disp,pc),Rn */
	IF(0x0C07DC22u); r15 -= 4; W32(r15, PR); UPD(0x0C07DC24u, 1);  /* 0C07DC22 sts.l pr,@-Rn */
	r11 = 0xC2B0810u; UPD(0x0C07DC26u, 1);  /* 0C07DC24 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07DC26 mov Rm,Rn */
	r12 = 0xC23B8A0u; UPD(0x0C07DC2Au, 2);  /* 0C07DC28 mov.l @(disp,pc),Rn */
	r13 = 0xC076AF0u; UPD(0x0C07DC2Cu, 1);  /* 0C07DC2A mov.l @(disp,pc),Rn */
L_0C07DC2C: BLKS(0x0C07DC2Cu);
	r7 = R32(r8); UPD(0x0C07DC2Eu, 1);  /* 0C07DC2C mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C07DC30u, 1);  /* 0C07DC2E mov.l @(disp,pc),Rn */
	T = (r7 & r0) == 0;  /* 0C07DC30 tst Rm,Rn */
	if (T) { UPD(0x0C07DC88u, 4); goto L_0C07DC88; }  /* 0C07DC32 bt */
L_0C07DC34: BLKS(0x0C07DC34u);
	r8 += 0x44u;  /* 0C07DC34 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C07DC38u, 2);  /* 0C07DC36 mov.b @Rm,Rn */
	r2 = 0x5u;  /* 0C07DC38 mov #imm,Rn */
	r0 = r6;  /* 0C07DC3A mov Rm,Rn */
	r0 &= 0x1Fu;  /* 0C07DC3C and #imm,r0 */
	r4 = 0xC2860B2u; UPD(0x0C07DC40u, 4);  /* 0C07DC3E mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C07DC40 add Rm,Rn */
	r4 += r0;  /* 0C07DC42 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C07DC46u, 3);  /* 0C07DC44 mov.w @Rm,Rn */
	IF(0x0C07DC46u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07DC46 shld Rm,Rn */
	r1 = r3 & 0xFFFF;  /* 0C07DC48 extu.w Rm,Rn */
	r0 += r1;  /* 0C07DC4A add Rm,Rn */
	r0 += r0;  /* 0C07DC4C add Rm,Rn */
	IF(0x0C07DC4Eu); W16(r0 + r11, r10); UPD(0x0C07DC50u, 5);  /* 0C07DC4E mov.w Rm,@(r0,Rn) */
	r3 += 0x1u;  /* 0C07DC50 add #imm,Rn */
	r0 = r7;  /* 0C07DC52 mov Rm,Rn */
	r0 &= 0x4u;  /* 0C07DC54 and #imm,r0 */
	W16(r4, r3); UPD(0x0C07DC58u, 4);  /* 0C07DC56 mov.w Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C07DC58 tst Rm,Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DC88u, 4); goto L_0C07DC88; } goto L_0C07DC5E; }  /* 0C07DC5A bt/s */
L_0C07DC5E: BLKS(0x0C07DC5Eu);
	r0 = 0x10u;  /* 0C07DC5E mov #imm,Rn */
	r7 &= r0;  /* 0C07DC60 and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C07DC62 tst Rm,Rn */
	if (T) { UPD(0x0C07DCB0u, 7); goto L_0C07DCB0; }  /* 0C07DC64 bt */
L_0C07DC66: BLKS(0x0C07DC66u);
	r9 = r8;  /* 0C07DC66 mov Rm,Rn */
	r9 += 0x45u;  /* 0C07DC68 add #imm,Rn */
	W8(r9, r6); UPD(0x0C07DC6Cu, 3);  /* 0C07DC6A mov.b Rm,@Rn */
L_0C07DC6C: BLKS(0x0C07DC6Cu);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C07DC6Eu, 1);  /* 0C07DC6C mov.b @Rm,Rn */
	r4 = 0x5u;  /* 0C07DC6E mov #imm,Rn */
	r0 &= 0x1Fu;  /* 0C07DC70 and #imm,r0 */
	r6 = 0xC22E260u; UPD(0x0C07DC74u, 3);  /* 0C07DC72 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C07DC74 add Rm,Rn */
	r6 += r0;  /* 0C07DC76 add Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r6); UPD(0x0C07DC7Au, 3);  /* 0C07DC78 mov.w @Rm,Rn */
	IF(0x0C07DC7Au); ARG0(0x404Du); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07DC7A shld Rm,Rn */
	r9 = r7 & 0xFFFF;  /* 0C07DC7C extu.w Rm,Rn */
	r0 += r9;  /* 0C07DC7E add Rm,Rn */
	r0 += r0;  /* 0C07DC80 add Rm,Rn */
	r7 += 0x1u;  /* 0C07DC82 add #imm,Rn */
	IF(0x0C07DC84u); W16(r0 + r12, r10); UPD(0x0C07DC86u, 6);  /* 0C07DC84 mov.w Rm,@(r0,Rn) */
	W16(r6, r7); UPD(0x0C07DC88u, 1);  /* 0C07DC86 mov.w Rm,@Rn */
L_0C07DC88: BLKS(0x0C07DC88u);
	r10 += 0x1u;  /* 0C07DC88 add #imm,Rn */
	r5 = 0x3Fu;  /* 0C07DC8A mov #imm,Rn */
	T = (s32)r10 > (s32)r5;  /* 0C07DC8C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x60u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DC2Cu, 6); goto L_0C07DC2C; } goto L_0C07DC92; }  /* 0C07DC8E bf/s */
L_0C07DC92: BLKS(0x0C07DC92u);
	r15 = r14;  /* 0C07DC92 mov Rm,Rn */
	IF(0x0C07DC94u); PR = R32(r15); r15 += 4; UPD(0x0C07DC96u, 3);  /* 0C07DC94 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07DC98u, 1);  /* 0C07DC96 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07DC9Au, 1);  /* 0C07DC98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07DC9Cu, 1);  /* 0C07DC9A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07DC9Eu, 1);  /* 0C07DC9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07DCA0u, 1);  /* 0C07DC9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07DCA2u, 1);  /* 0C07DCA0 mov.l @Rm+,Rn */
	IF(0x0C07DCA2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07DCA2 rts */
L_0C07DCB0: BLKS(0x0C07DCB0u);
	r9 = r8;  /* 0C07DCB0 mov Rm,Rn */
	r9 += 0x45u;  /* 0C07DCB2 add #imm,Rn */
	r4 = R32(r8 + 0x28u); UPD(0x0C07DCB6u, 3);  /* 0C07DCB4 mov.l @(disp,Rm),Rn */
	r6 = r6 & 0xFF;  /* 0C07DCB6 extu.b Rm,Rn */
	IF(0x0C07DCB8u); { u32 t_ = r13; PR = 0x0C07DCBCu; r5 = R32(r8 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C076AF0, 0x0C076AF0u, 0x0C07DCBCu); }  /* 0C07DCB8 jsr @Rn */
L_0C07DCBC: BLKS(0x0C07DCBCu);
	{ W8(r9, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C07DC6Cu, 3); goto L_0C07DC6C; }  /* 0C07DCBC bra */
}

/* FUN_0c07dce0 */
void blk_f_0C07DCE0(sh3_t *c)
{
	LOCALS;
L_0C07DCE0: BLKS(0x0C07DCE0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07DCE2u, 1);  /* 0C07DCE0 mov.l Rm,@-Rn */
	r7 = (u32)(s32)(s8)r7;  /* 0C07DCE2 exts.b Rm,Rn */
	r2 = 0xFE000000u; UPD(0x0C07DCE6u, 2);  /* 0C07DCE4 mov.l @(disp,pc),Rn */
	IF(0x0C07DCE6u); r15 -= 4; W32(r15, PR); UPD(0x0C07DCE8u, 1);  /* 0C07DCE6 sts.l pr,@-Rn */
	r2 += r6;  /* 0C07DCE8 add Rm,Rn */
	IF(0x0C07DCEAu); T = (s32)r2 >= 0;  /* 0C07DCEA cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07DD60u, 5); goto L_0C07DD60; } UPD(0x0C07DCF0u, 1); goto L_0C07DCF0; }  /* 0C07DCEC bf/s */
L_0C07DCF0: BLKS(0x0C07DCF0u);
	r0 = 0x680000u; UPD(0x0C07DCF2u, 1);  /* 0C07DCF0 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C07DCF2 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C07DD3Cu, 4); goto L_0C07DD3C; }  /* 0C07DCF4 bt */
L_0C07DCF6: BLKS(0x0C07DCF6u);
	r0 = 0x3FFFFFu; UPD(0x0C07DCF8u, 1);  /* 0C07DCF6 mov.l @(disp,pc),Rn */
	T = (s32)r5 > (s32)r0;  /* 0C07DCF8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07DD3Cu, 4); goto L_0C07DD3C; }  /* 0C07DCFA bf */
L_0C07DCFC: BLKS(0x0C07DCFCu);
	r2 = 0x4000000u; UPD(0x0C07DCFEu, 1);  /* 0C07DCFC mov.l @(disp,pc),Rn */
	T = (r4 & r2) == 0;  /* 0C07DCFE tst Rm,Rn */
	if (!T) { UPD(0x0C07DD50u, 4); goto L_0C07DD50; }  /* 0C07DD00 bf */
L_0C07DD02: BLKS(0x0C07DD02u);
	r3 = 0x6u;  /* 0C07DD02 mov #imm,Rn */
	r0 = 0xC297498u; UPD(0x0C07DD06u, 2);  /* 0C07DD04 mov.l @(disp,pc),Rn */
	r4 = R32(r0); UPD(0x0C07DD08u, 1);  /* 0C07DD06 mov.l @Rm,Rn */
	T = (s32)r4 > (s32)r3;  /* 0C07DD08 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C07DD50u, 4); goto L_0C07DD50; }  /* 0C07DD0A bt */
L_0C07DD0C: BLKS(0x0C07DD0Cu);
	r0 = 0xC22E015u; UPD(0x0C07DD0Eu, 1);  /* 0C07DD0C mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C07DD10u, 1);  /* 0C07DD0E mov.b @Rm,Rn */
	r3 = 0xC297A38u; UPD(0x0C07DD12u, 1);  /* 0C07DD10 mov.l @(disp,pc),Rn */
	r2 = r4 & 0xFF;  /* 0C07DD12 extu.b Rm,Rn */
	r2 += r3;  /* 0C07DD14 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C07DD18u, 3);  /* 0C07DD16 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C07DD18 add #imm,Rn */
	W8(r2, r4); UPD(0x0C07DD1Cu, 2);  /* 0C07DD1A mov.b Rm,@Rn */
	r1 = r4 & 0xFF;  /* 0C07DD1C extu.b Rm,Rn */
	r4 = 0x4u;  /* 0C07DD1E mov #imm,Rn */
	T = r1 > r4;  /* 0C07DD20 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C07DD3Cu, 6); goto L_0C07DD3C; }  /* 0C07DD22 bf */
L_0C07DD24: BLKS(0x0C07DD24u);
	r1 = (u32)(s32)(s8)R8(r0); UPD(0x0C07DD26u, 1);  /* 0C07DD24 mov.b @Rm,Rn */
L_0C07DD26: BLKS(0x0C07DD26u);
	r4 = 0x0u;  /* 0C07DD26 mov #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C07DD28 extu.b Rm,Rn */
	IF(0x0C07DD2Au); W8(r0 + r3, r4); UPD(0x0C07DD2Cu, 3);  /* 0C07DD2A mov.b Rm,@(r0,Rn) */
	r15 += 0xFFFFFFF8u;  /* 0C07DD2C add #imm,Rn */
	r3 = 0xC07CD80u; UPD(0x0C07DD30u, 2);  /* 0C07DD2E mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C07DD30 mov #imm,Rn */
	r2 = 0x20000u; UPD(0x0C07DD34u, 2);  /* 0C07DD32 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C07DD34 mov #imm,Rn */
	W32(r15, r2); UPD(0x0C07DD38u, 2);  /* 0C07DD36 mov.l Rm,@Rn */
	IF(0x0C07DD38u); { u32 t_ = r3; PR = 0x0C07DD3Cu; W32(r15 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C07DD3Cu); }  /* 0C07DD38 jsr @Rn */
L_0C07DD3C: BLKS(0x0C07DD3Cu);
	r15 = r14;  /* 0C07DD3C mov Rm,Rn */
	IF(0x0C07DD3Eu); PR = R32(r15); r15 += 4; UPD(0x0C07DD40u, 2);  /* 0C07DD3E lds.l @Rn+,pr */
	IF(0x0C07DD40u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07DD40 rts */
L_0C07DD50: BLKS(0x0C07DD50u);
	r3 = 0xC297A38u; UPD(0x0C07DD52u, 1);  /* 0C07DD50 mov.l @(disp,pc),Rn */
	r0 = 0xC22E015u; UPD(0x0C07DD54u, 1);  /* 0C07DD52 mov.l @(disp,pc),Rn */
	{ r1 = (u32)(s32)(s8)R8(r0); /* slot mov.b @Rm,Rn */ UPD(0x0C07DD26u, 3); goto L_0C07DD26; }  /* 0C07DD54 bra */
L_0C07DD60: BLKS(0x0C07DD60u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C07DCF0u, 3); goto L_0C07DCF0; }  /* 0C07DD60 bra */
}

/* FUN_0c07dd90 */
void blk_f_0C07DD90(sh3_t *c)
{
	LOCALS;
L_0C07DD90: BLKS(0x0C07DD90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07DD92u, 1);  /* 0C07DD90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07DD94u, 1);  /* 0C07DD92 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07DD96u, 1);  /* 0C07DD94 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07DD98u, 1);  /* 0C07DD96 mov.l Rm,@-Rn */
	r10 = r7;  /* 0C07DD98 mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07DD9Cu, 2);  /* 0C07DD9A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r6;  /* 0C07DD9C exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07DDA0u, 2);  /* 0C07DD9E mov.l Rm,@-Rn */
	r12 = r4;  /* 0C07DDA0 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07DDA4u, 2);  /* 0C07DDA2 mov.l Rm,@-Rn */
	r13 = r5;  /* 0C07DDA4 mov Rm,Rn */
	r8 = 0xC07C010u; UPD(0x0C07DDA8u, 2);  /* 0C07DDA6 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C07DDA8 mov #imm,Rn */
	IF(0x0C07DDAAu); r15 -= 4; W32(r15, PR); UPD(0x0C07DDACu, 2);  /* 0C07DDAA sts.l pr,@-Rn */
	IF(0x0C07DDACu); { u32 t_ = r8; PR = 0x0C07DDB0u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07C010, 0x0C07C010u, 0x0C07DDB0u); }  /* 0C07DDAC jsr @Rn */
L_0C07DDB0: BLKS(0x0C07DDB0u);
	T = (r0 & r0) == 0;  /* 0C07DDB0 tst Rm,Rn */
	if (!T) { UPD(0x0C07DDD0u, 4); goto L_0C07DDD0; }  /* 0C07DDB2 bf */
L_0C07DDB4: BLKS(0x0C07DDB4u);
	r15 = r14;  /* 0C07DDB4 mov Rm,Rn */
	IF(0x0C07DDB6u); PR = R32(r15); r15 += 4; UPD(0x0C07DDB8u, 2);  /* 0C07DDB6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07DDBAu, 1);  /* 0C07DDB8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07DDBCu, 1);  /* 0C07DDBA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07DDBEu, 1);  /* 0C07DDBC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07DDC0u, 1);  /* 0C07DDBE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07DDC2u, 1);  /* 0C07DDC0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07DDC4u, 1);  /* 0C07DDC2 mov.l @Rm+,Rn */
	IF(0x0C07DDC4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07DDC4 rts */
L_0C07DDD0: BLKS(0x0C07DDD0u);
	r4 = 0xC28EDFCu; UPD(0x0C07DDD2u, 1);  /* 0C07DDD0 mov.l @(disp,pc),Rn */
	r8 = 0x60u;  /* 0C07DDD2 mov #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r4); UPD(0x0C07DDD6u, 2);  /* 0C07DDD4 mov.w @Rm,Rn */
	r0 = 0x7u;  /* 0C07DDD6 mov #imm,Rn */
	IF(0x0C07DDD8u); MACL = r9 * r8;  /* 0C07DDD8 mul.l Rm,Rn */
	r3 = 0xC3BC7CCu; UPD(0x0C07DDDCu, 4);  /* 0C07DDDA mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C07DDDC mov #imm,Rn */
	IF(0x0C07DDDEu); r8 = MACL;  /* 0C07DDDE sts macl,Rn */
	r8 += r3;  /* 0C07DDE0 add Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C07DDE4u, 4);  /* 0C07DDE2 mov.l Rm,@(disp,Rn) */
	r0 = 0xC062780u; UPD(0x0C07DDE6u, 1);  /* 0C07DDE4 mov.l @(disp,pc),Rn */
	r2 = 0xC0000000u; UPD(0x0C07DDE8u, 1);  /* 0C07DDE6 mov.l @(disp,pc),Rn */
	IF(0x0C07DDE8u); { u32 t_ = r0; PR = 0x0C07DDECu; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07DDECu); }  /* 0C07DDE8 jsr @Rn */
L_0C07DDEC: BLKS(0x0C07DDECu);
	r6 = 0xC07BF80u; UPD(0x0C07DDEEu, 1);  /* 0C07DDEC mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C07DDEE mov #imm,Rn */
	r0 += 0x4u;  /* 0C07DDF0 add #imm,Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C07DDF4u, 3);  /* 0C07DDF2 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C07DDF4 mov Rm,Rn */
	IF(0x0C07DDF6u); { u32 t_ = r6; PR = 0x0C07DDFAu; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C07BF80, 0x0C07BF80u, 0x0C07DDFAu); }  /* 0C07DDF6 jsr @Rn */
L_0C07DDFA: BLKS(0x0C07DDFAu);
	W32(r8 + 0x28u, r12); UPD(0x0C07DDFCu, 1);  /* 0C07DDFA mov.l Rm,@(disp,Rn) */
	r3 = 0x0u;  /* 0C07DDFC mov #imm,Rn */
	W32(r8 + 0x2Cu, r13); UPD(0x0C07DE00u, 2);  /* 0C07DDFE mov.l Rm,@(disp,Rn) */
	r8 += 0x44u;  /* 0C07DE00 add #imm,Rn */
	W8(r8, r11); UPD(0x0C07DE04u, 2);  /* 0C07DE02 mov.b Rm,@Rn */
	r5 = R32(r14 + 0x20u); UPD(0x0C07DE06u, 1);  /* 0C07DE04 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07DE06 add #imm,Rn */
	W32(r8 + 0x30u, r10); UPD(0x0C07DE0Au, 2);  /* 0C07DE08 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x34u, r5); UPD(0x0C07DE0Cu, 1);  /* 0C07DE0A mov.l Rm,@(disp,Rn) */
	r4 = 0xFFFF4000u; UPD(0x0C07DE0Eu, 1);  /* 0C07DE0C mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07DE0E add #imm,Rn */
	W32(r8, r4); UPD(0x0C07DE12u, 2);  /* 0C07DE10 mov.l Rm,@Rn */
	r2 = 0x505050u; UPD(0x0C07DE14u, 1);  /* 0C07DE12 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFC0u;  /* 0C07DE14 add #imm,Rn */
	r10 = 0xC0C2360u; UPD(0x0C07DE18u, 2);  /* 0C07DE16 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r3); UPD(0x0C07DE1Au, 1);  /* 0C07DE18 mov.l Rm,@(disp,Rn) */
	IF(0x0C07DE1Au); { u32 t_ = r10; PR = 0x0C07DE1Eu; W32(r8 + 0x3Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C07DE1Eu); }  /* 0C07DE1A jsr @Rn */
L_0C07DE1E: BLKS(0x0C07DE1Eu);
	r8 += 0x4Fu;  /* 0C07DE1E add #imm,Rn */
	IF(0x0C07DE20u); { u32 t_ = r10; PR = 0x0C07DE24u; W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C07DE24u); }  /* 0C07DE20 jsr @Rn */
L_0C07DE24: BLKS(0x0C07DE24u);
	r8 += 0x1u;  /* 0C07DE24 add #imm,Rn */
	W8(r8, r0); UPD(0x0C07DE28u, 2);  /* 0C07DE26 mov.b Rm,@Rn */
	r8 += 0xCu;  /* 0C07DE28 add #imm,Rn */
	r0 = 0x0u;  /* 0C07DE2A mov #imm,Rn */
	{ W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C07DDB4u, 5); goto L_0C07DDB4; }  /* 0C07DE2C bra */
}

/* FUN_0c07de60 */
void blk_f_0C07DE60(sh3_t *c)
{
	LOCALS;
L_0C07DE60: BLKS(0x0C07DE60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07DE62u, 1);  /* 0C07DE60 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07DE64u, 1);  /* 0C07DE62 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07DE66u, 1);  /* 0C07DE64 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C07DE66 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07DE6Au, 2);  /* 0C07DE68 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C07DE6A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07DE6Eu, 2);  /* 0C07DE6C mov.l Rm,@-Rn */
	r11 = r6;  /* 0C07DE6E mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07DE72u, 2);  /* 0C07DE70 mov.l Rm,@-Rn */
	r12 = r7;  /* 0C07DE72 mov Rm,Rn */
	r8 = 0xC07C010u; UPD(0x0C07DE76u, 2);  /* 0C07DE74 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C07DE76 mov #imm,Rn */
	IF(0x0C07DE78u); r15 -= 4; W32(r15, PR); UPD(0x0C07DE7Au, 2);  /* 0C07DE78 sts.l pr,@-Rn */
	IF(0x0C07DE7Au); { u32 t_ = r8; PR = 0x0C07DE7Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07C010, 0x0C07C010u, 0x0C07DE7Eu); }  /* 0C07DE7A jsr @Rn */
L_0C07DE7E: BLKS(0x0C07DE7Eu);
	T = (r0 & r0) == 0;  /* 0C07DE7E tst Rm,Rn */
	if (!T) { UPD(0x0C07DEA0u, 4); goto L_0C07DEA0; }  /* 0C07DE80 bf */
L_0C07DE82: BLKS(0x0C07DE82u);
	r15 = r14;  /* 0C07DE82 mov Rm,Rn */
	IF(0x0C07DE84u); PR = R32(r15); r15 += 4; UPD(0x0C07DE86u, 2);  /* 0C07DE84 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07DE88u, 1);  /* 0C07DE86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07DE8Au, 1);  /* 0C07DE88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07DE8Cu, 1);  /* 0C07DE8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07DE8Eu, 1);  /* 0C07DE8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07DE90u, 1);  /* 0C07DE8E mov.l @Rm+,Rn */
	IF(0x0C07DE90u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07DE90 rts */
L_0C07DEA0: BLKS(0x0C07DEA0u);
	r7 = 0xC28EDFCu; UPD(0x0C07DEA2u, 1);  /* 0C07DEA0 mov.l @(disp,pc),Rn */
	r8 = 0x60u;  /* 0C07DEA2 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r7); UPD(0x0C07DEA6u, 2);  /* 0C07DEA4 mov.w @Rm,Rn */
	IF(0x0C07DEA6u); MACL = r4 * r8;  /* 0C07DEA6 mul.l Rm,Rn */
	r6 = 0xC3BC7CCu; UPD(0x0C07DEAAu, 3);  /* 0C07DEA8 mov.l @(disp,pc),Rn */
	IF(0x0C07DEAAu); r8 = MACL;  /* 0C07DEAA sts macl,Rn */
	r5 = 0xD0004000u; UPD(0x0C07DEAEu, 2);  /* 0C07DEAC mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C07DEAE add Rm,Rn */
	r3 = 0xC07CC00u; UPD(0x0C07DEB2u, 2);  /* 0C07DEB0 mov.l @(disp,pc),Rn */
	W32(r8, r5); UPD(0x0C07DEB4u, 1);  /* 0C07DEB2 mov.l Rm,@Rn */
	IF(0x0C07DEB4u); { u32 t_ = r3; PR = 0x0C07DEB8u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CC00, 0x0C07CC00u, 0x0C07DEB8u); }  /* 0C07DEB4 jsr @Rn */
L_0C07DEB8: BLKS(0x0C07DEB8u);
	r0 = 0xB4u; UPD(0x0C07DEBAu, 1);  /* 0C07DEB8 mov.w @(disp,pc),Rn */
	r8 += 0x4Au;  /* 0C07DEBA add #imm,Rn */
	IF(0x0C07DEBCu); MACL = r9 * r0;  /* 0C07DEBC mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C07DEC0u, 4);  /* 0C07DEBE mov.l @(disp,pc),Rn */
	IF(0x0C07DEC0u); r0 = MACL;  /* 0C07DEC0 sts macl,Rn */
	r0 += r2;  /* 0C07DEC2 add Rm,Rn */
	r10 = R32(r0 + 0x24u); UPD(0x0C07DEC6u, 3);  /* 0C07DEC4 mov.l @(disp,Rm),Rn */
	W16(r8, r9); UPD(0x0C07DEC8u, 1);  /* 0C07DEC6 mov.w Rm,@Rn */
	r10 += r11;  /* 0C07DEC8 add Rm,Rn */
	r8 += 0xFFFFFFB6u;  /* 0C07DECA add #imm,Rn */
	W32(r8 + 0x28u, r10); UPD(0x0C07DECEu, 3);  /* 0C07DECC mov.l Rm,@(disp,Rn) */
	r9 = R32(r0 + 0x28u); UPD(0x0C07DED0u, 1);  /* 0C07DECE mov.l @(disp,Rm),Rn */
	r7 = 0x82u; UPD(0x0C07DED2u, 1);  /* 0C07DED0 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C07DED2 add Rm,Rn */
	W32(r8 + 0x2Cu, r9); UPD(0x0C07DED6u, 2);  /* 0C07DED4 mov.l Rm,@(disp,Rn) */
	IF(0x0C07DED6u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C07DED8u, 1);  /* 0C07DED6 mov.w @(r0,Rm),Rn */
	r8 += 0x4Cu;  /* 0C07DED8 add #imm,Rn */
	W16(r8, r6); UPD(0x0C07DEDCu, 2);  /* 0C07DEDA mov.w Rm,@Rn */
	r5 = 0xA9u; UPD(0x0C07DEDEu, 1);  /* 0C07DEDC mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFF8u;  /* 0C07DEDE add #imm,Rn */
	IF(0x0C07DEE0u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C07DEE2u, 2);  /* 0C07DEE0 mov.b @(r0,Rm),Rn */
	W8(r8, r4); UPD(0x0C07DEE4u, 1);  /* 0C07DEE2 mov.b Rm,@Rn */
	r0 = 0x0u;  /* 0C07DEE4 mov #imm,Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07DEE6 add #imm,Rn */
	W32(r8 + 0x30u, r11); UPD(0x0C07DEEAu, 3);  /* 0C07DEE8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x34u, r12); UPD(0x0C07DEECu, 1);  /* 0C07DEEA mov.l Rm,@(disp,Rn) */
	r3 = 0xFFFD0000u; UPD(0x0C07DEEEu, 1);  /* 0C07DEEC mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07DEEE add #imm,Rn */
	W32(r8, r3); UPD(0x0C07DEF2u, 2);  /* 0C07DEF0 mov.l Rm,@Rn */
	r2 = 0x808080u; UPD(0x0C07DEF4u, 1);  /* 0C07DEF2 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFC0u;  /* 0C07DEF4 add #imm,Rn */
	W32(r8 + 0x38u, r0); UPD(0x0C07DEF8u, 2);  /* 0C07DEF6 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r2); UPD(0x0C07DEFAu, 1);  /* 0C07DEF8 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Fu;  /* 0C07DEFA add #imm,Rn */
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C07DE82u, 4); goto L_0C07DE82; }  /* 0C07DEFC bra */
}

/* FUN_0c07df30 */
void blk_f_0C07DF30(sh3_t *c)
{
	LOCALS;
L_0C07DF30: BLKS(0x0C07DF30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07DF32u, 1);  /* 0C07DF30 mov.l Rm,@-Rn */
	r0 = 0x4Cu;  /* 0C07DF32 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07DF36u, 2);  /* 0C07DF34 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07DF38u, 1);  /* 0C07DF36 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r7;  /* 0C07DF38 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07DF3Cu, 2);  /* 0C07DF3A mov.l Rm,@-Rn */
	IF(0x0C07DF3Cu); MACL = r9 * r0;  /* 0C07DF3C mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07DF40u, 3);  /* 0C07DF3E mov.l Rm,@-Rn */
	r10 = r4;  /* 0C07DF40 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07DF44u, 2);  /* 0C07DF42 mov.l Rm,@-Rn */
	IF(0x0C07DF44u); r0 = MACL;  /* 0C07DF44 sts macl,Rn */
	IF(0x0C07DF46u); r15 -= 4; W32(r15, PR); UPD(0x0C07DF48u, 2);  /* 0C07DF46 sts.l pr,@-Rn */
	r11 = r5;  /* 0C07DF48 mov Rm,Rn */
	r2 = 0xC286318u; UPD(0x0C07DF4Cu, 2);  /* 0C07DF4A mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07DF4C mov Rm,Rn */
	IF(0x0C07DF4Eu); r0 = R32(r0 + r2); UPD(0x0C07DF50u, 2);  /* 0C07DF4E mov.l @(r0,Rm),Rn */
	r0 &= 0x10u;  /* 0C07DF50 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07DF52 tst Rm,Rn */
	{ u32 c_ = T; r12 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07DF88u, 5); goto L_0C07DF88; } goto L_0C07DF58; }  /* 0C07DF54 bt/s */
L_0C07DF58: BLKS(0x0C07DF58u);
	r4 = 0xC28EDFCu; UPD(0x0C07DF5Au, 2);  /* 0C07DF58 mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C07DF5A mov #imm,Rn */
	r2 = 0x100u; UPD(0x0C07DF5Eu, 2);  /* 0C07DF5C mov.w @(disp,pc),Rn */
	r7 = r4;  /* 0C07DF5E mov Rm,Rn */
	r5 = 0x13Fu; UPD(0x0C07DF62u, 2);  /* 0C07DF60 mov.w @(disp,pc),Rn */
	r3 = 0xC3C27CCu; UPD(0x0C07DF64u, 1);  /* 0C07DF62 mov.l @(disp,pc),Rn */
L_0C07DF64: BLKS(0x0C07DF64u);
	r8 = R32(r3); UPD(0x0C07DF66u, 1);  /* 0C07DF64 mov.l @Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C07DF66 tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0x60u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DF7Cu, 4); goto L_0C07DF7C; } goto L_0C07DF6C; }  /* 0C07DF68 bf/s */
L_0C07DF6C: BLKS(0x0C07DF6Cu);
	r0 = r6;  /* 0C07DF6C mov Rm,Rn */
	W16(r7, r2); UPD(0x0C07DF70u, 3);  /* 0C07DF6E mov.w Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C07DF70 add #imm,Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C07DF72 exts.w Rm,Rn */
	r7 += 0x2u;  /* 0C07DF74 add #imm,Rn */
	T = (r6 & r6) == 0;  /* 0C07DF76 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07DF84u, 7); goto L_0C07DF84; } UPD(0x0C07DF7Cu, 1); goto L_0C07DF7C; }  /* 0C07DF78 bt/s */
L_0C07DF7C: BLKS(0x0C07DF7Cu);
	r2 += 0x1u;  /* 0C07DF7C add #imm,Rn */
	T = (s32)r2 > (s32)r5;  /* 0C07DF7E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07DF64u, 5); goto L_0C07DF64; } UPD(0x0C07DF84u, 1); goto L_0C07DF84; }  /* 0C07DF80 bf/s */
L_0C07DF84: BLKS(0x0C07DF84u);
	T = (r1 & r1) == 0;  /* 0C07DF84 tst Rm,Rn */
	if (!T) { UPD(0x0C07DFA0u, 4); goto L_0C07DFA0; }  /* 0C07DF86 bf */
L_0C07DF88: BLKS(0x0C07DF88u);
	r15 = r14;  /* 0C07DF88 mov Rm,Rn */
	IF(0x0C07DF8Au); PR = R32(r15); r15 += 4; UPD(0x0C07DF8Cu, 2);  /* 0C07DF8A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07DF8Eu, 1);  /* 0C07DF8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07DF90u, 1);  /* 0C07DF8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07DF92u, 1);  /* 0C07DF90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07DF94u, 1);  /* 0C07DF92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07DF96u, 1);  /* 0C07DF94 mov.l @Rm+,Rn */
	IF(0x0C07DF96u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07DF96 rts */
L_0C07DFA0: BLKS(0x0C07DFA0u);
	r4 = (u32)(s32)(s16)R16(r4); UPD(0x0C07DFA2u, 1);  /* 0C07DFA0 mov.w @Rm,Rn */
	r8 = 0x60u;  /* 0C07DFA2 mov #imm,Rn */
	IF(0x0C07DFA4u); MACL = r4 * r8;  /* 0C07DFA4 mul.l Rm,Rn */
	r5 = r10;  /* 0C07DFA6 mov Rm,Rn */
	r3 = 0xC3BC7CCu; UPD(0x0C07DFAAu, 5);  /* 0C07DFA8 mov.l @(disp,pc),Rn */
	IF(0x0C07DFAAu); r8 = MACL;  /* 0C07DFAA sts macl,Rn */
	r10 = 0xC07CC00u; UPD(0x0C07DFAEu, 2);  /* 0C07DFAC mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C07DFAE add Rm,Rn */
	r0 = 0xD0000010u; UPD(0x0C07DFB2u, 2);  /* 0C07DFB0 mov.l @(disp,pc),Rn */
	IF(0x0C07DFB2u); { u32 t_ = r10; PR = 0x0C07DFB6u; W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CC00, 0x0C07CC00u, 0x0C07DFB6u); }  /* 0C07DFB2 jsr @Rn */
L_0C07DFB6: BLKS(0x0C07DFB6u);
	W32(r8 + 0x28u, r11); UPD(0x0C07DFB8u, 1);  /* 0C07DFB6 mov.l Rm,@(disp,Rn) */
	r7 = 0x4Cu;  /* 0C07DFB8 mov #imm,Rn */
	W32(r8 + 0x2Cu, r12); UPD(0x0C07DFBCu, 2);  /* 0C07DFBA mov.l Rm,@(disp,Rn) */
	IF(0x0C07DFBCu); MACL = r9 * r7;  /* 0C07DFBC mul.l Rm,Rn */
	r8 += 0x48u;  /* 0C07DFBE add #imm,Rn */
	W8(r8, r9); UPD(0x0C07DFC2u, 4);  /* 0C07DFC0 mov.b Rm,@Rn */
	IF(0x0C07DFC2u); r6 = MACL;  /* 0C07DFC2 sts macl,Rn */
	r0 = 0xC28635Au; UPD(0x0C07DFC6u, 2);  /* 0C07DFC4 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFFCu;  /* 0C07DFC6 add #imm,Rn */
	IF(0x0C07DFC8u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07DFCAu, 2);  /* 0C07DFC8 mov.b @(r0,Rm),Rn */
	r3 = 0x0u;  /* 0C07DFCA mov #imm,Rn */
	W8(r8, r5); UPD(0x0C07DFCEu, 2);  /* 0C07DFCC mov.b Rm,@Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07DFCE add #imm,Rn */
	W32(r8 + 0x34u, r3); UPD(0x0C07DFD2u, 2);  /* 0C07DFD0 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r3); UPD(0x0C07DFD4u, 1);  /* 0C07DFD2 mov.l Rm,@(disp,Rn) */
	r4 = 0xFFFD0000u; UPD(0x0C07DFD6u, 1);  /* 0C07DFD4 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07DFD6 add #imm,Rn */
	W32(r8, r4); UPD(0x0C07DFDAu, 2);  /* 0C07DFD8 mov.l Rm,@Rn */
	r2 = 0x808080u; UPD(0x0C07DFDCu, 1);  /* 0C07DFDA mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFC0u;  /* 0C07DFDC add #imm,Rn */
	W32(r8 + 0x38u, r3); UPD(0x0C07DFE0u, 2);  /* 0C07DFDE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r2); UPD(0x0C07DFE2u, 1);  /* 0C07DFE0 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Fu;  /* 0C07DFE2 add #imm,Rn */
	{ W8(r8, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C07DF88u, 4); goto L_0C07DF88; }  /* 0C07DFE4 bra */
}

void blk_f_0C07E0A0(sh3_t *c)
{
	LOCALS;
L_0C07E0A0: BLKS(0x0C07E0A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E0A2u, 1);  /* 0C07E0A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E0A4u, 1);  /* 0C07E0A2 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E0A6u, 1);  /* 0C07E0A4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C07E0A6 exts.w Rm,Rn */
	r8 = 0xC07C010u; UPD(0x0C07E0AAu, 2);  /* 0C07E0A8 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C07E0AA mov #imm,Rn */
	IF(0x0C07E0ACu); r15 -= 4; W32(r15, PR); UPD(0x0C07E0AEu, 2);  /* 0C07E0AC sts.l pr,@-Rn */
	IF(0x0C07E0AEu); { u32 t_ = r8; PR = 0x0C07E0B2u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07C010, 0x0C07C010u, 0x0C07E0B2u); }  /* 0C07E0AE jsr @Rn */
L_0C07E0B2: BLKS(0x0C07E0B2u);
	T = (r0 & r0) == 0;  /* 0C07E0B2 tst Rm,Rn */
	if (!T) { UPD(0x0C07E0D0u, 4); goto L_0C07E0D0; }  /* 0C07E0B4 bf */
L_0C07E0B6: BLKS(0x0C07E0B6u);
	r15 = r14;  /* 0C07E0B6 mov Rm,Rn */
	IF(0x0C07E0B8u); PR = R32(r15); r15 += 4; UPD(0x0C07E0BAu, 2);  /* 0C07E0B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E0BCu, 1);  /* 0C07E0BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E0BEu, 1);  /* 0C07E0BC mov.l @Rm+,Rn */
	IF(0x0C07E0BEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07E0BE rts */
L_0C07E0D0: BLKS(0x0C07E0D0u);
	r5 = 0xC28EDFCu; UPD(0x0C07E0D2u, 1);  /* 0C07E0D0 mov.l @(disp,pc),Rn */
	r8 = 0x60u;  /* 0C07E0D2 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C07E0D6u, 2);  /* 0C07E0D4 mov.w @Rm,Rn */
	r9 += 0x9u;  /* 0C07E0D6 add #imm,Rn */
	IF(0x0C07E0D8u); MACL = r4 * r8;  /* 0C07E0D8 mul.l Rm,Rn */
	r0 = 0xC3BC7CCu; UPD(0x0C07E0DCu, 4);  /* 0C07E0DA mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C07E0DC mov #imm,Rn */
	IF(0x0C07E0DEu); r8 = MACL;  /* 0C07E0DE sts macl,Rn */
	r7 = 0xC0000000u; UPD(0x0C07E0E2u, 3);  /* 0C07E0E0 mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C07E0E2 add Rm,Rn */
	W32(r8, r7); UPD(0x0C07E0E6u, 2);  /* 0C07E0E4 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r9); UPD(0x0C07E0E8u, 1);  /* 0C07E0E6 mov.l Rm,@(disp,Rn) */
	r9 += 0xFFFFFFF7u;  /* 0C07E0E8 add #imm,Rn */
	r8 += 0x4Cu;  /* 0C07E0EA add #imm,Rn */
	W16(r8, r9); UPD(0x0C07E0EEu, 3);  /* 0C07E0EC mov.w Rm,@Rn */
	r6 = 0xC07BF80u; UPD(0x0C07E0F0u, 1);  /* 0C07E0EE mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB4u;  /* 0C07E0F0 add #imm,Rn */
	W32(r8 + 0xCu, r3); UPD(0x0C07E0F4u, 2);  /* 0C07E0F2 mov.l Rm,@(disp,Rn) */
	IF(0x0C07E0F4u); { u32 t_ = r6; PR = 0x0C07E0F8u; W32(r8 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C07BF80, 0x0C07BF80u, 0x0C07E0F8u); }  /* 0C07E0F4 jsr @Rn */
L_0C07E0F8: BLKS(0x0C07E0F8u);
	r8 += 0x4Fu;  /* 0C07E0F8 add #imm,Rn */
	r2 = 0x3Cu;  /* 0C07E0FA mov #imm,Rn */
	W8(r8, r2); UPD(0x0C07E0FEu, 3);  /* 0C07E0FC mov.b Rm,@Rn */
	r5 = 0x16u;  /* 0C07E0FE mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C07E100 add #imm,Rn */
	W8(r8, r5); UPD(0x0C07E104u, 3);  /* 0C07E102 mov.b Rm,@Rn */
	r4 = 0x4FFFFu; UPD(0x0C07E106u, 1);  /* 0C07E104 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07E106 add #imm,Rn */
	r7 = 0x2A0u; UPD(0x0C07E10Au, 2);  /* 0C07E108 mov.w @(disp,pc),Rn */
	W32(r8 + 0x38u, r4); UPD(0x0C07E10Cu, 1);  /* 0C07E10A mov.l Rm,@(disp,Rn) */
	IF(0x0C07E10Cu); MACL = r9 * r7;  /* 0C07E10C mul.l Rm,Rn */
	r0 = 0x808080u; UPD(0x0C07E110u, 3);  /* 0C07E10E mov.l @(disp,pc),Rn */
	r6 = 0x280000u; UPD(0x0C07E112u, 1);  /* 0C07E110 mov.l @(disp,pc),Rn */
	IF(0x0C07E112u); r5 = MACL;  /* 0C07E112 sts macl,Rn */
	r4 = 0x8000u; UPD(0x0C07E116u, 2);  /* 0C07E114 mov.l @(disp,pc),Rn */
	r3 = 0xC29D1D8u; UPD(0x0C07E118u, 1);  /* 0C07E116 mov.l @(disp,pc),Rn */
	W32(r8 + 0x3Cu, r0); UPD(0x0C07E11Au, 1);  /* 0C07E118 mov.l Rm,@(disp,Rn) */
	r5 += r3;  /* 0C07E11A add Rm,Rn */
	W32(r8 + 0x30u, r6); UPD(0x0C07E11Eu, 2);  /* 0C07E11C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x34u, r4); UPD(0x0C07E120u, 1);  /* 0C07E11E mov.l Rm,@(disp,Rn) */
	r2 = R32(r5 + 0x10u); UPD(0x0C07E122u, 1);  /* 0C07E120 mov.l @(disp,Rm),Rn */
	r2 += r6;  /* 0C07E122 add Rm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C07E126u, 2);  /* 0C07E124 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x14u); UPD(0x0C07E128u, 1);  /* 0C07E126 mov.l @(disp,Rm),Rn */
	r0 += r4;  /* 0C07E128 add Rm,Rn */
	{ W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07E0B6u, 4); goto L_0C07E0B6; }  /* 0C07E12A bra */
}

/* FUN_0c07e160 */
void blk_f_0C07E160(sh3_t *c)
{
	LOCALS;
L_0C07E160: BLKS(0x0C07E160u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E162u, 1);  /* 0C07E160 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C07E162 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E166u, 2);  /* 0C07E164 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E168u, 1);  /* 0C07E166 mov.l Rm,@-Rn */
	IF(0x0C07E168u); r15 -= 4; W32(r15, PR); UPD(0x0C07E16Au, 1);  /* 0C07E168 sts.l pr,@-Rn */
	r3 = 0xC07E5C0u; UPD(0x0C07E16Cu, 1);  /* 0C07E16A mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFDCu;  /* 0C07E16C add #imm,Rn */
	r14 = r15;  /* 0C07E16E mov Rm,Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C07E172u, 3);  /* 0C07E170 mov.l Rm,@(disp,Rn) */
	r7 = 0xC07E250u; UPD(0x0C07E174u, 1);  /* 0C07E172 mov.l @(disp,pc),Rn */
	r3 = 0x60u;  /* 0C07E174 mov #imm,Rn */
	r0 = 0xC07D100u; UPD(0x0C07E178u, 2);  /* 0C07E176 mov.l @(disp,pc),Rn */
	IF(0x0C07E178u); MACL = r5 * r3;  /* 0C07E178 mul.l Rm,Rn */
	r8 = 0xC07D010u; UPD(0x0C07E17Cu, 3);  /* 0C07E17A mov.l @(disp,pc),Rn */
	W32(r14 + 0x10u, r7); UPD(0x0C07E17Eu, 1);  /* 0C07E17C mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x4u, r0); UPD(0x0C07E180u, 1);  /* 0C07E17E mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r8); UPD(0x0C07E182u, 1);  /* 0C07E180 mov.l Rm,@(disp,Rn) */
	r2 = 0xC07CEC0u; UPD(0x0C07E184u, 1);  /* 0C07E182 mov.l @(disp,pc),Rn */
	IF(0x0C07E184u); r8 = MACL;  /* 0C07E184 sts macl,Rn */
	r7 = 0xC3BC7CCu; UPD(0x0C07E188u, 2);  /* 0C07E186 mov.l @(disp,pc),Rn */
	W32(r14, r2); UPD(0x0C07E18Au, 1);  /* 0C07E188 mov.l Rm,@Rn */
	r7 += r8;  /* 0C07E18A add Rm,Rn */
	r0 = 0xC07E440u; UPD(0x0C07E18Eu, 2);  /* 0C07E18C mov.l @(disp,pc),Rn */
	r8 = R32(r7 + 0x4u); UPD(0x0C07E190u, 1);  /* 0C07E18E mov.l @(disp,Rm),Rn */
	r2 = 0xC07E350u; UPD(0x0C07E192u, 1);  /* 0C07E190 mov.l @(disp,pc),Rn */
	W32(r14 + 0x1Cu, r0); UPD(0x0C07E194u, 1);  /* 0C07E192 mov.l Rm,@(disp,Rn) */
	r6 = 0xC07E4C0u; UPD(0x0C07E196u, 1);  /* 0C07E194 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C07E196 mov Rm,Rn */
	W32(r14 + 0x18u, r2); UPD(0x0C07E19Au, 2);  /* 0C07E198 mov.l Rm,@(disp,Rn) */
	IF(0x0C07E19Au); r0 <<= 2;  /* 0C07E19A shll2 Rn */
	W32(r14 + 0x14u, r6); UPD(0x0C07E19Eu, 2);  /* 0C07E19C mov.l Rm,@(disp,Rn) */
	IF(0x0C07E19Eu); r6 = R32(r0 + r14); UPD(0x0C07E1A0u, 1);  /* 0C07E19E mov.l @(r0,Rm),Rn */
	IF(0x0C07E1A0u); { u32 t_ = r6; PR = 0x0C07E1A4u; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C07E1A4u); }  /* 0C07E1A0 jsr @Rn */
L_0C07E1A4: BLKS(0x0C07E1A4u);
	r2 = 0xC22E015u; UPD(0x0C07E1A6u, 1);  /* 0C07E1A4 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C07E1A6 mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C07E1AAu, 2);  /* 0C07E1A8 mov.b @Rm,Rn */
	r1 = r8;  /* 0C07E1AA mov Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C07E1AC extu.b Rm,Rn */
	r4 = 0xC3C847Cu; UPD(0x0C07E1B0u, 3);  /* 0C07E1AE mov.l @(disp,pc),Rn */
	IF(0x0C07E1B0u); r7 <<= 2;  /* 0C07E1B0 shll2 Rn */
	r7 += r7;  /* 0C07E1B2 add Rm,Rn */
	r4 += r7;  /* 0C07E1B4 add Rm,Rn */
	r0 = r4;  /* 0C07E1B6 mov Rm,Rn */
	IF(0x0C07E1B8u); W8(r0 + r8, r3); UPD(0x0C07E1BAu, 5);  /* 0C07E1B8 mov.b Rm,@(r0,Rn) */
	r1 += 0xFFFFFFFAu;  /* 0C07E1BA add #imm,Rn */
	r0 = 0x1u;  /* 0C07E1BC mov #imm,Rn */
	T = r1 > r0;  /* 0C07E1BE cmp/hi Rm,Rn */
	{ u32 c_ = !T; r9 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07E210u, 6); goto L_0C07E210; } goto L_0C07E1C4; }  /* 0C07E1C0 bf/s */
L_0C07E1C4: BLKS(0x0C07E1C4u);
	r9 = 0xC22E2ACu; UPD(0x0C07E1C6u, 2);  /* 0C07E1C4 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C07E1C6 mov #imm,Rn */
	r9 += r7;  /* 0C07E1C8 add Rm,Rn */
	r0 = r9;  /* 0C07E1CA mov Rm,Rn */
	IF(0x0C07E1CCu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07E1CEu, 4);  /* 0C07E1CC mov.b @(r0,Rm),Rn */
	r7 = 0x0u;  /* 0C07E1CE mov #imm,Rn */
	r9 = r5 & 0xFF;  /* 0C07E1D0 extu.b Rm,Rn */
	r3 = 0x7u;  /* 0C07E1D2 mov #imm,Rn */
	UPD(0x0C07E1D4u, 3);
L_0C07E1D4: BLKS(0x0C07E1D4u);
	r4 = r2;  /* 0C07E1D4 mov Rm,Rn */
	r6 = r0;  /* 0C07E1D6 mov Rm,Rn */
	r6 += r2;  /* 0C07E1D8 add Rm,Rn */
	r4 += 0x1u;  /* 0C07E1DA add #imm,Rn */
	r2 = (u32)(s32)(s16)r4;  /* 0C07E1DC exts.w Rm,Rn */
	T = (s32)r2 > (s32)r3;  /* 0C07E1DE cmp/gt Rm,Rn */
	{ u32 c_ = !T; W8(r6, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07E1D4u, 9); goto L_0C07E1D4; } UPD(0x0C07E1E4u, 1); goto L_0C07E1E4; }  /* 0C07E1E0 bf/s */
L_0C07E1E4: BLKS(0x0C07E1E4u);
	r2 = 0xC22E015u; UPD(0x0C07E1E6u, 1);  /* 0C07E1E4 mov.l @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C07E1E6 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C07E1EAu, 2);  /* 0C07E1E8 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C07E1EA extu.b Rm,Rn */
	IF(0x0C07E1ECu); r7 <<= 2;  /* 0C07E1EC shll2 Rn */
	r3 = 0xC22E2ACu; UPD(0x0C07E1F0u, 3);  /* 0C07E1EE mov.l @(disp,pc),Rn */
	r7 += r7;  /* 0C07E1F0 add Rm,Rn */
	r7 += r3;  /* 0C07E1F2 add Rm,Rn */
	r0 = r7;  /* 0C07E1F4 mov Rm,Rn */
	UPD(0x0C07E1F6u, 3);
L_0C07E1F6: BLKS(0x0C07E1F6u);
	IF(0x0C07E1F6u); W8(r0 + r8, r9); UPD(0x0C07E1F8u, 1);  /* 0C07E1F6 mov.b Rm,@(r0,Rn) */
	r14 += 0x24u;  /* 0C07E1F8 add #imm,Rn */
	r15 = r14;  /* 0C07E1FA mov Rm,Rn */
	IF(0x0C07E1FCu); PR = R32(r15); r15 += 4; UPD(0x0C07E1FEu, 3);  /* 0C07E1FC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E200u, 1);  /* 0C07E1FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E202u, 1);  /* 0C07E200 mov.l @Rm+,Rn */
	IF(0x0C07E202u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07E202 rts */
L_0C07E210: BLKS(0x0C07E210u);
	r5 = 0xC22E2ACu; UPD(0x0C07E212u, 1);  /* 0C07E210 mov.l @(disp,pc),Rn */
	r7 += r5;  /* 0C07E212 add Rm,Rn */
	{ r0 = r7; /* slot mov Rm,Rn */ UPD(0x0C07E1F6u, 4); goto L_0C07E1F6; }  /* 0C07E214 bra */
}

void blk_f_0C07E250(sh3_t *c)
{
	LOCALS;
L_0C07E250: BLKS(0x0C07E250u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E252u, 1);  /* 0C07E250 mov.l Rm,@-Rn */
	r3 = 0x5u;  /* 0C07E252 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E256u, 2);  /* 0C07E254 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C07E256 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07E25Au, 2);  /* 0C07E258 mov.l Rm,@-Rn */
	r2 = 0x2A0u; UPD(0x0C07E25Cu, 1);  /* 0C07E25A mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07E25C exts.w Rm,Rn */
	IF(0x0C07E25Eu); MACL = r10 * r2;  /* 0C07E25E mul.l Rm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C07E262u, 4);  /* 0C07E260 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E264u, 1);  /* 0C07E262 mov.l Rm,@-Rn */
	IF(0x0C07E264u); r9 = MACL;  /* 0C07E264 sts macl,Rn */
	r9 += r0;  /* 0C07E266 add Rm,Rn */
	IF(0x0C07E268u); r15 -= 4; W32(r15, PR); UPD(0x0C07E26Au, 3);  /* 0C07E268 sts.l pr,@-Rn */
	r0 = 0x25Bu; UPD(0x0C07E26Cu, 1);  /* 0C07E26A mov.w @(disp,pc),Rn */
	IF(0x0C07E26Cu); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07E26Eu, 1);  /* 0C07E26C mov.b @(r0,Rm),Rn */
	T = r2 > r3;  /* 0C07E26E cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07E2F0u, 4); goto L_0C07E2F0; } goto L_0C07E274; }  /* 0C07E270 bt/s */
L_0C07E274: BLKS(0x0C07E274u);
	r3 = r2;  /* 0C07E274 mov Rm,Rn */
	r3 += 0x1u;  /* 0C07E276 add #imm,Rn */
	r8 = 0x60u;  /* 0C07E278 mov #imm,Rn */
	IF(0x0C07E27Au); W8(r0 + r9, r3); UPD(0x0C07E27Cu, 5);  /* 0C07E27A mov.b Rm,@(r0,Rn) */
	IF(0x0C07E27Cu); MACL = r5 * r8;  /* 0C07E27C mul.l Rm,Rn */
	r0 = 0xC3BC7CCu; UPD(0x0C07E280u, 3);  /* 0C07E27E mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C07E280 mov #imm,Rn */
	IF(0x0C07E282u); r8 = MACL;  /* 0C07E282 sts macl,Rn */
	r8 += r0;  /* 0C07E284 add Rm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C07E288u, 4);  /* 0C07E286 mov.l Rm,@(disp,Rn) */
	r6 = 0x8u;  /* 0C07E288 mov #imm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C07E28Cu, 2);  /* 0C07E28A mov.l Rm,@(disp,Rn) */
	r7 = R32(r8); UPD(0x0C07E28Eu, 1);  /* 0C07E28C mov.l @Rm,Rn */
	r4 = r5;  /* 0C07E28E mov Rm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C07E292u, 2);  /* 0C07E290 mov.l @(disp,pc),Rn */
	r5 = 0xC07BF80u; UPD(0x0C07E294u, 1);  /* 0C07E292 mov.l @(disp,pc),Rn */
	r7 &= r1;  /* 0C07E294 and Rm,Rn */
	W32(r8, r7); UPD(0x0C07E298u, 2);  /* 0C07E296 mov.l Rm,@Rn */
	IF(0x0C07E298u); { u32 t_ = r5; PR = 0x0C07E29Cu; W32(r8 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C07BF80, 0x0C07BF80u, 0x0C07E29Cu); }  /* 0C07E298 jsr @Rn */
L_0C07E29C: BLKS(0x0C07E29Cu);
	r3 = 0x3Cu;  /* 0C07E29C mov #imm,Rn */
	r8 += 0x4Fu;  /* 0C07E29E add #imm,Rn */
	W8(r8, r3); UPD(0x0C07E2A2u, 3);  /* 0C07E2A0 mov.b Rm,@Rn */
	r2 = 0x14u;  /* 0C07E2A2 mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C07E2A4 add #imm,Rn */
	W8(r8, r2); UPD(0x0C07E2A8u, 3);  /* 0C07E2A6 mov.b Rm,@Rn */
	r7 = 0x808080u; UPD(0x0C07E2AAu, 1);  /* 0C07E2A8 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07E2AA add #imm,Rn */
	r0 = 0x4FFFFu; UPD(0x0C07E2AEu, 2);  /* 0C07E2AC mov.l @(disp,pc),Rn */
	W32(r8 + 0x3Cu, r7); UPD(0x0C07E2B0u, 1);  /* 0C07E2AE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r0); UPD(0x0C07E2B2u, 1);  /* 0C07E2B0 mov.l Rm,@(disp,Rn) */
	r6 = 0x180000u; UPD(0x0C07E2B4u, 1);  /* 0C07E2B2 mov.l @(disp,pc),Rn */
	r5 = R32(r9 + 0x10u); UPD(0x0C07E2B6u, 1);  /* 0C07E2B4 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C07E2B6 add Rm,Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C07E2BAu, 2);  /* 0C07E2B8 mov.l Rm,@(disp,Rn) */
	r1 = 0x100000u; UPD(0x0C07E2BCu, 1);  /* 0C07E2BA mov.l @(disp,pc),Rn */
	r4 = R32(r9 + 0x14u); UPD(0x0C07E2BEu, 1);  /* 0C07E2BC mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C07E2BE add Rm,Rn */
	W32(r8 + 0x2Cu, r4); UPD(0x0C07E2C2u, 2);  /* 0C07E2C0 mov.l Rm,@(disp,Rn) */
	r9 = 0xC07B620u; UPD(0x0C07E2C4u, 1);  /* 0C07E2C2 mov.l @(disp,pc),Rn */
	r8 = 0xC0C20A0u; UPD(0x0C07E2C6u, 1);  /* 0C07E2C4 mov.l @(disp,pc),Rn */
	IF(0x0C07E2C6u); { u32 t_ = r9; PR = 0x0C07E2CAu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07B620, 0x0C07B620u, 0x0C07E2CAu); }  /* 0C07E2C6 jsr @Rn */
L_0C07E2CA: BLKS(0x0C07E2CAu);
	r4 = r10;  /* 0C07E2CA mov Rm,Rn */
	IF(0x0C07E2CCu); { u32 t_ = r8; PR = 0x0C07E2D0u; r5 = 0x5Eu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C07E2D0u); }  /* 0C07E2CC jsr @Rn */
L_0C07E2D0: BLKS(0x0C07E2D0u);
	r5 = 0x9Cu; UPD(0x0C07E2D2u, 1);  /* 0C07E2D0 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C07E2D2 mov Rm,Rn */
	r3 = 0xC0C2020u; UPD(0x0C07E2D6u, 2);  /* 0C07E2D4 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07E2D6 mov Rm,Rn */
	IF(0x0C07E2D8u); PR = R32(r15); r15 += 4; UPD(0x0C07E2DAu, 2);  /* 0C07E2D8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E2DCu, 1);  /* 0C07E2DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07E2DEu, 1);  /* 0C07E2DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E2E0u, 1);  /* 0C07E2DE mov.l @Rm+,Rn */
	IF(0x0C07E2E0u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C2020u: TAIL(blk_f_0C0C2020); default: JUMPD(tv_); } }  /* 0C07E2E0 jmp @Rn */
L_0C07E2F0: BLKS(0x0C07E2F0u);
	r4 = r10;  /* 0C07E2F0 mov Rm,Rn */
	r10 = 0xC07D2E0u; UPD(0x0C07E2F4u, 2);  /* 0C07E2F2 mov.l @(disp,pc),Rn */
	IF(0x0C07E2F4u); { u32 t_ = r10; PR = 0x0C07E2F8u; IF(0x0C07E2F6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C07D2E0, 0x0C07D2E0u, 0x0C07E2F8u); }  /* 0C07E2F4 jsr @Rn */
L_0C07E2F8: BLKS(0x0C07E2F8u);
	r4 = 0x80000u; UPD(0x0C07E2FAu, 1);  /* 0C07E2F8 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C07E2FCu, 1);  /* 0C07E2FA mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07E2FC mov Rm,Rn */
	IF(0x0C07E2FEu); PR = R32(r15); r15 += 4; UPD(0x0C07E300u, 2);  /* 0C07E2FE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E302u, 1);  /* 0C07E300 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07E304u, 1);  /* 0C07E302 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E306u, 1);  /* 0C07E304 mov.l @Rm+,Rn */
	IF(0x0C07E306u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C07E306 jmp @Rn */
}

void blk_f_0C07E350(sh3_t *c)
{
	LOCALS;
L_0C07E350: BLKS(0x0C07E350u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E352u, 1);  /* 0C07E350 mov.l Rm,@-Rn */
	r3 = 0x4u;  /* 0C07E352 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E356u, 2);  /* 0C07E354 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C07E356 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07E35Au, 2);  /* 0C07E358 mov.l Rm,@-Rn */
	r2 = 0x2A0u; UPD(0x0C07E35Cu, 1);  /* 0C07E35A mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07E35C exts.w Rm,Rn */
	IF(0x0C07E35Eu); MACL = r10 * r2;  /* 0C07E35E mul.l Rm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C07E362u, 4);  /* 0C07E360 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E364u, 1);  /* 0C07E362 mov.l Rm,@-Rn */
	IF(0x0C07E364u); r9 = MACL;  /* 0C07E364 sts macl,Rn */
	r9 += r0;  /* 0C07E366 add Rm,Rn */
	IF(0x0C07E368u); r15 -= 4; W32(r15, PR); UPD(0x0C07E36Au, 3);  /* 0C07E368 sts.l pr,@-Rn */
	r0 = 0x25Au; UPD(0x0C07E36Cu, 1);  /* 0C07E36A mov.w @(disp,pc),Rn */
	IF(0x0C07E36Cu); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07E36Eu, 1);  /* 0C07E36C mov.b @(r0,Rm),Rn */
	T = r2 > r3;  /* 0C07E36E cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07E3E0u, 4); goto L_0C07E3E0; } goto L_0C07E374; }  /* 0C07E370 bt/s */
L_0C07E374: BLKS(0x0C07E374u);
	r8 = 0x60u;  /* 0C07E374 mov #imm,Rn */
	IF(0x0C07E376u); MACL = r5 * r8;  /* 0C07E376 mul.l Rm,Rn */
	r3 = r2;  /* 0C07E378 mov Rm,Rn */
	r3 += 0x1u;  /* 0C07E37A add #imm,Rn */
	r2 = 0xC3BC7CCu; UPD(0x0C07E37Eu, 7);  /* 0C07E37C mov.l @(disp,pc),Rn */
	IF(0x0C07E37Eu); r8 = MACL;  /* 0C07E37E sts macl,Rn */
	IF(0x0C07E380u); W8(r0 + r9, r3); UPD(0x0C07E382u, 2);  /* 0C07E380 mov.b Rm,@(r0,Rn) */
	r8 += r2;  /* 0C07E382 add Rm,Rn */
	r4 = 0x0u;  /* 0C07E384 mov #imm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C07E388u, 3);  /* 0C07E386 mov.l Rm,@(disp,Rn) */
	r7 = 0x8u;  /* 0C07E388 mov #imm,Rn */
	r0 = R32(r8); UPD(0x0C07E38Cu, 2);  /* 0C07E38A mov.l @Rm,Rn */
	r4 = r5;  /* 0C07E38C mov Rm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C07E390u, 2);  /* 0C07E38E mov.l @(disp,pc),Rn */
	r6 = 0x2u;  /* 0C07E390 mov #imm,Rn */
	r5 = 0xC07BF80u; UPD(0x0C07E394u, 2);  /* 0C07E392 mov.l @(disp,pc),Rn */
	r0 &= r1;  /* 0C07E394 and Rm,Rn */
	W32(r8, r0); UPD(0x0C07E398u, 2);  /* 0C07E396 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C07E39Au, 1);  /* 0C07E398 mov.l Rm,@(disp,Rn) */
	IF(0x0C07E39Au); { u32 t_ = r5; PR = 0x0C07E39Eu; W32(r8 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C07BF80, 0x0C07BF80u, 0x0C07E39Eu); }  /* 0C07E39A jsr @Rn */
L_0C07E39E: BLKS(0x0C07E39Eu);
	r3 = 0x3Cu;  /* 0C07E39E mov #imm,Rn */
	r8 += 0x4Fu;  /* 0C07E3A0 add #imm,Rn */
	W8(r8, r3); UPD(0x0C07E3A4u, 3);  /* 0C07E3A2 mov.b Rm,@Rn */
	r2 = 0x14u;  /* 0C07E3A4 mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C07E3A6 add #imm,Rn */
	W8(r8, r2); UPD(0x0C07E3AAu, 3);  /* 0C07E3A8 mov.b Rm,@Rn */
	r7 = 0x808080u; UPD(0x0C07E3ACu, 1);  /* 0C07E3AA mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07E3AC add #imm,Rn */
	r0 = 0x4FFFFu; UPD(0x0C07E3B0u, 2);  /* 0C07E3AE mov.l @(disp,pc),Rn */
	W32(r8 + 0x3Cu, r7); UPD(0x0C07E3B2u, 1);  /* 0C07E3B0 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r0); UPD(0x0C07E3B4u, 1);  /* 0C07E3B2 mov.l Rm,@(disp,Rn) */
	r6 = 0x180000u; UPD(0x0C07E3B6u, 1);  /* 0C07E3B4 mov.l @(disp,pc),Rn */
	r5 = R32(r9 + 0x10u); UPD(0x0C07E3B8u, 1);  /* 0C07E3B6 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C07E3B8 add Rm,Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C07E3BCu, 2);  /* 0C07E3BA mov.l Rm,@(disp,Rn) */
	r1 = 0x100000u; UPD(0x0C07E3BEu, 1);  /* 0C07E3BC mov.l @(disp,pc),Rn */
	r5 = 0x62u;  /* 0C07E3BE mov #imm,Rn */
	r4 = R32(r9 + 0x14u); UPD(0x0C07E3C2u, 2);  /* 0C07E3C0 mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C07E3C2 add Rm,Rn */
	W32(r8 + 0x2Cu, r4); UPD(0x0C07E3C6u, 2);  /* 0C07E3C4 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0C20A0u; UPD(0x0C07E3C8u, 1);  /* 0C07E3C6 mov.l @(disp,pc),Rn */
	IF(0x0C07E3C8u); { u32 t_ = r8; PR = 0x0C07E3CCu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C07E3CCu); }  /* 0C07E3C8 jsr @Rn */
L_0C07E3CC: BLKS(0x0C07E3CCu);
	r5 = 0x9Bu; UPD(0x0C07E3CEu, 1);  /* 0C07E3CC mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C07E3CE mov Rm,Rn */
	r3 = 0xC0C2020u; UPD(0x0C07E3D2u, 2);  /* 0C07E3D0 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07E3D2 mov Rm,Rn */
	IF(0x0C07E3D4u); PR = R32(r15); r15 += 4; UPD(0x0C07E3D6u, 2);  /* 0C07E3D4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E3D8u, 1);  /* 0C07E3D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07E3DAu, 1);  /* 0C07E3D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E3DCu, 1);  /* 0C07E3DA mov.l @Rm+,Rn */
	IF(0x0C07E3DCu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C2020u: TAIL(blk_f_0C0C2020); default: JUMPD(tv_); } }  /* 0C07E3DC jmp @Rn */
L_0C07E3E0: BLKS(0x0C07E3E0u);
	r9 = 0xC07D2E0u; UPD(0x0C07E3E2u, 1);  /* 0C07E3E0 mov.l @(disp,pc),Rn */
	IF(0x0C07E3E2u); { u32 t_ = r9; PR = 0x0C07E3E6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07D2E0, 0x0C07D2E0u, 0x0C07E3E6u); }  /* 0C07E3E2 jsr @Rn */
L_0C07E3E6: BLKS(0x0C07E3E6u);
	r4 = 0x400000u; UPD(0x0C07E3E8u, 1);  /* 0C07E3E6 mov.l @(disp,pc),Rn */
	r5 = 0xC071C90u; UPD(0x0C07E3EAu, 1);  /* 0C07E3E8 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07E3EA mov Rm,Rn */
	IF(0x0C07E3ECu); PR = R32(r15); r15 += 4; UPD(0x0C07E3EEu, 2);  /* 0C07E3EC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E3F0u, 1);  /* 0C07E3EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07E3F2u, 1);  /* 0C07E3F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E3F4u, 1);  /* 0C07E3F2 mov.l @Rm+,Rn */
	IF(0x0C07E3F4u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C07E3F4 jmp @Rn */
}

void blk_f_0C07E440(sh3_t *c)
{
	LOCALS;
L_0C07E440: BLKS(0x0C07E440u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E442u, 1);  /* 0C07E440 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r5;  /* 0C07E442 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E446u, 2);  /* 0C07E444 mov.l Rm,@-Rn */
	r8 = 0x60u;  /* 0C07E446 mov #imm,Rn */
	IF(0x0C07E448u); MACL = r1 * r8;  /* 0C07E448 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E44Cu, 4);  /* 0C07E44A mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C07E44C exts.w Rm,Rn */
	r2 = 0xC3BC7CCu; UPD(0x0C07E450u, 2);  /* 0C07E44E mov.l @(disp,pc),Rn */
	IF(0x0C07E450u); r8 = MACL;  /* 0C07E450 sts macl,Rn */
	IF(0x0C07E452u); r15 -= 4; W32(r15, PR); UPD(0x0C07E454u, 2);  /* 0C07E452 sts.l pr,@-Rn */
	r8 += r2;  /* 0C07E454 add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C07E458u, 2);  /* 0C07E456 mov.l @(disp,Rm),Rn */
	r5 = 0xBu;  /* 0C07E458 mov #imm,Rn */
	r6 = 0xC189C8Cu; UPD(0x0C07E45Cu, 2);  /* 0C07E45A mov.l @(disp,pc),Rn */
	IF(0x0C07E45Cu); r0 <<= 2;  /* 0C07E45C shll2 Rn */
	IF(0x0C07E45Eu); r4 = R32(r0 + r6); UPD(0x0C07E460u, 2);  /* 0C07E45E mov.l @(r0,Rm),Rn */
	r14 = r15;  /* 0C07E460 mov Rm,Rn */
	r0 = 0xC071CC0u; UPD(0x0C07E464u, 2);  /* 0C07E462 mov.l @(disp,pc),Rn */
	IF(0x0C07E464u); { u32 t_ = r0; PR = 0x0C07E468u; IF(0x0C07E466u); ARG0(0x445Du); { s32 s_ = (s32)r5; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); } /* slot shld Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071CC0, 0x0C071CC0u, 0x0C07E468u); }  /* 0C07E464 jsr @Rn */
L_0C07E468: BLKS(0x0C07E468u);
	r4 = 0x2A0u; UPD(0x0C07E46Au, 1);  /* 0C07E468 mov.w @(disp,pc),Rn */
	r7 = r8;  /* 0C07E46A mov Rm,Rn */
	IF(0x0C07E46Cu); MACL = r9 * r4;  /* 0C07E46C mul.l Rm,Rn */
	r7 += 0x54u;  /* 0C07E46E add #imm,Rn */
	r8 += 0x58u;  /* 0C07E470 add #imm,Rn */
	r2 = R32(r8); UPD(0x0C07E474u, 6);  /* 0C07E472 mov.l @Rm,Rn */
	IF(0x0C07E474u); r4 = MACL;  /* 0C07E474 sts macl,Rn */
	r6 = R32(r7); UPD(0x0C07E478u, 2);  /* 0C07E476 mov.l @Rm,Rn */
	r5 = 0xAu;  /* 0C07E478 mov #imm,Rn */
	r3 = 0xC29D1D8u; UPD(0x0C07E47Cu, 2);  /* 0C07E47A mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C07E47C add Rm,Rn */
	r0 = 0x290u; UPD(0x0C07E480u, 2);  /* 0C07E47E mov.w @(disp,pc),Rn */
	IF(0x0C07E480u); MACL = r6 * r5;  /* 0C07E480 mul.l Rm,Rn */
	r4 += r3;  /* 0C07E482 add Rm,Rn */
	r4 += r0;  /* 0C07E484 add Rm,Rn */
	r3 = R32(r4); UPD(0x0C07E488u, 5);  /* 0C07E486 mov.l @Rm,Rn */
	IF(0x0C07E488u); r1 = MACL;  /* 0C07E488 sts macl,Rn */
	r3 += r1;  /* 0C07E48A add Rm,Rn */
	W32(r4, r3); UPD(0x0C07E48Eu, 3);  /* 0C07E48C mov.l Rm,@Rn */
	r8 += 0xFFFFFFA8u;  /* 0C07E48E add #imm,Rn */
	r0 = 0x0u;  /* 0C07E490 mov #imm,Rn */
	W32(r8, r0); UPD(0x0C07E494u, 3);  /* 0C07E492 mov.l Rm,@Rn */
	r4 = r9;  /* 0C07E494 mov Rm,Rn */
	r0 = 0xC0C20A0u; UPD(0x0C07E498u, 2);  /* 0C07E496 mov.l @(disp,pc),Rn */
	r5 = 0x63u;  /* 0C07E498 mov #imm,Rn */
	r15 = r14;  /* 0C07E49A mov Rm,Rn */
	IF(0x0C07E49Cu); PR = R32(r15); r15 += 4; UPD(0x0C07E49Eu, 3);  /* 0C07E49C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E4A0u, 1);  /* 0C07E49E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E4A2u, 1);  /* 0C07E4A0 mov.l @Rm+,Rn */
	IF(0x0C07E4A2u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C07E4A2 jmp @Rn */
}

void blk_f_0C07E4C0(sh3_t *c)
{
	LOCALS;
L_0C07E4C0: BLKS(0x0C07E4C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E4C2u, 1);  /* 0C07E4C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E4C4u, 1);  /* 0C07E4C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07E4C6u, 1);  /* 0C07E4C4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07E4C8u, 1);  /* 0C07E4C6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C07E4C8 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E4CCu, 2);  /* 0C07E4CA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07E4CC exts.w Rm,Rn */
	r8 = 0xC071C90u; UPD(0x0C07E4D0u, 2);  /* 0C07E4CE mov.l @(disp,pc),Rn */
	IF(0x0C07E4D0u); r15 -= 4; W32(r15, PR); UPD(0x0C07E4D2u, 1);  /* 0C07E4D0 sts.l pr,@-Rn */
	r4 = 0x400000u; UPD(0x0C07E4D4u, 1);  /* 0C07E4D2 mov.l @(disp,pc),Rn */
	IF(0x0C07E4D4u); { u32 t_ = r8; PR = 0x0C07E4D8u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C07E4D8u); }  /* 0C07E4D4 jsr @Rn */
L_0C07E4D8: BLKS(0x0C07E4D8u);
	r0 = 0x2A0u; UPD(0x0C07E4DAu, 1);  /* 0C07E4D8 mov.w @(disp,pc),Rn */
	IF(0x0C07E4DAu); MACL = r11 * r0;  /* 0C07E4DA mul.l Rm,Rn */
	r3 = 0x25Cu; UPD(0x0C07E4DEu, 3);  /* 0C07E4DC mov.w @(disp,pc),Rn */
	r0 = 0xC29D1D8u; UPD(0x0C07E4E0u, 1);  /* 0C07E4DE mov.l @(disp,pc),Rn */
	IF(0x0C07E4E0u); r9 = MACL;  /* 0C07E4E0 sts macl,Rn */
	r9 += r0;  /* 0C07E4E2 add Rm,Rn */
	r3 += r9;  /* 0C07E4E4 add Rm,Rn */
	r2 = r3;  /* 0C07E4E6 mov Rm,Rn */
	r2 += 0x1u;  /* 0C07E4E8 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C07E4ECu, 6);  /* 0C07E4EA mov.b @Rm,Rn */
	T = r0 == 0x4u;  /* 0C07E4EC cmp/eq #imm,r0 */
	{ u32 c_ = T; r7 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07E570u, 4); goto L_0C07E570; } goto L_0C07E4F2; }  /* 0C07E4EE bt/s */
L_0C07E4F2: BLKS(0x0C07E4F2u);
	r7 += 0x1u;  /* 0C07E4F2 add #imm,Rn */
	r8 = 0x60u;  /* 0C07E4F4 mov #imm,Rn */
	W8(r2, r7); UPD(0x0C07E4F8u, 4);  /* 0C07E4F6 mov.b Rm,@Rn */
	IF(0x0C07E4F8u); MACL = r10 * r8;  /* 0C07E4F8 mul.l Rm,Rn */
	r2 = 0xC3BC7CCu; UPD(0x0C07E4FCu, 3);  /* 0C07E4FA mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C07E4FC mov #imm,Rn */
	IF(0x0C07E4FEu); r8 = MACL;  /* 0C07E4FE sts macl,Rn */
	r8 += r2;  /* 0C07E500 add Rm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C07E504u, 4);  /* 0C07E502 mov.l Rm,@(disp,Rn) */
	r5 = 0x8u;  /* 0C07E504 mov #imm,Rn */
	r6 = R32(r8); UPD(0x0C07E508u, 2);  /* 0C07E506 mov.l @Rm,Rn */
	r4 = r10;  /* 0C07E508 mov Rm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C07E50Cu, 2);  /* 0C07E50A mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C07E50C mov #imm,Rn */
	r10 = 0xC07BF80u; UPD(0x0C07E510u, 2);  /* 0C07E50E mov.l @(disp,pc),Rn */
	r6 &= r1;  /* 0C07E510 and Rm,Rn */
	W32(r8, r6); UPD(0x0C07E514u, 2);  /* 0C07E512 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C07E516u, 1);  /* 0C07E514 mov.l Rm,@(disp,Rn) */
	IF(0x0C07E516u); { u32 t_ = r10; PR = 0x0C07E51Au; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C07BF80, 0x0C07BF80u, 0x0C07E51Au); }  /* 0C07E516 jsr @Rn */
L_0C07E51A: BLKS(0x0C07E51Au);
	r8 += 0x4Fu;  /* 0C07E51A add #imm,Rn */
	r0 = 0x3Cu;  /* 0C07E51C mov #imm,Rn */
	W8(r8, r0); UPD(0x0C07E520u, 3);  /* 0C07E51E mov.b Rm,@Rn */
	r7 = 0x14u;  /* 0C07E520 mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C07E522 add #imm,Rn */
	W8(r8, r7); UPD(0x0C07E526u, 3);  /* 0C07E524 mov.b Rm,@Rn */
	r6 = 0x4FFFFu; UPD(0x0C07E528u, 1);  /* 0C07E526 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07E528 add #imm,Rn */
	r2 = 0x808080u; UPD(0x0C07E52Cu, 2);  /* 0C07E52A mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r6); UPD(0x0C07E52Eu, 1);  /* 0C07E52C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r2); UPD(0x0C07E530u, 1);  /* 0C07E52E mov.l Rm,@(disp,Rn) */
	r5 = 0x180000u; UPD(0x0C07E532u, 1);  /* 0C07E530 mov.l @(disp,pc),Rn */
	r4 = R32(r9 + 0x10u); UPD(0x0C07E534u, 1);  /* 0C07E532 mov.l @(disp,Rm),Rn */
	r4 += r5;  /* 0C07E534 add Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C07E538u, 2);  /* 0C07E536 mov.l Rm,@(disp,Rn) */
	r3 = R32(r9 + 0x14u); UPD(0x0C07E53Au, 1);  /* 0C07E538 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C07E53A mov Rm,Rn */
	r1 = 0x100000u; UPD(0x0C07E53Eu, 2);  /* 0C07E53C mov.l @(disp,pc),Rn */
	r10 = 0xC07B620u; UPD(0x0C07E540u, 1);  /* 0C07E53E mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C07E540 add Rm,Rn */
	r9 = 0xC0C20A0u; UPD(0x0C07E544u, 2);  /* 0C07E542 mov.l @(disp,pc),Rn */
	IF(0x0C07E544u); { u32 t_ = r10; PR = 0x0C07E548u; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C07B620, 0x0C07B620u, 0x0C07E548u); }  /* 0C07E544 jsr @Rn */
L_0C07E548: BLKS(0x0C07E548u);
	r4 = r11;  /* 0C07E548 mov Rm,Rn */
	IF(0x0C07E54Au); { u32 t_ = r9; PR = 0x0C07E54Eu; r5 = 0x61u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C07E54Eu); }  /* 0C07E54A jsr @Rn */
L_0C07E54E: BLKS(0x0C07E54Eu);
	r5 = 0x9Au; UPD(0x0C07E550u, 1);  /* 0C07E54E mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C07E550 mov Rm,Rn */
	r1 = 0xC0C2020u; UPD(0x0C07E554u, 2);  /* 0C07E552 mov.l @(disp,pc),Rn */
L_0C07E554: BLKS(0x0C07E554u);
	r15 = r14;  /* 0C07E554 mov Rm,Rn */
	IF(0x0C07E556u); PR = R32(r15); r15 += 4; UPD(0x0C07E558u, 2);  /* 0C07E556 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E55Au, 1);  /* 0C07E558 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07E55Cu, 1);  /* 0C07E55A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07E55Eu, 1);  /* 0C07E55C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E560u, 1);  /* 0C07E55E mov.l @Rm+,Rn */
	IF(0x0C07E560u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07D2E0u: TAIL(blk_f_0C07D2E0); case 0x0C0C2020u: TAIL(blk_f_0C0C2020); default: JUMPD(tv_); } }  /* 0C07E560 jmp @Rn */
L_0C07E570: BLKS(0x0C07E570u);
	r3 += 0x2u;  /* 0C07E570 add #imm,Rn */
	r9 = 0x28u;  /* 0C07E572 mov #imm,Rn */
	r1 = 0xC07D2E0u; UPD(0x0C07E576u, 3);  /* 0C07E574 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07E576 mov Rm,Rn */
	W8(r3, r9); UPD(0x0C07E57Au, 2);  /* 0C07E578 mov.b Rm,@Rn */
	{ r5 = r10; /* slot mov Rm,Rn */ UPD(0x0C07E554u, 3); goto L_0C07E554; }  /* 0C07E57A bra */
}

void blk_f_0C07E5C0(sh3_t *c)
{
	LOCALS;
L_0C07E5C0: BLKS(0x0C07E5C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E5C2u, 1);  /* 0C07E5C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E5C4u, 1);  /* 0C07E5C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07E5C6u, 1);  /* 0C07E5C4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07E5C8u, 1);  /* 0C07E5C6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07E5C8 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E5CCu, 2);  /* 0C07E5CA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C07E5CC exts.w Rm,Rn */
	r8 = 0xC071C90u; UPD(0x0C07E5D0u, 2);  /* 0C07E5CE mov.l @(disp,pc),Rn */
	IF(0x0C07E5D0u); r15 -= 4; W32(r15, PR); UPD(0x0C07E5D2u, 1);  /* 0C07E5D0 sts.l pr,@-Rn */
	r4 = 0x40000u; UPD(0x0C07E5D4u, 1);  /* 0C07E5D2 mov.l @(disp,pc),Rn */
	IF(0x0C07E5D4u); { u32 t_ = r8; PR = 0x0C07E5D8u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C07E5D8u); }  /* 0C07E5D4 jsr @Rn */
L_0C07E5D8: BLKS(0x0C07E5D8u);
	r2 = 0x2A0u; UPD(0x0C07E5DAu, 1);  /* 0C07E5D8 mov.w @(disp,pc),Rn */
	IF(0x0C07E5DAu); MACL = r10 * r2;  /* 0C07E5DA mul.l Rm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C07E5DEu, 3);  /* 0C07E5DC mov.l @(disp,pc),Rn */
	IF(0x0C07E5DEu); r9 = MACL;  /* 0C07E5DE sts macl,Rn */
	r3 = 0x25Cu; UPD(0x0C07E5E2u, 2);  /* 0C07E5E0 mov.w @(disp,pc),Rn */
	r9 += r0;  /* 0C07E5E2 add Rm,Rn */
	r3 += r9;  /* 0C07E5E4 add Rm,Rn */
	r7 = r3;  /* 0C07E5E6 mov Rm,Rn */
	r7 += 0x2u;  /* 0C07E5E8 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C07E5ECu, 5);  /* 0C07E5EA mov.b @Rm,Rn */
	r0 = 0x26u;  /* 0C07E5EC mov #imm,Rn */
	T = r2 > r0;  /* 0C07E5EE cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C07E690u, 5); goto L_0C07E690; }  /* 0C07E5F0 bf */
L_0C07E5F2: BLKS(0x0C07E5F2u);
	r2 = r3;  /* 0C07E5F2 mov Rm,Rn */
	r2 += 0x1u;  /* 0C07E5F4 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C07E5F8u, 3);  /* 0C07E5F6 mov.b @Rm,Rn */
	T = r0 == 0x4u;  /* 0C07E5F8 cmp/eq #imm,r0 */
	{ u32 c_ = T; r6 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07E680u, 4); goto L_0C07E680; } goto L_0C07E5FE; }  /* 0C07E5FA bt/s */
L_0C07E5FE: BLKS(0x0C07E5FEu);
	r6 += 0x1u;  /* 0C07E5FE add #imm,Rn */
	r8 = 0x60u;  /* 0C07E600 mov #imm,Rn */
	W8(r2, r6); UPD(0x0C07E604u, 4);  /* 0C07E602 mov.b Rm,@Rn */
	IF(0x0C07E604u); MACL = r11 * r8;  /* 0C07E604 mul.l Rm,Rn */
	r5 = 0x0u;  /* 0C07E606 mov #imm,Rn */
	r2 = 0xC3BC7CCu; UPD(0x0C07E60Au, 4);  /* 0C07E608 mov.l @(disp,pc),Rn */
	IF(0x0C07E60Au); r8 = MACL;  /* 0C07E60A sts macl,Rn */
	W8(r7, r5); UPD(0x0C07E60Eu, 2);  /* 0C07E60C mov.b Rm,@Rn */
	r8 += r2;  /* 0C07E60E add Rm,Rn */
	r4 = R32(r8); UPD(0x0C07E612u, 2);  /* 0C07E610 mov.l @Rm,Rn */
	r3 = 0x8u;  /* 0C07E612 mov #imm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C07E616u, 2);  /* 0C07E614 mov.l @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C07E616 mov #imm,Rn */
	r4 &= r1;  /* 0C07E618 and Rm,Rn */
	W32(r8, r4); UPD(0x0C07E61Cu, 3);  /* 0C07E61A mov.l Rm,@Rn */
	r7 = 0x0u;  /* 0C07E61C mov #imm,Rn */
	r4 = r11;  /* 0C07E61E mov Rm,Rn */
	r11 = 0xC07BF80u; UPD(0x0C07E622u, 3);  /* 0C07E620 mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C07E624u, 1);  /* 0C07E622 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r0); UPD(0x0C07E626u, 1);  /* 0C07E624 mov.l Rm,@(disp,Rn) */
	IF(0x0C07E626u); { u32 t_ = r11; PR = 0x0C07E62Au; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C07BF80, 0x0C07BF80u, 0x0C07E62Au); }  /* 0C07E626 jsr @Rn */
L_0C07E62A: BLKS(0x0C07E62Au);
	r6 = 0x3Cu;  /* 0C07E62A mov #imm,Rn */
	r8 += 0x4Fu;  /* 0C07E62C add #imm,Rn */
	W8(r8, r6); UPD(0x0C07E630u, 3);  /* 0C07E62E mov.b Rm,@Rn */
	r5 = 0x14u;  /* 0C07E630 mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C07E632 add #imm,Rn */
	W8(r8, r5); UPD(0x0C07E636u, 3);  /* 0C07E634 mov.b Rm,@Rn */
	r2 = 0x808080u; UPD(0x0C07E638u, 1);  /* 0C07E636 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07E638 add #imm,Rn */
	r4 = 0x4FFFFu; UPD(0x0C07E63Cu, 2);  /* 0C07E63A mov.l @(disp,pc),Rn */
	W32(r8 + 0x3Cu, r2); UPD(0x0C07E63Eu, 1);  /* 0C07E63C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r4); UPD(0x0C07E640u, 1);  /* 0C07E63E mov.l Rm,@(disp,Rn) */
	r3 = 0x180000u; UPD(0x0C07E642u, 1);  /* 0C07E640 mov.l @(disp,pc),Rn */
	r0 = R32(r9 + 0x10u); UPD(0x0C07E644u, 1);  /* 0C07E642 mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C07E644 add Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C07E648u, 2);  /* 0C07E646 mov.l Rm,@(disp,Rn) */
	r1 = 0x100000u; UPD(0x0C07E64Au, 1);  /* 0C07E648 mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x14u); UPD(0x0C07E64Cu, 1);  /* 0C07E64A mov.l @(disp,Rm),Rn */
	r7 += r1;  /* 0C07E64C add Rm,Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C07E650u, 2);  /* 0C07E64E mov.l Rm,@(disp,Rn) */
	r8 = 0xC07B620u; UPD(0x0C07E652u, 1);  /* 0C07E650 mov.l @(disp,pc),Rn */
	r11 = 0xC0C20A0u; UPD(0x0C07E654u, 1);  /* 0C07E652 mov.l @(disp,pc),Rn */
	IF(0x0C07E654u); { u32 t_ = r8; PR = 0x0C07E658u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07B620, 0x0C07B620u, 0x0C07E658u); }  /* 0C07E654 jsr @Rn */
L_0C07E658: BLKS(0x0C07E658u);
	r4 = r10;  /* 0C07E658 mov Rm,Rn */
	IF(0x0C07E65Au); { u32 t_ = r11; PR = 0x0C07E65Eu; r5 = 0x61u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C07E65Eu); }  /* 0C07E65A jsr @Rn */
L_0C07E65E: BLKS(0x0C07E65Eu);
	r5 = 0x9Au; UPD(0x0C07E660u, 1);  /* 0C07E65E mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C07E660 mov Rm,Rn */
	r1 = 0xC0C2020u; UPD(0x0C07E664u, 2);  /* 0C07E662 mov.l @(disp,pc),Rn */
L_0C07E664: BLKS(0x0C07E664u);
	r15 = r14;  /* 0C07E664 mov Rm,Rn */
	IF(0x0C07E666u); PR = R32(r15); r15 += 4; UPD(0x0C07E668u, 2);  /* 0C07E666 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E66Au, 1);  /* 0C07E668 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07E66Cu, 1);  /* 0C07E66A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07E66Eu, 1);  /* 0C07E66C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E670u, 1);  /* 0C07E66E mov.l @Rm+,Rn */
	IF(0x0C07E670u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07D2E0u: TAIL(blk_f_0C07D2E0); case 0x0C0C2020u: TAIL(blk_f_0C0C2020); default: JUMPD(tv_); } }  /* 0C07E670 jmp @Rn */
L_0C07E680: BLKS(0x0C07E680u);
	r9 = 0x28u;  /* 0C07E680 mov #imm,Rn */
	r1 = 0xC07D2E0u; UPD(0x0C07E684u, 2);  /* 0C07E682 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07E684 mov Rm,Rn */
	W8(r7, r9); UPD(0x0C07E688u, 2);  /* 0C07E686 mov.b Rm,@Rn */
	{ r5 = r11; /* slot mov Rm,Rn */ UPD(0x0C07E664u, 3); goto L_0C07E664; }  /* 0C07E688 bra */
L_0C07E690: BLKS(0x0C07E690u);
	r9 = 0xC0C20A0u; UPD(0x0C07E692u, 1);  /* 0C07E690 mov.l @(disp,pc),Rn */
	r6 = r2;  /* 0C07E692 mov Rm,Rn */
	r6 += 0x1u;  /* 0C07E694 add #imm,Rn */
	r4 = r10;  /* 0C07E696 mov Rm,Rn */
	W8(r7, r6); UPD(0x0C07E69Au, 4);  /* 0C07E698 mov.b Rm,@Rn */
	IF(0x0C07E69Au); { u32 t_ = r9; PR = 0x0C07E69Eu; r5 = 0x60u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C07E69Eu); }  /* 0C07E69A jsr @Rn */
L_0C07E69E: BLKS(0x0C07E69Eu);
	r5 = 0x60u;  /* 0C07E69E mov #imm,Rn */
	IF(0x0C07E6A0u); MACL = r11 * r5;  /* 0C07E6A0 mul.l Rm,Rn */
	r3 = 0xC3BC7CCu; UPD(0x0C07E6A4u, 4);  /* 0C07E6A2 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C07E6A4 mov #imm,Rn */
	IF(0x0C07E6A6u); r0 = MACL;  /* 0C07E6A6 sts macl,Rn */
	IF(0x0C07E6A8u); W32(r0 + r3, r4); UPD(0x0C07E6AAu, 3);  /* 0C07E6A8 mov.l Rm,@(r0,Rn) */
	r15 = r14;  /* 0C07E6AA mov Rm,Rn */
	IF(0x0C07E6ACu); PR = R32(r15); r15 += 4; UPD(0x0C07E6AEu, 2);  /* 0C07E6AC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E6B0u, 1);  /* 0C07E6AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07E6B2u, 1);  /* 0C07E6B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07E6B4u, 1);  /* 0C07E6B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E6B6u, 1);  /* 0C07E6B4 mov.l @Rm+,Rn */
	IF(0x0C07E6B6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07E6B6 rts */
}

void blk_f_0C07E700(sh3_t *c)
{
	LOCALS;
L_0C07E700: BLKS(0x0C07E700u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E702u, 1);  /* 0C07E700 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E704u, 1);  /* 0C07E702 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07E706u, 1);  /* 0C07E704 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07E708u, 1);  /* 0C07E706 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07E70Au, 1);  /* 0C07E708 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07E70Cu, 1);  /* 0C07E70A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E70Eu, 1);  /* 0C07E70C mov.l Rm,@-Rn */
	r4 = 0xC2ABAA4u; UPD(0x0C07E710u, 1);  /* 0C07E70E mov.l @(disp,pc),Rn */
	IF(0x0C07E710u); r15 -= 4; W32(r15, PR); UPD(0x0C07E712u, 1);  /* 0C07E710 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C07E714u, 1);  /* 0C07E712 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C07E714 add #imm,Rn */
	r8 = 0xC29D724u; UPD(0x0C07E718u, 2);  /* 0C07E716 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07E718 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C07E71Cu, 2);  /* 0C07E71A mov.w @Rm+,Rn */
	r7 = R32(r8); UPD(0x0C07E71Eu, 1);  /* 0C07E71C mov.l @Rm,Rn */
	IF(0x0C07E71Eu); r0 <<= 2;  /* 0C07E71E shll2 Rn */
	IF(0x0C07E720u); r6 = R32(r0 + r7); UPD(0x0C07E722u, 2);  /* 0C07E720 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r2 = v_; } UPD(0x0C07E724u, 1);  /* 0C07E722 mov.w @Rm+,Rn */
	r5 = 0xC297460u; UPD(0x0C07E726u, 1);  /* 0C07E724 mov.l @(disp,pc),Rn */
	r9 = 0xC2460ACu; UPD(0x0C07E728u, 1);  /* 0C07E726 mov.l @(disp,pc),Rn */
	r8 = 0xC069510u; UPD(0x0C07E72Au, 1);  /* 0C07E728 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C07E72Cu, 1);  /* 0C07E72A mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C07E72Eu, 1);  /* 0C07E72C mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C07E730u, 1);  /* 0C07E72E mov.w @Rm,Rn */
	r11 = 0xC2B03A2u; UPD(0x0C07E732u, 1);  /* 0C07E730 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C07E732 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C07E736u, 2);  /* 0C07E734 mov.l @(disp,pc),Rn */
	IF(0x0C07E736u); { u32 t_ = r8; PR = 0x0C07E73Au; W16(r11, r2); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C07E73Au); }  /* 0C07E736 jsr @Rn */
L_0C07E73A: BLKS(0x0C07E73Au);
	T = (r0 & r0) == 0;  /* 0C07E73A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07E760u, 4); goto L_0C07E760; } UPD(0x0C07E740u, 1); goto L_0C07E740; }  /* 0C07E73C bf/s */
L_0C07E740: BLKS(0x0C07E740u);
	r14 += 0xCu;  /* 0C07E740 add #imm,Rn */
	UPD(0x0C07E742u, 1);
L_0C07E742: BLKS(0x0C07E742u);
	r15 = r14;  /* 0C07E742 mov Rm,Rn */
	IF(0x0C07E744u); PR = R32(r15); r15 += 4; UPD(0x0C07E746u, 2);  /* 0C07E744 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E748u, 1);  /* 0C07E746 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07E74Au, 1);  /* 0C07E748 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07E74Cu, 1);  /* 0C07E74A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07E74Eu, 1);  /* 0C07E74C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07E750u, 1);  /* 0C07E74E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E752u, 1);  /* 0C07E750 mov.l @Rm+,Rn */
	IF(0x0C07E752u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07E752 rts */
L_0C07E760: BLKS(0x0C07E760u);
	r10 = 0xC071740u; UPD(0x0C07E762u, 1);  /* 0C07E760 mov.l @(disp,pc),Rn */
	IF(0x0C07E762u); { u32 t_ = r10; PR = 0x0C07E766u; r4 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C07E766u); }  /* 0C07E762 jsr @Rn */
L_0C07E766: BLKS(0x0C07E766u);
	T = (r0 & r0) == 0;  /* 0C07E766 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07E740u, 4); goto L_0C07E740; } goto L_0C07E76C; }  /* 0C07E768 bt/s */
L_0C07E76C: BLKS(0x0C07E76Cu);
	r12 = 0xC28EDFCu; UPD(0x0C07E76Eu, 2);  /* 0C07E76C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C07E770u, 1);  /* 0C07E76E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C07E772u, 1);  /* 0C07E770 mov.w @Rm+,Rn */
	IF(0x0C07E772u); MACL = r10 * r8;  /* 0C07E772 mul.l Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C07E776u, 3);  /* 0C07E774 mov.w @Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C07E778u, 1);  /* 0C07E776 mov.l @(disp,pc),Rn */
	IF(0x0C07E778u); r8 = MACL;  /* 0C07E778 sts macl,Rn */
	r8 += r4;  /* 0C07E77A add Rm,Rn */
	r0 = r3 & 0xFFFF;  /* 0C07E77C extu.w Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C07E780u, 4);  /* 0C07E77E mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C07E780 mov Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r11); UPD(0x0C07E784u, 2);  /* 0C07E782 mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C07E786u, 1);  /* 0C07E784 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C07E786 mov #imm,Rn */
	r7 = 0xC0A8A30u; UPD(0x0C07E78Au, 2);  /* 0C07E788 mov.l @(disp,pc),Rn */
	IF(0x0C07E78Au); W16(r0 + r8, r13); UPD(0x0C07E78Cu, 1);  /* 0C07E78A mov.w Rm,@(r0,Rn) */
	r6 = 0xD3000104u; UPD(0x0C07E78Eu, 1);  /* 0C07E78C mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C07E78E add #imm,Rn */
	W32(r8, r6); UPD(0x0C07E792u, 2);  /* 0C07E790 mov.l Rm,@Rn */
	IF(0x0C07E792u); W16(r0 + r8, r13); UPD(0x0C07E794u, 1);  /* 0C07E792 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0xCu, r11); UPD(0x0C07E796u, 1);  /* 0C07E794 mov.l Rm,@(disp,Rn) */
	IF(0x0C07E796u); { u32 t_ = r7; PR = 0x0C07E79Au; W32(r8 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C07E79Au); }  /* 0C07E796 jsr @Rn */
L_0C07E79A: BLKS(0x0C07E79Au);
	r9 = 0xC0722E0u; UPD(0x0C07E79Cu, 1);  /* 0C07E79A mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07E79C mov Rm,Rn */
	r5 = 0x1600000u; UPD(0x0C07E7A0u, 2);  /* 0C07E79E mov.l @(disp,pc),Rn */
	IF(0x0C07E7A0u); { u32 t_ = r9; PR = 0x0C07E7A4u; W32(r8 + 0x24u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C07E7A4u); }  /* 0C07E7A0 jsr @Rn */
L_0C07E7A4: BLKS(0x0C07E7A4u);
	r2 = 0xC0A9AE0u; UPD(0x0C07E7A6u, 1);  /* 0C07E7A4 mov.l @(disp,pc),Rn */
	r9 = 0x8Cu; UPD(0x0C07E7A8u, 1);  /* 0C07E7A6 mov.w @(disp,pc),Rn */
	IF(0x0C07E7A8u); { u32 t_ = r2; PR = 0x0C07E7ACu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C07E7ACu); }  /* 0C07E7A8 jsr @Rn */
L_0C07E7AC: BLKS(0x0C07E7ACu);
	r0 = 0xADu; UPD(0x0C07E7AEu, 1);  /* 0C07E7AC mov.w @(disp,pc),Rn */
	r4 = 0x13u;  /* 0C07E7AE mov #imm,Rn */
	r3 = 0xA8u; UPD(0x0C07E7B2u, 2);  /* 0C07E7B0 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C07E7B2 add Rm,Rn */
	IF(0x0C07E7B4u); W8(r0 + r8, r4); UPD(0x0C07E7B6u, 2);  /* 0C07E7B4 mov.b Rm,@(r0,Rn) */
	r3 += r8;  /* 0C07E7B6 add Rm,Rn */
	r3 += 0x1u;  /* 0C07E7B8 add #imm,Rn */
	r0 = 0xC0A9D30u; UPD(0x0C07E7BCu, 3);  /* 0C07E7BA mov.l @(disp,pc),Rn */
	W8(r3, r4); UPD(0x0C07E7BEu, 1);  /* 0C07E7BC mov.b Rm,@Rn */
	r6 = 0xC297460u; UPD(0x0C07E7C0u, 1);  /* 0C07E7BE mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07E7C0 mov Rm,Rn */
	r5 = R32(r6); UPD(0x0C07E7C4u, 2);  /* 0C07E7C2 mov.l @Rm,Rn */
	IF(0x0C07E7C4u); { u32 t_ = r0; PR = 0x0C07E7C8u; W32(r14 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C07E7C8u); }  /* 0C07E7C4 jsr @Rn */
L_0C07E7C8: BLKS(0x0C07E7C8u);
	r13 = 0x94u; UPD(0x0C07E7CAu, 1);  /* 0C07E7C8 mov.w @(disp,pc),Rn */
	r0 = 0x90u; UPD(0x0C07E7CCu, 1);  /* 0C07E7CA mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C07E7CC add Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C07E7D0u, 2);  /* 0C07E7CE mov.l @(disp,Rm),Rn */
	W32(r13, r11); UPD(0x0C07E7D2u, 1);  /* 0C07E7D0 mov.l Rm,@Rn */
	IF(0x0C07E7D2u); W32(r0 + r8, r11); UPD(0x0C07E7D4u, 1);  /* 0C07E7D2 mov.l Rm,@(r0,Rn) */
	r13 = r8;  /* 0C07E7D4 mov Rm,Rn */
	W32(r9, r11); UPD(0x0C07E7D8u, 2);  /* 0C07E7D6 mov.l Rm,@Rn */
	W32(r8 + 0x30u, r11); UPD(0x0C07E7DAu, 1);  /* 0C07E7D8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r11); UPD(0x0C07E7DCu, 1);  /* 0C07E7DA mov.l Rm,@(disp,Rn) */
	W32(r14, r11); UPD(0x0C07E7DEu, 1);  /* 0C07E7DC mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C07E7E0u, 1);  /* 0C07E7DE mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C07E7E0 mov #imm,Rn */
	IF(0x0C07E7E2u); ;  /* 0C07E7E2 nop */
	UPD(0x0C07E7E4u, 2);
L_0C07E7E4: BLKS(0x0C07E7E4u);
	r9 = 0xC18B83Cu; UPD(0x0C07E7E6u, 1);  /* 0C07E7E4 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C07E7E8u, 1);  /* 0C07E7E6 mov.w @Rm+,Rn */
	r9 += r11;  /* 0C07E7E8 add Rm,Rn */
	r8 = 0xB4u; UPD(0x0C07E7ECu, 2);  /* 0C07E7EA mov.w @(disp,pc),Rn */
	r9 += 0x4u;  /* 0C07E7EC add #imm,Rn */
	IF(0x0C07E7EEu); MACL = r10 * r8;  /* 0C07E7EE mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C07E7F2u, 4);  /* 0C07E7F0 mov.w @Rm,Rn */
	r11 += 0x14u;  /* 0C07E7F2 add #imm,Rn */
	r1 = 0xC286578u; UPD(0x0C07E7F6u, 2);  /* 0C07E7F4 mov.l @(disp,pc),Rn */
	IF(0x0C07E7F6u); r8 = MACL;  /* 0C07E7F6 sts macl,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C07E7FAu, 2);  /* 0C07E7F8 mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C07E7FA add Rm,Rn */
	IF(0x0C07E7FCu); r7 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C07E7FEu, 2);  /* 0C07E7FC mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C07E7FE add Rm,Rn */
	r8 += 0x7Cu;  /* 0C07E800 add #imm,Rn */
	W16(r8, r7); UPD(0x0C07E804u, 3);  /* 0C07E802 mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C07E804 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C07E808u, 2);  /* 0C07E806 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C07E808 add #imm,Rn */
	W16(r8, r5); UPD(0x0C07E80Cu, 2);  /* 0C07E80A mov.w Rm,@Rn */
	r7 = 0x0u;  /* 0C07E80C mov #imm,Rn */
	r3 = 0xC2460ACu; UPD(0x0C07E810u, 2);  /* 0C07E80E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C07E810 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C07E814u, 2);  /* 0C07E812 mov.w @Rm,Rn */
	r2 = R32(r9); UPD(0x0C07E816u, 1);  /* 0C07E814 mov.l @Rm,Rn */
	r6 = r4 & 0xFFFF;  /* 0C07E816 extu.w Rm,Rn */
	W32(r8, r2); UPD(0x0C07E81Au, 2);  /* 0C07E818 mov.l Rm,@Rn */
	r4 = r10;  /* 0C07E81A mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C07E81Eu, 2);  /* 0C07E81C mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A8A30u; UPD(0x0C07E820u, 1);  /* 0C07E81E mov.l @(disp,pc),Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C07E822u, 1);  /* 0C07E820 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C07E824u, 1);  /* 0C07E822 mov.l Rm,@(disp,Rn) */
	IF(0x0C07E824u); { u32 t_ = r5; PR = 0x0C07E828u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C07E828u); }  /* 0C07E824 jsr @Rn */
L_0C07E828: BLKS(0x0C07E828u);
	r2 = 0xC2B03A2u; UPD(0x0C07E82Au, 1);  /* 0C07E828 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C07E82A mov Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C07E82Eu, 2);  /* 0C07E82C mov.w @Rm,Rn */
	IF(0x0C07E82Eu); r3 >>= 2;  /* 0C07E82E shlr2 Rn */
	r4 = 0x86u; UPD(0x0C07E832u, 2);  /* 0C07E830 mov.w @(disp,pc),Rn */
	IF(0x0C07E832u); r3 >>= 2;  /* 0C07E832 shlr2 Rn */
	IF(0x0C07E834u); r3 >>= 2;  /* 0C07E834 shlr2 Rn */
	IF(0x0C07E836u); W16(r0 + r4, r3); UPD(0x0C07E838u, 3);  /* 0C07E836 mov.w Rm,@(r0,Rn) */
	r6 = R32(r13 + 0x24u); UPD(0x0C07E83Au, 1);  /* 0C07E838 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C07E83A mov Rm,Rn */
	r0 = R32(r13 + 0x28u); UPD(0x0C07E83Eu, 2);  /* 0C07E83C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C07E840u, 1);  /* 0C07E83E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C07E842u, 1);  /* 0C07E840 mov.l Rm,@(disp,Rn) */
	r7 = R32(r9 + 0xCu); UPD(0x0C07E844u, 1);  /* 0C07E842 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C07E846u, 1);  /* 0C07E844 mov.l Rm,@(disp,Rn) */
	r5 = R32(r9 + 0x10u); UPD(0x0C07E848u, 1);  /* 0C07E846 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A9AE0u; UPD(0x0C07E84Au, 1);  /* 0C07E848 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r5); UPD(0x0C07E84Cu, 1);  /* 0C07E84A mov.l Rm,@(disp,Rn) */
	r2 = 0xFFFA0000u; UPD(0x0C07E84Eu, 1);  /* 0C07E84C mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C07E84E add #imm,Rn */
	IF(0x0C07E850u); { u32 t_ = r10; PR = 0x0C07E854u; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C07E854u); }  /* 0C07E850 jsr @Rn */
L_0C07E854: BLKS(0x0C07E854u);
	r0 = 0xB0u; UPD(0x0C07E856u, 1);  /* 0C07E854 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C07E856 add #imm,Rn */
	IF(0x0C07E858u); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C07E85Au, 2);  /* 0C07E858 mov.b @(r0,Rm),Rn */
	r10 = 0x12u;  /* 0C07E85A mov #imm,Rn */
	IF(0x0C07E85Cu); W8(r0 + r8, r3); UPD(0x0C07E85Eu, 2);  /* 0C07E85C mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C07E860u, 1);  /* 0C07E85E mov.w @(disp,pc),Rn */
	r7 = 0xACu; UPD(0x0C07E862u, 1);  /* 0C07E860 mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C07E862 add Rm,Rn */
	r8 += r7;  /* 0C07E864 add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C07E868u, 3);  /* 0C07E866 mov.l @(disp,Rm),Rn */
	r7 += r13;  /* 0C07E868 add Rm,Rn */
	r7 += 0x1u;  /* 0C07E86A add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C07E86Eu, 3);  /* 0C07E86C mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C07E86E add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C07E872u, 2);  /* 0C07E870 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C07E872 add #imm,Rn */
	W8(r0, r6); UPD(0x0C07E876u, 2);  /* 0C07E874 mov.b Rm,@Rn */
	W8(r8, r5); UPD(0x0C07E878u, 1);  /* 0C07E876 mov.b Rm,@Rn */
	r9 = R32(r14); UPD(0x0C07E87Au, 1);  /* 0C07E878 mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C07E87A add #imm,Rn */
	r2 = (u32)(s32)(s16)r9;  /* 0C07E87C exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C07E880u, 3);  /* 0C07E87E mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C07E882u, 1);  /* 0C07E880 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r10;  /* 0C07E882 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07E7E4u, 4); goto L_0C07E7E4; } goto L_0C07E888; }  /* 0C07E884 bf/s */
L_0C07E888: BLKS(0x0C07E888u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07E742u, 4); goto L_0C07E742; }  /* 0C07E888 bra */
}

void blk_f_0C07E8F0(sh3_t *c)
{
	LOCALS;
L_0C07E8F0: BLKS(0x0C07E8F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8F2u, 1);  /* 0C07E8F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8F4u, 1);  /* 0C07E8F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8F6u, 1);  /* 0C07E8F4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8F8u, 1);  /* 0C07E8F6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07E8F8 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8FCu, 2);  /* 0C07E8FA mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C07E8FEu, 1);  /* 0C07E8FC mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07E900u, 1);  /* 0C07E8FE mov.l Rm,@-Rn */
	IF(0x0C07E900u); MACL = r10 * r3;  /* 0C07E900 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E904u, 3);  /* 0C07E902 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C07E906u, 1);  /* 0C07E904 mov.l @(disp,pc),Rn */
	IF(0x0C07E906u); r2 = MACL;  /* 0C07E906 sts macl,Rn */
	IF(0x0C07E908u); r15 -= 4; W32(r15, PR); UPD(0x0C07E90Au, 2);  /* 0C07E908 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07E90A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07E90Eu, 2);  /* 0C07E90C mov.l @(disp,Rm),Rn */
	r0 = 0xBu;  /* 0C07E90E mov #imm,Rn */
	T = r2 > r0;  /* 0C07E910 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07E91Au, 5); goto L_0C07E91A; } goto L_0C07E916; }  /* 0C07E912 bf/s */
L_0C07E916: BLKS(0x0C07E916u);
	{ IF(0x0C07E918u); ; /* slot nop */ UPD(0x0C07EA04u, 4); goto L_0C07EA04; }  /* 0C07E916 bra */
L_0C07E91A: BLKS(0x0C07E91Au);
	r0 = 0xC07E92Cu;  /* 0C07E91A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07E91C add Rm,Rn */
	IF(0x0C07E91Eu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07E920u, 3);  /* 0C07E91E mov.w @(r0,Rm),Rn */
	IF(0x0C07E920u); { u32 tv_ = (r4 + 0x0C07E924u); u32 t_ = PHYS(tv_); IF(0x0C07E922u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C07E920 braf Rn */
L_0C07EA04: BLKS(0x0C07EA04u);
	r15 = r14;  /* 0C07EA04 mov Rm,Rn */
	IF(0x0C07EA06u); PR = R32(r15); r15 += 4; UPD(0x0C07EA08u, 2);  /* 0C07EA06 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07EA0Au, 1);  /* 0C07EA08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07EA0Cu, 1);  /* 0C07EA0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07EA0Eu, 1);  /* 0C07EA0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07EA10u, 1);  /* 0C07EA0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07EA12u, 1);  /* 0C07EA10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07EA14u, 1);  /* 0C07EA12 mov.l @Rm+,Rn */
	IF(0x0C07EA14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07EA14 rts */
}

void blk_f_0C07E92C(sh3_t *c)
{
	LOCALS;
L_0C07E92C: BLKS(0x0C07E92Cu);
	IF(0x0C07E92Cu); r0 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07E92Eu, 1);  /* 0C07E92C mov.b @(r0,Rm),Rn */
	IF(0x0C07E92Eu); r0 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C07E930u, 1);  /* 0C07E92E mov.b @(r0,Rm),Rn */
	IF(0x0C07E930u); r0 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C07E932u, 1);  /* 0C07E930 mov.b @(r0,Rm),Rn */
	IF(0x0C07E932u); r1 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07E934u, 1);  /* 0C07E932 mov.b @(r0,Rm),Rn */
	IF(0x0C07E934u); r1 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C07E936u, 1);  /* 0C07E934 mov.b @(r0,Rm),Rn */
	IF(0x0C07E936u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07E938u, 1);  /* 0C07E936 mov.b @(r0,Rm),Rn */
	IF(0x0C07E938u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07E93Au, 1);  /* 0C07E938 mov.b @(r0,Rm),Rn */
	IF(0x0C07E93Au); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07E93Cu, 1);  /* 0C07E93A mov.b @(r0,Rm),Rn */
	IF(0x0C07E93Cu); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C07E93Eu, 1);  /* 0C07E93C mov.b @(r0,Rm),Rn */
	IF(0x0C07E93Eu); r2 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07E940u, 1);  /* 0C07E93E mov.b @(r0,Rm),Rn */
	IF(0x0C07E940u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07E942u, 1);  /* 0C07E940 mov.b @(r0,Rm),Rn */
	IF(0x0C07E942u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07E944u, 1);  /* 0C07E942 mov.b @(r0,Rm),Rn */
	IF(0x0C07E944u); ;  /* 0C07E944 nop */
	IF(0x0C07E946u); ;  /* 0C07E946 nop */
	IF(0x0C07E948u); ;  /* 0C07E948 nop */
	IF(0x0C07E94Au); ;  /* 0C07E94A nop */
	IF(0x0C07E94Cu); ;  /* 0C07E94C nop */
	IF(0x0C07E94Eu); ;  /* 0C07E94E nop */
	r8 = 0xB4u; UPD(0x0C07E952u, 7);  /* 0C07E950 mov.w @(disp,pc),Rn */
	IF(0x0C07E952u); MACL = r10 * r8;  /* 0C07E952 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C07E956u, 3);  /* 0C07E954 mov.l @(disp,pc),Rn */
	IF(0x0C07E956u); r2 = MACL;  /* 0C07E956 sts macl,Rn */
	r2 += r7;  /* 0C07E958 add Rm,Rn */
	r6 = 0xA5u; UPD(0x0C07E95Cu, 3);  /* 0C07E95A mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C07E95C mov Rm,Rn */
	IF(0x0C07E95Eu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07E960u, 2);  /* 0C07E95E mov.b @(r0,Rm),Rn */
	r0 = r5;  /* 0C07E960 mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C07E962 cmp/eq #imm,r0 */
	{ u32 c_ = T; r11 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07E980u, 5); goto L_0C07E980; } UPD(0x0C07E968u, 1); goto L_0C07E968; }  /* 0C07E964 bt/s */
L_0C07E968: BLKS(0x0C07E968u);
	r0 = 0xC0A9A70u; UPD(0x0C07E96Au, 1);  /* 0C07E968 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07E96A mov Rm,Rn */
	r15 = r14;  /* 0C07E96C mov Rm,Rn */
	IF(0x0C07E96Eu); PR = R32(r15); r15 += 4; UPD(0x0C07E970u, 3);  /* 0C07E96E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E972u, 1);  /* 0C07E970 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07E974u, 1);  /* 0C07E972 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07E976u, 1);  /* 0C07E974 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07E978u, 1);  /* 0C07E976 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07E97Au, 1);  /* 0C07E978 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E97Cu, 1);  /* 0C07E97A mov.l @Rm+,Rn */
	IF(0x0C07E97Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9A70u: TAIL(blk_f_0C0A9A70); default: JUMPD(tv_); } }  /* 0C07E97C jmp @Rn */
L_0C07E980: BLKS(0x0C07E980u);
	r5 = R32(r2 + 0x24u); UPD(0x0C07E982u, 1);  /* 0C07E980 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07E982 add #imm,Rn */
	r12 = 0x20000u; UPD(0x0C07E986u, 2);  /* 0C07E984 mov.l @(disp,pc),Rn */
	r9 = 0xC07CD80u; UPD(0x0C07E988u, 1);  /* 0C07E986 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C07E988 mov #imm,Rn */
	W32(r15, r12); UPD(0x0C07E98Cu, 2);  /* 0C07E98A mov.l Rm,@Rn */
	r7 = 0x14u;  /* 0C07E98C mov #imm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C07E990u, 2);  /* 0C07E98E mov.l Rm,@(disp,Rn) */
	r13 = 0x200000u; UPD(0x0C07E992u, 1);  /* 0C07E990 mov.l @(disp,pc),Rn */
	r6 = R32(r2 + 0x28u); UPD(0x0C07E994u, 1);  /* 0C07E992 mov.l @(disp,Rm),Rn */
	IF(0x0C07E994u); { u32 t_ = r9; PR = 0x0C07E998u; r5 += r13; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C07E998u); }  /* 0C07E994 jsr @Rn */
L_0C07E998: BLKS(0x0C07E998u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C07E968u, 3); goto L_0C07E968; }  /* 0C07E998 bra */
}

void blk_f_0C07EC30(sh3_t *c)
{
	LOCALS;
	goto L_0C07EC30;
L_0C07E8F0: BLKS(0x0C07E8F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8F2u, 1);  /* 0C07E8F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8F4u, 1);  /* 0C07E8F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8F6u, 1);  /* 0C07E8F4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8F8u, 1);  /* 0C07E8F6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07E8F8 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8FCu, 2);  /* 0C07E8FA mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C07E8FEu, 1);  /* 0C07E8FC mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07E900u, 1);  /* 0C07E8FE mov.l Rm,@-Rn */
	IF(0x0C07E900u); MACL = r10 * r3;  /* 0C07E900 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E904u, 3);  /* 0C07E902 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C07E906u, 1);  /* 0C07E904 mov.l @(disp,pc),Rn */
	IF(0x0C07E906u); r2 = MACL;  /* 0C07E906 sts macl,Rn */
	IF(0x0C07E908u); r15 -= 4; W32(r15, PR); UPD(0x0C07E90Au, 2);  /* 0C07E908 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07E90A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07E90Eu, 2);  /* 0C07E90C mov.l @(disp,Rm),Rn */
	r0 = 0xBu;  /* 0C07E90E mov #imm,Rn */
	T = r2 > r0;  /* 0C07E910 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07E91Au, 5); goto L_0C07E91A; } goto L_0C07E916; }  /* 0C07E912 bf/s */
L_0C07E916: BLKS(0x0C07E916u);
	{ IF(0x0C07E918u); ; /* slot nop */ UPD(0x0C07EA04u, 4); goto L_0C07EA04; }  /* 0C07E916 bra */
L_0C07E91A: BLKS(0x0C07E91Au);
	r0 = 0xC07E92Cu;  /* 0C07E91A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07E91C add Rm,Rn */
	IF(0x0C07E91Eu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07E920u, 3);  /* 0C07E91E mov.w @(r0,Rm),Rn */
	IF(0x0C07E920u); { u32 tv_ = (r4 + 0x0C07E924u); u32 t_ = PHYS(tv_); IF(0x0C07E922u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C07E920 braf Rn */
L_0C07EA04: BLKS(0x0C07EA04u);
	r15 = r14;  /* 0C07EA04 mov Rm,Rn */
	IF(0x0C07EA06u); PR = R32(r15); r15 += 4; UPD(0x0C07EA08u, 2);  /* 0C07EA06 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07EA0Au, 1);  /* 0C07EA08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07EA0Cu, 1);  /* 0C07EA0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07EA0Eu, 1);  /* 0C07EA0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07EA10u, 1);  /* 0C07EA0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07EA12u, 1);  /* 0C07EA10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07EA14u, 1);  /* 0C07EA12 mov.l @Rm+,Rn */
	IF(0x0C07EA14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07EA14 rts */
L_0C07EC30: BLKS(0x0C07EC30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07EC32u, 1);  /* 0C07EC30 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07EC34u, 1);  /* 0C07EC32 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07EC36u, 1);  /* 0C07EC34 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07EC38u, 1);  /* 0C07EC36 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07EC3Au, 1);  /* 0C07EC38 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07EC3A exts.w Rm,Rn */
	r3 = 0xB4u; UPD(0x0C07EC3Eu, 2);  /* 0C07EC3C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07EC40u, 1);  /* 0C07EC3E mov.l Rm,@-Rn */
	IF(0x0C07EC40u); MACL = r11 * r3;  /* 0C07EC40 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07EC44u, 3);  /* 0C07EC42 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C07EC46u, 1);  /* 0C07EC44 mov.l @(disp,pc),Rn */
	IF(0x0C07EC46u); r2 = MACL;  /* 0C07EC46 sts macl,Rn */
	IF(0x0C07EC48u); r15 -= 4; W32(r15, PR); UPD(0x0C07EC4Au, 2);  /* 0C07EC48 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07EC4A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07EC4Eu, 2);  /* 0C07EC4C mov.l @(disp,Rm),Rn */
	r0 = 0xBu;  /* 0C07EC4E mov #imm,Rn */
	T = r2 > r0;  /* 0C07EC50 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07ECA8u, 5); goto L_0C07ECA8; } goto L_0C07EC56; }  /* 0C07EC52 bt/s */
L_0C07EC56: BLKS(0x0C07EC56u);
	r0 = 0xC07EC68u;  /* 0C07EC56 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07EC58 add Rm,Rn */
	IF(0x0C07EC5Au); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07EC5Cu, 4);  /* 0C07EC5A mov.w @(r0,Rm),Rn */
	IF(0x0C07EC5Cu); { u32 tv_ = (r4 + 0x0C07EC60u); u32 t_ = PHYS(tv_); IF(0x0C07EC5Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07EC80u: goto L_0C07EC80; case 0x0C07ED20u: goto L_0C07ED20; case 0x0C07ED70u: goto L_0C07ED70; case 0x0C07EDF0u: goto L_0C07EDF0; case 0x0C07EEB0u: goto L_0C07EEB0; case 0x0C07EF30u: goto L_0C07EF30; case 0x0C07F020u: goto L_0C07F020; case 0x0C07F0D0u: goto L_0C07F0D0; default: JUMPD(tv_); } }  /* 0C07EC5C braf Rn */
L_0C07EC80: BLKS(0x0C07EC80u);
	r8 = 0xC0A9CB0u; UPD(0x0C07EC82u, 1);  /* 0C07EC80 mov.l @(disp,pc),Rn */
	IF(0x0C07EC82u); { u32 t_ = r8; PR = 0x0C07EC86u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C07EC86u); }  /* 0C07EC82 jsr @Rn */
L_0C07EC86: BLKS(0x0C07EC86u);
	r7 = 0xC0A9B40u; UPD(0x0C07EC88u, 1);  /* 0C07EC86 mov.l @(disp,pc),Rn */
	IF(0x0C07EC88u); { u32 t_ = r7; PR = 0x0C07EC8Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9B40, 0x0C0A9B40u, 0x0C07EC8Cu); }  /* 0C07EC88 jsr @Rn */
L_0C07EC8C: BLKS(0x0C07EC8Cu);
	r6 = 0xB4u; UPD(0x0C07EC8Eu, 1);  /* 0C07EC8C mov.w @(disp,pc),Rn */
	IF(0x0C07EC8Eu); MACL = r11 * r6;  /* 0C07EC8E mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C07EC92u, 3);  /* 0C07EC90 mov.l @(disp,pc),Rn */
	IF(0x0C07EC92u); r2 = MACL;  /* 0C07EC92 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C07EC96u, 2);  /* 0C07EC94 mov.w @(disp,pc),Rn */
	r2 += r5;  /* 0C07EC96 add Rm,Rn */
	r3 += r2;  /* 0C07EC98 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C07EC9Cu, 3);  /* 0C07EC9A mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C07EC9C add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C07EC9E extu.b Rm,Rn */
	T = r0 == 0xCu;  /* 0C07ECA0 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07ECC0u, 6); goto L_0C07ECC0; } UPD(0x0C07ECA6u, 1); goto L_0C07ECA6; }  /* 0C07ECA2 bt/s */
L_0C07ECA6: BLKS(0x0C07ECA6u);
	IF(0x0C07ECA6u); ;  /* 0C07ECA6 nop */
	UPD(0x0C07ECA8u, 1);
L_0C07ECA8: BLKS(0x0C07ECA8u);
	r15 = r14;  /* 0C07ECA8 mov Rm,Rn */
	IF(0x0C07ECAAu); PR = R32(r15); r15 += 4; UPD(0x0C07ECACu, 2);  /* 0C07ECAA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07ECAEu, 1);  /* 0C07ECAC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07ECB0u, 1);  /* 0C07ECAE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07ECB2u, 1);  /* 0C07ECB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07ECB4u, 1);  /* 0C07ECB2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07ECB6u, 1);  /* 0C07ECB4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07ECB8u, 1);  /* 0C07ECB6 mov.l @Rm+,Rn */
	IF(0x0C07ECB8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07ECB8 rts */
L_0C07ECC0: BLKS(0x0C07ECC0u);
	r9 = 0x0u;  /* 0C07ECC0 mov #imm,Rn */
	W8(r3, r9); UPD(0x0C07ECC4u, 2);  /* 0C07ECC2 mov.b Rm,@Rn */
	r8 = r2;  /* 0C07ECC4 mov Rm,Rn */
	r11 = 0xC18B9D0u; UPD(0x0C07ECC8u, 2);  /* 0C07ECC6 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C07ECC8 mov #imm,Rn */
	r10 = 0xC0BEEF0u; UPD(0x0C07ECCCu, 2);  /* 0C07ECCA mov.l @(disp,pc),Rn */
L_0C07ECCC: BLKS(0x0C07ECCCu);
	r0 = r9;  /* 0C07ECCC mov Rm,Rn */
	r5 = 0xC18B9B8u; UPD(0x0C07ECD0u, 2);  /* 0C07ECCE mov.l @(disp,pc),Rn */
	IF(0x0C07ECD0u); r0 <<= 2;  /* 0C07ECD0 shll2 Rn */
	IF(0x0C07ECD2u); r7 = R32(r0 + r5); UPD(0x0C07ECD4u, 2);  /* 0C07ECD2 mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C07ECD4 add #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07ECD8u, 2);  /* 0C07ECD6 mov.l @(disp,Rm),Rn */
	r0 = r9;  /* 0C07ECD8 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C07ECDA and #imm,r0 */
	IF(0x0C07ECDCu); r0 <<= 2;  /* 0C07ECDC shll2 Rn */
	r6 += r7;  /* 0C07ECDE add Rm,Rn */
	IF(0x0C07ECE0u); r3 = R32(r0 + r11); UPD(0x0C07ECE2u, 5);  /* 0C07ECE0 mov.l @(r0,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C07ECE4u, 1);  /* 0C07ECE2 mov.l @(disp,Rm),Rn */
	r4 = 0xC18B9D8u; UPD(0x0C07ECE6u, 1);  /* 0C07ECE4 mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C07ECE6 add Rm,Rn */
	IF(0x0C07ECE8u); r3 = R32(r0 + r4); UPD(0x0C07ECEAu, 2);  /* 0C07ECE8 mov.l @(r0,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C07ECECu, 1);  /* 0C07ECEA mov.w @(disp,pc),Rn */
	IF(0x0C07ECECu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07ECEEu, 1);  /* 0C07ECEC mov.b @(r0,Rm),Rn */
	r13 = r2 & 0xFF;  /* 0C07ECEE extu.b Rm,Rn */
	W32(r15, r13); UPD(0x0C07ECF2u, 2);  /* 0C07ECF0 mov.l Rm,@Rn */
	r0 = r8;  /* 0C07ECF2 mov Rm,Rn */
	r12 = 0xA9u; UPD(0x0C07ECF6u, 2);  /* 0C07ECF4 mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C07ECF6 mov #imm,Rn */
	IF(0x0C07ECF8u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C07ECFAu, 2);  /* 0C07ECF8 mov.b @(r0,Rm),Rn */
	r13 = r9;  /* 0C07ECFA mov Rm,Rn */
	r0 = 0x808080u; UPD(0x0C07ECFEu, 2);  /* 0C07ECFC mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C07ECFE extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07ED02u, 2);  /* 0C07ED00 mov.l Rm,@(disp,Rn) */
	r13 += 0x1u;  /* 0C07ED02 add #imm,Rn */
	W32(r15 + 0x8u, r2); UPD(0x0C07ED06u, 2);  /* 0C07ED04 mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C07ED06 mov #imm,Rn */
	W32(r15 + 0xCu, r3); UPD(0x0C07ED0Au, 2);  /* 0C07ED08 mov.l Rm,@(disp,Rn) */
	r9 = (u32)(s32)(s16)r13;  /* 0C07ED0A exts.w Rm,Rn */
	W32(r15 + 0x10u, r0); UPD(0x0C07ED0Eu, 2);  /* 0C07ED0C mov.l Rm,@(disp,Rn) */
	r12 = 0x5u;  /* 0C07ED0E mov #imm,Rn */
	IF(0x0C07ED10u); { u32 t_ = r10; PR = 0x0C07ED14u; r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C07ED14u); }  /* 0C07ED10 jsr @Rn */
L_0C07ED14: BLKS(0x0C07ED14u);
	T = (s32)r9 > (s32)r12;  /* 0C07ED14 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07ECCCu, 4); goto L_0C07ECCC; } goto L_0C07ED1A; }  /* 0C07ED16 bf/s */
L_0C07ED1A: BLKS(0x0C07ED1Au);
	{ IF(0x0C07ED1Cu); ; /* slot nop */ UPD(0x0C07ECA8u, 4); goto L_0C07ECA8; }  /* 0C07ED1A bra */
L_0C07ED20: BLKS(0x0C07ED20u);
	r10 = 0xC0A8CA0u; UPD(0x0C07ED22u, 1);  /* 0C07ED20 mov.l @(disp,pc),Rn */
	IF(0x0C07ED22u); { u32 t_ = r10; PR = 0x0C07ED26u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07ED26u); }  /* 0C07ED22 jsr @Rn */
L_0C07ED26: BLKS(0x0C07ED26u);
	IF(0x0C07ED26u); T = (s32)r0 >= 0;  /* 0C07ED26 cmp/pz Rn */
	if (!T) { UPD(0x0C07ED50u, 4); goto L_0C07ED50; }  /* 0C07ED28 bf */
L_0C07ED2A: BLKS(0x0C07ED2Au);
	r13 = 0xB4u; UPD(0x0C07ED2Cu, 1);  /* 0C07ED2A mov.w @(disp,pc),Rn */
	IF(0x0C07ED2Cu); MACL = r11 * r13;  /* 0C07ED2C mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C07ED30u, 3);  /* 0C07ED2E mov.l @(disp,pc),Rn */
	IF(0x0C07ED30u); r11 = MACL;  /* 0C07ED30 sts macl,Rn */
	IF(0x0C07ED32u); MACL = r0 * r13;  /* 0C07ED32 mul.l Rm,Rn */
	r11 += r12;  /* 0C07ED34 add Rm,Rn */
	r1 = R32(r11 + 0x30u); UPD(0x0C07ED38u, 5);  /* 0C07ED36 mov.l @(disp,Rm),Rn */
	IF(0x0C07ED38u); r8 = MACL;  /* 0C07ED38 sts macl,Rn */
	r8 += r12;  /* 0C07ED3A add Rm,Rn */
	r9 = R32(r8 + 0x24u); UPD(0x0C07ED3Eu, 3);  /* 0C07ED3C mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C07ED40u, 1);  /* 0C07ED3E mov.l @(disp,Rm),Rn */
	r0 = R32(r11 + 0x2Cu); UPD(0x0C07ED42u, 1);  /* 0C07ED40 mov.l @(disp,Rm),Rn */
	r6 += r1;  /* 0C07ED42 add Rm,Rn */
	r9 += r0;  /* 0C07ED44 add Rm,Rn */
	W32(r11 + 0x24u, r9); UPD(0x0C07ED48u, 3);  /* 0C07ED46 mov.l Rm,@(disp,Rn) */
	{ W32(r11 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07ECA8u, 3); goto L_0C07ECA8; }  /* 0C07ED48 bra */
L_0C07ED50: BLKS(0x0C07ED50u);
	r1 = 0xC07E8F0u; UPD(0x0C07ED52u, 1);  /* 0C07ED50 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07ED52 mov Rm,Rn */
	UPD(0x0C07ED54u, 1);
L_0C07ED54: BLKS(0x0C07ED54u);
	r15 = r14;  /* 0C07ED54 mov Rm,Rn */
	IF(0x0C07ED56u); PR = R32(r15); r15 += 4; UPD(0x0C07ED58u, 2);  /* 0C07ED56 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07ED5Au, 1);  /* 0C07ED58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07ED5Cu, 1);  /* 0C07ED5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07ED5Eu, 1);  /* 0C07ED5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07ED60u, 1);  /* 0C07ED5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07ED62u, 1);  /* 0C07ED60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07ED64u, 1);  /* 0C07ED62 mov.l @Rm+,Rn */
	IF(0x0C07ED64u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C069B90u: TAIL(blk_f_0C069B90); case 0x0C07E8F0u: goto L_0C07E8F0; default: JUMPD(tv_); } }  /* 0C07ED64 jmp @Rn */
L_0C07ED70: BLKS(0x0C07ED70u);
	r10 = 0xC0A8CA0u; UPD(0x0C07ED72u, 1);  /* 0C07ED70 mov.l @(disp,pc),Rn */
	IF(0x0C07ED72u); { u32 t_ = r10; PR = 0x0C07ED76u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07ED76u); }  /* 0C07ED72 jsr @Rn */
L_0C07ED76: BLKS(0x0C07ED76u);
	IF(0x0C07ED76u); T = (s32)r0 >= 0;  /* 0C07ED76 cmp/pz Rn */
	if (!T) { UPD(0x0C07ED50u, 4); goto L_0C07ED50; }  /* 0C07ED78 bf */
L_0C07ED7A: BLKS(0x0C07ED7Au);
	r2 = 0xB4u; UPD(0x0C07ED7Cu, 1);  /* 0C07ED7A mov.w @(disp,pc),Rn */
	IF(0x0C07ED7Cu); MACL = r0 * r2;  /* 0C07ED7C mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C07ED80u, 3);  /* 0C07ED7E mov.l @(disp,pc),Rn */
	IF(0x0C07ED80u); r7 = MACL;  /* 0C07ED80 sts macl,Rn */
	r7 += r6;  /* 0C07ED82 add Rm,Rn */
	r4 = R32(r7 + 0xCu); UPD(0x0C07ED86u, 3);  /* 0C07ED84 mov.l @(disp,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C07ED86 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C07ED8Au); MACL = r11 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C07ED50u, 5); goto L_0C07ED50; } goto L_0C07ED8C; }  /* 0C07ED88 bf/s */
L_0C07ED8C: BLKS(0x0C07ED8Cu);
	r3 = R32(r7 + 0x28u); UPD(0x0C07ED8Eu, 3);  /* 0C07ED8C mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C07ED8E mov Rm,Rn */
	IF(0x0C07ED90u); r5 = MACL;  /* 0C07ED90 sts macl,Rn */
	r5 += r6;  /* 0C07ED92 add Rm,Rn */
	r6 = R32(r7 + 0x24u); UPD(0x0C07ED96u, 4);  /* 0C07ED94 mov.l @(disp,Rm),Rn */
	r0 = R32(r5 + 0xCu); UPD(0x0C07ED98u, 1);  /* 0C07ED96 mov.l @(disp,Rm),Rn */
	r1 = R32(r5 + 0x2Cu); UPD(0x0C07ED9Au, 1);  /* 0C07ED98 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C07ED9A add #imm,Rn */
	r7 = R32(r5 + 0x30u); UPD(0x0C07ED9Eu, 2);  /* 0C07ED9C mov.l @(disp,Rm),Rn */
	r6 += r1;  /* 0C07ED9E add Rm,Rn */
	r3 += r7;  /* 0C07EDA0 add Rm,Rn */
	r0 &= 0x7u;  /* 0C07EDA2 and #imm,r0 */
	W32(r5 + 0x24u, r6); UPD(0x0C07EDA6u, 4);  /* 0C07EDA4 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x28u, r3); UPD(0x0C07EDA8u, 1);  /* 0C07EDA6 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A8AE0u; UPD(0x0C07EDAAu, 1);  /* 0C07EDA8 mov.l @(disp,pc),Rn */
	{ W32(r5 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07ED54u, 3); goto L_0C07ED54; }  /* 0C07EDAA bra */
L_0C07EDF0: BLKS(0x0C07EDF0u);
	r8 = 0xC0A8CA0u; UPD(0x0C07EDF2u, 1);  /* 0C07EDF0 mov.l @(disp,pc),Rn */
	IF(0x0C07EDF2u); { u32 t_ = r8; PR = 0x0C07EDF6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07EDF6u); }  /* 0C07EDF2 jsr @Rn */
L_0C07EDF6: BLKS(0x0C07EDF6u);
	IF(0x0C07EDF6u); T = (s32)r0 >= 0;  /* 0C07EDF6 cmp/pz Rn */
	if (!T) { UPD(0x0C07ED50u, 4); goto L_0C07ED50; }  /* 0C07EDF8 bf */
L_0C07EDFA: BLKS(0x0C07EDFAu);
	r9 = 0xB4u; UPD(0x0C07EDFCu, 1);  /* 0C07EDFA mov.w @(disp,pc),Rn */
	IF(0x0C07EDFCu); MACL = r11 * r9;  /* 0C07EDFC mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C07EE00u, 3);  /* 0C07EDFE mov.l @(disp,pc),Rn */
	IF(0x0C07EE00u); r10 = MACL;  /* 0C07EE00 sts macl,Rn */
	r10 += r2;  /* 0C07EE02 add Rm,Rn */
	IF(0x0C07EE04u); MACL = r0 * r9;  /* 0C07EE04 mul.l Rm,Rn */
	r13 = R32(r10); UPD(0x0C07EE08u, 5);  /* 0C07EE06 mov.l @Rm,Rn */
	r8 = 0xFFFFFEFFu; UPD(0x0C07EE0Au, 1);  /* 0C07EE08 mov.w @(disp,pc),Rn */
	r9 += 0x4Cu;  /* 0C07EE0A add #imm,Rn */
	r13 &= r8;  /* 0C07EE0C and Rm,Rn */
	IF(0x0C07EE0Eu); r8 = MACL;  /* 0C07EE0E sts macl,Rn */
	r8 += r2;  /* 0C07EE10 add Rm,Rn */
	r6 = R32(r8); UPD(0x0C07EE14u, 5);  /* 0C07EE12 mov.l @Rm,Rn */
	r6 &= r9;  /* 0C07EE14 and Rm,Rn */
	r13 |= r6;  /* 0C07EE16 or Rm,Rn */
	W32(r10, r13); UPD(0x0C07EE1Au, 3);  /* 0C07EE18 mov.l Rm,@Rn */
	r5 = 0x84u; UPD(0x0C07EE1Cu, 1);  /* 0C07EE1A mov.w @(disp,pc),Rn */
	r13 = r10;  /* 0C07EE1C mov Rm,Rn */
	r13 += r5;  /* 0C07EE1E add Rm,Rn */
	r5 += r8;  /* 0C07EE20 add Rm,Rn */
	r7 = 0xC069B20u; UPD(0x0C07EE24u, 4);  /* 0C07EE22 mov.l @(disp,pc),Rn */
	r5 += 0x2u;  /* 0C07EE24 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r5); UPD(0x0C07EE28u, 2);  /* 0C07EE26 mov.w @Rm,Rn */
	r13 += 0x2u;  /* 0C07EE28 add #imm,Rn */
	r9 = 0xE0000u; UPD(0x0C07EE2Cu, 2);  /* 0C07EE2A mov.l @(disp,pc),Rn */
	r12 = r0;  /* 0C07EE2C mov Rm,Rn */
	r5 = r9;  /* 0C07EE2E mov Rm,Rn */
	r4 = r0;  /* 0C07EE30 mov Rm,Rn */
	IF(0x0C07EE32u); { u32 t_ = r7; PR = 0x0C07EE36u; W16(r13, r0); /* slot mov.w Rm,@Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07EE36u); }  /* 0C07EE32 jsr @Rn */
L_0C07EE36: BLKS(0x0C07EE36u);
	r4 = R32(r8 + 0x24u); UPD(0x0C07EE38u, 1);  /* 0C07EE36 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C07EE38 mov Rm,Rn */
	r4 += r0;  /* 0C07EE3A add Rm,Rn */
	r3 = 0xC069AF0u; UPD(0x0C07EE3Eu, 3);  /* 0C07EE3C mov.l @(disp,pc),Rn */
	W32(r10 + 0x24u, r4); UPD(0x0C07EE40u, 1);  /* 0C07EE3E mov.l Rm,@(disp,Rn) */
	IF(0x0C07EE40u); { u32 t_ = r3; PR = 0x0C07EE44u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07EE44u); }  /* 0C07EE40 jsr @Rn */
L_0C07EE44: BLKS(0x0C07EE44u);
	r4 = r11;  /* 0C07EE44 mov Rm,Rn */
	r12 = R32(r8 + 0x28u); UPD(0x0C07EE48u, 2);  /* 0C07EE46 mov.l @(disp,Rm),Rn */
	r11 = 0xC0A8AE0u; UPD(0x0C07EE4Au, 1);  /* 0C07EE48 mov.l @(disp,pc),Rn */
	r12 += r0;  /* 0C07EE4A add Rm,Rn */
	r9 = R32(r8 + 0xCu); UPD(0x0C07EE4Eu, 2);  /* 0C07EE4C mov.l @(disp,Rm),Rn */
	W32(r10 + 0x28u, r12); UPD(0x0C07EE50u, 1);  /* 0C07EE4E mov.l Rm,@(disp,Rn) */
	IF(0x0C07EE50u); { u32 t_ = r11; PR = 0x0C07EE54u; W32(r10 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C07EE54u); }  /* 0C07EE50 jsr @Rn */
L_0C07EE54: BLKS(0x0C07EE54u);
	r0 = 0x9Au; UPD(0x0C07EE56u, 1);  /* 0C07EE54 mov.w @(disp,pc),Rn */
	IF(0x0C07EE56u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07EE58u, 1);  /* 0C07EE56 mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C07EE58 tst Rm,Rn */
	if (T) { UPD(0x0C07EEA0u, 4); goto L_0C07EEA0; }  /* 0C07EE5A bt */
L_0C07EE5C: BLKS(0x0C07EE5Cu);
	r12 = 0x0u;  /* 0C07EE5C mov #imm,Rn */
	IF(0x0C07EE5Eu); W8(r0 + r8, r12); UPD(0x0C07EE60u, 2);  /* 0C07EE5E mov.b Rm,@(r0,Rn) */
	r11 = 0xC0BBF10u; UPD(0x0C07EE62u, 1);  /* 0C07EE60 mov.l @(disp,pc),Rn */
	r0 += 0xFu;  /* 0C07EE62 add #imm,Rn */
	IF(0x0C07EE64u); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C07EE66u, 2);  /* 0C07EE64 mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C07EE68u, 1);  /* 0C07EE66 mov.l @(disp,Rm),Rn */
	r6 = r1 & 0xFF;  /* 0C07EE68 extu.b Rm,Rn */
	IF(0x0C07EE6Au); { u32 t_ = r11; PR = 0x0C07EE6Eu; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C07EE6Eu); }  /* 0C07EE6A jsr @Rn */
L_0C07EE6E: BLKS(0x0C07EE6Eu);
	T = (r0 & r0) == 0;  /* 0C07EE6E tst Rm,Rn */
	if (T) { UPD(0x0C07EEA0u, 4); goto L_0C07EEA0; }  /* 0C07EE70 bt */
L_0C07EE72: BLKS(0x0C07EE72u);
	r11 = (u32)(s32)(s16)R16(r13); UPD(0x0C07EE74u, 1);  /* 0C07EE72 mov.w @Rm,Rn */
	r6 = 0xC069B20u; UPD(0x0C07EE76u, 1);  /* 0C07EE74 mov.l @(disp,pc),Rn */
	r9 = 0xA0000u; UPD(0x0C07EE78u, 1);  /* 0C07EE76 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07EE78 mov Rm,Rn */
	IF(0x0C07EE7Au); { u32 t_ = r6; PR = 0x0C07EE7Eu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07EE7Eu); }  /* 0C07EE7A jsr @Rn */
L_0C07EE7E: BLKS(0x0C07EE7Eu);
	r7 = 0xC069AF0u; UPD(0x0C07EE80u, 1);  /* 0C07EE7E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07EE80 mov Rm,Rn */
	r13 = R32(r10 + 0x24u); UPD(0x0C07EE84u, 2);  /* 0C07EE82 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C07EE84 mov Rm,Rn */
	IF(0x0C07EE86u); { u32 t_ = r7; PR = 0x0C07EE8Au; r13 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07EE8Au); }  /* 0C07EE86 jsr @Rn */
L_0C07EE8A: BLKS(0x0C07EE8Au);
	r6 = R32(r10 + 0x28u); UPD(0x0C07EE8Cu, 1);  /* 0C07EE8A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07EE8C add #imm,Rn */
	r3 = 0x20000u; UPD(0x0C07EE90u, 2);  /* 0C07EE8E mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C07EE90 add Rm,Rn */
	r10 = 0xC0BA480u; UPD(0x0C07EE94u, 2);  /* 0C07EE92 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C07EE94 mov #imm,Rn */
	W32(r15, r3); UPD(0x0C07EE98u, 2);  /* 0C07EE96 mov.l Rm,@Rn */
	r5 = r13;  /* 0C07EE98 mov Rm,Rn */
	IF(0x0C07EE9Au); { u32 t_ = r10; PR = 0x0C07EE9Eu; r7 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C07EE9Eu); }  /* 0C07EE9A jsr @Rn */
L_0C07EE9E: BLKS(0x0C07EE9Eu);
	r15 += 0x4u;  /* 0C07EE9E add #imm,Rn */
	UPD(0x0C07EEA0u, 1);
L_0C07EEA0: BLKS(0x0C07EEA0u);
	{ IF(0x0C07EEA2u); ; /* slot nop */ UPD(0x0C07ECA8u, 3); goto L_0C07ECA8; }  /* 0C07EEA0 bra */
L_0C07EEB0: BLKS(0x0C07EEB0u);
	r8 = 0xC0A8CA0u; UPD(0x0C07EEB2u, 1);  /* 0C07EEB0 mov.l @(disp,pc),Rn */
	IF(0x0C07EEB2u); { u32 t_ = r8; PR = 0x0C07EEB6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07EEB6u); }  /* 0C07EEB2 jsr @Rn */
L_0C07EEB6: BLKS(0x0C07EEB6u);
	IF(0x0C07EEB6u); T = (s32)r0 >= 0;  /* 0C07EEB6 cmp/pz Rn */
	if (!T) { UPD(0x0C07EF4Cu, 4); goto L_0C07EF4C; }  /* 0C07EEB8 bf */
L_0C07EEBA: BLKS(0x0C07EEBAu);
	r9 = 0xB4u; UPD(0x0C07EEBCu, 1);  /* 0C07EEBA mov.w @(disp,pc),Rn */
	IF(0x0C07EEBCu); MACL = r11 * r9;  /* 0C07EEBC mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C07EEC0u, 3);  /* 0C07EEBE mov.l @(disp,pc),Rn */
	IF(0x0C07EEC0u); r13 = MACL;  /* 0C07EEC0 sts macl,Rn */
	r13 += r2;  /* 0C07EEC2 add Rm,Rn */
	IF(0x0C07EEC4u); MACL = r0 * r9;  /* 0C07EEC4 mul.l Rm,Rn */
	r5 = R32(r13); UPD(0x0C07EEC8u, 5);  /* 0C07EEC6 mov.l @Rm,Rn */
	r6 = r13;  /* 0C07EEC8 mov Rm,Rn */
	r8 = 0xFFFFFEFFu; UPD(0x0C07EECCu, 2);  /* 0C07EECA mov.w @(disp,pc),Rn */
	r9 += 0x4Cu;  /* 0C07EECC add #imm,Rn */
	r5 &= r8;  /* 0C07EECE and Rm,Rn */
	IF(0x0C07EED0u); r8 = MACL;  /* 0C07EED0 sts macl,Rn */
	r8 += r2;  /* 0C07EED2 add Rm,Rn */
	r4 = 0x84u; UPD(0x0C07EED6u, 5);  /* 0C07EED4 mov.w @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C07EED8u, 1);  /* 0C07EED6 mov.l @Rm,Rn */
	r6 += r4;  /* 0C07EED8 add Rm,Rn */
	r0 &= r9;  /* 0C07EEDA and Rm,Rn */
	r4 += r8;  /* 0C07EEDC add Rm,Rn */
	r5 |= r0;  /* 0C07EEDE or Rm,Rn */
	r4 += 0x2u;  /* 0C07EEE0 add #imm,Rn */
	r12 = 0xC069B20u; UPD(0x0C07EEE4u, 6);  /* 0C07EEE2 mov.l @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C07EEE4 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r4); UPD(0x0C07EEE8u, 2);  /* 0C07EEE6 mov.w @Rm,Rn */
	W32(r13, r5); UPD(0x0C07EEEAu, 1);  /* 0C07EEE8 mov.l Rm,@Rn */
	r10 = r7;  /* 0C07EEEA mov Rm,Rn */
	r9 = 0xE0000u; UPD(0x0C07EEEEu, 2);  /* 0C07EEEC mov.l @(disp,pc),Rn */
	r4 = r7;  /* 0C07EEEE mov Rm,Rn */
	W16(r6, r7); UPD(0x0C07EEF2u, 2);  /* 0C07EEF0 mov.w Rm,@Rn */
	IF(0x0C07EEF2u); { u32 t_ = r12; PR = 0x0C07EEF6u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07EEF6u); }  /* 0C07EEF2 jsr @Rn */
L_0C07EEF6: BLKS(0x0C07EEF6u);
	r5 = r9;  /* 0C07EEF6 mov Rm,Rn */
	r3 = R32(r8 + 0x24u); UPD(0x0C07EEFAu, 2);  /* 0C07EEF8 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C07EEFA mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C07EEFEu, 2);  /* 0C07EEFC mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C07EEFE add Rm,Rn */
	IF(0x0C07EF00u); { u32 t_ = r9; PR = 0x0C07EF04u; W32(r13 + 0x24u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07EF04u); }  /* 0C07EF00 jsr @Rn */
L_0C07EF04: BLKS(0x0C07EF04u);
	r10 = R32(r8 + 0x28u); UPD(0x0C07EF06u, 1);  /* 0C07EF04 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C07EF06 mov Rm,Rn */
	r2 = 0xC0A8AE0u; UPD(0x0C07EF0Au, 2);  /* 0C07EF08 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C07EF0A add Rm,Rn */
	r12 = R32(r8 + 0xCu); UPD(0x0C07EF0Eu, 2);  /* 0C07EF0C mov.l @(disp,Rm),Rn */
	W32(r13 + 0x28u, r10); UPD(0x0C07EF10u, 1);  /* 0C07EF0E mov.l Rm,@(disp,Rn) */
	IF(0x0C07EF10u); { u32 t_ = r2; PR = 0x0C07EF14u; W32(r13 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C07EF14u); }  /* 0C07EF10 jsr @Rn */
L_0C07EF14: BLKS(0x0C07EF14u);
	r4 = 0x98u; UPD(0x0C07EF16u, 1);  /* 0C07EF14 mov.w @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C07EF16 mov #imm,Rn */
	r13 += r4;  /* 0C07EF18 add Rm,Rn */
	r4 += r8;  /* 0C07EF1A add Rm,Rn */
	r4 += 0x2u;  /* 0C07EF1C add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C07EF20u, 5);  /* 0C07EF1E mov.b @Rm,Rn */
	r13 += 0x2u;  /* 0C07EF20 add #imm,Rn */
	W8(r13, r5); UPD(0x0C07EF24u, 2);  /* 0C07EF22 mov.b Rm,@Rn */
	W8(r4, r0); UPD(0x0C07EF26u, 1);  /* 0C07EF24 mov.b Rm,@Rn */
L_0C07EF26: BLKS(0x0C07EF26u);
	{ IF(0x0C07EF28u); ; /* slot nop */ UPD(0x0C07ECA8u, 3); goto L_0C07ECA8; }  /* 0C07EF26 bra */
L_0C07EF30: BLKS(0x0C07EF30u);
	r13 = 0xC0A8CA0u; UPD(0x0C07EF32u, 1);  /* 0C07EF30 mov.l @(disp,pc),Rn */
	IF(0x0C07EF32u); { u32 t_ = r13; PR = 0x0C07EF36u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07EF36u); }  /* 0C07EF32 jsr @Rn */
L_0C07EF36: BLKS(0x0C07EF36u);
	IF(0x0C07EF36u); T = (s32)r0 >= 0;  /* 0C07EF36 cmp/pz Rn */
	if (!T) { UPD(0x0C07EF4Cu, 4); goto L_0C07EF4C; }  /* 0C07EF38 bf */
L_0C07EF3A: BLKS(0x0C07EF3Au);
	r1 = 0xB4u; UPD(0x0C07EF3Cu, 1);  /* 0C07EF3A mov.w @(disp,pc),Rn */
	IF(0x0C07EF3Cu); MACL = r0 * r1;  /* 0C07EF3C mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C07EF40u, 3);  /* 0C07EF3E mov.l @(disp,pc),Rn */
	IF(0x0C07EF40u); r3 = MACL;  /* 0C07EF40 sts macl,Rn */
	r3 += r2;  /* 0C07EF42 add Rm,Rn */
	r7 = R32(r3 + 0xCu); UPD(0x0C07EF46u, 3);  /* 0C07EF44 mov.l @(disp,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C07EF46 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C07EF4Au); MACL = r11 * r1; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C07EF50u, 5); goto L_0C07EF50; } UPD(0x0C07EF4Cu, 2); goto L_0C07EF4C; }  /* 0C07EF48 bt/s */
L_0C07EF4C: BLKS(0x0C07EF4Cu);
	{ IF(0x0C07EF4Eu); ; /* slot nop */ UPD(0x0C07ED50u, 3); goto L_0C07ED50; }  /* 0C07EF4C bra */
L_0C07EF50: BLKS(0x0C07EF50u);
	r9 = 0x9Cu; UPD(0x0C07EF52u, 1);  /* 0C07EF50 mov.w @(disp,pc),Rn */
	IF(0x0C07EF52u); r8 = MACL;  /* 0C07EF52 sts macl,Rn */
	r8 += r2;  /* 0C07EF54 add Rm,Rn */
	r12 = R32(r3 + 0x24u); UPD(0x0C07EF58u, 3);  /* 0C07EF56 mov.l @(disp,Rm),Rn */
	r9 += r8;  /* 0C07EF58 add Rm,Rn */
	r10 = R32(r3 + 0x28u); UPD(0x0C07EF5Cu, 2);  /* 0C07EF5A mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x2Cu); UPD(0x0C07EF5Eu, 1);  /* 0C07EF5C mov.l @(disp,Rm),Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C07EF60u, 1);  /* 0C07EF5E mov.l @(disp,Rm),Rn */
	r12 += r6;  /* 0C07EF60 add Rm,Rn */
	r10 += r1;  /* 0C07EF62 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C07EF66u, 3);  /* 0C07EF64 mov.b @Rm,Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C07EF68u, 1);  /* 0C07EF66 mov.l Rm,@(disp,Rn) */
	T = (r3 & r3) == 0;  /* 0C07EF68 tst Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x28u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07EFE0u, 4); goto L_0C07EFE0; } UPD(0x0C07EF6Eu, 1); goto L_0C07EF6E; }  /* 0C07EF6A bt/s */
L_0C07EF6E: BLKS(0x0C07EF6Eu);
	r2 = 0x98u; UPD(0x0C07EF70u, 1);  /* 0C07EF6E mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C07EF70 add Rm,Rn */
	r1 = r2;  /* 0C07EF72 mov Rm,Rn */
	r1 += 0x1u;  /* 0C07EF74 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r1); UPD(0x0C07EF78u, 4);  /* 0C07EF76 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C07EF78 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C07EF7A extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C07EF7C cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r1, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07EF26u, 6); goto L_0C07EF26; } UPD(0x0C07EF82u, 1); goto L_0C07EF82; }  /* 0C07EF7E bf/s */
L_0C07EF82: BLKS(0x0C07EF82u);
	r2 += 0x2u;  /* 0C07EF82 add #imm,Rn */
	r12 = 0x1u;  /* 0C07EF84 mov #imm,Rn */
	W8(r2, r12); UPD(0x0C07EF88u, 3);  /* 0C07EF86 mov.b Rm,@Rn */
	r2 = r3;  /* 0C07EF88 mov Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C07EF8A add #imm,Rn */
	W8(r9, r2); UPD(0x0C07EF8Eu, 3);  /* 0C07EF8C mov.b Rm,@Rn */
	r9 = r2 & 0xFF;  /* 0C07EF8E extu.b Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C07EF90 tst Rm,Rn */
	{ u32 c_ = !T; W8(r1, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07EF26u, 5); goto L_0C07EF26; } UPD(0x0C07EF96u, 1); goto L_0C07EF96; }  /* 0C07EF92 bf/s */
L_0C07EF96: BLKS(0x0C07EF96u);
	r1 = 0xC069B90u; UPD(0x0C07EF98u, 1);  /* 0C07EF96 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C07ED54u, 3); goto L_0C07ED54; }  /* 0C07EF98 bra */
L_0C07EFE0: BLKS(0x0C07EFE0u);
	r10 = 0xC069BF0u; UPD(0x0C07EFE2u, 1);  /* 0C07EFE0 mov.l @(disp,pc),Rn */
	r13 = 0xC068F00u; UPD(0x0C07EFE4u, 1);  /* 0C07EFE2 mov.l @(disp,pc),Rn */
	IF(0x0C07EFE4u); { u32 t_ = r10; PR = 0x0C07EFE8u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C07EFE8u); }  /* 0C07EFE4 jsr @Rn */
L_0C07EFE8: BLKS(0x0C07EFE8u);
	r4 = r11;  /* 0C07EFE8 mov Rm,Rn */
	IF(0x0C07EFEAu); { u32 t_ = r13; PR = 0x0C07EFEEu; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C07EFEEu); }  /* 0C07EFEA jsr @Rn */
L_0C07EFEE: BLKS(0x0C07EFEEu);
	r5 = 0x86u; UPD(0x0C07EFF0u, 1);  /* 0C07EFEE mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07EFF0 mov Rm,Rn */
	IF(0x0C07EFF2u); r7 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C07EFF4u, 2);  /* 0C07EFF2 mov.w @(r0,Rm),Rn */
	r4 = 0x1Fu;  /* 0C07EFF4 mov #imm,Rn */
	r7 += 0x8u;  /* 0C07EFF6 add #imm,Rn */
	r3 = 0xC0A8AE0u; UPD(0x0C07EFFAu, 3);  /* 0C07EFF8 mov.l @(disp,pc),Rn */
	IF(0x0C07EFFAu); r7 >>= 2;  /* 0C07EFFA shlr2 Rn */
	IF(0x0C07EFFCu); r7 >>= 2;  /* 0C07EFFC shlr2 Rn */
	r7 &= r4;  /* 0C07EFFE and Rm,Rn */
	r4 = r11;  /* 0C07F000 mov Rm,Rn */
	IF(0x0C07F002u); { u32 t_ = r3; PR = 0x0C07F006u; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 6); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C07F006u); }  /* 0C07F002 jsr @Rn */
L_0C07F006: BLKS(0x0C07F006u);
	r4 = r11;  /* 0C07F006 mov Rm,Rn */
	r11 = 0xC0BC1B0u; UPD(0x0C07F00Au, 2);  /* 0C07F008 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C07F00A mov #imm,Rn */
	IF(0x0C07F00Cu); { u32 t_ = r11; PR = 0x0C07F010u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C07F010u); }  /* 0C07F00C jsr @Rn */
L_0C07F010: BLKS(0x0C07F010u);
	T = (r0 & r0) == 0;  /* 0C07F010 tst Rm,Rn */
	if (T) { UPD(0x0C07F018u, 4); goto L_0C07F018; }  /* 0C07F012 bt */
L_0C07F014: BLKS(0x0C07F014u);
	r0 = 0x8u;  /* 0C07F014 mov #imm,Rn */
	W8(r9, r0); UPD(0x0C07F018u, 2);  /* 0C07F016 mov.b Rm,@Rn */
L_0C07F018: BLKS(0x0C07F018u);
	{ IF(0x0C07F01Au); ; /* slot nop */ UPD(0x0C07ECA8u, 3); goto L_0C07ECA8; }  /* 0C07F018 bra */
L_0C07F020: BLKS(0x0C07F020u);
	r13 = 0xC0A8CA0u; UPD(0x0C07F022u, 1);  /* 0C07F020 mov.l @(disp,pc),Rn */
	IF(0x0C07F022u); { u32 t_ = r13; PR = 0x0C07F026u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07F026u); }  /* 0C07F022 jsr @Rn */
L_0C07F026: BLKS(0x0C07F026u);
	IF(0x0C07F026u); T = (s32)r0 >= 0;  /* 0C07F026 cmp/pz Rn */
	if (!T) { UPD(0x0C07F0ECu, 4); goto L_0C07F0EC; }  /* 0C07F028 bf */
L_0C07F02A: BLKS(0x0C07F02Au);
	r2 = 0xB4u; UPD(0x0C07F02Cu, 1);  /* 0C07F02A mov.w @(disp,pc),Rn */
	IF(0x0C07F02Cu); MACL = r0 * r2;  /* 0C07F02C mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C07F030u, 3);  /* 0C07F02E mov.l @(disp,pc),Rn */
	IF(0x0C07F030u); r3 = MACL;  /* 0C07F030 sts macl,Rn */
	r3 += r7;  /* 0C07F032 add Rm,Rn */
	r6 = R32(r3 + 0xCu); UPD(0x0C07F036u, 3);  /* 0C07F034 mov.l @(disp,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C07F036 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C07F03Au); MACL = r11 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C07F0ECu, 5); goto L_0C07F0EC; } goto L_0C07F03C; }  /* 0C07F038 bf/s */
L_0C07F03C: BLKS(0x0C07F03Cu);
	r4 = R32(r3 + 0x24u); UPD(0x0C07F03Eu, 3);  /* 0C07F03C mov.l @(disp,Rm),Rn */
	IF(0x0C07F03Eu); r10 = MACL;  /* 0C07F03E sts macl,Rn */
	r10 += r7;  /* 0C07F040 add Rm,Rn */
	r5 = R32(r10 + 0x2Cu); UPD(0x0C07F044u, 3);  /* 0C07F042 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C07F046u, 1);  /* 0C07F044 mov.l @(disp,Rm),Rn */
	r4 += r5;  /* 0C07F046 add Rm,Rn */
	r1 = R32(r10 + 0x30u); UPD(0x0C07F04Au, 2);  /* 0C07F048 mov.l @(disp,Rm),Rn */
	r12 = 0xC069BF0u; UPD(0x0C07F04Cu, 1);  /* 0C07F04A mov.l @(disp,pc),Rn */
	r7 += r1;  /* 0C07F04C add Rm,Rn */
	W32(r10 + 0x24u, r4); UPD(0x0C07F050u, 2);  /* 0C07F04E mov.l Rm,@(disp,Rn) */
	r8 = 0xC068F00u; UPD(0x0C07F052u, 1);  /* 0C07F050 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07F052 mov Rm,Rn */
	IF(0x0C07F054u); { u32 t_ = r12; PR = 0x0C07F058u; W32(r10 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C07F058u); }  /* 0C07F054 jsr @Rn */
L_0C07F058: BLKS(0x0C07F058u);
	r5 = 0x2u;  /* 0C07F058 mov #imm,Rn */
	IF(0x0C07F05Au); { u32 t_ = r8; PR = 0x0C07F05Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C07F05Eu); }  /* 0C07F05A jsr @Rn */
L_0C07F05E: BLKS(0x0C07F05Eu);
	r8 = 0x86u; UPD(0x0C07F060u, 1);  /* 0C07F05E mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C07F060 mov Rm,Rn */
	r8 += r10;  /* 0C07F062 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C07F066u, 3);  /* 0C07F064 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C07F066 add #imm,Rn */
	r3 = 0xC0A8AE0u; UPD(0x0C07F06Au, 2);  /* 0C07F068 mov.l @(disp,pc),Rn */
	IF(0x0C07F06Au); r0 >>= 2;  /* 0C07F06A shlr2 Rn */
	IF(0x0C07F06Cu); r0 >>= 2;  /* 0C07F06C shlr2 Rn */
	r9 = 0xC0BC1B0u; UPD(0x0C07F070u, 3);  /* 0C07F06E mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C07F070 and #imm,r0 */
	IF(0x0C07F072u); { u32 t_ = r3; PR = 0x0C07F076u; W32(r10 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C07F076u); }  /* 0C07F072 jsr @Rn */
L_0C07F076: BLKS(0x0C07F076u);
	r4 = r11;  /* 0C07F076 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C07F078 mov #imm,Rn */
	IF(0x0C07F07Au); { u32 t_ = r9; PR = 0x0C07F07Eu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C07F07Eu); }  /* 0C07F07A jsr @Rn */
L_0C07F07E: BLKS(0x0C07F07Eu);
	T = (r0 & r0) == 0;  /* 0C07F07E tst Rm,Rn */
	if (T) { UPD(0x0C07F018u, 4); goto L_0C07F018; }  /* 0C07F080 bt */
L_0C07F082: BLKS(0x0C07F082u);
	r0 = r10;  /* 0C07F082 mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C07F086u, 2);  /* 0C07F084 mov.w @(disp,pc),Rn */
	r13 = 0xC0BBF10u; UPD(0x0C07F088u, 1);  /* 0C07F086 mov.l @(disp,pc),Rn */
	IF(0x0C07F088u); r2 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07F08Au, 1);  /* 0C07F088 mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C07F08Cu, 1);  /* 0C07F08A mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C07F08C extu.b Rm,Rn */
	IF(0x0C07F08Eu); { u32 t_ = r13; PR = 0x0C07F092u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C07F092u); }  /* 0C07F08E jsr @Rn */
L_0C07F092: BLKS(0x0C07F092u);
	T = (r0 & r0) == 0;  /* 0C07F092 tst Rm,Rn */
	if (T) { UPD(0x0C07F018u, 4); goto L_0C07F018; }  /* 0C07F094 bt */
L_0C07F096: BLKS(0x0C07F096u);
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C07F098u, 1);  /* 0C07F096 mov.w @Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C07F09Au, 1);  /* 0C07F098 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C07F09A mov Rm,Rn */
	r9 = 0x80000u; UPD(0x0C07F09Eu, 2);  /* 0C07F09C mov.l @(disp,pc),Rn */
	IF(0x0C07F09Eu); { u32 t_ = r8; PR = 0x0C07F0A2u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07F0A2u); }  /* 0C07F09E jsr @Rn */
L_0C07F0A2: BLKS(0x0C07F0A2u);
	r5 = r9;  /* 0C07F0A2 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C07F0A6u, 2);  /* 0C07F0A4 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C07F0A6 mov Rm,Rn */
	r12 = R32(r10 + 0x24u); UPD(0x0C07F0AAu, 2);  /* 0C07F0A8 mov.l @(disp,Rm),Rn */
	IF(0x0C07F0AAu); { u32 t_ = r9; PR = 0x0C07F0AEu; r12 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07F0AEu); }  /* 0C07F0AA jsr @Rn */
L_0C07F0AE: BLKS(0x0C07F0AEu);
	r6 = R32(r10 + 0x28u); UPD(0x0C07F0B0u, 1);  /* 0C07F0AE mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07F0B0 add #imm,Rn */
	r6 += r0;  /* 0C07F0B2 add Rm,Rn */
	r0 = 0x20000u; UPD(0x0C07F0B6u, 3);  /* 0C07F0B4 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C07F0B6 mov #imm,Rn */
	r10 = 0xC0BA480u; UPD(0x0C07F0BAu, 2);  /* 0C07F0B8 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C07F0BA mov Rm,Rn */
	W32(r15, r0); UPD(0x0C07F0BEu, 2);  /* 0C07F0BC mov.l Rm,@Rn */
	IF(0x0C07F0BEu); { u32 t_ = r10; PR = 0x0C07F0C2u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C07F0C2u); }  /* 0C07F0BE jsr @Rn */
L_0C07F0C2: BLKS(0x0C07F0C2u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07EF96u, 3); goto L_0C07EF96; }  /* 0C07F0C2 bra */
L_0C07F0D0: BLKS(0x0C07F0D0u);
	r10 = 0xC0A8CA0u; UPD(0x0C07F0D2u, 1);  /* 0C07F0D0 mov.l @(disp,pc),Rn */
	IF(0x0C07F0D2u); { u32 t_ = r10; PR = 0x0C07F0D6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07F0D6u); }  /* 0C07F0D2 jsr @Rn */
L_0C07F0D6: BLKS(0x0C07F0D6u);
	IF(0x0C07F0D6u); T = (s32)r0 >= 0;  /* 0C07F0D6 cmp/pz Rn */
	if (!T) { UPD(0x0C07F0ECu, 4); goto L_0C07F0EC; }  /* 0C07F0D8 bf */
L_0C07F0DA: BLKS(0x0C07F0DAu);
	r2 = 0xB4u; UPD(0x0C07F0DCu, 1);  /* 0C07F0DA mov.w @(disp,pc),Rn */
	IF(0x0C07F0DCu); MACL = r0 * r2;  /* 0C07F0DC mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C07F0E0u, 3);  /* 0C07F0DE mov.l @(disp,pc),Rn */
	IF(0x0C07F0E0u); r7 = MACL;  /* 0C07F0E0 sts macl,Rn */
	r7 += r6;  /* 0C07F0E2 add Rm,Rn */
	r3 = R32(r7 + 0xCu); UPD(0x0C07F0E6u, 3);  /* 0C07F0E4 mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C07F0E6 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C07F0EAu); MACL = r11 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C07F0F0u, 5); goto L_0C07F0F0; } UPD(0x0C07F0ECu, 2); goto L_0C07F0EC; }  /* 0C07F0E8 bt/s */
L_0C07F0EC: BLKS(0x0C07F0ECu);
	{ IF(0x0C07F0EEu); ; /* slot nop */ UPD(0x0C07ED50u, 3); goto L_0C07ED50; }  /* 0C07F0EC bra */
L_0C07F0F0: BLKS(0x0C07F0F0u);
	r5 = R32(r7 + 0x24u); UPD(0x0C07F0F2u, 1);  /* 0C07F0F0 mov.l @(disp,Rm),Rn */
	r4 = R32(r7 + 0x28u); UPD(0x0C07F0F4u, 1);  /* 0C07F0F2 mov.l @(disp,Rm),Rn */
	IF(0x0C07F0F4u); r11 = MACL;  /* 0C07F0F4 sts macl,Rn */
	r11 += r6;  /* 0C07F0F6 add Rm,Rn */
	r1 = R32(r11 + 0x2Cu); UPD(0x0C07F0FAu, 3);  /* 0C07F0F8 mov.l @(disp,Rm),Rn */
	r7 = R32(r11 + 0x30u); UPD(0x0C07F0FCu, 1);  /* 0C07F0FA mov.l @(disp,Rm),Rn */
	r5 += r1;  /* 0C07F0FC add Rm,Rn */
	r4 += r7;  /* 0C07F0FE add Rm,Rn */
	W32(r11 + 0x24u, r5); UPD(0x0C07F102u, 3);  /* 0C07F100 mov.l Rm,@(disp,Rn) */
	{ W32(r11 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07ECA8u, 3); goto L_0C07ECA8; }  /* 0C07F102 bra */
}

void blk_f_0C07F140(sh3_t *c)
{
	LOCALS;
L_0C07F140: BLKS(0x0C07F140u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07F142u, 1);  /* 0C07F140 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07F144u, 1);  /* 0C07F142 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07F146u, 1);  /* 0C07F144 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07F148u, 1);  /* 0C07F146 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07F14Au, 1);  /* 0C07F148 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07F14Cu, 1);  /* 0C07F14A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07F14Eu, 1);  /* 0C07F14C mov.l Rm,@-Rn */
	r4 = 0xC2ABAA4u; UPD(0x0C07F150u, 1);  /* 0C07F14E mov.l @(disp,pc),Rn */
	IF(0x0C07F150u); r15 -= 4; W32(r15, PR); UPD(0x0C07F152u, 1);  /* 0C07F150 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C07F154u, 1);  /* 0C07F152 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C07F154 add #imm,Rn */
	r8 = 0xC29D724u; UPD(0x0C07F158u, 2);  /* 0C07F156 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07F158 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C07F15Cu, 2);  /* 0C07F15A mov.w @Rm+,Rn */
	r7 = R32(r8); UPD(0x0C07F15Eu, 1);  /* 0C07F15C mov.l @Rm,Rn */
	IF(0x0C07F15Eu); r0 <<= 2;  /* 0C07F15E shll2 Rn */
	IF(0x0C07F160u); r6 = R32(r0 + r7); UPD(0x0C07F162u, 2);  /* 0C07F160 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r2 = v_; } UPD(0x0C07F164u, 1);  /* 0C07F162 mov.w @Rm+,Rn */
	r5 = 0xC297460u; UPD(0x0C07F166u, 1);  /* 0C07F164 mov.l @(disp,pc),Rn */
	r9 = 0xC2460ACu; UPD(0x0C07F168u, 1);  /* 0C07F166 mov.l @(disp,pc),Rn */
	r8 = 0xC069510u; UPD(0x0C07F16Au, 1);  /* 0C07F168 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C07F16Cu, 1);  /* 0C07F16A mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C07F16Eu, 1);  /* 0C07F16C mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C07F170u, 1);  /* 0C07F16E mov.w @Rm,Rn */
	r11 = 0xC2B03A2u; UPD(0x0C07F172u, 1);  /* 0C07F170 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C07F172 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C07F176u, 2);  /* 0C07F174 mov.l @(disp,pc),Rn */
	IF(0x0C07F176u); { u32 t_ = r8; PR = 0x0C07F17Au; W16(r11, r2); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C07F17Au); }  /* 0C07F176 jsr @Rn */
L_0C07F17A: BLKS(0x0C07F17Au);
	T = (r0 & r0) == 0;  /* 0C07F17A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07F1A0u, 4); goto L_0C07F1A0; } UPD(0x0C07F180u, 1); goto L_0C07F180; }  /* 0C07F17C bf/s */
L_0C07F180: BLKS(0x0C07F180u);
	r14 += 0xCu;  /* 0C07F180 add #imm,Rn */
	UPD(0x0C07F182u, 1);
L_0C07F182: BLKS(0x0C07F182u);
	r15 = r14;  /* 0C07F182 mov Rm,Rn */
	IF(0x0C07F184u); PR = R32(r15); r15 += 4; UPD(0x0C07F186u, 2);  /* 0C07F184 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07F188u, 1);  /* 0C07F186 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07F18Au, 1);  /* 0C07F188 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07F18Cu, 1);  /* 0C07F18A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07F18Eu, 1);  /* 0C07F18C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07F190u, 1);  /* 0C07F18E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07F192u, 1);  /* 0C07F190 mov.l @Rm+,Rn */
	IF(0x0C07F192u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07F192 rts */
L_0C07F1A0: BLKS(0x0C07F1A0u);
	r10 = 0xC071740u; UPD(0x0C07F1A2u, 1);  /* 0C07F1A0 mov.l @(disp,pc),Rn */
	IF(0x0C07F1A2u); { u32 t_ = r10; PR = 0x0C07F1A6u; r4 = 0xDu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C07F1A6u); }  /* 0C07F1A2 jsr @Rn */
L_0C07F1A6: BLKS(0x0C07F1A6u);
	T = (r0 & r0) == 0;  /* 0C07F1A6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07F180u, 4); goto L_0C07F180; } goto L_0C07F1AC; }  /* 0C07F1A8 bt/s */
L_0C07F1AC: BLKS(0x0C07F1ACu);
	r12 = 0xC28EDFCu; UPD(0x0C07F1AEu, 2);  /* 0C07F1AC mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C07F1B0u, 1);  /* 0C07F1AE mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C07F1B2u, 1);  /* 0C07F1B0 mov.w @Rm+,Rn */
	IF(0x0C07F1B2u); MACL = r10 * r8;  /* 0C07F1B2 mul.l Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C07F1B6u, 3);  /* 0C07F1B4 mov.w @Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C07F1B8u, 1);  /* 0C07F1B6 mov.l @(disp,pc),Rn */
	IF(0x0C07F1B8u); r8 = MACL;  /* 0C07F1B8 sts macl,Rn */
	r8 += r4;  /* 0C07F1BA add Rm,Rn */
	r0 = r3 & 0xFFFF;  /* 0C07F1BC extu.w Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C07F1C0u, 4);  /* 0C07F1BE mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C07F1C0 mov Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r11); UPD(0x0C07F1C4u, 2);  /* 0C07F1C2 mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C07F1C6u, 1);  /* 0C07F1C4 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C07F1C6 mov #imm,Rn */
	r7 = 0xC0A8A30u; UPD(0x0C07F1CAu, 2);  /* 0C07F1C8 mov.l @(disp,pc),Rn */
	IF(0x0C07F1CAu); W16(r0 + r8, r13); UPD(0x0C07F1CCu, 1);  /* 0C07F1CA mov.w Rm,@(r0,Rn) */
	r6 = 0xD3000104u; UPD(0x0C07F1CEu, 1);  /* 0C07F1CC mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C07F1CE add #imm,Rn */
	W32(r8, r6); UPD(0x0C07F1D2u, 2);  /* 0C07F1D0 mov.l Rm,@Rn */
	IF(0x0C07F1D2u); W16(r0 + r8, r13); UPD(0x0C07F1D4u, 1);  /* 0C07F1D2 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0xCu, r11); UPD(0x0C07F1D6u, 1);  /* 0C07F1D4 mov.l Rm,@(disp,Rn) */
	IF(0x0C07F1D6u); { u32 t_ = r7; PR = 0x0C07F1DAu; W32(r8 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C07F1DAu); }  /* 0C07F1D6 jsr @Rn */
L_0C07F1DA: BLKS(0x0C07F1DAu);
	r9 = 0xC0722E0u; UPD(0x0C07F1DCu, 1);  /* 0C07F1DA mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07F1DC mov Rm,Rn */
	r5 = 0x1600000u; UPD(0x0C07F1E0u, 2);  /* 0C07F1DE mov.l @(disp,pc),Rn */
	IF(0x0C07F1E0u); { u32 t_ = r9; PR = 0x0C07F1E4u; W32(r8 + 0x24u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C07F1E4u); }  /* 0C07F1E0 jsr @Rn */
L_0C07F1E4: BLKS(0x0C07F1E4u);
	r2 = 0xC0A9AE0u; UPD(0x0C07F1E6u, 1);  /* 0C07F1E4 mov.l @(disp,pc),Rn */
	r9 = 0x8Cu; UPD(0x0C07F1E8u, 1);  /* 0C07F1E6 mov.w @(disp,pc),Rn */
	IF(0x0C07F1E8u); { u32 t_ = r2; PR = 0x0C07F1ECu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C07F1ECu); }  /* 0C07F1E8 jsr @Rn */
L_0C07F1EC: BLKS(0x0C07F1ECu);
	r0 = 0xADu; UPD(0x0C07F1EEu, 1);  /* 0C07F1EC mov.w @(disp,pc),Rn */
	r4 = 0x13u;  /* 0C07F1EE mov #imm,Rn */
	r3 = 0xA8u; UPD(0x0C07F1F2u, 2);  /* 0C07F1F0 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C07F1F2 add Rm,Rn */
	IF(0x0C07F1F4u); W8(r0 + r8, r4); UPD(0x0C07F1F6u, 2);  /* 0C07F1F4 mov.b Rm,@(r0,Rn) */
	r3 += r8;  /* 0C07F1F6 add Rm,Rn */
	r3 += 0x1u;  /* 0C07F1F8 add #imm,Rn */
	r0 = 0xC0A9D30u; UPD(0x0C07F1FCu, 3);  /* 0C07F1FA mov.l @(disp,pc),Rn */
	W8(r3, r4); UPD(0x0C07F1FEu, 1);  /* 0C07F1FC mov.b Rm,@Rn */
	r6 = 0xC297460u; UPD(0x0C07F200u, 1);  /* 0C07F1FE mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07F200 mov Rm,Rn */
	r5 = R32(r6); UPD(0x0C07F204u, 2);  /* 0C07F202 mov.l @Rm,Rn */
	IF(0x0C07F204u); { u32 t_ = r0; PR = 0x0C07F208u; W32(r14 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C07F208u); }  /* 0C07F204 jsr @Rn */
L_0C07F208: BLKS(0x0C07F208u);
	r13 = 0x94u; UPD(0x0C07F20Au, 1);  /* 0C07F208 mov.w @(disp,pc),Rn */
	r0 = 0x90u; UPD(0x0C07F20Cu, 1);  /* 0C07F20A mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C07F20C add Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C07F210u, 2);  /* 0C07F20E mov.l @(disp,Rm),Rn */
	W32(r13, r11); UPD(0x0C07F212u, 1);  /* 0C07F210 mov.l Rm,@Rn */
	IF(0x0C07F212u); W32(r0 + r8, r11); UPD(0x0C07F214u, 1);  /* 0C07F212 mov.l Rm,@(r0,Rn) */
	r13 = r8;  /* 0C07F214 mov Rm,Rn */
	W32(r9, r11); UPD(0x0C07F218u, 2);  /* 0C07F216 mov.l Rm,@Rn */
	W32(r8 + 0x30u, r11); UPD(0x0C07F21Au, 1);  /* 0C07F218 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r11); UPD(0x0C07F21Cu, 1);  /* 0C07F21A mov.l Rm,@(disp,Rn) */
	W32(r14, r11); UPD(0x0C07F21Eu, 1);  /* 0C07F21C mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C07F220u, 1);  /* 0C07F21E mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C07F220 mov #imm,Rn */
	IF(0x0C07F222u); ;  /* 0C07F222 nop */
	UPD(0x0C07F224u, 2);
L_0C07F224: BLKS(0x0C07F224u);
	r9 = 0xC18C350u; UPD(0x0C07F226u, 1);  /* 0C07F224 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C07F228u, 1);  /* 0C07F226 mov.w @Rm+,Rn */
	r9 += r11;  /* 0C07F228 add Rm,Rn */
	r8 = 0xB4u; UPD(0x0C07F22Cu, 2);  /* 0C07F22A mov.w @(disp,pc),Rn */
	r9 += 0x4u;  /* 0C07F22C add #imm,Rn */
	IF(0x0C07F22Eu); MACL = r10 * r8;  /* 0C07F22E mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C07F232u, 4);  /* 0C07F230 mov.w @Rm,Rn */
	r11 += 0x14u;  /* 0C07F232 add #imm,Rn */
	r1 = 0xC286578u; UPD(0x0C07F236u, 2);  /* 0C07F234 mov.l @(disp,pc),Rn */
	IF(0x0C07F236u); r8 = MACL;  /* 0C07F236 sts macl,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C07F23Au, 2);  /* 0C07F238 mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C07F23A add Rm,Rn */
	IF(0x0C07F23Cu); r7 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C07F23Eu, 2);  /* 0C07F23C mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C07F23E add Rm,Rn */
	r8 += 0x7Cu;  /* 0C07F240 add #imm,Rn */
	W16(r8, r7); UPD(0x0C07F244u, 3);  /* 0C07F242 mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C07F244 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C07F248u, 2);  /* 0C07F246 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C07F248 add #imm,Rn */
	W16(r8, r5); UPD(0x0C07F24Cu, 2);  /* 0C07F24A mov.w Rm,@Rn */
	r7 = 0x0u;  /* 0C07F24C mov #imm,Rn */
	r3 = 0xC2460ACu; UPD(0x0C07F250u, 2);  /* 0C07F24E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C07F250 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C07F254u, 2);  /* 0C07F252 mov.w @Rm,Rn */
	r2 = R32(r9); UPD(0x0C07F256u, 1);  /* 0C07F254 mov.l @Rm,Rn */
	r6 = r4 & 0xFFFF;  /* 0C07F256 extu.w Rm,Rn */
	W32(r8, r2); UPD(0x0C07F25Au, 2);  /* 0C07F258 mov.l Rm,@Rn */
	r4 = r10;  /* 0C07F25A mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C07F25Eu, 2);  /* 0C07F25C mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A8A30u; UPD(0x0C07F260u, 1);  /* 0C07F25E mov.l @(disp,pc),Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C07F262u, 1);  /* 0C07F260 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C07F264u, 1);  /* 0C07F262 mov.l Rm,@(disp,Rn) */
	IF(0x0C07F264u); { u32 t_ = r5; PR = 0x0C07F268u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C07F268u); }  /* 0C07F264 jsr @Rn */
L_0C07F268: BLKS(0x0C07F268u);
	r2 = 0xC2B03A2u; UPD(0x0C07F26Au, 1);  /* 0C07F268 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C07F26A mov Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C07F26Eu, 2);  /* 0C07F26C mov.w @Rm,Rn */
	IF(0x0C07F26Eu); r3 >>= 2;  /* 0C07F26E shlr2 Rn */
	r4 = 0x86u; UPD(0x0C07F272u, 2);  /* 0C07F270 mov.w @(disp,pc),Rn */
	IF(0x0C07F272u); r3 >>= 2;  /* 0C07F272 shlr2 Rn */
	IF(0x0C07F274u); r3 >>= 2;  /* 0C07F274 shlr2 Rn */
	IF(0x0C07F276u); W16(r0 + r4, r3); UPD(0x0C07F278u, 3);  /* 0C07F276 mov.w Rm,@(r0,Rn) */
	r6 = R32(r13 + 0x24u); UPD(0x0C07F27Au, 1);  /* 0C07F278 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C07F27A mov Rm,Rn */
	r0 = R32(r13 + 0x28u); UPD(0x0C07F27Eu, 2);  /* 0C07F27C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C07F280u, 1);  /* 0C07F27E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C07F282u, 1);  /* 0C07F280 mov.l Rm,@(disp,Rn) */
	r7 = R32(r9 + 0xCu); UPD(0x0C07F284u, 1);  /* 0C07F282 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C07F286u, 1);  /* 0C07F284 mov.l Rm,@(disp,Rn) */
	r5 = R32(r9 + 0x10u); UPD(0x0C07F288u, 1);  /* 0C07F286 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A9AE0u; UPD(0x0C07F28Au, 1);  /* 0C07F288 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r5); UPD(0x0C07F28Cu, 1);  /* 0C07F28A mov.l Rm,@(disp,Rn) */
	r2 = 0xFFFA0000u; UPD(0x0C07F28Eu, 1);  /* 0C07F28C mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C07F28E add #imm,Rn */
	IF(0x0C07F290u); { u32 t_ = r10; PR = 0x0C07F294u; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C07F294u); }  /* 0C07F290 jsr @Rn */
L_0C07F294: BLKS(0x0C07F294u);
	r0 = 0xB0u; UPD(0x0C07F296u, 1);  /* 0C07F294 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C07F296 add #imm,Rn */
	IF(0x0C07F298u); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C07F29Au, 2);  /* 0C07F298 mov.b @(r0,Rm),Rn */
	r10 = 0xBu;  /* 0C07F29A mov #imm,Rn */
	IF(0x0C07F29Cu); W8(r0 + r8, r3); UPD(0x0C07F29Eu, 2);  /* 0C07F29C mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C07F2A0u, 1);  /* 0C07F29E mov.w @(disp,pc),Rn */
	r7 = 0xACu; UPD(0x0C07F2A2u, 1);  /* 0C07F2A0 mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C07F2A2 add Rm,Rn */
	r8 += r7;  /* 0C07F2A4 add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C07F2A8u, 3);  /* 0C07F2A6 mov.l @(disp,Rm),Rn */
	r7 += r13;  /* 0C07F2A8 add Rm,Rn */
	r7 += 0x1u;  /* 0C07F2AA add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C07F2AEu, 3);  /* 0C07F2AC mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C07F2AE add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C07F2B2u, 2);  /* 0C07F2B0 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C07F2B2 add #imm,Rn */
	W8(r0, r6); UPD(0x0C07F2B6u, 2);  /* 0C07F2B4 mov.b Rm,@Rn */
	W8(r8, r5); UPD(0x0C07F2B8u, 1);  /* 0C07F2B6 mov.b Rm,@Rn */
	r9 = R32(r14); UPD(0x0C07F2BAu, 1);  /* 0C07F2B8 mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C07F2BA add #imm,Rn */
	r2 = (u32)(s32)(s16)r9;  /* 0C07F2BC exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C07F2C0u, 3);  /* 0C07F2BE mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C07F2C2u, 1);  /* 0C07F2C0 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r10;  /* 0C07F2C2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07F224u, 4); goto L_0C07F224; } goto L_0C07F2C8; }  /* 0C07F2C4 bf/s */
L_0C07F2C8: BLKS(0x0C07F2C8u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07F182u, 4); goto L_0C07F182; }  /* 0C07F2C8 bra */
}

void blk_f_0C07F330(sh3_t *c)
{
	LOCALS;
L_0C07F330: BLKS(0x0C07F330u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07F332u, 1);  /* 0C07F330 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C07F332 exts.w Rm,Rn */
	r3 = 0xB4u; UPD(0x0C07F336u, 2);  /* 0C07F334 mov.w @(disp,pc),Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07F338u, 1);  /* 0C07F336 mov.l Rm,@-Rn */
	IF(0x0C07F338u); MACL = r4 * r3;  /* 0C07F338 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07F33Cu, 3);  /* 0C07F33A mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C07F33Eu, 1);  /* 0C07F33C mov.l @(disp,pc),Rn */
	IF(0x0C07F33Eu); r2 = MACL;  /* 0C07F33E sts macl,Rn */
	IF(0x0C07F340u); r15 -= 4; W32(r15, PR); UPD(0x0C07F342u, 2);  /* 0C07F340 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07F342 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07F346u, 2);  /* 0C07F344 mov.l @(disp,Rm),Rn */
	r0 = 0x7u;  /* 0C07F346 mov #imm,Rn */
	T = r2 > r0;  /* 0C07F348 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07F3C0u, 5); goto L_0C07F3C0; } goto L_0C07F34E; }  /* 0C07F34A bt/s */
L_0C07F34E: BLKS(0x0C07F34Eu);
	r0 = 0xC07F360u;  /* 0C07F34E mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07F350 add Rm,Rn */
	IF(0x0C07F352u); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07F354u, 4);  /* 0C07F352 mov.w @(r0,Rm),Rn */
	IF(0x0C07F354u); { u32 tv_ = (r5 + 0x0C07F358u); u32 t_ = PHYS(tv_); IF(0x0C07F356u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07F370u: goto L_0C07F370; case 0x0C07F380u: goto L_0C07F380; case 0x0C07F3D0u: goto L_0C07F3D0; case 0x0C07F400u: goto L_0C07F400; case 0x0C07F430u: goto L_0C07F430; case 0x0C07F460u: goto L_0C07F460; case 0x0C07F490u: goto L_0C07F490; default: JUMPD(tv_); } }  /* 0C07F354 braf Rn */
L_0C07F370: BLKS(0x0C07F370u);
	r6 = 0xC0A9A70u; UPD(0x0C07F372u, 1);  /* 0C07F370 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07F372 mov Rm,Rn */
	IF(0x0C07F374u); PR = R32(r15); r15 += 4; UPD(0x0C07F376u, 2);  /* 0C07F374 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07F378u, 1);  /* 0C07F376 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07F37Au, 1);  /* 0C07F378 mov.l @Rm+,Rn */
	IF(0x0C07F37Au); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9A70u: TAIL(blk_f_0C0A9A70); default: JUMPD(tv_); } }  /* 0C07F37A jmp @Rn */
L_0C07F380: BLKS(0x0C07F380u);
	r8 = 0xB4u; UPD(0x0C07F382u, 1);  /* 0C07F380 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07F382 add #imm,Rn */
	IF(0x0C07F384u); MACL = r4 * r8;  /* 0C07F384 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C07F388u, 4);  /* 0C07F386 mov.l @(disp,pc),Rn */
	IF(0x0C07F388u); r8 = MACL;  /* 0C07F388 sts macl,Rn */
	r8 += r0;  /* 0C07F38A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07F38Eu, 3);  /* 0C07F38C mov.w @(disp,pc),Rn */
	IF(0x0C07F38Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F390u, 1);  /* 0C07F38E mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C07F390 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C07F394u, 2);  /* 0C07F392 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07F394 add #imm,Rn */
	IF(0x0C07F396u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F398u, 2);  /* 0C07F396 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C07F398 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C07F39A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C07F39Eu, 3);  /* 0C07F39C mov.l Rm,@(disp,Rn) */
	r9 = 0xC0BD6F0u; UPD(0x0C07F3A0u, 1);  /* 0C07F39E mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C07F3A2u, 1);  /* 0C07F3A0 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07F3A4u, 1);  /* 0C07F3A2 mov.l @(disp,Rm),Rn */
	IF(0x0C07F3A4u); { u32 t_ = r9; PR = 0x0C07F3A8u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C07F3A8u); }  /* 0C07F3A4 jsr @Rn */
L_0C07F3A8: BLKS(0x0C07F3A8u);
	r4 = 0x20000u; UPD(0x0C07F3AAu, 1);  /* 0C07F3A8 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C07F3AA mov #imm,Rn */
	r0 = 0xC07CD80u; UPD(0x0C07F3AEu, 2);  /* 0C07F3AC mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C07F3AE mov #imm,Rn */
	W32(r15, r4); UPD(0x0C07F3B2u, 2);  /* 0C07F3B0 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C07F3B4u, 1);  /* 0C07F3B2 mov.l Rm,@(disp,Rn) */
	r4 = 0x3u;  /* 0C07F3B4 mov #imm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C07F3B8u, 2);  /* 0C07F3B6 mov.l @(disp,Rm),Rn */
	IF(0x0C07F3B8u); { u32 t_ = r0; PR = 0x0C07F3BCu; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C07F3BCu); }  /* 0C07F3B8 jsr @Rn */
L_0C07F3BC: BLKS(0x0C07F3BCu);
	W32(r8, r9); UPD(0x0C07F3BEu, 1);  /* 0C07F3BC mov.l Rm,@Rn */
L_0C07F3BE: BLKS(0x0C07F3BEu);
	r15 += 0x8u;  /* 0C07F3BE add #imm,Rn */
	UPD(0x0C07F3C0u, 1);
L_0C07F3C0: BLKS(0x0C07F3C0u);
	r15 = r14;  /* 0C07F3C0 mov Rm,Rn */
	IF(0x0C07F3C2u); PR = R32(r15); r15 += 4; UPD(0x0C07F3C4u, 2);  /* 0C07F3C2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07F3C6u, 1);  /* 0C07F3C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07F3C8u, 1);  /* 0C07F3C6 mov.l @Rm+,Rn */
	IF(0x0C07F3C8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07F3C8 rts */
L_0C07F3D0: BLKS(0x0C07F3D0u);
	r3 = 0xB4u; UPD(0x0C07F3D2u, 1);  /* 0C07F3D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07F3D2 add #imm,Rn */
	IF(0x0C07F3D4u); MACL = r4 * r3;  /* 0C07F3D4 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C07F3D8u, 4);  /* 0C07F3D6 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C07F3D8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C07F3DCu, 2);  /* 0C07F3DA mov.w @(disp,pc),Rn */
	IF(0x0C07F3DCu); r8 = MACL;  /* 0C07F3DC sts macl,Rn */
	r8 += r2;  /* 0C07F3DE add Rm,Rn */
	IF(0x0C07F3E0u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F3E2u, 3);  /* 0C07F3E0 mov.b @(r0,Rm),Rn */
	r9 = r7 & 0xFF;  /* 0C07F3E2 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C07F3E6u, 2);  /* 0C07F3E4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07F3E6 add #imm,Rn */
	IF(0x0C07F3E8u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F3EAu, 2);  /* 0C07F3E8 mov.b @(r0,Rm),Rn */
	r6 = r4 & 0xFF;  /* 0C07F3EA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C07F3EEu, 2);  /* 0C07F3EC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07F3F0u, 1);  /* 0C07F3EE mov.l @Rm,Rn */
L_0C07F3F0: BLKS(0x0C07F3F0u);
	r6 = R32(r8 + 0x24u); UPD(0x0C07F3F2u, 1);  /* 0C07F3F0 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C07F3F4u, 1);  /* 0C07F3F2 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BECB0u; UPD(0x0C07F3F6u, 1);  /* 0C07F3F4 mov.l @(disp,pc),Rn */
L_0C07F3F6: BLKS(0x0C07F3F6u);
	IF(0x0C07F3F6u); { u32 t_ = r0; PR = 0x0C07F3FAu; IF(0x0C07F3F8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C07F3FAu); }  /* 0C07F3F6 jsr @Rn */
L_0C07F3FA: BLKS(0x0C07F3FAu);
	r3 = 0x0u;  /* 0C07F3FA mov #imm,Rn */
	{ W32(r8, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C07F3BEu, 4); goto L_0C07F3BE; }  /* 0C07F3FC bra */
L_0C07F400: BLKS(0x0C07F400u);
	r8 = 0xB4u; UPD(0x0C07F402u, 1);  /* 0C07F400 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07F402 add #imm,Rn */
	IF(0x0C07F404u); MACL = r4 * r8;  /* 0C07F404 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C07F408u, 4);  /* 0C07F406 mov.l @(disp,pc),Rn */
	IF(0x0C07F408u); r8 = MACL;  /* 0C07F408 sts macl,Rn */
	r8 += r0;  /* 0C07F40A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07F40Eu, 3);  /* 0C07F40C mov.w @(disp,pc),Rn */
	IF(0x0C07F40Eu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F410u, 1);  /* 0C07F40E mov.b @(r0,Rm),Rn */
	r4 = r9 & 0xFF;  /* 0C07F410 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C07F414u, 2);  /* 0C07F412 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07F414 add #imm,Rn */
	IF(0x0C07F416u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F418u, 2);  /* 0C07F416 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C07F418 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07F41Cu, 2);  /* 0C07F41A mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07F41Eu, 1);  /* 0C07F41C mov.l @Rm,Rn */
	{ r5 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C07F3F0u, 3); goto L_0C07F3F0; }  /* 0C07F41E bra */
L_0C07F430: BLKS(0x0C07F430u);
	r9 = 0xB4u; UPD(0x0C07F432u, 1);  /* 0C07F430 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07F432 add #imm,Rn */
	IF(0x0C07F434u); MACL = r4 * r9;  /* 0C07F434 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C07F438u, 4);  /* 0C07F436 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C07F43Au, 1);  /* 0C07F438 mov.w @(disp,pc),Rn */
	IF(0x0C07F43Au); r8 = MACL;  /* 0C07F43A sts macl,Rn */
	r8 += r6;  /* 0C07F43C add Rm,Rn */
	IF(0x0C07F43Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F440u, 3);  /* 0C07F43E mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C07F440 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C07F444u, 2);  /* 0C07F442 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07F444 add #imm,Rn */
	IF(0x0C07F446u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F448u, 2);  /* 0C07F446 mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C07F448 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C07F44A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C07F44Eu, 3);  /* 0C07F44C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07F450u, 1);  /* 0C07F44E mov.l @Rm,Rn */
L_0C07F450: BLKS(0x0C07F450u);
	r6 = R32(r8 + 0x24u); UPD(0x0C07F452u, 1);  /* 0C07F450 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C07F454u, 1);  /* 0C07F452 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C07F3F6u, 3); goto L_0C07F3F6; }  /* 0C07F454 bra */
L_0C07F460: BLKS(0x0C07F460u);
	r8 = 0xB4u; UPD(0x0C07F462u, 1);  /* 0C07F460 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07F462 add #imm,Rn */
	IF(0x0C07F464u); MACL = r4 * r8;  /* 0C07F464 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C07F468u, 4);  /* 0C07F466 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C07F468 mov #imm,Rn */
	IF(0x0C07F46Au); r8 = MACL;  /* 0C07F46A sts macl,Rn */
	r8 += r0;  /* 0C07F46C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07F470u, 4);  /* 0C07F46E mov.w @(disp,pc),Rn */
	IF(0x0C07F470u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F472u, 1);  /* 0C07F470 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C07F472 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C07F476u, 2);  /* 0C07F474 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07F476 add #imm,Rn */
	IF(0x0C07F478u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F47Au, 2);  /* 0C07F478 mov.b @(r0,Rm),Rn */
	r4 = r7 & 0xFF;  /* 0C07F47A extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07F47Eu, 2);  /* 0C07F47C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C07F450u, 3); goto L_0C07F450; }  /* 0C07F47E bra */
L_0C07F490: BLKS(0x0C07F490u);
	r2 = 0xB4u; UPD(0x0C07F492u, 1);  /* 0C07F490 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07F492 add #imm,Rn */
	IF(0x0C07F494u); MACL = r4 * r2;  /* 0C07F494 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C07F498u, 4);  /* 0C07F496 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C07F49Au, 1);  /* 0C07F498 mov.w @(disp,pc),Rn */
	IF(0x0C07F49Au); r8 = MACL;  /* 0C07F49A sts macl,Rn */
	r8 += r7;  /* 0C07F49C add Rm,Rn */
	IF(0x0C07F49Eu); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F4A0u, 3);  /* 0C07F49E mov.b @(r0,Rm),Rn */
	r9 = r4 & 0xFF;  /* 0C07F4A0 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C07F4A4u, 2);  /* 0C07F4A2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07F4A4 add #imm,Rn */
	IF(0x0C07F4A6u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F4A8u, 2);  /* 0C07F4A6 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C07F4A8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07F4ACu, 2);  /* 0C07F4AA mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07F4AEu, 1);  /* 0C07F4AC mov.l @Rm,Rn */
	{ r5 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C07F3F0u, 3); goto L_0C07F3F0; }  /* 0C07F4AE bra */
}

void blk_f_0C07F4D0(sh3_t *c)
{
	LOCALS;
	goto L_0C07F4D0;
L_0C07F330: BLKS(0x0C07F330u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07F332u, 1);  /* 0C07F330 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C07F332 exts.w Rm,Rn */
	r3 = 0xB4u; UPD(0x0C07F336u, 2);  /* 0C07F334 mov.w @(disp,pc),Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07F338u, 1);  /* 0C07F336 mov.l Rm,@-Rn */
	IF(0x0C07F338u); MACL = r4 * r3;  /* 0C07F338 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07F33Cu, 3);  /* 0C07F33A mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C07F33Eu, 1);  /* 0C07F33C mov.l @(disp,pc),Rn */
	IF(0x0C07F33Eu); r2 = MACL;  /* 0C07F33E sts macl,Rn */
	IF(0x0C07F340u); r15 -= 4; W32(r15, PR); UPD(0x0C07F342u, 2);  /* 0C07F340 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07F342 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07F346u, 2);  /* 0C07F344 mov.l @(disp,Rm),Rn */
	r0 = 0x7u;  /* 0C07F346 mov #imm,Rn */
	T = r2 > r0;  /* 0C07F348 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07F3C0u, 5); goto L_0C07F3C0; } goto L_0C07F34E; }  /* 0C07F34A bt/s */
L_0C07F34E: BLKS(0x0C07F34Eu);
	r0 = 0xC07F360u;  /* 0C07F34E mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07F350 add Rm,Rn */
	IF(0x0C07F352u); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07F354u, 4);  /* 0C07F352 mov.w @(r0,Rm),Rn */
	IF(0x0C07F354u); { u32 tv_ = (r5 + 0x0C07F358u); u32 t_ = PHYS(tv_); IF(0x0C07F356u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07F370u: goto L_0C07F370; case 0x0C07F380u: goto L_0C07F380; case 0x0C07F3D0u: goto L_0C07F3D0; case 0x0C07F400u: goto L_0C07F400; case 0x0C07F430u: goto L_0C07F430; case 0x0C07F460u: goto L_0C07F460; case 0x0C07F490u: goto L_0C07F490; default: JUMPD(tv_); } }  /* 0C07F354 braf Rn */
L_0C07F370: BLKS(0x0C07F370u);
	r6 = 0xC0A9A70u; UPD(0x0C07F372u, 1);  /* 0C07F370 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07F372 mov Rm,Rn */
	IF(0x0C07F374u); PR = R32(r15); r15 += 4; UPD(0x0C07F376u, 2);  /* 0C07F374 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07F378u, 1);  /* 0C07F376 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07F37Au, 1);  /* 0C07F378 mov.l @Rm+,Rn */
	IF(0x0C07F37Au); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9A70u: TAIL(blk_f_0C0A9A70); default: JUMPD(tv_); } }  /* 0C07F37A jmp @Rn */
L_0C07F380: BLKS(0x0C07F380u);
	r8 = 0xB4u; UPD(0x0C07F382u, 1);  /* 0C07F380 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07F382 add #imm,Rn */
	IF(0x0C07F384u); MACL = r4 * r8;  /* 0C07F384 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C07F388u, 4);  /* 0C07F386 mov.l @(disp,pc),Rn */
	IF(0x0C07F388u); r8 = MACL;  /* 0C07F388 sts macl,Rn */
	r8 += r0;  /* 0C07F38A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07F38Eu, 3);  /* 0C07F38C mov.w @(disp,pc),Rn */
	IF(0x0C07F38Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F390u, 1);  /* 0C07F38E mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C07F390 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C07F394u, 2);  /* 0C07F392 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07F394 add #imm,Rn */
	IF(0x0C07F396u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F398u, 2);  /* 0C07F396 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C07F398 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C07F39A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C07F39Eu, 3);  /* 0C07F39C mov.l Rm,@(disp,Rn) */
	r9 = 0xC0BD6F0u; UPD(0x0C07F3A0u, 1);  /* 0C07F39E mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C07F3A2u, 1);  /* 0C07F3A0 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07F3A4u, 1);  /* 0C07F3A2 mov.l @(disp,Rm),Rn */
	IF(0x0C07F3A4u); { u32 t_ = r9; PR = 0x0C07F3A8u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C07F3A8u); }  /* 0C07F3A4 jsr @Rn */
L_0C07F3A8: BLKS(0x0C07F3A8u);
	r4 = 0x20000u; UPD(0x0C07F3AAu, 1);  /* 0C07F3A8 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C07F3AA mov #imm,Rn */
	r0 = 0xC07CD80u; UPD(0x0C07F3AEu, 2);  /* 0C07F3AC mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C07F3AE mov #imm,Rn */
	W32(r15, r4); UPD(0x0C07F3B2u, 2);  /* 0C07F3B0 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C07F3B4u, 1);  /* 0C07F3B2 mov.l Rm,@(disp,Rn) */
	r4 = 0x3u;  /* 0C07F3B4 mov #imm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C07F3B8u, 2);  /* 0C07F3B6 mov.l @(disp,Rm),Rn */
	IF(0x0C07F3B8u); { u32 t_ = r0; PR = 0x0C07F3BCu; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C07F3BCu); }  /* 0C07F3B8 jsr @Rn */
L_0C07F3BC: BLKS(0x0C07F3BCu);
	W32(r8, r9); UPD(0x0C07F3BEu, 1);  /* 0C07F3BC mov.l Rm,@Rn */
L_0C07F3BE: BLKS(0x0C07F3BEu);
	r15 += 0x8u;  /* 0C07F3BE add #imm,Rn */
	UPD(0x0C07F3C0u, 1);
L_0C07F3C0: BLKS(0x0C07F3C0u);
	r15 = r14;  /* 0C07F3C0 mov Rm,Rn */
	IF(0x0C07F3C2u); PR = R32(r15); r15 += 4; UPD(0x0C07F3C4u, 2);  /* 0C07F3C2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07F3C6u, 1);  /* 0C07F3C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07F3C8u, 1);  /* 0C07F3C6 mov.l @Rm+,Rn */
	IF(0x0C07F3C8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07F3C8 rts */
L_0C07F3D0: BLKS(0x0C07F3D0u);
	r3 = 0xB4u; UPD(0x0C07F3D2u, 1);  /* 0C07F3D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07F3D2 add #imm,Rn */
	IF(0x0C07F3D4u); MACL = r4 * r3;  /* 0C07F3D4 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C07F3D8u, 4);  /* 0C07F3D6 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C07F3D8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C07F3DCu, 2);  /* 0C07F3DA mov.w @(disp,pc),Rn */
	IF(0x0C07F3DCu); r8 = MACL;  /* 0C07F3DC sts macl,Rn */
	r8 += r2;  /* 0C07F3DE add Rm,Rn */
	IF(0x0C07F3E0u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F3E2u, 3);  /* 0C07F3E0 mov.b @(r0,Rm),Rn */
	r9 = r7 & 0xFF;  /* 0C07F3E2 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C07F3E6u, 2);  /* 0C07F3E4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07F3E6 add #imm,Rn */
	IF(0x0C07F3E8u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F3EAu, 2);  /* 0C07F3E8 mov.b @(r0,Rm),Rn */
	r6 = r4 & 0xFF;  /* 0C07F3EA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C07F3EEu, 2);  /* 0C07F3EC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07F3F0u, 1);  /* 0C07F3EE mov.l @Rm,Rn */
L_0C07F3F0: BLKS(0x0C07F3F0u);
	r6 = R32(r8 + 0x24u); UPD(0x0C07F3F2u, 1);  /* 0C07F3F0 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C07F3F4u, 1);  /* 0C07F3F2 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BECB0u; UPD(0x0C07F3F6u, 1);  /* 0C07F3F4 mov.l @(disp,pc),Rn */
L_0C07F3F6: BLKS(0x0C07F3F6u);
	IF(0x0C07F3F6u); { u32 t_ = r0; PR = 0x0C07F3FAu; IF(0x0C07F3F8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C07F3FAu); }  /* 0C07F3F6 jsr @Rn */
L_0C07F3FA: BLKS(0x0C07F3FAu);
	r3 = 0x0u;  /* 0C07F3FA mov #imm,Rn */
	{ W32(r8, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C07F3BEu, 4); goto L_0C07F3BE; }  /* 0C07F3FC bra */
L_0C07F400: BLKS(0x0C07F400u);
	r8 = 0xB4u; UPD(0x0C07F402u, 1);  /* 0C07F400 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07F402 add #imm,Rn */
	IF(0x0C07F404u); MACL = r4 * r8;  /* 0C07F404 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C07F408u, 4);  /* 0C07F406 mov.l @(disp,pc),Rn */
	IF(0x0C07F408u); r8 = MACL;  /* 0C07F408 sts macl,Rn */
	r8 += r0;  /* 0C07F40A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07F40Eu, 3);  /* 0C07F40C mov.w @(disp,pc),Rn */
	IF(0x0C07F40Eu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F410u, 1);  /* 0C07F40E mov.b @(r0,Rm),Rn */
	r4 = r9 & 0xFF;  /* 0C07F410 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C07F414u, 2);  /* 0C07F412 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07F414 add #imm,Rn */
	IF(0x0C07F416u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F418u, 2);  /* 0C07F416 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C07F418 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07F41Cu, 2);  /* 0C07F41A mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07F41Eu, 1);  /* 0C07F41C mov.l @Rm,Rn */
	{ r5 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C07F3F0u, 3); goto L_0C07F3F0; }  /* 0C07F41E bra */
L_0C07F430: BLKS(0x0C07F430u);
	r9 = 0xB4u; UPD(0x0C07F432u, 1);  /* 0C07F430 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07F432 add #imm,Rn */
	IF(0x0C07F434u); MACL = r4 * r9;  /* 0C07F434 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C07F438u, 4);  /* 0C07F436 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C07F43Au, 1);  /* 0C07F438 mov.w @(disp,pc),Rn */
	IF(0x0C07F43Au); r8 = MACL;  /* 0C07F43A sts macl,Rn */
	r8 += r6;  /* 0C07F43C add Rm,Rn */
	IF(0x0C07F43Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F440u, 3);  /* 0C07F43E mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C07F440 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C07F444u, 2);  /* 0C07F442 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07F444 add #imm,Rn */
	IF(0x0C07F446u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F448u, 2);  /* 0C07F446 mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C07F448 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C07F44A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C07F44Eu, 3);  /* 0C07F44C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07F450u, 1);  /* 0C07F44E mov.l @Rm,Rn */
L_0C07F450: BLKS(0x0C07F450u);
	r6 = R32(r8 + 0x24u); UPD(0x0C07F452u, 1);  /* 0C07F450 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C07F454u, 1);  /* 0C07F452 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C07F3F6u, 3); goto L_0C07F3F6; }  /* 0C07F454 bra */
L_0C07F460: BLKS(0x0C07F460u);
	r8 = 0xB4u; UPD(0x0C07F462u, 1);  /* 0C07F460 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07F462 add #imm,Rn */
	IF(0x0C07F464u); MACL = r4 * r8;  /* 0C07F464 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C07F468u, 4);  /* 0C07F466 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C07F468 mov #imm,Rn */
	IF(0x0C07F46Au); r8 = MACL;  /* 0C07F46A sts macl,Rn */
	r8 += r0;  /* 0C07F46C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07F470u, 4);  /* 0C07F46E mov.w @(disp,pc),Rn */
	IF(0x0C07F470u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F472u, 1);  /* 0C07F470 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C07F472 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C07F476u, 2);  /* 0C07F474 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07F476 add #imm,Rn */
	IF(0x0C07F478u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F47Au, 2);  /* 0C07F478 mov.b @(r0,Rm),Rn */
	r4 = r7 & 0xFF;  /* 0C07F47A extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07F47Eu, 2);  /* 0C07F47C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C07F450u, 3); goto L_0C07F450; }  /* 0C07F47E bra */
L_0C07F490: BLKS(0x0C07F490u);
	r2 = 0xB4u; UPD(0x0C07F492u, 1);  /* 0C07F490 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07F492 add #imm,Rn */
	IF(0x0C07F494u); MACL = r4 * r2;  /* 0C07F494 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C07F498u, 4);  /* 0C07F496 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C07F49Au, 1);  /* 0C07F498 mov.w @(disp,pc),Rn */
	IF(0x0C07F49Au); r8 = MACL;  /* 0C07F49A sts macl,Rn */
	r8 += r7;  /* 0C07F49C add Rm,Rn */
	IF(0x0C07F49Eu); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F4A0u, 3);  /* 0C07F49E mov.b @(r0,Rm),Rn */
	r9 = r4 & 0xFF;  /* 0C07F4A0 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C07F4A4u, 2);  /* 0C07F4A2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07F4A4 add #imm,Rn */
	IF(0x0C07F4A6u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F4A8u, 2);  /* 0C07F4A6 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C07F4A8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07F4ACu, 2);  /* 0C07F4AA mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07F4AEu, 1);  /* 0C07F4AC mov.l @Rm,Rn */
	{ r5 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C07F3F0u, 3); goto L_0C07F3F0; }  /* 0C07F4AE bra */
L_0C07F4D0: BLKS(0x0C07F4D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07F4D2u, 1);  /* 0C07F4D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07F4D4u, 1);  /* 0C07F4D2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07F4D6u, 1);  /* 0C07F4D4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07F4D8u, 1);  /* 0C07F4D6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07F4DAu, 1);  /* 0C07F4D8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07F4DA exts.w Rm,Rn */
	r3 = 0xB4u; UPD(0x0C07F4DEu, 2);  /* 0C07F4DC mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07F4E0u, 1);  /* 0C07F4DE mov.l Rm,@-Rn */
	IF(0x0C07F4E0u); MACL = r11 * r3;  /* 0C07F4E0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07F4E4u, 3);  /* 0C07F4E2 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C07F4E6u, 1);  /* 0C07F4E4 mov.l @(disp,pc),Rn */
	IF(0x0C07F4E6u); r2 = MACL;  /* 0C07F4E6 sts macl,Rn */
	IF(0x0C07F4E8u); r15 -= 4; W32(r15, PR); UPD(0x0C07F4EAu, 2);  /* 0C07F4E8 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07F4EA add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07F4EEu, 2);  /* 0C07F4EC mov.l @(disp,Rm),Rn */
	r0 = 0x7u;  /* 0C07F4EE mov #imm,Rn */
	T = r2 > r0;  /* 0C07F4F0 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07F570u, 5); goto L_0C07F570; } goto L_0C07F4F6; }  /* 0C07F4F2 bt/s */
L_0C07F4F6: BLKS(0x0C07F4F6u);
	r0 = 0xC07F508u;  /* 0C07F4F6 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07F4F8 add Rm,Rn */
	IF(0x0C07F4FAu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07F4FCu, 4);  /* 0C07F4FA mov.w @(r0,Rm),Rn */
	IF(0x0C07F4FCu); { u32 tv_ = (r4 + 0x0C07F500u); u32 t_ = PHYS(tv_); IF(0x0C07F4FEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07F520u: goto L_0C07F520; case 0x0C07F540u: goto L_0C07F540; case 0x0C07F5A0u: goto L_0C07F5A0; case 0x0C07F5E0u: goto L_0C07F5E0; case 0x0C07F630u: goto L_0C07F630; case 0x0C07F6D0u: goto L_0C07F6D0; case 0x0C07F790u: goto L_0C07F790; default: JUMPD(tv_); } }  /* 0C07F4FC braf Rn */
L_0C07F520: BLKS(0x0C07F520u);
	r8 = 0xC0A9CB0u; UPD(0x0C07F522u, 1);  /* 0C07F520 mov.l @(disp,pc),Rn */
	IF(0x0C07F522u); { u32 t_ = r8; PR = 0x0C07F526u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C07F526u); }  /* 0C07F522 jsr @Rn */
L_0C07F526: BLKS(0x0C07F526u);
	r1 = 0xC0A9B40u; UPD(0x0C07F528u, 1);  /* 0C07F526 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07F528 mov Rm,Rn */
	UPD(0x0C07F52Au, 1);
L_0C07F52A: BLKS(0x0C07F52Au);
	r15 = r14;  /* 0C07F52A mov Rm,Rn */
	IF(0x0C07F52Cu); PR = R32(r15); r15 += 4; UPD(0x0C07F52Eu, 2);  /* 0C07F52C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07F530u, 1);  /* 0C07F52E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07F532u, 1);  /* 0C07F530 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07F534u, 1);  /* 0C07F532 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07F536u, 1);  /* 0C07F534 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07F538u, 1);  /* 0C07F536 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07F53Au, 1);  /* 0C07F538 mov.l @Rm+,Rn */
	IF(0x0C07F53Au); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C069B90u: TAIL(blk_f_0C069B90); case 0x0C07F330u: goto L_0C07F330; default: JUMPD(tv_); } }  /* 0C07F53A jmp @Rn */
L_0C07F540: BLKS(0x0C07F540u);
	r9 = 0xC0A8CA0u; UPD(0x0C07F542u, 1);  /* 0C07F540 mov.l @(disp,pc),Rn */
	IF(0x0C07F542u); { u32 t_ = r9; PR = 0x0C07F546u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07F546u); }  /* 0C07F542 jsr @Rn */
L_0C07F546: BLKS(0x0C07F546u);
	IF(0x0C07F546u); T = (s32)r0 >= 0;  /* 0C07F546 cmp/pz Rn */
	if (!T) { UPD(0x0C07F590u, 4); goto L_0C07F590; }  /* 0C07F548 bf */
L_0C07F54A: BLKS(0x0C07F54Au);
	r2 = 0xB4u; UPD(0x0C07F54Cu, 1);  /* 0C07F54A mov.w @(disp,pc),Rn */
	IF(0x0C07F54Cu); MACL = r0 * r2;  /* 0C07F54C mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C07F550u, 3);  /* 0C07F54E mov.l @(disp,pc),Rn */
	IF(0x0C07F550u); r7 = MACL;  /* 0C07F550 sts macl,Rn */
	r7 += r6;  /* 0C07F552 add Rm,Rn */
	r5 = R32(r7 + 0xCu); UPD(0x0C07F556u, 3);  /* 0C07F554 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C07F556 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C07F55Au); MACL = r11 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C07F590u, 5); goto L_0C07F590; } goto L_0C07F55C; }  /* 0C07F558 bf/s */
L_0C07F55C: BLKS(0x0C07F55Cu);
	IF(0x0C07F55Cu); r10 = MACL;  /* 0C07F55C sts macl,Rn */
	r10 += r6;  /* 0C07F55E add Rm,Rn */
	r11 = R32(r7 + 0x24u); UPD(0x0C07F562u, 5);  /* 0C07F560 mov.l @(disp,Rm),Rn */
	r6 = R32(r7 + 0x28u); UPD(0x0C07F564u, 1);  /* 0C07F562 mov.l @(disp,Rm),Rn */
	r12 = R32(r10 + 0x2Cu); UPD(0x0C07F566u, 1);  /* 0C07F564 mov.l @(disp,Rm),Rn */
	r1 = R32(r10 + 0x30u); UPD(0x0C07F568u, 1);  /* 0C07F566 mov.l @(disp,Rm),Rn */
	r11 += r12;  /* 0C07F568 add Rm,Rn */
	r6 += r1;  /* 0C07F56A add Rm,Rn */
	W32(r10 + 0x24u, r11); UPD(0x0C07F56Eu, 3);  /* 0C07F56C mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x28u, r6); UPD(0x0C07F570u, 1);  /* 0C07F56E mov.l Rm,@(disp,Rn) */
L_0C07F570: BLKS(0x0C07F570u);
	r15 = r14;  /* 0C07F570 mov Rm,Rn */
	IF(0x0C07F572u); PR = R32(r15); r15 += 4; UPD(0x0C07F574u, 2);  /* 0C07F572 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07F576u, 1);  /* 0C07F574 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07F578u, 1);  /* 0C07F576 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07F57Au, 1);  /* 0C07F578 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07F57Cu, 1);  /* 0C07F57A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07F57Eu, 1);  /* 0C07F57C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07F580u, 1);  /* 0C07F57E mov.l @Rm+,Rn */
	IF(0x0C07F580u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07F580 rts */
L_0C07F590: BLKS(0x0C07F590u);
	r1 = 0xC07F330u; UPD(0x0C07F592u, 1);  /* 0C07F590 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C07F52Au, 3); goto L_0C07F52A; }  /* 0C07F592 bra */
L_0C07F5A0: BLKS(0x0C07F5A0u);
	r13 = 0xC0A8CA0u; UPD(0x0C07F5A2u, 1);  /* 0C07F5A0 mov.l @(disp,pc),Rn */
	IF(0x0C07F5A2u); { u32 t_ = r13; PR = 0x0C07F5A6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07F5A6u); }  /* 0C07F5A2 jsr @Rn */
L_0C07F5A6: BLKS(0x0C07F5A6u);
	IF(0x0C07F5A6u); T = (s32)r0 >= 0;  /* 0C07F5A6 cmp/pz Rn */
	if (!T) { UPD(0x0C07F590u, 4); goto L_0C07F590; }  /* 0C07F5A8 bf */
L_0C07F5AA: BLKS(0x0C07F5AAu);
	r2 = 0xB4u; UPD(0x0C07F5ACu, 1);  /* 0C07F5AA mov.w @(disp,pc),Rn */
	IF(0x0C07F5ACu); MACL = r0 * r2;  /* 0C07F5AC mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C07F5B0u, 3);  /* 0C07F5AE mov.l @(disp,pc),Rn */
	IF(0x0C07F5B0u); r7 = MACL;  /* 0C07F5B0 sts macl,Rn */
	r7 += r6;  /* 0C07F5B2 add Rm,Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C07F5B6u, 3);  /* 0C07F5B4 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C07F5B6 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C07F5BAu); MACL = r11 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C07F590u, 5); goto L_0C07F590; } goto L_0C07F5BC; }  /* 0C07F5B8 bf/s */
L_0C07F5BC: BLKS(0x0C07F5BCu);
	r8 = R32(r7 + 0x24u); UPD(0x0C07F5BEu, 3);  /* 0C07F5BC mov.l @(disp,Rm),Rn */
	IF(0x0C07F5BEu); r4 = MACL;  /* 0C07F5BE sts macl,Rn */
	r4 += r6;  /* 0C07F5C0 add Rm,Rn */
	r3 = R32(r7 + 0x28u); UPD(0x0C07F5C4u, 3);  /* 0C07F5C2 mov.l @(disp,Rm),Rn */
	r0 = R32(r4 + 0xCu); UPD(0x0C07F5C6u, 1);  /* 0C07F5C4 mov.l @(disp,Rm),Rn */
	r9 = R32(r4 + 0x2Cu); UPD(0x0C07F5C8u, 1);  /* 0C07F5C6 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C07F5C8 add #imm,Rn */
	r7 = R32(r4 + 0x30u); UPD(0x0C07F5CCu, 2);  /* 0C07F5CA mov.l @(disp,Rm),Rn */
	r8 += r9;  /* 0C07F5CC add Rm,Rn */
	r3 += r7;  /* 0C07F5CE add Rm,Rn */
	r0 &= 0x7u;  /* 0C07F5D0 and #imm,r0 */
	W32(r4 + 0x24u, r8); UPD(0x0C07F5D4u, 4);  /* 0C07F5D2 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x28u, r3); UPD(0x0C07F5D6u, 1);  /* 0C07F5D4 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0xCu, r0); UPD(0x0C07F5D8u, 1);  /* 0C07F5D6 mov.l Rm,@(disp,Rn) */
L_0C07F5D8: BLKS(0x0C07F5D8u);
	r1 = 0xC0A8AE0u; UPD(0x0C07F5DAu, 1);  /* 0C07F5D8 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C07F52Au, 3); goto L_0C07F52A; }  /* 0C07F5DA bra */
L_0C07F5E0: BLKS(0x0C07F5E0u);
	r10 = 0xC0A8CA0u; UPD(0x0C07F5E2u, 1);  /* 0C07F5E0 mov.l @(disp,pc),Rn */
	IF(0x0C07F5E2u); { u32 t_ = r10; PR = 0x0C07F5E6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07F5E6u); }  /* 0C07F5E2 jsr @Rn */
L_0C07F5E6: BLKS(0x0C07F5E6u);
	IF(0x0C07F5E6u); T = (s32)r0 >= 0;  /* 0C07F5E6 cmp/pz Rn */
	if (!T) { UPD(0x0C07F590u, 4); goto L_0C07F590; }  /* 0C07F5E8 bf */
L_0C07F5EA: BLKS(0x0C07F5EAu);
	r10 = 0xB4u; UPD(0x0C07F5ECu, 1);  /* 0C07F5EA mov.w @(disp,pc),Rn */
	IF(0x0C07F5ECu); MACL = r11 * r10;  /* 0C07F5EC mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C07F5F0u, 3);  /* 0C07F5EE mov.l @(disp,pc),Rn */
	IF(0x0C07F5F0u); r12 = MACL;  /* 0C07F5F0 sts macl,Rn */
	IF(0x0C07F5F2u); MACL = r0 * r10;  /* 0C07F5F2 mul.l Rm,Rn */
	r12 += r9;  /* 0C07F5F4 add Rm,Rn */
	r7 = R32(r12 + 0x2Cu); UPD(0x0C07F5F8u, 5);  /* 0C07F5F6 mov.l @(disp,Rm),Rn */
	IF(0x0C07F5F8u); r4 = MACL;  /* 0C07F5F8 sts macl,Rn */
	r4 += r9;  /* 0C07F5FA add Rm,Rn */
	r3 = R32(r4 + 0x24u); UPD(0x0C07F5FEu, 3);  /* 0C07F5FC mov.l @(disp,Rm),Rn */
	r0 = R32(r4 + 0x28u); UPD(0x0C07F600u, 1);  /* 0C07F5FE mov.l @(disp,Rm),Rn */
	r3 += r7;  /* 0C07F600 add Rm,Rn */
	r1 = R32(r12 + 0x30u); UPD(0x0C07F604u, 2);  /* 0C07F602 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C07F604 mov Rm,Rn */
	r8 = 0xC069BF0u; UPD(0x0C07F608u, 2);  /* 0C07F606 mov.l @(disp,pc),Rn */
	r0 += r1;  /* 0C07F608 add Rm,Rn */
	r13 = 0xC068F00u; UPD(0x0C07F60Cu, 2);  /* 0C07F60A mov.l @(disp,pc),Rn */
	W32(r12 + 0x24u, r3); UPD(0x0C07F60Eu, 1);  /* 0C07F60C mov.l Rm,@(disp,Rn) */
	IF(0x0C07F60Eu); { u32 t_ = r8; PR = 0x0C07F612u; W32(r12 + 0x28u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C07F612u); }  /* 0C07F60E jsr @Rn */
L_0C07F612: BLKS(0x0C07F612u);
	r5 = 0x2u;  /* 0C07F612 mov #imm,Rn */
	IF(0x0C07F614u); { u32 t_ = r13; PR = 0x0C07F618u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C07F618u); }  /* 0C07F614 jsr @Rn */
L_0C07F618: BLKS(0x0C07F618u);
	r2 = 0x86u; UPD(0x0C07F61Au, 1);  /* 0C07F618 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C07F61A mov Rm,Rn */
	IF(0x0C07F61Cu); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07F61Eu, 2);  /* 0C07F61C mov.w @(r0,Rm),Rn */
	r6 = 0x1Fu;  /* 0C07F61E mov #imm,Rn */
	r5 += 0x8u;  /* 0C07F620 add #imm,Rn */
	IF(0x0C07F622u); r5 >>= 2;  /* 0C07F622 shlr2 Rn */
	IF(0x0C07F624u); r5 >>= 2;  /* 0C07F624 shlr2 Rn */
	r5 &= r6;  /* 0C07F626 and Rm,Rn */
	{ W32(r12 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07F5D8u, 8); goto L_0C07F5D8; }  /* 0C07F628 bra */
L_0C07F630: BLKS(0x0C07F630u);
	r12 = 0xC0A8CA0u; UPD(0x0C07F632u, 1);  /* 0C07F630 mov.l @(disp,pc),Rn */
	IF(0x0C07F632u); { u32 t_ = r12; PR = 0x0C07F636u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07F636u); }  /* 0C07F632 jsr @Rn */
L_0C07F636: BLKS(0x0C07F636u);
	IF(0x0C07F636u); T = (s32)r0 >= 0;  /* 0C07F636 cmp/pz Rn */
	if (!T) { UPD(0x0C07F590u, 4); goto L_0C07F590; }  /* 0C07F638 bf */
L_0C07F63A: BLKS(0x0C07F63Au);
	r6 = 0xB4u; UPD(0x0C07F63Cu, 1);  /* 0C07F63A mov.w @(disp,pc),Rn */
	IF(0x0C07F63Cu); MACL = r11 * r6;  /* 0C07F63C mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C07F640u, 3);  /* 0C07F63E mov.l @(disp,pc),Rn */
	IF(0x0C07F640u); r13 = MACL;  /* 0C07F640 sts macl,Rn */
	r13 += r8;  /* 0C07F642 add Rm,Rn */
	IF(0x0C07F644u); MACL = r0 * r6;  /* 0C07F644 mul.l Rm,Rn */
	r5 = R32(r13); UPD(0x0C07F648u, 5);  /* 0C07F646 mov.l @Rm,Rn */
	r4 = r13;  /* 0C07F648 mov Rm,Rn */
	r9 = 0xFFFFFEFFu; UPD(0x0C07F64Cu, 2);  /* 0C07F64A mov.w @(disp,pc),Rn */
	r6 += 0x4Cu;  /* 0C07F64C add #imm,Rn */
	r5 &= r9;  /* 0C07F64E and Rm,Rn */
	r3 = 0x84u; UPD(0x0C07F652u, 3);  /* 0C07F650 mov.w @(disp,pc),Rn */
	IF(0x0C07F652u); r9 = MACL;  /* 0C07F652 sts macl,Rn */
	r9 += r8;  /* 0C07F654 add Rm,Rn */
	r4 += r3;  /* 0C07F656 add Rm,Rn */
	r7 = R32(r9); UPD(0x0C07F65Au, 4);  /* 0C07F658 mov.l @Rm,Rn */
	r3 += r9;  /* 0C07F65A add Rm,Rn */
	r3 += 0x2u;  /* 0C07F65C add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C07F660u, 3);  /* 0C07F65E mov.w @Rm,Rn */
	r7 &= r6;  /* 0C07F660 and Rm,Rn */
	r5 |= r7;  /* 0C07F662 or Rm,Rn */
	r4 += 0x2u;  /* 0C07F664 add #imm,Rn */
	r12 = 0xC069B20u; UPD(0x0C07F668u, 4);  /* 0C07F666 mov.l @(disp,pc),Rn */
	r10 = r0;  /* 0C07F668 mov Rm,Rn */
	r8 = 0xE0000u; UPD(0x0C07F66Cu, 2);  /* 0C07F66A mov.l @(disp,pc),Rn */
	W32(r13, r5); UPD(0x0C07F66Eu, 1);  /* 0C07F66C mov.l Rm,@Rn */
	W16(r4, r0); UPD(0x0C07F670u, 1);  /* 0C07F66E mov.w Rm,@Rn */
	r5 = r8;  /* 0C07F670 mov Rm,Rn */
	IF(0x0C07F672u); { u32 t_ = r12; PR = 0x0C07F676u; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07F676u); }  /* 0C07F672 jsr @Rn */
L_0C07F676: BLKS(0x0C07F676u);
	r5 = r8;  /* 0C07F676 mov Rm,Rn */
	r2 = R32(r9 + 0x24u); UPD(0x0C07F67Au, 2);  /* 0C07F678 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C07F67A mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C07F67Eu, 2);  /* 0C07F67C mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C07F67E add Rm,Rn */
	IF(0x0C07F680u); { u32 t_ = r8; PR = 0x0C07F684u; W32(r13 + 0x24u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07F684u); }  /* 0C07F680 jsr @Rn */
L_0C07F684: BLKS(0x0C07F684u);
	r6 = R32(r9 + 0x28u); UPD(0x0C07F686u, 1);  /* 0C07F684 mov.l @(disp,Rm),Rn */
	r5 = R32(r9 + 0xCu); UPD(0x0C07F688u, 1);  /* 0C07F686 mov.l @(disp,Rm),Rn */
	r6 += r0;  /* 0C07F688 add Rm,Rn */
	W32(r13 + 0x28u, r6); UPD(0x0C07F68Cu, 2);  /* 0C07F68A mov.l Rm,@(disp,Rn) */
	{ W32(r13 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07F5D8u, 3); goto L_0C07F5D8; }  /* 0C07F68C bra */
L_0C07F6D0: BLKS(0x0C07F6D0u);
	r13 = 0xC0A8CA0u; UPD(0x0C07F6D2u, 1);  /* 0C07F6D0 mov.l @(disp,pc),Rn */
	IF(0x0C07F6D2u); { u32 t_ = r13; PR = 0x0C07F6D6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07F6D6u); }  /* 0C07F6D2 jsr @Rn */
L_0C07F6D6: BLKS(0x0C07F6D6u);
	IF(0x0C07F6D6u); T = (s32)r0 >= 0;  /* 0C07F6D6 cmp/pz Rn */
	if (!T) { UPD(0x0C07F7ACu, 4); goto L_0C07F7AC; }  /* 0C07F6D8 bf */
L_0C07F6DA: BLKS(0x0C07F6DAu);
	r12 = 0xB4u; UPD(0x0C07F6DCu, 1);  /* 0C07F6DA mov.w @(disp,pc),Rn */
	IF(0x0C07F6DCu); MACL = r11 * r12;  /* 0C07F6DC mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C07F6E0u, 3);  /* 0C07F6DE mov.l @(disp,pc),Rn */
	IF(0x0C07F6E0u); r9 = MACL;  /* 0C07F6E0 sts macl,Rn */
	r9 += r2;  /* 0C07F6E2 add Rm,Rn */
	IF(0x0C07F6E4u); MACL = r0 * r12;  /* 0C07F6E4 mul.l Rm,Rn */
	r10 = R32(r9); UPD(0x0C07F6E8u, 5);  /* 0C07F6E6 mov.l @Rm,Rn */
	r8 = 0xFFFFFEFFu; UPD(0x0C07F6EAu, 1);  /* 0C07F6E8 mov.w @(disp,pc),Rn */
	r12 += 0x4Cu;  /* 0C07F6EA add #imm,Rn */
	r10 &= r8;  /* 0C07F6EC and Rm,Rn */
	IF(0x0C07F6EEu); r8 = MACL;  /* 0C07F6EE sts macl,Rn */
	r8 += r2;  /* 0C07F6F0 add Rm,Rn */
	r13 = R32(r8); UPD(0x0C07F6F4u, 5);  /* 0C07F6F2 mov.l @Rm,Rn */
	r13 &= r12;  /* 0C07F6F4 and Rm,Rn */
	r10 |= r13;  /* 0C07F6F6 or Rm,Rn */
	W32(r9, r10); UPD(0x0C07F6FAu, 3);  /* 0C07F6F8 mov.l Rm,@Rn */
	r6 = 0x84u; UPD(0x0C07F6FCu, 1);  /* 0C07F6FA mov.w @(disp,pc),Rn */
	r10 = r9;  /* 0C07F6FC mov Rm,Rn */
	r10 += r6;  /* 0C07F6FE add Rm,Rn */
	r6 += r8;  /* 0C07F700 add Rm,Rn */
	r6 += 0x2u;  /* 0C07F702 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C07F706u, 5);  /* 0C07F704 mov.w @Rm,Rn */
	r10 += 0x2u;  /* 0C07F706 add #imm,Rn */
	r7 = 0xC069B20u; UPD(0x0C07F70Au, 2);  /* 0C07F708 mov.l @(disp,pc),Rn */
	r12 = r5;  /* 0C07F70A mov Rm,Rn */
	W16(r10, r5); UPD(0x0C07F70Eu, 2);  /* 0C07F70C mov.w Rm,@Rn */
	r4 = r5;  /* 0C07F70E mov Rm,Rn */
	r13 = 0x80000u; UPD(0x0C07F712u, 2);  /* 0C07F710 mov.l @(disp,pc),Rn */
	IF(0x0C07F712u); { u32 t_ = r7; PR = 0x0C07F716u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07F716u); }  /* 0C07F712 jsr @Rn */
L_0C07F716: BLKS(0x0C07F716u);
	r3 = R32(r8 + 0x24u); UPD(0x0C07F718u, 1);  /* 0C07F716 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C07F718 mov Rm,Rn */
	r1 = 0xC069AF0u; UPD(0x0C07F71Cu, 2);  /* 0C07F71A mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C07F71C add Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C07F720u, 2);  /* 0C07F71E mov.l Rm,@(disp,Rn) */
	IF(0x0C07F720u); { u32 t_ = r1; PR = 0x0C07F724u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07F724u); }  /* 0C07F720 jsr @Rn */
L_0C07F724: BLKS(0x0C07F724u);
	r4 = R32(r8 + 0x28u); UPD(0x0C07F726u, 1);  /* 0C07F724 mov.l @(disp,Rm),Rn */
	r2 = 0xC0A8AE0u; UPD(0x0C07F728u, 1);  /* 0C07F726 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C07F728 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C07F72Cu, 2);  /* 0C07F72A mov.l @(disp,Rm),Rn */
	W32(r9 + 0x28u, r4); UPD(0x0C07F72Eu, 1);  /* 0C07F72C mov.l Rm,@(disp,Rn) */
	r12 = 0xC0BC1B0u; UPD(0x0C07F730u, 1);  /* 0C07F72E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07F730 mov Rm,Rn */
	IF(0x0C07F732u); { u32 t_ = r2; PR = 0x0C07F736u; W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C07F736u); }  /* 0C07F732 jsr @Rn */
L_0C07F736: BLKS(0x0C07F736u);
	r4 = r11;  /* 0C07F736 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C07F738 mov #imm,Rn */
	IF(0x0C07F73Au); { u32 t_ = r12; PR = 0x0C07F73Eu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C07F73Eu); }  /* 0C07F73A jsr @Rn */
L_0C07F73E: BLKS(0x0C07F73Eu);
	T = (r0 & r0) == 0;  /* 0C07F73E tst Rm,Rn */
	if (T) { UPD(0x0C07F818u, 4); goto L_0C07F818; }  /* 0C07F740 bt */
L_0C07F742: BLKS(0x0C07F742u);
	r0 = 0xA9u; UPD(0x0C07F744u, 1);  /* 0C07F742 mov.w @(disp,pc),Rn */
	r12 = 0xC0BBF10u; UPD(0x0C07F746u, 1);  /* 0C07F744 mov.l @(disp,pc),Rn */
	IF(0x0C07F746u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07F748u, 1);  /* 0C07F746 mov.b @(r0,Rm),Rn */
	r6 = r4 & 0xFF;  /* 0C07F748 extu.b Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C07F74Cu, 2);  /* 0C07F74A mov.l @(disp,Rm),Rn */
	IF(0x0C07F74Cu); { u32 t_ = r12; PR = 0x0C07F750u; r5 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C07F750u); }  /* 0C07F74C jsr @Rn */
L_0C07F750: BLKS(0x0C07F750u);
	T = (r0 & r0) == 0;  /* 0C07F750 tst Rm,Rn */
	if (T) { UPD(0x0C07F818u, 4); goto L_0C07F818; }  /* 0C07F752 bt */
L_0C07F754: BLKS(0x0C07F754u);
	r5 = r13;  /* 0C07F754 mov Rm,Rn */
	r3 = 0xC069B20u; UPD(0x0C07F758u, 2);  /* 0C07F756 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)R16(r10); UPD(0x0C07F75Au, 1);  /* 0C07F758 mov.w @Rm,Rn */
	IF(0x0C07F75Au); { u32 t_ = r3; PR = 0x0C07F75Eu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07F75Eu); }  /* 0C07F75A jsr @Rn */
L_0C07F75E: BLKS(0x0C07F75Eu);
	r12 = R32(r9 + 0x24u); UPD(0x0C07F760u, 1);  /* 0C07F75E mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C07F760 mov Rm,Rn */
	r12 += r0;  /* 0C07F762 add Rm,Rn */
	r1 = 0xC069AF0u; UPD(0x0C07F766u, 3);  /* 0C07F764 mov.l @(disp,pc),Rn */
	r5 = r13;  /* 0C07F766 mov Rm,Rn */
	r0 = 0x20000u; UPD(0x0C07F76Au, 2);  /* 0C07F768 mov.l @(disp,pc),Rn */
	IF(0x0C07F76Au); { u32 t_ = r1; PR = 0x0C07F76Eu; r12 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07F76Eu); }  /* 0C07F76A jsr @Rn */
L_0C07F76E: BLKS(0x0C07F76Eu);
	r6 = R32(r9 + 0x28u); UPD(0x0C07F770u, 1);  /* 0C07F76E mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07F770 add #imm,Rn */
	r9 = 0x30000u; UPD(0x0C07F774u, 2);  /* 0C07F772 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C07F774 add Rm,Rn */
	W32(r15, r9); UPD(0x0C07F778u, 2);  /* 0C07F776 mov.l Rm,@Rn */
	r4 = 0x7u;  /* 0C07F778 mov #imm,Rn */
	r0 = 0xC0BAD60u; UPD(0x0C07F77Cu, 2);  /* 0C07F77A mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C07F77C mov Rm,Rn */
	r7 = r8;  /* 0C07F77E mov Rm,Rn */
	UPD(0x0C07F780u, 2);
L_0C07F780: BLKS(0x0C07F780u);
	IF(0x0C07F780u); { u32 t_ = r0; PR = 0x0C07F784u; IF(0x0C07F782u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C07F784u); }  /* 0C07F780 jsr @Rn */
L_0C07F784: BLKS(0x0C07F784u);
	r1 = 0xC069B90u; UPD(0x0C07F786u, 1);  /* 0C07F784 mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C07F786 add #imm,Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C07F52Au, 4); goto L_0C07F52A; }  /* 0C07F788 bra */
L_0C07F790: BLKS(0x0C07F790u);
	r10 = 0xC0A8CA0u; UPD(0x0C07F792u, 1);  /* 0C07F790 mov.l @(disp,pc),Rn */
	IF(0x0C07F792u); { u32 t_ = r10; PR = 0x0C07F796u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07F796u); }  /* 0C07F792 jsr @Rn */
L_0C07F796: BLKS(0x0C07F796u);
	IF(0x0C07F796u); T = (s32)r0 >= 0;  /* 0C07F796 cmp/pz Rn */
	if (!T) { UPD(0x0C07F7ACu, 4); goto L_0C07F7AC; }  /* 0C07F798 bf */
L_0C07F79A: BLKS(0x0C07F79Au);
	r2 = 0xB4u; UPD(0x0C07F79Cu, 1);  /* 0C07F79A mov.w @(disp,pc),Rn */
	IF(0x0C07F79Cu); MACL = r0 * r2;  /* 0C07F79C mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C07F7A0u, 3);  /* 0C07F79E mov.l @(disp,pc),Rn */
	IF(0x0C07F7A0u); r7 = MACL;  /* 0C07F7A0 sts macl,Rn */
	r7 += r3;  /* 0C07F7A2 add Rm,Rn */
	r5 = R32(r7 + 0xCu); UPD(0x0C07F7A6u, 3);  /* 0C07F7A4 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C07F7A6 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C07F7AAu); MACL = r11 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C07F7B0u, 5); goto L_0C07F7B0; } UPD(0x0C07F7ACu, 2); goto L_0C07F7AC; }  /* 0C07F7A8 bt/s */
L_0C07F7AC: BLKS(0x0C07F7ACu);
	{ IF(0x0C07F7AEu); ; /* slot nop */ UPD(0x0C07F590u, 3); goto L_0C07F590; }  /* 0C07F7AC bra */
L_0C07F7B0: BLKS(0x0C07F7B0u);
	r5 = 0x100u; UPD(0x0C07F7B2u, 1);  /* 0C07F7B0 mov.w @(disp,pc),Rn */
	IF(0x0C07F7B2u); r9 = MACL;  /* 0C07F7B2 sts macl,Rn */
	r9 += r3;  /* 0C07F7B4 add Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C07F7B8u, 3);  /* 0C07F7B6 mov.w @(disp,pc),Rn */
	r3 = R32(r7); UPD(0x0C07F7BAu, 1);  /* 0C07F7B8 mov.l @Rm,Rn */
	r10 = R32(r9); UPD(0x0C07F7BCu, 1);  /* 0C07F7BA mov.l @Rm,Rn */
	r3 &= r5;  /* 0C07F7BC and Rm,Rn */
	r0 = R32(r7 + 0x24u); UPD(0x0C07F7C0u, 2);  /* 0C07F7BE mov.l @(disp,Rm),Rn */
	r10 &= r2;  /* 0C07F7C0 and Rm,Rn */
	r1 = R32(r9 + 0x2Cu); UPD(0x0C07F7C4u, 2);  /* 0C07F7C2 mov.l @(disp,Rm),Rn */
	r10 |= r3;  /* 0C07F7C4 or Rm,Rn */
	r6 = R32(r7 + 0x28u); UPD(0x0C07F7C8u, 2);  /* 0C07F7C6 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C07F7C8 add Rm,Rn */
	r4 = R32(r9 + 0x30u); UPD(0x0C07F7CCu, 2);  /* 0C07F7CA mov.l @(disp,Rm),Rn */
	r12 = 0xC069BF0u; UPD(0x0C07F7CEu, 1);  /* 0C07F7CC mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C07F7CE add Rm,Rn */
	r8 = 0xC068F00u; UPD(0x0C07F7D2u, 2);  /* 0C07F7D0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07F7D2 mov Rm,Rn */
	W32(r9 + 0x28u, r6); UPD(0x0C07F7D6u, 2);  /* 0C07F7D4 mov.l Rm,@(disp,Rn) */
	W32(r9, r10); UPD(0x0C07F7D8u, 1);  /* 0C07F7D6 mov.l Rm,@Rn */
	IF(0x0C07F7D8u); { u32 t_ = r12; PR = 0x0C07F7DCu; W32(r9 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C07F7DCu); }  /* 0C07F7D8 jsr @Rn */
L_0C07F7DC: BLKS(0x0C07F7DCu);
	r5 = 0x2u;  /* 0C07F7DC mov #imm,Rn */
	IF(0x0C07F7DEu); { u32 t_ = r8; PR = 0x0C07F7E2u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C07F7E2u); }  /* 0C07F7DE jsr @Rn */
L_0C07F7E2: BLKS(0x0C07F7E2u);
	r8 = 0x86u; UPD(0x0C07F7E4u, 1);  /* 0C07F7E2 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C07F7E4 mov Rm,Rn */
	r8 += r9;  /* 0C07F7E6 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C07F7EAu, 3);  /* 0C07F7E8 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C07F7EA add #imm,Rn */
	r7 = 0xC0A8AE0u; UPD(0x0C07F7EEu, 2);  /* 0C07F7EC mov.l @(disp,pc),Rn */
	IF(0x0C07F7EEu); r0 >>= 2;  /* 0C07F7EE shlr2 Rn */
	IF(0x0C07F7F0u); r0 >>= 2;  /* 0C07F7F0 shlr2 Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C07F7F4u, 3);  /* 0C07F7F2 mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C07F7F4 and #imm,r0 */
	IF(0x0C07F7F6u); { u32 t_ = r7; PR = 0x0C07F7FAu; W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C07F7FAu); }  /* 0C07F7F6 jsr @Rn */
L_0C07F7FA: BLKS(0x0C07F7FAu);
	r4 = r11;  /* 0C07F7FA mov Rm,Rn */
	r5 = 0x5Au;  /* 0C07F7FC mov #imm,Rn */
	IF(0x0C07F7FEu); { u32 t_ = r13; PR = 0x0C07F802u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C07F802u); }  /* 0C07F7FE jsr @Rn */
L_0C07F802: BLKS(0x0C07F802u);
	T = (r0 & r0) == 0;  /* 0C07F802 tst Rm,Rn */
	if (T) { UPD(0x0C07F818u, 4); goto L_0C07F818; }  /* 0C07F804 bt */
L_0C07F806: BLKS(0x0C07F806u);
	r4 = R32(r9 + 0x24u); UPD(0x0C07F808u, 1);  /* 0C07F806 mov.l @(disp,Rm),Rn */
	r0 = 0xA9u; UPD(0x0C07F80Au, 1);  /* 0C07F808 mov.w @(disp,pc),Rn */
	r13 = 0xC0BBF10u; UPD(0x0C07F80Cu, 1);  /* 0C07F80A mov.l @(disp,pc),Rn */
	IF(0x0C07F80Cu); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07F80Eu, 1);  /* 0C07F80C mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C07F80E extu.b Rm,Rn */
	IF(0x0C07F810u); { u32 t_ = r13; PR = 0x0C07F814u; r5 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C07F814u); }  /* 0C07F810 jsr @Rn */
L_0C07F814: BLKS(0x0C07F814u);
	T = (r0 & r0) == 0;  /* 0C07F814 tst Rm,Rn */
	if (!T) { UPD(0x0C07F81Cu, 4); goto L_0C07F81C; }  /* 0C07F816 bf */
L_0C07F818: BLKS(0x0C07F818u);
	{ IF(0x0C07F81Au); ; /* slot nop */ UPD(0x0C07F570u, 3); goto L_0C07F570; }  /* 0C07F818 bra */
L_0C07F81C: BLKS(0x0C07F81Cu);
	r13 = 0xC062780u; UPD(0x0C07F81Eu, 1);  /* 0C07F81C mov.l @(disp,pc),Rn */
	r12 = 0xC069B20u; UPD(0x0C07F820u, 1);  /* 0C07F81E mov.l @(disp,pc),Rn */
	IF(0x0C07F820u); { u32 t_ = r13; PR = 0x0C07F824u; r4 = 0xFu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07F824u); }  /* 0C07F820 jsr @Rn */
L_0C07F824: BLKS(0x0C07F824u);
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C07F826u, 1);  /* 0C07F824 mov.w @Rm,Rn */
	r0 += r6;  /* 0C07F826 add Rm,Rn */
	r0 += 0xFFFFFFF8u;  /* 0C07F828 add #imm,Rn */
	r10 = 0x80000u; UPD(0x0C07F82Cu, 3);  /* 0C07F82A mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C07F82C exts.w Rm,Rn */
	r4 = r13;  /* 0C07F82E mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C07F832u, 3);  /* 0C07F830 mov.l @(disp,pc),Rn */
	IF(0x0C07F832u); { u32 t_ = r12; PR = 0x0C07F836u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07F836u); }  /* 0C07F832 jsr @Rn */
L_0C07F836: BLKS(0x0C07F836u);
	r12 = R32(r9 + 0x24u); UPD(0x0C07F838u, 1);  /* 0C07F836 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C07F838 mov Rm,Rn */
	r12 += r0;  /* 0C07F83A add Rm,Rn */
	IF(0x0C07F83Cu); { u32 t_ = r8; PR = 0x0C07F840u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07F840u); }  /* 0C07F83C jsr @Rn */
L_0C07F840: BLKS(0x0C07F840u);
	r6 = R32(r9 + 0x28u); UPD(0x0C07F842u, 1);  /* 0C07F840 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07F842 add #imm,Rn */
	r6 += r0;  /* 0C07F844 add Rm,Rn */
	r9 = 0x20000u; UPD(0x0C07F848u, 3);  /* 0C07F846 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C07F848 mov #imm,Rn */
	r0 = 0xC0BA480u; UPD(0x0C07F84Cu, 2);  /* 0C07F84A mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C07F84C mov Rm,Rn */
	W32(r15, r9); UPD(0x0C07F850u, 2);  /* 0C07F84E mov.l Rm,@Rn */
	{ r7 = r13; /* slot mov Rm,Rn */ UPD(0x0C07F780u, 3); goto L_0C07F780; }  /* 0C07F850 bra */
}

void blk_f_0C07F8A0(sh3_t *c)
{
	LOCALS;
L_0C07F8A0: BLKS(0x0C07F8A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07F8A2u, 1);  /* 0C07F8A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07F8A4u, 1);  /* 0C07F8A2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07F8A6u, 1);  /* 0C07F8A4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07F8A8u, 1);  /* 0C07F8A6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07F8AAu, 1);  /* 0C07F8A8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07F8ACu, 1);  /* 0C07F8AA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07F8AEu, 1);  /* 0C07F8AC mov.l Rm,@-Rn */
	r4 = 0xC2ABAA4u; UPD(0x0C07F8B0u, 1);  /* 0C07F8AE mov.l @(disp,pc),Rn */
	IF(0x0C07F8B0u); r15 -= 4; W32(r15, PR); UPD(0x0C07F8B2u, 1);  /* 0C07F8B0 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C07F8B4u, 1);  /* 0C07F8B2 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C07F8B4 add #imm,Rn */
	r8 = 0xC29D724u; UPD(0x0C07F8B8u, 2);  /* 0C07F8B6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07F8B8 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C07F8BCu, 2);  /* 0C07F8BA mov.w @Rm+,Rn */
	r7 = R32(r8); UPD(0x0C07F8BEu, 1);  /* 0C07F8BC mov.l @Rm,Rn */
	IF(0x0C07F8BEu); r0 <<= 2;  /* 0C07F8BE shll2 Rn */
	IF(0x0C07F8C0u); r6 = R32(r0 + r7); UPD(0x0C07F8C2u, 2);  /* 0C07F8C0 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r2 = v_; } UPD(0x0C07F8C4u, 1);  /* 0C07F8C2 mov.w @Rm+,Rn */
	r5 = 0xC297460u; UPD(0x0C07F8C6u, 1);  /* 0C07F8C4 mov.l @(disp,pc),Rn */
	r9 = 0xC2460ACu; UPD(0x0C07F8C8u, 1);  /* 0C07F8C6 mov.l @(disp,pc),Rn */
	r8 = 0xC069510u; UPD(0x0C07F8CAu, 1);  /* 0C07F8C8 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C07F8CCu, 1);  /* 0C07F8CA mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C07F8CEu, 1);  /* 0C07F8CC mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C07F8D0u, 1);  /* 0C07F8CE mov.w @Rm,Rn */
	r11 = 0xC2B03A2u; UPD(0x0C07F8D2u, 1);  /* 0C07F8D0 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C07F8D2 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C07F8D6u, 2);  /* 0C07F8D4 mov.l @(disp,pc),Rn */
	IF(0x0C07F8D6u); { u32 t_ = r8; PR = 0x0C07F8DAu; W16(r11, r2); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C07F8DAu); }  /* 0C07F8D6 jsr @Rn */
L_0C07F8DA: BLKS(0x0C07F8DAu);
	T = (r0 & r0) == 0;  /* 0C07F8DA tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07F900u, 4); goto L_0C07F900; } UPD(0x0C07F8E0u, 1); goto L_0C07F8E0; }  /* 0C07F8DC bf/s */
L_0C07F8E0: BLKS(0x0C07F8E0u);
	r14 += 0xCu;  /* 0C07F8E0 add #imm,Rn */
	UPD(0x0C07F8E2u, 1);
L_0C07F8E2: BLKS(0x0C07F8E2u);
	r15 = r14;  /* 0C07F8E2 mov Rm,Rn */
	IF(0x0C07F8E4u); PR = R32(r15); r15 += 4; UPD(0x0C07F8E6u, 2);  /* 0C07F8E4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07F8E8u, 1);  /* 0C07F8E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07F8EAu, 1);  /* 0C07F8E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07F8ECu, 1);  /* 0C07F8EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07F8EEu, 1);  /* 0C07F8EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07F8F0u, 1);  /* 0C07F8EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07F8F2u, 1);  /* 0C07F8F0 mov.l @Rm+,Rn */
	IF(0x0C07F8F2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07F8F2 rts */
L_0C07F900: BLKS(0x0C07F900u);
	r10 = 0xC071740u; UPD(0x0C07F902u, 1);  /* 0C07F900 mov.l @(disp,pc),Rn */
	IF(0x0C07F902u); { u32 t_ = r10; PR = 0x0C07F906u; r4 = 0xBu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C07F906u); }  /* 0C07F902 jsr @Rn */
L_0C07F906: BLKS(0x0C07F906u);
	T = (r0 & r0) == 0;  /* 0C07F906 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07F8E0u, 4); goto L_0C07F8E0; } goto L_0C07F90C; }  /* 0C07F908 bt/s */
L_0C07F90C: BLKS(0x0C07F90Cu);
	r12 = 0xC28EDFCu; UPD(0x0C07F90Eu, 2);  /* 0C07F90C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C07F910u, 1);  /* 0C07F90E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C07F912u, 1);  /* 0C07F910 mov.w @Rm+,Rn */
	IF(0x0C07F912u); MACL = r10 * r8;  /* 0C07F912 mul.l Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C07F916u, 3);  /* 0C07F914 mov.w @Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C07F918u, 1);  /* 0C07F916 mov.l @(disp,pc),Rn */
	IF(0x0C07F918u); r8 = MACL;  /* 0C07F918 sts macl,Rn */
	r8 += r4;  /* 0C07F91A add Rm,Rn */
	r0 = r3 & 0xFFFF;  /* 0C07F91C extu.w Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C07F920u, 4);  /* 0C07F91E mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C07F920 mov Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r11); UPD(0x0C07F924u, 2);  /* 0C07F922 mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C07F926u, 1);  /* 0C07F924 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C07F926 mov #imm,Rn */
	r7 = 0xC0A8A30u; UPD(0x0C07F92Au, 2);  /* 0C07F928 mov.l @(disp,pc),Rn */
	IF(0x0C07F92Au); W16(r0 + r8, r13); UPD(0x0C07F92Cu, 1);  /* 0C07F92A mov.w Rm,@(r0,Rn) */
	r6 = 0xD3000104u; UPD(0x0C07F92Eu, 1);  /* 0C07F92C mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C07F92E add #imm,Rn */
	W32(r8, r6); UPD(0x0C07F932u, 2);  /* 0C07F930 mov.l Rm,@Rn */
	IF(0x0C07F932u); W16(r0 + r8, r13); UPD(0x0C07F934u, 1);  /* 0C07F932 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0xCu, r11); UPD(0x0C07F936u, 1);  /* 0C07F934 mov.l Rm,@(disp,Rn) */
	IF(0x0C07F936u); { u32 t_ = r7; PR = 0x0C07F93Au; W32(r8 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C07F93Au); }  /* 0C07F936 jsr @Rn */
L_0C07F93A: BLKS(0x0C07F93Au);
	r9 = 0xC0722E0u; UPD(0x0C07F93Cu, 1);  /* 0C07F93A mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07F93C mov Rm,Rn */
	r5 = 0x1600000u; UPD(0x0C07F940u, 2);  /* 0C07F93E mov.l @(disp,pc),Rn */
	IF(0x0C07F940u); { u32 t_ = r9; PR = 0x0C07F944u; W32(r8 + 0x24u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C07F944u); }  /* 0C07F940 jsr @Rn */
L_0C07F944: BLKS(0x0C07F944u);
	r2 = 0xC0A9AE0u; UPD(0x0C07F946u, 1);  /* 0C07F944 mov.l @(disp,pc),Rn */
	r9 = 0x8Cu; UPD(0x0C07F948u, 1);  /* 0C07F946 mov.w @(disp,pc),Rn */
	IF(0x0C07F948u); { u32 t_ = r2; PR = 0x0C07F94Cu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C07F94Cu); }  /* 0C07F948 jsr @Rn */
L_0C07F94C: BLKS(0x0C07F94Cu);
	r0 = 0xADu; UPD(0x0C07F94Eu, 1);  /* 0C07F94C mov.w @(disp,pc),Rn */
	r4 = 0x13u;  /* 0C07F94E mov #imm,Rn */
	r3 = 0xA8u; UPD(0x0C07F952u, 2);  /* 0C07F950 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C07F952 add Rm,Rn */
	IF(0x0C07F954u); W8(r0 + r8, r4); UPD(0x0C07F956u, 2);  /* 0C07F954 mov.b Rm,@(r0,Rn) */
	r3 += r8;  /* 0C07F956 add Rm,Rn */
	r3 += 0x1u;  /* 0C07F958 add #imm,Rn */
	r0 = 0xC0A9D30u; UPD(0x0C07F95Cu, 3);  /* 0C07F95A mov.l @(disp,pc),Rn */
	W8(r3, r4); UPD(0x0C07F95Eu, 1);  /* 0C07F95C mov.b Rm,@Rn */
	r6 = 0xC297460u; UPD(0x0C07F960u, 1);  /* 0C07F95E mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07F960 mov Rm,Rn */
	r5 = R32(r6); UPD(0x0C07F964u, 2);  /* 0C07F962 mov.l @Rm,Rn */
	IF(0x0C07F964u); { u32 t_ = r0; PR = 0x0C07F968u; W32(r14 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C07F968u); }  /* 0C07F964 jsr @Rn */
L_0C07F968: BLKS(0x0C07F968u);
	r13 = 0x94u; UPD(0x0C07F96Au, 1);  /* 0C07F968 mov.w @(disp,pc),Rn */
	r0 = 0x90u; UPD(0x0C07F96Cu, 1);  /* 0C07F96A mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C07F96C add Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C07F970u, 2);  /* 0C07F96E mov.l @(disp,Rm),Rn */
	W32(r13, r11); UPD(0x0C07F972u, 1);  /* 0C07F970 mov.l Rm,@Rn */
	IF(0x0C07F972u); W32(r0 + r8, r11); UPD(0x0C07F974u, 1);  /* 0C07F972 mov.l Rm,@(r0,Rn) */
	r13 = r8;  /* 0C07F974 mov Rm,Rn */
	W32(r9, r11); UPD(0x0C07F978u, 2);  /* 0C07F976 mov.l Rm,@Rn */
	W32(r8 + 0x30u, r11); UPD(0x0C07F97Au, 1);  /* 0C07F978 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r11); UPD(0x0C07F97Cu, 1);  /* 0C07F97A mov.l Rm,@(disp,Rn) */
	W32(r14, r11); UPD(0x0C07F97Eu, 1);  /* 0C07F97C mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C07F980u, 1);  /* 0C07F97E mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C07F980 mov #imm,Rn */
	IF(0x0C07F982u); ;  /* 0C07F982 nop */
	UPD(0x0C07F984u, 2);
L_0C07F984: BLKS(0x0C07F984u);
	r9 = 0xC18C9C4u; UPD(0x0C07F986u, 1);  /* 0C07F984 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C07F988u, 1);  /* 0C07F986 mov.w @Rm+,Rn */
	r9 += r11;  /* 0C07F988 add Rm,Rn */
	r8 = 0xB4u; UPD(0x0C07F98Cu, 2);  /* 0C07F98A mov.w @(disp,pc),Rn */
	r9 += 0x4u;  /* 0C07F98C add #imm,Rn */
	IF(0x0C07F98Eu); MACL = r10 * r8;  /* 0C07F98E mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C07F992u, 4);  /* 0C07F990 mov.w @Rm,Rn */
	r11 += 0x14u;  /* 0C07F992 add #imm,Rn */
	r1 = 0xC286578u; UPD(0x0C07F996u, 2);  /* 0C07F994 mov.l @(disp,pc),Rn */
	IF(0x0C07F996u); r8 = MACL;  /* 0C07F996 sts macl,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C07F99Au, 2);  /* 0C07F998 mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C07F99A add Rm,Rn */
	IF(0x0C07F99Cu); r7 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C07F99Eu, 2);  /* 0C07F99C mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C07F99E add Rm,Rn */
	r8 += 0x7Cu;  /* 0C07F9A0 add #imm,Rn */
	W16(r8, r7); UPD(0x0C07F9A4u, 3);  /* 0C07F9A2 mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C07F9A4 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C07F9A8u, 2);  /* 0C07F9A6 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C07F9A8 add #imm,Rn */
	W16(r8, r5); UPD(0x0C07F9ACu, 2);  /* 0C07F9AA mov.w Rm,@Rn */
	r7 = 0x0u;  /* 0C07F9AC mov #imm,Rn */
	r3 = 0xC2460ACu; UPD(0x0C07F9B0u, 2);  /* 0C07F9AE mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C07F9B0 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C07F9B4u, 2);  /* 0C07F9B2 mov.w @Rm,Rn */
	r2 = R32(r9); UPD(0x0C07F9B6u, 1);  /* 0C07F9B4 mov.l @Rm,Rn */
	r6 = r4 & 0xFFFF;  /* 0C07F9B6 extu.w Rm,Rn */
	W32(r8, r2); UPD(0x0C07F9BAu, 2);  /* 0C07F9B8 mov.l Rm,@Rn */
	r4 = r10;  /* 0C07F9BA mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C07F9BEu, 2);  /* 0C07F9BC mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A8A30u; UPD(0x0C07F9C0u, 1);  /* 0C07F9BE mov.l @(disp,pc),Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C07F9C2u, 1);  /* 0C07F9C0 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C07F9C4u, 1);  /* 0C07F9C2 mov.l Rm,@(disp,Rn) */
	IF(0x0C07F9C4u); { u32 t_ = r5; PR = 0x0C07F9C8u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C07F9C8u); }  /* 0C07F9C4 jsr @Rn */
L_0C07F9C8: BLKS(0x0C07F9C8u);
	r2 = 0xC2B03A2u; UPD(0x0C07F9CAu, 1);  /* 0C07F9C8 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C07F9CA mov Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C07F9CEu, 2);  /* 0C07F9CC mov.w @Rm,Rn */
	IF(0x0C07F9CEu); r3 >>= 2;  /* 0C07F9CE shlr2 Rn */
	r4 = 0x86u; UPD(0x0C07F9D2u, 2);  /* 0C07F9D0 mov.w @(disp,pc),Rn */
	IF(0x0C07F9D2u); r3 >>= 2;  /* 0C07F9D2 shlr2 Rn */
	IF(0x0C07F9D4u); r3 >>= 2;  /* 0C07F9D4 shlr2 Rn */
	IF(0x0C07F9D6u); W16(r0 + r4, r3); UPD(0x0C07F9D8u, 3);  /* 0C07F9D6 mov.w Rm,@(r0,Rn) */
	r6 = R32(r13 + 0x24u); UPD(0x0C07F9DAu, 1);  /* 0C07F9D8 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C07F9DA mov Rm,Rn */
	r0 = R32(r13 + 0x28u); UPD(0x0C07F9DEu, 2);  /* 0C07F9DC mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C07F9E0u, 1);  /* 0C07F9DE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C07F9E2u, 1);  /* 0C07F9E0 mov.l Rm,@(disp,Rn) */
	r7 = R32(r9 + 0xCu); UPD(0x0C07F9E4u, 1);  /* 0C07F9E2 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C07F9E6u, 1);  /* 0C07F9E4 mov.l Rm,@(disp,Rn) */
	r5 = R32(r9 + 0x10u); UPD(0x0C07F9E8u, 1);  /* 0C07F9E6 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A9AE0u; UPD(0x0C07F9EAu, 1);  /* 0C07F9E8 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r5); UPD(0x0C07F9ECu, 1);  /* 0C07F9EA mov.l Rm,@(disp,Rn) */
	r2 = 0xFFFA0000u; UPD(0x0C07F9EEu, 1);  /* 0C07F9EC mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C07F9EE add #imm,Rn */
	IF(0x0C07F9F0u); { u32 t_ = r10; PR = 0x0C07F9F4u; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C07F9F4u); }  /* 0C07F9F0 jsr @Rn */
L_0C07F9F4: BLKS(0x0C07F9F4u);
	r0 = 0xB0u; UPD(0x0C07F9F6u, 1);  /* 0C07F9F4 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C07F9F6 add #imm,Rn */
	IF(0x0C07F9F8u); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C07F9FAu, 2);  /* 0C07F9F8 mov.b @(r0,Rm),Rn */
	r10 = 0x9u;  /* 0C07F9FA mov #imm,Rn */
	IF(0x0C07F9FCu); W8(r0 + r8, r3); UPD(0x0C07F9FEu, 2);  /* 0C07F9FC mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C07FA00u, 1);  /* 0C07F9FE mov.w @(disp,pc),Rn */
	r7 = 0xACu; UPD(0x0C07FA02u, 1);  /* 0C07FA00 mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C07FA02 add Rm,Rn */
	r8 += r7;  /* 0C07FA04 add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C07FA08u, 3);  /* 0C07FA06 mov.l @(disp,Rm),Rn */
	r7 += r13;  /* 0C07FA08 add Rm,Rn */
	r7 += 0x1u;  /* 0C07FA0A add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C07FA0Eu, 3);  /* 0C07FA0C mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C07FA0E add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C07FA12u, 2);  /* 0C07FA10 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C07FA12 add #imm,Rn */
	W8(r0, r6); UPD(0x0C07FA16u, 2);  /* 0C07FA14 mov.b Rm,@Rn */
	W8(r8, r5); UPD(0x0C07FA18u, 1);  /* 0C07FA16 mov.b Rm,@Rn */
	r9 = R32(r14); UPD(0x0C07FA1Au, 1);  /* 0C07FA18 mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C07FA1A add #imm,Rn */
	r2 = (u32)(s32)(s16)r9;  /* 0C07FA1C exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C07FA20u, 3);  /* 0C07FA1E mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C07FA22u, 1);  /* 0C07FA20 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r10;  /* 0C07FA22 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07F984u, 4); goto L_0C07F984; } goto L_0C07FA28; }  /* 0C07FA24 bf/s */
L_0C07FA28: BLKS(0x0C07FA28u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07F8E2u, 4); goto L_0C07F8E2; }  /* 0C07FA28 bra */
}

void blk_f_0C07FA90(sh3_t *c)
{
	LOCALS;
L_0C07FA90: BLKS(0x0C07FA90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07FA92u, 1);  /* 0C07FA90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07FA94u, 1);  /* 0C07FA92 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C07FA94 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07FA98u, 2);  /* 0C07FA96 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07FA9Au, 1);  /* 0C07FA98 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07FA9Cu, 1);  /* 0C07FA9A mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C07FA9Eu, 1);  /* 0C07FA9C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07FAA0u, 1);  /* 0C07FA9E mov.l Rm,@-Rn */
	IF(0x0C07FAA0u); MACL = r8 * r3;  /* 0C07FAA0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07FAA4u, 3);  /* 0C07FAA2 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C07FAA6u, 1);  /* 0C07FAA4 mov.l @(disp,pc),Rn */
	IF(0x0C07FAA6u); r2 = MACL;  /* 0C07FAA6 sts macl,Rn */
	IF(0x0C07FAA8u); r15 -= 4; W32(r15, PR); UPD(0x0C07FAAAu, 2);  /* 0C07FAA8 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07FAAA add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07FAAEu, 2);  /* 0C07FAAC mov.l @(disp,Rm),Rn */
	r0 = 0x8u;  /* 0C07FAAE mov #imm,Rn */
	T = r2 > r0;  /* 0C07FAB0 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07FB3Cu, 5); goto L_0C07FB3C; } goto L_0C07FAB6; }  /* 0C07FAB2 bt/s */
L_0C07FAB6: BLKS(0x0C07FAB6u);
	r0 = 0xC07FAC8u;  /* 0C07FAB6 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07FAB8 add Rm,Rn */
	IF(0x0C07FABAu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07FABCu, 4);  /* 0C07FABA mov.w @(r0,Rm),Rn */
	IF(0x0C07FABCu); { u32 tv_ = (r4 + 0x0C07FAC0u); u32 t_ = PHYS(tv_); IF(0x0C07FABEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07FAE0u: goto L_0C07FAE0; case 0x0C07FB30u: goto L_0C07FB30; case 0x0C07FB50u: goto L_0C07FB50; case 0x0C07FBC0u: goto L_0C07FBC0; case 0x0C07FBF0u: goto L_0C07FBF0; case 0x0C07FCB0u: goto L_0C07FCB0; case 0x0C07FD20u: goto L_0C07FD20; default: JUMPD(tv_); } }  /* 0C07FABC braf Rn */
L_0C07FAE0: BLKS(0x0C07FAE0u);
	r9 = 0xB4u; UPD(0x0C07FAE2u, 1);  /* 0C07FAE0 mov.w @(disp,pc),Rn */
	IF(0x0C07FAE2u); MACL = r8 * r9;  /* 0C07FAE2 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C07FAE6u, 3);  /* 0C07FAE4 mov.l @(disp,pc),Rn */
	IF(0x0C07FAE6u); r2 = MACL;  /* 0C07FAE6 sts macl,Rn */
	r2 += r7;  /* 0C07FAE8 add Rm,Rn */
	r6 = 0xA6u; UPD(0x0C07FAECu, 3);  /* 0C07FAEA mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C07FAEC mov Rm,Rn */
	IF(0x0C07FAEEu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07FAF0u, 2);  /* 0C07FAEE mov.b @(r0,Rm),Rn */
	r0 = r5;  /* 0C07FAF0 mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C07FAF2 cmp/eq #imm,r0 */
	{ u32 c_ = T; r11 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07FB10u, 5); goto L_0C07FB10; } UPD(0x0C07FAF8u, 1); goto L_0C07FAF8; }  /* 0C07FAF4 bt/s */
L_0C07FAF8: BLKS(0x0C07FAF8u);
	r0 = 0xC0A9A70u; UPD(0x0C07FAFAu, 1);  /* 0C07FAF8 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C07FAFA mov Rm,Rn */
	r15 = r14;  /* 0C07FAFC mov Rm,Rn */
	IF(0x0C07FAFEu); PR = R32(r15); r15 += 4; UPD(0x0C07FB00u, 3);  /* 0C07FAFE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07FB02u, 1);  /* 0C07FB00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07FB04u, 1);  /* 0C07FB02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07FB06u, 1);  /* 0C07FB04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07FB08u, 1);  /* 0C07FB06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07FB0Au, 1);  /* 0C07FB08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07FB0Cu, 1);  /* 0C07FB0A mov.l @Rm+,Rn */
	IF(0x0C07FB0Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9A70u: TAIL(blk_f_0C0A9A70); default: JUMPD(tv_); } }  /* 0C07FB0C jmp @Rn */
L_0C07FB10: BLKS(0x0C07FB10u);
	r5 = R32(r2 + 0x24u); UPD(0x0C07FB12u, 1);  /* 0C07FB10 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07FB12 add #imm,Rn */
	r12 = 0x20000u; UPD(0x0C07FB16u, 2);  /* 0C07FB14 mov.l @(disp,pc),Rn */
	r10 = 0xC07CD80u; UPD(0x0C07FB18u, 1);  /* 0C07FB16 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C07FB18 mov #imm,Rn */
	W32(r15, r12); UPD(0x0C07FB1Cu, 2);  /* 0C07FB1A mov.l Rm,@Rn */
	r7 = 0x14u;  /* 0C07FB1C mov #imm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C07FB20u, 2);  /* 0C07FB1E mov.l Rm,@(disp,Rn) */
	r13 = 0x200000u; UPD(0x0C07FB22u, 1);  /* 0C07FB20 mov.l @(disp,pc),Rn */
	r6 = R32(r2 + 0x28u); UPD(0x0C07FB24u, 1);  /* 0C07FB22 mov.l @(disp,Rm),Rn */
	IF(0x0C07FB24u); { u32 t_ = r10; PR = 0x0C07FB28u; r5 += r13; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C07FB28u); }  /* 0C07FB24 jsr @Rn */
L_0C07FB28: BLKS(0x0C07FB28u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C07FAF8u, 3); goto L_0C07FAF8; }  /* 0C07FB28 bra */
L_0C07FB30: BLKS(0x0C07FB30u);
	r11 = 0xB4u; UPD(0x0C07FB32u, 1);  /* 0C07FB30 mov.w @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C07FB32 mov #imm,Rn */
	IF(0x0C07FB34u); MACL = r8 * r11;  /* 0C07FB34 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C07FB38u, 4);  /* 0C07FB36 mov.l @(disp,pc),Rn */
	IF(0x0C07FB38u); r0 = MACL;  /* 0C07FB38 sts macl,Rn */
	IF(0x0C07FB3Au); W32(r0 + r8, r12); UPD(0x0C07FB3Cu, 2);  /* 0C07FB3A mov.l Rm,@(r0,Rn) */
L_0C07FB3C: BLKS(0x0C07FB3Cu);
	r15 = r14;  /* 0C07FB3C mov Rm,Rn */
	IF(0x0C07FB3Eu); PR = R32(r15); r15 += 4; UPD(0x0C07FB40u, 2);  /* 0C07FB3E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07FB42u, 1);  /* 0C07FB40 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07FB44u, 1);  /* 0C07FB42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07FB46u, 1);  /* 0C07FB44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07FB48u, 1);  /* 0C07FB46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07FB4Au, 1);  /* 0C07FB48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07FB4Cu, 1);  /* 0C07FB4A mov.l @Rm+,Rn */
	IF(0x0C07FB4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07FB4C rts */
L_0C07FB50: BLKS(0x0C07FB50u);
	r10 = 0xB4u; UPD(0x0C07FB52u, 1);  /* 0C07FB50 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07FB52 add #imm,Rn */
	IF(0x0C07FB54u); MACL = r8 * r10;  /* 0C07FB54 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C07FB58u, 4);  /* 0C07FB56 mov.l @(disp,pc),Rn */
	IF(0x0C07FB58u); r9 = MACL;  /* 0C07FB58 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C07FB5Cu, 2);  /* 0C07FB5A mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C07FB5C add Rm,Rn */
	IF(0x0C07FB5Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07FB60u, 2);  /* 0C07FB5E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C07FB60 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C07FB64u, 2);  /* 0C07FB62 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07FB64 add #imm,Rn */
	IF(0x0C07FB66u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07FB68u, 2);  /* 0C07FB66 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C07FB68 mov #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C07FB6A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C07FB6Eu, 3);  /* 0C07FB6C mov.l Rm,@(disp,Rn) */
	r12 = 0xC0BD6F0u; UPD(0x0C07FB70u, 1);  /* 0C07FB6E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C07FB72u, 1);  /* 0C07FB70 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C07FB74u, 1);  /* 0C07FB72 mov.l @(disp,Rm),Rn */
	IF(0x0C07FB74u); { u32 t_ = r12; PR = 0x0C07FB78u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C07FB78u); }  /* 0C07FB74 jsr @Rn */
L_0C07FB78: BLKS(0x0C07FB78u);
	r4 = r8;  /* 0C07FB78 mov Rm,Rn */
	r8 = 0xC0A8CA0u; UPD(0x0C07FB7Cu, 2);  /* 0C07FB7A mov.l @(disp,pc),Rn */
	IF(0x0C07FB7Cu); { u32 t_ = r8; PR = 0x0C07FB80u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07FB80u); }  /* 0C07FB7C jsr @Rn */
L_0C07FB80: BLKS(0x0C07FB80u);
	IF(0x0C07FB80u); T = (s32)r0 >= 0;  /* 0C07FB80 cmp/pz Rn */
	{ u32 c_ = !T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07FBAEu, 4); goto L_0C07FBAE; } goto L_0C07FB86; }  /* 0C07FB82 bf/s */
L_0C07FB86: BLKS(0x0C07FB86u);
	r12 = 0x20000u; UPD(0x0C07FB88u, 2);  /* 0C07FB86 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07FB88 add #imm,Rn */
	r0 = 0x0u;  /* 0C07FB8A mov #imm,Rn */
	r8 = 0xC07CD80u; UPD(0x0C07FB8Eu, 3);  /* 0C07FB8C mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C07FB8E mov #imm,Rn */
	W32(r15, r12); UPD(0x0C07FB92u, 2);  /* 0C07FB90 mov.l Rm,@Rn */
	r4 = 0x3u;  /* 0C07FB92 mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C07FB96u, 2);  /* 0C07FB94 mov.l Rm,@(disp,Rn) */
	r6 = R32(r9 + 0x28u); UPD(0x0C07FB98u, 1);  /* 0C07FB96 mov.l @(disp,Rm),Rn */
	IF(0x0C07FB98u); { u32 t_ = r8; PR = 0x0C07FB9Cu; r5 = R32(r9 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C07FB9Cu); }  /* 0C07FB98 jsr @Rn */
L_0C07FB9C: BLKS(0x0C07FB9Cu);
	IF(0x0C07FB9Cu); MACL = r13 * r10;  /* 0C07FB9C mul.l Rm,Rn */
	r15 += 0x8u;  /* 0C07FB9E add #imm,Rn */
	IF(0x0C07FBA0u); r6 = MACL;  /* 0C07FBA0 sts macl,Rn */
	r10 = 0xA6u; UPD(0x0C07FBA4u, 5);  /* 0C07FBA2 mov.w @(disp,pc),Rn */
	r6 += r11;  /* 0C07FBA4 add Rm,Rn */
	r6 += r10;  /* 0C07FBA6 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C07FBAAu, 3);  /* 0C07FBA8 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C07FBAA add #imm,Rn */
	W8(r6, r7); UPD(0x0C07FBAEu, 2);  /* 0C07FBAC mov.b Rm,@Rn */
L_0C07FBAE: BLKS(0x0C07FBAEu);
	r11 = 0x0u;  /* 0C07FBAE mov #imm,Rn */
	{ W32(r9, r11); /* slot mov.l Rm,@Rn */ UPD(0x0C07FB3Cu, 4); goto L_0C07FB3C; }  /* 0C07FBB0 bra */
L_0C07FBC0: BLKS(0x0C07FBC0u);
	r5 = 0xB4u; UPD(0x0C07FBC2u, 1);  /* 0C07FBC0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07FBC2 add #imm,Rn */
	IF(0x0C07FBC4u); MACL = r8 * r5;  /* 0C07FBC4 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C07FBC8u, 4);  /* 0C07FBC6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C07FBCAu, 1);  /* 0C07FBC8 mov.w @(disp,pc),Rn */
	IF(0x0C07FBCAu); r8 = MACL;  /* 0C07FBCA sts macl,Rn */
	r8 += r4;  /* 0C07FBCC add Rm,Rn */
	IF(0x0C07FBCEu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07FBD0u, 3);  /* 0C07FBCE mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C07FBD0 mov #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C07FBD2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C07FBD6u, 3);  /* 0C07FBD4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07FBD6 add #imm,Rn */
	IF(0x0C07FBD8u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07FBDAu, 2);  /* 0C07FBD8 mov.b @(r0,Rm),Rn */
	r9 = r13 & 0xFF;  /* 0C07FBDA extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C07FBDEu, 2);  /* 0C07FBDC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07FBE0u, 1);  /* 0C07FBDE mov.l @Rm,Rn */
L_0C07FBE0: BLKS(0x0C07FBE0u);
	r9 = 0xC0BECB0u; UPD(0x0C07FBE2u, 1);  /* 0C07FBE0 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07FBE4u, 1);  /* 0C07FBE2 mov.l @(disp,Rm),Rn */
	IF(0x0C07FBE4u); { u32 t_ = r9; PR = 0x0C07FBE8u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C07FBE8u); }  /* 0C07FBE4 jsr @Rn */
L_0C07FBE8: BLKS(0x0C07FBE8u);
	r1 = 0x0u;  /* 0C07FBE8 mov #imm,Rn */
	UPD(0x0C07FBEAu, 1);
L_0C07FBEA: BLKS(0x0C07FBEAu);
	W32(r8, r1); UPD(0x0C07FBECu, 1);  /* 0C07FBEA mov.l Rm,@Rn */
L_0C07FBEC: BLKS(0x0C07FBECu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C07FB3Cu, 3); goto L_0C07FB3C; }  /* 0C07FBEC bra */
L_0C07FBF0: BLKS(0x0C07FBF0u);
	r9 = 0xC0A8CA0u; UPD(0x0C07FBF2u, 1);  /* 0C07FBF0 mov.l @(disp,pc),Rn */
	IF(0x0C07FBF2u); { u32 t_ = r9; PR = 0x0C07FBF6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07FBF6u); }  /* 0C07FBF2 jsr @Rn */
L_0C07FBF6: BLKS(0x0C07FBF6u);
	IF(0x0C07FBF6u); T = (s32)r0 >= 0;  /* 0C07FBF6 cmp/pz Rn */
	{ u32 c_ = !T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07FB30u, 4); goto L_0C07FB30; } goto L_0C07FBFC; }  /* 0C07FBF8 bf/s */
L_0C07FBFC: BLKS(0x0C07FBFCu);
	IF(0x0C07FBFCu); { u32 t_ = r9; PR = 0x0C07FC00u; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07FC00u); }  /* 0C07FBFC jsr @Rn */
L_0C07FC00: BLKS(0x0C07FC00u);
	IF(0x0C07FC00u); T = (s32)r0 >= 0;  /* 0C07FC00 cmp/pz Rn */
	if (!T) { UPD(0x0C07FB30u, 4); goto L_0C07FB30; }  /* 0C07FC02 bf */
L_0C07FC04: BLKS(0x0C07FC04u);
	r15 += 0xFFFFFFF8u;  /* 0C07FC04 add #imm,Rn */
	r11 = 0xB4u; UPD(0x0C07FC08u, 2);  /* 0C07FC06 mov.w @(disp,pc),Rn */
	IF(0x0C07FC08u); MACL = r0 * r11;  /* 0C07FC08 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C07FC0Cu, 3);  /* 0C07FC0A mov.l @(disp,pc),Rn */
	r2 = 0xA5u; UPD(0x0C07FC0Eu, 1);  /* 0C07FC0C mov.w @(disp,pc),Rn */
	IF(0x0C07FC0Eu); r10 = MACL;  /* 0C07FC0E sts macl,Rn */
	r10 += r12;  /* 0C07FC10 add Rm,Rn */
	r10 += r2;  /* 0C07FC12 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C07FC16u, 4);  /* 0C07FC14 mov.b @Rm,Rn */
	IF(0x0C07FC16u); MACL = r8 * r11;  /* 0C07FC16 mul.l Rm,Rn */
	r0 += 0x1u;  /* 0C07FC18 add #imm,Rn */
	W8(r10, r0); UPD(0x0C07FC1Cu, 4);  /* 0C07FC1A mov.b Rm,@Rn */
	IF(0x0C07FC1Cu); r8 = MACL;  /* 0C07FC1C sts macl,Rn */
	r10 = 0xB0u; UPD(0x0C07FC20u, 2);  /* 0C07FC1E mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C07FC20 add Rm,Rn */
	r10 += r8;  /* 0C07FC22 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C07FC26u, 3);  /* 0C07FC24 mov.b @Rm,Rn */
	r9 = r7 & 0xFF;  /* 0C07FC26 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C07FC2Au, 2);  /* 0C07FC28 mov.l Rm,@Rn */
	r9 = 0xA9u; UPD(0x0C07FC2Cu, 1);  /* 0C07FC2A mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C07FC2C add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C07FC30u, 2);  /* 0C07FC2E mov.b @Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C07FC30 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07FC34u, 2);  /* 0C07FC32 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C07FC36u, 1);  /* 0C07FC34 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C07FC36 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C07FC3Au, 2);  /* 0C07FC38 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07FC3Cu, 1);  /* 0C07FC3A mov.l @(disp,Rm),Rn */
	IF(0x0C07FC3Cu); { u32 t_ = r0; PR = 0x0C07FC40u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C07FC40u); }  /* 0C07FC3C jsr @Rn */
L_0C07FC40: BLKS(0x0C07FC40u);
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C07FC42u, 1);  /* 0C07FC40 mov.b @Rm,Rn */
	r5 = 0x2u;  /* 0C07FC42 mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C07FC44 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C07FC48u, 3);  /* 0C07FC46 mov.l Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C07FC4Au, 1);  /* 0C07FC48 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C07FC4A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C07FC4Eu, 2);  /* 0C07FC4C mov.l Rm,@(disp,Rn) */
	r10 = 0xC0BECB0u; UPD(0x0C07FC50u, 1);  /* 0C07FC4E mov.l @(disp,pc),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C07FC52u, 1);  /* 0C07FC50 mov.l @(disp,Rm),Rn */
	r4 = R32(r8); UPD(0x0C07FC54u, 1);  /* 0C07FC52 mov.l @Rm,Rn */
	IF(0x0C07FC54u); { u32 t_ = r10; PR = 0x0C07FC58u; r6 = R32(r8 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C07FC58u); }  /* 0C07FC54 jsr @Rn */
L_0C07FC58: BLKS(0x0C07FC58u);
	r7 = 0x20000u; UPD(0x0C07FC5Au, 1);  /* 0C07FC58 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C07FC5A mov #imm,Rn */
	r9 = 0xC07CD80u; UPD(0x0C07FC5Eu, 2);  /* 0C07FC5C mov.l @(disp,pc),Rn */
	r4 = 0xAu;  /* 0C07FC5E mov #imm,Rn */
	W32(r15, r7); UPD(0x0C07FC62u, 2);  /* 0C07FC60 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C07FC64u, 1);  /* 0C07FC62 mov.l Rm,@(disp,Rn) */
	r7 = 0x14u;  /* 0C07FC64 mov #imm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C07FC68u, 2);  /* 0C07FC66 mov.l @(disp,Rm),Rn */
	IF(0x0C07FC68u); { u32 t_ = r9; PR = 0x0C07FC6Cu; r5 = R32(r8 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C07FC6Cu); }  /* 0C07FC68 jsr @Rn */
L_0C07FC6C: BLKS(0x0C07FC6Cu);
	IF(0x0C07FC6Cu); MACL = r13 * r11;  /* 0C07FC6C mul.l Rm,Rn */
	IF(0x0C07FC6Eu); r6 = MACL;  /* 0C07FC6E sts macl,Rn */
	r6 += r12;  /* 0C07FC70 add Rm,Rn */
	W32(r6, r10); UPD(0x0C07FC74u, 5);  /* 0C07FC72 mov.l Rm,@Rn */
	{ W32(r8, r10); /* slot mov.l Rm,@Rn */ UPD(0x0C07FBECu, 3); goto L_0C07FBEC; }  /* 0C07FC74 bra */
L_0C07FCB0: BLKS(0x0C07FCB0u);
	r9 = 0xC0A8CA0u; UPD(0x0C07FCB2u, 1);  /* 0C07FCB0 mov.l @(disp,pc),Rn */
	IF(0x0C07FCB2u); { u32 t_ = r9; PR = 0x0C07FCB6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07FCB6u); }  /* 0C07FCB2 jsr @Rn */
L_0C07FCB6: BLKS(0x0C07FCB6u);
	IF(0x0C07FCB6u); T = (s32)r0 >= 0;  /* 0C07FCB6 cmp/pz Rn */
	{ u32 c_ = !T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07FCC4u, 4); goto L_0C07FCC4; } goto L_0C07FCBC; }  /* 0C07FCB8 bf/s */
L_0C07FCBC: BLKS(0x0C07FCBCu);
	IF(0x0C07FCBCu); { u32 t_ = r9; PR = 0x0C07FCC0u; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07FCC0u); }  /* 0C07FCBC jsr @Rn */
L_0C07FCC0: BLKS(0x0C07FCC0u);
	IF(0x0C07FCC0u); T = (s32)r0 >= 0;  /* 0C07FCC0 cmp/pz Rn */
	if (T) { UPD(0x0C07FCC8u, 4); goto L_0C07FCC8; }  /* 0C07FCC2 bt */
L_0C07FCC4: BLKS(0x0C07FCC4u);
	{ IF(0x0C07FCC6u); ; /* slot nop */ UPD(0x0C07FB30u, 3); goto L_0C07FB30; }  /* 0C07FCC4 bra */
L_0C07FCC8: BLKS(0x0C07FCC8u);
	r11 = 0xB4u; UPD(0x0C07FCCAu, 1);  /* 0C07FCC8 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07FCCA add #imm,Rn */
	IF(0x0C07FCCCu); MACL = r8 * r11;  /* 0C07FCCC mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C07FCD0u, 4);  /* 0C07FCCE mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C07FCD0 mov #imm,Rn */
	IF(0x0C07FCD2u); r8 = MACL;  /* 0C07FCD2 sts macl,Rn */
	r10 = 0xB0u; UPD(0x0C07FCD6u, 3);  /* 0C07FCD4 mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C07FCD6 add Rm,Rn */
	r10 += r8;  /* 0C07FCD8 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r10); UPD(0x0C07FCDCu, 3);  /* 0C07FCDA mov.b @Rm,Rn */
	r2 = r9 & 0xFF;  /* 0C07FCDC extu.b Rm,Rn */
	r9 = 0xA9u; UPD(0x0C07FCE0u, 2);  /* 0C07FCDE mov.w @(disp,pc),Rn */
	W32(r15, r2); UPD(0x0C07FCE2u, 1);  /* 0C07FCE0 mov.l Rm,@Rn */
	r9 += r8;  /* 0C07FCE2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C07FCE6u, 2);  /* 0C07FCE4 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C07FCE6 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C07FCEAu, 2);  /* 0C07FCE8 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C07FCECu, 1);  /* 0C07FCEA mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07FCEEu, 1);  /* 0C07FCEC mov.l @(disp,Rm),Rn */
	r4 = R32(r8); UPD(0x0C07FCF0u, 1);  /* 0C07FCEE mov.l @Rm,Rn */
	IF(0x0C07FCF0u); { u32 t_ = r0; PR = 0x0C07FCF4u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C07FCF4u); }  /* 0C07FCF0 jsr @Rn */
L_0C07FCF4: BLKS(0x0C07FCF4u);
	r6 = (u32)(s32)(s8)R8(r10); UPD(0x0C07FCF6u, 1);  /* 0C07FCF4 mov.b @Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C07FCF6 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C07FCFAu, 2);  /* 0C07FCF8 mov.l Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C07FCFCu, 1);  /* 0C07FCFA mov.b @Rm,Rn */
	r5 = 0x2u;  /* 0C07FCFC mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C07FCFE extu.b Rm,Rn */
	r9 = 0xC0BECB0u; UPD(0x0C07FD02u, 3);  /* 0C07FD00 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C07FD04u, 1);  /* 0C07FD02 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07FD06u, 1);  /* 0C07FD04 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07FD08u, 1);  /* 0C07FD06 mov.l @(disp,Rm),Rn */
	IF(0x0C07FD08u); { u32 t_ = r9; PR = 0x0C07FD0Cu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C07FD0Cu); }  /* 0C07FD08 jsr @Rn */
L_0C07FD0C: BLKS(0x0C07FD0Cu);
	IF(0x0C07FD0Cu); MACL = r13 * r11;  /* 0C07FD0C mul.l Rm,Rn */
	r1 = 0x0u;  /* 0C07FD0E mov #imm,Rn */
	IF(0x0C07FD10u); r0 = MACL;  /* 0C07FD10 sts macl,Rn */
	{ IF(0x0C07FD14u); W32(r0 + r12, r1); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C07FBEAu, 7); goto L_0C07FBEA; }  /* 0C07FD12 bra */
L_0C07FD20: BLKS(0x0C07FD20u);
	r4 = 0xB4u; UPD(0x0C07FD22u, 1);  /* 0C07FD20 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07FD22 add #imm,Rn */
	IF(0x0C07FD24u); MACL = r8 * r4;  /* 0C07FD24 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C07FD28u, 4);  /* 0C07FD26 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C07FD28 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C07FD2Cu, 2);  /* 0C07FD2A mov.w @(disp,pc),Rn */
	IF(0x0C07FD2Cu); r8 = MACL;  /* 0C07FD2C sts macl,Rn */
	r8 += r3;  /* 0C07FD2E add Rm,Rn */
	IF(0x0C07FD30u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07FD32u, 3);  /* 0C07FD30 mov.b @(r0,Rm),Rn */
	r12 = r11 & 0xFF;  /* 0C07FD32 extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C07FD36u, 2);  /* 0C07FD34 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07FD36 add #imm,Rn */
	IF(0x0C07FD38u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07FD3Au, 2);  /* 0C07FD38 mov.b @(r0,Rm),Rn */
	r13 = r10 & 0xFF;  /* 0C07FD3A extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C07FD3Eu, 2);  /* 0C07FD3C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C07FBE0u, 3); goto L_0C07FBE0; }  /* 0C07FD3E bra */
}

void blk_f_0C07FD60(sh3_t *c)
{
	LOCALS;
	goto L_0C07FD60;
L_0C07FA90: BLKS(0x0C07FA90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07FA92u, 1);  /* 0C07FA90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07FA94u, 1);  /* 0C07FA92 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C07FA94 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07FA98u, 2);  /* 0C07FA96 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07FA9Au, 1);  /* 0C07FA98 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07FA9Cu, 1);  /* 0C07FA9A mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C07FA9Eu, 1);  /* 0C07FA9C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07FAA0u, 1);  /* 0C07FA9E mov.l Rm,@-Rn */
	IF(0x0C07FAA0u); MACL = r8 * r3;  /* 0C07FAA0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07FAA4u, 3);  /* 0C07FAA2 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C07FAA6u, 1);  /* 0C07FAA4 mov.l @(disp,pc),Rn */
	IF(0x0C07FAA6u); r2 = MACL;  /* 0C07FAA6 sts macl,Rn */
	IF(0x0C07FAA8u); r15 -= 4; W32(r15, PR); UPD(0x0C07FAAAu, 2);  /* 0C07FAA8 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07FAAA add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07FAAEu, 2);  /* 0C07FAAC mov.l @(disp,Rm),Rn */
	r0 = 0x8u;  /* 0C07FAAE mov #imm,Rn */
	T = r2 > r0;  /* 0C07FAB0 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07FB3Cu, 5); goto L_0C07FB3C; } goto L_0C07FAB6; }  /* 0C07FAB2 bt/s */
L_0C07FAB6: BLKS(0x0C07FAB6u);
	r0 = 0xC07FAC8u;  /* 0C07FAB6 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07FAB8 add Rm,Rn */
	IF(0x0C07FABAu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07FABCu, 4);  /* 0C07FABA mov.w @(r0,Rm),Rn */
	IF(0x0C07FABCu); { u32 tv_ = (r4 + 0x0C07FAC0u); u32 t_ = PHYS(tv_); IF(0x0C07FABEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07FAE0u: goto L_0C07FAE0; case 0x0C07FB30u: goto L_0C07FB30; case 0x0C07FB50u: goto L_0C07FB50; case 0x0C07FBC0u: goto L_0C07FBC0; case 0x0C07FBF0u: goto L_0C07FBF0; case 0x0C07FCB0u: goto L_0C07FCB0; case 0x0C07FD20u: goto L_0C07FD20; default: JUMPD(tv_); } }  /* 0C07FABC braf Rn */
L_0C07FAE0: BLKS(0x0C07FAE0u);
	r9 = 0xB4u; UPD(0x0C07FAE2u, 1);  /* 0C07FAE0 mov.w @(disp,pc),Rn */
	IF(0x0C07FAE2u); MACL = r8 * r9;  /* 0C07FAE2 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C07FAE6u, 3);  /* 0C07FAE4 mov.l @(disp,pc),Rn */
	IF(0x0C07FAE6u); r2 = MACL;  /* 0C07FAE6 sts macl,Rn */
	r2 += r7;  /* 0C07FAE8 add Rm,Rn */
	r6 = 0xA6u; UPD(0x0C07FAECu, 3);  /* 0C07FAEA mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C07FAEC mov Rm,Rn */
	IF(0x0C07FAEEu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07FAF0u, 2);  /* 0C07FAEE mov.b @(r0,Rm),Rn */
	r0 = r5;  /* 0C07FAF0 mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C07FAF2 cmp/eq #imm,r0 */
	{ u32 c_ = T; r11 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07FB10u, 5); goto L_0C07FB10; } UPD(0x0C07FAF8u, 1); goto L_0C07FAF8; }  /* 0C07FAF4 bt/s */
L_0C07FAF8: BLKS(0x0C07FAF8u);
	r0 = 0xC0A9A70u; UPD(0x0C07FAFAu, 1);  /* 0C07FAF8 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C07FAFA mov Rm,Rn */
	r15 = r14;  /* 0C07FAFC mov Rm,Rn */
	IF(0x0C07FAFEu); PR = R32(r15); r15 += 4; UPD(0x0C07FB00u, 3);  /* 0C07FAFE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07FB02u, 1);  /* 0C07FB00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07FB04u, 1);  /* 0C07FB02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07FB06u, 1);  /* 0C07FB04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07FB08u, 1);  /* 0C07FB06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07FB0Au, 1);  /* 0C07FB08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07FB0Cu, 1);  /* 0C07FB0A mov.l @Rm+,Rn */
	IF(0x0C07FB0Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9A70u: TAIL(blk_f_0C0A9A70); default: JUMPD(tv_); } }  /* 0C07FB0C jmp @Rn */
L_0C07FB10: BLKS(0x0C07FB10u);
	r5 = R32(r2 + 0x24u); UPD(0x0C07FB12u, 1);  /* 0C07FB10 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07FB12 add #imm,Rn */
	r12 = 0x20000u; UPD(0x0C07FB16u, 2);  /* 0C07FB14 mov.l @(disp,pc),Rn */
	r10 = 0xC07CD80u; UPD(0x0C07FB18u, 1);  /* 0C07FB16 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C07FB18 mov #imm,Rn */
	W32(r15, r12); UPD(0x0C07FB1Cu, 2);  /* 0C07FB1A mov.l Rm,@Rn */
	r7 = 0x14u;  /* 0C07FB1C mov #imm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C07FB20u, 2);  /* 0C07FB1E mov.l Rm,@(disp,Rn) */
	r13 = 0x200000u; UPD(0x0C07FB22u, 1);  /* 0C07FB20 mov.l @(disp,pc),Rn */
	r6 = R32(r2 + 0x28u); UPD(0x0C07FB24u, 1);  /* 0C07FB22 mov.l @(disp,Rm),Rn */
	IF(0x0C07FB24u); { u32 t_ = r10; PR = 0x0C07FB28u; r5 += r13; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C07FB28u); }  /* 0C07FB24 jsr @Rn */
L_0C07FB28: BLKS(0x0C07FB28u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C07FAF8u, 3); goto L_0C07FAF8; }  /* 0C07FB28 bra */
L_0C07FB30: BLKS(0x0C07FB30u);
	r11 = 0xB4u; UPD(0x0C07FB32u, 1);  /* 0C07FB30 mov.w @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C07FB32 mov #imm,Rn */
	IF(0x0C07FB34u); MACL = r8 * r11;  /* 0C07FB34 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C07FB38u, 4);  /* 0C07FB36 mov.l @(disp,pc),Rn */
	IF(0x0C07FB38u); r0 = MACL;  /* 0C07FB38 sts macl,Rn */
	IF(0x0C07FB3Au); W32(r0 + r8, r12); UPD(0x0C07FB3Cu, 2);  /* 0C07FB3A mov.l Rm,@(r0,Rn) */
L_0C07FB3C: BLKS(0x0C07FB3Cu);
	r15 = r14;  /* 0C07FB3C mov Rm,Rn */
	IF(0x0C07FB3Eu); PR = R32(r15); r15 += 4; UPD(0x0C07FB40u, 2);  /* 0C07FB3E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07FB42u, 1);  /* 0C07FB40 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07FB44u, 1);  /* 0C07FB42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07FB46u, 1);  /* 0C07FB44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07FB48u, 1);  /* 0C07FB46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07FB4Au, 1);  /* 0C07FB48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07FB4Cu, 1);  /* 0C07FB4A mov.l @Rm+,Rn */
	IF(0x0C07FB4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07FB4C rts */
L_0C07FB50: BLKS(0x0C07FB50u);
	r10 = 0xB4u; UPD(0x0C07FB52u, 1);  /* 0C07FB50 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07FB52 add #imm,Rn */
	IF(0x0C07FB54u); MACL = r8 * r10;  /* 0C07FB54 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C07FB58u, 4);  /* 0C07FB56 mov.l @(disp,pc),Rn */
	IF(0x0C07FB58u); r9 = MACL;  /* 0C07FB58 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C07FB5Cu, 2);  /* 0C07FB5A mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C07FB5C add Rm,Rn */
	IF(0x0C07FB5Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07FB60u, 2);  /* 0C07FB5E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C07FB60 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C07FB64u, 2);  /* 0C07FB62 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07FB64 add #imm,Rn */
	IF(0x0C07FB66u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07FB68u, 2);  /* 0C07FB66 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C07FB68 mov #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C07FB6A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C07FB6Eu, 3);  /* 0C07FB6C mov.l Rm,@(disp,Rn) */
	r12 = 0xC0BD6F0u; UPD(0x0C07FB70u, 1);  /* 0C07FB6E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C07FB72u, 1);  /* 0C07FB70 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C07FB74u, 1);  /* 0C07FB72 mov.l @(disp,Rm),Rn */
	IF(0x0C07FB74u); { u32 t_ = r12; PR = 0x0C07FB78u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C07FB78u); }  /* 0C07FB74 jsr @Rn */
L_0C07FB78: BLKS(0x0C07FB78u);
	r4 = r8;  /* 0C07FB78 mov Rm,Rn */
	r8 = 0xC0A8CA0u; UPD(0x0C07FB7Cu, 2);  /* 0C07FB7A mov.l @(disp,pc),Rn */
	IF(0x0C07FB7Cu); { u32 t_ = r8; PR = 0x0C07FB80u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07FB80u); }  /* 0C07FB7C jsr @Rn */
L_0C07FB80: BLKS(0x0C07FB80u);
	IF(0x0C07FB80u); T = (s32)r0 >= 0;  /* 0C07FB80 cmp/pz Rn */
	{ u32 c_ = !T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07FBAEu, 4); goto L_0C07FBAE; } goto L_0C07FB86; }  /* 0C07FB82 bf/s */
L_0C07FB86: BLKS(0x0C07FB86u);
	r12 = 0x20000u; UPD(0x0C07FB88u, 2);  /* 0C07FB86 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07FB88 add #imm,Rn */
	r0 = 0x0u;  /* 0C07FB8A mov #imm,Rn */
	r8 = 0xC07CD80u; UPD(0x0C07FB8Eu, 3);  /* 0C07FB8C mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C07FB8E mov #imm,Rn */
	W32(r15, r12); UPD(0x0C07FB92u, 2);  /* 0C07FB90 mov.l Rm,@Rn */
	r4 = 0x3u;  /* 0C07FB92 mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C07FB96u, 2);  /* 0C07FB94 mov.l Rm,@(disp,Rn) */
	r6 = R32(r9 + 0x28u); UPD(0x0C07FB98u, 1);  /* 0C07FB96 mov.l @(disp,Rm),Rn */
	IF(0x0C07FB98u); { u32 t_ = r8; PR = 0x0C07FB9Cu; r5 = R32(r9 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C07FB9Cu); }  /* 0C07FB98 jsr @Rn */
L_0C07FB9C: BLKS(0x0C07FB9Cu);
	IF(0x0C07FB9Cu); MACL = r13 * r10;  /* 0C07FB9C mul.l Rm,Rn */
	r15 += 0x8u;  /* 0C07FB9E add #imm,Rn */
	IF(0x0C07FBA0u); r6 = MACL;  /* 0C07FBA0 sts macl,Rn */
	r10 = 0xA6u; UPD(0x0C07FBA4u, 5);  /* 0C07FBA2 mov.w @(disp,pc),Rn */
	r6 += r11;  /* 0C07FBA4 add Rm,Rn */
	r6 += r10;  /* 0C07FBA6 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C07FBAAu, 3);  /* 0C07FBA8 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C07FBAA add #imm,Rn */
	W8(r6, r7); UPD(0x0C07FBAEu, 2);  /* 0C07FBAC mov.b Rm,@Rn */
L_0C07FBAE: BLKS(0x0C07FBAEu);
	r11 = 0x0u;  /* 0C07FBAE mov #imm,Rn */
	{ W32(r9, r11); /* slot mov.l Rm,@Rn */ UPD(0x0C07FB3Cu, 4); goto L_0C07FB3C; }  /* 0C07FBB0 bra */
L_0C07FBC0: BLKS(0x0C07FBC0u);
	r5 = 0xB4u; UPD(0x0C07FBC2u, 1);  /* 0C07FBC0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07FBC2 add #imm,Rn */
	IF(0x0C07FBC4u); MACL = r8 * r5;  /* 0C07FBC4 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C07FBC8u, 4);  /* 0C07FBC6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C07FBCAu, 1);  /* 0C07FBC8 mov.w @(disp,pc),Rn */
	IF(0x0C07FBCAu); r8 = MACL;  /* 0C07FBCA sts macl,Rn */
	r8 += r4;  /* 0C07FBCC add Rm,Rn */
	IF(0x0C07FBCEu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07FBD0u, 3);  /* 0C07FBCE mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C07FBD0 mov #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C07FBD2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C07FBD6u, 3);  /* 0C07FBD4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07FBD6 add #imm,Rn */
	IF(0x0C07FBD8u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07FBDAu, 2);  /* 0C07FBD8 mov.b @(r0,Rm),Rn */
	r9 = r13 & 0xFF;  /* 0C07FBDA extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C07FBDEu, 2);  /* 0C07FBDC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07FBE0u, 1);  /* 0C07FBDE mov.l @Rm,Rn */
L_0C07FBE0: BLKS(0x0C07FBE0u);
	r9 = 0xC0BECB0u; UPD(0x0C07FBE2u, 1);  /* 0C07FBE0 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07FBE4u, 1);  /* 0C07FBE2 mov.l @(disp,Rm),Rn */
	IF(0x0C07FBE4u); { u32 t_ = r9; PR = 0x0C07FBE8u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C07FBE8u); }  /* 0C07FBE4 jsr @Rn */
L_0C07FBE8: BLKS(0x0C07FBE8u);
	r1 = 0x0u;  /* 0C07FBE8 mov #imm,Rn */
	UPD(0x0C07FBEAu, 1);
L_0C07FBEA: BLKS(0x0C07FBEAu);
	W32(r8, r1); UPD(0x0C07FBECu, 1);  /* 0C07FBEA mov.l Rm,@Rn */
L_0C07FBEC: BLKS(0x0C07FBECu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C07FB3Cu, 3); goto L_0C07FB3C; }  /* 0C07FBEC bra */
L_0C07FBF0: BLKS(0x0C07FBF0u);
	r9 = 0xC0A8CA0u; UPD(0x0C07FBF2u, 1);  /* 0C07FBF0 mov.l @(disp,pc),Rn */
	IF(0x0C07FBF2u); { u32 t_ = r9; PR = 0x0C07FBF6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07FBF6u); }  /* 0C07FBF2 jsr @Rn */
L_0C07FBF6: BLKS(0x0C07FBF6u);
	IF(0x0C07FBF6u); T = (s32)r0 >= 0;  /* 0C07FBF6 cmp/pz Rn */
	{ u32 c_ = !T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07FB30u, 4); goto L_0C07FB30; } goto L_0C07FBFC; }  /* 0C07FBF8 bf/s */
L_0C07FBFC: BLKS(0x0C07FBFCu);
	IF(0x0C07FBFCu); { u32 t_ = r9; PR = 0x0C07FC00u; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07FC00u); }  /* 0C07FBFC jsr @Rn */
L_0C07FC00: BLKS(0x0C07FC00u);
	IF(0x0C07FC00u); T = (s32)r0 >= 0;  /* 0C07FC00 cmp/pz Rn */
	if (!T) { UPD(0x0C07FB30u, 4); goto L_0C07FB30; }  /* 0C07FC02 bf */
L_0C07FC04: BLKS(0x0C07FC04u);
	r15 += 0xFFFFFFF8u;  /* 0C07FC04 add #imm,Rn */
	r11 = 0xB4u; UPD(0x0C07FC08u, 2);  /* 0C07FC06 mov.w @(disp,pc),Rn */
	IF(0x0C07FC08u); MACL = r0 * r11;  /* 0C07FC08 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C07FC0Cu, 3);  /* 0C07FC0A mov.l @(disp,pc),Rn */
	r2 = 0xA5u; UPD(0x0C07FC0Eu, 1);  /* 0C07FC0C mov.w @(disp,pc),Rn */
	IF(0x0C07FC0Eu); r10 = MACL;  /* 0C07FC0E sts macl,Rn */
	r10 += r12;  /* 0C07FC10 add Rm,Rn */
	r10 += r2;  /* 0C07FC12 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C07FC16u, 4);  /* 0C07FC14 mov.b @Rm,Rn */
	IF(0x0C07FC16u); MACL = r8 * r11;  /* 0C07FC16 mul.l Rm,Rn */
	r0 += 0x1u;  /* 0C07FC18 add #imm,Rn */
	W8(r10, r0); UPD(0x0C07FC1Cu, 4);  /* 0C07FC1A mov.b Rm,@Rn */
	IF(0x0C07FC1Cu); r8 = MACL;  /* 0C07FC1C sts macl,Rn */
	r10 = 0xB0u; UPD(0x0C07FC20u, 2);  /* 0C07FC1E mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C07FC20 add Rm,Rn */
	r10 += r8;  /* 0C07FC22 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C07FC26u, 3);  /* 0C07FC24 mov.b @Rm,Rn */
	r9 = r7 & 0xFF;  /* 0C07FC26 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C07FC2Au, 2);  /* 0C07FC28 mov.l Rm,@Rn */
	r9 = 0xA9u; UPD(0x0C07FC2Cu, 1);  /* 0C07FC2A mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C07FC2C add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C07FC30u, 2);  /* 0C07FC2E mov.b @Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C07FC30 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07FC34u, 2);  /* 0C07FC32 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C07FC36u, 1);  /* 0C07FC34 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C07FC36 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C07FC3Au, 2);  /* 0C07FC38 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07FC3Cu, 1);  /* 0C07FC3A mov.l @(disp,Rm),Rn */
	IF(0x0C07FC3Cu); { u32 t_ = r0; PR = 0x0C07FC40u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C07FC40u); }  /* 0C07FC3C jsr @Rn */
L_0C07FC40: BLKS(0x0C07FC40u);
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C07FC42u, 1);  /* 0C07FC40 mov.b @Rm,Rn */
	r5 = 0x2u;  /* 0C07FC42 mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C07FC44 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C07FC48u, 3);  /* 0C07FC46 mov.l Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C07FC4Au, 1);  /* 0C07FC48 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C07FC4A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C07FC4Eu, 2);  /* 0C07FC4C mov.l Rm,@(disp,Rn) */
	r10 = 0xC0BECB0u; UPD(0x0C07FC50u, 1);  /* 0C07FC4E mov.l @(disp,pc),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C07FC52u, 1);  /* 0C07FC50 mov.l @(disp,Rm),Rn */
	r4 = R32(r8); UPD(0x0C07FC54u, 1);  /* 0C07FC52 mov.l @Rm,Rn */
	IF(0x0C07FC54u); { u32 t_ = r10; PR = 0x0C07FC58u; r6 = R32(r8 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C07FC58u); }  /* 0C07FC54 jsr @Rn */
L_0C07FC58: BLKS(0x0C07FC58u);
	r7 = 0x20000u; UPD(0x0C07FC5Au, 1);  /* 0C07FC58 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C07FC5A mov #imm,Rn */
	r9 = 0xC07CD80u; UPD(0x0C07FC5Eu, 2);  /* 0C07FC5C mov.l @(disp,pc),Rn */
	r4 = 0xAu;  /* 0C07FC5E mov #imm,Rn */
	W32(r15, r7); UPD(0x0C07FC62u, 2);  /* 0C07FC60 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C07FC64u, 1);  /* 0C07FC62 mov.l Rm,@(disp,Rn) */
	r7 = 0x14u;  /* 0C07FC64 mov #imm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C07FC68u, 2);  /* 0C07FC66 mov.l @(disp,Rm),Rn */
	IF(0x0C07FC68u); { u32 t_ = r9; PR = 0x0C07FC6Cu; r5 = R32(r8 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C07FC6Cu); }  /* 0C07FC68 jsr @Rn */
L_0C07FC6C: BLKS(0x0C07FC6Cu);
	IF(0x0C07FC6Cu); MACL = r13 * r11;  /* 0C07FC6C mul.l Rm,Rn */
	IF(0x0C07FC6Eu); r6 = MACL;  /* 0C07FC6E sts macl,Rn */
	r6 += r12;  /* 0C07FC70 add Rm,Rn */
	W32(r6, r10); UPD(0x0C07FC74u, 5);  /* 0C07FC72 mov.l Rm,@Rn */
	{ W32(r8, r10); /* slot mov.l Rm,@Rn */ UPD(0x0C07FBECu, 3); goto L_0C07FBEC; }  /* 0C07FC74 bra */
L_0C07FCB0: BLKS(0x0C07FCB0u);
	r9 = 0xC0A8CA0u; UPD(0x0C07FCB2u, 1);  /* 0C07FCB0 mov.l @(disp,pc),Rn */
	IF(0x0C07FCB2u); { u32 t_ = r9; PR = 0x0C07FCB6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07FCB6u); }  /* 0C07FCB2 jsr @Rn */
L_0C07FCB6: BLKS(0x0C07FCB6u);
	IF(0x0C07FCB6u); T = (s32)r0 >= 0;  /* 0C07FCB6 cmp/pz Rn */
	{ u32 c_ = !T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07FCC4u, 4); goto L_0C07FCC4; } goto L_0C07FCBC; }  /* 0C07FCB8 bf/s */
L_0C07FCBC: BLKS(0x0C07FCBCu);
	IF(0x0C07FCBCu); { u32 t_ = r9; PR = 0x0C07FCC0u; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07FCC0u); }  /* 0C07FCBC jsr @Rn */
L_0C07FCC0: BLKS(0x0C07FCC0u);
	IF(0x0C07FCC0u); T = (s32)r0 >= 0;  /* 0C07FCC0 cmp/pz Rn */
	if (T) { UPD(0x0C07FCC8u, 4); goto L_0C07FCC8; }  /* 0C07FCC2 bt */
L_0C07FCC4: BLKS(0x0C07FCC4u);
	{ IF(0x0C07FCC6u); ; /* slot nop */ UPD(0x0C07FB30u, 3); goto L_0C07FB30; }  /* 0C07FCC4 bra */
L_0C07FCC8: BLKS(0x0C07FCC8u);
	r11 = 0xB4u; UPD(0x0C07FCCAu, 1);  /* 0C07FCC8 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07FCCA add #imm,Rn */
	IF(0x0C07FCCCu); MACL = r8 * r11;  /* 0C07FCCC mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C07FCD0u, 4);  /* 0C07FCCE mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C07FCD0 mov #imm,Rn */
	IF(0x0C07FCD2u); r8 = MACL;  /* 0C07FCD2 sts macl,Rn */
	r10 = 0xB0u; UPD(0x0C07FCD6u, 3);  /* 0C07FCD4 mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C07FCD6 add Rm,Rn */
	r10 += r8;  /* 0C07FCD8 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r10); UPD(0x0C07FCDCu, 3);  /* 0C07FCDA mov.b @Rm,Rn */
	r2 = r9 & 0xFF;  /* 0C07FCDC extu.b Rm,Rn */
	r9 = 0xA9u; UPD(0x0C07FCE0u, 2);  /* 0C07FCDE mov.w @(disp,pc),Rn */
	W32(r15, r2); UPD(0x0C07FCE2u, 1);  /* 0C07FCE0 mov.l Rm,@Rn */
	r9 += r8;  /* 0C07FCE2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C07FCE6u, 2);  /* 0C07FCE4 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C07FCE6 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C07FCEAu, 2);  /* 0C07FCE8 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C07FCECu, 1);  /* 0C07FCEA mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07FCEEu, 1);  /* 0C07FCEC mov.l @(disp,Rm),Rn */
	r4 = R32(r8); UPD(0x0C07FCF0u, 1);  /* 0C07FCEE mov.l @Rm,Rn */
	IF(0x0C07FCF0u); { u32 t_ = r0; PR = 0x0C07FCF4u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C07FCF4u); }  /* 0C07FCF0 jsr @Rn */
L_0C07FCF4: BLKS(0x0C07FCF4u);
	r6 = (u32)(s32)(s8)R8(r10); UPD(0x0C07FCF6u, 1);  /* 0C07FCF4 mov.b @Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C07FCF6 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C07FCFAu, 2);  /* 0C07FCF8 mov.l Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C07FCFCu, 1);  /* 0C07FCFA mov.b @Rm,Rn */
	r5 = 0x2u;  /* 0C07FCFC mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C07FCFE extu.b Rm,Rn */
	r9 = 0xC0BECB0u; UPD(0x0C07FD02u, 3);  /* 0C07FD00 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C07FD04u, 1);  /* 0C07FD02 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07FD06u, 1);  /* 0C07FD04 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07FD08u, 1);  /* 0C07FD06 mov.l @(disp,Rm),Rn */
	IF(0x0C07FD08u); { u32 t_ = r9; PR = 0x0C07FD0Cu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C07FD0Cu); }  /* 0C07FD08 jsr @Rn */
L_0C07FD0C: BLKS(0x0C07FD0Cu);
	IF(0x0C07FD0Cu); MACL = r13 * r11;  /* 0C07FD0C mul.l Rm,Rn */
	r1 = 0x0u;  /* 0C07FD0E mov #imm,Rn */
	IF(0x0C07FD10u); r0 = MACL;  /* 0C07FD10 sts macl,Rn */
	{ IF(0x0C07FD14u); W32(r0 + r12, r1); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C07FBEAu, 7); goto L_0C07FBEA; }  /* 0C07FD12 bra */
L_0C07FD20: BLKS(0x0C07FD20u);
	r4 = 0xB4u; UPD(0x0C07FD22u, 1);  /* 0C07FD20 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07FD22 add #imm,Rn */
	IF(0x0C07FD24u); MACL = r8 * r4;  /* 0C07FD24 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C07FD28u, 4);  /* 0C07FD26 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C07FD28 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C07FD2Cu, 2);  /* 0C07FD2A mov.w @(disp,pc),Rn */
	IF(0x0C07FD2Cu); r8 = MACL;  /* 0C07FD2C sts macl,Rn */
	r8 += r3;  /* 0C07FD2E add Rm,Rn */
	IF(0x0C07FD30u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07FD32u, 3);  /* 0C07FD30 mov.b @(r0,Rm),Rn */
	r12 = r11 & 0xFF;  /* 0C07FD32 extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C07FD36u, 2);  /* 0C07FD34 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07FD36 add #imm,Rn */
	IF(0x0C07FD38u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07FD3Au, 2);  /* 0C07FD38 mov.b @(r0,Rm),Rn */
	r13 = r10 & 0xFF;  /* 0C07FD3A extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C07FD3Eu, 2);  /* 0C07FD3C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C07FBE0u, 3); goto L_0C07FBE0; }  /* 0C07FD3E bra */
L_0C07FD60: BLKS(0x0C07FD60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07FD62u, 1);  /* 0C07FD60 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07FD64u, 1);  /* 0C07FD62 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07FD66u, 1);  /* 0C07FD64 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C07FD66 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07FD6Au, 2);  /* 0C07FD68 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C07FD6Cu, 1);  /* 0C07FD6A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07FD6Eu, 1);  /* 0C07FD6C mov.l Rm,@-Rn */
	IF(0x0C07FD6Eu); MACL = r9 * r3;  /* 0C07FD6E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07FD72u, 3);  /* 0C07FD70 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C07FD74u, 1);  /* 0C07FD72 mov.l @(disp,pc),Rn */
	IF(0x0C07FD74u); r2 = MACL;  /* 0C07FD74 sts macl,Rn */
	IF(0x0C07FD76u); r15 -= 4; W32(r15, PR); UPD(0x0C07FD78u, 2);  /* 0C07FD76 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07FD78 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07FD7Cu, 2);  /* 0C07FD7A mov.l @(disp,Rm),Rn */
	r0 = 0x8u;  /* 0C07FD7C mov #imm,Rn */
	T = r2 > r0;  /* 0C07FD7E cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07FDD8u, 5); goto L_0C07FDD8; } goto L_0C07FD84; }  /* 0C07FD80 bt/s */
L_0C07FD84: BLKS(0x0C07FD84u);
	r0 = 0xC07FD94u;  /* 0C07FD84 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07FD86 add Rm,Rn */
	IF(0x0C07FD88u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07FD8Au, 4);  /* 0C07FD88 mov.w @(r0,Rm),Rn */
	IF(0x0C07FD8Au); { u32 tv_ = (r4 + 0x0C07FD8Eu); u32 t_ = PHYS(tv_); IF(0x0C07FD8Cu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07FDB0u: goto L_0C07FDB0; case 0x0C07FE60u: goto L_0C07FE60; case 0x0C07FF50u: goto L_0C07FF50; case 0x0C07FFE0u: goto L_0C07FFE0; case 0x0C080020u: goto L_0C080020; case 0x0C080180u: goto L_0C080180; case 0x0C0802C0u: goto L_0C0802C0; default: JUMPD(tv_); } }  /* 0C07FD8A braf Rn */
L_0C07FDB0: BLKS(0x0C07FDB0u);
	r8 = 0xC0A9CB0u; UPD(0x0C07FDB2u, 1);  /* 0C07FDB0 mov.l @(disp,pc),Rn */
	IF(0x0C07FDB2u); { u32 t_ = r8; PR = 0x0C07FDB6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C07FDB6u); }  /* 0C07FDB2 jsr @Rn */
L_0C07FDB6: BLKS(0x0C07FDB6u);
	r7 = 0xC0A9B40u; UPD(0x0C07FDB8u, 1);  /* 0C07FDB6 mov.l @(disp,pc),Rn */
	IF(0x0C07FDB8u); { u32 t_ = r7; PR = 0x0C07FDBCu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9B40, 0x0C0A9B40u, 0x0C07FDBCu); }  /* 0C07FDB8 jsr @Rn */
L_0C07FDBC: BLKS(0x0C07FDBCu);
	r6 = 0xB4u; UPD(0x0C07FDBEu, 1);  /* 0C07FDBC mov.w @(disp,pc),Rn */
	IF(0x0C07FDBEu); MACL = r9 * r6;  /* 0C07FDBE mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C07FDC2u, 3);  /* 0C07FDC0 mov.l @(disp,pc),Rn */
	IF(0x0C07FDC2u); r2 = MACL;  /* 0C07FDC2 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C07FDC6u, 2);  /* 0C07FDC4 mov.w @(disp,pc),Rn */
	r2 += r5;  /* 0C07FDC6 add Rm,Rn */
	r3 += r2;  /* 0C07FDC8 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C07FDCCu, 3);  /* 0C07FDCA mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C07FDCC add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C07FDCE extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C07FDD0 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07FDF0u, 6); goto L_0C07FDF0; } UPD(0x0C07FDD6u, 1); goto L_0C07FDD6; }  /* 0C07FDD2 bt/s */
L_0C07FDD6: BLKS(0x0C07FDD6u);
	IF(0x0C07FDD6u); ;  /* 0C07FDD6 nop */
	UPD(0x0C07FDD8u, 1);
L_0C07FDD8: BLKS(0x0C07FDD8u);
	r15 = r14;  /* 0C07FDD8 mov Rm,Rn */
	IF(0x0C07FDDAu); PR = R32(r15); r15 += 4; UPD(0x0C07FDDCu, 2);  /* 0C07FDDA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07FDDEu, 1);  /* 0C07FDDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07FDE0u, 1);  /* 0C07FDDE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07FDE2u, 1);  /* 0C07FDE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07FDE4u, 1);  /* 0C07FDE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07FDE6u, 1);  /* 0C07FDE4 mov.l @Rm+,Rn */
	IF(0x0C07FDE6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07FDE6 rts */
L_0C07FDF0: BLKS(0x0C07FDF0u);
	r9 = 0x0u;  /* 0C07FDF0 mov #imm,Rn */
	W8(r3, r9); UPD(0x0C07FDF4u, 2);  /* 0C07FDF2 mov.b Rm,@Rn */
	r8 = r2;  /* 0C07FDF4 mov Rm,Rn */
	r11 = 0xC18CA8Cu; UPD(0x0C07FDF8u, 2);  /* 0C07FDF6 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C07FDF8 mov #imm,Rn */
	r10 = 0xC0BEEF0u; UPD(0x0C07FDFCu, 2);  /* 0C07FDFA mov.l @(disp,pc),Rn */
L_0C07FDFC: BLKS(0x0C07FDFCu);
	r1 = r9;  /* 0C07FDFC mov Rm,Rn */
	IF(0x0C07FDFEu); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C07FDFE rotl Rn */
	IF(0x0C07FE00u); r0 = T;  /* 0C07FE00 movt Rn */
	r0 += r9;  /* 0C07FE02 add Rm,Rn */
	IF(0x0C07FE04u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07FE04 shar Rn */
	IF(0x0C07FE06u); r0 <<= 2;  /* 0C07FE06 shll2 Rn */
	IF(0x0C07FE08u); r7 = R32(r0 + r11); UPD(0x0C07FE0Au, 7);  /* 0C07FE08 mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C07FE0A add #imm,Rn */
	r0 = r9;  /* 0C07FE0C mov Rm,Rn */
	r5 = 0xC18CA98u; UPD(0x0C07FE10u, 3);  /* 0C07FE0E mov.l @(disp,pc),Rn */
	IF(0x0C07FE10u); r0 <<= 2;  /* 0C07FE10 shll2 Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07FE14u, 2);  /* 0C07FE12 mov.l @(disp,Rm),Rn */
	IF(0x0C07FE14u); r3 = R32(r0 + r5); UPD(0x0C07FE16u, 1);  /* 0C07FE14 mov.l @(r0,Rm),Rn */
	r6 += r7;  /* 0C07FE16 add Rm,Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C07FE1Au, 2);  /* 0C07FE18 mov.l @(disp,Rm),Rn */
	r0 = r9;  /* 0C07FE1A mov Rm,Rn */
	r4 = 0xC18CAB0u; UPD(0x0C07FE1Eu, 2);  /* 0C07FE1C mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C07FE1E and #imm,r0 */
	r7 += r3;  /* 0C07FE20 add Rm,Rn */
	IF(0x0C07FE22u); r0 <<= 2;  /* 0C07FE22 shll2 Rn */
	IF(0x0C07FE24u); r3 = R32(r0 + r4); UPD(0x0C07FE26u, 4);  /* 0C07FE24 mov.l @(r0,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C07FE28u, 1);  /* 0C07FE26 mov.w @(disp,pc),Rn */
	IF(0x0C07FE28u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07FE2Au, 1);  /* 0C07FE28 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C07FE2A extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C07FE2Eu, 2);  /* 0C07FE2C mov.l Rm,@Rn */
	r12 = 0xA9u; UPD(0x0C07FE30u, 1);  /* 0C07FE2E mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07FE30 mov Rm,Rn */
	IF(0x0C07FE32u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C07FE34u, 2);  /* 0C07FE32 mov.b @(r0,Rm),Rn */
	r2 = 0xFFFF4000u; UPD(0x0C07FE36u, 1);  /* 0C07FE34 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C07FE36 extu.b Rm,Rn */
	r4 += 0xFFFFFFFFu;  /* 0C07FE38 add #imm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07FE3Cu, 3);  /* 0C07FE3A mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C07FE3C mov #imm,Rn */
	W32(r15 + 0x8u, r2); UPD(0x0C07FE40u, 2);  /* 0C07FE3E mov.l Rm,@(disp,Rn) */
	r12 = 0x5u;  /* 0C07FE40 mov #imm,Rn */
	W32(r15 + 0xCu, r3); UPD(0x0C07FE44u, 2);  /* 0C07FE42 mov.l Rm,@(disp,Rn) */
	IF(0x0C07FE44u); { u32 t_ = r10; PR = 0x0C07FE48u; r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C07FE48u); }  /* 0C07FE44 jsr @Rn */
L_0C07FE48: BLKS(0x0C07FE48u);
	r0 = r9;  /* 0C07FE48 mov Rm,Rn */
	r0 += 0x1u;  /* 0C07FE4A add #imm,Rn */
	r9 = (u32)(s32)(s16)r0;  /* 0C07FE4C exts.w Rm,Rn */
	T = (s32)r9 > (s32)r12;  /* 0C07FE4E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07FDFCu, 7); goto L_0C07FDFC; } goto L_0C07FE54; }  /* 0C07FE50 bf/s */
L_0C07FE54: BLKS(0x0C07FE54u);
	{ IF(0x0C07FE56u); ; /* slot nop */ UPD(0x0C07FDD8u, 4); goto L_0C07FDD8; }  /* 0C07FE54 bra */
L_0C07FE60: BLKS(0x0C07FE60u);
	r10 = 0xC0A8CA0u; UPD(0x0C07FE62u, 1);  /* 0C07FE60 mov.l @(disp,pc),Rn */
	IF(0x0C07FE62u); { u32 t_ = r10; PR = 0x0C07FE66u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07FE66u); }  /* 0C07FE62 jsr @Rn */
L_0C07FE66: BLKS(0x0C07FE66u);
	IF(0x0C07FE66u); T = (s32)r0 >= 0;  /* 0C07FE66 cmp/pz Rn */
	if (!T) { UPD(0x0C07FF30u, 4); goto L_0C07FF30; }  /* 0C07FE68 bf */
L_0C07FE6A: BLKS(0x0C07FE6Au);
	r12 = 0xB4u; UPD(0x0C07FE6Cu, 1);  /* 0C07FE6A mov.w @(disp,pc),Rn */
	IF(0x0C07FE6Cu); MACL = r9 * r12;  /* 0C07FE6C mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C07FE70u, 3);  /* 0C07FE6E mov.l @(disp,pc),Rn */
	IF(0x0C07FE70u); r6 = MACL;  /* 0C07FE70 sts macl,Rn */
	IF(0x0C07FE72u); MACL = r0 * r12;  /* 0C07FE72 mul.l Rm,Rn */
	r6 += r8;  /* 0C07FE74 add Rm,Rn */
	r4 = R32(r6); UPD(0x0C07FE78u, 5);  /* 0C07FE76 mov.l @Rm,Rn */
	IF(0x0C07FE78u); r12 = MACL;  /* 0C07FE78 sts macl,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C07FE7Cu, 2);  /* 0C07FE7A mov.w @(disp,pc),Rn */
	r12 += r8;  /* 0C07FE7C add Rm,Rn */
	r4 &= r2;  /* 0C07FE7E and Rm,Rn */
	r10 = R32(r12 + 0x24u); UPD(0x0C07FE82u, 3);  /* 0C07FE80 mov.l @(disp,Rm),Rn */
	r8 = r6;  /* 0C07FE82 mov Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C07FE86u, 2);  /* 0C07FE84 mov.l @(disp,Rm),Rn */
	r3 = R32(r12); UPD(0x0C07FE88u, 1);  /* 0C07FE86 mov.l @Rm,Rn */
	r0 = 0xA4u; UPD(0x0C07FE8Au, 1);  /* 0C07FE88 mov.w @(disp,pc),Rn */
	r11 = R32(r6 + 0x2Cu); UPD(0x0C07FE8Cu, 1);  /* 0C07FE8A mov.l @(disp,Rm),Rn */
	r12 += r0;  /* 0C07FE8C add Rm,Rn */
	r2 = 0x99u; UPD(0x0C07FE90u, 2);  /* 0C07FE8E mov.w @(disp,pc),Rn */
	r10 += r11;  /* 0C07FE90 add Rm,Rn */
	r2 += r6;  /* 0C07FE92 add Rm,Rn */
	r5 = 0x100u; UPD(0x0C07FE96u, 3);  /* 0C07FE94 mov.w @(disp,pc),Rn */
	r12 += 0x1u;  /* 0C07FE96 add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C07FE9Au, 2);  /* 0C07FE98 mov.b @Rm,Rn */
	r8 += r0;  /* 0C07FE9A add Rm,Rn */
	r1 = R32(r6 + 0x30u); UPD(0x0C07FE9Eu, 2);  /* 0C07FE9C mov.l @(disp,Rm),Rn */
	r3 &= r5;  /* 0C07FE9E and Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r12); UPD(0x0C07FEA2u, 2);  /* 0C07FEA0 mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C07FEA2 add #imm,Rn */
	r7 += r1;  /* 0C07FEA4 add Rm,Rn */
	r4 |= r3;  /* 0C07FEA6 or Rm,Rn */
	r8 += 0x1u;  /* 0C07FEA8 add #imm,Rn */
	r0 = r11 & 0xFF;  /* 0C07FEAA extu.b Rm,Rn */
	W32(r6 + 0x24u, r10); UPD(0x0C07FEAEu, 6);  /* 0C07FEAC mov.l Rm,@(disp,Rn) */
	T = r0 == 0xCu;  /* 0C07FEAE cmp/eq #imm,r0 */
	W32(r6 + 0x28u, r7); UPD(0x0C07FEB2u, 2);  /* 0C07FEB0 mov.l Rm,@(disp,Rn) */
	W32(r6, r4); UPD(0x0C07FEB4u, 1);  /* 0C07FEB2 mov.l Rm,@Rn */
	W8(r8, r9); UPD(0x0C07FEB6u, 1);  /* 0C07FEB4 mov.b Rm,@Rn */
	{ u32 c_ = !T; W8(r2, r11); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07FDD8u, 3); goto L_0C07FDD8; } UPD(0x0C07FEBAu, 1); goto L_0C07FEBA; }  /* 0C07FEB6 bf/s */
L_0C07FEBA: BLKS(0x0C07FEBAu);
	r9 = 0x0u;  /* 0C07FEBA mov #imm,Rn */
	W8(r2, r9); UPD(0x0C07FEBEu, 2);  /* 0C07FEBC mov.b Rm,@Rn */
	r8 = r6;  /* 0C07FEBE mov Rm,Rn */
	r11 = 0xC18CAB8u; UPD(0x0C07FEC2u, 2);  /* 0C07FEC0 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C07FEC2 mov #imm,Rn */
	r10 = 0xC0BEEF0u; UPD(0x0C07FEC6u, 2);  /* 0C07FEC4 mov.l @(disp,pc),Rn */
	IF(0x0C07FEC6u); ;  /* 0C07FEC6 nop */
	UPD(0x0C07FEC8u, 1);
L_0C07FEC8: BLKS(0x0C07FEC8u);
	r1 = r9;  /* 0C07FEC8 mov Rm,Rn */
	IF(0x0C07FECAu); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C07FECA rotl Rn */
	IF(0x0C07FECCu); r0 = T;  /* 0C07FECC movt Rn */
	r0 += r9;  /* 0C07FECE add Rm,Rn */
	IF(0x0C07FED0u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07FED0 shar Rn */
	IF(0x0C07FED2u); r0 <<= 2;  /* 0C07FED2 shll2 Rn */
	IF(0x0C07FED4u); r7 = R32(r0 + r11); UPD(0x0C07FED6u, 7);  /* 0C07FED4 mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C07FED6 add #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07FEDAu, 2);  /* 0C07FED8 mov.l @(disp,Rm),Rn */
	r0 = r9;  /* 0C07FEDA mov Rm,Rn */
	r12 = 0xC18CAC8u; UPD(0x0C07FEDEu, 2);  /* 0C07FEDC mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C07FEDE and #imm,r0 */
	r6 += r7;  /* 0C07FEE0 add Rm,Rn */
	IF(0x0C07FEE2u); r0 <<= 2;  /* 0C07FEE2 shll2 Rn */
	IF(0x0C07FEE4u); r3 = R32(r0 + r12); UPD(0x0C07FEE6u, 4);  /* 0C07FEE4 mov.l @(r0,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C07FEE8u, 1);  /* 0C07FEE6 mov.l @(disp,Rm),Rn */
	r2 = 0xC18CAD0u; UPD(0x0C07FEEAu, 1);  /* 0C07FEE8 mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C07FEEA add Rm,Rn */
	IF(0x0C07FEECu); r3 = R32(r0 + r2); UPD(0x0C07FEEEu, 2);  /* 0C07FEEC mov.l @(r0,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C07FEF0u, 1);  /* 0C07FEEE mov.w @(disp,pc),Rn */
	IF(0x0C07FEF0u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07FEF2u, 1);  /* 0C07FEF0 mov.b @(r0,Rm),Rn */
	r0 = r5 & 0xFF;  /* 0C07FEF2 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C07FEF6u, 2);  /* 0C07FEF4 mov.l Rm,@Rn */
	r4 = 0xA9u; UPD(0x0C07FEF8u, 1);  /* 0C07FEF6 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07FEF8 mov Rm,Rn */
	IF(0x0C07FEFAu); r12 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C07FEFCu, 2);  /* 0C07FEFA mov.b @(r0,Rm),Rn */
	r5 = 0x4000u; UPD(0x0C07FEFEu, 1);  /* 0C07FEFC mov.w @(disp,pc),Rn */
	r2 = r12 & 0xFF;  /* 0C07FEFE extu.b Rm,Rn */
	r4 = 0x808080u; UPD(0x0C07FF02u, 2);  /* 0C07FF00 mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C07FF04u, 1);  /* 0C07FF02 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r2); UPD(0x0C07FF06u, 1);  /* 0C07FF04 mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C07FF06 mov #imm,Rn */
	W32(r15 + 0xCu, r3); UPD(0x0C07FF0Au, 2);  /* 0C07FF08 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r4); UPD(0x0C07FF0Cu, 1);  /* 0C07FF0A mov.l Rm,@(disp,Rn) */
	IF(0x0C07FF0Cu); { u32 t_ = r10; PR = 0x0C07FF10u; r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C07FF10u); }  /* 0C07FF0C jsr @Rn */
L_0C07FF10: BLKS(0x0C07FF10u);
	r0 = r9;  /* 0C07FF10 mov Rm,Rn */
	r0 += 0x1u;  /* 0C07FF12 add #imm,Rn */
	r9 = (u32)(s32)(s16)r0;  /* 0C07FF14 exts.w Rm,Rn */
	r6 = 0x7u;  /* 0C07FF16 mov #imm,Rn */
	T = (s32)r9 > (s32)r6;  /* 0C07FF18 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07FEC8u, 8); goto L_0C07FEC8; } goto L_0C07FF1E; }  /* 0C07FF1A bf/s */
L_0C07FF1E: BLKS(0x0C07FF1Eu);
	{ IF(0x0C07FF20u); ; /* slot nop */ UPD(0x0C07FDD8u, 4); goto L_0C07FDD8; }  /* 0C07FF1E bra */
L_0C07FF30: BLKS(0x0C07FF30u);
	r1 = 0xC07FA90u; UPD(0x0C07FF32u, 1);  /* 0C07FF30 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C07FF32 mov Rm,Rn */
	UPD(0x0C07FF34u, 1);
L_0C07FF34: BLKS(0x0C07FF34u);
	r15 = r14;  /* 0C07FF34 mov Rm,Rn */
	IF(0x0C07FF36u); PR = R32(r15); r15 += 4; UPD(0x0C07FF38u, 2);  /* 0C07FF36 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07FF3Au, 1);  /* 0C07FF38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07FF3Cu, 1);  /* 0C07FF3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07FF3Eu, 1);  /* 0C07FF3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07FF40u, 1);  /* 0C07FF3E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07FF42u, 1);  /* 0C07FF40 mov.l @Rm+,Rn */
	IF(0x0C07FF42u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C069B90u: TAIL(blk_f_0C069B90); case 0x0C07FA90u: goto L_0C07FA90; case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C07FF42 jmp @Rn */
L_0C07FF50: BLKS(0x0C07FF50u);
	r10 = 0xC0A8CA0u; UPD(0x0C07FF52u, 1);  /* 0C07FF50 mov.l @(disp,pc),Rn */
	IF(0x0C07FF52u); { u32 t_ = r10; PR = 0x0C07FF56u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07FF56u); }  /* 0C07FF52 jsr @Rn */
L_0C07FF56: BLKS(0x0C07FF56u);
	IF(0x0C07FF56u); T = (s32)r0 >= 0;  /* 0C07FF56 cmp/pz Rn */
	if (!T) { UPD(0x0C07FF30u, 4); goto L_0C07FF30; }  /* 0C07FF58 bf */
L_0C07FF5A: BLKS(0x0C07FF5Au);
	r2 = 0xB4u; UPD(0x0C07FF5Cu, 1);  /* 0C07FF5A mov.w @(disp,pc),Rn */
	IF(0x0C07FF5Cu); MACL = r9 * r2;  /* 0C07FF5C mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C07FF60u, 3);  /* 0C07FF5E mov.l @(disp,pc),Rn */
	IF(0x0C07FF60u); r11 = MACL;  /* 0C07FF60 sts macl,Rn */
	IF(0x0C07FF62u); MACL = r0 * r2;  /* 0C07FF62 mul.l Rm,Rn */
	r11 += r10;  /* 0C07FF64 add Rm,Rn */
	r8 = R32(r11); UPD(0x0C07FF68u, 5);  /* 0C07FF66 mov.l @Rm,Rn */
	IF(0x0C07FF68u); r4 = MACL;  /* 0C07FF68 sts macl,Rn */
	r4 += r10;  /* 0C07FF6A add Rm,Rn */
	r9 = R32(r4); UPD(0x0C07FF6Eu, 3);  /* 0C07FF6C mov.l @Rm,Rn */
	r0 = 0xFFFFFEFFu; UPD(0x0C07FF70u, 1);  /* 0C07FF6E mov.w @(disp,pc),Rn */
	r6 = 0x100u; UPD(0x0C07FF72u, 1);  /* 0C07FF70 mov.w @(disp,pc),Rn */
	r8 &= r0;  /* 0C07FF72 and Rm,Rn */
	r12 = R32(r4 + 0x24u); UPD(0x0C07FF76u, 2);  /* 0C07FF74 mov.l @(disp,Rm),Rn */
	r9 &= r6;  /* 0C07FF76 and Rm,Rn */
	r5 = R32(r4 + 0x28u); UPD(0x0C07FF7Au, 2);  /* 0C07FF78 mov.l @(disp,Rm),Rn */
	r8 |= r9;  /* 0C07FF7A or Rm,Rn */
	r7 = R32(r11 + 0x2Cu); UPD(0x0C07FF7Eu, 2);  /* 0C07FF7C mov.l @(disp,Rm),Rn */
	r3 = R32(r11 + 0x30u); UPD(0x0C07FF80u, 1);  /* 0C07FF7E mov.l @(disp,Rm),Rn */
	r12 += r7;  /* 0C07FF80 add Rm,Rn */
	r5 += r3;  /* 0C07FF82 add Rm,Rn */
	W32(r11 + 0x24u, r12); UPD(0x0C07FF86u, 3);  /* 0C07FF84 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r5); UPD(0x0C07FF88u, 1);  /* 0C07FF86 mov.l Rm,@(disp,Rn) */
	{ W32(r11, r8); /* slot mov.l Rm,@Rn */ UPD(0x0C07FDD8u, 3); goto L_0C07FDD8; }  /* 0C07FF88 bra */
L_0C07FFE0: BLKS(0x0C07FFE0u);
	r11 = 0xC0A8CA0u; UPD(0x0C07FFE2u, 1);  /* 0C07FFE0 mov.l @(disp,pc),Rn */
	IF(0x0C07FFE2u); { u32 t_ = r11; PR = 0x0C07FFE6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07FFE6u); }  /* 0C07FFE2 jsr @Rn */
L_0C07FFE6: BLKS(0x0C07FFE6u);
	IF(0x0C07FFE6u); T = (s32)r0 >= 0;  /* 0C07FFE6 cmp/pz Rn */
	if (!T) { UPD(0x0C07FF30u, 4); goto L_0C07FF30; }  /* 0C07FFE8 bf */
L_0C07FFEA: BLKS(0x0C07FFEAu);
	r2 = 0xB4u; UPD(0x0C07FFECu, 1);  /* 0C07FFEA mov.w @(disp,pc),Rn */
	IF(0x0C07FFECu); MACL = r0 * r2;  /* 0C07FFEC mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C07FFF0u, 3);  /* 0C07FFEE mov.l @(disp,pc),Rn */
	IF(0x0C07FFF0u); r7 = MACL;  /* 0C07FFF0 sts macl,Rn */
	r7 += r6;  /* 0C07FFF2 add Rm,Rn */
	r8 = R32(r7 + 0xCu); UPD(0x0C07FFF6u, 3);  /* 0C07FFF4 mov.l @(disp,Rm),Rn */
	T = (r8 & r8) == 0;  /* 0C07FFF6 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C07FFFAu); MACL = r9 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C07FF30u, 5); goto L_0C07FF30; } goto L_0C07FFFC; }  /* 0C07FFF8 bf/s */
L_0C07FFFC: BLKS(0x0C07FFFCu);
	r0 = R32(r7 + 0x24u); UPD(0x0C07FFFEu, 3);  /* 0C07FFFC mov.l @(disp,Rm),Rn */
	IF(0x0C07FFFEu); r4 = MACL;  /* 0C07FFFE sts macl,Rn */
	r4 += r6;  /* 0C080000 add Rm,Rn */
	r5 = R32(r4 + 0x2Cu); UPD(0x0C080004u, 3);  /* 0C080002 mov.l @(disp,Rm),Rn */
	r0 += r5;  /* 0C080004 add Rm,Rn */
	W32(r4 + 0x24u, r0); UPD(0x0C080008u, 2);  /* 0C080006 mov.l Rm,@(disp,Rn) */
	r0 = R32(r4 + 0xCu); UPD(0x0C08000Au, 1);  /* 0C080008 mov.l @(disp,Rm),Rn */
	r6 = R32(r7 + 0x28u); UPD(0x0C08000Cu, 1);  /* 0C08000A mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C08000C add #imm,Rn */
	r1 = R32(r4 + 0x30u); UPD(0x0C080010u, 2);  /* 0C08000E mov.l @(disp,Rm),Rn */
	r0 &= 0x7u;  /* 0C080010 and #imm,r0 */
	r6 += r1;  /* 0C080012 add Rm,Rn */
	W32(r4 + 0x28u, r6); UPD(0x0C080016u, 3);  /* 0C080014 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0xCu, r0); UPD(0x0C080018u, 1);  /* 0C080016 mov.l Rm,@(disp,Rn) */
L_0C080018: BLKS(0x0C080018u);
	r1 = 0xC0A8AE0u; UPD(0x0C08001Au, 1);  /* 0C080018 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C07FF34u, 3); goto L_0C07FF34; }  /* 0C08001A bra */
L_0C080020: BLKS(0x0C080020u);
	r12 = 0xC0A8CA0u; UPD(0x0C080022u, 1);  /* 0C080020 mov.l @(disp,pc),Rn */
	IF(0x0C080022u); { u32 t_ = r12; PR = 0x0C080026u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C080026u); }  /* 0C080022 jsr @Rn */
L_0C080026: BLKS(0x0C080026u);
	IF(0x0C080026u); T = (s32)r0 >= 0;  /* 0C080026 cmp/pz Rn */
	if (T) { UPD(0x0C08002Eu, 4); goto L_0C08002E; }  /* 0C080028 bt */
L_0C08002A: BLKS(0x0C08002Au);
	{ IF(0x0C08002Cu); ; /* slot nop */ UPD(0x0C07FF30u, 3); goto L_0C07FF30; }  /* 0C08002A bra */
L_0C08002E: BLKS(0x0C08002Eu);
	r2 = 0xB4u; UPD(0x0C080030u, 1);  /* 0C08002E mov.w @(disp,pc),Rn */
	IF(0x0C080030u); MACL = r9 * r2;  /* 0C080030 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C080034u, 3);  /* 0C080032 mov.l @(disp,pc),Rn */
	IF(0x0C080034u); r8 = MACL;  /* 0C080034 sts macl,Rn */
	IF(0x0C080036u); MACL = r0 * r2;  /* 0C080036 mul.l Rm,Rn */
	r8 += r5;  /* 0C080038 add Rm,Rn */
	r1 = R32(r8 + 0x2Cu); UPD(0x0C08003Cu, 5);  /* 0C08003A mov.l @(disp,Rm),Rn */
	IF(0x0C08003Cu); r6 = MACL;  /* 0C08003C sts macl,Rn */
	r6 += r5;  /* 0C08003E add Rm,Rn */
	r0 = R32(r6 + 0x24u); UPD(0x0C080042u, 3);  /* 0C080040 mov.l @(disp,Rm),Rn */
	r7 = R32(r6 + 0x28u); UPD(0x0C080044u, 1);  /* 0C080042 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C080044 add Rm,Rn */
	r4 = R32(r8 + 0x30u); UPD(0x0C080048u, 2);  /* 0C080046 mov.l @(disp,Rm),Rn */
	r11 = 0xC069BF0u; UPD(0x0C08004Au, 1);  /* 0C080048 mov.l @(disp,pc),Rn */
	r7 += r4;  /* 0C08004A add Rm,Rn */
	r10 = 0xC068F00u; UPD(0x0C08004Eu, 2);  /* 0C08004C mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C08004E mov Rm,Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C080052u, 2);  /* 0C080050 mov.l Rm,@(disp,Rn) */
	IF(0x0C080052u); { u32 t_ = r11; PR = 0x0C080056u; W32(r8 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C080056u); }  /* 0C080052 jsr @Rn */
L_0C080056: BLKS(0x0C080056u);
	r4 = r9;  /* 0C080056 mov Rm,Rn */
	IF(0x0C080058u); { u32 t_ = r10; PR = 0x0C08005Cu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08005Cu); }  /* 0C080058 jsr @Rn */
L_0C08005C: BLKS(0x0C08005Cu);
	r10 = 0x86u; UPD(0x0C08005Eu, 1);  /* 0C08005C mov.w @(disp,pc),Rn */
	r3 = 0x5Fu;  /* 0C08005E mov #imm,Rn */
	r10 += r8;  /* 0C080060 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C080064u, 3);  /* 0C080062 mov.w @Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C080064 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C08006Eu, 4); goto L_0C08006E; }  /* 0C080066 bt */
L_0C080068: BLKS(0x0C080068u);
	r12 = 0x60u;  /* 0C080068 mov #imm,Rn */
	W16(r10, r12); UPD(0x0C08006Cu, 2);  /* 0C08006A mov.w Rm,@Rn */
	r0 = 0x60u;  /* 0C08006C mov #imm,Rn */
	UPD(0x0C08006Eu, 1);
L_0C08006E: BLKS(0x0C08006Eu);
	r3 = 0x1A0u; UPD(0x0C080070u, 1);  /* 0C08006E mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C080070 exts.w Rm,Rn */
	r2 = (u32)(s32)(s16)r3;  /* 0C080072 exts.w Rm,Rn */
	T = (s32)r11 > (s32)r2;  /* 0C080074 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C080080u, 6); goto L_0C080080; } goto L_0C08007A; }  /* 0C080076 bf/s */
L_0C08007A: BLKS(0x0C08007Au);
	W16(r10, r2); UPD(0x0C08007Cu, 2);  /* 0C08007A mov.w Rm,@Rn */
	r0 = r3;  /* 0C08007C mov Rm,Rn */
	r0 = (u32)(s32)(s16)r0;  /* 0C08007E exts.w Rm,Rn */
	UPD(0x0C080080u, 2);
L_0C080080: BLKS(0x0C080080u);
	r0 += 0x8u;  /* 0C080080 add #imm,Rn */
	IF(0x0C080082u); r0 >>= 2;  /* 0C080082 shlr2 Rn */
	r7 = 0xC0A8AE0u; UPD(0x0C080086u, 3);  /* 0C080084 mov.l @(disp,pc),Rn */
	IF(0x0C080086u); r0 >>= 2;  /* 0C080086 shlr2 Rn */
	r11 = 0x9Cu; UPD(0x0C08008Au, 2);  /* 0C080088 mov.w @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C08008A and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C08008Eu, 2);  /* 0C08008C mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C08008E mov Rm,Rn */
	IF(0x0C080090u); { u32 t_ = r7; PR = 0x0C080094u; r11 += r8; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C080094u); }  /* 0C080090 jsr @Rn */
L_0C080094: BLKS(0x0C080094u);
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C080096u, 1);  /* 0C080094 mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C080096 tst Rm,Rn */
	if (T) { UPD(0x0C080100u, 4); goto L_0C080100; }  /* 0C080098 bt */
L_0C08009A: BLKS(0x0C08009Au);
	r2 = 0x99u; UPD(0x0C08009Cu, 1);  /* 0C08009A mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C08009C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0800A0u, 2);  /* 0C08009E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0800A0 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0800A2 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C0800A4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C080126u, 6); goto L_0C080126; } UPD(0x0C0800AAu, 1); goto L_0C0800AA; }  /* 0C0800A6 bf/s */
L_0C0800AA: BLKS(0x0C0800AAu);
	r12 = (u32)(s32)(s16)R16(r10); UPD(0x0C0800ACu, 1);  /* 0C0800AA mov.w @Rm,Rn */
	r4 = 0x0u;  /* 0C0800AC mov #imm,Rn */
	r10 = 0xC069B20u; UPD(0x0C0800B0u, 2);  /* 0C0800AE mov.l @(disp,pc),Rn */
	W8(r2, r4); UPD(0x0C0800B2u, 1);  /* 0C0800B0 mov.b Rm,@Rn */
	r5 = 0x119999u; UPD(0x0C0800B4u, 1);  /* 0C0800B2 mov.l @(disp,pc),Rn */
	IF(0x0C0800B4u); { u32 t_ = r10; PR = 0x0C0800B8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0800B8u); }  /* 0C0800B4 jsr @Rn */
L_0C0800B8: BLKS(0x0C0800B8u);
	r10 = R32(r8 + 0x24u); UPD(0x0C0800BAu, 1);  /* 0C0800B8 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C0800BA mov Rm,Rn */
	r10 += r0;  /* 0C0800BC add Rm,Rn */
	r0 = 0xC069AF0u; UPD(0x0C0800C0u, 3);  /* 0C0800BE mov.l @(disp,pc),Rn */
	r7 = 0x10000u; UPD(0x0C0800C2u, 1);  /* 0C0800C0 mov.l @(disp,pc),Rn */
	r5 = 0x160000u; UPD(0x0C0800C4u, 1);  /* 0C0800C2 mov.l @(disp,pc),Rn */
	IF(0x0C0800C4u); { u32 t_ = r0; PR = 0x0C0800C8u; r10 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0800C8u); }  /* 0C0800C4 jsr @Rn */
L_0C0800C8: BLKS(0x0C0800C8u);
	r8 = R32(r8 + 0x28u); UPD(0x0C0800CAu, 1);  /* 0C0800C8 mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C0800CA add Rm,Rn */
	r0 = 0xC062780u; UPD(0x0C0800CEu, 2);  /* 0C0800CC mov.l @(disp,pc),Rn */
	IF(0x0C0800CEu); { u32 t_ = r0; PR = 0x0C0800D2u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0800D2u); }  /* 0C0800CE jsr @Rn */
L_0C0800D2: BLKS(0x0C0800D2u);
	r0 += r12;  /* 0C0800D2 add Rm,Rn */
	r12 = 0xC0BAD60u; UPD(0x0C0800D6u, 2);  /* 0C0800D4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0800D6 add #imm,Rn */
	r3 = 0x30000u; UPD(0x0C0800DAu, 2);  /* 0C0800D8 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C0800DA exts.w Rm,Rn */
	W32(r15, r3); UPD(0x0C0800DEu, 2);  /* 0C0800DC mov.l Rm,@Rn */
	r5 = r10;  /* 0C0800DE mov Rm,Rn */
	r4 = 0x7u;  /* 0C0800E0 mov #imm,Rn */
	r6 = r8;  /* 0C0800E2 mov Rm,Rn */
	IF(0x0C0800E4u); { u32 t_ = r12; PR = 0x0C0800E8u; r7 = r2; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0BAD60, 0x0C0BAD60u, 0x0C0800E8u); }  /* 0C0800E4 jsr @Rn */
L_0C0800E8: BLKS(0x0C0800E8u);
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C0800EAu, 1);  /* 0C0800E8 mov.b @Rm,Rn */
	r15 += 0x4u;  /* 0C0800EA add #imm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0800EC add #imm,Rn */
	r0 = r5 & 0xFF;  /* 0C0800EE extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0800F0 tst Rm,Rn */
	{ u32 c_ = !T; W8(r11, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C080126u, 7); goto L_0C080126; } UPD(0x0C0800F6u, 1); goto L_0C0800F6; }  /* 0C0800F2 bf/s */
L_0C0800F6: BLKS(0x0C0800F6u);
	r1 = 0xC069B90u; UPD(0x0C0800F8u, 1);  /* 0C0800F6 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C07FF34u, 3); goto L_0C07FF34; }  /* 0C0800F8 bra */
L_0C080100: BLKS(0x0C080100u);
	r4 = r9;  /* 0C080100 mov Rm,Rn */
	r9 = 0xC0BC1B0u; UPD(0x0C080104u, 2);  /* 0C080102 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C080104 mov #imm,Rn */
	IF(0x0C080106u); { u32 t_ = r9; PR = 0x0C08010Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08010Au); }  /* 0C080106 jsr @Rn */
L_0C08010A: BLKS(0x0C08010Au);
	T = (r0 & r0) == 0;  /* 0C08010A tst Rm,Rn */
	if (T) { UPD(0x0C080126u, 4); goto L_0C080126; }  /* 0C08010C bt */
L_0C08010E: BLKS(0x0C08010Eu);
	r0 = r8;  /* 0C08010E mov Rm,Rn */
	r4 = 0xA9u; UPD(0x0C080112u, 2);  /* 0C080110 mov.w @(disp,pc),Rn */
	IF(0x0C080112u); r10 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C080114u, 1);  /* 0C080112 mov.b @(r0,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C080116u, 1);  /* 0C080114 mov.l @(disp,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C080118u, 1);  /* 0C080116 mov.l @(disp,Rm),Rn */
	r8 = 0xC0BBF10u; UPD(0x0C08011Au, 1);  /* 0C080118 mov.l @(disp,pc),Rn */
	IF(0x0C08011Au); { u32 t_ = r8; PR = 0x0C08011Eu; r6 = r10 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08011Eu); }  /* 0C08011A jsr @Rn */
L_0C08011E: BLKS(0x0C08011Eu);
	T = (r0 & r0) == 0;  /* 0C08011E tst Rm,Rn */
	if (T) { UPD(0x0C080126u, 4); goto L_0C080126; }  /* 0C080120 bt */
L_0C080122: BLKS(0x0C080122u);
	r6 = 0x10u;  /* 0C080122 mov #imm,Rn */
	W8(r11, r6); UPD(0x0C080126u, 2);  /* 0C080124 mov.b Rm,@Rn */
L_0C080126: BLKS(0x0C080126u);
	{ IF(0x0C080128u); ; /* slot nop */ UPD(0x0C07FDD8u, 3); goto L_0C07FDD8; }  /* 0C080126 bra */
L_0C080180: BLKS(0x0C080180u);
	r11 = 0xC0A8CA0u; UPD(0x0C080182u, 1);  /* 0C080180 mov.l @(disp,pc),Rn */
	IF(0x0C080182u); { u32 t_ = r11; PR = 0x0C080186u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C080186u); }  /* 0C080182 jsr @Rn */
L_0C080186: BLKS(0x0C080186u);
	IF(0x0C080186u); T = (s32)r0 >= 0;  /* 0C080186 cmp/pz Rn */
	if (T) { UPD(0x0C08018Eu, 4); goto L_0C08018E; }  /* 0C080188 bt */
L_0C08018A: BLKS(0x0C08018Au);
	{ IF(0x0C08018Cu); ; /* slot nop */ UPD(0x0C07FF30u, 3); goto L_0C07FF30; }  /* 0C08018A bra */
L_0C08018E: BLKS(0x0C08018Eu);
	r2 = 0xB4u; UPD(0x0C080190u, 1);  /* 0C08018E mov.w @(disp,pc),Rn */
	IF(0x0C080190u); MACL = r9 * r2;  /* 0C080190 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C080194u, 3);  /* 0C080192 mov.l @(disp,pc),Rn */
	IF(0x0C080194u); r3 = MACL;  /* 0C080194 sts macl,Rn */
	IF(0x0C080196u); MACL = r0 * r2;  /* 0C080196 mul.l Rm,Rn */
	r3 += r8;  /* 0C080198 add Rm,Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C08019Cu, 5);  /* 0C08019A mov.l @(disp,Rm),Rn */
	IF(0x0C08019Cu); r0 = MACL;  /* 0C08019C sts macl,Rn */
	r0 += r8;  /* 0C08019E add Rm,Rn */
	r4 = R32(r0 + 0x24u); UPD(0x0C0801A2u, 3);  /* 0C0801A0 mov.l @(disp,Rm),Rn */
	r7 = R32(r0 + 0x28u); UPD(0x0C0801A4u, 1);  /* 0C0801A2 mov.l @(disp,Rm),Rn */
	r4 += r6;  /* 0C0801A4 add Rm,Rn */
	r1 = R32(r3 + 0x30u); UPD(0x0C0801A8u, 2);  /* 0C0801A6 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0xCu); UPD(0x0C0801AAu, 1);  /* 0C0801A8 mov.l @(disp,Rm),Rn */
	r7 += r1;  /* 0C0801AA add Rm,Rn */
	W32(r3 + 0x24u, r4); UPD(0x0C0801AEu, 2);  /* 0C0801AC mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C0801AE tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C080270u, 4); goto L_0C080270; } UPD(0x0C0801B4u, 1); goto L_0C0801B4; }  /* 0C0801B0 bt/s */
L_0C0801B4: BLKS(0x0C0801B4u);
	IF(0x0C0801B4u); T = (s32)r2 >= 0;  /* 0C0801B4 cmp/pz Rn */
	{ u32 c_ = !T; r2 += 0xFFFFFFF5u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C080240u, 4); goto L_0C080240; } goto L_0C0801BA; }  /* 0C0801B6 bf/s */
L_0C0801BA: BLKS(0x0C0801BAu);
	r0 = 0x3u;  /* 0C0801BA mov #imm,Rn */
	T = r2 > r0;  /* 0C0801BC cmp/hi Rm,Rn */
	{ u32 c_ = T; r4 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C080240u, 6); goto L_0C080240; } goto L_0C0801C2; }  /* 0C0801BE bt/s */
L_0C0801C2: BLKS(0x0C0801C2u);
	r10 = 0xB4u; UPD(0x0C0801C4u, 2);  /* 0C0801C2 mov.w @(disp,pc),Rn */
	IF(0x0C0801C4u); MACL = r9 * r10;  /* 0C0801C4 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0801C8u, 3);  /* 0C0801C6 mov.l @(disp,pc),Rn */
	IF(0x0C0801C8u); r10 = MACL;  /* 0C0801C8 sts macl,Rn */
	r10 += r7;  /* 0C0801CA add Rm,Rn */
	r0 = R32(r10 + 0xCu); UPD(0x0C0801CEu, 3);  /* 0C0801CC mov.l @(disp,Rm),Rn */
	r11 = 0xC18CAACu; UPD(0x0C0801D0u, 1);  /* 0C0801CE mov.l @(disp,pc),Rn */
	IF(0x0C0801D0u); r0 <<= 2;  /* 0C0801D0 shll2 Rn */
	r5 = 0xC0A8AE0u; UPD(0x0C0801D4u, 2);  /* 0C0801D2 mov.l @(disp,pc),Rn */
	IF(0x0C0801D4u); r12 = R32(r0 + r11); UPD(0x0C0801D6u, 1);  /* 0C0801D4 mov.l @(r0,Rm),Rn */
	r8 = 0xC0BC1B0u; UPD(0x0C0801D8u, 1);  /* 0C0801D6 mov.l @(disp,pc),Rn */
	IF(0x0C0801D8u); { u32 t_ = r5; PR = 0x0C0801DCu; W32(r10 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0801DCu); }  /* 0C0801D8 jsr @Rn */
L_0C0801DC: BLKS(0x0C0801DCu);
	r4 = r9;  /* 0C0801DC mov Rm,Rn */
	r5 = 0x2Du;  /* 0C0801DE mov #imm,Rn */
	IF(0x0C0801E0u); { u32 t_ = r8; PR = 0x0C0801E4u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0801E4u); }  /* 0C0801E0 jsr @Rn */
L_0C0801E4: BLKS(0x0C0801E4u);
	T = (r0 & r0) == 0;  /* 0C0801E4 tst Rm,Rn */
	if (T) { UPD(0x0C080126u, 4); goto L_0C080126; }  /* 0C0801E6 bt */
L_0C0801E8: BLKS(0x0C0801E8u);
	r4 = r9;  /* 0C0801E8 mov Rm,Rn */
	r11 = 0xC069B50u; UPD(0x0C0801ECu, 2);  /* 0C0801EA mov.l @(disp,pc),Rn */
	r9 = 0xC068E60u; UPD(0x0C0801EEu, 1);  /* 0C0801EC mov.l @(disp,pc),Rn */
	IF(0x0C0801EEu); { u32 t_ = r11; PR = 0x0C0801F2u; IF(0x0C0801F0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0801F2u); }  /* 0C0801EE jsr @Rn */
L_0C0801F2: BLKS(0x0C0801F2u);
	r7 = 0x2A0u; UPD(0x0C0801F4u, 1);  /* 0C0801F2 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C0801F4 exts.w Rm,Rn */
	IF(0x0C0801F6u); MACL = r1 * r7;  /* 0C0801F6 mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C0801FAu, 4);  /* 0C0801F8 mov.l @(disp,pc),Rn */
	IF(0x0C0801FAu); r0 = MACL;  /* 0C0801FA sts macl,Rn */
	r0 += r5;  /* 0C0801FC add Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C080200u, 3);  /* 0C0801FE mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C080202u, 1);  /* 0C080200 mov.l @(disp,Rm),Rn */
	r7 = R32(r0 + 0x14u); UPD(0x0C080204u, 1);  /* 0C080202 mov.l @(disp,Rm),Rn */
	IF(0x0C080204u); { u32 t_ = r9; PR = 0x0C080208u; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C080208u); }  /* 0C080204 jsr @Rn */
L_0C080208: BLKS(0x0C080208u);
	r8 = 0xC062780u; UPD(0x0C08020Au, 1);  /* 0C080208 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08020A add #imm,Rn */
	r12 = R32(r10 + 0x24u); UPD(0x0C08020Eu, 2);  /* 0C08020C mov.l @(disp,Rm),Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C08020E exts.w Rm,Rn */
	r2 = 0x60000u; UPD(0x0C080212u, 2);  /* 0C080210 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C080212 mov #imm,Rn */
	r3 = 0x30000u; UPD(0x0C080216u, 2);  /* 0C080214 mov.l @(disp,pc),Rn */
	r12 += r2;  /* 0C080216 add Rm,Rn */
	IF(0x0C080218u); { u32 t_ = r8; PR = 0x0C08021Cu; W32(r15, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08021Cu); }  /* 0C080218 jsr @Rn */
L_0C08021C: BLKS(0x0C08021Cu);
	r6 = 0xC18CAE8u; UPD(0x0C08021Eu, 1);  /* 0C08021C mov.l @(disp,pc),Rn */
	IF(0x0C08021Eu); r0 <<= 2;  /* 0C08021E shll2 Rn */
	IF(0x0C080220u); r4 = R32(r0 + r6); UPD(0x0C080222u, 2);  /* 0C080220 mov.l @(r0,Rm),Rn */
	r5 = r12;  /* 0C080222 mov Rm,Rn */
	r9 = 0xC0BA970u; UPD(0x0C080226u, 2);  /* 0C080224 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C080226 mov Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C08022Au, 2);  /* 0C080228 mov.l Rm,@(disp,Rn) */
	r4 = 0x3u;  /* 0C08022A mov #imm,Rn */
	IF(0x0C08022Cu); { u32 t_ = r9; PR = 0x0C080230u; r6 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C080230u); }  /* 0C08022C jsr @Rn */
L_0C080230: BLKS(0x0C080230u);
	r15 += 0x8u;  /* 0C080230 add #imm,Rn */
	UPD(0x0C080232u, 1);
L_0C080232: BLKS(0x0C080232u);
	{ IF(0x0C080234u); ; /* slot nop */ UPD(0x0C07FDD8u, 3); goto L_0C07FDD8; }  /* 0C080232 bra */
L_0C080240: BLKS(0x0C080240u);
	r3 = 0xB4u; UPD(0x0C080242u, 1);  /* 0C080240 mov.w @(disp,pc),Rn */
	r11 = 0x3u;  /* 0C080242 mov #imm,Rn */
	IF(0x0C080244u); MACL = r9 * r3;  /* 0C080244 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C080248u, 4);  /* 0C080246 mov.l @(disp,pc),Rn */
	IF(0x0C080248u); r3 = MACL;  /* 0C080248 sts macl,Rn */
	r8 = 0x99u; UPD(0x0C08024Cu, 2);  /* 0C08024A mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C08024C add Rm,Rn */
	r8 += r3;  /* 0C08024E add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C080252u, 3);  /* 0C080250 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C080252 add #imm,Rn */
	r7 = r4 & 0xFF;  /* 0C080254 extu.b Rm,Rn */
	T = r7 > r11;  /* 0C080256 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r8, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C080232u, 6); goto L_0C080232; } UPD(0x0C08025Cu, 1); goto L_0C08025C; }  /* 0C080258 bf/s */
L_0C08025C: BLKS(0x0C08025Cu);
	r0 = R32(r3 + 0xCu); UPD(0x0C08025Eu, 1);  /* 0C08025C mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C08025E mov Rm,Rn */
	r2 = 0xC0A8AE0u; UPD(0x0C080262u, 2);  /* 0C080260 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C080262 add #imm,Rn */
	W32(r3 + 0xCu, r0); UPD(0x0C080266u, 2);  /* 0C080264 mov.l Rm,@(disp,Rn) */
	IF(0x0C080266u); { u32 t_ = r2; PR = 0x0C08026Au; r9 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C08026Au); }  /* 0C080266 jsr @Rn */
L_0C08026A: BLKS(0x0C08026Au);
	W8(r8, r9); UPD(0x0C08026Cu, 1);  /* 0C08026A mov.b Rm,@Rn */
L_0C08026C: BLKS(0x0C08026Cu);
	{ IF(0x0C08026Eu); ; /* slot nop */ UPD(0x0C07FDD8u, 3); goto L_0C07FDD8; }  /* 0C08026C bra */
L_0C080270: BLKS(0x0C080270u);
	r5 = 0xA5u; UPD(0x0C080272u, 1);  /* 0C080270 mov.w @(disp,pc),Rn */
	IF(0x0C080272u); r10 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C080274u, 1);  /* 0C080272 mov.b @(r0,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C080274 tst Rm,Rn */
	if (T) { UPD(0x0C08026Cu, 4); goto L_0C08026C; }  /* 0C080276 bt */
L_0C080278: BLKS(0x0C080278u);
	r12 = 0x1u;  /* 0C080278 mov #imm,Rn */
	{ W32(r3 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C080018u, 4); goto L_0C080018; }  /* 0C08027A bra */
L_0C0802C0: BLKS(0x0C0802C0u);
	r11 = 0xC0A8CA0u; UPD(0x0C0802C2u, 1);  /* 0C0802C0 mov.l @(disp,pc),Rn */
	IF(0x0C0802C2u); { u32 t_ = r11; PR = 0x0C0802C6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0802C6u); }  /* 0C0802C2 jsr @Rn */
L_0C0802C6: BLKS(0x0C0802C6u);
	IF(0x0C0802C6u); T = (s32)r0 >= 0;  /* 0C0802C6 cmp/pz Rn */
	if (T) { UPD(0x0C0802CEu, 4); goto L_0C0802CE; }  /* 0C0802C8 bt */
L_0C0802CA: BLKS(0x0C0802CAu);
	{ IF(0x0C0802CCu); ; /* slot nop */ UPD(0x0C07FF30u, 3); goto L_0C07FF30; }  /* 0C0802CA bra */
L_0C0802CE: BLKS(0x0C0802CEu);
	r2 = 0xB4u; UPD(0x0C0802D0u, 1);  /* 0C0802CE mov.w @(disp,pc),Rn */
	IF(0x0C0802D0u); MACL = r9 * r2;  /* 0C0802D0 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0802D4u, 3);  /* 0C0802D2 mov.l @(disp,pc),Rn */
	IF(0x0C0802D4u); r11 = MACL;  /* 0C0802D4 sts macl,Rn */
	IF(0x0C0802D6u); MACL = r0 * r2;  /* 0C0802D6 mul.l Rm,Rn */
	r11 += r4;  /* 0C0802D8 add Rm,Rn */
	r7 = R32(r11 + 0x2Cu); UPD(0x0C0802DCu, 5);  /* 0C0802DA mov.l @(disp,Rm),Rn */
	IF(0x0C0802DCu); r5 = MACL;  /* 0C0802DC sts macl,Rn */
	r5 += r4;  /* 0C0802DE add Rm,Rn */
	r1 = R32(r11 + 0x30u); UPD(0x0C0802E2u, 3);  /* 0C0802E0 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0802E2 mov Rm,Rn */
	r3 = R32(r5 + 0x24u); UPD(0x0C0802E6u, 2);  /* 0C0802E4 mov.l @(disp,Rm),Rn */
	r0 = R32(r5 + 0x28u); UPD(0x0C0802E8u, 1);  /* 0C0802E6 mov.l @(disp,Rm),Rn */
	r3 += r7;  /* 0C0802E8 add Rm,Rn */
	r10 = 0xC069BF0u; UPD(0x0C0802ECu, 2);  /* 0C0802EA mov.l @(disp,pc),Rn */
	r0 += r1;  /* 0C0802EC add Rm,Rn */
	r8 = 0xC068F00u; UPD(0x0C0802F0u, 2);  /* 0C0802EE mov.l @(disp,pc),Rn */
	W32(r11 + 0x24u, r3); UPD(0x0C0802F2u, 1);  /* 0C0802F0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0802F2u); { u32 t_ = r10; PR = 0x0C0802F6u; W32(r11 + 0x28u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C0802F6u); }  /* 0C0802F2 jsr @Rn */
L_0C0802F6: BLKS(0x0C0802F6u);
	r5 = 0x2u;  /* 0C0802F6 mov #imm,Rn */
	IF(0x0C0802F8u); { u32 t_ = r8; PR = 0x0C0802FCu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C0802FCu); }  /* 0C0802F8 jsr @Rn */
L_0C0802FC: BLKS(0x0C0802FCu);
	r8 = 0x86u; UPD(0x0C0802FEu, 1);  /* 0C0802FC mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C0802FE mov Rm,Rn */
	r8 += r11;  /* 0C080300 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C080304u, 3);  /* 0C080302 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C080304 add #imm,Rn */
	r6 = 0xC0A8AE0u; UPD(0x0C080308u, 2);  /* 0C080306 mov.l @(disp,pc),Rn */
	IF(0x0C080308u); r0 >>= 2;  /* 0C080308 shlr2 Rn */
	IF(0x0C08030Au); r0 >>= 2;  /* 0C08030A shlr2 Rn */
	r12 = 0xC0BC1B0u; UPD(0x0C08030Eu, 3);  /* 0C08030C mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C08030E and #imm,r0 */
	IF(0x0C080310u); { u32 t_ = r6; PR = 0x0C080314u; W32(r11 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C080314u); }  /* 0C080310 jsr @Rn */
L_0C080314: BLKS(0x0C080314u);
	r4 = r9;  /* 0C080314 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C080316 mov #imm,Rn */
	IF(0x0C080318u); { u32 t_ = r12; PR = 0x0C08031Cu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08031Cu); }  /* 0C080318 jsr @Rn */
L_0C08031C: BLKS(0x0C08031Cu);
	T = (r0 & r0) == 0;  /* 0C08031C tst Rm,Rn */
	if (T) { UPD(0x0C08026Cu, 4); goto L_0C08026C; }  /* 0C08031E bt */
L_0C080320: BLKS(0x0C080320u);
	r0 = r11;  /* 0C080320 mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C080324u, 2);  /* 0C080322 mov.w @(disp,pc),Rn */
	r12 = 0xC0BBF10u; UPD(0x0C080326u, 1);  /* 0C080324 mov.l @(disp,pc),Rn */
	IF(0x0C080326u); r10 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C080328u, 1);  /* 0C080326 mov.b @(r0,Rm),Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C08032Au, 1);  /* 0C080328 mov.l @(disp,Rm),Rn */
	r6 = r10 & 0xFF;  /* 0C08032A extu.b Rm,Rn */
	IF(0x0C08032Cu); { u32 t_ = r12; PR = 0x0C080330u; r5 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C080330u); }  /* 0C08032C jsr @Rn */
L_0C080330: BLKS(0x0C080330u);
	T = (r0 & r0) == 0;  /* 0C080330 tst Rm,Rn */
	if (T) { UPD(0x0C08026Cu, 4); goto L_0C08026C; }  /* 0C080332 bt */
L_0C080334: BLKS(0x0C080334u);
	r12 = 0xC062780u; UPD(0x0C080336u, 1);  /* 0C080334 mov.l @(disp,pc),Rn */
	r10 = 0xC069B20u; UPD(0x0C080338u, 1);  /* 0C080336 mov.l @(disp,pc),Rn */
	IF(0x0C080338u); { u32 t_ = r12; PR = 0x0C08033Cu; r4 = 0xFu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08033Cu); }  /* 0C080338 jsr @Rn */
L_0C08033C: BLKS(0x0C08033Cu);
	r5 = (u32)(s32)(s16)R16(r8); UPD(0x0C08033Eu, 1);  /* 0C08033C mov.w @Rm,Rn */
	r0 += r5;  /* 0C08033E add Rm,Rn */
	r8 = 0x80000u; UPD(0x0C080342u, 2);  /* 0C080340 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFF8u;  /* 0C080342 add #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C080344 exts.w Rm,Rn */
	r5 = r8;  /* 0C080346 mov Rm,Rn */
	IF(0x0C080348u); { u32 t_ = r10; PR = 0x0C08034Cu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08034Cu); }  /* 0C080348 jsr @Rn */
L_0C08034C: BLKS(0x0C08034Cu);
	r5 = r8;  /* 0C08034C mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C080350u, 2);  /* 0C08034E mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C080350 mov Rm,Rn */
	r10 = R32(r11 + 0x24u); UPD(0x0C080354u, 2);  /* 0C080352 mov.l @(disp,Rm),Rn */
	IF(0x0C080354u); { u32 t_ = r8; PR = 0x0C080358u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C080358u); }  /* 0C080354 jsr @Rn */
L_0C080358: BLKS(0x0C080358u);
	r6 = R32(r11 + 0x28u); UPD(0x0C08035Au, 1);  /* 0C080358 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08035A add #imm,Rn */
	r8 = 0x20000u; UPD(0x0C08035Eu, 2);  /* 0C08035C mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C08035E add Rm,Rn */
	r11 = 0xC0BA480u; UPD(0x0C080362u, 2);  /* 0C080360 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C080362 mov #imm,Rn */
	W32(r15, r8); UPD(0x0C080366u, 2);  /* 0C080364 mov.l Rm,@Rn */
	r5 = r10;  /* 0C080366 mov Rm,Rn */
	IF(0x0C080368u); { u32 t_ = r11; PR = 0x0C08036Cu; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C08036Cu); }  /* 0C080368 jsr @Rn */
L_0C08036C: BLKS(0x0C08036Cu);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0800F6u, 3); goto L_0C0800F6; }  /* 0C08036C bra */
}

void blk_f_0C0803B0(sh3_t *c)
{
	LOCALS;
L_0C0803B0: BLKS(0x0C0803B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0803B2u, 1);  /* 0C0803B0 mov.l Rm,@-Rn */
	r4 = 0x3u;  /* 0C0803B2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0803B6u, 2);  /* 0C0803B4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0803B8u, 1);  /* 0C0803B6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0803BAu, 1);  /* 0C0803B8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0803BCu, 1);  /* 0C0803BA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0803BEu, 1);  /* 0C0803BC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0803C0u, 1);  /* 0C0803BE mov.l Rm,@-Rn */
	r8 = 0xC069510u; UPD(0x0C0803C2u, 1);  /* 0C0803C0 mov.l @(disp,pc),Rn */
	IF(0x0C0803C2u); r15 -= 4; W32(r15, PR); UPD(0x0C0803C4u, 1);  /* 0C0803C2 sts.l pr,@-Rn */
	r5 = 0x8000u; UPD(0x0C0803C6u, 1);  /* 0C0803C4 mov.l @(disp,pc),Rn */
	IF(0x0C0803C6u); { u32 t_ = r8; PR = 0x0C0803CAu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0803CAu); }  /* 0C0803C6 jsr @Rn */
L_0C0803CA: BLKS(0x0C0803CAu);
	T = (r0 & r0) == 0;  /* 0C0803CA tst Rm,Rn */
	r10 = 0xC28EDFCu; UPD(0x0C0803CEu, 2);  /* 0C0803CC mov.l @(disp,pc),Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0803F0u, 3); goto L_0C0803F0; } UPD(0x0C0803D2u, 1); goto L_0C0803D2; }  /* 0C0803CE bf/s */
L_0C0803D2: BLKS(0x0C0803D2u);
	r15 = r14;  /* 0C0803D2 mov Rm,Rn */
	IF(0x0C0803D4u); PR = R32(r15); r15 += 4; UPD(0x0C0803D6u, 2);  /* 0C0803D4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0803D8u, 1);  /* 0C0803D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0803DAu, 1);  /* 0C0803D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0803DCu, 1);  /* 0C0803DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0803DEu, 1);  /* 0C0803DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0803E0u, 1);  /* 0C0803DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0803E2u, 1);  /* 0C0803E0 mov.l @Rm+,Rn */
	IF(0x0C0803E2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0803E2 rts */
L_0C0803F0: BLKS(0x0C0803F0u);
	r8 = 0xC071740u; UPD(0x0C0803F2u, 1);  /* 0C0803F0 mov.l @(disp,pc),Rn */
	r9 = 0xC18CFD4u; UPD(0x0C0803F4u, 1);  /* 0C0803F2 mov.l @(disp,pc),Rn */
	IF(0x0C0803F4u); { u32 t_ = r8; PR = 0x0C0803F8u; r4 = 0xDu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0803F8u); }  /* 0C0803F4 jsr @Rn */
L_0C0803F8: BLKS(0x0C0803F8u);
	T = (r0 & r0) == 0;  /* 0C0803F8 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0803D2u, 4); goto L_0C0803D2; } goto L_0C0803FE; }  /* 0C0803FA bt/s */
L_0C0803FE: BLKS(0x0C0803FEu);
	r11 = 0x0u;  /* 0C0803FE mov #imm,Rn */
	UPD(0x0C080400u, 2);
L_0C080400: BLKS(0x0C080400u);
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r4 = v_; } UPD(0x0C080402u, 1);  /* 0C080400 mov.w @Rm+,Rn */
	r3 = 0x0u;  /* 0C080402 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C080406u, 2);  /* 0C080404 mov.w @(disp,pc),Rn */
	IF(0x0C080406u); MACL = r4 * r8;  /* 0C080406 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08040Au, 3);  /* 0C080408 mov.l @(disp,pc),Rn */
	r6 = 0xC0000000u; UPD(0x0C08040Cu, 1);  /* 0C08040A mov.l @(disp,pc),Rn */
	IF(0x0C08040Cu); r8 = MACL;  /* 0C08040C sts macl,Rn */
	r8 += r7;  /* 0C08040E add Rm,Rn */
	W32(r8, r6); UPD(0x0C080412u, 3);  /* 0C080410 mov.l Rm,@Rn */
	r12 = (u32)(s32)(s16)R16(r10); UPD(0x0C080414u, 1);  /* 0C080412 mov.w @Rm,Rn */
	r8 += 0x7Cu;  /* 0C080414 add #imm,Rn */
	W16(r8, r12); UPD(0x0C080418u, 2);  /* 0C080416 mov.w Rm,@Rn */
	r8 += 0xFFFFFF84u;  /* 0C080418 add #imm,Rn */
	r12 = 0x3u;  /* 0C08041A mov #imm,Rn */
	W32(r8 + 0x4u, r12); UPD(0x0C08041Eu, 3);  /* 0C08041C mov.l Rm,@(disp,Rn) */
	r2 = 0xC0A8A30u; UPD(0x0C080420u, 1);  /* 0C08041E mov.l @(disp,pc),Rn */
	r5 = R32(r9); UPD(0x0C080422u, 1);  /* 0C080420 mov.l @Rm,Rn */
	W32(r8 + 0xCu, r3); UPD(0x0C080424u, 1);  /* 0C080422 mov.l Rm,@(disp,Rn) */
	IF(0x0C080424u); { u32 t_ = r2; PR = 0x0C080428u; W32(r8 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C080428u); }  /* 0C080424 jsr @Rn */
L_0C080428: BLKS(0x0C080428u);
	r0 = R32(r9 + 0x4u); UPD(0x0C08042Au, 1);  /* 0C080428 mov.l @(disp,Rm),Rn */
	r5 = r8;  /* 0C08042A mov Rm,Rn */
	W32(r8 + 0x2Cu, r0); UPD(0x0C08042Eu, 2);  /* 0C08042C mov.l Rm,@(disp,Rn) */
	r2 = r11;  /* 0C08042E mov Rm,Rn */
	r6 = R32(r9 + 0x8u); UPD(0x0C080432u, 2);  /* 0C080430 mov.l @(disp,Rm),Rn */
	r1 = 0x4u;  /* 0C080432 mov #imm,Rn */
	W32(r8 + 0x30u, r6); UPD(0x0C080436u, 2);  /* 0C080434 mov.l Rm,@(disp,Rn) */
	r4 = 0x0u;  /* 0C080436 mov #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C08043Au, 2);  /* 0C080438 mov.l Rm,@(disp,Rn) */
	r2 += 0x1u;  /* 0C08043A add #imm,Rn */
	r13 = 0xC3C4048u; UPD(0x0C08043Eu, 2);  /* 0C08043C mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r2;  /* 0C08043E exts.w Rm,Rn */
	r7 = R32(r13); UPD(0x0C080442u, 2);  /* 0C080440 mov.l @Rm,Rn */
	r0 = 0xBu;  /* 0C080442 mov #imm,Rn */
	r13 = 0xA8u; UPD(0x0C080446u, 2);  /* 0C080444 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C080446 add Rm,Rn */
	r5 += r13;  /* 0C080448 add Rm,Rn */
	r3 = 0x808080u; UPD(0x0C08044Cu, 3);  /* 0C08044A mov.l @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C08044C add #imm,Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C080450u, 2);  /* 0C08044E mov.l Rm,@(disp,Rn) */
	r9 += 0xCu;  /* 0C080450 add #imm,Rn */
	W8(r5, r1); UPD(0x0C080454u, 2);  /* 0C080452 mov.b Rm,@Rn */
	T = (s32)r11 > (s32)r0;  /* 0C080454 cmp/gt Rm,Rn */
	W32(r8 + 0x34u, r4); UPD(0x0C080458u, 2);  /* 0C080456 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r8 + 0x38u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C080400u, 3); goto L_0C080400; } UPD(0x0C08045Cu, 1); goto L_0C08045C; }  /* 0C080458 bf/s */
L_0C08045C: BLKS(0x0C08045Cu);
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C08045Eu, 1);  /* 0C08045C mov.w @Rm,Rn */
	r11 = 0x0u;  /* 0C08045E mov #imm,Rn */
	r10 = 0xB4u; UPD(0x0C080462u, 2);  /* 0C080460 mov.w @(disp,pc),Rn */
	IF(0x0C080462u); MACL = r4 * r10;  /* 0C080462 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C080466u, 3);  /* 0C080464 mov.l @(disp,pc),Rn */
	IF(0x0C080466u); r10 = MACL;  /* 0C080466 sts macl,Rn */
	r9 = 0xC0000000u; UPD(0x0C08046Au, 2);  /* 0C080468 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C08046A add Rm,Rn */
	W32(r10, r9); UPD(0x0C08046Eu, 2);  /* 0C08046C mov.l Rm,@Rn */
	W32(r10 + 0x4u, r12); UPD(0x0C080470u, 1);  /* 0C08046E mov.l Rm,@(disp,Rn) */
	r8 = 0xC297490u; UPD(0x0C080472u, 1);  /* 0C080470 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C080474u, 1);  /* 0C080472 mov.b @Rm,Rn */
	r0 &= 0x3u;  /* 0C080474 and #imm,r0 */
	W32(r10 + 0x8u, r0); UPD(0x0C080478u, 2);  /* 0C080476 mov.l Rm,@(disp,Rn) */
	r6 = 0xC28F611u; UPD(0x0C08047Au, 1);  /* 0C080478 mov.l @(disp,pc),Rn */
	r7 = 0xC2B037Au; UPD(0x0C08047Cu, 1);  /* 0C08047A mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s8)R8(r6); UPD(0x0C08047Eu, 1);  /* 0C08047C mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C080480u, 1);  /* 0C08047E mov.b @Rm,Rn */
	r5 = r12 & 0xFF;  /* 0C080480 extu.b Rm,Rn */
	r5 += r5;  /* 0C080482 add Rm,Rn */
	r0 &= 0x1u;  /* 0C080484 and #imm,r0 */
	r3 = 0xC0A8A30u; UPD(0x0C080488u, 4);  /* 0C080486 mov.l @(disp,pc),Rn */
	r0 |= r5;  /* 0C080488 or Rm,Rn */
	IF(0x0C08048Au); { u32 t_ = r3; PR = 0x0C08048Eu; W32(r10 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08048Eu); }  /* 0C08048A jsr @Rn */
L_0C08048E: BLKS(0x0C08048Eu);
	r0 = 0x2000000u; UPD(0x0C080490u, 1);  /* 0C08048E mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C080490 mov Rm,Rn */
	r2 = 0x1300000u; UPD(0x0C080494u, 2);  /* 0C080492 mov.l @(disp,pc),Rn */
	r4 += r10;  /* 0C080494 add Rm,Rn */
	r9 = 0x808080u; UPD(0x0C080498u, 2);  /* 0C080496 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C080498 add #imm,Rn */
	W32(r10 + 0x28u, r0); UPD(0x0C08049Cu, 2);  /* 0C08049A mov.l Rm,@(disp,Rn) */
	r1 = 0x17u;  /* 0C08049C mov #imm,Rn */
	W32(r10 + 0x24u, r2); UPD(0x0C0804A0u, 2);  /* 0C08049E mov.l Rm,@(disp,Rn) */
	r0 = 0x1u;  /* 0C0804A0 mov #imm,Rn */
	W8(r4, r1); UPD(0x0C0804A4u, 2);  /* 0C0804A2 mov.b Rm,@Rn */
	W32(r10 + 0x34u, r11); UPD(0x0C0804A6u, 1);  /* 0C0804A4 mov.l Rm,@(disp,Rn) */
	{ W32(r10 + 0x38u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0803D2u, 3); goto L_0C0803D2; }  /* 0C0804A6 bra */
}

void blk_f_0C0804F0(sh3_t *c)
{
	LOCALS;
L_0C0804F0: BLKS(0x0C0804F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0804F2u, 1);  /* 0C0804F0 mov.l Rm,@-Rn */
	r4 = 0x3u;  /* 0C0804F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0804F6u, 2);  /* 0C0804F4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0804F8u, 1);  /* 0C0804F6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0804FAu, 1);  /* 0C0804F8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0804FCu, 1);  /* 0C0804FA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0804FEu, 1);  /* 0C0804FC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C080500u, 1);  /* 0C0804FE mov.l Rm,@-Rn */
	r8 = 0xC069510u; UPD(0x0C080502u, 1);  /* 0C080500 mov.l @(disp,pc),Rn */
	IF(0x0C080502u); r15 -= 4; W32(r15, PR); UPD(0x0C080504u, 1);  /* 0C080502 sts.l pr,@-Rn */
	r5 = 0x8000u; UPD(0x0C080506u, 1);  /* 0C080504 mov.l @(disp,pc),Rn */
	IF(0x0C080506u); { u32 t_ = r8; PR = 0x0C08050Au; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C08050Au); }  /* 0C080506 jsr @Rn */
L_0C08050A: BLKS(0x0C08050Au);
	T = (r0 & r0) == 0;  /* 0C08050A tst Rm,Rn */
	r11 = 0xC28EDFCu; UPD(0x0C08050Eu, 2);  /* 0C08050C mov.l @(disp,pc),Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C080530u, 3); goto L_0C080530; } UPD(0x0C080512u, 1); goto L_0C080512; }  /* 0C08050E bf/s */
L_0C080512: BLKS(0x0C080512u);
	r15 = r14;  /* 0C080512 mov Rm,Rn */
	IF(0x0C080514u); PR = R32(r15); r15 += 4; UPD(0x0C080516u, 2);  /* 0C080514 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C080518u, 1);  /* 0C080516 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08051Au, 1);  /* 0C080518 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08051Cu, 1);  /* 0C08051A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08051Eu, 1);  /* 0C08051C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C080520u, 1);  /* 0C08051E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C080522u, 1);  /* 0C080520 mov.l @Rm+,Rn */
	IF(0x0C080522u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C080522 rts */
L_0C080530: BLKS(0x0C080530u);
	r8 = 0xC071740u; UPD(0x0C080532u, 1);  /* 0C080530 mov.l @(disp,pc),Rn */
	r9 = 0xC18D064u; UPD(0x0C080534u, 1);  /* 0C080532 mov.l @(disp,pc),Rn */
	IF(0x0C080534u); { u32 t_ = r8; PR = 0x0C080538u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C080538u); }  /* 0C080534 jsr @Rn */
L_0C080538: BLKS(0x0C080538u);
	T = (r0 & r0) == 0;  /* 0C080538 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C080512u, 4); goto L_0C080512; } goto L_0C08053E; }  /* 0C08053A bt/s */
L_0C08053E: BLKS(0x0C08053Eu);
	r13 = 0xB4u; UPD(0x0C080540u, 2);  /* 0C08053E mov.w @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C080540 mov #imm,Rn */
	r10 = 0x0u;  /* 0C080542 mov #imm,Rn */
	UPD(0x0C080544u, 2);
L_0C080544: BLKS(0x0C080544u);
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r4 = v_; } UPD(0x0C080546u, 1);  /* 0C080544 mov.w @Rm+,Rn */
	r3 = 0x3u;  /* 0C080546 mov #imm,Rn */
	IF(0x0C080548u); MACL = r4 * r13;  /* 0C080548 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08054Cu, 4);  /* 0C08054A mov.l @(disp,pc),Rn */
	r6 = 0xC0000000u; UPD(0x0C08054Eu, 1);  /* 0C08054C mov.l @(disp,pc),Rn */
	IF(0x0C08054Eu); r8 = MACL;  /* 0C08054E sts macl,Rn */
	r8 += r7;  /* 0C080550 add Rm,Rn */
	W32(r8, r6); UPD(0x0C080554u, 3);  /* 0C080552 mov.l Rm,@Rn */
	r5 = (u32)(s32)(s16)R16(r11); UPD(0x0C080556u, 1);  /* 0C080554 mov.w @Rm,Rn */
	r8 += 0x7Cu;  /* 0C080556 add #imm,Rn */
	W16(r8, r5); UPD(0x0C08055Au, 2);  /* 0C080558 mov.w Rm,@Rn */
	r8 += 0xFFFFFF84u;  /* 0C08055A add #imm,Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C08055Eu, 2);  /* 0C08055C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A8A30u; UPD(0x0C080560u, 1);  /* 0C08055E mov.l @(disp,pc),Rn */
	r2 = R32(r9); UPD(0x0C080562u, 1);  /* 0C080560 mov.l @Rm,Rn */
	W32(r8 + 0xCu, r10); UPD(0x0C080564u, 1);  /* 0C080562 mov.l Rm,@(disp,Rn) */
	IF(0x0C080564u); { u32 t_ = r0; PR = 0x0C080568u; W32(r8 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C080568u); }  /* 0C080564 jsr @Rn */
L_0C080568: BLKS(0x0C080568u);
	r7 = R32(r9 + 0x4u); UPD(0x0C08056Au, 1);  /* 0C080568 mov.l @(disp,Rm),Rn */
	r3 = 0x4u;  /* 0C08056A mov #imm,Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C08056Eu, 2);  /* 0C08056C mov.l Rm,@(disp,Rn) */
	r2 = r12;  /* 0C08056E mov Rm,Rn */
	r4 = R32(r9 + 0x8u); UPD(0x0C080572u, 2);  /* 0C080570 mov.l @(disp,Rm),Rn */
	r2 += 0x1u;  /* 0C080572 add #imm,Rn */
	W32(r8 + 0x30u, r4); UPD(0x0C080576u, 2);  /* 0C080574 mov.l Rm,@(disp,Rn) */
	r12 = (u32)(s32)(s16)r2;  /* 0C080576 exts.w Rm,Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C08057Au, 2);  /* 0C080578 mov.l Rm,@(disp,Rn) */
	r9 += 0xCu;  /* 0C08057A add #imm,Rn */
	r6 = 0xC3C4048u; UPD(0x0C08057Eu, 2);  /* 0C08057C mov.l @(disp,pc),Rn */
	r0 = 0xA9u; UPD(0x0C080580u, 1);  /* 0C08057E mov.w @(disp,pc),Rn */
	r5 = R32(r6); UPD(0x0C080582u, 1);  /* 0C080580 mov.l @Rm,Rn */
	IF(0x0C080582u); W8(r0 + r8, r3); UPD(0x0C080584u, 1);  /* 0C080582 mov.b Rm,@(r0,Rn) */
	r4 += r5;  /* 0C080584 add Rm,Rn */
	r0 = 0x1u;  /* 0C080586 mov #imm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C08058Au, 3);  /* 0C080588 mov.l Rm,@(disp,Rn) */
	T = (s32)r12 > (s32)r0;  /* 0C08058A cmp/gt Rm,Rn */
	W32(r8 + 0x34u, r10); UPD(0x0C08058Eu, 2);  /* 0C08058C mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r8 + 0x38u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C080544u, 3); goto L_0C080544; } UPD(0x0C080592u, 1); goto L_0C080592; }  /* 0C08058E bf/s */
L_0C080592: BLKS(0x0C080592u);
	{ IF(0x0C080594u); ; /* slot nop */ UPD(0x0C080512u, 3); goto L_0C080512; }  /* 0C080592 bra */
}

void blk_f_0C0805C0(sh3_t *c)
{
	LOCALS;
L_0C0805C0: BLKS(0x0C0805C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0805C2u, 1);  /* 0C0805C0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0805C2 exts.w Rm,Rn */
	r2 = 0xB4u; UPD(0x0C0805C6u, 2);  /* 0C0805C4 mov.w @(disp,pc),Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0805C8u, 1);  /* 0C0805C6 mov.l Rm,@-Rn */
	IF(0x0C0805C8u); MACL = r4 * r2;  /* 0C0805C8 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0805CCu, 3);  /* 0C0805CA mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0805CEu, 1);  /* 0C0805CC mov.l @(disp,pc),Rn */
	IF(0x0C0805CEu); r2 = MACL;  /* 0C0805CE sts macl,Rn */
	IF(0x0C0805D0u); r15 -= 4; W32(r15, PR); UPD(0x0C0805D2u, 2);  /* 0C0805D0 sts.l pr,@-Rn */
	r2 += r0;  /* 0C0805D2 add Rm,Rn */
	r3 = R32(r2 + 0x8u); UPD(0x0C0805D6u, 2);  /* 0C0805D4 mov.l @(disp,Rm),Rn */
	r0 = 0x17u;  /* 0C0805D6 mov #imm,Rn */
	T = r3 > r0;  /* 0C0805D8 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C080660u, 5); goto L_0C080660; } goto L_0C0805DE; }  /* 0C0805DA bt/s */
L_0C0805DE: BLKS(0x0C0805DEu);
	r0 = 0xC0805ECu;  /* 0C0805DE mova @(disp,pc),r0 */
	IF(0x0C0805E0u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0805E2u, 3);  /* 0C0805E0 mov.b @(r0,Rm),Rn */
	IF(0x0C0805E2u); { u32 tv_ = (r5 + 0x0C0805E6u); u32 t_ = PHYS(tv_); IF(0x0C0805E4u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C080610u: goto L_0C080610; case 0x0C080640u: goto L_0C080640; default: JUMPD(tv_); } }  /* 0C0805E2 braf Rn */
L_0C080610: BLKS(0x0C080610u);
	r6 = 0xB4u; UPD(0x0C080612u, 1);  /* 0C080610 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C080612 add #imm,Rn */
	IF(0x0C080614u); MACL = r4 * r6;  /* 0C080614 mul.l Rm,Rn */
	r9 = 0x0u;  /* 0C080616 mov #imm,Rn */
	r3 = 0x14u;  /* 0C080618 mov #imm,Rn */
	r4 = 0xC286578u; UPD(0x0C08061Cu, 6);  /* 0C08061A mov.l @(disp,pc),Rn */
	IF(0x0C08061Cu); r8 = MACL;  /* 0C08061C sts macl,Rn */
	W32(r15, r9); UPD(0x0C080620u, 2);  /* 0C08061E mov.l Rm,@Rn */
	r8 += r4;  /* 0C080620 add Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C080624u, 2);  /* 0C080622 mov.l Rm,@(disp,Rn) */
	r5 = 0x1u;  /* 0C080624 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C080628u, 2);  /* 0C080626 mov.l @Rm,Rn */
L_0C080628: BLKS(0x0C080628u);
	r0 = 0xC0C02E0u; UPD(0x0C08062Au, 1);  /* 0C080628 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08062Cu, 1);  /* 0C08062A mov.l @(disp,Rm),Rn */
	IF(0x0C08062Cu); { u32 t_ = r0; PR = 0x0C080630u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C02E0, 0x0C0C02E0u, 0x0C080630u); }  /* 0C08062C jsr @Rn */
L_0C080630: BLKS(0x0C080630u);
	W32(r8, r9); UPD(0x0C080632u, 1);  /* 0C080630 mov.l Rm,@Rn */
	r15 += 0x8u;  /* 0C080632 add #imm,Rn */
	UPD(0x0C080634u, 1);
L_0C080634: BLKS(0x0C080634u);
	r15 = r14;  /* 0C080634 mov Rm,Rn */
	IF(0x0C080636u); PR = R32(r15); r15 += 4; UPD(0x0C080638u, 2);  /* 0C080636 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08063Au, 1);  /* 0C080638 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08063Cu, 1);  /* 0C08063A mov.l @Rm+,Rn */
	IF(0x0C08063Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08063C rts */
L_0C080640: BLKS(0x0C080640u);
	r8 = 0xB4u; UPD(0x0C080642u, 1);  /* 0C080640 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C080642 add #imm,Rn */
	IF(0x0C080644u); MACL = r4 * r8;  /* 0C080644 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C080648u, 4);  /* 0C080646 mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C080648 mov #imm,Rn */
	IF(0x0C08064Au); r8 = MACL;  /* 0C08064A sts macl,Rn */
	r8 += r9;  /* 0C08064C add Rm,Rn */
	r9 = 0x0u;  /* 0C08064E mov #imm,Rn */
	W32(r15, r9); UPD(0x0C080652u, 5);  /* 0C080650 mov.l Rm,@Rn */
	r5 = 0x3u;  /* 0C080652 mov #imm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C080656u, 2);  /* 0C080654 mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C080628u, 3); goto L_0C080628; }  /* 0C080656 bra */
L_0C080660: BLKS(0x0C080660u);
	r0 = 0x0u;  /* 0C080660 mov #imm,Rn */
	{ W32(r2, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C080634u, 4); goto L_0C080634; }  /* 0C080662 bra */
}

void blk_f_0C080670(sh3_t *c)
{
	LOCALS;
L_0C080670: BLKS(0x0C080670u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C080672u, 1);  /* 0C080670 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C080674u, 1);  /* 0C080672 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C080676u, 1);  /* 0C080674 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C080676 exts.w Rm,Rn */
	IF(0x0C080678u); MACL = r9 * r2;  /* 0C080678 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08067Cu, 4);  /* 0C08067A mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08067Eu, 1);  /* 0C08067C mov.l @(disp,pc),Rn */
	IF(0x0C08067Eu); r8 = MACL;  /* 0C08067E sts macl,Rn */
	IF(0x0C080680u); r15 -= 4; W32(r15, PR); UPD(0x0C080682u, 2);  /* 0C080680 sts.l pr,@-Rn */
	r8 += r0;  /* 0C080682 add Rm,Rn */
	r7 = R32(r8 + 0x8u); UPD(0x0C080686u, 2);  /* 0C080684 mov.l @(disp,Rm),Rn */
	r0 = 0x3u;  /* 0C080686 mov #imm,Rn */
	r1 = r7;  /* 0C080688 mov Rm,Rn */
	r1 += 0xFFFFFFE8u;  /* 0C08068A add #imm,Rn */
	T = r1 > r0;  /* 0C08068C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0806E0u, 7); goto L_0C0806E0; } goto L_0C080692; }  /* 0C08068E bt/s */
L_0C080692: BLKS(0x0C080692u);
	r4 = 0x99u; UPD(0x0C080694u, 2);  /* 0C080692 mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C080694 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C080698u, 2);  /* 0C080696 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C080698 add #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C08069A extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C08069C cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r4, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0806B0u, 6); goto L_0C0806B0; } UPD(0x0C0806A2u, 1); goto L_0C0806A2; }  /* 0C08069E bt/s */
L_0C0806A2: BLKS(0x0C0806A2u);
	r15 = r14;  /* 0C0806A2 mov Rm,Rn */
	IF(0x0C0806A4u); PR = R32(r15); r15 += 4; UPD(0x0C0806A6u, 2);  /* 0C0806A4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0806A8u, 1);  /* 0C0806A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0806AAu, 1);  /* 0C0806A8 mov.l @Rm+,Rn */
	IF(0x0C0806AAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0806AA rts */
L_0C0806B0: BLKS(0x0C0806B0u);
	r3 = 0xA0u; UPD(0x0C0806B2u, 1);  /* 0C0806B0 mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C0806B2 mov Rm,Rn */
	r3 += r8;  /* 0C0806B4 add Rm,Rn */
	r3 += 0x1u;  /* 0C0806B6 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r3); r3 += 1; r1 = v_; } UPD(0x0C0806BAu, 4);  /* 0C0806B8 mov.b @Rm+,Rn */
	r0 = 0xC0A8B10u; UPD(0x0C0806BCu, 1);  /* 0C0806BA mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0806BEu, 1);  /* 0C0806BC mov.b @Rm,Rn */
	W32(r8 + 0x8u, r1); UPD(0x0C0806C0u, 1);  /* 0C0806BE mov.l Rm,@(disp,Rn) */
	IF(0x0C0806C0u); { u32 t_ = r0; PR = 0x0C0806C4u; W32(r8 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C0806C4u); }  /* 0C0806C0 jsr @Rn */
L_0C0806C4: BLKS(0x0C0806C4u);
	r7 = 0xC0A9AE0u; UPD(0x0C0806C6u, 1);  /* 0C0806C4 mov.l @(disp,pc),Rn */
	IF(0x0C0806C6u); { u32 t_ = r7; PR = 0x0C0806CAu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0806CAu); }  /* 0C0806C6 jsr @Rn */
L_0C0806CA: BLKS(0x0C0806CAu);
	r6 = 0x0u;  /* 0C0806CA mov #imm,Rn */
	r1 = R32(r8); UPD(0x0C0806CEu, 2);  /* 0C0806CC mov.l @Rm,Rn */
	r5 = 0x13000000u; UPD(0x0C0806D0u, 1);  /* 0C0806CE mov.l @(disp,pc),Rn */
	W32(r8 + 0x34u, r6); UPD(0x0C0806D2u, 1);  /* 0C0806D0 mov.l Rm,@(disp,Rn) */
	r1 |= r5;  /* 0C0806D2 or Rm,Rn */
	UPD(0x0C0806D4u, 1);
L_0C0806D4: BLKS(0x0C0806D4u);
	{ W32(r8, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C0806A2u, 3); goto L_0C0806A2; }  /* 0C0806D4 bra */
L_0C0806E0: BLKS(0x0C0806E0u);
	r4 = R32(r8 + 0x24u); UPD(0x0C0806E2u, 1);  /* 0C0806E0 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x2Cu); UPD(0x0C0806E4u, 1);  /* 0C0806E2 mov.l @(disp,Rm),Rn */
	r3 = 0xFF600000u; UPD(0x0C0806E6u, 1);  /* 0C0806E4 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C0806E6 add Rm,Rn */
	r3 += r4;  /* 0C0806E8 add Rm,Rn */
	IF(0x0C0806EAu); T = (s32)r3 >= 0;  /* 0C0806EA cmp/pz Rn */
	{ u32 c_ = !T; W32(r8 + 0x24u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C080760u, 6); goto L_0C080760; } UPD(0x0C0806F0u, 1); goto L_0C0806F0; }  /* 0C0806EC bf/s */
L_0C0806F0: BLKS(0x0C0806F0u);
	r6 = 0xA80000u; UPD(0x0C0806F2u, 1);  /* 0C0806F0 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0806F2 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0806D4u, 4); goto L_0C0806D4; } goto L_0C0806F8; }  /* 0C0806F4 bt/s */
L_0C0806F8: BLKS(0x0C0806F8u);
	r2 = R32(r8 + 0x28u); UPD(0x0C0806FAu, 2);  /* 0C0806F8 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x30u); UPD(0x0C0806FCu, 1);  /* 0C0806FA mov.l @(disp,Rm),Rn */
	r2 += r5;  /* 0C0806FC add Rm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C080700u, 2);  /* 0C0806FE mov.l Rm,@(disp,Rn) */
	r4 = 0xC3C4048u; UPD(0x0C080702u, 1);  /* 0C080700 mov.l @(disp,pc),Rn */
	r3 = R32(r4); UPD(0x0C080704u, 1);  /* 0C080702 mov.l @Rm,Rn */
	r0 = 0xFF880000u; UPD(0x0C080706u, 1);  /* 0C080704 mov.l @(disp,pc),Rn */
	r2 -= r3;  /* 0C080706 sub Rm,Rn */
	r2 += r0;  /* 0C080708 add Rm,Rn */
	IF(0x0C08070Au); T = (s32)r2 >= 0;  /* 0C08070A cmp/pz Rn */
	if (!T) { UPD(0x0C080750u, 6); goto L_0C080750; }  /* 0C08070C bf */
L_0C08070E: BLKS(0x0C08070Eu);
	r6 = 0x800000u; UPD(0x0C080710u, 1);  /* 0C08070E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C080710 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C080720u, 4); goto L_0C080720; } goto L_0C080716; }  /* 0C080712 bf/s */
L_0C080716: BLKS(0x0C080716u);
	{ W32(r8, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C0806A2u, 4); goto L_0C0806A2; }  /* 0C080716 bra */
L_0C080720: BLKS(0x0C080720u);
	r2 = 0x99u; UPD(0x0C080722u, 1);  /* 0C080720 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C080722 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C080726u, 2);  /* 0C080724 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C080726 add #imm,Rn */
	W8(r2, r0); UPD(0x0C08072Au, 2);  /* 0C080728 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C08072A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08072C tst Rm,Rn */
	if (!T) { UPD(0x0C0806A2u, 5); goto L_0C0806A2; }  /* 0C08072E bf */
L_0C080730: BLKS(0x0C080730u);
	IF(0x0C080730u); r7 <<= 2;  /* 0C080730 shll2 Rn */
	r3 = 0xC18F3C8u; UPD(0x0C080734u, 2);  /* 0C080732 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C080734 mov Rm,Rn */
	IF(0x0C080736u); r7 = R32(r0 + r3); UPD(0x0C080738u, 2);  /* 0C080736 mov.l @(r0,Rm),Rn */
	W32(r8 + 0x8u, r7); UPD(0x0C08073Au, 1);  /* 0C080738 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0A8B10u; UPD(0x0C08073Cu, 1);  /* 0C08073A mov.l @(disp,pc),Rn */
	IF(0x0C08073Cu); { u32 t_ = r8; PR = 0x0C080740u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C080740u); }  /* 0C08073C jsr @Rn */
L_0C080740: BLKS(0x0C080740u);
	{ IF(0x0C080742u); ; /* slot nop */ UPD(0x0C0806A2u, 3); goto L_0C0806A2; }  /* 0C080740 bra */
L_0C080750: BLKS(0x0C080750u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C08070Eu, 3); goto L_0C08070E; }  /* 0C080750 bra */
L_0C080760: BLKS(0x0C080760u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C0806F0u, 3); goto L_0C0806F0; }  /* 0C080760 bra */
}

void blk_f_0C0807A0(sh3_t *c)
{
	LOCALS;
L_0C0807A0: BLKS(0x0C0807A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0807A2u, 1);  /* 0C0807A0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C0807A2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0807A6u, 2);  /* 0C0807A4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0807A8u, 1);  /* 0C0807A6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0807AAu, 1);  /* 0C0807A8 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0807ACu, 1);  /* 0C0807AA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0807AC exts.w Rm,Rn */
	r8 = 0xC0A8DD0u; UPD(0x0C0807B0u, 2);  /* 0C0807AE mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0807B0 mov Rm,Rn */
	IF(0x0C0807B2u); r15 -= 4; W32(r15, PR); UPD(0x0C0807B4u, 2);  /* 0C0807B2 sts.l pr,@-Rn */
	IF(0x0C0807B4u); { u32 t_ = r8; PR = 0x0C0807B8u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C0807B8u); }  /* 0C0807B4 jsr @Rn */
L_0C0807B8: BLKS(0x0C0807B8u);
	T = (r0 & r0) == 0;  /* 0C0807B8 tst Rm,Rn */
	if (T) { UPD(0x0C0807E0u, 4); goto L_0C0807E0; }  /* 0C0807BA bt */
L_0C0807BC: BLKS(0x0C0807BCu);
	r2 = 0xB4u; UPD(0x0C0807BEu, 1);  /* 0C0807BC mov.w @(disp,pc),Rn */
	IF(0x0C0807BEu); MACL = r11 * r2;  /* 0C0807BE mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0807C2u, 3);  /* 0C0807C0 mov.l @(disp,pc),Rn */
	IF(0x0C0807C2u); r10 = MACL;  /* 0C0807C2 sts macl,Rn */
	r8 = 0x9Cu; UPD(0x0C0807C6u, 2);  /* 0C0807C4 mov.w @(disp,pc),Rn */
	r10 += r0;  /* 0C0807C6 add Rm,Rn */
	r8 += r10;  /* 0C0807C8 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C0807CCu, 3);  /* 0C0807CA mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0807CC tst Rm,Rn */
	{ u32 c_ = T; r2 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C080840u, 4); goto L_0C080840; } goto L_0C0807D2; }  /* 0C0807CE bt/s */
L_0C0807D2: BLKS(0x0C0807D2u);
	r2 += 0x1u;  /* 0C0807D2 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0807D6u, 3);  /* 0C0807D4 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0807D6 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0807D8 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C0807DA cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0807F0u, 6); goto L_0C0807F0; } UPD(0x0C0807E0u, 1); goto L_0C0807E0; }  /* 0C0807DC bt/s */
L_0C0807E0: BLKS(0x0C0807E0u);
	r15 = r14;  /* 0C0807E0 mov Rm,Rn */
	IF(0x0C0807E2u); PR = R32(r15); r15 += 4; UPD(0x0C0807E4u, 2);  /* 0C0807E2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0807E6u, 1);  /* 0C0807E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0807E8u, 1);  /* 0C0807E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0807EAu, 1);  /* 0C0807E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0807ECu, 1);  /* 0C0807EA mov.l @Rm+,Rn */
	IF(0x0C0807ECu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0807EC rts */
L_0C0807F0: BLKS(0x0C0807F0u);
	r0 = r3;  /* 0C0807F0 mov Rm,Rn */
	r4 = 0x0u;  /* 0C0807F2 mov #imm,Rn */
	W8(r2, r4); UPD(0x0C0807F6u, 3);  /* 0C0807F4 mov.b Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0807F6 add #imm,Rn */
	W8(r8, r0); UPD(0x0C0807FAu, 2);  /* 0C0807F8 mov.b Rm,@Rn */
	r2 = 0x86u; UPD(0x0C0807FCu, 1);  /* 0C0807FA mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C0807FC mov Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C080800u, 2);  /* 0C0807FE mov.l @(disp,pc),Rn */
	IF(0x0C080800u); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C080802u, 1);  /* 0C080800 mov.w @(r0,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C080804u, 1);  /* 0C080802 mov.l @(disp,pc),Rn */
	IF(0x0C080804u); { u32 t_ = r8; PR = 0x0C080808u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C080808u); }  /* 0C080804 jsr @Rn */
L_0C080808: BLKS(0x0C080808u);
	r8 = R32(r10 + 0x24u); UPD(0x0C08080Au, 1);  /* 0C080808 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C08080A mov Rm,Rn */
	r8 += r0;  /* 0C08080C add Rm,Rn */
	r0 = 0xC069AF0u; UPD(0x0C080810u, 3);  /* 0C08080E mov.l @(disp,pc),Rn */
	r6 = 0x10000u; UPD(0x0C080812u, 1);  /* 0C080810 mov.l @(disp,pc),Rn */
	r5 = 0xA0000u; UPD(0x0C080814u, 1);  /* 0C080812 mov.l @(disp,pc),Rn */
	IF(0x0C080814u); { u32 t_ = r0; PR = 0x0C080818u; r8 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C080818u); }  /* 0C080814 jsr @Rn */
L_0C080818: BLKS(0x0C080818u);
	r6 = R32(r10 + 0x28u); UPD(0x0C08081Au, 1);  /* 0C080818 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08081A add #imm,Rn */
	r7 = 0x30000u; UPD(0x0C08081Eu, 2);  /* 0C08081C mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C08081E mov Rm,Rn */
	W32(r15, r7); UPD(0x0C080822u, 2);  /* 0C080820 mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C080822 mov #imm,Rn */
	r7 = r9;  /* 0C080824 mov Rm,Rn */
	r9 = 0xC0BA7F0u; UPD(0x0C080828u, 3);  /* 0C080826 mov.l @(disp,pc),Rn */
	r8 = 0xC069B90u; UPD(0x0C08082Au, 1);  /* 0C080828 mov.l @(disp,pc),Rn */
	IF(0x0C08082Au); { u32 t_ = r9; PR = 0x0C08082Eu; r6 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA7F0, 0x0C0BA7F0u, 0x0C08082Eu); }  /* 0C08082A jsr @Rn */
L_0C08082E: BLKS(0x0C08082Eu);
	r15 += 0x4u;  /* 0C08082E add #imm,Rn */
	IF(0x0C080830u); { u32 t_ = r8; PR = 0x0C080834u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C080834u); }  /* 0C080830 jsr @Rn */
L_0C080834: BLKS(0x0C080834u);
	{ IF(0x0C080836u); ; /* slot nop */ UPD(0x0C0807E0u, 3); goto L_0C0807E0; }  /* 0C080834 bra */
L_0C080840: BLKS(0x0C080840u);
	r9 = 0xC0BC1B0u; UPD(0x0C080842u, 1);  /* 0C080840 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C080842 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C080844 mov #imm,Rn */
	IF(0x0C080846u); { u32 t_ = r9; PR = 0x0C08084Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08084Au); }  /* 0C080846 jsr @Rn */
L_0C08084A: BLKS(0x0C08084Au);
	T = (r0 & r0) == 0;  /* 0C08084A tst Rm,Rn */
	if (T) { UPD(0x0C0807E0u, 4); goto L_0C0807E0; }  /* 0C08084C bt */
L_0C08084E: BLKS(0x0C08084Eu);
	r0 = r10;  /* 0C08084E mov Rm,Rn */
	r4 = 0xA9u; UPD(0x0C080852u, 2);  /* 0C080850 mov.w @(disp,pc),Rn */
	IF(0x0C080852u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C080854u, 1);  /* 0C080852 mov.b @(r0,Rm),Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C080856u, 1);  /* 0C080854 mov.l @(disp,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C080858u, 1);  /* 0C080856 mov.l @(disp,Rm),Rn */
	r10 = 0xC0BBF10u; UPD(0x0C08085Au, 1);  /* 0C080858 mov.l @(disp,pc),Rn */
	IF(0x0C08085Au); { u32 t_ = r10; PR = 0x0C08085Eu; r6 = r3 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08085Eu); }  /* 0C08085A jsr @Rn */
L_0C08085E: BLKS(0x0C08085Eu);
	T = (r0 & r0) == 0;  /* 0C08085E tst Rm,Rn */
	if (T) { UPD(0x0C0807E0u, 4); goto L_0C0807E0; }  /* 0C080860 bt */
L_0C080862: BLKS(0x0C080862u);
	r5 = 0x3u;  /* 0C080862 mov #imm,Rn */
	{ W8(r8, r5); /* slot mov.b Rm,@Rn */ UPD(0x0C0807E0u, 4); goto L_0C0807E0; }  /* 0C080864 bra */
}

/* FUN_0c0808a0 */
void blk_f_0C0808A0(sh3_t *c)
{
	LOCALS;
L_0C0808A0: BLKS(0x0C0808A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0808A2u, 1);  /* 0C0808A0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C0808A2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0808A6u, 2);  /* 0C0808A4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0808A8u, 1);  /* 0C0808A6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0808AAu, 1);  /* 0C0808A8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0808ACu, 1);  /* 0C0808AA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0808AEu, 1);  /* 0C0808AC mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0808AE exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0808B2u, 2);  /* 0C0808B0 mov.l Rm,@-Rn */
	r4 = r12;  /* 0C0808B2 mov Rm,Rn */
	IF(0x0C0808B4u); r15 -= 4; W32(r15, PR); UPD(0x0C0808B6u, 2);  /* 0C0808B4 sts.l pr,@-Rn */
	r8 = 0xC0A8DD0u; UPD(0x0C0808B8u, 1);  /* 0C0808B6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0808B8 add #imm,Rn */
	IF(0x0C0808BAu); { u32 t_ = r8; PR = 0x0C0808BEu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C0808BEu); }  /* 0C0808BA jsr @Rn */
L_0C0808BE: BLKS(0x0C0808BEu);
	T = (r0 & r0) == 0;  /* 0C0808BE tst Rm,Rn */
	if (!T) { UPD(0x0C0808E0u, 4); goto L_0C0808E0; }  /* 0C0808C0 bf */
L_0C0808C2: BLKS(0x0C0808C2u);
	r14 += 0x4u;  /* 0C0808C2 add #imm,Rn */
	r15 = r14;  /* 0C0808C4 mov Rm,Rn */
	IF(0x0C0808C6u); PR = R32(r15); r15 += 4; UPD(0x0C0808C8u, 3);  /* 0C0808C6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0808CAu, 1);  /* 0C0808C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0808CCu, 1);  /* 0C0808CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0808CEu, 1);  /* 0C0808CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0808D0u, 1);  /* 0C0808CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0808D2u, 1);  /* 0C0808D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0808D4u, 1);  /* 0C0808D2 mov.l @Rm+,Rn */
	IF(0x0C0808D4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0808D4 rts */
L_0C0808E0: BLKS(0x0C0808E0u);
	r8 = 0xC0BC1B0u; UPD(0x0C0808E2u, 1);  /* 0C0808E0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0808E2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C0808E4 mov #imm,Rn */
	IF(0x0C0808E6u); { u32 t_ = r8; PR = 0x0C0808EAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0808EAu); }  /* 0C0808E6 jsr @Rn */
L_0C0808EA: BLKS(0x0C0808EAu);
	T = (r0 & r0) == 0;  /* 0C0808EA tst Rm,Rn */
	if (T) { UPD(0x0C0808C2u, 4); goto L_0C0808C2; }  /* 0C0808EC bt */
L_0C0808EE: BLKS(0x0C0808EEu);
	r4 = 0xB4u; UPD(0x0C0808F0u, 1);  /* 0C0808EE mov.w @(disp,pc),Rn */
	IF(0x0C0808F0u); MACL = r12 * r4;  /* 0C0808F0 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0808F4u, 3);  /* 0C0808F2 mov.l @(disp,pc),Rn */
	IF(0x0C0808F4u); r8 = MACL;  /* 0C0808F4 sts macl,Rn */
	r8 += r0;  /* 0C0808F6 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0808FAu, 3);  /* 0C0808F8 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0808FA mov Rm,Rn */
	r9 = 0xC0BBF10u; UPD(0x0C0808FEu, 2);  /* 0C0808FC mov.l @(disp,pc),Rn */
	IF(0x0C0808FEu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C080900u, 1);  /* 0C0808FE mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C080902u, 1);  /* 0C080900 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C080902 extu.b Rm,Rn */
	IF(0x0C080904u); { u32 t_ = r9; PR = 0x0C080908u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C080908u); }  /* 0C080904 jsr @Rn */
L_0C080908: BLKS(0x0C080908u);
	T = (r0 & r0) == 0;  /* 0C080908 tst Rm,Rn */
	if (T) { UPD(0x0C0808C2u, 4); goto L_0C0808C2; }  /* 0C08090A bt */
L_0C08090C: BLKS(0x0C08090Cu);
	r0 = r8;  /* 0C08090C mov Rm,Rn */
	r5 = 0x86u; UPD(0x0C080910u, 2);  /* 0C08090E mov.w @(disp,pc),Rn */
	IF(0x0C080910u); r11 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C080912u, 1);  /* 0C080910 mov.w @(r0,Rm),Rn */
	r13 = 0x0u;  /* 0C080912 mov #imm,Rn */
	W32(r14, r8); UPD(0x0C080916u, 2);  /* 0C080914 mov.l Rm,@Rn */
	IF(0x0C080916u); ;  /* 0C080916 nop */
	UPD(0x0C080918u, 1);
L_0C080918: BLKS(0x0C080918u);
	r7 = 0xC069B20u; UPD(0x0C08091Au, 1);  /* 0C080918 mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C08091Cu, 1);  /* 0C08091A mov.l @(disp,pc),Rn */
	IF(0x0C08091Cu); { u32 t_ = r7; PR = 0x0C080920u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C080920u); }  /* 0C08091C jsr @Rn */
L_0C080920: BLKS(0x0C080920u);
	r6 = 0xC191440u; UPD(0x0C080922u, 1);  /* 0C080920 mov.l @(disp,pc),Rn */
	r10 = r13;  /* 0C080922 mov Rm,Rn */
	r1 = 0xC069AF0u; UPD(0x0C080926u, 2);  /* 0C080924 mov.l @(disp,pc),Rn */
	IF(0x0C080926u); r10 <<= 2;  /* 0C080926 shll2 Rn */
	r10 += r6;  /* 0C080928 add Rm,Rn */
	r9 = r0;  /* 0C08092A mov Rm,Rn */
	r4 = r11;  /* 0C08092C mov Rm,Rn */
	IF(0x0C08092Eu); { u32 t_ = r1; PR = 0x0C080932u; r5 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 6); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C080932u); }  /* 0C08092E jsr @Rn */
L_0C080932: BLKS(0x0C080932u);
	r9 -= r0;  /* 0C080932 sub Rm,Rn */
	r1 = r9;  /* 0C080934 mov Rm,Rn */
	r1 += r1;  /* 0C080936 add Rm,Rn */
	r1 += r9;  /* 0C080938 add Rm,Rn */
	IF(0x0C08093Au); T = (s32)r1 >= 0;  /* 0C08093A cmp/pz Rn */
	if (!T) { UPD(0x0C0809A0u, 8); goto L_0C0809A0; }  /* 0C08093C bf */
L_0C08093E: BLKS(0x0C08093Eu);
	r5 = R32(r14); UPD(0x0C080940u, 1);  /* 0C08093E mov.l @Rm,Rn */
	IF(0x0C080940u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C080940 shar Rn */
	r9 = R32(r5 + 0x24u); UPD(0x0C080944u, 2);  /* 0C080942 mov.l @(disp,Rm),Rn */
	IF(0x0C080944u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C080944 shar Rn */
	r7 = 0xC069AF0u; UPD(0x0C080948u, 2);  /* 0C080946 mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C080948 add Rm,Rn */
	r0 = 0x10000u; UPD(0x0C08094Cu, 2);  /* 0C08094A mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C08094C mov Rm,Rn */
	r5 = 0x100000u; UPD(0x0C080950u, 2);  /* 0C08094E mov.l @(disp,pc),Rn */
	IF(0x0C080950u); { u32 t_ = r7; PR = 0x0C080954u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C080954u); }  /* 0C080950 jsr @Rn */
L_0C080954: BLKS(0x0C080954u);
	r4 = R32(r14); UPD(0x0C080956u, 1);  /* 0C080954 mov.l @Rm,Rn */
	r6 = 0xC069B20u; UPD(0x0C080958u, 1);  /* 0C080956 mov.l @(disp,pc),Rn */
	r8 = R32(r4 + 0x28u); UPD(0x0C08095Au, 1);  /* 0C080958 mov.l @(disp,Rm),Rn */
	r5 = R32(r10); UPD(0x0C08095Cu, 1);  /* 0C08095A mov.l @Rm,Rn */
	r8 += r0;  /* 0C08095C add Rm,Rn */
	IF(0x0C08095Eu); { u32 t_ = r6; PR = 0x0C080962u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C080962u); }  /* 0C08095E jsr @Rn */
L_0C080962: BLKS(0x0C080962u);
	r8 += r0;  /* 0C080962 add Rm,Rn */
	r2 = 0x28000u; UPD(0x0C080966u, 2);  /* 0C080964 mov.l @(disp,pc),Rn */
	r6 = r8;  /* 0C080966 mov Rm,Rn */
	r3 = 0xC0BA480u; UPD(0x0C08096Au, 2);  /* 0C080968 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08096A add #imm,Rn */
	r8 = r13;  /* 0C08096C mov Rm,Rn */
	W32(r15, r2); UPD(0x0C080970u, 3);  /* 0C08096E mov.l Rm,@Rn */
	r8 += 0x1u;  /* 0C080970 add #imm,Rn */
	r4 = 0x0u;  /* 0C080972 mov #imm,Rn */
	r5 = r9;  /* 0C080974 mov Rm,Rn */
	r7 = r11;  /* 0C080976 mov Rm,Rn */
	IF(0x0C080978u); { u32 t_ = r3; PR = 0x0C08097Cu; r13 = (u32)(s32)(s16)r8; /* slot exts.w Rm,Rn */ UPD(t_, 6); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C08097Cu); }  /* 0C080978 jsr @Rn */
L_0C08097C: BLKS(0x0C08097Cu);
	r10 = 0x1u;  /* 0C08097C mov #imm,Rn */
	T = (s32)r13 > (s32)r10;  /* 0C08097E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C080918u, 5); goto L_0C080918; } goto L_0C080984; }  /* 0C080980 bf/s */
L_0C080984: BLKS(0x0C080984u);
	r3 = 0xC069B90u; UPD(0x0C080986u, 2);  /* 0C080984 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C080986 mov Rm,Rn */
	r14 += 0x4u;  /* 0C080988 add #imm,Rn */
	r15 = r14;  /* 0C08098A mov Rm,Rn */
	IF(0x0C08098Cu); PR = R32(r15); r15 += 4; UPD(0x0C08098Eu, 4);  /* 0C08098C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C080990u, 1);  /* 0C08098E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C080992u, 1);  /* 0C080990 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C080994u, 1);  /* 0C080992 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C080996u, 1);  /* 0C080994 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C080998u, 1);  /* 0C080996 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08099Au, 1);  /* 0C080998 mov.l @Rm+,Rn */
	IF(0x0C08099Au); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C069B90u: TAIL(blk_f_0C069B90); default: JUMPD(tv_); } }  /* 0C08099A jmp @Rn */
L_0C0809A0: BLKS(0x0C0809A0u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C08093Eu, 3); goto L_0C08093E; }  /* 0C0809A0 bra */
}

void blk_f_0C0809E0(sh3_t *c)
{
	LOCALS;
L_0C0809E0: BLKS(0x0C0809E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0809E2u, 1);  /* 0C0809E0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C0809E2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0809E6u, 2);  /* 0C0809E4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0809E8u, 1);  /* 0C0809E6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0809EAu, 1);  /* 0C0809E8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0809ECu, 1);  /* 0C0809EA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0809EEu, 1);  /* 0C0809EC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0809F0u, 1);  /* 0C0809EE mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0809F0 exts.w Rm,Rn */
	IF(0x0C0809F2u); r15 -= 4; W32(r15, PR); UPD(0x0C0809F4u, 2);  /* 0C0809F2 sts.l pr,@-Rn */
	r4 = r13;  /* 0C0809F4 mov Rm,Rn */
	r8 = 0xC0A8DD0u; UPD(0x0C0809F8u, 2);  /* 0C0809F6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0809F8 add #imm,Rn */
	IF(0x0C0809FAu); { u32 t_ = r8; PR = 0x0C0809FEu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C0809FEu); }  /* 0C0809FA jsr @Rn */
L_0C0809FE: BLKS(0x0C0809FEu);
	T = (r0 & r0) == 0;  /* 0C0809FE tst Rm,Rn */
	if (!T) { UPD(0x0C080A20u, 4); goto L_0C080A20; }  /* 0C080A00 bf */
L_0C080A02: BLKS(0x0C080A02u);
	r14 += 0x8u;  /* 0C080A02 add #imm,Rn */
	r15 = r14;  /* 0C080A04 mov Rm,Rn */
	IF(0x0C080A06u); PR = R32(r15); r15 += 4; UPD(0x0C080A08u, 3);  /* 0C080A06 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C080A0Au, 1);  /* 0C080A08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C080A0Cu, 1);  /* 0C080A0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C080A0Eu, 1);  /* 0C080A0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C080A10u, 1);  /* 0C080A0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C080A12u, 1);  /* 0C080A10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C080A14u, 1);  /* 0C080A12 mov.l @Rm+,Rn */
	IF(0x0C080A14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C080A14 rts */
L_0C080A20: BLKS(0x0C080A20u);
	r8 = 0xC0BC1B0u; UPD(0x0C080A22u, 1);  /* 0C080A20 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C080A22 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C080A24 mov #imm,Rn */
	IF(0x0C080A26u); { u32 t_ = r8; PR = 0x0C080A2Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C080A2Au); }  /* 0C080A26 jsr @Rn */
L_0C080A2A: BLKS(0x0C080A2Au);
	T = (r0 & r0) == 0;  /* 0C080A2A tst Rm,Rn */
	if (T) { UPD(0x0C080A02u, 4); goto L_0C080A02; }  /* 0C080A2C bt */
L_0C080A2E: BLKS(0x0C080A2Eu);
	r4 = 0xB4u; UPD(0x0C080A30u, 1);  /* 0C080A2E mov.w @(disp,pc),Rn */
	IF(0x0C080A30u); MACL = r13 * r4;  /* 0C080A30 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C080A34u, 3);  /* 0C080A32 mov.l @(disp,pc),Rn */
	IF(0x0C080A34u); r8 = MACL;  /* 0C080A34 sts macl,Rn */
	r8 += r0;  /* 0C080A36 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C080A3Au, 3);  /* 0C080A38 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C080A3A mov Rm,Rn */
	r9 = 0xC0BBF10u; UPD(0x0C080A3Eu, 2);  /* 0C080A3C mov.l @(disp,pc),Rn */
	IF(0x0C080A3Eu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C080A40u, 1);  /* 0C080A3E mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C080A42u, 1);  /* 0C080A40 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C080A42 extu.b Rm,Rn */
	IF(0x0C080A44u); { u32 t_ = r9; PR = 0x0C080A48u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C080A48u); }  /* 0C080A44 jsr @Rn */
L_0C080A48: BLKS(0x0C080A48u);
	T = (r0 & r0) == 0;  /* 0C080A48 tst Rm,Rn */
	if (T) { UPD(0x0C080A02u, 4); goto L_0C080A02; }  /* 0C080A4A bt */
L_0C080A4C: BLKS(0x0C080A4Cu);
	r5 = 0x0u;  /* 0C080A4C mov #imm,Rn */
	W32(r14, r5); UPD(0x0C080A50u, 2);  /* 0C080A4E mov.l Rm,@Rn */
	W32(r14 + 0x4u, r8); UPD(0x0C080A52u, 1);  /* 0C080A50 mov.l Rm,@(disp,Rn) */
	IF(0x0C080A52u); ;  /* 0C080A52 nop */
	UPD(0x0C080A54u, 1);
L_0C080A54: BLKS(0x0C080A54u);
	r0 = R32(r14 + 0x4u); UPD(0x0C080A56u, 1);  /* 0C080A54 mov.l @(disp,Rm),Rn */
	r12 = 0x86u; UPD(0x0C080A58u, 1);  /* 0C080A56 mov.w @(disp,pc),Rn */
	r9 = R32(r14); UPD(0x0C080A5Au, 1);  /* 0C080A58 mov.l @Rm,Rn */
	IF(0x0C080A5Au); r7 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C080A5Cu, 1);  /* 0C080A5A mov.w @(r0,Rm),Rn */
	IF(0x0C080A5Cu); r9 <<= 2;  /* 0C080A5C shll2 Rn */
	r11 = 0xC19146Au; UPD(0x0C080A60u, 2);  /* 0C080A5E mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C080A60 mov Rm,Rn */
	IF(0x0C080A62u); r10 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C080A64u, 2);  /* 0C080A62 mov.w @(r0,Rm),Rn */
	r6 = 0xC069B20u; UPD(0x0C080A66u, 1);  /* 0C080A64 mov.l @(disp,pc),Rn */
	r7 += r10;  /* 0C080A66 add Rm,Rn */
	r11 = 0xC191448u; UPD(0x0C080A6Au, 2);  /* 0C080A68 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C080A6A exts.w Rm,Rn */
	r11 += r9;  /* 0C080A6C add Rm,Rn */
	r4 = r10;  /* 0C080A6E mov Rm,Rn */
	IF(0x0C080A70u); { u32 t_ = r6; PR = 0x0C080A74u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C080A74u); }  /* 0C080A70 jsr @Rn */
L_0C080A74: BLKS(0x0C080A74u);
	r1 = 0xC069AF0u; UPD(0x0C080A76u, 1);  /* 0C080A74 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C080A76 mov Rm,Rn */
	r12 = 0xC191458u; UPD(0x0C080A7Au, 2);  /* 0C080A78 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C080A7A mov Rm,Rn */
	r12 += r9;  /* 0C080A7C add Rm,Rn */
	IF(0x0C080A7Eu); { u32 t_ = r1; PR = 0x0C080A82u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C080A82u); }  /* 0C080A7E jsr @Rn */
L_0C080A82: BLKS(0x0C080A82u);
	r8 -= r0;  /* 0C080A82 sub Rm,Rn */
	r1 = r8;  /* 0C080A84 mov Rm,Rn */
	r1 += r1;  /* 0C080A86 add Rm,Rn */
	r1 += r8;  /* 0C080A88 add Rm,Rn */
	IF(0x0C080A8Au); T = (s32)r1 >= 0;  /* 0C080A8A cmp/pz Rn */
	if (!T) { UPD(0x0C080B00u, 8); goto L_0C080B00; }  /* 0C080A8C bf */
L_0C080A8E: BLKS(0x0C080A8Eu);
	r9 = R32(r14 + 0x4u); UPD(0x0C080A90u, 1);  /* 0C080A8E mov.l @(disp,Rm),Rn */
	IF(0x0C080A90u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C080A90 shar Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C080A94u, 2);  /* 0C080A92 mov.l @(disp,Rm),Rn */
	IF(0x0C080A94u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C080A94 shar Rn */
	r7 = 0xC069AF0u; UPD(0x0C080A98u, 2);  /* 0C080A96 mov.l @(disp,pc),Rn */
	r8 += r1;  /* 0C080A98 add Rm,Rn */
	r5 = 0x10000u; UPD(0x0C080A9Cu, 2);  /* 0C080A9A mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C080A9C mov Rm,Rn */
	r8 += r5;  /* 0C080A9E add Rm,Rn */
	IF(0x0C080AA0u); { u32 t_ = r7; PR = 0x0C080AA4u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C080AA4u); }  /* 0C080AA0 jsr @Rn */
L_0C080AA4: BLKS(0x0C080AA4u);
	r4 = R32(r14 + 0x4u); UPD(0x0C080AA6u, 1);  /* 0C080AA4 mov.l @(disp,Rm),Rn */
	r6 = 0xC069B20u; UPD(0x0C080AA8u, 1);  /* 0C080AA6 mov.l @(disp,pc),Rn */
	r11 = R32(r4 + 0x28u); UPD(0x0C080AAAu, 1);  /* 0C080AA8 mov.l @(disp,Rm),Rn */
	r5 = R32(r12); UPD(0x0C080AACu, 1);  /* 0C080AAA mov.l @Rm,Rn */
	r4 = r10;  /* 0C080AAC mov Rm,Rn */
	IF(0x0C080AAEu); { u32 t_ = r6; PR = 0x0C080AB2u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C080AB2u); }  /* 0C080AAE jsr @Rn */
L_0C080AB2: BLKS(0x0C080AB2u);
	r7 = r10;  /* 0C080AB2 mov Rm,Rn */
	r11 += r0;  /* 0C080AB4 add Rm,Rn */
	r10 = 0xC0BA7F0u; UPD(0x0C080AB8u, 3);  /* 0C080AB6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C080AB8 add #imm,Rn */
	r0 = 0x28000u; UPD(0x0C080ABCu, 2);  /* 0C080ABA mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C080ABC mov Rm,Rn */
	W32(r15, r0); UPD(0x0C080AC0u, 2);  /* 0C080ABE mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C080AC0 mov #imm,Rn */
	IF(0x0C080AC2u); { u32 t_ = r10; PR = 0x0C080AC6u; r6 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA7F0, 0x0C0BA7F0u, 0x0C080AC6u); }  /* 0C080AC2 jsr @Rn */
L_0C080AC6: BLKS(0x0C080AC6u);
	r3 = R32(r14); UPD(0x0C080AC8u, 1);  /* 0C080AC6 mov.l @Rm,Rn */
	r8 = 0x3u;  /* 0C080AC8 mov #imm,Rn */
	r3 += 0x1u;  /* 0C080ACA add #imm,Rn */
	r2 = (u32)(s32)(s16)r3;  /* 0C080ACC exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C080AD0u, 4);  /* 0C080ACE mov.l Rm,@Rn */
	r9 = R32(r14); UPD(0x0C080AD2u, 1);  /* 0C080AD0 mov.l @Rm,Rn */
	T = (s32)r9 > (s32)r8;  /* 0C080AD2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C080A54u, 4); goto L_0C080A54; } goto L_0C080AD8; }  /* 0C080AD4 bf/s */
L_0C080AD8: BLKS(0x0C080AD8u);
	r2 = 0xC069B90u; UPD(0x0C080ADAu, 2);  /* 0C080AD8 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C080ADA mov Rm,Rn */
	r14 += 0x8u;  /* 0C080ADC add #imm,Rn */
	r15 = r14;  /* 0C080ADE mov Rm,Rn */
	IF(0x0C080AE0u); PR = R32(r15); r15 += 4; UPD(0x0C080AE2u, 4);  /* 0C080AE0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C080AE4u, 1);  /* 0C080AE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C080AE6u, 1);  /* 0C080AE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C080AE8u, 1);  /* 0C080AE6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C080AEAu, 1);  /* 0C080AE8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C080AECu, 1);  /* 0C080AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C080AEEu, 1);  /* 0C080AEC mov.l @Rm+,Rn */
	IF(0x0C080AEEu); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C069B90u: TAIL(blk_f_0C069B90); default: JUMPD(tv_); } }  /* 0C080AEE jmp @Rn */
L_0C080B00: BLKS(0x0C080B00u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C080A8Eu, 3); goto L_0C080A8E; }  /* 0C080B00 bra */
}

void blk_f_0C080B40(sh3_t *c)
{
	LOCALS;
L_0C080B40: BLKS(0x0C080B40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C080B42u, 1);  /* 0C080B40 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C080B42 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C080B46u, 2);  /* 0C080B44 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C080B48u, 1);  /* 0C080B46 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C080B4Au, 1);  /* 0C080B48 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C080B4Cu, 1);  /* 0C080B4A mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C080B4Eu, 1);  /* 0C080B4C mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C080B4E exts.w Rm,Rn */
	IF(0x0C080B50u); MACL = r12 * r0;  /* 0C080B50 mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C080B54u, 4);  /* 0C080B52 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C080B56u, 1);  /* 0C080B54 mov.l @(disp,pc),Rn */
	IF(0x0C080B56u); r10 = MACL;  /* 0C080B56 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C080B5Au, 2);  /* 0C080B58 mov.l Rm,@-Rn */
	r10 += r0;  /* 0C080B5A add Rm,Rn */
	r11 = 0x9Cu; UPD(0x0C080B5Eu, 2);  /* 0C080B5C mov.w @(disp,pc),Rn */
	IF(0x0C080B5Eu); r15 -= 4; W32(r15, PR); UPD(0x0C080B60u, 1);  /* 0C080B5E sts.l pr,@-Rn */
	r11 += r10;  /* 0C080B60 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C080B64u, 2);  /* 0C080B62 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C080B64 add #imm,Rn */
	T = (r3 & r3) == 0;  /* 0C080B66 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C080C40u, 5); goto L_0C080C40; } goto L_0C080B6C; }  /* 0C080B68 bt/s */
L_0C080B6C: BLKS(0x0C080B6Cu);
	r2 = r11;  /* 0C080B6C mov Rm,Rn */
	r2 += 0x1u;  /* 0C080B6E add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C080B72u, 4);  /* 0C080B70 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C080B72 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C080B74 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C080B76 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C080BA0u, 6); goto L_0C080BA0; } UPD(0x0C080B7Cu, 1); goto L_0C080B7C; }  /* 0C080B78 bt/s */
L_0C080B7C: BLKS(0x0C080B7Cu);
	r14 += 0x8u;  /* 0C080B7C add #imm,Rn */
	UPD(0x0C080B7Eu, 1);
L_0C080B7E: BLKS(0x0C080B7Eu);
	r15 = r14;  /* 0C080B7E mov Rm,Rn */
	IF(0x0C080B80u); PR = R32(r15); r15 += 4; UPD(0x0C080B82u, 2);  /* 0C080B80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C080B84u, 1);  /* 0C080B82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C080B86u, 1);  /* 0C080B84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C080B88u, 1);  /* 0C080B86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C080B8Au, 1);  /* 0C080B88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C080B8Cu, 1);  /* 0C080B8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C080B8Eu, 1);  /* 0C080B8C mov.l @Rm+,Rn */
	IF(0x0C080B8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C080B8E rts */
L_0C080BA0: BLKS(0x0C080BA0u);
	r13 = r3;  /* 0C080BA0 mov Rm,Rn */
	r13 += 0xFFFFFFFFu;  /* 0C080BA2 add #imm,Rn */
	W8(r11, r13); UPD(0x0C080BA6u, 3);  /* 0C080BA4 mov.b Rm,@Rn */
	r9 = 0x0u;  /* 0C080BA6 mov #imm,Rn */
	r5 = 0x86u; UPD(0x0C080BAAu, 2);  /* 0C080BA8 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C080BAA mov Rm,Rn */
	W8(r2, r9); UPD(0x0C080BAEu, 2);  /* 0C080BAC mov.b Rm,@Rn */
	IF(0x0C080BAEu); r13 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C080BB0u, 1);  /* 0C080BAE mov.w @(r0,Rm),Rn */
	r9 = 0x3u;  /* 0C080BB0 mov #imm,Rn */
	r9 &= r3;  /* 0C080BB2 and Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C080BB6u, 3);  /* 0C080BB4 mov.l @(disp,pc),Rn */
	IF(0x0C080BB6u); r9 <<= 2;  /* 0C080BB6 shll2 Rn */
	r0 = 0xC191478u; UPD(0x0C080BBAu, 2);  /* 0C080BB8 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C080BBA mov Rm,Rn */
	r0 += r9;  /* 0C080BBC add Rm,Rn */
	r5 = R32(r0); UPD(0x0C080BC0u, 3);  /* 0C080BBE mov.l @Rm,Rn */
	IF(0x0C080BC0u); { u32 t_ = r8; PR = 0x0C080BC4u; W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C080BC4u); }  /* 0C080BC0 jsr @Rn */
L_0C080BC4: BLKS(0x0C080BC4u);
	r7 = 0xC191488u; UPD(0x0C080BC6u, 1);  /* 0C080BC4 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C080BC6 mov Rm,Rn */
	r6 = 0xC069AF0u; UPD(0x0C080BCAu, 2);  /* 0C080BC8 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C080BCA add Rm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C080BCEu, 2);  /* 0C080BCC mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C080BCE mov Rm,Rn */
	IF(0x0C080BD0u); { u32 t_ = r6; PR = 0x0C080BD4u; r5 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C080BD4u); }  /* 0C080BD0 jsr @Rn */
L_0C080BD4: BLKS(0x0C080BD4u);
	r8 -= r0;  /* 0C080BD4 sub Rm,Rn */
	r1 = r8;  /* 0C080BD6 mov Rm,Rn */
	r1 += r1;  /* 0C080BD8 add Rm,Rn */
	r1 += r8;  /* 0C080BDA add Rm,Rn */
	IF(0x0C080BDCu); T = (s32)r1 >= 0;  /* 0C080BDC cmp/pz Rn */
	if (!T) { UPD(0x0C080C30u, 8); goto L_0C080C30; }  /* 0C080BDE bf */
L_0C080BE0: BLKS(0x0C080BE0u);
	r9 = R32(r10 + 0x24u); UPD(0x0C080BE2u, 1);  /* 0C080BE0 mov.l @(disp,Rm),Rn */
	IF(0x0C080BE2u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C080BE2 shar Rn */
	IF(0x0C080BE4u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C080BE4 shar Rn */
	r6 = 0xC069AF0u; UPD(0x0C080BE8u, 3);  /* 0C080BE6 mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C080BE8 add Rm,Rn */
	r4 = 0x10000u; UPD(0x0C080BECu, 2);  /* 0C080BEA mov.l @(disp,pc),Rn */
	r7 = R32(r14); UPD(0x0C080BEEu, 1);  /* 0C080BEC mov.l @Rm,Rn */
	r9 += r4;  /* 0C080BEE add Rm,Rn */
	r5 = R32(r7); UPD(0x0C080BF2u, 2);  /* 0C080BF0 mov.l @Rm,Rn */
	IF(0x0C080BF2u); { u32 t_ = r6; PR = 0x0C080BF6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C080BF6u); }  /* 0C080BF2 jsr @Rn */
L_0C080BF6: BLKS(0x0C080BF6u);
	r3 = 0xC069B20u; UPD(0x0C080BF8u, 1);  /* 0C080BF6 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C080BF8 mov Rm,Rn */
	r8 = R32(r10 + 0x28u); UPD(0x0C080BFCu, 2);  /* 0C080BFA mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C080BFEu, 1);  /* 0C080BFC mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C080BFE add Rm,Rn */
	IF(0x0C080C00u); { u32 t_ = r3; PR = 0x0C080C04u; r5 = R32(r1); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C080C04u); }  /* 0C080C00 jsr @Rn */
L_0C080C04: BLKS(0x0C080C04u);
	r8 += r0;  /* 0C080C04 add Rm,Rn */
	r6 = r8;  /* 0C080C06 mov Rm,Rn */
	r8 = 0xC0BA480u; UPD(0x0C080C0Au, 3);  /* 0C080C08 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C080C0A add #imm,Rn */
	r2 = 0x30000u; UPD(0x0C080C0Eu, 2);  /* 0C080C0C mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C080C0E mov #imm,Rn */
	W32(r15, r2); UPD(0x0C080C12u, 2);  /* 0C080C10 mov.l Rm,@Rn */
	r5 = r9;  /* 0C080C12 mov Rm,Rn */
	IF(0x0C080C14u); { u32 t_ = r8; PR = 0x0C080C18u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C080C18u); }  /* 0C080C14 jsr @Rn */
L_0C080C18: BLKS(0x0C080C18u);
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C080C1Au, 1);  /* 0C080C18 mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C080C1A tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C080B7Cu, 4); goto L_0C080B7C; } goto L_0C080C20; }  /* 0C080C1C bf/s */
L_0C080C20: BLKS(0x0C080C20u);
	r11 = 0xC069B90u; UPD(0x0C080C22u, 2);  /* 0C080C20 mov.l @(disp,pc),Rn */
	IF(0x0C080C22u); { u32 t_ = r11; PR = 0x0C080C26u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C080C26u); }  /* 0C080C22 jsr @Rn */
L_0C080C26: BLKS(0x0C080C26u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C080B7Eu, 3); goto L_0C080B7E; }  /* 0C080C26 bra */
L_0C080C30: BLKS(0x0C080C30u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C080BE0u, 3); goto L_0C080BE0; }  /* 0C080C30 bra */
L_0C080C40: BLKS(0x0C080C40u);
	r8 = 0xC0A8DD0u; UPD(0x0C080C42u, 1);  /* 0C080C40 mov.l @(disp,pc),Rn */
	IF(0x0C080C42u); { u32 t_ = r8; PR = 0x0C080C46u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C080C46u); }  /* 0C080C42 jsr @Rn */
L_0C080C46: BLKS(0x0C080C46u);
	T = (r0 & r0) == 0;  /* 0C080C46 tst Rm,Rn */
	if (T) { UPD(0x0C080B7Cu, 4); goto L_0C080B7C; }  /* 0C080C48 bt */
L_0C080C4A: BLKS(0x0C080C4Au);
	r4 = r12;  /* 0C080C4A mov Rm,Rn */
	r9 = 0xC0BC1B0u; UPD(0x0C080C4Eu, 2);  /* 0C080C4C mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C080C4E mov #imm,Rn */
	IF(0x0C080C50u); { u32 t_ = r9; PR = 0x0C080C54u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C080C54u); }  /* 0C080C50 jsr @Rn */
L_0C080C54: BLKS(0x0C080C54u);
	T = (r0 & r0) == 0;  /* 0C080C54 tst Rm,Rn */
	if (T) { UPD(0x0C080B7Cu, 4); goto L_0C080B7C; }  /* 0C080C56 bt */
L_0C080C58: BLKS(0x0C080C58u);
	r4 = R32(r10 + 0x24u); UPD(0x0C080C5Au, 1);  /* 0C080C58 mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C080C5A mov Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C080C5Eu, 2);  /* 0C080C5C mov.l @(disp,Rm),Rn */
	r3 = 0xA9u; UPD(0x0C080C60u, 1);  /* 0C080C5E mov.w @(disp,pc),Rn */
	r10 = 0xC0BBF10u; UPD(0x0C080C62u, 1);  /* 0C080C60 mov.l @(disp,pc),Rn */
	IF(0x0C080C62u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C080C64u, 1);  /* 0C080C62 mov.b @(r0,Rm),Rn */
	IF(0x0C080C64u); { u32 t_ = r10; PR = 0x0C080C68u; r6 = r2 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C080C68u); }  /* 0C080C64 jsr @Rn */
L_0C080C68: BLKS(0x0C080C68u);
	T = (r0 & r0) == 0;  /* 0C080C68 tst Rm,Rn */
	if (T) { UPD(0x0C080C26u, 4); goto L_0C080C26; }  /* 0C080C6A bt */
L_0C080C6C: BLKS(0x0C080C6Cu);
	r4 = 0x8u;  /* 0C080C6C mov #imm,Rn */
	{ W8(r11, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C080B7Cu, 4); goto L_0C080B7C; }  /* 0C080C6E bra */
}

/* FUN_0c080cb0 */
void blk_f_0C080CB0(sh3_t *c)
{
	LOCALS;
L_0C080CB0: BLKS(0x0C080CB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C080CB2u, 1);  /* 0C080CB0 mov.l Rm,@-Rn */
	r4 = 0x2u;  /* 0C080CB2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C080CB6u, 2);  /* 0C080CB4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C080CB8u, 1);  /* 0C080CB6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C080CBAu, 1);  /* 0C080CB8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C080CBCu, 1);  /* 0C080CBA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C080CBEu, 1);  /* 0C080CBC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C080CC0u, 1);  /* 0C080CBE mov.l Rm,@-Rn */
	r2 = 0xC2B1811u; UPD(0x0C080CC2u, 1);  /* 0C080CC0 mov.l @(disp,pc),Rn */
	IF(0x0C080CC2u); r15 -= 4; W32(r15, PR); UPD(0x0C080CC4u, 1);  /* 0C080CC2 sts.l pr,@-Rn */
	r8 = 0xC071740u; UPD(0x0C080CC6u, 1);  /* 0C080CC4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C080CC6 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C080CCAu, 2);  /* 0C080CC8 mov.b @Rm,Rn */
	r14 = r15;  /* 0C080CCA mov Rm,Rn */
	IF(0x0C080CCCu); { u32 t_ = r8; PR = 0x0C080CD0u; W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C080CD0u); }  /* 0C080CCC jsr @Rn */
L_0C080CD0: BLKS(0x0C080CD0u);
	T = (r0 & r0) == 0;  /* 0C080CD0 tst Rm,Rn */
	if (!T) { UPD(0x0C080CF0u, 4); goto L_0C080CF0; }  /* 0C080CD2 bf */
L_0C080CD4: BLKS(0x0C080CD4u);
	r0 = 0x1u;  /* 0C080CD4 mov #imm,Rn */
	r14 += 0xCu;  /* 0C080CD6 add #imm,Rn */
	r15 = r14;  /* 0C080CD8 mov Rm,Rn */
	IF(0x0C080CDAu); PR = R32(r15); r15 += 4; UPD(0x0C080CDCu, 4);  /* 0C080CDA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C080CDEu, 1);  /* 0C080CDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C080CE0u, 1);  /* 0C080CDE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C080CE2u, 1);  /* 0C080CE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C080CE4u, 1);  /* 0C080CE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C080CE6u, 1);  /* 0C080CE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C080CE8u, 1);  /* 0C080CE6 mov.l @Rm+,Rn */
	IF(0x0C080CE8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C080CE8 rts */
L_0C080CF0: BLKS(0x0C080CF0u);
	r10 = 0xC28EDFCu; UPD(0x0C080CF2u, 1);  /* 0C080CF0 mov.l @(disp,pc),Rn */
	r13 = 0xB4u; UPD(0x0C080CF4u, 1);  /* 0C080CF2 mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r9 = v_; } UPD(0x0C080CF6u, 1);  /* 0C080CF4 mov.w @Rm+,Rn */
	r8 = 0xC2460ACu; UPD(0x0C080CF8u, 1);  /* 0C080CF6 mov.l @(disp,pc),Rn */
	IF(0x0C080CF8u); MACL = r9 * r13;  /* 0C080CF8 mul.l Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C080CFCu, 3);  /* 0C080CFA mov.w @Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C080CFEu, 1);  /* 0C080CFC mov.l @(disp,pc),Rn */
	IF(0x0C080CFEu); r13 = MACL;  /* 0C080CFE sts macl,Rn */
	r13 += r5;  /* 0C080D00 add Rm,Rn */
	r1 = 0xC2B03A2u; UPD(0x0C080D04u, 3);  /* 0C080D02 mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFFFF;  /* 0C080D04 extu.w Rm,Rn */
	W32(r13 + 0x4u, r0); UPD(0x0C080D08u, 2);  /* 0C080D06 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C080D08 mov Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r1); UPD(0x0C080D0Cu, 2);  /* 0C080D0A mov.w @Rm,Rn */
	r0 = r13;  /* 0C080D0C mov Rm,Rn */
	r3 = 0x8Au; UPD(0x0C080D10u, 2);  /* 0C080D0E mov.w @(disp,pc),Rn */
	r8 = 0x4Cu;  /* 0C080D10 mov #imm,Rn */
	IF(0x0C080D12u); W16(r0 + r3, r12); UPD(0x0C080D14u, 2);  /* 0C080D12 mov.w Rm,@(r0,Rn) */
	r7 = 0x84u; UPD(0x0C080D16u, 1);  /* 0C080D14 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C080D16 mov Rm,Rn */
	r7 += r13;  /* 0C080D18 add Rm,Rn */
	r7 += 0x2u;  /* 0C080D1A add #imm,Rn */
	r0 += 0x8u;  /* 0C080D1C add #imm,Rn */
	W16(r7, r12); UPD(0x0C080D20u, 5);  /* 0C080D1E mov.w Rm,@Rn */
	IF(0x0C080D20u); r0 >>= 2;  /* 0C080D20 shlr2 Rn */
	r6 = 0xC0A8A30u; UPD(0x0C080D24u, 2);  /* 0C080D22 mov.l @(disp,pc),Rn */
	IF(0x0C080D24u); r0 >>= 2;  /* 0C080D24 shlr2 Rn */
	r2 = 0xC0000014u; UPD(0x0C080D28u, 2);  /* 0C080D26 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C080D28 mov #imm,Rn */
	r0 &= 0x1Fu;  /* 0C080D2A and #imm,r0 */
	W32(r13, r2); UPD(0x0C080D2Eu, 3);  /* 0C080D2C mov.l Rm,@Rn */
	W32(r13 + 0x8u, r0); UPD(0x0C080D30u, 1);  /* 0C080D2E mov.l Rm,@(disp,Rn) */
	IF(0x0C080D30u); { u32 t_ = r6; PR = 0x0C080D34u; W32(r13 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C080D34u); }  /* 0C080D30 jsr @Rn */
L_0C080D34: BLKS(0x0C080D34u);
	r5 = R32(r14); UPD(0x0C080D36u, 1);  /* 0C080D34 mov.l @Rm,Rn */
	IF(0x0C080D36u); MACL = r5 * r8;  /* 0C080D36 mul.l Rm,Rn */
	r11 = 0xC237C08u; UPD(0x0C080D3Au, 3);  /* 0C080D38 mov.l @(disp,pc),Rn */
	r4 = 0xC286318u; UPD(0x0C080D3Cu, 1);  /* 0C080D3A mov.l @(disp,pc),Rn */
	IF(0x0C080D3Cu); r8 = MACL;  /* 0C080D3C sts macl,Rn */
	r3 = 0xC3C43C6u; UPD(0x0C080D40u, 2);  /* 0C080D3E mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C080D40 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r11); UPD(0x0C080D44u, 2);  /* 0C080D42 mov.w @Rm,Rn */
	r4 = r9;  /* 0C080D44 mov Rm,Rn */
	r2 = R32(r8 + 0x8u); UPD(0x0C080D48u, 2);  /* 0C080D46 mov.l @(disp,Rm),Rn */
	IF(0x0C080D48u); r0 <<= 16;  /* 0C080D48 shll16 Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C080D4Cu, 2);  /* 0C080D4A mov.w @Rm,Rn */
	r0 -= r2;  /* 0C080D4C sub Rm,Rn */
	r6 = 0xC0A9AE0u; UPD(0x0C080D50u, 2);  /* 0C080D4E mov.l @(disp,pc),Rn */
	IF(0x0C080D50u); r7 <<= 16;  /* 0C080D50 shll16 Rn */
	W32(r13 + 0x24u, r0); UPD(0x0C080D54u, 2);  /* 0C080D52 mov.l Rm,@(disp,Rn) */
	r8 += 0x42u;  /* 0C080D54 add #imm,Rn */
	r11 = 0xB0u; UPD(0x0C080D58u, 2);  /* 0C080D56 mov.w @(disp,pc),Rn */
	IF(0x0C080D58u); { u32 t_ = r6; PR = 0x0C080D5Cu; W32(r13 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C080D5Cu); }  /* 0C080D58 jsr @Rn */
L_0C080D5C: BLKS(0x0C080D5Cu);
	r11 += r13;  /* 0C080D5C add Rm,Rn */
	r0 = 0x3u;  /* 0C080D5E mov #imm,Rn */
	W32(r14 + 0x4u, r11); UPD(0x0C080D62u, 3);  /* 0C080D60 mov.l Rm,@(disp,Rn) */
	IF(0x0C080D62u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C080D64u, 1);  /* 0C080D62 mov.b @(r0,Rm),Rn */
	r5 = 0xACu; UPD(0x0C080D66u, 1);  /* 0C080D64 mov.w @(disp,pc),Rn */
	W8(r11, r1); UPD(0x0C080D68u, 1);  /* 0C080D66 mov.b Rm,@Rn */
	r5 += r13;  /* 0C080D68 add Rm,Rn */
	r5 += 0x1u;  /* 0C080D6A add #imm,Rn */
	W32(r14 + 0x8u, r5); UPD(0x0C080D6Eu, 3);  /* 0C080D6C mov.l Rm,@(disp,Rn) */
	r11 = 0xA8u; UPD(0x0C080D70u, 1);  /* 0C080D6E mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C080D72u, 1);  /* 0C080D70 mov.b @Rm,Rn */
	r11 += r13;  /* 0C080D72 add Rm,Rn */
	r0 = 0xC0A9D30u; UPD(0x0C080D76u, 2);  /* 0C080D74 mov.l @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C080D76 add #imm,Rn */
	W8(r5, r4); UPD(0x0C080D7Au, 2);  /* 0C080D78 mov.b Rm,@Rn */
	W8(r11, r4); UPD(0x0C080D7Cu, 1);  /* 0C080D7A mov.b Rm,@Rn */
	r2 = 0xC297460u; UPD(0x0C080D7Eu, 1);  /* 0C080D7C mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C080D7E mov Rm,Rn */
	IF(0x0C080D80u); { u32 t_ = r0; PR = 0x0C080D84u; r5 = R32(r2); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C080D84u); }  /* 0C080D80 jsr @Rn */
L_0C080D84: BLKS(0x0C080D84u);
	r0 = 0x90u; UPD(0x0C080D86u, 1);  /* 0C080D84 mov.w @(disp,pc),Rn */
	IF(0x0C080D86u); W32(r0 + r13, r12); UPD(0x0C080D88u, 1);  /* 0C080D86 mov.l Rm,@(r0,Rn) */
	r10 = (u32)(s32)(s16)R16(r10); UPD(0x0C080D8Au, 1);  /* 0C080D88 mov.w @Rm,Rn */
	r0 += 0x24u;  /* 0C080D8A add #imm,Rn */
	r8 = 0x8Cu; UPD(0x0C080D8Eu, 2);  /* 0C080D8C mov.w @(disp,pc),Rn */
	IF(0x0C080D8Eu); MACL = r10 * r0;  /* 0C080D8E mul.l Rm,Rn */
	r8 += r13;  /* 0C080D90 add Rm,Rn */
	W32(r8, r12); UPD(0x0C080D94u, 4);  /* 0C080D92 mov.l Rm,@Rn */
	r7 = 0xC286578u; UPD(0x0C080D96u, 1);  /* 0C080D94 mov.l @(disp,pc),Rn */
	IF(0x0C080D96u); r8 = MACL;  /* 0C080D96 sts macl,Rn */
	r8 += r7;  /* 0C080D98 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C080D9A add #imm,Rn */
	W16(r8, r9); UPD(0x0C080D9Eu, 4);  /* 0C080D9C mov.w Rm,@Rn */
	r3 = 0x94u; UPD(0x0C080DA0u, 1);  /* 0C080D9E mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C080DA0 add #imm,Rn */
	r1 = 0xC2460ACu; UPD(0x0C080DA4u, 2);  /* 0C080DA2 mov.l @(disp,pc),Rn */
	r3 += r13;  /* 0C080DA4 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r1); UPD(0x0C080DA8u, 2);  /* 0C080DA6 mov.w @Rm,Rn */
	r9 = 0xC2B0378u; UPD(0x0C080DAAu, 1);  /* 0C080DA8 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFFFF;  /* 0C080DAA extu.w Rm,Rn */
	W32(r3, r12); UPD(0x0C080DAEu, 2);  /* 0C080DAC mov.l Rm,@Rn */
	r6 = 0xC3000010u; UPD(0x0C080DB0u, 1);  /* 0C080DAE mov.l @(disp,pc),Rn */
	r3 = 0x8u;  /* 0C080DB0 mov #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C080DB4u, 2);  /* 0C080DB2 mov.w @Rm,Rn */
	W32(r8, r6); UPD(0x0C080DB6u, 1);  /* 0C080DB4 mov.l Rm,@Rn */
	T = r0 > r3;  /* 0C080DB6 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x4u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C080E30u, 4); goto L_0C080E30; } UPD(0x0C080DBCu, 1); goto L_0C080DBC; }  /* 0C080DB8 bt/s */
L_0C080DBC: BLKS(0x0C080DBCu);
	r1 = 0xC2B03A2u; UPD(0x0C080DBEu, 1);  /* 0C080DBC mov.l @(disp,pc),Rn */
	r3 = r0 & 0xFFFF;  /* 0C080DBE extu.w Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r1); UPD(0x0C080DC2u, 2);  /* 0C080DC0 mov.w @Rm,Rn */
	r3 += 0x20u;  /* 0C080DC2 add #imm,Rn */
	r4 = 0x84u; UPD(0x0C080DC6u, 2);  /* 0C080DC4 mov.w @(disp,pc),Rn */
	IF(0x0C080DC6u); r2 >>= 2;  /* 0C080DC6 shlr2 Rn */
	r4 += r8;  /* 0C080DC8 add Rm,Rn */
	IF(0x0C080DCAu); r2 >>= 2;  /* 0C080DCA shlr2 Rn */
	IF(0x0C080DCCu); r2 >>= 2;  /* 0C080DCC shlr2 Rn */
	r7 = 0xC0A8A30u; UPD(0x0C080DD0u, 5);  /* 0C080DCE mov.l @(disp,pc),Rn */
	r4 += 0x2u;  /* 0C080DD0 add #imm,Rn */
	W16(r4, r2); UPD(0x0C080DD4u, 2);  /* 0C080DD2 mov.w Rm,@Rn */
	W32(r8 + 0x8u, r3); UPD(0x0C080DD6u, 1);  /* 0C080DD4 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C080DD6 mov Rm,Rn */
	IF(0x0C080DD8u); { u32 t_ = r7; PR = 0x0C080DDCu; W32(r8 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C080DDCu); }  /* 0C080DD8 jsr @Rn */
L_0C080DDC: BLKS(0x0C080DDCu);
	r6 = 0xC0A9AE0u; UPD(0x0C080DDEu, 1);  /* 0C080DDC mov.l @(disp,pc),Rn */
	IF(0x0C080DDEu); { u32 t_ = r6; PR = 0x0C080DE2u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C080DE2u); }  /* 0C080DDE jsr @Rn */
L_0C080DE2: BLKS(0x0C080DE2u);
	r10 = R32(r13 + 0x24u); UPD(0x0C080DE4u, 1);  /* 0C080DE2 mov.l @(disp,Rm),Rn */
	r0 = R32(r13 + 0x28u); UPD(0x0C080DE6u, 1);  /* 0C080DE4 mov.l @(disp,Rm),Rn */
	r13 = (u32)(s32)(s16)R16(r9); UPD(0x0C080DE8u, 1);  /* 0C080DE6 mov.w @Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C080DEAu, 1);  /* 0C080DE8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x24u, r10); UPD(0x0C080DECu, 1);  /* 0C080DEA mov.l Rm,@(disp,Rn) */
	r0 = r13 & 0xFFFF;  /* 0C080DEC extu.w Rm,Rn */
	r5 = 0xC191498u; UPD(0x0C080DF0u, 2);  /* 0C080DEE mov.l @(disp,pc),Rn */
	IF(0x0C080DF0u); r0 <<= 2;  /* 0C080DF0 shll2 Rn */
	IF(0x0C080DF2u); r2 = R32(r0 + r5); UPD(0x0C080DF4u, 2);  /* 0C080DF2 mov.l @(r0,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C080DF6u, 1);  /* 0C080DF4 mov.l @(disp,Rm),Rn */
	r7 = 0xA8u; UPD(0x0C080DF8u, 1);  /* 0C080DF6 mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C080DFAu, 1);  /* 0C080DF8 mov.b @Rm,Rn */
	r7 += r8;  /* 0C080DFA add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C080DFEu, 2);  /* 0C080DFC mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C080DFE add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C080E02u, 2);  /* 0C080E00 mov.w @(disp,pc),Rn */
	W8(r7, r3); UPD(0x0C080E04u, 1);  /* 0C080E02 mov.b Rm,@Rn */
	IF(0x0C080E04u); W8(r0 + r8, r4); UPD(0x0C080E06u, 1);  /* 0C080E04 mov.b Rm,@(r0,Rn) */
	r9 = 0x9Cu; UPD(0x0C080E08u, 1);  /* 0C080E06 mov.w @(disp,pc),Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C080E0Au, 1);  /* 0C080E08 mov.l @(disp,Rm),Rn */
	r9 += r8;  /* 0C080E0A add Rm,Rn */
	r10 = 0xACu; UPD(0x0C080E0Eu, 2);  /* 0C080E0C mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C080E0E add #imm,Rn */
	r10 += r8;  /* 0C080E10 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r6); UPD(0x0C080E14u, 3);  /* 0C080E12 mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C080E14 add #imm,Rn */
	W8(r9, r12); UPD(0x0C080E18u, 2);  /* 0C080E16 mov.b Rm,@Rn */
	W32(r8 + 0x2Cu, r2); UPD(0x0C080E1Au, 1);  /* 0C080E18 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r12); UPD(0x0C080E1Cu, 1);  /* 0C080E1A mov.l Rm,@(disp,Rn) */
	W8(r10, r11); UPD(0x0C080E1Eu, 1);  /* 0C080E1C mov.b Rm,@Rn */
	{ { u32 v_ = r12; r9 -= 1; W8(r9, v_); } /* slot mov.b Rm,@-Rn */ UPD(0x0C080CD4u, 3); goto L_0C080CD4; }  /* 0C080E1E bra */
L_0C080E30: BLKS(0x0C080E30u);
	r0 = 0xC062780u; UPD(0x0C080E32u, 1);  /* 0C080E30 mov.l @(disp,pc),Rn */
	IF(0x0C080E32u); { u32 t_ = r0; PR = 0x0C080E36u; r4 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C080E36u); }  /* 0C080E32 jsr @Rn */
L_0C080E36: BLKS(0x0C080E36u);
	{ W16(r9, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C080DBCu, 3); goto L_0C080DBC; }  /* 0C080E36 bra */
}

void blk_f_0C080EA0(sh3_t *c)
{
	LOCALS;
	goto L_0C080EA0;
L_0C0807A0: BLKS(0x0C0807A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0807A2u, 1);  /* 0C0807A0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C0807A2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0807A6u, 2);  /* 0C0807A4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0807A8u, 1);  /* 0C0807A6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0807AAu, 1);  /* 0C0807A8 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0807ACu, 1);  /* 0C0807AA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0807AC exts.w Rm,Rn */
	r8 = 0xC0A8DD0u; UPD(0x0C0807B0u, 2);  /* 0C0807AE mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0807B0 mov Rm,Rn */
	IF(0x0C0807B2u); r15 -= 4; W32(r15, PR); UPD(0x0C0807B4u, 2);  /* 0C0807B2 sts.l pr,@-Rn */
	IF(0x0C0807B4u); { u32 t_ = r8; PR = 0x0C0807B8u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C0807B8u); }  /* 0C0807B4 jsr @Rn */
L_0C0807B8: BLKS(0x0C0807B8u);
	T = (r0 & r0) == 0;  /* 0C0807B8 tst Rm,Rn */
	if (T) { UPD(0x0C0807E0u, 4); goto L_0C0807E0; }  /* 0C0807BA bt */
L_0C0807BC: BLKS(0x0C0807BCu);
	r2 = 0xB4u; UPD(0x0C0807BEu, 1);  /* 0C0807BC mov.w @(disp,pc),Rn */
	IF(0x0C0807BEu); MACL = r11 * r2;  /* 0C0807BE mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0807C2u, 3);  /* 0C0807C0 mov.l @(disp,pc),Rn */
	IF(0x0C0807C2u); r10 = MACL;  /* 0C0807C2 sts macl,Rn */
	r8 = 0x9Cu; UPD(0x0C0807C6u, 2);  /* 0C0807C4 mov.w @(disp,pc),Rn */
	r10 += r0;  /* 0C0807C6 add Rm,Rn */
	r8 += r10;  /* 0C0807C8 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C0807CCu, 3);  /* 0C0807CA mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0807CC tst Rm,Rn */
	{ u32 c_ = T; r2 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C080840u, 4); goto L_0C080840; } goto L_0C0807D2; }  /* 0C0807CE bt/s */
L_0C0807D2: BLKS(0x0C0807D2u);
	r2 += 0x1u;  /* 0C0807D2 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0807D6u, 3);  /* 0C0807D4 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0807D6 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0807D8 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C0807DA cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0807F0u, 6); goto L_0C0807F0; } UPD(0x0C0807E0u, 1); goto L_0C0807E0; }  /* 0C0807DC bt/s */
L_0C0807E0: BLKS(0x0C0807E0u);
	r15 = r14;  /* 0C0807E0 mov Rm,Rn */
	IF(0x0C0807E2u); PR = R32(r15); r15 += 4; UPD(0x0C0807E4u, 2);  /* 0C0807E2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0807E6u, 1);  /* 0C0807E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0807E8u, 1);  /* 0C0807E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0807EAu, 1);  /* 0C0807E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0807ECu, 1);  /* 0C0807EA mov.l @Rm+,Rn */
	IF(0x0C0807ECu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0807EC rts */
L_0C0807F0: BLKS(0x0C0807F0u);
	r0 = r3;  /* 0C0807F0 mov Rm,Rn */
	r4 = 0x0u;  /* 0C0807F2 mov #imm,Rn */
	W8(r2, r4); UPD(0x0C0807F6u, 3);  /* 0C0807F4 mov.b Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0807F6 add #imm,Rn */
	W8(r8, r0); UPD(0x0C0807FAu, 2);  /* 0C0807F8 mov.b Rm,@Rn */
	r2 = 0x86u; UPD(0x0C0807FCu, 1);  /* 0C0807FA mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C0807FC mov Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C080800u, 2);  /* 0C0807FE mov.l @(disp,pc),Rn */
	IF(0x0C080800u); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C080802u, 1);  /* 0C080800 mov.w @(r0,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C080804u, 1);  /* 0C080802 mov.l @(disp,pc),Rn */
	IF(0x0C080804u); { u32 t_ = r8; PR = 0x0C080808u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C080808u); }  /* 0C080804 jsr @Rn */
L_0C080808: BLKS(0x0C080808u);
	r8 = R32(r10 + 0x24u); UPD(0x0C08080Au, 1);  /* 0C080808 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C08080A mov Rm,Rn */
	r8 += r0;  /* 0C08080C add Rm,Rn */
	r0 = 0xC069AF0u; UPD(0x0C080810u, 3);  /* 0C08080E mov.l @(disp,pc),Rn */
	r6 = 0x10000u; UPD(0x0C080812u, 1);  /* 0C080810 mov.l @(disp,pc),Rn */
	r5 = 0xA0000u; UPD(0x0C080814u, 1);  /* 0C080812 mov.l @(disp,pc),Rn */
	IF(0x0C080814u); { u32 t_ = r0; PR = 0x0C080818u; r8 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C080818u); }  /* 0C080814 jsr @Rn */
L_0C080818: BLKS(0x0C080818u);
	r6 = R32(r10 + 0x28u); UPD(0x0C08081Au, 1);  /* 0C080818 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08081A add #imm,Rn */
	r7 = 0x30000u; UPD(0x0C08081Eu, 2);  /* 0C08081C mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C08081E mov Rm,Rn */
	W32(r15, r7); UPD(0x0C080822u, 2);  /* 0C080820 mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C080822 mov #imm,Rn */
	r7 = r9;  /* 0C080824 mov Rm,Rn */
	r9 = 0xC0BA7F0u; UPD(0x0C080828u, 3);  /* 0C080826 mov.l @(disp,pc),Rn */
	r8 = 0xC069B90u; UPD(0x0C08082Au, 1);  /* 0C080828 mov.l @(disp,pc),Rn */
	IF(0x0C08082Au); { u32 t_ = r9; PR = 0x0C08082Eu; r6 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA7F0, 0x0C0BA7F0u, 0x0C08082Eu); }  /* 0C08082A jsr @Rn */
L_0C08082E: BLKS(0x0C08082Eu);
	r15 += 0x4u;  /* 0C08082E add #imm,Rn */
	IF(0x0C080830u); { u32 t_ = r8; PR = 0x0C080834u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C080834u); }  /* 0C080830 jsr @Rn */
L_0C080834: BLKS(0x0C080834u);
	{ IF(0x0C080836u); ; /* slot nop */ UPD(0x0C0807E0u, 3); goto L_0C0807E0; }  /* 0C080834 bra */
L_0C080840: BLKS(0x0C080840u);
	r9 = 0xC0BC1B0u; UPD(0x0C080842u, 1);  /* 0C080840 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C080842 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C080844 mov #imm,Rn */
	IF(0x0C080846u); { u32 t_ = r9; PR = 0x0C08084Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08084Au); }  /* 0C080846 jsr @Rn */
L_0C08084A: BLKS(0x0C08084Au);
	T = (r0 & r0) == 0;  /* 0C08084A tst Rm,Rn */
	if (T) { UPD(0x0C0807E0u, 4); goto L_0C0807E0; }  /* 0C08084C bt */
L_0C08084E: BLKS(0x0C08084Eu);
	r0 = r10;  /* 0C08084E mov Rm,Rn */
	r4 = 0xA9u; UPD(0x0C080852u, 2);  /* 0C080850 mov.w @(disp,pc),Rn */
	IF(0x0C080852u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C080854u, 1);  /* 0C080852 mov.b @(r0,Rm),Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C080856u, 1);  /* 0C080854 mov.l @(disp,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C080858u, 1);  /* 0C080856 mov.l @(disp,Rm),Rn */
	r10 = 0xC0BBF10u; UPD(0x0C08085Au, 1);  /* 0C080858 mov.l @(disp,pc),Rn */
	IF(0x0C08085Au); { u32 t_ = r10; PR = 0x0C08085Eu; r6 = r3 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08085Eu); }  /* 0C08085A jsr @Rn */
L_0C08085E: BLKS(0x0C08085Eu);
	T = (r0 & r0) == 0;  /* 0C08085E tst Rm,Rn */
	if (T) { UPD(0x0C0807E0u, 4); goto L_0C0807E0; }  /* 0C080860 bt */
L_0C080862: BLKS(0x0C080862u);
	r5 = 0x3u;  /* 0C080862 mov #imm,Rn */
	{ W8(r8, r5); /* slot mov.b Rm,@Rn */ UPD(0x0C0807E0u, 4); goto L_0C0807E0; }  /* 0C080864 bra */
L_0C080B40: BLKS(0x0C080B40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C080B42u, 1);  /* 0C080B40 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C080B42 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C080B46u, 2);  /* 0C080B44 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C080B48u, 1);  /* 0C080B46 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C080B4Au, 1);  /* 0C080B48 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C080B4Cu, 1);  /* 0C080B4A mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C080B4Eu, 1);  /* 0C080B4C mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C080B4E exts.w Rm,Rn */
	IF(0x0C080B50u); MACL = r12 * r0;  /* 0C080B50 mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C080B54u, 4);  /* 0C080B52 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C080B56u, 1);  /* 0C080B54 mov.l @(disp,pc),Rn */
	IF(0x0C080B56u); r10 = MACL;  /* 0C080B56 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C080B5Au, 2);  /* 0C080B58 mov.l Rm,@-Rn */
	r10 += r0;  /* 0C080B5A add Rm,Rn */
	r11 = 0x9Cu; UPD(0x0C080B5Eu, 2);  /* 0C080B5C mov.w @(disp,pc),Rn */
	IF(0x0C080B5Eu); r15 -= 4; W32(r15, PR); UPD(0x0C080B60u, 1);  /* 0C080B5E sts.l pr,@-Rn */
	r11 += r10;  /* 0C080B60 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C080B64u, 2);  /* 0C080B62 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C080B64 add #imm,Rn */
	T = (r3 & r3) == 0;  /* 0C080B66 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C080C40u, 5); goto L_0C080C40; } goto L_0C080B6C; }  /* 0C080B68 bt/s */
L_0C080B6C: BLKS(0x0C080B6Cu);
	r2 = r11;  /* 0C080B6C mov Rm,Rn */
	r2 += 0x1u;  /* 0C080B6E add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C080B72u, 4);  /* 0C080B70 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C080B72 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C080B74 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C080B76 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C080BA0u, 6); goto L_0C080BA0; } UPD(0x0C080B7Cu, 1); goto L_0C080B7C; }  /* 0C080B78 bt/s */
L_0C080B7C: BLKS(0x0C080B7Cu);
	r14 += 0x8u;  /* 0C080B7C add #imm,Rn */
	UPD(0x0C080B7Eu, 1);
L_0C080B7E: BLKS(0x0C080B7Eu);
	r15 = r14;  /* 0C080B7E mov Rm,Rn */
	IF(0x0C080B80u); PR = R32(r15); r15 += 4; UPD(0x0C080B82u, 2);  /* 0C080B80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C080B84u, 1);  /* 0C080B82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C080B86u, 1);  /* 0C080B84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C080B88u, 1);  /* 0C080B86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C080B8Au, 1);  /* 0C080B88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C080B8Cu, 1);  /* 0C080B8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C080B8Eu, 1);  /* 0C080B8C mov.l @Rm+,Rn */
	IF(0x0C080B8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C080B8E rts */
L_0C080BA0: BLKS(0x0C080BA0u);
	r13 = r3;  /* 0C080BA0 mov Rm,Rn */
	r13 += 0xFFFFFFFFu;  /* 0C080BA2 add #imm,Rn */
	W8(r11, r13); UPD(0x0C080BA6u, 3);  /* 0C080BA4 mov.b Rm,@Rn */
	r9 = 0x0u;  /* 0C080BA6 mov #imm,Rn */
	r5 = 0x86u; UPD(0x0C080BAAu, 2);  /* 0C080BA8 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C080BAA mov Rm,Rn */
	W8(r2, r9); UPD(0x0C080BAEu, 2);  /* 0C080BAC mov.b Rm,@Rn */
	IF(0x0C080BAEu); r13 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C080BB0u, 1);  /* 0C080BAE mov.w @(r0,Rm),Rn */
	r9 = 0x3u;  /* 0C080BB0 mov #imm,Rn */
	r9 &= r3;  /* 0C080BB2 and Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C080BB6u, 3);  /* 0C080BB4 mov.l @(disp,pc),Rn */
	IF(0x0C080BB6u); r9 <<= 2;  /* 0C080BB6 shll2 Rn */
	r0 = 0xC191478u; UPD(0x0C080BBAu, 2);  /* 0C080BB8 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C080BBA mov Rm,Rn */
	r0 += r9;  /* 0C080BBC add Rm,Rn */
	r5 = R32(r0); UPD(0x0C080BC0u, 3);  /* 0C080BBE mov.l @Rm,Rn */
	IF(0x0C080BC0u); { u32 t_ = r8; PR = 0x0C080BC4u; W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C080BC4u); }  /* 0C080BC0 jsr @Rn */
L_0C080BC4: BLKS(0x0C080BC4u);
	r7 = 0xC191488u; UPD(0x0C080BC6u, 1);  /* 0C080BC4 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C080BC6 mov Rm,Rn */
	r6 = 0xC069AF0u; UPD(0x0C080BCAu, 2);  /* 0C080BC8 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C080BCA add Rm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C080BCEu, 2);  /* 0C080BCC mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C080BCE mov Rm,Rn */
	IF(0x0C080BD0u); { u32 t_ = r6; PR = 0x0C080BD4u; r5 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C080BD4u); }  /* 0C080BD0 jsr @Rn */
L_0C080BD4: BLKS(0x0C080BD4u);
	r8 -= r0;  /* 0C080BD4 sub Rm,Rn */
	r1 = r8;  /* 0C080BD6 mov Rm,Rn */
	r1 += r1;  /* 0C080BD8 add Rm,Rn */
	r1 += r8;  /* 0C080BDA add Rm,Rn */
	IF(0x0C080BDCu); T = (s32)r1 >= 0;  /* 0C080BDC cmp/pz Rn */
	if (!T) { UPD(0x0C080C30u, 8); goto L_0C080C30; }  /* 0C080BDE bf */
L_0C080BE0: BLKS(0x0C080BE0u);
	r9 = R32(r10 + 0x24u); UPD(0x0C080BE2u, 1);  /* 0C080BE0 mov.l @(disp,Rm),Rn */
	IF(0x0C080BE2u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C080BE2 shar Rn */
	IF(0x0C080BE4u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C080BE4 shar Rn */
	r6 = 0xC069AF0u; UPD(0x0C080BE8u, 3);  /* 0C080BE6 mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C080BE8 add Rm,Rn */
	r4 = 0x10000u; UPD(0x0C080BECu, 2);  /* 0C080BEA mov.l @(disp,pc),Rn */
	r7 = R32(r14); UPD(0x0C080BEEu, 1);  /* 0C080BEC mov.l @Rm,Rn */
	r9 += r4;  /* 0C080BEE add Rm,Rn */
	r5 = R32(r7); UPD(0x0C080BF2u, 2);  /* 0C080BF0 mov.l @Rm,Rn */
	IF(0x0C080BF2u); { u32 t_ = r6; PR = 0x0C080BF6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C080BF6u); }  /* 0C080BF2 jsr @Rn */
L_0C080BF6: BLKS(0x0C080BF6u);
	r3 = 0xC069B20u; UPD(0x0C080BF8u, 1);  /* 0C080BF6 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C080BF8 mov Rm,Rn */
	r8 = R32(r10 + 0x28u); UPD(0x0C080BFCu, 2);  /* 0C080BFA mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C080BFEu, 1);  /* 0C080BFC mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C080BFE add Rm,Rn */
	IF(0x0C080C00u); { u32 t_ = r3; PR = 0x0C080C04u; r5 = R32(r1); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C080C04u); }  /* 0C080C00 jsr @Rn */
L_0C080C04: BLKS(0x0C080C04u);
	r8 += r0;  /* 0C080C04 add Rm,Rn */
	r6 = r8;  /* 0C080C06 mov Rm,Rn */
	r8 = 0xC0BA480u; UPD(0x0C080C0Au, 3);  /* 0C080C08 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C080C0A add #imm,Rn */
	r2 = 0x30000u; UPD(0x0C080C0Eu, 2);  /* 0C080C0C mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C080C0E mov #imm,Rn */
	W32(r15, r2); UPD(0x0C080C12u, 2);  /* 0C080C10 mov.l Rm,@Rn */
	r5 = r9;  /* 0C080C12 mov Rm,Rn */
	IF(0x0C080C14u); { u32 t_ = r8; PR = 0x0C080C18u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C080C18u); }  /* 0C080C14 jsr @Rn */
L_0C080C18: BLKS(0x0C080C18u);
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C080C1Au, 1);  /* 0C080C18 mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C080C1A tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C080B7Cu, 4); goto L_0C080B7C; } goto L_0C080C20; }  /* 0C080C1C bf/s */
L_0C080C20: BLKS(0x0C080C20u);
	r11 = 0xC069B90u; UPD(0x0C080C22u, 2);  /* 0C080C20 mov.l @(disp,pc),Rn */
	IF(0x0C080C22u); { u32 t_ = r11; PR = 0x0C080C26u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C080C26u); }  /* 0C080C22 jsr @Rn */
L_0C080C26: BLKS(0x0C080C26u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C080B7Eu, 3); goto L_0C080B7E; }  /* 0C080C26 bra */
L_0C080C30: BLKS(0x0C080C30u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C080BE0u, 3); goto L_0C080BE0; }  /* 0C080C30 bra */
L_0C080C40: BLKS(0x0C080C40u);
	r8 = 0xC0A8DD0u; UPD(0x0C080C42u, 1);  /* 0C080C40 mov.l @(disp,pc),Rn */
	IF(0x0C080C42u); { u32 t_ = r8; PR = 0x0C080C46u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C080C46u); }  /* 0C080C42 jsr @Rn */
L_0C080C46: BLKS(0x0C080C46u);
	T = (r0 & r0) == 0;  /* 0C080C46 tst Rm,Rn */
	if (T) { UPD(0x0C080B7Cu, 4); goto L_0C080B7C; }  /* 0C080C48 bt */
L_0C080C4A: BLKS(0x0C080C4Au);
	r4 = r12;  /* 0C080C4A mov Rm,Rn */
	r9 = 0xC0BC1B0u; UPD(0x0C080C4Eu, 2);  /* 0C080C4C mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C080C4E mov #imm,Rn */
	IF(0x0C080C50u); { u32 t_ = r9; PR = 0x0C080C54u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C080C54u); }  /* 0C080C50 jsr @Rn */
L_0C080C54: BLKS(0x0C080C54u);
	T = (r0 & r0) == 0;  /* 0C080C54 tst Rm,Rn */
	if (T) { UPD(0x0C080B7Cu, 4); goto L_0C080B7C; }  /* 0C080C56 bt */
L_0C080C58: BLKS(0x0C080C58u);
	r4 = R32(r10 + 0x24u); UPD(0x0C080C5Au, 1);  /* 0C080C58 mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C080C5A mov Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C080C5Eu, 2);  /* 0C080C5C mov.l @(disp,Rm),Rn */
	r3 = 0xA9u; UPD(0x0C080C60u, 1);  /* 0C080C5E mov.w @(disp,pc),Rn */
	r10 = 0xC0BBF10u; UPD(0x0C080C62u, 1);  /* 0C080C60 mov.l @(disp,pc),Rn */
	IF(0x0C080C62u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C080C64u, 1);  /* 0C080C62 mov.b @(r0,Rm),Rn */
	IF(0x0C080C64u); { u32 t_ = r10; PR = 0x0C080C68u; r6 = r2 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C080C68u); }  /* 0C080C64 jsr @Rn */
L_0C080C68: BLKS(0x0C080C68u);
	T = (r0 & r0) == 0;  /* 0C080C68 tst Rm,Rn */
	if (T) { UPD(0x0C080C26u, 4); goto L_0C080C26; }  /* 0C080C6A bt */
L_0C080C6C: BLKS(0x0C080C6Cu);
	r4 = 0x8u;  /* 0C080C6C mov #imm,Rn */
	{ W8(r11, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C080B7Cu, 4); goto L_0C080B7C; }  /* 0C080C6E bra */
L_0C080EA0: BLKS(0x0C080EA0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C080EA2u, 1);  /* 0C080EA0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C080EA4u, 1);  /* 0C080EA2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C080EA6u, 1);  /* 0C080EA4 mov.l Rm,@-Rn */
	r9 = 0x8u;  /* 0C080EA6 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C080EAAu, 2);  /* 0C080EA8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C080EACu, 1);  /* 0C080EAA mov.l Rm,@-Rn */
	r10 = 0xB4u; UPD(0x0C080EAEu, 1);  /* 0C080EAC mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C080EAE exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C080EB2u, 2);  /* 0C080EB0 mov.l Rm,@-Rn */
	IF(0x0C080EB2u); MACL = r12 * r10;  /* 0C080EB2 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C080EB6u, 3);  /* 0C080EB4 mov.l Rm,@-Rn */
	r11 = 0xC286578u; UPD(0x0C080EB8u, 1);  /* 0C080EB6 mov.l @(disp,pc),Rn */
	IF(0x0C080EB8u); r8 = MACL;  /* 0C080EB8 sts macl,Rn */
	IF(0x0C080EBAu); r15 -= 4; W32(r15, PR); UPD(0x0C080EBCu, 2);  /* 0C080EBA sts.l pr,@-Rn */
	r8 += r11;  /* 0C080EBC add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C080EC0u, 2);  /* 0C080EBE mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFE0u;  /* 0C080EC0 add #imm,Rn */
	T = r0 > r9;  /* 0C080EC2 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C080ECCu, 5); goto L_0C080ECC; } goto L_0C080EC8; }  /* 0C080EC4 bf/s */
L_0C080EC8: BLKS(0x0C080EC8u);
	{ IF(0x0C080ECAu); ; /* slot nop */ UPD(0x0C081390u, 4); goto L_0C081390; }  /* 0C080EC8 bra */
L_0C080ECC: BLKS(0x0C080ECCu);
	r13 = 0xC0A8B50u; UPD(0x0C080ECEu, 1);  /* 0C080ECC mov.l @(disp,pc),Rn */
	IF(0x0C080ECEu); { u32 t_ = r13; PR = 0x0C080ED2u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C080ED2u); }  /* 0C080ECE jsr @Rn */
L_0C080ED2: BLKS(0x0C080ED2u);
	IF(0x0C080ED2u); T = (s32)r0 >= 0;  /* 0C080ED2 cmp/pz Rn */
	{ u32 c_ = T; r3 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C080EDCu, 4); goto L_0C080EDC; } goto L_0C080ED8; }  /* 0C080ED4 bt/s */
L_0C080ED8: BLKS(0x0C080ED8u);
	{ r6 = R32(r8 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C081220u, 4); goto L_0C081220; }  /* 0C080ED8 bra */
L_0C080EDC: BLKS(0x0C080EDCu);
	IF(0x0C080EDCu); MACL = r0 * r10;  /* 0C080EDC mul.l Rm,Rn */
	r4 = R32(r8 + 0x8u); UPD(0x0C080EE0u, 3);  /* 0C080EDE mov.l @(disp,Rm),Rn */
	IF(0x0C080EE0u); r0 = MACL;  /* 0C080EE0 sts macl,Rn */
	r0 += r11;  /* 0C080EE2 add Rm,Rn */
	r5 = R32(r0 + 0x24u); UPD(0x0C080EE6u, 3);  /* 0C080EE4 mov.l @(disp,Rm),Rn */
	r4 += 0xFFFFFFE0u;  /* 0C080EE6 add #imm,Rn */
	r2 = R32(r0 + 0x28u); UPD(0x0C080EEAu, 2);  /* 0C080EE8 mov.l @(disp,Rm),Rn */
	T = r4 > r9;  /* 0C080EEA cmp/hi Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C080EEEu, 2);  /* 0C080EEC mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r8 + 0x28u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C080F4Cu, 3); goto L_0C080F4C; } UPD(0x0C080EF2u, 1); goto L_0C080EF2; }  /* 0C080EEE bt/s */
L_0C080EF2: BLKS(0x0C080EF2u);
	r0 = 0xC080F08u;  /* 0C080EF2 mova @(disp,pc),r0 */
	r4 += r4;  /* 0C080EF4 add Rm,Rn */
	IF(0x0C080EF6u); r6 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C080EF8u, 3);  /* 0C080EF6 mov.w @(r0,Rm),Rn */
	IF(0x0C080EF8u); { u32 tv_ = (r6 + 0x0C080EFCu); u32 t_ = PHYS(tv_); IF(0x0C080EFAu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C080F20u: goto L_0C080F20; case 0x0C080F40u: goto L_0C080F40; case 0x0C080FE0u: goto L_0C080FE0; case 0x0C081050u: goto L_0C081050; case 0x0C0810C0u: goto L_0C0810C0; case 0x0C081110u: goto L_0C081110; case 0x0C081180u: goto L_0C081180; case 0x0C081190u: goto L_0C081190; case 0x0C0811A0u: goto L_0C0811A0; default: JUMPD(tv_); } }  /* 0C080EF8 braf Rn */
L_0C080F20: BLKS(0x0C080F20u);
	r1 = 0xC0808A0u; UPD(0x0C080F22u, 1);  /* 0C080F20 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C080F22 mov Rm,Rn */
	r5 = r3;  /* 0C080F24 mov Rm,Rn */
	UPD(0x0C080F26u, 2);
L_0C080F26: BLKS(0x0C080F26u);
	r15 = r14;  /* 0C080F26 mov Rm,Rn */
	IF(0x0C080F28u); PR = R32(r15); r15 += 4; UPD(0x0C080F2Au, 2);  /* 0C080F28 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C080F2Cu, 1);  /* 0C080F2A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C080F2Eu, 1);  /* 0C080F2C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C080F30u, 1);  /* 0C080F2E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C080F32u, 1);  /* 0C080F30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C080F34u, 1);  /* 0C080F32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C080F36u, 1);  /* 0C080F34 mov.l @Rm+,Rn */
	IF(0x0C080F36u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0807A0u: goto L_0C0807A0; case 0x0C080B40u: goto L_0C080B40; default: JUMPD(tv_); } }  /* 0C080F36 jmp @Rn */
L_0C080F40: BLKS(0x0C080F40u);
	r10 = 0xC0A8DD0u; UPD(0x0C080F42u, 1);  /* 0C080F40 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C080F42 mov Rm,Rn */
	IF(0x0C080F44u); { u32 t_ = r10; PR = 0x0C080F48u; r5 = r3; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C080F48u); }  /* 0C080F44 jsr @Rn */
L_0C080F48: BLKS(0x0C080F48u);
	T = (r0 & r0) == 0;  /* 0C080F48 tst Rm,Rn */
	if (!T) { UPD(0x0C080F60u, 4); goto L_0C080F60; }  /* 0C080F4A bf */
L_0C080F4C: BLKS(0x0C080F4Cu);
	r15 = r14;  /* 0C080F4C mov Rm,Rn */
	IF(0x0C080F4Eu); PR = R32(r15); r15 += 4; UPD(0x0C080F50u, 2);  /* 0C080F4E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C080F52u, 1);  /* 0C080F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C080F54u, 1);  /* 0C080F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C080F56u, 1);  /* 0C080F54 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C080F58u, 1);  /* 0C080F56 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C080F5Au, 1);  /* 0C080F58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C080F5Cu, 1);  /* 0C080F5A mov.l @Rm+,Rn */
	IF(0x0C080F5Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C080F5C rts */
L_0C080F60: BLKS(0x0C080F60u);
	r11 = 0xC0BC1B0u; UPD(0x0C080F62u, 1);  /* 0C080F60 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C080F62 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C080F64 mov #imm,Rn */
	IF(0x0C080F66u); { u32 t_ = r11; PR = 0x0C080F6Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C080F6Au); }  /* 0C080F66 jsr @Rn */
L_0C080F6A: BLKS(0x0C080F6Au);
	T = (r0 & r0) == 0;  /* 0C080F6A tst Rm,Rn */
	if (T) { UPD(0x0C080F4Cu, 4); goto L_0C080F4C; }  /* 0C080F6C bt */
L_0C080F6E: BLKS(0x0C080F6Eu);
	r9 = 0xB4u; UPD(0x0C080F70u, 1);  /* 0C080F6E mov.w @(disp,pc),Rn */
	IF(0x0C080F70u); MACL = r12 * r9;  /* 0C080F70 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C080F74u, 3);  /* 0C080F72 mov.l @(disp,pc),Rn */
	IF(0x0C080F74u); r10 = MACL;  /* 0C080F74 sts macl,Rn */
	r10 += r4;  /* 0C080F76 add Rm,Rn */
	r8 = 0xA9u; UPD(0x0C080F7Au, 3);  /* 0C080F78 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C080F7A mov Rm,Rn */
	r13 = 0xC0BBF10u; UPD(0x0C080F7Eu, 2);  /* 0C080F7C mov.l @(disp,pc),Rn */
	IF(0x0C080F7Eu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C080F80u, 1);  /* 0C080F7E mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C080F82u, 1);  /* 0C080F80 mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C080F82 extu.b Rm,Rn */
	IF(0x0C080F84u); { u32 t_ = r13; PR = 0x0C080F88u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C080F88u); }  /* 0C080F84 jsr @Rn */
L_0C080F88: BLKS(0x0C080F88u);
	T = (r0 & r0) == 0;  /* 0C080F88 tst Rm,Rn */
	if (T) { UPD(0x0C080F4Cu, 4); goto L_0C080F4C; }  /* 0C080F8A bt */
L_0C080F8C: BLKS(0x0C080F8Cu);
	r0 = r10;  /* 0C080F8C mov Rm,Rn */
	r5 = 0x86u; UPD(0x0C080F90u, 2);  /* 0C080F8E mov.w @(disp,pc),Rn */
	r13 = 0xC069B20u; UPD(0x0C080F92u, 1);  /* 0C080F90 mov.l @(disp,pc),Rn */
	IF(0x0C080F92u); r9 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C080F94u, 1);  /* 0C080F92 mov.w @(r0,Rm),Rn */
	r5 = 0x100000u; UPD(0x0C080F96u, 1);  /* 0C080F94 mov.l @(disp,pc),Rn */
	IF(0x0C080F96u); { u32 t_ = r13; PR = 0x0C080F9Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C080F9Au); }  /* 0C080F96 jsr @Rn */
L_0C080F9A: BLKS(0x0C080F9Au);
	r8 = R32(r10 + 0x24u); UPD(0x0C080F9Cu, 1);  /* 0C080F9A mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C080F9C mov Rm,Rn */
	r11 = 0xC069AF0u; UPD(0x0C080FA0u, 2);  /* 0C080F9E mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C080FA0 add Rm,Rn */
	r2 = 0x20000u; UPD(0x0C080FA4u, 2);  /* 0C080FA2 mov.l @(disp,pc),Rn */
	r5 = 0x140000u; UPD(0x0C080FA6u, 1);  /* 0C080FA4 mov.l @(disp,pc),Rn */
	IF(0x0C080FA6u); { u32 t_ = r11; PR = 0x0C080FAAu; r8 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C080FAAu); }  /* 0C080FA6 jsr @Rn */
L_0C080FAA: BLKS(0x0C080FAAu);
	r6 = R32(r10 + 0x28u); UPD(0x0C080FACu, 1);  /* 0C080FAA mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C080FAC add #imm,Rn */
	r3 = 0x30000u; UPD(0x0C080FB0u, 2);  /* 0C080FAE mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C080FB0 add Rm,Rn */
	W32(r15, r3); UPD(0x0C080FB4u, 2);  /* 0C080FB2 mov.l Rm,@Rn */
	r4 = 0x3u;  /* 0C080FB4 mov #imm,Rn */
	UPD(0x0C080FB6u, 1);
L_0C080FB6: BLKS(0x0C080FB6u);
	r0 = 0xC0BAD60u; UPD(0x0C080FB8u, 1);  /* 0C080FB6 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C080FB8 mov Rm,Rn */
	r7 = r9;  /* 0C080FBA mov Rm,Rn */
	UPD(0x0C080FBCu, 2);
L_0C080FBC: BLKS(0x0C080FBCu);
	IF(0x0C080FBCu); { u32 t_ = r0; PR = 0x0C080FC0u; IF(0x0C080FBEu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C080FC0u); }  /* 0C080FBC jsr @Rn */
L_0C080FC0: BLKS(0x0C080FC0u);
	r1 = 0xC069B90u; UPD(0x0C080FC2u, 1);  /* 0C080FC0 mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C080FC2 add #imm,Rn */
	r4 = r12;  /* 0C080FC4 mov Rm,Rn */
	IF(0x0C080FC6u); ;  /* 0C080FC6 nop */
	UPD(0x0C080FC8u, 3);
L_0C080FC8: BLKS(0x0C080FC8u);
	r15 = r14;  /* 0C080FC8 mov Rm,Rn */
	IF(0x0C080FCAu); PR = R32(r15); r15 += 4; UPD(0x0C080FCCu, 2);  /* 0C080FCA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C080FCEu, 1);  /* 0C080FCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C080FD0u, 1);  /* 0C080FCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C080FD2u, 1);  /* 0C080FD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C080FD4u, 1);  /* 0C080FD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C080FD6u, 1);  /* 0C080FD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C080FD8u, 1);  /* 0C080FD6 mov.l @Rm+,Rn */
	IF(0x0C080FD8u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8B10u: TAIL(blk_f_0C0A8B10); case 0x0C0A9170u: TAIL(blk_f_0C0A9170); default: JUMPD(tv_); } }  /* 0C080FD8 jmp @Rn */
L_0C080FE0: BLKS(0x0C080FE0u);
	r10 = 0xC0A8DD0u; UPD(0x0C080FE2u, 1);  /* 0C080FE0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C080FE2 mov Rm,Rn */
	IF(0x0C080FE4u); { u32 t_ = r10; PR = 0x0C080FE8u; r5 = r3; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C080FE8u); }  /* 0C080FE4 jsr @Rn */
L_0C080FE8: BLKS(0x0C080FE8u);
	T = (r0 & r0) == 0;  /* 0C080FE8 tst Rm,Rn */
	if (T) { UPD(0x0C080F4Cu, 4); goto L_0C080F4C; }  /* 0C080FEA bt */
L_0C080FEC: BLKS(0x0C080FECu);
	r4 = r12;  /* 0C080FEC mov Rm,Rn */
	r8 = 0xC0BC1B0u; UPD(0x0C080FF0u, 2);  /* 0C080FEE mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C080FF0 mov #imm,Rn */
	IF(0x0C080FF2u); { u32 t_ = r8; PR = 0x0C080FF6u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C080FF6u); }  /* 0C080FF2 jsr @Rn */
L_0C080FF6: BLKS(0x0C080FF6u);
	T = (r0 & r0) == 0;  /* 0C080FF6 tst Rm,Rn */
	if (T) { UPD(0x0C080F4Cu, 4); goto L_0C080F4C; }  /* 0C080FF8 bt */
L_0C080FFA: BLKS(0x0C080FFAu);
	r4 = 0xB4u; UPD(0x0C080FFCu, 1);  /* 0C080FFA mov.w @(disp,pc),Rn */
	IF(0x0C080FFCu); MACL = r12 * r4;  /* 0C080FFC mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C081000u, 3);  /* 0C080FFE mov.l @(disp,pc),Rn */
	IF(0x0C081000u); r10 = MACL;  /* 0C081000 sts macl,Rn */
	r10 += r0;  /* 0C081002 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C081006u, 3);  /* 0C081004 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C081006 mov Rm,Rn */
	r9 = 0xC0BBF10u; UPD(0x0C08100Au, 2);  /* 0C081008 mov.l @(disp,pc),Rn */
	IF(0x0C08100Au); r7 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08100Cu, 1);  /* 0C08100A mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C08100Eu, 1);  /* 0C08100C mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08100E extu.b Rm,Rn */
	IF(0x0C081010u); { u32 t_ = r9; PR = 0x0C081014u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C081014u); }  /* 0C081010 jsr @Rn */
L_0C081014: BLKS(0x0C081014u);
	T = (r0 & r0) == 0;  /* 0C081014 tst Rm,Rn */
	if (T) { UPD(0x0C080F4Cu, 4); goto L_0C080F4C; }  /* 0C081016 bt */
L_0C081018: BLKS(0x0C081018u);
	r0 = r10;  /* 0C081018 mov Rm,Rn */
	r5 = 0x86u; UPD(0x0C08101Cu, 2);  /* 0C08101A mov.w @(disp,pc),Rn */
	r13 = 0xC069B20u; UPD(0x0C08101Eu, 1);  /* 0C08101C mov.l @(disp,pc),Rn */
	IF(0x0C08101Eu); r9 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C081020u, 1);  /* 0C08101E mov.w @(r0,Rm),Rn */
	r5 = 0x100000u; UPD(0x0C081022u, 1);  /* 0C081020 mov.l @(disp,pc),Rn */
	IF(0x0C081022u); { u32 t_ = r13; PR = 0x0C081026u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C081026u); }  /* 0C081022 jsr @Rn */
L_0C081026: BLKS(0x0C081026u);
	r8 = R32(r10 + 0x24u); UPD(0x0C081028u, 1);  /* 0C081026 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C081028 mov Rm,Rn */
	r11 = 0xC069AF0u; UPD(0x0C08102Cu, 2);  /* 0C08102A mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C08102C add Rm,Rn */
	r2 = 0x10000u; UPD(0x0C081030u, 2);  /* 0C08102E mov.l @(disp,pc),Rn */
	r5 = 0x140000u; UPD(0x0C081032u, 1);  /* 0C081030 mov.l @(disp,pc),Rn */
	IF(0x0C081032u); { u32 t_ = r11; PR = 0x0C081036u; r8 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C081036u); }  /* 0C081032 jsr @Rn */
L_0C081036: BLKS(0x0C081036u);
	r6 = R32(r10 + 0x28u); UPD(0x0C081038u, 1);  /* 0C081036 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C081038 add #imm,Rn */
	r3 = 0x30000u; UPD(0x0C08103Cu, 2);  /* 0C08103A mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C08103C add Rm,Rn */
	W32(r15, r3); UPD(0x0C081040u, 2);  /* 0C08103E mov.l Rm,@Rn */
	{ r4 = 0x2u; /* slot mov #imm,Rn */ UPD(0x0C080FB6u, 3); goto L_0C080FB6; }  /* 0C081040 bra */
L_0C081050: BLKS(0x0C081050u);
	r10 = 0xC0A8DD0u; UPD(0x0C081052u, 1);  /* 0C081050 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C081052 mov Rm,Rn */
	IF(0x0C081054u); { u32 t_ = r10; PR = 0x0C081058u; r5 = r3; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C081058u); }  /* 0C081054 jsr @Rn */
L_0C081058: BLKS(0x0C081058u);
	T = (r0 & r0) == 0;  /* 0C081058 tst Rm,Rn */
	if (T) { UPD(0x0C08112Au, 4); goto L_0C08112A; }  /* 0C08105A bt */
L_0C08105C: BLKS(0x0C08105Cu);
	r4 = r12;  /* 0C08105C mov Rm,Rn */
	r8 = 0xC0BC1B0u; UPD(0x0C081060u, 2);  /* 0C08105E mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C081060 mov #imm,Rn */
	IF(0x0C081062u); { u32 t_ = r8; PR = 0x0C081066u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C081066u); }  /* 0C081062 jsr @Rn */
L_0C081066: BLKS(0x0C081066u);
	T = (r0 & r0) == 0;  /* 0C081066 tst Rm,Rn */
	if (T) { UPD(0x0C08112Au, 4); goto L_0C08112A; }  /* 0C081068 bt */
L_0C08106A: BLKS(0x0C08106Au);
	r4 = 0xB4u; UPD(0x0C08106Cu, 1);  /* 0C08106A mov.w @(disp,pc),Rn */
	IF(0x0C08106Cu); MACL = r12 * r4;  /* 0C08106C mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C081070u, 3);  /* 0C08106E mov.l @(disp,pc),Rn */
	IF(0x0C081070u); r11 = MACL;  /* 0C081070 sts macl,Rn */
	r11 += r0;  /* 0C081072 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C081076u, 3);  /* 0C081074 mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C081076 mov Rm,Rn */
	r9 = 0xC0BBF10u; UPD(0x0C08107Au, 2);  /* 0C081078 mov.l @(disp,pc),Rn */
	IF(0x0C08107Au); r7 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08107Cu, 1);  /* 0C08107A mov.b @(r0,Rm),Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C08107Eu, 1);  /* 0C08107C mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08107E extu.b Rm,Rn */
	IF(0x0C081080u); { u32 t_ = r9; PR = 0x0C081084u; r5 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C081084u); }  /* 0C081080 jsr @Rn */
L_0C081084: BLKS(0x0C081084u);
	T = (r0 & r0) == 0;  /* 0C081084 tst Rm,Rn */
	if (T) { UPD(0x0C08112Au, 4); goto L_0C08112A; }  /* 0C081086 bt */
L_0C081088: BLKS(0x0C081088u);
	r0 = r11;  /* 0C081088 mov Rm,Rn */
	r3 = 0x86u; UPD(0x0C08108Cu, 2);  /* 0C08108A mov.w @(disp,pc),Rn */
	r8 = 0xC069B20u; UPD(0x0C08108Eu, 1);  /* 0C08108C mov.l @(disp,pc),Rn */
	IF(0x0C08108Eu); r9 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C081090u, 1);  /* 0C08108E mov.w @(r0,Rm),Rn */
	r5 = 0xC0000u; UPD(0x0C081092u, 1);  /* 0C081090 mov.l @(disp,pc),Rn */
	r10 = 0xC069AF0u; UPD(0x0C081094u, 1);  /* 0C081092 mov.l @(disp,pc),Rn */
	IF(0x0C081094u); { u32 t_ = r8; PR = 0x0C081098u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C081098u); }  /* 0C081094 jsr @Rn */
L_0C081098: BLKS(0x0C081098u);
	r8 = R32(r11 + 0x24u); UPD(0x0C08109Au, 1);  /* 0C081098 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C08109A mov Rm,Rn */
	r5 = 0x100000u; UPD(0x0C08109Eu, 2);  /* 0C08109C mov.l @(disp,pc),Rn */
	IF(0x0C08109Eu); { u32 t_ = r10; PR = 0x0C0810A2u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0810A2u); }  /* 0C08109E jsr @Rn */
L_0C0810A2: BLKS(0x0C0810A2u);
	r13 = 0x20000u; UPD(0x0C0810A4u, 1);  /* 0C0810A2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0810A4 add #imm,Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C0810A8u, 2);  /* 0C0810A6 mov.l @(disp,Rm),Rn */
	r8 += r13;  /* 0C0810A8 add Rm,Rn */
	W32(r15, r13); UPD(0x0C0810ACu, 2);  /* 0C0810AA mov.l Rm,@Rn */
	r6 += r0;  /* 0C0810AC add Rm,Rn */
	{ r4 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C080FB6u, 4); goto L_0C080FB6; }  /* 0C0810AE bra */
L_0C0810C0: BLKS(0x0C0810C0u);
	r1 = 0xC0809E0u; UPD(0x0C0810C2u, 1);  /* 0C0810C0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0810C2 mov Rm,Rn */
	{ r5 = r3; /* slot mov Rm,Rn */ UPD(0x0C080F26u, 4); goto L_0C080F26; }  /* 0C0810C4 bra */
L_0C081110: BLKS(0x0C081110u);
	r11 = 0xC0A8DD0u; UPD(0x0C081112u, 1);  /* 0C081110 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C081112 mov Rm,Rn */
	IF(0x0C081114u); { u32 t_ = r11; PR = 0x0C081118u; r5 = r3; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C081118u); }  /* 0C081114 jsr @Rn */
L_0C081118: BLKS(0x0C081118u);
	T = (r0 & r0) == 0;  /* 0C081118 tst Rm,Rn */
	if (T) { UPD(0x0C08112Au, 4); goto L_0C08112A; }  /* 0C08111A bt */
L_0C08111C: BLKS(0x0C08111Cu);
	r4 = r12;  /* 0C08111C mov Rm,Rn */
	r9 = 0xC0BC1B0u; UPD(0x0C081120u, 2);  /* 0C08111E mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C081120 mov #imm,Rn */
	IF(0x0C081122u); { u32 t_ = r9; PR = 0x0C081126u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C081126u); }  /* 0C081122 jsr @Rn */
L_0C081126: BLKS(0x0C081126u);
	T = (r0 & r0) == 0;  /* 0C081126 tst Rm,Rn */
	if (!T) { UPD(0x0C08112Eu, 4); goto L_0C08112E; }  /* 0C081128 bf */
L_0C08112A: BLKS(0x0C08112Au);
	{ IF(0x0C08112Cu); ; /* slot nop */ UPD(0x0C080F4Cu, 3); goto L_0C080F4C; }  /* 0C08112A bra */
L_0C08112E: BLKS(0x0C08112Eu);
	r6 = 0xB4u; UPD(0x0C081130u, 1);  /* 0C08112E mov.w @(disp,pc),Rn */
	IF(0x0C081130u); MACL = r12 * r6;  /* 0C081130 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C081134u, 3);  /* 0C081132 mov.l @(disp,pc),Rn */
	IF(0x0C081134u); r10 = MACL;  /* 0C081134 sts macl,Rn */
	r10 += r7;  /* 0C081136 add Rm,Rn */
	r5 = 0xA9u; UPD(0x0C08113Au, 3);  /* 0C081138 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C08113A mov Rm,Rn */
	r13 = 0xC0BBF10u; UPD(0x0C08113Eu, 2);  /* 0C08113C mov.l @(disp,pc),Rn */
	IF(0x0C08113Eu); r2 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C081140u, 1);  /* 0C08113E mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C081142u, 1);  /* 0C081140 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C081142 extu.b Rm,Rn */
	IF(0x0C081144u); { u32 t_ = r13; PR = 0x0C081148u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C081148u); }  /* 0C081144 jsr @Rn */
L_0C081148: BLKS(0x0C081148u);
	T = (r0 & r0) == 0;  /* 0C081148 tst Rm,Rn */
	if (T) { UPD(0x0C08120Eu, 4); goto L_0C08120E; }  /* 0C08114A bt */
L_0C08114C: BLKS(0x0C08114Cu);
	r0 = r10;  /* 0C08114C mov Rm,Rn */
	r3 = 0x86u; UPD(0x0C081150u, 2);  /* 0C08114E mov.w @(disp,pc),Rn */
	r13 = 0xC069B20u; UPD(0x0C081152u, 1);  /* 0C081150 mov.l @(disp,pc),Rn */
	IF(0x0C081152u); r11 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C081154u, 1);  /* 0C081152 mov.w @(r0,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C081156u, 1);  /* 0C081154 mov.l @(disp,pc),Rn */
	IF(0x0C081156u); { u32 t_ = r13; PR = 0x0C08115Au; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08115Au); }  /* 0C081156 jsr @Rn */
L_0C08115A: BLKS(0x0C08115Au);
	r9 = R32(r10 + 0x24u); UPD(0x0C08115Cu, 1);  /* 0C08115A mov.l @(disp,Rm),Rn */
	r4 = 0x10000u; UPD(0x0C08115Eu, 1);  /* 0C08115C mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C08115E add Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C081162u, 2);  /* 0C081160 mov.l @(disp,pc),Rn */
	r9 += r4;  /* 0C081162 add Rm,Rn */
	r5 = 0xA0000u; UPD(0x0C081166u, 2);  /* 0C081164 mov.l @(disp,pc),Rn */
	IF(0x0C081166u); { u32 t_ = r8; PR = 0x0C08116Au; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08116Au); }  /* 0C081166 jsr @Rn */
L_0C08116A: BLKS(0x0C08116Au);
	r6 = R32(r10 + 0x28u); UPD(0x0C08116Cu, 1);  /* 0C08116A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08116C add #imm,Rn */
	r6 += r0;  /* 0C08116E add Rm,Rn */
	r0 = 0x28000u; UPD(0x0C081172u, 3);  /* 0C081170 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C081172 mov #imm,Rn */
	W32(r15, r0); UPD(0x0C081176u, 2);  /* 0C081174 mov.l Rm,@Rn */
	r5 = r9;  /* 0C081176 mov Rm,Rn */
	r0 = 0xC0BA480u; UPD(0x0C08117Au, 2);  /* 0C081178 mov.l @(disp,pc),Rn */
	{ r7 = r11; /* slot mov Rm,Rn */ UPD(0x0C080FBCu, 3); goto L_0C080FBC; }  /* 0C08117A bra */
L_0C081180: BLKS(0x0C081180u);
	r1 = 0xC0807A0u; UPD(0x0C081182u, 1);  /* 0C081180 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C081182 mov Rm,Rn */
	{ r5 = r3; /* slot mov Rm,Rn */ UPD(0x0C080F26u, 4); goto L_0C080F26; }  /* 0C081184 bra */
L_0C081190: BLKS(0x0C081190u);
	r1 = 0xC080B40u; UPD(0x0C081192u, 1);  /* 0C081190 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C081192 mov Rm,Rn */
	{ r5 = r3; /* slot mov Rm,Rn */ UPD(0x0C080F26u, 4); goto L_0C080F26; }  /* 0C081194 bra */
L_0C0811A0: BLKS(0x0C0811A0u);
	r10 = 0xC0A8DD0u; UPD(0x0C0811A2u, 1);  /* 0C0811A0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0811A2 mov Rm,Rn */
	IF(0x0C0811A4u); { u32 t_ = r10; PR = 0x0C0811A8u; r5 = r3; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C0811A8u); }  /* 0C0811A4 jsr @Rn */
L_0C0811A8: BLKS(0x0C0811A8u);
	T = (r0 & r0) == 0;  /* 0C0811A8 tst Rm,Rn */
	if (T) { UPD(0x0C08120Eu, 4); goto L_0C08120E; }  /* 0C0811AA bt */
L_0C0811AC: BLKS(0x0C0811ACu);
	r4 = r12;  /* 0C0811AC mov Rm,Rn */
	r11 = 0xC0BC1B0u; UPD(0x0C0811B0u, 2);  /* 0C0811AE mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C0811B0 mov #imm,Rn */
	IF(0x0C0811B2u); { u32 t_ = r11; PR = 0x0C0811B6u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0811B6u); }  /* 0C0811B2 jsr @Rn */
L_0C0811B6: BLKS(0x0C0811B6u);
	T = (r0 & r0) == 0;  /* 0C0811B6 tst Rm,Rn */
	if (T) { UPD(0x0C08120Eu, 4); goto L_0C08120E; }  /* 0C0811B8 bt */
L_0C0811BA: BLKS(0x0C0811BAu);
	r6 = 0xB4u; UPD(0x0C0811BCu, 1);  /* 0C0811BA mov.w @(disp,pc),Rn */
	IF(0x0C0811BCu); MACL = r12 * r6;  /* 0C0811BC mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0811C0u, 3);  /* 0C0811BE mov.l @(disp,pc),Rn */
	IF(0x0C0811C0u); r10 = MACL;  /* 0C0811C0 sts macl,Rn */
	r10 += r7;  /* 0C0811C2 add Rm,Rn */
	r5 = 0xA9u; UPD(0x0C0811C6u, 3);  /* 0C0811C4 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C0811C6 mov Rm,Rn */
	r9 = 0xC0BBF10u; UPD(0x0C0811CAu, 2);  /* 0C0811C8 mov.l @(disp,pc),Rn */
	IF(0x0C0811CAu); r2 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0811CCu, 1);  /* 0C0811CA mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C0811CEu, 1);  /* 0C0811CC mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C0811CE extu.b Rm,Rn */
	IF(0x0C0811D0u); { u32 t_ = r9; PR = 0x0C0811D4u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C0811D4u); }  /* 0C0811D0 jsr @Rn */
L_0C0811D4: BLKS(0x0C0811D4u);
	T = (r0 & r0) == 0;  /* 0C0811D4 tst Rm,Rn */
	if (T) { UPD(0x0C08120Eu, 4); goto L_0C08120E; }  /* 0C0811D6 bt */
L_0C0811D8: BLKS(0x0C0811D8u);
	r0 = r10;  /* 0C0811D8 mov Rm,Rn */
	r4 = 0x86u; UPD(0x0C0811DCu, 2);  /* 0C0811DA mov.w @(disp,pc),Rn */
	r8 = 0xC069B20u; UPD(0x0C0811DEu, 1);  /* 0C0811DC mov.l @(disp,pc),Rn */
	IF(0x0C0811DEu); r13 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C0811E0u, 1);  /* 0C0811DE mov.w @(r0,Rm),Rn */
	r5 = 0xF0000u; UPD(0x0C0811E2u, 1);  /* 0C0811E0 mov.l @(disp,pc),Rn */
	r9 = 0xC069AF0u; UPD(0x0C0811E4u, 1);  /* 0C0811E2 mov.l @(disp,pc),Rn */
	IF(0x0C0811E4u); { u32 t_ = r8; PR = 0x0C0811E8u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0811E8u); }  /* 0C0811E4 jsr @Rn */
L_0C0811E8: BLKS(0x0C0811E8u);
	r11 = R32(r10 + 0x24u); UPD(0x0C0811EAu, 1);  /* 0C0811E8 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C0811EA mov Rm,Rn */
	r5 = 0x140000u; UPD(0x0C0811EEu, 2);  /* 0C0811EC mov.l @(disp,pc),Rn */
	IF(0x0C0811EEu); { u32 t_ = r9; PR = 0x0C0811F2u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0811F2u); }  /* 0C0811EE jsr @Rn */
L_0C0811F2: BLKS(0x0C0811F2u);
	r6 = R32(r10 + 0x28u); UPD(0x0C0811F4u, 1);  /* 0C0811F2 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0811F4 add #imm,Rn */
	r6 += r0;  /* 0C0811F6 add Rm,Rn */
	r8 = 0xC0BA480u; UPD(0x0C0811FAu, 3);  /* 0C0811F8 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0811FA mov #imm,Rn */
	r0 = 0x20000u; UPD(0x0C0811FEu, 2);  /* 0C0811FC mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C0811FE mov Rm,Rn */
	W32(r15, r0); UPD(0x0C081202u, 2);  /* 0C081200 mov.l Rm,@Rn */
	IF(0x0C081202u); { u32 t_ = r8; PR = 0x0C081206u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C081206u); }  /* 0C081202 jsr @Rn */
L_0C081206: BLKS(0x0C081206u);
	r4 = r12;  /* 0C081206 mov Rm,Rn */
	r12 = 0xC069B90u; UPD(0x0C08120Au, 2);  /* 0C081208 mov.l @(disp,pc),Rn */
	IF(0x0C08120Au); { u32 t_ = r12; PR = 0x0C08120Eu; r15 += 0x4u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C08120Eu); }  /* 0C08120A jsr @Rn */
L_0C08120E: BLKS(0x0C08120Eu);
	{ IF(0x0C081210u); ; /* slot nop */ UPD(0x0C080F4Cu, 3); goto L_0C080F4C; }  /* 0C08120E bra */
L_0C081220: BLKS(0x0C081220u);
	r6 += 0xFFFFFFE0u;  /* 0C081220 add #imm,Rn */
	T = r6 > r9;  /* 0C081222 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r4 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08122Cu, 5); goto L_0C08122C; } goto L_0C081228; }  /* 0C081224 bf/s */
L_0C081228: BLKS(0x0C081228u);
	{ IF(0x0C08122Au); ; /* slot nop */ UPD(0x0C081380u, 4); goto L_0C081380; }  /* 0C081228 bra */
L_0C08122C: BLKS(0x0C08122Cu);
	IF(0x0C08122Cu); { u32 t_ = r13; PR = 0x0C081230u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C081230u); }  /* 0C08122C jsr @Rn */
L_0C081230: BLKS(0x0C081230u);
	IF(0x0C081230u); T = (s32)r0 >= 0;  /* 0C081230 cmp/pz Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08123Au, 4); goto L_0C08123A; } goto L_0C081236; }  /* 0C081232 bt/s */
L_0C081236: BLKS(0x0C081236u);
	{ r7 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C081370u, 4); goto L_0C081370; }  /* 0C081236 bra */
L_0C08123A: BLKS(0x0C08123Au);
	r10 = 0xC062780u; UPD(0x0C08123Cu, 1);  /* 0C08123A mov.l @(disp,pc),Rn */
	IF(0x0C08123Cu); { u32 t_ = r10; PR = 0x0C081240u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C081240u); }  /* 0C08123C jsr @Rn */
L_0C081240: BLKS(0x0C081240u);
	T = r0 == 0x2u;  /* 0C081240 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C08124Au, 4); goto L_0C08124A; }  /* 0C081242 bf */
L_0C081244: BLKS(0x0C081244u);
	r15 += 0xFFFFFFF8u;  /* 0C081244 add #imm,Rn */
	{ IF(0x0C081248u); ; /* slot nop */ UPD(0x0C081350u, 4); goto L_0C081350; }  /* 0C081246 bra */
L_0C08124A: BLKS(0x0C08124Au);
	r11 = 0x2u;  /* 0C08124A mov #imm,Rn */
	T = (s32)r0 > (s32)r11;  /* 0C08124C cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C081320u, 5); goto L_0C081320; } goto L_0C081252; }  /* 0C08124E bt/s */
L_0C081252: BLKS(0x0C081252u);
	T = r0 == 0x1u;  /* 0C081252 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0812A0u, 5); goto L_0C0812A0; }  /* 0C081254 bt */
L_0C081256: BLKS(0x0C081256u);
	r5 = 0xB4u; UPD(0x0C081258u, 1);  /* 0C081256 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C081258 add #imm,Rn */
	IF(0x0C08125Au); MACL = r12 * r5;  /* 0C08125A mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08125Eu, 4);  /* 0C08125C mov.l @(disp,pc),Rn */
	IF(0x0C08125Eu); r8 = MACL;  /* 0C08125E sts macl,Rn */
	r8 += r0;  /* 0C081260 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C081264u, 3);  /* 0C081262 mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C081264 mov #imm,Rn */
	IF(0x0C081266u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C081268u, 2);  /* 0C081266 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C081268 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C08126Cu, 2);  /* 0C08126A mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08126C add #imm,Rn */
	IF(0x0C08126Eu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C081270u, 2);  /* 0C08126E mov.b @(r0,Rm),Rn */
	r13 = r3 & 0xFF;  /* 0C081270 extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C081274u, 2);  /* 0C081272 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C081276u, 1);  /* 0C081274 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C081278u, 1);  /* 0C081276 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08127Au, 1);  /* 0C081278 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C08127Cu, 1);  /* 0C08127A mov.l @(disp,Rm),Rn */
L_0C08127C: BLKS(0x0C08127Cu);
	IF(0x0C08127Cu); { u32 t_ = r0; PR = 0x0C081280u; IF(0x0C08127Eu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C081280u); }  /* 0C08127C jsr @Rn */
L_0C081280: BLKS(0x0C081280u);
	r4 = 0xB4u; UPD(0x0C081282u, 1);  /* 0C081280 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C081282 add #imm,Rn */
	IF(0x0C081284u); MACL = r9 * r4;  /* 0C081284 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C081288u, 4);  /* 0C081286 mov.l @(disp,pc),Rn */
	IF(0x0C081288u); r9 = MACL;  /* 0C081288 sts macl,Rn */
	r9 += r8;  /* 0C08128A add Rm,Rn */
	r3 = R32(r9); UPD(0x0C08128Eu, 3);  /* 0C08128C mov.l @Rm,Rn */
	IF(0x0C08128Eu); MACL = r12 * r4;  /* 0C08128E mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C081292u, 3);  /* 0C081290 mov.l @(disp,pc),Rn */
	r3 |= r1;  /* 0C081292 or Rm,Rn */
	W32(r9, r3); UPD(0x0C081296u, 2);  /* 0C081294 mov.l Rm,@Rn */
	IF(0x0C081296u); r0 = MACL;  /* 0C081296 sts macl,Rn */
	r12 = 0x0u;  /* 0C081298 mov #imm,Rn */
	{ IF(0x0C08129Cu); W32(r0 + r8, r12); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C080F4Cu, 5); goto L_0C080F4C; }  /* 0C08129A bra */
L_0C0812A0: BLKS(0x0C0812A0u);
	r0 = 0xB0u; UPD(0x0C0812A2u, 1);  /* 0C0812A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0812A2 add #imm,Rn */
	IF(0x0C0812A4u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0812A6u, 2);  /* 0C0812A4 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0812A6 mov #imm,Rn */
	r11 = r13 & 0xFF;  /* 0C0812A8 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C0812ACu, 3);  /* 0C0812AA mov.l Rm,@Rn */
	r0 = r8;  /* 0C0812AC mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C0812B0u, 2);  /* 0C0812AE mov.w @(disp,pc),Rn */
	IF(0x0C0812B0u); r7 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0812B2u, 1);  /* 0C0812B0 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0812B2 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0812B6u, 2);  /* 0C0812B4 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0812B8u, 1);  /* 0C0812B6 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0812BAu, 1);  /* 0C0812B8 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0812BCu, 1);  /* 0C0812BA mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C08127Cu, 3); goto L_0C08127C; }  /* 0C0812BC bra */
L_0C081320: BLKS(0x0C081320u);
	if (!T) { UPD(0x0C081256u, 3); goto L_0C081256; }  /* 0C081320 bf */
L_0C081322: BLKS(0x0C081322u);
	r15 += 0xFFFFFFF8u;  /* 0C081322 add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C081326u, 2);  /* 0C081324 mov.w @(disp,pc),Rn */
	IF(0x0C081326u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C081328u, 1);  /* 0C081326 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C081328 mov #imm,Rn */
	r11 = r13 & 0xFF;  /* 0C08132A extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C08132Eu, 3);  /* 0C08132C mov.l Rm,@Rn */
	r0 = r8;  /* 0C08132E mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C081332u, 2);  /* 0C081330 mov.w @(disp,pc),Rn */
	IF(0x0C081332u); r7 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C081334u, 1);  /* 0C081332 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C081334 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C081338u, 2);  /* 0C081336 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C08133Au, 1);  /* 0C081338 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C08133Cu, 1);  /* 0C08133A mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08133Eu, 1);  /* 0C08133C mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C08127Cu, 3); goto L_0C08127C; }  /* 0C08133E bra */
L_0C081350: BLKS(0x0C081350u);
	r0 = 0xB0u; UPD(0x0C081352u, 1);  /* 0C081350 mov.w @(disp,pc),Rn */
	IF(0x0C081352u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C081354u, 1);  /* 0C081352 mov.b @(r0,Rm),Rn */
	r0 = r5 & 0xFF;  /* 0C081354 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C081358u, 2);  /* 0C081356 mov.l Rm,@Rn */
	r5 = 0x2u;  /* 0C081358 mov #imm,Rn */
	r4 = 0xA9u; UPD(0x0C08135Cu, 2);  /* 0C08135A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08135C mov Rm,Rn */
	IF(0x0C08135Eu); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C081360u, 2);  /* 0C08135E mov.b @(r0,Rm),Rn */
	r3 = r2 & 0xFF;  /* 0C081360 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C081364u, 2);  /* 0C081362 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C081366u, 1);  /* 0C081364 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C081368u, 1);  /* 0C081366 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08136Au, 1);  /* 0C081368 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C08127Cu, 3); goto L_0C08127C; }  /* 0C08136A bra */
L_0C081370: BLKS(0x0C081370u);
	{ W32(r8, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C080F4Cu, 3); goto L_0C080F4C; }  /* 0C081370 bra */
L_0C081380: BLKS(0x0C081380u);
	r1 = 0xC0A9170u; UPD(0x0C081382u, 1);  /* 0C081380 mov.l @(disp,pc),Rn */
	{ IF(0x0C081384u); ; /* slot nop */ UPD(0x0C080FC8u, 3); goto L_0C080FC8; }  /* 0C081382 bra */
L_0C081390: BLKS(0x0C081390u);
	r9 = 0xC0A9CB0u; UPD(0x0C081392u, 1);  /* 0C081390 mov.l @(disp,pc),Rn */
	IF(0x0C081392u); { u32 t_ = r9; PR = 0x0C081396u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C081396u); }  /* 0C081392 jsr @Rn */
L_0C081396: BLKS(0x0C081396u);
	r5 = 0xC0A9B40u; UPD(0x0C081398u, 1);  /* 0C081396 mov.l @(disp,pc),Rn */
	IF(0x0C081398u); { u32 t_ = r5; PR = 0x0C08139Cu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9B40, 0x0C0A9B40u, 0x0C08139Cu); }  /* 0C081398 jsr @Rn */
L_0C08139C: BLKS(0x0C08139Cu);
	r4 = 0x86u; UPD(0x0C08139Eu, 1);  /* 0C08139C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08139E mov Rm,Rn */
	IF(0x0C0813A0u); r3 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C0813A2u, 2);  /* 0C0813A0 mov.w @(r0,Rm),Rn */
	r2 = 0x200u; UPD(0x0C0813A4u, 1);  /* 0C0813A2 mov.w @(disp,pc),Rn */
	r0 = 0x1Fu;  /* 0C0813A4 mov #imm,Rn */
	r3 += r2;  /* 0C0813A6 add Rm,Rn */
	IF(0x0C0813A8u); r3 >>= 8;  /* 0C0813A8 shlr8 Rn */
	IF(0x0C0813AAu); r3 >>= 2;  /* 0C0813AA shlr2 Rn */
	r3 &= r0;  /* 0C0813AC and Rm,Rn */
	W32(r8 + 0x8u, r3); UPD(0x0C0813B0u, 6);  /* 0C0813AE mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C0813B0 mov Rm,Rn */
	r8 += 0x50u;  /* 0C0813B2 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C0813B6u, 3);  /* 0C0813B4 mov.w @Rm,Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0813B6 add #imm,Rn */
	r0 &= 0x3u;  /* 0C0813B8 and #imm,r0 */
	r1 = 0xC0A8B10u; UPD(0x0C0813BCu, 3);  /* 0C0813BA mov.l @(disp,pc),Rn */
	{ W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C080FC8u, 3); goto L_0C080FC8; }  /* 0C0813BC bra */
}


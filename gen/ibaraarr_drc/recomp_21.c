#include "recomp.h"
#include "recomp_funcs.h"

void f_0C09F530(sh3_t *c)
{
	LOCALS;
L_0C09F530: BLKS(0x0C09F530u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09F532u, 1);  /* 0C09F530 mov.l Rm,@-Rn */
	r4 = 0x4Eu;  /* 0C09F532 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09F536u, 2);  /* 0C09F534 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09F538u, 1);  /* 0C09F536 mov.l Rm,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C09F53Au, 1);  /* 0C09F538 mov.l @(disp,pc),Rn */
	IF(0x0C09F53Au); r15 -= 4; W32(r15, PR); UPD(0x0C09F53Cu, 1);  /* 0C09F53A sts.l pr,@-Rn */
	r5 = 0x8000u; UPD(0x0C09F53Eu, 1);  /* 0C09F53C mov.l @(disp,pc),Rn */
	IF(0x0C09F53Eu); { u32 t_ = r8; PR = 0x0C09F542u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C09F542u); }  /* 0C09F53E jsr @Rn */
L_0C09F542: BLKS(0x0C09F542u);
	T = (r0 & r0) == 0;  /* 0C09F542 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09F560u, 4); goto L_0C09F560; } UPD(0x0C09F548u, 1); goto L_0C09F548; }  /* 0C09F544 bf/s */
L_0C09F548: BLKS(0x0C09F548u);
	r15 = r14;  /* 0C09F548 mov Rm,Rn */
	IF(0x0C09F54Au); PR = R32(r15); r15 += 4; UPD(0x0C09F54Cu, 2);  /* 0C09F54A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09F54Eu, 1);  /* 0C09F54C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09F550u, 1);  /* 0C09F54E mov.l @Rm+,Rn */
	IF(0x0C09F550u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09F550 rts */
L_0C09F560: BLKS(0x0C09F560u);
	r8 = 0xC0606C0u; UPD(0x0C09F562u, 1);  /* 0C09F560 mov.l @(disp,pc),Rn */
	IF(0x0C09F562u); { u32 t_ = r8; PR = 0x0C09F566u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C09F566u); }  /* 0C09F562 jsr @Rn */
L_0C09F566: BLKS(0x0C09F566u);
	T = (r0 & r0) == 0;  /* 0C09F566 tst Rm,Rn */
	if (T) { UPD(0x0C09F548u, 4); goto L_0C09F548; }  /* 0C09F568 bt */
L_0C09F56A: BLKS(0x0C09F56Au);
	r6 = 0x4Eu;  /* 0C09F56A mov #imm,Rn */
	r4 = 0xC2755BCu; UPD(0x0C09F56Eu, 2);  /* 0C09F56C mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r4); UPD(0x0C09F570u, 1);  /* 0C09F56E mov.w @Rm,Rn */
	r3 = 0x0u;  /* 0C09F570 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C09F574u, 2);  /* 0C09F572 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r7;  /* 0C09F574 exts.w Rm,Rn */
	IF(0x0C09F576u); MACL = r4 * r8;  /* 0C09F576 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09F57Au, 4);  /* 0C09F578 mov.l @(disp,pc),Rn */
	r0 = 0xC0000000u; UPD(0x0C09F57Cu, 1);  /* 0C09F57A mov.l @(disp,pc),Rn */
	IF(0x0C09F57Cu); r8 = MACL;  /* 0C09F57C sts macl,Rn */
	r8 += r2;  /* 0C09F57E add Rm,Rn */
	W32(r8, r0); UPD(0x0C09F582u, 3);  /* 0C09F580 mov.l Rm,@Rn */
	r8 += 0x7Cu;  /* 0C09F582 add #imm,Rn */
	W16(r8, r7); UPD(0x0C09F586u, 2);  /* 0C09F584 mov.w Rm,@Rn */
	r8 += 0xFFFFFF84u;  /* 0C09F586 add #imm,Rn */
	r9 = 0xC1D8600u; UPD(0x0C09F58Au, 2);  /* 0C09F588 mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C09F58Cu, 1);  /* 0C09F58A mov.l Rm,@(disp,Rn) */
	r2 = 0xC0A02D0u; UPD(0x0C09F58Eu, 1);  /* 0C09F58C mov.l @(disp,pc),Rn */
	r5 = R32(r9); UPD(0x0C09F590u, 1);  /* 0C09F58E mov.l @Rm,Rn */
	W32(r8 + 0xCu, r3); UPD(0x0C09F592u, 1);  /* 0C09F590 mov.l Rm,@(disp,Rn) */
	IF(0x0C09F592u); { u32 t_ = r2; PR = 0x0C09F596u; W32(r8 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C09F596u); }  /* 0C09F592 jsr @Rn */
L_0C09F596: BLKS(0x0C09F596u);
	r0 = R32(r9 + 0x4u); UPD(0x0C09F598u, 1);  /* 0C09F596 mov.l @(disp,Rm),Rn */
	r4 = 0x17u;  /* 0C09F598 mov #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C09F59Cu, 2);  /* 0C09F59A mov.l Rm,@(disp,Rn) */
	r1 = 0xFFFFFFF0u;  /* 0C09F59C mov #imm,Rn */
	r6 = R32(r9 + 0x8u); UPD(0x0C09F5A0u, 2);  /* 0C09F59E mov.l @(disp,Rm),Rn */
	r7 = 0xC3929E0u; UPD(0x0C09F5A2u, 1);  /* 0C09F5A0 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r6); UPD(0x0C09F5A4u, 1);  /* 0C09F5A2 mov.l Rm,@(disp,Rn) */
	r5 = R32(r7); UPD(0x0C09F5A6u, 1);  /* 0C09F5A4 mov.l @Rm,Rn */
	r0 = 0xA9u; UPD(0x0C09F5A8u, 1);  /* 0C09F5A6 mov.w @(disp,pc),Rn */
	r5 += r6;  /* 0C09F5A8 add Rm,Rn */
	IF(0x0C09F5AAu); W8(r0 + r8, r4); UPD(0x0C09F5ACu, 2);  /* 0C09F5AA mov.b Rm,@(r0,Rn) */
	W32(r8 + 0x28u, r5); UPD(0x0C09F5AEu, 1);  /* 0C09F5AC mov.l Rm,@(disp,Rn) */
	r2 = 0x808080u; UPD(0x0C09F5B0u, 1);  /* 0C09F5AE mov.l @(disp,pc),Rn */
	r3 = R32(r9 + 0xCu); UPD(0x0C09F5B2u, 1);  /* 0C09F5B0 mov.l @(disp,Rm),Rn */
	r0 = 0xC26C8BAu; UPD(0x0C09F5B4u, 1);  /* 0C09F5B2 mov.l @(disp,pc),Rn */
	W32(r8 + 0x34u, r3); UPD(0x0C09F5B6u, 1);  /* 0C09F5B4 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r2); UPD(0x0C09F5B8u, 1);  /* 0C09F5B6 mov.l Rm,@(disp,Rn) */
	W8(r0, r1); UPD(0x0C09F5BAu, 1);  /* 0C09F5B8 mov.b Rm,@Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C09F548u, 3); goto L_0C09F548; }  /* 0C09F5BA bra */
}

void f_0C09F5F0(sh3_t *c)
{
	LOCALS;
L_0C09F5F0: BLKS(0x0C09F5F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09F5F2u, 1);  /* 0C09F5F0 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C09F5F4u, 1);  /* 0C09F5F2 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C09F5F4 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09F5F8u, 2);  /* 0C09F5F6 mov.l Rm,@-Rn */
	IF(0x0C09F5F8u); MACL = r8 * r0;  /* 0C09F5F8 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09F5FCu, 3);  /* 0C09F5FA mov.l Rm,@-Rn */
	r2 = 0xC26CD40u; UPD(0x0C09F5FEu, 1);  /* 0C09F5FC mov.l @(disp,pc),Rn */
	IF(0x0C09F5FEu); r0 = MACL;  /* 0C09F5FE sts macl,Rn */
	IF(0x0C09F600u); r15 -= 4; W32(r15, PR); UPD(0x0C09F602u, 2);  /* 0C09F600 sts.l pr,@-Rn */
	r0 += r2;  /* 0C09F602 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C09F606u, 2);  /* 0C09F604 mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C09F606 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09F610u, 4); goto L_0C09F610; } goto L_0C09F60C; }  /* 0C09F608 bf/s */
L_0C09F60C: BLKS(0x0C09F60Cu);
	{ r4 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C09F730u, 4); goto L_0C09F730; }  /* 0C09F60C bra */
L_0C09F610: BLKS(0x0C09F610u);
	IF(0x0C09F610u); T = (s32)r2 >= 0;  /* 0C09F610 cmp/pz Rn */
	if (!T) { UPD(0x0C09F69Cu, 4); goto L_0C09F69C; }  /* 0C09F612 bf */
L_0C09F614: BLKS(0x0C09F614u);
	r3 = 0x4u;  /* 0C09F614 mov #imm,Rn */
	T = (s32)r2 > (s32)r3;  /* 0C09F616 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C09F69Cu, 5); goto L_0C09F69C; }  /* 0C09F618 bt */
L_0C09F61A: BLKS(0x0C09F61Au);
	r9 = 0xC0A03F0u; UPD(0x0C09F61Cu, 1);  /* 0C09F61A mov.l @(disp,pc),Rn */
	IF(0x0C09F61Cu); { u32 t_ = r9; PR = 0x0C09F620u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09F620u); }  /* 0C09F61C jsr @Rn */
L_0C09F620: BLKS(0x0C09F620u);
	IF(0x0C09F620u); T = (s32)r0 >= 0;  /* 0C09F620 cmp/pz Rn */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09F720u, 4); goto L_0C09F720; } goto L_0C09F626; }  /* 0C09F622 bf/s */
L_0C09F626: BLKS(0x0C09F626u);
	r2 = 0xB4u; UPD(0x0C09F628u, 2);  /* 0C09F626 mov.w @(disp,pc),Rn */
	IF(0x0C09F628u); MACL = r8 * r2;  /* 0C09F628 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09F62Cu, 3);  /* 0C09F62A mov.l @(disp,pc),Rn */
	IF(0x0C09F62Cu); r7 = MACL;  /* 0C09F62C sts macl,Rn */
	IF(0x0C09F62Eu); MACL = r9 * r2;  /* 0C09F62E mul.l Rm,Rn */
	r7 += r0;  /* 0C09F630 add Rm,Rn */
	r6 = R32(r7 + 0x2Cu); UPD(0x0C09F634u, 5);  /* 0C09F632 mov.l @(disp,Rm),Rn */
	IF(0x0C09F634u); r5 = MACL;  /* 0C09F634 sts macl,Rn */
	r5 += r0;  /* 0C09F636 add Rm,Rn */
	r3 = R32(r5 + 0x24u); UPD(0x0C09F63Au, 3);  /* 0C09F638 mov.l @(disp,Rm),Rn */
	r4 = R32(r5 + 0x28u); UPD(0x0C09F63Cu, 1);  /* 0C09F63A mov.l @(disp,Rm),Rn */
	r3 += r6;  /* 0C09F63C add Rm,Rn */
	r1 = R32(r7 + 0x30u); UPD(0x0C09F640u, 2);  /* 0C09F63E mov.l @(disp,Rm),Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C09F642u, 1);  /* 0C09F640 mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C09F642 add Rm,Rn */
	W32(r7 + 0x24u, r3); UPD(0x0C09F646u, 2);  /* 0C09F644 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x3u;  /* 0C09F646 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r7 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09F700u, 4); goto L_0C09F700; } UPD(0x0C09F64Cu, 1); goto L_0C09F64C; }  /* 0C09F648 bt/s */
L_0C09F64C: BLKS(0x0C09F64Cu);
	T = r0 == 0x4u;  /* 0C09F64C cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09F6E0u, 4); goto L_0C09F6E0; }  /* 0C09F64E bt */
L_0C09F650: BLKS(0x0C09F650u);
	r0 = 0xB4u; UPD(0x0C09F652u, 1);  /* 0C09F650 mov.w @(disp,pc),Rn */
	IF(0x0C09F652u); MACL = r9 * r0;  /* 0C09F652 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C09F656u, 3);  /* 0C09F654 mov.l @(disp,pc),Rn */
	IF(0x0C09F656u); r6 = MACL;  /* 0C09F656 sts macl,Rn */
	r0 = 0x9Fu; UPD(0x0C09F65Au, 2);  /* 0C09F658 mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C09F65A add Rm,Rn */
	IF(0x0C09F65Cu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09F65Eu, 2);  /* 0C09F65C mov.b @(r0,Rm),Rn */
	r9 = 0x3u;  /* 0C09F65E mov #imm,Rn */
	r2 = r5 & 0xFF;  /* 0C09F660 extu.b Rm,Rn */
	T = r2 > r9;  /* 0C09F662 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09F69Cu, 6); goto L_0C09F69C; }  /* 0C09F664 bt */
L_0C09F666: BLKS(0x0C09F666u);
	r0 = 0xC09F670u;  /* 0C09F666 mova @(disp,pc),r0 */
	IF(0x0C09F668u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09F66Au, 2);  /* 0C09F668 mov.b @(r0,Rm),Rn */
	IF(0x0C09F66Au); { u32 tv_ = (r4 + 0x0C09F66Eu); u32 t_ = PHYS(tv_); IF(0x0C09F66Cu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09F680u: goto L_0C09F680; case 0x0C09F69Cu: goto L_0C09F69C; case 0x0C09F6C0u: goto L_0C09F6C0; default: JUMPD(tv_); } }  /* 0C09F66A braf Rn */
L_0C09F680: BLKS(0x0C09F680u);
	r7 = 0xB4u; UPD(0x0C09F682u, 1);  /* 0C09F680 mov.w @(disp,pc),Rn */
	IF(0x0C09F682u); MACL = r8 * r7;  /* 0C09F682 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09F686u, 3);  /* 0C09F684 mov.l @(disp,pc),Rn */
	IF(0x0C09F686u); r7 = MACL;  /* 0C09F686 sts macl,Rn */
	r7 += r2;  /* 0C09F688 add Rm,Rn */
	r3 = R32(r7 + 0x34u); UPD(0x0C09F68Cu, 3);  /* 0C09F68A mov.l @(disp,Rm),Rn */
	r8 = 0xF7u; UPD(0x0C09F68Eu, 1);  /* 0C09F68C mov.w @(disp,pc),Rn */
	r1 = r3 & 0xFF;  /* 0C09F68E extu.b Rm,Rn */
	T = r1 > r8;  /* 0C09F690 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C09F6B0u, 5); goto L_0C09F6B0; }  /* 0C09F692 bf */
L_0C09F694: BLKS(0x0C09F694u);
	r9 = 0xFFFFu; UPD(0x0C09F696u, 1);  /* 0C09F694 mov.l @(disp,pc),Rn */
	r3 |= r9;  /* 0C09F696 or Rm,Rn */
	UPD(0x0C09F698u, 1);
L_0C09F698: BLKS(0x0C09F698u);
	W32(r7 + 0x34u, r3); UPD(0x0C09F69Au, 1);  /* 0C09F698 mov.l Rm,@(disp,Rn) */
	IF(0x0C09F69Au); ;  /* 0C09F69A nop */
	UPD(0x0C09F69Cu, 1);
L_0C09F69C: BLKS(0x0C09F69Cu);
	r15 = r14;  /* 0C09F69C mov Rm,Rn */
	IF(0x0C09F69Eu); PR = R32(r15); r15 += 4; UPD(0x0C09F6A0u, 2);  /* 0C09F69E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09F6A2u, 1);  /* 0C09F6A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09F6A4u, 1);  /* 0C09F6A2 mov.l @Rm+,Rn */
	IF(0x0C09F6A4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09F6A4 rts */
L_0C09F6B0: BLKS(0x0C09F6B0u);
	r1 = 0x808u; UPD(0x0C09F6B2u, 1);  /* 0C09F6B0 mov.w @(disp,pc),Rn */
	IF(0x0C09F6B2u); ;  /* 0C09F6B2 nop */
	UPD(0x0C09F6B4u, 1);
L_0C09F6B4: BLKS(0x0C09F6B4u);
	{ r3 += r1; /* slot add Rm,Rn */ UPD(0x0C09F698u, 3); goto L_0C09F698; }  /* 0C09F6B4 bra */
L_0C09F6C0: BLKS(0x0C09F6C0u);
	r0 = 0xB4u; UPD(0x0C09F6C2u, 1);  /* 0C09F6C0 mov.w @(disp,pc),Rn */
	r5 = 0x8u;  /* 0C09F6C2 mov #imm,Rn */
	IF(0x0C09F6C4u); MACL = r8 * r0;  /* 0C09F6C4 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C09F6C8u, 4);  /* 0C09F6C6 mov.l @(disp,pc),Rn */
	IF(0x0C09F6C8u); r7 = MACL;  /* 0C09F6C8 sts macl,Rn */
	r7 += r3;  /* 0C09F6CA add Rm,Rn */
	r3 = R32(r7 + 0x34u); UPD(0x0C09F6CEu, 3);  /* 0C09F6CC mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C09F6CE extu.b Rm,Rn */
	T = r6 > r5;  /* 0C09F6D0 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09F6D8u, 5); goto L_0C09F6D8; }  /* 0C09F6D2 bt */
L_0C09F6D4: BLKS(0x0C09F6D4u);
	r4 = 0x0u;  /* 0C09F6D4 mov #imm,Rn */
	W32(r7, r4); UPD(0x0C09F6D8u, 2);  /* 0C09F6D6 mov.l Rm,@Rn */
L_0C09F6D8: BLKS(0x0C09F6D8u);
	r1 = 0xFFFFF7F8u; UPD(0x0C09F6DAu, 1);  /* 0C09F6D8 mov.w @(disp,pc),Rn */
	{ r3 += r1; /* slot add Rm,Rn */ UPD(0x0C09F698u, 3); goto L_0C09F698; }  /* 0C09F6DA bra */
L_0C09F6E0: BLKS(0x0C09F6E0u);
	r0 = 0xC22486Eu; UPD(0x0C09F6E2u, 1);  /* 0C09F6E0 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r0); UPD(0x0C09F6E4u, 1);  /* 0C09F6E2 mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C09F6E4 tst Rm,Rn */
	{ u32 c_ = T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09F650u, 4); goto L_0C09F650; } goto L_0C09F6EA; }  /* 0C09F6E6 bt/s */
L_0C09F6EA: BLKS(0x0C09F6EAu);
	r4 = 0xA1u; UPD(0x0C09F6ECu, 2);  /* 0C09F6EA mov.w @(disp,pc),Rn */
	IF(0x0C09F6ECu); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C09F6EEu, 1);  /* 0C09F6EC mov.b @(r0,Rm),Rn */
	W32(r7 + 0xCu, r2); UPD(0x0C09F6F0u, 1);  /* 0C09F6EE mov.l Rm,@(disp,Rn) */
L_0C09F6F0: BLKS(0x0C09F6F0u);
	r7 = 0xC0A0380u; UPD(0x0C09F6F2u, 1);  /* 0C09F6F0 mov.l @(disp,pc),Rn */
	IF(0x0C09F6F2u); { u32 t_ = r7; PR = 0x0C09F6F6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09F6F6u); }  /* 0C09F6F2 jsr @Rn */
L_0C09F6F6: BLKS(0x0C09F6F6u);
	{ IF(0x0C09F6F8u); ; /* slot nop */ UPD(0x0C09F650u, 3); goto L_0C09F650; }  /* 0C09F6F6 bra */
L_0C09F700: BLKS(0x0C09F700u);
	r3 = 0xC392B08u; UPD(0x0C09F702u, 1);  /* 0C09F700 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C09F702 mov #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r3); UPD(0x0C09F706u, 2);  /* 0C09F704 mov.b @Rm,Rn */
	r2 = r5 & 0xFF;  /* 0C09F706 extu.b Rm,Rn */
	T = r2 > r4;  /* 0C09F708 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r2 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09F650u, 5); goto L_0C09F650; } goto L_0C09F70E; }  /* 0C09F70A bf/s */
L_0C09F70E: BLKS(0x0C09F70Eu);
	{ W32(r7 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09F6F0u, 4); goto L_0C09F6F0; }  /* 0C09F70E bra */
L_0C09F720: BLKS(0x0C09F720u);
	r0 = 0xB4u; UPD(0x0C09F722u, 1);  /* 0C09F720 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C09F722 mov #imm,Rn */
	IF(0x0C09F724u); MACL = r8 * r0;  /* 0C09F724 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09F728u, 4);  /* 0C09F726 mov.l @(disp,pc),Rn */
	IF(0x0C09F728u); r0 = MACL;  /* 0C09F728 sts macl,Rn */
	{ IF(0x0C09F72Cu); W32(r0 + r6, r7); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09F69Cu, 4); goto L_0C09F69C; }  /* 0C09F72A bra */
L_0C09F730: BLKS(0x0C09F730u);
	r9 = 0xC3929E0u; UPD(0x0C09F732u, 1);  /* 0C09F730 mov.l @(disp,pc),Rn */
	r2 = 0x9Fu; UPD(0x0C09F734u, 1);  /* 0C09F732 mov.w @(disp,pc),Rn */
	r7 = R32(r9); UPD(0x0C09F736u, 1);  /* 0C09F734 mov.l @Rm,Rn */
	r6 = R32(r0 + 0x30u); UPD(0x0C09F738u, 1);  /* 0C09F736 mov.l @(disp,Rm),Rn */
	IF(0x0C09F738u); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09F73Au, 1);  /* 0C09F738 mov.b @(r0,Rm),Rn */
	r6 += r7;  /* 0C09F73A add Rm,Rn */
	r2 = r5 & 0xFF;  /* 0C09F73C extu.b Rm,Rn */
	T = r2 > r4;  /* 0C09F73E cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r0 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09F69Cu, 6); goto L_0C09F69C; } UPD(0x0C09F744u, 1); goto L_0C09F744; }  /* 0C09F740 bt/s */
L_0C09F744: BLKS(0x0C09F744u);
	r0 = 0xC09F750u;  /* 0C09F744 mova @(disp,pc),r0 */
	IF(0x0C09F746u); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09F748u, 2);  /* 0C09F746 mov.b @(r0,Rm),Rn */
	r3 = r3 & 0xFF;  /* 0C09F748 extu.b Rm,Rn */
	IF(0x0C09F74Au); { u32 tv_ = (r3 + 0x0C09F74Eu); u32 t_ = PHYS(tv_); IF(0x0C09F74Cu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C09F760u: goto L_0C09F760; case 0x0C09F7C0u: goto L_0C09F7C0; case 0x0C09F7F0u: goto L_0C09F7F0; default: JUMPD(tv_); } }  /* 0C09F74A braf Rn */
L_0C09F760: BLKS(0x0C09F760u);
	r4 = 0xB4u; UPD(0x0C09F762u, 1);  /* 0C09F760 mov.w @(disp,pc),Rn */
	IF(0x0C09F762u); MACL = r8 * r4;  /* 0C09F762 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09F766u, 3);  /* 0C09F764 mov.l @(disp,pc),Rn */
	IF(0x0C09F766u); r7 = MACL;  /* 0C09F766 sts macl,Rn */
	r7 += r0;  /* 0C09F768 add Rm,Rn */
	r3 = R32(r7 + 0x34u); UPD(0x0C09F76Cu, 3);  /* 0C09F76A mov.l @(disp,Rm),Rn */
	r1 = 0x9Fu; UPD(0x0C09F76Eu, 1);  /* 0C09F76C mov.w @(disp,pc),Rn */
	r8 = r3 & 0xFF;  /* 0C09F76E extu.b Rm,Rn */
	T = r8 > r1;  /* 0C09F770 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C09F790u, 5); goto L_0C09F790; }  /* 0C09F772 bf */
L_0C09F774: BLKS(0x0C09F774u);
	r5 = r1;  /* 0C09F774 mov Rm,Rn */
	r5 += r7;  /* 0C09F776 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C09F77Au, 3);  /* 0C09F778 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C09F77A add #imm,Rn */
	W8(r5, r2); UPD(0x0C09F77Eu, 2);  /* 0C09F77C mov.b Rm,@Rn */
L_0C09F77E: BLKS(0x0C09F77Eu);
	{ IF(0x0C09F780u); ; /* slot nop */ UPD(0x0C09F69Cu, 3); goto L_0C09F69C; }  /* 0C09F77E bra */
L_0C09F790: BLKS(0x0C09F790u);
	r1 = 0x505u; UPD(0x0C09F792u, 1);  /* 0C09F790 mov.w @(disp,pc),Rn */
	{ IF(0x0C09F794u); ; /* slot nop */ UPD(0x0C09F6B4u, 3); goto L_0C09F6B4; }  /* 0C09F792 bra */
L_0C09F7C0: BLKS(0x0C09F7C0u);
	r7 = 0xB4u; UPD(0x0C09F7C2u, 1);  /* 0C09F7C0 mov.w @(disp,pc),Rn */
	IF(0x0C09F7C2u); MACL = r8 * r7;  /* 0C09F7C2 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09F7C6u, 3);  /* 0C09F7C4 mov.l @(disp,pc),Rn */
	IF(0x0C09F7C6u); r3 = MACL;  /* 0C09F7C6 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C09F7CAu, 2);  /* 0C09F7C8 mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C09F7CA add Rm,Rn */
	r2 += r3;  /* 0C09F7CC add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C09F7D0u, 3);  /* 0C09F7CE mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C09F7D0 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C09F7D2 extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C09F7D4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09F77Eu, 6); goto L_0C09F77E; } UPD(0x0C09F7DAu, 1); goto L_0C09F7DA; }  /* 0C09F7D6 bf/s */
L_0C09F7DA: BLKS(0x0C09F7DAu);
	r0 = 0x9Fu; UPD(0x0C09F7DCu, 1);  /* 0C09F7DA mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C09F7DC mov #imm,Rn */
	IF(0x0C09F7DEu); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09F7E0u, 2);  /* 0C09F7DE mov.b @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C09F7E0 add #imm,Rn */
	W8(r2, r8); UPD(0x0C09F7E4u, 2);  /* 0C09F7E2 mov.b Rm,@Rn */
	{ IF(0x0C09F7E6u); W8(r0 + r3, r9); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09F69Cu, 3); goto L_0C09F69C; }  /* 0C09F7E4 bra */
L_0C09F7F0: BLKS(0x0C09F7F0u);
	r5 = 0xB4u; UPD(0x0C09F7F2u, 1);  /* 0C09F7F0 mov.w @(disp,pc),Rn */
	r0 = 0x5u;  /* 0C09F7F2 mov #imm,Rn */
	IF(0x0C09F7F4u); MACL = r8 * r5;  /* 0C09F7F4 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C09F7F8u, 4);  /* 0C09F7F6 mov.l @(disp,pc),Rn */
	IF(0x0C09F7F8u); r7 = MACL;  /* 0C09F7F8 sts macl,Rn */
	r7 += r3;  /* 0C09F7FA add Rm,Rn */
	r3 = R32(r7 + 0x34u); UPD(0x0C09F7FEu, 3);  /* 0C09F7FC mov.l @(disp,Rm),Rn */
	r4 = r3 & 0xFF;  /* 0C09F7FE extu.b Rm,Rn */
	T = r4 > r0;  /* 0C09F800 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09F808u, 5); goto L_0C09F808; }  /* 0C09F802 bt */
L_0C09F804: BLKS(0x0C09F804u);
	r2 = 0x0u;  /* 0C09F804 mov #imm,Rn */
	W32(r7, r2); UPD(0x0C09F808u, 2);  /* 0C09F806 mov.l Rm,@Rn */
L_0C09F808: BLKS(0x0C09F808u);
	r1 = 0xFFFFFAFBu; UPD(0x0C09F80Au, 1);  /* 0C09F808 mov.w @(disp,pc),Rn */
	{ IF(0x0C09F80Cu); ; /* slot nop */ UPD(0x0C09F6B4u, 3); goto L_0C09F6B4; }  /* 0C09F80A bra */
}

/* FUN_0c09f820 */
void f_0C09F820(sh3_t *c)
{
	LOCALS;
L_0C09F820: BLKS(0x0C09F820u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09F822u, 1);  /* 0C09F820 mov.l Rm,@-Rn */
	r4 = 0x4Cu;  /* 0C09F822 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09F826u, 2);  /* 0C09F824 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09F828u, 1);  /* 0C09F826 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09F82Au, 1);  /* 0C09F828 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09F82Cu, 1);  /* 0C09F82A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09F82Eu, 1);  /* 0C09F82C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09F830u, 1);  /* 0C09F82E mov.l Rm,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C09F832u, 1);  /* 0C09F830 mov.l @(disp,pc),Rn */
	IF(0x0C09F832u); r15 -= 4; W32(r15, PR); UPD(0x0C09F834u, 1);  /* 0C09F832 sts.l pr,@-Rn */
	r5 = 0x8000u; UPD(0x0C09F836u, 1);  /* 0C09F834 mov.l @(disp,pc),Rn */
	IF(0x0C09F836u); { u32 t_ = r8; PR = 0x0C09F83Au; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C09F83Au); }  /* 0C09F836 jsr @Rn */
L_0C09F83A: BLKS(0x0C09F83Au);
	T = (r0 & r0) == 0;  /* 0C09F83A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09F860u, 4); goto L_0C09F860; } UPD(0x0C09F840u, 1); goto L_0C09F840; }  /* 0C09F83C bf/s */
L_0C09F840: BLKS(0x0C09F840u);
	r15 = r14;  /* 0C09F840 mov Rm,Rn */
	IF(0x0C09F842u); PR = R32(r15); r15 += 4; UPD(0x0C09F844u, 2);  /* 0C09F842 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09F846u, 1);  /* 0C09F844 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09F848u, 1);  /* 0C09F846 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09F84Au, 1);  /* 0C09F848 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09F84Cu, 1);  /* 0C09F84A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09F84Eu, 1);  /* 0C09F84C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09F850u, 1);  /* 0C09F84E mov.l @Rm+,Rn */
	IF(0x0C09F850u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09F850 rts */
L_0C09F860: BLKS(0x0C09F860u);
	r8 = 0xC0606C0u; UPD(0x0C09F862u, 1);  /* 0C09F860 mov.l @(disp,pc),Rn */
	r13 = 0xC2755BCu; UPD(0x0C09F864u, 1);  /* 0C09F862 mov.l @(disp,pc),Rn */
	IF(0x0C09F864u); { u32 t_ = r8; PR = 0x0C09F868u; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C09F868u); }  /* 0C09F864 jsr @Rn */
L_0C09F868: BLKS(0x0C09F868u);
	T = (r0 & r0) == 0;  /* 0C09F868 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09F840u, 4); goto L_0C09F840; } goto L_0C09F86E; }  /* 0C09F86A bt/s */
L_0C09F86E: BLKS(0x0C09F86Eu);
	r9 = 0xC1D8880u; UPD(0x0C09F870u, 2);  /* 0C09F86E mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C09F870 mov #imm,Rn */
	r12 = 0xB4u; UPD(0x0C09F874u, 2);  /* 0C09F872 mov.w @(disp,pc),Rn */
	r11 = r13;  /* 0C09F874 mov Rm,Rn */
	IF(0x0C09F876u); ;  /* 0C09F876 nop */
	UPD(0x0C09F878u, 2);
L_0C09F878: BLKS(0x0C09F878u);
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r4 = v_; } UPD(0x0C09F87Au, 1);  /* 0C09F878 mov.w @Rm+,Rn */
	r3 = 0x4Cu;  /* 0C09F87A mov #imm,Rn */
	IF(0x0C09F87Cu); MACL = r4 * r12;  /* 0C09F87C mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C09F880u, 4);  /* 0C09F87E mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C09F880 mov #imm,Rn */
	r6 = 0xC0000000u; UPD(0x0C09F884u, 2);  /* 0C09F882 mov.l @(disp,pc),Rn */
	IF(0x0C09F884u); r8 = MACL;  /* 0C09F884 sts macl,Rn */
	r8 += r7;  /* 0C09F886 add Rm,Rn */
	W32(r8, r6); UPD(0x0C09F88Au, 3);  /* 0C09F888 mov.l Rm,@Rn */
	r5 = (u32)(s32)(s16)R16(r13); UPD(0x0C09F88Cu, 1);  /* 0C09F88A mov.w @Rm,Rn */
	r8 += 0x7Cu;  /* 0C09F88C add #imm,Rn */
	W16(r8, r5); UPD(0x0C09F890u, 2);  /* 0C09F88E mov.w Rm,@Rn */
	r8 += 0xFFFFFF84u;  /* 0C09F890 add #imm,Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C09F894u, 2);  /* 0C09F892 mov.l Rm,@(disp,Rn) */
	r7 = 0xC0A02D0u; UPD(0x0C09F896u, 1);  /* 0C09F894 mov.l @(disp,pc),Rn */
	r2 = R32(r9); UPD(0x0C09F898u, 1);  /* 0C09F896 mov.l @Rm,Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C09F89Au, 1);  /* 0C09F898 mov.l Rm,@(disp,Rn) */
	IF(0x0C09F89Au); { u32 t_ = r7; PR = 0x0C09F89Eu; W32(r8 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C09F89Eu); }  /* 0C09F89A jsr @Rn */
L_0C09F89E: BLKS(0x0C09F89Eu);
	r6 = R32(r9 + 0x4u); UPD(0x0C09F8A0u, 1);  /* 0C09F89E mov.l @(disp,Rm),Rn */
	r2 = 0x17u;  /* 0C09F8A0 mov #imm,Rn */
	W32(r8 + 0x2Cu, r6); UPD(0x0C09F8A4u, 2);  /* 0C09F8A2 mov.l Rm,@(disp,Rn) */
	r4 = R32(r9 + 0x8u); UPD(0x0C09F8A6u, 1);  /* 0C09F8A4 mov.l @(disp,Rm),Rn */
	r5 = 0xC3929E0u; UPD(0x0C09F8A8u, 1);  /* 0C09F8A6 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r4); UPD(0x0C09F8AAu, 1);  /* 0C09F8A8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x24u, r6); UPD(0x0C09F8ACu, 1);  /* 0C09F8AA mov.l Rm,@(disp,Rn) */
	r3 = R32(r5); UPD(0x0C09F8AEu, 1);  /* 0C09F8AC mov.l @Rm,Rn */
	r0 = 0xA9u; UPD(0x0C09F8B0u, 1);  /* 0C09F8AE mov.w @(disp,pc),Rn */
	r3 += r4;  /* 0C09F8B0 add Rm,Rn */
	IF(0x0C09F8B2u); W8(r0 + r8, r2); UPD(0x0C09F8B4u, 2);  /* 0C09F8B2 mov.b Rm,@(r0,Rn) */
	W32(r8 + 0x28u, r3); UPD(0x0C09F8B6u, 1);  /* 0C09F8B4 mov.l Rm,@(disp,Rn) */
	r2 = r10;  /* 0C09F8B6 mov Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C09F8BAu, 2);  /* 0C09F8B8 mov.l @(disp,Rm),Rn */
	r2 += 0x1u;  /* 0C09F8BA add #imm,Rn */
	r7 = 0x808080u; UPD(0x0C09F8BEu, 2);  /* 0C09F8BC mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r2;  /* 0C09F8BE exts.w Rm,Rn */
	W32(r8 + 0x34u, r0); UPD(0x0C09F8C2u, 2);  /* 0C09F8C0 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r7); UPD(0x0C09F8C4u, 1);  /* 0C09F8C2 mov.l Rm,@(disp,Rn) */
	r6 = 0xC22486Eu; UPD(0x0C09F8C6u, 1);  /* 0C09F8C4 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C09F8C8u, 1);  /* 0C09F8C6 mov.b @Rm,Rn */
	r4 = 0xC1D77B0u; UPD(0x0C09F8CAu, 1);  /* 0C09F8C8 mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C09F8CA extu.b Rm,Rn */
	IF(0x0C09F8CCu); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C09F8CEu, 2);  /* 0C09F8CC mov.b @(r0,Rm),Rn */
	r0 = 0xA1u; UPD(0x0C09F8D0u, 1);  /* 0C09F8CE mov.w @(disp,pc),Rn */
	IF(0x0C09F8D0u); W8(r0 + r8, r3); UPD(0x0C09F8D2u, 1);  /* 0C09F8D0 mov.b Rm,@(r0,Rn) */
	r0 = 0x4u;  /* 0C09F8D2 mov #imm,Rn */
	T = (s32)r10 > (s32)r0;  /* 0C09F8D4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09F878u, 5); goto L_0C09F878; } goto L_0C09F8DA; }  /* 0C09F8D6 bf/s */
L_0C09F8DA: BLKS(0x0C09F8DAu);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C09F840u, 4); goto L_0C09F840; }  /* 0C09F8DA bra */
}

void f_0C09F920(sh3_t *c)
{
	LOCALS;
L_0C09F920: BLKS(0x0C09F920u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09F922u, 1);  /* 0C09F920 mov.l Rm,@-Rn */
	r3 = 0x40u;  /* 0C09F922 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09F926u, 2);  /* 0C09F924 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09F928u, 1);  /* 0C09F926 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09F92Au, 1);  /* 0C09F928 mov.l Rm,@-Rn */
	r10 = r6;  /* 0C09F92A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09F92Eu, 2);  /* 0C09F92C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09F930u, 1);  /* 0C09F92E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09F932u, 1);  /* 0C09F930 mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C09F932 exts.w Rm,Rn */
	IF(0x0C09F934u); r15 -= 4; W32(r15, PR); UPD(0x0C09F936u, 2);  /* 0C09F934 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE0u;  /* 0C09F936 add #imm,Rn */
	r14 = r15;  /* 0C09F938 mov Rm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C09F93Cu, 3);  /* 0C09F93A mov.l Rm,@(disp,Rn) */
	r3 += r14;  /* 0C09F93C add Rm,Rn */
	r6 = R32(r3 + 0x0u); UPD(0x0C09F940u, 2);  /* 0C09F93E mov.l @(disp,Rm),Rn */
	r4 = R32(r3 + 0x4u); UPD(0x0C09F942u, 1);  /* 0C09F940 mov.l @(disp,Rm),Rn */
	W32(r14, r5); UPD(0x0C09F944u, 1);  /* 0C09F942 mov.l Rm,@Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C09F944 exts.w Rm,Rn */
	r2 = R32(r3 + 0x8u); UPD(0x0C09F948u, 2);  /* 0C09F946 mov.l @(disp,Rm),Rn */
	r5 = (u32)(s32)(s8)r6;  /* 0C09F948 exts.b Rm,Rn */
	r8 = 0xC0606C0u; UPD(0x0C09F94Cu, 2);  /* 0C09F94A mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C09F94C exts.w Rm,Rn */
	W32(r14 + 0x8u, r5); UPD(0x0C09F950u, 2);  /* 0C09F94E mov.l Rm,@(disp,Rn) */
	r4 = 0x2u;  /* 0C09F950 mov #imm,Rn */
	IF(0x0C09F952u); { u32 t_ = r8; PR = 0x0C09F956u; W32(r14 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C09F956u); }  /* 0C09F952 jsr @Rn */
L_0C09F956: BLKS(0x0C09F956u);
	T = (r0 & r0) == 0;  /* 0C09F956 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09F980u, 4); goto L_0C09F980; } UPD(0x0C09F95Cu, 1); goto L_0C09F95C; }  /* 0C09F958 bf/s */
L_0C09F95C: BLKS(0x0C09F95Cu);
	r14 += 0x20u;  /* 0C09F95C add #imm,Rn */
	r15 = r14;  /* 0C09F95E mov Rm,Rn */
	IF(0x0C09F960u); PR = R32(r15); r15 += 4; UPD(0x0C09F962u, 3);  /* 0C09F960 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09F964u, 1);  /* 0C09F962 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09F966u, 1);  /* 0C09F964 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09F968u, 1);  /* 0C09F966 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09F96Au, 1);  /* 0C09F968 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09F96Cu, 1);  /* 0C09F96A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09F96Eu, 1);  /* 0C09F96C mov.l @Rm+,Rn */
	IF(0x0C09F96Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09F96E rts */
L_0C09F980: BLKS(0x0C09F980u);
	r8 = 0xC2755BCu; UPD(0x0C09F982u, 1);  /* 0C09F980 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C09F982 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r11 = v_; } UPD(0x0C09F986u, 2);  /* 0C09F984 mov.w @Rm+,Rn */
	r3 = 0x4Fu;  /* 0C09F986 mov #imm,Rn */
	r9 = 0xB4u; UPD(0x0C09F98Au, 2);  /* 0C09F988 mov.w @(disp,pc),Rn */
	IF(0x0C09F98Au); MACL = r11 * r9;  /* 0C09F98A mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C09F98Eu, 3);  /* 0C09F98C mov.l @(disp,pc),Rn */
	IF(0x0C09F98Eu); r9 = MACL;  /* 0C09F98E sts macl,Rn */
	r4 = 0xC0000000u; UPD(0x0C09F992u, 2);  /* 0C09F990 mov.l @(disp,pc),Rn */
	r9 += r5;  /* 0C09F992 add Rm,Rn */
	r0 = 0xC0A02D0u; UPD(0x0C09F996u, 2);  /* 0C09F994 mov.l @(disp,pc),Rn */
	W32(r9, r4); UPD(0x0C09F998u, 1);  /* 0C09F996 mov.l Rm,@Rn */
	W32(r9 + 0x4u, r3); UPD(0x0C09F99Au, 1);  /* 0C09F998 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C09F99A mov Rm,Rn */
	W32(r9 + 0xCu, r1); UPD(0x0C09F99Eu, 2);  /* 0C09F99C mov.l Rm,@(disp,Rn) */
	IF(0x0C09F99Eu); { u32 t_ = r0; PR = 0x0C09F9A2u; W32(r9 + 0x8u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C09F9A2u); }  /* 0C09F99E jsr @Rn */
L_0C09F9A2: BLKS(0x0C09F9A2u);
	W32(r9 + 0x24u, r10); UPD(0x0C09F9A4u, 1);  /* 0C09F9A2 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C09F9A4 mov Rm,Rn */
	r6 = 0xC0A1530u; UPD(0x0C09F9A8u, 2);  /* 0C09F9A6 mov.l @(disp,pc),Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C09F9AAu, 1);  /* 0C09F9A8 mov.l @(disp,Rm),Rn */
	r0 = 0x8Cu; UPD(0x0C09F9ACu, 1);  /* 0C09F9AA mov.w @(disp,pc),Rn */
	r10 = 0x1C000u; UPD(0x0C09F9AEu, 1);  /* 0C09F9AC mov.l @(disp,pc),Rn */
	W32(r9 + 0x28u, r7); UPD(0x0C09F9B0u, 1);  /* 0C09F9AE mov.l Rm,@(disp,Rn) */
	IF(0x0C09F9B0u); { u32 t_ = r6; PR = 0x0C09F9B4u; IF(0x0C09F9B2u); W32(r0 + r9, r10); /* slot mov.l Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C09F9B4u); }  /* 0C09F9B0 jsr @Rn */
L_0C09F9B4: BLKS(0x0C09F9B4u);
	r5 = 0xA8u; UPD(0x0C09F9B6u, 1);  /* 0C09F9B4 mov.w @(disp,pc),Rn */
	r0 = 0xBu;  /* 0C09F9B6 mov #imm,Rn */
	r4 = 0xACu; UPD(0x0C09F9BAu, 2);  /* 0C09F9B8 mov.w @(disp,pc),Rn */
	r5 += r9;  /* 0C09F9BA add Rm,Rn */
	r4 += r9;  /* 0C09F9BC add Rm,Rn */
	r4 += 0x1u;  /* 0C09F9BE add #imm,Rn */
	r5 += 0x1u;  /* 0C09F9C0 add #imm,Rn */
	W32(r14 + 0x10u, r5); UPD(0x0C09F9C4u, 5);  /* 0C09F9C2 mov.l Rm,@(disp,Rn) */
	r1 = 0x6u;  /* 0C09F9C4 mov #imm,Rn */
	IF(0x0C09F9C6u); r2 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C09F9C8u, 2);  /* 0C09F9C6 mov.b @(r0,Rm),Rn */
	IF(0x0C09F9C8u); ARG0(0x4C1Du); { s32 s_ = (s32)r1; if (s_ >= 0) r12 <<= (s_ & 31); else if ((s_ & 31) == 0) r12 = 0; else r12 >>= ((~s_ & 31) + 1); }  /* 0C09F9C8 shld Rm,Rn */
	W32(r14 + 0x14u, r4); UPD(0x0C09F9CCu, 2);  /* 0C09F9CA mov.l Rm,@(disp,Rn) */
	r0 = 0xBu;  /* 0C09F9CC mov #imm,Rn */
	W8(r4, r2); UPD(0x0C09F9D0u, 2);  /* 0C09F9CE mov.b Rm,@Rn */
	r7 = 0xEu;  /* 0C09F9D0 mov #imm,Rn */
	IF(0x0C09F9D2u); r3 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C09F9D4u, 2);  /* 0C09F9D2 mov.b @(r0,Rm),Rn */
	r7 += r14;  /* 0C09F9D4 add Rm,Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C09F9D8u, 2);  /* 0C09F9D6 mov.l @(disp,Rm),Rn */
	W8(r0, r3); UPD(0x0C09F9DAu, 1);  /* 0C09F9D8 mov.b Rm,@Rn */
	r0 = 0x86u; UPD(0x0C09F9DCu, 1);  /* 0C09F9DA mov.w @(disp,pc),Rn */
	r5 = 0xB4u; UPD(0x0C09F9DEu, 1);  /* 0C09F9DC mov.w @(disp,pc),Rn */
	IF(0x0C09F9DEu); W16(r0 + r9, r12); UPD(0x0C09F9E0u, 1);  /* 0C09F9DE mov.w Rm,@(r0,Rn) */
	IF(0x0C09F9E0u); MACL = r13 * r5;  /* 0C09F9E0 mul.l Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r7); UPD(0x0C09F9E4u, 3);  /* 0C09F9E2 mov.w @Rm,Rn */
	r0 += 0x2u;  /* 0C09F9E4 add #imm,Rn */
	IF(0x0C09F9E6u); W16(r0 + r9, r10); UPD(0x0C09F9E8u, 2);  /* 0C09F9E6 mov.w Rm,@(r0,Rn) */
	IF(0x0C09F9E8u); r4 = MACL;  /* 0C09F9E8 sts macl,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09F9ECu, 2);  /* 0C09F9EA mov.l @(disp,pc),Rn */
	r9 += 0x7Cu;  /* 0C09F9EC add #imm,Rn */
	W16(r9, r13); UPD(0x0C09F9F0u, 2);  /* 0C09F9EE mov.w Rm,@Rn */
	r5 += 0xFFFFFFCCu;  /* 0C09F9F0 add #imm,Rn */
	r4 += r6;  /* 0C09F9F2 add Rm,Rn */
	r4 += r5;  /* 0C09F9F4 add Rm,Rn */
	r10 = 0x80u; UPD(0x0C09F9F8u, 4);  /* 0C09F9F6 mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFF84u;  /* 0C09F9F8 add #imm,Rn */
	r4 += 0x2u;  /* 0C09F9FA add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r4); UPD(0x0C09F9FEu, 3);  /* 0C09F9FC mov.w @Rm,Rn */
	r10 += r9;  /* 0C09F9FE add Rm,Rn */
	r10 += 0x2u;  /* 0C09FA00 add #imm,Rn */
	W16(r10, r13); UPD(0x0C09FA04u, 3);  /* 0C09FA02 mov.w Rm,@Rn */
	r12 = 0xB4u; UPD(0x0C09FA06u, 1);  /* 0C09FA04 mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C09FA08u, 1);  /* 0C09FA06 mov.w @Rm,Rn */
	IF(0x0C09FA08u); MACL = r13 * r12;  /* 0C09FA08 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C09FA0Cu, 3);  /* 0C09FA0A mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C09FA0C mov Rm,Rn */
	IF(0x0C09FA0Eu); r12 = MACL;  /* 0C09FA0E sts macl,Rn */
	r12 += r3;  /* 0C09FA10 add Rm,Rn */
	r12 += 0x7Cu;  /* 0C09FA12 add #imm,Rn */
	W16(r12, r11); UPD(0x0C09FA16u, 5);  /* 0C09FA14 mov.w Rm,@Rn */
	r0 = R32(r9 + 0x4u); UPD(0x0C09FA18u, 1);  /* 0C09FA16 mov.l @(disp,Rm),Rn */
	r12 += 0xFFFFFF84u;  /* 0C09FA18 add #imm,Rn */
	W32(r12 + 0x4u, r0); UPD(0x0C09FA1Cu, 2);  /* 0C09FA1A mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C09FA1C mov #imm,Rn */
	r0 = R32(r14); UPD(0x0C09FA20u, 2);  /* 0C09FA1E mov.l @Rm,Rn */
	r1 = 0xC0A02D0u; UPD(0x0C09FA22u, 1);  /* 0C09FA20 mov.l @(disp,pc),Rn */
	r0 &= 0x3u;  /* 0C09FA22 and #imm,r0 */
	r2 = 0xD3004100u; UPD(0x0C09FA26u, 2);  /* 0C09FA24 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C09FA26 add #imm,Rn */
	W32(r12, r2); UPD(0x0C09FA2Au, 2);  /* 0C09FA28 mov.l Rm,@Rn */
	W32(r12 + 0x8u, r0); UPD(0x0C09FA2Cu, 1);  /* 0C09FA2A mov.l Rm,@(disp,Rn) */
	IF(0x0C09FA2Cu); { u32 t_ = r1; PR = 0x0C09FA30u; W32(r12 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C09FA30u); }  /* 0C09FA2C jsr @Rn */
L_0C09FA30: BLKS(0x0C09FA30u);
	r6 = 0xC0A1530u; UPD(0x0C09FA32u, 1);  /* 0C09FA30 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C09FA32 mov Rm,Rn */
	r7 = R32(r9 + 0x24u); UPD(0x0C09FA36u, 2);  /* 0C09FA34 mov.l @(disp,Rm),Rn */
	r8 = R32(r9 + 0x28u); UPD(0x0C09FA38u, 1);  /* 0C09FA36 mov.l @(disp,Rm),Rn */
	W32(r12 + 0x24u, r7); UPD(0x0C09FA3Au, 1);  /* 0C09FA38 mov.l Rm,@(disp,Rn) */
	IF(0x0C09FA3Au); { u32 t_ = r6; PR = 0x0C09FA3Eu; W32(r12 + 0x28u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C09FA3Eu); }  /* 0C09FA3A jsr @Rn */
L_0C09FA3E: BLKS(0x0C09FA3Eu);
	r5 = 0xA8u; UPD(0x0C09FA40u, 1);  /* 0C09FA3E mov.w @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C09FA40 mov #imm,Rn */
	r5 += r12;  /* 0C09FA42 add Rm,Rn */
	r5 += 0x1u;  /* 0C09FA44 add #imm,Rn */
	W32(r14 + 0x18u, r5); UPD(0x0C09FA48u, 4);  /* 0C09FA46 mov.l Rm,@(disp,Rn) */
	r4 = R32(r14 + 0x10u); UPD(0x0C09FA4Au, 1);  /* 0C09FA48 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x18u); UPD(0x0C09FA4Cu, 1);  /* 0C09FA4A mov.l @(disp,Rm),Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C09FA4Eu, 1);  /* 0C09FA4C mov.b @Rm,Rn */
	r0 = 0xACu; UPD(0x0C09FA50u, 1);  /* 0C09FA4E mov.w @(disp,pc),Rn */
	r4 = 0x7Au;  /* 0C09FA50 mov #imm,Rn */
	W8(r2, r3); UPD(0x0C09FA54u, 2);  /* 0C09FA52 mov.b Rm,@Rn */
	r0 += r12;  /* 0C09FA54 add Rm,Rn */
	r0 += 0x1u;  /* 0C09FA56 add #imm,Rn */
	W32(r14 + 0x1Cu, r0); UPD(0x0C09FA5Au, 3);  /* 0C09FA58 mov.l Rm,@(disp,Rn) */
	r13 = R32(r14 + 0x14u); UPD(0x0C09FA5Cu, 1);  /* 0C09FA5A mov.l @(disp,Rm),Rn */
	r9 = R32(r14 + 0x1Cu); UPD(0x0C09FA5Eu, 1);  /* 0C09FA5C mov.l @(disp,Rm),Rn */
	r0 = 0x9Bu; UPD(0x0C09FA60u, 1);  /* 0C09FA5E mov.w @(disp,pc),Rn */
	IF(0x0C09FA60u); W8(r0 + r12, r1); UPD(0x0C09FA62u, 1);  /* 0C09FA60 mov.b Rm,@(r0,Rn) */
	r8 = 0xC0AFC10u; UPD(0x0C09FA64u, 1);  /* 0C09FA62 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFE5u;  /* 0C09FA64 add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r13); UPD(0x0C09FA68u, 2);  /* 0C09FA66 mov.b @Rm,Rn */
	r12 += r0;  /* 0C09FA68 add Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C09FA6Cu, 2);  /* 0C09FA6A mov.w @Rm,Rn */
	r12 += 0x2u;  /* 0C09FA6C add #imm,Rn */
	W8(r9, r11); UPD(0x0C09FA70u, 2);  /* 0C09FA6E mov.b Rm,@Rn */
	IF(0x0C09FA70u); { u32 t_ = r8; PR = 0x0C09FA74u; W16(r12, r7); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C09FA74u); }  /* 0C09FA70 jsr @Rn */
L_0C09FA74: BLKS(0x0C09FA74u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C09F95Cu, 3); goto L_0C09F95C; }  /* 0C09FA74 bra */
}

void f_0C09FAB0(sh3_t *c)
{
	LOCALS;
L_0C09FAB0: BLKS(0x0C09FAB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09FAB2u, 1);  /* 0C09FAB0 mov.l Rm,@-Rn */
	r4 = 0x2u;  /* 0C09FAB2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09FAB6u, 2);  /* 0C09FAB4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09FAB8u, 1);  /* 0C09FAB6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09FABAu, 1);  /* 0C09FAB8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09FABCu, 1);  /* 0C09FABA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09FABEu, 1);  /* 0C09FABC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09FAC0u, 1);  /* 0C09FABE mov.l Rm,@-Rn */
	r8 = 0xC0606C0u; UPD(0x0C09FAC2u, 1);  /* 0C09FAC0 mov.l @(disp,pc),Rn */
	IF(0x0C09FAC2u); r15 -= 4; W32(r15, PR); UPD(0x0C09FAC4u, 1);  /* 0C09FAC2 sts.l pr,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09FAC4 add #imm,Rn */
	IF(0x0C09FAC6u); { u32 t_ = r8; PR = 0x0C09FACAu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C09FACAu); }  /* 0C09FAC6 jsr @Rn */
L_0C09FACA: BLKS(0x0C09FACAu);
	T = (r0 & r0) == 0;  /* 0C09FACA tst Rm,Rn */
	if (!T) { UPD(0x0C09FAF0u, 4); goto L_0C09FAF0; }  /* 0C09FACC bf */
L_0C09FACE: BLKS(0x0C09FACEu);
	r0 = 0x1u;  /* 0C09FACE mov #imm,Rn */
	r14 += 0x4u;  /* 0C09FAD0 add #imm,Rn */
	r15 = r14;  /* 0C09FAD2 mov Rm,Rn */
	IF(0x0C09FAD4u); PR = R32(r15); r15 += 4; UPD(0x0C09FAD6u, 4);  /* 0C09FAD4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09FAD8u, 1);  /* 0C09FAD6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09FADAu, 1);  /* 0C09FAD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09FADCu, 1);  /* 0C09FADA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09FADEu, 1);  /* 0C09FADC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09FAE0u, 1);  /* 0C09FADE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09FAE2u, 1);  /* 0C09FAE0 mov.l @Rm+,Rn */
	IF(0x0C09FAE2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09FAE2 rts */
L_0C09FAF0: BLKS(0x0C09FAF0u);
	r8 = 0xC2755BCu; UPD(0x0C09FAF2u, 1);  /* 0C09FAF0 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C09FAF2 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r12 = v_; } UPD(0x0C09FAF6u, 2);  /* 0C09FAF4 mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C09FAF8u, 1);  /* 0C09FAF6 mov.w @(disp,pc),Rn */
	r4 = 0xC22C874u; UPD(0x0C09FAFAu, 1);  /* 0C09FAF8 mov.l @(disp,pc),Rn */
	IF(0x0C09FAFAu); MACL = r12 * r9;  /* 0C09FAFA mul.l Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r4); UPD(0x0C09FAFEu, 3);  /* 0C09FAFC mov.w @Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09FB00u, 1);  /* 0C09FAFE mov.l @(disp,pc),Rn */
	IF(0x0C09FB00u); r9 = MACL;  /* 0C09FB00 sts macl,Rn */
	r1 = 0xC0A02D0u; UPD(0x0C09FB04u, 2);  /* 0C09FB02 mov.l @(disp,pc),Rn */
	r9 += r6;  /* 0C09FB04 add Rm,Rn */
	r5 = 0xD3000100u; UPD(0x0C09FB08u, 2);  /* 0C09FB06 mov.l @(disp,pc),Rn */
	r3 = r2 & 0xFFFF;  /* 0C09FB08 extu.w Rm,Rn */
	W32(r9, r5); UPD(0x0C09FB0Cu, 2);  /* 0C09FB0A mov.l Rm,@Rn */
	r4 = r12;  /* 0C09FB0C mov Rm,Rn */
	W32(r9 + 0x4u, r3); UPD(0x0C09FB10u, 2);  /* 0C09FB0E mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r0); UPD(0x0C09FB12u, 1);  /* 0C09FB10 mov.l Rm,@(disp,Rn) */
	IF(0x0C09FB12u); { u32 t_ = r1; PR = 0x0C09FB16u; W32(r9 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C09FB16u); }  /* 0C09FB12 jsr @Rn */
L_0C09FB16: BLKS(0x0C09FB16u);
	r11 = 0xC061380u; UPD(0x0C09FB18u, 1);  /* 0C09FB16 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C09FB18 mov Rm,Rn */
	r7 = 0x1500000u; UPD(0x0C09FB1Cu, 2);  /* 0C09FB1A mov.l @(disp,pc),Rn */
	r13 = 0xC0A1530u; UPD(0x0C09FB1Eu, 1);  /* 0C09FB1C mov.l @(disp,pc),Rn */
	IF(0x0C09FB1Eu); { u32 t_ = r11; PR = 0x0C09FB22u; W32(r9 + 0x24u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C061380, 0x0C061380u, 0x0C09FB22u); }  /* 0C09FB1E jsr @Rn */
L_0C09FB22: BLKS(0x0C09FB22u);
	IF(0x0C09FB22u); { u32 t_ = r13; PR = 0x0C09FB26u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C09FB26u); }  /* 0C09FB22 jsr @Rn */
L_0C09FB26: BLKS(0x0C09FB26u);
	r0 = 0x8Cu; UPD(0x0C09FB28u, 1);  /* 0C09FB26 mov.w @(disp,pc),Rn */
	r11 = 0x14u;  /* 0C09FB28 mov #imm,Rn */
	r10 = 0x10000u; UPD(0x0C09FB2Cu, 2);  /* 0C09FB2A mov.l @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C09FB2C mov #imm,Rn */
	IF(0x0C09FB2Eu); W32(r0 + r9, r10); UPD(0x0C09FB30u, 2);  /* 0C09FB2E mov.l Rm,@(r0,Rn) */
	r3 = 0x0u;  /* 0C09FB30 mov #imm,Rn */
	r13 = 0xA8u; UPD(0x0C09FB34u, 2);  /* 0C09FB32 mov.w @(disp,pc),Rn */
	r10 = 0xACu; UPD(0x0C09FB36u, 1);  /* 0C09FB34 mov.w @(disp,pc),Rn */
	r13 += r9;  /* 0C09FB36 add Rm,Rn */
	r10 += r9;  /* 0C09FB38 add Rm,Rn */
	r13 += 0x1u;  /* 0C09FB3A add #imm,Rn */
	r10 += 0x1u;  /* 0C09FB3C add #imm,Rn */
	W8(r10, r11); UPD(0x0C09FB40u, 5);  /* 0C09FB3E mov.b Rm,@Rn */
	W8(r13, r11); UPD(0x0C09FB42u, 1);  /* 0C09FB40 mov.b Rm,@Rn */
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C09FB44u, 1);  /* 0C09FB42 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C09FB46u, 1);  /* 0C09FB44 mov.w @(disp,pc),Rn */
	IF(0x0C09FB46u); MACL = r11 * r8;  /* 0C09FB46 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09FB4Au, 3);  /* 0C09FB48 mov.l @(disp,pc),Rn */
	IF(0x0C09FB4Au); r8 = MACL;  /* 0C09FB4A sts macl,Rn */
	r8 += r6;  /* 0C09FB4C add Rm,Rn */
	r8 += 0x7Cu;  /* 0C09FB4E add #imm,Rn */
	W16(r8, r12); UPD(0x0C09FB52u, 4);  /* 0C09FB50 mov.w Rm,@Rn */
	r4 = R32(r9 + 0x4u); UPD(0x0C09FB54u, 1);  /* 0C09FB52 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFF84u;  /* 0C09FB54 add #imm,Rn */
	r0 = 0xC0A02D0u; UPD(0x0C09FB58u, 2);  /* 0C09FB56 mov.l @(disp,pc),Rn */
	r5 = 0xC0000000u; UPD(0x0C09FB5Au, 1);  /* 0C09FB58 mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r4); UPD(0x0C09FB5Cu, 1);  /* 0C09FB5A mov.l Rm,@(disp,Rn) */
	W32(r8, r5); UPD(0x0C09FB5Eu, 1);  /* 0C09FB5C mov.l Rm,@Rn */
	r4 = r11;  /* 0C09FB5E mov Rm,Rn */
	W32(r8 + 0x8u, r2); UPD(0x0C09FB62u, 2);  /* 0C09FB60 mov.l Rm,@(disp,Rn) */
	IF(0x0C09FB62u); { u32 t_ = r0; PR = 0x0C09FB66u; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C09FB66u); }  /* 0C09FB62 jsr @Rn */
L_0C09FB66: BLKS(0x0C09FB66u);
	r1 = 0xC0A1530u; UPD(0x0C09FB68u, 1);  /* 0C09FB66 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C09FB68 mov Rm,Rn */
	r12 = R32(r9 + 0x24u); UPD(0x0C09FB6Cu, 2);  /* 0C09FB6A mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C09FB6Eu, 1);  /* 0C09FB6C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C09FB70u, 1);  /* 0C09FB6E mov.l Rm,@(disp,Rn) */
	IF(0x0C09FB70u); { u32 t_ = r1; PR = 0x0C09FB74u; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C09FB74u); }  /* 0C09FB70 jsr @Rn */
L_0C09FB74: BLKS(0x0C09FB74u);
	r0 = 0xB0u; UPD(0x0C09FB76u, 1);  /* 0C09FB74 mov.w @(disp,pc),Rn */
	r5 = 0xA8u; UPD(0x0C09FB78u, 1);  /* 0C09FB76 mov.w @(disp,pc),Rn */
	IF(0x0C09FB78u); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09FB7Au, 1);  /* 0C09FB78 mov.b @(r0,Rm),Rn */
	r5 += r8;  /* 0C09FB7A add Rm,Rn */
	IF(0x0C09FB7Cu); W8(r0 + r8, r6); UPD(0x0C09FB7Eu, 2);  /* 0C09FB7C mov.b Rm,@(r0,Rn) */
	r5 += 0x1u;  /* 0C09FB7E add #imm,Rn */
	W32(r14, r5); UPD(0x0C09FB82u, 2);  /* 0C09FB80 mov.l Rm,@Rn */
	r2 = 0xACu; UPD(0x0C09FB84u, 1);  /* 0C09FB82 mov.w @(disp,pc),Rn */
	r3 = R32(r14); UPD(0x0C09FB86u, 1);  /* 0C09FB84 mov.l @Rm,Rn */
	r8 += r2;  /* 0C09FB86 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r13); UPD(0x0C09FB8Au, 2);  /* 0C09FB88 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C09FB8A add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C09FB8Eu, 2);  /* 0C09FB8C mov.b @Rm,Rn */
	W8(r3, r4); UPD(0x0C09FB90u, 1);  /* 0C09FB8E mov.b Rm,@Rn */
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C09FACEu, 3); goto L_0C09FACE; }  /* 0C09FB90 bra */
}

void f_0C09FBD0(sh3_t *c)
{
	LOCALS;
L_0C09FBD0: BLKS(0x0C09FBD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09FBD2u, 1);  /* 0C09FBD0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09FBD4u, 1);  /* 0C09FBD2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09FBD6u, 1);  /* 0C09FBD4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09FBD8u, 1);  /* 0C09FBD6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09FBDAu, 1);  /* 0C09FBD8 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C09FBDCu, 1);  /* 0C09FBDA mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C09FBDC exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09FBE0u, 2);  /* 0C09FBDE mov.l Rm,@-Rn */
	IF(0x0C09FBE0u); MACL = r12 * r3;  /* 0C09FBE0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09FBE4u, 3);  /* 0C09FBE2 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C09FBE6u, 1);  /* 0C09FBE4 mov.l @(disp,pc),Rn */
	IF(0x0C09FBE6u); r2 = MACL;  /* 0C09FBE6 sts macl,Rn */
	IF(0x0C09FBE8u); r15 -= 4; W32(r15, PR); UPD(0x0C09FBEAu, 2);  /* 0C09FBE8 sts.l pr,@-Rn */
	r0 += r2;  /* 0C09FBEA add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C09FBEEu, 2);  /* 0C09FBEC mov.l @(disp,Rm),Rn */
	r0 = 0x4u;  /* 0C09FBEE mov #imm,Rn */
	T = r2 > r0;  /* 0C09FBF0 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09FCC8u, 5); goto L_0C09FCC8; } goto L_0C09FBF6; }  /* 0C09FBF2 bt/s */
L_0C09FBF6: BLKS(0x0C09FBF6u);
	r0 = 0xC09FC08u;  /* 0C09FBF6 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09FBF8 add Rm,Rn */
	IF(0x0C09FBFAu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09FBFCu, 4);  /* 0C09FBFA mov.w @(r0,Rm),Rn */
	IF(0x0C09FBFCu); { u32 tv_ = (r4 + 0x0C09FC00u); u32 t_ = PHYS(tv_); IF(0x0C09FBFEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09FC20u: goto L_0C09FC20; case 0x0C09FD30u: goto L_0C09FD30; case 0x0C09FE70u: goto L_0C09FE70; case 0x0C09FEE0u: goto L_0C09FEE0; case 0x0C09FF50u: goto L_0C09FF50; default: JUMPD(tv_); } }  /* 0C09FBFC braf Rn */
L_0C09FC20: BLKS(0x0C09FC20u);
	r8 = 0xC0A03F0u; UPD(0x0C09FC22u, 1);  /* 0C09FC20 mov.l @(disp,pc),Rn */
	IF(0x0C09FC22u); { u32 t_ = r8; PR = 0x0C09FC26u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09FC26u); }  /* 0C09FC22 jsr @Rn */
L_0C09FC26: BLKS(0x0C09FC26u);
	IF(0x0C09FC26u); T = (s32)r0 >= 0;  /* 0C09FC26 cmp/pz Rn */
	if (!T) { UPD(0x0C09FC42u, 4); goto L_0C09FC42; }  /* 0C09FC28 bf */
L_0C09FC2A: BLKS(0x0C09FC2Au);
	r9 = 0xB4u; UPD(0x0C09FC2Cu, 1);  /* 0C09FC2A mov.w @(disp,pc),Rn */
	IF(0x0C09FC2Cu); MACL = r12 * r9;  /* 0C09FC2C mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C09FC30u, 3);  /* 0C09FC2E mov.l @(disp,pc),Rn */
	IF(0x0C09FC30u); r7 = MACL;  /* 0C09FC30 sts macl,Rn */
	IF(0x0C09FC32u); MACL = r0 * r9;  /* 0C09FC32 mul.l Rm,Rn */
	IF(0x0C09FC34u); r0 = MACL;  /* 0C09FC34 sts macl,Rn */
	r0 += r5;  /* 0C09FC36 add Rm,Rn */
	r9 += 0xFFFFFFD2u;  /* 0C09FC38 add #imm,Rn */
	IF(0x0C09FC3Au); r6 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C09FC3Cu, 7);  /* 0C09FC3A mov.w @(r0,Rm),Rn */
	r5 += r7;  /* 0C09FC3C add Rm,Rn */
	r0 = 0x8Au; UPD(0x0C09FC40u, 2);  /* 0C09FC3E mov.w @(disp,pc),Rn */
	IF(0x0C09FC40u); W16(r0 + r5, r6); UPD(0x0C09FC42u, 1);  /* 0C09FC40 mov.w Rm,@(r0,Rn) */
L_0C09FC42: BLKS(0x0C09FC42u);
	r11 = 0xB4u; UPD(0x0C09FC44u, 1);  /* 0C09FC42 mov.w @(disp,pc),Rn */
	IF(0x0C09FC44u); MACL = r12 * r11;  /* 0C09FC44 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C09FC48u, 3);  /* 0C09FC46 mov.l @(disp,pc),Rn */
	IF(0x0C09FC48u); r9 = MACL;  /* 0C09FC48 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C09FC4Cu, 2);  /* 0C09FC4A mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C09FC4C add Rm,Rn */
	r2 += r9;  /* 0C09FC4E add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C09FC52u, 3);  /* 0C09FC50 mov.b @Rm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C09FC52 cmp/eq #imm,r0 */
	{ u32 c_ = T; r4 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09FC6Au, 4); goto L_0C09FC6A; } goto L_0C09FC58; }  /* 0C09FC54 bt/s */
L_0C09FC58: BLKS(0x0C09FC58u);
	r13 = 0x86u; UPD(0x0C09FC5Au, 2);  /* 0C09FC58 mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C09FC5A add #imm,Rn */
	r0 = 0x88u; UPD(0x0C09FC5Eu, 2);  /* 0C09FC5C mov.w @(disp,pc),Rn */
	r13 += r9;  /* 0C09FC5E add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r13); UPD(0x0C09FC62u, 2);  /* 0C09FC60 mov.w @Rm,Rn */
	IF(0x0C09FC62u); r1 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C09FC64u, 1);  /* 0C09FC62 mov.w @(r0,Rm),Rn */
	r3 += r1;  /* 0C09FC64 add Rm,Rn */
	W8(r2, r4); UPD(0x0C09FC68u, 2);  /* 0C09FC66 mov.b Rm,@Rn */
	W16(r13, r3); UPD(0x0C09FC6Au, 1);  /* 0C09FC68 mov.w Rm,@Rn */
L_0C09FC6A: BLKS(0x0C09FC6Au);
	r10 = 0x8Cu; UPD(0x0C09FC6Cu, 1);  /* 0C09FC6A mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C09FC6C mov Rm,Rn */
	r10 += r9;  /* 0C09FC6E add Rm,Rn */
	r5 = R32(r10); UPD(0x0C09FC72u, 3);  /* 0C09FC70 mov.l @Rm,Rn */
	r6 = 0x100u; UPD(0x0C09FC74u, 1);  /* 0C09FC72 mov.w @(disp,pc),Rn */
	r5 += r6;  /* 0C09FC74 add Rm,Rn */
	r6 += 0xFFFFFF86u;  /* 0C09FC76 add #imm,Rn */
	IF(0x0C09FC78u); r13 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C09FC7Au, 3);  /* 0C09FC78 mov.w @(r0,Rm),Rn */
	r11 = 0xC058060u; UPD(0x0C09FC7Cu, 1);  /* 0C09FC7A mov.l @(disp,pc),Rn */
	r0 = 0xFFFFFFFAu;  /* 0C09FC7C mov #imm,Rn */
	IF(0x0C09FC7Eu); ARG0(0x4D0Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = (u32)((s32)r13 >> 31); else r13 = (u32)((s32)r13 >> ((~s_ & 31) + 1)); }  /* 0C09FC7E shad Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C09FC82u, 3);  /* 0C09FC80 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C09FC82 mov Rm,Rn */
	IF(0x0C09FC84u); { u32 t_ = r11; PR = 0x0C09FC88u; W32(r10, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09FC88u); }  /* 0C09FC84 jsr @Rn */
L_0C09FC88: BLKS(0x0C09FC88u);
	W32(r9 + 0x2Cu, r0); UPD(0x0C09FC8Au, 1);  /* 0C09FC88 mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C09FC8A mov Rm,Rn */
	IF(0x0C09FC8Cu); { u32 t_ = r8; PR = 0x0C09FC90u; r5 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09FC90u); }  /* 0C09FC8C jsr @Rn */
L_0C09FC90: BLKS(0x0C09FC90u);
	r7 = R32(r9 + 0x24u); UPD(0x0C09FC92u, 1);  /* 0C09FC90 mov.l @(disp,Rm),Rn */
	r2 = R32(r9 + 0x2Cu); UPD(0x0C09FC94u, 1);  /* 0C09FC92 mov.l @(disp,Rm),Rn */
	r3 = R32(r9 + 0x28u); UPD(0x0C09FC96u, 1);  /* 0C09FC94 mov.l @(disp,Rm),Rn */
	r7 += r2;  /* 0C09FC96 add Rm,Rn */
	r2 = 0xFF600000u; UPD(0x0C09FC9Au, 2);  /* 0C09FC98 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C09FC9A add Rm,Rn */
	r2 += r7;  /* 0C09FC9C add Rm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C09FCA0u, 3);  /* 0C09FC9E mov.l Rm,@(disp,Rn) */
	IF(0x0C09FCA0u); T = (s32)r2 >= 0;  /* 0C09FCA0 cmp/pz Rn */
	W32(r9 + 0x24u, r7); UPD(0x0C09FCA4u, 2);  /* 0C09FCA2 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r9 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09FD20u, 3); goto L_0C09FD20; } UPD(0x0C09FCA8u, 1); goto L_0C09FCA8; }  /* 0C09FCA4 bf/s */
L_0C09FCA8: BLKS(0x0C09FCA8u);
	r5 = 0xB80000u; UPD(0x0C09FCAAu, 1);  /* 0C09FCA8 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C09FCAA cmp/gt Rm,Rn */
	if (T) { UPD(0x0C09FCC4u, 4); goto L_0C09FCC4; }  /* 0C09FCAC bt */
L_0C09FCAE: BLKS(0x0C09FCAEu);
	r2 = 0xC3929E0u; UPD(0x0C09FCB0u, 1);  /* 0C09FCAE mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C09FCB2u, 1);  /* 0C09FCB0 mov.l @Rm,Rn */
	r2 = r3;  /* 0C09FCB2 mov Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C09FCB6u, 2);  /* 0C09FCB4 mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C09FCB6 sub Rm,Rn */
	r2 += r3;  /* 0C09FCB8 add Rm,Rn */
	IF(0x0C09FCBAu); T = (s32)r2 >= 0;  /* 0C09FCBA cmp/pz Rn */
	if (!T) { UPD(0x0C09FD10u, 6); goto L_0C09FD10; }  /* 0C09FCBC bf */
L_0C09FCBE: BLKS(0x0C09FCBEu);
	r8 = 0x900000u; UPD(0x0C09FCC0u, 1);  /* 0C09FCBE mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C09FCC0 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09FCE0u, 4); goto L_0C09FCE0; }  /* 0C09FCC2 bf */
L_0C09FCC4: BLKS(0x0C09FCC4u);
	r12 = 0x0u;  /* 0C09FCC4 mov #imm,Rn */
	W32(r9, r12); UPD(0x0C09FCC8u, 2);  /* 0C09FCC6 mov.l Rm,@Rn */
L_0C09FCC8: BLKS(0x0C09FCC8u);
	r15 = r14;  /* 0C09FCC8 mov Rm,Rn */
	IF(0x0C09FCCAu); PR = R32(r15); r15 += 4; UPD(0x0C09FCCCu, 2);  /* 0C09FCCA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09FCCEu, 1);  /* 0C09FCCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09FCD0u, 1);  /* 0C09FCCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09FCD2u, 1);  /* 0C09FCD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09FCD4u, 1);  /* 0C09FCD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09FCD6u, 1);  /* 0C09FCD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09FCD8u, 1);  /* 0C09FCD6 mov.l @Rm+,Rn */
	IF(0x0C09FCD8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09FCD8 rts */
L_0C09FCE0: BLKS(0x0C09FCE0u);
	r10 = 0x3FFFFFu; UPD(0x0C09FCE2u, 1);  /* 0C09FCE0 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r10;  /* 0C09FCE2 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C09FCECu, 4); goto L_0C09FCEC; }  /* 0C09FCE4 bt */
L_0C09FCE6: BLKS(0x0C09FCE6u);
	r7 = 0x0u;  /* 0C09FCE6 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09FCEAu, 2);  /* 0C09FCE8 mov.w @(disp,pc),Rn */
	IF(0x0C09FCEAu); W16(r0 + r9, r7); UPD(0x0C09FCECu, 1);  /* 0C09FCEA mov.w Rm,@(r0,Rn) */
L_0C09FCEC: BLKS(0x0C09FCECu);
	r0 = R32(r9 + 0xCu); UPD(0x0C09FCEEu, 1);  /* 0C09FCEC mov.l @(disp,Rm),Rn */
	r0 += 0x3u;  /* 0C09FCEE add #imm,Rn */
	r0 &= 0x7u;  /* 0C09FCF0 and #imm,r0 */
	W32(r9 + 0xCu, r0); UPD(0x0C09FCF4u, 3);  /* 0C09FCF2 mov.l Rm,@(disp,Rn) */
L_0C09FCF4: BLKS(0x0C09FCF4u);
	r7 = 0xC0A0380u; UPD(0x0C09FCF6u, 1);  /* 0C09FCF4 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C09FCF6 mov Rm,Rn */
	r15 = r14;  /* 0C09FCF8 mov Rm,Rn */
	IF(0x0C09FCFAu); PR = R32(r15); r15 += 4; UPD(0x0C09FCFCu, 3);  /* 0C09FCFA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09FCFEu, 1);  /* 0C09FCFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09FD00u, 1);  /* 0C09FCFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09FD02u, 1);  /* 0C09FD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09FD04u, 1);  /* 0C09FD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09FD06u, 1);  /* 0C09FD04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09FD08u, 1);  /* 0C09FD06 mov.l @Rm+,Rn */
	IF(0x0C09FD08u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C09FD08 jmp @Rn */
L_0C09FD10: BLKS(0x0C09FD10u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C09FCBEu, 3); goto L_0C09FCBE; }  /* 0C09FD10 bra */
L_0C09FD20: BLKS(0x0C09FD20u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C09FCA8u, 3); goto L_0C09FCA8; }  /* 0C09FD20 bra */
L_0C09FD30: BLKS(0x0C09FD30u);
	r9 = 0xC0A03F0u; UPD(0x0C09FD32u, 1);  /* 0C09FD30 mov.l @(disp,pc),Rn */
	IF(0x0C09FD32u); { u32 t_ = r9; PR = 0x0C09FD36u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09FD36u); }  /* 0C09FD32 jsr @Rn */
L_0C09FD36: BLKS(0x0C09FD36u);
	IF(0x0C09FD36u); T = (s32)r0 >= 0;  /* 0C09FD36 cmp/pz Rn */
	if (T) { UPD(0x0C09FD3Eu, 4); goto L_0C09FD3E; }  /* 0C09FD38 bt */
L_0C09FD3A: BLKS(0x0C09FD3Au);
	{ IF(0x0C09FD3Cu); ; /* slot nop */ UPD(0x0C09FE60u, 3); goto L_0C09FE60; }  /* 0C09FD3A bra */
L_0C09FD3E: BLKS(0x0C09FD3Eu);
	r5 = 0xB4u; UPD(0x0C09FD40u, 1);  /* 0C09FD3E mov.w @(disp,pc),Rn */
	IF(0x0C09FD40u); MACL = r12 * r5;  /* 0C09FD40 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09FD44u, 3);  /* 0C09FD42 mov.l @(disp,pc),Rn */
	IF(0x0C09FD44u); r10 = MACL;  /* 0C09FD44 sts macl,Rn */
	IF(0x0C09FD46u); MACL = r0 * r5;  /* 0C09FD46 mul.l Rm,Rn */
	r1 = 0xD0000u; UPD(0x0C09FD4Au, 4);  /* 0C09FD48 mov.l @(disp,pc),Rn */
	r10 += r6;  /* 0C09FD4A add Rm,Rn */
	IF(0x0C09FD4Cu); r11 = MACL;  /* 0C09FD4C sts macl,Rn */
	r11 += r6;  /* 0C09FD4E add Rm,Rn */
	r0 = R32(r11 + 0x24u); UPD(0x0C09FD52u, 4);  /* 0C09FD50 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C09FD52 add Rm,Rn */
	W32(r10 + 0x24u, r0); UPD(0x0C09FD56u, 2);  /* 0C09FD54 mov.l Rm,@(disp,Rn) */
	r13 = R32(r11 + 0x28u); UPD(0x0C09FD58u, 1);  /* 0C09FD56 mov.l @(disp,Rm),Rn */
	r0 = R32(r10 + 0xCu); UPD(0x0C09FD5Au, 1);  /* 0C09FD58 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C09FD5A tst Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x28u, r13); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09FE30u, 4); goto L_0C09FE30; } UPD(0x0C09FD60u, 1); goto L_0C09FD60; }  /* 0C09FD5C bt/s */
L_0C09FD60: BLKS(0x0C09FD60u);
	T = r0 == 0x7u;  /* 0C09FD60 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09FD80u, 4); goto L_0C09FD80; }  /* 0C09FD62 bt */
L_0C09FD64: BLKS(0x0C09FD64u);
	r0 = 0xB4u; UPD(0x0C09FD66u, 1);  /* 0C09FD64 mov.w @(disp,pc),Rn */
	IF(0x0C09FD66u); MACL = r12 * r0;  /* 0C09FD66 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C09FD6Au, 3);  /* 0C09FD68 mov.l @(disp,pc),Rn */
	IF(0x0C09FD6Au); r13 = MACL;  /* 0C09FD6A sts macl,Rn */
	r0 = 0x88u; UPD(0x0C09FD6Eu, 2);  /* 0C09FD6C mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C09FD6E add Rm,Rn */
	r9 = R32(r13 + 0xCu); UPD(0x0C09FD72u, 2);  /* 0C09FD70 mov.l @(disp,Rm),Rn */
	IF(0x0C09FD72u); r1 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C09FD74u, 1);  /* 0C09FD72 mov.w @(r0,Rm),Rn */
	r9 += r1;  /* 0C09FD74 add Rm,Rn */
	{ W32(r13 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09FCF4u, 4); goto L_0C09FCF4; }  /* 0C09FD76 bra */
L_0C09FD80: BLKS(0x0C09FD80u);
	r11 = 0xC058090u; UPD(0x0C09FD82u, 1);  /* 0C09FD80 mov.l @(disp,pc),Rn */
	r13 = 0xC057390u; UPD(0x0C09FD84u, 1);  /* 0C09FD82 mov.l @(disp,pc),Rn */
	IF(0x0C09FD84u); { u32 t_ = r11; PR = 0x0C09FD88u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C09FD88u); }  /* 0C09FD84 jsr @Rn */
L_0C09FD88: BLKS(0x0C09FD88u);
	r2 = 0x280u; UPD(0x0C09FD8Au, 1);  /* 0C09FD88 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C09FD8A exts.w Rm,Rn */
	IF(0x0C09FD8Cu); MACL = r7 * r2;  /* 0C09FD8C mul.l Rm,Rn */
	r4 = 0xC283794u; UPD(0x0C09FD90u, 4);  /* 0C09FD8E mov.l @(disp,pc),Rn */
	IF(0x0C09FD90u); r0 = MACL;  /* 0C09FD90 sts macl,Rn */
	r0 += r4;  /* 0C09FD92 add Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C09FD96u, 3);  /* 0C09FD94 mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C09FD98u, 1);  /* 0C09FD96 mov.l @(disp,Rm),Rn */
	r7 = R32(r0 + 0x14u); UPD(0x0C09FD9Au, 1);  /* 0C09FD98 mov.l @(disp,Rm),Rn */
	IF(0x0C09FD9Au); { u32 t_ = r13; PR = 0x0C09FD9Eu; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09FD9Eu); }  /* 0C09FD9A jsr @Rn */
L_0C09FD9E: BLKS(0x0C09FD9Eu);
	r8 = 0xC050D70u; UPD(0x0C09FDA0u, 1);  /* 0C09FD9E mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C09FDA0 exts.w Rm,Rn */
	r11 = R32(r10 + 0x24u); UPD(0x0C09FDA4u, 2);  /* 0C09FDA2 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09FDA4 add #imm,Rn */
	r3 = 0x40000u; UPD(0x0C09FDA8u, 2);  /* 0C09FDA6 mov.l @(disp,pc),Rn */
	r9 = 0x18000u; UPD(0x0C09FDAAu, 1);  /* 0C09FDA8 mov.l @(disp,pc),Rn */
	r11 += r3;  /* 0C09FDAA add Rm,Rn */
	IF(0x0C09FDACu); { u32 t_ = r8; PR = 0x0C09FDB0u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09FDB0u); }  /* 0C09FDAC jsr @Rn */
L_0C09FDB0: BLKS(0x0C09FDB0u);
	r0 += r9;  /* 0C09FDB0 add Rm,Rn */
	W32(r15, r0); UPD(0x0C09FDB4u, 2);  /* 0C09FDB2 mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C09FDB4 mov #imm,Rn */
	r6 = R32(r10 + 0x28u); UPD(0x0C09FDB8u, 2);  /* 0C09FDB6 mov.l @(disp,Rm),Rn */
	r5 = r11;  /* 0C09FDB8 mov Rm,Rn */
	r0 = 0xC7C17D0u; UPD(0x0C09FDBCu, 2);  /* 0C09FDBA mov.l @(disp,pc),Rn */
	r7 = r13;  /* 0C09FDBC mov Rm,Rn */
	UPD(0x0C09FDBEu, 1);
L_0C09FDBE: BLKS(0x0C09FDBEu);
	IF(0x0C09FDBEu); { u32 t_ = r0; PR = 0x0C09FDC2u; IF(0x0C09FDC0u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C09FDC2u); }  /* 0C09FDBE jsr @Rn */
L_0C09FDC2: BLKS(0x0C09FDC2u);
	r4 = R32(r10 + 0xCu); UPD(0x0C09FDC4u, 1);  /* 0C09FDC2 mov.l @(disp,Rm),Rn */
	r2 = 0xFFFFFFFFu;  /* 0C09FDC4 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09FDC8u, 2);  /* 0C09FDC6 mov.w @(disp,pc),Rn */
	r4 += 0xFFFFFFFFu;  /* 0C09FDC8 add #imm,Rn */
	IF(0x0C09FDCAu); W16(r0 + r10, r2); UPD(0x0C09FDCCu, 2);  /* 0C09FDCA mov.w Rm,@(r0,Rn) */
	r15 += 0x4u;  /* 0C09FDCC add #imm,Rn */
	{ W32(r10 + 0xCu, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09FCF4u, 4); goto L_0C09FCF4; }  /* 0C09FDCE bra */
L_0C09FE30: BLKS(0x0C09FE30u);
	r11 = 0xC0A9E40u; UPD(0x0C09FE32u, 1);  /* 0C09FE30 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C09FE32 mov Rm,Rn */
	r5 = 0x1Eu;  /* 0C09FE34 mov #imm,Rn */
	IF(0x0C09FE36u); { u32 t_ = r11; PR = 0x0C09FE3Au; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09FE3Au); }  /* 0C09FE36 jsr @Rn */
L_0C09FE3A: BLKS(0x0C09FE3Au);
	T = (r0 & r0) == 0;  /* 0C09FE3A tst Rm,Rn */
	if (T) { UPD(0x0C09FE6Cu, 4); goto L_0C09FE6C; }  /* 0C09FE3C bt */
L_0C09FE3E: BLKS(0x0C09FE3Eu);
	r0 = r10;  /* 0C09FE3E mov Rm,Rn */
	r4 = 0xA9u; UPD(0x0C09FE42u, 2);  /* 0C09FE40 mov.w @(disp,pc),Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C09FE44u, 1);  /* 0C09FE42 mov.l @(disp,pc),Rn */
	IF(0x0C09FE44u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C09FE46u, 1);  /* 0C09FE44 mov.b @(r0,Rm),Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C09FE48u, 1);  /* 0C09FE46 mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C09FE48 extu.b Rm,Rn */
	IF(0x0C09FE4Au); { u32 t_ = r9; PR = 0x0C09FE4Eu; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C09FE4Eu); }  /* 0C09FE4A jsr @Rn */
L_0C09FE4E: BLKS(0x0C09FE4Eu);
	T = (r0 & r0) == 0;  /* 0C09FE4E tst Rm,Rn */
	if (T) { UPD(0x0C09FE6Cu, 4); goto L_0C09FE6C; }  /* 0C09FE50 bt */
L_0C09FE52: BLKS(0x0C09FE52u);
	r2 = 0x1u;  /* 0C09FE52 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09FE56u, 2);  /* 0C09FE54 mov.w @(disp,pc),Rn */
	IF(0x0C09FE56u); W16(r0 + r10, r2); UPD(0x0C09FE58u, 1);  /* 0C09FE56 mov.w Rm,@(r0,Rn) */
L_0C09FE58: BLKS(0x0C09FE58u);
	{ IF(0x0C09FE5Au); ; /* slot nop */ UPD(0x0C09FD64u, 3); goto L_0C09FD64; }  /* 0C09FE58 bra */
L_0C09FE60: BLKS(0x0C09FE60u);
	r8 = 0xB4u; UPD(0x0C09FE62u, 1);  /* 0C09FE60 mov.w @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C09FE62 mov #imm,Rn */
	IF(0x0C09FE64u); MACL = r12 * r8;  /* 0C09FE64 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C09FE68u, 4);  /* 0C09FE66 mov.l @(disp,pc),Rn */
	IF(0x0C09FE68u); r0 = MACL;  /* 0C09FE68 sts macl,Rn */
	IF(0x0C09FE6Au); W32(r0 + r12, r9); UPD(0x0C09FE6Cu, 2);  /* 0C09FE6A mov.l Rm,@(r0,Rn) */
L_0C09FE6C: BLKS(0x0C09FE6Cu);
	{ IF(0x0C09FE6Eu); ; /* slot nop */ UPD(0x0C09FCC8u, 3); goto L_0C09FCC8; }  /* 0C09FE6C bra */
L_0C09FE70: BLKS(0x0C09FE70u);
	r10 = 0xC0A03F0u; UPD(0x0C09FE72u, 1);  /* 0C09FE70 mov.l @(disp,pc),Rn */
	IF(0x0C09FE72u); { u32 t_ = r10; PR = 0x0C09FE76u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09FE76u); }  /* 0C09FE72 jsr @Rn */
L_0C09FE76: BLKS(0x0C09FE76u);
	IF(0x0C09FE76u); T = (s32)r0 >= 0;  /* 0C09FE76 cmp/pz Rn */
	if (!T) { UPD(0x0C09FE60u, 4); goto L_0C09FE60; }  /* 0C09FE78 bf */
L_0C09FE7A: BLKS(0x0C09FE7Au);
	r3 = 0xB4u; UPD(0x0C09FE7Cu, 1);  /* 0C09FE7A mov.w @(disp,pc),Rn */
	IF(0x0C09FE7Cu); MACL = r12 * r3;  /* 0C09FE7C mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C09FE80u, 3);  /* 0C09FE7E mov.l @(disp,pc),Rn */
	IF(0x0C09FE80u); r10 = MACL;  /* 0C09FE80 sts macl,Rn */
	IF(0x0C09FE82u); MACL = r0 * r3;  /* 0C09FE82 mul.l Rm,Rn */
	r1 = 0xD0000u; UPD(0x0C09FE86u, 4);  /* 0C09FE84 mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C09FE86 add Rm,Rn */
	IF(0x0C09FE88u); r5 = MACL;  /* 0C09FE88 sts macl,Rn */
	r5 += r8;  /* 0C09FE8A add Rm,Rn */
	r9 = R32(r5 + 0x24u); UPD(0x0C09FE8Eu, 4);  /* 0C09FE8C mov.l @(disp,Rm),Rn */
	r6 = R32(r5 + 0x28u); UPD(0x0C09FE90u, 1);  /* 0C09FE8E mov.l @(disp,Rm),Rn */
	r9 += r1;  /* 0C09FE90 add Rm,Rn */
	r0 = R32(r10 + 0xCu); UPD(0x0C09FE94u, 2);  /* 0C09FE92 mov.l @(disp,Rm),Rn */
	W32(r10 + 0x24u, r9); UPD(0x0C09FE96u, 1);  /* 0C09FE94 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C09FE96 tst Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09FE30u, 4); goto L_0C09FE30; } UPD(0x0C09FE9Cu, 1); goto L_0C09FE9C; }  /* 0C09FE98 bt/s */
L_0C09FE9C: BLKS(0x0C09FE9Cu);
	T = r0 == 0x7u;  /* 0C09FE9C cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C09FE58u, 4); goto L_0C09FE58; }  /* 0C09FE9E bf */
L_0C09FEA0: BLKS(0x0C09FEA0u);
	r11 = 0xC058090u; UPD(0x0C09FEA2u, 1);  /* 0C09FEA0 mov.l @(disp,pc),Rn */
	r13 = 0xC057390u; UPD(0x0C09FEA4u, 1);  /* 0C09FEA2 mov.l @(disp,pc),Rn */
	IF(0x0C09FEA4u); { u32 t_ = r11; PR = 0x0C09FEA8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C09FEA8u); }  /* 0C09FEA4 jsr @Rn */
L_0C09FEA8: BLKS(0x0C09FEA8u);
	r2 = 0x280u; UPD(0x0C09FEAAu, 1);  /* 0C09FEA8 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C09FEAA exts.w Rm,Rn */
	IF(0x0C09FEACu); MACL = r7 * r2;  /* 0C09FEAC mul.l Rm,Rn */
	r4 = 0xC283794u; UPD(0x0C09FEB0u, 4);  /* 0C09FEAE mov.l @(disp,pc),Rn */
	IF(0x0C09FEB0u); r3 = MACL;  /* 0C09FEB0 sts macl,Rn */
	r3 += r4;  /* 0C09FEB2 add Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C09FEB6u, 3);  /* 0C09FEB4 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C09FEB8u, 1);  /* 0C09FEB6 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x14u); UPD(0x0C09FEBAu, 1);  /* 0C09FEB8 mov.l @(disp,Rm),Rn */
	IF(0x0C09FEBAu); { u32 t_ = r13; PR = 0x0C09FEBEu; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09FEBEu); }  /* 0C09FEBA jsr @Rn */
L_0C09FEBE: BLKS(0x0C09FEBEu);
	r13 = (u32)(s32)(s16)r0;  /* 0C09FEBE exts.w Rm,Rn */
	r8 = 0xC050D70u; UPD(0x0C09FEC2u, 2);  /* 0C09FEC0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09FEC2 add #imm,Rn */
	r11 = R32(r10 + 0x24u); UPD(0x0C09FEC6u, 2);  /* 0C09FEC4 mov.l @(disp,Rm),Rn */
	r0 = 0x40000u; UPD(0x0C09FEC8u, 1);  /* 0C09FEC6 mov.l @(disp,pc),Rn */
	r9 = 0x18000u; UPD(0x0C09FECAu, 1);  /* 0C09FEC8 mov.l @(disp,pc),Rn */
	r11 += r0;  /* 0C09FECA add Rm,Rn */
	IF(0x0C09FECCu); { u32 t_ = r8; PR = 0x0C09FED0u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09FED0u); }  /* 0C09FECC jsr @Rn */
L_0C09FED0: BLKS(0x0C09FED0u);
	r0 += r9;  /* 0C09FED0 add Rm,Rn */
	W32(r15, r0); UPD(0x0C09FED4u, 2);  /* 0C09FED2 mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C09FED4 mov #imm,Rn */
	r6 = R32(r10 + 0x28u); UPD(0x0C09FED8u, 2);  /* 0C09FED6 mov.l @(disp,Rm),Rn */
	r5 = r11;  /* 0C09FED8 mov Rm,Rn */
	r0 = 0xC7C16BCu; UPD(0x0C09FEDCu, 2);  /* 0C09FEDA mov.l @(disp,pc),Rn */
	{ r7 = r13; /* slot mov Rm,Rn */ UPD(0x0C09FDBEu, 3); goto L_0C09FDBE; }  /* 0C09FEDC bra */
L_0C09FEE0: BLKS(0x0C09FEE0u);
	r10 = 0xC0A03F0u; UPD(0x0C09FEE2u, 1);  /* 0C09FEE0 mov.l @(disp,pc),Rn */
	IF(0x0C09FEE2u); { u32 t_ = r10; PR = 0x0C09FEE6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09FEE6u); }  /* 0C09FEE2 jsr @Rn */
L_0C09FEE6: BLKS(0x0C09FEE6u);
	IF(0x0C09FEE6u); T = (s32)r0 >= 0;  /* 0C09FEE6 cmp/pz Rn */
	if (!T) { UPD(0x0C09FE60u, 4); goto L_0C09FE60; }  /* 0C09FEE8 bf */
L_0C09FEEA: BLKS(0x0C09FEEAu);
	r13 = 0xB4u; UPD(0x0C09FEECu, 1);  /* 0C09FEEA mov.w @(disp,pc),Rn */
	IF(0x0C09FEECu); MACL = r12 * r13;  /* 0C09FEEC mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C09FEF0u, 3);  /* 0C09FEEE mov.l @(disp,pc),Rn */
	IF(0x0C09FEF0u); r10 = MACL;  /* 0C09FEF0 sts macl,Rn */
	IF(0x0C09FEF2u); MACL = r0 * r13;  /* 0C09FEF2 mul.l Rm,Rn */
	r1 = 0xD0000u; UPD(0x0C09FEF6u, 4);  /* 0C09FEF4 mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C09FEF6 add Rm,Rn */
	IF(0x0C09FEF8u); r5 = MACL;  /* 0C09FEF8 sts macl,Rn */
	r5 += r8;  /* 0C09FEFA add Rm,Rn */
	r9 = R32(r5 + 0x24u); UPD(0x0C09FEFEu, 4);  /* 0C09FEFC mov.l @(disp,Rm),Rn */
	r6 = R32(r5 + 0x28u); UPD(0x0C09FF00u, 1);  /* 0C09FEFE mov.l @(disp,Rm),Rn */
	r9 += r1;  /* 0C09FF00 add Rm,Rn */
	r0 = R32(r10 + 0xCu); UPD(0x0C09FF04u, 2);  /* 0C09FF02 mov.l @(disp,Rm),Rn */
	W32(r10 + 0x24u, r9); UPD(0x0C09FF06u, 1);  /* 0C09FF04 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C09FF06 tst Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09FE30u, 4); goto L_0C09FE30; } UPD(0x0C09FF0Cu, 1); goto L_0C09FF0C; }  /* 0C09FF08 bt/s */
L_0C09FF0C: BLKS(0x0C09FF0Cu);
	T = r0 == 0x7u;  /* 0C09FF0C cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C09FE58u, 4); goto L_0C09FE58; }  /* 0C09FF0E bf */
L_0C09FF10: BLKS(0x0C09FF10u);
	r11 = 0xC058090u; UPD(0x0C09FF12u, 1);  /* 0C09FF10 mov.l @(disp,pc),Rn */
	r13 = 0xC057390u; UPD(0x0C09FF14u, 1);  /* 0C09FF12 mov.l @(disp,pc),Rn */
	IF(0x0C09FF14u); { u32 t_ = r11; PR = 0x0C09FF18u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C09FF18u); }  /* 0C09FF14 jsr @Rn */
L_0C09FF18: BLKS(0x0C09FF18u);
	r6 = 0x280u; UPD(0x0C09FF1Au, 1);  /* 0C09FF18 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r0;  /* 0C09FF1A exts.w Rm,Rn */
	IF(0x0C09FF1Cu); MACL = r5 * r6;  /* 0C09FF1C mul.l Rm,Rn */
	r7 = 0xC283794u; UPD(0x0C09FF20u, 4);  /* 0C09FF1E mov.l @(disp,pc),Rn */
	IF(0x0C09FF20u); r3 = MACL;  /* 0C09FF20 sts macl,Rn */
	r3 += r7;  /* 0C09FF22 add Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C09FF26u, 3);  /* 0C09FF24 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C09FF28u, 1);  /* 0C09FF26 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x14u); UPD(0x0C09FF2Au, 1);  /* 0C09FF28 mov.l @(disp,Rm),Rn */
	IF(0x0C09FF2Au); { u32 t_ = r13; PR = 0x0C09FF2Eu; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09FF2Eu); }  /* 0C09FF2A jsr @Rn */
L_0C09FF2E: BLKS(0x0C09FF2Eu);
	r13 = (u32)(s32)(s16)r0;  /* 0C09FF2E exts.w Rm,Rn */
	r8 = 0xC050D70u; UPD(0x0C09FF32u, 2);  /* 0C09FF30 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09FF32 add #imm,Rn */
	r11 = R32(r10 + 0x24u); UPD(0x0C09FF36u, 2);  /* 0C09FF34 mov.l @(disp,Rm),Rn */
	r0 = 0x40000u; UPD(0x0C09FF38u, 1);  /* 0C09FF36 mov.l @(disp,pc),Rn */
	r9 = 0x18000u; UPD(0x0C09FF3Au, 1);  /* 0C09FF38 mov.l @(disp,pc),Rn */
	r11 += r0;  /* 0C09FF3A add Rm,Rn */
	IF(0x0C09FF3Cu); { u32 t_ = r8; PR = 0x0C09FF40u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09FF40u); }  /* 0C09FF3C jsr @Rn */
L_0C09FF40: BLKS(0x0C09FF40u);
	r0 += r9;  /* 0C09FF40 add Rm,Rn */
	W32(r15, r0); UPD(0x0C09FF44u, 2);  /* 0C09FF42 mov.l Rm,@Rn */
	r4 = 0x3u;  /* 0C09FF44 mov #imm,Rn */
	r6 = R32(r10 + 0x28u); UPD(0x0C09FF48u, 2);  /* 0C09FF46 mov.l @(disp,Rm),Rn */
	r5 = r11;  /* 0C09FF48 mov Rm,Rn */
	r0 = 0xC061D80u; UPD(0x0C09FF4Cu, 2);  /* 0C09FF4A mov.l @(disp,pc),Rn */
	{ r7 = r13; /* slot mov Rm,Rn */ UPD(0x0C09FDBEu, 3); goto L_0C09FDBE; }  /* 0C09FF4C bra */
L_0C09FF50: BLKS(0x0C09FF50u);
	r10 = 0xC0A03F0u; UPD(0x0C09FF52u, 1);  /* 0C09FF50 mov.l @(disp,pc),Rn */
	IF(0x0C09FF52u); { u32 t_ = r10; PR = 0x0C09FF56u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09FF56u); }  /* 0C09FF52 jsr @Rn */
L_0C09FF56: BLKS(0x0C09FF56u);
	IF(0x0C09FF56u); T = (s32)r0 >= 0;  /* 0C09FF56 cmp/pz Rn */
	if (T) { UPD(0x0C09FF5Eu, 4); goto L_0C09FF5E; }  /* 0C09FF58 bt */
L_0C09FF5A: BLKS(0x0C09FF5Au);
	{ IF(0x0C09FF5Cu); ; /* slot nop */ UPD(0x0C09FE60u, 3); goto L_0C09FE60; }  /* 0C09FF5A bra */
L_0C09FF5E: BLKS(0x0C09FF5Eu);
	r3 = 0xB4u; UPD(0x0C09FF60u, 1);  /* 0C09FF5E mov.w @(disp,pc),Rn */
	IF(0x0C09FF60u); MACL = r12 * r3;  /* 0C09FF60 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09FF64u, 3);  /* 0C09FF62 mov.l @(disp,pc),Rn */
	IF(0x0C09FF64u); r13 = MACL;  /* 0C09FF64 sts macl,Rn */
	IF(0x0C09FF66u); MACL = r0 * r3;  /* 0C09FF66 mul.l Rm,Rn */
	r13 += r6;  /* 0C09FF68 add Rm,Rn */
	r7 = 0xD0000u; UPD(0x0C09FF6Cu, 5);  /* 0C09FF6A mov.l @(disp,pc),Rn */
	IF(0x0C09FF6Cu); r3 = MACL;  /* 0C09FF6C sts macl,Rn */
	r3 += r6;  /* 0C09FF6E add Rm,Rn */
	r0 = R32(r3 + 0x28u); UPD(0x0C09FF72u, 3);  /* 0C09FF70 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x24u); UPD(0x0C09FF74u, 1);  /* 0C09FF72 mov.l @(disp,Rm),Rn */
	W32(r13 + 0x28u, r0); UPD(0x0C09FF76u, 1);  /* 0C09FF74 mov.l Rm,@(disp,Rn) */
	r2 += r7;  /* 0C09FF76 add Rm,Rn */
	r0 = R32(r13 + 0xCu); UPD(0x0C09FF7Au, 2);  /* 0C09FF78 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C09FF7A tst Rm,Rn */
	{ u32 c_ = T; W32(r13 + 0x24u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A0010u, 4); goto L_0C0A0010; } UPD(0x0C09FF80u, 1); goto L_0C09FF80; }  /* 0C09FF7C bt/s */
L_0C09FF80: BLKS(0x0C09FF80u);
	T = r0 == 0x7u;  /* 0C09FF80 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0A0038u, 4); goto L_0C0A0038; }  /* 0C09FF82 bf */
L_0C09FF84: BLKS(0x0C09FF84u);
	r15 += 0xFFFFFFFCu;  /* 0C09FF84 add #imm,Rn */
	r11 = 0x88u; UPD(0x0C09FF88u, 2);  /* 0C09FF86 mov.w @(disp,pc),Rn */
	r3 += r11;  /* 0C09FF88 add Rm,Rn */
	r0 = 0xC050D70u; UPD(0x0C09FF8Cu, 2);  /* 0C09FF8A mov.l @(disp,pc),Rn */
	r3 += 0x2u;  /* 0C09FF8C add #imm,Rn */
	r8 = 0x18000u; UPD(0x0C09FF90u, 2);  /* 0C09FF8E mov.l @(disp,pc),Rn */
	r9 = 0x40000u; UPD(0x0C09FF92u, 1);  /* 0C09FF90 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C09FF92 mov Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r3); UPD(0x0C09FF96u, 2);  /* 0C09FF94 mov.w @Rm,Rn */
	IF(0x0C09FF96u); { u32 t_ = r0; PR = 0x0C09FF9Au; r9 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09FF9Au); }  /* 0C09FF96 jsr @Rn */
L_0C09FF9A: BLKS(0x0C09FF9Au);
	r7 = r10;  /* 0C09FF9A mov Rm,Rn */
	r0 += r8;  /* 0C09FF9C add Rm,Rn */
	r10 = 0xC7C17D0u; UPD(0x0C09FFA0u, 3);  /* 0C09FF9E mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C09FFA0 mov #imm,Rn */
	W32(r15, r0); UPD(0x0C09FFA4u, 2);  /* 0C09FFA2 mov.l Rm,@Rn */
	r5 = r9;  /* 0C09FFA4 mov Rm,Rn */
	IF(0x0C09FFA6u); { u32 t_ = r10; PR = 0x0C09FFAAu; r6 = R32(r13 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C7C17D0, 0x0C7C17D0u, 0x0C09FFAAu); }  /* 0C09FFA6 jsr @Rn */
L_0C09FFAA: BLKS(0x0C09FFAAu);
	r4 = r12;  /* 0C09FFAA mov Rm,Rn */
	r6 = R32(r13 + 0xCu); UPD(0x0C09FFAEu, 2);  /* 0C09FFAC mov.l @(disp,Rm),Rn */
	r3 = 0xFFFFFFFFu;  /* 0C09FFAE mov #imm,Rn */
	r12 = 0xC0A0380u; UPD(0x0C09FFB2u, 2);  /* 0C09FFB0 mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C09FFB2 mov Rm,Rn */
	r6 += 0xFFFFFFFFu;  /* 0C09FFB4 add #imm,Rn */
	IF(0x0C09FFB6u); W16(r0 + r11, r3); UPD(0x0C09FFB8u, 3);  /* 0C09FFB6 mov.w Rm,@(r0,Rn) */
	r15 += 0x4u;  /* 0C09FFB8 add #imm,Rn */
	IF(0x0C09FFBAu); { u32 t_ = r12; PR = 0x0C09FFBEu; W32(r13 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09FFBEu); }  /* 0C09FFBA jsr @Rn */
L_0C09FFBE: BLKS(0x0C09FFBEu);
	{ IF(0x0C09FFC0u); ; /* slot nop */ UPD(0x0C09FCC8u, 3); goto L_0C09FCC8; }  /* 0C09FFBE bra */
L_0C0A0010: BLKS(0x0C0A0010u);
	r11 = 0xC0A9E40u; UPD(0x0C0A0012u, 1);  /* 0C0A0010 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0A0012 mov Rm,Rn */
	r5 = 0x1Eu;  /* 0C0A0014 mov #imm,Rn */
	IF(0x0C0A0016u); { u32 t_ = r11; PR = 0x0C0A001Au; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0A001Au); }  /* 0C0A0016 jsr @Rn */
L_0C0A001A: BLKS(0x0C0A001Au);
	T = (r0 & r0) == 0;  /* 0C0A001A tst Rm,Rn */
	if (T) { UPD(0x0C09FFBEu, 4); goto L_0C09FFBE; }  /* 0C0A001C bt */
L_0C0A001E: BLKS(0x0C0A001Eu);
	r0 = r13;  /* 0C0A001E mov Rm,Rn */
	r4 = 0xA9u; UPD(0x0C0A0022u, 2);  /* 0C0A0020 mov.w @(disp,pc),Rn */
	IF(0x0C0A0022u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0A0024u, 1);  /* 0C0A0022 mov.b @(r0,Rm),Rn */
	r10 = 0xC0A9BB0u; UPD(0x0C0A0026u, 1);  /* 0C0A0024 mov.l @(disp,pc),Rn */
	r6 = r5 & 0xFF;  /* 0C0A0026 extu.b Rm,Rn */
	r4 = R32(r13 + 0x24u); UPD(0x0C0A002Au, 2);  /* 0C0A0028 mov.l @(disp,Rm),Rn */
	IF(0x0C0A002Au); { u32 t_ = r10; PR = 0x0C0A002Eu; r5 = R32(r13 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0A002Eu); }  /* 0C0A002A jsr @Rn */
L_0C0A002E: BLKS(0x0C0A002Eu);
	T = (r0 & r0) == 0;  /* 0C0A002E tst Rm,Rn */
	if (T) { UPD(0x0C09FFBEu, 4); goto L_0C09FFBE; }  /* 0C0A0030 bt */
L_0C0A0032: BLKS(0x0C0A0032u);
	r2 = 0x1u;  /* 0C0A0032 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0A0036u, 2);  /* 0C0A0034 mov.w @(disp,pc),Rn */
	IF(0x0C0A0036u); W16(r0 + r13, r2); UPD(0x0C0A0038u, 1);  /* 0C0A0036 mov.w Rm,@(r0,Rn) */
L_0C0A0038: BLKS(0x0C0A0038u);
	{ IF(0x0C0A003Au); ; /* slot nop */ UPD(0x0C09FD64u, 3); goto L_0C09FD64; }  /* 0C0A0038 bra */
}

/* FUN_0c0a0050 */
void f_0C0A0050(sh3_t *c)
{
	LOCALS;
L_0C0A0050: BLKS(0x0C0A0050u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0052u, 1);  /* 0C0A0050 mov.l Rm,@-Rn */
	r6 = 0x4Cu;  /* 0C0A0052 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0056u, 2);  /* 0C0A0054 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0058u, 1);  /* 0C0A0056 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A005Au, 1);  /* 0C0A0058 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A005Cu, 1);  /* 0C0A005A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A005Eu, 1);  /* 0C0A005C mov.l Rm,@-Rn */
	r4 = 0xC286509u; UPD(0x0C0A0060u, 1);  /* 0C0A005E mov.l @(disp,pc),Rn */
	IF(0x0C0A0060u); r15 -= 4; W32(r15, PR); UPD(0x0C0A0062u, 1);  /* 0C0A0060 sts.l pr,@-Rn */
	r12 = (u32)(s32)(s8)R8(r4); UPD(0x0C0A0064u, 1);  /* 0C0A0062 mov.b @Rm,Rn */
	IF(0x0C0A0064u); MACL = r12 * r6;  /* 0C0A0064 mul.l Rm,Rn */
	r7 = 0xC26CAE0u; UPD(0x0C0A0068u, 3);  /* 0C0A0066 mov.l @(disp,pc),Rn */
	IF(0x0C0A0068u); r6 = MACL;  /* 0C0A0068 sts macl,Rn */
	r8 = 0xC21F5E2u; UPD(0x0C0A006Cu, 2);  /* 0C0A006A mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C0A006C add Rm,Rn */
	r7 = R32(r6 + 0x8u); UPD(0x0C0A0070u, 2);  /* 0C0A006E mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C0A0072u, 1);  /* 0C0A0070 mov.w @Rm,Rn */
	r2 = (r7 >> 16) | (r7 << 16);  /* 0C0A0072 swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0A0074 exts.w Rm,Rn */
	r11 = r4;  /* 0C0A0076 mov Rm,Rn */
	r11 -= r0;  /* 0C0A0078 sub Rm,Rn */
	r9 = 0x14Eu; UPD(0x0C0A007Cu, 5);  /* 0C0A007A mov.w @(disp,pc),Rn */
	r5 = r11;  /* 0C0A007C mov Rm,Rn */
	r5 += 0x7u;  /* 0C0A007E add #imm,Rn */
	r10 = 0xC392D5Eu; UPD(0x0C0A0082u, 3);  /* 0C0A0080 mov.l @(disp,pc),Rn */
	T = r9 >= r5;  /* 0C0A0082 cmp/hs Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A0086u, 2);  /* 0C0A0084 mov.w @Rm,Rn */
	IF(0x0C0A0086u); r0 = T;  /* 0C0A0086 movt Rn */
	r3 = 0xFFFFFEA7u; UPD(0x0C0A008Au, 2);  /* 0C0A0088 mov.w @(disp,pc),Rn */
	r3 += r5;  /* 0C0A008A add Rm,Rn */
	r8 = r3 & 0xFFFF;  /* 0C0A008C extu.w Rm,Rn */
	T = r9 >= r8;  /* 0C0A008E cmp/hs Rm,Rn */
	IF(0x0C0A0090u); r2 = T;  /* 0C0A0090 movt Rn */
	r0 &= r2;  /* 0C0A0092 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A0094 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A00B0u, 9); goto L_0C0A00B0; } goto L_0C0A009A; }  /* 0C0A0096 bt/s */
L_0C0A009A: BLKS(0x0C0A009Au);
	r6 += 0x42u;  /* 0C0A009A add #imm,Rn */
	r9 = 0xC0A9D50u; UPD(0x0C0A009Eu, 3);  /* 0C0A009C mov.l @(disp,pc),Rn */
	IF(0x0C0A009Eu); r4 <<= 16;  /* 0C0A009E shll16 Rn */
	r1 = (u32)(s32)(s8)R8(r6); UPD(0x0C0A00A2u, 2);  /* 0C0A00A0 mov.b @Rm,Rn */
	r4 -= r7;  /* 0C0A00A2 sub Rm,Rn */
	IF(0x0C0A00A4u); r5 <<= 16;  /* 0C0A00A4 shll16 Rn */
	IF(0x0C0A00A6u); { u32 t_ = r9; PR = 0x0C0A00AAu; r6 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9D50, 0x0C0A9D50u, 0x0C0A00AAu); }  /* 0C0A00A6 jsr @Rn */
L_0C0A00AA: BLKS(0x0C0A00AAu);
	T = (r0 & r0) == 0;  /* 0C0A00AA tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A00C2u, 4); goto L_0C0A00C2; } UPD(0x0C0A00B0u, 1); goto L_0C0A00B0; }  /* 0C0A00AC bt/s */
L_0C0A00B0: BLKS(0x0C0A00B0u);
	r9 = 0xC22C874u; UPD(0x0C0A00B2u, 1);  /* 0C0A00B0 mov.l @(disp,pc),Rn */
	r10 = 0xC057A50u; UPD(0x0C0A00B4u, 1);  /* 0C0A00B2 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C0A00B6u, 1);  /* 0C0A00B4 mov.w @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0A00B8u, 1);  /* 0C0A00B6 mov.l @(disp,pc),Rn */
	IF(0x0C0A00B8u); { u32 t_ = r10; PR = 0x0C0A00BCu; r4 = r3 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C0A00BCu); }  /* 0C0A00B8 jsr @Rn */
L_0C0A00BC: BLKS(0x0C0A00BCu);
	T = (r0 & r0) == 0;  /* 0C0A00BC tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A00E0u, 4); goto L_0C0A00E0; } UPD(0x0C0A00C2u, 1); goto L_0C0A00C2; }  /* 0C0A00BE bf/s */
L_0C0A00C2: BLKS(0x0C0A00C2u);
	r15 = r14;  /* 0C0A00C2 mov Rm,Rn */
	IF(0x0C0A00C4u); PR = R32(r15); r15 += 4; UPD(0x0C0A00C6u, 2);  /* 0C0A00C4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A00C8u, 1);  /* 0C0A00C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A00CAu, 1);  /* 0C0A00C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A00CCu, 1);  /* 0C0A00CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A00CEu, 1);  /* 0C0A00CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A00D0u, 1);  /* 0C0A00CE mov.l @Rm+,Rn */
	IF(0x0C0A00D0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A00D0 rts */
L_0C0A00E0: BLKS(0x0C0A00E0u);
	r11 = 0xC0606C0u; UPD(0x0C0A00E2u, 1);  /* 0C0A00E0 mov.l @(disp,pc),Rn */
	IF(0x0C0A00E2u); { u32 t_ = r11; PR = 0x0C0A00E6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0A00E6u); }  /* 0C0A00E2 jsr @Rn */
L_0C0A00E6: BLKS(0x0C0A00E6u);
	T = (r0 & r0) == 0;  /* 0C0A00E6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A00C2u, 4); goto L_0C0A00C2; } goto L_0C0A00EC; }  /* 0C0A00E8 bt/s */
L_0C0A00EC: BLKS(0x0C0A00ECu);
	r3 = 0xC2755BCu; UPD(0x0C0A00EEu, 2);  /* 0C0A00EC mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C0A00F0u, 1);  /* 0C0A00EE mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A00F2u, 1);  /* 0C0A00F0 mov.w @Rm,Rn */
	IF(0x0C0A00F2u); MACL = r11 * r8;  /* 0C0A00F2 mul.l Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r9); UPD(0x0C0A00F6u, 3);  /* 0C0A00F4 mov.w @Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0A00F8u, 1);  /* 0C0A00F6 mov.l @(disp,pc),Rn */
	IF(0x0C0A00F8u); r8 = MACL;  /* 0C0A00F8 sts macl,Rn */
	r8 += r6;  /* 0C0A00FA add Rm,Rn */
	r0 = r2 & 0xFFFF;  /* 0C0A00FC extu.w Rm,Rn */
	r5 = 0xC28629Eu; UPD(0x0C0A0100u, 4);  /* 0C0A00FE mov.l @(disp,pc),Rn */
	r9 = 0x4Cu;  /* 0C0A0100 mov #imm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C0A0104u, 2);  /* 0C0A0102 mov.l Rm,@(disp,Rn) */
	r10 = (u32)(s32)(s16)R16(r5); UPD(0x0C0A0106u, 1);  /* 0C0A0104 mov.w @Rm,Rn */
	r0 = r8;  /* 0C0A0106 mov Rm,Rn */
	r4 = 0x8Au; UPD(0x0C0A010Au, 2);  /* 0C0A0108 mov.w @(disp,pc),Rn */
	IF(0x0C0A010Au); W16(r0 + r4, r10); UPD(0x0C0A010Cu, 1);  /* 0C0A010A mov.w Rm,@(r0,Rn) */
	r4 += 0xFFFFFFFCu;  /* 0C0A010C add #imm,Rn */
	IF(0x0C0A010Eu); W16(r0 + r4, r10); UPD(0x0C0A0110u, 2);  /* 0C0A010E mov.w Rm,@(r0,Rn) */
	r0 = r10;  /* 0C0A0110 mov Rm,Rn */
	r0 += 0x8u;  /* 0C0A0112 add #imm,Rn */
	r3 = 0xC0A02D0u; UPD(0x0C0A0116u, 3);  /* 0C0A0114 mov.l @(disp,pc),Rn */
	IF(0x0C0A0116u); r0 >>= 2;  /* 0C0A0116 shlr2 Rn */
	r7 = 0xC1000014u; UPD(0x0C0A011Au, 2);  /* 0C0A0118 mov.l @(disp,pc),Rn */
	IF(0x0C0A011Au); r0 >>= 2;  /* 0C0A011A shlr2 Rn */
	r10 = 0x0u;  /* 0C0A011C mov #imm,Rn */
	r0 &= 0x1Fu;  /* 0C0A011E and #imm,r0 */
	W32(r8, r7); UPD(0x0C0A0122u, 4);  /* 0C0A0120 mov.l Rm,@Rn */
	r4 = r11;  /* 0C0A0122 mov Rm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0A0126u, 2);  /* 0C0A0124 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A0126u); { u32 t_ = r3; PR = 0x0C0A012Au; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A012Au); }  /* 0C0A0126 jsr @Rn */
L_0C0A012A: BLKS(0x0C0A012Au);
	IF(0x0C0A012Au); MACL = r12 * r9;  /* 0C0A012A mul.l Rm,Rn */
	r6 = 0xC21F5E2u; UPD(0x0C0A012Eu, 3);  /* 0C0A012C mov.l @(disp,pc),Rn */
	r7 = 0xC26CAE0u; UPD(0x0C0A0130u, 1);  /* 0C0A012E mov.l @(disp,pc),Rn */
	IF(0x0C0A0130u); r9 = MACL;  /* 0C0A0130 sts macl,Rn */
	r5 = 0xC392D5Eu; UPD(0x0C0A0134u, 2);  /* 0C0A0132 mov.l @(disp,pc),Rn */
	r9 += r7;  /* 0C0A0134 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A0138u, 2);  /* 0C0A0136 mov.w @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C0A013Au, 1);  /* 0C0A0138 mov.w @Rm,Rn */
	IF(0x0C0A013Au); r0 <<= 16;  /* 0C0A013A shll16 Rn */
	r2 = R32(r9 + 0x8u); UPD(0x0C0A013Eu, 2);  /* 0C0A013C mov.l @(disp,Rm),Rn */
	IF(0x0C0A013Eu); r4 <<= 16;  /* 0C0A013E shll16 Rn */
	r3 = 0xC0A1530u; UPD(0x0C0A0142u, 2);  /* 0C0A0140 mov.l @(disp,pc),Rn */
	r0 -= r2;  /* 0C0A0142 sub Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C0A0146u, 2);  /* 0C0A0144 mov.l Rm,@(disp,Rn) */
	r9 += 0x42u;  /* 0C0A0146 add #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0A014Au, 2);  /* 0C0A0148 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A014Au); { u32 t_ = r3; PR = 0x0C0A014Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A014Eu); }  /* 0C0A014A jsr @Rn */
L_0C0A014E: BLKS(0x0C0A014Eu);
	r0 = 0xB0u; UPD(0x0C0A0150u, 1);  /* 0C0A014E mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C0A0150 mov Rm,Rn */
	IF(0x0C0A0152u); W8(r0 + r8, r12); UPD(0x0C0A0154u, 2);  /* 0C0A0152 mov.b Rm,@(r0,Rn) */
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A0156u, 1);  /* 0C0A0154 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0A0156 add #imm,Rn */
	IF(0x0C0A0158u); W8(r0 + r8, r6); UPD(0x0C0A015Au, 2);  /* 0C0A0158 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0A015A add #imm,Rn */
	IF(0x0C0A015Cu); W8(r0 + r8, r6); UPD(0x0C0A015Eu, 2);  /* 0C0A015C mov.b Rm,@(r0,Rn) */
	r7 = 0xC27DC20u; UPD(0x0C0A0160u, 1);  /* 0C0A015E mov.l @(disp,pc),Rn */
	r2 = 0xC0A1780u; UPD(0x0C0A0162u, 1);  /* 0C0A0160 mov.l @(disp,pc),Rn */
	IF(0x0C0A0162u); { u32 t_ = r2; PR = 0x0C0A0166u; r5 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C0A0166u); }  /* 0C0A0162 jsr @Rn */
L_0C0A0166: BLKS(0x0C0A0166u);
	r12 = 0x8Cu; UPD(0x0C0A0168u, 1);  /* 0C0A0166 mov.w @(disp,pc),Rn */
	r5 = 0x94u; UPD(0x0C0A016Au, 1);  /* 0C0A0168 mov.w @(disp,pc),Rn */
	r12 += r8;  /* 0C0A016A add Rm,Rn */
	r0 = 0x90u; UPD(0x0C0A016Eu, 2);  /* 0C0A016C mov.w @(disp,pc),Rn */
	r5 += r8;  /* 0C0A016E add Rm,Rn */
	r0 += r8;  /* 0C0A0170 add Rm,Rn */
	r8 += 0x50u;  /* 0C0A0172 add #imm,Rn */
	W32(r0, r10); UPD(0x0C0A0176u, 4);  /* 0C0A0174 mov.l Rm,@Rn */
	W32(r8, r10); UPD(0x0C0A0178u, 1);  /* 0C0A0176 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0A0178 mov #imm,Rn */
	W32(r5, r10); UPD(0x0C0A017Cu, 2);  /* 0C0A017A mov.l Rm,@Rn */
	{ W32(r12, r10); /* slot mov.l Rm,@Rn */ UPD(0x0C0A00C2u, 3); goto L_0C0A00C2; }  /* 0C0A017C bra */
}

/* FUN_0c0a01e0 */
void f_0C0A01E0(sh3_t *c)
{
	LOCALS;
L_0C0A01E0: BLKS(0x0C0A01E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A01E2u, 1);  /* 0C0A01E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A01E4u, 1);  /* 0C0A01E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A01E6u, 1);  /* 0C0A01E4 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A01E8u, 1);  /* 0C0A01E6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C0A01E8 exts.b Rm,Rn */
	IF(0x0C0A01EAu); r15 -= 4; W32(r15, PR); UPD(0x0C0A01ECu, 2);  /* 0C0A01EA sts.l pr,@-Rn */
	T = (r10 & r10) == 0;  /* 0C0A01EC tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A0226u, 4); goto L_0C0A0226; } goto L_0C0A01F2; }  /* 0C0A01EE bt/s */
L_0C0A01F2: BLKS(0x0C0A01F2u);
	r9 = 0x0u;  /* 0C0A01F2 mov #imm,Rn */
	r8 = 0x0u;  /* 0C0A01F4 mov #imm,Rn */
	IF(0x0C0A01F6u); ;  /* 0C0A01F6 nop */
	UPD(0x0C0A01F8u, 4);
L_0C0A01F8: BLKS(0x0C0A01F8u);
	r1 = 0xC26CD40u; UPD(0x0C0A01FAu, 1);  /* 0C0A01F8 mov.l @(disp,pc),Rn */
	r1 += r8;  /* 0C0A01FA add Rm,Rn */
	r0 = R32(r1); UPD(0x0C0A01FEu, 2);  /* 0C0A01FC mov.l @Rm,Rn */
	r0 &= 0x4u;  /* 0C0A01FE and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A0200 tst Rm,Rn */
	{ u32 c_ = T; r4 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A0218u, 5); goto L_0C0A0218; } goto L_0C0A0206; }  /* 0C0A0202 bt/s */
L_0C0A0206: BLKS(0x0C0A0206u);
	r3 = 0xACu; UPD(0x0C0A0208u, 2);  /* 0C0A0206 mov.w @(disp,pc),Rn */
	r3 += r1;  /* 0C0A0208 add Rm,Rn */
	r3 += 0x1u;  /* 0C0A020A add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0A020Eu, 3);  /* 0C0A020C mov.b @Rm,Rn */
	r2 = r0 & 0xFF;  /* 0C0A020E extu.b Rm,Rn */
	T = r2 == r10;  /* 0C0A0210 cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A0240u, 5); goto L_0C0A0240; } goto L_0C0A0216; }  /* 0C0A0212 bt/s */
L_0C0A0216: BLKS(0x0C0A0216u);
	r4 = r9;  /* 0C0A0216 mov Rm,Rn */
	UPD(0x0C0A0218u, 2);
L_0C0A0218: BLKS(0x0C0A0218u);
	r9 = 0xB4u; UPD(0x0C0A021Au, 1);  /* 0C0A0218 mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0A021A add #imm,Rn */
	r8 += r9;  /* 0C0A021C add Rm,Rn */
	r0 = 0xBFu; UPD(0x0C0A0220u, 3);  /* 0C0A021E mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0A0220 exts.w Rm,Rn */
	T = (s32)r9 > (s32)r0;  /* 0C0A0222 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A01F8u, 5); goto L_0C0A01F8; }  /* 0C0A0224 bf */
L_0C0A0226: BLKS(0x0C0A0226u);
	r15 = r14;  /* 0C0A0226 mov Rm,Rn */
	IF(0x0C0A0228u); PR = R32(r15); r15 += 4; UPD(0x0C0A022Au, 2);  /* 0C0A0228 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A022Cu, 1);  /* 0C0A022A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A022Eu, 1);  /* 0C0A022C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A0230u, 1);  /* 0C0A022E mov.l @Rm+,Rn */
	IF(0x0C0A0230u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A0230 rts */
L_0C0A0240: BLKS(0x0C0A0240u);
	r3 += 0x2u;  /* 0C0A0240 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r3); UPD(0x0C0A0244u, 2);  /* 0C0A0242 mov.b @Rm,Rn */
	r0 = 0x2u;  /* 0C0A0244 mov #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C0A0246 extu.b Rm,Rn */
	r4 -= r2;  /* 0C0A0248 sub Rm,Rn */
	r4 += 0x1u;  /* 0C0A024A add #imm,Rn */
	T = r4 > r0;  /* 0C0A024C cmp/hi Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A02B0u, 8); goto L_0C0A02B0; } goto L_0C0A0252; }  /* 0C0A024E bt/s */
L_0C0A0252: BLKS(0x0C0A0252u);
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0A0254u, 2);  /* 0C0A0252 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0A0254 tst Rm,Rn */
	{ u32 c_ = !T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A02A0u, 4); goto L_0C0A02A0; } UPD(0x0C0A025Au, 1); goto L_0C0A025A; }  /* 0C0A0256 bf/s */
L_0C0A025A: BLKS(0x0C0A025Au);
	r0 = 0xC26CD40u; UPD(0x0C0A025Cu, 1);  /* 0C0A025A mov.l @(disp,pc),Rn */
	r4 = 0xACu; UPD(0x0C0A025Eu, 1);  /* 0C0A025C mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C0A025E add Rm,Rn */
	r4 += r0;  /* 0C0A0260 add Rm,Rn */
	r3 = r4;  /* 0C0A0262 mov Rm,Rn */
	r4 += 0x1u;  /* 0C0A0264 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C0A0268u, 5);  /* 0C0A0266 mov.b @Rm,Rn */
	r3 += 0x2u;  /* 0C0A0268 add #imm,Rn */
	W8(r3, r5); UPD(0x0C0A026Cu, 2);  /* 0C0A026A mov.b Rm,@Rn */
	r4 += 0xFFFFFFFFu;  /* 0C0A026C add #imm,Rn */
	r6 = R32(r0 + 0x18u); UPD(0x0C0A0270u, 2);  /* 0C0A026E mov.l @(disp,Rm),Rn */
	r2 = 0xC2175E8u; UPD(0x0C0A0272u, 1);  /* 0C0A0270 mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0A0274u, 1);  /* 0C0A0272 mov.l Rm,@Rn */
	r7 = 0xC393044u; UPD(0x0C0A0276u, 1);  /* 0C0A0274 mov.l @(disp,pc),Rn */
	r2 = r5 & 0xFF;  /* 0C0A0276 extu.b Rm,Rn */
	r1 = R32(r0 + 0x20u); UPD(0x0C0A027Au, 2);  /* 0C0A0278 mov.l @(disp,Rm),Rn */
	W32(r7, r1); UPD(0x0C0A027Cu, 1);  /* 0C0A027A mov.l Rm,@Rn */
	r6 = 0xA9u; UPD(0x0C0A027Eu, 1);  /* 0C0A027C mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r4); UPD(0x0C0A0280u, 1);  /* 0C0A027E mov.b @Rm,Rn */
	IF(0x0C0A0280u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0A0282u, 1);  /* 0C0A0280 mov.b @(r0,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C0A0282 extu.b Rm,Rn */
	r4 = R32(r0 + 0x24u); UPD(0x0C0A0286u, 2);  /* 0C0A0284 mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C0A0286 extu.b Rm,Rn */
	r5 = R32(r0 + 0x28u); UPD(0x0C0A028Au, 2);  /* 0C0A0288 mov.l @(disp,Rm),Rn */
	r0 = 0xC063B90u; UPD(0x0C0A028Cu, 1);  /* 0C0A028A mov.l @(disp,pc),Rn */
	IF(0x0C0A028Cu); { u32 t_ = r0; PR = 0x0C0A0290u; r6 -= r2; /* slot sub Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C063B90, 0x0C063B90u, 0x0C0A0290u); }  /* 0C0A028C jsr @Rn */
L_0C0A0290: BLKS(0x0C0A0290u);
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C0A0218u, 3); goto L_0C0A0218; }  /* 0C0A0290 bra */
L_0C0A02A0: BLKS(0x0C0A02A0u);
	{ W8(r3, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C0A025Au, 3); goto L_0C0A025A; }  /* 0C0A02A0 bra */
L_0C0A02B0: BLKS(0x0C0A02B0u);
	{ r1 = 0x40u; /* slot mov #imm,Rn */ UPD(0x0C0A02A0u, 3); goto L_0C0A02A0; }  /* 0C0A02B0 bra */
}

/* FUN_0c0a02d0 */
void f_0C0A02D0(sh3_t *c)
{
	LOCALS;
L_0C0A02D0: BLKS(0x0C0A02D0u);
	r5 = 0xB4u; UPD(0x0C0A02D2u, 1);  /* 0C0A02D0 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r4;  /* 0C0A02D2 exts.w Rm,Rn */
	IF(0x0C0A02D4u); MACL = r7 * r5;  /* 0C0A02D4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A02D8u, 4);  /* 0C0A02D6 mov.l @(disp,pc),Rn */
	r1 = 0x3u;  /* 0C0A02D8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A02DCu, 2);  /* 0C0A02DA mov.l Rm,@-Rn */
	IF(0x0C0A02DCu); r5 = MACL;  /* 0C0A02DC sts macl,Rn */
	r5 += r0;  /* 0C0A02DE add Rm,Rn */
	r6 = R32(r5 + 0x4u); UPD(0x0C0A02E2u, 3);  /* 0C0A02E0 mov.l @(disp,Rm),Rn */
	r3 = 0x4u;  /* 0C0A02E2 mov #imm,Rn */
	IF(0x0C0A02E4u); ARG0(0x461Du); { s32 s_ = (s32)r1; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0A02E4 shld Rm,Rn */
	r4 = 0xC1D93E4u; UPD(0x0C0A02E8u, 3);  /* 0C0A02E6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A02E8 mov Rm,Rn */
	r6 += r4;  /* 0C0A02EA add Rm,Rn */
	r2 = R32(r6 + 0x4u); UPD(0x0C0A02EEu, 3);  /* 0C0A02EC mov.l @(disp,Rm),Rn */
	W32(r5 + 0x20u, r2); UPD(0x0C0A02F0u, 1);  /* 0C0A02EE mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x8u); UPD(0x0C0A02F2u, 1);  /* 0C0A02F0 mov.l @(disp,Rm),Rn */
	r7 = R32(r6); UPD(0x0C0A02F4u, 1);  /* 0C0A02F2 mov.l @Rm,Rn */
	IF(0x0C0A02F4u); ARG0(0x403Du); { s32 s_ = (s32)r3; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0A02F4 shld Rm,Rn */
	W32(r5 + 0x10u, r7); UPD(0x0C0A02F8u, 2);  /* 0C0A02F6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A02F8u); r4 = R32(r0 + r7); UPD(0x0C0A02FAu, 1);  /* 0C0A02F8 mov.l @(r0,Rm),Rn */
	r6 = R32(r5 + 0xCu); UPD(0x0C0A02FCu, 1);  /* 0C0A02FA mov.l @(disp,Rm),Rn */
	r0 = 0x3u;  /* 0C0A02FC mov #imm,Rn */
	IF(0x0C0A02FEu); ARG0(0x460Du); { s32 s_ = (s32)r0; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0A02FE shld Rm,Rn */
	W32(r5 + 0x14u, r4); UPD(0x0C0A0302u, 3);  /* 0C0A0300 mov.l Rm,@(disp,Rn) */
	r6 += r4;  /* 0C0A0302 add Rm,Rn */
	r3 = 0xC2175ECu; UPD(0x0C0A0306u, 2);  /* 0C0A0304 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0A0306 mov Rm,Rn */
	r1 = R32(r6); UPD(0x0C0A030Au, 2);  /* 0C0A0308 mov.l @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A030Cu, 1);  /* 0C0A030A mov.w @Rm,Rn */
	r7 = 0x82u; UPD(0x0C0A030Eu, 1);  /* 0C0A030C mov.w @(disp,pc),Rn */
	W32(r5 + 0x18u, r1); UPD(0x0C0A0310u, 1);  /* 0C0A030E mov.l Rm,@(disp,Rn) */
	IF(0x0C0A0310u); W16(r0 + r7, r4); UPD(0x0C0A0312u, 1);  /* 0C0A0310 mov.w Rm,@(r0,Rn) */
	r2 = R32(r6 + 0x4u); UPD(0x0C0A0314u, 1);  /* 0C0A0312 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C0A0314 mov #imm,Rn */
	r0 = 0x808080u; UPD(0x0C0A0318u, 2);  /* 0C0A0316 mov.l @(disp,pc),Rn */
	W32(r5 + 0x38u, r0); UPD(0x0C0A031Au, 1);  /* 0C0A0318 mov.l Rm,@(disp,Rn) */
	r0 = 0x84u; UPD(0x0C0A031Cu, 1);  /* 0C0A031A mov.w @(disp,pc),Rn */
	W32(r5 + 0x1Cu, r2); UPD(0x0C0A031Eu, 1);  /* 0C0A031C mov.l Rm,@(disp,Rn) */
	IF(0x0C0A031Eu); W8(r0 + r5, r4); UPD(0x0C0A0320u, 1);  /* 0C0A031E mov.b Rm,@(r0,Rn) */
	r2 = 0x40u;  /* 0C0A0320 mov #imm,Rn */
	W32(r5 + 0x34u, r4); UPD(0x0C0A0324u, 2);  /* 0C0A0322 mov.l Rm,@(disp,Rn) */
	r0 += 0x28u;  /* 0C0A0324 add #imm,Rn */
	r5 += 0x48u;  /* 0C0A0326 add #imm,Rn */
	W32(r5, r4); UPD(0x0C0A032Au, 3);  /* 0C0A0328 mov.l Rm,@Rn */
	r5 += 0xFFFFFFB8u;  /* 0C0A032A add #imm,Rn */
	IF(0x0C0A032Cu); W8(r0 + r5, r2); UPD(0x0C0A032Eu, 2);  /* 0C0A032C mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFF4u;  /* 0C0A032E add #imm,Rn */
	IF(0x0C0A0330u); W8(r0 + r5, r4); UPD(0x0C0A0332u, 2);  /* 0C0A0330 mov.b Rm,@(r0,Rn) */
	r3 = 0x9Cu; UPD(0x0C0A0334u, 1);  /* 0C0A0332 mov.w @(disp,pc),Rn */
	r0 = 0xA4u; UPD(0x0C0A0336u, 1);  /* 0C0A0334 mov.w @(disp,pc),Rn */
	r3 += r5;  /* 0C0A0336 add Rm,Rn */
	r3 += 0x1u;  /* 0C0A0338 add #imm,Rn */
	r0 += r5;  /* 0C0A033A add Rm,Rn */
	r6 = 0x98u; UPD(0x0C0A033Eu, 4);  /* 0C0A033C mov.w @(disp,pc),Rn */
	r0 += 0x3u;  /* 0C0A033E add #imm,Rn */
	W8(r3, r4); UPD(0x0C0A0342u, 2);  /* 0C0A0340 mov.b Rm,@Rn */
	r6 += r5;  /* 0C0A0342 add Rm,Rn */
	W8(r0, r4); UPD(0x0C0A0346u, 2);  /* 0C0A0344 mov.b Rm,@Rn */
	r6 += 0x2u;  /* 0C0A0346 add #imm,Rn */
	{ u32 v_ = r4; r3 -= 1; W8(r3, v_); } UPD(0x0C0A034Au, 2);  /* 0C0A0348 mov.b Rm,@-Rn */
	r1 = 0xA8u; UPD(0x0C0A034Cu, 1);  /* 0C0A034A mov.w @(disp,pc),Rn */
	r3 += 0x3u;  /* 0C0A034C add #imm,Rn */
	W8(r6, r4); UPD(0x0C0A0350u, 2);  /* 0C0A034E mov.b Rm,@Rn */
	r5 += r1;  /* 0C0A0350 add Rm,Rn */
	{ u32 v_ = r4; r0 -= 1; W8(r0, v_); } UPD(0x0C0A0354u, 2);  /* 0C0A0352 mov.b Rm,@-Rn */
	{ u32 v_ = r4; r6 -= 1; W8(r6, v_); } UPD(0x0C0A0356u, 1);  /* 0C0A0354 mov.b Rm,@-Rn */
	W8(r3, r4); UPD(0x0C0A0358u, 1);  /* 0C0A0356 mov.b Rm,@Rn */
	W8(r5, r4); UPD(0x0C0A035Au, 1);  /* 0C0A0358 mov.b Rm,@Rn */
	{ u32 v_ = r4; r0 -= 1; W8(r0, v_); } UPD(0x0C0A035Cu, 1);  /* 0C0A035A mov.b Rm,@-Rn */
	r15 = r14;  /* 0C0A035C mov Rm,Rn */
	IF(0x0C0A035Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A035E rts */
}

/* FUN_0c0a0380 */
void f_0C0A0380(sh3_t *c)
{
	LOCALS;
L_0C0A0380: BLKS(0x0C0A0380u);
	r0 = 0xB4u; UPD(0x0C0A0382u, 1);  /* 0C0A0380 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r4;  /* 0C0A0382 exts.w Rm,Rn */
	IF(0x0C0A0384u); MACL = r7 * r0;  /* 0C0A0384 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0A0388u, 4);  /* 0C0A0386 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0A0388 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A038Cu, 2);  /* 0C0A038A mov.l Rm,@-Rn */
	IF(0x0C0A038Cu); r0 = MACL;  /* 0C0A038C sts macl,Rn */
	r0 += r6;  /* 0C0A038E add Rm,Rn */
	r3 = R32(r0 + 0xCu); UPD(0x0C0A0392u, 3);  /* 0C0A0390 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0A0392 mov Rm,Rn */
	r4 = R32(r0 + 0x14u); UPD(0x0C0A0396u, 2);  /* 0C0A0394 mov.l @(disp,Rm),Rn */
	IF(0x0C0A0396u); ARG0(0x435Du); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C0A0396 shld Rm,Rn */
	r3 += r4;  /* 0C0A0398 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C0A039Cu, 3);  /* 0C0A039A mov.l @Rm,Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C0A039Eu, 1);  /* 0C0A039C mov.l Rm,@(disp,Rn) */
	r2 = R32(r3 + 0x4u); UPD(0x0C0A03A0u, 1);  /* 0C0A039E mov.l @(disp,Rm),Rn */
	W32(r0 + 0x1Cu, r2); UPD(0x0C0A03A2u, 1);  /* 0C0A03A0 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C0A03A2 mov Rm,Rn */
	IF(0x0C0A03A4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A03A4 rts */
}

/* FUN_0c0a03b0 */
void f_0C0A03B0(sh3_t *c)
{
	LOCALS;
L_0C0A03B0: BLKS(0x0C0A03B0u);
	r3 = 0xB4u; UPD(0x0C0A03B2u, 1);  /* 0C0A03B0 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A03B2 exts.w Rm,Rn */
	IF(0x0C0A03B4u); MACL = r1 * r3;  /* 0C0A03B4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A03B8u, 4);  /* 0C0A03B6 mov.l @(disp,pc),Rn */
	r7 = 0x4u;  /* 0C0A03B8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A03BCu, 2);  /* 0C0A03BA mov.l Rm,@-Rn */
	IF(0x0C0A03BCu); r4 = MACL;  /* 0C0A03BC sts macl,Rn */
	r4 += r0;  /* 0C0A03BE add Rm,Rn */
	r0 = R32(r4 + 0x8u); UPD(0x0C0A03C2u, 3);  /* 0C0A03C0 mov.l @(disp,Rm),Rn */
	r2 = 0x3u;  /* 0C0A03C2 mov #imm,Rn */
	IF(0x0C0A03C4u); ARG0(0x407Du); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0A03C4 shld Rm,Rn */
	r6 = R32(r4 + 0x10u); UPD(0x0C0A03C8u, 3);  /* 0C0A03C6 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0A03C8 mov Rm,Rn */
	r3 = R32(r4 + 0xCu); UPD(0x0C0A03CCu, 2);  /* 0C0A03CA mov.l @(disp,Rm),Rn */
	IF(0x0C0A03CCu); r5 = R32(r0 + r6); UPD(0x0C0A03CEu, 1);  /* 0C0A03CC mov.l @(r0,Rm),Rn */
	IF(0x0C0A03CEu); ARG0(0x432Du); { s32 s_ = (s32)r2; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C0A03CE shld Rm,Rn */
	W32(r4 + 0x14u, r5); UPD(0x0C0A03D2u, 2);  /* 0C0A03D0 mov.l Rm,@(disp,Rn) */
	r3 += r5;  /* 0C0A03D2 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C0A03D6u, 2);  /* 0C0A03D4 mov.l @Rm,Rn */
	W32(r4 + 0x18u, r1); UPD(0x0C0A03D8u, 1);  /* 0C0A03D6 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x4u); UPD(0x0C0A03DAu, 1);  /* 0C0A03D8 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x1Cu, r0); UPD(0x0C0A03DCu, 1);  /* 0C0A03DA mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C0A03DC mov Rm,Rn */
	IF(0x0C0A03DEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A03DE rts */
}

/* FUN_0c0a03f0 */
void f_0C0A03F0(sh3_t *c)
{
	LOCALS;
L_0C0A03F0: BLKS(0x0C0A03F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A03F2u, 1);  /* 0C0A03F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A03F4u, 1);  /* 0C0A03F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A03F6u, 1);  /* 0C0A03F4 mov.l Rm,@-Rn */
	r9 = 0xFFFFFFFFu;  /* 0C0A03F6 mov #imm,Rn */
	r5 = 0xB4u; UPD(0x0C0A03FAu, 2);  /* 0C0A03F8 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0A03FA exts.w Rm,Rn */
	IF(0x0C0A03FCu); MACL = r10 * r5;  /* 0C0A03FC mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0400u, 4);  /* 0C0A03FE mov.l Rm,@-Rn */
	r3 = r10;  /* 0C0A0400 mov Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C0A0404u, 2);  /* 0C0A0402 mov.l @(disp,pc),Rn */
	IF(0x0C0A0404u); r2 = MACL;  /* 0C0A0404 sts macl,Rn */
	r11 = 0x80u; UPD(0x0C0A0408u, 2);  /* 0C0A0406 mov.w @(disp,pc),Rn */
	r2 += r4;  /* 0C0A0408 add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A040Cu, 2);  /* 0C0A040A mov.l Rm,@-Rn */
	r2 += r11;  /* 0C0A040C add Rm,Rn */
	r2 += 0x2u;  /* 0C0A040E add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0A0412u, 3);  /* 0C0A0410 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0A0412 mov Rm,Rn */
	r8 = r0 & 0xFFFF;  /* 0C0A0414 extu.w Rm,Rn */
	IF(0x0C0A0416u); MACL = r3 * r5;  /* 0C0A0416 mul.l Rm,Rn */
	IF(0x0C0A0418u); r6 = MACL;  /* 0C0A0418 sts macl,Rn */
	UPD(0x0C0A041Au, 5);
L_0C0A041A: BLKS(0x0C0A041Au);
	r6 += r4;  /* 0C0A041A add Rm,Rn */
	r6 += 0x7Cu;  /* 0C0A041C add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A0420u, 3);  /* 0C0A041E mov.w @Rm,Rn */
	IF(0x0C0A0420u); MACL = r3 * r5;  /* 0C0A0420 mul.l Rm,Rn */
	IF(0x0C0A0422u); r0 = MACL;  /* 0C0A0422 sts macl,Rn */
	r0 += r4;  /* 0C0A0424 add Rm,Rn */
	r7 = R32(r0); UPD(0x0C0A0428u, 5);  /* 0C0A0426 mov.l @Rm,Rn */
	IF(0x0C0A0428u); r6 = MACL;  /* 0C0A0428 sts macl,Rn */
	r0 += r11;  /* 0C0A042A add Rm,Rn */
	r0 += 0x2u;  /* 0C0A042C add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r0); UPD(0x0C0A0430u, 4);  /* 0C0A042E mov.w @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0A0430 tst Rm,Rn */
	IF(0x0C0A0432u); r2 = T;  /* 0C0A0432 movt Rn */
	r0 = r1 & 0xFFFF;  /* 0C0A0434 extu.w Rm,Rn */
	T = r0 == r8;  /* 0C0A0436 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0A0438 negc Rm,Rn */
	r0 |= r2;  /* 0C0A043A or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A043C tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A0474u, 10); goto L_0C0A0474; } goto L_0C0A0442; }  /* 0C0A043E bf/s */
L_0C0A0442: BLKS(0x0C0A0442u);
	r2 = 0x4000u; UPD(0x0C0A0444u, 2);  /* 0C0A0442 mov.w @(disp,pc),Rn */
	T = (r7 & r2) == 0;  /* 0C0A0444 tst Rm,Rn */
	if (!T) { UPD(0x0C0A041Au, 4); goto L_0C0A041A; }  /* 0C0A0446 bf */
L_0C0A0448: BLKS(0x0C0A0448u);
	r3 = 0xB4u; UPD(0x0C0A044Au, 1);  /* 0C0A0448 mov.w @(disp,pc),Rn */
	IF(0x0C0A044Au); MACL = r10 * r3;  /* 0C0A044A mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0A044Eu, 3);  /* 0C0A044C mov.l @(disp,pc),Rn */
	IF(0x0C0A044Eu); r3 = MACL;  /* 0C0A044E sts macl,Rn */
	r3 += r7;  /* 0C0A0450 add Rm,Rn */
	r4 = R32(r3); UPD(0x0C0A0454u, 3);  /* 0C0A0452 mov.l @Rm,Rn */
	T = (r4 & r2) == 0;  /* 0C0A0454 tst Rm,Rn */
	if (T) { UPD(0x0C0A0470u, 4); goto L_0C0A0470; }  /* 0C0A0456 bt */
L_0C0A0458: BLKS(0x0C0A0458u);
	r0 = r6;  /* 0C0A0458 mov Rm,Rn */
	r0 += r7;  /* 0C0A045A add Rm,Rn */
	r0 += 0x48u;  /* 0C0A045C add #imm,Rn */
	r8 = R32(r0); UPD(0x0C0A0460u, 4);  /* 0C0A045E mov.l @Rm,Rn */
	r3 += 0x48u;  /* 0C0A0460 add #imm,Rn */
	r5 = 0x84u; UPD(0x0C0A0464u, 2);  /* 0C0A0462 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFB8u;  /* 0C0A0464 add #imm,Rn */
	W32(r3, r8); UPD(0x0C0A0468u, 2);  /* 0C0A0466 mov.l Rm,@Rn */
	IF(0x0C0A0468u); r7 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0A046Au, 1);  /* 0C0A0468 mov.b @(r0,Rm),Rn */
	r3 += 0xFFFFFFB8u;  /* 0C0A046A add #imm,Rn */
	r0 = r3;  /* 0C0A046C mov Rm,Rn */
	IF(0x0C0A046Eu); W8(r0 + r5, r7); UPD(0x0C0A0470u, 3);  /* 0C0A046E mov.b Rm,@(r0,Rn) */
L_0C0A0470: BLKS(0x0C0A0470u);
	r3 += 0x7Cu;  /* 0C0A0470 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A0474u, 2);  /* 0C0A0472 mov.w @Rm,Rn */
L_0C0A0474: BLKS(0x0C0A0474u);
	r15 = r14;  /* 0C0A0474 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A0478u, 2);  /* 0C0A0476 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A047Au, 1);  /* 0C0A0478 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A047Cu, 1);  /* 0C0A047A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A047Eu, 1);  /* 0C0A047C mov.l @Rm+,Rn */
	IF(0x0C0A047Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A047E rts */
}

/* FUN_0c0a0490 */
void f_0C0A0490(sh3_t *c)
{
	LOCALS;
L_0C0A0490: BLKS(0x0C0A0490u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0492u, 1);  /* 0C0A0490 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0494u, 1);  /* 0C0A0492 mov.l Rm,@-Rn */
	r8 = 0xFFFFFFFFu;  /* 0C0A0494 mov #imm,Rn */
	r6 = 0xB4u; UPD(0x0C0A0498u, 2);  /* 0C0A0496 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0A0498 exts.w Rm,Rn */
	IF(0x0C0A049Au); MACL = r9 * r6;  /* 0C0A049A mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A049Eu, 4);  /* 0C0A049C mov.l Rm,@-Rn */
	r7 = r9;  /* 0C0A049E mov Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0A04A2u, 2);  /* 0C0A04A0 mov.l @(disp,pc),Rn */
	IF(0x0C0A04A2u); r2 = MACL;  /* 0C0A04A2 sts macl,Rn */
	r10 = 0x80u; UPD(0x0C0A04A6u, 2);  /* 0C0A04A4 mov.w @(disp,pc),Rn */
	r2 += r5;  /* 0C0A04A6 add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A04AAu, 2);  /* 0C0A04A8 mov.l Rm,@-Rn */
	r2 += r10;  /* 0C0A04AA add Rm,Rn */
	r2 += 0x2u;  /* 0C0A04AC add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0A04B0u, 3);  /* 0C0A04AE mov.w @Rm,Rn */
	r14 = r15;  /* 0C0A04B0 mov Rm,Rn */
	r4 = r0 & 0xFFFF;  /* 0C0A04B2 extu.w Rm,Rn */
	IF(0x0C0A04B4u); MACL = r7 * r6;  /* 0C0A04B4 mul.l Rm,Rn */
	IF(0x0C0A04B6u); r0 = MACL;  /* 0C0A04B6 sts macl,Rn */
	UPD(0x0C0A04B8u, 5);
L_0C0A04B8: BLKS(0x0C0A04B8u);
	r0 += r5;  /* 0C0A04B8 add Rm,Rn */
	r0 += 0x7Cu;  /* 0C0A04BA add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r0); UPD(0x0C0A04BEu, 3);  /* 0C0A04BC mov.w @Rm,Rn */
	IF(0x0C0A04BEu); MACL = r7 * r6;  /* 0C0A04BE mul.l Rm,Rn */
	IF(0x0C0A04C0u); r1 = MACL;  /* 0C0A04C0 sts macl,Rn */
	r1 += r5;  /* 0C0A04C2 add Rm,Rn */
	r3 = R32(r1); UPD(0x0C0A04C6u, 5);  /* 0C0A04C4 mov.l @Rm,Rn */
	r1 += r10;  /* 0C0A04C6 add Rm,Rn */
	r1 += 0x2u;  /* 0C0A04C8 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r1); UPD(0x0C0A04CCu, 3);  /* 0C0A04CA mov.w @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0A04CC tst Rm,Rn */
	IF(0x0C0A04CEu); r2 = T;  /* 0C0A04CE movt Rn */
	r1 = r1 & 0xFFFF;  /* 0C0A04D0 extu.w Rm,Rn */
	T = r1 == r4;  /* 0C0A04D2 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C0A04D4 negc Rm,Rn */
	r1 |= r2;  /* 0C0A04D6 or Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0A04D8 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A051Eu, 10); goto L_0C0A051E; } goto L_0C0A04DE; }  /* 0C0A04DA bf/s */
L_0C0A04DE: BLKS(0x0C0A04DEu);
	r2 = 0x4000u; UPD(0x0C0A04E0u, 2);  /* 0C0A04DE mov.w @(disp,pc),Rn */
	T = (r3 & r2) == 0;  /* 0C0A04E0 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0A04E4u); r0 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C0A04B8u, 4); goto L_0C0A04B8; } goto L_0C0A04E6; }  /* 0C0A04E2 bf/s */
L_0C0A04E6: BLKS(0x0C0A04E6u);
	r6 = 0xC26CD40u; UPD(0x0C0A04E8u, 2);  /* 0C0A04E6 mov.l @(disp,pc),Rn */
	IF(0x0C0A04E8u); r3 = MACL;  /* 0C0A04E8 sts macl,Rn */
	r3 += r6;  /* 0C0A04EA add Rm,Rn */
	r3 += 0x3Cu;  /* 0C0A04EC add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A04F0u, 4);  /* 0C0A04EE mov.w @Rm,Rn */
	r0 = 0xFFFFFFFFu;  /* 0C0A04F0 mov #imm,Rn */
	T = (r4 & r4) == 0;  /* 0C0A04F2 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A051Eu, 5); goto L_0C0A051E; } goto L_0C0A04F8; }  /* 0C0A04F4 bt/s */
L_0C0A04F8: BLKS(0x0C0A04F8u);
	r7 = 0xB4u; UPD(0x0C0A04FAu, 2);  /* 0C0A04F8 mov.w @(disp,pc),Rn */
	IF(0x0C0A04FAu); MACL = r9 * r7;  /* 0C0A04FA mul.l Rm,Rn */
	IF(0x0C0A04FCu); r7 = MACL;  /* 0C0A04FC sts macl,Rn */
	r7 += r6;  /* 0C0A04FE add Rm,Rn */
	r5 = R32(r7); UPD(0x0C0A0502u, 5);  /* 0C0A0500 mov.l @Rm,Rn */
	T = (r5 & r2) == 0;  /* 0C0A0502 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0x48u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A0518u, 4); goto L_0C0A0518; } goto L_0C0A0508; }  /* 0C0A0504 bt/s */
L_0C0A0508: BLKS(0x0C0A0508u);
	r9 = R32(r3); UPD(0x0C0A050Au, 2);  /* 0C0A0508 mov.l @Rm,Rn */
	r8 = r7;  /* 0C0A050A mov Rm,Rn */
	r0 = 0x84u; UPD(0x0C0A050Eu, 2);  /* 0C0A050C mov.w @(disp,pc),Rn */
	r3 += 0xFFFFFFB8u;  /* 0C0A050E add #imm,Rn */
	IF(0x0C0A0510u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0512u, 2);  /* 0C0A0510 mov.b @(r0,Rm),Rn */
	r8 += 0x48u;  /* 0C0A0512 add #imm,Rn */
	W32(r8, r9); UPD(0x0C0A0516u, 2);  /* 0C0A0514 mov.l Rm,@Rn */
	IF(0x0C0A0516u); W8(r0 + r7, r6); UPD(0x0C0A0518u, 1);  /* 0C0A0516 mov.b Rm,@(r0,Rn) */
L_0C0A0518: BLKS(0x0C0A0518u);
	r3 = r7;  /* 0C0A0518 mov Rm,Rn */
	r3 += 0x7Cu;  /* 0C0A051A add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A051Eu, 3);  /* 0C0A051C mov.w @Rm,Rn */
L_0C0A051E: BLKS(0x0C0A051Eu);
	r15 = r14;  /* 0C0A051E mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A0522u, 2);  /* 0C0A0520 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A0524u, 1);  /* 0C0A0522 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A0526u, 1);  /* 0C0A0524 mov.l @Rm+,Rn */
	IF(0x0C0A0526u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A0526 rts */
}

/* FUN_0c0a0540 */
void f_0C0A0540(sh3_t *c)
{
	LOCALS;
L_0C0A0540: BLKS(0x0C0A0540u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0542u, 1);  /* 0C0A0540 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0544u, 1);  /* 0C0A0542 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A0544 exts.w Rm,Rn */
	r0 = 0xC0A03F0u; UPD(0x0C0A0548u, 2);  /* 0C0A0546 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0A0548 mov Rm,Rn */
	IF(0x0C0A054Au); r15 -= 4; W32(r15, PR); UPD(0x0C0A054Cu, 2);  /* 0C0A054A sts.l pr,@-Rn */
	IF(0x0C0A054Cu); { u32 t_ = r0; PR = 0x0C0A0550u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0A0550u); }  /* 0C0A054C jsr @Rn */
L_0C0A0550: BLKS(0x0C0A0550u);
	IF(0x0C0A0550u); T = (s32)r0 >= 0;  /* 0C0A0550 cmp/pz Rn */
	{ u32 c_ = !T; r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A05B2u, 4); goto L_0C0A05B2; } goto L_0C0A0556; }  /* 0C0A0552 bf/s */
L_0C0A0556: BLKS(0x0C0A0556u);
	r6 = 0xB4u; UPD(0x0C0A0558u, 2);  /* 0C0A0556 mov.w @(disp,pc),Rn */
	IF(0x0C0A0558u); MACL = r8 * r6;  /* 0C0A0558 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A055Cu, 3);  /* 0C0A055A mov.l @(disp,pc),Rn */
	IF(0x0C0A055Cu); r7 = MACL;  /* 0C0A055C sts macl,Rn */
	r7 += r0;  /* 0C0A055E add Rm,Rn */
	r4 = r7;  /* 0C0A0560 mov Rm,Rn */
	r7 += 0x7Eu;  /* 0C0A0562 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r7); UPD(0x0C0A0566u, 5);  /* 0C0A0564 mov.w @Rm,Rn */
	r4 += 0x7Cu;  /* 0C0A0566 add #imm,Rn */
	IF(0x0C0A0568u); MACL = r2 * r6;  /* 0C0A0568 mul.l Rm,Rn */
	r8 = 0x80u; UPD(0x0C0A056Cu, 4);  /* 0C0A056A mov.w @(disp,pc),Rn */
	r7 += 0xFFFFFF82u;  /* 0C0A056C add #imm,Rn */
	IF(0x0C0A056Eu); r6 = MACL;  /* 0C0A056E sts macl,Rn */
	r6 += r0;  /* 0C0A0570 add Rm,Rn */
	r1 = r6;  /* 0C0A0572 mov Rm,Rn */
	r1 += r8;  /* 0C0A0574 add Rm,Rn */
	r5 = R32(r6); UPD(0x0C0A0578u, 6);  /* 0C0A0576 mov.l @Rm,Rn */
	r8 += r7;  /* 0C0A0578 add Rm,Rn */
	r1 += 0x2u;  /* 0C0A057A add #imm,Rn */
	r8 += 0x2u;  /* 0C0A057C add #imm,Rn */
	T = (r5 & r5) == 0;  /* 0C0A057E tst Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r1); UPD(0x0C0A0582u, 5);  /* 0C0A0580 mov.w @Rm,Rn */
	IF(0x0C0A0582u); r5 = T;  /* 0C0A0582 movt Rn */
	r3 = (u32)(s32)(s16)R16(r8); UPD(0x0C0A0586u, 2);  /* 0C0A0584 mov.w @Rm,Rn */
	r2 = 0xFFFFFFFFu;  /* 0C0A0586 mov #imm,Rn */
	T = r3 == r0;  /* 0C0A0588 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r2, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0A058A negc Rm,Rn */
	r0 |= r5;  /* 0C0A058C or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A058E tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A05B2u, 8); goto L_0C0A05B2; } goto L_0C0A0594; }  /* 0C0A0590 bf/s */
L_0C0A0594: BLKS(0x0C0A0594u);
	r0 = 0x84u; UPD(0x0C0A0596u, 2);  /* 0C0A0594 mov.w @(disp,pc),Rn */
	r5 = r7;  /* 0C0A0596 mov Rm,Rn */
	r5 += r0;  /* 0C0A0598 add Rm,Rn */
	IF(0x0C0A059Au); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0A059Cu, 3);  /* 0C0A059A mov.b @(r0,Rm),Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C0A059Eu, 1);  /* 0C0A059C mov.b @Rm,Rn */
	r8 = r3 & 0xFF;  /* 0C0A059E extu.b Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A05A0 extu.b Rm,Rn */
	T = r0 >= r8;  /* 0C0A05A2 cmp/hs Rm,Rn */
	if (T) { UPD(0x0C0A05B0u, 6); goto L_0C0A05B0; }  /* 0C0A05A4 bt */
L_0C0A05A6: BLKS(0x0C0A05A6u);
	W8(r5, r3); UPD(0x0C0A05A8u, 1);  /* 0C0A05A6 mov.b Rm,@Rn */
	r6 += 0x48u;  /* 0C0A05A8 add #imm,Rn */
	r3 = R32(r6); UPD(0x0C0A05ACu, 2);  /* 0C0A05AA mov.l @Rm,Rn */
	r7 += 0x48u;  /* 0C0A05AC add #imm,Rn */
	W32(r7, r3); UPD(0x0C0A05B0u, 2);  /* 0C0A05AE mov.l Rm,@Rn */
L_0C0A05B0: BLKS(0x0C0A05B0u);
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C0A05B2u, 1);  /* 0C0A05B0 mov.w @Rm,Rn */
L_0C0A05B2: BLKS(0x0C0A05B2u);
	r15 = r14;  /* 0C0A05B2 mov Rm,Rn */
	IF(0x0C0A05B4u); PR = R32(r15); r15 += 4; UPD(0x0C0A05B6u, 2);  /* 0C0A05B4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A05B8u, 1);  /* 0C0A05B6 mov.l @Rm+,Rn */
	IF(0x0C0A05B8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A05B8 rts */
}

/* FUN_0c0a05d0 */
void f_0C0A05D0(sh3_t *c)
{
	LOCALS;
L_0C0A05D0: BLKS(0x0C0A05D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A05D2u, 1);  /* 0C0A05D0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A05D4u, 1);  /* 0C0A05D2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A05D4 exts.w Rm,Rn */
	r0 = 0xC0A0490u; UPD(0x0C0A05D8u, 2);  /* 0C0A05D6 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0A05D8 mov Rm,Rn */
	IF(0x0C0A05DAu); r15 -= 4; W32(r15, PR); UPD(0x0C0A05DCu, 2);  /* 0C0A05DA sts.l pr,@-Rn */
	IF(0x0C0A05DCu); { u32 t_ = r0; PR = 0x0C0A05E0u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C0A05E0u); }  /* 0C0A05DC jsr @Rn */
L_0C0A05E0: BLKS(0x0C0A05E0u);
	IF(0x0C0A05E0u); T = (s32)r0 >= 0;  /* 0C0A05E0 cmp/pz Rn */
	{ u32 c_ = !T; r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A064Eu, 4); goto L_0C0A064E; } goto L_0C0A05E6; }  /* 0C0A05E2 bf/s */
L_0C0A05E6: BLKS(0x0C0A05E6u);
	r7 = 0xB4u; UPD(0x0C0A05E8u, 2);  /* 0C0A05E6 mov.w @(disp,pc),Rn */
	IF(0x0C0A05E8u); MACL = r8 * r7;  /* 0C0A05E8 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0A05ECu, 3);  /* 0C0A05EA mov.l @(disp,pc),Rn */
	IF(0x0C0A05ECu); r6 = MACL;  /* 0C0A05EC sts macl,Rn */
	r6 += r5;  /* 0C0A05EE add Rm,Rn */
	r4 = r6;  /* 0C0A05F0 mov Rm,Rn */
	r6 += 0x7Eu;  /* 0C0A05F2 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A05F6u, 5);  /* 0C0A05F4 mov.w @Rm,Rn */
	r4 += 0x7Cu;  /* 0C0A05F6 add #imm,Rn */
	IF(0x0C0A05F8u); MACL = r2 * r7;  /* 0C0A05F8 mul.l Rm,Rn */
	r8 = 0x80u; UPD(0x0C0A05FCu, 4);  /* 0C0A05FA mov.w @(disp,pc),Rn */
	r6 += 0xFFFFFF82u;  /* 0C0A05FC add #imm,Rn */
	IF(0x0C0A05FEu); r7 = MACL;  /* 0C0A05FE sts macl,Rn */
	r7 += r5;  /* 0C0A0600 add Rm,Rn */
	r1 = r7;  /* 0C0A0602 mov Rm,Rn */
	r1 += r8;  /* 0C0A0604 add Rm,Rn */
	r0 = R32(r7); UPD(0x0C0A0608u, 6);  /* 0C0A0606 mov.l @Rm,Rn */
	r8 += r6;  /* 0C0A0608 add Rm,Rn */
	r8 += 0x2u;  /* 0C0A060A add #imm,Rn */
	r1 += 0x2u;  /* 0C0A060C add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r8); UPD(0x0C0A0610u, 4);  /* 0C0A060E mov.w @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A0610 tst Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r1); UPD(0x0C0A0614u, 2);  /* 0C0A0612 mov.w @Rm,Rn */
	IF(0x0C0A0614u); r0 = T;  /* 0C0A0614 movt Rn */
	T = r5 == r3;  /* 0C0A0616 cmp/eq Rm,Rn */
	r7 += 0x3Cu;  /* 0C0A0618 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C0A061Cu, 4);  /* 0C0A061A mov.w @Rm,Rn */
	r8 = 0xFFFFFFFFu;  /* 0C0A061C mov #imm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C0A061E negc Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0A0620 tst Rm,Rn */
	IF(0x0C0A0622u); r2 = T;  /* 0C0A0622 movt Rn */
	r0 |= r5;  /* 0C0A0624 or Rm,Rn */
	r0 |= r2;  /* 0C0A0626 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A0628 tst Rm,Rn */
	r7 += 0xFFFFFFC4u;  /* 0C0A062A add #imm,Rn */
	{ u32 c_ = !T; r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A064Eu, 11); goto L_0C0A064E; } goto L_0C0A0630; }  /* 0C0A062C bf/s */
L_0C0A0630: BLKS(0x0C0A0630u);
	r0 = 0x84u; UPD(0x0C0A0632u, 2);  /* 0C0A0630 mov.w @(disp,pc),Rn */
	r5 = r6;  /* 0C0A0632 mov Rm,Rn */
	r5 += r0;  /* 0C0A0634 add Rm,Rn */
	IF(0x0C0A0636u); r3 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0A0638u, 3);  /* 0C0A0636 mov.b @(r0,Rm),Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C0A063Au, 1);  /* 0C0A0638 mov.b @Rm,Rn */
	r8 = r3 & 0xFF;  /* 0C0A063A extu.b Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A063C extu.b Rm,Rn */
	T = r0 >= r8;  /* 0C0A063E cmp/hs Rm,Rn */
	if (T) { UPD(0x0C0A064Cu, 6); goto L_0C0A064C; }  /* 0C0A0640 bt */
L_0C0A0642: BLKS(0x0C0A0642u);
	W8(r5, r3); UPD(0x0C0A0644u, 1);  /* 0C0A0642 mov.b Rm,@Rn */
	r7 += 0x48u;  /* 0C0A0644 add #imm,Rn */
	r3 = R32(r7); UPD(0x0C0A0648u, 2);  /* 0C0A0646 mov.l @Rm,Rn */
	r6 += 0x48u;  /* 0C0A0648 add #imm,Rn */
	W32(r6, r3); UPD(0x0C0A064Cu, 2);  /* 0C0A064A mov.l Rm,@Rn */
L_0C0A064C: BLKS(0x0C0A064Cu);
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C0A064Eu, 1);  /* 0C0A064C mov.w @Rm,Rn */
L_0C0A064E: BLKS(0x0C0A064Eu);
	r15 = r14;  /* 0C0A064E mov Rm,Rn */
	IF(0x0C0A0650u); PR = R32(r15); r15 += 4; UPD(0x0C0A0652u, 2);  /* 0C0A0650 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A0654u, 1);  /* 0C0A0652 mov.l @Rm+,Rn */
	IF(0x0C0A0654u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A0654 rts */
}

/* FUN_0c0a0670 */
void f_0C0A0670(sh3_t *c)
{
	LOCALS;
L_0C0A0670: BLKS(0x0C0A0670u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0672u, 1);  /* 0C0A0670 mov.l Rm,@-Rn */
	r6 = (u32)(s32)(s16)r5;  /* 0C0A0672 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0676u, 2);  /* 0C0A0674 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0A0678u, 1);  /* 0C0A0676 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0A0678 exts.w Rm,Rn */
	IF(0x0C0A067Au); MACL = r9 * r3;  /* 0C0A067A mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A067Eu, 4);  /* 0C0A067C mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A0680u, 1);  /* 0C0A067E mov.l @(disp,pc),Rn */
	IF(0x0C0A0680u); r8 = MACL;  /* 0C0A0680 sts macl,Rn */
	IF(0x0C0A0682u); r15 -= 4; W32(r15, PR); UPD(0x0C0A0684u, 2);  /* 0C0A0682 sts.l pr,@-Rn */
	IF(0x0C0A0684u); MACL = r6 * r3;  /* 0C0A0684 mul.l Rm,Rn */
	r8 += r0;  /* 0C0A0686 add Rm,Rn */
	r4 = R32(r8); UPD(0x0C0A068Au, 4);  /* 0C0A0688 mov.l @Rm,Rn */
	IF(0x0C0A068Au); r6 = MACL;  /* 0C0A068A sts macl,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C0A068Eu, 2);  /* 0C0A068C mov.w @(disp,pc),Rn */
	r6 += r0;  /* 0C0A068E add Rm,Rn */
	r4 &= r2;  /* 0C0A0690 and Rm,Rn */
	r7 = R32(r6); UPD(0x0C0A0694u, 3);  /* 0C0A0692 mov.l @Rm,Rn */
	r5 = r8;  /* 0C0A0694 mov Rm,Rn */
	r2 = 0xA8u; UPD(0x0C0A0698u, 2);  /* 0C0A0696 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0A0698 mov Rm,Rn */
	r0 = 0x100u; UPD(0x0C0A069Cu, 2);  /* 0C0A069A mov.w @(disp,pc),Rn */
	r6 += r2;  /* 0C0A069C add Rm,Rn */
	r6 += 0x1u;  /* 0C0A069E add #imm,Rn */
	r7 &= r0;  /* 0C0A06A0 and Rm,Rn */
	r5 += r2;  /* 0C0A06A2 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C0A06A6u, 5);  /* 0C0A06A4 mov.b @Rm,Rn */
	r4 |= r7;  /* 0C0A06A6 or Rm,Rn */
	r5 += 0x1u;  /* 0C0A06A8 add #imm,Rn */
	W32(r8, r4); UPD(0x0C0A06ACu, 3);  /* 0C0A06AA mov.l Rm,@Rn */
	T = (r4 & r0) == 0;  /* 0C0A06AC tst Rm,Rn */
	{ u32 c_ = !T; W8(r5, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0A06E0u, 4); goto L_0C0A06E0; } UPD(0x0C0A06B2u, 1); goto L_0C0A06B2; }  /* 0C0A06AE bf/s */
L_0C0A06B2: BLKS(0x0C0A06B2u);
	r0 = 0xC057600u; UPD(0x0C0A06B4u, 1);  /* 0C0A06B2 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0A06B4 mov Rm,Rn */
	IF(0x0C0A06B6u); { u32 t_ = r0; PR = 0x0C0A06BAu; r5 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057600, 0x0C057600u, 0x0C0A06BAu); }  /* 0C0A06B6 jsr @Rn */
L_0C0A06BA: BLKS(0x0C0A06BAu);
	r0 = 0x86u; UPD(0x0C0A06BCu, 1);  /* 0C0A06BA mov.w @(disp,pc),Rn */
	IF(0x0C0A06BCu); r0 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0A06BEu, 1);  /* 0C0A06BC mov.w @(r0,Rm),Rn */
	r0 += 0x8u;  /* 0C0A06BE add #imm,Rn */
	IF(0x0C0A06C0u); r0 >>= 2;  /* 0C0A06C0 shlr2 Rn */
	IF(0x0C0A06C2u); r0 >>= 2;  /* 0C0A06C2 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C0A06C4 and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C0A06C8u, 5);  /* 0C0A06C6 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0A0380u; UPD(0x0C0A06CAu, 1);  /* 0C0A06C8 mov.l @(disp,pc),Rn */
	IF(0x0C0A06CAu); { u32 t_ = r8; PR = 0x0C0A06CEu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0A06CEu); }  /* 0C0A06CA jsr @Rn */
L_0C0A06CE: BLKS(0x0C0A06CEu);
	r0 = 0x0u;  /* 0C0A06CE mov #imm,Rn */
	UPD(0x0C0A06D0u, 1);
L_0C0A06D0: BLKS(0x0C0A06D0u);
	r15 = r14;  /* 0C0A06D0 mov Rm,Rn */
	IF(0x0C0A06D2u); PR = R32(r15); r15 += 4; UPD(0x0C0A06D4u, 2);  /* 0C0A06D2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A06D6u, 1);  /* 0C0A06D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A06D8u, 1);  /* 0C0A06D6 mov.l @Rm+,Rn */
	IF(0x0C0A06D8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A06D8 rts */
L_0C0A06E0: BLKS(0x0C0A06E0u);
	r0 = 0xC058130u; UPD(0x0C0A06E2u, 1);  /* 0C0A06E0 mov.l @(disp,pc),Rn */
	IF(0x0C0A06E2u); { u32 t_ = r0; PR = 0x0C0A06E6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C0A06E6u); }  /* 0C0A06E2 jsr @Rn */
L_0C0A06E6: BLKS(0x0C0A06E6u);
	r0 = 0xC057430u; UPD(0x0C0A06E8u, 1);  /* 0C0A06E6 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0A06E8 mov Rm,Rn */
	IF(0x0C0A06EAu); { u32 t_ = r0; PR = 0x0C0A06EEu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C0A06EEu); }  /* 0C0A06EA jsr @Rn */
L_0C0A06EE: BLKS(0x0C0A06EEu);
	r0 = 0x86u; UPD(0x0C0A06F0u, 1);  /* 0C0A06EE mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C0A06F0 mov Rm,Rn */
	IF(0x0C0A06F2u); r0 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0A06F4u, 2);  /* 0C0A06F2 mov.w @(r0,Rm),Rn */
	r0 += 0x8u;  /* 0C0A06F4 add #imm,Rn */
	IF(0x0C0A06F6u); r0 >>= 2;  /* 0C0A06F6 shlr2 Rn */
	IF(0x0C0A06F8u); r0 >>= 2;  /* 0C0A06F8 shlr2 Rn */
	r9 = 0xC0A0380u; UPD(0x0C0A06FCu, 4);  /* 0C0A06FA mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C0A06FC and #imm,r0 */
	IF(0x0C0A06FEu); { u32 t_ = r9; PR = 0x0C0A0702u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0A0702u); }  /* 0C0A06FE jsr @Rn */
L_0C0A0702: BLKS(0x0C0A0702u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0A06D0u, 3); goto L_0C0A06D0; }  /* 0C0A0702 bra */
}

/* FUN_0c0a0730 */
void f_0C0A0730(sh3_t *c)
{
	LOCALS;
L_0C0A0730: BLKS(0x0C0A0730u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0732u, 1);  /* 0C0A0730 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s16)r7;  /* 0C0A0732 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0736u, 2);  /* 0C0A0734 mov.l Rm,@-Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C0A0736 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A073Au, 2);  /* 0C0A0738 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A073Cu, 1);  /* 0C0A073A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A073Eu, 1);  /* 0C0A073C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0740u, 1);  /* 0C0A073E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0742u, 1);  /* 0C0A0740 mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0A0742 exts.w Rm,Rn */
	IF(0x0C0A0744u); r15 -= 4; W32(r15, PR); UPD(0x0C0A0746u, 2);  /* 0C0A0744 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0746 add #imm,Rn */
	r14 = r15;  /* 0C0A0748 mov Rm,Rn */
	W32(r14, r6); UPD(0x0C0A074Cu, 3);  /* 0C0A074A mov.l Rm,@Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0A074Eu, 1);  /* 0C0A074C mov.l Rm,@(disp,Rn) */
	r12 = 0xC26CD40u; UPD(0x0C0A0750u, 1);  /* 0C0A074E mov.l @(disp,pc),Rn */
	r11 = 0xB4u; UPD(0x0C0A0752u, 1);  /* 0C0A0750 mov.w @(disp,pc),Rn */
	r10 = 0xC0A03F0u; UPD(0x0C0A0754u, 1);  /* 0C0A0752 mov.l @(disp,pc),Rn */
	r9 = 0x4000u; UPD(0x0C0A0756u, 1);  /* 0C0A0754 mov.w @(disp,pc),Rn */
	IF(0x0C0A0756u); MACL = r3 * r11;  /* 0C0A0756 mul.l Rm,Rn */
	UPD(0x0C0A0758u, 2);
L_0C0A0758: BLKS(0x0C0A0758u);
	IF(0x0C0A0758u); r8 = MACL;  /* 0C0A0758 sts macl,Rn */
	r8 += r12;  /* 0C0A075A add Rm,Rn */
	r0 = R32(r8); UPD(0x0C0A075Eu, 3);  /* 0C0A075C mov.l @Rm,Rn */
	T = (r0 & r9) == 0;  /* 0C0A075E tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C0A0762u); r2 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C0A07A0u, 4); goto L_0C0A07A0; } goto L_0C0A0764; }  /* 0C0A0760 bt/s */
L_0C0A0764: BLKS(0x0C0A0764u);
	IF(0x0C0A0764u); { u32 t_ = r10; PR = 0x0C0A0768u; r4 = r3; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0A0768u); }  /* 0C0A0764 jsr @Rn */
L_0C0A0768: BLKS(0x0C0A0768u);
	IF(0x0C0A0768u); T = (s32)r0 >= 0;  /* 0C0A0768 cmp/pz Rn */
	if (!T) { UPD(0x0C0A0780u, 4); goto L_0C0A0780; }  /* 0C0A076A bf */
L_0C0A076C: BLKS(0x0C0A076Cu);
	r3 = r0;  /* 0C0A076C mov Rm,Rn */
	{ IF(0x0C0A0770u); MACL = r3 * r11; /* slot mul.l Rm,Rn */ UPD(0x0C0A0758u, 5); goto L_0C0A0758; }  /* 0C0A076E bra */
L_0C0A0780: BLKS(0x0C0A0780u);
	r5 = 0x0u;  /* 0C0A0780 mov #imm,Rn */
	W32(r8, r5); UPD(0x0C0A0784u, 2);  /* 0C0A0782 mov.l Rm,@Rn */
L_0C0A0784: BLKS(0x0C0A0784u);
	r0 = 0x0u;  /* 0C0A0784 mov #imm,Rn */
	UPD(0x0C0A0786u, 1);
L_0C0A0786: BLKS(0x0C0A0786u);
	r14 += 0x8u;  /* 0C0A0786 add #imm,Rn */
	r15 = r14;  /* 0C0A0788 mov Rm,Rn */
	IF(0x0C0A078Au); PR = R32(r15); r15 += 4; UPD(0x0C0A078Cu, 3);  /* 0C0A078A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A078Eu, 1);  /* 0C0A078C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A0790u, 1);  /* 0C0A078E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A0792u, 1);  /* 0C0A0790 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A0794u, 1);  /* 0C0A0792 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A0796u, 1);  /* 0C0A0794 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A0798u, 1);  /* 0C0A0796 mov.l @Rm+,Rn */
	IF(0x0C0A0798u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A0798 rts */
L_0C0A07A0: BLKS(0x0C0A07A0u);
	r6 = 0xC26CD40u; UPD(0x0C0A07A2u, 1);  /* 0C0A07A0 mov.l @(disp,pc),Rn */
	r8 = 0xFFFFFFE3u;  /* 0C0A07A2 mov #imm,Rn */
	r6 += r2;  /* 0C0A07A4 add Rm,Rn */
	r7 = 0x84u; UPD(0x0C0A07A8u, 3);  /* 0C0A07A6 mov.w @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0A07A8 mov #imm,Rn */
	r5 = R32(r6); UPD(0x0C0A07ACu, 2);  /* 0C0A07AA mov.l @Rm,Rn */
	r7 += r6;  /* 0C0A07AC add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0A07B0u, 2);  /* 0C0A07AE mov.b @Rm,Rn */
	r0 = r5;  /* 0C0A07B0 mov Rm,Rn */
	IF(0x0C0A07B2u); ARG0(0x408Cu); { s32 s_ = (s32)r8; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0A07B2 shad Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0A07B4 tst Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C0A07B6 negc Rm,Rn */
	r0 &= 0x1u;  /* 0C0A07B8 and #imm,r0 */
	r4 |= r0;  /* 0C0A07BA or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0A07BC tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A0786u, 10); goto L_0C0A0786; } goto L_0C0A07C2; }  /* 0C0A07BE bf/s */
L_0C0A07C2: BLKS(0x0C0A07C2u);
	r9 = 0x6u;  /* 0C0A07C2 mov #imm,Rn */
	r0 = r5;  /* 0C0A07C4 mov Rm,Rn */
	r0 &= 0x8u;  /* 0C0A07C6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A07C8 tst Rm,Rn */
	{ u32 c_ = !T; W8(r7, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0A07E2u, 8); goto L_0C0A07E2; } UPD(0x0C0A07CEu, 1); goto L_0C0A07CE; }  /* 0C0A07CA bf/s */
L_0C0A07CE: BLKS(0x0C0A07CEu);
	r12 = 0x280u; UPD(0x0C0A07D0u, 1);  /* 0C0A07CE mov.w @(disp,pc),Rn */
	r6 += 0x48u;  /* 0C0A07D0 add #imm,Rn */
	IF(0x0C0A07D2u); MACL = r13 * r12;  /* 0C0A07D2 mul.l Rm,Rn */
	r10 = 0xC283794u; UPD(0x0C0A07D6u, 4);  /* 0C0A07D4 mov.l @(disp,pc),Rn */
	IF(0x0C0A07D6u); r11 = MACL;  /* 0C0A07D6 sts macl,Rn */
	r0 = 0x278u; UPD(0x0C0A07DAu, 2);  /* 0C0A07D8 mov.w @(disp,pc),Rn */
	r10 += r11;  /* 0C0A07DA add Rm,Rn */
	IF(0x0C0A07DCu); r7 = R32(r0 + r10); UPD(0x0C0A07DEu, 2);  /* 0C0A07DC mov.l @(r0,Rm),Rn */
	W32(r6, r7); UPD(0x0C0A07E0u, 1);  /* 0C0A07DE mov.l Rm,@Rn */
	r6 += 0xFFFFFFB8u;  /* 0C0A07E0 add #imm,Rn */
	UPD(0x0C0A07E2u, 1);
L_0C0A07E2: BLKS(0x0C0A07E2u);
	r0 = R32(r6 + 0x24u); UPD(0x0C0A07E4u, 1);  /* 0C0A07E2 mov.l @(disp,Rm),Rn */
	r13 = 0x1200000u; UPD(0x0C0A07E6u, 1);  /* 0C0A07E4 mov.l @(disp,pc),Rn */
	T = (s32)r0 > (s32)r13;  /* 0C0A07E6 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A0786u, 4); goto L_0C0A0786; } goto L_0C0A07EC; }  /* 0C0A07E8 bt/s */
L_0C0A07EC: BLKS(0x0C0A07ECu);
	r4 = r6;  /* 0C0A07EC mov Rm,Rn */
	r0 = R32(r14); UPD(0x0C0A07F0u, 3);  /* 0C0A07EE mov.l @Rm,Rn */
	r4 += 0x3Cu;  /* 0C0A07F0 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r4); UPD(0x0C0A07F4u, 2);  /* 0C0A07F2 mov.w @Rm,Rn */
	r0 &= r5;  /* 0C0A07F4 and Rm,Rn */
	IF(0x0C0A07F6u); r0 >>= 8;  /* 0C0A07F6 shlr8 Rn */
	r2 = (u32)(s32)(s16)r7;  /* 0C0A07F8 exts.w Rm,Rn */
	r8 = 0xEu;  /* 0C0A07FA mov #imm,Rn */
	r0 += r0;  /* 0C0A07FC add Rm,Rn */
	T = (s32)r8 >= (s32)r2;  /* 0C0A07FE cmp/ge Rm,Rn */
	IF(0x0C0A0800u); r0 >>= 8;  /* 0C0A0800 shlr8 Rn */
	IF(0x0C0A0802u); r1 = T;  /* 0C0A0802 movt Rn */
	r0 &= 0x1u;  /* 0C0A0804 and #imm,r0 */
	r1 &= r0;  /* 0C0A0806 and Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0A0808 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A0786u, 14); goto L_0C0A0786; } goto L_0C0A080E; }  /* 0C0A080A bf/s */
L_0C0A080E: BLKS(0x0C0A080Eu);
	T = (r2 & r2) == 0;  /* 0C0A080E tst Rm,Rn */
	if (T) { UPD(0x0C0A0786u, 5); goto L_0C0A0786; }  /* 0C0A0810 bt */
L_0C0A0812: BLKS(0x0C0A0812u);
	r0 = R32(r14 + 0x4u); UPD(0x0C0A0814u, 1);  /* 0C0A0812 mov.l @(disp,Rm),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0A0814 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A0820u, 4); goto L_0C0A0820; }  /* 0C0A0816 bf */
L_0C0A0818: BLKS(0x0C0A0818u);
	r3 = r7;  /* 0C0A0818 mov Rm,Rn */
	r3 -= r0;  /* 0C0A081A sub Rm,Rn */
	{ W16(r4, r3); /* slot mov.w Rm,@Rn */ UPD(0x0C0A0784u, 5); goto L_0C0A0784; }  /* 0C0A081C bra */
L_0C0A0820: BLKS(0x0C0A0820u);
	W16(r4, r1); UPD(0x0C0A0822u, 1);  /* 0C0A0820 mov.w Rm,@Rn */
	r4 = 0x1000000u; UPD(0x0C0A0824u, 1);  /* 0C0A0822 mov.l @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0A0826u, 1);  /* 0C0A0824 mov.l @Rm,Rn */
	T = (r1 & r4) == 0;  /* 0C0A0826 tst Rm,Rn */
	if (T) { UPD(0x0C0A0830u, 4); goto L_0C0A0830; }  /* 0C0A0828 bt */
L_0C0A082A: BLKS(0x0C0A082Au);
	r2 = 0x4000000u; UPD(0x0C0A082Cu, 1);  /* 0C0A082A mov.l @(disp,pc),Rn */
	r5 |= r2;  /* 0C0A082C or Rm,Rn */
	W32(r6, r5); UPD(0x0C0A0830u, 2);  /* 0C0A082E mov.l Rm,@Rn */
L_0C0A0830: BLKS(0x0C0A0830u);
	r0 = R32(r6 + 0x4u); UPD(0x0C0A0832u, 1);  /* 0C0A0830 mov.l @(disp,Rm),Rn */
	r9 = 0xC1D97A8u; UPD(0x0C0A0834u, 1);  /* 0C0A0832 mov.l @(disp,pc),Rn */
	IF(0x0C0A0834u); r0 <<= 2;  /* 0C0A0834 shll2 Rn */
	IF(0x0C0A0836u); r6 = R32(r0 + r9); UPD(0x0C0A0838u, 2);  /* 0C0A0836 mov.l @(r0,Rm),Rn */
	IF(0x0C0A0838u); { u32 t_ = r6; PR = 0x0C0A083Cu; r4 = r3; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0A083Cu); }  /* 0C0A0838 jsr @Rn */
L_0C0A083C: BLKS(0x0C0A083Cu);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0A0786u, 3); goto L_0C0A0786; }  /* 0C0A083C bra */
}

/* FUN_0c0a0870 */
void f_0C0A0870(sh3_t *c)
{
	LOCALS;
L_0C0A0870: BLKS(0x0C0A0870u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0872u, 1);  /* 0C0A0870 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0874u, 1);  /* 0C0A0872 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0876u, 1);  /* 0C0A0874 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0A0878u, 1);  /* 0C0A0876 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0A0878 exts.w Rm,Rn */
	IF(0x0C0A087Au); MACL = r10 * r2;  /* 0C0A087A mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A087Eu, 4);  /* 0C0A087C mov.l Rm,@-Rn */
	r4 = 0x8u;  /* 0C0A087E mov #imm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A0882u, 2);  /* 0C0A0880 mov.l @(disp,pc),Rn */
	IF(0x0C0A0882u); r8 = MACL;  /* 0C0A0882 sts macl,Rn */
	r9 = 0xB0u; UPD(0x0C0A0886u, 2);  /* 0C0A0884 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C0A0886 add Rm,Rn */
	IF(0x0C0A0888u); r15 -= 4; W32(r15, PR); UPD(0x0C0A088Au, 2);  /* 0C0A0888 sts.l pr,@-Rn */
	r9 += r8;  /* 0C0A088A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A088Eu, 2);  /* 0C0A088C mov.b @Rm,Rn */
	r14 = r15;  /* 0C0A088E mov Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0A0890 extu.b Rm,Rn */
	r0 = 0xC0AC960u; UPD(0x0C0A0894u, 3);  /* 0C0A0892 mov.l @(disp,pc),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A0896u, 1);  /* 0C0A0894 mov.l @(disp,Rm),Rn */
	IF(0x0C0A0896u); { u32 t_ = r0; PR = 0x0C0A089Au; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC960, 0x0C0AC960u, 0x0C0A089Au); }  /* 0C0A0896 jsr @Rn */
L_0C0A089A: BLKS(0x0C0A089Au);
	r0 = 0xC0AFE40u; UPD(0x0C0A089Cu, 1);  /* 0C0A089A mov.l @(disp,pc),Rn */
	IF(0x0C0A089Cu); { u32 t_ = r0; PR = 0x0C0A08A0u; IF(0x0C0A089Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A08A0u); }  /* 0C0A089C jsr @Rn */
L_0C0A08A0: BLKS(0x0C0A08A0u);
	r0 &= 0x3u;  /* 0C0A08A0 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A08A2 tst Rm,Rn */
	if (T) { UPD(0x0C0A0900u, 5); goto L_0C0A0900; }  /* 0C0A08A4 bt */
L_0C0A08A6: BLKS(0x0C0A08A6u);
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A08A8u, 1);  /* 0C0A08A6 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A08A8 add #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C0A08AA extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0A08AEu, 3);  /* 0C0A08AC mov.l Rm,@Rn */
	r0 = r8;  /* 0C0A08AE mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C0A08B2u, 2);  /* 0C0A08B0 mov.w @(disp,pc),Rn */
	IF(0x0C0A08B2u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0A08B4u, 1);  /* 0C0A08B2 mov.b @(r0,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C0A08B4 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0A08B8u, 2);  /* 0C0A08B6 mov.l Rm,@(disp,Rn) */
	r5 = 0xBu;  /* 0C0A08B8 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0A08BCu, 2);  /* 0C0A08BA mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A08BEu, 1);  /* 0C0A08BC mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0A08C0u, 1);  /* 0C0A08BE mov.l @(disp,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C0A08C2u, 1);  /* 0C0A08C0 mov.l @(disp,pc),Rn */
L_0C0A08C2: BLKS(0x0C0A08C2u);
	IF(0x0C0A08C2u); { u32 t_ = r0; PR = 0x0C0A08C6u; r8 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0A08C6u); }  /* 0C0A08C2 jsr @Rn */
L_0C0A08C6: BLKS(0x0C0A08C6u);
	r6 = 0xB4u; UPD(0x0C0A08C8u, 1);  /* 0C0A08C6 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0A08C8 add #imm,Rn */
	IF(0x0C0A08CAu); MACL = r10 * r6;  /* 0C0A08CA mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0A08CEu, 4);  /* 0C0A08CC mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0A08CE mov #imm,Rn */
	IF(0x0C0A08D0u); r10 = MACL;  /* 0C0A08D0 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A08D4u, 3);  /* 0C0A08D2 mov.w @(disp,pc),Rn */
	r10 += r5;  /* 0C0A08D4 add Rm,Rn */
	r9 = 0xC06CE70u; UPD(0x0C0A08D8u, 2);  /* 0C0A08D6 mov.l @(disp,pc),Rn */
	IF(0x0C0A08D8u); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0A08DAu, 1);  /* 0C0A08D8 mov.b @(r0,Rm),Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C0A08DCu, 1);  /* 0C0A08DA mov.l @(disp,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C0A08DC extu.b Rm,Rn */
	IF(0x0C0A08DEu); { u32 t_ = r9; PR = 0x0C0A08E2u; r6 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C0A08E2u); }  /* 0C0A08DE jsr @Rn */
L_0C0A08E2: BLKS(0x0C0A08E2u);
	W32(r10, r8); UPD(0x0C0A08E4u, 1);  /* 0C0A08E2 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A08E4 mov Rm,Rn */
	IF(0x0C0A08E6u); PR = R32(r15); r15 += 4; UPD(0x0C0A08E8u, 2);  /* 0C0A08E6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A08EAu, 1);  /* 0C0A08E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A08ECu, 1);  /* 0C0A08EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A08EEu, 1);  /* 0C0A08EC mov.l @Rm+,Rn */
	IF(0x0C0A08EEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A08EE rts */
L_0C0A0900: BLKS(0x0C0A0900u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A0902u, 1);  /* 0C0A0900 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0902 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0A0904 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0A0908u, 3);  /* 0C0A0906 mov.l Rm,@Rn */
	r5 = 0xBu;  /* 0C0A0908 mov #imm,Rn */
	r3 = 0xA9u; UPD(0x0C0A090Cu, 2);  /* 0C0A090A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0A090C mov Rm,Rn */
	IF(0x0C0A090Eu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0910u, 2);  /* 0C0A090E mov.b @(r0,Rm),Rn */
	r9 = r2 & 0xFF;  /* 0C0A0910 extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0A0914u, 2);  /* 0C0A0912 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0A0916u, 1);  /* 0C0A0914 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0A0918u, 1);  /* 0C0A0916 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A091Au, 1);  /* 0C0A0918 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A08C2u, 3); goto L_0C0A08C2; }  /* 0C0A091A bra */
}

/* FUN_0c0a0940 */
void f_0C0A0940(sh3_t *c)
{
	LOCALS;
L_0C0A0940: BLKS(0x0C0A0940u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0942u, 1);  /* 0C0A0940 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0944u, 1);  /* 0C0A0942 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0946u, 1);  /* 0C0A0944 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0A0948u, 1);  /* 0C0A0946 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0A0948 exts.w Rm,Rn */
	IF(0x0C0A094Au); MACL = r10 * r2;  /* 0C0A094A mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A094Eu, 4);  /* 0C0A094C mov.l Rm,@-Rn */
	r4 = 0xCu;  /* 0C0A094E mov #imm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A0952u, 2);  /* 0C0A0950 mov.l @(disp,pc),Rn */
	IF(0x0C0A0952u); r8 = MACL;  /* 0C0A0952 sts macl,Rn */
	r9 = 0xB0u; UPD(0x0C0A0956u, 2);  /* 0C0A0954 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C0A0956 add Rm,Rn */
	IF(0x0C0A0958u); r15 -= 4; W32(r15, PR); UPD(0x0C0A095Au, 2);  /* 0C0A0958 sts.l pr,@-Rn */
	r9 += r8;  /* 0C0A095A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A095Eu, 2);  /* 0C0A095C mov.b @Rm,Rn */
	r14 = r15;  /* 0C0A095E mov Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0A0960 extu.b Rm,Rn */
	r0 = 0xC0AC960u; UPD(0x0C0A0964u, 3);  /* 0C0A0962 mov.l @(disp,pc),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A0966u, 1);  /* 0C0A0964 mov.l @(disp,Rm),Rn */
	IF(0x0C0A0966u); { u32 t_ = r0; PR = 0x0C0A096Au; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC960, 0x0C0AC960u, 0x0C0A096Au); }  /* 0C0A0966 jsr @Rn */
L_0C0A096A: BLKS(0x0C0A096Au);
	r0 = 0xC0AFE40u; UPD(0x0C0A096Cu, 1);  /* 0C0A096A mov.l @(disp,pc),Rn */
	IF(0x0C0A096Cu); { u32 t_ = r0; PR = 0x0C0A0970u; IF(0x0C0A096Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A0970u); }  /* 0C0A096C jsr @Rn */
L_0C0A0970: BLKS(0x0C0A0970u);
	r0 &= 0x3u;  /* 0C0A0970 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A0972 tst Rm,Rn */
	if (T) { UPD(0x0C0A09D0u, 5); goto L_0C0A09D0; }  /* 0C0A0974 bt */
L_0C0A0976: BLKS(0x0C0A0976u);
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A0978u, 1);  /* 0C0A0976 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0978 add #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C0A097A extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0A097Eu, 3);  /* 0C0A097C mov.l Rm,@Rn */
	r0 = r8;  /* 0C0A097E mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C0A0982u, 2);  /* 0C0A0980 mov.w @(disp,pc),Rn */
	IF(0x0C0A0982u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0A0984u, 1);  /* 0C0A0982 mov.b @(r0,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C0A0984 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0A0988u, 2);  /* 0C0A0986 mov.l Rm,@(disp,Rn) */
	r5 = 0xCu;  /* 0C0A0988 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0A098Cu, 2);  /* 0C0A098A mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A098Eu, 1);  /* 0C0A098C mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0A0990u, 1);  /* 0C0A098E mov.l @(disp,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C0A0992u, 1);  /* 0C0A0990 mov.l @(disp,pc),Rn */
L_0C0A0992: BLKS(0x0C0A0992u);
	IF(0x0C0A0992u); { u32 t_ = r0; PR = 0x0C0A0996u; r8 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0A0996u); }  /* 0C0A0992 jsr @Rn */
L_0C0A0996: BLKS(0x0C0A0996u);
	r6 = 0xB4u; UPD(0x0C0A0998u, 1);  /* 0C0A0996 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0A0998 add #imm,Rn */
	IF(0x0C0A099Au); MACL = r10 * r6;  /* 0C0A099A mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0A099Eu, 4);  /* 0C0A099C mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0A099E mov #imm,Rn */
	IF(0x0C0A09A0u); r10 = MACL;  /* 0C0A09A0 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A09A4u, 3);  /* 0C0A09A2 mov.w @(disp,pc),Rn */
	r10 += r5;  /* 0C0A09A4 add Rm,Rn */
	r9 = 0xC06CE70u; UPD(0x0C0A09A8u, 2);  /* 0C0A09A6 mov.l @(disp,pc),Rn */
	IF(0x0C0A09A8u); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0A09AAu, 1);  /* 0C0A09A8 mov.b @(r0,Rm),Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C0A09ACu, 1);  /* 0C0A09AA mov.l @(disp,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C0A09AC extu.b Rm,Rn */
	IF(0x0C0A09AEu); { u32 t_ = r9; PR = 0x0C0A09B2u; r6 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C0A09B2u); }  /* 0C0A09AE jsr @Rn */
L_0C0A09B2: BLKS(0x0C0A09B2u);
	W32(r10, r8); UPD(0x0C0A09B4u, 1);  /* 0C0A09B2 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A09B4 mov Rm,Rn */
	IF(0x0C0A09B6u); PR = R32(r15); r15 += 4; UPD(0x0C0A09B8u, 2);  /* 0C0A09B6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A09BAu, 1);  /* 0C0A09B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A09BCu, 1);  /* 0C0A09BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A09BEu, 1);  /* 0C0A09BC mov.l @Rm+,Rn */
	IF(0x0C0A09BEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A09BE rts */
L_0C0A09D0: BLKS(0x0C0A09D0u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A09D2u, 1);  /* 0C0A09D0 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A09D2 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0A09D4 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0A09D8u, 3);  /* 0C0A09D6 mov.l Rm,@Rn */
	r5 = 0xCu;  /* 0C0A09D8 mov #imm,Rn */
	r3 = 0xA9u; UPD(0x0C0A09DCu, 2);  /* 0C0A09DA mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0A09DC mov Rm,Rn */
	IF(0x0C0A09DEu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A09E0u, 2);  /* 0C0A09DE mov.b @(r0,Rm),Rn */
	r9 = r2 & 0xFF;  /* 0C0A09E0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0A09E4u, 2);  /* 0C0A09E2 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0A09E6u, 1);  /* 0C0A09E4 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0A09E8u, 1);  /* 0C0A09E6 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A09EAu, 1);  /* 0C0A09E8 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A0992u, 3); goto L_0C0A0992; }  /* 0C0A09EA bra */
}

/* FUN_0c0a0a10 */
void f_0C0A0A10(sh3_t *c)
{
	LOCALS;
L_0C0A0A10: BLKS(0x0C0A0A10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0A12u, 1);  /* 0C0A0A10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0A14u, 1);  /* 0C0A0A12 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0A16u, 1);  /* 0C0A0A14 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0A0A18u, 1);  /* 0C0A0A16 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0A0A18 exts.w Rm,Rn */
	IF(0x0C0A0A1Au); MACL = r10 * r2;  /* 0C0A0A1A mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0A1Eu, 4);  /* 0C0A0A1C mov.l Rm,@-Rn */
	r4 = 0x10u;  /* 0C0A0A1E mov #imm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A0A22u, 2);  /* 0C0A0A20 mov.l @(disp,pc),Rn */
	IF(0x0C0A0A22u); r8 = MACL;  /* 0C0A0A22 sts macl,Rn */
	r9 = 0xB0u; UPD(0x0C0A0A26u, 2);  /* 0C0A0A24 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C0A0A26 add Rm,Rn */
	IF(0x0C0A0A28u); r15 -= 4; W32(r15, PR); UPD(0x0C0A0A2Au, 2);  /* 0C0A0A28 sts.l pr,@-Rn */
	r9 += r8;  /* 0C0A0A2A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A0A2Eu, 2);  /* 0C0A0A2C mov.b @Rm,Rn */
	r14 = r15;  /* 0C0A0A2E mov Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0A0A30 extu.b Rm,Rn */
	r0 = 0xC0AC960u; UPD(0x0C0A0A34u, 3);  /* 0C0A0A32 mov.l @(disp,pc),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A0A36u, 1);  /* 0C0A0A34 mov.l @(disp,Rm),Rn */
	IF(0x0C0A0A36u); { u32 t_ = r0; PR = 0x0C0A0A3Au; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC960, 0x0C0AC960u, 0x0C0A0A3Au); }  /* 0C0A0A36 jsr @Rn */
L_0C0A0A3A: BLKS(0x0C0A0A3Au);
	r0 = 0xC0AFE40u; UPD(0x0C0A0A3Cu, 1);  /* 0C0A0A3A mov.l @(disp,pc),Rn */
	IF(0x0C0A0A3Cu); { u32 t_ = r0; PR = 0x0C0A0A40u; IF(0x0C0A0A3Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A0A40u); }  /* 0C0A0A3C jsr @Rn */
L_0C0A0A40: BLKS(0x0C0A0A40u);
	r0 &= 0x3u;  /* 0C0A0A40 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A0A42 tst Rm,Rn */
	if (T) { UPD(0x0C0A0AA0u, 5); goto L_0C0A0AA0; }  /* 0C0A0A44 bt */
L_0C0A0A46: BLKS(0x0C0A0A46u);
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A0A48u, 1);  /* 0C0A0A46 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0A48 add #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C0A0A4A extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0A0A4Eu, 3);  /* 0C0A0A4C mov.l Rm,@Rn */
	r0 = r8;  /* 0C0A0A4E mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C0A0A52u, 2);  /* 0C0A0A50 mov.w @(disp,pc),Rn */
	IF(0x0C0A0A52u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0A0A54u, 1);  /* 0C0A0A52 mov.b @(r0,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C0A0A54 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0A0A58u, 2);  /* 0C0A0A56 mov.l Rm,@(disp,Rn) */
	r5 = 0xDu;  /* 0C0A0A58 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0A0A5Cu, 2);  /* 0C0A0A5A mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A0A5Eu, 1);  /* 0C0A0A5C mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0A0A60u, 1);  /* 0C0A0A5E mov.l @(disp,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C0A0A62u, 1);  /* 0C0A0A60 mov.l @(disp,pc),Rn */
L_0C0A0A62: BLKS(0x0C0A0A62u);
	IF(0x0C0A0A62u); { u32 t_ = r0; PR = 0x0C0A0A66u; r8 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0A0A66u); }  /* 0C0A0A62 jsr @Rn */
L_0C0A0A66: BLKS(0x0C0A0A66u);
	r6 = 0xB4u; UPD(0x0C0A0A68u, 1);  /* 0C0A0A66 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0A0A68 add #imm,Rn */
	IF(0x0C0A0A6Au); MACL = r10 * r6;  /* 0C0A0A6A mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0A0A6Eu, 4);  /* 0C0A0A6C mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0A0A6E mov #imm,Rn */
	IF(0x0C0A0A70u); r10 = MACL;  /* 0C0A0A70 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A0A74u, 3);  /* 0C0A0A72 mov.w @(disp,pc),Rn */
	r10 += r5;  /* 0C0A0A74 add Rm,Rn */
	r9 = 0xC06CE70u; UPD(0x0C0A0A78u, 2);  /* 0C0A0A76 mov.l @(disp,pc),Rn */
	IF(0x0C0A0A78u); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0A0A7Au, 1);  /* 0C0A0A78 mov.b @(r0,Rm),Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C0A0A7Cu, 1);  /* 0C0A0A7A mov.l @(disp,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C0A0A7C extu.b Rm,Rn */
	IF(0x0C0A0A7Eu); { u32 t_ = r9; PR = 0x0C0A0A82u; r6 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C0A0A82u); }  /* 0C0A0A7E jsr @Rn */
L_0C0A0A82: BLKS(0x0C0A0A82u);
	W32(r10, r8); UPD(0x0C0A0A84u, 1);  /* 0C0A0A82 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A0A84 mov Rm,Rn */
	IF(0x0C0A0A86u); PR = R32(r15); r15 += 4; UPD(0x0C0A0A88u, 2);  /* 0C0A0A86 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A0A8Au, 1);  /* 0C0A0A88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A0A8Cu, 1);  /* 0C0A0A8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A0A8Eu, 1);  /* 0C0A0A8C mov.l @Rm+,Rn */
	IF(0x0C0A0A8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A0A8E rts */
L_0C0A0AA0: BLKS(0x0C0A0AA0u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A0AA2u, 1);  /* 0C0A0AA0 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0AA2 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0A0AA4 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0A0AA8u, 3);  /* 0C0A0AA6 mov.l Rm,@Rn */
	r5 = 0xDu;  /* 0C0A0AA8 mov #imm,Rn */
	r3 = 0xA9u; UPD(0x0C0A0AACu, 2);  /* 0C0A0AAA mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0A0AAC mov Rm,Rn */
	IF(0x0C0A0AAEu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0AB0u, 2);  /* 0C0A0AAE mov.b @(r0,Rm),Rn */
	r9 = r2 & 0xFF;  /* 0C0A0AB0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0A0AB4u, 2);  /* 0C0A0AB2 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0A0AB6u, 1);  /* 0C0A0AB4 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0A0AB8u, 1);  /* 0C0A0AB6 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A0ABAu, 1);  /* 0C0A0AB8 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A0A62u, 3); goto L_0C0A0A62; }  /* 0C0A0ABA bra */
}

/* FUN_0c0a0ae0 */
void f_0C0A0AE0(sh3_t *c)
{
	LOCALS;
L_0C0A0AE0: BLKS(0x0C0A0AE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0AE2u, 1);  /* 0C0A0AE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0AE4u, 1);  /* 0C0A0AE2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0AE6u, 1);  /* 0C0A0AE4 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0A0AE8u, 1);  /* 0C0A0AE6 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0A0AE8 exts.w Rm,Rn */
	IF(0x0C0A0AEAu); MACL = r10 * r2;  /* 0C0A0AEA mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0AEEu, 4);  /* 0C0A0AEC mov.l Rm,@-Rn */
	r4 = 0x14u;  /* 0C0A0AEE mov #imm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A0AF2u, 2);  /* 0C0A0AF0 mov.l @(disp,pc),Rn */
	IF(0x0C0A0AF2u); r8 = MACL;  /* 0C0A0AF2 sts macl,Rn */
	r9 = 0xB0u; UPD(0x0C0A0AF6u, 2);  /* 0C0A0AF4 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C0A0AF6 add Rm,Rn */
	IF(0x0C0A0AF8u); r15 -= 4; W32(r15, PR); UPD(0x0C0A0AFAu, 2);  /* 0C0A0AF8 sts.l pr,@-Rn */
	r9 += r8;  /* 0C0A0AFA add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A0AFEu, 2);  /* 0C0A0AFC mov.b @Rm,Rn */
	r14 = r15;  /* 0C0A0AFE mov Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0A0B00 extu.b Rm,Rn */
	r0 = 0xC0AC960u; UPD(0x0C0A0B04u, 3);  /* 0C0A0B02 mov.l @(disp,pc),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A0B06u, 1);  /* 0C0A0B04 mov.l @(disp,Rm),Rn */
	IF(0x0C0A0B06u); { u32 t_ = r0; PR = 0x0C0A0B0Au; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC960, 0x0C0AC960u, 0x0C0A0B0Au); }  /* 0C0A0B06 jsr @Rn */
L_0C0A0B0A: BLKS(0x0C0A0B0Au);
	r0 = 0xC0AFE40u; UPD(0x0C0A0B0Cu, 1);  /* 0C0A0B0A mov.l @(disp,pc),Rn */
	IF(0x0C0A0B0Cu); { u32 t_ = r0; PR = 0x0C0A0B10u; IF(0x0C0A0B0Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A0B10u); }  /* 0C0A0B0C jsr @Rn */
L_0C0A0B10: BLKS(0x0C0A0B10u);
	r0 &= 0x3u;  /* 0C0A0B10 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A0B12 tst Rm,Rn */
	if (T) { UPD(0x0C0A0B60u, 5); goto L_0C0A0B60; }  /* 0C0A0B14 bt */
L_0C0A0B16: BLKS(0x0C0A0B16u);
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A0B18u, 1);  /* 0C0A0B16 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0B18 add #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C0A0B1A extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0A0B1Eu, 3);  /* 0C0A0B1C mov.l Rm,@Rn */
	r0 = r8;  /* 0C0A0B1E mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C0A0B22u, 2);  /* 0C0A0B20 mov.w @(disp,pc),Rn */
	IF(0x0C0A0B22u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0A0B24u, 1);  /* 0C0A0B22 mov.b @(r0,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C0A0B24 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0A0B28u, 2);  /* 0C0A0B26 mov.l Rm,@(disp,Rn) */
	r5 = 0xEu;  /* 0C0A0B28 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0A0B2Cu, 2);  /* 0C0A0B2A mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A0B2Eu, 1);  /* 0C0A0B2C mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0A0B30u, 1);  /* 0C0A0B2E mov.l @(disp,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C0A0B32u, 1);  /* 0C0A0B30 mov.l @(disp,pc),Rn */
L_0C0A0B32: BLKS(0x0C0A0B32u);
	IF(0x0C0A0B32u); { u32 t_ = r0; PR = 0x0C0A0B36u; IF(0x0C0A0B34u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A0B36u); }  /* 0C0A0B32 jsr @Rn */
L_0C0A0B36: BLKS(0x0C0A0B36u);
	r5 = 0xB4u; UPD(0x0C0A0B38u, 1);  /* 0C0A0B36 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0A0B38 add #imm,Rn */
	IF(0x0C0A0B3Au); MACL = r10 * r5;  /* 0C0A0B3A mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C0A0B3Eu, 4);  /* 0C0A0B3C mov.l @(disp,pc),Rn */
	IF(0x0C0A0B3Eu); r0 = MACL;  /* 0C0A0B3E sts macl,Rn */
	r10 = 0x0u;  /* 0C0A0B40 mov #imm,Rn */
	IF(0x0C0A0B42u); W32(r0 + r8, r10); UPD(0x0C0A0B44u, 3);  /* 0C0A0B42 mov.l Rm,@(r0,Rn) */
	r15 = r14;  /* 0C0A0B44 mov Rm,Rn */
	IF(0x0C0A0B46u); PR = R32(r15); r15 += 4; UPD(0x0C0A0B48u, 2);  /* 0C0A0B46 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A0B4Au, 1);  /* 0C0A0B48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A0B4Cu, 1);  /* 0C0A0B4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A0B4Eu, 1);  /* 0C0A0B4C mov.l @Rm+,Rn */
	IF(0x0C0A0B4Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A0B4E rts */
L_0C0A0B60: BLKS(0x0C0A0B60u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A0B62u, 1);  /* 0C0A0B60 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0B62 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0A0B64 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0A0B68u, 3);  /* 0C0A0B66 mov.l Rm,@Rn */
	r5 = 0xEu;  /* 0C0A0B68 mov #imm,Rn */
	r3 = 0xA9u; UPD(0x0C0A0B6Cu, 2);  /* 0C0A0B6A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0A0B6C mov Rm,Rn */
	IF(0x0C0A0B6Eu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0B70u, 2);  /* 0C0A0B6E mov.b @(r0,Rm),Rn */
	r9 = r2 & 0xFF;  /* 0C0A0B70 extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0A0B74u, 2);  /* 0C0A0B72 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0A0B76u, 1);  /* 0C0A0B74 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0A0B78u, 1);  /* 0C0A0B76 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A0B7Au, 1);  /* 0C0A0B78 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A0B32u, 3); goto L_0C0A0B32; }  /* 0C0A0B7A bra */
}

/* FUN_0c0a0ba0 */
void f_0C0A0BA0(sh3_t *c)
{
	LOCALS;
L_0C0A0BA0: BLKS(0x0C0A0BA0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0BA2u, 1);  /* 0C0A0BA0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0BA4u, 1);  /* 0C0A0BA2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0BA6u, 1);  /* 0C0A0BA4 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0A0BA8u, 1);  /* 0C0A0BA6 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0A0BA8 exts.w Rm,Rn */
	IF(0x0C0A0BAAu); MACL = r10 * r2;  /* 0C0A0BAA mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0BAEu, 4);  /* 0C0A0BAC mov.l Rm,@-Rn */
	r4 = 0x14u;  /* 0C0A0BAE mov #imm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A0BB2u, 2);  /* 0C0A0BB0 mov.l @(disp,pc),Rn */
	IF(0x0C0A0BB2u); r8 = MACL;  /* 0C0A0BB2 sts macl,Rn */
	r9 = 0xB0u; UPD(0x0C0A0BB6u, 2);  /* 0C0A0BB4 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C0A0BB6 add Rm,Rn */
	IF(0x0C0A0BB8u); r15 -= 4; W32(r15, PR); UPD(0x0C0A0BBAu, 2);  /* 0C0A0BB8 sts.l pr,@-Rn */
	r9 += r8;  /* 0C0A0BBA add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A0BBEu, 2);  /* 0C0A0BBC mov.b @Rm,Rn */
	r14 = r15;  /* 0C0A0BBE mov Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0A0BC0 extu.b Rm,Rn */
	r0 = 0xC0AC960u; UPD(0x0C0A0BC4u, 3);  /* 0C0A0BC2 mov.l @(disp,pc),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A0BC6u, 1);  /* 0C0A0BC4 mov.l @(disp,Rm),Rn */
	IF(0x0C0A0BC6u); { u32 t_ = r0; PR = 0x0C0A0BCAu; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC960, 0x0C0AC960u, 0x0C0A0BCAu); }  /* 0C0A0BC6 jsr @Rn */
L_0C0A0BCA: BLKS(0x0C0A0BCAu);
	r0 = 0xC0AFE40u; UPD(0x0C0A0BCCu, 1);  /* 0C0A0BCA mov.l @(disp,pc),Rn */
	IF(0x0C0A0BCCu); { u32 t_ = r0; PR = 0x0C0A0BD0u; IF(0x0C0A0BCEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A0BD0u); }  /* 0C0A0BCC jsr @Rn */
L_0C0A0BD0: BLKS(0x0C0A0BD0u);
	r0 &= 0x3u;  /* 0C0A0BD0 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A0BD2 tst Rm,Rn */
	if (T) { UPD(0x0C0A0C20u, 5); goto L_0C0A0C20; }  /* 0C0A0BD4 bt */
L_0C0A0BD6: BLKS(0x0C0A0BD6u);
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A0BD8u, 1);  /* 0C0A0BD6 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0BD8 add #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C0A0BDA extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0A0BDEu, 3);  /* 0C0A0BDC mov.l Rm,@Rn */
	r0 = r8;  /* 0C0A0BDE mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C0A0BE2u, 2);  /* 0C0A0BE0 mov.w @(disp,pc),Rn */
	IF(0x0C0A0BE2u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0A0BE4u, 1);  /* 0C0A0BE2 mov.b @(r0,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C0A0BE4 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0A0BE8u, 2);  /* 0C0A0BE6 mov.l Rm,@(disp,Rn) */
	r5 = 0xFu;  /* 0C0A0BE8 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0A0BECu, 2);  /* 0C0A0BEA mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A0BEEu, 1);  /* 0C0A0BEC mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0A0BF0u, 1);  /* 0C0A0BEE mov.l @(disp,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C0A0BF2u, 1);  /* 0C0A0BF0 mov.l @(disp,pc),Rn */
L_0C0A0BF2: BLKS(0x0C0A0BF2u);
	IF(0x0C0A0BF2u); { u32 t_ = r0; PR = 0x0C0A0BF6u; IF(0x0C0A0BF4u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A0BF6u); }  /* 0C0A0BF2 jsr @Rn */
L_0C0A0BF6: BLKS(0x0C0A0BF6u);
	r5 = 0xB4u; UPD(0x0C0A0BF8u, 1);  /* 0C0A0BF6 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0A0BF8 add #imm,Rn */
	IF(0x0C0A0BFAu); MACL = r10 * r5;  /* 0C0A0BFA mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C0A0BFEu, 4);  /* 0C0A0BFC mov.l @(disp,pc),Rn */
	IF(0x0C0A0BFEu); r0 = MACL;  /* 0C0A0BFE sts macl,Rn */
	r10 = 0x0u;  /* 0C0A0C00 mov #imm,Rn */
	IF(0x0C0A0C02u); W32(r0 + r8, r10); UPD(0x0C0A0C04u, 3);  /* 0C0A0C02 mov.l Rm,@(r0,Rn) */
	r15 = r14;  /* 0C0A0C04 mov Rm,Rn */
	IF(0x0C0A0C06u); PR = R32(r15); r15 += 4; UPD(0x0C0A0C08u, 2);  /* 0C0A0C06 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A0C0Au, 1);  /* 0C0A0C08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A0C0Cu, 1);  /* 0C0A0C0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A0C0Eu, 1);  /* 0C0A0C0C mov.l @Rm+,Rn */
	IF(0x0C0A0C0Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A0C0E rts */
L_0C0A0C20: BLKS(0x0C0A0C20u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A0C22u, 1);  /* 0C0A0C20 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0C22 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0A0C24 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0A0C28u, 3);  /* 0C0A0C26 mov.l Rm,@Rn */
	r5 = 0xFu;  /* 0C0A0C28 mov #imm,Rn */
	r3 = 0xA9u; UPD(0x0C0A0C2Cu, 2);  /* 0C0A0C2A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0A0C2C mov Rm,Rn */
	IF(0x0C0A0C2Eu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0C30u, 2);  /* 0C0A0C2E mov.b @(r0,Rm),Rn */
	r9 = r2 & 0xFF;  /* 0C0A0C30 extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0A0C34u, 2);  /* 0C0A0C32 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0A0C36u, 1);  /* 0C0A0C34 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0A0C38u, 1);  /* 0C0A0C36 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A0C3Au, 1);  /* 0C0A0C38 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A0BF2u, 3); goto L_0C0A0BF2; }  /* 0C0A0C3A bra */
}

void f_0C0A0C60(sh3_t *c)
{
	LOCALS;
L_0C0A0C60: BLKS(0x0C0A0C60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0C62u, 1);  /* 0C0A0C60 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0C64u, 1);  /* 0C0A0C62 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A0C64 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0C68u, 2);  /* 0C0A0C66 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0A0C68 mov #imm,Rn */
	r9 = 0xC050D70u; UPD(0x0C0A0C6Cu, 2);  /* 0C0A0C6A mov.l @(disp,pc),Rn */
	IF(0x0C0A0C6Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0A0C6Eu, 1);  /* 0C0A0C6C sts.l pr,@-Rn */
	IF(0x0C0A0C6Eu); { u32 t_ = r9; PR = 0x0C0A0C72u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A0C72u); }  /* 0C0A0C6E jsr @Rn */
L_0C0A0C72: BLKS(0x0C0A0C72u);
	r2 = r0;  /* 0C0A0C72 mov Rm,Rn */
	r0 = 0x4u;  /* 0C0A0C74 mov #imm,Rn */
	T = r2 > r0;  /* 0C0A0C76 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0A0C80u, 6); goto L_0C0A0C80; }  /* 0C0A0C78 bf */
L_0C0A0C7A: BLKS(0x0C0A0C7Au);
	r15 += 0xFFFFFFF8u;  /* 0C0A0C7A add #imm,Rn */
	{ IF(0x0C0A0C7Eu); ; /* slot nop */ UPD(0x0C0A0DD0u, 4); goto L_0C0A0DD0; }  /* 0C0A0C7C bra */
L_0C0A0C80: BLKS(0x0C0A0C80u);
	r0 = 0xC0A0C90u;  /* 0C0A0C80 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0A0C82 add Rm,Rn */
	IF(0x0C0A0C84u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A0C86u, 3);  /* 0C0A0C84 mov.w @(r0,Rm),Rn */
	IF(0x0C0A0C86u); { u32 tv_ = (r3 + 0x0C0A0C8Au); u32 t_ = PHYS(tv_); IF(0x0C0A0C88u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A0CA0u: goto L_0C0A0CA0; case 0x0C0A0D00u: goto L_0C0A0D00; case 0x0C0A0D30u: goto L_0C0A0D30; case 0x0C0A0D70u: goto L_0C0A0D70; case 0x0C0A0DA0u: goto L_0C0A0DA0; default: JUMPD(tv_); } }  /* 0C0A0C86 braf Rn */
L_0C0A0CA0: BLKS(0x0C0A0CA0u);
	r0 = 0xB4u; UPD(0x0C0A0CA2u, 1);  /* 0C0A0CA0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0CA2 add #imm,Rn */
	IF(0x0C0A0CA4u); MACL = r8 * r0;  /* 0C0A0CA4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0CA8u, 4);  /* 0C0A0CA6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A0CAAu, 1);  /* 0C0A0CA8 mov.w @(disp,pc),Rn */
	IF(0x0C0A0CAAu); r3 = MACL;  /* 0C0A0CAA sts macl,Rn */
	r3 += r9;  /* 0C0A0CAC add Rm,Rn */
	IF(0x0C0A0CAEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0CB0u, 3);  /* 0C0A0CAE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A0CB0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A0CB4u, 2);  /* 0C0A0CB2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0CB4 add #imm,Rn */
	IF(0x0C0A0CB6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0CB8u, 2);  /* 0C0A0CB6 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A0CB8 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A0CBA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A0CBEu, 3);  /* 0C0A0CBC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C0A0CC0u, 1);  /* 0C0A0CBE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A0CC2u, 1);  /* 0C0A0CC0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0CC4u, 1);  /* 0C0A0CC2 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0A0CC6u, 1);  /* 0C0A0CC4 mov.l @(disp,Rm),Rn */
	IF(0x0C0A0CC6u); ;  /* 0C0A0CC6 nop */
	UPD(0x0C0A0CC8u, 1);
L_0C0A0CC8: BLKS(0x0C0A0CC8u);
	IF(0x0C0A0CC8u); { u32 t_ = r0; PR = 0x0C0A0CCCu; IF(0x0C0A0CCAu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A0CCCu); }  /* 0C0A0CC8 jsr @Rn */
L_0C0A0CCC: BLKS(0x0C0A0CCCu);
	r15 += 0x8u;  /* 0C0A0CCC add #imm,Rn */
	UPD(0x0C0A0CCEu, 1);
L_0C0A0CCE: BLKS(0x0C0A0CCEu);
	r4 = 0xB4u; UPD(0x0C0A0CD0u, 1);  /* 0C0A0CCE mov.w @(disp,pc),Rn */
	IF(0x0C0A0CD0u); MACL = r8 * r4;  /* 0C0A0CD0 mul.l Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0A0CD4u, 3);  /* 0C0A0CD2 mov.w @(disp,pc),Rn */
	IF(0x0C0A0CD4u); r8 = MACL;  /* 0C0A0CD4 sts macl,Rn */
	r8 += r9;  /* 0C0A0CD6 add Rm,Rn */
	r9 = 0xC7C37F8u; UPD(0x0C0A0CDAu, 3);  /* 0C0A0CD8 mov.l @(disp,pc),Rn */
	IF(0x0C0A0CDAu); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A0CDCu, 1);  /* 0C0A0CDA mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A0CDEu, 1);  /* 0C0A0CDC mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A0CDE extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A0CE2u, 2);  /* 0C0A0CE0 mov.l @(disp,Rm),Rn */
	IF(0x0C0A0CE2u); { u32 t_ = r9; PR = 0x0C0A0CE6u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C37F8, 0x0C7C37F8u, 0x0C0A0CE6u); }  /* 0C0A0CE2 jsr @Rn */
L_0C0A0CE6: BLKS(0x0C0A0CE6u);
	r9 = 0x0u;  /* 0C0A0CE6 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0A0CEAu, 2);  /* 0C0A0CE8 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A0CEA mov Rm,Rn */
	IF(0x0C0A0CECu); PR = R32(r15); r15 += 4; UPD(0x0C0A0CEEu, 2);  /* 0C0A0CEC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A0CF0u, 1);  /* 0C0A0CEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A0CF2u, 1);  /* 0C0A0CF0 mov.l @Rm+,Rn */
	IF(0x0C0A0CF2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A0CF2 rts */
L_0C0A0D00: BLKS(0x0C0A0D00u);
	r5 = 0xB4u; UPD(0x0C0A0D02u, 1);  /* 0C0A0D00 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0D02 add #imm,Rn */
	IF(0x0C0A0D04u); MACL = r8 * r5;  /* 0C0A0D04 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0D08u, 4);  /* 0C0A0D06 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A0D0Au, 1);  /* 0C0A0D08 mov.w @(disp,pc),Rn */
	IF(0x0C0A0D0Au); r3 = MACL;  /* 0C0A0D0A sts macl,Rn */
	r3 += r9;  /* 0C0A0D0C add Rm,Rn */
	IF(0x0C0A0D0Eu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0D10u, 3);  /* 0C0A0D0E mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A0D10 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A0D12 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A0D16u, 3);  /* 0C0A0D14 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0D16 add #imm,Rn */
	IF(0x0C0A0D18u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0D1Au, 2);  /* 0C0A0D18 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A0D1A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0A0D1Eu, 2);  /* 0C0A0D1C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C0A0D20u, 1);  /* 0C0A0D1E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A0D22u, 1);  /* 0C0A0D20 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0D24u, 1);  /* 0C0A0D22 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A0CC8u, 3); goto L_0C0A0CC8; }  /* 0C0A0D24 bra */
L_0C0A0D30: BLKS(0x0C0A0D30u);
	r3 = 0xB4u; UPD(0x0C0A0D32u, 1);  /* 0C0A0D30 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0A0D32 add #imm,Rn */
	IF(0x0C0A0D34u); MACL = r8 * r3;  /* 0C0A0D34 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0D38u, 4);  /* 0C0A0D36 mov.l @(disp,pc),Rn */
	IF(0x0C0A0D38u); r3 = MACL;  /* 0C0A0D38 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A0D3Cu, 2);  /* 0C0A0D3A mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0A0D3C add Rm,Rn */
	IF(0x0C0A0D3Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0D40u, 2);  /* 0C0A0D3E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A0D40 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A0D44u, 2);  /* 0C0A0D42 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0D44 add #imm,Rn */
	IF(0x0C0A0D46u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0D48u, 2);  /* 0C0A0D46 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A0D48 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A0D4A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A0D4Eu, 3);  /* 0C0A0D4C mov.l Rm,@(disp,Rn) */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0A0D50u, 1);  /* 0C0A0D4E mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r6); UPD(0x0C0A0D52u, 1);  /* 0C0A0D50 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x30u); UPD(0x0C0A0D54u, 1);  /* 0C0A0D52 mov.l @(disp,Rm),Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0A0D56u, 1);  /* 0C0A0D54 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC3B0u; UPD(0x0C0A0D58u, 1);  /* 0C0A0D56 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A0D5Au, 1);  /* 0C0A0D58 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0D5Cu, 1);  /* 0C0A0D5A mov.l @(disp,Rm),Rn */
	IF(0x0C0A0D5Cu); { u32 t_ = r0; PR = 0x0C0A0D60u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC3B0, 0x0C0AC3B0u, 0x0C0A0D60u); }  /* 0C0A0D5C jsr @Rn */
L_0C0A0D60: BLKS(0x0C0A0D60u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0A0CCEu, 3); goto L_0C0A0CCE; }  /* 0C0A0D60 bra */
L_0C0A0D70: BLKS(0x0C0A0D70u);
	r4 = 0xB4u; UPD(0x0C0A0D72u, 1);  /* 0C0A0D70 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0D72 add #imm,Rn */
	IF(0x0C0A0D74u); MACL = r8 * r4;  /* 0C0A0D74 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0D78u, 4);  /* 0C0A0D76 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0A0D78 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0A0D7Cu, 2);  /* 0C0A0D7A mov.w @(disp,pc),Rn */
	IF(0x0C0A0D7Cu); r3 = MACL;  /* 0C0A0D7C sts macl,Rn */
	r3 += r9;  /* 0C0A0D7E add Rm,Rn */
	IF(0x0C0A0D80u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0D82u, 3);  /* 0C0A0D80 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0A0D82 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0A0D86u, 2);  /* 0C0A0D84 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0D86 add #imm,Rn */
	IF(0x0C0A0D88u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0D8Au, 2);  /* 0C0A0D88 mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C0A0D8A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A0D8Eu, 2);  /* 0C0A0D8C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0ADB30u; UPD(0x0C0A0D90u, 1);  /* 0C0A0D8E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A0D92u, 1);  /* 0C0A0D90 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0D94u, 1);  /* 0C0A0D92 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A0CC8u, 3); goto L_0C0A0CC8; }  /* 0C0A0D94 bra */
L_0C0A0DA0: BLKS(0x0C0A0DA0u);
	r0 = 0xB4u; UPD(0x0C0A0DA2u, 1);  /* 0C0A0DA0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0DA2 add #imm,Rn */
	IF(0x0C0A0DA4u); MACL = r8 * r0;  /* 0C0A0DA4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0DA8u, 4);  /* 0C0A0DA6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A0DAAu, 1);  /* 0C0A0DA8 mov.w @(disp,pc),Rn */
	IF(0x0C0A0DAAu); r3 = MACL;  /* 0C0A0DAA sts macl,Rn */
	r3 += r9;  /* 0C0A0DAC add Rm,Rn */
	IF(0x0C0A0DAEu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0DB0u, 3);  /* 0C0A0DAE mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0A0DB0 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0A0DB4u, 2);  /* 0C0A0DB2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0DB4 add #imm,Rn */
	IF(0x0C0A0DB6u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0DB8u, 2);  /* 0C0A0DB6 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A0DB8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0A0DBCu, 2);  /* 0C0A0DBA mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0A0DBEu, 1);  /* 0C0A0DBC mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0A0DBE mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C0A0DC2u, 2);  /* 0C0A0DC0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0DC4u, 1);  /* 0C0A0DC2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A0CC8u, 3); goto L_0C0A0CC8; }  /* 0C0A0DC4 bra */
L_0C0A0DD0: BLKS(0x0C0A0DD0u);
	r6 = 0xB4u; UPD(0x0C0A0DD2u, 1);  /* 0C0A0DD0 mov.w @(disp,pc),Rn */
	IF(0x0C0A0DD2u); MACL = r8 * r6;  /* 0C0A0DD2 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0DD6u, 3);  /* 0C0A0DD4 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A0DD8u, 1);  /* 0C0A0DD6 mov.w @(disp,pc),Rn */
	IF(0x0C0A0DD8u); r3 = MACL;  /* 0C0A0DD8 sts macl,Rn */
	r3 += r9;  /* 0C0A0DDA add Rm,Rn */
	IF(0x0C0A0DDCu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0DDEu, 3);  /* 0C0A0DDC mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A0DDE extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A0DE2u, 2);  /* 0C0A0DE0 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0DE2 add #imm,Rn */
	IF(0x0C0A0DE4u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0DE6u, 2);  /* 0C0A0DE4 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A0DE6 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A0DE8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A0DECu, 3);  /* 0C0A0DEA mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C0A0DEEu, 1);  /* 0C0A0DEC mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A0DF0u, 1);  /* 0C0A0DEE mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0DF2u, 1);  /* 0C0A0DF0 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A0CC8u, 3); goto L_0C0A0CC8; }  /* 0C0A0DF2 bra */
}

/* FUN_0c0a0e20 */
void f_0C0A0E20(sh3_t *c)
{
	LOCALS;
L_0C0A0E20: BLKS(0x0C0A0E20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0E22u, 1);  /* 0C0A0E20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0E24u, 1);  /* 0C0A0E22 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A0E24 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0E28u, 2);  /* 0C0A0E26 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0A0E28 mov #imm,Rn */
	r9 = 0xC050D70u; UPD(0x0C0A0E2Cu, 2);  /* 0C0A0E2A mov.l @(disp,pc),Rn */
	IF(0x0C0A0E2Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0A0E2Eu, 1);  /* 0C0A0E2C sts.l pr,@-Rn */
	IF(0x0C0A0E2Eu); { u32 t_ = r9; PR = 0x0C0A0E32u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A0E32u); }  /* 0C0A0E2E jsr @Rn */
L_0C0A0E32: BLKS(0x0C0A0E32u);
	r2 = r0;  /* 0C0A0E32 mov Rm,Rn */
	r0 = 0x4u;  /* 0C0A0E34 mov #imm,Rn */
	T = r2 > r0;  /* 0C0A0E36 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0A0E60u, 6); goto L_0C0A0E60; }  /* 0C0A0E38 bt */
L_0C0A0E3A: BLKS(0x0C0A0E3Au);
	r0 = 0xC0A0E48u;  /* 0C0A0E3A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0A0E3C add Rm,Rn */
	IF(0x0C0A0E3Eu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A0E40u, 3);  /* 0C0A0E3E mov.w @(r0,Rm),Rn */
	IF(0x0C0A0E40u); { u32 tv_ = (r3 + 0x0C0A0E44u); u32 t_ = PHYS(tv_); IF(0x0C0A0E42u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A0E60u: goto L_0C0A0E60; case 0x0C0A0EC0u: goto L_0C0A0EC0; case 0x0C0A0EF0u: goto L_0C0A0EF0; case 0x0C0A0F30u: goto L_0C0A0F30; case 0x0C0A0F60u: goto L_0C0A0F60; default: JUMPD(tv_); } }  /* 0C0A0E40 braf Rn */
L_0C0A0E60: BLKS(0x0C0A0E60u);
	r6 = 0xB4u; UPD(0x0C0A0E62u, 1);  /* 0C0A0E60 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0E62 add #imm,Rn */
	IF(0x0C0A0E64u); MACL = r8 * r6;  /* 0C0A0E64 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0E68u, 4);  /* 0C0A0E66 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A0E6Au, 1);  /* 0C0A0E68 mov.w @(disp,pc),Rn */
	IF(0x0C0A0E6Au); r3 = MACL;  /* 0C0A0E6A sts macl,Rn */
	r3 += r9;  /* 0C0A0E6C add Rm,Rn */
	IF(0x0C0A0E6Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0E70u, 3);  /* 0C0A0E6E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A0E70 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A0E74u, 2);  /* 0C0A0E72 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0E74 add #imm,Rn */
	IF(0x0C0A0E76u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0E78u, 2);  /* 0C0A0E76 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0A0E78 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A0E7A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A0E7Eu, 3);  /* 0C0A0E7C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C0A0E80u, 1);  /* 0C0A0E7E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A0E82u, 1);  /* 0C0A0E80 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0E84u, 1);  /* 0C0A0E82 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0A0E86u, 1);  /* 0C0A0E84 mov.l @(disp,Rm),Rn */
L_0C0A0E86: BLKS(0x0C0A0E86u);
	IF(0x0C0A0E86u); { u32 t_ = r0; PR = 0x0C0A0E8Au; IF(0x0C0A0E88u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A0E8Au); }  /* 0C0A0E86 jsr @Rn */
L_0C0A0E8A: BLKS(0x0C0A0E8Au);
	r15 += 0x8u;  /* 0C0A0E8A add #imm,Rn */
	UPD(0x0C0A0E8Cu, 1);
L_0C0A0E8C: BLKS(0x0C0A0E8Cu);
	r6 = 0xB4u; UPD(0x0C0A0E8Eu, 1);  /* 0C0A0E8C mov.w @(disp,pc),Rn */
	IF(0x0C0A0E8Eu); MACL = r8 * r6;  /* 0C0A0E8E mul.l Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0A0E92u, 3);  /* 0C0A0E90 mov.w @(disp,pc),Rn */
	IF(0x0C0A0E92u); r8 = MACL;  /* 0C0A0E92 sts macl,Rn */
	r8 += r9;  /* 0C0A0E94 add Rm,Rn */
	r9 = 0xC7C37F8u; UPD(0x0C0A0E98u, 3);  /* 0C0A0E96 mov.l @(disp,pc),Rn */
	IF(0x0C0A0E98u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A0E9Au, 1);  /* 0C0A0E98 mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A0E9Cu, 1);  /* 0C0A0E9A mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A0E9C extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A0EA0u, 2);  /* 0C0A0E9E mov.l @(disp,Rm),Rn */
	IF(0x0C0A0EA0u); { u32 t_ = r9; PR = 0x0C0A0EA4u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C37F8, 0x0C7C37F8u, 0x0C0A0EA4u); }  /* 0C0A0EA0 jsr @Rn */
L_0C0A0EA4: BLKS(0x0C0A0EA4u);
	r9 = 0x0u;  /* 0C0A0EA4 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0A0EA8u, 2);  /* 0C0A0EA6 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A0EA8 mov Rm,Rn */
	IF(0x0C0A0EAAu); PR = R32(r15); r15 += 4; UPD(0x0C0A0EACu, 2);  /* 0C0A0EAA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A0EAEu, 1);  /* 0C0A0EAC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A0EB0u, 1);  /* 0C0A0EAE mov.l @Rm+,Rn */
	IF(0x0C0A0EB0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A0EB0 rts */
L_0C0A0EC0: BLKS(0x0C0A0EC0u);
	r0 = 0xB4u; UPD(0x0C0A0EC2u, 1);  /* 0C0A0EC0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0EC2 add #imm,Rn */
	IF(0x0C0A0EC4u); MACL = r8 * r0;  /* 0C0A0EC4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0EC8u, 4);  /* 0C0A0EC6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A0ECAu, 1);  /* 0C0A0EC8 mov.w @(disp,pc),Rn */
	IF(0x0C0A0ECAu); r3 = MACL;  /* 0C0A0ECA sts macl,Rn */
	r3 += r9;  /* 0C0A0ECC add Rm,Rn */
	IF(0x0C0A0ECEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0ED0u, 3);  /* 0C0A0ECE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A0ED0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A0ED4u, 2);  /* 0C0A0ED2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0ED4 add #imm,Rn */
	IF(0x0C0A0ED6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0ED8u, 2);  /* 0C0A0ED6 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0A0ED8 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A0EDA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A0EDEu, 3);  /* 0C0A0EDC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C0A0EE0u, 1);  /* 0C0A0EDE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A0EE2u, 1);  /* 0C0A0EE0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0EE4u, 1);  /* 0C0A0EE2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A0E86u, 3); goto L_0C0A0E86; }  /* 0C0A0EE4 bra */
L_0C0A0EF0: BLKS(0x0C0A0EF0u);
	r0 = 0xB4u; UPD(0x0C0A0EF2u, 1);  /* 0C0A0EF0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0A0EF2 add #imm,Rn */
	IF(0x0C0A0EF4u); MACL = r8 * r0;  /* 0C0A0EF4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0EF8u, 4);  /* 0C0A0EF6 mov.l @(disp,pc),Rn */
	IF(0x0C0A0EF8u); r3 = MACL;  /* 0C0A0EF8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A0EFCu, 2);  /* 0C0A0EFA mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0A0EFC add Rm,Rn */
	IF(0x0C0A0EFEu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0F00u, 2);  /* 0C0A0EFE mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A0F00 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0A0F04u, 2);  /* 0C0A0F02 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0F04 add #imm,Rn */
	IF(0x0C0A0F06u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0F08u, 2);  /* 0C0A0F06 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0A0F08 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A0F0A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0A0F0Eu, 3);  /* 0C0A0F0C mov.l Rm,@(disp,Rn) */
	r7 = R32(r3 + 0x2Cu); UPD(0x0C0A0F10u, 1);  /* 0C0A0F0E mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r7); UPD(0x0C0A0F12u, 1);  /* 0C0A0F10 mov.l Rm,@(disp,Rn) */
	r6 = R32(r3 + 0x30u); UPD(0x0C0A0F14u, 1);  /* 0C0A0F12 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AC3B0u; UPD(0x0C0A0F16u, 1);  /* 0C0A0F14 mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r6); UPD(0x0C0A0F18u, 1);  /* 0C0A0F16 mov.l Rm,@(disp,Rn) */
	r4 = R32(r3); UPD(0x0C0A0F1Au, 1);  /* 0C0A0F18 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0F1Cu, 1);  /* 0C0A0F1A mov.l @(disp,Rm),Rn */
	IF(0x0C0A0F1Cu); { u32 t_ = r0; PR = 0x0C0A0F20u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC3B0, 0x0C0AC3B0u, 0x0C0A0F20u); }  /* 0C0A0F1C jsr @Rn */
L_0C0A0F20: BLKS(0x0C0A0F20u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0A0E8Cu, 3); goto L_0C0A0E8C; }  /* 0C0A0F20 bra */
L_0C0A0F30: BLKS(0x0C0A0F30u);
	r6 = 0xB4u; UPD(0x0C0A0F32u, 1);  /* 0C0A0F30 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0F32 add #imm,Rn */
	IF(0x0C0A0F34u); MACL = r8 * r6;  /* 0C0A0F34 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0F38u, 4);  /* 0C0A0F36 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A0F3Au, 1);  /* 0C0A0F38 mov.w @(disp,pc),Rn */
	IF(0x0C0A0F3Au); r3 = MACL;  /* 0C0A0F3A sts macl,Rn */
	r3 += r9;  /* 0C0A0F3C add Rm,Rn */
	IF(0x0C0A0F3Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0F40u, 3);  /* 0C0A0F3E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A0F40 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A0F44u, 2);  /* 0C0A0F42 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0F44 add #imm,Rn */
	IF(0x0C0A0F46u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0F48u, 2);  /* 0C0A0F46 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A0F48 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A0F4A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A0F4Eu, 3);  /* 0C0A0F4C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0ADB30u; UPD(0x0C0A0F50u, 1);  /* 0C0A0F4E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A0F52u, 1);  /* 0C0A0F50 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0F54u, 1);  /* 0C0A0F52 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A0E86u, 3); goto L_0C0A0E86; }  /* 0C0A0F54 bra */
L_0C0A0F60: BLKS(0x0C0A0F60u);
	r5 = 0xB4u; UPD(0x0C0A0F62u, 1);  /* 0C0A0F60 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0F62 add #imm,Rn */
	IF(0x0C0A0F64u); MACL = r8 * r5;  /* 0C0A0F64 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0F68u, 4);  /* 0C0A0F66 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A0F6Au, 1);  /* 0C0A0F68 mov.w @(disp,pc),Rn */
	IF(0x0C0A0F6Au); r3 = MACL;  /* 0C0A0F6A sts macl,Rn */
	r3 += r9;  /* 0C0A0F6C add Rm,Rn */
	IF(0x0C0A0F6Eu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0F70u, 3);  /* 0C0A0F6E mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A0F70 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A0F72 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A0F76u, 3);  /* 0C0A0F74 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0F76 add #imm,Rn */
	IF(0x0C0A0F78u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0F7Au, 2);  /* 0C0A0F78 mov.b @(r0,Rm),Rn */
	r0 = r7 & 0xFF;  /* 0C0A0F7A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A0F7Eu, 2);  /* 0C0A0F7C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0A0F80u, 1);  /* 0C0A0F7E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A0F82u, 1);  /* 0C0A0F80 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0F84u, 1);  /* 0C0A0F82 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A0E86u, 3); goto L_0C0A0E86; }  /* 0C0A0F84 bra */
}

void f_0C0A0FB0(sh3_t *c)
{
	LOCALS;
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

/* FUN_0c0a1140 */
void f_0C0A1140(sh3_t *c)
{
	LOCALS;
L_0C0A1140: BLKS(0x0C0A1140u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1142u, 1);  /* 0C0A1140 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1144u, 1);  /* 0C0A1142 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A1144 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1148u, 2);  /* 0C0A1146 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0A1148 mov #imm,Rn */
	r9 = 0xC050D70u; UPD(0x0C0A114Cu, 2);  /* 0C0A114A mov.l @(disp,pc),Rn */
	IF(0x0C0A114Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0A114Eu, 1);  /* 0C0A114C sts.l pr,@-Rn */
	IF(0x0C0A114Eu); { u32 t_ = r9; PR = 0x0C0A1152u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A1152u); }  /* 0C0A114E jsr @Rn */
L_0C0A1152: BLKS(0x0C0A1152u);
	r2 = r0;  /* 0C0A1152 mov Rm,Rn */
	r0 = 0x4u;  /* 0C0A1154 mov #imm,Rn */
	T = r2 > r0;  /* 0C0A1156 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0A1160u, 6); goto L_0C0A1160; }  /* 0C0A1158 bf */
L_0C0A115A: BLKS(0x0C0A115Au);
	r15 += 0xFFFFFFF8u;  /* 0C0A115A add #imm,Rn */
	{ IF(0x0C0A115Eu); ; /* slot nop */ UPD(0x0C0A12B0u, 4); goto L_0C0A12B0; }  /* 0C0A115C bra */
L_0C0A1160: BLKS(0x0C0A1160u);
	r0 = 0xC0A1170u;  /* 0C0A1160 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0A1162 add Rm,Rn */
	IF(0x0C0A1164u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A1166u, 3);  /* 0C0A1164 mov.w @(r0,Rm),Rn */
	IF(0x0C0A1166u); { u32 tv_ = (r3 + 0x0C0A116Au); u32 t_ = PHYS(tv_); IF(0x0C0A1168u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A1180u: goto L_0C0A1180; case 0x0C0A11E0u: goto L_0C0A11E0; case 0x0C0A1210u: goto L_0C0A1210; case 0x0C0A1250u: goto L_0C0A1250; case 0x0C0A1280u: goto L_0C0A1280; default: JUMPD(tv_); } }  /* 0C0A1166 braf Rn */
L_0C0A1180: BLKS(0x0C0A1180u);
	r0 = 0xB4u; UPD(0x0C0A1182u, 1);  /* 0C0A1180 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A1182 add #imm,Rn */
	IF(0x0C0A1184u); MACL = r8 * r0;  /* 0C0A1184 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A1188u, 4);  /* 0C0A1186 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A118Au, 1);  /* 0C0A1188 mov.w @(disp,pc),Rn */
	IF(0x0C0A118Au); r3 = MACL;  /* 0C0A118A sts macl,Rn */
	r3 += r9;  /* 0C0A118C add Rm,Rn */
	IF(0x0C0A118Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1190u, 3);  /* 0C0A118E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A1190 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A1194u, 2);  /* 0C0A1192 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A1194 add #imm,Rn */
	IF(0x0C0A1196u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1198u, 2);  /* 0C0A1196 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C0A1198 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A119A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A119Eu, 3);  /* 0C0A119C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C0A11A0u, 1);  /* 0C0A119E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A11A2u, 1);  /* 0C0A11A0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A11A4u, 1);  /* 0C0A11A2 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0A11A6u, 1);  /* 0C0A11A4 mov.l @(disp,Rm),Rn */
	IF(0x0C0A11A6u); ;  /* 0C0A11A6 nop */
	UPD(0x0C0A11A8u, 1);
L_0C0A11A8: BLKS(0x0C0A11A8u);
	IF(0x0C0A11A8u); { u32 t_ = r0; PR = 0x0C0A11ACu; IF(0x0C0A11AAu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A11ACu); }  /* 0C0A11A8 jsr @Rn */
L_0C0A11AC: BLKS(0x0C0A11ACu);
	r15 += 0x8u;  /* 0C0A11AC add #imm,Rn */
	UPD(0x0C0A11AEu, 1);
L_0C0A11AE: BLKS(0x0C0A11AEu);
	r4 = 0xB4u; UPD(0x0C0A11B0u, 1);  /* 0C0A11AE mov.w @(disp,pc),Rn */
	IF(0x0C0A11B0u); MACL = r8 * r4;  /* 0C0A11B0 mul.l Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0A11B4u, 3);  /* 0C0A11B2 mov.w @(disp,pc),Rn */
	IF(0x0C0A11B4u); r8 = MACL;  /* 0C0A11B4 sts macl,Rn */
	r8 += r9;  /* 0C0A11B6 add Rm,Rn */
	r9 = 0xC7C37F8u; UPD(0x0C0A11BAu, 3);  /* 0C0A11B8 mov.l @(disp,pc),Rn */
	IF(0x0C0A11BAu); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A11BCu, 1);  /* 0C0A11BA mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A11BEu, 1);  /* 0C0A11BC mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A11BE extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A11C2u, 2);  /* 0C0A11C0 mov.l @(disp,Rm),Rn */
	IF(0x0C0A11C2u); { u32 t_ = r9; PR = 0x0C0A11C6u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C37F8, 0x0C7C37F8u, 0x0C0A11C6u); }  /* 0C0A11C2 jsr @Rn */
L_0C0A11C6: BLKS(0x0C0A11C6u);
	r9 = 0x0u;  /* 0C0A11C6 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0A11CAu, 2);  /* 0C0A11C8 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A11CA mov Rm,Rn */
	IF(0x0C0A11CCu); PR = R32(r15); r15 += 4; UPD(0x0C0A11CEu, 2);  /* 0C0A11CC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A11D0u, 1);  /* 0C0A11CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A11D2u, 1);  /* 0C0A11D0 mov.l @Rm+,Rn */
	IF(0x0C0A11D2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A11D2 rts */
L_0C0A11E0: BLKS(0x0C0A11E0u);
	r5 = 0xB4u; UPD(0x0C0A11E2u, 1);  /* 0C0A11E0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A11E2 add #imm,Rn */
	IF(0x0C0A11E4u); MACL = r8 * r5;  /* 0C0A11E4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A11E8u, 4);  /* 0C0A11E6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A11EAu, 1);  /* 0C0A11E8 mov.w @(disp,pc),Rn */
	IF(0x0C0A11EAu); r3 = MACL;  /* 0C0A11EA sts macl,Rn */
	r3 += r9;  /* 0C0A11EC add Rm,Rn */
	IF(0x0C0A11EEu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A11F0u, 3);  /* 0C0A11EE mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C0A11F0 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A11F2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A11F6u, 3);  /* 0C0A11F4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A11F6 add #imm,Rn */
	IF(0x0C0A11F8u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A11FAu, 2);  /* 0C0A11F8 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A11FA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0A11FEu, 2);  /* 0C0A11FC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C0A1200u, 1);  /* 0C0A11FE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A1202u, 1);  /* 0C0A1200 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A1204u, 1);  /* 0C0A1202 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A11A8u, 3); goto L_0C0A11A8; }  /* 0C0A1204 bra */
L_0C0A1210: BLKS(0x0C0A1210u);
	r3 = 0xB4u; UPD(0x0C0A1212u, 1);  /* 0C0A1210 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0A1212 add #imm,Rn */
	IF(0x0C0A1214u); MACL = r8 * r3;  /* 0C0A1214 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A1218u, 4);  /* 0C0A1216 mov.l @(disp,pc),Rn */
	IF(0x0C0A1218u); r3 = MACL;  /* 0C0A1218 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A121Cu, 2);  /* 0C0A121A mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0A121C add Rm,Rn */
	IF(0x0C0A121Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1220u, 2);  /* 0C0A121E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A1220 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A1224u, 2);  /* 0C0A1222 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A1224 add #imm,Rn */
	IF(0x0C0A1226u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1228u, 2);  /* 0C0A1226 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C0A1228 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A122A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A122Eu, 3);  /* 0C0A122C mov.l Rm,@(disp,Rn) */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0A1230u, 1);  /* 0C0A122E mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r6); UPD(0x0C0A1232u, 1);  /* 0C0A1230 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x30u); UPD(0x0C0A1234u, 1);  /* 0C0A1232 mov.l @(disp,Rm),Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0A1236u, 1);  /* 0C0A1234 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC3B0u; UPD(0x0C0A1238u, 1);  /* 0C0A1236 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A123Au, 1);  /* 0C0A1238 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A123Cu, 1);  /* 0C0A123A mov.l @(disp,Rm),Rn */
	IF(0x0C0A123Cu); { u32 t_ = r0; PR = 0x0C0A1240u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC3B0, 0x0C0AC3B0u, 0x0C0A1240u); }  /* 0C0A123C jsr @Rn */
L_0C0A1240: BLKS(0x0C0A1240u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0A11AEu, 3); goto L_0C0A11AE; }  /* 0C0A1240 bra */
L_0C0A1250: BLKS(0x0C0A1250u);
	r4 = 0xB4u; UPD(0x0C0A1252u, 1);  /* 0C0A1250 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A1252 add #imm,Rn */
	IF(0x0C0A1254u); MACL = r8 * r4;  /* 0C0A1254 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A1258u, 4);  /* 0C0A1256 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C0A1258 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0A125Cu, 2);  /* 0C0A125A mov.w @(disp,pc),Rn */
	IF(0x0C0A125Cu); r3 = MACL;  /* 0C0A125C sts macl,Rn */
	r3 += r9;  /* 0C0A125E add Rm,Rn */
	IF(0x0C0A1260u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1262u, 3);  /* 0C0A1260 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0A1262 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0A1266u, 2);  /* 0C0A1264 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A1266 add #imm,Rn */
	IF(0x0C0A1268u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A126Au, 2);  /* 0C0A1268 mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C0A126A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A126Eu, 2);  /* 0C0A126C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0ADB30u; UPD(0x0C0A1270u, 1);  /* 0C0A126E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A1272u, 1);  /* 0C0A1270 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A1274u, 1);  /* 0C0A1272 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A11A8u, 3); goto L_0C0A11A8; }  /* 0C0A1274 bra */
L_0C0A1280: BLKS(0x0C0A1280u);
	r0 = 0xB4u; UPD(0x0C0A1282u, 1);  /* 0C0A1280 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A1282 add #imm,Rn */
	IF(0x0C0A1284u); MACL = r8 * r0;  /* 0C0A1284 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A1288u, 4);  /* 0C0A1286 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A128Au, 1);  /* 0C0A1288 mov.w @(disp,pc),Rn */
	IF(0x0C0A128Au); r3 = MACL;  /* 0C0A128A sts macl,Rn */
	r3 += r9;  /* 0C0A128C add Rm,Rn */
	IF(0x0C0A128Eu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1290u, 3);  /* 0C0A128E mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0A1290 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0A1294u, 2);  /* 0C0A1292 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A1294 add #imm,Rn */
	IF(0x0C0A1296u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1298u, 2);  /* 0C0A1296 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A1298 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0A129Cu, 2);  /* 0C0A129A mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0A129Eu, 1);  /* 0C0A129C mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C0A129E mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C0A12A2u, 2);  /* 0C0A12A0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A12A4u, 1);  /* 0C0A12A2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A11A8u, 3); goto L_0C0A11A8; }  /* 0C0A12A4 bra */
L_0C0A12B0: BLKS(0x0C0A12B0u);
	r6 = 0xB4u; UPD(0x0C0A12B2u, 1);  /* 0C0A12B0 mov.w @(disp,pc),Rn */
	IF(0x0C0A12B2u); MACL = r8 * r6;  /* 0C0A12B2 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A12B6u, 3);  /* 0C0A12B4 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A12B8u, 1);  /* 0C0A12B6 mov.w @(disp,pc),Rn */
	IF(0x0C0A12B8u); r3 = MACL;  /* 0C0A12B8 sts macl,Rn */
	r3 += r9;  /* 0C0A12BA add Rm,Rn */
	IF(0x0C0A12BCu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A12BEu, 3);  /* 0C0A12BC mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A12BE extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A12C2u, 2);  /* 0C0A12C0 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A12C2 add #imm,Rn */
	IF(0x0C0A12C4u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A12C6u, 2);  /* 0C0A12C4 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C0A12C6 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A12C8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A12CCu, 3);  /* 0C0A12CA mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C0A12CEu, 1);  /* 0C0A12CC mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A12D0u, 1);  /* 0C0A12CE mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A12D2u, 1);  /* 0C0A12D0 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A11A8u, 3); goto L_0C0A11A8; }  /* 0C0A12D2 bra */
}

/* FUN_0c0a1300 */
void f_0C0A1300(sh3_t *c)
{
	LOCALS;
L_0C0A1300: BLKS(0x0C0A1300u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1302u, 1);  /* 0C0A1300 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1304u, 1);  /* 0C0A1302 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A1304 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1308u, 2);  /* 0C0A1306 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0A1308 mov #imm,Rn */
	r9 = 0xC050D70u; UPD(0x0C0A130Cu, 2);  /* 0C0A130A mov.l @(disp,pc),Rn */
	IF(0x0C0A130Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0A130Eu, 1);  /* 0C0A130C sts.l pr,@-Rn */
	IF(0x0C0A130Eu); { u32 t_ = r9; PR = 0x0C0A1312u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A1312u); }  /* 0C0A130E jsr @Rn */
L_0C0A1312: BLKS(0x0C0A1312u);
	r2 = r0;  /* 0C0A1312 mov Rm,Rn */
	r0 = 0x4u;  /* 0C0A1314 mov #imm,Rn */
	T = r2 > r0;  /* 0C0A1316 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0A1320u, 6); goto L_0C0A1320; }  /* 0C0A1318 bf */
L_0C0A131A: BLKS(0x0C0A131Au);
	r15 += 0xFFFFFFF8u;  /* 0C0A131A add #imm,Rn */
	{ IF(0x0C0A131Eu); ; /* slot nop */ UPD(0x0C0A1470u, 4); goto L_0C0A1470; }  /* 0C0A131C bra */
L_0C0A1320: BLKS(0x0C0A1320u);
	r0 = 0xC0A1330u;  /* 0C0A1320 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0A1322 add Rm,Rn */
	IF(0x0C0A1324u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A1326u, 3);  /* 0C0A1324 mov.w @(r0,Rm),Rn */
	IF(0x0C0A1326u); { u32 tv_ = (r3 + 0x0C0A132Au); u32 t_ = PHYS(tv_); IF(0x0C0A1328u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A1340u: goto L_0C0A1340; case 0x0C0A13A0u: goto L_0C0A13A0; case 0x0C0A13D0u: goto L_0C0A13D0; case 0x0C0A1410u: goto L_0C0A1410; case 0x0C0A1440u: goto L_0C0A1440; default: JUMPD(tv_); } }  /* 0C0A1326 braf Rn */
L_0C0A1340: BLKS(0x0C0A1340u);
	r0 = 0xB4u; UPD(0x0C0A1342u, 1);  /* 0C0A1340 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A1342 add #imm,Rn */
	IF(0x0C0A1344u); MACL = r8 * r0;  /* 0C0A1344 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A1348u, 4);  /* 0C0A1346 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A134Au, 1);  /* 0C0A1348 mov.w @(disp,pc),Rn */
	IF(0x0C0A134Au); r3 = MACL;  /* 0C0A134A sts macl,Rn */
	r3 += r9;  /* 0C0A134C add Rm,Rn */
	IF(0x0C0A134Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1350u, 3);  /* 0C0A134E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A1350 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A1354u, 2);  /* 0C0A1352 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A1354 add #imm,Rn */
	IF(0x0C0A1356u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1358u, 2);  /* 0C0A1356 mov.b @(r0,Rm),Rn */
	r5 = 0x6u;  /* 0C0A1358 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A135A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A135Eu, 3);  /* 0C0A135C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C0A1360u, 1);  /* 0C0A135E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A1362u, 1);  /* 0C0A1360 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A1364u, 1);  /* 0C0A1362 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0A1366u, 1);  /* 0C0A1364 mov.l @(disp,Rm),Rn */
	IF(0x0C0A1366u); ;  /* 0C0A1366 nop */
	UPD(0x0C0A1368u, 1);
L_0C0A1368: BLKS(0x0C0A1368u);
	IF(0x0C0A1368u); { u32 t_ = r0; PR = 0x0C0A136Cu; IF(0x0C0A136Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A136Cu); }  /* 0C0A1368 jsr @Rn */
L_0C0A136C: BLKS(0x0C0A136Cu);
	r15 += 0x8u;  /* 0C0A136C add #imm,Rn */
	UPD(0x0C0A136Eu, 1);
L_0C0A136E: BLKS(0x0C0A136Eu);
	r4 = 0xB4u; UPD(0x0C0A1370u, 1);  /* 0C0A136E mov.w @(disp,pc),Rn */
	IF(0x0C0A1370u); MACL = r8 * r4;  /* 0C0A1370 mul.l Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0A1374u, 3);  /* 0C0A1372 mov.w @(disp,pc),Rn */
	IF(0x0C0A1374u); r8 = MACL;  /* 0C0A1374 sts macl,Rn */
	r8 += r9;  /* 0C0A1376 add Rm,Rn */
	r9 = 0xC7C37F8u; UPD(0x0C0A137Au, 3);  /* 0C0A1378 mov.l @(disp,pc),Rn */
	IF(0x0C0A137Au); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A137Cu, 1);  /* 0C0A137A mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A137Eu, 1);  /* 0C0A137C mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A137E extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A1382u, 2);  /* 0C0A1380 mov.l @(disp,Rm),Rn */
	IF(0x0C0A1382u); { u32 t_ = r9; PR = 0x0C0A1386u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C37F8, 0x0C7C37F8u, 0x0C0A1386u); }  /* 0C0A1382 jsr @Rn */
L_0C0A1386: BLKS(0x0C0A1386u);
	r9 = 0x0u;  /* 0C0A1386 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0A138Au, 2);  /* 0C0A1388 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A138A mov Rm,Rn */
	IF(0x0C0A138Cu); PR = R32(r15); r15 += 4; UPD(0x0C0A138Eu, 2);  /* 0C0A138C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A1390u, 1);  /* 0C0A138E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A1392u, 1);  /* 0C0A1390 mov.l @Rm+,Rn */
	IF(0x0C0A1392u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A1392 rts */
L_0C0A13A0: BLKS(0x0C0A13A0u);
	r5 = 0xB4u; UPD(0x0C0A13A2u, 1);  /* 0C0A13A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A13A2 add #imm,Rn */
	IF(0x0C0A13A4u); MACL = r8 * r5;  /* 0C0A13A4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A13A8u, 4);  /* 0C0A13A6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A13AAu, 1);  /* 0C0A13A8 mov.w @(disp,pc),Rn */
	IF(0x0C0A13AAu); r3 = MACL;  /* 0C0A13AA sts macl,Rn */
	r3 += r9;  /* 0C0A13AC add Rm,Rn */
	IF(0x0C0A13AEu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A13B0u, 3);  /* 0C0A13AE mov.b @(r0,Rm),Rn */
	r5 = 0x6u;  /* 0C0A13B0 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A13B2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A13B6u, 3);  /* 0C0A13B4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A13B6 add #imm,Rn */
	IF(0x0C0A13B8u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A13BAu, 2);  /* 0C0A13B8 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A13BA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0A13BEu, 2);  /* 0C0A13BC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C0A13C0u, 1);  /* 0C0A13BE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A13C2u, 1);  /* 0C0A13C0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A13C4u, 1);  /* 0C0A13C2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A1368u, 3); goto L_0C0A1368; }  /* 0C0A13C4 bra */
L_0C0A13D0: BLKS(0x0C0A13D0u);
	r3 = 0xB4u; UPD(0x0C0A13D2u, 1);  /* 0C0A13D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0A13D2 add #imm,Rn */
	IF(0x0C0A13D4u); MACL = r8 * r3;  /* 0C0A13D4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A13D8u, 4);  /* 0C0A13D6 mov.l @(disp,pc),Rn */
	IF(0x0C0A13D8u); r3 = MACL;  /* 0C0A13D8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A13DCu, 2);  /* 0C0A13DA mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0A13DC add Rm,Rn */
	IF(0x0C0A13DEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A13E0u, 2);  /* 0C0A13DE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A13E0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A13E4u, 2);  /* 0C0A13E2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A13E4 add #imm,Rn */
	IF(0x0C0A13E6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A13E8u, 2);  /* 0C0A13E6 mov.b @(r0,Rm),Rn */
	r5 = 0x6u;  /* 0C0A13E8 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A13EA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A13EEu, 3);  /* 0C0A13EC mov.l Rm,@(disp,Rn) */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0A13F0u, 1);  /* 0C0A13EE mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r6); UPD(0x0C0A13F2u, 1);  /* 0C0A13F0 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x30u); UPD(0x0C0A13F4u, 1);  /* 0C0A13F2 mov.l @(disp,Rm),Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0A13F6u, 1);  /* 0C0A13F4 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC3B0u; UPD(0x0C0A13F8u, 1);  /* 0C0A13F6 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A13FAu, 1);  /* 0C0A13F8 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A13FCu, 1);  /* 0C0A13FA mov.l @(disp,Rm),Rn */
	IF(0x0C0A13FCu); { u32 t_ = r0; PR = 0x0C0A1400u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC3B0, 0x0C0AC3B0u, 0x0C0A1400u); }  /* 0C0A13FC jsr @Rn */
L_0C0A1400: BLKS(0x0C0A1400u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0A136Eu, 3); goto L_0C0A136E; }  /* 0C0A1400 bra */
L_0C0A1410: BLKS(0x0C0A1410u);
	r4 = 0xB4u; UPD(0x0C0A1412u, 1);  /* 0C0A1410 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A1412 add #imm,Rn */
	IF(0x0C0A1414u); MACL = r8 * r4;  /* 0C0A1414 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A1418u, 4);  /* 0C0A1416 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C0A1418 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0A141Cu, 2);  /* 0C0A141A mov.w @(disp,pc),Rn */
	IF(0x0C0A141Cu); r3 = MACL;  /* 0C0A141C sts macl,Rn */
	r3 += r9;  /* 0C0A141E add Rm,Rn */
	IF(0x0C0A1420u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1422u, 3);  /* 0C0A1420 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0A1422 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0A1426u, 2);  /* 0C0A1424 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A1426 add #imm,Rn */
	IF(0x0C0A1428u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A142Au, 2);  /* 0C0A1428 mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C0A142A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A142Eu, 2);  /* 0C0A142C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0ADB30u; UPD(0x0C0A1430u, 1);  /* 0C0A142E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A1432u, 1);  /* 0C0A1430 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A1434u, 1);  /* 0C0A1432 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A1368u, 3); goto L_0C0A1368; }  /* 0C0A1434 bra */
L_0C0A1440: BLKS(0x0C0A1440u);
	r0 = 0xB4u; UPD(0x0C0A1442u, 1);  /* 0C0A1440 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A1442 add #imm,Rn */
	IF(0x0C0A1444u); MACL = r8 * r0;  /* 0C0A1444 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A1448u, 4);  /* 0C0A1446 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A144Au, 1);  /* 0C0A1448 mov.w @(disp,pc),Rn */
	IF(0x0C0A144Au); r3 = MACL;  /* 0C0A144A sts macl,Rn */
	r3 += r9;  /* 0C0A144C add Rm,Rn */
	IF(0x0C0A144Eu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1450u, 3);  /* 0C0A144E mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0A1450 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0A1454u, 2);  /* 0C0A1452 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A1454 add #imm,Rn */
	IF(0x0C0A1456u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1458u, 2);  /* 0C0A1456 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A1458 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0A145Cu, 2);  /* 0C0A145A mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0A145Eu, 1);  /* 0C0A145C mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C0A145E mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C0A1462u, 2);  /* 0C0A1460 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A1464u, 1);  /* 0C0A1462 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A1368u, 3); goto L_0C0A1368; }  /* 0C0A1464 bra */
L_0C0A1470: BLKS(0x0C0A1470u);
	r6 = 0xB4u; UPD(0x0C0A1472u, 1);  /* 0C0A1470 mov.w @(disp,pc),Rn */
	IF(0x0C0A1472u); MACL = r8 * r6;  /* 0C0A1472 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A1476u, 3);  /* 0C0A1474 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A1478u, 1);  /* 0C0A1476 mov.w @(disp,pc),Rn */
	IF(0x0C0A1478u); r3 = MACL;  /* 0C0A1478 sts macl,Rn */
	r3 += r9;  /* 0C0A147A add Rm,Rn */
	IF(0x0C0A147Cu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A147Eu, 3);  /* 0C0A147C mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A147E extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A1482u, 2);  /* 0C0A1480 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A1482 add #imm,Rn */
	IF(0x0C0A1484u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A1486u, 2);  /* 0C0A1484 mov.b @(r0,Rm),Rn */
	r5 = 0x6u;  /* 0C0A1486 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A1488 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A148Cu, 3);  /* 0C0A148A mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C0A148Eu, 1);  /* 0C0A148C mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A1490u, 1);  /* 0C0A148E mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A1492u, 1);  /* 0C0A1490 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A1368u, 3); goto L_0C0A1368; }  /* 0C0A1492 bra */
}

/* FUN_0c0a14c0 */
void f_0C0A14C0(sh3_t *c)
{
	LOCALS;
L_0C0A14C0: BLKS(0x0C0A14C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A14C2u, 1);  /* 0C0A14C0 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A14C2 exts.w Rm,Rn */
	r7 = 0xB4u; UPD(0x0C0A14C6u, 2);  /* 0C0A14C4 mov.w @(disp,pc),Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A14C8u, 1);  /* 0C0A14C6 mov.l Rm,@-Rn */
	IF(0x0C0A14C8u); MACL = r1 * r7;  /* 0C0A14C8 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A14CCu, 3);  /* 0C0A14CA mov.l Rm,@-Rn */
	r6 = 0xC26CD40u; UPD(0x0C0A14CEu, 1);  /* 0C0A14CC mov.l @(disp,pc),Rn */
	IF(0x0C0A14CEu); r8 = MACL;  /* 0C0A14CE sts macl,Rn */
	IF(0x0C0A14D0u); r15 -= 4; W32(r15, PR); UPD(0x0C0A14D2u, 2);  /* 0C0A14D0 sts.l pr,@-Rn */
	r8 += r6;  /* 0C0A14D2 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A14D6u, 2);  /* 0C0A14D4 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0A14D6 mov Rm,Rn */
	IF(0x0C0A14D8u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A14DAu, 2);  /* 0C0A14D8 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A14DA add #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C0A14DC extu.b Rm,Rn */
	r9 = 0xA9u; UPD(0x0C0A14E0u, 3);  /* 0C0A14DE mov.w @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C0A14E0 mov #imm,Rn */
	W32(r15, r4); UPD(0x0C0A14E4u, 2);  /* 0C0A14E2 mov.l Rm,@Rn */
	r9 += r8;  /* 0C0A14E4 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A14E8u, 2);  /* 0C0A14E6 mov.b @Rm,Rn */
	r0 = 0xC0AB240u; UPD(0x0C0A14EAu, 1);  /* 0C0A14E8 mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFF;  /* 0C0A14EA extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0A14EEu, 2);  /* 0C0A14EC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0A14F0u, 1);  /* 0C0A14EE mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A14F2u, 1);  /* 0C0A14F0 mov.l @(disp,Rm),Rn */
	IF(0x0C0A14F2u); { u32 t_ = r0; PR = 0x0C0A14F6u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0A14F6u); }  /* 0C0A14F2 jsr @Rn */
L_0C0A14F6: BLKS(0x0C0A14F6u);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A14F8u, 1);  /* 0C0A14F6 mov.b @Rm,Rn */
	r4 = 0x0u;  /* 0C0A14F8 mov #imm,Rn */
	r7 = r0 & 0xFF;  /* 0C0A14FA extu.b Rm,Rn */
	r0 = 0x20000u; UPD(0x0C0A14FEu, 3);  /* 0C0A14FC mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0A14FE mov #imm,Rn */
	W32(r15, r0); UPD(0x0C0A1502u, 2);  /* 0C0A1500 mov.l Rm,@Rn */
	r0 = 0xC06CC20u; UPD(0x0C0A1504u, 1);  /* 0C0A1502 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0A1506u, 1);  /* 0C0A1504 mov.l Rm,@(disp,Rn) */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A1508u, 1);  /* 0C0A1506 mov.l @(disp,Rm),Rn */
	IF(0x0C0A1508u); { u32 t_ = r0; PR = 0x0C0A150Cu; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C0A150Cu); }  /* 0C0A1508 jsr @Rn */
L_0C0A150C: BLKS(0x0C0A150Cu);
	W32(r8, r9); UPD(0x0C0A150Eu, 1);  /* 0C0A150C mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A150E mov Rm,Rn */
	IF(0x0C0A1510u); PR = R32(r15); r15 += 4; UPD(0x0C0A1512u, 2);  /* 0C0A1510 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A1514u, 1);  /* 0C0A1512 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A1516u, 1);  /* 0C0A1514 mov.l @Rm+,Rn */
	IF(0x0C0A1516u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A1516 rts */
}

/* FUN_0c0a1530 */
void f_0C0A1530(sh3_t *c)
{
	LOCALS;
L_0C0A1530: BLKS(0x0C0A1530u);
	r0 = 0xC7C1234u; UPD(0x0C0A1532u, 1);  /* 0C0A1530 mov.l @(disp,pc),Rn */
	IF(0x0C0A1532u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C0A1534u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C7C1234u: TAIL(f_0C7C1234); default: JUMPD(tv_); } }  /* 0C0A1532 jmp @Rn */
}

void f_0C0A1536(sh3_t *c)
{
	LOCALS;
L_0C0A1536: BLKS(0x0C0A1536u);
	IF(0x0C0A1536u); ;  /* 0C0A1536 nop */
	IF(0x0C0A1538u); r12 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0A153Au, 2);  /* 0C0A1538 mov.b @(r0,Rm),Rn */
	W32(r2 + 0x10u, r3); UPD(0x0C0A153Cu, 1);  /* 0C0A153A mov.l Rm,@(disp,Rn) */
	IF(0x0C0A153Cu); r0 = MACL;  /* 0C0A153C sts macl,Rn */
	r0 += r6;  /* 0C0A153E add Rm,Rn */
	r4 = R32(r0 + 0x8u); UPD(0x0C0A1542u, 3);  /* 0C0A1540 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0A1542 mov Rm,Rn */
	r1 = R32(r0 + 0x10u); UPD(0x0C0A1546u, 2);  /* 0C0A1544 mov.l @(disp,Rm),Rn */
	IF(0x0C0A1546u); ARG0(0x445Du); { s32 s_ = (s32)r5; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0A1546 shld Rm,Rn */
	r4 += r1;  /* 0C0A1548 add Rm,Rn */
	r3 = R32(r4 + 0x4u); UPD(0x0C0A154Cu, 3);  /* 0C0A154A mov.l @(disp,Rm),Rn */
	r0 += 0x40u;  /* 0C0A154C add #imm,Rn */
	W32(r0, r3); UPD(0x0C0A1550u, 2);  /* 0C0A154E mov.l Rm,@Rn */
	r1 = 0xFFFFFFF9u;  /* 0C0A1550 mov #imm,Rn */
	r7 = R32(r4 + 0x8u); UPD(0x0C0A1554u, 2);  /* 0C0A1552 mov.l @(disp,Rm),Rn */
	r0 += 0x4u;  /* 0C0A1554 add #imm,Rn */
	W32(r0, r7); UPD(0x0C0A1558u, 2);  /* 0C0A1556 mov.l Rm,@Rn */
	r4 += 0xEu;  /* 0C0A1558 add #imm,Rn */
	r2 = 0xC27DFF8u; UPD(0x0C0A155Cu, 2);  /* 0C0A155A mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFF8u;  /* 0C0A155C add #imm,Rn */
	r6 = R32(r2); UPD(0x0C0A1560u, 2);  /* 0C0A155E mov.l @Rm,Rn */
	r5 = 0x1000000u; UPD(0x0C0A1562u, 1);  /* 0C0A1560 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C0A1564u, 1);  /* 0C0A1562 mov.w @Rm,Rn */
	r5 -= r6;  /* 0C0A1564 sub Rm,Rn */
	IF(0x0C0A1566u); r5 >>= 16;  /* 0C0A1566 shlr16 Rn */
	IF(0x0C0A1568u); MACL = r3 * r5;  /* 0C0A1568 mul.l Rm,Rn */
	IF(0x0C0A156Au); r4 = MACL;  /* 0C0A156A sts macl,Rn */
	IF(0x0C0A156Cu); ARG0(0x441Du); { s32 s_ = (s32)r1; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0A156C shld Rm,Rn */
	r3 += r4;  /* 0C0A156E add Rm,Rn */
	W16(r0, r3); UPD(0x0C0A1572u, 8);  /* 0C0A1570 mov.w Rm,@Rn */
	r15 = r14;  /* 0C0A1572 mov Rm,Rn */
	IF(0x0C0A1574u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A1574 rts */
}

/* FUN_0c0a1590 */
void f_0C0A1590(sh3_t *c)
{
	LOCALS;
L_0C0A1590: BLKS(0x0C0A1590u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1592u, 1);  /* 0C0A1590 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A1592 exts.w Rm,Rn */
	r0 = 0xB4u; UPD(0x0C0A1596u, 2);  /* 0C0A1594 mov.w @(disp,pc),Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1598u, 1);  /* 0C0A1596 mov.l Rm,@-Rn */
	IF(0x0C0A1598u); MACL = r4 * r0;  /* 0C0A1598 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A159Cu, 3);  /* 0C0A159A mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A159Eu, 1);  /* 0C0A159C mov.l @(disp,pc),Rn */
	IF(0x0C0A159Eu); r2 = MACL;  /* 0C0A159E sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A15A2u, 2);  /* 0C0A15A0 mov.l Rm,@-Rn */
	r2 += r0;  /* 0C0A15A2 add Rm,Rn */
	r5 = 0x8Cu; UPD(0x0C0A15A6u, 2);  /* 0C0A15A4 mov.w @(disp,pc),Rn */
	IF(0x0C0A15A6u); r15 -= 4; W32(r15, PR); UPD(0x0C0A15A8u, 1);  /* 0C0A15A6 sts.l pr,@-Rn */
	r5 += r2;  /* 0C0A15A8 add Rm,Rn */
	r0 = 0x94u; UPD(0x0C0A15ACu, 2);  /* 0C0A15AA mov.w @(disp,pc),Rn */
	r7 = R32(r5); UPD(0x0C0A15AEu, 1);  /* 0C0A15AC mov.l @Rm,Rn */
	IF(0x0C0A15AEu); r1 = R32(r0 + r2); UPD(0x0C0A15B0u, 1);  /* 0C0A15AE mov.l @(r0,Rm),Rn */
	T = r7 == r1;  /* 0C0A15B0 cmp/eq Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A15CEu, 4); goto L_0C0A15CE; } goto L_0C0A15B6; }  /* 0C0A15B2 bt/s */
L_0C0A15B6: BLKS(0x0C0A15B6u);
	r3 = r7;  /* 0C0A15B6 mov Rm,Rn */
	r3 -= r1;  /* 0C0A15B8 sub Rm,Rn */
	IF(0x0C0A15BAu); T = (s32)r3 >= 0;  /* 0C0A15BA cmp/pz Rn */
	{ u32 c_ = T; r6 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A15C4u, 7); goto L_0C0A15C4; } goto L_0C0A15C0; }  /* 0C0A15BC bt/s */
L_0C0A15C0: BLKS(0x0C0A15C0u);
	{ r6 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C0A16D0u, 4); goto L_0C0A16D0; }  /* 0C0A15C0 bra */
L_0C0A15C4: BLKS(0x0C0A15C4u);
	r0 = 0x90u; UPD(0x0C0A15C6u, 1);  /* 0C0A15C4 mov.w @(disp,pc),Rn */
	IF(0x0C0A15C6u); r2 = R32(r0 + r2); UPD(0x0C0A15C8u, 1);  /* 0C0A15C6 mov.l @(r0,Rm),Rn */
	T = (s32)r6 >= (s32)r2;  /* 0C0A15C8 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0A16B0u, 4); goto L_0C0A16B0; }  /* 0C0A15CA bt */
L_0C0A15CC: BLKS(0x0C0A15CCu);
	W32(r5, r1); UPD(0x0C0A15CEu, 1);  /* 0C0A15CC mov.l Rm,@Rn */
L_0C0A15CE: BLKS(0x0C0A15CEu);
	r5 = 0xB4u; UPD(0x0C0A15D0u, 1);  /* 0C0A15CE mov.w @(disp,pc),Rn */
	IF(0x0C0A15D0u); MACL = r4 * r5;  /* 0C0A15D0 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0A15D4u, 3);  /* 0C0A15D2 mov.l @(disp,pc),Rn */
	IF(0x0C0A15D4u); r3 = MACL;  /* 0C0A15D4 sts macl,Rn */
	r7 = 0x88u; UPD(0x0C0A15D8u, 2);  /* 0C0A15D6 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C0A15D8 add Rm,Rn */
	r0 = 0x86u; UPD(0x0C0A15DCu, 2);  /* 0C0A15DA mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C0A15DC add Rm,Rn */
	r7 += 0x2u;  /* 0C0A15DE add #imm,Rn */
	r0 += r3;  /* 0C0A15E0 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r7); UPD(0x0C0A15E4u, 4);  /* 0C0A15E2 mov.w @Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r0); UPD(0x0C0A15E6u, 1);  /* 0C0A15E4 mov.w @Rm,Rn */
	r1 = (u32)(s32)(s16)r5;  /* 0C0A15E6 exts.w Rm,Rn */
	r2 = (u32)(s32)(s16)r6;  /* 0C0A15E8 exts.w Rm,Rn */
	T = r2 == r1;  /* 0C0A15EA cmp/eq Rm,Rn */
	{ u32 c_ = T; r7 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A1600u, 6); goto L_0C0A1600; } goto L_0C0A15F0; }  /* 0C0A15EC bt/s */
L_0C0A15F0: BLKS(0x0C0A15F0u);
	r3 = r2;  /* 0C0A15F0 mov Rm,Rn */
	r9 = 0x7FC0u; UPD(0x0C0A15F4u, 3);  /* 0C0A15F2 mov.w @(disp,pc),Rn */
	r3 -= r1;  /* 0C0A15F4 sub Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r7); UPD(0x0C0A15F8u, 2);  /* 0C0A15F6 mov.w @Rm,Rn */
	r3 &= r9;  /* 0C0A15F8 and Rm,Rn */
	T = (s32)r3 >= (s32)r2;  /* 0C0A15FA cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0A1690u, 5); goto L_0C0A1690; }  /* 0C0A15FC bt */
L_0C0A15FE: BLKS(0x0C0A15FEu);
	W16(r0, r5); UPD(0x0C0A1600u, 1);  /* 0C0A15FE mov.w Rm,@Rn */
L_0C0A1600: BLKS(0x0C0A1600u);
	r3 = 0xB4u; UPD(0x0C0A1602u, 1);  /* 0C0A1600 mov.w @(disp,pc),Rn */
	IF(0x0C0A1602u); MACL = r4 * r3;  /* 0C0A1602 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0A1606u, 3);  /* 0C0A1604 mov.l @(disp,pc),Rn */
	r1 = 0xA8u; UPD(0x0C0A1608u, 1);  /* 0C0A1606 mov.w @(disp,pc),Rn */
	IF(0x0C0A1608u); r0 = MACL;  /* 0C0A1608 sts macl,Rn */
	r0 += r6;  /* 0C0A160A add Rm,Rn */
	r0 += r1;  /* 0C0A160C add Rm,Rn */
	r7 = r0;  /* 0C0A160E mov Rm,Rn */
	r7 += 0x1u;  /* 0C0A1610 add #imm,Rn */
	r0 += 0x2u;  /* 0C0A1612 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0A1616u, 7);  /* 0C0A1614 mov.b @Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C0A1618u, 1);  /* 0C0A1616 mov.b @Rm,Rn */
	r3 = r2 & 0xFF;  /* 0C0A1618 extu.b Rm,Rn */
	r1 = r10 & 0xFF;  /* 0C0A161A extu.b Rm,Rn */
	T = r3 == r1;  /* 0C0A161C cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0A162Au, 6); goto L_0C0A162A; }  /* 0C0A161E bt */
L_0C0A1620: BLKS(0x0C0A1620u);
	T = r3 > r1;  /* 0C0A1620 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0A1680u, 4); goto L_0C0A1680; }  /* 0C0A1622 bf */
L_0C0A1624: BLKS(0x0C0A1624u);
	r1 = r2;  /* 0C0A1624 mov Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0A1626 add #imm,Rn */
	UPD(0x0C0A1628u, 2);
L_0C0A1628: BLKS(0x0C0A1628u);
	W8(r7, r1); UPD(0x0C0A162Au, 1);  /* 0C0A1628 mov.b Rm,@Rn */
L_0C0A162A: BLKS(0x0C0A162Au);
	r8 = 0xB4u; UPD(0x0C0A162Cu, 1);  /* 0C0A162A mov.w @(disp,pc),Rn */
	r7 = 0xFFFFFFFAu;  /* 0C0A162C mov #imm,Rn */
	IF(0x0C0A162Eu); MACL = r4 * r8;  /* 0C0A162E mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A1632u, 4);  /* 0C0A1630 mov.l @(disp,pc),Rn */
	IF(0x0C0A1632u); r8 = MACL;  /* 0C0A1632 sts macl,Rn */
	r8 += r0;  /* 0C0A1634 add Rm,Rn */
	r10 = 0x86u; UPD(0x0C0A1638u, 3);  /* 0C0A1636 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0A1638 mov Rm,Rn */
	IF(0x0C0A163Au); r9 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C0A163Cu, 2);  /* 0C0A163A mov.w @(r0,Rm),Rn */
	r0 = 0x8Cu; UPD(0x0C0A163Eu, 1);  /* 0C0A163C mov.w @(disp,pc),Rn */
	IF(0x0C0A163Eu); ARG0(0x497Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = (u32)((s32)r9 >> 31); else r9 = (u32)((s32)r9 >> ((~s_ & 31) + 1)); }  /* 0C0A163E shad Rm,Rn */
	IF(0x0C0A1640u); r10 = R32(r0 + r8); UPD(0x0C0A1642u, 2);  /* 0C0A1640 mov.l @(r0,Rm),Rn */
	r4 = r9;  /* 0C0A1642 mov Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C0A1646u, 2);  /* 0C0A1644 mov.l @(disp,pc),Rn */
	IF(0x0C0A1646u); { u32 t_ = r0; PR = 0x0C0A164Au; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A164Au); }  /* 0C0A1646 jsr @Rn */
L_0C0A164A: BLKS(0x0C0A164Au);
	r4 = r9;  /* 0C0A164A mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0A164Eu, 2);  /* 0C0A164C mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C0A164E mov Rm,Rn */
	IF(0x0C0A1650u); { u32 t_ = r9; PR = 0x0C0A1654u; W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A1654u); }  /* 0C0A1650 jsr @Rn */
L_0C0A1654: BLKS(0x0C0A1654u);
	r5 = R32(r8 + 0x24u); UPD(0x0C0A1656u, 1);  /* 0C0A1654 mov.l @(disp,Rm),Rn */
	r2 = R32(r8 + 0x28u); UPD(0x0C0A1658u, 1);  /* 0C0A1656 mov.l @(disp,Rm),Rn */
	r9 = R32(r8 + 0x2Cu); UPD(0x0C0A165Au, 1);  /* 0C0A1658 mov.l @(disp,Rm),Rn */
	r2 += r0;  /* 0C0A165A add Rm,Rn */
	r5 += r9;  /* 0C0A165C add Rm,Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C0A1660u, 3);  /* 0C0A165E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x24u, r5); UPD(0x0C0A1662u, 1);  /* 0C0A1660 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r2); UPD(0x0C0A1664u, 1);  /* 0C0A1662 mov.l Rm,@(disp,Rn) */
	r8 += 0x50u;  /* 0C0A1664 add #imm,Rn */
	r4 = R32(r8); UPD(0x0C0A1668u, 2);  /* 0C0A1666 mov.l @Rm,Rn */
	r4 += r10;  /* 0C0A1668 add Rm,Rn */
	W32(r8, r4); UPD(0x0C0A166Cu, 2);  /* 0C0A166A mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A166C mov Rm,Rn */
	IF(0x0C0A166Eu); PR = R32(r15); r15 += 4; UPD(0x0C0A1670u, 2);  /* 0C0A166E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A1672u, 1);  /* 0C0A1670 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A1674u, 1);  /* 0C0A1672 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A1676u, 1);  /* 0C0A1674 mov.l @Rm+,Rn */
	IF(0x0C0A1676u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A1676 rts */
L_0C0A1680: BLKS(0x0C0A1680u);
	r1 = r2;  /* 0C0A1680 mov Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0A1628u, 4); goto L_0C0A1628; }  /* 0C0A1682 bra */
L_0C0A1690: BLKS(0x0C0A1690u);
	r7 = 0x4000u; UPD(0x0C0A1692u, 1);  /* 0C0A1690 mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r7;  /* 0C0A1692 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A16A0u, 4); goto L_0C0A16A0; } goto L_0C0A1698; }  /* 0C0A1694 bf/s */
L_0C0A1698: BLKS(0x0C0A1698u);
	r1 = r6;  /* 0C0A1698 mov Rm,Rn */
	r1 += r2;  /* 0C0A169A add Rm,Rn */
	UPD(0x0C0A169Cu, 3);
L_0C0A169C: BLKS(0x0C0A169Cu);
	{ W16(r0, r1); /* slot mov.w Rm,@Rn */ UPD(0x0C0A1600u, 3); goto L_0C0A1600; }  /* 0C0A169C bra */
L_0C0A16A0: BLKS(0x0C0A16A0u);
	{ r1 -= r2; /* slot sub Rm,Rn */ UPD(0x0C0A169Cu, 3); goto L_0C0A169C; }  /* 0C0A16A0 bra */
L_0C0A16B0: BLKS(0x0C0A16B0u);
	r6 = 0x80000000u; UPD(0x0C0A16B2u, 1);  /* 0C0A16B0 mov.l @(disp,pc),Rn */
	T = r3 > r6;  /* 0C0A16B2 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0A16C0u, 4); goto L_0C0A16C0; }  /* 0C0A16B4 bf */
L_0C0A16B6: BLKS(0x0C0A16B6u);
	r7 += r2;  /* 0C0A16B6 add Rm,Rn */
	UPD(0x0C0A16B8u, 1);
L_0C0A16B8: BLKS(0x0C0A16B8u);
	{ W32(r5, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C0A15CEu, 3); goto L_0C0A15CE; }  /* 0C0A16B8 bra */
L_0C0A16C0: BLKS(0x0C0A16C0u);
	{ r7 -= r2; /* slot sub Rm,Rn */ UPD(0x0C0A16B8u, 3); goto L_0C0A16B8; }  /* 0C0A16C0 bra */
L_0C0A16D0: BLKS(0x0C0A16D0u);
	{ IF(0x0C0A16D2u); ; /* slot nop */ UPD(0x0C0A15C4u, 3); goto L_0C0A15C4; }  /* 0C0A16D0 bra */
}

/* FUN_0c0a1700 */
void f_0C0A1700(sh3_t *c)
{
	LOCALS;
L_0C0A1700: BLKS(0x0C0A1700u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1702u, 1);  /* 0C0A1700 mov.l Rm,@-Rn */
	r7 = (u32)(s32)(s16)r4;  /* 0C0A1702 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1706u, 2);  /* 0C0A1704 mov.l Rm,@-Rn */
	r6 = 0x4u;  /* 0C0A1706 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A170Au, 2);  /* 0C0A1708 mov.l Rm,@-Rn */
	IF(0x0C0A170Au); r15 -= 4; W32(r15, PR); UPD(0x0C0A170Cu, 1);  /* 0C0A170A sts.l pr,@-Rn */
	r2 = 0xC0B000Eu; UPD(0x0C0A170Eu, 1);  /* 0C0A170C mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFF90u;  /* 0C0A170E add #imm,Rn */
	r14 = r15;  /* 0C0A1710 mov Rm,Rn */
	r5 = 0xC0B2BC0u; UPD(0x0C0A1714u, 3);  /* 0C0A1712 mov.l @(disp,pc),Rn */
	IF(0x0C0A1714u); { u32 t_ = r2; PR = 0x0C0A1718u; r4 = r14; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0B000E, 0x0C0B000Eu, 0x0C0A1718u); }  /* 0C0A1714 jsr @Rn */
L_0C0A1718: BLKS(0x0C0A1718u);
	r0 = 0xB4u; UPD(0x0C0A171Au, 1);  /* 0C0A1718 mov.w @(disp,pc),Rn */
	IF(0x0C0A171Au); MACL = r7 * r0;  /* 0C0A171A mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A171Eu, 3);  /* 0C0A171C mov.l @(disp,pc),Rn */
	IF(0x0C0A171Eu); r2 = MACL;  /* 0C0A171E sts macl,Rn */
	r2 += r0;  /* 0C0A1720 add Rm,Rn */
	r3 = r2;  /* 0C0A1722 mov Rm,Rn */
	r3 += 0x54u;  /* 0C0A1724 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A1728u, 5);  /* 0C0A1726 mov.w @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0A1728 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A1740u, 4); goto L_0C0A1740; } goto L_0C0A172E; }  /* 0C0A172A bt/s */
L_0C0A172E: BLKS(0x0C0A172Eu);
	W16(r3, r1); UPD(0x0C0A1730u, 2);  /* 0C0A172E mov.w Rm,@Rn */
L_0C0A1730: BLKS(0x0C0A1730u);
	r0 = 0x0u;  /* 0C0A1730 mov #imm,Rn */
	UPD(0x0C0A1732u, 1);
L_0C0A1732: BLKS(0x0C0A1732u);
	r14 += 0x70u;  /* 0C0A1732 add #imm,Rn */
	r15 = r14;  /* 0C0A1734 mov Rm,Rn */
	IF(0x0C0A1736u); PR = R32(r15); r15 += 4; UPD(0x0C0A1738u, 3);  /* 0C0A1736 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A173Au, 1);  /* 0C0A1738 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A173Cu, 1);  /* 0C0A173A mov.l @Rm+,Rn */
	IF(0x0C0A173Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A173C rts */
L_0C0A1740: BLKS(0x0C0A1740u);
	r9 = r2;  /* 0C0A1740 mov Rm,Rn */
	r9 += 0x4Cu;  /* 0C0A1742 add #imm,Rn */
	r1 = R32(r9); UPD(0x0C0A1746u, 3);  /* 0C0A1744 mov.l @Rm,Rn */
	r0 = 0x1u;  /* 0C0A1746 mov #imm,Rn */
	r8 = 0xC286734u; UPD(0x0C0A174Au, 2);  /* 0C0A1748 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r1); UPD(0x0C0A174Cu, 1);  /* 0C0A174A mov.w @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0A174C tst Rm,Rn */
	{ u32 c_ = T; W32(r8, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0A1732u, 4); goto L_0C0A1732; } UPD(0x0C0A1752u, 1); goto L_0C0A1752; }  /* 0C0A174E bt/s */
L_0C0A1752: BLKS(0x0C0A1752u);
	IF(0x0C0A1752u); r2 <<= 2;  /* 0C0A1752 shll2 Rn */
	r0 = r2;  /* 0C0A1754 mov Rm,Rn */
	IF(0x0C0A1756u); r3 = R32(r0 + r14); UPD(0x0C0A1758u, 3);  /* 0C0A1756 mov.l @(r0,Rm),Rn */
	r1 += 0x2u;  /* 0C0A1758 add #imm,Rn */
	W32(r8, r1); UPD(0x0C0A175Cu, 2);  /* 0C0A175A mov.l Rm,@Rn */
	IF(0x0C0A175Cu); { u32 t_ = r3; PR = 0x0C0A1760u; r4 = r7; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0A1760u); }  /* 0C0A175C jsr @Rn */
L_0C0A1760: BLKS(0x0C0A1760u);
	T = (r0 & r0) == 0;  /* 0C0A1760 tst Rm,Rn */
	if (T) { UPD(0x0C0A1730u, 4); goto L_0C0A1730; }  /* 0C0A1762 bt */
L_0C0A1764: BLKS(0x0C0A1764u);
	r4 = R32(r8); UPD(0x0C0A1766u, 1);  /* 0C0A1764 mov.l @Rm,Rn */
	{ W32(r9, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C0A1730u, 3); goto L_0C0A1730; }  /* 0C0A1766 bra */
}

/* FUN_0c0a1780 */
void f_0C0A1780(sh3_t *c)
{
	LOCALS;
L_0C0A1780: BLKS(0x0C0A1780u);
	r6 = 0xB4u; UPD(0x0C0A1782u, 1);  /* 0C0A1780 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r4;  /* 0C0A1782 exts.w Rm,Rn */
	IF(0x0C0A1784u); MACL = r7 * r6;  /* 0C0A1784 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0A1788u, 4);  /* 0C0A1786 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0A1788 mov #imm,Rn */
	IF(0x0C0A178Au); r0 = MACL;  /* 0C0A178A sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A178Eu, 3);  /* 0C0A178C mov.l Rm,@-Rn */
	r0 += r3;  /* 0C0A178E add Rm,Rn */
	r0 += 0x4Cu;  /* 0C0A1790 add #imm,Rn */
	W32(r0, r5); UPD(0x0C0A1794u, 3);  /* 0C0A1792 mov.l Rm,@Rn */
	r4 = 0x0u;  /* 0C0A1794 mov #imm,Rn */
	r0 += 0x8u;  /* 0C0A1796 add #imm,Rn */
	W16(r0, r2); UPD(0x0C0A179Au, 3);  /* 0C0A1798 mov.w Rm,@Rn */
	r14 = r15;  /* 0C0A179A mov Rm,Rn */
	r0 += 0x4u;  /* 0C0A179C add #imm,Rn */
	W8(r0, r2); UPD(0x0C0A17A0u, 3);  /* 0C0A179E mov.b Rm,@Rn */
	{ u32 v_ = r2; r0 -= 2; W16(r0, v_); } UPD(0x0C0A17A2u, 1);  /* 0C0A17A0 mov.w Rm,@-Rn */
	r3 = 0x94u; UPD(0x0C0A17A4u, 1);  /* 0C0A17A2 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFAAu;  /* 0C0A17A4 add #imm,Rn */
	IF(0x0C0A17A6u); W32(r0 + r3, r4); UPD(0x0C0A17A8u, 2);  /* 0C0A17A6 mov.l Rm,@(r0,Rn) */
	r3 += 0xFFFFFFF8u;  /* 0C0A17A8 add #imm,Rn */
	IF(0x0C0A17AAu); W32(r0 + r3, r4); UPD(0x0C0A17ACu, 2);  /* 0C0A17AA mov.l Rm,@(r0,Rn) */
	r3 += 0x4u;  /* 0C0A17AC add #imm,Rn */
	IF(0x0C0A17AEu); W32(r0 + r3, r4); UPD(0x0C0A17B0u, 2);  /* 0C0A17AE mov.l Rm,@(r0,Rn) */
	r3 += 0xFFFFFFF6u;  /* 0C0A17B0 add #imm,Rn */
	IF(0x0C0A17B2u); r1 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0A17B4u, 2);  /* 0C0A17B2 mov.w @(r0,Rm),Rn */
	r3 += 0x4u;  /* 0C0A17B4 add #imm,Rn */
	IF(0x0C0A17B6u); W16(r0 + r3, r1); UPD(0x0C0A17B8u, 2);  /* 0C0A17B6 mov.w Rm,@(r0,Rn) */
	W32(r0 + 0x30u, r4); UPD(0x0C0A17BAu, 1);  /* 0C0A17B8 mov.l Rm,@(disp,Rn) */
	r3 += 0x1Fu;  /* 0C0A17BA add #imm,Rn */
	W32(r0 + 0x2Cu, r4); UPD(0x0C0A17BEu, 2);  /* 0C0A17BC mov.l Rm,@(disp,Rn) */
	r3 += r0;  /* 0C0A17BE add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r3); r3 += 1; r0 = v_; } UPD(0x0C0A17C2u, 2);  /* 0C0A17C0 mov.b @Rm+,Rn */
	W8(r3, r0); UPD(0x0C0A17C4u, 1);  /* 0C0A17C2 mov.b Rm,@Rn */
	r15 = r14;  /* 0C0A17C4 mov Rm,Rn */
	IF(0x0C0A17C6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A17C6 rts */
}

/* FUN_0c0a17e0 */
void f_0C0A17E0(sh3_t *c)
{
	LOCALS;
L_0C0A17E0: BLKS(0x0C0A17E0u);
	r0 = 0xB4u; UPD(0x0C0A17E2u, 1);  /* 0C0A17E0 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r4;  /* 0C0A17E2 exts.w Rm,Rn */
	IF(0x0C0A17E4u); MACL = r7 * r0;  /* 0C0A17E4 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0A17E8u, 4);  /* 0C0A17E6 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0A17E8 mov #imm,Rn */
	IF(0x0C0A17EAu); r0 = MACL;  /* 0C0A17EA sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A17EEu, 3);  /* 0C0A17EC mov.l Rm,@-Rn */
	r0 += r3;  /* 0C0A17EE add Rm,Rn */
	r0 += 0x4Cu;  /* 0C0A17F0 add #imm,Rn */
	W32(r0, r5); UPD(0x0C0A17F4u, 3);  /* 0C0A17F2 mov.l Rm,@Rn */
	r14 = r15;  /* 0C0A17F4 mov Rm,Rn */
	r0 += 0xFFFFFFB4u;  /* 0C0A17F6 add #imm,Rn */
	r5 = r0;  /* 0C0A17F8 mov Rm,Rn */
	r6 = r0;  /* 0C0A17FA mov Rm,Rn */
	r0 += 0x56u;  /* 0C0A17FC add #imm,Rn */
	W16(r0, r4); UPD(0x0C0A1800u, 6);  /* 0C0A17FE mov.w Rm,@Rn */
	r5 += 0x54u;  /* 0C0A1800 add #imm,Rn */
	r0 += 0xFFFFFFE6u;  /* 0C0A1802 add #imm,Rn */
	W16(r0, r4); UPD(0x0C0A1806u, 3);  /* 0C0A1804 mov.w Rm,@Rn */
	r6 += 0x58u;  /* 0C0A1806 add #imm,Rn */
	r0 += 0xFFFFFFC4u;  /* 0C0A1808 add #imm,Rn */
	r1 = R32(r0); UPD(0x0C0A180Cu, 3);  /* 0C0A180A mov.l @Rm,Rn */
	r2 = 0xECFF7FFFu; UPD(0x0C0A180Eu, 1);  /* 0C0A180C mov.l @(disp,pc),Rn */
	r1 &= r2;  /* 0C0A180E and Rm,Rn */
	W8(r6, r4); UPD(0x0C0A1812u, 2);  /* 0C0A1810 mov.b Rm,@Rn */
	W16(r5, r4); UPD(0x0C0A1814u, 1);  /* 0C0A1812 mov.w Rm,@Rn */
	W32(r0, r1); UPD(0x0C0A1816u, 1);  /* 0C0A1814 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A1816 mov Rm,Rn */
	IF(0x0C0A1818u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A1818 rts */
}

/* FUN_0c0a1830 */
void f_0C0A1830(sh3_t *c)
{
	LOCALS;
L_0C0A1830: BLKS(0x0C0A1830u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1832u, 1);  /* 0C0A1830 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C0A1832 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1836u, 2);  /* 0C0A1834 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1838u, 1);  /* 0C0A1836 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A183Au, 1);  /* 0C0A1838 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0A183Cu, 1);  /* 0C0A183A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A183Eu, 1);  /* 0C0A183C mov.l Rm,@-Rn */
	IF(0x0C0A183Eu); MACL = r5 * r3;  /* 0C0A183E mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1842u, 3);  /* 0C0A1840 mov.l Rm,@-Rn */
	r2 = 0xC26CD40u; UPD(0x0C0A1844u, 1);  /* 0C0A1842 mov.l @(disp,pc),Rn */
	IF(0x0C0A1844u); r3 = MACL;  /* 0C0A1844 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1848u, 2);  /* 0C0A1846 mov.l Rm,@-Rn */
	r3 += r2;  /* 0C0A1848 add Rm,Rn */
	r1 = R32(r3 + 0x1Cu); UPD(0x0C0A184Cu, 2);  /* 0C0A184A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFE8u;  /* 0C0A184C add #imm,Rn */
	{ u32 v_ = R32(r1); r1 += 4; r4 = v_; } UPD(0x0C0A1850u, 2);  /* 0C0A184E mov.l @Rm+,Rn */
	r14 = r15;  /* 0C0A1850 mov Rm,Rn */
	r0 = 0xC2864F8u; UPD(0x0C0A1854u, 2);  /* 0C0A1852 mov.l @(disp,pc),Rn */
	T = (r4 & r4) == 0;  /* 0C0A1854 tst Rm,Rn */
	W32(r14, r5); UPD(0x0C0A1858u, 2);  /* 0C0A1856 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0A185Au, 1);  /* 0C0A1858 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r0, r4); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0A1862u, 3); goto L_0C0A1862; } UPD(0x0C0A185Eu, 1); goto L_0C0A185E; }  /* 0C0A185A bf/s */
L_0C0A185E: BLKS(0x0C0A185Eu);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A196Cu, 3); goto L_0C0A196C; }  /* 0C0A185E bra */
L_0C0A1862: BLKS(0x0C0A1862u);
	r9 = R32(r3 + 0x28u); UPD(0x0C0A1864u, 1);  /* 0C0A1862 mov.l @(disp,Rm),Rn */
	r7 = r3;  /* 0C0A1864 mov Rm,Rn */
	r8 = 0xA8u; UPD(0x0C0A1868u, 2);  /* 0C0A1866 mov.w @(disp,pc),Rn */
	r12 = 0xFFFFFFFFu;  /* 0C0A1868 mov #imm,Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C0A186Cu, 2);  /* 0C0A186A mov.l Rm,@(disp,Rn) */
	r7 += r8;  /* 0C0A186C add Rm,Rn */
	W32(r14 + 0xCu, r9); UPD(0x0C0A1870u, 2);  /* 0C0A186E mov.l Rm,@(disp,Rn) */
	r7 += 0x1u;  /* 0C0A1870 add #imm,Rn */
	W32(r14 + 0x10u, r3); UPD(0x0C0A1874u, 2);  /* 0C0A1872 mov.l Rm,@(disp,Rn) */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0A1876u, 1);  /* 0C0A1874 mov.b @Rm,Rn */
	r4 = r6 & 0xFF;  /* 0C0A1876 extu.b Rm,Rn */
	W32(r14 + 0x14u, r4); UPD(0x0C0A187Au, 2);  /* 0C0A1878 mov.l Rm,@(disp,Rn) */
L_0C0A187A: BLKS(0x0C0A187Au);
	r5 = R32(r14 + 0x4u); UPD(0x0C0A187Cu, 1);  /* 0C0A187A mov.l @(disp,Rm),Rn */
	r4 = 0xC224668u; UPD(0x0C0A187Eu, 1);  /* 0C0A187C mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r5); r5 += 4; r6 = v_; } UPD(0x0C0A1880u, 1);  /* 0C0A187E mov.l @Rm+,Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C0A1882u, 1);  /* 0C0A1880 mov.l @(disp,Rm),Rn */
	W32(r4, r6); UPD(0x0C0A1884u, 1);  /* 0C0A1882 mov.l Rm,@Rn */
	{ u32 v_ = R32(r5); r5 += 4; r1 = v_; } UPD(0x0C0A1886u, 1);  /* 0C0A1884 mov.l @Rm+,Rn */
	r3 = R32(r2 + 0x24u); UPD(0x0C0A1888u, 1);  /* 0C0A1886 mov.l @(disp,Rm),Rn */
	r0 = 0xC26CADCu; UPD(0x0C0A188Au, 1);  /* 0C0A1888 mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C0A188A add Rm,Rn */
	W32(r0, r3); UPD(0x0C0A188Eu, 2);  /* 0C0A188C mov.l Rm,@Rn */
	r13 = R32(r14 + 0xCu); UPD(0x0C0A1890u, 1);  /* 0C0A188E mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r5); r5 += 4; r11 = v_; } UPD(0x0C0A1892u, 1);  /* 0C0A1890 mov.l @Rm+,Rn */
	r10 = 0xC275DC0u; UPD(0x0C0A1894u, 1);  /* 0C0A1892 mov.l @(disp,pc),Rn */
	r11 += r13;  /* 0C0A1894 add Rm,Rn */
	W32(r10, r11); UPD(0x0C0A1898u, 2);  /* 0C0A1896 mov.l Rm,@Rn */
	r10 = 0xBFu; UPD(0x0C0A189Au, 1);  /* 0C0A1898 mov.w @(disp,pc),Rn */
	r11 = 0x864Cu; UPD(0x0C0A189Cu, 1);  /* 0C0A189A mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0A189Eu, 1);  /* 0C0A189C mov.l Rm,@(disp,Rn) */
	IF(0x0C0A189Eu); ;  /* 0C0A189E nop */
	UPD(0x0C0A18A0u, 1);
L_0C0A18A0: BLKS(0x0C0A18A0u);
	r3 = 0xC26CD40u; UPD(0x0C0A18A2u, 1);  /* 0C0A18A0 mov.l @(disp,pc),Rn */
	r13 = 0x1u;  /* 0C0A18A2 mov #imm,Rn */
	r7 = 0xA8u; UPD(0x0C0A18A6u, 2);  /* 0C0A18A4 mov.w @(disp,pc),Rn */
	r3 += r11;  /* 0C0A18A6 add Rm,Rn */
	r0 = R32(r14); UPD(0x0C0A18AAu, 2);  /* 0C0A18A8 mov.l @Rm,Rn */
	r7 += r3;  /* 0C0A18AA add Rm,Rn */
	r7 += 0x1u;  /* 0C0A18AC add #imm,Rn */
	T = r0 == r10;  /* 0C0A18AE cmp/eq Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0A18B2u, 4);  /* 0C0A18B0 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r12, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C0A18B2 negc Rm,Rn */
	r0 = R32(r14 + 0x14u); UPD(0x0C0A18B6u, 2);  /* 0C0A18B4 mov.l @(disp,Rm),Rn */
	r4 = r6 & 0xFF;  /* 0C0A18B6 extu.b Rm,Rn */
	r8 = R32(r3); UPD(0x0C0A18BAu, 2);  /* 0C0A18B8 mov.l @Rm,Rn */
	T = r0 == r4;  /* 0C0A18BA cmp/eq Rm,Rn */
	r5 = 0x80u; UPD(0x0C0A18BEu, 2);  /* 0C0A18BC mov.w @(disp,pc),Rn */
	IF(0x0C0A18BEu); r8 >>= 16;  /* 0C0A18BE shlr16 Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0A18C2u, 2);  /* 0C0A18C0 mov.l @(disp,Rm),Rn */
	IF(0x0C0A18C2u); r8 <<= 2;  /* 0C0A18C2 shll2 Rn */
	r0 += r5;  /* 0C0A18C4 add Rm,Rn */
	IF(0x0C0A18C6u); r8 >>= 16;  /* 0C0A18C6 shlr16 Rn */
	r8 &= r13;  /* 0C0A18C8 and Rm,Rn */
	r5 += r3;  /* 0C0A18CA add Rm,Rn */
	r8 &= r9;  /* 0C0A18CC and Rm,Rn */
	r0 += 0x2u;  /* 0C0A18CE add #imm,Rn */
	r5 += 0x2u;  /* 0C0A18D0 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r0); UPD(0x0C0A18D4u, 9);  /* 0C0A18D2 mov.w @Rm,Rn */
	IF(0x0C0A18D4u); r2 = T;  /* 0C0A18D4 movt Rn */
	r13 = (u32)(s32)(s16)R16(r5); UPD(0x0C0A18D8u, 2);  /* 0C0A18D6 mov.w @Rm,Rn */
	r8 &= r2;  /* 0C0A18D8 and Rm,Rn */
	T = r13 == r9;  /* 0C0A18DA cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r12, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C0A18DC negc Rm,Rn */
	r8 &= r7;  /* 0C0A18DE and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0A18E0 tst Rm,Rn */
	{ u32 c_ = T; r0 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A1950u, 8); goto L_0C0A1950; } goto L_0C0A18E6; }  /* 0C0A18E2 bt/s */
L_0C0A18E6: BLKS(0x0C0A18E6u);
	r0 = R32(r3 + 0x1Cu); UPD(0x0C0A18E8u, 2);  /* 0C0A18E6 mov.l @(disp,Rm),Rn */
	r5 = 0xC275578u; UPD(0x0C0A18EAu, 1);  /* 0C0A18E8 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r0); r0 += 4; r8 = v_; } UPD(0x0C0A18ECu, 1);  /* 0C0A18EA mov.l @Rm+,Rn */
	T = (r8 & r8) == 0;  /* 0C0A18EC tst Rm,Rn */
	{ u32 c_ = T; W32(r5, r8); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0A194Eu, 4); goto L_0C0A194E; } UPD(0x0C0A18F2u, 1); goto L_0C0A18F2; }  /* 0C0A18EE bt/s */
L_0C0A18F2: BLKS(0x0C0A18F2u);
	r9 = R32(r3 + 0x28u); UPD(0x0C0A18F4u, 1);  /* 0C0A18F2 mov.l @(disp,Rm),Rn */
	r8 = R32(r3 + 0x24u); UPD(0x0C0A18F6u, 1);  /* 0C0A18F4 mov.l @(disp,Rm),Rn */
	r3 = 0xC26CADCu; UPD(0x0C0A18F8u, 1);  /* 0C0A18F6 mov.l @(disp,pc),Rn */
	r13 = 0xC3929BCu; UPD(0x0C0A18FAu, 1);  /* 0C0A18F8 mov.l @(disp,pc),Rn */
	r5 = R32(r3); UPD(0x0C0A18FCu, 1);  /* 0C0A18FA mov.l @Rm,Rn */
	r4 = 0xFFFFFFFu; UPD(0x0C0A18FEu, 1);  /* 0C0A18FC mov.l @(disp,pc),Rn */
	IF(0x0C0A18FEu); ;  /* 0C0A18FE nop */
	UPD(0x0C0A1900u, 1);
L_0C0A1900: BLKS(0x0C0A1900u);
	{ u32 v_ = R32(r0); r0 += 4; r6 = v_; } UPD(0x0C0A1902u, 1);  /* 0C0A1900 mov.l @Rm+,Rn */
	r3 = 0xC27DC44u; UPD(0x0C0A1904u, 1);  /* 0C0A1902 mov.l @(disp,pc),Rn */
	W32(r3, r6); UPD(0x0C0A1906u, 1);  /* 0C0A1904 mov.l Rm,@Rn */
	{ u32 v_ = R32(r0); r0 += 4; r1 = v_; } UPD(0x0C0A1908u, 1);  /* 0C0A1906 mov.l @Rm+,Rn */
	r3 = r5;  /* 0C0A1908 mov Rm,Rn */
	r7 = 0xC3867F8u; UPD(0x0C0A190Cu, 2);  /* 0C0A190A mov.l @(disp,pc),Rn */
	r1 += r8;  /* 0C0A190C add Rm,Rn */
	W32(r7, r1); UPD(0x0C0A1910u, 2);  /* 0C0A190E mov.l Rm,@Rn */
	r3 -= r1;  /* 0C0A1910 sub Rm,Rn */
	{ u32 v_ = R32(r0); r0 += 4; r7 = v_; } UPD(0x0C0A1914u, 2);  /* 0C0A1912 mov.l @Rm+,Rn */
	IF(0x0C0A1914u); T = (s32)r3 >= 0;  /* 0C0A1914 cmp/pz Rn */
	r7 += r9;  /* 0C0A1916 add Rm,Rn */
	{ u32 c_ = !T; W32(r13, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0A19A0u, 5); goto L_0C0A19A0; } UPD(0x0C0A191Cu, 1); goto L_0C0A191C; }  /* 0C0A1918 bf/s */
L_0C0A191C: BLKS(0x0C0A191Cu);
	r1 = 0xC2864F8u; UPD(0x0C0A191Eu, 1);  /* 0C0A191C mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C0A1920u, 1);  /* 0C0A191E mov.l @Rm,Rn */
	r1 = 0xC275578u; UPD(0x0C0A1922u, 1);  /* 0C0A1920 mov.l @(disp,pc),Rn */
	r2 &= r4;  /* 0C0A1922 and Rm,Rn */
	r1 = R32(r1); UPD(0x0C0A1926u, 2);  /* 0C0A1924 mov.l @Rm,Rn */
	r1 &= r4;  /* 0C0A1926 and Rm,Rn */
	r2 += r1;  /* 0C0A1928 add Rm,Rn */
	T = (s32)r3 >= (s32)r2;  /* 0C0A192A cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0A1944u, 6); goto L_0C0A1944; }  /* 0C0A192C bt */
L_0C0A192E: BLKS(0x0C0A192Eu);
	r3 = 0xC275DC0u; UPD(0x0C0A1930u, 1);  /* 0C0A192E mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C0A1932u, 1);  /* 0C0A1930 mov.l @Rm,Rn */
	r2 -= r7;  /* 0C0A1932 sub Rm,Rn */
	IF(0x0C0A1934u); T = (s32)r2 >= 0;  /* 0C0A1934 cmp/pz Rn */
	if (!T) { UPD(0x0C0A1990u, 5); goto L_0C0A1990; }  /* 0C0A1936 bf */
L_0C0A1938: BLKS(0x0C0A1938u);
	r3 = 0xC224668u; UPD(0x0C0A193Au, 1);  /* 0C0A1938 mov.l @(disp,pc),Rn */
	r7 = R32(r3); UPD(0x0C0A193Cu, 1);  /* 0C0A193A mov.l @Rm,Rn */
	r7 += r6;  /* 0C0A193C add Rm,Rn */
	T = (s32)r2 >= (s32)r7;  /* 0C0A193E cmp/ge Rm,Rn */
	{ u32 c_ = !T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A196Cu, 5); goto L_0C0A196C; } UPD(0x0C0A1944u, 1); goto L_0C0A1944; }  /* 0C0A1940 bf/s */
L_0C0A1944: BLKS(0x0C0A1944u);
	{ u32 v_ = R32(r0); r0 += 4; r6 = v_; } UPD(0x0C0A1946u, 1);  /* 0C0A1944 mov.l @Rm+,Rn */
	r2 = 0xC275578u; UPD(0x0C0A1948u, 1);  /* 0C0A1946 mov.l @(disp,pc),Rn */
	T = (r6 & r6) == 0;  /* 0C0A1948 tst Rm,Rn */
	{ u32 c_ = !T; W32(r2, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0A1900u, 4); goto L_0C0A1900; } UPD(0x0C0A194Eu, 1); goto L_0C0A194E; }  /* 0C0A194A bf/s */
L_0C0A194E: BLKS(0x0C0A194Eu);
	r0 = r10;  /* 0C0A194E mov Rm,Rn */
	UPD(0x0C0A1950u, 1);
L_0C0A1950: BLKS(0x0C0A1950u);
	r10 = 0xFFFFFF4Cu; UPD(0x0C0A1952u, 1);  /* 0C0A1950 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0A1952 add #imm,Rn */
	r11 += r10;  /* 0C0A1954 add Rm,Rn */
	r10 = (u32)(s32)(s16)r0;  /* 0C0A1956 exts.w Rm,Rn */
	IF(0x0C0A1958u); T = (s32)r10 >= 0;  /* 0C0A1958 cmp/pz Rn */
	if (T) { UPD(0x0C0A18A0u, 7); goto L_0C0A18A0; }  /* 0C0A195A bt */
L_0C0A195C: BLKS(0x0C0A195Cu);
	r1 = R32(r14 + 0x4u); UPD(0x0C0A195Eu, 1);  /* 0C0A195C mov.l @(disp,Rm),Rn */
	r4 = 0xC2864F8u; UPD(0x0C0A1960u, 1);  /* 0C0A195E mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r1); r1 += 4; r11 = v_; } UPD(0x0C0A1962u, 1);  /* 0C0A1960 mov.l @Rm+,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0A1964u, 1);  /* 0C0A1962 mov.l Rm,@(disp,Rn) */
	T = (r11 & r11) == 0;  /* 0C0A1964 tst Rm,Rn */
	{ u32 c_ = !T; W32(r4, r11); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0A187Au, 4); goto L_0C0A187A; } UPD(0x0C0A196Au, 1); goto L_0C0A196A; }  /* 0C0A1966 bf/s */
L_0C0A196A: BLKS(0x0C0A196Au);
	r1 = 0x0u;  /* 0C0A196A mov #imm,Rn */
	UPD(0x0C0A196Cu, 1);
L_0C0A196C: BLKS(0x0C0A196Cu);
	r0 = r1;  /* 0C0A196C mov Rm,Rn */
	r14 += 0x18u;  /* 0C0A196E add #imm,Rn */
	r15 = r14;  /* 0C0A1970 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A1974u, 4);  /* 0C0A1972 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A1976u, 1);  /* 0C0A1974 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A1978u, 1);  /* 0C0A1976 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A197Au, 1);  /* 0C0A1978 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A197Cu, 1);  /* 0C0A197A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A197Eu, 1);  /* 0C0A197C mov.l @Rm+,Rn */
	IF(0x0C0A197Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A197E rts */
L_0C0A1990: BLKS(0x0C0A1990u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A1938u, 3); goto L_0C0A1938; }  /* 0C0A1990 bra */
L_0C0A19A0: BLKS(0x0C0A19A0u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C0A191Cu, 3); goto L_0C0A191C; }  /* 0C0A19A0 bra */
}

void f_0C0A19E0(sh3_t *c)
{
	LOCALS;
L_0C0A19E0: BLKS(0x0C0A19E0u);
	r2 = 0xB4u; UPD(0x0C0A19E2u, 1);  /* 0C0A19E0 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A19E2 exts.w Rm,Rn */
	IF(0x0C0A19E4u); MACL = r1 * r2;  /* 0C0A19E4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A19E8u, 4);  /* 0C0A19E6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A19EAu, 1);  /* 0C0A19E8 mov.l Rm,@-Rn */
	IF(0x0C0A19EAu); r3 = MACL;  /* 0C0A19EA sts macl,Rn */
	r3 += r0;  /* 0C0A19EC add Rm,Rn */
	r2 = R32(r3 + 0x38u); UPD(0x0C0A19F0u, 3);  /* 0C0A19EE mov.l @(disp,Rm),Rn */
	r0 = 0x808080u; UPD(0x0C0A19F2u, 1);  /* 0C0A19F0 mov.l @(disp,pc),Rn */
	T = r2 == r0;  /* 0C0A19F2 cmp/eq Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A19FEu, 4); goto L_0C0A19FE; } goto L_0C0A19F8; }  /* 0C0A19F4 bt/s */
L_0C0A19F8: BLKS(0x0C0A19F8u);
	r4 = 0x10101u; UPD(0x0C0A19FAu, 2);  /* 0C0A19F8 mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0A19FA add Rm,Rn */
	W32(r3 + 0x38u, r2); UPD(0x0C0A19FEu, 2);  /* 0C0A19FC mov.l Rm,@(disp,Rn) */
L_0C0A19FE: BLKS(0x0C0A19FEu);
	r15 = r14;  /* 0C0A19FE mov Rm,Rn */
	IF(0x0C0A1A00u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A1A00 rts */
}

void f_0C0A1F90(sh3_t *c)
{
	LOCALS;
L_0C0A1F90: BLKS(0x0C0A1F90u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1F92u, 1);  /* 0C0A1F90 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0A1F92 mov #imm,Rn */
	IF(0x0C0A1F94u); r15 -= 4; W32(r15, PR); UPD(0x0C0A1F96u, 2);  /* 0C0A1F94 sts.l pr,@-Rn */
	r4 = 0xC286509u; UPD(0x0C0A1F98u, 1);  /* 0C0A1F96 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A1F98 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0A1F9Cu, 2);  /* 0C0A1F9A mov.b @Rm,Rn */
	r4 = 0xC392D64u; UPD(0x0C0A1F9Eu, 1);  /* 0C0A1F9C mov.l @(disp,pc),Rn */
	IF(0x0C0A1F9Eu); MACL = r6 * r2;  /* 0C0A1F9E mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0A1FA2u, 3);  /* 0C0A1FA0 mov.l @Rm,Rn */
	r7 = 0xC286274u; UPD(0x0C0A1FA4u, 1);  /* 0C0A1FA2 mov.l @(disp,pc),Rn */
	IF(0x0C0A1FA4u); r3 = MACL;  /* 0C0A1FA4 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A1FA8u, 2);  /* 0C0A1FA6 mov.w @Rm+,Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0A1FAAu, 1);  /* 0C0A1FA8 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0A1FACu, 1);  /* 0C0A1FAA mov.w Rm,@Rn */
	r0 += r3;  /* 0C0A1FAC add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0A1FB0u, 2);  /* 0C0A1FAE mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A1FB2u, 1);  /* 0C0A1FB0 mov.w @Rm+,Rn */
	IF(0x0C0A1FB2u); r0 <<= 2;  /* 0C0A1FB2 shll2 Rn */
	IF(0x0C0A1FB4u); r6 = R32(r0 + r7); UPD(0x0C0A1FB6u, 2);  /* 0C0A1FB4 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A1FB8u, 1);  /* 0C0A1FB6 mov.w @Rm+,Rn */
	r0 = 0xC28629Eu; UPD(0x0C0A1FBAu, 1);  /* 0C0A1FB8 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0A1FBCu, 1);  /* 0C0A1FBA mov.w Rm,@Rn */
	r2 = 0xC27DC20u; UPD(0x0C0A1FBEu, 1);  /* 0C0A1FBC mov.l @(disp,pc),Rn */
	r0 = 0xC06FD40u; UPD(0x0C0A1FC0u, 1);  /* 0C0A1FBE mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0A1FC2u, 1);  /* 0C0A1FC0 mov.l Rm,@Rn */
	IF(0x0C0A1FC2u); { u32 t_ = r0; PR = 0x0C0A1FC6u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C06FD40, 0x0C06FD40u, 0x0C0A1FC6u); }  /* 0C0A1FC2 jsr @Rn */
L_0C0A1FC6: BLKS(0x0C0A1FC6u);
	r15 = r14;  /* 0C0A1FC6 mov Rm,Rn */
	IF(0x0C0A1FC8u); PR = R32(r15); r15 += 4; UPD(0x0C0A1FCAu, 2);  /* 0C0A1FC8 lds.l @Rn+,pr */
	IF(0x0C0A1FCAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A1FCA rts */
}

void f_0C0A1FF0(sh3_t *c)
{
	LOCALS;
L_0C0A1FF0: BLKS(0x0C0A1FF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1FF2u, 1);  /* 0C0A1FF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1FF4u, 1);  /* 0C0A1FF2 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0A1FF6u, 1);  /* 0C0A1FF4 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0A1FF6 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1FFAu, 2);  /* 0C0A1FF8 mov.l Rm,@-Rn */
	IF(0x0C0A1FFAu); MACL = r9 * r3;  /* 0C0A1FFA mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A1FFEu, 3);  /* 0C0A1FFC mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A2000u, 1);  /* 0C0A1FFE mov.l @(disp,pc),Rn */
	IF(0x0C0A2000u); r8 = MACL;  /* 0C0A2000 sts macl,Rn */
	IF(0x0C0A2002u); r15 -= 4; W32(r15, PR); UPD(0x0C0A2004u, 2);  /* 0C0A2002 sts.l pr,@-Rn */
	r8 += r0;  /* 0C0A2004 add Rm,Rn */
	r2 = R32(r8 + 0x8u); UPD(0x0C0A2008u, 2);  /* 0C0A2006 mov.l @(disp,Rm),Rn */
	r0 = 0x8u;  /* 0C0A2008 mov #imm,Rn */
	r2 += 0xFFFFFFE0u;  /* 0C0A200A add #imm,Rn */
	T = r2 > r0;  /* 0C0A200C cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A2016u, 6); goto L_0C0A2016; } goto L_0C0A2012; }  /* 0C0A200E bf/s */
L_0C0A2012: BLKS(0x0C0A2012u);
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C0A2110u, 4); goto L_0C0A2110; }  /* 0C0A2012 bra */
L_0C0A2016: BLKS(0x0C0A2016u);
	r10 = 0xC0A03F0u; UPD(0x0C0A2018u, 1);  /* 0C0A2016 mov.l @(disp,pc),Rn */
	IF(0x0C0A2018u); { u32 t_ = r10; PR = 0x0C0A201Cu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0A201Cu); }  /* 0C0A2018 jsr @Rn */
L_0C0A201C: BLKS(0x0C0A201Cu);
	IF(0x0C0A201Cu); T = (s32)r0 >= 0;  /* 0C0A201C cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A2026u, 4); goto L_0C0A2026; } goto L_0C0A2022; }  /* 0C0A201E bt/s */
L_0C0A2022: BLKS(0x0C0A2022u);
	{ r4 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A2100u, 4); goto L_0C0A2100; }  /* 0C0A2022 bra */
L_0C0A2026: BLKS(0x0C0A2026u);
	r0 = 0xC050D70u; UPD(0x0C0A2028u, 1);  /* 0C0A2026 mov.l @(disp,pc),Rn */
	IF(0x0C0A2028u); { u32 t_ = r0; PR = 0x0C0A202Cu; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A202Cu); }  /* 0C0A2028 jsr @Rn */
L_0C0A202C: BLKS(0x0C0A202Cu);
	T = r0 == 0x2u;  /* 0C0A202C cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0A20E0u, 4); goto L_0C0A20E0; }  /* 0C0A202E bt */
L_0C0A2030: BLKS(0x0C0A2030u);
	r5 = 0x2u;  /* 0C0A2030 mov #imm,Rn */
	T = (s32)r0 > (s32)r5;  /* 0C0A2032 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0A20B0u, 5); goto L_0C0A20B0; } goto L_0C0A2038; }  /* 0C0A2034 bt/s */
L_0C0A2038: BLKS(0x0C0A2038u);
	T = r0 == 0x1u;  /* 0C0A2038 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0A2090u, 5); goto L_0C0A2090; }  /* 0C0A203A bt */
L_0C0A203C: BLKS(0x0C0A203Cu);
	r4 = 0xB4u; UPD(0x0C0A203Eu, 1);  /* 0C0A203C mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A203E add #imm,Rn */
	IF(0x0C0A2040u); MACL = r9 * r4;  /* 0C0A2040 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A2044u, 4);  /* 0C0A2042 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0A2044 mov #imm,Rn */
	IF(0x0C0A2046u); r8 = MACL;  /* 0C0A2046 sts macl,Rn */
	r8 += r0;  /* 0C0A2048 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A204Cu, 4);  /* 0C0A204A mov.w @(disp,pc),Rn */
	IF(0x0C0A204Cu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A204Eu, 1);  /* 0C0A204C mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C0A204E extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A2052u, 2);  /* 0C0A2050 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A2052 add #imm,Rn */
	IF(0x0C0A2054u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A2056u, 2);  /* 0C0A2054 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A2056 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0A205Au, 2);  /* 0C0A2058 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C0A205Cu, 1);  /* 0C0A205A mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0A205Eu, 1);  /* 0C0A205C mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A2060u, 1);  /* 0C0A205E mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0A2062u, 1);  /* 0C0A2060 mov.l @(disp,Rm),Rn */
L_0C0A2062: BLKS(0x0C0A2062u);
	IF(0x0C0A2062u); { u32 t_ = r0; PR = 0x0C0A2066u; IF(0x0C0A2064u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A2066u); }  /* 0C0A2062 jsr @Rn */
L_0C0A2066: BLKS(0x0C0A2066u);
	r6 = 0xB4u; UPD(0x0C0A2068u, 1);  /* 0C0A2066 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0A2068 add #imm,Rn */
	IF(0x0C0A206Au); MACL = r10 * r6;  /* 0C0A206A mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C0A206Eu, 4);  /* 0C0A206C mov.l @(disp,pc),Rn */
	IF(0x0C0A206Eu); r10 = MACL;  /* 0C0A206E sts macl,Rn */
	r10 += r8;  /* 0C0A2070 add Rm,Rn */
	r7 = R32(r10); UPD(0x0C0A2074u, 3);  /* 0C0A2072 mov.l @Rm,Rn */
	IF(0x0C0A2074u); MACL = r9 * r6;  /* 0C0A2074 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C0A2078u, 3);  /* 0C0A2076 mov.l @(disp,pc),Rn */
	r7 |= r1;  /* 0C0A2078 or Rm,Rn */
	W32(r10, r7); UPD(0x0C0A207Cu, 2);  /* 0C0A207A mov.l Rm,@Rn */
	IF(0x0C0A207Cu); r0 = MACL;  /* 0C0A207C sts macl,Rn */
	r9 = 0x0u;  /* 0C0A207E mov #imm,Rn */
	IF(0x0C0A2080u); W32(r0 + r8, r9); UPD(0x0C0A2082u, 3);  /* 0C0A2080 mov.l Rm,@(r0,Rn) */
L_0C0A2082: BLKS(0x0C0A2082u);
	r15 = r14;  /* 0C0A2082 mov Rm,Rn */
	IF(0x0C0A2084u); PR = R32(r15); r15 += 4; UPD(0x0C0A2086u, 2);  /* 0C0A2084 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A2088u, 1);  /* 0C0A2086 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A208Au, 1);  /* 0C0A2088 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A208Cu, 1);  /* 0C0A208A mov.l @Rm+,Rn */
	IF(0x0C0A208Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A208C rts */
L_0C0A2090: BLKS(0x0C0A2090u);
	r0 = 0xB0u; UPD(0x0C0A2092u, 1);  /* 0C0A2090 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A2092 add #imm,Rn */
	IF(0x0C0A2094u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A2096u, 2);  /* 0C0A2094 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C0A2096 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A209Au, 2);  /* 0C0A2098 mov.l Rm,@Rn */
	r0 = r8;  /* 0C0A209A mov Rm,Rn */
	r7 = 0xA9u; UPD(0x0C0A209Eu, 2);  /* 0C0A209C mov.w @(disp,pc),Rn */
	IF(0x0C0A209Eu); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0A20A0u, 1);  /* 0C0A209E mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A20A0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0A20A4u, 2);  /* 0C0A20A2 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C0A20A6u, 1);  /* 0C0A20A4 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0A20A6 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0A20AAu, 2);  /* 0C0A20A8 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A20ACu, 1);  /* 0C0A20AA mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A2062u, 3); goto L_0C0A2062; }  /* 0C0A20AC bra */
L_0C0A20B0: BLKS(0x0C0A20B0u);
	if (!T) { UPD(0x0C0A203Cu, 3); goto L_0C0A203C; }  /* 0C0A20B0 bf */
L_0C0A20B2: BLKS(0x0C0A20B2u);
	r15 += 0xFFFFFFF8u;  /* 0C0A20B2 add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0A20B6u, 2);  /* 0C0A20B4 mov.w @(disp,pc),Rn */
	IF(0x0C0A20B6u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A20B8u, 1);  /* 0C0A20B6 mov.b @(r0,Rm),Rn */
	r0 = r5 & 0xFF;  /* 0C0A20B8 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0A20BCu, 2);  /* 0C0A20BA mov.l Rm,@Rn */
	r5 = 0x2u;  /* 0C0A20BC mov #imm,Rn */
	r4 = 0xA9u; UPD(0x0C0A20C0u, 2);  /* 0C0A20BE mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0A20C0 mov Rm,Rn */
	IF(0x0C0A20C2u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0A20C4u, 2);  /* 0C0A20C2 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C0A20C4 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0A20C8u, 2);  /* 0C0A20C6 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0A20CAu, 1);  /* 0C0A20C8 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0A20CCu, 1);  /* 0C0A20CA mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A20CEu, 1);  /* 0C0A20CC mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A2062u, 3); goto L_0C0A2062; }  /* 0C0A20CE bra */
L_0C0A20E0: BLKS(0x0C0A20E0u);
	r0 = 0xB0u; UPD(0x0C0A20E2u, 1);  /* 0C0A20E0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A20E2 add #imm,Rn */
	IF(0x0C0A20E4u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A20E6u, 2);  /* 0C0A20E4 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A20E6 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0A20EAu, 2);  /* 0C0A20E8 mov.l Rm,@Rn */
	r0 = r8;  /* 0C0A20EA mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C0A20EEu, 2);  /* 0C0A20EC mov.w @(disp,pc),Rn */
	IF(0x0C0A20EEu); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0A20F0u, 1);  /* 0C0A20EE mov.b @(r0,Rm),Rn */
	r0 = r4 & 0xFF;  /* 0C0A20F0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A20F4u, 2);  /* 0C0A20F2 mov.l Rm,@(disp,Rn) */
	r5 = 0x2u;  /* 0C0A20F4 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0A20F8u, 2);  /* 0C0A20F6 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A20FAu, 1);  /* 0C0A20F8 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AD970u; UPD(0x0C0A20FCu, 1);  /* 0C0A20FA mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A2062u, 3); goto L_0C0A2062; }  /* 0C0A20FC bra */
L_0C0A2100: BLKS(0x0C0A2100u);
	{ W32(r8, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C0A2082u, 3); goto L_0C0A2082; }  /* 0C0A2100 bra */
L_0C0A2110: BLKS(0x0C0A2110u);
	r2 = 0xC0A0940u; UPD(0x0C0A2112u, 1);  /* 0C0A2110 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0A2112 mov Rm,Rn */
	IF(0x0C0A2114u); PR = R32(r15); r15 += 4; UPD(0x0C0A2116u, 2);  /* 0C0A2114 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A2118u, 1);  /* 0C0A2116 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A211Au, 1);  /* 0C0A2118 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A211Cu, 1);  /* 0C0A211A mov.l @Rm+,Rn */
	IF(0x0C0A211Cu); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A0940u: TAIL(f_0C0A0940); default: JUMPD(tv_); } }  /* 0C0A211C jmp @Rn */
}

void f_0C0A2150(sh3_t *c)
{
	LOCALS;
L_0C0A2150: BLKS(0x0C0A2150u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A2152u, 1);  /* 0C0A2150 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0A2152 mov #imm,Rn */
	IF(0x0C0A2154u); r15 -= 4; W32(r15, PR); UPD(0x0C0A2156u, 2);  /* 0C0A2154 sts.l pr,@-Rn */
	r4 = 0xC286509u; UPD(0x0C0A2158u, 1);  /* 0C0A2156 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A2158 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0A215Cu, 2);  /* 0C0A215A mov.b @Rm,Rn */
	r4 = 0xC392D64u; UPD(0x0C0A215Eu, 1);  /* 0C0A215C mov.l @(disp,pc),Rn */
	IF(0x0C0A215Eu); MACL = r6 * r2;  /* 0C0A215E mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0A2162u, 3);  /* 0C0A2160 mov.l @Rm,Rn */
	r7 = 0xC286274u; UPD(0x0C0A2164u, 1);  /* 0C0A2162 mov.l @(disp,pc),Rn */
	IF(0x0C0A2164u); r3 = MACL;  /* 0C0A2164 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A2168u, 2);  /* 0C0A2166 mov.w @Rm+,Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0A216Au, 1);  /* 0C0A2168 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0A216Cu, 1);  /* 0C0A216A mov.w Rm,@Rn */
	r0 += r3;  /* 0C0A216C add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0A2170u, 2);  /* 0C0A216E mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A2172u, 1);  /* 0C0A2170 mov.w @Rm+,Rn */
	IF(0x0C0A2172u); r0 <<= 2;  /* 0C0A2172 shll2 Rn */
	IF(0x0C0A2174u); r6 = R32(r0 + r7); UPD(0x0C0A2176u, 2);  /* 0C0A2174 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A2178u, 1);  /* 0C0A2176 mov.w @Rm+,Rn */
	r0 = 0xC28629Eu; UPD(0x0C0A217Au, 1);  /* 0C0A2178 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0A217Cu, 1);  /* 0C0A217A mov.w Rm,@Rn */
	r2 = 0xC27DC20u; UPD(0x0C0A217Eu, 1);  /* 0C0A217C mov.l @(disp,pc),Rn */
	r0 = 0xC070470u; UPD(0x0C0A2180u, 1);  /* 0C0A217E mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0A2182u, 1);  /* 0C0A2180 mov.l Rm,@Rn */
	IF(0x0C0A2182u); { u32 t_ = r0; PR = 0x0C0A2186u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C070470, 0x0C070470u, 0x0C0A2186u); }  /* 0C0A2182 jsr @Rn */
L_0C0A2186: BLKS(0x0C0A2186u);
	r15 = r14;  /* 0C0A2186 mov Rm,Rn */
	IF(0x0C0A2188u); PR = R32(r15); r15 += 4; UPD(0x0C0A218Au, 2);  /* 0C0A2188 lds.l @Rn+,pr */
	IF(0x0C0A218Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A218A rts */
}

void f_0C0A23A0(sh3_t *c)
{
	LOCALS;
L_0C0A23A0: BLKS(0x0C0A23A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A23A2u, 1);  /* 0C0A23A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A23A4u, 1);  /* 0C0A23A2 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0A23A6u, 1);  /* 0C0A23A4 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0A23A6 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A23AAu, 2);  /* 0C0A23A8 mov.l Rm,@-Rn */
	IF(0x0C0A23AAu); MACL = r9 * r3;  /* 0C0A23AA mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A23AEu, 3);  /* 0C0A23AC mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A23B0u, 1);  /* 0C0A23AE mov.l @(disp,pc),Rn */
	IF(0x0C0A23B0u); r8 = MACL;  /* 0C0A23B0 sts macl,Rn */
	IF(0x0C0A23B2u); r15 -= 4; W32(r15, PR); UPD(0x0C0A23B4u, 2);  /* 0C0A23B2 sts.l pr,@-Rn */
	r8 += r0;  /* 0C0A23B4 add Rm,Rn */
	r2 = R32(r8 + 0x8u); UPD(0x0C0A23B8u, 2);  /* 0C0A23B6 mov.l @(disp,Rm),Rn */
	r0 = 0x6u;  /* 0C0A23B8 mov #imm,Rn */
	r2 += 0xFFFFFFE0u;  /* 0C0A23BA add #imm,Rn */
	T = r2 > r0;  /* 0C0A23BC cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A23C6u, 6); goto L_0C0A23C6; } goto L_0C0A23C2; }  /* 0C0A23BE bf/s */
L_0C0A23C2: BLKS(0x0C0A23C2u);
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C0A24C0u, 4); goto L_0C0A24C0; }  /* 0C0A23C2 bra */
L_0C0A23C6: BLKS(0x0C0A23C6u);
	r10 = 0xC0A03F0u; UPD(0x0C0A23C8u, 1);  /* 0C0A23C6 mov.l @(disp,pc),Rn */
	IF(0x0C0A23C8u); { u32 t_ = r10; PR = 0x0C0A23CCu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0A23CCu); }  /* 0C0A23C8 jsr @Rn */
L_0C0A23CC: BLKS(0x0C0A23CCu);
	IF(0x0C0A23CCu); T = (s32)r0 >= 0;  /* 0C0A23CC cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A23D6u, 4); goto L_0C0A23D6; } goto L_0C0A23D2; }  /* 0C0A23CE bt/s */
L_0C0A23D2: BLKS(0x0C0A23D2u);
	{ r4 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A24B0u, 4); goto L_0C0A24B0; }  /* 0C0A23D2 bra */
L_0C0A23D6: BLKS(0x0C0A23D6u);
	r0 = 0xC050D70u; UPD(0x0C0A23D8u, 1);  /* 0C0A23D6 mov.l @(disp,pc),Rn */
	IF(0x0C0A23D8u); { u32 t_ = r0; PR = 0x0C0A23DCu; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A23DCu); }  /* 0C0A23D8 jsr @Rn */
L_0C0A23DC: BLKS(0x0C0A23DCu);
	T = r0 == 0x2u;  /* 0C0A23DC cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0A2490u, 4); goto L_0C0A2490; }  /* 0C0A23DE bt */
L_0C0A23E0: BLKS(0x0C0A23E0u);
	r6 = 0x2u;  /* 0C0A23E0 mov #imm,Rn */
	T = (s32)r0 > (s32)r6;  /* 0C0A23E2 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0A2460u, 5); goto L_0C0A2460; } goto L_0C0A23E8; }  /* 0C0A23E4 bt/s */
L_0C0A23E8: BLKS(0x0C0A23E8u);
	T = r0 == 0x1u;  /* 0C0A23E8 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0A2440u, 5); goto L_0C0A2440; }  /* 0C0A23EA bt */
L_0C0A23EC: BLKS(0x0C0A23ECu);
	r4 = 0xB4u; UPD(0x0C0A23EEu, 1);  /* 0C0A23EC mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A23EE add #imm,Rn */
	IF(0x0C0A23F0u); MACL = r9 * r4;  /* 0C0A23F0 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A23F4u, 4);  /* 0C0A23F2 mov.l @(disp,pc),Rn */
	IF(0x0C0A23F4u); r8 = MACL;  /* 0C0A23F4 sts macl,Rn */
	r8 += r0;  /* 0C0A23F6 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A23FAu, 3);  /* 0C0A23F8 mov.w @(disp,pc),Rn */
	IF(0x0C0A23FAu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A23FCu, 1);  /* 0C0A23FA mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C0A23FC extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0A2400u, 2);  /* 0C0A23FE mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A2400 add #imm,Rn */
	IF(0x0C0A2402u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A2404u, 2);  /* 0C0A2402 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C0A2404 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A2406 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A240Au, 3);  /* 0C0A2408 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C0A240Cu, 1);  /* 0C0A240A mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0A240Eu, 1);  /* 0C0A240C mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A2410u, 1);  /* 0C0A240E mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0A2412u, 1);  /* 0C0A2410 mov.l @(disp,Rm),Rn */
L_0C0A2412: BLKS(0x0C0A2412u);
	IF(0x0C0A2412u); { u32 t_ = r0; PR = 0x0C0A2416u; IF(0x0C0A2414u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A2416u); }  /* 0C0A2412 jsr @Rn */
L_0C0A2416: BLKS(0x0C0A2416u);
	r5 = 0xB4u; UPD(0x0C0A2418u, 1);  /* 0C0A2416 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0A2418 add #imm,Rn */
	IF(0x0C0A241Au); MACL = r10 * r5;  /* 0C0A241A mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C0A241Eu, 4);  /* 0C0A241C mov.l @(disp,pc),Rn */
	IF(0x0C0A241Eu); r10 = MACL;  /* 0C0A241E sts macl,Rn */
	r10 += r8;  /* 0C0A2420 add Rm,Rn */
	r7 = R32(r10); UPD(0x0C0A2424u, 3);  /* 0C0A2422 mov.l @Rm,Rn */
	IF(0x0C0A2424u); MACL = r9 * r5;  /* 0C0A2424 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C0A2428u, 3);  /* 0C0A2426 mov.l @(disp,pc),Rn */
	r7 |= r1;  /* 0C0A2428 or Rm,Rn */
	W32(r10, r7); UPD(0x0C0A242Cu, 2);  /* 0C0A242A mov.l Rm,@Rn */
	IF(0x0C0A242Cu); r0 = MACL;  /* 0C0A242C sts macl,Rn */
	r9 = 0x0u;  /* 0C0A242E mov #imm,Rn */
	IF(0x0C0A2430u); W32(r0 + r8, r9); UPD(0x0C0A2432u, 3);  /* 0C0A2430 mov.l Rm,@(r0,Rn) */
L_0C0A2432: BLKS(0x0C0A2432u);
	r15 = r14;  /* 0C0A2432 mov Rm,Rn */
	IF(0x0C0A2434u); PR = R32(r15); r15 += 4; UPD(0x0C0A2436u, 2);  /* 0C0A2434 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A2438u, 1);  /* 0C0A2436 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A243Au, 1);  /* 0C0A2438 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A243Cu, 1);  /* 0C0A243A mov.l @Rm+,Rn */
	IF(0x0C0A243Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A243C rts */
L_0C0A2440: BLKS(0x0C0A2440u);
	r0 = 0xB0u; UPD(0x0C0A2442u, 1);  /* 0C0A2440 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A2442 add #imm,Rn */
	IF(0x0C0A2444u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A2446u, 2);  /* 0C0A2444 mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C0A2446 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0A244Au, 2);  /* 0C0A2448 mov.l Rm,@Rn */
	r0 = r8;  /* 0C0A244A mov Rm,Rn */
	r2 = 0xA9u; UPD(0x0C0A244Eu, 2);  /* 0C0A244C mov.w @(disp,pc),Rn */
	r5 = 0xCu;  /* 0C0A244E mov #imm,Rn */
	IF(0x0C0A2450u); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0A2452u, 2);  /* 0C0A2450 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A2452 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0A2456u, 2);  /* 0C0A2454 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C0A2458u, 1);  /* 0C0A2456 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0A245Au, 1);  /* 0C0A2458 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A245Cu, 1);  /* 0C0A245A mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A2412u, 3); goto L_0C0A2412; }  /* 0C0A245C bra */
L_0C0A2460: BLKS(0x0C0A2460u);
	if (!T) { UPD(0x0C0A23ECu, 3); goto L_0C0A23EC; }  /* 0C0A2460 bf */
L_0C0A2462: BLKS(0x0C0A2462u);
	r15 += 0xFFFFFFF8u;  /* 0C0A2462 add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0A2466u, 2);  /* 0C0A2464 mov.w @(disp,pc),Rn */
	IF(0x0C0A2466u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A2468u, 1);  /* 0C0A2466 mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C0A2468 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0A246Cu, 2);  /* 0C0A246A mov.l Rm,@Rn */
	r4 = 0xA9u; UPD(0x0C0A246Eu, 1);  /* 0C0A246C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0A246E mov Rm,Rn */
	IF(0x0C0A2470u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0A2472u, 2);  /* 0C0A2470 mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C0A2472 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0A2476u, 2);  /* 0C0A2474 mov.l Rm,@(disp,Rn) */
	r5 = 0xCu;  /* 0C0A2476 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0A247Au, 2);  /* 0C0A2478 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A247Cu, 1);  /* 0C0A247A mov.l @(disp,Rm),Rn */
	r0 = 0xC0AD830u; UPD(0x0C0A247Eu, 1);  /* 0C0A247C mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A2412u, 3); goto L_0C0A2412; }  /* 0C0A247E bra */
L_0C0A2490: BLKS(0x0C0A2490u);
	r0 = 0xB0u; UPD(0x0C0A2492u, 1);  /* 0C0A2490 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A2492 add #imm,Rn */
	IF(0x0C0A2494u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A2496u, 2);  /* 0C0A2494 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C0A2496 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A2498 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0A249Cu, 3);  /* 0C0A249A mov.l Rm,@Rn */
	r0 = r8;  /* 0C0A249C mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C0A24A0u, 2);  /* 0C0A249E mov.w @(disp,pc),Rn */
	IF(0x0C0A24A0u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0A24A2u, 1);  /* 0C0A24A0 mov.b @(r0,Rm),Rn */
	r0 = r4 & 0xFF;  /* 0C0A24A2 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A24A6u, 2);  /* 0C0A24A4 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C0A24A8u, 1);  /* 0C0A24A6 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0A24AAu, 1);  /* 0C0A24A8 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A24ACu, 1);  /* 0C0A24AA mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A2412u, 3); goto L_0C0A2412; }  /* 0C0A24AC bra */
L_0C0A24B0: BLKS(0x0C0A24B0u);
	{ W32(r8, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C0A2432u, 3); goto L_0C0A2432; }  /* 0C0A24B0 bra */
L_0C0A24C0: BLKS(0x0C0A24C0u);
	r5 = 0xC0A0A10u; UPD(0x0C0A24C2u, 1);  /* 0C0A24C0 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0A24C2 mov Rm,Rn */
	IF(0x0C0A24C4u); PR = R32(r15); r15 += 4; UPD(0x0C0A24C6u, 2);  /* 0C0A24C4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A24C8u, 1);  /* 0C0A24C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A24CAu, 1);  /* 0C0A24C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A24CCu, 1);  /* 0C0A24CA mov.l @Rm+,Rn */
	IF(0x0C0A24CCu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A0A10u: TAIL(f_0C0A0A10); default: JUMPD(tv_); } }  /* 0C0A24CC jmp @Rn */
}


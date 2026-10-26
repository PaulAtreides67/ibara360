#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C08B600(sh3_t *c)
{
	LOCALS;
L_0C08B600: BLKS(0x0C08B600u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08B602u, 1);  /* 0C08B600 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08B604u, 1);  /* 0C08B602 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08B606u, 1);  /* 0C08B604 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08B608u, 1);  /* 0C08B606 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08B60Au, 1);  /* 0C08B608 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08B60Cu, 1);  /* 0C08B60A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08B60Eu, 1);  /* 0C08B60C mov.l Rm,@-Rn */
	r4 = 0xC2ABAA4u; UPD(0x0C08B610u, 1);  /* 0C08B60E mov.l @(disp,pc),Rn */
	IF(0x0C08B610u); r15 -= 4; W32(r15, PR); UPD(0x0C08B612u, 1);  /* 0C08B610 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C08B614u, 1);  /* 0C08B612 mov.l @Rm,Rn */
	r14 = r15;  /* 0C08B614 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r10 = v_; } UPD(0x0C08B618u, 2);  /* 0C08B616 mov.w @Rm+,Rn */
	r12 = 0xC3C43C6u; UPD(0x0C08B61Au, 1);  /* 0C08B618 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C08B61A add #imm,Rn */
	W16(r12, r10); UPD(0x0C08B61Eu, 2);  /* 0C08B61C mov.w Rm,@Rn */
	r8 = 0xC2A6D5Cu; UPD(0x0C08B620u, 1);  /* 0C08B61E mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r3); r3 += 1; r9 = v_; } UPD(0x0C08B622u, 1);  /* 0C08B620 mov.b @Rm+,Rn */
	W8(r8, r9); UPD(0x0C08B624u, 1);  /* 0C08B622 mov.b Rm,@Rn */
	r7 = 0xC29D724u; UPD(0x0C08B626u, 1);  /* 0C08B624 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C08B628u, 1);  /* 0C08B626 mov.w @Rm+,Rn */
	r6 = R32(r7); UPD(0x0C08B62Au, 1);  /* 0C08B628 mov.l @Rm,Rn */
	IF(0x0C08B62Au); r0 <<= 2;  /* 0C08B62A shll2 Rn */
	IF(0x0C08B62Cu); r5 = R32(r0 + r6); UPD(0x0C08B62Eu, 2);  /* 0C08B62C mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r1 = v_; } UPD(0x0C08B630u, 1);  /* 0C08B62E mov.w @Rm+,Rn */
	r13 = 0xC297460u; UPD(0x0C08B632u, 1);  /* 0C08B630 mov.l @(disp,pc),Rn */
	r9 = 0xC2460ACu; UPD(0x0C08B634u, 1);  /* 0C08B632 mov.l @(disp,pc),Rn */
	r8 = 0xC069510u; UPD(0x0C08B636u, 1);  /* 0C08B634 mov.l @(disp,pc),Rn */
	W32(r13, r5); UPD(0x0C08B638u, 1);  /* 0C08B636 mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C08B63Au, 1);  /* 0C08B638 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C08B63Cu, 1);  /* 0C08B63A mov.w @Rm,Rn */
	r10 = 0xC2B03A2u; UPD(0x0C08B63Eu, 1);  /* 0C08B63C mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C08B63E extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C08B642u, 2);  /* 0C08B640 mov.l @(disp,pc),Rn */
	IF(0x0C08B642u); { u32 t_ = r8; PR = 0x0C08B646u; W16(r10, r1); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C08B646u); }  /* 0C08B642 jsr @Rn */
L_0C08B646: BLKS(0x0C08B646u);
	T = (r0 & r0) == 0;  /* 0C08B646 tst Rm,Rn */
	if (!T) { UPD(0x0C08B660u, 4); goto L_0C08B660; }  /* 0C08B648 bf */
L_0C08B64A: BLKS(0x0C08B64Au);
	r0 = 0x1u;  /* 0C08B64A mov #imm,Rn */
	UPD(0x0C08B64Cu, 1);
L_0C08B64C: BLKS(0x0C08B64Cu);
	r15 = r14;  /* 0C08B64C mov Rm,Rn */
	IF(0x0C08B64Eu); PR = R32(r15); r15 += 4; UPD(0x0C08B650u, 2);  /* 0C08B64E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08B652u, 1);  /* 0C08B650 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08B654u, 1);  /* 0C08B652 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08B656u, 1);  /* 0C08B654 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08B658u, 1);  /* 0C08B656 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08B65Au, 1);  /* 0C08B658 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08B65Cu, 1);  /* 0C08B65A mov.l @Rm+,Rn */
	IF(0x0C08B65Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08B65C rts */
L_0C08B660: BLKS(0x0C08B660u);
	r11 = 0xC071740u; UPD(0x0C08B662u, 1);  /* 0C08B660 mov.l @(disp,pc),Rn */
	IF(0x0C08B662u); { u32 t_ = r11; PR = 0x0C08B666u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08B666u); }  /* 0C08B662 jsr @Rn */
L_0C08B666: BLKS(0x0C08B666u);
	T = (r0 & r0) == 0;  /* 0C08B666 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08B64Cu, 4); goto L_0C08B64C; } goto L_0C08B66C; }  /* 0C08B668 bt/s */
L_0C08B66C: BLKS(0x0C08B66Cu);
	r2 = 0xC28EDFCu; UPD(0x0C08B66Eu, 2);  /* 0C08B66C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C08B670u, 1);  /* 0C08B66E mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r2); UPD(0x0C08B672u, 1);  /* 0C08B670 mov.w @Rm,Rn */
	IF(0x0C08B672u); MACL = r11 * r8;  /* 0C08B672 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C08B676u, 3);  /* 0C08B674 mov.l @(disp,pc),Rn */
	IF(0x0C08B676u); r8 = MACL;  /* 0C08B676 sts macl,Rn */
	r0 = 0xD3000104u; UPD(0x0C08B67Au, 2);  /* 0C08B678 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C08B67A add Rm,Rn */
	W32(r8, r0); UPD(0x0C08B67Eu, 2);  /* 0C08B67C mov.l Rm,@Rn */
	r4 = r11;  /* 0C08B67E mov Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C08B682u, 2);  /* 0C08B680 mov.w @Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C08B684u, 1);  /* 0C08B682 mov.w @Rm,Rn */
	r6 = r7 & 0xFFFF;  /* 0C08B684 extu.w Rm,Rn */
	r0 = 0x8Au; UPD(0x0C08B688u, 2);  /* 0C08B686 mov.w @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C08B688 mov #imm,Rn */
	IF(0x0C08B68Au); W16(r0 + r8, r5); UPD(0x0C08B68Cu, 2);  /* 0C08B68A mov.w Rm,@(r0,Rn) */
	r3 = 0xC0A8A30u; UPD(0x0C08B68Eu, 1);  /* 0C08B68C mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C08B68E add #imm,Rn */
	IF(0x0C08B690u); W16(r0 + r8, r5); UPD(0x0C08B692u, 2);  /* 0C08B690 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0x4u, r6); UPD(0x0C08B694u, 1);  /* 0C08B692 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r9); UPD(0x0C08B696u, 1);  /* 0C08B694 mov.l Rm,@(disp,Rn) */
	IF(0x0C08B696u); { u32 t_ = r3; PR = 0x0C08B69Au; W32(r8 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08B69Au); }  /* 0C08B696 jsr @Rn */
L_0C08B69A: BLKS(0x0C08B69Au);
	r2 = 0xC237C08u; UPD(0x0C08B69Cu, 1);  /* 0C08B69A mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C08B69Eu, 1);  /* 0C08B69C mov.w @Rm,Rn */
	r3 = r4;  /* 0C08B69E mov Rm,Rn */
	IF(0x0C08B6A0u); r3 <<= 16;  /* 0C08B6A0 shll16 Rn */
	r0 = 0x180u; UPD(0x0C08B6A4u, 3);  /* 0C08B6A2 mov.w @(disp,pc),Rn */
	T = (s32)r4 > (s32)r0;  /* 0C08B6A4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x24u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08B6B2u, 4); goto L_0C08B6B2; } UPD(0x0C08B6AAu, 1); goto L_0C08B6AA; }  /* 0C08B6A6 bf/s */
L_0C08B6AA: BLKS(0x0C08B6AAu);
	r5 = 0xC29D728u; UPD(0x0C08B6ACu, 1);  /* 0C08B6AA mov.l @(disp,pc),Rn */
	r10 = R32(r5); UPD(0x0C08B6AEu, 1);  /* 0C08B6AC mov.l @Rm,Rn */
	r3 -= r10;  /* 0C08B6AE sub Rm,Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C08B6B2u, 2);  /* 0C08B6B0 mov.l Rm,@(disp,Rn) */
L_0C08B6B2: BLKS(0x0C08B6B2u);
	r7 = (u32)(s32)(s16)R16(r12); UPD(0x0C08B6B4u, 1);  /* 0C08B6B2 mov.w @Rm,Rn */
	r4 = r11;  /* 0C08B6B4 mov Rm,Rn */
	r6 = 0xC0A9AE0u; UPD(0x0C08B6B8u, 2);  /* 0C08B6B6 mov.l @(disp,pc),Rn */
	IF(0x0C08B6B8u); r7 <<= 16;  /* 0C08B6B8 shll16 Rn */
	IF(0x0C08B6BAu); { u32 t_ = r6; PR = 0x0C08B6BEu; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08B6BEu); }  /* 0C08B6BA jsr @Rn */
L_0C08B6BE: BLKS(0x0C08B6BEu);
	r1 = 0xC2A6D5Cu; UPD(0x0C08B6C0u, 1);  /* 0C08B6BE mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C08B6C0 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C08B6C4u, 2);  /* 0C08B6C2 mov.b @Rm,Rn */
	r0 = 0xADu; UPD(0x0C08B6C6u, 1);  /* 0C08B6C4 mov.w @(disp,pc),Rn */
	IF(0x0C08B6C6u); W8(r0 + r8, r3); UPD(0x0C08B6C8u, 1);  /* 0C08B6C6 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C08B6C8 add #imm,Rn */
	IF(0x0C08B6CAu); W8(r0 + r8, r3); UPD(0x0C08B6CCu, 2);  /* 0C08B6CA mov.b Rm,@(r0,Rn) */
	r11 = 0xC0A9D30u; UPD(0x0C08B6CEu, 1);  /* 0C08B6CC mov.l @(disp,pc),Rn */
	IF(0x0C08B6CEu); { u32 t_ = r11; PR = 0x0C08B6D2u; r5 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C08B6D2u); }  /* 0C08B6CE jsr @Rn */
L_0C08B6D2: BLKS(0x0C08B6D2u);
	r12 = 0x8Cu; UPD(0x0C08B6D4u, 1);  /* 0C08B6D2 mov.w @(disp,pc),Rn */
	r13 = 0x94u; UPD(0x0C08B6D6u, 1);  /* 0C08B6D4 mov.w @(disp,pc),Rn */
	r12 += r8;  /* 0C08B6D6 add Rm,Rn */
	r0 = 0x90u; UPD(0x0C08B6DAu, 2);  /* 0C08B6D8 mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C08B6DA add Rm,Rn */
	IF(0x0C08B6DCu); W32(r0 + r8, r9); UPD(0x0C08B6DEu, 2);  /* 0C08B6DC mov.l Rm,@(r0,Rn) */
	W32(r13, r9); UPD(0x0C08B6E0u, 1);  /* 0C08B6DE mov.l Rm,@Rn */
	W32(r12, r9); UPD(0x0C08B6E2u, 1);  /* 0C08B6E0 mov.l Rm,@Rn */
	W32(r8 + 0x30u, r9); UPD(0x0C08B6E4u, 1);  /* 0C08B6E2 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x2Cu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08B64Au, 3); goto L_0C08B64A; }  /* 0C08B6E4 bra */
}

void blk_f_0C08B740(sh3_t *c)
{
	LOCALS;
L_0C08B740: BLKS(0x0C08B740u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08B742u, 1);  /* 0C08B740 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08B744u, 1);  /* 0C08B742 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C08B746u, 1);  /* 0C08B744 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C08B746 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08B74Au, 2);  /* 0C08B748 mov.l Rm,@-Rn */
	IF(0x0C08B74Au); MACL = r9 * r2;  /* 0C08B74A mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08B74Eu, 3);  /* 0C08B74C mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08B750u, 1);  /* 0C08B74E mov.l @(disp,pc),Rn */
	IF(0x0C08B750u); r8 = MACL;  /* 0C08B750 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08B754u, 2);  /* 0C08B752 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C08B754 add Rm,Rn */
	IF(0x0C08B756u); r15 -= 4; W32(r15, PR); UPD(0x0C08B758u, 2);  /* 0C08B756 sts.l pr,@-Rn */
	r0 = r8;  /* 0C08B758 mov Rm,Rn */
	r3 = 0xA5u; UPD(0x0C08B75Cu, 2);  /* 0C08B75A mov.w @(disp,pc),Rn */
	IF(0x0C08B75Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08B75Eu, 1);  /* 0C08B75C mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C08B75E tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08B768u, 4); goto L_0C08B768; } goto L_0C08B764; }  /* 0C08B760 bf/s */
L_0C08B764: BLKS(0x0C08B764u);
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C08B900u, 4); goto L_0C08B900; }  /* 0C08B764 bra */
L_0C08B768: BLKS(0x0C08B768u);
	r0 = 0xC062780u; UPD(0x0C08B76Au, 1);  /* 0C08B768 mov.l @(disp,pc),Rn */
	r4 = 0x6u;  /* 0C08B76A mov #imm,Rn */
	r10 = R32(r8 + 0x24u); UPD(0x0C08B76Eu, 2);  /* 0C08B76C mov.l @(disp,Rm),Rn */
	IF(0x0C08B76Eu); { u32 t_ = r0; PR = 0x0C08B772u; r11 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08B772u); }  /* 0C08B76E jsr @Rn */
L_0C08B772: BLKS(0x0C08B772u);
	r4 = 0x4u;  /* 0C08B772 mov #imm,Rn */
	T = r0 > r4;  /* 0C08B774 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r2 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08B77Eu, 5); goto L_0C08B77E; } goto L_0C08B77A; }  /* 0C08B776 bf/s */
L_0C08B77A: BLKS(0x0C08B77Au);
	{ r15 += 0xFFFFFFF8u; /* slot add #imm,Rn */ UPD(0x0C08B8E0u, 4); goto L_0C08B8E0; }  /* 0C08B77A bra */
L_0C08B77E: BLKS(0x0C08B77Eu);
	r0 = 0xC08B794u;  /* 0C08B77E mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08B780 add Rm,Rn */
	IF(0x0C08B782u); r6 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08B784u, 3);  /* 0C08B782 mov.w @(r0,Rm),Rn */
	IF(0x0C08B784u); { u32 tv_ = (r6 + 0x0C08B788u); u32 t_ = PHYS(tv_); IF(0x0C08B786u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08B7A0u: goto L_0C08B7A0; case 0x0C08B810u: goto L_0C08B810; case 0x0C08B840u: goto L_0C08B840; case 0x0C08B880u: goto L_0C08B880; case 0x0C08B8B0u: goto L_0C08B8B0; default: JUMPD(tv_); } }  /* 0C08B784 braf Rn */
L_0C08B7A0: BLKS(0x0C08B7A0u);
	r0 = 0xB4u; UPD(0x0C08B7A2u, 1);  /* 0C08B7A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08B7A2 add #imm,Rn */
	IF(0x0C08B7A4u); MACL = r9 * r0;  /* 0C08B7A4 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C08B7A8u, 4);  /* 0C08B7A6 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C08B7A8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C08B7ACu, 2);  /* 0C08B7AA mov.w @(disp,pc),Rn */
	IF(0x0C08B7ACu); r8 = MACL;  /* 0C08B7AC sts macl,Rn */
	r8 += r2;  /* 0C08B7AE add Rm,Rn */
	IF(0x0C08B7B0u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08B7B2u, 3);  /* 0C08B7B0 mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C08B7B2 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C08B7B6u, 2);  /* 0C08B7B4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08B7B6 add #imm,Rn */
	IF(0x0C08B7B8u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08B7BAu, 2);  /* 0C08B7B8 mov.b @(r0,Rm),Rn */
	r7 = r11;  /* 0C08B7BA mov Rm,Rn */
	r4 = r6 & 0xFF;  /* 0C08B7BC extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C08B7C0u, 3);  /* 0C08B7BE mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C08B7C0 mov Rm,Rn */
	r4 = R32(r8); UPD(0x0C08B7C4u, 2);  /* 0C08B7C2 mov.l @Rm,Rn */
	r0 = 0xC0BFE70u; UPD(0x0C08B7C6u, 1);  /* 0C08B7C4 mov.l @(disp,pc),Rn */
	IF(0x0C08B7C6u); ;  /* 0C08B7C6 nop */
	UPD(0x0C08B7C8u, 1);
L_0C08B7C8: BLKS(0x0C08B7C8u);
	IF(0x0C08B7C8u); { u32 t_ = r0; PR = 0x0C08B7CCu; IF(0x0C08B7CAu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C08B7CCu); }  /* 0C08B7C8 jsr @Rn */
L_0C08B7CC: BLKS(0x0C08B7CCu);
	r15 += 0x8u;  /* 0C08B7CC add #imm,Rn */
	UPD(0x0C08B7CEu, 1);
L_0C08B7CE: BLKS(0x0C08B7CEu);
	r8 = 0xB4u; UPD(0x0C08B7D0u, 1);  /* 0C08B7CE mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08B7D0 add #imm,Rn */
	IF(0x0C08B7D2u); MACL = r9 * r8;  /* 0C08B7D2 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C08B7D6u, 4);  /* 0C08B7D4 mov.l @(disp,pc),Rn */
	IF(0x0C08B7D6u); r8 = MACL;  /* 0C08B7D6 sts macl,Rn */
	r8 += r4;  /* 0C08B7D8 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C08B7DCu, 3);  /* 0C08B7DA mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08B7DC mov Rm,Rn */
	IF(0x0C08B7DEu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08B7E0u, 2);  /* 0C08B7DE mov.b @(r0,Rm),Rn */
	r4 = 0x3u;  /* 0C08B7E0 mov #imm,Rn */
	r7 = r5 & 0xFF;  /* 0C08B7E2 extu.b Rm,Rn */
	r9 = 0x20000u; UPD(0x0C08B7E6u, 3);  /* 0C08B7E4 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C08B7E6 mov Rm,Rn */
	W32(r15, r9); UPD(0x0C08B7EAu, 2);  /* 0C08B7E8 mov.l Rm,@Rn */
	r6 = r11;  /* 0C08B7EA mov Rm,Rn */
	r10 = 0xC07CD80u; UPD(0x0C08B7EEu, 2);  /* 0C08B7EC mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C08B7EE mov #imm,Rn */
	IF(0x0C08B7F0u); { u32 t_ = r10; PR = 0x0C08B7F4u; W32(r15 + 0x4u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C08B7F4u); }  /* 0C08B7F0 jsr @Rn */
L_0C08B7F4: BLKS(0x0C08B7F4u);
	W32(r8, r9); UPD(0x0C08B7F6u, 1);  /* 0C08B7F4 mov.l Rm,@Rn */
	r15 = r14;  /* 0C08B7F6 mov Rm,Rn */
	IF(0x0C08B7F8u); PR = R32(r15); r15 += 4; UPD(0x0C08B7FAu, 2);  /* 0C08B7F8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08B7FCu, 1);  /* 0C08B7FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08B7FEu, 1);  /* 0C08B7FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08B800u, 1);  /* 0C08B7FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08B802u, 1);  /* 0C08B800 mov.l @Rm+,Rn */
	IF(0x0C08B802u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08B802 rts */
L_0C08B810: BLKS(0x0C08B810u);
	r2 = 0xB4u; UPD(0x0C08B812u, 1);  /* 0C08B810 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08B812 add #imm,Rn */
	IF(0x0C08B814u); MACL = r9 * r2;  /* 0C08B814 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C08B818u, 4);  /* 0C08B816 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C08B81Au, 1);  /* 0C08B818 mov.w @(disp,pc),Rn */
	IF(0x0C08B81Au); r5 = MACL;  /* 0C08B81A sts macl,Rn */
	r5 += r3;  /* 0C08B81C add Rm,Rn */
	IF(0x0C08B81Eu); r7 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C08B820u, 3);  /* 0C08B81E mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08B820 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C08B824u, 2);  /* 0C08B822 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08B824 add #imm,Rn */
	IF(0x0C08B826u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C08B828u, 2);  /* 0C08B826 mov.b @(r0,Rm),Rn */
	r6 = r10;  /* 0C08B828 mov Rm,Rn */
	r8 = r4 & 0xFF;  /* 0C08B82A extu.b Rm,Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C08B82Eu, 3);  /* 0C08B82C mov.l Rm,@(disp,Rn) */
	r7 = r11;  /* 0C08B82E mov Rm,Rn */
	r4 = R32(r5); UPD(0x0C08B832u, 2);  /* 0C08B830 mov.l @Rm,Rn */
	r0 = 0xC0BECB0u; UPD(0x0C08B834u, 1);  /* 0C08B832 mov.l @(disp,pc),Rn */
	{ r5 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C08B7C8u, 3); goto L_0C08B7C8; }  /* 0C08B834 bra */
L_0C08B840: BLKS(0x0C08B840u);
	r5 = 0xB4u; UPD(0x0C08B842u, 1);  /* 0C08B840 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C08B842 add #imm,Rn */
	IF(0x0C08B844u); MACL = r9 * r5;  /* 0C08B844 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C08B848u, 4);  /* 0C08B846 mov.l @(disp,pc),Rn */
	IF(0x0C08B848u); r5 = MACL;  /* 0C08B848 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C08B84Cu, 2);  /* 0C08B84A mov.w @(disp,pc),Rn */
	r5 += r8;  /* 0C08B84C add Rm,Rn */
	IF(0x0C08B84Eu); r2 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C08B850u, 2);  /* 0C08B84E mov.b @(r0,Rm),Rn */
	r3 = r2 & 0xFF;  /* 0C08B850 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C08B854u, 2);  /* 0C08B852 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08B854 add #imm,Rn */
	IF(0x0C08B856u); r7 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C08B858u, 2);  /* 0C08B856 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08B858 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08B85Cu, 2);  /* 0C08B85A mov.l Rm,@(disp,Rn) */
	r7 = r11;  /* 0C08B85C mov Rm,Rn */
	r4 = R32(r5 + 0x2Cu); UPD(0x0C08B860u, 2);  /* 0C08B85E mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C08B860 mov Rm,Rn */
	W32(r15 + 0x8u, r4); UPD(0x0C08B864u, 2);  /* 0C08B862 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x30u); UPD(0x0C08B866u, 1);  /* 0C08B864 mov.l @(disp,Rm),Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C08B868u, 1);  /* 0C08B866 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0BE860u; UPD(0x0C08B86Au, 1);  /* 0C08B868 mov.l @(disp,pc),Rn */
	r4 = R32(r5); UPD(0x0C08B86Cu, 1);  /* 0C08B86A mov.l @Rm,Rn */
	IF(0x0C08B86Cu); { u32 t_ = r8; PR = 0x0C08B870u; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BE860, 0x0C0BE860u, 0x0C08B870u); }  /* 0C08B86C jsr @Rn */
L_0C08B870: BLKS(0x0C08B870u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C08B7CEu, 3); goto L_0C08B7CE; }  /* 0C08B870 bra */
L_0C08B880: BLKS(0x0C08B880u);
	r8 = 0xB4u; UPD(0x0C08B882u, 1);  /* 0C08B880 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08B882 add #imm,Rn */
	IF(0x0C08B884u); MACL = r9 * r8;  /* 0C08B884 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C08B888u, 4);  /* 0C08B886 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C08B888 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C08B88Cu, 2);  /* 0C08B88A mov.w @(disp,pc),Rn */
	IF(0x0C08B88Cu); r6 = MACL;  /* 0C08B88C sts macl,Rn */
	r6 += r2;  /* 0C08B88E add Rm,Rn */
	IF(0x0C08B890u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08B892u, 3);  /* 0C08B890 mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C08B892 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C08B896u, 2);  /* 0C08B894 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08B896 add #imm,Rn */
	IF(0x0C08B898u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08B89Au, 2);  /* 0C08B898 mov.b @(r0,Rm),Rn */
	r7 = r11;  /* 0C08B89A mov Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C08B89C extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C08B8A0u, 3);  /* 0C08B89E mov.l Rm,@(disp,Rn) */
	r4 = R32(r6); UPD(0x0C08B8A2u, 1);  /* 0C08B8A0 mov.l @Rm,Rn */
	r0 = 0xC0C0030u; UPD(0x0C08B8A4u, 1);  /* 0C08B8A2 mov.l @(disp,pc),Rn */
	{ r6 = r10; /* slot mov Rm,Rn */ UPD(0x0C08B7C8u, 3); goto L_0C08B7C8; }  /* 0C08B8A4 bra */
L_0C08B8B0: BLKS(0x0C08B8B0u);
	r2 = 0xB4u; UPD(0x0C08B8B2u, 1);  /* 0C08B8B0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08B8B2 add #imm,Rn */
	IF(0x0C08B8B4u); MACL = r9 * r2;  /* 0C08B8B4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08B8B8u, 4);  /* 0C08B8B6 mov.l @(disp,pc),Rn */
	IF(0x0C08B8B8u); r5 = MACL;  /* 0C08B8B8 sts macl,Rn */
	r5 += r0;  /* 0C08B8BA add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08B8BEu, 3);  /* 0C08B8BC mov.w @(disp,pc),Rn */
	IF(0x0C08B8BEu); r3 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C08B8C0u, 1);  /* 0C08B8BE mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C08B8C0 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C08B8C4u, 2);  /* 0C08B8C2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08B8C4 add #imm,Rn */
	IF(0x0C08B8C6u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C08B8C8u, 2);  /* 0C08B8C6 mov.b @(r0,Rm),Rn */
	r7 = r11;  /* 0C08B8C8 mov Rm,Rn */
	r6 = r4 & 0xFF;  /* 0C08B8CA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08B8CEu, 3);  /* 0C08B8CC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C08B8D0u, 1);  /* 0C08B8CE mov.l @(disp,pc),Rn */
	r6 = r10;  /* 0C08B8D0 mov Rm,Rn */
	r4 = R32(r5); UPD(0x0C08B8D4u, 2);  /* 0C08B8D2 mov.l @Rm,Rn */
	{ r5 = 0x2u; /* slot mov #imm,Rn */ UPD(0x0C08B7C8u, 3); goto L_0C08B7C8; }  /* 0C08B8D4 bra */
L_0C08B8E0: BLKS(0x0C08B8E0u);
	r0 = 0xB0u; UPD(0x0C08B8E2u, 1);  /* 0C08B8E0 mov.w @(disp,pc),Rn */
	IF(0x0C08B8E2u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08B8E4u, 1);  /* 0C08B8E2 mov.b @(r0,Rm),Rn */
	r6 = r10;  /* 0C08B8E4 mov Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C08B8E6 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C08B8EAu, 3);  /* 0C08B8E8 mov.l Rm,@Rn */
	r5 = 0x3u;  /* 0C08B8EA mov #imm,Rn */
	r2 = 0xA9u; UPD(0x0C08B8EEu, 2);  /* 0C08B8EC mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08B8EE mov Rm,Rn */
	IF(0x0C08B8F0u); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08B8F2u, 2);  /* 0C08B8F0 mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C08B8F2 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C08B8F6u, 2);  /* 0C08B8F4 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C08B8F8u, 1);  /* 0C08B8F6 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C08B8F8 mov Rm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C08B7C8u, 4); goto L_0C08B7C8; }  /* 0C08B8FA bra */
L_0C08B900: BLKS(0x0C08B900u);
	r5 = 0xC0A9590u; UPD(0x0C08B902u, 1);  /* 0C08B900 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08B902 mov Rm,Rn */
	IF(0x0C08B904u); PR = R32(r15); r15 += 4; UPD(0x0C08B906u, 2);  /* 0C08B904 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08B908u, 1);  /* 0C08B906 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08B90Au, 1);  /* 0C08B908 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08B90Cu, 1);  /* 0C08B90A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08B90Eu, 1);  /* 0C08B90C mov.l @Rm+,Rn */
	IF(0x0C08B90Eu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9590u: goto L_0C0A9590; default: JUMPD(tv_); } }  /* 0C08B90E jmp @Rn */
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

/* FUN_0c08b940 */
void blk_f_0C08B940(sh3_t *c)
{
	LOCALS;
L_0C08B940: BLKS(0x0C08B940u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08B942u, 1);  /* 0C08B940 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08B944u, 1);  /* 0C08B942 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C08B946u, 1);  /* 0C08B944 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C08B946 exts.w Rm,Rn */
	IF(0x0C08B948u); MACL = r9 * r0;  /* 0C08B948 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08B94Cu, 4);  /* 0C08B94A mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08B94Eu, 1);  /* 0C08B94C mov.l @(disp,pc),Rn */
	IF(0x0C08B94Eu); r8 = MACL;  /* 0C08B94E sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08B952u, 2);  /* 0C08B950 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C08B952 add Rm,Rn */
	r2 = 0x99u; UPD(0x0C08B956u, 2);  /* 0C08B954 mov.w @(disp,pc),Rn */
	IF(0x0C08B956u); r15 -= 4; W32(r15, PR); UPD(0x0C08B958u, 1);  /* 0C08B956 sts.l pr,@-Rn */
	r2 += r8;  /* 0C08B958 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C08B95Cu, 2);  /* 0C08B95A mov.b @Rm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C08B95C cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08B9D6u, 4); goto L_0C08B9D6; } goto L_0C08B962; }  /* 0C08B95E bt/s */
L_0C08B962: BLKS(0x0C08B962u);
	r10 = 0xC069BF0u; UPD(0x0C08B964u, 2);  /* 0C08B962 mov.l @(disp,pc),Rn */
	r3 = r0;  /* 0C08B964 mov Rm,Rn */
	r3 += 0x1u;  /* 0C08B966 add #imm,Rn */
	W8(r2, r3); UPD(0x0C08B96Au, 3);  /* 0C08B968 mov.b Rm,@Rn */
	IF(0x0C08B96Au); { u32 t_ = r10; PR = 0x0C08B96Eu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08B96Eu); }  /* 0C08B96A jsr @Rn */
L_0C08B96E: BLKS(0x0C08B96Eu);
	r4 = 0x9Eu; UPD(0x0C08B970u, 1);  /* 0C08B96E mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08B970 mov Rm,Rn */
	IF(0x0C08B972u); r7 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C08B974u, 2);  /* 0C08B972 mov.b @(r0,Rm),Rn */
	r5 = 0x2A0u; UPD(0x0C08B976u, 1);  /* 0C08B974 mov.w @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C08B976 extu.b Rm,Rn */
	IF(0x0C08B978u); MACL = r6 * r5;  /* 0C08B978 mul.l Rm,Rn */
	r10 = 0x86u; UPD(0x0C08B97Cu, 4);  /* 0C08B97A mov.w @(disp,pc),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C08B97Eu, 1);  /* 0C08B97C mov.l @(disp,Rm),Rn */
	r10 += r8;  /* 0C08B97E add Rm,Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C08B982u, 2);  /* 0C08B980 mov.l @(disp,Rm),Rn */
	IF(0x0C08B982u); r3 = MACL;  /* 0C08B982 sts macl,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C08B986u, 2);  /* 0C08B984 mov.l @(disp,pc),Rn */
	r8 = 0xC068E60u; UPD(0x0C08B988u, 1);  /* 0C08B986 mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C08B988 add Rm,Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C08B98Cu, 2);  /* 0C08B98A mov.l @(disp,Rm),Rn */
	IF(0x0C08B98Cu); { u32 t_ = r8; PR = 0x0C08B990u; r7 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C08B990u); }  /* 0C08B98C jsr @Rn */
L_0C08B990: BLKS(0x0C08B990u);
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C08B992u, 1);  /* 0C08B990 mov.w @Rm,Rn */
	r4 = 0x1FFu; UPD(0x0C08B994u, 1);  /* 0C08B992 mov.w @(disp,pc),Rn */
	r2 = r3;  /* 0C08B994 mov Rm,Rn */
	r2 -= r0;  /* 0C08B996 sub Rm,Rn */
	r2 &= r4;  /* 0C08B998 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C08B99A tst Rm,Rn */
	if (T) { UPD(0x0C08B9ACu, 7); goto L_0C08B9AC; }  /* 0C08B99C bt */
L_0C08B99E: BLKS(0x0C08B99Eu);
	r0 = 0x100u; UPD(0x0C08B9A0u, 1);  /* 0C08B99E mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C08B9A0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08BA20u, 4); goto L_0C08BA20; } goto L_0C08B9A6; }  /* 0C08B9A2 bf/s */
L_0C08B9A6: BLKS(0x0C08B9A6u);
	r1 = r3;  /* 0C08B9A6 mov Rm,Rn */
	r1 += 0x2u;  /* 0C08B9A8 add #imm,Rn */
	UPD(0x0C08B9AAu, 3);
L_0C08B9AA: BLKS(0x0C08B9AAu);
	W16(r10, r1); UPD(0x0C08B9ACu, 1);  /* 0C08B9AA mov.w Rm,@Rn */
L_0C08B9AC: BLKS(0x0C08B9ACu);
	r3 = 0xFFFFFF00u; UPD(0x0C08B9AEu, 1);  /* 0C08B9AC mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C08B9AE add Rm,Rn */
	IF(0x0C08B9B0u); T = (s32)r3 >= 0;  /* 0C08B9B0 cmp/pz Rn */
	if (!T) { UPD(0x0C08BA10u, 5); goto L_0C08BA10; }  /* 0C08B9B2 bf */
L_0C08B9B4: BLKS(0x0C08B9B4u);
	r1 = 0xF8u; UPD(0x0C08B9B6u, 1);  /* 0C08B9B4 mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r1;  /* 0C08B9B6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08B9F0u, 4); goto L_0C08B9F0; } goto L_0C08B9BC; }  /* 0C08B9B8 bf/s */
L_0C08B9BC: BLKS(0x0C08B9BCu);
	IF(0x0C08B9BCu); MACL = r9 * r1;  /* 0C08B9BC mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C08B9C0u, 4);  /* 0C08B9BE mov.l @(disp,pc),Rn */
	IF(0x0C08B9C0u); r3 = MACL;  /* 0C08B9C0 sts macl,Rn */
	r8 = 0x8Cu; UPD(0x0C08B9C4u, 2);  /* 0C08B9C2 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C08B9C4 add Rm,Rn */
	r3 += r8;  /* 0C08B9C6 add Rm,Rn */
	r2 = R32(r3); UPD(0x0C08B9CAu, 3);  /* 0C08B9C8 mov.l @Rm,Rn */
	r9 = 0x2BFFFu; UPD(0x0C08B9CCu, 1);  /* 0C08B9CA mov.l @(disp,pc),Rn */
	r1 = 0x1000u; UPD(0x0C08B9CEu, 1);  /* 0C08B9CC mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r9;  /* 0C08B9CE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C08B9D6u, 4); goto L_0C08B9D6; }  /* 0C08B9D0 bt */
L_0C08B9D2: BLKS(0x0C08B9D2u);
	r2 += r1;  /* 0C08B9D2 add Rm,Rn */
	UPD(0x0C08B9D4u, 1);
L_0C08B9D4: BLKS(0x0C08B9D4u);
	W32(r3, r2); UPD(0x0C08B9D6u, 1);  /* 0C08B9D4 mov.l Rm,@Rn */
L_0C08B9D6: BLKS(0x0C08B9D6u);
	r15 = r14;  /* 0C08B9D6 mov Rm,Rn */
	IF(0x0C08B9D8u); PR = R32(r15); r15 += 4; UPD(0x0C08B9DAu, 2);  /* 0C08B9D8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08B9DCu, 1);  /* 0C08B9DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08B9DEu, 1);  /* 0C08B9DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08B9E0u, 1);  /* 0C08B9DE mov.l @Rm+,Rn */
	IF(0x0C08B9E0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08B9E0 rts */
L_0C08B9F0: BLKS(0x0C08B9F0u);
	r4 = 0xB4u; UPD(0x0C08B9F2u, 1);  /* 0C08B9F0 mov.w @(disp,pc),Rn */
	IF(0x0C08B9F2u); MACL = r9 * r4;  /* 0C08B9F2 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08B9F6u, 3);  /* 0C08B9F4 mov.l @(disp,pc),Rn */
	IF(0x0C08B9F6u); r3 = MACL;  /* 0C08B9F6 sts macl,Rn */
	r6 = 0x8Cu; UPD(0x0C08B9FAu, 2);  /* 0C08B9F8 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C08B9FA add Rm,Rn */
	r3 += r6;  /* 0C08B9FC add Rm,Rn */
	r2 = R32(r3); UPD(0x0C08BA00u, 3);  /* 0C08B9FE mov.l @Rm,Rn */
	r5 = 0x1C000u; UPD(0x0C08BA02u, 1);  /* 0C08BA00 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C08BA02 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08B9D6u, 4); goto L_0C08B9D6; }  /* 0C08BA04 bf */
L_0C08BA06: BLKS(0x0C08BA06u);
	r1 = 0xFFFFF000u; UPD(0x0C08BA08u, 1);  /* 0C08BA06 mov.w @(disp,pc),Rn */
	{ r2 += r1; /* slot add Rm,Rn */ UPD(0x0C08B9D4u, 3); goto L_0C08B9D4; }  /* 0C08BA08 bra */
L_0C08BA10: BLKS(0x0C08BA10u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C08B9B4u, 3); goto L_0C08B9B4; }  /* 0C08BA10 bra */
L_0C08BA20: BLKS(0x0C08BA20u);
	{ r1 += 0xFFFFFFFEu; /* slot add #imm,Rn */ UPD(0x0C08B9AAu, 3); goto L_0C08B9AA; }  /* 0C08BA20 bra */
}

void blk_f_0C08BA60(sh3_t *c)
{
	LOCALS;
L_0C08BA60: BLKS(0x0C08BA60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08BA62u, 1);  /* 0C08BA60 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08BA64u, 1);  /* 0C08BA62 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08BA66u, 1);  /* 0C08BA64 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C08BA66 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08BA6Au, 2);  /* 0C08BA68 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C08BA6A mov Rm,Rn */
	r8 = 0xC0A9CB0u; UPD(0x0C08BA6Eu, 2);  /* 0C08BA6C mov.l @(disp,pc),Rn */
	IF(0x0C08BA6Eu); r15 -= 4; W32(r15, PR); UPD(0x0C08BA70u, 1);  /* 0C08BA6E sts.l pr,@-Rn */
	r10 = 0xC0A9B40u; UPD(0x0C08BA72u, 1);  /* 0C08BA70 mov.l @(disp,pc),Rn */
	IF(0x0C08BA72u); { u32 t_ = r8; PR = 0x0C08BA76u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C08BA76u); }  /* 0C08BA72 jsr @Rn */
L_0C08BA76: BLKS(0x0C08BA76u);
	r8 = 0xB4u; UPD(0x0C08BA78u, 1);  /* 0C08BA76 mov.w @(disp,pc),Rn */
	IF(0x0C08BA78u); { u32 t_ = r10; PR = 0x0C08BA7Cu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9B40, 0x0C0A9B40u, 0x0C08BA7Cu); }  /* 0C08BA78 jsr @Rn */
L_0C08BA7C: BLKS(0x0C08BA7Cu);
	IF(0x0C08BA7Cu); MACL = r9 * r8;  /* 0C08BA7C mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08BA80u, 3);  /* 0C08BA7E mov.l @(disp,pc),Rn */
	IF(0x0C08BA80u); r8 = MACL;  /* 0C08BA80 sts macl,Rn */
	r8 += r7;  /* 0C08BA82 add Rm,Rn */
	r6 = 0x86u; UPD(0x0C08BA86u, 3);  /* 0C08BA84 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08BA86 mov Rm,Rn */
	IF(0x0C08BA88u); r4 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C08BA8Au, 2);  /* 0C08BA88 mov.w @(r0,Rm),Rn */
	r5 = 0x200u; UPD(0x0C08BA8Cu, 1);  /* 0C08BA8A mov.w @(disp,pc),Rn */
	r0 = 0x1Fu;  /* 0C08BA8C mov #imm,Rn */
	r4 += r5;  /* 0C08BA8E add Rm,Rn */
	IF(0x0C08BA90u); r4 >>= 8;  /* 0C08BA90 shlr8 Rn */
	IF(0x0C08BA92u); r4 >>= 2;  /* 0C08BA92 shlr2 Rn */
	r4 &= r0;  /* 0C08BA94 and Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C08BA98u, 6);  /* 0C08BA96 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C08BA9Au, 1);  /* 0C08BA98 mov.l Rm,@(disp,Rn) */
	IF(0x0C08BA9Au); r0 <<= 2;  /* 0C08BA9A shll2 Rn */
	r3 = 0xC1A014Cu; UPD(0x0C08BA9Eu, 2);  /* 0C08BA9C mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C08BA9E mov Rm,Rn */
	IF(0x0C08BAA0u); r2 = R32(r0 + r3); UPD(0x0C08BAA2u, 2);  /* 0C08BAA0 mov.l @(r0,Rm),Rn */
	r0 = 0xC0A8B10u; UPD(0x0C08BAA4u, 1);  /* 0C08BAA2 mov.l @(disp,pc),Rn */
	IF(0x0C08BAA4u); { u32 t_ = r0; PR = 0x0C08BAA8u; W32(r8 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C08BAA8u); }  /* 0C08BAA4 jsr @Rn */
L_0C08BAA8: BLKS(0x0C08BAA8u);
	r3 = R32(r8 + 0x24u); UPD(0x0C08BAAAu, 1);  /* 0C08BAA8 mov.l @(disp,Rm),Rn */
	r1 = 0xFF600000u; UPD(0x0C08BAACu, 1);  /* 0C08BAAA mov.l @(disp,pc),Rn */
	r1 += r3;  /* 0C08BAAC add Rm,Rn */
	IF(0x0C08BAAEu); T = (s32)r1 >= 0;  /* 0C08BAAE cmp/pz Rn */
	if (!T) { UPD(0x0C08BB80u, 5); goto L_0C08BB80; }  /* 0C08BAB0 bf */
L_0C08BAB2: BLKS(0x0C08BAB2u);
	r6 = 0x1000000u; UPD(0x0C08BAB4u, 1);  /* 0C08BAB2 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r6;  /* 0C08BAB4 cmp/gt Rm,Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C08BAB8u, 2);  /* 0C08BAB6 mov.l @(disp,Rm),Rn */
	IF(0x0C08BAB8u); r2 = T;  /* 0C08BAB8 movt Rn */
	r1 = 0xFE000000u; UPD(0x0C08BABCu, 2);  /* 0C08BABA mov.l @(disp,pc),Rn */
	r1 += r7;  /* 0C08BABC add Rm,Rn */
	IF(0x0C08BABEu); T = (s32)r1 >= 0;  /* 0C08BABE cmp/pz Rn */
	if (!T) { UPD(0x0C08BB70u, 5); goto L_0C08BB70; }  /* 0C08BAC0 bf */
L_0C08BAC2: BLKS(0x0C08BAC2u);
	T = (s32)r1 > (s32)r6;  /* 0C08BAC2 cmp/gt Rm,Rn */
	IF(0x0C08BAC4u); r4 = T;  /* 0C08BAC4 movt Rn */
	r2 |= r4;  /* 0C08BAC6 or Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C08BAC8 tst Rm,Rn */
	{ u32 c_ = T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08BAD0u, 7); goto L_0C08BAD0; } goto L_0C08BACE; }  /* 0C08BACA bt/s */
L_0C08BACE: BLKS(0x0C08BACEu);
	W32(r8, r2); UPD(0x0C08BAD0u, 2);  /* 0C08BACE mov.l Rm,@Rn */
L_0C08BAD0: BLKS(0x0C08BAD0u);
	r0 = 0xFFFDFFFFu; UPD(0x0C08BAD2u, 1);  /* 0C08BAD0 mov.l @(disp,pc),Rn */
	r4 = 0x13BFFFEu; UPD(0x0C08BAD4u, 1);  /* 0C08BAD2 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C08BAD4 add Rm,Rn */
	r2 = 0xFE9DFFFFu; UPD(0x0C08BAD8u, 2);  /* 0C08BAD6 mov.l @(disp,pc),Rn */
	T = r4 >= r3;  /* 0C08BAD8 cmp/hs Rm,Rn */
	IF(0x0C08BADAu); r0 = T;  /* 0C08BADA movt Rn */
	r7 += r2;  /* 0C08BADC add Rm,Rn */
	T = r4 >= r7;  /* 0C08BADE cmp/hs Rm,Rn */
	r7 = 0xA8u; UPD(0x0C08BAE2u, 5);  /* 0C08BAE0 mov.w @(disp,pc),Rn */
	IF(0x0C08BAE2u); r10 = T;  /* 0C08BAE2 movt Rn */
	r0 &= r10;  /* 0C08BAE4 and Rm,Rn */
	r7 += r8;  /* 0C08BAE6 add Rm,Rn */
	r10 = r7;  /* 0C08BAE8 mov Rm,Rn */
	r10 += 0x1u;  /* 0C08BAEA add #imm,Rn */
	r7 += 0x3u;  /* 0C08BAEC add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C08BAF0u, 7);  /* 0C08BAEE mov.b @Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C08BAF2u, 1);  /* 0C08BAF0 mov.b @Rm,Rn */
	T = r6 > r5;  /* 0C08BAF2 cmp/hi Rm,Rn */
	IF(0x0C08BAF4u); r3 = T;  /* 0C08BAF4 movt Rn */
	r0 &= r3;  /* 0C08BAF6 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08BAF8 tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08BB04u, 7); goto L_0C08BB04; } goto L_0C08BAFE; }  /* 0C08BAFA bt/s */
L_0C08BAFE: BLKS(0x0C08BAFEu);
	r3 = 0xA5u; UPD(0x0C08BB00u, 2);  /* 0C08BAFE mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08BB00 mov Rm,Rn */
	IF(0x0C08BB02u); W8(r0 + r3, r5); UPD(0x0C08BB04u, 2);  /* 0C08BB02 mov.b Rm,@(r0,Rn) */
L_0C08BB04: BLKS(0x0C08BB04u);
	r0 = 0xC0BC1B0u; UPD(0x0C08BB06u, 1);  /* 0C08BB04 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C08BB06 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08BB08 mov #imm,Rn */
	IF(0x0C08BB0Au); { u32 t_ = r0; PR = 0x0C08BB0Eu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08BB0Eu); }  /* 0C08BB0A jsr @Rn */
L_0C08BB0E: BLKS(0x0C08BB0Eu);
	T = (r0 & r0) == 0;  /* 0C08BB0E tst Rm,Rn */
	if (!T) { UPD(0x0C08BB20u, 4); goto L_0C08BB20; }  /* 0C08BB10 bf */
L_0C08BB12: BLKS(0x0C08BB12u);
	r15 = r14;  /* 0C08BB12 mov Rm,Rn */
	IF(0x0C08BB14u); PR = R32(r15); r15 += 4; UPD(0x0C08BB16u, 2);  /* 0C08BB14 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08BB18u, 1);  /* 0C08BB16 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08BB1Au, 1);  /* 0C08BB18 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08BB1Cu, 1);  /* 0C08BB1A mov.l @Rm+,Rn */
	IF(0x0C08BB1Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08BB1C rts */
L_0C08BB20: BLKS(0x0C08BB20u);
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C08BB22u, 1);  /* 0C08BB20 mov.b @Rm,Rn */
	r10 = 0xC0BBF10u; UPD(0x0C08BB24u, 1);  /* 0C08BB22 mov.l @(disp,pc),Rn */
	r6 = r1 & 0xFF;  /* 0C08BB24 extu.b Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C08BB28u, 2);  /* 0C08BB26 mov.l @(disp,Rm),Rn */
	IF(0x0C08BB28u); { u32 t_ = r10; PR = 0x0C08BB2Cu; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08BB2Cu); }  /* 0C08BB28 jsr @Rn */
L_0C08BB2C: BLKS(0x0C08BB2Cu);
	T = (r0 & r0) == 0;  /* 0C08BB2C tst Rm,Rn */
	if (T) { UPD(0x0C08BB12u, 4); goto L_0C08BB12; }  /* 0C08BB2E bt */
L_0C08BB30: BLKS(0x0C08BB30u);
	r4 = r9;  /* 0C08BB30 mov Rm,Rn */
	r9 = 0xC069B50u; UPD(0x0C08BB34u, 2);  /* 0C08BB32 mov.l @(disp,pc),Rn */
	r10 = 0xC068E60u; UPD(0x0C08BB36u, 1);  /* 0C08BB34 mov.l @(disp,pc),Rn */
	IF(0x0C08BB36u); { u32 t_ = r9; PR = 0x0C08BB3Au; IF(0x0C08BB38u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C08BB3Au); }  /* 0C08BB36 jsr @Rn */
L_0C08BB3A: BLKS(0x0C08BB3Au);
	r4 = 0x2A0u; UPD(0x0C08BB3Cu, 1);  /* 0C08BB3A mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C08BB3C exts.w Rm,Rn */
	IF(0x0C08BB3Eu); MACL = r3 * r4;  /* 0C08BB3E mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C08BB42u, 4);  /* 0C08BB40 mov.l @(disp,pc),Rn */
	IF(0x0C08BB42u); r0 = MACL;  /* 0C08BB42 sts macl,Rn */
	r0 += r7;  /* 0C08BB44 add Rm,Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C08BB48u, 3);  /* 0C08BB46 mov.l @(disp,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C08BB4Au, 1);  /* 0C08BB48 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C08BB4Cu, 1);  /* 0C08BB4A mov.l @(disp,Rm),Rn */
	IF(0x0C08BB4Cu); { u32 t_ = r10; PR = 0x0C08BB50u; r7 = R32(r0 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C08BB50u); }  /* 0C08BB4C jsr @Rn */
L_0C08BB50: BLKS(0x0C08BB50u);
	r6 = 0x30000u; UPD(0x0C08BB52u, 1);  /* 0C08BB50 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08BB52 add #imm,Rn */
	r9 = 0xC0BA480u; UPD(0x0C08BB56u, 2);  /* 0C08BB54 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C08BB56 exts.w Rm,Rn */
	W32(r15, r6); UPD(0x0C08BB5Au, 2);  /* 0C08BB58 mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C08BB5A mov #imm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C08BB5Eu, 2);  /* 0C08BB5C mov.l @(disp,Rm),Rn */
	r7 = r2;  /* 0C08BB5E mov Rm,Rn */
	IF(0x0C08BB60u); { u32 t_ = r9; PR = 0x0C08BB64u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C08BB64u); }  /* 0C08BB60 jsr @Rn */
L_0C08BB64: BLKS(0x0C08BB64u);
	{ IF(0x0C08BB66u); ; /* slot nop */ UPD(0x0C08BB12u, 3); goto L_0C08BB12; }  /* 0C08BB64 bra */
L_0C08BB70: BLKS(0x0C08BB70u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C08BAC2u, 3); goto L_0C08BAC2; }  /* 0C08BB70 bra */
L_0C08BB80: BLKS(0x0C08BB80u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C08BAB2u, 3); goto L_0C08BAB2; }  /* 0C08BB80 bra */
}

void blk_f_0C08BBE0(sh3_t *c)
{
	LOCALS;
L_0C08BBE0: BLKS(0x0C08BBE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08BBE2u, 1);  /* 0C08BBE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08BBE4u, 1);  /* 0C08BBE2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08BBE6u, 1);  /* 0C08BBE4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08BBE8u, 1);  /* 0C08BBE6 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C08BBEAu, 1);  /* 0C08BBE8 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C08BBEA exts.w Rm,Rn */
	IF(0x0C08BBECu); MACL = r11 * r0;  /* 0C08BBEC mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08BBF0u, 4);  /* 0C08BBEE mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08BBF2u, 1);  /* 0C08BBF0 mov.l @(disp,pc),Rn */
	IF(0x0C08BBF2u); r8 = MACL;  /* 0C08BBF2 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08BBF6u, 2);  /* 0C08BBF4 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C08BBF6 add Rm,Rn */
	r9 = 0x9Fu; UPD(0x0C08BBFAu, 2);  /* 0C08BBF8 mov.w @(disp,pc),Rn */
	IF(0x0C08BBFAu); r15 -= 4; W32(r15, PR); UPD(0x0C08BBFCu, 1);  /* 0C08BBFA sts.l pr,@-Rn */
	r9 += r8;  /* 0C08BBFC add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08BC00u, 2);  /* 0C08BBFE mov.b @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C08BC00 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08BC02 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08BC0Cu, 5); goto L_0C08BC0C; } goto L_0C08BC08; }  /* 0C08BC04 bf/s */
L_0C08BC08: BLKS(0x0C08BC08u);
	{ IF(0x0C08BC0Au); ; /* slot nop */ UPD(0x0C08BD80u, 4); goto L_0C08BD80; }  /* 0C08BC08 bra */
L_0C08BC0C: BLKS(0x0C08BC0Cu);
	T = r0 == 0x1u;  /* 0C08BC0C cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C08BC16u, 4); goto L_0C08BC16; }  /* 0C08BC0E bf */
L_0C08BC10: BLKS(0x0C08BC10u);
	r1 = R32(r8 + 0x24u); UPD(0x0C08BC12u, 1);  /* 0C08BC10 mov.l @(disp,Rm),Rn */
	{ r8 += 0x50u; /* slot add #imm,Rn */ UPD(0x0C08BD70u, 3); goto L_0C08BD70; }  /* 0C08BC12 bra */
L_0C08BC16: BLKS(0x0C08BC16u);
	r3 = 0xC08B940u; UPD(0x0C08BC18u, 1);  /* 0C08BC16 mov.l @(disp,pc),Rn */
	IF(0x0C08BC18u); { u32 t_ = r3; PR = 0x0C08BC1Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C08B940, 0x0C08B940u, 0x0C08BC1Cu); }  /* 0C08BC18 jsr @Rn */
L_0C08BC1C: BLKS(0x0C08BC1Cu);
	r9 = 0xB4u; UPD(0x0C08BC1Eu, 1);  /* 0C08BC1C mov.w @(disp,pc),Rn */
	IF(0x0C08BC1Eu); MACL = r11 * r9;  /* 0C08BC1E mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08BC22u, 3);  /* 0C08BC20 mov.l @(disp,pc),Rn */
	IF(0x0C08BC22u); r9 = MACL;  /* 0C08BC22 sts macl,Rn */
	r8 = 0xC069B20u; UPD(0x0C08BC26u, 2);  /* 0C08BC24 mov.l @(disp,pc),Rn */
	r9 += r7;  /* 0C08BC26 add Rm,Rn */
	r10 = 0x86u; UPD(0x0C08BC2Au, 2);  /* 0C08BC28 mov.w @(disp,pc),Rn */
	r12 = 0x8Cu; UPD(0x0C08BC2Cu, 1);  /* 0C08BC2A mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C08BC2C add Rm,Rn */
	r12 += r9;  /* 0C08BC2E add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C08BC32u, 3);  /* 0C08BC30 mov.w @Rm,Rn */
	IF(0x0C08BC32u); { u32 t_ = r8; PR = 0x0C08BC36u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08BC36u); }  /* 0C08BC32 jsr @Rn */
L_0C08BC36: BLKS(0x0C08BC36u);
	r8 = 0xC069AF0u; UPD(0x0C08BC38u, 1);  /* 0C08BC36 mov.l @(disp,pc),Rn */
	r5 = R32(r12); UPD(0x0C08BC3Au, 1);  /* 0C08BC38 mov.l @Rm,Rn */
	W32(r9 + 0x2Cu, r0); UPD(0x0C08BC3Cu, 1);  /* 0C08BC3A mov.l Rm,@(disp,Rn) */
	IF(0x0C08BC3Cu); { u32 t_ = r8; PR = 0x0C08BC40u; r4 = (u32)(s32)(s16)R16(r10); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08BC40u); }  /* 0C08BC3C jsr @Rn */
L_0C08BC40: BLKS(0x0C08BC40u);
	r5 = R32(r9 + 0x24u); UPD(0x0C08BC42u, 1);  /* 0C08BC40 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C08BC44u, 1);  /* 0C08BC42 mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C08BC46u, 1);  /* 0C08BC44 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C08BC46 add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C08BC4Au, 2);  /* 0C08BC48 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C08BC4A add Rm,Rn */
	r3 += r5;  /* 0C08BC4C add Rm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C08BC50u, 3);  /* 0C08BC4E mov.l Rm,@(disp,Rn) */
	IF(0x0C08BC50u); T = (s32)r3 >= 0;  /* 0C08BC50 cmp/pz Rn */
	W32(r9 + 0x24u, r5); UPD(0x0C08BC54u, 2);  /* 0C08BC52 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r9 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08BC5Cu, 3); goto L_0C08BC5C; } UPD(0x0C08BC58u, 1); goto L_0C08BC58; }  /* 0C08BC54 bt/s */
L_0C08BC58: BLKS(0x0C08BC58u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C08BD60u, 3); goto L_0C08BD60; }  /* 0C08BC58 bra */
L_0C08BC5C: BLKS(0x0C08BC5Cu);
	r0 = 0xD00000u; UPD(0x0C08BC5Eu, 1);  /* 0C08BC5C mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r0;  /* 0C08BC5E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C08BC7Au, 4); goto L_0C08BC7A; }  /* 0C08BC60 bt */
L_0C08BC62: BLKS(0x0C08BC62u);
	r2 = 0xC3C4048u; UPD(0x0C08BC64u, 1);  /* 0C08BC62 mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C08BC66u, 1);  /* 0C08BC64 mov.l @Rm,Rn */
	r4 = 0xFF880000u; UPD(0x0C08BC68u, 1);  /* 0C08BC66 mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C08BC68 mov Rm,Rn */
	r2 -= r3;  /* 0C08BC6A sub Rm,Rn */
	r2 += r4;  /* 0C08BC6C add Rm,Rn */
	IF(0x0C08BC6Eu); T = (s32)r2 >= 0;  /* 0C08BC6E cmp/pz Rn */
	if (!T) { UPD(0x0C08BD50u, 7); goto L_0C08BD50; }  /* 0C08BC70 bf */
L_0C08BC72: BLKS(0x0C08BC72u);
	r5 = 0xA80000u; UPD(0x0C08BC74u, 1);  /* 0C08BC72 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C08BC74 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08BD30u, 4); goto L_0C08BD30; } UPD(0x0C08BC7Au, 1); goto L_0C08BC7A; }  /* 0C08BC76 bf/s */
L_0C08BC7A: BLKS(0x0C08BC7Au);
	r10 = 0x0u;  /* 0C08BC7A mov #imm,Rn */
	W32(r9, r10); UPD(0x0C08BC7Eu, 2);  /* 0C08BC7C mov.l Rm,@Rn */
	r1 = 0x1u;  /* 0C08BC7E mov #imm,Rn */
	UPD(0x0C08BC80u, 1);
L_0C08BC80: BLKS(0x0C08BC80u);
	r7 = (u32)(s32)(s16)r1;  /* 0C08BC80 exts.w Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C08BC82 tst Rm,Rn */
	if (T) { UPD(0x0C08BCA0u, 5); goto L_0C08BCA0; }  /* 0C08BC84 bt */
L_0C08BC86: BLKS(0x0C08BC86u);
	r15 = r14;  /* 0C08BC86 mov Rm,Rn */
	IF(0x0C08BC88u); PR = R32(r15); r15 += 4; UPD(0x0C08BC8Au, 2);  /* 0C08BC88 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08BC8Cu, 1);  /* 0C08BC8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08BC8Eu, 1);  /* 0C08BC8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08BC90u, 1);  /* 0C08BC8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08BC92u, 1);  /* 0C08BC90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08BC94u, 1);  /* 0C08BC92 mov.l @Rm+,Rn */
	IF(0x0C08BC94u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08BC94 rts */
L_0C08BCA0: BLKS(0x0C08BCA0u);
	r9 = 0xC0BC1B0u; UPD(0x0C08BCA2u, 1);  /* 0C08BCA0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C08BCA2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08BCA4 mov #imm,Rn */
	IF(0x0C08BCA6u); { u32 t_ = r9; PR = 0x0C08BCAAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08BCAAu); }  /* 0C08BCA6 jsr @Rn */
L_0C08BCAA: BLKS(0x0C08BCAAu);
	T = (r0 & r0) == 0;  /* 0C08BCAA tst Rm,Rn */
	if (T) { UPD(0x0C08BC86u, 4); goto L_0C08BC86; }  /* 0C08BCAC bt */
L_0C08BCAE: BLKS(0x0C08BCAEu);
	r2 = 0xB4u; UPD(0x0C08BCB0u, 1);  /* 0C08BCAE mov.w @(disp,pc),Rn */
	IF(0x0C08BCB0u); MACL = r11 * r2;  /* 0C08BCB0 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08BCB4u, 3);  /* 0C08BCB2 mov.l @(disp,pc),Rn */
	IF(0x0C08BCB4u); r12 = MACL;  /* 0C08BCB4 sts macl,Rn */
	r12 += r0;  /* 0C08BCB6 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C08BCBAu, 3);  /* 0C08BCB8 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C08BCBA mov Rm,Rn */
	IF(0x0C08BCBCu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08BCBEu, 2);  /* 0C08BCBC mov.b @(r0,Rm),Rn */
	r10 = 0xC0BBF10u; UPD(0x0C08BCC0u, 1);  /* 0C08BCBE mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C08BCC0 extu.b Rm,Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C08BCC4u, 2);  /* 0C08BCC2 mov.l @(disp,Rm),Rn */
	IF(0x0C08BCC4u); { u32 t_ = r10; PR = 0x0C08BCC8u; r5 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08BCC8u); }  /* 0C08BCC4 jsr @Rn */
L_0C08BCC8: BLKS(0x0C08BCC8u);
	T = (r0 & r0) == 0;  /* 0C08BCC8 tst Rm,Rn */
	if (T) { UPD(0x0C08BC86u, 4); goto L_0C08BC86; }  /* 0C08BCCA bt */
L_0C08BCCC: BLKS(0x0C08BCCCu);
	r4 = r11;  /* 0C08BCCC mov Rm,Rn */
	r11 = 0xC069B50u; UPD(0x0C08BCD0u, 2);  /* 0C08BCCE mov.l @(disp,pc),Rn */
	r10 = 0xC068E60u; UPD(0x0C08BCD2u, 1);  /* 0C08BCD0 mov.l @(disp,pc),Rn */
	IF(0x0C08BCD2u); { u32 t_ = r11; PR = 0x0C08BCD6u; IF(0x0C08BCD4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C08BCD6u); }  /* 0C08BCD2 jsr @Rn */
L_0C08BCD6: BLKS(0x0C08BCD6u);
	r7 = 0x2A0u; UPD(0x0C08BCD8u, 1);  /* 0C08BCD6 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C08BCD8 exts.w Rm,Rn */
	IF(0x0C08BCDAu); MACL = r4 * r7;  /* 0C08BCDA mul.l Rm,Rn */
	r6 = 0xC29D1D8u; UPD(0x0C08BCDEu, 4);  /* 0C08BCDC mov.l @(disp,pc),Rn */
	IF(0x0C08BCDEu); r3 = MACL;  /* 0C08BCDE sts macl,Rn */
	r3 += r6;  /* 0C08BCE0 add Rm,Rn */
	r8 = 0x86u; UPD(0x0C08BCE4u, 3);  /* 0C08BCE2 mov.w @(disp,pc),Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C08BCE6u, 1);  /* 0C08BCE4 mov.l @(disp,Rm),Rn */
	r8 += r12;  /* 0C08BCE6 add Rm,Rn */
	r7 = R32(r3 + 0x14u); UPD(0x0C08BCEAu, 2);  /* 0C08BCE8 mov.l @(disp,Rm),Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C08BCECu, 1);  /* 0C08BCEA mov.l @(disp,Rm),Rn */
	IF(0x0C08BCECu); { u32 t_ = r10; PR = 0x0C08BCF0u; r5 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C08BCF0u); }  /* 0C08BCEC jsr @Rn */
L_0C08BCF0: BLKS(0x0C08BCF0u);
	r9 = 0xC069B20u; UPD(0x0C08BCF2u, 1);  /* 0C08BCF0 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C08BCF2 exts.w Rm,Rn */
	r10 = 0x80000u; UPD(0x0C08BCF6u, 2);  /* 0C08BCF4 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C08BCF8u, 1);  /* 0C08BCF6 mov.w @Rm,Rn */
	IF(0x0C08BCF8u); { u32 t_ = r9; PR = 0x0C08BCFCu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08BCFCu); }  /* 0C08BCF8 jsr @Rn */
L_0C08BCFC: BLKS(0x0C08BCFCu);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C08BCFEu, 1);  /* 0C08BCFC mov.w @Rm,Rn */
	r5 = r10;  /* 0C08BCFE mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C08BD02u, 2);  /* 0C08BD00 mov.l @(disp,pc),Rn */
	r9 = R32(r12 + 0x24u); UPD(0x0C08BD04u, 1);  /* 0C08BD02 mov.l @(disp,Rm),Rn */
	IF(0x0C08BD04u); { u32 t_ = r8; PR = 0x0C08BD08u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08BD08u); }  /* 0C08BD04 jsr @Rn */
L_0C08BD08: BLKS(0x0C08BD08u);
	r6 = R32(r12 + 0x28u); UPD(0x0C08BD0Au, 1);  /* 0C08BD08 mov.l @(disp,Rm),Rn */
	r7 = r11;  /* 0C08BD0A mov Rm,Rn */
	r5 = 0xC189CC0u; UPD(0x0C08BD0Eu, 2);  /* 0C08BD0C mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08BD0E add #imm,Rn */
	r11 = 0xC0BA970u; UPD(0x0C08BD12u, 2);  /* 0C08BD10 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C08BD12 add Rm,Rn */
	r12 = 0x30000u; UPD(0x0C08BD16u, 2);  /* 0C08BD14 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C08BD16 mov #imm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08BD1Au, 2);  /* 0C08BD18 mov.l Rm,@(disp,Rn) */
	W32(r15, r12); UPD(0x0C08BD1Cu, 1);  /* 0C08BD1A mov.l Rm,@Rn */
	IF(0x0C08BD1Cu); { u32 t_ = r11; PR = 0x0C08BD20u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C08BD20u); }  /* 0C08BD1C jsr @Rn */
L_0C08BD20: BLKS(0x0C08BD20u);
	{ IF(0x0C08BD22u); ; /* slot nop */ UPD(0x0C08BC86u, 3); goto L_0C08BC86; }  /* 0C08BD20 bra */
L_0C08BD30: BLKS(0x0C08BD30u);
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C08BD32u, 1);  /* 0C08BD30 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C08BD32 add #imm,Rn */
	IF(0x0C08BD34u); r0 >>= 2;  /* 0C08BD34 shlr2 Rn */
	IF(0x0C08BD36u); r0 >>= 2;  /* 0C08BD36 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C08BD38 and #imm,r0 */
	W32(r9 + 0x8u, r0); UPD(0x0C08BD3Cu, 5);  /* 0C08BD3A mov.l Rm,@(disp,Rn) */
	r0 = R32(r9 + 0xCu); UPD(0x0C08BD3Eu, 1);  /* 0C08BD3C mov.l @(disp,Rm),Rn */
	r8 = 0xC1A0158u; UPD(0x0C08BD40u, 1);  /* 0C08BD3E mov.l @(disp,pc),Rn */
	IF(0x0C08BD40u); r0 <<= 2;  /* 0C08BD40 shll2 Rn */
	r6 = 0xC0A8B10u; UPD(0x0C08BD44u, 2);  /* 0C08BD42 mov.l @(disp,pc),Rn */
	IF(0x0C08BD44u); r12 = R32(r0 + r8); UPD(0x0C08BD46u, 1);  /* 0C08BD44 mov.l @(r0,Rm),Rn */
	IF(0x0C08BD46u); { u32 t_ = r6; PR = 0x0C08BD4Au; W32(r9 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C08BD4Au); }  /* 0C08BD46 jsr @Rn */
L_0C08BD4A: BLKS(0x0C08BD4Au);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C08BC80u, 3); goto L_0C08BC80; }  /* 0C08BD4A bra */
L_0C08BD50: BLKS(0x0C08BD50u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C08BC72u, 3); goto L_0C08BC72; }  /* 0C08BD50 bra */
L_0C08BD60: BLKS(0x0C08BD60u);
	{ IF(0x0C08BD62u); ; /* slot nop */ UPD(0x0C08BC5Cu, 3); goto L_0C08BC5C; }  /* 0C08BD60 bra */
L_0C08BD70: BLKS(0x0C08BD70u);
	r4 = R32(r8); UPD(0x0C08BD72u, 1);  /* 0C08BD70 mov.l @Rm,Rn */
	T = (s32)r1 >= (s32)r4;  /* 0C08BD72 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08BD7Cu, 4); goto L_0C08BD7C; } UPD(0x0C08BD78u, 1); goto L_0C08BD78; }  /* 0C08BD74 bt/s */
L_0C08BD78: BLKS(0x0C08BD78u);
	r1 += 0x1u;  /* 0C08BD78 add #imm,Rn */
	W8(r9, r1); UPD(0x0C08BD7Cu, 2);  /* 0C08BD7A mov.b Rm,@Rn */
L_0C08BD7C: BLKS(0x0C08BD7Cu);
	{ IF(0x0C08BD7Eu); ; /* slot nop */ UPD(0x0C08BC1Cu, 3); goto L_0C08BC1C; }  /* 0C08BD7C bra */
L_0C08BD80: BLKS(0x0C08BD80u);
	r10 = 0xC062780u; UPD(0x0C08BD82u, 1);  /* 0C08BD80 mov.l @(disp,pc),Rn */
	r4 = 0xC0u; UPD(0x0C08BD84u, 1);  /* 0C08BD82 mov.w @(disp,pc),Rn */
	IF(0x0C08BD84u); { u32 t_ = r10; PR = 0x0C08BD88u; r8 += 0x50u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08BD88u); }  /* 0C08BD84 jsr @Rn */
L_0C08BD88: BLKS(0x0C08BD88u);
	r2 = 0x80u; UPD(0x0C08BD8Au, 1);  /* 0C08BD88 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C08BD8A add Rm,Rn */
	IF(0x0C08BD8Cu); r0 <<= 16;  /* 0C08BD8C shll16 Rn */
	W32(r8, r0); UPD(0x0C08BD90u, 3);  /* 0C08BD8E mov.l Rm,@Rn */
	{ r1 = (u32)(s32)(s8)R8(r9); /* slot mov.b @Rm,Rn */ UPD(0x0C08BD78u, 3); goto L_0C08BD78; }  /* 0C08BD90 bra */
}

void blk_f_0C08BE00(sh3_t *c)
{
	LOCALS;
L_0C08BE00: BLKS(0x0C08BE00u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08BE02u, 1);  /* 0C08BE00 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08BE04u, 1);  /* 0C08BE02 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C08BE04 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08BE08u, 2);  /* 0C08BE06 mov.l Rm,@-Rn */
	r4 = 0xB4u; UPD(0x0C08BE0Au, 1);  /* 0C08BE08 mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08BE0Cu, 1);  /* 0C08BE0A mov.l Rm,@-Rn */
	IF(0x0C08BE0Cu); MACL = r9 * r4;  /* 0C08BE0C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08BE10u, 3);  /* 0C08BE0E mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08BE12u, 1);  /* 0C08BE10 mov.l @(disp,pc),Rn */
	IF(0x0C08BE12u); r8 = MACL;  /* 0C08BE12 sts macl,Rn */
	IF(0x0C08BE14u); r15 -= 4; W32(r15, PR); UPD(0x0C08BE16u, 2);  /* 0C08BE14 sts.l pr,@-Rn */
	r8 += r0;  /* 0C08BE16 add Rm,Rn */
	r0 = R32(r8 + 0x24u); UPD(0x0C08BE1Au, 2);  /* 0C08BE18 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C08BE1A mov Rm,Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C08BE1Eu, 2);  /* 0C08BE1C mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C08BE20u, 1);  /* 0C08BE1E mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C08BE20 add Rm,Rn */
	r2 = R32(r8 + 0x30u); UPD(0x0C08BE24u, 2);  /* 0C08BE22 mov.l @(disp,Rm),Rn */
	r3 = 0xFF600000u; UPD(0x0C08BE26u, 1);  /* 0C08BE24 mov.l @(disp,pc),Rn */
	r7 += r2;  /* 0C08BE26 add Rm,Rn */
	r3 += r0;  /* 0C08BE28 add Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C08BE2Cu, 3);  /* 0C08BE2A mov.l Rm,@(disp,Rn) */
	IF(0x0C08BE2Cu); T = (s32)r3 >= 0;  /* 0C08BE2C cmp/pz Rn */
	{ u32 c_ = T; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08BE36u, 4); goto L_0C08BE36; } UPD(0x0C08BE32u, 1); goto L_0C08BE32; }  /* 0C08BE2E bt/s */
L_0C08BE32: BLKS(0x0C08BE32u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C08BF50u, 3); goto L_0C08BF50; }  /* 0C08BE32 bra */
L_0C08BE36: BLKS(0x0C08BE36u);
	r5 = 0xD00000u; UPD(0x0C08BE38u, 1);  /* 0C08BE36 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r5;  /* 0C08BE38 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C08BE54u, 4); goto L_0C08BE54; }  /* 0C08BE3A bt */
L_0C08BE3C: BLKS(0x0C08BE3Cu);
	r2 = r7;  /* 0C08BE3C mov Rm,Rn */
	r11 = 0xC3C4048u; UPD(0x0C08BE40u, 2);  /* 0C08BE3E mov.l @(disp,pc),Rn */
	r10 = R32(r11); UPD(0x0C08BE42u, 1);  /* 0C08BE40 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C08BE44u, 1);  /* 0C08BE42 mov.l @(disp,pc),Rn */
	r2 -= r10;  /* 0C08BE44 sub Rm,Rn */
	r2 += r6;  /* 0C08BE46 add Rm,Rn */
	IF(0x0C08BE48u); T = (s32)r2 >= 0;  /* 0C08BE48 cmp/pz Rn */
	if (T) { UPD(0x0C08BE4Eu, 6); goto L_0C08BE4E; }  /* 0C08BE4A bt */
L_0C08BE4C: BLKS(0x0C08BE4Cu);
	r2 = 0u - r2;  /* 0C08BE4C neg Rm,Rn */
	UPD(0x0C08BE4Eu, 1);
L_0C08BE4E: BLKS(0x0C08BE4Eu);
	r7 = 0xA80000u; UPD(0x0C08BE50u, 1);  /* 0C08BE4E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C08BE50 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08BE70u, 4); goto L_0C08BE70; }  /* 0C08BE52 bf */
L_0C08BE54: BLKS(0x0C08BE54u);
	r9 = 0x0u;  /* 0C08BE54 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C08BE58u, 2);  /* 0C08BE56 mov.l Rm,@Rn */
L_0C08BE58: BLKS(0x0C08BE58u);
	r15 = r14;  /* 0C08BE58 mov Rm,Rn */
	IF(0x0C08BE5Au); PR = R32(r15); r15 += 4; UPD(0x0C08BE5Cu, 2);  /* 0C08BE5A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08BE5Eu, 1);  /* 0C08BE5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08BE60u, 1);  /* 0C08BE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08BE62u, 1);  /* 0C08BE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08BE64u, 1);  /* 0C08BE62 mov.l @Rm+,Rn */
	IF(0x0C08BE64u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08BE64 rts */
L_0C08BE70: BLKS(0x0C08BE70u);
	r0 = R32(r8 + 0xCu); UPD(0x0C08BE72u, 1);  /* 0C08BE70 mov.l @(disp,Rm),Rn */
	r4 = 0xC1A0164u; UPD(0x0C08BE74u, 1);  /* 0C08BE72 mov.l @(disp,pc),Rn */
	IF(0x0C08BE74u); r0 <<= 2;  /* 0C08BE74 shll2 Rn */
	r11 = 0xC0A8B10u; UPD(0x0C08BE78u, 2);  /* 0C08BE76 mov.l @(disp,pc),Rn */
	IF(0x0C08BE78u); r3 = R32(r0 + r4); UPD(0x0C08BE7Au, 1);  /* 0C08BE78 mov.l @(r0,Rm),Rn */
	r10 = 0x9Fu; UPD(0x0C08BE7Cu, 1);  /* 0C08BE7A mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C08BE7C mov Rm,Rn */
	W32(r8 + 0xCu, r3); UPD(0x0C08BE80u, 2);  /* 0C08BE7E mov.l Rm,@(disp,Rn) */
	IF(0x0C08BE80u); { u32 t_ = r11; PR = 0x0C08BE84u; r10 += r8; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C08BE84u); }  /* 0C08BE80 jsr @Rn */
L_0C08BE84: BLKS(0x0C08BE84u);
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C08BE86u, 1);  /* 0C08BE84 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C08BE86 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08BE88 tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C08BF10u, 5); goto L_0C08BF10; } goto L_0C08BE8E; }  /* 0C08BE8A bt/s */
L_0C08BE8E: BLKS(0x0C08BE8Eu);
	if (!T) { UPD(0x0C08BE58u, 4); goto L_0C08BE58; }  /* 0C08BE8E bf */
L_0C08BE90: BLKS(0x0C08BE90u);
	r10 = R32(r8 + 0x30u); UPD(0x0C08BE92u, 1);  /* 0C08BE90 mov.l @(disp,Rm),Rn */
	r0 = 0x8Cu; UPD(0x0C08BE94u, 1);  /* 0C08BE92 mov.w @(disp,pc),Rn */
	r6 = 0x98u; UPD(0x0C08BE96u, 1);  /* 0C08BE94 mov.w @(disp,pc),Rn */
	IF(0x0C08BE96u); r7 = R32(r0 + r8); UPD(0x0C08BE98u, 1);  /* 0C08BE96 mov.l @(r0,Rm),Rn */
	r6 += r8;  /* 0C08BE98 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C08BE9Cu, 2);  /* 0C08BE9A mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C08BE9C add #imm,Rn */
	W8(r6, r0); UPD(0x0C08BEA0u, 2);  /* 0C08BE9E mov.b Rm,@Rn */
	r10 += r7;  /* 0C08BEA0 add Rm,Rn */
	r0 &= 0x1u;  /* 0C08BEA2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08BEA4 tst Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x30u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08BEF0u, 6); goto L_0C08BEF0; } UPD(0x0C08BEAAu, 1); goto L_0C08BEAA; }  /* 0C08BEA6 bf/s */
L_0C08BEAA: BLKS(0x0C08BEAAu);
	r4 = r9;  /* 0C08BEAA mov Rm,Rn */
	UPD(0x0C08BEACu, 1);
L_0C08BEAC: BLKS(0x0C08BEACu);
	r9 = 0xC0BC1B0u; UPD(0x0C08BEAEu, 1);  /* 0C08BEAC mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C08BEAE mov #imm,Rn */
	IF(0x0C08BEB0u); { u32 t_ = r9; PR = 0x0C08BEB4u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08BEB4u); }  /* 0C08BEB0 jsr @Rn */
L_0C08BEB4: BLKS(0x0C08BEB4u);
	T = (r0 & r0) == 0;  /* 0C08BEB4 tst Rm,Rn */
	if (T) { UPD(0x0C08BE58u, 4); goto L_0C08BE58; }  /* 0C08BEB6 bt */
L_0C08BEB8: BLKS(0x0C08BEB8u);
	r0 = r8;  /* 0C08BEB8 mov Rm,Rn */
	r2 = 0xA9u; UPD(0x0C08BEBCu, 2);  /* 0C08BEBA mov.w @(disp,pc),Rn */
	r11 = 0xC0BBF10u; UPD(0x0C08BEBEu, 1);  /* 0C08BEBC mov.l @(disp,pc),Rn */
	IF(0x0C08BEBEu); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08BEC0u, 1);  /* 0C08BEBE mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C08BEC2u, 1);  /* 0C08BEC0 mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C08BEC2 extu.b Rm,Rn */
	IF(0x0C08BEC4u); { u32 t_ = r11; PR = 0x0C08BEC8u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08BEC8u); }  /* 0C08BEC4 jsr @Rn */
L_0C08BEC8: BLKS(0x0C08BEC8u);
	T = (r0 & r0) == 0;  /* 0C08BEC8 tst Rm,Rn */
	if (T) { UPD(0x0C08BE58u, 4); goto L_0C08BE58; }  /* 0C08BECA bt */
L_0C08BECC: BLKS(0x0C08BECCu);
	r15 += 0xFFFFFFFCu;  /* 0C08BECC add #imm,Rn */
	r0 = 0x30000u; UPD(0x0C08BED0u, 2);  /* 0C08BECE mov.l @(disp,pc),Rn */
	W32(r15, r0); UPD(0x0C08BED2u, 1);  /* 0C08BED0 mov.l Rm,@Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C08BED4u, 1);  /* 0C08BED2 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C08BED6u, 1);  /* 0C08BED4 mov.l @(disp,Rm),Rn */
	r8 = 0xC0BAD60u; UPD(0x0C08BED8u, 1);  /* 0C08BED6 mov.l @(disp,pc),Rn */
	r7 = 0x100u; UPD(0x0C08BEDAu, 1);  /* 0C08BED8 mov.w @(disp,pc),Rn */
	IF(0x0C08BEDAu); { u32 t_ = r8; PR = 0x0C08BEDEu; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BAD60, 0x0C0BAD60u, 0x0C08BEDEu); }  /* 0C08BEDA jsr @Rn */
L_0C08BEDE: BLKS(0x0C08BEDEu);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C08BE58u, 3); goto L_0C08BE58; }  /* 0C08BEDE bra */
L_0C08BEF0: BLKS(0x0C08BEF0u);
	r0 = R32(r8 + 0x8u); UPD(0x0C08BEF2u, 1);  /* 0C08BEF0 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C08BEF2 mov Rm,Rn */
	r8 += 0x50u;  /* 0C08BEF4 add #imm,Rn */
	r5 = R32(r8); UPD(0x0C08BEF8u, 3);  /* 0C08BEF6 mov.l @Rm,Rn */
	r0 += r5;  /* 0C08BEF8 add Rm,Rn */
	r8 += 0xFFFFFFB0u;  /* 0C08BEFA add #imm,Rn */
	r0 &= 0x1Fu;  /* 0C08BEFC and #imm,r0 */
	IF(0x0C08BEFEu); { u32 t_ = r11; PR = 0x0C08BF02u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLD(t_, 0x0C08BF02u); }  /* 0C08BEFE jsr @Rn */
L_0C08BF02: BLKS(0x0C08BF02u);
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C08BEACu, 3); goto L_0C08BEAC; }  /* 0C08BF02 bra */
L_0C08BF10: BLKS(0x0C08BF10u);
	W32(r8 + 0x30u, r0); UPD(0x0C08BF12u, 1);  /* 0C08BF10 mov.l Rm,@(disp,Rn) */
	r5 = 0xFFFD8000u; UPD(0x0C08BF14u, 1);  /* 0C08BF12 mov.l @(disp,pc),Rn */
	r1 = R32(r8 + 0x24u); UPD(0x0C08BF16u, 1);  /* 0C08BF14 mov.l @(disp,Rm),Rn */
	r0 = 0x1000000u; UPD(0x0C08BF18u, 1);  /* 0C08BF16 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r0;  /* 0C08BF18 cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x2Cu, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08BE58u, 4); goto L_0C08BE58; } UPD(0x0C08BF1Eu, 1); goto L_0C08BF1E; }  /* 0C08BF1A bt/s */
L_0C08BF1E: BLKS(0x0C08BF1Eu);
	r11 = 0xC069B50u; UPD(0x0C08BF20u, 1);  /* 0C08BF1E mov.l @(disp,pc),Rn */
	IF(0x0C08BF20u); { u32 t_ = r11; PR = 0x0C08BF24u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C08BF24u); }  /* 0C08BF20 jsr @Rn */
L_0C08BF24: BLKS(0x0C08BF24u);
	r4 = 0x2A0u; UPD(0x0C08BF26u, 1);  /* 0C08BF24 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C08BF26 exts.w Rm,Rn */
	IF(0x0C08BF28u); MACL = r1 * r4;  /* 0C08BF28 mul.l Rm,Rn */
	r3 = 0xC29D1D8u; UPD(0x0C08BF2Cu, 4);  /* 0C08BF2A mov.l @(disp,pc),Rn */
	IF(0x0C08BF2Cu); r2 = MACL;  /* 0C08BF2C sts macl,Rn */
	r3 += r2;  /* 0C08BF2E add Rm,Rn */
	r9 = R32(r8 + 0x28u); UPD(0x0C08BF32u, 3);  /* 0C08BF30 mov.l @(disp,Rm),Rn */
	r11 = R32(r3 + 0x14u); UPD(0x0C08BF34u, 1);  /* 0C08BF32 mov.l @(disp,Rm),Rn */
	r7 = 0x1000u; UPD(0x0C08BF36u, 1);  /* 0C08BF34 mov.w @(disp,pc),Rn */
	T = (s32)r9 > (s32)r11;  /* 0C08BF36 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08BF40u, 4); goto L_0C08BF40; } goto L_0C08BF3C; }  /* 0C08BF38 bf/s */
L_0C08BF3C: BLKS(0x0C08BF3Cu);
	r7 = 0xFFFFF000u; UPD(0x0C08BF3Eu, 2);  /* 0C08BF3C mov.w @(disp,pc),Rn */
	r6 = 0xFFFFFFFFu;  /* 0C08BF3E mov #imm,Rn */
	UPD(0x0C08BF40u, 1);
L_0C08BF40: BLKS(0x0C08BF40u);
	r0 = 0x8Cu; UPD(0x0C08BF42u, 1);  /* 0C08BF40 mov.w @(disp,pc),Rn */
	IF(0x0C08BF42u); W32(r0 + r8, r7); UPD(0x0C08BF44u, 1);  /* 0C08BF42 mov.l Rm,@(r0,Rn) */
	r8 += 0x50u;  /* 0C08BF44 add #imm,Rn */
	W32(r8, r6); UPD(0x0C08BF48u, 2);  /* 0C08BF46 mov.l Rm,@Rn */
	r8 = (u32)(s32)(s8)R8(r10); UPD(0x0C08BF4Au, 1);  /* 0C08BF48 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C08BF4A add #imm,Rn */
	{ W8(r10, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C08BE58u, 4); goto L_0C08BE58; }  /* 0C08BF4C bra */
L_0C08BF50: BLKS(0x0C08BF50u);
	{ IF(0x0C08BF52u); ; /* slot nop */ UPD(0x0C08BE36u, 3); goto L_0C08BE36; }  /* 0C08BF50 bra */
}

void blk_f_0C08BFB0(sh3_t *c)
{
	LOCALS;
L_0C08BFB0: BLKS(0x0C08BFB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08BFB2u, 1);  /* 0C08BFB0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08BFB4u, 1);  /* 0C08BFB2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08BFB6u, 1);  /* 0C08BFB4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08BFB8u, 1);  /* 0C08BFB6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08BFBAu, 1);  /* 0C08BFB8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08BFBCu, 1);  /* 0C08BFBA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08BFBEu, 1);  /* 0C08BFBC mov.l Rm,@-Rn */
	r10 = 0xC2460ACu; UPD(0x0C08BFC0u, 1);  /* 0C08BFBE mov.l @(disp,pc),Rn */
	IF(0x0C08BFC0u); r15 -= 4; W32(r15, PR); UPD(0x0C08BFC2u, 1);  /* 0C08BFC0 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C08BFC4u, 1);  /* 0C08BFC2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08BFC4 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C08BFC8u, 2);  /* 0C08BFC6 mov.w @Rm,Rn */
	r14 = r15;  /* 0C08BFC8 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C08BFCCu, 2);  /* 0C08BFCA mov.l @(disp,pc),Rn */
	IF(0x0C08BFCCu); { u32 t_ = r8; PR = 0x0C08BFD0u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C08BFD0u); }  /* 0C08BFCC jsr @Rn */
L_0C08BFD0: BLKS(0x0C08BFD0u);
	T = (r0 & r0) == 0;  /* 0C08BFD0 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08BFF0u, 4); goto L_0C08BFF0; } UPD(0x0C08BFD6u, 1); goto L_0C08BFD6; }  /* 0C08BFD2 bf/s */
L_0C08BFD6: BLKS(0x0C08BFD6u);
	r14 += 0x4u;  /* 0C08BFD6 add #imm,Rn */
	r15 = r14;  /* 0C08BFD8 mov Rm,Rn */
	IF(0x0C08BFDAu); PR = R32(r15); r15 += 4; UPD(0x0C08BFDCu, 3);  /* 0C08BFDA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08BFDEu, 1);  /* 0C08BFDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08BFE0u, 1);  /* 0C08BFDE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08BFE2u, 1);  /* 0C08BFE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08BFE4u, 1);  /* 0C08BFE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08BFE6u, 1);  /* 0C08BFE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08BFE8u, 1);  /* 0C08BFE6 mov.l @Rm+,Rn */
	IF(0x0C08BFE8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08BFE8 rts */
L_0C08BFF0: BLKS(0x0C08BFF0u);
	r8 = 0xC071740u; UPD(0x0C08BFF2u, 1);  /* 0C08BFF0 mov.l @(disp,pc),Rn */
	IF(0x0C08BFF2u); { u32 t_ = r8; PR = 0x0C08BFF6u; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08BFF6u); }  /* 0C08BFF2 jsr @Rn */
L_0C08BFF6: BLKS(0x0C08BFF6u);
	T = (r0 & r0) == 0;  /* 0C08BFF6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08BFD6u, 4); goto L_0C08BFD6; } goto L_0C08BFFC; }  /* 0C08BFF8 bt/s */
L_0C08BFFC: BLKS(0x0C08BFFCu);
	r13 = 0xC28EDFCu; UPD(0x0C08BFFEu, 2);  /* 0C08BFFC mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C08C000u, 1);  /* 0C08BFFE mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r12 = v_; } UPD(0x0C08C002u, 1);  /* 0C08C000 mov.w @Rm+,Rn */
	IF(0x0C08C002u); MACL = r12 * r8;  /* 0C08C002 mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C08C006u, 3);  /* 0C08C004 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C08C008u, 1);  /* 0C08C006 mov.w @Rm,Rn */
	IF(0x0C08C008u); r8 = MACL;  /* 0C08C008 sts macl,Rn */
	r11 = 0xD3000104u; UPD(0x0C08C00Cu, 2);  /* 0C08C00A mov.l @(disp,pc),Rn */
	r8 += r1;  /* 0C08C00C add Rm,Rn */
	r4 = r2 & 0xFFFF;  /* 0C08C00E extu.w Rm,Rn */
	W32(r8, r11); UPD(0x0C08C012u, 3);  /* 0C08C010 mov.l Rm,@Rn */
	r0 = 0xC0A8A30u; UPD(0x0C08C014u, 1);  /* 0C08C012 mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C08C014 mov #imm,Rn */
	W32(r8 + 0x4u, r4); UPD(0x0C08C018u, 2);  /* 0C08C016 mov.l Rm,@(disp,Rn) */
	r9 = 0xC0722E0u; UPD(0x0C08C01Au, 1);  /* 0C08C018 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C08C01A mov Rm,Rn */
	r10 = 0x1600000u; UPD(0x0C08C01Eu, 2);  /* 0C08C01C mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r11); UPD(0x0C08C020u, 1);  /* 0C08C01E mov.l Rm,@(disp,Rn) */
	IF(0x0C08C020u); { u32 t_ = r0; PR = 0x0C08C024u; W32(r8 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08C024u); }  /* 0C08C020 jsr @Rn */
L_0C08C024: BLKS(0x0C08C024u);
	r4 = r12;  /* 0C08C024 mov Rm,Rn */
	IF(0x0C08C026u); { u32 t_ = r9; PR = 0x0C08C02Au; W32(r8 + 0x24u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C08C02Au); }  /* 0C08C026 jsr @Rn */
L_0C08C02A: BLKS(0x0C08C02Au);
	r7 = 0xC0A9AE0u; UPD(0x0C08C02Cu, 1);  /* 0C08C02A mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C08C02C mov Rm,Rn */
	IF(0x0C08C02Eu); { u32 t_ = r7; PR = 0x0C08C032u; r12 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08C032u); }  /* 0C08C02E jsr @Rn */
L_0C08C032: BLKS(0x0C08C032u);
	r0 = 0x86u; UPD(0x0C08C034u, 1);  /* 0C08C032 mov.w @(disp,pc),Rn */
	r4 = r8;  /* 0C08C034 mov Rm,Rn */
	r6 = 0x100u; UPD(0x0C08C038u, 2);  /* 0C08C036 mov.w @(disp,pc),Rn */
	r2 = 0x14u;  /* 0C08C038 mov #imm,Rn */
	IF(0x0C08C03Au); W16(r0 + r8, r6); UPD(0x0C08C03Cu, 2);  /* 0C08C03A mov.w Rm,@(r0,Rn) */
	r5 = 0x30000u; UPD(0x0C08C03Eu, 1);  /* 0C08C03C mov.l @(disp,pc),Rn */
	r0 += 0x6u;  /* 0C08C03E add #imm,Rn */
	r1 = 0xA8u; UPD(0x0C08C042u, 2);  /* 0C08C040 mov.w @(disp,pc),Rn */
	IF(0x0C08C042u); W32(r0 + r8, r5); UPD(0x0C08C044u, 1);  /* 0C08C042 mov.l Rm,@(r0,Rn) */
	r4 += r1;  /* 0C08C044 add Rm,Rn */
	r4 += 0x1u;  /* 0C08C046 add #imm,Rn */
	r0 += 0x21u;  /* 0C08C048 add #imm,Rn */
	r3 = 0xFFFF0000u; UPD(0x0C08C04Cu, 4);  /* 0C08C04A mov.l @(disp,pc),Rn */
	IF(0x0C08C04Cu); W8(r0 + r8, r2); UPD(0x0C08C04Eu, 1);  /* 0C08C04C mov.b Rm,@(r0,Rn) */
	W8(r4, r2); UPD(0x0C08C050u, 1);  /* 0C08C04E mov.b Rm,@Rn */
	W32(r8 + 0x30u, r11); UPD(0x0C08C052u, 1);  /* 0C08C050 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r3); UPD(0x0C08C054u, 1);  /* 0C08C052 mov.l Rm,@(disp,Rn) */
	r11 = r8;  /* 0C08C054 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C08C058u, 2);  /* 0C08C056 mov.l Rm,@Rn */
L_0C08C058: BLKS(0x0C08C058u);
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r10 = v_; } UPD(0x0C08C05Au, 1);  /* 0C08C058 mov.w @Rm+,Rn */
	r1 = 0x4u;  /* 0C08C05A mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C08C05Eu, 2);  /* 0C08C05C mov.w @(disp,pc),Rn */
	IF(0x0C08C05Eu); MACL = r10 * r8;  /* 0C08C05E mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08C062u, 3);  /* 0C08C060 mov.l @(disp,pc),Rn */
	r6 = 0xC28EDFCu; UPD(0x0C08C064u, 1);  /* 0C08C062 mov.l @(disp,pc),Rn */
	IF(0x0C08C064u); r8 = MACL;  /* 0C08C064 sts macl,Rn */
	r9 = (u32)(s32)(s16)R16(r6); UPD(0x0C08C068u, 2);  /* 0C08C066 mov.w @Rm,Rn */
	r8 += r7;  /* 0C08C068 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C08C06A add #imm,Rn */
	W16(r8, r9); UPD(0x0C08C06Eu, 3);  /* 0C08C06C mov.w Rm,@Rn */
	r6 = 0x0u;  /* 0C08C06E mov #imm,Rn */
	r9 = r12;  /* 0C08C070 mov Rm,Rn */
	IF(0x0C08C072u); ARG0(0x491Du); { s32 s_ = (s32)r1; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C08C072 shld Rm,Rn */
	r3 = 0xC2460ACu; UPD(0x0C08C076u, 4);  /* 0C08C074 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C08C076 add #imm,Rn */
	r5 = 0xC1A0B64u; UPD(0x0C08C07Au, 2);  /* 0C08C078 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C08C07Cu, 1);  /* 0C08C07A mov.w @Rm,Rn */
	r9 += r5;  /* 0C08C07C add Rm,Rn */
	r2 = R32(r9); UPD(0x0C08C080u, 2);  /* 0C08C07E mov.l @Rm,Rn */
	r0 = r4 & 0xFFFF;  /* 0C08C080 extu.w Rm,Rn */
	W32(r8, r2); UPD(0x0C08C084u, 2);  /* 0C08C082 mov.l Rm,@Rn */
	r4 = r10;  /* 0C08C084 mov Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C08C088u, 2);  /* 0C08C086 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A8A30u; UPD(0x0C08C08Au, 1);  /* 0C08C088 mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x4u); UPD(0x0C08C08Cu, 1);  /* 0C08C08A mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r6); UPD(0x0C08C08Eu, 1);  /* 0C08C08C mov.l Rm,@(disp,Rn) */
	IF(0x0C08C08Eu); { u32 t_ = r5; PR = 0x0C08C092u; W32(r8 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08C092u); }  /* 0C08C08E jsr @Rn */
L_0C08C092: BLKS(0x0C08C092u);
	r3 = 0x86u; UPD(0x0C08C094u, 1);  /* 0C08C092 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08C094 mov Rm,Rn */
	r2 = 0x100u; UPD(0x0C08C098u, 2);  /* 0C08C096 mov.w @(disp,pc),Rn */
	IF(0x0C08C098u); W16(r0 + r3, r2); UPD(0x0C08C09Au, 1);  /* 0C08C098 mov.w Rm,@(r0,Rn) */
	r4 = R32(r11 + 0x24u); UPD(0x0C08C09Cu, 1);  /* 0C08C09A mov.l @(disp,Rm),Rn */
	r0 = R32(r11 + 0x28u); UPD(0x0C08C09Eu, 1);  /* 0C08C09C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C08C0A0u, 1);  /* 0C08C09E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C08C0A2u, 1);  /* 0C08C0A0 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C08C0A2 mov Rm,Rn */
	r7 = R32(r9 + 0x8u); UPD(0x0C08C0A6u, 2);  /* 0C08C0A4 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C08C0A8u, 1);  /* 0C08C0A6 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A9AE0u; UPD(0x0C08C0AAu, 1);  /* 0C08C0A8 mov.l @(disp,pc),Rn */
	r6 = R32(r9 + 0xCu); UPD(0x0C08C0ACu, 1);  /* 0C08C0AA mov.l @(disp,Rm),Rn */
	IF(0x0C08C0ACu); { u32 t_ = r5; PR = 0x0C08C0B0u; W32(r8 + 0x30u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08C0B0u); }  /* 0C08C0AC jsr @Rn */
L_0C08C0B0: BLKS(0x0C08C0B0u);
	r0 = 0xB0u; UPD(0x0C08C0B2u, 1);  /* 0C08C0B0 mov.w @(disp,pc),Rn */
	r7 = r8;  /* 0C08C0B2 mov Rm,Rn */
	IF(0x0C08C0B4u); r3 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C08C0B6u, 2);  /* 0C08C0B4 mov.b @(r0,Rm),Rn */
	IF(0x0C08C0B6u); W8(r0 + r8, r3); UPD(0x0C08C0B8u, 1);  /* 0C08C0B6 mov.b Rm,@(r0,Rn) */
	r0 = 0xACu; UPD(0x0C08C0BAu, 1);  /* 0C08C0B8 mov.w @(disp,pc),Rn */
	r7 += r0;  /* 0C08C0BA add Rm,Rn */
	r2 = R32(r14); UPD(0x0C08C0BEu, 2);  /* 0C08C0BC mov.l @Rm,Rn */
	r0 += r11;  /* 0C08C0BE add Rm,Rn */
	r4 = 0xA8u; UPD(0x0C08C0C2u, 2);  /* 0C08C0C0 mov.w @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C08C0C2 add #imm,Rn */
	r9 = 0xC0C2360u; UPD(0x0C08C0C6u, 2);  /* 0C08C0C4 mov.l @(disp,pc),Rn */
	r4 += r8;  /* 0C08C0C6 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C08C0CAu, 2);  /* 0C08C0C8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C08C0CA add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C08C0CEu, 2);  /* 0C08C0CC mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C08C0CE add #imm,Rn */
	r6 = 0x9Bu; UPD(0x0C08C0D2u, 2);  /* 0C08C0D0 mov.w @(disp,pc),Rn */
	W8(r4, r1); UPD(0x0C08C0D4u, 1);  /* 0C08C0D2 mov.b Rm,@Rn */
	r8 += r6;  /* 0C08C0D4 add Rm,Rn */
	IF(0x0C08C0D6u); { u32 t_ = r9; PR = 0x0C08C0DAu; W8(r7, r10); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C08C0DAu); }  /* 0C08C0D6 jsr @Rn */
L_0C08C0DA: BLKS(0x0C08C0DAu);
	r5 = r12;  /* 0C08C0DA mov Rm,Rn */
	r5 += 0x1u;  /* 0C08C0DC add #imm,Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C08C0DE exts.w Rm,Rn */
	r3 = 0x3u;  /* 0C08C0E0 mov #imm,Rn */
	T = (s32)r12 > (s32)r3;  /* 0C08C0E2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W8(r8, r0); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08C058u, 8); goto L_0C08C058; } UPD(0x0C08C0E8u, 1); goto L_0C08C0E8; }  /* 0C08C0E4 bf/s */
L_0C08C0E8: BLKS(0x0C08C0E8u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C08BFD6u, 3); goto L_0C08BFD6; }  /* 0C08C0E8 bra */
}

void blk_f_0C08C140(sh3_t *c)
{
	LOCALS;
L_0C08C140: BLKS(0x0C08C140u);
	r3 = 0xB4u; UPD(0x0C08C142u, 1);  /* 0C08C140 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C08C142 exts.w Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08C146u, 2);  /* 0C08C144 mov.l Rm,@-Rn */
	IF(0x0C08C146u); MACL = r4 * r3;  /* 0C08C146 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08C14Au, 3);  /* 0C08C148 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08C14Cu, 1);  /* 0C08C14A mov.l @(disp,pc),Rn */
	IF(0x0C08C14Cu); r2 = MACL;  /* 0C08C14C sts macl,Rn */
	IF(0x0C08C14Eu); r15 -= 4; W32(r15, PR); UPD(0x0C08C150u, 2);  /* 0C08C14E sts.l pr,@-Rn */
	r0 += r2;  /* 0C08C150 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08C154u, 2);  /* 0C08C152 mov.l @(disp,Rm),Rn */
	r0 = 0x12u;  /* 0C08C154 mov #imm,Rn */
	T = r2 > r0;  /* 0C08C156 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08C1BEu, 5); goto L_0C08C1BE; } goto L_0C08C15C; }  /* 0C08C158 bt/s */
L_0C08C15C: BLKS(0x0C08C15Cu);
	r0 = 0xC08C16Cu;  /* 0C08C15C mova @(disp,pc),r0 */
	IF(0x0C08C15Eu); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08C160u, 3);  /* 0C08C15E mov.b @(r0,Rm),Rn */
	IF(0x0C08C160u); { u32 tv_ = (r5 + 0x0C08C164u); u32 t_ = PHYS(tv_); IF(0x0C08C162u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08C160 braf Rn */
L_0C08C1BE: BLKS(0x0C08C1BEu);
	r15 = r14;  /* 0C08C1BE mov Rm,Rn */
	IF(0x0C08C1C0u); PR = R32(r15); r15 += 4; UPD(0x0C08C1C2u, 2);  /* 0C08C1C0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08C1C4u, 1);  /* 0C08C1C2 mov.l @Rm+,Rn */
	IF(0x0C08C1C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08C1C4 rts */
}

void blk_f_0C08C210(sh3_t *c)
{
	LOCALS;
	goto L_0C08C210;
L_0C08C140: BLKS(0x0C08C140u);
	r3 = 0xB4u; UPD(0x0C08C142u, 1);  /* 0C08C140 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C08C142 exts.w Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08C146u, 2);  /* 0C08C144 mov.l Rm,@-Rn */
	IF(0x0C08C146u); MACL = r4 * r3;  /* 0C08C146 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08C14Au, 3);  /* 0C08C148 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08C14Cu, 1);  /* 0C08C14A mov.l @(disp,pc),Rn */
	IF(0x0C08C14Cu); r2 = MACL;  /* 0C08C14C sts macl,Rn */
	IF(0x0C08C14Eu); r15 -= 4; W32(r15, PR); UPD(0x0C08C150u, 2);  /* 0C08C14E sts.l pr,@-Rn */
	r0 += r2;  /* 0C08C150 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08C154u, 2);  /* 0C08C152 mov.l @(disp,Rm),Rn */
	r0 = 0x12u;  /* 0C08C154 mov #imm,Rn */
	T = r2 > r0;  /* 0C08C156 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08C1BEu, 5); goto L_0C08C1BE; } goto L_0C08C15C; }  /* 0C08C158 bt/s */
L_0C08C15C: BLKS(0x0C08C15Cu);
	r0 = 0xC08C16Cu;  /* 0C08C15C mova @(disp,pc),r0 */
	IF(0x0C08C15Eu); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08C160u, 3);  /* 0C08C15E mov.b @(r0,Rm),Rn */
	IF(0x0C08C160u); { u32 tv_ = (r5 + 0x0C08C164u); u32 t_ = PHYS(tv_); IF(0x0C08C162u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08C160 braf Rn */
L_0C08C1BE: BLKS(0x0C08C1BEu);
	r15 = r14;  /* 0C08C1BE mov Rm,Rn */
	IF(0x0C08C1C0u); PR = R32(r15); r15 += 4; UPD(0x0C08C1C2u, 2);  /* 0C08C1C0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08C1C4u, 1);  /* 0C08C1C2 mov.l @Rm+,Rn */
	IF(0x0C08C1C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08C1C4 rts */
L_0C08C210: BLKS(0x0C08C210u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08C212u, 1);  /* 0C08C210 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08C214u, 1);  /* 0C08C212 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08C216u, 1);  /* 0C08C214 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C08C218u, 1);  /* 0C08C216 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C08C218 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08C21Cu, 2);  /* 0C08C21A mov.l Rm,@-Rn */
	IF(0x0C08C21Cu); MACL = r10 * r3;  /* 0C08C21C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08C220u, 3);  /* 0C08C21E mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08C222u, 1);  /* 0C08C220 mov.l @(disp,pc),Rn */
	IF(0x0C08C222u); r2 = MACL;  /* 0C08C222 sts macl,Rn */
	IF(0x0C08C224u); r15 -= 4; W32(r15, PR); UPD(0x0C08C226u, 2);  /* 0C08C224 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08C226 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08C22Au, 2);  /* 0C08C228 mov.l @(disp,Rm),Rn */
	r0 = 0x12u;  /* 0C08C22A mov #imm,Rn */
	T = r2 > r0;  /* 0C08C22C cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08C236u, 5); goto L_0C08C236; } goto L_0C08C232; }  /* 0C08C22E bf/s */
L_0C08C232: BLKS(0x0C08C232u);
	{ IF(0x0C08C234u); ; /* slot nop */ UPD(0x0C08C3ACu, 4); goto L_0C08C3AC; }  /* 0C08C232 bra */
L_0C08C236: BLKS(0x0C08C236u);
	r0 = 0xC08C248u;  /* 0C08C236 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08C238 add Rm,Rn */
	IF(0x0C08C23Au); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08C23Cu, 3);  /* 0C08C23A mov.w @(r0,Rm),Rn */
	IF(0x0C08C23Cu); { u32 tv_ = (r4 + 0x0C08C240u); u32 t_ = PHYS(tv_); IF(0x0C08C23Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C270u: goto L_0C08C270; case 0x0C08C2F0u: goto L_0C08C2F0; case 0x0C08C340u: goto L_0C08C340; default: JUMPD(tv_); } }  /* 0C08C23C braf Rn */
L_0C08C270: BLKS(0x0C08C270u);
	r7 = 0xB4u; UPD(0x0C08C272u, 1);  /* 0C08C270 mov.w @(disp,pc),Rn */
	IF(0x0C08C272u); MACL = r10 * r7;  /* 0C08C272 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08C276u, 3);  /* 0C08C274 mov.l @(disp,pc),Rn */
	IF(0x0C08C276u); r7 = MACL;  /* 0C08C276 sts macl,Rn */
	r7 += r0;  /* 0C08C278 add Rm,Rn */
	r6 = R32(r7 + 0x24u); UPD(0x0C08C27Cu, 3);  /* 0C08C27A mov.l @(disp,Rm),Rn */
	r11 = R32(r7 + 0x2Cu); UPD(0x0C08C27Eu, 1);  /* 0C08C27C mov.l @(disp,Rm),Rn */
	r8 = R32(r7 + 0x28u); UPD(0x0C08C280u, 1);  /* 0C08C27E mov.l @(disp,Rm),Rn */
	r6 += r11;  /* 0C08C280 add Rm,Rn */
	r9 = R32(r7 + 0x30u); UPD(0x0C08C284u, 2);  /* 0C08C282 mov.l @(disp,Rm),Rn */
	r1 = (r6 >> 16) | (r6 << 16);  /* 0C08C284 swap.w Rm,Rn */
	r5 = 0xFFFFFF60u; UPD(0x0C08C288u, 2);  /* 0C08C286 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C08C288 add Rm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C08C28A exts.w Rm,Rn */
	r3 += r5;  /* 0C08C28C add Rm,Rn */
	W32(r7 + 0x24u, r6); UPD(0x0C08C290u, 4);  /* 0C08C28E mov.l Rm,@(disp,Rn) */
	IF(0x0C08C290u); T = (s32)r3 >= 0;  /* 0C08C290 cmp/pz Rn */
	{ u32 c_ = !T; W32(r7 + 0x28u, r8); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08C2E0u, 4); goto L_0C08C2E0; } UPD(0x0C08C296u, 1); goto L_0C08C296; }  /* 0C08C292 bf/s */
L_0C08C296: BLKS(0x0C08C296u);
	r2 = 0xE0u; UPD(0x0C08C298u, 1);  /* 0C08C296 mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r2;  /* 0C08C298 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08C2A0u, 4); goto L_0C08C2A0; } goto L_0C08C29E; }  /* 0C08C29A bf/s */
L_0C08C29E: BLKS(0x0C08C29Eu);
	W32(r7, r3); UPD(0x0C08C2A0u, 2);  /* 0C08C29E mov.l Rm,@Rn */
L_0C08C2A0: BLKS(0x0C08C2A0u);
	r6 = R32(r7 + 0x28u); UPD(0x0C08C2A2u, 1);  /* 0C08C2A0 mov.l @(disp,Rm),Rn */
	r4 = 0xFFFFFE00u; UPD(0x0C08C2A4u, 1);  /* 0C08C2A2 mov.w @(disp,pc),Rn */
	r5 = (r6 >> 16) | (r6 << 16);  /* 0C08C2A4 swap.w Rm,Rn */
	r2 = (u32)(s32)(s16)r5;  /* 0C08C2A6 exts.w Rm,Rn */
	r2 += r4;  /* 0C08C2A8 add Rm,Rn */
	IF(0x0C08C2AAu); T = (s32)r2 >= 0;  /* 0C08C2AA cmp/pz Rn */
	if (!T) { UPD(0x0C08C2D0u, 7); goto L_0C08C2D0; }  /* 0C08C2AC bf */
L_0C08C2AE: BLKS(0x0C08C2AEu);
	r8 = 0xB8u; UPD(0x0C08C2B0u, 1);  /* 0C08C2AE mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C08C2B0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08C2B8u, 4); goto L_0C08C2B8; } goto L_0C08C2B6; }  /* 0C08C2B2 bf/s */
L_0C08C2B6: BLKS(0x0C08C2B6u);
	W32(r7, r9); UPD(0x0C08C2B8u, 2);  /* 0C08C2B6 mov.l Rm,@Rn */
L_0C08C2B8: BLKS(0x0C08C2B8u);
	r11 = 0x7u;  /* 0C08C2B8 mov #imm,Rn */
	W32(r7 + 0xCu, r11); UPD(0x0C08C2BCu, 2);  /* 0C08C2BA mov.l Rm,@(disp,Rn) */
L_0C08C2BC: BLKS(0x0C08C2BCu);
	r1 = 0xC0A8AE0u; UPD(0x0C08C2BEu, 1);  /* 0C08C2BC mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08C2BE mov Rm,Rn */
	UPD(0x0C08C2C0u, 1);
L_0C08C2C0: BLKS(0x0C08C2C0u);
	r15 = r14;  /* 0C08C2C0 mov Rm,Rn */
	IF(0x0C08C2C2u); PR = R32(r15); r15 += 4; UPD(0x0C08C2C4u, 2);  /* 0C08C2C2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08C2C6u, 1);  /* 0C08C2C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08C2C8u, 1);  /* 0C08C2C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08C2CAu, 1);  /* 0C08C2C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08C2CCu, 1);  /* 0C08C2CA mov.l @Rm+,Rn */
	IF(0x0C08C2CCu); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C08C140u: goto L_0C08C140; case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C08C2CC jmp @Rn */
L_0C08C2D0: BLKS(0x0C08C2D0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C08C2AEu, 3); goto L_0C08C2AE; }  /* 0C08C2D0 bra */
L_0C08C2E0: BLKS(0x0C08C2E0u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C08C296u, 3); goto L_0C08C296; }  /* 0C08C2E0 bra */
L_0C08C2F0: BLKS(0x0C08C2F0u);
	r8 = 0xC0A8BF0u; UPD(0x0C08C2F2u, 1);  /* 0C08C2F0 mov.l @(disp,pc),Rn */
	IF(0x0C08C2F2u); { u32 t_ = r8; PR = 0x0C08C2F6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C08C2F6u); }  /* 0C08C2F2 jsr @Rn */
L_0C08C2F6: BLKS(0x0C08C2F6u);
	IF(0x0C08C2F6u); T = (s32)r0 >= 0;  /* 0C08C2F6 cmp/pz Rn */
	if (!T) { UPD(0x0C08C330u, 4); goto L_0C08C330; }  /* 0C08C2F8 bf */
L_0C08C2FA: BLKS(0x0C08C2FAu);
	r11 = 0xB4u; UPD(0x0C08C2FCu, 1);  /* 0C08C2FA mov.w @(disp,pc),Rn */
	IF(0x0C08C2FCu); MACL = r10 * r11;  /* 0C08C2FC mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C08C300u, 3);  /* 0C08C2FE mov.l @(disp,pc),Rn */
	IF(0x0C08C300u); r4 = MACL;  /* 0C08C300 sts macl,Rn */
	IF(0x0C08C302u); MACL = r0 * r11;  /* 0C08C302 mul.l Rm,Rn */
	r4 += r9;  /* 0C08C304 add Rm,Rn */
	r1 = R32(r4 + 0x30u); UPD(0x0C08C308u, 5);  /* 0C08C306 mov.l @(disp,Rm),Rn */
	IF(0x0C08C308u); r3 = MACL;  /* 0C08C308 sts macl,Rn */
	r3 += r9;  /* 0C08C30A add Rm,Rn */
	r0 = R32(r3 + 0x28u); UPD(0x0C08C30Eu, 3);  /* 0C08C30C mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C08C30E add Rm,Rn */
	r5 = R32(r3 + 0x24u); UPD(0x0C08C312u, 2);  /* 0C08C310 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x28u, r0); UPD(0x0C08C314u, 1);  /* 0C08C312 mov.l Rm,@(disp,Rn) */
	r6 = R32(r4 + 0x2Cu); UPD(0x0C08C316u, 1);  /* 0C08C314 mov.l @(disp,Rm),Rn */
	r0 = R32(r4 + 0xCu); UPD(0x0C08C318u, 1);  /* 0C08C316 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C08C318 add Rm,Rn */
	W32(r4 + 0x24u, r5); UPD(0x0C08C31Cu, 2);  /* 0C08C31A mov.l Rm,@(disp,Rn) */
	IF(0x0C08C31Cu); r0 <<= 2;  /* 0C08C31C shll2 Rn */
	r2 = 0xC1A0BA4u; UPD(0x0C08C320u, 2);  /* 0C08C31E mov.l @(disp,pc),Rn */
	IF(0x0C08C320u); r7 = R32(r0 + r2); UPD(0x0C08C322u, 1);  /* 0C08C320 mov.l @(r0,Rm),Rn */
	{ W32(r4 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08C2BCu, 3); goto L_0C08C2BC; }  /* 0C08C322 bra */
L_0C08C330: BLKS(0x0C08C330u);
	r1 = 0xC08C140u; UPD(0x0C08C332u, 1);  /* 0C08C330 mov.l @(disp,pc),Rn */
	{ r4 = r10; /* slot mov Rm,Rn */ UPD(0x0C08C2C0u, 3); goto L_0C08C2C0; }  /* 0C08C332 bra */
L_0C08C340: BLKS(0x0C08C340u);
	r8 = 0xC0A8BF0u; UPD(0x0C08C342u, 1);  /* 0C08C340 mov.l @(disp,pc),Rn */
	IF(0x0C08C342u); { u32 t_ = r8; PR = 0x0C08C346u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C08C346u); }  /* 0C08C342 jsr @Rn */
L_0C08C346: BLKS(0x0C08C346u);
	IF(0x0C08C346u); T = (s32)r0 >= 0;  /* 0C08C346 cmp/pz Rn */
	if (!T) { UPD(0x0C08C330u, 4); goto L_0C08C330; }  /* 0C08C348 bf */
L_0C08C34A: BLKS(0x0C08C34Au);
	r4 = 0xB4u; UPD(0x0C08C34Cu, 1);  /* 0C08C34A mov.w @(disp,pc),Rn */
	IF(0x0C08C34Cu); MACL = r10 * r4;  /* 0C08C34C mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C08C350u, 3);  /* 0C08C34E mov.l @(disp,pc),Rn */
	IF(0x0C08C350u); r11 = MACL;  /* 0C08C350 sts macl,Rn */
	IF(0x0C08C352u); MACL = r0 * r4;  /* 0C08C352 mul.l Rm,Rn */
	r11 += r9;  /* 0C08C354 add Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C08C358u, 5);  /* 0C08C356 mov.w @(disp,pc),Rn */
	IF(0x0C08C358u); r3 = MACL;  /* 0C08C358 sts macl,Rn */
	r3 += r9;  /* 0C08C35A add Rm,Rn */
	r0 = R32(r3); UPD(0x0C08C35Eu, 3);  /* 0C08C35C mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C08C360u, 1);  /* 0C08C35E mov.w @(disp,pc),Rn */
	r4 = R32(r11); UPD(0x0C08C362u, 1);  /* 0C08C360 mov.l @Rm,Rn */
	r0 &= r1;  /* 0C08C362 and Rm,Rn */
	r7 = R32(r3 + 0x24u); UPD(0x0C08C366u, 2);  /* 0C08C364 mov.l @(disp,Rm),Rn */
	r4 &= r2;  /* 0C08C366 and Rm,Rn */
	r8 = R32(r11 + 0x2Cu); UPD(0x0C08C36Au, 2);  /* 0C08C368 mov.l @(disp,Rm),Rn */
	r4 |= r0;  /* 0C08C36A or Rm,Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C08C36Eu, 2);  /* 0C08C36C mov.l @(disp,Rm),Rn */
	r7 += r8;  /* 0C08C36E add Rm,Rn */
	r6 = R32(r11 + 0x30u); UPD(0x0C08C372u, 2);  /* 0C08C370 mov.l @(disp,Rm),Rn */
	r9 = 0xC069BF0u; UPD(0x0C08C374u, 1);  /* 0C08C372 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C08C374 add Rm,Rn */
	W32(r11, r4); UPD(0x0C08C378u, 2);  /* 0C08C376 mov.l Rm,@Rn */
	r8 = 0xC068F00u; UPD(0x0C08C37Au, 1);  /* 0C08C378 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08C37A mov Rm,Rn */
	W32(r11 + 0x28u, r5); UPD(0x0C08C37Eu, 2);  /* 0C08C37C mov.l Rm,@(disp,Rn) */
	IF(0x0C08C37Eu); { u32 t_ = r9; PR = 0x0C08C382u; W32(r11 + 0x24u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08C382u); }  /* 0C08C37E jsr @Rn */
L_0C08C382: BLKS(0x0C08C382u);
	r5 = 0x4u;  /* 0C08C382 mov #imm,Rn */
	IF(0x0C08C384u); { u32 t_ = r8; PR = 0x0C08C388u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08C388u); }  /* 0C08C384 jsr @Rn */
L_0C08C388: BLKS(0x0C08C388u);
	r8 = 0x86u; UPD(0x0C08C38Au, 1);  /* 0C08C388 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C08C38A mov Rm,Rn */
	r8 += r11;  /* 0C08C38C add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C08C390u, 3);  /* 0C08C38E mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C08C390 add #imm,Rn */
	r7 = 0xC0A8AE0u; UPD(0x0C08C394u, 2);  /* 0C08C392 mov.l @(disp,pc),Rn */
	IF(0x0C08C394u); r0 >>= 2;  /* 0C08C394 shlr2 Rn */
	IF(0x0C08C396u); r0 >>= 2;  /* 0C08C396 shlr2 Rn */
	r9 = 0xC0BC1B0u; UPD(0x0C08C39Au, 3);  /* 0C08C398 mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C08C39A and #imm,r0 */
	IF(0x0C08C39Cu); { u32 t_ = r7; PR = 0x0C08C3A0u; W32(r11 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C08C3A0u); }  /* 0C08C39C jsr @Rn */
L_0C08C3A0: BLKS(0x0C08C3A0u);
	r4 = r10;  /* 0C08C3A0 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08C3A2 mov #imm,Rn */
	IF(0x0C08C3A4u); { u32 t_ = r9; PR = 0x0C08C3A8u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08C3A8u); }  /* 0C08C3A4 jsr @Rn */
L_0C08C3A8: BLKS(0x0C08C3A8u);
	T = (r0 & r0) == 0;  /* 0C08C3A8 tst Rm,Rn */
	if (!T) { UPD(0x0C08C3C0u, 4); goto L_0C08C3C0; }  /* 0C08C3AA bf */
L_0C08C3AC: BLKS(0x0C08C3ACu);
	r15 = r14;  /* 0C08C3AC mov Rm,Rn */
	IF(0x0C08C3AEu); PR = R32(r15); r15 += 4; UPD(0x0C08C3B0u, 2);  /* 0C08C3AE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08C3B2u, 1);  /* 0C08C3B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08C3B4u, 1);  /* 0C08C3B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08C3B6u, 1);  /* 0C08C3B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08C3B8u, 1);  /* 0C08C3B6 mov.l @Rm+,Rn */
	IF(0x0C08C3B8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08C3B8 rts */
L_0C08C3C0: BLKS(0x0C08C3C0u);
	r9 = (u32)(s32)(s16)R16(r8); UPD(0x0C08C3C2u, 1);  /* 0C08C3C0 mov.w @Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C08C3C4u, 1);  /* 0C08C3C2 mov.l @(disp,pc),Rn */
	r5 = 0xCCCCCu; UPD(0x0C08C3C6u, 1);  /* 0C08C3C4 mov.l @(disp,pc),Rn */
	IF(0x0C08C3C6u); { u32 t_ = r8; PR = 0x0C08C3CAu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08C3CAu); }  /* 0C08C3C6 jsr @Rn */
L_0C08C3CA: BLKS(0x0C08C3CAu);
	r8 = R32(r11 + 0x24u); UPD(0x0C08C3CCu, 1);  /* 0C08C3CA mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C08C3CC mov Rm,Rn */
	r8 += r0;  /* 0C08C3CE add Rm,Rn */
	r0 = 0xC069AF0u; UPD(0x0C08C3D2u, 3);  /* 0C08C3D0 mov.l @(disp,pc),Rn */
	r3 = 0xFFFD0000u; UPD(0x0C08C3D4u, 1);  /* 0C08C3D2 mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C08C3D6u, 1);  /* 0C08C3D4 mov.l @(disp,pc),Rn */
	IF(0x0C08C3D6u); { u32 t_ = r0; PR = 0x0C08C3DAu; r8 += r3; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08C3DAu); }  /* 0C08C3D6 jsr @Rn */
L_0C08C3DA: BLKS(0x0C08C3DAu);
	r6 = R32(r11 + 0x28u); UPD(0x0C08C3DCu, 1);  /* 0C08C3DA mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08C3DC add #imm,Rn */
	r6 += r0;  /* 0C08C3DE add Rm,Rn */
	r11 = 0xC0BA480u; UPD(0x0C08C3E2u, 3);  /* 0C08C3E0 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C08C3E2 mov #imm,Rn */
	r0 = 0x30000u; UPD(0x0C08C3E6u, 2);  /* 0C08C3E4 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C08C3E6 mov Rm,Rn */
	W32(r15, r0); UPD(0x0C08C3EAu, 2);  /* 0C08C3E8 mov.l Rm,@Rn */
	IF(0x0C08C3EAu); { u32 t_ = r11; PR = 0x0C08C3EEu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C08C3EEu); }  /* 0C08C3EA jsr @Rn */
L_0C08C3EE: BLKS(0x0C08C3EEu);
	r4 = r10;  /* 0C08C3EE mov Rm,Rn */
	r10 = 0xC069B90u; UPD(0x0C08C3F2u, 2);  /* 0C08C3F0 mov.l @(disp,pc),Rn */
	IF(0x0C08C3F2u); { u32 t_ = r10; PR = 0x0C08C3F6u; r15 += 0x4u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C08C3F6u); }  /* 0C08C3F2 jsr @Rn */
L_0C08C3F6: BLKS(0x0C08C3F6u);
	{ IF(0x0C08C3F8u); ; /* slot nop */ UPD(0x0C08C3ACu, 3); goto L_0C08C3AC; }  /* 0C08C3F6 bra */
}

void blk_f_0C08C450(sh3_t *c)
{
	LOCALS;
L_0C08C450: BLKS(0x0C08C450u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08C452u, 1);  /* 0C08C450 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08C454u, 1);  /* 0C08C452 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08C456u, 1);  /* 0C08C454 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08C458u, 1);  /* 0C08C456 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08C45Au, 1);  /* 0C08C458 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08C45Cu, 1);  /* 0C08C45A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08C45Eu, 1);  /* 0C08C45C mov.l Rm,@-Rn */
	r10 = 0xC2460ACu; UPD(0x0C08C460u, 1);  /* 0C08C45E mov.l @(disp,pc),Rn */
	IF(0x0C08C460u); r15 -= 4; W32(r15, PR); UPD(0x0C08C462u, 1);  /* 0C08C460 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C08C464u, 1);  /* 0C08C462 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE8u;  /* 0C08C464 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C08C468u, 2);  /* 0C08C466 mov.w @Rm,Rn */
	r14 = r15;  /* 0C08C468 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C08C46Cu, 2);  /* 0C08C46A mov.l @(disp,pc),Rn */
	IF(0x0C08C46Cu); { u32 t_ = r8; PR = 0x0C08C470u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C08C470u); }  /* 0C08C46C jsr @Rn */
L_0C08C470: BLKS(0x0C08C470u);
	T = (r0 & r0) == 0;  /* 0C08C470 tst Rm,Rn */
	if (!T) { UPD(0x0C08C490u, 4); goto L_0C08C490; }  /* 0C08C472 bf */
L_0C08C474: BLKS(0x0C08C474u);
	r0 = 0x1u;  /* 0C08C474 mov #imm,Rn */
	r14 += 0x18u;  /* 0C08C476 add #imm,Rn */
	r15 = r14;  /* 0C08C478 mov Rm,Rn */
	IF(0x0C08C47Au); PR = R32(r15); r15 += 4; UPD(0x0C08C47Cu, 4);  /* 0C08C47A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08C47Eu, 1);  /* 0C08C47C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08C480u, 1);  /* 0C08C47E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08C482u, 1);  /* 0C08C480 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08C484u, 1);  /* 0C08C482 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08C486u, 1);  /* 0C08C484 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08C488u, 1);  /* 0C08C486 mov.l @Rm+,Rn */
	IF(0x0C08C488u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08C488 rts */
L_0C08C490: BLKS(0x0C08C490u);
	r8 = 0xC071740u; UPD(0x0C08C492u, 1);  /* 0C08C490 mov.l @(disp,pc),Rn */
	IF(0x0C08C492u); { u32 t_ = r8; PR = 0x0C08C496u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08C496u); }  /* 0C08C492 jsr @Rn */
L_0C08C496: BLKS(0x0C08C496u);
	T = (r0 & r0) == 0;  /* 0C08C496 tst Rm,Rn */
	if (T) { UPD(0x0C08C474u, 4); goto L_0C08C474; }  /* 0C08C498 bt */
L_0C08C49A: BLKS(0x0C08C49Au);
	r4 = 0x10u;  /* 0C08C49A mov #imm,Rn */
	r3 = 0xC28EDFCu; UPD(0x0C08C49Eu, 2);  /* 0C08C49C mov.l @(disp,pc),Rn */
	r8 = 0xC062780u; UPD(0x0C08C4A0u, 1);  /* 0C08C49E mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r13 = v_; } UPD(0x0C08C4A2u, 1);  /* 0C08C4A0 mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C08C4A4u, 1);  /* 0C08C4A2 mov.w @(disp,pc),Rn */
	IF(0x0C08C4A4u); { u32 t_ = r8; PR = 0x0C08C4A8u; W32(r14, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08C4A8u); }  /* 0C08C4A4 jsr @Rn */
L_0C08C4A8: BLKS(0x0C08C4A8u);
	IF(0x0C08C4A8u); MACL = r13 * r9;  /* 0C08C4A8 mul.l Rm,Rn */
	r8 = r0;  /* 0C08C4AA mov Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C08C4AEu, 4);  /* 0C08C4AC mov.l @(disp,pc),Rn */
	IF(0x0C08C4AEu); r9 = MACL;  /* 0C08C4AE sts macl,Rn */
	r1 = 0xC0A8A30u; UPD(0x0C08C4B2u, 2);  /* 0C08C4B0 mov.l @(disp,pc),Rn */
	r9 += r2;  /* 0C08C4B2 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C08C4B6u, 2);  /* 0C08C4B4 mov.w @Rm,Rn */
	r6 = 0x0u;  /* 0C08C4B6 mov #imm,Rn */
	r11 = 0xC3000000u; UPD(0x0C08C4BAu, 2);  /* 0C08C4B8 mov.l @(disp,pc),Rn */
	r7 = r0 & 0xFFFF;  /* 0C08C4BA extu.w Rm,Rn */
	r8 += 0x10u;  /* 0C08C4BC add #imm,Rn */
	W32(r9 + 0x4u, r7); UPD(0x0C08C4C0u, 3);  /* 0C08C4BE mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C08C4C0 mov Rm,Rn */
	W32(r9 + 0xCu, r6); UPD(0x0C08C4C4u, 2);  /* 0C08C4C2 mov.l Rm,@(disp,Rn) */
	W32(r9, r11); UPD(0x0C08C4C6u, 1);  /* 0C08C4C4 mov.l Rm,@Rn */
	IF(0x0C08C4C6u); { u32 t_ = r1; PR = 0x0C08C4CAu; W32(r9 + 0x8u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08C4CAu); }  /* 0C08C4C6 jsr @Rn */
L_0C08C4CA: BLKS(0x0C08C4CAu);
	r4 = 0x1640000u; UPD(0x0C08C4CCu, 1);  /* 0C08C4CA mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFF0u;  /* 0C08C4CC add #imm,Rn */
	r12 = 0xC0722E0u; UPD(0x0C08C4D0u, 2);  /* 0C08C4CE mov.l @(disp,pc),Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C08C4D2u, 1);  /* 0C08C4D0 mov.l Rm,@(disp,Rn) */
	r10 = 0xC0A9AE0u; UPD(0x0C08C4D4u, 1);  /* 0C08C4D2 mov.l @(disp,pc),Rn */
	IF(0x0C08C4D4u); { u32 t_ = r12; PR = 0x0C08C4D8u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C08C4D8u); }  /* 0C08C4D4 jsr @Rn */
L_0C08C4D8: BLKS(0x0C08C4D8u);
	IF(0x0C08C4D8u); { u32 t_ = r10; PR = 0x0C08C4DCu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08C4DCu); }  /* 0C08C4D8 jsr @Rn */
L_0C08C4DC: BLKS(0x0C08C4DCu);
	r5 = 0x100u; UPD(0x0C08C4DEu, 1);  /* 0C08C4DC mov.w @(disp,pc),Rn */
	r3 = r8;  /* 0C08C4DE mov Rm,Rn */
	r0 = 0x8Au; UPD(0x0C08C4E2u, 2);  /* 0C08C4E0 mov.w @(disp,pc),Rn */
	IF(0x0C08C4E2u); r3 <<= 2;  /* 0C08C4E2 shll2 Rn */
	W32(r14 + 0x4u, r3); UPD(0x0C08C4E6u, 2);  /* 0C08C4E4 mov.l Rm,@(disp,Rn) */
	r12 = r9;  /* 0C08C4E6 mov Rm,Rn */
	IF(0x0C08C4E8u); W16(r0 + r9, r5); UPD(0x0C08C4EAu, 2);  /* 0C08C4E8 mov.w Rm,@(r0,Rn) */
	r2 = 0xC1A3650u; UPD(0x0C08C4ECu, 1);  /* 0C08C4EA mov.l @(disp,pc),Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C08C4EEu, 1);  /* 0C08C4EC mov.l @(disp,Rm),Rn */
	IF(0x0C08C4EEu); r11 = R32(r0 + r2); UPD(0x0C08C4F0u, 1);  /* 0C08C4EE mov.l @(r0,Rm),Rn */
	r0 = 0x8Cu; UPD(0x0C08C4F2u, 1);  /* 0C08C4F0 mov.w @(disp,pc),Rn */
	IF(0x0C08C4F2u); W32(r0 + r9, r11); UPD(0x0C08C4F4u, 1);  /* 0C08C4F2 mov.l Rm,@(r0,Rn) */
	r0 = 0xACu; UPD(0x0C08C4F6u, 1);  /* 0C08C4F4 mov.w @(disp,pc),Rn */
	r10 = 0x84u; UPD(0x0C08C4F8u, 1);  /* 0C08C4F6 mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C08C4F8 add Rm,Rn */
	r12 += r10;  /* 0C08C4FA add Rm,Rn */
	r0 += 0x1u;  /* 0C08C4FC add #imm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C08C500u, 4);  /* 0C08C4FE mov.l Rm,@(disp,Rn) */
	r12 += 0x2u;  /* 0C08C500 add #imm,Rn */
	r7 = 0xC1A35FCu; UPD(0x0C08C504u, 2);  /* 0C08C502 mov.l @(disp,pc),Rn */
	W16(r12, r5); UPD(0x0C08C506u, 1);  /* 0C08C504 mov.w Rm,@Rn */
	r0 = r7;  /* 0C08C506 mov Rm,Rn */
	r11 = 0xA8u; UPD(0x0C08C50Au, 2);  /* 0C08C508 mov.w @(disp,pc),Rn */
	IF(0x0C08C50Au); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08C50Cu, 1);  /* 0C08C50A mov.b @(r0,Rm),Rn */
	r11 += r9;  /* 0C08C50C add Rm,Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C08C510u, 2);  /* 0C08C50E mov.l @(disp,Rm),Rn */
	r11 += 0x1u;  /* 0C08C510 add #imm,Rn */
	r5 = 0xC062780u; UPD(0x0C08C514u, 2);  /* 0C08C512 mov.l @(disp,pc),Rn */
	W8(r6, r4); UPD(0x0C08C516u, 1);  /* 0C08C514 mov.b Rm,@Rn */
	W8(r11, r4); UPD(0x0C08C518u, 1);  /* 0C08C516 mov.b Rm,@Rn */
	r8 = 0x98u; UPD(0x0C08C51Au, 1);  /* 0C08C518 mov.w @(disp,pc),Rn */
	IF(0x0C08C51Au); { u32 t_ = r5; PR = 0x0C08C51Eu; r4 = 0x5Au; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08C51Eu); }  /* 0C08C51A jsr @Rn */
L_0C08C51E: BLKS(0x0C08C51Eu);
	r8 += r9;  /* 0C08C51E add Rm,Rn */
	r0 += 0x1Eu;  /* 0C08C520 add #imm,Rn */
	W8(r8, r0); UPD(0x0C08C524u, 3);  /* 0C08C522 mov.b Rm,@Rn */
	r4 = 0x10u;  /* 0C08C524 mov #imm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C08C528u, 2);  /* 0C08C526 mov.l @(disp,Rm),Rn */
	r3 = 0xC1A360Cu; UPD(0x0C08C52Au, 1);  /* 0C08C528 mov.l @(disp,pc),Rn */
	IF(0x0C08C52Au); r2 = R32(r0 + r3); UPD(0x0C08C52Cu, 1);  /* 0C08C52A mov.l @(r0,Rm),Rn */
	r0 = R32(r14); UPD(0x0C08C52Eu, 1);  /* 0C08C52C mov.l @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C08C530u, 1);  /* 0C08C52E mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r0); UPD(0x0C08C532u, 1);  /* 0C08C530 mov.w @Rm,Rn */
	IF(0x0C08C532u); MACL = r7 * r8;  /* 0C08C532 mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C08C536u, 3);  /* 0C08C534 mov.l @(disp,pc),Rn */
	IF(0x0C08C536u); r8 = MACL;  /* 0C08C536 sts macl,Rn */
	r8 += r1;  /* 0C08C538 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C08C53A add #imm,Rn */
	W16(r8, r13); UPD(0x0C08C53Eu, 4);  /* 0C08C53C mov.w Rm,@Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C08C540u, 1);  /* 0C08C53E mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFF84u;  /* 0C08C540 add #imm,Rn */
	r3 = 0xC0A8A30u; UPD(0x0C08C544u, 2);  /* 0C08C542 mov.l @(disp,pc),Rn */
	r0 &= 0xFu;  /* 0C08C544 and #imm,r0 */
	W32(r14 + 0xCu, r7); UPD(0x0C08C548u, 2);  /* 0C08C546 mov.l Rm,@(disp,Rn) */
	r10 += r8;  /* 0C08C548 add Rm,Rn */
	r6 = 0xC0000000u; UPD(0x0C08C54Cu, 2);  /* 0C08C54A mov.l @(disp,pc),Rn */
	r10 += 0x2u;  /* 0C08C54C add #imm,Rn */
	r5 = R32(r9 + 0x4u); UPD(0x0C08C550u, 2);  /* 0C08C54E mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C08C552u, 1);  /* 0C08C550 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x38u, r2); UPD(0x0C08C554u, 1);  /* 0C08C552 mov.l Rm,@(disp,Rn) */
	W32(r8, r6); UPD(0x0C08C556u, 1);  /* 0C08C554 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C08C558u, 1);  /* 0C08C556 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r0); UPD(0x0C08C55Au, 1);  /* 0C08C558 mov.l Rm,@(disp,Rn) */
	IF(0x0C08C55Au); { u32 t_ = r3; PR = 0x0C08C55Eu; r4 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08C55Eu); }  /* 0C08C55A jsr @Rn */
L_0C08C55E: BLKS(0x0C08C55Eu);
	r2 = (u32)(s32)(s16)R16(r12); UPD(0x0C08C560u, 1);  /* 0C08C55E mov.w @Rm,Rn */
	W16(r10, r2); UPD(0x0C08C562u, 1);  /* 0C08C560 mov.w Rm,@Rn */
	r12 = 0x0u;  /* 0C08C562 mov #imm,Rn */
	r0 = R32(r9 + 0x24u); UPD(0x0C08C566u, 2);  /* 0C08C564 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A9AE0u; UPD(0x0C08C568u, 1);  /* 0C08C566 mov.l @(disp,pc),Rn */
	r13 = R32(r9 + 0x28u); UPD(0x0C08C56Au, 1);  /* 0C08C568 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C08C56Cu, 1);  /* 0C08C56A mov.l Rm,@(disp,Rn) */
	r4 = R32(r14 + 0xCu); UPD(0x0C08C56Eu, 1);  /* 0C08C56C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r13); UPD(0x0C08C570u, 1);  /* 0C08C56E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r12); UPD(0x0C08C572u, 1);  /* 0C08C570 mov.l Rm,@(disp,Rn) */
	IF(0x0C08C572u); { u32 t_ = r10; PR = 0x0C08C576u; W32(r8 + 0x2Cu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08C576u); }  /* 0C08C572 jsr @Rn */
L_0C08C576: BLKS(0x0C08C576u);
	r0 = 0xB0u; UPD(0x0C08C578u, 1);  /* 0C08C576 mov.w @(disp,pc),Rn */
	r6 = 0xA8u; UPD(0x0C08C57Au, 1);  /* 0C08C578 mov.w @(disp,pc),Rn */
	IF(0x0C08C57Au); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08C57Cu, 1);  /* 0C08C57A mov.b @(r0,Rm),Rn */
	r6 += r8;  /* 0C08C57C add Rm,Rn */
	IF(0x0C08C57Eu); W8(r0 + r8, r7); UPD(0x0C08C580u, 2);  /* 0C08C57E mov.b Rm,@(r0,Rn) */
	r6 += 0x1u;  /* 0C08C580 add #imm,Rn */
	W32(r14 + 0x10u, r6); UPD(0x0C08C584u, 2);  /* 0C08C582 mov.l Rm,@(disp,Rn) */
	r0 += 0xFFFFFFFDu;  /* 0C08C584 add #imm,Rn */
	r4 = R32(r14 + 0x10u); UPD(0x0C08C588u, 2);  /* 0C08C586 mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C08C588 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C08C58Cu, 2);  /* 0C08C58A mov.b @Rm,Rn */
	W8(r4, r5); UPD(0x0C08C58Eu, 1);  /* 0C08C58C mov.b Rm,@Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C08C590u, 1);  /* 0C08C58E mov.l @(disp,Rm),Rn */
	r2 = R32(r9 + 0x38u); UPD(0x0C08C592u, 1);  /* 0C08C590 mov.l @(disp,Rm),Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C08C594u, 1);  /* 0C08C592 mov.b @Rm,Rn */
	W32(r8 + 0x38u, r2); UPD(0x0C08C596u, 1);  /* 0C08C594 mov.l Rm,@(disp,Rn) */
	{ W8(r0, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C08C474u, 3); goto L_0C08C474; }  /* 0C08C596 bra */
}

void blk_f_0C08C5F0(sh3_t *c)
{
	LOCALS;
L_0C08C5F0: BLKS(0x0C08C5F0u);
	r2 = 0xB4u; UPD(0x0C08C5F2u, 1);  /* 0C08C5F0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C08C5F2 exts.w Rm,Rn */
	IF(0x0C08C5F4u); MACL = r4 * r2;  /* 0C08C5F4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08C5F8u, 4);  /* 0C08C5F6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08C5FAu, 1);  /* 0C08C5F8 mov.l Rm,@-Rn */
	IF(0x0C08C5FAu); r2 = MACL;  /* 0C08C5FA sts macl,Rn */
	r2 += r0;  /* 0C08C5FC add Rm,Rn */
	r3 = R32(r2 + 0x8u); UPD(0x0C08C600u, 3);  /* 0C08C5FE mov.l @(disp,Rm),Rn */
	r0 = 0xFu;  /* 0C08C600 mov #imm,Rn */
	T = r3 > r0;  /* 0C08C602 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08C660u, 5); goto L_0C08C660; } goto L_0C08C608; }  /* 0C08C604 bt/s */
L_0C08C608: BLKS(0x0C08C608u);
	r0 = 0xC08C618u;  /* 0C08C608 mova @(disp,pc),r0 */
	IF(0x0C08C60Au); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08C60Cu, 3);  /* 0C08C60A mov.b @(r0,Rm),Rn */
	IF(0x0C08C60Cu); { u32 tv_ = (r5 + 0x0C08C610u); u32 t_ = PHYS(tv_); IF(0x0C08C60Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C630u: goto L_0C08C630; case 0x0C08C640u: goto L_0C08C640; case 0x0C08C650u: goto L_0C08C650; default: JUMPD(tv_); } }  /* 0C08C60C braf Rn */
L_0C08C630: BLKS(0x0C08C630u);
	r1 = 0xC0A93D0u; UPD(0x0C08C632u, 1);  /* 0C08C630 mov.l @(disp,pc),Rn */
L_0C08C632: BLKS(0x0C08C632u);
	r15 = r14;  /* 0C08C632 mov Rm,Rn */
	IF(0x0C08C634u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A93D0u: TAIL(blk_f_0C0A93D0); case 0x0C0A9590u: goto L_0C0A9590; default: JUMPD(tv_); } }  /* 0C08C634 jmp @Rn */
L_0C08C640: BLKS(0x0C08C640u);
	r1 = 0xC0A9590u; UPD(0x0C08C642u, 1);  /* 0C08C640 mov.l @(disp,pc),Rn */
	{ IF(0x0C08C644u); ; /* slot nop */ UPD(0x0C08C632u, 3); goto L_0C08C632; }  /* 0C08C642 bra */
L_0C08C650: BLKS(0x0C08C650u);
	r1 = 0xC0A9720u; UPD(0x0C08C652u, 1);  /* 0C08C650 mov.l @(disp,pc),Rn */
	{ IF(0x0C08C654u); ; /* slot nop */ UPD(0x0C08C632u, 3); goto L_0C08C632; }  /* 0C08C652 bra */
L_0C08C660: BLKS(0x0C08C660u);
	r3 = 0x0u;  /* 0C08C660 mov #imm,Rn */
	W32(r2, r3); UPD(0x0C08C664u, 2);  /* 0C08C662 mov.l Rm,@Rn */
	r15 = r14;  /* 0C08C664 mov Rm,Rn */
	IF(0x0C08C666u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C08C666 rts */
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

void blk_f_0C08C680(sh3_t *c)
{
	LOCALS;
	goto L_0C08C680;
L_0C08C5F0: BLKS(0x0C08C5F0u);
	r2 = 0xB4u; UPD(0x0C08C5F2u, 1);  /* 0C08C5F0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C08C5F2 exts.w Rm,Rn */
	IF(0x0C08C5F4u); MACL = r4 * r2;  /* 0C08C5F4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08C5F8u, 4);  /* 0C08C5F6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08C5FAu, 1);  /* 0C08C5F8 mov.l Rm,@-Rn */
	IF(0x0C08C5FAu); r2 = MACL;  /* 0C08C5FA sts macl,Rn */
	r2 += r0;  /* 0C08C5FC add Rm,Rn */
	r3 = R32(r2 + 0x8u); UPD(0x0C08C600u, 3);  /* 0C08C5FE mov.l @(disp,Rm),Rn */
	r0 = 0xFu;  /* 0C08C600 mov #imm,Rn */
	T = r3 > r0;  /* 0C08C602 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08C660u, 5); goto L_0C08C660; } goto L_0C08C608; }  /* 0C08C604 bt/s */
L_0C08C608: BLKS(0x0C08C608u);
	r0 = 0xC08C618u;  /* 0C08C608 mova @(disp,pc),r0 */
	IF(0x0C08C60Au); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08C60Cu, 3);  /* 0C08C60A mov.b @(r0,Rm),Rn */
	IF(0x0C08C60Cu); { u32 tv_ = (r5 + 0x0C08C610u); u32 t_ = PHYS(tv_); IF(0x0C08C60Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C630u: goto L_0C08C630; case 0x0C08C640u: goto L_0C08C640; case 0x0C08C650u: goto L_0C08C650; default: JUMPD(tv_); } }  /* 0C08C60C braf Rn */
L_0C08C630: BLKS(0x0C08C630u);
	r1 = 0xC0A93D0u; UPD(0x0C08C632u, 1);  /* 0C08C630 mov.l @(disp,pc),Rn */
L_0C08C632: BLKS(0x0C08C632u);
	r15 = r14;  /* 0C08C632 mov Rm,Rn */
	IF(0x0C08C634u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A93D0u: TAIL(blk_f_0C0A93D0); case 0x0C0A9590u: goto L_0C0A9590; default: JUMPD(tv_); } }  /* 0C08C634 jmp @Rn */
L_0C08C640: BLKS(0x0C08C640u);
	r1 = 0xC0A9590u; UPD(0x0C08C642u, 1);  /* 0C08C640 mov.l @(disp,pc),Rn */
	{ IF(0x0C08C644u); ; /* slot nop */ UPD(0x0C08C632u, 3); goto L_0C08C632; }  /* 0C08C642 bra */
L_0C08C650: BLKS(0x0C08C650u);
	r1 = 0xC0A9720u; UPD(0x0C08C652u, 1);  /* 0C08C650 mov.l @(disp,pc),Rn */
	{ IF(0x0C08C654u); ; /* slot nop */ UPD(0x0C08C632u, 3); goto L_0C08C632; }  /* 0C08C652 bra */
L_0C08C660: BLKS(0x0C08C660u);
	r3 = 0x0u;  /* 0C08C660 mov #imm,Rn */
	W32(r2, r3); UPD(0x0C08C664u, 2);  /* 0C08C662 mov.l Rm,@Rn */
	r15 = r14;  /* 0C08C664 mov Rm,Rn */
	IF(0x0C08C666u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C08C666 rts */
L_0C08C680: BLKS(0x0C08C680u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08C682u, 1);  /* 0C08C680 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08C684u, 1);  /* 0C08C682 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08C686u, 1);  /* 0C08C684 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08C688u, 1);  /* 0C08C686 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08C68Au, 1);  /* 0C08C688 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C08C68A exts.w Rm,Rn */
	r8 = 0xB4u; UPD(0x0C08C68Eu, 2);  /* 0C08C68C mov.w @(disp,pc),Rn */
	r12 = 0xFFFFFFFCu;  /* 0C08C68E mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08C692u, 2);  /* 0C08C690 mov.l Rm,@-Rn */
	IF(0x0C08C692u); MACL = r11 * r8;  /* 0C08C692 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08C696u, 3);  /* 0C08C694 mov.l Rm,@-Rn */
	r13 = 0xC286578u; UPD(0x0C08C698u, 1);  /* 0C08C696 mov.l @(disp,pc),Rn */
	IF(0x0C08C698u); r9 = MACL;  /* 0C08C698 sts macl,Rn */
	IF(0x0C08C69Au); r15 -= 4; W32(r15, PR); UPD(0x0C08C69Cu, 2);  /* 0C08C69A sts.l pr,@-Rn */
	r9 += r13;  /* 0C08C69C add Rm,Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C08C6A0u, 2);  /* 0C08C69E mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C08C6A0 add #imm,Rn */
	IF(0x0C08C6A2u); ARG0(0x40CCu); { s32 s_ = (s32)r12; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C08C6A2 shad Rm,Rn */
	r14 = r15;  /* 0C08C6A4 mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C08C6A6 cmp/eq #imm,r0 */
	{ u32 c_ = !T; IF(0x0C08C6AAu); r10 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C08C6B0u, 7); goto L_0C08C6B0; } goto L_0C08C6AC; }  /* 0C08C6A8 bf/s */
L_0C08C6AC: BLKS(0x0C08C6ACu);
	{ r8 += 0xFFFFFFD2u; /* slot add #imm,Rn */ UPD(0x0C08C7E0u, 4); goto L_0C08C7E0; }  /* 0C08C6AC bra */
L_0C08C6B0: BLKS(0x0C08C6B0u);
	r10 = 0xC0A8B50u; UPD(0x0C08C6B2u, 1);  /* 0C08C6B0 mov.l @(disp,pc),Rn */
	IF(0x0C08C6B2u); { u32 t_ = r10; PR = 0x0C08C6B6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C08C6B6u); }  /* 0C08C6B2 jsr @Rn */
L_0C08C6B6: BLKS(0x0C08C6B6u);
	IF(0x0C08C6B6u); T = (s32)r0 >= 0;  /* 0C08C6B6 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C08C6BAu); MACL = r0 * r8; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C08C6C0u, 5); goto L_0C08C6C0; } goto L_0C08C6BC; }  /* 0C08C6B8 bt/s */
L_0C08C6BC: BLKS(0x0C08C6BCu);
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C08C7C0u, 5); goto L_0C08C7C0; }  /* 0C08C6BC bra */
L_0C08C6C0: BLKS(0x0C08C6C0u);
	r5 = 0xA8u; UPD(0x0C08C6C2u, 1);  /* 0C08C6C0 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C08C6C2 mov Rm,Rn */
	IF(0x0C08C6C4u); r8 = MACL;  /* 0C08C6C4 sts macl,Rn */
	r8 += r13;  /* 0C08C6C6 add Rm,Rn */
	r10 = R32(r8 + 0x28u); UPD(0x0C08C6CAu, 4);  /* 0C08C6C8 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x28u, r10); UPD(0x0C08C6CCu, 1);  /* 0C08C6CA mov.l Rm,@(disp,Rn) */
	r10 = r9;  /* 0C08C6CC mov Rm,Rn */
	r10 += r5;  /* 0C08C6CE add Rm,Rn */
	r5 += r8;  /* 0C08C6D0 add Rm,Rn */
	r5 += 0x1u;  /* 0C08C6D2 add #imm,Rn */
	r13 = 0xC069BF0u; UPD(0x0C08C6D6u, 5);  /* 0C08C6D4 mov.l @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C08C6D6 add #imm,Rn */
	r2 = R32(r8 + 0x24u); UPD(0x0C08C6DAu, 2);  /* 0C08C6D8 mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C08C6DCu, 1);  /* 0C08C6DA mov.b @Rm,Rn */
	W32(r9 + 0x24u, r2); UPD(0x0C08C6DEu, 1);  /* 0C08C6DC mov.l Rm,@(disp,Rn) */
	IF(0x0C08C6DEu); { u32 t_ = r13; PR = 0x0C08C6E2u; W8(r10, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08C6E2u); }  /* 0C08C6DE jsr @Rn */
L_0C08C6E2: BLKS(0x0C08C6E2u);
	r0 = R32(r9 + 0x8u); UPD(0x0C08C6E4u, 1);  /* 0C08C6E2 mov.l @(disp,Rm),Rn */
	r1 = 0xFu;  /* 0C08C6E4 mov #imm,Rn */
	r13 = 0xC068F00u; UPD(0x0C08C6E8u, 2);  /* 0C08C6E6 mov.l @(disp,pc),Rn */
	r0 &= r1;  /* 0C08C6E8 and Rm,Rn */
	r7 = 0xC1A3694u; UPD(0x0C08C6ECu, 2);  /* 0C08C6EA mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C08C6EC add Rm,Rn */
	IF(0x0C08C6EEu); r5 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C08C6F0u, 2);  /* 0C08C6EE mov.w @(r0,Rm),Rn */
	IF(0x0C08C6F0u); { u32 t_ = r13; PR = 0x0C08C6F4u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08C6F4u); }  /* 0C08C6F0 jsr @Rn */
L_0C08C6F4: BLKS(0x0C08C6F4u);
	r4 = R32(r8 + 0x8u); UPD(0x0C08C6F6u, 1);  /* 0C08C6F4 mov.l @(disp,Rm),Rn */
	r8 = 0x86u; UPD(0x0C08C6F8u, 1);  /* 0C08C6F6 mov.w @(disp,pc),Rn */
	r4 += 0xFFFFFFF0u;  /* 0C08C6F8 add #imm,Rn */
	r8 += r9;  /* 0C08C6FA add Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C08C6FEu, 3);  /* 0C08C6FC mov.w @Rm,Rn */
	r6 = 0x1FFu; UPD(0x0C08C700u, 1);  /* 0C08C6FE mov.w @(disp,pc),Rn */
	r13 += 0x8u;  /* 0C08C700 add #imm,Rn */
	r13 &= r6;  /* 0C08C702 and Rm,Rn */
	r3 = 0xC0A8B10u; UPD(0x0C08C706u, 3);  /* 0C08C704 mov.l @(disp,pc),Rn */
	IF(0x0C08C706u); ARG0(0x4DCCu); { s32 s_ = (s32)r12; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = (u32)((s32)r13 >> 31); else r13 = (u32)((s32)r13 >> ((~s_ & 31) + 1)); }  /* 0C08C706 shad Rm,Rn */
	W32(r9 + 0x8u, r4); UPD(0x0C08C70Au, 2);  /* 0C08C708 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r13); UPD(0x0C08C70Cu, 1);  /* 0C08C70A mov.l Rm,@(disp,Rn) */
	IF(0x0C08C70Cu); { u32 t_ = r3; PR = 0x0C08C710u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C08C710u); }  /* 0C08C70C jsr @Rn */
L_0C08C710: BLKS(0x0C08C710u);
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C08C712u, 1);  /* 0C08C710 mov.b @Rm,Rn */
	T = r0 == 0x14u;  /* 0C08C712 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C08C730u, 4); goto L_0C08C730; }  /* 0C08C714 bt */
L_0C08C716: BLKS(0x0C08C716u);
	r14 += 0xCu;  /* 0C08C716 add #imm,Rn */
	UPD(0x0C08C718u, 1);
L_0C08C718: BLKS(0x0C08C718u);
	r15 = r14;  /* 0C08C718 mov Rm,Rn */
	IF(0x0C08C71Au); PR = R32(r15); r15 += 4; UPD(0x0C08C71Cu, 2);  /* 0C08C71A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08C71Eu, 1);  /* 0C08C71C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08C720u, 1);  /* 0C08C71E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08C722u, 1);  /* 0C08C720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08C724u, 1);  /* 0C08C722 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08C726u, 1);  /* 0C08C724 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08C728u, 1);  /* 0C08C726 mov.l @Rm+,Rn */
	IF(0x0C08C728u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08C728 rts */
L_0C08C730: BLKS(0x0C08C730u);
	r12 = 0xC0BC1B0u; UPD(0x0C08C732u, 1);  /* 0C08C730 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C08C732 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08C734 mov #imm,Rn */
	IF(0x0C08C736u); { u32 t_ = r12; PR = 0x0C08C73Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08C73Au); }  /* 0C08C736 jsr @Rn */
L_0C08C73A: BLKS(0x0C08C73Au);
	T = (r0 & r0) == 0;  /* 0C08C73A tst Rm,Rn */
	if (T) { UPD(0x0C08C716u, 4); goto L_0C08C716; }  /* 0C08C73C bt */
L_0C08C73E: BLKS(0x0C08C73Eu);
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C08C740u, 1);  /* 0C08C73E mov.b @Rm,Rn */
	r13 = 0xC0BBF10u; UPD(0x0C08C742u, 1);  /* 0C08C740 mov.l @(disp,pc),Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C08C744u, 1);  /* 0C08C742 mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C08C744 extu.b Rm,Rn */
	IF(0x0C08C746u); { u32 t_ = r13; PR = 0x0C08C74Au; r5 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08C74Au); }  /* 0C08C746 jsr @Rn */
L_0C08C74A: BLKS(0x0C08C74Au);
	T = (r0 & r0) == 0;  /* 0C08C74A tst Rm,Rn */
	if (T) { UPD(0x0C08C716u, 4); goto L_0C08C716; }  /* 0C08C74C bt */
L_0C08C74E: BLKS(0x0C08C74Eu);
	r12 = (u32)(s32)(s16)R16(r8); UPD(0x0C08C750u, 1);  /* 0C08C74E mov.w @Rm,Rn */
	r13 = 0x0u;  /* 0C08C750 mov #imm,Rn */
	W32(r14 + 0x4u, r9); UPD(0x0C08C754u, 2);  /* 0C08C752 mov.l Rm,@(disp,Rn) */
L_0C08C754: BLKS(0x0C08C754u);
	r10 = 0xC069B20u; UPD(0x0C08C756u, 1);  /* 0C08C754 mov.l @(disp,pc),Rn */
	r5 = 0x120000u; UPD(0x0C08C758u, 1);  /* 0C08C756 mov.l @(disp,pc),Rn */
	IF(0x0C08C758u); { u32 t_ = r10; PR = 0x0C08C75Cu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08C75Cu); }  /* 0C08C758 jsr @Rn */
L_0C08C75C: BLKS(0x0C08C75Cu);
	r10 = r0;  /* 0C08C75C mov Rm,Rn */
	r9 = r13;  /* 0C08C75E mov Rm,Rn */
	r0 = 0xC1A36B4u; UPD(0x0C08C762u, 3);  /* 0C08C760 mov.l @(disp,pc),Rn */
	IF(0x0C08C762u); r9 <<= 2;  /* 0C08C762 shll2 Rn */
	r8 = 0xC069AF0u; UPD(0x0C08C766u, 2);  /* 0C08C764 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C08C766 add Rm,Rn */
	r5 = R32(r9); UPD(0x0C08C76Au, 2);  /* 0C08C768 mov.l @Rm,Rn */
	IF(0x0C08C76Au); { u32 t_ = r8; PR = 0x0C08C76Eu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08C76Eu); }  /* 0C08C76A jsr @Rn */
L_0C08C76E: BLKS(0x0C08C76Eu);
	r3 = R32(r14 + 0x4u); UPD(0x0C08C770u, 1);  /* 0C08C76E mov.l @(disp,Rm),Rn */
	r10 -= r0;  /* 0C08C770 sub Rm,Rn */
	r5 = R32(r3 + 0x24u); UPD(0x0C08C774u, 2);  /* 0C08C772 mov.l @(disp,Rm),Rn */
	r2 = 0xC069AF0u; UPD(0x0C08C776u, 1);  /* 0C08C774 mov.l @(disp,pc),Rn */
	r10 += r5;  /* 0C08C776 add Rm,Rn */
	r5 = 0x120000u; UPD(0x0C08C77Au, 2);  /* 0C08C778 mov.l @(disp,pc),Rn */
	IF(0x0C08C77Au); { u32 t_ = r2; PR = 0x0C08C77Eu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08C77Eu); }  /* 0C08C77A jsr @Rn */
L_0C08C77E: BLKS(0x0C08C77Eu);
	r4 = R32(r14 + 0x4u); UPD(0x0C08C780u, 1);  /* 0C08C77E mov.l @(disp,Rm),Rn */
	r7 = 0xC069B20u; UPD(0x0C08C782u, 1);  /* 0C08C780 mov.l @(disp,pc),Rn */
	r8 = R32(r4 + 0x28u); UPD(0x0C08C784u, 1);  /* 0C08C782 mov.l @(disp,Rm),Rn */
	r5 = R32(r9); UPD(0x0C08C786u, 1);  /* 0C08C784 mov.l @Rm,Rn */
	r8 += r0;  /* 0C08C786 add Rm,Rn */
	IF(0x0C08C788u); { u32 t_ = r7; PR = 0x0C08C78Cu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08C78Cu); }  /* 0C08C788 jsr @Rn */
L_0C08C78C: BLKS(0x0C08C78Cu);
	r6 = 0x20000u; UPD(0x0C08C78Eu, 1);  /* 0C08C78C mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08C78E add #imm,Rn */
	W32(r15, r6); UPD(0x0C08C792u, 2);  /* 0C08C790 mov.l Rm,@Rn */
	r8 += r0;  /* 0C08C792 add Rm,Rn */
	r1 = 0xC0BA480u; UPD(0x0C08C796u, 2);  /* 0C08C794 mov.l @(disp,pc),Rn */
	r9 = r13;  /* 0C08C796 mov Rm,Rn */
	r6 = r8;  /* 0C08C798 mov Rm,Rn */
	r9 += 0x1u;  /* 0C08C79A add #imm,Rn */
	r4 = 0x2u;  /* 0C08C79C mov #imm,Rn */
	r5 = r10;  /* 0C08C79E mov Rm,Rn */
	r7 = r12;  /* 0C08C7A0 mov Rm,Rn */
	IF(0x0C08C7A2u); { u32 t_ = r1; PR = 0x0C08C7A6u; r13 = (u32)(s32)(s16)r9; /* slot exts.w Rm,Rn */ UPD(t_, 8); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C08C7A6u); }  /* 0C08C7A2 jsr @Rn */
L_0C08C7A6: BLKS(0x0C08C7A6u);
	r8 = 0x1u;  /* 0C08C7A6 mov #imm,Rn */
	T = (s32)r13 > (s32)r8;  /* 0C08C7A8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08C754u, 5); goto L_0C08C754; } goto L_0C08C7AE; }  /* 0C08C7AA bf/s */
L_0C08C7AE: BLKS(0x0C08C7AEu);
	r4 = r11;  /* 0C08C7AE mov Rm,Rn */
	r11 = 0xC069B90u; UPD(0x0C08C7B2u, 3);  /* 0C08C7B0 mov.l @(disp,pc),Rn */
	IF(0x0C08C7B2u); { u32 t_ = r11; PR = 0x0C08C7B6u; IF(0x0C08C7B4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C08C7B6u); }  /* 0C08C7B2 jsr @Rn */
L_0C08C7B6: BLKS(0x0C08C7B6u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C08C718u, 3); goto L_0C08C718; }  /* 0C08C7B6 bra */
L_0C08C7C0: BLKS(0x0C08C7C0u);
	r2 = 0xC08C5F0u; UPD(0x0C08C7C2u, 1);  /* 0C08C7C0 mov.l @(disp,pc),Rn */
	r14 += 0xCu;  /* 0C08C7C2 add #imm,Rn */
	r15 = r14;  /* 0C08C7C4 mov Rm,Rn */
	IF(0x0C08C7C6u); PR = R32(r15); r15 += 4; UPD(0x0C08C7C8u, 3);  /* 0C08C7C6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08C7CAu, 1);  /* 0C08C7C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08C7CCu, 1);  /* 0C08C7CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08C7CEu, 1);  /* 0C08C7CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08C7D0u, 1);  /* 0C08C7CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08C7D2u, 1);  /* 0C08C7D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08C7D4u, 1);  /* 0C08C7D2 mov.l @Rm+,Rn */
	IF(0x0C08C7D4u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C08C5F0u: goto L_0C08C5F0; default: JUMPD(tv_); } }  /* 0C08C7D4 jmp @Rn */
L_0C08C7E0: BLKS(0x0C08C7E0u);
	r12 = 0x8Cu; UPD(0x0C08C7E2u, 1);  /* 0C08C7E0 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C08C7E2 add Rm,Rn */
	r0 = 0xC069B20u; UPD(0x0C08C7E6u, 2);  /* 0C08C7E4 mov.l @(disp,pc),Rn */
	r12 += r9;  /* 0C08C7E6 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C08C7EAu, 2);  /* 0C08C7E8 mov.w @Rm,Rn */
	IF(0x0C08C7EAu); { u32 t_ = r0; PR = 0x0C08C7EEu; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08C7EEu); }  /* 0C08C7EA jsr @Rn */
L_0C08C7EE: BLKS(0x0C08C7EEu);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C08C7F0u, 1);  /* 0C08C7EE mov.w @Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C08C7F2u, 1);  /* 0C08C7F0 mov.l @(disp,pc),Rn */
	W32(r9 + 0x2Cu, r0); UPD(0x0C08C7F4u, 1);  /* 0C08C7F2 mov.l Rm,@(disp,Rn) */
	IF(0x0C08C7F4u); { u32 t_ = r8; PR = 0x0C08C7F8u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08C7F8u); }  /* 0C08C7F4 jsr @Rn */
L_0C08C7F8: BLKS(0x0C08C7F8u);
	r4 = R32(r9 + 0x24u); UPD(0x0C08C7FAu, 1);  /* 0C08C7F8 mov.l @(disp,Rm),Rn */
	r2 = R32(r9 + 0x2Cu); UPD(0x0C08C7FCu, 1);  /* 0C08C7FA mov.l @(disp,Rm),Rn */
	r3 = R32(r9 + 0x28u); UPD(0x0C08C7FEu, 1);  /* 0C08C7FC mov.l @(disp,Rm),Rn */
	r4 += r2;  /* 0C08C7FE add Rm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C08C802u, 2);  /* 0C08C800 mov.l Rm,@(disp,Rn) */
	r3 += r0;  /* 0C08C802 add Rm,Rn */
	r0 = (r4 >> 16) | (r4 << 16);  /* 0C08C804 swap.w Rm,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C08C806 exts.w Rm,Rn */
	r0 = 0xFFFFFF60u; UPD(0x0C08C80Au, 4);  /* 0C08C808 mov.w @(disp,pc),Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C08C80Cu, 1);  /* 0C08C80A mov.l Rm,@(disp,Rn) */
	r2 += r0;  /* 0C08C80C add Rm,Rn */
	IF(0x0C08C80Eu); T = (s32)r2 >= 0;  /* 0C08C80E cmp/pz Rn */
	{ u32 c_ = T; W32(r9 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08C818u, 5); goto L_0C08C818; } UPD(0x0C08C814u, 1); goto L_0C08C814; }  /* 0C08C810 bt/s */
L_0C08C814: BLKS(0x0C08C814u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C08C9D0u, 3); goto L_0C08C9D0; }  /* 0C08C814 bra */
L_0C08C818: BLKS(0x0C08C818u);
	r5 = 0xD0u; UPD(0x0C08C81Au, 1);  /* 0C08C818 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C08C81A cmp/gt Rm,Rn */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08C83Au, 4); goto L_0C08C83A; } goto L_0C08C820; }  /* 0C08C81C bt/s */
L_0C08C820: BLKS(0x0C08C820u);
	r1 = (r3 >> 16) | (r3 << 16);  /* 0C08C820 swap.w Rm,Rn */
	r3 = 0xFFFFFE00u; UPD(0x0C08C824u, 3);  /* 0C08C822 mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)r1;  /* 0C08C824 exts.w Rm,Rn */
	r2 += r3;  /* 0C08C826 add Rm,Rn */
	IF(0x0C08C828u); T = (s32)r2 >= 0;  /* 0C08C828 cmp/pz Rn */
	{ u32 c_ = T; W32(r14, r10); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C08C832u, 6); goto L_0C08C832; } UPD(0x0C08C82Eu, 1); goto L_0C08C82E; }  /* 0C08C82A bt/s */
L_0C08C82E: BLKS(0x0C08C82Eu);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C08C9C0u, 3); goto L_0C08C9C0; }  /* 0C08C82E bra */
L_0C08C832: BLKS(0x0C08C832u);
	r6 = 0xA8u; UPD(0x0C08C834u, 1);  /* 0C08C832 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C08C834 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08C890u, 4); goto L_0C08C890; } UPD(0x0C08C83Au, 1); goto L_0C08C83A; }  /* 0C08C836 bf/s */
L_0C08C83A: BLKS(0x0C08C83Au);
	{ W32(r9, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C08C716u, 3); goto L_0C08C716; }  /* 0C08C83A bra */
L_0C08C890: BLKS(0x0C08C890u);
	r10 = 0x98u; UPD(0x0C08C892u, 1);  /* 0C08C890 mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C08C892 add Rm,Rn */
	r8 = r10;  /* 0C08C894 mov Rm,Rn */
	r8 += 0x1u;  /* 0C08C896 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C08C89Au, 4);  /* 0C08C898 mov.b @Rm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C08C89A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C08C8BCu, 4); goto L_0C08C8BC; }  /* 0C08C89C bt */
L_0C08C89E: BLKS(0x0C08C89Eu);
	r0 = 0xC069BF0u; UPD(0x0C08C8A0u, 1);  /* 0C08C89E mov.l @(disp,pc),Rn */
	IF(0x0C08C8A0u); { u32 t_ = r0; PR = 0x0C08C8A4u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08C8A4u); }  /* 0C08C8A0 jsr @Rn */
L_0C08C8A4: BLKS(0x0C08C8A4u);
	r0 = R32(r9 + 0x8u); UPD(0x0C08C8A6u, 1);  /* 0C08C8A4 mov.l @(disp,Rm),Rn */
	r2 = 0xFu;  /* 0C08C8A6 mov #imm,Rn */
	r0 &= r2;  /* 0C08C8A8 and Rm,Rn */
	r4 = 0xC1A3694u; UPD(0x0C08C8ACu, 3);  /* 0C08C8AA mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C08C8AC add Rm,Rn */
	IF(0x0C08C8AEu); r5 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C08C8B0u, 2);  /* 0C08C8AE mov.w @(r0,Rm),Rn */
	r0 = 0xC068F00u; UPD(0x0C08C8B2u, 1);  /* 0C08C8B0 mov.l @(disp,pc),Rn */
	IF(0x0C08C8B2u); { u32 t_ = r0; PR = 0x0C08C8B6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08C8B6u); }  /* 0C08C8B2 jsr @Rn */
L_0C08C8B6: BLKS(0x0C08C8B6u);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C08C8B8u, 1);  /* 0C08C8B6 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C08C8B8 add #imm,Rn */
	W8(r8, r0); UPD(0x0C08C8BCu, 2);  /* 0C08C8BA mov.b Rm,@Rn */
L_0C08C8BC: BLKS(0x0C08C8BCu);
	r8 = 0xA8u; UPD(0x0C08C8BEu, 1);  /* 0C08C8BC mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C08C8BE add Rm,Rn */
	r8 += 0x1u;  /* 0C08C8C0 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C08C8C4u, 3);  /* 0C08C8C2 mov.b @Rm,Rn */
	r2 = r5 & 0xFF;  /* 0C08C8C4 extu.b Rm,Rn */
	r0 = r2;  /* 0C08C8C6 mov Rm,Rn */
	T = r0 == 0x14u;  /* 0C08C8C8 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C08C9B0u, 6); goto L_0C08C9B0; }  /* 0C08C8CA bt */
L_0C08C8CC: BLKS(0x0C08C8CCu);
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C08C8CEu, 1);  /* 0C08C8CC mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C08C8CE tst Rm,Rn */
	{ u32 c_ = !T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08C9A0u, 4); goto L_0C08C9A0; } goto L_0C08C8D4; }  /* 0C08C8D0 bf/s */
L_0C08C8D4: BLKS(0x0C08C8D4u);
	r10 = 0xC2B039Cu; UPD(0x0C08C8D6u, 2);  /* 0C08C8D4 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C08C8D8u, 1);  /* 0C08C8D6 mov.l @Rm,Rn */
	r0 += r11;  /* 0C08C8D8 add Rm,Rn */
	r0 &= 0x3u;  /* 0C08C8DA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08C8DC tst Rm,Rn */
	{ u32 c_ = T; r6 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08C910u, 6); goto L_0C08C910; } UPD(0x0C08C8E2u, 1); goto L_0C08C8E2; }  /* 0C08C8DE bt/s */
L_0C08C8E2: BLKS(0x0C08C8E2u);
	r7 = 0xC0A8B10u; UPD(0x0C08C8E4u, 1);  /* 0C08C8E2 mov.l @(disp,pc),Rn */
L_0C08C8E4: BLKS(0x0C08C8E4u);
	r9 = 0xB4u; UPD(0x0C08C8E6u, 1);  /* 0C08C8E4 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C08C8E6 mov Rm,Rn */
	IF(0x0C08C8E8u); MACL = r11 * r9;  /* 0C08C8E8 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C08C8ECu, 4);  /* 0C08C8EA mov.l @(disp,pc),Rn */
	r14 += 0xCu;  /* 0C08C8EC add #imm,Rn */
	IF(0x0C08C8EEu); r5 = MACL;  /* 0C08C8EE sts macl,Rn */
	r5 += r10;  /* 0C08C8F0 add Rm,Rn */
	r0 = R32(r5 + 0xCu); UPD(0x0C08C8F4u, 4);  /* 0C08C8F2 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C08C8F4 add #imm,Rn */
	r0 &= 0x3u;  /* 0C08C8F6 and #imm,r0 */
	W32(r5 + 0xCu, r0); UPD(0x0C08C8FAu, 3);  /* 0C08C8F8 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C08C8FA mov Rm,Rn */
	IF(0x0C08C8FCu); PR = R32(r15); r15 += 4; UPD(0x0C08C8FEu, 2);  /* 0C08C8FC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08C900u, 1);  /* 0C08C8FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08C902u, 1);  /* 0C08C900 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08C904u, 1);  /* 0C08C902 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08C906u, 1);  /* 0C08C904 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08C908u, 1);  /* 0C08C906 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08C90Au, 1);  /* 0C08C908 mov.l @Rm+,Rn */
	IF(0x0C08C90Au); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8B10u: TAIL(blk_f_0C0A8B10); default: JUMPD(tv_); } }  /* 0C08C90A jmp @Rn */
L_0C08C910: BLKS(0x0C08C910u);
	r10 = 0xC0BBF10u; UPD(0x0C08C912u, 1);  /* 0C08C910 mov.l @(disp,pc),Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C08C914u, 1);  /* 0C08C912 mov.l @(disp,Rm),Rn */
	IF(0x0C08C914u); { u32 t_ = r10; PR = 0x0C08C918u; r5 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08C918u); }  /* 0C08C914 jsr @Rn */
L_0C08C918: BLKS(0x0C08C918u);
	T = (r0 & r0) == 0;  /* 0C08C918 tst Rm,Rn */
	if (T) { UPD(0x0C08C8E2u, 4); goto L_0C08C8E2; }  /* 0C08C91A bt */
L_0C08C91C: BLKS(0x0C08C91Cu);
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C08C91Eu, 1);  /* 0C08C91C mov.b @Rm,Rn */
	r3 = 0x13u;  /* 0C08C91E mov #imm,Rn */
	T = r2 > r3;  /* 0C08C920 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C08C970u, 5); goto L_0C08C970; }  /* 0C08C922 bf */
L_0C08C924: BLKS(0x0C08C924u);
	r7 = 0xC0A8B10u; UPD(0x0C08C926u, 1);  /* 0C08C924 mov.l @(disp,pc),Rn */
L_0C08C926: BLKS(0x0C08C926u);
	r10 = r2 & 0xFF;  /* 0C08C926 extu.b Rm,Rn */
	r5 = 0x14u;  /* 0C08C928 mov #imm,Rn */
	T = r10 > r5;  /* 0C08C92A cmp/hi Rm,Rn */
	{ u32 c_ = T; r4 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08C950u, 6); goto L_0C08C950; } UPD(0x0C08C930u, 1); goto L_0C08C930; }  /* 0C08C92C bt/s */
L_0C08C930: BLKS(0x0C08C930u);
	r0 = R32(r14); UPD(0x0C08C932u, 1);  /* 0C08C930 mov.l @Rm,Rn */
	r12 = r13;  /* 0C08C932 mov Rm,Rn */
	r12 += r0;  /* 0C08C934 add Rm,Rn */
	r0 = R32(r12 + 0x8u); UPD(0x0C08C938u, 3);  /* 0C08C936 mov.l @(disp,Rm),Rn */
	r4 = 0xFu;  /* 0C08C938 mov #imm,Rn */
	r0 &= r4;  /* 0C08C93A and Rm,Rn */
	r6 = 0xC1A360Cu; UPD(0x0C08C93Eu, 3);  /* 0C08C93C mov.l @(disp,pc),Rn */
	IF(0x0C08C93Eu); r0 <<= 2;  /* 0C08C93E shll2 Rn */
	IF(0x0C08C940u); r13 = R32(r0 + r6); UPD(0x0C08C942u, 2);  /* 0C08C940 mov.l @(r0,Rm),Rn */
	{ W32(r12 + 0x38u, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08C8E4u, 3); goto L_0C08C8E4; }  /* 0C08C942 bra */
L_0C08C950: BLKS(0x0C08C950u);
	r3 = R32(r9 + 0x8u); UPD(0x0C08C952u, 1);  /* 0C08C950 mov.l @(disp,Rm),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C08C952 add #imm,Rn */
	W32(r9 + 0x8u, r3); UPD(0x0C08C956u, 2);  /* 0C08C954 mov.l Rm,@(disp,Rn) */
	IF(0x0C08C956u); { u32 t_ = r7; PR = 0x0C08C95Au; W32(r14 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C08C95Au); }  /* 0C08C956 jsr @Rn */
L_0C08C95A: BLKS(0x0C08C95Au);
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C08C95Cu, 1);  /* 0C08C95A mov.b @Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C08C95C add #imm,Rn */
	W8(r8, r2); UPD(0x0C08C960u, 2);  /* 0C08C95E mov.b Rm,@Rn */
	r9 = R32(r12); UPD(0x0C08C962u, 1);  /* 0C08C960 mov.l @Rm,Rn */
	r8 = 0xFFFFF000u; UPD(0x0C08C964u, 1);  /* 0C08C962 mov.w @(disp,pc),Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C08C966u, 1);  /* 0C08C964 mov.l @(disp,Rm),Rn */
	r9 += r8;  /* 0C08C966 add Rm,Rn */
	{ W32(r12, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C08C930u, 4); goto L_0C08C930; }  /* 0C08C968 bra */
L_0C08C970: BLKS(0x0C08C970u);
	r4 = R32(r9 + 0x8u); UPD(0x0C08C972u, 1);  /* 0C08C970 mov.l @(disp,Rm),Rn */
	r0 = 0xC0A8B10u; UPD(0x0C08C974u, 1);  /* 0C08C972 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C08C974 add #imm,Rn */
	W32(r9 + 0x8u, r4); UPD(0x0C08C978u, 2);  /* 0C08C976 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r0); UPD(0x0C08C97Au, 1);  /* 0C08C978 mov.l Rm,@(disp,Rn) */
	IF(0x0C08C97Au); { u32 t_ = r0; PR = 0x0C08C97Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C08C97Eu); }  /* 0C08C97A jsr @Rn */
L_0C08C97E: BLKS(0x0C08C97Eu);
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C08C980u, 1);  /* 0C08C97E mov.b @Rm,Rn */
	r7 = R32(r12); UPD(0x0C08C982u, 1);  /* 0C08C980 mov.l @Rm,Rn */
	r6 += 0x1u;  /* 0C08C982 add #imm,Rn */
	r1 = 0x1000u; UPD(0x0C08C986u, 2);  /* 0C08C984 mov.w @(disp,pc),Rn */
	r2 = r6;  /* 0C08C986 mov Rm,Rn */
	r7 += r1;  /* 0C08C988 add Rm,Rn */
	W8(r8, r6); UPD(0x0C08C98Cu, 3);  /* 0C08C98A mov.b Rm,@Rn */
	W32(r12, r7); UPD(0x0C08C98Eu, 1);  /* 0C08C98C mov.l Rm,@Rn */
	{ r7 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C08C926u, 3); goto L_0C08C926; }  /* 0C08C98E bra */
L_0C08C9A0: BLKS(0x0C08C9A0u);
	{ W8(r10, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C08C8E2u, 3); goto L_0C08C8E2; }  /* 0C08C9A0 bra */
L_0C08C9B0: BLKS(0x0C08C9B0u);
	r7 = R32(r9); UPD(0x0C08C9B2u, 1);  /* 0C08C9B0 mov.l @Rm,Rn */
	r1 = 0x13000000u; UPD(0x0C08C9B4u, 1);  /* 0C08C9B2 mov.l @(disp,pc),Rn */
	r7 |= r1;  /* 0C08C9B4 or Rm,Rn */
	{ W32(r9, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C08C8E2u, 4); goto L_0C08C8E2; }  /* 0C08C9B6 bra */
L_0C08C9C0: BLKS(0x0C08C9C0u);
	{ IF(0x0C08C9C2u); ; /* slot nop */ UPD(0x0C08C832u, 3); goto L_0C08C832; }  /* 0C08C9C0 bra */
L_0C08C9D0: BLKS(0x0C08C9D0u);
	{ IF(0x0C08C9D2u); ; /* slot nop */ UPD(0x0C08C818u, 3); goto L_0C08C818; }  /* 0C08C9D0 bra */
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

void blk_f_0C08CA10(sh3_t *c)
{
	LOCALS;
L_0C08CA10: BLKS(0x0C08CA10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08CA12u, 1);  /* 0C08CA10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08CA14u, 1);  /* 0C08CA12 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08CA16u, 1);  /* 0C08CA14 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08CA18u, 1);  /* 0C08CA16 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08CA1Au, 1);  /* 0C08CA18 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08CA1Cu, 1);  /* 0C08CA1A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08CA1Eu, 1);  /* 0C08CA1C mov.l Rm,@-Rn */
	r4 = 0xC2ABAA4u; UPD(0x0C08CA20u, 1);  /* 0C08CA1E mov.l @(disp,pc),Rn */
	IF(0x0C08CA20u); r15 -= 4; W32(r15, PR); UPD(0x0C08CA22u, 1);  /* 0C08CA20 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C08CA24u, 1);  /* 0C08CA22 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C08CA24 add #imm,Rn */
	r8 = 0xC29D724u; UPD(0x0C08CA28u, 2);  /* 0C08CA26 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C08CA28 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C08CA2Cu, 2);  /* 0C08CA2A mov.w @Rm+,Rn */
	r7 = R32(r8); UPD(0x0C08CA2Eu, 1);  /* 0C08CA2C mov.l @Rm,Rn */
	IF(0x0C08CA2Eu); r0 <<= 2;  /* 0C08CA2E shll2 Rn */
	IF(0x0C08CA30u); r6 = R32(r0 + r7); UPD(0x0C08CA32u, 2);  /* 0C08CA30 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r2 = v_; } UPD(0x0C08CA34u, 1);  /* 0C08CA32 mov.w @Rm+,Rn */
	r5 = 0xC297460u; UPD(0x0C08CA36u, 1);  /* 0C08CA34 mov.l @(disp,pc),Rn */
	r9 = 0xC2460ACu; UPD(0x0C08CA38u, 1);  /* 0C08CA36 mov.l @(disp,pc),Rn */
	r8 = 0xC069510u; UPD(0x0C08CA3Au, 1);  /* 0C08CA38 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C08CA3Cu, 1);  /* 0C08CA3A mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C08CA3Eu, 1);  /* 0C08CA3C mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C08CA40u, 1);  /* 0C08CA3E mov.w @Rm,Rn */
	r11 = 0xC2B03A2u; UPD(0x0C08CA42u, 1);  /* 0C08CA40 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C08CA42 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C08CA46u, 2);  /* 0C08CA44 mov.l @(disp,pc),Rn */
	IF(0x0C08CA46u); { u32 t_ = r8; PR = 0x0C08CA4Au; W16(r11, r2); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C08CA4Au); }  /* 0C08CA46 jsr @Rn */
L_0C08CA4A: BLKS(0x0C08CA4Au);
	T = (r0 & r0) == 0;  /* 0C08CA4A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08CA70u, 4); goto L_0C08CA70; } UPD(0x0C08CA50u, 1); goto L_0C08CA50; }  /* 0C08CA4C bf/s */
L_0C08CA50: BLKS(0x0C08CA50u);
	r14 += 0xCu;  /* 0C08CA50 add #imm,Rn */
	UPD(0x0C08CA52u, 1);
L_0C08CA52: BLKS(0x0C08CA52u);
	r15 = r14;  /* 0C08CA52 mov Rm,Rn */
	IF(0x0C08CA54u); PR = R32(r15); r15 += 4; UPD(0x0C08CA56u, 2);  /* 0C08CA54 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08CA58u, 1);  /* 0C08CA56 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08CA5Au, 1);  /* 0C08CA58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08CA5Cu, 1);  /* 0C08CA5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08CA5Eu, 1);  /* 0C08CA5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08CA60u, 1);  /* 0C08CA5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08CA62u, 1);  /* 0C08CA60 mov.l @Rm+,Rn */
	IF(0x0C08CA62u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08CA62 rts */
L_0C08CA70: BLKS(0x0C08CA70u);
	r10 = 0xC071740u; UPD(0x0C08CA72u, 1);  /* 0C08CA70 mov.l @(disp,pc),Rn */
	IF(0x0C08CA72u); { u32 t_ = r10; PR = 0x0C08CA76u; r4 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08CA76u); }  /* 0C08CA72 jsr @Rn */
L_0C08CA76: BLKS(0x0C08CA76u);
	T = (r0 & r0) == 0;  /* 0C08CA76 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08CA50u, 4); goto L_0C08CA50; } goto L_0C08CA7C; }  /* 0C08CA78 bt/s */
L_0C08CA7C: BLKS(0x0C08CA7Cu);
	r12 = 0xC28EDFCu; UPD(0x0C08CA7Eu, 2);  /* 0C08CA7C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C08CA80u, 1);  /* 0C08CA7E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C08CA82u, 1);  /* 0C08CA80 mov.w @Rm+,Rn */
	IF(0x0C08CA82u); MACL = r10 * r8;  /* 0C08CA82 mul.l Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C08CA86u, 3);  /* 0C08CA84 mov.w @Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C08CA88u, 1);  /* 0C08CA86 mov.l @(disp,pc),Rn */
	IF(0x0C08CA88u); r8 = MACL;  /* 0C08CA88 sts macl,Rn */
	r8 += r4;  /* 0C08CA8A add Rm,Rn */
	r0 = r3 & 0xFFFF;  /* 0C08CA8C extu.w Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C08CA90u, 4);  /* 0C08CA8E mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C08CA90 mov Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r11); UPD(0x0C08CA94u, 2);  /* 0C08CA92 mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C08CA96u, 1);  /* 0C08CA94 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C08CA96 mov #imm,Rn */
	r7 = 0xC0A8A30u; UPD(0x0C08CA9Au, 2);  /* 0C08CA98 mov.l @(disp,pc),Rn */
	IF(0x0C08CA9Au); W16(r0 + r8, r13); UPD(0x0C08CA9Cu, 1);  /* 0C08CA9A mov.w Rm,@(r0,Rn) */
	r6 = 0xD3000104u; UPD(0x0C08CA9Eu, 1);  /* 0C08CA9C mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C08CA9E add #imm,Rn */
	W32(r8, r6); UPD(0x0C08CAA2u, 2);  /* 0C08CAA0 mov.l Rm,@Rn */
	IF(0x0C08CAA2u); W16(r0 + r8, r13); UPD(0x0C08CAA4u, 1);  /* 0C08CAA2 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0xCu, r11); UPD(0x0C08CAA6u, 1);  /* 0C08CAA4 mov.l Rm,@(disp,Rn) */
	IF(0x0C08CAA6u); { u32 t_ = r7; PR = 0x0C08CAAAu; W32(r8 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08CAAAu); }  /* 0C08CAA6 jsr @Rn */
L_0C08CAAA: BLKS(0x0C08CAAAu);
	r9 = 0xC0722E0u; UPD(0x0C08CAACu, 1);  /* 0C08CAAA mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08CAAC mov Rm,Rn */
	r5 = 0x1600000u; UPD(0x0C08CAB0u, 2);  /* 0C08CAAE mov.l @(disp,pc),Rn */
	IF(0x0C08CAB0u); { u32 t_ = r9; PR = 0x0C08CAB4u; W32(r8 + 0x24u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C08CAB4u); }  /* 0C08CAB0 jsr @Rn */
L_0C08CAB4: BLKS(0x0C08CAB4u);
	r2 = 0xC0A9AE0u; UPD(0x0C08CAB6u, 1);  /* 0C08CAB4 mov.l @(disp,pc),Rn */
	r9 = 0x8Cu; UPD(0x0C08CAB8u, 1);  /* 0C08CAB6 mov.w @(disp,pc),Rn */
	IF(0x0C08CAB8u); { u32 t_ = r2; PR = 0x0C08CABCu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08CABCu); }  /* 0C08CAB8 jsr @Rn */
L_0C08CABC: BLKS(0x0C08CABCu);
	r0 = 0xADu; UPD(0x0C08CABEu, 1);  /* 0C08CABC mov.w @(disp,pc),Rn */
	r4 = 0x13u;  /* 0C08CABE mov #imm,Rn */
	r3 = 0xA8u; UPD(0x0C08CAC2u, 2);  /* 0C08CAC0 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C08CAC2 add Rm,Rn */
	IF(0x0C08CAC4u); W8(r0 + r8, r4); UPD(0x0C08CAC6u, 2);  /* 0C08CAC4 mov.b Rm,@(r0,Rn) */
	r3 += r8;  /* 0C08CAC6 add Rm,Rn */
	r3 += 0x1u;  /* 0C08CAC8 add #imm,Rn */
	r0 = 0xC0A9D30u; UPD(0x0C08CACCu, 3);  /* 0C08CACA mov.l @(disp,pc),Rn */
	W8(r3, r4); UPD(0x0C08CACEu, 1);  /* 0C08CACC mov.b Rm,@Rn */
	r6 = 0xC297460u; UPD(0x0C08CAD0u, 1);  /* 0C08CACE mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08CAD0 mov Rm,Rn */
	r5 = R32(r6); UPD(0x0C08CAD4u, 2);  /* 0C08CAD2 mov.l @Rm,Rn */
	IF(0x0C08CAD4u); { u32 t_ = r0; PR = 0x0C08CAD8u; W32(r14 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C08CAD8u); }  /* 0C08CAD4 jsr @Rn */
L_0C08CAD8: BLKS(0x0C08CAD8u);
	r13 = 0x94u; UPD(0x0C08CADAu, 1);  /* 0C08CAD8 mov.w @(disp,pc),Rn */
	r0 = 0x90u; UPD(0x0C08CADCu, 1);  /* 0C08CADA mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C08CADC add Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C08CAE0u, 2);  /* 0C08CADE mov.l @(disp,Rm),Rn */
	W32(r13, r11); UPD(0x0C08CAE2u, 1);  /* 0C08CAE0 mov.l Rm,@Rn */
	IF(0x0C08CAE2u); W32(r0 + r8, r11); UPD(0x0C08CAE4u, 1);  /* 0C08CAE2 mov.l Rm,@(r0,Rn) */
	r13 = r8;  /* 0C08CAE4 mov Rm,Rn */
	W32(r9, r11); UPD(0x0C08CAE8u, 2);  /* 0C08CAE6 mov.l Rm,@Rn */
	W32(r8 + 0x30u, r11); UPD(0x0C08CAEAu, 1);  /* 0C08CAE8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r11); UPD(0x0C08CAECu, 1);  /* 0C08CAEA mov.l Rm,@(disp,Rn) */
	W32(r14, r11); UPD(0x0C08CAEEu, 1);  /* 0C08CAEC mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C08CAF0u, 1);  /* 0C08CAEE mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C08CAF0 mov #imm,Rn */
	IF(0x0C08CAF2u); ;  /* 0C08CAF2 nop */
	UPD(0x0C08CAF4u, 2);
L_0C08CAF4: BLKS(0x0C08CAF4u);
	r9 = 0xC1A3F20u; UPD(0x0C08CAF6u, 1);  /* 0C08CAF4 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C08CAF8u, 1);  /* 0C08CAF6 mov.w @Rm+,Rn */
	r9 += r11;  /* 0C08CAF8 add Rm,Rn */
	r8 = 0xB4u; UPD(0x0C08CAFCu, 2);  /* 0C08CAFA mov.w @(disp,pc),Rn */
	r9 += 0x4u;  /* 0C08CAFC add #imm,Rn */
	IF(0x0C08CAFEu); MACL = r10 * r8;  /* 0C08CAFE mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C08CB02u, 4);  /* 0C08CB00 mov.w @Rm,Rn */
	r11 += 0x14u;  /* 0C08CB02 add #imm,Rn */
	r1 = 0xC286578u; UPD(0x0C08CB06u, 2);  /* 0C08CB04 mov.l @(disp,pc),Rn */
	IF(0x0C08CB06u); r8 = MACL;  /* 0C08CB06 sts macl,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C08CB0Au, 2);  /* 0C08CB08 mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C08CB0A add Rm,Rn */
	IF(0x0C08CB0Cu); r7 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C08CB0Eu, 2);  /* 0C08CB0C mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C08CB0E add Rm,Rn */
	r8 += 0x7Cu;  /* 0C08CB10 add #imm,Rn */
	W16(r8, r7); UPD(0x0C08CB14u, 3);  /* 0C08CB12 mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C08CB14 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C08CB18u, 2);  /* 0C08CB16 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C08CB18 add #imm,Rn */
	W16(r8, r5); UPD(0x0C08CB1Cu, 2);  /* 0C08CB1A mov.w Rm,@Rn */
	r7 = 0x0u;  /* 0C08CB1C mov #imm,Rn */
	r3 = 0xC2460ACu; UPD(0x0C08CB20u, 2);  /* 0C08CB1E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C08CB20 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C08CB24u, 2);  /* 0C08CB22 mov.w @Rm,Rn */
	r2 = R32(r9); UPD(0x0C08CB26u, 1);  /* 0C08CB24 mov.l @Rm,Rn */
	r6 = r4 & 0xFFFF;  /* 0C08CB26 extu.w Rm,Rn */
	W32(r8, r2); UPD(0x0C08CB2Au, 2);  /* 0C08CB28 mov.l Rm,@Rn */
	r4 = r10;  /* 0C08CB2A mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C08CB2Eu, 2);  /* 0C08CB2C mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A8A30u; UPD(0x0C08CB30u, 1);  /* 0C08CB2E mov.l @(disp,pc),Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C08CB32u, 1);  /* 0C08CB30 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C08CB34u, 1);  /* 0C08CB32 mov.l Rm,@(disp,Rn) */
	IF(0x0C08CB34u); { u32 t_ = r5; PR = 0x0C08CB38u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08CB38u); }  /* 0C08CB34 jsr @Rn */
L_0C08CB38: BLKS(0x0C08CB38u);
	r2 = 0xC2B03A2u; UPD(0x0C08CB3Au, 1);  /* 0C08CB38 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C08CB3A mov Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C08CB3Eu, 2);  /* 0C08CB3C mov.w @Rm,Rn */
	IF(0x0C08CB3Eu); r3 >>= 2;  /* 0C08CB3E shlr2 Rn */
	r4 = 0x86u; UPD(0x0C08CB42u, 2);  /* 0C08CB40 mov.w @(disp,pc),Rn */
	IF(0x0C08CB42u); r3 >>= 2;  /* 0C08CB42 shlr2 Rn */
	IF(0x0C08CB44u); r3 >>= 2;  /* 0C08CB44 shlr2 Rn */
	IF(0x0C08CB46u); W16(r0 + r4, r3); UPD(0x0C08CB48u, 3);  /* 0C08CB46 mov.w Rm,@(r0,Rn) */
	r6 = R32(r13 + 0x24u); UPD(0x0C08CB4Au, 1);  /* 0C08CB48 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C08CB4A mov Rm,Rn */
	r0 = R32(r13 + 0x28u); UPD(0x0C08CB4Eu, 2);  /* 0C08CB4C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C08CB50u, 1);  /* 0C08CB4E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C08CB52u, 1);  /* 0C08CB50 mov.l Rm,@(disp,Rn) */
	r7 = R32(r9 + 0xCu); UPD(0x0C08CB54u, 1);  /* 0C08CB52 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C08CB56u, 1);  /* 0C08CB54 mov.l Rm,@(disp,Rn) */
	r5 = R32(r9 + 0x10u); UPD(0x0C08CB58u, 1);  /* 0C08CB56 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A9AE0u; UPD(0x0C08CB5Au, 1);  /* 0C08CB58 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r5); UPD(0x0C08CB5Cu, 1);  /* 0C08CB5A mov.l Rm,@(disp,Rn) */
	r2 = 0xFFFA0000u; UPD(0x0C08CB5Eu, 1);  /* 0C08CB5C mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C08CB5E add #imm,Rn */
	IF(0x0C08CB60u); { u32 t_ = r10; PR = 0x0C08CB64u; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08CB64u); }  /* 0C08CB60 jsr @Rn */
L_0C08CB64: BLKS(0x0C08CB64u);
	r0 = 0xB0u; UPD(0x0C08CB66u, 1);  /* 0C08CB64 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C08CB66 add #imm,Rn */
	IF(0x0C08CB68u); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C08CB6Au, 2);  /* 0C08CB68 mov.b @(r0,Rm),Rn */
	r10 = 0xAu;  /* 0C08CB6A mov #imm,Rn */
	IF(0x0C08CB6Cu); W8(r0 + r8, r3); UPD(0x0C08CB6Eu, 2);  /* 0C08CB6C mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C08CB70u, 1);  /* 0C08CB6E mov.w @(disp,pc),Rn */
	r7 = 0xACu; UPD(0x0C08CB72u, 1);  /* 0C08CB70 mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C08CB72 add Rm,Rn */
	r8 += r7;  /* 0C08CB74 add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C08CB78u, 3);  /* 0C08CB76 mov.l @(disp,Rm),Rn */
	r7 += r13;  /* 0C08CB78 add Rm,Rn */
	r7 += 0x1u;  /* 0C08CB7A add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C08CB7Eu, 3);  /* 0C08CB7C mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C08CB7E add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C08CB82u, 2);  /* 0C08CB80 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C08CB82 add #imm,Rn */
	W8(r0, r6); UPD(0x0C08CB86u, 2);  /* 0C08CB84 mov.b Rm,@Rn */
	W8(r8, r5); UPD(0x0C08CB88u, 1);  /* 0C08CB86 mov.b Rm,@Rn */
	r9 = R32(r14); UPD(0x0C08CB8Au, 1);  /* 0C08CB88 mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C08CB8A add #imm,Rn */
	r2 = (u32)(s32)(s16)r9;  /* 0C08CB8C exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C08CB90u, 3);  /* 0C08CB8E mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C08CB92u, 1);  /* 0C08CB90 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r10;  /* 0C08CB92 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08CAF4u, 4); goto L_0C08CAF4; } goto L_0C08CB98; }  /* 0C08CB94 bf/s */
L_0C08CB98: BLKS(0x0C08CB98u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C08CA52u, 4); goto L_0C08CA52; }  /* 0C08CB98 bra */
}

void blk_f_0C08CC00(sh3_t *c)
{
	LOCALS;
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
}

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


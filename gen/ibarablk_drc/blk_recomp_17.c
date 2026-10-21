#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C0AA5A0(sh3_t *c)
{
	LOCALS;
L_0C0AA5A0: BLKS(0x0C0AA5A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA5A2u, 1);  /* 0C0AA5A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA5A4u, 1);  /* 0C0AA5A2 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0AA5A6u, 1);  /* 0C0AA5A4 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AA5A6 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA5AAu, 2);  /* 0C0AA5A8 mov.l Rm,@-Rn */
	IF(0x0C0AA5AAu); MACL = r9 * r3;  /* 0C0AA5AA mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA5AEu, 3);  /* 0C0AA5AC mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0AA5B0u, 1);  /* 0C0AA5AE mov.l @(disp,pc),Rn */
	IF(0x0C0AA5B0u); r8 = MACL;  /* 0C0AA5B0 sts macl,Rn */
	IF(0x0C0AA5B2u); r15 -= 4; W32(r15, PR); UPD(0x0C0AA5B4u, 2);  /* 0C0AA5B2 sts.l pr,@-Rn */
	r8 += r0;  /* 0C0AA5B4 add Rm,Rn */
	r2 = R32(r8 + 0x8u); UPD(0x0C0AA5B8u, 2);  /* 0C0AA5B6 mov.l @(disp,Rm),Rn */
	r0 = 0x8u;  /* 0C0AA5B8 mov #imm,Rn */
	r2 += 0xFFFFFFE0u;  /* 0C0AA5BA add #imm,Rn */
	T = r2 > r0;  /* 0C0AA5BC cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AA5C6u, 6); goto L_0C0AA5C6; } goto L_0C0AA5C2; }  /* 0C0AA5BE bf/s */
L_0C0AA5C2: BLKS(0x0C0AA5C2u);
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C0AA6C0u, 4); goto L_0C0AA6C0; }  /* 0C0AA5C2 bra */
L_0C0AA5C6: BLKS(0x0C0AA5C6u);
	r10 = 0xC0A8B50u; UPD(0x0C0AA5C8u, 1);  /* 0C0AA5C6 mov.l @(disp,pc),Rn */
	IF(0x0C0AA5C8u); { u32 t_ = r10; PR = 0x0C0AA5CCu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0AA5CCu); }  /* 0C0AA5C8 jsr @Rn */
L_0C0AA5CC: BLKS(0x0C0AA5CCu);
	IF(0x0C0AA5CCu); T = (s32)r0 >= 0;  /* 0C0AA5CC cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AA5D6u, 4); goto L_0C0AA5D6; } goto L_0C0AA5D2; }  /* 0C0AA5CE bt/s */
L_0C0AA5D2: BLKS(0x0C0AA5D2u);
	{ r4 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0AA6B0u, 4); goto L_0C0AA6B0; }  /* 0C0AA5D2 bra */
L_0C0AA5D6: BLKS(0x0C0AA5D6u);
	r0 = 0xC062780u; UPD(0x0C0AA5D8u, 1);  /* 0C0AA5D6 mov.l @(disp,pc),Rn */
	IF(0x0C0AA5D8u); { u32 t_ = r0; PR = 0x0C0AA5DCu; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AA5DCu); }  /* 0C0AA5D8 jsr @Rn */
L_0C0AA5DC: BLKS(0x0C0AA5DCu);
	T = r0 == 0x2u;  /* 0C0AA5DC cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0AA690u, 4); goto L_0C0AA690; }  /* 0C0AA5DE bt */
L_0C0AA5E0: BLKS(0x0C0AA5E0u);
	r5 = 0x2u;  /* 0C0AA5E0 mov #imm,Rn */
	T = (s32)r0 > (s32)r5;  /* 0C0AA5E2 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0AA660u, 5); goto L_0C0AA660; } goto L_0C0AA5E8; }  /* 0C0AA5E4 bt/s */
L_0C0AA5E8: BLKS(0x0C0AA5E8u);
	T = r0 == 0x1u;  /* 0C0AA5E8 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0AA640u, 5); goto L_0C0AA640; }  /* 0C0AA5EA bt */
L_0C0AA5EC: BLKS(0x0C0AA5ECu);
	r4 = 0xB4u; UPD(0x0C0AA5EEu, 1);  /* 0C0AA5EC mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AA5EE add #imm,Rn */
	IF(0x0C0AA5F0u); MACL = r9 * r4;  /* 0C0AA5F0 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AA5F4u, 4);  /* 0C0AA5F2 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0AA5F4 mov #imm,Rn */
	IF(0x0C0AA5F6u); r8 = MACL;  /* 0C0AA5F6 sts macl,Rn */
	r8 += r0;  /* 0C0AA5F8 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AA5FCu, 4);  /* 0C0AA5FA mov.w @(disp,pc),Rn */
	IF(0x0C0AA5FCu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AA5FEu, 1);  /* 0C0AA5FC mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C0AA5FE extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AA602u, 2);  /* 0C0AA600 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AA602 add #imm,Rn */
	IF(0x0C0AA604u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AA606u, 2);  /* 0C0AA604 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AA606 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0AA60Au, 2);  /* 0C0AA608 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0AA60Cu, 1);  /* 0C0AA60A mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0AA60Eu, 1);  /* 0C0AA60C mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AA610u, 1);  /* 0C0AA60E mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0AA612u, 1);  /* 0C0AA610 mov.l @(disp,Rm),Rn */
L_0C0AA612: BLKS(0x0C0AA612u);
	IF(0x0C0AA612u); { u32 t_ = r0; PR = 0x0C0AA616u; IF(0x0C0AA614u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0AA616u); }  /* 0C0AA612 jsr @Rn */
L_0C0AA616: BLKS(0x0C0AA616u);
	r6 = 0xB4u; UPD(0x0C0AA618u, 1);  /* 0C0AA616 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0AA618 add #imm,Rn */
	IF(0x0C0AA61Au); MACL = r10 * r6;  /* 0C0AA61A mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0AA61Eu, 4);  /* 0C0AA61C mov.l @(disp,pc),Rn */
	IF(0x0C0AA61Eu); r10 = MACL;  /* 0C0AA61E sts macl,Rn */
	r10 += r8;  /* 0C0AA620 add Rm,Rn */
	r7 = R32(r10); UPD(0x0C0AA624u, 3);  /* 0C0AA622 mov.l @Rm,Rn */
	IF(0x0C0AA624u); MACL = r9 * r6;  /* 0C0AA624 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C0AA628u, 3);  /* 0C0AA626 mov.l @(disp,pc),Rn */
	r7 |= r1;  /* 0C0AA628 or Rm,Rn */
	W32(r10, r7); UPD(0x0C0AA62Cu, 2);  /* 0C0AA62A mov.l Rm,@Rn */
	IF(0x0C0AA62Cu); r0 = MACL;  /* 0C0AA62C sts macl,Rn */
	r9 = 0x0u;  /* 0C0AA62E mov #imm,Rn */
	IF(0x0C0AA630u); W32(r0 + r8, r9); UPD(0x0C0AA632u, 3);  /* 0C0AA630 mov.l Rm,@(r0,Rn) */
L_0C0AA632: BLKS(0x0C0AA632u);
	r15 = r14;  /* 0C0AA632 mov Rm,Rn */
	IF(0x0C0AA634u); PR = R32(r15); r15 += 4; UPD(0x0C0AA636u, 2);  /* 0C0AA634 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AA638u, 1);  /* 0C0AA636 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AA63Au, 1);  /* 0C0AA638 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AA63Cu, 1);  /* 0C0AA63A mov.l @Rm+,Rn */
	IF(0x0C0AA63Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AA63C rts */
L_0C0AA640: BLKS(0x0C0AA640u);
	r0 = 0xB0u; UPD(0x0C0AA642u, 1);  /* 0C0AA640 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AA642 add #imm,Rn */
	IF(0x0C0AA644u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AA646u, 2);  /* 0C0AA644 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C0AA646 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AA64Au, 2);  /* 0C0AA648 mov.l Rm,@Rn */
	r0 = r8;  /* 0C0AA64A mov Rm,Rn */
	r7 = 0xA9u; UPD(0x0C0AA64Eu, 2);  /* 0C0AA64C mov.w @(disp,pc),Rn */
	IF(0x0C0AA64Eu); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0AA650u, 1);  /* 0C0AA64E mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0AA650 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0AA654u, 2);  /* 0C0AA652 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0AA656u, 1);  /* 0C0AA654 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0AA656 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0AA65Au, 2);  /* 0C0AA658 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AA65Cu, 1);  /* 0C0AA65A mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AA612u, 3); goto L_0C0AA612; }  /* 0C0AA65C bra */
L_0C0AA660: BLKS(0x0C0AA660u);
	if (!T) { UPD(0x0C0AA5ECu, 3); goto L_0C0AA5EC; }  /* 0C0AA660 bf */
L_0C0AA662: BLKS(0x0C0AA662u);
	r15 += 0xFFFFFFF8u;  /* 0C0AA662 add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0AA666u, 2);  /* 0C0AA664 mov.w @(disp,pc),Rn */
	IF(0x0C0AA666u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AA668u, 1);  /* 0C0AA666 mov.b @(r0,Rm),Rn */
	r0 = r5 & 0xFF;  /* 0C0AA668 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0AA66Cu, 2);  /* 0C0AA66A mov.l Rm,@Rn */
	r5 = 0x2u;  /* 0C0AA66C mov #imm,Rn */
	r4 = 0xA9u; UPD(0x0C0AA670u, 2);  /* 0C0AA66E mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0AA670 mov Rm,Rn */
	IF(0x0C0AA672u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0AA674u, 2);  /* 0C0AA672 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C0AA674 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0AA678u, 2);  /* 0C0AA676 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0AA67Au, 1);  /* 0C0AA678 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0AA67Cu, 1);  /* 0C0AA67A mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AA67Eu, 1);  /* 0C0AA67C mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AA612u, 3); goto L_0C0AA612; }  /* 0C0AA67E bra */
L_0C0AA690: BLKS(0x0C0AA690u);
	r0 = 0xB0u; UPD(0x0C0AA692u, 1);  /* 0C0AA690 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AA692 add #imm,Rn */
	IF(0x0C0AA694u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AA696u, 2);  /* 0C0AA694 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AA696 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0AA69Au, 2);  /* 0C0AA698 mov.l Rm,@Rn */
	r0 = r8;  /* 0C0AA69A mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C0AA69Eu, 2);  /* 0C0AA69C mov.w @(disp,pc),Rn */
	IF(0x0C0AA69Eu); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0AA6A0u, 1);  /* 0C0AA69E mov.b @(r0,Rm),Rn */
	r0 = r4 & 0xFF;  /* 0C0AA6A0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AA6A4u, 2);  /* 0C0AA6A2 mov.l Rm,@(disp,Rn) */
	r5 = 0x2u;  /* 0C0AA6A4 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0AA6A8u, 2);  /* 0C0AA6A6 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AA6AAu, 1);  /* 0C0AA6A8 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BFE70u; UPD(0x0C0AA6ACu, 1);  /* 0C0AA6AA mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AA612u, 3); goto L_0C0AA612; }  /* 0C0AA6AC bra */
L_0C0AA6B0: BLKS(0x0C0AA6B0u);
	{ W32(r8, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C0AA632u, 3); goto L_0C0AA632; }  /* 0C0AA6B0 bra */
L_0C0AA6C0: BLKS(0x0C0AA6C0u);
	r2 = 0xC0A9170u; UPD(0x0C0AA6C2u, 1);  /* 0C0AA6C0 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0AA6C2 mov Rm,Rn */
	IF(0x0C0AA6C4u); PR = R32(r15); r15 += 4; UPD(0x0C0AA6C6u, 2);  /* 0C0AA6C4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AA6C8u, 1);  /* 0C0AA6C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AA6CAu, 1);  /* 0C0AA6C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AA6CCu, 1);  /* 0C0AA6CA mov.l @Rm+,Rn */
	IF(0x0C0AA6CCu); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9170u: TAIL(blk_f_0C0A9170); default: JUMPD(tv_); } }  /* 0C0AA6CC jmp @Rn */
}

void blk_f_0C0AA700(sh3_t *c)
{
	LOCALS;
L_0C0AA700: BLKS(0x0C0AA700u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA702u, 1);  /* 0C0AA700 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0AA702 mov #imm,Rn */
	IF(0x0C0AA704u); r15 -= 4; W32(r15, PR); UPD(0x0C0AA706u, 2);  /* 0C0AA704 sts.l pr,@-Rn */
	r4 = 0xC2B1811u; UPD(0x0C0AA708u, 1);  /* 0C0AA706 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AA708 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AA70Cu, 2);  /* 0C0AA70A mov.b @Rm,Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0AA70Eu, 1);  /* 0C0AA70C mov.l @(disp,pc),Rn */
	IF(0x0C0AA70Eu); MACL = r6 * r2;  /* 0C0AA70E mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AA712u, 3);  /* 0C0AA710 mov.l @Rm,Rn */
	r7 = 0xC2B0378u; UPD(0x0C0AA714u, 1);  /* 0C0AA712 mov.l @(disp,pc),Rn */
	IF(0x0C0AA714u); r3 = MACL;  /* 0C0AA714 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AA718u, 2);  /* 0C0AA716 mov.w @Rm+,Rn */
	r0 = 0xC286318u; UPD(0x0C0AA71Au, 1);  /* 0C0AA718 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0AA71Cu, 1);  /* 0C0AA71A mov.w Rm,@Rn */
	r0 += r3;  /* 0C0AA71C add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0AA720u, 2);  /* 0C0AA71E mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0AA722u, 1);  /* 0C0AA720 mov.w @Rm+,Rn */
	IF(0x0C0AA722u); r0 <<= 2;  /* 0C0AA722 shll2 Rn */
	IF(0x0C0AA724u); r6 = R32(r0 + r7); UPD(0x0C0AA726u, 2);  /* 0C0AA724 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AA728u, 1);  /* 0C0AA726 mov.w @Rm+,Rn */
	r0 = 0xC2B03A2u; UPD(0x0C0AA72Au, 1);  /* 0C0AA728 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0AA72Cu, 1);  /* 0C0AA72A mov.w Rm,@Rn */
	r2 = 0xC297460u; UPD(0x0C0AA72Eu, 1);  /* 0C0AA72C mov.l @(disp,pc),Rn */
	r0 = 0xC0813E0u; UPD(0x0C0AA730u, 1);  /* 0C0AA72E mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0AA732u, 1);  /* 0C0AA730 mov.l Rm,@Rn */
	IF(0x0C0AA732u); { u32 t_ = r0; PR = 0x0C0AA736u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0813E0, 0x0C0813E0u, 0x0C0AA736u); }  /* 0C0AA732 jsr @Rn */
L_0C0AA736: BLKS(0x0C0AA736u);
	r15 = r14;  /* 0C0AA736 mov Rm,Rn */
	IF(0x0C0AA738u); PR = R32(r15); r15 += 4; UPD(0x0C0AA73Au, 2);  /* 0C0AA738 lds.l @Rn+,pr */
	IF(0x0C0AA73Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AA73A rts */
}

void blk_f_0C0AA950(sh3_t *c)
{
	LOCALS;
L_0C0AA950: BLKS(0x0C0AA950u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA952u, 1);  /* 0C0AA950 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA954u, 1);  /* 0C0AA952 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0AA956u, 1);  /* 0C0AA954 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AA956 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA95Au, 2);  /* 0C0AA958 mov.l Rm,@-Rn */
	IF(0x0C0AA95Au); MACL = r9 * r3;  /* 0C0AA95A mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AA95Eu, 3);  /* 0C0AA95C mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0AA960u, 1);  /* 0C0AA95E mov.l @(disp,pc),Rn */
	IF(0x0C0AA960u); r8 = MACL;  /* 0C0AA960 sts macl,Rn */
	IF(0x0C0AA962u); r15 -= 4; W32(r15, PR); UPD(0x0C0AA964u, 2);  /* 0C0AA962 sts.l pr,@-Rn */
	r8 += r0;  /* 0C0AA964 add Rm,Rn */
	r2 = R32(r8 + 0x8u); UPD(0x0C0AA968u, 2);  /* 0C0AA966 mov.l @(disp,Rm),Rn */
	r0 = 0x6u;  /* 0C0AA968 mov #imm,Rn */
	r2 += 0xFFFFFFE0u;  /* 0C0AA96A add #imm,Rn */
	T = r2 > r0;  /* 0C0AA96C cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AA976u, 6); goto L_0C0AA976; } goto L_0C0AA972; }  /* 0C0AA96E bf/s */
L_0C0AA972: BLKS(0x0C0AA972u);
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C0AAA70u, 4); goto L_0C0AAA70; }  /* 0C0AA972 bra */
L_0C0AA976: BLKS(0x0C0AA976u);
	r10 = 0xC0A8B50u; UPD(0x0C0AA978u, 1);  /* 0C0AA976 mov.l @(disp,pc),Rn */
	IF(0x0C0AA978u); { u32 t_ = r10; PR = 0x0C0AA97Cu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0AA97Cu); }  /* 0C0AA978 jsr @Rn */
L_0C0AA97C: BLKS(0x0C0AA97Cu);
	IF(0x0C0AA97Cu); T = (s32)r0 >= 0;  /* 0C0AA97C cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AA986u, 4); goto L_0C0AA986; } goto L_0C0AA982; }  /* 0C0AA97E bt/s */
L_0C0AA982: BLKS(0x0C0AA982u);
	{ r4 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0AAA60u, 4); goto L_0C0AAA60; }  /* 0C0AA982 bra */
L_0C0AA986: BLKS(0x0C0AA986u);
	r0 = 0xC062780u; UPD(0x0C0AA988u, 1);  /* 0C0AA986 mov.l @(disp,pc),Rn */
	IF(0x0C0AA988u); { u32 t_ = r0; PR = 0x0C0AA98Cu; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AA98Cu); }  /* 0C0AA988 jsr @Rn */
L_0C0AA98C: BLKS(0x0C0AA98Cu);
	T = r0 == 0x2u;  /* 0C0AA98C cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0AAA40u, 4); goto L_0C0AAA40; }  /* 0C0AA98E bt */
L_0C0AA990: BLKS(0x0C0AA990u);
	r6 = 0x2u;  /* 0C0AA990 mov #imm,Rn */
	T = (s32)r0 > (s32)r6;  /* 0C0AA992 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0AAA10u, 5); goto L_0C0AAA10; } goto L_0C0AA998; }  /* 0C0AA994 bt/s */
L_0C0AA998: BLKS(0x0C0AA998u);
	T = r0 == 0x1u;  /* 0C0AA998 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0AA9F0u, 5); goto L_0C0AA9F0; }  /* 0C0AA99A bt */
L_0C0AA99C: BLKS(0x0C0AA99Cu);
	r4 = 0xB4u; UPD(0x0C0AA99Eu, 1);  /* 0C0AA99C mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AA99E add #imm,Rn */
	IF(0x0C0AA9A0u); MACL = r9 * r4;  /* 0C0AA9A0 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AA9A4u, 4);  /* 0C0AA9A2 mov.l @(disp,pc),Rn */
	IF(0x0C0AA9A4u); r8 = MACL;  /* 0C0AA9A4 sts macl,Rn */
	r8 += r0;  /* 0C0AA9A6 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AA9AAu, 3);  /* 0C0AA9A8 mov.w @(disp,pc),Rn */
	IF(0x0C0AA9AAu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AA9ACu, 1);  /* 0C0AA9AA mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C0AA9AC extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0AA9B0u, 2);  /* 0C0AA9AE mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AA9B0 add #imm,Rn */
	IF(0x0C0AA9B2u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AA9B4u, 2);  /* 0C0AA9B2 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C0AA9B4 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0AA9B6 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0AA9BAu, 3);  /* 0C0AA9B8 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0AA9BCu, 1);  /* 0C0AA9BA mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0AA9BEu, 1);  /* 0C0AA9BC mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AA9C0u, 1);  /* 0C0AA9BE mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0AA9C2u, 1);  /* 0C0AA9C0 mov.l @(disp,Rm),Rn */
L_0C0AA9C2: BLKS(0x0C0AA9C2u);
	IF(0x0C0AA9C2u); { u32 t_ = r0; PR = 0x0C0AA9C6u; IF(0x0C0AA9C4u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0AA9C6u); }  /* 0C0AA9C2 jsr @Rn */
L_0C0AA9C6: BLKS(0x0C0AA9C6u);
	r5 = 0xB4u; UPD(0x0C0AA9C8u, 1);  /* 0C0AA9C6 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0AA9C8 add #imm,Rn */
	IF(0x0C0AA9CAu); MACL = r10 * r5;  /* 0C0AA9CA mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0AA9CEu, 4);  /* 0C0AA9CC mov.l @(disp,pc),Rn */
	IF(0x0C0AA9CEu); r10 = MACL;  /* 0C0AA9CE sts macl,Rn */
	r10 += r8;  /* 0C0AA9D0 add Rm,Rn */
	r7 = R32(r10); UPD(0x0C0AA9D4u, 3);  /* 0C0AA9D2 mov.l @Rm,Rn */
	IF(0x0C0AA9D4u); MACL = r9 * r5;  /* 0C0AA9D4 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C0AA9D8u, 3);  /* 0C0AA9D6 mov.l @(disp,pc),Rn */
	r7 |= r1;  /* 0C0AA9D8 or Rm,Rn */
	W32(r10, r7); UPD(0x0C0AA9DCu, 2);  /* 0C0AA9DA mov.l Rm,@Rn */
	IF(0x0C0AA9DCu); r0 = MACL;  /* 0C0AA9DC sts macl,Rn */
	r9 = 0x0u;  /* 0C0AA9DE mov #imm,Rn */
	IF(0x0C0AA9E0u); W32(r0 + r8, r9); UPD(0x0C0AA9E2u, 3);  /* 0C0AA9E0 mov.l Rm,@(r0,Rn) */
L_0C0AA9E2: BLKS(0x0C0AA9E2u);
	r15 = r14;  /* 0C0AA9E2 mov Rm,Rn */
	IF(0x0C0AA9E4u); PR = R32(r15); r15 += 4; UPD(0x0C0AA9E6u, 2);  /* 0C0AA9E4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AA9E8u, 1);  /* 0C0AA9E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AA9EAu, 1);  /* 0C0AA9E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AA9ECu, 1);  /* 0C0AA9EA mov.l @Rm+,Rn */
	IF(0x0C0AA9ECu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AA9EC rts */
L_0C0AA9F0: BLKS(0x0C0AA9F0u);
	r0 = 0xB0u; UPD(0x0C0AA9F2u, 1);  /* 0C0AA9F0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AA9F2 add #imm,Rn */
	IF(0x0C0AA9F4u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AA9F6u, 2);  /* 0C0AA9F4 mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C0AA9F6 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0AA9FAu, 2);  /* 0C0AA9F8 mov.l Rm,@Rn */
	r0 = r8;  /* 0C0AA9FA mov Rm,Rn */
	r2 = 0xA9u; UPD(0x0C0AA9FEu, 2);  /* 0C0AA9FC mov.w @(disp,pc),Rn */
	r5 = 0xCu;  /* 0C0AA9FE mov #imm,Rn */
	IF(0x0C0AAA00u); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0AAA02u, 2);  /* 0C0AAA00 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AAA02 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0AAA06u, 2);  /* 0C0AAA04 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0AAA08u, 1);  /* 0C0AAA06 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0AAA0Au, 1);  /* 0C0AAA08 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AAA0Cu, 1);  /* 0C0AAA0A mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AA9C2u, 3); goto L_0C0AA9C2; }  /* 0C0AAA0C bra */
L_0C0AAA10: BLKS(0x0C0AAA10u);
	if (!T) { UPD(0x0C0AA99Cu, 3); goto L_0C0AA99C; }  /* 0C0AAA10 bf */
L_0C0AAA12: BLKS(0x0C0AAA12u);
	r15 += 0xFFFFFFF8u;  /* 0C0AAA12 add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0AAA16u, 2);  /* 0C0AAA14 mov.w @(disp,pc),Rn */
	IF(0x0C0AAA16u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AAA18u, 1);  /* 0C0AAA16 mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C0AAA18 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0AAA1Cu, 2);  /* 0C0AAA1A mov.l Rm,@Rn */
	r4 = 0xA9u; UPD(0x0C0AAA1Eu, 1);  /* 0C0AAA1C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0AAA1E mov Rm,Rn */
	IF(0x0C0AAA20u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0AAA22u, 2);  /* 0C0AAA20 mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C0AAA22 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0AAA26u, 2);  /* 0C0AAA24 mov.l Rm,@(disp,Rn) */
	r5 = 0xCu;  /* 0C0AAA26 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0AAA2Au, 2);  /* 0C0AAA28 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AAA2Cu, 1);  /* 0C0AAA2A mov.l @(disp,Rm),Rn */
	r0 = 0xC0BFD30u; UPD(0x0C0AAA2Eu, 1);  /* 0C0AAA2C mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AA9C2u, 3); goto L_0C0AA9C2; }  /* 0C0AAA2E bra */
L_0C0AAA40: BLKS(0x0C0AAA40u);
	r0 = 0xB0u; UPD(0x0C0AAA42u, 1);  /* 0C0AAA40 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AAA42 add #imm,Rn */
	IF(0x0C0AAA44u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AAA46u, 2);  /* 0C0AAA44 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C0AAA46 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0AAA48 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0AAA4Cu, 3);  /* 0C0AAA4A mov.l Rm,@Rn */
	r0 = r8;  /* 0C0AAA4C mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C0AAA50u, 2);  /* 0C0AAA4E mov.w @(disp,pc),Rn */
	IF(0x0C0AAA50u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0AAA52u, 1);  /* 0C0AAA50 mov.b @(r0,Rm),Rn */
	r0 = r4 & 0xFF;  /* 0C0AAA52 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AAA56u, 2);  /* 0C0AAA54 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C0AAA58u, 1);  /* 0C0AAA56 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0AAA5Au, 1);  /* 0C0AAA58 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AAA5Cu, 1);  /* 0C0AAA5A mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AA9C2u, 3); goto L_0C0AA9C2; }  /* 0C0AAA5C bra */
L_0C0AAA60: BLKS(0x0C0AAA60u);
	{ W32(r8, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C0AA9E2u, 3); goto L_0C0AA9E2; }  /* 0C0AAA60 bra */
L_0C0AAA70: BLKS(0x0C0AAA70u);
	r5 = 0xC0A9240u; UPD(0x0C0AAA72u, 1);  /* 0C0AAA70 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0AAA72 mov Rm,Rn */
	IF(0x0C0AAA74u); PR = R32(r15); r15 += 4; UPD(0x0C0AAA76u, 2);  /* 0C0AAA74 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AAA78u, 1);  /* 0C0AAA76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AAA7Au, 1);  /* 0C0AAA78 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AAA7Cu, 1);  /* 0C0AAA7A mov.l @Rm+,Rn */
	IF(0x0C0AAA7Cu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9240u: TAIL(blk_f_0C0A9240); default: JUMPD(tv_); } }  /* 0C0AAA7C jmp @Rn */
}

void blk_f_0C0AAB90(sh3_t *c)
{
	LOCALS;
L_0C0AAB90: BLKS(0x0C0AAB90u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AAB92u, 1);  /* 0C0AAB90 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0AAB92 mov #imm,Rn */
	IF(0x0C0AAB94u); r15 -= 4; W32(r15, PR); UPD(0x0C0AAB96u, 2);  /* 0C0AAB94 sts.l pr,@-Rn */
	r4 = 0xC2B1811u; UPD(0x0C0AAB98u, 1);  /* 0C0AAB96 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AAB98 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AAB9Cu, 2);  /* 0C0AAB9A mov.b @Rm,Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0AAB9Eu, 1);  /* 0C0AAB9C mov.l @(disp,pc),Rn */
	IF(0x0C0AAB9Eu); MACL = r6 * r2;  /* 0C0AAB9E mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AABA2u, 3);  /* 0C0AABA0 mov.l @Rm,Rn */
	r7 = 0xC2B0378u; UPD(0x0C0AABA4u, 1);  /* 0C0AABA2 mov.l @(disp,pc),Rn */
	IF(0x0C0AABA4u); r3 = MACL;  /* 0C0AABA4 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AABA8u, 2);  /* 0C0AABA6 mov.w @Rm+,Rn */
	r0 = 0xC286318u; UPD(0x0C0AABAAu, 1);  /* 0C0AABA8 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0AABACu, 1);  /* 0C0AABAA mov.w Rm,@Rn */
	r0 += r3;  /* 0C0AABAC add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0AABB0u, 2);  /* 0C0AABAE mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0AABB2u, 1);  /* 0C0AABB0 mov.w @Rm+,Rn */
	IF(0x0C0AABB2u); r0 <<= 2;  /* 0C0AABB2 shll2 Rn */
	IF(0x0C0AABB4u); r6 = R32(r0 + r7); UPD(0x0C0AABB6u, 2);  /* 0C0AABB4 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AABB8u, 1);  /* 0C0AABB6 mov.w @Rm+,Rn */
	r0 = 0xC2B03A2u; UPD(0x0C0AABBAu, 1);  /* 0C0AABB8 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0AABBCu, 1);  /* 0C0AABBA mov.w Rm,@Rn */
	r2 = 0xC297460u; UPD(0x0C0AABBEu, 1);  /* 0C0AABBC mov.l @(disp,pc),Rn */
	r0 = 0xC0822C0u; UPD(0x0C0AABC0u, 1);  /* 0C0AABBE mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0AABC2u, 1);  /* 0C0AABC0 mov.l Rm,@Rn */
	IF(0x0C0AABC2u); { u32 t_ = r0; PR = 0x0C0AABC6u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0822C0, 0x0C0822C0u, 0x0C0AABC6u); }  /* 0C0AABC2 jsr @Rn */
L_0C0AABC6: BLKS(0x0C0AABC6u);
	r15 = r14;  /* 0C0AABC6 mov Rm,Rn */
	IF(0x0C0AABC8u); PR = R32(r15); r15 += 4; UPD(0x0C0AABCAu, 2);  /* 0C0AABC8 lds.l @Rn+,pr */
	IF(0x0C0AABCAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AABCA rts */
}

void blk_f_0C0AABF0(sh3_t *c)
{
	LOCALS;
L_0C0AABF0: BLKS(0x0C0AABF0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AABF2u, 1);  /* 0C0AABF0 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0AABF2 mov #imm,Rn */
	IF(0x0C0AABF4u); r15 -= 4; W32(r15, PR); UPD(0x0C0AABF6u, 2);  /* 0C0AABF4 sts.l pr,@-Rn */
	r4 = 0xC2B1811u; UPD(0x0C0AABF8u, 1);  /* 0C0AABF6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AABF8 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AABFCu, 2);  /* 0C0AABFA mov.b @Rm,Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0AABFEu, 1);  /* 0C0AABFC mov.l @(disp,pc),Rn */
	IF(0x0C0AABFEu); MACL = r6 * r2;  /* 0C0AABFE mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AAC02u, 3);  /* 0C0AAC00 mov.l @Rm,Rn */
	r7 = 0xC2B0378u; UPD(0x0C0AAC04u, 1);  /* 0C0AAC02 mov.l @(disp,pc),Rn */
	IF(0x0C0AAC04u); r3 = MACL;  /* 0C0AAC04 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AAC08u, 2);  /* 0C0AAC06 mov.w @Rm+,Rn */
	r0 = 0xC286318u; UPD(0x0C0AAC0Au, 1);  /* 0C0AAC08 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0AAC0Cu, 1);  /* 0C0AAC0A mov.w Rm,@Rn */
	r0 += r3;  /* 0C0AAC0C add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0AAC10u, 2);  /* 0C0AAC0E mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0AAC12u, 1);  /* 0C0AAC10 mov.w @Rm+,Rn */
	IF(0x0C0AAC12u); r0 <<= 2;  /* 0C0AAC12 shll2 Rn */
	IF(0x0C0AAC14u); r6 = R32(r0 + r7); UPD(0x0C0AAC16u, 2);  /* 0C0AAC14 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AAC18u, 1);  /* 0C0AAC16 mov.w @Rm+,Rn */
	r0 = 0xC2B03A2u; UPD(0x0C0AAC1Au, 1);  /* 0C0AAC18 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0AAC1Cu, 1);  /* 0C0AAC1A mov.w Rm,@Rn */
	r2 = 0xC297460u; UPD(0x0C0AAC1Eu, 1);  /* 0C0AAC1C mov.l @(disp,pc),Rn */
	r0 = 0xC0826A0u; UPD(0x0C0AAC20u, 1);  /* 0C0AAC1E mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0AAC22u, 1);  /* 0C0AAC20 mov.l Rm,@Rn */
	IF(0x0C0AAC22u); { u32 t_ = r0; PR = 0x0C0AAC26u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0826A0, 0x0C0826A0u, 0x0C0AAC26u); }  /* 0C0AAC22 jsr @Rn */
L_0C0AAC26: BLKS(0x0C0AAC26u);
	r15 = r14;  /* 0C0AAC26 mov Rm,Rn */
	IF(0x0C0AAC28u); PR = R32(r15); r15 += 4; UPD(0x0C0AAC2Au, 2);  /* 0C0AAC28 lds.l @Rn+,pr */
	IF(0x0C0AAC2Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AAC2A rts */
}

void blk_f_0C0AB3D0(sh3_t *c)
{
	LOCALS;
L_0C0AB3D0: BLKS(0x0C0AB3D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB3D2u, 1);  /* 0C0AB3D0 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C0AB3D4u, 1);  /* 0C0AB3D2 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0AB3D4 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB3D8u, 2);  /* 0C0AB3D6 mov.l Rm,@-Rn */
	IF(0x0C0AB3D8u); MACL = r8 * r0;  /* 0C0AB3D8 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB3DCu, 3);  /* 0C0AB3DA mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0AB3DEu, 1);  /* 0C0AB3DC mov.l @(disp,pc),Rn */
	IF(0x0C0AB3DEu); r9 = MACL;  /* 0C0AB3DE sts macl,Rn */
	IF(0x0C0AB3E0u); r15 -= 4; W32(r15, PR); UPD(0x0C0AB3E2u, 2);  /* 0C0AB3E0 sts.l pr,@-Rn */
	r9 += r0;  /* 0C0AB3E2 add Rm,Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C0AB3E6u, 2);  /* 0C0AB3E4 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0AB3E6 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AB3F0u, 4); goto L_0C0AB3F0; } goto L_0C0AB3EC; }  /* 0C0AB3E8 bf/s */
L_0C0AB3EC: BLKS(0x0C0AB3ECu);
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C0AB560u, 4); goto L_0C0AB560; }  /* 0C0AB3EC bra */
L_0C0AB3F0: BLKS(0x0C0AB3F0u);
	T = r0 == 0x1u;  /* 0C0AB3F0 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0AB3FAu, 4); goto L_0C0AB3FA; }  /* 0C0AB3F2 bf */
L_0C0AB3F4: BLKS(0x0C0AB3F4u);
	r15 += 0xFFFFFFF8u;  /* 0C0AB3F4 add #imm,Rn */
	{ IF(0x0C0AB3F8u); ; /* slot nop */ UPD(0x0C0AB520u, 4); goto L_0C0AB520; }  /* 0C0AB3F6 bra */
L_0C0AB3FA: BLKS(0x0C0AB3FAu);
	r9 = 0xC0A8B50u; UPD(0x0C0AB3FCu, 1);  /* 0C0AB3FA mov.l @(disp,pc),Rn */
	IF(0x0C0AB3FCu); { u32 t_ = r9; PR = 0x0C0AB400u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0AB400u); }  /* 0C0AB3FC jsr @Rn */
L_0C0AB400: BLKS(0x0C0AB400u);
	IF(0x0C0AB400u); T = (s32)r0 >= 0;  /* 0C0AB400 cmp/pz Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AB40Au, 4); goto L_0C0AB40A; } goto L_0C0AB406; }  /* 0C0AB402 bt/s */
L_0C0AB406: BLKS(0x0C0AB406u);
	{ r2 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0AB510u, 4); goto L_0C0AB510; }  /* 0C0AB406 bra */
L_0C0AB40A: BLKS(0x0C0AB40Au);
	r0 = 0xC062780u; UPD(0x0C0AB40Cu, 1);  /* 0C0AB40A mov.l @(disp,pc),Rn */
	IF(0x0C0AB40Cu); { u32 t_ = r0; PR = 0x0C0AB410u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AB410u); }  /* 0C0AB40C jsr @Rn */
L_0C0AB410: BLKS(0x0C0AB410u);
	T = r0 == 0x2u;  /* 0C0AB410 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0AB4E0u, 4); goto L_0C0AB4E0; }  /* 0C0AB412 bt */
L_0C0AB414: BLKS(0x0C0AB414u);
	r5 = 0x2u;  /* 0C0AB414 mov #imm,Rn */
	T = (s32)r0 > (s32)r5;  /* 0C0AB416 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0AB4B0u, 5); goto L_0C0AB4B0; } goto L_0C0AB41C; }  /* 0C0AB418 bt/s */
L_0C0AB41C: BLKS(0x0C0AB41Cu);
	T = r0 == 0x1u;  /* 0C0AB41C cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0AB480u, 5); goto L_0C0AB480; }  /* 0C0AB41E bt */
L_0C0AB420: BLKS(0x0C0AB420u);
	r5 = 0xB4u; UPD(0x0C0AB422u, 1);  /* 0C0AB420 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AB422 add #imm,Rn */
	IF(0x0C0AB424u); MACL = r8 * r5;  /* 0C0AB424 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AB428u, 4);  /* 0C0AB426 mov.l @(disp,pc),Rn */
	IF(0x0C0AB428u); r3 = MACL;  /* 0C0AB428 sts macl,Rn */
	r3 += r0;  /* 0C0AB42A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AB42Eu, 3);  /* 0C0AB42C mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0AB42E mov #imm,Rn */
	IF(0x0C0AB430u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB432u, 2);  /* 0C0AB430 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0AB432 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AB436u, 2);  /* 0C0AB434 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AB436 add #imm,Rn */
	IF(0x0C0AB438u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB43Au, 2);  /* 0C0AB438 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AB43A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0AB43Eu, 2);  /* 0C0AB43C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0AB440u, 1);  /* 0C0AB43E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AB442u, 1);  /* 0C0AB440 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AB444u, 1);  /* 0C0AB442 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0AB446u, 1);  /* 0C0AB444 mov.l @(disp,Rm),Rn */
L_0C0AB446: BLKS(0x0C0AB446u);
	IF(0x0C0AB446u); { u32 t_ = r0; PR = 0x0C0AB44Au; IF(0x0C0AB448u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0AB44Au); }  /* 0C0AB446 jsr @Rn */
L_0C0AB44A: BLKS(0x0C0AB44Au);
	r6 = 0xB4u; UPD(0x0C0AB44Cu, 1);  /* 0C0AB44A mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0AB44C add #imm,Rn */
	IF(0x0C0AB44Eu); MACL = r9 * r6;  /* 0C0AB44E mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0AB452u, 4);  /* 0C0AB450 mov.l @(disp,pc),Rn */
	IF(0x0C0AB452u); r9 = MACL;  /* 0C0AB452 sts macl,Rn */
	r9 += r4;  /* 0C0AB454 add Rm,Rn */
	r3 = R32(r9); UPD(0x0C0AB458u, 3);  /* 0C0AB456 mov.l @Rm,Rn */
	IF(0x0C0AB458u); MACL = r8 * r6;  /* 0C0AB458 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C0AB45Cu, 3);  /* 0C0AB45A mov.l @(disp,pc),Rn */
	r3 |= r1;  /* 0C0AB45C or Rm,Rn */
	W32(r9, r3); UPD(0x0C0AB460u, 2);  /* 0C0AB45E mov.l Rm,@Rn */
	IF(0x0C0AB460u); r0 = MACL;  /* 0C0AB460 sts macl,Rn */
	r8 = 0x0u;  /* 0C0AB462 mov #imm,Rn */
	IF(0x0C0AB464u); W32(r0 + r4, r8); UPD(0x0C0AB466u, 3);  /* 0C0AB464 mov.l Rm,@(r0,Rn) */
L_0C0AB466: BLKS(0x0C0AB466u);
	r15 = r14;  /* 0C0AB466 mov Rm,Rn */
	IF(0x0C0AB468u); PR = R32(r15); r15 += 4; UPD(0x0C0AB46Au, 2);  /* 0C0AB468 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AB46Cu, 1);  /* 0C0AB46A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AB46Eu, 1);  /* 0C0AB46C mov.l @Rm+,Rn */
	IF(0x0C0AB46Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AB46E rts */
L_0C0AB480: BLKS(0x0C0AB480u);
	r5 = 0xB4u; UPD(0x0C0AB482u, 1);  /* 0C0AB480 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AB482 add #imm,Rn */
	IF(0x0C0AB484u); MACL = r8 * r5;  /* 0C0AB484 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AB488u, 4);  /* 0C0AB486 mov.l @(disp,pc),Rn */
	IF(0x0C0AB488u); r3 = MACL;  /* 0C0AB488 sts macl,Rn */
	r3 += r0;  /* 0C0AB48A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AB48Eu, 3);  /* 0C0AB48C mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0AB48E mov #imm,Rn */
	IF(0x0C0AB490u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB492u, 2);  /* 0C0AB490 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0AB492 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AB496u, 2);  /* 0C0AB494 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AB496 add #imm,Rn */
	IF(0x0C0AB498u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB49Au, 2);  /* 0C0AB498 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AB49A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0AB49Eu, 2);  /* 0C0AB49C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0AB4A0u, 1);  /* 0C0AB49E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AB4A2u, 1);  /* 0C0AB4A0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AB4A4u, 1);  /* 0C0AB4A2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AB446u, 3); goto L_0C0AB446; }  /* 0C0AB4A4 bra */
L_0C0AB4B0: BLKS(0x0C0AB4B0u);
	if (!T) { UPD(0x0C0AB420u, 3); goto L_0C0AB420; }  /* 0C0AB4B0 bf */
L_0C0AB4B2: BLKS(0x0C0AB4B2u);
	r15 += 0xFFFFFFF8u;  /* 0C0AB4B2 add #imm,Rn */
	r5 = 0xB4u; UPD(0x0C0AB4B6u, 2);  /* 0C0AB4B4 mov.w @(disp,pc),Rn */
	IF(0x0C0AB4B6u); MACL = r8 * r5;  /* 0C0AB4B6 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AB4BAu, 3);  /* 0C0AB4B8 mov.l @(disp,pc),Rn */
	IF(0x0C0AB4BAu); r3 = MACL;  /* 0C0AB4BA sts macl,Rn */
	r3 += r0;  /* 0C0AB4BC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AB4C0u, 3);  /* 0C0AB4BE mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0AB4C0 mov #imm,Rn */
	IF(0x0C0AB4C2u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB4C4u, 2);  /* 0C0AB4C2 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0AB4C4 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AB4C8u, 2);  /* 0C0AB4C6 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AB4C8 add #imm,Rn */
	IF(0x0C0AB4CAu); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB4CCu, 2);  /* 0C0AB4CA mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AB4CC extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0AB4D0u, 2);  /* 0C0AB4CE mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0AB4D2u, 1);  /* 0C0AB4D0 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AB4D4u, 1);  /* 0C0AB4D2 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AB4D6u, 1);  /* 0C0AB4D4 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AB446u, 3); goto L_0C0AB446; }  /* 0C0AB4D6 bra */
L_0C0AB4E0: BLKS(0x0C0AB4E0u);
	r5 = 0xB4u; UPD(0x0C0AB4E2u, 1);  /* 0C0AB4E0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AB4E2 add #imm,Rn */
	IF(0x0C0AB4E4u); MACL = r8 * r5;  /* 0C0AB4E4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AB4E8u, 4);  /* 0C0AB4E6 mov.l @(disp,pc),Rn */
	IF(0x0C0AB4E8u); r3 = MACL;  /* 0C0AB4E8 sts macl,Rn */
	r3 += r0;  /* 0C0AB4EA add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AB4EEu, 3);  /* 0C0AB4EC mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0AB4EE mov #imm,Rn */
	IF(0x0C0AB4F0u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB4F2u, 2);  /* 0C0AB4F0 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0AB4F2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AB4F6u, 2);  /* 0C0AB4F4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AB4F6 add #imm,Rn */
	IF(0x0C0AB4F8u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB4FAu, 2);  /* 0C0AB4F8 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AB4FA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0AB4FEu, 2);  /* 0C0AB4FC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C0AB500u, 1);  /* 0C0AB4FE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AB502u, 1);  /* 0C0AB500 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AB504u, 1);  /* 0C0AB502 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AB446u, 3); goto L_0C0AB446; }  /* 0C0AB504 bra */
L_0C0AB510: BLKS(0x0C0AB510u);
	r4 = 0xB4u; UPD(0x0C0AB512u, 1);  /* 0C0AB510 mov.w @(disp,pc),Rn */
	IF(0x0C0AB512u); MACL = r8 * r4;  /* 0C0AB512 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0AB516u, 3);  /* 0C0AB514 mov.l @(disp,pc),Rn */
	IF(0x0C0AB516u); r0 = MACL;  /* 0C0AB516 sts macl,Rn */
	{ IF(0x0C0AB51Au); W32(r0 + r3, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0AB466u, 4); goto L_0C0AB466; }  /* 0C0AB518 bra */
L_0C0AB520: BLKS(0x0C0AB520u);
	r8 = 0xB0u; UPD(0x0C0AB522u, 1);  /* 0C0AB520 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C0AB522 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C0AB526u, 2);  /* 0C0AB524 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0AB526 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0AB52Au, 2);  /* 0C0AB528 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0AB52A mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C0AB52Eu, 2);  /* 0C0AB52C mov.w @(disp,pc),Rn */
	IF(0x0C0AB52Eu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0AB530u, 1);  /* 0C0AB52E mov.b @(r0,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C0AB532u, 1);  /* 0C0AB530 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C0AB532 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0AB536u, 2);  /* 0C0AB534 mov.l Rm,@(disp,Rn) */
	r5 = 0xBu;  /* 0C0AB536 mov #imm,Rn */
	r4 = R32(r9); UPD(0x0C0AB53Au, 2);  /* 0C0AB538 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0AB53Cu, 1);  /* 0C0AB53A mov.l @(disp,Rm),Rn */
	IF(0x0C0AB53Cu); { u32 t_ = r0; PR = 0x0C0AB540u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0AB540u); }  /* 0C0AB53C jsr @Rn */
L_0C0AB540: BLKS(0x0C0AB540u);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0AB542u, 1);  /* 0C0AB540 mov.b @Rm,Rn */
	r15 += 0x8u;  /* 0C0AB542 add #imm,Rn */
	r8 = 0xC07DF30u; UPD(0x0C0AB546u, 2);  /* 0C0AB544 mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C0AB546 extu.b Rm,Rn */
	r4 = 0x2u;  /* 0C0AB548 mov #imm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C0AB54Cu, 3);  /* 0C0AB54A mov.l @(disp,Rm),Rn */
	IF(0x0C0AB54Cu); { u32 t_ = r8; PR = 0x0C0AB550u; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C0AB550u); }  /* 0C0AB54C jsr @Rn */
L_0C0AB550: BLKS(0x0C0AB550u);
	r3 = 0x0u;  /* 0C0AB550 mov #imm,Rn */
	{ W32(r9, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C0AB466u, 4); goto L_0C0AB466; }  /* 0C0AB552 bra */
L_0C0AB560: BLKS(0x0C0AB560u);
	r2 = 0xC0A90A0u; UPD(0x0C0AB562u, 1);  /* 0C0AB560 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0AB562 mov Rm,Rn */
	IF(0x0C0AB564u); PR = R32(r15); r15 += 4; UPD(0x0C0AB566u, 2);  /* 0C0AB564 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AB568u, 1);  /* 0C0AB566 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AB56Au, 1);  /* 0C0AB568 mov.l @Rm+,Rn */
	IF(0x0C0AB56Au); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A90A0u: TAIL(blk_f_0C0A90A0); default: JUMPD(tv_); } }  /* 0C0AB56A jmp @Rn */
}

void blk_f_0C0AB5A0(sh3_t *c)
{
	LOCALS;
L_0C0AB5A0: BLKS(0x0C0AB5A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB5A2u, 1);  /* 0C0AB5A0 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C0AB5A4u, 1);  /* 0C0AB5A2 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0AB5A4 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB5A8u, 2);  /* 0C0AB5A6 mov.l Rm,@-Rn */
	IF(0x0C0AB5A8u); MACL = r8 * r0;  /* 0C0AB5A8 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB5ACu, 3);  /* 0C0AB5AA mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0AB5AEu, 1);  /* 0C0AB5AC mov.l @(disp,pc),Rn */
	IF(0x0C0AB5AEu); r9 = MACL;  /* 0C0AB5AE sts macl,Rn */
	IF(0x0C0AB5B0u); r15 -= 4; W32(r15, PR); UPD(0x0C0AB5B2u, 2);  /* 0C0AB5B0 sts.l pr,@-Rn */
	r9 += r0;  /* 0C0AB5B2 add Rm,Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C0AB5B6u, 2);  /* 0C0AB5B4 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0AB5B6 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AB5C0u, 4); goto L_0C0AB5C0; } goto L_0C0AB5BC; }  /* 0C0AB5B8 bf/s */
L_0C0AB5BC: BLKS(0x0C0AB5BCu);
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C0AB720u, 4); goto L_0C0AB720; }  /* 0C0AB5BC bra */
L_0C0AB5C0: BLKS(0x0C0AB5C0u);
	T = r0 == 0x1u;  /* 0C0AB5C0 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0AB5CAu, 4); goto L_0C0AB5CA; }  /* 0C0AB5C2 bf */
L_0C0AB5C4: BLKS(0x0C0AB5C4u);
	r15 += 0xFFFFFFF8u;  /* 0C0AB5C4 add #imm,Rn */
	{ IF(0x0C0AB5C8u); ; /* slot nop */ UPD(0x0C0AB6E0u, 4); goto L_0C0AB6E0; }  /* 0C0AB5C6 bra */
L_0C0AB5CA: BLKS(0x0C0AB5CAu);
	r9 = 0xC062780u; UPD(0x0C0AB5CCu, 1);  /* 0C0AB5CA mov.l @(disp,pc),Rn */
	IF(0x0C0AB5CCu); { u32 t_ = r9; PR = 0x0C0AB5D0u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AB5D0u); }  /* 0C0AB5CC jsr @Rn */
L_0C0AB5D0: BLKS(0x0C0AB5D0u);
	T = r0 == 0x2u;  /* 0C0AB5D0 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AB6B0u, 4); goto L_0C0AB6B0; } goto L_0C0AB5D6; }  /* 0C0AB5D2 bt/s */
L_0C0AB5D6: BLKS(0x0C0AB5D6u);
	T = (s32)r0 > (s32)r2;  /* 0C0AB5D6 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0AB680u, 5); goto L_0C0AB680; } goto L_0C0AB5DC; }  /* 0C0AB5D8 bt/s */
L_0C0AB5DC: BLKS(0x0C0AB5DCu);
	T = r0 == 0x1u;  /* 0C0AB5DC cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0AB650u, 5); goto L_0C0AB650; }  /* 0C0AB5DE bt */
L_0C0AB5E0: BLKS(0x0C0AB5E0u);
	r9 = 0xB4u; UPD(0x0C0AB5E2u, 1);  /* 0C0AB5E0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AB5E2 add #imm,Rn */
	IF(0x0C0AB5E4u); MACL = r8 * r9;  /* 0C0AB5E4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AB5E8u, 4);  /* 0C0AB5E6 mov.l @(disp,pc),Rn */
	IF(0x0C0AB5E8u); r3 = MACL;  /* 0C0AB5E8 sts macl,Rn */
	r3 += r0;  /* 0C0AB5EA add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AB5EEu, 3);  /* 0C0AB5EC mov.w @(disp,pc),Rn */
	IF(0x0C0AB5EEu); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB5F0u, 1);  /* 0C0AB5EE mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AB5F0 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0AB5F4u, 2);  /* 0C0AB5F2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AB5F4 add #imm,Rn */
	IF(0x0C0AB5F6u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB5F8u, 2);  /* 0C0AB5F6 mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0AB5F8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0AB5FCu, 2);  /* 0C0AB5FA mov.l Rm,@(disp,Rn) */
	r5 = 0xCu;  /* 0C0AB5FC mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C0AB600u, 2);  /* 0C0AB5FE mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AB602u, 1);  /* 0C0AB600 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0AB604u, 1);  /* 0C0AB602 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C0AB606u, 1);  /* 0C0AB604 mov.l @(disp,pc),Rn */
L_0C0AB606: BLKS(0x0C0AB606u);
	r9 = 0xC0A8B50u; UPD(0x0C0AB608u, 1);  /* 0C0AB606 mov.l @(disp,pc),Rn */
	IF(0x0C0AB608u); { u32 t_ = r0; PR = 0x0C0AB60Cu; IF(0x0C0AB60Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0AB60Cu); }  /* 0C0AB608 jsr @Rn */
L_0C0AB60C: BLKS(0x0C0AB60Cu);
	r15 += 0x8u;  /* 0C0AB60C add #imm,Rn */
	IF(0x0C0AB60Eu); { u32 t_ = r9; PR = 0x0C0AB612u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0AB612u); }  /* 0C0AB60E jsr @Rn */
L_0C0AB612: BLKS(0x0C0AB612u);
	IF(0x0C0AB612u); T = (s32)r0 >= 0;  /* 0C0AB612 cmp/pz Rn */
	if (!T) { UPD(0x0C0AB640u, 4); goto L_0C0AB640; }  /* 0C0AB614 bf */
L_0C0AB616: BLKS(0x0C0AB616u);
	r3 = 0x0u;  /* 0C0AB616 mov #imm,Rn */
	r5 = 0xB4u; UPD(0x0C0AB61Au, 2);  /* 0C0AB618 mov.w @(disp,pc),Rn */
	IF(0x0C0AB61Au); MACL = r0 * r5;  /* 0C0AB61A mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0AB61Eu, 3);  /* 0C0AB61C mov.l @(disp,pc),Rn */
	IF(0x0C0AB61Eu); r6 = MACL;  /* 0C0AB61E sts macl,Rn */
	r6 += r4;  /* 0C0AB620 add Rm,Rn */
	r9 = R32(r6); UPD(0x0C0AB624u, 3);  /* 0C0AB622 mov.l @Rm,Rn */
	IF(0x0C0AB624u); MACL = r8 * r5;  /* 0C0AB624 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C0AB628u, 3);  /* 0C0AB626 mov.l @(disp,pc),Rn */
	r9 |= r1;  /* 0C0AB628 or Rm,Rn */
	W32(r6, r9); UPD(0x0C0AB62Cu, 2);  /* 0C0AB62A mov.l Rm,@Rn */
	IF(0x0C0AB62Cu); r0 = MACL;  /* 0C0AB62C sts macl,Rn */
	IF(0x0C0AB62Eu); W32(r0 + r4, r3); UPD(0x0C0AB630u, 2);  /* 0C0AB62E mov.l Rm,@(r0,Rn) */
L_0C0AB630: BLKS(0x0C0AB630u);
	r15 = r14;  /* 0C0AB630 mov Rm,Rn */
	IF(0x0C0AB632u); PR = R32(r15); r15 += 4; UPD(0x0C0AB634u, 2);  /* 0C0AB632 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AB636u, 1);  /* 0C0AB634 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AB638u, 1);  /* 0C0AB636 mov.l @Rm+,Rn */
	IF(0x0C0AB638u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AB638 rts */
L_0C0AB640: BLKS(0x0C0AB640u);
	r0 = 0xB4u; UPD(0x0C0AB642u, 1);  /* 0C0AB640 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C0AB642 mov #imm,Rn */
	IF(0x0C0AB644u); MACL = r8 * r0;  /* 0C0AB644 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0AB648u, 4);  /* 0C0AB646 mov.l @(disp,pc),Rn */
	IF(0x0C0AB648u); r0 = MACL;  /* 0C0AB648 sts macl,Rn */
	{ IF(0x0C0AB64Cu); W32(r0 + r8, r7); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0AB630u, 4); goto L_0C0AB630; }  /* 0C0AB64A bra */
L_0C0AB650: BLKS(0x0C0AB650u);
	r0 = 0xB4u; UPD(0x0C0AB652u, 1);  /* 0C0AB650 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AB652 add #imm,Rn */
	IF(0x0C0AB654u); MACL = r8 * r0;  /* 0C0AB654 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0AB658u, 4);  /* 0C0AB656 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AB65Au, 1);  /* 0C0AB658 mov.w @(disp,pc),Rn */
	IF(0x0C0AB65Au); r3 = MACL;  /* 0C0AB65A sts macl,Rn */
	r3 += r7;  /* 0C0AB65C add Rm,Rn */
	IF(0x0C0AB65Eu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB660u, 3);  /* 0C0AB65E mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0AB660 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0AB664u, 2);  /* 0C0AB662 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AB664 add #imm,Rn */
	IF(0x0C0AB666u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AB668u, 2);  /* 0C0AB666 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C0AB668 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0AB66A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0AB66Eu, 3);  /* 0C0AB66C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0AB670u, 1);  /* 0C0AB66E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AB672u, 1);  /* 0C0AB670 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AB674u, 1);  /* 0C0AB672 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AB606u, 3); goto L_0C0AB606; }  /* 0C0AB674 bra */
L_0C0AB680: BLKS(0x0C0AB680u);
	if (!T) { UPD(0x0C0AB5E0u, 3); goto L_0C0AB5E0; }  /* 0C0AB680 bf */
L_0C0AB682: BLKS(0x0C0AB682u);
	r15 += 0xFFFFFFF8u;  /* 0C0AB682 add #imm,Rn */
	r6 = 0xB4u; UPD(0x0C0AB686u, 2);  /* 0C0AB684 mov.w @(disp,pc),Rn */
	IF(0x0C0AB686u); MACL = r8 * r6;  /* 0C0AB686 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0AB68Au, 3);  /* 0C0AB688 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AB68Cu, 1);  /* 0C0AB68A mov.w @(disp,pc),Rn */
	IF(0x0C0AB68Cu); r9 = MACL;  /* 0C0AB68C sts macl,Rn */
	r9 += r5;  /* 0C0AB68E add Rm,Rn */
	IF(0x0C0AB690u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AB692u, 3);  /* 0C0AB690 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C0AB692 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0AB694 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AB698u, 3);  /* 0C0AB696 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AB698 add #imm,Rn */
	IF(0x0C0AB69Au); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AB69Cu, 2);  /* 0C0AB69A mov.b @(r0,Rm),Rn */
	r0 = r3 & 0xFF;  /* 0C0AB69C extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AB6A0u, 2);  /* 0C0AB69E mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0AB6A2u, 1);  /* 0C0AB6A0 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0AB6A4u, 1);  /* 0C0AB6A2 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0AB6A6u, 1);  /* 0C0AB6A4 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AB606u, 3); goto L_0C0AB606; }  /* 0C0AB6A6 bra */
L_0C0AB6B0: BLKS(0x0C0AB6B0u);
	r7 = 0xB4u; UPD(0x0C0AB6B2u, 1);  /* 0C0AB6B0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AB6B2 add #imm,Rn */
	IF(0x0C0AB6B4u); MACL = r8 * r7;  /* 0C0AB6B4 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0AB6B8u, 4);  /* 0C0AB6B6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AB6BAu, 1);  /* 0C0AB6B8 mov.w @(disp,pc),Rn */
	IF(0x0C0AB6BAu); r9 = MACL;  /* 0C0AB6BA sts macl,Rn */
	r9 += r6;  /* 0C0AB6BC add Rm,Rn */
	IF(0x0C0AB6BEu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AB6C0u, 3);  /* 0C0AB6BE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0AB6C0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0AB6C4u, 2);  /* 0C0AB6C2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AB6C4 add #imm,Rn */
	IF(0x0C0AB6C6u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AB6C8u, 2);  /* 0C0AB6C6 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C0AB6C8 mov #imm,Rn */
	r3 = r2 & 0xFF;  /* 0C0AB6CA extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0AB6CEu, 3);  /* 0C0AB6CC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C0AB6D0u, 1);  /* 0C0AB6CE mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0AB6D2u, 1);  /* 0C0AB6D0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0AB6D4u, 1);  /* 0C0AB6D2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AB606u, 3); goto L_0C0AB606; }  /* 0C0AB6D4 bra */
L_0C0AB6E0: BLKS(0x0C0AB6E0u);
	r8 = 0xB0u; UPD(0x0C0AB6E2u, 1);  /* 0C0AB6E0 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C0AB6E2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C0AB6E6u, 2);  /* 0C0AB6E4 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0AB6E6 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0AB6EAu, 2);  /* 0C0AB6E8 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0AB6EA mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C0AB6EEu, 2);  /* 0C0AB6EC mov.w @(disp,pc),Rn */
	IF(0x0C0AB6EEu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0AB6F0u, 1);  /* 0C0AB6EE mov.b @(r0,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C0AB6F2u, 1);  /* 0C0AB6F0 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C0AB6F2 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0AB6F6u, 2);  /* 0C0AB6F4 mov.l Rm,@(disp,Rn) */
	r5 = 0xCu;  /* 0C0AB6F6 mov #imm,Rn */
	r4 = R32(r9); UPD(0x0C0AB6FAu, 2);  /* 0C0AB6F8 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0AB6FCu, 1);  /* 0C0AB6FA mov.l @(disp,Rm),Rn */
	IF(0x0C0AB6FCu); { u32 t_ = r0; PR = 0x0C0AB700u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0AB700u); }  /* 0C0AB6FC jsr @Rn */
L_0C0AB700: BLKS(0x0C0AB700u);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0AB702u, 1);  /* 0C0AB700 mov.b @Rm,Rn */
	r15 += 0x8u;  /* 0C0AB702 add #imm,Rn */
	r8 = 0xC07DF30u; UPD(0x0C0AB706u, 2);  /* 0C0AB704 mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C0AB706 extu.b Rm,Rn */
	r4 = 0x2u;  /* 0C0AB708 mov #imm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C0AB70Cu, 3);  /* 0C0AB70A mov.l @(disp,Rm),Rn */
	IF(0x0C0AB70Cu); { u32 t_ = r8; PR = 0x0C0AB710u; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C0AB710u); }  /* 0C0AB70C jsr @Rn */
L_0C0AB710: BLKS(0x0C0AB710u);
	r3 = 0x0u;  /* 0C0AB710 mov #imm,Rn */
	{ W32(r9, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C0AB630u, 4); goto L_0C0AB630; }  /* 0C0AB712 bra */
L_0C0AB720: BLKS(0x0C0AB720u);
	r2 = 0xC0A9170u; UPD(0x0C0AB722u, 1);  /* 0C0AB720 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0AB722 mov Rm,Rn */
	IF(0x0C0AB724u); PR = R32(r15); r15 += 4; UPD(0x0C0AB726u, 2);  /* 0C0AB724 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AB728u, 1);  /* 0C0AB726 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AB72Au, 1);  /* 0C0AB728 mov.l @Rm+,Rn */
	IF(0x0C0AB72Au); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9170u: TAIL(blk_f_0C0A9170); default: JUMPD(tv_); } }  /* 0C0AB72A jmp @Rn */
}

void blk_f_0C0AB760(sh3_t *c)
{
	LOCALS;
L_0C0AB760: BLKS(0x0C0AB760u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB762u, 1);  /* 0C0AB760 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB764u, 1);  /* 0C0AB762 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB766u, 1);  /* 0C0AB764 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB768u, 1);  /* 0C0AB766 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB76Au, 1);  /* 0C0AB768 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB76Cu, 1);  /* 0C0AB76A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB76Eu, 1);  /* 0C0AB76C mov.l Rm,@-Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0AB770u, 1);  /* 0C0AB76E mov.l @(disp,pc),Rn */
	IF(0x0C0AB770u); r15 -= 4; W32(r15, PR); UPD(0x0C0AB772u, 1);  /* 0C0AB770 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C0AB774u, 1);  /* 0C0AB772 mov.l @Rm,Rn */
	r14 = r15;  /* 0C0AB774 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C0AB778u, 2);  /* 0C0AB776 mov.w @Rm+,Rn */
	r12 = 0xC2B0378u; UPD(0x0C0AB77Au, 1);  /* 0C0AB778 mov.l @(disp,pc),Rn */
	W16(r12, r0); UPD(0x0C0AB77Cu, 1);  /* 0C0AB77A mov.w Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C0AB77Eu, 1);  /* 0C0AB77C mov.w @Rm+,Rn */
	r8 = 0xC071740u; UPD(0x0C0AB780u, 1);  /* 0C0AB77E mov.l @(disp,pc),Rn */
	r0 &= 0x3u;  /* 0C0AB780 and #imm,r0 */
	W32(r4, r3); UPD(0x0C0AB784u, 2);  /* 0C0AB782 mov.l Rm,@Rn */
	r13 = 0xC2B0384u; UPD(0x0C0AB786u, 1);  /* 0C0AB784 mov.l @(disp,pc),Rn */
	r4 = 0xCu;  /* 0C0AB786 mov #imm,Rn */
	IF(0x0C0AB788u); { u32 t_ = r8; PR = 0x0C0AB78Cu; W16(r13, r0); /* slot mov.w Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0AB78Cu); }  /* 0C0AB788 jsr @Rn */
L_0C0AB78C: BLKS(0x0C0AB78Cu);
	T = (r0 & r0) == 0;  /* 0C0AB78C tst Rm,Rn */
	if (!T) { UPD(0x0C0AB7B0u, 4); goto L_0C0AB7B0; }  /* 0C0AB78E bf */
L_0C0AB790: BLKS(0x0C0AB790u);
	r0 = 0x1u;  /* 0C0AB790 mov #imm,Rn */
	UPD(0x0C0AB792u, 1);
L_0C0AB792: BLKS(0x0C0AB792u);
	r15 = r14;  /* 0C0AB792 mov Rm,Rn */
	IF(0x0C0AB794u); PR = R32(r15); r15 += 4; UPD(0x0C0AB796u, 2);  /* 0C0AB794 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AB798u, 1);  /* 0C0AB796 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AB79Au, 1);  /* 0C0AB798 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AB79Cu, 1);  /* 0C0AB79A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AB79Eu, 1);  /* 0C0AB79C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AB7A0u, 1);  /* 0C0AB79E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AB7A2u, 1);  /* 0C0AB7A0 mov.l @Rm+,Rn */
	IF(0x0C0AB7A2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AB7A2 rts */
L_0C0AB7B0: BLKS(0x0C0AB7B0u);
	r9 = 0xC2B1811u; UPD(0x0C0AB7B2u, 1);  /* 0C0AB7B0 mov.l @(disp,pc),Rn */
	r0 = 0xC28EDFCu; UPD(0x0C0AB7B4u, 1);  /* 0C0AB7B2 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C0AB7B6u, 1);  /* 0C0AB7B4 mov.b @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0AB7B8u, 1);  /* 0C0AB7B6 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)R16(r0); UPD(0x0C0AB7BAu, 1);  /* 0C0AB7B8 mov.w @Rm,Rn */
	r7 = 0xC2460ACu; UPD(0x0C0AB7BCu, 1);  /* 0C0AB7BA mov.l @(disp,pc),Rn */
	IF(0x0C0AB7BCu); MACL = r9 * r8;  /* 0C0AB7BC mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0AB7C0u, 3);  /* 0C0AB7BE mov.w @Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0AB7C2u, 1);  /* 0C0AB7C0 mov.l @(disp,pc),Rn */
	IF(0x0C0AB7C2u); r8 = MACL;  /* 0C0AB7C2 sts macl,Rn */
	r8 += r3;  /* 0C0AB7C4 add Rm,Rn */
	r11 = r6 & 0xFFFF;  /* 0C0AB7C6 extu.w Rm,Rn */
	r4 = 0xC0000110u; UPD(0x0C0AB7CAu, 4);  /* 0C0AB7C8 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r13); UPD(0x0C0AB7CCu, 1);  /* 0C0AB7CA mov.w @Rm,Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0AB7CEu, 1);  /* 0C0AB7CC mov.l @(disp,pc),Rn */
	r5 = r2 & 0xFFFF;  /* 0C0AB7CE extu.w Rm,Rn */
	W32(r8 + 0x4u, r11); UPD(0x0C0AB7D2u, 2);  /* 0C0AB7D0 mov.l Rm,@(disp,Rn) */
	W32(r8, r4); UPD(0x0C0AB7D4u, 1);  /* 0C0AB7D2 mov.l Rm,@Rn */
	r11 = 0x0u;  /* 0C0AB7D4 mov #imm,Rn */
	W32(r8 + 0xCu, r5); UPD(0x0C0AB7D8u, 2);  /* 0C0AB7D6 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0AB7D8 mov Rm,Rn */
	IF(0x0C0AB7DAu); { u32 t_ = r0; PR = 0x0C0AB7DEu; W32(r8 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AB7DEu); }  /* 0C0AB7DA jsr @Rn */
L_0C0AB7DE: BLKS(0x0C0AB7DEu);
	r3 = 0xC0A9AE0u; UPD(0x0C0AB7E0u, 1);  /* 0C0AB7DE mov.l @(disp,pc),Rn */
	IF(0x0C0AB7E0u); { u32 t_ = r3; PR = 0x0C0AB7E4u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AB7E4u); }  /* 0C0AB7E0 jsr @Rn */
L_0C0AB7E4: BLKS(0x0C0AB7E4u);
	r4 = 0xC237C08u; UPD(0x0C0AB7E6u, 1);  /* 0C0AB7E4 mov.l @(disp,pc),Rn */
	r7 = 0x4Cu;  /* 0C0AB7E6 mov #imm,Rn */
	IF(0x0C0AB7E8u); MACL = r10 * r7;  /* 0C0AB7E8 mul.l Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r4); UPD(0x0C0AB7ECu, 4);  /* 0C0AB7EA mov.w @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C0AB7EC add #imm,Rn */
	r6 = 0xC286318u; UPD(0x0C0AB7F0u, 2);  /* 0C0AB7EE mov.l @(disp,pc),Rn */
	IF(0x0C0AB7F0u); r4 = MACL;  /* 0C0AB7F0 sts macl,Rn */
	r0 = 0xC3C43C6u; UPD(0x0C0AB7F4u, 2);  /* 0C0AB7F2 mov.l @(disp,pc),Rn */
	r4 += r6;  /* 0C0AB7F4 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C0AB7F8u, 2);  /* 0C0AB7F6 mov.w @Rm,Rn */
	IF(0x0C0AB7F8u); r5 <<= 16;  /* 0C0AB7F8 shll16 Rn */
	r2 = R32(r4 + 0x8u); UPD(0x0C0AB7FCu, 2);  /* 0C0AB7FA mov.l @(disp,Rm),Rn */
	IF(0x0C0AB7FCu); r3 <<= 16;  /* 0C0AB7FC shll16 Rn */
	r0 = 0xB0u; UPD(0x0C0AB800u, 2);  /* 0C0AB7FE mov.w @(disp,pc),Rn */
	r5 -= r2;  /* 0C0AB800 sub Rm,Rn */
	IF(0x0C0AB802u); W8(r0 + r8, r10); UPD(0x0C0AB804u, 2);  /* 0C0AB802 mov.b Rm,@(r0,Rn) */
	r4 += 0x42u;  /* 0C0AB804 add #imm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C0AB808u, 2);  /* 0C0AB806 mov.l Rm,@(disp,Rn) */
	r0 += 0xFFFFFFFDu;  /* 0C0AB808 add #imm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C0AB80Cu, 2);  /* 0C0AB80A mov.l Rm,@(disp,Rn) */
	r10 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AB80Eu, 1);  /* 0C0AB80C mov.b @Rm,Rn */
	IF(0x0C0AB80Eu); W8(r0 + r8, r10); UPD(0x0C0AB810u, 1);  /* 0C0AB80E mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0AB810 add #imm,Rn */
	IF(0x0C0AB812u); W8(r0 + r8, r10); UPD(0x0C0AB814u, 2);  /* 0C0AB812 mov.b Rm,@(r0,Rn) */
	r7 = (u32)(s32)(s16)R16(r12); UPD(0x0C0AB816u, 1);  /* 0C0AB814 mov.w @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r13); UPD(0x0C0AB818u, 1);  /* 0C0AB816 mov.w @Rm,Rn */
	W32(r15, r7); UPD(0x0C0AB81Au, 1);  /* 0C0AB818 mov.l Rm,@Rn */
	r0 = r1 & 0xFFFF;  /* 0C0AB81A extu.w Rm,Rn */
	r6 = 0xC1DD95Cu; UPD(0x0C0AB81Eu, 2);  /* 0C0AB81C mov.l @(disp,pc),Rn */
	IF(0x0C0AB81Eu); r0 <<= 2;  /* 0C0AB81E shll2 Rn */
	IF(0x0C0AB820u); r5 = R32(r0 + r6); UPD(0x0C0AB822u, 2);  /* 0C0AB820 mov.l @(r0,Rm),Rn */
	r7 = 0x1u;  /* 0C0AB822 mov #imm,Rn */
	r2 = 0xC085B00u; UPD(0x0C0AB826u, 2);  /* 0C0AB824 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0AB826 mov #imm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0AB82Au, 2);  /* 0C0AB828 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x8u, r11); UPD(0x0C0AB82Cu, 1);  /* 0C0AB82A mov.l Rm,@(disp,Rn) */
	r4 = 0xC28EDFCu; UPD(0x0C0AB82Eu, 1);  /* 0C0AB82C mov.l @(disp,pc),Rn */
	IF(0x0C0AB82Eu); { u32 t_ = r2; PR = 0x0C0AB832u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C085B00, 0x0C085B00u, 0x0C0AB832u); }  /* 0C0AB82E jsr @Rn */
L_0C0AB832: BLKS(0x0C0AB832u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AB792u, 3); goto L_0C0AB792; }  /* 0C0AB832 bra */
}

void blk_f_0C0AB880(sh3_t *c)
{
	LOCALS;
L_0C0AB880: BLKS(0x0C0AB880u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB882u, 1);  /* 0C0AB880 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0AB882 mov #imm,Rn */
	IF(0x0C0AB884u); r15 -= 4; W32(r15, PR); UPD(0x0C0AB886u, 2);  /* 0C0AB884 sts.l pr,@-Rn */
	r4 = 0xC2B1811u; UPD(0x0C0AB888u, 1);  /* 0C0AB886 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AB888 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AB88Cu, 2);  /* 0C0AB88A mov.b @Rm,Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0AB88Eu, 1);  /* 0C0AB88C mov.l @(disp,pc),Rn */
	IF(0x0C0AB88Eu); MACL = r6 * r2;  /* 0C0AB88E mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AB892u, 3);  /* 0C0AB890 mov.l @Rm,Rn */
	r7 = 0xC2B0378u; UPD(0x0C0AB894u, 1);  /* 0C0AB892 mov.l @(disp,pc),Rn */
	IF(0x0C0AB894u); r3 = MACL;  /* 0C0AB894 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AB898u, 2);  /* 0C0AB896 mov.w @Rm+,Rn */
	r0 = 0xC286318u; UPD(0x0C0AB89Au, 1);  /* 0C0AB898 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0AB89Cu, 1);  /* 0C0AB89A mov.w Rm,@Rn */
	r0 += r3;  /* 0C0AB89C add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0AB8A0u, 2);  /* 0C0AB89E mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0AB8A2u, 1);  /* 0C0AB8A0 mov.w @Rm+,Rn */
	IF(0x0C0AB8A2u); r0 <<= 2;  /* 0C0AB8A2 shll2 Rn */
	IF(0x0C0AB8A4u); r6 = R32(r0 + r7); UPD(0x0C0AB8A6u, 2);  /* 0C0AB8A4 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AB8A8u, 1);  /* 0C0AB8A6 mov.w @Rm+,Rn */
	r0 = 0xC2B03A2u; UPD(0x0C0AB8AAu, 1);  /* 0C0AB8A8 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0AB8ACu, 1);  /* 0C0AB8AA mov.w Rm,@Rn */
	r2 = 0xC297460u; UPD(0x0C0AB8AEu, 1);  /* 0C0AB8AC mov.l @(disp,pc),Rn */
	r0 = 0xC086720u; UPD(0x0C0AB8B0u, 1);  /* 0C0AB8AE mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0AB8B2u, 1);  /* 0C0AB8B0 mov.l Rm,@Rn */
	IF(0x0C0AB8B2u); { u32 t_ = r0; PR = 0x0C0AB8B6u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C086720, 0x0C086720u, 0x0C0AB8B6u); }  /* 0C0AB8B2 jsr @Rn */
L_0C0AB8B6: BLKS(0x0C0AB8B6u);
	r15 = r14;  /* 0C0AB8B6 mov Rm,Rn */
	IF(0x0C0AB8B8u); PR = R32(r15); r15 += 4; UPD(0x0C0AB8BAu, 2);  /* 0C0AB8B8 lds.l @Rn+,pr */
	IF(0x0C0AB8BAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AB8BA rts */
}

void blk_f_0C0AB9C0(sh3_t *c)
{
	LOCALS;
L_0C0AB9C0: BLKS(0x0C0AB9C0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AB9C2u, 1);  /* 0C0AB9C0 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0AB9C2 mov #imm,Rn */
	IF(0x0C0AB9C4u); r15 -= 4; W32(r15, PR); UPD(0x0C0AB9C6u, 2);  /* 0C0AB9C4 sts.l pr,@-Rn */
	r4 = 0xC2B1811u; UPD(0x0C0AB9C8u, 1);  /* 0C0AB9C6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AB9C8 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AB9CCu, 2);  /* 0C0AB9CA mov.b @Rm,Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0AB9CEu, 1);  /* 0C0AB9CC mov.l @(disp,pc),Rn */
	IF(0x0C0AB9CEu); MACL = r6 * r2;  /* 0C0AB9CE mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AB9D2u, 3);  /* 0C0AB9D0 mov.l @Rm,Rn */
	r7 = 0xC2B0378u; UPD(0x0C0AB9D4u, 1);  /* 0C0AB9D2 mov.l @(disp,pc),Rn */
	IF(0x0C0AB9D4u); r3 = MACL;  /* 0C0AB9D4 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AB9D8u, 2);  /* 0C0AB9D6 mov.w @Rm+,Rn */
	r0 = 0xC286318u; UPD(0x0C0AB9DAu, 1);  /* 0C0AB9D8 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0AB9DCu, 1);  /* 0C0AB9DA mov.w Rm,@Rn */
	r0 += r3;  /* 0C0AB9DC add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0AB9E0u, 2);  /* 0C0AB9DE mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0AB9E2u, 1);  /* 0C0AB9E0 mov.w @Rm+,Rn */
	IF(0x0C0AB9E2u); r0 <<= 2;  /* 0C0AB9E2 shll2 Rn */
	IF(0x0C0AB9E4u); r6 = R32(r0 + r7); UPD(0x0C0AB9E6u, 2);  /* 0C0AB9E4 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AB9E8u, 1);  /* 0C0AB9E6 mov.w @Rm+,Rn */
	r0 = 0xC2B03A2u; UPD(0x0C0AB9EAu, 1);  /* 0C0AB9E8 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0AB9ECu, 1);  /* 0C0AB9EA mov.w Rm,@Rn */
	r2 = 0xC297460u; UPD(0x0C0AB9EEu, 1);  /* 0C0AB9EC mov.l @(disp,pc),Rn */
	r0 = 0xC087330u; UPD(0x0C0AB9F0u, 1);  /* 0C0AB9EE mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0AB9F2u, 1);  /* 0C0AB9F0 mov.l Rm,@Rn */
	IF(0x0C0AB9F2u); { u32 t_ = r0; PR = 0x0C0AB9F6u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C087330, 0x0C087330u, 0x0C0AB9F6u); }  /* 0C0AB9F2 jsr @Rn */
L_0C0AB9F6: BLKS(0x0C0AB9F6u);
	r15 = r14;  /* 0C0AB9F6 mov Rm,Rn */
	IF(0x0C0AB9F8u); PR = R32(r15); r15 += 4; UPD(0x0C0AB9FAu, 2);  /* 0C0AB9F8 lds.l @Rn+,pr */
	IF(0x0C0AB9FAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AB9FA rts */
}

void blk_f_0C0ABA20(sh3_t *c)
{
	LOCALS;
L_0C0ABA20: BLKS(0x0C0ABA20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABA22u, 1);  /* 0C0ABA20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABA24u, 1);  /* 0C0ABA22 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABA26u, 1);  /* 0C0ABA24 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABA28u, 1);  /* 0C0ABA26 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABA2Au, 1);  /* 0C0ABA28 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABA2Cu, 1);  /* 0C0ABA2A mov.l Rm,@-Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0ABA2Eu, 1);  /* 0C0ABA2C mov.l @(disp,pc),Rn */
	IF(0x0C0ABA2Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0ABA30u, 1);  /* 0C0ABA2E sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C0ABA32u, 1);  /* 0C0ABA30 mov.l @Rm,Rn */
	r14 = r15;  /* 0C0ABA32 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r1 = v_; } UPD(0x0C0ABA36u, 2);  /* 0C0ABA34 mov.w @Rm+,Rn */
	r9 = 0xC2460ACu; UPD(0x0C0ABA38u, 1);  /* 0C0ABA36 mov.l @(disp,pc),Rn */
	r8 = 0xC069510u; UPD(0x0C0ABA3Au, 1);  /* 0C0ABA38 mov.l @(disp,pc),Rn */
	W32(r4, r3); UPD(0x0C0ABA3Cu, 1);  /* 0C0ABA3A mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C0ABA3Eu, 1);  /* 0C0ABA3C mov.w @Rm,Rn */
	r12 = 0xC2B0378u; UPD(0x0C0ABA40u, 1);  /* 0C0ABA3E mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C0ABA40 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0ABA44u, 2);  /* 0C0ABA42 mov.l @(disp,pc),Rn */
	IF(0x0C0ABA44u); { u32 t_ = r8; PR = 0x0C0ABA48u; W16(r12, r1); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0ABA48u); }  /* 0C0ABA44 jsr @Rn */
L_0C0ABA48: BLKS(0x0C0ABA48u);
	T = (r0 & r0) == 0;  /* 0C0ABA48 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ABA60u, 4); goto L_0C0ABA60; } UPD(0x0C0ABA4Eu, 1); goto L_0C0ABA4E; }  /* 0C0ABA4A bf/s */
L_0C0ABA4E: BLKS(0x0C0ABA4Eu);
	r15 = r14;  /* 0C0ABA4E mov Rm,Rn */
	IF(0x0C0ABA50u); PR = R32(r15); r15 += 4; UPD(0x0C0ABA52u, 2);  /* 0C0ABA50 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ABA54u, 1);  /* 0C0ABA52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0ABA56u, 1);  /* 0C0ABA54 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ABA58u, 1);  /* 0C0ABA56 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ABA5Au, 1);  /* 0C0ABA58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ABA5Cu, 1);  /* 0C0ABA5A mov.l @Rm+,Rn */
	IF(0x0C0ABA5Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ABA5C rts */
L_0C0ABA60: BLKS(0x0C0ABA60u);
	r8 = 0xC071740u; UPD(0x0C0ABA62u, 1);  /* 0C0ABA60 mov.l @(disp,pc),Rn */
	IF(0x0C0ABA62u); { u32 t_ = r8; PR = 0x0C0ABA66u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0ABA66u); }  /* 0C0ABA62 jsr @Rn */
L_0C0ABA66: BLKS(0x0C0ABA66u);
	T = (r0 & r0) == 0;  /* 0C0ABA66 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ABA4Eu, 4); goto L_0C0ABA4E; } goto L_0C0ABA6C; }  /* 0C0ABA68 bt/s */
L_0C0ABA6C: BLKS(0x0C0ABA6Cu);
	r11 = 0xC28EDFCu; UPD(0x0C0ABA6Eu, 2);  /* 0C0ABA6C mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0ABA6E mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r11); UPD(0x0C0ABA72u, 2);  /* 0C0ABA70 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0ABA74u, 1);  /* 0C0ABA72 mov.w @(disp,pc),Rn */
	IF(0x0C0ABA74u); MACL = r10 * r8;  /* 0C0ABA74 mul.l Rm,Rn */
	r2 = 0xC2B1811u; UPD(0x0C0ABA78u, 3);  /* 0C0ABA76 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r12); UPD(0x0C0ABA7Au, 1);  /* 0C0ABA78 mov.w @Rm,Rn */
	IF(0x0C0ABA7Au); r8 = MACL;  /* 0C0ABA7A sts macl,Rn */
	r3 = 0xC286578u; UPD(0x0C0ABA7Eu, 2);  /* 0C0ABA7C mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFFFF;  /* 0C0ABA7E extu.w Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C0ABA82u, 2);  /* 0C0ABA80 mov.b @Rm,Rn */
	r8 += r3;  /* 0C0ABA82 add Rm,Rn */
	r4 = 0xC3000010u; UPD(0x0C0ABA86u, 2);  /* 0C0ABA84 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C0ABA88u, 1);  /* 0C0ABA86 mov.w @Rm,Rn */
	r12 = 0xC0A8A30u; UPD(0x0C0ABA8Au, 1);  /* 0C0ABA88 mov.l @(disp,pc),Rn */
	r9 = r0 & 0xFFFF;  /* 0C0ABA8A extu.w Rm,Rn */
	W32(r8, r4); UPD(0x0C0ABA8Eu, 2);  /* 0C0ABA8C mov.l Rm,@Rn */
	W32(r8 + 0x4u, r9); UPD(0x0C0ABA90u, 1);  /* 0C0ABA8E mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C0ABA90 mov Rm,Rn */
	W32(r8 + 0x8u, r6); UPD(0x0C0ABA94u, 2);  /* 0C0ABA92 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ABA94u); { u32 t_ = r12; PR = 0x0C0ABA98u; W32(r8 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0ABA98u); }  /* 0C0ABA94 jsr @Rn */
L_0C0ABA98: BLKS(0x0C0ABA98u);
	r3 = 0x4Cu;  /* 0C0ABA98 mov #imm,Rn */
	IF(0x0C0ABA9Au); MACL = r11 * r3;  /* 0C0ABA9A mul.l Rm,Rn */
	r2 = 0xC237C08u; UPD(0x0C0ABA9Eu, 4);  /* 0C0ABA9C mov.l @(disp,pc),Rn */
	r4 = 0xC286318u; UPD(0x0C0ABAA0u, 1);  /* 0C0ABA9E mov.l @(disp,pc),Rn */
	IF(0x0C0ABAA0u); r12 = MACL;  /* 0C0ABAA0 sts macl,Rn */
	r7 = 0xC3C43C6u; UPD(0x0C0ABAA4u, 2);  /* 0C0ABAA2 mov.l @(disp,pc),Rn */
	r12 += r4;  /* 0C0ABAA4 add Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r2); UPD(0x0C0ABAA8u, 2);  /* 0C0ABAA6 mov.w @Rm,Rn */
	r4 = r10;  /* 0C0ABAA8 mov Rm,Rn */
	r0 = R32(r12 + 0x8u); UPD(0x0C0ABAACu, 2);  /* 0C0ABAAA mov.l @(disp,Rm),Rn */
	IF(0x0C0ABAACu); r9 <<= 16;  /* 0C0ABAAC shll16 Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0ABAB0u, 2);  /* 0C0ABAAE mov.w @Rm,Rn */
	r9 -= r0;  /* 0C0ABAB0 sub Rm,Rn */
	r5 = 0xC0A9AE0u; UPD(0x0C0ABAB4u, 2);  /* 0C0ABAB2 mov.l @(disp,pc),Rn */
	IF(0x0C0ABAB4u); r6 <<= 16;  /* 0C0ABAB4 shll16 Rn */
	W32(r8 + 0x24u, r9); UPD(0x0C0ABAB8u, 2);  /* 0C0ABAB6 mov.l Rm,@(disp,Rn) */
	r12 += 0x42u;  /* 0C0ABAB8 add #imm,Rn */
	IF(0x0C0ABABAu); { u32 t_ = r5; PR = 0x0C0ABABEu; W32(r8 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0ABABEu); }  /* 0C0ABABA jsr @Rn */
L_0C0ABABE: BLKS(0x0C0ABABEu);
	r0 = 0xB0u; UPD(0x0C0ABAC0u, 1);  /* 0C0ABABE mov.w @(disp,pc),Rn */
	IF(0x0C0ABAC0u); W8(r0 + r8, r11); UPD(0x0C0ABAC2u, 1);  /* 0C0ABAC0 mov.b Rm,@(r0,Rn) */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C0ABAC4u, 1);  /* 0C0ABAC2 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0ABAC4 add #imm,Rn */
	IF(0x0C0ABAC6u); W8(r0 + r8, r2); UPD(0x0C0ABAC8u, 2);  /* 0C0ABAC6 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0ABAC8 add #imm,Rn */
	IF(0x0C0ABACAu); W8(r0 + r8, r2); UPD(0x0C0ABACCu, 2);  /* 0C0ABACA mov.b Rm,@(r0,Rn) */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0ABA4Eu, 3); goto L_0C0ABA4E; }  /* 0C0ABACC bra */
}

void blk_f_0C0ABB10(sh3_t *c)
{
	LOCALS;
L_0C0ABB10: BLKS(0x0C0ABB10u);
	r2 = 0xB4u; UPD(0x0C0ABB12u, 1);  /* 0C0ABB10 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0ABB12 exts.w Rm,Rn */
	IF(0x0C0ABB14u); MACL = r4 * r2;  /* 0C0ABB14 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0ABB18u, 4);  /* 0C0ABB16 mov.l @(disp,pc),Rn */
	IF(0x0C0ABB18u); r2 = MACL;  /* 0C0ABB18 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABB1Cu, 2);  /* 0C0ABB1A mov.l Rm,@-Rn */
	r2 += r0;  /* 0C0ABB1C add Rm,Rn */
	r2 += 0x3Cu;  /* 0C0ABB1E add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0ABB22u, 3);  /* 0C0ABB20 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0ABB22 mov Rm,Rn */
	r1 = 0xC0A9CB0u; UPD(0x0C0ABB26u, 2);  /* 0C0ABB24 mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C0ABB26 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0ABB36u, 4); goto L_0C0ABB36; } goto L_0C0ABB2C; }  /* 0C0ABB28 bt/s */
L_0C0ABB2C: BLKS(0x0C0ABB2Cu);
	r0 = R32(r2 + 0xCu); UPD(0x0C0ABB2Eu, 2);  /* 0C0ABB2C mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0ABB2E add #imm,Rn */
	r0 &= 0x3Fu;  /* 0C0ABB30 and #imm,r0 */
	r1 = 0xC0A8AE0u; UPD(0x0C0ABB34u, 3);  /* 0C0ABB32 mov.l @(disp,pc),Rn */
	W32(r2 + 0xCu, r0); UPD(0x0C0ABB36u, 1);  /* 0C0ABB34 mov.l Rm,@(disp,Rn) */
L_0C0ABB36: BLKS(0x0C0ABB36u);
	r15 = r14;  /* 0C0ABB36 mov Rm,Rn */
	IF(0x0C0ABB38u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); case 0x0C0A9CB0u: TAIL(blk_f_0C0A9CB0); default: JUMPD(tv_); } }  /* 0C0ABB38 jmp @Rn */
}

void blk_f_0C0ABB50(sh3_t *c)
{
	LOCALS;
L_0C0ABB50: BLKS(0x0C0ABB50u);
	r5 = 0xB4u; UPD(0x0C0ABB52u, 1);  /* 0C0ABB50 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0ABB52 exts.w Rm,Rn */
	IF(0x0C0ABB54u); MACL = r4 * r5;  /* 0C0ABB54 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0ABB58u, 4);  /* 0C0ABB56 mov.l @(disp,pc),Rn */
	r1 = 0xAu;  /* 0C0ABB58 mov #imm,Rn */
	IF(0x0C0ABB5Au); r0 = MACL;  /* 0C0ABB5A sts macl,Rn */
	r3 = 0x9Cu; UPD(0x0C0ABB5Eu, 3);  /* 0C0ABB5C mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C0ABB5E add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABB62u, 2);  /* 0C0ABB60 mov.l Rm,@-Rn */
	r3 += r0;  /* 0C0ABB62 add Rm,Rn */
	W8(r3, r1); UPD(0x0C0ABB66u, 2);  /* 0C0ABB64 mov.b Rm,@Rn */
	r14 = r15;  /* 0C0ABB66 mov Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0ABB6Au, 2);  /* 0C0ABB68 mov.l @(disp,Rm),Rn */
	r3 += 0x1u;  /* 0C0ABB6A add #imm,Rn */
	r0 = 0x3u;  /* 0C0ABB6C mov #imm,Rn */
	T = r2 > r0;  /* 0C0ABB6E cmp/hi Rm,Rn */
	{ u32 c_ = T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0ABBC0u, 6); goto L_0C0ABBC0; } UPD(0x0C0ABB74u, 1); goto L_0C0ABB74; }  /* 0C0ABB70 bt/s */
L_0C0ABB74: BLKS(0x0C0ABB74u);
	r0 = 0xC0ABB7Cu;  /* 0C0ABB74 mova @(disp,pc),r0 */
	IF(0x0C0ABB76u); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0ABB78u, 2);  /* 0C0ABB76 mov.b @(r0,Rm),Rn */
	IF(0x0C0ABB78u); { u32 tv_ = (r6 + 0x0C0ABB7Cu); u32 t_ = PHYS(tv_); IF(0x0C0ABB7Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0ABB80u: goto L_0C0ABB80; case 0x0C0ABB90u: goto L_0C0ABB90; case 0x0C0ABBA0u: goto L_0C0ABBA0; case 0x0C0ABBB0u: goto L_0C0ABBB0; default: JUMPD(tv_); } }  /* 0C0ABB78 braf Rn */
L_0C0ABB80: BLKS(0x0C0ABB80u);
	r5 = 0xC19D962u; UPD(0x0C0ABB82u, 1);  /* 0C0ABB80 mov.l @(disp,pc),Rn */
L_0C0ABB82: BLKS(0x0C0ABB82u);
	r7 = 0xC0A9D90u; UPD(0x0C0ABB84u, 1);  /* 0C0ABB82 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0ABB84 mov Rm,Rn */
	IF(0x0C0ABB86u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A9D90u: TAIL(blk_f_0C0A9D90); default: JUMPD(tv_); } }  /* 0C0ABB86 jmp @Rn */
L_0C0ABB90: BLKS(0x0C0ABB90u);
	r5 = 0xC19D9A8u; UPD(0x0C0ABB92u, 1);  /* 0C0ABB90 mov.l @(disp,pc),Rn */
	{ IF(0x0C0ABB94u); ; /* slot nop */ UPD(0x0C0ABB82u, 3); goto L_0C0ABB82; }  /* 0C0ABB92 bra */
L_0C0ABBA0: BLKS(0x0C0ABBA0u);
	r5 = 0xC19D9EEu; UPD(0x0C0ABBA2u, 1);  /* 0C0ABBA0 mov.l @(disp,pc),Rn */
	{ IF(0x0C0ABBA4u); ; /* slot nop */ UPD(0x0C0ABB82u, 3); goto L_0C0ABB82; }  /* 0C0ABBA2 bra */
L_0C0ABBB0: BLKS(0x0C0ABBB0u);
	r5 = 0xC19DA34u; UPD(0x0C0ABBB2u, 1);  /* 0C0ABBB0 mov.l @(disp,pc),Rn */
	{ IF(0x0C0ABBB4u); ; /* slot nop */ UPD(0x0C0ABB82u, 3); goto L_0C0ABB82; }  /* 0C0ABBB2 bra */
L_0C0ABBC0: BLKS(0x0C0ABBC0u);
	r15 = r14;  /* 0C0ABBC0 mov Rm,Rn */
	IF(0x0C0ABBC2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0ABBC2 rts */
}

void blk_f_0C0ABBF0(sh3_t *c)
{
	LOCALS;
L_0C0ABBF0: BLKS(0x0C0ABBF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABBF2u, 1);  /* 0C0ABBF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABBF4u, 1);  /* 0C0ABBF2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABBF6u, 1);  /* 0C0ABBF4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABBF8u, 1);  /* 0C0ABBF6 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABBFAu, 1);  /* 0C0ABBF8 mov.l Rm,@-Rn */
	r8 = 0xC2460ACu; UPD(0x0C0ABBFCu, 1);  /* 0C0ABBFA mov.l @(disp,pc),Rn */
	IF(0x0C0ABBFCu); r15 -= 4; W32(r15, PR); UPD(0x0C0ABBFEu, 1);  /* 0C0ABBFC sts.l pr,@-Rn */
	r9 = 0xC069510u; UPD(0x0C0ABC00u, 1);  /* 0C0ABBFE mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0ABC00 mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C0ABC04u, 2);  /* 0C0ABC02 mov.w @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0ABC06u, 1);  /* 0C0ABC04 mov.l @(disp,pc),Rn */
	IF(0x0C0ABC06u); { u32 t_ = r9; PR = 0x0C0ABC0Au; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0ABC0Au); }  /* 0C0ABC06 jsr @Rn */
L_0C0ABC0A: BLKS(0x0C0ABC0Au);
	T = (r0 & r0) == 0;  /* 0C0ABC0A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ABC20u, 4); goto L_0C0ABC20; } UPD(0x0C0ABC10u, 1); goto L_0C0ABC10; }  /* 0C0ABC0C bf/s */
L_0C0ABC10: BLKS(0x0C0ABC10u);
	r15 = r14;  /* 0C0ABC10 mov Rm,Rn */
	IF(0x0C0ABC12u); PR = R32(r15); r15 += 4; UPD(0x0C0ABC14u, 2);  /* 0C0ABC12 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ABC16u, 1);  /* 0C0ABC14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ABC18u, 1);  /* 0C0ABC16 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ABC1Au, 1);  /* 0C0ABC18 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ABC1Cu, 1);  /* 0C0ABC1A mov.l @Rm+,Rn */
	IF(0x0C0ABC1Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ABC1C rts */
L_0C0ABC20: BLKS(0x0C0ABC20u);
	r9 = 0xC071740u; UPD(0x0C0ABC22u, 1);  /* 0C0ABC20 mov.l @(disp,pc),Rn */
	IF(0x0C0ABC22u); { u32 t_ = r9; PR = 0x0C0ABC26u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0ABC26u); }  /* 0C0ABC22 jsr @Rn */
L_0C0ABC26: BLKS(0x0C0ABC26u);
	T = (r0 & r0) == 0;  /* 0C0ABC26 tst Rm,Rn */
	if (!T) { UPD(0x0C0ABC40u, 4); goto L_0C0ABC40; }  /* 0C0ABC28 bf */
L_0C0ABC2A: BLKS(0x0C0ABC2Au);
	r0 = 0x1u;  /* 0C0ABC2A mov #imm,Rn */
	r3 = 0xC3C43CCu; UPD(0x0C0ABC2Eu, 2);  /* 0C0ABC2C mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C0ABC30u, 1);  /* 0C0ABC2E mov.l @Rm,Rn */
	r2 += 0x2u;  /* 0C0ABC30 add #imm,Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C0ABC10u, 4); goto L_0C0ABC10; }  /* 0C0ABC32 bra */
L_0C0ABC40: BLKS(0x0C0ABC40u);
	r11 = 0xC28EDFCu; UPD(0x0C0ABC42u, 1);  /* 0C0ABC40 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0ABC42 mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r11); UPD(0x0C0ABC46u, 2);  /* 0C0ABC44 mov.w @Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0ABC48u, 1);  /* 0C0ABC46 mov.w @(disp,pc),Rn */
	IF(0x0C0ABC48u); MACL = r10 * r9;  /* 0C0ABC48 mul.l Rm,Rn */
	r5 = 0xC2B1811u; UPD(0x0C0ABC4Cu, 3);  /* 0C0ABC4A mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C0ABC4Eu, 1);  /* 0C0ABC4C mov.w @Rm,Rn */
	IF(0x0C0ABC4Eu); r9 = MACL;  /* 0C0ABC4E sts macl,Rn */
	r4 = 0xC286578u; UPD(0x0C0ABC52u, 2);  /* 0C0ABC50 mov.l @(disp,pc),Rn */
	r2 = r6 & 0xFFFF;  /* 0C0ABC52 extu.w Rm,Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0ABC56u, 2);  /* 0C0ABC54 mov.l @(disp,pc),Rn */
	r9 += r4;  /* 0C0ABC56 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r5); UPD(0x0C0ABC5Au, 2);  /* 0C0ABC58 mov.b @Rm,Rn */
	r4 = r10;  /* 0C0ABC5A mov Rm,Rn */
	r7 = 0xC1000010u; UPD(0x0C0ABC5Eu, 2);  /* 0C0ABC5C mov.l @(disp,pc),Rn */
	r8 = 0x4Cu;  /* 0C0ABC5E mov #imm,Rn */
	W32(r9, r7); UPD(0x0C0ABC62u, 2);  /* 0C0ABC60 mov.l Rm,@Rn */
	W32(r9 + 0x4u, r2); UPD(0x0C0ABC64u, 1);  /* 0C0ABC62 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r3); UPD(0x0C0ABC66u, 1);  /* 0C0ABC64 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ABC66u); { u32 t_ = r0; PR = 0x0C0ABC6Au; W32(r9 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0ABC6Au); }  /* 0C0ABC66 jsr @Rn */
L_0C0ABC6A: BLKS(0x0C0ABC6Au);
	IF(0x0C0ABC6Au); MACL = r11 * r8;  /* 0C0ABC6A mul.l Rm,Rn */
	r5 = 0xC237C08u; UPD(0x0C0ABC6Eu, 3);  /* 0C0ABC6C mov.l @(disp,pc),Rn */
	r4 = 0xC286318u; UPD(0x0C0ABC70u, 1);  /* 0C0ABC6E mov.l @(disp,pc),Rn */
	IF(0x0C0ABC70u); r8 = MACL;  /* 0C0ABC70 sts macl,Rn */
	r2 = 0xC3C43C6u; UPD(0x0C0ABC74u, 2);  /* 0C0ABC72 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0ABC74 add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C0ABC78u, 2);  /* 0C0ABC76 mov.w @Rm,Rn */
	r4 = r10;  /* 0C0ABC78 mov Rm,Rn */
	r7 = R32(r8 + 0x8u); UPD(0x0C0ABC7Cu, 2);  /* 0C0ABC7A mov.l @(disp,Rm),Rn */
	IF(0x0C0ABC7Cu); r6 <<= 16;  /* 0C0ABC7C shll16 Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C0ABC80u, 2);  /* 0C0ABC7E mov.w @Rm,Rn */
	r6 -= r7;  /* 0C0ABC80 sub Rm,Rn */
	r0 = 0xC0A9AE0u; UPD(0x0C0ABC84u, 2);  /* 0C0ABC82 mov.l @(disp,pc),Rn */
	IF(0x0C0ABC84u); r3 <<= 16;  /* 0C0ABC84 shll16 Rn */
	W32(r9 + 0x24u, r6); UPD(0x0C0ABC88u, 2);  /* 0C0ABC86 mov.l Rm,@(disp,Rn) */
	r8 += 0x42u;  /* 0C0ABC88 add #imm,Rn */
	IF(0x0C0ABC8Au); { u32 t_ = r0; PR = 0x0C0ABC8Eu; W32(r9 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0ABC8Eu); }  /* 0C0ABC8A jsr @Rn */
L_0C0ABC8E: BLKS(0x0C0ABC8Eu);
	r0 = 0xB0u; UPD(0x0C0ABC90u, 1);  /* 0C0ABC8E mov.w @(disp,pc),Rn */
	IF(0x0C0ABC90u); W8(r0 + r9, r11); UPD(0x0C0ABC92u, 1);  /* 0C0ABC90 mov.b Rm,@(r0,Rn) */
	r11 = (u32)(s32)(s8)R8(r8); UPD(0x0C0ABC94u, 1);  /* 0C0ABC92 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0ABC94 add #imm,Rn */
	r11 += 0x2u;  /* 0C0ABC96 add #imm,Rn */
	IF(0x0C0ABC98u); W8(r0 + r9, r11); UPD(0x0C0ABC9Au, 3);  /* 0C0ABC98 mov.b Rm,@(r0,Rn) */
	r8 += 0xFFFFFFBEu;  /* 0C0ABC9A add #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0ABC9C add #imm,Rn */
	IF(0x0C0ABC9Eu); W8(r0 + r9, r11); UPD(0x0C0ABCA0u, 3);  /* 0C0ABC9E mov.b Rm,@(r0,Rn) */
	r4 = 0xC3C43CCu; UPD(0x0C0ABCA2u, 1);  /* 0C0ABCA0 mov.l @(disp,pc),Rn */
	r5 = R32(r4); UPD(0x0C0ABCA4u, 1);  /* 0C0ABCA2 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0ABCA6u, 1);  /* 0C0ABCA4 mov.w @Rm+,Rn */
	r6 = 0xC0A9D30u; UPD(0x0C0ABCA8u, 1);  /* 0C0ABCA6 mov.l @(disp,pc),Rn */
	IF(0x0C0ABCA8u); r0 <<= 2;  /* 0C0ABCA8 shll2 Rn */
	W32(r4, r5); UPD(0x0C0ABCACu, 2);  /* 0C0ABCAA mov.l Rm,@Rn */
	r7 = R32(r8 + 0x38u); UPD(0x0C0ABCAEu, 1);  /* 0C0ABCAC mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0ABCAE mov Rm,Rn */
	IF(0x0C0ABCB0u); { u32 t_ = r6; PR = 0x0C0ABCB4u; IF(0x0C0ABCB2u); r5 = R32(r0 + r7); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C0ABCB4u); }  /* 0C0ABCB0 jsr @Rn */
L_0C0ABCB4: BLKS(0x0C0ABCB4u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0ABC10u, 3); goto L_0C0ABC10; }  /* 0C0ABCB4 bra */
}

void blk_f_0C0ABD00(sh3_t *c)
{
	LOCALS;
L_0C0ABD00: BLKS(0x0C0ABD00u);
	r6 = 0xB4u; UPD(0x0C0ABD02u, 1);  /* 0C0ABD00 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0ABD02 exts.w Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABD06u, 2);  /* 0C0ABD04 mov.l Rm,@-Rn */
	IF(0x0C0ABD06u); MACL = r1 * r6;  /* 0C0ABD06 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABD0Au, 3);  /* 0C0ABD08 mov.l Rm,@-Rn */
	r5 = 0xC286578u; UPD(0x0C0ABD0Cu, 1);  /* 0C0ABD0A mov.l @(disp,pc),Rn */
	IF(0x0C0ABD0Cu); r8 = MACL;  /* 0C0ABD0C sts macl,Rn */
	IF(0x0C0ABD0Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0ABD10u, 2);  /* 0C0ABD0E sts.l pr,@-Rn */
	r8 += r5;  /* 0C0ABD10 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0ABD14u, 2);  /* 0C0ABD12 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0ABD14 mov Rm,Rn */
	IF(0x0C0ABD16u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0ABD18u, 2);  /* 0C0ABD16 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0ABD18 add #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C0ABD1A extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0ABD1Eu, 3);  /* 0C0ABD1C mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0ABD1E add #imm,Rn */
	IF(0x0C0ABD20u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0ABD22u, 2);  /* 0C0ABD20 mov.b @(r0,Rm),Rn */
	r5 = 0xFu;  /* 0C0ABD22 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0ABD24 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0ABD28u, 3);  /* 0C0ABD26 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0ABD2Au, 1);  /* 0C0ABD28 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0ABD2Cu, 1);  /* 0C0ABD2A mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0ABD2Eu, 1);  /* 0C0ABD2C mov.l @(disp,Rm),Rn */
	IF(0x0C0ABD2Eu); { u32 t_ = r0; PR = 0x0C0ABD32u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0ABD32u); }  /* 0C0ABD2E jsr @Rn */
L_0C0ABD32: BLKS(0x0C0ABD32u);
	r0 = 0x0u;  /* 0C0ABD32 mov #imm,Rn */
	W32(r8, r0); UPD(0x0C0ABD36u, 2);  /* 0C0ABD34 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0ABD36 mov Rm,Rn */
	IF(0x0C0ABD38u); PR = R32(r15); r15 += 4; UPD(0x0C0ABD3Au, 2);  /* 0C0ABD38 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ABD3Cu, 1);  /* 0C0ABD3A mov.l @Rm+,Rn */
	IF(0x0C0ABD3Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ABD3C rts */
}

void blk_f_0C0ABD50(sh3_t *c)
{
	LOCALS;
L_0C0ABD50: BLKS(0x0C0ABD50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABD52u, 1);  /* 0C0ABD50 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABD54u, 1);  /* 0C0ABD52 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABD56u, 1);  /* 0C0ABD54 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABD58u, 1);  /* 0C0ABD56 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABD5Au, 1);  /* 0C0ABD58 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABD5Cu, 1);  /* 0C0ABD5A mov.l Rm,@-Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0ABD5Eu, 1);  /* 0C0ABD5C mov.l @(disp,pc),Rn */
	IF(0x0C0ABD5Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0ABD60u, 1);  /* 0C0ABD5E sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C0ABD62u, 1);  /* 0C0ABD60 mov.l @Rm,Rn */
	r14 = r15;  /* 0C0ABD62 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r1 = v_; } UPD(0x0C0ABD66u, 2);  /* 0C0ABD64 mov.w @Rm+,Rn */
	r9 = 0xC2460ACu; UPD(0x0C0ABD68u, 1);  /* 0C0ABD66 mov.l @(disp,pc),Rn */
	r8 = 0xC069510u; UPD(0x0C0ABD6Au, 1);  /* 0C0ABD68 mov.l @(disp,pc),Rn */
	W32(r4, r3); UPD(0x0C0ABD6Cu, 1);  /* 0C0ABD6A mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C0ABD6Eu, 1);  /* 0C0ABD6C mov.w @Rm,Rn */
	r12 = 0xC2B0378u; UPD(0x0C0ABD70u, 1);  /* 0C0ABD6E mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C0ABD70 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0ABD74u, 2);  /* 0C0ABD72 mov.l @(disp,pc),Rn */
	IF(0x0C0ABD74u); { u32 t_ = r8; PR = 0x0C0ABD78u; W16(r12, r1); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0ABD78u); }  /* 0C0ABD74 jsr @Rn */
L_0C0ABD78: BLKS(0x0C0ABD78u);
	T = (r0 & r0) == 0;  /* 0C0ABD78 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ABD90u, 4); goto L_0C0ABD90; } UPD(0x0C0ABD7Eu, 1); goto L_0C0ABD7E; }  /* 0C0ABD7A bf/s */
L_0C0ABD7E: BLKS(0x0C0ABD7Eu);
	r15 = r14;  /* 0C0ABD7E mov Rm,Rn */
	IF(0x0C0ABD80u); PR = R32(r15); r15 += 4; UPD(0x0C0ABD82u, 2);  /* 0C0ABD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ABD84u, 1);  /* 0C0ABD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0ABD86u, 1);  /* 0C0ABD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ABD88u, 1);  /* 0C0ABD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ABD8Au, 1);  /* 0C0ABD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ABD8Cu, 1);  /* 0C0ABD8A mov.l @Rm+,Rn */
	IF(0x0C0ABD8Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ABD8C rts */
L_0C0ABD90: BLKS(0x0C0ABD90u);
	r8 = 0xC071740u; UPD(0x0C0ABD92u, 1);  /* 0C0ABD90 mov.l @(disp,pc),Rn */
	IF(0x0C0ABD92u); { u32 t_ = r8; PR = 0x0C0ABD96u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0ABD96u); }  /* 0C0ABD92 jsr @Rn */
L_0C0ABD96: BLKS(0x0C0ABD96u);
	T = (r0 & r0) == 0;  /* 0C0ABD96 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ABD7Eu, 4); goto L_0C0ABD7E; } goto L_0C0ABD9C; }  /* 0C0ABD98 bt/s */
L_0C0ABD9C: BLKS(0x0C0ABD9Cu);
	r11 = 0xC28EDFCu; UPD(0x0C0ABD9Eu, 2);  /* 0C0ABD9C mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0ABD9E mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r11); UPD(0x0C0ABDA2u, 2);  /* 0C0ABDA0 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0ABDA4u, 1);  /* 0C0ABDA2 mov.w @(disp,pc),Rn */
	IF(0x0C0ABDA4u); MACL = r10 * r8;  /* 0C0ABDA4 mul.l Rm,Rn */
	r2 = 0xC2B1811u; UPD(0x0C0ABDA8u, 3);  /* 0C0ABDA6 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r12); UPD(0x0C0ABDAAu, 1);  /* 0C0ABDA8 mov.w @Rm,Rn */
	IF(0x0C0ABDAAu); r8 = MACL;  /* 0C0ABDAA sts macl,Rn */
	r3 = 0xC286578u; UPD(0x0C0ABDAEu, 2);  /* 0C0ABDAC mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFFFF;  /* 0C0ABDAE extu.w Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C0ABDB2u, 2);  /* 0C0ABDB0 mov.b @Rm,Rn */
	r8 += r3;  /* 0C0ABDB2 add Rm,Rn */
	r4 = 0xC3000010u; UPD(0x0C0ABDB6u, 2);  /* 0C0ABDB4 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C0ABDB8u, 1);  /* 0C0ABDB6 mov.w @Rm,Rn */
	r12 = 0xC0A8A30u; UPD(0x0C0ABDBAu, 1);  /* 0C0ABDB8 mov.l @(disp,pc),Rn */
	r9 = r0 & 0xFFFF;  /* 0C0ABDBA extu.w Rm,Rn */
	W32(r8, r4); UPD(0x0C0ABDBEu, 2);  /* 0C0ABDBC mov.l Rm,@Rn */
	W32(r8 + 0x4u, r9); UPD(0x0C0ABDC0u, 1);  /* 0C0ABDBE mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C0ABDC0 mov Rm,Rn */
	W32(r8 + 0x8u, r6); UPD(0x0C0ABDC4u, 2);  /* 0C0ABDC2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ABDC4u); { u32 t_ = r12; PR = 0x0C0ABDC8u; W32(r8 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0ABDC8u); }  /* 0C0ABDC4 jsr @Rn */
L_0C0ABDC8: BLKS(0x0C0ABDC8u);
	r3 = 0x4Cu;  /* 0C0ABDC8 mov #imm,Rn */
	IF(0x0C0ABDCAu); MACL = r11 * r3;  /* 0C0ABDCA mul.l Rm,Rn */
	r2 = 0xC237C08u; UPD(0x0C0ABDCEu, 4);  /* 0C0ABDCC mov.l @(disp,pc),Rn */
	r4 = 0xC286318u; UPD(0x0C0ABDD0u, 1);  /* 0C0ABDCE mov.l @(disp,pc),Rn */
	IF(0x0C0ABDD0u); r12 = MACL;  /* 0C0ABDD0 sts macl,Rn */
	r7 = 0xC3C43C6u; UPD(0x0C0ABDD4u, 2);  /* 0C0ABDD2 mov.l @(disp,pc),Rn */
	r12 += r4;  /* 0C0ABDD4 add Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r2); UPD(0x0C0ABDD8u, 2);  /* 0C0ABDD6 mov.w @Rm,Rn */
	r4 = r10;  /* 0C0ABDD8 mov Rm,Rn */
	r0 = R32(r12 + 0x8u); UPD(0x0C0ABDDCu, 2);  /* 0C0ABDDA mov.l @(disp,Rm),Rn */
	IF(0x0C0ABDDCu); r9 <<= 16;  /* 0C0ABDDC shll16 Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0ABDE0u, 2);  /* 0C0ABDDE mov.w @Rm,Rn */
	r9 -= r0;  /* 0C0ABDE0 sub Rm,Rn */
	r5 = 0xC0A9AE0u; UPD(0x0C0ABDE4u, 2);  /* 0C0ABDE2 mov.l @(disp,pc),Rn */
	IF(0x0C0ABDE4u); r6 <<= 16;  /* 0C0ABDE4 shll16 Rn */
	W32(r8 + 0x24u, r9); UPD(0x0C0ABDE8u, 2);  /* 0C0ABDE6 mov.l Rm,@(disp,Rn) */
	r12 += 0x42u;  /* 0C0ABDE8 add #imm,Rn */
	IF(0x0C0ABDEAu); { u32 t_ = r5; PR = 0x0C0ABDEEu; W32(r8 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0ABDEEu); }  /* 0C0ABDEA jsr @Rn */
L_0C0ABDEE: BLKS(0x0C0ABDEEu);
	r0 = 0xB0u; UPD(0x0C0ABDF0u, 1);  /* 0C0ABDEE mov.w @(disp,pc),Rn */
	IF(0x0C0ABDF0u); W8(r0 + r8, r11); UPD(0x0C0ABDF2u, 1);  /* 0C0ABDF0 mov.b Rm,@(r0,Rn) */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C0ABDF4u, 1);  /* 0C0ABDF2 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0ABDF4 add #imm,Rn */
	r2 += 0x2u;  /* 0C0ABDF6 add #imm,Rn */
	IF(0x0C0ABDF8u); W8(r0 + r8, r2); UPD(0x0C0ABDFAu, 3);  /* 0C0ABDF8 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0ABDFA add #imm,Rn */
	IF(0x0C0ABDFCu); W8(r0 + r8, r2); UPD(0x0C0ABDFEu, 2);  /* 0C0ABDFC mov.b Rm,@(r0,Rn) */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0ABD7Eu, 3); goto L_0C0ABD7E; }  /* 0C0ABDFE bra */
}

void blk_f_0C0ABE50(sh3_t *c)
{
	LOCALS;
L_0C0ABE50: BLKS(0x0C0ABE50u);
	r0 = 0xB4u; UPD(0x0C0ABE52u, 1);  /* 0C0ABE50 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0ABE52 exts.w Rm,Rn */
	IF(0x0C0ABE54u); MACL = r4 * r0;  /* 0C0ABE54 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABE58u, 4);  /* 0C0ABE56 mov.l Rm,@-Rn */
	r0 = 0xC2865B4u; UPD(0x0C0ABE5Au, 1);  /* 0C0ABE58 mov.l @(disp,pc),Rn */
	IF(0x0C0ABE5Au); r3 = MACL;  /* 0C0ABE5A sts macl,Rn */
	IF(0x0C0ABE5Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0ABE5Eu, 2);  /* 0C0ABE5C sts.l pr,@-Rn */
	IF(0x0C0ABE5Eu); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0ABE60u, 1);  /* 0C0ABE5E mov.w @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0ABE60 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0ABE70u, 4); goto L_0C0ABE70; } UPD(0x0C0ABE66u, 1); goto L_0C0ABE66; }  /* 0C0ABE62 bt/s */
L_0C0ABE66: BLKS(0x0C0ABE66u);
	r15 = r14;  /* 0C0ABE66 mov Rm,Rn */
	IF(0x0C0ABE68u); PR = R32(r15); r15 += 4; UPD(0x0C0ABE6Au, 2);  /* 0C0ABE68 lds.l @Rn+,pr */
	IF(0x0C0ABE6Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ABE6A rts */
L_0C0ABE70: BLKS(0x0C0ABE70u);
	r0 = 0xC0A9CB0u; UPD(0x0C0ABE72u, 1);  /* 0C0ABE70 mov.l @(disp,pc),Rn */
	IF(0x0C0ABE72u); { u32 t_ = r0; PR = 0x0C0ABE76u; IF(0x0C0ABE74u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C0ABE76u); }  /* 0C0ABE72 jsr @Rn */
L_0C0ABE76: BLKS(0x0C0ABE76u);
	{ IF(0x0C0ABE78u); ; /* slot nop */ UPD(0x0C0ABE66u, 3); goto L_0C0ABE66; }  /* 0C0ABE76 bra */
}

void blk_f_0C0ABE90(sh3_t *c)
{
	LOCALS;
L_0C0ABE90: BLKS(0x0C0ABE90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABE92u, 1);  /* 0C0ABE90 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABE94u, 1);  /* 0C0ABE92 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0ABE94 exts.w Rm,Rn */
	r3 = 0xC0A9AE0u; UPD(0x0C0ABE98u, 2);  /* 0C0ABE96 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0ABE98 mov Rm,Rn */
	IF(0x0C0ABE9Au); r15 -= 4; W32(r15, PR); UPD(0x0C0ABE9Cu, 2);  /* 0C0ABE9A sts.l pr,@-Rn */
	IF(0x0C0ABE9Cu); { u32 t_ = r3; PR = 0x0C0ABEA0u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0ABEA0u); }  /* 0C0ABE9C jsr @Rn */
L_0C0ABEA0: BLKS(0x0C0ABEA0u);
	r4 = 0xB4u; UPD(0x0C0ABEA2u, 1);  /* 0C0ABEA0 mov.w @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C0ABEA2 mov #imm,Rn */
	IF(0x0C0ABEA4u); MACL = r8 * r4;  /* 0C0ABEA4 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0ABEA8u, 4);  /* 0C0ABEA6 mov.l @(disp,pc),Rn */
	IF(0x0C0ABEA8u); r0 = MACL;  /* 0C0ABEA8 sts macl,Rn */
	r3 += r0;  /* 0C0ABEAA add Rm,Rn */
	r0 = 0xA5u; UPD(0x0C0ABEAEu, 3);  /* 0C0ABEAC mov.w @(disp,pc),Rn */
	IF(0x0C0ABEAEu); W8(r0 + r3, r2); UPD(0x0C0ABEB0u, 1);  /* 0C0ABEAE mov.b Rm,@(r0,Rn) */
	r15 = r14;  /* 0C0ABEB0 mov Rm,Rn */
	IF(0x0C0ABEB2u); PR = R32(r15); r15 += 4; UPD(0x0C0ABEB4u, 2);  /* 0C0ABEB2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ABEB6u, 1);  /* 0C0ABEB4 mov.l @Rm+,Rn */
	IF(0x0C0ABEB6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ABEB6 rts */
}

void blk_f_0C0ABF70(sh3_t *c)
{
	LOCALS;
L_0C0ABF70: BLKS(0x0C0ABF70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF72u, 1);  /* 0C0ABF70 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF74u, 1);  /* 0C0ABF72 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF76u, 1);  /* 0C0ABF74 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF78u, 1);  /* 0C0ABF76 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF7Au, 1);  /* 0C0ABF78 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF7Cu, 1);  /* 0C0ABF7A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF7Eu, 1);  /* 0C0ABF7C mov.l Rm,@-Rn */
	r10 = 0xC2460ACu; UPD(0x0C0ABF80u, 1);  /* 0C0ABF7E mov.l @(disp,pc),Rn */
	IF(0x0C0ABF80u); r15 -= 4; W32(r15, PR); UPD(0x0C0ABF82u, 1);  /* 0C0ABF80 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C0ABF84u, 1);  /* 0C0ABF82 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0ABF84 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0ABF88u, 2);  /* 0C0ABF86 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0ABF88 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0ABF8Cu, 2);  /* 0C0ABF8A mov.l @(disp,pc),Rn */
	IF(0x0C0ABF8Cu); { u32 t_ = r8; PR = 0x0C0ABF90u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0ABF90u); }  /* 0C0ABF8C jsr @Rn */
L_0C0ABF90: BLKS(0x0C0ABF90u);
	T = (r0 & r0) == 0;  /* 0C0ABF90 tst Rm,Rn */
	if (!T) { UPD(0x0C0ABFB0u, 4); goto L_0C0ABFB0; }  /* 0C0ABF92 bf */
L_0C0ABF94: BLKS(0x0C0ABF94u);
	r0 = 0x1u;  /* 0C0ABF94 mov #imm,Rn */
	r14 += 0x4u;  /* 0C0ABF96 add #imm,Rn */
	r15 = r14;  /* 0C0ABF98 mov Rm,Rn */
	IF(0x0C0ABF9Au); PR = R32(r15); r15 += 4; UPD(0x0C0ABF9Cu, 4);  /* 0C0ABF9A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ABF9Eu, 1);  /* 0C0ABF9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0ABFA0u, 1);  /* 0C0ABF9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0ABFA2u, 1);  /* 0C0ABFA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ABFA4u, 1);  /* 0C0ABFA2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ABFA6u, 1);  /* 0C0ABFA4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ABFA8u, 1);  /* 0C0ABFA6 mov.l @Rm+,Rn */
	IF(0x0C0ABFA8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ABFA8 rts */
L_0C0ABFB0: BLKS(0x0C0ABFB0u);
	r8 = 0xC071740u; UPD(0x0C0ABFB2u, 1);  /* 0C0ABFB0 mov.l @(disp,pc),Rn */
	IF(0x0C0ABFB2u); { u32 t_ = r8; PR = 0x0C0ABFB6u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0ABFB6u); }  /* 0C0ABFB2 jsr @Rn */
L_0C0ABFB6: BLKS(0x0C0ABFB6u);
	T = (r0 & r0) == 0;  /* 0C0ABFB6 tst Rm,Rn */
	if (T) { UPD(0x0C0ABF94u, 4); goto L_0C0ABF94; }  /* 0C0ABFB8 bt */
L_0C0ABFBA: BLKS(0x0C0ABFBAu);
	r4 = 0x0u;  /* 0C0ABFBA mov #imm,Rn */
	r8 = 0xC28EDFCu; UPD(0x0C0ABFBEu, 2);  /* 0C0ABFBC mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r12 = v_; } UPD(0x0C0ABFC0u, 1);  /* 0C0ABFBE mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C0ABFC2u, 1);  /* 0C0ABFC0 mov.w @(disp,pc),Rn */
	IF(0x0C0ABFC2u); MACL = r12 * r9;  /* 0C0ABFC2 mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0ABFC6u, 3);  /* 0C0ABFC4 mov.l @(disp,pc),Rn */
	IF(0x0C0ABFC6u); r9 = MACL;  /* 0C0ABFC6 sts macl,Rn */
	r9 += r1;  /* 0C0ABFC8 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C0ABFCCu, 3);  /* 0C0ABFCA mov.w @Rm,Rn */
	r3 = 0xC0A8A30u; UPD(0x0C0ABFCEu, 1);  /* 0C0ABFCC mov.l @(disp,pc),Rn */
	r2 = r5 & 0xFFFF;  /* 0C0ABFCE extu.w Rm,Rn */
	r6 = 0xD3000104u; UPD(0x0C0ABFD2u, 2);  /* 0C0ABFD0 mov.l @(disp,pc),Rn */
	W32(r9 + 0xCu, r4); UPD(0x0C0ABFD4u, 1);  /* 0C0ABFD2 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x8u, r4); UPD(0x0C0ABFD6u, 1);  /* 0C0ABFD4 mov.l Rm,@(disp,Rn) */
	W32(r9, r6); UPD(0x0C0ABFD8u, 1);  /* 0C0ABFD6 mov.l Rm,@Rn */
	r4 = r12;  /* 0C0ABFD8 mov Rm,Rn */
	IF(0x0C0ABFDAu); { u32 t_ = r3; PR = 0x0C0ABFDEu; W32(r9 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0ABFDEu); }  /* 0C0ABFDA jsr @Rn */
L_0C0ABFDE: BLKS(0x0C0ABFDEu);
	r11 = 0xC0722E0u; UPD(0x0C0ABFE0u, 1);  /* 0C0ABFDE mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0ABFE0 mov Rm,Rn */
	r0 = 0x1700000u; UPD(0x0C0ABFE4u, 2);  /* 0C0ABFE2 mov.l @(disp,pc),Rn */
	IF(0x0C0ABFE4u); { u32 t_ = r11; PR = 0x0C0ABFE8u; W32(r9 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C0ABFE8u); }  /* 0C0ABFE4 jsr @Rn */
L_0C0ABFE8: BLKS(0x0C0ABFE8u);
	r7 = 0xC0A9AE0u; UPD(0x0C0ABFEAu, 1);  /* 0C0ABFE8 mov.l @(disp,pc),Rn */
	r13 = 0x100u; UPD(0x0C0ABFECu, 1);  /* 0C0ABFEA mov.w @(disp,pc),Rn */
	IF(0x0C0ABFECu); { u32 t_ = r7; PR = 0x0C0ABFF0u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0ABFF0u); }  /* 0C0ABFEC jsr @Rn */
L_0C0ABFF0: BLKS(0x0C0ABFF0u);
	r0 = 0x8Au; UPD(0x0C0ABFF2u, 1);  /* 0C0ABFF0 mov.w @(disp,pc),Rn */
	r11 = 0x14u;  /* 0C0ABFF2 mov #imm,Rn */
	IF(0x0C0ABFF4u); W16(r0 + r9, r13); UPD(0x0C0ABFF6u, 2);  /* 0C0ABFF4 mov.w Rm,@(r0,Rn) */
	r4 = 0x20u;  /* 0C0ABFF6 mov #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0ABFF8 add #imm,Rn */
	IF(0x0C0ABFFAu); W16(r0 + r9, r13); UPD(0x0C0ABFFCu, 3);  /* 0C0ABFFA mov.w Rm,@(r0,Rn) */
	r3 = 0x0u;  /* 0C0ABFFC mov #imm,Rn */
	r10 = 0x28000u; UPD(0x0C0AC000u, 2);  /* 0C0ABFFE mov.l @(disp,pc),Rn */
	r0 += 0x6u;  /* 0C0AC000 add #imm,Rn */
	IF(0x0C0AC002u); W32(r0 + r9, r10); UPD(0x0C0AC004u, 2);  /* 0C0AC002 mov.l Rm,@(r0,Rn) */
	r13 = r9;  /* 0C0AC004 mov Rm,Rn */
	r6 = 0xACu; UPD(0x0C0AC008u, 2);  /* 0C0AC006 mov.w @(disp,pc),Rn */
	r10 = 0xA8u; UPD(0x0C0AC00Au, 1);  /* 0C0AC008 mov.w @(disp,pc),Rn */
	r6 += r9;  /* 0C0AC00A add Rm,Rn */
	r6 += 0x1u;  /* 0C0AC00C add #imm,Rn */
	W32(r14, r6); UPD(0x0C0AC010u, 3);  /* 0C0AC00E mov.l Rm,@Rn */
	r13 += r10;  /* 0C0AC010 add Rm,Rn */
	r13 += 0x1u;  /* 0C0AC012 add #imm,Rn */
	W8(r6, r11); UPD(0x0C0AC016u, 3);  /* 0C0AC014 mov.b Rm,@Rn */
	W8(r13, r11); UPD(0x0C0AC018u, 1);  /* 0C0AC016 mov.b Rm,@Rn */
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C0AC01Au, 1);  /* 0C0AC018 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0AC01Cu, 1);  /* 0C0AC01A mov.w @(disp,pc),Rn */
	IF(0x0C0AC01Cu); MACL = r11 * r8;  /* 0C0AC01C mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0AC020u, 3);  /* 0C0AC01E mov.l @(disp,pc),Rn */
	IF(0x0C0AC020u); r8 = MACL;  /* 0C0AC020 sts macl,Rn */
	r8 += r1;  /* 0C0AC022 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C0AC024 add #imm,Rn */
	W16(r8, r12); UPD(0x0C0AC028u, 4);  /* 0C0AC026 mov.w Rm,@Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0AC02Au, 1);  /* 0C0AC028 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C0AC02A add #imm,Rn */
	r5 = 0xC0000000u; UPD(0x0C0AC02Eu, 2);  /* 0C0AC02C mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C0AC02E add Rm,Rn */
	r2 = R32(r9 + 0x4u); UPD(0x0C0AC032u, 2);  /* 0C0AC030 mov.l @(disp,Rm),Rn */
	r10 += 0x1u;  /* 0C0AC032 add #imm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C0AC036u, 2);  /* 0C0AC034 mov.l Rm,@(disp,Rn) */
	W32(r8, r5); UPD(0x0C0AC038u, 1);  /* 0C0AC036 mov.l Rm,@Rn */
	r4 = r11;  /* 0C0AC038 mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0AC03Cu, 2);  /* 0C0AC03A mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC03Cu); { u32 t_ = r0; PR = 0x0C0AC040u; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AC040u); }  /* 0C0AC03C jsr @Rn */
L_0C0AC040: BLKS(0x0C0AC040u);
	r6 = 0xC0A9AE0u; UPD(0x0C0AC042u, 1);  /* 0C0AC040 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0AC042 mov Rm,Rn */
	r12 = R32(r9 + 0x24u); UPD(0x0C0AC046u, 2);  /* 0C0AC044 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0AC048u, 1);  /* 0C0AC046 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C0AC04Au, 1);  /* 0C0AC048 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC04Au); { u32 t_ = r6; PR = 0x0C0AC04Eu; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AC04Eu); }  /* 0C0AC04A jsr @Rn */
L_0C0AC04E: BLKS(0x0C0AC04Eu);
	r0 = 0xB0u; UPD(0x0C0AC050u, 1);  /* 0C0AC04E mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C0AC052u, 1);  /* 0C0AC050 mov.b @Rm,Rn */
	IF(0x0C0AC052u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AC054u, 1);  /* 0C0AC052 mov.b @(r0,Rm),Rn */
	W8(r10, r2); UPD(0x0C0AC056u, 1);  /* 0C0AC054 mov.b Rm,@Rn */
	IF(0x0C0AC056u); W8(r0 + r8, r5); UPD(0x0C0AC058u, 1);  /* 0C0AC056 mov.b Rm,@(r0,Rn) */
	r4 = 0xACu; UPD(0x0C0AC05Au, 1);  /* 0C0AC058 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0AC05Cu, 1);  /* 0C0AC05A mov.l @Rm,Rn */
	r8 += r4;  /* 0C0AC05C add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C0AC060u, 2);  /* 0C0AC05E mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0AC060 add #imm,Rn */
	{ W8(r8, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C0ABF94u, 4); goto L_0C0ABF94; }  /* 0C0AC062 bra */
}

void blk_f_0C0AC0B0(sh3_t *c)
{
	LOCALS;
L_0C0AC0B0: BLKS(0x0C0AC0B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC0B2u, 1);  /* 0C0AC0B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC0B4u, 1);  /* 0C0AC0B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC0B6u, 1);  /* 0C0AC0B4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC0B8u, 1);  /* 0C0AC0B6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC0BAu, 1);  /* 0C0AC0B8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC0BCu, 1);  /* 0C0AC0BA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC0BEu, 1);  /* 0C0AC0BC mov.l Rm,@-Rn */
	r10 = 0xC2460ACu; UPD(0x0C0AC0C0u, 1);  /* 0C0AC0BE mov.l @(disp,pc),Rn */
	IF(0x0C0AC0C0u); r15 -= 4; W32(r15, PR); UPD(0x0C0AC0C2u, 1);  /* 0C0AC0C0 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C0AC0C4u, 1);  /* 0C0AC0C2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AC0C4 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AC0C8u, 2);  /* 0C0AC0C6 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0AC0C8 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0AC0CCu, 2);  /* 0C0AC0CA mov.l @(disp,pc),Rn */
	IF(0x0C0AC0CCu); { u32 t_ = r8; PR = 0x0C0AC0D0u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0AC0D0u); }  /* 0C0AC0CC jsr @Rn */
L_0C0AC0D0: BLKS(0x0C0AC0D0u);
	T = (r0 & r0) == 0;  /* 0C0AC0D0 tst Rm,Rn */
	if (!T) { UPD(0x0C0AC0F0u, 4); goto L_0C0AC0F0; }  /* 0C0AC0D2 bf */
L_0C0AC0D4: BLKS(0x0C0AC0D4u);
	r0 = 0x1u;  /* 0C0AC0D4 mov #imm,Rn */
	r14 += 0x4u;  /* 0C0AC0D6 add #imm,Rn */
	r15 = r14;  /* 0C0AC0D8 mov Rm,Rn */
	IF(0x0C0AC0DAu); PR = R32(r15); r15 += 4; UPD(0x0C0AC0DCu, 4);  /* 0C0AC0DA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC0DEu, 1);  /* 0C0AC0DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AC0E0u, 1);  /* 0C0AC0DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AC0E2u, 1);  /* 0C0AC0E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AC0E4u, 1);  /* 0C0AC0E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AC0E6u, 1);  /* 0C0AC0E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC0E8u, 1);  /* 0C0AC0E6 mov.l @Rm+,Rn */
	IF(0x0C0AC0E8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC0E8 rts */
L_0C0AC0F0: BLKS(0x0C0AC0F0u);
	r8 = 0xC071740u; UPD(0x0C0AC0F2u, 1);  /* 0C0AC0F0 mov.l @(disp,pc),Rn */
	IF(0x0C0AC0F2u); { u32 t_ = r8; PR = 0x0C0AC0F6u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0AC0F6u); }  /* 0C0AC0F2 jsr @Rn */
L_0C0AC0F6: BLKS(0x0C0AC0F6u);
	T = (r0 & r0) == 0;  /* 0C0AC0F6 tst Rm,Rn */
	if (T) { UPD(0x0C0AC0D4u, 4); goto L_0C0AC0D4; }  /* 0C0AC0F8 bt */
L_0C0AC0FA: BLKS(0x0C0AC0FAu);
	r4 = 0x0u;  /* 0C0AC0FA mov #imm,Rn */
	r8 = 0xC28EDFCu; UPD(0x0C0AC0FEu, 2);  /* 0C0AC0FC mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r12 = v_; } UPD(0x0C0AC100u, 1);  /* 0C0AC0FE mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C0AC102u, 1);  /* 0C0AC100 mov.w @(disp,pc),Rn */
	IF(0x0C0AC102u); MACL = r12 * r9;  /* 0C0AC102 mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0AC106u, 3);  /* 0C0AC104 mov.l @(disp,pc),Rn */
	IF(0x0C0AC106u); r9 = MACL;  /* 0C0AC106 sts macl,Rn */
	r9 += r1;  /* 0C0AC108 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AC10Cu, 3);  /* 0C0AC10A mov.w @Rm,Rn */
	r3 = 0xC0A8A30u; UPD(0x0C0AC10Eu, 1);  /* 0C0AC10C mov.l @(disp,pc),Rn */
	r2 = r5 & 0xFFFF;  /* 0C0AC10E extu.w Rm,Rn */
	r6 = 0xD3000104u; UPD(0x0C0AC112u, 2);  /* 0C0AC110 mov.l @(disp,pc),Rn */
	W32(r9 + 0xCu, r4); UPD(0x0C0AC114u, 1);  /* 0C0AC112 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x8u, r4); UPD(0x0C0AC116u, 1);  /* 0C0AC114 mov.l Rm,@(disp,Rn) */
	W32(r9, r6); UPD(0x0C0AC118u, 1);  /* 0C0AC116 mov.l Rm,@Rn */
	r4 = r12;  /* 0C0AC118 mov Rm,Rn */
	IF(0x0C0AC11Au); { u32 t_ = r3; PR = 0x0C0AC11Eu; W32(r9 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AC11Eu); }  /* 0C0AC11A jsr @Rn */
L_0C0AC11E: BLKS(0x0C0AC11Eu);
	r11 = 0xC0722E0u; UPD(0x0C0AC120u, 1);  /* 0C0AC11E mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0AC120 mov Rm,Rn */
	r0 = 0x1700000u; UPD(0x0C0AC124u, 2);  /* 0C0AC122 mov.l @(disp,pc),Rn */
	IF(0x0C0AC124u); { u32 t_ = r11; PR = 0x0C0AC128u; W32(r9 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C0AC128u); }  /* 0C0AC124 jsr @Rn */
L_0C0AC128: BLKS(0x0C0AC128u);
	r7 = 0xC0A9AE0u; UPD(0x0C0AC12Au, 1);  /* 0C0AC128 mov.l @(disp,pc),Rn */
	r13 = 0x100u; UPD(0x0C0AC12Cu, 1);  /* 0C0AC12A mov.w @(disp,pc),Rn */
	IF(0x0C0AC12Cu); { u32 t_ = r7; PR = 0x0C0AC130u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AC130u); }  /* 0C0AC12C jsr @Rn */
L_0C0AC130: BLKS(0x0C0AC130u);
	r0 = 0x8Au; UPD(0x0C0AC132u, 1);  /* 0C0AC130 mov.w @(disp,pc),Rn */
	r11 = 0x14u;  /* 0C0AC132 mov #imm,Rn */
	IF(0x0C0AC134u); W16(r0 + r9, r13); UPD(0x0C0AC136u, 2);  /* 0C0AC134 mov.w Rm,@(r0,Rn) */
	r4 = 0x20u;  /* 0C0AC136 mov #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0AC138 add #imm,Rn */
	IF(0x0C0AC13Au); W16(r0 + r9, r13); UPD(0x0C0AC13Cu, 3);  /* 0C0AC13A mov.w Rm,@(r0,Rn) */
	r3 = 0x0u;  /* 0C0AC13C mov #imm,Rn */
	r10 = 0x10000u; UPD(0x0C0AC140u, 2);  /* 0C0AC13E mov.l @(disp,pc),Rn */
	r0 += 0x6u;  /* 0C0AC140 add #imm,Rn */
	IF(0x0C0AC142u); W32(r0 + r9, r10); UPD(0x0C0AC144u, 2);  /* 0C0AC142 mov.l Rm,@(r0,Rn) */
	r13 = r9;  /* 0C0AC144 mov Rm,Rn */
	r6 = 0xACu; UPD(0x0C0AC148u, 2);  /* 0C0AC146 mov.w @(disp,pc),Rn */
	r10 = 0xA8u; UPD(0x0C0AC14Au, 1);  /* 0C0AC148 mov.w @(disp,pc),Rn */
	r6 += r9;  /* 0C0AC14A add Rm,Rn */
	r6 += 0x1u;  /* 0C0AC14C add #imm,Rn */
	W32(r14, r6); UPD(0x0C0AC150u, 3);  /* 0C0AC14E mov.l Rm,@Rn */
	r13 += r10;  /* 0C0AC150 add Rm,Rn */
	r13 += 0x1u;  /* 0C0AC152 add #imm,Rn */
	W8(r6, r11); UPD(0x0C0AC156u, 3);  /* 0C0AC154 mov.b Rm,@Rn */
	W8(r13, r11); UPD(0x0C0AC158u, 1);  /* 0C0AC156 mov.b Rm,@Rn */
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C0AC15Au, 1);  /* 0C0AC158 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0AC15Cu, 1);  /* 0C0AC15A mov.w @(disp,pc),Rn */
	IF(0x0C0AC15Cu); MACL = r11 * r8;  /* 0C0AC15C mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0AC160u, 3);  /* 0C0AC15E mov.l @(disp,pc),Rn */
	IF(0x0C0AC160u); r8 = MACL;  /* 0C0AC160 sts macl,Rn */
	r8 += r1;  /* 0C0AC162 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C0AC164 add #imm,Rn */
	W16(r8, r12); UPD(0x0C0AC168u, 4);  /* 0C0AC166 mov.w Rm,@Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0AC16Au, 1);  /* 0C0AC168 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C0AC16A add #imm,Rn */
	r5 = 0xC0000000u; UPD(0x0C0AC16Eu, 2);  /* 0C0AC16C mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C0AC16E add Rm,Rn */
	r2 = R32(r9 + 0x4u); UPD(0x0C0AC172u, 2);  /* 0C0AC170 mov.l @(disp,Rm),Rn */
	r10 += 0x1u;  /* 0C0AC172 add #imm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C0AC176u, 2);  /* 0C0AC174 mov.l Rm,@(disp,Rn) */
	W32(r8, r5); UPD(0x0C0AC178u, 1);  /* 0C0AC176 mov.l Rm,@Rn */
	r4 = r11;  /* 0C0AC178 mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0AC17Cu, 2);  /* 0C0AC17A mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC17Cu); { u32 t_ = r0; PR = 0x0C0AC180u; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AC180u); }  /* 0C0AC17C jsr @Rn */
L_0C0AC180: BLKS(0x0C0AC180u);
	r6 = 0xC0A9AE0u; UPD(0x0C0AC182u, 1);  /* 0C0AC180 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0AC182 mov Rm,Rn */
	r12 = R32(r9 + 0x24u); UPD(0x0C0AC186u, 2);  /* 0C0AC184 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0AC188u, 1);  /* 0C0AC186 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C0AC18Au, 1);  /* 0C0AC188 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC18Au); { u32 t_ = r6; PR = 0x0C0AC18Eu; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AC18Eu); }  /* 0C0AC18A jsr @Rn */
L_0C0AC18E: BLKS(0x0C0AC18Eu);
	r0 = 0xB0u; UPD(0x0C0AC190u, 1);  /* 0C0AC18E mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C0AC192u, 1);  /* 0C0AC190 mov.b @Rm,Rn */
	IF(0x0C0AC192u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AC194u, 1);  /* 0C0AC192 mov.b @(r0,Rm),Rn */
	W8(r10, r2); UPD(0x0C0AC196u, 1);  /* 0C0AC194 mov.b Rm,@Rn */
	IF(0x0C0AC196u); W8(r0 + r8, r5); UPD(0x0C0AC198u, 1);  /* 0C0AC196 mov.b Rm,@(r0,Rn) */
	r4 = 0xACu; UPD(0x0C0AC19Au, 1);  /* 0C0AC198 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0AC19Cu, 1);  /* 0C0AC19A mov.l @Rm,Rn */
	r8 += r4;  /* 0C0AC19C add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C0AC1A0u, 2);  /* 0C0AC19E mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0AC1A0 add #imm,Rn */
	{ W8(r8, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C0AC0D4u, 4); goto L_0C0AC0D4; }  /* 0C0AC1A2 bra */
}

void blk_f_0C0AC1F0(sh3_t *c)
{
	LOCALS;
L_0C0AC1F0: BLKS(0x0C0AC1F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1F2u, 1);  /* 0C0AC1F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1F4u, 1);  /* 0C0AC1F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1F6u, 1);  /* 0C0AC1F4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1F8u, 1);  /* 0C0AC1F6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1FAu, 1);  /* 0C0AC1F8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1FCu, 1);  /* 0C0AC1FA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1FEu, 1);  /* 0C0AC1FC mov.l Rm,@-Rn */
	r10 = 0xC2460ACu; UPD(0x0C0AC200u, 1);  /* 0C0AC1FE mov.l @(disp,pc),Rn */
	IF(0x0C0AC200u); r15 -= 4; W32(r15, PR); UPD(0x0C0AC202u, 1);  /* 0C0AC200 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C0AC204u, 1);  /* 0C0AC202 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AC204 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AC208u, 2);  /* 0C0AC206 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0AC208 mov Rm,Rn */
	r11 = 0x8000u; UPD(0x0C0AC20Cu, 2);  /* 0C0AC20A mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C0AC20C extu.w Rm,Rn */
	IF(0x0C0AC20Eu); { u32 t_ = r8; PR = 0x0C0AC212u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0AC212u); }  /* 0C0AC20E jsr @Rn */
L_0C0AC212: BLKS(0x0C0AC212u);
	T = (r0 & r0) == 0;  /* 0C0AC212 tst Rm,Rn */
	if (!T) { UPD(0x0C0AC230u, 4); goto L_0C0AC230; }  /* 0C0AC214 bf */
L_0C0AC216: BLKS(0x0C0AC216u);
	r0 = 0x1u;  /* 0C0AC216 mov #imm,Rn */
	r14 += 0x4u;  /* 0C0AC218 add #imm,Rn */
	r15 = r14;  /* 0C0AC21A mov Rm,Rn */
	IF(0x0C0AC21Cu); PR = R32(r15); r15 += 4; UPD(0x0C0AC21Eu, 4);  /* 0C0AC21C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC220u, 1);  /* 0C0AC21E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AC222u, 1);  /* 0C0AC220 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AC224u, 1);  /* 0C0AC222 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AC226u, 1);  /* 0C0AC224 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AC228u, 1);  /* 0C0AC226 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC22Au, 1);  /* 0C0AC228 mov.l @Rm+,Rn */
	IF(0x0C0AC22Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC22A rts */
L_0C0AC230: BLKS(0x0C0AC230u);
	r8 = 0xC071740u; UPD(0x0C0AC232u, 1);  /* 0C0AC230 mov.l @(disp,pc),Rn */
	IF(0x0C0AC232u); { u32 t_ = r8; PR = 0x0C0AC236u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0AC236u); }  /* 0C0AC232 jsr @Rn */
L_0C0AC236: BLKS(0x0C0AC236u);
	T = (r0 & r0) == 0;  /* 0C0AC236 tst Rm,Rn */
	if (T) { UPD(0x0C0AC216u, 4); goto L_0C0AC216; }  /* 0C0AC238 bt */
L_0C0AC23A: BLKS(0x0C0AC23Au);
	r3 = 0x0u;  /* 0C0AC23A mov #imm,Rn */
	r8 = 0xC28EDFCu; UPD(0x0C0AC23Eu, 2);  /* 0C0AC23C mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r12 = v_; } UPD(0x0C0AC240u, 1);  /* 0C0AC23E mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C0AC242u, 1);  /* 0C0AC240 mov.w @(disp,pc),Rn */
	IF(0x0C0AC242u); MACL = r12 * r9;  /* 0C0AC242 mul.l Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AC246u, 3);  /* 0C0AC244 mov.w @Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0AC248u, 1);  /* 0C0AC246 mov.l @(disp,pc),Rn */
	IF(0x0C0AC248u); r9 = MACL;  /* 0C0AC248 sts macl,Rn */
	r9 += r1;  /* 0C0AC24A add Rm,Rn */
	r4 = r2 & 0xFFFF;  /* 0C0AC24C extu.w Rm,Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0AC250u, 4);  /* 0C0AC24E mov.l @(disp,pc),Rn */
	r5 = 0xD3000104u; UPD(0x0C0AC252u, 1);  /* 0C0AC250 mov.l @(disp,pc),Rn */
	W32(r9 + 0x4u, r4); UPD(0x0C0AC254u, 1);  /* 0C0AC252 mov.l Rm,@(disp,Rn) */
	W32(r9, r5); UPD(0x0C0AC256u, 1);  /* 0C0AC254 mov.l Rm,@Rn */
	r4 = r12;  /* 0C0AC256 mov Rm,Rn */
	W32(r9 + 0xCu, r3); UPD(0x0C0AC25Au, 2);  /* 0C0AC258 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC25Au); { u32 t_ = r0; PR = 0x0C0AC25Eu; W32(r9 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AC25Eu); }  /* 0C0AC25A jsr @Rn */
L_0C0AC25E: BLKS(0x0C0AC25Eu);
	r10 = 0xC0722E0u; UPD(0x0C0AC260u, 1);  /* 0C0AC25E mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0AC260 mov Rm,Rn */
	r7 = 0x1700000u; UPD(0x0C0AC264u, 2);  /* 0C0AC262 mov.l @(disp,pc),Rn */
	r13 = 0xC0A9AE0u; UPD(0x0C0AC266u, 1);  /* 0C0AC264 mov.l @(disp,pc),Rn */
	IF(0x0C0AC266u); { u32 t_ = r10; PR = 0x0C0AC26Au; W32(r9 + 0x24u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C0AC26Au); }  /* 0C0AC266 jsr @Rn */
L_0C0AC26A: BLKS(0x0C0AC26Au);
	IF(0x0C0AC26Au); { u32 t_ = r13; PR = 0x0C0AC26Eu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AC26Eu); }  /* 0C0AC26A jsr @Rn */
L_0C0AC26E: BLKS(0x0C0AC26Eu);
	r10 = 0x100u; UPD(0x0C0AC270u, 1);  /* 0C0AC26E mov.w @(disp,pc),Rn */
	r13 = r9;  /* 0C0AC270 mov Rm,Rn */
	r0 = 0x8Au; UPD(0x0C0AC274u, 2);  /* 0C0AC272 mov.w @(disp,pc),Rn */
	r4 = 0x20u;  /* 0C0AC274 mov #imm,Rn */
	IF(0x0C0AC276u); W16(r0 + r9, r10); UPD(0x0C0AC278u, 2);  /* 0C0AC276 mov.w Rm,@(r0,Rn) */
	r3 = 0x0u;  /* 0C0AC278 mov #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0AC27A add #imm,Rn */
	IF(0x0C0AC27Cu); W16(r0 + r9, r10); UPD(0x0C0AC27Eu, 3);  /* 0C0AC27C mov.w Rm,@(r0,Rn) */
	r6 = 0xACu; UPD(0x0C0AC280u, 1);  /* 0C0AC27E mov.w @(disp,pc),Rn */
	r0 += 0x6u;  /* 0C0AC280 add #imm,Rn */
	r10 = 0xA8u; UPD(0x0C0AC284u, 2);  /* 0C0AC282 mov.w @(disp,pc),Rn */
	r6 += r9;  /* 0C0AC284 add Rm,Rn */
	r6 += 0x1u;  /* 0C0AC286 add #imm,Rn */
	IF(0x0C0AC288u); W32(r0 + r9, r11); UPD(0x0C0AC28Au, 3);  /* 0C0AC288 mov.l Rm,@(r0,Rn) */
	r13 += r10;  /* 0C0AC28A add Rm,Rn */
	W32(r14, r6); UPD(0x0C0AC28Eu, 2);  /* 0C0AC28C mov.l Rm,@Rn */
	r11 = 0x14u;  /* 0C0AC28E mov #imm,Rn */
	r13 += 0x1u;  /* 0C0AC290 add #imm,Rn */
	W8(r6, r11); UPD(0x0C0AC294u, 3);  /* 0C0AC292 mov.b Rm,@Rn */
	W8(r13, r11); UPD(0x0C0AC296u, 1);  /* 0C0AC294 mov.b Rm,@Rn */
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C0AC298u, 1);  /* 0C0AC296 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0AC29Au, 1);  /* 0C0AC298 mov.w @(disp,pc),Rn */
	IF(0x0C0AC29Au); MACL = r11 * r8;  /* 0C0AC29A mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0AC29Eu, 3);  /* 0C0AC29C mov.l @(disp,pc),Rn */
	IF(0x0C0AC29Eu); r8 = MACL;  /* 0C0AC29E sts macl,Rn */
	r8 += r1;  /* 0C0AC2A0 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C0AC2A2 add #imm,Rn */
	W16(r8, r12); UPD(0x0C0AC2A6u, 4);  /* 0C0AC2A4 mov.w Rm,@Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0AC2A8u, 1);  /* 0C0AC2A6 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C0AC2A8 add #imm,Rn */
	r5 = 0xC0000000u; UPD(0x0C0AC2ACu, 2);  /* 0C0AC2AA mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C0AC2AC add Rm,Rn */
	r2 = R32(r9 + 0x4u); UPD(0x0C0AC2B0u, 2);  /* 0C0AC2AE mov.l @(disp,Rm),Rn */
	r10 += 0x1u;  /* 0C0AC2B0 add #imm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C0AC2B4u, 2);  /* 0C0AC2B2 mov.l Rm,@(disp,Rn) */
	W32(r8, r5); UPD(0x0C0AC2B6u, 1);  /* 0C0AC2B4 mov.l Rm,@Rn */
	r4 = r11;  /* 0C0AC2B6 mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0AC2BAu, 2);  /* 0C0AC2B8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC2BAu); { u32 t_ = r0; PR = 0x0C0AC2BEu; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AC2BEu); }  /* 0C0AC2BA jsr @Rn */
L_0C0AC2BE: BLKS(0x0C0AC2BEu);
	r6 = 0xC0A9AE0u; UPD(0x0C0AC2C0u, 1);  /* 0C0AC2BE mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0AC2C0 mov Rm,Rn */
	r12 = R32(r9 + 0x24u); UPD(0x0C0AC2C4u, 2);  /* 0C0AC2C2 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0AC2C6u, 1);  /* 0C0AC2C4 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C0AC2C8u, 1);  /* 0C0AC2C6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC2C8u); { u32 t_ = r6; PR = 0x0C0AC2CCu; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AC2CCu); }  /* 0C0AC2C8 jsr @Rn */
L_0C0AC2CC: BLKS(0x0C0AC2CCu);
	r0 = 0xB0u; UPD(0x0C0AC2CEu, 1);  /* 0C0AC2CC mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C0AC2D0u, 1);  /* 0C0AC2CE mov.b @Rm,Rn */
	IF(0x0C0AC2D0u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AC2D2u, 1);  /* 0C0AC2D0 mov.b @(r0,Rm),Rn */
	W8(r10, r2); UPD(0x0C0AC2D4u, 1);  /* 0C0AC2D2 mov.b Rm,@Rn */
	IF(0x0C0AC2D4u); W8(r0 + r8, r5); UPD(0x0C0AC2D6u, 1);  /* 0C0AC2D4 mov.b Rm,@(r0,Rn) */
	r4 = 0xACu; UPD(0x0C0AC2D8u, 1);  /* 0C0AC2D6 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0AC2DAu, 1);  /* 0C0AC2D8 mov.l @Rm,Rn */
	r8 += r4;  /* 0C0AC2DA add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C0AC2DEu, 2);  /* 0C0AC2DC mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0AC2DE add #imm,Rn */
	{ W8(r8, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C0AC216u, 4); goto L_0C0AC216; }  /* 0C0AC2E0 bra */
}

void blk_f_0C0AC430(sh3_t *c)
{
	LOCALS;
L_0C0AC430: BLKS(0x0C0AC430u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC432u, 1);  /* 0C0AC430 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC434u, 1);  /* 0C0AC432 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC436u, 1);  /* 0C0AC434 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC438u, 1);  /* 0C0AC436 mov.l Rm,@-Rn */
	r10 = 0xC2460ACu; UPD(0x0C0AC43Au, 1);  /* 0C0AC438 mov.l @(disp,pc),Rn */
	IF(0x0C0AC43Au); r15 -= 4; W32(r15, PR); UPD(0x0C0AC43Cu, 1);  /* 0C0AC43A sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C0AC43Eu, 1);  /* 0C0AC43C mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AC43E mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AC442u, 2);  /* 0C0AC440 mov.w @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0AC444u, 1);  /* 0C0AC442 mov.l @(disp,pc),Rn */
	IF(0x0C0AC444u); { u32 t_ = r8; PR = 0x0C0AC448u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0AC448u); }  /* 0C0AC444 jsr @Rn */
L_0C0AC448: BLKS(0x0C0AC448u);
	T = (r0 & r0) == 0;  /* 0C0AC448 tst Rm,Rn */
	if (!T) { UPD(0x0C0AC460u, 4); goto L_0C0AC460; }  /* 0C0AC44A bf */
L_0C0AC44C: BLKS(0x0C0AC44Cu);
	r0 = 0x1u;  /* 0C0AC44C mov #imm,Rn */
	r15 = r14;  /* 0C0AC44E mov Rm,Rn */
	IF(0x0C0AC450u); PR = R32(r15); r15 += 4; UPD(0x0C0AC452u, 3);  /* 0C0AC450 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC454u, 1);  /* 0C0AC452 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AC456u, 1);  /* 0C0AC454 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC458u, 1);  /* 0C0AC456 mov.l @Rm+,Rn */
	IF(0x0C0AC458u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC458 rts */
L_0C0AC460: BLKS(0x0C0AC460u);
	r8 = 0xC071740u; UPD(0x0C0AC462u, 1);  /* 0C0AC460 mov.l @(disp,pc),Rn */
	IF(0x0C0AC462u); { u32 t_ = r8; PR = 0x0C0AC466u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0AC466u); }  /* 0C0AC462 jsr @Rn */
L_0C0AC466: BLKS(0x0C0AC466u);
	T = (r0 & r0) == 0;  /* 0C0AC466 tst Rm,Rn */
	if (T) { UPD(0x0C0AC44Cu, 4); goto L_0C0AC44C; }  /* 0C0AC468 bt */
L_0C0AC46A: BLKS(0x0C0AC46Au);
	r0 = 0x0u;  /* 0C0AC46A mov #imm,Rn */
	r6 = 0xC28EDFCu; UPD(0x0C0AC46Eu, 2);  /* 0C0AC46C mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)R16(r6); UPD(0x0C0AC470u, 1);  /* 0C0AC46E mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0AC472u, 1);  /* 0C0AC470 mov.w @(disp,pc),Rn */
	IF(0x0C0AC472u); MACL = r9 * r8;  /* 0C0AC472 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0AC476u, 3);  /* 0C0AC474 mov.l @(disp,pc),Rn */
	IF(0x0C0AC476u); r8 = MACL;  /* 0C0AC476 sts macl,Rn */
	r4 = 0xD3000104u; UPD(0x0C0AC47Au, 2);  /* 0C0AC478 mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C0AC47A add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AC47Eu, 2);  /* 0C0AC47C mov.w @Rm,Rn */
	r7 = 0xC0A8A30u; UPD(0x0C0AC480u, 1);  /* 0C0AC47E mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFFFF;  /* 0C0AC480 extu.w Rm,Rn */
	W32(r8, r4); UPD(0x0C0AC484u, 2);  /* 0C0AC482 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0AC486u, 1);  /* 0C0AC484 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0AC486 mov Rm,Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C0AC48Au, 2);  /* 0C0AC488 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC48Au); { u32 t_ = r7; PR = 0x0C0AC48Eu; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AC48Eu); }  /* 0C0AC48A jsr @Rn */
L_0C0AC48E: BLKS(0x0C0AC48Eu);
	r10 = 0xC0722E0u; UPD(0x0C0AC490u, 1);  /* 0C0AC48E mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0AC490 mov Rm,Rn */
	r6 = 0x1600000u; UPD(0x0C0AC494u, 2);  /* 0C0AC492 mov.l @(disp,pc),Rn */
	IF(0x0C0AC494u); { u32 t_ = r10; PR = 0x0C0AC498u; W32(r8 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C0AC498u); }  /* 0C0AC494 jsr @Rn */
L_0C0AC498: BLKS(0x0C0AC498u);
	r5 = 0xC0A9AE0u; UPD(0x0C0AC49Au, 1);  /* 0C0AC498 mov.l @(disp,pc),Rn */
	IF(0x0C0AC49Au); { u32 t_ = r5; PR = 0x0C0AC49Eu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AC49Eu); }  /* 0C0AC49A jsr @Rn */
L_0C0AC49E: BLKS(0x0C0AC49Eu);
	r0 = 0x86u; UPD(0x0C0AC4A0u, 1);  /* 0C0AC49E mov.w @(disp,pc),Rn */
	r2 = 0x14u;  /* 0C0AC4A0 mov #imm,Rn */
	r4 = 0x100u; UPD(0x0C0AC4A4u, 2);  /* 0C0AC4A2 mov.w @(disp,pc),Rn */
	IF(0x0C0AC4A4u); W16(r0 + r8, r4); UPD(0x0C0AC4A6u, 1);  /* 0C0AC4A4 mov.w Rm,@(r0,Rn) */
	r3 = 0x30000u; UPD(0x0C0AC4A8u, 1);  /* 0C0AC4A6 mov.l @(disp,pc),Rn */
	r0 += 0x6u;  /* 0C0AC4A8 add #imm,Rn */
	IF(0x0C0AC4AAu); W32(r0 + r8, r3); UPD(0x0C0AC4ACu, 2);  /* 0C0AC4AA mov.l Rm,@(r0,Rn) */
	r0 += 0x21u;  /* 0C0AC4AC add #imm,Rn */
	IF(0x0C0AC4AEu); W8(r0 + r8, r2); UPD(0x0C0AC4B0u, 2);  /* 0C0AC4AE mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0AC4B0 add #imm,Rn */
	{ IF(0x0C0AC4B4u); W8(r0 + r8, r2); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0AC44Cu, 4); goto L_0C0AC44C; }  /* 0C0AC4B2 bra */
}

void blk_f_0C0AC5E0(sh3_t *c)
{
	LOCALS;
L_0C0AC5E0: BLKS(0x0C0AC5E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC5E2u, 1);  /* 0C0AC5E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC5E4u, 1);  /* 0C0AC5E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC5E6u, 1);  /* 0C0AC5E4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC5E8u, 1);  /* 0C0AC5E6 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC5EAu, 1);  /* 0C0AC5E8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0AC5EA exts.w Rm,Rn */
	r5 = 0xC08B940u; UPD(0x0C0AC5EEu, 2);  /* 0C0AC5EC mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0AC5EE mov Rm,Rn */
	IF(0x0C0AC5F0u); r15 -= 4; W32(r15, PR); UPD(0x0C0AC5F2u, 2);  /* 0C0AC5F0 sts.l pr,@-Rn */
	IF(0x0C0AC5F2u); { u32 t_ = r5; PR = 0x0C0AC5F6u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C08B940, 0x0C08B940u, 0x0C0AC5F6u); }  /* 0C0AC5F2 jsr @Rn */
L_0C0AC5F6: BLKS(0x0C0AC5F6u);
	r3 = 0xB4u; UPD(0x0C0AC5F8u, 1);  /* 0C0AC5F6 mov.w @(disp,pc),Rn */
	IF(0x0C0AC5F8u); MACL = r11 * r3;  /* 0C0AC5F8 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AC5FCu, 3);  /* 0C0AC5FA mov.l @(disp,pc),Rn */
	IF(0x0C0AC5FCu); r9 = MACL;  /* 0C0AC5FC sts macl,Rn */
	r9 += r0;  /* 0C0AC5FE add Rm,Rn */
	r8 = 0x8Cu; UPD(0x0C0AC602u, 3);  /* 0C0AC600 mov.w @(disp,pc),Rn */
	r10 = 0x86u; UPD(0x0C0AC604u, 1);  /* 0C0AC602 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C0AC604 add Rm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0AC608u, 2);  /* 0C0AC606 mov.l @(disp,pc),Rn */
	r10 += r9;  /* 0C0AC608 add Rm,Rn */
	r5 = R32(r8); UPD(0x0C0AC60Cu, 2);  /* 0C0AC60A mov.l @Rm,Rn */
	IF(0x0C0AC60Cu); { u32 t_ = r0; PR = 0x0C0AC610u; r4 = (u32)(s32)(s16)R16(r10); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0AC610u); }  /* 0C0AC60C jsr @Rn */
L_0C0AC610: BLKS(0x0C0AC610u);
	r5 = R32(r8); UPD(0x0C0AC612u, 1);  /* 0C0AC610 mov.l @Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C0AC614u, 1);  /* 0C0AC612 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AC616u, 1);  /* 0C0AC614 mov.w @Rm,Rn */
	IF(0x0C0AC616u); { u32 t_ = r8; PR = 0x0C0AC61Au; W32(r9 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0AC61Au); }  /* 0C0AC616 jsr @Rn */
L_0C0AC61A: BLKS(0x0C0AC61Au);
	r4 = R32(r9 + 0x24u); UPD(0x0C0AC61Cu, 1);  /* 0C0AC61A mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0AC61Eu, 1);  /* 0C0AC61C mov.l @(disp,Rm),Rn */
	r2 = R32(r9 + 0x2Cu); UPD(0x0C0AC620u, 1);  /* 0C0AC61E mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C0AC620 add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C0AC624u, 2);  /* 0C0AC622 mov.l @(disp,pc),Rn */
	r4 += r2;  /* 0C0AC624 add Rm,Rn */
	r3 += r4;  /* 0C0AC626 add Rm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C0AC62Au, 3);  /* 0C0AC628 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC62Au); T = (s32)r3 >= 0;  /* 0C0AC62A cmp/pz Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C0AC62Eu, 2);  /* 0C0AC62C mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r9 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AC710u, 3); goto L_0C0AC710; } UPD(0x0C0AC632u, 1); goto L_0C0AC632; }  /* 0C0AC62E bf/s */
L_0C0AC632: BLKS(0x0C0AC632u);
	r4 = 0xD00000u; UPD(0x0C0AC634u, 1);  /* 0C0AC632 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r4;  /* 0C0AC634 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0AC64Eu, 4); goto L_0C0AC64E; }  /* 0C0AC636 bt */
L_0C0AC638: BLKS(0x0C0AC638u);
	r2 = 0xC3C4048u; UPD(0x0C0AC63Au, 1);  /* 0C0AC638 mov.l @(disp,pc),Rn */
	r8 = R32(r2); UPD(0x0C0AC63Cu, 1);  /* 0C0AC63A mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0AC63Eu, 1);  /* 0C0AC63C mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C0AC63E mov Rm,Rn */
	r2 -= r8;  /* 0C0AC640 sub Rm,Rn */
	r2 += r6;  /* 0C0AC642 add Rm,Rn */
	IF(0x0C0AC644u); T = (s32)r2 >= 0;  /* 0C0AC644 cmp/pz Rn */
	if (!T) { UPD(0x0C0AC700u, 7); goto L_0C0AC700; }  /* 0C0AC646 bf */
L_0C0AC648: BLKS(0x0C0AC648u);
	r7 = 0xA80000u; UPD(0x0C0AC64Au, 1);  /* 0C0AC648 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C0AC64A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AC6E0u, 4); goto L_0C0AC6E0; }  /* 0C0AC64C bf */
L_0C0AC64E: BLKS(0x0C0AC64Eu);
	r10 = 0x0u;  /* 0C0AC64E mov #imm,Rn */
	W32(r9, r10); UPD(0x0C0AC652u, 2);  /* 0C0AC650 mov.l Rm,@Rn */
	r1 = 0x1u;  /* 0C0AC652 mov #imm,Rn */
	UPD(0x0C0AC654u, 1);
L_0C0AC654: BLKS(0x0C0AC654u);
	r0 = (u32)(s32)(s16)r1;  /* 0C0AC654 exts.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AC656 tst Rm,Rn */
	if (T) { UPD(0x0C0AC670u, 5); goto L_0C0AC670; }  /* 0C0AC658 bt */
L_0C0AC65A: BLKS(0x0C0AC65Au);
	r15 = r14;  /* 0C0AC65A mov Rm,Rn */
	IF(0x0C0AC65Cu); PR = R32(r15); r15 += 4; UPD(0x0C0AC65Eu, 2);  /* 0C0AC65C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC660u, 1);  /* 0C0AC65E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AC662u, 1);  /* 0C0AC660 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AC664u, 1);  /* 0C0AC662 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC666u, 1);  /* 0C0AC664 mov.l @Rm+,Rn */
	IF(0x0C0AC666u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC666 rts */
L_0C0AC670: BLKS(0x0C0AC670u);
	r8 = 0xC0BC1B0u; UPD(0x0C0AC672u, 1);  /* 0C0AC670 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0AC672 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C0AC674 mov #imm,Rn */
	IF(0x0C0AC676u); { u32 t_ = r8; PR = 0x0C0AC67Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0AC67Au); }  /* 0C0AC676 jsr @Rn */
L_0C0AC67A: BLKS(0x0C0AC67Au);
	T = (r0 & r0) == 0;  /* 0C0AC67A tst Rm,Rn */
	if (T) { UPD(0x0C0AC65Au, 4); goto L_0C0AC65A; }  /* 0C0AC67C bt */
L_0C0AC67E: BLKS(0x0C0AC67Eu);
	r7 = 0xB4u; UPD(0x0C0AC680u, 1);  /* 0C0AC67E mov.w @(disp,pc),Rn */
	IF(0x0C0AC680u); MACL = r11 * r7;  /* 0C0AC680 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0AC684u, 3);  /* 0C0AC682 mov.l @(disp,pc),Rn */
	IF(0x0C0AC684u); r8 = MACL;  /* 0C0AC684 sts macl,Rn */
	r8 += r2;  /* 0C0AC686 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C0AC68Au, 3);  /* 0C0AC688 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0AC68A mov Rm,Rn */
	IF(0x0C0AC68Cu); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0AC68Eu, 2);  /* 0C0AC68C mov.b @(r0,Rm),Rn */
	r10 = 0xC0BBF10u; UPD(0x0C0AC690u, 1);  /* 0C0AC68E mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C0AC690 extu.b Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0AC694u, 2);  /* 0C0AC692 mov.l @(disp,Rm),Rn */
	IF(0x0C0AC694u); { u32 t_ = r10; PR = 0x0C0AC698u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C0AC698u); }  /* 0C0AC694 jsr @Rn */
L_0C0AC698: BLKS(0x0C0AC698u);
	T = (r0 & r0) == 0;  /* 0C0AC698 tst Rm,Rn */
	if (T) { UPD(0x0C0AC65Au, 4); goto L_0C0AC65A; }  /* 0C0AC69A bt */
L_0C0AC69C: BLKS(0x0C0AC69Cu);
	r4 = r11;  /* 0C0AC69C mov Rm,Rn */
	r11 = 0xC069B50u; UPD(0x0C0AC6A0u, 2);  /* 0C0AC69E mov.l @(disp,pc),Rn */
	r10 = 0xC068E60u; UPD(0x0C0AC6A2u, 1);  /* 0C0AC6A0 mov.l @(disp,pc),Rn */
	IF(0x0C0AC6A2u); { u32 t_ = r11; PR = 0x0C0AC6A6u; IF(0x0C0AC6A4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0AC6A6u); }  /* 0C0AC6A2 jsr @Rn */
L_0C0AC6A6: BLKS(0x0C0AC6A6u);
	r4 = 0x2A0u; UPD(0x0C0AC6A8u, 1);  /* 0C0AC6A6 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C0AC6A8 exts.w Rm,Rn */
	IF(0x0C0AC6AAu); MACL = r1 * r4;  /* 0C0AC6AA mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C0AC6AEu, 4);  /* 0C0AC6AC mov.l @(disp,pc),Rn */
	IF(0x0C0AC6AEu); r0 = MACL;  /* 0C0AC6AE sts macl,Rn */
	r0 += r5;  /* 0C0AC6B0 add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0AC6B4u, 3);  /* 0C0AC6B2 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0AC6B6u, 1);  /* 0C0AC6B4 mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C0AC6B8u, 1);  /* 0C0AC6B6 mov.l @(disp,Rm),Rn */
	IF(0x0C0AC6B8u); { u32 t_ = r10; PR = 0x0C0AC6BCu; r7 = R32(r0 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0AC6BCu); }  /* 0C0AC6B8 jsr @Rn */
L_0C0AC6BC: BLKS(0x0C0AC6BCu);
	r3 = 0x28000u; UPD(0x0C0AC6BEu, 1);  /* 0C0AC6BC mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AC6BE add #imm,Rn */
	r11 = 0xC0BA480u; UPD(0x0C0AC6C2u, 2);  /* 0C0AC6C0 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r0;  /* 0C0AC6C2 exts.w Rm,Rn */
	W32(r15, r3); UPD(0x0C0AC6C6u, 2);  /* 0C0AC6C4 mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C0AC6C6 mov #imm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0AC6CAu, 2);  /* 0C0AC6C8 mov.l @(disp,Rm),Rn */
	r7 = r9;  /* 0C0AC6CA mov Rm,Rn */
	IF(0x0C0AC6CCu); { u32 t_ = r11; PR = 0x0C0AC6D0u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C0AC6D0u); }  /* 0C0AC6CC jsr @Rn */
L_0C0AC6D0: BLKS(0x0C0AC6D0u);
	{ IF(0x0C0AC6D2u); ; /* slot nop */ UPD(0x0C0AC65Au, 3); goto L_0C0AC65A; }  /* 0C0AC6D0 bra */
L_0C0AC6E0: BLKS(0x0C0AC6E0u);
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AC6E2u, 1);  /* 0C0AC6E0 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C0AC6E2 add #imm,Rn */
	IF(0x0C0AC6E4u); r0 >>= 2;  /* 0C0AC6E4 shlr2 Rn */
	IF(0x0C0AC6E6u); r0 >>= 2;  /* 0C0AC6E6 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C0AC6E8 and #imm,r0 */
	W32(r9 + 0x8u, r0); UPD(0x0C0AC6ECu, 5);  /* 0C0AC6EA mov.l Rm,@(disp,Rn) */
	r0 = R32(r9 + 0xCu); UPD(0x0C0AC6EEu, 1);  /* 0C0AC6EC mov.l @(disp,Rm),Rn */
	r5 = 0xC1A0158u; UPD(0x0C0AC6F0u, 1);  /* 0C0AC6EE mov.l @(disp,pc),Rn */
	IF(0x0C0AC6F0u); r0 <<= 2;  /* 0C0AC6F0 shll2 Rn */
	IF(0x0C0AC6F2u); r3 = R32(r0 + r5); UPD(0x0C0AC6F4u, 2);  /* 0C0AC6F2 mov.l @(r0,Rm),Rn */
	W32(r9 + 0xCu, r3); UPD(0x0C0AC6F6u, 1);  /* 0C0AC6F4 mov.l Rm,@(disp,Rn) */
	r9 = 0xC0A8B10u; UPD(0x0C0AC6F8u, 1);  /* 0C0AC6F6 mov.l @(disp,pc),Rn */
	IF(0x0C0AC6F8u); { u32 t_ = r9; PR = 0x0C0AC6FCu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C0AC6FCu); }  /* 0C0AC6F8 jsr @Rn */
L_0C0AC6FC: BLKS(0x0C0AC6FCu);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0AC654u, 3); goto L_0C0AC654; }  /* 0C0AC6FC bra */
L_0C0AC700: BLKS(0x0C0AC700u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AC648u, 3); goto L_0C0AC648; }  /* 0C0AC700 bra */
L_0C0AC710: BLKS(0x0C0AC710u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C0AC632u, 3); goto L_0C0AC632; }  /* 0C0AC710 bra */
}

void blk_f_0C0AC7C0(sh3_t *c)
{
	LOCALS;
L_0C0AC7C0: BLKS(0x0C0AC7C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC7C2u, 1);  /* 0C0AC7C0 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0AC7C2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC7C6u, 2);  /* 0C0AC7C4 mov.l Rm,@-Rn */
	r5 = 0xB4u; UPD(0x0C0AC7C8u, 1);  /* 0C0AC7C6 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC7CAu, 1);  /* 0C0AC7C8 mov.l Rm,@-Rn */
	IF(0x0C0AC7CAu); MACL = r1 * r5;  /* 0C0AC7CA mul.l Rm,Rn */
	IF(0x0C0AC7CCu); r15 -= 4; W32(r15, PR); UPD(0x0C0AC7CEu, 3);  /* 0C0AC7CC sts.l pr,@-Rn */
	r9 = 0xC0C2360u; UPD(0x0C0AC7D0u, 1);  /* 0C0AC7CE mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AC7D0 mov Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AC7D4u, 2);  /* 0C0AC7D2 mov.l @(disp,pc),Rn */
	IF(0x0C0AC7D4u); r8 = MACL;  /* 0C0AC7D4 sts macl,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AC7D6 add #imm,Rn */
	IF(0x0C0AC7D8u); { u32 t_ = r9; PR = 0x0C0AC7DCu; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AC7DCu); }  /* 0C0AC7D8 jsr @Rn */
L_0C0AC7DC: BLKS(0x0C0AC7DCu);
	r3 = 0x28000u; UPD(0x0C0AC7DEu, 1);  /* 0C0AC7DC mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0AC7DE mov #imm,Rn */
	r2 = 0xC18A00Au; UPD(0x0C0AC7E2u, 2);  /* 0C0AC7E0 mov.l @(disp,pc),Rn */
	r7 = r0;  /* 0C0AC7E2 mov Rm,Rn */
	r9 = 0xC0BA970u; UPD(0x0C0AC7E6u, 2);  /* 0C0AC7E4 mov.l @(disp,pc),Rn */
	W32(r15, r3); UPD(0x0C0AC7E8u, 1);  /* 0C0AC7E6 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0AC7EAu, 1);  /* 0C0AC7E8 mov.l Rm,@(disp,Rn) */
	r5 = R32(r8 + 0x24u); UPD(0x0C0AC7ECu, 1);  /* 0C0AC7EA mov.l @(disp,Rm),Rn */
	IF(0x0C0AC7ECu); { u32 t_ = r9; PR = 0x0C0AC7F0u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C0AC7F0u); }  /* 0C0AC7EC jsr @Rn */
L_0C0AC7F0: BLKS(0x0C0AC7F0u);
	r0 = 0x14u;  /* 0C0AC7F0 mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AC7F4u, 2);  /* 0C0AC7F2 mov.l Rm,@(disp,Rn) */
	r9 = 0x0u;  /* 0C0AC7F4 mov #imm,Rn */
	r0 = 0xC0C02E0u; UPD(0x0C0AC7F8u, 2);  /* 0C0AC7F6 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0AC7F8 mov #imm,Rn */
	W32(r15, r9); UPD(0x0C0AC7FCu, 2);  /* 0C0AC7FA mov.l Rm,@Rn */
	r4 = R32(r8); UPD(0x0C0AC7FEu, 1);  /* 0C0AC7FC mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AC800u, 1);  /* 0C0AC7FE mov.l @(disp,Rm),Rn */
	IF(0x0C0AC800u); { u32 t_ = r0; PR = 0x0C0AC804u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C02E0, 0x0C0C02E0u, 0x0C0AC804u); }  /* 0C0AC800 jsr @Rn */
L_0C0AC804: BLKS(0x0C0AC804u);
	W32(r8, r9); UPD(0x0C0AC806u, 1);  /* 0C0AC804 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0AC806 mov Rm,Rn */
	IF(0x0C0AC808u); PR = R32(r15); r15 += 4; UPD(0x0C0AC80Au, 2);  /* 0C0AC808 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC80Cu, 1);  /* 0C0AC80A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC80Eu, 1);  /* 0C0AC80C mov.l @Rm+,Rn */
	IF(0x0C0AC80Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC80E rts */
}

void blk_f_0C0AC830(sh3_t *c)
{
	LOCALS;
L_0C0AC830: BLKS(0x0C0AC830u);
	r3 = 0xB4u; UPD(0x0C0AC832u, 1);  /* 0C0AC830 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0AC832 exts.w Rm,Rn */
	IF(0x0C0AC834u); MACL = r4 * r3;  /* 0C0AC834 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AC838u, 4);  /* 0C0AC836 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC83Au, 1);  /* 0C0AC838 mov.l Rm,@-Rn */
	IF(0x0C0AC83Au); r3 = MACL;  /* 0C0AC83A sts macl,Rn */
	r3 += r0;  /* 0C0AC83C add Rm,Rn */
	r0 = R32(r3 + 0x24u); UPD(0x0C0AC840u, 3);  /* 0C0AC83E mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0AC840 mov Rm,Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C0AC844u, 2);  /* 0C0AC842 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x2Cu); UPD(0x0C0AC846u, 1);  /* 0C0AC844 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C0AC848u, 1);  /* 0C0AC846 mov.l @(disp,Rm),Rn */
	r0 += r5;  /* 0C0AC848 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0AC84Cu, 2);  /* 0C0AC84A mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0AC84C add Rm,Rn */
	r7 += r0;  /* 0C0AC84E add Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C0AC852u, 3);  /* 0C0AC850 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC852u); T = (s32)r7 >= 0;  /* 0C0AC852 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AC8B0u, 4); goto L_0C0AC8B0; } UPD(0x0C0AC858u, 1); goto L_0C0AC858; }  /* 0C0AC854 bf/s */
L_0C0AC858: BLKS(0x0C0AC858u);
	r2 = 0xA80000u; UPD(0x0C0AC85Au, 1);  /* 0C0AC858 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r2;  /* 0C0AC85A cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0AC874u, 4); goto L_0C0AC874; }  /* 0C0AC85C bt */
L_0C0AC85E: BLKS(0x0C0AC85Eu);
	r2 = r6;  /* 0C0AC85E mov Rm,Rn */
	r5 = 0xC3C4048u; UPD(0x0C0AC862u, 2);  /* 0C0AC860 mov.l @(disp,pc),Rn */
	r7 = R32(r5); UPD(0x0C0AC864u, 1);  /* 0C0AC862 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0AC866u, 1);  /* 0C0AC864 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0AC866 sub Rm,Rn */
	r2 += r6;  /* 0C0AC868 add Rm,Rn */
	IF(0x0C0AC86Au); T = (s32)r2 >= 0;  /* 0C0AC86A cmp/pz Rn */
	if (!T) { UPD(0x0C0AC8A0u, 6); goto L_0C0AC8A0; }  /* 0C0AC86C bf */
L_0C0AC86E: BLKS(0x0C0AC86Eu);
	r0 = 0x800000u; UPD(0x0C0AC870u, 1);  /* 0C0AC86E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0AC870 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AC880u, 4); goto L_0C0AC880; }  /* 0C0AC872 bf */
L_0C0AC874: BLKS(0x0C0AC874u);
	r4 = 0x0u;  /* 0C0AC874 mov #imm,Rn */
	W32(r3, r4); UPD(0x0C0AC878u, 2);  /* 0C0AC876 mov.l Rm,@Rn */
L_0C0AC878: BLKS(0x0C0AC878u);
	r15 = r14;  /* 0C0AC878 mov Rm,Rn */
	IF(0x0C0AC87Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AC87A rts */
L_0C0AC880: BLKS(0x0C0AC880u);
	r2 = 0x99u; UPD(0x0C0AC882u, 1);  /* 0C0AC880 mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0AC882 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AC886u, 2);  /* 0C0AC884 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0AC886 add #imm,Rn */
	W8(r2, r0); UPD(0x0C0AC88Au, 2);  /* 0C0AC888 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C0AC88A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0AC88C tst Rm,Rn */
	if (T) { UPD(0x0C0AC878u, 5); goto L_0C0AC878; }  /* 0C0AC88E bt */
L_0C0AC890: BLKS(0x0C0AC890u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0AC892u, 1);  /* 0C0AC890 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0AC892 add #imm,Rn */
	r0 &= 0x3u;  /* 0C0AC894 and #imm,r0 */
	W32(r3 + 0xCu, r0); UPD(0x0C0AC898u, 3);  /* 0C0AC896 mov.l Rm,@(disp,Rn) */
	r3 = 0xC0A8AE0u; UPD(0x0C0AC89Au, 1);  /* 0C0AC898 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0AC89A mov Rm,Rn */
	IF(0x0C0AC89Cu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C0AC89C jmp @Rn */
L_0C0AC8A0: BLKS(0x0C0AC8A0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AC86Eu, 3); goto L_0C0AC86E; }  /* 0C0AC8A0 bra */
L_0C0AC8B0: BLKS(0x0C0AC8B0u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0AC858u, 3); goto L_0C0AC858; }  /* 0C0AC8B0 bra */
}

void blk_f_0C0AC9B0(sh3_t *c)
{
	LOCALS;
L_0C0AC9B0: BLKS(0x0C0AC9B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC9B2u, 1);  /* 0C0AC9B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC9B4u, 1);  /* 0C0AC9B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC9B6u, 1);  /* 0C0AC9B4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC9B8u, 1);  /* 0C0AC9B6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC9BAu, 1);  /* 0C0AC9B8 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC9BCu, 1);  /* 0C0AC9BA mov.l Rm,@-Rn */
	r8 = 0xC062780u; UPD(0x0C0AC9BEu, 1);  /* 0C0AC9BC mov.l @(disp,pc),Rn */
	IF(0x0C0AC9BEu); r15 -= 4; W32(r15, PR); UPD(0x0C0AC9C0u, 1);  /* 0C0AC9BE sts.l pr,@-Rn */
	r4 = 0xB0u; UPD(0x0C0AC9C2u, 1);  /* 0C0AC9C0 mov.w @(disp,pc),Rn */
	IF(0x0C0AC9C2u); { u32 t_ = r8; PR = 0x0C0AC9C6u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AC9C6u); }  /* 0C0AC9C2 jsr @Rn */
L_0C0AC9C6: BLKS(0x0C0AC9C6u);
	r2 = 0xC3C4048u; UPD(0x0C0AC9C8u, 1);  /* 0C0AC9C6 mov.l @(disp,pc),Rn */
	r0 += 0x20u;  /* 0C0AC9C8 add #imm,Rn */
	r8 = 0xC071740u; UPD(0x0C0AC9CCu, 2);  /* 0C0AC9CA mov.l @(disp,pc),Rn */
	IF(0x0C0AC9CCu); r0 <<= 16;  /* 0C0AC9CC shll16 Rn */
	r10 = R32(r2); UPD(0x0C0AC9D0u, 2);  /* 0C0AC9CE mov.l @Rm,Rn */
	r4 = 0x1u;  /* 0C0AC9D0 mov #imm,Rn */
	r11 = 0x100u; UPD(0x0C0AC9D4u, 2);  /* 0C0AC9D2 mov.w @(disp,pc),Rn */
	IF(0x0C0AC9D4u); { u32 t_ = r8; PR = 0x0C0AC9D8u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0AC9D8u); }  /* 0C0AC9D4 jsr @Rn */
L_0C0AC9D8: BLKS(0x0C0AC9D8u);
	r12 = 0x20000u; UPD(0x0C0AC9DAu, 1);  /* 0C0AC9D8 mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C0AC9DA tst Rm,Rn */
	if (!T) { UPD(0x0C0ACA00u, 4); goto L_0C0ACA00; }  /* 0C0AC9DC bf */
L_0C0AC9DE: BLKS(0x0C0AC9DEu);
	r0 = 0x1u;  /* 0C0AC9DE mov #imm,Rn */
	r15 = r14;  /* 0C0AC9E0 mov Rm,Rn */
	IF(0x0C0AC9E2u); PR = R32(r15); r15 += 4; UPD(0x0C0AC9E4u, 3);  /* 0C0AC9E2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC9E6u, 1);  /* 0C0AC9E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AC9E8u, 1);  /* 0C0AC9E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AC9EAu, 1);  /* 0C0AC9E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AC9ECu, 1);  /* 0C0AC9EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC9EEu, 1);  /* 0C0AC9EC mov.l @Rm+,Rn */
	IF(0x0C0AC9EEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC9EE rts */
L_0C0ACA00: BLKS(0x0C0ACA00u);
	r5 = 0xC28EDFCu; UPD(0x0C0ACA02u, 1);  /* 0C0ACA00 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0ACA02 mov #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r5); UPD(0x0C0ACA06u, 2);  /* 0C0ACA04 mov.w @Rm,Rn */
	r2 = 0x2Bu;  /* 0C0ACA06 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C0ACA0Au, 2);  /* 0C0ACA08 mov.w @(disp,pc),Rn */
	r7 = 0x10u;  /* 0C0ACA0A mov #imm,Rn */
	IF(0x0C0ACA0Cu); MACL = r9 * r8;  /* 0C0ACA0C mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0ACA10u, 4);  /* 0C0ACA0E mov.l @(disp,pc),Rn */
	IF(0x0C0ACA10u); r8 = MACL;  /* 0C0ACA10 sts macl,Rn */
	r8 += r0;  /* 0C0ACA12 add Rm,Rn */
	r6 = 0xC0A8A30u; UPD(0x0C0ACA16u, 3);  /* 0C0ACA14 mov.l @(disp,pc),Rn */
	r3 = 0xD3000000u; UPD(0x0C0ACA18u, 1);  /* 0C0ACA16 mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C0ACA1Au, 1);  /* 0C0ACA18 mov.l Rm,@(disp,Rn) */
	W32(r8, r3); UPD(0x0C0ACA1Cu, 1);  /* 0C0ACA1A mov.l Rm,@Rn */
	r4 = r9;  /* 0C0ACA1C mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0ACA20u, 2);  /* 0C0ACA1E mov.l Rm,@(disp,Rn) */
	IF(0x0C0ACA20u); { u32 t_ = r6; PR = 0x0C0ACA24u; W32(r8 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0ACA24u); }  /* 0C0ACA20 jsr @Rn */
L_0C0ACA24: BLKS(0x0C0ACA24u);
	r5 = 0xC0A9AE0u; UPD(0x0C0ACA26u, 1);  /* 0C0ACA24 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0ACA26 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0ACA2Au, 2);  /* 0C0ACA28 mov.l @(disp,pc),Rn */
	IF(0x0C0ACA2Au); { u32 t_ = r5; PR = 0x0C0ACA2Eu; IF(0x0C0ACA2Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0ACA2Eu); }  /* 0C0ACA2A jsr @Rn */
L_0C0ACA2E: BLKS(0x0C0ACA2Eu);
	r0 = 0x1500000u; UPD(0x0C0ACA30u, 1);  /* 0C0ACA2E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0ACA30 mov Rm,Rn */
	W32(r8 + 0x28u, r10); UPD(0x0C0ACA34u, 2);  /* 0C0ACA32 mov.l Rm,@(disp,Rn) */
	r5 = r12;  /* 0C0ACA34 mov Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0ACA38u, 2);  /* 0C0ACA36 mov.l Rm,@(disp,Rn) */
	r10 = 0xC069B20u; UPD(0x0C0ACA3Au, 1);  /* 0C0ACA38 mov.l @(disp,pc),Rn */
	r0 = 0x86u; UPD(0x0C0ACA3Cu, 1);  /* 0C0ACA3A mov.w @(disp,pc),Rn */
	IF(0x0C0ACA3Cu); { u32 t_ = r10; PR = 0x0C0ACA40u; IF(0x0C0ACA3Eu); W16(r0 + r8, r11); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0ACA40u); }  /* 0C0ACA3C jsr @Rn */
L_0C0ACA40: BLKS(0x0C0ACA40u);
	W32(r8 + 0x2Cu, r0); UPD(0x0C0ACA42u, 1);  /* 0C0ACA40 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C0ACA42 mov Rm,Rn */
	IF(0x0C0ACA44u); { u32 t_ = r9; PR = 0x0C0ACA48u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0ACA48u); }  /* 0C0ACA44 jsr @Rn */
L_0C0ACA48: BLKS(0x0C0ACA48u);
	W32(r8 + 0x30u, r0); UPD(0x0C0ACA4Au, 1);  /* 0C0ACA48 mov.l Rm,@(disp,Rn) */
	r3 = 0x14u;  /* 0C0ACA4A mov #imm,Rn */
	r0 = 0xADu; UPD(0x0C0ACA4Eu, 2);  /* 0C0ACA4C mov.w @(disp,pc),Rn */
	IF(0x0C0ACA4Eu); W8(r0 + r8, r3); UPD(0x0C0ACA50u, 1);  /* 0C0ACA4E mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0ACA50 add #imm,Rn */
	{ IF(0x0C0ACA54u); W8(r0 + r8, r3); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0AC9DEu, 4); goto L_0C0AC9DE; }  /* 0C0ACA52 bra */
}

void blk_f_0C0ACA90(sh3_t *c)
{
	LOCALS;
L_0C0ACA90: BLKS(0x0C0ACA90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA92u, 1);  /* 0C0ACA90 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0ACA92 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA96u, 2);  /* 0C0ACA94 mov.l Rm,@-Rn */
	r5 = 0xB4u; UPD(0x0C0ACA98u, 1);  /* 0C0ACA96 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA9Au, 1);  /* 0C0ACA98 mov.l Rm,@-Rn */
	IF(0x0C0ACA9Au); MACL = r1 * r5;  /* 0C0ACA9A mul.l Rm,Rn */
	IF(0x0C0ACA9Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0ACA9Eu, 3);  /* 0C0ACA9C sts.l pr,@-Rn */
	r9 = 0xC0C2360u; UPD(0x0C0ACAA0u, 1);  /* 0C0ACA9E mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0ACAA0 mov Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0ACAA4u, 2);  /* 0C0ACAA2 mov.l @(disp,pc),Rn */
	IF(0x0C0ACAA4u); r8 = MACL;  /* 0C0ACAA4 sts macl,Rn */
	r8 += r4;  /* 0C0ACAA6 add Rm,Rn */
	IF(0x0C0ACAA8u); { u32 t_ = r9; PR = 0x0C0ACAACu; r15 += 0xFFFFFFF8u; /* slot add #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0ACAACu); }  /* 0C0ACAA8 jsr @Rn */
L_0C0ACAAC: BLKS(0x0C0ACAACu);
	r3 = 0x28000u; UPD(0x0C0ACAAEu, 1);  /* 0C0ACAAC mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0ACAAE mov #imm,Rn */
	r2 = 0xC18A00Au; UPD(0x0C0ACAB2u, 2);  /* 0C0ACAB0 mov.l @(disp,pc),Rn */
	r7 = r0;  /* 0C0ACAB2 mov Rm,Rn */
	r9 = 0xC0BB3A0u; UPD(0x0C0ACAB6u, 2);  /* 0C0ACAB4 mov.l @(disp,pc),Rn */
	W32(r15, r3); UPD(0x0C0ACAB8u, 1);  /* 0C0ACAB6 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0ACABAu, 1);  /* 0C0ACAB8 mov.l Rm,@(disp,Rn) */
	r5 = R32(r8 + 0x24u); UPD(0x0C0ACABCu, 1);  /* 0C0ACABA mov.l @(disp,Rm),Rn */
	IF(0x0C0ACABCu); { u32 t_ = r9; PR = 0x0C0ACAC0u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BB3A0, 0x0C0BB3A0u, 0x0C0ACAC0u); }  /* 0C0ACABC jsr @Rn */
L_0C0ACAC0: BLKS(0x0C0ACAC0u);
	r0 = 0x14u;  /* 0C0ACAC0 mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0ACAC4u, 2);  /* 0C0ACAC2 mov.l Rm,@(disp,Rn) */
	r9 = 0x0u;  /* 0C0ACAC4 mov #imm,Rn */
	r0 = 0xC0C02E0u; UPD(0x0C0ACAC8u, 2);  /* 0C0ACAC6 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0ACAC8 mov #imm,Rn */
	W32(r15, r9); UPD(0x0C0ACACCu, 2);  /* 0C0ACACA mov.l Rm,@Rn */
	r4 = R32(r8); UPD(0x0C0ACACEu, 1);  /* 0C0ACACC mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0ACAD0u, 1);  /* 0C0ACACE mov.l @(disp,Rm),Rn */
	IF(0x0C0ACAD0u); { u32 t_ = r0; PR = 0x0C0ACAD4u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C02E0, 0x0C0C02E0u, 0x0C0ACAD4u); }  /* 0C0ACAD0 jsr @Rn */
L_0C0ACAD4: BLKS(0x0C0ACAD4u);
	r0 = 0xC0C2110u; UPD(0x0C0ACAD6u, 1);  /* 0C0ACAD4 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0ACAD6 add #imm,Rn */
	IF(0x0C0ACAD8u); { u32 t_ = r0; PR = 0x0C0ACADCu; r4 = 0x71u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0ACADCu); }  /* 0C0ACAD8 jsr @Rn */
L_0C0ACADC: BLKS(0x0C0ACADCu);
	W32(r8, r9); UPD(0x0C0ACADEu, 1);  /* 0C0ACADC mov.l Rm,@Rn */
	r4 = 0x40000u; UPD(0x0C0ACAE0u, 1);  /* 0C0ACADE mov.l @(disp,pc),Rn */
	r0 = 0xC071C90u; UPD(0x0C0ACAE2u, 1);  /* 0C0ACAE0 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0ACAE2 mov Rm,Rn */
	IF(0x0C0ACAE4u); PR = R32(r15); r15 += 4; UPD(0x0C0ACAE6u, 2);  /* 0C0ACAE4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ACAE8u, 1);  /* 0C0ACAE6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ACAEAu, 1);  /* 0C0ACAE8 mov.l @Rm+,Rn */
	IF(0x0C0ACAEAu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C0ACAEA jmp @Rn */
}

void blk_f_0C0ACB20(sh3_t *c)
{
	LOCALS;
L_0C0ACB20: BLKS(0x0C0ACB20u);
	r3 = 0xB4u; UPD(0x0C0ACB22u, 1);  /* 0C0ACB20 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0ACB22 exts.w Rm,Rn */
	IF(0x0C0ACB24u); MACL = r4 * r3;  /* 0C0ACB24 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0ACB28u, 4);  /* 0C0ACB26 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACB2Au, 1);  /* 0C0ACB28 mov.l Rm,@-Rn */
	IF(0x0C0ACB2Au); r3 = MACL;  /* 0C0ACB2A sts macl,Rn */
	r3 += r0;  /* 0C0ACB2C add Rm,Rn */
	r0 = R32(r3 + 0x24u); UPD(0x0C0ACB30u, 3);  /* 0C0ACB2E mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0ACB30 mov Rm,Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C0ACB34u, 2);  /* 0C0ACB32 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x2Cu); UPD(0x0C0ACB36u, 1);  /* 0C0ACB34 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C0ACB38u, 1);  /* 0C0ACB36 mov.l @(disp,Rm),Rn */
	r0 += r5;  /* 0C0ACB38 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0ACB3Cu, 2);  /* 0C0ACB3A mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0ACB3C add Rm,Rn */
	r7 += r0;  /* 0C0ACB3E add Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C0ACB42u, 3);  /* 0C0ACB40 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ACB42u); T = (s32)r7 >= 0;  /* 0C0ACB42 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0ACBA0u, 4); goto L_0C0ACBA0; } UPD(0x0C0ACB48u, 1); goto L_0C0ACB48; }  /* 0C0ACB44 bf/s */
L_0C0ACB48: BLKS(0x0C0ACB48u);
	r2 = 0xB80000u; UPD(0x0C0ACB4Au, 1);  /* 0C0ACB48 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r2;  /* 0C0ACB4A cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0ACB64u, 4); goto L_0C0ACB64; }  /* 0C0ACB4C bt */
L_0C0ACB4E: BLKS(0x0C0ACB4Eu);
	r2 = r6;  /* 0C0ACB4E mov Rm,Rn */
	r5 = 0xC3C4048u; UPD(0x0C0ACB52u, 2);  /* 0C0ACB50 mov.l @(disp,pc),Rn */
	r7 = R32(r5); UPD(0x0C0ACB54u, 1);  /* 0C0ACB52 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0ACB56u, 1);  /* 0C0ACB54 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0ACB56 sub Rm,Rn */
	r2 += r6;  /* 0C0ACB58 add Rm,Rn */
	IF(0x0C0ACB5Au); T = (s32)r2 >= 0;  /* 0C0ACB5A cmp/pz Rn */
	if (!T) { UPD(0x0C0ACB90u, 6); goto L_0C0ACB90; }  /* 0C0ACB5C bf */
L_0C0ACB5E: BLKS(0x0C0ACB5Eu);
	r0 = 0x900000u; UPD(0x0C0ACB60u, 1);  /* 0C0ACB5E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0ACB60 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0ACB70u, 4); goto L_0C0ACB70; }  /* 0C0ACB62 bf */
L_0C0ACB64: BLKS(0x0C0ACB64u);
	r4 = 0x0u;  /* 0C0ACB64 mov #imm,Rn */
	W32(r3, r4); UPD(0x0C0ACB68u, 2);  /* 0C0ACB66 mov.l Rm,@Rn */
L_0C0ACB68: BLKS(0x0C0ACB68u);
	r15 = r14;  /* 0C0ACB68 mov Rm,Rn */
	IF(0x0C0ACB6Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0ACB6A rts */
L_0C0ACB70: BLKS(0x0C0ACB70u);
	r2 = 0x99u; UPD(0x0C0ACB72u, 1);  /* 0C0ACB70 mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0ACB72 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0ACB76u, 2);  /* 0C0ACB74 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0ACB76 add #imm,Rn */
	W8(r2, r0); UPD(0x0C0ACB7Au, 2);  /* 0C0ACB78 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C0ACB7A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0ACB7C tst Rm,Rn */
	if (T) { UPD(0x0C0ACB68u, 5); goto L_0C0ACB68; }  /* 0C0ACB7E bt */
L_0C0ACB80: BLKS(0x0C0ACB80u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0ACB82u, 1);  /* 0C0ACB80 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0ACB82 add #imm,Rn */
	r0 &= 0x3u;  /* 0C0ACB84 and #imm,r0 */
	W32(r3 + 0xCu, r0); UPD(0x0C0ACB88u, 3);  /* 0C0ACB86 mov.l Rm,@(disp,Rn) */
	r3 = 0xC0A8AE0u; UPD(0x0C0ACB8Au, 1);  /* 0C0ACB88 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0ACB8A mov Rm,Rn */
	IF(0x0C0ACB8Cu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C0ACB8C jmp @Rn */
L_0C0ACB90: BLKS(0x0C0ACB90u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ACB5Eu, 3); goto L_0C0ACB5E; }  /* 0C0ACB90 bra */
L_0C0ACBA0: BLKS(0x0C0ACBA0u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0ACB48u, 3); goto L_0C0ACB48; }  /* 0C0ACBA0 bra */
}

void blk_f_0C0ACBD0(sh3_t *c)
{
	LOCALS;
L_0C0ACBD0: BLKS(0x0C0ACBD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACBD2u, 1);  /* 0C0ACBD0 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C0ACBD4u, 1);  /* 0C0ACBD2 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0ACBD4 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACBD8u, 2);  /* 0C0ACBD6 mov.l Rm,@-Rn */
	IF(0x0C0ACBD8u); MACL = r8 * r0;  /* 0C0ACBD8 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACBDCu, 3);  /* 0C0ACBDA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACBDEu, 1);  /* 0C0ACBDC mov.l Rm,@-Rn */
	IF(0x0C0ACBDEu); r9 = MACL;  /* 0C0ACBDE sts macl,Rn */
	r0 = 0xC286578u; UPD(0x0C0ACBE2u, 2);  /* 0C0ACBE0 mov.l @(disp,pc),Rn */
	IF(0x0C0ACBE2u); r15 -= 4; W32(r15, PR); UPD(0x0C0ACBE4u, 1);  /* 0C0ACBE2 sts.l pr,@-Rn */
	r9 += r0;  /* 0C0ACBE4 add Rm,Rn */
	r10 = R32(r9 + 0x8u); UPD(0x0C0ACBE8u, 2);  /* 0C0ACBE6 mov.l @(disp,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C0ACBE8 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0ACC20u, 4); goto L_0C0ACC20; } goto L_0C0ACBEE; }  /* 0C0ACBEA bf/s */
L_0C0ACBEE: BLKS(0x0C0ACBEEu);
	r1 = 0xFDFFFFFFu; UPD(0x0C0ACBF0u, 2);  /* 0C0ACBEE mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0ACBF2u, 1);  /* 0C0ACBF0 mov.l @Rm,Rn */
	r0 = 0xC062780u; UPD(0x0C0ACBF4u, 1);  /* 0C0ACBF2 mov.l @(disp,pc),Rn */
	r4 &= r1;  /* 0C0ACBF4 and Rm,Rn */
	W32(r9, r4); UPD(0x0C0ACBF8u, 2);  /* 0C0ACBF6 mov.l Rm,@Rn */
	IF(0x0C0ACBF8u); { u32 t_ = r0; PR = 0x0C0ACBFCu; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0ACBFCu); }  /* 0C0ACBF8 jsr @Rn */
L_0C0ACBFC: BLKS(0x0C0ACBFCu);
	r5 = 0xC0A8B10u; UPD(0x0C0ACBFEu, 1);  /* 0C0ACBFC mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C0ACBFE add #imm,Rn */
	W32(r9 + 0x8u, r0); UPD(0x0C0ACC02u, 2);  /* 0C0ACC00 mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C0ACC02 mov Rm,Rn */
	IF(0x0C0ACC04u); { u32 t_ = r5; PR = 0x0C0ACC08u; W32(r9 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C0ACC08u); }  /* 0C0ACC04 jsr @Rn */
L_0C0ACC08: BLKS(0x0C0ACC08u);
	r3 = 0xC0A9AE0u; UPD(0x0C0ACC0Au, 1);  /* 0C0ACC08 mov.l @(disp,pc),Rn */
	IF(0x0C0ACC0Au); { u32 t_ = r3; PR = 0x0C0ACC0Eu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0ACC0Eu); }  /* 0C0ACC0A jsr @Rn */
L_0C0ACC0E: BLKS(0x0C0ACC0Eu);
	r2 = 0x207C0C0u; UPD(0x0C0ACC10u, 1);  /* 0C0ACC0E mov.l @(disp,pc),Rn */
	W32(r9 + 0x34u, r2); UPD(0x0C0ACC12u, 1);  /* 0C0ACC10 mov.l Rm,@(disp,Rn) */
L_0C0ACC12: BLKS(0x0C0ACC12u);
	r15 = r14;  /* 0C0ACC12 mov Rm,Rn */
	IF(0x0C0ACC14u); PR = R32(r15); r15 += 4; UPD(0x0C0ACC16u, 2);  /* 0C0ACC14 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ACC18u, 1);  /* 0C0ACC16 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ACC1Au, 1);  /* 0C0ACC18 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ACC1Cu, 1);  /* 0C0ACC1A mov.l @Rm+,Rn */
	IF(0x0C0ACC1Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ACC1C rts */
L_0C0ACC20: BLKS(0x0C0ACC20u);
	r15 += 0xFFFFFFF8u;  /* 0C0ACC20 add #imm,Rn */
	r10 = 0x0u;  /* 0C0ACC22 mov #imm,Rn */
	r6 = 0x14u;  /* 0C0ACC24 mov #imm,Rn */
	r8 = 0xC0C02E0u; UPD(0x0C0ACC28u, 4);  /* 0C0ACC26 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0ACC28 mov #imm,Rn */
	W32(r15, r10); UPD(0x0C0ACC2Cu, 2);  /* 0C0ACC2A mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0ACC2Eu, 1);  /* 0C0ACC2C mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C0ACC30u, 1);  /* 0C0ACC2E mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0ACC32u, 1);  /* 0C0ACC30 mov.l @(disp,Rm),Rn */
	IF(0x0C0ACC32u); { u32 t_ = r8; PR = 0x0C0ACC36u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C02E0, 0x0C0C02E0u, 0x0C0ACC36u); }  /* 0C0ACC32 jsr @Rn */
L_0C0ACC36: BLKS(0x0C0ACC36u);
	W32(r9, r10); UPD(0x0C0ACC38u, 1);  /* 0C0ACC36 mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0ACC12u, 3); goto L_0C0ACC12; }  /* 0C0ACC38 bra */
}

void blk_f_0C0AD0B0(sh3_t *c)
{
	LOCALS;
L_0C0AD0B0: BLKS(0x0C0AD0B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD0B2u, 1);  /* 0C0AD0B0 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0AD0B4u, 1);  /* 0C0AD0B2 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0AD0B4 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD0B8u, 2);  /* 0C0AD0B6 mov.l Rm,@-Rn */
	IF(0x0C0AD0B8u); MACL = r8 * r3;  /* 0C0AD0B8 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD0BCu, 3);  /* 0C0AD0BA mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0AD0BEu, 1);  /* 0C0AD0BC mov.l @(disp,pc),Rn */
	IF(0x0C0AD0BEu); r2 = MACL;  /* 0C0AD0BE sts macl,Rn */
	IF(0x0C0AD0C0u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD0C2u, 2);  /* 0C0AD0C0 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0AD0C2 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0AD0C6u, 2);  /* 0C0AD0C4 mov.l @(disp,Rm),Rn */
	r0 = 0x5u;  /* 0C0AD0C6 mov #imm,Rn */
	T = r2 > r0;  /* 0C0AD0C8 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AD168u, 5); goto L_0C0AD168; } goto L_0C0AD0CE; }  /* 0C0AD0CA bt/s */
L_0C0AD0CE: BLKS(0x0C0AD0CEu);
	r0 = 0xC0AD0E0u;  /* 0C0AD0CE mova @(disp,pc),r0 */
	IF(0x0C0AD0D0u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0AD0D2u, 3);  /* 0C0AD0D0 mov.b @(r0,Rm),Rn */
	r4 = r4 & 0xFF;  /* 0C0AD0D2 extu.b Rm,Rn */
	IF(0x0C0AD0D4u); { u32 tv_ = (r4 + 0x0C0AD0D8u); u32 t_ = PHYS(tv_); IF(0x0C0AD0D6u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0AD0F0u: goto L_0C0AD0F0; case 0x0C0AD100u: goto L_0C0AD100; case 0x0C0AD120u: goto L_0C0AD120; case 0x0C0AD180u: goto L_0C0AD180; case 0x0C0AD1B0u: goto L_0C0AD1B0; default: JUMPD(tv_); } }  /* 0C0AD0D4 braf Rn */
L_0C0AD0F0: BLKS(0x0C0AD0F0u);
	r5 = 0xC0A9A70u; UPD(0x0C0AD0F2u, 1);  /* 0C0AD0F0 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0AD0F2 mov Rm,Rn */
	r15 = r14;  /* 0C0AD0F4 mov Rm,Rn */
	IF(0x0C0AD0F6u); PR = R32(r15); r15 += 4; UPD(0x0C0AD0F8u, 3);  /* 0C0AD0F6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD0FAu, 1);  /* 0C0AD0F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD0FCu, 1);  /* 0C0AD0FA mov.l @Rm+,Rn */
	IF(0x0C0AD0FCu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9A70u: TAIL(blk_f_0C0A9A70); default: JUMPD(tv_); } }  /* 0C0AD0FC jmp @Rn */
L_0C0AD100: BLKS(0x0C0AD100u);
	r5 = 0xC1A7108u; UPD(0x0C0AD102u, 1);  /* 0C0AD100 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0AD102 mov Rm,Rn */
	r6 = 0xC0A9D90u; UPD(0x0C0AD106u, 2);  /* 0C0AD104 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0AD106 mov Rm,Rn */
	IF(0x0C0AD108u); PR = R32(r15); r15 += 4; UPD(0x0C0AD10Au, 2);  /* 0C0AD108 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD10Cu, 1);  /* 0C0AD10A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD10Eu, 1);  /* 0C0AD10C mov.l @Rm+,Rn */
	IF(0x0C0AD10Eu); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9D90u: TAIL(blk_f_0C0A9D90); default: JUMPD(tv_); } }  /* 0C0AD10E jmp @Rn */
L_0C0AD120: BLKS(0x0C0AD120u);
	r9 = 0xB4u; UPD(0x0C0AD122u, 1);  /* 0C0AD120 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD122 add #imm,Rn */
	IF(0x0C0AD124u); MACL = r8 * r9;  /* 0C0AD124 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AD128u, 4);  /* 0C0AD126 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0AD128 mov #imm,Rn */
	IF(0x0C0AD12Au); r9 = MACL;  /* 0C0AD12A sts macl,Rn */
	r9 += r0;  /* 0C0AD12C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AD130u, 4);  /* 0C0AD12E mov.w @(disp,pc),Rn */
	IF(0x0C0AD130u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AD132u, 1);  /* 0C0AD130 mov.b @(r0,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C0AD132 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0AD136u, 2);  /* 0C0AD134 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AD136 add #imm,Rn */
	IF(0x0C0AD138u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AD13Au, 2);  /* 0C0AD138 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0AD13A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0AD13Eu, 2);  /* 0C0AD13C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0AD140u, 1);  /* 0C0AD13E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0AD142u, 1);  /* 0C0AD140 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0AD144u, 1);  /* 0C0AD142 mov.l @(disp,Rm),Rn */
	IF(0x0C0AD144u); { u32 t_ = r0; PR = 0x0C0AD148u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C0AD148u); }  /* 0C0AD144 jsr @Rn */
L_0C0AD148: BLKS(0x0C0AD148u);
	r4 = r8;  /* 0C0AD148 mov Rm,Rn */
	r8 = 0xC0A8D30u; UPD(0x0C0AD14Cu, 2);  /* 0C0AD14A mov.l @(disp,pc),Rn */
	IF(0x0C0AD14Cu); { u32 t_ = r8; PR = 0x0C0AD150u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C0AD150u); }  /* 0C0AD14C jsr @Rn */
L_0C0AD150: BLKS(0x0C0AD150u);
	IF(0x0C0AD150u); T = (s32)r0 >= 0;  /* 0C0AD150 cmp/pz Rn */
	if (!T) { UPD(0x0C0AD164u, 4); goto L_0C0AD164; }  /* 0C0AD152 bf */
L_0C0AD154: BLKS(0x0C0AD154u);
	r4 = 0x2u;  /* 0C0AD154 mov #imm,Rn */
	r5 = 0xFFFE0000u; UPD(0x0C0AD158u, 2);  /* 0C0AD156 mov.l @(disp,pc),Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C0AD15Au, 1);  /* 0C0AD158 mov.l @(disp,Rm),Rn */
	r6 += r5;  /* 0C0AD15A add Rm,Rn */
	r5 = r0;  /* 0C0AD15C mov Rm,Rn */
	UPD(0x0C0AD15Eu, 2);
L_0C0AD15E: BLKS(0x0C0AD15Eu);
	r8 = 0xC07DE60u; UPD(0x0C0AD160u, 1);  /* 0C0AD15E mov.l @(disp,pc),Rn */
	IF(0x0C0AD160u); { u32 t_ = r8; PR = 0x0C0AD164u; r7 = R32(r9 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DE60, 0x0C07DE60u, 0x0C0AD164u); }  /* 0C0AD160 jsr @Rn */
L_0C0AD164: BLKS(0x0C0AD164u);
	r5 = 0x0u;  /* 0C0AD164 mov #imm,Rn */
	W32(r9, r5); UPD(0x0C0AD168u, 2);  /* 0C0AD166 mov.l Rm,@Rn */
L_0C0AD168: BLKS(0x0C0AD168u);
	r15 = r14;  /* 0C0AD168 mov Rm,Rn */
	IF(0x0C0AD16Au); PR = R32(r15); r15 += 4; UPD(0x0C0AD16Cu, 2);  /* 0C0AD16A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD16Eu, 1);  /* 0C0AD16C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD170u, 1);  /* 0C0AD16E mov.l @Rm+,Rn */
	IF(0x0C0AD170u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD170 rts */
L_0C0AD180: BLKS(0x0C0AD180u);
	r6 = 0xB4u; UPD(0x0C0AD182u, 1);  /* 0C0AD180 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD182 add #imm,Rn */
	IF(0x0C0AD184u); MACL = r8 * r6;  /* 0C0AD184 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0AD188u, 4);  /* 0C0AD186 mov.l @(disp,pc),Rn */
	IF(0x0C0AD188u); r9 = MACL;  /* 0C0AD188 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0AD18Cu, 2);  /* 0C0AD18A mov.w @(disp,pc),Rn */
	r9 += r5;  /* 0C0AD18C add Rm,Rn */
	IF(0x0C0AD18Eu); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AD190u, 2);  /* 0C0AD18E mov.b @(r0,Rm),Rn */
	r5 = 0x7u;  /* 0C0AD190 mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C0AD192 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0AD196u, 3);  /* 0C0AD194 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AD196 add #imm,Rn */
	IF(0x0C0AD198u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AD19Au, 2);  /* 0C0AD198 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C0AD19A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AD19Eu, 2);  /* 0C0AD19C mov.l Rm,@(disp,Rn) */
	r8 = 0xC0BD6F0u; UPD(0x0C0AD1A0u, 1);  /* 0C0AD19E mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0AD1A2u, 1);  /* 0C0AD1A0 mov.l @(disp,Rm),Rn */
	r4 = R32(r9); UPD(0x0C0AD1A4u, 1);  /* 0C0AD1A2 mov.l @Rm,Rn */
	IF(0x0C0AD1A4u); { u32 t_ = r8; PR = 0x0C0AD1A8u; r6 = R32(r9 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0AD1A8u); }  /* 0C0AD1A4 jsr @Rn */
L_0C0AD1A8: BLKS(0x0C0AD1A8u);
	r7 = 0x0u;  /* 0C0AD1A8 mov #imm,Rn */
	W32(r9, r7); UPD(0x0C0AD1ACu, 2);  /* 0C0AD1AA mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0AD168u, 3); goto L_0C0AD168; }  /* 0C0AD1AC bra */
L_0C0AD1B0: BLKS(0x0C0AD1B0u);
	r0 = 0xB4u; UPD(0x0C0AD1B2u, 1);  /* 0C0AD1B0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD1B2 add #imm,Rn */
	IF(0x0C0AD1B4u); MACL = r8 * r0;  /* 0C0AD1B4 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0AD1B8u, 4);  /* 0C0AD1B6 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0AD1B8 mov #imm,Rn */
	IF(0x0C0AD1BAu); r9 = MACL;  /* 0C0AD1BA sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0AD1BEu, 3);  /* 0C0AD1BC mov.w @(disp,pc),Rn */
	r9 += r4;  /* 0C0AD1BE add Rm,Rn */
	IF(0x0C0AD1C0u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AD1C2u, 2);  /* 0C0AD1C0 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C0AD1C2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AD1C6u, 2);  /* 0C0AD1C4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AD1C6 add #imm,Rn */
	IF(0x0C0AD1C8u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AD1CAu, 2);  /* 0C0AD1C8 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AD1CA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0AD1CEu, 2);  /* 0C0AD1CC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0AD1D0u, 1);  /* 0C0AD1CE mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0AD1D2u, 1);  /* 0C0AD1D0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0AD1D4u, 1);  /* 0C0AD1D2 mov.l @(disp,Rm),Rn */
	IF(0x0C0AD1D4u); { u32 t_ = r0; PR = 0x0C0AD1D8u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C0AD1D8u); }  /* 0C0AD1D4 jsr @Rn */
L_0C0AD1D8: BLKS(0x0C0AD1D8u);
	r4 = r8;  /* 0C0AD1D8 mov Rm,Rn */
	r8 = 0xC0A8D30u; UPD(0x0C0AD1DCu, 2);  /* 0C0AD1DA mov.l @(disp,pc),Rn */
	IF(0x0C0AD1DCu); { u32 t_ = r8; PR = 0x0C0AD1E0u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C0AD1E0u); }  /* 0C0AD1DC jsr @Rn */
L_0C0AD1E0: BLKS(0x0C0AD1E0u);
	IF(0x0C0AD1E0u); T = (s32)r0 >= 0;  /* 0C0AD1E0 cmp/pz Rn */
	if (!T) { UPD(0x0C0AD164u, 4); goto L_0C0AD164; }  /* 0C0AD1E2 bf */
L_0C0AD1E4: BLKS(0x0C0AD1E4u);
	r6 = R32(r9 + 0x2Cu); UPD(0x0C0AD1E6u, 1);  /* 0C0AD1E4 mov.l @(disp,Rm),Rn */
	r4 = 0x2u;  /* 0C0AD1E6 mov #imm,Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C0AD15Eu, 4); goto L_0C0AD15E; }  /* 0C0AD1E8 bra */
}

void blk_f_0C0AD2F0(sh3_t *c)
{
	LOCALS;
L_0C0AD2F0: BLKS(0x0C0AD2F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2F2u, 1);  /* 0C0AD2F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2F4u, 1);  /* 0C0AD2F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2F6u, 1);  /* 0C0AD2F4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AD2F6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2FAu, 2);  /* 0C0AD2F8 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0AD2FA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2FEu, 2);  /* 0C0AD2FC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD300u, 1);  /* 0C0AD2FE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD302u, 1);  /* 0C0AD300 mov.l Rm,@-Rn */
	r2 = 0xC0A9D90u; UPD(0x0C0AD304u, 1);  /* 0C0AD302 mov.l @(disp,pc),Rn */
	IF(0x0C0AD304u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD306u, 1);  /* 0C0AD304 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD306 add #imm,Rn */
	r5 = 0xC1DD96Cu; UPD(0x0C0AD30Au, 2);  /* 0C0AD308 mov.l @(disp,pc),Rn */
	IF(0x0C0AD30Au); { u32 t_ = r2; PR = 0x0C0AD30Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D90, 0x0C0A9D90u, 0x0C0AD30Eu); }  /* 0C0AD30A jsr @Rn */
L_0C0AD30E: BLKS(0x0C0AD30Eu);
	r4 = 0xB4u; UPD(0x0C0AD310u, 1);  /* 0C0AD30E mov.w @(disp,pc),Rn */
	IF(0x0C0AD310u); MACL = r9 * r4;  /* 0C0AD310 mul.l Rm,Rn */
	IF(0x0C0AD312u); r0 = MACL;  /* 0C0AD312 sts macl,Rn */
	W32(r14, r0); UPD(0x0C0AD316u, 4);  /* 0C0AD314 mov.l Rm,@Rn */
	IF(0x0C0AD316u); r3 = MACL;  /* 0C0AD316 sts macl,Rn */
	r0 = 0xC286578u; UPD(0x0C0AD31Au, 2);  /* 0C0AD318 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0AD31A add Rm,Rn */
	r11 = R32(r3 + 0x1Cu); UPD(0x0C0AD31Eu, 2);  /* 0C0AD31C mov.l @(disp,Rm),Rn */
	r2 = R32(r11); UPD(0x0C0AD320u, 1);  /* 0C0AD31E mov.l @Rm,Rn */
	IF(0x0C0AD320u); T = (s32)r2 >= 0;  /* 0C0AD320 cmp/pz Rn */
	if (!T) { UPD(0x0C0AD3B0u, 4); goto L_0C0AD3B0; }  /* 0C0AD322 bf */
L_0C0AD324: BLKS(0x0C0AD324u);
	r6 = (r2 >> 16) | (r2 << 16);  /* 0C0AD324 swap.w Rm,Rn */
	r2 = R32(r11 + 0x4u); UPD(0x0C0AD328u, 2);  /* 0C0AD326 mov.l @(disp,Rm),Rn */
	IF(0x0C0AD328u); T = (s32)r2 >= 0;  /* 0C0AD328 cmp/pz Rn */
	{ u32 c_ = !T; r13 = (u32)(s32)(s16)r6; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0AD3A0u, 4); goto L_0C0AD3A0; } UPD(0x0C0AD32Eu, 1); goto L_0C0AD32E; }  /* 0C0AD32A bf/s */
L_0C0AD32E: BLKS(0x0C0AD32Eu);
	r8 = 0xC062780u; UPD(0x0C0AD330u, 1);  /* 0C0AD32E mov.l @(disp,pc),Rn */
	r0 = (r2 >> 16) | (r2 << 16);  /* 0C0AD330 swap.w Rm,Rn */
	r10 = 0x98u; UPD(0x0C0AD334u, 2);  /* 0C0AD332 mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0AD334 exts.w Rm,Rn */
	IF(0x0C0AD336u); { u32 t_ = r8; PR = 0x0C0AD33Au; r10 += r3; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AD33Au); }  /* 0C0AD336 jsr @Rn */
L_0C0AD33A: BLKS(0x0C0AD33Au);
	r0 += 0x3Cu;  /* 0C0AD33A add #imm,Rn */
	W8(r10, r0); UPD(0x0C0AD33Eu, 2);  /* 0C0AD33C mov.b Rm,@Rn */
	r4 = r13;  /* 0C0AD33E mov Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0AD342u, 2);  /* 0C0AD340 mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C0AD342 add Rm,Rn */
	r3 = R32(r14); UPD(0x0C0AD346u, 2);  /* 0C0AD344 mov.l @Rm,Rn */
	r9 = r12;  /* 0C0AD346 mov Rm,Rn */
	r8 += 0x5Cu;  /* 0C0AD348 add #imm,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C0AD34Cu, 3);  /* 0C0AD34A mov.l Rm,@(disp,Rn) */
	r10 = 0x0u;  /* 0C0AD34C mov #imm,Rn */
	r9 += r9;  /* 0C0AD34E add Rm,Rn */
	r8 += r3;  /* 0C0AD350 add Rm,Rn */
	IF(0x0C0AD352u); ;  /* 0C0AD352 nop */
	UPD(0x0C0AD354u, 4);
L_0C0AD354: BLKS(0x0C0AD354u);
	r2 = 0xC062780u; UPD(0x0C0AD356u, 1);  /* 0C0AD354 mov.l @(disp,pc),Rn */
	IF(0x0C0AD356u); { u32 t_ = r2; PR = 0x0C0AD35Au; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AD35Au); }  /* 0C0AD356 jsr @Rn */
L_0C0AD35A: BLKS(0x0C0AD35Au);
	r3 = R32(r11 + 0x8u); UPD(0x0C0AD35Cu, 1);  /* 0C0AD35A mov.l @(disp,Rm),Rn */
	r0 -= r13;  /* 0C0AD35C sub Rm,Rn */
	r7 = 0xC062780u; UPD(0x0C0AD360u, 2);  /* 0C0AD35E mov.l @(disp,pc),Rn */
	IF(0x0C0AD360u); r0 <<= 16;  /* 0C0AD360 shll16 Rn */
	r3 += r0;  /* 0C0AD362 add Rm,Rn */
	W32(r8, r3); UPD(0x0C0AD366u, 3);  /* 0C0AD364 mov.l Rm,@Rn */
	IF(0x0C0AD366u); { u32 t_ = r7; PR = 0x0C0AD36Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AD36Au); }  /* 0C0AD366 jsr @Rn */
L_0C0AD36A: BLKS(0x0C0AD36Au);
	r6 = R32(r11 + 0xCu); UPD(0x0C0AD36Cu, 1);  /* 0C0AD36A mov.l @(disp,Rm),Rn */
	r0 -= r12;  /* 0C0AD36C sub Rm,Rn */
	IF(0x0C0AD36Eu); r0 <<= 16;  /* 0C0AD36E shll16 Rn */
	r5 = r10;  /* 0C0AD370 mov Rm,Rn */
	r6 += r0;  /* 0C0AD372 add Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C0AD376u, 5);  /* 0C0AD374 mov.l Rm,@(disp,Rn) */
	r5 += 0x1u;  /* 0C0AD376 add #imm,Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C0AD378 exts.w Rm,Rn */
	r2 = 0x2u;  /* 0C0AD37A mov #imm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C0AD37C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD354u, 7); goto L_0C0AD354; } goto L_0C0AD382; }  /* 0C0AD37E bf/s */
L_0C0AD382: BLKS(0x0C0AD382u);
	r14 += 0x8u;  /* 0C0AD382 add #imm,Rn */
	r15 = r14;  /* 0C0AD384 mov Rm,Rn */
	IF(0x0C0AD386u); PR = R32(r15); r15 += 4; UPD(0x0C0AD388u, 4);  /* 0C0AD386 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD38Au, 1);  /* 0C0AD388 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AD38Cu, 1);  /* 0C0AD38A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD38Eu, 1);  /* 0C0AD38C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD390u, 1);  /* 0C0AD38E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD392u, 1);  /* 0C0AD390 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD394u, 1);  /* 0C0AD392 mov.l @Rm+,Rn */
	IF(0x0C0AD394u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD394 rts */
L_0C0AD3A0: BLKS(0x0C0AD3A0u);
	r7 = 0xFFFFu; UPD(0x0C0AD3A2u, 1);  /* 0C0AD3A0 mov.l @(disp,pc),Rn */
	{ r2 += r7; /* slot add Rm,Rn */ UPD(0x0C0AD32Eu, 3); goto L_0C0AD32E; }  /* 0C0AD3A2 bra */
L_0C0AD3B0: BLKS(0x0C0AD3B0u);
	r5 = 0xFFFFu; UPD(0x0C0AD3B2u, 1);  /* 0C0AD3B0 mov.l @(disp,pc),Rn */
	{ r2 += r5; /* slot add Rm,Rn */ UPD(0x0C0AD324u, 3); goto L_0C0AD324; }  /* 0C0AD3B2 bra */
}

void blk_f_0C0AD4B0(sh3_t *c)
{
	LOCALS;
L_0C0AD4B0: BLKS(0x0C0AD4B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD4B2u, 1);  /* 0C0AD4B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD4B4u, 1);  /* 0C0AD4B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD4B6u, 1);  /* 0C0AD4B4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AD4B6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD4BAu, 2);  /* 0C0AD4B8 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0AD4BA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD4BEu, 2);  /* 0C0AD4BC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD4C0u, 1);  /* 0C0AD4BE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD4C2u, 1);  /* 0C0AD4C0 mov.l Rm,@-Rn */
	r2 = 0xC0A9D90u; UPD(0x0C0AD4C4u, 1);  /* 0C0AD4C2 mov.l @(disp,pc),Rn */
	IF(0x0C0AD4C4u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD4C6u, 1);  /* 0C0AD4C4 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD4C6 add #imm,Rn */
	r5 = 0xC1DDA42u; UPD(0x0C0AD4CAu, 2);  /* 0C0AD4C8 mov.l @(disp,pc),Rn */
	IF(0x0C0AD4CAu); { u32 t_ = r2; PR = 0x0C0AD4CEu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D90, 0x0C0A9D90u, 0x0C0AD4CEu); }  /* 0C0AD4CA jsr @Rn */
L_0C0AD4CE: BLKS(0x0C0AD4CEu);
	r4 = 0xB4u; UPD(0x0C0AD4D0u, 1);  /* 0C0AD4CE mov.w @(disp,pc),Rn */
	IF(0x0C0AD4D0u); MACL = r9 * r4;  /* 0C0AD4D0 mul.l Rm,Rn */
	IF(0x0C0AD4D2u); r0 = MACL;  /* 0C0AD4D2 sts macl,Rn */
	W32(r14, r0); UPD(0x0C0AD4D6u, 4);  /* 0C0AD4D4 mov.l Rm,@Rn */
	IF(0x0C0AD4D6u); r3 = MACL;  /* 0C0AD4D6 sts macl,Rn */
	r0 = 0xC286578u; UPD(0x0C0AD4DAu, 2);  /* 0C0AD4D8 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0AD4DA add Rm,Rn */
	r11 = R32(r3 + 0x1Cu); UPD(0x0C0AD4DEu, 2);  /* 0C0AD4DC mov.l @(disp,Rm),Rn */
	r2 = R32(r11); UPD(0x0C0AD4E0u, 1);  /* 0C0AD4DE mov.l @Rm,Rn */
	IF(0x0C0AD4E0u); T = (s32)r2 >= 0;  /* 0C0AD4E0 cmp/pz Rn */
	if (!T) { UPD(0x0C0AD570u, 4); goto L_0C0AD570; }  /* 0C0AD4E2 bf */
L_0C0AD4E4: BLKS(0x0C0AD4E4u);
	r6 = (r2 >> 16) | (r2 << 16);  /* 0C0AD4E4 swap.w Rm,Rn */
	r2 = R32(r11 + 0x4u); UPD(0x0C0AD4E8u, 2);  /* 0C0AD4E6 mov.l @(disp,Rm),Rn */
	IF(0x0C0AD4E8u); T = (s32)r2 >= 0;  /* 0C0AD4E8 cmp/pz Rn */
	{ u32 c_ = !T; r13 = (u32)(s32)(s16)r6; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0AD560u, 4); goto L_0C0AD560; } UPD(0x0C0AD4EEu, 1); goto L_0C0AD4EE; }  /* 0C0AD4EA bf/s */
L_0C0AD4EE: BLKS(0x0C0AD4EEu);
	r8 = 0xC062780u; UPD(0x0C0AD4F0u, 1);  /* 0C0AD4EE mov.l @(disp,pc),Rn */
	r0 = (r2 >> 16) | (r2 << 16);  /* 0C0AD4F0 swap.w Rm,Rn */
	r10 = 0x98u; UPD(0x0C0AD4F4u, 2);  /* 0C0AD4F2 mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0AD4F4 exts.w Rm,Rn */
	IF(0x0C0AD4F6u); { u32 t_ = r8; PR = 0x0C0AD4FAu; r10 += r3; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AD4FAu); }  /* 0C0AD4F6 jsr @Rn */
L_0C0AD4FA: BLKS(0x0C0AD4FAu);
	r0 += 0x3Cu;  /* 0C0AD4FA add #imm,Rn */
	W8(r10, r0); UPD(0x0C0AD4FEu, 2);  /* 0C0AD4FC mov.b Rm,@Rn */
	r4 = r13;  /* 0C0AD4FE mov Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0AD502u, 2);  /* 0C0AD500 mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C0AD502 add Rm,Rn */
	r3 = R32(r14); UPD(0x0C0AD506u, 2);  /* 0C0AD504 mov.l @Rm,Rn */
	r9 = r12;  /* 0C0AD506 mov Rm,Rn */
	r8 += 0x5Cu;  /* 0C0AD508 add #imm,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C0AD50Cu, 3);  /* 0C0AD50A mov.l Rm,@(disp,Rn) */
	r10 = 0x0u;  /* 0C0AD50C mov #imm,Rn */
	r9 += r9;  /* 0C0AD50E add Rm,Rn */
	r8 += r3;  /* 0C0AD510 add Rm,Rn */
	IF(0x0C0AD512u); ;  /* 0C0AD512 nop */
	UPD(0x0C0AD514u, 4);
L_0C0AD514: BLKS(0x0C0AD514u);
	r2 = 0xC062780u; UPD(0x0C0AD516u, 1);  /* 0C0AD514 mov.l @(disp,pc),Rn */
	IF(0x0C0AD516u); { u32 t_ = r2; PR = 0x0C0AD51Au; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AD51Au); }  /* 0C0AD516 jsr @Rn */
L_0C0AD51A: BLKS(0x0C0AD51Au);
	r3 = R32(r11 + 0x8u); UPD(0x0C0AD51Cu, 1);  /* 0C0AD51A mov.l @(disp,Rm),Rn */
	r0 -= r13;  /* 0C0AD51C sub Rm,Rn */
	r7 = 0xC062780u; UPD(0x0C0AD520u, 2);  /* 0C0AD51E mov.l @(disp,pc),Rn */
	IF(0x0C0AD520u); r0 <<= 16;  /* 0C0AD520 shll16 Rn */
	r3 += r0;  /* 0C0AD522 add Rm,Rn */
	W32(r8, r3); UPD(0x0C0AD526u, 3);  /* 0C0AD524 mov.l Rm,@Rn */
	IF(0x0C0AD526u); { u32 t_ = r7; PR = 0x0C0AD52Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AD52Au); }  /* 0C0AD526 jsr @Rn */
L_0C0AD52A: BLKS(0x0C0AD52Au);
	r6 = R32(r11 + 0xCu); UPD(0x0C0AD52Cu, 1);  /* 0C0AD52A mov.l @(disp,Rm),Rn */
	r0 -= r12;  /* 0C0AD52C sub Rm,Rn */
	IF(0x0C0AD52Eu); r0 <<= 16;  /* 0C0AD52E shll16 Rn */
	r5 = r10;  /* 0C0AD530 mov Rm,Rn */
	r6 += r0;  /* 0C0AD532 add Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C0AD536u, 5);  /* 0C0AD534 mov.l Rm,@(disp,Rn) */
	r5 += 0x1u;  /* 0C0AD536 add #imm,Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C0AD538 exts.w Rm,Rn */
	r2 = 0x2u;  /* 0C0AD53A mov #imm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C0AD53C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD514u, 7); goto L_0C0AD514; } goto L_0C0AD542; }  /* 0C0AD53E bf/s */
L_0C0AD542: BLKS(0x0C0AD542u);
	r14 += 0x8u;  /* 0C0AD542 add #imm,Rn */
	r15 = r14;  /* 0C0AD544 mov Rm,Rn */
	IF(0x0C0AD546u); PR = R32(r15); r15 += 4; UPD(0x0C0AD548u, 4);  /* 0C0AD546 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD54Au, 1);  /* 0C0AD548 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AD54Cu, 1);  /* 0C0AD54A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD54Eu, 1);  /* 0C0AD54C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD550u, 1);  /* 0C0AD54E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD552u, 1);  /* 0C0AD550 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD554u, 1);  /* 0C0AD552 mov.l @Rm+,Rn */
	IF(0x0C0AD554u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD554 rts */
L_0C0AD560: BLKS(0x0C0AD560u);
	r7 = 0xFFFFu; UPD(0x0C0AD562u, 1);  /* 0C0AD560 mov.l @(disp,pc),Rn */
	{ r2 += r7; /* slot add Rm,Rn */ UPD(0x0C0AD4EEu, 3); goto L_0C0AD4EE; }  /* 0C0AD562 bra */
L_0C0AD570: BLKS(0x0C0AD570u);
	r5 = 0xFFFFu; UPD(0x0C0AD572u, 1);  /* 0C0AD570 mov.l @(disp,pc),Rn */
	{ r2 += r5; /* slot add Rm,Rn */ UPD(0x0C0AD4E4u, 3); goto L_0C0AD4E4; }  /* 0C0AD572 bra */
}

void blk_f_0C0AD590(sh3_t *c)
{
	LOCALS;
L_0C0AD590: BLKS(0x0C0AD590u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD592u, 1);  /* 0C0AD590 mov.l Rm,@-Rn */
	r4 = 0x1u;  /* 0C0AD592 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD596u, 2);  /* 0C0AD594 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD598u, 1);  /* 0C0AD596 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD59Au, 1);  /* 0C0AD598 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD59Cu, 1);  /* 0C0AD59A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD59Eu, 1);  /* 0C0AD59C mov.l Rm,@-Rn */
	r8 = 0xC071740u; UPD(0x0C0AD5A0u, 1);  /* 0C0AD59E mov.l @(disp,pc),Rn */
	IF(0x0C0AD5A0u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD5A2u, 1);  /* 0C0AD5A0 sts.l pr,@-Rn */
	r0 = 0xC2B1811u; UPD(0x0C0AD5A4u, 1);  /* 0C0AD5A2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AD5A4 mov Rm,Rn */
	IF(0x0C0AD5A6u); { u32 t_ = r8; PR = 0x0C0AD5AAu; r12 = (u32)(s32)(s8)R8(r0); /* slot mov.b @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0AD5AAu); }  /* 0C0AD5A6 jsr @Rn */
L_0C0AD5AA: BLKS(0x0C0AD5AAu);
	T = (r0 & r0) == 0;  /* 0C0AD5AA tst Rm,Rn */
	if (!T) { UPD(0x0C0AD5D0u, 4); goto L_0C0AD5D0; }  /* 0C0AD5AC bf */
L_0C0AD5AE: BLKS(0x0C0AD5AEu);
	r0 = 0x1u;  /* 0C0AD5AE mov #imm,Rn */
	r15 = r14;  /* 0C0AD5B0 mov Rm,Rn */
	IF(0x0C0AD5B2u); PR = R32(r15); r15 += 4; UPD(0x0C0AD5B4u, 3);  /* 0C0AD5B2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD5B6u, 1);  /* 0C0AD5B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD5B8u, 1);  /* 0C0AD5B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD5BAu, 1);  /* 0C0AD5B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD5BCu, 1);  /* 0C0AD5BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD5BEu, 1);  /* 0C0AD5BC mov.l @Rm+,Rn */
	IF(0x0C0AD5BEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD5BE rts */
L_0C0AD5D0: BLKS(0x0C0AD5D0u);
	r10 = 0xC28EDFCu; UPD(0x0C0AD5D2u, 1);  /* 0C0AD5D0 mov.l @(disp,pc),Rn */
	r4 = 0xFFFFFFFAu;  /* 0C0AD5D2 mov #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AD5D6u, 2);  /* 0C0AD5D4 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0AD5D8u, 1);  /* 0C0AD5D6 mov.w @(disp,pc),Rn */
	IF(0x0C0AD5D8u); MACL = r11 * r8;  /* 0C0AD5D8 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AD5DCu, 3);  /* 0C0AD5DA mov.l @(disp,pc),Rn */
	IF(0x0C0AD5DCu); r8 = MACL;  /* 0C0AD5DC sts macl,Rn */
	r6 = 0xC2B03A2u; UPD(0x0C0AD5E0u, 2);  /* 0C0AD5DE mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C0AD5E0 add Rm,Rn */
	r9 = 0xC2460ACu; UPD(0x0C0AD5E4u, 2);  /* 0C0AD5E2 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)R16(r6); UPD(0x0C0AD5E6u, 1);  /* 0C0AD5E4 mov.w @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C0AD5E8u, 1);  /* 0C0AD5E6 mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C0AD5EAu, 1);  /* 0C0AD5E8 mov.w @(disp,pc),Rn */
	r2 = r7 & 0xFFFF;  /* 0C0AD5EA extu.w Rm,Rn */
	IF(0x0C0AD5ECu); W16(r0 + r8, r10); UPD(0x0C0AD5EEu, 2);  /* 0C0AD5EC mov.w Rm,@(r0,Rn) */
	r9 = 0x4Cu;  /* 0C0AD5EE mov #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0AD5F0 add #imm,Rn */
	IF(0x0C0AD5F2u); W16(r0 + r8, r10); UPD(0x0C0AD5F4u, 3);  /* 0C0AD5F2 mov.w Rm,@(r0,Rn) */
	IF(0x0C0AD5F4u); ARG0(0x4A4Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = (u32)((s32)r10 >> 31); else r10 = (u32)((s32)r10 >> ((~s_ & 31) + 1)); }  /* 0C0AD5F4 shad Rm,Rn */
	r3 = 0x1FFu; UPD(0x0C0AD5F8u, 2);  /* 0C0AD5F6 mov.w @(disp,pc),Rn */
	r10 += 0x40u;  /* 0C0AD5F8 add #imm,Rn */
	r10 &= r3;  /* 0C0AD5FA and Rm,Rn */
	IF(0x0C0AD5FCu); ARG0(0x4A4Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = (u32)((s32)r10 >> 31); else r10 = (u32)((s32)r10 >> ((~s_ & 31) + 1)); }  /* 0C0AD5FC shad Rm,Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0AD600u, 4);  /* 0C0AD5FE mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0AD600 mov Rm,Rn */
	W32(r8 + 0x8u, r10); UPD(0x0C0AD604u, 2);  /* 0C0AD602 mov.l Rm,@(disp,Rn) */
	r5 = 0xC3000114u; UPD(0x0C0AD606u, 1);  /* 0C0AD604 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0AD606 mov #imm,Rn */
	W32(r8, r5); UPD(0x0C0AD60Au, 2);  /* 0C0AD608 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0AD60Cu, 1);  /* 0C0AD60A mov.l Rm,@(disp,Rn) */
	IF(0x0C0AD60Cu); { u32 t_ = r0; PR = 0x0C0AD610u; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AD610u); }  /* 0C0AD60C jsr @Rn */
L_0C0AD610: BLKS(0x0C0AD610u);
	IF(0x0C0AD610u); MACL = r12 * r9;  /* 0C0AD610 mul.l Rm,Rn */
	r3 = 0xC3C43C6u; UPD(0x0C0AD614u, 3);  /* 0C0AD612 mov.l @(disp,pc),Rn */
	r7 = 0xC286318u; UPD(0x0C0AD616u, 1);  /* 0C0AD614 mov.l @(disp,pc),Rn */
	IF(0x0C0AD616u); r9 = MACL;  /* 0C0AD616 sts macl,Rn */
	r5 = 0xC237C08u; UPD(0x0C0AD61Au, 2);  /* 0C0AD618 mov.l @(disp,pc),Rn */
	r9 += r7;  /* 0C0AD61A add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C0AD61Eu, 2);  /* 0C0AD61C mov.w @Rm,Rn */
	r2 = R32(r9 + 0x8u); UPD(0x0C0AD620u, 1);  /* 0C0AD61E mov.l @(disp,Rm),Rn */
	IF(0x0C0AD620u); r4 <<= 16;  /* 0C0AD620 shll16 Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C0AD624u, 2);  /* 0C0AD622 mov.w @Rm,Rn */
	r9 += 0x42u;  /* 0C0AD624 add #imm,Rn */
	r0 = 0xC0A9AE0u; UPD(0x0C0AD628u, 2);  /* 0C0AD626 mov.l @(disp,pc),Rn */
	IF(0x0C0AD628u); r6 <<= 16;  /* 0C0AD628 shll16 Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C0AD62Cu, 2);  /* 0C0AD62A mov.l Rm,@(disp,Rn) */
	r6 -= r2;  /* 0C0AD62C sub Rm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C0AD630u, 2);  /* 0C0AD62E mov.l Rm,@(disp,Rn) */
	IF(0x0C0AD630u); { u32 t_ = r0; PR = 0x0C0AD634u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AD634u); }  /* 0C0AD630 jsr @Rn */
L_0C0AD634: BLKS(0x0C0AD634u);
	r0 = 0xB0u; UPD(0x0C0AD636u, 1);  /* 0C0AD634 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C0AD636 mov Rm,Rn */
	IF(0x0C0AD638u); W8(r0 + r8, r12); UPD(0x0C0AD63Au, 2);  /* 0C0AD638 mov.b Rm,@(r0,Rn) */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C0AD63Cu, 1);  /* 0C0AD63A mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0AD63C add #imm,Rn */
	IF(0x0C0AD63Eu); W8(r0 + r8, r5); UPD(0x0C0AD640u, 2);  /* 0C0AD63E mov.b Rm,@(r0,Rn) */
	r6 = 0xC0A9D30u; UPD(0x0C0AD642u, 1);  /* 0C0AD640 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0AD642 add #imm,Rn */
	IF(0x0C0AD644u); W8(r0 + r8, r5); UPD(0x0C0AD646u, 2);  /* 0C0AD644 mov.b Rm,@(r0,Rn) */
	r7 = 0xC297460u; UPD(0x0C0AD648u, 1);  /* 0C0AD646 mov.l @(disp,pc),Rn */
	IF(0x0C0AD648u); { u32 t_ = r6; PR = 0x0C0AD64Cu; r5 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C0AD64Cu); }  /* 0C0AD648 jsr @Rn */
L_0C0AD64C: BLKS(0x0C0AD64Cu);
	r4 = 0x8Cu; UPD(0x0C0AD64Eu, 1);  /* 0C0AD64C mov.w @(disp,pc),Rn */
	r3 = 0x94u; UPD(0x0C0AD650u, 1);  /* 0C0AD64E mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C0AD650 add Rm,Rn */
	r2 = 0x90u; UPD(0x0C0AD654u, 2);  /* 0C0AD652 mov.w @(disp,pc),Rn */
	r3 += r8;  /* 0C0AD654 add Rm,Rn */
	r8 += r2;  /* 0C0AD656 add Rm,Rn */
	W32(r8, r10); UPD(0x0C0AD65Au, 3);  /* 0C0AD658 mov.l Rm,@Rn */
	W32(r3, r10); UPD(0x0C0AD65Cu, 1);  /* 0C0AD65A mov.l Rm,@Rn */
	{ W32(r4, r10); /* slot mov.l Rm,@Rn */ UPD(0x0C0AD5AEu, 3); goto L_0C0AD5AE; }  /* 0C0AD65C bra */
}

void blk_f_0C0AD6B0(sh3_t *c)
{
	LOCALS;
L_0C0AD6B0: BLKS(0x0C0AD6B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD6B2u, 1);  /* 0C0AD6B0 mov.l Rm,@-Rn */
	r7 = 0x4Cu;  /* 0C0AD6B2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD6B6u, 2);  /* 0C0AD6B4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD6B8u, 1);  /* 0C0AD6B6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD6BAu, 1);  /* 0C0AD6B8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD6BCu, 1);  /* 0C0AD6BA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD6BEu, 1);  /* 0C0AD6BC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD6C0u, 1);  /* 0C0AD6BE mov.l Rm,@-Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0AD6C2u, 1);  /* 0C0AD6C0 mov.l @(disp,pc),Rn */
	IF(0x0C0AD6C2u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD6C4u, 1);  /* 0C0AD6C2 sts.l pr,@-Rn */
	r9 = 0xC2B1811u; UPD(0x0C0AD6C6u, 1);  /* 0C0AD6C4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AD6C6 mov Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AD6CAu, 2);  /* 0C0AD6C8 mov.l @Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r9); UPD(0x0C0AD6CCu, 1);  /* 0C0AD6CA mov.b @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AD6CEu, 1);  /* 0C0AD6CC mov.w @Rm+,Rn */
	IF(0x0C0AD6CEu); MACL = r12 * r7;  /* 0C0AD6CE mul.l Rm,Rn */
	r8 = 0xC2B0378u; UPD(0x0C0AD6D2u, 3);  /* 0C0AD6D0 mov.l @(disp,pc),Rn */
	r6 = 0xC286318u; UPD(0x0C0AD6D4u, 1);  /* 0C0AD6D2 mov.l @(disp,pc),Rn */
	IF(0x0C0AD6D4u); r11 = MACL;  /* 0C0AD6D4 sts macl,Rn */
	W16(r8, r1); UPD(0x0C0AD6D8u, 2);  /* 0C0AD6D6 mov.w Rm,@Rn */
	r11 += r6;  /* 0C0AD6D8 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0AD6DCu, 2);  /* 0C0AD6DA mov.w @Rm+,Rn */
	r3 = R32(r11 + 0x38u); UPD(0x0C0AD6DEu, 1);  /* 0C0AD6DC mov.l @(disp,Rm),Rn */
	IF(0x0C0AD6DEu); r0 <<= 2;  /* 0C0AD6DE shll2 Rn */
	IF(0x0C0AD6E0u); r2 = R32(r0 + r3); UPD(0x0C0AD6E2u, 2);  /* 0C0AD6E0 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0AD6E4u, 1);  /* 0C0AD6E2 mov.w @Rm+,Rn */
	r8 = 0xC071740u; UPD(0x0C0AD6E6u, 1);  /* 0C0AD6E4 mov.l @(disp,pc),Rn */
	W32(r4, r5); UPD(0x0C0AD6E8u, 1);  /* 0C0AD6E6 mov.l Rm,@Rn */
	r13 = 0xC297460u; UPD(0x0C0AD6EAu, 1);  /* 0C0AD6E8 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0AD6EA mov #imm,Rn */
	r9 = 0xC2B03A2u; UPD(0x0C0AD6EEu, 2);  /* 0C0AD6EC mov.l @(disp,pc),Rn */
	W32(r13, r2); UPD(0x0C0AD6F0u, 1);  /* 0C0AD6EE mov.l Rm,@Rn */
	IF(0x0C0AD6F0u); { u32 t_ = r8; PR = 0x0C0AD6F4u; W16(r9, r0); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0AD6F4u); }  /* 0C0AD6F0 jsr @Rn */
L_0C0AD6F4: BLKS(0x0C0AD6F4u);
	T = (r0 & r0) == 0;  /* 0C0AD6F4 tst Rm,Rn */
	if (!T) { UPD(0x0C0AD710u, 4); goto L_0C0AD710; }  /* 0C0AD6F6 bf */
L_0C0AD6F8: BLKS(0x0C0AD6F8u);
	r0 = 0x1u;  /* 0C0AD6F8 mov #imm,Rn */
	r15 = r14;  /* 0C0AD6FA mov Rm,Rn */
	IF(0x0C0AD6FCu); PR = R32(r15); r15 += 4; UPD(0x0C0AD6FEu, 3);  /* 0C0AD6FC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD700u, 1);  /* 0C0AD6FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AD702u, 1);  /* 0C0AD700 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD704u, 1);  /* 0C0AD702 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD706u, 1);  /* 0C0AD704 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD708u, 1);  /* 0C0AD706 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD70Au, 1);  /* 0C0AD708 mov.l @Rm+,Rn */
	IF(0x0C0AD70Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD70A rts */
L_0C0AD710: BLKS(0x0C0AD710u);
	r5 = 0xC28EDFCu; UPD(0x0C0AD712u, 1);  /* 0C0AD710 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFAu;  /* 0C0AD712 mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r5); UPD(0x0C0AD716u, 2);  /* 0C0AD714 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0AD718u, 1);  /* 0C0AD716 mov.w @(disp,pc),Rn */
	r3 = 0xC2460ACu; UPD(0x0C0AD71Au, 1);  /* 0C0AD718 mov.l @(disp,pc),Rn */
	IF(0x0C0AD71Au); MACL = r10 * r8;  /* 0C0AD71A mul.l Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0AD71Eu, 3);  /* 0C0AD71C mov.w @Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0AD720u, 1);  /* 0C0AD71E mov.l @(disp,pc),Rn */
	IF(0x0C0AD720u); r8 = MACL;  /* 0C0AD720 sts macl,Rn */
	r8 += r7;  /* 0C0AD722 add Rm,Rn */
	r0 = r2 & 0xFFFF;  /* 0C0AD724 extu.w Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C0AD728u, 4);  /* 0C0AD726 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0AD72Au, 1);  /* 0C0AD728 mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C0AD72Cu, 1);  /* 0C0AD72A mov.w @(disp,pc),Rn */
	IF(0x0C0AD72Cu); W16(r0 + r8, r4); UPD(0x0C0AD72Eu, 1);  /* 0C0AD72C mov.w Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0AD72E add #imm,Rn */
	IF(0x0C0AD730u); W16(r0 + r8, r4); UPD(0x0C0AD732u, 2);  /* 0C0AD730 mov.w Rm,@(r0,Rn) */
	IF(0x0C0AD732u); ARG0(0x441Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0AD732 shad Rm,Rn */
	r9 = 0x1FFu; UPD(0x0C0AD736u, 2);  /* 0C0AD734 mov.w @(disp,pc),Rn */
	r4 += 0x40u;  /* 0C0AD736 add #imm,Rn */
	r4 &= r9;  /* 0C0AD738 and Rm,Rn */
	IF(0x0C0AD73Au); ARG0(0x441Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0AD73A shad Rm,Rn */
	r5 = 0xC0A8A30u; UPD(0x0C0AD73Eu, 4);  /* 0C0AD73C mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0AD73E mov #imm,Rn */
	r6 = 0xC3000114u; UPD(0x0C0AD742u, 2);  /* 0C0AD740 mov.l @(disp,pc),Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C0AD744u, 1);  /* 0C0AD742 mov.l Rm,@(disp,Rn) */
	W32(r8, r6); UPD(0x0C0AD746u, 1);  /* 0C0AD744 mov.l Rm,@Rn */
	r4 = r10;  /* 0C0AD746 mov Rm,Rn */
	IF(0x0C0AD748u); { u32 t_ = r5; PR = 0x0C0AD74Cu; W32(r8 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AD74Cu); }  /* 0C0AD748 jsr @Rn */
L_0C0AD74C: BLKS(0x0C0AD74Cu);
	r7 = 0xC237C08u; UPD(0x0C0AD74Eu, 1);  /* 0C0AD74C mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0AD74E mov Rm,Rn */
	r2 = 0xC3C43C6u; UPD(0x0C0AD752u, 2);  /* 0C0AD750 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C0AD754u, 1);  /* 0C0AD752 mov.w @Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AD756u, 1);  /* 0C0AD754 mov.w @Rm,Rn */
	IF(0x0C0AD756u); r3 <<= 16;  /* 0C0AD756 shll16 Rn */
	r6 = R32(r11 + 0x8u); UPD(0x0C0AD75Au, 2);  /* 0C0AD758 mov.l @(disp,Rm),Rn */
	IF(0x0C0AD75Au); r0 <<= 16;  /* 0C0AD75A shll16 Rn */
	r5 = 0xC0A9AE0u; UPD(0x0C0AD75Eu, 2);  /* 0C0AD75C mov.l @(disp,pc),Rn */
	r3 -= r6;  /* 0C0AD75E sub Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C0AD762u, 2);  /* 0C0AD760 mov.l Rm,@(disp,Rn) */
	r11 += 0x42u;  /* 0C0AD762 add #imm,Rn */
	IF(0x0C0AD764u); { u32 t_ = r5; PR = 0x0C0AD768u; W32(r8 + 0x24u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AD768u); }  /* 0C0AD764 jsr @Rn */
L_0C0AD768: BLKS(0x0C0AD768u);
	r0 = 0xB0u; UPD(0x0C0AD76Au, 1);  /* 0C0AD768 mov.w @(disp,pc),Rn */
	IF(0x0C0AD76Au); W8(r0 + r8, r12); UPD(0x0C0AD76Cu, 1);  /* 0C0AD76A mov.b Rm,@(r0,Rn) */
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C0AD76Eu, 1);  /* 0C0AD76C mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0AD76E add #imm,Rn */
	IF(0x0C0AD770u); W8(r0 + r8, r4); UPD(0x0C0AD772u, 2);  /* 0C0AD770 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0AD772 add #imm,Rn */
	IF(0x0C0AD774u); W8(r0 + r8, r4); UPD(0x0C0AD776u, 2);  /* 0C0AD774 mov.b Rm,@(r0,Rn) */
	r5 = R32(r13); UPD(0x0C0AD778u, 1);  /* 0C0AD776 mov.l @Rm,Rn */
	r4 = r10;  /* 0C0AD778 mov Rm,Rn */
	r13 = 0xC0A9D30u; UPD(0x0C0AD77Cu, 2);  /* 0C0AD77A mov.l @(disp,pc),Rn */
	r10 = 0x8Cu; UPD(0x0C0AD77Eu, 1);  /* 0C0AD77C mov.w @(disp,pc),Rn */
	IF(0x0C0AD77Eu); { u32 t_ = r13; PR = 0x0C0AD782u; r10 += r8; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C0AD782u); }  /* 0C0AD77E jsr @Rn */
L_0C0AD782: BLKS(0x0C0AD782u);
	r11 = 0x94u; UPD(0x0C0AD784u, 1);  /* 0C0AD782 mov.w @(disp,pc),Rn */
	r12 = 0x90u; UPD(0x0C0AD786u, 1);  /* 0C0AD784 mov.w @(disp,pc),Rn */
	r11 += r8;  /* 0C0AD786 add Rm,Rn */
	r8 += r12;  /* 0C0AD788 add Rm,Rn */
	W32(r8, r9); UPD(0x0C0AD78Cu, 3);  /* 0C0AD78A mov.l Rm,@Rn */
	W32(r11, r9); UPD(0x0C0AD78Eu, 1);  /* 0C0AD78C mov.l Rm,@Rn */
	{ W32(r10, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C0AD6F8u, 3); goto L_0C0AD6F8; }  /* 0C0AD78E bra */
}

void blk_f_0C0AD7E0(sh3_t *c)
{
	LOCALS;
L_0C0AD7E0: BLKS(0x0C0AD7E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD7E2u, 1);  /* 0C0AD7E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD7E4u, 1);  /* 0C0AD7E2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0AD7E4 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD7E8u, 2);  /* 0C0AD7E6 mov.l Rm,@-Rn */
	r9 = 0xC0C2360u; UPD(0x0C0AD7EAu, 1);  /* 0C0AD7E8 mov.l @(disp,pc),Rn */
	IF(0x0C0AD7EAu); r15 -= 4; W32(r15, PR); UPD(0x0C0AD7ECu, 1);  /* 0C0AD7EA sts.l pr,@-Rn */
	IF(0x0C0AD7ECu); { u32 t_ = r9; PR = 0x0C0AD7F0u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AD7F0u); }  /* 0C0AD7EC jsr @Rn */
L_0C0AD7F0: BLKS(0x0C0AD7F0u);
	r0 &= 0x3u;  /* 0C0AD7F0 and #imm,r0 */
	T = r0 == 0x2u;  /* 0C0AD7F2 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD8E0u, 5); goto L_0C0AD8E0; } goto L_0C0AD7F8; }  /* 0C0AD7F4 bt/s */
L_0C0AD7F8: BLKS(0x0C0AD7F8u);
	T = (s32)r0 > (s32)r2;  /* 0C0AD7F8 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0AD8B0u, 5); goto L_0C0AD8B0; } goto L_0C0AD7FE; }  /* 0C0AD7FA bt/s */
L_0C0AD7FE: BLKS(0x0C0AD7FEu);
	T = r0 == 0x1u;  /* 0C0AD7FE cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0AD880u, 5); goto L_0C0AD880; }  /* 0C0AD800 bt */
L_0C0AD802: BLKS(0x0C0AD802u);
	r7 = 0xB4u; UPD(0x0C0AD804u, 1);  /* 0C0AD802 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD804 add #imm,Rn */
	IF(0x0C0AD806u); MACL = r8 * r7;  /* 0C0AD806 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AD80Au, 4);  /* 0C0AD808 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AD80Cu, 1);  /* 0C0AD80A mov.w @(disp,pc),Rn */
	IF(0x0C0AD80Cu); r3 = MACL;  /* 0C0AD80C sts macl,Rn */
	r3 += r9;  /* 0C0AD80E add Rm,Rn */
	IF(0x0C0AD810u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AD812u, 3);  /* 0C0AD810 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0AD812 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0AD816u, 2);  /* 0C0AD814 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AD816 add #imm,Rn */
	IF(0x0C0AD818u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AD81Au, 2);  /* 0C0AD818 mov.b @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C0AD81A mov #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0AD81C extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AD820u, 3);  /* 0C0AD81E mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0AD822u, 1);  /* 0C0AD820 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AD824u, 1);  /* 0C0AD822 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AD826u, 1);  /* 0C0AD824 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0AD828u, 1);  /* 0C0AD826 mov.l @(disp,Rm),Rn */
L_0C0AD828: BLKS(0x0C0AD828u);
	IF(0x0C0AD828u); { u32 t_ = r0; PR = 0x0C0AD82Cu; IF(0x0C0AD82Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0AD82Cu); }  /* 0C0AD828 jsr @Rn */
L_0C0AD82C: BLKS(0x0C0AD82Cu);
	r3 = 0xB4u; UPD(0x0C0AD82Eu, 1);  /* 0C0AD82C mov.w @(disp,pc),Rn */
	IF(0x0C0AD82Eu); MACL = r8 * r3;  /* 0C0AD82E mul.l Rm,Rn */
	r6 = 0x4000000u; UPD(0x0C0AD832u, 3);  /* 0C0AD830 mov.l @(disp,pc),Rn */
	IF(0x0C0AD832u); r3 = MACL;  /* 0C0AD832 sts macl,Rn */
	r3 += r9;  /* 0C0AD834 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C0AD838u, 3);  /* 0C0AD836 mov.l @Rm,Rn */
	T = (r1 & r6) == 0;  /* 0C0AD838 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD860u, 4); goto L_0C0AD860; } goto L_0C0AD83E; }  /* 0C0AD83A bf/s */
L_0C0AD83E: BLKS(0x0C0AD83Eu);
	r7 = 0xC297498u; UPD(0x0C0AD840u, 2);  /* 0C0AD83E mov.l @(disp,pc),Rn */
	r0 = R32(r7); UPD(0x0C0AD842u, 1);  /* 0C0AD840 mov.l @Rm,Rn */
	T = r0 == 0x7u;  /* 0C0AD842 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0AD860u, 4); goto L_0C0AD860; }  /* 0C0AD844 bt */
L_0C0AD846: BLKS(0x0C0AD846u);
	r0 = 0xB4u; UPD(0x0C0AD848u, 1);  /* 0C0AD846 mov.w @(disp,pc),Rn */
	IF(0x0C0AD848u); MACL = r8 * r0;  /* 0C0AD848 mul.l Rm,Rn */
	r8 = 0x0u;  /* 0C0AD84A mov #imm,Rn */
	IF(0x0C0AD84Cu); r0 = MACL;  /* 0C0AD84C sts macl,Rn */
	IF(0x0C0AD84Eu); W32(r0 + r9, r8); UPD(0x0C0AD850u, 5);  /* 0C0AD84E mov.l Rm,@(r0,Rn) */
	r15 = r14;  /* 0C0AD850 mov Rm,Rn */
	IF(0x0C0AD852u); PR = R32(r15); r15 += 4; UPD(0x0C0AD854u, 2);  /* 0C0AD852 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD856u, 1);  /* 0C0AD854 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD858u, 1);  /* 0C0AD856 mov.l @Rm+,Rn */
	IF(0x0C0AD858u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD858 rts */
L_0C0AD860: BLKS(0x0C0AD860u);
	r0 = 0xB0u; UPD(0x0C0AD862u, 1);  /* 0C0AD860 mov.w @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0AD862 mov #imm,Rn */
	IF(0x0C0AD864u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AD866u, 2);  /* 0C0AD864 mov.b @(r0,Rm),Rn */
	r0 = 0xC07DF30u; UPD(0x0C0AD868u, 1);  /* 0C0AD866 mov.l @(disp,pc),Rn */
	r7 = r2 & 0xFF;  /* 0C0AD868 extu.b Rm,Rn */
	r5 = R32(r3 + 0x24u); UPD(0x0C0AD86Cu, 2);  /* 0C0AD86A mov.l @(disp,Rm),Rn */
	IF(0x0C0AD86Cu); { u32 t_ = r0; PR = 0x0C0AD870u; r6 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C0AD870u); }  /* 0C0AD86C jsr @Rn */
L_0C0AD870: BLKS(0x0C0AD870u);
	{ IF(0x0C0AD872u); ; /* slot nop */ UPD(0x0C0AD846u, 3); goto L_0C0AD846; }  /* 0C0AD870 bra */
L_0C0AD880: BLKS(0x0C0AD880u);
	r0 = 0xB4u; UPD(0x0C0AD882u, 1);  /* 0C0AD880 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD882 add #imm,Rn */
	IF(0x0C0AD884u); MACL = r8 * r0;  /* 0C0AD884 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AD888u, 4);  /* 0C0AD886 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AD88Au, 1);  /* 0C0AD888 mov.w @(disp,pc),Rn */
	IF(0x0C0AD88Au); r3 = MACL;  /* 0C0AD88A sts macl,Rn */
	r3 += r9;  /* 0C0AD88C add Rm,Rn */
	IF(0x0C0AD88Eu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AD890u, 3);  /* 0C0AD88E mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0AD890 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0AD894u, 2);  /* 0C0AD892 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AD894 add #imm,Rn */
	IF(0x0C0AD896u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AD898u, 2);  /* 0C0AD896 mov.b @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C0AD898 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0AD89A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0AD89Eu, 3);  /* 0C0AD89C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0AD8A0u, 1);  /* 0C0AD89E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AD8A2u, 1);  /* 0C0AD8A0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AD8A4u, 1);  /* 0C0AD8A2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AD828u, 3); goto L_0C0AD828; }  /* 0C0AD8A4 bra */
L_0C0AD8B0: BLKS(0x0C0AD8B0u);
	if (!T) { UPD(0x0C0AD802u, 3); goto L_0C0AD802; }  /* 0C0AD8B0 bf */
L_0C0AD8B2: BLKS(0x0C0AD8B2u);
	r15 += 0xFFFFFFF8u;  /* 0C0AD8B2 add #imm,Rn */
	r5 = 0xB4u; UPD(0x0C0AD8B6u, 2);  /* 0C0AD8B4 mov.w @(disp,pc),Rn */
	IF(0x0C0AD8B6u); MACL = r8 * r5;  /* 0C0AD8B6 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AD8BAu, 3);  /* 0C0AD8B8 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AD8BCu, 1);  /* 0C0AD8BA mov.w @(disp,pc),Rn */
	IF(0x0C0AD8BCu); r3 = MACL;  /* 0C0AD8BC sts macl,Rn */
	r3 += r9;  /* 0C0AD8BE add Rm,Rn */
	IF(0x0C0AD8C0u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AD8C2u, 3);  /* 0C0AD8C0 mov.b @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C0AD8C2 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0AD8C4 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AD8C8u, 3);  /* 0C0AD8C6 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AD8C8 add #imm,Rn */
	IF(0x0C0AD8CAu); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AD8CCu, 2);  /* 0C0AD8CA mov.b @(r0,Rm),Rn */
	r0 = r7 & 0xFF;  /* 0C0AD8CC extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AD8D0u, 2);  /* 0C0AD8CE mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0AD8D2u, 1);  /* 0C0AD8D0 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AD8D4u, 1);  /* 0C0AD8D2 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AD8D6u, 1);  /* 0C0AD8D4 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AD828u, 3); goto L_0C0AD828; }  /* 0C0AD8D6 bra */
L_0C0AD8E0: BLKS(0x0C0AD8E0u);
	r6 = 0xB4u; UPD(0x0C0AD8E2u, 1);  /* 0C0AD8E0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD8E2 add #imm,Rn */
	IF(0x0C0AD8E4u); MACL = r8 * r6;  /* 0C0AD8E4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AD8E8u, 4);  /* 0C0AD8E6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AD8EAu, 1);  /* 0C0AD8E8 mov.w @(disp,pc),Rn */
	IF(0x0C0AD8EAu); r3 = MACL;  /* 0C0AD8EA sts macl,Rn */
	r3 += r9;  /* 0C0AD8EC add Rm,Rn */
	IF(0x0C0AD8EEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AD8F0u, 3);  /* 0C0AD8EE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0AD8F0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0AD8F4u, 2);  /* 0C0AD8F2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AD8F4 add #imm,Rn */
	IF(0x0C0AD8F6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AD8F8u, 2);  /* 0C0AD8F6 mov.b @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C0AD8F8 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0AD8FA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0AD8FEu, 3);  /* 0C0AD8FC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C0AD900u, 1);  /* 0C0AD8FE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AD902u, 1);  /* 0C0AD900 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AD904u, 1);  /* 0C0AD902 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AD828u, 3); goto L_0C0AD828; }  /* 0C0AD904 bra */
}

void blk_f_0C0AD930(sh3_t *c)
{
	LOCALS;
L_0C0AD930: BLKS(0x0C0AD930u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD932u, 1);  /* 0C0AD930 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD934u, 1);  /* 0C0AD932 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD936u, 1);  /* 0C0AD934 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AD936 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD93Au, 2);  /* 0C0AD938 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0AD93A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD93Eu, 2);  /* 0C0AD93C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD940u, 1);  /* 0C0AD93E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD942u, 1);  /* 0C0AD940 mov.l Rm,@-Rn */
	r11 = 0xC069BF0u; UPD(0x0C0AD944u, 1);  /* 0C0AD942 mov.l @(disp,pc),Rn */
	IF(0x0C0AD944u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD946u, 1);  /* 0C0AD944 sts.l pr,@-Rn */
	r10 = 0xC068F00u; UPD(0x0C0AD948u, 1);  /* 0C0AD946 mov.l @(disp,pc),Rn */
	IF(0x0C0AD948u); { u32 t_ = r11; PR = 0x0C0AD94Cu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C0AD94Cu); }  /* 0C0AD948 jsr @Rn */
L_0C0AD94C: BLKS(0x0C0AD94Cu);
	r5 = 0x2u;  /* 0C0AD94C mov #imm,Rn */
	IF(0x0C0AD94Eu); { u32 t_ = r10; PR = 0x0C0AD952u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C0AD952u); }  /* 0C0AD94E jsr @Rn */
L_0C0AD952: BLKS(0x0C0AD952u);
	r4 = 0xB4u; UPD(0x0C0AD954u, 1);  /* 0C0AD952 mov.w @(disp,pc),Rn */
	r2 = 0x8u;  /* 0C0AD954 mov #imm,Rn */
	IF(0x0C0AD956u); MACL = r9 * r4;  /* 0C0AD956 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0AD95Au, 4);  /* 0C0AD958 mov.l @(disp,pc),Rn */
	IF(0x0C0AD95Au); r13 = MACL;  /* 0C0AD95A sts macl,Rn */
	r10 = 0x86u; UPD(0x0C0AD95Eu, 2);  /* 0C0AD95C mov.w @(disp,pc),Rn */
	r13 += r3;  /* 0C0AD95E add Rm,Rn */
	r10 += r13;  /* 0C0AD960 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AD964u, 3);  /* 0C0AD962 mov.w @Rm,Rn */
	r4 = r9;  /* 0C0AD964 mov Rm,Rn */
	r0 += 0x8u;  /* 0C0AD966 add #imm,Rn */
	IF(0x0C0AD968u); r0 >>= 2;  /* 0C0AD968 shlr2 Rn */
	IF(0x0C0AD96Au); r0 >>= 2;  /* 0C0AD96A shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C0AD96C and #imm,r0 */
	W32(r13 + 0xCu, r0); UPD(0x0C0AD970u, 6);  /* 0C0AD96E mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A8B10u; UPD(0x0C0AD972u, 1);  /* 0C0AD970 mov.l @(disp,pc),Rn */
	r8 = 0xC0BC1B0u; UPD(0x0C0AD974u, 1);  /* 0C0AD972 mov.l @(disp,pc),Rn */
	IF(0x0C0AD974u); { u32 t_ = r0; PR = 0x0C0AD978u; W32(r13 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C0AD978u); }  /* 0C0AD974 jsr @Rn */
L_0C0AD978: BLKS(0x0C0AD978u);
	r4 = r9;  /* 0C0AD978 mov Rm,Rn */
	r5 = 0x3Cu;  /* 0C0AD97A mov #imm,Rn */
	IF(0x0C0AD97Cu); { u32 t_ = r8; PR = 0x0C0AD980u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLD(t_, 0x0C0AD980u); }  /* 0C0AD97C jsr @Rn */
L_0C0AD980: BLKS(0x0C0AD980u);
	T = (r0 & r0) == 0;  /* 0C0AD980 tst Rm,Rn */
	if (!T) { UPD(0x0C0AD9A0u, 4); goto L_0C0AD9A0; }  /* 0C0AD982 bf */
L_0C0AD984: BLKS(0x0C0AD984u);
	r15 = r14;  /* 0C0AD984 mov Rm,Rn */
	IF(0x0C0AD986u); PR = R32(r15); r15 += 4; UPD(0x0C0AD988u, 2);  /* 0C0AD986 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD98Au, 1);  /* 0C0AD988 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AD98Cu, 1);  /* 0C0AD98A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD98Eu, 1);  /* 0C0AD98C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD990u, 1);  /* 0C0AD98E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD992u, 1);  /* 0C0AD990 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD994u, 1);  /* 0C0AD992 mov.l @Rm+,Rn */
	IF(0x0C0AD994u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD994 rts */
L_0C0AD9A0: BLKS(0x0C0AD9A0u);
	r6 = 0xA9u; UPD(0x0C0AD9A2u, 1);  /* 0C0AD9A0 mov.w @(disp,pc),Rn */
	r0 = r13;  /* 0C0AD9A2 mov Rm,Rn */
	IF(0x0C0AD9A4u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0AD9A6u, 2);  /* 0C0AD9A4 mov.b @(r0,Rm),Rn */
	r8 = 0xC0BBF10u; UPD(0x0C0AD9A8u, 1);  /* 0C0AD9A6 mov.l @(disp,pc),Rn */
	r6 = r5 & 0xFF;  /* 0C0AD9A8 extu.b Rm,Rn */
	r4 = R32(r13 + 0x24u); UPD(0x0C0AD9ACu, 2);  /* 0C0AD9AA mov.l @(disp,Rm),Rn */
	IF(0x0C0AD9ACu); { u32 t_ = r8; PR = 0x0C0AD9B0u; r5 = R32(r13 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C0AD9B0u); }  /* 0C0AD9AC jsr @Rn */
L_0C0AD9B0: BLKS(0x0C0AD9B0u);
	T = (r0 & r0) == 0;  /* 0C0AD9B0 tst Rm,Rn */
	if (T) { UPD(0x0C0AD984u, 4); goto L_0C0AD984; }  /* 0C0AD9B2 bt */
L_0C0AD9B4: BLKS(0x0C0AD9B4u);
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AD9B6u, 1);  /* 0C0AD9B4 mov.w @Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C0AD9B8u, 1);  /* 0C0AD9B6 mov.l @(disp,pc),Rn */
	r11 = 0xC069AF0u; UPD(0x0C0AD9BAu, 1);  /* 0C0AD9B8 mov.l @(disp,pc),Rn */
	r5 = 0xE0000u; UPD(0x0C0AD9BCu, 1);  /* 0C0AD9BA mov.l @(disp,pc),Rn */
	IF(0x0C0AD9BCu); { u32 t_ = r10; PR = 0x0C0AD9C0u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0AD9C0u); }  /* 0C0AD9BC jsr @Rn */
L_0C0AD9C0: BLKS(0x0C0AD9C0u);
	r8 = r0;  /* 0C0AD9C0 mov Rm,Rn */
	r5 = 0x20000u; UPD(0x0C0AD9C4u, 2);  /* 0C0AD9C2 mov.l @(disp,pc),Rn */
	IF(0x0C0AD9C4u); { u32 t_ = r11; PR = 0x0C0AD9C8u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0AD9C8u); }  /* 0C0AD9C4 jsr @Rn */
L_0C0AD9C8: BLKS(0x0C0AD9C8u);
	r3 = 0x66666667u; UPD(0x0C0AD9CAu, 1);  /* 0C0AD9C8 mov.l @(disp,pc),Rn */
	r8 -= r0;  /* 0C0AD9CA sub Rm,Rn */
	IF(0x0C0AD9CCu); r8 <<= 2;  /* 0C0AD9CC shll2 Rn */
	{ s64 r_ = (s64)(s32)r8 * (s64)(s32)r3; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0AD9CE dmuls.l Rm,Rn */
	r10 = R32(r13 + 0x24u); UPD(0x0C0AD9D2u, 5);  /* 0C0AD9D0 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0AD9D2 mov Rm,Rn */
	IF(0x0C0AD9D4u); r2 = MACH;  /* 0C0AD9D4 sts mach,Rn */
	IF(0x0C0AD9D6u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C0AD9D6 shar Rn */
	IF(0x0C0AD9D8u); T = r8 >> 31; r8 <<= 1;  /* 0C0AD9D8 shll Rn */
	{ u32 a_ = r8, t_ = a_ - r8, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r8 = r_; }  /* 0C0AD9DA subc Rm,Rn */
	r2 -= r8;  /* 0C0AD9DC sub Rm,Rn */
	r0 = 0x60000u; UPD(0x0C0AD9E0u, 7);  /* 0C0AD9DE mov.l @(disp,pc),Rn */
	r10 += r2;  /* 0C0AD9E0 add Rm,Rn */
	r5 = 0xE0000u; UPD(0x0C0AD9E4u, 2);  /* 0C0AD9E2 mov.l @(disp,pc),Rn */
	IF(0x0C0AD9E4u); { u32 t_ = r11; PR = 0x0C0AD9E8u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0AD9E8u); }  /* 0C0AD9E4 jsr @Rn */
L_0C0AD9E8: BLKS(0x0C0AD9E8u);
	r11 = R32(r13 + 0x28u); UPD(0x0C0AD9EAu, 1);  /* 0C0AD9E8 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0AD9EA mov Rm,Rn */
	r13 = 0xC069B20u; UPD(0x0C0AD9EEu, 2);  /* 0C0AD9EC mov.l @(disp,pc),Rn */
	r5 = 0x20000u; UPD(0x0C0AD9F0u, 1);  /* 0C0AD9EE mov.l @(disp,pc),Rn */
	IF(0x0C0AD9F0u); { u32 t_ = r13; PR = 0x0C0AD9F4u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0AD9F4u); }  /* 0C0AD9F0 jsr @Rn */
L_0C0AD9F4: BLKS(0x0C0AD9F4u);
	r7 = 0x20000u; UPD(0x0C0AD9F6u, 1);  /* 0C0AD9F4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AD9F6 add #imm,Rn */
	r12 = 0xC072C90u; UPD(0x0C0AD9FAu, 2);  /* 0C0AD9F8 mov.l @(disp,pc),Rn */
	r11 += r0;  /* 0C0AD9FA add Rm,Rn */
	W32(r15, r7); UPD(0x0C0AD9FEu, 2);  /* 0C0AD9FC mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C0AD9FE mov #imm,Rn */
	r5 = r10;  /* 0C0ADA00 mov Rm,Rn */
	r6 = r11;  /* 0C0ADA02 mov Rm,Rn */
	IF(0x0C0ADA04u); { u32 t_ = r12; PR = 0x0C0ADA08u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C072C90, 0x0C072C90u, 0x0C0ADA08u); }  /* 0C0ADA04 jsr @Rn */
L_0C0ADA08: BLKS(0x0C0ADA08u);
	{ IF(0x0C0ADA0Au); ; /* slot nop */ UPD(0x0C0AD984u, 3); goto L_0C0AD984; }  /* 0C0ADA08 bra */
}

void blk_f_0C0ADA50(sh3_t *c)
{
	LOCALS;
L_0C0ADA50: BLKS(0x0C0ADA50u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADA52u, 1);  /* 0C0ADA50 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C0ADA52 mov Rm,Rn */
	r15 = r14;  /* 0C0ADA54 mov Rm,Rn */
	IF(0x0C0ADA56u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0ADA56 rts */
}

void blk_f_0C0ADA60(sh3_t *c)
{
	LOCALS;
L_0C0ADA60: BLKS(0x0C0ADA60u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADA62u, 1);  /* 0C0ADA60 mov.l Rm,@-Rn */
	r0 = 0x1u;  /* 0C0ADA62 mov #imm,Rn */
	r14 = r15;  /* 0C0ADA64 mov Rm,Rn */
	r15 = r14;  /* 0C0ADA66 mov Rm,Rn */
	IF(0x0C0ADA68u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C0ADA68 rts */
}

void blk_f_0C0ADA70(sh3_t *c)
{
	LOCALS;
L_0C0ADA70: BLKS(0x0C0ADA70u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADA72u, 1);  /* 0C0ADA70 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C0ADA72 mov Rm,Rn */
	r15 = r14;  /* 0C0ADA74 mov Rm,Rn */
	IF(0x0C0ADA76u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0ADA76 rts */
}

void blk_f_0C0ADA80(sh3_t *c)
{
	LOCALS;
L_0C0ADA80: BLKS(0x0C0ADA80u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADA82u, 1);  /* 0C0ADA80 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C0ADA82 mov Rm,Rn */
	r15 = r14;  /* 0C0ADA84 mov Rm,Rn */
	IF(0x0C0ADA86u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0ADA86 rts */
}


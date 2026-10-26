#include "recomp.h"
#include "recomp_funcs.h"

void f_0C09C620(sh3_t *c)
{
	LOCALS;
L_0C09C620: BLKS(0x0C09C620u);
	r10 = 0xC0A0540u; UPD(0x0C09C622u, 1);  /* 0C09C620 mov.l @(disp,pc),Rn */
	IF(0x0C09C622u); { u32 t_ = r10; PR = 0x0C09C626u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C09C626u); }  /* 0C09C622 jsr @Rn */
L_0C09C626: BLKS(0x0C09C626u);
	IF(0x0C09C626u); T = (s32)r0 >= 0;  /* 0C09C626 cmp/pz Rn */
	if (T) { UPD(0x0C09C632u, 4); goto L_0C09C632; }  /* 0C09C628 bt */
L_0C09C62A: BLKS(0x0C09C62Au);
	r0 = 0xFFFFE7E0u; UPD(0x0C09C62Cu, 1);  /* 0C09C62A mov.w @(disp,pc),Rn */
	IF(0x0C09C62Cu); { u32 tv_ = (r0 + 0x0C09C630u); u32 t_ = PHYS(tv_); IF(0x0C09C62Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C62C braf Rn */
L_0C09C632: BLKS(0x0C09C632u);
	r1 = 0xB4u; UPD(0x0C09C634u, 1);  /* 0C09C632 mov.w @(disp,pc),Rn */
	IF(0x0C09C634u); MACL = r0 * r1;  /* 0C09C634 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09C638u, 3);  /* 0C09C636 mov.l @(disp,pc),Rn */
	IF(0x0C09C638u); r7 = MACL;  /* 0C09C638 sts macl,Rn */
	r7 += r2;  /* 0C09C63A add Rm,Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C09C63Eu, 3);  /* 0C09C63C mov.l @(disp,Rm),Rn */
	T = r0 == 0x20u;  /* 0C09C63E cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C09C642u); MACL = r11 * r1; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09C680u, 5); goto L_0C09C680; } goto L_0C09C644; }  /* 0C09C640 bt/s */
L_0C09C644: BLKS(0x0C09C644u);
	IF(0x0C09C644u); r1 = MACL;  /* 0C09C644 sts macl,Rn */
	r11 = 0xFFFFEE1Cu; UPD(0x0C09C648u, 4);  /* 0C09C646 mov.w @(disp,pc),Rn */
	IF(0x0C09C648u); { u32 tv_ = (r11 + 0x0C09C64Cu); u32 t_ = PHYS(tv_); r1 += r2; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C648 braf Rn */
L_0C09C680: BLKS(0x0C09C680u);
	IF(0x0C09C680u); MACL = r11 * r1;  /* 0C09C680 mul.l Rm,Rn */
	r0 = 0xA8u; UPD(0x0C09C684u, 3);  /* 0C09C682 mov.w @(disp,pc),Rn */
	IF(0x0C09C684u); r8 = MACL;  /* 0C09C684 sts macl,Rn */
	r8 += r2;  /* 0C09C686 add Rm,Rn */
	r9 = r8;  /* 0C09C688 mov Rm,Rn */
	r9 += r0;  /* 0C09C68A add Rm,Rn */
	r0 += r7;  /* 0C09C68C add Rm,Rn */
	r0 += 0x1u;  /* 0C09C68E add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r0); UPD(0x0C09C692u, 7);  /* 0C09C690 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C09C692 add #imm,Rn */
	r3 = 0xAFu; UPD(0x0C09C696u, 2);  /* 0C09C694 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09C696 mov Rm,Rn */
	IF(0x0C09C698u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09C69Au, 2);  /* 0C09C698 mov.b @(r0,Rm),Rn */
	r13 = 0x9Au; UPD(0x0C09C69Cu, 1);  /* 0C09C69A mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C09C69C mov Rm,Rn */
	r6 = R32(r7 + 0x24u); UPD(0x0C09C6A0u, 2);  /* 0C09C69E mov.l @(disp,Rm),Rn */
	r12 += r5;  /* 0C09C6A0 add Rm,Rn */
	r4 = R32(r7 + 0x28u); UPD(0x0C09C6A4u, 2);  /* 0C09C6A2 mov.l @(disp,Rm),Rn */
	r10 = R32(r8 + 0x2Cu); UPD(0x0C09C6A6u, 1);  /* 0C09C6A4 mov.l @(disp,Rm),Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C09C6A8u, 1);  /* 0C09C6A6 mov.l @(disp,Rm),Rn */
	r6 += r10;  /* 0C09C6A8 add Rm,Rn */
	IF(0x0C09C6AAu); r2 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C09C6ACu, 2);  /* 0C09C6AA mov.b @(r0,Rm),Rn */
	r4 += r1;  /* 0C09C6AC add Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C09C6AE extu.b Rm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C09C6B2u, 3);  /* 0C09C6B0 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C09C6B2 tst Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C09C6B6u, 2);  /* 0C09C6B4 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W8(r9, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09C76Cu, 3); goto L_0C09C76C; } UPD(0x0C09C6BAu, 1); goto L_0C09C6BA; }  /* 0C09C6B6 bt/s */
L_0C09C6BA: BLKS(0x0C09C6BAu);
	r9 = 0xC1D64E6u; UPD(0x0C09C6BCu, 1);  /* 0C09C6BA mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C09C6BC add Rm,Rn */
	r7 = 0xC0A03B0u; UPD(0x0C09C6C0u, 2);  /* 0C09C6BE mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C09C6C0 mov #imm,Rn */
	IF(0x0C09C6C2u); r13 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C09C6C4u, 2);  /* 0C09C6C2 mov.w @(r0,Rm),Rn */
	r4 = r11;  /* 0C09C6C4 mov Rm,Rn */
	W32(r8 + 0x8u, r13); UPD(0x0C09C6C8u, 2);  /* 0C09C6C6 mov.l Rm,@(disp,Rn) */
	r11 = 0x1u;  /* 0C09C6C8 mov #imm,Rn */
	IF(0x0C09C6CAu); { u32 t_ = r7; PR = 0x0C09C6CEu; W32(r8 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C09C6CEu); }  /* 0C09C6CA jsr @Rn */
L_0C09C6CE: BLKS(0x0C09C6CEu);
	r0 = 0x88u; UPD(0x0C09C6D0u, 1);  /* 0C09C6CE mov.w @(disp,pc),Rn */
	r4 = 0x75u;  /* 0C09C6D0 mov #imm,Rn */
	r1 = 0xFFFFED58u; UPD(0x0C09C6D4u, 2);  /* 0C09C6D2 mov.w @(disp,pc),Rn */
	IF(0x0C09C6D4u); { u32 tv_ = (r1 + 0x0C09C6D8u); u32 t_ = PHYS(tv_); IF(0x0C09C6D6u); W16(r0 + r8, r11); /* slot mov.w Rm,@(r0,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C6D4 braf Rn */
L_0C09C76C: BLKS(0x0C09C76Cu);
	r13 = 0xFFFFE60Cu; UPD(0x0C09C76Eu, 1);  /* 0C09C76C mov.w @(disp,pc),Rn */
	IF(0x0C09C76Eu); { u32 tv_ = (r13 + 0x0C09C772u); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C76E braf Rn */
}

void f_0C09C6E0(sh3_t *c)
{
	LOCALS;
	goto L_0C09C6E0;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09B990: BLKS(0x0C09B990u);
	r1 = 0xC7C2AF0u; UPD(0x0C09B992u, 1);  /* 0C09B990 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09B992 bra */
L_0C09BCE6: BLKS(0x0C09BCE6u);
	r1 = 0xC0A03B0u; UPD(0x0C09BCE8u, 1);  /* 0C09BCE6 mov.l @(disp,pc),Rn */
	r13 = 0xFFFFF006u; UPD(0x0C09BCEAu, 1);  /* 0C09BCE8 mov.w @(disp,pc),Rn */
	IF(0x0C09BCEAu); { u32 tv_ = (r13 + 0x0C09BCEEu); u32 t_ = PHYS(tv_); r4 = r11; /* slot mov Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09BCEA braf Rn */
L_0C09C6E0: BLKS(0x0C09C6E0u);
	r9 = 0xC0A0490u; UPD(0x0C09C6E2u, 1);  /* 0C09C6E0 mov.l @(disp,pc),Rn */
	IF(0x0C09C6E2u); { u32 t_ = r9; PR = 0x0C09C6E6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C09C6E6u); }  /* 0C09C6E2 jsr @Rn */
L_0C09C6E6: BLKS(0x0C09C6E6u);
	IF(0x0C09C6E6u); T = (s32)r0 >= 0;  /* 0C09C6E6 cmp/pz Rn */
	if (T) { UPD(0x0C09C6EEu, 4); goto L_0C09C6EE; }  /* 0C09C6E8 bt */
L_0C09C6EA: BLKS(0x0C09C6EAu);
	{ IF(0x0C09C6ECu); ; /* slot nop */ UPD(0x0C09B990u, 3); goto L_0C09B990; }  /* 0C09C6EA bra */
L_0C09C6EE: BLKS(0x0C09C6EEu);
	r7 = 0xB4u; UPD(0x0C09C6F0u, 1);  /* 0C09C6EE mov.w @(disp,pc),Rn */
	IF(0x0C09C6F0u); MACL = r0 * r7;  /* 0C09C6F0 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09C6F4u, 3);  /* 0C09C6F2 mov.l @(disp,pc),Rn */
	IF(0x0C09C6F4u); r8 = MACL;  /* 0C09C6F4 sts macl,Rn */
	r8 += r6;  /* 0C09C6F6 add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C09C6FAu, 3);  /* 0C09C6F8 mov.l @(disp,Rm),Rn */
	T = r0 == 0x20u;  /* 0C09C6FA cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C09C6FEu); MACL = r11 * r7; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09C710u, 5); goto L_0C09C710; } goto L_0C09C700; }  /* 0C09C6FC bt/s */
L_0C09C700: BLKS(0x0C09C700u);
	IF(0x0C09C700u); r1 = MACL;  /* 0C09C700 sts macl,Rn */
	r11 = 0xFFFFED60u; UPD(0x0C09C704u, 4);  /* 0C09C702 mov.w @(disp,pc),Rn */
	IF(0x0C09C704u); { u32 tv_ = (r11 + 0x0C09C708u); u32 t_ = PHYS(tv_); r1 += r6; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C704 braf Rn */
L_0C09C710: BLKS(0x0C09C710u);
	IF(0x0C09C710u); MACL = r11 * r7;  /* 0C09C710 mul.l Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C09C714u, 3);  /* 0C09C712 mov.l @(disp,Rm),Rn */
	IF(0x0C09C714u); r9 = MACL;  /* 0C09C714 sts macl,Rn */
	r9 += r6;  /* 0C09C716 add Rm,Rn */
	r0 = R32(r9 + 0x2Cu); UPD(0x0C09C71Au, 3);  /* 0C09C718 mov.l @(disp,Rm),Rn */
	r13 = r9;  /* 0C09C71A mov Rm,Rn */
	r5 += r0;  /* 0C09C71C add Rm,Rn */
	r10 = 0xAFu; UPD(0x0C09C720u, 3);  /* 0C09C71E mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C09C720 mov Rm,Rn */
	IF(0x0C09C722u); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09C724u, 2);  /* 0C09C722 mov.b @(r0,Rm),Rn */
	W32(r9 + 0x24u, r5); UPD(0x0C09C726u, 1);  /* 0C09C724 mov.l Rm,@(disp,Rn) */
	r0 = r9;  /* 0C09C726 mov Rm,Rn */
	r0 += 0x7Eu;  /* 0C09C728 add #imm,Rn */
	r2 = 0xA8u; UPD(0x0C09C72Cu, 3);  /* 0C09C72A mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C09C72Eu, 1);  /* 0C09C72C mov.w @Rm,Rn */
	r13 += r2;  /* 0C09C72E add Rm,Rn */
	IF(0x0C09C730u); MACL = r5 * r7;  /* 0C09C730 mul.l Rm,Rn */
	r2 += r8;  /* 0C09C732 add Rm,Rn */
	r2 += 0x1u;  /* 0C09C734 add #imm,Rn */
	r12 = R32(r8 + 0x28u); UPD(0x0C09C738u, 6);  /* 0C09C736 mov.l @(disp,Rm),Rn */
	IF(0x0C09C738u); r0 = MACL;  /* 0C09C738 sts macl,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C09C73Cu, 2);  /* 0C09C73A mov.b @Rm,Rn */
	r0 += r6;  /* 0C09C73C add Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C09C740u, 2);  /* 0C09C73E mov.l @(disp,Rm),Rn */
	r13 += 0x1u;  /* 0C09C740 add #imm,Rn */
	r7 = 0xA3u; UPD(0x0C09C744u, 2);  /* 0C09C742 mov.w @(disp,pc),Rn */
	r12 += r1;  /* 0C09C744 add Rm,Rn */
	r3 += r4;  /* 0C09C746 add Rm,Rn */
	IF(0x0C09C748u); r0 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09C74Au, 3);  /* 0C09C748 mov.b @(r0,Rm),Rn */
	W32(r9 + 0x28u, r12); UPD(0x0C09C74Cu, 1);  /* 0C09C74A mov.l Rm,@(disp,Rn) */
	T = r0 == 0x1u;  /* 0C09C74C cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r13, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09C7D0u, 4); goto L_0C09C7D0; } UPD(0x0C09C752u, 1); goto L_0C09C752; }  /* 0C09C74E bt/s */
L_0C09C752: BLKS(0x0C09C752u);
	r10 = 0xB4u; UPD(0x0C09C754u, 1);  /* 0C09C752 mov.w @(disp,pc),Rn */
	IF(0x0C09C754u); MACL = r11 * r10;  /* 0C09C754 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C09C758u, 3);  /* 0C09C756 mov.l @(disp,pc),Rn */
	IF(0x0C09C758u); r2 = MACL;  /* 0C09C758 sts macl,Rn */
	r12 = 0x98u; UPD(0x0C09C75Cu, 2);  /* 0C09C75A mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C09C75C add Rm,Rn */
	r12 += r2;  /* 0C09C75E add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C09C762u, 3);  /* 0C09C760 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09C762 add #imm,Rn */
	W8(r12, r0); UPD(0x0C09C766u, 2);  /* 0C09C764 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09C766 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09C768 tst Rm,Rn */
	if (T) { UPD(0x0C09C774u, 5); goto L_0C09C774; }  /* 0C09C76A bt */
L_0C09C76C: BLKS(0x0C09C76Cu);
	r13 = 0xFFFFE60Cu; UPD(0x0C09C76Eu, 1);  /* 0C09C76C mov.w @(disp,pc),Rn */
	IF(0x0C09C76Eu); { u32 tv_ = (r13 + 0x0C09C772u); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C76E braf Rn */
L_0C09C774: BLKS(0x0C09C774u);
	r0 = R32(r2 + 0xCu); UPD(0x0C09C776u, 1);  /* 0C09C774 mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C09C776 cmp/eq #imm,r0 */
	{ u32 c_ = T; r12 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09C7A0u, 4); goto L_0C09C7A0; } goto L_0C09C77C; }  /* 0C09C778 bt/s */
L_0C09C77C: BLKS(0x0C09C77Cu);
	T = (s32)r0 > (s32)r12;  /* 0C09C77C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09C790u, 5); goto L_0C09C790; }  /* 0C09C77E bf */
L_0C09C780: BLKS(0x0C09C780u);
	r0 += 0xFFFFFFFFu;  /* 0C09C780 add #imm,Rn */
	UPD(0x0C09C782u, 1);
L_0C09C782: BLKS(0x0C09C782u);
	r1 = 0xFFFFE620u; UPD(0x0C09C784u, 1);  /* 0C09C782 mov.w @(disp,pc),Rn */
	IF(0x0C09C784u); { u32 tv_ = (r1 + 0x0C09C788u); u32 t_ = PHYS(tv_); W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C784 braf Rn */
L_0C09C790: BLKS(0x0C09C790u);
	{ r0 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09C782u, 3); goto L_0C09C782; }  /* 0C09C790 bra */
L_0C09C7A0: BLKS(0x0C09C7A0u);
	r13 = R32(r2 + 0x8u); UPD(0x0C09C7A2u, 1);  /* 0C09C7A0 mov.l @(disp,Rm),Rn */
	r6 = 0xFFFFFFFFu;  /* 0C09C7A2 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09C7A6u, 2);  /* 0C09C7A4 mov.w @(disp,pc),Rn */
	r13 += 0xFFFFFFFFu;  /* 0C09C7A6 add #imm,Rn */
	IF(0x0C09C7A8u); W16(r0 + r2, r6); UPD(0x0C09C7AAu, 2);  /* 0C09C7A8 mov.w Rm,@(r0,Rn) */
	r1 = 0xEu;  /* 0C09C7AA mov #imm,Rn */
	W32(r2 + 0x8u, r13); UPD(0x0C09C7AEu, 2);  /* 0C09C7AC mov.l Rm,@(disp,Rn) */
	{ W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09BCE6u, 3); goto L_0C09BCE6; }  /* 0C09C7AE bra */
L_0C09C7D0: BLKS(0x0C09C7D0u);
	r12 = 0xC058130u; UPD(0x0C09C7D2u, 1);  /* 0C09C7D0 mov.l @(disp,pc),Rn */
	r10 = 0xC057430u; UPD(0x0C09C7D4u, 1);  /* 0C09C7D2 mov.l @(disp,pc),Rn */
	IF(0x0C09C7D4u); { u32 t_ = r12; PR = 0x0C09C7D8u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C09C7D8u); }  /* 0C09C7D4 jsr @Rn */
L_0C09C7D8: BLKS(0x0C09C7D8u);
	r4 = r11;  /* 0C09C7D8 mov Rm,Rn */
	IF(0x0C09C7DAu); { u32 t_ = r10; PR = 0x0C09C7DEu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C09C7DEu); }  /* 0C09C7DA jsr @Rn */
L_0C09C7DE: BLKS(0x0C09C7DEu);
	r10 = 0x86u; UPD(0x0C09C7E0u, 1);  /* 0C09C7DE mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C09C7E0 mov Rm,Rn */
	r10 += r9;  /* 0C09C7E2 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C09C7E6u, 3);  /* 0C09C7E4 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C09C7E6 add #imm,Rn */
	IF(0x0C09C7E8u); r0 >>= 2;  /* 0C09C7E8 shlr2 Rn */
	r13 = 0xC0A0380u; UPD(0x0C09C7ECu, 3);  /* 0C09C7EA mov.l @(disp,pc),Rn */
	IF(0x0C09C7ECu); r0 >>= 2;  /* 0C09C7EC shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C09C7EE and #imm,r0 */
	IF(0x0C09C7F0u); { u32 t_ = r13; PR = 0x0C09C7F4u; W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09C7F4u); }  /* 0C09C7F0 jsr @Rn */
L_0C09C7F4: BLKS(0x0C09C7F4u);
	r7 = 0xA7u; UPD(0x0C09C7F6u, 1);  /* 0C09C7F4 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09C7F6 mov Rm,Rn */
	IF(0x0C09C7F8u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09C7FAu, 2);  /* 0C09C7F8 mov.b @(r0,Rm),Rn */
	r4 = r11;  /* 0C09C7FA mov Rm,Rn */
	r8 = 0xC1D6500u; UPD(0x0C09C7FEu, 2);  /* 0C09C7FC mov.l @(disp,pc),Rn */
	r11 = 0xC0A9E40u; UPD(0x0C09C800u, 1);  /* 0C09C7FE mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C09C800 mov Rm,Rn */
	IF(0x0C09C802u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09C804u, 2);  /* 0C09C802 mov.b @(r0,Rm),Rn */
	IF(0x0C09C804u); { u32 t_ = r11; PR = 0x0C09C808u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09C808u); }  /* 0C09C804 jsr @Rn */
L_0C09C808: BLKS(0x0C09C808u);
	T = (r0 & r0) == 0;  /* 0C09C808 tst Rm,Rn */
	if (T) { UPD(0x0C09C88Cu, 4); goto L_0C09C88C; }  /* 0C09C80A bt */
L_0C09C80C: BLKS(0x0C09C80Cu);
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C09C80Eu, 1);  /* 0C09C80C mov.w @Rm,Rn */
	r13 = 0x0u;  /* 0C09C80E mov #imm,Rn */
	r12 = 0x100000u; UPD(0x0C09C812u, 2);  /* 0C09C810 mov.l @(disp,pc),Rn */
	r11 = r9;  /* 0C09C812 mov Rm,Rn */
	W32(r14 + 0x4u, r3); UPD(0x0C09C816u, 2);  /* 0C09C814 mov.l Rm,@(disp,Rn) */
L_0C09C816: BLKS(0x0C09C816u);
	r10 = r13;  /* 0C09C816 mov Rm,Rn */
	r4 = 0xC1D6508u; UPD(0x0C09C81Au, 2);  /* 0C09C818 mov.l @(disp,pc),Rn */
	IF(0x0C09C81Au); r10 <<= 2;  /* 0C09C81A shll2 Rn */
	r0 = r10;  /* 0C09C81C mov Rm,Rn */
	r2 = 0xC058060u; UPD(0x0C09C820u, 3);  /* 0C09C81E mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C09C820 mov Rm,Rn */
	IF(0x0C09C822u); r9 = R32(r0 + r4); UPD(0x0C09C824u, 2);  /* 0C09C822 mov.l @(r0,Rm),Rn */
	IF(0x0C09C824u); { u32 t_ = r2; PR = 0x0C09C828u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09C828u); }  /* 0C09C824 jsr @Rn */
L_0C09C828: BLKS(0x0C09C828u);
	r1 = 0xC058030u; UPD(0x0C09C82Au, 1);  /* 0C09C828 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C09C82A mov Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C09C82Eu, 2);  /* 0C09C82C mov.l @(disp,Rm),Rn */
	IF(0x0C09C82Eu); { u32 t_ = r1; PR = 0x0C09C832u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09C832u); }  /* 0C09C82E jsr @Rn */
L_0C09C832: BLKS(0x0C09C832u);
	r8 -= r0;  /* 0C09C832 sub Rm,Rn */
	r1 = r8;  /* 0C09C834 mov Rm,Rn */
	r1 += r1;  /* 0C09C836 add Rm,Rn */
	r1 += r8;  /* 0C09C838 add Rm,Rn */
	IF(0x0C09C83Au); T = (s32)r1 >= 0;  /* 0C09C83A cmp/pz Rn */
	if (!T) { UPD(0x0C09C8A0u, 8); goto L_0C09C8A0; }  /* 0C09C83C bf */
L_0C09C83E: BLKS(0x0C09C83Eu);
	IF(0x0C09C83Eu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C09C83E shar Rn */
	r0 = R32(r11 + 0x24u); UPD(0x0C09C842u, 2);  /* 0C09C840 mov.l @(disp,Rm),Rn */
	IF(0x0C09C842u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C09C842 shar Rn */
	r7 = 0xC058030u; UPD(0x0C09C846u, 2);  /* 0C09C844 mov.l @(disp,pc),Rn */
	r0 += r1;  /* 0C09C846 add Rm,Rn */
	r4 = 0x10000u; UPD(0x0C09C84Au, 2);  /* 0C09C848 mov.l @(disp,pc),Rn */
	r0 += r4;  /* 0C09C84A add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C09C84Eu, 2);  /* 0C09C84C mov.l @(disp,Rm),Rn */
	r5 = 0x100000u; UPD(0x0C09C850u, 1);  /* 0C09C84E mov.l @(disp,pc),Rn */
	IF(0x0C09C850u); { u32 t_ = r7; PR = 0x0C09C854u; W32(r14 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09C854u); }  /* 0C09C850 jsr @Rn */
L_0C09C854: BLKS(0x0C09C854u);
	r1 = 0xC058060u; UPD(0x0C09C856u, 1);  /* 0C09C854 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C09C856 mov Rm,Rn */
	r8 = R32(r11 + 0x28u); UPD(0x0C09C85Au, 2);  /* 0C09C858 mov.l @(disp,Rm),Rn */
	r9 = 0x7u;  /* 0C09C85A mov #imm,Rn */
	r8 += r0;  /* 0C09C85C add Rm,Rn */
	IF(0x0C09C85Eu); { u32 t_ = r1; PR = 0x0C09C862u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09C862u); }  /* 0C09C85E jsr @Rn */
L_0C09C862: BLKS(0x0C09C862u);
	r8 += r0;  /* 0C09C862 add Rm,Rn */
	r0 = r10;  /* 0C09C864 mov Rm,Rn */
	r2 = 0xC1D6528u; UPD(0x0C09C868u, 3);  /* 0C09C866 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09C868 add #imm,Rn */
	r10 = 0xC1D6548u; UPD(0x0C09C86Cu, 2);  /* 0C09C86A mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C09C86C mov #imm,Rn */
	IF(0x0C09C86Eu); r7 = R32(r0 + r2); UPD(0x0C09C870u, 2);  /* 0C09C86E mov.l @(r0,Rm),Rn */
	r3 = R32(r14 + 0x4u); UPD(0x0C09C872u, 1);  /* 0C09C870 mov.l @(disp,Rm),Rn */
	IF(0x0C09C872u); r6 = R32(r0 + r10); UPD(0x0C09C874u, 1);  /* 0C09C872 mov.l @(r0,Rm),Rn */
	r7 += r3;  /* 0C09C874 add Rm,Rn */
	W32(r15, r6); UPD(0x0C09C878u, 2);  /* 0C09C876 mov.l Rm,@Rn */
	r6 = r8;  /* 0C09C878 mov Rm,Rn */
	r8 = 0xC061D80u; UPD(0x0C09C87Cu, 2);  /* 0C09C87A mov.l @(disp,pc),Rn */
	IF(0x0C09C87Cu); { u32 t_ = r8; PR = 0x0C09C880u; r5 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C061D80, 0x0C061D80u, 0x0C09C880u); }  /* 0C09C87C jsr @Rn */
L_0C09C880: BLKS(0x0C09C880u);
	r5 = r13;  /* 0C09C880 mov Rm,Rn */
	r5 += 0x1u;  /* 0C09C882 add #imm,Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C09C884 exts.w Rm,Rn */
	T = (s32)r13 > (s32)r9;  /* 0C09C886 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09C816u, 7); goto L_0C09C816; } UPD(0x0C09C88Cu, 1); goto L_0C09C88C; }  /* 0C09C888 bf/s */
L_0C09C88C: BLKS(0x0C09C88Cu);
	r13 = 0xFFFFE4ECu; UPD(0x0C09C88Eu, 1);  /* 0C09C88C mov.w @(disp,pc),Rn */
	IF(0x0C09C88Eu); { u32 tv_ = (r13 + 0x0C09C892u); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C88E braf Rn */
L_0C09C8A0: BLKS(0x0C09C8A0u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C09C83Eu, 3); goto L_0C09C83E; }  /* 0C09C8A0 bra */
}

void f_0C09C8B0(sh3_t *c)
{
	LOCALS;
	goto L_0C09C8B0;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09B990: BLKS(0x0C09B990u);
	r1 = 0xC7C2AF0u; UPD(0x0C09B992u, 1);  /* 0C09B990 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09B992 bra */
L_0C09BCE6: BLKS(0x0C09BCE6u);
	r1 = 0xC0A03B0u; UPD(0x0C09BCE8u, 1);  /* 0C09BCE6 mov.l @(disp,pc),Rn */
	r13 = 0xFFFFF006u; UPD(0x0C09BCEAu, 1);  /* 0C09BCE8 mov.w @(disp,pc),Rn */
	IF(0x0C09BCEAu); { u32 tv_ = (r13 + 0x0C09BCEEu); u32 t_ = PHYS(tv_); r4 = r11; /* slot mov Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09BCEA braf Rn */
L_0C09C7A4: BLKS(0x0C09C7A4u);
	r0 = 0x88u; UPD(0x0C09C7A6u, 1);  /* 0C09C7A4 mov.w @(disp,pc),Rn */
	r13 += 0xFFFFFFFFu;  /* 0C09C7A6 add #imm,Rn */
	IF(0x0C09C7A8u); W16(r0 + r2, r6); UPD(0x0C09C7AAu, 2);  /* 0C09C7A8 mov.w Rm,@(r0,Rn) */
	r1 = 0xEu;  /* 0C09C7AA mov #imm,Rn */
	W32(r2 + 0x8u, r13); UPD(0x0C09C7AEu, 2);  /* 0C09C7AC mov.l Rm,@(disp,Rn) */
	{ W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09BCE6u, 3); goto L_0C09BCE6; }  /* 0C09C7AE bra */
L_0C09C88C: BLKS(0x0C09C88Cu);
	r13 = 0xFFFFE4ECu; UPD(0x0C09C88Eu, 1);  /* 0C09C88C mov.w @(disp,pc),Rn */
	IF(0x0C09C88Eu); { u32 tv_ = (r13 + 0x0C09C892u); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C88E braf Rn */
L_0C09C8B0: BLKS(0x0C09C8B0u);
	r13 = 0xC0A0490u; UPD(0x0C09C8B2u, 1);  /* 0C09C8B0 mov.l @(disp,pc),Rn */
	IF(0x0C09C8B2u); { u32 t_ = r13; PR = 0x0C09C8B6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C09C8B6u); }  /* 0C09C8B2 jsr @Rn */
L_0C09C8B6: BLKS(0x0C09C8B6u);
	IF(0x0C09C8B6u); T = (s32)r0 >= 0;  /* 0C09C8B6 cmp/pz Rn */
	if (T) { UPD(0x0C09C8BEu, 4); goto L_0C09C8BE; }  /* 0C09C8B8 bt */
L_0C09C8BA: BLKS(0x0C09C8BAu);
	{ IF(0x0C09C8BCu); ; /* slot nop */ UPD(0x0C09B990u, 3); goto L_0C09B990; }  /* 0C09C8BA bra */
L_0C09C8BE: BLKS(0x0C09C8BEu);
	r6 = 0xB4u; UPD(0x0C09C8C0u, 1);  /* 0C09C8BE mov.w @(disp,pc),Rn */
	IF(0x0C09C8C0u); MACL = r0 * r6;  /* 0C09C8C0 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C09C8C4u, 3);  /* 0C09C8C2 mov.l @(disp,pc),Rn */
	IF(0x0C09C8C4u); r7 = MACL;  /* 0C09C8C4 sts macl,Rn */
	r7 += r5;  /* 0C09C8C6 add Rm,Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C09C8CAu, 3);  /* 0C09C8C8 mov.l @(disp,Rm),Rn */
	T = r0 == 0x20u;  /* 0C09C8CA cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C09C8CEu); MACL = r11 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09C8E0u, 5); goto L_0C09C8E0; } goto L_0C09C8D0; }  /* 0C09C8CC bt/s */
L_0C09C8D0: BLKS(0x0C09C8D0u);
	IF(0x0C09C8D0u); r1 = MACL;  /* 0C09C8D0 sts macl,Rn */
	r11 = 0xFFFFEB90u; UPD(0x0C09C8D4u, 4);  /* 0C09C8D2 mov.w @(disp,pc),Rn */
	IF(0x0C09C8D4u); { u32 tv_ = (r11 + 0x0C09C8D8u); u32 t_ = PHYS(tv_); r1 += r5; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C8D4 braf Rn */
L_0C09C8E0: BLKS(0x0C09C8E0u);
	IF(0x0C09C8E0u); MACL = r11 * r6;  /* 0C09C8E0 mul.l Rm,Rn */
	r9 = R32(r7 + 0x24u); UPD(0x0C09C8E4u, 3);  /* 0C09C8E2 mov.l @(disp,Rm),Rn */
	IF(0x0C09C8E4u); r8 = MACL;  /* 0C09C8E4 sts macl,Rn */
	r8 += r5;  /* 0C09C8E6 add Rm,Rn */
	r0 = R32(r7 + 0x28u); UPD(0x0C09C8EAu, 3);  /* 0C09C8E8 mov.l @(disp,Rm),Rn */
	r3 = r8;  /* 0C09C8EA mov Rm,Rn */
	r2 = 0xA8u; UPD(0x0C09C8EEu, 2);  /* 0C09C8EC mov.w @(disp,pc),Rn */
	r3 += 0x7Eu;  /* 0C09C8EE add #imm,Rn */
	r10 = R32(r8 + 0x2Cu); UPD(0x0C09C8F2u, 2);  /* 0C09C8F0 mov.l @(disp,Rm),Rn */
	r7 += r2;  /* 0C09C8F2 add Rm,Rn */
	r9 += r10;  /* 0C09C8F4 add Rm,Rn */
	r12 = R32(r8 + 0x30u); UPD(0x0C09C8F8u, 3);  /* 0C09C8F6 mov.l @(disp,Rm),Rn */
	r7 += 0x1u;  /* 0C09C8F8 add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r3); UPD(0x0C09C8FCu, 2);  /* 0C09C8FA mov.w @Rm,Rn */
	r0 += r12;  /* 0C09C8FC add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r7); UPD(0x0C09C900u, 2);  /* 0C09C8FE mov.b @Rm,Rn */
	IF(0x0C09C900u); MACL = r10 * r6;  /* 0C09C900 mul.l Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C09C904u, 3);  /* 0C09C902 mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C09C904 mov Rm,Rn */
	r7 = 0xAFu; UPD(0x0C09C908u, 2);  /* 0C09C906 mov.w @(disp,pc),Rn */
	r4 += r2;  /* 0C09C908 add Rm,Rn */
	r0 = r8;  /* 0C09C90A mov Rm,Rn */
	W32(r8 + 0x24u, r9); UPD(0x0C09C90Eu, 3);  /* 0C09C90C mov.l Rm,@(disp,Rn) */
	IF(0x0C09C90Eu); r2 = MACL;  /* 0C09C90E sts macl,Rn */
	IF(0x0C09C910u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09C912u, 2);  /* 0C09C910 mov.b @(r0,Rm),Rn */
	r2 += r5;  /* 0C09C912 add Rm,Rn */
	r9 = 0xA3u; UPD(0x0C09C916u, 2);  /* 0C09C914 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C09C916 mov Rm,Rn */
	IF(0x0C09C918u); r12 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09C91Au, 2);  /* 0C09C918 mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C09C91A add #imm,Rn */
	r13 += r1;  /* 0C09C91C add Rm,Rn */
	r0 = r12;  /* 0C09C91E mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C09C920 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r4, r13); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09C9A0u, 7); goto L_0C09C9A0; } UPD(0x0C09C926u, 1); goto L_0C09C926; }  /* 0C09C922 bt/s */
L_0C09C926: BLKS(0x0C09C926u);
	r10 = 0xB4u; UPD(0x0C09C928u, 1);  /* 0C09C926 mov.w @(disp,pc),Rn */
	IF(0x0C09C928u); MACL = r11 * r10;  /* 0C09C928 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C09C92Cu, 3);  /* 0C09C92A mov.l @(disp,pc),Rn */
	IF(0x0C09C92Cu); r2 = MACL;  /* 0C09C92C sts macl,Rn */
	r8 = 0x98u; UPD(0x0C09C930u, 2);  /* 0C09C92E mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C09C930 add Rm,Rn */
	r8 += r2;  /* 0C09C932 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C09C936u, 3);  /* 0C09C934 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09C936 add #imm,Rn */
	W8(r8, r0); UPD(0x0C09C93Au, 2);  /* 0C09C938 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09C93A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09C93C tst Rm,Rn */
	if (!T) { UPD(0x0C09C88Cu, 5); goto L_0C09C88C; }  /* 0C09C93E bf */
L_0C09C940: BLKS(0x0C09C940u);
	r1 = R32(r2 + 0xCu); UPD(0x0C09C942u, 1);  /* 0C09C940 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C09C942 tst Rm,Rn */
	if (!T) { UPD(0x0C09C94Cu, 4); goto L_0C09C94C; }  /* 0C09C944 bf */
L_0C09C946: BLKS(0x0C09C946u);
	r13 = R32(r2 + 0x8u); UPD(0x0C09C948u, 1);  /* 0C09C946 mov.l @(disp,Rm),Rn */
	{ r6 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ UPD(0x0C09C7A4u, 3); goto L_0C09C7A4; }  /* 0C09C948 bra */
L_0C09C94C: BLKS(0x0C09C94Cu);
	r1 += 0xFFFFFFFFu;  /* 0C09C94C add #imm,Rn */
	r4 = 0xFFFFE454u; UPD(0x0C09C950u, 2);  /* 0C09C94E mov.w @(disp,pc),Rn */
	IF(0x0C09C950u); { u32 tv_ = (r4 + 0x0C09C954u); u32 t_ = PHYS(tv_); W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C950 braf Rn */
L_0C09C9A0: BLKS(0x0C09C9A0u);
	r3 = 0xA7u; UPD(0x0C09C9A2u, 1);  /* 0C09C9A0 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C09C9A2 mov Rm,Rn */
	IF(0x0C09C9A4u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09C9A6u, 2);  /* 0C09C9A4 mov.b @(r0,Rm),Rn */
	r4 = r11;  /* 0C09C9A6 mov Rm,Rn */
	r5 = 0xC1D6568u; UPD(0x0C09C9AAu, 2);  /* 0C09C9A8 mov.l @(disp,pc),Rn */
	r13 = 0xC0A9E40u; UPD(0x0C09C9ACu, 1);  /* 0C09C9AA mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C09C9AC mov Rm,Rn */
	IF(0x0C09C9AEu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09C9B0u, 2);  /* 0C09C9AE mov.b @(r0,Rm),Rn */
	IF(0x0C09C9B0u); { u32 t_ = r13; PR = 0x0C09C9B4u; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09C9B4u); }  /* 0C09C9B0 jsr @Rn */
L_0C09C9B4: BLKS(0x0C09C9B4u);
	T = (r0 & r0) == 0;  /* 0C09C9B4 tst Rm,Rn */
	if (T) { UPD(0x0C09CA16u, 4); goto L_0C09CA16; }  /* 0C09C9B6 bt */
L_0C09C9B8: BLKS(0x0C09C9B8u);
	r0 = R32(r8 + 0xCu); UPD(0x0C09C9BAu, 1);  /* 0C09C9B8 mov.l @(disp,Rm),Rn */
	r7 = 0xC1D6570u; UPD(0x0C09C9BCu, 1);  /* 0C09C9BA mov.l @(disp,pc),Rn */
	IF(0x0C09C9BCu); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09C9BEu, 1);  /* 0C09C9BC mov.b @(r0,Rm),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C09C9C0u, 1);  /* 0C09C9BE mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C09C9C0 mov Rm,Rn */
	r11 = 0xC0A0380u; UPD(0x0C09C9C4u, 2);  /* 0C09C9C2 mov.l @(disp,pc),Rn */
	r9 = 0xC058060u; UPD(0x0C09C9C6u, 1);  /* 0C09C9C4 mov.l @(disp,pc),Rn */
	IF(0x0C09C9C6u); { u32 t_ = r11; PR = 0x0C09C9CAu; r13 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09C9CAu); }  /* 0C09C9C6 jsr @Rn */
L_0C09C9CA: BLKS(0x0C09C9CAu);
	r10 = 0xC7C17D0u; UPD(0x0C09C9CCu, 1);  /* 0C09C9CA mov.l @(disp,pc),Rn */
L_0C09C9CC: BLKS(0x0C09C9CCu);
	r0 = R32(r8 + 0xCu); UPD(0x0C09C9CEu, 1);  /* 0C09C9CC mov.l @(disp,Rm),Rn */
	r7 = 0x11u;  /* 0C09C9CE mov #imm,Rn */
	IF(0x0C09C9D0u); MACL = r0 * r7;  /* 0C09C9D0 mul.l Rm,Rn */
	r4 = 0xC1D657Cu; UPD(0x0C09C9D4u, 4);  /* 0C09C9D2 mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C09C9D4 mov Rm,Rn */
	r0 += r0;  /* 0C09C9D6 add Rm,Rn */
	IF(0x0C09C9D8u); r3 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C09C9DAu, 3);  /* 0C09C9D8 mov.w @(r0,Rm),Rn */
	IF(0x0C09C9DAu); r5 = MACL;  /* 0C09C9DA sts macl,Rn */
	r5 += r3;  /* 0C09C9DC add Rm,Rn */
	r1 = (u32)(s32)(s16)r5;  /* 0C09C9DE exts.w Rm,Rn */
	r4 = r1;  /* 0C09C9E0 mov Rm,Rn */
	r5 = 0x140000u; UPD(0x0C09C9E4u, 5);  /* 0C09C9E2 mov.l @(disp,pc),Rn */
	IF(0x0C09C9E4u); { u32 t_ = r9; PR = 0x0C09C9E8u; W32(r14 + 0x4u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLD(t_, 0x0C09C9E8u); }  /* 0C09C9E4 jsr @Rn */
L_0C09C9E8: BLKS(0x0C09C9E8u);
	r6 = R32(r8 + 0x24u); UPD(0x0C09C9EAu, 1);  /* 0C09C9E8 mov.l @(disp,Rm),Rn */
	r11 = 0xC058030u; UPD(0x0C09C9ECu, 1);  /* 0C09C9EA mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09C9EC add Rm,Rn */
	W32(r14 + 0x8u, r6); UPD(0x0C09C9F0u, 2);  /* 0C09C9EE mov.l Rm,@(disp,Rn) */
	r5 = 0x100000u; UPD(0x0C09C9F2u, 1);  /* 0C09C9F0 mov.l @(disp,pc),Rn */
	IF(0x0C09C9F2u); { u32 t_ = r11; PR = 0x0C09C9F6u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09C9F6u); }  /* 0C09C9F2 jsr @Rn */
L_0C09C9F6: BLKS(0x0C09C9F6u);
	r6 = R32(r8 + 0x28u); UPD(0x0C09C9F8u, 1);  /* 0C09C9F6 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09C9F8 add #imm,Rn */
	r12 = 0x28000u; UPD(0x0C09C9FCu, 2);  /* 0C09C9FA mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09C9FC add Rm,Rn */
	W32(r15, r12); UPD(0x0C09CA00u, 2);  /* 0C09C9FE mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C09CA00 mov #imm,Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C09CA04u, 2);  /* 0C09CA02 mov.l @(disp,Rm),Rn */
	IF(0x0C09CA04u); { u32 t_ = r10; PR = 0x0C09CA08u; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C09CA08u); }  /* 0C09CA04 jsr @Rn */
L_0C09CA08: BLKS(0x0C09CA08u);
	r0 = r13;  /* 0C09CA08 mov Rm,Rn */
	r0 += 0x1u;  /* 0C09CA0A add #imm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C09CA0C exts.w Rm,Rn */
	r2 = 0x2u;  /* 0C09CA0E mov #imm,Rn */
	T = (s32)r13 > (s32)r2;  /* 0C09CA10 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09C9CCu, 8); goto L_0C09C9CC; } UPD(0x0C09CA16u, 1); goto L_0C09CA16; }  /* 0C09CA12 bf/s */
L_0C09CA16: BLKS(0x0C09CA16u);
	r13 = 0xFFFFE362u; UPD(0x0C09CA18u, 1);  /* 0C09CA16 mov.w @(disp,pc),Rn */
	IF(0x0C09CA18u); { u32 tv_ = (r13 + 0x0C09CA1Cu); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CA18 braf Rn */
}

void f_0C09CA20(sh3_t *c)
{
	LOCALS;
	goto L_0C09CA20;
L_0C09C646: BLKS(0x0C09C646u);
	r11 = 0xFFFFEE1Cu; UPD(0x0C09C648u, 1);  /* 0C09C646 mov.w @(disp,pc),Rn */
	IF(0x0C09C648u); { u32 tv_ = (r11 + 0x0C09C64Cu); u32 t_ = PHYS(tv_); r1 += r2; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C648 braf Rn */
L_0C09CA16: BLKS(0x0C09CA16u);
	r13 = 0xFFFFE362u; UPD(0x0C09CA18u, 1);  /* 0C09CA16 mov.w @(disp,pc),Rn */
	IF(0x0C09CA18u); { u32 tv_ = (r13 + 0x0C09CA1Cu); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CA18 braf Rn */
L_0C09CA20: BLKS(0x0C09CA20u);
	r8 = 0xC0A0490u; UPD(0x0C09CA22u, 1);  /* 0C09CA20 mov.l @(disp,pc),Rn */
	IF(0x0C09CA22u); { u32 t_ = r8; PR = 0x0C09CA26u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C09CA26u); }  /* 0C09CA22 jsr @Rn */
L_0C09CA26: BLKS(0x0C09CA26u);
	IF(0x0C09CA26u); T = (s32)r0 >= 0;  /* 0C09CA26 cmp/pz Rn */
	{ u32 c_ = T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09CA34u, 4); goto L_0C09CA34; } goto L_0C09CA2C; }  /* 0C09CA28 bt/s */
L_0C09CA2C: BLKS(0x0C09CA2Cu);
	r1 = 0xFFFFEF5Eu; UPD(0x0C09CA2Eu, 2);  /* 0C09CA2C mov.w @(disp,pc),Rn */
	IF(0x0C09CA2Eu); { u32 tv_ = (r1 + 0x0C09CA32u); u32 t_ = PHYS(tv_); IF(0x0C09CA30u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CA2E braf Rn */
L_0C09CA34: BLKS(0x0C09CA34u);
	r1 = 0xB4u; UPD(0x0C09CA36u, 1);  /* 0C09CA34 mov.w @(disp,pc),Rn */
	IF(0x0C09CA36u); MACL = r0 * r1;  /* 0C09CA36 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09CA3Au, 3);  /* 0C09CA38 mov.l @(disp,pc),Rn */
	IF(0x0C09CA3Au); r7 = MACL;  /* 0C09CA3A sts macl,Rn */
	r7 += r2;  /* 0C09CA3C add Rm,Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C09CA40u, 3);  /* 0C09CA3E mov.l @(disp,Rm),Rn */
	T = r0 == 0x20u;  /* 0C09CA40 cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C09CA44u); MACL = r11 * r1; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09CA4Au, 5); goto L_0C09CA4A; } goto L_0C09CA46; }  /* 0C09CA42 bt/s */
L_0C09CA46: BLKS(0x0C09CA46u);
	{ IF(0x0C09CA48u); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C09C646u, 5); goto L_0C09C646; }  /* 0C09CA46 bra */
L_0C09CA4A: BLKS(0x0C09CA4Au);
	IF(0x0C09CA4Au); MACL = r11 * r1;  /* 0C09CA4A mul.l Rm,Rn */
	r8 = R32(r7 + 0x24u); UPD(0x0C09CA4Eu, 3);  /* 0C09CA4C mov.l @(disp,Rm),Rn */
	r10 = R32(r7 + 0x28u); UPD(0x0C09CA50u, 1);  /* 0C09CA4E mov.l @(disp,Rm),Rn */
	IF(0x0C09CA50u); r0 = MACL;  /* 0C09CA50 sts macl,Rn */
	r6 = 0xA8u; UPD(0x0C09CA54u, 2);  /* 0C09CA52 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C09CA54 add Rm,Rn */
	r7 += r6;  /* 0C09CA56 add Rm,Rn */
	r1 = 0xAFu; UPD(0x0C09CA5Au, 3);  /* 0C09CA58 mov.w @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C09CA5A add #imm,Rn */
	r12 = R32(r0 + 0x2Cu); UPD(0x0C09CA5Eu, 2);  /* 0C09CA5C mov.l @(disp,Rm),Rn */
	r5 = r0;  /* 0C09CA5E mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C09CA62u, 2);  /* 0C09CA60 mov.b @Rm,Rn */
	r5 += r6;  /* 0C09CA62 add Rm,Rn */
	r9 = R32(r0 + 0x30u); UPD(0x0C09CA66u, 2);  /* 0C09CA64 mov.l @(disp,Rm),Rn */
	r8 += r12;  /* 0C09CA66 add Rm,Rn */
	IF(0x0C09CA68u); r4 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C09CA6Au, 2);  /* 0C09CA68 mov.b @(r0,Rm),Rn */
	r10 += r9;  /* 0C09CA6A add Rm,Rn */
	r5 += 0x1u;  /* 0C09CA6C add #imm,Rn */
	r3 += r4;  /* 0C09CA6E add Rm,Rn */
	r2 = R32(r0 + 0xCu); UPD(0x0C09CA72u, 4);  /* 0C09CA70 mov.l @(disp,Rm),Rn */
	r12 = 0xEu;  /* 0C09CA72 mov #imm,Rn */
	W32(r0 + 0x24u, r8); UPD(0x0C09CA76u, 2);  /* 0C09CA74 mov.l Rm,@(disp,Rn) */
	T = r2 > r12;  /* 0C09CA76 cmp/hi Rm,Rn */
	W32(r0 + 0x28u, r10); UPD(0x0C09CA7Au, 2);  /* 0C09CA78 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W8(r5, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09CA16u, 3); goto L_0C09CA16; } UPD(0x0C09CA7Eu, 1); goto L_0C09CA7E; }  /* 0C09CA7A bt/s */
L_0C09CA7E: BLKS(0x0C09CA7Eu);
	r0 = 0xC09CAC4u;  /* 0C09CA7E mova @(disp,pc),r0 */
	IF(0x0C09CA80u); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09CA82u, 2);  /* 0C09CA80 mov.b @(r0,Rm),Rn */
	r7 = r7 & 0xFF;  /* 0C09CA82 extu.b Rm,Rn */
	IF(0x0C09CA84u); { u32 tv_ = (r7 + 0x0C09CA88u); u32 t_ = PHYS(tv_); IF(0x0C09CA86u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CA84 braf Rn */
}

void f_0C09CAE0(sh3_t *c)
{
	LOCALS;
L_0C09CAE0: BLKS(0x0C09CAE0u);
	r10 = 0xB4u; UPD(0x0C09CAE2u, 1);  /* 0C09CAE0 mov.w @(disp,pc),Rn */
	IF(0x0C09CAE2u); MACL = r11 * r10;  /* 0C09CAE2 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C09CAE6u, 3);  /* 0C09CAE4 mov.l @(disp,pc),Rn */
	IF(0x0C09CAE6u); r2 = MACL;  /* 0C09CAE6 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C09CAEAu, 2);  /* 0C09CAE8 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C09CAEA add Rm,Rn */
	IF(0x0C09CAECu); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09CAEEu, 2);  /* 0C09CAEC mov.w @(r0,Rm),Rn */
	IF(0x0C09CAEEu); T = (s32)r5 >= 0;  /* 0C09CAEE cmp/pz Rn */
	{ u32 c_ = !T; r1 = 0x2Au; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09CB20u, 4); goto L_0C09CB20; } goto L_0C09CAF4; }  /* 0C09CAF0 bf/s */
L_0C09CAF4: BLKS(0x0C09CAF4u);
	r9 = 0xB4u; UPD(0x0C09CAF6u, 2);  /* 0C09CAF4 mov.w @(disp,pc),Rn */
	IF(0x0C09CAF6u); MACL = r11 * r9;  /* 0C09CAF6 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C09CAFAu, 3);  /* 0C09CAF8 mov.l @(disp,pc),Rn */
	IF(0x0C09CAFAu); r3 = MACL;  /* 0C09CAFA sts macl,Rn */
	r2 = 0x98u; UPD(0x0C09CAFEu, 2);  /* 0C09CAFC mov.w @(disp,pc),Rn */
	r3 += r10;  /* 0C09CAFE add Rm,Rn */
	r2 += r3;  /* 0C09CB00 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C09CB04u, 3);  /* 0C09CB02 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09CB04 add #imm,Rn */
	W8(r2, r0); UPD(0x0C09CB08u, 2);  /* 0C09CB06 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09CB08 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09CB0A tst Rm,Rn */
	if (!T) { UPD(0x0C09CB36u, 5); goto L_0C09CB36; }  /* 0C09CB0C bf */
L_0C09CB0E: BLKS(0x0C09CB0Eu);
	r1 = R32(r3 + 0xCu); UPD(0x0C09CB10u, 1);  /* 0C09CB0E mov.l @(disp,Rm),Rn */
	r0 = 0x88u; UPD(0x0C09CB12u, 1);  /* 0C09CB10 mov.w @(disp,pc),Rn */
	IF(0x0C09CB12u); r5 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C09CB14u, 1);  /* 0C09CB12 mov.w @(r0,Rm),Rn */
	r4 = 0xFFFFE888u; UPD(0x0C09CB16u, 1);  /* 0C09CB14 mov.w @(disp,pc),Rn */
	IF(0x0C09CB16u); { u32 tv_ = (r4 + 0x0C09CB1Au); u32 t_ = PHYS(tv_); r1 += r5; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CB16 braf Rn */
L_0C09CB20: BLKS(0x0C09CB20u);
	r0 = 0xC0A03B0u; UPD(0x0C09CB22u, 1);  /* 0C09CB20 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C09CB22 mov #imm,Rn */
	W32(r2 + 0x8u, r1); UPD(0x0C09CB26u, 2);  /* 0C09CB24 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C09CB26 mov Rm,Rn */
	IF(0x0C09CB28u); { u32 t_ = r0; PR = 0x0C09CB2Cu; W32(r2 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C09CB2Cu); }  /* 0C09CB28 jsr @Rn */
L_0C09CB2C: BLKS(0x0C09CB2Cu);
	IF(0x0C09CB2Cu); MACL = r13 * r10;  /* 0C09CB2C mul.l Rm,Rn */
	r0 = 0x9Au; UPD(0x0C09CB30u, 3);  /* 0C09CB2E mov.w @(disp,pc),Rn */
	IF(0x0C09CB30u); r13 = MACL;  /* 0C09CB30 sts macl,Rn */
	r13 += r9;  /* 0C09CB32 add Rm,Rn */
	IF(0x0C09CB34u); W8(r0 + r13, r12); UPD(0x0C09CB36u, 3);  /* 0C09CB34 mov.b Rm,@(r0,Rn) */
L_0C09CB36: BLKS(0x0C09CB36u);
	r13 = 0xFFFFE242u; UPD(0x0C09CB38u, 1);  /* 0C09CB36 mov.w @(disp,pc),Rn */
	IF(0x0C09CB38u); { u32 tv_ = (r13 + 0x0C09CB3Cu); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CB38 braf Rn */
}

void f_0C09CAF4(sh3_t *c)
{
	LOCALS;
L_0C09CAF4: BLKS(0x0C09CAF4u);
	r9 = 0xB4u; UPD(0x0C09CAF6u, 1);  /* 0C09CAF4 mov.w @(disp,pc),Rn */
	IF(0x0C09CAF6u); MACL = r11 * r9;  /* 0C09CAF6 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C09CAFAu, 3);  /* 0C09CAF8 mov.l @(disp,pc),Rn */
	IF(0x0C09CAFAu); r3 = MACL;  /* 0C09CAFA sts macl,Rn */
	r2 = 0x98u; UPD(0x0C09CAFEu, 2);  /* 0C09CAFC mov.w @(disp,pc),Rn */
	r3 += r10;  /* 0C09CAFE add Rm,Rn */
	r2 += r3;  /* 0C09CB00 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C09CB04u, 3);  /* 0C09CB02 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09CB04 add #imm,Rn */
	W8(r2, r0); UPD(0x0C09CB08u, 2);  /* 0C09CB06 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09CB08 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09CB0A tst Rm,Rn */
	if (!T) { UPD(0x0C09CB36u, 5); goto L_0C09CB36; }  /* 0C09CB0C bf */
L_0C09CB0E: BLKS(0x0C09CB0Eu);
	r1 = R32(r3 + 0xCu); UPD(0x0C09CB10u, 1);  /* 0C09CB0E mov.l @(disp,Rm),Rn */
	r0 = 0x88u; UPD(0x0C09CB12u, 1);  /* 0C09CB10 mov.w @(disp,pc),Rn */
	IF(0x0C09CB12u); r5 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C09CB14u, 1);  /* 0C09CB12 mov.w @(r0,Rm),Rn */
	r4 = 0xFFFFE888u; UPD(0x0C09CB16u, 1);  /* 0C09CB14 mov.w @(disp,pc),Rn */
	IF(0x0C09CB16u); { u32 tv_ = (r4 + 0x0C09CB1Au); u32 t_ = PHYS(tv_); r1 += r5; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CB16 braf Rn */
L_0C09CB36: BLKS(0x0C09CB36u);
	r13 = 0xFFFFE242u; UPD(0x0C09CB38u, 1);  /* 0C09CB36 mov.w @(disp,pc),Rn */
	IF(0x0C09CB38u); { u32 tv_ = (r13 + 0x0C09CB3Cu); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CB38 braf Rn */
}

void f_0C09CB40(sh3_t *c)
{
	LOCALS;
L_0C09CB40: BLKS(0x0C09CB40u);
	r13 = 0xB4u; UPD(0x0C09CB42u, 1);  /* 0C09CB40 mov.w @(disp,pc),Rn */
	IF(0x0C09CB42u); MACL = r11 * r13;  /* 0C09CB42 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09CB46u, 3);  /* 0C09CB44 mov.l @(disp,pc),Rn */
	IF(0x0C09CB46u); r8 = MACL;  /* 0C09CB46 sts macl,Rn */
	r9 = 0x88u; UPD(0x0C09CB4Au, 2);  /* 0C09CB48 mov.w @(disp,pc),Rn */
	r8 += r2;  /* 0C09CB4A add Rm,Rn */
	r9 += r8;  /* 0C09CB4C add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C09CB50u, 3);  /* 0C09CB4E mov.w @Rm,Rn */
	IF(0x0C09CB50u); T = (s32)r0 >= 0;  /* 0C09CB50 cmp/pz Rn */
	if (!T) { UPD(0x0C09CB90u, 4); goto L_0C09CB90; }  /* 0C09CB52 bf */
L_0C09CB54: BLKS(0x0C09CB54u);
	r0 = R32(r8 + 0x8u); UPD(0x0C09CB56u, 1);  /* 0C09CB54 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C09CB56 mov Rm,Rn */
	r0 += 0x1u;  /* 0C09CB58 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C09CB5Cu, 3);  /* 0C09CB5A mov.l Rm,@(disp,Rn) */
	r12 = 0xC1D649Cu; UPD(0x0C09CB5Eu, 1);  /* 0C09CB5C mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C09CB5E add Rm,Rn */
	r6 = 0xC0A03B0u; UPD(0x0C09CB62u, 2);  /* 0C09CB60 mov.l @(disp,pc),Rn */
	IF(0x0C09CB62u); r10 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C09CB64u, 1);  /* 0C09CB62 mov.w @(r0,Rm),Rn */
	r11 = 0xC0AFE40u; UPD(0x0C09CB66u, 1);  /* 0C09CB64 mov.l @(disp,pc),Rn */
	IF(0x0C09CB66u); { u32 t_ = r6; PR = 0x0C09CB6Au; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C09CB6Au); }  /* 0C09CB66 jsr @Rn */
L_0C09CB6A: BLKS(0x0C09CB6Au);
	r3 = 0x86u; UPD(0x0C09CB6Cu, 1);  /* 0C09CB6A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09CB6C mov Rm,Rn */
	r4 = 0x100u; UPD(0x0C09CB70u, 2);  /* 0C09CB6E mov.w @(disp,pc),Rn */
	IF(0x0C09CB70u); { u32 t_ = r11; PR = 0x0C09CB74u; IF(0x0C09CB72u); W16(r0 + r3, r4); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 2); CALLD(t_, 0x0C09CB74u); }  /* 0C09CB70 jsr @Rn */
L_0C09CB74: BLKS(0x0C09CB74u);
	r1 = 0xC1D64EEu; UPD(0x0C09CB76u, 1);  /* 0C09CB74 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C09CB76 and #imm,r0 */
	r0 += r0;  /* 0C09CB78 add Rm,Rn */
	IF(0x0C09CB7Au); r8 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C09CB7Cu, 3);  /* 0C09CB7A mov.w @(r0,Rm),Rn */
	r13 = 0xFFFFE1FAu; UPD(0x0C09CB7Eu, 1);  /* 0C09CB7C mov.w @(disp,pc),Rn */
	IF(0x0C09CB7Eu); { u32 tv_ = (r13 + 0x0C09CB82u); u32 t_ = PHYS(tv_); W16(r9, r8); /* slot mov.w Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CB7E braf Rn */
L_0C09CB90: BLKS(0x0C09CB90u);
	r7 = R32(r8 + 0xCu); UPD(0x0C09CB92u, 1);  /* 0C09CB90 mov.l @(disp,Rm),Rn */
	r7 += 0xFFFFFFFFu;  /* 0C09CB92 add #imm,Rn */
	r1 = 0xFFFFE20Eu; UPD(0x0C09CB96u, 2);  /* 0C09CB94 mov.w @(disp,pc),Rn */
	IF(0x0C09CB96u); { u32 tv_ = (r1 + 0x0C09CB9Au); u32 t_ = PHYS(tv_); W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CB96 braf Rn */
}

void f_0C09CBC0(sh3_t *c)
{
	LOCALS;
	goto L_0C09CBC0;
L_0C09BCE6: BLKS(0x0C09BCE6u);
	r1 = 0xC0A03B0u; UPD(0x0C09BCE8u, 1);  /* 0C09BCE6 mov.l @(disp,pc),Rn */
	r13 = 0xFFFFF006u; UPD(0x0C09BCEAu, 1);  /* 0C09BCE8 mov.w @(disp,pc),Rn */
	IF(0x0C09BCEAu); { u32 tv_ = (r13 + 0x0C09BCEEu); u32 t_ = PHYS(tv_); r4 = r11; /* slot mov Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09BCEA braf Rn */
L_0C09C702: BLKS(0x0C09C702u);
	r11 = 0xFFFFED60u; UPD(0x0C09C704u, 1);  /* 0C09C702 mov.w @(disp,pc),Rn */
	IF(0x0C09C704u); { u32 tv_ = (r11 + 0x0C09C708u); u32 t_ = PHYS(tv_); r1 += r6; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C704 braf Rn */
L_0C09C752: BLKS(0x0C09C752u);
	r10 = 0xB4u; UPD(0x0C09C754u, 1);  /* 0C09C752 mov.w @(disp,pc),Rn */
	IF(0x0C09C754u); MACL = r11 * r10;  /* 0C09C754 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C09C758u, 3);  /* 0C09C756 mov.l @(disp,pc),Rn */
	IF(0x0C09C758u); r2 = MACL;  /* 0C09C758 sts macl,Rn */
	r12 = 0x98u; UPD(0x0C09C75Cu, 2);  /* 0C09C75A mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C09C75C add Rm,Rn */
	r12 += r2;  /* 0C09C75E add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C09C762u, 3);  /* 0C09C760 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09C762 add #imm,Rn */
	W8(r12, r0); UPD(0x0C09C766u, 2);  /* 0C09C764 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09C766 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09C768 tst Rm,Rn */
	if (T) { UPD(0x0C09C774u, 5); goto L_0C09C774; }  /* 0C09C76A bt */
L_0C09C76C: BLKS(0x0C09C76Cu);
	r13 = 0xFFFFE60Cu; UPD(0x0C09C76Eu, 1);  /* 0C09C76C mov.w @(disp,pc),Rn */
	IF(0x0C09C76Eu); { u32 tv_ = (r13 + 0x0C09C772u); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C76E braf Rn */
L_0C09C774: BLKS(0x0C09C774u);
	r0 = R32(r2 + 0xCu); UPD(0x0C09C776u, 1);  /* 0C09C774 mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C09C776 cmp/eq #imm,r0 */
	{ u32 c_ = T; r12 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09C7A0u, 4); goto L_0C09C7A0; } goto L_0C09C77C; }  /* 0C09C778 bt/s */
L_0C09C77C: BLKS(0x0C09C77Cu);
	T = (s32)r0 > (s32)r12;  /* 0C09C77C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09C790u, 5); goto L_0C09C790; }  /* 0C09C77E bf */
L_0C09C780: BLKS(0x0C09C780u);
	r0 += 0xFFFFFFFFu;  /* 0C09C780 add #imm,Rn */
	UPD(0x0C09C782u, 1);
L_0C09C782: BLKS(0x0C09C782u);
	r1 = 0xFFFFE620u; UPD(0x0C09C784u, 1);  /* 0C09C782 mov.w @(disp,pc),Rn */
	IF(0x0C09C784u); { u32 tv_ = (r1 + 0x0C09C788u); u32 t_ = PHYS(tv_); W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C784 braf Rn */
L_0C09C790: BLKS(0x0C09C790u);
	{ r0 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09C782u, 3); goto L_0C09C782; }  /* 0C09C790 bra */
L_0C09C7A0: BLKS(0x0C09C7A0u);
	r13 = R32(r2 + 0x8u); UPD(0x0C09C7A2u, 1);  /* 0C09C7A0 mov.l @(disp,Rm),Rn */
	r6 = 0xFFFFFFFFu;  /* 0C09C7A2 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09C7A6u, 2);  /* 0C09C7A4 mov.w @(disp,pc),Rn */
	r13 += 0xFFFFFFFFu;  /* 0C09C7A6 add #imm,Rn */
	IF(0x0C09C7A8u); W16(r0 + r2, r6); UPD(0x0C09C7AAu, 2);  /* 0C09C7A8 mov.w Rm,@(r0,Rn) */
	r1 = 0xEu;  /* 0C09C7AA mov #imm,Rn */
	W32(r2 + 0x8u, r13); UPD(0x0C09C7AEu, 2);  /* 0C09C7AC mov.l Rm,@(disp,Rn) */
	{ W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09BCE6u, 3); goto L_0C09BCE6; }  /* 0C09C7AE bra */
L_0C09CBC0: BLKS(0x0C09CBC0u);
	r13 = 0xC0A0490u; UPD(0x0C09CBC2u, 1);  /* 0C09CBC0 mov.l @(disp,pc),Rn */
	IF(0x0C09CBC2u); { u32 t_ = r13; PR = 0x0C09CBC6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C09CBC6u); }  /* 0C09CBC2 jsr @Rn */
L_0C09CBC6: BLKS(0x0C09CBC6u);
	IF(0x0C09CBC6u); T = (s32)r0 >= 0;  /* 0C09CBC6 cmp/pz Rn */
	if (T) { UPD(0x0C09CBD2u, 4); goto L_0C09CBD2; }  /* 0C09CBC8 bt */
L_0C09CBCA: BLKS(0x0C09CBCAu);
	r1 = 0xFFFFEDC0u; UPD(0x0C09CBCCu, 1);  /* 0C09CBCA mov.w @(disp,pc),Rn */
	IF(0x0C09CBCCu); { u32 tv_ = (r1 + 0x0C09CBD0u); u32 t_ = PHYS(tv_); IF(0x0C09CBCEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CBCC braf Rn */
L_0C09CBD2: BLKS(0x0C09CBD2u);
	r7 = 0xB4u; UPD(0x0C09CBD4u, 1);  /* 0C09CBD2 mov.w @(disp,pc),Rn */
	IF(0x0C09CBD4u); MACL = r0 * r7;  /* 0C09CBD4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09CBD8u, 3);  /* 0C09CBD6 mov.l @(disp,pc),Rn */
	IF(0x0C09CBD8u); r8 = MACL;  /* 0C09CBD8 sts macl,Rn */
	r8 += r6;  /* 0C09CBDA add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C09CBDEu, 3);  /* 0C09CBDC mov.l @(disp,Rm),Rn */
	T = r0 == 0x20u;  /* 0C09CBDE cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C09CBE2u); MACL = r11 * r7; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09CBE8u, 5); goto L_0C09CBE8; } goto L_0C09CBE4; }  /* 0C09CBE0 bt/s */
L_0C09CBE4: BLKS(0x0C09CBE4u);
	{ IF(0x0C09CBE6u); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C09C702u, 5); goto L_0C09C702; }  /* 0C09CBE4 bra */
L_0C09CBE8: BLKS(0x0C09CBE8u);
	IF(0x0C09CBE8u); MACL = r11 * r7;  /* 0C09CBE8 mul.l Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C09CBECu, 3);  /* 0C09CBEA mov.l @(disp,Rm),Rn */
	IF(0x0C09CBECu); r9 = MACL;  /* 0C09CBEC sts macl,Rn */
	r9 += r6;  /* 0C09CBEE add Rm,Rn */
	r4 = R32(r9 + 0x2Cu); UPD(0x0C09CBF2u, 3);  /* 0C09CBF0 mov.l @(disp,Rm),Rn */
	r12 = R32(r8 + 0x28u); UPD(0x0C09CBF4u, 1);  /* 0C09CBF2 mov.l @(disp,Rm),Rn */
	r5 += r4;  /* 0C09CBF4 add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C09CBF8u, 2);  /* 0C09CBF6 mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C09CBF8 mov Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C09CBFCu, 2);  /* 0C09CBFA mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C09CBFC add Rm,Rn */
	W32(r9 + 0x24u, r5); UPD(0x0C09CC00u, 2);  /* 0C09CBFE mov.l Rm,@(disp,Rn) */
	r12 += r1;  /* 0C09CC00 add Rm,Rn */
	W32(r9 + 0x28u, r12); UPD(0x0C09CC04u, 2);  /* 0C09CC02 mov.l Rm,@(disp,Rn) */
	r0 += r8;  /* 0C09CC04 add Rm,Rn */
	r5 = r9;  /* 0C09CC06 mov Rm,Rn */
	r0 += 0x1u;  /* 0C09CC08 add #imm,Rn */
	r5 += 0x7Eu;  /* 0C09CC0A add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C09CC0Eu, 5);  /* 0C09CC0C mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C09CC0E add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r5); UPD(0x0C09CC12u, 2);  /* 0C09CC10 mov.w @Rm,Rn */
	r0 = r9;  /* 0C09CC12 mov Rm,Rn */
	r13 = 0xAFu; UPD(0x0C09CC16u, 2);  /* 0C09CC14 mov.w @(disp,pc),Rn */
	IF(0x0C09CC16u); MACL = r12 * r7;  /* 0C09CC16 mul.l Rm,Rn */
	IF(0x0C09CC18u); r10 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C09CC1Au, 3);  /* 0C09CC18 mov.b @(r0,Rm),Rn */
	r2 = 0xA3u; UPD(0x0C09CC1Cu, 1);  /* 0C09CC1A mov.w @(disp,pc),Rn */
	IF(0x0C09CC1Cu); r0 = MACL;  /* 0C09CC1C sts macl,Rn */
	r0 += r6;  /* 0C09CC1E add Rm,Rn */
	r3 += r10;  /* 0C09CC20 add Rm,Rn */
	IF(0x0C09CC22u); r0 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09CC24u, 4);  /* 0C09CC22 mov.b @(r0,Rm),Rn */
	T = r0 == 0x3u;  /* 0C09CC24 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r4, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09CC2Eu, 4); goto L_0C09CC2E; } UPD(0x0C09CC2Au, 1); goto L_0C09CC2A; }  /* 0C09CC26 bt/s */
L_0C09CC2A: BLKS(0x0C09CC2Au);
	{ IF(0x0C09CC2Cu); ; /* slot nop */ UPD(0x0C09C752u, 3); goto L_0C09C752; }  /* 0C09CC2A bra */
L_0C09CC2E: BLKS(0x0C09CC2Eu);
	r13 = 0xC058130u; UPD(0x0C09CC30u, 1);  /* 0C09CC2E mov.l @(disp,pc),Rn */
	r10 = 0xC057430u; UPD(0x0C09CC32u, 1);  /* 0C09CC30 mov.l @(disp,pc),Rn */
	IF(0x0C09CC32u); { u32 t_ = r13; PR = 0x0C09CC36u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C09CC36u); }  /* 0C09CC32 jsr @Rn */
L_0C09CC36: BLKS(0x0C09CC36u);
	r4 = r11;  /* 0C09CC36 mov Rm,Rn */
	IF(0x0C09CC38u); { u32 t_ = r10; PR = 0x0C09CC3Cu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C09CC3Cu); }  /* 0C09CC38 jsr @Rn */
L_0C09CC3C: BLKS(0x0C09CC3Cu);
	r10 = 0x86u; UPD(0x0C09CC3Eu, 1);  /* 0C09CC3C mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C09CC3E mov Rm,Rn */
	r10 += r9;  /* 0C09CC40 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C09CC44u, 3);  /* 0C09CC42 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C09CC44 add #imm,Rn */
	r3 = 0xC0A0380u; UPD(0x0C09CC48u, 2);  /* 0C09CC46 mov.l @(disp,pc),Rn */
	IF(0x0C09CC48u); r0 >>= 2;  /* 0C09CC48 shlr2 Rn */
	IF(0x0C09CC4Au); r0 >>= 2;  /* 0C09CC4A shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C09CC4C and #imm,r0 */
	IF(0x0C09CC4Eu); { u32 t_ = r3; PR = 0x0C09CC52u; W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09CC52u); }  /* 0C09CC4E jsr @Rn */
L_0C09CC52: BLKS(0x0C09CC52u);
	r2 = 0xA7u; UPD(0x0C09CC54u, 1);  /* 0C09CC52 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09CC54 mov Rm,Rn */
	IF(0x0C09CC56u); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09CC58u, 2);  /* 0C09CC56 mov.b @(r0,Rm),Rn */
	r4 = r11;  /* 0C09CC58 mov Rm,Rn */
	r7 = 0xC1D6584u; UPD(0x0C09CC5Cu, 2);  /* 0C09CC5A mov.l @(disp,pc),Rn */
	r11 = 0xC0A9E40u; UPD(0x0C09CC5Eu, 1);  /* 0C09CC5C mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C09CC5E mov Rm,Rn */
	IF(0x0C09CC60u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09CC62u, 2);  /* 0C09CC60 mov.b @(r0,Rm),Rn */
	IF(0x0C09CC62u); { u32 t_ = r11; PR = 0x0C09CC66u; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09CC66u); }  /* 0C09CC62 jsr @Rn */
L_0C09CC66: BLKS(0x0C09CC66u);
	T = (r0 & r0) == 0;  /* 0C09CC66 tst Rm,Rn */
	if (T) { UPD(0x0C09CCDCu, 4); goto L_0C09CCDC; }  /* 0C09CC68 bt */
L_0C09CC6A: BLKS(0x0C09CC6Au);
	r8 = (u32)(s32)(s16)R16(r10); UPD(0x0C09CC6Cu, 1);  /* 0C09CC6A mov.w @Rm,Rn */
	r13 = 0x0u;  /* 0C09CC6C mov #imm,Rn */
	r12 = 0x1C0000u; UPD(0x0C09CC70u, 2);  /* 0C09CC6E mov.l @(disp,pc),Rn */
	r10 = r9;  /* 0C09CC70 mov Rm,Rn */
	r11 = 0xC058030u; UPD(0x0C09CC74u, 2);  /* 0C09CC72 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r8); UPD(0x0C09CC76u, 1);  /* 0C09CC74 mov.l Rm,@(disp,Rn) */
L_0C09CC76: BLKS(0x0C09CC76u);
	r5 = 0xC1D658Cu; UPD(0x0C09CC78u, 1);  /* 0C09CC76 mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C09CC78 mov Rm,Rn */
	IF(0x0C09CC7Au); r0 <<= 2;  /* 0C09CC7A shll2 Rn */
	r6 = 0xC058060u; UPD(0x0C09CC7Eu, 3);  /* 0C09CC7C mov.l @(disp,pc),Rn */
	IF(0x0C09CC7Eu); r9 = R32(r0 + r5); UPD(0x0C09CC80u, 1);  /* 0C09CC7E mov.l @(r0,Rm),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C09CC82u, 1);  /* 0C09CC80 mov.l @(disp,Rm),Rn */
	IF(0x0C09CC82u); { u32 t_ = r6; PR = 0x0C09CC86u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09CC86u); }  /* 0C09CC82 jsr @Rn */
L_0C09CC86: BLKS(0x0C09CC86u);
	r8 = r0;  /* 0C09CC86 mov Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C09CC8Au, 2);  /* 0C09CC88 mov.l @(disp,Rm),Rn */
	IF(0x0C09CC8Au); { u32 t_ = r11; PR = 0x0C09CC8Eu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C09CC8Eu); }  /* 0C09CC8A jsr @Rn */
L_0C09CC8E: BLKS(0x0C09CC8Eu);
	r8 -= r0;  /* 0C09CC8E sub Rm,Rn */
	r1 = r8;  /* 0C09CC90 mov Rm,Rn */
	r1 += r1;  /* 0C09CC92 add Rm,Rn */
	r1 += r8;  /* 0C09CC94 add Rm,Rn */
	IF(0x0C09CC96u); T = (s32)r1 >= 0;  /* 0C09CC96 cmp/pz Rn */
	if (!T) { UPD(0x0C09CCF0u, 8); goto L_0C09CCF0; }  /* 0C09CC98 bf */
L_0C09CC9A: BLKS(0x0C09CC9Au);
	IF(0x0C09CC9Au); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C09CC9A shar Rn */
	r7 = R32(r10 + 0x24u); UPD(0x0C09CC9Eu, 2);  /* 0C09CC9C mov.l @(disp,Rm),Rn */
	IF(0x0C09CC9Eu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C09CC9E shar Rn */
	r2 = 0x10000u; UPD(0x0C09CCA2u, 2);  /* 0C09CCA0 mov.l @(disp,pc),Rn */
	r7 += r1;  /* 0C09CCA2 add Rm,Rn */
	r7 += r2;  /* 0C09CCA4 add Rm,Rn */
	W32(r14 + 0x8u, r7); UPD(0x0C09CCA8u, 3);  /* 0C09CCA6 mov.l Rm,@(disp,Rn) */
	r5 = 0x1C0000u; UPD(0x0C09CCAAu, 1);  /* 0C09CCA8 mov.l @(disp,pc),Rn */
	IF(0x0C09CCAAu); { u32 t_ = r11; PR = 0x0C09CCAEu; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C09CCAEu); }  /* 0C09CCAA jsr @Rn */
L_0C09CCAE: BLKS(0x0C09CCAEu);
	r1 = 0xC058060u; UPD(0x0C09CCB0u, 1);  /* 0C09CCAE mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C09CCB0 mov Rm,Rn */
	r8 = R32(r10 + 0x28u); UPD(0x0C09CCB4u, 2);  /* 0C09CCB2 mov.l @(disp,Rm),Rn */
	r9 = 0x2u;  /* 0C09CCB4 mov #imm,Rn */
	r8 += r0;  /* 0C09CCB6 add Rm,Rn */
	IF(0x0C09CCB8u); { u32 t_ = r1; PR = 0x0C09CCBCu; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09CCBCu); }  /* 0C09CCB8 jsr @Rn */
L_0C09CCBC: BLKS(0x0C09CCBCu);
	r8 += r0;  /* 0C09CCBC add Rm,Rn */
	r4 = 0x30000u; UPD(0x0C09CCC0u, 2);  /* 0C09CCBE mov.l @(disp,pc),Rn */
	r6 = r8;  /* 0C09CCC0 mov Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09CCC2 add #imm,Rn */
	r8 = 0xC7C1608u; UPD(0x0C09CCC6u, 3);  /* 0C09CCC4 mov.l @(disp,pc),Rn */
	W32(r15, r4); UPD(0x0C09CCC8u, 1);  /* 0C09CCC6 mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C09CCC8 mov #imm,Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C09CCCCu, 2);  /* 0C09CCCA mov.l @(disp,Rm),Rn */
	IF(0x0C09CCCCu); { u32 t_ = r8; PR = 0x0C09CCD0u; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1608, 0x0C7C1608u, 0x0C09CCD0u); }  /* 0C09CCCC jsr @Rn */
L_0C09CCD0: BLKS(0x0C09CCD0u);
	r0 = r13;  /* 0C09CCD0 mov Rm,Rn */
	r0 += 0x1u;  /* 0C09CCD2 add #imm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C09CCD4 exts.w Rm,Rn */
	T = (s32)r13 > (s32)r9;  /* 0C09CCD6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09CC76u, 7); goto L_0C09CC76; } UPD(0x0C09CCDCu, 1); goto L_0C09CCDC; }  /* 0C09CCD8 bf/s */
L_0C09CCDC: BLKS(0x0C09CCDCu);
	r13 = 0xFFFFE09Cu; UPD(0x0C09CCDEu, 1);  /* 0C09CCDC mov.w @(disp,pc),Rn */
	IF(0x0C09CCDEu); { u32 tv_ = (r13 + 0x0C09CCE2u); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CCDE braf Rn */
L_0C09CCF0: BLKS(0x0C09CCF0u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C09CC9Au, 3); goto L_0C09CC9A; }  /* 0C09CCF0 bra */
}

void f_0C09CD00(sh3_t *c)
{
	LOCALS;
	goto L_0C09CD00;
L_0C09C646: BLKS(0x0C09C646u);
	r11 = 0xFFFFEE1Cu; UPD(0x0C09C648u, 1);  /* 0C09C646 mov.w @(disp,pc),Rn */
	IF(0x0C09C648u); { u32 tv_ = (r11 + 0x0C09C64Cu); u32 t_ = PHYS(tv_); r1 += r2; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C648 braf Rn */
L_0C09CCDC: BLKS(0x0C09CCDCu);
	r13 = 0xFFFFE09Cu; UPD(0x0C09CCDEu, 1);  /* 0C09CCDC mov.w @(disp,pc),Rn */
	IF(0x0C09CCDEu); { u32 tv_ = (r13 + 0x0C09CCE2u); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CCDE braf Rn */
L_0C09CD00: BLKS(0x0C09CD00u);
	r9 = 0xC0A0540u; UPD(0x0C09CD02u, 1);  /* 0C09CD00 mov.l @(disp,pc),Rn */
	IF(0x0C09CD02u); { u32 t_ = r9; PR = 0x0C09CD06u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C09CD06u); }  /* 0C09CD02 jsr @Rn */
L_0C09CD06: BLKS(0x0C09CD06u);
	IF(0x0C09CD06u); T = (s32)r0 >= 0;  /* 0C09CD06 cmp/pz Rn */
	if (T) { UPD(0x0C09CD12u, 4); goto L_0C09CD12; }  /* 0C09CD08 bt */
L_0C09CD0A: BLKS(0x0C09CD0Au);
	r0 = 0xFFFFE100u; UPD(0x0C09CD0Cu, 1);  /* 0C09CD0A mov.w @(disp,pc),Rn */
	IF(0x0C09CD0Cu); { u32 tv_ = (r0 + 0x0C09CD10u); u32 t_ = PHYS(tv_); IF(0x0C09CD0Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CD0C braf Rn */
L_0C09CD12: BLKS(0x0C09CD12u);
	r1 = 0xB4u; UPD(0x0C09CD14u, 1);  /* 0C09CD12 mov.w @(disp,pc),Rn */
	IF(0x0C09CD14u); MACL = r0 * r1;  /* 0C09CD14 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09CD18u, 3);  /* 0C09CD16 mov.l @(disp,pc),Rn */
	IF(0x0C09CD18u); r7 = MACL;  /* 0C09CD18 sts macl,Rn */
	r7 += r2;  /* 0C09CD1A add Rm,Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C09CD1Eu, 3);  /* 0C09CD1C mov.l @(disp,Rm),Rn */
	T = r0 == 0x18u;  /* 0C09CD1E cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C09CD22u); MACL = r11 * r1; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09CD28u, 5); goto L_0C09CD28; } goto L_0C09CD24; }  /* 0C09CD20 bt/s */
L_0C09CD24: BLKS(0x0C09CD24u);
	{ IF(0x0C09CD26u); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C09C646u, 5); goto L_0C09C646; }  /* 0C09CD24 bra */
L_0C09CD28: BLKS(0x0C09CD28u);
	IF(0x0C09CD28u); MACL = r11 * r1;  /* 0C09CD28 mul.l Rm,Rn */
	r5 = R32(r7 + 0x24u); UPD(0x0C09CD2Cu, 3);  /* 0C09CD2A mov.l @(disp,Rm),Rn */
	IF(0x0C09CD2Cu); r8 = MACL;  /* 0C09CD2C sts macl,Rn */
	r8 += r2;  /* 0C09CD2E add Rm,Rn */
	r0 = R32(r8 + 0x2Cu); UPD(0x0C09CD32u, 3);  /* 0C09CD30 mov.l @(disp,Rm),Rn */
	r12 = r8;  /* 0C09CD32 mov Rm,Rn */
	r6 = 0xA8u; UPD(0x0C09CD36u, 2);  /* 0C09CD34 mov.w @(disp,pc),Rn */
	r5 += r0;  /* 0C09CD36 add Rm,Rn */
	r13 = 0xAFu; UPD(0x0C09CD3Au, 2);  /* 0C09CD38 mov.w @(disp,pc),Rn */
	r12 += r6;  /* 0C09CD3A add Rm,Rn */
	r0 = r8;  /* 0C09CD3C mov Rm,Rn */
	IF(0x0C09CD3Eu); r10 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C09CD40u, 3);  /* 0C09CD3E mov.b @(r0,Rm),Rn */
	r6 += r7;  /* 0C09CD40 add Rm,Rn */
	r6 += 0x1u;  /* 0C09CD42 add #imm,Rn */
	r2 = 0x9Au; UPD(0x0C09CD46u, 3);  /* 0C09CD44 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C09CD46 mov Rm,Rn */
	r9 = R32(r7 + 0x28u); UPD(0x0C09CD4Au, 2);  /* 0C09CD48 mov.l @(disp,Rm),Rn */
	r12 += 0x1u;  /* 0C09CD4A add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C09CD4Eu, 2);  /* 0C09CD4C mov.b @Rm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C09CD50u, 1);  /* 0C09CD4E mov.l @(disp,Rm),Rn */
	r3 += r10;  /* 0C09CD50 add Rm,Rn */
	IF(0x0C09CD52u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09CD54u, 2);  /* 0C09CD52 mov.b @(r0,Rm),Rn */
	r9 += r1;  /* 0C09CD54 add Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C09CD56 extu.b Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C09CD5Au, 3);  /* 0C09CD58 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C09CD5A tst Rm,Rn */
	W32(r8 + 0x28u, r9); UPD(0x0C09CD5Eu, 2);  /* 0C09CD5C mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W8(r12, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09CCDCu, 3); goto L_0C09CCDC; } UPD(0x0C09CD62u, 1); goto L_0C09CD62; }  /* 0C09CD5E bt/s */
L_0C09CD62: BLKS(0x0C09CD62u);
	r4 = 0x0u;  /* 0C09CD62 mov #imm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C09CD66u, 2);  /* 0C09CD64 mov.l Rm,@(disp,Rn) */
	r0 += r0;  /* 0C09CD66 add Rm,Rn */
	r4 = r11;  /* 0C09CD68 mov Rm,Rn */
	r12 = 0xC1D6598u; UPD(0x0C09CD6Cu, 3);  /* 0C09CD6A mov.l @(disp,pc),Rn */
	r11 = 0xC0A03B0u; UPD(0x0C09CD6Eu, 1);  /* 0C09CD6C mov.l @(disp,pc),Rn */
	IF(0x0C09CD6Eu); r2 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C09CD70u, 1);  /* 0C09CD6E mov.w @(r0,Rm),Rn */
	IF(0x0C09CD70u); { u32 t_ = r11; PR = 0x0C09CD74u; W32(r8 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C09CD74u); }  /* 0C09CD70 jsr @Rn */
L_0C09CD74: BLKS(0x0C09CD74u);
	r0 = 0x88u; UPD(0x0C09CD76u, 1);  /* 0C09CD74 mov.w @(disp,pc),Rn */
	r7 = 0x1u;  /* 0C09CD76 mov #imm,Rn */
	r4 = 0xFFFFE6B0u; UPD(0x0C09CD7Au, 2);  /* 0C09CD78 mov.w @(disp,pc),Rn */
	IF(0x0C09CD7Au); { u32 tv_ = (r4 + 0x0C09CD7Eu); u32 t_ = PHYS(tv_); IF(0x0C09CD7Cu); W16(r0 + r8, r7); /* slot mov.w Rm,@(r0,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CD7A braf Rn */
}

void f_0C09CDE0(sh3_t *c)
{
	LOCALS;
	goto L_0C09CDE0;
L_0C09BCE6: BLKS(0x0C09BCE6u);
	r1 = 0xC0A03B0u; UPD(0x0C09BCE8u, 1);  /* 0C09BCE6 mov.l @(disp,pc),Rn */
	r13 = 0xFFFFF006u; UPD(0x0C09BCEAu, 1);  /* 0C09BCE8 mov.w @(disp,pc),Rn */
	IF(0x0C09BCEAu); { u32 tv_ = (r13 + 0x0C09BCEEu); u32 t_ = PHYS(tv_); r4 = r11; /* slot mov Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09BCEA braf Rn */
L_0C09C77E: BLKS(0x0C09C77Eu);
	if (!T) { UPD(0x0C09C790u, 3); goto L_0C09C790; }  /* 0C09C77E bf */
L_0C09C780: BLKS(0x0C09C780u);
	r0 += 0xFFFFFFFFu;  /* 0C09C780 add #imm,Rn */
	UPD(0x0C09C782u, 1);
L_0C09C782: BLKS(0x0C09C782u);
	r1 = 0xFFFFE620u; UPD(0x0C09C784u, 1);  /* 0C09C782 mov.w @(disp,pc),Rn */
	IF(0x0C09C784u); { u32 tv_ = (r1 + 0x0C09C788u); u32 t_ = PHYS(tv_); W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C784 braf Rn */
L_0C09C790: BLKS(0x0C09C790u);
	{ r0 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09C782u, 3); goto L_0C09C782; }  /* 0C09C790 bra */
L_0C09C7AE: BLKS(0x0C09C7AEu);
	{ W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09BCE6u, 3); goto L_0C09BCE6; }  /* 0C09C7AE bra */
L_0C09C8D2: BLKS(0x0C09C8D2u);
	r11 = 0xFFFFEB90u; UPD(0x0C09C8D4u, 1);  /* 0C09C8D2 mov.w @(disp,pc),Rn */
	IF(0x0C09C8D4u); { u32 tv_ = (r11 + 0x0C09C8D8u); u32 t_ = PHYS(tv_); r1 += r5; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C8D4 braf Rn */
L_0C09CDE0: BLKS(0x0C09CDE0u);
	r12 = 0xC0A0490u; UPD(0x0C09CDE2u, 1);  /* 0C09CDE0 mov.l @(disp,pc),Rn */
	IF(0x0C09CDE2u); { u32 t_ = r12; PR = 0x0C09CDE6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C09CDE6u); }  /* 0C09CDE2 jsr @Rn */
L_0C09CDE6: BLKS(0x0C09CDE6u);
	IF(0x0C09CDE6u); T = (s32)r0 >= 0;  /* 0C09CDE6 cmp/pz Rn */
	if (T) { UPD(0x0C09CDF2u, 4); goto L_0C09CDF2; }  /* 0C09CDE8 bt */
L_0C09CDEA: BLKS(0x0C09CDEAu);
	r1 = 0xFFFFEBA0u; UPD(0x0C09CDECu, 1);  /* 0C09CDEA mov.w @(disp,pc),Rn */
	IF(0x0C09CDECu); { u32 tv_ = (r1 + 0x0C09CDF0u); u32 t_ = PHYS(tv_); IF(0x0C09CDEEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CDEC braf Rn */
L_0C09CDF2: BLKS(0x0C09CDF2u);
	r6 = 0xB4u; UPD(0x0C09CDF4u, 1);  /* 0C09CDF2 mov.w @(disp,pc),Rn */
	IF(0x0C09CDF4u); MACL = r0 * r6;  /* 0C09CDF4 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C09CDF8u, 3);  /* 0C09CDF6 mov.l @(disp,pc),Rn */
	IF(0x0C09CDF8u); r7 = MACL;  /* 0C09CDF8 sts macl,Rn */
	r7 += r5;  /* 0C09CDFA add Rm,Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C09CDFEu, 3);  /* 0C09CDFC mov.l @(disp,Rm),Rn */
	T = r0 == 0x18u;  /* 0C09CDFE cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C09CE02u); MACL = r11 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09CE08u, 5); goto L_0C09CE08; } goto L_0C09CE04; }  /* 0C09CE00 bt/s */
L_0C09CE04: BLKS(0x0C09CE04u);
	{ IF(0x0C09CE06u); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C09C8D2u, 5); goto L_0C09C8D2; }  /* 0C09CE04 bra */
L_0C09CE08: BLKS(0x0C09CE08u);
	IF(0x0C09CE08u); MACL = r11 * r6;  /* 0C09CE08 mul.l Rm,Rn */
	r9 = R32(r7 + 0x24u); UPD(0x0C09CE0Cu, 3);  /* 0C09CE0A mov.l @(disp,Rm),Rn */
	r12 = R32(r7 + 0x28u); UPD(0x0C09CE0Eu, 1);  /* 0C09CE0C mov.l @(disp,Rm),Rn */
	IF(0x0C09CE0Eu); r8 = MACL;  /* 0C09CE0E sts macl,Rn */
	r13 = 0xA8u; UPD(0x0C09CE12u, 2);  /* 0C09CE10 mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C09CE12 add Rm,Rn */
	r7 += r13;  /* 0C09CE14 add Rm,Rn */
	r7 += 0x1u;  /* 0C09CE16 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C09CE1Au, 4);  /* 0C09CE18 mov.b @Rm,Rn */
	r2 = r8;  /* 0C09CE1A mov Rm,Rn */
	r0 = R32(r8 + 0x2Cu); UPD(0x0C09CE1Eu, 2);  /* 0C09CE1C mov.l @(disp,Rm),Rn */
	r2 += 0x7Eu;  /* 0C09CE1E add #imm,Rn */
	r9 += r0;  /* 0C09CE20 add Rm,Rn */
	r7 = 0xAFu; UPD(0x0C09CE24u, 3);  /* 0C09CE22 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09CE24 mov Rm,Rn */
	IF(0x0C09CE26u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09CE28u, 2);  /* 0C09CE26 mov.b @(r0,Rm),Rn */
	r4 = r8;  /* 0C09CE28 mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C09CE2Cu, 2);  /* 0C09CE2A mov.w @Rm,Rn */
	r4 += r13;  /* 0C09CE2C add Rm,Rn */
	IF(0x0C09CE2Eu); MACL = r0 * r6;  /* 0C09CE2E mul.l Rm,Rn */
	W32(r8 + 0x24u, r9); UPD(0x0C09CE32u, 4);  /* 0C09CE30 mov.l Rm,@(disp,Rn) */
	r4 += 0x1u;  /* 0C09CE32 add #imm,Rn */
	r10 = R32(r8 + 0x30u); UPD(0x0C09CE36u, 2);  /* 0C09CE34 mov.l @(disp,Rm),Rn */
	IF(0x0C09CE36u); r2 = MACL;  /* 0C09CE36 sts macl,Rn */
	r2 += r5;  /* 0C09CE38 add Rm,Rn */
	r9 = 0xA2u; UPD(0x0C09CE3Cu, 3);  /* 0C09CE3A mov.w @(disp,pc),Rn */
	r12 += r10;  /* 0C09CE3C add Rm,Rn */
	r0 = r2;  /* 0C09CE3E mov Rm,Rn */
	IF(0x0C09CE40u); r10 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09CE42u, 3);  /* 0C09CE40 mov.b @(r0,Rm),Rn */
	r3 += r1;  /* 0C09CE42 add Rm,Rn */
	r0 = r10;  /* 0C09CE44 mov Rm,Rn */
	W32(r8 + 0x28u, r12); UPD(0x0C09CE48u, 3);  /* 0C09CE46 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x1u;  /* 0C09CE48 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r4, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09CE90u, 4); goto L_0C09CE90; } UPD(0x0C09CE4Eu, 1); goto L_0C09CE4E; }  /* 0C09CE4A bt/s */
L_0C09CE4E: BLKS(0x0C09CE4Eu);
	r2 = 0xB4u; UPD(0x0C09CE50u, 1);  /* 0C09CE4E mov.w @(disp,pc),Rn */
	IF(0x0C09CE50u); MACL = r11 * r2;  /* 0C09CE50 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C09CE54u, 3);  /* 0C09CE52 mov.l @(disp,pc),Rn */
	IF(0x0C09CE54u); r2 = MACL;  /* 0C09CE54 sts macl,Rn */
	r10 = 0x98u; UPD(0x0C09CE58u, 2);  /* 0C09CE56 mov.w @(disp,pc),Rn */
	r2 += r13;  /* 0C09CE58 add Rm,Rn */
	r10 += r2;  /* 0C09CE5A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C09CE5Eu, 3);  /* 0C09CE5C mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09CE5E add #imm,Rn */
	W8(r10, r0); UPD(0x0C09CE62u, 2);  /* 0C09CE60 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09CE62 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09CE64 tst Rm,Rn */
	if (!T) { UPD(0x0C09CF06u, 5); goto L_0C09CF06; }  /* 0C09CE66 bf */
L_0C09CE68: BLKS(0x0C09CE68u);
	r0 = R32(r2 + 0xCu); UPD(0x0C09CE6Au, 1);  /* 0C09CE68 mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C09CE6A cmp/eq #imm,r0 */
	{ u32 c_ = T; r12 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09CE74u, 4); goto L_0C09CE74; } goto L_0C09CE70; }  /* 0C09CE6C bt/s */
L_0C09CE70: BLKS(0x0C09CE70u);
	{ T = (s32)r0 > (s32)r12; /* slot cmp/gt Rm,Rn */ UPD(0x0C09C77Eu, 4); goto L_0C09C77E; }  /* 0C09CE70 bra */
L_0C09CE74: BLKS(0x0C09CE74u);
	r9 = R32(r2 + 0x8u); UPD(0x0C09CE76u, 1);  /* 0C09CE74 mov.l @(disp,Rm),Rn */
	r4 = 0xFFFFFFFFu;  /* 0C09CE76 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09CE7Au, 2);  /* 0C09CE78 mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFFFFu;  /* 0C09CE7A add #imm,Rn */
	IF(0x0C09CE7Cu); W16(r0 + r2, r4); UPD(0x0C09CE7Eu, 2);  /* 0C09CE7C mov.w Rm,@(r0,Rn) */
	r1 = 0xFu;  /* 0C09CE7E mov #imm,Rn */
	{ W32(r2 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09C7AEu, 4); goto L_0C09C7AE; }  /* 0C09CE80 bra */
L_0C09CE90: BLKS(0x0C09CE90u);
	r4 = 0xA6u; UPD(0x0C09CE92u, 1);  /* 0C09CE90 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C09CE92 mov Rm,Rn */
	IF(0x0C09CE94u); r6 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C09CE96u, 2);  /* 0C09CE94 mov.b @(r0,Rm),Rn */
	r5 = 0xC1D65A0u; UPD(0x0C09CE98u, 1);  /* 0C09CE96 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C09CE98 mov Rm,Rn */
	r0 = r5;  /* 0C09CE9A mov Rm,Rn */
	r13 = 0xC0A9E40u; UPD(0x0C09CE9Eu, 3);  /* 0C09CE9C mov.l @(disp,pc),Rn */
	IF(0x0C09CE9Eu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09CEA0u, 1);  /* 0C09CE9E mov.b @(r0,Rm),Rn */
	IF(0x0C09CEA0u); { u32 t_ = r13; PR = 0x0C09CEA4u; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09CEA4u); }  /* 0C09CEA0 jsr @Rn */
L_0C09CEA4: BLKS(0x0C09CEA4u);
	T = (r0 & r0) == 0;  /* 0C09CEA4 tst Rm,Rn */
	if (T) { UPD(0x0C09CF06u, 4); goto L_0C09CF06; }  /* 0C09CEA6 bt */
L_0C09CEA8: BLKS(0x0C09CEA8u);
	r0 = R32(r8 + 0xCu); UPD(0x0C09CEAAu, 1);  /* 0C09CEA8 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C09CEAA mov Rm,Rn */
	r11 = 0xC0A0380u; UPD(0x0C09CEAEu, 2);  /* 0C09CEAC mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C09CEAE add #imm,Rn */
	r0 &= 0xFu;  /* 0C09CEB0 and #imm,r0 */
	IF(0x0C09CEB2u); { u32 t_ = r11; PR = 0x0C09CEB6u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09CEB6u); }  /* 0C09CEB2 jsr @Rn */
L_0C09CEB6: BLKS(0x0C09CEB6u);
	r9 = 0x200000u; UPD(0x0C09CEB8u, 1);  /* 0C09CEB6 mov.l @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C09CEB8 mov #imm,Rn */
	r10 = 0xC058060u; UPD(0x0C09CEBCu, 2);  /* 0C09CEBA mov.l @(disp,pc),Rn */
	r11 = 0xC7C1554u; UPD(0x0C09CEBEu, 1);  /* 0C09CEBC mov.l @(disp,pc),Rn */
L_0C09CEBE: BLKS(0x0C09CEBEu);
	r6 = R32(r8 + 0xCu); UPD(0x0C09CEC0u, 1);  /* 0C09CEBE mov.l @(disp,Rm),Rn */
	r0 = r13;  /* 0C09CEC0 mov Rm,Rn */
	r4 = 0xC1D64DAu; UPD(0x0C09CEC4u, 2);  /* 0C09CEC2 mov.l @(disp,pc),Rn */
	r2 = 0x4u;  /* 0C09CEC4 mov #imm,Rn */
	r0 += r0;  /* 0C09CEC6 add Rm,Rn */
	IF(0x0C09CEC8u); ARG0(0x462Du); { s32 s_ = (s32)r2; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C09CEC8 shld Rm,Rn */
	IF(0x0C09CECAu); r5 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C09CECCu, 4);  /* 0C09CECA mov.w @(r0,Rm),Rn */
	r6 += r5;  /* 0C09CECC add Rm,Rn */
	r0 = (u32)(s32)(s16)r6;  /* 0C09CECE exts.w Rm,Rn */
	r4 = r0;  /* 0C09CED0 mov Rm,Rn */
	r5 = r9;  /* 0C09CED2 mov Rm,Rn */
	IF(0x0C09CED4u); { u32 t_ = r10; PR = 0x0C09CED8u; W32(r14 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 6); CALLD(t_, 0x0C09CED8u); }  /* 0C09CED4 jsr @Rn */
L_0C09CED8: BLKS(0x0C09CED8u);
	r1 = R32(r8 + 0x24u); UPD(0x0C09CEDAu, 1);  /* 0C09CED8 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C09CEDA mov Rm,Rn */
	r12 = 0xC058030u; UPD(0x0C09CEDEu, 2);  /* 0C09CEDC mov.l @(disp,pc),Rn */
	r1 += r0;  /* 0C09CEDE add Rm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C09CEE2u, 2);  /* 0C09CEE0 mov.l Rm,@(disp,Rn) */
	IF(0x0C09CEE2u); { u32 t_ = r12; PR = 0x0C09CEE6u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09CEE6u); }  /* 0C09CEE2 jsr @Rn */
L_0C09CEE6: BLKS(0x0C09CEE6u);
	r6 = R32(r8 + 0x28u); UPD(0x0C09CEE8u, 1);  /* 0C09CEE6 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09CEE8 add #imm,Rn */
	r7 = 0x28000u; UPD(0x0C09CEECu, 2);  /* 0C09CEEA mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09CEEC add Rm,Rn */
	W32(r15, r7); UPD(0x0C09CEF0u, 2);  /* 0C09CEEE mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C09CEF0 mov #imm,Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C09CEF4u, 2);  /* 0C09CEF2 mov.l @(disp,Rm),Rn */
	IF(0x0C09CEF4u); { u32 t_ = r11; PR = 0x0C09CEF8u; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C09CEF8u); }  /* 0C09CEF4 jsr @Rn */
L_0C09CEF8: BLKS(0x0C09CEF8u);
	r3 = r13;  /* 0C09CEF8 mov Rm,Rn */
	r3 += 0x1u;  /* 0C09CEFA add #imm,Rn */
	r13 = (u32)(s32)(s16)r3;  /* 0C09CEFC exts.w Rm,Rn */
	r2 = 0x1u;  /* 0C09CEFE mov #imm,Rn */
	T = (s32)r13 > (s32)r2;  /* 0C09CF00 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09CEBEu, 8); goto L_0C09CEBE; } UPD(0x0C09CF06u, 1); goto L_0C09CF06; }  /* 0C09CF02 bf/s */
L_0C09CF06: BLKS(0x0C09CF06u);
	r13 = 0xFFFFDE72u; UPD(0x0C09CF08u, 1);  /* 0C09CF06 mov.w @(disp,pc),Rn */
	IF(0x0C09CF08u); { u32 tv_ = (r13 + 0x0C09CF0Cu); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CF08 braf Rn */
}

void f_0C09CF50(sh3_t *c)
{
	LOCALS;
	goto L_0C09CF50;
L_0C09BCE6: BLKS(0x0C09BCE6u);
	r1 = 0xC0A03B0u; UPD(0x0C09BCE8u, 1);  /* 0C09BCE6 mov.l @(disp,pc),Rn */
	r13 = 0xFFFFF006u; UPD(0x0C09BCEAu, 1);  /* 0C09BCE8 mov.w @(disp,pc),Rn */
	IF(0x0C09BCEAu); { u32 tv_ = (r13 + 0x0C09BCEEu); u32 t_ = PHYS(tv_); r4 = r11; /* slot mov Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09BCEA braf Rn */
L_0C09C77E: BLKS(0x0C09C77Eu);
	if (!T) { UPD(0x0C09C790u, 3); goto L_0C09C790; }  /* 0C09C77E bf */
L_0C09C780: BLKS(0x0C09C780u);
	r0 += 0xFFFFFFFFu;  /* 0C09C780 add #imm,Rn */
	UPD(0x0C09C782u, 1);
L_0C09C782: BLKS(0x0C09C782u);
	r1 = 0xFFFFE620u; UPD(0x0C09C784u, 1);  /* 0C09C782 mov.w @(disp,pc),Rn */
	IF(0x0C09C784u); { u32 tv_ = (r1 + 0x0C09C788u); u32 t_ = PHYS(tv_); W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C784 braf Rn */
L_0C09C790: BLKS(0x0C09C790u);
	{ r0 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09C782u, 3); goto L_0C09C782; }  /* 0C09C790 bra */
L_0C09C7AE: BLKS(0x0C09C7AEu);
	{ W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09BCE6u, 3); goto L_0C09BCE6; }  /* 0C09C7AE bra */
L_0C09C8D2: BLKS(0x0C09C8D2u);
	r11 = 0xFFFFEB90u; UPD(0x0C09C8D4u, 1);  /* 0C09C8D2 mov.w @(disp,pc),Rn */
	IF(0x0C09C8D4u); { u32 tv_ = (r11 + 0x0C09C8D8u); u32 t_ = PHYS(tv_); r1 += r5; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C8D4 braf Rn */
L_0C09CE4E: BLKS(0x0C09CE4Eu);
	r2 = 0xB4u; UPD(0x0C09CE50u, 1);  /* 0C09CE4E mov.w @(disp,pc),Rn */
	IF(0x0C09CE50u); MACL = r11 * r2;  /* 0C09CE50 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C09CE54u, 3);  /* 0C09CE52 mov.l @(disp,pc),Rn */
	IF(0x0C09CE54u); r2 = MACL;  /* 0C09CE54 sts macl,Rn */
	r10 = 0x98u; UPD(0x0C09CE58u, 2);  /* 0C09CE56 mov.w @(disp,pc),Rn */
	r2 += r13;  /* 0C09CE58 add Rm,Rn */
	r10 += r2;  /* 0C09CE5A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C09CE5Eu, 3);  /* 0C09CE5C mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09CE5E add #imm,Rn */
	W8(r10, r0); UPD(0x0C09CE62u, 2);  /* 0C09CE60 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09CE62 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09CE64 tst Rm,Rn */
	if (!T) { UPD(0x0C09CF06u, 5); goto L_0C09CF06; }  /* 0C09CE66 bf */
L_0C09CE68: BLKS(0x0C09CE68u);
	r0 = R32(r2 + 0xCu); UPD(0x0C09CE6Au, 1);  /* 0C09CE68 mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C09CE6A cmp/eq #imm,r0 */
	{ u32 c_ = T; r12 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09CE74u, 4); goto L_0C09CE74; } goto L_0C09CE70; }  /* 0C09CE6C bt/s */
L_0C09CE70: BLKS(0x0C09CE70u);
	{ T = (s32)r0 > (s32)r12; /* slot cmp/gt Rm,Rn */ UPD(0x0C09C77Eu, 4); goto L_0C09C77E; }  /* 0C09CE70 bra */
L_0C09CE74: BLKS(0x0C09CE74u);
	r9 = R32(r2 + 0x8u); UPD(0x0C09CE76u, 1);  /* 0C09CE74 mov.l @(disp,Rm),Rn */
	r4 = 0xFFFFFFFFu;  /* 0C09CE76 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09CE7Au, 2);  /* 0C09CE78 mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFFFFu;  /* 0C09CE7A add #imm,Rn */
	IF(0x0C09CE7Cu); W16(r0 + r2, r4); UPD(0x0C09CE7Eu, 2);  /* 0C09CE7C mov.w Rm,@(r0,Rn) */
	r1 = 0xFu;  /* 0C09CE7E mov #imm,Rn */
	{ W32(r2 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09C7AEu, 4); goto L_0C09C7AE; }  /* 0C09CE80 bra */
L_0C09CF06: BLKS(0x0C09CF06u);
	r13 = 0xFFFFDE72u; UPD(0x0C09CF08u, 1);  /* 0C09CF06 mov.w @(disp,pc),Rn */
	IF(0x0C09CF08u); { u32 tv_ = (r13 + 0x0C09CF0Cu); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CF08 braf Rn */
L_0C09CF50: BLKS(0x0C09CF50u);
	r8 = 0xC0A0490u; UPD(0x0C09CF52u, 1);  /* 0C09CF50 mov.l @(disp,pc),Rn */
	IF(0x0C09CF52u); { u32 t_ = r8; PR = 0x0C09CF56u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C09CF56u); }  /* 0C09CF52 jsr @Rn */
L_0C09CF56: BLKS(0x0C09CF56u);
	IF(0x0C09CF56u); T = (s32)r0 >= 0;  /* 0C09CF56 cmp/pz Rn */
	if (T) { UPD(0x0C09CF62u, 4); goto L_0C09CF62; }  /* 0C09CF58 bt */
L_0C09CF5A: BLKS(0x0C09CF5Au);
	r1 = 0xFFFFEA30u; UPD(0x0C09CF5Cu, 1);  /* 0C09CF5A mov.w @(disp,pc),Rn */
	IF(0x0C09CF5Cu); { u32 tv_ = (r1 + 0x0C09CF60u); u32 t_ = PHYS(tv_); IF(0x0C09CF5Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CF5C braf Rn */
L_0C09CF62: BLKS(0x0C09CF62u);
	r6 = 0xB4u; UPD(0x0C09CF64u, 1);  /* 0C09CF62 mov.w @(disp,pc),Rn */
	IF(0x0C09CF64u); MACL = r0 * r6;  /* 0C09CF64 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C09CF68u, 3);  /* 0C09CF66 mov.l @(disp,pc),Rn */
	IF(0x0C09CF68u); r7 = MACL;  /* 0C09CF68 sts macl,Rn */
	r7 += r5;  /* 0C09CF6A add Rm,Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C09CF6Eu, 3);  /* 0C09CF6C mov.l @(disp,Rm),Rn */
	T = r0 == 0x18u;  /* 0C09CF6E cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C09CF72u); MACL = r11 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09CF78u, 5); goto L_0C09CF78; } goto L_0C09CF74; }  /* 0C09CF70 bt/s */
L_0C09CF74: BLKS(0x0C09CF74u);
	{ IF(0x0C09CF76u); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C09C8D2u, 5); goto L_0C09C8D2; }  /* 0C09CF74 bra */
L_0C09CF78: BLKS(0x0C09CF78u);
	IF(0x0C09CF78u); MACL = r11 * r6;  /* 0C09CF78 mul.l Rm,Rn */
	r9 = R32(r7 + 0x24u); UPD(0x0C09CF7Cu, 3);  /* 0C09CF7A mov.l @(disp,Rm),Rn */
	IF(0x0C09CF7Cu); r8 = MACL;  /* 0C09CF7C sts macl,Rn */
	r8 += r5;  /* 0C09CF7E add Rm,Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C09CF82u, 3);  /* 0C09CF80 mov.l @(disp,Rm),Rn */
	r12 = r8;  /* 0C09CF82 mov Rm,Rn */
	r9 += r3;  /* 0C09CF84 add Rm,Rn */
	W32(r8 + 0x24u, r9); UPD(0x0C09CF88u, 3);  /* 0C09CF86 mov.l Rm,@(disp,Rn) */
	r3 = r8;  /* 0C09CF88 mov Rm,Rn */
	r10 = R32(r7 + 0x28u); UPD(0x0C09CF8Cu, 2);  /* 0C09CF8A mov.l @(disp,Rm),Rn */
	r3 += 0x7Eu;  /* 0C09CF8C add #imm,Rn */
	r0 = 0xA8u; UPD(0x0C09CF90u, 2);  /* 0C09CF8E mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)R16(r3); UPD(0x0C09CF92u, 1);  /* 0C09CF90 mov.w @Rm,Rn */
	r7 += r0;  /* 0C09CF92 add Rm,Rn */
	r7 += 0x1u;  /* 0C09CF94 add #imm,Rn */
	IF(0x0C09CF96u); MACL = r9 * r6;  /* 0C09CF96 mul.l Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r7); UPD(0x0C09CF9Au, 5);  /* 0C09CF98 mov.b @Rm,Rn */
	r12 += r0;  /* 0C09CF9A add Rm,Rn */
	r13 = R32(r8 + 0x30u); UPD(0x0C09CF9Eu, 2);  /* 0C09CF9C mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C09CF9E mov Rm,Rn */
	r1 = 0xAFu; UPD(0x0C09CFA2u, 2);  /* 0C09CFA0 mov.w @(disp,pc),Rn */
	r10 += r13;  /* 0C09CFA2 add Rm,Rn */
	IF(0x0C09CFA4u); r7 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C09CFA6u, 2);  /* 0C09CFA4 mov.b @(r0,Rm),Rn */
	IF(0x0C09CFA6u); r9 = MACL;  /* 0C09CFA6 sts macl,Rn */
	W32(r8 + 0x28u, r10); UPD(0x0C09CFAAu, 2);  /* 0C09CFA8 mov.l Rm,@(disp,Rn) */
	r9 += r5;  /* 0C09CFAA add Rm,Rn */
	r13 = 0xA2u; UPD(0x0C09CFAEu, 2);  /* 0C09CFAC mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C09CFAE mov Rm,Rn */
	IF(0x0C09CFB0u); r10 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C09CFB2u, 2);  /* 0C09CFB0 mov.b @(r0,Rm),Rn */
	r12 += 0x1u;  /* 0C09CFB2 add #imm,Rn */
	r4 += r7;  /* 0C09CFB4 add Rm,Rn */
	r0 = r10;  /* 0C09CFB6 mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C09CFB8 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r12, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09CFC2u, 7); goto L_0C09CFC2; } UPD(0x0C09CFBEu, 1); goto L_0C09CFBE; }  /* 0C09CFBA bt/s */
L_0C09CFBE: BLKS(0x0C09CFBEu);
	{ IF(0x0C09CFC0u); ; /* slot nop */ UPD(0x0C09CE4Eu, 3); goto L_0C09CE4E; }  /* 0C09CFBE bra */
L_0C09CFC2: BLKS(0x0C09CFC2u);
	r12 = 0xC058130u; UPD(0x0C09CFC4u, 1);  /* 0C09CFC2 mov.l @(disp,pc),Rn */
	r13 = 0xC057430u; UPD(0x0C09CFC6u, 1);  /* 0C09CFC4 mov.l @(disp,pc),Rn */
	IF(0x0C09CFC6u); { u32 t_ = r12; PR = 0x0C09CFCAu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C09CFCAu); }  /* 0C09CFC6 jsr @Rn */
L_0C09CFCA: BLKS(0x0C09CFCAu);
	r4 = r11;  /* 0C09CFCA mov Rm,Rn */
	r10 = 0x86u; UPD(0x0C09CFCEu, 2);  /* 0C09CFCC mov.w @(disp,pc),Rn */
	IF(0x0C09CFCEu); { u32 t_ = r13; PR = 0x0C09CFD2u; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C09CFD2u); }  /* 0C09CFCE jsr @Rn */
L_0C09CFD2: BLKS(0x0C09CFD2u);
	r0 = r8;  /* 0C09CFD2 mov Rm,Rn */
	IF(0x0C09CFD4u); r4 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C09CFD6u, 2);  /* 0C09CFD4 mov.w @(r0,Rm),Rn */
	r7 = 0x1Fu;  /* 0C09CFD6 mov #imm,Rn */
	r4 += 0x8u;  /* 0C09CFD8 add #imm,Rn */
	IF(0x0C09CFDAu); r4 >>= 2;  /* 0C09CFDA shlr2 Rn */
	IF(0x0C09CFDCu); r4 >>= 2;  /* 0C09CFDC shlr2 Rn */
	r4 &= r7;  /* 0C09CFDE and Rm,Rn */
	r12 = 0xC0A0380u; UPD(0x0C09CFE2u, 6);  /* 0C09CFE0 mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C09CFE4u, 1);  /* 0C09CFE2 mov.l Rm,@(disp,Rn) */
	IF(0x0C09CFE4u); { u32 t_ = r12; PR = 0x0C09CFE8u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09CFE8u); }  /* 0C09CFE4 jsr @Rn */
L_0C09CFE8: BLKS(0x0C09CFE8u);
	r2 = 0xA7u; UPD(0x0C09CFEAu, 1);  /* 0C09CFE8 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C09CFEA mov Rm,Rn */
	IF(0x0C09CFECu); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09CFEEu, 2);  /* 0C09CFEC mov.b @(r0,Rm),Rn */
	r4 = r11;  /* 0C09CFEE mov Rm,Rn */
	r5 = 0xC1D65A8u; UPD(0x0C09CFF2u, 2);  /* 0C09CFF0 mov.l @(disp,pc),Rn */
	r11 = 0xC0A9E40u; UPD(0x0C09CFF4u, 1);  /* 0C09CFF2 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C09CFF4 mov Rm,Rn */
	IF(0x0C09CFF6u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09CFF8u, 2);  /* 0C09CFF6 mov.b @(r0,Rm),Rn */
	IF(0x0C09CFF8u); { u32 t_ = r11; PR = 0x0C09CFFCu; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09CFFCu); }  /* 0C09CFF8 jsr @Rn */
L_0C09CFFC: BLKS(0x0C09CFFCu);
	T = (r0 & r0) == 0;  /* 0C09CFFC tst Rm,Rn */
	if (T) { UPD(0x0C09D086u, 4); goto L_0C09D086; }  /* 0C09CFFE bt */
L_0C09D000: BLKS(0x0C09D000u);
	r13 = 0x0u;  /* 0C09D000 mov #imm,Rn */
	r10 = r8;  /* 0C09D002 mov Rm,Rn */
	r11 = 0x0u;  /* 0C09D004 mov #imm,Rn */
	UPD(0x0C09D006u, 3);
L_0C09D006: BLKS(0x0C09D006u);
	r5 = 0xC1D65B0u; UPD(0x0C09D008u, 1);  /* 0C09D006 mov.l @(disp,pc),Rn */
	r2 = 0x4u;  /* 0C09D008 mov #imm,Rn */
	r5 += r11;  /* 0C09D00A add Rm,Rn */
	r12 = R32(r5); UPD(0x0C09D00Eu, 3);  /* 0C09D00C mov.l @Rm,Rn */
	r9 = R32(r5 + 0x4u); UPD(0x0C09D010u, 1);  /* 0C09D00E mov.l @(disp,Rm),Rn */
	r6 = R32(r10 + 0xCu); UPD(0x0C09D012u, 1);  /* 0C09D010 mov.l @(disp,Rm),Rn */
	r5 += 0xAu;  /* 0C09D012 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r5); UPD(0x0C09D016u, 2);  /* 0C09D014 mov.w @Rm,Rn */
	IF(0x0C09D016u); ARG0(0x462Du); { s32 s_ = (s32)r2; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C09D016 shld Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C09D01Au, 2);  /* 0C09D018 mov.l @(disp,pc),Rn */
	r6 += r3;  /* 0C09D01A add Rm,Rn */
	r0 = (u32)(s32)(s16)r6;  /* 0C09D01C exts.w Rm,Rn */
	r4 = r0;  /* 0C09D01E mov Rm,Rn */
	r5 = r12;  /* 0C09D020 mov Rm,Rn */
	IF(0x0C09D022u); { u32 t_ = r8; PR = 0x0C09D026u; W32(r14 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 6); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09D026u); }  /* 0C09D022 jsr @Rn */
L_0C09D026: BLKS(0x0C09D026u);
	r1 = 0xC058030u; UPD(0x0C09D028u, 1);  /* 0C09D026 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C09D028 mov Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C09D02Cu, 2);  /* 0C09D02A mov.l @(disp,Rm),Rn */
	IF(0x0C09D02Cu); { u32 t_ = r1; PR = 0x0C09D030u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09D030u); }  /* 0C09D02C jsr @Rn */
L_0C09D030: BLKS(0x0C09D030u);
	r8 -= r0;  /* 0C09D030 sub Rm,Rn */
	r1 = r8;  /* 0C09D032 mov Rm,Rn */
	r1 += r1;  /* 0C09D034 add Rm,Rn */
	r1 += r8;  /* 0C09D036 add Rm,Rn */
	IF(0x0C09D038u); T = (s32)r1 >= 0;  /* 0C09D038 cmp/pz Rn */
	if (!T) { UPD(0x0C09D090u, 8); goto L_0C09D090; }  /* 0C09D03A bf */
L_0C09D03C: BLKS(0x0C09D03Cu);
	IF(0x0C09D03Cu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C09D03C shar Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C09D040u, 2);  /* 0C09D03E mov.l @(disp,Rm),Rn */
	IF(0x0C09D040u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C09D040 shar Rn */
	r0 = 0x10000u; UPD(0x0C09D044u, 2);  /* 0C09D042 mov.l @(disp,pc),Rn */
	r5 += r1;  /* 0C09D044 add Rm,Rn */
	r5 += r0;  /* 0C09D046 add Rm,Rn */
	r3 = 0xC058030u; UPD(0x0C09D04Au, 3);  /* 0C09D048 mov.l @(disp,pc),Rn */
	r11 += 0xCu;  /* 0C09D04A add #imm,Rn */
	W32(r14 + 0x8u, r5); UPD(0x0C09D04Eu, 2);  /* 0C09D04C mov.l Rm,@(disp,Rn) */
	r4 = R32(r14 + 0x4u); UPD(0x0C09D050u, 1);  /* 0C09D04E mov.l @(disp,Rm),Rn */
	IF(0x0C09D050u); { u32 t_ = r3; PR = 0x0C09D054u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09D054u); }  /* 0C09D050 jsr @Rn */
L_0C09D054: BLKS(0x0C09D054u);
	r7 = 0xC058060u; UPD(0x0C09D056u, 1);  /* 0C09D054 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C09D056 mov Rm,Rn */
	r12 = R32(r10 + 0x28u); UPD(0x0C09D05Au, 2);  /* 0C09D058 mov.l @(disp,Rm),Rn */
	r9 = 0x8u;  /* 0C09D05A mov #imm,Rn */
	r12 += r0;  /* 0C09D05C add Rm,Rn */
	IF(0x0C09D05Eu); { u32 t_ = r7; PR = 0x0C09D062u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09D062u); }  /* 0C09D05E jsr @Rn */
L_0C09D062: BLKS(0x0C09D062u);
	r12 += r0;  /* 0C09D062 add Rm,Rn */
	r6 = 0x86u; UPD(0x0C09D066u, 2);  /* 0C09D064 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C09D066 mov Rm,Rn */
	IF(0x0C09D068u); r7 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C09D06Au, 2);  /* 0C09D068 mov.w @(r0,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09D06A add #imm,Rn */
	r6 = r12;  /* 0C09D06C mov Rm,Rn */
	r8 = 0x28000u; UPD(0x0C09D070u, 3);  /* 0C09D06E mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C09D070 mov #imm,Rn */
	r12 = 0xC061D80u; UPD(0x0C09D074u, 2);  /* 0C09D072 mov.l @(disp,pc),Rn */
	W32(r15, r8); UPD(0x0C09D076u, 1);  /* 0C09D074 mov.l Rm,@Rn */
	IF(0x0C09D076u); { u32 t_ = r12; PR = 0x0C09D07Au; r5 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C061D80, 0x0C061D80u, 0x0C09D07Au); }  /* 0C09D076 jsr @Rn */
L_0C09D07A: BLKS(0x0C09D07Au);
	r4 = r13;  /* 0C09D07A mov Rm,Rn */
	r4 += 0x1u;  /* 0C09D07C add #imm,Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C09D07E exts.w Rm,Rn */
	T = (s32)r13 > (s32)r9;  /* 0C09D080 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09D006u, 7); goto L_0C09D006; } UPD(0x0C09D086u, 1); goto L_0C09D086; }  /* 0C09D082 bf/s */
L_0C09D086: BLKS(0x0C09D086u);
	r13 = 0xFFFFDCF2u; UPD(0x0C09D088u, 1);  /* 0C09D086 mov.w @(disp,pc),Rn */
	IF(0x0C09D088u); { u32 tv_ = (r13 + 0x0C09D08Cu); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D088 braf Rn */
L_0C09D090: BLKS(0x0C09D090u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C09D03Cu, 3); goto L_0C09D03C; }  /* 0C09D090 bra */
}

void f_0C09D0A0(sh3_t *c)
{
	LOCALS;
	goto L_0C09D0A0;
L_0C09C646: BLKS(0x0C09C646u);
	r11 = 0xFFFFEE1Cu; UPD(0x0C09C648u, 1);  /* 0C09C646 mov.w @(disp,pc),Rn */
	IF(0x0C09C648u); { u32 tv_ = (r11 + 0x0C09C64Cu); u32 t_ = PHYS(tv_); r1 += r2; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C648 braf Rn */
L_0C09D086: BLKS(0x0C09D086u);
	r13 = 0xFFFFDCF2u; UPD(0x0C09D088u, 1);  /* 0C09D086 mov.w @(disp,pc),Rn */
	IF(0x0C09D088u); { u32 tv_ = (r13 + 0x0C09D08Cu); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D088 braf Rn */
L_0C09D0A0: BLKS(0x0C09D0A0u);
	r8 = 0xC0A0490u; UPD(0x0C09D0A2u, 1);  /* 0C09D0A0 mov.l @(disp,pc),Rn */
	IF(0x0C09D0A2u); { u32 t_ = r8; PR = 0x0C09D0A6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C09D0A6u); }  /* 0C09D0A2 jsr @Rn */
L_0C09D0A6: BLKS(0x0C09D0A6u);
	IF(0x0C09D0A6u); T = (s32)r0 >= 0;  /* 0C09D0A6 cmp/pz Rn */
	{ u32 c_ = T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09D0B4u, 4); goto L_0C09D0B4; } goto L_0C09D0AC; }  /* 0C09D0A8 bt/s */
L_0C09D0AC: BLKS(0x0C09D0ACu);
	r1 = 0xFFFFE8DEu; UPD(0x0C09D0AEu, 2);  /* 0C09D0AC mov.w @(disp,pc),Rn */
	IF(0x0C09D0AEu); { u32 tv_ = (r1 + 0x0C09D0B2u); u32 t_ = PHYS(tv_); IF(0x0C09D0B0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D0AE braf Rn */
L_0C09D0B4: BLKS(0x0C09D0B4u);
	r1 = 0xB4u; UPD(0x0C09D0B6u, 1);  /* 0C09D0B4 mov.w @(disp,pc),Rn */
	IF(0x0C09D0B6u); MACL = r0 * r1;  /* 0C09D0B6 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09D0BAu, 3);  /* 0C09D0B8 mov.l @(disp,pc),Rn */
	IF(0x0C09D0BAu); r7 = MACL;  /* 0C09D0BA sts macl,Rn */
	r7 += r2;  /* 0C09D0BC add Rm,Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C09D0C0u, 3);  /* 0C09D0BE mov.l @(disp,Rm),Rn */
	T = r0 == 0x18u;  /* 0C09D0C0 cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C09D0C4u); MACL = r11 * r1; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09D0CAu, 5); goto L_0C09D0CA; } goto L_0C09D0C6; }  /* 0C09D0C2 bt/s */
L_0C09D0C6: BLKS(0x0C09D0C6u);
	{ IF(0x0C09D0C8u); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C09C646u, 5); goto L_0C09C646; }  /* 0C09D0C6 bra */
L_0C09D0CA: BLKS(0x0C09D0CAu);
	IF(0x0C09D0CAu); MACL = r11 * r1;  /* 0C09D0CA mul.l Rm,Rn */
	r8 = R32(r7 + 0x24u); UPD(0x0C09D0CEu, 3);  /* 0C09D0CC mov.l @(disp,Rm),Rn */
	r4 = R32(r7 + 0x28u); UPD(0x0C09D0D0u, 1);  /* 0C09D0CE mov.l @(disp,Rm),Rn */
	IF(0x0C09D0D0u); r0 = MACL;  /* 0C09D0D0 sts macl,Rn */
	r5 = 0xA8u; UPD(0x0C09D0D4u, 2);  /* 0C09D0D2 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C09D0D4 add Rm,Rn */
	r7 += r5;  /* 0C09D0D6 add Rm,Rn */
	r1 = 0xAFu; UPD(0x0C09D0DAu, 3);  /* 0C09D0D8 mov.w @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C09D0DA add #imm,Rn */
	r3 = R32(r0 + 0x2Cu); UPD(0x0C09D0DEu, 2);  /* 0C09D0DC mov.l @(disp,Rm),Rn */
	r10 = r0;  /* 0C09D0DE mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C09D0E2u, 2);  /* 0C09D0E0 mov.b @Rm,Rn */
	r10 += r5;  /* 0C09D0E2 add Rm,Rn */
	r12 = R32(r0 + 0x30u); UPD(0x0C09D0E6u, 2);  /* 0C09D0E4 mov.l @(disp,Rm),Rn */
	r8 += r3;  /* 0C09D0E6 add Rm,Rn */
	IF(0x0C09D0E8u); r9 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C09D0EAu, 2);  /* 0C09D0E8 mov.b @(r0,Rm),Rn */
	r4 += r12;  /* 0C09D0EA add Rm,Rn */
	r10 += 0x1u;  /* 0C09D0EC add #imm,Rn */
	r6 += r9;  /* 0C09D0EE add Rm,Rn */
	r2 = R32(r0 + 0xCu); UPD(0x0C09D0F2u, 4);  /* 0C09D0F0 mov.l @(disp,Rm),Rn */
	r3 = 0xFu;  /* 0C09D0F2 mov #imm,Rn */
	W32(r0 + 0x24u, r8); UPD(0x0C09D0F6u, 2);  /* 0C09D0F4 mov.l Rm,@(disp,Rn) */
	T = r2 > r3;  /* 0C09D0F6 cmp/hi Rm,Rn */
	W32(r0 + 0x28u, r4); UPD(0x0C09D0FAu, 2);  /* 0C09D0F8 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W8(r10, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09D086u, 3); goto L_0C09D086; } UPD(0x0C09D0FEu, 1); goto L_0C09D0FE; }  /* 0C09D0FA bt/s */
L_0C09D0FE: BLKS(0x0C09D0FEu);
	r0 = 0xC09D148u;  /* 0C09D0FE mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09D100 add Rm,Rn */
	IF(0x0C09D102u); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09D104u, 3);  /* 0C09D102 mov.w @(r0,Rm),Rn */
	IF(0x0C09D104u); { u32 tv_ = (r7 + 0x0C09D108u); u32 t_ = PHYS(tv_); IF(0x0C09D106u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D104 braf Rn */
}

void f_0C09D170(sh3_t *c)
{
	LOCALS;
	goto L_0C09D170;
L_0C09CAF4: BLKS(0x0C09CAF4u);
	r9 = 0xB4u; UPD(0x0C09CAF6u, 1);  /* 0C09CAF4 mov.w @(disp,pc),Rn */
	IF(0x0C09CAF6u); MACL = r11 * r9;  /* 0C09CAF6 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C09CAFAu, 3);  /* 0C09CAF8 mov.l @(disp,pc),Rn */
	IF(0x0C09CAFAu); r3 = MACL;  /* 0C09CAFA sts macl,Rn */
	r2 = 0x98u; UPD(0x0C09CAFEu, 2);  /* 0C09CAFC mov.w @(disp,pc),Rn */
	r3 += r10;  /* 0C09CAFE add Rm,Rn */
	r2 += r3;  /* 0C09CB00 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C09CB04u, 3);  /* 0C09CB02 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09CB04 add #imm,Rn */
	W8(r2, r0); UPD(0x0C09CB08u, 2);  /* 0C09CB06 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09CB08 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09CB0A tst Rm,Rn */
	if (!T) { UPD(0x0C09CB36u, 5); goto L_0C09CB36; }  /* 0C09CB0C bf */
L_0C09CB0E: BLKS(0x0C09CB0Eu);
	r1 = R32(r3 + 0xCu); UPD(0x0C09CB10u, 1);  /* 0C09CB0E mov.l @(disp,Rm),Rn */
	r0 = 0x88u; UPD(0x0C09CB12u, 1);  /* 0C09CB10 mov.w @(disp,pc),Rn */
	IF(0x0C09CB12u); r5 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C09CB14u, 1);  /* 0C09CB12 mov.w @(r0,Rm),Rn */
	r4 = 0xFFFFE888u; UPD(0x0C09CB16u, 1);  /* 0C09CB14 mov.w @(disp,pc),Rn */
	IF(0x0C09CB16u); { u32 tv_ = (r4 + 0x0C09CB1Au); u32 t_ = PHYS(tv_); r1 += r5; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CB16 braf Rn */
L_0C09CB20: BLKS(0x0C09CB20u);
	r0 = 0xC0A03B0u; UPD(0x0C09CB22u, 1);  /* 0C09CB20 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C09CB22 mov #imm,Rn */
	W32(r2 + 0x8u, r1); UPD(0x0C09CB26u, 2);  /* 0C09CB24 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C09CB26 mov Rm,Rn */
	IF(0x0C09CB28u); { u32 t_ = r0; PR = 0x0C09CB2Cu; W32(r2 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C09CB2Cu); }  /* 0C09CB28 jsr @Rn */
L_0C09CB2C: BLKS(0x0C09CB2Cu);
	IF(0x0C09CB2Cu); MACL = r13 * r10;  /* 0C09CB2C mul.l Rm,Rn */
	r0 = 0x9Au; UPD(0x0C09CB30u, 3);  /* 0C09CB2E mov.w @(disp,pc),Rn */
	IF(0x0C09CB30u); r13 = MACL;  /* 0C09CB30 sts macl,Rn */
	r13 += r9;  /* 0C09CB32 add Rm,Rn */
	IF(0x0C09CB34u); W8(r0 + r13, r12); UPD(0x0C09CB36u, 3);  /* 0C09CB34 mov.b Rm,@(r0,Rn) */
L_0C09CB36: BLKS(0x0C09CB36u);
	r13 = 0xFFFFE242u; UPD(0x0C09CB38u, 1);  /* 0C09CB36 mov.w @(disp,pc),Rn */
	IF(0x0C09CB38u); { u32 tv_ = (r13 + 0x0C09CB3Cu); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CB38 braf Rn */
L_0C09D170: BLKS(0x0C09D170u);
	r10 = 0xB4u; UPD(0x0C09D172u, 1);  /* 0C09D170 mov.w @(disp,pc),Rn */
	IF(0x0C09D172u); MACL = r11 * r10;  /* 0C09D172 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C09D176u, 3);  /* 0C09D174 mov.l @(disp,pc),Rn */
	IF(0x0C09D176u); r2 = MACL;  /* 0C09D176 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C09D17Au, 2);  /* 0C09D178 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C09D17A add Rm,Rn */
	IF(0x0C09D17Cu); r6 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09D17Eu, 2);  /* 0C09D17C mov.w @(r0,Rm),Rn */
	IF(0x0C09D17Eu); T = (s32)r6 >= 0;  /* 0C09D17E cmp/pz Rn */
	if (!T) { UPD(0x0C09D186u, 4); goto L_0C09D186; }  /* 0C09D180 bf */
L_0C09D182: BLKS(0x0C09D182u);
	{ IF(0x0C09D184u); ; /* slot nop */ UPD(0x0C09CAF4u, 3); goto L_0C09CAF4; }  /* 0C09D182 bra */
L_0C09D186: BLKS(0x0C09D186u);
	{ r1 = 0x31u; /* slot mov #imm,Rn */ UPD(0x0C09CB20u, 3); goto L_0C09CB20; }  /* 0C09D186 bra */
}

void f_0C09D190(sh3_t *c)
{
	LOCALS;
	goto L_0C09D190;
L_0C09C3BC: BLKS(0x0C09C3BCu);
	IF(0x0C09C3BCu); W16(r0 + r2, r1); UPD(0x0C09C3BEu, 1);  /* 0C09C3BC mov.w Rm,@(r0,Rn) */
	r13 = 0xFFFFE9BAu; UPD(0x0C09C3C0u, 1);  /* 0C09C3BE mov.w @(disp,pc),Rn */
	IF(0x0C09C3C0u); { u32 tv_ = (r13 + 0x0C09C3C4u); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C3C0 braf Rn */
L_0C09CB92: BLKS(0x0C09CB92u);
	r7 += 0xFFFFFFFFu;  /* 0C09CB92 add #imm,Rn */
	r1 = 0xFFFFE20Eu; UPD(0x0C09CB96u, 2);  /* 0C09CB94 mov.w @(disp,pc),Rn */
	IF(0x0C09CB96u); { u32 tv_ = (r1 + 0x0C09CB9Au); u32 t_ = PHYS(tv_); W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CB96 braf Rn */
L_0C09D190: BLKS(0x0C09D190u);
	r8 = 0xB4u; UPD(0x0C09D192u, 1);  /* 0C09D190 mov.w @(disp,pc),Rn */
	IF(0x0C09D192u); MACL = r11 * r8;  /* 0C09D192 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C09D196u, 3);  /* 0C09D194 mov.l @(disp,pc),Rn */
	IF(0x0C09D196u); r8 = MACL;  /* 0C09D196 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C09D19Au, 2);  /* 0C09D198 mov.w @(disp,pc),Rn */
	r8 += r3;  /* 0C09D19A add Rm,Rn */
	IF(0x0C09D19Cu); r4 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09D19Eu, 2);  /* 0C09D19C mov.w @(r0,Rm),Rn */
	IF(0x0C09D19Eu); T = (s32)r4 >= 0;  /* 0C09D19E cmp/pz Rn */
	{ u32 c_ = T; r6 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09D1A8u, 4); goto L_0C09D1A8; } goto L_0C09D1A4; }  /* 0C09D1A0 bt/s */
L_0C09D1A4: BLKS(0x0C09D1A4u);
	{ r7 = R32(r8 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C09CB92u, 4); goto L_0C09CB92; }  /* 0C09D1A4 bra */
L_0C09D1A8: BLKS(0x0C09D1A8u);
	r4 = r11;  /* 0C09D1A8 mov Rm,Rn */
	r13 = R32(r8 + 0x8u); UPD(0x0C09D1ACu, 2);  /* 0C09D1AA mov.l @(disp,Rm),Rn */
	r11 = 0xC0A03B0u; UPD(0x0C09D1AEu, 1);  /* 0C09D1AC mov.l @(disp,pc),Rn */
	r13 += 0x1u;  /* 0C09D1AE add #imm,Rn */
	W32(r8 + 0x8u, r13); UPD(0x0C09D1B2u, 2);  /* 0C09D1B0 mov.l Rm,@(disp,Rn) */
	IF(0x0C09D1B2u); { u32 t_ = r11; PR = 0x0C09D1B6u; W32(r8 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C09D1B6u); }  /* 0C09D1B2 jsr @Rn */
L_0C09D1B6: BLKS(0x0C09D1B6u);
	r2 = 0x86u; UPD(0x0C09D1B8u, 1);  /* 0C09D1B6 mov.w @(disp,pc),Rn */
	r1 = 0x100u; UPD(0x0C09D1BAu, 1);  /* 0C09D1B8 mov.w @(disp,pc),Rn */
	{ r0 = r8; /* slot mov Rm,Rn */ UPD(0x0C09C3BCu, 3); goto L_0C09C3BC; }  /* 0C09D1BA bra */
}

void f_0C09D1C0(sh3_t *c)
{
	LOCALS;
	goto L_0C09D1C0;
L_0C09C702: BLKS(0x0C09C702u);
	r11 = 0xFFFFED60u; UPD(0x0C09C704u, 1);  /* 0C09C702 mov.w @(disp,pc),Rn */
	IF(0x0C09C704u); { u32 tv_ = (r11 + 0x0C09C708u); u32 t_ = PHYS(tv_); r1 += r6; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C704 braf Rn */
L_0C09D1C0: BLKS(0x0C09D1C0u);
	r8 = 0xC0A0490u; UPD(0x0C09D1C2u, 1);  /* 0C09D1C0 mov.l @(disp,pc),Rn */
	IF(0x0C09D1C2u); { u32 t_ = r8; PR = 0x0C09D1C6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C09D1C6u); }  /* 0C09D1C2 jsr @Rn */
L_0C09D1C6: BLKS(0x0C09D1C6u);
	IF(0x0C09D1C6u); T = (s32)r0 >= 0;  /* 0C09D1C6 cmp/pz Rn */
	if (T) { UPD(0x0C09D1D2u, 4); goto L_0C09D1D2; }  /* 0C09D1C8 bt */
L_0C09D1CA: BLKS(0x0C09D1CAu);
	r1 = 0xFFFFE7C0u; UPD(0x0C09D1CCu, 1);  /* 0C09D1CA mov.w @(disp,pc),Rn */
	IF(0x0C09D1CCu); { u32 tv_ = (r1 + 0x0C09D1D0u); u32 t_ = PHYS(tv_); IF(0x0C09D1CEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D1CC braf Rn */
L_0C09D1D2: BLKS(0x0C09D1D2u);
	r7 = 0xB4u; UPD(0x0C09D1D4u, 1);  /* 0C09D1D2 mov.w @(disp,pc),Rn */
	IF(0x0C09D1D4u); MACL = r0 * r7;  /* 0C09D1D4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09D1D8u, 3);  /* 0C09D1D6 mov.l @(disp,pc),Rn */
	IF(0x0C09D1D8u); r8 = MACL;  /* 0C09D1D8 sts macl,Rn */
	r8 += r6;  /* 0C09D1DA add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C09D1DEu, 3);  /* 0C09D1DC mov.l @(disp,Rm),Rn */
	T = r0 == 0x18u;  /* 0C09D1DE cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C09D1E2u); MACL = r11 * r7; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09D1E8u, 5); goto L_0C09D1E8; } goto L_0C09D1E4; }  /* 0C09D1E0 bt/s */
L_0C09D1E4: BLKS(0x0C09D1E4u);
	{ IF(0x0C09D1E6u); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C09C702u, 5); goto L_0C09C702; }  /* 0C09D1E4 bra */
L_0C09D1E8: BLKS(0x0C09D1E8u);
	IF(0x0C09D1E8u); MACL = r11 * r7;  /* 0C09D1E8 mul.l Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C09D1ECu, 3);  /* 0C09D1EA mov.l @(disp,Rm),Rn */
	IF(0x0C09D1ECu); r9 = MACL;  /* 0C09D1EC sts macl,Rn */
	r9 += r6;  /* 0C09D1EE add Rm,Rn */
	r10 = R32(r9 + 0x2Cu); UPD(0x0C09D1F2u, 3);  /* 0C09D1F0 mov.l @(disp,Rm),Rn */
	r3 = R32(r8 + 0x28u); UPD(0x0C09D1F4u, 1);  /* 0C09D1F2 mov.l @(disp,Rm),Rn */
	r5 += r10;  /* 0C09D1F4 add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C09D1F8u, 2);  /* 0C09D1F6 mov.w @(disp,pc),Rn */
	r10 = r9;  /* 0C09D1F8 mov Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C09D1FCu, 2);  /* 0C09D1FA mov.l @(disp,Rm),Rn */
	r10 += r0;  /* 0C09D1FC add Rm,Rn */
	W32(r9 + 0x24u, r5); UPD(0x0C09D200u, 2);  /* 0C09D1FE mov.l Rm,@(disp,Rn) */
	r3 += r1;  /* 0C09D200 add Rm,Rn */
	W32(r9 + 0x28u, r3); UPD(0x0C09D204u, 2);  /* 0C09D202 mov.l Rm,@(disp,Rn) */
	r0 += r8;  /* 0C09D204 add Rm,Rn */
	r5 = r9;  /* 0C09D206 mov Rm,Rn */
	r0 += 0x1u;  /* 0C09D208 add #imm,Rn */
	r5 += 0x7Eu;  /* 0C09D20A add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r0); UPD(0x0C09D20Eu, 5);  /* 0C09D20C mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C09D20E add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r5); UPD(0x0C09D212u, 2);  /* 0C09D210 mov.w @Rm,Rn */
	r0 = r9;  /* 0C09D212 mov Rm,Rn */
	r12 = 0xAFu; UPD(0x0C09D216u, 2);  /* 0C09D214 mov.w @(disp,pc),Rn */
	IF(0x0C09D216u); MACL = r3 * r7;  /* 0C09D216 mul.l Rm,Rn */
	IF(0x0C09D218u); r4 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C09D21Au, 3);  /* 0C09D218 mov.b @(r0,Rm),Rn */
	IF(0x0C09D21Au); r0 = MACL;  /* 0C09D21A sts macl,Rn */
	r0 += r6;  /* 0C09D21C add Rm,Rn */
	r6 = 0xA2u; UPD(0x0C09D220u, 3);  /* 0C09D21E mov.w @(disp,pc),Rn */
	r13 += r4;  /* 0C09D220 add Rm,Rn */
	IF(0x0C09D222u); r0 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09D224u, 2);  /* 0C09D222 mov.b @(r0,Rm),Rn */
	T = r0 == 0x3u;  /* 0C09D224 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r10, r13); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09D290u, 4); goto L_0C09D290; } UPD(0x0C09D22Au, 1); goto L_0C09D22A; }  /* 0C09D226 bt/s */
L_0C09D22A: BLKS(0x0C09D22Au);
	r3 = 0x98u; UPD(0x0C09D22Cu, 1);  /* 0C09D22A mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C09D22C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C09D230u, 2);  /* 0C09D22E mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09D230 add #imm,Rn */
	W8(r3, r0); UPD(0x0C09D234u, 2);  /* 0C09D232 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09D234 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09D236 tst Rm,Rn */
	if (!T) { UPD(0x0C09D250u, 5); goto L_0C09D250; }  /* 0C09D238 bf */
L_0C09D23A: BLKS(0x0C09D23Au);
	r0 = R32(r9 + 0xCu); UPD(0x0C09D23Cu, 1);  /* 0C09D23A mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C09D23C cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09D270u, 4); goto L_0C09D270; } goto L_0C09D242; }  /* 0C09D23E bt/s */
L_0C09D242: BLKS(0x0C09D242u);
	T = (s32)r0 > (s32)r2;  /* 0C09D242 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09D260u, 5); goto L_0C09D260; }  /* 0C09D244 bf */
L_0C09D246: BLKS(0x0C09D246u);
	r0 += 0xFFFFFFFFu;  /* 0C09D246 add #imm,Rn */
	UPD(0x0C09D248u, 1);
L_0C09D248: BLKS(0x0C09D248u);
	r6 = 0xC0A0380u; UPD(0x0C09D24Au, 1);  /* 0C09D248 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C09D24A mov Rm,Rn */
	IF(0x0C09D24Cu); { u32 t_ = r6; PR = 0x0C09D250u; W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09D250u); }  /* 0C09D24C jsr @Rn */
L_0C09D250: BLKS(0x0C09D250u);
	r13 = 0xFFFFDB28u; UPD(0x0C09D252u, 1);  /* 0C09D250 mov.w @(disp,pc),Rn */
	IF(0x0C09D252u); { u32 tv_ = (r13 + 0x0C09D256u); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D252 braf Rn */
L_0C09D260: BLKS(0x0C09D260u);
	{ r0 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09D248u, 3); goto L_0C09D248; }  /* 0C09D260 bra */
L_0C09D270: BLKS(0x0C09D270u);
	r5 = R32(r9 + 0x8u); UPD(0x0C09D272u, 1);  /* 0C09D270 mov.l @(disp,Rm),Rn */
	r7 = 0xFFFFFFFFu;  /* 0C09D272 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09D276u, 2);  /* 0C09D274 mov.w @(disp,pc),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C09D276 add #imm,Rn */
	IF(0x0C09D278u); W16(r0 + r9, r7); UPD(0x0C09D27Au, 2);  /* 0C09D278 mov.w Rm,@(r0,Rn) */
	r1 = 0xFu;  /* 0C09D27A mov #imm,Rn */
	W32(r9 + 0x8u, r5); UPD(0x0C09D27Eu, 2);  /* 0C09D27C mov.l Rm,@(disp,Rn) */
	r4 = 0xFFFFEA62u; UPD(0x0C09D280u, 1);  /* 0C09D27E mov.w @(disp,pc),Rn */
	IF(0x0C09D280u); { u32 tv_ = (r4 + 0x0C09D284u); u32 t_ = PHYS(tv_); W32(r9 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D280 braf Rn */
L_0C09D290: BLKS(0x0C09D290u);
	r10 = 0xC058130u; UPD(0x0C09D292u, 1);  /* 0C09D290 mov.l @(disp,pc),Rn */
	r12 = 0xC057430u; UPD(0x0C09D294u, 1);  /* 0C09D292 mov.l @(disp,pc),Rn */
	IF(0x0C09D294u); { u32 t_ = r10; PR = 0x0C09D298u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C09D298u); }  /* 0C09D294 jsr @Rn */
L_0C09D298: BLKS(0x0C09D298u);
	r10 = 0x86u; UPD(0x0C09D29Au, 1);  /* 0C09D298 mov.w @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C09D29A mov #imm,Rn */
	r4 = r11;  /* 0C09D29C mov Rm,Rn */
	IF(0x0C09D29Eu); { u32 t_ = r12; PR = 0x0C09D2A2u; r10 += r9; /* slot add Rm,Rn */ UPD(t_, 4); CALLD(t_, 0x0C09D2A2u); }  /* 0C09D29E jsr @Rn */
L_0C09D2A2: BLKS(0x0C09D2A2u);
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C09D2A4u, 1);  /* 0C09D2A2 mov.w @Rm,Rn */
	r4 = r11;  /* 0C09D2A4 mov Rm,Rn */
	r0 += 0x8u;  /* 0C09D2A6 add #imm,Rn */
	IF(0x0C09D2A8u); r0 >>= 2;  /* 0C09D2A8 shlr2 Rn */
	r13 = 0xC0A0380u; UPD(0x0C09D2ACu, 4);  /* 0C09D2AA mov.l @(disp,pc),Rn */
	IF(0x0C09D2ACu); r0 >>= 2;  /* 0C09D2AC shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C09D2AE and #imm,r0 */
	IF(0x0C09D2B0u); { u32 t_ = r13; PR = 0x0C09D2B4u; W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09D2B4u); }  /* 0C09D2B0 jsr @Rn */
L_0C09D2B4: BLKS(0x0C09D2B4u);
	r6 = 0xA6u; UPD(0x0C09D2B6u, 1);  /* 0C09D2B4 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09D2B6 mov Rm,Rn */
	IF(0x0C09D2B8u); r7 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09D2BAu, 2);  /* 0C09D2B8 mov.b @(r0,Rm),Rn */
	r4 = r11;  /* 0C09D2BA mov Rm,Rn */
	r2 = 0xC1D661Cu; UPD(0x0C09D2BEu, 2);  /* 0C09D2BC mov.l @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C09D2BE mov #imm,Rn */
	r8 = 0xC0A9E40u; UPD(0x0C09D2C2u, 2);  /* 0C09D2C0 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C09D2C2 mov Rm,Rn */
	IF(0x0C09D2C4u); { u32 t_ = r8; PR = 0x0C09D2C8u; IF(0x0C09D2C6u); r5 = (u32)(s32)(s8)R8(r0 + r7); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09D2C8u); }  /* 0C09D2C4 jsr @Rn */
L_0C09D2C8: BLKS(0x0C09D2C8u);
	T = (r0 & r0) == 0;  /* 0C09D2C8 tst Rm,Rn */
	if (T) { UPD(0x0C09D250u, 4); goto L_0C09D250; }  /* 0C09D2CA bt */
L_0C09D2CC: BLKS(0x0C09D2CCu);
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C09D2CEu, 1);  /* 0C09D2CC mov.w @Rm,Rn */
	r12 = 0xC058060u; UPD(0x0C09D2D0u, 1);  /* 0C09D2CE mov.l @(disp,pc),Rn */
	r13 = 0x80000u; UPD(0x0C09D2D2u, 1);  /* 0C09D2D0 mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C09D2D2 mov Rm,Rn */
	r5 = r13;  /* 0C09D2D4 mov Rm,Rn */
	IF(0x0C09D2D6u); { u32 t_ = r12; PR = 0x0C09D2DAu; W32(r14 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09D2DAu); }  /* 0C09D2D6 jsr @Rn */
L_0C09D2DA: BLKS(0x0C09D2DAu);
	r4 = R32(r9 + 0x24u); UPD(0x0C09D2DCu, 1);  /* 0C09D2DA mov.l @(disp,Rm),Rn */
	r5 = r13;  /* 0C09D2DC mov Rm,Rn */
	r4 += r0;  /* 0C09D2DE add Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C09D2E2u, 3);  /* 0C09D2E0 mov.l @(disp,pc),Rn */
	W32(r14 + 0x8u, r4); UPD(0x0C09D2E4u, 1);  /* 0C09D2E2 mov.l Rm,@(disp,Rn) */
	IF(0x0C09D2E4u); { u32 t_ = r8; PR = 0x0C09D2E8u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09D2E8u); }  /* 0C09D2E4 jsr @Rn */
L_0C09D2E8: BLKS(0x0C09D2E8u);
	r6 = R32(r9 + 0x28u); UPD(0x0C09D2EAu, 1);  /* 0C09D2E8 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09D2EA add #imm,Rn */
	r11 = 0x30000u; UPD(0x0C09D2EEu, 2);  /* 0C09D2EC mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09D2EE add Rm,Rn */
	r9 = 0xC1779AAu; UPD(0x0C09D2F2u, 2);  /* 0C09D2F0 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C09D2F2 mov #imm,Rn */
	W32(r15, r11); UPD(0x0C09D2F6u, 2);  /* 0C09D2F4 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C09D2F8u, 1);  /* 0C09D2F6 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14 + 0x8u); UPD(0x0C09D2FAu, 1);  /* 0C09D2F8 mov.l @(disp,Rm),Rn */
	r10 = 0xFFFFE412u; UPD(0x0C09D2FCu, 1);  /* 0C09D2FA mov.w @(disp,pc),Rn */
	IF(0x0C09D2FCu); { u32 tv_ = (r10 + 0x0C09D300u); u32 t_ = PHYS(tv_); r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D2FC braf Rn */
}

void f_0C09D350(sh3_t *c)
{
	LOCALS;
	goto L_0C09D350;
L_0C09C646: BLKS(0x0C09C646u);
	r11 = 0xFFFFEE1Cu; UPD(0x0C09C648u, 1);  /* 0C09C646 mov.w @(disp,pc),Rn */
	IF(0x0C09C648u); { u32 tv_ = (r11 + 0x0C09C64Cu); u32 t_ = PHYS(tv_); r1 += r2; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C648 braf Rn */
L_0C09D350: BLKS(0x0C09D350u);
	r12 = 0xC0A0540u; UPD(0x0C09D352u, 1);  /* 0C09D350 mov.l @(disp,pc),Rn */
	IF(0x0C09D352u); { u32 t_ = r12; PR = 0x0C09D356u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C09D356u); }  /* 0C09D352 jsr @Rn */
L_0C09D356: BLKS(0x0C09D356u);
	IF(0x0C09D356u); T = (s32)r0 >= 0;  /* 0C09D356 cmp/pz Rn */
	if (T) { UPD(0x0C09D362u, 4); goto L_0C09D362; }  /* 0C09D358 bt */
L_0C09D35A: BLKS(0x0C09D35Au);
	r0 = 0xFFFFDAB0u; UPD(0x0C09D35Cu, 1);  /* 0C09D35A mov.w @(disp,pc),Rn */
	IF(0x0C09D35Cu); { u32 tv_ = (r0 + 0x0C09D360u); u32 t_ = PHYS(tv_); IF(0x0C09D35Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D35C braf Rn */
L_0C09D362: BLKS(0x0C09D362u);
	r1 = 0xB4u; UPD(0x0C09D364u, 1);  /* 0C09D362 mov.w @(disp,pc),Rn */
	IF(0x0C09D364u); MACL = r0 * r1;  /* 0C09D364 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09D368u, 3);  /* 0C09D366 mov.l @(disp,pc),Rn */
	IF(0x0C09D368u); r7 = MACL;  /* 0C09D368 sts macl,Rn */
	r7 += r2;  /* 0C09D36A add Rm,Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C09D36Eu, 3);  /* 0C09D36C mov.l @(disp,Rm),Rn */
	T = r0 == 0x28u;  /* 0C09D36E cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C09D372u); MACL = r11 * r1; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09D378u, 5); goto L_0C09D378; } goto L_0C09D374; }  /* 0C09D370 bt/s */
L_0C09D374: BLKS(0x0C09D374u);
	{ IF(0x0C09D376u); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C09C646u, 5); goto L_0C09C646; }  /* 0C09D374 bra */
L_0C09D378: BLKS(0x0C09D378u);
	IF(0x0C09D378u); MACL = r11 * r1;  /* 0C09D378 mul.l Rm,Rn */
	r0 = 0xA8u; UPD(0x0C09D37Cu, 3);  /* 0C09D37A mov.w @(disp,pc),Rn */
	IF(0x0C09D37Cu); r6 = MACL;  /* 0C09D37C sts macl,Rn */
	r6 += r2;  /* 0C09D37E add Rm,Rn */
	r13 = r6;  /* 0C09D380 mov Rm,Rn */
	r13 += r0;  /* 0C09D382 add Rm,Rn */
	r0 += r7;  /* 0C09D384 add Rm,Rn */
	r0 += 0x1u;  /* 0C09D386 add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r0); UPD(0x0C09D38Au, 7);  /* 0C09D388 mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C09D38A add #imm,Rn */
	r8 = 0xAFu; UPD(0x0C09D38Eu, 2);  /* 0C09D38C mov.w @(disp,pc),Rn */
	r0 = r6;  /* 0C09D38E mov Rm,Rn */
	r12 = R32(r7 + 0x24u); UPD(0x0C09D392u, 2);  /* 0C09D390 mov.l @(disp,Rm),Rn */
	r5 = R32(r6 + 0x2Cu); UPD(0x0C09D394u, 1);  /* 0C09D392 mov.l @(disp,Rm),Rn */
	IF(0x0C09D394u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09D396u, 1);  /* 0C09D394 mov.b @(r0,Rm),Rn */
	r12 += r5;  /* 0C09D396 add Rm,Rn */
	r3 = 0x9Au; UPD(0x0C09D39Au, 2);  /* 0C09D398 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C09D39A mov Rm,Rn */
	r10 = R32(r7 + 0x28u); UPD(0x0C09D39Eu, 2);  /* 0C09D39C mov.l @(disp,Rm),Rn */
	r9 += r4;  /* 0C09D39E add Rm,Rn */
	r1 = R32(r6 + 0x30u); UPD(0x0C09D3A2u, 2);  /* 0C09D3A0 mov.l @(disp,Rm),Rn */
	IF(0x0C09D3A2u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09D3A4u, 1);  /* 0C09D3A2 mov.b @(r0,Rm),Rn */
	r10 += r1;  /* 0C09D3A4 add Rm,Rn */
	r2 = r5 & 0xFF;  /* 0C09D3A6 extu.b Rm,Rn */
	W32(r6 + 0x24u, r12); UPD(0x0C09D3AAu, 3);  /* 0C09D3A8 mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C09D3AA tst Rm,Rn */
	W32(r6 + 0x28u, r10); UPD(0x0C09D3AEu, 2);  /* 0C09D3AC mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W8(r13, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09D468u, 3); goto L_0C09D468; } UPD(0x0C09D3B2u, 1); goto L_0C09D3B2; }  /* 0C09D3AE bt/s */
L_0C09D3B2: BLKS(0x0C09D3B2u);
	r0 = 0x88u; UPD(0x0C09D3B4u, 1);  /* 0C09D3B2 mov.w @(disp,pc),Rn */
	r9 = 0x1u;  /* 0C09D3B4 mov #imm,Rn */
	IF(0x0C09D3B6u); W16(r0 + r6, r9); UPD(0x0C09D3B8u, 2);  /* 0C09D3B6 mov.w Rm,@(r0,Rn) */
	IF(0x0C09D3B8u); r2 <<= 2;  /* 0C09D3B8 shll2 Rn */
	r13 = 0xC1D64ACu; UPD(0x0C09D3BCu, 2);  /* 0C09D3BA mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C09D3BC mov Rm,Rn */
	r7 = 0xC0A03B0u; UPD(0x0C09D3C0u, 2);  /* 0C09D3BE mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C09D3C0 mov #imm,Rn */
	IF(0x0C09D3C2u); r3 = R32(r0 + r13); UPD(0x0C09D3C4u, 2);  /* 0C09D3C2 mov.l @(r0,Rm),Rn */
	r4 = r11;  /* 0C09D3C4 mov Rm,Rn */
	W32(r6 + 0x8u, r3); UPD(0x0C09D3C8u, 2);  /* 0C09D3C6 mov.l Rm,@(disp,Rn) */
	IF(0x0C09D3C8u); { u32 t_ = r7; PR = 0x0C09D3CCu; W32(r6 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C09D3CCu); }  /* 0C09D3C8 jsr @Rn */
L_0C09D3CC: BLKS(0x0C09D3CCu);
	r1 = 0xFFFFE05Eu; UPD(0x0C09D3CEu, 1);  /* 0C09D3CC mov.w @(disp,pc),Rn */
	IF(0x0C09D3CEu); { u32 tv_ = (r1 + 0x0C09D3D2u); u32 t_ = PHYS(tv_); r4 = 0x74u; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D3CE braf Rn */
L_0C09D468: BLKS(0x0C09D468u);
	r13 = 0xFFFFD910u; UPD(0x0C09D46Au, 1);  /* 0C09D468 mov.w @(disp,pc),Rn */
	IF(0x0C09D46Au); { u32 tv_ = (r13 + 0x0C09D46Eu); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D46A braf Rn */
}

void f_0C09D3E0(sh3_t *c)
{
	LOCALS;
	goto L_0C09D3E0;
L_0C09C702: BLKS(0x0C09C702u);
	r11 = 0xFFFFED60u; UPD(0x0C09C704u, 1);  /* 0C09C702 mov.w @(disp,pc),Rn */
	IF(0x0C09C704u); { u32 tv_ = (r11 + 0x0C09C708u); u32 t_ = PHYS(tv_); r1 += r6; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C704 braf Rn */
L_0C09D27E: BLKS(0x0C09D27Eu);
	r4 = 0xFFFFEA62u; UPD(0x0C09D280u, 1);  /* 0C09D27E mov.w @(disp,pc),Rn */
	IF(0x0C09D280u); { u32 tv_ = (r4 + 0x0C09D284u); u32 t_ = PHYS(tv_); W32(r9 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D280 braf Rn */
L_0C09D3E0: BLKS(0x0C09D3E0u);
	r9 = 0xC0A0490u; UPD(0x0C09D3E2u, 1);  /* 0C09D3E0 mov.l @(disp,pc),Rn */
	IF(0x0C09D3E2u); { u32 t_ = r9; PR = 0x0C09D3E6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C09D3E6u); }  /* 0C09D3E2 jsr @Rn */
L_0C09D3E6: BLKS(0x0C09D3E6u);
	IF(0x0C09D3E6u); T = (s32)r0 >= 0;  /* 0C09D3E6 cmp/pz Rn */
	if (T) { UPD(0x0C09D3F2u, 4); goto L_0C09D3F2; }  /* 0C09D3E8 bt */
L_0C09D3EA: BLKS(0x0C09D3EAu);
	r1 = 0xFFFFE5A0u; UPD(0x0C09D3ECu, 1);  /* 0C09D3EA mov.w @(disp,pc),Rn */
	IF(0x0C09D3ECu); { u32 tv_ = (r1 + 0x0C09D3F0u); u32 t_ = PHYS(tv_); IF(0x0C09D3EEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D3EC braf Rn */
L_0C09D3F2: BLKS(0x0C09D3F2u);
	r7 = 0xB4u; UPD(0x0C09D3F4u, 1);  /* 0C09D3F2 mov.w @(disp,pc),Rn */
	IF(0x0C09D3F4u); MACL = r0 * r7;  /* 0C09D3F4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09D3F8u, 3);  /* 0C09D3F6 mov.l @(disp,pc),Rn */
	IF(0x0C09D3F8u); r8 = MACL;  /* 0C09D3F8 sts macl,Rn */
	r8 += r6;  /* 0C09D3FA add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C09D3FEu, 3);  /* 0C09D3FC mov.l @(disp,Rm),Rn */
	T = r0 == 0x28u;  /* 0C09D3FE cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C09D402u); MACL = r11 * r7; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09D408u, 5); goto L_0C09D408; } goto L_0C09D404; }  /* 0C09D400 bt/s */
L_0C09D404: BLKS(0x0C09D404u);
	{ IF(0x0C09D406u); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C09C702u, 5); goto L_0C09C702; }  /* 0C09D404 bra */
L_0C09D408: BLKS(0x0C09D408u);
	IF(0x0C09D408u); MACL = r11 * r7;  /* 0C09D408 mul.l Rm,Rn */
	r3 = R32(r8 + 0x24u); UPD(0x0C09D40Cu, 3);  /* 0C09D40A mov.l @(disp,Rm),Rn */
	IF(0x0C09D40Cu); r9 = MACL;  /* 0C09D40C sts macl,Rn */
	r9 += r6;  /* 0C09D40E add Rm,Rn */
	r4 = R32(r9 + 0x2Cu); UPD(0x0C09D412u, 3);  /* 0C09D410 mov.l @(disp,Rm),Rn */
	r0 = 0xA8u; UPD(0x0C09D414u, 1);  /* 0C09D412 mov.w @(disp,pc),Rn */
	r3 += r4;  /* 0C09D414 add Rm,Rn */
	r4 = r9;  /* 0C09D416 mov Rm,Rn */
	r4 += r0;  /* 0C09D418 add Rm,Rn */
	r0 += r8;  /* 0C09D41A add Rm,Rn */
	r0 += 0x1u;  /* 0C09D41C add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r0); UPD(0x0C09D420u, 6);  /* 0C09D41E mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C09D420 add #imm,Rn */
	r12 = 0xAFu; UPD(0x0C09D424u, 2);  /* 0C09D422 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C09D424 mov Rm,Rn */
	IF(0x0C09D426u); r10 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C09D428u, 2);  /* 0C09D426 mov.b @(r0,Rm),Rn */
	r13 += r10;  /* 0C09D428 add Rm,Rn */
	r10 = 0x9Cu; UPD(0x0C09D42Cu, 2);  /* 0C09D42A mov.w @(disp,pc),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C09D42Eu, 1);  /* 0C09D42C mov.l @(disp,Rm),Rn */
	r10 += r9;  /* 0C09D42E add Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C09D432u, 2);  /* 0C09D430 mov.l Rm,@(disp,Rn) */
	r1 = R32(r9 + 0x30u); UPD(0x0C09D434u, 1);  /* 0C09D432 mov.l @(disp,Rm),Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C09D436u, 1);  /* 0C09D434 mov.b @Rm,Rn */
	r5 += r1;  /* 0C09D436 add Rm,Rn */
	W32(r9 + 0x28u, r5); UPD(0x0C09D43Au, 2);  /* 0C09D438 mov.l Rm,@(disp,Rn) */
	T = (r3 & r3) == 0;  /* 0C09D43A tst Rm,Rn */
	{ u32 c_ = T; W8(r4, r13); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09D444u, 4); goto L_0C09D444; } UPD(0x0C09D440u, 1); goto L_0C09D440; }  /* 0C09D43C bt/s */
L_0C09D440: BLKS(0x0C09D440u);
	{ r2 = r10; /* slot mov Rm,Rn */ UPD(0x0C09D540u, 3); goto L_0C09D540; }  /* 0C09D440 bra */
L_0C09D444: BLKS(0x0C09D444u);
	r13 = r9;  /* 0C09D444 mov Rm,Rn */
	r13 += 0x7Eu;  /* 0C09D446 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r13); UPD(0x0C09D44Au, 3);  /* 0C09D448 mov.w @Rm,Rn */
	IF(0x0C09D44Au); MACL = r2 * r7;  /* 0C09D44A mul.l Rm,Rn */
	r7 = 0xA1u; UPD(0x0C09D44Eu, 3);  /* 0C09D44C mov.w @(disp,pc),Rn */
	IF(0x0C09D44Eu); r0 = MACL;  /* 0C09D44E sts macl,Rn */
	r0 += r6;  /* 0C09D450 add Rm,Rn */
	IF(0x0C09D452u); r0 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09D454u, 3);  /* 0C09D452 mov.b @(r0,Rm),Rn */
	T = r0 == 0x1u;  /* 0C09D454 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09D4B0u, 4); goto L_0C09D4B0; }  /* 0C09D456 bt */
L_0C09D458: BLKS(0x0C09D458u);
	r3 = 0x98u; UPD(0x0C09D45Au, 1);  /* 0C09D458 mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C09D45A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C09D45Eu, 2);  /* 0C09D45C mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09D45E add #imm,Rn */
	W8(r3, r0); UPD(0x0C09D462u, 2);  /* 0C09D460 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09D462 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09D464 tst Rm,Rn */
	if (T) { UPD(0x0C09D470u, 5); goto L_0C09D470; }  /* 0C09D466 bt */
L_0C09D468: BLKS(0x0C09D468u);
	r13 = 0xFFFFD910u; UPD(0x0C09D46Au, 1);  /* 0C09D468 mov.w @(disp,pc),Rn */
	IF(0x0C09D46Au); { u32 tv_ = (r13 + 0x0C09D46Eu); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D46A braf Rn */
L_0C09D470: BLKS(0x0C09D470u);
	r0 = R32(r9 + 0xCu); UPD(0x0C09D472u, 1);  /* 0C09D470 mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C09D472 cmp/eq #imm,r0 */
	{ u32 c_ = T; r7 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09D4A0u, 4); goto L_0C09D4A0; } goto L_0C09D478; }  /* 0C09D474 bt/s */
L_0C09D478: BLKS(0x0C09D478u);
	T = (s32)r0 > (s32)r7;  /* 0C09D478 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09D490u, 5); goto L_0C09D490; }  /* 0C09D47A bf */
L_0C09D47C: BLKS(0x0C09D47Cu);
	r0 += 0xFFFFFFFFu;  /* 0C09D47C add #imm,Rn */
	r1 = 0xFFFFE4C2u; UPD(0x0C09D480u, 2);  /* 0C09D47E mov.w @(disp,pc),Rn */
	IF(0x0C09D480u); { u32 tv_ = (r1 + 0x0C09D484u); u32 t_ = PHYS(tv_); IF(0x0C09D482u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D480 braf Rn */
L_0C09D490: BLKS(0x0C09D490u);
	r1 = 0xFFFFE4B0u; UPD(0x0C09D492u, 1);  /* 0C09D490 mov.w @(disp,pc),Rn */
	IF(0x0C09D492u); { u32 tv_ = (r1 + 0x0C09D496u); u32 t_ = PHYS(tv_); r0 += 0x1u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D492 braf Rn */
L_0C09D4A0: BLKS(0x0C09D4A0u);
	r4 = R32(r9 + 0x8u); UPD(0x0C09D4A2u, 1);  /* 0C09D4A0 mov.l @(disp,Rm),Rn */
	r6 = 0xFFFFFFFFu;  /* 0C09D4A2 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09D4A6u, 2);  /* 0C09D4A4 mov.w @(disp,pc),Rn */
	r4 += 0xFFFFFFFFu;  /* 0C09D4A6 add #imm,Rn */
	IF(0x0C09D4A8u); W16(r0 + r9, r6); UPD(0x0C09D4AAu, 2);  /* 0C09D4A8 mov.w Rm,@(r0,Rn) */
	r1 = 0x17u;  /* 0C09D4AA mov #imm,Rn */
	{ W32(r9 + 0x8u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09D27Eu, 4); goto L_0C09D27E; }  /* 0C09D4AC bra */
L_0C09D4B0: BLKS(0x0C09D4B0u);
	r12 = 0xC058130u; UPD(0x0C09D4B2u, 1);  /* 0C09D4B0 mov.l @(disp,pc),Rn */
	r13 = 0xC057430u; UPD(0x0C09D4B4u, 1);  /* 0C09D4B2 mov.l @(disp,pc),Rn */
	IF(0x0C09D4B4u); { u32 t_ = r12; PR = 0x0C09D4B8u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C09D4B8u); }  /* 0C09D4B4 jsr @Rn */
L_0C09D4B8: BLKS(0x0C09D4B8u);
	r4 = r11;  /* 0C09D4B8 mov Rm,Rn */
	IF(0x0C09D4BAu); { u32 t_ = r13; PR = 0x0C09D4BEu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C09D4BEu); }  /* 0C09D4BA jsr @Rn */
L_0C09D4BE: BLKS(0x0C09D4BEu);
	r4 = 0x86u; UPD(0x0C09D4C0u, 1);  /* 0C09D4BE mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C09D4C0 mov Rm,Rn */
	IF(0x0C09D4C2u); r5 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C09D4C4u, 2);  /* 0C09D4C2 mov.w @(r0,Rm),Rn */
	r3 = 0x1Fu;  /* 0C09D4C4 mov #imm,Rn */
	r5 += 0x8u;  /* 0C09D4C6 add #imm,Rn */
	r0 = 0xC0A0380u; UPD(0x0C09D4CAu, 3);  /* 0C09D4C8 mov.l @(disp,pc),Rn */
	IF(0x0C09D4CAu); r5 >>= 2;  /* 0C09D4CA shlr2 Rn */
	IF(0x0C09D4CCu); r5 >>= 2;  /* 0C09D4CC shlr2 Rn */
	r5 &= r3;  /* 0C09D4CE and Rm,Rn */
	W32(r9 + 0xCu, r5); UPD(0x0C09D4D2u, 4);  /* 0C09D4D0 mov.l Rm,@(disp,Rn) */
	r12 = 0xA5u; UPD(0x0C09D4D4u, 1);  /* 0C09D4D2 mov.w @(disp,pc),Rn */
	IF(0x0C09D4D4u); { u32 t_ = r0; PR = 0x0C09D4D8u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09D4D8u); }  /* 0C09D4D4 jsr @Rn */
L_0C09D4D8: BLKS(0x0C09D4D8u);
	r0 = r8;  /* 0C09D4D8 mov Rm,Rn */
	IF(0x0C09D4DAu); r6 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C09D4DCu, 2);  /* 0C09D4DA mov.b @(r0,Rm),Rn */
	r4 = r11;  /* 0C09D4DC mov Rm,Rn */
	r9 = 0xC1D64CCu; UPD(0x0C09D4E0u, 2);  /* 0C09D4DE mov.l @(disp,pc),Rn */
	r8 = 0xC0A9E40u; UPD(0x0C09D4E2u, 1);  /* 0C09D4E0 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C09D4E2 mov Rm,Rn */
	IF(0x0C09D4E4u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09D4E6u, 2);  /* 0C09D4E4 mov.b @(r0,Rm),Rn */
	IF(0x0C09D4E6u); { u32 t_ = r8; PR = 0x0C09D4EAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09D4EAu); }  /* 0C09D4E6 jsr @Rn */
L_0C09D4EA: BLKS(0x0C09D4EAu);
	T = (r0 & r0) == 0;  /* 0C09D4EA tst Rm,Rn */
	if (T) { UPD(0x0C09D4F2u, 4); goto L_0C09D4F2; }  /* 0C09D4EC bt */
L_0C09D4EE: BLKS(0x0C09D4EEu);
	r11 = 0x4u;  /* 0C09D4EE mov #imm,Rn */
	W8(r10, r11); UPD(0x0C09D4F2u, 2);  /* 0C09D4F0 mov.b Rm,@Rn */
L_0C09D4F2: BLKS(0x0C09D4F2u);
	r13 = 0xFFFFD886u; UPD(0x0C09D4F4u, 1);  /* 0C09D4F2 mov.w @(disp,pc),Rn */
	IF(0x0C09D4F4u); { u32 tv_ = (r13 + 0x0C09D4F8u); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D4F4 braf Rn */
L_0C09D540: BLKS(0x0C09D540u);
	r2 += 0x1u;  /* 0C09D540 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C09D544u, 2);  /* 0C09D542 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C09D544 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C09D546 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C09D548 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09D4F2u, 6); goto L_0C09D4F2; } UPD(0x0C09D54Eu, 1); goto L_0C09D54E; }  /* 0C09D54A bf/s */
L_0C09D54E: BLKS(0x0C09D54Eu);
	r0 = r3;  /* 0C09D54E mov Rm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C09D550 add #imm,Rn */
	W8(r10, r0); UPD(0x0C09D554u, 3);  /* 0C09D552 mov.b Rm,@Rn */
	r5 = 0x0u;  /* 0C09D554 mov #imm,Rn */
	W8(r2, r5); UPD(0x0C09D558u, 2);  /* 0C09D556 mov.b Rm,@Rn */
	r0 = r9;  /* 0C09D558 mov Rm,Rn */
	r6 = 0x86u; UPD(0x0C09D55Cu, 2);  /* 0C09D55A mov.w @(disp,pc),Rn */
	r13 = 0xC058060u; UPD(0x0C09D55Eu, 1);  /* 0C09D55C mov.l @(disp,pc),Rn */
	IF(0x0C09D55Eu); r2 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C09D560u, 1);  /* 0C09D55E mov.w @(r0,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C09D562u, 1);  /* 0C09D560 mov.l @(disp,pc),Rn */
	r4 = r2;  /* 0C09D562 mov Rm,Rn */
	IF(0x0C09D564u); { u32 t_ = r13; PR = 0x0C09D568u; W32(r14 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09D568u); }  /* 0C09D564 jsr @Rn */
L_0C09D568: BLKS(0x0C09D568u);
	r7 = R32(r9 + 0x24u); UPD(0x0C09D56Au, 1);  /* 0C09D568 mov.l @(disp,Rm),Rn */
	r8 = 0xC058030u; UPD(0x0C09D56Cu, 1);  /* 0C09D56A mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C09D56C add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C09D570u, 2);  /* 0C09D56E mov.l @(disp,Rm),Rn */
	r5 = 0x66666u; UPD(0x0C09D572u, 1);  /* 0C09D570 mov.l @(disp,pc),Rn */
	IF(0x0C09D572u); { u32 t_ = r8; PR = 0x0C09D576u; W32(r14 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09D576u); }  /* 0C09D572 jsr @Rn */
L_0C09D576: BLKS(0x0C09D576u);
	r6 = R32(r9 + 0x28u); UPD(0x0C09D578u, 1);  /* 0C09D576 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09D578 add #imm,Rn */
	r10 = 0x20000u; UPD(0x0C09D57Cu, 2);  /* 0C09D57A mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09D57C add Rm,Rn */
	W32(r15, r10); UPD(0x0C09D580u, 2);  /* 0C09D57E mov.l Rm,@Rn */
	r4 = 0x0u;  /* 0C09D580 mov #imm,Rn */
	r8 = 0xC7C17D0u; UPD(0x0C09D584u, 2);  /* 0C09D582 mov.l @(disp,pc),Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C09D586u, 1);  /* 0C09D584 mov.l @(disp,Rm),Rn */
	IF(0x0C09D586u); { u32 t_ = r8; PR = 0x0C09D58Au; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C17D0, 0x0C7C17D0u, 0x0C09D58Au); }  /* 0C09D586 jsr @Rn */
L_0C09D58A: BLKS(0x0C09D58Au);
	r15 += 0x4u;  /* 0C09D58A add #imm,Rn */
	r13 = 0xFFFFD7ECu; UPD(0x0C09D58Eu, 2);  /* 0C09D58C mov.w @(disp,pc),Rn */
	IF(0x0C09D58Eu); { u32 tv_ = (r13 + 0x0C09D592u); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D58E braf Rn */
}

void f_0C09D5A0(sh3_t *c)
{
	LOCALS;
	goto L_0C09D5A0;
L_0C09BCE6: BLKS(0x0C09BCE6u);
	r1 = 0xC0A03B0u; UPD(0x0C09BCE8u, 1);  /* 0C09BCE6 mov.l @(disp,pc),Rn */
	r13 = 0xFFFFF006u; UPD(0x0C09BCEAu, 1);  /* 0C09BCE8 mov.w @(disp,pc),Rn */
	IF(0x0C09BCEAu); { u32 tv_ = (r13 + 0x0C09BCEEu); u32 t_ = PHYS(tv_); r4 = r11; /* slot mov Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09BCEA braf Rn */
L_0C09C7AE: BLKS(0x0C09C7AEu);
	{ W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09BCE6u, 3); goto L_0C09BCE6; }  /* 0C09C7AE bra */
L_0C09C8D2: BLKS(0x0C09C8D2u);
	r11 = 0xFFFFEB90u; UPD(0x0C09C8D4u, 1);  /* 0C09C8D2 mov.w @(disp,pc),Rn */
	IF(0x0C09C8D4u); { u32 tv_ = (r11 + 0x0C09C8D8u); u32 t_ = PHYS(tv_); r1 += r5; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C8D4 braf Rn */
L_0C09C94E: BLKS(0x0C09C94Eu);
	r4 = 0xFFFFE454u; UPD(0x0C09C950u, 1);  /* 0C09C94E mov.w @(disp,pc),Rn */
	IF(0x0C09C950u); { u32 tv_ = (r4 + 0x0C09C954u); u32 t_ = PHYS(tv_); W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C950 braf Rn */
L_0C09D58C: BLKS(0x0C09D58Cu);
	r13 = 0xFFFFD7ECu; UPD(0x0C09D58Eu, 1);  /* 0C09D58C mov.w @(disp,pc),Rn */
	IF(0x0C09D58Eu); { u32 tv_ = (r13 + 0x0C09D592u); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D58E braf Rn */
L_0C09D5A0: BLKS(0x0C09D5A0u);
	r9 = 0xC0A0490u; UPD(0x0C09D5A2u, 1);  /* 0C09D5A0 mov.l @(disp,pc),Rn */
	IF(0x0C09D5A2u); { u32 t_ = r9; PR = 0x0C09D5A6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C09D5A6u); }  /* 0C09D5A2 jsr @Rn */
L_0C09D5A6: BLKS(0x0C09D5A6u);
	IF(0x0C09D5A6u); T = (s32)r0 >= 0;  /* 0C09D5A6 cmp/pz Rn */
	if (T) { UPD(0x0C09D5B2u, 4); goto L_0C09D5B2; }  /* 0C09D5A8 bt */
L_0C09D5AA: BLKS(0x0C09D5AAu);
	r1 = 0xFFFFE3E0u; UPD(0x0C09D5ACu, 1);  /* 0C09D5AA mov.w @(disp,pc),Rn */
	IF(0x0C09D5ACu); { u32 tv_ = (r1 + 0x0C09D5B0u); u32 t_ = PHYS(tv_); IF(0x0C09D5AEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D5AC braf Rn */
L_0C09D5B2: BLKS(0x0C09D5B2u);
	r6 = 0xB4u; UPD(0x0C09D5B4u, 1);  /* 0C09D5B2 mov.w @(disp,pc),Rn */
	IF(0x0C09D5B4u); MACL = r0 * r6;  /* 0C09D5B4 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C09D5B8u, 3);  /* 0C09D5B6 mov.l @(disp,pc),Rn */
	IF(0x0C09D5B8u); r7 = MACL;  /* 0C09D5B8 sts macl,Rn */
	r7 += r5;  /* 0C09D5BA add Rm,Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C09D5BEu, 3);  /* 0C09D5BC mov.l @(disp,Rm),Rn */
	T = r0 == 0x28u;  /* 0C09D5BE cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C09D5C2u); MACL = r11 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09D5C8u, 5); goto L_0C09D5C8; } goto L_0C09D5C4; }  /* 0C09D5C0 bt/s */
L_0C09D5C4: BLKS(0x0C09D5C4u);
	{ IF(0x0C09D5C6u); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C09C8D2u, 5); goto L_0C09C8D2; }  /* 0C09D5C4 bra */
L_0C09D5C8: BLKS(0x0C09D5C8u);
	IF(0x0C09D5C8u); MACL = r11 * r6;  /* 0C09D5C8 mul.l Rm,Rn */
	r4 = R32(r7 + 0x24u); UPD(0x0C09D5CCu, 3);  /* 0C09D5CA mov.l @(disp,Rm),Rn */
	IF(0x0C09D5CCu); r8 = MACL;  /* 0C09D5CC sts macl,Rn */
	r8 += r5;  /* 0C09D5CE add Rm,Rn */
	r0 = R32(r7 + 0x28u); UPD(0x0C09D5D2u, 3);  /* 0C09D5D0 mov.l @(disp,Rm),Rn */
	r10 = r8;  /* 0C09D5D2 mov Rm,Rn */
	r2 = 0xA8u; UPD(0x0C09D5D6u, 2);  /* 0C09D5D4 mov.w @(disp,pc),Rn */
	r10 += 0x7Eu;  /* 0C09D5D6 add #imm,Rn */
	r12 = R32(r8 + 0x2Cu); UPD(0x0C09D5DAu, 2);  /* 0C09D5D8 mov.l @(disp,Rm),Rn */
	r7 += r2;  /* 0C09D5DA add Rm,Rn */
	r4 += r12;  /* 0C09D5DC add Rm,Rn */
	r3 = R32(r8 + 0x30u); UPD(0x0C09D5E0u, 3);  /* 0C09D5DE mov.l @(disp,Rm),Rn */
	r7 += 0x1u;  /* 0C09D5E0 add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r10); UPD(0x0C09D5E4u, 2);  /* 0C09D5E2 mov.w @Rm,Rn */
	r0 += r3;  /* 0C09D5E4 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r7); UPD(0x0C09D5E8u, 2);  /* 0C09D5E6 mov.b @Rm,Rn */
	IF(0x0C09D5E8u); MACL = r12 * r6;  /* 0C09D5E8 mul.l Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C09D5ECu, 3);  /* 0C09D5EA mov.l Rm,@(disp,Rn) */
	r13 = r8;  /* 0C09D5EC mov Rm,Rn */
	r7 = 0xAFu; UPD(0x0C09D5F0u, 2);  /* 0C09D5EE mov.w @(disp,pc),Rn */
	r13 += r2;  /* 0C09D5F0 add Rm,Rn */
	r0 = r8;  /* 0C09D5F2 mov Rm,Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C09D5F6u, 3);  /* 0C09D5F4 mov.l Rm,@(disp,Rn) */
	IF(0x0C09D5F6u); r2 = MACL;  /* 0C09D5F6 sts macl,Rn */
	IF(0x0C09D5F8u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09D5FAu, 2);  /* 0C09D5F8 mov.b @(r0,Rm),Rn */
	r2 += r5;  /* 0C09D5FA add Rm,Rn */
	r4 = 0xA1u; UPD(0x0C09D5FEu, 2);  /* 0C09D5FC mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C09D5FE mov Rm,Rn */
	IF(0x0C09D600u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C09D602u, 2);  /* 0C09D600 mov.b @(r0,Rm),Rn */
	r13 += 0x1u;  /* 0C09D602 add #imm,Rn */
	r9 += r1;  /* 0C09D604 add Rm,Rn */
	r0 = r3;  /* 0C09D606 mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C09D608 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r13, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09D650u, 7); goto L_0C09D650; } UPD(0x0C09D60Eu, 1); goto L_0C09D60E; }  /* 0C09D60A bt/s */
L_0C09D60E: BLKS(0x0C09D60Eu);
	r10 = 0xB4u; UPD(0x0C09D610u, 1);  /* 0C09D60E mov.w @(disp,pc),Rn */
	IF(0x0C09D610u); MACL = r11 * r10;  /* 0C09D610 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C09D614u, 3);  /* 0C09D612 mov.l @(disp,pc),Rn */
	IF(0x0C09D614u); r2 = MACL;  /* 0C09D614 sts macl,Rn */
	r8 = 0x98u; UPD(0x0C09D618u, 2);  /* 0C09D616 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C09D618 add Rm,Rn */
	r8 += r2;  /* 0C09D61A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C09D61Eu, 3);  /* 0C09D61C mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09D61E add #imm,Rn */
	W8(r8, r0); UPD(0x0C09D622u, 2);  /* 0C09D620 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09D622 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09D624 tst Rm,Rn */
	if (!T) { UPD(0x0C09D58Cu, 5); goto L_0C09D58C; }  /* 0C09D626 bf */
L_0C09D628: BLKS(0x0C09D628u);
	r1 = R32(r2 + 0xCu); UPD(0x0C09D62Au, 1);  /* 0C09D628 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C09D62A tst Rm,Rn */
	{ u32 c_ = T; r7 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09D634u, 4); goto L_0C09D634; } goto L_0C09D630; }  /* 0C09D62C bt/s */
L_0C09D630: BLKS(0x0C09D630u);
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C09C94Eu, 4); goto L_0C09C94E; }  /* 0C09D630 bra */
L_0C09D634: BLKS(0x0C09D634u);
	r13 = R32(r2 + 0x8u); UPD(0x0C09D636u, 1);  /* 0C09D634 mov.l @(disp,Rm),Rn */
	r0 = 0x88u; UPD(0x0C09D638u, 1);  /* 0C09D636 mov.w @(disp,pc),Rn */
	r13 += 0xFFFFFFFFu;  /* 0C09D638 add #imm,Rn */
	IF(0x0C09D63Au); W16(r0 + r2, r7); UPD(0x0C09D63Cu, 2);  /* 0C09D63A mov.w Rm,@(r0,Rn) */
	r1 = 0x17u;  /* 0C09D63C mov #imm,Rn */
	{ W32(r2 + 0x8u, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09C7AEu, 4); goto L_0C09C7AE; }  /* 0C09D63E bra */
L_0C09D650: BLKS(0x0C09D650u);
	r13 = 0xA6u; UPD(0x0C09D652u, 1);  /* 0C09D650 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C09D652 mov Rm,Rn */
	IF(0x0C09D654u); r6 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C09D656u, 2);  /* 0C09D654 mov.b @(r0,Rm),Rn */
	r4 = r11;  /* 0C09D656 mov Rm,Rn */
	r5 = 0xC1D64D4u; UPD(0x0C09D65Au, 2);  /* 0C09D658 mov.l @(disp,pc),Rn */
	r10 = 0xC0A9E40u; UPD(0x0C09D65Cu, 1);  /* 0C09D65A mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C09D65C mov Rm,Rn */
	IF(0x0C09D65Eu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09D660u, 2);  /* 0C09D65E mov.b @(r0,Rm),Rn */
	IF(0x0C09D660u); { u32 t_ = r10; PR = 0x0C09D664u; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09D664u); }  /* 0C09D660 jsr @Rn */
L_0C09D664: BLKS(0x0C09D664u);
	T = (r0 & r0) == 0;  /* 0C09D664 tst Rm,Rn */
	if (T) { UPD(0x0C09D58Cu, 4); goto L_0C09D58C; }  /* 0C09D666 bt */
L_0C09D668: BLKS(0x0C09D668u);
	r0 = R32(r8 + 0xCu); UPD(0x0C09D66Au, 1);  /* 0C09D668 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C09D66A mov Rm,Rn */
	r11 = 0xC0A0380u; UPD(0x0C09D66Eu, 2);  /* 0C09D66C mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C09D66E add #imm,Rn */
	r9 = 0xC058060u; UPD(0x0C09D672u, 2);  /* 0C09D670 mov.l @(disp,pc),Rn */
	r0 &= 0xFu;  /* 0C09D672 and #imm,r0 */
	r10 = 0xC7C17D0u; UPD(0x0C09D676u, 2);  /* 0C09D674 mov.l @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C09D676 mov #imm,Rn */
	IF(0x0C09D678u); { u32 t_ = r11; PR = 0x0C09D67Cu; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09D67Cu); }  /* 0C09D678 jsr @Rn */
L_0C09D67C: BLKS(0x0C09D67Cu);
	r4 = R32(r8 + 0xCu); UPD(0x0C09D67Eu, 1);  /* 0C09D67C mov.l @(disp,Rm),Rn */
	r0 = r13;  /* 0C09D67E mov Rm,Rn */
	r5 = 0xC1D64DAu; UPD(0x0C09D682u, 2);  /* 0C09D680 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C09D682 add Rm,Rn */
	r11 = 0x4u;  /* 0C09D684 mov #imm,Rn */
	IF(0x0C09D686u); r6 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C09D688u, 3);  /* 0C09D686 mov.w @(r0,Rm),Rn */
	IF(0x0C09D688u); ARG0(0x44BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09D688 shld Rm,Rn */
	r4 += r6;  /* 0C09D68A add Rm,Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C09D68C exts.w Rm,Rn */
	r4 = r3;  /* 0C09D68E mov Rm,Rn */
	r5 = 0x100000u; UPD(0x0C09D692u, 5);  /* 0C09D690 mov.l @(disp,pc),Rn */
	IF(0x0C09D692u); { u32 t_ = r9; PR = 0x0C09D696u; W32(r14 + 0x4u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLD(t_, 0x0C09D696u); }  /* 0C09D692 jsr @Rn */
L_0C09D696: BLKS(0x0C09D696u);
	r1 = R32(r8 + 0x24u); UPD(0x0C09D698u, 1);  /* 0C09D696 mov.l @(disp,Rm),Rn */
	r12 = 0xC058030u; UPD(0x0C09D69Au, 1);  /* 0C09D698 mov.l @(disp,pc),Rn */
	r1 += r0;  /* 0C09D69A add Rm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C09D69Eu, 2);  /* 0C09D69C mov.l Rm,@(disp,Rn) */
	r5 = 0xCCCCCu; UPD(0x0C09D6A0u, 1);  /* 0C09D69E mov.l @(disp,pc),Rn */
	IF(0x0C09D6A0u); { u32 t_ = r12; PR = 0x0C09D6A4u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09D6A4u); }  /* 0C09D6A0 jsr @Rn */
L_0C09D6A4: BLKS(0x0C09D6A4u);
	r6 = R32(r8 + 0x28u); UPD(0x0C09D6A6u, 1);  /* 0C09D6A4 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09D6A6 add #imm,Rn */
	r6 += r0;  /* 0C09D6A8 add Rm,Rn */
	r0 = 0x28000u; UPD(0x0C09D6ACu, 3);  /* 0C09D6AA mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C09D6AC mov #imm,Rn */
	W32(r15, r0); UPD(0x0C09D6B0u, 2);  /* 0C09D6AE mov.l Rm,@Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C09D6B2u, 1);  /* 0C09D6B0 mov.l @(disp,Rm),Rn */
	IF(0x0C09D6B2u); { u32 t_ = r10; PR = 0x0C09D6B6u; r5 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C09D6B6u); }  /* 0C09D6B2 jsr @Rn */
L_0C09D6B6: BLKS(0x0C09D6B6u);
	r2 = r13;  /* 0C09D6B6 mov Rm,Rn */
	r2 += 0x1u;  /* 0C09D6B8 add #imm,Rn */
	r13 = (u32)(s32)(s16)r2;  /* 0C09D6BA exts.w Rm,Rn */
	r7 = 0x1u;  /* 0C09D6BC mov #imm,Rn */
	T = (s32)r13 > (s32)r7;  /* 0C09D6BE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09D67Cu, 8); goto L_0C09D67C; } goto L_0C09D6C4; }  /* 0C09D6C0 bf/s */
L_0C09D6C4: BLKS(0x0C09D6C4u);
	r13 = 0xFFFFD6B4u; UPD(0x0C09D6C6u, 2);  /* 0C09D6C4 mov.w @(disp,pc),Rn */
	IF(0x0C09D6C6u); { u32 tv_ = (r13 + 0x0C09D6CAu); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D6C6 braf Rn */
}

void f_0C09D720(sh3_t *c)
{
	LOCALS;
	goto L_0C09D720;
L_0C09D6C4: BLKS(0x0C09D6C4u);
	r13 = 0xFFFFD6B4u; UPD(0x0C09D6C6u, 1);  /* 0C09D6C4 mov.w @(disp,pc),Rn */
	IF(0x0C09D6C6u); { u32 tv_ = (r13 + 0x0C09D6CAu); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D6C6 braf Rn */
L_0C09D720: BLKS(0x0C09D720u);
	r8 = 0xC0A0490u; UPD(0x0C09D722u, 1);  /* 0C09D720 mov.l @(disp,pc),Rn */
	IF(0x0C09D722u); { u32 t_ = r8; PR = 0x0C09D726u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C09D726u); }  /* 0C09D722 jsr @Rn */
L_0C09D726: BLKS(0x0C09D726u);
	IF(0x0C09D726u); T = (s32)r0 >= 0;  /* 0C09D726 cmp/pz Rn */
	{ u32 c_ = T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09D734u, 4); goto L_0C09D734; } goto L_0C09D72C; }  /* 0C09D728 bt/s */
L_0C09D72C: BLKS(0x0C09D72Cu);
	r1 = 0xFFFFE25Eu; UPD(0x0C09D72Eu, 2);  /* 0C09D72C mov.w @(disp,pc),Rn */
	IF(0x0C09D72Eu); { u32 tv_ = (r1 + 0x0C09D732u); u32 t_ = PHYS(tv_); IF(0x0C09D730u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D72E braf Rn */
L_0C09D734: BLKS(0x0C09D734u);
	r1 = 0xB4u; UPD(0x0C09D736u, 1);  /* 0C09D734 mov.w @(disp,pc),Rn */
	IF(0x0C09D736u); MACL = r0 * r1;  /* 0C09D736 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09D73Au, 3);  /* 0C09D738 mov.l @(disp,pc),Rn */
	IF(0x0C09D73Au); r7 = MACL;  /* 0C09D73A sts macl,Rn */
	r7 += r2;  /* 0C09D73C add Rm,Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C09D740u, 3);  /* 0C09D73E mov.l @(disp,Rm),Rn */
	T = r0 == 0x28u;  /* 0C09D740 cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C09D744u); MACL = r11 * r1; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09D74Eu, 5); goto L_0C09D74E; } goto L_0C09D746; }  /* 0C09D742 bt/s */
L_0C09D746: BLKS(0x0C09D746u);
	r13 = 0xFFFFEEFAu; UPD(0x0C09D748u, 3);  /* 0C09D746 mov.w @(disp,pc),Rn */
	IF(0x0C09D748u); { u32 tv_ = (r13 + 0x0C09D74Cu); u32 t_ = PHYS(tv_); IF(0x0C09D74Au); r1 = MACL; /* slot sts macl,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D748 braf Rn */
L_0C09D74E: BLKS(0x0C09D74Eu);
	IF(0x0C09D74Eu); MACL = r11 * r1;  /* 0C09D74E mul.l Rm,Rn */
	r8 = R32(r7 + 0x24u); UPD(0x0C09D752u, 3);  /* 0C09D750 mov.l @(disp,Rm),Rn */
	r3 = R32(r7 + 0x28u); UPD(0x0C09D754u, 1);  /* 0C09D752 mov.l @(disp,Rm),Rn */
	IF(0x0C09D754u); r0 = MACL;  /* 0C09D754 sts macl,Rn */
	r5 = 0xA8u; UPD(0x0C09D758u, 2);  /* 0C09D756 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C09D758 add Rm,Rn */
	r7 += r5;  /* 0C09D75A add Rm,Rn */
	r12 = 0xAFu; UPD(0x0C09D75Eu, 3);  /* 0C09D75C mov.w @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C09D75E add #imm,Rn */
	r6 = R32(r0 + 0x2Cu); UPD(0x0C09D762u, 2);  /* 0C09D760 mov.l @(disp,Rm),Rn */
	r4 = r0;  /* 0C09D762 mov Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r7); UPD(0x0C09D766u, 2);  /* 0C09D764 mov.b @Rm,Rn */
	r4 += r5;  /* 0C09D766 add Rm,Rn */
	r9 = R32(r0 + 0x30u); UPD(0x0C09D76Au, 2);  /* 0C09D768 mov.l @(disp,Rm),Rn */
	r8 += r6;  /* 0C09D76A add Rm,Rn */
	IF(0x0C09D76Cu); r1 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C09D76Eu, 2);  /* 0C09D76C mov.b @(r0,Rm),Rn */
	r3 += r9;  /* 0C09D76E add Rm,Rn */
	r4 += 0x1u;  /* 0C09D770 add #imm,Rn */
	r10 += r1;  /* 0C09D772 add Rm,Rn */
	r2 = R32(r0 + 0xCu); UPD(0x0C09D776u, 4);  /* 0C09D774 mov.l @(disp,Rm),Rn */
	r6 = 0x17u;  /* 0C09D776 mov #imm,Rn */
	W32(r0 + 0x24u, r8); UPD(0x0C09D77Au, 2);  /* 0C09D778 mov.l Rm,@(disp,Rn) */
	T = r2 > r6;  /* 0C09D77A cmp/hi Rm,Rn */
	W32(r0 + 0x28u, r3); UPD(0x0C09D77Eu, 2);  /* 0C09D77C mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W8(r4, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09D6C4u, 3); goto L_0C09D6C4; } UPD(0x0C09D782u, 1); goto L_0C09D782; }  /* 0C09D77E bt/s */
L_0C09D782: BLKS(0x0C09D782u);
	r0 = 0xC09D79Cu;  /* 0C09D782 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09D784 add Rm,Rn */
	IF(0x0C09D786u); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09D788u, 3);  /* 0C09D786 mov.w @(r0,Rm),Rn */
	IF(0x0C09D788u); { u32 tv_ = (r7 + 0x0C09D78Cu); u32 t_ = PHYS(tv_); IF(0x0C09D78Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D788 braf Rn */
}

void f_0C09D7D0(sh3_t *c)
{
	LOCALS;
	goto L_0C09D7D0;
L_0C09CAF4: BLKS(0x0C09CAF4u);
	r9 = 0xB4u; UPD(0x0C09CAF6u, 1);  /* 0C09CAF4 mov.w @(disp,pc),Rn */
	IF(0x0C09CAF6u); MACL = r11 * r9;  /* 0C09CAF6 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C09CAFAu, 3);  /* 0C09CAF8 mov.l @(disp,pc),Rn */
	IF(0x0C09CAFAu); r3 = MACL;  /* 0C09CAFA sts macl,Rn */
	r2 = 0x98u; UPD(0x0C09CAFEu, 2);  /* 0C09CAFC mov.w @(disp,pc),Rn */
	r3 += r10;  /* 0C09CAFE add Rm,Rn */
	r2 += r3;  /* 0C09CB00 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C09CB04u, 3);  /* 0C09CB02 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09CB04 add #imm,Rn */
	W8(r2, r0); UPD(0x0C09CB08u, 2);  /* 0C09CB06 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09CB08 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09CB0A tst Rm,Rn */
	if (!T) { UPD(0x0C09CB36u, 5); goto L_0C09CB36; }  /* 0C09CB0C bf */
L_0C09CB0E: BLKS(0x0C09CB0Eu);
	r1 = R32(r3 + 0xCu); UPD(0x0C09CB10u, 1);  /* 0C09CB0E mov.l @(disp,Rm),Rn */
	r0 = 0x88u; UPD(0x0C09CB12u, 1);  /* 0C09CB10 mov.w @(disp,pc),Rn */
	IF(0x0C09CB12u); r5 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C09CB14u, 1);  /* 0C09CB12 mov.w @(r0,Rm),Rn */
	r4 = 0xFFFFE888u; UPD(0x0C09CB16u, 1);  /* 0C09CB14 mov.w @(disp,pc),Rn */
	IF(0x0C09CB16u); { u32 tv_ = (r4 + 0x0C09CB1Au); u32 t_ = PHYS(tv_); r1 += r5; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CB16 braf Rn */
L_0C09CB20: BLKS(0x0C09CB20u);
	r0 = 0xC0A03B0u; UPD(0x0C09CB22u, 1);  /* 0C09CB20 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C09CB22 mov #imm,Rn */
	W32(r2 + 0x8u, r1); UPD(0x0C09CB26u, 2);  /* 0C09CB24 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C09CB26 mov Rm,Rn */
	IF(0x0C09CB28u); { u32 t_ = r0; PR = 0x0C09CB2Cu; W32(r2 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C09CB2Cu); }  /* 0C09CB28 jsr @Rn */
L_0C09CB2C: BLKS(0x0C09CB2Cu);
	IF(0x0C09CB2Cu); MACL = r13 * r10;  /* 0C09CB2C mul.l Rm,Rn */
	r0 = 0x9Au; UPD(0x0C09CB30u, 3);  /* 0C09CB2E mov.w @(disp,pc),Rn */
	IF(0x0C09CB30u); r13 = MACL;  /* 0C09CB30 sts macl,Rn */
	r13 += r9;  /* 0C09CB32 add Rm,Rn */
	IF(0x0C09CB34u); W8(r0 + r13, r12); UPD(0x0C09CB36u, 3);  /* 0C09CB34 mov.b Rm,@(r0,Rn) */
L_0C09CB36: BLKS(0x0C09CB36u);
	r13 = 0xFFFFE242u; UPD(0x0C09CB38u, 1);  /* 0C09CB36 mov.w @(disp,pc),Rn */
	IF(0x0C09CB38u); { u32 tv_ = (r13 + 0x0C09CB3Cu); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CB38 braf Rn */
L_0C09D7D0: BLKS(0x0C09D7D0u);
	r10 = 0xB4u; UPD(0x0C09D7D2u, 1);  /* 0C09D7D0 mov.w @(disp,pc),Rn */
	IF(0x0C09D7D2u); MACL = r11 * r10;  /* 0C09D7D2 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C09D7D6u, 3);  /* 0C09D7D4 mov.l @(disp,pc),Rn */
	IF(0x0C09D7D6u); r2 = MACL;  /* 0C09D7D6 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C09D7DAu, 2);  /* 0C09D7D8 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C09D7DA add Rm,Rn */
	IF(0x0C09D7DCu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09D7DEu, 2);  /* 0C09D7DC mov.w @(r0,Rm),Rn */
	IF(0x0C09D7DEu); T = (s32)r4 >= 0;  /* 0C09D7DE cmp/pz Rn */
	{ u32 c_ = T; r1 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09D7E8u, 4); goto L_0C09D7E8; } goto L_0C09D7E4; }  /* 0C09D7E0 bt/s */
L_0C09D7E4: BLKS(0x0C09D7E4u);
	{ IF(0x0C09D7E6u); ; /* slot nop */ UPD(0x0C09CB20u, 4); goto L_0C09CB20; }  /* 0C09D7E4 bra */
L_0C09D7E8: BLKS(0x0C09D7E8u);
	{ IF(0x0C09D7EAu); ; /* slot nop */ UPD(0x0C09CAF4u, 3); goto L_0C09CAF4; }  /* 0C09D7E8 bra */
}

void f_0C09D7F0(sh3_t *c)
{
	LOCALS;
	goto L_0C09D7F0;
L_0C09CB7A: BLKS(0x0C09CB7Au);
	IF(0x0C09CB7Au); r8 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C09CB7Cu, 1);  /* 0C09CB7A mov.w @(r0,Rm),Rn */
	r13 = 0xFFFFE1FAu; UPD(0x0C09CB7Eu, 1);  /* 0C09CB7C mov.w @(disp,pc),Rn */
	IF(0x0C09CB7Eu); { u32 tv_ = (r13 + 0x0C09CB82u); u32 t_ = PHYS(tv_); W16(r9, r8); /* slot mov.w Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CB7E braf Rn */
L_0C09CB94: BLKS(0x0C09CB94u);
	r1 = 0xFFFFE20Eu; UPD(0x0C09CB96u, 1);  /* 0C09CB94 mov.w @(disp,pc),Rn */
	IF(0x0C09CB96u); { u32 tv_ = (r1 + 0x0C09CB9Au); u32 t_ = PHYS(tv_); W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09CB96 braf Rn */
L_0C09D7F0: BLKS(0x0C09D7F0u);
	r13 = 0xB4u; UPD(0x0C09D7F2u, 1);  /* 0C09D7F0 mov.w @(disp,pc),Rn */
	IF(0x0C09D7F2u); MACL = r11 * r13;  /* 0C09D7F2 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09D7F6u, 3);  /* 0C09D7F4 mov.l @(disp,pc),Rn */
	IF(0x0C09D7F6u); r8 = MACL;  /* 0C09D7F6 sts macl,Rn */
	r9 = 0x88u; UPD(0x0C09D7FAu, 2);  /* 0C09D7F8 mov.w @(disp,pc),Rn */
	r8 += r2;  /* 0C09D7FA add Rm,Rn */
	r9 += r8;  /* 0C09D7FC add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C09D800u, 3);  /* 0C09D7FE mov.w @Rm,Rn */
	IF(0x0C09D800u); T = (s32)r0 >= 0;  /* 0C09D800 cmp/pz Rn */
	if (T) { UPD(0x0C09D80Au, 4); goto L_0C09D80A; }  /* 0C09D802 bt */
L_0C09D804: BLKS(0x0C09D804u);
	r7 = R32(r8 + 0xCu); UPD(0x0C09D806u, 1);  /* 0C09D804 mov.l @(disp,Rm),Rn */
	{ r7 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C09CB94u, 3); goto L_0C09CB94; }  /* 0C09D806 bra */
L_0C09D80A: BLKS(0x0C09D80Au);
	r0 = R32(r8 + 0x8u); UPD(0x0C09D80Cu, 1);  /* 0C09D80A mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C09D80C mov Rm,Rn */
	r0 += 0x1u;  /* 0C09D80E add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C09D812u, 3);  /* 0C09D810 mov.l Rm,@(disp,Rn) */
	r6 = 0xC1D644Eu; UPD(0x0C09D814u, 1);  /* 0C09D812 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C09D814 add Rm,Rn */
	r5 = 0xC0A03B0u; UPD(0x0C09D818u, 2);  /* 0C09D816 mov.l @(disp,pc),Rn */
	IF(0x0C09D818u); r3 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C09D81Au, 1);  /* 0C09D818 mov.w @(r0,Rm),Rn */
	r11 = 0xC0AFE40u; UPD(0x0C09D81Cu, 1);  /* 0C09D81A mov.l @(disp,pc),Rn */
	IF(0x0C09D81Cu); { u32 t_ = r5; PR = 0x0C09D820u; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C09D820u); }  /* 0C09D81C jsr @Rn */
L_0C09D820: BLKS(0x0C09D820u);
	r10 = 0x86u; UPD(0x0C09D822u, 1);  /* 0C09D820 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09D822 mov Rm,Rn */
	r12 = 0x100u; UPD(0x0C09D826u, 2);  /* 0C09D824 mov.w @(disp,pc),Rn */
	IF(0x0C09D826u); { u32 t_ = r11; PR = 0x0C09D82Au; IF(0x0C09D828u); W16(r0 + r10, r12); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 2); CALLD(t_, 0x0C09D82Au); }  /* 0C09D826 jsr @Rn */
L_0C09D82A: BLKS(0x0C09D82Au);
	r0 &= 0x1u;  /* 0C09D82A and #imm,r0 */
	r1 = 0xC1D64BCu; UPD(0x0C09D82Eu, 2);  /* 0C09D82C mov.l @(disp,pc),Rn */
	{ r0 += r0; /* slot add Rm,Rn */ UPD(0x0C09CB7Au, 3); goto L_0C09CB7A; }  /* 0C09D82E bra */
}

void f_0C09D840(sh3_t *c)
{
	LOCALS;
	goto L_0C09D840;
L_0C09D27E: BLKS(0x0C09D27Eu);
	r4 = 0xFFFFEA62u; UPD(0x0C09D280u, 1);  /* 0C09D27E mov.w @(disp,pc),Rn */
	IF(0x0C09D280u); { u32 tv_ = (r4 + 0x0C09D284u); u32 t_ = PHYS(tv_); W32(r9 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D280 braf Rn */
L_0C09D458: BLKS(0x0C09D458u);
	r3 = 0x98u; UPD(0x0C09D45Au, 1);  /* 0C09D458 mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C09D45A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C09D45Eu, 2);  /* 0C09D45C mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09D45E add #imm,Rn */
	W8(r3, r0); UPD(0x0C09D462u, 2);  /* 0C09D460 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09D462 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09D464 tst Rm,Rn */
	if (T) { UPD(0x0C09D470u, 5); goto L_0C09D470; }  /* 0C09D466 bt */
L_0C09D468: BLKS(0x0C09D468u);
	r13 = 0xFFFFD910u; UPD(0x0C09D46Au, 1);  /* 0C09D468 mov.w @(disp,pc),Rn */
	IF(0x0C09D46Au); { u32 tv_ = (r13 + 0x0C09D46Eu); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D46A braf Rn */
L_0C09D470: BLKS(0x0C09D470u);
	r0 = R32(r9 + 0xCu); UPD(0x0C09D472u, 1);  /* 0C09D470 mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C09D472 cmp/eq #imm,r0 */
	{ u32 c_ = T; r7 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09D4A0u, 4); goto L_0C09D4A0; } goto L_0C09D478; }  /* 0C09D474 bt/s */
L_0C09D478: BLKS(0x0C09D478u);
	T = (s32)r0 > (s32)r7;  /* 0C09D478 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09D490u, 5); goto L_0C09D490; }  /* 0C09D47A bf */
L_0C09D47C: BLKS(0x0C09D47Cu);
	r0 += 0xFFFFFFFFu;  /* 0C09D47C add #imm,Rn */
	r1 = 0xFFFFE4C2u; UPD(0x0C09D480u, 2);  /* 0C09D47E mov.w @(disp,pc),Rn */
	IF(0x0C09D480u); { u32 tv_ = (r1 + 0x0C09D484u); u32 t_ = PHYS(tv_); IF(0x0C09D482u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D480 braf Rn */
L_0C09D490: BLKS(0x0C09D490u);
	r1 = 0xFFFFE4B0u; UPD(0x0C09D492u, 1);  /* 0C09D490 mov.w @(disp,pc),Rn */
	IF(0x0C09D492u); { u32 tv_ = (r1 + 0x0C09D496u); u32 t_ = PHYS(tv_); r0 += 0x1u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D492 braf Rn */
L_0C09D4A0: BLKS(0x0C09D4A0u);
	r4 = R32(r9 + 0x8u); UPD(0x0C09D4A2u, 1);  /* 0C09D4A0 mov.l @(disp,Rm),Rn */
	r6 = 0xFFFFFFFFu;  /* 0C09D4A2 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09D4A6u, 2);  /* 0C09D4A4 mov.w @(disp,pc),Rn */
	r4 += 0xFFFFFFFFu;  /* 0C09D4A6 add #imm,Rn */
	IF(0x0C09D4A8u); W16(r0 + r9, r6); UPD(0x0C09D4AAu, 2);  /* 0C09D4A8 mov.w Rm,@(r0,Rn) */
	r1 = 0x17u;  /* 0C09D4AA mov #imm,Rn */
	{ W32(r9 + 0x8u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09D27Eu, 4); goto L_0C09D27E; }  /* 0C09D4AC bra */
L_0C09D582: BLKS(0x0C09D582u);
	r8 = 0xC7C17D0u; UPD(0x0C09D584u, 1);  /* 0C09D582 mov.l @(disp,pc),Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C09D586u, 1);  /* 0C09D584 mov.l @(disp,Rm),Rn */
	IF(0x0C09D586u); { u32 t_ = r8; PR = 0x0C09D58Au; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C17D0, 0x0C7C17D0u, 0x0C09D58Au); }  /* 0C09D586 jsr @Rn */
L_0C09D58A: BLKS(0x0C09D58Au);
	r15 += 0x4u;  /* 0C09D58A add #imm,Rn */
	r13 = 0xFFFFD7ECu; UPD(0x0C09D58Eu, 2);  /* 0C09D58C mov.w @(disp,pc),Rn */
	IF(0x0C09D58Eu); { u32 tv_ = (r13 + 0x0C09D592u); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D58E braf Rn */
L_0C09D840: BLKS(0x0C09D840u);
	r12 = 0xC0A0490u; UPD(0x0C09D842u, 1);  /* 0C09D840 mov.l @(disp,pc),Rn */
	IF(0x0C09D842u); { u32 t_ = r12; PR = 0x0C09D846u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C09D846u); }  /* 0C09D842 jsr @Rn */
L_0C09D846: BLKS(0x0C09D846u);
	IF(0x0C09D846u); T = (s32)r0 >= 0;  /* 0C09D846 cmp/pz Rn */
	if (T) { UPD(0x0C09D852u, 4); goto L_0C09D852; }  /* 0C09D848 bt */
L_0C09D84A: BLKS(0x0C09D84Au);
	r1 = 0xFFFFE140u; UPD(0x0C09D84Cu, 1);  /* 0C09D84A mov.w @(disp,pc),Rn */
	IF(0x0C09D84Cu); { u32 tv_ = (r1 + 0x0C09D850u); u32 t_ = PHYS(tv_); IF(0x0C09D84Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D84C braf Rn */
L_0C09D852: BLKS(0x0C09D852u);
	r7 = 0xB4u; UPD(0x0C09D854u, 1);  /* 0C09D852 mov.w @(disp,pc),Rn */
	IF(0x0C09D854u); MACL = r0 * r7;  /* 0C09D854 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09D858u, 3);  /* 0C09D856 mov.l @(disp,pc),Rn */
	IF(0x0C09D858u); r8 = MACL;  /* 0C09D858 sts macl,Rn */
	r8 += r6;  /* 0C09D85A add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C09D85Eu, 3);  /* 0C09D85C mov.l @(disp,Rm),Rn */
	T = r0 == 0x28u;  /* 0C09D85E cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C09D862u); MACL = r11 * r7; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09D86Cu, 5); goto L_0C09D86C; } goto L_0C09D864; }  /* 0C09D860 bt/s */
L_0C09D864: BLKS(0x0C09D864u);
	r1 = 0xFFFFEE98u; UPD(0x0C09D866u, 3);  /* 0C09D864 mov.w @(disp,pc),Rn */
	IF(0x0C09D866u); { u32 tv_ = (r1 + 0x0C09D86Au); u32 t_ = PHYS(tv_); IF(0x0C09D868u); r1 = MACL; /* slot sts macl,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D866 braf Rn */
L_0C09D86C: BLKS(0x0C09D86Cu);
	IF(0x0C09D86Cu); MACL = r11 * r7;  /* 0C09D86C mul.l Rm,Rn */
	r0 = R32(r8 + 0x28u); UPD(0x0C09D870u, 3);  /* 0C09D86E mov.l @(disp,Rm),Rn */
	IF(0x0C09D870u); r9 = MACL;  /* 0C09D870 sts macl,Rn */
	r9 += r6;  /* 0C09D872 add Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C09D876u, 3);  /* 0C09D874 mov.l @(disp,Rm),Rn */
	r3 = R32(r8 + 0x24u); UPD(0x0C09D878u, 1);  /* 0C09D876 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C09D878 add Rm,Rn */
	r4 = R32(r9 + 0x2Cu); UPD(0x0C09D87Cu, 2);  /* 0C09D87A mov.l @(disp,Rm),Rn */
	W32(r9 + 0x28u, r0); UPD(0x0C09D87Eu, 1);  /* 0C09D87C mov.l Rm,@(disp,Rn) */
	r3 += r4;  /* 0C09D87E add Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C09D882u, 2);  /* 0C09D880 mov.l Rm,@(disp,Rn) */
	r0 = r9;  /* 0C09D882 mov Rm,Rn */
	r13 = 0xAFu; UPD(0x0C09D886u, 2);  /* 0C09D884 mov.w @(disp,pc),Rn */
	r3 = r9;  /* 0C09D886 mov Rm,Rn */
	IF(0x0C09D888u); r10 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C09D88Au, 2);  /* 0C09D888 mov.b @(r0,Rm),Rn */
	r3 += 0x7Eu;  /* 0C09D88A add #imm,Rn */
	r12 = 0xA8u; UPD(0x0C09D88Eu, 2);  /* 0C09D88C mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C09D88E mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C09D892u, 2);  /* 0C09D890 mov.w @Rm,Rn */
	r4 += r12;  /* 0C09D892 add Rm,Rn */
	IF(0x0C09D894u); MACL = r0 * r7;  /* 0C09D894 mul.l Rm,Rn */
	r12 += r8;  /* 0C09D896 add Rm,Rn */
	r12 += 0x1u;  /* 0C09D898 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r12); UPD(0x0C09D89Cu, 6);  /* 0C09D89A mov.b @Rm,Rn */
	IF(0x0C09D89Cu); r0 = MACL;  /* 0C09D89C sts macl,Rn */
	r2 = 0xA1u; UPD(0x0C09D8A0u, 2);  /* 0C09D89E mov.w @(disp,pc),Rn */
	r0 += r6;  /* 0C09D8A0 add Rm,Rn */
	r4 += 0x1u;  /* 0C09D8A2 add #imm,Rn */
	r5 += r10;  /* 0C09D8A4 add Rm,Rn */
	IF(0x0C09D8A6u); r0 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09D8A8u, 4);  /* 0C09D8A6 mov.b @(r0,Rm),Rn */
	T = r0 == 0x3u;  /* 0C09D8A8 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r4, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09D8B2u, 4); goto L_0C09D8B2; } UPD(0x0C09D8AEu, 1); goto L_0C09D8AE; }  /* 0C09D8AA bt/s */
L_0C09D8AE: BLKS(0x0C09D8AEu);
	{ IF(0x0C09D8B0u); ; /* slot nop */ UPD(0x0C09D458u, 3); goto L_0C09D458; }  /* 0C09D8AE bra */
L_0C09D8B2: BLKS(0x0C09D8B2u);
	r13 = 0xC058130u; UPD(0x0C09D8B4u, 1);  /* 0C09D8B2 mov.l @(disp,pc),Rn */
	r10 = 0xC057430u; UPD(0x0C09D8B6u, 1);  /* 0C09D8B4 mov.l @(disp,pc),Rn */
	IF(0x0C09D8B6u); { u32 t_ = r13; PR = 0x0C09D8BAu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C09D8BAu); }  /* 0C09D8B6 jsr @Rn */
L_0C09D8BA: BLKS(0x0C09D8BAu);
	r4 = r11;  /* 0C09D8BA mov Rm,Rn */
	IF(0x0C09D8BCu); { u32 t_ = r10; PR = 0x0C09D8C0u; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C09D8C0u); }  /* 0C09D8BC jsr @Rn */
L_0C09D8C0: BLKS(0x0C09D8C0u);
	r10 = 0x86u; UPD(0x0C09D8C2u, 1);  /* 0C09D8C0 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C09D8C2 mov Rm,Rn */
	r10 += r9;  /* 0C09D8C4 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C09D8C8u, 3);  /* 0C09D8C6 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C09D8C8 add #imm,Rn */
	r2 = 0xC0A0380u; UPD(0x0C09D8CCu, 2);  /* 0C09D8CA mov.l @(disp,pc),Rn */
	IF(0x0C09D8CCu); r0 >>= 2;  /* 0C09D8CC shlr2 Rn */
	IF(0x0C09D8CEu); r0 >>= 2;  /* 0C09D8CE shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C09D8D0 and #imm,r0 */
	IF(0x0C09D8D2u); { u32 t_ = r2; PR = 0x0C09D8D6u; W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09D8D6u); }  /* 0C09D8D2 jsr @Rn */
L_0C09D8D6: BLKS(0x0C09D8D6u);
	r7 = 0xA6u; UPD(0x0C09D8D8u, 1);  /* 0C09D8D6 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09D8D8 mov Rm,Rn */
	IF(0x0C09D8DAu); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09D8DCu, 2);  /* 0C09D8DA mov.b @(r0,Rm),Rn */
	r4 = r11;  /* 0C09D8DC mov Rm,Rn */
	r8 = 0xC1D64E0u; UPD(0x0C09D8E0u, 2);  /* 0C09D8DE mov.l @(disp,pc),Rn */
	r11 = 0xC0A9E40u; UPD(0x0C09D8E2u, 1);  /* 0C09D8E0 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C09D8E2 mov Rm,Rn */
	IF(0x0C09D8E4u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09D8E6u, 2);  /* 0C09D8E4 mov.b @(r0,Rm),Rn */
	IF(0x0C09D8E6u); { u32 t_ = r11; PR = 0x0C09D8EAu; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09D8EAu); }  /* 0C09D8E6 jsr @Rn */
L_0C09D8EA: BLKS(0x0C09D8EAu);
	T = (r0 & r0) == 0;  /* 0C09D8EA tst Rm,Rn */
	if (!T) { UPD(0x0C09D8F8u, 4); goto L_0C09D8F8; }  /* 0C09D8EC bf */
L_0C09D8EE: BLKS(0x0C09D8EEu);
	r14 += 0x3Cu;  /* 0C09D8EE add #imm,Rn */
	r13 = 0xFFFFD488u; UPD(0x0C09D8F2u, 2);  /* 0C09D8F0 mov.w @(disp,pc),Rn */
	IF(0x0C09D8F2u); { u32 tv_ = (r13 + 0x0C09D8F6u); u32 t_ = PHYS(tv_); IF(0x0C09D8F4u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09D8F2 braf Rn */
L_0C09D8F8: BLKS(0x0C09D8F8u);
	r11 = 0xC058060u; UPD(0x0C09D8FAu, 1);  /* 0C09D8F8 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C09D8FCu, 1);  /* 0C09D8FA mov.w @Rm,Rn */
	r5 = 0x100000u; UPD(0x0C09D8FEu, 1);  /* 0C09D8FC mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C09D8FE mov Rm,Rn */
	IF(0x0C09D900u); { u32 t_ = r11; PR = 0x0C09D904u; W32(r14 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09D904u); }  /* 0C09D900 jsr @Rn */
L_0C09D904: BLKS(0x0C09D904u);
	r5 = R32(r9 + 0x24u); UPD(0x0C09D906u, 1);  /* 0C09D904 mov.l @(disp,Rm),Rn */
	r12 = 0xC058030u; UPD(0x0C09D908u, 1);  /* 0C09D906 mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C09D908 add Rm,Rn */
	W32(r14 + 0x8u, r5); UPD(0x0C09D90Cu, 2);  /* 0C09D90A mov.l Rm,@(disp,Rn) */
	r5 = 0xCCCCCu; UPD(0x0C09D90Eu, 1);  /* 0C09D90C mov.l @(disp,pc),Rn */
	IF(0x0C09D90Eu); { u32 t_ = r12; PR = 0x0C09D912u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09D912u); }  /* 0C09D90E jsr @Rn */
L_0C09D912: BLKS(0x0C09D912u);
	r6 = R32(r9 + 0x28u); UPD(0x0C09D914u, 1);  /* 0C09D912 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09D914 add #imm,Rn */
	r9 = 0x30000u; UPD(0x0C09D918u, 2);  /* 0C09D916 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09D918 add Rm,Rn */
	W32(r15, r9); UPD(0x0C09D91Cu, 2);  /* 0C09D91A mov.l Rm,@Rn */
	{ r4 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C09D582u, 3); goto L_0C09D582; }  /* 0C09D91C bra */
}

void f_0C09D970(sh3_t *c)
{
	LOCALS;
L_0C09D970: BLKS(0x0C09D970u);
	r9 = 0xC0A0540u; UPD(0x0C09D972u, 1);  /* 0C09D970 mov.l @(disp,pc),Rn */
	IF(0x0C09D972u); { u32 t_ = r9; PR = 0x0C09D976u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C09D976u); }  /* 0C09D972 jsr @Rn */
L_0C09D976: BLKS(0x0C09D976u);
	IF(0x0C09D976u); T = (s32)r0 >= 0;  /* 0C09D976 cmp/pz Rn */
	{ u32 c_ = !T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09DA5Au, 4); goto L_0C09DA5A; } goto L_0C09D97C; }  /* 0C09D978 bf/s */
L_0C09D97C: BLKS(0x0C09D97Cu);
	r9 = 0xB4u; UPD(0x0C09D97Eu, 2);  /* 0C09D97C mov.w @(disp,pc),Rn */
	r7 = 0x3u;  /* 0C09D97E mov #imm,Rn */
	IF(0x0C09D980u); MACL = r11 * r9;  /* 0C09D980 mul.l Rm,Rn */
	r3 = 0xC28629Au; UPD(0x0C09D984u, 4);  /* 0C09D982 mov.l @(disp,pc),Rn */
	r11 = 0xC26CD40u; UPD(0x0C09D986u, 1);  /* 0C09D984 mov.l @(disp,pc),Rn */
	IF(0x0C09D986u); r12 = MACL;  /* 0C09D986 sts macl,Rn */
	r12 += r11;  /* 0C09D988 add Rm,Rn */
	r12 += 0x7Eu;  /* 0C09D98A add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r12); UPD(0x0C09D98Eu, 4);  /* 0C09D98C mov.w @Rm,Rn */
	W32(r14, r10); UPD(0x0C09D990u, 1);  /* 0C09D98E mov.l Rm,@Rn */
	r12 += 0xFFFFFF82u;  /* 0C09D990 add #imm,Rn */
	r10 = 0xA1u; UPD(0x0C09D994u, 2);  /* 0C09D992 mov.w @(disp,pc),Rn */
	r10 += r12;  /* 0C09D994 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C09D998u, 2);  /* 0C09D996 mov.w @Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r10); UPD(0x0C09D99Au, 1);  /* 0C09D998 mov.b @Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C09D99Cu, 1);  /* 0C09D99A mov.l @(disp,pc),Rn */
	r6 += r1;  /* 0C09D99C add Rm,Rn */
	r0 = (u32)(s32)(s16)r6;  /* 0C09D99E exts.w Rm,Rn */
	r11 = 0x40000u; UPD(0x0C09D9A2u, 3);  /* 0C09D9A0 mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C09D9A2 mov Rm,Rn */
	IF(0x0C09D9A4u); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09D9A4 shld Rm,Rn */
	r5 = r11;  /* 0C09D9A6 mov Rm,Rn */
	IF(0x0C09D9A8u); { u32 t_ = r8; PR = 0x0C09D9ACu; W32(r14 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09D9ACu); }  /* 0C09D9A8 jsr @Rn */
L_0C09D9AC: BLKS(0x0C09D9ACu);
	W32(r14 + 0x8u, r0); UPD(0x0C09D9AEu, 1);  /* 0C09D9AC mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C09D9AE mov #imm,Rn */
	r0 = 0x6u;  /* 0C09D9B0 mov #imm,Rn */
	IF(0x0C09D9B2u); r4 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C09D9B4u, 3);  /* 0C09D9B2 mov.w @(r0,Rm),Rn */
	r8 = 0xC058030u; UPD(0x0C09D9B6u, 1);  /* 0C09D9B4 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r5);  /* 0C09D9B6 muls.w Rm,Rn */
	r5 = r11;  /* 0C09D9B8 mov Rm,Rn */
	IF(0x0C09D9BAu); { u32 t_ = r8; PR = 0x0C09D9BEu; IF(0x0C09D9BCu); r4 = MACL; /* slot sts macl,Rn */ UPD(t_, 5); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09D9BEu); }  /* 0C09D9BA jsr @Rn */
L_0C09D9BE: BLKS(0x0C09D9BEu);
	r3 = R32(r14); UPD(0x0C09D9C0u, 1);  /* 0C09D9BE mov.l @Rm,Rn */
	IF(0x0C09D9C0u); MACL = r3 * r9;  /* 0C09D9C0 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09D9C4u, 3);  /* 0C09D9C2 mov.l @(disp,pc),Rn */
	IF(0x0C09D9C4u); r3 = MACL;  /* 0C09D9C4 sts macl,Rn */
	IF(0x0C09D9C6u); MACL = r13 * r9;  /* 0C09D9C6 mul.l Rm,Rn */
	r3 += r6;  /* 0C09D9C8 add Rm,Rn */
	W32(r14 + 0xCu, r0); UPD(0x0C09D9CCu, 5);  /* 0C09D9CA mov.l Rm,@(disp,Rn) */
	IF(0x0C09D9CCu); r7 = MACL;  /* 0C09D9CC sts macl,Rn */
	r7 += r6;  /* 0C09D9CE add Rm,Rn */
	r11 = R32(r7 + 0x24u); UPD(0x0C09D9D2u, 3);  /* 0C09D9D0 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x24u); UPD(0x0C09D9D4u, 1);  /* 0C09D9D2 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C09D9D6u, 1);  /* 0C09D9D4 mov.l @(disp,Rm),Rn */
	r11 -= r2;  /* 0C09D9D6 sub Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C09D9DAu, 2);  /* 0C09D9D8 mov.b @Rm,Rn */
	r11 += r1;  /* 0C09D9DA add Rm,Rn */
	IF(0x0C09D9DCu); MACL = r11 * r0;  /* 0C09D9DC mul.l Rm,Rn */
	IF(0x0C09D9DEu); r1 = MACL;  /* 0C09D9DE sts macl,Rn */
	IF(0x0C09D9E0u); T = (s32)r1 >= 0;  /* 0C09D9E0 cmp/pz Rn */
	if (!T) { UPD(0x0C09DA40u, 8); goto L_0C09DA40; }  /* 0C09D9E2 bf */
L_0C09D9E4: BLKS(0x0C09D9E4u);
	r6 = 0xFFFFFFFCu;  /* 0C09D9E4 mov #imm,Rn */
	IF(0x0C09D9E6u); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C09D9E6 shad Rm,Rn */
	r2 += r1;  /* 0C09D9E8 add Rm,Rn */
	W32(r12 + 0x24u, r2); UPD(0x0C09D9ECu, 4);  /* 0C09D9EA mov.l Rm,@(disp,Rn) */
	r13 = R32(r7 + 0x28u); UPD(0x0C09D9EEu, 1);  /* 0C09D9EC mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x28u); UPD(0x0C09D9F0u, 1);  /* 0C09D9EE mov.l @(disp,Rm),Rn */
	r9 = R32(r14 + 0xCu); UPD(0x0C09D9F2u, 1);  /* 0C09D9F0 mov.l @(disp,Rm),Rn */
	r13 -= r2;  /* 0C09D9F2 sub Rm,Rn */
	r13 += r9;  /* 0C09D9F4 add Rm,Rn */
	IF(0x0C09D9F6u); MACL = r13 * r0;  /* 0C09D9F6 mul.l Rm,Rn */
	IF(0x0C09D9F8u); r1 = MACL;  /* 0C09D9F8 sts macl,Rn */
	IF(0x0C09D9FAu); T = (s32)r1 >= 0;  /* 0C09D9FA cmp/pz Rn */
	if (!T) { UPD(0x0C09DA30u, 9); goto L_0C09DA30; }  /* 0C09D9FC bf */
L_0C09D9FE: BLKS(0x0C09D9FEu);
	r10 = 0xA8u; UPD(0x0C09DA00u, 1);  /* 0C09D9FE mov.w @(disp,pc),Rn */
	IF(0x0C09DA00u); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C09DA00 shad Rm,Rn */
	r3 += r10;  /* 0C09DA02 add Rm,Rn */
	r3 += 0x1u;  /* 0C09DA04 add #imm,Rn */
	r2 += r1;  /* 0C09DA06 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C09DA0Au, 5);  /* 0C09DA08 mov.b @Rm,Rn */
	r7 = r12;  /* 0C09DA0A mov Rm,Rn */
	W32(r12 + 0x28u, r2); UPD(0x0C09DA0Eu, 2);  /* 0C09DA0C mov.l Rm,@(disp,Rn) */
	r7 += r10;  /* 0C09DA0E add Rm,Rn */
	r7 += 0x1u;  /* 0C09DA10 add #imm,Rn */
	r6 += 0x1u;  /* 0C09DA12 add #imm,Rn */
	W8(r7, r6); UPD(0x0C09DA16u, 4);  /* 0C09DA14 mov.b Rm,@Rn */
	r2 = 0xC1D647Cu; UPD(0x0C09DA18u, 1);  /* 0C09DA16 mov.l @(disp,pc),Rn */
	IF(0x0C09DA18u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09DA1Au, 1);  /* 0C09DA18 mov.b @(r0,Rm),Rn */
	r5 = r4;  /* 0C09DA1A mov Rm,Rn */
	r8 = r4;  /* 0C09DA1C mov Rm,Rn */
	IF(0x0C09DA1Eu); r5 <<= 16;  /* 0C09DA1E shll16 Rn */
	IF(0x0C09DA20u); r8 <<= 8;  /* 0C09DA20 shll8 Rn */
	r5 |= r8;  /* 0C09DA22 or Rm,Rn */
	r5 |= r4;  /* 0C09DA24 or Rm,Rn */
	W32(r12 + 0x38u, r5); UPD(0x0C09DA28u, 7);  /* 0C09DA26 mov.l Rm,@(disp,Rn) */
	r13 = 0xFFFFD350u; UPD(0x0C09DA2Au, 1);  /* 0C09DA28 mov.w @(disp,pc),Rn */
	IF(0x0C09DA2Au); { u32 tv_ = (r13 + 0x0C09DA2Eu); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09DA2A braf Rn */
L_0C09DA30: BLKS(0x0C09DA30u);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C09D9FEu, 3); goto L_0C09D9FE; }  /* 0C09DA30 bra */
L_0C09DA40: BLKS(0x0C09DA40u);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C09D9E4u, 3); goto L_0C09D9E4; }  /* 0C09DA40 bra */
L_0C09DA5A: BLKS(0x0C09DA5Au);
	r1 = 0xFFFFDF30u; UPD(0x0C09DA5Cu, 1);  /* 0C09DA5A mov.w @(disp,pc),Rn */
	IF(0x0C09DA5Cu); { u32 tv_ = (r1 + 0x0C09DA60u); u32 t_ = PHYS(tv_); IF(0x0C09DA5Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09DA5C braf Rn */
}

void f_0C09DA50(sh3_t *c)
{
	LOCALS;
	goto L_0C09DA50;
L_0C09DA28: BLKS(0x0C09DA28u);
	r13 = 0xFFFFD350u; UPD(0x0C09DA2Au, 1);  /* 0C09DA28 mov.w @(disp,pc),Rn */
	IF(0x0C09DA2Au); { u32 tv_ = (r13 + 0x0C09DA2Eu); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09DA2A braf Rn */
L_0C09DA50: BLKS(0x0C09DA50u);
	r12 = 0xC0A0540u; UPD(0x0C09DA52u, 1);  /* 0C09DA50 mov.l @(disp,pc),Rn */
	IF(0x0C09DA52u); { u32 t_ = r12; PR = 0x0C09DA56u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C09DA56u); }  /* 0C09DA52 jsr @Rn */
L_0C09DA56: BLKS(0x0C09DA56u);
	IF(0x0C09DA56u); T = (s32)r0 >= 0;  /* 0C09DA56 cmp/pz Rn */
	if (T) { UPD(0x0C09DA62u, 4); goto L_0C09DA62; }  /* 0C09DA58 bt */
L_0C09DA5A: BLKS(0x0C09DA5Au);
	r1 = 0xFFFFDF30u; UPD(0x0C09DA5Cu, 1);  /* 0C09DA5A mov.w @(disp,pc),Rn */
	IF(0x0C09DA5Cu); { u32 tv_ = (r1 + 0x0C09DA60u); u32 t_ = PHYS(tv_); IF(0x0C09DA5Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09DA5C braf Rn */
L_0C09DA62: BLKS(0x0C09DA62u);
	r3 = 0xB4u; UPD(0x0C09DA64u, 1);  /* 0C09DA62 mov.w @(disp,pc),Rn */
	IF(0x0C09DA64u); MACL = r11 * r3;  /* 0C09DA64 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09DA68u, 3);  /* 0C09DA66 mov.l @(disp,pc),Rn */
	IF(0x0C09DA68u); r3 = MACL;  /* 0C09DA68 sts macl,Rn */
	r6 = 0x9Fu; UPD(0x0C09DA6Cu, 2);  /* 0C09DA6A mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C09DA6C add Rm,Rn */
	r6 += r3;  /* 0C09DA6E add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C09DA72u, 3);  /* 0C09DA70 mov.b @Rm,Rn */
	r7 = r5 & 0xFF;  /* 0C09DA72 extu.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C09DA74 tst Rm,Rn */
	if (!T) { UPD(0x0C09DA28u, 5); goto L_0C09DA28; }  /* 0C09DA76 bf */
L_0C09DA78: BLKS(0x0C09DA78u);
	r0 = r3;  /* 0C09DA78 mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C09DA7Cu, 2);  /* 0C09DA7A mov.w @(disp,pc),Rn */
	IF(0x0C09DA7Cu); W8(r0 + r10, r7); UPD(0x0C09DA7Eu, 1);  /* 0C09DA7C mov.b Rm,@(r0,Rn) */
	r11 = r5;  /* 0C09DA7E mov Rm,Rn */
	r10 += 0xFFFFFFF8u;  /* 0C09DA80 add #imm,Rn */
	IF(0x0C09DA82u); r8 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09DA84u, 3);  /* 0C09DA82 mov.b @(r0,Rm),Rn */
	r11 += 0x1u;  /* 0C09DA84 add #imm,Rn */
	r2 = 0xC1D647Cu; UPD(0x0C09DA88u, 2);  /* 0C09DA86 mov.l @(disp,pc),Rn */
	W32(r3 + 0x24u, r7); UPD(0x0C09DA8Au, 1);  /* 0C09DA88 mov.l Rm,@(disp,Rn) */
	r0 = r2;  /* 0C09DA8A mov Rm,Rn */
	IF(0x0C09DA8Cu); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09DA8Eu, 2);  /* 0C09DA8C mov.b @(r0,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C09DA90u, 1);  /* 0C09DA8E mov.w @(disp,pc),Rn */
	r13 = r4;  /* 0C09DA90 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C09DA94u, 2);  /* 0C09DA92 mov.l Rm,@Rn */
	IF(0x0C09DA94u); r13 <<= 16;  /* 0C09DA94 shll16 Rn */
	IF(0x0C09DA96u); W8(r0 + r3, r7); UPD(0x0C09DA98u, 2);  /* 0C09DA96 mov.b Rm,@(r0,Rn) */
	r9 = R32(r14); UPD(0x0C09DA9Au, 1);  /* 0C09DA98 mov.l @Rm,Rn */
	r0 = R32(r3); UPD(0x0C09DA9Cu, 1);  /* 0C09DA9A mov.l @Rm,Rn */
	IF(0x0C09DA9Cu); r9 <<= 8;  /* 0C09DA9C shll8 Rn */
	r1 = R32(r14); UPD(0x0C09DAA0u, 2);  /* 0C09DA9E mov.l @Rm,Rn */
	r13 |= r9;  /* 0C09DAA0 or Rm,Rn */
	r0 |= 0x10u;  /* 0C09DAA2 or #imm,r0 */
	r13 |= r1;  /* 0C09DAA4 or Rm,Rn */
	W32(r3, r0); UPD(0x0C09DAA8u, 4);  /* 0C09DAA6 mov.l Rm,@Rn */
	W32(r3 + 0x38u, r13); UPD(0x0C09DAAAu, 1);  /* 0C09DAA8 mov.l Rm,@(disp,Rn) */
	r13 = 0xFFFFD2CCu; UPD(0x0C09DAACu, 1);  /* 0C09DAAA mov.w @(disp,pc),Rn */
	IF(0x0C09DAACu); { u32 tv_ = (r13 + 0x0C09DAB0u); u32 t_ = PHYS(tv_); W8(r6, r11); /* slot mov.b Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09DAAC braf Rn */
}

/* FUN_0c09dae0 */
void f_0C09DAE0(sh3_t *c)
{
	LOCALS;
L_0C09DAE0: BLKS(0x0C09DAE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09DAE2u, 1);  /* 0C09DAE0 mov.l Rm,@-Rn */
	r4 = 0x3Eu;  /* 0C09DAE2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09DAE6u, 2);  /* 0C09DAE4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09DAE8u, 1);  /* 0C09DAE6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09DAEAu, 1);  /* 0C09DAE8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09DAECu, 1);  /* 0C09DAEA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09DAEEu, 1);  /* 0C09DAEC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09DAF0u, 1);  /* 0C09DAEE mov.l Rm,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C09DAF2u, 1);  /* 0C09DAF0 mov.l @(disp,pc),Rn */
	IF(0x0C09DAF2u); r15 -= 4; W32(r15, PR); UPD(0x0C09DAF4u, 1);  /* 0C09DAF2 sts.l pr,@-Rn */
	r5 = 0x8000u; UPD(0x0C09DAF6u, 1);  /* 0C09DAF4 mov.l @(disp,pc),Rn */
	IF(0x0C09DAF6u); { u32 t_ = r8; PR = 0x0C09DAFAu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C09DAFAu); }  /* 0C09DAF6 jsr @Rn */
L_0C09DAFA: BLKS(0x0C09DAFAu);
	T = (r0 & r0) == 0;  /* 0C09DAFA tst Rm,Rn */
	r12 = 0xC2755BCu; UPD(0x0C09DAFEu, 2);  /* 0C09DAFC mov.l @(disp,pc),Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09DB20u, 3); goto L_0C09DB20; } UPD(0x0C09DB02u, 1); goto L_0C09DB02; }  /* 0C09DAFE bf/s */
L_0C09DB02: BLKS(0x0C09DB02u);
	r15 = r14;  /* 0C09DB02 mov Rm,Rn */
	IF(0x0C09DB04u); PR = R32(r15); r15 += 4; UPD(0x0C09DB06u, 2);  /* 0C09DB04 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09DB08u, 1);  /* 0C09DB06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09DB0Au, 1);  /* 0C09DB08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09DB0Cu, 1);  /* 0C09DB0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09DB0Eu, 1);  /* 0C09DB0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09DB10u, 1);  /* 0C09DB0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09DB12u, 1);  /* 0C09DB10 mov.l @Rm+,Rn */
	IF(0x0C09DB12u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09DB12 rts */
L_0C09DB20: BLKS(0x0C09DB20u);
	r8 = 0xC0606C0u; UPD(0x0C09DB22u, 1);  /* 0C09DB20 mov.l @(disp,pc),Rn */
	r9 = 0xC1D6A20u; UPD(0x0C09DB24u, 1);  /* 0C09DB22 mov.l @(disp,pc),Rn */
	IF(0x0C09DB24u); { u32 t_ = r8; PR = 0x0C09DB28u; r4 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C09DB28u); }  /* 0C09DB24 jsr @Rn */
L_0C09DB28: BLKS(0x0C09DB28u);
	T = (r0 & r0) == 0;  /* 0C09DB28 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09DB02u, 4); goto L_0C09DB02; } goto L_0C09DB2E; }  /* 0C09DB2A bt/s */
L_0C09DB2E: BLKS(0x0C09DB2Eu);
	r13 = 0xB4u; UPD(0x0C09DB30u, 2);  /* 0C09DB2E mov.w @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C09DB30 mov #imm,Rn */
	r11 = r12;  /* 0C09DB32 mov Rm,Rn */
	UPD(0x0C09DB34u, 2);
L_0C09DB34: BLKS(0x0C09DB34u);
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r8 = v_; } UPD(0x0C09DB36u, 1);  /* 0C09DB34 mov.w @Rm+,Rn */
	r0 = 0x3Eu;  /* 0C09DB36 mov #imm,Rn */
	r1 = 0xB4u; UPD(0x0C09DB3Au, 2);  /* 0C09DB38 mov.w @(disp,pc),Rn */
	IF(0x0C09DB3Au); MACL = r8 * r1;  /* 0C09DB3A mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C09DB3Eu, 3);  /* 0C09DB3C mov.l @(disp,pc),Rn */
	IF(0x0C09DB3Eu); r2 = MACL;  /* 0C09DB3E sts macl,Rn */
	r4 = 0xC0000000u; UPD(0x0C09DB42u, 2);  /* 0C09DB40 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C09DB42 add Rm,Rn */
	W32(r2, r4); UPD(0x0C09DB46u, 2);  /* 0C09DB44 mov.l Rm,@Rn */
	r3 = (u32)(s32)(s16)R16(r12); UPD(0x0C09DB48u, 1);  /* 0C09DB46 mov.w @Rm,Rn */
	r2 += 0x7Cu;  /* 0C09DB48 add #imm,Rn */
	W16(r2, r3); UPD(0x0C09DB4Cu, 2);  /* 0C09DB4A mov.w Rm,@Rn */
	r2 += 0xFFFFFF84u;  /* 0C09DB4C add #imm,Rn */
	W32(r2 + 0x4u, r0); UPD(0x0C09DB50u, 2);  /* 0C09DB4E mov.l Rm,@(disp,Rn) */
	r0 = R32(r9); UPD(0x0C09DB52u, 1);  /* 0C09DB50 mov.l @Rm,Rn */
	T = r0 == 0x4u;  /* 0C09DB52 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r2 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09DBD0u, 4); goto L_0C09DBD0; } UPD(0x0C09DB58u, 1); goto L_0C09DB58; }  /* 0C09DB54 bt/s */
L_0C09DB58: BLKS(0x0C09DB58u);
	r1 = 0x0u;  /* 0C09DB58 mov #imm,Rn */
	UPD(0x0C09DB5Au, 1);
L_0C09DB5A: BLKS(0x0C09DB5Au);
	W32(r2 + 0xCu, r1); UPD(0x0C09DB5Cu, 1);  /* 0C09DB5A mov.l Rm,@(disp,Rn) */
	r2 = 0xC0A02D0u; UPD(0x0C09DB5Eu, 1);  /* 0C09DB5C mov.l @(disp,pc),Rn */
	IF(0x0C09DB5Eu); { u32 t_ = r2; PR = 0x0C09DB62u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C09DB62u); }  /* 0C09DB5E jsr @Rn */
L_0C09DB62: BLKS(0x0C09DB62u);
	IF(0x0C09DB62u); MACL = r8 * r13;  /* 0C09DB62 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09DB66u, 3);  /* 0C09DB64 mov.l @(disp,pc),Rn */
	r3 = R32(r9 + 0x4u); UPD(0x0C09DB68u, 1);  /* 0C09DB66 mov.l @(disp,Rm),Rn */
	IF(0x0C09DB68u); r4 = MACL;  /* 0C09DB68 sts macl,Rn */
	r4 += r6;  /* 0C09DB6A add Rm,Rn */
	W32(r4 + 0x2Cu, r3); UPD(0x0C09DB6Eu, 3);  /* 0C09DB6C mov.l Rm,@(disp,Rn) */
	r2 = R32(r9 + 0x8u); UPD(0x0C09DB70u, 1);  /* 0C09DB6E mov.l @(disp,Rm),Rn */
	W32(r4 + 0x30u, r2); UPD(0x0C09DB72u, 1);  /* 0C09DB70 mov.l Rm,@(disp,Rn) */
	r0 = 0x800000u; UPD(0x0C09DB74u, 1);  /* 0C09DB72 mov.l @(disp,pc),Rn */
	r4 += 0x50u;  /* 0C09DB74 add #imm,Rn */
	W32(r4, r0); UPD(0x0C09DB78u, 2);  /* 0C09DB76 mov.l Rm,@Rn */
	r0 = 0x8Cu; UPD(0x0C09DB7Au, 1);  /* 0C09DB78 mov.w @(disp,pc),Rn */
	r4 += 0xFFFFFFB0u;  /* 0C09DB7A add #imm,Rn */
	r5 = R32(r9 + 0x10u); UPD(0x0C09DB7Eu, 2);  /* 0C09DB7C mov.l @(disp,Rm),Rn */
	r8 = 0xC3929E0u; UPD(0x0C09DB80u, 1);  /* 0C09DB7E mov.l @(disp,pc),Rn */
	r9 += 0x14u;  /* 0C09DB80 add #imm,Rn */
	IF(0x0C09DB82u); W32(r0 + r4, r5); UPD(0x0C09DB84u, 2);  /* 0C09DB82 mov.l Rm,@(r0,Rn) */
	W32(r4 + 0x24u, r3); UPD(0x0C09DB86u, 1);  /* 0C09DB84 mov.l Rm,@(disp,Rn) */
	r0 = r4;  /* 0C09DB86 mov Rm,Rn */
	r7 = R32(r8); UPD(0x0C09DB8Au, 2);  /* 0C09DB88 mov.l @Rm,Rn */
	r3 = 0x0u;  /* 0C09DB8A mov #imm,Rn */
	r2 += r7;  /* 0C09DB8C add Rm,Rn */
	W32(r4 + 0x28u, r2); UPD(0x0C09DB90u, 3);  /* 0C09DB8E mov.l Rm,@(disp,Rn) */
	r8 = r10;  /* 0C09DB90 mov Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C09DB94u, 2);  /* 0C09DB92 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C09DB94 add #imm,Rn */
	r6 = 0xA9u; UPD(0x0C09DB98u, 2);  /* 0C09DB96 mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFFECu;  /* 0C09DB98 add #imm,Rn */
	IF(0x0C09DB9Au); W8(r0 + r6, r1); UPD(0x0C09DB9Cu, 2);  /* 0C09DB9A mov.b Rm,@(r0,Rn) */
	r10 = (u32)(s32)(s16)r8;  /* 0C09DB9C exts.w Rm,Rn */
	r5 = R32(r9 + 0xCu); UPD(0x0C09DBA0u, 2);  /* 0C09DB9E mov.l @(disp,Rm),Rn */
	r2 = 0x5u;  /* 0C09DBA0 mov #imm,Rn */
	r0 = 0x98u; UPD(0x0C09DBA4u, 2);  /* 0C09DBA2 mov.w @(disp,pc),Rn */
	r9 += 0x18u;  /* 0C09DBA4 add #imm,Rn */
	IF(0x0C09DBA6u); W8(r0 + r4, r3); UPD(0x0C09DBA8u, 2);  /* 0C09DBA6 mov.b Rm,@(r0,Rn) */
	T = (s32)r10 > (s32)r2;  /* 0C09DBA8 cmp/gt Rm,Rn */
	r0 = 0x808080u; UPD(0x0C09DBACu, 2);  /* 0C09DBAA mov.l @(disp,pc),Rn */
	W32(r4 + 0x34u, r5); UPD(0x0C09DBAEu, 1);  /* 0C09DBAC mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r4 + 0x38u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09DB34u, 3); goto L_0C09DB34; } UPD(0x0C09DBB2u, 1); goto L_0C09DBB2; }  /* 0C09DBAE bf/s */
L_0C09DBB2: BLKS(0x0C09DBB2u);
	r8 = 0xC1D6AB0u; UPD(0x0C09DBB4u, 1);  /* 0C09DBB2 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C09DBB6u, 1);  /* 0C09DBB4 mov.w @Rm+,Rn */
	IF(0x0C09DBB6u); T = (s32)r4 >= 0;  /* 0C09DBB6 cmp/pz Rn */
	if (!T) { UPD(0x0C09DBCCu, 4); goto L_0C09DBCC; }  /* 0C09DBB8 bf */
L_0C09DBBA: BLKS(0x0C09DBBAu);
	r9 = 0xC07FEB0u; UPD(0x0C09DBBCu, 1);  /* 0C09DBBA mov.l @(disp,pc),Rn */
L_0C09DBBC: BLKS(0x0C09DBBCu);
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r5 = v_; } UPD(0x0C09DBBEu, 1);  /* 0C09DBBC mov.w @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r6 = v_; } UPD(0x0C09DBC0u, 1);  /* 0C09DBBE mov.w @Rm+,Rn */
	IF(0x0C09DBC0u); r5 <<= 16;  /* 0C09DBC0 shll16 Rn */
	IF(0x0C09DBC2u); { u32 t_ = r9; PR = 0x0C09DBC6u; IF(0x0C09DBC4u); r6 <<= 16; /* slot shll16 Rn */ UPD(t_, 3); CALLP(t_, f_0C07FEB0, 0x0C07FEB0u, 0x0C09DBC6u); }  /* 0C09DBC2 jsr @Rn */
L_0C09DBC6: BLKS(0x0C09DBC6u);
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C09DBC8u, 1);  /* 0C09DBC6 mov.w @Rm+,Rn */
	IF(0x0C09DBC8u); T = (s32)r4 >= 0;  /* 0C09DBC8 cmp/pz Rn */
	if (T) { UPD(0x0C09DBBCu, 4); goto L_0C09DBBC; }  /* 0C09DBCA bt */
L_0C09DBCC: BLKS(0x0C09DBCCu);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C09DB02u, 3); goto L_0C09DB02; }  /* 0C09DBCC bra */
L_0C09DBD0: BLKS(0x0C09DBD0u);
	r7 = 0xC275DD1u; UPD(0x0C09DBD2u, 1);  /* 0C09DBD0 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C09DBD4u, 1);  /* 0C09DBD2 mov.b @Rm,Rn */
	{ r1 = r6 & 0xFF; /* slot extu.b Rm,Rn */ UPD(0x0C09DB5Au, 3); goto L_0C09DB5A; }  /* 0C09DBD4 bra */
}

/* FUN_0c09dc20 */
void f_0C09DC20(sh3_t *c)
{
	LOCALS;
L_0C09DC20: BLKS(0x0C09DC20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09DC22u, 1);  /* 0C09DC20 mov.l Rm,@-Rn */
	r4 = 0x3Eu;  /* 0C09DC22 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09DC26u, 2);  /* 0C09DC24 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09DC28u, 1);  /* 0C09DC26 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09DC2Au, 1);  /* 0C09DC28 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09DC2Cu, 1);  /* 0C09DC2A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09DC2Eu, 1);  /* 0C09DC2C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09DC30u, 1);  /* 0C09DC2E mov.l Rm,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C09DC32u, 1);  /* 0C09DC30 mov.l @(disp,pc),Rn */
	IF(0x0C09DC32u); r15 -= 4; W32(r15, PR); UPD(0x0C09DC34u, 1);  /* 0C09DC32 sts.l pr,@-Rn */
	r5 = 0x8000u; UPD(0x0C09DC36u, 1);  /* 0C09DC34 mov.l @(disp,pc),Rn */
	IF(0x0C09DC36u); { u32 t_ = r8; PR = 0x0C09DC3Au; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C09DC3Au); }  /* 0C09DC36 jsr @Rn */
L_0C09DC3A: BLKS(0x0C09DC3Au);
	T = (r0 & r0) == 0;  /* 0C09DC3A tst Rm,Rn */
	r13 = 0xC2755BCu; UPD(0x0C09DC3Eu, 2);  /* 0C09DC3C mov.l @(disp,pc),Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09DC60u, 3); goto L_0C09DC60; } UPD(0x0C09DC42u, 1); goto L_0C09DC42; }  /* 0C09DC3E bf/s */
L_0C09DC42: BLKS(0x0C09DC42u);
	r15 = r14;  /* 0C09DC42 mov Rm,Rn */
	IF(0x0C09DC44u); PR = R32(r15); r15 += 4; UPD(0x0C09DC46u, 2);  /* 0C09DC44 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09DC48u, 1);  /* 0C09DC46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09DC4Au, 1);  /* 0C09DC48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09DC4Cu, 1);  /* 0C09DC4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09DC4Eu, 1);  /* 0C09DC4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09DC50u, 1);  /* 0C09DC4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09DC52u, 1);  /* 0C09DC50 mov.l @Rm+,Rn */
	IF(0x0C09DC52u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09DC52 rts */
L_0C09DC60: BLKS(0x0C09DC60u);
	r8 = 0xC0606C0u; UPD(0x0C09DC62u, 1);  /* 0C09DC60 mov.l @(disp,pc),Rn */
	r9 = 0xC1D6B00u; UPD(0x0C09DC64u, 1);  /* 0C09DC62 mov.l @(disp,pc),Rn */
	IF(0x0C09DC64u); { u32 t_ = r8; PR = 0x0C09DC68u; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C09DC68u); }  /* 0C09DC64 jsr @Rn */
L_0C09DC68: BLKS(0x0C09DC68u);
	T = (r0 & r0) == 0;  /* 0C09DC68 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09DC42u, 4); goto L_0C09DC42; } goto L_0C09DC6E; }  /* 0C09DC6A bt/s */
L_0C09DC6E: BLKS(0x0C09DC6Eu);
	r10 = 0x0u;  /* 0C09DC6E mov #imm,Rn */
	r12 = 0x0u;  /* 0C09DC70 mov #imm,Rn */
	r11 = r13;  /* 0C09DC72 mov Rm,Rn */
	UPD(0x0C09DC74u, 4);
L_0C09DC74: BLKS(0x0C09DC74u);
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r4 = v_; } UPD(0x0C09DC76u, 1);  /* 0C09DC74 mov.w @Rm+,Rn */
	r7 = 0x3Eu;  /* 0C09DC76 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C09DC7Au, 2);  /* 0C09DC78 mov.w @(disp,pc),Rn */
	IF(0x0C09DC7Au); MACL = r4 * r8;  /* 0C09DC7A mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09DC7Eu, 3);  /* 0C09DC7C mov.l @(disp,pc),Rn */
	r3 = 0xC0000000u; UPD(0x0C09DC80u, 1);  /* 0C09DC7E mov.l @(disp,pc),Rn */
	IF(0x0C09DC80u); r8 = MACL;  /* 0C09DC80 sts macl,Rn */
	r8 += r0;  /* 0C09DC82 add Rm,Rn */
	W32(r8, r3); UPD(0x0C09DC86u, 3);  /* 0C09DC84 mov.l Rm,@Rn */
	r2 = (u32)(s32)(s16)R16(r13); UPD(0x0C09DC88u, 1);  /* 0C09DC86 mov.w @Rm,Rn */
	r8 += 0x7Cu;  /* 0C09DC88 add #imm,Rn */
	W16(r8, r2); UPD(0x0C09DC8Cu, 2);  /* 0C09DC8A mov.w Rm,@Rn */
	r8 += 0xFFFFFF84u;  /* 0C09DC8C add #imm,Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C09DC90u, 2);  /* 0C09DC8E mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A02D0u; UPD(0x0C09DC92u, 1);  /* 0C09DC90 mov.l @(disp,pc),Rn */
	r6 = R32(r9); UPD(0x0C09DC94u, 1);  /* 0C09DC92 mov.l @Rm,Rn */
	W32(r8 + 0xCu, r12); UPD(0x0C09DC96u, 1);  /* 0C09DC94 mov.l Rm,@(disp,Rn) */
	IF(0x0C09DC96u); { u32 t_ = r5; PR = 0x0C09DC9Au; W32(r8 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C09DC9Au); }  /* 0C09DC96 jsr @Rn */
L_0C09DC9A: BLKS(0x0C09DC9Au);
	r4 = R32(r9 + 0x4u); UPD(0x0C09DC9Cu, 1);  /* 0C09DC9A mov.l @(disp,Rm),Rn */
	r5 = 0x17u;  /* 0C09DC9C mov #imm,Rn */
	W32(r8 + 0x2Cu, r4); UPD(0x0C09DCA0u, 2);  /* 0C09DC9E mov.l Rm,@(disp,Rn) */
	r6 = R32(r9 + 0x8u); UPD(0x0C09DCA2u, 1);  /* 0C09DCA0 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x30u, r6); UPD(0x0C09DCA4u, 1);  /* 0C09DCA2 mov.l Rm,@(disp,Rn) */
	r0 = 0x800000u; UPD(0x0C09DCA6u, 1);  /* 0C09DCA4 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C09DCA6 add #imm,Rn */
	W32(r8, r0); UPD(0x0C09DCAAu, 2);  /* 0C09DCA8 mov.l Rm,@Rn */
	r0 = 0x8Cu; UPD(0x0C09DCACu, 1);  /* 0C09DCAA mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C09DCAC add #imm,Rn */
	r3 = R32(r9 + 0x10u); UPD(0x0C09DCB0u, 2);  /* 0C09DCAE mov.l @(disp,Rm),Rn */
	r2 = 0xC3929E0u; UPD(0x0C09DCB2u, 1);  /* 0C09DCB0 mov.l @(disp,pc),Rn */
	IF(0x0C09DCB2u); W32(r0 + r8, r3); UPD(0x0C09DCB4u, 1);  /* 0C09DCB2 mov.l Rm,@(r0,Rn) */
	W32(r8 + 0x24u, r4); UPD(0x0C09DCB6u, 1);  /* 0C09DCB4 mov.l Rm,@(disp,Rn) */
	r0 += 0x1Du;  /* 0C09DCB6 add #imm,Rn */
	r7 = R32(r2); UPD(0x0C09DCBAu, 2);  /* 0C09DCB8 mov.l @Rm,Rn */
	r6 += r7;  /* 0C09DCBA add Rm,Rn */
	IF(0x0C09DCBCu); W8(r0 + r8, r5); UPD(0x0C09DCBEu, 2);  /* 0C09DCBC mov.b Rm,@(r0,Rn) */
	r2 = r10;  /* 0C09DCBE mov Rm,Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C09DCC2u, 2);  /* 0C09DCC0 mov.l Rm,@(disp,Rn) */
	r0 += 0xFFFFFFEFu;  /* 0C09DCC2 add #imm,Rn */
	r4 = R32(r9 + 0xCu); UPD(0x0C09DCC6u, 2);  /* 0C09DCC4 mov.l @(disp,Rm),Rn */
	r2 += 0x1u;  /* 0C09DCC6 add #imm,Rn */
	IF(0x0C09DCC8u); W8(r0 + r8, r12); UPD(0x0C09DCCAu, 2);  /* 0C09DCC8 mov.b Rm,@(r0,Rn) */
	r10 = (u32)(s32)(s16)r2;  /* 0C09DCCA exts.w Rm,Rn */
	r3 = 0x808080u; UPD(0x0C09DCCEu, 2);  /* 0C09DCCC mov.l @(disp,pc),Rn */
	r0 = 0x4u;  /* 0C09DCCE mov #imm,Rn */
	W32(r8 + 0x34u, r4); UPD(0x0C09DCD2u, 2);  /* 0C09DCD0 mov.l Rm,@(disp,Rn) */
	r9 += 0x14u;  /* 0C09DCD2 add #imm,Rn */
	T = (s32)r10 > (s32)r0;  /* 0C09DCD4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x38u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09DC74u, 5); goto L_0C09DC74; } UPD(0x0C09DCDAu, 1); goto L_0C09DCDA; }  /* 0C09DCD6 bf/s */
L_0C09DCDA: BLKS(0x0C09DCDAu);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C09DC42u, 3); goto L_0C09DC42; }  /* 0C09DCDA bra */
}

void f_0C09DD10(sh3_t *c)
{
	LOCALS;
L_0C09DD10: BLKS(0x0C09DD10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09DD12u, 1);  /* 0C09DD10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09DD14u, 1);  /* 0C09DD12 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C09DD14 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09DD18u, 2);  /* 0C09DD16 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09DD1Au, 1);  /* 0C09DD18 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C09DD1Cu, 1);  /* 0C09DD1A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09DD1Eu, 1);  /* 0C09DD1C mov.l Rm,@-Rn */
	IF(0x0C09DD1Eu); MACL = r8 * r3;  /* 0C09DD1E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09DD22u, 3);  /* 0C09DD20 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C09DD24u, 1);  /* 0C09DD22 mov.l @(disp,pc),Rn */
	IF(0x0C09DD24u); r2 = MACL;  /* 0C09DD24 sts macl,Rn */
	IF(0x0C09DD26u); r15 -= 4; W32(r15, PR); UPD(0x0C09DD28u, 2);  /* 0C09DD26 sts.l pr,@-Rn */
	r0 += r2;  /* 0C09DD28 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C09DD2Cu, 2);  /* 0C09DD2A mov.l @(disp,Rm),Rn */
	r0 = 0x11u;  /* 0C09DD2C mov #imm,Rn */
	T = r2 > r0;  /* 0C09DD2E cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09DD38u, 5); goto L_0C09DD38; } goto L_0C09DD34; }  /* 0C09DD30 bf/s */
L_0C09DD34: BLKS(0x0C09DD34u);
	{ IF(0x0C09DD36u); ; /* slot nop */ UPD(0x0C09DE70u, 4); goto L_0C09DE70; }  /* 0C09DD34 bra */
L_0C09DD38: BLKS(0x0C09DD38u);
	r0 = 0xC09DD48u;  /* 0C09DD38 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09DD3A add Rm,Rn */
	IF(0x0C09DD3Cu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09DD3Eu, 3);  /* 0C09DD3C mov.w @(r0,Rm),Rn */
	IF(0x0C09DD3Eu); { u32 tv_ = (r4 + 0x0C09DD42u); u32 t_ = PHYS(tv_); IF(0x0C09DD40u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09DD70u: goto L_0C09DD70; case 0x0C09DE70u: goto L_0C09DE70; case 0x0C09DF80u: goto L_0C09DF80; case 0x0C09DFE0u: goto L_0C09DFE0; case 0x0C09E090u: goto L_0C09E090; case 0x0C09E0AAu: goto L_0C09E0AA; case 0x0C09E150u: goto L_0C09E150; case 0x0C09E360u: goto L_0C09E360; default: JUMPD(tv_); } }  /* 0C09DD3E braf Rn */
L_0C09DD70: BLKS(0x0C09DD70u);
	r10 = 0xB4u; UPD(0x0C09DD72u, 1);  /* 0C09DD70 mov.w @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C09DD72 mov #imm,Rn */
	IF(0x0C09DD74u); MACL = r8 * r10;  /* 0C09DD74 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C09DD78u, 4);  /* 0C09DD76 mov.l @(disp,pc),Rn */
	IF(0x0C09DD78u); r9 = MACL;  /* 0C09DD78 sts macl,Rn */
	r0 = 0x9Fu; UPD(0x0C09DD7Cu, 2);  /* 0C09DD7A mov.w @(disp,pc),Rn */
	r7 += r9;  /* 0C09DD7C add Rm,Rn */
	IF(0x0C09DD7Eu); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09DD80u, 2);  /* 0C09DD7E mov.b @(r0,Rm),Rn */
	r2 = r6 & 0xFF;  /* 0C09DD80 extu.b Rm,Rn */
	T = r2 > r5;  /* 0C09DD82 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09DDC0u, 5); goto L_0C09DDC0; }  /* 0C09DD84 bt */
L_0C09DD86: BLKS(0x0C09DD86u);
	r0 = 0xC09DD90u;  /* 0C09DD86 mova @(disp,pc),r0 */
	IF(0x0C09DD88u); r11 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09DD8Au, 2);  /* 0C09DD88 mov.b @(r0,Rm),Rn */
	r11 = r11 & 0xFF;  /* 0C09DD8A extu.b Rm,Rn */
	IF(0x0C09DD8Cu); { u32 tv_ = (r11 + 0x0C09DD90u); u32 t_ = PHYS(tv_); IF(0x0C09DD8Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C09DDA0u: goto L_0C09DDA0; case 0x0C09DE00u: goto L_0C09DE00; case 0x0C09DE30u: goto L_0C09DE30; case 0x0C09DE50u: goto L_0C09DE50; default: JUMPD(tv_); } }  /* 0C09DD8C braf Rn */
L_0C09DDA0: BLKS(0x0C09DDA0u);
	r2 = 0xB4u; UPD(0x0C09DDA2u, 1);  /* 0C09DDA0 mov.w @(disp,pc),Rn */
	IF(0x0C09DDA2u); MACL = r8 * r2;  /* 0C09DDA2 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09DDA6u, 3);  /* 0C09DDA4 mov.l @(disp,pc),Rn */
	IF(0x0C09DDA6u); r7 = MACL;  /* 0C09DDA6 sts macl,Rn */
	r7 += r0;  /* 0C09DDA8 add Rm,Rn */
	r3 = R32(r7 + 0x34u); UPD(0x0C09DDACu, 3);  /* 0C09DDAA mov.l @(disp,Rm),Rn */
	r1 = 0x9Fu; UPD(0x0C09DDAEu, 1);  /* 0C09DDAC mov.w @(disp,pc),Rn */
	r12 = r3 & 0xFF;  /* 0C09DDAE extu.b Rm,Rn */
	T = r12 > r1;  /* 0C09DDB0 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C09DDF0u, 5); goto L_0C09DDF0; }  /* 0C09DDB2 bf */
L_0C09DDB4: BLKS(0x0C09DDB4u);
	r3 = r1;  /* 0C09DDB4 mov Rm,Rn */
	r3 += r7;  /* 0C09DDB6 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C09DDBAu, 3);  /* 0C09DDB8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C09DDBA add #imm,Rn */
	W8(r3, r4); UPD(0x0C09DDBEu, 2);  /* 0C09DDBC mov.b Rm,@Rn */
	IF(0x0C09DDBEu); ;  /* 0C09DDBE nop */
	UPD(0x0C09DDC0u, 1);
L_0C09DDC0: BLKS(0x0C09DDC0u);
	r12 = 0xB4u; UPD(0x0C09DDC2u, 1);  /* 0C09DDC0 mov.w @(disp,pc),Rn */
	IF(0x0C09DDC2u); MACL = r8 * r12;  /* 0C09DDC2 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C09DDC6u, 3);  /* 0C09DDC4 mov.l @(disp,pc),Rn */
	IF(0x0C09DDC6u); r8 = MACL;  /* 0C09DDC6 sts macl,Rn */
	r10 = 0xC3929E0u; UPD(0x0C09DDCAu, 2);  /* 0C09DDC8 mov.l @(disp,pc),Rn */
	r8 += r11;  /* 0C09DDCA add Rm,Rn */
	r2 = R32(r10); UPD(0x0C09DDCEu, 2);  /* 0C09DDCC mov.l @Rm,Rn */
	r9 = R32(r8 + 0x30u); UPD(0x0C09DDD0u, 1);  /* 0C09DDCE mov.l @(disp,Rm),Rn */
	r9 += r2;  /* 0C09DDD0 add Rm,Rn */
	W32(r8 + 0x28u, r9); UPD(0x0C09DDD4u, 2);  /* 0C09DDD2 mov.l Rm,@(disp,Rn) */
L_0C09DDD4: BLKS(0x0C09DDD4u);
	r15 = r14;  /* 0C09DDD4 mov Rm,Rn */
	IF(0x0C09DDD6u); PR = R32(r15); r15 += 4; UPD(0x0C09DDD8u, 2);  /* 0C09DDD6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09DDDAu, 1);  /* 0C09DDD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09DDDCu, 1);  /* 0C09DDDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09DDDEu, 1);  /* 0C09DDDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09DDE0u, 1);  /* 0C09DDDE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09DDE2u, 1);  /* 0C09DDE0 mov.l @Rm+,Rn */
	IF(0x0C09DDE2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09DDE2 rts */
L_0C09DDF0: BLKS(0x0C09DDF0u);
	r1 = 0x505u; UPD(0x0C09DDF2u, 1);  /* 0C09DDF0 mov.w @(disp,pc),Rn */
	r3 += r1;  /* 0C09DDF2 add Rm,Rn */
	UPD(0x0C09DDF4u, 1);
L_0C09DDF4: BLKS(0x0C09DDF4u);
	{ W32(r7 + 0x34u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09DDC0u, 3); goto L_0C09DDC0; }  /* 0C09DDF4 bra */
L_0C09DE00: BLKS(0x0C09DE00u);
	r6 = 0xB4u; UPD(0x0C09DE02u, 1);  /* 0C09DE00 mov.w @(disp,pc),Rn */
	IF(0x0C09DE02u); MACL = r8 * r6;  /* 0C09DE02 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C09DE06u, 3);  /* 0C09DE04 mov.l @(disp,pc),Rn */
	IF(0x0C09DE06u); r3 = MACL;  /* 0C09DE06 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C09DE0Au, 2);  /* 0C09DE08 mov.w @(disp,pc),Rn */
	r3 += r5;  /* 0C09DE0A add Rm,Rn */
	r2 += r3;  /* 0C09DE0C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C09DE10u, 3);  /* 0C09DE0E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C09DE10 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C09DE12 extu.b Rm,Rn */
	W8(r2, r1); UPD(0x0C09DE16u, 3);  /* 0C09DE14 mov.b Rm,@Rn */
	T = r0 == 0x1Eu;  /* 0C09DE16 cmp/eq #imm,r0 */
	UPD(0x0C09DE18u, 1);
L_0C09DE18: BLKS(0x0C09DE18u);
	if (!T) { UPD(0x0C09DDC0u, 3); goto L_0C09DDC0; }  /* 0C09DE18 bf */
L_0C09DE1A: BLKS(0x0C09DE1Au);
	r12 = 0x0u;  /* 0C09DE1A mov #imm,Rn */
	r0 = 0x9Fu; UPD(0x0C09DE1Eu, 2);  /* 0C09DE1C mov.w @(disp,pc),Rn */
	IF(0x0C09DE1Eu); r11 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09DE20u, 1);  /* 0C09DE1E mov.b @(r0,Rm),Rn */
	r11 += 0x1u;  /* 0C09DE20 add #imm,Rn */
	W8(r2, r12); UPD(0x0C09DE24u, 2);  /* 0C09DE22 mov.b Rm,@Rn */
	{ IF(0x0C09DE26u); W8(r0 + r3, r11); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09DDC0u, 3); goto L_0C09DDC0; }  /* 0C09DE24 bra */
L_0C09DE30: BLKS(0x0C09DE30u);
	r10 = 0xB4u; UPD(0x0C09DE32u, 1);  /* 0C09DE30 mov.w @(disp,pc),Rn */
	IF(0x0C09DE32u); MACL = r8 * r10;  /* 0C09DE32 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C09DE36u, 3);  /* 0C09DE34 mov.l @(disp,pc),Rn */
	IF(0x0C09DE36u); r3 = MACL;  /* 0C09DE36 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C09DE3Au, 2);  /* 0C09DE38 mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C09DE3A add Rm,Rn */
	r2 += r3;  /* 0C09DE3C add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C09DE40u, 3);  /* 0C09DE3E mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C09DE40 add #imm,Rn */
	r0 = r7 & 0xFF;  /* 0C09DE42 extu.b Rm,Rn */
	W8(r2, r7); UPD(0x0C09DE46u, 3);  /* 0C09DE44 mov.b Rm,@Rn */
	{ T = r0 == 0x5Au; /* slot cmp/eq #imm,r0 */ UPD(0x0C09DE18u, 3); goto L_0C09DE18; }  /* 0C09DE46 bra */
L_0C09DE50: BLKS(0x0C09DE50u);
	r3 = 0xB4u; UPD(0x0C09DE52u, 1);  /* 0C09DE50 mov.w @(disp,pc),Rn */
	r0 = 0x5u;  /* 0C09DE52 mov #imm,Rn */
	IF(0x0C09DE54u); MACL = r8 * r3;  /* 0C09DE54 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09DE58u, 4);  /* 0C09DE56 mov.l @(disp,pc),Rn */
	IF(0x0C09DE58u); r7 = MACL;  /* 0C09DE58 sts macl,Rn */
	r7 += r2;  /* 0C09DE5A add Rm,Rn */
	r3 = R32(r7 + 0x34u); UPD(0x0C09DE5Eu, 3);  /* 0C09DE5C mov.l @(disp,Rm),Rn */
	r4 = r3 & 0xFF;  /* 0C09DE5E extu.b Rm,Rn */
	T = r4 > r0;  /* 0C09DE60 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09DE68u, 5); goto L_0C09DE68; }  /* 0C09DE62 bt */
L_0C09DE64: BLKS(0x0C09DE64u);
	r5 = 0x0u;  /* 0C09DE64 mov #imm,Rn */
	W32(r7, r5); UPD(0x0C09DE68u, 2);  /* 0C09DE66 mov.l Rm,@Rn */
L_0C09DE68: BLKS(0x0C09DE68u);
	r1 = 0xFFFFFAFBu; UPD(0x0C09DE6Au, 1);  /* 0C09DE68 mov.w @(disp,pc),Rn */
	{ r3 += r1; /* slot add Rm,Rn */ UPD(0x0C09DDF4u, 3); goto L_0C09DDF4; }  /* 0C09DE6A bra */
L_0C09DE70: BLKS(0x0C09DE70u);
	r3 = 0xB4u; UPD(0x0C09DE72u, 1);  /* 0C09DE70 mov.w @(disp,pc),Rn */
	IF(0x0C09DE72u); MACL = r8 * r3;  /* 0C09DE72 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09DE76u, 3);  /* 0C09DE74 mov.l @(disp,pc),Rn */
	IF(0x0C09DE76u); r3 = MACL;  /* 0C09DE76 sts macl,Rn */
	r0 = 0x8Cu; UPD(0x0C09DE7Au, 2);  /* 0C09DE78 mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C09DE7A add Rm,Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C09DE7Eu, 2);  /* 0C09DE7C mov.l @(disp,Rm),Rn */
	IF(0x0C09DE7Eu); r4 = R32(r0 + r3); UPD(0x0C09DE80u, 1);  /* 0C09DE7E mov.l @(r0,Rm),Rn */
	r7 = 0xFF800000u; UPD(0x0C09DE82u, 1);  /* 0C09DE80 mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C09DE82 add Rm,Rn */
	T = (s32)r2 >= (s32)r7;  /* 0C09DE84 cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x30u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09DE90u, 5); goto L_0C09DE90; } UPD(0x0C09DE8Au, 1); goto L_0C09DE8A; }  /* 0C09DE86 bt/s */
L_0C09DE8A: BLKS(0x0C09DE8Au);
	r0 = 0x2000000u; UPD(0x0C09DE8Cu, 1);  /* 0C09DE8A mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C09DE8C add Rm,Rn */
	W32(r3 + 0x30u, r2); UPD(0x0C09DE90u, 2);  /* 0C09DE8E mov.l Rm,@(disp,Rn) */
L_0C09DE90: BLKS(0x0C09DE90u);
	r2 = R32(r3 + 0x30u); UPD(0x0C09DE92u, 1);  /* 0C09DE90 mov.l @(disp,Rm),Rn */
	r5 = 0x1800000u; UPD(0x0C09DE94u, 1);  /* 0C09DE92 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C09DE94 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09DE9Eu, 4); goto L_0C09DE9E; }  /* 0C09DE96 bf */
L_0C09DE98: BLKS(0x0C09DE98u);
	r9 = 0xFE000000u; UPD(0x0C09DE9Au, 1);  /* 0C09DE98 mov.l @(disp,pc),Rn */
	r2 += r9;  /* 0C09DE9A add Rm,Rn */
	W32(r3 + 0x30u, r2); UPD(0x0C09DE9Eu, 2);  /* 0C09DE9C mov.l Rm,@(disp,Rn) */
L_0C09DE9E: BLKS(0x0C09DE9Eu);
	r6 = 0x9Fu; UPD(0x0C09DEA0u, 1);  /* 0C09DE9E mov.w @(disp,pc),Rn */
	r6 += r3;  /* 0C09DEA0 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C09DEA4u, 2);  /* 0C09DEA2 mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C09DEA4 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C09DEA6 tst Rm,Rn */
	{ u32 c_ = T; r7 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09DF40u, 5); goto L_0C09DF40; } goto L_0C09DEAC; }  /* 0C09DEA8 bt/s */
L_0C09DEAC: BLKS(0x0C09DEACu);
	T = r0 == 0x1u;  /* 0C09DEAC cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09DEE0u, 5); goto L_0C09DEE0; }  /* 0C09DEAE bt */
L_0C09DEB0: BLKS(0x0C09DEB0u);
	r2 = 0xB4u; UPD(0x0C09DEB2u, 1);  /* 0C09DEB0 mov.w @(disp,pc),Rn */
	IF(0x0C09DEB2u); MACL = r8 * r2;  /* 0C09DEB2 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C09DEB6u, 3);  /* 0C09DEB4 mov.l @(disp,pc),Rn */
	IF(0x0C09DEB6u); r8 = MACL;  /* 0C09DEB6 sts macl,Rn */
	r8 += r3;  /* 0C09DEB8 add Rm,Rn */
	r9 = R32(r8 + 0x2Cu); UPD(0x0C09DEBCu, 3);  /* 0C09DEBA mov.l @(disp,Rm),Rn */
	r8 += 0x50u;  /* 0C09DEBC add #imm,Rn */
	r10 = R32(r8); UPD(0x0C09DEC0u, 2);  /* 0C09DEBE mov.l @Rm,Rn */
	r8 += 0xFFFFFFB0u;  /* 0C09DEC0 add #imm,Rn */
	r9 += r10;  /* 0C09DEC2 add Rm,Rn */
	W32(r8 + 0x24u, r9); UPD(0x0C09DEC6u, 3);  /* 0C09DEC4 mov.l Rm,@(disp,Rn) */
	r5 = 0xC3929E0u; UPD(0x0C09DEC8u, 1);  /* 0C09DEC6 mov.l @(disp,pc),Rn */
	r7 = R32(r8 + 0x30u); UPD(0x0C09DECAu, 1);  /* 0C09DEC8 mov.l @(disp,Rm),Rn */
	r0 = R32(r5); UPD(0x0C09DECCu, 1);  /* 0C09DECA mov.l @Rm,Rn */
	r7 += r0;  /* 0C09DECC add Rm,Rn */
	{ W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09DDD4u, 4); goto L_0C09DDD4; }  /* 0C09DECE bra */
L_0C09DEE0: BLKS(0x0C09DEE0u);
	r7 = R32(r3 + 0x34u); UPD(0x0C09DEE2u, 1);  /* 0C09DEE0 mov.l @(disp,Rm),Rn */
	r2 = 0xFF00u; UPD(0x0C09DEE4u, 1);  /* 0C09DEE2 mov.l @(disp,pc),Rn */
	r10 = 0x400u; UPD(0x0C09DEE6u, 1);  /* 0C09DEE4 mov.w @(disp,pc),Rn */
	r2 &= r7;  /* 0C09DEE6 and Rm,Rn */
	T = r2 > r10;  /* 0C09DEE8 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09DF00u, 5); goto L_0C09DF00; }  /* 0C09DEEA bt */
L_0C09DEEC: BLKS(0x0C09DEECu);
	r11 = 0x0u;  /* 0C09DEEC mov #imm,Rn */
	{ W32(r3, r11); /* slot mov.l Rm,@Rn */ UPD(0x0C09DEB0u, 4); goto L_0C09DEB0; }  /* 0C09DEEE bra */
L_0C09DF00: BLKS(0x0C09DF00u);
	r1 = 0xFFFFFBFCu; UPD(0x0C09DF02u, 1);  /* 0C09DF00 mov.w @(disp,pc),Rn */
	r7 += r1;  /* 0C09DF02 add Rm,Rn */
	UPD(0x0C09DF04u, 1);
L_0C09DF04: BLKS(0x0C09DF04u);
	{ W32(r3 + 0x34u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09DEB0u, 3); goto L_0C09DEB0; }  /* 0C09DF04 bra */
L_0C09DF40: BLKS(0x0C09DF40u);
	r7 += 0x50u;  /* 0C09DF40 add #imm,Rn */
	r10 = R32(r7); UPD(0x0C09DF44u, 2);  /* 0C09DF42 mov.l @Rm,Rn */
	r1 = 0xF0u; UPD(0x0C09DF46u, 1);  /* 0C09DF44 mov.w @(disp,pc),Rn */
	IF(0x0C09DF46u); MACL = r10 * r1;  /* 0C09DF46 mul.l Rm,Rn */
	IF(0x0C09DF48u); r2 = MACL;  /* 0C09DF48 sts macl,Rn */
	IF(0x0C09DF4Au); T = (s32)r2 >= 0;  /* 0C09DF4A cmp/pz Rn */
	if (!T) { UPD(0x0C09DF70u, 7); goto L_0C09DF70; }  /* 0C09DF4C bf */
L_0C09DF4E: BLKS(0x0C09DF4Eu);
	r11 = 0xFFFFFFF8u;  /* 0C09DF4E mov #imm,Rn */
	IF(0x0C09DF50u); ARG0(0x42BCu); { s32 s_ = (s32)r11; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C09DF50 shad Rm,Rn */
	W32(r7, r2); UPD(0x0C09DF54u, 3);  /* 0C09DF52 mov.l Rm,@Rn */
	r2 = 0x99u; UPD(0x0C09DF56u, 1);  /* 0C09DF54 mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C09DF56 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C09DF5Au, 2);  /* 0C09DF58 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C09DF5A add #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C09DF5C extu.b Rm,Rn */
	T = r0 == 0x78u;  /* 0C09DF5E cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09DEB0u, 6); goto L_0C09DEB0; } UPD(0x0C09DF64u, 1); goto L_0C09DF64; }  /* 0C09DF60 bf/s */
L_0C09DF64: BLKS(0x0C09DF64u);
	r12 = r5;  /* 0C09DF64 mov Rm,Rn */
	r12 += 0x1u;  /* 0C09DF66 add #imm,Rn */
	W8(r6, r12); UPD(0x0C09DF6Au, 3);  /* 0C09DF68 mov.b Rm,@Rn */
L_0C09DF6A: BLKS(0x0C09DF6Au);
	{ IF(0x0C09DF6Cu); ; /* slot nop */ UPD(0x0C09DEB0u, 3); goto L_0C09DEB0; }  /* 0C09DF6A bra */
L_0C09DF70: BLKS(0x0C09DF70u);
	r1 += 0xFu;  /* 0C09DF70 add #imm,Rn */
	{ r2 += r1; /* slot add Rm,Rn */ UPD(0x0C09DF4Eu, 4); goto L_0C09DF4E; }  /* 0C09DF72 bra */
L_0C09DF80: BLKS(0x0C09DF80u);
	r6 = 0xB4u; UPD(0x0C09DF82u, 1);  /* 0C09DF80 mov.w @(disp,pc),Rn */
	IF(0x0C09DF82u); MACL = r8 * r6;  /* 0C09DF82 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C09DF86u, 3);  /* 0C09DF84 mov.l @(disp,pc),Rn */
	IF(0x0C09DF86u); r3 = MACL;  /* 0C09DF86 sts macl,Rn */
	r0 = 0x8Cu; UPD(0x0C09DF8Au, 2);  /* 0C09DF88 mov.w @(disp,pc),Rn */
	r3 += r4;  /* 0C09DF8A add Rm,Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C09DF8Eu, 2);  /* 0C09DF8C mov.l @(disp,Rm),Rn */
	IF(0x0C09DF8Eu); r7 = R32(r0 + r3); UPD(0x0C09DF90u, 1);  /* 0C09DF8E mov.l @(r0,Rm),Rn */
	r12 = 0xFF800000u; UPD(0x0C09DF92u, 1);  /* 0C09DF90 mov.l @(disp,pc),Rn */
	r2 += r7;  /* 0C09DF92 add Rm,Rn */
	T = (s32)r2 >= (s32)r12;  /* 0C09DF94 cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x30u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09DFA0u, 5); goto L_0C09DFA0; } UPD(0x0C09DF9Au, 1); goto L_0C09DF9A; }  /* 0C09DF96 bt/s */
L_0C09DF9A: BLKS(0x0C09DF9Au);
	r0 = 0x2000000u; UPD(0x0C09DF9Cu, 1);  /* 0C09DF9A mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C09DF9C add Rm,Rn */
	W32(r3 + 0x30u, r2); UPD(0x0C09DFA0u, 2);  /* 0C09DF9E mov.l Rm,@(disp,Rn) */
L_0C09DFA0: BLKS(0x0C09DFA0u);
	r2 = R32(r3 + 0x30u); UPD(0x0C09DFA2u, 1);  /* 0C09DFA0 mov.l @(disp,Rm),Rn */
	r5 = 0x1800000u; UPD(0x0C09DFA4u, 1);  /* 0C09DFA2 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C09DFA4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09DFAEu, 4); goto L_0C09DFAE; }  /* 0C09DFA6 bf */
L_0C09DFA8: BLKS(0x0C09DFA8u);
	r9 = 0xFE000000u; UPD(0x0C09DFAAu, 1);  /* 0C09DFA8 mov.l @(disp,pc),Rn */
	r2 += r9;  /* 0C09DFAA add Rm,Rn */
	W32(r3 + 0x30u, r2); UPD(0x0C09DFAEu, 2);  /* 0C09DFAC mov.l Rm,@(disp,Rn) */
L_0C09DFAE: BLKS(0x0C09DFAEu);
	r6 = 0x9Fu; UPD(0x0C09DFB0u, 1);  /* 0C09DFAE mov.w @(disp,pc),Rn */
	r6 += r3;  /* 0C09DFB0 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C09DFB4u, 2);  /* 0C09DFB2 mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C09DFB4 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C09DFB6 tst Rm,Rn */
	{ u32 c_ = T; r7 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09DF40u, 5); goto L_0C09DF40; } goto L_0C09DFBC; }  /* 0C09DFB8 bt/s */
L_0C09DFBC: BLKS(0x0C09DFBCu);
	T = r0 == 0x1u;  /* 0C09DFBC cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C09DF6Au, 5); goto L_0C09DF6A; }  /* 0C09DFBE bf */
L_0C09DFC0: BLKS(0x0C09DFC0u);
	r7 = R32(r3 + 0x34u); UPD(0x0C09DFC2u, 1);  /* 0C09DFC0 mov.l @(disp,Rm),Rn */
	r4 = 0x807u; UPD(0x0C09DFC4u, 1);  /* 0C09DFC2 mov.w @(disp,pc),Rn */
	r1 = r7 & 0xFFFF;  /* 0C09DFC4 extu.w Rm,Rn */
	T = r1 > r4;  /* 0C09DFC6 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09DFCEu, 5); goto L_0C09DFCE; }  /* 0C09DFC8 bt */
L_0C09DFCA: BLKS(0x0C09DFCAu);
	r6 = 0x0u;  /* 0C09DFCA mov #imm,Rn */
	W32(r3, r6); UPD(0x0C09DFCEu, 2);  /* 0C09DFCC mov.l Rm,@Rn */
L_0C09DFCE: BLKS(0x0C09DFCEu);
	r1 = 0xFFFFF7F8u; UPD(0x0C09DFD0u, 1);  /* 0C09DFCE mov.w @(disp,pc),Rn */
	{ r7 += r1; /* slot add Rm,Rn */ UPD(0x0C09DF04u, 3); goto L_0C09DF04; }  /* 0C09DFD0 bra */
L_0C09DFE0: BLKS(0x0C09DFE0u);
	r9 = 0xC0A03F0u; UPD(0x0C09DFE2u, 1);  /* 0C09DFE0 mov.l @(disp,pc),Rn */
	IF(0x0C09DFE2u); { u32 t_ = r9; PR = 0x0C09DFE6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09DFE6u); }  /* 0C09DFE2 jsr @Rn */
L_0C09DFE6: BLKS(0x0C09DFE6u);
	IF(0x0C09DFE6u); T = (s32)r0 >= 0;  /* 0C09DFE6 cmp/pz Rn */
	if (!T) { UPD(0x0C09E080u, 4); goto L_0C09E080; }  /* 0C09DFE8 bf */
L_0C09DFEA: BLKS(0x0C09DFEAu);
	r10 = 0x3u;  /* 0C09DFEA mov #imm,Rn */
	r4 = 0xB4u; UPD(0x0C09DFEEu, 2);  /* 0C09DFEC mov.w @(disp,pc),Rn */
	IF(0x0C09DFEEu); MACL = r0 * r4;  /* 0C09DFEE mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C09DFF2u, 3);  /* 0C09DFF0 mov.l @(disp,pc),Rn */
	IF(0x0C09DFF2u); r0 = MACL;  /* 0C09DFF2 sts macl,Rn */
	r12 += r0;  /* 0C09DFF4 add Rm,Rn */
	r0 = 0x9Fu; UPD(0x0C09DFF8u, 3);  /* 0C09DFF6 mov.w @(disp,pc),Rn */
	IF(0x0C09DFF8u); r11 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C09DFFAu, 1);  /* 0C09DFF8 mov.b @(r0,Rm),Rn */
	r2 = r11 & 0xFF;  /* 0C09DFFA extu.b Rm,Rn */
	T = r2 > r10;  /* 0C09DFFC cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09E058u, 5); goto L_0C09E058; }  /* 0C09DFFE bt */
L_0C09E000: BLKS(0x0C09E000u);
	r0 = 0xC09E030u;  /* 0C09E000 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09E002 add Rm,Rn */
	IF(0x0C09E004u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09E006u, 3);  /* 0C09E004 mov.w @(r0,Rm),Rn */
	IF(0x0C09E006u); { u32 tv_ = (r3 + 0x0C09E00Au); u32 t_ = PHYS(tv_); IF(0x0C09E008u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09DDC0u: goto L_0C09DDC0; case 0x0C09E040u: goto L_0C09E040; case 0x0C09E060u: goto L_0C09E060; default: JUMPD(tv_); } }  /* 0C09E006 braf Rn */
L_0C09E040: BLKS(0x0C09E040u);
	r9 = 0xB4u; UPD(0x0C09E042u, 1);  /* 0C09E040 mov.w @(disp,pc),Rn */
	IF(0x0C09E042u); MACL = r8 * r9;  /* 0C09E042 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09E046u, 3);  /* 0C09E044 mov.l @(disp,pc),Rn */
	IF(0x0C09E046u); r3 = MACL;  /* 0C09E046 sts macl,Rn */
	r3 += r2;  /* 0C09E048 add Rm,Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C09E04Cu, 3);  /* 0C09E04A mov.l @(disp,Rm),Rn */
	r5 = 0x780000u; UPD(0x0C09E04Eu, 1);  /* 0C09E04C mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C09E04E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09E058u, 4); goto L_0C09E058; }  /* 0C09E050 bf */
L_0C09E052: BLKS(0x0C09E052u);
	r6 = 0xFFF40000u; UPD(0x0C09E054u, 1);  /* 0C09E052 mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C09E054 add Rm,Rn */
	W32(r3 + 0x30u, r2); UPD(0x0C09E058u, 2);  /* 0C09E056 mov.l Rm,@(disp,Rn) */
L_0C09E058: BLKS(0x0C09E058u);
	{ IF(0x0C09E05Au); ; /* slot nop */ UPD(0x0C09DDC0u, 3); goto L_0C09DDC0; }  /* 0C09E058 bra */
L_0C09E060: BLKS(0x0C09E060u);
	r11 = 0xB4u; UPD(0x0C09E062u, 1);  /* 0C09E060 mov.w @(disp,pc),Rn */
	IF(0x0C09E062u); MACL = r8 * r11;  /* 0C09E062 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C09E066u, 3);  /* 0C09E064 mov.l @(disp,pc),Rn */
	IF(0x0C09E066u); r3 = MACL;  /* 0C09E066 sts macl,Rn */
	r3 += r7;  /* 0C09E068 add Rm,Rn */
	r2 = R32(r3 + 0x34u); UPD(0x0C09E06Cu, 3);  /* 0C09E06A mov.l @(disp,Rm),Rn */
	r10 = 0xFF00u; UPD(0x0C09E06Eu, 1);  /* 0C09E06C mov.l @(disp,pc),Rn */
	r7 = 0x808u; UPD(0x0C09E070u, 1);  /* 0C09E06E mov.w @(disp,pc),Rn */
	r10 &= r2;  /* 0C09E070 and Rm,Rn */
	T = r10 > r7;  /* 0C09E072 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C09E058u, 5); goto L_0C09E058; }  /* 0C09E074 bf */
L_0C09E076: BLKS(0x0C09E076u);
	r2 -= r7;  /* 0C09E076 sub Rm,Rn */
	W32(r3 + 0x34u, r2); UPD(0x0C09E07Au, 2);  /* 0C09E078 mov.l Rm,@(disp,Rn) */
L_0C09E07A: BLKS(0x0C09E07Au);
	{ IF(0x0C09E07Cu); ; /* slot nop */ UPD(0x0C09DDC0u, 3); goto L_0C09DDC0; }  /* 0C09E07A bra */
L_0C09E080: BLKS(0x0C09E080u);
	r7 = 0xB4u; UPD(0x0C09E082u, 1);  /* 0C09E080 mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C09E082 mov #imm,Rn */
	IF(0x0C09E084u); MACL = r8 * r7;  /* 0C09E084 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C09E088u, 4);  /* 0C09E086 mov.l @(disp,pc),Rn */
	IF(0x0C09E088u); r0 = MACL;  /* 0C09E088 sts macl,Rn */
	IF(0x0C09E08Au); W32(r0 + r8, r6); UPD(0x0C09E08Cu, 2);  /* 0C09E08A mov.l Rm,@(r0,Rn) */
L_0C09E08C: BLKS(0x0C09E08Cu);
	{ IF(0x0C09E08Eu); ; /* slot nop */ UPD(0x0C09DDD4u, 3); goto L_0C09DDD4; }  /* 0C09E08C bra */
L_0C09E090: BLKS(0x0C09E090u);
	r5 = 0xB4u; UPD(0x0C09E092u, 1);  /* 0C09E090 mov.w @(disp,pc),Rn */
	IF(0x0C09E092u); MACL = r8 * r5;  /* 0C09E092 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C09E096u, 3);  /* 0C09E094 mov.l @(disp,pc),Rn */
	IF(0x0C09E096u); r0 = MACL;  /* 0C09E096 sts macl,Rn */
	r3 = 0xC392AFDu; UPD(0x0C09E09Au, 2);  /* 0C09E098 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C09E09A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C09E09Eu, 2);  /* 0C09E09C mov.b @Rm,Rn */
	r0 &= 0x1u;  /* 0C09E09E and #imm,r0 */
	r0 += 0x1u;  /* 0C09E0A0 add #imm,Rn */
	r12 = 0xC0A0380u; UPD(0x0C09E0A4u, 3);  /* 0C09E0A2 mov.l @(disp,pc),Rn */
	W32(r4 + 0xCu, r0); UPD(0x0C09E0A6u, 1);  /* 0C09E0A4 mov.l Rm,@(disp,Rn) */
	IF(0x0C09E0A6u); { u32 t_ = r12; PR = 0x0C09E0AAu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09E0AAu); }  /* 0C09E0A6 jsr @Rn */
L_0C09E0AA: BLKS(0x0C09E0AAu);
	r9 = 0xB4u; UPD(0x0C09E0ACu, 1);  /* 0C09E0AA mov.w @(disp,pc),Rn */
	IF(0x0C09E0ACu); MACL = r8 * r9;  /* 0C09E0AC mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09E0B0u, 3);  /* 0C09E0AE mov.l @(disp,pc),Rn */
	IF(0x0C09E0B0u); r3 = MACL;  /* 0C09E0B0 sts macl,Rn */
	r5 = 0x9Fu; UPD(0x0C09E0B4u, 2);  /* 0C09E0B2 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C09E0B4 add Rm,Rn */
	r5 += r3;  /* 0C09E0B6 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C09E0BAu, 3);  /* 0C09E0B8 mov.b @Rm,Rn */
	r0 = r6 & 0xFF;  /* 0C09E0BA extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C09E0BC cmp/eq #imm,r0 */
	{ u32 c_ = T; r10 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09E130u, 5); goto L_0C09E130; } goto L_0C09E0C2; }  /* 0C09E0BE bt/s */
L_0C09E0C2: BLKS(0x0C09E0C2u);
	T = (s32)r0 > (s32)r10;  /* 0C09E0C2 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C09E100u, 5); goto L_0C09E100; } goto L_0C09E0C8; }  /* 0C09E0C4 bt/s */
L_0C09E0C8: BLKS(0x0C09E0C8u);
	T = (r0 & r0) == 0;  /* 0C09E0C8 tst Rm,Rn */
	if (!T) { UPD(0x0C09E07Au, 5); goto L_0C09E07A; }  /* 0C09E0CA bf */
L_0C09E0CC: BLKS(0x0C09E0CCu);
	r7 = R32(r3 + 0x34u); UPD(0x0C09E0CEu, 1);  /* 0C09E0CC mov.l @(disp,Rm),Rn */
	r11 = 0xF7u; UPD(0x0C09E0D0u, 1);  /* 0C09E0CE mov.w @(disp,pc),Rn */
	r1 = r7 & 0xFF;  /* 0C09E0D0 extu.b Rm,Rn */
	T = r1 > r11;  /* 0C09E0D2 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C09E0F0u, 5); goto L_0C09E0F0; }  /* 0C09E0D4 bf */
L_0C09E0D6: BLKS(0x0C09E0D6u);
	r12 = 0xFFFFu; UPD(0x0C09E0D8u, 1);  /* 0C09E0D6 mov.l @(disp,pc),Rn */
	r7 |= r12;  /* 0C09E0D8 or Rm,Rn */
	W32(r3 + 0x34u, r7); UPD(0x0C09E0DCu, 2);  /* 0C09E0DA mov.l Rm,@(disp,Rn) */
	r3 = r6;  /* 0C09E0DC mov Rm,Rn */
	UPD(0x0C09E0DEu, 1);
L_0C09E0DE: BLKS(0x0C09E0DEu);
	r3 += 0x1u;  /* 0C09E0DE add #imm,Rn */
	{ W8(r5, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C09DDC0u, 4); goto L_0C09DDC0; }  /* 0C09E0E0 bra */
L_0C09E0F0: BLKS(0x0C09E0F0u);
	r1 = 0x808u; UPD(0x0C09E0F2u, 1);  /* 0C09E0F0 mov.w @(disp,pc),Rn */
	r7 += r1;  /* 0C09E0F2 add Rm,Rn */
	UPD(0x0C09E0F4u, 1);
L_0C09E0F4: BLKS(0x0C09E0F4u);
	W32(r3 + 0x34u, r7); UPD(0x0C09E0F6u, 1);  /* 0C09E0F4 mov.l Rm,@(disp,Rn) */
L_0C09E0F6: BLKS(0x0C09E0F6u);
	{ IF(0x0C09E0F8u); ; /* slot nop */ UPD(0x0C09DDC0u, 3); goto L_0C09DDC0; }  /* 0C09E0F6 bra */
L_0C09E100: BLKS(0x0C09E100u);
	if (!T) { UPD(0x0C09E0F6u, 3); goto L_0C09E0F6; }  /* 0C09E100 bf */
L_0C09E102: BLKS(0x0C09E102u);
	r7 = R32(r3 + 0x34u); UPD(0x0C09E104u, 1);  /* 0C09E102 mov.l @(disp,Rm),Rn */
	r6 = 0x8u;  /* 0C09E104 mov #imm,Rn */
	r0 = r7 & 0xFF;  /* 0C09E106 extu.b Rm,Rn */
	T = r0 > r6;  /* 0C09E108 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09E120u, 6); goto L_0C09E120; }  /* 0C09E10A bt */
L_0C09E10C: BLKS(0x0C09E10Cu);
	r5 = 0x0u;  /* 0C09E10C mov #imm,Rn */
	W32(r3, r5); UPD(0x0C09E110u, 2);  /* 0C09E10E mov.l Rm,@Rn */
L_0C09E110: BLKS(0x0C09E110u);
	{ IF(0x0C09E112u); ; /* slot nop */ UPD(0x0C09DDC0u, 3); goto L_0C09DDC0; }  /* 0C09E110 bra */
L_0C09E120: BLKS(0x0C09E120u);
	r1 = 0xFFFFF7F8u; UPD(0x0C09E122u, 1);  /* 0C09E120 mov.w @(disp,pc),Rn */
	{ r7 += r1; /* slot add Rm,Rn */ UPD(0x0C09E0F4u, 3); goto L_0C09E0F4; }  /* 0C09E122 bra */
L_0C09E130: BLKS(0x0C09E130u);
	r4 = 0x99u; UPD(0x0C09E132u, 1);  /* 0C09E130 mov.w @(disp,pc),Rn */
	r4 += r3;  /* 0C09E132 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C09E136u, 2);  /* 0C09E134 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C09E136 add #imm,Rn */
	r0 = r7 & 0xFF;  /* 0C09E138 extu.b Rm,Rn */
	T = r0 == 0x78u;  /* 0C09E13A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r4, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09E110u, 6); goto L_0C09E110; } UPD(0x0C09E140u, 1); goto L_0C09E140; }  /* 0C09E13C bf/s */
L_0C09E140: BLKS(0x0C09E140u);
	{ r3 = r6; /* slot mov Rm,Rn */ UPD(0x0C09E0DEu, 3); goto L_0C09E0DE; }  /* 0C09E140 bra */
L_0C09E150: BLKS(0x0C09E150u);
	r11 = 0xB4u; UPD(0x0C09E152u, 1);  /* 0C09E150 mov.w @(disp,pc),Rn */
	IF(0x0C09E152u); MACL = r8 * r11;  /* 0C09E152 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C09E156u, 3);  /* 0C09E154 mov.l @(disp,pc),Rn */
	IF(0x0C09E156u); r10 = MACL;  /* 0C09E156 sts macl,Rn */
	r0 = 0xA0u; UPD(0x0C09E15Au, 2);  /* 0C09E158 mov.w @(disp,pc),Rn */
	r10 += r12;  /* 0C09E15A add Rm,Rn */
	IF(0x0C09E15Cu); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09E15Eu, 2);  /* 0C09E15C mov.b @(r0,Rm),Rn */
	r9 = r4 & 0xFF;  /* 0C09E15E extu.b Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09E160 tst Rm,Rn */
	{ u32 c_ = T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09E210u, 5); goto L_0C09E210; } goto L_0C09E166; }  /* 0C09E162 bt/s */
L_0C09E166: BLKS(0x0C09E166u);
	T = r0 == 0x1u;  /* 0C09E166 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C09E08Cu, 5); goto L_0C09E08C; }  /* 0C09E168 bf */
L_0C09E16A: BLKS(0x0C09E16Au);
	r9 = R32(r10 + 0x24u); UPD(0x0C09E16Cu, 1);  /* 0C09E16A mov.l @(disp,Rm),Rn */
	r8 = R32(r10 + 0x28u); UPD(0x0C09E16Eu, 1);  /* 0C09E16C mov.l @(disp,Rm),Rn */
	r0 = R32(r10 + 0x2Cu); UPD(0x0C09E170u, 1);  /* 0C09E16E mov.l @(disp,Rm),Rn */
	r1 = R32(r10 + 0x30u); UPD(0x0C09E172u, 1);  /* 0C09E170 mov.l @(disp,Rm),Rn */
	r9 += r0;  /* 0C09E172 add Rm,Rn */
	r2 = 0xFF600000u; UPD(0x0C09E176u, 2);  /* 0C09E174 mov.l @(disp,pc),Rn */
	r8 += r1;  /* 0C09E176 add Rm,Rn */
	r2 += r9;  /* 0C09E178 add Rm,Rn */
	W32(r10 + 0x24u, r9); UPD(0x0C09E17Cu, 3);  /* 0C09E17A mov.l Rm,@(disp,Rn) */
	IF(0x0C09E17Cu); T = (s32)r2 >= 0;  /* 0C09E17C cmp/pz Rn */
	{ u32 c_ = !T; W32(r10 + 0x28u, r8); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09E1C0u, 4); goto L_0C09E1C0; } UPD(0x0C09E182u, 1); goto L_0C09E182; }  /* 0C09E17E bf/s */
L_0C09E182: BLKS(0x0C09E182u);
	r6 = 0xDFFFFFu; UPD(0x0C09E184u, 1);  /* 0C09E182 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C09E184 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09E18Cu, 4); goto L_0C09E18C; } goto L_0C09E18A; }  /* 0C09E186 bf/s */
L_0C09E18A: BLKS(0x0C09E18Au);
	W32(r10, r2); UPD(0x0C09E18Cu, 2);  /* 0C09E18A mov.l Rm,@Rn */
L_0C09E18C: BLKS(0x0C09E18Cu);
	r12 = 0xC3929E0u; UPD(0x0C09E18Eu, 1);  /* 0C09E18C mov.l @(disp,pc),Rn */
	r2 = R32(r10 + 0x28u); UPD(0x0C09E190u, 1);  /* 0C09E18E mov.l @(disp,Rm),Rn */
	r11 = R32(r12); UPD(0x0C09E192u, 1);  /* 0C09E190 mov.l @Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C09E194u, 1);  /* 0C09E192 mov.l @(disp,pc),Rn */
	r2 -= r11;  /* 0C09E194 sub Rm,Rn */
	r2 += r7;  /* 0C09E196 add Rm,Rn */
	IF(0x0C09E198u); T = (s32)r2 >= 0;  /* 0C09E198 cmp/pz Rn */
	if (!T) { UPD(0x0C09E1B0u, 6); goto L_0C09E1B0; }  /* 0C09E19A bf */
L_0C09E19C: BLKS(0x0C09E19Cu);
	r5 = 0xB7FFFFu; UPD(0x0C09E19Eu, 1);  /* 0C09E19C mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C09E19E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09E1A6u, 4); goto L_0C09E1A6; }  /* 0C09E1A0 bf */
L_0C09E1A2: BLKS(0x0C09E1A2u);
	r4 = 0x0u;  /* 0C09E1A2 mov #imm,Rn */
	W32(r10, r4); UPD(0x0C09E1A6u, 2);  /* 0C09E1A4 mov.l Rm,@Rn */
L_0C09E1A6: BLKS(0x0C09E1A6u);
	{ IF(0x0C09E1A8u); ; /* slot nop */ UPD(0x0C09DDD4u, 3); goto L_0C09DDD4; }  /* 0C09E1A6 bra */
L_0C09E1B0: BLKS(0x0C09E1B0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C09E19Cu, 3); goto L_0C09E19C; }  /* 0C09E1B0 bra */
L_0C09E1C0: BLKS(0x0C09E1C0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C09E182u, 3); goto L_0C09E182; }  /* 0C09E1C0 bra */
L_0C09E210: BLKS(0x0C09E210u);
	r0 = 0xC0A03F0u; UPD(0x0C09E212u, 1);  /* 0C09E210 mov.l @(disp,pc),Rn */
	IF(0x0C09E212u); { u32 t_ = r0; PR = 0x0C09E216u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09E216u); }  /* 0C09E212 jsr @Rn */
L_0C09E216: BLKS(0x0C09E216u);
	r2 = 0xC392AFDu; UPD(0x0C09E218u, 1);  /* 0C09E216 mov.l @(disp,pc),Rn */
	r1 = r0;  /* 0C09E218 mov Rm,Rn */
	IF(0x0C09E21Au); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C09E21A rotl Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C09E21Eu, 3);  /* 0C09E21C mov.b @Rm,Rn */
	IF(0x0C09E21Eu); r7 = T;  /* 0C09E21E movt Rn */
	r6 = r0;  /* 0C09E220 mov Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C09E222 tst Rm,Rn */
	r5 = 0xFFFFFFFFu;  /* 0C09E224 mov #imm,Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C09E226 negc Rm,Rn */
	r7 |= r0;  /* 0C09E228 or Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C09E22A tst Rm,Rn */
	if (T) { UPD(0x0C09E240u, 10); goto L_0C09E240; }  /* 0C09E22C bt */
L_0C09E22E: BLKS(0x0C09E22Eu);
	W32(r10, r9); UPD(0x0C09E230u, 1);  /* 0C09E22E mov.l Rm,@Rn */
L_0C09E230: BLKS(0x0C09E230u);
	{ IF(0x0C09E232u); ; /* slot nop */ UPD(0x0C09DDD4u, 3); goto L_0C09DDD4; }  /* 0C09E230 bra */
L_0C09E240: BLKS(0x0C09E240u);
	IF(0x0C09E240u); MACL = r6 * r11;  /* 0C09E240 mul.l Rm,Rn */
	r9 = 0x9Fu; UPD(0x0C09E244u, 3);  /* 0C09E242 mov.w @(disp,pc),Rn */
	IF(0x0C09E244u); r0 = MACL;  /* 0C09E244 sts macl,Rn */
	r0 += r12;  /* 0C09E246 add Rm,Rn */
	IF(0x0C09E248u); r12 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09E24Au, 3);  /* 0C09E248 mov.b @(r0,Rm),Rn */
	r11 = 0x3u;  /* 0C09E24A mov #imm,Rn */
	r2 = r12 & 0xFF;  /* 0C09E24C extu.b Rm,Rn */
	T = r2 > r11;  /* 0C09E24E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09E230u, 6); goto L_0C09E230; }  /* 0C09E250 bt */
L_0C09E252: BLKS(0x0C09E252u);
	r0 = 0xC09E25Cu;  /* 0C09E252 mova @(disp,pc),r0 */
	IF(0x0C09E254u); r10 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09E256u, 2);  /* 0C09E254 mov.b @(r0,Rm),Rn */
	r10 = r10 & 0xFF;  /* 0C09E256 extu.b Rm,Rn */
	IF(0x0C09E258u); { u32 tv_ = (r10 + 0x0C09E25Cu); u32 t_ = PHYS(tv_); IF(0x0C09E25Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C09E260u: goto L_0C09E260; case 0x0C09E290u: goto L_0C09E290; case 0x0C09E2F0u: goto L_0C09E2F0; default: JUMPD(tv_); } }  /* 0C09E258 braf Rn */
L_0C09E260: BLKS(0x0C09E260u);
	r2 = 0xB4u; UPD(0x0C09E262u, 1);  /* 0C09E260 mov.w @(disp,pc),Rn */
	IF(0x0C09E262u); MACL = r8 * r2;  /* 0C09E262 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C09E266u, 3);  /* 0C09E264 mov.l @(disp,pc),Rn */
	IF(0x0C09E266u); r8 = MACL;  /* 0C09E266 sts macl,Rn */
	IF(0x0C09E268u); MACL = r6 * r2;  /* 0C09E268 mul.l Rm,Rn */
	r8 += r3;  /* 0C09E26A add Rm,Rn */
	r5 = R32(r8 + 0x2Cu); UPD(0x0C09E26Eu, 5);  /* 0C09E26C mov.l @(disp,Rm),Rn */
	IF(0x0C09E26Eu); r7 = MACL;  /* 0C09E26E sts macl,Rn */
	r7 += r3;  /* 0C09E270 add Rm,Rn */
	r0 = R32(r7 + 0x24u); UPD(0x0C09E274u, 3);  /* 0C09E272 mov.l @(disp,Rm),Rn */
	r6 = R32(r7 + 0x28u); UPD(0x0C09E276u, 1);  /* 0C09E274 mov.l @(disp,Rm),Rn */
	r0 += r5;  /* 0C09E276 add Rm,Rn */
	r4 = R32(r8 + 0x30u); UPD(0x0C09E27Au, 2);  /* 0C09E278 mov.l @(disp,Rm),Rn */
	r6 += r4;  /* 0C09E27A add Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C09E27Eu, 2);  /* 0C09E27C mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09DDD4u, 3); goto L_0C09DDD4; }  /* 0C09E27E bra */
L_0C09E290: BLKS(0x0C09E290u);
	r0 = 0xB4u; UPD(0x0C09E292u, 1);  /* 0C09E290 mov.w @(disp,pc),Rn */
	IF(0x0C09E292u); MACL = r8 * r0;  /* 0C09E292 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C09E296u, 3);  /* 0C09E294 mov.l @(disp,pc),Rn */
	IF(0x0C09E296u); r7 = MACL;  /* 0C09E296 sts macl,Rn */
	IF(0x0C09E298u); MACL = r6 * r0;  /* 0C09E298 mul.l Rm,Rn */
	r7 += r4;  /* 0C09E29A add Rm,Rn */
	r1 = R32(r7 + 0x30u); UPD(0x0C09E29Eu, 5);  /* 0C09E29C mov.l @(disp,Rm),Rn */
	IF(0x0C09E29Eu); r12 = MACL;  /* 0C09E29E sts macl,Rn */
	r12 += r4;  /* 0C09E2A0 add Rm,Rn */
	r11 = R32(r12 + 0x28u); UPD(0x0C09E2A4u, 3);  /* 0C09E2A2 mov.l @(disp,Rm),Rn */
	r0 = 0x98u; UPD(0x0C09E2A6u, 1);  /* 0C09E2A4 mov.w @(disp,pc),Rn */
	r11 += r1;  /* 0C09E2A6 add Rm,Rn */
	r9 = R32(r12 + 0x24u); UPD(0x0C09E2AAu, 2);  /* 0C09E2A8 mov.l @(disp,Rm),Rn */
	r10 = R32(r7 + 0x2Cu); UPD(0x0C09E2ACu, 1);  /* 0C09E2AA mov.l @(disp,Rm),Rn */
	IF(0x0C09E2ACu); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09E2AEu, 1);  /* 0C09E2AC mov.b @(r0,Rm),Rn */
	r9 += r10;  /* 0C09E2AE add Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C09E2B0 tst Rm,Rn */
	W32(r7 + 0x24u, r9); UPD(0x0C09E2B4u, 3);  /* 0C09E2B2 mov.l Rm,@(disp,Rn) */
	r1 += 0xFFFFFFFFu;  /* 0C09E2B4 add #imm,Rn */
	{ u32 c_ = !T; W32(r7 + 0x28u, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09E2D0u, 4); goto L_0C09E2D0; } UPD(0x0C09E2BAu, 1); goto L_0C09E2BA; }  /* 0C09E2B6 bf/s */
L_0C09E2BA: BLKS(0x0C09E2BAu);
	r3 = R32(r7 + 0x34u); UPD(0x0C09E2BCu, 1);  /* 0C09E2BA mov.l @(disp,Rm),Rn */
	r8 = 0xDFu; UPD(0x0C09E2BEu, 1);  /* 0C09E2BC mov.w @(disp,pc),Rn */
	r6 = r3 & 0xFF;  /* 0C09E2BE extu.b Rm,Rn */
	T = r6 > r8;  /* 0C09E2C0 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C09E2E0u, 5); goto L_0C09E2E0; }  /* 0C09E2C2 bf */
L_0C09E2C4: BLKS(0x0C09E2C4u);
	r5 = 0xFFFFu; UPD(0x0C09E2C6u, 1);  /* 0C09E2C4 mov.l @(disp,pc),Rn */
	r0 = 0x9Fu; UPD(0x0C09E2C8u, 1);  /* 0C09E2C6 mov.w @(disp,pc),Rn */
	r3 |= r5;  /* 0C09E2C8 or Rm,Rn */
	IF(0x0C09E2CAu); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09E2CCu, 2);  /* 0C09E2CA mov.b @(r0,Rm),Rn */
	W32(r7 + 0x34u, r3); UPD(0x0C09E2CEu, 1);  /* 0C09E2CC mov.l Rm,@(disp,Rn) */
	r1 += 0x1u;  /* 0C09E2CE add #imm,Rn */
	UPD(0x0C09E2D0u, 1);
L_0C09E2D0: BLKS(0x0C09E2D0u);
	{ IF(0x0C09E2D2u); W8(r0 + r7, r1); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09DDD4u, 3); goto L_0C09DDD4; }  /* 0C09E2D0 bra */
L_0C09E2E0: BLKS(0x0C09E2E0u);
	r2 = 0x2020u; UPD(0x0C09E2E2u, 1);  /* 0C09E2E0 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C09E2E2 add Rm,Rn */
	{ W32(r7 + 0x34u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09DDD4u, 4); goto L_0C09DDD4; }  /* 0C09E2E4 bra */
L_0C09E2F0: BLKS(0x0C09E2F0u);
	r3 = 0xB4u; UPD(0x0C09E2F2u, 1);  /* 0C09E2F0 mov.w @(disp,pc),Rn */
	r11 = 0x3u;  /* 0C09E2F2 mov #imm,Rn */
	IF(0x0C09E2F4u); MACL = r8 * r3;  /* 0C09E2F4 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C09E2F8u, 4);  /* 0C09E2F6 mov.l @(disp,pc),Rn */
	IF(0x0C09E2F8u); r9 = MACL;  /* 0C09E2F8 sts macl,Rn */
	IF(0x0C09E2FAu); MACL = r6 * r3;  /* 0C09E2FA mul.l Rm,Rn */
	r9 += r4;  /* 0C09E2FC add Rm,Rn */
	r5 = R32(r9 + 0x2Cu); UPD(0x0C09E300u, 5);  /* 0C09E2FE mov.l @(disp,Rm),Rn */
	IF(0x0C09E300u); r10 = MACL;  /* 0C09E300 sts macl,Rn */
	r10 += r4;  /* 0C09E302 add Rm,Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C09E306u, 3);  /* 0C09E304 mov.l @(disp,Rm),Rn */
	r4 += r5;  /* 0C09E306 add Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C09E30Au, 2);  /* 0C09E308 mov.l @(disp,Rm),Rn */
	r12 = R32(r9 + 0x30u); UPD(0x0C09E30Cu, 1);  /* 0C09E30A mov.l @(disp,Rm),Rn */
	r5 += r12;  /* 0C09E30C add Rm,Rn */
	r12 = 0xA0u; UPD(0x0C09E310u, 2);  /* 0C09E30E mov.w @(disp,pc),Rn */
	r12 += r9;  /* 0C09E310 add Rm,Rn */
	r12 += 0x1u;  /* 0C09E312 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C09E316u, 3);  /* 0C09E314 mov.b @Rm,Rn */
	r7 = 0xC1D7780u; UPD(0x0C09E318u, 1);  /* 0C09E316 mov.l @(disp,pc),Rn */
	IF(0x0C09E318u); ARG0(0x40BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C09E318 shld Rm,Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C09E31Cu, 2);  /* 0C09E31A mov.l Rm,@(disp,Rn) */
	r0 += r7;  /* 0C09E31C add Rm,Rn */
	W32(r9 + 0x28u, r5); UPD(0x0C09E320u, 2);  /* 0C09E31E mov.l Rm,@(disp,Rn) */
	r12 += 0xFFFFFFFFu;  /* 0C09E320 add #imm,Rn */
	r2 = 0xC3929E0u; UPD(0x0C09E324u, 2);  /* 0C09E322 mov.l @(disp,pc),Rn */
	r6 = R32(r0 + 0x4u); UPD(0x0C09E326u, 1);  /* 0C09E324 mov.l @(disp,Rm),Rn */
	r7 = R32(r2); UPD(0x0C09E328u, 1);  /* 0C09E326 mov.l @Rm,Rn */
	r8 = 0xC057390u; UPD(0x0C09E32Au, 1);  /* 0C09E328 mov.l @(disp,pc),Rn */
	r7 += r6;  /* 0C09E32A add Rm,Rn */
	IF(0x0C09E32Cu); { u32 t_ = r8; PR = 0x0C09E330u; r6 = R32(r0); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09E330u); }  /* 0C09E32C jsr @Rn */
L_0C09E330: BLKS(0x0C09E330u);
	r4 = 0x100u; UPD(0x0C09E332u, 1);  /* 0C09E330 mov.w @(disp,pc),Rn */
	r11 = 0xC058060u; UPD(0x0C09E334u, 1);  /* 0C09E332 mov.l @(disp,pc),Rn */
	r0 += r4;  /* 0C09E334 add Rm,Rn */
	r10 = 0x86u; UPD(0x0C09E338u, 2);  /* 0C09E336 mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C09E338 exts.w Rm,Rn */
	r8 = 0x80000u; UPD(0x0C09E33Cu, 2);  /* 0C09E33A mov.l @(disp,pc),Rn */
	r10 += r9;  /* 0C09E33C add Rm,Rn */
	r4 = r3;  /* 0C09E33E mov Rm,Rn */
	r5 = r8;  /* 0C09E340 mov Rm,Rn */
	IF(0x0C09E342u); { u32 t_ = r11; PR = 0x0C09E346u; W16(r10, r0); /* slot mov.w Rm,@Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09E346u); }  /* 0C09E342 jsr @Rn */
L_0C09E346: BLKS(0x0C09E346u);
	r11 = 0xC058030u; UPD(0x0C09E348u, 1);  /* 0C09E346 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C09E348 mov Rm,Rn */
	W32(r9 + 0x2Cu, r0); UPD(0x0C09E34Cu, 2);  /* 0C09E34A mov.l Rm,@(disp,Rn) */
	IF(0x0C09E34Cu); { u32 t_ = r11; PR = 0x0C09E350u; r4 = (u32)(s32)(s16)R16(r10); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09E350u); }  /* 0C09E34C jsr @Rn */
L_0C09E350: BLKS(0x0C09E350u);
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C09E352u, 1);  /* 0C09E350 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C09E352 add #imm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C09E356u, 2);  /* 0C09E354 mov.l Rm,@(disp,Rn) */
	{ W8(r12, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C09DDD4u, 3); goto L_0C09DDD4; }  /* 0C09E356 bra */
L_0C09E360: BLKS(0x0C09E360u);
	r3 = 0xB4u; UPD(0x0C09E362u, 1);  /* 0C09E360 mov.w @(disp,pc),Rn */
	IF(0x0C09E362u); MACL = r8 * r3;  /* 0C09E362 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C09E366u, 3);  /* 0C09E364 mov.l @(disp,pc),Rn */
	IF(0x0C09E366u); r3 = MACL;  /* 0C09E366 sts macl,Rn */
	r7 = 0x9Cu; UPD(0x0C09E36Au, 2);  /* 0C09E368 mov.w @(disp,pc),Rn */
	r3 += r10;  /* 0C09E36A add Rm,Rn */
	r7 += r3;  /* 0C09E36C add Rm,Rn */
	r5 = r7;  /* 0C09E36E mov Rm,Rn */
	r5 += 0x3u;  /* 0C09E370 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C09E374u, 5);  /* 0C09E372 mov.b @Rm,Rn */
	r0 = r6 & 0xFF;  /* 0C09E374 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C09E376 cmp/eq #imm,r0 */
	{ u32 c_ = T; r9 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09E440u, 5); goto L_0C09E440; } goto L_0C09E37C; }  /* 0C09E378 bt/s */
L_0C09E37C: BLKS(0x0C09E37Cu);
	T = (s32)r0 > (s32)r9;  /* 0C09E37C cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C09E410u, 5); goto L_0C09E410; } goto L_0C09E382; }  /* 0C09E37E bt/s */
L_0C09E382: BLKS(0x0C09E382u);
	T = (r0 & r0) == 0;  /* 0C09E382 tst Rm,Rn */
	if (T) { UPD(0x0C09E3B0u, 5); goto L_0C09E3B0; }  /* 0C09E384 bt */
L_0C09E386: BLKS(0x0C09E386u);
	r9 = 0xB4u; UPD(0x0C09E388u, 1);  /* 0C09E386 mov.w @(disp,pc),Rn */
	IF(0x0C09E388u); MACL = r8 * r9;  /* 0C09E388 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C09E38Cu, 3);  /* 0C09E38A mov.l @(disp,pc),Rn */
	IF(0x0C09E38Cu); r8 = MACL;  /* 0C09E38C sts macl,Rn */
	r8 += r10;  /* 0C09E38E add Rm,Rn */
	r7 = R32(r8 + 0x30u); UPD(0x0C09E392u, 3);  /* 0C09E390 mov.l @(disp,Rm),Rn */
	r4 = 0xC3929E0u; UPD(0x0C09E394u, 1);  /* 0C09E392 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C09E394 add #imm,Rn */
	r2 = R32(r4); UPD(0x0C09E398u, 2);  /* 0C09E396 mov.l @Rm,Rn */
	r12 = R32(r8); UPD(0x0C09E39Au, 1);  /* 0C09E398 mov.l @Rm,Rn */
	r2 += r7;  /* 0C09E39A add Rm,Rn */
	r8 += 0xFFFFFFB0u;  /* 0C09E39C add #imm,Rn */
	r2 += r12;  /* 0C09E39E add Rm,Rn */
	{ W32(r8 + 0x28u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09DDD4u, 6); goto L_0C09DDD4; }  /* 0C09E3A0 bra */
L_0C09E3B0: BLKS(0x0C09E3B0u);
	r3 += 0x50u;  /* 0C09E3B0 add #imm,Rn */
	r2 = R32(r3); UPD(0x0C09E3B4u, 2);  /* 0C09E3B2 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C09E3B4 tst Rm,Rn */
	if (T) { UPD(0x0C09E3C0u, 4); goto L_0C09E3C0; }  /* 0C09E3B6 bt */
L_0C09E3B8: BLKS(0x0C09E3B8u);
	r0 = 0xFFF40000u; UPD(0x0C09E3BAu, 1);  /* 0C09E3B8 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C09E3BA add Rm,Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C09E386u, 4); goto L_0C09E386; }  /* 0C09E3BC bra */
L_0C09E3C0: BLKS(0x0C09E3C0u);
	r3 = r6;  /* 0C09E3C0 mov Rm,Rn */
	UPD(0x0C09E3C2u, 1);
L_0C09E3C2: BLKS(0x0C09E3C2u);
	r3 += 0x1u;  /* 0C09E3C2 add #imm,Rn */
	{ W8(r5, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C09E386u, 4); goto L_0C09E386; }  /* 0C09E3C4 bra */
L_0C09E410: BLKS(0x0C09E410u);
	if (!T) { UPD(0x0C09E386u, 3); goto L_0C09E386; }  /* 0C09E410 bf */
L_0C09E412: BLKS(0x0C09E412u);
	r7 = R32(r3 + 0x34u); UPD(0x0C09E414u, 1);  /* 0C09E412 mov.l @(disp,Rm),Rn */
	r5 = 0xFF00u; UPD(0x0C09E416u, 1);  /* 0C09E414 mov.l @(disp,pc),Rn */
	r6 = 0x807u; UPD(0x0C09E418u, 1);  /* 0C09E416 mov.w @(disp,pc),Rn */
	r5 &= r7;  /* 0C09E418 and Rm,Rn */
	T = r5 > r6;  /* 0C09E41A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09E430u, 5); goto L_0C09E430; }  /* 0C09E41C bt */
L_0C09E41E: BLKS(0x0C09E41Eu);
	r0 = 0x0u;  /* 0C09E41E mov #imm,Rn */
	{ W32(r3, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C09E386u, 4); goto L_0C09E386; }  /* 0C09E420 bra */
L_0C09E430: BLKS(0x0C09E430u);
	r11 = 0xFFFFF7F8u; UPD(0x0C09E432u, 1);  /* 0C09E430 mov.w @(disp,pc),Rn */
	r7 += r11;  /* 0C09E432 add Rm,Rn */
	{ W32(r3 + 0x34u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09E386u, 4); goto L_0C09E386; }  /* 0C09E434 bra */
L_0C09E440: BLKS(0x0C09E440u);
	r0 = 0x99u; UPD(0x0C09E442u, 1);  /* 0C09E440 mov.w @(disp,pc),Rn */
	r11 = 0x3Bu;  /* 0C09E442 mov #imm,Rn */
	IF(0x0C09E444u); r12 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09E446u, 2);  /* 0C09E444 mov.b @(r0,Rm),Rn */
	r12 += 0x1u;  /* 0C09E446 add #imm,Rn */
	r2 = r12 & 0xFF;  /* 0C09E448 extu.b Rm,Rn */
	T = r2 > r11;  /* 0C09E44A cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09E44Eu); W8(r0 + r3, r12); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09E386u, 6); goto L_0C09E386; } UPD(0x0C09E450u, 1); goto L_0C09E450; }  /* 0C09E44C bf/s */
L_0C09E450: BLKS(0x0C09E450u);
	r1 = r7;  /* 0C09E450 mov Rm,Rn */
	r1 += 0x1u;  /* 0C09E452 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r1); UPD(0x0C09E456u, 3);  /* 0C09E454 mov.b @Rm,Rn */
	r9 = 0x0u;  /* 0C09E456 mov #imm,Rn */
	r10 += 0x1u;  /* 0C09E458 add #imm,Rn */
	r4 = r10 & 0xFF;  /* 0C09E45A extu.b Rm,Rn */
	r7 = 0x7u;  /* 0C09E45C mov #imm,Rn */
	IF(0x0C09E45Eu); W8(r0 + r3, r9); UPD(0x0C09E460u, 5);  /* 0C09E45E mov.b Rm,@(r0,Rn) */
	T = r4 > r7;  /* 0C09E460 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r1, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09E386u, 4); goto L_0C09E386; } UPD(0x0C09E466u, 1); goto L_0C09E466; }  /* 0C09E462 bf/s */
L_0C09E466: BLKS(0x0C09E466u);
	{ r3 = r6; /* slot mov Rm,Rn */ UPD(0x0C09E3C2u, 3); goto L_0C09E3C2; }  /* 0C09E466 bra */
}

/* FUN_0c09e480 */
void f_0C09E480(sh3_t *c)
{
	LOCALS;
L_0C09E480: BLKS(0x0C09E480u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09E482u, 1);  /* 0C09E480 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09E484u, 1);  /* 0C09E482 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09E486u, 1);  /* 0C09E484 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09E488u, 1);  /* 0C09E486 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09E48Au, 1);  /* 0C09E488 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09E48Cu, 1);  /* 0C09E48A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09E48Eu, 1);  /* 0C09E48C mov.l Rm,@-Rn */
	r0 = 0xC22486Eu; UPD(0x0C09E490u, 1);  /* 0C09E48E mov.l @(disp,pc),Rn */
	IF(0x0C09E490u); r15 -= 4; W32(r15, PR); UPD(0x0C09E492u, 1);  /* 0C09E490 sts.l pr,@-Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C09E494u, 1);  /* 0C09E492 mov.b @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09E494 add #imm,Rn */
	r2 = 0xC1D77B0u; UPD(0x0C09E498u, 2);  /* 0C09E496 mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C09E498 extu.b Rm,Rn */
	IF(0x0C09E49Au); r11 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09E49Cu, 2);  /* 0C09E49A mov.b @(r0,Rm),Rn */
	r14 = r15;  /* 0C09E49C mov Rm,Rn */
	r8 = 0xC057A50u; UPD(0x0C09E4A0u, 2);  /* 0C09E49E mov.l @(disp,pc),Rn */
	r13 = r11;  /* 0C09E4A0 mov Rm,Rn */
	r13 += 0x37u;  /* 0C09E4A2 add #imm,Rn */
	r5 = 0x8000u; UPD(0x0C09E4A6u, 3);  /* 0C09E4A4 mov.l @(disp,pc),Rn */
	IF(0x0C09E4A6u); { u32 t_ = r8; PR = 0x0C09E4AAu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C09E4AAu); }  /* 0C09E4A6 jsr @Rn */
L_0C09E4AA: BLKS(0x0C09E4AAu);
	T = (r0 & r0) == 0;  /* 0C09E4AA tst Rm,Rn */
	{ u32 c_ = !T; r7 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09E4F0u, 4); goto L_0C09E4F0; } goto L_0C09E4B0; }  /* 0C09E4AC bf/s */
L_0C09E4B0: BLKS(0x0C09E4B0u);
	r3 = 0xC1D7D70u; UPD(0x0C09E4B2u, 2);  /* 0C09E4B0 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C09E4B2 mov #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r3); UPD(0x0C09E4B6u, 2);  /* 0C09E4B4 mov.w @Rm,Rn */
	r4 = 0x12Cu; UPD(0x0C09E4B8u, 1);  /* 0C09E4B6 mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C09E4B8 add #imm,Rn */
	r5 = (u32)(s32)(s16)r6;  /* 0C09E4BA exts.w Rm,Rn */
	T = r5 == r4;  /* 0C09E4BC cmp/eq Rm,Rn */
	{ u32 c_ = T; W16(r3, r6); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C09E4E0u, 6); goto L_0C09E4E0; } UPD(0x0C09E4C2u, 1); goto L_0C09E4C2; }  /* 0C09E4BE bt/s */
L_0C09E4C2: BLKS(0x0C09E4C2u);
	r14 += 0x4u;  /* 0C09E4C2 add #imm,Rn */
	r15 = r14;  /* 0C09E4C4 mov Rm,Rn */
	IF(0x0C09E4C6u); PR = R32(r15); r15 += 4; UPD(0x0C09E4C8u, 3);  /* 0C09E4C6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09E4CAu, 1);  /* 0C09E4C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09E4CCu, 1);  /* 0C09E4CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09E4CEu, 1);  /* 0C09E4CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09E4D0u, 1);  /* 0C09E4CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09E4D2u, 1);  /* 0C09E4D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09E4D4u, 1);  /* 0C09E4D2 mov.l @Rm+,Rn */
	IF(0x0C09E4D4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09E4D4 rts */
L_0C09E4E0: BLKS(0x0C09E4E0u);
	W16(r3, r7); UPD(0x0C09E4E2u, 1);  /* 0C09E4E0 mov.w Rm,@Rn */
L_0C09E4E2: BLKS(0x0C09E4E2u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C09E4C2u, 3); goto L_0C09E4C2; }  /* 0C09E4E2 bra */
L_0C09E4F0: BLKS(0x0C09E4F0u);
	r8 = 0xC0606C0u; UPD(0x0C09E4F2u, 1);  /* 0C09E4F0 mov.l @(disp,pc),Rn */
	IF(0x0C09E4F2u); { u32 t_ = r8; PR = 0x0C09E4F6u; r4 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C09E4F6u); }  /* 0C09E4F2 jsr @Rn */
L_0C09E4F6: BLKS(0x0C09E4F6u);
	T = (r0 & r0) == 0;  /* 0C09E4F6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09E4C2u, 4); goto L_0C09E4C2; } goto L_0C09E4FC; }  /* 0C09E4F8 bt/s */
L_0C09E4FC: BLKS(0x0C09E4FCu);
	r0 = r11;  /* 0C09E4FC mov Rm,Rn */
	r9 = 0xC1D7D58u; UPD(0x0C09E500u, 3);  /* 0C09E4FE mov.l @(disp,pc),Rn */
	IF(0x0C09E500u); r0 <<= 2;  /* 0C09E500 shll2 Rn */
	r7 = 0xC2755BCu; UPD(0x0C09E504u, 2);  /* 0C09E502 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C09E504 mov #imm,Rn */
	IF(0x0C09E506u); r10 = R32(r0 + r9); UPD(0x0C09E508u, 2);  /* 0C09E506 mov.l @(r0,Rm),Rn */
	W32(r14, r7); UPD(0x0C09E50Au, 1);  /* 0C09E508 mov.l Rm,@Rn */
	IF(0x0C09E50Au); ;  /* 0C09E50A nop */
	UPD(0x0C09E50Cu, 1);
L_0C09E50C: BLKS(0x0C09E50Cu);
	r3 = R32(r14); UPD(0x0C09E50Eu, 1);  /* 0C09E50C mov.l @Rm,Rn */
	r0 = 0x0u;  /* 0C09E50E mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r4 = v_; } UPD(0x0C09E512u, 2);  /* 0C09E510 mov.w @Rm+,Rn */
	r8 = 0xB4u; UPD(0x0C09E514u, 1);  /* 0C09E512 mov.w @(disp,pc),Rn */
	IF(0x0C09E514u); MACL = r4 * r8;  /* 0C09E514 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C09E518u, 3);  /* 0C09E516 mov.l @(disp,pc),Rn */
	IF(0x0C09E518u); r8 = MACL;  /* 0C09E518 sts macl,Rn */
	r7 = 0xC0000000u; UPD(0x0C09E51Cu, 2);  /* 0C09E51A mov.l @(disp,pc),Rn */
	r8 += r9;  /* 0C09E51C add Rm,Rn */
	r1 = 0xC2755BCu; UPD(0x0C09E520u, 2);  /* 0C09E51E mov.l @(disp,pc),Rn */
	W32(r8, r7); UPD(0x0C09E522u, 1);  /* 0C09E520 mov.l Rm,@Rn */
	r6 = (u32)(s32)(s16)R16(r1); UPD(0x0C09E524u, 1);  /* 0C09E522 mov.w @Rm,Rn */
	r8 += 0x7Cu;  /* 0C09E524 add #imm,Rn */
	W16(r8, r6); UPD(0x0C09E528u, 2);  /* 0C09E526 mov.w Rm,@Rn */
	W32(r14, r3); UPD(0x0C09E52Au, 1);  /* 0C09E528 mov.l Rm,@Rn */
	r8 += 0xFFFFFF84u;  /* 0C09E52A add #imm,Rn */
	W32(r8 + 0x4u, r13); UPD(0x0C09E52Eu, 2);  /* 0C09E52C mov.l Rm,@(disp,Rn) */
	r3 = 0xC0A02D0u; UPD(0x0C09E530u, 1);  /* 0C09E52E mov.l @(disp,pc),Rn */
	r5 = R32(r10); UPD(0x0C09E532u, 1);  /* 0C09E530 mov.l @Rm,Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C09E534u, 1);  /* 0C09E532 mov.l Rm,@(disp,Rn) */
	IF(0x0C09E534u); { u32 t_ = r3; PR = 0x0C09E538u; W32(r8 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C09E538u); }  /* 0C09E534 jsr @Rn */
L_0C09E538: BLKS(0x0C09E538u);
	r2 = R32(r10 + 0x4u); UPD(0x0C09E53Au, 1);  /* 0C09E538 mov.l @(disp,Rm),Rn */
	r5 = 0x17u;  /* 0C09E53A mov #imm,Rn */
	W32(r8 + 0x2Cu, r2); UPD(0x0C09E53Eu, 2);  /* 0C09E53C mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C09E53E mov #imm,Rn */
	r7 = R32(r10 + 0x8u); UPD(0x0C09E542u, 2);  /* 0C09E540 mov.l @(disp,Rm),Rn */
	r9 = 0xC3929E0u; UPD(0x0C09E544u, 1);  /* 0C09E542 mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C09E546u, 1);  /* 0C09E544 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r7); UPD(0x0C09E548u, 1);  /* 0C09E546 mov.l Rm,@(disp,Rn) */
	r6 = R32(r9); UPD(0x0C09E54Au, 1);  /* 0C09E548 mov.l @Rm,Rn */
	r0 = 0xA9u; UPD(0x0C09E54Cu, 1);  /* 0C09E54A mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C09E54C add Rm,Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C09E550u, 2);  /* 0C09E54E mov.l Rm,@(disp,Rn) */
	IF(0x0C09E550u); W8(r0 + r8, r5); UPD(0x0C09E552u, 1);  /* 0C09E550 mov.b Rm,@(r0,Rn) */
	r4 = R32(r10 + 0xCu); UPD(0x0C09E554u, 1);  /* 0C09E552 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x34u, r4); UPD(0x0C09E556u, 1);  /* 0C09E554 mov.l Rm,@(disp,Rn) */
	r8 += 0x50u;  /* 0C09E556 add #imm,Rn */
	W32(r8, r1); UPD(0x0C09E55Au, 2);  /* 0C09E558 mov.l Rm,@Rn */
	r4 = 0x1Eu;  /* 0C09E55A mov #imm,Rn */
	r0 = R32(r10 + 0x10u); UPD(0x0C09E55Eu, 2);  /* 0C09E55C mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C09E55E add #imm,Rn */
	W32(r8 + 0x38u, r0); UPD(0x0C09E562u, 2);  /* 0C09E560 mov.l Rm,@(disp,Rn) */
	r0 = 0xC050D70u; UPD(0x0C09E564u, 1);  /* 0C09E562 mov.l @(disp,pc),Rn */
	r9 = 0x98u; UPD(0x0C09E566u, 1);  /* 0C09E564 mov.w @(disp,pc),Rn */
	IF(0x0C09E566u); { u32 t_ = r0; PR = 0x0C09E56Au; r10 += 0x14u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09E56Au); }  /* 0C09E566 jsr @Rn */
L_0C09E56A: BLKS(0x0C09E56Au);
	r9 += r8;  /* 0C09E56A add Rm,Rn */
	W8(r9, r0); UPD(0x0C09E56Eu, 2);  /* 0C09E56C mov.b Rm,@Rn */
	r3 = r12;  /* 0C09E56E mov Rm,Rn */
	r0 = 0xA1u; UPD(0x0C09E572u, 2);  /* 0C09E570 mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C09E572 add #imm,Rn */
	r12 = (u32)(s32)(s16)r3;  /* 0C09E574 exts.w Rm,Rn */
	r2 = 0xBu;  /* 0C09E576 mov #imm,Rn */
	T = (s32)r12 > (s32)r2;  /* 0C09E578 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09E57Cu); W8(r0 + r8, r11); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09E50Cu, 7); goto L_0C09E50C; } UPD(0x0C09E57Eu, 1); goto L_0C09E57E; }  /* 0C09E57A bf/s */
L_0C09E57E: BLKS(0x0C09E57Eu);
	r10 = 0xC1D7D70u; UPD(0x0C09E580u, 1);  /* 0C09E57E mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C09E580 mov #imm,Rn */
	{ W16(r10, r11); /* slot mov.w Rm,@Rn */ UPD(0x0C09E4E2u, 4); goto L_0C09E4E2; }  /* 0C09E582 bra */
}

/* FUN_0c09e5d0 */
void f_0C09E5D0(sh3_t *c)
{
	LOCALS;
L_0C09E5D0: BLKS(0x0C09E5D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09E5D2u, 1);  /* 0C09E5D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09E5D4u, 1);  /* 0C09E5D2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09E5D6u, 1);  /* 0C09E5D4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09E5D8u, 1);  /* 0C09E5D6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09E5DAu, 1);  /* 0C09E5D8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09E5DCu, 1);  /* 0C09E5DA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09E5DEu, 1);  /* 0C09E5DC mov.l Rm,@-Rn */
	r0 = 0xC22486Eu; UPD(0x0C09E5E0u, 1);  /* 0C09E5DE mov.l @(disp,pc),Rn */
	IF(0x0C09E5E0u); r15 -= 4; W32(r15, PR); UPD(0x0C09E5E2u, 1);  /* 0C09E5E0 sts.l pr,@-Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C09E5E4u, 1);  /* 0C09E5E2 mov.b @Rm,Rn */
	r14 = r15;  /* 0C09E5E4 mov Rm,Rn */
	r2 = 0xC1D77B0u; UPD(0x0C09E5E8u, 2);  /* 0C09E5E6 mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C09E5E8 extu.b Rm,Rn */
	IF(0x0C09E5EAu); r10 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09E5ECu, 2);  /* 0C09E5EA mov.b @(r0,Rm),Rn */
	r8 = 0xC057A50u; UPD(0x0C09E5EEu, 1);  /* 0C09E5EC mov.l @(disp,pc),Rn */
	r10 += 0x37u;  /* 0C09E5EE add #imm,Rn */
	r5 = 0x8000u; UPD(0x0C09E5F2u, 2);  /* 0C09E5F0 mov.l @(disp,pc),Rn */
	IF(0x0C09E5F2u); { u32 t_ = r8; PR = 0x0C09E5F6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C09E5F6u); }  /* 0C09E5F2 jsr @Rn */
L_0C09E5F6: BLKS(0x0C09E5F6u);
	T = (r0 & r0) == 0;  /* 0C09E5F6 tst Rm,Rn */
	{ u32 c_ = !T; r7 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09E640u, 4); goto L_0C09E640; } goto L_0C09E5FC; }  /* 0C09E5F8 bf/s */
L_0C09E5FC: BLKS(0x0C09E5FCu);
	r3 = 0xC1D7E04u; UPD(0x0C09E5FEu, 2);  /* 0C09E5FC mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C09E5FE mov #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r3); UPD(0x0C09E602u, 2);  /* 0C09E600 mov.w @Rm,Rn */
	r4 = 0x12Cu; UPD(0x0C09E604u, 1);  /* 0C09E602 mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C09E604 add #imm,Rn */
	r5 = (u32)(s32)(s16)r6;  /* 0C09E606 exts.w Rm,Rn */
	T = r5 == r4;  /* 0C09E608 cmp/eq Rm,Rn */
	{ u32 c_ = T; W16(r3, r6); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C09E630u, 6); goto L_0C09E630; } UPD(0x0C09E60Eu, 1); goto L_0C09E60E; }  /* 0C09E60A bt/s */
L_0C09E60E: BLKS(0x0C09E60Eu);
	r15 = r14;  /* 0C09E60E mov Rm,Rn */
	IF(0x0C09E610u); PR = R32(r15); r15 += 4; UPD(0x0C09E612u, 2);  /* 0C09E610 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09E614u, 1);  /* 0C09E612 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09E616u, 1);  /* 0C09E614 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09E618u, 1);  /* 0C09E616 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09E61Au, 1);  /* 0C09E618 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09E61Cu, 1);  /* 0C09E61A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09E61Eu, 1);  /* 0C09E61C mov.l @Rm+,Rn */
	IF(0x0C09E61Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09E61E rts */
L_0C09E630: BLKS(0x0C09E630u);
	W16(r3, r7); UPD(0x0C09E632u, 1);  /* 0C09E630 mov.w Rm,@Rn */
L_0C09E632: BLKS(0x0C09E632u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C09E60Eu, 3); goto L_0C09E60E; }  /* 0C09E632 bra */
L_0C09E640: BLKS(0x0C09E640u);
	r8 = 0xC0606C0u; UPD(0x0C09E642u, 1);  /* 0C09E640 mov.l @(disp,pc),Rn */
	IF(0x0C09E642u); { u32 t_ = r8; PR = 0x0C09E646u; r4 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C09E646u); }  /* 0C09E642 jsr @Rn */
L_0C09E646: BLKS(0x0C09E646u);
	T = (r0 & r0) == 0;  /* 0C09E646 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09E60Eu, 4); goto L_0C09E60E; } goto L_0C09E64C; }  /* 0C09E648 bt/s */
L_0C09E64C: BLKS(0x0C09E64Cu);
	r13 = 0xC2755BCu; UPD(0x0C09E64Eu, 2);  /* 0C09E64C mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C09E64E mov #imm,Rn */
	r12 = 0x0u;  /* 0C09E650 mov #imm,Rn */
	IF(0x0C09E652u); ;  /* 0C09E652 nop */
	UPD(0x0C09E654u, 3);
L_0C09E654: BLKS(0x0C09E654u);
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r4 = v_; } UPD(0x0C09E656u, 1);  /* 0C09E654 mov.w @Rm+,Rn */
	r2 = 0x0u;  /* 0C09E656 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C09E65Au, 2);  /* 0C09E658 mov.w @(disp,pc),Rn */
	IF(0x0C09E65Au); MACL = r4 * r8;  /* 0C09E65A mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09E65Eu, 3);  /* 0C09E65C mov.l @(disp,pc),Rn */
	r6 = 0xC0000000u; UPD(0x0C09E660u, 1);  /* 0C09E65E mov.l @(disp,pc),Rn */
	IF(0x0C09E660u); r8 = MACL;  /* 0C09E660 sts macl,Rn */
	r8 += r0;  /* 0C09E662 add Rm,Rn */
	r1 = 0xC2755BCu; UPD(0x0C09E666u, 3);  /* 0C09E664 mov.l @(disp,pc),Rn */
	W32(r8, r6); UPD(0x0C09E668u, 1);  /* 0C09E666 mov.l Rm,@Rn */
	r9 = (u32)(s32)(s16)R16(r1); UPD(0x0C09E66Au, 1);  /* 0C09E668 mov.w @Rm,Rn */
	r8 += 0x7Cu;  /* 0C09E66A add #imm,Rn */
	W16(r8, r9); UPD(0x0C09E66Eu, 2);  /* 0C09E66C mov.w Rm,@Rn */
	r8 += 0xFFFFFF84u;  /* 0C09E66E add #imm,Rn */
	r9 = r11;  /* 0C09E670 mov Rm,Rn */
	W32(r8 + 0x4u, r10); UPD(0x0C09E674u, 3);  /* 0C09E672 mov.l Rm,@(disp,Rn) */
	IF(0x0C09E674u); r9 <<= 2;  /* 0C09E674 shll2 Rn */
	r5 = 0xC1D7DD4u; UPD(0x0C09E678u, 2);  /* 0C09E676 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C09E678 mov Rm,Rn */
	r7 = 0xC0A02D0u; UPD(0x0C09E67Cu, 2);  /* 0C09E67A mov.l @(disp,pc),Rn */
	IF(0x0C09E67Cu); r3 = R32(r0 + r5); UPD(0x0C09E67Eu, 1);  /* 0C09E67C mov.l @(r0,Rm),Rn */
	W32(r8 + 0xCu, r2); UPD(0x0C09E680u, 1);  /* 0C09E67E mov.l Rm,@(disp,Rn) */
	IF(0x0C09E680u); { u32 t_ = r7; PR = 0x0C09E684u; W32(r8 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C09E684u); }  /* 0C09E680 jsr @Rn */
L_0C09E684: BLKS(0x0C09E684u);
	r0 = 0xC1D7D74u; UPD(0x0C09E686u, 1);  /* 0C09E684 mov.l @(disp,pc),Rn */
	r0 += r12;  /* 0C09E686 add Rm,Rn */
	r3 = R32(r0); UPD(0x0C09E68Au, 2);  /* 0C09E688 mov.l @Rm,Rn */
	r12 += 0xCu;  /* 0C09E68A add #imm,Rn */
	W32(r8 + 0x2Cu, r3); UPD(0x0C09E68Eu, 2);  /* 0C09E68C mov.l Rm,@(disp,Rn) */
	r4 = R32(r0 + 0x4u); UPD(0x0C09E690u, 1);  /* 0C09E68E mov.l @(disp,Rm),Rn */
	W32(r8 + 0x30u, r4); UPD(0x0C09E692u, 1);  /* 0C09E690 mov.l Rm,@(disp,Rn) */
	r5 = 0x800000u; UPD(0x0C09E694u, 1);  /* 0C09E692 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C09E694 add #imm,Rn */
	W32(r8, r5); UPD(0x0C09E698u, 2);  /* 0C09E696 mov.l Rm,@Rn */
	r3 += r5;  /* 0C09E698 add Rm,Rn */
	r6 = R32(r0 + 0x8u); UPD(0x0C09E69Cu, 2);  /* 0C09E69A mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C09E69C add #imm,Rn */
	r0 = 0x8Cu; UPD(0x0C09E6A0u, 2);  /* 0C09E69E mov.w @(disp,pc),Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C09E6A2u, 1);  /* 0C09E6A0 mov.l Rm,@(disp,Rn) */
	IF(0x0C09E6A2u); W32(r0 + r8, r6); UPD(0x0C09E6A4u, 1);  /* 0C09E6A2 mov.l Rm,@(r0,Rn) */
	r2 = 0xC3929E0u; UPD(0x0C09E6A6u, 1);  /* 0C09E6A4 mov.l @(disp,pc),Rn */
	r0 += 0x1Du;  /* 0C09E6A6 add #imm,Rn */
	r7 = R32(r2); UPD(0x0C09E6AAu, 2);  /* 0C09E6A8 mov.l @Rm,Rn */
	r6 = 0x17u;  /* 0C09E6AA mov #imm,Rn */
	r4 += r7;  /* 0C09E6AC add Rm,Rn */
	IF(0x0C09E6AEu); W8(r0 + r8, r6); UPD(0x0C09E6B0u, 3);  /* 0C09E6AE mov.b Rm,@(r0,Rn) */
	r7 = 0x5u;  /* 0C09E6B0 mov #imm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C09E6B4u, 2);  /* 0C09E6B2 mov.l Rm,@(disp,Rn) */
	r0 = r9;  /* 0C09E6B4 mov Rm,Rn */
	r5 = 0xC1D7DBCu; UPD(0x0C09E6B8u, 2);  /* 0C09E6B6 mov.l @(disp,pc),Rn */
	r9 = r11;  /* 0C09E6B8 mov Rm,Rn */
	IF(0x0C09E6BAu); r4 = R32(r0 + r5); UPD(0x0C09E6BCu, 2);  /* 0C09E6BA mov.l @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C09E6BC add #imm,Rn */
	W32(r8 + 0x34u, r4); UPD(0x0C09E6C0u, 2);  /* 0C09E6BE mov.l Rm,@(disp,Rn) */
	r11 = (u32)(s32)(s16)r9;  /* 0C09E6C0 exts.w Rm,Rn */
	r3 = 0xC1D7DECu; UPD(0x0C09E6C4u, 2);  /* 0C09E6C2 mov.l @(disp,pc),Rn */
	T = (s32)r11 > (s32)r7;  /* 0C09E6C4 cmp/gt Rm,Rn */
	IF(0x0C09E6C6u); r2 = R32(r0 + r3); UPD(0x0C09E6C8u, 2);  /* 0C09E6C6 mov.l @(r0,Rm),Rn */
	{ u32 c_ = !T; W32(r8 + 0x38u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09E654u, 3); goto L_0C09E654; } UPD(0x0C09E6CCu, 1); goto L_0C09E6CC; }  /* 0C09E6C8 bf/s */
L_0C09E6CC: BLKS(0x0C09E6CCu);
	r10 = 0xC1D7E04u; UPD(0x0C09E6CEu, 1);  /* 0C09E6CC mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C09E6CE mov #imm,Rn */
	{ W16(r10, r11); /* slot mov.w Rm,@Rn */ UPD(0x0C09E632u, 4); goto L_0C09E632; }  /* 0C09E6D0 bra */
}

void f_0C09E720(sh3_t *c)
{
	LOCALS;
L_0C09E720: BLKS(0x0C09E720u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09E722u, 1);  /* 0C09E720 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09E724u, 1);  /* 0C09E722 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09E726u, 1);  /* 0C09E724 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09E728u, 1);  /* 0C09E726 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09E72Au, 1);  /* 0C09E728 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09E72Cu, 1);  /* 0C09E72A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09E72Eu, 1);  /* 0C09E72C mov.l Rm,@-Rn */
	r4 = 0xC2859A0u; UPD(0x0C09E730u, 1);  /* 0C09E72E mov.l @(disp,pc),Rn */
	IF(0x0C09E730u); r15 -= 4; W32(r15, PR); UPD(0x0C09E732u, 1);  /* 0C09E730 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C09E734u, 1);  /* 0C09E732 mov.l @Rm,Rn */
	r14 = r15;  /* 0C09E734 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C09E738u, 2);  /* 0C09E736 mov.w @Rm+,Rn */
	r1 = 0xC1D77B0u; UPD(0x0C09E73Au, 1);  /* 0C09E738 mov.l @(disp,pc),Rn */
	IF(0x0C09E73Au); r8 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C09E73Cu, 1);  /* 0C09E73A mov.b @(r0,Rm),Rn */
	r9 = 0xC057A50u; UPD(0x0C09E73Eu, 1);  /* 0C09E73C mov.l @(disp,pc),Rn */
	r11 = r8;  /* 0C09E73E mov Rm,Rn */
	W32(r4, r3); UPD(0x0C09E742u, 2);  /* 0C09E740 mov.l Rm,@Rn */
	r11 += 0x37u;  /* 0C09E742 add #imm,Rn */
	r5 = 0x8000u; UPD(0x0C09E746u, 2);  /* 0C09E744 mov.l @(disp,pc),Rn */
	IF(0x0C09E746u); { u32 t_ = r9; PR = 0x0C09E74Au; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C09E74Au); }  /* 0C09E746 jsr @Rn */
L_0C09E74A: BLKS(0x0C09E74Au);
	T = (r0 & r0) == 0;  /* 0C09E74A tst Rm,Rn */
	{ u32 c_ = !T; r7 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09E790u, 4); goto L_0C09E790; } goto L_0C09E750; }  /* 0C09E74C bf/s */
L_0C09E750: BLKS(0x0C09E750u);
	r3 = 0xC1D7F10u; UPD(0x0C09E752u, 2);  /* 0C09E750 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r3); UPD(0x0C09E754u, 1);  /* 0C09E752 mov.w @Rm,Rn */
	r0 = 0x12Cu; UPD(0x0C09E756u, 1);  /* 0C09E754 mov.w @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C09E756 add #imm,Rn */
	r2 = (u32)(s32)(s16)r5;  /* 0C09E758 exts.w Rm,Rn */
	T = r2 == r0;  /* 0C09E75A cmp/eq Rm,Rn */
	W16(r3, r5); UPD(0x0C09E75Eu, 4);  /* 0C09E75C mov.w Rm,@Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09E780u, 3); goto L_0C09E780; } UPD(0x0C09E762u, 1); goto L_0C09E762; }  /* 0C09E75E bt/s */
L_0C09E762: BLKS(0x0C09E762u);
	r15 = r14;  /* 0C09E762 mov Rm,Rn */
	IF(0x0C09E764u); PR = R32(r15); r15 += 4; UPD(0x0C09E766u, 2);  /* 0C09E764 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09E768u, 1);  /* 0C09E766 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09E76Au, 1);  /* 0C09E768 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09E76Cu, 1);  /* 0C09E76A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09E76Eu, 1);  /* 0C09E76C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09E770u, 1);  /* 0C09E76E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09E772u, 1);  /* 0C09E770 mov.l @Rm+,Rn */
	IF(0x0C09E772u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09E772 rts */
L_0C09E780: BLKS(0x0C09E780u);
	W16(r3, r7); UPD(0x0C09E782u, 1);  /* 0C09E780 mov.w Rm,@Rn */
L_0C09E782: BLKS(0x0C09E782u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C09E762u, 3); goto L_0C09E762; }  /* 0C09E782 bra */
L_0C09E790: BLKS(0x0C09E790u);
	r9 = 0xC0606C0u; UPD(0x0C09E792u, 1);  /* 0C09E790 mov.l @(disp,pc),Rn */
	IF(0x0C09E792u); { u32 t_ = r9; PR = 0x0C09E796u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C09E796u); }  /* 0C09E792 jsr @Rn */
L_0C09E796: BLKS(0x0C09E796u);
	T = (r0 & r0) == 0;  /* 0C09E796 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09E762u, 4); goto L_0C09E762; } goto L_0C09E79C; }  /* 0C09E798 bt/s */
L_0C09E79C: BLKS(0x0C09E79Cu);
	IF(0x0C09E79Cu); r8 <<= 2;  /* 0C09E79C shll2 Rn */
	r6 = 0xC1D7EF8u; UPD(0x0C09E7A0u, 3);  /* 0C09E79E mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C09E7A0 mov Rm,Rn */
	IF(0x0C09E7A2u); r9 = R32(r0 + r6); UPD(0x0C09E7A4u, 2);  /* 0C09E7A2 mov.l @(r0,Rm),Rn */
	r10 = 0x0u;  /* 0C09E7A4 mov #imm,Rn */
	r12 = 0xC2755BCu; UPD(0x0C09E7A8u, 2);  /* 0C09E7A6 mov.l @(disp,pc),Rn */
L_0C09E7A8: BLKS(0x0C09E7A8u);
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r4 = v_; } UPD(0x0C09E7AAu, 1);  /* 0C09E7A8 mov.w @Rm+,Rn */
	r8 = 0xB4u; UPD(0x0C09E7ACu, 1);  /* 0C09E7AA mov.w @(disp,pc),Rn */
	IF(0x0C09E7ACu); MACL = r4 * r8;  /* 0C09E7AC mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09E7B0u, 3);  /* 0C09E7AE mov.l @(disp,pc),Rn */
	r2 = 0xC0000000u; UPD(0x0C09E7B2u, 1);  /* 0C09E7B0 mov.l @(disp,pc),Rn */
	IF(0x0C09E7B2u); r8 = MACL;  /* 0C09E7B2 sts macl,Rn */
	r8 += r0;  /* 0C09E7B4 add Rm,Rn */
	W32(r8, r2); UPD(0x0C09E7B8u, 3);  /* 0C09E7B6 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r11); UPD(0x0C09E7BAu, 1);  /* 0C09E7B8 mov.l Rm,@(disp,Rn) */
	r13 = R32(r9); UPD(0x0C09E7BCu, 1);  /* 0C09E7BA mov.l @Rm,Rn */
	r3 = 0xC0A02D0u; UPD(0x0C09E7BEu, 1);  /* 0C09E7BC mov.l @(disp,pc),Rn */
	W32(r8 + 0x8u, r13); UPD(0x0C09E7C0u, 1);  /* 0C09E7BE mov.l Rm,@(disp,Rn) */
	r13 = 0x0u;  /* 0C09E7C0 mov #imm,Rn */
	IF(0x0C09E7C2u); { u32 t_ = r3; PR = 0x0C09E7C6u; W32(r8 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C09E7C6u); }  /* 0C09E7C2 jsr @Rn */
L_0C09E7C6: BLKS(0x0C09E7C6u);
	r4 = R32(r9 + 0x4u); UPD(0x0C09E7C8u, 1);  /* 0C09E7C6 mov.l @(disp,Rm),Rn */
	r2 = 0x17u;  /* 0C09E7C8 mov #imm,Rn */
	W32(r8 + 0x2Cu, r4); UPD(0x0C09E7CCu, 2);  /* 0C09E7CA mov.l Rm,@(disp,Rn) */
	r6 = R32(r9 + 0x8u); UPD(0x0C09E7CEu, 1);  /* 0C09E7CC mov.l @(disp,Rm),Rn */
	W32(r8 + 0x30u, r6); UPD(0x0C09E7D0u, 1);  /* 0C09E7CE mov.l Rm,@(disp,Rn) */
	r5 = 0xF00000u; UPD(0x0C09E7D2u, 1);  /* 0C09E7D0 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C09E7D2 add #imm,Rn */
	W32(r8, r5); UPD(0x0C09E7D6u, 2);  /* 0C09E7D4 mov.l Rm,@Rn */
	r8 += 0xFFFFFFB0u;  /* 0C09E7D6 add #imm,Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C09E7DAu, 2);  /* 0C09E7D8 mov.l Rm,@(disp,Rn) */
	r7 = 0xC3929E0u; UPD(0x0C09E7DCu, 1);  /* 0C09E7DA mov.l @(disp,pc),Rn */
	r0 = R32(r7); UPD(0x0C09E7DEu, 1);  /* 0C09E7DC mov.l @Rm,Rn */
	r0 += r6;  /* 0C09E7DE add Rm,Rn */
	r0 += r5;  /* 0C09E7E0 add Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C09E7E4u, 3);  /* 0C09E7E2 mov.l Rm,@(disp,Rn) */
	r7 = 0x1u;  /* 0C09E7E4 mov #imm,Rn */
	r0 = 0xA9u; UPD(0x0C09E7E8u, 2);  /* 0C09E7E6 mov.w @(disp,pc),Rn */
	IF(0x0C09E7E8u); W8(r0 + r8, r2); UPD(0x0C09E7EAu, 1);  /* 0C09E7E8 mov.b Rm,@(r0,Rn) */
	r3 = R32(r9 + 0xCu); UPD(0x0C09E7ECu, 1);  /* 0C09E7EA mov.l @(disp,Rm),Rn */
	W32(r8 + 0x34u, r3); UPD(0x0C09E7EEu, 1);  /* 0C09E7EC mov.l Rm,@(disp,Rn) */
	r4 = R32(r9 + 0x10u); UPD(0x0C09E7F0u, 1);  /* 0C09E7EE mov.l @(disp,Rm),Rn */
	W32(r8 + 0x38u, r4); UPD(0x0C09E7F2u, 1);  /* 0C09E7F0 mov.l Rm,@(disp,Rn) */
	r8 = r10;  /* 0C09E7F2 mov Rm,Rn */
	r8 += 0x1u;  /* 0C09E7F4 add #imm,Rn */
	r10 = (u32)(s32)(s16)r8;  /* 0C09E7F6 exts.w Rm,Rn */
	T = (s32)r10 > (s32)r7;  /* 0C09E7F8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09E7A8u, 7); goto L_0C09E7A8; } goto L_0C09E7FE; }  /* 0C09E7FA bf/s */
L_0C09E7FE: BLKS(0x0C09E7FEu);
	r10 = 0xC1D7F10u; UPD(0x0C09E800u, 2);  /* 0C09E7FE mov.l @(disp,pc),Rn */
	{ W16(r10, r13); /* slot mov.w Rm,@Rn */ UPD(0x0C09E782u, 3); goto L_0C09E782; }  /* 0C09E800 bra */
}

void f_0C09E840(sh3_t *c)
{
	LOCALS;
L_0C09E840: BLKS(0x0C09E840u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09E842u, 1);  /* 0C09E840 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09E844u, 1);  /* 0C09E842 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C09E844 exts.w Rm,Rn */
	r3 = 0xB4u; UPD(0x0C09E848u, 2);  /* 0C09E846 mov.w @(disp,pc),Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09E84Au, 1);  /* 0C09E848 mov.l Rm,@-Rn */
	IF(0x0C09E84Au); MACL = r8 * r3;  /* 0C09E84A mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09E84Eu, 3);  /* 0C09E84C mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C09E850u, 1);  /* 0C09E84E mov.l @(disp,pc),Rn */
	IF(0x0C09E850u); r2 = MACL;  /* 0C09E850 sts macl,Rn */
	IF(0x0C09E852u); r15 -= 4; W32(r15, PR); UPD(0x0C09E854u, 2);  /* 0C09E852 sts.l pr,@-Rn */
	r0 += r2;  /* 0C09E854 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C09E858u, 2);  /* 0C09E856 mov.l @(disp,Rm),Rn */
	r0 = 0x6u;  /* 0C09E858 mov #imm,Rn */
	T = r2 > r0;  /* 0C09E85A cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09E912u, 5); goto L_0C09E912; } goto L_0C09E860; }  /* 0C09E85C bt/s */
L_0C09E860: BLKS(0x0C09E860u);
	r0 = 0xC09E870u;  /* 0C09E860 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09E862 add Rm,Rn */
	IF(0x0C09E864u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09E866u, 4);  /* 0C09E864 mov.w @(r0,Rm),Rn */
	IF(0x0C09E866u); { u32 tv_ = (r4 + 0x0C09E86Au); u32 t_ = PHYS(tv_); IF(0x0C09E868u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09E880u: goto L_0C09E880; case 0x0C09E980u: goto L_0C09E980; case 0x0C09EA90u: goto L_0C09EA90; case 0x0C09EB50u: goto L_0C09EB50; default: JUMPD(tv_); } }  /* 0C09E866 braf Rn */
L_0C09E880: BLKS(0x0C09E880u);
	r10 = 0xB4u; UPD(0x0C09E882u, 1);  /* 0C09E880 mov.w @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C09E882 mov #imm,Rn */
	IF(0x0C09E884u); MACL = r8 * r10;  /* 0C09E884 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C09E888u, 4);  /* 0C09E886 mov.l @(disp,pc),Rn */
	IF(0x0C09E888u); r9 = MACL;  /* 0C09E888 sts macl,Rn */
	r0 = 0x9Fu; UPD(0x0C09E88Cu, 2);  /* 0C09E88A mov.w @(disp,pc),Rn */
	r7 += r9;  /* 0C09E88C add Rm,Rn */
	IF(0x0C09E88Eu); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09E890u, 2);  /* 0C09E88E mov.b @(r0,Rm),Rn */
	r2 = r6 & 0xFF;  /* 0C09E890 extu.b Rm,Rn */
	T = r2 > r5;  /* 0C09E892 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09E8E4u, 5); goto L_0C09E8E4; }  /* 0C09E894 bt */
L_0C09E896: BLKS(0x0C09E896u);
	r0 = 0xC09E8A8u;  /* 0C09E896 mova @(disp,pc),r0 */
	IF(0x0C09E898u); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09E89Au, 2);  /* 0C09E898 mov.b @(r0,Rm),Rn */
	r3 = r3 & 0xFF;  /* 0C09E89A extu.b Rm,Rn */
	IF(0x0C09E89Cu); { u32 tv_ = (r3 + 0x0C09E8A0u); u32 t_ = PHYS(tv_); IF(0x0C09E89Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C09E8B0u: goto L_0C09E8B0; case 0x0C09E8E4u: goto L_0C09E8E4; case 0x0C09E930u: goto L_0C09E930; case 0x0C09E950u: goto L_0C09E950; default: JUMPD(tv_); } }  /* 0C09E89C braf Rn */
L_0C09E8B0: BLKS(0x0C09E8B0u);
	r4 = 0xB4u; UPD(0x0C09E8B2u, 1);  /* 0C09E8B0 mov.w @(disp,pc),Rn */
	IF(0x0C09E8B2u); MACL = r8 * r4;  /* 0C09E8B2 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09E8B6u, 3);  /* 0C09E8B4 mov.l @(disp,pc),Rn */
	IF(0x0C09E8B6u); r3 = MACL;  /* 0C09E8B6 sts macl,Rn */
	r3 += r2;  /* 0C09E8B8 add Rm,Rn */
	r0 = R32(r3 + 0x30u); UPD(0x0C09E8BCu, 3);  /* 0C09E8BA mov.l @(disp,Rm),Rn */
	r1 = 0xC0u; UPD(0x0C09E8BEu, 1);  /* 0C09E8BC mov.w @(disp,pc),Rn */
	IF(0x0C09E8BEu); MACL = r0 * r1;  /* 0C09E8BE mul.l Rm,Rn */
	IF(0x0C09E8C0u); r2 = MACL;  /* 0C09E8C0 sts macl,Rn */
	IF(0x0C09E8C2u); T = (s32)r2 >= 0;  /* 0C09E8C2 cmp/pz Rn */
	{ u32 c_ = !T; r1 += 0x3Fu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09E920u, 7); goto L_0C09E920; } UPD(0x0C09E8C8u, 1); goto L_0C09E8C8; }  /* 0C09E8C4 bf/s */
L_0C09E8C8: BLKS(0x0C09E8C8u);
	r0 = 0xFFFFFFF8u;  /* 0C09E8C8 mov #imm,Rn */
	IF(0x0C09E8CAu); ARG0(0x420Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C09E8CA shad Rm,Rn */
	r9 = (r2 >> 16) | (r2 << 16);  /* 0C09E8CC swap.w Rm,Rn */
	r7 = (u32)(s32)(s16)r9;  /* 0C09E8CE exts.w Rm,Rn */
	r7 += 0x1u;  /* 0C09E8D0 add #imm,Rn */
	r6 = r7 & 0xFFFF;  /* 0C09E8D2 extu.w Rm,Rn */
	r5 = 0x1u;  /* 0C09E8D4 mov #imm,Rn */
	T = r6 > r5;  /* 0C09E8D6 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x30u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09E8E4u, 11); goto L_0C09E8E4; } UPD(0x0C09E8DCu, 1); goto L_0C09E8DC; }  /* 0C09E8D8 bt/s */
L_0C09E8DC: BLKS(0x0C09E8DCu);
	r0 = 0x9Fu; UPD(0x0C09E8DEu, 1);  /* 0C09E8DC mov.w @(disp,pc),Rn */
	IF(0x0C09E8DEu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09E8E0u, 1);  /* 0C09E8DE mov.b @(r0,Rm),Rn */
	r6 += 0x1u;  /* 0C09E8E0 add #imm,Rn */
	IF(0x0C09E8E2u); W8(r0 + r3, r6); UPD(0x0C09E8E4u, 2);  /* 0C09E8E2 mov.b Rm,@(r0,Rn) */
L_0C09E8E4: BLKS(0x0C09E8E4u);
	r10 = 0xB4u; UPD(0x0C09E8E6u, 1);  /* 0C09E8E4 mov.w @(disp,pc),Rn */
	IF(0x0C09E8E6u); MACL = r8 * r10;  /* 0C09E8E6 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C09E8EAu, 3);  /* 0C09E8E8 mov.l @(disp,pc),Rn */
	IF(0x0C09E8EAu); r1 = MACL;  /* 0C09E8EA sts macl,Rn */
	r1 += r3;  /* 0C09E8EC add Rm,Rn */
	r9 = R32(r1 + 0x2Cu); UPD(0x0C09E8F0u, 3);  /* 0C09E8EE mov.l @(disp,Rm),Rn */
	r5 = 0xFFFF0000u; UPD(0x0C09E8F2u, 1);  /* 0C09E8F0 mov.l @(disp,pc),Rn */
	r1 += 0x5Cu;  /* 0C09E8F2 add #imm,Rn */
	r6 = R32(r1); UPD(0x0C09E8F6u, 2);  /* 0C09E8F4 mov.l @Rm,Rn */
	r9 &= r5;  /* 0C09E8F6 and Rm,Rn */
	r1 += 0xFFFFFFA4u;  /* 0C09E8F8 add #imm,Rn */
	r6 += r9;  /* 0C09E8FA add Rm,Rn */
	W32(r1 + 0x24u, r6); UPD(0x0C09E8FEu, 4);  /* 0C09E8FC mov.l Rm,@(disp,Rn) */
	r4 = R32(r1 + 0x30u); UPD(0x0C09E900u, 1);  /* 0C09E8FE mov.l @(disp,Rm),Rn */
	r8 = 0xC3929E0u; UPD(0x0C09E902u, 1);  /* 0C09E900 mov.l @(disp,pc),Rn */
	r1 += 0x60u;  /* 0C09E902 add #imm,Rn */
	r3 = R32(r1); UPD(0x0C09E906u, 2);  /* 0C09E904 mov.l @Rm,Rn */
	r4 &= r5;  /* 0C09E906 and Rm,Rn */
	r2 = R32(r8); UPD(0x0C09E90Au, 2);  /* 0C09E908 mov.l @Rm,Rn */
	r1 += 0xFFFFFFA0u;  /* 0C09E90A add #imm,Rn */
	r3 += r4;  /* 0C09E90C add Rm,Rn */
	UPD(0x0C09E90Eu, 2);
L_0C09E90E: BLKS(0x0C09E90Eu);
	r3 += r2;  /* 0C09E90E add Rm,Rn */
	W32(r1 + 0x28u, r3); UPD(0x0C09E912u, 2);  /* 0C09E910 mov.l Rm,@(disp,Rn) */
L_0C09E912: BLKS(0x0C09E912u);
	r15 = r14;  /* 0C09E912 mov Rm,Rn */
	IF(0x0C09E914u); PR = R32(r15); r15 += 4; UPD(0x0C09E916u, 2);  /* 0C09E914 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09E918u, 1);  /* 0C09E916 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09E91Au, 1);  /* 0C09E918 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09E91Cu, 1);  /* 0C09E91A mov.l @Rm+,Rn */
	IF(0x0C09E91Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09E91C rts */
L_0C09E920: BLKS(0x0C09E920u);
	{ r2 += r1; /* slot add Rm,Rn */ UPD(0x0C09E8C8u, 3); goto L_0C09E8C8; }  /* 0C09E920 bra */
L_0C09E930: BLKS(0x0C09E930u);
	r3 = 0xB4u; UPD(0x0C09E932u, 1);  /* 0C09E930 mov.w @(disp,pc),Rn */
	IF(0x0C09E932u); MACL = r8 * r3;  /* 0C09E932 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C09E936u, 3);  /* 0C09E934 mov.l @(disp,pc),Rn */
	IF(0x0C09E936u); r3 = MACL;  /* 0C09E936 sts macl,Rn */
	r4 = 0x99u; UPD(0x0C09E93Au, 2);  /* 0C09E938 mov.w @(disp,pc),Rn */
	r3 += r5;  /* 0C09E93A add Rm,Rn */
	r4 += r3;  /* 0C09E93C add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C09E940u, 3);  /* 0C09E93E mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C09E940 add #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C09E942 extu.b Rm,Rn */
	T = r0 == 0x3Cu;  /* 0C09E944 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r4, r2); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09E8E4u, 6); goto L_0C09E8E4; } UPD(0x0C09E94Au, 1); goto L_0C09E94A; }  /* 0C09E946 bf/s */
L_0C09E94A: BLKS(0x0C09E94Au);
	{ IF(0x0C09E94Cu); ; /* slot nop */ UPD(0x0C09E8DCu, 3); goto L_0C09E8DC; }  /* 0C09E94A bra */
L_0C09E950: BLKS(0x0C09E950u);
	r7 = 0xB4u; UPD(0x0C09E952u, 1);  /* 0C09E950 mov.w @(disp,pc),Rn */
	IF(0x0C09E952u); MACL = r8 * r7;  /* 0C09E952 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C09E956u, 3);  /* 0C09E954 mov.l @(disp,pc),Rn */
	IF(0x0C09E956u); r7 = MACL;  /* 0C09E956 sts macl,Rn */
	r7 += r10;  /* 0C09E958 add Rm,Rn */
	r3 = R32(r7 + 0x34u); UPD(0x0C09E95Cu, 3);  /* 0C09E95A mov.l @(disp,Rm),Rn */
	r9 = 0x807u; UPD(0x0C09E95Eu, 1);  /* 0C09E95C mov.w @(disp,pc),Rn */
	r1 = r3 & 0xFFFF;  /* 0C09E95E extu.w Rm,Rn */
	T = r1 > r9;  /* 0C09E960 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09E970u, 5); goto L_0C09E970; }  /* 0C09E962 bt */
L_0C09E964: BLKS(0x0C09E964u);
	r0 = 0x0u;  /* 0C09E964 mov #imm,Rn */
	{ W32(r7, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C09E8E4u, 4); goto L_0C09E8E4; }  /* 0C09E966 bra */
L_0C09E970: BLKS(0x0C09E970u);
	r2 = 0xFFFFF7F8u; UPD(0x0C09E972u, 1);  /* 0C09E970 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C09E972 add Rm,Rn */
	{ W32(r7 + 0x34u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09E8E4u, 4); goto L_0C09E8E4; }  /* 0C09E974 bra */
L_0C09E980: BLKS(0x0C09E980u);
	r9 = 0xC0A03F0u; UPD(0x0C09E982u, 1);  /* 0C09E980 mov.l @(disp,pc),Rn */
	IF(0x0C09E982u); { u32 t_ = r9; PR = 0x0C09E986u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09E986u); }  /* 0C09E982 jsr @Rn */
L_0C09E986: BLKS(0x0C09E986u);
	IF(0x0C09E986u); T = (s32)r0 >= 0;  /* 0C09E986 cmp/pz Rn */
	{ u32 c_ = T; r7 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09E990u, 4); goto L_0C09E990; } goto L_0C09E98C; }  /* 0C09E988 bt/s */
L_0C09E98C: BLKS(0x0C09E98Cu);
	{ IF(0x0C09E98Eu); ; /* slot nop */ UPD(0x0C09EA80u, 4); goto L_0C09EA80; }  /* 0C09E98C bra */
L_0C09E990: BLKS(0x0C09E990u);
	r4 = 0xB4u; UPD(0x0C09E992u, 1);  /* 0C09E990 mov.w @(disp,pc),Rn */
	IF(0x0C09E992u); MACL = r8 * r4;  /* 0C09E992 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C09E996u, 3);  /* 0C09E994 mov.l @(disp,pc),Rn */
	IF(0x0C09E996u); r3 = MACL;  /* 0C09E996 sts macl,Rn */
	r3 += r10;  /* 0C09E998 add Rm,Rn */
	r9 = 0x9Cu; UPD(0x0C09E99Cu, 3);  /* 0C09E99A mov.w @(disp,pc),Rn */
	r6 = r3;  /* 0C09E99C mov Rm,Rn */
	r6 += r9;  /* 0C09E99E add Rm,Rn */
	r6 += 0x3u;  /* 0C09E9A0 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C09E9A4u, 4);  /* 0C09E9A2 mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C09E9A4 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C09E9A6 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09EA10u, 5); goto L_0C09EA10; } goto L_0C09E9AC; }  /* 0C09E9A8 bt/s */
L_0C09E9AC: BLKS(0x0C09E9ACu);
	T = (s32)r0 > (s32)r2;  /* 0C09E9AC cmp/gt Rm,Rn */
	if (T) { UPD(0x0C09E9C4u, 5); goto L_0C09E9C4; }  /* 0C09E9AE bt */
L_0C09E9B0: BLKS(0x0C09E9B0u);
	T = (r0 & r0) == 0;  /* 0C09E9B0 tst Rm,Rn */
	if (!T) { UPD(0x0C09E9C4u, 4); goto L_0C09E9C4; }  /* 0C09E9B2 bf */
L_0C09E9B4: BLKS(0x0C09E9B4u);
	IF(0x0C09E9B4u); MACL = r7 * r4;  /* 0C09E9B4 mul.l Rm,Rn */
	IF(0x0C09E9B6u); r4 = MACL;  /* 0C09E9B6 sts macl,Rn */
	r4 += r10;  /* 0C09E9B8 add Rm,Rn */
	r4 += r9;  /* 0C09E9BA add Rm,Rn */
	r4 += 0x3u;  /* 0C09E9BC add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C09E9C0u, 7);  /* 0C09E9BE mov.b @Rm,Rn */
	T = r0 == 0x1u;  /* 0C09E9C0 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EA00u, 4); goto L_0C09EA00; }  /* 0C09E9C2 bt */
L_0C09E9C4: BLKS(0x0C09E9C4u);
	r9 = 0xB4u; UPD(0x0C09E9C6u, 1);  /* 0C09E9C4 mov.w @(disp,pc),Rn */
	IF(0x0C09E9C6u); MACL = r8 * r9;  /* 0C09E9C6 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C09E9CAu, 3);  /* 0C09E9C8 mov.l @(disp,pc),Rn */
	IF(0x0C09E9CAu); r8 = MACL;  /* 0C09E9CA sts macl,Rn */
	r8 += r10;  /* 0C09E9CC add Rm,Rn */
	IF(0x0C09E9CEu); MACL = r7 * r9;  /* 0C09E9CE mul.l Rm,Rn */
	r8 += 0x5Cu;  /* 0C09E9D0 add #imm,Rn */
	r0 = R32(r8); UPD(0x0C09E9D4u, 6);  /* 0C09E9D2 mov.l @Rm,Rn */
	IF(0x0C09E9D4u); r9 = MACL;  /* 0C09E9D4 sts macl,Rn */
	r9 += r10;  /* 0C09E9D6 add Rm,Rn */
	r8 += 0xFFFFFFA4u;  /* 0C09E9D8 add #imm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C09E9DCu, 4);  /* 0C09E9DA mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x2Cu); UPD(0x0C09E9DEu, 1);  /* 0C09E9DC mov.l @(disp,Rm),Rn */
	r5 += r0;  /* 0C09E9DE add Rm,Rn */
	r2 = 0xFFFF0000u; UPD(0x0C09E9E2u, 2);  /* 0C09E9E0 mov.l @(disp,pc),Rn */
	r6 &= r2;  /* 0C09E9E2 and Rm,Rn */
	r5 += r6;  /* 0C09E9E4 add Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C09E9E8u, 3);  /* 0C09E9E6 mov.l Rm,@(disp,Rn) */
	r8 += 0x60u;  /* 0C09E9E8 add #imm,Rn */
	r3 = R32(r8); UPD(0x0C09E9ECu, 2);  /* 0C09E9EA mov.l @Rm,Rn */
	r8 += 0xFFFFFFA0u;  /* 0C09E9EC add #imm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C09E9F0u, 2);  /* 0C09E9EE mov.l @(disp,Rm),Rn */
	r4 = R32(r8 + 0x30u); UPD(0x0C09E9F2u, 1);  /* 0C09E9F0 mov.l @(disp,Rm),Rn */
	r7 += r3;  /* 0C09E9F2 add Rm,Rn */
	r4 &= r2;  /* 0C09E9F4 and Rm,Rn */
	r10 = R32(r9 + 0x34u); UPD(0x0C09E9F8u, 3);  /* 0C09E9F6 mov.l @(disp,Rm),Rn */
	r7 += r4;  /* 0C09E9F8 add Rm,Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C09E9FCu, 2);  /* 0C09E9FA mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x34u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09E912u, 3); goto L_0C09E912; }  /* 0C09E9FC bra */
L_0C09EA00: BLKS(0x0C09EA00u);
	r0 = r5;  /* 0C09EA00 mov Rm,Rn */
	r0 += 0x1u;  /* 0C09EA02 add #imm,Rn */
	{ W8(r6, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C09E9C4u, 5); goto L_0C09E9C4; }  /* 0C09EA04 bra */
L_0C09EA10: BLKS(0x0C09EA10u);
	r2 = R32(r3 + 0x30u); UPD(0x0C09EA12u, 1);  /* 0C09EA10 mov.l @(disp,Rm),Rn */
	r1 = 0xC0u; UPD(0x0C09EA14u, 1);  /* 0C09EA12 mov.w @(disp,pc),Rn */
	IF(0x0C09EA14u); MACL = r2 * r1;  /* 0C09EA14 mul.l Rm,Rn */
	IF(0x0C09EA16u); r2 = MACL;  /* 0C09EA16 sts macl,Rn */
	IF(0x0C09EA18u); T = (s32)r2 >= 0;  /* 0C09EA18 cmp/pz Rn */
	{ u32 c_ = !T; r1 += 0x3Fu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09EA50u, 7); goto L_0C09EA50; } UPD(0x0C09EA1Eu, 1); goto L_0C09EA1E; }  /* 0C09EA1A bf/s */
L_0C09EA1E: BLKS(0x0C09EA1Eu);
	r1 = 0xFFFFFFF8u;  /* 0C09EA1E mov #imm,Rn */
	IF(0x0C09EA20u); ARG0(0x421Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C09EA20 shad Rm,Rn */
	W32(r3 + 0x30u, r2); UPD(0x0C09EA24u, 3);  /* 0C09EA22 mov.l Rm,@(disp,Rn) */
	r3 = (r2 >> 16) | (r2 << 16);  /* 0C09EA24 swap.w Rm,Rn */
	r2 = (u32)(s32)(s16)r3;  /* 0C09EA26 exts.w Rm,Rn */
	r2 += 0x1u;  /* 0C09EA28 add #imm,Rn */
	r3 = r2 & 0xFFFF;  /* 0C09EA2A extu.w Rm,Rn */
	T = r3 > r0;  /* 0C09EA2C cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09E9C4u, 8); goto L_0C09E9C4; }  /* 0C09EA2E bt */
L_0C09EA30: BLKS(0x0C09EA30u);
	IF(0x0C09EA30u); MACL = r7 * r4;  /* 0C09EA30 mul.l Rm,Rn */
	r0 = r5;  /* 0C09EA32 mov Rm,Rn */
	r0 += 0x1u;  /* 0C09EA34 add #imm,Rn */
	IF(0x0C09EA36u); r5 = MACL;  /* 0C09EA36 sts macl,Rn */
	r5 += r10;  /* 0C09EA38 add Rm,Rn */
	W8(r6, r0); UPD(0x0C09EA3Cu, 7);  /* 0C09EA3A mov.b Rm,@Rn */
	r5 += r9;  /* 0C09EA3C add Rm,Rn */
	r5 += 0x3u;  /* 0C09EA3E add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C09EA42u, 3);  /* 0C09EA40 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C09EA42 add #imm,Rn */
	{ W8(r5, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C09E9C4u, 4); goto L_0C09E9C4; }  /* 0C09EA44 bra */
L_0C09EA50: BLKS(0x0C09EA50u);
	{ r2 += r1; /* slot add Rm,Rn */ UPD(0x0C09EA1Eu, 3); goto L_0C09EA1E; }  /* 0C09EA50 bra */
L_0C09EA80: BLKS(0x0C09EA80u);
	r4 = 0xB4u; UPD(0x0C09EA82u, 1);  /* 0C09EA80 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C09EA82 mov #imm,Rn */
	IF(0x0C09EA84u); MACL = r8 * r4;  /* 0C09EA84 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C09EA88u, 4);  /* 0C09EA86 mov.l @(disp,pc),Rn */
	IF(0x0C09EA88u); r0 = MACL;  /* 0C09EA88 sts macl,Rn */
	IF(0x0C09EA8Au); W32(r0 + r8, r7); UPD(0x0C09EA8Cu, 2);  /* 0C09EA8A mov.l Rm,@(r0,Rn) */
L_0C09EA8C: BLKS(0x0C09EA8Cu);
	{ IF(0x0C09EA8Eu); ; /* slot nop */ UPD(0x0C09E912u, 3); goto L_0C09E912; }  /* 0C09EA8C bra */
L_0C09EA90: BLKS(0x0C09EA90u);
	r10 = 0xC0A03F0u; UPD(0x0C09EA92u, 1);  /* 0C09EA90 mov.l @(disp,pc),Rn */
	IF(0x0C09EA92u); { u32 t_ = r10; PR = 0x0C09EA96u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09EA96u); }  /* 0C09EA92 jsr @Rn */
L_0C09EA96: BLKS(0x0C09EA96u);
	IF(0x0C09EA96u); T = (s32)r0 >= 0;  /* 0C09EA96 cmp/pz Rn */
	if (!T) { UPD(0x0C09EA80u, 4); goto L_0C09EA80; }  /* 0C09EA98 bf */
L_0C09EA9A: BLKS(0x0C09EA9Au);
	r5 = 0xB4u; UPD(0x0C09EA9Cu, 1);  /* 0C09EA9A mov.w @(disp,pc),Rn */
	IF(0x0C09EA9Cu); MACL = r8 * r5;  /* 0C09EA9C mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C09EAA0u, 3);  /* 0C09EA9E mov.l @(disp,pc),Rn */
	IF(0x0C09EAA0u); r3 = MACL;  /* 0C09EAA0 sts macl,Rn */
	IF(0x0C09EAA2u); MACL = r0 * r5;  /* 0C09EAA2 mul.l Rm,Rn */
	r3 += r4;  /* 0C09EAA4 add Rm,Rn */
	r3 += 0x5Cu;  /* 0C09EAA6 add #imm,Rn */
	r10 = R32(r3); UPD(0x0C09EAAAu, 6);  /* 0C09EAA8 mov.l @Rm,Rn */
	IF(0x0C09EAAAu); r7 = MACL;  /* 0C09EAAA sts macl,Rn */
	r7 += r4;  /* 0C09EAAC add Rm,Rn */
	r3 += 0xFFFFFFA4u;  /* 0C09EAAE add #imm,Rn */
	r0 = R32(r7 + 0x24u); UPD(0x0C09EAB2u, 4);  /* 0C09EAB0 mov.l @(disp,Rm),Rn */
	r9 = R32(r3 + 0x2Cu); UPD(0x0C09EAB4u, 1);  /* 0C09EAB2 mov.l @(disp,Rm),Rn */
	r0 += r10;  /* 0C09EAB4 add Rm,Rn */
	r0 += r9;  /* 0C09EAB6 add Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C09EABAu, 3);  /* 0C09EAB8 mov.l Rm,@(disp,Rn) */
	r3 += 0x60u;  /* 0C09EABA add #imm,Rn */
	r6 = R32(r3); UPD(0x0C09EABEu, 2);  /* 0C09EABC mov.l @Rm,Rn */
	r5 = R32(r7 + 0x28u); UPD(0x0C09EAC0u, 1);  /* 0C09EABE mov.l @(disp,Rm),Rn */
	r3 += 0xFFFFFFA0u;  /* 0C09EAC0 add #imm,Rn */
	r5 += r6;  /* 0C09EAC2 add Rm,Rn */
	r8 = 0x9Cu; UPD(0x0C09EAC6u, 3);  /* 0C09EAC4 mov.w @(disp,pc),Rn */
	r6 = r3;  /* 0C09EAC6 mov Rm,Rn */
	r6 += r8;  /* 0C09EAC8 add Rm,Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C09EACCu, 3);  /* 0C09EACA mov.l @(disp,Rm),Rn */
	r6 += 0x3u;  /* 0C09EACC add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r6); UPD(0x0C09EAD0u, 2);  /* 0C09EACE mov.b @Rm,Rn */
	r5 += r2;  /* 0C09EAD0 add Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C09EAD2 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C09EAD4 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r3 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09EB10u, 6); goto L_0C09EB10; } UPD(0x0C09EADAu, 1); goto L_0C09EADA; }  /* 0C09EAD6 bt/s */
L_0C09EADA: BLKS(0x0C09EADAu);
	r2 = 0x1u;  /* 0C09EADA mov #imm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C09EADC cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C09EB00u, 5); goto L_0C09EB00; } goto L_0C09EAE2; }  /* 0C09EADE bt/s */
L_0C09EAE2: BLKS(0x0C09EAE2u);
	T = (r0 & r0) == 0;  /* 0C09EAE2 tst Rm,Rn */
	if (!T) { UPD(0x0C09EA8Cu, 5); goto L_0C09EA8C; }  /* 0C09EAE4 bf */
L_0C09EAE6: BLKS(0x0C09EAE6u);
	r7 += r8;  /* 0C09EAE6 add Rm,Rn */
	r7 += 0x3u;  /* 0C09EAE8 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C09EAECu, 3);  /* 0C09EAEA mov.b @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EAEC cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C09EA8Cu, 4); goto L_0C09EA8C; }  /* 0C09EAEE bf */
L_0C09EAF0: BLKS(0x0C09EAF0u);
	r3 = r4;  /* 0C09EAF0 mov Rm,Rn */
	r3 += 0x1u;  /* 0C09EAF2 add #imm,Rn */
	W8(r6, r3); UPD(0x0C09EAF6u, 3);  /* 0C09EAF4 mov.b Rm,@Rn */
L_0C09EAF6: BLKS(0x0C09EAF6u);
	{ IF(0x0C09EAF8u); ; /* slot nop */ UPD(0x0C09E912u, 3); goto L_0C09E912; }  /* 0C09EAF6 bra */
L_0C09EB00: BLKS(0x0C09EB00u);
	if (!T) { UPD(0x0C09EAF6u, 3); goto L_0C09EAF6; }  /* 0C09EB00 bf */
L_0C09EB02: BLKS(0x0C09EB02u);
	r10 = R32(r7 + 0x34u); UPD(0x0C09EB04u, 1);  /* 0C09EB02 mov.l @(disp,Rm),Rn */
	{ W32(r3 + 0x34u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09E912u, 3); goto L_0C09E912; }  /* 0C09EB04 bra */
L_0C09EB10: BLKS(0x0C09EB10u);
	r5 = R32(r3 + 0x34u); UPD(0x0C09EB12u, 1);  /* 0C09EB10 mov.l @(disp,Rm),Rn */
	r0 = 0xF8F8u; UPD(0x0C09EB14u, 1);  /* 0C09EB12 mov.l @(disp,pc),Rn */
	r1 = r5 & 0xFFFF;  /* 0C09EB14 extu.w Rm,Rn */
	T = r1 == r0;  /* 0C09EB16 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C09EB30u, 5); goto L_0C09EB30; }  /* 0C09EB18 bt */
L_0C09EB1A: BLKS(0x0C09EB1Au);
	r8 = 0x808u; UPD(0x0C09EB1Cu, 1);  /* 0C09EB1A mov.w @(disp,pc),Rn */
	r5 += r8;  /* 0C09EB1C add Rm,Rn */
	{ W32(r3 + 0x34u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09E912u, 4); goto L_0C09E912; }  /* 0C09EB1E bra */
L_0C09EB30: BLKS(0x0C09EB30u);
	r9 = r4;  /* 0C09EB30 mov Rm,Rn */
	r9 += 0x1u;  /* 0C09EB32 add #imm,Rn */
	W8(r6, r9); UPD(0x0C09EB36u, 3);  /* 0C09EB34 mov.b Rm,@Rn */
	r6 = r8;  /* 0C09EB36 mov Rm,Rn */
	r6 += r7;  /* 0C09EB38 add Rm,Rn */
	r6 += 0x3u;  /* 0C09EB3A add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C09EB3Eu, 4);  /* 0C09EB3C mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C09EB3E add #imm,Rn */
	{ W8(r6, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C09E912u, 4); goto L_0C09E912; }  /* 0C09EB40 bra */
L_0C09EB50: BLKS(0x0C09EB50u);
	r5 = 0xB4u; UPD(0x0C09EB52u, 1);  /* 0C09EB50 mov.w @(disp,pc),Rn */
	IF(0x0C09EB52u); MACL = r8 * r5;  /* 0C09EB52 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C09EB56u, 3);  /* 0C09EB54 mov.l @(disp,pc),Rn */
	IF(0x0C09EB56u); r3 = MACL;  /* 0C09EB56 sts macl,Rn */
	r7 = 0x9Cu; UPD(0x0C09EB5Au, 2);  /* 0C09EB58 mov.w @(disp,pc),Rn */
	r3 += r4;  /* 0C09EB5A add Rm,Rn */
	r7 += r3;  /* 0C09EB5C add Rm,Rn */
	r5 = r7;  /* 0C09EB5E mov Rm,Rn */
	r5 += 0x3u;  /* 0C09EB60 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C09EB64u, 5);  /* 0C09EB62 mov.b @Rm,Rn */
	r0 = r6 & 0xFF;  /* 0C09EB64 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C09EB66 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09EBF0u, 5); goto L_0C09EBF0; } goto L_0C09EB6C; }  /* 0C09EB68 bt/s */
L_0C09EB6C: BLKS(0x0C09EB6Cu);
	T = (s32)r0 > (s32)r2;  /* 0C09EB6C cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C09EBC0u, 5); goto L_0C09EBC0; } goto L_0C09EB72; }  /* 0C09EB6E bt/s */
L_0C09EB72: BLKS(0x0C09EB72u);
	T = (r0 & r0) == 0;  /* 0C09EB72 tst Rm,Rn */
	if (T) { UPD(0x0C09EBA0u, 5); goto L_0C09EBA0; }  /* 0C09EB74 bt */
L_0C09EB76: BLKS(0x0C09EB76u);
	r2 = 0xB4u; UPD(0x0C09EB78u, 1);  /* 0C09EB76 mov.w @(disp,pc),Rn */
	IF(0x0C09EB78u); MACL = r8 * r2;  /* 0C09EB78 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09EB7Cu, 3);  /* 0C09EB7A mov.l @(disp,pc),Rn */
	IF(0x0C09EB7Cu); r1 = MACL;  /* 0C09EB7C sts macl,Rn */
	r1 += r0;  /* 0C09EB7E add Rm,Rn */
	r3 = R32(r1 + 0x2Cu); UPD(0x0C09EB82u, 3);  /* 0C09EB80 mov.l @(disp,Rm),Rn */
	r8 = R32(r1 + 0x30u); UPD(0x0C09EB84u, 1);  /* 0C09EB82 mov.l @(disp,Rm),Rn */
	W32(r1 + 0x24u, r3); UPD(0x0C09EB86u, 1);  /* 0C09EB84 mov.l Rm,@(disp,Rn) */
	r7 = 0xC3929E0u; UPD(0x0C09EB88u, 1);  /* 0C09EB86 mov.l @(disp,pc),Rn */
	r1 += 0x50u;  /* 0C09EB88 add #imm,Rn */
	r3 = R32(r7); UPD(0x0C09EB8Cu, 2);  /* 0C09EB8A mov.l @Rm,Rn */
	r2 = R32(r1); UPD(0x0C09EB8Eu, 1);  /* 0C09EB8C mov.l @Rm,Rn */
	r3 += r8;  /* 0C09EB8E add Rm,Rn */
	{ r1 += 0xFFFFFFB0u; /* slot add #imm,Rn */ UPD(0x0C09E90Eu, 4); goto L_0C09E90E; }  /* 0C09EB90 bra */
L_0C09EBA0: BLKS(0x0C09EBA0u);
	r3 += 0x50u;  /* 0C09EBA0 add #imm,Rn */
	r2 = R32(r3); UPD(0x0C09EBA4u, 2);  /* 0C09EBA2 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C09EBA4 tst Rm,Rn */
	if (T) { UPD(0x0C09EBB0u, 4); goto L_0C09EBB0; }  /* 0C09EBA6 bt */
L_0C09EBA8: BLKS(0x0C09EBA8u);
	r0 = 0xFFF40000u; UPD(0x0C09EBAAu, 1);  /* 0C09EBA8 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C09EBAA add Rm,Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C09EB76u, 4); goto L_0C09EB76; }  /* 0C09EBAC bra */
L_0C09EBB0: BLKS(0x0C09EBB0u);
	r9 = r6;  /* 0C09EBB0 mov Rm,Rn */
	UPD(0x0C09EBB2u, 1);
L_0C09EBB2: BLKS(0x0C09EBB2u);
	r9 += 0x1u;  /* 0C09EBB2 add #imm,Rn */
	{ W8(r5, r9); /* slot mov.b Rm,@Rn */ UPD(0x0C09EB76u, 4); goto L_0C09EB76; }  /* 0C09EBB4 bra */
L_0C09EBC0: BLKS(0x0C09EBC0u);
	if (!T) { UPD(0x0C09EB76u, 3); goto L_0C09EB76; }  /* 0C09EBC0 bf */
L_0C09EBC2: BLKS(0x0C09EBC2u);
	r7 = R32(r3 + 0x34u); UPD(0x0C09EBC4u, 1);  /* 0C09EBC2 mov.l @(disp,Rm),Rn */
	r5 = 0xFF00u; UPD(0x0C09EBC6u, 1);  /* 0C09EBC4 mov.l @(disp,pc),Rn */
	r6 = 0x807u; UPD(0x0C09EBC8u, 1);  /* 0C09EBC6 mov.w @(disp,pc),Rn */
	r5 &= r7;  /* 0C09EBC8 and Rm,Rn */
	T = r5 > r6;  /* 0C09EBCA cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EBE0u, 5); goto L_0C09EBE0; }  /* 0C09EBCC bt */
L_0C09EBCE: BLKS(0x0C09EBCEu);
	r10 = 0x0u;  /* 0C09EBCE mov #imm,Rn */
	{ W32(r3, r10); /* slot mov.l Rm,@Rn */ UPD(0x0C09EB76u, 4); goto L_0C09EB76; }  /* 0C09EBD0 bra */
L_0C09EBE0: BLKS(0x0C09EBE0u);
	r4 = 0xFFFFF7F8u; UPD(0x0C09EBE2u, 1);  /* 0C09EBE0 mov.w @(disp,pc),Rn */
	r7 += r4;  /* 0C09EBE2 add Rm,Rn */
	{ W32(r3 + 0x34u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09EB76u, 4); goto L_0C09EB76; }  /* 0C09EBE4 bra */
L_0C09EBF0: BLKS(0x0C09EBF0u);
	r0 = 0x99u; UPD(0x0C09EBF2u, 1);  /* 0C09EBF0 mov.w @(disp,pc),Rn */
	r9 = 0x3Bu;  /* 0C09EBF2 mov #imm,Rn */
	IF(0x0C09EBF4u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09EBF6u, 2);  /* 0C09EBF4 mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C09EBF6 add #imm,Rn */
	r10 = r4 & 0xFF;  /* 0C09EBF8 extu.b Rm,Rn */
	T = r10 > r9;  /* 0C09EBFA cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09EBFEu); W8(r0 + r3, r4); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09EB76u, 6); goto L_0C09EB76; } UPD(0x0C09EC00u, 1); goto L_0C09EC00; }  /* 0C09EBFC bf/s */
L_0C09EC00: BLKS(0x0C09EC00u);
	r2 = 0x0u;  /* 0C09EC00 mov #imm,Rn */
	IF(0x0C09EC02u); W8(r0 + r3, r2); UPD(0x0C09EC04u, 2);  /* 0C09EC02 mov.b Rm,@(r0,Rn) */
	r1 = r7;  /* 0C09EC04 mov Rm,Rn */
	r1 += 0x1u;  /* 0C09EC06 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C09EC0Au, 3);  /* 0C09EC08 mov.b @Rm,Rn */
	r3 = 0x7u;  /* 0C09EC0A mov #imm,Rn */
	r0 += 0x1u;  /* 0C09EC0C add #imm,Rn */
	r7 = r0 & 0xFF;  /* 0C09EC0E extu.b Rm,Rn */
	T = r7 > r3;  /* 0C09EC10 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r1, r0); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09EB76u, 7); goto L_0C09EB76; } UPD(0x0C09EC16u, 1); goto L_0C09EC16; }  /* 0C09EC12 bf/s */
L_0C09EC16: BLKS(0x0C09EC16u);
	{ r9 = r6; /* slot mov Rm,Rn */ UPD(0x0C09EBB2u, 3); goto L_0C09EBB2; }  /* 0C09EC16 bra */
}

void f_0C09EC40(sh3_t *c)
{
	LOCALS;
L_0C09EC40: BLKS(0x0C09EC40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09EC42u, 1);  /* 0C09EC40 mov.l Rm,@-Rn */
	r4 = 0x48u;  /* 0C09EC42 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09EC46u, 2);  /* 0C09EC44 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09EC48u, 1);  /* 0C09EC46 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09EC4Au, 1);  /* 0C09EC48 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09EC4Cu, 1);  /* 0C09EC4A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09EC4Eu, 1);  /* 0C09EC4C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09EC50u, 1);  /* 0C09EC4E mov.l Rm,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C09EC52u, 1);  /* 0C09EC50 mov.l @(disp,pc),Rn */
	IF(0x0C09EC52u); r15 -= 4; W32(r15, PR); UPD(0x0C09EC54u, 1);  /* 0C09EC52 sts.l pr,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09EC54 add #imm,Rn */
	r5 = 0x8000u; UPD(0x0C09EC58u, 2);  /* 0C09EC56 mov.l @(disp,pc),Rn */
	IF(0x0C09EC58u); { u32 t_ = r8; PR = 0x0C09EC5Cu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C09EC5Cu); }  /* 0C09EC58 jsr @Rn */
L_0C09EC5C: BLKS(0x0C09EC5Cu);
	T = (r0 & r0) == 0;  /* 0C09EC5C tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09EC80u, 4); goto L_0C09EC80; } UPD(0x0C09EC62u, 1); goto L_0C09EC62; }  /* 0C09EC5E bf/s */
L_0C09EC62: BLKS(0x0C09EC62u);
	r14 += 0x4u;  /* 0C09EC62 add #imm,Rn */
	r15 = r14;  /* 0C09EC64 mov Rm,Rn */
	IF(0x0C09EC66u); PR = R32(r15); r15 += 4; UPD(0x0C09EC68u, 3);  /* 0C09EC66 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EC6Au, 1);  /* 0C09EC68 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09EC6Cu, 1);  /* 0C09EC6A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EC6Eu, 1);  /* 0C09EC6C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EC70u, 1);  /* 0C09EC6E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EC72u, 1);  /* 0C09EC70 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EC74u, 1);  /* 0C09EC72 mov.l @Rm+,Rn */
	IF(0x0C09EC74u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EC74 rts */
L_0C09EC80: BLKS(0x0C09EC80u);
	r8 = 0xC0606C0u; UPD(0x0C09EC82u, 1);  /* 0C09EC80 mov.l @(disp,pc),Rn */
	IF(0x0C09EC82u); { u32 t_ = r8; PR = 0x0C09EC86u; r4 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C09EC86u); }  /* 0C09EC82 jsr @Rn */
L_0C09EC86: BLKS(0x0C09EC86u);
	T = (r0 & r0) == 0;  /* 0C09EC86 tst Rm,Rn */
	if (T) { UPD(0x0C09EC62u, 4); goto L_0C09EC62; }  /* 0C09EC88 bt */
L_0C09EC8A: BLKS(0x0C09EC8Au);
	r12 = 0x0u;  /* 0C09EC8A mov #imm,Rn */
	W32(r14, r12); UPD(0x0C09EC8Eu, 2);  /* 0C09EC8C mov.l Rm,@Rn */
	IF(0x0C09EC8Eu); ;  /* 0C09EC8E nop */
	UPD(0x0C09EC90u, 1);
L_0C09EC90: BLKS(0x0C09EC90u);
	r0 = 0x280u; UPD(0x0C09EC92u, 1);  /* 0C09EC90 mov.w @(disp,pc),Rn */
	IF(0x0C09EC92u); MACL = r12 * r0;  /* 0C09EC92 mul.l Rm,Rn */
	r3 = 0xC283794u; UPD(0x0C09EC96u, 3);  /* 0C09EC94 mov.l @(disp,pc),Rn */
	IF(0x0C09EC96u); r0 = MACL;  /* 0C09EC96 sts macl,Rn */
	IF(0x0C09EC98u); r2 = R32(r0 + r3); UPD(0x0C09EC9Au, 2);  /* 0C09EC98 mov.l @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C09EC9A tst Rm,Rn */
	{ u32 c_ = T; r11 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C09ED38u, 4); goto L_0C09ED38; } UPD(0x0C09ECA0u, 1); goto L_0C09ECA0; }  /* 0C09EC9C bt/s */
L_0C09ECA0: BLKS(0x0C09ECA0u);
	r0 = r12;  /* 0C09ECA0 mov Rm,Rn */
	r5 = 0xC1D8148u; UPD(0x0C09ECA4u, 2);  /* 0C09ECA2 mov.l @(disp,pc),Rn */
	IF(0x0C09ECA4u); r0 <<= 2;  /* 0C09ECA4 shll2 Rn */
	r10 = R32(r14); UPD(0x0C09ECA8u, 2);  /* 0C09ECA6 mov.l @Rm,Rn */
	r13 = r12;  /* 0C09ECA8 mov Rm,Rn */
	r4 = 0xC2755BCu; UPD(0x0C09ECACu, 2);  /* 0C09ECAA mov.l @(disp,pc),Rn */
	r10 += r10;  /* 0C09ECAC add Rm,Rn */
	IF(0x0C09ECAEu); r9 = R32(r0 + r5); UPD(0x0C09ECB0u, 2);  /* 0C09ECAE mov.l @(r0,Rm),Rn */
	r11 = 0x0u;  /* 0C09ECB0 mov #imm,Rn */
	r13 += 0x48u;  /* 0C09ECB2 add #imm,Rn */
	r10 += r4;  /* 0C09ECB4 add Rm,Rn */
	IF(0x0C09ECB6u); ;  /* 0C09ECB6 nop */
	UPD(0x0C09ECB8u, 4);
L_0C09ECB8: BLKS(0x0C09ECB8u);
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r4 = v_; } UPD(0x0C09ECBAu, 1);  /* 0C09ECB8 mov.w @Rm+,Rn */
	r6 = 0x6u;  /* 0C09ECBA mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C09ECBEu, 2);  /* 0C09ECBC mov.w @(disp,pc),Rn */
	IF(0x0C09ECBEu); MACL = r4 * r8;  /* 0C09ECBE mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C09ECC2u, 3);  /* 0C09ECC0 mov.l @(disp,pc),Rn */
	r2 = 0xC2755BCu; UPD(0x0C09ECC4u, 1);  /* 0C09ECC2 mov.l @(disp,pc),Rn */
	IF(0x0C09ECC4u); r8 = MACL;  /* 0C09ECC4 sts macl,Rn */
	r0 = 0xC0000000u; UPD(0x0C09ECC8u, 2);  /* 0C09ECC6 mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C09ECC8 add Rm,Rn */
	MACL = (u32)((s32)(s16)r12 * (s32)(s16)r6);  /* 0C09ECCA muls.w Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C09ECCEu, 4);  /* 0C09ECCC mov.w @Rm,Rn */
	IF(0x0C09ECCEu); r5 = MACL;  /* 0C09ECCE sts macl,Rn */
	W32(r8, r0); UPD(0x0C09ECD2u, 2);  /* 0C09ECD0 mov.l Rm,@Rn */
	r5 += r1;  /* 0C09ECD2 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C09ECD4 add #imm,Rn */
	W16(r8, r5); UPD(0x0C09ECD8u, 3);  /* 0C09ECD6 mov.w Rm,@Rn */
	r7 = 0x0u;  /* 0C09ECD8 mov #imm,Rn */
	r8 += 0xFFFFFF84u;  /* 0C09ECDA add #imm,Rn */
	W32(r8 + 0x4u, r13); UPD(0x0C09ECDEu, 3);  /* 0C09ECDC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A02D0u; UPD(0x0C09ECE0u, 1);  /* 0C09ECDE mov.l @(disp,pc),Rn */
	r3 = R32(r9); UPD(0x0C09ECE2u, 1);  /* 0C09ECE0 mov.l @Rm,Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C09ECE4u, 1);  /* 0C09ECE2 mov.l Rm,@(disp,Rn) */
	IF(0x0C09ECE4u); { u32 t_ = r0; PR = 0x0C09ECE8u; W32(r8 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C09ECE8u); }  /* 0C09ECE4 jsr @Rn */
L_0C09ECE8: BLKS(0x0C09ECE8u);
	r6 = R32(r9 + 0x4u); UPD(0x0C09ECEAu, 1);  /* 0C09ECE8 mov.l @(disp,Rm),Rn */
	r8 += 0x5Cu;  /* 0C09ECEA add #imm,Rn */
	W32(r8, r6); UPD(0x0C09ECEEu, 2);  /* 0C09ECEC mov.l Rm,@Rn */
	r1 = 0x0u;  /* 0C09ECEE mov #imm,Rn */
	r3 = R32(r9 + 0x8u); UPD(0x0C09ECF2u, 2);  /* 0C09ECF0 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C09ECF2 add #imm,Rn */
	W32(r8, r3); UPD(0x0C09ECF6u, 2);  /* 0C09ECF4 mov.l Rm,@Rn */
	r6 = 0x17u;  /* 0C09ECF6 mov #imm,Rn */
	r5 = 0x2000000u; UPD(0x0C09ECFAu, 2);  /* 0C09ECF8 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFA0u;  /* 0C09ECFA add #imm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C09ECFEu, 2);  /* 0C09ECFC mov.l Rm,@(disp,Rn) */
	r4 = 0xC3929E0u; UPD(0x0C09ED00u, 1);  /* 0C09ECFE mov.l @(disp,pc),Rn */
	r2 = R32(r4); UPD(0x0C09ED02u, 1);  /* 0C09ED00 mov.l @Rm,Rn */
	r3 += r2;  /* 0C09ED02 add Rm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C09ED06u, 2);  /* 0C09ED04 mov.l Rm,@(disp,Rn) */
	r7 = R32(r9 + 0xCu); UPD(0x0C09ED08u, 1);  /* 0C09ED06 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C09ED0Au, 1);  /* 0C09ED08 mov.l Rm,@(disp,Rn) */
	r0 = R32(r9 + 0x10u); UPD(0x0C09ED0Cu, 1);  /* 0C09ED0A mov.l @(disp,Rm),Rn */
	r7 = r11;  /* 0C09ED0C mov Rm,Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C09ED10u, 2);  /* 0C09ED0E mov.l Rm,@(disp,Rn) */
	r7 += 0x1u;  /* 0C09ED10 add #imm,Rn */
	r0 = 0xA9u; UPD(0x0C09ED14u, 2);  /* 0C09ED12 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r7;  /* 0C09ED14 exts.w Rm,Rn */
	IF(0x0C09ED16u); W8(r0 + r8, r6); UPD(0x0C09ED18u, 2);  /* 0C09ED16 mov.b Rm,@(r0,Rn) */
	r5 = R32(r9 + 0x14u); UPD(0x0C09ED1Au, 1);  /* 0C09ED18 mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFF2u;  /* 0C09ED1A add #imm,Rn */
	W32(r8 + 0x34u, r5); UPD(0x0C09ED1Eu, 2);  /* 0C09ED1C mov.l Rm,@(disp,Rn) */
	r6 = 0x5u;  /* 0C09ED1E mov #imm,Rn */
	r8 += 0x50u;  /* 0C09ED20 add #imm,Rn */
	W32(r8, r1); UPD(0x0C09ED24u, 3);  /* 0C09ED22 mov.l Rm,@Rn */
	r9 += 0x18u;  /* 0C09ED24 add #imm,Rn */
	r4 = 0x808080u; UPD(0x0C09ED28u, 2);  /* 0C09ED26 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C09ED28 add #imm,Rn */
	W32(r8 + 0x38u, r4); UPD(0x0C09ED2Cu, 2);  /* 0C09ED2A mov.l Rm,@(disp,Rn) */
	T = (s32)r11 > (s32)r6;  /* 0C09ED2C cmp/gt Rm,Rn */
	r3 = 0xC22486Eu; UPD(0x0C09ED30u, 2);  /* 0C09ED2E mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C09ED32u, 1);  /* 0C09ED30 mov.b @Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09ED34u); W8(r0 + r8, r2); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09ECB8u, 3); goto L_0C09ECB8; } UPD(0x0C09ED36u, 1); goto L_0C09ED36; }  /* 0C09ED32 bf/s */
L_0C09ED36: BLKS(0x0C09ED36u);
	r11 = R32(r14); UPD(0x0C09ED38u, 1);  /* 0C09ED36 mov.l @Rm,Rn */
L_0C09ED38: BLKS(0x0C09ED38u);
	r10 = r12;  /* 0C09ED38 mov Rm,Rn */
	r10 += 0x1u;  /* 0C09ED3A add #imm,Rn */
	r11 += 0x6u;  /* 0C09ED3C add #imm,Rn */
	r12 = (u32)(s32)(s16)r10;  /* 0C09ED3E exts.w Rm,Rn */
	r9 = 0x1u;  /* 0C09ED40 mov #imm,Rn */
	T = (s32)r12 > (s32)r9;  /* 0C09ED42 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r14, r11); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09EC90u, 9); goto L_0C09EC90; } UPD(0x0C09ED48u, 1); goto L_0C09ED48; }  /* 0C09ED44 bf/s */
L_0C09ED48: BLKS(0x0C09ED48u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C09EC62u, 3); goto L_0C09EC62; }  /* 0C09ED48 bra */
}

void f_0C09ED90(sh3_t *c)
{
	LOCALS;
L_0C09ED90: BLKS(0x0C09ED90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09ED92u, 1);  /* 0C09ED90 mov.l Rm,@-Rn */
	r4 = 0x48u;  /* 0C09ED92 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09ED96u, 2);  /* 0C09ED94 mov.l Rm,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C09ED98u, 1);  /* 0C09ED96 mov.l @(disp,pc),Rn */
	IF(0x0C09ED98u); r15 -= 4; W32(r15, PR); UPD(0x0C09ED9Au, 1);  /* 0C09ED98 sts.l pr,@-Rn */
	r5 = 0x8000u; UPD(0x0C09ED9Cu, 1);  /* 0C09ED9A mov.l @(disp,pc),Rn */
	IF(0x0C09ED9Cu); { u32 t_ = r8; PR = 0x0C09EDA0u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C09EDA0u); }  /* 0C09ED9C jsr @Rn */
L_0C09EDA0: BLKS(0x0C09EDA0u);
	T = (r0 & r0) == 0;  /* 0C09EDA0 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09EDB0u, 4); goto L_0C09EDB0; } UPD(0x0C09EDA6u, 1); goto L_0C09EDA6; }  /* 0C09EDA2 bf/s */
L_0C09EDA6: BLKS(0x0C09EDA6u);
	r15 = r14;  /* 0C09EDA6 mov Rm,Rn */
	IF(0x0C09EDA8u); PR = R32(r15); r15 += 4; UPD(0x0C09EDAAu, 2);  /* 0C09EDA8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EDACu, 1);  /* 0C09EDAA mov.l @Rm+,Rn */
	IF(0x0C09EDACu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EDAC rts */
L_0C09EDB0: BLKS(0x0C09EDB0u);
	r8 = 0xC0606C0u; UPD(0x0C09EDB2u, 1);  /* 0C09EDB0 mov.l @(disp,pc),Rn */
	IF(0x0C09EDB2u); { u32 t_ = r8; PR = 0x0C09EDB6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C09EDB6u); }  /* 0C09EDB2 jsr @Rn */
L_0C09EDB6: BLKS(0x0C09EDB6u);
	T = (r0 & r0) == 0;  /* 0C09EDB6 tst Rm,Rn */
	if (T) { UPD(0x0C09EDA6u, 4); goto L_0C09EDA6; }  /* 0C09EDB8 bt */
L_0C09EDBA: BLKS(0x0C09EDBAu);
	r5 = 0x6u;  /* 0C09EDBA mov #imm,Rn */
	r4 = 0xC2859A0u; UPD(0x0C09EDBEu, 2);  /* 0C09EDBC mov.l @(disp,pc),Rn */
	r3 = R32(r4); UPD(0x0C09EDC0u, 1);  /* 0C09EDBE mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C09EDC2u, 1);  /* 0C09EDC0 mov.w @Rm+,Rn */
	r2 = 0xC2755BCu; UPD(0x0C09EDC4u, 1);  /* 0C09EDC2 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C09EDC4 and #imm,r0 */
	W32(r4, r3); UPD(0x0C09EDC8u, 2);  /* 0C09EDC6 mov.l Rm,@Rn */
	r0 += 0x48u;  /* 0C09EDC8 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C09EDCCu, 2);  /* 0C09EDCA mov.w @Rm,Rn */
	r3 = 0x0u;  /* 0C09EDCC mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C09EDD0u, 2);  /* 0C09EDCE mov.w @(disp,pc),Rn */
	IF(0x0C09EDD0u); MACL = r4 * r8;  /* 0C09EDD0 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C09EDD4u, 3);  /* 0C09EDD2 mov.l @(disp,pc),Rn */
	r6 = 0xC0000000u; UPD(0x0C09EDD6u, 1);  /* 0C09EDD4 mov.l @(disp,pc),Rn */
	IF(0x0C09EDD6u); r8 = MACL;  /* 0C09EDD6 sts macl,Rn */
	r2 = 0xC0A02D0u; UPD(0x0C09EDDAu, 2);  /* 0C09EDD8 mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C09EDDA add Rm,Rn */
	W32(r8, r6); UPD(0x0C09EDDEu, 2);  /* 0C09EDDC mov.l Rm,@Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C09EDE0u, 1);  /* 0C09EDDE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r5); UPD(0x0C09EDE2u, 1);  /* 0C09EDE0 mov.l Rm,@(disp,Rn) */
	IF(0x0C09EDE2u); { u32 t_ = r2; PR = 0x0C09EDE6u; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C09EDE6u); }  /* 0C09EDE2 jsr @Rn */
L_0C09EDE6: BLKS(0x0C09EDE6u);
	r0 = 0xA00000u; UPD(0x0C09EDE8u, 1);  /* 0C09EDE6 mov.l @(disp,pc),Rn */
	r3 = 0x17u;  /* 0C09EDE8 mov #imm,Rn */
	r6 = 0xC00000u; UPD(0x0C09EDECu, 2);  /* 0C09EDEA mov.l @(disp,pc),Rn */
	W32(r8 + 0x2Cu, r0); UPD(0x0C09EDEEu, 1);  /* 0C09EDEC mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r6); UPD(0x0C09EDF0u, 1);  /* 0C09EDEE mov.l Rm,@(disp,Rn) */
	r5 = 0xF00000u; UPD(0x0C09EDF2u, 1);  /* 0C09EDF0 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C09EDF2 add #imm,Rn */
	W32(r8, r5); UPD(0x0C09EDF6u, 2);  /* 0C09EDF4 mov.l Rm,@Rn */
	r8 += 0xFFFFFFB0u;  /* 0C09EDF6 add #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C09EDFAu, 2);  /* 0C09EDF8 mov.l Rm,@(disp,Rn) */
	r7 = 0xC3929E0u; UPD(0x0C09EDFCu, 1);  /* 0C09EDFA mov.l @(disp,pc),Rn */
	r0 = 0xA9u; UPD(0x0C09EDFEu, 1);  /* 0C09EDFC mov.w @(disp,pc),Rn */
	r4 = R32(r7); UPD(0x0C09EE00u, 1);  /* 0C09EDFE mov.l @Rm,Rn */
	IF(0x0C09EE00u); W8(r0 + r8, r3); UPD(0x0C09EE02u, 1);  /* 0C09EE00 mov.b Rm,@(r0,Rn) */
	r4 += r6;  /* 0C09EE02 add Rm,Rn */
	r0 = 0x808080u; UPD(0x0C09EE06u, 2);  /* 0C09EE04 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C09EE06 add Rm,Rn */
	r2 = 0x204FFFFu; UPD(0x0C09EE0Au, 2);  /* 0C09EE08 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r0); UPD(0x0C09EE0Cu, 1);  /* 0C09EE0A mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r4); UPD(0x0C09EE0Eu, 1);  /* 0C09EE0C mov.l Rm,@(disp,Rn) */
	r0 = 0x1u;  /* 0C09EE0E mov #imm,Rn */
	{ W32(r8 + 0x34u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09EDA6u, 4); goto L_0C09EDA6; }  /* 0C09EE10 bra */
}

void f_0C09EE50(sh3_t *c)
{
	LOCALS;
L_0C09EE50: BLKS(0x0C09EE50u);
	r5 = 0xB4u; UPD(0x0C09EE52u, 1);  /* 0C09EE50 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C09EE52 exts.w Rm,Rn */
	IF(0x0C09EE54u); MACL = r4 * r5;  /* 0C09EE54 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09EE58u, 4);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	IF(0x0C09EE58u); r3 = MACL;  /* 0C09EE58 sts macl,Rn */
	r6 = 0x9Fu; UPD(0x0C09EE5Cu, 2);  /* 0C09EE5A mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C09EE5C add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09EE60u, 2);  /* 0C09EE5E mov.l Rm,@-Rn */
	r6 += r3;  /* 0C09EE60 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C09EE64u, 2);  /* 0C09EE62 mov.b @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C09EE64 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C09EE66 cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09EEE0u, 5); goto L_0C09EEE0; } goto L_0C09EE6C; }  /* 0C09EE68 bt/s */
L_0C09EE6C: BLKS(0x0C09EE6Cu);
	r2 = 0x1u;  /* 0C09EE6C mov #imm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C09EE6E cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C09EEC0u, 6); goto L_0C09EEC0; } goto L_0C09EE74; }  /* 0C09EE70 bt/s */
L_0C09EE74: BLKS(0x0C09EE74u);
	T = (r0 & r0) == 0;  /* 0C09EE74 tst Rm,Rn */
	if (T) { UPD(0x0C09EEA0u, 5); goto L_0C09EEA0; }  /* 0C09EE76 bt */
L_0C09EE78: BLKS(0x0C09EE78u);
	r6 = 0xB4u; UPD(0x0C09EE7Au, 1);  /* 0C09EE78 mov.w @(disp,pc),Rn */
	IF(0x0C09EE7Au); MACL = r4 * r6;  /* 0C09EE7A mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09EE7Eu, 3);  /* 0C09EE7C mov.l @(disp,pc),Rn */
	IF(0x0C09EE7Eu); r4 = MACL;  /* 0C09EE7E sts macl,Rn */
	r2 = 0xC3929E0u; UPD(0x0C09EE82u, 2);  /* 0C09EE80 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C09EE82 add Rm,Rn */
	r5 = R32(r2); UPD(0x0C09EE86u, 2);  /* 0C09EE84 mov.l @Rm,Rn */
	r3 = R32(r4 + 0x30u); UPD(0x0C09EE88u, 1);  /* 0C09EE86 mov.l @(disp,Rm),Rn */
	r3 += r5;  /* 0C09EE88 add Rm,Rn */
	W32(r4 + 0x28u, r3); UPD(0x0C09EE8Cu, 2);  /* 0C09EE8A mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C09EE8C mov Rm,Rn */
	IF(0x0C09EE8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C09EE8E rts */
L_0C09EEA0: BLKS(0x0C09EEA0u);
	r5 = R32(r3 + 0x34u); UPD(0x0C09EEA2u, 1);  /* 0C09EEA0 mov.l @(disp,Rm),Rn */
	r1 = 0x808u; UPD(0x0C09EEA4u, 1);  /* 0C09EEA2 mov.w @(disp,pc),Rn */
	r5 += r1;  /* 0C09EEA4 add Rm,Rn */
	W32(r3 + 0x34u, r5); UPD(0x0C09EEA8u, 2);  /* 0C09EEA6 mov.l Rm,@(disp,Rn) */
	r0 = 0xDFFFu; UPD(0x0C09EEAAu, 1);  /* 0C09EEA8 mov.l @(disp,pc),Rn */
	r3 = r5 & 0xFFFF;  /* 0C09EEAA extu.w Rm,Rn */
	T = r3 > r0;  /* 0C09EEAC cmp/hi Rm,Rn */
	UPD(0x0C09EEAEu, 2);
L_0C09EEAE: BLKS(0x0C09EEAEu);
	if (!T) { UPD(0x0C09EE78u, 3); goto L_0C09EE78; }  /* 0C09EEAE bf */
L_0C09EEB0: BLKS(0x0C09EEB0u);
	r0 = r7;  /* 0C09EEB0 mov Rm,Rn */
	r0 += 0x1u;  /* 0C09EEB2 add #imm,Rn */
	{ W8(r6, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C09EE78u, 5); goto L_0C09EE78; }  /* 0C09EEB4 bra */
L_0C09EEC0: BLKS(0x0C09EEC0u);
	if (!T) { UPD(0x0C09EE78u, 3); goto L_0C09EE78; }  /* 0C09EEC0 bf */
L_0C09EEC2: BLKS(0x0C09EEC2u);
	r6 = R32(r3 + 0x34u); UPD(0x0C09EEC4u, 1);  /* 0C09EEC2 mov.l @(disp,Rm),Rn */
	r7 = 0xFFFFFBFCu; UPD(0x0C09EEC6u, 1);  /* 0C09EEC4 mov.w @(disp,pc),Rn */
	r1 = 0xFF00u; UPD(0x0C09EEC8u, 1);  /* 0C09EEC6 mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C09EEC8 add Rm,Rn */
	r1 &= r6;  /* 0C09EECA and Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C09EECC tst Rm,Rn */
	{ u32 c_ = !T; W32(r3 + 0x34u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09EE78u, 6); goto L_0C09EE78; } UPD(0x0C09EED2u, 1); goto L_0C09EED2; }  /* 0C09EECE bf/s */
L_0C09EED2: BLKS(0x0C09EED2u);
	{ W32(r3, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C09EE78u, 3); goto L_0C09EE78; }  /* 0C09EED2 bra */
L_0C09EEE0: BLKS(0x0C09EEE0u);
	r0 = 0x98u; UPD(0x0C09EEE2u, 1);  /* 0C09EEE0 mov.w @(disp,pc),Rn */
	IF(0x0C09EEE2u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09EEE4u, 1);  /* 0C09EEE2 mov.b @(r0,Rm),Rn */
	r1 += 0x1u;  /* 0C09EEE4 add #imm,Rn */
	r2 = r1 & 0xFF;  /* 0C09EEE6 extu.b Rm,Rn */
	IF(0x0C09EEE8u); W8(r0 + r3, r1); UPD(0x0C09EEEAu, 3);  /* 0C09EEE8 mov.b Rm,@(r0,Rn) */
	{ T = r2 == r5; /* slot cmp/eq Rm,Rn */ UPD(0x0C09EEAEu, 3); goto L_0C09EEAE; }  /* 0C09EEEA bra */
}

/* FUN_0c09ef10 */
void f_0C09EF10(sh3_t *c)
{
	LOCALS;
L_0C09EF10: BLKS(0x0C09EF10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09EF12u, 1);  /* 0C09EF10 mov.l Rm,@-Rn */
	r4 = 0x3Fu;  /* 0C09EF12 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09EF16u, 2);  /* 0C09EF14 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09EF18u, 1);  /* 0C09EF16 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09EF1Au, 1);  /* 0C09EF18 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09EF1Cu, 1);  /* 0C09EF1A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09EF1Eu, 1);  /* 0C09EF1C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09EF20u, 1);  /* 0C09EF1E mov.l Rm,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C09EF22u, 1);  /* 0C09EF20 mov.l @(disp,pc),Rn */
	IF(0x0C09EF22u); r15 -= 4; W32(r15, PR); UPD(0x0C09EF24u, 1);  /* 0C09EF22 sts.l pr,@-Rn */
	r5 = 0x8000u; UPD(0x0C09EF26u, 1);  /* 0C09EF24 mov.l @(disp,pc),Rn */
	IF(0x0C09EF26u); { u32 t_ = r8; PR = 0x0C09EF2Au; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C09EF2Au); }  /* 0C09EF26 jsr @Rn */
L_0C09EF2A: BLKS(0x0C09EF2Au);
	T = (r0 & r0) == 0;  /* 0C09EF2A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09EF50u, 4); goto L_0C09EF50; } UPD(0x0C09EF30u, 1); goto L_0C09EF30; }  /* 0C09EF2C bf/s */
L_0C09EF30: BLKS(0x0C09EF30u);
	r15 = r14;  /* 0C09EF30 mov Rm,Rn */
	IF(0x0C09EF32u); PR = R32(r15); r15 += 4; UPD(0x0C09EF34u, 2);  /* 0C09EF32 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EF36u, 1);  /* 0C09EF34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09EF38u, 1);  /* 0C09EF36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EF3Au, 1);  /* 0C09EF38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EF3Cu, 1);  /* 0C09EF3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EF3Eu, 1);  /* 0C09EF3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EF40u, 1);  /* 0C09EF3E mov.l @Rm+,Rn */
	IF(0x0C09EF40u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EF40 rts */
L_0C09EF50: BLKS(0x0C09EF50u);
	r8 = 0xC0606C0u; UPD(0x0C09EF52u, 1);  /* 0C09EF50 mov.l @(disp,pc),Rn */
	r13 = 0xC2755BCu; UPD(0x0C09EF54u, 1);  /* 0C09EF52 mov.l @(disp,pc),Rn */
	IF(0x0C09EF54u); { u32 t_ = r8; PR = 0x0C09EF58u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C09EF58u); }  /* 0C09EF54 jsr @Rn */
L_0C09EF58: BLKS(0x0C09EF58u);
	T = (r0 & r0) == 0;  /* 0C09EF58 tst Rm,Rn */
	if (T) { UPD(0x0C09EF30u, 4); goto L_0C09EF30; }  /* 0C09EF5A bt */
L_0C09EF5C: BLKS(0x0C09EF5Cu);
	r11 = 0x0u;  /* 0C09EF5C mov #imm,Rn */
	r9 = 0xC1D81ACu; UPD(0x0C09EF60u, 2);  /* 0C09EF5E mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C09EF60 mov #imm,Rn */
	r12 = r13;  /* 0C09EF62 mov Rm,Rn */
	UPD(0x0C09EF64u, 2);
L_0C09EF64: BLKS(0x0C09EF64u);
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r4 = v_; } UPD(0x0C09EF66u, 1);  /* 0C09EF64 mov.w @Rm+,Rn */
	r6 = 0x3Fu;  /* 0C09EF66 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C09EF6Au, 2);  /* 0C09EF68 mov.w @(disp,pc),Rn */
	IF(0x0C09EF6Au); MACL = r4 * r8;  /* 0C09EF6A mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09EF6Eu, 3);  /* 0C09EF6C mov.l @(disp,pc),Rn */
	r0 = 0xC0000000u; UPD(0x0C09EF70u, 1);  /* 0C09EF6E mov.l @(disp,pc),Rn */
	IF(0x0C09EF70u); r8 = MACL;  /* 0C09EF70 sts macl,Rn */
	r8 += r2;  /* 0C09EF72 add Rm,Rn */
	W32(r8, r0); UPD(0x0C09EF76u, 3);  /* 0C09EF74 mov.l Rm,@Rn */
	r7 = (u32)(s32)(s16)R16(r13); UPD(0x0C09EF78u, 1);  /* 0C09EF76 mov.w @Rm,Rn */
	r8 += 0x7Cu;  /* 0C09EF78 add #imm,Rn */
	W16(r8, r7); UPD(0x0C09EF7Cu, 2);  /* 0C09EF7A mov.w Rm,@Rn */
	r8 += 0xFFFFFF84u;  /* 0C09EF7C add #imm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C09EF80u, 2);  /* 0C09EF7E mov.l Rm,@(disp,Rn) */
	r3 = 0xC0A02D0u; UPD(0x0C09EF82u, 1);  /* 0C09EF80 mov.l @(disp,pc),Rn */
	r5 = R32(r9); UPD(0x0C09EF84u, 1);  /* 0C09EF82 mov.l @Rm,Rn */
	W32(r8 + 0xCu, r10); UPD(0x0C09EF86u, 1);  /* 0C09EF84 mov.l Rm,@(disp,Rn) */
	IF(0x0C09EF86u); { u32 t_ = r3; PR = 0x0C09EF8Au; W32(r8 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C09EF8Au); }  /* 0C09EF86 jsr @Rn */
L_0C09EF8A: BLKS(0x0C09EF8Au);
	r2 = R32(r9 + 0x4u); UPD(0x0C09EF8Cu, 1);  /* 0C09EF8A mov.l @(disp,Rm),Rn */
	r5 = 0x17u;  /* 0C09EF8C mov #imm,Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C09EF90u, 2);  /* 0C09EF8E mov.l Rm,@(disp,Rn) */
	r7 = R32(r9 + 0x8u); UPD(0x0C09EF92u, 1);  /* 0C09EF90 mov.l @(disp,Rm),Rn */
	r0 = 0xC3929E0u; UPD(0x0C09EF94u, 1);  /* 0C09EF92 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r7); UPD(0x0C09EF96u, 1);  /* 0C09EF94 mov.l Rm,@(disp,Rn) */
	r6 = R32(r0); UPD(0x0C09EF98u, 1);  /* 0C09EF96 mov.l @Rm,Rn */
	r0 = 0xA9u; UPD(0x0C09EF9Au, 1);  /* 0C09EF98 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C09EF9A add Rm,Rn */
	IF(0x0C09EF9Cu); W8(r0 + r8, r5); UPD(0x0C09EF9Eu, 2);  /* 0C09EF9C mov.b Rm,@(r0,Rn) */
	W32(r8 + 0x28u, r6); UPD(0x0C09EFA0u, 1);  /* 0C09EF9E mov.l Rm,@(disp,Rn) */
	r0 = r11;  /* 0C09EFA0 mov Rm,Rn */
	r4 = R32(r9 + 0xCu); UPD(0x0C09EFA4u, 2);  /* 0C09EFA2 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C09EFA4 add #imm,Rn */
	W32(r8 + 0x34u, r4); UPD(0x0C09EFA8u, 2);  /* 0C09EFA6 mov.l Rm,@(disp,Rn) */
	r11 = (u32)(s32)(s16)r0;  /* 0C09EFA8 exts.w Rm,Rn */
	r8 += 0x50u;  /* 0C09EFAA add #imm,Rn */
	W32(r8, r10); UPD(0x0C09EFAEu, 3);  /* 0C09EFAC mov.l Rm,@Rn */
	r9 += 0x10u;  /* 0C09EFAE add #imm,Rn */
	r3 = 0x808080u; UPD(0x0C09EFB2u, 2);  /* 0C09EFB0 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C09EFB2 add #imm,Rn */
	W32(r8 + 0x38u, r3); UPD(0x0C09EFB6u, 2);  /* 0C09EFB4 mov.l Rm,@(disp,Rn) */
	IF(0x0C09EFB6u); T = (s32)r11 > 0;  /* 0C09EFB6 cmp/pl Rn */
	r2 = 0x98u; UPD(0x0C09EFBAu, 2);  /* 0C09EFB8 mov.w @(disp,pc),Rn */
	r8 += r2;  /* 0C09EFBA add Rm,Rn */
	{ u32 c_ = !T; W8(r8, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09EF64u, 4); goto L_0C09EF64; } UPD(0x0C09EFC0u, 1); goto L_0C09EFC0; }  /* 0C09EFBC bf/s */
L_0C09EFC0: BLKS(0x0C09EFC0u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C09EF30u, 3); goto L_0C09EF30; }  /* 0C09EFC0 bra */
}

void f_0C09F000(sh3_t *c)
{
	LOCALS;
L_0C09F000: BLKS(0x0C09F000u);
	r0 = 0xB4u; UPD(0x0C09F002u, 1);  /* 0C09F000 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C09F002 exts.w Rm,Rn */
	IF(0x0C09F004u); MACL = r4 * r0;  /* 0C09F004 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09F008u, 4);  /* 0C09F006 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C09F00Au, 1);  /* 0C09F008 mov.l @(disp,pc),Rn */
	IF(0x0C09F00Au); r3 = MACL;  /* 0C09F00A sts macl,Rn */
	r3 += r0;  /* 0C09F00C add Rm,Rn */
	r7 = R32(r3 + 0x8u); UPD(0x0C09F010u, 3);  /* 0C09F00E mov.l @(disp,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C09F010 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09F0C0u, 4); goto L_0C09F0C0; } goto L_0C09F016; }  /* 0C09F012 bt/s */
L_0C09F016: BLKS(0x0C09F016u);
	r0 = r7;  /* 0C09F016 mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C09F018 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09F030u, 6); goto L_0C09F030; }  /* 0C09F01A bt */
L_0C09F01C: BLKS(0x0C09F01Cu);
	r15 = r14;  /* 0C09F01C mov Rm,Rn */
	IF(0x0C09F01Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C09F01E rts */
L_0C09F030: BLKS(0x0C09F030u);
	r5 = 0x9Fu; UPD(0x0C09F032u, 1);  /* 0C09F030 mov.w @(disp,pc),Rn */
	r5 += r3;  /* 0C09F032 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C09F036u, 2);  /* 0C09F034 mov.b @Rm,Rn */
	r0 = r6 & 0xFF;  /* 0C09F036 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C09F038 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09F0A0u, 5); goto L_0C09F0A0; }  /* 0C09F03A bt */
L_0C09F03C: BLKS(0x0C09F03Cu);
	T = (s32)r0 > (s32)r7;  /* 0C09F03C cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C09F080u, 4); goto L_0C09F080; } goto L_0C09F042; }  /* 0C09F03E bt/s */
L_0C09F042: BLKS(0x0C09F042u);
	T = (r0 & r0) == 0;  /* 0C09F042 tst Rm,Rn */
	if (T) { UPD(0x0C09F060u, 5); goto L_0C09F060; }  /* 0C09F044 bt */
L_0C09F046: BLKS(0x0C09F046u);
	IF(0x0C09F046u); ;  /* 0C09F046 nop */
	UPD(0x0C09F048u, 1);
L_0C09F048: BLKS(0x0C09F048u);
	r5 = 0xB4u; UPD(0x0C09F04Au, 1);  /* 0C09F048 mov.w @(disp,pc),Rn */
	IF(0x0C09F04Au); MACL = r4 * r5;  /* 0C09F04A mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09F04Eu, 3);  /* 0C09F04C mov.l @(disp,pc),Rn */
	IF(0x0C09F04Eu); r4 = MACL;  /* 0C09F04E sts macl,Rn */
	r3 = 0xC3929E0u; UPD(0x0C09F052u, 2);  /* 0C09F050 mov.l @(disp,pc),Rn */
	r4 += r6;  /* 0C09F052 add Rm,Rn */
	r0 = R32(r3); UPD(0x0C09F056u, 2);  /* 0C09F054 mov.l @Rm,Rn */
	r7 = R32(r4 + 0x30u); UPD(0x0C09F058u, 1);  /* 0C09F056 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C09F058 add Rm,Rn */
	{ W32(r4 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09F01Cu, 4); goto L_0C09F01C; }  /* 0C09F05A bra */
L_0C09F060: BLKS(0x0C09F060u);
	r0 = R32(r3 + 0x34u); UPD(0x0C09F062u, 1);  /* 0C09F060 mov.l @(disp,Rm),Rn */
	r1 = 0x606u; UPD(0x0C09F064u, 1);  /* 0C09F062 mov.w @(disp,pc),Rn */
	r0 += r1;  /* 0C09F064 add Rm,Rn */
	W32(r3 + 0x34u, r0); UPD(0x0C09F068u, 2);  /* 0C09F066 mov.l Rm,@(disp,Rn) */
	r2 = r0 & 0xFF;  /* 0C09F068 extu.b Rm,Rn */
	r3 = 0xBFu; UPD(0x0C09F06Cu, 2);  /* 0C09F06A mov.w @(disp,pc),Rn */
	T = r2 > r3;  /* 0C09F06C cmp/hi Rm,Rn */
	IF(0x0C09F06Eu); ;  /* 0C09F06E nop */
	UPD(0x0C09F070u, 2);
L_0C09F070: BLKS(0x0C09F070u);
	if (!T) { UPD(0x0C09F048u, 3); goto L_0C09F048; }  /* 0C09F070 bf */
L_0C09F072: BLKS(0x0C09F072u);
	r3 = r6;  /* 0C09F072 mov Rm,Rn */
	r3 += 0x1u;  /* 0C09F074 add #imm,Rn */
	{ W8(r5, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C09F048u, 5); goto L_0C09F048; }  /* 0C09F076 bra */
L_0C09F080: BLKS(0x0C09F080u);
	if (!T) { UPD(0x0C09F048u, 3); goto L_0C09F048; }  /* 0C09F080 bf */
L_0C09F082: BLKS(0x0C09F082u);
	r7 = R32(r3 + 0x34u); UPD(0x0C09F084u, 1);  /* 0C09F082 mov.l @(disp,Rm),Rn */
	r6 = 0x5u;  /* 0C09F084 mov #imm,Rn */
	r5 = r7 & 0xFF;  /* 0C09F086 extu.b Rm,Rn */
	T = r5 > r6;  /* 0C09F088 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09F090u, 6); goto L_0C09F090; }  /* 0C09F08A bt */
L_0C09F08C: BLKS(0x0C09F08Cu);
	r2 = 0x0u;  /* 0C09F08C mov #imm,Rn */
	W32(r3, r2); UPD(0x0C09F090u, 2);  /* 0C09F08E mov.l Rm,@Rn */
L_0C09F090: BLKS(0x0C09F090u);
	r1 = 0xFFFFF9FAu; UPD(0x0C09F092u, 1);  /* 0C09F090 mov.w @(disp,pc),Rn */
	r7 += r1;  /* 0C09F092 add Rm,Rn */
	UPD(0x0C09F094u, 1);
L_0C09F094: BLKS(0x0C09F094u);
	{ W32(r3 + 0x34u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09F048u, 3); goto L_0C09F048; }  /* 0C09F094 bra */
L_0C09F0A0: BLKS(0x0C09F0A0u);
	r0 = 0x99u; UPD(0x0C09F0A2u, 1);  /* 0C09F0A0 mov.w @(disp,pc),Rn */
	IF(0x0C09F0A2u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09F0A4u, 1);  /* 0C09F0A2 mov.b @(r0,Rm),Rn */
	r1 += 0x1u;  /* 0C09F0A4 add #imm,Rn */
	IF(0x0C09F0A6u); W8(r0 + r3, r1); UPD(0x0C09F0A8u, 2);  /* 0C09F0A6 mov.b Rm,@(r0,Rn) */
	r3 += 0x50u;  /* 0C09F0A8 add #imm,Rn */
	r7 = R32(r3); UPD(0x0C09F0ACu, 2);  /* 0C09F0AA mov.l @Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C09F0AC extu.b Rm,Rn */
	{ T = r0 == r7; /* slot cmp/eq Rm,Rn */ UPD(0x0C09F070u, 4); goto L_0C09F070; }  /* 0C09F0AE bra */
L_0C09F0C0: BLKS(0x0C09F0C0u);
	r5 = 0x9Fu; UPD(0x0C09F0C2u, 1);  /* 0C09F0C0 mov.w @(disp,pc),Rn */
	r5 += r3;  /* 0C09F0C2 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C09F0C6u, 2);  /* 0C09F0C4 mov.b @Rm,Rn */
	r0 = r6 & 0xFF;  /* 0C09F0C6 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C09F0C8 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09F0A0u, 5); goto L_0C09F0A0; } goto L_0C09F0CE; }  /* 0C09F0CA bt/s */
L_0C09F0CE: BLKS(0x0C09F0CEu);
	T = (s32)r0 > (s32)r2;  /* 0C09F0CE cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C09F100u, 5); goto L_0C09F100; } goto L_0C09F0D4; }  /* 0C09F0D0 bt/s */
L_0C09F0D4: BLKS(0x0C09F0D4u);
	T = (r0 & r0) == 0;  /* 0C09F0D4 tst Rm,Rn */
	if (!T) { UPD(0x0C09F048u, 5); goto L_0C09F048; }  /* 0C09F0D6 bf */
L_0C09F0D8: BLKS(0x0C09F0D8u);
	r7 = R32(r3 + 0x34u); UPD(0x0C09F0DAu, 1);  /* 0C09F0D8 mov.l @(disp,Rm),Rn */
	r0 = 0xF7u; UPD(0x0C09F0DCu, 1);  /* 0C09F0DA mov.w @(disp,pc),Rn */
	r1 = r7 & 0xFF;  /* 0C09F0DC extu.b Rm,Rn */
	T = r1 > r0;  /* 0C09F0DE cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C09F0F0u, 5); goto L_0C09F0F0; }  /* 0C09F0E0 bf */
L_0C09F0E2: BLKS(0x0C09F0E2u);
	r2 = 0xFFFFu; UPD(0x0C09F0E4u, 1);  /* 0C09F0E2 mov.l @(disp,pc),Rn */
	r7 |= r2;  /* 0C09F0E4 or Rm,Rn */
	{ W32(r3 + 0x34u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09F072u, 4); goto L_0C09F072; }  /* 0C09F0E6 bra */
L_0C09F0F0: BLKS(0x0C09F0F0u);
	r1 = 0x808u; UPD(0x0C09F0F2u, 1);  /* 0C09F0F0 mov.w @(disp,pc),Rn */
	{ r7 += r1; /* slot add Rm,Rn */ UPD(0x0C09F094u, 3); goto L_0C09F094; }  /* 0C09F0F2 bra */
L_0C09F100: BLKS(0x0C09F100u);
	if (!T) { UPD(0x0C09F048u, 3); goto L_0C09F048; }  /* 0C09F100 bf */
L_0C09F102: BLKS(0x0C09F102u);
	r6 = R32(r3 + 0x34u); UPD(0x0C09F104u, 1);  /* 0C09F102 mov.l @(disp,Rm),Rn */
	r5 = 0x7u;  /* 0C09F104 mov #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C09F106 extu.b Rm,Rn */
	T = r0 > r5;  /* 0C09F108 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09F10Eu, 6); goto L_0C09F10E; }  /* 0C09F10A bt */
L_0C09F10C: BLKS(0x0C09F10Cu);
	W32(r3, r7); UPD(0x0C09F10Eu, 1);  /* 0C09F10C mov.l Rm,@Rn */
L_0C09F10E: BLKS(0x0C09F10Eu);
	r7 = 0xFFFFF7F8u; UPD(0x0C09F110u, 1);  /* 0C09F10E mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C09F110 add Rm,Rn */
	{ W32(r3 + 0x34u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09F048u, 4); goto L_0C09F048; }  /* 0C09F112 bra */
}

void f_0C09F140(sh3_t *c)
{
	LOCALS;
L_0C09F140: BLKS(0x0C09F140u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09F142u, 1);  /* 0C09F140 mov.l Rm,@-Rn */
	r4 = 0x3Du;  /* 0C09F142 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09F146u, 2);  /* 0C09F144 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09F148u, 1);  /* 0C09F146 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09F14Au, 1);  /* 0C09F148 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09F14Cu, 1);  /* 0C09F14A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09F14Eu, 1);  /* 0C09F14C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09F150u, 1);  /* 0C09F14E mov.l Rm,@-Rn */
	r0 = 0xC2859A0u; UPD(0x0C09F152u, 1);  /* 0C09F150 mov.l @(disp,pc),Rn */
	IF(0x0C09F152u); r15 -= 4; W32(r15, PR); UPD(0x0C09F154u, 1);  /* 0C09F152 sts.l pr,@-Rn */
	r2 = R32(r0); UPD(0x0C09F156u, 1);  /* 0C09F154 mov.l @Rm,Rn */
	r14 = r15;  /* 0C09F156 mov Rm,Rn */
	r8 = 0xC057A50u; UPD(0x0C09F15Au, 2);  /* 0C09F158 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r12 = v_; } UPD(0x0C09F15Cu, 1);  /* 0C09F15A mov.w @Rm+,Rn */
	r5 = 0x8000u; UPD(0x0C09F15Eu, 1);  /* 0C09F15C mov.l @(disp,pc),Rn */
	IF(0x0C09F15Eu); { u32 t_ = r8; PR = 0x0C09F162u; W32(r0, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C09F162u); }  /* 0C09F15E jsr @Rn */
L_0C09F162: BLKS(0x0C09F162u);
	T = (r0 & r0) == 0;  /* 0C09F162 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09F180u, 4); goto L_0C09F180; } UPD(0x0C09F168u, 1); goto L_0C09F168; }  /* 0C09F164 bf/s */
L_0C09F168: BLKS(0x0C09F168u);
	r15 = r14;  /* 0C09F168 mov Rm,Rn */
	IF(0x0C09F16Au); PR = R32(r15); r15 += 4; UPD(0x0C09F16Cu, 2);  /* 0C09F16A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09F16Eu, 1);  /* 0C09F16C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09F170u, 1);  /* 0C09F16E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09F172u, 1);  /* 0C09F170 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09F174u, 1);  /* 0C09F172 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09F176u, 1);  /* 0C09F174 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09F178u, 1);  /* 0C09F176 mov.l @Rm+,Rn */
	IF(0x0C09F178u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09F178 rts */
L_0C09F180: BLKS(0x0C09F180u);
	r8 = 0xC0606C0u; UPD(0x0C09F182u, 1);  /* 0C09F180 mov.l @(disp,pc),Rn */
	r13 = 0xC2755BCu; UPD(0x0C09F184u, 1);  /* 0C09F182 mov.l @(disp,pc),Rn */
	IF(0x0C09F184u); { u32 t_ = r8; PR = 0x0C09F188u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C09F188u); }  /* 0C09F184 jsr @Rn */
L_0C09F188: BLKS(0x0C09F188u);
	T = (r0 & r0) == 0;  /* 0C09F188 tst Rm,Rn */
	if (T) { UPD(0x0C09F168u, 4); goto L_0C09F168; }  /* 0C09F18A bt */
L_0C09F18C: BLKS(0x0C09F18Cu);
	r10 = 0x0u;  /* 0C09F18C mov #imm,Rn */
	r9 = 0xC1D8258u; UPD(0x0C09F190u, 2);  /* 0C09F18E mov.l @(disp,pc),Rn */
	r11 = r13;  /* 0C09F190 mov Rm,Rn */
	IF(0x0C09F192u); ;  /* 0C09F192 nop */
	UPD(0x0C09F194u, 2);
L_0C09F194: BLKS(0x0C09F194u);
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r4 = v_; } UPD(0x0C09F196u, 1);  /* 0C09F194 mov.w @Rm+,Rn */
	r0 = 0x3Du;  /* 0C09F196 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C09F19Au, 2);  /* 0C09F198 mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C09F19A mov #imm,Rn */
	IF(0x0C09F19Cu); MACL = r4 * r8;  /* 0C09F19C mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C09F1A0u, 4);  /* 0C09F19E mov.l @(disp,pc),Rn */
	r2 = 0xC0000000u; UPD(0x0C09F1A2u, 1);  /* 0C09F1A0 mov.l @(disp,pc),Rn */
	IF(0x0C09F1A2u); r8 = MACL;  /* 0C09F1A2 sts macl,Rn */
	r8 += r5;  /* 0C09F1A4 add Rm,Rn */
	W32(r8, r2); UPD(0x0C09F1A8u, 3);  /* 0C09F1A6 mov.l Rm,@Rn */
	r3 = (u32)(s32)(s16)R16(r13); UPD(0x0C09F1AAu, 1);  /* 0C09F1A8 mov.w @Rm,Rn */
	r8 += 0x7Cu;  /* 0C09F1AA add #imm,Rn */
	W16(r8, r3); UPD(0x0C09F1AEu, 2);  /* 0C09F1AC mov.w Rm,@Rn */
	r8 += 0xFFFFFF84u;  /* 0C09F1AE add #imm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C09F1B2u, 2);  /* 0C09F1B0 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A02D0u; UPD(0x0C09F1B4u, 1);  /* 0C09F1B2 mov.l @(disp,pc),Rn */
	r7 = R32(r9); UPD(0x0C09F1B6u, 1);  /* 0C09F1B4 mov.l @Rm,Rn */
	W32(r8 + 0xCu, r6); UPD(0x0C09F1B8u, 1);  /* 0C09F1B6 mov.l Rm,@(disp,Rn) */
	IF(0x0C09F1B8u); { u32 t_ = r5; PR = 0x0C09F1BCu; W32(r8 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C09F1BCu); }  /* 0C09F1B8 jsr @Rn */
L_0C09F1BC: BLKS(0x0C09F1BCu);
	r4 = R32(r9 + 0x4u); UPD(0x0C09F1BEu, 1);  /* 0C09F1BC mov.l @(disp,Rm),Rn */
	r7 = 0x17u;  /* 0C09F1BE mov #imm,Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C09F1C2u, 2);  /* 0C09F1C0 mov.l Rm,@(disp,Rn) */
	r3 = R32(r9 + 0x8u); UPD(0x0C09F1C4u, 1);  /* 0C09F1C2 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C09F1C4 mov Rm,Rn */
	W32(r8 + 0x30u, r3); UPD(0x0C09F1C8u, 2);  /* 0C09F1C6 mov.l Rm,@(disp,Rn) */
	r4 += 0x1u;  /* 0C09F1C8 add #imm,Rn */
	r2 = 0xC3929E0u; UPD(0x0C09F1CCu, 2);  /* 0C09F1CA mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C09F1CC exts.w Rm,Rn */
	r0 = R32(r2); UPD(0x0C09F1D0u, 2);  /* 0C09F1CE mov.l @Rm,Rn */
	r0 += r3;  /* 0C09F1D0 add Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C09F1D4u, 2);  /* 0C09F1D2 mov.l Rm,@(disp,Rn) */
	r3 = 0x1u;  /* 0C09F1D4 mov #imm,Rn */
	r0 = 0xA9u; UPD(0x0C09F1D8u, 2);  /* 0C09F1D6 mov.w @(disp,pc),Rn */
	T = (s32)r10 > (s32)r3;  /* 0C09F1D8 cmp/gt Rm,Rn */
	IF(0x0C09F1DAu); W8(r0 + r8, r7); UPD(0x0C09F1DCu, 2);  /* 0C09F1DA mov.b Rm,@(r0,Rn) */
	r5 = 0x808080u; UPD(0x0C09F1DEu, 1);  /* 0C09F1DC mov.l @(disp,pc),Rn */
	r6 = R32(r9 + 0xCu); UPD(0x0C09F1E0u, 1);  /* 0C09F1DE mov.l @(disp,Rm),Rn */
	W32(r8 + 0x38u, r5); UPD(0x0C09F1E2u, 1);  /* 0C09F1E0 mov.l Rm,@(disp,Rn) */
	r9 += 0x10u;  /* 0C09F1E2 add #imm,Rn */
	W32(r8 + 0x34u, r6); UPD(0x0C09F1E6u, 2);  /* 0C09F1E4 mov.l Rm,@(disp,Rn) */
	r8 += 0x50u;  /* 0C09F1E6 add #imm,Rn */
	{ u32 c_ = !T; W32(r8, r12); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09F194u, 4); goto L_0C09F194; } UPD(0x0C09F1ECu, 1); goto L_0C09F1EC; }  /* 0C09F1E8 bf/s */
L_0C09F1EC: BLKS(0x0C09F1ECu);
	r9 = 0xC0AFC10u; UPD(0x0C09F1EEu, 1);  /* 0C09F1EC mov.l @(disp,pc),Rn */
	r4 = 0x98u; UPD(0x0C09F1F0u, 1);  /* 0C09F1EE mov.w @(disp,pc),Rn */
	IF(0x0C09F1F0u); { u32 t_ = r9; PR = 0x0C09F1F4u; IF(0x0C09F1F2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C09F1F4u); }  /* 0C09F1F0 jsr @Rn */
L_0C09F1F4: BLKS(0x0C09F1F4u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C09F168u, 3); goto L_0C09F168; }  /* 0C09F1F4 bra */
}

void f_0C09F230(sh3_t *c)
{
	LOCALS;
L_0C09F230: BLKS(0x0C09F230u);
	r0 = 0xB4u; UPD(0x0C09F232u, 1);  /* 0C09F230 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C09F232 exts.w Rm,Rn */
	IF(0x0C09F234u); MACL = r4 * r0;  /* 0C09F234 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09F238u, 4);  /* 0C09F236 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C09F23Au, 1);  /* 0C09F238 mov.l @(disp,pc),Rn */
	IF(0x0C09F23Au); r3 = MACL;  /* 0C09F23A sts macl,Rn */
	r3 += r0;  /* 0C09F23C add Rm,Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C09F240u, 3);  /* 0C09F23E mov.l @(disp,Rm),Rn */
	T = r0 == 0x20u;  /* 0C09F240 cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09F2E0u, 4); goto L_0C09F2E0; } goto L_0C09F246; }  /* 0C09F242 bt/s */
L_0C09F246: BLKS(0x0C09F246u);
	r5 = 0x9Fu; UPD(0x0C09F248u, 2);  /* 0C09F246 mov.w @(disp,pc),Rn */
	r5 += r3;  /* 0C09F248 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C09F24Cu, 2);  /* 0C09F24A mov.b @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C09F24C extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C09F24E cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09F2D0u, 5); goto L_0C09F2D0; } goto L_0C09F254; }  /* 0C09F250 bt/s */
L_0C09F254: BLKS(0x0C09F254u);
	T = (s32)r0 > (s32)r2;  /* 0C09F254 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C09F2B0u, 5); goto L_0C09F2B0; } goto L_0C09F25A; }  /* 0C09F256 bt/s */
L_0C09F25A: BLKS(0x0C09F25Au);
	T = (r0 & r0) == 0;  /* 0C09F25A tst Rm,Rn */
	if (T) { UPD(0x0C09F280u, 5); goto L_0C09F280; }  /* 0C09F25C bt */
L_0C09F25E: BLKS(0x0C09F25Eu);
	IF(0x0C09F25Eu); ;  /* 0C09F25E nop */
	UPD(0x0C09F260u, 1);
L_0C09F260: BLKS(0x0C09F260u);
	r5 = 0xB4u; UPD(0x0C09F262u, 1);  /* 0C09F260 mov.w @(disp,pc),Rn */
	IF(0x0C09F262u); MACL = r4 * r5;  /* 0C09F262 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09F266u, 3);  /* 0C09F264 mov.l @(disp,pc),Rn */
	IF(0x0C09F266u); r4 = MACL;  /* 0C09F266 sts macl,Rn */
	r3 = 0xC3929E0u; UPD(0x0C09F26Au, 2);  /* 0C09F268 mov.l @(disp,pc),Rn */
	r4 += r6;  /* 0C09F26A add Rm,Rn */
	r0 = R32(r3); UPD(0x0C09F26Eu, 2);  /* 0C09F26C mov.l @Rm,Rn */
	r7 = R32(r4 + 0x30u); UPD(0x0C09F270u, 1);  /* 0C09F26E mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C09F270 add Rm,Rn */
	W32(r4 + 0x28u, r7); UPD(0x0C09F274u, 2);  /* 0C09F272 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C09F274 mov Rm,Rn */
	IF(0x0C09F276u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C09F276 rts */
L_0C09F280: BLKS(0x0C09F280u);
	r6 = R32(r3 + 0x34u); UPD(0x0C09F282u, 1);  /* 0C09F280 mov.l @(disp,Rm),Rn */
	r0 = 0xF7u; UPD(0x0C09F284u, 1);  /* 0C09F282 mov.w @(disp,pc),Rn */
	r1 = r6 & 0xFF;  /* 0C09F284 extu.b Rm,Rn */
	T = r1 > r0;  /* 0C09F286 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C09F2A0u, 5); goto L_0C09F2A0; }  /* 0C09F288 bf */
L_0C09F28A: BLKS(0x0C09F28Au);
	r0 = r7;  /* 0C09F28A mov Rm,Rn */
	r2 = 0xFFFFu; UPD(0x0C09F28Eu, 2);  /* 0C09F28C mov.l @(disp,pc),Rn */
	r6 |= r2;  /* 0C09F28E or Rm,Rn */
	W32(r3 + 0x34u, r6); UPD(0x0C09F292u, 2);  /* 0C09F290 mov.l Rm,@(disp,Rn) */
	r0 += 0x1u;  /* 0C09F292 add #imm,Rn */
	UPD(0x0C09F294u, 1);
L_0C09F294: BLKS(0x0C09F294u);
	{ W8(r5, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C09F260u, 3); goto L_0C09F260; }  /* 0C09F294 bra */
L_0C09F2A0: BLKS(0x0C09F2A0u);
	r5 = 0x808u; UPD(0x0C09F2A2u, 1);  /* 0C09F2A0 mov.w @(disp,pc),Rn */
	r6 += r5;  /* 0C09F2A2 add Rm,Rn */
	{ W32(r3 + 0x34u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09F260u, 4); goto L_0C09F260; }  /* 0C09F2A4 bra */
L_0C09F2B0: BLKS(0x0C09F2B0u);
	if (!T) { UPD(0x0C09F260u, 3); goto L_0C09F260; }  /* 0C09F2B0 bf */
L_0C09F2B2: BLKS(0x0C09F2B2u);
	r7 = R32(r3 + 0x34u); UPD(0x0C09F2B4u, 1);  /* 0C09F2B2 mov.l @(disp,Rm),Rn */
	r5 = 0x7u;  /* 0C09F2B4 mov #imm,Rn */
	r1 = r7 & 0xFF;  /* 0C09F2B6 extu.b Rm,Rn */
	T = r1 > r5;  /* 0C09F2B8 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09F2C0u, 6); goto L_0C09F2C0; }  /* 0C09F2BA bt */
L_0C09F2BC: BLKS(0x0C09F2BCu);
	r2 = 0x0u;  /* 0C09F2BC mov #imm,Rn */
	W32(r3, r2); UPD(0x0C09F2C0u, 2);  /* 0C09F2BE mov.l Rm,@Rn */
L_0C09F2C0: BLKS(0x0C09F2C0u);
	r1 = 0xFFFFF7F8u; UPD(0x0C09F2C2u, 1);  /* 0C09F2C0 mov.w @(disp,pc),Rn */
	r7 += r1;  /* 0C09F2C2 add Rm,Rn */
	UPD(0x0C09F2C4u, 1);
L_0C09F2C4: BLKS(0x0C09F2C4u);
	{ W32(r3 + 0x34u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09F260u, 3); goto L_0C09F260; }  /* 0C09F2C4 bra */
L_0C09F2D0: BLKS(0x0C09F2D0u);
	r6 = 0xC21CCECu; UPD(0x0C09F2D2u, 1);  /* 0C09F2D0 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C09F2D4u, 1);  /* 0C09F2D2 mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C09F2D4 tst Rm,Rn */
	if (T) { UPD(0x0C09F260u, 4); goto L_0C09F260; }  /* 0C09F2D6 bt */
L_0C09F2D8: BLKS(0x0C09F2D8u);
	r0 = r7;  /* 0C09F2D8 mov Rm,Rn */
	{ r0 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09F294u, 4); goto L_0C09F294; }  /* 0C09F2DA bra */
L_0C09F2E0: BLKS(0x0C09F2E0u);
	r6 = 0x9Fu; UPD(0x0C09F2E2u, 1);  /* 0C09F2E0 mov.w @(disp,pc),Rn */
	r6 += r3;  /* 0C09F2E2 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C09F2E6u, 2);  /* 0C09F2E4 mov.b @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C09F2E6 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C09F2E8 cmp/eq #imm,r0 */
	{ u32 c_ = T; r5 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09F330u, 5); goto L_0C09F330; } goto L_0C09F2EE; }  /* 0C09F2EA bt/s */
L_0C09F2EE: BLKS(0x0C09F2EEu);
	T = (s32)r0 > (s32)r5;  /* 0C09F2EE cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C09F310u, 5); goto L_0C09F310; } goto L_0C09F2F4; }  /* 0C09F2F0 bt/s */
L_0C09F2F4: BLKS(0x0C09F2F4u);
	T = (r0 & r0) == 0;  /* 0C09F2F4 tst Rm,Rn */
	if (!T) { UPD(0x0C09F260u, 5); goto L_0C09F260; }  /* 0C09F2F6 bf */
L_0C09F2F8: BLKS(0x0C09F2F8u);
	r5 = R32(r3 + 0x34u); UPD(0x0C09F2FAu, 1);  /* 0C09F2F8 mov.l @(disp,Rm),Rn */
	r1 = 0x606u; UPD(0x0C09F2FCu, 1);  /* 0C09F2FA mov.w @(disp,pc),Rn */
	r5 += r1;  /* 0C09F2FC add Rm,Rn */
	W32(r3 + 0x34u, r5); UPD(0x0C09F300u, 2);  /* 0C09F2FE mov.l Rm,@(disp,Rn) */
	r0 = r5 & 0xFF;  /* 0C09F300 extu.b Rm,Rn */
	r3 = 0xBFu; UPD(0x0C09F304u, 2);  /* 0C09F302 mov.w @(disp,pc),Rn */
	T = r0 > r3;  /* 0C09F304 cmp/hi Rm,Rn */
	UPD(0x0C09F306u, 1);
L_0C09F306: BLKS(0x0C09F306u);
	if (!T) { UPD(0x0C09F260u, 3); goto L_0C09F260; }  /* 0C09F306 bf */
L_0C09F308: BLKS(0x0C09F308u);
	r3 = r7;  /* 0C09F308 mov Rm,Rn */
	r3 += 0x1u;  /* 0C09F30A add #imm,Rn */
	{ W8(r6, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C09F260u, 5); goto L_0C09F260; }  /* 0C09F30C bra */
L_0C09F310: BLKS(0x0C09F310u);
	if (!T) { UPD(0x0C09F260u, 3); goto L_0C09F260; }  /* 0C09F310 bf */
L_0C09F312: BLKS(0x0C09F312u);
	r7 = R32(r3 + 0x34u); UPD(0x0C09F314u, 1);  /* 0C09F312 mov.l @(disp,Rm),Rn */
	r6 = 0x5u;  /* 0C09F314 mov #imm,Rn */
	r5 = r7 & 0xFF;  /* 0C09F316 extu.b Rm,Rn */
	T = r5 > r6;  /* 0C09F318 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09F320u, 6); goto L_0C09F320; }  /* 0C09F31A bt */
L_0C09F31C: BLKS(0x0C09F31Cu);
	r2 = 0x0u;  /* 0C09F31C mov #imm,Rn */
	W32(r3, r2); UPD(0x0C09F320u, 2);  /* 0C09F31E mov.l Rm,@Rn */
L_0C09F320: BLKS(0x0C09F320u);
	r1 = 0xFFFFF9FAu; UPD(0x0C09F322u, 1);  /* 0C09F320 mov.w @(disp,pc),Rn */
	{ r7 += r1; /* slot add Rm,Rn */ UPD(0x0C09F2C4u, 3); goto L_0C09F2C4; }  /* 0C09F322 bra */
L_0C09F330: BLKS(0x0C09F330u);
	r0 = 0x99u; UPD(0x0C09F332u, 1);  /* 0C09F330 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C09F332 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C09F336u, 2);  /* 0C09F334 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C09F336 add #imm,Rn */
	W8(r0, r2); UPD(0x0C09F33Au, 2);  /* 0C09F338 mov.b Rm,@Rn */
	r0 = r2 & 0xFF;  /* 0C09F33A extu.b Rm,Rn */
	{ T = r0 == 0x78u; /* slot cmp/eq #imm,r0 */ UPD(0x0C09F306u, 4); goto L_0C09F306; }  /* 0C09F33C bra */
}

void f_0C09F370(sh3_t *c)
{
	LOCALS;
L_0C09F370: BLKS(0x0C09F370u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09F372u, 1);  /* 0C09F370 mov.l Rm,@-Rn */
	r4 = 0x4Du;  /* 0C09F372 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09F376u, 2);  /* 0C09F374 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09F378u, 1);  /* 0C09F376 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09F37Au, 1);  /* 0C09F378 mov.l Rm,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C09F37Cu, 1);  /* 0C09F37A mov.l @(disp,pc),Rn */
	IF(0x0C09F37Cu); r15 -= 4; W32(r15, PR); UPD(0x0C09F37Eu, 1);  /* 0C09F37C sts.l pr,@-Rn */
	r5 = 0x8000u; UPD(0x0C09F380u, 1);  /* 0C09F37E mov.l @(disp,pc),Rn */
	IF(0x0C09F380u); { u32 t_ = r8; PR = 0x0C09F384u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C09F384u); }  /* 0C09F380 jsr @Rn */
L_0C09F384: BLKS(0x0C09F384u);
	T = (r0 & r0) == 0;  /* 0C09F384 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09F3A0u, 4); goto L_0C09F3A0; } UPD(0x0C09F38Au, 1); goto L_0C09F38A; }  /* 0C09F386 bf/s */
L_0C09F38A: BLKS(0x0C09F38Au);
	r15 = r14;  /* 0C09F38A mov Rm,Rn */
	IF(0x0C09F38Cu); PR = R32(r15); r15 += 4; UPD(0x0C09F38Eu, 2);  /* 0C09F38C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09F390u, 1);  /* 0C09F38E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09F392u, 1);  /* 0C09F390 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09F394u, 1);  /* 0C09F392 mov.l @Rm+,Rn */
	IF(0x0C09F394u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09F394 rts */
L_0C09F3A0: BLKS(0x0C09F3A0u);
	r8 = 0xC0606C0u; UPD(0x0C09F3A2u, 1);  /* 0C09F3A0 mov.l @(disp,pc),Rn */
	IF(0x0C09F3A2u); { u32 t_ = r8; PR = 0x0C09F3A6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C09F3A6u); }  /* 0C09F3A2 jsr @Rn */
L_0C09F3A6: BLKS(0x0C09F3A6u);
	T = (r0 & r0) == 0;  /* 0C09F3A6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09F38Au, 4); goto L_0C09F38A; } goto L_0C09F3AC; }  /* 0C09F3A8 bt/s */
L_0C09F3AC: BLKS(0x0C09F3ACu);
	r4 = 0xC2755BCu; UPD(0x0C09F3AEu, 2);  /* 0C09F3AC mov.l @(disp,pc),Rn */
	r5 = 0x4Du;  /* 0C09F3AE mov #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r4); UPD(0x0C09F3B2u, 2);  /* 0C09F3B0 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C09F3B4u, 1);  /* 0C09F3B2 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r6;  /* 0C09F3B4 exts.w Rm,Rn */
	IF(0x0C09F3B6u); MACL = r4 * r8;  /* 0C09F3B6 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C09F3BAu, 4);  /* 0C09F3B8 mov.l @(disp,pc),Rn */
	r7 = 0xC0000000u; UPD(0x0C09F3BCu, 1);  /* 0C09F3BA mov.l @(disp,pc),Rn */
	IF(0x0C09F3BCu); r8 = MACL;  /* 0C09F3BC sts macl,Rn */
	r8 += r9;  /* 0C09F3BE add Rm,Rn */
	W32(r8, r7); UPD(0x0C09F3C2u, 3);  /* 0C09F3C0 mov.l Rm,@Rn */
	r9 = 0xC2859A0u; UPD(0x0C09F3C4u, 1);  /* 0C09F3C2 mov.l @(disp,pc),Rn */
	r8 += 0x7Cu;  /* 0C09F3C4 add #imm,Rn */
	r10 = R32(r9); UPD(0x0C09F3C8u, 2);  /* 0C09F3C6 mov.l @Rm,Rn */
	W16(r8, r6); UPD(0x0C09F3CAu, 1);  /* 0C09F3C8 mov.w Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r1 = v_; } UPD(0x0C09F3CCu, 1);  /* 0C09F3CA mov.w @Rm+,Rn */
	r8 += 0xFFFFFF84u;  /* 0C09F3CC add #imm,Rn */
	W32(r9, r10); UPD(0x0C09F3D0u, 2);  /* 0C09F3CE mov.l Rm,@Rn */
	r3 = 0xC0A02D0u; UPD(0x0C09F3D2u, 1);  /* 0C09F3D0 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C09F3D2 mov #imm,Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C09F3D6u, 2);  /* 0C09F3D4 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r1); UPD(0x0C09F3D8u, 1);  /* 0C09F3D6 mov.l Rm,@(disp,Rn) */
	IF(0x0C09F3D8u); { u32 t_ = r3; PR = 0x0C09F3DCu; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C09F3DCu); }  /* 0C09F3D8 jsr @Rn */
L_0C09F3DC: BLKS(0x0C09F3DCu);
	r0 = R32(r9); UPD(0x0C09F3DEu, 1);  /* 0C09F3DC mov.l @Rm,Rn */
	r5 = 0x17u;  /* 0C09F3DE mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r0); r0 += 2; r2 = v_; } UPD(0x0C09F3E2u, 2);  /* 0C09F3E0 mov.w @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r0); r0 += 2; r7 = v_; } UPD(0x0C09F3E4u, 1);  /* 0C09F3E2 mov.w @Rm+,Rn */
	IF(0x0C09F3E4u); r2 <<= 16;  /* 0C09F3E4 shll16 Rn */
	W32(r9, r0); UPD(0x0C09F3E8u, 2);  /* 0C09F3E6 mov.l Rm,@Rn */
	IF(0x0C09F3E8u); r7 <<= 16;  /* 0C09F3E8 shll16 Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C09F3ECu, 2);  /* 0C09F3EA mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r7); UPD(0x0C09F3EEu, 1);  /* 0C09F3EC mov.l Rm,@(disp,Rn) */
	r9 = 0xC3929E0u; UPD(0x0C09F3F0u, 1);  /* 0C09F3EE mov.l @(disp,pc),Rn */
	r6 = R32(r9); UPD(0x0C09F3F2u, 1);  /* 0C09F3F0 mov.l @Rm,Rn */
	r0 = 0xA9u; UPD(0x0C09F3F4u, 1);  /* 0C09F3F2 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C09F3F4 add Rm,Rn */
	IF(0x0C09F3F6u); W8(r0 + r8, r5); UPD(0x0C09F3F8u, 2);  /* 0C09F3F6 mov.b Rm,@(r0,Rn) */
	W32(r8 + 0x28u, r6); UPD(0x0C09F3FAu, 1);  /* 0C09F3F8 mov.l Rm,@(disp,Rn) */
	r4 = 0xC1D85ACu; UPD(0x0C09F3FCu, 1);  /* 0C09F3FA mov.l @(disp,pc),Rn */
	r2 = 0x808080u; UPD(0x0C09F3FEu, 1);  /* 0C09F3FC mov.l @(disp,pc),Rn */
	r3 = R32(r4 + 0xCu); UPD(0x0C09F400u, 1);  /* 0C09F3FE mov.l @(disp,Rm),Rn */
	r0 = 0xC21CCECu; UPD(0x0C09F402u, 1);  /* 0C09F400 mov.l @(disp,pc),Rn */
	W32(r8 + 0x34u, r3); UPD(0x0C09F404u, 1);  /* 0C09F402 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r2); UPD(0x0C09F406u, 1);  /* 0C09F404 mov.l Rm,@(disp,Rn) */
	W8(r0, r10); UPD(0x0C09F408u, 1);  /* 0C09F406 mov.b Rm,@Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C09F38Au, 3); goto L_0C09F38A; }  /* 0C09F408 bra */
}

void f_0C09F440(sh3_t *c)
{
	LOCALS;
L_0C09F440: BLKS(0x0C09F440u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09F442u, 1);  /* 0C09F440 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C09F444u, 1);  /* 0C09F442 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C09F444 exts.w Rm,Rn */
	IF(0x0C09F446u); MACL = r8 * r0;  /* 0C09F446 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09F44Au, 4);  /* 0C09F448 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C09F44Cu, 1);  /* 0C09F44A mov.l @(disp,pc),Rn */
	IF(0x0C09F44Cu); r3 = MACL;  /* 0C09F44C sts macl,Rn */
	r5 = 0x9Fu; UPD(0x0C09F450u, 2);  /* 0C09F44E mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C09F450 add Rm,Rn */
	IF(0x0C09F452u); r15 -= 4; W32(r15, PR); UPD(0x0C09F454u, 2);  /* 0C09F452 sts.l pr,@-Rn */
	r5 += r3;  /* 0C09F454 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C09F458u, 2);  /* 0C09F456 mov.b @Rm,Rn */
	r0 = r6 & 0xFF;  /* 0C09F458 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C09F45A cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09F4F0u, 5); goto L_0C09F4F0; } goto L_0C09F460; }  /* 0C09F45C bt/s */
L_0C09F460: BLKS(0x0C09F460u);
	r2 = 0x1u;  /* 0C09F460 mov #imm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C09F462 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C09F4D0u, 6); goto L_0C09F4D0; } goto L_0C09F468; }  /* 0C09F464 bt/s */
L_0C09F468: BLKS(0x0C09F468u);
	T = (r0 & r0) == 0;  /* 0C09F468 tst Rm,Rn */
	if (T) { UPD(0x0C09F490u, 5); goto L_0C09F490; }  /* 0C09F46A bt */
L_0C09F46C: BLKS(0x0C09F46Cu);
	r5 = 0xB4u; UPD(0x0C09F46Eu, 1);  /* 0C09F46C mov.w @(disp,pc),Rn */
	IF(0x0C09F46Eu); MACL = r8 * r5;  /* 0C09F46E mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C09F472u, 3);  /* 0C09F470 mov.l @(disp,pc),Rn */
	IF(0x0C09F472u); r8 = MACL;  /* 0C09F472 sts macl,Rn */
	r2 = 0xC3929E0u; UPD(0x0C09F476u, 2);  /* 0C09F474 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C09F476 add Rm,Rn */
	r7 = R32(r2); UPD(0x0C09F47Au, 2);  /* 0C09F478 mov.l @Rm,Rn */
	r3 = R32(r8 + 0x30u); UPD(0x0C09F47Cu, 1);  /* 0C09F47A mov.l @(disp,Rm),Rn */
	r3 += r7;  /* 0C09F47C add Rm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C09F480u, 2);  /* 0C09F47E mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C09F480 mov Rm,Rn */
	IF(0x0C09F482u); PR = R32(r15); r15 += 4; UPD(0x0C09F484u, 2);  /* 0C09F482 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09F486u, 1);  /* 0C09F484 mov.l @Rm+,Rn */
	IF(0x0C09F486u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09F486 rts */
L_0C09F490: BLKS(0x0C09F490u);
	r7 = R32(r3 + 0x34u); UPD(0x0C09F492u, 1);  /* 0C09F490 mov.l @(disp,Rm),Rn */
	r4 = 0xF7u; UPD(0x0C09F494u, 1);  /* 0C09F492 mov.w @(disp,pc),Rn */
	r1 = r7 & 0xFF;  /* 0C09F494 extu.b Rm,Rn */
	T = r1 > r4;  /* 0C09F496 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09F4B0u, 5); goto L_0C09F4B0; }  /* 0C09F498 bt */
L_0C09F49A: BLKS(0x0C09F49Au);
	r1 = 0x808u; UPD(0x0C09F49Cu, 1);  /* 0C09F49A mov.w @(disp,pc),Rn */
	r7 += r1;  /* 0C09F49C add Rm,Rn */
	UPD(0x0C09F49Eu, 1);
L_0C09F49E: BLKS(0x0C09F49Eu);
	{ W32(r3 + 0x34u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09F46Cu, 3); goto L_0C09F46C; }  /* 0C09F49E bra */
L_0C09F4B0: BLKS(0x0C09F4B0u);
	r0 = 0xFFFFu; UPD(0x0C09F4B2u, 1);  /* 0C09F4B0 mov.l @(disp,pc),Rn */
	r7 |= r0;  /* 0C09F4B2 or Rm,Rn */
	W32(r3 + 0x34u, r7); UPD(0x0C09F4B6u, 2);  /* 0C09F4B4 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AFC10u; UPD(0x0C09F4B8u, 1);  /* 0C09F4B6 mov.l @(disp,pc),Rn */
	r3 = r6;  /* 0C09F4B8 mov Rm,Rn */
	r3 += 0x1u;  /* 0C09F4BA add #imm,Rn */
	r4 = 0xBFu; UPD(0x0C09F4BEu, 3);  /* 0C09F4BC mov.w @(disp,pc),Rn */
	IF(0x0C09F4BEu); { u32 t_ = r0; PR = 0x0C09F4C2u; W8(r5, r3); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C09F4C2u); }  /* 0C09F4BE jsr @Rn */
L_0C09F4C2: BLKS(0x0C09F4C2u);
	{ IF(0x0C09F4C4u); ; /* slot nop */ UPD(0x0C09F46Cu, 3); goto L_0C09F46C; }  /* 0C09F4C2 bra */
L_0C09F4D0: BLKS(0x0C09F4D0u);
	if (!T) { UPD(0x0C09F46Cu, 3); goto L_0C09F46C; }  /* 0C09F4D0 bf */
L_0C09F4D2: BLKS(0x0C09F4D2u);
	r7 = R32(r3 + 0x34u); UPD(0x0C09F4D4u, 1);  /* 0C09F4D2 mov.l @(disp,Rm),Rn */
	r5 = 0x7u;  /* 0C09F4D4 mov #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C09F4D6 extu.b Rm,Rn */
	T = r6 > r5;  /* 0C09F4D8 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09F4E0u, 6); goto L_0C09F4E0; }  /* 0C09F4DA bt */
L_0C09F4DC: BLKS(0x0C09F4DCu);
	r0 = 0x0u;  /* 0C09F4DC mov #imm,Rn */
	W32(r3, r0); UPD(0x0C09F4E0u, 2);  /* 0C09F4DE mov.l Rm,@Rn */
L_0C09F4E0: BLKS(0x0C09F4E0u);
	r1 = 0xFFFFF7F8u; UPD(0x0C09F4E2u, 1);  /* 0C09F4E0 mov.w @(disp,pc),Rn */
	{ r7 += r1; /* slot add Rm,Rn */ UPD(0x0C09F49Eu, 3); goto L_0C09F49E; }  /* 0C09F4E2 bra */
L_0C09F4F0: BLKS(0x0C09F4F0u);
	r2 = 0x99u; UPD(0x0C09F4F2u, 1);  /* 0C09F4F0 mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C09F4F2 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C09F4F6u, 2);  /* 0C09F4F4 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C09F4F6 add #imm,Rn */
	r0 = r7 & 0xFF;  /* 0C09F4F8 extu.b Rm,Rn */
	T = r0 == 0x78u;  /* 0C09F4FA cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09F46Cu, 6); goto L_0C09F46C; } UPD(0x0C09F500u, 1); goto L_0C09F500; }  /* 0C09F4FC bf/s */
L_0C09F500: BLKS(0x0C09F500u);
	r4 = r6;  /* 0C09F500 mov Rm,Rn */
	r4 += 0x1u;  /* 0C09F502 add #imm,Rn */
	{ W8(r5, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C09F46Cu, 5); goto L_0C09F46C; }  /* 0C09F504 bra */
}


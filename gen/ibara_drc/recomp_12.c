#include "recomp.h"
#include "recomp_funcs.h"

void f_0C072660(sh3_t *c)
{
	LOCALS;
L_0C072660: BLKS(0x0C072660u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C072662u, 1);  /* 0C072660 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C072662 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C072666u, 2);  /* 0C072664 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r5;  /* 0C072666 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07266Au, 2);  /* 0C072668 mov.l Rm,@-Rn */
	r6 = 0xB4u; UPD(0x0C07266Cu, 1);  /* 0C07266A mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07266Eu, 1);  /* 0C07266C mov.l Rm,@-Rn */
	IF(0x0C07266Eu); MACL = r4 * r6;  /* 0C07266E mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C072672u, 3);  /* 0C072670 mov.l Rm,@-Rn */
	IF(0x0C072672u); r10 = MACL;  /* 0C072672 sts macl,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C072676u, 2);  /* 0C072674 mov.l Rm,@-Rn */
	IF(0x0C072676u); MACL = r8 * r6;  /* 0C072676 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07267Au, 3);  /* 0C072678 mov.l Rm,@-Rn */
	r3 = 0xC26CD40u; UPD(0x0C07267Cu, 1);  /* 0C07267A mov.l @(disp,pc),Rn */
	IF(0x0C07267Cu); r8 = MACL;  /* 0C07267C sts macl,Rn */
	IF(0x0C07267Eu); r15 -= 4; W32(r15, PR); UPD(0x0C072680u, 2);  /* 0C07267E sts.l pr,@-Rn */
	r10 += r3;  /* 0C072680 add Rm,Rn */
	r8 += r3;  /* 0C072682 add Rm,Rn */
	r11 = R32(r10); UPD(0x0C072686u, 3);  /* 0C072684 mov.l @Rm,Rn */
	r6 += 0x4Cu;  /* 0C072686 add #imm,Rn */
	r2 = R32(r8); UPD(0x0C07268Au, 2);  /* 0C072688 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07268A add #imm,Rn */
	r0 = 0xFFFFFEFFu; UPD(0x0C07268Eu, 2);  /* 0C07268C mov.w @(disp,pc),Rn */
	r2 &= r6;  /* 0C07268E and Rm,Rn */
	r11 &= r0;  /* 0C072690 and Rm,Rn */
	r11 |= r2;  /* 0C072692 or Rm,Rn */
	W32(r10, r11); UPD(0x0C072696u, 4);  /* 0C072694 mov.l Rm,@Rn */
	r14 = r15;  /* 0C072696 mov Rm,Rn */
	r13 = 0x84u; UPD(0x0C07269Au, 2);  /* 0C072698 mov.w @(disp,pc),Rn */
	r11 = r10;  /* 0C07269A mov Rm,Rn */
	r11 += r13;  /* 0C07269C add Rm,Rn */
	r13 += r8;  /* 0C07269E add Rm,Rn */
	r13 += 0x2u;  /* 0C0726A0 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r13); UPD(0x0C0726A4u, 5);  /* 0C0726A2 mov.w @Rm,Rn */
	r11 += 0x2u;  /* 0C0726A4 add #imm,Rn */
	W16(r11, r9); UPD(0x0C0726A8u, 2);  /* 0C0726A6 mov.w Rm,@Rn */
	r12 = 0x98u; UPD(0x0C0726AAu, 1);  /* 0C0726A8 mov.w @(disp,pc),Rn */
	r9 = r10;  /* 0C0726AA mov Rm,Rn */
	r9 += r12;  /* 0C0726AC add Rm,Rn */
	r12 += r8;  /* 0C0726AE add Rm,Rn */
	r12 += 0x2u;  /* 0C0726B0 add #imm,Rn */
	r0 = 0xC0A0380u; UPD(0x0C0726B4u, 5);  /* 0C0726B2 mov.l @(disp,pc),Rn */
	r9 += 0x2u;  /* 0C0726B4 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C0726B8u, 2);  /* 0C0726B6 mov.b @Rm,Rn */
	r5 = R32(r8 + 0xCu); UPD(0x0C0726BAu, 1);  /* 0C0726B8 mov.l @(disp,Rm),Rn */
	W8(r9, r7); UPD(0x0C0726BCu, 1);  /* 0C0726BA mov.b Rm,@Rn */
	IF(0x0C0726BCu); { u32 t_ = r0; PR = 0x0C0726C0u; W32(r10 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0726C0u); }  /* 0C0726BC jsr @Rn */
L_0C0726C0: BLKS(0x0C0726C0u);
	r0 = 0x88u; UPD(0x0C0726C2u, 1);  /* 0C0726C0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C0726C4u, 1);  /* 0C0726C2 mov.w @Rm,Rn */
	IF(0x0C0726C4u); r1 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C0726C6u, 1);  /* 0C0726C4 mov.w @(r0,Rm),Rn */
	r6 = 0xC058060u; UPD(0x0C0726C8u, 1);  /* 0C0726C6 mov.l @(disp,pc),Rn */
	r4 += r1;  /* 0C0726C8 add Rm,Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0726CA exts.w Rm,Rn */
	r4 = r12;  /* 0C0726CC mov Rm,Rn */
	IF(0x0C0726CEu); { u32 t_ = r6; PR = 0x0C0726D2u; r5 = R32(r10 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0726D2u); }  /* 0C0726CE jsr @Rn */
L_0C0726D2: BLKS(0x0C0726D2u);
	r3 = R32(r8 + 0x24u); UPD(0x0C0726D4u, 1);  /* 0C0726D2 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C0726D4 mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C0726D8u, 2);  /* 0C0726D6 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0726D8 add Rm,Rn */
	W32(r10 + 0x24u, r3); UPD(0x0C0726DCu, 2);  /* 0C0726DA mov.l Rm,@(disp,Rn) */
	IF(0x0C0726DCu); { u32 t_ = r13; PR = 0x0C0726E0u; r5 = R32(r10 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0726E0u); }  /* 0C0726DC jsr @Rn */
L_0C0726E0: BLKS(0x0C0726E0u);
	r2 = R32(r8 + 0x28u); UPD(0x0C0726E2u, 1);  /* 0C0726E0 mov.l @(disp,Rm),Rn */
	r2 += r0;  /* 0C0726E2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0726E6u, 2);  /* 0C0726E4 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0726E6 tst Rm,Rn */
	{ u32 c_ = !T; W32(r10 + 0x28u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C072710u, 4); goto L_0C072710; } UPD(0x0C0726ECu, 1); goto L_0C0726EC; }  /* 0C0726E8 bf/s */
L_0C0726EC: BLKS(0x0C0726ECu);
	r14 += 0x4u;  /* 0C0726EC add #imm,Rn */
	UPD(0x0C0726EEu, 1);
L_0C0726EE: BLKS(0x0C0726EEu);
	r15 = r14;  /* 0C0726EE mov Rm,Rn */
	IF(0x0C0726F0u); PR = R32(r15); r15 += 4; UPD(0x0C0726F2u, 2);  /* 0C0726F0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0726F4u, 1);  /* 0C0726F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0726F6u, 1);  /* 0C0726F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0726F8u, 1);  /* 0C0726F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0726FAu, 1);  /* 0C0726F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0726FCu, 1);  /* 0C0726FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0726FEu, 1);  /* 0C0726FC mov.l @Rm+,Rn */
	IF(0x0C0726FEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0726FE rts */
L_0C072710: BLKS(0x0C072710u);
	r7 = 0xC058060u; UPD(0x0C072712u, 1);  /* 0C072710 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)R16(r11); UPD(0x0C072714u, 1);  /* 0C072712 mov.w @Rm,Rn */
	r9 = 0xC0000u; UPD(0x0C072716u, 1);  /* 0C072714 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C072716 mov Rm,Rn */
	IF(0x0C072718u); { u32 t_ = r7; PR = 0x0C07271Cu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07271Cu); }  /* 0C072718 jsr @Rn */
L_0C07271C: BLKS(0x0C07271Cu);
	r11 = R32(r10 + 0x24u); UPD(0x0C07271Eu, 1);  /* 0C07271C mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C07271E mov Rm,Rn */
	r11 += r0;  /* 0C072720 add Rm,Rn */
	IF(0x0C072722u); { u32 t_ = r13; PR = 0x0C072726u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C072726u); }  /* 0C072722 jsr @Rn */
L_0C072726: BLKS(0x0C072726u);
	r1 = 0xA9u; UPD(0x0C072728u, 1);  /* 0C072726 mov.w @(disp,pc),Rn */
	r1 += r10;  /* 0C072728 add Rm,Rn */
	W32(r14, r1); UPD(0x0C07272Cu, 2);  /* 0C07272A mov.l Rm,@Rn */
	r9 = R32(r10 + 0x28u); UPD(0x0C07272Eu, 1);  /* 0C07272C mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C072730u, 1);  /* 0C07272E mov.b @Rm,Rn */
	r9 += r0;  /* 0C072730 add Rm,Rn */
	r8 = 0xC0A9BB0u; UPD(0x0C072734u, 2);  /* 0C072732 mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C072734 extu.b Rm,Rn */
	r4 = r11;  /* 0C072736 mov Rm,Rn */
	IF(0x0C072738u); { u32 t_ = r8; PR = 0x0C07273Cu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C07273Cu); }  /* 0C072738 jsr @Rn */
L_0C07273C: BLKS(0x0C07273Cu);
	T = (r0 & r0) == 0;  /* 0C07273C tst Rm,Rn */
	if (T) { UPD(0x0C0726ECu, 4); goto L_0C0726EC; }  /* 0C07273E bt */
L_0C072740: BLKS(0x0C072740u);
	r5 = R32(r10 + 0x30u); UPD(0x0C072742u, 1);  /* 0C072740 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C072742 add #imm,Rn */
	r8 = 0xC0A8A50u; UPD(0x0C072746u, 2);  /* 0C072744 mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C072746 mov Rm,Rn */
	W32(r15, r5); UPD(0x0C07274Au, 2);  /* 0C072748 mov.l Rm,@Rn */
	r7 = r12;  /* 0C07274A mov Rm,Rn */
	r5 = r11;  /* 0C07274C mov Rm,Rn */
	IF(0x0C07274Eu); { u32 t_ = r8; PR = 0x0C072752u; r4 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A8A50, 0x0C0A8A50u, 0x0C072752u); }  /* 0C07274E jsr @Rn */
L_0C072752: BLKS(0x0C072752u);
	r7 = 0x100u; UPD(0x0C072754u, 1);  /* 0C072752 mov.w @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C072754 add #imm,Rn */
	r11 = 0xC058060u; UPD(0x0C072758u, 2);  /* 0C072756 mov.l @(disp,pc),Rn */
	r7 += r12;  /* 0C072758 add Rm,Rn */
	r9 = 0x80000u; UPD(0x0C07275Cu, 2);  /* 0C07275A mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r7;  /* 0C07275C exts.w Rm,Rn */
	r4 = r12;  /* 0C07275E mov Rm,Rn */
	IF(0x0C072760u); { u32 t_ = r11; PR = 0x0C072764u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C072764u); }  /* 0C072760 jsr @Rn */
L_0C072764: BLKS(0x0C072764u);
	r11 = R32(r10 + 0x24u); UPD(0x0C072766u, 1);  /* 0C072764 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C072766 mov Rm,Rn */
	r4 = r12;  /* 0C072768 mov Rm,Rn */
	r8 = 0xC050D70u; UPD(0x0C07276Cu, 3);  /* 0C07276A mov.l @(disp,pc),Rn */
	IF(0x0C07276Cu); { u32 t_ = r13; PR = 0x0C072770u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C072770u); }  /* 0C07276C jsr @Rn */
L_0C072770: BLKS(0x0C072770u);
	r9 = R32(r10 + 0x28u); UPD(0x0C072772u, 1);  /* 0C072770 mov.l @(disp,Rm),Rn */
	r4 = 0xFu;  /* 0C072772 mov #imm,Rn */
	IF(0x0C072774u); { u32 t_ = r8; PR = 0x0C072778u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C072778u); }  /* 0C072774 jsr @Rn */
L_0C072778: BLKS(0x0C072778u);
	r0 += r12;  /* 0C072778 add Rm,Rn */
	r0 += 0xFFFFFFF8u;  /* 0C07277A add #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C07277C exts.w Rm,Rn */
	r0 = 0xB0u; UPD(0x0C072780u, 4);  /* 0C07277E mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C072780 add #imm,Rn */
	IF(0x0C072782u); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C072784u, 2);  /* 0C072782 mov.b @(r0,Rm),Rn */
	r8 = r4 & 0xFF;  /* 0C072784 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C072788u, 2);  /* 0C072786 mov.l Rm,@Rn */
	r4 = r12;  /* 0C072788 mov Rm,Rn */
	r0 = R32(r14); UPD(0x0C07278Cu, 2);  /* 0C07278A mov.l @Rm,Rn */
	r2 = 0xC058060u; UPD(0x0C07278Eu, 1);  /* 0C07278C mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C072790u, 1);  /* 0C07278E mov.b @Rm,Rn */
	r8 = 0x20000u; UPD(0x0C072792u, 1);  /* 0C072790 mov.l @(disp,pc),Rn */
	r6 = r3 & 0xFF;  /* 0C072792 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C072796u, 2);  /* 0C072794 mov.l Rm,@(disp,Rn) */
	IF(0x0C072796u); { u32 t_ = r2; PR = 0x0C07279Au; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07279Au); }  /* 0C072796 jsr @Rn */
L_0C07279A: BLKS(0x0C07279Au);
	r4 = r12;  /* 0C07279A mov Rm,Rn */
	r5 = r8;  /* 0C07279C mov Rm,Rn */
	IF(0x0C07279Eu); { u32 t_ = r13; PR = 0x0C0727A2u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0727A2u); }  /* 0C07279E jsr @Rn */
L_0C0727A2: BLKS(0x0C0727A2u);
	r5 = 0x808080u; UPD(0x0C0727A4u, 1);  /* 0C0727A2 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C0727A4 mov Rm,Rn */
	W32(r15 + 0x10u, r5); UPD(0x0C0727A8u, 2);  /* 0C0727A6 mov.l Rm,@(disp,Rn) */
	r7 = r9;  /* 0C0727A8 mov Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0727ACu, 2);  /* 0C0727AA mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C0727AEu, 1);  /* 0C0727AC mov.l @Rm,Rn */
	r10 = 0xC0ACA40u; UPD(0x0C0727B0u, 1);  /* 0C0727AE mov.l @(disp,pc),Rn */
	IF(0x0C0727B0u); { u32 t_ = r10; PR = 0x0C0727B4u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C0727B4u); }  /* 0C0727B0 jsr @Rn */
L_0C0727B4: BLKS(0x0C0727B4u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0726EEu, 3); goto L_0C0726EE; }  /* 0C0727B4 bra */
}

/* FUN_0c072800 */
void f_0C072800(sh3_t *c)
{
	LOCALS;
L_0C072800: BLKS(0x0C072800u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C072802u, 1);  /* 0C072800 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C072804u, 1);  /* 0C072802 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C072806u, 1);  /* 0C072804 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C072808u, 1);  /* 0C072806 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07280Au, 1);  /* 0C072808 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07280A exts.w Rm,Rn */
	r2 = 0xB4u; UPD(0x0C07280Eu, 2);  /* 0C07280C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C072810u, 1);  /* 0C07280E mov.l Rm,@-Rn */
	IF(0x0C072810u); MACL = r11 * r2;  /* 0C072810 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072814u, 3);  /* 0C072812 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C072816u, 1);  /* 0C072814 mov.l @(disp,pc),Rn */
	IF(0x0C072816u); r3 = MACL;  /* 0C072816 sts macl,Rn */
	IF(0x0C072818u); r15 -= 4; W32(r15, PR); UPD(0x0C07281Au, 2);  /* 0C072818 sts.l pr,@-Rn */
	r3 += r0;  /* 0C07281A add Rm,Rn */
	r2 = R32(r3 + 0x8u); UPD(0x0C07281Eu, 2);  /* 0C07281C mov.l @(disp,Rm),Rn */
	r0 = 0x46u;  /* 0C07281E mov #imm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C072820 add #imm,Rn */
	T = r2 > r0;  /* 0C072822 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07282Cu, 6); goto L_0C07282C; } goto L_0C072828; }  /* 0C072824 bf/s */
L_0C072828: BLKS(0x0C072828u);
	{ r1 = R32(r3); /* slot mov.l @Rm,Rn */ UPD(0x0C072D00u, 4); goto L_0C072D00; }  /* 0C072828 bra */
L_0C07282C: BLKS(0x0C07282Cu);
	r0 = 0xC07283Cu;  /* 0C07282C mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07282E add Rm,Rn */
	IF(0x0C072830u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C072832u, 3);  /* 0C072830 mov.w @(r0,Rm),Rn */
	IF(0x0C072832u); { u32 tv_ = (r3 + 0x0C072836u); u32 t_ = PHYS(tv_); IF(0x0C072834u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0728D0u: goto L_0C0728D0; case 0x0C0729B0u: goto L_0C0729B0; case 0x0C0729E0u: goto L_0C0729E0; case 0x0C072A10u: goto L_0C072A10; case 0x0C072B70u: goto L_0C072B70; case 0x0C072BC0u: goto L_0C072BC0; case 0x0C072C10u: goto L_0C072C10; default: JUMPD(tv_); } }  /* 0C072832 braf Rn */
L_0C0728D0: BLKS(0x0C0728D0u);
	r13 = 0xC0A03F0u; UPD(0x0C0728D2u, 1);  /* 0C0728D0 mov.l @(disp,pc),Rn */
	IF(0x0C0728D2u); { u32 t_ = r13; PR = 0x0C0728D6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0728D6u); }  /* 0C0728D2 jsr @Rn */
L_0C0728D6: BLKS(0x0C0728D6u);
	IF(0x0C0728D6u); T = (s32)r0 >= 0;  /* 0C0728D6 cmp/pz Rn */
	{ u32 c_ = !T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C072950u, 4); goto L_0C072950; } goto L_0C0728DC; }  /* 0C0728D8 bf/s */
L_0C0728DC: BLKS(0x0C0728DCu);
	r10 = 0xB4u; UPD(0x0C0728DEu, 2);  /* 0C0728DC mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0728DE add #imm,Rn */
	IF(0x0C0728E0u); MACL = r11 * r10;  /* 0C0728E0 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C0728E4u, 4);  /* 0C0728E2 mov.l @(disp,pc),Rn */
	r5 = 0xDu;  /* 0C0728E4 mov #imm,Rn */
	IF(0x0C0728E6u); r13 = MACL;  /* 0C0728E6 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0728EAu, 3);  /* 0C0728E8 mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C0728EA add Rm,Rn */
	IF(0x0C0728ECu); r2 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0728EEu, 2);  /* 0C0728EC mov.b @(r0,Rm),Rn */
	r4 = r2 & 0xFF;  /* 0C0728EE extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0728F2u, 2);  /* 0C0728F0 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0728F2 add #imm,Rn */
	IF(0x0C0728F4u); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0728F6u, 2);  /* 0C0728F4 mov.b @(r0,Rm),Rn */
	r9 = 0xC0AB240u; UPD(0x0C0728F8u, 1);  /* 0C0728F6 mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C0728F8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0728FCu, 2);  /* 0C0728FA mov.l Rm,@(disp,Rn) */
	r6 = R32(r13 + 0x24u); UPD(0x0C0728FEu, 1);  /* 0C0728FC mov.l @(disp,Rm),Rn */
	r4 = R32(r13); UPD(0x0C072900u, 1);  /* 0C0728FE mov.l @Rm,Rn */
	IF(0x0C072900u); { u32 t_ = r9; PR = 0x0C072904u; r7 = R32(r13 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C072904u); }  /* 0C072900 jsr @Rn */
L_0C072904: BLKS(0x0C072904u);
	r9 = 0xC0A0380u; UPD(0x0C072906u, 1);  /* 0C072904 mov.l @(disp,pc),Rn */
	r7 = 0x4u;  /* 0C072906 mov #imm,Rn */
	r4 = r11;  /* 0C072908 mov Rm,Rn */
	W32(r13 + 0xCu, r7); UPD(0x0C07290Cu, 3);  /* 0C07290A mov.l Rm,@(disp,Rn) */
	IF(0x0C07290Cu); { u32 t_ = r9; PR = 0x0C072910u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C072910u); }  /* 0C07290C jsr @Rn */
L_0C072910: BLKS(0x0C072910u);
	IF(0x0C072910u); MACL = r12 * r10;  /* 0C072910 mul.l Rm,Rn */
	r2 = 0xA4u; UPD(0x0C072914u, 3);  /* 0C072912 mov.w @(disp,pc),Rn */
	IF(0x0C072914u); r11 = MACL;  /* 0C072914 sts macl,Rn */
	r0 = 0xA1u; UPD(0x0C072918u, 2);  /* 0C072916 mov.w @(disp,pc),Rn */
	r11 += r8;  /* 0C072918 add Rm,Rn */
	r11 += r2;  /* 0C07291A add Rm,Rn */
	r3 = r11;  /* 0C07291C mov Rm,Rn */
	IF(0x0C07291Eu); r1 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C072920u, 4);  /* 0C07291E mov.b @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C072920 add #imm,Rn */
	r11 += 0x2u;  /* 0C072922 add #imm,Rn */
	r5 = R32(r13); UPD(0x0C072926u, 3);  /* 0C072924 mov.l @Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C072928u, 1);  /* 0C072926 mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C07292Au, 1);  /* 0C072928 mov.b @Rm,Rn */
	r4 |= r1;  /* 0C07292A or Rm,Rn */
	r6 = 0x4000u; UPD(0x0C07292Eu, 2);  /* 0C07292C mov.w @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C07292E add #imm,Rn */
	r5 |= r6;  /* 0C072930 or Rm,Rn */
	W32(r13, r5); UPD(0x0C072934u, 3);  /* 0C072932 mov.l Rm,@Rn */
	W8(r3, r4); UPD(0x0C072936u, 1);  /* 0C072934 mov.b Rm,@Rn */
	W8(r11, r0); UPD(0x0C072938u, 1);  /* 0C072936 mov.b Rm,@Rn */
L_0C072938: BLKS(0x0C072938u);
	r15 = r14;  /* 0C072938 mov Rm,Rn */
	IF(0x0C07293Au); PR = R32(r15); r15 += 4; UPD(0x0C07293Cu, 2);  /* 0C07293A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07293Eu, 1);  /* 0C07293C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C072940u, 1);  /* 0C07293E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C072942u, 1);  /* 0C072940 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C072944u, 1);  /* 0C072942 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C072946u, 1);  /* 0C072944 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C072948u, 1);  /* 0C072946 mov.l @Rm+,Rn */
	IF(0x0C072948u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C072948 rts */
L_0C072950: BLKS(0x0C072950u);
	r8 = 0xB4u; UPD(0x0C072952u, 1);  /* 0C072950 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C072952 add #imm,Rn */
	IF(0x0C072954u); MACL = r11 * r8;  /* 0C072954 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C072958u, 4);  /* 0C072956 mov.l @(disp,pc),Rn */
	r5 = 0xDu;  /* 0C072958 mov #imm,Rn */
	IF(0x0C07295Au); r8 = MACL;  /* 0C07295A sts macl,Rn */
	r13 = 0xB0u; UPD(0x0C07295Eu, 3);  /* 0C07295C mov.w @(disp,pc),Rn */
	r8 += r4;  /* 0C07295E add Rm,Rn */
	r13 += r8;  /* 0C072960 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r13); UPD(0x0C072964u, 3);  /* 0C072962 mov.b @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C072964 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C072968u, 2);  /* 0C072966 mov.l Rm,@Rn */
	r0 = 0xA9u; UPD(0x0C07296Au, 1);  /* 0C072968 mov.w @(disp,pc),Rn */
	IF(0x0C07296Au); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07296Cu, 1);  /* 0C07296A mov.b @(r0,Rm),Rn */
	r9 = 0xC0AC800u; UPD(0x0C07296Eu, 1);  /* 0C07296C mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C07296E extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C072972u, 2);  /* 0C072970 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C072974u, 1);  /* 0C072972 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C072976u, 1);  /* 0C072974 mov.l @(disp,Rm),Rn */
	IF(0x0C072976u); { u32 t_ = r9; PR = 0x0C07297Au; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C07297Au); }  /* 0C072976 jsr @Rn */
L_0C07297A: BLKS(0x0C07297Au);
	r5 = (u32)(s32)(s8)R8(r13); UPD(0x0C07297Cu, 1);  /* 0C07297A mov.b @Rm,Rn */
	r15 += 0x8u;  /* 0C07297C add #imm,Rn */
	r10 = 0xC0AC960u; UPD(0x0C072980u, 2);  /* 0C07297E mov.l @(disp,pc),Rn */
	r7 = r5 & 0xFF;  /* 0C072980 extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C072984u, 2);  /* 0C072982 mov.l @(disp,Rm),Rn */
	r4 = 0x10u;  /* 0C072984 mov #imm,Rn */
	IF(0x0C072986u); { u32 t_ = r10; PR = 0x0C07298Au; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0AC960, 0x0C0AC960u, 0x0C07298Au); }  /* 0C072986 jsr @Rn */
L_0C07298A: BLKS(0x0C07298Au);
	r0 = R32(r8 + 0xCu); UPD(0x0C07298Cu, 1);  /* 0C07298A mov.l @(disp,Rm),Rn */
	r11 = 0xC186BECu; UPD(0x0C07298Eu, 1);  /* 0C07298C mov.l @(disp,pc),Rn */
	IF(0x0C07298Eu); r0 <<= 2;  /* 0C07298E shll2 Rn */
	r12 = 0xC06CE70u; UPD(0x0C072992u, 2);  /* 0C072990 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r13); UPD(0x0C072994u, 1);  /* 0C072992 mov.b @Rm,Rn */
	IF(0x0C072994u); r4 = R32(r0 + r11); UPD(0x0C072996u, 1);  /* 0C072994 mov.l @(r0,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C072996 extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C07299Au, 2);  /* 0C072998 mov.l @(disp,Rm),Rn */
	IF(0x0C07299Au); { u32 t_ = r12; PR = 0x0C07299Eu; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C07299Eu); }  /* 0C07299A jsr @Rn */
L_0C07299E: BLKS(0x0C07299Eu);
	r4 = 0x0u;  /* 0C07299E mov #imm,Rn */
	{ W32(r8, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C072938u, 4); goto L_0C072938; }  /* 0C0729A0 bra */
L_0C0729B0: BLKS(0x0C0729B0u);
	r5 = 0xB4u; UPD(0x0C0729B2u, 1);  /* 0C0729B0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0729B2 add #imm,Rn */
	IF(0x0C0729B4u); MACL = r11 * r5;  /* 0C0729B4 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C0729B8u, 4);  /* 0C0729B6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0729BAu, 1);  /* 0C0729B8 mov.w @(disp,pc),Rn */
	IF(0x0C0729BAu); r8 = MACL;  /* 0C0729BA sts macl,Rn */
	r8 += r10;  /* 0C0729BC add Rm,Rn */
	IF(0x0C0729BEu); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0729C0u, 3);  /* 0C0729BE mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C0729C0 mov #imm,Rn */
	r11 = r13 & 0xFF;  /* 0C0729C2 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C0729C6u, 3);  /* 0C0729C4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0729C6 add #imm,Rn */
	IF(0x0C0729C8u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0729CAu, 2);  /* 0C0729C8 mov.b @(r0,Rm),Rn */
	r2 = r12 & 0xFF;  /* 0C0729CA extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0729CEu, 2);  /* 0C0729CC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0729D0u, 1);  /* 0C0729CE mov.l @Rm,Rn */
L_0C0729D0: BLKS(0x0C0729D0u);
	r12 = 0xC0AC800u; UPD(0x0C0729D2u, 1);  /* 0C0729D0 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0729D4u, 1);  /* 0C0729D2 mov.l @(disp,Rm),Rn */
	IF(0x0C0729D4u); { u32 t_ = r12; PR = 0x0C0729D8u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C0729D8u); }  /* 0C0729D4 jsr @Rn */
L_0C0729D8: BLKS(0x0C0729D8u);
	r2 = 0x0u;  /* 0C0729D8 mov #imm,Rn */
	W32(r8, r2); UPD(0x0C0729DCu, 2);  /* 0C0729DA mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C072938u, 3); goto L_0C072938; }  /* 0C0729DC bra */
L_0C0729E0: BLKS(0x0C0729E0u);
	r4 = 0xB4u; UPD(0x0C0729E2u, 1);  /* 0C0729E0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0729E2 add #imm,Rn */
	IF(0x0C0729E4u); MACL = r11 * r4;  /* 0C0729E4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0729E8u, 4);  /* 0C0729E6 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C0729E8 mov #imm,Rn */
	IF(0x0C0729EAu); r8 = MACL;  /* 0C0729EA sts macl,Rn */
	r8 += r0;  /* 0C0729EC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0729F0u, 4);  /* 0C0729EE mov.w @(disp,pc),Rn */
	IF(0x0C0729F0u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0729F2u, 1);  /* 0C0729F0 mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C0729F2 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0729F6u, 2);  /* 0C0729F4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0729F6 add #imm,Rn */
	IF(0x0C0729F8u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0729FAu, 2);  /* 0C0729F8 mov.b @(r0,Rm),Rn */
	r9 = r6 & 0xFF;  /* 0C0729FA extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0729FEu, 2);  /* 0C0729FC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0729D0u, 3); goto L_0C0729D0; }  /* 0C0729FE bra */
L_0C072A10: BLKS(0x0C072A10u);
	r8 = 0xC0A03F0u; UPD(0x0C072A12u, 1);  /* 0C072A10 mov.l @(disp,pc),Rn */
	IF(0x0C072A12u); { u32 t_ = r8; PR = 0x0C072A16u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C072A16u); }  /* 0C072A12 jsr @Rn */
L_0C072A16: BLKS(0x0C072A16u);
	IF(0x0C072A16u); T = (s32)r0 >= 0;  /* 0C072A16 cmp/pz Rn */
	if (!T) { UPD(0x0C072A88u, 4); goto L_0C072A88; }  /* 0C072A18 bf */
L_0C072A1A: BLKS(0x0C072A1Au);
	r4 = r0;  /* 0C072A1A mov Rm,Rn */
	r10 = 0xB4u; UPD(0x0C072A1Eu, 2);  /* 0C072A1C mov.w @(disp,pc),Rn */
	IF(0x0C072A1Eu); MACL = r0 * r10;  /* 0C072A1E mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C072A22u, 3);  /* 0C072A20 mov.l @(disp,pc),Rn */
	IF(0x0C072A22u); r5 = MACL;  /* 0C072A22 sts macl,Rn */
	r5 += r13;  /* 0C072A24 add Rm,Rn */
	r6 = R32(r5); UPD(0x0C072A28u, 3);  /* 0C072A26 mov.l @Rm,Rn */
	r9 = 0x3000000u; UPD(0x0C072A2Au, 1);  /* 0C072A28 mov.l @(disp,pc),Rn */
	r6 |= r9;  /* 0C072A2A or Rm,Rn */
	IF(0x0C072A2Cu); { u32 t_ = r8; PR = 0x0C072A30u; W32(r5, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C072A30u); }  /* 0C072A2C jsr @Rn */
L_0C072A30: BLKS(0x0C072A30u);
	IF(0x0C072A30u); T = (s32)r0 >= 0;  /* 0C072A30 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C072A34u); MACL = r11 * r10; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C072A3Au, 5); goto L_0C072A3A; } goto L_0C072A36; }  /* 0C072A32 bt/s */
L_0C072A36: BLKS(0x0C072A36u);
	{ r8 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C072B60u, 5); goto L_0C072B60; }  /* 0C072A36 bra */
L_0C072A3A: BLKS(0x0C072A3Au);
	IF(0x0C072A3Au); MACL = r0 * r10;  /* 0C072A3A mul.l Rm,Rn */
	IF(0x0C072A3Cu); r7 = MACL;  /* 0C072A3C sts macl,Rn */
	r7 += r13;  /* 0C072A3E add Rm,Rn */
	r1 = R32(r7); UPD(0x0C072A42u, 5);  /* 0C072A40 mov.l @Rm,Rn */
	r1 |= r9;  /* 0C072A42 or Rm,Rn */
	r9 = 0xC0AFE40u; UPD(0x0C072A46u, 2);  /* 0C072A44 mov.l @(disp,pc),Rn */
	IF(0x0C072A46u); { u32 t_ = r9; PR = 0x0C072A4Au; W32(r7, r1); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C072A4Au); }  /* 0C072A46 jsr @Rn */
L_0C072A4A: BLKS(0x0C072A4Au);
	r0 &= 0x3u;  /* 0C072A4A and #imm,r0 */
	T = r0 == 0x1u;  /* 0C072A4C cmp/eq #imm,r0 */
	if (T) { UPD(0x0C072B30u, 5); goto L_0C072B30; }  /* 0C072A4E bt */
L_0C072A50: BLKS(0x0C072A50u);
	r3 = 0x1u;  /* 0C072A50 mov #imm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C072A52 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C072B00u, 5); goto L_0C072B00; } goto L_0C072A58; }  /* 0C072A54 bt/s */
L_0C072A58: BLKS(0x0C072A58u);
	T = (r0 & r0) == 0;  /* 0C072A58 tst Rm,Rn */
	if (T) { UPD(0x0C072AD0u, 5); goto L_0C072AD0; }  /* 0C072A5A bt */
L_0C072A5C: BLKS(0x0C072A5Cu);
	r2 = 0xB4u; UPD(0x0C072A5Eu, 1);  /* 0C072A5C mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C072A5E add #imm,Rn */
	IF(0x0C072A60u); MACL = r11 * r2;  /* 0C072A60 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C072A64u, 4);  /* 0C072A62 mov.l @(disp,pc),Rn */
	IF(0x0C072A64u); r2 = MACL;  /* 0C072A64 sts macl,Rn */
	r2 += r0;  /* 0C072A66 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C072A6Au, 3);  /* 0C072A68 mov.w @(disp,pc),Rn */
	IF(0x0C072A6Au); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C072A6Cu, 1);  /* 0C072A6A mov.b @(r0,Rm),Rn */
	r12 = r5 & 0xFF;  /* 0C072A6C extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C072A70u, 2);  /* 0C072A6E mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C072A70 add #imm,Rn */
	IF(0x0C072A72u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C072A74u, 2);  /* 0C072A72 mov.b @(r0,Rm),Rn */
	r5 = 0xDu;  /* 0C072A74 mov #imm,Rn */
	r10 = r4 & 0xFF;  /* 0C072A76 extu.b Rm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C072A7Au, 3);  /* 0C072A78 mov.l Rm,@(disp,Rn) */
	r4 = R32(r2); UPD(0x0C072A7Cu, 1);  /* 0C072A7A mov.l @Rm,Rn */
L_0C072A7C: BLKS(0x0C072A7Cu);
	r6 = R32(r2 + 0x24u); UPD(0x0C072A7Eu, 1);  /* 0C072A7C mov.l @(disp,Rm),Rn */
	r7 = R32(r2 + 0x28u); UPD(0x0C072A80u, 1);  /* 0C072A7E mov.l @(disp,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C072A82u, 1);  /* 0C072A80 mov.l @(disp,pc),Rn */
L_0C072A82: BLKS(0x0C072A82u);
	IF(0x0C072A82u); { u32 t_ = r0; PR = 0x0C072A86u; IF(0x0C072A84u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C072A86u); }  /* 0C072A82 jsr @Rn */
L_0C072A86: BLKS(0x0C072A86u);
	r15 += 0x8u;  /* 0C072A86 add #imm,Rn */
	UPD(0x0C072A88u, 1);
L_0C072A88: BLKS(0x0C072A88u);
	r0 = 0xB4u; UPD(0x0C072A8Au, 1);  /* 0C072A88 mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C072A8A mov #imm,Rn */
	IF(0x0C072A8Cu); MACL = r11 * r0;  /* 0C072A8C mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C072A90u, 4);  /* 0C072A8E mov.l @(disp,pc),Rn */
	IF(0x0C072A90u); r0 = MACL;  /* 0C072A90 sts macl,Rn */
	{ IF(0x0C072A94u); W32(r0 + r11, r6); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C072938u, 4); goto L_0C072938; }  /* 0C072A92 bra */
L_0C072AD0: BLKS(0x0C072AD0u);
	IF(0x0C072AD0u); MACL = r11 * r10;  /* 0C072AD0 mul.l Rm,Rn */
	r0 = 0xB0u; UPD(0x0C072AD4u, 3);  /* 0C072AD2 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C072AD4 add #imm,Rn */
	IF(0x0C072AD6u); r2 = MACL;  /* 0C072AD6 sts macl,Rn */
	r2 += r13;  /* 0C072AD8 add Rm,Rn */
	IF(0x0C072ADAu); r12 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C072ADCu, 4);  /* 0C072ADA mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C072ADC mov #imm,Rn */
	r4 = r12 & 0xFF;  /* 0C072ADE extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C072AE2u, 3);  /* 0C072AE0 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C072AE2 add #imm,Rn */
	IF(0x0C072AE4u); r10 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C072AE6u, 2);  /* 0C072AE4 mov.b @(r0,Rm),Rn */
	r13 = r10 & 0xFF;  /* 0C072AE6 extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C072AEAu, 2);  /* 0C072AE8 mov.l Rm,@(disp,Rn) */
	r4 = R32(r2); UPD(0x0C072AECu, 1);  /* 0C072AEA mov.l @Rm,Rn */
L_0C072AEC: BLKS(0x0C072AECu);
	r6 = R32(r2 + 0x24u); UPD(0x0C072AEEu, 1);  /* 0C072AEC mov.l @(disp,Rm),Rn */
	r0 = 0xC0AC800u; UPD(0x0C072AF0u, 1);  /* 0C072AEE mov.l @(disp,pc),Rn */
	{ r7 = R32(r2 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C072A82u, 3); goto L_0C072A82; }  /* 0C072AF0 bra */
L_0C072B00: BLKS(0x0C072B00u);
	if (!T) { UPD(0x0C072A5Cu, 3); goto L_0C072A5C; }  /* 0C072B00 bf */
L_0C072B02: BLKS(0x0C072B02u);
	IF(0x0C072B02u); MACL = r11 * r10;  /* 0C072B02 mul.l Rm,Rn */
	r0 = 0xB0u; UPD(0x0C072B06u, 3);  /* 0C072B04 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C072B06 add #imm,Rn */
	IF(0x0C072B08u); r2 = MACL;  /* 0C072B08 sts macl,Rn */
	r2 += r13;  /* 0C072B0A add Rm,Rn */
	IF(0x0C072B0Cu); r13 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C072B0Eu, 4);  /* 0C072B0C mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C072B0E mov #imm,Rn */
	r3 = r13 & 0xFF;  /* 0C072B10 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C072B14u, 3);  /* 0C072B12 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C072B14 add #imm,Rn */
	IF(0x0C072B16u); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C072B18u, 2);  /* 0C072B16 mov.b @(r0,Rm),Rn */
	r9 = r7 & 0xFF;  /* 0C072B18 extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C072B1Cu, 2);  /* 0C072B1A mov.l Rm,@(disp,Rn) */
	r4 = R32(r2); UPD(0x0C072B1Eu, 1);  /* 0C072B1C mov.l @Rm,Rn */
L_0C072B1E: BLKS(0x0C072B1Eu);
	r6 = R32(r2 + 0x24u); UPD(0x0C072B20u, 1);  /* 0C072B1E mov.l @(disp,Rm),Rn */
	r0 = 0xC0AD970u; UPD(0x0C072B22u, 1);  /* 0C072B20 mov.l @(disp,pc),Rn */
	{ r7 = R32(r2 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C072A82u, 3); goto L_0C072A82; }  /* 0C072B22 bra */
L_0C072B30: BLKS(0x0C072B30u);
	IF(0x0C072B30u); MACL = r11 * r10;  /* 0C072B30 mul.l Rm,Rn */
	r0 = 0xB0u; UPD(0x0C072B34u, 3);  /* 0C072B32 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C072B34 add #imm,Rn */
	IF(0x0C072B36u); r2 = MACL;  /* 0C072B36 sts macl,Rn */
	r2 += r13;  /* 0C072B38 add Rm,Rn */
	IF(0x0C072B3Au); r8 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C072B3Cu, 4);  /* 0C072B3A mov.b @(r0,Rm),Rn */
	r6 = r8 & 0xFF;  /* 0C072B3C extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C072B40u, 2);  /* 0C072B3E mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C072B40 add #imm,Rn */
	IF(0x0C072B42u); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C072B44u, 2);  /* 0C072B42 mov.b @(r0,Rm),Rn */
	r0 = r5 & 0xFF;  /* 0C072B44 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C072B48u, 2);  /* 0C072B46 mov.l Rm,@(disp,Rn) */
	r5 = 0xCu;  /* 0C072B48 mov #imm,Rn */
	r4 = R32(r2); UPD(0x0C072B4Cu, 2);  /* 0C072B4A mov.l @Rm,Rn */
L_0C072B4C: BLKS(0x0C072B4Cu);
	r6 = R32(r2 + 0x24u); UPD(0x0C072B4Eu, 1);  /* 0C072B4C mov.l @(disp,Rm),Rn */
	r0 = 0xC0AD830u; UPD(0x0C072B50u, 1);  /* 0C072B4E mov.l @(disp,pc),Rn */
	{ r7 = R32(r2 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C072A82u, 3); goto L_0C072A82; }  /* 0C072B50 bra */
L_0C072B60: BLKS(0x0C072B60u);
	IF(0x0C072B60u); r0 = MACL;  /* 0C072B60 sts macl,Rn */
	{ IF(0x0C072B64u); W32(r0 + r13, r8); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C072938u, 4); goto L_0C072938; }  /* 0C072B62 bra */
L_0C072B70: BLKS(0x0C072B70u);
	r8 = 0xC0A03F0u; UPD(0x0C072B72u, 1);  /* 0C072B70 mov.l @(disp,pc),Rn */
	IF(0x0C072B72u); { u32 t_ = r8; PR = 0x0C072B76u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C072B76u); }  /* 0C072B72 jsr @Rn */
L_0C072B76: BLKS(0x0C072B76u);
	IF(0x0C072B76u); T = (s32)r0 >= 0;  /* 0C072B76 cmp/pz Rn */
	if (!T) { UPD(0x0C072B8Eu, 4); goto L_0C072B8E; }  /* 0C072B78 bf */
L_0C072B7A: BLKS(0x0C072B7Au);
	r6 = 0xB4u; UPD(0x0C072B7Cu, 1);  /* 0C072B7A mov.w @(disp,pc),Rn */
	IF(0x0C072B7Cu); MACL = r0 * r6;  /* 0C072B7C mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C072B80u, 3);  /* 0C072B7E mov.l @(disp,pc),Rn */
	IF(0x0C072B80u); r4 = MACL;  /* 0C072B80 sts macl,Rn */
	r0 = 0xA5u; UPD(0x0C072B84u, 2);  /* 0C072B82 mov.w @(disp,pc),Rn */
	r4 += r2;  /* 0C072B84 add Rm,Rn */
	r4 += r0;  /* 0C072B86 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C072B8Au, 3);  /* 0C072B88 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C072B8A add #imm,Rn */
	W8(r4, r5); UPD(0x0C072B8Eu, 2);  /* 0C072B8C mov.b Rm,@Rn */
L_0C072B8E: BLKS(0x0C072B8Eu);
	r9 = 0xB4u; UPD(0x0C072B90u, 1);  /* 0C072B8E mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C072B90 add #imm,Rn */
	IF(0x0C072B92u); MACL = r11 * r9;  /* 0C072B92 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C072B96u, 4);  /* 0C072B94 mov.l @(disp,pc),Rn */
	r5 = 0xCu;  /* 0C072B96 mov #imm,Rn */
	IF(0x0C072B98u); r8 = MACL;  /* 0C072B98 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C072B9Cu, 3);  /* 0C072B9A mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C072B9C add Rm,Rn */
	IF(0x0C072B9Eu); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C072BA0u, 2);  /* 0C072B9E mov.b @(r0,Rm),Rn */
	r3 = r10 & 0xFF;  /* 0C072BA0 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C072BA4u, 2);  /* 0C072BA2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C072BA4 add #imm,Rn */
	IF(0x0C072BA6u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C072BA8u, 2);  /* 0C072BA6 mov.b @(r0,Rm),Rn */
	r11 = 0xC0AB240u; UPD(0x0C072BAAu, 1);  /* 0C072BA8 mov.l @(disp,pc),Rn */
	r13 = r7 & 0xFF;  /* 0C072BAA extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C072BAEu, 2);  /* 0C072BAC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C072BB0u, 1);  /* 0C072BAE mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C072BB2u, 1);  /* 0C072BB0 mov.l @(disp,Rm),Rn */
	IF(0x0C072BB2u); { u32 t_ = r11; PR = 0x0C072BB6u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C072BB6u); }  /* 0C072BB2 jsr @Rn */
L_0C072BB6: BLKS(0x0C072BB6u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C07299Eu, 3); goto L_0C07299E; }  /* 0C072BB6 bra */
L_0C072BC0: BLKS(0x0C072BC0u);
	r6 = 0xB4u; UPD(0x0C072BC2u, 1);  /* 0C072BC0 mov.w @(disp,pc),Rn */
	IF(0x0C072BC2u); MACL = r11 * r6;  /* 0C072BC2 mul.l Rm,Rn */
	r9 = 0x4000u; UPD(0x0C072BC6u, 3);  /* 0C072BC4 mov.w @(disp,pc),Rn */
	r11 = 0xC26CD40u; UPD(0x0C072BC8u, 1);  /* 0C072BC6 mov.l @(disp,pc),Rn */
	IF(0x0C072BC8u); r8 = MACL;  /* 0C072BC8 sts macl,Rn */
	r8 += r11;  /* 0C072BCA add Rm,Rn */
	r4 = R32(r8); UPD(0x0C072BCEu, 3);  /* 0C072BCC mov.l @Rm,Rn */
	r9 &= r4;  /* 0C072BCE and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C072BD0 tst Rm,Rn */
	if (T) { UPD(0x0C072BE0u, 5); goto L_0C072BE0; }  /* 0C072BD2 bt */
L_0C072BD4: BLKS(0x0C072BD4u);
	r9 = 0xFFFFBFFFu; UPD(0x0C072BD6u, 1);  /* 0C072BD4 mov.w @(disp,pc),Rn */
	r4 &= r9;  /* 0C072BD6 and Rm,Rn */
	{ W32(r8, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C072938u, 4); goto L_0C072938; }  /* 0C072BD8 bra */
L_0C072BE0: BLKS(0x0C072BE0u);
	r0 = 0xB0u; UPD(0x0C072BE2u, 1);  /* 0C072BE0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C072BE2 add #imm,Rn */
	IF(0x0C072BE4u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C072BE6u, 2);  /* 0C072BE4 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C072BE6 mov #imm,Rn */
	r10 = r12 & 0xFF;  /* 0C072BE8 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C072BECu, 3);  /* 0C072BEA mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C072BEC add #imm,Rn */
	IF(0x0C072BEEu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C072BF0u, 2);  /* 0C072BEE mov.b @(r0,Rm),Rn */
	r13 = 0xC0AB240u; UPD(0x0C072BF2u, 1);  /* 0C072BF0 mov.l @(disp,pc),Rn */
	r7 = r3 & 0xFF;  /* 0C072BF2 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C072BF6u, 2);  /* 0C072BF4 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x24u); UPD(0x0C072BF8u, 1);  /* 0C072BF6 mov.l @(disp,Rm),Rn */
	IF(0x0C072BF8u); { u32 t_ = r13; PR = 0x0C072BFCu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C072BFCu); }  /* 0C072BF8 jsr @Rn */
L_0C072BFC: BLKS(0x0C072BFCu);
	W32(r8, r9); UPD(0x0C072BFEu, 1);  /* 0C072BFC mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C072938u, 3); goto L_0C072938; }  /* 0C072BFE bra */
L_0C072C10: BLKS(0x0C072C10u);
	r8 = 0xC050D70u; UPD(0x0C072C12u, 1);  /* 0C072C10 mov.l @(disp,pc),Rn */
	IF(0x0C072C12u); { u32 t_ = r8; PR = 0x0C072C16u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C072C16u); }  /* 0C072C12 jsr @Rn */
L_0C072C16: BLKS(0x0C072C16u);
	T = r0 == 0x2u;  /* 0C072C16 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C072CD0u, 4); goto L_0C072CD0; }  /* 0C072C18 bt */
L_0C072C1A: BLKS(0x0C072C1Au);
	r5 = 0x2u;  /* 0C072C1A mov #imm,Rn */
	T = (s32)r0 > (s32)r5;  /* 0C072C1C cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C072CA0u, 5); goto L_0C072CA0; } goto L_0C072C22; }  /* 0C072C1E bt/s */
L_0C072C22: BLKS(0x0C072C22u);
	T = r0 == 0x1u;  /* 0C072C22 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C072C50u, 5); goto L_0C072C50; }  /* 0C072C24 bt */
L_0C072C26: BLKS(0x0C072C26u);
	r2 = 0xB4u; UPD(0x0C072C28u, 1);  /* 0C072C26 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C072C28 add #imm,Rn */
	IF(0x0C072C2Au); MACL = r11 * r2;  /* 0C072C2A mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C072C2Eu, 4);  /* 0C072C2C mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C072C2E mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C072C32u, 2);  /* 0C072C30 mov.w @(disp,pc),Rn */
	IF(0x0C072C32u); r2 = MACL;  /* 0C072C32 sts macl,Rn */
	r2 += r3;  /* 0C072C34 add Rm,Rn */
	IF(0x0C072C36u); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C072C38u, 3);  /* 0C072C36 mov.b @(r0,Rm),Rn */
	r13 = r7 & 0xFF;  /* 0C072C38 extu.b Rm,Rn */
	W32(r15, r13); UPD(0x0C072C3Cu, 2);  /* 0C072C3A mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C072C3C add #imm,Rn */
	IF(0x0C072C3Eu); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C072C40u, 2);  /* 0C072C3E mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C072C40 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C072C44u, 2);  /* 0C072C42 mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r2); /* slot mov.l @Rm,Rn */ UPD(0x0C072A7Cu, 3); goto L_0C072A7C; }  /* 0C072C44 bra */
L_0C072C50: BLKS(0x0C072C50u);
	r5 = 0xB4u; UPD(0x0C072C52u, 1);  /* 0C072C50 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C072C52 add #imm,Rn */
	IF(0x0C072C54u); MACL = r11 * r5;  /* 0C072C54 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C072C58u, 4);  /* 0C072C56 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C072C5Au, 1);  /* 0C072C58 mov.w @(disp,pc),Rn */
	IF(0x0C072C5Au); r2 = MACL;  /* 0C072C5A sts macl,Rn */
	r2 += r8;  /* 0C072C5C add Rm,Rn */
	IF(0x0C072C5Eu); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C072C60u, 3);  /* 0C072C5E mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C072C60 mov #imm,Rn */
	r9 = r4 & 0xFF;  /* 0C072C62 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C072C66u, 3);  /* 0C072C64 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C072C66 add #imm,Rn */
	IF(0x0C072C68u); r12 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C072C6Au, 2);  /* 0C072C68 mov.b @(r0,Rm),Rn */
	r10 = r12 & 0xFF;  /* 0C072C6A extu.b Rm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C072C6Eu, 2);  /* 0C072C6C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r2); /* slot mov.l @Rm,Rn */ UPD(0x0C072AECu, 3); goto L_0C072AEC; }  /* 0C072C6E bra */
L_0C072CA0: BLKS(0x0C072CA0u);
	if (!T) { UPD(0x0C072C26u, 3); goto L_0C072C26; }  /* 0C072CA0 bf */
L_0C072CA2: BLKS(0x0C072CA2u);
	r15 += 0xFFFFFFF8u;  /* 0C072CA2 add #imm,Rn */
	r5 = 0xB4u; UPD(0x0C072CA6u, 2);  /* 0C072CA4 mov.w @(disp,pc),Rn */
	IF(0x0C072CA6u); MACL = r11 * r5;  /* 0C072CA6 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C072CAAu, 3);  /* 0C072CA8 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C072CACu, 1);  /* 0C072CAA mov.w @(disp,pc),Rn */
	IF(0x0C072CACu); r2 = MACL;  /* 0C072CAC sts macl,Rn */
	r2 += r8;  /* 0C072CAE add Rm,Rn */
	IF(0x0C072CB0u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C072CB2u, 3);  /* 0C072CB0 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C072CB2 mov #imm,Rn */
	r9 = r4 & 0xFF;  /* 0C072CB4 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C072CB8u, 3);  /* 0C072CB6 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C072CB8 add #imm,Rn */
	IF(0x0C072CBAu); r12 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C072CBCu, 2);  /* 0C072CBA mov.b @(r0,Rm),Rn */
	r10 = r12 & 0xFF;  /* 0C072CBC extu.b Rm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C072CC0u, 2);  /* 0C072CBE mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r2); /* slot mov.l @Rm,Rn */ UPD(0x0C072B4Cu, 3); goto L_0C072B4C; }  /* 0C072CC0 bra */
L_0C072CD0: BLKS(0x0C072CD0u);
	r2 = 0xB4u; UPD(0x0C072CD2u, 1);  /* 0C072CD0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C072CD2 add #imm,Rn */
	IF(0x0C072CD4u); MACL = r11 * r2;  /* 0C072CD4 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C072CD8u, 4);  /* 0C072CD6 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C072CD8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C072CDCu, 2);  /* 0C072CDA mov.w @(disp,pc),Rn */
	IF(0x0C072CDCu); r2 = MACL;  /* 0C072CDC sts macl,Rn */
	r2 += r3;  /* 0C072CDE add Rm,Rn */
	IF(0x0C072CE0u); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C072CE2u, 3);  /* 0C072CE0 mov.b @(r0,Rm),Rn */
	r13 = r7 & 0xFF;  /* 0C072CE2 extu.b Rm,Rn */
	W32(r15, r13); UPD(0x0C072CE6u, 2);  /* 0C072CE4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C072CE6 add #imm,Rn */
	IF(0x0C072CE8u); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C072CEAu, 2);  /* 0C072CE8 mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C072CEA extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C072CEEu, 2);  /* 0C072CEC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r2); /* slot mov.l @Rm,Rn */ UPD(0x0C072B1Eu, 3); goto L_0C072B1E; }  /* 0C072CEE bra */
L_0C072D00: BLKS(0x0C072D00u);
	r4 = 0x40000000u; UPD(0x0C072D02u, 1);  /* 0C072D00 mov.l @(disp,pc),Rn */
	T = (r1 & r4) == 0;  /* 0C072D02 tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C072D10u, 4); goto L_0C072D10; } goto L_0C072D08; }  /* 0C072D04 bt/s */
L_0C072D08: BLKS(0x0C072D08u);
	{ W32(r3, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C072938u, 4); goto L_0C072938; }  /* 0C072D08 bra */
L_0C072D10: BLKS(0x0C072D10u);
	r7 = 0xA6u; UPD(0x0C072D12u, 1);  /* 0C072D10 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C072D12 mov Rm,Rn */
	IF(0x0C072D14u); r10 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C072D16u, 2);  /* 0C072D14 mov.b @(r0,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C072D18u, 1);  /* 0C072D16 mov.w @(disp,pc),Rn */
	IF(0x0C072D18u); r10 <<= 2;  /* 0C072D18 shll2 Rn */
	IF(0x0C072D1Au); r12 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C072D1Cu, 2);  /* 0C072D1A mov.b @(r0,Rm),Rn */
	r8 = 0xC06CE70u; UPD(0x0C072D1Eu, 1);  /* 0C072D1C mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C072D1E mov Rm,Rn */
	r9 = 0xC186BD8u; UPD(0x0C072D22u, 2);  /* 0C072D20 mov.l @(disp,pc),Rn */
	r7 = r12 & 0xFF;  /* 0C072D22 extu.b Rm,Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C072D26u, 2);  /* 0C072D24 mov.l @(disp,Rm),Rn */
	IF(0x0C072D26u); r4 = R32(r0 + r9); UPD(0x0C072D28u, 1);  /* 0C072D26 mov.l @(r0,Rm),Rn */
	IF(0x0C072D28u); { u32 t_ = r8; PR = 0x0C072D2Cu; r5 = R32(r3 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C072D2Cu); }  /* 0C072D28 jsr @Rn */
L_0C072D2C: BLKS(0x0C072D2Cu);
	r6 = 0xC0A0BA0u; UPD(0x0C072D2Eu, 1);  /* 0C072D2C mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C072D2E mov Rm,Rn */
	r15 = r14;  /* 0C072D30 mov Rm,Rn */
	IF(0x0C072D32u); PR = R32(r15); r15 += 4; UPD(0x0C072D34u, 3);  /* 0C072D32 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C072D36u, 1);  /* 0C072D34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C072D38u, 1);  /* 0C072D36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C072D3Au, 1);  /* 0C072D38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C072D3Cu, 1);  /* 0C072D3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C072D3Eu, 1);  /* 0C072D3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C072D40u, 1);  /* 0C072D3E mov.l @Rm+,Rn */
	IF(0x0C072D40u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A0BA0u: TAIL(f_0C0A0BA0); default: JUMPD(tv_); } }  /* 0C072D40 jmp @Rn */
}

void f_0C072D60(sh3_t *c)
{
	LOCALS;
	goto L_0C072D60;
L_0C071D20: BLKS(0x0C071D20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C071D22u, 1);  /* 0C071D20 mov.l Rm,@-Rn */
	r2 = (u32)(s32)(s16)r5;  /* 0C071D22 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C071D26u, 2);  /* 0C071D24 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C071D26 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C071D2Au, 2);  /* 0C071D28 mov.l Rm,@-Rn */
	r4 = 0xB4u; UPD(0x0C071D2Cu, 1);  /* 0C071D2A mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C071D2Eu, 1);  /* 0C071D2C mov.l Rm,@-Rn */
	IF(0x0C071D2Eu); MACL = r9 * r4;  /* 0C071D2E mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C071D32u, 3);  /* 0C071D30 mov.l Rm,@-Rn */
	IF(0x0C071D32u); r10 = MACL;  /* 0C071D32 sts macl,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C071D36u, 2);  /* 0C071D34 mov.l Rm,@-Rn */
	IF(0x0C071D36u); MACL = r2 * r4;  /* 0C071D36 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C071D3Au, 3);  /* 0C071D38 mov.l Rm,@-Rn */
	r13 = 0xC26CD40u; UPD(0x0C071D3Cu, 1);  /* 0C071D3A mov.l @(disp,pc),Rn */
	IF(0x0C071D3Cu); r8 = MACL;  /* 0C071D3C sts macl,Rn */
	IF(0x0C071D3Eu); r15 -= 4; W32(r15, PR); UPD(0x0C071D40u, 2);  /* 0C071D3E sts.l pr,@-Rn */
	r10 += r13;  /* 0C071D40 add Rm,Rn */
	r8 += r13;  /* 0C071D42 add Rm,Rn */
	r6 = R32(r10); UPD(0x0C071D46u, 3);  /* 0C071D44 mov.l @Rm,Rn */
	r2 = 0xFFFFFFFFu;  /* 0C071D46 mov #imm,Rn */
	r0 = 0xFFFFFEFFu; UPD(0x0C071D4Au, 2);  /* 0C071D48 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C071D4A add #imm,Rn */
	r12 = R32(r8); UPD(0x0C071D4Eu, 2);  /* 0C071D4C mov.l @Rm,Rn */
	r6 &= r0;  /* 0C071D4E and Rm,Rn */
	r5 = 0x100u; UPD(0x0C071D52u, 2);  /* 0C071D50 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C071D52 mov Rm,Rn */
	r12 &= r5;  /* 0C071D54 and Rm,Rn */
	r6 |= r12;  /* 0C071D56 or Rm,Rn */
	r3 = R32(r8 + 0x24u); UPD(0x0C071D5Au, 4);  /* 0C071D58 mov.l @(disp,Rm),Rn */
	r11 = R32(r10 + 0x2Cu); UPD(0x0C071D5Cu, 1);  /* 0C071D5A mov.l @(disp,Rm),Rn */
	r12 = 0xA5u; UPD(0x0C071D5Eu, 1);  /* 0C071D5C mov.w @(disp,pc),Rn */
	r3 += r11;  /* 0C071D5E add Rm,Rn */
	r12 += r10;  /* 0C071D60 add Rm,Rn */
	r11 = 0x9Du; UPD(0x0C071D64u, 3);  /* 0C071D62 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C071D66u, 1);  /* 0C071D64 mov.b @Rm,Rn */
	r11 += r10;  /* 0C071D66 add Rm,Rn */
	W32(r10 + 0x24u, r3); UPD(0x0C071D6Au, 2);  /* 0C071D68 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C071D6A tst Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C071D6Eu, 2);  /* 0C071D6C mov.b @Rm,Rn */
	IF(0x0C071D6Eu); r4 = T;  /* 0C071D6E movt Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C071D72u, 2);  /* 0C071D70 mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C071D72 tst Rm,Rn */
	r1 = R32(r10 + 0x30u); UPD(0x0C071D76u, 2);  /* 0C071D74 mov.l @(disp,Rm),Rn */
	{ u32 t_ = 0u - r2, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C071D76 negc Rm,Rn */
	r7 += r1;  /* 0C071D78 add Rm,Rn */
	r0 &= r4;  /* 0C071D7A and Rm,Rn */
	W32(r10, r6); UPD(0x0C071D7Eu, 4);  /* 0C071D7C mov.l Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C071D7E tst Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C071DB0u, 4); goto L_0C071DB0; } UPD(0x0C071D84u, 1); goto L_0C071D84; }  /* 0C071D80 bt/s */
L_0C071D84: BLKS(0x0C071D84u);
	r5 = r3;  /* 0C071D84 mov Rm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C071D86 add #imm,Rn */
	r1 = r5 & 0xFF;  /* 0C071D88 extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C071D8A tst Rm,Rn */
	{ u32 c_ = !T; W8(r11, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C071D94u, 7); goto L_0C071D94; } UPD(0x0C071D90u, 1); goto L_0C071D90; }  /* 0C071D8C bf/s */
L_0C071D90: BLKS(0x0C071D90u);
	r0 = 0x9Au; UPD(0x0C071D92u, 1);  /* 0C071D90 mov.w @(disp,pc),Rn */
	IF(0x0C071D92u); W8(r0 + r10, r1); UPD(0x0C071D94u, 1);  /* 0C071D92 mov.b Rm,@(r0,Rn) */
L_0C071D94: BLKS(0x0C071D94u);
	r14 += 0x4u;  /* 0C071D94 add #imm,Rn */
	UPD(0x0C071D96u, 1);
L_0C071D96: BLKS(0x0C071D96u);
	r15 = r14;  /* 0C071D96 mov Rm,Rn */
	IF(0x0C071D98u); PR = R32(r15); r15 += 4; UPD(0x0C071D9Au, 2);  /* 0C071D98 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C071D9Cu, 1);  /* 0C071D9A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C071D9Eu, 1);  /* 0C071D9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C071DA0u, 1);  /* 0C071D9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C071DA2u, 1);  /* 0C071DA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C071DA4u, 1);  /* 0C071DA2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C071DA6u, 1);  /* 0C071DA4 mov.l @Rm+,Rn */
	IF(0x0C071DA6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C071DA6 rts */
L_0C071DB0: BLKS(0x0C071DB0u);
	T = (r6 & r5) == 0;  /* 0C071DB0 tst Rm,Rn */
	if (!T) { UPD(0x0C071E20u, 4); goto L_0C071E20; }  /* 0C071DB2 bf */
L_0C071DB4: BLKS(0x0C071DB4u);
	r12 = 0x0u;  /* 0C071DB4 mov #imm,Rn */
	r2 = 0x86u; UPD(0x0C071DB8u, 2);  /* 0C071DB6 mov.w @(disp,pc),Rn */
	r6 = 0xFFu; UPD(0x0C071DBAu, 1);  /* 0C071DB8 mov.w @(disp,pc),Rn */
	r2 += r10;  /* 0C071DBA add Rm,Rn */
	r7 = 0x1FFu; UPD(0x0C071DBEu, 2);  /* 0C071DBC mov.w @(disp,pc),Rn */
	r3 = r5;  /* 0C071DBE mov Rm,Rn */
	UPD(0x0C071DC0u, 1);
L_0C071DC0: BLKS(0x0C071DC0u);
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C071DC2u, 1);  /* 0C071DC0 mov.w @Rm,Rn */
	r11 = r1;  /* 0C071DC2 mov Rm,Rn */
	r11 &= r7;  /* 0C071DC4 and Rm,Rn */
	T = (s32)r11 > (s32)r6;  /* 0C071DC6 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = (s32)r11 > (s32)r3; /* slot cmp/gt Rm,Rn */ if (c_) { UPD(0x0C071DD2u, 6); goto L_0C071DD2; } goto L_0C071DCC; }  /* 0C071DC8 bt/s */
L_0C071DCC: BLKS(0x0C071DCCu);
	r1 += 0x1u;  /* 0C071DCC add #imm,Rn */
	W16(r2, r1); UPD(0x0C071DD0u, 3);  /* 0C071DCE mov.w Rm,@Rn */
	T = (s32)r11 > (s32)r3;  /* 0C071DD0 cmp/gt Rm,Rn */
	UPD(0x0C071DD2u, 1);
L_0C071DD2: BLKS(0x0C071DD2u);
	{ u32 c_ = !T; r11 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C071DDEu, 3); goto L_0C071DDE; } goto L_0C071DD6; }  /* 0C071DD2 bf/s */
L_0C071DD6: BLKS(0x0C071DD6u);
	r10 = (u32)(s32)(s16)R16(r2); UPD(0x0C071DD8u, 2);  /* 0C071DD6 mov.w @Rm,Rn */
	r10 += 0xFFFFFFFFu;  /* 0C071DD8 add #imm,Rn */
	W16(r2, r10); UPD(0x0C071DDCu, 2);  /* 0C071DDA mov.w Rm,@Rn */
	r11 = r12;  /* 0C071DDC mov Rm,Rn */
	UPD(0x0C071DDEu, 1);
L_0C071DDE: BLKS(0x0C071DDEu);
	r11 += 0x1u;  /* 0C071DDE add #imm,Rn */
	r12 = (u32)(s32)(s16)r11;  /* 0C071DE0 exts.w Rm,Rn */
	r8 = 0x1u;  /* 0C071DE2 mov #imm,Rn */
	T = (s32)r12 > (s32)r8;  /* 0C071DE4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C071DC0u, 7); goto L_0C071DC0; }  /* 0C071DE6 bf */
L_0C071DE8: BLKS(0x0C071DE8u);
	r3 = 0x1Fu;  /* 0C071DE8 mov #imm,Rn */
	r2 = 0xB4u; UPD(0x0C071DECu, 2);  /* 0C071DEA mov.w @(disp,pc),Rn */
	IF(0x0C071DECu); MACL = r9 * r2;  /* 0C071DEC mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C071DF0u, 3);  /* 0C071DEE mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C071DF0 mov #imm,Rn */
	IF(0x0C071DF2u); r13 = MACL;  /* 0C071DF2 sts macl,Rn */
	r13 += r4;  /* 0C071DF4 add Rm,Rn */
	r12 = 0x86u; UPD(0x0C071DF8u, 4);  /* 0C071DF6 mov.w @(disp,pc),Rn */
	r0 = r13;  /* 0C071DF8 mov Rm,Rn */
	IF(0x0C071DFAu); r7 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C071DFCu, 2);  /* 0C071DFA mov.w @(r0,Rm),Rn */
	r4 = r9;  /* 0C071DFC mov Rm,Rn */
	r7 += 0x8u;  /* 0C071DFE add #imm,Rn */
	IF(0x0C071E00u); r7 >>= 2;  /* 0C071E00 shlr2 Rn */
	r9 = 0xC0A0380u; UPD(0x0C071E04u, 4);  /* 0C071E02 mov.l @(disp,pc),Rn */
	IF(0x0C071E04u); r7 >>= 2;  /* 0C071E04 shlr2 Rn */
	r7 &= r3;  /* 0C071E06 and Rm,Rn */
	IF(0x0C071E08u); { u32 t_ = r9; PR = 0x0C071E0Cu; W32(r13 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C071E0Cu); }  /* 0C071E08 jsr @Rn */
L_0C071E0C: BLKS(0x0C071E0Cu);
	r6 = 0x9Au; UPD(0x0C071E0Eu, 1);  /* 0C071E0C mov.w @(disp,pc),Rn */
	r13 += r6;  /* 0C071E0E add Rm,Rn */
	{ W8(r13, r10); /* slot mov.b Rm,@Rn */ UPD(0x0C071D94u, 4); goto L_0C071D94; }  /* 0C071E10 bra */
L_0C071E20: BLKS(0x0C071E20u);
	r13 = 0xC058130u; UPD(0x0C071E22u, 1);  /* 0C071E20 mov.l @(disp,pc),Rn */
	r8 = 0xC057430u; UPD(0x0C071E24u, 1);  /* 0C071E22 mov.l @(disp,pc),Rn */
	IF(0x0C071E24u); { u32 t_ = r13; PR = 0x0C071E28u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C071E28u); }  /* 0C071E24 jsr @Rn */
L_0C071E28: BLKS(0x0C071E28u);
	r13 = 0x86u; UPD(0x0C071E2Au, 1);  /* 0C071E28 mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C071E2A mov Rm,Rn */
	r5 = 0x1u;  /* 0C071E2C mov #imm,Rn */
	IF(0x0C071E2Eu); { u32 t_ = r8; PR = 0x0C071E32u; r13 += r10; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C071E32u); }  /* 0C071E2E jsr @Rn */
L_0C071E32: BLKS(0x0C071E32u);
	r0 = (u32)(s32)(s16)R16(r13); UPD(0x0C071E34u, 1);  /* 0C071E32 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C071E34 add #imm,Rn */
	IF(0x0C071E36u); r0 >>= 2;  /* 0C071E36 shlr2 Rn */
	IF(0x0C071E38u); r0 >>= 2;  /* 0C071E38 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C071E3A and #imm,r0 */
	W32(r10 + 0xCu, r0); UPD(0x0C071E3Eu, 5);  /* 0C071E3C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A0380u; UPD(0x0C071E40u, 1);  /* 0C071E3E mov.l @(disp,pc),Rn */
	r8 = 0x9Au; UPD(0x0C071E42u, 1);  /* 0C071E40 mov.w @(disp,pc),Rn */
	IF(0x0C071E42u); { u32 t_ = r0; PR = 0x0C071E46u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C071E46u); }  /* 0C071E42 jsr @Rn */
L_0C071E46: BLKS(0x0C071E46u);
	r4 = r9;  /* 0C071E46 mov Rm,Rn */
	r9 = 0xC0A9E40u; UPD(0x0C071E4Au, 2);  /* 0C071E48 mov.l @(disp,pc),Rn */
	r8 += r10;  /* 0C071E4A add Rm,Rn */
	r5 = 0x5Au;  /* 0C071E4C mov #imm,Rn */
	IF(0x0C071E4Eu); { u32 t_ = r9; PR = 0x0C071E52u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C071E52u); }  /* 0C071E4E jsr @Rn */
L_0C071E52: BLKS(0x0C071E52u);
	r1 = r0 & 0xFF;  /* 0C071E52 extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C071E54 tst Rm,Rn */
	{ u32 c_ = T; W8(r8, r0); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C071D94u, 5); goto L_0C071D94; } UPD(0x0C071E5Au, 1); goto L_0C071E5A; }  /* 0C071E56 bt/s */
L_0C071E5A: BLKS(0x0C071E5Au);
	r5 = (u32)(s32)(s8)R8(r12); UPD(0x0C071E5Cu, 1);  /* 0C071E5A mov.b @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C071E5C tst Rm,Rn */
	if (!T) { UPD(0x0C071E90u, 4); goto L_0C071E90; }  /* 0C071E5E bf */
L_0C071E60: BLKS(0x0C071E60u);
	r10 = 0x64u;  /* 0C071E60 mov #imm,Rn */
	W8(r11, r10); UPD(0x0C071E64u, 2);  /* 0C071E62 mov.b Rm,@Rn */
L_0C071E64: BLKS(0x0C071E64u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C071D96u, 3); goto L_0C071D96; }  /* 0C071E64 bra */
L_0C071E90: BLKS(0x0C071E90u);
	r0 = 0xA9u; UPD(0x0C071E92u, 1);  /* 0C071E90 mov.w @(disp,pc),Rn */
	r11 = 0xC0A9BB0u; UPD(0x0C071E94u, 1);  /* 0C071E92 mov.l @(disp,pc),Rn */
	IF(0x0C071E94u); r7 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C071E96u, 1);  /* 0C071E94 mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C071E98u, 1);  /* 0C071E96 mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C071E98 extu.b Rm,Rn */
	IF(0x0C071E9Au); { u32 t_ = r11; PR = 0x0C071E9Eu; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C071E9Eu); }  /* 0C071E9A jsr @Rn */
L_0C071E9E: BLKS(0x0C071E9Eu);
	T = (r0 & r0) == 0;  /* 0C071E9E tst Rm,Rn */
	if (T) { UPD(0x0C071E64u, 4); goto L_0C071E64; }  /* 0C071EA0 bt */
L_0C071EA2: BLKS(0x0C071EA2u);
	W32(r14, r10); UPD(0x0C071EA4u, 1);  /* 0C071EA2 mov.l Rm,@Rn */
	r12 = 0x0u;  /* 0C071EA4 mov #imm,Rn */
	UPD(0x0C071EA6u, 1);
L_0C071EA6: BLKS(0x0C071EA6u);
	r0 = r12;  /* 0C071EA6 mov Rm,Rn */
	r4 = 0xC186BB4u; UPD(0x0C071EAAu, 2);  /* 0C071EA8 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C071EAA add Rm,Rn */
	IF(0x0C071EACu); r9 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C071EAEu, 2);  /* 0C071EAC mov.w @(r0,Rm),Rn */
	r3 = (u32)(s32)(s16)R16(r13); UPD(0x0C071EB0u, 1);  /* 0C071EAE mov.w @Rm,Rn */
	r11 = 0xC058060u; UPD(0x0C071EB2u, 1);  /* 0C071EB0 mov.l @(disp,pc),Rn */
	r3 += r9;  /* 0C071EB2 add Rm,Rn */
	r9 = (u32)(s32)(s16)r3;  /* 0C071EB4 exts.w Rm,Rn */
	r5 = 0xE0000u; UPD(0x0C071EB8u, 3);  /* 0C071EB6 mov.l @(disp,pc),Rn */
	IF(0x0C071EB8u); { u32 t_ = r11; PR = 0x0C071EBCu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C071EBCu); }  /* 0C071EB8 jsr @Rn */
L_0C071EBC: BLKS(0x0C071EBCu);
	r6 = 0x66666667u; UPD(0x0C071EBEu, 1);  /* 0C071EBC mov.l @(disp,pc),Rn */
	IF(0x0C071EBEu); r0 <<= 2;  /* 0C071EBE shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r6; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C071EC0 dmuls.l Rm,Rn */
	r7 = R32(r14); UPD(0x0C071EC4u, 4);  /* 0C071EC2 mov.l @Rm,Rn */
	r4 = r9;  /* 0C071EC4 mov Rm,Rn */
	IF(0x0C071EC6u); r1 = MACH;  /* 0C071EC6 sts mach,Rn */
	IF(0x0C071EC8u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C071EC8 shar Rn */
	IF(0x0C071ECAu); T = r0 >> 31; r0 <<= 1;  /* 0C071ECA shll Rn */
	r10 = 0xC058030u; UPD(0x0C071ECEu, 5);  /* 0C071ECC mov.l @(disp,pc),Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C071ECE subc Rm,Rn */
	r11 = R32(r7 + 0x24u); UPD(0x0C071ED2u, 2);  /* 0C071ED0 mov.l @(disp,Rm),Rn */
	r1 -= r0;  /* 0C071ED2 sub Rm,Rn */
	r5 = 0xE0000u; UPD(0x0C071ED6u, 2);  /* 0C071ED4 mov.l @(disp,pc),Rn */
	IF(0x0C071ED6u); { u32 t_ = r10; PR = 0x0C071EDAu; r11 += r1; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C071EDAu); }  /* 0C071ED6 jsr @Rn */
L_0C071EDA: BLKS(0x0C071EDAu);
	r5 = R32(r14); UPD(0x0C071EDCu, 1);  /* 0C071EDA mov.l @Rm,Rn */
	r7 = r9;  /* 0C071EDC mov Rm,Rn */
	r6 = R32(r5 + 0x28u); UPD(0x0C071EE0u, 2);  /* 0C071EDE mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C071EE0 add #imm,Rn */
	r6 += r0;  /* 0C071EE2 add Rm,Rn */
	r0 = r12;  /* 0C071EE4 mov Rm,Rn */
	r8 = 0xC186BACu; UPD(0x0C071EE8u, 4);  /* 0C071EE6 mov.l @(disp,pc),Rn */
	IF(0x0C071EE8u); r0 <<= 2;  /* 0C071EE8 shll2 Rn */
	IF(0x0C071EEAu); r2 = R32(r0 + r8); UPD(0x0C071EECu, 2);  /* 0C071EEA mov.l @(r0,Rm),Rn */
	r5 = r11;  /* 0C071EEC mov Rm,Rn */
	r4 = 0xC1779C2u; UPD(0x0C071EF0u, 2);  /* 0C071EEE mov.l @(disp,pc),Rn */
	r9 = 0xC0A8690u; UPD(0x0C071EF2u, 1);  /* 0C071EF0 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C071EF4u, 1);  /* 0C071EF2 mov.l Rm,@(disp,Rn) */
	W32(r15, r2); UPD(0x0C071EF6u, 1);  /* 0C071EF4 mov.l Rm,@Rn */
	IF(0x0C071EF6u); { u32 t_ = r9; PR = 0x0C071EFAu; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8690, 0x0C0A8690u, 0x0C071EFAu); }  /* 0C071EF6 jsr @Rn */
L_0C071EFA: BLKS(0x0C071EFAu);
	r3 = r12;  /* 0C071EFA mov Rm,Rn */
	r3 += 0x1u;  /* 0C071EFC add #imm,Rn */
	r12 = (u32)(s32)(s16)r3;  /* 0C071EFE exts.w Rm,Rn */
	r6 = 0x1u;  /* 0C071F00 mov #imm,Rn */
	T = (s32)r12 > (s32)r6;  /* 0C071F02 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C071EA6u, 8); goto L_0C071EA6; } goto L_0C071F08; }  /* 0C071F04 bf/s */
L_0C071F08: BLKS(0x0C071F08u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C071D96u, 4); goto L_0C071D96; }  /* 0C071F08 bra */
L_0C0722D0: BLKS(0x0C0722D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0722D2u, 1);  /* 0C0722D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0722D4u, 1);  /* 0C0722D2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0722D6u, 1);  /* 0C0722D4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0722D6 exts.w Rm,Rn */
	r6 = 0xB4u; UPD(0x0C0722DAu, 2);  /* 0C0722D8 mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0722DCu, 1);  /* 0C0722DA mov.l Rm,@-Rn */
	IF(0x0C0722DCu); MACL = r9 * r6;  /* 0C0722DC mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0722E0u, 3);  /* 0C0722DE mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C0722E0 exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0722E4u, 2);  /* 0C0722E2 mov.l Rm,@-Rn */
	IF(0x0C0722E4u); r8 = MACL;  /* 0C0722E4 sts macl,Rn */
	IF(0x0C0722E6u); MACL = r11 * r6;  /* 0C0722E6 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0722EAu, 4);  /* 0C0722E8 mov.l Rm,@-Rn */
	r10 = 0xC26CD40u; UPD(0x0C0722ECu, 1);  /* 0C0722EA mov.l @(disp,pc),Rn */
	IF(0x0C0722ECu); r5 = MACL;  /* 0C0722EC sts macl,Rn */
	IF(0x0C0722EEu); r15 -= 4; W32(r15, PR); UPD(0x0C0722F0u, 2);  /* 0C0722EE sts.l pr,@-Rn */
	r8 += r10;  /* 0C0722F0 add Rm,Rn */
	r5 += r10;  /* 0C0722F2 add Rm,Rn */
	r0 = R32(r8); UPD(0x0C0722F6u, 3);  /* 0C0722F4 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0722F6 add #imm,Rn */
	r2 = R32(r5); UPD(0x0C0722FAu, 2);  /* 0C0722F8 mov.l @Rm,Rn */
	r14 = r15;  /* 0C0722FA mov Rm,Rn */
	r6 = 0x100u; UPD(0x0C0722FEu, 2);  /* 0C0722FC mov.w @(disp,pc),Rn */
	r12 = 0xFFFFFEFFu; UPD(0x0C072300u, 1);  /* 0C0722FE mov.w @(disp,pc),Rn */
	r2 &= r6;  /* 0C072300 and Rm,Rn */
	r3 = R32(r5 + 0x24u); UPD(0x0C072304u, 2);  /* 0C072302 mov.l @(disp,Rm),Rn */
	r0 &= r12;  /* 0C072304 and Rm,Rn */
	r4 = R32(r5 + 0x28u); UPD(0x0C072308u, 2);  /* 0C072306 mov.l @(disp,Rm),Rn */
	r0 |= r2;  /* 0C072308 or Rm,Rn */
	r7 = R32(r8 + 0x2Cu); UPD(0x0C07230Cu, 2);  /* 0C07230A mov.l @(disp,Rm),Rn */
	T = (r0 & r6) == 0;  /* 0C07230C tst Rm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C072310u, 2);  /* 0C07230E mov.l @(disp,Rm),Rn */
	r3 += r7;  /* 0C072310 add Rm,Rn */
	r4 += r1;  /* 0C072312 add Rm,Rn */
	W32(r8, r0); UPD(0x0C072316u, 3);  /* 0C072314 mov.l Rm,@Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C072318u, 1);  /* 0C072316 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r8 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C072390u, 3); goto L_0C072390; } UPD(0x0C07231Cu, 1); goto L_0C07231C; }  /* 0C072318 bf/s */
L_0C07231C: BLKS(0x0C07231Cu);
	r2 = 0x86u; UPD(0x0C07231Eu, 1);  /* 0C07231C mov.w @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C07231E mov #imm,Rn */
	r5 = 0xFFu; UPD(0x0C072322u, 2);  /* 0C072320 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C072322 add Rm,Rn */
	r7 = 0x1FFu; UPD(0x0C072326u, 2);  /* 0C072324 mov.w @(disp,pc),Rn */
	r3 = r6;  /* 0C072326 mov Rm,Rn */
	UPD(0x0C072328u, 1);
L_0C072328: BLKS(0x0C072328u);
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C07232Au, 1);  /* 0C072328 mov.w @Rm,Rn */
	r11 = r1;  /* 0C07232A mov Rm,Rn */
	r11 &= r7;  /* 0C07232C and Rm,Rn */
	T = (s32)r11 > (s32)r5;  /* 0C07232E cmp/gt Rm,Rn */
	{ u32 c_ = T; T = (s32)r11 > (s32)r3; /* slot cmp/gt Rm,Rn */ if (c_) { UPD(0x0C07233Au, 6); goto L_0C07233A; } goto L_0C072334; }  /* 0C072330 bt/s */
L_0C072334: BLKS(0x0C072334u);
	r1 += 0x1u;  /* 0C072334 add #imm,Rn */
	W16(r2, r1); UPD(0x0C072338u, 3);  /* 0C072336 mov.w Rm,@Rn */
	T = (s32)r11 > (s32)r3;  /* 0C072338 cmp/gt Rm,Rn */
	UPD(0x0C07233Au, 1);
L_0C07233A: BLKS(0x0C07233Au);
	{ u32 c_ = !T; r13 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C072346u, 3); goto L_0C072346; } goto L_0C07233E; }  /* 0C07233A bf/s */
L_0C07233E: BLKS(0x0C07233Eu);
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C072340u, 2);  /* 0C07233E mov.w @Rm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C072340 add #imm,Rn */
	W16(r2, r0); UPD(0x0C072344u, 2);  /* 0C072342 mov.w Rm,@Rn */
	r13 = r12;  /* 0C072344 mov Rm,Rn */
	UPD(0x0C072346u, 1);
L_0C072346: BLKS(0x0C072346u);
	r13 += 0x1u;  /* 0C072346 add #imm,Rn */
	r12 = (u32)(s32)(s16)r13;  /* 0C072348 exts.w Rm,Rn */
	r8 = 0x3u;  /* 0C07234A mov #imm,Rn */
	T = (s32)r12 > (s32)r8;  /* 0C07234C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C072328u, 7); goto L_0C072328; }  /* 0C07234E bf */
L_0C072350: BLKS(0x0C072350u);
	r3 = 0x1Fu;  /* 0C072350 mov #imm,Rn */
	r6 = 0xB4u; UPD(0x0C072354u, 2);  /* 0C072352 mov.w @(disp,pc),Rn */
	IF(0x0C072354u); MACL = r9 * r6;  /* 0C072354 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C072358u, 3);  /* 0C072356 mov.l @(disp,pc),Rn */
	IF(0x0C072358u); r10 = MACL;  /* 0C072358 sts macl,Rn */
	r10 += r2;  /* 0C07235A add Rm,Rn */
	r7 = 0x86u; UPD(0x0C07235Eu, 3);  /* 0C07235C mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C07235E mov Rm,Rn */
	IF(0x0C072360u); r4 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C072362u, 2);  /* 0C072360 mov.w @(r0,Rm),Rn */
	r4 += 0x8u;  /* 0C072362 add #imm,Rn */
	IF(0x0C072364u); r4 >>= 2;  /* 0C072364 shlr2 Rn */
	IF(0x0C072366u); r4 >>= 2;  /* 0C072366 shlr2 Rn */
	r4 &= r3;  /* 0C072368 and Rm,Rn */
	W32(r10 + 0xCu, r4); UPD(0x0C07236Cu, 5);  /* 0C07236A mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A0380u; UPD(0x0C07236Eu, 1);  /* 0C07236C mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C07236E mov Rm,Rn */
	r9 = 0x9Au; UPD(0x0C072372u, 2);  /* 0C072370 mov.w @(disp,pc),Rn */
	IF(0x0C072372u); { u32 t_ = r5; PR = 0x0C072376u; r11 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C072376u); }  /* 0C072372 jsr @Rn */
L_0C072376: BLKS(0x0C072376u);
	r10 += r9;  /* 0C072376 add Rm,Rn */
	W8(r10, r11); UPD(0x0C07237Au, 2);  /* 0C072378 mov.b Rm,@Rn */
L_0C07237A: BLKS(0x0C07237Au);
	r14 += 0x4u;  /* 0C07237A add #imm,Rn */
	UPD(0x0C07237Cu, 1);
L_0C07237C: BLKS(0x0C07237Cu);
	r15 = r14;  /* 0C07237C mov Rm,Rn */
	IF(0x0C07237Eu); PR = R32(r15); r15 += 4; UPD(0x0C072380u, 2);  /* 0C07237E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C072382u, 1);  /* 0C072380 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C072384u, 1);  /* 0C072382 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C072386u, 1);  /* 0C072384 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C072388u, 1);  /* 0C072386 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07238Au, 1);  /* 0C072388 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07238Cu, 1);  /* 0C07238A mov.l @Rm+,Rn */
	IF(0x0C07238Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07238C rts */
L_0C072390: BLKS(0x0C072390u);
	r10 = 0x9Cu; UPD(0x0C072392u, 1);  /* 0C072390 mov.w @(disp,pc),Rn */
	r10 += r8;  /* 0C072392 add Rm,Rn */
	r3 = r10;  /* 0C072394 mov Rm,Rn */
	r3 += 0x3u;  /* 0C072396 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C07239Au, 4);  /* 0C072398 mov.b @Rm,Rn */
	r2 = r1 & 0xFF;  /* 0C07239A extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07239C tst Rm,Rn */
	{ u32 c_ = !T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0723A6u, 5); goto L_0C0723A6; } goto L_0C0723A2; }  /* 0C07239E bf/s */
L_0C0723A2: BLKS(0x0C0723A2u);
	{ IF(0x0C0723A4u); ; /* slot nop */ UPD(0x0C0724A0u, 4); goto L_0C0724A0; }  /* 0C0723A2 bra */
L_0C0723A6: BLKS(0x0C0723A6u);
	T = r0 == 0x1u;  /* 0C0723A6 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C07237Au, 4); goto L_0C07237A; }  /* 0C0723A8 bf */
L_0C0723AA: BLKS(0x0C0723AAu);
	r12 = 0xC058130u; UPD(0x0C0723ACu, 1);  /* 0C0723AA mov.l @(disp,pc),Rn */
	r11 = 0xC057430u; UPD(0x0C0723AEu, 1);  /* 0C0723AC mov.l @(disp,pc),Rn */
	IF(0x0C0723AEu); { u32 t_ = r12; PR = 0x0C0723B2u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C0723B2u); }  /* 0C0723AE jsr @Rn */
L_0C0723B2: BLKS(0x0C0723B2u);
	r10 = 0x86u; UPD(0x0C0723B4u, 1);  /* 0C0723B2 mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0723B4 mov #imm,Rn */
	r4 = r9;  /* 0C0723B6 mov Rm,Rn */
	IF(0x0C0723B8u); { u32 t_ = r11; PR = 0x0C0723BCu; r10 += r8; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C0723BCu); }  /* 0C0723B8 jsr @Rn */
L_0C0723BC: BLKS(0x0C0723BCu);
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0723BEu, 1);  /* 0C0723BC mov.w @Rm,Rn */
	r4 = r9;  /* 0C0723BE mov Rm,Rn */
	r0 += 0x8u;  /* 0C0723C0 add #imm,Rn */
	r3 = 0xC0A0380u; UPD(0x0C0723C4u, 3);  /* 0C0723C2 mov.l @(disp,pc),Rn */
	IF(0x0C0723C4u); r0 >>= 2;  /* 0C0723C4 shlr2 Rn */
	IF(0x0C0723C6u); r0 >>= 2;  /* 0C0723C6 shlr2 Rn */
	r13 = 0xC0A9E40u; UPD(0x0C0723CAu, 3);  /* 0C0723C8 mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C0723CA and #imm,r0 */
	IF(0x0C0723CCu); { u32 t_ = r3; PR = 0x0C0723D0u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0723D0u); }  /* 0C0723CC jsr @Rn */
L_0C0723D0: BLKS(0x0C0723D0u);
	r4 = r9;  /* 0C0723D0 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C0723D2 mov #imm,Rn */
	IF(0x0C0723D4u); { u32 t_ = r13; PR = 0x0C0723D8u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0723D8u); }  /* 0C0723D4 jsr @Rn */
L_0C0723D8: BLKS(0x0C0723D8u);
	T = (r0 & r0) == 0;  /* 0C0723D8 tst Rm,Rn */
	if (T) { UPD(0x0C07237Au, 4); goto L_0C07237A; }  /* 0C0723DA bt */
L_0C0723DC: BLKS(0x0C0723DCu);
	r4 = R32(r8 + 0x24u); UPD(0x0C0723DEu, 1);  /* 0C0723DC mov.l @(disp,Rm),Rn */
	r0 = 0xA9u; UPD(0x0C0723E0u, 1);  /* 0C0723DE mov.w @(disp,pc),Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C0723E2u, 1);  /* 0C0723E0 mov.l @(disp,pc),Rn */
	IF(0x0C0723E2u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0723E4u, 1);  /* 0C0723E2 mov.b @(r0,Rm),Rn */
	r6 = r1 & 0xFF;  /* 0C0723E4 extu.b Rm,Rn */
	IF(0x0C0723E6u); { u32 t_ = r9; PR = 0x0C0723EAu; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0723EAu); }  /* 0C0723E6 jsr @Rn */
L_0C0723EA: BLKS(0x0C0723EAu);
	T = (r0 & r0) == 0;  /* 0C0723EA tst Rm,Rn */
	if (T) { UPD(0x0C07237Au, 4); goto L_0C07237A; }  /* 0C0723EC bt */
L_0C0723EE: BLKS(0x0C0723EEu);
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C0723F0u, 1);  /* 0C0723EE mov.w @Rm,Rn */
	r12 = 0x0u;  /* 0C0723F0 mov #imm,Rn */
	W32(r14, r10); UPD(0x0C0723F4u, 2);  /* 0C0723F2 mov.l Rm,@Rn */
	r13 = r8;  /* 0C0723F4 mov Rm,Rn */
	UPD(0x0C0723F6u, 1);
L_0C0723F6: BLKS(0x0C0723F6u);
	r0 = r12;  /* 0C0723F6 mov Rm,Rn */
	r4 = 0xC186BD0u; UPD(0x0C0723FAu, 2);  /* 0C0723F8 mov.l @(disp,pc),Rn */
	IF(0x0C0723FAu); r0 <<= 2;  /* 0C0723FA shll2 Rn */
	r9 = 0xC058060u; UPD(0x0C0723FEu, 2);  /* 0C0723FC mov.l @(disp,pc),Rn */
	IF(0x0C0723FEu); r10 = R32(r0 + r4); UPD(0x0C072400u, 1);  /* 0C0723FE mov.l @(r0,Rm),Rn */
	r8 = R32(r14); UPD(0x0C072402u, 1);  /* 0C072400 mov.l @Rm,Rn */
	r5 = 0x140000u; UPD(0x0C072404u, 1);  /* 0C072402 mov.l @(disp,pc),Rn */
	IF(0x0C072404u); { u32 t_ = r9; PR = 0x0C072408u; r4 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C072408u); }  /* 0C072404 jsr @Rn */
L_0C072408: BLKS(0x0C072408u);
	r7 = 0xC058030u; UPD(0x0C07240Au, 1);  /* 0C072408 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07240A mov Rm,Rn */
	r9 = R32(r13 + 0x24u); UPD(0x0C07240Eu, 2);  /* 0C07240C mov.l @(disp,Rm),Rn */
	r5 = r10;  /* 0C07240E mov Rm,Rn */
	IF(0x0C072410u); { u32 t_ = r7; PR = 0x0C072414u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C072414u); }  /* 0C072410 jsr @Rn */
L_0C072414: BLKS(0x0C072414u);
	r3 = 0xC058030u; UPD(0x0C072416u, 1);  /* 0C072414 mov.l @(disp,pc),Rn */
	r9 -= r0;  /* 0C072416 sub Rm,Rn */
	r5 = 0x20000u; UPD(0x0C07241Au, 2);  /* 0C072418 mov.l @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C07241Cu, 1);  /* 0C07241A mov.l @Rm,Rn */
	r9 += r5;  /* 0C07241C add Rm,Rn */
	r5 = 0x140000u; UPD(0x0C072420u, 2);  /* 0C07241E mov.l @(disp,pc),Rn */
	IF(0x0C072420u); { u32 t_ = r3; PR = 0x0C072424u; r4 = (u32)(s32)(s16)R16(r0); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C072424u); }  /* 0C072420 jsr @Rn */
L_0C072424: BLKS(0x0C072424u);
	r6 = 0xC058060u; UPD(0x0C072426u, 1);  /* 0C072424 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C072426 mov Rm,Rn */
	r8 = R32(r13 + 0x28u); UPD(0x0C07242Au, 2);  /* 0C072428 mov.l @(disp,Rm),Rn */
	r5 = r10;  /* 0C07242A mov Rm,Rn */
	IF(0x0C07242Cu); { u32 t_ = r6; PR = 0x0C072430u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C072430u); }  /* 0C07242C jsr @Rn */
L_0C072430: BLKS(0x0C072430u);
	r8 += r0;  /* 0C072430 add Rm,Rn */
	r6 = r8;  /* 0C072432 mov Rm,Rn */
	r8 = 0xC0A8A50u; UPD(0x0C072436u, 3);  /* 0C072434 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C072436 add #imm,Rn */
	r2 = 0x38000u; UPD(0x0C07243Au, 2);  /* 0C072438 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C07243A mov #imm,Rn */
	W32(r15, r2); UPD(0x0C07243Eu, 2);  /* 0C07243C mov.l Rm,@Rn */
	r7 = r11;  /* 0C07243E mov Rm,Rn */
	IF(0x0C072440u); { u32 t_ = r8; PR = 0x0C072444u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A8A50, 0x0C0A8A50u, 0x0C072444u); }  /* 0C072440 jsr @Rn */
L_0C072444: BLKS(0x0C072444u);
	r7 = r12;  /* 0C072444 mov Rm,Rn */
	r7 += 0x1u;  /* 0C072446 add #imm,Rn */
	r12 = (u32)(s32)(s16)r7;  /* 0C072448 exts.w Rm,Rn */
	r4 = 0x1u;  /* 0C07244A mov #imm,Rn */
	T = (s32)r12 > (s32)r4;  /* 0C07244C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0723F6u, 8); goto L_0C0723F6; } UPD(0x0C072452u, 1); goto L_0C072452; }  /* 0C07244E bf/s */
L_0C072452: BLKS(0x0C072452u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07237Cu, 3); goto L_0C07237C; }  /* 0C072452 bra */
L_0C0724A0: BLKS(0x0C0724A0u);
	r0 = 0xA5u; UPD(0x0C0724A2u, 1);  /* 0C0724A0 mov.w @(disp,pc),Rn */
	IF(0x0C0724A2u); r0 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0724A4u, 1);  /* 0C0724A2 mov.b @(r0,Rm),Rn */
	T = r0 == 0x2u;  /* 0C0724A4 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C072510u, 4); goto L_0C072510; }  /* 0C0724A6 bt */
L_0C0724A8: BLKS(0x0C0724A8u);
	r12 = (u32)(s32)(s8)R8(r10); UPD(0x0C0724AAu, 1);  /* 0C0724A8 mov.b @Rm,Rn */
	r11 = 0x9Au; UPD(0x0C0724ACu, 1);  /* 0C0724AA mov.w @(disp,pc),Rn */
	r11 += r8;  /* 0C0724AC add Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C0724AE tst Rm,Rn */
	{ u32 c_ = !T; W8(r11, r2); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0724F0u, 5); goto L_0C0724F0; } UPD(0x0C0724B4u, 1); goto L_0C0724B4; }  /* 0C0724B0 bf/s */
L_0C0724B4: BLKS(0x0C0724B4u);
	r11 = 0xC058130u; UPD(0x0C0724B6u, 1);  /* 0C0724B4 mov.l @(disp,pc),Rn */
	r13 = 0xC057430u; UPD(0x0C0724B8u, 1);  /* 0C0724B6 mov.l @(disp,pc),Rn */
	IF(0x0C0724B8u); { u32 t_ = r11; PR = 0x0C0724BCu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C0724BCu); }  /* 0C0724B8 jsr @Rn */
L_0C0724BC: BLKS(0x0C0724BCu);
	r5 = 0x2u;  /* 0C0724BC mov #imm,Rn */
	IF(0x0C0724BEu); { u32 t_ = r13; PR = 0x0C0724C2u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C0724C2u); }  /* 0C0724BE jsr @Rn */
L_0C0724C2: BLKS(0x0C0724C2u);
	r0 = 0x86u; UPD(0x0C0724C4u, 1);  /* 0C0724C2 mov.w @(disp,pc),Rn */
	IF(0x0C0724C4u); r0 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0724C6u, 1);  /* 0C0724C4 mov.w @(r0,Rm),Rn */
	r0 += 0x8u;  /* 0C0724C6 add #imm,Rn */
	IF(0x0C0724C8u); r0 >>= 2;  /* 0C0724C8 shlr2 Rn */
	IF(0x0C0724CAu); r0 >>= 2;  /* 0C0724CA shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C0724CC and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C0724D0u, 5);  /* 0C0724CE mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A0380u; UPD(0x0C0724D2u, 1);  /* 0C0724D0 mov.l @(disp,pc),Rn */
	r8 = 0xC0A9E40u; UPD(0x0C0724D4u, 1);  /* 0C0724D2 mov.l @(disp,pc),Rn */
	IF(0x0C0724D4u); { u32 t_ = r0; PR = 0x0C0724D8u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0724D8u); }  /* 0C0724D4 jsr @Rn */
L_0C0724D8: BLKS(0x0C0724D8u);
	r4 = r9;  /* 0C0724D8 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C0724DA mov #imm,Rn */
	IF(0x0C0724DCu); { u32 t_ = r8; PR = 0x0C0724E0u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0724E0u); }  /* 0C0724DC jsr @Rn */
L_0C0724E0: BLKS(0x0C0724E0u);
	T = (r0 & r0) == 0;  /* 0C0724E0 tst Rm,Rn */
	if (T) { UPD(0x0C072452u, 4); goto L_0C072452; }  /* 0C0724E2 bt */
L_0C0724E4: BLKS(0x0C0724E4u);
	r9 = 0x6u;  /* 0C0724E4 mov #imm,Rn */
	W8(r10, r9); UPD(0x0C0724E8u, 2);  /* 0C0724E6 mov.b Rm,@Rn */
L_0C0724E8: BLKS(0x0C0724E8u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07237Cu, 3); goto L_0C07237C; }  /* 0C0724E8 bra */
L_0C0724F0: BLKS(0x0C0724F0u);
	r12 = 0xC0A9E40u; UPD(0x0C0724F2u, 1);  /* 0C0724F0 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0724F2 mov Rm,Rn */
	r5 = 0x10u;  /* 0C0724F4 mov #imm,Rn */
	IF(0x0C0724F6u); { u32 t_ = r12; PR = 0x0C0724FAu; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0724FAu); }  /* 0C0724F6 jsr @Rn */
L_0C0724FA: BLKS(0x0C0724FAu);
	T = (r0 & r0) == 0;  /* 0C0724FA tst Rm,Rn */
	if (T) { UPD(0x0C0724E8u, 4); goto L_0C0724E8; }  /* 0C0724FC bt */
L_0C0724FE: BLKS(0x0C0724FEu);
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C072500u, 1);  /* 0C0724FE mov.b @Rm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C072500 add #imm,Rn */
	W8(r10, r5); UPD(0x0C072504u, 2);  /* 0C072502 mov.b Rm,@Rn */
	r10 = 0x1u;  /* 0C072504 mov #imm,Rn */
	{ W8(r11, r10); /* slot mov.b Rm,@Rn */ UPD(0x0C07237Au, 4); goto L_0C07237A; }  /* 0C072506 bra */
L_0C072510: BLKS(0x0C072510u);
	r1 += 0x1u;  /* 0C072510 add #imm,Rn */
	{ W8(r3, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C07237Au, 4); goto L_0C07237A; }  /* 0C072512 bra */
L_0C072D60: BLKS(0x0C072D60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C072D62u, 1);  /* 0C072D60 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C072D64u, 1);  /* 0C072D62 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C072D66u, 1);  /* 0C072D64 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C072D68u, 1);  /* 0C072D66 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C072D6Au, 1);  /* 0C072D68 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C072D6Cu, 1);  /* 0C072D6A mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C072D6C exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C072D70u, 2);  /* 0C072D6E mov.l Rm,@-Rn */
	IF(0x0C072D70u); MACL = r12 * r3;  /* 0C072D70 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072D74u, 3);  /* 0C072D72 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C072D76u, 1);  /* 0C072D74 mov.l @(disp,pc),Rn */
	IF(0x0C072D76u); r2 = MACL;  /* 0C072D76 sts macl,Rn */
	IF(0x0C072D78u); r15 -= 4; W32(r15, PR); UPD(0x0C072D7Au, 2);  /* 0C072D78 sts.l pr,@-Rn */
	r0 += r2;  /* 0C072D7A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C072D7Eu, 2);  /* 0C072D7C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C072D7E add #imm,Rn */
	r0 = 0x47u;  /* 0C072D80 mov #imm,Rn */
	T = r2 > r0;  /* 0C072D82 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C072D8Cu, 6); goto L_0C072D8C; } goto L_0C072D88; }  /* 0C072D84 bf/s */
L_0C072D88: BLKS(0x0C072D88u);
	{ IF(0x0C072D8Au); ; /* slot nop */ UPD(0x0C072FB0u, 4); goto L_0C072FB0; }  /* 0C072D88 bra */
L_0C072D8C: BLKS(0x0C072D8Cu);
	r0 = 0xC072D9Cu;  /* 0C072D8C mova @(disp,pc),r0 */
	r2 += r2;  /* 0C072D8E add Rm,Rn */
	IF(0x0C072D90u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C072D92u, 3);  /* 0C072D90 mov.w @(r0,Rm),Rn */
	IF(0x0C072D92u); { u32 tv_ = (r4 + 0x0C072D96u); u32 t_ = PHYS(tv_); IF(0x0C072D94u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C072E30u: goto L_0C072E30; case 0x0C072FB0u: goto L_0C072FB0; case 0x0C0730C0u: goto L_0C0730C0; case 0x0C073210u: goto L_0C073210; case 0x0C0733E0u: goto L_0C0733E0; case 0x0C073410u: goto L_0C073410; case 0x0C073430u: goto L_0C073430; case 0x0C073450u: goto L_0C073450; case 0x0C073470u: goto L_0C073470; case 0x0C0734B0u: goto L_0C0734B0; case 0x0C073580u: goto L_0C073580; case 0x0C073690u: goto L_0C073690; case 0x0C0737A0u: goto L_0C0737A0; case 0x0C0737F0u: goto L_0C0737F0; case 0x0C0738E0u: goto L_0C0738E0; case 0x0C0739F0u: goto L_0C0739F0; case 0x0C073A70u: goto L_0C073A70; case 0x0C073A90u: goto L_0C073A90; default: JUMPD(tv_); } }  /* 0C072D92 braf Rn */
L_0C072E30: BLKS(0x0C072E30u);
	r7 = 0xB4u; UPD(0x0C072E32u, 1);  /* 0C072E30 mov.w @(disp,pc),Rn */
	IF(0x0C072E32u); MACL = r12 * r7;  /* 0C072E32 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C072E36u, 3);  /* 0C072E34 mov.l @(disp,pc),Rn */
	IF(0x0C072E36u); r8 = MACL;  /* 0C072E36 sts macl,Rn */
	r8 += r6;  /* 0C072E38 add Rm,Rn */
	r1 = R32(r8); UPD(0x0C072E3Cu, 3);  /* 0C072E3A mov.l @Rm,Rn */
	r5 = 0x40000000u; UPD(0x0C072E3Eu, 1);  /* 0C072E3C mov.l @(disp,pc),Rn */
	T = (r1 & r5) == 0;  /* 0C072E3E tst Rm,Rn */
	if (!T) { UPD(0x0C072F20u, 4); goto L_0C072F20; }  /* 0C072E40 bf */
L_0C072E42: BLKS(0x0C072E42u);
	r0 = 0xA5u; UPD(0x0C072E44u, 1);  /* 0C072E42 mov.w @(disp,pc),Rn */
	IF(0x0C072E44u); r0 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C072E46u, 1);  /* 0C072E44 mov.b @(r0,Rm),Rn */
	T = (r0 & 0x9u) == 0;  /* 0C072E46 tst #imm,r0 */
	IF(0x0C072E48u); r9 = T;  /* 0C072E48 movt Rn */
	T = (r0 & 0x6u) == 0;  /* 0C072E4A tst #imm,r0 */
	IF(0x0C072E4Cu); r10 = T;  /* 0C072E4C movt Rn */
	r9 |= r10;  /* 0C072E4E or Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C072E50 tst Rm,Rn */
	if (!T) { UPD(0x0C072EF0u, 9); goto L_0C072EF0; }  /* 0C072E52 bf */
L_0C072E54: BLKS(0x0C072E54u);
	r11 = 0xC0A1830u; UPD(0x0C072E56u, 1);  /* 0C072E54 mov.l @(disp,pc),Rn */
	IF(0x0C072E56u); { u32 t_ = r11; PR = 0x0C072E5Au; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1830, 0x0C0A1830u, 0x0C072E5Au); }  /* 0C072E56 jsr @Rn */
L_0C072E5A: BLKS(0x0C072E5Au);
	T = (r0 & r0) == 0;  /* 0C072E5A tst Rm,Rn */
	if (!T) { UPD(0x0C072E80u, 4); goto L_0C072E80; }  /* 0C072E5C bf */
L_0C072E5E: BLKS(0x0C072E5Eu);
	IF(0x0C072E5Eu); ;  /* 0C072E5E nop */
	UPD(0x0C072E60u, 1);
L_0C072E60: BLKS(0x0C072E60u);
	r14 += 0x4u;  /* 0C072E60 add #imm,Rn */
	UPD(0x0C072E62u, 1);
L_0C072E62: BLKS(0x0C072E62u);
	r15 = r14;  /* 0C072E62 mov Rm,Rn */
	IF(0x0C072E64u); PR = R32(r15); r15 += 4; UPD(0x0C072E66u, 2);  /* 0C072E64 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C072E68u, 1);  /* 0C072E66 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C072E6Au, 1);  /* 0C072E68 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C072E6Cu, 1);  /* 0C072E6A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C072E6Eu, 1);  /* 0C072E6C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C072E70u, 1);  /* 0C072E6E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C072E72u, 1);  /* 0C072E70 mov.l @Rm+,Rn */
	IF(0x0C072E72u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C072E72 rts */
L_0C072E80: BLKS(0x0C072E80u);
	r4 = r12;  /* 0C072E80 mov Rm,Rn */
	r12 = 0xC072800u; UPD(0x0C072E84u, 2);  /* 0C072E82 mov.l @(disp,pc),Rn */
	r13 = 0xC06CC20u; UPD(0x0C072E86u, 1);  /* 0C072E84 mov.l @(disp,pc),Rn */
	IF(0x0C072E86u); { u32 t_ = r12; PR = 0x0C072E8Au; r10 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C072800, 0x0C072800u, 0x0C072E8Au); }  /* 0C072E86 jsr @Rn */
L_0C072E8A: BLKS(0x0C072E8Au);
	r12 = 0x48000u; UPD(0x0C072E8Cu, 1);  /* 0C072E8A mov.l @(disp,pc),Rn */
	r9 = r8;  /* 0C072E8C mov Rm,Rn */
	UPD(0x0C072E8Eu, 1);
L_0C072E8E: BLKS(0x0C072E8Eu);
	r3 = R32(r9 + 0x28u); UPD(0x0C072E90u, 1);  /* 0C072E8E mov.l @(disp,Rm),Rn */
	r0 = 0xFFFFFFFAu;  /* 0C072E90 mov #imm,Rn */
	r1 = (r3 >> 16) | (r3 << 16);  /* 0C072E92 swap.w Rm,Rn */
	r2 = 0xFFFFFEA0u; UPD(0x0C072E96u, 3);  /* 0C072E94 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r1;  /* 0C072E96 exts.w Rm,Rn */
	r11 += r2;  /* 0C072E98 add Rm,Rn */
	IF(0x0C072E9Au); ARG0(0x4B0Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r11 <<= (s_ & 31); else if ((s_ & 31) == 0) r11 = (u32)((s32)r11 >> 31); else r11 = (u32)((s32)r11 >> ((~s_ & 31) + 1)); }  /* 0C072E9A shad Rm,Rn */
	r0 = 0xC050D70u; UPD(0x0C072E9Eu, 4);  /* 0C072E9C mov.l @(disp,pc),Rn */
	r11 += r11;  /* 0C072E9E add Rm,Rn */
	r7 = 0xC186C00u; UPD(0x0C072EA2u, 2);  /* 0C072EA0 mov.l @(disp,pc),Rn */
	r4 = 0x40u;  /* 0C072EA2 mov #imm,Rn */
	IF(0x0C072EA4u); { u32 t_ = r0; PR = 0x0C072EA8u; r11 += r7; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C072EA8u); }  /* 0C072EA4 jsr @Rn */
L_0C072EA8: BLKS(0x0C072EA8u);
	r6 = (u32)(s32)(s16)R16(r11); UPD(0x0C072EAAu, 1);  /* 0C072EA8 mov.w @Rm,Rn */
	r5 = r12;  /* 0C072EAA mov Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C072EAEu, 2);  /* 0C072EAC mov.l @(disp,pc),Rn */
	r0 += r6;  /* 0C072EAE add Rm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C072EB0 exts.w Rm,Rn */
	IF(0x0C072EB2u); { u32 t_ = r8; PR = 0x0C072EB6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C072EB6u); }  /* 0C072EB2 jsr @Rn */
L_0C072EB6: BLKS(0x0C072EB6u);
	r4 = r11;  /* 0C072EB6 mov Rm,Rn */
	r11 = 0xC058030u; UPD(0x0C072EBAu, 2);  /* 0C072EB8 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C072EBA mov Rm,Rn */
	IF(0x0C072EBCu); { u32 t_ = r11; PR = 0x0C072EC0u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C072EC0u); }  /* 0C072EBC jsr @Rn */
L_0C072EC0: BLKS(0x0C072EC0u);
	r3 = r0;  /* 0C072EC0 mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C072EC4u, 2);  /* 0C072EC2 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C072EC4 mov Rm,Rn */
	IF(0x0C072EC6u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C072EC8u, 2);  /* 0C072EC6 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C072EC8 add #imm,Rn */
	W32(r15, r8); UPD(0x0C072ECCu, 2);  /* 0C072ECA mov.l Rm,@Rn */
	r7 = r4 & 0xFF;  /* 0C072ECC extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C072ED0u, 2);  /* 0C072ECE mov.l Rm,@(disp,Rn) */
	r4 = 0x3u;  /* 0C072ED0 mov #imm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C072ED4u, 2);  /* 0C072ED2 mov.l @(disp,Rm),Rn */
	IF(0x0C072ED4u); { u32 t_ = r13; PR = 0x0C072ED8u; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C072ED8u); }  /* 0C072ED4 jsr @Rn */
L_0C072ED8: BLKS(0x0C072ED8u);
	r2 = r10;  /* 0C072ED8 mov Rm,Rn */
	r2 += 0x1u;  /* 0C072EDA add #imm,Rn */
	r10 = (u32)(s32)(s16)r2;  /* 0C072EDC exts.w Rm,Rn */
	r0 = 0x9u;  /* 0C072EDE mov #imm,Rn */
	T = (s32)r10 > (s32)r0;  /* 0C072EE0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C072E8Eu, 8); goto L_0C072E8E; } goto L_0C072EE6; }  /* 0C072EE2 bf/s */
L_0C072EE6: BLKS(0x0C072EE6u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C072E62u, 4); goto L_0C072E62; }  /* 0C072EE6 bra */
L_0C072EF0: BLKS(0x0C072EF0u);
	r8 = 0xC0A1700u; UPD(0x0C072EF2u, 1);  /* 0C072EF0 mov.l @(disp,pc),Rn */
	IF(0x0C072EF2u); { u32 t_ = r8; PR = 0x0C072EF6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C072EF6u); }  /* 0C072EF2 jsr @Rn */
L_0C072EF6: BLKS(0x0C072EF6u);
	r1 = 0xC0A1590u; UPD(0x0C072EF8u, 1);  /* 0C072EF6 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C072EF8 mov Rm,Rn */
	IF(0x0C072EFAu); ;  /* 0C072EFA nop */
	UPD(0x0C072EFCu, 2);
L_0C072EFC: BLKS(0x0C072EFCu);
	r14 += 0x4u;  /* 0C072EFC add #imm,Rn */
	r15 = r14;  /* 0C072EFE mov Rm,Rn */
	IF(0x0C072F00u); PR = R32(r15); r15 += 4; UPD(0x0C072F02u, 3);  /* 0C072F00 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C072F04u, 1);  /* 0C072F02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C072F06u, 1);  /* 0C072F04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C072F08u, 1);  /* 0C072F06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C072F0Au, 1);  /* 0C072F08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C072F0Cu, 1);  /* 0C072F0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C072F0Eu, 1);  /* 0C072F0C mov.l @Rm+,Rn */
	IF(0x0C072F0Eu); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0580D0u: TAIL(f_0C0580D0); case 0x0C072800u: TAIL(f_0C072800); default: JUMPD(tv_); } }  /* 0C072F0E jmp @Rn */
L_0C072F20: BLKS(0x0C072F20u);
	r13 = 0xC0A03F0u; UPD(0x0C072F22u, 1);  /* 0C072F20 mov.l @(disp,pc),Rn */
	IF(0x0C072F22u); { u32 t_ = r13; PR = 0x0C072F26u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C072F26u); }  /* 0C072F22 jsr @Rn */
L_0C072F26: BLKS(0x0C072F26u);
	IF(0x0C072F26u); T = (s32)r0 >= 0;  /* 0C072F26 cmp/pz Rn */
	{ u32 c_ = !T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C072F60u, 4); goto L_0C072F60; } goto L_0C072F2C; }  /* 0C072F28 bf/s */
L_0C072F2C: BLKS(0x0C072F2Cu);
	r0 = 0xB4u; UPD(0x0C072F2Eu, 2);  /* 0C072F2C mov.w @(disp,pc),Rn */
	IF(0x0C072F2Eu); MACL = r12 * r0;  /* 0C072F2E mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C072F32u, 3);  /* 0C072F30 mov.l @(disp,pc),Rn */
	IF(0x0C072F32u); r12 = MACL;  /* 0C072F32 sts macl,Rn */
	IF(0x0C072F34u); MACL = r10 * r0;  /* 0C072F34 mul.l Rm,Rn */
	r12 += r2;  /* 0C072F36 add Rm,Rn */
	r11 = R32(r12); UPD(0x0C072F3Au, 5);  /* 0C072F38 mov.l @Rm,Rn */
	IF(0x0C072F3Au); r8 = MACL;  /* 0C072F3A sts macl,Rn */
	r8 += r2;  /* 0C072F3C add Rm,Rn */
	r7 = R32(r8); UPD(0x0C072F40u, 3);  /* 0C072F3E mov.l @Rm,Rn */
	r0 += 0x4Cu;  /* 0C072F40 add #imm,Rn */
	r3 = 0xFFFFFEFFu; UPD(0x0C072F44u, 2);  /* 0C072F42 mov.w @(disp,pc),Rn */
	r7 &= r0;  /* 0C072F44 and Rm,Rn */
	r11 &= r3;  /* 0C072F46 and Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C072F4Au, 3);  /* 0C072F48 mov.l @(disp,Rm),Rn */
	r11 |= r7;  /* 0C072F4A or Rm,Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C072F4Eu, 2);  /* 0C072F4C mov.l @(disp,Rm),Rn */
	W32(r12, r11); UPD(0x0C072F50u, 1);  /* 0C072F4E mov.l Rm,@Rn */
	W32(r12 + 0x24u, r6); UPD(0x0C072F52u, 1);  /* 0C072F50 mov.l Rm,@(disp,Rn) */
	{ W32(r12 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C072E60u, 3); goto L_0C072E60; }  /* 0C072F52 bra */
L_0C072F60: BLKS(0x0C072F60u);
	r4 = 0xB4u; UPD(0x0C072F62u, 1);  /* 0C072F60 mov.w @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C072F62 mov #imm,Rn */
	IF(0x0C072F64u); MACL = r12 * r4;  /* 0C072F64 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C072F68u, 4);  /* 0C072F66 mov.l @(disp,pc),Rn */
	IF(0x0C072F68u); r0 = MACL;  /* 0C072F68 sts macl,Rn */
	IF(0x0C072F6Au); W32(r0 + r9, r10); UPD(0x0C072F6Cu, 2);  /* 0C072F6A mov.l Rm,@(r0,Rn) */
L_0C072F6C: BLKS(0x0C072F6Cu);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C072E62u, 3); goto L_0C072E62; }  /* 0C072F6C bra */
L_0C072FB0: BLKS(0x0C072FB0u);
	r13 = 0xC0A03F0u; UPD(0x0C072FB2u, 1);  /* 0C072FB0 mov.l @(disp,pc),Rn */
	IF(0x0C072FB2u); { u32 t_ = r13; PR = 0x0C072FB6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C072FB6u); }  /* 0C072FB2 jsr @Rn */
L_0C072FB6: BLKS(0x0C072FB6u);
	IF(0x0C072FB6u); T = (s32)r0 >= 0;  /* 0C072FB6 cmp/pz Rn */
	if (T) { UPD(0x0C072FBEu, 4); goto L_0C072FBE; }  /* 0C072FB8 bt */
L_0C072FBA: BLKS(0x0C072FBAu);
	{ IF(0x0C072FBCu); ; /* slot nop */ UPD(0x0C0730B0u, 3); goto L_0C0730B0; }  /* 0C072FBA bra */
L_0C072FBE: BLKS(0x0C072FBEu);
	r9 = 0xB4u; UPD(0x0C072FC0u, 1);  /* 0C072FBE mov.w @(disp,pc),Rn */
	IF(0x0C072FC0u); MACL = r12 * r9;  /* 0C072FC0 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C072FC4u, 3);  /* 0C072FC2 mov.l @(disp,pc),Rn */
	IF(0x0C072FC4u); r8 = MACL;  /* 0C072FC4 sts macl,Rn */
	r8 += r3;  /* 0C072FC6 add Rm,Rn */
	r10 = R32(r8); UPD(0x0C072FCAu, 3);  /* 0C072FC8 mov.l @Rm,Rn */
	IF(0x0C072FCAu); MACL = r0 * r9;  /* 0C072FCA mul.l Rm,Rn */
	r5 = 0xFCFFFFFFu; UPD(0x0C072FCEu, 3);  /* 0C072FCC mov.l @(disp,pc),Rn */
	r10 &= r5;  /* 0C072FCE and Rm,Rn */
	W32(r8, r10); UPD(0x0C072FD2u, 2);  /* 0C072FD0 mov.l Rm,@Rn */
	IF(0x0C072FD2u); r9 = MACL;  /* 0C072FD2 sts macl,Rn */
	r9 += r3;  /* 0C072FD4 add Rm,Rn */
	r7 = R32(r9 + 0x24u); UPD(0x0C072FD8u, 3);  /* 0C072FD6 mov.l @(disp,Rm),Rn */
	r0 = R32(r8 + 0x2Cu); UPD(0x0C072FDAu, 1);  /* 0C072FD8 mov.l @(disp,Rm),Rn */
	r4 = R32(r9); UPD(0x0C072FDCu, 1);  /* 0C072FDA mov.l @Rm,Rn */
	r7 += r0;  /* 0C072FDC add Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C072FE0u, 2);  /* 0C072FDE mov.l @(disp,pc),Rn */
	r6 = R32(r9 + 0x28u); UPD(0x0C072FE2u, 1);  /* 0C072FE0 mov.l @(disp,Rm),Rn */
	r4 &= r1;  /* 0C072FE2 and Rm,Rn */
	r11 = R32(r8 + 0x30u); UPD(0x0C072FE6u, 2);  /* 0C072FE4 mov.l @(disp,Rm),Rn */
	r10 |= r4;  /* 0C072FE6 or Rm,Rn */
	r6 += r11;  /* 0C072FE8 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C072FECu, 3);  /* 0C072FEA mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C072FEEu, 1);  /* 0C072FEC mov.l Rm,@(disp,Rn) */
	T = r0 == 0x4u;  /* 0C072FEE cmp/eq #imm,r0 */
	W32(r8 + 0x28u, r6); UPD(0x0C072FF2u, 2);  /* 0C072FF0 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r8, r10); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C072F6Cu, 3); goto L_0C072F6C; } UPD(0x0C072FF6u, 1); goto L_0C072FF6; }  /* 0C072FF2 bt/s */
L_0C072FF6: BLKS(0x0C072FF6u);
	r13 = 0x86u; UPD(0x0C072FF8u, 1);  /* 0C072FF6 mov.w @(disp,pc),Rn */
	r11 = 0x3u;  /* 0C072FF8 mov #imm,Rn */
	r13 += r9;  /* 0C072FFA add Rm,Rn */
	r9 += 0x50u;  /* 0C072FFC add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C073000u, 4);  /* 0C072FFE mov.w @Rm,Rn */
	r5 = 0xFFFFFFFFu;  /* 0C073000 mov #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r13); UPD(0x0C073004u, 2);  /* 0C073002 mov.w @Rm,Rn */
	r6 &= r11;  /* 0C073004 and Rm,Rn */
	r3 = 0x200u; UPD(0x0C073008u, 2);  /* 0C073006 mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFFB0u;  /* 0C073008 add #imm,Rn */
	r7 = 0xA4u; UPD(0x0C07300Cu, 2);  /* 0C07300A mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C07300C add Rm,Rn */
	r7 += r8;  /* 0C07300E add Rm,Rn */
	IF(0x0C073010u); r0 >>= 8;  /* 0C073010 shlr8 Rn */
	r11 = r7;  /* 0C073012 mov Rm,Rn */
	IF(0x0C073014u); r0 >>= 2;  /* 0C073014 shlr2 Rn */
	r11 += 0x1u;  /* 0C073016 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C07301Au, 7);  /* 0C073018 mov.b @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C07301A and #imm,r0 */
	r0 += 0x1u;  /* 0C07301C add #imm,Rn */
	T = r10 == r0;  /* 0C07301E cmp/eq Rm,Rn */
	r10 = r7;  /* 0C073020 mov Rm,Rn */
	r10 += 0x2u;  /* 0C073022 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C073026u, 6);  /* 0C073024 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C073026 negc Rm,Rn */
	T = r1 == r6;  /* 0C073028 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C07302A negc Rm,Rn */
	r4 |= r2;  /* 0C07302C or Rm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C073030u, 5);  /* 0C07302E mov.l Rm,@(disp,Rn) */
	T = (r4 & r4) == 0;  /* 0C073030 tst Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C072F6Cu, 4); goto L_0C072F6C; } UPD(0x0C073036u, 1); goto L_0C073036; }  /* 0C073032 bt/s */
L_0C073036: BLKS(0x0C073036u);
	r2 = 0xC0A03B0u; UPD(0x0C073038u, 1);  /* 0C073036 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C073038 mov Rm,Rn */
	IF(0x0C07303Au); { u32 t_ = r2; PR = 0x0C07303Eu; r8 += 0xBu; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C07303Eu); }  /* 0C07303A jsr @Rn */
L_0C07303E: BLKS(0x0C07303Eu);
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C073040u, 1);  /* 0C07303E mov.b @Rm,Rn */
	r8 += 0x4u;  /* 0C073040 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C073044u, 2);  /* 0C073042 mov.b @Rm,Rn */
	r8 += 0xFFFFFFF1u;  /* 0C073044 add #imm,Rn */
	r12 = R32(r8 + 0xCu); UPD(0x0C073048u, 2);  /* 0C073046 mov.l @(disp,Rm),Rn */
	W8(r11, r4); UPD(0x0C07304Au, 1);  /* 0C073048 mov.b Rm,@Rn */
	T = (r12 & r12) == 0;  /* 0C07304A tst Rm,Rn */
	{ u32 c_ = !T; W8(r10, r0); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0730A2u, 4); goto L_0C0730A2; } UPD(0x0C073050u, 1); goto L_0C073050; }  /* 0C07304C bf/s */
L_0C073050: BLKS(0x0C073050u);
	r11 = (u32)(s32)(s16)R16(r13); UPD(0x0C073052u, 1);  /* 0C073050 mov.w @Rm,Rn */
	r5 = 0xFFFFFFFAu;  /* 0C073052 mov #imm,Rn */
	r0 = 0x8Cu; UPD(0x0C073056u, 2);  /* 0C073054 mov.w @(disp,pc),Rn */
	IF(0x0C073056u); r13 = R32(r0 + r9); UPD(0x0C073058u, 1);  /* 0C073056 mov.l @(r0,Rm),Rn */
	IF(0x0C073058u); T = (s32)r13 > 0;  /* 0C073058 cmp/pl Rn */
	{ u32 c_ = !T; IF(0x0C07305Cu); ARG0(0x4B5Cu); { s32 s_ = (s32)r5; if (s_ >= 0) r11 <<= (s_ & 31); else if ((s_ & 31) == 0) r11 = (u32)((s32)r11 >> 31); else r11 = (u32)((s32)r11 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ if (c_) { UPD(0x0C073064u, 4); goto L_0C073064; } goto L_0C07305E; }  /* 0C07305A bf/s */
L_0C07305E: BLKS(0x0C07305Eu);
	r9 = 0x100u; UPD(0x0C073060u, 2);  /* 0C07305E mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C073060 add Rm,Rn */
	r11 = (u32)(s32)(s16)r9;  /* 0C073062 exts.w Rm,Rn */
	UPD(0x0C073064u, 2);
L_0C073064: BLKS(0x0C073064u);
	r9 = 0xC058060u; UPD(0x0C073066u, 1);  /* 0C073064 mov.l @(disp,pc),Rn */
	r5 = 0x99999u; UPD(0x0C073068u, 1);  /* 0C073066 mov.l @(disp,pc),Rn */
	IF(0x0C073068u); { u32 t_ = r9; PR = 0x0C07306Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07306Cu); }  /* 0C073068 jsr @Rn */
L_0C07306C: BLKS(0x0C07306Cu);
	r13 = 0xC058030u; UPD(0x0C07306Eu, 1);  /* 0C07306C mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07306E mov Rm,Rn */
	r10 = R32(r8 + 0x24u); UPD(0x0C073072u, 2);  /* 0C073070 mov.l @(disp,Rm),Rn */
	r5 = 0xC0000u; UPD(0x0C073074u, 1);  /* 0C073072 mov.l @(disp,pc),Rn */
	IF(0x0C073074u); { u32 t_ = r13; PR = 0x0C073078u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C073078u); }  /* 0C073074 jsr @Rn */
L_0C073078: BLKS(0x0C073078u);
	r6 = R32(r8 + 0x28u); UPD(0x0C07307Au, 1);  /* 0C073078 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C07307A add #imm,Rn */
	r6 += r0;  /* 0C07307C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C073080u, 3);  /* 0C07307E mov.w @(disp,pc),Rn */
	r3 = 0x3u;  /* 0C073080 mov #imm,Rn */
	IF(0x0C073082u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C073084u, 2);  /* 0C073082 mov.b @(r0,Rm),Rn */
	r5 = r10;  /* 0C073084 mov Rm,Rn */
	r2 = 0xA9u; UPD(0x0C073088u, 2);  /* 0C073086 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C073088 mov Rm,Rn */
	IF(0x0C07308Au); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07308Cu, 2);  /* 0C07308A mov.b @(r0,Rm),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C07308Eu, 1);  /* 0C07308C mov.l Rm,@(disp,Rn) */
	r12 = r4 & 0xFF;  /* 0C07308E extu.b Rm,Rn */
	r3 += 0x7Du;  /* 0C073090 add #imm,Rn */
	W32(r15, r12); UPD(0x0C073094u, 3);  /* 0C073092 mov.l Rm,@Rn */
	W32(r15 + 0x8u, r11); UPD(0x0C073096u, 1);  /* 0C073094 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r3); UPD(0x0C073098u, 1);  /* 0C073096 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07309Au, 1);  /* 0C073098 mov.l @Rm,Rn */
	r8 = 0xC0AA9D0u; UPD(0x0C07309Cu, 1);  /* 0C07309A mov.l @(disp,pc),Rn */
	IF(0x0C07309Cu); { u32 t_ = r8; PR = 0x0C0730A0u; r7 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA9D0, 0x0C0AA9D0u, 0x0C0730A0u); }  /* 0C07309C jsr @Rn */
L_0C0730A0: BLKS(0x0C0730A0u);
	r15 += 0x10u;  /* 0C0730A0 add #imm,Rn */
	UPD(0x0C0730A2u, 1);
L_0C0730A2: BLKS(0x0C0730A2u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C072E62u, 3); goto L_0C072E62; }  /* 0C0730A2 bra */
L_0C0730B0: BLKS(0x0C0730B0u);
	r1 = 0xC072800u; UPD(0x0C0730B2u, 1);  /* 0C0730B0 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C072EFCu, 3); goto L_0C072EFC; }  /* 0C0730B2 bra */
L_0C0730C0: BLKS(0x0C0730C0u);
	r11 = 0xC0A03F0u; UPD(0x0C0730C2u, 1);  /* 0C0730C0 mov.l @(disp,pc),Rn */
	IF(0x0C0730C2u); { u32 t_ = r11; PR = 0x0C0730C6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0730C6u); }  /* 0C0730C2 jsr @Rn */
L_0C0730C6: BLKS(0x0C0730C6u);
	IF(0x0C0730C6u); T = (s32)r0 >= 0;  /* 0C0730C6 cmp/pz Rn */
	{ u32 c_ = !T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0730B0u, 4); goto L_0C0730B0; } goto L_0C0730CC; }  /* 0C0730C8 bf/s */
L_0C0730CC: BLKS(0x0C0730CCu);
	r3 = 0xB4u; UPD(0x0C0730CEu, 2);  /* 0C0730CC mov.w @(disp,pc),Rn */
	IF(0x0C0730CEu); MACL = r12 * r3;  /* 0C0730CE mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C0730D2u, 3);  /* 0C0730D0 mov.l @(disp,pc),Rn */
	IF(0x0C0730D2u); r8 = MACL;  /* 0C0730D2 sts macl,Rn */
	IF(0x0C0730D4u); MACL = r10 * r3;  /* 0C0730D4 mul.l Rm,Rn */
	r8 += r4;  /* 0C0730D6 add Rm,Rn */
	r0 = R32(r8); UPD(0x0C0730DAu, 5);  /* 0C0730D8 mov.l @Rm,Rn */
	IF(0x0C0730DAu); r9 = MACL;  /* 0C0730DA sts macl,Rn */
	r9 += r4;  /* 0C0730DC add Rm,Rn */
	r5 = R32(r9); UPD(0x0C0730E0u, 3);  /* 0C0730DE mov.l @Rm,Rn */
	r3 += 0x4Cu;  /* 0C0730E0 add #imm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C0730E4u, 2);  /* 0C0730E2 mov.w @(disp,pc),Rn */
	r5 &= r3;  /* 0C0730E4 and Rm,Rn */
	r0 &= r2;  /* 0C0730E6 and Rm,Rn */
	r0 |= r5;  /* 0C0730E8 or Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C0730ECu, 4);  /* 0C0730EA mov.l @(disp,Rm),Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C0730EEu, 1);  /* 0C0730EC mov.l @(disp,Rm),Rn */
	W32(r8, r0); UPD(0x0C0730F0u, 1);  /* 0C0730EE mov.l Rm,@Rn */
	r7 = R32(r8 + 0x2Cu); UPD(0x0C0730F2u, 1);  /* 0C0730F0 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x30u); UPD(0x0C0730F4u, 1);  /* 0C0730F2 mov.l @(disp,Rm),Rn */
	r4 += r7;  /* 0C0730F4 add Rm,Rn */
	r5 += r6;  /* 0C0730F6 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C0730FAu, 3);  /* 0C0730F8 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C0730FCu, 1);  /* 0C0730FA mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C0730FC tst Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0731D0u, 4); goto L_0C0731D0; } UPD(0x0C073102u, 1); goto L_0C073102; }  /* 0C0730FE bt/s */
L_0C073102: BLKS(0x0C073102u);
	T = r0 == 0x7u;  /* 0C073102 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C073180u, 4); goto L_0C073180; }  /* 0C073104 bt */
L_0C073106: BLKS(0x0C073106u);
	r9 = 0xB4u; UPD(0x0C073108u, 1);  /* 0C073106 mov.w @(disp,pc),Rn */
	r4 = r12;  /* 0C073108 mov Rm,Rn */
	IF(0x0C07310Au); MACL = r12 * r9;  /* 0C07310A mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C07310Eu, 4);  /* 0C07310C mov.l @(disp,pc),Rn */
	IF(0x0C07310Eu); r13 = MACL;  /* 0C07310E sts macl,Rn */
	r13 += r11;  /* 0C073110 add Rm,Rn */
	r3 = 0x86u; UPD(0x0C073114u, 3);  /* 0C073112 mov.w @(disp,pc),Rn */
	r0 = r13;  /* 0C073114 mov Rm,Rn */
	IF(0x0C073116u); r5 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C073118u, 2);  /* 0C073116 mov.w @(r0,Rm),Rn */
	r7 = R32(r13 + 0xCu); UPD(0x0C07311Au, 1);  /* 0C073118 mov.l @(disp,Rm),Rn */
	r12 = 0xC0A0380u; UPD(0x0C07311Cu, 1);  /* 0C07311A mov.l @(disp,pc),Rn */
	r7 += r5;  /* 0C07311C add Rm,Rn */
	IF(0x0C07311Eu); { u32 t_ = r12; PR = 0x0C073122u; W32(r13 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C073122u); }  /* 0C07311E jsr @Rn */
L_0C073122: BLKS(0x0C073122u);
	r0 = R32(r13 + 0xCu); UPD(0x0C073124u, 1);  /* 0C073122 mov.l @(disp,Rm),Rn */
	T = r0 == 0x7u;  /* 0C073124 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0730A2u, 4); goto L_0C0730A2; }  /* 0C073126 bf */
L_0C073128: BLKS(0x0C073128u);
	IF(0x0C073128u); MACL = r10 * r9;  /* 0C073128 mul.l Rm,Rn */
	r10 = 0xA6u; UPD(0x0C07312Cu, 3);  /* 0C07312A mov.w @(disp,pc),Rn */
	IF(0x0C07312Cu); r2 = MACL;  /* 0C07312C sts macl,Rn */
	r2 += r11;  /* 0C07312E add Rm,Rn */
	r2 += r10;  /* 0C073130 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C073134u, 4);  /* 0C073132 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C073134 add #imm,Rn */
	UPD(0x0C073136u, 1);
L_0C073136: BLKS(0x0C073136u);
	W8(r2, r1); UPD(0x0C073138u, 1);  /* 0C073136 mov.b Rm,@Rn */
L_0C073138: BLKS(0x0C073138u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C072E62u, 3); goto L_0C072E62; }  /* 0C073138 bra */
L_0C073180: BLKS(0x0C073180u);
	r10 = 0xA4u; UPD(0x0C073182u, 1);  /* 0C073180 mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C073182 add Rm,Rn */
	r10 += 0x3u;  /* 0C073184 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C073188u, 3);  /* 0C073186 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C073188 tst Rm,Rn */
	{ u32 c_ = !T; r10 += 0xFFFFFFFDu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C073138u, 4); goto L_0C073138; } goto L_0C07318E; }  /* 0C07318A bf/s */
L_0C07318E: BLKS(0x0C07318Eu);
	r0 = 0xA9u; UPD(0x0C073190u, 2);  /* 0C07318E mov.w @(disp,pc),Rn */
	r11 = 0xC0A9BB0u; UPD(0x0C073192u, 1);  /* 0C073190 mov.l @(disp,pc),Rn */
	IF(0x0C073192u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C073194u, 1);  /* 0C073192 mov.b @(r0,Rm),Rn */
	IF(0x0C073194u); { u32 t_ = r11; PR = 0x0C073198u; r6 = r2 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C073198u); }  /* 0C073194 jsr @Rn */
L_0C073198: BLKS(0x0C073198u);
	T = (r0 & r0) == 0;  /* 0C073198 tst Rm,Rn */
	r0 = R32(r9); UPD(0x0C07319Cu, 2);  /* 0C07319A mov.l @Rm,Rn */
	r2 = 0xFFFFFFFFu;  /* 0C07319C mov #imm,Rn */
	IF(0x0C07319Eu); r0 >>= 8;  /* 0C07319E shlr8 Rn */
	{ u32 t_ = 0u - r2, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C0731A0 negc Rm,Rn */
	r0 &= 0x1u;  /* 0C0731A2 and #imm,r0 */
	r4 &= r0;  /* 0C0731A4 and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0731A6 tst Rm,Rn */
	if (!T) { UPD(0x0C073138u, 9); goto L_0C073138; }  /* 0C0731A8 bf */
L_0C0731AA: BLKS(0x0C0731AAu);
	r6 = r10;  /* 0C0731AA mov Rm,Rn */
	r6 += 0x2u;  /* 0C0731AC add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r6); UPD(0x0C0731B0u, 3);  /* 0C0731AE mov.b @Rm,Rn */
	r4 = r12;  /* 0C0731B0 mov Rm,Rn */
	r9 = R32(r8 + 0xCu); UPD(0x0C0731B4u, 2);  /* 0C0731B2 mov.l @(disp,Rm),Rn */
	r13 += 0xFFFFFFFFu;  /* 0C0731B4 add #imm,Rn */
	r0 = 0x86u; UPD(0x0C0731B8u, 2);  /* 0C0731B6 mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFFFFu;  /* 0C0731B8 add #imm,Rn */
	IF(0x0C0731BAu); W16(r0 + r8, r2); UPD(0x0C0731BCu, 2);  /* 0C0731BA mov.w Rm,@(r0,Rn) */
	W8(r6, r13); UPD(0x0C0731BEu, 1);  /* 0C0731BC mov.b Rm,@Rn */
	r1 = 0xC0A0380u; UPD(0x0C0731C0u, 1);  /* 0C0731BE mov.l @(disp,pc),Rn */
	{ W32(r8 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C072EFCu, 3); goto L_0C072EFC; }  /* 0C0731C0 bra */
L_0C0731D0: BLKS(0x0C0731D0u);
	r13 = 0x2000100u; UPD(0x0C0731D2u, 1);  /* 0C0731D0 mov.l @(disp,pc),Rn */
	r11 = R32(r9); UPD(0x0C0731D4u, 1);  /* 0C0731D2 mov.l @Rm,Rn */
	r11 &= r13;  /* 0C0731D4 and Rm,Rn */
	T = r11 == r13;  /* 0C0731D6 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C073138u, 5); goto L_0C073138; }  /* 0C0731D8 bf */
L_0C0731DA: BLKS(0x0C0731DAu);
	r0 = 0xA9u; UPD(0x0C0731DCu, 1);  /* 0C0731DA mov.w @(disp,pc),Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C0731DEu, 1);  /* 0C0731DC mov.l @(disp,pc),Rn */
	IF(0x0C0731DEu); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0731E0u, 1);  /* 0C0731DE mov.b @(r0,Rm),Rn */
	IF(0x0C0731E0u); { u32 t_ = r9; PR = 0x0C0731E4u; r6 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0731E4u); }  /* 0C0731E0 jsr @Rn */
L_0C0731E4: BLKS(0x0C0731E4u);
	T = (r0 & r0) == 0;  /* 0C0731E4 tst Rm,Rn */
	if (T) { UPD(0x0C073138u, 4); goto L_0C073138; }  /* 0C0731E6 bt */
L_0C0731E8: BLKS(0x0C0731E8u);
	r4 = r12;  /* 0C0731E8 mov Rm,Rn */
	r13 = 0xC0A9E40u; UPD(0x0C0731ECu, 2);  /* 0C0731EA mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C0731EC mov #imm,Rn */
	IF(0x0C0731EEu); { u32 t_ = r13; PR = 0x0C0731F2u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0731F2u); }  /* 0C0731EE jsr @Rn */
L_0C0731F2: BLKS(0x0C0731F2u);
	T = (r0 & r0) == 0;  /* 0C0731F2 tst Rm,Rn */
	if (T) { UPD(0x0C073138u, 4); goto L_0C073138; }  /* 0C0731F4 bt */
L_0C0731F6: BLKS(0x0C0731F6u);
	r6 = 0x1u;  /* 0C0731F6 mov #imm,Rn */
	r0 = 0x86u; UPD(0x0C0731FAu, 2);  /* 0C0731F8 mov.w @(disp,pc),Rn */
	IF(0x0C0731FAu); W16(r0 + r8, r6); UPD(0x0C0731FCu, 1);  /* 0C0731FA mov.w Rm,@(r0,Rn) */
	r8 = 0xC0AFC10u; UPD(0x0C0731FEu, 1);  /* 0C0731FC mov.l @(disp,pc),Rn */
	IF(0x0C0731FEu); { u32 t_ = r8; PR = 0x0C073202u; r4 = 0x72u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C073202u); }  /* 0C0731FE jsr @Rn */
L_0C073202: BLKS(0x0C073202u);
	{ IF(0x0C073204u); ; /* slot nop */ UPD(0x0C073106u, 3); goto L_0C073106; }  /* 0C073202 bra */
L_0C073210: BLKS(0x0C073210u);
	r8 = 0xC0A03F0u; UPD(0x0C073212u, 1);  /* 0C073210 mov.l @(disp,pc),Rn */
	IF(0x0C073212u); { u32 t_ = r8; PR = 0x0C073216u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C073216u); }  /* 0C073212 jsr @Rn */
L_0C073216: BLKS(0x0C073216u);
	IF(0x0C073216u); T = (s32)r0 >= 0;  /* 0C073216 cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C073220u, 4); goto L_0C073220; } goto L_0C07321C; }  /* 0C073218 bt/s */
L_0C07321C: BLKS(0x0C07321Cu);
	{ IF(0x0C07321Eu); ; /* slot nop */ UPD(0x0C0730B0u, 4); goto L_0C0730B0; }  /* 0C07321C bra */
L_0C073220: BLKS(0x0C073220u);
	r7 = 0xB4u; UPD(0x0C073222u, 1);  /* 0C073220 mov.w @(disp,pc),Rn */
	IF(0x0C073222u); MACL = r12 * r7;  /* 0C073222 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C073226u, 3);  /* 0C073224 mov.l @(disp,pc),Rn */
	IF(0x0C073226u); r8 = MACL;  /* 0C073226 sts macl,Rn */
	IF(0x0C073228u); MACL = r0 * r7;  /* 0C073228 mul.l Rm,Rn */
	r8 += r9;  /* 0C07322A add Rm,Rn */
	r6 = R32(r8); UPD(0x0C07322Eu, 5);  /* 0C07322C mov.l @Rm,Rn */
	IF(0x0C07322Eu); r7 = MACL;  /* 0C07322E sts macl,Rn */
	r7 += r9;  /* 0C073230 add Rm,Rn */
	r3 = 0xFFFFFEFFu; UPD(0x0C073234u, 3);  /* 0C073232 mov.w @(disp,pc),Rn */
	r0 = R32(r7 + 0x24u); UPD(0x0C073236u, 1);  /* 0C073234 mov.l @(disp,Rm),Rn */
	r6 &= r3;  /* 0C073236 and Rm,Rn */
	r4 = R32(r8 + 0x2Cu); UPD(0x0C07323Au, 2);  /* 0C073238 mov.l @(disp,Rm),Rn */
	r11 = R32(r7); UPD(0x0C07323Cu, 1);  /* 0C07323A mov.l @Rm,Rn */
	r0 += r4;  /* 0C07323C add Rm,Rn */
	r3 = 0x100u; UPD(0x0C073240u, 2);  /* 0C07323E mov.w @(disp,pc),Rn */
	r5 = R32(r7 + 0x28u); UPD(0x0C073242u, 1);  /* 0C073240 mov.l @(disp,Rm),Rn */
	r11 &= r3;  /* 0C073242 and Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C073246u, 2);  /* 0C073244 mov.l Rm,@(disp,Rn) */
	r6 |= r11;  /* 0C073246 or Rm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C07324Au, 2);  /* 0C073248 mov.l @(disp,Rm),Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C07324Cu, 1);  /* 0C07324A mov.l @(disp,Rm),Rn */
	r5 += r1;  /* 0C07324C add Rm,Rn */
	W32(r8, r6); UPD(0x0C073250u, 2);  /* 0C07324E mov.l Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C073250 tst Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07325Au, 4); goto L_0C07325A; } UPD(0x0C073256u, 1); goto L_0C073256; }  /* 0C073252 bf/s */
L_0C073256: BLKS(0x0C073256u);
	{ IF(0x0C073258u); ; /* slot nop */ UPD(0x0C073380u, 3); goto L_0C073380; }  /* 0C073256 bra */
L_0C07325A: BLKS(0x0C07325Au);
	T = r0 == 0xFu;  /* 0C07325A cmp/eq #imm,r0 */
	{ u32 c_ = T; T = (r6 & r3) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C0732A0u, 4); goto L_0C0732A0; } UPD(0x0C073260u, 1); goto L_0C073260; }  /* 0C07325C bt/s */
L_0C073260: BLKS(0x0C073260u);
	r9 = 0xB4u; UPD(0x0C073262u, 1);  /* 0C073260 mov.w @(disp,pc),Rn */
	IF(0x0C073262u); MACL = r12 * r9;  /* 0C073262 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C073266u, 3);  /* 0C073264 mov.l @(disp,pc),Rn */
	IF(0x0C073266u); r13 = MACL;  /* 0C073266 sts macl,Rn */
	r13 += r11;  /* 0C073268 add Rm,Rn */
	r7 = 0x86u; UPD(0x0C07326Cu, 3);  /* 0C07326A mov.w @(disp,pc),Rn */
	r0 = r13;  /* 0C07326C mov Rm,Rn */
	r4 = R32(r13 + 0xCu); UPD(0x0C073270u, 2);  /* 0C07326E mov.l @(disp,Rm),Rn */
	IF(0x0C073270u); r8 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C073272u, 1);  /* 0C073270 mov.w @(r0,Rm),Rn */
	r5 = 0xC0A0380u; UPD(0x0C073274u, 1);  /* 0C073272 mov.l @(disp,pc),Rn */
	r4 += r8;  /* 0C073274 add Rm,Rn */
	W32(r13 + 0xCu, r4); UPD(0x0C073278u, 2);  /* 0C073276 mov.l Rm,@(disp,Rn) */
	IF(0x0C073278u); { u32 t_ = r5; PR = 0x0C07327Cu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C07327Cu); }  /* 0C073278 jsr @Rn */
L_0C07327C: BLKS(0x0C07327Cu);
	r12 = R32(r13 + 0xCu); UPD(0x0C07327Eu, 1);  /* 0C07327C mov.l @(disp,Rm),Rn */
	T = (r12 & r12) == 0;  /* 0C07327E tst Rm,Rn */
	if (!T) { UPD(0x0C0732CCu, 4); goto L_0C0732CC; }  /* 0C073280 bf */
L_0C073282: BLKS(0x0C073282u);
	IF(0x0C073282u); MACL = r10 * r9;  /* 0C073282 mul.l Rm,Rn */
	r10 = 0xA7u; UPD(0x0C073286u, 3);  /* 0C073284 mov.w @(disp,pc),Rn */
	IF(0x0C073286u); r2 = MACL;  /* 0C073286 sts macl,Rn */
	r2 += r11;  /* 0C073288 add Rm,Rn */
	r2 += r10;  /* 0C07328A add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C07328Eu, 4);  /* 0C07328C mov.b @Rm,Rn */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C073136u, 3); goto L_0C073136; }  /* 0C07328E bra */
L_0C0732A0: BLKS(0x0C0732A0u);
	{ u32 c_ = !T; r5 = 0xAu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0732C0u, 3); goto L_0C0732C0; } UPD(0x0C0732A4u, 1); goto L_0C0732A4; }  /* 0C0732A0 bf/s */
L_0C0732A4: BLKS(0x0C0732A4u);
	r6 = 0xB4u; UPD(0x0C0732A6u, 1);  /* 0C0732A4 mov.w @(disp,pc),Rn */
	r3 = 0xFFFFFFFFu;  /* 0C0732A6 mov #imm,Rn */
	IF(0x0C0732A8u); MACL = r12 * r6;  /* 0C0732A8 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C0732ACu, 4);  /* 0C0732AA mov.l @(disp,pc),Rn */
	IF(0x0C0732ACu); r2 = MACL;  /* 0C0732AC sts macl,Rn */
	r0 = 0x86u; UPD(0x0C0732B0u, 2);  /* 0C0732AE mov.w @(disp,pc),Rn */
	r11 += r2;  /* 0C0732B0 add Rm,Rn */
	{ IF(0x0C0732B4u); W16(r0 + r11, r3); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C073260u, 4); goto L_0C073260; }  /* 0C0732B2 bra */
L_0C0732C0: BLKS(0x0C0732C0u);
	r9 = 0xC0A9E40u; UPD(0x0C0732C2u, 1);  /* 0C0732C0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0732C2 mov Rm,Rn */
	IF(0x0C0732C4u); { u32 t_ = r9; PR = 0x0C0732C8u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0732C8u); }  /* 0C0732C4 jsr @Rn */
L_0C0732C8: BLKS(0x0C0732C8u);
	T = (r0 & r0) == 0;  /* 0C0732C8 tst Rm,Rn */
	if (!T) { UPD(0x0C0732D0u, 4); goto L_0C0732D0; }  /* 0C0732CA bf */
L_0C0732CC: BLKS(0x0C0732CCu);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C072E62u, 3); goto L_0C072E62; }  /* 0C0732CC bra */
L_0C0732D0: BLKS(0x0C0732D0u);
	r9 = 0xC058090u; UPD(0x0C0732D2u, 1);  /* 0C0732D0 mov.l @(disp,pc),Rn */
	r13 = 0xA0u; UPD(0x0C0732D4u, 1);  /* 0C0732D2 mov.w @(disp,pc),Rn */
	IF(0x0C0732D4u); { u32 t_ = r9; PR = 0x0C0732D8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C0732D8u); }  /* 0C0732D4 jsr @Rn */
L_0C0732D8: BLKS(0x0C0732D8u);
	r13 += r8;  /* 0C0732D8 add Rm,Rn */
	r13 += 0x1u;  /* 0C0732DA add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r13); r13 += 1; r1 = v_; } UPD(0x0C0732DEu, 3);  /* 0C0732DC mov.b @Rm+,Rn */
	r5 = (u32)(s32)(s16)r0;  /* 0C0732DE exts.w Rm,Rn */
	r6 = 0x280u; UPD(0x0C0732E2u, 2);  /* 0C0732E0 mov.w @(disp,pc),Rn */
	IF(0x0C0732E2u); r1 <<= 16;  /* 0C0732E2 shll16 Rn */
	IF(0x0C0732E4u); MACL = r5 * r6;  /* 0C0732E4 mul.l Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r13); UPD(0x0C0732E8u, 4);  /* 0C0732E6 mov.b @Rm,Rn */
	r9 = R32(r8 + 0x24u); UPD(0x0C0732EAu, 1);  /* 0C0732E8 mov.l @(disp,Rm),Rn */
	IF(0x0C0732EAu); r3 = MACL;  /* 0C0732EA sts macl,Rn */
	r13 = R32(r8 + 0x28u); UPD(0x0C0732EEu, 2);  /* 0C0732EC mov.l @(disp,Rm),Rn */
	IF(0x0C0732EEu); r4 <<= 16;  /* 0C0732EE shll16 Rn */
	r2 = 0xC283794u; UPD(0x0C0732F2u, 2);  /* 0C0732F0 mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C0732F2 add Rm,Rn */
	r11 = 0xC057390u; UPD(0x0C0732F6u, 2);  /* 0C0732F4 mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C0732F6 add Rm,Rn */
	r13 += r4;  /* 0C0732F8 add Rm,Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C0732FCu, 3);  /* 0C0732FA mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0732FC mov Rm,Rn */
	r7 = R32(r3 + 0x14u); UPD(0x0C073300u, 2);  /* 0C0732FE mov.l @(disp,Rm),Rn */
	IF(0x0C073300u); { u32 t_ = r11; PR = 0x0C073304u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C073304u); }  /* 0C073300 jsr @Rn */
L_0C073304: BLKS(0x0C073304u);
	r11 = (u32)(s32)(s16)r0;  /* 0C073304 exts.w Rm,Rn */
	r0 = 0xA9u; UPD(0x0C073308u, 2);  /* 0C073306 mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C073308 mov Rm,Rn */
	IF(0x0C07330Au); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07330Cu, 2);  /* 0C07330A mov.b @(r0,Rm),Rn */
	r5 = r13;  /* 0C07330C mov Rm,Rn */
	r8 = 0xC0A9D50u; UPD(0x0C073310u, 2);  /* 0C07330E mov.l @(disp,pc),Rn */
	IF(0x0C073310u); { u32 t_ = r8; PR = 0x0C073314u; r6 = r7 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9D50, 0x0C0A9D50u, 0x0C073314u); }  /* 0C073310 jsr @Rn */
L_0C073314: BLKS(0x0C073314u);
	T = (r0 & r0) == 0;  /* 0C073314 tst Rm,Rn */
	if (T) { UPD(0x0C0732A4u, 4); goto L_0C0732A4; }  /* 0C073316 bt */
L_0C073318: BLKS(0x0C073318u);
	r15 += 0xFFFFFFF8u;  /* 0C073318 add #imm,Rn */
	r7 = 0x30000u; UPD(0x0C07331Cu, 2);  /* 0C07331A mov.l @(disp,pc),Rn */
	r0 = 0xC17793Au; UPD(0x0C07331Eu, 1);  /* 0C07331C mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C07331E mov #imm,Rn */
	r8 = 0xC0A8690u; UPD(0x0C073322u, 2);  /* 0C073320 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C073322 mov Rm,Rn */
	W32(r15, r7); UPD(0x0C073326u, 2);  /* 0C073324 mov.l Rm,@Rn */
	r6 = r13;  /* 0C073326 mov Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C07332Au, 2);  /* 0C073328 mov.l Rm,@(disp,Rn) */
	IF(0x0C07332Au); { u32 t_ = r8; PR = 0x0C07332Eu; r7 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8690, 0x0C0A8690u, 0x0C07332Eu); }  /* 0C07332A jsr @Rn */
L_0C07332E: BLKS(0x0C07332Eu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0732A4u, 3); goto L_0C0732A4; }  /* 0C07332E bra */
L_0C073380: BLKS(0x0C073380u);
	r9 = 0xA4u; UPD(0x0C073382u, 1);  /* 0C073380 mov.w @(disp,pc),Rn */
	r9 += r7;  /* 0C073382 add Rm,Rn */
	r9 += 0x2u;  /* 0C073384 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C073388u, 3);  /* 0C073386 mov.b @Rm,Rn */
	T = r0 == 0x2u;  /* 0C073388 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r9 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0733C2u, 4); goto L_0C0733C2; } goto L_0C07338E; }  /* 0C07338A bf/s */
L_0C07338E: BLKS(0x0C07338Eu);
	r13 = 0xC0A9E40u; UPD(0x0C073390u, 2);  /* 0C07338E mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C073390 mov Rm,Rn */
	r0 = 0x88u; UPD(0x0C073394u, 2);  /* 0C073392 mov.w @(disp,pc),Rn */
	r6 = 0xAu;  /* 0C073394 mov #imm,Rn */
	IF(0x0C073396u); { u32 t_ = r13; PR = 0x0C07339Au; IF(0x0C073398u); r5 = (u32)(s32)(s16)R16(r0 + r8); /* slot mov.w @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07339Au); }  /* 0C073396 jsr @Rn */
L_0C07339A: BLKS(0x0C07339Au);
	T = (r0 & r0) == 0;  /* 0C07339A tst Rm,Rn */
	if (T) { UPD(0x0C0733C2u, 4); goto L_0C0733C2; }  /* 0C07339C bt */
L_0C07339E: BLKS(0x0C07339Eu);
	r4 = R32(r8 + 0x24u); UPD(0x0C0733A0u, 1);  /* 0C07339E mov.l @(disp,Rm),Rn */
	r5 = 0xA0u; UPD(0x0C0733A2u, 1);  /* 0C0733A0 mov.w @(disp,pc),Rn */
	r5 += r8;  /* 0C0733A2 add Rm,Rn */
	r5 += 0x1u;  /* 0C0733A4 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r1 = v_; } UPD(0x0C0733A8u, 3);  /* 0C0733A6 mov.b @Rm+,Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C0733AAu, 1);  /* 0C0733A8 mov.b @Rm,Rn */
	IF(0x0C0733AAu); r1 <<= 16;  /* 0C0733AA shll16 Rn */
	r0 = 0xA9u; UPD(0x0C0733AEu, 2);  /* 0C0733AC mov.w @(disp,pc),Rn */
	IF(0x0C0733AEu); r6 <<= 16;  /* 0C0733AE shll16 Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0733B2u, 2);  /* 0C0733B0 mov.l @(disp,Rm),Rn */
	r11 = 0xC0A9BB0u; UPD(0x0C0733B4u, 1);  /* 0C0733B2 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C0733B4 add Rm,Rn */
	IF(0x0C0733B6u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0733B8u, 2);  /* 0C0733B6 mov.b @(r0,Rm),Rn */
	r4 += r1;  /* 0C0733B8 add Rm,Rn */
	IF(0x0C0733BAu); { u32 t_ = r11; PR = 0x0C0733BEu; r6 = r2 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0733BEu); }  /* 0C0733BA jsr @Rn */
L_0C0733BE: BLKS(0x0C0733BEu);
	T = (r0 & r0) == 0;  /* 0C0733BE tst Rm,Rn */
	if (!T) { UPD(0x0C0733C6u, 4); goto L_0C0733C6; }  /* 0C0733C0 bf */
L_0C0733C2: BLKS(0x0C0733C2u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C072E62u, 3); goto L_0C072E62; }  /* 0C0733C2 bra */
L_0C0733C6: BLKS(0x0C0733C6u);
	r0 = 0x86u; UPD(0x0C0733C8u, 1);  /* 0C0733C6 mov.w @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0733C8 mov #imm,Rn */
	IF(0x0C0733CAu); W16(r0 + r8, r4); UPD(0x0C0733CCu, 2);  /* 0C0733CA mov.w Rm,@(r0,Rn) */
	r8 = r9;  /* 0C0733CC mov Rm,Rn */
	r8 += 0x3u;  /* 0C0733CE add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C0733D2u, 3);  /* 0C0733D0 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0733D2 add #imm,Rn */
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C073260u, 4); goto L_0C073260; }  /* 0C0733D4 bra */
L_0C0733E0: BLKS(0x0C0733E0u);
	r13 = 0xC0A03F0u; UPD(0x0C0733E2u, 1);  /* 0C0733E0 mov.l @(disp,pc),Rn */
	IF(0x0C0733E2u); { u32 t_ = r13; PR = 0x0C0733E6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0733E6u); }  /* 0C0733E2 jsr @Rn */
L_0C0733E6: BLKS(0x0C0733E6u);
	IF(0x0C0733E6u); T = (s32)r0 >= 0;  /* 0C0733E6 cmp/pz Rn */
	if (!T) { UPD(0x0C0734BAu, 4); goto L_0C0734BA; }  /* 0C0733E8 bf */
L_0C0733EA: BLKS(0x0C0733EAu);
	r4 = r12;  /* 0C0733EA mov Rm,Rn */
	r1 = 0xC072110u; UPD(0x0C0733EEu, 2);  /* 0C0733EC mov.l @(disp,pc),Rn */
	r5 = r0;  /* 0C0733EE mov Rm,Rn */
	UPD(0x0C0733F0u, 1);
L_0C0733F0: BLKS(0x0C0733F0u);
	r14 += 0x4u;  /* 0C0733F0 add #imm,Rn */
	r15 = r14;  /* 0C0733F2 mov Rm,Rn */
	IF(0x0C0733F4u); PR = R32(r15); r15 += 4; UPD(0x0C0733F6u, 3);  /* 0C0733F4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0733F8u, 1);  /* 0C0733F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0733FAu, 1);  /* 0C0733F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0733FCu, 1);  /* 0C0733FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0733FEu, 1);  /* 0C0733FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C073400u, 1);  /* 0C0733FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C073402u, 1);  /* 0C073400 mov.l @Rm+,Rn */
	IF(0x0C073402u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071D20u: goto L_0C071D20; case 0x0C0722D0u: goto L_0C0722D0; default: JUMPD(tv_); } }  /* 0C073402 jmp @Rn */
L_0C073410: BLKS(0x0C073410u);
	r8 = 0xC0A03F0u; UPD(0x0C073412u, 1);  /* 0C073410 mov.l @(disp,pc),Rn */
	IF(0x0C073412u); { u32 t_ = r8; PR = 0x0C073416u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C073416u); }  /* 0C073412 jsr @Rn */
L_0C073416: BLKS(0x0C073416u);
	IF(0x0C073416u); T = (s32)r0 >= 0;  /* 0C073416 cmp/pz Rn */
	if (!T) { UPD(0x0C0734BAu, 4); goto L_0C0734BA; }  /* 0C073418 bf */
L_0C07341A: BLKS(0x0C07341Au);
	r4 = r12;  /* 0C07341A mov Rm,Rn */
	r1 = 0xC0722D0u; UPD(0x0C07341Eu, 2);  /* 0C07341C mov.l @(disp,pc),Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C0733F0u, 3); goto L_0C0733F0; }  /* 0C07341E bra */
L_0C073430: BLKS(0x0C073430u);
	r11 = 0xC0A03F0u; UPD(0x0C073432u, 1);  /* 0C073430 mov.l @(disp,pc),Rn */
	IF(0x0C073432u); { u32 t_ = r11; PR = 0x0C073436u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C073436u); }  /* 0C073432 jsr @Rn */
L_0C073436: BLKS(0x0C073436u);
	IF(0x0C073436u); T = (s32)r0 >= 0;  /* 0C073436 cmp/pz Rn */
	if (!T) { UPD(0x0C0734BAu, 4); goto L_0C0734BA; }  /* 0C073438 bf */
L_0C07343A: BLKS(0x0C07343Au);
	r4 = r12;  /* 0C07343A mov Rm,Rn */
	r1 = 0xC071D20u; UPD(0x0C07343Eu, 2);  /* 0C07343C mov.l @(disp,pc),Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C0733F0u, 3); goto L_0C0733F0; }  /* 0C07343E bra */
L_0C073450: BLKS(0x0C073450u);
	r10 = 0xC0A03F0u; UPD(0x0C073452u, 1);  /* 0C073450 mov.l @(disp,pc),Rn */
	IF(0x0C073452u); { u32 t_ = r10; PR = 0x0C073456u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C073456u); }  /* 0C073452 jsr @Rn */
L_0C073456: BLKS(0x0C073456u);
	IF(0x0C073456u); T = (s32)r0 >= 0;  /* 0C073456 cmp/pz Rn */
	if (!T) { UPD(0x0C0734BAu, 4); goto L_0C0734BA; }  /* 0C073458 bf */
L_0C07345A: BLKS(0x0C07345Au);
	r4 = r12;  /* 0C07345A mov Rm,Rn */
	r1 = 0xC071F40u; UPD(0x0C07345Eu, 2);  /* 0C07345C mov.l @(disp,pc),Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C0733F0u, 3); goto L_0C0733F0; }  /* 0C07345E bra */
L_0C073470: BLKS(0x0C073470u);
	r9 = 0xC0A03F0u; UPD(0x0C073472u, 1);  /* 0C073470 mov.l @(disp,pc),Rn */
	IF(0x0C073472u); { u32 t_ = r9; PR = 0x0C073476u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C073476u); }  /* 0C073472 jsr @Rn */
L_0C073476: BLKS(0x0C073476u);
	IF(0x0C073476u); T = (s32)r0 >= 0;  /* 0C073476 cmp/pz Rn */
	if (!T) { UPD(0x0C0734BAu, 4); goto L_0C0734BA; }  /* 0C073478 bf */
L_0C07347A: BLKS(0x0C07347Au);
	r4 = r12;  /* 0C07347A mov Rm,Rn */
	r1 = 0xC071B10u; UPD(0x0C07347Eu, 2);  /* 0C07347C mov.l @(disp,pc),Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C0733F0u, 3); goto L_0C0733F0; }  /* 0C07347E bra */
L_0C0734B0: BLKS(0x0C0734B0u);
	r13 = 0xC0A03F0u; UPD(0x0C0734B2u, 1);  /* 0C0734B0 mov.l @(disp,pc),Rn */
	IF(0x0C0734B2u); { u32 t_ = r13; PR = 0x0C0734B6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0734B6u); }  /* 0C0734B2 jsr @Rn */
L_0C0734B6: BLKS(0x0C0734B6u);
	IF(0x0C0734B6u); T = (s32)r0 >= 0;  /* 0C0734B6 cmp/pz Rn */
	if (T) { UPD(0x0C0734BEu, 4); goto L_0C0734BE; }  /* 0C0734B8 bt */
L_0C0734BA: BLKS(0x0C0734BAu);
	{ IF(0x0C0734BCu); ; /* slot nop */ UPD(0x0C0730B0u, 3); goto L_0C0730B0; }  /* 0C0734BA bra */
L_0C0734BE: BLKS(0x0C0734BEu);
	r4 = 0xB4u; UPD(0x0C0734C0u, 1);  /* 0C0734BE mov.w @(disp,pc),Rn */
	IF(0x0C0734C0u); MACL = r12 * r4;  /* 0C0734C0 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0734C4u, 3);  /* 0C0734C2 mov.l @(disp,pc),Rn */
	IF(0x0C0734C4u); r11 = MACL;  /* 0C0734C4 sts macl,Rn */
	r11 += r2;  /* 0C0734C6 add Rm,Rn */
	IF(0x0C0734C8u); MACL = r0 * r4;  /* 0C0734C8 mul.l Rm,Rn */
	r6 = R32(r11); UPD(0x0C0734CCu, 5);  /* 0C0734CA mov.l @Rm,Rn */
	r8 = 0xFFFFFEFFu; UPD(0x0C0734CEu, 1);  /* 0C0734CC mov.w @(disp,pc),Rn */
	r4 += 0x4Cu;  /* 0C0734CE add #imm,Rn */
	r6 &= r8;  /* 0C0734D0 and Rm,Rn */
	IF(0x0C0734D2u); r8 = MACL;  /* 0C0734D2 sts macl,Rn */
	r8 += r2;  /* 0C0734D4 add Rm,Rn */
	r10 = R32(r8); UPD(0x0C0734D8u, 5);  /* 0C0734D6 mov.l @Rm,Rn */
	r10 &= r4;  /* 0C0734D8 and Rm,Rn */
	r6 |= r10;  /* 0C0734DA or Rm,Rn */
	r5 = 0x84u; UPD(0x0C0734DEu, 3);  /* 0C0734DC mov.w @(disp,pc),Rn */
	r10 = r11;  /* 0C0734DE mov Rm,Rn */
	r10 += r5;  /* 0C0734E0 add Rm,Rn */
	r5 += r8;  /* 0C0734E2 add Rm,Rn */
	r5 += 0x2u;  /* 0C0734E4 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r5); UPD(0x0C0734E8u, 5);  /* 0C0734E6 mov.w @Rm,Rn */
	r10 += 0x2u;  /* 0C0734E8 add #imm,Rn */
	W16(r10, r9); UPD(0x0C0734ECu, 2);  /* 0C0734EA mov.w Rm,@Rn */
	r4 = r12;  /* 0C0734EC mov Rm,Rn */
	r13 = 0x98u; UPD(0x0C0734F0u, 2);  /* 0C0734EE mov.w @(disp,pc),Rn */
	r9 = r11;  /* 0C0734F0 mov Rm,Rn */
	r9 += r13;  /* 0C0734F2 add Rm,Rn */
	r13 += r8;  /* 0C0734F4 add Rm,Rn */
	r13 += 0x2u;  /* 0C0734F6 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r13); UPD(0x0C0734FAu, 5);  /* 0C0734F8 mov.b @Rm,Rn */
	r9 += 0x2u;  /* 0C0734FA add #imm,Rn */
	r7 = 0xC0A0380u; UPD(0x0C0734FEu, 2);  /* 0C0734FC mov.l @(disp,pc),Rn */
	r3 = R32(r8 + 0xCu); UPD(0x0C073500u, 1);  /* 0C0734FE mov.l @(disp,Rm),Rn */
	W8(r9, r0); UPD(0x0C073502u, 1);  /* 0C073500 mov.b Rm,@Rn */
	W32(r11 + 0xCu, r3); UPD(0x0C073504u, 1);  /* 0C073502 mov.l Rm,@(disp,Rn) */
	IF(0x0C073504u); { u32 t_ = r7; PR = 0x0C073508u; W32(r11, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C073508u); }  /* 0C073504 jsr @Rn */
L_0C073508: BLKS(0x0C073508u);
	r0 = 0x88u; UPD(0x0C07350Au, 1);  /* 0C073508 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C07350Cu, 1);  /* 0C07350A mov.w @Rm,Rn */
	IF(0x0C07350Cu); r1 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C07350Eu, 1);  /* 0C07350C mov.w @(r0,Rm),Rn */
	r6 = 0xC058060u; UPD(0x0C073510u, 1);  /* 0C07350E mov.l @(disp,pc),Rn */
	r4 += r1;  /* 0C073510 add Rm,Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C073512 exts.w Rm,Rn */
	r4 = r12;  /* 0C073514 mov Rm,Rn */
	IF(0x0C073516u); { u32 t_ = r6; PR = 0x0C07351Au; r5 = R32(r11 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07351Au); }  /* 0C073516 jsr @Rn */
L_0C07351A: BLKS(0x0C07351Au);
	r2 = R32(r8 + 0x24u); UPD(0x0C07351Cu, 1);  /* 0C07351A mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C07351C mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C073520u, 2);  /* 0C07351E mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C073520 add Rm,Rn */
	r5 = R32(r11 + 0x2Cu); UPD(0x0C073524u, 2);  /* 0C073522 mov.l @(disp,Rm),Rn */
	IF(0x0C073524u); { u32 t_ = r13; PR = 0x0C073528u; W32(r11 + 0x24u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C073528u); }  /* 0C073524 jsr @Rn */
L_0C073528: BLKS(0x0C073528u);
	r5 = R32(r8 + 0x28u); UPD(0x0C07352Au, 1);  /* 0C073528 mov.l @(disp,Rm),Rn */
	r12 = (u32)(s32)(s8)R8(r9); UPD(0x0C07352Cu, 1);  /* 0C07352A mov.b @Rm,Rn */
	r5 += r0;  /* 0C07352C add Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C07352E tst Rm,Rn */
	{ u32 c_ = T; W32(r11 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C073576u, 5); goto L_0C073576; } UPD(0x0C073534u, 1); goto L_0C073534; }  /* 0C073530 bt/s */
L_0C073534: BLKS(0x0C073534u);
	r12 = (u32)(s32)(s16)R16(r10); UPD(0x0C073536u, 1);  /* 0C073534 mov.w @Rm,Rn */
	r7 = 0xC058060u; UPD(0x0C073538u, 1);  /* 0C073536 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C073538 mov Rm,Rn */
	r10 = 0xC0000u; UPD(0x0C07353Cu, 2);  /* 0C07353A mov.l @(disp,pc),Rn */
	IF(0x0C07353Cu); { u32 t_ = r7; PR = 0x0C073540u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C073540u); }  /* 0C07353C jsr @Rn */
L_0C073540: BLKS(0x0C073540u);
	r9 = R32(r11 + 0x24u); UPD(0x0C073542u, 1);  /* 0C073540 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C073542 mov Rm,Rn */
	r9 += r0;  /* 0C073544 add Rm,Rn */
	IF(0x0C073546u); { u32 t_ = r13; PR = 0x0C07354Au; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07354Au); }  /* 0C073546 jsr @Rn */
L_0C07354A: BLKS(0x0C07354Au);
	r8 = R32(r11 + 0x28u); UPD(0x0C07354Cu, 1);  /* 0C07354A mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C07354C mov Rm,Rn */
	r8 += r0;  /* 0C07354E add Rm,Rn */
	r0 = 0xA9u; UPD(0x0C073552u, 3);  /* 0C073550 mov.w @(disp,pc),Rn */
	r5 = r8;  /* 0C073552 mov Rm,Rn */
	r13 = 0xC0A9BB0u; UPD(0x0C073556u, 2);  /* 0C073554 mov.l @(disp,pc),Rn */
	IF(0x0C073556u); r1 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C073558u, 1);  /* 0C073556 mov.b @(r0,Rm),Rn */
	IF(0x0C073558u); { u32 t_ = r13; PR = 0x0C07355Cu; r6 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C07355Cu); }  /* 0C073558 jsr @Rn */
L_0C07355C: BLKS(0x0C07355Cu);
	T = (r0 & r0) == 0;  /* 0C07355C tst Rm,Rn */
	if (T) { UPD(0x0C073576u, 4); goto L_0C073576; }  /* 0C07355E bt */
L_0C073560: BLKS(0x0C073560u);
	r15 += 0xFFFFFFFCu;  /* 0C073560 add #imm,Rn */
	r0 = 0xA1u; UPD(0x0C073564u, 2);  /* 0C073562 mov.w @(disp,pc),Rn */
	IF(0x0C073564u); r4 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C073566u, 1);  /* 0C073564 mov.b @(r0,Rm),Rn */
	r5 = r9;  /* 0C073566 mov Rm,Rn */
	r3 = R32(r11 + 0x30u); UPD(0x0C07356Au, 2);  /* 0C073568 mov.l @(disp,Rm),Rn */
	r6 = r8;  /* 0C07356A mov Rm,Rn */
	r11 = 0xC0A8E70u; UPD(0x0C07356Eu, 2);  /* 0C07356C mov.l @(disp,pc),Rn */
	r7 = r12;  /* 0C07356E mov Rm,Rn */
	IF(0x0C073570u); { u32 t_ = r11; PR = 0x0C073574u; W32(r15, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0A8E70, 0x0C0A8E70u, 0x0C073574u); }  /* 0C073570 jsr @Rn */
L_0C073574: BLKS(0x0C073574u);
	r15 += 0x4u;  /* 0C073574 add #imm,Rn */
	UPD(0x0C073576u, 1);
L_0C073576: BLKS(0x0C073576u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C072E62u, 3); goto L_0C072E62; }  /* 0C073576 bra */
L_0C073580: BLKS(0x0C073580u);
	r8 = 0xC0A03F0u; UPD(0x0C073582u, 1);  /* 0C073580 mov.l @(disp,pc),Rn */
	IF(0x0C073582u); { u32 t_ = r8; PR = 0x0C073586u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C073586u); }  /* 0C073582 jsr @Rn */
L_0C073586: BLKS(0x0C073586u);
	IF(0x0C073586u); T = (s32)r0 >= 0;  /* 0C073586 cmp/pz Rn */
	if (T) { UPD(0x0C07358Eu, 4); goto L_0C07358E; }  /* 0C073588 bt */
L_0C07358A: BLKS(0x0C07358Au);
	{ IF(0x0C07358Cu); ; /* slot nop */ UPD(0x0C0730B0u, 3); goto L_0C0730B0; }  /* 0C07358A bra */
L_0C07358E: BLKS(0x0C07358Eu);
	r13 = 0xB4u; UPD(0x0C073590u, 1);  /* 0C07358E mov.w @(disp,pc),Rn */
	IF(0x0C073590u); MACL = r12 * r13;  /* 0C073590 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C073594u, 3);  /* 0C073592 mov.l @(disp,pc),Rn */
	IF(0x0C073594u); r11 = MACL;  /* 0C073594 sts macl,Rn */
	r11 += r2;  /* 0C073596 add Rm,Rn */
	IF(0x0C073598u); MACL = r0 * r13;  /* 0C073598 mul.l Rm,Rn */
	r4 = R32(r11); UPD(0x0C07359Cu, 5);  /* 0C07359A mov.l @Rm,Rn */
	r8 = 0xFFFFFEFFu; UPD(0x0C07359Eu, 1);  /* 0C07359C mov.w @(disp,pc),Rn */
	r13 += 0x4Cu;  /* 0C07359E add #imm,Rn */
	r4 &= r8;  /* 0C0735A0 and Rm,Rn */
	IF(0x0C0735A2u); r8 = MACL;  /* 0C0735A2 sts macl,Rn */
	r8 += r2;  /* 0C0735A4 add Rm,Rn */
	r10 = R32(r8); UPD(0x0C0735A8u, 5);  /* 0C0735A6 mov.l @Rm,Rn */
	r10 &= r13;  /* 0C0735A8 and Rm,Rn */
	r4 |= r10;  /* 0C0735AA or Rm,Rn */
	r6 = 0x84u; UPD(0x0C0735AEu, 3);  /* 0C0735AC mov.w @(disp,pc),Rn */
	r10 = r11;  /* 0C0735AE mov Rm,Rn */
	r10 += r6;  /* 0C0735B0 add Rm,Rn */
	r6 += r8;  /* 0C0735B2 add Rm,Rn */
	r6 += 0x2u;  /* 0C0735B4 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r6); UPD(0x0C0735B8u, 5);  /* 0C0735B6 mov.w @Rm,Rn */
	r10 += 0x2u;  /* 0C0735B8 add #imm,Rn */
	W16(r10, r9); UPD(0x0C0735BCu, 2);  /* 0C0735BA mov.w Rm,@Rn */
	r5 = 0x98u; UPD(0x0C0735BEu, 1);  /* 0C0735BC mov.w @(disp,pc),Rn */
	r9 = r11;  /* 0C0735BE mov Rm,Rn */
	r9 += r5;  /* 0C0735C0 add Rm,Rn */
	r5 += r8;  /* 0C0735C2 add Rm,Rn */
	r5 += 0x2u;  /* 0C0735C4 add #imm,Rn */
	r0 = 0xC0A0380u; UPD(0x0C0735C8u, 5);  /* 0C0735C6 mov.l @(disp,pc),Rn */
	r9 += 0x2u;  /* 0C0735C8 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0735CCu, 2);  /* 0C0735CA mov.b @Rm,Rn */
	r7 = R32(r8 + 0xCu); UPD(0x0C0735CEu, 1);  /* 0C0735CC mov.l @(disp,Rm),Rn */
	W32(r11, r4); UPD(0x0C0735D0u, 1);  /* 0C0735CE mov.l Rm,@Rn */
	W8(r9, r3); UPD(0x0C0735D2u, 1);  /* 0C0735D0 mov.b Rm,@Rn */
	r4 = r12;  /* 0C0735D2 mov Rm,Rn */
	IF(0x0C0735D4u); { u32 t_ = r0; PR = 0x0C0735D8u; W32(r11 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0735D8u); }  /* 0C0735D4 jsr @Rn */
L_0C0735D8: BLKS(0x0C0735D8u);
	r0 = 0x88u; UPD(0x0C0735DAu, 1);  /* 0C0735D8 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C0735DCu, 1);  /* 0C0735DA mov.w @Rm,Rn */
	IF(0x0C0735DCu); r13 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C0735DEu, 1);  /* 0C0735DC mov.w @(r0,Rm),Rn */
	r2 = 0xC058060u; UPD(0x0C0735E0u, 1);  /* 0C0735DE mov.l @(disp,pc),Rn */
	r4 += r13;  /* 0C0735E0 add Rm,Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0735E2 exts.w Rm,Rn */
	r4 = r12;  /* 0C0735E4 mov Rm,Rn */
	IF(0x0C0735E6u); { u32 t_ = r2; PR = 0x0C0735EAu; r5 = R32(r11 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0735EAu); }  /* 0C0735E6 jsr @Rn */
L_0C0735EA: BLKS(0x0C0735EAu);
	r6 = R32(r8 + 0x24u); UPD(0x0C0735ECu, 1);  /* 0C0735EA mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C0735EC mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C0735F0u, 2);  /* 0C0735EE mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0735F0 add Rm,Rn */
	r5 = R32(r11 + 0x2Cu); UPD(0x0C0735F4u, 2);  /* 0C0735F2 mov.l @(disp,Rm),Rn */
	IF(0x0C0735F4u); { u32 t_ = r13; PR = 0x0C0735F8u; W32(r11 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0735F8u); }  /* 0C0735F4 jsr @Rn */
L_0C0735F8: BLKS(0x0C0735F8u);
	r5 = R32(r8 + 0x28u); UPD(0x0C0735FAu, 1);  /* 0C0735F8 mov.l @(disp,Rm),Rn */
	r12 = (u32)(s32)(s8)R8(r9); UPD(0x0C0735FCu, 1);  /* 0C0735FA mov.b @Rm,Rn */
	r5 += r0;  /* 0C0735FC add Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C0735FE tst Rm,Rn */
	{ u32 c_ = T; W32(r11 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C073576u, 5); goto L_0C073576; } UPD(0x0C073604u, 1); goto L_0C073604; }  /* 0C073600 bt/s */
L_0C073604: BLKS(0x0C073604u);
	r12 = (u32)(s32)(s16)R16(r10); UPD(0x0C073606u, 1);  /* 0C073604 mov.w @Rm,Rn */
	r7 = 0xC058060u; UPD(0x0C073608u, 1);  /* 0C073606 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C073608 mov Rm,Rn */
	r10 = 0xC0000u; UPD(0x0C07360Cu, 2);  /* 0C07360A mov.l @(disp,pc),Rn */
	IF(0x0C07360Cu); { u32 t_ = r7; PR = 0x0C073610u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C073610u); }  /* 0C07360C jsr @Rn */
L_0C073610: BLKS(0x0C073610u);
	r9 = R32(r11 + 0x24u); UPD(0x0C073612u, 1);  /* 0C073610 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C073612 mov Rm,Rn */
	r9 += r0;  /* 0C073614 add Rm,Rn */
	IF(0x0C073616u); { u32 t_ = r13; PR = 0x0C07361Au; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07361Au); }  /* 0C073616 jsr @Rn */
L_0C07361A: BLKS(0x0C07361Au);
	r8 = R32(r11 + 0x28u); UPD(0x0C07361Cu, 1);  /* 0C07361A mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C07361C mov Rm,Rn */
	r8 += r0;  /* 0C07361E add Rm,Rn */
	r0 = 0xA9u; UPD(0x0C073622u, 3);  /* 0C073620 mov.w @(disp,pc),Rn */
	r5 = r8;  /* 0C073622 mov Rm,Rn */
	IF(0x0C073624u); r1 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C073626u, 2);  /* 0C073624 mov.b @(r0,Rm),Rn */
	r11 = 0xC0A9BB0u; UPD(0x0C073628u, 1);  /* 0C073626 mov.l @(disp,pc),Rn */
	IF(0x0C073628u); { u32 t_ = r11; PR = 0x0C07362Cu; r6 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C07362Cu); }  /* 0C073628 jsr @Rn */
L_0C07362C: BLKS(0x0C07362Cu);
	T = (r0 & r0) == 0;  /* 0C07362C tst Rm,Rn */
	if (T) { UPD(0x0C073576u, 4); goto L_0C073576; }  /* 0C07362E bt */
L_0C073630: BLKS(0x0C073630u);
	r7 = r12;  /* 0C073630 mov Rm,Rn */
	r3 = 0x30000u; UPD(0x0C073634u, 2);  /* 0C073632 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C073634 add #imm,Rn */
	r0 = 0xC186C0Au; UPD(0x0C073638u, 2);  /* 0C073636 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C073638 mov #imm,Rn */
	r12 = 0xC0A8850u; UPD(0x0C07363Cu, 2);  /* 0C07363A mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C07363C mov Rm,Rn */
	W32(r15, r3); UPD(0x0C073640u, 2);  /* 0C07363E mov.l Rm,@Rn */
	r6 = r8;  /* 0C073640 mov Rm,Rn */
	IF(0x0C073642u); { u32 t_ = r12; PR = 0x0C073646u; W32(r15 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A8850, 0x0C0A8850u, 0x0C073646u); }  /* 0C073642 jsr @Rn */
L_0C073646: BLKS(0x0C073646u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C072E60u, 3); goto L_0C072E60; }  /* 0C073646 bra */
L_0C073690: BLKS(0x0C073690u);
	r9 = 0xC0A03F0u; UPD(0x0C073692u, 1);  /* 0C073690 mov.l @(disp,pc),Rn */
	IF(0x0C073692u); { u32 t_ = r9; PR = 0x0C073696u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C073696u); }  /* 0C073692 jsr @Rn */
L_0C073696: BLKS(0x0C073696u);
	IF(0x0C073696u); T = (s32)r0 >= 0;  /* 0C073696 cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0736A0u, 4); goto L_0C0736A0; } goto L_0C07369C; }  /* 0C073698 bt/s */
L_0C07369C: BLKS(0x0C07369Cu);
	{ IF(0x0C07369Eu); ; /* slot nop */ UPD(0x0C0730B0u, 4); goto L_0C0730B0; }  /* 0C07369C bra */
L_0C0736A0: BLKS(0x0C0736A0u);
	r0 = 0xB4u; UPD(0x0C0736A2u, 1);  /* 0C0736A0 mov.w @(disp,pc),Rn */
	IF(0x0C0736A2u); MACL = r12 * r0;  /* 0C0736A2 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0736A6u, 3);  /* 0C0736A4 mov.l @(disp,pc),Rn */
	IF(0x0C0736A6u); r4 = MACL;  /* 0C0736A6 sts macl,Rn */
	r4 += r3;  /* 0C0736A8 add Rm,Rn */
	r11 = R32(r4); UPD(0x0C0736ACu, 3);  /* 0C0736AA mov.l @Rm,Rn */
	IF(0x0C0736ACu); MACL = r10 * r0;  /* 0C0736AC mul.l Rm,Rn */
	r5 = 0xFFFFFEFFu; UPD(0x0C0736B0u, 3);  /* 0C0736AE mov.w @(disp,pc),Rn */
	r13 = r4;  /* 0C0736B0 mov Rm,Rn */
	r11 &= r5;  /* 0C0736B2 and Rm,Rn */
	IF(0x0C0736B4u); r5 = MACL;  /* 0C0736B4 sts macl,Rn */
	r5 += r3;  /* 0C0736B6 add Rm,Rn */
	r7 = R32(r5); UPD(0x0C0736BAu, 5);  /* 0C0736B8 mov.l @Rm,Rn */
	r0 += 0x4Cu;  /* 0C0736BA add #imm,Rn */
	r8 = 0x84u; UPD(0x0C0736BEu, 2);  /* 0C0736BC mov.w @(disp,pc),Rn */
	r7 &= r0;  /* 0C0736BE and Rm,Rn */
	r13 += r8;  /* 0C0736C0 add Rm,Rn */
	r0 = 0xA1u; UPD(0x0C0736C4u, 3);  /* 0C0736C2 mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C0736C4 add Rm,Rn */
	r8 += 0x2u;  /* 0C0736C6 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r8); UPD(0x0C0736CAu, 3);  /* 0C0736C8 mov.w @Rm,Rn */
	r13 += 0x2u;  /* 0C0736CA add #imm,Rn */
	IF(0x0C0736CCu); r6 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0736CEu, 2);  /* 0C0736CC mov.b @(r0,Rm),Rn */
	r11 |= r7;  /* 0C0736CE or Rm,Rn */
	W16(r13, r2); UPD(0x0C0736D2u, 2);  /* 0C0736D0 mov.w Rm,@Rn */
	r0 += 0xFFFFFFFBu;  /* 0C0736D2 add #imm,Rn */
	r7 = 0x98u; UPD(0x0C0736D6u, 2);  /* 0C0736D4 mov.w @(disp,pc),Rn */
	r2 = r4;  /* 0C0736D6 mov Rm,Rn */
	IF(0x0C0736D8u); r0 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0736DAu, 2);  /* 0C0736D8 mov.b @(r0,Rm),Rn */
	r2 += r7;  /* 0C0736DA add Rm,Rn */
	r0 &= 0x1u;  /* 0C0736DC and #imm,r0 */
	W32(r4, r11); UPD(0x0C0736E0u, 3);  /* 0C0736DE mov.l Rm,@Rn */
	T = r6 == r0;  /* 0C0736E0 cmp/eq Rm,Rn */
	{ u32 c_ = T; r2 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C073790u, 4); goto L_0C073790; } goto L_0C0736E6; }  /* 0C0736E2 bt/s */
L_0C0736E6: BLKS(0x0C0736E6u);
	r0 = 0x0u;  /* 0C0736E6 mov #imm,Rn */
	UPD(0x0C0736E8u, 2);
L_0C0736E8: BLKS(0x0C0736E8u);
	r13 = 0xB4u; UPD(0x0C0736EAu, 1);  /* 0C0736E8 mov.w @(disp,pc),Rn */
	IF(0x0C0736EAu); MACL = r12 * r13;  /* 0C0736EA mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C0736EEu, 3);  /* 0C0736EC mov.l @(disp,pc),Rn */
	IF(0x0C0736EEu); r11 = MACL;  /* 0C0736EE sts macl,Rn */
	IF(0x0C0736F0u); MACL = r10 * r13;  /* 0C0736F0 mul.l Rm,Rn */
	r11 += r4;  /* 0C0736F2 add Rm,Rn */
	W8(r2, r0); UPD(0x0C0736F6u, 5);  /* 0C0736F4 mov.b Rm,@Rn */
	IF(0x0C0736F6u); r13 = MACL;  /* 0C0736F6 sts macl,Rn */
	r13 += r4;  /* 0C0736F8 add Rm,Rn */
	r4 = r12;  /* 0C0736FA mov Rm,Rn */
	r12 = 0xC0A0380u; UPD(0x0C0736FEu, 4);  /* 0C0736FC mov.l @(disp,pc),Rn */
	r6 = R32(r13 + 0xCu); UPD(0x0C073700u, 1);  /* 0C0736FE mov.l @(disp,Rm),Rn */
	r9 = 0x86u; UPD(0x0C073702u, 1);  /* 0C073700 mov.w @(disp,pc),Rn */
	IF(0x0C073702u); { u32 t_ = r12; PR = 0x0C073706u; W32(r11 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C073706u); }  /* 0C073702 jsr @Rn */
L_0C073706: BLKS(0x0C073706u);
	r0 = r11;  /* 0C073706 mov Rm,Rn */
	IF(0x0C073708u); r12 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C07370Au, 2);  /* 0C073708 mov.w @(r0,Rm),Rn */
	r9 += 0x14u;  /* 0C07370A add #imm,Rn */
	IF(0x0C07370Cu); r10 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07370Eu, 2);  /* 0C07370C mov.b @(r0,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C07370E tst Rm,Rn */
	if (!T) { UPD(0x0C073750u, 4); goto L_0C073750; }  /* 0C073710 bf */
L_0C073712: BLKS(0x0C073712u);
	r10 = 0xC058060u; UPD(0x0C073714u, 1);  /* 0C073712 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C073714 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C073718u, 2);  /* 0C073716 mov.l @(disp,pc),Rn */
	IF(0x0C073718u); { u32 t_ = r10; PR = 0x0C07371Cu; r5 = R32(r11 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07371Cu); }  /* 0C073718 jsr @Rn */
L_0C07371C: BLKS(0x0C07371Cu);
	r8 = R32(r13 + 0x24u); UPD(0x0C07371Eu, 1);  /* 0C07371C mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C07371E mov Rm,Rn */
	r8 += r0;  /* 0C073720 add Rm,Rn */
	IF(0x0C073722u); { u32 t_ = r9; PR = 0x0C073726u; r5 = R32(r11 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C073726u); }  /* 0C073722 jsr @Rn */
L_0C073726: BLKS(0x0C073726u);
	r8 -= r0;  /* 0C073726 sub Rm,Rn */
	r4 = r12;  /* 0C073728 mov Rm,Rn */
	r5 = R32(r11 + 0x2Cu); UPD(0x0C07372Cu, 3);  /* 0C07372A mov.l @(disp,Rm),Rn */
	IF(0x0C07372Cu); { u32 t_ = r9; PR = 0x0C073730u; W32(r11 + 0x24u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C073730u); }  /* 0C07372C jsr @Rn */
L_0C073730: BLKS(0x0C073730u);
	r9 = R32(r13 + 0x28u); UPD(0x0C073732u, 1);  /* 0C073730 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C073732 mov Rm,Rn */
	r9 += r0;  /* 0C073734 add Rm,Rn */
	IF(0x0C073736u); { u32 t_ = r10; PR = 0x0C07373Au; r5 = R32(r11 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07373Au); }  /* 0C073736 jsr @Rn */
L_0C07373A: BLKS(0x0C07373Au);
	r9 += r0;  /* 0C07373A add Rm,Rn */
	r2 = R32(r11 + 0x2Cu); UPD(0x0C07373Eu, 2);  /* 0C07373C mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C07373E tst Rm,Rn */
	{ u32 c_ = T; W32(r11 + 0x28u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07374Au, 4); goto L_0C07374A; } UPD(0x0C073744u, 1); goto L_0C073744; }  /* 0C073740 bt/s */
L_0C073744: BLKS(0x0C073744u);
	r12 = 0x8000u; UPD(0x0C073746u, 1);  /* 0C073744 mov.l @(disp,pc),Rn */
	r2 += r12;  /* 0C073746 add Rm,Rn */
	W32(r11 + 0x2Cu, r2); UPD(0x0C07374Au, 2);  /* 0C073748 mov.l Rm,@(disp,Rn) */
L_0C07374A: BLKS(0x0C07374Au);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C072E62u, 3); goto L_0C072E62; }  /* 0C07374A bra */
L_0C073750: BLKS(0x0C073750u);
	r0 = 0xB0u; UPD(0x0C073752u, 1);  /* 0C073750 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C073752 add #imm,Rn */
	r4 = 0xFFF80000u; UPD(0x0C073756u, 2);  /* 0C073754 mov.l @(disp,pc),Rn */
	IF(0x0C073756u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C073758u, 1);  /* 0C073756 mov.b @(r0,Rm),Rn */
	W32(r11 + 0x2Cu, r4); UPD(0x0C07375Au, 1);  /* 0C073758 mov.l Rm,@(disp,Rn) */
	r9 = r6 & 0xFF;  /* 0C07375A extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C07375Eu, 2);  /* 0C07375C mov.l Rm,@Rn */
	r0 = r11;  /* 0C07375E mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C073762u, 2);  /* 0C073760 mov.w @(disp,pc),Rn */
	r10 = 0xC050D70u; UPD(0x0C073764u, 1);  /* 0C073762 mov.l @(disp,pc),Rn */
	IF(0x0C073764u); r3 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C073766u, 1);  /* 0C073764 mov.b @(r0,Rm),Rn */
	r7 = 0x8000u; UPD(0x0C073768u, 1);  /* 0C073766 mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C073768 extu.b Rm,Rn */
	W32(r15 + 0x8u, r7); UPD(0x0C07376Cu, 2);  /* 0C07376A mov.l Rm,@(disp,Rn) */
	r4 = 0x2000u; UPD(0x0C07376Eu, 1);  /* 0C07376C mov.w @(disp,pc),Rn */
	IF(0x0C07376Eu); { u32 t_ = r10; PR = 0x0C073772u; W32(r15 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C073772u); }  /* 0C07376E jsr @Rn */
L_0C073772: BLKS(0x0C073772u);
	r2 = 0x808080u; UPD(0x0C073774u, 1);  /* 0C073772 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C073774 mov #imm,Rn */
	r8 = 0xC0ACA40u; UPD(0x0C073778u, 2);  /* 0C073776 mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C07377Au, 1);  /* 0C073778 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r2); UPD(0x0C07377Cu, 1);  /* 0C07377A mov.l Rm,@(disp,Rn) */
	r4 = R32(r11); UPD(0x0C07377Eu, 1);  /* 0C07377C mov.l @Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C073780u, 1);  /* 0C07377E mov.l @(disp,Rm),Rn */
	IF(0x0C073780u); { u32 t_ = r8; PR = 0x0C073784u; r7 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C073784u); }  /* 0C073780 jsr @Rn */
L_0C073784: BLKS(0x0C073784u);
	{ r15 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C073712u, 3); goto L_0C073712; }  /* 0C073784 bra */
L_0C073790: BLKS(0x0C073790u);
	r5 += r7;  /* 0C073790 add Rm,Rn */
	r5 += 0x2u;  /* 0C073792 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C073796u, 3);  /* 0C073794 mov.b @Rm,Rn */
	{ r0 &= 0x1u; /* slot and #imm,r0 */ UPD(0x0C0736E8u, 3); goto L_0C0736E8; }  /* 0C073796 bra */
L_0C0737A0: BLKS(0x0C0737A0u);
	r11 = 0xC0A03F0u; UPD(0x0C0737A2u, 1);  /* 0C0737A0 mov.l @(disp,pc),Rn */
	IF(0x0C0737A2u); { u32 t_ = r11; PR = 0x0C0737A6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0737A6u); }  /* 0C0737A2 jsr @Rn */
L_0C0737A6: BLKS(0x0C0737A6u);
	IF(0x0C0737A6u); T = (s32)r0 >= 0;  /* 0C0737A6 cmp/pz Rn */
	if (!T) { UPD(0x0C0737FAu, 4); goto L_0C0737FA; }  /* 0C0737A8 bf */
L_0C0737AA: BLKS(0x0C0737AAu);
	r4 = r12;  /* 0C0737AA mov Rm,Rn */
	r1 = 0xC072660u; UPD(0x0C0737AEu, 2);  /* 0C0737AC mov.l @(disp,pc),Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C0733F0u, 3); goto L_0C0733F0; }  /* 0C0737AE bra */
L_0C0737F0: BLKS(0x0C0737F0u);
	r9 = 0xC0A03F0u; UPD(0x0C0737F2u, 1);  /* 0C0737F0 mov.l @(disp,pc),Rn */
	IF(0x0C0737F2u); { u32 t_ = r9; PR = 0x0C0737F6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0737F6u); }  /* 0C0737F2 jsr @Rn */
L_0C0737F6: BLKS(0x0C0737F6u);
	IF(0x0C0737F6u); T = (s32)r0 >= 0;  /* 0C0737F6 cmp/pz Rn */
	if (T) { UPD(0x0C0737FEu, 4); goto L_0C0737FE; }  /* 0C0737F8 bt */
L_0C0737FA: BLKS(0x0C0737FAu);
	{ IF(0x0C0737FCu); ; /* slot nop */ UPD(0x0C0730B0u, 3); goto L_0C0730B0; }  /* 0C0737FA bra */
L_0C0737FE: BLKS(0x0C0737FEu);
	r13 = 0xB4u; UPD(0x0C073800u, 1);  /* 0C0737FE mov.w @(disp,pc),Rn */
	IF(0x0C073800u); MACL = r12 * r13;  /* 0C073800 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C073804u, 3);  /* 0C073802 mov.l @(disp,pc),Rn */
	IF(0x0C073804u); r11 = MACL;  /* 0C073804 sts macl,Rn */
	IF(0x0C073806u); MACL = r0 * r13;  /* 0C073806 mul.l Rm,Rn */
	r11 += r2;  /* 0C073808 add Rm,Rn */
	r6 = R32(r11); UPD(0x0C07380Cu, 5);  /* 0C07380A mov.l @Rm,Rn */
	IF(0x0C07380Cu); r10 = MACL;  /* 0C07380C sts macl,Rn */
	r10 += r2;  /* 0C07380E add Rm,Rn */
	r4 = 0xFFFFFEFFu; UPD(0x0C073812u, 3);  /* 0C073810 mov.w @(disp,pc),Rn */
	r13 += 0x4Cu;  /* 0C073812 add #imm,Rn */
	r5 = R32(r10); UPD(0x0C073816u, 2);  /* 0C073814 mov.l @Rm,Rn */
	r6 &= r4;  /* 0C073816 and Rm,Rn */
	r5 &= r13;  /* 0C073818 and Rm,Rn */
	r4 = R32(r10 + 0xCu); UPD(0x0C07381Cu, 3);  /* 0C07381A mov.l @(disp,Rm),Rn */
	r13 = r11;  /* 0C07381C mov Rm,Rn */
	r3 = 0x84u; UPD(0x0C073820u, 2);  /* 0C07381E mov.w @(disp,pc),Rn */
	r7 = r11;  /* 0C073820 mov Rm,Rn */
	r9 = 0x98u; UPD(0x0C073824u, 2);  /* 0C073822 mov.w @(disp,pc),Rn */
	r13 += r3;  /* 0C073824 add Rm,Rn */
	W32(r11 + 0xCu, r4); UPD(0x0C073828u, 2);  /* 0C073826 mov.l Rm,@(disp,Rn) */
	r3 += r10;  /* 0C073828 add Rm,Rn */
	r7 += r9;  /* 0C07382A add Rm,Rn */
	r3 += 0x2u;  /* 0C07382C add #imm,Rn */
	r4 = r12;  /* 0C07382E mov Rm,Rn */
	r9 += r10;  /* 0C073830 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C073834u, 6);  /* 0C073832 mov.w @Rm,Rn */
	r9 += 0x2u;  /* 0C073834 add #imm,Rn */
	r12 = 0xC0A0380u; UPD(0x0C073838u, 2);  /* 0C073836 mov.l @(disp,pc),Rn */
	r13 += 0x2u;  /* 0C073838 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r9); UPD(0x0C07383Cu, 2);  /* 0C07383A mov.b @Rm,Rn */
	r6 |= r5;  /* 0C07383C or Rm,Rn */
	r7 += 0x2u;  /* 0C07383E add #imm,Rn */
	W16(r13, r0); UPD(0x0C073842u, 3);  /* 0C073840 mov.w Rm,@Rn */
	W8(r7, r8); UPD(0x0C073844u, 1);  /* 0C073842 mov.b Rm,@Rn */
	IF(0x0C073844u); { u32 t_ = r12; PR = 0x0C073848u; W32(r11, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C073848u); }  /* 0C073844 jsr @Rn */
L_0C073848: BLKS(0x0C073848u);
	r0 = 0x88u; UPD(0x0C07384Au, 1);  /* 0C073848 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r13); UPD(0x0C07384Cu, 1);  /* 0C07384A mov.w @Rm,Rn */
	IF(0x0C07384Cu); r1 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C07384Eu, 1);  /* 0C07384C mov.w @(r0,Rm),Rn */
	r6 = 0xC058060u; UPD(0x0C073850u, 1);  /* 0C07384E mov.l @(disp,pc),Rn */
	r5 += r1;  /* 0C073850 add Rm,Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C073852 exts.w Rm,Rn */
	r4 = r12;  /* 0C073854 mov Rm,Rn */
	IF(0x0C073856u); { u32 t_ = r6; PR = 0x0C07385Au; r5 = R32(r11 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07385Au); }  /* 0C073856 jsr @Rn */
L_0C07385A: BLKS(0x0C07385Au);
	r2 = R32(r10 + 0x24u); UPD(0x0C07385Cu, 1);  /* 0C07385A mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C07385C mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C073860u, 2);  /* 0C07385E mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C073860 add Rm,Rn */
	W32(r11 + 0x24u, r2); UPD(0x0C073864u, 2);  /* 0C073862 mov.l Rm,@(disp,Rn) */
	IF(0x0C073864u); { u32 t_ = r13; PR = 0x0C073868u; r5 = R32(r11 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C073868u); }  /* 0C073864 jsr @Rn */
L_0C073868: BLKS(0x0C073868u);
	r3 = R32(r10 + 0x28u); UPD(0x0C07386Au, 1);  /* 0C073868 mov.l @(disp,Rm),Rn */
	r10 += 0x50u;  /* 0C07386A add #imm,Rn */
	r3 += r0;  /* 0C07386C add Rm,Rn */
	r0 = R32(r10); UPD(0x0C073870u, 3);  /* 0C07386E mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C073870 tst Rm,Rn */
	{ u32 c_ = T; W32(r11 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0738D2u, 4); goto L_0C0738D2; } UPD(0x0C073876u, 1); goto L_0C073876; }  /* 0C073872 bt/s */
L_0C073876: BLKS(0x0C073876u);
	r10 = 0xC058060u; UPD(0x0C073878u, 1);  /* 0C073876 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C073878 mov Rm,Rn */
	r9 = 0x60000u; UPD(0x0C07387Cu, 2);  /* 0C07387A mov.l @(disp,pc),Rn */
	IF(0x0C07387Cu); { u32 t_ = r10; PR = 0x0C073880u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C073880u); }  /* 0C07387C jsr @Rn */
L_0C073880: BLKS(0x0C073880u);
	r10 = R32(r11 + 0x24u); UPD(0x0C073882u, 1);  /* 0C073880 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C073882 mov Rm,Rn */
	r4 = r12;  /* 0C073884 mov Rm,Rn */
	r8 = 0xC050D70u; UPD(0x0C073888u, 3);  /* 0C073886 mov.l @(disp,pc),Rn */
	IF(0x0C073888u); { u32 t_ = r13; PR = 0x0C07388Cu; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07388Cu); }  /* 0C073888 jsr @Rn */
L_0C07388C: BLKS(0x0C07388Cu);
	r9 = R32(r11 + 0x28u); UPD(0x0C07388Eu, 1);  /* 0C07388C mov.l @(disp,Rm),Rn */
	r4 = 0xFu;  /* 0C07388E mov #imm,Rn */
	IF(0x0C073890u); { u32 t_ = r8; PR = 0x0C073894u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C073894u); }  /* 0C073890 jsr @Rn */
L_0C073894: BLKS(0x0C073894u);
	r0 += r12;  /* 0C073894 add Rm,Rn */
	r0 += 0xFFFFFFF8u;  /* 0C073896 add #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C073898 exts.w Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07389Cu, 4);  /* 0C07389A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C07389C add #imm,Rn */
	IF(0x0C07389Eu); r5 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0738A0u, 2);  /* 0C07389E mov.b @(r0,Rm),Rn */
	r4 = r12;  /* 0C0738A0 mov Rm,Rn */
	r6 = r5 & 0xFF;  /* 0C0738A2 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0738A6u, 3);  /* 0C0738A4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0738A6 add #imm,Rn */
	IF(0x0C0738A8u); r3 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0738AAu, 2);  /* 0C0738A8 mov.b @(r0,Rm),Rn */
	r8 = r3 & 0xFF;  /* 0C0738AA extu.b Rm,Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C0738AEu, 2);  /* 0C0738AC mov.l Rm,@(disp,Rn) */
	r7 = 0xC058060u; UPD(0x0C0738B0u, 1);  /* 0C0738AE mov.l @(disp,pc),Rn */
	r8 = 0x10000u; UPD(0x0C0738B2u, 1);  /* 0C0738B0 mov.l @(disp,pc),Rn */
	IF(0x0C0738B2u); { u32 t_ = r7; PR = 0x0C0738B6u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0738B6u); }  /* 0C0738B2 jsr @Rn */
L_0C0738B6: BLKS(0x0C0738B6u);
	r4 = r12;  /* 0C0738B6 mov Rm,Rn */
	r12 = 0x808080u; UPD(0x0C0738BAu, 2);  /* 0C0738B8 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C0738BA mov Rm,Rn */
	IF(0x0C0738BCu); { u32 t_ = r13; PR = 0x0C0738C0u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0738C0u); }  /* 0C0738BC jsr @Rn */
L_0C0738C0: BLKS(0x0C0738C0u);
	W32(r15 + 0xCu, r0); UPD(0x0C0738C2u, 1);  /* 0C0738C0 mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C0738C2 mov #imm,Rn */
	W32(r15 + 0x10u, r12); UPD(0x0C0738C6u, 2);  /* 0C0738C4 mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C0738C6 mov Rm,Rn */
	r4 = R32(r11); UPD(0x0C0738CAu, 2);  /* 0C0738C8 mov.l @Rm,Rn */
	r11 = 0xC0ACA40u; UPD(0x0C0738CCu, 1);  /* 0C0738CA mov.l @(disp,pc),Rn */
	IF(0x0C0738CCu); { u32 t_ = r11; PR = 0x0C0738D0u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C0738D0u); }  /* 0C0738CC jsr @Rn */
L_0C0738D0: BLKS(0x0C0738D0u);
	r15 += 0x14u;  /* 0C0738D0 add #imm,Rn */
	UPD(0x0C0738D2u, 1);
L_0C0738D2: BLKS(0x0C0738D2u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C072E62u, 3); goto L_0C072E62; }  /* 0C0738D2 bra */
L_0C0738E0: BLKS(0x0C0738E0u);
	r13 = 0xC0A03F0u; UPD(0x0C0738E2u, 1);  /* 0C0738E0 mov.l @(disp,pc),Rn */
	IF(0x0C0738E2u); { u32 t_ = r13; PR = 0x0C0738E6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0738E6u); }  /* 0C0738E2 jsr @Rn */
L_0C0738E6: BLKS(0x0C0738E6u);
	IF(0x0C0738E6u); T = (s32)r0 >= 0;  /* 0C0738E6 cmp/pz Rn */
	if (T) { UPD(0x0C0738EEu, 4); goto L_0C0738EE; }  /* 0C0738E8 bt */
L_0C0738EA: BLKS(0x0C0738EAu);
	{ IF(0x0C0738ECu); ; /* slot nop */ UPD(0x0C0730B0u, 3); goto L_0C0730B0; }  /* 0C0738EA bra */
L_0C0738EE: BLKS(0x0C0738EEu);
	r8 = 0xB4u; UPD(0x0C0738F0u, 1);  /* 0C0738EE mov.w @(disp,pc),Rn */
	IF(0x0C0738F0u); MACL = r12 * r8;  /* 0C0738F0 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0738F4u, 3);  /* 0C0738F2 mov.l @(disp,pc),Rn */
	IF(0x0C0738F4u); r11 = MACL;  /* 0C0738F4 sts macl,Rn */
	r11 += r2;  /* 0C0738F6 add Rm,Rn */
	IF(0x0C0738F8u); MACL = r0 * r8;  /* 0C0738F8 mul.l Rm,Rn */
	r9 = R32(r11); UPD(0x0C0738FCu, 5);  /* 0C0738FA mov.l @Rm,Rn */
	r10 = r11;  /* 0C0738FC mov Rm,Rn */
	r13 = 0xFFFFFEFFu; UPD(0x0C073900u, 2);  /* 0C0738FE mov.w @(disp,pc),Rn */
	r8 += 0x4Cu;  /* 0C073900 add #imm,Rn */
	r9 &= r13;  /* 0C073902 and Rm,Rn */
	IF(0x0C073904u); r13 = MACL;  /* 0C073904 sts macl,Rn */
	r13 += r2;  /* 0C073906 add Rm,Rn */
	r0 = R32(r13); UPD(0x0C07390Au, 5);  /* 0C073908 mov.l @Rm,Rn */
	r5 = 0x84u; UPD(0x0C07390Cu, 1);  /* 0C07390A mov.w @(disp,pc),Rn */
	r0 &= r8;  /* 0C07390C and Rm,Rn */
	r3 = 0x98u; UPD(0x0C073910u, 2);  /* 0C07390E mov.w @(disp,pc),Rn */
	r8 = r11;  /* 0C073910 mov Rm,Rn */
	r8 += r5;  /* 0C073912 add Rm,Rn */
	r10 += r3;  /* 0C073914 add Rm,Rn */
	r4 = R32(r13 + 0xCu); UPD(0x0C073918u, 4);  /* 0C073916 mov.l @(disp,Rm),Rn */
	r5 += r13;  /* 0C073918 add Rm,Rn */
	r3 += r13;  /* 0C07391A add Rm,Rn */
	r5 += 0x2u;  /* 0C07391C add #imm,Rn */
	r3 += 0x2u;  /* 0C07391E add #imm,Rn */
	r2 = 0xC0A0380u; UPD(0x0C073922u, 5);  /* 0C073920 mov.l @(disp,pc),Rn */
	r9 |= r0;  /* 0C073922 or Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C073926u, 2);  /* 0C073924 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C073926 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C07392Au, 2);  /* 0C073928 mov.b @Rm,Rn */
	r10 += 0x2u;  /* 0C07392A add #imm,Rn */
	W32(r11 + 0xCu, r4); UPD(0x0C07392Eu, 2);  /* 0C07392C mov.l Rm,@(disp,Rn) */
	W32(r11, r9); UPD(0x0C073930u, 1);  /* 0C07392E mov.l Rm,@Rn */
	r4 = r12;  /* 0C073930 mov Rm,Rn */
	W16(r8, r6); UPD(0x0C073934u, 2);  /* 0C073932 mov.w Rm,@Rn */
	IF(0x0C073934u); { u32 t_ = r2; PR = 0x0C073938u; W8(r10, r7); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C073938u); }  /* 0C073934 jsr @Rn */
L_0C073938: BLKS(0x0C073938u);
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C07393Au, 1);  /* 0C073938 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C07393A tst Rm,Rn */
	{ u32 c_ = T; r12 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ if (c_) { UPD(0x0C0739A0u, 4); goto L_0C0739A0; } UPD(0x0C073940u, 1); goto L_0C073940; }  /* 0C07393C bt/s */
L_0C073940: BLKS(0x0C073940u);
	r10 = r11;  /* 0C073940 mov Rm,Rn */
	r4 = 0xFFF80000u; UPD(0x0C073944u, 2);  /* 0C073942 mov.l @(disp,pc),Rn */
	r10 += 0x50u;  /* 0C073944 add #imm,Rn */
	W32(r14, r10); UPD(0x0C073948u, 2);  /* 0C073946 mov.l Rm,@Rn */
	W32(r10, r4); UPD(0x0C07394Au, 1);  /* 0C073948 mov.l Rm,@Rn */
L_0C07394A: BLKS(0x0C07394Au);
	r0 = R32(r14); UPD(0x0C07394Cu, 1);  /* 0C07394A mov.l @Rm,Rn */
	r4 = r12;  /* 0C07394C mov Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C073950u, 2);  /* 0C07394E mov.l @(disp,pc),Rn */
	r6 = R32(r0); UPD(0x0C073952u, 1);  /* 0C073950 mov.l @Rm,Rn */
	r5 = R32(r11 + 0x2Cu); UPD(0x0C073954u, 1);  /* 0C073952 mov.l @(disp,Rm),Rn */
	r9 = 0xC058030u; UPD(0x0C073956u, 1);  /* 0C073954 mov.l @(disp,pc),Rn */
	IF(0x0C073956u); { u32 t_ = r10; PR = 0x0C07395Au; r5 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07395Au); }  /* 0C073956 jsr @Rn */
L_0C07395A: BLKS(0x0C07395Au);
	r8 = R32(r13 + 0x24u); UPD(0x0C07395Cu, 1);  /* 0C07395A mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C07395C mov Rm,Rn */
	r5 = R32(r11 + 0x30u); UPD(0x0C073960u, 2);  /* 0C07395E mov.l @(disp,Rm),Rn */
	IF(0x0C073960u); { u32 t_ = r9; PR = 0x0C073964u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C073964u); }  /* 0C073960 jsr @Rn */
L_0C073964: BLKS(0x0C073964u);
	r3 = R32(r14); UPD(0x0C073966u, 1);  /* 0C073964 mov.l @Rm,Rn */
	r8 -= r0;  /* 0C073966 sub Rm,Rn */
	r5 = R32(r11 + 0x2Cu); UPD(0x0C07396Au, 2);  /* 0C073968 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C07396A mov Rm,Rn */
	r7 = R32(r3); UPD(0x0C07396Eu, 2);  /* 0C07396C mov.l @Rm,Rn */
	W32(r11 + 0x24u, r8); UPD(0x0C073970u, 1);  /* 0C07396E mov.l Rm,@(disp,Rn) */
	IF(0x0C073970u); { u32 t_ = r9; PR = 0x0C073974u; r5 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C073974u); }  /* 0C073970 jsr @Rn */
L_0C073974: BLKS(0x0C073974u);
	r9 = R32(r13 + 0x28u); UPD(0x0C073976u, 1);  /* 0C073974 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C073976 mov Rm,Rn */
	r9 += r0;  /* 0C073978 add Rm,Rn */
	IF(0x0C07397Au); { u32 t_ = r10; PR = 0x0C07397Eu; r5 = R32(r11 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07397Eu); }  /* 0C07397A jsr @Rn */
L_0C07397E: BLKS(0x0C07397Eu);
	r9 += r0;  /* 0C07397E add Rm,Rn */
	W32(r11 + 0x28u, r9); UPD(0x0C073982u, 2);  /* 0C073980 mov.l Rm,@(disp,Rn) */
	r11 = R32(r14); UPD(0x0C073984u, 1);  /* 0C073982 mov.l @Rm,Rn */
	r2 = R32(r11); UPD(0x0C073986u, 1);  /* 0C073984 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C073986 tst Rm,Rn */
	if (T) { UPD(0x0C0738D2u, 4); goto L_0C0738D2; }  /* 0C073988 bt */
L_0C07398A: BLKS(0x0C07398Au);
	r12 = R32(r14); UPD(0x0C07398Cu, 1);  /* 0C07398A mov.l @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C07398Eu, 1);  /* 0C07398C mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C07398E add Rm,Rn */
	{ W32(r12, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C072E60u, 4); goto L_0C072E60; }  /* 0C073990 bra */
L_0C0739A0: BLKS(0x0C0739A0u);
	r1 = r11;  /* 0C0739A0 mov Rm,Rn */
	r1 += 0x50u;  /* 0C0739A2 add #imm,Rn */
	{ W32(r14, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C07394Au, 5); goto L_0C07394A; }  /* 0C0739A4 bra */
L_0C0739F0: BLKS(0x0C0739F0u);
	r8 = 0xC0A03F0u; UPD(0x0C0739F2u, 1);  /* 0C0739F0 mov.l @(disp,pc),Rn */
	IF(0x0C0739F2u); { u32 t_ = r8; PR = 0x0C0739F6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0739F6u); }  /* 0C0739F2 jsr @Rn */
L_0C0739F6: BLKS(0x0C0739F6u);
	IF(0x0C0739F6u); T = (s32)r0 >= 0;  /* 0C0739F6 cmp/pz Rn */
	{ u32 c_ = !T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C073A9Cu, 4); goto L_0C073A9C; } goto L_0C0739FC; }  /* 0C0739F8 bf/s */
L_0C0739FC: BLKS(0x0C0739FCu);
	r3 = 0xB4u; UPD(0x0C0739FEu, 2);  /* 0C0739FC mov.w @(disp,pc),Rn */
	IF(0x0C0739FEu); MACL = r12 * r3;  /* 0C0739FE mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C073A02u, 3);  /* 0C073A00 mov.l @(disp,pc),Rn */
	IF(0x0C073A02u); r13 = MACL;  /* 0C073A02 sts macl,Rn */
	r13 += r0;  /* 0C073A04 add Rm,Rn */
	IF(0x0C073A06u); MACL = r10 * r3;  /* 0C073A06 mul.l Rm,Rn */
	r6 = R32(r13); UPD(0x0C073A0Au, 5);  /* 0C073A08 mov.l @Rm,Rn */
	r5 = r13;  /* 0C073A0A mov Rm,Rn */
	r11 = 0xFFFFFEFFu; UPD(0x0C073A0Eu, 2);  /* 0C073A0C mov.w @(disp,pc),Rn */
	r3 += 0x4Cu;  /* 0C073A0E add #imm,Rn */
	r6 &= r11;  /* 0C073A10 and Rm,Rn */
	IF(0x0C073A12u); r11 = MACL;  /* 0C073A12 sts macl,Rn */
	r11 += r0;  /* 0C073A14 add Rm,Rn */
	r7 = R32(r11); UPD(0x0C073A18u, 5);  /* 0C073A16 mov.l @Rm,Rn */
	r10 = r13;  /* 0C073A18 mov Rm,Rn */
	r7 &= r3;  /* 0C073A1A and Rm,Rn */
	r4 = 0x84u; UPD(0x0C073A1Eu, 3);  /* 0C073A1C mov.w @(disp,pc),Rn */
	r6 |= r7;  /* 0C073A1E or Rm,Rn */
	r2 = 0x98u; UPD(0x0C073A22u, 2);  /* 0C073A20 mov.w @(disp,pc),Rn */
	r10 += r4;  /* 0C073A22 add Rm,Rn */
	W32(r13, r6); UPD(0x0C073A26u, 2);  /* 0C073A24 mov.l Rm,@Rn */
	r5 += r2;  /* 0C073A26 add Rm,Rn */
	r4 += r11;  /* 0C073A28 add Rm,Rn */
	r2 += r11;  /* 0C073A2A add Rm,Rn */
	r2 += 0x2u;  /* 0C073A2C add #imm,Rn */
	r0 = R32(r11 + 0xCu); UPD(0x0C073A30u, 5);  /* 0C073A2E mov.l @(disp,Rm),Rn */
	r4 += 0x2u;  /* 0C073A30 add #imm,Rn */
	r6 = 0xC0A0380u; UPD(0x0C073A34u, 2);  /* 0C073A32 mov.l @(disp,pc),Rn */
	r10 += 0x2u;  /* 0C073A34 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C073A38u, 2);  /* 0C073A36 mov.b @Rm,Rn */
	r5 += 0x2u;  /* 0C073A38 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r4); UPD(0x0C073A3Cu, 2);  /* 0C073A3A mov.w @Rm,Rn */
	W32(r13 + 0xCu, r0); UPD(0x0C073A3Eu, 1);  /* 0C073A3C mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C073A3E mov Rm,Rn */
	W16(r10, r9); UPD(0x0C073A42u, 2);  /* 0C073A40 mov.w Rm,@Rn */
	IF(0x0C073A42u); { u32 t_ = r6; PR = 0x0C073A46u; W8(r5, r8); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C073A46u); }  /* 0C073A42 jsr @Rn */
L_0C073A46: BLKS(0x0C073A46u);
	r0 = 0x88u; UPD(0x0C073A48u, 1);  /* 0C073A46 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C073A4Au, 1);  /* 0C073A48 mov.w @Rm,Rn */
	IF(0x0C073A4Au); r3 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C073A4Cu, 1);  /* 0C073A4A mov.w @(r0,Rm),Rn */
	r12 = 0xC058060u; UPD(0x0C073A4Eu, 1);  /* 0C073A4C mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C073A4E add Rm,Rn */
	r9 = (u32)(s32)(s16)r7;  /* 0C073A50 exts.w Rm,Rn */
	r4 = r9;  /* 0C073A52 mov Rm,Rn */
	IF(0x0C073A54u); { u32 t_ = r12; PR = 0x0C073A58u; r5 = R32(r13 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C073A58u); }  /* 0C073A54 jsr @Rn */
L_0C073A58: BLKS(0x0C073A58u);
	r4 = R32(r11 + 0x24u); UPD(0x0C073A5Au, 1);  /* 0C073A58 mov.l @(disp,Rm),Rn */
	r10 = 0xC058030u; UPD(0x0C073A5Cu, 1);  /* 0C073A5A mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C073A5C add Rm,Rn */
	W32(r13 + 0x24u, r4); UPD(0x0C073A60u, 2);  /* 0C073A5E mov.l Rm,@(disp,Rn) */
	r5 = R32(r13 + 0x2Cu); UPD(0x0C073A62u, 1);  /* 0C073A60 mov.l @(disp,Rm),Rn */
	IF(0x0C073A62u); { u32 t_ = r10; PR = 0x0C073A66u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C073A66u); }  /* 0C073A62 jsr @Rn */
L_0C073A66: BLKS(0x0C073A66u);
	r2 = R32(r11 + 0x28u); UPD(0x0C073A68u, 1);  /* 0C073A66 mov.l @(disp,Rm),Rn */
	r2 += r0;  /* 0C073A68 add Rm,Rn */
	W32(r13 + 0x28u, r2); UPD(0x0C073A6Cu, 2);  /* 0C073A6A mov.l Rm,@(disp,Rn) */
L_0C073A6C: BLKS(0x0C073A6Cu);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C072E62u, 3); goto L_0C072E62; }  /* 0C073A6C bra */
L_0C073A70: BLKS(0x0C073A70u);
	r9 = 0xC0A03F0u; UPD(0x0C073A72u, 1);  /* 0C073A70 mov.l @(disp,pc),Rn */
	IF(0x0C073A72u); { u32 t_ = r9; PR = 0x0C073A76u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C073A76u); }  /* 0C073A72 jsr @Rn */
L_0C073A76: BLKS(0x0C073A76u);
	IF(0x0C073A76u); T = (s32)r0 >= 0;  /* 0C073A76 cmp/pz Rn */
	if (!T) { UPD(0x0C073A9Cu, 4); goto L_0C073A9C; }  /* 0C073A78 bf */
L_0C073A7A: BLKS(0x0C073A7Au);
	r4 = r12;  /* 0C073A7A mov Rm,Rn */
	r1 = 0xC072530u; UPD(0x0C073A7Eu, 2);  /* 0C073A7C mov.l @(disp,pc),Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C0733F0u, 3); goto L_0C0733F0; }  /* 0C073A7E bra */
L_0C073A90: BLKS(0x0C073A90u);
	r13 = 0xC0A03F0u; UPD(0x0C073A92u, 1);  /* 0C073A90 mov.l @(disp,pc),Rn */
	IF(0x0C073A92u); { u32 t_ = r13; PR = 0x0C073A96u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C073A96u); }  /* 0C073A92 jsr @Rn */
L_0C073A96: BLKS(0x0C073A96u);
	IF(0x0C073A96u); T = (s32)r0 >= 0;  /* 0C073A96 cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C073AA0u, 4); goto L_0C073AA0; } UPD(0x0C073A9Cu, 1); goto L_0C073A9C; }  /* 0C073A98 bt/s */
L_0C073A9C: BLKS(0x0C073A9Cu);
	{ IF(0x0C073A9Eu); ; /* slot nop */ UPD(0x0C0730B0u, 3); goto L_0C0730B0; }  /* 0C073A9C bra */
L_0C073AA0: BLKS(0x0C073AA0u);
	r11 = 0xB4u; UPD(0x0C073AA2u, 1);  /* 0C073AA0 mov.w @(disp,pc),Rn */
	r8 = 0x8u;  /* 0C073AA2 mov #imm,Rn */
	IF(0x0C073AA4u); MACL = r12 * r11;  /* 0C073AA4 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C073AA8u, 4);  /* 0C073AA6 mov.l @(disp,pc),Rn */
	IF(0x0C073AA8u); r0 = MACL;  /* 0C073AA8 sts macl,Rn */
	IF(0x0C073AAAu); MACL = r10 * r11;  /* 0C073AAA mul.l Rm,Rn */
	r0 += r2;  /* 0C073AAC add Rm,Rn */
	r9 = R32(r0); UPD(0x0C073AB0u, 5);  /* 0C073AAE mov.l @Rm,Rn */
	IF(0x0C073AB0u); r4 = MACL;  /* 0C073AB0 sts macl,Rn */
	r4 += r2;  /* 0C073AB2 add Rm,Rn */
	r6 = R32(r4); UPD(0x0C073AB6u, 3);  /* 0C073AB4 mov.l @Rm,Rn */
	r11 += 0x4Cu;  /* 0C073AB6 add #imm,Rn */
	r13 = 0xFFFFFEFFu; UPD(0x0C073ABAu, 2);  /* 0C073AB8 mov.w @(disp,pc),Rn */
	r6 &= r11;  /* 0C073ABA and Rm,Rn */
	r7 = R32(r4 + 0x24u); UPD(0x0C073ABEu, 2);  /* 0C073ABC mov.l @(disp,Rm),Rn */
	r9 &= r13;  /* 0C073ABE and Rm,Rn */
	r3 = R32(r4 + 0x28u); UPD(0x0C073AC2u, 2);  /* 0C073AC0 mov.l @(disp,Rm),Rn */
	r9 |= r6;  /* 0C073AC2 or Rm,Rn */
	r5 = R32(r0 + 0x2Cu); UPD(0x0C073AC6u, 2);  /* 0C073AC4 mov.l @(disp,Rm),Rn */
	r1 = R32(r0 + 0x30u); UPD(0x0C073AC8u, 1);  /* 0C073AC6 mov.l @(disp,Rm),Rn */
	r7 += r5;  /* 0C073AC8 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C073ACCu, 2);  /* 0C073ACA mov.l @(disp,Rm),Rn */
	r3 += r1;  /* 0C073ACC add Rm,Rn */
	r2 += 0xFFFFFFC1u;  /* 0C073ACE add #imm,Rn */
	W32(r0, r9); UPD(0x0C073AD2u, 3);  /* 0C073AD0 mov.l Rm,@Rn */
	T = r2 > r8;  /* 0C073AD2 cmp/hi Rm,Rn */
	W32(r0 + 0x24u, r7); UPD(0x0C073AD6u, 2);  /* 0C073AD4 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r0 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C073A6Cu, 3); goto L_0C073A6C; } UPD(0x0C073ADAu, 1); goto L_0C073ADA; }  /* 0C073AD6 bt/s */
L_0C073ADA: BLKS(0x0C073ADAu);
	r0 = 0xC073B08u;  /* 0C073ADA mova @(disp,pc),r0 */
	r2 += r2;  /* 0C073ADC add Rm,Rn */
	IF(0x0C073ADEu); r8 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C073AE0u, 3);  /* 0C073ADE mov.w @(r0,Rm),Rn */
	IF(0x0C073AE0u); { u32 tv_ = (r8 + 0x0C073AE4u); u32 t_ = PHYS(tv_); IF(0x0C073AE2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C073B20u: goto L_0C073B20; case 0x0C073B30u: goto L_0C073B30; case 0x0C073BB0u: goto L_0C073BB0; case 0x0C073C20u: goto L_0C073C20; case 0x0C073C90u: goto L_0C073C90; case 0x0C073CE0u: goto L_0C073CE0; case 0x0C073D50u: goto L_0C073D50; case 0x0C073D60u: goto L_0C073D60; case 0x0C073D70u: goto L_0C073D70; default: JUMPD(tv_); } }  /* 0C073AE0 braf Rn */
L_0C073B20: BLKS(0x0C073B20u);
	r1 = 0xC06F930u; UPD(0x0C073B22u, 1);  /* 0C073B20 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C073B22 mov Rm,Rn */
	{ r5 = r10; /* slot mov Rm,Rn */ UPD(0x0C0733F0u, 4); goto L_0C0733F0; }  /* 0C073B24 bra */
L_0C073B30: BLKS(0x0C073B30u);
	r5 = r10;  /* 0C073B30 mov Rm,Rn */
	r10 = 0xC0A0670u; UPD(0x0C073B34u, 2);  /* 0C073B32 mov.l @(disp,pc),Rn */
	IF(0x0C073B34u); { u32 t_ = r10; PR = 0x0C073B38u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C073B38u); }  /* 0C073B34 jsr @Rn */
L_0C073B38: BLKS(0x0C073B38u);
	T = (r0 & r0) == 0;  /* 0C073B38 tst Rm,Rn */
	if (T) { UPD(0x0C073A6Cu, 4); goto L_0C073A6C; }  /* 0C073B3A bt */
L_0C073B3C: BLKS(0x0C073B3Cu);
	r4 = r12;  /* 0C073B3C mov Rm,Rn */
	r9 = 0xC0A9E40u; UPD(0x0C073B40u, 2);  /* 0C073B3E mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C073B40 mov #imm,Rn */
	IF(0x0C073B42u); { u32 t_ = r9; PR = 0x0C073B46u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C073B46u); }  /* 0C073B42 jsr @Rn */
L_0C073B46: BLKS(0x0C073B46u);
	T = (r0 & r0) == 0;  /* 0C073B46 tst Rm,Rn */
	if (T) { UPD(0x0C073A6Cu, 4); goto L_0C073A6C; }  /* 0C073B48 bt */
L_0C073B4A: BLKS(0x0C073B4Au);
	r7 = 0xB4u; UPD(0x0C073B4Cu, 1);  /* 0C073B4A mov.w @(disp,pc),Rn */
	IF(0x0C073B4Cu); MACL = r12 * r7;  /* 0C073B4C mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C073B50u, 3);  /* 0C073B4E mov.l @(disp,pc),Rn */
	IF(0x0C073B50u); r10 = MACL;  /* 0C073B50 sts macl,Rn */
	r10 += r0;  /* 0C073B52 add Rm,Rn */
	r4 = 0xA9u; UPD(0x0C073B56u, 3);  /* 0C073B54 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C073B56 mov Rm,Rn */
	r11 = 0xC0A9BB0u; UPD(0x0C073B5Au, 2);  /* 0C073B58 mov.l @(disp,pc),Rn */
	IF(0x0C073B5Au); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C073B5Cu, 1);  /* 0C073B5A mov.b @(r0,Rm),Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C073B5Eu, 1);  /* 0C073B5C mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C073B5E extu.b Rm,Rn */
	IF(0x0C073B60u); { u32 t_ = r11; PR = 0x0C073B64u; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C073B64u); }  /* 0C073B60 jsr @Rn */
L_0C073B64: BLKS(0x0C073B64u);
	T = (r0 & r0) == 0;  /* 0C073B64 tst Rm,Rn */
	if (T) { UPD(0x0C073C3Au, 4); goto L_0C073C3A; }  /* 0C073B66 bt */
L_0C073B68: BLKS(0x0C073B68u);
	r0 = r10;  /* 0C073B68 mov Rm,Rn */
	r2 = 0x86u; UPD(0x0C073B6Cu, 2);  /* 0C073B6A mov.w @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C073B6Eu, 1);  /* 0C073B6C mov.l @(disp,pc),Rn */
	IF(0x0C073B6Eu); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C073B70u, 1);  /* 0C073B6E mov.w @(r0,Rm),Rn */
	r5 = 0x100000u; UPD(0x0C073B72u, 1);  /* 0C073B70 mov.l @(disp,pc),Rn */
	IF(0x0C073B72u); { u32 t_ = r8; PR = 0x0C073B76u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C073B76u); }  /* 0C073B72 jsr @Rn */
L_0C073B76: BLKS(0x0C073B76u);
	r8 = R32(r10 + 0x24u); UPD(0x0C073B78u, 1);  /* 0C073B76 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C073B78 mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C073B7Cu, 2);  /* 0C073B7A mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C073B7C add Rm,Rn */
	r6 = 0x20000u; UPD(0x0C073B80u, 2);  /* 0C073B7E mov.l @(disp,pc),Rn */
	r5 = 0x140000u; UPD(0x0C073B82u, 1);  /* 0C073B80 mov.l @(disp,pc),Rn */
	IF(0x0C073B82u); { u32 t_ = r13; PR = 0x0C073B86u; r8 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C073B86u); }  /* 0C073B82 jsr @Rn */
L_0C073B86: BLKS(0x0C073B86u);
	r6 = R32(r10 + 0x28u); UPD(0x0C073B88u, 1);  /* 0C073B86 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C073B88 add #imm,Rn */
	r5 = 0x30000u; UPD(0x0C073B8Cu, 2);  /* 0C073B8A mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C073B8C add Rm,Rn */
	W32(r15, r5); UPD(0x0C073B90u, 2);  /* 0C073B8E mov.l Rm,@Rn */
	r4 = 0x3u;  /* 0C073B90 mov #imm,Rn */
	UPD(0x0C073B92u, 1);
L_0C073B92: BLKS(0x0C073B92u);
	r0 = 0xC0A8A50u; UPD(0x0C073B94u, 1);  /* 0C073B92 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C073B94 mov Rm,Rn */
	r7 = r9;  /* 0C073B96 mov Rm,Rn */
	UPD(0x0C073B98u, 2);
L_0C073B98: BLKS(0x0C073B98u);
	IF(0x0C073B98u); { u32 t_ = r0; PR = 0x0C073B9Cu; IF(0x0C073B9Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C073B9Cu); }  /* 0C073B98 jsr @Rn */
L_0C073B9C: BLKS(0x0C073B9Cu);
	r1 = 0xC0580D0u; UPD(0x0C073B9Eu, 1);  /* 0C073B9C mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C073B9E add #imm,Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C072EFCu, 4); goto L_0C072EFC; }  /* 0C073BA0 bra */
L_0C073BB0: BLKS(0x0C073BB0u);
	r5 = r10;  /* 0C073BB0 mov Rm,Rn */
	r10 = 0xC0A0670u; UPD(0x0C073BB4u, 2);  /* 0C073BB2 mov.l @(disp,pc),Rn */
	IF(0x0C073BB4u); { u32 t_ = r10; PR = 0x0C073BB8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C073BB8u); }  /* 0C073BB4 jsr @Rn */
L_0C073BB8: BLKS(0x0C073BB8u);
	T = (r0 & r0) == 0;  /* 0C073BB8 tst Rm,Rn */
	if (T) { UPD(0x0C073C3Au, 4); goto L_0C073C3A; }  /* 0C073BBA bt */
L_0C073BBC: BLKS(0x0C073BBCu);
	r4 = r12;  /* 0C073BBC mov Rm,Rn */
	r9 = 0xC0A9E40u; UPD(0x0C073BC0u, 2);  /* 0C073BBE mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C073BC0 mov #imm,Rn */
	IF(0x0C073BC2u); { u32 t_ = r9; PR = 0x0C073BC6u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C073BC6u); }  /* 0C073BC2 jsr @Rn */
L_0C073BC6: BLKS(0x0C073BC6u);
	T = (r0 & r0) == 0;  /* 0C073BC6 tst Rm,Rn */
	if (T) { UPD(0x0C073C3Au, 4); goto L_0C073C3A; }  /* 0C073BC8 bt */
L_0C073BCA: BLKS(0x0C073BCAu);
	r7 = 0xB4u; UPD(0x0C073BCCu, 1);  /* 0C073BCA mov.w @(disp,pc),Rn */
	IF(0x0C073BCCu); MACL = r12 * r7;  /* 0C073BCC mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C073BD0u, 3);  /* 0C073BCE mov.l @(disp,pc),Rn */
	IF(0x0C073BD0u); r10 = MACL;  /* 0C073BD0 sts macl,Rn */
	r10 += r0;  /* 0C073BD2 add Rm,Rn */
	r4 = 0xA9u; UPD(0x0C073BD6u, 3);  /* 0C073BD4 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C073BD6 mov Rm,Rn */
	r11 = 0xC0A9BB0u; UPD(0x0C073BDAu, 2);  /* 0C073BD8 mov.l @(disp,pc),Rn */
	IF(0x0C073BDAu); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C073BDCu, 1);  /* 0C073BDA mov.b @(r0,Rm),Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C073BDEu, 1);  /* 0C073BDC mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C073BDE extu.b Rm,Rn */
	IF(0x0C073BE0u); { u32 t_ = r11; PR = 0x0C073BE4u; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C073BE4u); }  /* 0C073BE0 jsr @Rn */
L_0C073BE4: BLKS(0x0C073BE4u);
	T = (r0 & r0) == 0;  /* 0C073BE4 tst Rm,Rn */
	if (T) { UPD(0x0C073C3Au, 4); goto L_0C073C3A; }  /* 0C073BE6 bt */
L_0C073BE8: BLKS(0x0C073BE8u);
	r0 = r10;  /* 0C073BE8 mov Rm,Rn */
	r2 = 0x86u; UPD(0x0C073BECu, 2);  /* 0C073BEA mov.w @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C073BEEu, 1);  /* 0C073BEC mov.l @(disp,pc),Rn */
	IF(0x0C073BEEu); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C073BF0u, 1);  /* 0C073BEE mov.w @(r0,Rm),Rn */
	r5 = 0x100000u; UPD(0x0C073BF2u, 1);  /* 0C073BF0 mov.l @(disp,pc),Rn */
	IF(0x0C073BF2u); { u32 t_ = r8; PR = 0x0C073BF6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C073BF6u); }  /* 0C073BF2 jsr @Rn */
L_0C073BF6: BLKS(0x0C073BF6u);
	r8 = R32(r10 + 0x24u); UPD(0x0C073BF8u, 1);  /* 0C073BF6 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C073BF8 mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C073BFCu, 2);  /* 0C073BFA mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C073BFC add Rm,Rn */
	r6 = 0x10000u; UPD(0x0C073C00u, 2);  /* 0C073BFE mov.l @(disp,pc),Rn */
	r5 = 0x140000u; UPD(0x0C073C02u, 1);  /* 0C073C00 mov.l @(disp,pc),Rn */
	IF(0x0C073C02u); { u32 t_ = r13; PR = 0x0C073C06u; r8 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C073C06u); }  /* 0C073C02 jsr @Rn */
L_0C073C06: BLKS(0x0C073C06u);
	r6 = R32(r10 + 0x28u); UPD(0x0C073C08u, 1);  /* 0C073C06 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C073C08 add #imm,Rn */
	r5 = 0x30000u; UPD(0x0C073C0Cu, 2);  /* 0C073C0A mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C073C0C add Rm,Rn */
	W32(r15, r5); UPD(0x0C073C10u, 2);  /* 0C073C0E mov.l Rm,@Rn */
	{ r4 = 0x2u; /* slot mov #imm,Rn */ UPD(0x0C073B92u, 3); goto L_0C073B92; }  /* 0C073C10 bra */
L_0C073C20: BLKS(0x0C073C20u);
	r5 = r10;  /* 0C073C20 mov Rm,Rn */
	r10 = 0xC0A0670u; UPD(0x0C073C24u, 2);  /* 0C073C22 mov.l @(disp,pc),Rn */
	IF(0x0C073C24u); { u32 t_ = r10; PR = 0x0C073C28u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C073C28u); }  /* 0C073C24 jsr @Rn */
L_0C073C28: BLKS(0x0C073C28u);
	T = (r0 & r0) == 0;  /* 0C073C28 tst Rm,Rn */
	if (T) { UPD(0x0C073C3Au, 4); goto L_0C073C3A; }  /* 0C073C2A bt */
L_0C073C2C: BLKS(0x0C073C2Cu);
	r4 = r12;  /* 0C073C2C mov Rm,Rn */
	r9 = 0xC0A9E40u; UPD(0x0C073C30u, 2);  /* 0C073C2E mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C073C30 mov #imm,Rn */
	IF(0x0C073C32u); { u32 t_ = r9; PR = 0x0C073C36u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C073C36u); }  /* 0C073C32 jsr @Rn */
L_0C073C36: BLKS(0x0C073C36u);
	T = (r0 & r0) == 0;  /* 0C073C36 tst Rm,Rn */
	if (!T) { UPD(0x0C073C3Eu, 4); goto L_0C073C3E; }  /* 0C073C38 bf */
L_0C073C3A: BLKS(0x0C073C3Au);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C072E62u, 3); goto L_0C072E62; }  /* 0C073C3A bra */
L_0C073C3E: BLKS(0x0C073C3Eu);
	r11 = 0xB4u; UPD(0x0C073C40u, 1);  /* 0C073C3E mov.w @(disp,pc),Rn */
	IF(0x0C073C40u); MACL = r12 * r11;  /* 0C073C40 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C073C44u, 3);  /* 0C073C42 mov.l @(disp,pc),Rn */
	IF(0x0C073C44u); r11 = MACL;  /* 0C073C44 sts macl,Rn */
	r11 += r0;  /* 0C073C46 add Rm,Rn */
	r4 = 0xA9u; UPD(0x0C073C4Au, 3);  /* 0C073C48 mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C073C4A mov Rm,Rn */
	r13 = 0xC0A9BB0u; UPD(0x0C073C4Eu, 2);  /* 0C073C4C mov.l @(disp,pc),Rn */
	IF(0x0C073C4Eu); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C073C50u, 1);  /* 0C073C4E mov.b @(r0,Rm),Rn */
	r5 = R32(r11 + 0x28u); UPD(0x0C073C52u, 1);  /* 0C073C50 mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C073C52 extu.b Rm,Rn */
	IF(0x0C073C54u); { u32 t_ = r13; PR = 0x0C073C58u; r4 = R32(r11 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C073C58u); }  /* 0C073C54 jsr @Rn */
L_0C073C58: BLKS(0x0C073C58u);
	T = (r0 & r0) == 0;  /* 0C073C58 tst Rm,Rn */
	if (T) { UPD(0x0C073D18u, 4); goto L_0C073D18; }  /* 0C073C5A bt */
L_0C073C5C: BLKS(0x0C073C5Cu);
	r0 = r11;  /* 0C073C5C mov Rm,Rn */
	r7 = 0x86u; UPD(0x0C073C60u, 2);  /* 0C073C5E mov.w @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C073C62u, 1);  /* 0C073C60 mov.l @(disp,pc),Rn */
	IF(0x0C073C62u); r9 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C073C64u, 1);  /* 0C073C62 mov.w @(r0,Rm),Rn */
	r5 = 0xC0000u; UPD(0x0C073C66u, 1);  /* 0C073C64 mov.l @(disp,pc),Rn */
	r10 = 0xC058030u; UPD(0x0C073C68u, 1);  /* 0C073C66 mov.l @(disp,pc),Rn */
	IF(0x0C073C68u); { u32 t_ = r8; PR = 0x0C073C6Cu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C073C6Cu); }  /* 0C073C68 jsr @Rn */
L_0C073C6C: BLKS(0x0C073C6Cu);
	r8 = R32(r11 + 0x24u); UPD(0x0C073C6Eu, 1);  /* 0C073C6C mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C073C6E mov Rm,Rn */
	r5 = 0x100000u; UPD(0x0C073C72u, 2);  /* 0C073C70 mov.l @(disp,pc),Rn */
	IF(0x0C073C72u); { u32 t_ = r10; PR = 0x0C073C76u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C073C76u); }  /* 0C073C72 jsr @Rn */
L_0C073C76: BLKS(0x0C073C76u);
	r13 = 0x20000u; UPD(0x0C073C78u, 1);  /* 0C073C76 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C073C78 add #imm,Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C073C7Cu, 2);  /* 0C073C7A mov.l @(disp,Rm),Rn */
	r8 += r13;  /* 0C073C7C add Rm,Rn */
	W32(r15, r13); UPD(0x0C073C80u, 2);  /* 0C073C7E mov.l Rm,@Rn */
	r6 += r0;  /* 0C073C80 add Rm,Rn */
	{ r4 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C073B92u, 4); goto L_0C073B92; }  /* 0C073C82 bra */
L_0C073C90: BLKS(0x0C073C90u);
	r1 = 0xC06FA70u; UPD(0x0C073C92u, 1);  /* 0C073C90 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C073C92 mov Rm,Rn */
	{ r5 = r10; /* slot mov Rm,Rn */ UPD(0x0C0733F0u, 4); goto L_0C0733F0; }  /* 0C073C94 bra */
L_0C073CE0: BLKS(0x0C073CE0u);
	r9 = 0xC0A0670u; UPD(0x0C073CE2u, 1);  /* 0C073CE0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C073CE2 mov Rm,Rn */
	IF(0x0C073CE4u); { u32 t_ = r9; PR = 0x0C073CE8u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C073CE8u); }  /* 0C073CE4 jsr @Rn */
L_0C073CE8: BLKS(0x0C073CE8u);
	T = (r0 & r0) == 0;  /* 0C073CE8 tst Rm,Rn */
	if (T) { UPD(0x0C073D18u, 4); goto L_0C073D18; }  /* 0C073CEA bt */
L_0C073CEC: BLKS(0x0C073CECu);
	r4 = r12;  /* 0C073CEC mov Rm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C073CF0u, 2);  /* 0C073CEE mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C073CF0 mov #imm,Rn */
	IF(0x0C073CF2u); { u32 t_ = r11; PR = 0x0C073CF6u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C073CF6u); }  /* 0C073CF2 jsr @Rn */
L_0C073CF6: BLKS(0x0C073CF6u);
	T = (r0 & r0) == 0;  /* 0C073CF6 tst Rm,Rn */
	if (T) { UPD(0x0C073D18u, 4); goto L_0C073D18; }  /* 0C073CF8 bt */
L_0C073CFA: BLKS(0x0C073CFAu);
	r3 = 0xB4u; UPD(0x0C073CFCu, 1);  /* 0C073CFA mov.w @(disp,pc),Rn */
	IF(0x0C073CFCu); MACL = r12 * r3;  /* 0C073CFC mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C073D00u, 3);  /* 0C073CFE mov.l @(disp,pc),Rn */
	IF(0x0C073D00u); r10 = MACL;  /* 0C073D00 sts macl,Rn */
	r10 += r2;  /* 0C073D02 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C073D06u, 3);  /* 0C073D04 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C073D06 mov Rm,Rn */
	IF(0x0C073D08u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C073D0Au, 2);  /* 0C073D08 mov.b @(r0,Rm),Rn */
	r13 = 0xC0A9BB0u; UPD(0x0C073D0Cu, 1);  /* 0C073D0A mov.l @(disp,pc),Rn */
	r6 = r5 & 0xFF;  /* 0C073D0C extu.b Rm,Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C073D10u, 2);  /* 0C073D0E mov.l @(disp,Rm),Rn */
	IF(0x0C073D10u); { u32 t_ = r13; PR = 0x0C073D14u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C073D14u); }  /* 0C073D10 jsr @Rn */
L_0C073D14: BLKS(0x0C073D14u);
	T = (r0 & r0) == 0;  /* 0C073D14 tst Rm,Rn */
	if (!T) { UPD(0x0C073D1Cu, 4); goto L_0C073D1C; }  /* 0C073D16 bf */
L_0C073D18: BLKS(0x0C073D18u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C072E62u, 3); goto L_0C072E62; }  /* 0C073D18 bra */
L_0C073D1C: BLKS(0x0C073D1Cu);
	r7 = 0x86u; UPD(0x0C073D1Eu, 1);  /* 0C073D1C mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C073D1E mov Rm,Rn */
	r13 = 0xC058060u; UPD(0x0C073D22u, 2);  /* 0C073D20 mov.l @(disp,pc),Rn */
	IF(0x0C073D22u); r11 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C073D24u, 1);  /* 0C073D22 mov.w @(r0,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C073D26u, 1);  /* 0C073D24 mov.l @(disp,pc),Rn */
	IF(0x0C073D26u); { u32 t_ = r13; PR = 0x0C073D2Au; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C073D2Au); }  /* 0C073D26 jsr @Rn */
L_0C073D2A: BLKS(0x0C073D2Au);
	r9 = R32(r10 + 0x24u); UPD(0x0C073D2Cu, 1);  /* 0C073D2A mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C073D2C mov Rm,Rn */
	r9 += r0;  /* 0C073D2E add Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C073D32u, 3);  /* 0C073D30 mov.l @(disp,pc),Rn */
	r0 = 0x10000u; UPD(0x0C073D34u, 1);  /* 0C073D32 mov.l @(disp,pc),Rn */
	r5 = 0xA0000u; UPD(0x0C073D36u, 1);  /* 0C073D34 mov.l @(disp,pc),Rn */
	IF(0x0C073D36u); { u32 t_ = r8; PR = 0x0C073D3Au; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C073D3Au); }  /* 0C073D36 jsr @Rn */
L_0C073D3A: BLKS(0x0C073D3Au);
	r6 = R32(r10 + 0x28u); UPD(0x0C073D3Cu, 1);  /* 0C073D3A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C073D3C add #imm,Rn */
	r4 = 0x28000u; UPD(0x0C073D40u, 2);  /* 0C073D3E mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C073D40 add Rm,Rn */
	W32(r15, r4); UPD(0x0C073D44u, 2);  /* 0C073D42 mov.l Rm,@Rn */
	r5 = r9;  /* 0C073D44 mov Rm,Rn */
	r0 = 0xC0A81B0u; UPD(0x0C073D48u, 2);  /* 0C073D46 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C073D48 mov #imm,Rn */
	{ r7 = r11; /* slot mov Rm,Rn */ UPD(0x0C073B98u, 4); goto L_0C073B98; }  /* 0C073D4A bra */
L_0C073D50: BLKS(0x0C073D50u);
	r1 = 0xC06F830u; UPD(0x0C073D52u, 1);  /* 0C073D50 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C073D52 mov Rm,Rn */
	{ r5 = r10; /* slot mov Rm,Rn */ UPD(0x0C0733F0u, 4); goto L_0C0733F0; }  /* 0C073D54 bra */
L_0C073D60: BLKS(0x0C073D60u);
	r1 = 0xC06FBD0u; UPD(0x0C073D62u, 1);  /* 0C073D60 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C073D62 mov Rm,Rn */
	{ r5 = r10; /* slot mov Rm,Rn */ UPD(0x0C0733F0u, 4); goto L_0C0733F0; }  /* 0C073D64 bra */
L_0C073D70: BLKS(0x0C073D70u);
	r5 = r10;  /* 0C073D70 mov Rm,Rn */
	r10 = 0xC0A0670u; UPD(0x0C073D74u, 2);  /* 0C073D72 mov.l @(disp,pc),Rn */
	IF(0x0C073D74u); { u32 t_ = r10; PR = 0x0C073D78u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C073D78u); }  /* 0C073D74 jsr @Rn */
L_0C073D78: BLKS(0x0C073D78u);
	T = (r0 & r0) == 0;  /* 0C073D78 tst Rm,Rn */
	if (T) { UPD(0x0C073DDEu, 4); goto L_0C073DDE; }  /* 0C073D7A bt */
L_0C073D7C: BLKS(0x0C073D7Cu);
	r4 = r12;  /* 0C073D7C mov Rm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C073D80u, 2);  /* 0C073D7E mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C073D80 mov #imm,Rn */
	IF(0x0C073D82u); { u32 t_ = r11; PR = 0x0C073D86u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C073D86u); }  /* 0C073D82 jsr @Rn */
L_0C073D86: BLKS(0x0C073D86u);
	T = (r0 & r0) == 0;  /* 0C073D86 tst Rm,Rn */
	if (T) { UPD(0x0C073DDEu, 4); goto L_0C073DDE; }  /* 0C073D88 bt */
L_0C073D8A: BLKS(0x0C073D8Au);
	r3 = 0xB4u; UPD(0x0C073D8Cu, 1);  /* 0C073D8A mov.w @(disp,pc),Rn */
	IF(0x0C073D8Cu); MACL = r12 * r3;  /* 0C073D8C mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C073D90u, 3);  /* 0C073D8E mov.l @(disp,pc),Rn */
	IF(0x0C073D90u); r10 = MACL;  /* 0C073D90 sts macl,Rn */
	r10 += r2;  /* 0C073D92 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C073D96u, 3);  /* 0C073D94 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C073D96 mov Rm,Rn */
	IF(0x0C073D98u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C073D9Au, 2);  /* 0C073D98 mov.b @(r0,Rm),Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C073D9Cu, 1);  /* 0C073D9A mov.l @(disp,pc),Rn */
	r6 = r5 & 0xFF;  /* 0C073D9C extu.b Rm,Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C073DA0u, 2);  /* 0C073D9E mov.l @(disp,Rm),Rn */
	IF(0x0C073DA0u); { u32 t_ = r9; PR = 0x0C073DA4u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C073DA4u); }  /* 0C073DA0 jsr @Rn */
L_0C073DA4: BLKS(0x0C073DA4u);
	T = (r0 & r0) == 0;  /* 0C073DA4 tst Rm,Rn */
	if (T) { UPD(0x0C073DDEu, 4); goto L_0C073DDE; }  /* 0C073DA6 bt */
L_0C073DA8: BLKS(0x0C073DA8u);
	r0 = r10;  /* 0C073DA8 mov Rm,Rn */
	r7 = 0x86u; UPD(0x0C073DACu, 2);  /* 0C073DAA mov.w @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C073DAEu, 1);  /* 0C073DAC mov.l @(disp,pc),Rn */
	IF(0x0C073DAEu); r13 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C073DB0u, 1);  /* 0C073DAE mov.w @(r0,Rm),Rn */
	r5 = 0xF0000u; UPD(0x0C073DB2u, 1);  /* 0C073DB0 mov.l @(disp,pc),Rn */
	r9 = 0xC058030u; UPD(0x0C073DB4u, 1);  /* 0C073DB2 mov.l @(disp,pc),Rn */
	IF(0x0C073DB4u); { u32 t_ = r8; PR = 0x0C073DB8u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C073DB8u); }  /* 0C073DB4 jsr @Rn */
L_0C073DB8: BLKS(0x0C073DB8u);
	r11 = R32(r10 + 0x24u); UPD(0x0C073DBAu, 1);  /* 0C073DB8 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C073DBA mov Rm,Rn */
	r5 = 0x140000u; UPD(0x0C073DBEu, 2);  /* 0C073DBC mov.l @(disp,pc),Rn */
	IF(0x0C073DBEu); { u32 t_ = r9; PR = 0x0C073DC2u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C073DC2u); }  /* 0C073DBE jsr @Rn */
L_0C073DC2: BLKS(0x0C073DC2u);
	r6 = R32(r10 + 0x28u); UPD(0x0C073DC4u, 1);  /* 0C073DC2 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C073DC4 add #imm,Rn */
	r4 = 0x20000u; UPD(0x0C073DC8u, 2);  /* 0C073DC6 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C073DC8 add Rm,Rn */
	r8 = 0xC0A81B0u; UPD(0x0C073DCCu, 2);  /* 0C073DCA mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C073DCC mov Rm,Rn */
	W32(r15, r4); UPD(0x0C073DD0u, 2);  /* 0C073DCE mov.l Rm,@Rn */
	r7 = r13;  /* 0C073DD0 mov Rm,Rn */
	IF(0x0C073DD2u); { u32 t_ = r8; PR = 0x0C073DD6u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C073DD6u); }  /* 0C073DD2 jsr @Rn */
L_0C073DD6: BLKS(0x0C073DD6u);
	r4 = r12;  /* 0C073DD6 mov Rm,Rn */
	r12 = 0xC0580D0u; UPD(0x0C073DDAu, 2);  /* 0C073DD8 mov.l @(disp,pc),Rn */
	IF(0x0C073DDAu); { u32 t_ = r12; PR = 0x0C073DDEu; r15 += 0x4u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C073DDEu); }  /* 0C073DDA jsr @Rn */
L_0C073DDE: BLKS(0x0C073DDEu);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C072E62u, 3); goto L_0C072E62; }  /* 0C073DDE bra */
}

void f_0C073E30(sh3_t *c)
{
	LOCALS;
L_0C073E30: BLKS(0x0C073E30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C073E32u, 1);  /* 0C073E30 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C073E34u, 1);  /* 0C073E32 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C073E36u, 1);  /* 0C073E34 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C073E38u, 1);  /* 0C073E36 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C073E3Au, 1);  /* 0C073E38 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C073E3Cu, 1);  /* 0C073E3A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C073E3Eu, 1);  /* 0C073E3C mov.l Rm,@-Rn */
	r2 = 0xC392D64u; UPD(0x0C073E40u, 1);  /* 0C073E3E mov.l @(disp,pc),Rn */
	IF(0x0C073E40u); r15 -= 4; W32(r15, PR); UPD(0x0C073E42u, 1);  /* 0C073E40 sts.l pr,@-Rn */
	r3 = R32(r2); UPD(0x0C073E44u, 1);  /* 0C073E42 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C073E44 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r4 = v_; } UPD(0x0C073E48u, 2);  /* 0C073E46 mov.w @Rm+,Rn */
	r14 = r15;  /* 0C073E48 mov Rm,Rn */
	r6 = 0xC286274u; UPD(0x0C073E4Cu, 2);  /* 0C073E4A mov.l @(disp,pc),Rn */
	r1 = r4 & 0xFFFF;  /* 0C073E4C extu.w Rm,Rn */
	W16(r6, r4); UPD(0x0C073E50u, 2);  /* 0C073E4E mov.w Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C073E52u, 1);  /* 0C073E50 mov.w @Rm+,Rn */
	r5 = 0xC286280u; UPD(0x0C073E54u, 1);  /* 0C073E52 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C073E54 and #imm,r0 */
	W16(r5, r0); UPD(0x0C073E58u, 2);  /* 0C073E56 mov.w Rm,@Rn */
	r0 = 0x8u;  /* 0C073E58 mov #imm,Rn */
	T = r1 > r0;  /* 0C073E5A cmp/hi Rm,Rn */
	{ u32 c_ = !T; W32(r2, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C073E64u, 5); goto L_0C073E64; } UPD(0x0C073E60u, 1); goto L_0C073E60; }  /* 0C073E5C bf/s */
L_0C073E60: BLKS(0x0C073E60u);
	{ IF(0x0C073E62u); ; /* slot nop */ UPD(0x0C073F80u, 3); goto L_0C073F80; }  /* 0C073E60 bra */
L_0C073E64: BLKS(0x0C073E64u);
	r9 = 0xC0606C0u; UPD(0x0C073E66u, 1);  /* 0C073E64 mov.l @(disp,pc),Rn */
	IF(0x0C073E66u); { u32 t_ = r9; PR = 0x0C073E6Au; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C073E6Au); }  /* 0C073E66 jsr @Rn */
L_0C073E6A: BLKS(0x0C073E6Au);
	T = (r0 & r0) == 0;  /* 0C073E6A tst Rm,Rn */
	if (!T) { UPD(0x0C073E90u, 4); goto L_0C073E90; }  /* 0C073E6C bf */
L_0C073E6E: BLKS(0x0C073E6Eu);
	r0 = 0x1u;  /* 0C073E6E mov #imm,Rn */
	r14 += 0x8u;  /* 0C073E70 add #imm,Rn */
	r15 = r14;  /* 0C073E72 mov Rm,Rn */
	IF(0x0C073E74u); PR = R32(r15); r15 += 4; UPD(0x0C073E76u, 4);  /* 0C073E74 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C073E78u, 1);  /* 0C073E76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C073E7Au, 1);  /* 0C073E78 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C073E7Cu, 1);  /* 0C073E7A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C073E7Eu, 1);  /* 0C073E7C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C073E80u, 1);  /* 0C073E7E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C073E82u, 1);  /* 0C073E80 mov.l @Rm+,Rn */
	IF(0x0C073E82u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C073E82 rts */
L_0C073E90: BLKS(0x0C073E90u);
	r12 = 0xC286509u; UPD(0x0C073E92u, 1);  /* 0C073E90 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C073E92 mov #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r12); UPD(0x0C073E96u, 2);  /* 0C073E94 mov.b @Rm,Rn */
	r8 = 0xC2755BCu; UPD(0x0C073E98u, 1);  /* 0C073E96 mov.l @(disp,pc),Rn */
	r9 = 0xB4u; UPD(0x0C073E9Au, 1);  /* 0C073E98 mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r12 = v_; } UPD(0x0C073E9Cu, 1);  /* 0C073E9A mov.w @Rm+,Rn */
	r7 = 0xC286280u; UPD(0x0C073E9Eu, 1);  /* 0C073E9C mov.l @(disp,pc),Rn */
	IF(0x0C073E9Eu); MACL = r12 * r9;  /* 0C073E9E mul.l Rm,Rn */
	r4 = 0xC22C874u; UPD(0x0C073EA2u, 3);  /* 0C073EA0 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r7); UPD(0x0C073EA4u, 1);  /* 0C073EA2 mov.w @Rm,Rn */
	IF(0x0C073EA4u); r9 = MACL;  /* 0C073EA4 sts macl,Rn */
	r2 = (u32)(s32)(s16)R16(r4); UPD(0x0C073EA8u, 2);  /* 0C073EA6 mov.w @Rm,Rn */
	r6 = r0 & 0xFFFF;  /* 0C073EA8 extu.w Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C073EACu, 2);  /* 0C073EAA mov.l @(disp,pc),Rn */
	r3 = r2 & 0xFFFF;  /* 0C073EAC extu.w Rm,Rn */
	r1 = 0xC0A02D0u; UPD(0x0C073EB0u, 2);  /* 0C073EAE mov.l @(disp,pc),Rn */
	r9 += r5;  /* 0C073EB0 add Rm,Rn */
	r11 = 0xC0000114u; UPD(0x0C073EB4u, 2);  /* 0C073EB2 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C073EB4 mov Rm,Rn */
	W32(r9 + 0x4u, r3); UPD(0x0C073EB8u, 2);  /* 0C073EB6 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x8u, r6); UPD(0x0C073EBAu, 1);  /* 0C073EB8 mov.l Rm,@(disp,Rn) */
	W32(r9, r11); UPD(0x0C073EBCu, 1);  /* 0C073EBA mov.l Rm,@Rn */
	IF(0x0C073EBCu); { u32 t_ = r1; PR = 0x0C073EC0u; W32(r9 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C073EC0u); }  /* 0C073EBC jsr @Rn */
L_0C073EC0: BLKS(0x0C073EC0u);
	r5 = 0xC0A1530u; UPD(0x0C073EC2u, 1);  /* 0C073EC0 mov.l @(disp,pc),Rn */
	r10 = 0xB0u; UPD(0x0C073EC4u, 1);  /* 0C073EC2 mov.w @(disp,pc),Rn */
	IF(0x0C073EC4u); { u32 t_ = r5; PR = 0x0C073EC8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C073EC8u); }  /* 0C073EC4 jsr @Rn */
L_0C073EC8: BLKS(0x0C073EC8u);
	r4 = 0x4Cu;  /* 0C073EC8 mov #imm,Rn */
	IF(0x0C073ECAu); MACL = r13 * r4;  /* 0C073ECA mul.l Rm,Rn */
	r2 = 0xC26CAE0u; UPD(0x0C073ECEu, 4);  /* 0C073ECC mov.l @(disp,pc),Rn */
	r10 += r9;  /* 0C073ECE add Rm,Rn */
	r11 = 0xC21F5E2u; UPD(0x0C073ED2u, 2);  /* 0C073ED0 mov.l @(disp,pc),Rn */
	IF(0x0C073ED2u); r5 = MACL;  /* 0C073ED2 sts macl,Rn */
	r0 = 0xC392D5Eu; UPD(0x0C073ED6u, 2);  /* 0C073ED4 mov.l @(disp,pc),Rn */
	r5 += r2;  /* 0C073ED6 add Rm,Rn */
	r3 = R32(r5 + 0x8u); UPD(0x0C073EDAu, 2);  /* 0C073ED8 mov.l @(disp,Rm),Rn */
	r1 = 0x0u;  /* 0C073EDA mov #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r11); UPD(0x0C073EDEu, 2);  /* 0C073EDC mov.w @Rm,Rn */
	r5 += 0x42u;  /* 0C073EDE add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r0); UPD(0x0C073EE2u, 2);  /* 0C073EE0 mov.w @Rm,Rn */
	IF(0x0C073EE2u); r7 <<= 16;  /* 0C073EE2 shll16 Rn */
	W32(r14, r10); UPD(0x0C073EE6u, 2);  /* 0C073EE4 mov.l Rm,@Rn */
	r7 -= r3;  /* 0C073EE6 sub Rm,Rn */
	W8(r10, r13); UPD(0x0C073EEAu, 2);  /* 0C073EE8 mov.b Rm,@Rn */
	IF(0x0C073EEAu); r6 <<= 16;  /* 0C073EEA shll16 Rn */
	W32(r9 + 0x24u, r7); UPD(0x0C073EEEu, 2);  /* 0C073EEC mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r6); UPD(0x0C073EF0u, 1);  /* 0C073EEE mov.l Rm,@(disp,Rn) */
	r13 = 0xA8u; UPD(0x0C073EF2u, 1);  /* 0C073EF0 mov.w @(disp,pc),Rn */
	r10 = 0xACu; UPD(0x0C073EF4u, 1);  /* 0C073EF2 mov.w @(disp,pc),Rn */
	r13 += r9;  /* 0C073EF4 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r5); UPD(0x0C073EF8u, 2);  /* 0C073EF6 mov.b @Rm,Rn */
	r10 += r9;  /* 0C073EF8 add Rm,Rn */
	r13 += 0x1u;  /* 0C073EFA add #imm,Rn */
	r10 += 0x1u;  /* 0C073EFC add #imm,Rn */
	W8(r10, r11); UPD(0x0C073F00u, 4);  /* 0C073EFE mov.b Rm,@Rn */
	W8(r13, r11); UPD(0x0C073F02u, 1);  /* 0C073F00 mov.b Rm,@Rn */
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C073F04u, 1);  /* 0C073F02 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C073F06u, 1);  /* 0C073F04 mov.w @(disp,pc),Rn */
	IF(0x0C073F06u); MACL = r11 * r8;  /* 0C073F06 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C073F0Au, 3);  /* 0C073F08 mov.l @(disp,pc),Rn */
	IF(0x0C073F0Au); r8 = MACL;  /* 0C073F0A sts macl,Rn */
	r2 = 0xC3000114u; UPD(0x0C073F0Eu, 2);  /* 0C073F0C mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C073F0E add Rm,Rn */
	W32(r8, r2); UPD(0x0C073F12u, 2);  /* 0C073F10 mov.l Rm,@Rn */
	r8 += 0x7Cu;  /* 0C073F12 add #imm,Rn */
	W16(r8, r12); UPD(0x0C073F16u, 2);  /* 0C073F14 mov.w Rm,@Rn */
	r0 = 0xC286274u; UPD(0x0C073F18u, 1);  /* 0C073F16 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C073F18 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r0); UPD(0x0C073F1Cu, 2);  /* 0C073F1A mov.w @Rm,Rn */
	r3 = 0xC22C874u; UPD(0x0C073F1Eu, 1);  /* 0C073F1C mov.l @(disp,pc),Rn */
	r5 = r6 & 0xFFFF;  /* 0C073F1E extu.w Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r3); UPD(0x0C073F22u, 2);  /* 0C073F20 mov.w @Rm,Rn */
	r5 += 0x2u;  /* 0C073F22 add #imm,Rn */
	r0 = 0x86u; UPD(0x0C073F26u, 2);  /* 0C073F24 mov.w @(disp,pc),Rn */
	r7 = r12 & 0xFFFF;  /* 0C073F26 extu.w Rm,Rn */
	r4 = 0x100u; UPD(0x0C073F2Au, 2);  /* 0C073F28 mov.w @(disp,pc),Rn */
	r2 = 0xC0A02D0u; UPD(0x0C073F2Cu, 1);  /* 0C073F2A mov.l @(disp,pc),Rn */
	IF(0x0C073F2Cu); W16(r0 + r8, r4); UPD(0x0C073F2Eu, 1);  /* 0C073F2C mov.w Rm,@(r0,Rn) */
	W32(r8 + 0x4u, r7); UPD(0x0C073F30u, 1);  /* 0C073F2E mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C073F30 mov Rm,Rn */
	W32(r8 + 0x8u, r5); UPD(0x0C073F34u, 2);  /* 0C073F32 mov.l Rm,@(disp,Rn) */
	IF(0x0C073F34u); { u32 t_ = r2; PR = 0x0C073F38u; W32(r8 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C073F38u); }  /* 0C073F34 jsr @Rn */
L_0C073F38: BLKS(0x0C073F38u);
	r3 = 0xC0A1530u; UPD(0x0C073F3Au, 1);  /* 0C073F38 mov.l @(disp,pc),Rn */
	IF(0x0C073F3Au); { u32 t_ = r3; PR = 0x0C073F3Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C073F3Eu); }  /* 0C073F3A jsr @Rn */
L_0C073F3E: BLKS(0x0C073F3Eu);
	r12 = R32(r9 + 0x24u); UPD(0x0C073F40u, 1);  /* 0C073F3E mov.l @(disp,Rm),Rn */
	r5 = 0x0u;  /* 0C073F40 mov #imm,Rn */
	r11 = R32(r9 + 0x28u); UPD(0x0C073F44u, 2);  /* 0C073F42 mov.l @(disp,Rm),Rn */
	r0 = 0xC286280u; UPD(0x0C073F46u, 1);  /* 0C073F44 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)R16(r0); UPD(0x0C073F48u, 1);  /* 0C073F46 mov.w @Rm,Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C073F4Au, 1);  /* 0C073F48 mov.l Rm,@(disp,Rn) */
	r0 = r9 & 0xFFFF;  /* 0C073F4A extu.w Rm,Rn */
	W32(r8 + 0x28u, r11); UPD(0x0C073F4Eu, 2);  /* 0C073F4C mov.l Rm,@(disp,Rn) */
	IF(0x0C073F4Eu); r0 <<= 2;  /* 0C073F4E shll2 Rn */
	r7 = 0xC186D80u; UPD(0x0C073F52u, 2);  /* 0C073F50 mov.l @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C073F54u, 1);  /* 0C073F52 mov.l @Rm,Rn */
	IF(0x0C073F54u); r6 = R32(r0 + r7); UPD(0x0C073F56u, 1);  /* 0C073F54 mov.l @(r0,Rm),Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C073F58u, 1);  /* 0C073F56 mov.b @Rm,Rn */
	r0 = 0xB0u; UPD(0x0C073F5Au, 1);  /* 0C073F58 mov.w @(disp,pc),Rn */
	r2 = 0xA8u; UPD(0x0C073F5Cu, 1);  /* 0C073F5A mov.w @(disp,pc),Rn */
	IF(0x0C073F5Cu); W8(r0 + r8, r3); UPD(0x0C073F5Eu, 1);  /* 0C073F5C mov.b Rm,@(r0,Rn) */
	r2 += r8;  /* 0C073F5E add Rm,Rn */
	r2 += 0x1u;  /* 0C073F60 add #imm,Rn */
	W32(r14 + 0x4u, r2); UPD(0x0C073F64u, 3);  /* 0C073F62 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r6); UPD(0x0C073F66u, 1);  /* 0C073F64 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r5); UPD(0x0C073F68u, 1);  /* 0C073F66 mov.l Rm,@(disp,Rn) */
	r11 = 0xACu; UPD(0x0C073F6Au, 1);  /* 0C073F68 mov.w @(disp,pc),Rn */
	r12 = R32(r14 + 0x4u); UPD(0x0C073F6Cu, 1);  /* 0C073F6A mov.l @(disp,Rm),Rn */
	r8 += r11;  /* 0C073F6C add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r13); UPD(0x0C073F70u, 2);  /* 0C073F6E mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C073F70 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C073F74u, 2);  /* 0C073F72 mov.b @Rm,Rn */
	W8(r12, r4); UPD(0x0C073F76u, 1);  /* 0C073F74 mov.b Rm,@Rn */
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C073E6Eu, 3); goto L_0C073E6E; }  /* 0C073F76 bra */
L_0C073F80: BLKS(0x0C073F80u);
	r8 = 0xC050D70u; UPD(0x0C073F82u, 1);  /* 0C073F80 mov.l @(disp,pc),Rn */
	IF(0x0C073F82u); { u32 t_ = r8; PR = 0x0C073F86u; r4 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C073F86u); }  /* 0C073F82 jsr @Rn */
L_0C073F86: BLKS(0x0C073F86u);
	r7 = 0xC286274u; UPD(0x0C073F88u, 1);  /* 0C073F86 mov.l @(disp,pc),Rn */
	{ W16(r7, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C073E64u, 3); goto L_0C073E64; }  /* 0C073F88 bra */
}

void f_0C073FE0(sh3_t *c)
{
	LOCALS;
	goto L_0C073FE0;
L_0C06F830: BLKS(0x0C06F830u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06F832u, 1);  /* 0C06F830 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C06F832 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06F836u, 2);  /* 0C06F834 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06F838u, 1);  /* 0C06F836 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06F83Au, 1);  /* 0C06F838 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06F83Cu, 1);  /* 0C06F83A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C06F83C exts.w Rm,Rn */
	r8 = 0xC0A0670u; UPD(0x0C06F840u, 2);  /* 0C06F83E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06F840 mov Rm,Rn */
	IF(0x0C06F842u); r15 -= 4; W32(r15, PR); UPD(0x0C06F844u, 2);  /* 0C06F842 sts.l pr,@-Rn */
	IF(0x0C06F844u); { u32 t_ = r8; PR = 0x0C06F848u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C06F848u); }  /* 0C06F844 jsr @Rn */
L_0C06F848: BLKS(0x0C06F848u);
	T = (r0 & r0) == 0;  /* 0C06F848 tst Rm,Rn */
	if (T) { UPD(0x0C06F870u, 4); goto L_0C06F870; }  /* 0C06F84A bt */
L_0C06F84C: BLKS(0x0C06F84Cu);
	r2 = 0xB4u; UPD(0x0C06F84Eu, 1);  /* 0C06F84C mov.w @(disp,pc),Rn */
	IF(0x0C06F84Eu); MACL = r11 * r2;  /* 0C06F84E mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C06F852u, 3);  /* 0C06F850 mov.l @(disp,pc),Rn */
	IF(0x0C06F852u); r10 = MACL;  /* 0C06F852 sts macl,Rn */
	r8 = 0x9Cu; UPD(0x0C06F856u, 2);  /* 0C06F854 mov.w @(disp,pc),Rn */
	r10 += r0;  /* 0C06F856 add Rm,Rn */
	r8 += r10;  /* 0C06F858 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C06F85Cu, 3);  /* 0C06F85A mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06F85C tst Rm,Rn */
	{ u32 c_ = T; r2 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F8D0u, 4); goto L_0C06F8D0; } goto L_0C06F862; }  /* 0C06F85E bt/s */
L_0C06F862: BLKS(0x0C06F862u);
	r2 += 0x1u;  /* 0C06F862 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C06F866u, 3);  /* 0C06F864 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C06F866 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C06F868 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C06F86A cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06F880u, 6); goto L_0C06F880; } UPD(0x0C06F870u, 1); goto L_0C06F870; }  /* 0C06F86C bt/s */
L_0C06F870: BLKS(0x0C06F870u);
	r15 = r14;  /* 0C06F870 mov Rm,Rn */
	IF(0x0C06F872u); PR = R32(r15); r15 += 4; UPD(0x0C06F874u, 2);  /* 0C06F872 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06F876u, 1);  /* 0C06F874 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06F878u, 1);  /* 0C06F876 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06F87Au, 1);  /* 0C06F878 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06F87Cu, 1);  /* 0C06F87A mov.l @Rm+,Rn */
	IF(0x0C06F87Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06F87C rts */
L_0C06F880: BLKS(0x0C06F880u);
	r0 = r3;  /* 0C06F880 mov Rm,Rn */
	r4 = 0x0u;  /* 0C06F882 mov #imm,Rn */
	W8(r2, r4); UPD(0x0C06F886u, 3);  /* 0C06F884 mov.b Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C06F886 add #imm,Rn */
	W8(r8, r0); UPD(0x0C06F88Au, 2);  /* 0C06F888 mov.b Rm,@Rn */
	r2 = 0x86u; UPD(0x0C06F88Cu, 1);  /* 0C06F88A mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C06F88C mov Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C06F890u, 2);  /* 0C06F88E mov.l @(disp,pc),Rn */
	IF(0x0C06F890u); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06F892u, 1);  /* 0C06F890 mov.w @(r0,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C06F894u, 1);  /* 0C06F892 mov.l @(disp,pc),Rn */
	IF(0x0C06F894u); { u32 t_ = r8; PR = 0x0C06F898u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06F898u); }  /* 0C06F894 jsr @Rn */
L_0C06F898: BLKS(0x0C06F898u);
	r8 = R32(r10 + 0x24u); UPD(0x0C06F89Au, 1);  /* 0C06F898 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C06F89A mov Rm,Rn */
	r8 += r0;  /* 0C06F89C add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C06F8A0u, 3);  /* 0C06F89E mov.l @(disp,pc),Rn */
	r6 = 0x10000u; UPD(0x0C06F8A2u, 1);  /* 0C06F8A0 mov.l @(disp,pc),Rn */
	r5 = 0xA0000u; UPD(0x0C06F8A4u, 1);  /* 0C06F8A2 mov.l @(disp,pc),Rn */
	IF(0x0C06F8A4u); { u32 t_ = r0; PR = 0x0C06F8A8u; r8 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06F8A8u); }  /* 0C06F8A4 jsr @Rn */
L_0C06F8A8: BLKS(0x0C06F8A8u);
	r6 = R32(r10 + 0x28u); UPD(0x0C06F8AAu, 1);  /* 0C06F8A8 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06F8AA add #imm,Rn */
	r7 = 0x30000u; UPD(0x0C06F8AEu, 2);  /* 0C06F8AC mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C06F8AE mov Rm,Rn */
	W32(r15, r7); UPD(0x0C06F8B2u, 2);  /* 0C06F8B0 mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C06F8B2 mov #imm,Rn */
	r7 = r9;  /* 0C06F8B4 mov Rm,Rn */
	r9 = 0xC0A8510u; UPD(0x0C06F8B8u, 3);  /* 0C06F8B6 mov.l @(disp,pc),Rn */
	r8 = 0xC0580D0u; UPD(0x0C06F8BAu, 1);  /* 0C06F8B8 mov.l @(disp,pc),Rn */
	IF(0x0C06F8BAu); { u32 t_ = r9; PR = 0x0C06F8BEu; r6 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8510, 0x0C0A8510u, 0x0C06F8BEu); }  /* 0C06F8BA jsr @Rn */
L_0C06F8BE: BLKS(0x0C06F8BEu);
	r15 += 0x4u;  /* 0C06F8BE add #imm,Rn */
	IF(0x0C06F8C0u); { u32 t_ = r8; PR = 0x0C06F8C4u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C06F8C4u); }  /* 0C06F8C0 jsr @Rn */
L_0C06F8C4: BLKS(0x0C06F8C4u);
	{ IF(0x0C06F8C6u); ; /* slot nop */ UPD(0x0C06F870u, 3); goto L_0C06F870; }  /* 0C06F8C4 bra */
L_0C06F8D0: BLKS(0x0C06F8D0u);
	r9 = 0xC0A9E40u; UPD(0x0C06F8D2u, 1);  /* 0C06F8D0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06F8D2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C06F8D4 mov #imm,Rn */
	IF(0x0C06F8D6u); { u32 t_ = r9; PR = 0x0C06F8DAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C06F8DAu); }  /* 0C06F8D6 jsr @Rn */
L_0C06F8DA: BLKS(0x0C06F8DAu);
	T = (r0 & r0) == 0;  /* 0C06F8DA tst Rm,Rn */
	if (T) { UPD(0x0C06F870u, 4); goto L_0C06F870; }  /* 0C06F8DC bt */
L_0C06F8DE: BLKS(0x0C06F8DEu);
	r0 = r10;  /* 0C06F8DE mov Rm,Rn */
	r4 = 0xA9u; UPD(0x0C06F8E2u, 2);  /* 0C06F8E0 mov.w @(disp,pc),Rn */
	IF(0x0C06F8E2u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C06F8E4u, 1);  /* 0C06F8E2 mov.b @(r0,Rm),Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C06F8E6u, 1);  /* 0C06F8E4 mov.l @(disp,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C06F8E8u, 1);  /* 0C06F8E6 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A9BB0u; UPD(0x0C06F8EAu, 1);  /* 0C06F8E8 mov.l @(disp,pc),Rn */
	IF(0x0C06F8EAu); { u32 t_ = r10; PR = 0x0C06F8EEu; r6 = r3 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C06F8EEu); }  /* 0C06F8EA jsr @Rn */
L_0C06F8EE: BLKS(0x0C06F8EEu);
	T = (r0 & r0) == 0;  /* 0C06F8EE tst Rm,Rn */
	if (T) { UPD(0x0C06F870u, 4); goto L_0C06F870; }  /* 0C06F8F0 bt */
L_0C06F8F2: BLKS(0x0C06F8F2u);
	r5 = 0x3u;  /* 0C06F8F2 mov #imm,Rn */
	{ W8(r8, r5); /* slot mov.b Rm,@Rn */ UPD(0x0C06F870u, 4); goto L_0C06F870; }  /* 0C06F8F4 bra */
L_0C073FE0: BLKS(0x0C073FE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C073FE2u, 1);  /* 0C073FE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C073FE4u, 1);  /* 0C073FE2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C073FE6u, 1);  /* 0C073FE4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C073FE8u, 1);  /* 0C073FE6 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C073FEAu, 1);  /* 0C073FE8 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C073FEA exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C073FEEu, 2);  /* 0C073FEC mov.l Rm,@-Rn */
	IF(0x0C073FEEu); MACL = r11 * r0;  /* 0C073FEE mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C073FF2u, 3);  /* 0C073FF0 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C073FF4u, 1);  /* 0C073FF2 mov.l @(disp,pc),Rn */
	IF(0x0C073FF4u); r2 = MACL;  /* 0C073FF4 sts macl,Rn */
	IF(0x0C073FF6u); r15 -= 4; W32(r15, PR); UPD(0x0C073FF8u, 2);  /* 0C073FF6 sts.l pr,@-Rn */
	r2 += r0;  /* 0C073FF8 add Rm,Rn */
	r0 = R32(r2 + 0x8u); UPD(0x0C073FFCu, 2);  /* 0C073FFA mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C073FFC tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C074006u, 4); goto L_0C074006; } goto L_0C074002; }  /* 0C073FFE bf/s */
L_0C074002: BLKS(0x0C074002u);
	{ IF(0x0C074004u); ; /* slot nop */ UPD(0x0C074560u, 4); goto L_0C074560; }  /* 0C074002 bra */
L_0C074006: BLKS(0x0C074006u);
	T = r0 == 0x1u;  /* 0C074006 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C07409Cu, 4); goto L_0C07409C; }  /* 0C074008 bt */
L_0C07400A: BLKS(0x0C07400Au);
	r8 = 0xC0A03F0u; UPD(0x0C07400Cu, 1);  /* 0C07400A mov.l @(disp,pc),Rn */
	IF(0x0C07400Cu); { u32 t_ = r8; PR = 0x0C074010u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C074010u); }  /* 0C07400C jsr @Rn */
L_0C074010: BLKS(0x0C074010u);
	IF(0x0C074010u); T = (s32)r0 >= 0;  /* 0C074010 cmp/pz Rn */
	{ u32 c_ = T; r6 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07401Au, 4); goto L_0C07401A; } goto L_0C074016; }  /* 0C074012 bt/s */
L_0C074016: BLKS(0x0C074016u);
	{ IF(0x0C074018u); ; /* slot nop */ UPD(0x0C074370u, 4); goto L_0C074370; }  /* 0C074016 bra */
L_0C07401A: BLKS(0x0C07401Au);
	r2 = 0xB4u; UPD(0x0C07401Cu, 1);  /* 0C07401A mov.w @(disp,pc),Rn */
	r9 = 0x8u;  /* 0C07401C mov #imm,Rn */
	IF(0x0C07401Eu); MACL = r11 * r2;  /* 0C07401E mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C074022u, 4);  /* 0C074020 mov.l @(disp,pc),Rn */
	IF(0x0C074022u); r10 = MACL;  /* 0C074022 sts macl,Rn */
	IF(0x0C074024u); MACL = r0 * r2;  /* 0C074024 mul.l Rm,Rn */
	r10 += r8;  /* 0C074026 add Rm,Rn */
	r7 = R32(r10 + 0x30u); UPD(0x0C07402Au, 5);  /* 0C074028 mov.l @(disp,Rm),Rn */
	IF(0x0C07402Au); r5 = MACL;  /* 0C07402A sts macl,Rn */
	r5 += r8;  /* 0C07402C add Rm,Rn */
	r12 = R32(r5 + 0x24u); UPD(0x0C074030u, 3);  /* 0C07402E mov.l @(disp,Rm),Rn */
	r4 = R32(r5 + 0x28u); UPD(0x0C074032u, 1);  /* 0C074030 mov.l @(disp,Rm),Rn */
	r0 = R32(r10 + 0x2Cu); UPD(0x0C074034u, 1);  /* 0C074032 mov.l @(disp,Rm),Rn */
	r4 += r7;  /* 0C074034 add Rm,Rn */
	r2 = R32(r10 + 0x8u); UPD(0x0C074038u, 2);  /* 0C074036 mov.l @(disp,Rm),Rn */
	r12 += r0;  /* 0C074038 add Rm,Rn */
	r2 += 0xFFFFFFFEu;  /* 0C07403A add #imm,Rn */
	W32(r10 + 0x24u, r12); UPD(0x0C07403Eu, 3);  /* 0C07403C mov.l Rm,@(disp,Rn) */
	T = r2 > r9;  /* 0C07403E cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07409Cu, 4); goto L_0C07409C; } UPD(0x0C074044u, 1); goto L_0C074044; }  /* 0C074040 bt/s */
L_0C074044: BLKS(0x0C074044u);
	r0 = 0xC074058u;  /* 0C074044 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C074046 add Rm,Rn */
	IF(0x0C074048u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07404Au, 3);  /* 0C074048 mov.w @(r0,Rm),Rn */
	IF(0x0C07404Au); { u32 tv_ = (r3 + 0x0C07404Eu); u32 t_ = PHYS(tv_); IF(0x0C07404Cu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C074070u: goto L_0C074070; case 0x0C074090u: goto L_0C074090; case 0x0C074130u: goto L_0C074130; case 0x0C0741A0u: goto L_0C0741A0; case 0x0C074210u: goto L_0C074210; case 0x0C074260u: goto L_0C074260; case 0x0C0742D0u: goto L_0C0742D0; case 0x0C0742E0u: goto L_0C0742E0; case 0x0C0742F0u: goto L_0C0742F0; default: JUMPD(tv_); } }  /* 0C07404A braf Rn */
L_0C074070: BLKS(0x0C074070u);
	r1 = 0xC06F930u; UPD(0x0C074072u, 1);  /* 0C074070 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C074072 mov Rm,Rn */
	r5 = r6;  /* 0C074074 mov Rm,Rn */
	UPD(0x0C074076u, 2);
L_0C074076: BLKS(0x0C074076u);
	r15 = r14;  /* 0C074076 mov Rm,Rn */
	IF(0x0C074078u); PR = R32(r15); r15 += 4; UPD(0x0C07407Au, 2);  /* 0C074078 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07407Cu, 1);  /* 0C07407A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07407Eu, 1);  /* 0C07407C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C074080u, 1);  /* 0C07407E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C074082u, 1);  /* 0C074080 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C074084u, 1);  /* 0C074082 mov.l @Rm+,Rn */
	IF(0x0C074084u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06F830u: goto L_0C06F830; case 0x0C06F930u: TAIL(f_0C06F930); default: JUMPD(tv_); } }  /* 0C074084 jmp @Rn */
L_0C074090: BLKS(0x0C074090u);
	r9 = 0xC0A0670u; UPD(0x0C074092u, 1);  /* 0C074090 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C074092 mov Rm,Rn */
	IF(0x0C074094u); { u32 t_ = r9; PR = 0x0C074098u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C074098u); }  /* 0C074094 jsr @Rn */
L_0C074098: BLKS(0x0C074098u);
	T = (r0 & r0) == 0;  /* 0C074098 tst Rm,Rn */
	if (!T) { UPD(0x0C0740B0u, 4); goto L_0C0740B0; }  /* 0C07409A bf */
L_0C07409C: BLKS(0x0C07409Cu);
	r15 = r14;  /* 0C07409C mov Rm,Rn */
	IF(0x0C07409Eu); PR = R32(r15); r15 += 4; UPD(0x0C0740A0u, 2);  /* 0C07409E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0740A2u, 1);  /* 0C0740A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0740A4u, 1);  /* 0C0740A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0740A6u, 1);  /* 0C0740A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0740A8u, 1);  /* 0C0740A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0740AAu, 1);  /* 0C0740A8 mov.l @Rm+,Rn */
	IF(0x0C0740AAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0740AA rts */
L_0C0740B0: BLKS(0x0C0740B0u);
	r10 = 0xC0A9E40u; UPD(0x0C0740B2u, 1);  /* 0C0740B0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0740B2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C0740B4 mov #imm,Rn */
	IF(0x0C0740B6u); { u32 t_ = r10; PR = 0x0C0740BAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0740BAu); }  /* 0C0740B6 jsr @Rn */
L_0C0740BA: BLKS(0x0C0740BAu);
	T = (r0 & r0) == 0;  /* 0C0740BA tst Rm,Rn */
	if (T) { UPD(0x0C07409Cu, 4); goto L_0C07409C; }  /* 0C0740BC bt */
L_0C0740BE: BLKS(0x0C0740BEu);
	r5 = 0xB4u; UPD(0x0C0740C0u, 1);  /* 0C0740BE mov.w @(disp,pc),Rn */
	IF(0x0C0740C0u); MACL = r11 * r5;  /* 0C0740C0 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0740C4u, 3);  /* 0C0740C2 mov.l @(disp,pc),Rn */
	IF(0x0C0740C4u); r10 = MACL;  /* 0C0740C4 sts macl,Rn */
	r10 += r7;  /* 0C0740C6 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C0740CAu, 3);  /* 0C0740C8 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C0740CA mov Rm,Rn */
	IF(0x0C0740CCu); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0740CEu, 2);  /* 0C0740CC mov.b @(r0,Rm),Rn */
	r12 = 0xC0A9BB0u; UPD(0x0C0740D0u, 1);  /* 0C0740CE mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C0740D0 extu.b Rm,Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C0740D4u, 2);  /* 0C0740D2 mov.l @(disp,Rm),Rn */
	IF(0x0C0740D4u); { u32 t_ = r12; PR = 0x0C0740D8u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0740D8u); }  /* 0C0740D4 jsr @Rn */
L_0C0740D8: BLKS(0x0C0740D8u);
	T = (r0 & r0) == 0;  /* 0C0740D8 tst Rm,Rn */
	if (T) { UPD(0x0C07409Cu, 4); goto L_0C07409C; }  /* 0C0740DA bt */
L_0C0740DC: BLKS(0x0C0740DCu);
	r0 = r10;  /* 0C0740DC mov Rm,Rn */
	r3 = 0x86u; UPD(0x0C0740E0u, 2);  /* 0C0740DE mov.w @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C0740E2u, 1);  /* 0C0740E0 mov.l @(disp,pc),Rn */
	IF(0x0C0740E2u); r9 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0740E4u, 1);  /* 0C0740E2 mov.w @(r0,Rm),Rn */
	r5 = 0x100000u; UPD(0x0C0740E6u, 1);  /* 0C0740E4 mov.l @(disp,pc),Rn */
	IF(0x0C0740E6u); { u32 t_ = r8; PR = 0x0C0740EAu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0740EAu); }  /* 0C0740E6 jsr @Rn */
L_0C0740EA: BLKS(0x0C0740EAu);
	r8 = R32(r10 + 0x24u); UPD(0x0C0740ECu, 1);  /* 0C0740EA mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0740EC mov Rm,Rn */
	r12 = 0xC058030u; UPD(0x0C0740F0u, 2);  /* 0C0740EE mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C0740F0 add Rm,Rn */
	r2 = 0x20000u; UPD(0x0C0740F4u, 2);  /* 0C0740F2 mov.l @(disp,pc),Rn */
	r5 = 0x140000u; UPD(0x0C0740F6u, 1);  /* 0C0740F4 mov.l @(disp,pc),Rn */
	IF(0x0C0740F6u); { u32 t_ = r12; PR = 0x0C0740FAu; r8 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0740FAu); }  /* 0C0740F6 jsr @Rn */
L_0C0740FA: BLKS(0x0C0740FAu);
	r6 = R32(r10 + 0x28u); UPD(0x0C0740FCu, 1);  /* 0C0740FA mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0740FC add #imm,Rn */
	r6 += r0;  /* 0C0740FE add Rm,Rn */
	r0 = 0x30000u; UPD(0x0C074102u, 3);  /* 0C074100 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C074102 mov #imm,Rn */
	W32(r15, r0); UPD(0x0C074106u, 2);  /* 0C074104 mov.l Rm,@Rn */
L_0C074106: BLKS(0x0C074106u);
	r0 = 0xC0A8A50u; UPD(0x0C074108u, 1);  /* 0C074106 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C074108 mov Rm,Rn */
	r7 = r9;  /* 0C07410A mov Rm,Rn */
	UPD(0x0C07410Cu, 2);
L_0C07410C: BLKS(0x0C07410Cu);
	IF(0x0C07410Cu); { u32 t_ = r0; PR = 0x0C074110u; IF(0x0C07410Eu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C074110u); }  /* 0C07410C jsr @Rn */
L_0C074110: BLKS(0x0C074110u);
	r1 = 0xC0580D0u; UPD(0x0C074112u, 1);  /* 0C074110 mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C074112 add #imm,Rn */
	r4 = r11;  /* 0C074114 mov Rm,Rn */
	IF(0x0C074116u); ;  /* 0C074116 nop */
	UPD(0x0C074118u, 3);
L_0C074118: BLKS(0x0C074118u);
	r15 = r14;  /* 0C074118 mov Rm,Rn */
	IF(0x0C07411Au); PR = R32(r15); r15 += 4; UPD(0x0C07411Cu, 2);  /* 0C07411A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07411Eu, 1);  /* 0C07411C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C074120u, 1);  /* 0C07411E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C074122u, 1);  /* 0C074120 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C074124u, 1);  /* 0C074122 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C074126u, 1);  /* 0C074124 mov.l @Rm+,Rn */
	IF(0x0C074126u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A0380u: TAIL(f_0C0A0380); case 0x0C0A0870u: TAIL(f_0C0A0870); default: JUMPD(tv_); } }  /* 0C074126 jmp @Rn */
L_0C074130: BLKS(0x0C074130u);
	r9 = 0xC0A0670u; UPD(0x0C074132u, 1);  /* 0C074130 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C074132 mov Rm,Rn */
	IF(0x0C074134u); { u32 t_ = r9; PR = 0x0C074138u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C074138u); }  /* 0C074134 jsr @Rn */
L_0C074138: BLKS(0x0C074138u);
	T = (r0 & r0) == 0;  /* 0C074138 tst Rm,Rn */
	if (T) { UPD(0x0C07409Cu, 4); goto L_0C07409C; }  /* 0C07413A bt */
L_0C07413C: BLKS(0x0C07413Cu);
	r4 = r11;  /* 0C07413C mov Rm,Rn */
	r10 = 0xC0A9E40u; UPD(0x0C074140u, 2);  /* 0C07413E mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C074140 mov #imm,Rn */
	IF(0x0C074142u); { u32 t_ = r10; PR = 0x0C074146u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C074146u); }  /* 0C074142 jsr @Rn */
L_0C074146: BLKS(0x0C074146u);
	T = (r0 & r0) == 0;  /* 0C074146 tst Rm,Rn */
	if (T) { UPD(0x0C07409Cu, 4); goto L_0C07409C; }  /* 0C074148 bt */
L_0C07414A: BLKS(0x0C07414Au);
	r5 = 0xB4u; UPD(0x0C07414Cu, 1);  /* 0C07414A mov.w @(disp,pc),Rn */
	IF(0x0C07414Cu); MACL = r11 * r5;  /* 0C07414C mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C074150u, 3);  /* 0C07414E mov.l @(disp,pc),Rn */
	IF(0x0C074150u); r10 = MACL;  /* 0C074150 sts macl,Rn */
	r10 += r7;  /* 0C074152 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C074156u, 3);  /* 0C074154 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C074156 mov Rm,Rn */
	IF(0x0C074158u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07415Au, 2);  /* 0C074158 mov.b @(r0,Rm),Rn */
	r12 = 0xC0A9BB0u; UPD(0x0C07415Cu, 1);  /* 0C07415A mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C07415C extu.b Rm,Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C074160u, 2);  /* 0C07415E mov.l @(disp,Rm),Rn */
	IF(0x0C074160u); { u32 t_ = r12; PR = 0x0C074164u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C074164u); }  /* 0C074160 jsr @Rn */
L_0C074164: BLKS(0x0C074164u);
	T = (r0 & r0) == 0;  /* 0C074164 tst Rm,Rn */
	if (T) { UPD(0x0C07409Cu, 4); goto L_0C07409C; }  /* 0C074166 bt */
L_0C074168: BLKS(0x0C074168u);
	r0 = r10;  /* 0C074168 mov Rm,Rn */
	r3 = 0x86u; UPD(0x0C07416Cu, 2);  /* 0C07416A mov.w @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C07416Eu, 1);  /* 0C07416C mov.l @(disp,pc),Rn */
	IF(0x0C07416Eu); r9 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C074170u, 1);  /* 0C07416E mov.w @(r0,Rm),Rn */
	r5 = 0x100000u; UPD(0x0C074172u, 1);  /* 0C074170 mov.l @(disp,pc),Rn */
	IF(0x0C074172u); { u32 t_ = r8; PR = 0x0C074176u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C074176u); }  /* 0C074172 jsr @Rn */
L_0C074176: BLKS(0x0C074176u);
	r8 = R32(r10 + 0x24u); UPD(0x0C074178u, 1);  /* 0C074176 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C074178 mov Rm,Rn */
	r12 = 0xC058030u; UPD(0x0C07417Cu, 2);  /* 0C07417A mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C07417C add Rm,Rn */
	r2 = 0x10000u; UPD(0x0C074180u, 2);  /* 0C07417E mov.l @(disp,pc),Rn */
	r5 = 0x140000u; UPD(0x0C074182u, 1);  /* 0C074180 mov.l @(disp,pc),Rn */
	IF(0x0C074182u); { u32 t_ = r12; PR = 0x0C074186u; r8 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C074186u); }  /* 0C074182 jsr @Rn */
L_0C074186: BLKS(0x0C074186u);
	r6 = R32(r10 + 0x28u); UPD(0x0C074188u, 1);  /* 0C074186 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C074188 add #imm,Rn */
	r6 += r0;  /* 0C07418A add Rm,Rn */
	r0 = 0x30000u; UPD(0x0C07418Eu, 3);  /* 0C07418C mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C07418E mov #imm,Rn */
	{ W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C074106u, 4); goto L_0C074106; }  /* 0C074190 bra */
L_0C0741A0: BLKS(0x0C0741A0u);
	r9 = 0xC0A0670u; UPD(0x0C0741A2u, 1);  /* 0C0741A0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0741A2 mov Rm,Rn */
	IF(0x0C0741A4u); { u32 t_ = r9; PR = 0x0C0741A8u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C0741A8u); }  /* 0C0741A4 jsr @Rn */
L_0C0741A8: BLKS(0x0C0741A8u);
	T = (r0 & r0) == 0;  /* 0C0741A8 tst Rm,Rn */
	if (T) { UPD(0x0C07427Au, 4); goto L_0C07427A; }  /* 0C0741AA bt */
L_0C0741AC: BLKS(0x0C0741ACu);
	r4 = r11;  /* 0C0741AC mov Rm,Rn */
	r10 = 0xC0A9E40u; UPD(0x0C0741B0u, 2);  /* 0C0741AE mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C0741B0 mov #imm,Rn */
	IF(0x0C0741B2u); { u32 t_ = r10; PR = 0x0C0741B6u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0741B6u); }  /* 0C0741B2 jsr @Rn */
L_0C0741B6: BLKS(0x0C0741B6u);
	T = (r0 & r0) == 0;  /* 0C0741B6 tst Rm,Rn */
	if (T) { UPD(0x0C07427Au, 4); goto L_0C07427A; }  /* 0C0741B8 bt */
L_0C0741BA: BLKS(0x0C0741BAu);
	r5 = 0xB4u; UPD(0x0C0741BCu, 1);  /* 0C0741BA mov.w @(disp,pc),Rn */
	IF(0x0C0741BCu); MACL = r11 * r5;  /* 0C0741BC mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0741C0u, 3);  /* 0C0741BE mov.l @(disp,pc),Rn */
	IF(0x0C0741C0u); r12 = MACL;  /* 0C0741C0 sts macl,Rn */
	r12 += r7;  /* 0C0741C2 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C0741C6u, 3);  /* 0C0741C4 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C0741C6 mov Rm,Rn */
	IF(0x0C0741C8u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0741CAu, 2);  /* 0C0741C8 mov.b @(r0,Rm),Rn */
	r8 = 0xC0A9BB0u; UPD(0x0C0741CCu, 1);  /* 0C0741CA mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C0741CC extu.b Rm,Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C0741D0u, 2);  /* 0C0741CE mov.l @(disp,Rm),Rn */
	IF(0x0C0741D0u); { u32 t_ = r8; PR = 0x0C0741D4u; r5 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0741D4u); }  /* 0C0741D0 jsr @Rn */
L_0C0741D4: BLKS(0x0C0741D4u);
	T = (r0 & r0) == 0;  /* 0C0741D4 tst Rm,Rn */
	if (T) { UPD(0x0C07427Au, 4); goto L_0C07427A; }  /* 0C0741D6 bt */
L_0C0741D8: BLKS(0x0C0741D8u);
	r0 = r12;  /* 0C0741D8 mov Rm,Rn */
	r2 = 0x86u; UPD(0x0C0741DCu, 2);  /* 0C0741DA mov.w @(disp,pc),Rn */
	r10 = 0xC058060u; UPD(0x0C0741DEu, 1);  /* 0C0741DC mov.l @(disp,pc),Rn */
	IF(0x0C0741DEu); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0741E0u, 1);  /* 0C0741DE mov.w @(r0,Rm),Rn */
	r5 = 0xC0000u; UPD(0x0C0741E2u, 1);  /* 0C0741E0 mov.l @(disp,pc),Rn */
	IF(0x0C0741E2u); { u32 t_ = r10; PR = 0x0C0741E6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0741E6u); }  /* 0C0741E2 jsr @Rn */
L_0C0741E6: BLKS(0x0C0741E6u);
	r8 = R32(r12 + 0x24u); UPD(0x0C0741E8u, 1);  /* 0C0741E6 mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C0741E8 add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C0741ECu, 2);  /* 0C0741EA mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C0741EEu, 1);  /* 0C0741EC mov.l @(disp,pc),Rn */
	IF(0x0C0741EEu); { u32 t_ = r0; PR = 0x0C0741F2u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0741F2u); }  /* 0C0741EE jsr @Rn */
L_0C0741F2: BLKS(0x0C0741F2u);
	r10 = 0x20000u; UPD(0x0C0741F4u, 1);  /* 0C0741F2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0741F4 add #imm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C0741F8u, 2);  /* 0C0741F6 mov.l @(disp,Rm),Rn */
	r8 += r10;  /* 0C0741F8 add Rm,Rn */
	W32(r15, r10); UPD(0x0C0741FCu, 2);  /* 0C0741FA mov.l Rm,@Rn */
	r6 += r0;  /* 0C0741FC add Rm,Rn */
	{ r4 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C074106u, 4); goto L_0C074106; }  /* 0C0741FE bra */
L_0C074210: BLKS(0x0C074210u);
	r1 = 0xC06FA70u; UPD(0x0C074212u, 1);  /* 0C074210 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C074212 mov Rm,Rn */
	{ r5 = r6; /* slot mov Rm,Rn */ UPD(0x0C074076u, 4); goto L_0C074076; }  /* 0C074214 bra */
L_0C074260: BLKS(0x0C074260u);
	r12 = 0xC0A0670u; UPD(0x0C074262u, 1);  /* 0C074260 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C074262 mov Rm,Rn */
	IF(0x0C074264u); { u32 t_ = r12; PR = 0x0C074268u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C074268u); }  /* 0C074264 jsr @Rn */
L_0C074268: BLKS(0x0C074268u);
	T = (r0 & r0) == 0;  /* 0C074268 tst Rm,Rn */
	if (T) { UPD(0x0C07427Au, 4); goto L_0C07427A; }  /* 0C07426A bt */
L_0C07426C: BLKS(0x0C07426Cu);
	r4 = r11;  /* 0C07426C mov Rm,Rn */
	r9 = 0xC0A9E40u; UPD(0x0C074270u, 2);  /* 0C07426E mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C074270 mov #imm,Rn */
	IF(0x0C074272u); { u32 t_ = r9; PR = 0x0C074276u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C074276u); }  /* 0C074272 jsr @Rn */
L_0C074276: BLKS(0x0C074276u);
	T = (r0 & r0) == 0;  /* 0C074276 tst Rm,Rn */
	if (!T) { UPD(0x0C07427Eu, 4); goto L_0C07427E; }  /* 0C074278 bf */
L_0C07427A: BLKS(0x0C07427Au);
	{ IF(0x0C07427Cu); ; /* slot nop */ UPD(0x0C07409Cu, 3); goto L_0C07409C; }  /* 0C07427A bra */
L_0C07427E: BLKS(0x0C07427Eu);
	r6 = 0xB4u; UPD(0x0C074280u, 1);  /* 0C07427E mov.w @(disp,pc),Rn */
	IF(0x0C074280u); MACL = r11 * r6;  /* 0C074280 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C074284u, 3);  /* 0C074282 mov.l @(disp,pc),Rn */
	IF(0x0C074284u); r10 = MACL;  /* 0C074284 sts macl,Rn */
	r10 += r0;  /* 0C074286 add Rm,Rn */
	r4 = 0xA9u; UPD(0x0C07428Au, 3);  /* 0C074288 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C07428A mov Rm,Rn */
	r8 = 0xC0A9BB0u; UPD(0x0C07428Eu, 2);  /* 0C07428C mov.l @(disp,pc),Rn */
	IF(0x0C07428Eu); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C074290u, 1);  /* 0C07428E mov.b @(r0,Rm),Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C074292u, 1);  /* 0C074290 mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C074292 extu.b Rm,Rn */
	IF(0x0C074294u); { u32 t_ = r8; PR = 0x0C074298u; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C074298u); }  /* 0C074294 jsr @Rn */
L_0C074298: BLKS(0x0C074298u);
	T = (r0 & r0) == 0;  /* 0C074298 tst Rm,Rn */
	if (T) { UPD(0x0C07435Eu, 4); goto L_0C07435E; }  /* 0C07429A bt */
L_0C07429C: BLKS(0x0C07429Cu);
	r0 = r10;  /* 0C07429C mov Rm,Rn */
	r2 = 0x86u; UPD(0x0C0742A0u, 2);  /* 0C07429E mov.w @(disp,pc),Rn */
	r9 = 0xC058060u; UPD(0x0C0742A2u, 1);  /* 0C0742A0 mov.l @(disp,pc),Rn */
	IF(0x0C0742A2u); r12 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0742A4u, 1);  /* 0C0742A2 mov.w @(r0,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C0742A6u, 1);  /* 0C0742A4 mov.l @(disp,pc),Rn */
	IF(0x0C0742A6u); { u32 t_ = r9; PR = 0x0C0742AAu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0742AAu); }  /* 0C0742A6 jsr @Rn */
L_0C0742AA: BLKS(0x0C0742AAu);
	r9 = R32(r10 + 0x24u); UPD(0x0C0742ACu, 1);  /* 0C0742AA mov.l @(disp,Rm),Rn */
	r5 = 0x10000u; UPD(0x0C0742AEu, 1);  /* 0C0742AC mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C0742AE add Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C0742B2u, 2);  /* 0C0742B0 mov.l @(disp,pc),Rn */
	r9 += r5;  /* 0C0742B2 add Rm,Rn */
	r5 = 0xA0000u; UPD(0x0C0742B6u, 2);  /* 0C0742B4 mov.l @(disp,pc),Rn */
	IF(0x0C0742B6u); { u32 t_ = r8; PR = 0x0C0742BAu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0742BAu); }  /* 0C0742B6 jsr @Rn */
L_0C0742BA: BLKS(0x0C0742BAu);
	r6 = R32(r10 + 0x28u); UPD(0x0C0742BCu, 1);  /* 0C0742BA mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0742BC add #imm,Rn */
	r7 = 0x28000u; UPD(0x0C0742C0u, 2);  /* 0C0742BE mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0742C0 add Rm,Rn */
	W32(r15, r7); UPD(0x0C0742C4u, 2);  /* 0C0742C2 mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C0742C4 mov #imm,Rn */
	r0 = 0xC0A81B0u; UPD(0x0C0742C8u, 2);  /* 0C0742C6 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C0742C8 mov Rm,Rn */
	{ r7 = r12; /* slot mov Rm,Rn */ UPD(0x0C07410Cu, 4); goto L_0C07410C; }  /* 0C0742CA bra */
L_0C0742D0: BLKS(0x0C0742D0u);
	r1 = 0xC06F830u; UPD(0x0C0742D2u, 1);  /* 0C0742D0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0742D2 mov Rm,Rn */
	{ r5 = r6; /* slot mov Rm,Rn */ UPD(0x0C074076u, 4); goto L_0C074076; }  /* 0C0742D4 bra */
L_0C0742E0: BLKS(0x0C0742E0u);
	r1 = 0xC06FBD0u; UPD(0x0C0742E2u, 1);  /* 0C0742E0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0742E2 mov Rm,Rn */
	{ r5 = r6; /* slot mov Rm,Rn */ UPD(0x0C074076u, 4); goto L_0C074076; }  /* 0C0742E4 bra */
L_0C0742F0: BLKS(0x0C0742F0u);
	r10 = 0xC0A0670u; UPD(0x0C0742F2u, 1);  /* 0C0742F0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0742F2 mov Rm,Rn */
	IF(0x0C0742F4u); { u32 t_ = r10; PR = 0x0C0742F8u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C0742F8u); }  /* 0C0742F4 jsr @Rn */
L_0C0742F8: BLKS(0x0C0742F8u);
	T = (r0 & r0) == 0;  /* 0C0742F8 tst Rm,Rn */
	if (T) { UPD(0x0C07435Eu, 4); goto L_0C07435E; }  /* 0C0742FA bt */
L_0C0742FC: BLKS(0x0C0742FCu);
	r4 = r11;  /* 0C0742FC mov Rm,Rn */
	r12 = 0xC0A9E40u; UPD(0x0C074300u, 2);  /* 0C0742FE mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C074300 mov #imm,Rn */
	IF(0x0C074302u); { u32 t_ = r12; PR = 0x0C074306u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C074306u); }  /* 0C074302 jsr @Rn */
L_0C074306: BLKS(0x0C074306u);
	T = (r0 & r0) == 0;  /* 0C074306 tst Rm,Rn */
	if (T) { UPD(0x0C07435Eu, 4); goto L_0C07435E; }  /* 0C074308 bt */
L_0C07430A: BLKS(0x0C07430Au);
	r6 = 0xB4u; UPD(0x0C07430Cu, 1);  /* 0C07430A mov.w @(disp,pc),Rn */
	IF(0x0C07430Cu); MACL = r11 * r6;  /* 0C07430C mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C074310u, 3);  /* 0C07430E mov.l @(disp,pc),Rn */
	IF(0x0C074310u); r10 = MACL;  /* 0C074310 sts macl,Rn */
	r10 += r0;  /* 0C074312 add Rm,Rn */
	r4 = 0xA9u; UPD(0x0C074316u, 3);  /* 0C074314 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C074316 mov Rm,Rn */
	r8 = 0xC0A9BB0u; UPD(0x0C07431Au, 2);  /* 0C074318 mov.l @(disp,pc),Rn */
	IF(0x0C07431Au); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C07431Cu, 1);  /* 0C07431A mov.b @(r0,Rm),Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C07431Eu, 1);  /* 0C07431C mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C07431E extu.b Rm,Rn */
	IF(0x0C074320u); { u32 t_ = r8; PR = 0x0C074324u; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C074324u); }  /* 0C074320 jsr @Rn */
L_0C074324: BLKS(0x0C074324u);
	T = (r0 & r0) == 0;  /* 0C074324 tst Rm,Rn */
	if (T) { UPD(0x0C07435Eu, 4); goto L_0C07435E; }  /* 0C074326 bt */
L_0C074328: BLKS(0x0C074328u);
	r0 = r10;  /* 0C074328 mov Rm,Rn */
	r5 = 0x86u; UPD(0x0C07432Cu, 2);  /* 0C07432A mov.w @(disp,pc),Rn */
	r9 = 0xC058060u; UPD(0x0C07432Eu, 1);  /* 0C07432C mov.l @(disp,pc),Rn */
	IF(0x0C07432Eu); r12 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C074330u, 1);  /* 0C07432E mov.w @(r0,Rm),Rn */
	r8 = 0xC058030u; UPD(0x0C074332u, 1);  /* 0C074330 mov.l @(disp,pc),Rn */
	r5 = 0xF0000u; UPD(0x0C074334u, 1);  /* 0C074332 mov.l @(disp,pc),Rn */
	IF(0x0C074334u); { u32 t_ = r9; PR = 0x0C074338u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C074338u); }  /* 0C074334 jsr @Rn */
L_0C074338: BLKS(0x0C074338u);
	r9 = R32(r10 + 0x24u); UPD(0x0C07433Au, 1);  /* 0C074338 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C07433A mov Rm,Rn */
	r5 = 0x140000u; UPD(0x0C07433Eu, 2);  /* 0C07433C mov.l @(disp,pc),Rn */
	IF(0x0C07433Eu); { u32 t_ = r8; PR = 0x0C074342u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C074342u); }  /* 0C07433E jsr @Rn */
L_0C074342: BLKS(0x0C074342u);
	r6 = R32(r10 + 0x28u); UPD(0x0C074344u, 1);  /* 0C074342 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C074344 mov Rm,Rn */
	r7 = 0x20000u; UPD(0x0C074348u, 2);  /* 0C074346 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C074348 add #imm,Rn */
	r9 = 0xC0A81B0u; UPD(0x0C07434Cu, 2);  /* 0C07434A mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C07434C mov #imm,Rn */
	W32(r15, r7); UPD(0x0C074350u, 2);  /* 0C07434E mov.l Rm,@Rn */
	r6 += r0;  /* 0C074350 add Rm,Rn */
	IF(0x0C074352u); { u32 t_ = r9; PR = 0x0C074356u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C074356u); }  /* 0C074352 jsr @Rn */
L_0C074356: BLKS(0x0C074356u);
	r4 = r11;  /* 0C074356 mov Rm,Rn */
	r11 = 0xC0580D0u; UPD(0x0C07435Au, 2);  /* 0C074358 mov.l @(disp,pc),Rn */
	IF(0x0C07435Au); { u32 t_ = r11; PR = 0x0C07435Eu; r15 += 0x4u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C07435Eu); }  /* 0C07435A jsr @Rn */
L_0C07435E: BLKS(0x0C07435Eu);
	{ IF(0x0C074360u); ; /* slot nop */ UPD(0x0C07409Cu, 3); goto L_0C07409C; }  /* 0C07435E bra */
L_0C074370: BLKS(0x0C074370u);
	r4 = 0xB4u; UPD(0x0C074372u, 1);  /* 0C074370 mov.w @(disp,pc),Rn */
	IF(0x0C074372u); MACL = r11 * r4;  /* 0C074372 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C074376u, 3);  /* 0C074374 mov.l @(disp,pc),Rn */
	IF(0x0C074376u); r9 = MACL;  /* 0C074376 sts macl,Rn */
	r9 += r2;  /* 0C074378 add Rm,Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C07437Cu, 3);  /* 0C07437A mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C07437C tst Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C074386u, 4); goto L_0C074386; } goto L_0C074382; }  /* 0C07437E bf/s */
L_0C074382: BLKS(0x0C074382u);
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C074550u, 4); goto L_0C074550; }  /* 0C074382 bra */
L_0C074386: BLKS(0x0C074386u);
	if (!T) { UPD(0x0C07438Eu, 3); goto L_0C07438E; }  /* 0C074386 bf */
L_0C074388: BLKS(0x0C074388u);
	r15 += 0xFFFFFFF8u;  /* 0C074388 add #imm,Rn */
	{ r5 = 0xBu; /* slot mov #imm,Rn */ UPD(0x0C074510u, 4); goto L_0C074510; }  /* 0C07438A bra */
L_0C07438E: BLKS(0x0C07438Eu);
	r9 = 0xC0A03F0u; UPD(0x0C074390u, 1);  /* 0C07438E mov.l @(disp,pc),Rn */
	IF(0x0C074390u); { u32 t_ = r9; PR = 0x0C074394u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C074394u); }  /* 0C074390 jsr @Rn */
L_0C074394: BLKS(0x0C074394u);
	IF(0x0C074394u); T = (s32)r0 >= 0;  /* 0C074394 cmp/pz Rn */
	{ u32 c_ = T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07439Eu, 4); goto L_0C07439E; } goto L_0C07439A; }  /* 0C074396 bt/s */
L_0C07439A: BLKS(0x0C07439Au);
	{ r2 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C074500u, 4); goto L_0C074500; }  /* 0C07439A bra */
L_0C07439E: BLKS(0x0C07439Eu);
	r10 = 0xC050D70u; UPD(0x0C0743A0u, 1);  /* 0C07439E mov.l @(disp,pc),Rn */
	IF(0x0C0743A0u); { u32 t_ = r10; PR = 0x0C0743A4u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0743A4u); }  /* 0C0743A0 jsr @Rn */
L_0C0743A4: BLKS(0x0C0743A4u);
	T = r0 == 0x2u;  /* 0C0743A4 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0743AEu, 4); goto L_0C0743AE; }  /* 0C0743A6 bf */
L_0C0743A8: BLKS(0x0C0743A8u);
	r15 += 0xFFFFFFF8u;  /* 0C0743A8 add #imm,Rn */
	{ IF(0x0C0743ACu); ; /* slot nop */ UPD(0x0C0744D0u, 4); goto L_0C0744D0; }  /* 0C0743AA bra */
L_0C0743AE: BLKS(0x0C0743AEu);
	r12 = 0x2u;  /* 0C0743AE mov #imm,Rn */
	T = (s32)r0 > (s32)r12;  /* 0C0743B0 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0744A0u, 5); goto L_0C0744A0; } goto L_0C0743B6; }  /* 0C0743B2 bt/s */
L_0C0743B6: BLKS(0x0C0743B6u);
	T = r0 == 0x1u;  /* 0C0743B6 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C074410u, 5); goto L_0C074410; }  /* 0C0743B8 bt */
L_0C0743BA: BLKS(0x0C0743BAu);
	r2 = 0xB4u; UPD(0x0C0743BCu, 1);  /* 0C0743BA mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0743BC add #imm,Rn */
	IF(0x0C0743BEu); MACL = r11 * r2;  /* 0C0743BE mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0743C2u, 4);  /* 0C0743C0 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0743C2 mov #imm,Rn */
	IF(0x0C0743C4u); r3 = MACL;  /* 0C0743C4 sts macl,Rn */
	r3 += r0;  /* 0C0743C6 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0743CAu, 4);  /* 0C0743C8 mov.w @(disp,pc),Rn */
	IF(0x0C0743CAu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0743CCu, 1);  /* 0C0743CA mov.b @(r0,Rm),Rn */
	r9 = r4 & 0xFF;  /* 0C0743CC extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C0743D0u, 2);  /* 0C0743CE mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0743D0 add #imm,Rn */
	IF(0x0C0743D2u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0743D4u, 2);  /* 0C0743D2 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0743D4 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0743D8u, 2);  /* 0C0743D6 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C0743DAu, 1);  /* 0C0743D8 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0743DCu, 1);  /* 0C0743DA mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0743DEu, 1);  /* 0C0743DC mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0743E0u, 1);  /* 0C0743DE mov.l @(disp,Rm),Rn */
L_0C0743E0: BLKS(0x0C0743E0u);
	IF(0x0C0743E0u); { u32 t_ = r0; PR = 0x0C0743E4u; IF(0x0C0743E2u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0743E4u); }  /* 0C0743E0 jsr @Rn */
L_0C0743E4: BLKS(0x0C0743E4u);
	r0 = 0xB4u; UPD(0x0C0743E6u, 1);  /* 0C0743E4 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0743E6 add #imm,Rn */
	IF(0x0C0743E8u); MACL = r8 * r0;  /* 0C0743E8 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C0743ECu, 4);  /* 0C0743EA mov.l @(disp,pc),Rn */
	IF(0x0C0743ECu); r8 = MACL;  /* 0C0743EC sts macl,Rn */
	r8 += r12;  /* 0C0743EE add Rm,Rn */
	r3 = R32(r8); UPD(0x0C0743F2u, 3);  /* 0C0743F0 mov.l @Rm,Rn */
	IF(0x0C0743F2u); MACL = r11 * r0;  /* 0C0743F2 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C0743F6u, 3);  /* 0C0743F4 mov.l @(disp,pc),Rn */
	r3 |= r1;  /* 0C0743F6 or Rm,Rn */
	W32(r8, r3); UPD(0x0C0743FAu, 2);  /* 0C0743F8 mov.l Rm,@Rn */
	IF(0x0C0743FAu); r0 = MACL;  /* 0C0743FA sts macl,Rn */
	r11 = 0x0u;  /* 0C0743FC mov #imm,Rn */
	{ IF(0x0C074400u); W32(r0 + r12, r11); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C07409Cu, 5); goto L_0C07409C; }  /* 0C0743FE bra */
L_0C074410: BLKS(0x0C074410u);
	r9 = 0xB4u; UPD(0x0C074412u, 1);  /* 0C074410 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C074412 add #imm,Rn */
	IF(0x0C074414u); MACL = r11 * r9;  /* 0C074414 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C074418u, 4);  /* 0C074416 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C07441Au, 1);  /* 0C074418 mov.w @(disp,pc),Rn */
	IF(0x0C07441Au); r10 = MACL;  /* 0C07441A sts macl,Rn */
	r10 += r7;  /* 0C07441C add Rm,Rn */
	IF(0x0C07441Eu); r6 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C074420u, 3);  /* 0C07441E mov.b @(r0,Rm),Rn */
	r3 = r6 & 0xFF;  /* 0C074420 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C074424u, 2);  /* 0C074422 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C074424 add #imm,Rn */
	IF(0x0C074426u); r12 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C074428u, 2);  /* 0C074426 mov.b @(r0,Rm),Rn */
	r5 = r12 & 0xFF;  /* 0C074428 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07442Cu, 2);  /* 0C07442A mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C07442Eu, 1);  /* 0C07442C mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C07442E mov #imm,Rn */
	r4 = R32(r10); UPD(0x0C074432u, 2);  /* 0C074430 mov.l @Rm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C074434u, 1);  /* 0C074432 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0743E0u, 3); goto L_0C0743E0; }  /* 0C074434 bra */
L_0C0744A0: BLKS(0x0C0744A0u);
	if (!T) { UPD(0x0C0743BAu, 3); goto L_0C0743BA; }  /* 0C0744A0 bf */
L_0C0744A2: BLKS(0x0C0744A2u);
	r15 += 0xFFFFFFF8u;  /* 0C0744A2 add #imm,Rn */
	r5 = 0xB4u; UPD(0x0C0744A6u, 2);  /* 0C0744A4 mov.w @(disp,pc),Rn */
	IF(0x0C0744A6u); MACL = r11 * r5;  /* 0C0744A6 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0744AAu, 3);  /* 0C0744A8 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0744ACu, 1);  /* 0C0744AA mov.w @(disp,pc),Rn */
	IF(0x0C0744ACu); r9 = MACL;  /* 0C0744AC sts macl,Rn */
	r9 += r2;  /* 0C0744AE add Rm,Rn */
	IF(0x0C0744B0u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0744B2u, 3);  /* 0C0744B0 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0744B2 mov #imm,Rn */
	r10 = r4 & 0xFF;  /* 0C0744B4 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C0744B8u, 3);  /* 0C0744B6 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0744B8 add #imm,Rn */
	IF(0x0C0744BAu); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0744BCu, 2);  /* 0C0744BA mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0744BC extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0744C0u, 2);  /* 0C0744BE mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0744C2u, 1);  /* 0C0744C0 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0744C4u, 1);  /* 0C0744C2 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0744C6u, 1);  /* 0C0744C4 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0743E0u, 3); goto L_0C0743E0; }  /* 0C0744C6 bra */
L_0C0744D0: BLKS(0x0C0744D0u);
	r3 = 0xB4u; UPD(0x0C0744D2u, 1);  /* 0C0744D0 mov.w @(disp,pc),Rn */
	IF(0x0C0744D2u); MACL = r11 * r3;  /* 0C0744D2 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0744D6u, 3);  /* 0C0744D4 mov.l @(disp,pc),Rn */
	IF(0x0C0744D6u); r10 = MACL;  /* 0C0744D6 sts macl,Rn */
	r10 += r0;  /* 0C0744D8 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0744DCu, 3);  /* 0C0744DA mov.w @(disp,pc),Rn */
	IF(0x0C0744DCu); r12 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0744DEu, 1);  /* 0C0744DC mov.b @(r0,Rm),Rn */
	r5 = r12 & 0xFF;  /* 0C0744DE extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0744E2u, 2);  /* 0C0744E0 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0744E2 add #imm,Rn */
	IF(0x0C0744E4u); r2 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0744E6u, 2);  /* 0C0744E4 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0744E6 mov #imm,Rn */
	r4 = r2 & 0xFF;  /* 0C0744E8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0744ECu, 3);  /* 0C0744EA mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C0744EEu, 1);  /* 0C0744EC mov.l @(disp,pc),Rn */
	r4 = R32(r10); UPD(0x0C0744F0u, 1);  /* 0C0744EE mov.l @Rm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C0744F2u, 1);  /* 0C0744F0 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0743E0u, 3); goto L_0C0743E0; }  /* 0C0744F2 bra */
L_0C074500: BLKS(0x0C074500u);
	r5 = 0xB4u; UPD(0x0C074502u, 1);  /* 0C074500 mov.w @(disp,pc),Rn */
	IF(0x0C074502u); MACL = r11 * r5;  /* 0C074502 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C074506u, 3);  /* 0C074504 mov.l @(disp,pc),Rn */
	IF(0x0C074506u); r0 = MACL;  /* 0C074506 sts macl,Rn */
	{ IF(0x0C07450Au); W32(r0 + r4, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C07409Cu, 4); goto L_0C07409C; }  /* 0C074508 bra */
L_0C074510: BLKS(0x0C074510u);
	r11 = 0xB0u; UPD(0x0C074512u, 1);  /* 0C074510 mov.w @(disp,pc),Rn */
	r11 += r9;  /* 0C074512 add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r11); UPD(0x0C074516u, 2);  /* 0C074514 mov.b @Rm,Rn */
	r0 = r8 & 0xFF;  /* 0C074516 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C07451Au, 2);  /* 0C074518 mov.l Rm,@Rn */
	r3 = 0xA9u; UPD(0x0C07451Cu, 1);  /* 0C07451A mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C07451C mov Rm,Rn */
	IF(0x0C07451Eu); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C074520u, 2);  /* 0C07451E mov.b @(r0,Rm),Rn */
	r12 = 0xC0AB240u; UPD(0x0C074522u, 1);  /* 0C074520 mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C074522 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C074526u, 2);  /* 0C074524 mov.l Rm,@(disp,Rn) */
	r10 = 0xC06CE70u; UPD(0x0C074528u, 1);  /* 0C074526 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C07452Au, 1);  /* 0C074528 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C07452Cu, 1);  /* 0C07452A mov.l @(disp,Rm),Rn */
	IF(0x0C07452Cu); { u32 t_ = r12; PR = 0x0C074530u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C074530u); }  /* 0C07452C jsr @Rn */
L_0C074530: BLKS(0x0C074530u);
	r1 = (u32)(s32)(s8)R8(r11); UPD(0x0C074532u, 1);  /* 0C074530 mov.b @Rm,Rn */
	r15 += 0x8u;  /* 0C074532 add #imm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C074536u, 2);  /* 0C074534 mov.l @(disp,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C074536 extu.b Rm,Rn */
	r4 = 0x2u;  /* 0C074538 mov #imm,Rn */
	IF(0x0C07453Au); { u32 t_ = r10; PR = 0x0C07453Eu; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C07453Eu); }  /* 0C07453A jsr @Rn */
L_0C07453E: BLKS(0x0C07453Eu);
	r5 = 0x0u;  /* 0C07453E mov #imm,Rn */
	W32(r9, r5); UPD(0x0C074542u, 2);  /* 0C074540 mov.l Rm,@Rn */
L_0C074542: BLKS(0x0C074542u);
	{ IF(0x0C074544u); ; /* slot nop */ UPD(0x0C07409Cu, 3); goto L_0C07409C; }  /* 0C074542 bra */
L_0C074550: BLKS(0x0C074550u);
	r1 = 0xC0A0870u; UPD(0x0C074552u, 1);  /* 0C074550 mov.l @(disp,pc),Rn */
	{ IF(0x0C074554u); ; /* slot nop */ UPD(0x0C074118u, 3); goto L_0C074118; }  /* 0C074552 bra */
L_0C074560: BLKS(0x0C074560u);
	r3 = 0x99u; UPD(0x0C074562u, 1);  /* 0C074560 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C074562 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C074566u, 2);  /* 0C074564 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C074566 add #imm,Rn */
	W8(r3, r0); UPD(0x0C07456Au, 2);  /* 0C074568 mov.b Rm,@Rn */
	r0 &= 0xFu;  /* 0C07456A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07456C tst Rm,Rn */
	if (!T) { UPD(0x0C074542u, 5); goto L_0C074542; }  /* 0C07456E bf */
L_0C074570: BLKS(0x0C074570u);
	r0 = R32(r2 + 0xCu); UPD(0x0C074572u, 1);  /* 0C074570 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C074572 mov Rm,Rn */
	r0 += 0x1u;  /* 0C074574 add #imm,Rn */
	r0 &= 0x3u;  /* 0C074576 and #imm,r0 */
	r1 = 0xC0A0380u; UPD(0x0C07457Au, 4);  /* 0C074578 mov.l @(disp,pc),Rn */
	{ W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C074118u, 3); goto L_0C074118; }  /* 0C07457A bra */
}

void f_0C0745B0(sh3_t *c)
{
	LOCALS;
L_0C0745B0: BLKS(0x0C0745B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0745B2u, 1);  /* 0C0745B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0745B4u, 1);  /* 0C0745B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0745B6u, 1);  /* 0C0745B4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0745B8u, 1);  /* 0C0745B6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0745BAu, 1);  /* 0C0745B8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0745BCu, 1);  /* 0C0745BA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0745BEu, 1);  /* 0C0745BC mov.l Rm,@-Rn */
	r2 = 0xC392D64u; UPD(0x0C0745C0u, 1);  /* 0C0745BE mov.l @(disp,pc),Rn */
	IF(0x0C0745C0u); r15 -= 4; W32(r15, PR); UPD(0x0C0745C2u, 1);  /* 0C0745C0 sts.l pr,@-Rn */
	r3 = R32(r2); UPD(0x0C0745C4u, 1);  /* 0C0745C2 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0745C4 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r4 = v_; } UPD(0x0C0745C8u, 2);  /* 0C0745C6 mov.w @Rm+,Rn */
	r14 = r15;  /* 0C0745C8 mov Rm,Rn */
	r5 = 0xC286274u; UPD(0x0C0745CCu, 2);  /* 0C0745CA mov.l @(disp,pc),Rn */
	r1 = r4 & 0xFFFF;  /* 0C0745CC extu.w Rm,Rn */
	W16(r5, r4); UPD(0x0C0745D0u, 2);  /* 0C0745CE mov.w Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C0745D2u, 1);  /* 0C0745D0 mov.w @Rm+,Rn */
	r11 = 0xC286280u; UPD(0x0C0745D4u, 1);  /* 0C0745D2 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C0745D4 and #imm,r0 */
	W16(r11, r0); UPD(0x0C0745D8u, 2);  /* 0C0745D6 mov.w Rm,@Rn */
	r0 = 0x6u;  /* 0C0745D8 mov #imm,Rn */
	T = r1 > r0;  /* 0C0745DA cmp/hi Rm,Rn */
	{ u32 c_ = !T; W32(r2, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0745E4u, 5); goto L_0C0745E4; } UPD(0x0C0745E0u, 1); goto L_0C0745E0; }  /* 0C0745DC bf/s */
L_0C0745E0: BLKS(0x0C0745E0u);
	{ IF(0x0C0745E2u); ; /* slot nop */ UPD(0x0C074700u, 3); goto L_0C074700; }  /* 0C0745E0 bra */
L_0C0745E4: BLKS(0x0C0745E4u);
	r9 = 0xC0606C0u; UPD(0x0C0745E6u, 1);  /* 0C0745E4 mov.l @(disp,pc),Rn */
	IF(0x0C0745E6u); { u32 t_ = r9; PR = 0x0C0745EAu; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0745EAu); }  /* 0C0745E6 jsr @Rn */
L_0C0745EA: BLKS(0x0C0745EAu);
	T = (r0 & r0) == 0;  /* 0C0745EA tst Rm,Rn */
	if (!T) { UPD(0x0C074610u, 4); goto L_0C074610; }  /* 0C0745EC bf */
L_0C0745EE: BLKS(0x0C0745EEu);
	r0 = 0x1u;  /* 0C0745EE mov #imm,Rn */
	r14 += 0x8u;  /* 0C0745F0 add #imm,Rn */
	r15 = r14;  /* 0C0745F2 mov Rm,Rn */
	IF(0x0C0745F4u); PR = R32(r15); r15 += 4; UPD(0x0C0745F6u, 4);  /* 0C0745F4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0745F8u, 1);  /* 0C0745F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0745FAu, 1);  /* 0C0745F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0745FCu, 1);  /* 0C0745FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0745FEu, 1);  /* 0C0745FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C074600u, 1);  /* 0C0745FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C074602u, 1);  /* 0C074600 mov.l @Rm+,Rn */
	IF(0x0C074602u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C074602 rts */
L_0C074610: BLKS(0x0C074610u);
	r12 = 0xC286509u; UPD(0x0C074612u, 1);  /* 0C074610 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C074612 mov #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r12); UPD(0x0C074616u, 2);  /* 0C074614 mov.b @Rm,Rn */
	r8 = 0xC2755BCu; UPD(0x0C074618u, 1);  /* 0C074616 mov.l @(disp,pc),Rn */
	r9 = 0xB4u; UPD(0x0C07461Au, 1);  /* 0C074618 mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r12 = v_; } UPD(0x0C07461Cu, 1);  /* 0C07461A mov.w @Rm+,Rn */
	r4 = 0xC22C874u; UPD(0x0C07461Eu, 1);  /* 0C07461C mov.l @(disp,pc),Rn */
	IF(0x0C07461Eu); MACL = r12 * r9;  /* 0C07461E mul.l Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r4); UPD(0x0C074622u, 3);  /* 0C074620 mov.w @Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r11); UPD(0x0C074624u, 1);  /* 0C074622 mov.w @Rm,Rn */
	IF(0x0C074624u); r9 = MACL;  /* 0C074624 sts macl,Rn */
	r1 = 0xC26CD40u; UPD(0x0C074628u, 2);  /* 0C074626 mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFFFF;  /* 0C074628 extu.w Rm,Rn */
	r5 = 0xC0A02D0u; UPD(0x0C07462Cu, 2);  /* 0C07462A mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C07462C add Rm,Rn */
	r0 = 0xC0000114u; UPD(0x0C074630u, 2);  /* 0C07462E mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFFFF;  /* 0C074630 extu.w Rm,Rn */
	W32(r9, r0); UPD(0x0C074634u, 2);  /* 0C074632 mov.l Rm,@Rn */
	r4 = r12;  /* 0C074634 mov Rm,Rn */
	W32(r9 + 0x4u, r6); UPD(0x0C074638u, 2);  /* 0C074636 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x8u, r2); UPD(0x0C07463Au, 1);  /* 0C074638 mov.l Rm,@(disp,Rn) */
	IF(0x0C07463Au); { u32 t_ = r5; PR = 0x0C07463Eu; W32(r9 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07463Eu); }  /* 0C07463A jsr @Rn */
L_0C07463E: BLKS(0x0C07463Eu);
	r1 = 0xC0A1530u; UPD(0x0C074640u, 1);  /* 0C07463E mov.l @(disp,pc),Rn */
	r10 = 0xB0u; UPD(0x0C074642u, 1);  /* 0C074640 mov.w @(disp,pc),Rn */
	IF(0x0C074642u); { u32 t_ = r1; PR = 0x0C074646u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C074646u); }  /* 0C074642 jsr @Rn */
L_0C074646: BLKS(0x0C074646u);
	r4 = 0x4Cu;  /* 0C074646 mov #imm,Rn */
	IF(0x0C074648u); MACL = r13 * r4;  /* 0C074648 mul.l Rm,Rn */
	r7 = 0xC26CAE0u; UPD(0x0C07464Cu, 4);  /* 0C07464A mov.l @(disp,pc),Rn */
	r10 += r9;  /* 0C07464C add Rm,Rn */
	r11 = 0xC21F5E2u; UPD(0x0C074650u, 2);  /* 0C07464E mov.l @(disp,pc),Rn */
	IF(0x0C074650u); r5 = MACL;  /* 0C074650 sts macl,Rn */
	r3 = 0xC392D5Eu; UPD(0x0C074654u, 2);  /* 0C074652 mov.l @(disp,pc),Rn */
	r5 += r7;  /* 0C074654 add Rm,Rn */
	r0 = R32(r5 + 0x8u); UPD(0x0C074658u, 2);  /* 0C074656 mov.l @(disp,Rm),Rn */
	r6 = (u32)(s32)(s16)R16(r11); UPD(0x0C07465Au, 1);  /* 0C074658 mov.w @Rm,Rn */
	r5 += 0x42u;  /* 0C07465A add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C07465Eu, 2);  /* 0C07465C mov.w @Rm,Rn */
	IF(0x0C07465Eu); r6 <<= 16;  /* 0C07465E shll16 Rn */
	W32(r14, r10); UPD(0x0C074662u, 2);  /* 0C074660 mov.l Rm,@Rn */
	r6 -= r0;  /* 0C074662 sub Rm,Rn */
	W8(r10, r13); UPD(0x0C074666u, 2);  /* 0C074664 mov.b Rm,@Rn */
	IF(0x0C074666u); r2 <<= 16;  /* 0C074666 shll16 Rn */
	W32(r9 + 0x24u, r6); UPD(0x0C07466Au, 2);  /* 0C074668 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r2); UPD(0x0C07466Cu, 1);  /* 0C07466A mov.l Rm,@(disp,Rn) */
	r13 = 0xA8u; UPD(0x0C07466Eu, 1);  /* 0C07466C mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C07466E mov #imm,Rn */
	r10 = 0xACu; UPD(0x0C074672u, 2);  /* 0C074670 mov.w @(disp,pc),Rn */
	r13 += r9;  /* 0C074672 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r5); UPD(0x0C074676u, 2);  /* 0C074674 mov.b @Rm,Rn */
	r10 += r9;  /* 0C074676 add Rm,Rn */
	r13 += 0x1u;  /* 0C074678 add #imm,Rn */
	r10 += 0x1u;  /* 0C07467A add #imm,Rn */
	W8(r10, r11); UPD(0x0C07467Eu, 4);  /* 0C07467C mov.b Rm,@Rn */
	W8(r13, r11); UPD(0x0C074680u, 1);  /* 0C07467E mov.b Rm,@Rn */
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C074682u, 1);  /* 0C074680 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C074684u, 1);  /* 0C074682 mov.w @(disp,pc),Rn */
	IF(0x0C074684u); MACL = r11 * r8;  /* 0C074684 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C074688u, 3);  /* 0C074686 mov.l @(disp,pc),Rn */
	r7 = 0xC3000114u; UPD(0x0C07468Au, 1);  /* 0C074688 mov.l @(disp,pc),Rn */
	IF(0x0C07468Au); r8 = MACL;  /* 0C07468A sts macl,Rn */
	r8 += r4;  /* 0C07468C add Rm,Rn */
	W32(r8, r7); UPD(0x0C074690u, 3);  /* 0C07468E mov.l Rm,@Rn */
	r8 += 0x7Cu;  /* 0C074690 add #imm,Rn */
	W16(r8, r12); UPD(0x0C074694u, 2);  /* 0C074692 mov.w Rm,@Rn */
	r1 = 0xC22C874u; UPD(0x0C074696u, 1);  /* 0C074694 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C074696 add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r1); UPD(0x0C07469Au, 2);  /* 0C074698 mov.w @Rm,Rn */
	r0 = r12 & 0xFFFF;  /* 0C07469A extu.w Rm,Rn */
	r6 = 0xC286274u; UPD(0x0C07469Eu, 2);  /* 0C07469C mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C0746A0u, 1);  /* 0C07469E mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0746A2u, 1);  /* 0C0746A0 mov.w @Rm,Rn */
	r0 = 0x86u; UPD(0x0C0746A4u, 1);  /* 0C0746A2 mov.w @(disp,pc),Rn */
	r3 = r5 & 0xFFFF;  /* 0C0746A4 extu.w Rm,Rn */
	r4 = 0x100u; UPD(0x0C0746A8u, 2);  /* 0C0746A6 mov.w @(disp,pc),Rn */
	r3 += 0x2u;  /* 0C0746A8 add #imm,Rn */
	r1 = 0xC0A02D0u; UPD(0x0C0746ACu, 2);  /* 0C0746AA mov.l @(disp,pc),Rn */
	IF(0x0C0746ACu); W16(r0 + r8, r4); UPD(0x0C0746AEu, 1);  /* 0C0746AC mov.w Rm,@(r0,Rn) */
	r12 = 0xC0A1530u; UPD(0x0C0746B0u, 1);  /* 0C0746AE mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0746B0 mov Rm,Rn */
	W32(r8 + 0x8u, r3); UPD(0x0C0746B4u, 2);  /* 0C0746B2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0746B4u); { u32 t_ = r1; PR = 0x0C0746B8u; W32(r8 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0746B8u); }  /* 0C0746B4 jsr @Rn */
L_0C0746B8: BLKS(0x0C0746B8u);
	IF(0x0C0746B8u); { u32 t_ = r12; PR = 0x0C0746BCu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0746BCu); }  /* 0C0746B8 jsr @Rn */
L_0C0746BC: BLKS(0x0C0746BCu);
	r7 = R32(r9 + 0x24u); UPD(0x0C0746BEu, 1);  /* 0C0746BC mov.l @(disp,Rm),Rn */
	r3 = 0x0u;  /* 0C0746BE mov #imm,Rn */
	r11 = R32(r9 + 0x28u); UPD(0x0C0746C2u, 2);  /* 0C0746C0 mov.l @(disp,Rm),Rn */
	r0 = 0xC286274u; UPD(0x0C0746C4u, 1);  /* 0C0746C2 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)R16(r0); UPD(0x0C0746C6u, 1);  /* 0C0746C4 mov.w @Rm,Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C0746C8u, 1);  /* 0C0746C6 mov.l Rm,@(disp,Rn) */
	r0 = r9 & 0xFFFF;  /* 0C0746C8 extu.w Rm,Rn */
	W32(r8 + 0x28u, r11); UPD(0x0C0746CCu, 2);  /* 0C0746CA mov.l Rm,@(disp,Rn) */
	IF(0x0C0746CCu); r0 <<= 2;  /* 0C0746CC shll2 Rn */
	r6 = 0xC186EC0u; UPD(0x0C0746D0u, 2);  /* 0C0746CE mov.l @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0746D2u, 1);  /* 0C0746D0 mov.l @Rm,Rn */
	IF(0x0C0746D2u); r5 = R32(r0 + r6); UPD(0x0C0746D4u, 1);  /* 0C0746D2 mov.l @(r0,Rm),Rn */
	r2 = (u32)(s32)(s8)R8(r1); UPD(0x0C0746D6u, 1);  /* 0C0746D4 mov.b @Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0746D8u, 1);  /* 0C0746D6 mov.w @(disp,pc),Rn */
	r4 = 0xA8u; UPD(0x0C0746DAu, 1);  /* 0C0746D8 mov.w @(disp,pc),Rn */
	IF(0x0C0746DAu); W8(r0 + r8, r2); UPD(0x0C0746DCu, 1);  /* 0C0746DA mov.b Rm,@(r0,Rn) */
	r4 += r8;  /* 0C0746DC add Rm,Rn */
	r4 += 0x1u;  /* 0C0746DE add #imm,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C0746E2u, 3);  /* 0C0746E0 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r5); UPD(0x0C0746E4u, 1);  /* 0C0746E2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r3); UPD(0x0C0746E6u, 1);  /* 0C0746E4 mov.l Rm,@(disp,Rn) */
	r11 = 0xACu; UPD(0x0C0746E8u, 1);  /* 0C0746E6 mov.w @(disp,pc),Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C0746EAu, 1);  /* 0C0746E8 mov.l @(disp,Rm),Rn */
	r8 += r11;  /* 0C0746EA add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r13); UPD(0x0C0746EEu, 2);  /* 0C0746EC mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0746EE add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C0746F2u, 2);  /* 0C0746F0 mov.b @Rm,Rn */
	W8(r7, r12); UPD(0x0C0746F4u, 1);  /* 0C0746F2 mov.b Rm,@Rn */
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0745EEu, 3); goto L_0C0745EE; }  /* 0C0746F4 bra */
L_0C074700: BLKS(0x0C074700u);
	r8 = 0xC050D70u; UPD(0x0C074702u, 1);  /* 0C074700 mov.l @(disp,pc),Rn */
	IF(0x0C074702u); { u32 t_ = r8; PR = 0x0C074706u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C074706u); }  /* 0C074702 jsr @Rn */
L_0C074706: BLKS(0x0C074706u);
	r6 = 0xC286274u; UPD(0x0C074708u, 1);  /* 0C074706 mov.l @(disp,pc),Rn */
	{ W16(r6, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C0745E4u, 3); goto L_0C0745E4; }  /* 0C074708 bra */
}

void f_0C074760(sh3_t *c)
{
	LOCALS;
	goto L_0C074760;
L_0C070770: BLKS(0x0C070770u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C070772u, 1);  /* 0C070770 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C070772 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C070776u, 2);  /* 0C070774 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C070778u, 1);  /* 0C070776 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07077Au, 1);  /* 0C070778 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07077A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07077Eu, 2);  /* 0C07077C mov.l Rm,@-Rn */
	r4 = r10;  /* 0C07077E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C070782u, 2);  /* 0C070780 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C070784u, 1);  /* 0C070782 mov.l Rm,@-Rn */
	r8 = 0xC0A0670u; UPD(0x0C070786u, 1);  /* 0C070784 mov.l @(disp,pc),Rn */
	IF(0x0C070786u); r15 -= 4; W32(r15, PR); UPD(0x0C070788u, 1);  /* 0C070786 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C070788 add #imm,Rn */
	IF(0x0C07078Au); { u32 t_ = r8; PR = 0x0C07078Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C07078Eu); }  /* 0C07078A jsr @Rn */
L_0C07078E: BLKS(0x0C07078Eu);
	T = (r0 & r0) == 0;  /* 0C07078E tst Rm,Rn */
	if (T) { UPD(0x0C0707D4u, 4); goto L_0C0707D4; }  /* 0C070790 bt */
L_0C070792: BLKS(0x0C070792u);
	r3 = 0xB4u; UPD(0x0C070794u, 1);  /* 0C070792 mov.w @(disp,pc),Rn */
	IF(0x0C070794u); MACL = r10 * r3;  /* 0C070794 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C070798u, 3);  /* 0C070796 mov.l @(disp,pc),Rn */
	IF(0x0C070798u); r8 = MACL;  /* 0C070798 sts macl,Rn */
	r9 = 0x9Cu; UPD(0x0C07079Cu, 2);  /* 0C07079A mov.w @(disp,pc),Rn */
	r8 += r2;  /* 0C07079C add Rm,Rn */
	r9 += r8;  /* 0C07079E add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0707A2u, 3);  /* 0C0707A0 mov.b @Rm,Rn */
	r2 = r0 & 0xFF;  /* 0C0707A2 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0707A4 tst Rm,Rn */
	{ u32 c_ = !T; r4 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0707AEu, 5); goto L_0C0707AE; } goto L_0C0707AA; }  /* 0C0707A6 bf/s */
L_0C0707AA: BLKS(0x0C0707AAu);
	{ r5 = 0x5Au; /* slot mov #imm,Rn */ UPD(0x0C0708B0u, 4); goto L_0C0708B0; }  /* 0C0707AA bra */
L_0C0707AE: BLKS(0x0C0707AEu);
	r4 = 0x8u;  /* 0C0707AE mov #imm,Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0707B0 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0707D4u, 5); goto L_0C0707D4; }  /* 0C0707B2 bt */
L_0C0707B4: BLKS(0x0C0707B4u);
	r11 = 0xB4u; UPD(0x0C0707B6u, 1);  /* 0C0707B4 mov.w @(disp,pc),Rn */
	IF(0x0C0707B6u); MACL = r10 * r11;  /* 0C0707B6 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0707BAu, 3);  /* 0C0707B8 mov.l @(disp,pc),Rn */
	IF(0x0C0707BAu); r11 = MACL;  /* 0C0707BA sts macl,Rn */
	r13 = 0x9Cu; UPD(0x0C0707BEu, 2);  /* 0C0707BC mov.w @(disp,pc),Rn */
	r11 += r9;  /* 0C0707BE add Rm,Rn */
	r13 += r11;  /* 0C0707C0 add Rm,Rn */
	r2 = r13;  /* 0C0707C2 mov Rm,Rn */
	r2 += 0x1u;  /* 0C0707C4 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0707C8u, 5);  /* 0C0707C6 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0707C8 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0707CA extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C0707CC cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0707F0u, 6); goto L_0C0707F0; } UPD(0x0C0707D2u, 1); goto L_0C0707D2; }  /* 0C0707CE bt/s */
L_0C0707D2: BLKS(0x0C0707D2u);
	IF(0x0C0707D2u); ;  /* 0C0707D2 nop */
	UPD(0x0C0707D4u, 1);
L_0C0707D4: BLKS(0x0C0707D4u);
	r14 += 0x8u;  /* 0C0707D4 add #imm,Rn */
	UPD(0x0C0707D6u, 1);
L_0C0707D6: BLKS(0x0C0707D6u);
	r15 = r14;  /* 0C0707D6 mov Rm,Rn */
	IF(0x0C0707D8u); PR = R32(r15); r15 += 4; UPD(0x0C0707DAu, 2);  /* 0C0707D8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0707DCu, 1);  /* 0C0707DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0707DEu, 1);  /* 0C0707DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0707E0u, 1);  /* 0C0707DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0707E2u, 1);  /* 0C0707E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0707E4u, 1);  /* 0C0707E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0707E6u, 1);  /* 0C0707E4 mov.l @Rm+,Rn */
	IF(0x0C0707E6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0707E6 rts */
L_0C0707F0: BLKS(0x0C0707F0u);
	r12 = (u32)(s32)(s8)R8(r13); UPD(0x0C0707F2u, 1);  /* 0C0707F0 mov.b @Rm,Rn */
	r0 = r11;  /* 0C0707F2 mov Rm,Rn */
	r9 = 0x86u; UPD(0x0C0707F6u, 2);  /* 0C0707F4 mov.w @(disp,pc),Rn */
	r5 = r12;  /* 0C0707F6 mov Rm,Rn */
	r1 = 0xFCu; UPD(0x0C0707FAu, 2);  /* 0C0707F8 mov.w @(disp,pc),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0707FA add #imm,Rn */
	IF(0x0C0707FCu); r12 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C0707FEu, 2);  /* 0C0707FC mov.w @(r0,Rm),Rn */
	r3 = 0x0u;  /* 0C0707FE mov #imm,Rn */
	W8(r2, r3); UPD(0x0C070802u, 2);  /* 0C070800 mov.b Rm,@Rn */
	r1 &= r5;  /* 0C070802 and Rm,Rn */
	W8(r13, r5); UPD(0x0C070806u, 2);  /* 0C070804 mov.b Rm,@Rn */
	r0 = r1;  /* 0C070806 mov Rm,Rn */
	r7 = 0xC181CE8u; UPD(0x0C07080Au, 2);  /* 0C070808 mov.l @(disp,pc),Rn */
	IF(0x0C07080Au); r6 = R32(r0 + r7); UPD(0x0C07080Cu, 1);  /* 0C07080A mov.l @(r0,Rm),Rn */
	r0 = 0x3u;  /* 0C07080C mov #imm,Rn */
	r5 &= r0;  /* 0C07080E and Rm,Rn */
	IF(0x0C070810u); r5 <<= 2;  /* 0C070810 shll2 Rn */
	r8 = 0xC181CF0u; UPD(0x0C070814u, 4);  /* 0C070812 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C070814 mov Rm,Rn */
	IF(0x0C070816u); r4 = R32(r0 + r8); UPD(0x0C070818u, 2);  /* 0C070816 mov.l @(r0,Rm),Rn */
	r3 = 0xC058060u; UPD(0x0C07081Au, 1);  /* 0C070818 mov.l @(disp,pc),Rn */
	W32(r14, r6); UPD(0x0C07081Cu, 1);  /* 0C07081A mov.l Rm,@Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C07081Eu, 1);  /* 0C07081C mov.l Rm,@(disp,Rn) */
	r5 = R32(r14); UPD(0x0C070820u, 1);  /* 0C07081E mov.l @Rm,Rn */
	IF(0x0C070820u); { u32 t_ = r3; PR = 0x0C070824u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C070824u); }  /* 0C070820 jsr @Rn */
L_0C070824: BLKS(0x0C070824u);
	r2 = 0xC058030u; UPD(0x0C070826u, 1);  /* 0C070824 mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C070826 mov Rm,Rn */
	r4 = r12;  /* 0C070828 mov Rm,Rn */
	IF(0x0C07082Au); { u32 t_ = r2; PR = 0x0C07082Eu; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07082Eu); }  /* 0C07082A jsr @Rn */
L_0C07082E: BLKS(0x0C07082Eu);
	r9 -= r0;  /* 0C07082E sub Rm,Rn */
	r1 = r9;  /* 0C070830 mov Rm,Rn */
	r1 += r1;  /* 0C070832 add Rm,Rn */
	r1 += r9;  /* 0C070834 add Rm,Rn */
	IF(0x0C070836u); T = (s32)r1 >= 0;  /* 0C070836 cmp/pz Rn */
	if (!T) { UPD(0x0C0708A0u, 8); goto L_0C0708A0; }  /* 0C070838 bf */
L_0C07083A: BLKS(0x0C07083Au);
	r9 = R32(r11 + 0x24u); UPD(0x0C07083Cu, 1);  /* 0C07083A mov.l @(disp,Rm),Rn */
	IF(0x0C07083Cu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C07083C shar Rn */
	r8 = 0xC058030u; UPD(0x0C070840u, 2);  /* 0C07083E mov.l @(disp,pc),Rn */
	IF(0x0C070840u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C070840 shar Rn */
	r0 = 0x10000u; UPD(0x0C070844u, 2);  /* 0C070842 mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C070844 add Rm,Rn */
	r9 += r0;  /* 0C070846 add Rm,Rn */
	r4 = r12;  /* 0C070848 mov Rm,Rn */
	IF(0x0C07084Au); { u32 t_ = r8; PR = 0x0C07084Eu; r5 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07084Eu); }  /* 0C07084A jsr @Rn */
L_0C07084E: BLKS(0x0C07084Eu);
	r3 = 0xC058060u; UPD(0x0C070850u, 1);  /* 0C07084E mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C070850 mov Rm,Rn */
	r8 = R32(r11 + 0x28u); UPD(0x0C070854u, 2);  /* 0C070852 mov.l @(disp,Rm),Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C070856u, 1);  /* 0C070854 mov.l @(disp,Rm),Rn */
	IF(0x0C070856u); { u32 t_ = r3; PR = 0x0C07085Au; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07085Au); }  /* 0C070856 jsr @Rn */
L_0C07085A: BLKS(0x0C07085Au);
	r1 = (u32)(s32)(s8)R8(r13); UPD(0x0C07085Cu, 1);  /* 0C07085A mov.b @Rm,Rn */
	r8 += r0;  /* 0C07085C add Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C07085E extu.b Rm,Rn */
	r7 = 0xC181CCAu; UPD(0x0C070862u, 3);  /* 0C070860 mov.l @(disp,pc),Rn */
	IF(0x0C070862u); r0 <<= 2;  /* 0C070862 shll2 Rn */
	IF(0x0C070864u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C070866u, 2);  /* 0C070864 mov.w @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C070866 add #imm,Rn */
	r5 = 0x30000u; UPD(0x0C07086Au, 2);  /* 0C070868 mov.l @(disp,pc),Rn */
	r6 += r12;  /* 0C07086A add Rm,Rn */
	r4 = 0x40000u; UPD(0x0C07086Eu, 2);  /* 0C07086C mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r6;  /* 0C07086E exts.w Rm,Rn */
	r13 = 0xC07C6B0u; UPD(0x0C070872u, 2);  /* 0C070870 mov.l @(disp,pc),Rn */
	r6 = 0x14u;  /* 0C070872 mov #imm,Rn */
	W32(r15, r5); UPD(0x0C070876u, 2);  /* 0C070874 mov.l Rm,@Rn */
	r7 = r11;  /* 0C070876 mov Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07087Au, 2);  /* 0C070878 mov.l Rm,@(disp,Rn) */
	r5 = r8;  /* 0C07087A mov Rm,Rn */
	IF(0x0C07087Cu); { u32 t_ = r13; PR = 0x0C070880u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C07C6B0, 0x0C07C6B0u, 0x0C070880u); }  /* 0C07087C jsr @Rn */
L_0C070880: BLKS(0x0C070880u);
	r2 = 0xC0580D0u; UPD(0x0C070882u, 1);  /* 0C070880 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C070882 add #imm,Rn */
	r4 = r10;  /* 0C070884 mov Rm,Rn */
	r14 += 0x8u;  /* 0C070886 add #imm,Rn */
	r15 = r14;  /* 0C070888 mov Rm,Rn */
	IF(0x0C07088Au); PR = R32(r15); r15 += 4; UPD(0x0C07088Cu, 5);  /* 0C07088A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07088Eu, 1);  /* 0C07088C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C070890u, 1);  /* 0C07088E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C070892u, 1);  /* 0C070890 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C070894u, 1);  /* 0C070892 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C070896u, 1);  /* 0C070894 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070898u, 1);  /* 0C070896 mov.l @Rm+,Rn */
	IF(0x0C070898u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0580D0u: TAIL(f_0C0580D0); default: JUMPD(tv_); } }  /* 0C070898 jmp @Rn */
L_0C0708A0: BLKS(0x0C0708A0u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C07083Au, 3); goto L_0C07083A; }  /* 0C0708A0 bra */
L_0C0708B0: BLKS(0x0C0708B0u);
	r10 = 0xC0A9E40u; UPD(0x0C0708B2u, 1);  /* 0C0708B0 mov.l @(disp,pc),Rn */
	IF(0x0C0708B2u); { u32 t_ = r10; PR = 0x0C0708B6u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0708B6u); }  /* 0C0708B2 jsr @Rn */
L_0C0708B6: BLKS(0x0C0708B6u);
	T = (r0 & r0) == 0;  /* 0C0708B6 tst Rm,Rn */
	if (T) { UPD(0x0C0708D4u, 4); goto L_0C0708D4; }  /* 0C0708B8 bt */
L_0C0708BA: BLKS(0x0C0708BAu);
	r0 = r8;  /* 0C0708BA mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C0708BEu, 2);  /* 0C0708BC mov.w @(disp,pc),Rn */
	IF(0x0C0708BEu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0708C0u, 1);  /* 0C0708BE mov.b @(r0,Rm),Rn */
	r6 = r5 & 0xFF;  /* 0C0708C0 extu.b Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0708C4u, 2);  /* 0C0708C2 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0708C6u, 1);  /* 0C0708C4 mov.l @(disp,Rm),Rn */
	r8 = 0xC0A9BB0u; UPD(0x0C0708C8u, 1);  /* 0C0708C6 mov.l @(disp,pc),Rn */
	IF(0x0C0708C8u); { u32 t_ = r8; PR = 0x0C0708CCu; IF(0x0C0708CAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0708CCu); }  /* 0C0708C8 jsr @Rn */
L_0C0708CC: BLKS(0x0C0708CCu);
	T = (r0 & r0) == 0;  /* 0C0708CC tst Rm,Rn */
	if (T) { UPD(0x0C0708D4u, 4); goto L_0C0708D4; }  /* 0C0708CE bt */
L_0C0708D0: BLKS(0x0C0708D0u);
	r7 = 0x8u;  /* 0C0708D0 mov #imm,Rn */
	W8(r9, r7); UPD(0x0C0708D4u, 2);  /* 0C0708D2 mov.b Rm,@Rn */
L_0C0708D4: BLKS(0x0C0708D4u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0707D6u, 3); goto L_0C0707D6; }  /* 0C0708D4 bra */
L_0C070D20: BLKS(0x0C070D20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C070D22u, 1);  /* 0C070D20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C070D24u, 1);  /* 0C070D22 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C070D26u, 1);  /* 0C070D24 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C070D28u, 1);  /* 0C070D26 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C070D28 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C070D2Cu, 2);  /* 0C070D2A mov.l Rm,@-Rn */
	r9 = 0xB4u; UPD(0x0C070D2Eu, 1);  /* 0C070D2C mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C070D2E exts.w Rm,Rn */
	IF(0x0C070D30u); MACL = r12 * r9;  /* 0C070D30 mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C070D34u, 4);  /* 0C070D32 mov.l Rm,@-Rn */
	IF(0x0C070D34u); r8 = MACL;  /* 0C070D34 sts macl,Rn */
	IF(0x0C070D36u); MACL = r10 * r9;  /* 0C070D36 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C070D3Au, 4);  /* 0C070D38 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C070D3Cu, 1);  /* 0C070D3A mov.l @(disp,pc),Rn */
	IF(0x0C070D3Cu); r4 = MACL;  /* 0C070D3C sts macl,Rn */
	IF(0x0C070D3Eu); r15 -= 4; W32(r15, PR); UPD(0x0C070D40u, 2);  /* 0C070D3E sts.l pr,@-Rn */
	r8 += r0;  /* 0C070D40 add Rm,Rn */
	r4 += r0;  /* 0C070D42 add Rm,Rn */
	r6 = R32(r8); UPD(0x0C070D46u, 3);  /* 0C070D44 mov.l @Rm,Rn */
	r9 = r8;  /* 0C070D46 mov Rm,Rn */
	r7 = R32(r4); UPD(0x0C070D4Au, 2);  /* 0C070D48 mov.l @Rm,Rn */
	r14 = r15;  /* 0C070D4A mov Rm,Rn */
	r0 = 0x100u; UPD(0x0C070D4Eu, 2);  /* 0C070D4C mov.w @(disp,pc),Rn */
	r5 = 0xA8u; UPD(0x0C070D50u, 1);  /* 0C070D4E mov.w @(disp,pc),Rn */
	r7 &= r0;  /* 0C070D50 and Rm,Rn */
	r11 = 0xFFFFFEFFu; UPD(0x0C070D54u, 2);  /* 0C070D52 mov.w @(disp,pc),Rn */
	r9 += r5;  /* 0C070D54 add Rm,Rn */
	r6 &= r11;  /* 0C070D56 and Rm,Rn */
	r6 |= r7;  /* 0C070D58 or Rm,Rn */
	r5 += r4;  /* 0C070D5A add Rm,Rn */
	W32(r8, r6); UPD(0x0C070D5Eu, 5);  /* 0C070D5C mov.l Rm,@Rn */
	r5 += 0x1u;  /* 0C070D5E add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C070D62u, 2);  /* 0C070D60 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C070D62 add #imm,Rn */
	r2 = R32(r4); UPD(0x0C070D66u, 2);  /* 0C070D64 mov.l @Rm,Rn */
	T = (r2 & r0) == 0;  /* 0C070D66 tst Rm,Rn */
	{ u32 c_ = !T; W8(r9, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C070E10u, 4); goto L_0C070E10; } UPD(0x0C070D6Cu, 1); goto L_0C070D6C; }  /* 0C070D68 bf/s */
L_0C070D6C: BLKS(0x0C070D6Cu);
	r10 = 0xC0A9E40u; UPD(0x0C070D6Eu, 1);  /* 0C070D6C mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C070D6E mov Rm,Rn */
	r5 = 0x5Au;  /* 0C070D70 mov #imm,Rn */
	IF(0x0C070D72u); { u32 t_ = r10; PR = 0x0C070D76u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C070D76u); }  /* 0C070D72 jsr @Rn */
L_0C070D76: BLKS(0x0C070D76u);
	T = (r0 & r0) == 0;  /* 0C070D76 tst Rm,Rn */
	if (!T) { UPD(0x0C070D90u, 4); goto L_0C070D90; }  /* 0C070D78 bf */
L_0C070D7A: BLKS(0x0C070D7Au);
	r15 = r14;  /* 0C070D7A mov Rm,Rn */
	IF(0x0C070D7Cu); PR = R32(r15); r15 += 4; UPD(0x0C070D7Eu, 2);  /* 0C070D7C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C070D80u, 1);  /* 0C070D7E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C070D82u, 1);  /* 0C070D80 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C070D84u, 1);  /* 0C070D82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C070D86u, 1);  /* 0C070D84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C070D88u, 1);  /* 0C070D86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070D8Au, 1);  /* 0C070D88 mov.l @Rm+,Rn */
	IF(0x0C070D8Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C070D8A rts */
L_0C070D90: BLKS(0x0C070D90u);
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C070D92u, 1);  /* 0C070D90 mov.b @Rm,Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C070D94u, 1);  /* 0C070D92 mov.l @(disp,pc),Rn */
	r6 = r1 & 0xFF;  /* 0C070D94 extu.b Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C070D98u, 2);  /* 0C070D96 mov.l @(disp,Rm),Rn */
	IF(0x0C070D98u); { u32 t_ = r9; PR = 0x0C070D9Cu; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C070D9Cu); }  /* 0C070D98 jsr @Rn */
L_0C070D9C: BLKS(0x0C070D9Cu);
	T = (r0 & r0) == 0;  /* 0C070D9C tst Rm,Rn */
	if (T) { UPD(0x0C070D7Au, 4); goto L_0C070D7A; }  /* 0C070D9E bt */
L_0C070DA0: BLKS(0x0C070DA0u);
	r11 = 0x0u;  /* 0C070DA0 mov #imm,Rn */
	r13 = 0x86u; UPD(0x0C070DA4u, 2);  /* 0C070DA2 mov.w @(disp,pc),Rn */
	r10 = r8;  /* 0C070DA4 mov Rm,Rn */
	r13 += r8;  /* 0C070DA6 add Rm,Rn */
	UPD(0x0C070DA8u, 2);
L_0C070DA8: BLKS(0x0C070DA8u);
	r0 = r11;  /* 0C070DA8 mov Rm,Rn */
	r4 = 0xC181D04u; UPD(0x0C070DACu, 2);  /* 0C070DAA mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C070DAC add Rm,Rn */
	IF(0x0C070DAEu); r2 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C070DB0u, 2);  /* 0C070DAE mov.w @(r0,Rm),Rn */
	r7 = (u32)(s32)(s16)R16(r13); UPD(0x0C070DB2u, 1);  /* 0C070DB0 mov.w @Rm,Rn */
	r9 = 0xC058060u; UPD(0x0C070DB4u, 1);  /* 0C070DB2 mov.l @(disp,pc),Rn */
	r7 += r2;  /* 0C070DB4 add Rm,Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C070DB6 exts.w Rm,Rn */
	r5 = 0x80000u; UPD(0x0C070DBAu, 3);  /* 0C070DB8 mov.l @(disp,pc),Rn */
	IF(0x0C070DBAu); { u32 t_ = r9; PR = 0x0C070DBEu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C070DBEu); }  /* 0C070DBA jsr @Rn */
L_0C070DBE: BLKS(0x0C070DBEu);
	r9 = R32(r10 + 0x24u); UPD(0x0C070DC0u, 1);  /* 0C070DBE mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C070DC0 mov Rm,Rn */
	r9 += r0;  /* 0C070DC2 add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C070DC6u, 3);  /* 0C070DC4 mov.l @(disp,pc),Rn */
	r6 = 0x40000u; UPD(0x0C070DC8u, 1);  /* 0C070DC6 mov.l @(disp,pc),Rn */
	r5 = 0x80000u; UPD(0x0C070DCAu, 1);  /* 0C070DC8 mov.l @(disp,pc),Rn */
	IF(0x0C070DCAu); { u32 t_ = r0; PR = 0x0C070DCEu; r9 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C070DCEu); }  /* 0C070DCA jsr @Rn */
L_0C070DCE: BLKS(0x0C070DCEu);
	r6 = R32(r10 + 0x28u); UPD(0x0C070DD0u, 1);  /* 0C070DCE mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C070DD0 add #imm,Rn */
	r5 = 0x28000u; UPD(0x0C070DD4u, 2);  /* 0C070DD2 mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C070DD4 mov Rm,Rn */
	W32(r15, r5); UPD(0x0C070DD8u, 2);  /* 0C070DD6 mov.l Rm,@Rn */
	r6 += r0;  /* 0C070DD8 add Rm,Rn */
	r5 = r9;  /* 0C070DDA mov Rm,Rn */
	r9 = 0xC0A8510u; UPD(0x0C070DDEu, 3);  /* 0C070DDC mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C070DDE mov #imm,Rn */
	IF(0x0C070DE0u); { u32 t_ = r9; PR = 0x0C070DE4u; r8 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A8510, 0x0C0A8510u, 0x0C070DE4u); }  /* 0C070DE0 jsr @Rn */
L_0C070DE4: BLKS(0x0C070DE4u);
	r3 = r11;  /* 0C070DE4 mov Rm,Rn */
	r3 += 0x1u;  /* 0C070DE6 add #imm,Rn */
	r11 = (u32)(s32)(s16)r3;  /* 0C070DE8 exts.w Rm,Rn */
	T = (s32)r11 > (s32)r8;  /* 0C070DEA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C070DA8u, 7); goto L_0C070DA8; } goto L_0C070DF0; }  /* 0C070DEC bf/s */
L_0C070DF0: BLKS(0x0C070DF0u);
	r0 = 0xC0580D0u; UPD(0x0C070DF2u, 2);  /* 0C070DF0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C070DF2 mov Rm,Rn */
	r15 = r14;  /* 0C070DF4 mov Rm,Rn */
	IF(0x0C070DF6u); PR = R32(r15); r15 += 4; UPD(0x0C070DF8u, 3);  /* 0C070DF6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C070DFAu, 1);  /* 0C070DF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C070DFCu, 1);  /* 0C070DFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C070DFEu, 1);  /* 0C070DFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C070E00u, 1);  /* 0C070DFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C070E02u, 1);  /* 0C070E00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070E04u, 1);  /* 0C070E02 mov.l @Rm+,Rn */
	IF(0x0C070E04u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0580D0u: TAIL(f_0C0580D0); default: JUMPD(tv_); } }  /* 0C070E04 jmp @Rn */
L_0C070E10: BLKS(0x0C070E10u);
	r0 = R32(r8 + 0xCu); UPD(0x0C070E12u, 1);  /* 0C070E10 mov.l @(disp,Rm),Rn */
	r4 = 0xC181D10u; UPD(0x0C070E14u, 1);  /* 0C070E12 mov.l @(disp,pc),Rn */
	IF(0x0C070E14u); r0 <<= 2;  /* 0C070E14 shll2 Rn */
	r13 = 0xC0A0380u; UPD(0x0C070E18u, 2);  /* 0C070E16 mov.l @(disp,pc),Rn */
	IF(0x0C070E18u); r2 = R32(r0 + r4); UPD(0x0C070E1Au, 1);  /* 0C070E18 mov.l @(r0,Rm),Rn */
	r4 = r12;  /* 0C070E1A mov Rm,Rn */
	IF(0x0C070E1Cu); { u32 t_ = r13; PR = 0x0C070E20u; W32(r8 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C070E20u); }  /* 0C070E1C jsr @Rn */
L_0C070E20: BLKS(0x0C070E20u);
	{ IF(0x0C070E22u); ; /* slot nop */ UPD(0x0C070D6Cu, 3); goto L_0C070D6C; }  /* 0C070E20 bra */
L_0C074760: BLKS(0x0C074760u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C074762u, 1);  /* 0C074760 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C074764u, 1);  /* 0C074762 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C074766u, 1);  /* 0C074764 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C074768u, 1);  /* 0C074766 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C074768 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07476Cu, 2);  /* 0C07476A mov.l Rm,@-Rn */
	IF(0x0C07476Cu); MACL = r10 * r0;  /* 0C07476C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C074770u, 3);  /* 0C07476E mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C074772u, 1);  /* 0C074770 mov.l @(disp,pc),Rn */
	IF(0x0C074772u); r2 = MACL;  /* 0C074772 sts macl,Rn */
	IF(0x0C074774u); r15 -= 4; W32(r15, PR); UPD(0x0C074776u, 2);  /* 0C074774 sts.l pr,@-Rn */
	r2 += r0;  /* 0C074776 add Rm,Rn */
	r0 = R32(r2 + 0x8u); UPD(0x0C07477Au, 2);  /* 0C074778 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C07477A tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C074784u, 4); goto L_0C074784; } goto L_0C074780; }  /* 0C07477C bf/s */
L_0C074780: BLKS(0x0C074780u);
	{ IF(0x0C074782u); ; /* slot nop */ UPD(0x0C074B00u, 4); goto L_0C074B00; }  /* 0C074780 bra */
L_0C074784: BLKS(0x0C074784u);
	T = r0 == 0x1u;  /* 0C074784 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C07483Cu, 4); goto L_0C07483C; }  /* 0C074786 bt */
L_0C074788: BLKS(0x0C074788u);
	r8 = 0xC0A03F0u; UPD(0x0C07478Au, 1);  /* 0C074788 mov.l @(disp,pc),Rn */
	IF(0x0C07478Au); { u32 t_ = r8; PR = 0x0C07478Eu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C07478Eu); }  /* 0C07478A jsr @Rn */
L_0C07478E: BLKS(0x0C07478Eu);
	IF(0x0C07478Eu); T = (s32)r0 >= 0;  /* 0C07478E cmp/pz Rn */
	{ u32 c_ = T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C074798u, 4); goto L_0C074798; } goto L_0C074794; }  /* 0C074790 bt/s */
L_0C074794: BLKS(0x0C074794u);
	{ IF(0x0C074796u); ; /* slot nop */ UPD(0x0C074910u, 4); goto L_0C074910; }  /* 0C074794 bra */
L_0C074798: BLKS(0x0C074798u);
	r4 = 0xB4u; UPD(0x0C07479Au, 1);  /* 0C074798 mov.w @(disp,pc),Rn */
	IF(0x0C07479Au); MACL = r10 * r4;  /* 0C07479A mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C07479Eu, 3);  /* 0C07479C mov.l @(disp,pc),Rn */
	IF(0x0C07479Eu); r11 = MACL;  /* 0C07479E sts macl,Rn */
	IF(0x0C0747A0u); MACL = r8 * r4;  /* 0C0747A0 mul.l Rm,Rn */
	r11 += r2;  /* 0C0747A2 add Rm,Rn */
	r7 = R32(r11); UPD(0x0C0747A6u, 5);  /* 0C0747A4 mov.l @Rm,Rn */
	IF(0x0C0747A6u); r3 = MACL;  /* 0C0747A6 sts macl,Rn */
	r3 += r2;  /* 0C0747A8 add Rm,Rn */
	r0 = 0xFFFFFEFFu; UPD(0x0C0747ACu, 3);  /* 0C0747AA mov.w @(disp,pc),Rn */
	r4 += 0x4Cu;  /* 0C0747AC add #imm,Rn */
	r9 = R32(r3); UPD(0x0C0747B0u, 2);  /* 0C0747AE mov.l @Rm,Rn */
	r7 &= r0;  /* 0C0747B0 and Rm,Rn */
	r9 &= r4;  /* 0C0747B2 and Rm,Rn */
	r5 = R32(r3 + 0x24u); UPD(0x0C0747B6u, 3);  /* 0C0747B4 mov.l @(disp,Rm),Rn */
	r7 |= r9;  /* 0C0747B6 or Rm,Rn */
	r4 = R32(r3 + 0x28u); UPD(0x0C0747BAu, 2);  /* 0C0747B8 mov.l @(disp,Rm),Rn */
	r9 = 0x6u;  /* 0C0747BA mov #imm,Rn */
	r6 = R32(r11 + 0x2Cu); UPD(0x0C0747BEu, 2);  /* 0C0747BC mov.l @(disp,Rm),Rn */
	r0 = R32(r11 + 0x30u); UPD(0x0C0747C0u, 1);  /* 0C0747BE mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C0747C0 add Rm,Rn */
	r2 = R32(r11 + 0x8u); UPD(0x0C0747C4u, 2);  /* 0C0747C2 mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C0747C4 add Rm,Rn */
	r2 += 0xFFFFFFFEu;  /* 0C0747C6 add #imm,Rn */
	W32(r11, r7); UPD(0x0C0747CAu, 3);  /* 0C0747C8 mov.l Rm,@Rn */
	T = r2 > r9;  /* 0C0747CA cmp/hi Rm,Rn */
	W32(r11 + 0x24u, r5); UPD(0x0C0747CEu, 2);  /* 0C0747CC mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r11 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07483Cu, 3); goto L_0C07483C; } UPD(0x0C0747D2u, 1); goto L_0C0747D2; }  /* 0C0747CE bt/s */
L_0C0747D2: BLKS(0x0C0747D2u);
	r0 = 0xC0747E8u;  /* 0C0747D2 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0747D4 add Rm,Rn */
	IF(0x0C0747D6u); r11 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0747D8u, 3);  /* 0C0747D6 mov.w @(r0,Rm),Rn */
	IF(0x0C0747D8u); { u32 tv_ = (r11 + 0x0C0747DCu); u32 t_ = PHYS(tv_); IF(0x0C0747DAu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C074800u: goto L_0C074800; case 0x0C074820u: goto L_0C074820; case 0x0C074830u: goto L_0C074830; case 0x0C0748D0u: goto L_0C0748D0; case 0x0C0748E0u: goto L_0C0748E0; case 0x0C0748F0u: goto L_0C0748F0; case 0x0C074900u: goto L_0C074900; default: JUMPD(tv_); } }  /* 0C0747D8 braf Rn */
L_0C074800: BLKS(0x0C074800u);
	r1 = 0xC070770u; UPD(0x0C074802u, 1);  /* 0C074800 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C074802 mov Rm,Rn */
	r5 = r8;  /* 0C074804 mov Rm,Rn */
	UPD(0x0C074806u, 2);
L_0C074806: BLKS(0x0C074806u);
	r15 = r14;  /* 0C074806 mov Rm,Rn */
	IF(0x0C074808u); PR = R32(r15); r15 += 4; UPD(0x0C07480Au, 2);  /* 0C074808 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07480Cu, 1);  /* 0C07480A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07480Eu, 1);  /* 0C07480C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C074810u, 1);  /* 0C07480E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C074812u, 1);  /* 0C074810 mov.l @Rm+,Rn */
	IF(0x0C074812u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C070770u: goto L_0C070770; case 0x0C070D20u: goto L_0C070D20; default: JUMPD(tv_); } }  /* 0C074812 jmp @Rn */
L_0C074820: BLKS(0x0C074820u);
	r1 = 0xC070660u; UPD(0x0C074822u, 1);  /* 0C074820 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C074822 mov Rm,Rn */
	{ r5 = r8; /* slot mov Rm,Rn */ UPD(0x0C074806u, 4); goto L_0C074806; }  /* 0C074824 bra */
L_0C074830: BLKS(0x0C074830u);
	r5 = r8;  /* 0C074830 mov Rm,Rn */
	r8 = 0xC0A0670u; UPD(0x0C074834u, 2);  /* 0C074832 mov.l @(disp,pc),Rn */
	IF(0x0C074834u); { u32 t_ = r8; PR = 0x0C074838u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C074838u); }  /* 0C074834 jsr @Rn */
L_0C074838: BLKS(0x0C074838u);
	T = (r0 & r0) == 0;  /* 0C074838 tst Rm,Rn */
	if (!T) { UPD(0x0C074850u, 4); goto L_0C074850; }  /* 0C07483A bf */
L_0C07483C: BLKS(0x0C07483Cu);
	r15 = r14;  /* 0C07483C mov Rm,Rn */
	IF(0x0C07483Eu); PR = R32(r15); r15 += 4; UPD(0x0C074840u, 2);  /* 0C07483E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C074842u, 1);  /* 0C074840 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C074844u, 1);  /* 0C074842 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C074846u, 1);  /* 0C074844 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C074848u, 1);  /* 0C074846 mov.l @Rm+,Rn */
	IF(0x0C074848u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C074848 rts */
L_0C074850: BLKS(0x0C074850u);
	r9 = 0xC0A9E40u; UPD(0x0C074852u, 1);  /* 0C074850 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C074852 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C074854 mov #imm,Rn */
	IF(0x0C074856u); { u32 t_ = r9; PR = 0x0C07485Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07485Au); }  /* 0C074856 jsr @Rn */
L_0C07485A: BLKS(0x0C07485Au);
	T = (r0 & r0) == 0;  /* 0C07485A tst Rm,Rn */
	if (T) { UPD(0x0C07483Cu, 4); goto L_0C07483C; }  /* 0C07485C bt */
L_0C07485E: BLKS(0x0C07485Eu);
	r7 = 0xB4u; UPD(0x0C074860u, 1);  /* 0C07485E mov.w @(disp,pc),Rn */
	IF(0x0C074860u); MACL = r10 * r7;  /* 0C074860 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C074864u, 3);  /* 0C074862 mov.l @(disp,pc),Rn */
	IF(0x0C074864u); r11 = MACL;  /* 0C074864 sts macl,Rn */
	r11 += r6;  /* 0C074866 add Rm,Rn */
	r5 = 0xA9u; UPD(0x0C07486Au, 3);  /* 0C074868 mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C07486A mov Rm,Rn */
	r8 = 0xC0A9BB0u; UPD(0x0C07486Eu, 2);  /* 0C07486C mov.l @(disp,pc),Rn */
	IF(0x0C07486Eu); r3 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C074870u, 1);  /* 0C07486E mov.b @(r0,Rm),Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C074872u, 1);  /* 0C074870 mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C074872 extu.b Rm,Rn */
	IF(0x0C074874u); { u32 t_ = r8; PR = 0x0C074878u; r5 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C074878u); }  /* 0C074874 jsr @Rn */
L_0C074878: BLKS(0x0C074878u);
	T = (r0 & r0) == 0;  /* 0C074878 tst Rm,Rn */
	if (T) { UPD(0x0C07483Cu, 4); goto L_0C07483C; }  /* 0C07487A bt */
L_0C07487C: BLKS(0x0C07487Cu);
	r0 = r11;  /* 0C07487C mov Rm,Rn */
	r3 = 0x86u; UPD(0x0C074880u, 2);  /* 0C07487E mov.w @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C074882u, 1);  /* 0C074880 mov.l @(disp,pc),Rn */
	IF(0x0C074882u); r9 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C074884u, 1);  /* 0C074882 mov.w @(r0,Rm),Rn */
	r5 = 0x138000u; UPD(0x0C074886u, 1);  /* 0C074884 mov.l @(disp,pc),Rn */
	IF(0x0C074886u); { u32 t_ = r8; PR = 0x0C07488Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07488Au); }  /* 0C074886 jsr @Rn */
L_0C07488A: BLKS(0x0C07488Au);
	r8 = R32(r11 + 0x24u); UPD(0x0C07488Cu, 1);  /* 0C07488A mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C07488C mov Rm,Rn */
	r8 += r0;  /* 0C07488E add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C074892u, 3);  /* 0C074890 mov.l @(disp,pc),Rn */
	r2 = 0x10000u; UPD(0x0C074894u, 1);  /* 0C074892 mov.l @(disp,pc),Rn */
	r5 = 0x1A0000u; UPD(0x0C074896u, 1);  /* 0C074894 mov.l @(disp,pc),Rn */
	IF(0x0C074896u); { u32 t_ = r0; PR = 0x0C07489Au; r8 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07489Au); }  /* 0C074896 jsr @Rn */
L_0C07489A: BLKS(0x0C07489Au);
	r6 = R32(r11 + 0x28u); UPD(0x0C07489Cu, 1);  /* 0C07489A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07489C add #imm,Rn */
	r4 = 0x40000u; UPD(0x0C0748A0u, 2);  /* 0C07489E mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0748A0 add Rm,Rn */
	r11 = 0xC0A8E70u; UPD(0x0C0748A4u, 2);  /* 0C0748A2 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C0748A4 mov Rm,Rn */
	W32(r15, r4); UPD(0x0C0748A8u, 2);  /* 0C0748A6 mov.l Rm,@Rn */
	r7 = r9;  /* 0C0748A8 mov Rm,Rn */
	IF(0x0C0748AAu); { u32 t_ = r11; PR = 0x0C0748AEu; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A8E70, 0x0C0A8E70u, 0x0C0748AEu); }  /* 0C0748AA jsr @Rn */
L_0C0748AE: BLKS(0x0C0748AEu);
	r1 = 0xC0580D0u; UPD(0x0C0748B0u, 1);  /* 0C0748AE mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C0748B0 add #imm,Rn */
	r4 = r10;  /* 0C0748B2 mov Rm,Rn */
	UPD(0x0C0748B4u, 2);
L_0C0748B4: BLKS(0x0C0748B4u);
	r15 = r14;  /* 0C0748B4 mov Rm,Rn */
	IF(0x0C0748B6u); PR = R32(r15); r15 += 4; UPD(0x0C0748B8u, 2);  /* 0C0748B6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0748BAu, 1);  /* 0C0748B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0748BCu, 1);  /* 0C0748BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0748BEu, 1);  /* 0C0748BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0748C0u, 1);  /* 0C0748BE mov.l @Rm+,Rn */
	IF(0x0C0748C0u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A03B0u: TAIL(f_0C0A03B0); case 0x0C0A0940u: TAIL(f_0C0A0940); default: JUMPD(tv_); } }  /* 0C0748C0 jmp @Rn */
L_0C0748D0: BLKS(0x0C0748D0u);
	r1 = 0xC070920u; UPD(0x0C0748D2u, 1);  /* 0C0748D0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0748D2 mov Rm,Rn */
	{ r5 = r8; /* slot mov Rm,Rn */ UPD(0x0C074806u, 4); goto L_0C074806; }  /* 0C0748D4 bra */
L_0C0748E0: BLKS(0x0C0748E0u);
	r1 = 0xC070A60u; UPD(0x0C0748E2u, 1);  /* 0C0748E0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0748E2 mov Rm,Rn */
	{ r5 = r8; /* slot mov Rm,Rn */ UPD(0x0C074806u, 4); goto L_0C074806; }  /* 0C0748E4 bra */
L_0C0748F0: BLKS(0x0C0748F0u);
	r1 = 0xC070B80u; UPD(0x0C0748F2u, 1);  /* 0C0748F0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0748F2 mov Rm,Rn */
	{ r5 = r8; /* slot mov Rm,Rn */ UPD(0x0C074806u, 4); goto L_0C074806; }  /* 0C0748F4 bra */
L_0C074900: BLKS(0x0C074900u);
	r1 = 0xC070D20u; UPD(0x0C074902u, 1);  /* 0C074900 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C074902 mov Rm,Rn */
	{ r5 = r8; /* slot mov Rm,Rn */ UPD(0x0C074806u, 4); goto L_0C074806; }  /* 0C074904 bra */
L_0C074910: BLKS(0x0C074910u);
	r4 = 0xB4u; UPD(0x0C074912u, 1);  /* 0C074910 mov.w @(disp,pc),Rn */
	IF(0x0C074912u); MACL = r10 * r4;  /* 0C074912 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C074916u, 3);  /* 0C074914 mov.l @(disp,pc),Rn */
	IF(0x0C074916u); r9 = MACL;  /* 0C074916 sts macl,Rn */
	r9 += r2;  /* 0C074918 add Rm,Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C07491Cu, 3);  /* 0C07491A mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C07491C tst Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C074926u, 4); goto L_0C074926; } goto L_0C074922; }  /* 0C07491E bf/s */
L_0C074922: BLKS(0x0C074922u);
	{ r4 = r10; /* slot mov Rm,Rn */ UPD(0x0C074AF0u, 4); goto L_0C074AF0; }  /* 0C074922 bra */
L_0C074926: BLKS(0x0C074926u);
	if (!T) { UPD(0x0C07492Eu, 3); goto L_0C07492E; }  /* 0C074926 bf */
L_0C074928: BLKS(0x0C074928u);
	r15 += 0xFFFFFFF8u;  /* 0C074928 add #imm,Rn */
	{ r5 = 0xCu; /* slot mov #imm,Rn */ UPD(0x0C074AB0u, 4); goto L_0C074AB0; }  /* 0C07492A bra */
L_0C07492E: BLKS(0x0C07492Eu);
	r9 = 0xC050D70u; UPD(0x0C074930u, 1);  /* 0C07492E mov.l @(disp,pc),Rn */
	IF(0x0C074930u); { u32 t_ = r9; PR = 0x0C074934u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C074934u); }  /* 0C074930 jsr @Rn */
L_0C074934: BLKS(0x0C074934u);
	T = r0 == 0x2u;  /* 0C074934 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C07493Eu, 4); goto L_0C07493E; }  /* 0C074936 bf */
L_0C074938: BLKS(0x0C074938u);
	r15 += 0xFFFFFFF8u;  /* 0C074938 add #imm,Rn */
	{ r5 = 0xCu; /* slot mov #imm,Rn */ UPD(0x0C074A80u, 4); goto L_0C074A80; }  /* 0C07493A bra */
L_0C07493E: BLKS(0x0C07493Eu);
	r4 = 0x2u;  /* 0C07493E mov #imm,Rn */
	T = (s32)r0 > (s32)r4;  /* 0C074940 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0749E0u, 5); goto L_0C0749E0; } goto L_0C074946; }  /* 0C074942 bt/s */
L_0C074946: BLKS(0x0C074946u);
	T = r0 == 0x1u;  /* 0C074946 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0749B0u, 5); goto L_0C0749B0; }  /* 0C074948 bt */
L_0C07494A: BLKS(0x0C07494Au);
	r0 = 0xB4u; UPD(0x0C07494Cu, 1);  /* 0C07494A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07494C add #imm,Rn */
	IF(0x0C07494Eu); MACL = r10 * r0;  /* 0C07494E mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C074952u, 4);  /* 0C074950 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C074954u, 1);  /* 0C074952 mov.w @(disp,pc),Rn */
	IF(0x0C074954u); r11 = MACL;  /* 0C074954 sts macl,Rn */
	r11 += r3;  /* 0C074956 add Rm,Rn */
	IF(0x0C074958u); r7 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C07495Au, 3);  /* 0C074958 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C07495A extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C07495Eu, 2);  /* 0C07495C mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07495E add #imm,Rn */
	IF(0x0C074960u); r8 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C074962u, 2);  /* 0C074960 mov.b @(r0,Rm),Rn */
	r5 = r8 & 0xFF;  /* 0C074962 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C074966u, 2);  /* 0C074964 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C074968u, 1);  /* 0C074966 mov.l @(disp,pc),Rn */
	r5 = 0xCu;  /* 0C074968 mov #imm,Rn */
	r4 = R32(r11); UPD(0x0C07496Cu, 2);  /* 0C07496A mov.l @Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C07496Eu, 1);  /* 0C07496C mov.l @(disp,Rm),Rn */
	r7 = R32(r11 + 0x28u); UPD(0x0C074970u, 1);  /* 0C07496E mov.l @(disp,Rm),Rn */
L_0C074970: BLKS(0x0C074970u);
	r11 = 0xC0A03F0u; UPD(0x0C074972u, 1);  /* 0C074970 mov.l @(disp,pc),Rn */
	IF(0x0C074972u); { u32 t_ = r0; PR = 0x0C074976u; IF(0x0C074974u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C074976u); }  /* 0C074972 jsr @Rn */
L_0C074976: BLKS(0x0C074976u);
	r15 += 0x8u;  /* 0C074976 add #imm,Rn */
	IF(0x0C074978u); { u32 t_ = r11; PR = 0x0C07497Cu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C07497Cu); }  /* 0C074978 jsr @Rn */
L_0C07497C: BLKS(0x0C07497Cu);
	IF(0x0C07497Cu); T = (s32)r0 >= 0;  /* 0C07497C cmp/pz Rn */
	if (!T) { UPD(0x0C0749A0u, 4); goto L_0C0749A0; }  /* 0C07497E bf */
L_0C074980: BLKS(0x0C074980u);
	r5 = 0x0u;  /* 0C074980 mov #imm,Rn */
	r6 = 0xB4u; UPD(0x0C074984u, 2);  /* 0C074982 mov.w @(disp,pc),Rn */
	IF(0x0C074984u); MACL = r0 * r6;  /* 0C074984 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C074988u, 3);  /* 0C074986 mov.l @(disp,pc),Rn */
	IF(0x0C074988u); r7 = MACL;  /* 0C074988 sts macl,Rn */
	r7 += r8;  /* 0C07498A add Rm,Rn */
	r3 = R32(r7); UPD(0x0C07498Eu, 3);  /* 0C07498C mov.l @Rm,Rn */
	IF(0x0C07498Eu); MACL = r10 * r6;  /* 0C07498E mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C074992u, 3);  /* 0C074990 mov.l @(disp,pc),Rn */
	r3 |= r1;  /* 0C074992 or Rm,Rn */
	W32(r7, r3); UPD(0x0C074996u, 2);  /* 0C074994 mov.l Rm,@Rn */
	IF(0x0C074996u); r0 = MACL;  /* 0C074996 sts macl,Rn */
	{ IF(0x0C07499Au); W32(r0 + r8, r5); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C07483Cu, 4); goto L_0C07483C; }  /* 0C074998 bra */
L_0C0749A0: BLKS(0x0C0749A0u);
	r0 = 0xB4u; UPD(0x0C0749A2u, 1);  /* 0C0749A0 mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0749A2 mov #imm,Rn */
	IF(0x0C0749A4u); MACL = r10 * r0;  /* 0C0749A4 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C0749A8u, 4);  /* 0C0749A6 mov.l @(disp,pc),Rn */
	IF(0x0C0749A8u); r0 = MACL;  /* 0C0749A8 sts macl,Rn */
	{ IF(0x0C0749ACu); W32(r0 + r10, r4); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C07483Cu, 4); goto L_0C07483C; }  /* 0C0749AA bra */
L_0C0749B0: BLKS(0x0C0749B0u);
	r6 = 0xB4u; UPD(0x0C0749B2u, 1);  /* 0C0749B0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0749B2 add #imm,Rn */
	IF(0x0C0749B4u); MACL = r10 * r6;  /* 0C0749B4 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C0749B8u, 4);  /* 0C0749B6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0749BAu, 1);  /* 0C0749B8 mov.w @(disp,pc),Rn */
	IF(0x0C0749BAu); r9 = MACL;  /* 0C0749BA sts macl,Rn */
	r9 += r8;  /* 0C0749BC add Rm,Rn */
	IF(0x0C0749BEu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0749C0u, 3);  /* 0C0749BE mov.b @(r0,Rm),Rn */
	r11 = r5 & 0xFF;  /* 0C0749C0 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C0749C4u, 2);  /* 0C0749C2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0749C4 add #imm,Rn */
	IF(0x0C0749C6u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0749C8u, 2);  /* 0C0749C6 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C0749C8 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0749CA extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0749CEu, 3);  /* 0C0749CC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C0749D0u, 1);  /* 0C0749CE mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0749D2u, 1);  /* 0C0749D0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0749D4u, 1);  /* 0C0749D2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C074970u, 3); goto L_0C074970; }  /* 0C0749D4 bra */
L_0C0749E0: BLKS(0x0C0749E0u);
	if (!T) { UPD(0x0C07494Au, 3); goto L_0C07494A; }  /* 0C0749E0 bf */
L_0C0749E2: BLKS(0x0C0749E2u);
	r15 += 0xFFFFFFF8u;  /* 0C0749E2 add #imm,Rn */
	r2 = 0xB4u; UPD(0x0C0749E6u, 2);  /* 0C0749E4 mov.w @(disp,pc),Rn */
	IF(0x0C0749E6u); MACL = r10 * r2;  /* 0C0749E6 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0749EAu, 3);  /* 0C0749E8 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0749ECu, 1);  /* 0C0749EA mov.w @(disp,pc),Rn */
	IF(0x0C0749ECu); r8 = MACL;  /* 0C0749EC sts macl,Rn */
	r8 += r9;  /* 0C0749EE add Rm,Rn */
	IF(0x0C0749F0u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0749F2u, 3);  /* 0C0749F0 mov.b @(r0,Rm),Rn */
	r3 = r7 & 0xFF;  /* 0C0749F2 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0749F6u, 2);  /* 0C0749F4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0749F6 add #imm,Rn */
	IF(0x0C0749F8u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0749FAu, 2);  /* 0C0749F8 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0749FA extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0749FEu, 2);  /* 0C0749FC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C074A00u, 1);  /* 0C0749FE mov.l @(disp,pc),Rn */
	r5 = 0xCu;  /* 0C074A00 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C074A04u, 2);  /* 0C074A02 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C074A06u, 1);  /* 0C074A04 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C074970u, 3); goto L_0C074970; }  /* 0C074A06 bra */
L_0C074A80: BLKS(0x0C074A80u);
	r11 = 0xB4u; UPD(0x0C074A82u, 1);  /* 0C074A80 mov.w @(disp,pc),Rn */
	IF(0x0C074A82u); MACL = r10 * r11;  /* 0C074A82 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C074A86u, 3);  /* 0C074A84 mov.l @(disp,pc),Rn */
	IF(0x0C074A86u); r3 = MACL;  /* 0C074A86 sts macl,Rn */
	r3 += r0;  /* 0C074A88 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C074A8Cu, 3);  /* 0C074A8A mov.w @(disp,pc),Rn */
	IF(0x0C074A8Cu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C074A8Eu, 1);  /* 0C074A8C mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C074A8E extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C074A92u, 2);  /* 0C074A90 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C074A92 add #imm,Rn */
	IF(0x0C074A94u); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C074A96u, 2);  /* 0C074A94 mov.b @(r0,Rm),Rn */
	r7 = r9 & 0xFF;  /* 0C074A96 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C074A9Au, 2);  /* 0C074A98 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C074A9Cu, 1);  /* 0C074A9A mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C074A9Eu, 1);  /* 0C074A9C mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C074AA0u, 1);  /* 0C074A9E mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C074970u, 3); goto L_0C074970; }  /* 0C074AA0 bra */
L_0C074AB0: BLKS(0x0C074AB0u);
	r11 = 0xB0u; UPD(0x0C074AB2u, 1);  /* 0C074AB0 mov.w @(disp,pc),Rn */
	r11 += r9;  /* 0C074AB2 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r11); UPD(0x0C074AB6u, 2);  /* 0C074AB4 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C074AB6 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C074ABAu, 2);  /* 0C074AB8 mov.l Rm,@Rn */
	r3 = 0xA9u; UPD(0x0C074ABCu, 1);  /* 0C074ABA mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C074ABC mov Rm,Rn */
	IF(0x0C074ABEu); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C074AC0u, 2);  /* 0C074ABE mov.b @(r0,Rm),Rn */
	r8 = 0xC0AB240u; UPD(0x0C074AC2u, 1);  /* 0C074AC0 mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C074AC2 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C074AC6u, 2);  /* 0C074AC4 mov.l Rm,@(disp,Rn) */
	r10 = 0xC06CE70u; UPD(0x0C074AC8u, 1);  /* 0C074AC6 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C074ACAu, 1);  /* 0C074AC8 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C074ACCu, 1);  /* 0C074ACA mov.l @(disp,Rm),Rn */
	IF(0x0C074ACCu); { u32 t_ = r8; PR = 0x0C074AD0u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C074AD0u); }  /* 0C074ACC jsr @Rn */
L_0C074AD0: BLKS(0x0C074AD0u);
	r1 = (u32)(s32)(s8)R8(r11); UPD(0x0C074AD2u, 1);  /* 0C074AD0 mov.b @Rm,Rn */
	r15 += 0x8u;  /* 0C074AD2 add #imm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C074AD6u, 2);  /* 0C074AD4 mov.l @(disp,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C074AD6 extu.b Rm,Rn */
	r4 = 0x2u;  /* 0C074AD8 mov #imm,Rn */
	IF(0x0C074ADAu); { u32 t_ = r10; PR = 0x0C074ADEu; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C074ADEu); }  /* 0C074ADA jsr @Rn */
L_0C074ADE: BLKS(0x0C074ADEu);
	r5 = 0x0u;  /* 0C074ADE mov #imm,Rn */
	W32(r9, r5); UPD(0x0C074AE2u, 2);  /* 0C074AE0 mov.l Rm,@Rn */
L_0C074AE2: BLKS(0x0C074AE2u);
	{ IF(0x0C074AE4u); ; /* slot nop */ UPD(0x0C07483Cu, 3); goto L_0C07483C; }  /* 0C074AE2 bra */
L_0C074AF0: BLKS(0x0C074AF0u);
	r1 = 0xC0A0940u; UPD(0x0C074AF2u, 1);  /* 0C074AF0 mov.l @(disp,pc),Rn */
	{ IF(0x0C074AF4u); ; /* slot nop */ UPD(0x0C0748B4u, 3); goto L_0C0748B4; }  /* 0C074AF2 bra */
L_0C074B00: BLKS(0x0C074B00u);
	r3 = 0x99u; UPD(0x0C074B02u, 1);  /* 0C074B00 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C074B02 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C074B06u, 2);  /* 0C074B04 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C074B06 add #imm,Rn */
	W8(r3, r0); UPD(0x0C074B0Au, 2);  /* 0C074B08 mov.b Rm,@Rn */
	r0 &= 0xFu;  /* 0C074B0A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C074B0C tst Rm,Rn */
	if (!T) { UPD(0x0C074AE2u, 5); goto L_0C074AE2; }  /* 0C074B0E bf */
L_0C074B10: BLKS(0x0C074B10u);
	r0 = R32(r2 + 0xCu); UPD(0x0C074B12u, 1);  /* 0C074B10 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C074B12 mov Rm,Rn */
	r0 += 0x1u;  /* 0C074B14 add #imm,Rn */
	r0 &= 0x3u;  /* 0C074B16 and #imm,r0 */
	r1 = 0xC0A03B0u; UPD(0x0C074B1Au, 4);  /* 0C074B18 mov.l @(disp,pc),Rn */
	{ W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0748B4u, 3); goto L_0C0748B4; }  /* 0C074B1A bra */
}

/* FUN_0c074b40 */
void f_0C074B40(sh3_t *c)
{
	LOCALS;
L_0C074B40: BLKS(0x0C074B40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C074B42u, 1);  /* 0C074B40 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s16)r7;  /* 0C074B42 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C074B46u, 2);  /* 0C074B44 mov.l Rm,@-Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C074B46 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C074B4Au, 2);  /* 0C074B48 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r6;  /* 0C074B4A exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C074B4Eu, 2);  /* 0C074B4C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C074B50u, 1);  /* 0C074B4E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C074B52u, 1);  /* 0C074B50 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C074B54u, 1);  /* 0C074B52 mov.l Rm,@-Rn */
	IF(0x0C074B54u); r15 -= 4; W32(r15, PR); UPD(0x0C074B56u, 1);  /* 0C074B54 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE8u;  /* 0C074B56 add #imm,Rn */
	r14 = r15;  /* 0C074B58 mov Rm,Rn */
	r2 = R32(r14 + 0x38u); UPD(0x0C074B5Cu, 3);  /* 0C074B5A mov.l @(disp,Rm),Rn */
	W32(r14 + 0xCu, r0); UPD(0x0C074B5Eu, 1);  /* 0C074B5C mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)r2;  /* 0C074B5E exts.w Rm,Rn */
	r2 = 0x5u;  /* 0C074B60 mov #imm,Rn */
	W32(r14, r4); UPD(0x0C074B64u, 3);  /* 0C074B62 mov.l Rm,@Rn */
	T = (s32)r0 > (s32)r2;  /* 0C074B64 cmp/gt Rm,Rn */
	W32(r14 + 0x4u, r3); UPD(0x0C074B68u, 2);  /* 0C074B66 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r14 + 0x8u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C074B70u, 3); goto L_0C074B70; } UPD(0x0C074B6Cu, 1); goto L_0C074B6C; }  /* 0C074B68 bf/s */
L_0C074B6C: BLKS(0x0C074B6Cu);
	{ IF(0x0C074B6Eu); ; /* slot nop */ UPD(0x0C074CA0u, 3); goto L_0C074CA0; }  /* 0C074B6C bra */
L_0C074B70: BLKS(0x0C074B70u);
	r5 = 0xB4u; UPD(0x0C074B72u, 1);  /* 0C074B70 mov.w @(disp,pc),Rn */
	IF(0x0C074B72u); r0 <<= 2;  /* 0C074B72 shll2 Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C074B76u, 2);  /* 0C074B74 mov.l @(disp,Rm),Rn */
	r13 = 0x0u;  /* 0C074B76 mov #imm,Rn */
	IF(0x0C074B78u); MACL = r7 * r5;  /* 0C074B78 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C074B7Cu, 4);  /* 0C074B7A mov.l @(disp,pc),Rn */
	IF(0x0C074B7Cu); r4 = MACL;  /* 0C074B7C sts macl,Rn */
	r4 += r9;  /* 0C074B7E add Rm,Rn */
	W32(r14 + 0x10u, r4); UPD(0x0C074B82u, 3);  /* 0C074B80 mov.l Rm,@(disp,Rn) */
	r5 += 0xFFFFFFF4u;  /* 0C074B82 add #imm,Rn */
	r11 = 0xC1875D8u; UPD(0x0C074B86u, 2);  /* 0C074B84 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C074B86 add Rm,Rn */
	r12 = R32(r14 + 0xCu); UPD(0x0C074B8Au, 2);  /* 0C074B88 mov.l @(disp,Rm),Rn */
	r4 += 0x1u;  /* 0C074B8A add #imm,Rn */
	r6 = R32(r14); UPD(0x0C074B8Eu, 2);  /* 0C074B8C mov.l @Rm,Rn */
	r12 += r12;  /* 0C074B8E add Rm,Rn */
	IF(0x0C074B90u); r10 = R32(r0 + r11); UPD(0x0C074B92u, 2);  /* 0C074B90 mov.l @(r0,Rm),Rn */
	r12 += r6;  /* 0C074B92 add Rm,Rn */
	W32(r14 + 0x14u, r4); UPD(0x0C074B96u, 2);  /* 0C074B94 mov.l Rm,@(disp,Rn) */
	IF(0x0C074B96u); ;  /* 0C074B96 nop */
	UPD(0x0C074B98u, 1);
L_0C074B98: BLKS(0x0C074B98u);
	T = (r13 & r13) == 0;  /* 0C074B98 tst Rm,Rn */
	{ u32 c_ = T; { u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r11 = v_; } /* slot mov.w @Rm+,Rn */ if (c_) { UPD(0x0C074C90u, 4); goto L_0C074C90; } UPD(0x0C074B9Eu, 1); goto L_0C074B9E; }  /* 0C074B9A bt/s */
L_0C074B9E: BLKS(0x0C074B9Eu);
	r10 += 0x4u;  /* 0C074B9E add #imm,Rn */
	r8 = (u32)(s32)(s16)R16(r10); UPD(0x0C074BA2u, 2);  /* 0C074BA0 mov.w @Rm,Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C074BA4u, 1);  /* 0C074BA2 mov.l @(disp,Rm),Rn */
	r10 += 0xFFFFFFFCu;  /* 0C074BA4 add #imm,Rn */
	r2 = 0xB4u; UPD(0x0C074BA8u, 2);  /* 0C074BA6 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C074BA8 add Rm,Rn */
	IF(0x0C074BAAu); MACL = r11 * r2;  /* 0C074BAA mul.l Rm,Rn */
	r0 = R32(r14); UPD(0x0C074BAEu, 4);  /* 0C074BAC mov.l @Rm,Rn */
	r8 += r8;  /* 0C074BAE add Rm,Rn */
	IF(0x0C074BB0u); r1 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C074BB2u, 2);  /* 0C074BB0 mov.w @(r0,Rm),Rn */
	IF(0x0C074BB2u); r2 = MACL;  /* 0C074BB2 sts macl,Rn */
	UPD(0x0C074BB4u, 1);
L_0C074BB4: BLKS(0x0C074BB4u);
	r8 = 0xB4u; UPD(0x0C074BB6u, 1);  /* 0C074BB4 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C074BB6 mov #imm,Rn */
	IF(0x0C074BB8u); MACL = r11 * r8;  /* 0C074BB8 mul.l Rm,Rn */
	r6 = R32(r14 + 0x4u); UPD(0x0C074BBCu, 4);  /* 0C074BBA mov.l @(disp,Rm),Rn */
	r0 = 0xC26CDBCu; UPD(0x0C074BBEu, 1);  /* 0C074BBC mov.l @(disp,pc),Rn */
	IF(0x0C074BBEu); r9 = MACL;  /* 0C074BBE sts macl,Rn */
	IF(0x0C074BC0u); W16(r0 + r2, r1); UPD(0x0C074BC2u, 2);  /* 0C074BC0 mov.w Rm,@(r0,Rn) */
	IF(0x0C074BC2u); MACL = r6 * r8;  /* 0C074BC2 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C074BC6u, 3);  /* 0C074BC4 mov.l @(disp,pc),Rn */
	IF(0x0C074BC6u); r8 = MACL;  /* 0C074BC6 sts macl,Rn */
	r8 += r1;  /* 0C074BC8 add Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C074BCCu, 3);  /* 0C074BCA mov.l @(disp,pc),Rn */
	r7 = R32(r10); UPD(0x0C074BCEu, 1);  /* 0C074BCC mov.l @Rm,Rn */
	r9 += r0;  /* 0C074BCE add Rm,Rn */
	r5 = R32(r8 + 0x4u); UPD(0x0C074BD2u, 2);  /* 0C074BD0 mov.l @(disp,Rm),Rn */
	W32(r9, r7); UPD(0x0C074BD4u, 1);  /* 0C074BD2 mov.l Rm,@Rn */
	W32(r9 + 0x4u, r5); UPD(0x0C074BD6u, 1);  /* 0C074BD4 mov.l Rm,@(disp,Rn) */
	r4 = R32(r10 + 0x8u); UPD(0x0C074BD8u, 1);  /* 0C074BD6 mov.l @(disp,Rm),Rn */
	r2 = 0xC0A02D0u; UPD(0x0C074BDAu, 1);  /* 0C074BD8 mov.l @(disp,pc),Rn */
	W32(r9 + 0x8u, r4); UPD(0x0C074BDCu, 1);  /* 0C074BDA mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r3); UPD(0x0C074BDEu, 1);  /* 0C074BDC mov.l Rm,@(disp,Rn) */
	IF(0x0C074BDEu); { u32 t_ = r2; PR = 0x0C074BE2u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C074BE2u); }  /* 0C074BDE jsr @Rn */
L_0C074BE2: BLKS(0x0C074BE2u);
	r0 = 0xC0A1530u; UPD(0x0C074BE4u, 1);  /* 0C074BE2 mov.l @(disp,pc),Rn */
	IF(0x0C074BE4u); { u32 t_ = r0; PR = 0x0C074BE8u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C074BE8u); }  /* 0C074BE4 jsr @Rn */
L_0C074BE8: BLKS(0x0C074BE8u);
	r0 = 0x86u; UPD(0x0C074BEAu, 1);  /* 0C074BE8 mov.w @(disp,pc),Rn */
	T = (r13 & r13) == 0;  /* 0C074BEA tst Rm,Rn */
	r7 = 0x100u; UPD(0x0C074BEEu, 2);  /* 0C074BEC mov.w @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C074BF0u, 1);  /* 0C074BEE mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C074BF2u, 1);  /* 0C074BF0 mov.l @(disp,Rm),Rn */
	IF(0x0C074BF2u); W16(r0 + r9, r7); UPD(0x0C074BF4u, 1);  /* 0C074BF2 mov.w Rm,@(r0,Rn) */
	W32(r9 + 0x24u, r6); UPD(0x0C074BF6u, 1);  /* 0C074BF4 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r9 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C074C80u, 3); goto L_0C074C80; } UPD(0x0C074BFAu, 1); goto L_0C074BFA; }  /* 0C074BF6 bt/s */
L_0C074BFA: BLKS(0x0C074BFAu);
	r3 = R32(r10 + 0xCu); UPD(0x0C074BFCu, 1);  /* 0C074BFA mov.l @(disp,Rm),Rn */
	W32(r9 + 0x2Cu, r3); UPD(0x0C074BFEu, 1);  /* 0C074BFC mov.l Rm,@(disp,Rn) */
	r2 = R32(r10 + 0x10u); UPD(0x0C074C00u, 1);  /* 0C074BFE mov.l @(disp,Rm),Rn */
	W32(r9 + 0x30u, r2); UPD(0x0C074C02u, 1);  /* 0C074C00 mov.l Rm,@(disp,Rn) */
L_0C074C02: BLKS(0x0C074C02u);
	r8 = 0xB4u; UPD(0x0C074C04u, 1);  /* 0C074C02 mov.w @(disp,pc),Rn */
	r10 += 0x14u;  /* 0C074C04 add #imm,Rn */
	IF(0x0C074C06u); MACL = r11 * r8;  /* 0C074C06 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C074C0Au, 4);  /* 0C074C08 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C074C0A mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r7 = v_; } UPD(0x0C074C0Eu, 2);  /* 0C074C0C mov.w @Rm+,Rn */
	IF(0x0C074C0Eu); r8 = MACL;  /* 0C074C0E sts macl,Rn */
	r0 = 0x88u; UPD(0x0C074C12u, 2);  /* 0C074C10 mov.w @(disp,pc),Rn */
	r8 += r1;  /* 0C074C12 add Rm,Rn */
	IF(0x0C074C14u); W16(r0 + r8, r7); UPD(0x0C074C16u, 2);  /* 0C074C14 mov.w Rm,@(r0,Rn) */
	r9 = 0xA0u; UPD(0x0C074C18u, 1);  /* 0C074C16 mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r6 = v_; } UPD(0x0C074C1Au, 1);  /* 0C074C18 mov.b @Rm+,Rn */
	r9 += r8;  /* 0C074C1A add Rm,Rn */
	r9 += 0x1u;  /* 0C074C1C add #imm,Rn */
	W8(r9, r6); UPD(0x0C074C20u, 3);  /* 0C074C1E mov.b Rm,@Rn */
	r8 += 0x50u;  /* 0C074C20 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r11 = v_; } UPD(0x0C074C24u, 2);  /* 0C074C22 mov.b @Rm+,Rn */
	r9 += 0x1u;  /* 0C074C24 add #imm,Rn */
	W8(r9, r11); UPD(0x0C074C28u, 2);  /* 0C074C26 mov.b Rm,@Rn */
	r3 = 0xB0u; UPD(0x0C074C2Au, 1);  /* 0C074C28 mov.w @(disp,pc),Rn */
	r11 = r13;  /* 0C074C2A mov Rm,Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C074C2Eu, 2);  /* 0C074C2C mov.l @(disp,Rm),Rn */
	r11 += 0x1u;  /* 0C074C2E add #imm,Rn */
	W32(r8, r5); UPD(0x0C074C32u, 2);  /* 0C074C30 mov.l Rm,@Rn */
	r13 = (u32)(s32)(s16)r11;  /* 0C074C32 exts.w Rm,Rn */
	IF(0x0C074C34u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C074C36u, 2);  /* 0C074C34 mov.b @(r0,Rm),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C074C36 add #imm,Rn */
	r0 = r8;  /* 0C074C38 mov Rm,Rn */
	IF(0x0C074C3Au); W8(r0 + r3, r4); UPD(0x0C074C3Cu, 3);  /* 0C074C3A mov.b Rm,@(r0,Rn) */
	r9 = 0xAu;  /* 0C074C3C mov #imm,Rn */
	r2 = R32(r14 + 0x14u); UPD(0x0C074C40u, 2);  /* 0C074C3E mov.l @(disp,Rm),Rn */
	r3 += 0xFFFFFFF8u;  /* 0C074C40 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C074C44u, 2);  /* 0C074C42 mov.b @Rm,Rn */
	r3 += r8;  /* 0C074C44 add Rm,Rn */
	r3 += 0x1u;  /* 0C074C46 add #imm,Rn */
	r0 += 0x1u;  /* 0C074C48 add #imm,Rn */
	W8(r3, r0); UPD(0x0C074C4Cu, 4);  /* 0C074C4A mov.b Rm,@Rn */
	T = (s32)r13 > (s32)r9;  /* 0C074C4C cmp/gt Rm,Rn */
	r7 = 0xACu; UPD(0x0C074C50u, 2);  /* 0C074C4E mov.w @(disp,pc),Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C074C52u, 1);  /* 0C074C50 mov.l @(disp,Rm),Rn */
	r8 += r7;  /* 0C074C52 add Rm,Rn */
	r7 += r1;  /* 0C074C54 add Rm,Rn */
	r7 += 0x1u;  /* 0C074C56 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C074C5Au, 4);  /* 0C074C58 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C074C5A add #imm,Rn */
	{ u32 c_ = !T; W8(r8, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C074B98u, 4); goto L_0C074B98; } UPD(0x0C074C60u, 1); goto L_0C074C60; }  /* 0C074C5C bf/s */
L_0C074C60: BLKS(0x0C074C60u);
	r14 += 0x18u;  /* 0C074C60 add #imm,Rn */
	r15 = r14;  /* 0C074C62 mov Rm,Rn */
	IF(0x0C074C64u); PR = R32(r15); r15 += 4; UPD(0x0C074C66u, 3);  /* 0C074C64 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C074C68u, 1);  /* 0C074C66 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C074C6Au, 1);  /* 0C074C68 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C074C6Cu, 1);  /* 0C074C6A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C074C6Eu, 1);  /* 0C074C6C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C074C70u, 1);  /* 0C074C6E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C074C72u, 1);  /* 0C074C70 mov.l @Rm+,Rn */
	IF(0x0C074C72u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C074C72 rts */
L_0C074C80: BLKS(0x0C074C80u);
	r5 = R32(r14 + 0x3Cu); UPD(0x0C074C82u, 1);  /* 0C074C80 mov.l @(disp,Rm),Rn */
	r0 = 0x40u;  /* 0C074C82 mov #imm,Rn */
	W32(r9 + 0x2Cu, r5); UPD(0x0C074C86u, 2);  /* 0C074C84 mov.l Rm,@(disp,Rn) */
	IF(0x0C074C86u); r4 = R32(r0 + r14); UPD(0x0C074C88u, 1);  /* 0C074C86 mov.l @(r0,Rm),Rn */
	{ W32(r9 + 0x30u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C074C02u, 3); goto L_0C074C02; }  /* 0C074C88 bra */
L_0C074C90: BLKS(0x0C074C90u);
	r4 = 0xB4u; UPD(0x0C074C92u, 1);  /* 0C074C90 mov.w @(disp,pc),Rn */
	r3 = R32(r14 + 0x8u); UPD(0x0C074C94u, 1);  /* 0C074C92 mov.l @(disp,Rm),Rn */
	IF(0x0C074C94u); MACL = r11 * r4;  /* 0C074C94 mul.l Rm,Rn */
	r0 = R32(r14); UPD(0x0C074C98u, 3);  /* 0C074C96 mov.l @Rm,Rn */
	r3 += r3;  /* 0C074C98 add Rm,Rn */
	IF(0x0C074C9Au); r1 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C074C9Cu, 2);  /* 0C074C9A mov.w @(r0,Rm),Rn */
	{ IF(0x0C074C9Eu); r2 = MACL; /* slot sts macl,Rn */ UPD(0x0C074BB4u, 3); goto L_0C074BB4; }  /* 0C074C9C bra */
L_0C074CA0: BLKS(0x0C074CA0u);
	r8 = 0xC050D70u; UPD(0x0C074CA2u, 1);  /* 0C074CA0 mov.l @(disp,pc),Rn */
	IF(0x0C074CA2u); { u32 t_ = r8; PR = 0x0C074CA6u; r4 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C074CA6u); }  /* 0C074CA2 jsr @Rn */
L_0C074CA6: BLKS(0x0C074CA6u);
	{ r0 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(0x0C074B70u, 3); goto L_0C074B70; }  /* 0C074CA6 bra */
}

void f_0C074CD0(sh3_t *c)
{
	LOCALS;
L_0C074CD0: BLKS(0x0C074CD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C074CD2u, 1);  /* 0C074CD0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C074CD4u, 1);  /* 0C074CD2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C074CD4 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C074CD8u, 2);  /* 0C074CD6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C074CDAu, 1);  /* 0C074CD8 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C074CDCu, 1);  /* 0C074CDA mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C074CDEu, 1);  /* 0C074CDC mov.l Rm,@-Rn */
	IF(0x0C074CDEu); MACL = r8 * r3;  /* 0C074CDE mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C074CE2u, 3);  /* 0C074CE0 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C074CE4u, 1);  /* 0C074CE2 mov.l @(disp,pc),Rn */
	IF(0x0C074CE4u); r2 = MACL;  /* 0C074CE4 sts macl,Rn */
	IF(0x0C074CE6u); r15 -= 4; W32(r15, PR); UPD(0x0C074CE8u, 2);  /* 0C074CE6 sts.l pr,@-Rn */
	r0 += r2;  /* 0C074CE8 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C074CECu, 2);  /* 0C074CEA mov.l @(disp,Rm),Rn */
	r0 = 0x16u;  /* 0C074CEC mov #imm,Rn */
	T = r2 > r0;  /* 0C074CEE cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C074CF8u, 5); goto L_0C074CF8; } goto L_0C074CF4; }  /* 0C074CF0 bf/s */
L_0C074CF4: BLKS(0x0C074CF4u);
	{ IF(0x0C074CF6u); ; /* slot nop */ UPD(0x0C074E18u, 4); goto L_0C074E18; }  /* 0C074CF4 bra */
L_0C074CF8: BLKS(0x0C074CF8u);
	r0 = 0xC074D08u;  /* 0C074CF8 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C074CFA add Rm,Rn */
	IF(0x0C074CFCu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C074CFEu, 3);  /* 0C074CFC mov.w @(r0,Rm),Rn */
	IF(0x0C074CFEu); { u32 tv_ = (r4 + 0x0C074D02u); u32 t_ = PHYS(tv_); IF(0x0C074D00u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C074D40u: goto L_0C074D40; case 0x0C074EC0u: goto L_0C074EC0; case 0x0C074F00u: goto L_0C074F00; case 0x0C074F50u: goto L_0C074F50; default: JUMPD(tv_); } }  /* 0C074CFE braf Rn */
L_0C074D40: BLKS(0x0C074D40u);
	r9 = 0xC0A03F0u; UPD(0x0C074D42u, 1);  /* 0C074D40 mov.l @(disp,pc),Rn */
	IF(0x0C074D42u); { u32 t_ = r9; PR = 0x0C074D46u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C074D46u); }  /* 0C074D42 jsr @Rn */
L_0C074D46: BLKS(0x0C074D46u);
	IF(0x0C074D46u); T = (s32)r0 >= 0;  /* 0C074D46 cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C074D50u, 4); goto L_0C074D50; } goto L_0C074D4C; }  /* 0C074D48 bt/s */
L_0C074D4C: BLKS(0x0C074D4Cu);
	{ IF(0x0C074D4Eu); ; /* slot nop */ UPD(0x0C074EC0u, 4); goto L_0C074EC0; }  /* 0C074D4C bra */
L_0C074D50: BLKS(0x0C074D50u);
	r0 = 0xB4u; UPD(0x0C074D52u, 1);  /* 0C074D50 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C074D52 add #imm,Rn */
	IF(0x0C074D54u); MACL = r8 * r0;  /* 0C074D54 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C074D58u, 4);  /* 0C074D56 mov.l @(disp,pc),Rn */
	IF(0x0C074D58u); r9 = MACL;  /* 0C074D58 sts macl,Rn */
	IF(0x0C074D5Au); MACL = r10 * r0;  /* 0C074D5A mul.l Rm,Rn */
	r9 += r11;  /* 0C074D5C add Rm,Rn */
	IF(0x0C074D5Eu); r0 = MACL;  /* 0C074D5E sts macl,Rn */
	r0 += r11;  /* 0C074D60 add Rm,Rn */
	r11 = 0xB0u; UPD(0x0C074D64u, 7);  /* 0C074D62 mov.w @(disp,pc),Rn */
	r4 = r0;  /* 0C074D64 mov Rm,Rn */
	IF(0x0C074D66u); r5 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C074D68u, 2);  /* 0C074D66 mov.b @(r0,Rm),Rn */
	r12 = r5 & 0xFF;  /* 0C074D68 extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C074D6Cu, 2);  /* 0C074D6A mov.l Rm,@Rn */
	r5 = 0xCu;  /* 0C074D6C mov #imm,Rn */
	r12 = 0xA8u; UPD(0x0C074D70u, 2);  /* 0C074D6E mov.w @(disp,pc),Rn */
	r4 += r12;  /* 0C074D70 add Rm,Rn */
	r4 += 0x1u;  /* 0C074D72 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C074D76u, 3);  /* 0C074D74 mov.b @Rm,Rn */
	r2 = r3 & 0xFF;  /* 0C074D76 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C074D7Au, 2);  /* 0C074D78 mov.l Rm,@(disp,Rn) */
	r6 = R32(r0 + 0x24u); UPD(0x0C074D7Cu, 1);  /* 0C074D7A mov.l @(disp,Rm),Rn */
	r7 = R32(r0 + 0x28u); UPD(0x0C074D7Eu, 1);  /* 0C074D7C mov.l @(disp,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C074D80u, 1);  /* 0C074D7E mov.l @(disp,pc),Rn */
	IF(0x0C074D80u); { u32 t_ = r0; PR = 0x0C074D84u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C074D84u); }  /* 0C074D80 jsr @Rn */
L_0C074D84: BLKS(0x0C074D84u);
	r0 = 0xC0AFE40u; UPD(0x0C074D86u, 1);  /* 0C074D84 mov.l @(disp,pc),Rn */
	IF(0x0C074D86u); { u32 t_ = r0; PR = 0x0C074D8Au; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C074D8Au); }  /* 0C074D86 jsr @Rn */
L_0C074D8A: BLKS(0x0C074D8Au);
	r0 &= 0x3u;  /* 0C074D8A and #imm,r0 */
	T = r0 == 0x1u;  /* 0C074D8C cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C074D96u, 5); goto L_0C074D96; }  /* 0C074D8E bf */
L_0C074D90: BLKS(0x0C074D90u);
	r0 = r9;  /* 0C074D90 mov Rm,Rn */
	{ IF(0x0C074D94u); r7 = (u32)(s32)(s8)R8(r0 + r11); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C074EA0u, 4); goto L_0C074EA0; }  /* 0C074D92 bra */
L_0C074D96: BLKS(0x0C074D96u);
	r6 = 0x1u;  /* 0C074D96 mov #imm,Rn */
	T = (s32)r0 > (s32)r6;  /* 0C074D98 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C074E70u, 5); goto L_0C074E70; } goto L_0C074D9E; }  /* 0C074D9A bt/s */
L_0C074D9E: BLKS(0x0C074D9Eu);
	T = (r0 & r0) == 0;  /* 0C074D9E tst Rm,Rn */
	{ u32 c_ = T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C074E50u, 5); goto L_0C074E50; } UPD(0x0C074DA4u, 1); goto L_0C074DA4; }  /* 0C074DA0 bt/s */
L_0C074DA4: BLKS(0x0C074DA4u);
	r3 = 0xB4u; UPD(0x0C074DA6u, 1);  /* 0C074DA4 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C074DA6 add #imm,Rn */
	IF(0x0C074DA8u); MACL = r8 * r3;  /* 0C074DA8 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C074DACu, 4);  /* 0C074DAA mov.l @(disp,pc),Rn */
	r5 = 0xDu;  /* 0C074DAC mov #imm,Rn */
	IF(0x0C074DAEu); r9 = MACL;  /* 0C074DAE sts macl,Rn */
	r9 += r0;  /* 0C074DB0 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C074DB4u, 4);  /* 0C074DB2 mov.w @(disp,pc),Rn */
	IF(0x0C074DB4u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C074DB6u, 1);  /* 0C074DB4 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C074DB6 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C074DBAu, 2);  /* 0C074DB8 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C074DBA add #imm,Rn */
	IF(0x0C074DBCu); r11 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C074DBEu, 2);  /* 0C074DBC mov.b @(r0,Rm),Rn */
	r12 = r11 & 0xFF;  /* 0C074DBE extu.b Rm,Rn */
	W32(r15 + 0x4u, r12); UPD(0x0C074DC2u, 2);  /* 0C074DC0 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C074DC4u, 1);  /* 0C074DC2 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C074DC6u, 1);  /* 0C074DC4 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C074DC8u, 1);  /* 0C074DC6 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C074DCAu, 1);  /* 0C074DC8 mov.l @(disp,Rm),Rn */
L_0C074DCA: BLKS(0x0C074DCAu);
	IF(0x0C074DCAu); { u32 t_ = r0; PR = 0x0C074DCEu; IF(0x0C074DCCu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C074DCEu); }  /* 0C074DCA jsr @Rn */
L_0C074DCE: BLKS(0x0C074DCEu);
	r7 = 0xB4u; UPD(0x0C074DD0u, 1);  /* 0C074DCE mov.w @(disp,pc),Rn */
	IF(0x0C074DD0u); MACL = r8 * r7;  /* 0C074DD0 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C074DD4u, 3);  /* 0C074DD2 mov.l @(disp,pc),Rn */
	IF(0x0C074DD4u); r2 = MACL;  /* 0C074DD4 sts macl,Rn */
	r2 += r6;  /* 0C074DD6 add Rm,Rn */
	r0 = R32(r2 + 0x8u); UPD(0x0C074DDAu, 3);  /* 0C074DD8 mov.l @(disp,Rm),Rn */
	T = r0 == 0x4u;  /* 0C074DDA cmp/eq #imm,r0 */
	{ u32 c_ = T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C074E30u, 4); goto L_0C074E30; } goto L_0C074DE0; }  /* 0C074DDC bt/s */
L_0C074DE0: BLKS(0x0C074DE0u);
	r12 = 0xA5u; UPD(0x0C074DE2u, 2);  /* 0C074DE0 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C074DE2 mov Rm,Rn */
	IF(0x0C074DE4u); MACL = r10 * r7;  /* 0C074DE4 mul.l Rm,Rn */
	IF(0x0C074DE6u); r4 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C074DE8u, 4);  /* 0C074DE6 mov.b @(r0,Rm),Rn */
	IF(0x0C074DE8u); r9 = MACL;  /* 0C074DE8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C074DECu, 2);  /* 0C074DEA mov.w @(disp,pc),Rn */
	r9 += r6;  /* 0C074DEC add Rm,Rn */
	IF(0x0C074DEEu); r1 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C074DF0u, 2);  /* 0C074DEE mov.b @(r0,Rm),Rn */
	IF(0x0C074DF0u); r4 <<= 2;  /* 0C074DF0 shll2 Rn */
	r5 = 0xC1875F0u; UPD(0x0C074DF4u, 2);  /* 0C074DF2 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C074DF4 mov Rm,Rn */
	IF(0x0C074DF6u); r4 = R32(r0 + r5); UPD(0x0C074DF8u, 2);  /* 0C074DF6 mov.l @(r0,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C074DF8 extu.b Rm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C074DFCu, 2);  /* 0C074DFA mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x28u); UPD(0x0C074DFEu, 1);  /* 0C074DFC mov.l @(disp,Rm),Rn */
L_0C074DFE: BLKS(0x0C074DFEu);
	r9 = 0xC06CE70u; UPD(0x0C074E00u, 1);  /* 0C074DFE mov.l @(disp,pc),Rn */
	IF(0x0C074E00u); { u32 t_ = r9; PR = 0x0C074E04u; IF(0x0C074E02u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C074E04u); }  /* 0C074E00 jsr @Rn */
L_0C074E04: BLKS(0x0C074E04u);
	r2 = 0xB4u; UPD(0x0C074E06u, 1);  /* 0C074E04 mov.w @(disp,pc),Rn */
	IF(0x0C074E06u); MACL = r10 * r2;  /* 0C074E06 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C074E0Au, 3);  /* 0C074E08 mov.l @(disp,pc),Rn */
	IF(0x0C074E0Au); r10 = MACL;  /* 0C074E0A sts macl,Rn */
	IF(0x0C074E0Cu); MACL = r8 * r2;  /* 0C074E0C mul.l Rm,Rn */
	r8 = 0x0u;  /* 0C074E0E mov #imm,Rn */
	IF(0x0C074E10u); r0 = MACL;  /* 0C074E10 sts macl,Rn */
	IF(0x0C074E12u); W32(r0 + r7, r8); UPD(0x0C074E14u, 6);  /* 0C074E12 mov.l Rm,@(r0,Rn) */
	r0 = r10;  /* 0C074E14 mov Rm,Rn */
	IF(0x0C074E16u); W32(r0 + r7, r8); UPD(0x0C074E18u, 2);  /* 0C074E16 mov.l Rm,@(r0,Rn) */
L_0C074E18: BLKS(0x0C074E18u);
	r15 = r14;  /* 0C074E18 mov Rm,Rn */
	IF(0x0C074E1Au); PR = R32(r15); r15 += 4; UPD(0x0C074E1Cu, 2);  /* 0C074E1A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C074E1Eu, 1);  /* 0C074E1C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C074E20u, 1);  /* 0C074E1E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C074E22u, 1);  /* 0C074E20 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C074E24u, 1);  /* 0C074E22 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C074E26u, 1);  /* 0C074E24 mov.l @Rm+,Rn */
	IF(0x0C074E26u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C074E26 rts */
L_0C074E30: BLKS(0x0C074E30u);
	IF(0x0C074E30u); MACL = r10 * r7;  /* 0C074E30 mul.l Rm,Rn */
	r0 = 0xB0u; UPD(0x0C074E34u, 3);  /* 0C074E32 mov.w @(disp,pc),Rn */
	r4 = 0x9u;  /* 0C074E34 mov #imm,Rn */
	IF(0x0C074E36u); r11 = MACL;  /* 0C074E36 sts macl,Rn */
	r11 += r6;  /* 0C074E38 add Rm,Rn */
	IF(0x0C074E3Au); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C074E3Cu, 4);  /* 0C074E3A mov.b @(r0,Rm),Rn */
	r7 = r6 & 0xFF;  /* 0C074E3C extu.b Rm,Rn */
	r5 = R32(r11 + 0x24u); UPD(0x0C074E40u, 2);  /* 0C074E3E mov.l @(disp,Rm),Rn */
	{ r6 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C074DFEu, 3); goto L_0C074DFE; }  /* 0C074E40 bra */
L_0C074E50: BLKS(0x0C074E50u);
	IF(0x0C074E50u); r5 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C074E52u, 1);  /* 0C074E50 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C074E52 add #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C074E54 extu.b Rm,Rn */
	r3 = r12;  /* 0C074E56 mov Rm,Rn */
	W32(r15, r4); UPD(0x0C074E5Au, 4);  /* 0C074E58 mov.l Rm,@Rn */
	r3 += r9;  /* 0C074E5A add Rm,Rn */
	r3 += 0x1u;  /* 0C074E5C add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C074E60u, 3);  /* 0C074E5E mov.b @Rm,Rn */
	r5 = 0xCu;  /* 0C074E60 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C074E62 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C074E66u, 3);  /* 0C074E64 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C074E68u, 1);  /* 0C074E66 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C074E6Au, 1);  /* 0C074E68 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C074E6Cu, 1);  /* 0C074E6A mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C074DCAu, 3); goto L_0C074DCA; }  /* 0C074E6C bra */
L_0C074E70: BLKS(0x0C074E70u);
	{ u32 c_ = !T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C074DA4u, 3); goto L_0C074DA4; } goto L_0C074E74; }  /* 0C074E70 bf/s */
L_0C074E74: BLKS(0x0C074E74u);
	IF(0x0C074E74u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C074E76u, 2);  /* 0C074E74 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C074E76 add #imm,Rn */
	r5 = r6 & 0xFF;  /* 0C074E78 extu.b Rm,Rn */
	r4 = r12;  /* 0C074E7A mov Rm,Rn */
	W32(r15, r5); UPD(0x0C074E7Eu, 4);  /* 0C074E7C mov.l Rm,@Rn */
	r4 += r9;  /* 0C074E7E add Rm,Rn */
	r4 += 0x1u;  /* 0C074E80 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C074E84u, 3);  /* 0C074E82 mov.b @Rm,Rn */
	r5 = 0xCu;  /* 0C074E84 mov #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C074E86 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C074E8Au, 3);  /* 0C074E88 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C074E8Cu, 1);  /* 0C074E8A mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C074E8Eu, 1);  /* 0C074E8C mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C074E90u, 1);  /* 0C074E8E mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C074DCAu, 3); goto L_0C074DCA; }  /* 0C074E90 bra */
L_0C074EA0: BLKS(0x0C074EA0u);
	r15 += 0xFFFFFFF8u;  /* 0C074EA0 add #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C074EA2 extu.b Rm,Rn */
	r0 = r12;  /* 0C074EA4 mov Rm,Rn */
	W32(r15, r6); UPD(0x0C074EA8u, 4);  /* 0C074EA6 mov.l Rm,@Rn */
	r0 += r9;  /* 0C074EA8 add Rm,Rn */
	r0 += 0x1u;  /* 0C074EAA add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r0); UPD(0x0C074EAEu, 3);  /* 0C074EAC mov.b @Rm,Rn */
	r5 = 0xCu;  /* 0C074EAE mov #imm,Rn */
	r12 = r11 & 0xFF;  /* 0C074EB0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r12); UPD(0x0C074EB4u, 3);  /* 0C074EB2 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C074EB6u, 1);  /* 0C074EB4 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C074EB8u, 1);  /* 0C074EB6 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C074EBAu, 1);  /* 0C074EB8 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C074DCAu, 3); goto L_0C074DCA; }  /* 0C074EBA bra */
L_0C074EC0: BLKS(0x0C074EC0u);
	r7 = 0xB4u; UPD(0x0C074EC2u, 1);  /* 0C074EC0 mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C074EC2 mov #imm,Rn */
	IF(0x0C074EC4u); MACL = r8 * r7;  /* 0C074EC4 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C074EC8u, 4);  /* 0C074EC6 mov.l @(disp,pc),Rn */
	IF(0x0C074EC8u); r0 = MACL;  /* 0C074EC8 sts macl,Rn */
	{ IF(0x0C074ECCu); W32(r0 + r5, r6); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C074E18u, 4); goto L_0C074E18; }  /* 0C074ECA bra */
L_0C074F00: BLKS(0x0C074F00u);
	r9 = 0xC0A03F0u; UPD(0x0C074F02u, 1);  /* 0C074F00 mov.l @(disp,pc),Rn */
	IF(0x0C074F02u); { u32 t_ = r9; PR = 0x0C074F06u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C074F06u); }  /* 0C074F02 jsr @Rn */
L_0C074F06: BLKS(0x0C074F06u);
	IF(0x0C074F06u); T = (s32)r0 >= 0;  /* 0C074F06 cmp/pz Rn */
	if (!T) { UPD(0x0C074F1Eu, 4); goto L_0C074F1E; }  /* 0C074F08 bf */
L_0C074F0A: BLKS(0x0C074F0Au);
	r12 = 0xB4u; UPD(0x0C074F0Cu, 1);  /* 0C074F0A mov.w @(disp,pc),Rn */
	IF(0x0C074F0Cu); MACL = r0 * r12;  /* 0C074F0C mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C074F10u, 3);  /* 0C074F0E mov.l @(disp,pc),Rn */
	IF(0x0C074F10u); r4 = MACL;  /* 0C074F10 sts macl,Rn */
	r0 = 0xA5u; UPD(0x0C074F14u, 2);  /* 0C074F12 mov.w @(disp,pc),Rn */
	r4 += r3;  /* 0C074F14 add Rm,Rn */
	r4 += r0;  /* 0C074F16 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C074F1Au, 3);  /* 0C074F18 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C074F1A add #imm,Rn */
	W8(r4, r2); UPD(0x0C074F1Eu, 2);  /* 0C074F1C mov.b Rm,@Rn */
L_0C074F1E: BLKS(0x0C074F1Eu);
	r2 = 0xB4u; UPD(0x0C074F20u, 1);  /* 0C074F1E mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C074F20 add #imm,Rn */
	IF(0x0C074F22u); MACL = r8 * r2;  /* 0C074F22 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C074F26u, 4);  /* 0C074F24 mov.l @(disp,pc),Rn */
	IF(0x0C074F26u); r11 = MACL;  /* 0C074F26 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C074F2Au, 2);  /* 0C074F28 mov.w @(disp,pc),Rn */
	r11 += r4;  /* 0C074F2A add Rm,Rn */
	IF(0x0C074F2Cu); r9 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C074F2Eu, 2);  /* 0C074F2C mov.b @(r0,Rm),Rn */
	r8 = 0x0u;  /* 0C074F2E mov #imm,Rn */
	r7 = r9 & 0xFF;  /* 0C074F30 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C074F34u, 3);  /* 0C074F32 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C074F34 add #imm,Rn */
	IF(0x0C074F36u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C074F38u, 2);  /* 0C074F36 mov.b @(r0,Rm),Rn */
	r10 = 0xC0AB240u; UPD(0x0C074F3Au, 1);  /* 0C074F38 mov.l @(disp,pc),Rn */
	r5 = r6 & 0xFF;  /* 0C074F3A extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C074F3Eu, 2);  /* 0C074F3C mov.l Rm,@(disp,Rn) */
	r5 = 0xCu;  /* 0C074F3E mov #imm,Rn */
	r4 = R32(r11); UPD(0x0C074F42u, 2);  /* 0C074F40 mov.l @Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C074F44u, 1);  /* 0C074F42 mov.l @(disp,Rm),Rn */
	IF(0x0C074F44u); { u32 t_ = r10; PR = 0x0C074F48u; r7 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C074F48u); }  /* 0C074F44 jsr @Rn */
L_0C074F48: BLKS(0x0C074F48u);
	W32(r11, r8); UPD(0x0C074F4Au, 1);  /* 0C074F48 mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C074E18u, 3); goto L_0C074E18; }  /* 0C074F4A bra */
L_0C074F50: BLKS(0x0C074F50u);
	r3 = 0xB4u; UPD(0x0C074F52u, 1);  /* 0C074F50 mov.w @(disp,pc),Rn */
	IF(0x0C074F52u); MACL = r8 * r3;  /* 0C074F52 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C074F56u, 3);  /* 0C074F54 mov.l @(disp,pc),Rn */
	IF(0x0C074F56u); r8 = MACL;  /* 0C074F56 sts macl,Rn */
	r8 += r0;  /* 0C074F58 add Rm,Rn */
	r4 = R32(r8); UPD(0x0C074F5Cu, 3);  /* 0C074F5A mov.l @Rm,Rn */
	r9 = 0x4000u; UPD(0x0C074F5Eu, 1);  /* 0C074F5C mov.w @(disp,pc),Rn */
	r9 &= r4;  /* 0C074F5E and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C074F60 tst Rm,Rn */
	if (T) { UPD(0x0C074F70u, 5); goto L_0C074F70; }  /* 0C074F62 bt */
L_0C074F64: BLKS(0x0C074F64u);
	r10 = 0xFFFFBFFFu; UPD(0x0C074F66u, 1);  /* 0C074F64 mov.w @(disp,pc),Rn */
	r4 &= r10;  /* 0C074F66 and Rm,Rn */
	{ W32(r8, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C074E18u, 4); goto L_0C074E18; }  /* 0C074F68 bra */
L_0C074F70: BLKS(0x0C074F70u);
	r0 = 0xB0u; UPD(0x0C074F72u, 1);  /* 0C074F70 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C074F72 add #imm,Rn */
	IF(0x0C074F74u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C074F76u, 2);  /* 0C074F74 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C074F76 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C074F7Au, 2);  /* 0C074F78 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C074F7A add #imm,Rn */
	IF(0x0C074F7Cu); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C074F7Eu, 2);  /* 0C074F7C mov.b @(r0,Rm),Rn */
	r12 = 0xC0AB240u; UPD(0x0C074F80u, 1);  /* 0C074F7E mov.l @(disp,pc),Rn */
	r5 = r11 & 0xFF;  /* 0C074F80 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C074F84u, 2);  /* 0C074F82 mov.l Rm,@(disp,Rn) */
	r5 = 0x2u;  /* 0C074F84 mov #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C074F88u, 2);  /* 0C074F86 mov.l @(disp,Rm),Rn */
	IF(0x0C074F88u); { u32 t_ = r12; PR = 0x0C074F8Cu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C074F8Cu); }  /* 0C074F88 jsr @Rn */
L_0C074F8C: BLKS(0x0C074F8Cu);
	W32(r8, r9); UPD(0x0C074F8Eu, 1);  /* 0C074F8C mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C074E18u, 3); goto L_0C074E18; }  /* 0C074F8E bra */
}

void f_0C074FB0(sh3_t *c)
{
	LOCALS;
	goto L_0C074FB0;
L_0C072530: BLKS(0x0C072530u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C072532u, 1);  /* 0C072530 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C072532 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C072536u, 2);  /* 0C072534 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r5;  /* 0C072536 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07253Au, 2);  /* 0C072538 mov.l Rm,@-Rn */
	r6 = 0xB4u; UPD(0x0C07253Cu, 1);  /* 0C07253A mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07253Eu, 1);  /* 0C07253C mov.l Rm,@-Rn */
	IF(0x0C07253Eu); MACL = r4 * r6;  /* 0C07253E mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C072542u, 3);  /* 0C072540 mov.l Rm,@-Rn */
	IF(0x0C072542u); r10 = MACL;  /* 0C072542 sts macl,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C072546u, 2);  /* 0C072544 mov.l Rm,@-Rn */
	IF(0x0C072546u); MACL = r8 * r6;  /* 0C072546 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07254Au, 3);  /* 0C072548 mov.l Rm,@-Rn */
	r2 = 0xC26CD40u; UPD(0x0C07254Cu, 1);  /* 0C07254A mov.l @(disp,pc),Rn */
	IF(0x0C07254Cu); r8 = MACL;  /* 0C07254C sts macl,Rn */
	IF(0x0C07254Eu); r15 -= 4; W32(r15, PR); UPD(0x0C072550u, 2);  /* 0C07254E sts.l pr,@-Rn */
	r10 += r2;  /* 0C072550 add Rm,Rn */
	r8 += r2;  /* 0C072552 add Rm,Rn */
	r11 = R32(r10); UPD(0x0C072556u, 3);  /* 0C072554 mov.l @Rm,Rn */
	r6 += 0x4Cu;  /* 0C072556 add #imm,Rn */
	r3 = R32(r8); UPD(0x0C07255Au, 2);  /* 0C072558 mov.l @Rm,Rn */
	r14 = r15;  /* 0C07255A mov Rm,Rn */
	r0 = 0xFFFFFEFFu; UPD(0x0C07255Eu, 2);  /* 0C07255C mov.w @(disp,pc),Rn */
	r3 &= r6;  /* 0C07255E and Rm,Rn */
	r11 &= r0;  /* 0C072560 and Rm,Rn */
	r11 |= r3;  /* 0C072562 or Rm,Rn */
	W32(r10, r11); UPD(0x0C072566u, 4);  /* 0C072564 mov.l Rm,@Rn */
	r13 = 0x84u; UPD(0x0C072568u, 1);  /* 0C072566 mov.w @(disp,pc),Rn */
	r11 = r10;  /* 0C072568 mov Rm,Rn */
	r11 += r13;  /* 0C07256A add Rm,Rn */
	r13 += r8;  /* 0C07256C add Rm,Rn */
	r13 += 0x2u;  /* 0C07256E add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r13); UPD(0x0C072572u, 5);  /* 0C072570 mov.w @Rm,Rn */
	r11 += 0x2u;  /* 0C072572 add #imm,Rn */
	W16(r11, r9); UPD(0x0C072576u, 2);  /* 0C072574 mov.w Rm,@Rn */
	r12 = 0x98u; UPD(0x0C072578u, 1);  /* 0C072576 mov.w @(disp,pc),Rn */
	r9 = r10;  /* 0C072578 mov Rm,Rn */
	r9 += r12;  /* 0C07257A add Rm,Rn */
	r12 += r8;  /* 0C07257C add Rm,Rn */
	r12 += 0x2u;  /* 0C07257E add #imm,Rn */
	r0 = 0xC0A0380u; UPD(0x0C072582u, 5);  /* 0C072580 mov.l @(disp,pc),Rn */
	r9 += 0x2u;  /* 0C072582 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C072586u, 2);  /* 0C072584 mov.b @Rm,Rn */
	r5 = R32(r8 + 0xCu); UPD(0x0C072588u, 1);  /* 0C072586 mov.l @(disp,Rm),Rn */
	W8(r9, r7); UPD(0x0C07258Au, 1);  /* 0C072588 mov.b Rm,@Rn */
	IF(0x0C07258Au); { u32 t_ = r0; PR = 0x0C07258Eu; W32(r10 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C07258Eu); }  /* 0C07258A jsr @Rn */
L_0C07258E: BLKS(0x0C07258Eu);
	r0 = 0x88u; UPD(0x0C072590u, 1);  /* 0C07258E mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C072592u, 1);  /* 0C072590 mov.w @Rm,Rn */
	IF(0x0C072592u); r1 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C072594u, 1);  /* 0C072592 mov.w @(r0,Rm),Rn */
	r6 = 0xC058060u; UPD(0x0C072596u, 1);  /* 0C072594 mov.l @(disp,pc),Rn */
	r4 += r1;  /* 0C072596 add Rm,Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C072598 exts.w Rm,Rn */
	r4 = r12;  /* 0C07259A mov Rm,Rn */
	IF(0x0C07259Cu); { u32 t_ = r6; PR = 0x0C0725A0u; r5 = R32(r10 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0725A0u); }  /* 0C07259C jsr @Rn */
L_0C0725A0: BLKS(0x0C0725A0u);
	r3 = R32(r8 + 0x24u); UPD(0x0C0725A2u, 1);  /* 0C0725A0 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C0725A2 mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C0725A6u, 2);  /* 0C0725A4 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0725A6 add Rm,Rn */
	W32(r10 + 0x24u, r3); UPD(0x0C0725AAu, 2);  /* 0C0725A8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0725AAu); { u32 t_ = r13; PR = 0x0C0725AEu; r5 = R32(r10 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0725AEu); }  /* 0C0725AA jsr @Rn */
L_0C0725AE: BLKS(0x0C0725AEu);
	r2 = R32(r8 + 0x28u); UPD(0x0C0725B0u, 1);  /* 0C0725AE mov.l @(disp,Rm),Rn */
	r2 += r0;  /* 0C0725B0 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0725B4u, 2);  /* 0C0725B2 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0725B4 tst Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x28u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0725CAu, 4); goto L_0C0725CA; } UPD(0x0C0725BAu, 1); goto L_0C0725BA; }  /* 0C0725B6 bt/s */
L_0C0725BA: BLKS(0x0C0725BAu);
	r2 = 0x9Du; UPD(0x0C0725BCu, 1);  /* 0C0725BA mov.w @(disp,pc),Rn */
	r2 += r10;  /* 0C0725BC add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C0725C0u, 2);  /* 0C0725BE mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0725C0 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0725C2 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C0725C4 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0725E0u, 6); goto L_0C0725E0; } UPD(0x0C0725CAu, 1); goto L_0C0725CA; }  /* 0C0725C6 bt/s */
L_0C0725CA: BLKS(0x0C0725CAu);
	r15 = r14;  /* 0C0725CA mov Rm,Rn */
	IF(0x0C0725CCu); PR = R32(r15); r15 += 4; UPD(0x0C0725CEu, 2);  /* 0C0725CC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0725D0u, 1);  /* 0C0725CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0725D2u, 1);  /* 0C0725D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0725D4u, 1);  /* 0C0725D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0725D6u, 1);  /* 0C0725D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0725D8u, 1);  /* 0C0725D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0725DAu, 1);  /* 0C0725D8 mov.l @Rm+,Rn */
	IF(0x0C0725DAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0725DA rts */
L_0C0725E0: BLKS(0x0C0725E0u);
	r12 = (u32)(s32)(s16)R16(r11); UPD(0x0C0725E2u, 1);  /* 0C0725E0 mov.w @Rm,Rn */
	r5 = 0x0u;  /* 0C0725E2 mov #imm,Rn */
	r7 = 0xC058060u; UPD(0x0C0725E6u, 2);  /* 0C0725E4 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0725E6 mov Rm,Rn */
	W8(r2, r5); UPD(0x0C0725EAu, 2);  /* 0C0725E8 mov.b Rm,@Rn */
	r11 = 0xC0000u; UPD(0x0C0725ECu, 1);  /* 0C0725EA mov.l @(disp,pc),Rn */
	IF(0x0C0725ECu); { u32 t_ = r7; PR = 0x0C0725F0u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0725F0u); }  /* 0C0725EC jsr @Rn */
L_0C0725F0: BLKS(0x0C0725F0u);
	r9 = R32(r10 + 0x24u); UPD(0x0C0725F2u, 1);  /* 0C0725F0 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C0725F2 mov Rm,Rn */
	r9 += r0;  /* 0C0725F4 add Rm,Rn */
	IF(0x0C0725F6u); { u32 t_ = r13; PR = 0x0C0725FAu; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0725FAu); }  /* 0C0725F6 jsr @Rn */
L_0C0725FA: BLKS(0x0C0725FAu);
	r8 = R32(r10 + 0x28u); UPD(0x0C0725FCu, 1);  /* 0C0725FA mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0725FC mov Rm,Rn */
	r8 += r0;  /* 0C0725FE add Rm,Rn */
	r0 = 0xA9u; UPD(0x0C072602u, 3);  /* 0C072600 mov.w @(disp,pc),Rn */
	r5 = r8;  /* 0C072602 mov Rm,Rn */
	r13 = 0xC0A9BB0u; UPD(0x0C072606u, 2);  /* 0C072604 mov.l @(disp,pc),Rn */
	IF(0x0C072606u); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C072608u, 1);  /* 0C072606 mov.b @(r0,Rm),Rn */
	IF(0x0C072608u); { u32 t_ = r13; PR = 0x0C07260Cu; r6 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C07260Cu); }  /* 0C072608 jsr @Rn */
L_0C07260C: BLKS(0x0C07260Cu);
	T = (r0 & r0) == 0;  /* 0C07260C tst Rm,Rn */
	if (T) { UPD(0x0C0725CAu, 4); goto L_0C0725CA; }  /* 0C07260E bt */
L_0C072610: BLKS(0x0C072610u);
	r15 += 0xFFFFFFFCu;  /* 0C072610 add #imm,Rn */
	r0 = 0xA1u; UPD(0x0C072614u, 2);  /* 0C072612 mov.w @(disp,pc),Rn */
	IF(0x0C072614u); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C072616u, 1);  /* 0C072614 mov.b @(r0,Rm),Rn */
	r5 = r9;  /* 0C072616 mov Rm,Rn */
	r3 = R32(r10 + 0x30u); UPD(0x0C07261Au, 2);  /* 0C072618 mov.l @(disp,Rm),Rn */
	r6 = r8;  /* 0C07261A mov Rm,Rn */
	r10 = 0xC0A9460u; UPD(0x0C07261Eu, 2);  /* 0C07261C mov.l @(disp,pc),Rn */
	r7 = r12;  /* 0C07261E mov Rm,Rn */
	IF(0x0C072620u); { u32 t_ = r10; PR = 0x0C072624u; W32(r15, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9460, 0x0C0A9460u, 0x0C072624u); }  /* 0C072620 jsr @Rn */
L_0C072624: BLKS(0x0C072624u);
	{ IF(0x0C072626u); ; /* slot nop */ UPD(0x0C0725CAu, 3); goto L_0C0725CA; }  /* 0C072624 bra */
L_0C072660: BLKS(0x0C072660u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C072662u, 1);  /* 0C072660 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C072662 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C072666u, 2);  /* 0C072664 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r5;  /* 0C072666 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07266Au, 2);  /* 0C072668 mov.l Rm,@-Rn */
	r6 = 0xB4u; UPD(0x0C07266Cu, 1);  /* 0C07266A mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07266Eu, 1);  /* 0C07266C mov.l Rm,@-Rn */
	IF(0x0C07266Eu); MACL = r4 * r6;  /* 0C07266E mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C072672u, 3);  /* 0C072670 mov.l Rm,@-Rn */
	IF(0x0C072672u); r10 = MACL;  /* 0C072672 sts macl,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C072676u, 2);  /* 0C072674 mov.l Rm,@-Rn */
	IF(0x0C072676u); MACL = r8 * r6;  /* 0C072676 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07267Au, 3);  /* 0C072678 mov.l Rm,@-Rn */
	r3 = 0xC26CD40u; UPD(0x0C07267Cu, 1);  /* 0C07267A mov.l @(disp,pc),Rn */
	IF(0x0C07267Cu); r8 = MACL;  /* 0C07267C sts macl,Rn */
	IF(0x0C07267Eu); r15 -= 4; W32(r15, PR); UPD(0x0C072680u, 2);  /* 0C07267E sts.l pr,@-Rn */
	r10 += r3;  /* 0C072680 add Rm,Rn */
	r8 += r3;  /* 0C072682 add Rm,Rn */
	r11 = R32(r10); UPD(0x0C072686u, 3);  /* 0C072684 mov.l @Rm,Rn */
	r6 += 0x4Cu;  /* 0C072686 add #imm,Rn */
	r2 = R32(r8); UPD(0x0C07268Au, 2);  /* 0C072688 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07268A add #imm,Rn */
	r0 = 0xFFFFFEFFu; UPD(0x0C07268Eu, 2);  /* 0C07268C mov.w @(disp,pc),Rn */
	r2 &= r6;  /* 0C07268E and Rm,Rn */
	r11 &= r0;  /* 0C072690 and Rm,Rn */
	r11 |= r2;  /* 0C072692 or Rm,Rn */
	W32(r10, r11); UPD(0x0C072696u, 4);  /* 0C072694 mov.l Rm,@Rn */
	r14 = r15;  /* 0C072696 mov Rm,Rn */
	r13 = 0x84u; UPD(0x0C07269Au, 2);  /* 0C072698 mov.w @(disp,pc),Rn */
	r11 = r10;  /* 0C07269A mov Rm,Rn */
	r11 += r13;  /* 0C07269C add Rm,Rn */
	r13 += r8;  /* 0C07269E add Rm,Rn */
	r13 += 0x2u;  /* 0C0726A0 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r13); UPD(0x0C0726A4u, 5);  /* 0C0726A2 mov.w @Rm,Rn */
	r11 += 0x2u;  /* 0C0726A4 add #imm,Rn */
	W16(r11, r9); UPD(0x0C0726A8u, 2);  /* 0C0726A6 mov.w Rm,@Rn */
	r12 = 0x98u; UPD(0x0C0726AAu, 1);  /* 0C0726A8 mov.w @(disp,pc),Rn */
	r9 = r10;  /* 0C0726AA mov Rm,Rn */
	r9 += r12;  /* 0C0726AC add Rm,Rn */
	r12 += r8;  /* 0C0726AE add Rm,Rn */
	r12 += 0x2u;  /* 0C0726B0 add #imm,Rn */
	r0 = 0xC0A0380u; UPD(0x0C0726B4u, 5);  /* 0C0726B2 mov.l @(disp,pc),Rn */
	r9 += 0x2u;  /* 0C0726B4 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C0726B8u, 2);  /* 0C0726B6 mov.b @Rm,Rn */
	r5 = R32(r8 + 0xCu); UPD(0x0C0726BAu, 1);  /* 0C0726B8 mov.l @(disp,Rm),Rn */
	W8(r9, r7); UPD(0x0C0726BCu, 1);  /* 0C0726BA mov.b Rm,@Rn */
	IF(0x0C0726BCu); { u32 t_ = r0; PR = 0x0C0726C0u; W32(r10 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0726C0u); }  /* 0C0726BC jsr @Rn */
L_0C0726C0: BLKS(0x0C0726C0u);
	r0 = 0x88u; UPD(0x0C0726C2u, 1);  /* 0C0726C0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C0726C4u, 1);  /* 0C0726C2 mov.w @Rm,Rn */
	IF(0x0C0726C4u); r1 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C0726C6u, 1);  /* 0C0726C4 mov.w @(r0,Rm),Rn */
	r6 = 0xC058060u; UPD(0x0C0726C8u, 1);  /* 0C0726C6 mov.l @(disp,pc),Rn */
	r4 += r1;  /* 0C0726C8 add Rm,Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0726CA exts.w Rm,Rn */
	r4 = r12;  /* 0C0726CC mov Rm,Rn */
	IF(0x0C0726CEu); { u32 t_ = r6; PR = 0x0C0726D2u; r5 = R32(r10 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0726D2u); }  /* 0C0726CE jsr @Rn */
L_0C0726D2: BLKS(0x0C0726D2u);
	r3 = R32(r8 + 0x24u); UPD(0x0C0726D4u, 1);  /* 0C0726D2 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C0726D4 mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C0726D8u, 2);  /* 0C0726D6 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0726D8 add Rm,Rn */
	W32(r10 + 0x24u, r3); UPD(0x0C0726DCu, 2);  /* 0C0726DA mov.l Rm,@(disp,Rn) */
	IF(0x0C0726DCu); { u32 t_ = r13; PR = 0x0C0726E0u; r5 = R32(r10 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0726E0u); }  /* 0C0726DC jsr @Rn */
L_0C0726E0: BLKS(0x0C0726E0u);
	r2 = R32(r8 + 0x28u); UPD(0x0C0726E2u, 1);  /* 0C0726E0 mov.l @(disp,Rm),Rn */
	r2 += r0;  /* 0C0726E2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0726E6u, 2);  /* 0C0726E4 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0726E6 tst Rm,Rn */
	{ u32 c_ = !T; W32(r10 + 0x28u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C072710u, 4); goto L_0C072710; } UPD(0x0C0726ECu, 1); goto L_0C0726EC; }  /* 0C0726E8 bf/s */
L_0C0726EC: BLKS(0x0C0726ECu);
	r14 += 0x4u;  /* 0C0726EC add #imm,Rn */
	UPD(0x0C0726EEu, 1);
L_0C0726EE: BLKS(0x0C0726EEu);
	r15 = r14;  /* 0C0726EE mov Rm,Rn */
	IF(0x0C0726F0u); PR = R32(r15); r15 += 4; UPD(0x0C0726F2u, 2);  /* 0C0726F0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0726F4u, 1);  /* 0C0726F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0726F6u, 1);  /* 0C0726F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0726F8u, 1);  /* 0C0726F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0726FAu, 1);  /* 0C0726F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0726FCu, 1);  /* 0C0726FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0726FEu, 1);  /* 0C0726FC mov.l @Rm+,Rn */
	IF(0x0C0726FEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0726FE rts */
L_0C072710: BLKS(0x0C072710u);
	r7 = 0xC058060u; UPD(0x0C072712u, 1);  /* 0C072710 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)R16(r11); UPD(0x0C072714u, 1);  /* 0C072712 mov.w @Rm,Rn */
	r9 = 0xC0000u; UPD(0x0C072716u, 1);  /* 0C072714 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C072716 mov Rm,Rn */
	IF(0x0C072718u); { u32 t_ = r7; PR = 0x0C07271Cu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07271Cu); }  /* 0C072718 jsr @Rn */
L_0C07271C: BLKS(0x0C07271Cu);
	r11 = R32(r10 + 0x24u); UPD(0x0C07271Eu, 1);  /* 0C07271C mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C07271E mov Rm,Rn */
	r11 += r0;  /* 0C072720 add Rm,Rn */
	IF(0x0C072722u); { u32 t_ = r13; PR = 0x0C072726u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C072726u); }  /* 0C072722 jsr @Rn */
L_0C072726: BLKS(0x0C072726u);
	r1 = 0xA9u; UPD(0x0C072728u, 1);  /* 0C072726 mov.w @(disp,pc),Rn */
	r1 += r10;  /* 0C072728 add Rm,Rn */
	W32(r14, r1); UPD(0x0C07272Cu, 2);  /* 0C07272A mov.l Rm,@Rn */
	r9 = R32(r10 + 0x28u); UPD(0x0C07272Eu, 1);  /* 0C07272C mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C072730u, 1);  /* 0C07272E mov.b @Rm,Rn */
	r9 += r0;  /* 0C072730 add Rm,Rn */
	r8 = 0xC0A9BB0u; UPD(0x0C072734u, 2);  /* 0C072732 mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C072734 extu.b Rm,Rn */
	r4 = r11;  /* 0C072736 mov Rm,Rn */
	IF(0x0C072738u); { u32 t_ = r8; PR = 0x0C07273Cu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C07273Cu); }  /* 0C072738 jsr @Rn */
L_0C07273C: BLKS(0x0C07273Cu);
	T = (r0 & r0) == 0;  /* 0C07273C tst Rm,Rn */
	if (T) { UPD(0x0C0726ECu, 4); goto L_0C0726EC; }  /* 0C07273E bt */
L_0C072740: BLKS(0x0C072740u);
	r5 = R32(r10 + 0x30u); UPD(0x0C072742u, 1);  /* 0C072740 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C072742 add #imm,Rn */
	r8 = 0xC0A8A50u; UPD(0x0C072746u, 2);  /* 0C072744 mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C072746 mov Rm,Rn */
	W32(r15, r5); UPD(0x0C07274Au, 2);  /* 0C072748 mov.l Rm,@Rn */
	r7 = r12;  /* 0C07274A mov Rm,Rn */
	r5 = r11;  /* 0C07274C mov Rm,Rn */
	IF(0x0C07274Eu); { u32 t_ = r8; PR = 0x0C072752u; r4 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A8A50, 0x0C0A8A50u, 0x0C072752u); }  /* 0C07274E jsr @Rn */
L_0C072752: BLKS(0x0C072752u);
	r7 = 0x100u; UPD(0x0C072754u, 1);  /* 0C072752 mov.w @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C072754 add #imm,Rn */
	r11 = 0xC058060u; UPD(0x0C072758u, 2);  /* 0C072756 mov.l @(disp,pc),Rn */
	r7 += r12;  /* 0C072758 add Rm,Rn */
	r9 = 0x80000u; UPD(0x0C07275Cu, 2);  /* 0C07275A mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r7;  /* 0C07275C exts.w Rm,Rn */
	r4 = r12;  /* 0C07275E mov Rm,Rn */
	IF(0x0C072760u); { u32 t_ = r11; PR = 0x0C072764u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C072764u); }  /* 0C072760 jsr @Rn */
L_0C072764: BLKS(0x0C072764u);
	r11 = R32(r10 + 0x24u); UPD(0x0C072766u, 1);  /* 0C072764 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C072766 mov Rm,Rn */
	r4 = r12;  /* 0C072768 mov Rm,Rn */
	r8 = 0xC050D70u; UPD(0x0C07276Cu, 3);  /* 0C07276A mov.l @(disp,pc),Rn */
	IF(0x0C07276Cu); { u32 t_ = r13; PR = 0x0C072770u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C072770u); }  /* 0C07276C jsr @Rn */
L_0C072770: BLKS(0x0C072770u);
	r9 = R32(r10 + 0x28u); UPD(0x0C072772u, 1);  /* 0C072770 mov.l @(disp,Rm),Rn */
	r4 = 0xFu;  /* 0C072772 mov #imm,Rn */
	IF(0x0C072774u); { u32 t_ = r8; PR = 0x0C072778u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C072778u); }  /* 0C072774 jsr @Rn */
L_0C072778: BLKS(0x0C072778u);
	r0 += r12;  /* 0C072778 add Rm,Rn */
	r0 += 0xFFFFFFF8u;  /* 0C07277A add #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C07277C exts.w Rm,Rn */
	r0 = 0xB0u; UPD(0x0C072780u, 4);  /* 0C07277E mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C072780 add #imm,Rn */
	IF(0x0C072782u); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C072784u, 2);  /* 0C072782 mov.b @(r0,Rm),Rn */
	r8 = r4 & 0xFF;  /* 0C072784 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C072788u, 2);  /* 0C072786 mov.l Rm,@Rn */
	r4 = r12;  /* 0C072788 mov Rm,Rn */
	r0 = R32(r14); UPD(0x0C07278Cu, 2);  /* 0C07278A mov.l @Rm,Rn */
	r2 = 0xC058060u; UPD(0x0C07278Eu, 1);  /* 0C07278C mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C072790u, 1);  /* 0C07278E mov.b @Rm,Rn */
	r8 = 0x20000u; UPD(0x0C072792u, 1);  /* 0C072790 mov.l @(disp,pc),Rn */
	r6 = r3 & 0xFF;  /* 0C072792 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C072796u, 2);  /* 0C072794 mov.l Rm,@(disp,Rn) */
	IF(0x0C072796u); { u32 t_ = r2; PR = 0x0C07279Au; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07279Au); }  /* 0C072796 jsr @Rn */
L_0C07279A: BLKS(0x0C07279Au);
	r4 = r12;  /* 0C07279A mov Rm,Rn */
	r5 = r8;  /* 0C07279C mov Rm,Rn */
	IF(0x0C07279Eu); { u32 t_ = r13; PR = 0x0C0727A2u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0727A2u); }  /* 0C07279E jsr @Rn */
L_0C0727A2: BLKS(0x0C0727A2u);
	r5 = 0x808080u; UPD(0x0C0727A4u, 1);  /* 0C0727A2 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C0727A4 mov Rm,Rn */
	W32(r15 + 0x10u, r5); UPD(0x0C0727A8u, 2);  /* 0C0727A6 mov.l Rm,@(disp,Rn) */
	r7 = r9;  /* 0C0727A8 mov Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0727ACu, 2);  /* 0C0727AA mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C0727AEu, 1);  /* 0C0727AC mov.l @Rm,Rn */
	r10 = 0xC0ACA40u; UPD(0x0C0727B0u, 1);  /* 0C0727AE mov.l @(disp,pc),Rn */
	IF(0x0C0727B0u); { u32 t_ = r10; PR = 0x0C0727B4u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C0727B4u); }  /* 0C0727B0 jsr @Rn */
L_0C0727B4: BLKS(0x0C0727B4u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0726EEu, 3); goto L_0C0726EE; }  /* 0C0727B4 bra */
L_0C074CD0: BLKS(0x0C074CD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C074CD2u, 1);  /* 0C074CD0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C074CD4u, 1);  /* 0C074CD2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C074CD4 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C074CD8u, 2);  /* 0C074CD6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C074CDAu, 1);  /* 0C074CD8 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C074CDCu, 1);  /* 0C074CDA mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C074CDEu, 1);  /* 0C074CDC mov.l Rm,@-Rn */
	IF(0x0C074CDEu); MACL = r8 * r3;  /* 0C074CDE mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C074CE2u, 3);  /* 0C074CE0 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C074CE4u, 1);  /* 0C074CE2 mov.l @(disp,pc),Rn */
	IF(0x0C074CE4u); r2 = MACL;  /* 0C074CE4 sts macl,Rn */
	IF(0x0C074CE6u); r15 -= 4; W32(r15, PR); UPD(0x0C074CE8u, 2);  /* 0C074CE6 sts.l pr,@-Rn */
	r0 += r2;  /* 0C074CE8 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C074CECu, 2);  /* 0C074CEA mov.l @(disp,Rm),Rn */
	r0 = 0x16u;  /* 0C074CEC mov #imm,Rn */
	T = r2 > r0;  /* 0C074CEE cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C074CF8u, 5); goto L_0C074CF8; } goto L_0C074CF4; }  /* 0C074CF0 bf/s */
L_0C074CF4: BLKS(0x0C074CF4u);
	{ IF(0x0C074CF6u); ; /* slot nop */ UPD(0x0C074E18u, 4); goto L_0C074E18; }  /* 0C074CF4 bra */
L_0C074CF8: BLKS(0x0C074CF8u);
	r0 = 0xC074D08u;  /* 0C074CF8 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C074CFA add Rm,Rn */
	IF(0x0C074CFCu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C074CFEu, 3);  /* 0C074CFC mov.w @(r0,Rm),Rn */
	IF(0x0C074CFEu); { u32 tv_ = (r4 + 0x0C074D02u); u32 t_ = PHYS(tv_); IF(0x0C074D00u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C074D40u: goto L_0C074D40; case 0x0C074EC0u: goto L_0C074EC0; case 0x0C074F00u: goto L_0C074F00; case 0x0C074F50u: goto L_0C074F50; default: JUMPD(tv_); } }  /* 0C074CFE braf Rn */
L_0C074D40: BLKS(0x0C074D40u);
	r9 = 0xC0A03F0u; UPD(0x0C074D42u, 1);  /* 0C074D40 mov.l @(disp,pc),Rn */
	IF(0x0C074D42u); { u32 t_ = r9; PR = 0x0C074D46u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C074D46u); }  /* 0C074D42 jsr @Rn */
L_0C074D46: BLKS(0x0C074D46u);
	IF(0x0C074D46u); T = (s32)r0 >= 0;  /* 0C074D46 cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C074D50u, 4); goto L_0C074D50; } goto L_0C074D4C; }  /* 0C074D48 bt/s */
L_0C074D4C: BLKS(0x0C074D4Cu);
	{ IF(0x0C074D4Eu); ; /* slot nop */ UPD(0x0C074EC0u, 4); goto L_0C074EC0; }  /* 0C074D4C bra */
L_0C074D50: BLKS(0x0C074D50u);
	r0 = 0xB4u; UPD(0x0C074D52u, 1);  /* 0C074D50 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C074D52 add #imm,Rn */
	IF(0x0C074D54u); MACL = r8 * r0;  /* 0C074D54 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C074D58u, 4);  /* 0C074D56 mov.l @(disp,pc),Rn */
	IF(0x0C074D58u); r9 = MACL;  /* 0C074D58 sts macl,Rn */
	IF(0x0C074D5Au); MACL = r10 * r0;  /* 0C074D5A mul.l Rm,Rn */
	r9 += r11;  /* 0C074D5C add Rm,Rn */
	IF(0x0C074D5Eu); r0 = MACL;  /* 0C074D5E sts macl,Rn */
	r0 += r11;  /* 0C074D60 add Rm,Rn */
	r11 = 0xB0u; UPD(0x0C074D64u, 7);  /* 0C074D62 mov.w @(disp,pc),Rn */
	r4 = r0;  /* 0C074D64 mov Rm,Rn */
	IF(0x0C074D66u); r5 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C074D68u, 2);  /* 0C074D66 mov.b @(r0,Rm),Rn */
	r12 = r5 & 0xFF;  /* 0C074D68 extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C074D6Cu, 2);  /* 0C074D6A mov.l Rm,@Rn */
	r5 = 0xCu;  /* 0C074D6C mov #imm,Rn */
	r12 = 0xA8u; UPD(0x0C074D70u, 2);  /* 0C074D6E mov.w @(disp,pc),Rn */
	r4 += r12;  /* 0C074D70 add Rm,Rn */
	r4 += 0x1u;  /* 0C074D72 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C074D76u, 3);  /* 0C074D74 mov.b @Rm,Rn */
	r2 = r3 & 0xFF;  /* 0C074D76 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C074D7Au, 2);  /* 0C074D78 mov.l Rm,@(disp,Rn) */
	r6 = R32(r0 + 0x24u); UPD(0x0C074D7Cu, 1);  /* 0C074D7A mov.l @(disp,Rm),Rn */
	r7 = R32(r0 + 0x28u); UPD(0x0C074D7Eu, 1);  /* 0C074D7C mov.l @(disp,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C074D80u, 1);  /* 0C074D7E mov.l @(disp,pc),Rn */
	IF(0x0C074D80u); { u32 t_ = r0; PR = 0x0C074D84u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C074D84u); }  /* 0C074D80 jsr @Rn */
L_0C074D84: BLKS(0x0C074D84u);
	r0 = 0xC0AFE40u; UPD(0x0C074D86u, 1);  /* 0C074D84 mov.l @(disp,pc),Rn */
	IF(0x0C074D86u); { u32 t_ = r0; PR = 0x0C074D8Au; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C074D8Au); }  /* 0C074D86 jsr @Rn */
L_0C074D8A: BLKS(0x0C074D8Au);
	r0 &= 0x3u;  /* 0C074D8A and #imm,r0 */
	T = r0 == 0x1u;  /* 0C074D8C cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C074D96u, 5); goto L_0C074D96; }  /* 0C074D8E bf */
L_0C074D90: BLKS(0x0C074D90u);
	r0 = r9;  /* 0C074D90 mov Rm,Rn */
	{ IF(0x0C074D94u); r7 = (u32)(s32)(s8)R8(r0 + r11); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C074EA0u, 4); goto L_0C074EA0; }  /* 0C074D92 bra */
L_0C074D96: BLKS(0x0C074D96u);
	r6 = 0x1u;  /* 0C074D96 mov #imm,Rn */
	T = (s32)r0 > (s32)r6;  /* 0C074D98 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C074E70u, 5); goto L_0C074E70; } goto L_0C074D9E; }  /* 0C074D9A bt/s */
L_0C074D9E: BLKS(0x0C074D9Eu);
	T = (r0 & r0) == 0;  /* 0C074D9E tst Rm,Rn */
	{ u32 c_ = T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C074E50u, 5); goto L_0C074E50; } UPD(0x0C074DA4u, 1); goto L_0C074DA4; }  /* 0C074DA0 bt/s */
L_0C074DA4: BLKS(0x0C074DA4u);
	r3 = 0xB4u; UPD(0x0C074DA6u, 1);  /* 0C074DA4 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C074DA6 add #imm,Rn */
	IF(0x0C074DA8u); MACL = r8 * r3;  /* 0C074DA8 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C074DACu, 4);  /* 0C074DAA mov.l @(disp,pc),Rn */
	r5 = 0xDu;  /* 0C074DAC mov #imm,Rn */
	IF(0x0C074DAEu); r9 = MACL;  /* 0C074DAE sts macl,Rn */
	r9 += r0;  /* 0C074DB0 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C074DB4u, 4);  /* 0C074DB2 mov.w @(disp,pc),Rn */
	IF(0x0C074DB4u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C074DB6u, 1);  /* 0C074DB4 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C074DB6 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C074DBAu, 2);  /* 0C074DB8 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C074DBA add #imm,Rn */
	IF(0x0C074DBCu); r11 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C074DBEu, 2);  /* 0C074DBC mov.b @(r0,Rm),Rn */
	r12 = r11 & 0xFF;  /* 0C074DBE extu.b Rm,Rn */
	W32(r15 + 0x4u, r12); UPD(0x0C074DC2u, 2);  /* 0C074DC0 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C074DC4u, 1);  /* 0C074DC2 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C074DC6u, 1);  /* 0C074DC4 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C074DC8u, 1);  /* 0C074DC6 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C074DCAu, 1);  /* 0C074DC8 mov.l @(disp,Rm),Rn */
L_0C074DCA: BLKS(0x0C074DCAu);
	IF(0x0C074DCAu); { u32 t_ = r0; PR = 0x0C074DCEu; IF(0x0C074DCCu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C074DCEu); }  /* 0C074DCA jsr @Rn */
L_0C074DCE: BLKS(0x0C074DCEu);
	r7 = 0xB4u; UPD(0x0C074DD0u, 1);  /* 0C074DCE mov.w @(disp,pc),Rn */
	IF(0x0C074DD0u); MACL = r8 * r7;  /* 0C074DD0 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C074DD4u, 3);  /* 0C074DD2 mov.l @(disp,pc),Rn */
	IF(0x0C074DD4u); r2 = MACL;  /* 0C074DD4 sts macl,Rn */
	r2 += r6;  /* 0C074DD6 add Rm,Rn */
	r0 = R32(r2 + 0x8u); UPD(0x0C074DDAu, 3);  /* 0C074DD8 mov.l @(disp,Rm),Rn */
	T = r0 == 0x4u;  /* 0C074DDA cmp/eq #imm,r0 */
	{ u32 c_ = T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C074E30u, 4); goto L_0C074E30; } goto L_0C074DE0; }  /* 0C074DDC bt/s */
L_0C074DE0: BLKS(0x0C074DE0u);
	r12 = 0xA5u; UPD(0x0C074DE2u, 2);  /* 0C074DE0 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C074DE2 mov Rm,Rn */
	IF(0x0C074DE4u); MACL = r10 * r7;  /* 0C074DE4 mul.l Rm,Rn */
	IF(0x0C074DE6u); r4 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C074DE8u, 4);  /* 0C074DE6 mov.b @(r0,Rm),Rn */
	IF(0x0C074DE8u); r9 = MACL;  /* 0C074DE8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C074DECu, 2);  /* 0C074DEA mov.w @(disp,pc),Rn */
	r9 += r6;  /* 0C074DEC add Rm,Rn */
	IF(0x0C074DEEu); r1 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C074DF0u, 2);  /* 0C074DEE mov.b @(r0,Rm),Rn */
	IF(0x0C074DF0u); r4 <<= 2;  /* 0C074DF0 shll2 Rn */
	r5 = 0xC1875F0u; UPD(0x0C074DF4u, 2);  /* 0C074DF2 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C074DF4 mov Rm,Rn */
	IF(0x0C074DF6u); r4 = R32(r0 + r5); UPD(0x0C074DF8u, 2);  /* 0C074DF6 mov.l @(r0,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C074DF8 extu.b Rm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C074DFCu, 2);  /* 0C074DFA mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x28u); UPD(0x0C074DFEu, 1);  /* 0C074DFC mov.l @(disp,Rm),Rn */
L_0C074DFE: BLKS(0x0C074DFEu);
	r9 = 0xC06CE70u; UPD(0x0C074E00u, 1);  /* 0C074DFE mov.l @(disp,pc),Rn */
	IF(0x0C074E00u); { u32 t_ = r9; PR = 0x0C074E04u; IF(0x0C074E02u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C074E04u); }  /* 0C074E00 jsr @Rn */
L_0C074E04: BLKS(0x0C074E04u);
	r2 = 0xB4u; UPD(0x0C074E06u, 1);  /* 0C074E04 mov.w @(disp,pc),Rn */
	IF(0x0C074E06u); MACL = r10 * r2;  /* 0C074E06 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C074E0Au, 3);  /* 0C074E08 mov.l @(disp,pc),Rn */
	IF(0x0C074E0Au); r10 = MACL;  /* 0C074E0A sts macl,Rn */
	IF(0x0C074E0Cu); MACL = r8 * r2;  /* 0C074E0C mul.l Rm,Rn */
	r8 = 0x0u;  /* 0C074E0E mov #imm,Rn */
	IF(0x0C074E10u); r0 = MACL;  /* 0C074E10 sts macl,Rn */
	IF(0x0C074E12u); W32(r0 + r7, r8); UPD(0x0C074E14u, 6);  /* 0C074E12 mov.l Rm,@(r0,Rn) */
	r0 = r10;  /* 0C074E14 mov Rm,Rn */
	IF(0x0C074E16u); W32(r0 + r7, r8); UPD(0x0C074E18u, 2);  /* 0C074E16 mov.l Rm,@(r0,Rn) */
L_0C074E18: BLKS(0x0C074E18u);
	r15 = r14;  /* 0C074E18 mov Rm,Rn */
	IF(0x0C074E1Au); PR = R32(r15); r15 += 4; UPD(0x0C074E1Cu, 2);  /* 0C074E1A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C074E1Eu, 1);  /* 0C074E1C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C074E20u, 1);  /* 0C074E1E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C074E22u, 1);  /* 0C074E20 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C074E24u, 1);  /* 0C074E22 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C074E26u, 1);  /* 0C074E24 mov.l @Rm+,Rn */
	IF(0x0C074E26u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C074E26 rts */
L_0C074E30: BLKS(0x0C074E30u);
	IF(0x0C074E30u); MACL = r10 * r7;  /* 0C074E30 mul.l Rm,Rn */
	r0 = 0xB0u; UPD(0x0C074E34u, 3);  /* 0C074E32 mov.w @(disp,pc),Rn */
	r4 = 0x9u;  /* 0C074E34 mov #imm,Rn */
	IF(0x0C074E36u); r11 = MACL;  /* 0C074E36 sts macl,Rn */
	r11 += r6;  /* 0C074E38 add Rm,Rn */
	IF(0x0C074E3Au); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C074E3Cu, 4);  /* 0C074E3A mov.b @(r0,Rm),Rn */
	r7 = r6 & 0xFF;  /* 0C074E3C extu.b Rm,Rn */
	r5 = R32(r11 + 0x24u); UPD(0x0C074E40u, 2);  /* 0C074E3E mov.l @(disp,Rm),Rn */
	{ r6 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C074DFEu, 3); goto L_0C074DFE; }  /* 0C074E40 bra */
L_0C074E50: BLKS(0x0C074E50u);
	IF(0x0C074E50u); r5 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C074E52u, 1);  /* 0C074E50 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C074E52 add #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C074E54 extu.b Rm,Rn */
	r3 = r12;  /* 0C074E56 mov Rm,Rn */
	W32(r15, r4); UPD(0x0C074E5Au, 4);  /* 0C074E58 mov.l Rm,@Rn */
	r3 += r9;  /* 0C074E5A add Rm,Rn */
	r3 += 0x1u;  /* 0C074E5C add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C074E60u, 3);  /* 0C074E5E mov.b @Rm,Rn */
	r5 = 0xCu;  /* 0C074E60 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C074E62 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C074E66u, 3);  /* 0C074E64 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C074E68u, 1);  /* 0C074E66 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C074E6Au, 1);  /* 0C074E68 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C074E6Cu, 1);  /* 0C074E6A mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C074DCAu, 3); goto L_0C074DCA; }  /* 0C074E6C bra */
L_0C074E70: BLKS(0x0C074E70u);
	{ u32 c_ = !T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C074DA4u, 3); goto L_0C074DA4; } goto L_0C074E74; }  /* 0C074E70 bf/s */
L_0C074E74: BLKS(0x0C074E74u);
	IF(0x0C074E74u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C074E76u, 2);  /* 0C074E74 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C074E76 add #imm,Rn */
	r5 = r6 & 0xFF;  /* 0C074E78 extu.b Rm,Rn */
	r4 = r12;  /* 0C074E7A mov Rm,Rn */
	W32(r15, r5); UPD(0x0C074E7Eu, 4);  /* 0C074E7C mov.l Rm,@Rn */
	r4 += r9;  /* 0C074E7E add Rm,Rn */
	r4 += 0x1u;  /* 0C074E80 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C074E84u, 3);  /* 0C074E82 mov.b @Rm,Rn */
	r5 = 0xCu;  /* 0C074E84 mov #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C074E86 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C074E8Au, 3);  /* 0C074E88 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C074E8Cu, 1);  /* 0C074E8A mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C074E8Eu, 1);  /* 0C074E8C mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C074E90u, 1);  /* 0C074E8E mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C074DCAu, 3); goto L_0C074DCA; }  /* 0C074E90 bra */
L_0C074EA0: BLKS(0x0C074EA0u);
	r15 += 0xFFFFFFF8u;  /* 0C074EA0 add #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C074EA2 extu.b Rm,Rn */
	r0 = r12;  /* 0C074EA4 mov Rm,Rn */
	W32(r15, r6); UPD(0x0C074EA8u, 4);  /* 0C074EA6 mov.l Rm,@Rn */
	r0 += r9;  /* 0C074EA8 add Rm,Rn */
	r0 += 0x1u;  /* 0C074EAA add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r0); UPD(0x0C074EAEu, 3);  /* 0C074EAC mov.b @Rm,Rn */
	r5 = 0xCu;  /* 0C074EAE mov #imm,Rn */
	r12 = r11 & 0xFF;  /* 0C074EB0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r12); UPD(0x0C074EB4u, 3);  /* 0C074EB2 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C074EB6u, 1);  /* 0C074EB4 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C074EB8u, 1);  /* 0C074EB6 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C074EBAu, 1);  /* 0C074EB8 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C074DCAu, 3); goto L_0C074DCA; }  /* 0C074EBA bra */
L_0C074EC0: BLKS(0x0C074EC0u);
	r7 = 0xB4u; UPD(0x0C074EC2u, 1);  /* 0C074EC0 mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C074EC2 mov #imm,Rn */
	IF(0x0C074EC4u); MACL = r8 * r7;  /* 0C074EC4 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C074EC8u, 4);  /* 0C074EC6 mov.l @(disp,pc),Rn */
	IF(0x0C074EC8u); r0 = MACL;  /* 0C074EC8 sts macl,Rn */
	{ IF(0x0C074ECCu); W32(r0 + r5, r6); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C074E18u, 4); goto L_0C074E18; }  /* 0C074ECA bra */
L_0C074F00: BLKS(0x0C074F00u);
	r9 = 0xC0A03F0u; UPD(0x0C074F02u, 1);  /* 0C074F00 mov.l @(disp,pc),Rn */
	IF(0x0C074F02u); { u32 t_ = r9; PR = 0x0C074F06u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C074F06u); }  /* 0C074F02 jsr @Rn */
L_0C074F06: BLKS(0x0C074F06u);
	IF(0x0C074F06u); T = (s32)r0 >= 0;  /* 0C074F06 cmp/pz Rn */
	if (!T) { UPD(0x0C074F1Eu, 4); goto L_0C074F1E; }  /* 0C074F08 bf */
L_0C074F0A: BLKS(0x0C074F0Au);
	r12 = 0xB4u; UPD(0x0C074F0Cu, 1);  /* 0C074F0A mov.w @(disp,pc),Rn */
	IF(0x0C074F0Cu); MACL = r0 * r12;  /* 0C074F0C mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C074F10u, 3);  /* 0C074F0E mov.l @(disp,pc),Rn */
	IF(0x0C074F10u); r4 = MACL;  /* 0C074F10 sts macl,Rn */
	r0 = 0xA5u; UPD(0x0C074F14u, 2);  /* 0C074F12 mov.w @(disp,pc),Rn */
	r4 += r3;  /* 0C074F14 add Rm,Rn */
	r4 += r0;  /* 0C074F16 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C074F1Au, 3);  /* 0C074F18 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C074F1A add #imm,Rn */
	W8(r4, r2); UPD(0x0C074F1Eu, 2);  /* 0C074F1C mov.b Rm,@Rn */
L_0C074F1E: BLKS(0x0C074F1Eu);
	r2 = 0xB4u; UPD(0x0C074F20u, 1);  /* 0C074F1E mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C074F20 add #imm,Rn */
	IF(0x0C074F22u); MACL = r8 * r2;  /* 0C074F22 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C074F26u, 4);  /* 0C074F24 mov.l @(disp,pc),Rn */
	IF(0x0C074F26u); r11 = MACL;  /* 0C074F26 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C074F2Au, 2);  /* 0C074F28 mov.w @(disp,pc),Rn */
	r11 += r4;  /* 0C074F2A add Rm,Rn */
	IF(0x0C074F2Cu); r9 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C074F2Eu, 2);  /* 0C074F2C mov.b @(r0,Rm),Rn */
	r8 = 0x0u;  /* 0C074F2E mov #imm,Rn */
	r7 = r9 & 0xFF;  /* 0C074F30 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C074F34u, 3);  /* 0C074F32 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C074F34 add #imm,Rn */
	IF(0x0C074F36u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C074F38u, 2);  /* 0C074F36 mov.b @(r0,Rm),Rn */
	r10 = 0xC0AB240u; UPD(0x0C074F3Au, 1);  /* 0C074F38 mov.l @(disp,pc),Rn */
	r5 = r6 & 0xFF;  /* 0C074F3A extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C074F3Eu, 2);  /* 0C074F3C mov.l Rm,@(disp,Rn) */
	r5 = 0xCu;  /* 0C074F3E mov #imm,Rn */
	r4 = R32(r11); UPD(0x0C074F42u, 2);  /* 0C074F40 mov.l @Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C074F44u, 1);  /* 0C074F42 mov.l @(disp,Rm),Rn */
	IF(0x0C074F44u); { u32 t_ = r10; PR = 0x0C074F48u; r7 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C074F48u); }  /* 0C074F44 jsr @Rn */
L_0C074F48: BLKS(0x0C074F48u);
	W32(r11, r8); UPD(0x0C074F4Au, 1);  /* 0C074F48 mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C074E18u, 3); goto L_0C074E18; }  /* 0C074F4A bra */
L_0C074F50: BLKS(0x0C074F50u);
	r3 = 0xB4u; UPD(0x0C074F52u, 1);  /* 0C074F50 mov.w @(disp,pc),Rn */
	IF(0x0C074F52u); MACL = r8 * r3;  /* 0C074F52 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C074F56u, 3);  /* 0C074F54 mov.l @(disp,pc),Rn */
	IF(0x0C074F56u); r8 = MACL;  /* 0C074F56 sts macl,Rn */
	r8 += r0;  /* 0C074F58 add Rm,Rn */
	r4 = R32(r8); UPD(0x0C074F5Cu, 3);  /* 0C074F5A mov.l @Rm,Rn */
	r9 = 0x4000u; UPD(0x0C074F5Eu, 1);  /* 0C074F5C mov.w @(disp,pc),Rn */
	r9 &= r4;  /* 0C074F5E and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C074F60 tst Rm,Rn */
	if (T) { UPD(0x0C074F70u, 5); goto L_0C074F70; }  /* 0C074F62 bt */
L_0C074F64: BLKS(0x0C074F64u);
	r10 = 0xFFFFBFFFu; UPD(0x0C074F66u, 1);  /* 0C074F64 mov.w @(disp,pc),Rn */
	r4 &= r10;  /* 0C074F66 and Rm,Rn */
	{ W32(r8, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C074E18u, 4); goto L_0C074E18; }  /* 0C074F68 bra */
L_0C074F70: BLKS(0x0C074F70u);
	r0 = 0xB0u; UPD(0x0C074F72u, 1);  /* 0C074F70 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C074F72 add #imm,Rn */
	IF(0x0C074F74u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C074F76u, 2);  /* 0C074F74 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C074F76 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C074F7Au, 2);  /* 0C074F78 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C074F7A add #imm,Rn */
	IF(0x0C074F7Cu); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C074F7Eu, 2);  /* 0C074F7C mov.b @(r0,Rm),Rn */
	r12 = 0xC0AB240u; UPD(0x0C074F80u, 1);  /* 0C074F7E mov.l @(disp,pc),Rn */
	r5 = r11 & 0xFF;  /* 0C074F80 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C074F84u, 2);  /* 0C074F82 mov.l Rm,@(disp,Rn) */
	r5 = 0x2u;  /* 0C074F84 mov #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C074F88u, 2);  /* 0C074F86 mov.l @(disp,Rm),Rn */
	IF(0x0C074F88u); { u32 t_ = r12; PR = 0x0C074F8Cu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C074F8Cu); }  /* 0C074F88 jsr @Rn */
L_0C074F8C: BLKS(0x0C074F8Cu);
	W32(r8, r9); UPD(0x0C074F8Eu, 1);  /* 0C074F8C mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C074E18u, 3); goto L_0C074E18; }  /* 0C074F8E bra */
L_0C074FB0: BLKS(0x0C074FB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C074FB2u, 1);  /* 0C074FB0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C074FB4u, 1);  /* 0C074FB2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C074FB6u, 1);  /* 0C074FB4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C074FB8u, 1);  /* 0C074FB6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C074FBAu, 1);  /* 0C074FB8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C074FBA exts.w Rm,Rn */
	r3 = 0xB4u; UPD(0x0C074FBEu, 2);  /* 0C074FBC mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C074FC0u, 1);  /* 0C074FBE mov.l Rm,@-Rn */
	IF(0x0C074FC0u); MACL = r11 * r3;  /* 0C074FC0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C074FC4u, 3);  /* 0C074FC2 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C074FC6u, 1);  /* 0C074FC4 mov.l @(disp,pc),Rn */
	IF(0x0C074FC6u); r2 = MACL;  /* 0C074FC6 sts macl,Rn */
	IF(0x0C074FC8u); r15 -= 4; W32(r15, PR); UPD(0x0C074FCAu, 2);  /* 0C074FC8 sts.l pr,@-Rn */
	r0 += r2;  /* 0C074FCA add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C074FCEu, 2);  /* 0C074FCC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C074FCE add #imm,Rn */
	r0 = 0x16u;  /* 0C074FD0 mov #imm,Rn */
	T = r2 > r0;  /* 0C074FD2 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07503Cu, 6); goto L_0C07503C; } goto L_0C074FD8; }  /* 0C074FD4 bt/s */
L_0C074FD8: BLKS(0x0C074FD8u);
	r0 = 0xC074FE8u;  /* 0C074FD8 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C074FDA add Rm,Rn */
	IF(0x0C074FDCu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C074FDEu, 4);  /* 0C074FDC mov.w @(r0,Rm),Rn */
	IF(0x0C074FDEu); { u32 tv_ = (r4 + 0x0C074FE2u); u32 t_ = PHYS(tv_); IF(0x0C074FE0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C075020u: goto L_0C075020; case 0x0C075060u: goto L_0C075060; case 0x0C0750B0u: goto L_0C0750B0; case 0x0C0750D0u: goto L_0C0750D0; case 0x0C0750F0u: goto L_0C0750F0; case 0x0C075110u: goto L_0C075110; case 0x0C075130u: goto L_0C075130; case 0x0C075250u: goto L_0C075250; case 0x0C075320u: goto L_0C075320; case 0x0C075470u: goto L_0C075470; case 0x0C075490u: goto L_0C075490; case 0x0C0755C0u: goto L_0C0755C0; case 0x0C075690u: goto L_0C075690; case 0x0C075720u: goto L_0C075720; default: JUMPD(tv_); } }  /* 0C074FDE braf Rn */
L_0C075020: BLKS(0x0C075020u);
	r7 = 0xB4u; UPD(0x0C075022u, 1);  /* 0C075020 mov.w @(disp,pc),Rn */
	IF(0x0C075022u); MACL = r11 * r7;  /* 0C075022 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C075026u, 3);  /* 0C075024 mov.l @(disp,pc),Rn */
	IF(0x0C075026u); r3 = MACL;  /* 0C075026 sts macl,Rn */
	r3 += r6;  /* 0C075028 add Rm,Rn */
	r1 = R32(r3 + 0x24u); UPD(0x0C07502Cu, 3);  /* 0C07502A mov.l @(disp,Rm),Rn */
	r5 = 0x3FFFFFu; UPD(0x0C07502Eu, 1);  /* 0C07502C mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r5;  /* 0C07502E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C07503Cu, 4); goto L_0C07503C; }  /* 0C075030 bt */
L_0C075032: BLKS(0x0C075032u);
	r8 = R32(r3); UPD(0x0C075034u, 1);  /* 0C075032 mov.l @Rm,Rn */
	r9 = 0xFFFFFEFFu; UPD(0x0C075036u, 1);  /* 0C075034 mov.w @(disp,pc),Rn */
	r8 &= r9;  /* 0C075036 and Rm,Rn */
	W32(r3, r8); UPD(0x0C07503Au, 2);  /* 0C075038 mov.l Rm,@Rn */
	IF(0x0C07503Au); ;  /* 0C07503A nop */
	UPD(0x0C07503Cu, 1);
L_0C07503C: BLKS(0x0C07503Cu);
	r14 += 0x4u;  /* 0C07503C add #imm,Rn */
	UPD(0x0C07503Eu, 1);
L_0C07503E: BLKS(0x0C07503Eu);
	r15 = r14;  /* 0C07503E mov Rm,Rn */
	IF(0x0C075040u); PR = R32(r15); r15 += 4; UPD(0x0C075042u, 2);  /* 0C075040 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C075044u, 1);  /* 0C075042 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C075046u, 1);  /* 0C075044 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C075048u, 1);  /* 0C075046 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07504Au, 1);  /* 0C075048 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07504Cu, 1);  /* 0C07504A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07504Eu, 1);  /* 0C07504C mov.l @Rm+,Rn */
	IF(0x0C07504Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07504E rts */
L_0C075060: BLKS(0x0C075060u);
	r13 = 0xC0A03F0u; UPD(0x0C075062u, 1);  /* 0C075060 mov.l @(disp,pc),Rn */
	IF(0x0C075062u); { u32 t_ = r13; PR = 0x0C075066u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C075066u); }  /* 0C075062 jsr @Rn */
L_0C075066: BLKS(0x0C075066u);
	IF(0x0C075066u); T = (s32)r0 >= 0;  /* 0C075066 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075090u, 4); goto L_0C075090; } goto L_0C07506C; }  /* 0C075068 bf/s */
L_0C07506C: BLKS(0x0C07506Cu);
	r1 = 0xC072110u; UPD(0x0C07506Eu, 2);  /* 0C07506C mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07506E mov Rm,Rn */
	UPD(0x0C075070u, 1);
L_0C075070: BLKS(0x0C075070u);
	r14 += 0x4u;  /* 0C075070 add #imm,Rn */
	r15 = r14;  /* 0C075072 mov Rm,Rn */
	IF(0x0C075074u); PR = R32(r15); r15 += 4; UPD(0x0C075076u, 3);  /* 0C075074 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C075078u, 1);  /* 0C075076 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07507Au, 1);  /* 0C075078 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07507Cu, 1);  /* 0C07507A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07507Eu, 1);  /* 0C07507C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C075080u, 1);  /* 0C07507E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C075082u, 1);  /* 0C075080 mov.l @Rm+,Rn */
	IF(0x0C075082u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C072530u: goto L_0C072530; case 0x0C072660u: goto L_0C072660; default: JUMPD(tv_); } }  /* 0C075082 jmp @Rn */
L_0C075090: BLKS(0x0C075090u);
	r2 = 0xC074CD0u; UPD(0x0C075092u, 1);  /* 0C075090 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C075092 mov Rm,Rn */
	r14 += 0x4u;  /* 0C075094 add #imm,Rn */
	r15 = r14;  /* 0C075096 mov Rm,Rn */
	IF(0x0C075098u); PR = R32(r15); r15 += 4; UPD(0x0C07509Au, 4);  /* 0C075098 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07509Cu, 1);  /* 0C07509A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07509Eu, 1);  /* 0C07509C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0750A0u, 1);  /* 0C07509E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0750A2u, 1);  /* 0C0750A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0750A4u, 1);  /* 0C0750A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0750A6u, 1);  /* 0C0750A4 mov.l @Rm+,Rn */
	IF(0x0C0750A6u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C074CD0u: goto L_0C074CD0; default: JUMPD(tv_); } }  /* 0C0750A6 jmp @Rn */
L_0C0750B0: BLKS(0x0C0750B0u);
	r8 = 0xC0A03F0u; UPD(0x0C0750B2u, 1);  /* 0C0750B0 mov.l @(disp,pc),Rn */
	IF(0x0C0750B2u); { u32 t_ = r8; PR = 0x0C0750B6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0750B6u); }  /* 0C0750B2 jsr @Rn */
L_0C0750B6: BLKS(0x0C0750B6u);
	IF(0x0C0750B6u); T = (s32)r0 >= 0;  /* 0C0750B6 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075090u, 4); goto L_0C075090; } goto L_0C0750BC; }  /* 0C0750B8 bf/s */
L_0C0750BC: BLKS(0x0C0750BCu);
	r1 = 0xC0722D0u; UPD(0x0C0750BEu, 2);  /* 0C0750BC mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C075070u, 3); goto L_0C075070; }  /* 0C0750BE bra */
L_0C0750D0: BLKS(0x0C0750D0u);
	r12 = 0xC0A03F0u; UPD(0x0C0750D2u, 1);  /* 0C0750D0 mov.l @(disp,pc),Rn */
	IF(0x0C0750D2u); { u32 t_ = r12; PR = 0x0C0750D6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0750D6u); }  /* 0C0750D2 jsr @Rn */
L_0C0750D6: BLKS(0x0C0750D6u);
	IF(0x0C0750D6u); T = (s32)r0 >= 0;  /* 0C0750D6 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075090u, 4); goto L_0C075090; } goto L_0C0750DC; }  /* 0C0750D8 bf/s */
L_0C0750DC: BLKS(0x0C0750DCu);
	r1 = 0xC071D20u; UPD(0x0C0750DEu, 2);  /* 0C0750DC mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C075070u, 3); goto L_0C075070; }  /* 0C0750DE bra */
L_0C0750F0: BLKS(0x0C0750F0u);
	r9 = 0xC0A03F0u; UPD(0x0C0750F2u, 1);  /* 0C0750F0 mov.l @(disp,pc),Rn */
	IF(0x0C0750F2u); { u32 t_ = r9; PR = 0x0C0750F6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0750F6u); }  /* 0C0750F2 jsr @Rn */
L_0C0750F6: BLKS(0x0C0750F6u);
	IF(0x0C0750F6u); T = (s32)r0 >= 0;  /* 0C0750F6 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075090u, 4); goto L_0C075090; } goto L_0C0750FC; }  /* 0C0750F8 bf/s */
L_0C0750FC: BLKS(0x0C0750FCu);
	r1 = 0xC071F40u; UPD(0x0C0750FEu, 2);  /* 0C0750FC mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C075070u, 3); goto L_0C075070; }  /* 0C0750FE bra */
L_0C075110: BLKS(0x0C075110u);
	r10 = 0xC0A03F0u; UPD(0x0C075112u, 1);  /* 0C075110 mov.l @(disp,pc),Rn */
	IF(0x0C075112u); { u32 t_ = r10; PR = 0x0C075116u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C075116u); }  /* 0C075112 jsr @Rn */
L_0C075116: BLKS(0x0C075116u);
	IF(0x0C075116u); T = (s32)r0 >= 0;  /* 0C075116 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075090u, 4); goto L_0C075090; } goto L_0C07511C; }  /* 0C075118 bf/s */
L_0C07511C: BLKS(0x0C07511Cu);
	r1 = 0xC071B10u; UPD(0x0C07511Eu, 2);  /* 0C07511C mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C075070u, 3); goto L_0C075070; }  /* 0C07511E bra */
L_0C075130: BLKS(0x0C075130u);
	r13 = 0xC0A03F0u; UPD(0x0C075132u, 1);  /* 0C075130 mov.l @(disp,pc),Rn */
	IF(0x0C075132u); { u32 t_ = r13; PR = 0x0C075136u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C075136u); }  /* 0C075132 jsr @Rn */
L_0C075136: BLKS(0x0C075136u);
	IF(0x0C075136u); T = (s32)r0 >= 0;  /* 0C075136 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075090u, 4); goto L_0C075090; } goto L_0C07513C; }  /* 0C075138 bf/s */
L_0C07513C: BLKS(0x0C07513Cu);
	r0 = 0xB4u; UPD(0x0C07513Eu, 2);  /* 0C07513C mov.w @(disp,pc),Rn */
	IF(0x0C07513Eu); MACL = r11 * r0;  /* 0C07513E mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C075142u, 3);  /* 0C075140 mov.l @(disp,pc),Rn */
	IF(0x0C075142u); r10 = MACL;  /* 0C075142 sts macl,Rn */
	r10 += r4;  /* 0C075144 add Rm,Rn */
	IF(0x0C075146u); MACL = r5 * r0;  /* 0C075146 mul.l Rm,Rn */
	r12 = R32(r10); UPD(0x0C07514Au, 5);  /* 0C075148 mov.l @Rm,Rn */
	r8 = 0xFFFFFEFFu; UPD(0x0C07514Cu, 1);  /* 0C07514A mov.w @(disp,pc),Rn */
	r0 += 0x4Cu;  /* 0C07514C add #imm,Rn */
	r12 &= r8;  /* 0C07514E and Rm,Rn */
	IF(0x0C075150u); r8 = MACL;  /* 0C075150 sts macl,Rn */
	r8 += r4;  /* 0C075152 add Rm,Rn */
	r6 = R32(r8); UPD(0x0C075156u, 5);  /* 0C075154 mov.l @Rm,Rn */
	r6 &= r0;  /* 0C075156 and Rm,Rn */
	r12 |= r6;  /* 0C075158 or Rm,Rn */
	W32(r10, r12); UPD(0x0C07515Cu, 3);  /* 0C07515A mov.l Rm,@Rn */
	r3 = 0x84u; UPD(0x0C07515Eu, 1);  /* 0C07515C mov.w @(disp,pc),Rn */
	r12 = r10;  /* 0C07515E mov Rm,Rn */
	r12 += r3;  /* 0C075160 add Rm,Rn */
	r3 += r8;  /* 0C075162 add Rm,Rn */
	r3 += 0x2u;  /* 0C075164 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r3); UPD(0x0C075168u, 5);  /* 0C075166 mov.w @Rm,Rn */
	r12 += 0x2u;  /* 0C075168 add #imm,Rn */
	W16(r12, r9); UPD(0x0C07516Cu, 2);  /* 0C07516A mov.w Rm,@Rn */
	r13 = 0x98u; UPD(0x0C07516Eu, 1);  /* 0C07516C mov.w @(disp,pc),Rn */
	r9 = r10;  /* 0C07516E mov Rm,Rn */
	r9 += r13;  /* 0C075170 add Rm,Rn */
	r4 = R32(r8 + 0xCu); UPD(0x0C075174u, 3);  /* 0C075172 mov.l @(disp,Rm),Rn */
	r13 += r8;  /* 0C075174 add Rm,Rn */
	r13 += 0x2u;  /* 0C075176 add #imm,Rn */
	r0 = 0xC0A0380u; UPD(0x0C07517Au, 3);  /* 0C075178 mov.l @(disp,pc),Rn */
	r9 += 0x2u;  /* 0C07517A add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C07517Eu, 2);  /* 0C07517C mov.b @Rm,Rn */
	W32(r10 + 0xCu, r4); UPD(0x0C075180u, 1);  /* 0C07517E mov.l Rm,@(disp,Rn) */
	W8(r9, r2); UPD(0x0C075182u, 1);  /* 0C075180 mov.b Rm,@Rn */
	IF(0x0C075182u); { u32 t_ = r0; PR = 0x0C075186u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C075186u); }  /* 0C075182 jsr @Rn */
L_0C075186: BLKS(0x0C075186u);
	r0 = 0x88u; UPD(0x0C075188u, 1);  /* 0C075186 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r12); UPD(0x0C07518Au, 1);  /* 0C075188 mov.w @Rm,Rn */
	IF(0x0C07518Au); r1 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C07518Cu, 1);  /* 0C07518A mov.w @(r0,Rm),Rn */
	r7 = 0xC058060u; UPD(0x0C07518Eu, 1);  /* 0C07518C mov.l @(disp,pc),Rn */
	r5 += r1;  /* 0C07518E add Rm,Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C075190 exts.w Rm,Rn */
	r4 = r11;  /* 0C075192 mov Rm,Rn */
	IF(0x0C075194u); { u32 t_ = r7; PR = 0x0C075198u; r5 = R32(r10 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C075198u); }  /* 0C075194 jsr @Rn */
L_0C075198: BLKS(0x0C075198u);
	r6 = R32(r8 + 0x24u); UPD(0x0C07519Au, 1);  /* 0C075198 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C07519A mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C07519Eu, 2);  /* 0C07519C mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C07519E add Rm,Rn */
	W32(r10 + 0x24u, r6); UPD(0x0C0751A2u, 2);  /* 0C0751A0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0751A2u); { u32 t_ = r13; PR = 0x0C0751A6u; r5 = R32(r10 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0751A6u); }  /* 0C0751A2 jsr @Rn */
L_0C0751A6: BLKS(0x0C0751A6u);
	r3 = R32(r8 + 0x28u); UPD(0x0C0751A8u, 1);  /* 0C0751A6 mov.l @(disp,Rm),Rn */
	r11 = (u32)(s32)(s8)R8(r9); UPD(0x0C0751AAu, 1);  /* 0C0751A8 mov.b @Rm,Rn */
	r3 += r0;  /* 0C0751AA add Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C0751AC tst Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0751F4u, 5); goto L_0C0751F4; } UPD(0x0C0751B2u, 1); goto L_0C0751B2; }  /* 0C0751AE bt/s */
L_0C0751B2: BLKS(0x0C0751B2u);
	r11 = (u32)(s32)(s16)R16(r12); UPD(0x0C0751B4u, 1);  /* 0C0751B2 mov.w @Rm,Rn */
	r1 = 0xC058060u; UPD(0x0C0751B6u, 1);  /* 0C0751B4 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0751B6 mov Rm,Rn */
	r12 = 0xC0000u; UPD(0x0C0751BAu, 2);  /* 0C0751B8 mov.l @(disp,pc),Rn */
	IF(0x0C0751BAu); { u32 t_ = r1; PR = 0x0C0751BEu; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0751BEu); }  /* 0C0751BA jsr @Rn */
L_0C0751BE: BLKS(0x0C0751BEu);
	r9 = R32(r10 + 0x24u); UPD(0x0C0751C0u, 1);  /* 0C0751BE mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C0751C0 mov Rm,Rn */
	r9 += r0;  /* 0C0751C2 add Rm,Rn */
	IF(0x0C0751C4u); { u32 t_ = r13; PR = 0x0C0751C8u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0751C8u); }  /* 0C0751C4 jsr @Rn */
L_0C0751C8: BLKS(0x0C0751C8u);
	r8 = R32(r10 + 0x28u); UPD(0x0C0751CAu, 1);  /* 0C0751C8 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0751CA mov Rm,Rn */
	r8 += r0;  /* 0C0751CC add Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0751D0u, 3);  /* 0C0751CE mov.w @(disp,pc),Rn */
	r5 = r8;  /* 0C0751D0 mov Rm,Rn */
	r13 = 0xC0A9BB0u; UPD(0x0C0751D4u, 2);  /* 0C0751D2 mov.l @(disp,pc),Rn */
	IF(0x0C0751D4u); r7 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0751D6u, 1);  /* 0C0751D4 mov.b @(r0,Rm),Rn */
	IF(0x0C0751D6u); { u32 t_ = r13; PR = 0x0C0751DAu; r6 = r7 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0751DAu); }  /* 0C0751D6 jsr @Rn */
L_0C0751DA: BLKS(0x0C0751DAu);
	T = (r0 & r0) == 0;  /* 0C0751DA tst Rm,Rn */
	if (T) { UPD(0x0C0751F4u, 4); goto L_0C0751F4; }  /* 0C0751DC bt */
L_0C0751DE: BLKS(0x0C0751DEu);
	r15 += 0xFFFFFFFCu;  /* 0C0751DE add #imm,Rn */
	r0 = 0xA1u; UPD(0x0C0751E2u, 2);  /* 0C0751E0 mov.w @(disp,pc),Rn */
	r5 = R32(r10 + 0x30u); UPD(0x0C0751E4u, 1);  /* 0C0751E2 mov.l @(disp,Rm),Rn */
	r6 = r8;  /* 0C0751E4 mov Rm,Rn */
	IF(0x0C0751E6u); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0751E8u, 2);  /* 0C0751E6 mov.b @(r0,Rm),Rn */
	r7 = r11;  /* 0C0751E8 mov Rm,Rn */
	r10 = 0xC0A8E70u; UPD(0x0C0751ECu, 2);  /* 0C0751EA mov.l @(disp,pc),Rn */
	W32(r15, r5); UPD(0x0C0751EEu, 1);  /* 0C0751EC mov.l Rm,@Rn */
	IF(0x0C0751EEu); { u32 t_ = r10; PR = 0x0C0751F2u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8E70, 0x0C0A8E70u, 0x0C0751F2u); }  /* 0C0751EE jsr @Rn */
L_0C0751F2: BLKS(0x0C0751F2u);
	r15 += 0x4u;  /* 0C0751F2 add #imm,Rn */
	UPD(0x0C0751F4u, 1);
L_0C0751F4: BLKS(0x0C0751F4u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07503Eu, 3); goto L_0C07503E; }  /* 0C0751F4 bra */
L_0C075250: BLKS(0x0C075250u);
	r8 = 0xC0A03F0u; UPD(0x0C075252u, 1);  /* 0C075250 mov.l @(disp,pc),Rn */
	IF(0x0C075252u); { u32 t_ = r8; PR = 0x0C075256u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C075256u); }  /* 0C075252 jsr @Rn */
L_0C075256: BLKS(0x0C075256u);
	IF(0x0C075256u); T = (s32)r0 >= 0;  /* 0C075256 cmp/pz Rn */
	if (!T) { UPD(0x0C07532Cu, 4); goto L_0C07532C; }  /* 0C075258 bf */
L_0C07525A: BLKS(0x0C07525Au);
	r4 = 0xB4u; UPD(0x0C07525Cu, 1);  /* 0C07525A mov.w @(disp,pc),Rn */
	IF(0x0C07525Cu); MACL = r11 * r4;  /* 0C07525C mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C075260u, 3);  /* 0C07525E mov.l @(disp,pc),Rn */
	IF(0x0C075260u); r10 = MACL;  /* 0C075260 sts macl,Rn */
	r10 += r13;  /* 0C075262 add Rm,Rn */
	IF(0x0C075264u); MACL = r0 * r4;  /* 0C075264 mul.l Rm,Rn */
	r12 = R32(r10); UPD(0x0C075268u, 5);  /* 0C075266 mov.l @Rm,Rn */
	r8 = 0xFFFFFEFFu; UPD(0x0C07526Au, 1);  /* 0C075268 mov.w @(disp,pc),Rn */
	r4 += 0x4Cu;  /* 0C07526A add #imm,Rn */
	r12 &= r8;  /* 0C07526C and Rm,Rn */
	IF(0x0C07526Eu); r8 = MACL;  /* 0C07526E sts macl,Rn */
	r8 += r13;  /* 0C075270 add Rm,Rn */
	r6 = R32(r8); UPD(0x0C075274u, 5);  /* 0C075272 mov.l @Rm,Rn */
	r6 &= r4;  /* 0C075274 and Rm,Rn */
	r12 |= r6;  /* 0C075276 or Rm,Rn */
	W32(r10, r12); UPD(0x0C07527Au, 3);  /* 0C075278 mov.l Rm,@Rn */
	r4 = r11;  /* 0C07527A mov Rm,Rn */
	r3 = 0x84u; UPD(0x0C07527Eu, 2);  /* 0C07527C mov.w @(disp,pc),Rn */
	r12 = r10;  /* 0C07527E mov Rm,Rn */
	r12 += r3;  /* 0C075280 add Rm,Rn */
	r3 += r8;  /* 0C075282 add Rm,Rn */
	r3 += 0x2u;  /* 0C075284 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r3); UPD(0x0C075288u, 5);  /* 0C075286 mov.w @Rm,Rn */
	r12 += 0x2u;  /* 0C075288 add #imm,Rn */
	W16(r12, r9); UPD(0x0C07528Cu, 2);  /* 0C07528A mov.w Rm,@Rn */
	r2 = 0x98u; UPD(0x0C07528Eu, 1);  /* 0C07528C mov.w @(disp,pc),Rn */
	r9 = r10;  /* 0C07528E mov Rm,Rn */
	r9 += r2;  /* 0C075290 add Rm,Rn */
	r2 += r8;  /* 0C075292 add Rm,Rn */
	r2 += 0x2u;  /* 0C075294 add #imm,Rn */
	r0 = 0xC0A0380u; UPD(0x0C075298u, 5);  /* 0C075296 mov.l @(disp,pc),Rn */
	r9 += 0x2u;  /* 0C075298 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C07529Cu, 2);  /* 0C07529A mov.b @Rm,Rn */
	r7 = R32(r8 + 0xCu); UPD(0x0C07529Eu, 1);  /* 0C07529C mov.l @(disp,Rm),Rn */
	W8(r9, r5); UPD(0x0C0752A0u, 1);  /* 0C07529E mov.b Rm,@Rn */
	IF(0x0C0752A0u); { u32 t_ = r0; PR = 0x0C0752A4u; W32(r10 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0752A4u); }  /* 0C0752A0 jsr @Rn */
L_0C0752A4: BLKS(0x0C0752A4u);
	r0 = 0x88u; UPD(0x0C0752A6u, 1);  /* 0C0752A4 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r12); UPD(0x0C0752A8u, 1);  /* 0C0752A6 mov.w @Rm,Rn */
	IF(0x0C0752A8u); r13 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C0752AAu, 1);  /* 0C0752A8 mov.w @(r0,Rm),Rn */
	r6 = 0xC058060u; UPD(0x0C0752ACu, 1);  /* 0C0752AA mov.l @(disp,pc),Rn */
	r4 += r13;  /* 0C0752AC add Rm,Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0752AE exts.w Rm,Rn */
	r4 = r11;  /* 0C0752B0 mov Rm,Rn */
	IF(0x0C0752B2u); { u32 t_ = r6; PR = 0x0C0752B6u; r5 = R32(r10 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0752B6u); }  /* 0C0752B2 jsr @Rn */
L_0C0752B6: BLKS(0x0C0752B6u);
	r3 = R32(r8 + 0x24u); UPD(0x0C0752B8u, 1);  /* 0C0752B6 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C0752B8 mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C0752BCu, 2);  /* 0C0752BA mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0752BC add Rm,Rn */
	W32(r10 + 0x24u, r3); UPD(0x0C0752C0u, 2);  /* 0C0752BE mov.l Rm,@(disp,Rn) */
	IF(0x0C0752C0u); { u32 t_ = r13; PR = 0x0C0752C4u; r5 = R32(r10 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0752C4u); }  /* 0C0752C0 jsr @Rn */
L_0C0752C4: BLKS(0x0C0752C4u);
	r2 = R32(r8 + 0x28u); UPD(0x0C0752C6u, 1);  /* 0C0752C4 mov.l @(disp,Rm),Rn */
	r11 = (u32)(s32)(s8)R8(r9); UPD(0x0C0752C8u, 1);  /* 0C0752C6 mov.b @Rm,Rn */
	r2 += r0;  /* 0C0752C8 add Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C0752CA tst Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x28u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0751F4u, 5); goto L_0C0751F4; } UPD(0x0C0752D0u, 1); goto L_0C0752D0; }  /* 0C0752CC bt/s */
L_0C0752D0: BLKS(0x0C0752D0u);
	r11 = (u32)(s32)(s16)R16(r12); UPD(0x0C0752D2u, 1);  /* 0C0752D0 mov.w @Rm,Rn */
	r7 = 0xC058060u; UPD(0x0C0752D4u, 1);  /* 0C0752D2 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0752D4 mov Rm,Rn */
	r12 = 0xC0000u; UPD(0x0C0752D8u, 2);  /* 0C0752D6 mov.l @(disp,pc),Rn */
	IF(0x0C0752D8u); { u32 t_ = r7; PR = 0x0C0752DCu; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0752DCu); }  /* 0C0752D8 jsr @Rn */
L_0C0752DC: BLKS(0x0C0752DCu);
	r9 = R32(r10 + 0x24u); UPD(0x0C0752DEu, 1);  /* 0C0752DC mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C0752DE mov Rm,Rn */
	r9 += r0;  /* 0C0752E0 add Rm,Rn */
	IF(0x0C0752E2u); { u32 t_ = r13; PR = 0x0C0752E6u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0752E6u); }  /* 0C0752E2 jsr @Rn */
L_0C0752E6: BLKS(0x0C0752E6u);
	r8 = R32(r10 + 0x28u); UPD(0x0C0752E8u, 1);  /* 0C0752E6 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0752E8 mov Rm,Rn */
	r8 += r0;  /* 0C0752EA add Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0752EEu, 3);  /* 0C0752EC mov.w @(disp,pc),Rn */
	r5 = r8;  /* 0C0752EE mov Rm,Rn */
	IF(0x0C0752F0u); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0752F2u, 2);  /* 0C0752F0 mov.b @(r0,Rm),Rn */
	r10 = 0xC0A9BB0u; UPD(0x0C0752F4u, 1);  /* 0C0752F2 mov.l @(disp,pc),Rn */
	IF(0x0C0752F4u); { u32 t_ = r10; PR = 0x0C0752F8u; r6 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0752F8u); }  /* 0C0752F4 jsr @Rn */
L_0C0752F8: BLKS(0x0C0752F8u);
	T = (r0 & r0) == 0;  /* 0C0752F8 tst Rm,Rn */
	if (T) { UPD(0x0C075314u, 4); goto L_0C075314; }  /* 0C0752FA bt */
L_0C0752FC: BLKS(0x0C0752FCu);
	r7 = r11;  /* 0C0752FC mov Rm,Rn */
	r5 = 0x30000u; UPD(0x0C075300u, 2);  /* 0C0752FE mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C075300 add #imm,Rn */
	r0 = 0xC186C0Au; UPD(0x0C075304u, 2);  /* 0C075302 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C075304 mov #imm,Rn */
	r11 = 0xC0A8850u; UPD(0x0C075308u, 2);  /* 0C075306 mov.l @(disp,pc),Rn */
	r6 = r8;  /* 0C075308 mov Rm,Rn */
	W32(r15, r5); UPD(0x0C07530Cu, 2);  /* 0C07530A mov.l Rm,@Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C07530Eu, 1);  /* 0C07530C mov.l Rm,@(disp,Rn) */
	IF(0x0C07530Eu); { u32 t_ = r11; PR = 0x0C075312u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8850, 0x0C0A8850u, 0x0C075312u); }  /* 0C07530E jsr @Rn */
L_0C075312: BLKS(0x0C075312u);
	r15 += 0x8u;  /* 0C075312 add #imm,Rn */
	UPD(0x0C075314u, 1);
L_0C075314: BLKS(0x0C075314u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07503Eu, 3); goto L_0C07503E; }  /* 0C075314 bra */
L_0C075320: BLKS(0x0C075320u);
	r9 = 0xC0A03F0u; UPD(0x0C075322u, 1);  /* 0C075320 mov.l @(disp,pc),Rn */
	IF(0x0C075322u); { u32 t_ = r9; PR = 0x0C075326u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C075326u); }  /* 0C075322 jsr @Rn */
L_0C075326: BLKS(0x0C075326u);
	IF(0x0C075326u); T = (s32)r0 >= 0;  /* 0C075326 cmp/pz Rn */
	{ u32 c_ = T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075330u, 4); goto L_0C075330; } UPD(0x0C07532Cu, 1); goto L_0C07532C; }  /* 0C075328 bt/s */
L_0C07532C: BLKS(0x0C07532Cu);
	{ IF(0x0C07532Eu); ; /* slot nop */ UPD(0x0C075090u, 3); goto L_0C075090; }  /* 0C07532C bra */
L_0C075330: BLKS(0x0C075330u);
	r7 = 0xB4u; UPD(0x0C075332u, 1);  /* 0C075330 mov.w @(disp,pc),Rn */
	IF(0x0C075332u); MACL = r11 * r7;  /* 0C075332 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C075336u, 3);  /* 0C075334 mov.l @(disp,pc),Rn */
	IF(0x0C075336u); r13 = MACL;  /* 0C075336 sts macl,Rn */
	r13 += r0;  /* 0C075338 add Rm,Rn */
	r10 = R32(r13); UPD(0x0C07533Cu, 3);  /* 0C07533A mov.l @Rm,Rn */
	IF(0x0C07533Cu); MACL = r5 * r7;  /* 0C07533C mul.l Rm,Rn */
	r4 = 0xFFFFFEFFu; UPD(0x0C075340u, 3);  /* 0C07533E mov.w @(disp,pc),Rn */
	r3 = r13;  /* 0C075340 mov Rm,Rn */
	r10 &= r4;  /* 0C075342 and Rm,Rn */
	r8 = 0x84u; UPD(0x0C075346u, 3);  /* 0C075344 mov.w @(disp,pc),Rn */
	IF(0x0C075346u); r4 = MACL;  /* 0C075346 sts macl,Rn */
	r4 += r0;  /* 0C075348 add Rm,Rn */
	r3 += r8;  /* 0C07534A add Rm,Rn */
	r0 = 0xA1u; UPD(0x0C07534Eu, 4);  /* 0C07534C mov.w @(disp,pc),Rn */
	r8 += r4;  /* 0C07534E add Rm,Rn */
	r8 += 0x2u;  /* 0C075350 add #imm,Rn */
	r12 = R32(r4); UPD(0x0C075354u, 3);  /* 0C075352 mov.l @Rm,Rn */
	r7 += 0x4Cu;  /* 0C075354 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r8); UPD(0x0C075358u, 2);  /* 0C075356 mov.w @Rm,Rn */
	r3 += 0x2u;  /* 0C075358 add #imm,Rn */
	IF(0x0C07535Au); r6 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C07535Cu, 2);  /* 0C07535A mov.b @(r0,Rm),Rn */
	r12 &= r7;  /* 0C07535C and Rm,Rn */
	W16(r3, r2); UPD(0x0C075360u, 2);  /* 0C07535E mov.w Rm,@Rn */
	r0 += 0xFFFFFFFBu;  /* 0C075360 add #imm,Rn */
	r7 = 0x98u; UPD(0x0C075364u, 2);  /* 0C075362 mov.w @(disp,pc),Rn */
	r10 |= r12;  /* 0C075364 or Rm,Rn */
	IF(0x0C075366u); r0 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C075368u, 2);  /* 0C075366 mov.b @(r0,Rm),Rn */
	r2 = r13;  /* 0C075368 mov Rm,Rn */
	r2 += r7;  /* 0C07536A add Rm,Rn */
	r0 &= 0x1u;  /* 0C07536C and #imm,r0 */
	W32(r13, r10); UPD(0x0C075370u, 4);  /* 0C07536E mov.l Rm,@Rn */
	T = r6 == r0;  /* 0C075370 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r2 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07537Au, 4); goto L_0C07537A; } goto L_0C075376; }  /* 0C075372 bf/s */
L_0C075376: BLKS(0x0C075376u);
	{ r4 += r7; /* slot add Rm,Rn */ UPD(0x0C075460u, 4); goto L_0C075460; }  /* 0C075376 bra */
L_0C07537A: BLKS(0x0C07537Au);
	r0 = 0x0u;  /* 0C07537A mov #imm,Rn */
	UPD(0x0C07537Cu, 1);
L_0C07537C: BLKS(0x0C07537Cu);
	r13 = 0xB4u; UPD(0x0C07537Eu, 1);  /* 0C07537C mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C07537E mov Rm,Rn */
	IF(0x0C075380u); MACL = r11 * r13;  /* 0C075380 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C075384u, 4);  /* 0C075382 mov.l @(disp,pc),Rn */
	IF(0x0C075384u); r12 = MACL;  /* 0C075384 sts macl,Rn */
	IF(0x0C075386u); MACL = r5 * r13;  /* 0C075386 mul.l Rm,Rn */
	r11 = 0xC0A0380u; UPD(0x0C07538Au, 4);  /* 0C075388 mov.l @(disp,pc),Rn */
	r12 += r3;  /* 0C07538A add Rm,Rn */
	IF(0x0C07538Cu); r13 = MACL;  /* 0C07538C sts macl,Rn */
	r13 += r3;  /* 0C07538E add Rm,Rn */
	r6 = R32(r13 + 0xCu); UPD(0x0C075392u, 4);  /* 0C075390 mov.l @(disp,Rm),Rn */
	W8(r2, r0); UPD(0x0C075394u, 1);  /* 0C075392 mov.b Rm,@Rn */
	r9 = 0x86u; UPD(0x0C075396u, 1);  /* 0C075394 mov.w @(disp,pc),Rn */
	IF(0x0C075396u); { u32 t_ = r11; PR = 0x0C07539Au; W32(r12 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C07539Au); }  /* 0C075396 jsr @Rn */
L_0C07539A: BLKS(0x0C07539Au);
	r0 = r12;  /* 0C07539A mov Rm,Rn */
	IF(0x0C07539Cu); r11 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C07539Eu, 2);  /* 0C07539C mov.w @(r0,Rm),Rn */
	r9 += 0x14u;  /* 0C07539E add #imm,Rn */
	IF(0x0C0753A0u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0753A2u, 2);  /* 0C0753A0 mov.b @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C0753A2 tst Rm,Rn */
	if (!T) { UPD(0x0C075420u, 4); goto L_0C075420; }  /* 0C0753A4 bf */
L_0C0753A6: BLKS(0x0C0753A6u);
	r10 = 0xC058060u; UPD(0x0C0753A8u, 1);  /* 0C0753A6 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0753A8 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0753ACu, 2);  /* 0C0753AA mov.l @(disp,pc),Rn */
	IF(0x0C0753ACu); { u32 t_ = r10; PR = 0x0C0753B0u; r5 = R32(r12 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0753B0u); }  /* 0C0753AC jsr @Rn */
L_0C0753B0: BLKS(0x0C0753B0u);
	r8 = R32(r13 + 0x24u); UPD(0x0C0753B2u, 1);  /* 0C0753B0 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C0753B2 mov Rm,Rn */
	r8 += r0;  /* 0C0753B4 add Rm,Rn */
	IF(0x0C0753B6u); { u32 t_ = r9; PR = 0x0C0753BAu; r5 = R32(r12 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0753BAu); }  /* 0C0753B6 jsr @Rn */
L_0C0753BA: BLKS(0x0C0753BAu);
	r8 -= r0;  /* 0C0753BA sub Rm,Rn */
	r4 = r11;  /* 0C0753BC mov Rm,Rn */
	r5 = R32(r12 + 0x2Cu); UPD(0x0C0753C0u, 3);  /* 0C0753BE mov.l @(disp,Rm),Rn */
	IF(0x0C0753C0u); { u32 t_ = r9; PR = 0x0C0753C4u; W32(r12 + 0x24u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0753C4u); }  /* 0C0753C0 jsr @Rn */
L_0C0753C4: BLKS(0x0C0753C4u);
	r9 = R32(r13 + 0x28u); UPD(0x0C0753C6u, 1);  /* 0C0753C4 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C0753C6 mov Rm,Rn */
	r9 += r0;  /* 0C0753C8 add Rm,Rn */
	IF(0x0C0753CAu); { u32 t_ = r10; PR = 0x0C0753CEu; r5 = R32(r12 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0753CEu); }  /* 0C0753CA jsr @Rn */
L_0C0753CE: BLKS(0x0C0753CEu);
	r9 += r0;  /* 0C0753CE add Rm,Rn */
	r2 = R32(r12 + 0x2Cu); UPD(0x0C0753D2u, 2);  /* 0C0753D0 mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0753D2 tst Rm,Rn */
	{ u32 c_ = T; W32(r12 + 0x28u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C075314u, 4); goto L_0C075314; } UPD(0x0C0753D8u, 1); goto L_0C0753D8; }  /* 0C0753D4 bt/s */
L_0C0753D8: BLKS(0x0C0753D8u);
	r11 = 0x8000u; UPD(0x0C0753DAu, 1);  /* 0C0753D8 mov.l @(disp,pc),Rn */
	r2 += r11;  /* 0C0753DA add Rm,Rn */
	{ W32(r12 + 0x2Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07503Cu, 4); goto L_0C07503C; }  /* 0C0753DC bra */
L_0C075420: BLKS(0x0C075420u);
	r0 = 0xB0u; UPD(0x0C075422u, 1);  /* 0C075420 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C075422 add #imm,Rn */
	r3 = 0xFFF80000u; UPD(0x0C075426u, 2);  /* 0C075424 mov.l @(disp,pc),Rn */
	IF(0x0C075426u); r6 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C075428u, 1);  /* 0C075426 mov.b @(r0,Rm),Rn */
	W32(r12 + 0x2Cu, r3); UPD(0x0C07542Au, 1);  /* 0C075428 mov.l Rm,@(disp,Rn) */
	r9 = r6 & 0xFF;  /* 0C07542A extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C07542Eu, 2);  /* 0C07542C mov.l Rm,@Rn */
	r0 = r12;  /* 0C07542E mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C075432u, 2);  /* 0C075430 mov.w @(disp,pc),Rn */
	r10 = 0xC050D70u; UPD(0x0C075434u, 1);  /* 0C075432 mov.l @(disp,pc),Rn */
	IF(0x0C075434u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C075436u, 1);  /* 0C075434 mov.b @(r0,Rm),Rn */
	r7 = 0x8000u; UPD(0x0C075438u, 1);  /* 0C075436 mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFF;  /* 0C075438 extu.b Rm,Rn */
	W32(r15 + 0x8u, r7); UPD(0x0C07543Cu, 2);  /* 0C07543A mov.l Rm,@(disp,Rn) */
	r4 = 0x2000u; UPD(0x0C07543Eu, 1);  /* 0C07543C mov.w @(disp,pc),Rn */
	IF(0x0C07543Eu); { u32 t_ = r10; PR = 0x0C075442u; W32(r15 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C075442u); }  /* 0C07543E jsr @Rn */
L_0C075442: BLKS(0x0C075442u);
	r2 = 0x808080u; UPD(0x0C075444u, 1);  /* 0C075442 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C075444 mov #imm,Rn */
	r8 = 0xC0ACA40u; UPD(0x0C075448u, 2);  /* 0C075446 mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C07544Au, 1);  /* 0C075448 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r2); UPD(0x0C07544Cu, 1);  /* 0C07544A mov.l Rm,@(disp,Rn) */
	r4 = R32(r12); UPD(0x0C07544Eu, 1);  /* 0C07544C mov.l @Rm,Rn */
	r6 = R32(r12 + 0x24u); UPD(0x0C075450u, 1);  /* 0C07544E mov.l @(disp,Rm),Rn */
	IF(0x0C075450u); { u32 t_ = r8; PR = 0x0C075454u; r7 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C075454u); }  /* 0C075450 jsr @Rn */
L_0C075454: BLKS(0x0C075454u);
	{ r15 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C0753A6u, 3); goto L_0C0753A6; }  /* 0C075454 bra */
L_0C075460: BLKS(0x0C075460u);
	r4 += 0x2u;  /* 0C075460 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C075464u, 2);  /* 0C075462 mov.b @Rm,Rn */
	{ r0 &= 0x1u; /* slot and #imm,r0 */ UPD(0x0C07537Cu, 3); goto L_0C07537C; }  /* 0C075464 bra */
L_0C075470: BLKS(0x0C075470u);
	r12 = 0xC0A03F0u; UPD(0x0C075472u, 1);  /* 0C075470 mov.l @(disp,pc),Rn */
	IF(0x0C075472u); { u32 t_ = r12; PR = 0x0C075476u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C075476u); }  /* 0C075472 jsr @Rn */
L_0C075476: BLKS(0x0C075476u);
	IF(0x0C075476u); T = (s32)r0 >= 0;  /* 0C075476 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07549Au, 4); goto L_0C07549A; } goto L_0C07547C; }  /* 0C075478 bf/s */
L_0C07547C: BLKS(0x0C07547Cu);
	r1 = 0xC072660u; UPD(0x0C07547Eu, 2);  /* 0C07547C mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C075070u, 3); goto L_0C075070; }  /* 0C07547E bra */
L_0C075490: BLKS(0x0C075490u);
	r10 = 0xC0A03F0u; UPD(0x0C075492u, 1);  /* 0C075490 mov.l @(disp,pc),Rn */
	IF(0x0C075492u); { u32 t_ = r10; PR = 0x0C075496u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C075496u); }  /* 0C075492 jsr @Rn */
L_0C075496: BLKS(0x0C075496u);
	IF(0x0C075496u); T = (s32)r0 >= 0;  /* 0C075496 cmp/pz Rn */
	if (T) { UPD(0x0C07549Eu, 4); goto L_0C07549E; }  /* 0C075498 bt */
L_0C07549A: BLKS(0x0C07549Au);
	{ IF(0x0C07549Cu); ; /* slot nop */ UPD(0x0C075090u, 3); goto L_0C075090; }  /* 0C07549A bra */
L_0C07549E: BLKS(0x0C07549Eu);
	r13 = 0xB4u; UPD(0x0C0754A0u, 1);  /* 0C07549E mov.w @(disp,pc),Rn */
	IF(0x0C0754A0u); MACL = r11 * r13;  /* 0C0754A0 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C0754A4u, 3);  /* 0C0754A2 mov.l @(disp,pc),Rn */
	IF(0x0C0754A4u); r12 = MACL;  /* 0C0754A4 sts macl,Rn */
	r12 += r8;  /* 0C0754A6 add Rm,Rn */
	IF(0x0C0754A8u); MACL = r0 * r13;  /* 0C0754A8 mul.l Rm,Rn */
	r6 = R32(r12); UPD(0x0C0754ACu, 5);  /* 0C0754AA mov.l @Rm,Rn */
	r10 = 0xFFFFFEFFu; UPD(0x0C0754AEu, 1);  /* 0C0754AC mov.w @(disp,pc),Rn */
	r13 += 0x4Cu;  /* 0C0754AE add #imm,Rn */
	r6 &= r10;  /* 0C0754B0 and Rm,Rn */
	IF(0x0C0754B2u); r10 = MACL;  /* 0C0754B2 sts macl,Rn */
	r10 += r8;  /* 0C0754B4 add Rm,Rn */
	r4 = R32(r10); UPD(0x0C0754B8u, 5);  /* 0C0754B6 mov.l @Rm,Rn */
	r8 = r12;  /* 0C0754B8 mov Rm,Rn */
	r4 &= r13;  /* 0C0754BA and Rm,Rn */
	r3 = 0x84u; UPD(0x0C0754BEu, 3);  /* 0C0754BC mov.w @(disp,pc),Rn */
	r13 = r12;  /* 0C0754BE mov Rm,Rn */
	r0 = 0x98u; UPD(0x0C0754C2u, 2);  /* 0C0754C0 mov.w @(disp,pc),Rn */
	r13 += r3;  /* 0C0754C2 add Rm,Rn */
	r8 += r0;  /* 0C0754C4 add Rm,Rn */
	r3 += r10;  /* 0C0754C6 add Rm,Rn */
	r0 += r10;  /* 0C0754C8 add Rm,Rn */
	r3 += 0x2u;  /* 0C0754CA add #imm,Rn */
	r0 += 0x2u;  /* 0C0754CC add #imm,Rn */
	r5 = 0xC0A0380u; UPD(0x0C0754D0u, 7);  /* 0C0754CE mov.l @(disp,pc),Rn */
	r6 |= r4;  /* 0C0754D0 or Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0754D4u, 2);  /* 0C0754D2 mov.w @Rm,Rn */
	r13 += 0x2u;  /* 0C0754D4 add #imm,Rn */
	r7 = R32(r10 + 0xCu); UPD(0x0C0754D8u, 2);  /* 0C0754D6 mov.l @(disp,Rm),Rn */
	r8 += 0x2u;  /* 0C0754D8 add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r0); UPD(0x0C0754DCu, 2);  /* 0C0754DA mov.b @Rm,Rn */
	r4 = r11;  /* 0C0754DC mov Rm,Rn */
	W16(r13, r2); UPD(0x0C0754E0u, 2);  /* 0C0754DE mov.w Rm,@Rn */
	W32(r12 + 0xCu, r7); UPD(0x0C0754E2u, 1);  /* 0C0754E0 mov.l Rm,@(disp,Rn) */
	W32(r12, r6); UPD(0x0C0754E4u, 1);  /* 0C0754E2 mov.l Rm,@Rn */
	IF(0x0C0754E4u); { u32 t_ = r5; PR = 0x0C0754E8u; W8(r8, r9); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0754E8u); }  /* 0C0754E4 jsr @Rn */
L_0C0754E8: BLKS(0x0C0754E8u);
	r0 = 0x88u; UPD(0x0C0754EAu, 1);  /* 0C0754E8 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r13); UPD(0x0C0754ECu, 1);  /* 0C0754EA mov.w @Rm,Rn */
	IF(0x0C0754ECu); r11 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C0754EEu, 1);  /* 0C0754EC mov.w @(r0,Rm),Rn */
	r6 = 0xC058060u; UPD(0x0C0754F0u, 1);  /* 0C0754EE mov.l @(disp,pc),Rn */
	r4 += r11;  /* 0C0754F0 add Rm,Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0754F2 exts.w Rm,Rn */
	r4 = r11;  /* 0C0754F4 mov Rm,Rn */
	IF(0x0C0754F6u); { u32 t_ = r6; PR = 0x0C0754FAu; r5 = R32(r12 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0754FAu); }  /* 0C0754F6 jsr @Rn */
L_0C0754FA: BLKS(0x0C0754FAu);
	r3 = R32(r10 + 0x24u); UPD(0x0C0754FCu, 1);  /* 0C0754FA mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C0754FC mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C075500u, 2);  /* 0C0754FE mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C075500 add Rm,Rn */
	W32(r12 + 0x24u, r3); UPD(0x0C075504u, 2);  /* 0C075502 mov.l Rm,@(disp,Rn) */
	IF(0x0C075504u); { u32 t_ = r13; PR = 0x0C075508u; r5 = R32(r12 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C075508u); }  /* 0C075504 jsr @Rn */
L_0C075508: BLKS(0x0C075508u);
	r2 = R32(r10 + 0x28u); UPD(0x0C07550Au, 1);  /* 0C075508 mov.l @(disp,Rm),Rn */
	r10 += 0x50u;  /* 0C07550A add #imm,Rn */
	r2 += r0;  /* 0C07550C add Rm,Rn */
	r0 = R32(r10); UPD(0x0C075510u, 3);  /* 0C07550E mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C075510 tst Rm,Rn */
	{ u32 c_ = T; W32(r12 + 0x28u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C075572u, 4); goto L_0C075572; } UPD(0x0C075516u, 1); goto L_0C075516; }  /* 0C075512 bt/s */
L_0C075516: BLKS(0x0C075516u);
	r1 = 0xC058060u; UPD(0x0C075518u, 1);  /* 0C075516 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C075518 mov Rm,Rn */
	r9 = 0x60000u; UPD(0x0C07551Cu, 2);  /* 0C07551A mov.l @(disp,pc),Rn */
	IF(0x0C07551Cu); { u32 t_ = r1; PR = 0x0C075520u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C075520u); }  /* 0C07551C jsr @Rn */
L_0C075520: BLKS(0x0C075520u);
	r10 = R32(r12 + 0x24u); UPD(0x0C075522u, 1);  /* 0C075520 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C075522 mov Rm,Rn */
	r4 = r11;  /* 0C075524 mov Rm,Rn */
	r8 = 0xC050D70u; UPD(0x0C075528u, 3);  /* 0C075526 mov.l @(disp,pc),Rn */
	IF(0x0C075528u); { u32 t_ = r13; PR = 0x0C07552Cu; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07552Cu); }  /* 0C075528 jsr @Rn */
L_0C07552C: BLKS(0x0C07552Cu);
	r9 = R32(r12 + 0x28u); UPD(0x0C07552Eu, 1);  /* 0C07552C mov.l @(disp,Rm),Rn */
	r4 = 0xFu;  /* 0C07552E mov #imm,Rn */
	IF(0x0C075530u); { u32 t_ = r8; PR = 0x0C075534u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C075534u); }  /* 0C075530 jsr @Rn */
L_0C075534: BLKS(0x0C075534u);
	r0 += r11;  /* 0C075534 add Rm,Rn */
	r0 += 0xFFFFFFF8u;  /* 0C075536 add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C075538 exts.w Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07553Cu, 4);  /* 0C07553A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C07553C add #imm,Rn */
	IF(0x0C07553Eu); r6 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C075540u, 2);  /* 0C07553E mov.b @(r0,Rm),Rn */
	r4 = r11;  /* 0C075540 mov Rm,Rn */
	r3 = r6 & 0xFF;  /* 0C075542 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C075546u, 3);  /* 0C075544 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C075546 add #imm,Rn */
	IF(0x0C075548u); r2 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C07554Au, 2);  /* 0C075548 mov.b @(r0,Rm),Rn */
	r7 = 0xC058060u; UPD(0x0C07554Cu, 1);  /* 0C07554A mov.l @(disp,pc),Rn */
	r5 = r2 & 0xFF;  /* 0C07554C extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C075550u, 2);  /* 0C07554E mov.l Rm,@(disp,Rn) */
	r8 = 0x10000u; UPD(0x0C075552u, 1);  /* 0C075550 mov.l @(disp,pc),Rn */
	IF(0x0C075552u); { u32 t_ = r7; PR = 0x0C075556u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C075556u); }  /* 0C075552 jsr @Rn */
L_0C075556: BLKS(0x0C075556u);
	r4 = r11;  /* 0C075556 mov Rm,Rn */
	r11 = 0x808080u; UPD(0x0C07555Au, 2);  /* 0C075558 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C07555A mov Rm,Rn */
	IF(0x0C07555Cu); { u32 t_ = r13; PR = 0x0C075560u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C075560u); }  /* 0C07555C jsr @Rn */
L_0C075560: BLKS(0x0C075560u);
	W32(r15 + 0xCu, r0); UPD(0x0C075562u, 1);  /* 0C075560 mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C075562 mov #imm,Rn */
	W32(r15 + 0x10u, r11); UPD(0x0C075566u, 2);  /* 0C075564 mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C075566 mov Rm,Rn */
	r4 = R32(r12); UPD(0x0C07556Au, 2);  /* 0C075568 mov.l @Rm,Rn */
	r12 = 0xC0ACA40u; UPD(0x0C07556Cu, 1);  /* 0C07556A mov.l @(disp,pc),Rn */
	IF(0x0C07556Cu); { u32 t_ = r12; PR = 0x0C075570u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C075570u); }  /* 0C07556C jsr @Rn */
L_0C075570: BLKS(0x0C075570u);
	r15 += 0x14u;  /* 0C075570 add #imm,Rn */
	UPD(0x0C075572u, 1);
L_0C075572: BLKS(0x0C075572u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07503Eu, 3); goto L_0C07503E; }  /* 0C075572 bra */
L_0C0755C0: BLKS(0x0C0755C0u);
	r13 = 0xC0A03F0u; UPD(0x0C0755C2u, 1);  /* 0C0755C0 mov.l @(disp,pc),Rn */
	IF(0x0C0755C2u); { u32 t_ = r13; PR = 0x0C0755C6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0755C6u); }  /* 0C0755C2 jsr @Rn */
L_0C0755C6: BLKS(0x0C0755C6u);
	IF(0x0C0755C6u); T = (s32)r0 >= 0;  /* 0C0755C6 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07569Cu, 4); goto L_0C07569C; } goto L_0C0755CC; }  /* 0C0755C8 bf/s */
L_0C0755CC: BLKS(0x0C0755CCu);
	r0 = 0xB4u; UPD(0x0C0755CEu, 2);  /* 0C0755CC mov.w @(disp,pc),Rn */
	IF(0x0C0755CEu); MACL = r11 * r0;  /* 0C0755CE mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C0755D2u, 3);  /* 0C0755D0 mov.l @(disp,pc),Rn */
	IF(0x0C0755D2u); r12 = MACL;  /* 0C0755D2 sts macl,Rn */
	r12 += r10;  /* 0C0755D4 add Rm,Rn */
	IF(0x0C0755D6u); MACL = r5 * r0;  /* 0C0755D6 mul.l Rm,Rn */
	r6 = R32(r12); UPD(0x0C0755DAu, 5);  /* 0C0755D8 mov.l @Rm,Rn */
	r8 = r12;  /* 0C0755DA mov Rm,Rn */
	r13 = 0xFFFFFEFFu; UPD(0x0C0755DEu, 2);  /* 0C0755DC mov.w @(disp,pc),Rn */
	r0 += 0x4Cu;  /* 0C0755DE add #imm,Rn */
	r6 &= r13;  /* 0C0755E0 and Rm,Rn */
	IF(0x0C0755E2u); r13 = MACL;  /* 0C0755E2 sts macl,Rn */
	r13 += r10;  /* 0C0755E4 add Rm,Rn */
	r4 = R32(r13 + 0xCu); UPD(0x0C0755E8u, 5);  /* 0C0755E6 mov.l @(disp,Rm),Rn */
	r10 = r12;  /* 0C0755E8 mov Rm,Rn */
	r3 = 0x84u; UPD(0x0C0755ECu, 2);  /* 0C0755EA mov.w @(disp,pc),Rn */
	r5 = 0x98u; UPD(0x0C0755EEu, 1);  /* 0C0755EC mov.w @(disp,pc),Rn */
	r8 += r3;  /* 0C0755EE add Rm,Rn */
	W32(r12 + 0xCu, r4); UPD(0x0C0755F2u, 2);  /* 0C0755F0 mov.l Rm,@(disp,Rn) */
	r10 += r5;  /* 0C0755F2 add Rm,Rn */
	r9 = R32(r13); UPD(0x0C0755F6u, 2);  /* 0C0755F4 mov.l @Rm,Rn */
	r4 = r11;  /* 0C0755F6 mov Rm,Rn */
	r3 += r13;  /* 0C0755F8 add Rm,Rn */
	r5 += r13;  /* 0C0755FA add Rm,Rn */
	r3 += 0x2u;  /* 0C0755FC add #imm,Rn */
	r5 += 0x2u;  /* 0C0755FE add #imm,Rn */
	r11 = 0xC0A0380u; UPD(0x0C075602u, 6);  /* 0C075600 mov.l @(disp,pc),Rn */
	r9 &= r0;  /* 0C075602 and Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C075606u, 2);  /* 0C075604 mov.w @Rm,Rn */
	r6 |= r9;  /* 0C075606 or Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C07560Au, 2);  /* 0C075608 mov.b @Rm,Rn */
	r8 += 0x2u;  /* 0C07560A add #imm,Rn */
	r10 += 0x2u;  /* 0C07560C add #imm,Rn */
	W32(r12, r6); UPD(0x0C075610u, 3);  /* 0C07560E mov.l Rm,@Rn */
	W16(r8, r2); UPD(0x0C075612u, 1);  /* 0C075610 mov.w Rm,@Rn */
	IF(0x0C075612u); { u32 t_ = r11; PR = 0x0C075616u; W8(r10, r7); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C075616u); }  /* 0C075612 jsr @Rn */
L_0C075616: BLKS(0x0C075616u);
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C075618u, 1);  /* 0C075616 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C075618 tst Rm,Rn */
	{ u32 c_ = T; r11 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ if (c_) { UPD(0x0C075680u, 4); goto L_0C075680; } UPD(0x0C07561Eu, 1); goto L_0C07561E; }  /* 0C07561A bt/s */
L_0C07561E: BLKS(0x0C07561Eu);
	r8 = r12;  /* 0C07561E mov Rm,Rn */
	r4 = 0xFFF80000u; UPD(0x0C075622u, 2);  /* 0C075620 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C075622 add #imm,Rn */
	W32(r14, r8); UPD(0x0C075626u, 2);  /* 0C075624 mov.l Rm,@Rn */
	W32(r8, r4); UPD(0x0C075628u, 1);  /* 0C075626 mov.l Rm,@Rn */
L_0C075628: BLKS(0x0C075628u);
	r6 = R32(r14); UPD(0x0C07562Au, 1);  /* 0C075628 mov.l @Rm,Rn */
	r4 = r11;  /* 0C07562A mov Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C07562Eu, 2);  /* 0C07562C mov.l @(disp,pc),Rn */
	r3 = R32(r6); UPD(0x0C075630u, 1);  /* 0C07562E mov.l @Rm,Rn */
	r5 = R32(r12 + 0x2Cu); UPD(0x0C075632u, 1);  /* 0C075630 mov.l @(disp,Rm),Rn */
	r9 = 0xC058030u; UPD(0x0C075634u, 1);  /* 0C075632 mov.l @(disp,pc),Rn */
	IF(0x0C075634u); { u32 t_ = r10; PR = 0x0C075638u; r5 += r3; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C075638u); }  /* 0C075634 jsr @Rn */
L_0C075638: BLKS(0x0C075638u);
	r8 = R32(r13 + 0x24u); UPD(0x0C07563Au, 1);  /* 0C075638 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C07563A mov Rm,Rn */
	r5 = R32(r12 + 0x30u); UPD(0x0C07563Eu, 2);  /* 0C07563C mov.l @(disp,Rm),Rn */
	IF(0x0C07563Eu); { u32 t_ = r9; PR = 0x0C075642u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C075642u); }  /* 0C07563E jsr @Rn */
L_0C075642: BLKS(0x0C075642u);
	r2 = R32(r14); UPD(0x0C075644u, 1);  /* 0C075642 mov.l @Rm,Rn */
	r8 -= r0;  /* 0C075644 sub Rm,Rn */
	r7 = R32(r2); UPD(0x0C075648u, 2);  /* 0C075646 mov.l @Rm,Rn */
	r4 = r11;  /* 0C075648 mov Rm,Rn */
	r5 = R32(r12 + 0x2Cu); UPD(0x0C07564Cu, 2);  /* 0C07564A mov.l @(disp,Rm),Rn */
	W32(r12 + 0x24u, r8); UPD(0x0C07564Eu, 1);  /* 0C07564C mov.l Rm,@(disp,Rn) */
	IF(0x0C07564Eu); { u32 t_ = r9; PR = 0x0C075652u; r5 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C075652u); }  /* 0C07564E jsr @Rn */
L_0C075652: BLKS(0x0C075652u);
	r9 = R32(r13 + 0x28u); UPD(0x0C075654u, 1);  /* 0C075652 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C075654 mov Rm,Rn */
	r9 += r0;  /* 0C075656 add Rm,Rn */
	IF(0x0C075658u); { u32 t_ = r10; PR = 0x0C07565Cu; r5 = R32(r12 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07565Cu); }  /* 0C075658 jsr @Rn */
L_0C07565C: BLKS(0x0C07565Cu);
	r9 += r0;  /* 0C07565C add Rm,Rn */
	W32(r12 + 0x28u, r9); UPD(0x0C075660u, 2);  /* 0C07565E mov.l Rm,@(disp,Rn) */
	r12 = R32(r14); UPD(0x0C075662u, 1);  /* 0C075660 mov.l @Rm,Rn */
	r2 = R32(r12); UPD(0x0C075664u, 1);  /* 0C075662 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C075664 tst Rm,Rn */
	if (T) { UPD(0x0C075670u, 4); goto L_0C075670; }  /* 0C075666 bt */
L_0C075668: BLKS(0x0C075668u);
	r11 = R32(r14); UPD(0x0C07566Au, 1);  /* 0C075668 mov.l @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C07566Cu, 1);  /* 0C07566A mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C07566C add Rm,Rn */
	W32(r11, r2); UPD(0x0C075670u, 2);  /* 0C07566E mov.l Rm,@Rn */
L_0C075670: BLKS(0x0C075670u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07503Eu, 3); goto L_0C07503E; }  /* 0C075670 bra */
L_0C075680: BLKS(0x0C075680u);
	r1 = r12;  /* 0C075680 mov Rm,Rn */
	r1 += 0x50u;  /* 0C075682 add #imm,Rn */
	{ W32(r14, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C075628u, 5); goto L_0C075628; }  /* 0C075684 bra */
L_0C075690: BLKS(0x0C075690u);
	r10 = 0xC0A03F0u; UPD(0x0C075692u, 1);  /* 0C075690 mov.l @(disp,pc),Rn */
	IF(0x0C075692u); { u32 t_ = r10; PR = 0x0C075696u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C075696u); }  /* 0C075692 jsr @Rn */
L_0C075696: BLKS(0x0C075696u);
	IF(0x0C075696u); T = (s32)r0 >= 0;  /* 0C075696 cmp/pz Rn */
	{ u32 c_ = T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0756A0u, 4); goto L_0C0756A0; } UPD(0x0C07569Cu, 1); goto L_0C07569C; }  /* 0C075698 bt/s */
L_0C07569C: BLKS(0x0C07569Cu);
	{ IF(0x0C07569Eu); ; /* slot nop */ UPD(0x0C075090u, 3); goto L_0C075090; }  /* 0C07569C bra */
L_0C0756A0: BLKS(0x0C0756A0u);
	r0 = 0xB4u; UPD(0x0C0756A2u, 1);  /* 0C0756A0 mov.w @(disp,pc),Rn */
	IF(0x0C0756A2u); MACL = r11 * r0;  /* 0C0756A2 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0756A6u, 3);  /* 0C0756A4 mov.l @(disp,pc),Rn */
	IF(0x0C0756A6u); r13 = MACL;  /* 0C0756A6 sts macl,Rn */
	r13 += r2;  /* 0C0756A8 add Rm,Rn */
	IF(0x0C0756AAu); MACL = r5 * r0;  /* 0C0756AA mul.l Rm,Rn */
	r9 = R32(r13); UPD(0x0C0756AEu, 5);  /* 0C0756AC mov.l @Rm,Rn */
	r6 = r13;  /* 0C0756AE mov Rm,Rn */
	r12 = 0xFFFFFEFFu; UPD(0x0C0756B2u, 2);  /* 0C0756B0 mov.w @(disp,pc),Rn */
	r0 += 0x4Cu;  /* 0C0756B2 add #imm,Rn */
	r9 &= r12;  /* 0C0756B4 and Rm,Rn */
	IF(0x0C0756B6u); r12 = MACL;  /* 0C0756B6 sts macl,Rn */
	r12 += r2;  /* 0C0756B8 add Rm,Rn */
	r7 = R32(r12); UPD(0x0C0756BCu, 5);  /* 0C0756BA mov.l @Rm,Rn */
	r7 &= r0;  /* 0C0756BC and Rm,Rn */
	r9 |= r7;  /* 0C0756BE or Rm,Rn */
	W32(r13, r9); UPD(0x0C0756C2u, 3);  /* 0C0756C0 mov.l Rm,@Rn */
	r10 = 0x84u; UPD(0x0C0756C4u, 1);  /* 0C0756C2 mov.w @(disp,pc),Rn */
	r9 = r13;  /* 0C0756C4 mov Rm,Rn */
	r9 += r10;  /* 0C0756C6 add Rm,Rn */
	r8 = 0x98u; UPD(0x0C0756CAu, 3);  /* 0C0756C8 mov.w @(disp,pc),Rn */
	r10 += r12;  /* 0C0756CA add Rm,Rn */
	r10 += 0x2u;  /* 0C0756CC add #imm,Rn */
	r6 += r8;  /* 0C0756CE add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C0756D2u, 4);  /* 0C0756D0 mov.w @Rm,Rn */
	r8 += r12;  /* 0C0756D2 add Rm,Rn */
	r9 += 0x2u;  /* 0C0756D4 add #imm,Rn */
	r8 += 0x2u;  /* 0C0756D6 add #imm,Rn */
	r0 = 0xC0A0380u; UPD(0x0C0756DAu, 4);  /* 0C0756D8 mov.l @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C0756DA add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C0756DEu, 2);  /* 0C0756DC mov.b @Rm,Rn */
	r3 = R32(r12 + 0xCu); UPD(0x0C0756E0u, 1);  /* 0C0756DE mov.l @(disp,Rm),Rn */
	W16(r9, r4); UPD(0x0C0756E2u, 1);  /* 0C0756E0 mov.w Rm,@Rn */
	W8(r6, r5); UPD(0x0C0756E4u, 1);  /* 0C0756E2 mov.b Rm,@Rn */
	r4 = r11;  /* 0C0756E4 mov Rm,Rn */
	IF(0x0C0756E6u); { u32 t_ = r0; PR = 0x0C0756EAu; W32(r13 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0756EAu); }  /* 0C0756E6 jsr @Rn */
L_0C0756EA: BLKS(0x0C0756EAu);
	r0 = 0x88u; UPD(0x0C0756ECu, 1);  /* 0C0756EA mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C0756EEu, 1);  /* 0C0756EC mov.w @Rm,Rn */
	IF(0x0C0756EEu); r2 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C0756F0u, 1);  /* 0C0756EE mov.w @(r0,Rm),Rn */
	r10 = 0xC058060u; UPD(0x0C0756F2u, 1);  /* 0C0756F0 mov.l @(disp,pc),Rn */
	r7 += r2;  /* 0C0756F2 add Rm,Rn */
	r11 = (u32)(s32)(s16)r7;  /* 0C0756F4 exts.w Rm,Rn */
	r4 = r11;  /* 0C0756F6 mov Rm,Rn */
	IF(0x0C0756F8u); { u32 t_ = r10; PR = 0x0C0756FCu; r5 = R32(r13 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0756FCu); }  /* 0C0756F8 jsr @Rn */
L_0C0756FC: BLKS(0x0C0756FCu);
	r4 = R32(r12 + 0x24u); UPD(0x0C0756FEu, 1);  /* 0C0756FC mov.l @(disp,Rm),Rn */
	r9 = 0xC058030u; UPD(0x0C075700u, 1);  /* 0C0756FE mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C075700 add Rm,Rn */
	W32(r13 + 0x24u, r4); UPD(0x0C075704u, 2);  /* 0C075702 mov.l Rm,@(disp,Rn) */
	r5 = R32(r13 + 0x2Cu); UPD(0x0C075706u, 1);  /* 0C075704 mov.l @(disp,Rm),Rn */
	IF(0x0C075706u); { u32 t_ = r9; PR = 0x0C07570Au; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07570Au); }  /* 0C075706 jsr @Rn */
L_0C07570A: BLKS(0x0C07570Au);
	r8 = R32(r12 + 0x28u); UPD(0x0C07570Cu, 1);  /* 0C07570A mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C07570C add Rm,Rn */
	{ W32(r13 + 0x28u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07503Cu, 4); goto L_0C07503C; }  /* 0C07570E bra */
L_0C075720: BLKS(0x0C075720u);
	r9 = 0xC0A03F0u; UPD(0x0C075722u, 1);  /* 0C075720 mov.l @(disp,pc),Rn */
	IF(0x0C075722u); { u32 t_ = r9; PR = 0x0C075726u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C075726u); }  /* 0C075722 jsr @Rn */
L_0C075726: BLKS(0x0C075726u);
	IF(0x0C075726u); T = (s32)r0 >= 0;  /* 0C075726 cmp/pz Rn */
	{ u32 c_ = T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075730u, 4); goto L_0C075730; } goto L_0C07572C; }  /* 0C075728 bt/s */
L_0C07572C: BLKS(0x0C07572Cu);
	{ IF(0x0C07572Eu); ; /* slot nop */ UPD(0x0C075090u, 4); goto L_0C075090; }  /* 0C07572C bra */
L_0C075730: BLKS(0x0C075730u);
	r1 = 0xC072530u; UPD(0x0C075732u, 1);  /* 0C075730 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C075070u, 3); goto L_0C075070; }  /* 0C075732 bra */
}

void f_0C075760(sh3_t *c)
{
	LOCALS;
L_0C075760: BLKS(0x0C075760u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C075762u, 1);  /* 0C075760 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C075764u, 1);  /* 0C075762 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C075766u, 1);  /* 0C075764 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C075768u, 1);  /* 0C075766 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07576Au, 1);  /* 0C075768 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07576Cu, 1);  /* 0C07576A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07576Eu, 1);  /* 0C07576C mov.l Rm,@-Rn */
	r11 = 0xC22C874u; UPD(0x0C075770u, 1);  /* 0C07576E mov.l @(disp,pc),Rn */
	IF(0x0C075770u); r15 -= 4; W32(r15, PR); UPD(0x0C075772u, 1);  /* 0C075770 sts.l pr,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C075774u, 1);  /* 0C075772 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C075774 add #imm,Rn */
	r2 = 0xC286509u; UPD(0x0C075778u, 2);  /* 0C075776 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C075778 mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r11); UPD(0x0C07577Cu, 2);  /* 0C07577A mov.w @Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r2); UPD(0x0C07577Eu, 1);  /* 0C07577C mov.b @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C075780u, 1);  /* 0C07577E mov.l @(disp,pc),Rn */
	IF(0x0C075780u); { u32 t_ = r8; PR = 0x0C075784u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C075784u); }  /* 0C075780 jsr @Rn */
L_0C075784: BLKS(0x0C075784u);
	T = (r0 & r0) == 0;  /* 0C075784 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0757A0u, 4); goto L_0C0757A0; } UPD(0x0C07578Au, 1); goto L_0C07578A; }  /* 0C075786 bf/s */
L_0C07578A: BLKS(0x0C07578Au);
	r14 += 0x10u;  /* 0C07578A add #imm,Rn */
	r15 = r14;  /* 0C07578C mov Rm,Rn */
	IF(0x0C07578Eu); PR = R32(r15); r15 += 4; UPD(0x0C075790u, 3);  /* 0C07578E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C075792u, 1);  /* 0C075790 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C075794u, 1);  /* 0C075792 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C075796u, 1);  /* 0C075794 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C075798u, 1);  /* 0C075796 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07579Au, 1);  /* 0C075798 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07579Cu, 1);  /* 0C07579A mov.l @Rm+,Rn */
	IF(0x0C07579Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07579C rts */
L_0C0757A0: BLKS(0x0C0757A0u);
	r8 = 0xC0606C0u; UPD(0x0C0757A2u, 1);  /* 0C0757A0 mov.l @(disp,pc),Rn */
	IF(0x0C0757A2u); { u32 t_ = r8; PR = 0x0C0757A6u; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0757A6u); }  /* 0C0757A2 jsr @Rn */
L_0C0757A6: BLKS(0x0C0757A6u);
	T = (r0 & r0) == 0;  /* 0C0757A6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07578Au, 4); goto L_0C07578A; } goto L_0C0757AC; }  /* 0C0757A8 bt/s */
L_0C0757AC: BLKS(0x0C0757ACu);
	r8 = 0xC2755BCu; UPD(0x0C0757AEu, 2);  /* 0C0757AC mov.l @(disp,pc),Rn */
	r9 = 0xB4u; UPD(0x0C0757B0u, 1);  /* 0C0757AE mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r13 = v_; } UPD(0x0C0757B2u, 1);  /* 0C0757B0 mov.w @Rm+,Rn */
	IF(0x0C0757B2u); MACL = r13 * r9;  /* 0C0757B2 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0757B6u, 3);  /* 0C0757B4 mov.l @(disp,pc),Rn */
	IF(0x0C0757B6u); r9 = MACL;  /* 0C0757B6 sts macl,Rn */
	r0 = 0xC28629Eu; UPD(0x0C0757BAu, 2);  /* 0C0757B8 mov.l @(disp,pc),Rn */
	r9 += r5;  /* 0C0757BA add Rm,Rn */
	r12 = 0x84u; UPD(0x0C0757BEu, 2);  /* 0C0757BC mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r11); UPD(0x0C0757C0u, 1);  /* 0C0757BE mov.w @Rm,Rn */
	r12 += r9;  /* 0C0757C0 add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r0); UPD(0x0C0757C4u, 2);  /* 0C0757C2 mov.w @Rm,Rn */
	r12 += 0x2u;  /* 0C0757C4 add #imm,Rn */
	r4 = 0xC0000014u; UPD(0x0C0757C8u, 2);  /* 0C0757C6 mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFFFF;  /* 0C0757C8 extu.w Rm,Rn */
	W16(r12, r6); UPD(0x0C0757CCu, 2);  /* 0C0757CA mov.w Rm,@Rn */
	r1 = 0xC0A02D0u; UPD(0x0C0757CEu, 1);  /* 0C0757CC mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0757CE mov #imm,Rn */
	r0 = 0x8Au; UPD(0x0C0757D2u, 2);  /* 0C0757D0 mov.w @(disp,pc),Rn */
	W32(r14, r8); UPD(0x0C0757D4u, 1);  /* 0C0757D2 mov.l Rm,@Rn */
	W32(r9, r4); UPD(0x0C0757D6u, 1);  /* 0C0757D4 mov.l Rm,@Rn */
	r8 = 0x4Cu;  /* 0C0757D6 mov #imm,Rn */
	IF(0x0C0757D8u); W16(r0 + r9, r6); UPD(0x0C0757DAu, 2);  /* 0C0757D8 mov.w Rm,@(r0,Rn) */
	r4 = r13;  /* 0C0757DA mov Rm,Rn */
	W32(r9 + 0x4u, r2); UPD(0x0C0757DEu, 2);  /* 0C0757DC mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r12); UPD(0x0C0757E0u, 1);  /* 0C0757DE mov.l Rm,@(disp,Rn) */
	IF(0x0C0757E0u); { u32 t_ = r1; PR = 0x0C0757E4u; W32(r9 + 0x8u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0757E4u); }  /* 0C0757E0 jsr @Rn */
L_0C0757E4: BLKS(0x0C0757E4u);
	IF(0x0C0757E4u); MACL = r10 * r8;  /* 0C0757E4 mul.l Rm,Rn */
	r7 = 0xC21F5E2u; UPD(0x0C0757E8u, 3);  /* 0C0757E6 mov.l @(disp,pc),Rn */
	r5 = 0xC26CAE0u; UPD(0x0C0757EAu, 1);  /* 0C0757E8 mov.l @(disp,pc),Rn */
	IF(0x0C0757EAu); r8 = MACL;  /* 0C0757EA sts macl,Rn */
	r3 = 0xC392D5Eu; UPD(0x0C0757EEu, 2);  /* 0C0757EC mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C0757EE add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0757F2u, 2);  /* 0C0757F0 mov.w @Rm,Rn */
	r4 = R32(r8 + 0x8u); UPD(0x0C0757F4u, 1);  /* 0C0757F2 mov.l @(disp,Rm),Rn */
	IF(0x0C0757F4u); r6 <<= 16;  /* 0C0757F4 shll16 Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0757F8u, 2);  /* 0C0757F6 mov.w @Rm,Rn */
	r6 -= r4;  /* 0C0757F8 sub Rm,Rn */
	r0 = 0xC0A1530u; UPD(0x0C0757FCu, 2);  /* 0C0757FA mov.l @(disp,pc),Rn */
	IF(0x0C0757FCu); r2 <<= 16;  /* 0C0757FC shll16 Rn */
	W32(r9 + 0x28u, r2); UPD(0x0C075800u, 2);  /* 0C0757FE mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C075800 mov Rm,Rn */
	IF(0x0C075802u); { u32 t_ = r0; PR = 0x0C075806u; W32(r9 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C075806u); }  /* 0C075802 jsr @Rn */
L_0C075806: BLKS(0x0C075806u);
	r7 = 0xB0u; UPD(0x0C075808u, 1);  /* 0C075806 mov.w @(disp,pc),Rn */
	r8 += 0x42u;  /* 0C075808 add #imm,Rn */
	r7 += r9;  /* 0C07580A add Rm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C07580Eu, 3);  /* 0C07580C mov.l Rm,@(disp,Rn) */
	r4 = 0xA8u; UPD(0x0C075810u, 1);  /* 0C07580E mov.w @(disp,pc),Rn */
	r1 = 0xADu; UPD(0x0C075812u, 1);  /* 0C075810 mov.w @(disp,pc),Rn */
	r4 += r9;  /* 0C075812 add Rm,Rn */
	W8(r7, r10); UPD(0x0C075816u, 2);  /* 0C075814 mov.b Rm,@Rn */
	r1 += r9;  /* 0C075816 add Rm,Rn */
	r4 += 0x1u;  /* 0C075818 add #imm,Rn */
	W32(r14 + 0x8u, r4); UPD(0x0C07581Cu, 3);  /* 0C07581A mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r1); UPD(0x0C07581Eu, 1);  /* 0C07581C mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C075820u, 1);  /* 0C07581E mov.b @Rm,Rn */
	r3 = 0xC0A1780u; UPD(0x0C075822u, 1);  /* 0C075820 mov.l @(disp,pc),Rn */
	W8(r1, r5); UPD(0x0C075824u, 1);  /* 0C075822 mov.b Rm,@Rn */
	W8(r4, r5); UPD(0x0C075826u, 1);  /* 0C075824 mov.b Rm,@Rn */
	r6 = 0xC27DC20u; UPD(0x0C075828u, 1);  /* 0C075826 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C075828 mov Rm,Rn */
	IF(0x0C07582Au); { u32 t_ = r3; PR = 0x0C07582Eu; r5 = R32(r6); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C07582Eu); }  /* 0C07582A jsr @Rn */
L_0C07582E: BLKS(0x0C07582Eu);
	r10 = 0x8Cu; UPD(0x0C075830u, 1);  /* 0C07582E mov.w @(disp,pc),Rn */
	r3 = 0x8u;  /* 0C075830 mov #imm,Rn */
	r0 = 0x90u; UPD(0x0C075834u, 2);  /* 0C075832 mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C075834 add Rm,Rn */
	r2 = R32(r14); UPD(0x0C075838u, 2);  /* 0C075836 mov.l @Rm,Rn */
	IF(0x0C075838u); W32(r0 + r9, r12); UPD(0x0C07583Au, 1);  /* 0C075838 mov.l Rm,@(r0,Rn) */
	W32(r10, r12); UPD(0x0C07583Cu, 1);  /* 0C07583A mov.l Rm,@Rn */
	r0 = 0xB4u; UPD(0x0C07583Eu, 1);  /* 0C07583C mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r10 = v_; } UPD(0x0C075840u, 1);  /* 0C07583E mov.w @Rm+,Rn */
	r8 = 0x94u; UPD(0x0C075842u, 1);  /* 0C075840 mov.w @(disp,pc),Rn */
	IF(0x0C075842u); MACL = r10 * r0;  /* 0C075842 mul.l Rm,Rn */
	r8 += r9;  /* 0C075844 add Rm,Rn */
	W32(r8, r12); UPD(0x0C075848u, 4);  /* 0C075846 mov.l Rm,@Rn */
	r7 = 0xC26CD40u; UPD(0x0C07584Au, 1);  /* 0C075848 mov.l @(disp,pc),Rn */
	IF(0x0C07584Au); r8 = MACL;  /* 0C07584A sts macl,Rn */
	r8 += r7;  /* 0C07584C add Rm,Rn */
	r8 += 0x7Cu;  /* 0C07584E add #imm,Rn */
	W16(r8, r13); UPD(0x0C075852u, 4);  /* 0C075850 mov.w Rm,@Rn */
	r4 = 0xC286274u; UPD(0x0C075854u, 1);  /* 0C075852 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C075854 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r11); UPD(0x0C075858u, 2);  /* 0C075856 mov.w @Rm,Rn */
	r1 = 0xC3000010u; UPD(0x0C07585Au, 1);  /* 0C075858 mov.l @(disp,pc),Rn */
	r5 = r6 & 0xFFFF;  /* 0C07585A extu.w Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C07585Eu, 2);  /* 0C07585C mov.w @Rm,Rn */
	W32(r14, r2); UPD(0x0C075860u, 1);  /* 0C07585E mov.l Rm,@Rn */
	T = r0 > r3;  /* 0C075860 cmp/hi Rm,Rn */
	W32(r8, r1); UPD(0x0C075864u, 2);  /* 0C075862 mov.l Rm,@Rn */
	{ u32 c_ = !T; W32(r8 + 0x4u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07586Cu, 3); goto L_0C07586C; } UPD(0x0C075868u, 1); goto L_0C075868; }  /* 0C075864 bf/s */
L_0C075868: BLKS(0x0C075868u);
	{ IF(0x0C07586Au); ; /* slot nop */ UPD(0x0C075960u, 3); goto L_0C075960; }  /* 0C075868 bra */
L_0C07586C: BLKS(0x0C07586Cu);
	r7 = 0xC28629Eu; UPD(0x0C07586Eu, 1);  /* 0C07586C mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFAu;  /* 0C07586E mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r7); UPD(0x0C075872u, 2);  /* 0C075870 mov.w @Rm,Rn */
	r3 = r0 & 0xFFFF;  /* 0C075872 extu.w Rm,Rn */
	r4 = 0x84u; UPD(0x0C075876u, 2);  /* 0C075874 mov.w @(disp,pc),Rn */
	IF(0x0C075876u); ARG0(0x451Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C075876 shad Rm,Rn */
	r4 += r8;  /* 0C075878 add Rm,Rn */
	r2 = 0xC0A02D0u; UPD(0x0C07587Cu, 3);  /* 0C07587A mov.l @(disp,pc),Rn */
	r4 += 0x2u;  /* 0C07587C add #imm,Rn */
	W16(r4, r5); UPD(0x0C075880u, 2);  /* 0C07587E mov.w Rm,@Rn */
	r3 += 0x3u;  /* 0C075880 add #imm,Rn */
	W32(r8 + 0x8u, r3); UPD(0x0C075884u, 2);  /* 0C075882 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C075884 mov Rm,Rn */
	IF(0x0C075886u); { u32 t_ = r2; PR = 0x0C07588Au; W32(r8 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07588Au); }  /* 0C075886 jsr @Rn */
L_0C07588A: BLKS(0x0C07588Au);
	r0 = 0xC0A1530u; UPD(0x0C07588Cu, 1);  /* 0C07588A mov.l @(disp,pc),Rn */
	IF(0x0C07588Cu); { u32 t_ = r0; PR = 0x0C075890u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C075890u); }  /* 0C07588C jsr @Rn */
L_0C075890: BLKS(0x0C075890u);
	r10 = R32(r14 + 0x4u); UPD(0x0C075892u, 1);  /* 0C075890 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C075894u, 1);  /* 0C075892 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C075896u, 1);  /* 0C075894 mov.b @Rm,Rn */
	IF(0x0C075896u); W8(r0 + r8, r5); UPD(0x0C075898u, 1);  /* 0C075896 mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C07589Au, 1);  /* 0C075898 mov.w @(disp,pc),Rn */
	r4 = R32(r14 + 0x8u); UPD(0x0C07589Cu, 1);  /* 0C07589A mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C07589C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r4); UPD(0x0C0758A0u, 2);  /* 0C07589E mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0758A0 add #imm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0758A4u, 2);  /* 0C0758A2 mov.l @(disp,Rm),Rn */
	W8(r0, r1); UPD(0x0C0758A6u, 1);  /* 0C0758A4 mov.b Rm,@Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0758A8u, 1);  /* 0C0758A6 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C0758AAu, 1);  /* 0C0758A8 mov.l Rm,@(disp,Rn) */
	r10 = 0x9Cu; UPD(0x0C0758ACu, 1);  /* 0C0758AA mov.w @(disp,pc),Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0758AEu, 1);  /* 0C0758AC mov.l @(disp,Rm),Rn */
	r10 += r8;  /* 0C0758AE add Rm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C0758B2u, 2);  /* 0C0758B0 mov.l Rm,@(disp,Rn) */
	r10 += 0x1u;  /* 0C0758B2 add #imm,Rn */
	r7 = 0xACu; UPD(0x0C0758B6u, 2);  /* 0C0758B4 mov.w @(disp,pc),Rn */
	W8(r10, r12); UPD(0x0C0758B8u, 1);  /* 0C0758B6 mov.b Rm,@Rn */
	r7 += r8;  /* 0C0758B8 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C0758BCu, 2);  /* 0C0758BA mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C0758BC add #imm,Rn */
	W8(r7, r6); UPD(0x0C0758C0u, 2);  /* 0C0758BE mov.b Rm,@Rn */
	{ u32 v_ = r12; r10 -= 1; W8(r10, v_); } UPD(0x0C0758C2u, 1);  /* 0C0758C0 mov.b Rm,@-Rn */
	r3 = 0x140000u; UPD(0x0C0758C4u, 1);  /* 0C0758C2 mov.l @(disp,pc),Rn */
	r5 = R32(r14); UPD(0x0C0758C6u, 1);  /* 0C0758C4 mov.l @Rm,Rn */
	W32(r8 + 0x2Cu, r3); UPD(0x0C0758C8u, 1);  /* 0C0758C6 mov.l Rm,@(disp,Rn) */
	r10 = (u32)(s32)(s16)R16(r5); UPD(0x0C0758CAu, 1);  /* 0C0758C8 mov.w @Rm,Rn */
	r3 = 0xB4u; UPD(0x0C0758CCu, 1);  /* 0C0758CA mov.w @(disp,pc),Rn */
	IF(0x0C0758CCu); MACL = r10 * r3;  /* 0C0758CC mul.l Rm,Rn */
	W32(r8 + 0x30u, r12); UPD(0x0C0758D0u, 3);  /* 0C0758CE mov.l Rm,@(disp,Rn) */
	r4 = 0xC26CD40u; UPD(0x0C0758D2u, 1);  /* 0C0758D0 mov.l @(disp,pc),Rn */
	IF(0x0C0758D2u); r8 = MACL;  /* 0C0758D2 sts macl,Rn */
	r8 += r4;  /* 0C0758D4 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C0758D6 add #imm,Rn */
	W16(r8, r13); UPD(0x0C0758DAu, 4);  /* 0C0758D8 mov.w Rm,@Rn */
	r6 = 0xC286274u; UPD(0x0C0758DCu, 1);  /* 0C0758DA mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C0758DC add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r11); UPD(0x0C0758E0u, 2);  /* 0C0758DE mov.w @Rm,Rn */
	r1 = 0xC3000010u; UPD(0x0C0758E2u, 1);  /* 0C0758E0 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFFFF;  /* 0C0758E2 extu.w Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r6); UPD(0x0C0758E6u, 2);  /* 0C0758E4 mov.w @Rm,Rn */
	r11 = 0x9u;  /* 0C0758E6 mov #imm,Rn */
	W32(r8, r1); UPD(0x0C0758EAu, 2);  /* 0C0758E8 mov.l Rm,@Rn */
	T = r13 > r11;  /* 0C0758EA cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C075950u, 4); goto L_0C075950; } UPD(0x0C0758F0u, 1); goto L_0C0758F0; }  /* 0C0758EC bt/s */
L_0C0758F0: BLKS(0x0C0758F0u);
	r0 = 0xC28629Eu; UPD(0x0C0758F2u, 1);  /* 0C0758F0 mov.l @(disp,pc),Rn */
	r5 = 0xFFFFFFFAu;  /* 0C0758F2 mov #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C0758F6u, 2);  /* 0C0758F4 mov.w @Rm,Rn */
	r7 = 0x2u;  /* 0C0758F6 mov #imm,Rn */
	r4 = 0x84u; UPD(0x0C0758FAu, 2);  /* 0C0758F8 mov.w @(disp,pc),Rn */
	IF(0x0C0758FAu); ARG0(0x425Cu); { s32 s_ = (s32)r5; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0758FA shad Rm,Rn */
	r4 += r8;  /* 0C0758FC add Rm,Rn */
	r6 = 0xC0A02D0u; UPD(0x0C075900u, 3);  /* 0C0758FE mov.l @(disp,pc),Rn */
	r4 += 0x2u;  /* 0C075900 add #imm,Rn */
	W16(r4, r2); UPD(0x0C075904u, 2);  /* 0C075902 mov.w Rm,@Rn */
	W32(r8 + 0x8u, r7); UPD(0x0C075906u, 1);  /* 0C075904 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C075906 mov Rm,Rn */
	IF(0x0C075908u); { u32 t_ = r6; PR = 0x0C07590Cu; W32(r8 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07590Cu); }  /* 0C075908 jsr @Rn */
L_0C07590C: BLKS(0x0C07590Cu);
	r4 = r10;  /* 0C07590C mov Rm,Rn */
	r10 = 0xC0A1530u; UPD(0x0C075910u, 2);  /* 0C07590E mov.l @(disp,pc),Rn */
	IF(0x0C075910u); { u32 t_ = r10; PR = 0x0C075914u; IF(0x0C075912u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C075914u); }  /* 0C075910 jsr @Rn */
L_0C075914: BLKS(0x0C075914u);
	r1 = R32(r14 + 0x4u); UPD(0x0C075916u, 1);  /* 0C075914 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C075918u, 1);  /* 0C075916 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r1); UPD(0x0C07591Au, 1);  /* 0C075918 mov.b @Rm,Rn */
	IF(0x0C07591Au); W8(r0 + r8, r7); UPD(0x0C07591Cu, 1);  /* 0C07591A mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C07591Eu, 1);  /* 0C07591C mov.w @(disp,pc),Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C075920u, 1);  /* 0C07591E mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C075920 add Rm,Rn */
	r13 = R32(r9 + 0x24u); UPD(0x0C075924u, 2);  /* 0C075922 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C075924 add #imm,Rn */
	r11 = R32(r9 + 0x28u); UPD(0x0C075928u, 2);  /* 0C075926 mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C07592Au, 1);  /* 0C075928 mov.b @Rm,Rn */
	r9 = 0x9Cu; UPD(0x0C07592Cu, 1);  /* 0C07592A mov.w @(disp,pc),Rn */
	W8(r0, r4); UPD(0x0C07592Eu, 1);  /* 0C07592C mov.b Rm,@Rn */
	r9 += r8;  /* 0C07592E add Rm,Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C075932u, 2);  /* 0C075930 mov.l @(disp,Rm),Rn */
	r9 += 0x1u;  /* 0C075932 add #imm,Rn */
	r10 = 0xACu; UPD(0x0C075936u, 2);  /* 0C075934 mov.w @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C075936 mov #imm,Rn */
	r3 = 0xB0000u; UPD(0x0C07593Au, 2);  /* 0C075938 mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C07593A add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C07593Eu, 2);  /* 0C07593C mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C07593E add #imm,Rn */
	W8(r9, r12); UPD(0x0C075942u, 2);  /* 0C075940 mov.b Rm,@Rn */
	W32(r8 + 0x24u, r13); UPD(0x0C075944u, 1);  /* 0C075942 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r11); UPD(0x0C075946u, 1);  /* 0C075944 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r3); UPD(0x0C075948u, 1);  /* 0C075946 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r12); UPD(0x0C07594Au, 1);  /* 0C075948 mov.l Rm,@(disp,Rn) */
	W8(r10, r6); UPD(0x0C07594Cu, 1);  /* 0C07594A mov.b Rm,@Rn */
	{ { u32 v_ = r12; r9 -= 1; W8(r9, v_); } /* slot mov.b Rm,@-Rn */ UPD(0x0C07578Au, 3); goto L_0C07578A; }  /* 0C07594C bra */
L_0C075950: BLKS(0x0C075950u);
	r13 = 0xC050D70u; UPD(0x0C075952u, 1);  /* 0C075950 mov.l @(disp,pc),Rn */
	r11 = 0xC286274u; UPD(0x0C075954u, 1);  /* 0C075952 mov.l @(disp,pc),Rn */
	IF(0x0C075954u); { u32 t_ = r13; PR = 0x0C075958u; r4 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C075958u); }  /* 0C075954 jsr @Rn */
L_0C075958: BLKS(0x0C075958u);
	{ W16(r11, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C0758F0u, 3); goto L_0C0758F0; }  /* 0C075958 bra */
L_0C075960: BLKS(0x0C075960u);
	r0 = 0xC050D70u; UPD(0x0C075962u, 1);  /* 0C075960 mov.l @(disp,pc),Rn */
	IF(0x0C075962u); { u32 t_ = r0; PR = 0x0C075966u; r4 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C075966u); }  /* 0C075962 jsr @Rn */
L_0C075966: BLKS(0x0C075966u);
	r7 = 0xC286274u; UPD(0x0C075968u, 1);  /* 0C075966 mov.l @(disp,pc),Rn */
	{ W16(r7, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C07586Cu, 3); goto L_0C07586C; }  /* 0C075968 bra */
}

void f_0C0759E0(sh3_t *c)
{
	LOCALS;
L_0C0759E0: BLKS(0x0C0759E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0759E2u, 1);  /* 0C0759E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0759E4u, 1);  /* 0C0759E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0759E6u, 1);  /* 0C0759E4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0759E8u, 1);  /* 0C0759E6 mov.l Rm,@-Rn */
	r8 = 0xB4u; UPD(0x0C0759EAu, 1);  /* 0C0759E8 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0759EA exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0759EEu, 2);  /* 0C0759EC mov.l Rm,@-Rn */
	IF(0x0C0759EEu); MACL = r11 * r8;  /* 0C0759EE mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0759F2u, 3);  /* 0C0759F0 mov.l Rm,@-Rn */
	r9 = 0xC26CD40u; UPD(0x0C0759F4u, 1);  /* 0C0759F2 mov.l @(disp,pc),Rn */
	IF(0x0C0759F4u); r10 = MACL;  /* 0C0759F4 sts macl,Rn */
	IF(0x0C0759F6u); r15 -= 4; W32(r15, PR); UPD(0x0C0759F8u, 2);  /* 0C0759F6 sts.l pr,@-Rn */
	r10 += r9;  /* 0C0759F8 add Rm,Rn */
	r0 = R32(r10 + 0x8u); UPD(0x0C0759FCu, 2);  /* 0C0759FA mov.l @(disp,Rm),Rn */
	T = r0 == 0x1u;  /* 0C0759FC cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075A06u, 4); goto L_0C075A06; } goto L_0C075A02; }  /* 0C0759FE bf/s */
L_0C075A02: BLKS(0x0C075A02u);
	{ r1 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(0x0C075C50u, 4); goto L_0C075C50; }  /* 0C075A02 bra */
L_0C075A06: BLKS(0x0C075A06u);
	r12 = 0x1u;  /* 0C075A06 mov #imm,Rn */
	T = (s32)r0 > (s32)r12;  /* 0C075A08 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C075A12u, 5); goto L_0C075A12; } goto L_0C075A0E; }  /* 0C075A0A bf/s */
L_0C075A0E: BLKS(0x0C075A0Eu);
	{ IF(0x0C075A10u); ; /* slot nop */ UPD(0x0C075BF0u, 4); goto L_0C075BF0; }  /* 0C075A0E bra */
L_0C075A12: BLKS(0x0C075A12u);
	T = (r0 & r0) == 0;  /* 0C075A12 tst Rm,Rn */
	if (!T) { UPD(0x0C075A1Cu, 4); goto L_0C075A1C; }  /* 0C075A14 bf */
L_0C075A16: BLKS(0x0C075A16u);
	r15 += 0xFFFFFFF8u;  /* 0C075A16 add #imm,Rn */
	{ r5 = 0xEu; /* slot mov #imm,Rn */ UPD(0x0C075B40u, 4); goto L_0C075B40; }  /* 0C075A18 bra */
L_0C075A1C: BLKS(0x0C075A1Cu);
	r10 = 0xC0A03F0u; UPD(0x0C075A1Eu, 1);  /* 0C075A1C mov.l @(disp,pc),Rn */
	IF(0x0C075A1Eu); { u32 t_ = r10; PR = 0x0C075A22u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C075A22u); }  /* 0C075A1E jsr @Rn */
L_0C075A22: BLKS(0x0C075A22u);
	IF(0x0C075A22u); T = (s32)r0 >= 0;  /* 0C075A22 cmp/pz Rn */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075A2Cu, 4); goto L_0C075A2C; } goto L_0C075A28; }  /* 0C075A24 bt/s */
L_0C075A28: BLKS(0x0C075A28u);
	{ r3 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C075B30u, 4); goto L_0C075B30; }  /* 0C075A28 bra */
L_0C075A2C: BLKS(0x0C075A2Cu);
	r10 = 0xC050D70u; UPD(0x0C075A2Eu, 1);  /* 0C075A2C mov.l @(disp,pc),Rn */
	IF(0x0C075A2Eu); { u32 t_ = r10; PR = 0x0C075A32u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C075A32u); }  /* 0C075A2E jsr @Rn */
L_0C075A32: BLKS(0x0C075A32u);
	T = r0 == 0x2u;  /* 0C075A32 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C075B00u, 4); goto L_0C075B00; }  /* 0C075A34 bt */
L_0C075A36: BLKS(0x0C075A36u);
	r4 = 0x2u;  /* 0C075A36 mov #imm,Rn */
	T = (s32)r0 > (s32)r4;  /* 0C075A38 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C075AD0u, 5); goto L_0C075AD0; } goto L_0C075A3E; }  /* 0C075A3A bt/s */
L_0C075A3E: BLKS(0x0C075A3Eu);
	T = r0 == 0x1u;  /* 0C075A3E cmp/eq #imm,r0 */
	if (T) { UPD(0x0C075AA0u, 5); goto L_0C075AA0; }  /* 0C075A40 bt */
L_0C075A42: BLKS(0x0C075A42u);
	r3 = 0xB4u; UPD(0x0C075A44u, 1);  /* 0C075A42 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C075A44 add #imm,Rn */
	IF(0x0C075A46u); MACL = r11 * r3;  /* 0C075A46 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C075A4Au, 4);  /* 0C075A48 mov.l @(disp,pc),Rn */
	IF(0x0C075A4Au); r8 = MACL;  /* 0C075A4A sts macl,Rn */
	r8 += r0;  /* 0C075A4C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C075A50u, 3);  /* 0C075A4E mov.w @(disp,pc),Rn */
	IF(0x0C075A50u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C075A52u, 1);  /* 0C075A50 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C075A52 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C075A56u, 2);  /* 0C075A54 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C075A56 add #imm,Rn */
	IF(0x0C075A58u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C075A5Au, 2);  /* 0C075A58 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C075A5A extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C075A5Eu, 2);  /* 0C075A5C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C075A60u, 1);  /* 0C075A5E mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C075A60 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C075A64u, 2);  /* 0C075A62 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C075A66u, 1);  /* 0C075A64 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C075A68u, 1);  /* 0C075A66 mov.l @(disp,Rm),Rn */
L_0C075A68: BLKS(0x0C075A68u);
	IF(0x0C075A68u); { u32 t_ = r0; PR = 0x0C075A6Cu; IF(0x0C075A6Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C075A6Cu); }  /* 0C075A68 jsr @Rn */
L_0C075A6C: BLKS(0x0C075A6Cu);
	r0 = 0xB4u; UPD(0x0C075A6Eu, 1);  /* 0C075A6C mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C075A6E add #imm,Rn */
	IF(0x0C075A70u); MACL = r12 * r0;  /* 0C075A70 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C075A74u, 4);  /* 0C075A72 mov.l @(disp,pc),Rn */
	IF(0x0C075A74u); r8 = MACL;  /* 0C075A74 sts macl,Rn */
	r8 += r4;  /* 0C075A76 add Rm,Rn */
	r3 = R32(r8); UPD(0x0C075A7Au, 3);  /* 0C075A78 mov.l @Rm,Rn */
	IF(0x0C075A7Au); MACL = r11 * r0;  /* 0C075A7A mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C075A7Eu, 3);  /* 0C075A7C mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C075A7E mov #imm,Rn */
	r3 |= r1;  /* 0C075A80 or Rm,Rn */
	W32(r8, r3); UPD(0x0C075A84u, 3);  /* 0C075A82 mov.l Rm,@Rn */
	IF(0x0C075A84u); r0 = MACL;  /* 0C075A84 sts macl,Rn */
	IF(0x0C075A86u); W32(r0 + r4, r12); UPD(0x0C075A88u, 2);  /* 0C075A86 mov.l Rm,@(r0,Rn) */
L_0C075A88: BLKS(0x0C075A88u);
	r15 = r14;  /* 0C075A88 mov Rm,Rn */
	IF(0x0C075A8Au); PR = R32(r15); r15 += 4; UPD(0x0C075A8Cu, 2);  /* 0C075A8A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C075A8Eu, 1);  /* 0C075A8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C075A90u, 1);  /* 0C075A8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C075A92u, 1);  /* 0C075A90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C075A94u, 1);  /* 0C075A92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C075A96u, 1);  /* 0C075A94 mov.l @Rm+,Rn */
	IF(0x0C075A96u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C075A96 rts */
L_0C075AA0: BLKS(0x0C075AA0u);
	r7 = 0xB4u; UPD(0x0C075AA2u, 1);  /* 0C075AA0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C075AA2 add #imm,Rn */
	IF(0x0C075AA4u); MACL = r11 * r7;  /* 0C075AA4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C075AA8u, 4);  /* 0C075AA6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C075AAAu, 1);  /* 0C075AA8 mov.w @(disp,pc),Rn */
	IF(0x0C075AAAu); r9 = MACL;  /* 0C075AAA sts macl,Rn */
	r9 += r6;  /* 0C075AAC add Rm,Rn */
	IF(0x0C075AAEu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C075AB0u, 3);  /* 0C075AAE mov.b @(r0,Rm),Rn */
	r8 = r5 & 0xFF;  /* 0C075AB0 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C075AB4u, 2);  /* 0C075AB2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C075AB4 add #imm,Rn */
	IF(0x0C075AB6u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C075AB8u, 2);  /* 0C075AB6 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C075AB8 mov #imm,Rn */
	r10 = r4 & 0xFF;  /* 0C075ABA extu.b Rm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C075ABEu, 3);  /* 0C075ABC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C075AC0u, 1);  /* 0C075ABE mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C075AC2u, 1);  /* 0C075AC0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C075AC4u, 1);  /* 0C075AC2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C075A68u, 3); goto L_0C075A68; }  /* 0C075AC4 bra */
L_0C075AD0: BLKS(0x0C075AD0u);
	if (!T) { UPD(0x0C075A42u, 3); goto L_0C075A42; }  /* 0C075AD0 bf */
L_0C075AD2: BLKS(0x0C075AD2u);
	r15 += 0xFFFFFFF8u;  /* 0C075AD2 add #imm,Rn */
	r10 = 0xB4u; UPD(0x0C075AD6u, 2);  /* 0C075AD4 mov.w @(disp,pc),Rn */
	IF(0x0C075AD6u); MACL = r11 * r10;  /* 0C075AD6 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C075ADAu, 3);  /* 0C075AD8 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C075ADCu, 1);  /* 0C075ADA mov.w @(disp,pc),Rn */
	IF(0x0C075ADCu); r3 = MACL;  /* 0C075ADC sts macl,Rn */
	r3 += r9;  /* 0C075ADE add Rm,Rn */
	IF(0x0C075AE0u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C075AE2u, 3);  /* 0C075AE0 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C075AE2 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C075AE6u, 2);  /* 0C075AE4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C075AE6 add #imm,Rn */
	IF(0x0C075AE8u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C075AEAu, 2);  /* 0C075AE8 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C075AEA extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C075AEEu, 2);  /* 0C075AEC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C075AF0u, 1);  /* 0C075AEE mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C075AF0 mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C075AF4u, 2);  /* 0C075AF2 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C075AF6u, 1);  /* 0C075AF4 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C075A68u, 3); goto L_0C075A68; }  /* 0C075AF6 bra */
L_0C075B00: BLKS(0x0C075B00u);
	r8 = 0xB4u; UPD(0x0C075B02u, 1);  /* 0C075B00 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C075B02 add #imm,Rn */
	IF(0x0C075B04u); MACL = r11 * r8;  /* 0C075B04 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C075B08u, 4);  /* 0C075B06 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C075B08 mov #imm,Rn */
	IF(0x0C075B0Au); r3 = MACL;  /* 0C075B0A sts macl,Rn */
	r3 += r0;  /* 0C075B0C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C075B10u, 4);  /* 0C075B0E mov.w @(disp,pc),Rn */
	IF(0x0C075B10u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C075B12u, 1);  /* 0C075B10 mov.b @(r0,Rm),Rn */
	r10 = r4 & 0xFF;  /* 0C075B12 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C075B16u, 2);  /* 0C075B14 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C075B16 add #imm,Rn */
	IF(0x0C075B18u); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C075B1Au, 2);  /* 0C075B18 mov.b @(r0,Rm),Rn */
	r2 = r9 & 0xFF;  /* 0C075B1A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C075B1Eu, 2);  /* 0C075B1C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C075B20u, 1);  /* 0C075B1E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C075B22u, 1);  /* 0C075B20 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C075B24u, 1);  /* 0C075B22 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C075A68u, 3); goto L_0C075A68; }  /* 0C075B24 bra */
L_0C075B30: BLKS(0x0C075B30u);
	r9 = 0xB4u; UPD(0x0C075B32u, 1);  /* 0C075B30 mov.w @(disp,pc),Rn */
	IF(0x0C075B32u); MACL = r11 * r9;  /* 0C075B32 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C075B36u, 3);  /* 0C075B34 mov.l @(disp,pc),Rn */
	IF(0x0C075B36u); r0 = MACL;  /* 0C075B36 sts macl,Rn */
	{ IF(0x0C075B3Au); W32(r0 + r8, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C075A88u, 4); goto L_0C075A88; }  /* 0C075B38 bra */
L_0C075B40: BLKS(0x0C075B40u);
	r9 = 0xB0u; UPD(0x0C075B42u, 1);  /* 0C075B40 mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C075B42 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C075B46u, 2);  /* 0C075B44 mov.b @Rm,Rn */
	r8 = r3 & 0xFF;  /* 0C075B46 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C075B4Au, 2);  /* 0C075B48 mov.l Rm,@Rn */
	r8 = 0xA9u; UPD(0x0C075B4Cu, 1);  /* 0C075B4A mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C075B4C add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C075B50u, 2);  /* 0C075B4E mov.b @Rm,Rn */
	r0 = 0xC0AD540u; UPD(0x0C075B52u, 1);  /* 0C075B50 mov.l @(disp,pc),Rn */
	r7 = r2 & 0xFF;  /* 0C075B52 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C075B56u, 2);  /* 0C075B54 mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C075B58u, 1);  /* 0C075B56 mov.l @Rm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C075B5Au, 1);  /* 0C075B58 mov.l @(disp,Rm),Rn */
	IF(0x0C075B5Au); { u32 t_ = r0; PR = 0x0C075B5Eu; r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AD540, 0x0C0AD540u, 0x0C075B5Eu); }  /* 0C075B5A jsr @Rn */
L_0C075B5E: BLKS(0x0C075B5Eu);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C075B60u, 1);  /* 0C075B5E mov.b @Rm,Rn */
	r4 = 0x30u;  /* 0C075B60 mov #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C075B64u, 2);  /* 0C075B62 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C075B64 extu.b Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C075B66 extu.b Rm,Rn */
	r0 = 0xC0AAE80u; UPD(0x0C075B6Au, 3);  /* 0C075B68 mov.l @(disp,pc),Rn */
	W32(r15, r5); UPD(0x0C075B6Cu, 1);  /* 0C075B6A mov.l Rm,@Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C075B6Eu, 1);  /* 0C075B6C mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C075B70u, 1);  /* 0C075B6E mov.l @Rm,Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C075B72u, 1);  /* 0C075B70 mov.l @(disp,Rm),Rn */
	IF(0x0C075B72u); { u32 t_ = r0; PR = 0x0C075B76u; r6 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AAE80, 0x0C0AAE80u, 0x0C075B76u); }  /* 0C075B72 jsr @Rn */
L_0C075B76: BLKS(0x0C075B76u);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C075B78u, 1);  /* 0C075B76 mov.b @Rm,Rn */
	r2 = 0xCu;  /* 0C075B78 mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C075B7Cu, 2);  /* 0C075B7A mov.b @Rm,Rn */
	r15 += 0x4u;  /* 0C075B7C add #imm,Rn */
	r8 = 0xC0AAFE0u; UPD(0x0C075B80u, 2);  /* 0C075B7E mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C075B80 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C075B84u, 2);  /* 0C075B82 mov.l Rm,@Rn */
	r6 = r3 & 0xFF;  /* 0C075B84 extu.b Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C075B88u, 2);  /* 0C075B86 mov.l @(disp,Rm),Rn */
	IF(0x0C075B88u); { u32 t_ = r8; PR = 0x0C075B8Cu; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AAFE0, 0x0C0AAFE0u, 0x0C075B8Cu); }  /* 0C075B88 jsr @Rn */
L_0C075B8C: BLKS(0x0C075B8Cu);
	r0 = 0xC0A03B0u; UPD(0x0C075B8Eu, 1);  /* 0C075B8C mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C075B8E add #imm,Rn */
	r4 = r11;  /* 0C075B90 mov Rm,Rn */
	IF(0x0C075B92u); { u32 t_ = r0; PR = 0x0C075B96u; W32(r10 + 0x8u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C075B96u); }  /* 0C075B92 jsr @Rn */
L_0C075B96: BLKS(0x0C075B96u);
	r0 = 0xC0A1530u; UPD(0x0C075B98u, 1);  /* 0C075B96 mov.l @(disp,pc),Rn */
	IF(0x0C075B98u); { u32 t_ = r0; PR = 0x0C075B9Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C075B9Cu); }  /* 0C075B98 jsr @Rn */
L_0C075B9C: BLKS(0x0C075B9Cu);
	r1 = R32(r10); UPD(0x0C075B9Eu, 1);  /* 0C075B9C mov.l @Rm,Rn */
	r2 = 0xFCFFFFFFu; UPD(0x0C075BA0u, 1);  /* 0C075B9E mov.l @(disp,pc),Rn */
	r1 &= r2;  /* 0C075BA0 and Rm,Rn */
	UPD(0x0C075BA2u, 1);
L_0C075BA2: BLKS(0x0C075BA2u);
	{ W32(r10, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C075A88u, 3); goto L_0C075A88; }  /* 0C075BA2 bra */
L_0C075BF0: BLKS(0x0C075BF0u);
	{ u32 c_ = T; r4 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075BF8u, 3); goto L_0C075BF8; } goto L_0C075BF4; }  /* 0C075BF0 bt/s */
L_0C075BF4: BLKS(0x0C075BF4u);
	{ IF(0x0C075BF6u); ; /* slot nop */ UPD(0x0C075A1Cu, 4); goto L_0C075A1C; }  /* 0C075BF4 bra */
L_0C075BF8: BLKS(0x0C075BF8u);
	r11 = 0xC0A03F0u; UPD(0x0C075BFAu, 1);  /* 0C075BF8 mov.l @(disp,pc),Rn */
	IF(0x0C075BFAu); { u32 t_ = r11; PR = 0x0C075BFEu; IF(0x0C075BFCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C075BFEu); }  /* 0C075BFA jsr @Rn */
L_0C075BFE: BLKS(0x0C075BFEu);
	IF(0x0C075BFEu); T = (s32)r0 >= 0;  /* 0C075BFE cmp/pz Rn */
	{ u32 c_ = !T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075C40u, 4); goto L_0C075C40; } goto L_0C075C04; }  /* 0C075C00 bf/s */
L_0C075C04: BLKS(0x0C075C04u);
	r0 = 0xB0u; UPD(0x0C075C06u, 2);  /* 0C075C04 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C075C06 add #imm,Rn */
	IF(0x0C075C08u); r2 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C075C0Au, 2);  /* 0C075C08 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C075C0A extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C075C0Eu, 2);  /* 0C075C0C mov.l Rm,@Rn */
	r7 = 0xA9u; UPD(0x0C075C10u, 1);  /* 0C075C0E mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C075C10 mov Rm,Rn */
	IF(0x0C075C12u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C075C14u, 2);  /* 0C075C12 mov.b @(r0,Rm),Rn */
	r11 = 0xC0AC800u; UPD(0x0C075C16u, 1);  /* 0C075C14 mov.l @(disp,pc),Rn */
	r5 = r6 & 0xFF;  /* 0C075C16 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C075C1Au, 2);  /* 0C075C18 mov.l Rm,@(disp,Rn) */
	r5 = 0x4u;  /* 0C075C1A mov #imm,Rn */
	r4 = R32(r10); UPD(0x0C075C1Eu, 2);  /* 0C075C1C mov.l @Rm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C075C20u, 1);  /* 0C075C1E mov.l @(disp,Rm),Rn */
	IF(0x0C075C20u); { u32 t_ = r11; PR = 0x0C075C24u; r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C075C24u); }  /* 0C075C20 jsr @Rn */
L_0C075C24: BLKS(0x0C075C24u);
	IF(0x0C075C24u); MACL = r12 * r8;  /* 0C075C24 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C075C28u, 3);  /* 0C075C26 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C075C28 add #imm,Rn */
	IF(0x0C075C2Au); r12 = MACL;  /* 0C075C2A sts macl,Rn */
	r12 += r9;  /* 0C075C2C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C075C30u, 4);  /* 0C075C2E mov.l @Rm,Rn */
	r9 = 0x0u;  /* 0C075C30 mov #imm,Rn */
	r4 |= r1;  /* 0C075C32 or Rm,Rn */
	W32(r12, r4); UPD(0x0C075C36u, 3);  /* 0C075C34 mov.l Rm,@Rn */
	{ W32(r10, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C075A88u, 3); goto L_0C075A88; }  /* 0C075C36 bra */
L_0C075C40: BLKS(0x0C075C40u);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C075BA2u, 3); goto L_0C075BA2; }  /* 0C075C40 bra */
L_0C075C50: BLKS(0x0C075C50u);
	r2 = 0xECFFFFFFu; UPD(0x0C075C52u, 1);  /* 0C075C50 mov.l @(disp,pc),Rn */
	{ r1 &= r2; /* slot and Rm,Rn */ UPD(0x0C075BA2u, 3); goto L_0C075BA2; }  /* 0C075C52 bra */
}

void f_0C075C70(sh3_t *c)
{
	LOCALS;
	goto L_0C075C70;
L_0C06FA70: BLKS(0x0C06FA70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06FA72u, 1);  /* 0C06FA70 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C06FA72 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06FA76u, 2);  /* 0C06FA74 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06FA78u, 1);  /* 0C06FA76 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06FA7Au, 1);  /* 0C06FA78 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06FA7Cu, 1);  /* 0C06FA7A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06FA7Eu, 1);  /* 0C06FA7C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06FA80u, 1);  /* 0C06FA7E mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C06FA80 exts.w Rm,Rn */
	IF(0x0C06FA82u); r15 -= 4; W32(r15, PR); UPD(0x0C06FA84u, 2);  /* 0C06FA82 sts.l pr,@-Rn */
	r4 = r13;  /* 0C06FA84 mov Rm,Rn */
	r8 = 0xC0A0670u; UPD(0x0C06FA88u, 2);  /* 0C06FA86 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06FA88 add #imm,Rn */
	IF(0x0C06FA8Au); { u32 t_ = r8; PR = 0x0C06FA8Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C06FA8Eu); }  /* 0C06FA8A jsr @Rn */
L_0C06FA8E: BLKS(0x0C06FA8Eu);
	T = (r0 & r0) == 0;  /* 0C06FA8E tst Rm,Rn */
	if (!T) { UPD(0x0C06FAB0u, 4); goto L_0C06FAB0; }  /* 0C06FA90 bf */
L_0C06FA92: BLKS(0x0C06FA92u);
	r14 += 0x8u;  /* 0C06FA92 add #imm,Rn */
	r15 = r14;  /* 0C06FA94 mov Rm,Rn */
	IF(0x0C06FA96u); PR = R32(r15); r15 += 4; UPD(0x0C06FA98u, 3);  /* 0C06FA96 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06FA9Au, 1);  /* 0C06FA98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06FA9Cu, 1);  /* 0C06FA9A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06FA9Eu, 1);  /* 0C06FA9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06FAA0u, 1);  /* 0C06FA9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06FAA2u, 1);  /* 0C06FAA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06FAA4u, 1);  /* 0C06FAA2 mov.l @Rm+,Rn */
	IF(0x0C06FAA4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06FAA4 rts */
L_0C06FAB0: BLKS(0x0C06FAB0u);
	r8 = 0xC0A9E40u; UPD(0x0C06FAB2u, 1);  /* 0C06FAB0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C06FAB2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C06FAB4 mov #imm,Rn */
	IF(0x0C06FAB6u); { u32 t_ = r8; PR = 0x0C06FABAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C06FABAu); }  /* 0C06FAB6 jsr @Rn */
L_0C06FABA: BLKS(0x0C06FABAu);
	T = (r0 & r0) == 0;  /* 0C06FABA tst Rm,Rn */
	if (T) { UPD(0x0C06FA92u, 4); goto L_0C06FA92; }  /* 0C06FABC bt */
L_0C06FABE: BLKS(0x0C06FABEu);
	r4 = 0xB4u; UPD(0x0C06FAC0u, 1);  /* 0C06FABE mov.w @(disp,pc),Rn */
	IF(0x0C06FAC0u); MACL = r13 * r4;  /* 0C06FAC0 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C06FAC4u, 3);  /* 0C06FAC2 mov.l @(disp,pc),Rn */
	IF(0x0C06FAC4u); r8 = MACL;  /* 0C06FAC4 sts macl,Rn */
	r8 += r0;  /* 0C06FAC6 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C06FACAu, 3);  /* 0C06FAC8 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C06FACA mov Rm,Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C06FACEu, 2);  /* 0C06FACC mov.l @(disp,pc),Rn */
	IF(0x0C06FACEu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06FAD0u, 1);  /* 0C06FACE mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C06FAD2u, 1);  /* 0C06FAD0 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C06FAD2 extu.b Rm,Rn */
	IF(0x0C06FAD4u); { u32 t_ = r9; PR = 0x0C06FAD8u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C06FAD8u); }  /* 0C06FAD4 jsr @Rn */
L_0C06FAD8: BLKS(0x0C06FAD8u);
	T = (r0 & r0) == 0;  /* 0C06FAD8 tst Rm,Rn */
	if (T) { UPD(0x0C06FA92u, 4); goto L_0C06FA92; }  /* 0C06FADA bt */
L_0C06FADC: BLKS(0x0C06FADCu);
	r5 = 0x0u;  /* 0C06FADC mov #imm,Rn */
	W32(r14, r5); UPD(0x0C06FAE0u, 2);  /* 0C06FADE mov.l Rm,@Rn */
	W32(r14 + 0x4u, r8); UPD(0x0C06FAE2u, 1);  /* 0C06FAE0 mov.l Rm,@(disp,Rn) */
	IF(0x0C06FAE2u); ;  /* 0C06FAE2 nop */
	UPD(0x0C06FAE4u, 1);
L_0C06FAE4: BLKS(0x0C06FAE4u);
	r0 = R32(r14 + 0x4u); UPD(0x0C06FAE6u, 1);  /* 0C06FAE4 mov.l @(disp,Rm),Rn */
	r12 = 0x86u; UPD(0x0C06FAE8u, 1);  /* 0C06FAE6 mov.w @(disp,pc),Rn */
	r9 = R32(r14); UPD(0x0C06FAEAu, 1);  /* 0C06FAE8 mov.l @Rm,Rn */
	IF(0x0C06FAEAu); r7 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C06FAECu, 1);  /* 0C06FAEA mov.w @(r0,Rm),Rn */
	IF(0x0C06FAECu); r9 <<= 2;  /* 0C06FAEC shll2 Rn */
	r11 = 0xC17F0D6u; UPD(0x0C06FAF0u, 2);  /* 0C06FAEE mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06FAF0 mov Rm,Rn */
	IF(0x0C06FAF2u); r10 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C06FAF4u, 2);  /* 0C06FAF2 mov.w @(r0,Rm),Rn */
	r6 = 0xC058060u; UPD(0x0C06FAF6u, 1);  /* 0C06FAF4 mov.l @(disp,pc),Rn */
	r7 += r10;  /* 0C06FAF6 add Rm,Rn */
	r11 = 0xC17F0B4u; UPD(0x0C06FAFAu, 2);  /* 0C06FAF8 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C06FAFA exts.w Rm,Rn */
	r11 += r9;  /* 0C06FAFC add Rm,Rn */
	r4 = r10;  /* 0C06FAFE mov Rm,Rn */
	IF(0x0C06FB00u); { u32 t_ = r6; PR = 0x0C06FB04u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06FB04u); }  /* 0C06FB00 jsr @Rn */
L_0C06FB04: BLKS(0x0C06FB04u);
	r1 = 0xC058030u; UPD(0x0C06FB06u, 1);  /* 0C06FB04 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C06FB06 mov Rm,Rn */
	r12 = 0xC17F0C4u; UPD(0x0C06FB0Au, 2);  /* 0C06FB08 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C06FB0A mov Rm,Rn */
	r12 += r9;  /* 0C06FB0C add Rm,Rn */
	IF(0x0C06FB0Eu); { u32 t_ = r1; PR = 0x0C06FB12u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06FB12u); }  /* 0C06FB0E jsr @Rn */
L_0C06FB12: BLKS(0x0C06FB12u);
	r8 -= r0;  /* 0C06FB12 sub Rm,Rn */
	r1 = r8;  /* 0C06FB14 mov Rm,Rn */
	r1 += r1;  /* 0C06FB16 add Rm,Rn */
	r1 += r8;  /* 0C06FB18 add Rm,Rn */
	IF(0x0C06FB1Au); T = (s32)r1 >= 0;  /* 0C06FB1A cmp/pz Rn */
	if (!T) { UPD(0x0C06FB90u, 8); goto L_0C06FB90; }  /* 0C06FB1C bf */
L_0C06FB1E: BLKS(0x0C06FB1Eu);
	r9 = R32(r14 + 0x4u); UPD(0x0C06FB20u, 1);  /* 0C06FB1E mov.l @(disp,Rm),Rn */
	IF(0x0C06FB20u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C06FB20 shar Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C06FB24u, 2);  /* 0C06FB22 mov.l @(disp,Rm),Rn */
	IF(0x0C06FB24u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C06FB24 shar Rn */
	r7 = 0xC058030u; UPD(0x0C06FB28u, 2);  /* 0C06FB26 mov.l @(disp,pc),Rn */
	r8 += r1;  /* 0C06FB28 add Rm,Rn */
	r5 = 0x10000u; UPD(0x0C06FB2Cu, 2);  /* 0C06FB2A mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C06FB2C mov Rm,Rn */
	r8 += r5;  /* 0C06FB2E add Rm,Rn */
	IF(0x0C06FB30u); { u32 t_ = r7; PR = 0x0C06FB34u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06FB34u); }  /* 0C06FB30 jsr @Rn */
L_0C06FB34: BLKS(0x0C06FB34u);
	r4 = R32(r14 + 0x4u); UPD(0x0C06FB36u, 1);  /* 0C06FB34 mov.l @(disp,Rm),Rn */
	r6 = 0xC058060u; UPD(0x0C06FB38u, 1);  /* 0C06FB36 mov.l @(disp,pc),Rn */
	r11 = R32(r4 + 0x28u); UPD(0x0C06FB3Au, 1);  /* 0C06FB38 mov.l @(disp,Rm),Rn */
	r5 = R32(r12); UPD(0x0C06FB3Cu, 1);  /* 0C06FB3A mov.l @Rm,Rn */
	r4 = r10;  /* 0C06FB3C mov Rm,Rn */
	IF(0x0C06FB3Eu); { u32 t_ = r6; PR = 0x0C06FB42u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06FB42u); }  /* 0C06FB3E jsr @Rn */
L_0C06FB42: BLKS(0x0C06FB42u);
	r7 = r10;  /* 0C06FB42 mov Rm,Rn */
	r11 += r0;  /* 0C06FB44 add Rm,Rn */
	r10 = 0xC0A8510u; UPD(0x0C06FB48u, 3);  /* 0C06FB46 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06FB48 add #imm,Rn */
	r0 = 0x28000u; UPD(0x0C06FB4Cu, 2);  /* 0C06FB4A mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C06FB4C mov Rm,Rn */
	W32(r15, r0); UPD(0x0C06FB50u, 2);  /* 0C06FB4E mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C06FB50 mov #imm,Rn */
	IF(0x0C06FB52u); { u32 t_ = r10; PR = 0x0C06FB56u; r6 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A8510, 0x0C0A8510u, 0x0C06FB56u); }  /* 0C06FB52 jsr @Rn */
L_0C06FB56: BLKS(0x0C06FB56u);
	r3 = R32(r14); UPD(0x0C06FB58u, 1);  /* 0C06FB56 mov.l @Rm,Rn */
	r8 = 0x3u;  /* 0C06FB58 mov #imm,Rn */
	r3 += 0x1u;  /* 0C06FB5A add #imm,Rn */
	r2 = (u32)(s32)(s16)r3;  /* 0C06FB5C exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C06FB60u, 4);  /* 0C06FB5E mov.l Rm,@Rn */
	r9 = R32(r14); UPD(0x0C06FB62u, 1);  /* 0C06FB60 mov.l @Rm,Rn */
	T = (s32)r9 > (s32)r8;  /* 0C06FB62 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06FAE4u, 4); goto L_0C06FAE4; } goto L_0C06FB68; }  /* 0C06FB64 bf/s */
L_0C06FB68: BLKS(0x0C06FB68u);
	r2 = 0xC0580D0u; UPD(0x0C06FB6Au, 2);  /* 0C06FB68 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C06FB6A mov Rm,Rn */
	r14 += 0x8u;  /* 0C06FB6C add #imm,Rn */
	r15 = r14;  /* 0C06FB6E mov Rm,Rn */
	IF(0x0C06FB70u); PR = R32(r15); r15 += 4; UPD(0x0C06FB72u, 4);  /* 0C06FB70 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06FB74u, 1);  /* 0C06FB72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06FB76u, 1);  /* 0C06FB74 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06FB78u, 1);  /* 0C06FB76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06FB7Au, 1);  /* 0C06FB78 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06FB7Cu, 1);  /* 0C06FB7A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06FB7Eu, 1);  /* 0C06FB7C mov.l @Rm+,Rn */
	IF(0x0C06FB7Eu); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0580D0u: TAIL(f_0C0580D0); default: JUMPD(tv_); } }  /* 0C06FB7E jmp @Rn */
L_0C06FB90: BLKS(0x0C06FB90u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C06FB1Eu, 3); goto L_0C06FB1E; }  /* 0C06FB90 bra */
L_0C0759E0: BLKS(0x0C0759E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0759E2u, 1);  /* 0C0759E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0759E4u, 1);  /* 0C0759E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0759E6u, 1);  /* 0C0759E4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0759E8u, 1);  /* 0C0759E6 mov.l Rm,@-Rn */
	r8 = 0xB4u; UPD(0x0C0759EAu, 1);  /* 0C0759E8 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0759EA exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0759EEu, 2);  /* 0C0759EC mov.l Rm,@-Rn */
	IF(0x0C0759EEu); MACL = r11 * r8;  /* 0C0759EE mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0759F2u, 3);  /* 0C0759F0 mov.l Rm,@-Rn */
	r9 = 0xC26CD40u; UPD(0x0C0759F4u, 1);  /* 0C0759F2 mov.l @(disp,pc),Rn */
	IF(0x0C0759F4u); r10 = MACL;  /* 0C0759F4 sts macl,Rn */
	IF(0x0C0759F6u); r15 -= 4; W32(r15, PR); UPD(0x0C0759F8u, 2);  /* 0C0759F6 sts.l pr,@-Rn */
	r10 += r9;  /* 0C0759F8 add Rm,Rn */
	r0 = R32(r10 + 0x8u); UPD(0x0C0759FCu, 2);  /* 0C0759FA mov.l @(disp,Rm),Rn */
	T = r0 == 0x1u;  /* 0C0759FC cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075A06u, 4); goto L_0C075A06; } goto L_0C075A02; }  /* 0C0759FE bf/s */
L_0C075A02: BLKS(0x0C075A02u);
	{ r1 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(0x0C075C50u, 4); goto L_0C075C50; }  /* 0C075A02 bra */
L_0C075A06: BLKS(0x0C075A06u);
	r12 = 0x1u;  /* 0C075A06 mov #imm,Rn */
	T = (s32)r0 > (s32)r12;  /* 0C075A08 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C075A12u, 5); goto L_0C075A12; } goto L_0C075A0E; }  /* 0C075A0A bf/s */
L_0C075A0E: BLKS(0x0C075A0Eu);
	{ IF(0x0C075A10u); ; /* slot nop */ UPD(0x0C075BF0u, 4); goto L_0C075BF0; }  /* 0C075A0E bra */
L_0C075A12: BLKS(0x0C075A12u);
	T = (r0 & r0) == 0;  /* 0C075A12 tst Rm,Rn */
	if (!T) { UPD(0x0C075A1Cu, 4); goto L_0C075A1C; }  /* 0C075A14 bf */
L_0C075A16: BLKS(0x0C075A16u);
	r15 += 0xFFFFFFF8u;  /* 0C075A16 add #imm,Rn */
	{ r5 = 0xEu; /* slot mov #imm,Rn */ UPD(0x0C075B40u, 4); goto L_0C075B40; }  /* 0C075A18 bra */
L_0C075A1C: BLKS(0x0C075A1Cu);
	r10 = 0xC0A03F0u; UPD(0x0C075A1Eu, 1);  /* 0C075A1C mov.l @(disp,pc),Rn */
	IF(0x0C075A1Eu); { u32 t_ = r10; PR = 0x0C075A22u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C075A22u); }  /* 0C075A1E jsr @Rn */
L_0C075A22: BLKS(0x0C075A22u);
	IF(0x0C075A22u); T = (s32)r0 >= 0;  /* 0C075A22 cmp/pz Rn */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075A2Cu, 4); goto L_0C075A2C; } goto L_0C075A28; }  /* 0C075A24 bt/s */
L_0C075A28: BLKS(0x0C075A28u);
	{ r3 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C075B30u, 4); goto L_0C075B30; }  /* 0C075A28 bra */
L_0C075A2C: BLKS(0x0C075A2Cu);
	r10 = 0xC050D70u; UPD(0x0C075A2Eu, 1);  /* 0C075A2C mov.l @(disp,pc),Rn */
	IF(0x0C075A2Eu); { u32 t_ = r10; PR = 0x0C075A32u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C075A32u); }  /* 0C075A2E jsr @Rn */
L_0C075A32: BLKS(0x0C075A32u);
	T = r0 == 0x2u;  /* 0C075A32 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C075B00u, 4); goto L_0C075B00; }  /* 0C075A34 bt */
L_0C075A36: BLKS(0x0C075A36u);
	r4 = 0x2u;  /* 0C075A36 mov #imm,Rn */
	T = (s32)r0 > (s32)r4;  /* 0C075A38 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C075AD0u, 5); goto L_0C075AD0; } goto L_0C075A3E; }  /* 0C075A3A bt/s */
L_0C075A3E: BLKS(0x0C075A3Eu);
	T = r0 == 0x1u;  /* 0C075A3E cmp/eq #imm,r0 */
	if (T) { UPD(0x0C075AA0u, 5); goto L_0C075AA0; }  /* 0C075A40 bt */
L_0C075A42: BLKS(0x0C075A42u);
	r3 = 0xB4u; UPD(0x0C075A44u, 1);  /* 0C075A42 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C075A44 add #imm,Rn */
	IF(0x0C075A46u); MACL = r11 * r3;  /* 0C075A46 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C075A4Au, 4);  /* 0C075A48 mov.l @(disp,pc),Rn */
	IF(0x0C075A4Au); r8 = MACL;  /* 0C075A4A sts macl,Rn */
	r8 += r0;  /* 0C075A4C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C075A50u, 3);  /* 0C075A4E mov.w @(disp,pc),Rn */
	IF(0x0C075A50u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C075A52u, 1);  /* 0C075A50 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C075A52 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C075A56u, 2);  /* 0C075A54 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C075A56 add #imm,Rn */
	IF(0x0C075A58u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C075A5Au, 2);  /* 0C075A58 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C075A5A extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C075A5Eu, 2);  /* 0C075A5C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C075A60u, 1);  /* 0C075A5E mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C075A60 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C075A64u, 2);  /* 0C075A62 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C075A66u, 1);  /* 0C075A64 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C075A68u, 1);  /* 0C075A66 mov.l @(disp,Rm),Rn */
L_0C075A68: BLKS(0x0C075A68u);
	IF(0x0C075A68u); { u32 t_ = r0; PR = 0x0C075A6Cu; IF(0x0C075A6Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C075A6Cu); }  /* 0C075A68 jsr @Rn */
L_0C075A6C: BLKS(0x0C075A6Cu);
	r0 = 0xB4u; UPD(0x0C075A6Eu, 1);  /* 0C075A6C mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C075A6E add #imm,Rn */
	IF(0x0C075A70u); MACL = r12 * r0;  /* 0C075A70 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C075A74u, 4);  /* 0C075A72 mov.l @(disp,pc),Rn */
	IF(0x0C075A74u); r8 = MACL;  /* 0C075A74 sts macl,Rn */
	r8 += r4;  /* 0C075A76 add Rm,Rn */
	r3 = R32(r8); UPD(0x0C075A7Au, 3);  /* 0C075A78 mov.l @Rm,Rn */
	IF(0x0C075A7Au); MACL = r11 * r0;  /* 0C075A7A mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C075A7Eu, 3);  /* 0C075A7C mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C075A7E mov #imm,Rn */
	r3 |= r1;  /* 0C075A80 or Rm,Rn */
	W32(r8, r3); UPD(0x0C075A84u, 3);  /* 0C075A82 mov.l Rm,@Rn */
	IF(0x0C075A84u); r0 = MACL;  /* 0C075A84 sts macl,Rn */
	IF(0x0C075A86u); W32(r0 + r4, r12); UPD(0x0C075A88u, 2);  /* 0C075A86 mov.l Rm,@(r0,Rn) */
L_0C075A88: BLKS(0x0C075A88u);
	r15 = r14;  /* 0C075A88 mov Rm,Rn */
	IF(0x0C075A8Au); PR = R32(r15); r15 += 4; UPD(0x0C075A8Cu, 2);  /* 0C075A8A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C075A8Eu, 1);  /* 0C075A8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C075A90u, 1);  /* 0C075A8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C075A92u, 1);  /* 0C075A90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C075A94u, 1);  /* 0C075A92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C075A96u, 1);  /* 0C075A94 mov.l @Rm+,Rn */
	IF(0x0C075A96u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C075A96 rts */
L_0C075AA0: BLKS(0x0C075AA0u);
	r7 = 0xB4u; UPD(0x0C075AA2u, 1);  /* 0C075AA0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C075AA2 add #imm,Rn */
	IF(0x0C075AA4u); MACL = r11 * r7;  /* 0C075AA4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C075AA8u, 4);  /* 0C075AA6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C075AAAu, 1);  /* 0C075AA8 mov.w @(disp,pc),Rn */
	IF(0x0C075AAAu); r9 = MACL;  /* 0C075AAA sts macl,Rn */
	r9 += r6;  /* 0C075AAC add Rm,Rn */
	IF(0x0C075AAEu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C075AB0u, 3);  /* 0C075AAE mov.b @(r0,Rm),Rn */
	r8 = r5 & 0xFF;  /* 0C075AB0 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C075AB4u, 2);  /* 0C075AB2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C075AB4 add #imm,Rn */
	IF(0x0C075AB6u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C075AB8u, 2);  /* 0C075AB6 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C075AB8 mov #imm,Rn */
	r10 = r4 & 0xFF;  /* 0C075ABA extu.b Rm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C075ABEu, 3);  /* 0C075ABC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C075AC0u, 1);  /* 0C075ABE mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C075AC2u, 1);  /* 0C075AC0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C075AC4u, 1);  /* 0C075AC2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C075A68u, 3); goto L_0C075A68; }  /* 0C075AC4 bra */
L_0C075AD0: BLKS(0x0C075AD0u);
	if (!T) { UPD(0x0C075A42u, 3); goto L_0C075A42; }  /* 0C075AD0 bf */
L_0C075AD2: BLKS(0x0C075AD2u);
	r15 += 0xFFFFFFF8u;  /* 0C075AD2 add #imm,Rn */
	r10 = 0xB4u; UPD(0x0C075AD6u, 2);  /* 0C075AD4 mov.w @(disp,pc),Rn */
	IF(0x0C075AD6u); MACL = r11 * r10;  /* 0C075AD6 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C075ADAu, 3);  /* 0C075AD8 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C075ADCu, 1);  /* 0C075ADA mov.w @(disp,pc),Rn */
	IF(0x0C075ADCu); r3 = MACL;  /* 0C075ADC sts macl,Rn */
	r3 += r9;  /* 0C075ADE add Rm,Rn */
	IF(0x0C075AE0u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C075AE2u, 3);  /* 0C075AE0 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C075AE2 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C075AE6u, 2);  /* 0C075AE4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C075AE6 add #imm,Rn */
	IF(0x0C075AE8u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C075AEAu, 2);  /* 0C075AE8 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C075AEA extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C075AEEu, 2);  /* 0C075AEC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C075AF0u, 1);  /* 0C075AEE mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C075AF0 mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C075AF4u, 2);  /* 0C075AF2 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C075AF6u, 1);  /* 0C075AF4 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C075A68u, 3); goto L_0C075A68; }  /* 0C075AF6 bra */
L_0C075B00: BLKS(0x0C075B00u);
	r8 = 0xB4u; UPD(0x0C075B02u, 1);  /* 0C075B00 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C075B02 add #imm,Rn */
	IF(0x0C075B04u); MACL = r11 * r8;  /* 0C075B04 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C075B08u, 4);  /* 0C075B06 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C075B08 mov #imm,Rn */
	IF(0x0C075B0Au); r3 = MACL;  /* 0C075B0A sts macl,Rn */
	r3 += r0;  /* 0C075B0C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C075B10u, 4);  /* 0C075B0E mov.w @(disp,pc),Rn */
	IF(0x0C075B10u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C075B12u, 1);  /* 0C075B10 mov.b @(r0,Rm),Rn */
	r10 = r4 & 0xFF;  /* 0C075B12 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C075B16u, 2);  /* 0C075B14 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C075B16 add #imm,Rn */
	IF(0x0C075B18u); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C075B1Au, 2);  /* 0C075B18 mov.b @(r0,Rm),Rn */
	r2 = r9 & 0xFF;  /* 0C075B1A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C075B1Eu, 2);  /* 0C075B1C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C075B20u, 1);  /* 0C075B1E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C075B22u, 1);  /* 0C075B20 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C075B24u, 1);  /* 0C075B22 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C075A68u, 3); goto L_0C075A68; }  /* 0C075B24 bra */
L_0C075B30: BLKS(0x0C075B30u);
	r9 = 0xB4u; UPD(0x0C075B32u, 1);  /* 0C075B30 mov.w @(disp,pc),Rn */
	IF(0x0C075B32u); MACL = r11 * r9;  /* 0C075B32 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C075B36u, 3);  /* 0C075B34 mov.l @(disp,pc),Rn */
	IF(0x0C075B36u); r0 = MACL;  /* 0C075B36 sts macl,Rn */
	{ IF(0x0C075B3Au); W32(r0 + r8, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C075A88u, 4); goto L_0C075A88; }  /* 0C075B38 bra */
L_0C075B40: BLKS(0x0C075B40u);
	r9 = 0xB0u; UPD(0x0C075B42u, 1);  /* 0C075B40 mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C075B42 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C075B46u, 2);  /* 0C075B44 mov.b @Rm,Rn */
	r8 = r3 & 0xFF;  /* 0C075B46 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C075B4Au, 2);  /* 0C075B48 mov.l Rm,@Rn */
	r8 = 0xA9u; UPD(0x0C075B4Cu, 1);  /* 0C075B4A mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C075B4C add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C075B50u, 2);  /* 0C075B4E mov.b @Rm,Rn */
	r0 = 0xC0AD540u; UPD(0x0C075B52u, 1);  /* 0C075B50 mov.l @(disp,pc),Rn */
	r7 = r2 & 0xFF;  /* 0C075B52 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C075B56u, 2);  /* 0C075B54 mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C075B58u, 1);  /* 0C075B56 mov.l @Rm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C075B5Au, 1);  /* 0C075B58 mov.l @(disp,Rm),Rn */
	IF(0x0C075B5Au); { u32 t_ = r0; PR = 0x0C075B5Eu; r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AD540, 0x0C0AD540u, 0x0C075B5Eu); }  /* 0C075B5A jsr @Rn */
L_0C075B5E: BLKS(0x0C075B5Eu);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C075B60u, 1);  /* 0C075B5E mov.b @Rm,Rn */
	r4 = 0x30u;  /* 0C075B60 mov #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C075B64u, 2);  /* 0C075B62 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C075B64 extu.b Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C075B66 extu.b Rm,Rn */
	r0 = 0xC0AAE80u; UPD(0x0C075B6Au, 3);  /* 0C075B68 mov.l @(disp,pc),Rn */
	W32(r15, r5); UPD(0x0C075B6Cu, 1);  /* 0C075B6A mov.l Rm,@Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C075B6Eu, 1);  /* 0C075B6C mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C075B70u, 1);  /* 0C075B6E mov.l @Rm,Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C075B72u, 1);  /* 0C075B70 mov.l @(disp,Rm),Rn */
	IF(0x0C075B72u); { u32 t_ = r0; PR = 0x0C075B76u; r6 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AAE80, 0x0C0AAE80u, 0x0C075B76u); }  /* 0C075B72 jsr @Rn */
L_0C075B76: BLKS(0x0C075B76u);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C075B78u, 1);  /* 0C075B76 mov.b @Rm,Rn */
	r2 = 0xCu;  /* 0C075B78 mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C075B7Cu, 2);  /* 0C075B7A mov.b @Rm,Rn */
	r15 += 0x4u;  /* 0C075B7C add #imm,Rn */
	r8 = 0xC0AAFE0u; UPD(0x0C075B80u, 2);  /* 0C075B7E mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C075B80 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C075B84u, 2);  /* 0C075B82 mov.l Rm,@Rn */
	r6 = r3 & 0xFF;  /* 0C075B84 extu.b Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C075B88u, 2);  /* 0C075B86 mov.l @(disp,Rm),Rn */
	IF(0x0C075B88u); { u32 t_ = r8; PR = 0x0C075B8Cu; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AAFE0, 0x0C0AAFE0u, 0x0C075B8Cu); }  /* 0C075B88 jsr @Rn */
L_0C075B8C: BLKS(0x0C075B8Cu);
	r0 = 0xC0A03B0u; UPD(0x0C075B8Eu, 1);  /* 0C075B8C mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C075B8E add #imm,Rn */
	r4 = r11;  /* 0C075B90 mov Rm,Rn */
	IF(0x0C075B92u); { u32 t_ = r0; PR = 0x0C075B96u; W32(r10 + 0x8u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C075B96u); }  /* 0C075B92 jsr @Rn */
L_0C075B96: BLKS(0x0C075B96u);
	r0 = 0xC0A1530u; UPD(0x0C075B98u, 1);  /* 0C075B96 mov.l @(disp,pc),Rn */
	IF(0x0C075B98u); { u32 t_ = r0; PR = 0x0C075B9Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C075B9Cu); }  /* 0C075B98 jsr @Rn */
L_0C075B9C: BLKS(0x0C075B9Cu);
	r1 = R32(r10); UPD(0x0C075B9Eu, 1);  /* 0C075B9C mov.l @Rm,Rn */
	r2 = 0xFCFFFFFFu; UPD(0x0C075BA0u, 1);  /* 0C075B9E mov.l @(disp,pc),Rn */
	r1 &= r2;  /* 0C075BA0 and Rm,Rn */
	UPD(0x0C075BA2u, 1);
L_0C075BA2: BLKS(0x0C075BA2u);
	{ W32(r10, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C075A88u, 3); goto L_0C075A88; }  /* 0C075BA2 bra */
L_0C075BF0: BLKS(0x0C075BF0u);
	{ u32 c_ = T; r4 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075BF8u, 3); goto L_0C075BF8; } goto L_0C075BF4; }  /* 0C075BF0 bt/s */
L_0C075BF4: BLKS(0x0C075BF4u);
	{ IF(0x0C075BF6u); ; /* slot nop */ UPD(0x0C075A1Cu, 4); goto L_0C075A1C; }  /* 0C075BF4 bra */
L_0C075BF8: BLKS(0x0C075BF8u);
	r11 = 0xC0A03F0u; UPD(0x0C075BFAu, 1);  /* 0C075BF8 mov.l @(disp,pc),Rn */
	IF(0x0C075BFAu); { u32 t_ = r11; PR = 0x0C075BFEu; IF(0x0C075BFCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C075BFEu); }  /* 0C075BFA jsr @Rn */
L_0C075BFE: BLKS(0x0C075BFEu);
	IF(0x0C075BFEu); T = (s32)r0 >= 0;  /* 0C075BFE cmp/pz Rn */
	{ u32 c_ = !T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075C40u, 4); goto L_0C075C40; } goto L_0C075C04; }  /* 0C075C00 bf/s */
L_0C075C04: BLKS(0x0C075C04u);
	r0 = 0xB0u; UPD(0x0C075C06u, 2);  /* 0C075C04 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C075C06 add #imm,Rn */
	IF(0x0C075C08u); r2 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C075C0Au, 2);  /* 0C075C08 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C075C0A extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C075C0Eu, 2);  /* 0C075C0C mov.l Rm,@Rn */
	r7 = 0xA9u; UPD(0x0C075C10u, 1);  /* 0C075C0E mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C075C10 mov Rm,Rn */
	IF(0x0C075C12u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C075C14u, 2);  /* 0C075C12 mov.b @(r0,Rm),Rn */
	r11 = 0xC0AC800u; UPD(0x0C075C16u, 1);  /* 0C075C14 mov.l @(disp,pc),Rn */
	r5 = r6 & 0xFF;  /* 0C075C16 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C075C1Au, 2);  /* 0C075C18 mov.l Rm,@(disp,Rn) */
	r5 = 0x4u;  /* 0C075C1A mov #imm,Rn */
	r4 = R32(r10); UPD(0x0C075C1Eu, 2);  /* 0C075C1C mov.l @Rm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C075C20u, 1);  /* 0C075C1E mov.l @(disp,Rm),Rn */
	IF(0x0C075C20u); { u32 t_ = r11; PR = 0x0C075C24u; r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C075C24u); }  /* 0C075C20 jsr @Rn */
L_0C075C24: BLKS(0x0C075C24u);
	IF(0x0C075C24u); MACL = r12 * r8;  /* 0C075C24 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C075C28u, 3);  /* 0C075C26 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C075C28 add #imm,Rn */
	IF(0x0C075C2Au); r12 = MACL;  /* 0C075C2A sts macl,Rn */
	r12 += r9;  /* 0C075C2C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C075C30u, 4);  /* 0C075C2E mov.l @Rm,Rn */
	r9 = 0x0u;  /* 0C075C30 mov #imm,Rn */
	r4 |= r1;  /* 0C075C32 or Rm,Rn */
	W32(r12, r4); UPD(0x0C075C36u, 3);  /* 0C075C34 mov.l Rm,@Rn */
	{ W32(r10, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C075A88u, 3); goto L_0C075A88; }  /* 0C075C36 bra */
L_0C075C40: BLKS(0x0C075C40u);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C075BA2u, 3); goto L_0C075BA2; }  /* 0C075C40 bra */
L_0C075C50: BLKS(0x0C075C50u);
	r2 = 0xECFFFFFFu; UPD(0x0C075C52u, 1);  /* 0C075C50 mov.l @(disp,pc),Rn */
	{ r1 &= r2; /* slot and Rm,Rn */ UPD(0x0C075BA2u, 3); goto L_0C075BA2; }  /* 0C075C52 bra */
L_0C075C70: BLKS(0x0C075C70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C075C72u, 1);  /* 0C075C70 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C075C74u, 1);  /* 0C075C72 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C075C76u, 1);  /* 0C075C74 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C075C78u, 1);  /* 0C075C76 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C075C7Au, 1);  /* 0C075C78 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C075C7A exts.w Rm,Rn */
	r9 = 0xB4u; UPD(0x0C075C7Eu, 2);  /* 0C075C7C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C075C80u, 1);  /* 0C075C7E mov.l Rm,@-Rn */
	IF(0x0C075C80u); MACL = r11 * r9;  /* 0C075C80 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C075C84u, 3);  /* 0C075C82 mov.l Rm,@-Rn */
	r8 = 0xC26CD40u; UPD(0x0C075C86u, 1);  /* 0C075C84 mov.l @(disp,pc),Rn */
	IF(0x0C075C86u); r13 = MACL;  /* 0C075C86 sts macl,Rn */
	IF(0x0C075C88u); r15 -= 4; W32(r15, PR); UPD(0x0C075C8Au, 2);  /* 0C075C88 sts.l pr,@-Rn */
	r13 += r8;  /* 0C075C8A add Rm,Rn */
	r0 = R32(r13 + 0x8u); UPD(0x0C075C8Eu, 2);  /* 0C075C8C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C075C8E add #imm,Rn */
	IF(0x0C075C90u); T = (s32)r0 >= 0;  /* 0C075C90 cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075CA8u, 5); goto L_0C075CA8; } goto L_0C075C96; }  /* 0C075C92 bf/s */
L_0C075C96: BLKS(0x0C075C96u);
	r2 = 0x1u;  /* 0C075C96 mov #imm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C075C98 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C075CA2u, 6); goto L_0C075CA2; } goto L_0C075C9E; }  /* 0C075C9A bt/s */
L_0C075C9E: BLKS(0x0C075C9Eu);
	{ r13 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C076190u, 4); goto L_0C076190; }  /* 0C075C9E bra */
L_0C075CA2: BLKS(0x0C075CA2u);
	if (!T) { UPD(0x0C075CA8u, 3); goto L_0C075CA8; }  /* 0C075CA2 bf */
L_0C075CA4: BLKS(0x0C075CA4u);
	{ IF(0x0C075CA6u); ; /* slot nop */ UPD(0x0C076030u, 3); goto L_0C076030; }  /* 0C075CA4 bra */
L_0C075CA8: BLKS(0x0C075CA8u);
	r8 = 0xC0A03F0u; UPD(0x0C075CAAu, 1);  /* 0C075CA8 mov.l @(disp,pc),Rn */
	IF(0x0C075CAAu); { u32 t_ = r8; PR = 0x0C075CAEu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C075CAEu); }  /* 0C075CAA jsr @Rn */
L_0C075CAE: BLKS(0x0C075CAEu);
	IF(0x0C075CAEu); T = (s32)r0 >= 0;  /* 0C075CAE cmp/pz Rn */
	{ u32 c_ = T; r6 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C075CB8u, 4); goto L_0C075CB8; } goto L_0C075CB4; }  /* 0C075CB0 bt/s */
L_0C075CB4: BLKS(0x0C075CB4u);
	{ IF(0x0C075CB6u); ; /* slot nop */ UPD(0x0C076020u, 4); goto L_0C076020; }  /* 0C075CB4 bra */
L_0C075CB8: BLKS(0x0C075CB8u);
	r2 = 0xB4u; UPD(0x0C075CBAu, 1);  /* 0C075CB8 mov.w @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C075CBA mov #imm,Rn */
	IF(0x0C075CBCu); MACL = r11 * r2;  /* 0C075CBC mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C075CC0u, 4);  /* 0C075CBE mov.l @(disp,pc),Rn */
	IF(0x0C075CC0u); r5 = MACL;  /* 0C075CC0 sts macl,Rn */
	IF(0x0C075CC2u); MACL = r0 * r2;  /* 0C075CC2 mul.l Rm,Rn */
	r5 += r10;  /* 0C075CC4 add Rm,Rn */
	r12 = R32(r5 + 0x2Cu); UPD(0x0C075CC8u, 5);  /* 0C075CC6 mov.l @(disp,Rm),Rn */
	IF(0x0C075CC8u); r0 = MACL;  /* 0C075CC8 sts macl,Rn */
	r0 += r10;  /* 0C075CCA add Rm,Rn */
	r7 = R32(r0 + 0x24u); UPD(0x0C075CCEu, 3);  /* 0C075CCC mov.l @(disp,Rm),Rn */
	r9 = R32(r0 + 0x28u); UPD(0x0C075CD0u, 1);  /* 0C075CCE mov.l @(disp,Rm),Rn */
	r7 += r12;  /* 0C075CD0 add Rm,Rn */
	r1 = R32(r5 + 0x30u); UPD(0x0C075CD4u, 2);  /* 0C075CD2 mov.l @(disp,Rm),Rn */
	r2 = R32(r5 + 0x8u); UPD(0x0C075CD6u, 1);  /* 0C075CD4 mov.l @(disp,Rm),Rn */
	r9 += r1;  /* 0C075CD6 add Rm,Rn */
	r2 += 0xFFFFFFFDu;  /* 0C075CD8 add #imm,Rn */
	W32(r5 + 0x24u, r7); UPD(0x0C075CDCu, 3);  /* 0C075CDA mov.l Rm,@(disp,Rn) */
	T = r2 > r4;  /* 0C075CDC cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r5 + 0x28u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C075D3Cu, 4); goto L_0C075D3C; } UPD(0x0C075CE2u, 1); goto L_0C075CE2; }  /* 0C075CDE bt/s */
L_0C075CE2: BLKS(0x0C075CE2u);
	r0 = 0xC075CF8u;  /* 0C075CE2 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C075CE4 add Rm,Rn */
	IF(0x0C075CE6u); r13 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C075CE8u, 3);  /* 0C075CE6 mov.w @(r0,Rm),Rn */
	IF(0x0C075CE8u); { u32 tv_ = (r13 + 0x0C075CECu); u32 t_ = PHYS(tv_); IF(0x0C075CEAu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C075D10u: goto L_0C075D10; case 0x0C075D30u: goto L_0C075D30; case 0x0C075DE0u: goto L_0C075DE0; case 0x0C075E50u: goto L_0C075E50; case 0x0C075EC0u: goto L_0C075EC0; case 0x0C075F10u: goto L_0C075F10; case 0x0C075F80u: goto L_0C075F80; case 0x0C075F90u: goto L_0C075F90; case 0x0C075FA0u: goto L_0C075FA0; default: JUMPD(tv_); } }  /* 0C075CE8 braf Rn */
L_0C075D10: BLKS(0x0C075D10u);
	r1 = 0xC06F930u; UPD(0x0C075D12u, 1);  /* 0C075D10 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C075D12 mov Rm,Rn */
	r5 = r6;  /* 0C075D14 mov Rm,Rn */
	UPD(0x0C075D16u, 2);
L_0C075D16: BLKS(0x0C075D16u);
	r14 += 0xCu;  /* 0C075D16 add #imm,Rn */
	r15 = r14;  /* 0C075D18 mov Rm,Rn */
	IF(0x0C075D1Au); PR = R32(r15); r15 += 4; UPD(0x0C075D1Cu, 3);  /* 0C075D1A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C075D1Eu, 1);  /* 0C075D1C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C075D20u, 1);  /* 0C075D1E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C075D22u, 1);  /* 0C075D20 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C075D24u, 1);  /* 0C075D22 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C075D26u, 1);  /* 0C075D24 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C075D28u, 1);  /* 0C075D26 mov.l @Rm+,Rn */
	IF(0x0C075D28u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06F930u: TAIL(f_0C06F930); case 0x0C06FA70u: goto L_0C06FA70; default: JUMPD(tv_); } }  /* 0C075D28 jmp @Rn */
L_0C075D30: BLKS(0x0C075D30u);
	r8 = 0xC0A0670u; UPD(0x0C075D32u, 1);  /* 0C075D30 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C075D32 mov Rm,Rn */
	IF(0x0C075D34u); { u32 t_ = r8; PR = 0x0C075D38u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C075D38u); }  /* 0C075D34 jsr @Rn */
L_0C075D38: BLKS(0x0C075D38u);
	T = (r0 & r0) == 0;  /* 0C075D38 tst Rm,Rn */
	if (!T) { UPD(0x0C075D60u, 4); goto L_0C075D60; }  /* 0C075D3A bf */
L_0C075D3C: BLKS(0x0C075D3Cu);
	r14 += 0xCu;  /* 0C075D3C add #imm,Rn */
	UPD(0x0C075D3Eu, 1);
L_0C075D3E: BLKS(0x0C075D3Eu);
	r15 = r14;  /* 0C075D3E mov Rm,Rn */
	IF(0x0C075D40u); PR = R32(r15); r15 += 4; UPD(0x0C075D42u, 2);  /* 0C075D40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C075D44u, 1);  /* 0C075D42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C075D46u, 1);  /* 0C075D44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C075D48u, 1);  /* 0C075D46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C075D4Au, 1);  /* 0C075D48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C075D4Cu, 1);  /* 0C075D4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C075D4Eu, 1);  /* 0C075D4C mov.l @Rm+,Rn */
	IF(0x0C075D4Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C075D4E rts */
L_0C075D60: BLKS(0x0C075D60u);
	r9 = 0xC0A9E40u; UPD(0x0C075D62u, 1);  /* 0C075D60 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C075D62 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C075D64 mov #imm,Rn */
	IF(0x0C075D66u); { u32 t_ = r9; PR = 0x0C075D6Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C075D6Au); }  /* 0C075D66 jsr @Rn */
L_0C075D6A: BLKS(0x0C075D6Au);
	T = (r0 & r0) == 0;  /* 0C075D6A tst Rm,Rn */
	if (T) { UPD(0x0C075D3Cu, 4); goto L_0C075D3C; }  /* 0C075D6C bt */
L_0C075D6E: BLKS(0x0C075D6Eu);
	r5 = 0xB4u; UPD(0x0C075D70u, 1);  /* 0C075D6E mov.w @(disp,pc),Rn */
	IF(0x0C075D70u); MACL = r11 * r5;  /* 0C075D70 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C075D74u, 3);  /* 0C075D72 mov.l @(disp,pc),Rn */
	IF(0x0C075D74u); r10 = MACL;  /* 0C075D74 sts macl,Rn */
	r10 += r4;  /* 0C075D76 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C075D7Au, 3);  /* 0C075D78 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C075D7A mov Rm,Rn */
	r12 = 0xC0A9BB0u; UPD(0x0C075D7Eu, 2);  /* 0C075D7C mov.l @(disp,pc),Rn */
	IF(0x0C075D7Eu); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C075D80u, 1);  /* 0C075D7E mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C075D82u, 1);  /* 0C075D80 mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C075D82 extu.b Rm,Rn */
	IF(0x0C075D84u); { u32 t_ = r12; PR = 0x0C075D88u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C075D88u); }  /* 0C075D84 jsr @Rn */
L_0C075D88: BLKS(0x0C075D88u);
	T = (r0 & r0) == 0;  /* 0C075D88 tst Rm,Rn */
	if (T) { UPD(0x0C075D3Cu, 4); goto L_0C075D3C; }  /* 0C075D8A bt */
L_0C075D8C: BLKS(0x0C075D8Cu);
	r0 = r10;  /* 0C075D8C mov Rm,Rn */
	r2 = 0x86u; UPD(0x0C075D90u, 2);  /* 0C075D8E mov.w @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C075D92u, 1);  /* 0C075D90 mov.l @(disp,pc),Rn */
	IF(0x0C075D92u); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C075D94u, 1);  /* 0C075D92 mov.w @(r0,Rm),Rn */
	r5 = 0x100000u; UPD(0x0C075D96u, 1);  /* 0C075D94 mov.l @(disp,pc),Rn */
	IF(0x0C075D96u); { u32 t_ = r8; PR = 0x0C075D9Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C075D9Au); }  /* 0C075D96 jsr @Rn */
L_0C075D9A: BLKS(0x0C075D9Au);
	r8 = R32(r10 + 0x24u); UPD(0x0C075D9Cu, 1);  /* 0C075D9A mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C075D9C mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C075DA0u, 2);  /* 0C075D9E mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C075DA0 add Rm,Rn */
	r7 = 0x20000u; UPD(0x0C075DA4u, 2);  /* 0C075DA2 mov.l @(disp,pc),Rn */
	r5 = 0x140000u; UPD(0x0C075DA6u, 1);  /* 0C075DA4 mov.l @(disp,pc),Rn */
	IF(0x0C075DA6u); { u32 t_ = r13; PR = 0x0C075DAAu; r8 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C075DAAu); }  /* 0C075DA6 jsr @Rn */
L_0C075DAA: BLKS(0x0C075DAAu);
	r6 = R32(r10 + 0x28u); UPD(0x0C075DACu, 1);  /* 0C075DAA mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C075DAC add #imm,Rn */
	r6 += r0;  /* 0C075DAE add Rm,Rn */
	r0 = 0x30000u; UPD(0x0C075DB2u, 3);  /* 0C075DB0 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C075DB2 mov #imm,Rn */
	W32(r15, r0); UPD(0x0C075DB6u, 2);  /* 0C075DB4 mov.l Rm,@Rn */
L_0C075DB6: BLKS(0x0C075DB6u);
	r0 = 0xC0A8A50u; UPD(0x0C075DB8u, 1);  /* 0C075DB6 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C075DB8 mov Rm,Rn */
	r7 = r9;  /* 0C075DBA mov Rm,Rn */
	UPD(0x0C075DBCu, 2);
L_0C075DBC: BLKS(0x0C075DBCu);
	IF(0x0C075DBCu); { u32 t_ = r0; PR = 0x0C075DC0u; IF(0x0C075DBEu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C075DC0u); }  /* 0C075DBC jsr @Rn */
L_0C075DC0: BLKS(0x0C075DC0u);
	r1 = 0xC0580D0u; UPD(0x0C075DC2u, 1);  /* 0C075DC0 mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C075DC2 add #imm,Rn */
	r4 = r11;  /* 0C075DC4 mov Rm,Rn */
	UPD(0x0C075DC6u, 2);
L_0C075DC6: BLKS(0x0C075DC6u);
	r14 += 0xCu;  /* 0C075DC6 add #imm,Rn */
	r15 = r14;  /* 0C075DC8 mov Rm,Rn */
	IF(0x0C075DCAu); PR = R32(r15); r15 += 4; UPD(0x0C075DCCu, 3);  /* 0C075DCA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C075DCEu, 1);  /* 0C075DCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C075DD0u, 1);  /* 0C075DCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C075DD2u, 1);  /* 0C075DD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C075DD4u, 1);  /* 0C075DD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C075DD6u, 1);  /* 0C075DD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C075DD8u, 1);  /* 0C075DD6 mov.l @Rm+,Rn */
	IF(0x0C075DD8u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0759E0u: goto L_0C0759E0; case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C075DD8 jmp @Rn */
L_0C075DE0: BLKS(0x0C075DE0u);
	r10 = 0xC0A0670u; UPD(0x0C075DE2u, 1);  /* 0C075DE0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C075DE2 mov Rm,Rn */
	IF(0x0C075DE4u); { u32 t_ = r10; PR = 0x0C075DE8u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C075DE8u); }  /* 0C075DE4 jsr @Rn */
L_0C075DE8: BLKS(0x0C075DE8u);
	T = (r0 & r0) == 0;  /* 0C075DE8 tst Rm,Rn */
	if (T) { UPD(0x0C075D3Cu, 4); goto L_0C075D3C; }  /* 0C075DEA bt */
L_0C075DEC: BLKS(0x0C075DECu);
	r4 = r11;  /* 0C075DEC mov Rm,Rn */
	r9 = 0xC0A9E40u; UPD(0x0C075DF0u, 2);  /* 0C075DEE mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C075DF0 mov #imm,Rn */
	IF(0x0C075DF2u); { u32 t_ = r9; PR = 0x0C075DF6u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C075DF6u); }  /* 0C075DF2 jsr @Rn */
L_0C075DF6: BLKS(0x0C075DF6u);
	T = (r0 & r0) == 0;  /* 0C075DF6 tst Rm,Rn */
	if (T) { UPD(0x0C075D3Cu, 4); goto L_0C075D3C; }  /* 0C075DF8 bt */
L_0C075DFA: BLKS(0x0C075DFAu);
	r5 = 0xB4u; UPD(0x0C075DFCu, 1);  /* 0C075DFA mov.w @(disp,pc),Rn */
	IF(0x0C075DFCu); MACL = r11 * r5;  /* 0C075DFC mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C075E00u, 3);  /* 0C075DFE mov.l @(disp,pc),Rn */
	IF(0x0C075E00u); r10 = MACL;  /* 0C075E00 sts macl,Rn */
	r10 += r4;  /* 0C075E02 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C075E06u, 3);  /* 0C075E04 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C075E06 mov Rm,Rn */
	r12 = 0xC0A9BB0u; UPD(0x0C075E0Au, 2);  /* 0C075E08 mov.l @(disp,pc),Rn */
	IF(0x0C075E0Au); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C075E0Cu, 1);  /* 0C075E0A mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C075E0Eu, 1);  /* 0C075E0C mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C075E0E extu.b Rm,Rn */
	IF(0x0C075E10u); { u32 t_ = r12; PR = 0x0C075E14u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C075E14u); }  /* 0C075E10 jsr @Rn */
L_0C075E14: BLKS(0x0C075E14u);
	T = (r0 & r0) == 0;  /* 0C075E14 tst Rm,Rn */
	if (T) { UPD(0x0C075D3Cu, 4); goto L_0C075D3C; }  /* 0C075E16 bt */
L_0C075E18: BLKS(0x0C075E18u);
	r0 = r10;  /* 0C075E18 mov Rm,Rn */
	r2 = 0x86u; UPD(0x0C075E1Cu, 2);  /* 0C075E1A mov.w @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C075E1Eu, 1);  /* 0C075E1C mov.l @(disp,pc),Rn */
	IF(0x0C075E1Eu); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C075E20u, 1);  /* 0C075E1E mov.w @(r0,Rm),Rn */
	r5 = 0x100000u; UPD(0x0C075E22u, 1);  /* 0C075E20 mov.l @(disp,pc),Rn */
	IF(0x0C075E22u); { u32 t_ = r8; PR = 0x0C075E26u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C075E26u); }  /* 0C075E22 jsr @Rn */
L_0C075E26: BLKS(0x0C075E26u);
	r8 = R32(r10 + 0x24u); UPD(0x0C075E28u, 1);  /* 0C075E26 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C075E28 mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C075E2Cu, 2);  /* 0C075E2A mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C075E2C add Rm,Rn */
	r7 = 0x10000u; UPD(0x0C075E30u, 2);  /* 0C075E2E mov.l @(disp,pc),Rn */
	r5 = 0x140000u; UPD(0x0C075E32u, 1);  /* 0C075E30 mov.l @(disp,pc),Rn */
	IF(0x0C075E32u); { u32 t_ = r13; PR = 0x0C075E36u; r8 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C075E36u); }  /* 0C075E32 jsr @Rn */
L_0C075E36: BLKS(0x0C075E36u);
	r6 = R32(r10 + 0x28u); UPD(0x0C075E38u, 1);  /* 0C075E36 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C075E38 add #imm,Rn */
	r6 += r0;  /* 0C075E3A add Rm,Rn */
	r0 = 0x30000u; UPD(0x0C075E3Eu, 3);  /* 0C075E3C mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C075E3E mov #imm,Rn */
	{ W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C075DB6u, 4); goto L_0C075DB6; }  /* 0C075E40 bra */
L_0C075E50: BLKS(0x0C075E50u);
	r10 = 0xC0A0670u; UPD(0x0C075E52u, 1);  /* 0C075E50 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C075E52 mov Rm,Rn */
	IF(0x0C075E54u); { u32 t_ = r10; PR = 0x0C075E58u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C075E58u); }  /* 0C075E54 jsr @Rn */
L_0C075E58: BLKS(0x0C075E58u);
	T = (r0 & r0) == 0;  /* 0C075E58 tst Rm,Rn */
	if (T) { UPD(0x0C075F2Au, 4); goto L_0C075F2A; }  /* 0C075E5A bt */
L_0C075E5C: BLKS(0x0C075E5Cu);
	r4 = r11;  /* 0C075E5C mov Rm,Rn */
	r9 = 0xC0A9E40u; UPD(0x0C075E60u, 2);  /* 0C075E5E mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C075E60 mov #imm,Rn */
	IF(0x0C075E62u); { u32 t_ = r9; PR = 0x0C075E66u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C075E66u); }  /* 0C075E62 jsr @Rn */
L_0C075E66: BLKS(0x0C075E66u);
	T = (r0 & r0) == 0;  /* 0C075E66 tst Rm,Rn */
	if (T) { UPD(0x0C075F2Au, 4); goto L_0C075F2A; }  /* 0C075E68 bt */
L_0C075E6A: BLKS(0x0C075E6Au);
	r12 = 0xB4u; UPD(0x0C075E6Cu, 1);  /* 0C075E6A mov.w @(disp,pc),Rn */
	IF(0x0C075E6Cu); MACL = r11 * r12;  /* 0C075E6C mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C075E70u, 3);  /* 0C075E6E mov.l @(disp,pc),Rn */
	IF(0x0C075E70u); r12 = MACL;  /* 0C075E70 sts macl,Rn */
	r12 += r4;  /* 0C075E72 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C075E76u, 3);  /* 0C075E74 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C075E76 mov Rm,Rn */
	r13 = 0xC0A9BB0u; UPD(0x0C075E7Au, 2);  /* 0C075E78 mov.l @(disp,pc),Rn */
	IF(0x0C075E7Au); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C075E7Cu, 1);  /* 0C075E7A mov.b @(r0,Rm),Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C075E7Eu, 1);  /* 0C075E7C mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C075E7E extu.b Rm,Rn */
	IF(0x0C075E80u); { u32 t_ = r13; PR = 0x0C075E84u; r5 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C075E84u); }  /* 0C075E80 jsr @Rn */
L_0C075E84: BLKS(0x0C075E84u);
	T = (r0 & r0) == 0;  /* 0C075E84 tst Rm,Rn */
	if (T) { UPD(0x0C075F2Au, 4); goto L_0C075F2A; }  /* 0C075E86 bt */
L_0C075E88: BLKS(0x0C075E88u);
	r0 = r12;  /* 0C075E88 mov Rm,Rn */
	r5 = 0x86u; UPD(0x0C075E8Cu, 2);  /* 0C075E8A mov.w @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C075E8Eu, 1);  /* 0C075E8C mov.l @(disp,pc),Rn */
	IF(0x0C075E8Eu); r9 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C075E90u, 1);  /* 0C075E8E mov.w @(r0,Rm),Rn */
	r10 = 0xC058030u; UPD(0x0C075E92u, 1);  /* 0C075E90 mov.l @(disp,pc),Rn */
	r5 = 0xC0000u; UPD(0x0C075E94u, 1);  /* 0C075E92 mov.l @(disp,pc),Rn */
	IF(0x0C075E94u); { u32 t_ = r8; PR = 0x0C075E98u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C075E98u); }  /* 0C075E94 jsr @Rn */
L_0C075E98: BLKS(0x0C075E98u);
	r8 = R32(r12 + 0x24u); UPD(0x0C075E9Au, 1);  /* 0C075E98 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C075E9A mov Rm,Rn */
	r5 = 0x100000u; UPD(0x0C075E9Eu, 2);  /* 0C075E9C mov.l @(disp,pc),Rn */
	IF(0x0C075E9Eu); { u32 t_ = r10; PR = 0x0C075EA2u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C075EA2u); }  /* 0C075E9E jsr @Rn */
L_0C075EA2: BLKS(0x0C075EA2u);
	r13 = 0x20000u; UPD(0x0C075EA4u, 1);  /* 0C075EA2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C075EA4 add #imm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C075EA8u, 2);  /* 0C075EA6 mov.l @(disp,Rm),Rn */
	r8 += r13;  /* 0C075EA8 add Rm,Rn */
	W32(r15, r13); UPD(0x0C075EACu, 2);  /* 0C075EAA mov.l Rm,@Rn */
	r6 += r0;  /* 0C075EAC add Rm,Rn */
	{ r4 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C075DB6u, 4); goto L_0C075DB6; }  /* 0C075EAE bra */
L_0C075EC0: BLKS(0x0C075EC0u);
	r1 = 0xC06FA70u; UPD(0x0C075EC2u, 1);  /* 0C075EC0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C075EC2 mov Rm,Rn */
	{ r5 = r6; /* slot mov Rm,Rn */ UPD(0x0C075D16u, 4); goto L_0C075D16; }  /* 0C075EC4 bra */
L_0C075F10: BLKS(0x0C075F10u);
	r9 = 0xC0A0670u; UPD(0x0C075F12u, 1);  /* 0C075F10 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C075F12 mov Rm,Rn */
	IF(0x0C075F14u); { u32 t_ = r9; PR = 0x0C075F18u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C075F18u); }  /* 0C075F14 jsr @Rn */
L_0C075F18: BLKS(0x0C075F18u);
	T = (r0 & r0) == 0;  /* 0C075F18 tst Rm,Rn */
	if (T) { UPD(0x0C075F2Au, 4); goto L_0C075F2A; }  /* 0C075F1A bt */
L_0C075F1C: BLKS(0x0C075F1Cu);
	r4 = r11;  /* 0C075F1C mov Rm,Rn */
	r12 = 0xC0A9E40u; UPD(0x0C075F20u, 2);  /* 0C075F1E mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C075F20 mov #imm,Rn */
	IF(0x0C075F22u); { u32 t_ = r12; PR = 0x0C075F26u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C075F26u); }  /* 0C075F22 jsr @Rn */
L_0C075F26: BLKS(0x0C075F26u);
	T = (r0 & r0) == 0;  /* 0C075F26 tst Rm,Rn */
	if (!T) { UPD(0x0C075F2Eu, 4); goto L_0C075F2E; }  /* 0C075F28 bf */
L_0C075F2A: BLKS(0x0C075F2Au);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C075D3Eu, 3); goto L_0C075D3E; }  /* 0C075F2A bra */
L_0C075F2E: BLKS(0x0C075F2Eu);
	r3 = 0xB4u; UPD(0x0C075F30u, 1);  /* 0C075F2E mov.w @(disp,pc),Rn */
	IF(0x0C075F30u); MACL = r11 * r3;  /* 0C075F30 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C075F34u, 3);  /* 0C075F32 mov.l @(disp,pc),Rn */
	IF(0x0C075F34u); r10 = MACL;  /* 0C075F34 sts macl,Rn */
	r10 += r0;  /* 0C075F36 add Rm,Rn */
	r2 = 0xA9u; UPD(0x0C075F3Au, 3);  /* 0C075F38 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C075F3A mov Rm,Rn */
	r13 = 0xC0A9BB0u; UPD(0x0C075F3Eu, 2);  /* 0C075F3C mov.l @(disp,pc),Rn */
	IF(0x0C075F3Eu); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C075F40u, 1);  /* 0C075F3E mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C075F42u, 1);  /* 0C075F40 mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C075F42 extu.b Rm,Rn */
	IF(0x0C075F44u); { u32 t_ = r13; PR = 0x0C075F48u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C075F48u); }  /* 0C075F44 jsr @Rn */
L_0C075F48: BLKS(0x0C075F48u);
	T = (r0 & r0) == 0;  /* 0C075F48 tst Rm,Rn */
	if (T) { UPD(0x0C07600Eu, 4); goto L_0C07600E; }  /* 0C075F4A bt */
L_0C075F4C: BLKS(0x0C075F4Cu);
	r0 = r10;  /* 0C075F4C mov Rm,Rn */
	r5 = 0x86u; UPD(0x0C075F50u, 2);  /* 0C075F4E mov.w @(disp,pc),Rn */
	r13 = 0xC058060u; UPD(0x0C075F52u, 1);  /* 0C075F50 mov.l @(disp,pc),Rn */
	IF(0x0C075F52u); r12 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C075F54u, 1);  /* 0C075F52 mov.w @(r0,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C075F56u, 1);  /* 0C075F54 mov.l @(disp,pc),Rn */
	IF(0x0C075F56u); { u32 t_ = r13; PR = 0x0C075F5Au; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C075F5Au); }  /* 0C075F56 jsr @Rn */
L_0C075F5A: BLKS(0x0C075F5Au);
	r9 = R32(r10 + 0x24u); UPD(0x0C075F5Cu, 1);  /* 0C075F5A mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C075F5C mov Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C075F60u, 2);  /* 0C075F5E mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C075F60 add Rm,Rn */
	r6 = 0x10000u; UPD(0x0C075F64u, 2);  /* 0C075F62 mov.l @(disp,pc),Rn */
	r5 = 0xA0000u; UPD(0x0C075F66u, 1);  /* 0C075F64 mov.l @(disp,pc),Rn */
	IF(0x0C075F66u); { u32 t_ = r8; PR = 0x0C075F6Au; r9 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C075F6Au); }  /* 0C075F66 jsr @Rn */
L_0C075F6A: BLKS(0x0C075F6Au);
	r6 = R32(r10 + 0x28u); UPD(0x0C075F6Cu, 1);  /* 0C075F6A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C075F6C add #imm,Rn */
	r4 = 0x28000u; UPD(0x0C075F70u, 2);  /* 0C075F6E mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C075F70 add Rm,Rn */
	W32(r15, r4); UPD(0x0C075F74u, 2);  /* 0C075F72 mov.l Rm,@Rn */
	r5 = r9;  /* 0C075F74 mov Rm,Rn */
	r0 = 0xC0A81B0u; UPD(0x0C075F78u, 2);  /* 0C075F76 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C075F78 mov #imm,Rn */
	{ r7 = r12; /* slot mov Rm,Rn */ UPD(0x0C075DBCu, 4); goto L_0C075DBC; }  /* 0C075F7A bra */
L_0C075F80: BLKS(0x0C075F80u);
	r1 = 0xC06F830u; UPD(0x0C075F82u, 1);  /* 0C075F80 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C075F82 mov Rm,Rn */
	{ r5 = r6; /* slot mov Rm,Rn */ UPD(0x0C075D16u, 4); goto L_0C075D16; }  /* 0C075F84 bra */
L_0C075F90: BLKS(0x0C075F90u);
	r1 = 0xC06FBD0u; UPD(0x0C075F92u, 1);  /* 0C075F90 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C075F92 mov Rm,Rn */
	{ r5 = r6; /* slot mov Rm,Rn */ UPD(0x0C075D16u, 4); goto L_0C075D16; }  /* 0C075F94 bra */
L_0C075FA0: BLKS(0x0C075FA0u);
	r10 = 0xC0A0670u; UPD(0x0C075FA2u, 1);  /* 0C075FA0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C075FA2 mov Rm,Rn */
	IF(0x0C075FA4u); { u32 t_ = r10; PR = 0x0C075FA8u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C075FA8u); }  /* 0C075FA4 jsr @Rn */
L_0C075FA8: BLKS(0x0C075FA8u);
	T = (r0 & r0) == 0;  /* 0C075FA8 tst Rm,Rn */
	if (T) { UPD(0x0C07600Eu, 4); goto L_0C07600E; }  /* 0C075FAA bt */
L_0C075FAC: BLKS(0x0C075FACu);
	r4 = r11;  /* 0C075FAC mov Rm,Rn */
	r12 = 0xC0A9E40u; UPD(0x0C075FB0u, 2);  /* 0C075FAE mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C075FB0 mov #imm,Rn */
	IF(0x0C075FB2u); { u32 t_ = r12; PR = 0x0C075FB6u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C075FB6u); }  /* 0C075FB2 jsr @Rn */
L_0C075FB6: BLKS(0x0C075FB6u);
	T = (r0 & r0) == 0;  /* 0C075FB6 tst Rm,Rn */
	if (T) { UPD(0x0C07600Eu, 4); goto L_0C07600E; }  /* 0C075FB8 bt */
L_0C075FBA: BLKS(0x0C075FBAu);
	r3 = 0xB4u; UPD(0x0C075FBCu, 1);  /* 0C075FBA mov.w @(disp,pc),Rn */
	IF(0x0C075FBCu); MACL = r11 * r3;  /* 0C075FBC mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C075FC0u, 3);  /* 0C075FBE mov.l @(disp,pc),Rn */
	IF(0x0C075FC0u); r10 = MACL;  /* 0C075FC0 sts macl,Rn */
	r10 += r0;  /* 0C075FC2 add Rm,Rn */
	r2 = 0xA9u; UPD(0x0C075FC6u, 3);  /* 0C075FC4 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C075FC6 mov Rm,Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C075FCAu, 2);  /* 0C075FC8 mov.l @(disp,pc),Rn */
	IF(0x0C075FCAu); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C075FCCu, 1);  /* 0C075FCA mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C075FCEu, 1);  /* 0C075FCC mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C075FCE extu.b Rm,Rn */
	IF(0x0C075FD0u); { u32 t_ = r9; PR = 0x0C075FD4u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C075FD4u); }  /* 0C075FD0 jsr @Rn */
L_0C075FD4: BLKS(0x0C075FD4u);
	T = (r0 & r0) == 0;  /* 0C075FD4 tst Rm,Rn */
	if (T) { UPD(0x0C07600Eu, 4); goto L_0C07600E; }  /* 0C075FD6 bt */
L_0C075FD8: BLKS(0x0C075FD8u);
	r0 = r10;  /* 0C075FD8 mov Rm,Rn */
	r6 = 0x86u; UPD(0x0C075FDCu, 2);  /* 0C075FDA mov.w @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C075FDEu, 1);  /* 0C075FDC mov.l @(disp,pc),Rn */
	IF(0x0C075FDEu); r13 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C075FE0u, 1);  /* 0C075FDE mov.w @(r0,Rm),Rn */
	r5 = 0xF0000u; UPD(0x0C075FE2u, 1);  /* 0C075FE0 mov.l @(disp,pc),Rn */
	r9 = 0xC058030u; UPD(0x0C075FE4u, 1);  /* 0C075FE2 mov.l @(disp,pc),Rn */
	IF(0x0C075FE4u); { u32 t_ = r8; PR = 0x0C075FE8u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C075FE8u); }  /* 0C075FE4 jsr @Rn */
L_0C075FE8: BLKS(0x0C075FE8u);
	r12 = R32(r10 + 0x24u); UPD(0x0C075FEAu, 1);  /* 0C075FE8 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C075FEA mov Rm,Rn */
	r5 = 0x140000u; UPD(0x0C075FEEu, 2);  /* 0C075FEC mov.l @(disp,pc),Rn */
	IF(0x0C075FEEu); { u32 t_ = r9; PR = 0x0C075FF2u; r12 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C075FF2u); }  /* 0C075FEE jsr @Rn */
L_0C075FF2: BLKS(0x0C075FF2u);
	r6 = R32(r10 + 0x28u); UPD(0x0C075FF4u, 1);  /* 0C075FF2 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C075FF4 add #imm,Rn */
	r4 = 0x20000u; UPD(0x0C075FF8u, 2);  /* 0C075FF6 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C075FF8 add Rm,Rn */
	r8 = 0xC0A81B0u; UPD(0x0C075FFCu, 2);  /* 0C075FFA mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C075FFC mov Rm,Rn */
	W32(r15, r4); UPD(0x0C076000u, 2);  /* 0C075FFE mov.l Rm,@Rn */
	r7 = r13;  /* 0C076000 mov Rm,Rn */
	IF(0x0C076002u); { u32 t_ = r8; PR = 0x0C076006u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C076006u); }  /* 0C076002 jsr @Rn */
L_0C076006: BLKS(0x0C076006u);
	r4 = r11;  /* 0C076006 mov Rm,Rn */
	r11 = 0xC0580D0u; UPD(0x0C07600Au, 2);  /* 0C076008 mov.l @(disp,pc),Rn */
	IF(0x0C07600Au); { u32 t_ = r11; PR = 0x0C07600Eu; r15 += 0x4u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C07600Eu); }  /* 0C07600A jsr @Rn */
L_0C07600E: BLKS(0x0C07600Eu);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C075D3Eu, 3); goto L_0C075D3E; }  /* 0C07600E bra */
L_0C076020: BLKS(0x0C076020u);
	r1 = 0xC0759E0u; UPD(0x0C076022u, 1);  /* 0C076020 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C075DC6u, 3); goto L_0C075DC6; }  /* 0C076022 bra */
L_0C076030: BLKS(0x0C076030u);
	r10 = 0xC0A03F0u; UPD(0x0C076032u, 1);  /* 0C076030 mov.l @(disp,pc),Rn */
	IF(0x0C076032u); { u32 t_ = r10; PR = 0x0C076036u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C076036u); }  /* 0C076032 jsr @Rn */
L_0C076036: BLKS(0x0C076036u);
	IF(0x0C076036u); T = (s32)r0 >= 0;  /* 0C076036 cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C07603Au); MACL = r0 * r9; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C076020u, 5); goto L_0C076020; } goto L_0C07603C; }  /* 0C076038 bf/s */
L_0C07603C: BLKS(0x0C07603Cu);
	IF(0x0C07603Cu); r7 = MACL;  /* 0C07603C sts macl,Rn */
	r7 += r8;  /* 0C07603E add Rm,Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C076042u, 5);  /* 0C076040 mov.l @(disp,Rm),Rn */
	T = r0 == 0x1u;  /* 0C076042 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0760B0u, 4); goto L_0C0760B0; }  /* 0C076044 bt */
L_0C076046: BLKS(0x0C076046u);
	r0 = 0x2000000u; UPD(0x0C076048u, 1);  /* 0C076046 mov.l @(disp,pc),Rn */
	{ W32(r13 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C075D3Cu, 3); goto L_0C075D3C; }  /* 0C076048 bra */
L_0C0760B0: BLKS(0x0C0760B0u);
	r12 = R32(r13); UPD(0x0C0760B2u, 1);  /* 0C0760B0 mov.l @Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C0760B4u, 1);  /* 0C0760B2 mov.w @(disp,pc),Rn */
	r12 &= r2;  /* 0C0760B4 and Rm,Rn */
	W32(r13, r12); UPD(0x0C0760B8u, 2);  /* 0C0760B6 mov.l Rm,@Rn */
	r4 = R32(r7 + 0x28u); UPD(0x0C0760BAu, 1);  /* 0C0760B8 mov.l @(disp,Rm),Rn */
	r5 = R32(r13 + 0x30u); UPD(0x0C0760BCu, 1);  /* 0C0760BA mov.l @(disp,Rm),Rn */
	r3 = R32(r7); UPD(0x0C0760BEu, 1);  /* 0C0760BC mov.l @Rm,Rn */
	r4 += r5;  /* 0C0760BE add Rm,Rn */
	r0 = R32(r13 + 0xCu); UPD(0x0C0760C2u, 2);  /* 0C0760C0 mov.l @(disp,Rm),Rn */
	r1 = 0x100u; UPD(0x0C0760C4u, 1);  /* 0C0760C2 mov.w @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C0760C4 add #imm,Rn */
	r6 = R32(r7 + 0x24u); UPD(0x0C0760C8u, 2);  /* 0C0760C6 mov.l @(disp,Rm),Rn */
	r3 &= r1;  /* 0C0760C8 and Rm,Rn */
	r10 = R32(r13 + 0x2Cu); UPD(0x0C0760CCu, 2);  /* 0C0760CA mov.l @(disp,Rm),Rn */
	r12 |= r3;  /* 0C0760CC or Rm,Rn */
	r8 = 0xC0A0380u; UPD(0x0C0760D0u, 2);  /* 0C0760CE mov.l @(disp,pc),Rn */
	r6 += r10;  /* 0C0760D0 add Rm,Rn */
	W32(r13 + 0x28u, r4); UPD(0x0C0760D4u, 2);  /* 0C0760D2 mov.l Rm,@(disp,Rn) */
	r0 &= 0x7u;  /* 0C0760D4 and #imm,r0 */
	W32(r13 + 0x24u, r6); UPD(0x0C0760D8u, 2);  /* 0C0760D6 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C0760D8 mov Rm,Rn */
	W32(r13, r12); UPD(0x0C0760DCu, 2);  /* 0C0760DA mov.l Rm,@Rn */
	IF(0x0C0760DCu); { u32 t_ = r8; PR = 0x0C0760E0u; W32(r13 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0760E0u); }  /* 0C0760DC jsr @Rn */
L_0C0760E0: BLKS(0x0C0760E0u);
	r8 = 0x9Cu; UPD(0x0C0760E2u, 1);  /* 0C0760E0 mov.w @(disp,pc),Rn */
	r8 += r13;  /* 0C0760E2 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r8); UPD(0x0C0760E6u, 2);  /* 0C0760E4 mov.b @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0760E6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C076170u, 4); goto L_0C076170; } goto L_0C0760EC; }  /* 0C0760E8 bt/s */
L_0C0760EC: BLKS(0x0C0760ECu);
	r10 = r13;  /* 0C0760EC mov Rm,Rn */
	W32(r14, r0); UPD(0x0C0760F0u, 3);  /* 0C0760EE mov.l Rm,@Rn */
	r13 = 0x0u;  /* 0C0760F0 mov #imm,Rn */
	UPD(0x0C0760F2u, 1);
L_0C0760F2: BLKS(0x0C0760F2u);
	r0 = R32(r10 + 0xCu); UPD(0x0C0760F4u, 1);  /* 0C0760F2 mov.l @(disp,Rm),Rn */
	r12 = 0x3u;  /* 0C0760F4 mov #imm,Rn */
	r9 = 0xB4u; UPD(0x0C0760F8u, 2);  /* 0C0760F6 mov.w @(disp,pc),Rn */
	r0 += r13;  /* 0C0760F8 add Rm,Rn */
	IF(0x0C0760FAu); MACL = r11 * r9;  /* 0C0760FA mul.l Rm,Rn */
	r6 = 0xC058060u; UPD(0x0C0760FEu, 4);  /* 0C0760FC mov.l @(disp,pc),Rn */
	IF(0x0C0760FEu); ARG0(0x40CDu); { s32 s_ = (s32)r12; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0760FE shld Rm,Rn */
	IF(0x0C076100u); r7 = MACL;  /* 0C076100 sts macl,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C076102 exts.w Rm,Rn */
	r5 = 0xC0000u; UPD(0x0C076106u, 4);  /* 0C076104 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C076106 mov Rm,Rn */
	IF(0x0C076108u); { u32 t_ = r6; PR = 0x0C07610Cu; W32(r14 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07610Cu); }  /* 0C076108 jsr @Rn */
L_0C07610C: BLKS(0x0C07610Cu);
	r5 = 0x66666667u; UPD(0x0C07610Eu, 1);  /* 0C07610C mov.l @(disp,pc),Rn */
	IF(0x0C07610Eu); r0 <<= 2;  /* 0C07610E shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r5; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C076110 dmuls.l Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C076114u, 4);  /* 0C076112 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C076114 mov Rm,Rn */
	IF(0x0C076116u); r1 = MACH;  /* 0C076116 sts mach,Rn */
	IF(0x0C076118u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C076118 shar Rn */
	IF(0x0C07611Au); T = r0 >> 31; r0 <<= 1;  /* 0C07611A shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C07611C subc Rm,Rn */
	r9 = R32(r10 + 0x24u); UPD(0x0C076120u, 6);  /* 0C07611E mov.l @(disp,Rm),Rn */
	r1 -= r0;  /* 0C076120 sub Rm,Rn */
	r5 = 0xC0000u; UPD(0x0C076124u, 2);  /* 0C076122 mov.l @(disp,pc),Rn */
	IF(0x0C076124u); { u32 t_ = r8; PR = 0x0C076128u; r9 += r1; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C076128u); }  /* 0C076124 jsr @Rn */
L_0C076128: BLKS(0x0C076128u);
	r6 = R32(r10 + 0x28u); UPD(0x0C07612Au, 1);  /* 0C076128 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07612A add #imm,Rn */
	r4 = 0x28000u; UPD(0x0C07612Eu, 2);  /* 0C07612C mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C07612E mov Rm,Rn */
	r2 = 0xC0A8510u; UPD(0x0C076132u, 2);  /* 0C076130 mov.l @(disp,pc),Rn */
	r7 = r12;  /* 0C076132 mov Rm,Rn */
	W32(r15, r4); UPD(0x0C076136u, 2);  /* 0C076134 mov.l Rm,@Rn */
	r6 += r0;  /* 0C076136 add Rm,Rn */
	IF(0x0C076138u); { u32 t_ = r2; PR = 0x0C07613Cu; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A8510, 0x0C0A8510u, 0x0C07613Cu); }  /* 0C076138 jsr @Rn */
L_0C07613C: BLKS(0x0C07613Cu);
	r3 = R32(r14); UPD(0x0C07613Eu, 1);  /* 0C07613C mov.l @Rm,Rn */
	r9 = 0x7u;  /* 0C07613E mov #imm,Rn */
	r3 += 0x1u;  /* 0C076140 add #imm,Rn */
	r12 = (u32)(s32)(s16)r3;  /* 0C076142 exts.w Rm,Rn */
	W32(r14, r12); UPD(0x0C076146u, 4);  /* 0C076144 mov.l Rm,@Rn */
	r15 += 0x4u;  /* 0C076146 add #imm,Rn */
	r8 = R32(r14); UPD(0x0C07614Au, 2);  /* 0C076148 mov.l @Rm,Rn */
	T = (s32)r8 > (s32)r9;  /* 0C07614A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r13 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0760F2u, 4); goto L_0C0760F2; } goto L_0C076150; }  /* 0C07614C bf/s */
L_0C076150: BLKS(0x0C076150u);
	r3 = R32(r14 + 0x8u); UPD(0x0C076152u, 2);  /* 0C076150 mov.l @(disp,Rm),Rn */
	r11 = 0xC26CD40u; UPD(0x0C076154u, 1);  /* 0C076152 mov.l @(disp,pc),Rn */
	r13 = 0x9Cu; UPD(0x0C076156u, 1);  /* 0C076154 mov.w @(disp,pc),Rn */
	r11 += r3;  /* 0C076156 add Rm,Rn */
	r11 += r13;  /* 0C076158 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C07615Cu, 3);  /* 0C07615A mov.b @Rm,Rn */
	r10 += 0xFFFFFFFFu;  /* 0C07615C add #imm,Rn */
	W8(r11, r10); UPD(0x0C076160u, 2);  /* 0C07615E mov.b Rm,@Rn */
L_0C076160: BLKS(0x0C076160u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C075D3Eu, 3); goto L_0C075D3E; }  /* 0C076160 bra */
L_0C076170: BLKS(0x0C076170u);
	r13 = 0xC0A9E40u; UPD(0x0C076172u, 1);  /* 0C076170 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C076172 mov Rm,Rn */
	r5 = 0x3Cu;  /* 0C076174 mov #imm,Rn */
	IF(0x0C076176u); { u32 t_ = r13; PR = 0x0C07617Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07617Au); }  /* 0C076176 jsr @Rn */
L_0C07617A: BLKS(0x0C07617Au);
	T = (r0 & r0) == 0;  /* 0C07617A tst Rm,Rn */
	if (T) { UPD(0x0C076160u, 4); goto L_0C076160; }  /* 0C07617C bt */
L_0C07617E: BLKS(0x0C07617Eu);
	r7 = 0x4u;  /* 0C07617E mov #imm,Rn */
	W8(r8, r7); UPD(0x0C076182u, 2);  /* 0C076180 mov.b Rm,@Rn */
L_0C076182: BLKS(0x0C076182u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C075D3Eu, 3); goto L_0C075D3E; }  /* 0C076182 bra */
L_0C076190: BLKS(0x0C076190u);
	r0 = (u32)(s32)(s16)R16(r13); UPD(0x0C076192u, 1);  /* 0C076190 mov.w @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C076192 tst Rm,Rn */
	{ u32 c_ = T; r13 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07619Cu, 4); goto L_0C07619C; } goto L_0C076198; }  /* 0C076194 bt/s */
L_0C076198: BLKS(0x0C076198u);
	{ IF(0x0C07619Au); ; /* slot nop */ UPD(0x0C076310u, 4); goto L_0C076310; }  /* 0C076198 bra */
L_0C07619C: BLKS(0x0C07619Cu);
	r5 = 0x99u; UPD(0x0C07619Eu, 1);  /* 0C07619C mov.w @(disp,pc),Rn */
	r10 = 0x1u;  /* 0C07619E mov #imm,Rn */
	r5 += r13;  /* 0C0761A0 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C0761A4u, 3);  /* 0C0761A2 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0761A4 add #imm,Rn */
	r10 &= r4;  /* 0C0761A6 and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0761A8 tst Rm,Rn */
	{ u32 c_ = !T; W8(r5, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C076182u, 6); goto L_0C076182; } UPD(0x0C0761AEu, 1); goto L_0C0761AE; }  /* 0C0761AA bf/s */
L_0C0761AE: BLKS(0x0C0761AEu);
	r0 = 0x9Cu; UPD(0x0C0761B0u, 1);  /* 0C0761AE mov.w @(disp,pc),Rn */
	r6 = 0x7u;  /* 0C0761B0 mov #imm,Rn */
	IF(0x0C0761B2u); r7 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0761B4u, 2);  /* 0C0761B2 mov.b @(r0,Rm),Rn */
	r9 = r7;  /* 0C0761B4 mov Rm,Rn */
	r9 += 0x1u;  /* 0C0761B6 add #imm,Rn */
	IF(0x0C0761B8u); W8(r0 + r13, r9); UPD(0x0C0761BAu, 3);  /* 0C0761B8 mov.b Rm,@(r0,Rn) */
	r0 = r7 & 0xFF;  /* 0C0761BA extu.b Rm,Rn */
	T = (s32)r0 > (s32)r6;  /* 0C0761BC cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C076250u, 5); goto L_0C076250; }  /* 0C0761BE bf */
L_0C0761C0: BLKS(0x0C0761C0u);
	T = r0 == 0x18u;  /* 0C0761C0 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C076182u, 4); goto L_0C076182; }  /* 0C0761C2 bf */
L_0C0761C4: BLKS(0x0C0761C4u);
	r15 += 0xFFFFFFF8u;  /* 0C0761C4 add #imm,Rn */
	r9 = 0xB0u; UPD(0x0C0761C8u, 2);  /* 0C0761C6 mov.w @(disp,pc),Rn */
	r9 += r13;  /* 0C0761C8 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r9); UPD(0x0C0761CCu, 2);  /* 0C0761CA mov.b @Rm,Rn */
	r0 = r13;  /* 0C0761CC mov Rm,Rn */
	r7 = r11 & 0xFF;  /* 0C0761CE extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0761D2u, 3);  /* 0C0761D0 mov.l Rm,@Rn */
	r6 = 0xA9u; UPD(0x0C0761D4u, 1);  /* 0C0761D2 mov.w @(disp,pc),Rn */
	IF(0x0C0761D4u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0761D6u, 1);  /* 0C0761D4 mov.b @(r0,Rm),Rn */
	r12 = 0xC0AB240u; UPD(0x0C0761D8u, 1);  /* 0C0761D6 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C0761D8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0761DCu, 2);  /* 0C0761DA mov.l Rm,@(disp,Rn) */
	r5 = 0xFu;  /* 0C0761DC mov #imm,Rn */
	r4 = R32(r13); UPD(0x0C0761E0u, 2);  /* 0C0761DE mov.l @Rm,Rn */
	r6 = R32(r13 + 0x24u); UPD(0x0C0761E2u, 1);  /* 0C0761E0 mov.l @(disp,Rm),Rn */
	IF(0x0C0761E2u); { u32 t_ = r12; PR = 0x0C0761E6u; r7 = R32(r13 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0761E6u); }  /* 0C0761E2 jsr @Rn */
L_0C0761E6: BLKS(0x0C0761E6u);
	r2 = 0xFFFA0000u; UPD(0x0C0761E8u, 1);  /* 0C0761E6 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0761E8 add #imm,Rn */
	r11 = R32(r13 + 0x24u); UPD(0x0C0761ECu, 2);  /* 0C0761EA mov.l @(disp,Rm),Rn */
	r4 = 0x14u;  /* 0C0761EC mov #imm,Rn */
	r8 = 0xC0AC960u; UPD(0x0C0761F0u, 2);  /* 0C0761EE mov.l @(disp,pc),Rn */
	r11 += r2;  /* 0C0761F0 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C0761F4u, 2);  /* 0C0761F2 mov.b @Rm,Rn */
	r5 = r11;  /* 0C0761F4 mov Rm,Rn */
	r7 = r3 & 0xFF;  /* 0C0761F6 extu.b Rm,Rn */
	IF(0x0C0761F8u); { u32 t_ = r8; PR = 0x0C0761FCu; r6 = R32(r13 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C0AC960, 0x0C0AC960u, 0x0C0761FCu); }  /* 0C0761F8 jsr @Rn */
L_0C0761FC: BLKS(0x0C0761FCu);
	r12 = 0xC06CE70u; UPD(0x0C0761FEu, 1);  /* 0C0761FC mov.l @(disp,pc),Rn */
	r4 = 0xEu;  /* 0C0761FE mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C076202u, 2);  /* 0C076200 mov.b @Rm,Rn */
	r5 = r11;  /* 0C076202 mov Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C076204 extu.b Rm,Rn */
	IF(0x0C076206u); { u32 t_ = r12; PR = 0x0C07620Au; r6 = R32(r13 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C07620Au); }  /* 0C076206 jsr @Rn */
L_0C07620A: BLKS(0x0C07620Au);
	{ W32(r13, r10); /* slot mov.l Rm,@Rn */ UPD(0x0C075D3Cu, 3); goto L_0C075D3C; }  /* 0C07620A bra */
L_0C076250: BLKS(0x0C076250u);
	r10 = 0x86u; UPD(0x0C076252u, 1);  /* 0C076250 mov.w @(disp,pc),Rn */
	r10 += r13;  /* 0C076252 add Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C076256u, 2);  /* 0C076254 mov.w @Rm,Rn */
	r7 = 0xC058060u; UPD(0x0C076258u, 1);  /* 0C076256 mov.l @(disp,pc),Rn */
	r9 += 0x40u;  /* 0C076258 add #imm,Rn */
	r11 = 0x180000u; UPD(0x0C07625Cu, 2);  /* 0C07625A mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r9;  /* 0C07625C exts.w Rm,Rn */
	W16(r10, r9); UPD(0x0C076260u, 2);  /* 0C07625E mov.w Rm,@Rn */
	r4 = r12;  /* 0C076260 mov Rm,Rn */
	IF(0x0C076262u); { u32 t_ = r7; PR = 0x0C076266u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C076266u); }  /* 0C076262 jsr @Rn */
L_0C076266: BLKS(0x0C076266u);
	r6 = 0x66666667u; UPD(0x0C076268u, 1);  /* 0C076266 mov.l @(disp,pc),Rn */
	IF(0x0C076268u); r0 <<= 2;  /* 0C076268 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r6; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C07626A dmuls.l Rm,Rn */
	r9 = R32(r13 + 0x24u); UPD(0x0C07626Eu, 4);  /* 0C07626C mov.l @(disp,Rm),Rn */
	IF(0x0C07626Eu); r5 = MACH;  /* 0C07626E sts mach,Rn */
	IF(0x0C076270u); T = r5 & 1; r5 = (u32)((s32)r5 >> 1);  /* 0C076270 shar Rn */
	IF(0x0C076272u); T = r0 >> 31; r0 <<= 1;  /* 0C076272 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C076274 subc Rm,Rn */
	r2 = 0xC058030u; UPD(0x0C076278u, 5);  /* 0C076276 mov.l @(disp,pc),Rn */
	r5 -= r0;  /* 0C076278 sub Rm,Rn */
	r4 = 0x80000u; UPD(0x0C07627Cu, 2);  /* 0C07627A mov.l @(disp,pc),Rn */
	r9 += r5;  /* 0C07627C add Rm,Rn */
	r9 += r4;  /* 0C07627E add Rm,Rn */
	r4 = r12;  /* 0C076280 mov Rm,Rn */
	IF(0x0C076282u); { u32 t_ = r2; PR = 0x0C076286u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C076286u); }  /* 0C076282 jsr @Rn */
L_0C076286: BLKS(0x0C076286u);
	r1 = 0xB0u; UPD(0x0C076288u, 1);  /* 0C076286 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C076288 add #imm,Rn */
	r1 += r13;  /* 0C07628A add Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C07628Eu, 3);  /* 0C07628C mov.l Rm,@(disp,Rn) */
	r6 = r9;  /* 0C07628E mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C076292u, 2);  /* 0C076290 mov.b @Rm,Rn */
	r5 = 0xDu;  /* 0C076292 mov #imm,Rn */
	r7 = R32(r13 + 0x28u); UPD(0x0C076296u, 2);  /* 0C076294 mov.l @(disp,Rm),Rn */
	r11 = r3 & 0xFF;  /* 0C076296 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C07629Au, 2);  /* 0C076298 mov.l Rm,@Rn */
	r7 += r0;  /* 0C07629A add Rm,Rn */
	r11 = 0xA9u; UPD(0x0C07629Eu, 2);  /* 0C07629C mov.w @(disp,pc),Rn */
	r11 += r13;  /* 0C07629E add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r11); UPD(0x0C0762A2u, 2);  /* 0C0762A0 mov.b @Rm,Rn */
	r12 = 0xC0AB240u; UPD(0x0C0762A4u, 1);  /* 0C0762A2 mov.l @(disp,pc),Rn */
	r0 = r8 & 0xFF;  /* 0C0762A4 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0762A8u, 2);  /* 0C0762A6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0762A8u); { u32 t_ = r12; PR = 0x0C0762ACu; r4 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0762ACu); }  /* 0C0762A8 jsr @Rn */
L_0C0762AC: BLKS(0x0C0762ACu);
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C0762AEu, 1);  /* 0C0762AC mov.w @Rm,Rn */
	r15 += 0x8u;  /* 0C0762AE add #imm,Rn */
	r9 = 0x100u; UPD(0x0C0762B2u, 2);  /* 0C0762B0 mov.w @(disp,pc),Rn */
	r6 = 0xC058060u; UPD(0x0C0762B4u, 1);  /* 0C0762B2 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C0762B4 add Rm,Rn */
	r10 = 0x280000u; UPD(0x0C0762B8u, 2);  /* 0C0762B6 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r7;  /* 0C0762B8 exts.w Rm,Rn */
	r4 = r12;  /* 0C0762BA mov Rm,Rn */
	IF(0x0C0762BCu); { u32 t_ = r6; PR = 0x0C0762C0u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0762C0u); }  /* 0C0762BC jsr @Rn */
L_0C0762C0: BLKS(0x0C0762C0u);
	r5 = 0x66666667u; UPD(0x0C0762C2u, 1);  /* 0C0762C0 mov.l @(disp,pc),Rn */
	IF(0x0C0762C2u); r0 <<= 2;  /* 0C0762C2 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r5; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0762C4 dmuls.l Rm,Rn */
	r9 = R32(r13 + 0x24u); UPD(0x0C0762C8u, 4);  /* 0C0762C6 mov.l @(disp,Rm),Rn */
	IF(0x0C0762C8u); r4 = MACH;  /* 0C0762C8 sts mach,Rn */
	IF(0x0C0762CAu); T = r4 & 1; r4 = (u32)((s32)r4 >> 1);  /* 0C0762CA shar Rn */
	IF(0x0C0762CCu); T = r0 >> 31; r0 <<= 1;  /* 0C0762CC shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C0762CE subc Rm,Rn */
	r2 = 0xC058030u; UPD(0x0C0762D2u, 5);  /* 0C0762D0 mov.l @(disp,pc),Rn */
	r4 -= r0;  /* 0C0762D2 sub Rm,Rn */
	r3 = 0x80000u; UPD(0x0C0762D6u, 2);  /* 0C0762D4 mov.l @(disp,pc),Rn */
	r9 += r4;  /* 0C0762D6 add Rm,Rn */
	r9 += r3;  /* 0C0762D8 add Rm,Rn */
	r4 = r12;  /* 0C0762DA mov Rm,Rn */
	IF(0x0C0762DCu); { u32 t_ = r2; PR = 0x0C0762E0u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0762E0u); }  /* 0C0762DC jsr @Rn */
L_0C0762E0: BLKS(0x0C0762E0u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0762E2u, 1);  /* 0C0762E0 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0762E2 add #imm,Rn */
	r7 = R32(r13 + 0x28u); UPD(0x0C0762E6u, 2);  /* 0C0762E4 mov.l @(disp,Rm),Rn */
	r5 = 0x9u;  /* 0C0762E6 mov #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r1); UPD(0x0C0762EAu, 2);  /* 0C0762E8 mov.b @Rm,Rn */
	r7 += r0;  /* 0C0762EA add Rm,Rn */
	r0 = r8 & 0xFF;  /* 0C0762EC extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0762F0u, 3);  /* 0C0762EE mov.l Rm,@Rn */
	r6 = r9;  /* 0C0762F0 mov Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r11); UPD(0x0C0762F4u, 2);  /* 0C0762F2 mov.b @Rm,Rn */
	r10 = 0xC0AB240u; UPD(0x0C0762F6u, 1);  /* 0C0762F4 mov.l @(disp,pc),Rn */
	r11 = r12 & 0xFF;  /* 0C0762F6 extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C0762FAu, 2);  /* 0C0762F8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0762FAu); { u32 t_ = r10; PR = 0x0C0762FEu; r4 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0762FEu); }  /* 0C0762FA jsr @Rn */
L_0C0762FE: BLKS(0x0C0762FEu);
	r15 += 0x8u;  /* 0C0762FE add #imm,Rn */
	UPD(0x0C076300u, 1);
L_0C076300: BLKS(0x0C076300u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C075D3Eu, 3); goto L_0C075D3E; }  /* 0C076300 bra */
L_0C076310: BLKS(0x0C076310u);
	r8 = 0xC0A1700u; UPD(0x0C076312u, 1);  /* 0C076310 mov.l @(disp,pc),Rn */
	IF(0x0C076312u); { u32 t_ = r8; PR = 0x0C076316u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C076316u); }  /* 0C076312 jsr @Rn */
L_0C076316: BLKS(0x0C076316u);
	r2 = 0xC0A1590u; UPD(0x0C076318u, 1);  /* 0C076316 mov.l @(disp,pc),Rn */
	IF(0x0C076318u); { u32 t_ = r2; PR = 0x0C07631Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1590, 0x0C0A1590u, 0x0C07631Cu); }  /* 0C076318 jsr @Rn */
L_0C07631C: BLKS(0x0C07631Cu);
	r2 = 0x99u; UPD(0x0C07631Eu, 1);  /* 0C07631C mov.w @(disp,pc),Rn */
	r2 += r13;  /* 0C07631E add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C076322u, 2);  /* 0C076320 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C076322 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C076324 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C076326 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C076300u, 6); goto L_0C076300; } UPD(0x0C07632Cu, 1); goto L_0C07632C; }  /* 0C076328 bf/s */
L_0C07632C: BLKS(0x0C07632Cu);
	r0 = R32(r13 + 0xCu); UPD(0x0C07632Eu, 1);  /* 0C07632C mov.l @(disp,Rm),Rn */
	r3 = 0x0u;  /* 0C07632E mov #imm,Rn */
	r0 += 0x1u;  /* 0C076330 add #imm,Rn */
	r0 &= 0x7u;  /* 0C076332 and #imm,r0 */
	W8(r2, r3); UPD(0x0C076336u, 4);  /* 0C076334 mov.b Rm,@Rn */
	r4 = r11;  /* 0C076336 mov Rm,Rn */
	r1 = 0xC0A0380u; UPD(0x0C07633Au, 2);  /* 0C076338 mov.l @(disp,pc),Rn */
	{ W32(r13 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C075DC6u, 3); goto L_0C075DC6; }  /* 0C07633A bra */
}

/* FUN_0c076370 */
void f_0C076370(sh3_t *c)
{
	LOCALS;
L_0C076370: BLKS(0x0C076370u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C076372u, 1);  /* 0C076370 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C076374u, 1);  /* 0C076372 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C076376u, 1);  /* 0C076374 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C076378u, 1);  /* 0C076376 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07637Au, 1);  /* 0C076378 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07637Cu, 1);  /* 0C07637A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07637Eu, 1);  /* 0C07637C mov.l Rm,@-Rn */
	r9 = 0xC22C874u; UPD(0x0C076380u, 1);  /* 0C07637E mov.l @(disp,pc),Rn */
	IF(0x0C076380u); r15 -= 4; W32(r15, PR); UPD(0x0C076382u, 1);  /* 0C076380 sts.l pr,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C076384u, 1);  /* 0C076382 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE8u;  /* 0C076384 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C076388u, 2);  /* 0C076386 mov.w @Rm,Rn */
	r14 = r15;  /* 0C076388 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C07638Cu, 2);  /* 0C07638A mov.l @(disp,pc),Rn */
	IF(0x0C07638Cu); { u32 t_ = r8; PR = 0x0C076390u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C076390u); }  /* 0C07638C jsr @Rn */
L_0C076390: BLKS(0x0C076390u);
	T = (r0 & r0) == 0;  /* 0C076390 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0763C0u, 4); goto L_0C0763C0; } UPD(0x0C076396u, 1); goto L_0C076396; }  /* 0C076392 bf/s */
L_0C076396: BLKS(0x0C076396u);
	r14 += 0x18u;  /* 0C076396 add #imm,Rn */
	r15 = r14;  /* 0C076398 mov Rm,Rn */
	IF(0x0C07639Au); PR = R32(r15); r15 += 4; UPD(0x0C07639Cu, 3);  /* 0C07639A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07639Eu, 1);  /* 0C07639C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0763A0u, 1);  /* 0C07639E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0763A2u, 1);  /* 0C0763A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0763A4u, 1);  /* 0C0763A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0763A6u, 1);  /* 0C0763A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0763A8u, 1);  /* 0C0763A6 mov.l @Rm+,Rn */
	IF(0x0C0763A8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0763A8 rts */
L_0C0763C0: BLKS(0x0C0763C0u);
	r8 = 0xC0606C0u; UPD(0x0C0763C2u, 1);  /* 0C0763C0 mov.l @(disp,pc),Rn */
	IF(0x0C0763C2u); { u32 t_ = r8; PR = 0x0C0763C6u; r4 = 0xBu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0763C6u); }  /* 0C0763C2 jsr @Rn */
L_0C0763C6: BLKS(0x0C0763C6u);
	T = (r0 & r0) == 0;  /* 0C0763C6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C076396u, 4); goto L_0C076396; } goto L_0C0763CC; }  /* 0C0763C8 bt/s */
L_0C0763CC: BLKS(0x0C0763CCu);
	r12 = 0xC2755BCu; UPD(0x0C0763CEu, 2);  /* 0C0763CC mov.l @(disp,pc),Rn */
	r11 = 0xB4u; UPD(0x0C0763D0u, 1);  /* 0C0763CE mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r2 = v_; } UPD(0x0C0763D2u, 1);  /* 0C0763D0 mov.w @Rm+,Rn */
	IF(0x0C0763D2u); MACL = r2 * r11;  /* 0C0763D2 mul.l Rm,Rn */
	r5 = 0xC286509u; UPD(0x0C0763D6u, 3);  /* 0C0763D4 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0763D8u, 1);  /* 0C0763D6 mov.w @Rm,Rn */
	IF(0x0C0763D8u); r11 = MACL;  /* 0C0763D8 sts macl,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0763DCu, 2);  /* 0C0763DA mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFFFF;  /* 0C0763DC extu.w Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C0763E0u, 2);  /* 0C0763DE mov.b @Rm,Rn */
	r11 += r6;  /* 0C0763E0 add Rm,Rn */
	W32(r11 + 0x4u, r0); UPD(0x0C0763E4u, 2);  /* 0C0763E2 mov.l Rm,@(disp,Rn) */
	r8 = 0xC28629Eu; UPD(0x0C0763E6u, 1);  /* 0C0763E4 mov.l @(disp,pc),Rn */
	r0 = 0x8Au; UPD(0x0C0763E8u, 1);  /* 0C0763E6 mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C0763EAu, 1);  /* 0C0763E8 mov.w @Rm,Rn */
	IF(0x0C0763EAu); W16(r0 + r11, r13); UPD(0x0C0763ECu, 1);  /* 0C0763EA mov.w Rm,@(r0,Rn) */
	r8 = 0x7u;  /* 0C0763EC mov #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0763EE add #imm,Rn */
	IF(0x0C0763F0u); W16(r0 + r11, r13); UPD(0x0C0763F2u, 3);  /* 0C0763F0 mov.w Rm,@(r0,Rn) */
	r8 += r14;  /* 0C0763F2 add Rm,Rn */
	r9 = 0xC0A02D0u; UPD(0x0C0763F6u, 2);  /* 0C0763F4 mov.l @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C0763F6 mov #imm,Rn */
	W32(r14, r2); UPD(0x0C0763FAu, 2);  /* 0C0763F8 mov.l Rm,@Rn */
	r3 = 0xC0000014u; UPD(0x0C0763FCu, 1);  /* 0C0763FA mov.l @(disp,pc),Rn */
	W32(r11 + 0xCu, r13); UPD(0x0C0763FEu, 1);  /* 0C0763FC mov.l Rm,@(disp,Rn) */
	W32(r11, r3); UPD(0x0C076400u, 1);  /* 0C0763FE mov.l Rm,@Rn */
	W32(r11 + 0x8u, r13); UPD(0x0C076402u, 1);  /* 0C076400 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x4u, r7); UPD(0x0C076404u, 1);  /* 0C076402 mov.l Rm,@(disp,Rn) */
	IF(0x0C076404u); { u32 t_ = r9; PR = 0x0C076408u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C076408u); }  /* 0C076404 jsr @Rn */
L_0C076408: BLKS(0x0C076408u);
	r1 = R32(r14 + 0x4u); UPD(0x0C07640Au, 1);  /* 0C076408 mov.l @(disp,Rm),Rn */
	r5 = 0x4Cu;  /* 0C07640A mov #imm,Rn */
	r10 = 0xC21F5E2u; UPD(0x0C07640Eu, 2);  /* 0C07640C mov.l @(disp,pc),Rn */
	IF(0x0C07640Eu); MACL = r1 * r5;  /* 0C07640E mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r10); UPD(0x0C076412u, 3);  /* 0C076410 mov.w @Rm,Rn */
	r3 = 0xC392D5Eu; UPD(0x0C076414u, 1);  /* 0C076412 mov.l @(disp,pc),Rn */
	IF(0x0C076414u); r10 = MACL;  /* 0C076414 sts macl,Rn */
	r7 = 0xC26CAE0u; UPD(0x0C076418u, 2);  /* 0C076416 mov.l @(disp,pc),Rn */
	IF(0x0C076418u); r6 <<= 16;  /* 0C076418 shll16 Rn */
	r10 += r7;  /* 0C07641A add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C07641Eu, 3);  /* 0C07641C mov.w @Rm,Rn */
	r2 = R32(r10 + 0x8u); UPD(0x0C076420u, 1);  /* 0C07641E mov.l @(disp,Rm),Rn */
	IF(0x0C076420u); r4 <<= 16;  /* 0C076420 shll16 Rn */
	r0 = 0xC0A1530u; UPD(0x0C076424u, 2);  /* 0C076422 mov.l @(disp,pc),Rn */
	r6 -= r2;  /* 0C076424 sub Rm,Rn */
	W32(r11 + 0x28u, r4); UPD(0x0C076428u, 2);  /* 0C076426 mov.l Rm,@(disp,Rn) */
	r10 += 0x42u;  /* 0C076428 add #imm,Rn */
	W32(r11 + 0x24u, r6); UPD(0x0C07642Cu, 2);  /* 0C07642A mov.l Rm,@(disp,Rn) */
	IF(0x0C07642Cu); { u32 t_ = r0; PR = 0x0C076430u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C076430u); }  /* 0C07642C jsr @Rn */
L_0C076430: BLKS(0x0C076430u);
	r9 = (u32)(s32)(s8)R8(r8); UPD(0x0C076432u, 1);  /* 0C076430 mov.b @Rm,Rn */
	r0 = 0xB0u; UPD(0x0C076434u, 1);  /* 0C076432 mov.w @(disp,pc),Rn */
	IF(0x0C076434u); W8(r0 + r11, r9); UPD(0x0C076436u, 1);  /* 0C076434 mov.b Rm,@(r0,Rn) */
	r6 = 0xA8u; UPD(0x0C076438u, 1);  /* 0C076436 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFDu;  /* 0C076438 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C07643Cu, 2);  /* 0C07643A mov.b @Rm,Rn */
	r6 += r11;  /* 0C07643C add Rm,Rn */
	r6 += 0x1u;  /* 0C07643E add #imm,Rn */
	r5 += 0x1u;  /* 0C076440 add #imm,Rn */
	IF(0x0C076442u); W8(r0 + r11, r5); UPD(0x0C076444u, 4);  /* 0C076442 mov.b Rm,@(r0,Rn) */
	W8(r6, r5); UPD(0x0C076446u, 1);  /* 0C076444 mov.b Rm,@Rn */
	r2 = 0xC0A1780u; UPD(0x0C076448u, 1);  /* 0C076446 mov.l @(disp,pc),Rn */
	r7 = 0xC27DC20u; UPD(0x0C07644Au, 1);  /* 0C076448 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C07644Cu, 1);  /* 0C07644A mov.l @Rm,Rn */
	r5 = R32(r7); UPD(0x0C07644Eu, 1);  /* 0C07644C mov.l @Rm,Rn */
	IF(0x0C07644Eu); { u32 t_ = r2; PR = 0x0C076452u; W32(r14 + 0x14u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C076452u); }  /* 0C07644E jsr @Rn */
L_0C076452: BLKS(0x0C076452u);
	r4 = 0x8Cu; UPD(0x0C076454u, 1);  /* 0C076452 mov.w @(disp,pc),Rn */
	r3 = 0x94u; UPD(0x0C076456u, 1);  /* 0C076454 mov.w @(disp,pc),Rn */
	r4 += r11;  /* 0C076456 add Rm,Rn */
	r0 = 0x90u; UPD(0x0C07645Au, 2);  /* 0C076458 mov.w @(disp,pc),Rn */
	r3 += r11;  /* 0C07645A add Rm,Rn */
	IF(0x0C07645Cu); W32(r0 + r11, r13); UPD(0x0C07645Eu, 2);  /* 0C07645C mov.l Rm,@(r0,Rn) */
	W32(r11 + 0x30u, r13); UPD(0x0C076460u, 1);  /* 0C07645E mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x2Cu, r13); UPD(0x0C076462u, 1);  /* 0C076460 mov.l Rm,@(disp,Rn) */
	W32(r3, r13); UPD(0x0C076464u, 1);  /* 0C076462 mov.l Rm,@Rn */
	W32(r4, r13); UPD(0x0C076466u, 1);  /* 0C076464 mov.l Rm,@Rn */
	W32(r14 + 0x8u, r13); UPD(0x0C076468u, 1);  /* 0C076466 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x14u); UPD(0x0C07646Au, 1);  /* 0C076468 mov.l @(disp,Rm),Rn */
	r13 = r11;  /* 0C07646A mov Rm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C07646Eu, 2);  /* 0C07646C mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C07646E mov #imm,Rn */
	UPD(0x0C076470u, 1);
L_0C076470: BLKS(0x0C076470u);
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C076472u, 1);  /* 0C076470 mov.w @Rm+,Rn */
	r0 = 0x2u;  /* 0C076472 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C076476u, 2);  /* 0C076474 mov.w @(disp,pc),Rn */
	IF(0x0C076476u); MACL = r10 * r8;  /* 0C076476 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C07647Au, 3);  /* 0C076478 mov.l @(disp,pc),Rn */
	IF(0x0C07647Au); r8 = MACL;  /* 0C07647A sts macl,Rn */
	IF(0x0C07647Cu); r9 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C07647Eu, 2);  /* 0C07647C mov.w @(r0,Rm),Rn */
	r8 += r6;  /* 0C07647E add Rm,Rn */
	r8 += 0x7Cu;  /* 0C076480 add #imm,Rn */
	W16(r8, r9); UPD(0x0C076484u, 3);  /* 0C076482 mov.w Rm,@Rn */
	r6 = 0x0u;  /* 0C076484 mov #imm,Rn */
	r9 = 0xC187F58u; UPD(0x0C076488u, 2);  /* 0C076486 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C076488 add #imm,Rn */
	r4 = 0xC22C874u; UPD(0x0C07648Cu, 2);  /* 0C07648A mov.l @(disp,pc),Rn */
	r9 += r11;  /* 0C07648C add Rm,Rn */
	r0 = R32(r9); UPD(0x0C076490u, 2);  /* 0C07648E mov.l @Rm,Rn */
	r11 += 0x14u;  /* 0C076490 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r4); UPD(0x0C076494u, 2);  /* 0C076492 mov.w @Rm,Rn */
	r1 = 0xC0000100u; UPD(0x0C076496u, 1);  /* 0C076494 mov.l @(disp,pc),Rn */
	r7 = r5 & 0xFFFF;  /* 0C076496 extu.w Rm,Rn */
	r0 |= r1;  /* 0C076498 or Rm,Rn */
	W32(r8, r0); UPD(0x0C07649Cu, 3);  /* 0C07649A mov.l Rm,@Rn */
	r4 = r10;  /* 0C07649C mov Rm,Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C0764A0u, 2);  /* 0C07649E mov.l Rm,@(disp,Rn) */
	r3 = 0xC0A02D0u; UPD(0x0C0764A2u, 1);  /* 0C0764A0 mov.l @(disp,pc),Rn */
	r2 = R32(r9 + 0x4u); UPD(0x0C0764A4u, 1);  /* 0C0764A2 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r6); UPD(0x0C0764A6u, 1);  /* 0C0764A4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0764A6u); { u32 t_ = r3; PR = 0x0C0764AAu; W32(r8 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0764AAu); }  /* 0C0764A6 jsr @Rn */
L_0C0764AA: BLKS(0x0C0764AAu);
	r4 = R32(r13 + 0x24u); UPD(0x0C0764ACu, 1);  /* 0C0764AA mov.l @(disp,Rm),Rn */
	r6 = R32(r13 + 0x28u); UPD(0x0C0764AEu, 1);  /* 0C0764AC mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C0764B0u, 1);  /* 0C0764AE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r6); UPD(0x0C0764B2u, 1);  /* 0C0764B0 mov.l Rm,@(disp,Rn) */
	r0 = 0x84u; UPD(0x0C0764B4u, 1);  /* 0C0764B2 mov.w @(disp,pc),Rn */
	r3 = R32(r9 + 0x8u); UPD(0x0C0764B6u, 1);  /* 0C0764B4 mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C0764B6 add Rm,Rn */
	r5 = R32(r14); UPD(0x0C0764BAu, 2);  /* 0C0764B8 mov.l @Rm,Rn */
	r0 += 0x2u;  /* 0C0764BA add #imm,Rn */
	r7 = 0xB4u; UPD(0x0C0764BEu, 2);  /* 0C0764BC mov.w @(disp,pc),Rn */
	r1 = 0x4000u; UPD(0x0C0764C0u, 1);  /* 0C0764BE mov.w @(disp,pc),Rn */
	IF(0x0C0764C0u); MACL = r5 * r7;  /* 0C0764C0 mul.l Rm,Rn */
	W32(r8 + 0x2Cu, r3); UPD(0x0C0764C4u, 3);  /* 0C0764C2 mov.l Rm,@(disp,Rn) */
	W16(r0, r1); UPD(0x0C0764C6u, 1);  /* 0C0764C4 mov.w Rm,@Rn */
	IF(0x0C0764C6u); r2 = MACL;  /* 0C0764C6 sts macl,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C0764CAu, 2);  /* 0C0764C8 mov.l @(disp,Rm),Rn */
	W32(r14 + 0xCu, r2); UPD(0x0C0764CCu, 1);  /* 0C0764CA mov.l Rm,@(disp,Rn) */
	r9 += 0x10u;  /* 0C0764CC add #imm,Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C0764D0u, 2);  /* 0C0764CE mov.l Rm,@(disp,Rn) */
	r4 = 0xA1u; UPD(0x0C0764D2u, 1);  /* 0C0764D0 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0764D2 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r1 = v_; } UPD(0x0C0764D6u, 2);  /* 0C0764D4 mov.b @Rm+,Rn */
	r5 = 0xC0A1530u; UPD(0x0C0764D8u, 1);  /* 0C0764D6 mov.l @(disp,pc),Rn */
	IF(0x0C0764D8u); W8(r0 + r4, r1); UPD(0x0C0764DAu, 1);  /* 0C0764D8 mov.b Rm,@(r0,Rn) */
	IF(0x0C0764DAu); { u32 t_ = r5; PR = 0x0C0764DEu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0764DEu); }  /* 0C0764DA jsr @Rn */
L_0C0764DE: BLKS(0x0C0764DEu);
	r0 = 0xB0u; UPD(0x0C0764E0u, 1);  /* 0C0764DE mov.w @(disp,pc),Rn */
	r10 = 0x5u;  /* 0C0764E0 mov #imm,Rn */
	IF(0x0C0764E2u); r7 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0764E4u, 2);  /* 0C0764E2 mov.b @(r0,Rm),Rn */
	IF(0x0C0764E4u); W8(r0 + r8, r7); UPD(0x0C0764E6u, 1);  /* 0C0764E4 mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C0764E8u, 1);  /* 0C0764E6 mov.w @(disp,pc),Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C0764EAu, 1);  /* 0C0764E8 mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C0764EA add Rm,Rn */
	r2 = 0xACu; UPD(0x0C0764EEu, 2);  /* 0C0764EC mov.w @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C0764EE add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C0764F2u, 2);  /* 0C0764F0 mov.b @Rm,Rn */
	r8 += r2;  /* 0C0764F2 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r6); UPD(0x0C0764F6u, 2);  /* 0C0764F4 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0764F6 add #imm,Rn */
	r4 += r3;  /* 0C0764F8 add Rm,Rn */
	W8(r8, r4); UPD(0x0C0764FCu, 3);  /* 0C0764FA mov.b Rm,@Rn */
	W8(r0, r4); UPD(0x0C0764FEu, 1);  /* 0C0764FC mov.b Rm,@Rn */
	r8 = R32(r14 + 0x8u); UPD(0x0C076500u, 1);  /* 0C0764FE mov.l @(disp,Rm),Rn */
	r8 += 0x1u;  /* 0C076500 add #imm,Rn */
	r9 = (u32)(s32)(s16)r8;  /* 0C076502 exts.w Rm,Rn */
	W32(r14 + 0x8u, r9); UPD(0x0C076506u, 3);  /* 0C076504 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x8u); UPD(0x0C076508u, 1);  /* 0C076506 mov.l @(disp,Rm),Rn */
	T = (s32)r1 > (s32)r10;  /* 0C076508 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C076470u, 4); goto L_0C076470; }  /* 0C07650A bf */
L_0C07650C: BLKS(0x0C07650Cu);
	r12 = 0x8u;  /* 0C07650C mov #imm,Rn */
	r11 = 0xC286274u; UPD(0x0C076510u, 2);  /* 0C07650E mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)R16(r11); UPD(0x0C076512u, 1);  /* 0C076510 mov.w @Rm,Rn */
	r0 = r13 & 0xFF;  /* 0C076512 extu.b Rm,Rn */
	T = (s32)r0 > (s32)r12;  /* 0C076514 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07651Cu, 5); goto L_0C07651C; }  /* 0C076516 bf */
L_0C076518: BLKS(0x0C076518u);
	{ IF(0x0C07651Au); ; /* slot nop */ UPD(0x0C0767B0u, 3); goto L_0C0767B0; }  /* 0C076518 bra */
L_0C07651C: BLKS(0x0C07651Cu);
	r3 = 0xC2755CAu; UPD(0x0C07651Eu, 1);  /* 0C07651C mov.l @(disp,pc),Rn */
	r0 += 0x26u;  /* 0C07651E add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r3); UPD(0x0C076522u, 2);  /* 0C076520 mov.w @Rm,Rn */
	r4 = 0x0u;  /* 0C076522 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C076526u, 2);  /* 0C076524 mov.w @(disp,pc),Rn */
	IF(0x0C076526u); MACL = r13 * r8;  /* 0C076526 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C07652Au, 3);  /* 0C076528 mov.l @(disp,pc),Rn */
	r11 = 0xC2755BCu; UPD(0x0C07652Cu, 1);  /* 0C07652A mov.l @(disp,pc),Rn */
	IF(0x0C07652Cu); r8 = MACL;  /* 0C07652C sts macl,Rn */
	r12 = (u32)(s32)(s16)R16(r11); UPD(0x0C076530u, 2);  /* 0C07652E mov.w @Rm,Rn */
	r8 += r2;  /* 0C076530 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C076532 add #imm,Rn */
	W16(r8, r12); UPD(0x0C076536u, 3);  /* 0C076534 mov.w Rm,@Rn */
	r10 = 0xC3000010u; UPD(0x0C076538u, 1);  /* 0C076536 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C076538 add #imm,Rn */
	W32(r8, r10); UPD(0x0C07653Cu, 2);  /* 0C07653A mov.l Rm,@Rn */
	r6 = 0xC26CD40u; UPD(0x0C07653Eu, 1);  /* 0C07653C mov.l @(disp,pc),Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C076540u, 1);  /* 0C07653E mov.l Rm,@(disp,Rn) */
	r10 = R32(r14 + 0xCu); UPD(0x0C076542u, 1);  /* 0C076540 mov.l @(disp,Rm),Rn */
	r0 = 0xC0A02D0u; UPD(0x0C076544u, 1);  /* 0C076542 mov.l @(disp,pc),Rn */
	r10 += r6;  /* 0C076544 add Rm,Rn */
	r9 = R32(r10 + 0x4u); UPD(0x0C076548u, 2);  /* 0C076546 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C07654Au, 1);  /* 0C076548 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x4u, r9); UPD(0x0C07654Cu, 1);  /* 0C07654A mov.l Rm,@(disp,Rn) */
	IF(0x0C07654Cu); { u32 t_ = r0; PR = 0x0C076550u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C076550u); }  /* 0C07654C jsr @Rn */
L_0C076550: BLKS(0x0C076550u);
	r5 = 0x84u; UPD(0x0C076552u, 1);  /* 0C076550 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C076552 mov Rm,Rn */
	r12 = 0xC0A1530u; UPD(0x0C076556u, 2);  /* 0C076554 mov.l @(disp,pc),Rn */
	r5 += r8;  /* 0C076556 add Rm,Rn */
	r7 = R32(r10 + 0x24u); UPD(0x0C07655Au, 2);  /* 0C076558 mov.l @(disp,Rm),Rn */
	r5 += 0x2u;  /* 0C07655A add #imm,Rn */
	r3 = R32(r10 + 0x28u); UPD(0x0C07655Eu, 2);  /* 0C07655C mov.l @(disp,Rm),Rn */
	r2 = 0xFFDE0000u; UPD(0x0C076560u, 1);  /* 0C07655E mov.l @(disp,pc),Rn */
	r1 = 0x100u; UPD(0x0C076562u, 1);  /* 0C076560 mov.w @(disp,pc),Rn */
	r11 = 0x1D0000u; UPD(0x0C076564u, 1);  /* 0C076562 mov.l @(disp,pc),Rn */
	r13 = 0xB0u; UPD(0x0C076566u, 1);  /* 0C076564 mov.w @(disp,pc),Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C076568u, 1);  /* 0C076566 mov.l Rm,@(disp,Rn) */
	r13 += r10;  /* 0C076568 add Rm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C07656Cu, 2);  /* 0C07656A mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r2); UPD(0x0C07656Eu, 1);  /* 0C07656C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r11); UPD(0x0C076570u, 1);  /* 0C07656E mov.l Rm,@(disp,Rn) */
	IF(0x0C076570u); { u32 t_ = r12; PR = 0x0C076574u; W16(r5, r1); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C076574u); }  /* 0C076570 jsr @Rn */
L_0C076574: BLKS(0x0C076574u);
	r0 = 0xB0u; UPD(0x0C076576u, 1);  /* 0C076574 mov.w @(disp,pc),Rn */
	r2 = 0x8u;  /* 0C076576 mov #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r13); UPD(0x0C07657Au, 2);  /* 0C076578 mov.b @Rm,Rn */
	r4 = 0xACu; UPD(0x0C07657Cu, 1);  /* 0C07657A mov.w @(disp,pc),Rn */
	IF(0x0C07657Cu); W8(r0 + r8, r6); UPD(0x0C07657Eu, 1);  /* 0C07657C mov.b Rm,@(r0,Rn) */
	r11 = r4;  /* 0C07657E mov Rm,Rn */
	r12 = 0xA8u; UPD(0x0C076582u, 2);  /* 0C076580 mov.w @(disp,pc),Rn */
	r11 += r10;  /* 0C076582 add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C076586u, 2);  /* 0C076584 mov.w @(disp,pc),Rn */
	r12 += r10;  /* 0C076586 add Rm,Rn */
	r0 += r8;  /* 0C076588 add Rm,Rn */
	r12 += 0x1u;  /* 0C07658A add #imm,Rn */
	r11 += 0x1u;  /* 0C07658C add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r12); UPD(0x0C076590u, 5);  /* 0C07658E mov.b @Rm,Rn */
	r8 += r4;  /* 0C076590 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C076594u, 2);  /* 0C076592 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C076594 add #imm,Rn */
	r8 += 0x1u;  /* 0C076596 add #imm,Rn */
	W8(r0, r9); UPD(0x0C07659Au, 3);  /* 0C076598 mov.b Rm,@Rn */
	W8(r8, r5); UPD(0x0C07659Cu, 1);  /* 0C07659A mov.b Rm,@Rn */
	r7 = 0xC286274u; UPD(0x0C07659Eu, 1);  /* 0C07659C mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C0765A0u, 1);  /* 0C07659E mov.w @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C0765A0 extu.b Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C0765A2 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0765AAu, 5); goto L_0C0765AA; }  /* 0C0765A4 bf */
L_0C0765A6: BLKS(0x0C0765A6u);
	{ IF(0x0C0765A8u); ; /* slot nop */ UPD(0x0C0767A0u, 3); goto L_0C0767A0; }  /* 0C0765A6 bra */
L_0C0765AA: BLKS(0x0C0765AAu);
	r2 = 0xC2755CAu; UPD(0x0C0765ACu, 1);  /* 0C0765AA mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0765AC mov #imm,Rn */
	r2 += 0x2u;  /* 0C0765AE add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r2); UPD(0x0C0765B2u, 3);  /* 0C0765B0 mov.w @Rm,Rn */
	r0 += 0x26u;  /* 0C0765B2 add #imm,Rn */
	r8 = 0xB4u; UPD(0x0C0765B6u, 2);  /* 0C0765B4 mov.w @(disp,pc),Rn */
	{ IF(0x0C0765B8u); MACL = r9 * r8; /* slot mul.l Rm,Rn */ UPD(0x0C076630u, 4); goto L_0C076630; }  /* 0C0765B6 bra */
L_0C076630: BLKS(0x0C076630u);
	r1 = 0xC26CD40u; UPD(0x0C076632u, 1);  /* 0C076630 mov.l @(disp,pc),Rn */
	r6 = 0xC2755BCu; UPD(0x0C076634u, 1);  /* 0C076632 mov.l @(disp,pc),Rn */
	IF(0x0C076634u); r8 = MACL;  /* 0C076634 sts macl,Rn */
	r4 = (u32)(s32)(s16)R16(r6); UPD(0x0C076638u, 2);  /* 0C076636 mov.w @Rm,Rn */
	r8 += r1;  /* 0C076638 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C07663A add #imm,Rn */
	W16(r8, r4); UPD(0x0C07663Eu, 3);  /* 0C07663C mov.w Rm,@Rn */
	r2 = 0xC0A02D0u; UPD(0x0C076640u, 1);  /* 0C07663E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C076640 add #imm,Rn */
	r5 = 0xC3000010u; UPD(0x0C076644u, 2);  /* 0C076642 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C076644 mov Rm,Rn */
	r7 = R32(r10 + 0x4u); UPD(0x0C076648u, 2);  /* 0C076646 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r3); UPD(0x0C07664Au, 1);  /* 0C076648 mov.l Rm,@(disp,Rn) */
	W32(r8, r5); UPD(0x0C07664Cu, 1);  /* 0C07664A mov.l Rm,@Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C07664Eu, 1);  /* 0C07664C mov.l Rm,@(disp,Rn) */
	IF(0x0C07664Eu); { u32 t_ = r2; PR = 0x0C076652u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C076652u); }  /* 0C07664E jsr @Rn */
L_0C076652: BLKS(0x0C076652u);
	r4 = R32(r10 + 0x24u); UPD(0x0C076654u, 1);  /* 0C076652 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C076656u, 1);  /* 0C076654 mov.l Rm,@(disp,Rn) */
	r6 = 0x84u; UPD(0x0C076658u, 1);  /* 0C076656 mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C076658 mov Rm,Rn */
	r0 = R32(r10 + 0x28u); UPD(0x0C07665Cu, 2);  /* 0C07665A mov.l @(disp,Rm),Rn */
	r6 += r8;  /* 0C07665C add Rm,Rn */
	r9 = 0xC0A1530u; UPD(0x0C076660u, 2);  /* 0C07665E mov.l @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C076660 add #imm,Rn */
	r1 = 0x100u; UPD(0x0C076664u, 2);  /* 0C076662 mov.w @(disp,pc),Rn */
	r5 = 0xFFF60000u; UPD(0x0C076666u, 1);  /* 0C076664 mov.l @(disp,pc),Rn */
	r7 = 0x340000u; UPD(0x0C076668u, 1);  /* 0C076666 mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C07666Au, 1);  /* 0C076668 mov.l Rm,@(disp,Rn) */
	W16(r6, r1); UPD(0x0C07666Cu, 1);  /* 0C07666A mov.w Rm,@Rn */
	W32(r8 + 0x2Cu, r5); UPD(0x0C07666Eu, 1);  /* 0C07666C mov.l Rm,@(disp,Rn) */
	IF(0x0C07666Eu); { u32 t_ = r9; PR = 0x0C076672u; W32(r8 + 0x30u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C076672u); }  /* 0C07666E jsr @Rn */
L_0C076672: BLKS(0x0C076672u);
	r0 = 0xB0u; UPD(0x0C076674u, 1);  /* 0C076672 mov.w @(disp,pc),Rn */
	r7 = 0x8u;  /* 0C076674 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C076678u, 2);  /* 0C076676 mov.b @Rm,Rn */
	r6 = 0xA8u; UPD(0x0C07667Au, 1);  /* 0C076678 mov.w @(disp,pc),Rn */
	IF(0x0C07667Au); W8(r0 + r8, r2); UPD(0x0C07667Cu, 1);  /* 0C07667A mov.b Rm,@(r0,Rn) */
	r6 += r8;  /* 0C07667C add Rm,Rn */
	r4 = 0xACu; UPD(0x0C076680u, 2);  /* 0C07667E mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C076680 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C076684u, 2);  /* 0C076682 mov.b @Rm,Rn */
	r8 += r4;  /* 0C076684 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C076688u, 2);  /* 0C076686 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C076688 add #imm,Rn */
	W8(r8, r0); UPD(0x0C07668Cu, 2);  /* 0C07668A mov.b Rm,@Rn */
	W8(r6, r3); UPD(0x0C07668Eu, 1);  /* 0C07668C mov.b Rm,@Rn */
	r1 = 0xC286274u; UPD(0x0C076690u, 1);  /* 0C07668E mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r1); UPD(0x0C076692u, 1);  /* 0C076690 mov.w @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C076692 extu.b Rm,Rn */
	T = (s32)r0 > (s32)r7;  /* 0C076694 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07669Cu, 5); goto L_0C07669C; }  /* 0C076696 bf */
L_0C076698: BLKS(0x0C076698u);
	{ IF(0x0C07669Au); ; /* slot nop */ UPD(0x0C076790u, 3); goto L_0C076790; }  /* 0C076698 bra */
L_0C07669C: BLKS(0x0C07669Cu);
	r7 = 0xC2755CAu; UPD(0x0C07669Eu, 1);  /* 0C07669C mov.l @(disp,pc),Rn */
	r0 += 0x26u;  /* 0C07669E add #imm,Rn */
	r7 += 0x4u;  /* 0C0766A0 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r7); UPD(0x0C0766A4u, 3);  /* 0C0766A2 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0766A6u, 1);  /* 0C0766A4 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C0766A6 mov #imm,Rn */
	IF(0x0C0766A8u); MACL = r9 * r8;  /* 0C0766A8 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0766ACu, 4);  /* 0C0766AA mov.l @(disp,pc),Rn */
	r4 = 0xC2755BCu; UPD(0x0C0766AEu, 1);  /* 0C0766AC mov.l @(disp,pc),Rn */
	IF(0x0C0766AEu); r8 = MACL;  /* 0C0766AE sts macl,Rn */
	r5 = (u32)(s32)(s16)R16(r4); UPD(0x0C0766B2u, 2);  /* 0C0766B0 mov.w @Rm,Rn */
	r8 += r6;  /* 0C0766B2 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C0766B4 add #imm,Rn */
	W16(r8, r5); UPD(0x0C0766B8u, 3);  /* 0C0766B6 mov.w Rm,@Rn */
	r4 = r9;  /* 0C0766B8 mov Rm,Rn */
	r1 = 0xC0A02D0u; UPD(0x0C0766BCu, 2);  /* 0C0766BA mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C0766BC add #imm,Rn */
	r2 = R32(r10 + 0x4u); UPD(0x0C0766C0u, 2);  /* 0C0766BE mov.l @(disp,Rm),Rn */
	r3 = 0xC3000010u; UPD(0x0C0766C2u, 1);  /* 0C0766C0 mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0766C4u, 1);  /* 0C0766C2 mov.l Rm,@(disp,Rn) */
	W32(r8, r3); UPD(0x0C0766C6u, 1);  /* 0C0766C4 mov.l Rm,@Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0766C8u, 1);  /* 0C0766C6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0766C8u); { u32 t_ = r1; PR = 0x0C0766CCu; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0766CCu); }  /* 0C0766C8 jsr @Rn */
L_0C0766CC: BLKS(0x0C0766CCu);
	r4 = 0x84u; UPD(0x0C0766CEu, 1);  /* 0C0766CC mov.w @(disp,pc),Rn */
	r6 = 0x100u; UPD(0x0C0766D0u, 1);  /* 0C0766CE mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C0766D0 add Rm,Rn */
	r4 += 0x2u;  /* 0C0766D2 add #imm,Rn */
	W16(r4, r6); UPD(0x0C0766D6u, 3);  /* 0C0766D4 mov.w Rm,@Rn */
	r4 = r9;  /* 0C0766D6 mov Rm,Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C0766DAu, 2);  /* 0C0766D8 mov.l @(disp,Rm),Rn */
	r0 = R32(r10 + 0x28u); UPD(0x0C0766DCu, 1);  /* 0C0766DA mov.l @(disp,Rm),Rn */
	r9 = 0xC0A1530u; UPD(0x0C0766DEu, 1);  /* 0C0766DC mov.l @(disp,pc),Rn */
	r3 = 0x1C0000u; UPD(0x0C0766E0u, 1);  /* 0C0766DE mov.l @(disp,pc),Rn */
	r7 = 0xFFCC0000u; UPD(0x0C0766E2u, 1);  /* 0C0766E0 mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C0766E4u, 1);  /* 0C0766E2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C0766E6u, 1);  /* 0C0766E4 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r3); UPD(0x0C0766E8u, 1);  /* 0C0766E6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0766E8u); { u32 t_ = r9; PR = 0x0C0766ECu; W32(r8 + 0x30u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0766ECu); }  /* 0C0766E8 jsr @Rn */
L_0C0766EC: BLKS(0x0C0766ECu);
	r0 = 0xB0u; UPD(0x0C0766EEu, 1);  /* 0C0766EC mov.w @(disp,pc),Rn */
	r7 = 0x8u;  /* 0C0766EE mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C0766F2u, 2);  /* 0C0766F0 mov.b @Rm,Rn */
	r6 = 0xA8u; UPD(0x0C0766F4u, 1);  /* 0C0766F2 mov.w @(disp,pc),Rn */
	r5 = 0xACu; UPD(0x0C0766F6u, 1);  /* 0C0766F4 mov.w @(disp,pc),Rn */
	r6 += r8;  /* 0C0766F6 add Rm,Rn */
	IF(0x0C0766F8u); W8(r0 + r8, r2); UPD(0x0C0766FAu, 2);  /* 0C0766F8 mov.b Rm,@(r0,Rn) */
	r5 += r8;  /* 0C0766FA add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C0766FEu, 2);  /* 0C0766FC mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0766FE add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C076702u, 2);  /* 0C076700 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C076702 add #imm,Rn */
	r0 = 0xC286274u; UPD(0x0C076706u, 2);  /* 0C076704 mov.l @(disp,pc),Rn */
	W8(r6, r1); UPD(0x0C076708u, 1);  /* 0C076706 mov.b Rm,@Rn */
	W8(r5, r4); UPD(0x0C07670Au, 1);  /* 0C076708 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C07670Cu, 1);  /* 0C07670A mov.w @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C07670C extu.b Rm,Rn */
	T = (s32)r0 > (s32)r7;  /* 0C07670E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C076780u, 5); goto L_0C076780; }  /* 0C076710 bt */
L_0C076712: BLKS(0x0C076712u);
	r2 = 0xC2755CAu; UPD(0x0C076714u, 1);  /* 0C076712 mov.l @(disp,pc),Rn */
	r0 += 0x26u;  /* 0C076714 add #imm,Rn */
	r2 += 0x6u;  /* 0C076716 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r2); UPD(0x0C07671Au, 3);  /* 0C076718 mov.w @Rm,Rn */
	r3 = 0x0u;  /* 0C07671A mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C07671Eu, 2);  /* 0C07671C mov.w @(disp,pc),Rn */
	IF(0x0C07671Eu); MACL = r9 * r8;  /* 0C07671E mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C076722u, 3);  /* 0C076720 mov.l @(disp,pc),Rn */
	r7 = 0xC2755BCu; UPD(0x0C076724u, 1);  /* 0C076722 mov.l @(disp,pc),Rn */
	IF(0x0C076724u); r8 = MACL;  /* 0C076724 sts macl,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C076728u, 2);  /* 0C076726 mov.w @Rm,Rn */
	r8 += r1;  /* 0C076728 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C07672A add #imm,Rn */
	W16(r8, r6); UPD(0x0C07672Eu, 3);  /* 0C07672C mov.w Rm,@Rn */
	r8 += 0xFFFFFF84u;  /* 0C07672E add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C076732u, 2);  /* 0C076730 mov.l Rm,@(disp,Rn) */
	r4 = 0xC3000010u; UPD(0x0C076734u, 1);  /* 0C076732 mov.l @(disp,pc),Rn */
	r0 = 0xC0A02D0u; UPD(0x0C076736u, 1);  /* 0C076734 mov.l @(disp,pc),Rn */
	r5 = R32(r10 + 0x4u); UPD(0x0C076738u, 1);  /* 0C076736 mov.l @(disp,Rm),Rn */
	W32(r8, r4); UPD(0x0C07673Au, 1);  /* 0C076738 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C07673Cu, 1);  /* 0C07673A mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C07673C mov Rm,Rn */
	IF(0x0C07673Eu); { u32 t_ = r0; PR = 0x0C076742u; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C076742u); }  /* 0C07673E jsr @Rn */
L_0C076742: BLKS(0x0C076742u);
	r2 = 0x84u; UPD(0x0C076744u, 1);  /* 0C076742 mov.w @(disp,pc),Rn */
	r4 = 0x340000u; UPD(0x0C076746u, 1);  /* 0C076744 mov.l @(disp,pc),Rn */
	r2 += r8;  /* 0C076746 add Rm,Rn */
	r1 = 0x100u; UPD(0x0C07674Au, 2);  /* 0C076748 mov.w @(disp,pc),Rn */
	r2 += 0x2u;  /* 0C07674A add #imm,Rn */
	r3 = 0xC0A1530u; UPD(0x0C07674Eu, 2);  /* 0C07674C mov.l @(disp,pc),Rn */
	r7 = R32(r10 + 0x24u); UPD(0x0C076750u, 1);  /* 0C07674E mov.l @(disp,Rm),Rn */
	r6 = R32(r10 + 0x28u); UPD(0x0C076752u, 1);  /* 0C076750 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r4); UPD(0x0C076754u, 1);  /* 0C076752 mov.l Rm,@(disp,Rn) */
	r5 = 0xFFE30000u; UPD(0x0C076756u, 1);  /* 0C076754 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C076756 mov Rm,Rn */
	W16(r2, r1); UPD(0x0C07675Au, 2);  /* 0C076758 mov.w Rm,@Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C07675Cu, 1);  /* 0C07675A mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r6); UPD(0x0C07675Eu, 1);  /* 0C07675C mov.l Rm,@(disp,Rn) */
	IF(0x0C07675Eu); { u32 t_ = r3; PR = 0x0C076762u; W32(r8 + 0x30u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C076762u); }  /* 0C07675E jsr @Rn */
L_0C076762: BLKS(0x0C076762u);
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C076764u, 1);  /* 0C076762 mov.b @Rm,Rn */
	r0 = 0xB0u; UPD(0x0C076766u, 1);  /* 0C076764 mov.w @(disp,pc),Rn */
	IF(0x0C076766u); W8(r0 + r8, r2); UPD(0x0C076768u, 1);  /* 0C076766 mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C07676Au, 1);  /* 0C076768 mov.w @(disp,pc),Rn */
	r13 = 0xACu; UPD(0x0C07676Cu, 1);  /* 0C07676A mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C07676C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C076770u, 2);  /* 0C07676E mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C076770 add #imm,Rn */
	r13 += r8;  /* 0C076772 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C076776u, 3);  /* 0C076774 mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C076776 add #imm,Rn */
	W8(r0, r1); UPD(0x0C07677Au, 2);  /* 0C076778 mov.b Rm,@Rn */
	W8(r13, r10); UPD(0x0C07677Cu, 1);  /* 0C07677A mov.b Rm,@Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C076396u, 3); goto L_0C076396; }  /* 0C07677C bra */
L_0C076780: BLKS(0x0C076780u);
	r9 = 0xC050D70u; UPD(0x0C076782u, 1);  /* 0C076780 mov.l @(disp,pc),Rn */
	IF(0x0C076782u); { u32 t_ = r9; PR = 0x0C076786u; r4 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C076786u); }  /* 0C076782 jsr @Rn */
L_0C076786: BLKS(0x0C076786u);
	{ r0 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(0x0C076712u, 3); goto L_0C076712; }  /* 0C076786 bra */
L_0C076790: BLKS(0x0C076790u);
	r9 = 0xC050D70u; UPD(0x0C076792u, 1);  /* 0C076790 mov.l @(disp,pc),Rn */
	IF(0x0C076792u); { u32 t_ = r9; PR = 0x0C076796u; r4 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C076796u); }  /* 0C076792 jsr @Rn */
L_0C076796: BLKS(0x0C076796u);
	{ r0 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(0x0C07669Cu, 3); goto L_0C07669C; }  /* 0C076796 bra */
L_0C0767A0: BLKS(0x0C0767A0u);
	r9 = 0xC050D70u; UPD(0x0C0767A2u, 1);  /* 0C0767A0 mov.l @(disp,pc),Rn */
	IF(0x0C0767A2u); { u32 t_ = r9; PR = 0x0C0767A6u; r4 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0767A6u); }  /* 0C0767A2 jsr @Rn */
L_0C0767A6: BLKS(0x0C0767A6u);
	{ r0 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(0x0C0765AAu, 3); goto L_0C0765AA; }  /* 0C0767A6 bra */
L_0C0767B0: BLKS(0x0C0767B0u);
	r10 = 0xC050D70u; UPD(0x0C0767B2u, 1);  /* 0C0767B0 mov.l @(disp,pc),Rn */
	IF(0x0C0767B2u); { u32 t_ = r10; PR = 0x0C0767B6u; r4 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0767B6u); }  /* 0C0767B2 jsr @Rn */
L_0C0767B6: BLKS(0x0C0767B6u);
	{ r0 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(0x0C07651Cu, 3); goto L_0C07651C; }  /* 0C0767B6 bra */
}

/* FUN_0c076800 */
void f_0C076800(sh3_t *c)
{
	LOCALS;
L_0C076800: BLKS(0x0C076800u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C076802u, 1);  /* 0C076800 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C076804u, 1);  /* 0C076802 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C076806u, 1);  /* 0C076804 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C076808u, 1);  /* 0C076806 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07680Au, 1);  /* 0C076808 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C07680Cu, 1);  /* 0C07680A mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C07680C exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C076810u, 2);  /* 0C07680E mov.l Rm,@-Rn */
	IF(0x0C076810u); MACL = r12 * r3;  /* 0C076810 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C076814u, 3);  /* 0C076812 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C076816u, 1);  /* 0C076814 mov.l @(disp,pc),Rn */
	IF(0x0C076816u); r2 = MACL;  /* 0C076816 sts macl,Rn */
	IF(0x0C076818u); r15 -= 4; W32(r15, PR); UPD(0x0C07681Au, 2);  /* 0C076818 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07681A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07681Eu, 2);  /* 0C07681C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C07681E add #imm,Rn */
	r0 = 0x2Eu;  /* 0C076820 mov #imm,Rn */
	T = r2 > r0;  /* 0C076822 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07682Cu, 6); goto L_0C07682C; } goto L_0C076828; }  /* 0C076824 bf/s */
L_0C076828: BLKS(0x0C076828u);
	{ IF(0x0C07682Au); ; /* slot nop */ UPD(0x0C076970u, 4); goto L_0C076970; }  /* 0C076828 bra */
L_0C07682C: BLKS(0x0C07682Cu);
	r0 = 0xC07683Cu;  /* 0C07682C mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07682E add Rm,Rn */
	IF(0x0C076830u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C076832u, 3);  /* 0C076830 mov.w @(r0,Rm),Rn */
	IF(0x0C076832u); { u32 tv_ = (r4 + 0x0C076836u); u32 t_ = PHYS(tv_); IF(0x0C076834u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0768A0u: goto L_0C0768A0; case 0x0C076970u: goto L_0C076970; case 0x0C076A80u: goto L_0C076A80; case 0x0C076AE0u: goto L_0C076AE0; case 0x0C076AF0u: goto L_0C076AF0; default: JUMPD(tv_); } }  /* 0C076832 braf Rn */
L_0C0768A0: BLKS(0x0C0768A0u);
	r7 = 0xB4u; UPD(0x0C0768A2u, 1);  /* 0C0768A0 mov.w @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C0768A2 mov #imm,Rn */
	IF(0x0C0768A4u); MACL = r12 * r7;  /* 0C0768A4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0768A8u, 4);  /* 0C0768A6 mov.l @(disp,pc),Rn */
	IF(0x0C0768A8u); r11 = MACL;  /* 0C0768A8 sts macl,Rn */
	r5 = 0xB0u; UPD(0x0C0768ACu, 2);  /* 0C0768AA mov.w @(disp,pc),Rn */
	r11 += r6;  /* 0C0768AC add Rm,Rn */
	r1 = 0xA9u; UPD(0x0C0768B0u, 2);  /* 0C0768AE mov.w @(disp,pc),Rn */
	r5 += r11;  /* 0C0768B0 add Rm,Rn */
	r1 += r11;  /* 0C0768B2 add Rm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0768B6u, 3);  /* 0C0768B4 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r1); UPD(0x0C0768B8u, 1);  /* 0C0768B6 mov.l Rm,@(disp,Rn) */
L_0C0768B8: BLKS(0x0C0768B8u);
	r9 = 0xC0AFE40u; UPD(0x0C0768BAu, 1);  /* 0C0768B8 mov.l @(disp,pc),Rn */
	r8 = 0xC050D70u; UPD(0x0C0768BCu, 1);  /* 0C0768BA mov.l @(disp,pc),Rn */
	IF(0x0C0768BCu); { u32 t_ = r9; PR = 0x0C0768C0u; IF(0x0C0768BEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0768C0u); }  /* 0C0768BC jsr @Rn */
L_0C0768C0: BLKS(0x0C0768C0u);
	r9 = (u32)(s32)(s16)r0;  /* 0C0768C0 exts.w Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C0768C4u, 2);  /* 0C0768C2 mov.l @(disp,pc),Rn */
	IF(0x0C0768C4u); { u32 t_ = r8; PR = 0x0C0768C8u; r4 = 0x28u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0768C8u); }  /* 0C0768C4 jsr @Rn */
L_0C0768C8: BLKS(0x0C0768C8u);
	r8 = r0;  /* 0C0768C8 mov Rm,Rn */
	IF(0x0C0768CAu); r8 <<= 16;  /* 0C0768CA shll16 Rn */
	r4 = r9;  /* 0C0768CC mov Rm,Rn */
	IF(0x0C0768CEu); { u32 t_ = r10; PR = 0x0C0768D2u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0768D2u); }  /* 0C0768CE jsr @Rn */
L_0C0768D2: BLKS(0x0C0768D2u);
	r2 = 0xB4u; UPD(0x0C0768D4u, 1);  /* 0C0768D2 mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C0768D4 mov Rm,Rn */
	IF(0x0C0768D6u); MACL = r12 * r2;  /* 0C0768D6 mul.l Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0768DAu, 4);  /* 0C0768D8 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C0768DA mov Rm,Rn */
	r10 = R32(r11 + 0x24u); UPD(0x0C0768DEu, 2);  /* 0C0768DC mov.l @(disp,Rm),Rn */
	IF(0x0C0768DEu); r3 = MACL;  /* 0C0768DE sts macl,Rn */
	r10 += r0;  /* 0C0768E0 add Rm,Rn */
	IF(0x0C0768E2u); { u32 t_ = r9; PR = 0x0C0768E6u; W32(r14, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0768E6u); }  /* 0C0768E2 jsr @Rn */
L_0C0768E6: BLKS(0x0C0768E6u);
	r7 = R32(r14 + 0x4u); UPD(0x0C0768E8u, 1);  /* 0C0768E6 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0768E8 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0768ECu, 2);  /* 0C0768EA mov.b @Rm,Rn */
	r9 = R32(r11 + 0x28u); UPD(0x0C0768EEu, 1);  /* 0C0768EC mov.l @(disp,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0768EE extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0768F2u, 2);  /* 0C0768F0 mov.l Rm,@Rn */
	r9 += r0;  /* 0C0768F2 add Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0768F6u, 2);  /* 0C0768F4 mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C0768F6 mov Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C0768FAu, 2);  /* 0C0768F8 mov.b @Rm,Rn */
	r7 = r9;  /* 0C0768FA mov Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C0768FC extu.b Rm,Rn */
	r8 = 0xC0AB240u; UPD(0x0C076900u, 3);  /* 0C0768FE mov.l @(disp,pc),Rn */
	r5 = 0xDu;  /* 0C076900 mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C076904u, 2);  /* 0C076902 mov.l Rm,@(disp,Rn) */
	IF(0x0C076904u); { u32 t_ = r8; PR = 0x0C076908u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C076908u); }  /* 0C076904 jsr @Rn */
L_0C076908: BLKS(0x0C076908u);
	r3 = R32(r14 + 0x4u); UPD(0x0C07690Au, 1);  /* 0C076908 mov.l @(disp,Rm),Rn */
	r5 = r10;  /* 0C07690A mov Rm,Rn */
	r6 = r9;  /* 0C07690C mov Rm,Rn */
	r10 = 0xC0AC960u; UPD(0x0C076910u, 3);  /* 0C07690E mov.l @(disp,pc),Rn */
	r9 = r13;  /* 0C076910 mov Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C076914u, 2);  /* 0C076912 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C076914 add #imm,Rn */
	r15 += 0x8u;  /* 0C076916 add #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C076918 extu.b Rm,Rn */
	r4 = 0x10u;  /* 0C07691A mov #imm,Rn */
	IF(0x0C07691Cu); { u32 t_ = r10; PR = 0x0C076920u; r13 = (u32)(s32)(s16)r9; /* slot exts.w Rm,Rn */ UPD(t_, 6); CALLP(t_, f_0C0AC960, 0x0C0AC960u, 0x0C076920u); }  /* 0C07691C jsr @Rn */
L_0C076920: BLKS(0x0C076920u);
	r8 = 0x7u;  /* 0C076920 mov #imm,Rn */
	T = (s32)r13 > (s32)r8;  /* 0C076922 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0768B8u, 5); goto L_0C0768B8; } UPD(0x0C076928u, 1); goto L_0C076928; }  /* 0C076924 bf/s */
L_0C076928: BLKS(0x0C076928u);
	r12 = 0x0u;  /* 0C076928 mov #imm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C07692Cu, 2);  /* 0C07692A mov.l @(disp,pc),Rn */
	r7 = 0xA6u; UPD(0x0C07692Eu, 1);  /* 0C07692C mov.w @(disp,pc),Rn */
	r11 += r0;  /* 0C07692E add Rm,Rn */
	r0 = r11;  /* 0C076930 mov Rm,Rn */
	IF(0x0C076932u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C076934u, 3);  /* 0C076932 mov.b @(r0,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C076936u, 1);  /* 0C076934 mov.w @(disp,pc),Rn */
	IF(0x0C076936u); r6 <<= 2;  /* 0C076936 shll2 Rn */
	IF(0x0C076938u); r1 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C07693Au, 2);  /* 0C076938 mov.b @(r0,Rm),Rn */
	r5 = 0xC187FD0u; UPD(0x0C07693Cu, 1);  /* 0C07693A mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C07693C mov Rm,Rn */
	r13 = 0xC06CE70u; UPD(0x0C076940u, 2);  /* 0C07693E mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C076940 extu.b Rm,Rn */
	IF(0x0C076942u); r4 = R32(r0 + r5); UPD(0x0C076944u, 2);  /* 0C076942 mov.l @(r0,Rm),Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C076946u, 1);  /* 0C076944 mov.l @(disp,Rm),Rn */
	IF(0x0C076946u); { u32 t_ = r13; PR = 0x0C07694Au; r5 = R32(r11 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C07694Au); }  /* 0C076946 jsr @Rn */
L_0C07694A: BLKS(0x0C07694Au);
	W32(r11, r12); UPD(0x0C07694Cu, 1);  /* 0C07694A mov.l Rm,@Rn */
L_0C07694C: BLKS(0x0C07694Cu);
	r14 += 0xCu;  /* 0C07694C add #imm,Rn */
	r15 = r14;  /* 0C07694E mov Rm,Rn */
	IF(0x0C076950u); PR = R32(r15); r15 += 4; UPD(0x0C076952u, 3);  /* 0C076950 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C076954u, 1);  /* 0C076952 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C076956u, 1);  /* 0C076954 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C076958u, 1);  /* 0C076956 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07695Au, 1);  /* 0C076958 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07695Cu, 1);  /* 0C07695A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07695Eu, 1);  /* 0C07695C mov.l @Rm+,Rn */
	IF(0x0C07695Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07695E rts */
L_0C076970: BLKS(0x0C076970u);
	r10 = 0xC0A03F0u; UPD(0x0C076972u, 1);  /* 0C076970 mov.l @(disp,pc),Rn */
	IF(0x0C076972u); { u32 t_ = r10; PR = 0x0C076976u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C076976u); }  /* 0C076972 jsr @Rn */
L_0C076976: BLKS(0x0C076976u);
	IF(0x0C076976u); T = (s32)r0 >= 0;  /* 0C076976 cmp/pz Rn */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0769F0u, 4); goto L_0C0769F0; } goto L_0C07697C; }  /* 0C076978 bf/s */
L_0C07697C: BLKS(0x0C07697Cu);
	r10 = 0xB4u; UPD(0x0C07697Eu, 2);  /* 0C07697C mov.w @(disp,pc),Rn */
	IF(0x0C07697Eu); MACL = r12 * r10;  /* 0C07697E mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C076982u, 3);  /* 0C076980 mov.l @(disp,pc),Rn */
	IF(0x0C076982u); r8 = MACL;  /* 0C076982 sts macl,Rn */
	r8 += r11;  /* 0C076984 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C076988u, 3);  /* 0C076986 mov.l @(disp,Rm),Rn */
	T = r0 == 0x4u;  /* 0C076988 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C07694Cu, 4); goto L_0C07694C; }  /* 0C07698A bt */
L_0C07698C: BLKS(0x0C07698Cu);
	r15 += 0xFFFFFFF8u;  /* 0C07698C add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C076990u, 2);  /* 0C07698E mov.w @(disp,pc),Rn */
	IF(0x0C076990u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C076992u, 1);  /* 0C076990 mov.b @(r0,Rm),Rn */
	r5 = 0xDu;  /* 0C076992 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C076994 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C076998u, 3);  /* 0C076996 mov.l Rm,@Rn */
	r4 = 0xA9u; UPD(0x0C07699Au, 1);  /* 0C076998 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07699A mov Rm,Rn */
	IF(0x0C07699Cu); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C07699Eu, 2);  /* 0C07699C mov.b @(r0,Rm),Rn */
	r13 = 0xC0AC800u; UPD(0x0C0769A0u, 1);  /* 0C07699E mov.l @(disp,pc),Rn */
	r7 = r3 & 0xFF;  /* 0C0769A0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0769A4u, 2);  /* 0C0769A2 mov.l Rm,@(disp,Rn) */
	r7 = R32(r8 + 0x28u); UPD(0x0C0769A6u, 1);  /* 0C0769A4 mov.l @(disp,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0769A8u, 1);  /* 0C0769A6 mov.l @Rm,Rn */
	IF(0x0C0769A8u); { u32 t_ = r13; PR = 0x0C0769ACu; r6 = R32(r8 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C0769ACu); }  /* 0C0769A8 jsr @Rn */
L_0C0769AC: BLKS(0x0C0769ACu);
	r5 = 0xC0A0380u; UPD(0x0C0769AEu, 1);  /* 0C0769AC mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C0769AE mov #imm,Rn */
	r4 = r12;  /* 0C0769B0 mov Rm,Rn */
	W32(r8 + 0xCu, r6); UPD(0x0C0769B4u, 3);  /* 0C0769B2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0769B4u); { u32 t_ = r5; PR = 0x0C0769B8u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0769B8u); }  /* 0C0769B4 jsr @Rn */
L_0C0769B8: BLKS(0x0C0769B8u);
	IF(0x0C0769B8u); MACL = r9 * r10;  /* 0C0769B8 mul.l Rm,Rn */
	r0 = 0xA4u; UPD(0x0C0769BCu, 3);  /* 0C0769BA mov.w @(disp,pc),Rn */
	IF(0x0C0769BCu); r12 = MACL;  /* 0C0769BC sts macl,Rn */
	r12 += r11;  /* 0C0769BE add Rm,Rn */
	r12 += r0;  /* 0C0769C0 add Rm,Rn */
	r10 = r12;  /* 0C0769C2 mov Rm,Rn */
	r3 = 0xA1u; UPD(0x0C0769C6u, 5);  /* 0C0769C4 mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C0769C6 add #imm,Rn */
	r4 = R32(r8); UPD(0x0C0769CAu, 2);  /* 0C0769C8 mov.l @Rm,Rn */
	r12 += 0x2u;  /* 0C0769CA add #imm,Rn */
	r13 = 0xFCFFFFFFu; UPD(0x0C0769CEu, 2);  /* 0C0769CC mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C0769CE mov Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C0769D2u, 2);  /* 0C0769D0 mov.b @Rm,Rn */
	r4 &= r13;  /* 0C0769D2 and Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r12); UPD(0x0C0769D6u, 2);  /* 0C0769D4 mov.b @Rm,Rn */
	r2 = 0x4000u; UPD(0x0C0769D8u, 1);  /* 0C0769D6 mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C0769D8 add #imm,Rn */
	IF(0x0C0769DAu); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0769DCu, 2);  /* 0C0769DA mov.b @(r0,Rm),Rn */
	r4 |= r2;  /* 0C0769DC or Rm,Rn */
	r7 |= r1;  /* 0C0769DE or Rm,Rn */
	W32(r8, r4); UPD(0x0C0769E2u, 3);  /* 0C0769E0 mov.l Rm,@Rn */
	W8(r10, r7); UPD(0x0C0769E4u, 1);  /* 0C0769E2 mov.b Rm,@Rn */
	{ W8(r12, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C07694Cu, 3); goto L_0C07694C; }  /* 0C0769E4 bra */
L_0C0769F0: BLKS(0x0C0769F0u);
	r5 = 0xB4u; UPD(0x0C0769F2u, 1);  /* 0C0769F0 mov.w @(disp,pc),Rn */
	IF(0x0C0769F2u); MACL = r12 * r5;  /* 0C0769F2 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C0769F6u, 3);  /* 0C0769F4 mov.l @(disp,pc),Rn */
	IF(0x0C0769F6u); r9 = MACL;  /* 0C0769F6 sts macl,Rn */
	r9 += r13;  /* 0C0769F8 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0769FCu, 3);  /* 0C0769FA mov.w @(disp,pc),Rn */
	r4 = R32(r9 + 0xCu); UPD(0x0C0769FEu, 1);  /* 0C0769FC mov.l @(disp,Rm),Rn */
	IF(0x0C0769FEu); r11 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C076A00u, 1);  /* 0C0769FE mov.b @(r0,Rm),Rn */
	IF(0x0C076A00u); r4 <<= 2;  /* 0C076A00 shll2 Rn */
	r8 = 0xC06CE70u; UPD(0x0C076A04u, 2);  /* 0C076A02 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C076A04 mov Rm,Rn */
	r2 = 0xC187FE4u; UPD(0x0C076A08u, 2);  /* 0C076A06 mov.l @(disp,pc),Rn */
	r7 = r11 & 0xFF;  /* 0C076A08 extu.b Rm,Rn */
	IF(0x0C076A0Au); r4 = R32(r0 + r2); UPD(0x0C076A0Cu, 2);  /* 0C076A0A mov.l @(r0,Rm),Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C076A0Eu, 1);  /* 0C076A0C mov.l @(disp,Rm),Rn */
	IF(0x0C076A0Eu); { u32 t_ = r8; PR = 0x0C076A12u; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C076A12u); }  /* 0C076A0E jsr @Rn */
L_0C076A12: BLKS(0x0C076A12u);
	r3 = 0xC0A0A10u; UPD(0x0C076A14u, 1);  /* 0C076A12 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C076A14 mov Rm,Rn */
	r14 += 0xCu;  /* 0C076A16 add #imm,Rn */
	r15 = r14;  /* 0C076A18 mov Rm,Rn */
	IF(0x0C076A1Au); PR = R32(r15); r15 += 4; UPD(0x0C076A1Cu, 4);  /* 0C076A1A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C076A1Eu, 1);  /* 0C076A1C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C076A20u, 1);  /* 0C076A1E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C076A22u, 1);  /* 0C076A20 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C076A24u, 1);  /* 0C076A22 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C076A26u, 1);  /* 0C076A24 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C076A28u, 1);  /* 0C076A26 mov.l @Rm+,Rn */
	IF(0x0C076A28u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A0A10u: TAIL(f_0C0A0A10); default: JUMPD(tv_); } }  /* 0C076A28 jmp @Rn */
L_0C076A80: BLKS(0x0C076A80u);
	r8 = 0xC0A03F0u; UPD(0x0C076A82u, 1);  /* 0C076A80 mov.l @(disp,pc),Rn */
	IF(0x0C076A82u); { u32 t_ = r8; PR = 0x0C076A86u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C076A86u); }  /* 0C076A82 jsr @Rn */
L_0C076A86: BLKS(0x0C076A86u);
	IF(0x0C076A86u); T = (s32)r0 >= 0;  /* 0C076A86 cmp/pz Rn */
	if (!T) { UPD(0x0C076AD0u, 4); goto L_0C076AD0; }  /* 0C076A88 bf */
L_0C076A8A: BLKS(0x0C076A8Au);
	r15 += 0xFFFFFFF8u;  /* 0C076A8A add #imm,Rn */
	r10 = 0xB4u; UPD(0x0C076A8Eu, 2);  /* 0C076A8C mov.w @(disp,pc),Rn */
	IF(0x0C076A8Eu); MACL = r0 * r10;  /* 0C076A8E mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C076A92u, 3);  /* 0C076A90 mov.l @(disp,pc),Rn */
	IF(0x0C076A92u); r9 = MACL;  /* 0C076A92 sts macl,Rn */
	r9 += r11;  /* 0C076A94 add Rm,Rn */
	r5 = R32(r9); UPD(0x0C076A98u, 3);  /* 0C076A96 mov.l @Rm,Rn */
	IF(0x0C076A98u); MACL = r12 * r10;  /* 0C076A98 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C076A9Cu, 3);  /* 0C076A9A mov.l @(disp,pc),Rn */
	r5 |= r1;  /* 0C076A9C or Rm,Rn */
	IF(0x0C076A9Eu); r8 = MACL;  /* 0C076A9E sts macl,Rn */
	W32(r9, r5); UPD(0x0C076AA2u, 3);  /* 0C076AA0 mov.l Rm,@Rn */
	r8 += r11;  /* 0C076AA2 add Rm,Rn */
	UPD(0x0C076AA4u, 1);
L_0C076AA4: BLKS(0x0C076AA4u);
	r0 = 0xB0u; UPD(0x0C076AA6u, 1);  /* 0C076AA4 mov.w @(disp,pc),Rn */
	r5 = 0xDu;  /* 0C076AA6 mov #imm,Rn */
	IF(0x0C076AA8u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C076AAAu, 2);  /* 0C076AA8 mov.b @(r0,Rm),Rn */
	r13 = 0x0u;  /* 0C076AAA mov #imm,Rn */
	r4 = r2 & 0xFF;  /* 0C076AAC extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C076AB0u, 3);  /* 0C076AAE mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C076AB0 add #imm,Rn */
	IF(0x0C076AB2u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C076AB4u, 2);  /* 0C076AB2 mov.b @(r0,Rm),Rn */
	r11 = 0xC0AC800u; UPD(0x0C076AB6u, 1);  /* 0C076AB4 mov.l @(disp,pc),Rn */
	r7 = r3 & 0xFF;  /* 0C076AB6 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C076ABAu, 2);  /* 0C076AB8 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C076ABCu, 1);  /* 0C076ABA mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C076ABEu, 1);  /* 0C076ABC mov.l @(disp,Rm),Rn */
	IF(0x0C076ABEu); { u32 t_ = r11; PR = 0x0C076AC2u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C076AC2u); }  /* 0C076ABE jsr @Rn */
L_0C076AC2: BLKS(0x0C076AC2u);
	W32(r8, r13); UPD(0x0C076AC4u, 1);  /* 0C076AC2 mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C07694Cu, 3); goto L_0C07694C; }  /* 0C076AC4 bra */
L_0C076AD0: BLKS(0x0C076AD0u);
	r11 = 0xB4u; UPD(0x0C076AD2u, 1);  /* 0C076AD0 mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C076AD2 mov #imm,Rn */
	IF(0x0C076AD4u); MACL = r12 * r11;  /* 0C076AD4 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C076AD8u, 4);  /* 0C076AD6 mov.l @(disp,pc),Rn */
	IF(0x0C076AD8u); r0 = MACL;  /* 0C076AD8 sts macl,Rn */
	{ IF(0x0C076ADCu); W32(r0 + r12, r6); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C07694Cu, 4); goto L_0C07694C; }  /* 0C076ADA bra */
L_0C076AE0: BLKS(0x0C076AE0u);
	r6 = 0xB4u; UPD(0x0C076AE2u, 1);  /* 0C076AE0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C076AE2 add #imm,Rn */
	IF(0x0C076AE4u); MACL = r12 * r6;  /* 0C076AE4 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C076AE8u, 4);  /* 0C076AE6 mov.l @(disp,pc),Rn */
	IF(0x0C076AE8u); r8 = MACL;  /* 0C076AE8 sts macl,Rn */
	{ r8 += r12; /* slot add Rm,Rn */ UPD(0x0C076AA4u, 4); goto L_0C076AA4; }  /* 0C076AEA bra */
L_0C076AF0: BLKS(0x0C076AF0u);
	r8 = 0xC050D70u; UPD(0x0C076AF2u, 1);  /* 0C076AF0 mov.l @(disp,pc),Rn */
	IF(0x0C076AF2u); { u32 t_ = r8; PR = 0x0C076AF6u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C076AF6u); }  /* 0C076AF2 jsr @Rn */
L_0C076AF6: BLKS(0x0C076AF6u);
	T = r0 == 0x2u;  /* 0C076AF6 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C076BA0u, 4); goto L_0C076BA0; }  /* 0C076AF8 bt */
L_0C076AFA: BLKS(0x0C076AFAu);
	r10 = 0x2u;  /* 0C076AFA mov #imm,Rn */
	T = (s32)r0 > (s32)r10;  /* 0C076AFC cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C076B70u, 5); goto L_0C076B70; } goto L_0C076B02; }  /* 0C076AFE bt/s */
L_0C076B02: BLKS(0x0C076B02u);
	T = r0 == 0x1u;  /* 0C076B02 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C076B40u, 5); goto L_0C076B40; }  /* 0C076B04 bt */
L_0C076B06: BLKS(0x0C076B06u);
	r7 = 0xB4u; UPD(0x0C076B08u, 1);  /* 0C076B06 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C076B08 add #imm,Rn */
	IF(0x0C076B0Au); MACL = r12 * r7;  /* 0C076B0A mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C076B0Eu, 4);  /* 0C076B0C mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C076B10u, 1);  /* 0C076B0E mov.w @(disp,pc),Rn */
	IF(0x0C076B10u); r9 = MACL;  /* 0C076B10 sts macl,Rn */
	r9 += r11;  /* 0C076B12 add Rm,Rn */
	IF(0x0C076B14u); r13 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C076B16u, 3);  /* 0C076B14 mov.b @(r0,Rm),Rn */
	r6 = r13 & 0xFF;  /* 0C076B16 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C076B1Au, 2);  /* 0C076B18 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C076B1A add #imm,Rn */
	IF(0x0C076B1Cu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C076B1Eu, 2);  /* 0C076B1C mov.b @(r0,Rm),Rn */
	r0 = r5 & 0xFF;  /* 0C076B1E extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C076B22u, 2);  /* 0C076B20 mov.l Rm,@(disp,Rn) */
	r5 = 0x2u;  /* 0C076B22 mov #imm,Rn */
	r4 = R32(r9); UPD(0x0C076B26u, 2);  /* 0C076B24 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C076B28u, 1);  /* 0C076B26 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C076B2Au, 1);  /* 0C076B28 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C076B2Cu, 1);  /* 0C076B2A mov.l @(disp,pc),Rn */
L_0C076B2C: BLKS(0x0C076B2Cu);
	IF(0x0C076B2Cu); { u32 t_ = r0; PR = 0x0C076B30u; IF(0x0C076B2Eu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C076B30u); }  /* 0C076B2C jsr @Rn */
L_0C076B30: BLKS(0x0C076B30u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C076AD0u, 3); goto L_0C076AD0; }  /* 0C076B30 bra */
L_0C076B40: BLKS(0x0C076B40u);
	r0 = 0xB4u; UPD(0x0C076B42u, 1);  /* 0C076B40 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C076B42 add #imm,Rn */
	IF(0x0C076B44u); MACL = r12 * r0;  /* 0C076B44 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C076B48u, 4);  /* 0C076B46 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C076B48 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C076B4Cu, 2);  /* 0C076B4A mov.w @(disp,pc),Rn */
	IF(0x0C076B4Cu); r3 = MACL;  /* 0C076B4C sts macl,Rn */
	r3 += r9;  /* 0C076B4E add Rm,Rn */
	IF(0x0C076B50u); r10 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C076B52u, 3);  /* 0C076B50 mov.b @(r0,Rm),Rn */
	r8 = r10 & 0xFF;  /* 0C076B52 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C076B56u, 2);  /* 0C076B54 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C076B56 add #imm,Rn */
	IF(0x0C076B58u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C076B5Au, 2);  /* 0C076B58 mov.b @(r0,Rm),Rn */
	r4 = r2 & 0xFF;  /* 0C076B5A extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C076B5Eu, 2);  /* 0C076B5C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C076B60u, 1);  /* 0C076B5E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C076B62u, 1);  /* 0C076B60 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C076B64u, 1);  /* 0C076B62 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C076B2Cu, 3); goto L_0C076B2C; }  /* 0C076B64 bra */
L_0C076B70: BLKS(0x0C076B70u);
	if (!T) { UPD(0x0C076B06u, 3); goto L_0C076B06; }  /* 0C076B70 bf */
L_0C076B72: BLKS(0x0C076B72u);
	r15 += 0xFFFFFFF8u;  /* 0C076B72 add #imm,Rn */
	r5 = 0xB4u; UPD(0x0C076B76u, 2);  /* 0C076B74 mov.w @(disp,pc),Rn */
	IF(0x0C076B76u); MACL = r12 * r5;  /* 0C076B76 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C076B7Au, 3);  /* 0C076B78 mov.l @(disp,pc),Rn */
	IF(0x0C076B7Au); r8 = MACL;  /* 0C076B7A sts macl,Rn */
	r8 += r0;  /* 0C076B7C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C076B80u, 3);  /* 0C076B7E mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C076B80 mov #imm,Rn */
	IF(0x0C076B82u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C076B84u, 2);  /* 0C076B82 mov.b @(r0,Rm),Rn */
	r9 = r13 & 0xFF;  /* 0C076B84 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C076B88u, 2);  /* 0C076B86 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C076B88 add #imm,Rn */
	IF(0x0C076B8Au); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C076B8Cu, 2);  /* 0C076B8A mov.b @(r0,Rm),Rn */
	r2 = r10 & 0xFF;  /* 0C076B8C extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C076B90u, 2);  /* 0C076B8E mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C076B92u, 1);  /* 0C076B90 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C076B94u, 1);  /* 0C076B92 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C076B96u, 1);  /* 0C076B94 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C076B2Cu, 3); goto L_0C076B2C; }  /* 0C076B96 bra */
L_0C076BA0: BLKS(0x0C076BA0u);
	r4 = 0xB4u; UPD(0x0C076BA2u, 1);  /* 0C076BA0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C076BA2 add #imm,Rn */
	IF(0x0C076BA4u); MACL = r12 * r4;  /* 0C076BA4 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C076BA8u, 4);  /* 0C076BA6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C076BAAu, 1);  /* 0C076BA8 mov.w @(disp,pc),Rn */
	IF(0x0C076BAAu); r13 = MACL;  /* 0C076BAA sts macl,Rn */
	r13 += r3;  /* 0C076BAC add Rm,Rn */
	IF(0x0C076BAEu); r7 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C076BB0u, 3);  /* 0C076BAE mov.b @(r0,Rm),Rn */
	r11 = r7 & 0xFF;  /* 0C076BB0 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C076BB4u, 2);  /* 0C076BB2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C076BB4 add #imm,Rn */
	IF(0x0C076BB6u); r6 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C076BB8u, 2);  /* 0C076BB6 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C076BB8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C076BBCu, 2);  /* 0C076BBA mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C076BBEu, 1);  /* 0C076BBC mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C076BBE mov #imm,Rn */
	r4 = R32(r13); UPD(0x0C076BC2u, 2);  /* 0C076BC0 mov.l @Rm,Rn */
	r6 = R32(r13 + 0x24u); UPD(0x0C076BC4u, 1);  /* 0C076BC2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r13 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C076B2Cu, 3); goto L_0C076B2C; }  /* 0C076BC4 bra */
}

void f_0C076BF0(sh3_t *c)
{
	LOCALS;
	goto L_0C076BF0;
L_0C06F830: BLKS(0x0C06F830u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06F832u, 1);  /* 0C06F830 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C06F832 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06F836u, 2);  /* 0C06F834 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06F838u, 1);  /* 0C06F836 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06F83Au, 1);  /* 0C06F838 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06F83Cu, 1);  /* 0C06F83A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C06F83C exts.w Rm,Rn */
	r8 = 0xC0A0670u; UPD(0x0C06F840u, 2);  /* 0C06F83E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06F840 mov Rm,Rn */
	IF(0x0C06F842u); r15 -= 4; W32(r15, PR); UPD(0x0C06F844u, 2);  /* 0C06F842 sts.l pr,@-Rn */
	IF(0x0C06F844u); { u32 t_ = r8; PR = 0x0C06F848u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C06F848u); }  /* 0C06F844 jsr @Rn */
L_0C06F848: BLKS(0x0C06F848u);
	T = (r0 & r0) == 0;  /* 0C06F848 tst Rm,Rn */
	if (T) { UPD(0x0C06F870u, 4); goto L_0C06F870; }  /* 0C06F84A bt */
L_0C06F84C: BLKS(0x0C06F84Cu);
	r2 = 0xB4u; UPD(0x0C06F84Eu, 1);  /* 0C06F84C mov.w @(disp,pc),Rn */
	IF(0x0C06F84Eu); MACL = r11 * r2;  /* 0C06F84E mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C06F852u, 3);  /* 0C06F850 mov.l @(disp,pc),Rn */
	IF(0x0C06F852u); r10 = MACL;  /* 0C06F852 sts macl,Rn */
	r8 = 0x9Cu; UPD(0x0C06F856u, 2);  /* 0C06F854 mov.w @(disp,pc),Rn */
	r10 += r0;  /* 0C06F856 add Rm,Rn */
	r8 += r10;  /* 0C06F858 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C06F85Cu, 3);  /* 0C06F85A mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06F85C tst Rm,Rn */
	{ u32 c_ = T; r2 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F8D0u, 4); goto L_0C06F8D0; } goto L_0C06F862; }  /* 0C06F85E bt/s */
L_0C06F862: BLKS(0x0C06F862u);
	r2 += 0x1u;  /* 0C06F862 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C06F866u, 3);  /* 0C06F864 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C06F866 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C06F868 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C06F86A cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06F880u, 6); goto L_0C06F880; } UPD(0x0C06F870u, 1); goto L_0C06F870; }  /* 0C06F86C bt/s */
L_0C06F870: BLKS(0x0C06F870u);
	r15 = r14;  /* 0C06F870 mov Rm,Rn */
	IF(0x0C06F872u); PR = R32(r15); r15 += 4; UPD(0x0C06F874u, 2);  /* 0C06F872 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06F876u, 1);  /* 0C06F874 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06F878u, 1);  /* 0C06F876 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06F87Au, 1);  /* 0C06F878 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06F87Cu, 1);  /* 0C06F87A mov.l @Rm+,Rn */
	IF(0x0C06F87Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06F87C rts */
L_0C06F880: BLKS(0x0C06F880u);
	r0 = r3;  /* 0C06F880 mov Rm,Rn */
	r4 = 0x0u;  /* 0C06F882 mov #imm,Rn */
	W8(r2, r4); UPD(0x0C06F886u, 3);  /* 0C06F884 mov.b Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C06F886 add #imm,Rn */
	W8(r8, r0); UPD(0x0C06F88Au, 2);  /* 0C06F888 mov.b Rm,@Rn */
	r2 = 0x86u; UPD(0x0C06F88Cu, 1);  /* 0C06F88A mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C06F88C mov Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C06F890u, 2);  /* 0C06F88E mov.l @(disp,pc),Rn */
	IF(0x0C06F890u); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06F892u, 1);  /* 0C06F890 mov.w @(r0,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C06F894u, 1);  /* 0C06F892 mov.l @(disp,pc),Rn */
	IF(0x0C06F894u); { u32 t_ = r8; PR = 0x0C06F898u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06F898u); }  /* 0C06F894 jsr @Rn */
L_0C06F898: BLKS(0x0C06F898u);
	r8 = R32(r10 + 0x24u); UPD(0x0C06F89Au, 1);  /* 0C06F898 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C06F89A mov Rm,Rn */
	r8 += r0;  /* 0C06F89C add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C06F8A0u, 3);  /* 0C06F89E mov.l @(disp,pc),Rn */
	r6 = 0x10000u; UPD(0x0C06F8A2u, 1);  /* 0C06F8A0 mov.l @(disp,pc),Rn */
	r5 = 0xA0000u; UPD(0x0C06F8A4u, 1);  /* 0C06F8A2 mov.l @(disp,pc),Rn */
	IF(0x0C06F8A4u); { u32 t_ = r0; PR = 0x0C06F8A8u; r8 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06F8A8u); }  /* 0C06F8A4 jsr @Rn */
L_0C06F8A8: BLKS(0x0C06F8A8u);
	r6 = R32(r10 + 0x28u); UPD(0x0C06F8AAu, 1);  /* 0C06F8A8 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06F8AA add #imm,Rn */
	r7 = 0x30000u; UPD(0x0C06F8AEu, 2);  /* 0C06F8AC mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C06F8AE mov Rm,Rn */
	W32(r15, r7); UPD(0x0C06F8B2u, 2);  /* 0C06F8B0 mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C06F8B2 mov #imm,Rn */
	r7 = r9;  /* 0C06F8B4 mov Rm,Rn */
	r9 = 0xC0A8510u; UPD(0x0C06F8B8u, 3);  /* 0C06F8B6 mov.l @(disp,pc),Rn */
	r8 = 0xC0580D0u; UPD(0x0C06F8BAu, 1);  /* 0C06F8B8 mov.l @(disp,pc),Rn */
	IF(0x0C06F8BAu); { u32 t_ = r9; PR = 0x0C06F8BEu; r6 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8510, 0x0C0A8510u, 0x0C06F8BEu); }  /* 0C06F8BA jsr @Rn */
L_0C06F8BE: BLKS(0x0C06F8BEu);
	r15 += 0x4u;  /* 0C06F8BE add #imm,Rn */
	IF(0x0C06F8C0u); { u32 t_ = r8; PR = 0x0C06F8C4u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C06F8C4u); }  /* 0C06F8C0 jsr @Rn */
L_0C06F8C4: BLKS(0x0C06F8C4u);
	{ IF(0x0C06F8C6u); ; /* slot nop */ UPD(0x0C06F870u, 3); goto L_0C06F870; }  /* 0C06F8C4 bra */
L_0C06F8D0: BLKS(0x0C06F8D0u);
	r9 = 0xC0A9E40u; UPD(0x0C06F8D2u, 1);  /* 0C06F8D0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06F8D2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C06F8D4 mov #imm,Rn */
	IF(0x0C06F8D6u); { u32 t_ = r9; PR = 0x0C06F8DAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C06F8DAu); }  /* 0C06F8D6 jsr @Rn */
L_0C06F8DA: BLKS(0x0C06F8DAu);
	T = (r0 & r0) == 0;  /* 0C06F8DA tst Rm,Rn */
	if (T) { UPD(0x0C06F870u, 4); goto L_0C06F870; }  /* 0C06F8DC bt */
L_0C06F8DE: BLKS(0x0C06F8DEu);
	r0 = r10;  /* 0C06F8DE mov Rm,Rn */
	r4 = 0xA9u; UPD(0x0C06F8E2u, 2);  /* 0C06F8E0 mov.w @(disp,pc),Rn */
	IF(0x0C06F8E2u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C06F8E4u, 1);  /* 0C06F8E2 mov.b @(r0,Rm),Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C06F8E6u, 1);  /* 0C06F8E4 mov.l @(disp,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C06F8E8u, 1);  /* 0C06F8E6 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A9BB0u; UPD(0x0C06F8EAu, 1);  /* 0C06F8E8 mov.l @(disp,pc),Rn */
	IF(0x0C06F8EAu); { u32 t_ = r10; PR = 0x0C06F8EEu; r6 = r3 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C06F8EEu); }  /* 0C06F8EA jsr @Rn */
L_0C06F8EE: BLKS(0x0C06F8EEu);
	T = (r0 & r0) == 0;  /* 0C06F8EE tst Rm,Rn */
	if (T) { UPD(0x0C06F870u, 4); goto L_0C06F870; }  /* 0C06F8F0 bt */
L_0C06F8F2: BLKS(0x0C06F8F2u);
	r5 = 0x3u;  /* 0C06F8F2 mov #imm,Rn */
	{ W8(r8, r5); /* slot mov.b Rm,@Rn */ UPD(0x0C06F870u, 4); goto L_0C06F870; }  /* 0C06F8F4 bra */
L_0C06FBD0: BLKS(0x0C06FBD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBD2u, 1);  /* 0C06FBD0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C06FBD2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBD6u, 2);  /* 0C06FBD4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBD8u, 1);  /* 0C06FBD6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBDAu, 1);  /* 0C06FBD8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBDCu, 1);  /* 0C06FBDA mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C06FBDEu, 1);  /* 0C06FBDC mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C06FBDE exts.w Rm,Rn */
	IF(0x0C06FBE0u); MACL = r12 * r0;  /* 0C06FBE0 mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBE4u, 4);  /* 0C06FBE2 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C06FBE6u, 1);  /* 0C06FBE4 mov.l @(disp,pc),Rn */
	IF(0x0C06FBE6u); r10 = MACL;  /* 0C06FBE6 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBEAu, 2);  /* 0C06FBE8 mov.l Rm,@-Rn */
	r10 += r0;  /* 0C06FBEA add Rm,Rn */
	r11 = 0x9Cu; UPD(0x0C06FBEEu, 2);  /* 0C06FBEC mov.w @(disp,pc),Rn */
	IF(0x0C06FBEEu); r15 -= 4; W32(r15, PR); UPD(0x0C06FBF0u, 1);  /* 0C06FBEE sts.l pr,@-Rn */
	r11 += r10;  /* 0C06FBF0 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C06FBF4u, 2);  /* 0C06FBF2 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06FBF4 add #imm,Rn */
	T = (r3 & r3) == 0;  /* 0C06FBF6 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06FCD0u, 5); goto L_0C06FCD0; } goto L_0C06FBFC; }  /* 0C06FBF8 bt/s */
L_0C06FBFC: BLKS(0x0C06FBFCu);
	r2 = r11;  /* 0C06FBFC mov Rm,Rn */
	r2 += 0x1u;  /* 0C06FBFE add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C06FC02u, 4);  /* 0C06FC00 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C06FC02 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C06FC04 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C06FC06 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06FC30u, 6); goto L_0C06FC30; } UPD(0x0C06FC0Cu, 1); goto L_0C06FC0C; }  /* 0C06FC08 bt/s */
L_0C06FC0C: BLKS(0x0C06FC0Cu);
	r14 += 0x8u;  /* 0C06FC0C add #imm,Rn */
	UPD(0x0C06FC0Eu, 1);
L_0C06FC0E: BLKS(0x0C06FC0Eu);
	r15 = r14;  /* 0C06FC0E mov Rm,Rn */
	IF(0x0C06FC10u); PR = R32(r15); r15 += 4; UPD(0x0C06FC12u, 2);  /* 0C06FC10 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06FC14u, 1);  /* 0C06FC12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06FC16u, 1);  /* 0C06FC14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06FC18u, 1);  /* 0C06FC16 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06FC1Au, 1);  /* 0C06FC18 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06FC1Cu, 1);  /* 0C06FC1A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06FC1Eu, 1);  /* 0C06FC1C mov.l @Rm+,Rn */
	IF(0x0C06FC1Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06FC1E rts */
L_0C06FC30: BLKS(0x0C06FC30u);
	r13 = r3;  /* 0C06FC30 mov Rm,Rn */
	r13 += 0xFFFFFFFFu;  /* 0C06FC32 add #imm,Rn */
	W8(r11, r13); UPD(0x0C06FC36u, 3);  /* 0C06FC34 mov.b Rm,@Rn */
	r9 = 0x0u;  /* 0C06FC36 mov #imm,Rn */
	r5 = 0x86u; UPD(0x0C06FC3Au, 2);  /* 0C06FC38 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C06FC3A mov Rm,Rn */
	W8(r2, r9); UPD(0x0C06FC3Eu, 2);  /* 0C06FC3C mov.b Rm,@Rn */
	IF(0x0C06FC3Eu); r13 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C06FC40u, 1);  /* 0C06FC3E mov.w @(r0,Rm),Rn */
	r9 = 0x3u;  /* 0C06FC40 mov #imm,Rn */
	r9 &= r3;  /* 0C06FC42 and Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C06FC46u, 3);  /* 0C06FC44 mov.l @(disp,pc),Rn */
	IF(0x0C06FC46u); r9 <<= 2;  /* 0C06FC46 shll2 Rn */
	r0 = 0xC17F0E4u; UPD(0x0C06FC4Au, 2);  /* 0C06FC48 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C06FC4A mov Rm,Rn */
	r0 += r9;  /* 0C06FC4C add Rm,Rn */
	r5 = R32(r0); UPD(0x0C06FC50u, 3);  /* 0C06FC4E mov.l @Rm,Rn */
	IF(0x0C06FC50u); { u32 t_ = r8; PR = 0x0C06FC54u; W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06FC54u); }  /* 0C06FC50 jsr @Rn */
L_0C06FC54: BLKS(0x0C06FC54u);
	r7 = 0xC17F0F4u; UPD(0x0C06FC56u, 1);  /* 0C06FC54 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C06FC56 mov Rm,Rn */
	r6 = 0xC058030u; UPD(0x0C06FC5Au, 2);  /* 0C06FC58 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C06FC5A add Rm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C06FC5Eu, 2);  /* 0C06FC5C mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C06FC5E mov Rm,Rn */
	IF(0x0C06FC60u); { u32 t_ = r6; PR = 0x0C06FC64u; r5 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06FC64u); }  /* 0C06FC60 jsr @Rn */
L_0C06FC64: BLKS(0x0C06FC64u);
	r8 -= r0;  /* 0C06FC64 sub Rm,Rn */
	r1 = r8;  /* 0C06FC66 mov Rm,Rn */
	r1 += r1;  /* 0C06FC68 add Rm,Rn */
	r1 += r8;  /* 0C06FC6A add Rm,Rn */
	IF(0x0C06FC6Cu); T = (s32)r1 >= 0;  /* 0C06FC6C cmp/pz Rn */
	if (!T) { UPD(0x0C06FCC0u, 8); goto L_0C06FCC0; }  /* 0C06FC6E bf */
L_0C06FC70: BLKS(0x0C06FC70u);
	r9 = R32(r10 + 0x24u); UPD(0x0C06FC72u, 1);  /* 0C06FC70 mov.l @(disp,Rm),Rn */
	IF(0x0C06FC72u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C06FC72 shar Rn */
	IF(0x0C06FC74u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C06FC74 shar Rn */
	r6 = 0xC058030u; UPD(0x0C06FC78u, 3);  /* 0C06FC76 mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C06FC78 add Rm,Rn */
	r4 = 0x10000u; UPD(0x0C06FC7Cu, 2);  /* 0C06FC7A mov.l @(disp,pc),Rn */
	r7 = R32(r14); UPD(0x0C06FC7Eu, 1);  /* 0C06FC7C mov.l @Rm,Rn */
	r9 += r4;  /* 0C06FC7E add Rm,Rn */
	r5 = R32(r7); UPD(0x0C06FC82u, 2);  /* 0C06FC80 mov.l @Rm,Rn */
	IF(0x0C06FC82u); { u32 t_ = r6; PR = 0x0C06FC86u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06FC86u); }  /* 0C06FC82 jsr @Rn */
L_0C06FC86: BLKS(0x0C06FC86u);
	r3 = 0xC058060u; UPD(0x0C06FC88u, 1);  /* 0C06FC86 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C06FC88 mov Rm,Rn */
	r8 = R32(r10 + 0x28u); UPD(0x0C06FC8Cu, 2);  /* 0C06FC8A mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C06FC8Eu, 1);  /* 0C06FC8C mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C06FC8E add Rm,Rn */
	IF(0x0C06FC90u); { u32 t_ = r3; PR = 0x0C06FC94u; r5 = R32(r1); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06FC94u); }  /* 0C06FC90 jsr @Rn */
L_0C06FC94: BLKS(0x0C06FC94u);
	r8 += r0;  /* 0C06FC94 add Rm,Rn */
	r6 = r8;  /* 0C06FC96 mov Rm,Rn */
	r8 = 0xC0A81B0u; UPD(0x0C06FC9Au, 3);  /* 0C06FC98 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06FC9A add #imm,Rn */
	r2 = 0x30000u; UPD(0x0C06FC9Eu, 2);  /* 0C06FC9C mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C06FC9E mov #imm,Rn */
	W32(r15, r2); UPD(0x0C06FCA2u, 2);  /* 0C06FCA0 mov.l Rm,@Rn */
	r5 = r9;  /* 0C06FCA2 mov Rm,Rn */
	IF(0x0C06FCA4u); { u32 t_ = r8; PR = 0x0C06FCA8u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C06FCA8u); }  /* 0C06FCA4 jsr @Rn */
L_0C06FCA8: BLKS(0x0C06FCA8u);
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C06FCAAu, 1);  /* 0C06FCA8 mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C06FCAA tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06FC0Cu, 4); goto L_0C06FC0C; } goto L_0C06FCB0; }  /* 0C06FCAC bf/s */
L_0C06FCB0: BLKS(0x0C06FCB0u);
	r11 = 0xC0580D0u; UPD(0x0C06FCB2u, 2);  /* 0C06FCB0 mov.l @(disp,pc),Rn */
	IF(0x0C06FCB2u); { u32 t_ = r11; PR = 0x0C06FCB6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C06FCB6u); }  /* 0C06FCB2 jsr @Rn */
L_0C06FCB6: BLKS(0x0C06FCB6u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C06FC0Eu, 3); goto L_0C06FC0E; }  /* 0C06FCB6 bra */
L_0C06FCC0: BLKS(0x0C06FCC0u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C06FC70u, 3); goto L_0C06FC70; }  /* 0C06FCC0 bra */
L_0C06FCD0: BLKS(0x0C06FCD0u);
	r8 = 0xC0A0670u; UPD(0x0C06FCD2u, 1);  /* 0C06FCD0 mov.l @(disp,pc),Rn */
	IF(0x0C06FCD2u); { u32 t_ = r8; PR = 0x0C06FCD6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C06FCD6u); }  /* 0C06FCD2 jsr @Rn */
L_0C06FCD6: BLKS(0x0C06FCD6u);
	T = (r0 & r0) == 0;  /* 0C06FCD6 tst Rm,Rn */
	if (T) { UPD(0x0C06FC0Cu, 4); goto L_0C06FC0C; }  /* 0C06FCD8 bt */
L_0C06FCDA: BLKS(0x0C06FCDAu);
	r4 = r12;  /* 0C06FCDA mov Rm,Rn */
	r9 = 0xC0A9E40u; UPD(0x0C06FCDEu, 2);  /* 0C06FCDC mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C06FCDE mov #imm,Rn */
	IF(0x0C06FCE0u); { u32 t_ = r9; PR = 0x0C06FCE4u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C06FCE4u); }  /* 0C06FCE0 jsr @Rn */
L_0C06FCE4: BLKS(0x0C06FCE4u);
	T = (r0 & r0) == 0;  /* 0C06FCE4 tst Rm,Rn */
	if (T) { UPD(0x0C06FC0Cu, 4); goto L_0C06FC0C; }  /* 0C06FCE6 bt */
L_0C06FCE8: BLKS(0x0C06FCE8u);
	r4 = R32(r10 + 0x24u); UPD(0x0C06FCEAu, 1);  /* 0C06FCE8 mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C06FCEA mov Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C06FCEEu, 2);  /* 0C06FCEC mov.l @(disp,Rm),Rn */
	r3 = 0xA9u; UPD(0x0C06FCF0u, 1);  /* 0C06FCEE mov.w @(disp,pc),Rn */
	r10 = 0xC0A9BB0u; UPD(0x0C06FCF2u, 1);  /* 0C06FCF0 mov.l @(disp,pc),Rn */
	IF(0x0C06FCF2u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06FCF4u, 1);  /* 0C06FCF2 mov.b @(r0,Rm),Rn */
	IF(0x0C06FCF4u); { u32 t_ = r10; PR = 0x0C06FCF8u; r6 = r2 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C06FCF8u); }  /* 0C06FCF4 jsr @Rn */
L_0C06FCF8: BLKS(0x0C06FCF8u);
	T = (r0 & r0) == 0;  /* 0C06FCF8 tst Rm,Rn */
	if (T) { UPD(0x0C06FCB6u, 4); goto L_0C06FCB6; }  /* 0C06FCFA bt */
L_0C06FCFC: BLKS(0x0C06FCFCu);
	r4 = 0x8u;  /* 0C06FCFC mov #imm,Rn */
	{ W8(r11, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C06FC0Cu, 4); goto L_0C06FC0C; }  /* 0C06FCFE bra */
L_0C076BF0: BLKS(0x0C076BF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C076BF2u, 1);  /* 0C076BF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C076BF4u, 1);  /* 0C076BF2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C076BF6u, 1);  /* 0C076BF4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C076BF8u, 1);  /* 0C076BF6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C076BFAu, 1);  /* 0C076BF8 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C076BFCu, 1);  /* 0C076BFA mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C076BFC exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C076C00u, 2);  /* 0C076BFE mov.l Rm,@-Rn */
	IF(0x0C076C00u); MACL = r12 * r3;  /* 0C076C00 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C076C04u, 3);  /* 0C076C02 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C076C06u, 1);  /* 0C076C04 mov.l @(disp,pc),Rn */
	IF(0x0C076C06u); r2 = MACL;  /* 0C076C06 sts macl,Rn */
	IF(0x0C076C08u); r15 -= 4; W32(r15, PR); UPD(0x0C076C0Au, 2);  /* 0C076C08 sts.l pr,@-Rn */
	r0 += r2;  /* 0C076C0A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C076C0Eu, 2);  /* 0C076C0C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C076C0E add #imm,Rn */
	r0 = 0x2Eu;  /* 0C076C10 mov #imm,Rn */
	T = r2 > r0;  /* 0C076C12 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C076C1Cu, 6); goto L_0C076C1C; } goto L_0C076C18; }  /* 0C076C14 bf/s */
L_0C076C18: BLKS(0x0C076C18u);
	{ IF(0x0C076C1Au); ; /* slot nop */ UPD(0x0C076E40u, 4); goto L_0C076E40; }  /* 0C076C18 bra */
L_0C076C1C: BLKS(0x0C076C1Cu);
	r0 = 0xC076C2Cu;  /* 0C076C1C mova @(disp,pc),r0 */
	r2 += r2;  /* 0C076C1E add Rm,Rn */
	IF(0x0C076C20u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C076C22u, 3);  /* 0C076C20 mov.w @(r0,Rm),Rn */
	IF(0x0C076C22u); { u32 tv_ = (r4 + 0x0C076C26u); u32 t_ = PHYS(tv_); IF(0x0C076C24u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C076C90u: goto L_0C076C90; case 0x0C076E40u: goto L_0C076E40; case 0x0C076F50u: goto L_0C076F50; case 0x0C076F80u: goto L_0C076F80; case 0x0C077120u: goto L_0C077120; default: JUMPD(tv_); } }  /* 0C076C22 braf Rn */
L_0C076C90: BLKS(0x0C076C90u);
	r9 = 0xB4u; UPD(0x0C076C92u, 1);  /* 0C076C90 mov.w @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C076C92 mov #imm,Rn */
	IF(0x0C076C94u); MACL = r12 * r9;  /* 0C076C94 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C076C98u, 4);  /* 0C076C96 mov.l @(disp,pc),Rn */
	r3 = 0x99u; UPD(0x0C076C9Au, 1);  /* 0C076C98 mov.w @(disp,pc),Rn */
	IF(0x0C076C9Au); r0 = MACL;  /* 0C076C9A sts macl,Rn */
	r0 += r8;  /* 0C076C9C add Rm,Rn */
	IF(0x0C076C9Eu); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C076CA0u, 3);  /* 0C076C9E mov.b @(r0,Rm),Rn */
	r7 += 0x1u;  /* 0C076CA0 add #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C076CA2 extu.b Rm,Rn */
	T = r6 > r5;  /* 0C076CA4 cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C076CA8u); W8(r0 + r3, r7); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C076D10u, 6); goto L_0C076D10; } UPD(0x0C076CAAu, 1); goto L_0C076CAA; }  /* 0C076CA6 bf/s */
L_0C076CAA: BLKS(0x0C076CAAu);
	r11 = 0x0u;  /* 0C076CAA mov #imm,Rn */
	IF(0x0C076CACu); W8(r0 + r3, r11); UPD(0x0C076CAEu, 2);  /* 0C076CAC mov.b Rm,@(r0,Rn) */
	r10 = 0x0u;  /* 0C076CAE mov #imm,Rn */
	W32(r14, r10); UPD(0x0C076CB2u, 2);  /* 0C076CB0 mov.l Rm,@Rn */
	r9 = r0;  /* 0C076CB2 mov Rm,Rn */
	r13 = 0xA9u; UPD(0x0C076CB6u, 2);  /* 0C076CB4 mov.w @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C076CB6 mov #imm,Rn */
	r13 += r0;  /* 0C076CB8 add Rm,Rn */
	IF(0x0C076CBAu); ;  /* 0C076CBA nop */
	UPD(0x0C076CBCu, 3);
L_0C076CBC: BLKS(0x0C076CBCu);
	r5 = 0xC188004u; UPD(0x0C076CBEu, 1);  /* 0C076CBC mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C076CBE add #imm,Rn */
	r5 += r10;  /* 0C076CC0 add Rm,Rn */
	r8 = R32(r5); UPD(0x0C076CC4u, 3);  /* 0C076CC2 mov.l @Rm,Rn */
	r10 += 0x8u;  /* 0C076CC4 add #imm,Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C076CC8u, 2);  /* 0C076CC6 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C076CCAu, 1);  /* 0C076CC8 mov.w @(disp,pc),Rn */
	r11 += r8;  /* 0C076CCA add Rm,Rn */
	IF(0x0C076CCCu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C076CCEu, 2);  /* 0C076CCC mov.b @(r0,Rm),Rn */
	r4 = R32(r5 + 0x4u); UPD(0x0C076CD0u, 1);  /* 0C076CCE mov.l @(disp,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C076CD0 extu.b Rm,Rn */
	r8 = R32(r9 + 0x28u); UPD(0x0C076CD4u, 2);  /* 0C076CD2 mov.l @(disp,Rm),Rn */
	W32(r15, r2); UPD(0x0C076CD6u, 1);  /* 0C076CD4 mov.l Rm,@Rn */
	r8 += r4;  /* 0C076CD6 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r13); UPD(0x0C076CDAu, 2);  /* 0C076CD8 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C076CDA extu.b Rm,Rn */
	r0 = 0xC050D70u; UPD(0x0C076CDEu, 2);  /* 0C076CDC mov.l @(disp,pc),Rn */
	r7 += 0xFFFFFFFFu;  /* 0C076CDE add #imm,Rn */
	r4 = 0x2000u; UPD(0x0C076CE2u, 2);  /* 0C076CE0 mov.w @(disp,pc),Rn */
	IF(0x0C076CE2u); { u32 t_ = r0; PR = 0x0C076CE6u; W32(r15 + 0x4u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C076CE6u); }  /* 0C076CE2 jsr @Rn */
L_0C076CE6: BLKS(0x0C076CE6u);
	r4 = 0x808080u; UPD(0x0C076CE8u, 1);  /* 0C076CE6 mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C076CE8 mov Rm,Rn */
	r6 = 0u - r0;  /* 0C076CEA neg Rm,Rn */
	r5 = 0x0u;  /* 0C076CEC mov #imm,Rn */
	r8 = 0xC0ACA40u; UPD(0x0C076CF0u, 4);  /* 0C076CEE mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r6); UPD(0x0C076CF2u, 1);  /* 0C076CF0 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r5); UPD(0x0C076CF4u, 1);  /* 0C076CF2 mov.l Rm,@(disp,Rn) */
	r6 = r11;  /* 0C076CF4 mov Rm,Rn */
	W32(r15 + 0x10u, r4); UPD(0x0C076CF8u, 2);  /* 0C076CF6 mov.l Rm,@(disp,Rn) */
	r5 = 0x8u;  /* 0C076CF8 mov #imm,Rn */
	IF(0x0C076CFAu); { u32 t_ = r8; PR = 0x0C076CFEu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C076CFEu); }  /* 0C076CFA jsr @Rn */
L_0C076CFE: BLKS(0x0C076CFEu);
	r3 = R32(r14); UPD(0x0C076D00u, 1);  /* 0C076CFE mov.l @Rm,Rn */
	r0 = 0x5u;  /* 0C076D00 mov #imm,Rn */
	r3 += 0x1u;  /* 0C076D02 add #imm,Rn */
	r2 = (u32)(s32)(s16)r3;  /* 0C076D04 exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C076D08u, 4);  /* 0C076D06 mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C076D0Au, 1);  /* 0C076D08 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r0;  /* 0C076D0A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C076CBCu, 4); goto L_0C076CBC; } UPD(0x0C076D10u, 1); goto L_0C076D10; }  /* 0C076D0C bf/s */
L_0C076D10: BLKS(0x0C076D10u);
	r7 = 0xB4u; UPD(0x0C076D12u, 1);  /* 0C076D10 mov.w @(disp,pc),Rn */
	IF(0x0C076D12u); MACL = r12 * r7;  /* 0C076D12 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C076D16u, 3);  /* 0C076D14 mov.l @(disp,pc),Rn */
	IF(0x0C076D16u); r8 = MACL;  /* 0C076D16 sts macl,Rn */
	r8 += r6;  /* 0C076D18 add Rm,Rn */
	r11 = 0xA5u; UPD(0x0C076D1Cu, 3);  /* 0C076D1A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C076D1C mov Rm,Rn */
	IF(0x0C076D1Eu); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C076D20u, 2);  /* 0C076D1E mov.b @(r0,Rm),Rn */
	r0 = r10;  /* 0C076D20 mov Rm,Rn */
	T = (r0 & 0x9u) == 0;  /* 0C076D22 tst #imm,r0 */
	IF(0x0C076D24u); r13 = T;  /* 0C076D24 movt Rn */
	T = (r0 & 0x6u) == 0;  /* 0C076D26 tst #imm,r0 */
	IF(0x0C076D28u); r9 = T;  /* 0C076D28 movt Rn */
	r13 |= r9;  /* 0C076D2A or Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C076D2C tst Rm,Rn */
	if (!T) { UPD(0x0C076DD0u, 10); goto L_0C076DD0; }  /* 0C076D2E bf */
L_0C076D30: BLKS(0x0C076D30u);
	r13 = 0xC0A1830u; UPD(0x0C076D32u, 1);  /* 0C076D30 mov.l @(disp,pc),Rn */
	IF(0x0C076D32u); { u32 t_ = r13; PR = 0x0C076D36u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1830, 0x0C0A1830u, 0x0C076D36u); }  /* 0C076D32 jsr @Rn */
L_0C076D36: BLKS(0x0C076D36u);
	T = (r0 & r0) == 0;  /* 0C076D36 tst Rm,Rn */
	if (!T) { UPD(0x0C076D50u, 4); goto L_0C076D50; }  /* 0C076D38 bf */
L_0C076D3A: BLKS(0x0C076D3Au);
	r14 += 0x8u;  /* 0C076D3A add #imm,Rn */
	UPD(0x0C076D3Cu, 1);
L_0C076D3C: BLKS(0x0C076D3Cu);
	r15 = r14;  /* 0C076D3C mov Rm,Rn */
	IF(0x0C076D3Eu); PR = R32(r15); r15 += 4; UPD(0x0C076D40u, 2);  /* 0C076D3E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C076D42u, 1);  /* 0C076D40 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C076D44u, 1);  /* 0C076D42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C076D46u, 1);  /* 0C076D44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C076D48u, 1);  /* 0C076D46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C076D4Au, 1);  /* 0C076D48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C076D4Cu, 1);  /* 0C076D4A mov.l @Rm+,Rn */
	IF(0x0C076D4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C076D4C rts */
L_0C076D50: BLKS(0x0C076D50u);
	r0 = 0xC076800u; UPD(0x0C076D52u, 1);  /* 0C076D50 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C076D52 mov Rm,Rn */
	IF(0x0C076D54u); { u32 t_ = r0; PR = 0x0C076D58u; r12 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C076800, 0x0C076800u, 0x0C076D58u); }  /* 0C076D54 jsr @Rn */
L_0C076D58: BLKS(0x0C076D58u);
	W32(r14, r12); UPD(0x0C076D5Au, 1);  /* 0C076D58 mov.l Rm,@Rn */
	r9 = r8;  /* 0C076D5A mov Rm,Rn */
	r12 = 0xC187FF8u; UPD(0x0C076D5Eu, 2);  /* 0C076D5C mov.l @(disp,pc),Rn */
	r10 = 0x48000u; UPD(0x0C076D60u, 1);  /* 0C076D5E mov.l @(disp,pc),Rn */
	r11 = 0xC06CC20u; UPD(0x0C076D62u, 1);  /* 0C076D60 mov.l @(disp,pc),Rn */
	IF(0x0C076D62u); ;  /* 0C076D62 nop */
	UPD(0x0C076D64u, 1);
L_0C076D64: BLKS(0x0C076D64u);
	r4 = R32(r9 + 0x28u); UPD(0x0C076D66u, 1);  /* 0C076D64 mov.l @(disp,Rm),Rn */
	r0 = 0xFFFFFFFAu;  /* 0C076D66 mov #imm,Rn */
	r1 = (r4 >> 16) | (r4 << 16);  /* 0C076D68 swap.w Rm,Rn */
	r2 = 0xFFFFFEA0u; UPD(0x0C076D6Cu, 3);  /* 0C076D6A mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r1;  /* 0C076D6C exts.w Rm,Rn */
	r13 += r2;  /* 0C076D6E add Rm,Rn */
	IF(0x0C076D70u); ARG0(0x4D0Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = (u32)((s32)r13 >> 31); else r13 = (u32)((s32)r13 >> ((~s_ & 31) + 1)); }  /* 0C076D70 shad Rm,Rn */
	r0 = 0xC050D70u; UPD(0x0C076D74u, 4);  /* 0C076D72 mov.l @(disp,pc),Rn */
	r13 += r13;  /* 0C076D74 add Rm,Rn */
	r13 += r12;  /* 0C076D76 add Rm,Rn */
	IF(0x0C076D78u); { u32 t_ = r0; PR = 0x0C076D7Cu; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C076D7Cu); }  /* 0C076D78 jsr @Rn */
L_0C076D7C: BLKS(0x0C076D7Cu);
	r3 = (u32)(s32)(s16)R16(r13); UPD(0x0C076D7Eu, 1);  /* 0C076D7C mov.w @Rm,Rn */
	r5 = r10;  /* 0C076D7E mov Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C076D82u, 2);  /* 0C076D80 mov.l @(disp,pc),Rn */
	r0 += r3;  /* 0C076D82 add Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C076D84 exts.w Rm,Rn */
	IF(0x0C076D86u); { u32 t_ = r8; PR = 0x0C076D8Au; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C076D8Au); }  /* 0C076D86 jsr @Rn */
L_0C076D8A: BLKS(0x0C076D8Au);
	r4 = r13;  /* 0C076D8A mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C076D8Eu, 2);  /* 0C076D8C mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C076D8E mov Rm,Rn */
	IF(0x0C076D90u); { u32 t_ = r13; PR = 0x0C076D94u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C076D94u); }  /* 0C076D90 jsr @Rn */
L_0C076D94: BLKS(0x0C076D94u);
	r5 = r0;  /* 0C076D94 mov Rm,Rn */
	r7 = 0xA9u; UPD(0x0C076D98u, 2);  /* 0C076D96 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C076D98 mov Rm,Rn */
	IF(0x0C076D9Au); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C076D9Cu, 2);  /* 0C076D9A mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C076D9C add #imm,Rn */
	W32(r15, r8); UPD(0x0C076DA0u, 2);  /* 0C076D9E mov.l Rm,@Rn */
	r7 = r6 & 0xFF;  /* 0C076DA0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C076DA4u, 2);  /* 0C076DA2 mov.l Rm,@(disp,Rn) */
	r4 = 0x3u;  /* 0C076DA4 mov #imm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C076DA8u, 2);  /* 0C076DA6 mov.l @(disp,Rm),Rn */
	IF(0x0C076DA8u); { u32 t_ = r11; PR = 0x0C076DACu; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C076DACu); }  /* 0C076DA8 jsr @Rn */
L_0C076DAC: BLKS(0x0C076DACu);
	r4 = R32(r14); UPD(0x0C076DAEu, 1);  /* 0C076DAC mov.l @Rm,Rn */
	r3 = 0x9u;  /* 0C076DAE mov #imm,Rn */
	r4 += 0x1u;  /* 0C076DB0 add #imm,Rn */
	r2 = (u32)(s32)(s16)r4;  /* 0C076DB2 exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C076DB6u, 4);  /* 0C076DB4 mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C076DB8u, 1);  /* 0C076DB6 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C076DB8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C076D64u, 4); goto L_0C076D64; } UPD(0x0C076DBEu, 1); goto L_0C076DBE; }  /* 0C076DBA bf/s */
L_0C076DBE: BLKS(0x0C076DBEu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C076D3Cu, 3); goto L_0C076D3C; }  /* 0C076DBE bra */
L_0C076DD0: BLKS(0x0C076DD0u);
	r8 = 0xC0A1700u; UPD(0x0C076DD2u, 1);  /* 0C076DD0 mov.l @(disp,pc),Rn */
	IF(0x0C076DD2u); { u32 t_ = r8; PR = 0x0C076DD6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C076DD6u); }  /* 0C076DD2 jsr @Rn */
L_0C076DD6: BLKS(0x0C076DD6u);
	r1 = 0xC0A1590u; UPD(0x0C076DD8u, 1);  /* 0C076DD6 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C076DD8 mov Rm,Rn */
	UPD(0x0C076DDAu, 1);
L_0C076DDA: BLKS(0x0C076DDAu);
	r14 += 0x8u;  /* 0C076DDA add #imm,Rn */
	r15 = r14;  /* 0C076DDC mov Rm,Rn */
	IF(0x0C076DDEu); PR = R32(r15); r15 += 4; UPD(0x0C076DE0u, 3);  /* 0C076DDE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C076DE2u, 1);  /* 0C076DE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C076DE4u, 1);  /* 0C076DE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C076DE6u, 1);  /* 0C076DE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C076DE8u, 1);  /* 0C076DE6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C076DEAu, 1);  /* 0C076DE8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C076DECu, 1);  /* 0C076DEA mov.l @Rm+,Rn */
	IF(0x0C076DECu); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C076800u: TAIL(f_0C076800); case 0x0C0A1590u: TAIL(f_0C0A1590); default: JUMPD(tv_); } }  /* 0C076DEC jmp @Rn */
L_0C076E40: BLKS(0x0C076E40u);
	r9 = 0xC0A03F0u; UPD(0x0C076E42u, 1);  /* 0C076E40 mov.l @(disp,pc),Rn */
	IF(0x0C076E42u); { u32 t_ = r9; PR = 0x0C076E46u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C076E46u); }  /* 0C076E42 jsr @Rn */
L_0C076E46: BLKS(0x0C076E46u);
	IF(0x0C076E46u); T = (s32)r0 >= 0;  /* 0C076E46 cmp/pz Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C076E50u, 4); goto L_0C076E50; } goto L_0C076E4C; }  /* 0C076E48 bt/s */
L_0C076E4C: BLKS(0x0C076E4Cu);
	{ IF(0x0C076E4Eu); ; /* slot nop */ UPD(0x0C076F40u, 4); goto L_0C076F40; }  /* 0C076E4C bra */
L_0C076E50: BLKS(0x0C076E50u);
	r4 = 0xB4u; UPD(0x0C076E52u, 1);  /* 0C076E50 mov.w @(disp,pc),Rn */
	IF(0x0C076E52u); MACL = r12 * r4;  /* 0C076E52 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C076E56u, 3);  /* 0C076E54 mov.l @(disp,pc),Rn */
	IF(0x0C076E56u); r8 = MACL;  /* 0C076E56 sts macl,Rn */
	r8 += r0;  /* 0C076E58 add Rm,Rn */
	r13 = R32(r8); UPD(0x0C076E5Cu, 3);  /* 0C076E5A mov.l @Rm,Rn */
	IF(0x0C076E5Cu); MACL = r9 * r4;  /* 0C076E5C mul.l Rm,Rn */
	r2 = 0xFCFFFFFFu; UPD(0x0C076E60u, 3);  /* 0C076E5E mov.l @(disp,pc),Rn */
	r13 &= r2;  /* 0C076E60 and Rm,Rn */
	W32(r8, r13); UPD(0x0C076E64u, 2);  /* 0C076E62 mov.l Rm,@Rn */
	IF(0x0C076E64u); r9 = MACL;  /* 0C076E64 sts macl,Rn */
	r9 += r0;  /* 0C076E66 add Rm,Rn */
	r7 = R32(r9); UPD(0x0C076E6Au, 3);  /* 0C076E68 mov.l @Rm,Rn */
	r3 = 0x3000000u; UPD(0x0C076E6Cu, 1);  /* 0C076E6A mov.l @(disp,pc),Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C076E6Eu, 1);  /* 0C076E6C mov.l @(disp,Rm),Rn */
	r7 &= r3;  /* 0C076E6E and Rm,Rn */
	r10 = R32(r9 + 0x28u); UPD(0x0C076E72u, 2);  /* 0C076E70 mov.l @(disp,Rm),Rn */
	r13 |= r7;  /* 0C076E72 or Rm,Rn */
	r6 = R32(r8 + 0x2Cu); UPD(0x0C076E76u, 2);  /* 0C076E74 mov.l @(disp,Rm),Rn */
	r11 = R32(r8 + 0x30u); UPD(0x0C076E78u, 1);  /* 0C076E76 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C076E78 add Rm,Rn */
	r10 += r11;  /* 0C076E7A add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C076E7Eu, 3);  /* 0C076E7C mov.l @(disp,Rm),Rn */
	W32(r8, r13); UPD(0x0C076E80u, 1);  /* 0C076E7E mov.l Rm,@Rn */
	T = r0 == 0x4u;  /* 0C076E80 cmp/eq #imm,r0 */
	W32(r8 + 0x24u, r5); UPD(0x0C076E84u, 2);  /* 0C076E82 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r8 + 0x28u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C076DBEu, 3); goto L_0C076DBE; } UPD(0x0C076E88u, 1); goto L_0C076E88; }  /* 0C076E84 bt/s */
L_0C076E88: BLKS(0x0C076E88u);
	r13 = 0x86u; UPD(0x0C076E8Au, 1);  /* 0C076E88 mov.w @(disp,pc),Rn */
	r11 = 0x3u;  /* 0C076E8A mov #imm,Rn */
	r13 += r9;  /* 0C076E8C add Rm,Rn */
	r9 += 0x50u;  /* 0C076E8E add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C076E92u, 4);  /* 0C076E90 mov.w @Rm,Rn */
	r3 = 0xFFFFFFFFu;  /* 0C076E92 mov #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r13); UPD(0x0C076E96u, 2);  /* 0C076E94 mov.w @Rm,Rn */
	r4 &= r11;  /* 0C076E96 and Rm,Rn */
	r2 = 0x200u; UPD(0x0C076E9Au, 2);  /* 0C076E98 mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFFB0u;  /* 0C076E9A add #imm,Rn */
	r7 = 0xA4u; UPD(0x0C076E9Eu, 2);  /* 0C076E9C mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C076E9E add Rm,Rn */
	r7 += r8;  /* 0C076EA0 add Rm,Rn */
	IF(0x0C076EA2u); r0 >>= 8;  /* 0C076EA2 shlr8 Rn */
	r11 = r7;  /* 0C076EA4 mov Rm,Rn */
	IF(0x0C076EA6u); r0 >>= 2;  /* 0C076EA6 shlr2 Rn */
	r11 += 0x1u;  /* 0C076EA8 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C076EACu, 7);  /* 0C076EAA mov.b @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C076EAC and #imm,r0 */
	r0 += 0x2u;  /* 0C076EAE add #imm,Rn */
	T = r10 == r0;  /* 0C076EB0 cmp/eq Rm,Rn */
	r10 = r7;  /* 0C076EB2 mov Rm,Rn */
	r10 += 0x2u;  /* 0C076EB4 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C076EB8u, 6);  /* 0C076EB6 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C076EB8 negc Rm,Rn */
	T = r1 == r4;  /* 0C076EBA cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C076EBC negc Rm,Rn */
	r5 |= r6;  /* 0C076EBE or Rm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C076EC2u, 5);  /* 0C076EC0 mov.l Rm,@(disp,Rn) */
	T = (r5 & r5) == 0;  /* 0C076EC2 tst Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0xCu, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C076F32u, 4); goto L_0C076F32; } UPD(0x0C076EC8u, 1); goto L_0C076EC8; }  /* 0C076EC4 bt/s */
L_0C076EC8: BLKS(0x0C076EC8u);
	r6 = 0xC0A03B0u; UPD(0x0C076ECAu, 1);  /* 0C076EC8 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C076ECA mov Rm,Rn */
	IF(0x0C076ECCu); { u32 t_ = r6; PR = 0x0C076ED0u; r8 += 0xBu; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C076ED0u); }  /* 0C076ECC jsr @Rn */
L_0C076ED0: BLKS(0x0C076ED0u);
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C076ED2u, 1);  /* 0C076ED0 mov.b @Rm,Rn */
	r8 += 0x4u;  /* 0C076ED2 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C076ED6u, 2);  /* 0C076ED4 mov.b @Rm,Rn */
	r8 += 0xFFFFFFF1u;  /* 0C076ED6 add #imm,Rn */
	r12 = R32(r8 + 0xCu); UPD(0x0C076EDAu, 2);  /* 0C076ED8 mov.l @(disp,Rm),Rn */
	W8(r11, r5); UPD(0x0C076EDCu, 1);  /* 0C076EDA mov.b Rm,@Rn */
	T = (r12 & r12) == 0;  /* 0C076EDC tst Rm,Rn */
	{ u32 c_ = !T; W8(r10, r0); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C076F32u, 4); goto L_0C076F32; } UPD(0x0C076EE2u, 1); goto L_0C076EE2; }  /* 0C076EDE bf/s */
L_0C076EE2: BLKS(0x0C076EE2u);
	r0 = 0x8Cu; UPD(0x0C076EE4u, 1);  /* 0C076EE2 mov.w @(disp,pc),Rn */
	r4 = 0xFFFFFFFAu;  /* 0C076EE4 mov #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r13); UPD(0x0C076EE8u, 2);  /* 0C076EE6 mov.w @Rm,Rn */
	IF(0x0C076EE8u); r3 = R32(r0 + r9); UPD(0x0C076EEAu, 1);  /* 0C076EE8 mov.l @(r0,Rm),Rn */
	IF(0x0C076EEAu); T = (s32)r3 > 0;  /* 0C076EEA cmp/pl Rn */
	{ u32 c_ = !T; IF(0x0C076EEEu); ARG0(0x4D4Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = (u32)((s32)r13 >> 31); else r13 = (u32)((s32)r13 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ if (c_) { UPD(0x0C076EF6u, 4); goto L_0C076EF6; } goto L_0C076EF0; }  /* 0C076EEC bf/s */
L_0C076EF0: BLKS(0x0C076EF0u);
	r9 = 0x100u; UPD(0x0C076EF2u, 2);  /* 0C076EF0 mov.w @(disp,pc),Rn */
	r9 += r13;  /* 0C076EF2 add Rm,Rn */
	r13 = (u32)(s32)(s16)r9;  /* 0C076EF4 exts.w Rm,Rn */
	UPD(0x0C076EF6u, 2);
L_0C076EF6: BLKS(0x0C076EF6u);
	r10 = 0xC058060u; UPD(0x0C076EF8u, 1);  /* 0C076EF6 mov.l @(disp,pc),Rn */
	r5 = 0x99999u; UPD(0x0C076EFAu, 1);  /* 0C076EF8 mov.l @(disp,pc),Rn */
	IF(0x0C076EFAu); { u32 t_ = r10; PR = 0x0C076EFEu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C076EFEu); }  /* 0C076EFA jsr @Rn */
L_0C076EFE: BLKS(0x0C076EFEu);
	r9 = 0xC058030u; UPD(0x0C076F00u, 1);  /* 0C076EFE mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C076F00 mov Rm,Rn */
	r10 = R32(r8 + 0x24u); UPD(0x0C076F04u, 2);  /* 0C076F02 mov.l @(disp,Rm),Rn */
	r11 = 0x3u;  /* 0C076F04 mov #imm,Rn */
	r5 = 0xC0000u; UPD(0x0C076F08u, 2);  /* 0C076F06 mov.l @(disp,pc),Rn */
	IF(0x0C076F08u); { u32 t_ = r9; PR = 0x0C076F0Cu; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C076F0Cu); }  /* 0C076F08 jsr @Rn */
L_0C076F0C: BLKS(0x0C076F0Cu);
	r6 = R32(r8 + 0x28u); UPD(0x0C076F0Eu, 1);  /* 0C076F0C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C076F0E add #imm,Rn */
	r6 += r0;  /* 0C076F10 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C076F14u, 3);  /* 0C076F12 mov.w @(disp,pc),Rn */
	r5 = r10;  /* 0C076F14 mov Rm,Rn */
	IF(0x0C076F16u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C076F18u, 2);  /* 0C076F16 mov.b @(r0,Rm),Rn */
	r0 += 0xFFFFFFF9u;  /* 0C076F18 add #imm,Rn */
	IF(0x0C076F1Au); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C076F1Cu, 2);  /* 0C076F1A mov.b @(r0,Rm),Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C076F1Eu, 1);  /* 0C076F1C mov.l Rm,@(disp,Rn) */
	r2 = r12 & 0xFF;  /* 0C076F1E extu.b Rm,Rn */
	r11 += 0x7Du;  /* 0C076F20 add #imm,Rn */
	W32(r15, r2); UPD(0x0C076F24u, 3);  /* 0C076F22 mov.l Rm,@Rn */
	W32(r15 + 0x8u, r13); UPD(0x0C076F26u, 1);  /* 0C076F24 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r11); UPD(0x0C076F28u, 1);  /* 0C076F26 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C076F2Au, 1);  /* 0C076F28 mov.l @Rm,Rn */
	r8 = 0xC0AA9D0u; UPD(0x0C076F2Cu, 1);  /* 0C076F2A mov.l @(disp,pc),Rn */
	IF(0x0C076F2Cu); { u32 t_ = r8; PR = 0x0C076F30u; r7 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA9D0, 0x0C0AA9D0u, 0x0C076F30u); }  /* 0C076F2C jsr @Rn */
L_0C076F30: BLKS(0x0C076F30u);
	r15 += 0x10u;  /* 0C076F30 add #imm,Rn */
	UPD(0x0C076F32u, 1);
L_0C076F32: BLKS(0x0C076F32u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C076D3Cu, 3); goto L_0C076D3C; }  /* 0C076F32 bra */
L_0C076F40: BLKS(0x0C076F40u);
	r1 = 0xC076800u; UPD(0x0C076F42u, 1);  /* 0C076F40 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C076DDAu, 3); goto L_0C076DDA; }  /* 0C076F42 bra */
L_0C076F50: BLKS(0x0C076F50u);
	r13 = 0xC0A03F0u; UPD(0x0C076F52u, 1);  /* 0C076F50 mov.l @(disp,pc),Rn */
	IF(0x0C076F52u); { u32 t_ = r13; PR = 0x0C076F56u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C076F56u); }  /* 0C076F52 jsr @Rn */
L_0C076F56: BLKS(0x0C076F56u);
	IF(0x0C076F56u); T = (s32)r0 >= 0;  /* 0C076F56 cmp/pz Rn */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C076F40u, 4); goto L_0C076F40; } goto L_0C076F5C; }  /* 0C076F58 bf/s */
L_0C076F5C: BLKS(0x0C076F5Cu);
	r11 = 0xB4u; UPD(0x0C076F5Eu, 2);  /* 0C076F5C mov.w @(disp,pc),Rn */
	IF(0x0C076F5Eu); MACL = r12 * r11;  /* 0C076F5E mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C076F62u, 3);  /* 0C076F60 mov.l @(disp,pc),Rn */
	IF(0x0C076F62u); r0 = MACL;  /* 0C076F62 sts macl,Rn */
	IF(0x0C076F64u); MACL = r9 * r11;  /* 0C076F64 mul.l Rm,Rn */
	r0 += r8;  /* 0C076F66 add Rm,Rn */
	r4 = R32(r0 + 0x2Cu); UPD(0x0C076F6Au, 5);  /* 0C076F68 mov.l @(disp,Rm),Rn */
	IF(0x0C076F6Au); r6 = MACL;  /* 0C076F6A sts macl,Rn */
	r6 += r8;  /* 0C076F6C add Rm,Rn */
	r3 = R32(r6 + 0x24u); UPD(0x0C076F70u, 3);  /* 0C076F6E mov.l @(disp,Rm),Rn */
	r7 = R32(r6 + 0x28u); UPD(0x0C076F72u, 1);  /* 0C076F70 mov.l @(disp,Rm),Rn */
	r3 += r4;  /* 0C076F72 add Rm,Rn */
	r5 = R32(r0 + 0x30u); UPD(0x0C076F76u, 2);  /* 0C076F74 mov.l @(disp,Rm),Rn */
	r7 += r5;  /* 0C076F76 add Rm,Rn */
	W32(r0 + 0x24u, r3); UPD(0x0C076F7Au, 2);  /* 0C076F78 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x28u, r7); UPD(0x0C076F7Cu, 1);  /* 0C076F7A mov.l Rm,@(disp,Rn) */
L_0C076F7C: BLKS(0x0C076F7Cu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C076D3Cu, 3); goto L_0C076D3C; }  /* 0C076F7C bra */
L_0C076F80: BLKS(0x0C076F80u);
	r9 = 0xC0A03F0u; UPD(0x0C076F82u, 1);  /* 0C076F80 mov.l @(disp,pc),Rn */
	IF(0x0C076F82u); { u32 t_ = r9; PR = 0x0C076F86u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C076F86u); }  /* 0C076F82 jsr @Rn */
L_0C076F86: BLKS(0x0C076F86u);
	IF(0x0C076F86u); T = (s32)r0 >= 0;  /* 0C076F86 cmp/pz Rn */
	if (!T) { UPD(0x0C076F40u, 4); goto L_0C076F40; }  /* 0C076F88 bf */
L_0C076F8A: BLKS(0x0C076F8Au);
	r11 = 0xB4u; UPD(0x0C076F8Cu, 1);  /* 0C076F8A mov.w @(disp,pc),Rn */
	IF(0x0C076F8Cu); MACL = r12 * r11;  /* 0C076F8C mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C076F90u, 3);  /* 0C076F8E mov.l @(disp,pc),Rn */
	IF(0x0C076F90u); r8 = MACL;  /* 0C076F90 sts macl,Rn */
	IF(0x0C076F92u); MACL = r0 * r11;  /* 0C076F92 mul.l Rm,Rn */
	r8 += r4;  /* 0C076F94 add Rm,Rn */
	r10 = R32(r8); UPD(0x0C076F98u, 5);  /* 0C076F96 mov.l @Rm,Rn */
	IF(0x0C076F98u); r9 = MACL;  /* 0C076F98 sts macl,Rn */
	r0 = 0xFFFFFEFFu; UPD(0x0C076F9Cu, 2);  /* 0C076F9A mov.w @(disp,pc),Rn */
	r9 += r4;  /* 0C076F9C add Rm,Rn */
	r10 &= r0;  /* 0C076F9E and Rm,Rn */
	W32(r8, r10); UPD(0x0C076FA2u, 3);  /* 0C076FA0 mov.l Rm,@Rn */
	r4 = r12;  /* 0C076FA2 mov Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C076FA6u, 2);  /* 0C076FA4 mov.l @(disp,Rm),Rn */
	r13 = R32(r9); UPD(0x0C076FA8u, 1);  /* 0C076FA6 mov.l @Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C076FAAu, 1);  /* 0C076FA8 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x30u); UPD(0x0C076FACu, 1);  /* 0C076FAA mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C076FAC add #imm,Rn */
	r1 = 0x100u; UPD(0x0C076FB0u, 2);  /* 0C076FAE mov.w @(disp,pc),Rn */
	r7 += r5;  /* 0C076FB0 add Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C076FB4u, 2);  /* 0C076FB2 mov.l @(disp,Rm),Rn */
	r13 &= r1;  /* 0C076FB4 and Rm,Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C076FB8u, 2);  /* 0C076FB6 mov.l @(disp,Rm),Rn */
	r0 &= 0xFu;  /* 0C076FB8 and #imm,r0 */
	r2 = 0xC0A0380u; UPD(0x0C076FBCu, 2);  /* 0C076FBA mov.l @(disp,pc),Rn */
	r6 += r3;  /* 0C076FBC add Rm,Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C076FC0u, 2);  /* 0C076FBE mov.l Rm,@(disp,Rn) */
	r10 |= r13;  /* 0C076FC0 or Rm,Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C076FC4u, 2);  /* 0C076FC2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x24u, r6); UPD(0x0C076FC6u, 1);  /* 0C076FC4 mov.l Rm,@(disp,Rn) */
	IF(0x0C076FC6u); { u32 t_ = r2; PR = 0x0C076FCAu; W32(r8, r10); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C076FCAu); }  /* 0C076FC6 jsr @Rn */
L_0C076FCA: BLKS(0x0C076FCAu);
	r7 = 0x9Fu; UPD(0x0C076FCCu, 1);  /* 0C076FCA mov.w @(disp,pc),Rn */
	r7 += r8;  /* 0C076FCC add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C076FD0u, 2);  /* 0C076FCE mov.b @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C076FD0 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C076FD2 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r2 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C076FDCu, 5); goto L_0C076FDC; } goto L_0C076FD8; }  /* 0C076FD4 bf/s */
L_0C076FD8: BLKS(0x0C076FD8u);
	{ IF(0x0C076FDAu); ; /* slot nop */ UPD(0x0C077100u, 4); goto L_0C077100; }  /* 0C076FD8 bra */
L_0C076FDC: BLKS(0x0C076FDCu);
	T = (s32)r0 > (s32)r2;  /* 0C076FDC cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C077040u, 4); goto L_0C077040; } goto L_0C076FE2; }  /* 0C076FDE bt/s */
L_0C076FE2: BLKS(0x0C076FE2u);
	T = (r0 & r0) == 0;  /* 0C076FE2 tst Rm,Rn */
	if (!T) { UPD(0x0C076F7Cu, 5); goto L_0C076F7C; }  /* 0C076FE4 bf */
L_0C076FE6: BLKS(0x0C076FE6u);
	r8 = R32(r9); UPD(0x0C076FE8u, 1);  /* 0C076FE6 mov.l @Rm,Rn */
	r12 = 0x2000000u; UPD(0x0C076FEAu, 1);  /* 0C076FE8 mov.l @(disp,pc),Rn */
	T = (r8 & r12) == 0;  /* 0C076FEA tst Rm,Rn */
	if (T) { UPD(0x0C076F7Cu, 4); goto L_0C076F7C; }  /* 0C076FEC bt */
L_0C076FEE: BLKS(0x0C076FEEu);
	r13 = r3;  /* 0C076FEE mov Rm,Rn */
	UPD(0x0C076FF0u, 1);
L_0C076FF0: BLKS(0x0C076FF0u);
	r13 += 0x1u;  /* 0C076FF0 add #imm,Rn */
	W8(r7, r13); UPD(0x0C076FF4u, 2);  /* 0C076FF2 mov.b Rm,@Rn */
L_0C076FF4: BLKS(0x0C076FF4u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C076D3Cu, 3); goto L_0C076D3C; }  /* 0C076FF4 bra */
L_0C077040: BLKS(0x0C077040u);
	if (!T) { UPD(0x0C076FF4u, 3); goto L_0C076FF4; }  /* 0C077040 bf */
L_0C077042: BLKS(0x0C077042u);
	r4 = r12;  /* 0C077042 mov Rm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C077046u, 2);  /* 0C077044 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C077046 mov #imm,Rn */
	IF(0x0C077048u); { u32 t_ = r11; PR = 0x0C07704Cu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07704Cu); }  /* 0C077048 jsr @Rn */
L_0C07704C: BLKS(0x0C07704Cu);
	T = (r0 & r0) == 0;  /* 0C07704C tst Rm,Rn */
	if (T) { UPD(0x0C076FF4u, 4); goto L_0C076FF4; }  /* 0C07704E bt */
L_0C077050: BLKS(0x0C077050u);
	r0 = r8;  /* 0C077050 mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C077054u, 2);  /* 0C077052 mov.w @(disp,pc),Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C077056u, 1);  /* 0C077054 mov.l @(disp,pc),Rn */
	IF(0x0C077056u); r7 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C077058u, 1);  /* 0C077056 mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C07705Au, 1);  /* 0C077058 mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C07705A extu.b Rm,Rn */
	IF(0x0C07705Cu); { u32 t_ = r9; PR = 0x0C077060u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C077060u); }  /* 0C07705C jsr @Rn */
L_0C077060: BLKS(0x0C077060u);
	T = (r0 & r0) == 0;  /* 0C077060 tst Rm,Rn */
	if (T) { UPD(0x0C076FF4u, 4); goto L_0C076FF4; }  /* 0C077062 bt */
L_0C077064: BLKS(0x0C077064u);
	r13 = 0xC058090u; UPD(0x0C077066u, 1);  /* 0C077064 mov.l @(disp,pc),Rn */
	r10 = 0xC057390u; UPD(0x0C077068u, 1);  /* 0C077066 mov.l @(disp,pc),Rn */
	IF(0x0C077068u); { u32 t_ = r13; PR = 0x0C07706Cu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C07706Cu); }  /* 0C077068 jsr @Rn */
L_0C07706C: BLKS(0x0C07706Cu);
	r4 = 0x280u; UPD(0x0C07706Eu, 1);  /* 0C07706C mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C07706E exts.w Rm,Rn */
	IF(0x0C077070u); MACL = r1 * r4;  /* 0C077070 mul.l Rm,Rn */
	r6 = 0xC283794u; UPD(0x0C077074u, 4);  /* 0C077072 mov.l @(disp,pc),Rn */
	IF(0x0C077074u); r3 = MACL;  /* 0C077074 sts macl,Rn */
	r3 += r6;  /* 0C077076 add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C07707Au, 3);  /* 0C077078 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C07707Cu, 1);  /* 0C07707A mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C07707Eu, 1);  /* 0C07707C mov.l @(disp,Rm),Rn */
	IF(0x0C07707Eu); { u32 t_ = r10; PR = 0x0C077082u; r7 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C077082u); }  /* 0C07707E jsr @Rn */
L_0C077082: BLKS(0x0C077082u);
	r13 = (u32)(s32)(s16)r0;  /* 0C077082 exts.w Rm,Rn */
	r0 = 0x0u;  /* 0C077084 mov #imm,Rn */
	W32(r14, r0); UPD(0x0C077088u, 3);  /* 0C077086 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r8); UPD(0x0C07708Au, 1);  /* 0C077088 mov.l Rm,@(disp,Rn) */
L_0C07708A: BLKS(0x0C07708Au);
	r7 = R32(r14 + 0x4u); UPD(0x0C07708Cu, 1);  /* 0C07708A mov.l @(disp,Rm),Rn */
	r1 = 0x4u;  /* 0C07708C mov #imm,Rn */
	r4 = R32(r7 + 0xCu); UPD(0x0C077090u, 2);  /* 0C07708E mov.l @(disp,Rm),Rn */
	r9 = R32(r14); UPD(0x0C077092u, 1);  /* 0C077090 mov.l @Rm,Rn */
	IF(0x0C077092u); ARG0(0x441Du); { s32 s_ = (s32)r1; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C077092 shld Rm,Rn */
	IF(0x0C077094u); r9 <<= 8;  /* 0C077094 shll8 Rn */
	r10 = 0xC0u; UPD(0x0C077098u, 3);  /* 0C077096 mov.w @(disp,pc),Rn */
	r4 += r9;  /* 0C077098 add Rm,Rn */
	r2 = 0xC058060u; UPD(0x0C07709Cu, 2);  /* 0C07709A mov.l @(disp,pc),Rn */
	r4 += r10;  /* 0C07709C add Rm,Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07709E exts.w Rm,Rn */
	r5 = 0xC0000u; UPD(0x0C0770A2u, 3);  /* 0C0770A0 mov.l @(disp,pc),Rn */
	IF(0x0C0770A2u); { u32 t_ = r2; PR = 0x0C0770A6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0770A6u); }  /* 0C0770A2 jsr @Rn */
L_0C0770A6: BLKS(0x0C0770A6u);
	r6 = 0x66666667u; UPD(0x0C0770A8u, 1);  /* 0C0770A6 mov.l @(disp,pc),Rn */
	IF(0x0C0770A8u); r0 <<= 2;  /* 0C0770A8 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r6; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0770AA dmuls.l Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C0770AEu, 4);  /* 0C0770AC mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0770AE mov Rm,Rn */
	IF(0x0C0770B0u); r3 = MACH;  /* 0C0770B0 sts mach,Rn */
	IF(0x0C0770B2u); T = r3 & 1; r3 = (u32)((s32)r3 >> 1);  /* 0C0770B2 shar Rn */
	IF(0x0C0770B4u); T = r0 >> 31; r0 <<= 1;  /* 0C0770B4 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C0770B6 subc Rm,Rn */
	r3 -= r0;  /* 0C0770B8 sub Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C0770BCu, 7);  /* 0C0770BA mov.l @(disp,Rm),Rn */
	r9 = R32(r0 + 0x24u); UPD(0x0C0770BEu, 1);  /* 0C0770BC mov.l @(disp,Rm),Rn */
	r5 = 0xC0000u; UPD(0x0C0770C0u, 1);  /* 0C0770BE mov.l @(disp,pc),Rn */
	IF(0x0C0770C0u); { u32 t_ = r8; PR = 0x0C0770C4u; r9 += r3; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0770C4u); }  /* 0C0770C0 jsr @Rn */
L_0C0770C4: BLKS(0x0C0770C4u);
	r5 = R32(r14 + 0x4u); UPD(0x0C0770C6u, 1);  /* 0C0770C4 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0770C6 add #imm,Rn */
	r6 = R32(r5 + 0x28u); UPD(0x0C0770CAu, 2);  /* 0C0770C8 mov.l @(disp,Rm),Rn */
	r4 = 0x1u;  /* 0C0770CA mov #imm,Rn */
	r7 = 0x28000u; UPD(0x0C0770CEu, 2);  /* 0C0770CC mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C0770CE mov Rm,Rn */
	r10 = 0xC0A8510u; UPD(0x0C0770D2u, 2);  /* 0C0770D0 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0770D2 add Rm,Rn */
	W32(r15, r7); UPD(0x0C0770D6u, 2);  /* 0C0770D4 mov.l Rm,@Rn */
	IF(0x0C0770D6u); { u32 t_ = r10; PR = 0x0C0770DAu; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8510, 0x0C0A8510u, 0x0C0770DAu); }  /* 0C0770D6 jsr @Rn */
L_0C0770DA: BLKS(0x0C0770DAu);
	r9 = R32(r14); UPD(0x0C0770DCu, 1);  /* 0C0770DA mov.l @Rm,Rn */
	r2 = 0x1u;  /* 0C0770DC mov #imm,Rn */
	r9 += 0x1u;  /* 0C0770DE add #imm,Rn */
	r11 = (u32)(s32)(s16)r9;  /* 0C0770E0 exts.w Rm,Rn */
	W32(r14, r11); UPD(0x0C0770E4u, 4);  /* 0C0770E2 mov.l Rm,@Rn */
	r8 = R32(r14); UPD(0x0C0770E6u, 1);  /* 0C0770E4 mov.l @Rm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C0770E6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07708Au, 4); goto L_0C07708A; } UPD(0x0C0770ECu, 1); goto L_0C0770EC; }  /* 0C0770E8 bf/s */
L_0C0770EC: BLKS(0x0C0770ECu);
	r1 = 0xC0580D0u; UPD(0x0C0770EEu, 1);  /* 0C0770EC mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C076DDAu, 3); goto L_0C076DDA; }  /* 0C0770EE bra */
L_0C077100: BLKS(0x0C077100u);
	r10 = 0x99u; UPD(0x0C077102u, 1);  /* 0C077100 mov.w @(disp,pc),Rn */
	r10 += r8;  /* 0C077102 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r10); UPD(0x0C077106u, 2);  /* 0C077104 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C077106 add #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C077108 extu.b Rm,Rn */
	T = r0 == 0x3Cu;  /* 0C07710A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r10, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0771FCu, 6); goto L_0C0771FC; } UPD(0x0C077110u, 1); goto L_0C077110; }  /* 0C07710C bf/s */
L_0C077110: BLKS(0x0C077110u);
	{ r13 = r3; /* slot mov Rm,Rn */ UPD(0x0C076FF0u, 3); goto L_0C076FF0; }  /* 0C077110 bra */
L_0C077120: BLKS(0x0C077120u);
	r13 = 0xC0A03F0u; UPD(0x0C077122u, 1);  /* 0C077120 mov.l @(disp,pc),Rn */
	IF(0x0C077122u); { u32 t_ = r13; PR = 0x0C077126u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C077126u); }  /* 0C077122 jsr @Rn */
L_0C077126: BLKS(0x0C077126u);
	IF(0x0C077126u); T = (s32)r0 >= 0;  /* 0C077126 cmp/pz Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077130u, 4); goto L_0C077130; } goto L_0C07712C; }  /* 0C077128 bt/s */
L_0C07712C: BLKS(0x0C07712Cu);
	{ IF(0x0C07712Eu); ; /* slot nop */ UPD(0x0C076F40u, 4); goto L_0C076F40; }  /* 0C07712C bra */
L_0C077130: BLKS(0x0C077130u);
	r13 = 0xB4u; UPD(0x0C077132u, 1);  /* 0C077130 mov.w @(disp,pc),Rn */
	IF(0x0C077132u); MACL = r12 * r13;  /* 0C077132 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C077136u, 3);  /* 0C077134 mov.l @(disp,pc),Rn */
	IF(0x0C077136u); r8 = MACL;  /* 0C077136 sts macl,Rn */
	IF(0x0C077138u); MACL = r0 * r13;  /* 0C077138 mul.l Rm,Rn */
	r8 += r2;  /* 0C07713A add Rm,Rn */
	r10 = R32(r8); UPD(0x0C07713Eu, 5);  /* 0C07713C mov.l @Rm,Rn */
	IF(0x0C07713Eu); r0 = MACL;  /* 0C07713E sts macl,Rn */
	r0 += r2;  /* 0C077140 add Rm,Rn */
	r5 = 0xFFFFFEFFu; UPD(0x0C077144u, 3);  /* 0C077142 mov.w @(disp,pc),Rn */
	r13 += 0x4Cu;  /* 0C077144 add #imm,Rn */
	r7 = R32(r0); UPD(0x0C077148u, 2);  /* 0C077146 mov.l @Rm,Rn */
	r10 &= r5;  /* 0C077148 and Rm,Rn */
	r6 = R32(r0 + 0x24u); UPD(0x0C07714Cu, 2);  /* 0C07714A mov.l @(disp,Rm),Rn */
	r7 &= r13;  /* 0C07714C and Rm,Rn */
	r11 = R32(r0 + 0x28u); UPD(0x0C077150u, 2);  /* 0C07714E mov.l @(disp,Rm),Rn */
	r10 |= r7;  /* 0C077150 or Rm,Rn */
	r4 = R32(r8 + 0x2Cu); UPD(0x0C077154u, 2);  /* 0C077152 mov.l @(disp,Rm),Rn */
	r5 = 0x8u;  /* 0C077154 mov #imm,Rn */
	r3 = R32(r8 + 0x30u); UPD(0x0C077158u, 2);  /* 0C077156 mov.l @(disp,Rm),Rn */
	r6 += r4;  /* 0C077158 add Rm,Rn */
	r2 = R32(r8 + 0x8u); UPD(0x0C07715Cu, 2);  /* 0C07715A mov.l @(disp,Rm),Rn */
	r11 += r3;  /* 0C07715C add Rm,Rn */
	r2 += 0xFFFFFFDAu;  /* 0C07715E add #imm,Rn */
	W32(r8, r10); UPD(0x0C077162u, 3);  /* 0C077160 mov.l Rm,@Rn */
	T = r2 > r5;  /* 0C077162 cmp/hi Rm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C077166u, 2);  /* 0C077164 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r8 + 0x28u, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0771FCu, 3); goto L_0C0771FC; } UPD(0x0C07716Au, 1); goto L_0C07716A; }  /* 0C077166 bt/s */
L_0C07716A: BLKS(0x0C07716Au);
	r0 = 0xC0771B8u;  /* 0C07716A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07716C add Rm,Rn */
	IF(0x0C07716Eu); r8 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C077170u, 3);  /* 0C07716E mov.w @(r0,Rm),Rn */
	IF(0x0C077170u); { u32 tv_ = (r8 + 0x0C077174u); u32 t_ = PHYS(tv_); IF(0x0C077172u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0771D0u: goto L_0C0771D0; case 0x0C0771F0u: goto L_0C0771F0; case 0x0C077270u: goto L_0C077270; case 0x0C0772E0u: goto L_0C0772E0; case 0x0C077350u: goto L_0C077350; case 0x0C0773A0u: goto L_0C0773A0; case 0x0C077410u: goto L_0C077410; case 0x0C077420u: goto L_0C077420; case 0x0C077430u: goto L_0C077430; default: JUMPD(tv_); } }  /* 0C077170 braf Rn */
L_0C0771D0: BLKS(0x0C0771D0u);
	r1 = 0xC06F930u; UPD(0x0C0771D2u, 1);  /* 0C0771D0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0771D2 mov Rm,Rn */
	r5 = r9;  /* 0C0771D4 mov Rm,Rn */
	UPD(0x0C0771D6u, 2);
L_0C0771D6: BLKS(0x0C0771D6u);
	r14 += 0x8u;  /* 0C0771D6 add #imm,Rn */
	r15 = r14;  /* 0C0771D8 mov Rm,Rn */
	IF(0x0C0771DAu); PR = R32(r15); r15 += 4; UPD(0x0C0771DCu, 3);  /* 0C0771DA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0771DEu, 1);  /* 0C0771DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0771E0u, 1);  /* 0C0771DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0771E2u, 1);  /* 0C0771E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0771E4u, 1);  /* 0C0771E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0771E6u, 1);  /* 0C0771E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0771E8u, 1);  /* 0C0771E6 mov.l @Rm+,Rn */
	IF(0x0C0771E8u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06F830u: goto L_0C06F830; case 0x0C06FBD0u: goto L_0C06FBD0; default: JUMPD(tv_); } }  /* 0C0771E8 jmp @Rn */
L_0C0771F0: BLKS(0x0C0771F0u);
	r5 = r9;  /* 0C0771F0 mov Rm,Rn */
	r9 = 0xC0A0670u; UPD(0x0C0771F4u, 2);  /* 0C0771F2 mov.l @(disp,pc),Rn */
	IF(0x0C0771F4u); { u32 t_ = r9; PR = 0x0C0771F8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C0771F8u); }  /* 0C0771F4 jsr @Rn */
L_0C0771F8: BLKS(0x0C0771F8u);
	T = (r0 & r0) == 0;  /* 0C0771F8 tst Rm,Rn */
	if (!T) { UPD(0x0C077200u, 4); goto L_0C077200; }  /* 0C0771FA bf */
L_0C0771FC: BLKS(0x0C0771FCu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C076D3Cu, 3); goto L_0C076D3C; }  /* 0C0771FC bra */
L_0C077200: BLKS(0x0C077200u);
	r11 = 0xC0A9E40u; UPD(0x0C077202u, 1);  /* 0C077200 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C077202 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C077204 mov #imm,Rn */
	IF(0x0C077206u); { u32 t_ = r11; PR = 0x0C07720Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07720Au); }  /* 0C077206 jsr @Rn */
L_0C07720A: BLKS(0x0C07720Au);
	T = (r0 & r0) == 0;  /* 0C07720A tst Rm,Rn */
	if (T) { UPD(0x0C0772ECu, 4); goto L_0C0772EC; }  /* 0C07720C bt */
L_0C07720E: BLKS(0x0C07720Eu);
	r4 = 0xB4u; UPD(0x0C077210u, 1);  /* 0C07720E mov.w @(disp,pc),Rn */
	IF(0x0C077210u); MACL = r12 * r4;  /* 0C077210 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C077214u, 3);  /* 0C077212 mov.l @(disp,pc),Rn */
	IF(0x0C077214u); r10 = MACL;  /* 0C077214 sts macl,Rn */
	r10 += r0;  /* 0C077216 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C07721Au, 3);  /* 0C077218 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C07721A mov Rm,Rn */
	r13 = 0xC0A9BB0u; UPD(0x0C07721Eu, 2);  /* 0C07721C mov.l @(disp,pc),Rn */
	IF(0x0C07721Eu); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C077220u, 1);  /* 0C07721E mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C077222u, 1);  /* 0C077220 mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C077222 extu.b Rm,Rn */
	IF(0x0C077224u); { u32 t_ = r13; PR = 0x0C077228u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C077228u); }  /* 0C077224 jsr @Rn */
L_0C077228: BLKS(0x0C077228u);
	T = (r0 & r0) == 0;  /* 0C077228 tst Rm,Rn */
	if (T) { UPD(0x0C0772ECu, 4); goto L_0C0772EC; }  /* 0C07722A bt */
L_0C07722C: BLKS(0x0C07722Cu);
	r0 = r10;  /* 0C07722C mov Rm,Rn */
	r2 = 0x86u; UPD(0x0C077230u, 2);  /* 0C07722E mov.w @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C077232u, 1);  /* 0C077230 mov.l @(disp,pc),Rn */
	IF(0x0C077232u); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C077234u, 1);  /* 0C077232 mov.w @(r0,Rm),Rn */
	r5 = 0x100000u; UPD(0x0C077236u, 1);  /* 0C077234 mov.l @(disp,pc),Rn */
	IF(0x0C077236u); { u32 t_ = r8; PR = 0x0C07723Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07723Au); }  /* 0C077236 jsr @Rn */
L_0C07723A: BLKS(0x0C07723Au);
	r8 = R32(r10 + 0x24u); UPD(0x0C07723Cu, 1);  /* 0C07723A mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C07723C mov Rm,Rn */
	r11 = 0xC058030u; UPD(0x0C077240u, 2);  /* 0C07723E mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C077240 add Rm,Rn */
	r7 = 0x20000u; UPD(0x0C077244u, 2);  /* 0C077242 mov.l @(disp,pc),Rn */
	r5 = 0x140000u; UPD(0x0C077246u, 1);  /* 0C077244 mov.l @(disp,pc),Rn */
	IF(0x0C077246u); { u32 t_ = r11; PR = 0x0C07724Au; r8 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07724Au); }  /* 0C077246 jsr @Rn */
L_0C07724A: BLKS(0x0C07724Au);
	r6 = R32(r10 + 0x28u); UPD(0x0C07724Cu, 1);  /* 0C07724A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07724C add #imm,Rn */
	r10 = 0x30000u; UPD(0x0C077250u, 2);  /* 0C07724E mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C077250 add Rm,Rn */
	W32(r15, r10); UPD(0x0C077254u, 2);  /* 0C077252 mov.l Rm,@Rn */
	r4 = 0x3u;  /* 0C077254 mov #imm,Rn */
	UPD(0x0C077256u, 1);
L_0C077256: BLKS(0x0C077256u);
	r0 = 0xC0A8A50u; UPD(0x0C077258u, 1);  /* 0C077256 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C077258 mov Rm,Rn */
	r7 = r9;  /* 0C07725A mov Rm,Rn */
	UPD(0x0C07725Cu, 2);
L_0C07725C: BLKS(0x0C07725Cu);
	IF(0x0C07725Cu); { u32 t_ = r0; PR = 0x0C077260u; IF(0x0C07725Eu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C077260u); }  /* 0C07725C jsr @Rn */
L_0C077260: BLKS(0x0C077260u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0770ECu, 3); goto L_0C0770EC; }  /* 0C077260 bra */
L_0C077270: BLKS(0x0C077270u);
	r5 = r9;  /* 0C077270 mov Rm,Rn */
	r9 = 0xC0A0670u; UPD(0x0C077274u, 2);  /* 0C077272 mov.l @(disp,pc),Rn */
	IF(0x0C077274u); { u32 t_ = r9; PR = 0x0C077278u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C077278u); }  /* 0C077274 jsr @Rn */
L_0C077278: BLKS(0x0C077278u);
	T = (r0 & r0) == 0;  /* 0C077278 tst Rm,Rn */
	if (T) { UPD(0x0C0772ECu, 4); goto L_0C0772EC; }  /* 0C07727A bt */
L_0C07727C: BLKS(0x0C07727Cu);
	r4 = r12;  /* 0C07727C mov Rm,Rn */
	r13 = 0xC0A9E40u; UPD(0x0C077280u, 2);  /* 0C07727E mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C077280 mov #imm,Rn */
	IF(0x0C077282u); { u32 t_ = r13; PR = 0x0C077286u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C077286u); }  /* 0C077282 jsr @Rn */
L_0C077286: BLKS(0x0C077286u);
	T = (r0 & r0) == 0;  /* 0C077286 tst Rm,Rn */
	if (T) { UPD(0x0C0772ECu, 4); goto L_0C0772EC; }  /* 0C077288 bt */
L_0C07728A: BLKS(0x0C07728Au);
	r0 = 0xB4u; UPD(0x0C07728Cu, 1);  /* 0C07728A mov.w @(disp,pc),Rn */
	IF(0x0C07728Cu); MACL = r12 * r0;  /* 0C07728C mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C077290u, 3);  /* 0C07728E mov.l @(disp,pc),Rn */
	IF(0x0C077290u); r10 = MACL;  /* 0C077290 sts macl,Rn */
	r10 += r6;  /* 0C077292 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C077296u, 3);  /* 0C077294 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C077296 mov Rm,Rn */
	IF(0x0C077298u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07729Au, 2);  /* 0C077298 mov.b @(r0,Rm),Rn */
	r11 = 0xC0A9BB0u; UPD(0x0C07729Cu, 1);  /* 0C07729A mov.l @(disp,pc),Rn */
	r6 = r5 & 0xFF;  /* 0C07729C extu.b Rm,Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C0772A0u, 2);  /* 0C07729E mov.l @(disp,Rm),Rn */
	IF(0x0C0772A0u); { u32 t_ = r11; PR = 0x0C0772A4u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0772A4u); }  /* 0C0772A0 jsr @Rn */
L_0C0772A4: BLKS(0x0C0772A4u);
	T = (r0 & r0) == 0;  /* 0C0772A4 tst Rm,Rn */
	if (T) { UPD(0x0C0772ECu, 4); goto L_0C0772EC; }  /* 0C0772A6 bt */
L_0C0772A8: BLKS(0x0C0772A8u);
	r0 = r10;  /* 0C0772A8 mov Rm,Rn */
	r2 = 0x86u; UPD(0x0C0772ACu, 2);  /* 0C0772AA mov.w @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C0772AEu, 1);  /* 0C0772AC mov.l @(disp,pc),Rn */
	IF(0x0C0772AEu); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0772B0u, 1);  /* 0C0772AE mov.w @(r0,Rm),Rn */
	r5 = 0x100000u; UPD(0x0C0772B2u, 1);  /* 0C0772B0 mov.l @(disp,pc),Rn */
	IF(0x0C0772B2u); { u32 t_ = r8; PR = 0x0C0772B6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0772B6u); }  /* 0C0772B2 jsr @Rn */
L_0C0772B6: BLKS(0x0C0772B6u);
	r8 = R32(r10 + 0x24u); UPD(0x0C0772B8u, 1);  /* 0C0772B6 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0772B8 mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C0772BCu, 2);  /* 0C0772BA mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C0772BC add Rm,Rn */
	r7 = 0x10000u; UPD(0x0C0772C0u, 2);  /* 0C0772BE mov.l @(disp,pc),Rn */
	r5 = 0x140000u; UPD(0x0C0772C2u, 1);  /* 0C0772C0 mov.l @(disp,pc),Rn */
	IF(0x0C0772C2u); { u32 t_ = r13; PR = 0x0C0772C6u; r8 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0772C6u); }  /* 0C0772C2 jsr @Rn */
L_0C0772C6: BLKS(0x0C0772C6u);
	r6 = R32(r10 + 0x28u); UPD(0x0C0772C8u, 1);  /* 0C0772C6 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0772C8 add #imm,Rn */
	r4 = 0x30000u; UPD(0x0C0772CCu, 2);  /* 0C0772CA mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0772CC add Rm,Rn */
	W32(r15, r4); UPD(0x0C0772D0u, 2);  /* 0C0772CE mov.l Rm,@Rn */
	{ r4 = 0x2u; /* slot mov #imm,Rn */ UPD(0x0C077256u, 3); goto L_0C077256; }  /* 0C0772D0 bra */
L_0C0772E0: BLKS(0x0C0772E0u);
	r10 = 0xC0A0670u; UPD(0x0C0772E2u, 1);  /* 0C0772E0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0772E2 mov Rm,Rn */
	IF(0x0C0772E4u); { u32 t_ = r10; PR = 0x0C0772E8u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C0772E8u); }  /* 0C0772E4 jsr @Rn */
L_0C0772E8: BLKS(0x0C0772E8u);
	T = (r0 & r0) == 0;  /* 0C0772E8 tst Rm,Rn */
	if (!T) { UPD(0x0C0772F0u, 4); goto L_0C0772F0; }  /* 0C0772EA bf */
L_0C0772EC: BLKS(0x0C0772ECu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C076D3Cu, 3); goto L_0C076D3C; }  /* 0C0772EC bra */
L_0C0772F0: BLKS(0x0C0772F0u);
	r9 = 0xC0A9E40u; UPD(0x0C0772F2u, 1);  /* 0C0772F0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0772F2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C0772F4 mov #imm,Rn */
	IF(0x0C0772F6u); { u32 t_ = r9; PR = 0x0C0772FAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0772FAu); }  /* 0C0772F6 jsr @Rn */
L_0C0772FA: BLKS(0x0C0772FAu);
	T = (r0 & r0) == 0;  /* 0C0772FA tst Rm,Rn */
	if (T) { UPD(0x0C0773D8u, 4); goto L_0C0773D8; }  /* 0C0772FC bt */
L_0C0772FE: BLKS(0x0C0772FEu);
	r11 = 0xB4u; UPD(0x0C077300u, 1);  /* 0C0772FE mov.w @(disp,pc),Rn */
	IF(0x0C077300u); MACL = r12 * r11;  /* 0C077300 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C077304u, 3);  /* 0C077302 mov.l @(disp,pc),Rn */
	IF(0x0C077304u); r11 = MACL;  /* 0C077304 sts macl,Rn */
	r11 += r6;  /* 0C077306 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C07730Au, 3);  /* 0C077308 mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C07730A mov Rm,Rn */
	IF(0x0C07730Cu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07730Eu, 2);  /* 0C07730C mov.b @(r0,Rm),Rn */
	r13 = 0xC0A9BB0u; UPD(0x0C077310u, 1);  /* 0C07730E mov.l @(disp,pc),Rn */
	r6 = r5 & 0xFF;  /* 0C077310 extu.b Rm,Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C077314u, 2);  /* 0C077312 mov.l @(disp,Rm),Rn */
	IF(0x0C077314u); { u32 t_ = r13; PR = 0x0C077318u; r5 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C077318u); }  /* 0C077314 jsr @Rn */
L_0C077318: BLKS(0x0C077318u);
	T = (r0 & r0) == 0;  /* 0C077318 tst Rm,Rn */
	if (T) { UPD(0x0C0773D8u, 4); goto L_0C0773D8; }  /* 0C07731A bt */
L_0C07731C: BLKS(0x0C07731Cu);
	r0 = r11;  /* 0C07731C mov Rm,Rn */
	r4 = 0x86u; UPD(0x0C077320u, 2);  /* 0C07731E mov.w @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C077322u, 1);  /* 0C077320 mov.l @(disp,pc),Rn */
	IF(0x0C077322u); r9 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C077324u, 1);  /* 0C077322 mov.w @(r0,Rm),Rn */
	r5 = 0xC0000u; UPD(0x0C077326u, 1);  /* 0C077324 mov.l @(disp,pc),Rn */
	r10 = 0xC058030u; UPD(0x0C077328u, 1);  /* 0C077326 mov.l @(disp,pc),Rn */
	IF(0x0C077328u); { u32 t_ = r8; PR = 0x0C07732Cu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07732Cu); }  /* 0C077328 jsr @Rn */
L_0C07732C: BLKS(0x0C07732Cu);
	r8 = R32(r11 + 0x24u); UPD(0x0C07732Eu, 1);  /* 0C07732C mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C07732E mov Rm,Rn */
	r5 = 0x100000u; UPD(0x0C077332u, 2);  /* 0C077330 mov.l @(disp,pc),Rn */
	IF(0x0C077332u); { u32 t_ = r10; PR = 0x0C077336u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C077336u); }  /* 0C077332 jsr @Rn */
L_0C077336: BLKS(0x0C077336u);
	r13 = 0x20000u; UPD(0x0C077338u, 1);  /* 0C077336 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C077338 add #imm,Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C07733Cu, 2);  /* 0C07733A mov.l @(disp,Rm),Rn */
	r8 += r13;  /* 0C07733C add Rm,Rn */
	W32(r15, r13); UPD(0x0C077340u, 2);  /* 0C07733E mov.l Rm,@Rn */
	r6 += r0;  /* 0C077340 add Rm,Rn */
	{ r4 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C077256u, 4); goto L_0C077256; }  /* 0C077342 bra */
L_0C077350: BLKS(0x0C077350u);
	r1 = 0xC06FA70u; UPD(0x0C077352u, 1);  /* 0C077350 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C077352 mov Rm,Rn */
	{ r5 = r9; /* slot mov Rm,Rn */ UPD(0x0C0771D6u, 4); goto L_0C0771D6; }  /* 0C077354 bra */
L_0C0773A0: BLKS(0x0C0773A0u);
	r5 = r9;  /* 0C0773A0 mov Rm,Rn */
	r9 = 0xC0A0670u; UPD(0x0C0773A4u, 2);  /* 0C0773A2 mov.l @(disp,pc),Rn */
	IF(0x0C0773A4u); { u32 t_ = r9; PR = 0x0C0773A8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C0773A8u); }  /* 0C0773A4 jsr @Rn */
L_0C0773A8: BLKS(0x0C0773A8u);
	T = (r0 & r0) == 0;  /* 0C0773A8 tst Rm,Rn */
	if (T) { UPD(0x0C0773D8u, 4); goto L_0C0773D8; }  /* 0C0773AA bt */
L_0C0773AC: BLKS(0x0C0773ACu);
	r4 = r12;  /* 0C0773AC mov Rm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C0773B0u, 2);  /* 0C0773AE mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C0773B0 mov #imm,Rn */
	IF(0x0C0773B2u); { u32 t_ = r11; PR = 0x0C0773B6u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0773B6u); }  /* 0C0773B2 jsr @Rn */
L_0C0773B6: BLKS(0x0C0773B6u);
	T = (r0 & r0) == 0;  /* 0C0773B6 tst Rm,Rn */
	if (T) { UPD(0x0C0773D8u, 4); goto L_0C0773D8; }  /* 0C0773B8 bt */
L_0C0773BA: BLKS(0x0C0773BAu);
	r5 = 0xB4u; UPD(0x0C0773BCu, 1);  /* 0C0773BA mov.w @(disp,pc),Rn */
	IF(0x0C0773BCu); MACL = r12 * r5;  /* 0C0773BC mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0773C0u, 3);  /* 0C0773BE mov.l @(disp,pc),Rn */
	IF(0x0C0773C0u); r10 = MACL;  /* 0C0773C0 sts macl,Rn */
	r10 += r0;  /* 0C0773C2 add Rm,Rn */
	r2 = 0xA9u; UPD(0x0C0773C6u, 3);  /* 0C0773C4 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C0773C6 mov Rm,Rn */
	r13 = 0xC0A9BB0u; UPD(0x0C0773CAu, 2);  /* 0C0773C8 mov.l @(disp,pc),Rn */
	IF(0x0C0773CAu); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0773CCu, 1);  /* 0C0773CA mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C0773CEu, 1);  /* 0C0773CC mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0773CE extu.b Rm,Rn */
	IF(0x0C0773D0u); { u32 t_ = r13; PR = 0x0C0773D4u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0773D4u); }  /* 0C0773D0 jsr @Rn */
L_0C0773D4: BLKS(0x0C0773D4u);
	T = (r0 & r0) == 0;  /* 0C0773D4 tst Rm,Rn */
	if (!T) { UPD(0x0C0773DCu, 4); goto L_0C0773DC; }  /* 0C0773D6 bf */
L_0C0773D8: BLKS(0x0C0773D8u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C076D3Cu, 3); goto L_0C076D3C; }  /* 0C0773D8 bra */
L_0C0773DC: BLKS(0x0C0773DCu);
	r4 = 0x86u; UPD(0x0C0773DEu, 1);  /* 0C0773DC mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C0773DE mov Rm,Rn */
	r13 = 0xC058060u; UPD(0x0C0773E2u, 2);  /* 0C0773E0 mov.l @(disp,pc),Rn */
	IF(0x0C0773E2u); r11 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C0773E4u, 1);  /* 0C0773E2 mov.w @(r0,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C0773E6u, 1);  /* 0C0773E4 mov.l @(disp,pc),Rn */
	IF(0x0C0773E6u); { u32 t_ = r13; PR = 0x0C0773EAu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0773EAu); }  /* 0C0773E6 jsr @Rn */
L_0C0773EA: BLKS(0x0C0773EAu);
	r9 = R32(r10 + 0x24u); UPD(0x0C0773ECu, 1);  /* 0C0773EA mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C0773EC mov Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C0773F0u, 2);  /* 0C0773EE mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C0773F0 add Rm,Rn */
	r6 = 0x10000u; UPD(0x0C0773F4u, 2);  /* 0C0773F2 mov.l @(disp,pc),Rn */
	r5 = 0xA0000u; UPD(0x0C0773F6u, 1);  /* 0C0773F4 mov.l @(disp,pc),Rn */
	IF(0x0C0773F6u); { u32 t_ = r8; PR = 0x0C0773FAu; r9 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0773FAu); }  /* 0C0773F6 jsr @Rn */
L_0C0773FA: BLKS(0x0C0773FAu);
	r6 = R32(r10 + 0x28u); UPD(0x0C0773FCu, 1);  /* 0C0773FA mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0773FC add #imm,Rn */
	r6 += r0;  /* 0C0773FE add Rm,Rn */
	r3 = 0x28000u; UPD(0x0C077402u, 3);  /* 0C077400 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C077402 mov #imm,Rn */
	r0 = 0xC0A81B0u; UPD(0x0C077406u, 2);  /* 0C077404 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C077406 mov Rm,Rn */
	W32(r15, r3); UPD(0x0C07740Au, 2);  /* 0C077408 mov.l Rm,@Rn */
	{ r7 = r11; /* slot mov Rm,Rn */ UPD(0x0C07725Cu, 3); goto L_0C07725C; }  /* 0C07740A bra */
L_0C077410: BLKS(0x0C077410u);
	r1 = 0xC06F830u; UPD(0x0C077412u, 1);  /* 0C077410 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C077412 mov Rm,Rn */
	{ r5 = r9; /* slot mov Rm,Rn */ UPD(0x0C0771D6u, 4); goto L_0C0771D6; }  /* 0C077414 bra */
L_0C077420: BLKS(0x0C077420u);
	r1 = 0xC06FBD0u; UPD(0x0C077422u, 1);  /* 0C077420 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C077422 mov Rm,Rn */
	{ r5 = r9; /* slot mov Rm,Rn */ UPD(0x0C0771D6u, 4); goto L_0C0771D6; }  /* 0C077424 bra */
L_0C077430: BLKS(0x0C077430u);
	r10 = 0xC0A0670u; UPD(0x0C077432u, 1);  /* 0C077430 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C077432 mov Rm,Rn */
	IF(0x0C077434u); { u32 t_ = r10; PR = 0x0C077438u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C077438u); }  /* 0C077434 jsr @Rn */
L_0C077438: BLKS(0x0C077438u);
	T = (r0 & r0) == 0;  /* 0C077438 tst Rm,Rn */
	if (T) { UPD(0x0C07749Eu, 4); goto L_0C07749E; }  /* 0C07743A bt */
L_0C07743C: BLKS(0x0C07743Cu);
	r4 = r12;  /* 0C07743C mov Rm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C077440u, 2);  /* 0C07743E mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C077440 mov #imm,Rn */
	IF(0x0C077442u); { u32 t_ = r11; PR = 0x0C077446u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C077446u); }  /* 0C077442 jsr @Rn */
L_0C077446: BLKS(0x0C077446u);
	T = (r0 & r0) == 0;  /* 0C077446 tst Rm,Rn */
	if (T) { UPD(0x0C07749Eu, 4); goto L_0C07749E; }  /* 0C077448 bt */
L_0C07744A: BLKS(0x0C07744Au);
	r5 = 0xB4u; UPD(0x0C07744Cu, 1);  /* 0C07744A mov.w @(disp,pc),Rn */
	IF(0x0C07744Cu); MACL = r12 * r5;  /* 0C07744C mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C077450u, 3);  /* 0C07744E mov.l @(disp,pc),Rn */
	IF(0x0C077450u); r10 = MACL;  /* 0C077450 sts macl,Rn */
	r10 += r0;  /* 0C077452 add Rm,Rn */
	r2 = 0xA9u; UPD(0x0C077456u, 3);  /* 0C077454 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C077456 mov Rm,Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C07745Au, 2);  /* 0C077458 mov.l @(disp,pc),Rn */
	IF(0x0C07745Au); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07745Cu, 1);  /* 0C07745A mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C07745Eu, 1);  /* 0C07745C mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C07745E extu.b Rm,Rn */
	IF(0x0C077460u); { u32 t_ = r9; PR = 0x0C077464u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C077464u); }  /* 0C077460 jsr @Rn */
L_0C077464: BLKS(0x0C077464u);
	T = (r0 & r0) == 0;  /* 0C077464 tst Rm,Rn */
	if (T) { UPD(0x0C07749Eu, 4); goto L_0C07749E; }  /* 0C077466 bt */
L_0C077468: BLKS(0x0C077468u);
	r0 = r10;  /* 0C077468 mov Rm,Rn */
	r6 = 0x86u; UPD(0x0C07746Cu, 2);  /* 0C07746A mov.w @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C07746Eu, 1);  /* 0C07746C mov.l @(disp,pc),Rn */
	IF(0x0C07746Eu); r13 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C077470u, 1);  /* 0C07746E mov.w @(r0,Rm),Rn */
	r5 = 0xF0000u; UPD(0x0C077472u, 1);  /* 0C077470 mov.l @(disp,pc),Rn */
	r9 = 0xC058030u; UPD(0x0C077474u, 1);  /* 0C077472 mov.l @(disp,pc),Rn */
	IF(0x0C077474u); { u32 t_ = r8; PR = 0x0C077478u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C077478u); }  /* 0C077474 jsr @Rn */
L_0C077478: BLKS(0x0C077478u);
	r11 = R32(r10 + 0x24u); UPD(0x0C07747Au, 1);  /* 0C077478 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C07747A mov Rm,Rn */
	r5 = 0x140000u; UPD(0x0C07747Eu, 2);  /* 0C07747C mov.l @(disp,pc),Rn */
	IF(0x0C07747Eu); { u32 t_ = r9; PR = 0x0C077482u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C077482u); }  /* 0C07747E jsr @Rn */
L_0C077482: BLKS(0x0C077482u);
	r8 = 0xC0A81B0u; UPD(0x0C077484u, 1);  /* 0C077482 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C077484 add #imm,Rn */
	r6 = R32(r10 + 0x28u); UPD(0x0C077488u, 2);  /* 0C077486 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C077488 mov #imm,Rn */
	r3 = 0x20000u; UPD(0x0C07748Cu, 2);  /* 0C07748A mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C07748C add Rm,Rn */
	W32(r15, r3); UPD(0x0C077490u, 2);  /* 0C07748E mov.l Rm,@Rn */
	r5 = r11;  /* 0C077490 mov Rm,Rn */
	IF(0x0C077492u); { u32 t_ = r8; PR = 0x0C077496u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C077496u); }  /* 0C077492 jsr @Rn */
L_0C077496: BLKS(0x0C077496u);
	r4 = r12;  /* 0C077496 mov Rm,Rn */
	r12 = 0xC0580D0u; UPD(0x0C07749Au, 2);  /* 0C077498 mov.l @(disp,pc),Rn */
	IF(0x0C07749Au); { u32 t_ = r12; PR = 0x0C07749Eu; r15 += 0x4u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C07749Eu); }  /* 0C07749A jsr @Rn */
L_0C07749E: BLKS(0x0C07749Eu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C076D3Cu, 3); goto L_0C076D3C; }  /* 0C07749E bra */
}

void f_0C0774F0(sh3_t *c)
{
	LOCALS;
L_0C0774F0: BLKS(0x0C0774F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0774F2u, 1);  /* 0C0774F0 mov.l Rm,@-Rn */
	r4 = 0xEu;  /* 0C0774F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0774F6u, 2);  /* 0C0774F4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0774F8u, 1);  /* 0C0774F6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0774FAu, 1);  /* 0C0774F8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0774FCu, 1);  /* 0C0774FA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0774FEu, 1);  /* 0C0774FC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C077500u, 1);  /* 0C0774FE mov.l Rm,@-Rn */
	r0 = 0xC392D64u; UPD(0x0C077502u, 1);  /* 0C077500 mov.l @(disp,pc),Rn */
	IF(0x0C077502u); r15 -= 4; W32(r15, PR); UPD(0x0C077504u, 1);  /* 0C077502 sts.l pr,@-Rn */
	r2 = R32(r0); UPD(0x0C077506u, 1);  /* 0C077504 mov.l @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C077506 add #imm,Rn */
	r8 = 0xC0606C0u; UPD(0x0C07750Au, 2);  /* 0C077508 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07750A mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r12 = v_; } UPD(0x0C07750Eu, 2);  /* 0C07750C mov.w @Rm+,Rn */
	IF(0x0C07750Eu); { u32 t_ = r8; PR = 0x0C077512u; W32(r0, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C077512u); }  /* 0C07750E jsr @Rn */
L_0C077512: BLKS(0x0C077512u);
	T = (r0 & r0) == 0;  /* 0C077512 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C077530u, 4); goto L_0C077530; } UPD(0x0C077518u, 1); goto L_0C077518; }  /* 0C077514 bf/s */
L_0C077518: BLKS(0x0C077518u);
	r14 += 0x14u;  /* 0C077518 add #imm,Rn */
	r15 = r14;  /* 0C07751A mov Rm,Rn */
	IF(0x0C07751Cu); PR = R32(r15); r15 += 4; UPD(0x0C07751Eu, 3);  /* 0C07751C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C077520u, 1);  /* 0C07751E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C077522u, 1);  /* 0C077520 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C077524u, 1);  /* 0C077522 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C077526u, 1);  /* 0C077524 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C077528u, 1);  /* 0C077526 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07752Au, 1);  /* 0C077528 mov.l @Rm+,Rn */
	IF(0x0C07752Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07752A rts */
L_0C077530: BLKS(0x0C077530u);
	r1 = 0xC2755BCu; UPD(0x0C077532u, 1);  /* 0C077530 mov.l @(disp,pc),Rn */
	r11 = 0xB4u; UPD(0x0C077534u, 1);  /* 0C077532 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r1); UPD(0x0C077536u, 1);  /* 0C077534 mov.w @Rm,Rn */
	r6 = 0xC22C874u; UPD(0x0C077538u, 1);  /* 0C077536 mov.l @(disp,pc),Rn */
	IF(0x0C077538u); MACL = r5 * r11;  /* 0C077538 mul.l Rm,Rn */
	r2 = 0xC286509u; UPD(0x0C07753Cu, 3);  /* 0C07753A mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r6); UPD(0x0C07753Eu, 1);  /* 0C07753C mov.w @Rm,Rn */
	IF(0x0C07753Eu); r11 = MACL;  /* 0C07753E sts macl,Rn */
	r10 = 0xC26CD40u; UPD(0x0C077542u, 2);  /* 0C077540 mov.l @(disp,pc),Rn */
	r13 = r4 & 0xFFFF;  /* 0C077542 extu.w Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C077546u, 2);  /* 0C077544 mov.b @Rm,Rn */
	r11 += r10;  /* 0C077546 add Rm,Rn */
	W32(r11 + 0x4u, r13); UPD(0x0C07754Au, 2);  /* 0C077548 mov.l Rm,@(disp,Rn) */
	r4 = r5;  /* 0C07754A mov Rm,Rn */
	r9 = 0xC0A02D0u; UPD(0x0C07754Eu, 2);  /* 0C07754C mov.l @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C07754E mov #imm,Rn */
	r7 = 0xC3000110u; UPD(0x0C077552u, 2);  /* 0C077550 mov.l @(disp,pc),Rn */
	W32(r14, r5); UPD(0x0C077554u, 1);  /* 0C077552 mov.l Rm,@Rn */
	W32(r11, r7); UPD(0x0C077556u, 1);  /* 0C077554 mov.l Rm,@Rn */
	W32(r11 + 0xCu, r13); UPD(0x0C077558u, 1);  /* 0C077556 mov.l Rm,@(disp,Rn) */
	IF(0x0C077558u); { u32 t_ = r9; PR = 0x0C07755Cu; W32(r11 + 0x8u, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07755Cu); }  /* 0C077558 jsr @Rn */
L_0C07755C: BLKS(0x0C07755Cu);
	r2 = 0x4Cu;  /* 0C07755C mov #imm,Rn */
	IF(0x0C07755Eu); MACL = r8 * r2;  /* 0C07755E mul.l Rm,Rn */
	r0 = 0xC26CAE0u; UPD(0x0C077562u, 4);  /* 0C077560 mov.l @(disp,pc),Rn */
	r6 = 0xC392D5Eu; UPD(0x0C077564u, 1);  /* 0C077562 mov.l @(disp,pc),Rn */
	IF(0x0C077564u); r9 = MACL;  /* 0C077564 sts macl,Rn */
	r3 = 0xC21F5E2u; UPD(0x0C077568u, 2);  /* 0C077566 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C077568 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r6); UPD(0x0C07756Cu, 2);  /* 0C07756A mov.w @Rm,Rn */
	r10 = R32(r9 + 0x8u); UPD(0x0C07756Eu, 1);  /* 0C07756C mov.l @(disp,Rm),Rn */
	IF(0x0C07756Eu); r4 <<= 16;  /* 0C07756E shll16 Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C077572u, 2);  /* 0C077570 mov.w @Rm,Rn */
	r9 += 0x42u;  /* 0C077572 add #imm,Rn */
	r5 = 0xC0A1530u; UPD(0x0C077576u, 2);  /* 0C077574 mov.l @(disp,pc),Rn */
	IF(0x0C077576u); r7 <<= 16;  /* 0C077576 shll16 Rn */
	W32(r11 + 0x28u, r4); UPD(0x0C07757Au, 2);  /* 0C077578 mov.l Rm,@(disp,Rn) */
	r7 -= r10;  /* 0C07757A sub Rm,Rn */
	W32(r11 + 0x24u, r7); UPD(0x0C07757Eu, 2);  /* 0C07757C mov.l Rm,@(disp,Rn) */
	IF(0x0C07757Eu); { u32 t_ = r5; PR = 0x0C077582u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C077582u); }  /* 0C07757E jsr @Rn */
L_0C077582: BLKS(0x0C077582u);
	r0 = 0xB0u; UPD(0x0C077584u, 1);  /* 0C077582 mov.w @(disp,pc),Rn */
	r2 = r11;  /* 0C077584 mov Rm,Rn */
	IF(0x0C077586u); W8(r0 + r11, r8); UPD(0x0C077588u, 2);  /* 0C077586 mov.b Rm,@(r0,Rn) */
	T = (r12 & r12) == 0;  /* 0C077588 tst Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C07758Cu, 2);  /* 0C07758A mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C07758C add #imm,Rn */
	r1 = 0xA8u; UPD(0x0C077590u, 2);  /* 0C07758E mov.w @(disp,pc),Rn */
	IF(0x0C077590u); W8(r0 + r11, r13); UPD(0x0C077592u, 1);  /* 0C077590 mov.b Rm,@(r0,Rn) */
	r2 += r1;  /* 0C077592 add Rm,Rn */
	r2 += 0x1u;  /* 0C077594 add #imm,Rn */
	r0 += 0xFFFFFFEFu;  /* 0C077596 add #imm,Rn */
	W8(r2, r3); UPD(0x0C07759Au, 4);  /* 0C077598 mov.b Rm,@Rn */
	{ u32 c_ = T; IF(0x0C07759Cu); W8(r0 + r11, r13); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0775A2u, 3); goto L_0C0775A2; } UPD(0x0C07759Eu, 1); goto L_0C07759E; }  /* 0C07759A bt/s */
L_0C07759E: BLKS(0x0C07759Eu);
	{ r12 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0776A0u, 3); goto L_0C0776A0; }  /* 0C07759E bra */
L_0C0775A2: BLKS(0x0C0775A2u);
	r8 = 0xC2755BCu; UPD(0x0C0775A4u, 1);  /* 0C0775A2 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0775A4 mov #imm,Rn */
	r8 += 0x2u;  /* 0C0775A6 add #imm,Rn */
	W32(r14 + 0x10u, r8); UPD(0x0C0775AAu, 3);  /* 0C0775A8 mov.l Rm,@(disp,Rn) */
	r13 = 0x0u;  /* 0C0775AA mov #imm,Rn */
	W32(r14 + 0x4u, r2); UPD(0x0C0775AEu, 2);  /* 0C0775AC mov.l Rm,@(disp,Rn) */
	IF(0x0C0775AEu); ;  /* 0C0775AE nop */
	UPD(0x0C0775B0u, 1);
L_0C0775B0: BLKS(0x0C0775B0u);
	r9 = R32(r14 + 0x10u); UPD(0x0C0775B2u, 1);  /* 0C0775B0 mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r9); r9 += 2; r10 = v_; } UPD(0x0C0775B4u, 1);  /* 0C0775B2 mov.w @Rm+,Rn */
	W32(r14 + 0x10u, r9); UPD(0x0C0775B6u, 1);  /* 0C0775B4 mov.l Rm,@(disp,Rn) */
	r9 = 0xC188D3Cu; UPD(0x0C0775B8u, 1);  /* 0C0775B6 mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C0775BAu, 1);  /* 0C0775B8 mov.w @(disp,pc),Rn */
	r9 += r13;  /* 0C0775BA add Rm,Rn */
	IF(0x0C0775BCu); MACL = r10 * r8;  /* 0C0775BC mul.l Rm,Rn */
	r9 += 0x4u;  /* 0C0775BE add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r9); UPD(0x0C0775C2u, 5);  /* 0C0775C0 mov.w @Rm,Rn */
	IF(0x0C0775C2u); r8 = MACL;  /* 0C0775C2 sts macl,Rn */
	r1 = 0xC26CD40u; UPD(0x0C0775C6u, 2);  /* 0C0775C4 mov.l @(disp,pc),Rn */
	r5 += r5;  /* 0C0775C6 add Rm,Rn */
	r0 = 0xC2755BCu; UPD(0x0C0775CAu, 2);  /* 0C0775C8 mov.l @(disp,pc),Rn */
	r8 += r1;  /* 0C0775CA add Rm,Rn */
	IF(0x0C0775CCu); r2 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C0775CEu, 2);  /* 0C0775CC mov.w @(r0,Rm),Rn */
	r8 += 0x7Cu;  /* 0C0775CE add #imm,Rn */
	W16(r8, r2); UPD(0x0C0775D2u, 2);  /* 0C0775D0 mov.w Rm,@Rn */
	r0 = 0x2u;  /* 0C0775D2 mov #imm,Rn */
	IF(0x0C0775D4u); r3 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0775D6u, 2);  /* 0C0775D4 mov.w @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C0775D6 add #imm,Rn */
	W16(r8, r3); UPD(0x0C0775DAu, 2);  /* 0C0775D8 mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C0775DA add #imm,Rn */
	r6 = 0xC22C874u; UPD(0x0C0775DEu, 2);  /* 0C0775DC mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C0775DE add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r6); UPD(0x0C0775E2u, 2);  /* 0C0775E0 mov.w @Rm,Rn */
	r13 += 0x1Cu;  /* 0C0775E2 add #imm,Rn */
	r7 = R32(r9); UPD(0x0C0775E6u, 2);  /* 0C0775E4 mov.l @Rm,Rn */
	r5 = r4 & 0xFFFF;  /* 0C0775E6 extu.w Rm,Rn */
	W32(r8, r7); UPD(0x0C0775EAu, 2);  /* 0C0775E8 mov.l Rm,@Rn */
	r4 = r10;  /* 0C0775EA mov Rm,Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C0775EEu, 2);  /* 0C0775EC mov.l Rm,@(disp,Rn) */
	r0 = R32(r9 + 0x8u); UPD(0x0C0775F0u, 1);  /* 0C0775EE mov.l @(disp,Rm),Rn */
	r9 += 0x14u;  /* 0C0775F0 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0775F4u, 2);  /* 0C0775F2 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C0775F6u, 1);  /* 0C0775F4 mov.w @Rm,Rn */
	r0 = r8;  /* 0C0775F6 mov Rm,Rn */
	r2 = 0x8Au; UPD(0x0C0775FAu, 2);  /* 0C0775F8 mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFFECu;  /* 0C0775FA add #imm,Rn */
	IF(0x0C0775FCu); W16(r0 + r2, r3); UPD(0x0C0775FEu, 2);  /* 0C0775FC mov.w Rm,@(r0,Rn) */
	r2 += 0xFFFFFFFCu;  /* 0C0775FE add #imm,Rn */
	IF(0x0C077600u); W16(r0 + r2, r3); UPD(0x0C077602u, 2);  /* 0C077600 mov.w Rm,@(r0,Rn) */
	r0 = r3;  /* 0C077602 mov Rm,Rn */
	r0 += 0x8u;  /* 0C077604 add #imm,Rn */
	r7 = 0xC0A02D0u; UPD(0x0C077608u, 3);  /* 0C077606 mov.l @(disp,pc),Rn */
	IF(0x0C077608u); r0 >>= 2;  /* 0C077608 shlr2 Rn */
	IF(0x0C07760Au); r0 >>= 2;  /* 0C07760A shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C07760C and #imm,r0 */
	IF(0x0C07760Eu); { u32 t_ = r7; PR = 0x0C077612u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C077612u); }  /* 0C07760E jsr @Rn */
L_0C077612: BLKS(0x0C077612u);
	r6 = R32(r11 + 0x24u); UPD(0x0C077614u, 1);  /* 0C077612 mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x28u); UPD(0x0C077616u, 1);  /* 0C077614 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C077618u, 1);  /* 0C077616 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r4); UPD(0x0C07761Au, 1);  /* 0C077618 mov.l Rm,@(disp,Rn) */
	r5 = R32(r9 + 0xCu); UPD(0x0C07761Cu, 1);  /* 0C07761A mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C07761C mov Rm,Rn */
	W32(r8 + 0x2Cu, r5); UPD(0x0C077620u, 2);  /* 0C07761E mov.l Rm,@(disp,Rn) */
	r3 = R32(r9 + 0x10u); UPD(0x0C077622u, 1);  /* 0C077620 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x30u, r3); UPD(0x0C077624u, 1);  /* 0C077622 mov.l Rm,@(disp,Rn) */
	r2 = 0xC0A1530u; UPD(0x0C077626u, 1);  /* 0C077624 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C077626 add #imm,Rn */
	r0 = R32(r9 + 0x18u); UPD(0x0C07762Au, 2);  /* 0C077628 mov.l @(disp,Rm),Rn */
	IF(0x0C07762Au); { u32 t_ = r2; PR = 0x0C07762Eu; W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C07762Eu); }  /* 0C07762A jsr @Rn */
L_0C07762E: BLKS(0x0C07762Eu);
	r0 = 0xB0u; UPD(0x0C077630u, 1);  /* 0C07762E mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C077630 add #imm,Rn */
	IF(0x0C077632u); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C077634u, 2);  /* 0C077632 mov.b @(r0,Rm),Rn */
	r9 = 0x0u;  /* 0C077634 mov #imm,Rn */
	IF(0x0C077636u); W8(r0 + r8, r10); UPD(0x0C077638u, 2);  /* 0C077636 mov.b Rm,@(r0,Rn) */
	r3 = r12;  /* 0C077638 mov Rm,Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C07763Cu, 2);  /* 0C07763A mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C07763C mov Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r7); UPD(0x0C077640u, 2);  /* 0C07763E mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C077640 add #imm,Rn */
	r6 = 0xADu; UPD(0x0C077644u, 2);  /* 0C077642 mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C077644 add #imm,Rn */
	IF(0x0C077646u); W8(r0 + r6, r4); UPD(0x0C077648u, 2);  /* 0C077646 mov.b Rm,@(r0,Rn) */
	r12 = (u32)(s32)(s16)r3;  /* 0C077648 exts.w Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C07764Cu, 2);  /* 0C07764A mov.w @(disp,pc),Rn */
	r5 = 0xA8u; UPD(0x0C07764Eu, 1);  /* 0C07764C mov.w @(disp,pc),Rn */
	IF(0x0C07764Eu); W32(r0 + r8, r9); UPD(0x0C077650u, 1);  /* 0C07764E mov.l Rm,@(r0,Rn) */
	r5 += r8;  /* 0C077650 add Rm,Rn */
	r5 += 0x1u;  /* 0C077652 add #imm,Rn */
	r0 = 0xCu;  /* 0C077654 mov #imm,Rn */
	T = (s32)r12 > (s32)r0;  /* 0C077656 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W8(r5, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0775B0u, 7); goto L_0C0775B0; } UPD(0x0C07765Cu, 1); goto L_0C07765C; }  /* 0C077658 bf/s */
L_0C07765C: BLKS(0x0C07765Cu);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C077518u, 3); goto L_0C077518; }  /* 0C07765C bra */
L_0C0776A0: BLKS(0x0C0776A0u);
	r11 = 0xB4u; UPD(0x0C0776A2u, 1);  /* 0C0776A0 mov.w @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C0776A4u, 1);  /* 0C0776A2 mov.l @Rm,Rn */
	IF(0x0C0776A4u); MACL = r0 * r11;  /* 0C0776A4 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C0776A8u, 3);  /* 0C0776A6 mov.l @(disp,pc),Rn */
	IF(0x0C0776A8u); r11 = MACL;  /* 0C0776A8 sts macl,Rn */
	r10 = 0xA8u; UPD(0x0C0776ACu, 2);  /* 0C0776AA mov.w @(disp,pc),Rn */
	r11 += r13;  /* 0C0776AC add Rm,Rn */
	r10 += r11;  /* 0C0776AE add Rm,Rn */
	r13 = 0xC2755BCu; UPD(0x0C0776B2u, 3);  /* 0C0776B0 mov.l @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C0776B2 add #imm,Rn */
	W32(r14 + 0xCu, r12); UPD(0x0C0776B6u, 2);  /* 0C0776B4 mov.l Rm,@(disp,Rn) */
	r13 += 0x2u;  /* 0C0776B6 add #imm,Rn */
	W32(r14 + 0x8u, r10); UPD(0x0C0776BAu, 2);  /* 0C0776B8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0776BAu); ;  /* 0C0776BA nop */
	UPD(0x0C0776BCu, 1);
L_0C0776BC: BLKS(0x0C0776BCu);
	r0 = R32(r14 + 0xCu); UPD(0x0C0776BEu, 1);  /* 0C0776BC mov.l @(disp,Rm),Rn */
	r9 = 0xC188EA8u; UPD(0x0C0776C0u, 1);  /* 0C0776BE mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r10 = v_; } UPD(0x0C0776C2u, 1);  /* 0C0776C0 mov.w @Rm+,Rn */
	r9 += r0;  /* 0C0776C2 add Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0776C6u, 2);  /* 0C0776C4 mov.w @(disp,pc),Rn */
	r9 += 0x4u;  /* 0C0776C6 add #imm,Rn */
	IF(0x0C0776C8u); MACL = r10 * r8;  /* 0C0776C8 mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C0776CCu, 4);  /* 0C0776CA mov.w @Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C0776CEu, 1);  /* 0C0776CC mov.l @(disp,pc),Rn */
	IF(0x0C0776CEu); r8 = MACL;  /* 0C0776CE sts macl,Rn */
	r0 = 0xC2755BCu; UPD(0x0C0776D2u, 2);  /* 0C0776D0 mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C0776D2 add Rm,Rn */
	IF(0x0C0776D4u); r2 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C0776D6u, 2);  /* 0C0776D4 mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C0776D6 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C0776D8 add #imm,Rn */
	W16(r8, r2); UPD(0x0C0776DCu, 3);  /* 0C0776DA mov.w Rm,@Rn */
	r0 = 0x2u;  /* 0C0776DC mov #imm,Rn */
	IF(0x0C0776DEu); r4 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0776E0u, 2);  /* 0C0776DE mov.w @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C0776E0 add #imm,Rn */
	W16(r8, r4); UPD(0x0C0776E4u, 2);  /* 0C0776E2 mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C0776E4 add #imm,Rn */
	r5 = 0xC22C874u; UPD(0x0C0776E8u, 2);  /* 0C0776E6 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C0776E8 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r5); UPD(0x0C0776ECu, 2);  /* 0C0776EA mov.w @Rm,Rn */
	r3 = R32(r9); UPD(0x0C0776EEu, 1);  /* 0C0776EC mov.l @Rm,Rn */
	r6 = r7 & 0xFFFF;  /* 0C0776EE extu.w Rm,Rn */
	W32(r8, r3); UPD(0x0C0776F2u, 2);  /* 0C0776F0 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C0776F4u, 1);  /* 0C0776F2 mov.l Rm,@(disp,Rn) */
	r0 = R32(r9 + 0x8u); UPD(0x0C0776F6u, 1);  /* 0C0776F4 mov.l @(disp,Rm),Rn */
	r9 += 0x14u;  /* 0C0776F6 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0776FAu, 2);  /* 0C0776F8 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0776FCu, 1);  /* 0C0776FA mov.w @Rm,Rn */
	r0 = r8;  /* 0C0776FC mov Rm,Rn */
	r2 = 0x8Au; UPD(0x0C077700u, 2);  /* 0C0776FE mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFFECu;  /* 0C077700 add #imm,Rn */
	IF(0x0C077702u); W16(r0 + r2, r4); UPD(0x0C077704u, 2);  /* 0C077702 mov.w Rm,@(r0,Rn) */
	r2 += 0xFFFFFFFCu;  /* 0C077704 add #imm,Rn */
	IF(0x0C077706u); W16(r0 + r2, r4); UPD(0x0C077708u, 2);  /* 0C077706 mov.w Rm,@(r0,Rn) */
	r0 = r4;  /* 0C077708 mov Rm,Rn */
	r0 += 0x8u;  /* 0C07770A add #imm,Rn */
	r3 = 0xC0A02D0u; UPD(0x0C07770Eu, 3);  /* 0C07770C mov.l @(disp,pc),Rn */
	IF(0x0C07770Eu); r0 >>= 2;  /* 0C07770E shlr2 Rn */
	IF(0x0C077710u); r0 >>= 2;  /* 0C077710 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C077712 and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C077716u, 4);  /* 0C077714 mov.l Rm,@(disp,Rn) */
	IF(0x0C077716u); { u32 t_ = r3; PR = 0x0C07771Au; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07771Au); }  /* 0C077716 jsr @Rn */
L_0C07771A: BLKS(0x0C07771Au);
	r5 = R32(r11 + 0x24u); UPD(0x0C07771Cu, 1);  /* 0C07771A mov.l @(disp,Rm),Rn */
	r7 = R32(r11 + 0x28u); UPD(0x0C07771Eu, 1);  /* 0C07771C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C077720u, 1);  /* 0C07771E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r7); UPD(0x0C077722u, 1);  /* 0C077720 mov.l Rm,@(disp,Rn) */
	r6 = R32(r9 + 0xCu); UPD(0x0C077724u, 1);  /* 0C077722 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r6); UPD(0x0C077726u, 1);  /* 0C077724 mov.l Rm,@(disp,Rn) */
	r4 = R32(r9 + 0x10u); UPD(0x0C077728u, 1);  /* 0C077726 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x30u, r4); UPD(0x0C07772Au, 1);  /* 0C077728 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C07772A mov Rm,Rn */
	r0 = R32(r9 + 0x18u); UPD(0x0C07772Eu, 2);  /* 0C07772C mov.l @(disp,Rm),Rn */
	r8 += 0x50u;  /* 0C07772E add #imm,Rn */
	r10 = 0xC0A1530u; UPD(0x0C077732u, 2);  /* 0C077730 mov.l @(disp,pc),Rn */
	IF(0x0C077732u); { u32 t_ = r10; PR = 0x0C077736u; W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C077736u); }  /* 0C077732 jsr @Rn */
L_0C077736: BLKS(0x0C077736u);
	r0 = 0xB0u; UPD(0x0C077738u, 1);  /* 0C077736 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C077738 add #imm,Rn */
	IF(0x0C07773Au); r2 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C07773Cu, 2);  /* 0C07773A mov.b @(r0,Rm),Rn */
	r6 = r12;  /* 0C07773C mov Rm,Rn */
	IF(0x0C07773Eu); W8(r0 + r8, r2); UPD(0x0C077740u, 2);  /* 0C07773E mov.b Rm,@(r0,Rn) */
	r7 = 0x0u;  /* 0C077740 mov #imm,Rn */
	r9 = R32(r14 + 0x8u); UPD(0x0C077744u, 2);  /* 0C077742 mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C077744 mov Rm,Rn */
	r5 = 0xA8u; UPD(0x0C077748u, 2);  /* 0C077746 mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C077748 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C07774Cu, 2);  /* 0C07774A mov.b @Rm,Rn */
	r5 += r8;  /* 0C07774C add Rm,Rn */
	r1 = 0xADu; UPD(0x0C077750u, 2);  /* 0C07774E mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C077750 add #imm,Rn */
	r5 += 0x1u;  /* 0C077752 add #imm,Rn */
	IF(0x0C077754u); W8(r0 + r1, r3); UPD(0x0C077756u, 3);  /* 0C077754 mov.b Rm,@(r0,Rn) */
	r4 = 0xCu;  /* 0C077756 mov #imm,Rn */
	W8(r5, r3); UPD(0x0C07775Au, 2);  /* 0C077758 mov.b Rm,@Rn */
	r12 = R32(r14 + 0xCu); UPD(0x0C07775Cu, 1);  /* 0C07775A mov.l @(disp,Rm),Rn */
	r12 += 0x1Cu;  /* 0C07775C add #imm,Rn */
	r0 = 0x8Cu; UPD(0x0C077760u, 2);  /* 0C07775E mov.w @(disp,pc),Rn */
	W32(r14 + 0xCu, r12); UPD(0x0C077762u, 1);  /* 0C077760 mov.l Rm,@(disp,Rn) */
	r12 = (u32)(s32)(s16)r6;  /* 0C077762 exts.w Rm,Rn */
	T = (s32)r12 > (s32)r4;  /* 0C077764 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C077768u); W32(r0 + r8, r7); /* slot mov.l Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0776BCu, 5); goto L_0C0776BC; } UPD(0x0C07776Au, 1); goto L_0C07776A; }  /* 0C077766 bf/s */
L_0C07776A: BLKS(0x0C07776Au);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C077518u, 3); goto L_0C077518; }  /* 0C07776A bra */
}

void f_0C0777A0(sh3_t *c)
{
	LOCALS;
L_0C0777A0: BLKS(0x0C0777A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0777A2u, 1);  /* 0C0777A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0777A4u, 1);  /* 0C0777A2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0777A4 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0777A8u, 2);  /* 0C0777A6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0777AAu, 1);  /* 0C0777A8 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0777ACu, 1);  /* 0C0777AA mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0777AEu, 1);  /* 0C0777AC mov.l Rm,@-Rn */
	IF(0x0C0777AEu); MACL = r8 * r2;  /* 0C0777AE mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0777B2u, 3);  /* 0C0777B0 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C0777B4u, 1);  /* 0C0777B2 mov.l @(disp,pc),Rn */
	IF(0x0C0777B4u); r12 = MACL;  /* 0C0777B4 sts macl,Rn */
	IF(0x0C0777B6u); r15 -= 4; W32(r15, PR); UPD(0x0C0777B8u, 2);  /* 0C0777B6 sts.l pr,@-Rn */
	r12 += r0;  /* 0C0777B8 add Rm,Rn */
	r2 = R32(r12 + 0x8u); UPD(0x0C0777BCu, 2);  /* 0C0777BA mov.l @(disp,Rm),Rn */
	r0 = 0x6u;  /* 0C0777BC mov #imm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0777BE add #imm,Rn */
	T = r2 > r0;  /* 0C0777C0 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0777CAu, 6); goto L_0C0777CA; } goto L_0C0777C6; }  /* 0C0777C2 bf/s */
L_0C0777C6: BLKS(0x0C0777C6u);
	{ r10 = R32(r12 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C077930u, 4); goto L_0C077930; }  /* 0C0777C6 bra */
L_0C0777CA: BLKS(0x0C0777CAu);
	r0 = 0xC0777DCu;  /* 0C0777CA mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0777CC add Rm,Rn */
	IF(0x0C0777CEu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0777D0u, 3);  /* 0C0777CE mov.w @(r0,Rm),Rn */
	IF(0x0C0777D0u); { u32 tv_ = (r3 + 0x0C0777D4u); u32 t_ = PHYS(tv_); IF(0x0C0777D2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0777D0 braf Rn */
L_0C077846: BLKS(0x0C077846u);
	r15 = r14;  /* 0C077846 mov Rm,Rn */
	IF(0x0C077848u); PR = R32(r15); r15 += 4; UPD(0x0C07784Au, 2);  /* 0C077848 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07784Cu, 1);  /* 0C07784A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07784Eu, 1);  /* 0C07784C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C077850u, 1);  /* 0C07784E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C077852u, 1);  /* 0C077850 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C077854u, 1);  /* 0C077852 mov.l @Rm+,Rn */
	IF(0x0C077854u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C077854 rts */
L_0C077930: BLKS(0x0C077930u);
	r15 += 0xFFFFFFF8u;  /* 0C077930 add #imm,Rn */
	r7 = 0x80000u; UPD(0x0C077934u, 2);  /* 0C077932 mov.l @(disp,pc),Rn */
	r5 = 0xEu;  /* 0C077934 mov #imm,Rn */
	r10 += r7;  /* 0C077936 add Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C07793Au, 3);  /* 0C077938 mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C07793A mov Rm,Rn */
	r9 = 0xFFC60000u; UPD(0x0C07793Eu, 2);  /* 0C07793C mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C07793E add Rm,Rn */
	r9 = 0xB0u; UPD(0x0C077942u, 2);  /* 0C077940 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C077942 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C077946u, 2);  /* 0C077944 mov.b @Rm,Rn */
	r8 = r2 & 0xFF;  /* 0C077946 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C07794Au, 2);  /* 0C077948 mov.l Rm,@Rn */
	r8 = 0xA9u; UPD(0x0C07794Cu, 1);  /* 0C07794A mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C07794C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C077950u, 2);  /* 0C07794E mov.b @Rm,Rn */
	r11 = r0 & 0xFF;  /* 0C077950 extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C077954u, 2);  /* 0C077952 mov.l Rm,@(disp,Rn) */
	r11 = 0xC0AB240u; UPD(0x0C077956u, 1);  /* 0C077954 mov.l @(disp,pc),Rn */
	IF(0x0C077956u); { u32 t_ = r11; PR = 0x0C07795Au; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07795Au); }  /* 0C077956 jsr @Rn */
L_0C07795A: BLKS(0x0C07795Au);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C07795Cu, 1);  /* 0C07795A mov.b @Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C07795Eu, 1);  /* 0C07795C mov.l @(disp,Rm),Rn */
	r4 = r6 & 0xFF;  /* 0C07795E extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C077962u, 2);  /* 0C077960 mov.l Rm,@Rn */
	r6 = r10;  /* 0C077962 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C077966u, 2);  /* 0C077964 mov.b @Rm,Rn */
	r5 = 0xFFE30000u; UPD(0x0C077968u, 1);  /* 0C077966 mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFF;  /* 0C077968 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C07796Cu, 2);  /* 0C07796A mov.l Rm,@(disp,Rn) */
	r7 += r5;  /* 0C07796C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C077970u, 2);  /* 0C07796E mov.l @Rm,Rn */
	IF(0x0C077970u); { u32 t_ = r11; PR = 0x0C077974u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C077974u); }  /* 0C077970 jsr @Rn */
L_0C077974: BLKS(0x0C077974u);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C077976u, 1);  /* 0C077974 mov.b @Rm,Rn */
	r5 = r0 & 0xFF;  /* 0C077976 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C07797Au, 2);  /* 0C077978 mov.l Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C07797Cu, 1);  /* 0C07797A mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C07797C mov #imm,Rn */
	r7 = r6 & 0xFF;  /* 0C07797E extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C077982u, 3);  /* 0C077980 mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C077982 mov Rm,Rn */
	r4 = R32(r12); UPD(0x0C077986u, 2);  /* 0C077984 mov.l @Rm,Rn */
	IF(0x0C077986u); { u32 t_ = r11; PR = 0x0C07798Au; r7 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07798Au); }  /* 0C077986 jsr @Rn */
L_0C07798A: BLKS(0x0C07798Au);
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C07798Cu, 1);  /* 0C07798A mov.b @Rm,Rn */
	r6 = r10;  /* 0C07798C mov Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C077990u, 2);  /* 0C07798E mov.l @(disp,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C077990 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C077994u, 2);  /* 0C077992 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C077996u, 1);  /* 0C077994 mov.b @Rm,Rn */
	r4 = 0x1D0000u; UPD(0x0C077998u, 1);  /* 0C077996 mov.l @(disp,pc),Rn */
	r5 = r0 & 0xFF;  /* 0C077998 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07799Cu, 2);  /* 0C07799A mov.l Rm,@(disp,Rn) */
	r7 += r4;  /* 0C07799C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C0779A0u, 2);  /* 0C07799E mov.l @Rm,Rn */
	IF(0x0C0779A0u); { u32 t_ = r11; PR = 0x0C0779A4u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0779A4u); }  /* 0C0779A0 jsr @Rn */
L_0C0779A4: BLKS(0x0C0779A4u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C0779A6u, 1);  /* 0C0779A4 mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C0779A6 mov #imm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C0779AAu, 2);  /* 0C0779A8 mov.l @(disp,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C0779AA extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0779AEu, 2);  /* 0C0779AC mov.l Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C0779B0u, 1);  /* 0C0779AE mov.b @Rm,Rn */
	r6 = 0x3A0000u; UPD(0x0C0779B2u, 1);  /* 0C0779B0 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0779B2 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0779B6u, 2);  /* 0C0779B4 mov.l Rm,@(disp,Rn) */
	r7 += r6;  /* 0C0779B6 add Rm,Rn */
	r6 = r10;  /* 0C0779B8 mov Rm,Rn */
	IF(0x0C0779BAu); { u32 t_ = r11; PR = 0x0C0779BEu; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0779BEu); }  /* 0C0779BA jsr @Rn */
L_0C0779BE: BLKS(0x0C0779BEu);
	r5 = 0xA5u; UPD(0x0C0779C0u, 1);  /* 0C0779BE mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C0779C0 mov Rm,Rn */
	IF(0x0C0779C2u); r10 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0779C4u, 2);  /* 0C0779C2 mov.b @(r0,Rm),Rn */
	r15 += 0x8u;  /* 0C0779C4 add #imm,Rn */
	r6 = 0xC189014u; UPD(0x0C0779C8u, 2);  /* 0C0779C6 mov.l @(disp,pc),Rn */
	IF(0x0C0779C8u); r10 <<= 2;  /* 0C0779C8 shll2 Rn */
	r5 = R32(r12 + 0x24u); UPD(0x0C0779CCu, 2);  /* 0C0779CA mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C0779CC mov Rm,Rn */
	r7 = 0x40000u; UPD(0x0C0779D0u, 2);  /* 0C0779CE mov.l @(disp,pc),Rn */
	r8 = 0xC06CE70u; UPD(0x0C0779D2u, 1);  /* 0C0779D0 mov.l @(disp,pc),Rn */
	r5 += r7;  /* 0C0779D2 add Rm,Rn */
	IF(0x0C0779D4u); r4 = R32(r0 + r6); UPD(0x0C0779D6u, 2);  /* 0C0779D4 mov.l @(r0,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C0779D8u, 1);  /* 0C0779D6 mov.b @Rm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C0779DAu, 1);  /* 0C0779D8 mov.l @(disp,Rm),Rn */
	IF(0x0C0779DAu); { u32 t_ = r8; PR = 0x0C0779DEu; r7 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C0779DEu); }  /* 0C0779DA jsr @Rn */
L_0C0779DE: BLKS(0x0C0779DEu);
	r4 = 0x0u;  /* 0C0779DE mov #imm,Rn */
	{ W32(r12, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C077846u, 4); goto L_0C077846; }  /* 0C0779E0 bra */
}

void f_0C0777F0(sh3_t *c)
{
	LOCALS;
L_0C0777F0: BLKS(0x0C0777F0u);
	r10 = 0xB4u; UPD(0x0C0777F2u, 1);  /* 0C0777F0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0777F2 add #imm,Rn */
	IF(0x0C0777F4u); MACL = r8 * r10;  /* 0C0777F4 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C0777F8u, 4);  /* 0C0777F6 mov.l @(disp,pc),Rn */
	IF(0x0C0777F8u); r9 = MACL;  /* 0C0777F8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0777FCu, 2);  /* 0C0777FA mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C0777FC add Rm,Rn */
	IF(0x0C0777FEu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C077800u, 2);  /* 0C0777FE mov.b @(r0,Rm),Rn */
	r6 = r5 & 0xFF;  /* 0C077800 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C077804u, 2);  /* 0C077802 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C077804 add #imm,Rn */
	IF(0x0C077806u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C077808u, 2);  /* 0C077806 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C077808 mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C07780A extu.b Rm,Rn */
	r12 = 0xC0AC800u; UPD(0x0C07780Eu, 3);  /* 0C07780C mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C077810u, 1);  /* 0C07780E mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C077812u, 1);  /* 0C077810 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C077814u, 1);  /* 0C077812 mov.l @(disp,Rm),Rn */
	IF(0x0C077814u); { u32 t_ = r12; PR = 0x0C077818u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C077818u); }  /* 0C077814 jsr @Rn */
L_0C077818: BLKS(0x0C077818u);
	r12 = 0xC0A03F0u; UPD(0x0C07781Au, 1);  /* 0C077818 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C07781A mov Rm,Rn */
	IF(0x0C07781Cu); { u32 t_ = r12; PR = 0x0C077820u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C077820u); }  /* 0C07781C jsr @Rn */
L_0C077820: BLKS(0x0C077820u);
	IF(0x0C077820u); T = (s32)r0 >= 0;  /* 0C077820 cmp/pz Rn */
	{ u32 c_ = !T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077842u, 4); goto L_0C077842; } goto L_0C077826; }  /* 0C077822 bf/s */
L_0C077826: BLKS(0x0C077826u);
	r12 = 0xC06CD90u; UPD(0x0C077828u, 2);  /* 0C077826 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C077828 mov #imm,Rn */
	r5 = r0;  /* 0C07782A mov Rm,Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C07782Eu, 3);  /* 0C07782C mov.l @(disp,Rm),Rn */
	IF(0x0C07782Eu); { u32 t_ = r12; PR = 0x0C077832u; r7 = R32(r9 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CD90, 0x0C06CD90u, 0x0C077832u); }  /* 0C07782E jsr @Rn */
L_0C077832: BLKS(0x0C077832u);
	IF(0x0C077832u); MACL = r8 * r10;  /* 0C077832 mul.l Rm,Rn */
	r0 = 0xA5u; UPD(0x0C077836u, 3);  /* 0C077834 mov.w @(disp,pc),Rn */
	IF(0x0C077836u); r10 = MACL;  /* 0C077836 sts macl,Rn */
	r10 += r11;  /* 0C077838 add Rm,Rn */
	r10 += r0;  /* 0C07783A add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r10); UPD(0x0C07783Eu, 4);  /* 0C07783C mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C07783E add #imm,Rn */
	W8(r10, r11); UPD(0x0C077842u, 2);  /* 0C077840 mov.b Rm,@Rn */
L_0C077842: BLKS(0x0C077842u);
	r4 = 0x0u;  /* 0C077842 mov #imm,Rn */
	W32(r9, r4); UPD(0x0C077846u, 2);  /* 0C077844 mov.l Rm,@Rn */
	r15 = r14;  /* 0C077846 mov Rm,Rn */
	IF(0x0C077848u); PR = R32(r15); r15 += 4; UPD(0x0C07784Au, 2);  /* 0C077848 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07784Cu, 1);  /* 0C07784A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07784Eu, 1);  /* 0C07784C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C077850u, 1);  /* 0C07784E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C077852u, 1);  /* 0C077850 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C077854u, 1);  /* 0C077852 mov.l @Rm+,Rn */
	IF(0x0C077854u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C077854 rts */
}

void f_0C077860(sh3_t *c)
{
	LOCALS;
	goto L_0C077860;
L_0C077846: BLKS(0x0C077846u);
	r15 = r14;  /* 0C077846 mov Rm,Rn */
	IF(0x0C077848u); PR = R32(r15); r15 += 4; UPD(0x0C07784Au, 2);  /* 0C077848 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07784Cu, 1);  /* 0C07784A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07784Eu, 1);  /* 0C07784C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C077850u, 1);  /* 0C07784E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C077852u, 1);  /* 0C077850 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C077854u, 1);  /* 0C077852 mov.l @Rm+,Rn */
	IF(0x0C077854u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C077854 rts */
L_0C077860: BLKS(0x0C077860u);
	r6 = 0xB4u; UPD(0x0C077862u, 1);  /* 0C077860 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C077862 add #imm,Rn */
	IF(0x0C077864u); MACL = r8 * r6;  /* 0C077864 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C077868u, 4);  /* 0C077866 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C077868 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C07786Cu, 2);  /* 0C07786A mov.w @(disp,pc),Rn */
	IF(0x0C07786Cu); r8 = MACL;  /* 0C07786C sts macl,Rn */
	r8 += r4;  /* 0C07786E add Rm,Rn */
	IF(0x0C077870u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C077872u, 3);  /* 0C077870 mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C077872 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C077876u, 2);  /* 0C077874 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C077876 add #imm,Rn */
	IF(0x0C077878u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07787Au, 2);  /* 0C077878 mov.b @(r0,Rm),Rn */
	r2 = r9 & 0xFF;  /* 0C07787A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C07787Eu, 2);  /* 0C07787C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C077880u, 1);  /* 0C07787E mov.l @Rm,Rn */
	r11 = 0xC0AB240u; UPD(0x0C077882u, 1);  /* 0C077880 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C077882 mov #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C077886u, 2);  /* 0C077884 mov.l @(disp,Rm),Rn */
	IF(0x0C077886u); { u32 t_ = r11; PR = 0x0C07788Au; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07788Au); }  /* 0C077886 jsr @Rn */
L_0C07788A: BLKS(0x0C07788Au);
	W32(r8, r10); UPD(0x0C07788Cu, 1);  /* 0C07788A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C077846u, 3); goto L_0C077846; }  /* 0C07788C bra */
}

void f_0C077890(sh3_t *c)
{
	LOCALS;
	goto L_0C077890;
L_0C077842: BLKS(0x0C077842u);
	r4 = 0x0u;  /* 0C077842 mov #imm,Rn */
	W32(r9, r4); UPD(0x0C077846u, 2);  /* 0C077844 mov.l Rm,@Rn */
	r15 = r14;  /* 0C077846 mov Rm,Rn */
	IF(0x0C077848u); PR = R32(r15); r15 += 4; UPD(0x0C07784Au, 2);  /* 0C077848 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07784Cu, 1);  /* 0C07784A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07784Eu, 1);  /* 0C07784C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C077850u, 1);  /* 0C07784E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C077852u, 1);  /* 0C077850 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C077854u, 1);  /* 0C077852 mov.l @Rm+,Rn */
	IF(0x0C077854u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C077854 rts */
L_0C077890: BLKS(0x0C077890u);
	r10 = 0xB4u; UPD(0x0C077892u, 1);  /* 0C077890 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C077892 add #imm,Rn */
	IF(0x0C077894u); MACL = r8 * r10;  /* 0C077894 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C077898u, 4);  /* 0C077896 mov.l @(disp,pc),Rn */
	IF(0x0C077898u); r9 = MACL;  /* 0C077898 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C07789Cu, 2);  /* 0C07789A mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C07789C add Rm,Rn */
	IF(0x0C07789Eu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0778A0u, 2);  /* 0C07789E mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C0778A0 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0778A4u, 2);  /* 0C0778A2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0778A4 add #imm,Rn */
	IF(0x0C0778A6u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0778A8u, 2);  /* 0C0778A6 mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C0778A8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0778ACu, 2);  /* 0C0778AA mov.l Rm,@(disp,Rn) */
	r12 = 0xC0AC800u; UPD(0x0C0778AEu, 1);  /* 0C0778AC mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0778AE mov #imm,Rn */
	r4 = R32(r9); UPD(0x0C0778B2u, 2);  /* 0C0778B0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0778B4u, 1);  /* 0C0778B2 mov.l @(disp,Rm),Rn */
	IF(0x0C0778B4u); { u32 t_ = r12; PR = 0x0C0778B8u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C0778B8u); }  /* 0C0778B4 jsr @Rn */
L_0C0778B8: BLKS(0x0C0778B8u);
	r4 = r8;  /* 0C0778B8 mov Rm,Rn */
	r8 = 0xC0A03F0u; UPD(0x0C0778BCu, 2);  /* 0C0778BA mov.l @(disp,pc),Rn */
	IF(0x0C0778BCu); { u32 t_ = r8; PR = 0x0C0778C0u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0778C0u); }  /* 0C0778BC jsr @Rn */
L_0C0778C0: BLKS(0x0C0778C0u);
	IF(0x0C0778C0u); T = (s32)r0 >= 0;  /* 0C0778C0 cmp/pz Rn */
	{ u32 c_ = !T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077842u, 4); goto L_0C077842; } goto L_0C0778C6; }  /* 0C0778C2 bf/s */
L_0C0778C6: BLKS(0x0C0778C6u);
	r12 = 0xC06CD90u; UPD(0x0C0778C8u, 2);  /* 0C0778C6 mov.l @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C0778C8 mov #imm,Rn */
	r5 = r0;  /* 0C0778CA mov Rm,Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C0778CEu, 3);  /* 0C0778CC mov.l @(disp,Rm),Rn */
	IF(0x0C0778CEu); { u32 t_ = r12; PR = 0x0C0778D2u; r7 = R32(r9 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CD90, 0x0C06CD90u, 0x0C0778D2u); }  /* 0C0778CE jsr @Rn */
L_0C0778D2: BLKS(0x0C0778D2u);
	IF(0x0C0778D2u); MACL = r8 * r10;  /* 0C0778D2 mul.l Rm,Rn */
	r0 = 0xA5u; UPD(0x0C0778D6u, 3);  /* 0C0778D4 mov.w @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C0778D6 mov #imm,Rn */
	IF(0x0C0778D8u); r10 = MACL;  /* 0C0778D8 sts macl,Rn */
	r10 += r11;  /* 0C0778DA add Rm,Rn */
	r11 = 0xC050D70u; UPD(0x0C0778DEu, 4);  /* 0C0778DC mov.l @(disp,pc),Rn */
	IF(0x0C0778DEu); { u32 t_ = r11; PR = 0x0C0778E2u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0778E2u); }  /* 0C0778DE jsr @Rn */
L_0C0778E2: BLKS(0x0C0778E2u);
	{ W8(r10, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C077842u, 3); goto L_0C077842; }  /* 0C0778E2 bra */
}

void f_0C0778F0(sh3_t *c)
{
	LOCALS;
	goto L_0C0778F0;
L_0C077846: BLKS(0x0C077846u);
	r15 = r14;  /* 0C077846 mov Rm,Rn */
	IF(0x0C077848u); PR = R32(r15); r15 += 4; UPD(0x0C07784Au, 2);  /* 0C077848 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07784Cu, 1);  /* 0C07784A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07784Eu, 1);  /* 0C07784C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C077850u, 1);  /* 0C07784E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C077852u, 1);  /* 0C077850 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C077854u, 1);  /* 0C077852 mov.l @Rm+,Rn */
	IF(0x0C077854u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C077854 rts */
L_0C077880: BLKS(0x0C077880u);
	r11 = 0xC0AB240u; UPD(0x0C077882u, 1);  /* 0C077880 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C077882 mov #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C077886u, 2);  /* 0C077884 mov.l @(disp,Rm),Rn */
	IF(0x0C077886u); { u32 t_ = r11; PR = 0x0C07788Au; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07788Au); }  /* 0C077886 jsr @Rn */
L_0C07788A: BLKS(0x0C07788Au);
	W32(r8, r10); UPD(0x0C07788Cu, 1);  /* 0C07788A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C077846u, 3); goto L_0C077846; }  /* 0C07788C bra */
L_0C0778F0: BLKS(0x0C0778F0u);
	r3 = 0xB4u; UPD(0x0C0778F2u, 1);  /* 0C0778F0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0778F2 add #imm,Rn */
	IF(0x0C0778F4u); MACL = r8 * r3;  /* 0C0778F4 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0778F8u, 4);  /* 0C0778F6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0778FAu, 1);  /* 0C0778F8 mov.w @(disp,pc),Rn */
	IF(0x0C0778FAu); r8 = MACL;  /* 0C0778FA sts macl,Rn */
	r8 += r7;  /* 0C0778FC add Rm,Rn */
	IF(0x0C0778FEu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C077900u, 3);  /* 0C0778FE mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C077900 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C077904u, 2);  /* 0C077902 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C077904 add #imm,Rn */
	IF(0x0C077906u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C077908u, 2);  /* 0C077906 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C077908 mov #imm,Rn */
	r9 = r6 & 0xFF;  /* 0C07790A extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C07790Eu, 3);  /* 0C07790C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C077880u, 3); goto L_0C077880; }  /* 0C07790E bra */
}

void f_0C077A10(sh3_t *c)
{
	LOCALS;
	goto L_0C077A10;
L_0C0777A0: BLKS(0x0C0777A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0777A2u, 1);  /* 0C0777A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0777A4u, 1);  /* 0C0777A2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0777A4 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0777A8u, 2);  /* 0C0777A6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0777AAu, 1);  /* 0C0777A8 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0777ACu, 1);  /* 0C0777AA mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0777AEu, 1);  /* 0C0777AC mov.l Rm,@-Rn */
	IF(0x0C0777AEu); MACL = r8 * r2;  /* 0C0777AE mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0777B2u, 3);  /* 0C0777B0 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C0777B4u, 1);  /* 0C0777B2 mov.l @(disp,pc),Rn */
	IF(0x0C0777B4u); r12 = MACL;  /* 0C0777B4 sts macl,Rn */
	IF(0x0C0777B6u); r15 -= 4; W32(r15, PR); UPD(0x0C0777B8u, 2);  /* 0C0777B6 sts.l pr,@-Rn */
	r12 += r0;  /* 0C0777B8 add Rm,Rn */
	r2 = R32(r12 + 0x8u); UPD(0x0C0777BCu, 2);  /* 0C0777BA mov.l @(disp,Rm),Rn */
	r0 = 0x6u;  /* 0C0777BC mov #imm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0777BE add #imm,Rn */
	T = r2 > r0;  /* 0C0777C0 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0777CAu, 6); goto L_0C0777CA; } goto L_0C0777C6; }  /* 0C0777C2 bf/s */
L_0C0777C6: BLKS(0x0C0777C6u);
	{ r10 = R32(r12 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C077930u, 4); goto L_0C077930; }  /* 0C0777C6 bra */
L_0C0777CA: BLKS(0x0C0777CAu);
	r0 = 0xC0777DCu;  /* 0C0777CA mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0777CC add Rm,Rn */
	IF(0x0C0777CEu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0777D0u, 3);  /* 0C0777CE mov.w @(r0,Rm),Rn */
	IF(0x0C0777D0u); { u32 tv_ = (r3 + 0x0C0777D4u); u32 t_ = PHYS(tv_); IF(0x0C0777D2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0777D0 braf Rn */
L_0C077846: BLKS(0x0C077846u);
	r15 = r14;  /* 0C077846 mov Rm,Rn */
	IF(0x0C077848u); PR = R32(r15); r15 += 4; UPD(0x0C07784Au, 2);  /* 0C077848 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07784Cu, 1);  /* 0C07784A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07784Eu, 1);  /* 0C07784C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C077850u, 1);  /* 0C07784E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C077852u, 1);  /* 0C077850 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C077854u, 1);  /* 0C077852 mov.l @Rm+,Rn */
	IF(0x0C077854u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C077854 rts */
L_0C077930: BLKS(0x0C077930u);
	r15 += 0xFFFFFFF8u;  /* 0C077930 add #imm,Rn */
	r7 = 0x80000u; UPD(0x0C077934u, 2);  /* 0C077932 mov.l @(disp,pc),Rn */
	r5 = 0xEu;  /* 0C077934 mov #imm,Rn */
	r10 += r7;  /* 0C077936 add Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C07793Au, 3);  /* 0C077938 mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C07793A mov Rm,Rn */
	r9 = 0xFFC60000u; UPD(0x0C07793Eu, 2);  /* 0C07793C mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C07793E add Rm,Rn */
	r9 = 0xB0u; UPD(0x0C077942u, 2);  /* 0C077940 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C077942 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C077946u, 2);  /* 0C077944 mov.b @Rm,Rn */
	r8 = r2 & 0xFF;  /* 0C077946 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C07794Au, 2);  /* 0C077948 mov.l Rm,@Rn */
	r8 = 0xA9u; UPD(0x0C07794Cu, 1);  /* 0C07794A mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C07794C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C077950u, 2);  /* 0C07794E mov.b @Rm,Rn */
	r11 = r0 & 0xFF;  /* 0C077950 extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C077954u, 2);  /* 0C077952 mov.l Rm,@(disp,Rn) */
	r11 = 0xC0AB240u; UPD(0x0C077956u, 1);  /* 0C077954 mov.l @(disp,pc),Rn */
	IF(0x0C077956u); { u32 t_ = r11; PR = 0x0C07795Au; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07795Au); }  /* 0C077956 jsr @Rn */
L_0C07795A: BLKS(0x0C07795Au);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C07795Cu, 1);  /* 0C07795A mov.b @Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C07795Eu, 1);  /* 0C07795C mov.l @(disp,Rm),Rn */
	r4 = r6 & 0xFF;  /* 0C07795E extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C077962u, 2);  /* 0C077960 mov.l Rm,@Rn */
	r6 = r10;  /* 0C077962 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C077966u, 2);  /* 0C077964 mov.b @Rm,Rn */
	r5 = 0xFFE30000u; UPD(0x0C077968u, 1);  /* 0C077966 mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFF;  /* 0C077968 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C07796Cu, 2);  /* 0C07796A mov.l Rm,@(disp,Rn) */
	r7 += r5;  /* 0C07796C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C077970u, 2);  /* 0C07796E mov.l @Rm,Rn */
	IF(0x0C077970u); { u32 t_ = r11; PR = 0x0C077974u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C077974u); }  /* 0C077970 jsr @Rn */
L_0C077974: BLKS(0x0C077974u);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C077976u, 1);  /* 0C077974 mov.b @Rm,Rn */
	r5 = r0 & 0xFF;  /* 0C077976 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C07797Au, 2);  /* 0C077978 mov.l Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C07797Cu, 1);  /* 0C07797A mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C07797C mov #imm,Rn */
	r7 = r6 & 0xFF;  /* 0C07797E extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C077982u, 3);  /* 0C077980 mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C077982 mov Rm,Rn */
	r4 = R32(r12); UPD(0x0C077986u, 2);  /* 0C077984 mov.l @Rm,Rn */
	IF(0x0C077986u); { u32 t_ = r11; PR = 0x0C07798Au; r7 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07798Au); }  /* 0C077986 jsr @Rn */
L_0C07798A: BLKS(0x0C07798Au);
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C07798Cu, 1);  /* 0C07798A mov.b @Rm,Rn */
	r6 = r10;  /* 0C07798C mov Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C077990u, 2);  /* 0C07798E mov.l @(disp,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C077990 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C077994u, 2);  /* 0C077992 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C077996u, 1);  /* 0C077994 mov.b @Rm,Rn */
	r4 = 0x1D0000u; UPD(0x0C077998u, 1);  /* 0C077996 mov.l @(disp,pc),Rn */
	r5 = r0 & 0xFF;  /* 0C077998 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07799Cu, 2);  /* 0C07799A mov.l Rm,@(disp,Rn) */
	r7 += r4;  /* 0C07799C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C0779A0u, 2);  /* 0C07799E mov.l @Rm,Rn */
	IF(0x0C0779A0u); { u32 t_ = r11; PR = 0x0C0779A4u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0779A4u); }  /* 0C0779A0 jsr @Rn */
L_0C0779A4: BLKS(0x0C0779A4u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C0779A6u, 1);  /* 0C0779A4 mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C0779A6 mov #imm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C0779AAu, 2);  /* 0C0779A8 mov.l @(disp,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C0779AA extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0779AEu, 2);  /* 0C0779AC mov.l Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C0779B0u, 1);  /* 0C0779AE mov.b @Rm,Rn */
	r6 = 0x3A0000u; UPD(0x0C0779B2u, 1);  /* 0C0779B0 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0779B2 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0779B6u, 2);  /* 0C0779B4 mov.l Rm,@(disp,Rn) */
	r7 += r6;  /* 0C0779B6 add Rm,Rn */
	r6 = r10;  /* 0C0779B8 mov Rm,Rn */
	IF(0x0C0779BAu); { u32 t_ = r11; PR = 0x0C0779BEu; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0779BEu); }  /* 0C0779BA jsr @Rn */
L_0C0779BE: BLKS(0x0C0779BEu);
	r5 = 0xA5u; UPD(0x0C0779C0u, 1);  /* 0C0779BE mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C0779C0 mov Rm,Rn */
	IF(0x0C0779C2u); r10 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0779C4u, 2);  /* 0C0779C2 mov.b @(r0,Rm),Rn */
	r15 += 0x8u;  /* 0C0779C4 add #imm,Rn */
	r6 = 0xC189014u; UPD(0x0C0779C8u, 2);  /* 0C0779C6 mov.l @(disp,pc),Rn */
	IF(0x0C0779C8u); r10 <<= 2;  /* 0C0779C8 shll2 Rn */
	r5 = R32(r12 + 0x24u); UPD(0x0C0779CCu, 2);  /* 0C0779CA mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C0779CC mov Rm,Rn */
	r7 = 0x40000u; UPD(0x0C0779D0u, 2);  /* 0C0779CE mov.l @(disp,pc),Rn */
	r8 = 0xC06CE70u; UPD(0x0C0779D2u, 1);  /* 0C0779D0 mov.l @(disp,pc),Rn */
	r5 += r7;  /* 0C0779D2 add Rm,Rn */
	IF(0x0C0779D4u); r4 = R32(r0 + r6); UPD(0x0C0779D6u, 2);  /* 0C0779D4 mov.l @(r0,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C0779D8u, 1);  /* 0C0779D6 mov.b @Rm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C0779DAu, 1);  /* 0C0779D8 mov.l @(disp,Rm),Rn */
	IF(0x0C0779DAu); { u32 t_ = r8; PR = 0x0C0779DEu; r7 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C0779DEu); }  /* 0C0779DA jsr @Rn */
L_0C0779DE: BLKS(0x0C0779DEu);
	r4 = 0x0u;  /* 0C0779DE mov #imm,Rn */
	{ W32(r12, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C077846u, 4); goto L_0C077846; }  /* 0C0779E0 bra */
L_0C077A10: BLKS(0x0C077A10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C077A12u, 1);  /* 0C077A10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C077A14u, 1);  /* 0C077A12 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C077A16u, 1);  /* 0C077A14 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C077A18u, 1);  /* 0C077A16 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C077A1Au, 1);  /* 0C077A18 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C077A1Cu, 1);  /* 0C077A1A mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C077A1Eu, 1);  /* 0C077A1C mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C077A1E exts.w Rm,Rn */
	IF(0x0C077A20u); MACL = r13 * r3;  /* 0C077A20 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C077A24u, 4);  /* 0C077A22 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C077A26u, 1);  /* 0C077A24 mov.l @(disp,pc),Rn */
	IF(0x0C077A26u); r2 = MACL;  /* 0C077A26 sts macl,Rn */
	IF(0x0C077A28u); r15 -= 4; W32(r15, PR); UPD(0x0C077A2Au, 2);  /* 0C077A28 sts.l pr,@-Rn */
	r0 += r2;  /* 0C077A2A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C077A2Eu, 2);  /* 0C077A2C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C077A2E add #imm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C077A30 add #imm,Rn */
	r0 = 0x6u;  /* 0C077A32 mov #imm,Rn */
	T = r2 > r0;  /* 0C077A34 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077A3Eu, 7); goto L_0C077A3E; } goto L_0C077A3A; }  /* 0C077A36 bf/s */
L_0C077A3A: BLKS(0x0C077A3Au);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C077B46u, 4); goto L_0C077B46; }  /* 0C077A3A bra */
L_0C077A3E: BLKS(0x0C077A3Eu);
	r0 = 0xC077A50u;  /* 0C077A3E mova @(disp,pc),r0 */
	r2 += r2;  /* 0C077A40 add Rm,Rn */
	IF(0x0C077A42u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C077A44u, 3);  /* 0C077A42 mov.w @(r0,Rm),Rn */
	IF(0x0C077A44u); { u32 tv_ = (r4 + 0x0C077A48u); u32 t_ = PHYS(tv_); IF(0x0C077A46u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C077A60u: goto L_0C077A60; case 0x0C077C10u: goto L_0C077C10; case 0x0C077E00u: goto L_0C077E00; case 0x0C077E80u: goto L_0C077E80; default: JUMPD(tv_); } }  /* 0C077A44 braf Rn */
L_0C077A60: BLKS(0x0C077A60u);
	r8 = 0xC0A0540u; UPD(0x0C077A62u, 1);  /* 0C077A60 mov.l @(disp,pc),Rn */
	IF(0x0C077A62u); { u32 t_ = r8; PR = 0x0C077A66u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C077A66u); }  /* 0C077A62 jsr @Rn */
L_0C077A66: BLKS(0x0C077A66u);
	IF(0x0C077A66u); T = (s32)r0 >= 0;  /* 0C077A66 cmp/pz Rn */
	if (T) { UPD(0x0C077A6Eu, 4); goto L_0C077A6E; }  /* 0C077A68 bt */
L_0C077A6A: BLKS(0x0C077A6Au);
	{ IF(0x0C077A6Cu); ; /* slot nop */ UPD(0x0C077BD0u, 3); goto L_0C077BD0; }  /* 0C077A6A bra */
L_0C077A6E: BLKS(0x0C077A6Eu);
	r7 = 0xB4u; UPD(0x0C077A70u, 1);  /* 0C077A6E mov.w @(disp,pc),Rn */
	IF(0x0C077A70u); MACL = r13 * r7;  /* 0C077A70 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C077A74u, 3);  /* 0C077A72 mov.l @(disp,pc),Rn */
	IF(0x0C077A74u); r3 = MACL;  /* 0C077A74 sts macl,Rn */
	IF(0x0C077A76u); MACL = r0 * r7;  /* 0C077A76 mul.l Rm,Rn */
	r3 += r12;  /* 0C077A78 add Rm,Rn */
	r6 = 0x9Fu; UPD(0x0C077A7Cu, 5);  /* 0C077A7A mov.w @(disp,pc),Rn */
	IF(0x0C077A7Cu); r7 = MACL;  /* 0C077A7C sts macl,Rn */
	r7 += r12;  /* 0C077A7E add Rm,Rn */
	r10 = R32(r7 + 0x24u); UPD(0x0C077A82u, 3);  /* 0C077A80 mov.l @(disp,Rm),Rn */
	r0 = r3;  /* 0C077A82 mov Rm,Rn */
	r9 = R32(r7 + 0x28u); UPD(0x0C077A86u, 2);  /* 0C077A84 mov.l @(disp,Rm),Rn */
	r11 = R32(r3 + 0x2Cu); UPD(0x0C077A88u, 1);  /* 0C077A86 mov.l @(disp,Rm),Rn */
	r1 = R32(r3 + 0x30u); UPD(0x0C077A8Au, 1);  /* 0C077A88 mov.l @(disp,Rm),Rn */
	r10 += r11;  /* 0C077A8A add Rm,Rn */
	IF(0x0C077A8Cu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C077A8Eu, 2);  /* 0C077A8C mov.b @(r0,Rm),Rn */
	r9 += r1;  /* 0C077A8E add Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C077A90 extu.b Rm,Rn */
	W32(r3 + 0x24u, r10); UPD(0x0C077A94u, 3);  /* 0C077A92 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C077A94 tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x28u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C077B60u, 4); goto L_0C077B60; } UPD(0x0C077A9Au, 1); goto L_0C077A9A; }  /* 0C077A96 bt/s */
L_0C077A9A: BLKS(0x0C077A9Au);
	T = r0 == 0x1u;  /* 0C077A9A cmp/eq #imm,r0 */
	{ u32 c_ = T; r6 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C077AE0u, 4); goto L_0C077AE0; } UPD(0x0C077AA0u, 1); goto L_0C077AA0; }  /* 0C077A9C bt/s */
L_0C077AA0: BLKS(0x0C077AA0u);
	r9 = 0xB4u; UPD(0x0C077AA2u, 1);  /* 0C077AA0 mov.w @(disp,pc),Rn */
	IF(0x0C077AA2u); MACL = r13 * r9;  /* 0C077AA2 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C077AA6u, 3);  /* 0C077AA4 mov.l @(disp,pc),Rn */
	IF(0x0C077AA6u); r8 = MACL;  /* 0C077AA6 sts macl,Rn */
	r8 += r5;  /* 0C077AA8 add Rm,Rn */
	r4 = 0x86u; UPD(0x0C077AACu, 3);  /* 0C077AAA mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C077AAC mov Rm,Rn */
	IF(0x0C077AAEu); r7 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C077AB0u, 2);  /* 0C077AAE mov.w @(r0,Rm),Rn */
	r7 += 0x8u;  /* 0C077AB0 add #imm,Rn */
	IF(0x0C077AB2u); r7 >>= 2;  /* 0C077AB2 shlr2 Rn */
	IF(0x0C077AB4u); r7 >>= 2;  /* 0C077AB4 shlr2 Rn */
	r0 = 0x1Fu;  /* 0C077AB6 mov #imm,Rn */
	r7 &= r0;  /* 0C077AB8 and Rm,Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C077ABCu, 6);  /* 0C077ABA mov.l Rm,@(disp,Rn) */
L_0C077ABC: BLKS(0x0C077ABCu);
	r1 = 0xC0A0380u; UPD(0x0C077ABEu, 1);  /* 0C077ABC mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C077ABE mov Rm,Rn */
	UPD(0x0C077AC0u, 1);
L_0C077AC0: BLKS(0x0C077AC0u);
	r14 += 0x4u;  /* 0C077AC0 add #imm,Rn */
	r15 = r14;  /* 0C077AC2 mov Rm,Rn */
	IF(0x0C077AC4u); PR = R32(r15); r15 += 4; UPD(0x0C077AC6u, 3);  /* 0C077AC4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C077AC8u, 1);  /* 0C077AC6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C077ACAu, 1);  /* 0C077AC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C077ACCu, 1);  /* 0C077ACA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C077ACEu, 1);  /* 0C077ACC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C077AD0u, 1);  /* 0C077ACE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C077AD2u, 1);  /* 0C077AD0 mov.l @Rm+,Rn */
	IF(0x0C077AD2u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0777A0u: goto L_0C0777A0; case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C077AD2 jmp @Rn */
L_0C077AE0: BLKS(0x0C077AE0u);
	W32(r14, r6); UPD(0x0C077AE2u, 1);  /* 0C077AE0 mov.l Rm,@Rn */
	r0 = r3;  /* 0C077AE2 mov Rm,Rn */
	r2 = 0xA5u; UPD(0x0C077AE6u, 2);  /* 0C077AE4 mov.w @(disp,pc),Rn */
	r5 = 0x88u; UPD(0x0C077AE8u, 1);  /* 0C077AE6 mov.w @(disp,pc),Rn */
	IF(0x0C077AE8u); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C077AEAu, 1);  /* 0C077AE8 mov.b @(r0,Rm),Rn */
	r5 += r3;  /* 0C077AEA add Rm,Rn */
	r6 = 0x84u; UPD(0x0C077AEEu, 2);  /* 0C077AEC mov.w @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C077AEE add #imm,Rn */
	r4 = 0xFFu; UPD(0x0C077AF2u, 2);  /* 0C077AF0 mov.w @(disp,pc),Rn */
	r6 += r3;  /* 0C077AF2 add Rm,Rn */
	UPD(0x0C077AF4u, 1);
L_0C077AF4: BLKS(0x0C077AF4u);
	r1 = R32(r14); UPD(0x0C077AF6u, 1);  /* 0C077AF4 mov.l @Rm,Rn */
	T = (s32)r1 >= (s32)r7;  /* 0C077AF6 cmp/ge Rm,Rn */
	{ u32 c_ = T; r3 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077AA0u, 4); goto L_0C077AA0; } goto L_0C077AFC; }  /* 0C077AF8 bt/s */
L_0C077AFC: BLKS(0x0C077AFCu);
	r3 += 0x2u;  /* 0C077AFC add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r5); UPD(0x0C077B00u, 3);  /* 0C077AFE mov.w @Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C077B02u, 1);  /* 0C077B00 mov.w @Rm,Rn */
	r11 = r12;  /* 0C077B02 mov Rm,Rn */
	r10 = 0x1FFu; UPD(0x0C077B06u, 2);  /* 0C077B04 mov.w @(disp,pc),Rn */
	r11 -= r2;  /* 0C077B06 sub Rm,Rn */
	r11 &= r10;  /* 0C077B08 and Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C077B0A tst Rm,Rn */
	if (T) { UPD(0x0C077B40u, 6); goto L_0C077B40; }  /* 0C077B0C bt */
L_0C077B0E: BLKS(0x0C077B0Eu);
	T = (s32)r11 > (s32)r4;  /* 0C077B0E cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077B30u, 4); goto L_0C077B30; } goto L_0C077B14; }  /* 0C077B10 bt/s */
L_0C077B14: BLKS(0x0C077B14u);
	r1 = r2;  /* 0C077B14 mov Rm,Rn */
	r1 += 0x1u;  /* 0C077B16 add #imm,Rn */
	UPD(0x0C077B18u, 3);
L_0C077B18: BLKS(0x0C077B18u);
	r11 = R32(r14); UPD(0x0C077B1Au, 1);  /* 0C077B18 mov.l @Rm,Rn */
	W16(r3, r1); UPD(0x0C077B1Cu, 1);  /* 0C077B1A mov.w Rm,@Rn */
	r11 += 0x1u;  /* 0C077B1C add #imm,Rn */
	r3 = (u32)(s32)(s16)r11;  /* 0C077B1E exts.w Rm,Rn */
	{ W32(r14, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C077AF4u, 5); goto L_0C077AF4; }  /* 0C077B20 bra */
L_0C077B30: BLKS(0x0C077B30u);
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C077B18u, 3); goto L_0C077B18; }  /* 0C077B30 bra */
L_0C077B40: BLKS(0x0C077B40u);
	r13 = 0x9Fu; UPD(0x0C077B42u, 1);  /* 0C077B40 mov.w @(disp,pc),Rn */
	IF(0x0C077B42u); W8(r0 + r13, r11); UPD(0x0C077B44u, 1);  /* 0C077B42 mov.b Rm,@(r0,Rn) */
L_0C077B44: BLKS(0x0C077B44u);
	r14 += 0x4u;  /* 0C077B44 add #imm,Rn */
	UPD(0x0C077B46u, 1);
L_0C077B46: BLKS(0x0C077B46u);
	r15 = r14;  /* 0C077B46 mov Rm,Rn */
	IF(0x0C077B48u); PR = R32(r15); r15 += 4; UPD(0x0C077B4Au, 2);  /* 0C077B48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C077B4Cu, 1);  /* 0C077B4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C077B4Eu, 1);  /* 0C077B4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C077B50u, 1);  /* 0C077B4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C077B52u, 1);  /* 0C077B50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C077B54u, 1);  /* 0C077B52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C077B56u, 1);  /* 0C077B54 mov.l @Rm+,Rn */
	IF(0x0C077B56u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C077B56 rts */
L_0C077B60: BLKS(0x0C077B60u);
	r6 = 0x98u; UPD(0x0C077B62u, 1);  /* 0C077B60 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C077B62 mov Rm,Rn */
	r6 += r3;  /* 0C077B64 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C077B68u, 3);  /* 0C077B66 mov.b @Rm,Rn */
	r9 = 0x1Du;  /* 0C077B68 mov #imm,Rn */
	r2 += 0x1u;  /* 0C077B6A add #imm,Rn */
	r8 = 0xA5u; UPD(0x0C077B6Eu, 3);  /* 0C077B6C mov.w @(disp,pc),Rn */
	r5 = r2 & 0xFF;  /* 0C077B6E extu.b Rm,Rn */
	W8(r6, r2); UPD(0x0C077B72u, 2);  /* 0C077B70 mov.b Rm,@Rn */
	T = r9 >= r5;  /* 0C077B72 cmp/hs Rm,Rn */
	IF(0x0C077B74u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C077B76u, 2);  /* 0C077B74 mov.b @(r0,Rm),Rn */
	IF(0x0C077B76u); r2 = T;  /* 0C077B76 movt Rn */
	T = (r4 & r4) == 0;  /* 0C077B78 tst Rm,Rn */
	IF(0x0C077B7Au); r0 = T;  /* 0C077B7A movt Rn */
	r2 &= r0;  /* 0C077B7C and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C077B7E tst Rm,Rn */
	if (!T) { UPD(0x0C077B44u, 8); goto L_0C077B44; }  /* 0C077B80 bf */
L_0C077B82: BLKS(0x0C077B82u);
	W8(r6, r2); UPD(0x0C077B84u, 1);  /* 0C077B82 mov.b Rm,@Rn */
	r1 = R32(r7 + 0x24u); UPD(0x0C077B86u, 1);  /* 0C077B84 mov.l @(disp,Rm),Rn */
	r6 = 0x3FFFFFu; UPD(0x0C077B88u, 1);  /* 0C077B86 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r6;  /* 0C077B88 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C077BB0u, 4); goto L_0C077BB0; }  /* 0C077B8A bt */
L_0C077B8C: BLKS(0x0C077B8Cu);
	r10 = 0x88u; UPD(0x0C077B8Eu, 1);  /* 0C077B8C mov.w @(disp,pc),Rn */
	r10 += r3;  /* 0C077B8E add Rm,Rn */
	r10 += 0x2u;  /* 0C077B90 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C077B94u, 3);  /* 0C077B92 mov.w @Rm,Rn */
	{ u32 v_ = r3; r10 -= 2; W16(r10, v_); } UPD(0x0C077B96u, 1);  /* 0C077B94 mov.w Rm,@-Rn */
L_0C077B96: BLKS(0x0C077B96u);
	r9 = 0xB4u; UPD(0x0C077B98u, 1);  /* 0C077B96 mov.w @(disp,pc),Rn */
	IF(0x0C077B98u); MACL = r13 * r9;  /* 0C077B98 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C077B9Cu, 3);  /* 0C077B9A mov.l @(disp,pc),Rn */
	IF(0x0C077B9Cu); r7 = MACL;  /* 0C077B9C sts macl,Rn */
	r4 = 0x9Fu; UPD(0x0C077BA0u, 2);  /* 0C077B9E mov.w @(disp,pc),Rn */
	r7 += r5;  /* 0C077BA0 add Rm,Rn */
	r7 += r4;  /* 0C077BA2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C077BA6u, 3);  /* 0C077BA4 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C077BA6 add #imm,Rn */
	{ W8(r7, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C077AA0u, 4); goto L_0C077AA0; }  /* 0C077BA8 bra */
L_0C077BB0: BLKS(0x0C077BB0u);
	r11 = 0x88u; UPD(0x0C077BB2u, 1);  /* 0C077BB0 mov.w @(disp,pc),Rn */
	r8 = 0xC050D70u; UPD(0x0C077BB4u, 1);  /* 0C077BB2 mov.l @(disp,pc),Rn */
	r11 += r3;  /* 0C077BB4 add Rm,Rn */
	r4 = 0x100u; UPD(0x0C077BB8u, 2);  /* 0C077BB6 mov.w @(disp,pc),Rn */
	IF(0x0C077BB8u); { u32 t_ = r8; PR = 0x0C077BBCu; r11 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C077BBCu); }  /* 0C077BB8 jsr @Rn */
L_0C077BBC: BLKS(0x0C077BBCu);
	r12 = (u32)(s32)(s16)R16(r11); UPD(0x0C077BBEu, 1);  /* 0C077BBC mov.w @Rm,Rn */
	r0 += r12;  /* 0C077BBE add Rm,Rn */
	r0 += 0xFFFFFF80u;  /* 0C077BC0 add #imm,Rn */
	{ { u32 v_ = r0; r11 -= 2; W16(r11, v_); } /* slot mov.w Rm,@-Rn */ UPD(0x0C077B96u, 5); goto L_0C077B96; }  /* 0C077BC2 bra */
L_0C077BD0: BLKS(0x0C077BD0u);
	r1 = 0xC0777A0u; UPD(0x0C077BD2u, 1);  /* 0C077BD0 mov.l @(disp,pc),Rn */
	{ r4 = r13; /* slot mov Rm,Rn */ UPD(0x0C077AC0u, 3); goto L_0C077AC0; }  /* 0C077BD2 bra */
L_0C077C10: BLKS(0x0C077C10u);
	r10 = 0xC0A0540u; UPD(0x0C077C12u, 1);  /* 0C077C10 mov.l @(disp,pc),Rn */
	IF(0x0C077C12u); { u32 t_ = r10; PR = 0x0C077C16u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C077C16u); }  /* 0C077C12 jsr @Rn */
L_0C077C16: BLKS(0x0C077C16u);
	IF(0x0C077C16u); T = (s32)r0 >= 0;  /* 0C077C16 cmp/pz Rn */
	if (!T) { UPD(0x0C077BD0u, 4); goto L_0C077BD0; }  /* 0C077C18 bf */
L_0C077C1A: BLKS(0x0C077C1Au);
	r5 = 0xB4u; UPD(0x0C077C1Cu, 1);  /* 0C077C1A mov.w @(disp,pc),Rn */
	IF(0x0C077C1Cu); MACL = r0 * r5;  /* 0C077C1C mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C077C20u, 3);  /* 0C077C1E mov.l @(disp,pc),Rn */
	IF(0x0C077C20u); r8 = MACL;  /* 0C077C20 sts macl,Rn */
	IF(0x0C077C22u); MACL = r13 * r5;  /* 0C077C22 mul.l Rm,Rn */
	r8 += r4;  /* 0C077C24 add Rm,Rn */
	r12 = 0x84u; UPD(0x0C077C28u, 5);  /* 0C077C26 mov.w @(disp,pc),Rn */
	IF(0x0C077C28u); r9 = MACL;  /* 0C077C28 sts macl,Rn */
	r0 = r8;  /* 0C077C2A mov Rm,Rn */
	r9 += r4;  /* 0C077C2C add Rm,Rn */
	r0 += r12;  /* 0C077C2E add Rm,Rn */
	r6 = 0xC058060u; UPD(0x0C077C32u, 5);  /* 0C077C30 mov.l @(disp,pc),Rn */
	r0 += 0x2u;  /* 0C077C32 add #imm,Rn */
	r9 += 0x50u;  /* 0C077C34 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r0); UPD(0x0C077C38u, 3);  /* 0C077C36 mov.w @Rm,Rn */
	r10 = R32(r9); UPD(0x0C077C3Au, 1);  /* 0C077C38 mov.l @Rm,Rn */
	r4 = r11;  /* 0C077C3A mov Rm,Rn */
	IF(0x0C077C3Cu); { u32 t_ = r6; PR = 0x0C077C40u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C077C40u); }  /* 0C077C3C jsr @Rn */
L_0C077C40: BLKS(0x0C077C40u);
	r4 = r11;  /* 0C077C40 mov Rm,Rn */
	r7 = R32(r8 + 0x24u); UPD(0x0C077C44u, 2);  /* 0C077C42 mov.l @(disp,Rm),Rn */
	r9 += 0xFFFFFFB0u;  /* 0C077C44 add #imm,Rn */
	r11 = 0xC058030u; UPD(0x0C077C48u, 2);  /* 0C077C46 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C077C48 add Rm,Rn */
	r5 = r10;  /* 0C077C4A mov Rm,Rn */
	IF(0x0C077C4Cu); { u32 t_ = r11; PR = 0x0C077C50u; W32(r9 + 0x24u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C077C50u); }  /* 0C077C4C jsr @Rn */
L_0C077C50: BLKS(0x0C077C50u);
	r3 = R32(r8 + 0x28u); UPD(0x0C077C52u, 1);  /* 0C077C50 mov.l @(disp,Rm),Rn */
	r2 = 0x0u;  /* 0C077C52 mov #imm,Rn */
	r3 += r0;  /* 0C077C54 add Rm,Rn */
	r6 = 0x9Au; UPD(0x0C077C58u, 3);  /* 0C077C56 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C077C58 mov Rm,Rn */
	IF(0x0C077C5Au); W8(r0 + r6, r2); UPD(0x0C077C5Cu, 2);  /* 0C077C5A mov.b Rm,@(r0,Rn) */
	r0 = 0x8Cu; UPD(0x0C077C5Eu, 1);  /* 0C077C5C mov.w @(disp,pc),Rn */
	IF(0x0C077C5Eu); r5 = R32(r0 + r9); UPD(0x0C077C60u, 1);  /* 0C077C5E mov.l @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C077C60 tst Rm,Rn */
	{ u32 c_ = T; W32(r9 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C077D40u, 4); goto L_0C077D40; } UPD(0x0C077C66u, 1); goto L_0C077C66; }  /* 0C077C62 bt/s */
L_0C077C66: BLKS(0x0C077C66u);
	r7 = r12;  /* 0C077C66 mov Rm,Rn */
	r7 += r9;  /* 0C077C68 add Rm,Rn */
	r7 += 0x2u;  /* 0C077C6A add #imm,Rn */
	r3 = 0xC058060u; UPD(0x0C077C6Eu, 4);  /* 0C077C6C mov.l @(disp,pc),Rn */
	r8 = r5;  /* 0C077C6E mov Rm,Rn */
	r11 = 0xFFFFC000u; UPD(0x0C077C72u, 2);  /* 0C077C70 mov.w @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C077C72 mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r7); UPD(0x0C077C76u, 2);  /* 0C077C74 mov.w @Rm,Rn */
	r11 += r5;  /* 0C077C76 add Rm,Rn */
	r4 = r10;  /* 0C077C78 mov Rm,Rn */
	IF(0x0C077C7Au); { u32 t_ = r3; PR = 0x0C077C7Eu; IF(0x0C077C7Cu); W32(r0 + r9, r11); /* slot mov.l Rm,@(r0,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C077C7Eu); }  /* 0C077C7A jsr @Rn */
L_0C077C7E: BLKS(0x0C077C7Eu);
	r2 = R32(r9 + 0x24u); UPD(0x0C077C80u, 1);  /* 0C077C7E mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C077C80 mov Rm,Rn */
	r1 = 0xC058030u; UPD(0x0C077C84u, 2);  /* 0C077C82 mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C077C84 sub Rm,Rn */
	W32(r9 + 0x24u, r2); UPD(0x0C077C88u, 2);  /* 0C077C86 mov.l Rm,@(disp,Rn) */
	IF(0x0C077C88u); { u32 t_ = r1; PR = 0x0C077C8Cu; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C077C8Cu); }  /* 0C077C88 jsr @Rn */
L_0C077C8C: BLKS(0x0C077C8Cu);
	r12 = R32(r9 + 0x28u); UPD(0x0C077C8Eu, 1);  /* 0C077C8C mov.l @(disp,Rm),Rn */
	W32(r14, r13); UPD(0x0C077C90u, 1);  /* 0C077C8E mov.l Rm,@Rn */
	r12 -= r0;  /* 0C077C90 sub Rm,Rn */
	W32(r9 + 0x28u, r12); UPD(0x0C077C94u, 2);  /* 0C077C92 mov.l Rm,@(disp,Rn) */
	r13 = 0xC058030u; UPD(0x0C077C96u, 1);  /* 0C077C94 mov.l @(disp,pc),Rn */
	r12 = r9;  /* 0C077C96 mov Rm,Rn */
	UPD(0x0C077C98u, 1);
L_0C077C98: BLKS(0x0C077C98u);
	r7 = 0x86u; UPD(0x0C077C9Au, 1);  /* 0C077C98 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C077C9A mov Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C077C9Eu, 2);  /* 0C077C9C mov.l @(disp,pc),Rn */
	IF(0x0C077C9Eu); r11 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C077CA0u, 1);  /* 0C077C9E mov.w @(r0,Rm),Rn */
	r5 = 0x50000u; UPD(0x0C077CA2u, 1);  /* 0C077CA0 mov.l @(disp,pc),Rn */
	IF(0x0C077CA2u); { u32 t_ = r10; PR = 0x0C077CA6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C077CA6u); }  /* 0C077CA2 jsr @Rn */
L_0C077CA6: BLKS(0x0C077CA6u);
	r8 = R32(r14); UPD(0x0C077CA8u, 1);  /* 0C077CA6 mov.l @Rm,Rn */
	r4 = r11;  /* 0C077CA8 mov Rm,Rn */
	r9 = 0xC189020u; UPD(0x0C077CACu, 2);  /* 0C077CAA mov.l @(disp,pc),Rn */
	IF(0x0C077CACu); r8 <<= 2;  /* 0C077CAC shll2 Rn */
	r8 += r9;  /* 0C077CAE add Rm,Rn */
	r10 = R32(r12 + 0x24u); UPD(0x0C077CB2u, 3);  /* 0C077CB0 mov.l @(disp,Rm),Rn */
	r5 = R32(r8); UPD(0x0C077CB4u, 1);  /* 0C077CB2 mov.l @Rm,Rn */
	IF(0x0C077CB4u); { u32 t_ = r13; PR = 0x0C077CB8u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C077CB8u); }  /* 0C077CB4 jsr @Rn */
L_0C077CB8: BLKS(0x0C077CB8u);
	r4 = r11;  /* 0C077CB8 mov Rm,Rn */
	r5 = 0x50000u; UPD(0x0C077CBCu, 2);  /* 0C077CBA mov.l @(disp,pc),Rn */
	IF(0x0C077CBCu); { u32 t_ = r13; PR = 0x0C077CC0u; r10 -= r0; /* slot sub Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C077CC0u); }  /* 0C077CBC jsr @Rn */
L_0C077CC0: BLKS(0x0C077CC0u);
	r1 = 0xC058060u; UPD(0x0C077CC2u, 1);  /* 0C077CC0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C077CC2 mov Rm,Rn */
	r9 = R32(r12 + 0x28u); UPD(0x0C077CC6u, 2);  /* 0C077CC4 mov.l @(disp,Rm),Rn */
	r5 = R32(r8); UPD(0x0C077CC8u, 1);  /* 0C077CC6 mov.l @Rm,Rn */
	IF(0x0C077CC8u); { u32 t_ = r1; PR = 0x0C077CCCu; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C077CCCu); }  /* 0C077CC8 jsr @Rn */
L_0C077CCC: BLKS(0x0C077CCCu);
	r9 += r0;  /* 0C077CCC add Rm,Rn */
	r0 = R32(r14); UPD(0x0C077CD0u, 2);  /* 0C077CCE mov.l @Rm,Rn */
	r4 = 0x1Fu;  /* 0C077CD0 mov #imm,Rn */
	r3 = 0xC189028u; UPD(0x0C077CD4u, 2);  /* 0C077CD2 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C077CD4 add Rm,Rn */
	r8 = 0xC050D70u; UPD(0x0C077CD8u, 2);  /* 0C077CD6 mov.l @(disp,pc),Rn */
	IF(0x0C077CD8u); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C077CDAu, 1);  /* 0C077CD8 mov.w @(r0,Rm),Rn */
	IF(0x0C077CDAu); { u32 t_ = r8; PR = 0x0C077CDEu; r11 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C077CDEu); }  /* 0C077CDA jsr @Rn */
L_0C077CDE: BLKS(0x0C077CDEu);
	r0 += r11;  /* 0C077CDE add Rm,Rn */
	r0 += 0xFFFFFFF0u;  /* 0C077CE0 add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C077CE2 exts.w Rm,Rn */
	r0 = 0xB0u; UPD(0x0C077CE6u, 4);  /* 0C077CE4 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C077CE6 add #imm,Rn */
	IF(0x0C077CE8u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C077CEAu, 2);  /* 0C077CE8 mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C077CEA extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C077CEEu, 2);  /* 0C077CEC mov.l Rm,@Rn */
	r0 = r12;  /* 0C077CEE mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C077CF2u, 2);  /* 0C077CF0 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C077CF2 mov Rm,Rn */
	IF(0x0C077CF4u); r7 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C077CF6u, 2);  /* 0C077CF4 mov.b @(r0,Rm),Rn */
	r2 = 0xC058060u; UPD(0x0C077CF8u, 1);  /* 0C077CF6 mov.l @(disp,pc),Rn */
	r3 = r7 & 0xFF;  /* 0C077CF8 extu.b Rm,Rn */
	r8 = 0x20000u; UPD(0x0C077CFCu, 2);  /* 0C077CFA mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C077CFEu, 1);  /* 0C077CFC mov.l Rm,@(disp,Rn) */
	IF(0x0C077CFEu); { u32 t_ = r2; PR = 0x0C077D02u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C077D02u); }  /* 0C077CFE jsr @Rn */
L_0C077D02: BLKS(0x0C077D02u);
	r5 = r8;  /* 0C077D02 mov Rm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C077D06u, 2);  /* 0C077D04 mov.l Rm,@(disp,Rn) */
	IF(0x0C077D06u); { u32 t_ = r13; PR = 0x0C077D0Au; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C077D0Au); }  /* 0C077D06 jsr @Rn */
L_0C077D0A: BLKS(0x0C077D0Au);
	W32(r15 + 0xCu, r0); UPD(0x0C077D0Cu, 1);  /* 0C077D0A mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C077D0C mov #imm,Rn */
	r0 = 0x808080u; UPD(0x0C077D10u, 2);  /* 0C077D0E mov.l @(disp,pc),Rn */
	r6 = r10;  /* 0C077D10 mov Rm,Rn */
	r8 = 0xC0ACA40u; UPD(0x0C077D14u, 2);  /* 0C077D12 mov.l @(disp,pc),Rn */
	r7 = r9;  /* 0C077D14 mov Rm,Rn */
	W32(r15 + 0x10u, r0); UPD(0x0C077D18u, 2);  /* 0C077D16 mov.l Rm,@(disp,Rn) */
	r9 = 0x1u;  /* 0C077D18 mov #imm,Rn */
	IF(0x0C077D1Au); { u32 t_ = r8; PR = 0x0C077D1Eu; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C077D1Eu); }  /* 0C077D1A jsr @Rn */
L_0C077D1E: BLKS(0x0C077D1Eu);
	r5 = R32(r14); UPD(0x0C077D20u, 1);  /* 0C077D1E mov.l @Rm,Rn */
	r5 += 0x1u;  /* 0C077D20 add #imm,Rn */
	r4 = (u32)(s32)(s16)r5;  /* 0C077D22 exts.w Rm,Rn */
	W32(r14, r4); UPD(0x0C077D26u, 3);  /* 0C077D24 mov.l Rm,@Rn */
	r6 = R32(r14); UPD(0x0C077D28u, 1);  /* 0C077D26 mov.l @Rm,Rn */
	T = (s32)r6 > (s32)r9;  /* 0C077D28 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C077C98u, 4); goto L_0C077C98; } UPD(0x0C077D2Eu, 1); goto L_0C077D2E; }  /* 0C077D2A bf/s */
L_0C077D2E: BLKS(0x0C077D2Eu);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C077B46u, 3); goto L_0C077B46; }  /* 0C077D2E bra */
L_0C077D40: BLKS(0x0C077D40u);
	r9 = 0xC058130u; UPD(0x0C077D42u, 1);  /* 0C077D40 mov.l @(disp,pc),Rn */
	r8 = 0xC057430u; UPD(0x0C077D44u, 1);  /* 0C077D42 mov.l @(disp,pc),Rn */
	IF(0x0C077D44u); { u32 t_ = r9; PR = 0x0C077D48u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C077D48u); }  /* 0C077D44 jsr @Rn */
L_0C077D48: BLKS(0x0C077D48u);
	r4 = r13;  /* 0C077D48 mov Rm,Rn */
	IF(0x0C077D4Au); { u32 t_ = r8; PR = 0x0C077D4Eu; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C077D4Eu); }  /* 0C077D4A jsr @Rn */
L_0C077D4E: BLKS(0x0C077D4Eu);
	r5 = 0xB4u; UPD(0x0C077D50u, 1);  /* 0C077D4E mov.w @(disp,pc),Rn */
	IF(0x0C077D50u); MACL = r13 * r5;  /* 0C077D50 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C077D54u, 3);  /* 0C077D52 mov.l @(disp,pc),Rn */
	IF(0x0C077D54u); r8 = MACL;  /* 0C077D54 sts macl,Rn */
	r8 += r4;  /* 0C077D56 add Rm,Rn */
	r6 = 0x86u; UPD(0x0C077D5Au, 3);  /* 0C077D58 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C077D5A mov Rm,Rn */
	IF(0x0C077D5Cu); r11 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C077D5Eu, 2);  /* 0C077D5C mov.w @(r0,Rm),Rn */
	r4 = r13;  /* 0C077D5E mov Rm,Rn */
	r11 += 0x8u;  /* 0C077D60 add #imm,Rn */
	IF(0x0C077D62u); r11 >>= 2;  /* 0C077D62 shlr2 Rn */
	r12 = 0xC0A0380u; UPD(0x0C077D66u, 4);  /* 0C077D64 mov.l @(disp,pc),Rn */
	r0 = 0x1Fu;  /* 0C077D66 mov #imm,Rn */
	IF(0x0C077D68u); r11 >>= 2;  /* 0C077D68 shlr2 Rn */
	r11 &= r0;  /* 0C077D6A and Rm,Rn */
	IF(0x0C077D6Cu); { u32 t_ = r12; PR = 0x0C077D70u; W32(r8 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C077D70u); }  /* 0C077D6C jsr @Rn */
L_0C077D70: BLKS(0x0C077D70u);
	r4 = r13;  /* 0C077D70 mov Rm,Rn */
	r13 = 0xC0A9E40u; UPD(0x0C077D74u, 2);  /* 0C077D72 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C077D74 mov #imm,Rn */
	IF(0x0C077D76u); { u32 t_ = r13; PR = 0x0C077D7Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C077D7Au); }  /* 0C077D76 jsr @Rn */
L_0C077D7A: BLKS(0x0C077D7Au);
	T = (r0 & r0) == 0;  /* 0C077D7A tst Rm,Rn */
	if (T) { UPD(0x0C077D2Eu, 4); goto L_0C077D2E; }  /* 0C077D7C bt */
L_0C077D7E: BLKS(0x0C077D7Eu);
	r0 = r8;  /* 0C077D7E mov Rm,Rn */
	r3 = 0xA9u; UPD(0x0C077D82u, 2);  /* 0C077D80 mov.w @(disp,pc),Rn */
	r10 = 0xC0A9BB0u; UPD(0x0C077D84u, 1);  /* 0C077D82 mov.l @(disp,pc),Rn */
	IF(0x0C077D84u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C077D86u, 1);  /* 0C077D84 mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C077D88u, 1);  /* 0C077D86 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C077D88 extu.b Rm,Rn */
	IF(0x0C077D8Au); { u32 t_ = r10; PR = 0x0C077D8Eu; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C077D8Eu); }  /* 0C077D8A jsr @Rn */
L_0C077D8E: BLKS(0x0C077D8Eu);
	T = (r0 & r0) == 0;  /* 0C077D8E tst Rm,Rn */
	if (T) { UPD(0x0C077D2Eu, 4); goto L_0C077D2E; }  /* 0C077D90 bt */
L_0C077D92: BLKS(0x0C077D92u);
	r13 = 0x1u;  /* 0C077D92 mov #imm,Rn */
	r0 = 0x8Cu; UPD(0x0C077D96u, 2);  /* 0C077D94 mov.w @(disp,pc),Rn */
	r12 = 0x60000u; UPD(0x0C077D98u, 1);  /* 0C077D96 mov.l @(disp,pc),Rn */
	IF(0x0C077D98u); W32(r0 + r8, r12); UPD(0x0C077D9Au, 1);  /* 0C077D98 mov.l Rm,@(r0,Rn) */
	r7 = 0x9Au; UPD(0x0C077D9Cu, 1);  /* 0C077D9A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C077D9C mov Rm,Rn */
	{ IF(0x0C077DA0u); W8(r0 + r7, r13); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C077B44u, 4); goto L_0C077B44; }  /* 0C077D9E bra */
L_0C077E00: BLKS(0x0C077E00u);
	r11 = 0xC0A03F0u; UPD(0x0C077E02u, 1);  /* 0C077E00 mov.l @(disp,pc),Rn */
	IF(0x0C077E02u); { u32 t_ = r11; PR = 0x0C077E06u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C077E06u); }  /* 0C077E02 jsr @Rn */
L_0C077E06: BLKS(0x0C077E06u);
	IF(0x0C077E06u); T = (s32)r0 >= 0;  /* 0C077E06 cmp/pz Rn */
	if (!T) { UPD(0x0C077E8Au, 4); goto L_0C077E8A; }  /* 0C077E08 bf */
L_0C077E0A: BLKS(0x0C077E0Au);
	r8 = 0xB4u; UPD(0x0C077E0Cu, 1);  /* 0C077E0A mov.w @(disp,pc),Rn */
	IF(0x0C077E0Cu); MACL = r13 * r8;  /* 0C077E0C mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C077E10u, 3);  /* 0C077E0E mov.l @(disp,pc),Rn */
	IF(0x0C077E10u); r12 = MACL;  /* 0C077E10 sts macl,Rn */
	IF(0x0C077E12u); MACL = r0 * r8;  /* 0C077E12 mul.l Rm,Rn */
	r12 += r1;  /* 0C077E14 add Rm,Rn */
	r4 = 0x98u; UPD(0x0C077E18u, 5);  /* 0C077E16 mov.w @(disp,pc),Rn */
	IF(0x0C077E18u); r8 = MACL;  /* 0C077E18 sts macl,Rn */
	r9 = r12;  /* 0C077E1A mov Rm,Rn */
	r8 += r1;  /* 0C077E1C add Rm,Rn */
	r9 += r4;  /* 0C077E1E add Rm,Rn */
	r2 = 0x84u; UPD(0x0C077E22u, 5);  /* 0C077E20 mov.w @(disp,pc),Rn */
	r3 = r12;  /* 0C077E22 mov Rm,Rn */
	r4 += r8;  /* 0C077E24 add Rm,Rn */
	r4 += 0x2u;  /* 0C077E26 add #imm,Rn */
	r6 = 0xA4u; UPD(0x0C077E2Au, 4);  /* 0C077E28 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C077E2A add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r4); UPD(0x0C077E2Eu, 2);  /* 0C077E2C mov.b @Rm,Rn */
	r7 = r8;  /* 0C077E2E mov Rm,Rn */
	r2 += r8;  /* 0C077E30 add Rm,Rn */
	r2 += 0x2u;  /* 0C077E32 add #imm,Rn */
	r9 += 0x2u;  /* 0C077E34 add #imm,Rn */
	r7 += r6;  /* 0C077E36 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C077E3Au, 6);  /* 0C077E38 mov.w @Rm,Rn */
	r6 += r12;  /* 0C077E3A add Rm,Rn */
	W8(r9, r10); UPD(0x0C077E3Eu, 2);  /* 0C077E3C mov.b Rm,@Rn */
	r6 += 0x1u;  /* 0C077E3E add #imm,Rn */
	r3 += 0x2u;  /* 0C077E40 add #imm,Rn */
	r12 += 0x50u;  /* 0C077E42 add #imm,Rn */
	r11 = 0xC058060u; UPD(0x0C077E46u, 4);  /* 0C077E44 mov.l @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C077E46 add #imm,Rn */
	r9 = R32(r12); UPD(0x0C077E4Au, 2);  /* 0C077E48 mov.l @Rm,Rn */
	r4 = r5;  /* 0C077E4A mov Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C077E4Eu, 2);  /* 0C077E4C mov.b @Rm,Rn */
	r10 = r5;  /* 0C077E4E mov Rm,Rn */
	W16(r3, r5); UPD(0x0C077E52u, 2);  /* 0C077E50 mov.w Rm,@Rn */
	r12 += 0xFFFFFFB0u;  /* 0C077E52 add #imm,Rn */
	r5 = r9;  /* 0C077E54 mov Rm,Rn */
	IF(0x0C077E56u); { u32 t_ = r11; PR = 0x0C077E5Au; W8(r7, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C077E5Au); }  /* 0C077E56 jsr @Rn */
L_0C077E5A: BLKS(0x0C077E5Au);
	r4 = R32(r8 + 0x24u); UPD(0x0C077E5Cu, 1);  /* 0C077E5A mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C077E5C mov Rm,Rn */
	r4 += r0;  /* 0C077E5E add Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C077E62u, 3);  /* 0C077E60 mov.l @(disp,pc),Rn */
	W32(r12 + 0x24u, r4); UPD(0x0C077E64u, 1);  /* 0C077E62 mov.l Rm,@(disp,Rn) */
	IF(0x0C077E64u); { u32 t_ = r9; PR = 0x0C077E68u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C077E68u); }  /* 0C077E64 jsr @Rn */
L_0C077E68: BLKS(0x0C077E68u);
	r6 = R32(r8 + 0x28u); UPD(0x0C077E6Au, 1);  /* 0C077E68 mov.l @(disp,Rm),Rn */
	r6 += r0;  /* 0C077E6A add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C077E6Eu, 2);  /* 0C077E6C mov.l @(disp,Rm),Rn */
	W32(r12 + 0x28u, r6); UPD(0x0C077E70u, 1);  /* 0C077E6E mov.l Rm,@(disp,Rn) */
	{ W32(r12 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C077ABCu, 3); goto L_0C077ABC; }  /* 0C077E70 bra */
L_0C077E80: BLKS(0x0C077E80u);
	r12 = 0xC0A03F0u; UPD(0x0C077E82u, 1);  /* 0C077E80 mov.l @(disp,pc),Rn */
	IF(0x0C077E82u); { u32 t_ = r12; PR = 0x0C077E86u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C077E86u); }  /* 0C077E82 jsr @Rn */
L_0C077E86: BLKS(0x0C077E86u);
	IF(0x0C077E86u); T = (s32)r0 >= 0;  /* 0C077E86 cmp/pz Rn */
	if (T) { UPD(0x0C077E8Eu, 4); goto L_0C077E8E; }  /* 0C077E88 bt */
L_0C077E8A: BLKS(0x0C077E8Au);
	{ IF(0x0C077E8Cu); ; /* slot nop */ UPD(0x0C077BD0u, 3); goto L_0C077BD0; }  /* 0C077E8A bra */
L_0C077E8E: BLKS(0x0C077E8Eu);
	r12 = 0xB4u; UPD(0x0C077E90u, 1);  /* 0C077E8E mov.w @(disp,pc),Rn */
	IF(0x0C077E90u); MACL = r0 * r12;  /* 0C077E90 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C077E94u, 3);  /* 0C077E92 mov.l @(disp,pc),Rn */
	IF(0x0C077E94u); r9 = MACL;  /* 0C077E94 sts macl,Rn */
	IF(0x0C077E96u); MACL = r13 * r12;  /* 0C077E96 mul.l Rm,Rn */
	r9 += r4;  /* 0C077E98 add Rm,Rn */
	r5 = 0x86u; UPD(0x0C077E9Cu, 5);  /* 0C077E9A mov.w @(disp,pc),Rn */
	IF(0x0C077E9Cu); r12 = MACL;  /* 0C077E9C sts macl,Rn */
	r12 += r4;  /* 0C077E9E add Rm,Rn */
	r3 = 0xC058060u; UPD(0x0C077EA2u, 3);  /* 0C077EA0 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C077EA2 mov Rm,Rn */
	r12 += 0x50u;  /* 0C077EA4 add #imm,Rn */
	IF(0x0C077EA6u); r11 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C077EA8u, 3);  /* 0C077EA6 mov.w @(r0,Rm),Rn */
	r8 = R32(r12); UPD(0x0C077EAAu, 1);  /* 0C077EA8 mov.l @Rm,Rn */
	r4 = r11;  /* 0C077EAA mov Rm,Rn */
	IF(0x0C077EACu); { u32 t_ = r3; PR = 0x0C077EB0u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C077EB0u); }  /* 0C077EAC jsr @Rn */
L_0C077EB0: BLKS(0x0C077EB0u);
	r10 = R32(r9 + 0x24u); UPD(0x0C077EB2u, 1);  /* 0C077EB0 mov.l @(disp,Rm),Rn */
	r12 += 0xFFFFFFB0u;  /* 0C077EB2 add #imm,Rn */
	r6 = 0xC058030u; UPD(0x0C077EB6u, 2);  /* 0C077EB4 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C077EB6 add Rm,Rn */
	r5 = r8;  /* 0C077EB8 mov Rm,Rn */
	W32(r12 + 0x24u, r10); UPD(0x0C077EBCu, 3);  /* 0C077EBA mov.l Rm,@(disp,Rn) */
	IF(0x0C077EBCu); { u32 t_ = r6; PR = 0x0C077EC0u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C077EC0u); }  /* 0C077EBC jsr @Rn */
L_0C077EC0: BLKS(0x0C077EC0u);
	r7 = R32(r9 + 0x28u); UPD(0x0C077EC2u, 1);  /* 0C077EC0 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C077EC2 mov Rm,Rn */
	r3 = 0xC0A0380u; UPD(0x0C077EC6u, 2);  /* 0C077EC4 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C077EC6 add Rm,Rn */
	r2 = R32(r9 + 0xCu); UPD(0x0C077ECAu, 2);  /* 0C077EC8 mov.l @(disp,Rm),Rn */
	r10 = 0x9Au; UPD(0x0C077ECCu, 1);  /* 0C077ECA mov.w @(disp,pc),Rn */
	W32(r12 + 0x28u, r7); UPD(0x0C077ECEu, 1);  /* 0C077ECC mov.l Rm,@(disp,Rn) */
	r10 += r9;  /* 0C077ECE add Rm,Rn */
	IF(0x0C077ED0u); { u32 t_ = r3; PR = 0x0C077ED4u; W32(r12 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C077ED4u); }  /* 0C077ED0 jsr @Rn */
L_0C077ED4: BLKS(0x0C077ED4u);
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C077ED6u, 1);  /* 0C077ED4 mov.b @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C077ED6 tst Rm,Rn */
	if (!T) { UPD(0x0C077EE0u, 4); goto L_0C077EE0; }  /* 0C077ED8 bf */
L_0C077EDA: BLKS(0x0C077EDAu);
	r14 += 0x4u;  /* 0C077EDA add #imm,Rn */
	{ IF(0x0C077EDEu); ; /* slot nop */ UPD(0x0C077B46u, 4); goto L_0C077B46; }  /* 0C077EDC bra */
L_0C077EE0: BLKS(0x0C077EE0u);
	r1 = 0xC058060u; UPD(0x0C077EE2u, 1);  /* 0C077EE0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C077EE2 add #imm,Rn */
	r9 = 0xC0000u; UPD(0x0C077EE6u, 2);  /* 0C077EE4 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C077EE6 mov Rm,Rn */
	IF(0x0C077EE8u); { u32 t_ = r1; PR = 0x0C077EECu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C077EECu); }  /* 0C077EE8 jsr @Rn */
L_0C077EEC: BLKS(0x0C077EECu);
	r2 = 0xC058030u; UPD(0x0C077EEEu, 1);  /* 0C077EEC mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C077EEE mov Rm,Rn */
	r8 = R32(r12 + 0x24u); UPD(0x0C077EF2u, 2);  /* 0C077EF0 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C077EF2 mov Rm,Rn */
	IF(0x0C077EF4u); { u32 t_ = r2; PR = 0x0C077EF8u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C077EF8u); }  /* 0C077EF4 jsr @Rn */
L_0C077EF8: BLKS(0x0C077EF8u);
	r6 = R32(r12 + 0x28u); UPD(0x0C077EFAu, 1);  /* 0C077EF8 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C077EFA mov #imm,Rn */
	r6 += r0;  /* 0C077EFC add Rm,Rn */
	r9 = 0xC0A8E70u; UPD(0x0C077F00u, 3);  /* 0C077EFE mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C077F00 mov Rm,Rn */
	r0 = 0x30000u; UPD(0x0C077F04u, 2);  /* 0C077F02 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C077F04 mov Rm,Rn */
	IF(0x0C077F06u); { u32 t_ = r9; PR = 0x0C077F0Au; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0A8E70, 0x0C0A8E70u, 0x0C077F0Au); }  /* 0C077F06 jsr @Rn */
L_0C077F0A: BLKS(0x0C077F0Au);
	r11 = 0x0u;  /* 0C077F0A mov #imm,Rn */
	r1 = 0xC0580D0u; UPD(0x0C077F0Eu, 2);  /* 0C077F0C mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C077F0E add #imm,Rn */
	W8(r10, r11); UPD(0x0C077F12u, 2);  /* 0C077F10 mov.b Rm,@Rn */
	{ r4 = r13; /* slot mov Rm,Rn */ UPD(0x0C077AC0u, 3); goto L_0C077AC0; }  /* 0C077F12 bra */
}

void f_0C077F50(sh3_t *c)
{
	LOCALS;
L_0C077F50: BLKS(0x0C077F50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C077F52u, 1);  /* 0C077F50 mov.l Rm,@-Rn */
	r1 = 0x3u;  /* 0C077F52 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C077F56u, 2);  /* 0C077F54 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C077F58u, 1);  /* 0C077F56 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C077F5Au, 1);  /* 0C077F58 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C077F5Cu, 1);  /* 0C077F5A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C077F5Eu, 1);  /* 0C077F5C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C077F60u, 1);  /* 0C077F5E mov.l Rm,@-Rn */
	r4 = 0xC392D64u; UPD(0x0C077F62u, 1);  /* 0C077F60 mov.l @(disp,pc),Rn */
	IF(0x0C077F62u); r15 -= 4; W32(r15, PR); UPD(0x0C077F64u, 1);  /* 0C077F62 sts.l pr,@-Rn */
	r2 = R32(r4); UPD(0x0C077F66u, 1);  /* 0C077F64 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C077F66 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r8 = v_; } UPD(0x0C077F6Au, 2);  /* 0C077F68 mov.w @Rm+,Rn */
	r14 = r15;  /* 0C077F6A mov Rm,Rn */
	r0 = r8;  /* 0C077F6C mov Rm,Rn */
	r0 &= 0x3u;  /* 0C077F6E and #imm,r0 */
	W32(r14, r0); UPD(0x0C077F72u, 4);  /* 0C077F70 mov.l Rm,@Rn */
	r3 = r0;  /* 0C077F72 mov Rm,Rn */
	IF(0x0C077F74u); ARG0(0x431Du); { s32 s_ = (s32)r1; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C077F74 shld Rm,Rn */
	r0 = 0xC189F4Cu; UPD(0x0C077F78u, 3);  /* 0C077F76 mov.l @(disp,pc),Rn */
	r9 = 0xC0606C0u; UPD(0x0C077F7Au, 1);  /* 0C077F78 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C077F7A add Rm,Rn */
	W32(r4, r2); UPD(0x0C077F7Eu, 2);  /* 0C077F7C mov.l Rm,@Rn */
	r10 = R32(r3 + 0x4u); UPD(0x0C077F80u, 1);  /* 0C077F7E mov.l @(disp,Rm),Rn */
	IF(0x0C077F80u); { u32 t_ = r9; PR = 0x0C077F84u; r4 = R32(r3); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C077F84u); }  /* 0C077F80 jsr @Rn */
L_0C077F84: BLKS(0x0C077F84u);
	T = (r0 & r0) == 0;  /* 0C077F84 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C077F8Eu, 4); goto L_0C077F8E; } goto L_0C077F8A; }  /* 0C077F86 bf/s */
L_0C077F8A: BLKS(0x0C077F8Au);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C0780E2u, 4); goto L_0C0780E2; }  /* 0C077F8A bra */
L_0C077F8E: BLKS(0x0C077F8Eu);
	r11 = 0xC2755BCu; UPD(0x0C077F90u, 1);  /* 0C077F8E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFFEu;  /* 0C077F90 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C077F94u, 2);  /* 0C077F92 mov.w @Rm,Rn */
	r5 = 0x1u;  /* 0C077F94 mov #imm,Rn */
	r3 = 0xB4u; UPD(0x0C077F98u, 2);  /* 0C077F96 mov.w @(disp,pc),Rn */
	T = r8 > r5;  /* 0C077F98 cmp/hi Rm,Rn */
	r2 = 0xC286509u; UPD(0x0C077F9Cu, 2);  /* 0C077F9A mov.l @(disp,pc),Rn */
	IF(0x0C077F9Cu); MACL = r4 * r3;  /* 0C077F9C mul.l Rm,Rn */
	r9 = 0xC22C874u; UPD(0x0C077FA0u, 3);  /* 0C077F9E mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C077FA2u, 1);  /* 0C077FA0 mov.b @Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C077FA4u, 1);  /* 0C077FA2 mov.l @(disp,pc),Rn */
	IF(0x0C077FA4u); r2 = MACL;  /* 0C077FA4 sts macl,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C077FA8u, 2);  /* 0C077FA6 mov.w @Rm,Rn */
	r2 += r13;  /* 0C077FA8 add Rm,Rn */
	r12 = 0xC3000110u; UPD(0x0C077FACu, 2);  /* 0C077FAA mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFFFF;  /* 0C077FAC extu.w Rm,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C077FB0u, 2);  /* 0C077FAE mov.l Rm,@(disp,Rn) */
	W32(r2, r12); UPD(0x0C077FB2u, 1);  /* 0C077FB0 mov.l Rm,@Rn */
	{ u32 c_ = T; W32(r2 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C077FBAu, 3); goto L_0C077FBA; } UPD(0x0C077FB6u, 1); goto L_0C077FB6; }  /* 0C077FB2 bt/s */
L_0C077FB6: BLKS(0x0C077FB6u);
	{ r5 = 0x8u; /* slot mov #imm,Rn */ UPD(0x0C078100u, 3); goto L_0C078100; }  /* 0C077FB6 bra */
L_0C077FBA: BLKS(0x0C077FBAu);
	r8 = 0x0u;  /* 0C077FBA mov #imm,Rn */
	W32(r2 + 0xCu, r8); UPD(0x0C077FBEu, 2);  /* 0C077FBC mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x8u, r8); UPD(0x0C077FC0u, 1);  /* 0C077FBE mov.l Rm,@(disp,Rn) */
L_0C077FC0: BLKS(0x0C077FC0u);
	r12 = 0xC0A02D0u; UPD(0x0C077FC2u, 1);  /* 0C077FC0 mov.l @(disp,pc),Rn */
	r13 = 0x4Cu;  /* 0C077FC2 mov #imm,Rn */
	IF(0x0C077FC4u); { u32 t_ = r12; PR = 0x0C077FC8u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C077FC8u); }  /* 0C077FC4 jsr @Rn */
L_0C077FC8: BLKS(0x0C077FC8u);
	r2 = R32(r14 + 0x4u); UPD(0x0C077FCAu, 1);  /* 0C077FC8 mov.l @(disp,Rm),Rn */
	r9 = 0xB4u; UPD(0x0C077FCCu, 1);  /* 0C077FCA mov.w @(disp,pc),Rn */
	IF(0x0C077FCCu); MACL = r2 * r9;  /* 0C077FCC mul.l Rm,Rn */
	r7 = 0xC26CAE0u; UPD(0x0C077FD0u, 3);  /* 0C077FCE mov.l @(disp,pc),Rn */
	IF(0x0C077FD0u); r9 = MACL;  /* 0C077FD0 sts macl,Rn */
	IF(0x0C077FD2u); MACL = r11 * r13;  /* 0C077FD2 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C077FD6u, 4);  /* 0C077FD4 mov.l @(disp,pc),Rn */
	r4 = 0xC21F5E2u; UPD(0x0C077FD8u, 1);  /* 0C077FD6 mov.l @(disp,pc),Rn */
	IF(0x0C077FD8u); r12 = MACL;  /* 0C077FD8 sts macl,Rn */
	r0 = 0xC392D5Eu; UPD(0x0C077FDCu, 2);  /* 0C077FDA mov.l @(disp,pc),Rn */
	r9 += r3;  /* 0C077FDC add Rm,Rn */
	r12 += r7;  /* 0C077FDE add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r4); UPD(0x0C077FE2u, 3);  /* 0C077FE0 mov.w @Rm,Rn */
	r13 = 0x0u;  /* 0C077FE2 mov #imm,Rn */
	r6 = R32(r12 + 0x8u); UPD(0x0C077FE6u, 2);  /* 0C077FE4 mov.l @(disp,Rm),Rn */
	IF(0x0C077FE6u); r5 <<= 16;  /* 0C077FE6 shll16 Rn */
	r8 = (u32)(s32)(s16)R16(r0); UPD(0x0C077FEAu, 2);  /* 0C077FE8 mov.w @Rm,Rn */
	r5 -= r6;  /* 0C077FEA sub Rm,Rn */
	r3 = 0xC0A1530u; UPD(0x0C077FEEu, 2);  /* 0C077FEC mov.l @(disp,pc),Rn */
	IF(0x0C077FEEu); r8 <<= 16;  /* 0C077FEE shll16 Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C077FF2u, 2);  /* 0C077FF0 mov.l @(disp,Rm),Rn */
	r12 += 0x42u;  /* 0C077FF2 add #imm,Rn */
	W32(r9 + 0x24u, r5); UPD(0x0C077FF6u, 2);  /* 0C077FF4 mov.l Rm,@(disp,Rn) */
	IF(0x0C077FF6u); { u32 t_ = r3; PR = 0x0C077FFAu; W32(r9 + 0x28u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C077FFAu); }  /* 0C077FF6 jsr @Rn */
L_0C077FFA: BLKS(0x0C077FFAu);
	r0 = 0xB0u; UPD(0x0C077FFCu, 1);  /* 0C077FFA mov.w @(disp,pc),Rn */
	r3 = r9;  /* 0C077FFC mov Rm,Rn */
	IF(0x0C077FFEu); W8(r0 + r9, r11); UPD(0x0C078000u, 2);  /* 0C077FFE mov.b Rm,@(r0,Rn) */
	r4 = 0xADu; UPD(0x0C078002u, 1);  /* 0C078000 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C078002 mov Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C078006u, 2);  /* 0C078004 mov.b @Rm,Rn */
	r1 = 0xA8u; UPD(0x0C078008u, 1);  /* 0C078006 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C078008 add #imm,Rn */
	IF(0x0C07800Au); W8(r0 + r4, r13); UPD(0x0C07800Cu, 2);  /* 0C07800A mov.b Rm,@(r0,Rn) */
	r3 += r1;  /* 0C07800C add Rm,Rn */
	r0 = 0x9Cu; UPD(0x0C078010u, 2);  /* 0C07800E mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C078010 add #imm,Rn */
	IF(0x0C078012u); W8(r0 + r9, r13); UPD(0x0C078014u, 2);  /* 0C078012 mov.b Rm,@(r0,Rn) */
	r12 = 0x3u;  /* 0C078014 mov #imm,Rn */
	W8(r3, r2); UPD(0x0C078018u, 2);  /* 0C078016 mov.b Rm,@Rn */
	r13 = 0x0u;  /* 0C078018 mov #imm,Rn */
	r0 = R32(r14); UPD(0x0C07801Cu, 2);  /* 0C07801A mov.l @Rm,Rn */
	r7 = 0xC189F4Cu; UPD(0x0C07801Eu, 1);  /* 0C07801C mov.l @(disp,pc),Rn */
	IF(0x0C07801Eu); ARG0(0x40CDu); { s32 s_ = (s32)r12; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07801E shld Rm,Rn */
	IF(0x0C078020u); r6 = R32(r0 + r7); UPD(0x0C078022u, 2);  /* 0C078020 mov.l @(r0,Rm),Rn */
	r6 += 0xFFFFFFFFu;  /* 0C078022 add #imm,Rn */
	T = (s32)r13 >= (s32)r6;  /* 0C078024 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0780DEu, 5); goto L_0C0780DE; }  /* 0C078026 bt */
L_0C078028: BLKS(0x0C078028u);
	r11 = r9;  /* 0C078028 mov Rm,Rn */
	r12 = 0xC2755BCu; UPD(0x0C07802Cu, 2);  /* 0C07802A mov.l @(disp,pc),Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C07802Eu, 1);  /* 0C07802C mov.l Rm,@(disp,Rn) */
	r12 += 0x2u;  /* 0C07802E add #imm,Rn */
	UPD(0x0C078030u, 1);
L_0C078030: BLKS(0x0C078030u);
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r9 = v_; } UPD(0x0C078032u, 1);  /* 0C078030 mov.w @Rm+,Rn */
	r10 += 0x4u;  /* 0C078032 add #imm,Rn */
	r8 = 0xB4u; UPD(0x0C078036u, 2);  /* 0C078034 mov.w @(disp,pc),Rn */
	IF(0x0C078036u); MACL = r9 * r8;  /* 0C078036 mul.l Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C07803Au, 3);  /* 0C078038 mov.w @Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C07803Cu, 1);  /* 0C07803A mov.l @(disp,pc),Rn */
	IF(0x0C07803Cu); r8 = MACL;  /* 0C07803C sts macl,Rn */
	r0 = 0xC2755BCu; UPD(0x0C078040u, 2);  /* 0C07803E mov.l @(disp,pc),Rn */
	r7 += r7;  /* 0C078040 add Rm,Rn */
	IF(0x0C078042u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C078044u, 2);  /* 0C078042 mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C078044 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C078046 add #imm,Rn */
	W16(r8, r6); UPD(0x0C07804Au, 3);  /* 0C078048 mov.w Rm,@Rn */
	r0 = 0x6u;  /* 0C07804A mov #imm,Rn */
	IF(0x0C07804Cu); r5 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C07804Eu, 2);  /* 0C07804C mov.w @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C07804E add #imm,Rn */
	W16(r8, r5); UPD(0x0C078052u, 2);  /* 0C078050 mov.w Rm,@Rn */
	r10 += 0xFFFFFFFCu;  /* 0C078052 add #imm,Rn */
	r3 = 0xC22C874u; UPD(0x0C078056u, 2);  /* 0C078054 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C078056 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C07805Au, 2);  /* 0C078058 mov.w @Rm,Rn */
	r2 = R32(r10); UPD(0x0C07805Cu, 1);  /* 0C07805A mov.l @Rm,Rn */
	r7 = r4 & 0xFFFF;  /* 0C07805C extu.w Rm,Rn */
	W32(r8, r2); UPD(0x0C078060u, 2);  /* 0C07805E mov.l Rm,@Rn */
	r4 = r9;  /* 0C078060 mov Rm,Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C078064u, 2);  /* 0C078062 mov.l Rm,@(disp,Rn) */
	r0 = R32(r10 + 0x8u); UPD(0x0C078066u, 1);  /* 0C078064 mov.l @(disp,Rm),Rn */
	r10 += 0x14u;  /* 0C078066 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C07806Au, 2);  /* 0C078068 mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C07806Cu, 1);  /* 0C07806A mov.w @Rm,Rn */
	r0 = r8;  /* 0C07806C mov Rm,Rn */
	r6 = 0x8Au; UPD(0x0C078070u, 2);  /* 0C07806E mov.w @(disp,pc),Rn */
	r10 += 0xFFFFFFECu;  /* 0C078070 add #imm,Rn */
	IF(0x0C078072u); W16(r0 + r6, r5); UPD(0x0C078074u, 2);  /* 0C078072 mov.w Rm,@(r0,Rn) */
	r6 += 0xFFFFFFFCu;  /* 0C078074 add #imm,Rn */
	IF(0x0C078076u); W16(r0 + r6, r5); UPD(0x0C078078u, 2);  /* 0C078076 mov.w Rm,@(r0,Rn) */
	r0 = r5;  /* 0C078078 mov Rm,Rn */
	r0 += 0x8u;  /* 0C07807A add #imm,Rn */
	r2 = 0xC0A02D0u; UPD(0x0C07807Eu, 3);  /* 0C07807C mov.l @(disp,pc),Rn */
	IF(0x0C07807Eu); r0 >>= 2;  /* 0C07807E shlr2 Rn */
	IF(0x0C078080u); r0 >>= 2;  /* 0C078080 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C078082 and #imm,r0 */
	IF(0x0C078084u); { u32 t_ = r2; PR = 0x0C078088u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C078088u); }  /* 0C078084 jsr @Rn */
L_0C078088: BLKS(0x0C078088u);
	r3 = R32(r11 + 0x24u); UPD(0x0C07808Au, 1);  /* 0C078088 mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x28u); UPD(0x0C07808Cu, 1);  /* 0C07808A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C07808Eu, 1);  /* 0C07808C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r4); UPD(0x0C078090u, 1);  /* 0C07808E mov.l Rm,@(disp,Rn) */
	r7 = R32(r10 + 0xCu); UPD(0x0C078092u, 1);  /* 0C078090 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C078092 mov Rm,Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C078096u, 2);  /* 0C078094 mov.l Rm,@(disp,Rn) */
	r0 = R32(r10 + 0x10u); UPD(0x0C078098u, 1);  /* 0C078096 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C07809Au, 1);  /* 0C078098 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A1530u; UPD(0x0C07809Cu, 1);  /* 0C07809A mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C07809C add #imm,Rn */
	r6 = R32(r10 + 0x18u); UPD(0x0C0780A0u, 2);  /* 0C07809E mov.l @(disp,Rm),Rn */
	IF(0x0C0780A0u); { u32 t_ = r5; PR = 0x0C0780A4u; W32(r8, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0780A4u); }  /* 0C0780A0 jsr @Rn */
L_0C0780A4: BLKS(0x0C0780A4u);
	r0 = 0xB0u; UPD(0x0C0780A6u, 1);  /* 0C0780A4 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0780A6 add #imm,Rn */
	IF(0x0C0780A8u); r2 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0780AAu, 2);  /* 0C0780A8 mov.b @(r0,Rm),Rn */
	r7 = 0x0u;  /* 0C0780AA mov #imm,Rn */
	IF(0x0C0780ACu); W8(r0 + r8, r2); UPD(0x0C0780AEu, 2);  /* 0C0780AC mov.b Rm,@(r0,Rn) */
	r6 = 0x3u;  /* 0C0780AE mov #imm,Rn */
	r9 = R32(r14 + 0x8u); UPD(0x0C0780B2u, 2);  /* 0C0780B0 mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C0780B2 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C0780B6u, 2);  /* 0C0780B4 mov.b @Rm,Rn */
	r1 = 0xADu; UPD(0x0C0780B8u, 1);  /* 0C0780B6 mov.w @(disp,pc),Rn */
	r3 += 0x5u;  /* 0C0780B8 add #imm,Rn */
	IF(0x0C0780BAu); W8(r0 + r1, r3); UPD(0x0C0780BCu, 2);  /* 0C0780BA mov.b Rm,@(r0,Rn) */
	r0 = 0x8Cu; UPD(0x0C0780BEu, 1);  /* 0C0780BC mov.w @(disp,pc),Rn */
	r4 = 0xA8u; UPD(0x0C0780C0u, 1);  /* 0C0780BE mov.w @(disp,pc),Rn */
	IF(0x0C0780C0u); W32(r0 + r8, r7); UPD(0x0C0780C2u, 1);  /* 0C0780C0 mov.l Rm,@(r0,Rn) */
	r4 += r8;  /* 0C0780C2 add Rm,Rn */
	r0 = r13;  /* 0C0780C4 mov Rm,Rn */
	r4 += 0x1u;  /* 0C0780C6 add #imm,Rn */
	W8(r4, r3); UPD(0x0C0780CAu, 4);  /* 0C0780C8 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C0780CA add #imm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0780CC exts.w Rm,Rn */
	r0 = R32(r14); UPD(0x0C0780D0u, 3);  /* 0C0780CE mov.l @Rm,Rn */
	r5 = 0xC189F4Cu; UPD(0x0C0780D2u, 1);  /* 0C0780D0 mov.l @(disp,pc),Rn */
	IF(0x0C0780D2u); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0780D2 shld Rm,Rn */
	IF(0x0C0780D4u); r8 = R32(r0 + r5); UPD(0x0C0780D6u, 2);  /* 0C0780D4 mov.l @(r0,Rm),Rn */
	r8 += 0xFFFFFFFFu;  /* 0C0780D6 add #imm,Rn */
	T = (s32)r13 >= (s32)r8;  /* 0C0780D8 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r10 += 0x1Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C078030u, 5); goto L_0C078030; } UPD(0x0C0780DEu, 1); goto L_0C0780DE; }  /* 0C0780DA bf/s */
L_0C0780DE: BLKS(0x0C0780DEu);
	r0 = 0x1u;  /* 0C0780DE mov #imm,Rn */
	r14 += 0xCu;  /* 0C0780E0 add #imm,Rn */
	UPD(0x0C0780E2u, 2);
L_0C0780E2: BLKS(0x0C0780E2u);
	r15 = r14;  /* 0C0780E2 mov Rm,Rn */
	IF(0x0C0780E4u); PR = R32(r15); r15 += 4; UPD(0x0C0780E6u, 2);  /* 0C0780E4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0780E8u, 1);  /* 0C0780E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0780EAu, 1);  /* 0C0780E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0780ECu, 1);  /* 0C0780EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0780EEu, 1);  /* 0C0780EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0780F0u, 1);  /* 0C0780EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0780F2u, 1);  /* 0C0780F0 mov.l @Rm+,Rn */
	IF(0x0C0780F2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0780F2 rts */
L_0C078100: BLKS(0x0C078100u);
	r0 = 0x3u;  /* 0C078100 mov #imm,Rn */
	W32(r2 + 0x8u, r5); UPD(0x0C078104u, 2);  /* 0C078102 mov.l Rm,@(disp,Rn) */
	{ W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C077FC0u, 3); goto L_0C077FC0; }  /* 0C078104 bra */
}

void f_0C078150(sh3_t *c)
{
	LOCALS;
L_0C078150: BLKS(0x0C078150u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C078152u, 1);  /* 0C078150 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C078154u, 1);  /* 0C078152 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C078154 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C078158u, 2);  /* 0C078156 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07815Au, 1);  /* 0C078158 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C07815Cu, 1);  /* 0C07815A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07815Eu, 1);  /* 0C07815C mov.l Rm,@-Rn */
	IF(0x0C07815Eu); MACL = r8 * r2;  /* 0C07815E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C078162u, 3);  /* 0C078160 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C078164u, 1);  /* 0C078162 mov.l @(disp,pc),Rn */
	IF(0x0C078164u); r12 = MACL;  /* 0C078164 sts macl,Rn */
	IF(0x0C078166u); r15 -= 4; W32(r15, PR); UPD(0x0C078168u, 2);  /* 0C078166 sts.l pr,@-Rn */
	r12 += r0;  /* 0C078168 add Rm,Rn */
	r2 = R32(r12 + 0x8u); UPD(0x0C07816Cu, 2);  /* 0C07816A mov.l @(disp,Rm),Rn */
	r0 = 0x7u;  /* 0C07816C mov #imm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C07816E add #imm,Rn */
	T = r2 > r0;  /* 0C078170 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07817Au, 6); goto L_0C07817A; } goto L_0C078176; }  /* 0C078172 bf/s */
L_0C078176: BLKS(0x0C078176u);
	{ r10 = R32(r12 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C078340u, 4); goto L_0C078340; }  /* 0C078176 bra */
L_0C07817A: BLKS(0x0C07817Au);
	r0 = 0xC07818Cu;  /* 0C07817A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07817C add Rm,Rn */
	IF(0x0C07817Eu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C078180u, 3);  /* 0C07817E mov.w @(r0,Rm),Rn */
	IF(0x0C078180u); { u32 tv_ = (r3 + 0x0C078184u); u32 t_ = PHYS(tv_); IF(0x0C078182u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C078180 braf Rn */
L_0C0781F6: BLKS(0x0C0781F6u);
	r15 = r14;  /* 0C0781F6 mov Rm,Rn */
	IF(0x0C0781F8u); PR = R32(r15); r15 += 4; UPD(0x0C0781FAu, 2);  /* 0C0781F8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0781FCu, 1);  /* 0C0781FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0781FEu, 1);  /* 0C0781FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078200u, 1);  /* 0C0781FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078202u, 1);  /* 0C078200 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078204u, 1);  /* 0C078202 mov.l @Rm+,Rn */
	IF(0x0C078204u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C078204 rts */
L_0C078340: BLKS(0x0C078340u);
	r15 += 0xFFFFFFF8u;  /* 0C078340 add #imm,Rn */
	r7 = 0x80000u; UPD(0x0C078344u, 2);  /* 0C078342 mov.l @(disp,pc),Rn */
	r5 = 0xEu;  /* 0C078344 mov #imm,Rn */
	r10 += r7;  /* 0C078346 add Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C07834Au, 3);  /* 0C078348 mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C07834A mov Rm,Rn */
	r9 = 0xFFC60000u; UPD(0x0C07834Eu, 2);  /* 0C07834C mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C07834E add Rm,Rn */
	r9 = 0xB0u; UPD(0x0C078352u, 2);  /* 0C078350 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C078352 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C078356u, 2);  /* 0C078354 mov.b @Rm,Rn */
	r8 = r2 & 0xFF;  /* 0C078356 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C07835Au, 2);  /* 0C078358 mov.l Rm,@Rn */
	r8 = 0xA9u; UPD(0x0C07835Cu, 1);  /* 0C07835A mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C07835C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C078360u, 2);  /* 0C07835E mov.b @Rm,Rn */
	r11 = r0 & 0xFF;  /* 0C078360 extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C078364u, 2);  /* 0C078362 mov.l Rm,@(disp,Rn) */
	r11 = 0xC0AB240u; UPD(0x0C078366u, 1);  /* 0C078364 mov.l @(disp,pc),Rn */
	IF(0x0C078366u); { u32 t_ = r11; PR = 0x0C07836Au; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07836Au); }  /* 0C078366 jsr @Rn */
L_0C07836A: BLKS(0x0C07836Au);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C07836Cu, 1);  /* 0C07836A mov.b @Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C07836Eu, 1);  /* 0C07836C mov.l @(disp,Rm),Rn */
	r4 = r6 & 0xFF;  /* 0C07836E extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C078372u, 2);  /* 0C078370 mov.l Rm,@Rn */
	r6 = r10;  /* 0C078372 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C078376u, 2);  /* 0C078374 mov.b @Rm,Rn */
	r5 = 0xFFE30000u; UPD(0x0C078378u, 1);  /* 0C078376 mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFF;  /* 0C078378 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C07837Cu, 2);  /* 0C07837A mov.l Rm,@(disp,Rn) */
	r7 += r5;  /* 0C07837C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C078380u, 2);  /* 0C07837E mov.l @Rm,Rn */
	IF(0x0C078380u); { u32 t_ = r11; PR = 0x0C078384u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C078384u); }  /* 0C078380 jsr @Rn */
L_0C078384: BLKS(0x0C078384u);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C078386u, 1);  /* 0C078384 mov.b @Rm,Rn */
	r5 = r0 & 0xFF;  /* 0C078386 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C07838Au, 2);  /* 0C078388 mov.l Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C07838Cu, 1);  /* 0C07838A mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C07838C mov #imm,Rn */
	r7 = r6 & 0xFF;  /* 0C07838E extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C078392u, 3);  /* 0C078390 mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C078392 mov Rm,Rn */
	r4 = R32(r12); UPD(0x0C078396u, 2);  /* 0C078394 mov.l @Rm,Rn */
	IF(0x0C078396u); { u32 t_ = r11; PR = 0x0C07839Au; r7 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07839Au); }  /* 0C078396 jsr @Rn */
L_0C07839A: BLKS(0x0C07839Au);
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C07839Cu, 1);  /* 0C07839A mov.b @Rm,Rn */
	r6 = r10;  /* 0C07839C mov Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C0783A0u, 2);  /* 0C07839E mov.l @(disp,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C0783A0 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0783A4u, 2);  /* 0C0783A2 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C0783A6u, 1);  /* 0C0783A4 mov.b @Rm,Rn */
	r4 = 0x1D0000u; UPD(0x0C0783A8u, 1);  /* 0C0783A6 mov.l @(disp,pc),Rn */
	r5 = r0 & 0xFF;  /* 0C0783A8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0783ACu, 2);  /* 0C0783AA mov.l Rm,@(disp,Rn) */
	r7 += r4;  /* 0C0783AC add Rm,Rn */
	r4 = R32(r12); UPD(0x0C0783B0u, 2);  /* 0C0783AE mov.l @Rm,Rn */
	IF(0x0C0783B0u); { u32 t_ = r11; PR = 0x0C0783B4u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0783B4u); }  /* 0C0783B0 jsr @Rn */
L_0C0783B4: BLKS(0x0C0783B4u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C0783B6u, 1);  /* 0C0783B4 mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C0783B6 mov #imm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C0783BAu, 2);  /* 0C0783B8 mov.l @(disp,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C0783BA extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0783BEu, 2);  /* 0C0783BC mov.l Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C0783C0u, 1);  /* 0C0783BE mov.b @Rm,Rn */
	r6 = 0x3A0000u; UPD(0x0C0783C2u, 1);  /* 0C0783C0 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0783C2 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0783C6u, 2);  /* 0C0783C4 mov.l Rm,@(disp,Rn) */
	r7 += r6;  /* 0C0783C6 add Rm,Rn */
	r6 = r10;  /* 0C0783C8 mov Rm,Rn */
	IF(0x0C0783CAu); { u32 t_ = r11; PR = 0x0C0783CEu; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0783CEu); }  /* 0C0783CA jsr @Rn */
L_0C0783CE: BLKS(0x0C0783CEu);
	r5 = 0xA5u; UPD(0x0C0783D0u, 1);  /* 0C0783CE mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C0783D0 mov Rm,Rn */
	IF(0x0C0783D2u); r10 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0783D4u, 2);  /* 0C0783D2 mov.b @(r0,Rm),Rn */
	r15 += 0x8u;  /* 0C0783D4 add #imm,Rn */
	r6 = 0xC189F6Cu; UPD(0x0C0783D8u, 2);  /* 0C0783D6 mov.l @(disp,pc),Rn */
	IF(0x0C0783D8u); r10 <<= 2;  /* 0C0783D8 shll2 Rn */
	r5 = R32(r12 + 0x24u); UPD(0x0C0783DCu, 2);  /* 0C0783DA mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C0783DC mov Rm,Rn */
	r7 = 0x40000u; UPD(0x0C0783E0u, 2);  /* 0C0783DE mov.l @(disp,pc),Rn */
	r8 = 0xC06CE70u; UPD(0x0C0783E2u, 1);  /* 0C0783E0 mov.l @(disp,pc),Rn */
	r5 += r7;  /* 0C0783E2 add Rm,Rn */
	IF(0x0C0783E4u); r4 = R32(r0 + r6); UPD(0x0C0783E6u, 2);  /* 0C0783E4 mov.l @(r0,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C0783E8u, 1);  /* 0C0783E6 mov.b @Rm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C0783EAu, 1);  /* 0C0783E8 mov.l @(disp,Rm),Rn */
	IF(0x0C0783EAu); { u32 t_ = r8; PR = 0x0C0783EEu; r7 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C0783EEu); }  /* 0C0783EA jsr @Rn */
L_0C0783EE: BLKS(0x0C0783EEu);
	r4 = 0x0u;  /* 0C0783EE mov #imm,Rn */
	{ W32(r12, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C0781F6u, 4); goto L_0C0781F6; }  /* 0C0783F0 bra */
}

void f_0C0781A0(sh3_t *c)
{
	LOCALS;
L_0C0781A0: BLKS(0x0C0781A0u);
	r10 = 0xB4u; UPD(0x0C0781A2u, 1);  /* 0C0781A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0781A2 add #imm,Rn */
	IF(0x0C0781A4u); MACL = r8 * r10;  /* 0C0781A4 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C0781A8u, 4);  /* 0C0781A6 mov.l @(disp,pc),Rn */
	IF(0x0C0781A8u); r9 = MACL;  /* 0C0781A8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0781ACu, 2);  /* 0C0781AA mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C0781AC add Rm,Rn */
	IF(0x0C0781AEu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0781B0u, 2);  /* 0C0781AE mov.b @(r0,Rm),Rn */
	r6 = r5 & 0xFF;  /* 0C0781B0 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0781B4u, 2);  /* 0C0781B2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0781B4 add #imm,Rn */
	IF(0x0C0781B6u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0781B8u, 2);  /* 0C0781B6 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C0781B8 mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C0781BA extu.b Rm,Rn */
	r12 = 0xC0AC800u; UPD(0x0C0781BEu, 3);  /* 0C0781BC mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0781C0u, 1);  /* 0C0781BE mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C0781C2u, 1);  /* 0C0781C0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0781C4u, 1);  /* 0C0781C2 mov.l @(disp,Rm),Rn */
	IF(0x0C0781C4u); { u32 t_ = r12; PR = 0x0C0781C8u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C0781C8u); }  /* 0C0781C4 jsr @Rn */
L_0C0781C8: BLKS(0x0C0781C8u);
	r12 = 0xC0A03F0u; UPD(0x0C0781CAu, 1);  /* 0C0781C8 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0781CA mov Rm,Rn */
	IF(0x0C0781CCu); { u32 t_ = r12; PR = 0x0C0781D0u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0781D0u); }  /* 0C0781CC jsr @Rn */
L_0C0781D0: BLKS(0x0C0781D0u);
	IF(0x0C0781D0u); T = (s32)r0 >= 0;  /* 0C0781D0 cmp/pz Rn */
	{ u32 c_ = !T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0781F2u, 4); goto L_0C0781F2; } goto L_0C0781D6; }  /* 0C0781D2 bf/s */
L_0C0781D6: BLKS(0x0C0781D6u);
	r12 = 0xC06CD90u; UPD(0x0C0781D8u, 2);  /* 0C0781D6 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C0781D8 mov #imm,Rn */
	r5 = r0;  /* 0C0781DA mov Rm,Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C0781DEu, 3);  /* 0C0781DC mov.l @(disp,Rm),Rn */
	IF(0x0C0781DEu); { u32 t_ = r12; PR = 0x0C0781E2u; r7 = R32(r9 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CD90, 0x0C06CD90u, 0x0C0781E2u); }  /* 0C0781DE jsr @Rn */
L_0C0781E2: BLKS(0x0C0781E2u);
	IF(0x0C0781E2u); MACL = r8 * r10;  /* 0C0781E2 mul.l Rm,Rn */
	r0 = 0xA5u; UPD(0x0C0781E6u, 3);  /* 0C0781E4 mov.w @(disp,pc),Rn */
	IF(0x0C0781E6u); r10 = MACL;  /* 0C0781E6 sts macl,Rn */
	r10 += r11;  /* 0C0781E8 add Rm,Rn */
	r10 += r0;  /* 0C0781EA add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r10); UPD(0x0C0781EEu, 4);  /* 0C0781EC mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C0781EE add #imm,Rn */
	W8(r10, r11); UPD(0x0C0781F2u, 2);  /* 0C0781F0 mov.b Rm,@Rn */
L_0C0781F2: BLKS(0x0C0781F2u);
	r4 = 0x0u;  /* 0C0781F2 mov #imm,Rn */
	W32(r9, r4); UPD(0x0C0781F6u, 2);  /* 0C0781F4 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0781F6 mov Rm,Rn */
	IF(0x0C0781F8u); PR = R32(r15); r15 += 4; UPD(0x0C0781FAu, 2);  /* 0C0781F8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0781FCu, 1);  /* 0C0781FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0781FEu, 1);  /* 0C0781FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078200u, 1);  /* 0C0781FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078202u, 1);  /* 0C078200 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078204u, 1);  /* 0C078202 mov.l @Rm+,Rn */
	IF(0x0C078204u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C078204 rts */
}

void f_0C078210(sh3_t *c)
{
	LOCALS;
	goto L_0C078210;
L_0C0781F6: BLKS(0x0C0781F6u);
	r15 = r14;  /* 0C0781F6 mov Rm,Rn */
	IF(0x0C0781F8u); PR = R32(r15); r15 += 4; UPD(0x0C0781FAu, 2);  /* 0C0781F8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0781FCu, 1);  /* 0C0781FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0781FEu, 1);  /* 0C0781FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078200u, 1);  /* 0C0781FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078202u, 1);  /* 0C078200 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078204u, 1);  /* 0C078202 mov.l @Rm+,Rn */
	IF(0x0C078204u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C078204 rts */
L_0C078210: BLKS(0x0C078210u);
	r6 = 0xB4u; UPD(0x0C078212u, 1);  /* 0C078210 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C078212 add #imm,Rn */
	IF(0x0C078214u); MACL = r8 * r6;  /* 0C078214 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C078218u, 4);  /* 0C078216 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C078218 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C07821Cu, 2);  /* 0C07821A mov.w @(disp,pc),Rn */
	IF(0x0C07821Cu); r8 = MACL;  /* 0C07821C sts macl,Rn */
	r8 += r4;  /* 0C07821E add Rm,Rn */
	IF(0x0C078220u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C078222u, 3);  /* 0C078220 mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C078222 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C078226u, 2);  /* 0C078224 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C078226 add #imm,Rn */
	IF(0x0C078228u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07822Au, 2);  /* 0C078228 mov.b @(r0,Rm),Rn */
	r2 = r9 & 0xFF;  /* 0C07822A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C07822Eu, 2);  /* 0C07822C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C078230u, 1);  /* 0C07822E mov.l @Rm,Rn */
	r11 = 0xC0AB240u; UPD(0x0C078232u, 1);  /* 0C078230 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C078232 mov #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C078236u, 2);  /* 0C078234 mov.l @(disp,Rm),Rn */
	IF(0x0C078236u); { u32 t_ = r11; PR = 0x0C07823Au; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07823Au); }  /* 0C078236 jsr @Rn */
L_0C07823A: BLKS(0x0C07823Au);
	W32(r8, r10); UPD(0x0C07823Cu, 1);  /* 0C07823A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0781F6u, 3); goto L_0C0781F6; }  /* 0C07823C bra */
}

void f_0C078240(sh3_t *c)
{
	LOCALS;
	goto L_0C078240;
L_0C0781F2: BLKS(0x0C0781F2u);
	r4 = 0x0u;  /* 0C0781F2 mov #imm,Rn */
	W32(r9, r4); UPD(0x0C0781F6u, 2);  /* 0C0781F4 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0781F6 mov Rm,Rn */
	IF(0x0C0781F8u); PR = R32(r15); r15 += 4; UPD(0x0C0781FAu, 2);  /* 0C0781F8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0781FCu, 1);  /* 0C0781FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0781FEu, 1);  /* 0C0781FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078200u, 1);  /* 0C0781FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078202u, 1);  /* 0C078200 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078204u, 1);  /* 0C078202 mov.l @Rm+,Rn */
	IF(0x0C078204u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C078204 rts */
L_0C078240: BLKS(0x0C078240u);
	r10 = 0xB4u; UPD(0x0C078242u, 1);  /* 0C078240 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C078242 add #imm,Rn */
	IF(0x0C078244u); MACL = r8 * r10;  /* 0C078244 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C078248u, 4);  /* 0C078246 mov.l @(disp,pc),Rn */
	IF(0x0C078248u); r9 = MACL;  /* 0C078248 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C07824Cu, 2);  /* 0C07824A mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C07824C add Rm,Rn */
	IF(0x0C07824Eu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C078250u, 2);  /* 0C07824E mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C078250 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C078254u, 2);  /* 0C078252 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C078254 add #imm,Rn */
	IF(0x0C078256u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C078258u, 2);  /* 0C078256 mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C078258 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07825Cu, 2);  /* 0C07825A mov.l Rm,@(disp,Rn) */
	r12 = 0xC0AC800u; UPD(0x0C07825Eu, 1);  /* 0C07825C mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C07825E mov #imm,Rn */
	r4 = R32(r9); UPD(0x0C078262u, 2);  /* 0C078260 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C078264u, 1);  /* 0C078262 mov.l @(disp,Rm),Rn */
	IF(0x0C078264u); { u32 t_ = r12; PR = 0x0C078268u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C078268u); }  /* 0C078264 jsr @Rn */
L_0C078268: BLKS(0x0C078268u);
	r4 = r8;  /* 0C078268 mov Rm,Rn */
	r8 = 0xC0A03F0u; UPD(0x0C07826Cu, 2);  /* 0C07826A mov.l @(disp,pc),Rn */
	IF(0x0C07826Cu); { u32 t_ = r8; PR = 0x0C078270u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C078270u); }  /* 0C07826C jsr @Rn */
L_0C078270: BLKS(0x0C078270u);
	IF(0x0C078270u); T = (s32)r0 >= 0;  /* 0C078270 cmp/pz Rn */
	{ u32 c_ = !T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0781F2u, 4); goto L_0C0781F2; } goto L_0C078276; }  /* 0C078272 bf/s */
L_0C078276: BLKS(0x0C078276u);
	r12 = 0xC06CD90u; UPD(0x0C078278u, 2);  /* 0C078276 mov.l @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C078278 mov #imm,Rn */
	r5 = r0;  /* 0C07827A mov Rm,Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C07827Eu, 3);  /* 0C07827C mov.l @(disp,Rm),Rn */
	IF(0x0C07827Eu); { u32 t_ = r12; PR = 0x0C078282u; r7 = R32(r9 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CD90, 0x0C06CD90u, 0x0C078282u); }  /* 0C07827E jsr @Rn */
L_0C078282: BLKS(0x0C078282u);
	IF(0x0C078282u); MACL = r8 * r10;  /* 0C078282 mul.l Rm,Rn */
	r0 = 0xA5u; UPD(0x0C078286u, 3);  /* 0C078284 mov.w @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C078286 mov #imm,Rn */
	IF(0x0C078288u); r10 = MACL;  /* 0C078288 sts macl,Rn */
	r10 += r11;  /* 0C07828A add Rm,Rn */
	r11 = 0xC050D70u; UPD(0x0C07828Eu, 4);  /* 0C07828C mov.l @(disp,pc),Rn */
	IF(0x0C07828Eu); { u32 t_ = r11; PR = 0x0C078292u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C078292u); }  /* 0C07828E jsr @Rn */
L_0C078292: BLKS(0x0C078292u);
	{ W8(r10, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0781F2u, 3); goto L_0C0781F2; }  /* 0C078292 bra */
}

void f_0C0782A0(sh3_t *c)
{
	LOCALS;
	goto L_0C0782A0;
L_0C0781F6: BLKS(0x0C0781F6u);
	r15 = r14;  /* 0C0781F6 mov Rm,Rn */
	IF(0x0C0781F8u); PR = R32(r15); r15 += 4; UPD(0x0C0781FAu, 2);  /* 0C0781F8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0781FCu, 1);  /* 0C0781FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0781FEu, 1);  /* 0C0781FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078200u, 1);  /* 0C0781FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078202u, 1);  /* 0C078200 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078204u, 1);  /* 0C078202 mov.l @Rm+,Rn */
	IF(0x0C078204u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C078204 rts */
L_0C078230: BLKS(0x0C078230u);
	r11 = 0xC0AB240u; UPD(0x0C078232u, 1);  /* 0C078230 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C078232 mov #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C078236u, 2);  /* 0C078234 mov.l @(disp,Rm),Rn */
	IF(0x0C078236u); { u32 t_ = r11; PR = 0x0C07823Au; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07823Au); }  /* 0C078236 jsr @Rn */
L_0C07823A: BLKS(0x0C07823Au);
	W32(r8, r10); UPD(0x0C07823Cu, 1);  /* 0C07823A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0781F6u, 3); goto L_0C0781F6; }  /* 0C07823C bra */
L_0C0782A0: BLKS(0x0C0782A0u);
	r3 = 0xB4u; UPD(0x0C0782A2u, 1);  /* 0C0782A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0782A2 add #imm,Rn */
	IF(0x0C0782A4u); MACL = r8 * r3;  /* 0C0782A4 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0782A8u, 4);  /* 0C0782A6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0782AAu, 1);  /* 0C0782A8 mov.w @(disp,pc),Rn */
	IF(0x0C0782AAu); r8 = MACL;  /* 0C0782AA sts macl,Rn */
	r8 += r7;  /* 0C0782AC add Rm,Rn */
	IF(0x0C0782AEu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0782B0u, 3);  /* 0C0782AE mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C0782B0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0782B4u, 2);  /* 0C0782B2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0782B4 add #imm,Rn */
	IF(0x0C0782B6u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0782B8u, 2);  /* 0C0782B6 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0782B8 mov #imm,Rn */
	r9 = r6 & 0xFF;  /* 0C0782BA extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0782BEu, 3);  /* 0C0782BC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C078230u, 3); goto L_0C078230; }  /* 0C0782BE bra */
}

void f_0C0782D0(sh3_t *c)
{
	LOCALS;
	goto L_0C0782D0;
L_0C0781F6: BLKS(0x0C0781F6u);
	r15 = r14;  /* 0C0781F6 mov Rm,Rn */
	IF(0x0C0781F8u); PR = R32(r15); r15 += 4; UPD(0x0C0781FAu, 2);  /* 0C0781F8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0781FCu, 1);  /* 0C0781FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0781FEu, 1);  /* 0C0781FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078200u, 1);  /* 0C0781FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078202u, 1);  /* 0C078200 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078204u, 1);  /* 0C078202 mov.l @Rm+,Rn */
	IF(0x0C078204u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C078204 rts */
L_0C0782D0: BLKS(0x0C0782D0u);
	r3 = 0xB4u; UPD(0x0C0782D2u, 1);  /* 0C0782D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0782D2 add #imm,Rn */
	IF(0x0C0782D4u); MACL = r8 * r3;  /* 0C0782D4 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0782D8u, 4);  /* 0C0782D6 mov.l @(disp,pc),Rn */
	IF(0x0C0782D8u); r12 = MACL;  /* 0C0782D8 sts macl,Rn */
	r10 = 0xB0u; UPD(0x0C0782DCu, 2);  /* 0C0782DA mov.w @(disp,pc),Rn */
	r12 += r7;  /* 0C0782DC add Rm,Rn */
	r10 += r12;  /* 0C0782DE add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C0782E2u, 3);  /* 0C0782E0 mov.b @Rm,Rn */
	r8 = 0x0u;  /* 0C0782E2 mov #imm,Rn */
	r5 = r2 & 0xFF;  /* 0C0782E4 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0782E8u, 3);  /* 0C0782E6 mov.l Rm,@Rn */
	r0 = 0xA9u; UPD(0x0C0782EAu, 1);  /* 0C0782E8 mov.w @(disp,pc),Rn */
	r5 = 0xCu;  /* 0C0782EA mov #imm,Rn */
	IF(0x0C0782ECu); r6 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0782EEu, 2);  /* 0C0782EC mov.b @(r0,Rm),Rn */
	r11 = 0xC0AB240u; UPD(0x0C0782F0u, 1);  /* 0C0782EE mov.l @(disp,pc),Rn */
	r4 = r6 & 0xFF;  /* 0C0782F0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0782F4u, 2);  /* 0C0782F2 mov.l Rm,@(disp,Rn) */
	r9 = 0xC06CE70u; UPD(0x0C0782F6u, 1);  /* 0C0782F4 mov.l @(disp,pc),Rn */
	r4 = R32(r12); UPD(0x0C0782F8u, 1);  /* 0C0782F6 mov.l @Rm,Rn */
	r6 = R32(r12 + 0x24u); UPD(0x0C0782FAu, 1);  /* 0C0782F8 mov.l @(disp,Rm),Rn */
	IF(0x0C0782FAu); { u32 t_ = r11; PR = 0x0C0782FEu; r7 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0782FEu); }  /* 0C0782FA jsr @Rn */
L_0C0782FE: BLKS(0x0C0782FEu);
	r5 = R32(r12 + 0x24u); UPD(0x0C078300u, 1);  /* 0C0782FE mov.l @(disp,Rm),Rn */
	r15 += 0x8u;  /* 0C078300 add #imm,Rn */
	r0 = 0x40000u; UPD(0x0C078304u, 2);  /* 0C078302 mov.l @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C078304 mov #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C078308u, 2);  /* 0C078306 mov.b @Rm,Rn */
	r5 += r0;  /* 0C078308 add Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C07830A extu.b Rm,Rn */
	IF(0x0C07830Cu); { u32 t_ = r9; PR = 0x0C078310u; r6 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLD(t_, 0x0C078310u); }  /* 0C07830C jsr @Rn */
L_0C078310: BLKS(0x0C078310u);
	{ W32(r12, r8); /* slot mov.l Rm,@Rn */ UPD(0x0C0781F6u, 3); goto L_0C0781F6; }  /* 0C078310 bra */
}

void f_0C078420(sh3_t *c)
{
	LOCALS;
	goto L_0C078420;
L_0C078150: BLKS(0x0C078150u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C078152u, 1);  /* 0C078150 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C078154u, 1);  /* 0C078152 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C078154 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C078158u, 2);  /* 0C078156 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07815Au, 1);  /* 0C078158 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C07815Cu, 1);  /* 0C07815A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07815Eu, 1);  /* 0C07815C mov.l Rm,@-Rn */
	IF(0x0C07815Eu); MACL = r8 * r2;  /* 0C07815E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C078162u, 3);  /* 0C078160 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C078164u, 1);  /* 0C078162 mov.l @(disp,pc),Rn */
	IF(0x0C078164u); r12 = MACL;  /* 0C078164 sts macl,Rn */
	IF(0x0C078166u); r15 -= 4; W32(r15, PR); UPD(0x0C078168u, 2);  /* 0C078166 sts.l pr,@-Rn */
	r12 += r0;  /* 0C078168 add Rm,Rn */
	r2 = R32(r12 + 0x8u); UPD(0x0C07816Cu, 2);  /* 0C07816A mov.l @(disp,Rm),Rn */
	r0 = 0x7u;  /* 0C07816C mov #imm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C07816E add #imm,Rn */
	T = r2 > r0;  /* 0C078170 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07817Au, 6); goto L_0C07817A; } goto L_0C078176; }  /* 0C078172 bf/s */
L_0C078176: BLKS(0x0C078176u);
	{ r10 = R32(r12 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C078340u, 4); goto L_0C078340; }  /* 0C078176 bra */
L_0C07817A: BLKS(0x0C07817Au);
	r0 = 0xC07818Cu;  /* 0C07817A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07817C add Rm,Rn */
	IF(0x0C07817Eu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C078180u, 3);  /* 0C07817E mov.w @(r0,Rm),Rn */
	IF(0x0C078180u); { u32 tv_ = (r3 + 0x0C078184u); u32 t_ = PHYS(tv_); IF(0x0C078182u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C078180 braf Rn */
L_0C0781F6: BLKS(0x0C0781F6u);
	r15 = r14;  /* 0C0781F6 mov Rm,Rn */
	IF(0x0C0781F8u); PR = R32(r15); r15 += 4; UPD(0x0C0781FAu, 2);  /* 0C0781F8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0781FCu, 1);  /* 0C0781FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0781FEu, 1);  /* 0C0781FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078200u, 1);  /* 0C0781FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078202u, 1);  /* 0C078200 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078204u, 1);  /* 0C078202 mov.l @Rm+,Rn */
	IF(0x0C078204u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C078204 rts */
L_0C078340: BLKS(0x0C078340u);
	r15 += 0xFFFFFFF8u;  /* 0C078340 add #imm,Rn */
	r7 = 0x80000u; UPD(0x0C078344u, 2);  /* 0C078342 mov.l @(disp,pc),Rn */
	r5 = 0xEu;  /* 0C078344 mov #imm,Rn */
	r10 += r7;  /* 0C078346 add Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C07834Au, 3);  /* 0C078348 mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C07834A mov Rm,Rn */
	r9 = 0xFFC60000u; UPD(0x0C07834Eu, 2);  /* 0C07834C mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C07834E add Rm,Rn */
	r9 = 0xB0u; UPD(0x0C078352u, 2);  /* 0C078350 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C078352 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C078356u, 2);  /* 0C078354 mov.b @Rm,Rn */
	r8 = r2 & 0xFF;  /* 0C078356 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C07835Au, 2);  /* 0C078358 mov.l Rm,@Rn */
	r8 = 0xA9u; UPD(0x0C07835Cu, 1);  /* 0C07835A mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C07835C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C078360u, 2);  /* 0C07835E mov.b @Rm,Rn */
	r11 = r0 & 0xFF;  /* 0C078360 extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C078364u, 2);  /* 0C078362 mov.l Rm,@(disp,Rn) */
	r11 = 0xC0AB240u; UPD(0x0C078366u, 1);  /* 0C078364 mov.l @(disp,pc),Rn */
	IF(0x0C078366u); { u32 t_ = r11; PR = 0x0C07836Au; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07836Au); }  /* 0C078366 jsr @Rn */
L_0C07836A: BLKS(0x0C07836Au);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C07836Cu, 1);  /* 0C07836A mov.b @Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C07836Eu, 1);  /* 0C07836C mov.l @(disp,Rm),Rn */
	r4 = r6 & 0xFF;  /* 0C07836E extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C078372u, 2);  /* 0C078370 mov.l Rm,@Rn */
	r6 = r10;  /* 0C078372 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C078376u, 2);  /* 0C078374 mov.b @Rm,Rn */
	r5 = 0xFFE30000u; UPD(0x0C078378u, 1);  /* 0C078376 mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFF;  /* 0C078378 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C07837Cu, 2);  /* 0C07837A mov.l Rm,@(disp,Rn) */
	r7 += r5;  /* 0C07837C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C078380u, 2);  /* 0C07837E mov.l @Rm,Rn */
	IF(0x0C078380u); { u32 t_ = r11; PR = 0x0C078384u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C078384u); }  /* 0C078380 jsr @Rn */
L_0C078384: BLKS(0x0C078384u);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C078386u, 1);  /* 0C078384 mov.b @Rm,Rn */
	r5 = r0 & 0xFF;  /* 0C078386 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C07838Au, 2);  /* 0C078388 mov.l Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C07838Cu, 1);  /* 0C07838A mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C07838C mov #imm,Rn */
	r7 = r6 & 0xFF;  /* 0C07838E extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C078392u, 3);  /* 0C078390 mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C078392 mov Rm,Rn */
	r4 = R32(r12); UPD(0x0C078396u, 2);  /* 0C078394 mov.l @Rm,Rn */
	IF(0x0C078396u); { u32 t_ = r11; PR = 0x0C07839Au; r7 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07839Au); }  /* 0C078396 jsr @Rn */
L_0C07839A: BLKS(0x0C07839Au);
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C07839Cu, 1);  /* 0C07839A mov.b @Rm,Rn */
	r6 = r10;  /* 0C07839C mov Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C0783A0u, 2);  /* 0C07839E mov.l @(disp,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C0783A0 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0783A4u, 2);  /* 0C0783A2 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C0783A6u, 1);  /* 0C0783A4 mov.b @Rm,Rn */
	r4 = 0x1D0000u; UPD(0x0C0783A8u, 1);  /* 0C0783A6 mov.l @(disp,pc),Rn */
	r5 = r0 & 0xFF;  /* 0C0783A8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0783ACu, 2);  /* 0C0783AA mov.l Rm,@(disp,Rn) */
	r7 += r4;  /* 0C0783AC add Rm,Rn */
	r4 = R32(r12); UPD(0x0C0783B0u, 2);  /* 0C0783AE mov.l @Rm,Rn */
	IF(0x0C0783B0u); { u32 t_ = r11; PR = 0x0C0783B4u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0783B4u); }  /* 0C0783B0 jsr @Rn */
L_0C0783B4: BLKS(0x0C0783B4u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C0783B6u, 1);  /* 0C0783B4 mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C0783B6 mov #imm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C0783BAu, 2);  /* 0C0783B8 mov.l @(disp,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C0783BA extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0783BEu, 2);  /* 0C0783BC mov.l Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C0783C0u, 1);  /* 0C0783BE mov.b @Rm,Rn */
	r6 = 0x3A0000u; UPD(0x0C0783C2u, 1);  /* 0C0783C0 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0783C2 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0783C6u, 2);  /* 0C0783C4 mov.l Rm,@(disp,Rn) */
	r7 += r6;  /* 0C0783C6 add Rm,Rn */
	r6 = r10;  /* 0C0783C8 mov Rm,Rn */
	IF(0x0C0783CAu); { u32 t_ = r11; PR = 0x0C0783CEu; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0783CEu); }  /* 0C0783CA jsr @Rn */
L_0C0783CE: BLKS(0x0C0783CEu);
	r5 = 0xA5u; UPD(0x0C0783D0u, 1);  /* 0C0783CE mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C0783D0 mov Rm,Rn */
	IF(0x0C0783D2u); r10 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0783D4u, 2);  /* 0C0783D2 mov.b @(r0,Rm),Rn */
	r15 += 0x8u;  /* 0C0783D4 add #imm,Rn */
	r6 = 0xC189F6Cu; UPD(0x0C0783D8u, 2);  /* 0C0783D6 mov.l @(disp,pc),Rn */
	IF(0x0C0783D8u); r10 <<= 2;  /* 0C0783D8 shll2 Rn */
	r5 = R32(r12 + 0x24u); UPD(0x0C0783DCu, 2);  /* 0C0783DA mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C0783DC mov Rm,Rn */
	r7 = 0x40000u; UPD(0x0C0783E0u, 2);  /* 0C0783DE mov.l @(disp,pc),Rn */
	r8 = 0xC06CE70u; UPD(0x0C0783E2u, 1);  /* 0C0783E0 mov.l @(disp,pc),Rn */
	r5 += r7;  /* 0C0783E2 add Rm,Rn */
	IF(0x0C0783E4u); r4 = R32(r0 + r6); UPD(0x0C0783E6u, 2);  /* 0C0783E4 mov.l @(r0,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C0783E8u, 1);  /* 0C0783E6 mov.b @Rm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C0783EAu, 1);  /* 0C0783E8 mov.l @(disp,Rm),Rn */
	IF(0x0C0783EAu); { u32 t_ = r8; PR = 0x0C0783EEu; r7 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C0783EEu); }  /* 0C0783EA jsr @Rn */
L_0C0783EE: BLKS(0x0C0783EEu);
	r4 = 0x0u;  /* 0C0783EE mov #imm,Rn */
	{ W32(r12, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C0781F6u, 4); goto L_0C0781F6; }  /* 0C0783F0 bra */
L_0C078420: BLKS(0x0C078420u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C078422u, 1);  /* 0C078420 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C078422 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C078426u, 2);  /* 0C078424 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C078428u, 1);  /* 0C078426 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07842Au, 1);  /* 0C078428 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07842Cu, 1);  /* 0C07842A mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C07842Eu, 1);  /* 0C07842C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C078430u, 1);  /* 0C07842E mov.l Rm,@-Rn */
	IF(0x0C078430u); MACL = r1 * r3;  /* 0C078430 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C078434u, 3);  /* 0C078432 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C078436u, 1);  /* 0C078434 mov.l @(disp,pc),Rn */
	IF(0x0C078436u); r2 = MACL;  /* 0C078436 sts macl,Rn */
	IF(0x0C078438u); r15 -= 4; W32(r15, PR); UPD(0x0C07843Au, 2);  /* 0C078438 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07843A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07843Eu, 2);  /* 0C07843C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07843E add #imm,Rn */
	r14 = r15;  /* 0C078440 mov Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C078442 add #imm,Rn */
	r0 = 0x6u;  /* 0C078444 mov #imm,Rn */
	T = r2 > r0;  /* 0C078446 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W32(r14, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C078450u, 8); goto L_0C078450; } UPD(0x0C07844Cu, 1); goto L_0C07844C; }  /* 0C078448 bf/s */
L_0C07844C: BLKS(0x0C07844Cu);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C078546u, 3); goto L_0C078546; }  /* 0C07844C bra */
L_0C078450: BLKS(0x0C078450u);
	r0 = 0xC078460u;  /* 0C078450 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C078452 add Rm,Rn */
	IF(0x0C078454u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C078456u, 3);  /* 0C078454 mov.w @(r0,Rm),Rn */
	IF(0x0C078456u); { u32 tv_ = (r4 + 0x0C07845Au); u32 t_ = PHYS(tv_); IF(0x0C078458u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C078470u: goto L_0C078470; case 0x0C078630u: goto L_0C078630; case 0x0C0786F0u: goto L_0C0786F0; case 0x0C0788C0u: goto L_0C0788C0; case 0x0C078940u: goto L_0C078940; default: JUMPD(tv_); } }  /* 0C078456 braf Rn */
L_0C078470: BLKS(0x0C078470u);
	r8 = 0xC0A0540u; UPD(0x0C078472u, 1);  /* 0C078470 mov.l @(disp,pc),Rn */
	IF(0x0C078472u); { u32 t_ = r8; PR = 0x0C078476u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C078476u); }  /* 0C078472 jsr @Rn */
L_0C078476: BLKS(0x0C078476u);
	IF(0x0C078476u); T = (s32)r0 >= 0;  /* 0C078476 cmp/pz Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C078480u, 4); goto L_0C078480; } goto L_0C07847C; }  /* 0C078478 bt/s */
L_0C07847C: BLKS(0x0C07847Cu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C0785F2u, 4); goto L_0C0785F2; }  /* 0C07847C bra */
L_0C078480: BLKS(0x0C078480u);
	r7 = 0xB4u; UPD(0x0C078482u, 1);  /* 0C078480 mov.w @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C078484u, 1);  /* 0C078482 mov.l @Rm,Rn */
	IF(0x0C078484u); MACL = r0 * r7;  /* 0C078484 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C078488u, 3);  /* 0C078486 mov.l @(disp,pc),Rn */
	IF(0x0C078488u); r3 = MACL;  /* 0C078488 sts macl,Rn */
	IF(0x0C07848Au); MACL = r9 * r7;  /* 0C07848A mul.l Rm,Rn */
	r3 += r13;  /* 0C07848C add Rm,Rn */
	r6 = 0x9Fu; UPD(0x0C078490u, 5);  /* 0C07848E mov.w @(disp,pc),Rn */
	IF(0x0C078490u); r7 = MACL;  /* 0C078490 sts macl,Rn */
	r7 += r13;  /* 0C078492 add Rm,Rn */
	r11 = R32(r7 + 0x24u); UPD(0x0C078496u, 3);  /* 0C078494 mov.l @(disp,Rm),Rn */
	r0 = r3;  /* 0C078496 mov Rm,Rn */
	r9 = R32(r7 + 0x28u); UPD(0x0C07849Au, 2);  /* 0C078498 mov.l @(disp,Rm),Rn */
	r12 = R32(r3 + 0x2Cu); UPD(0x0C07849Cu, 1);  /* 0C07849A mov.l @(disp,Rm),Rn */
	r10 = R32(r3 + 0x30u); UPD(0x0C07849Eu, 1);  /* 0C07849C mov.l @(disp,Rm),Rn */
	r11 += r12;  /* 0C07849E add Rm,Rn */
	IF(0x0C0784A0u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0784A2u, 2);  /* 0C0784A0 mov.b @(r0,Rm),Rn */
	r9 += r10;  /* 0C0784A2 add Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C0784A4 extu.b Rm,Rn */
	W32(r3 + 0x24u, r11); UPD(0x0C0784A8u, 3);  /* 0C0784A6 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C0784A8 tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x28u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C078560u, 4); goto L_0C078560; } UPD(0x0C0784AEu, 1); goto L_0C0784AE; }  /* 0C0784AA bt/s */
L_0C0784AE: BLKS(0x0C0784AEu);
	T = r0 == 0x1u;  /* 0C0784AE cmp/eq #imm,r0 */
	{ u32 c_ = T; r0 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0784F0u, 4); goto L_0C0784F0; } UPD(0x0C0784B4u, 1); goto L_0C0784B4; }  /* 0C0784B0 bt/s */
L_0C0784B4: BLKS(0x0C0784B4u);
	r2 = 0xB4u; UPD(0x0C0784B6u, 1);  /* 0C0784B4 mov.w @(disp,pc),Rn */
	r13 = 0x3Fu;  /* 0C0784B6 mov #imm,Rn */
	r0 = R32(r14); UPD(0x0C0784BAu, 2);  /* 0C0784B8 mov.l @Rm,Rn */
	IF(0x0C0784BAu); MACL = r0 * r2;  /* 0C0784BA mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C0784BEu, 3);  /* 0C0784BC mov.l @(disp,pc),Rn */
	IF(0x0C0784BEu); r2 = MACL;  /* 0C0784BE sts macl,Rn */
	r2 += r8;  /* 0C0784C0 add Rm,Rn */
	r7 = 0x86u; UPD(0x0C0784C4u, 3);  /* 0C0784C2 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C0784C4 mov Rm,Rn */
	IF(0x0C0784C6u); r1 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C0784C8u, 2);  /* 0C0784C6 mov.w @(r0,Rm),Rn */
	r1 += 0x4u;  /* 0C0784C8 add #imm,Rn */
	IF(0x0C0784CAu); r1 >>= 2;  /* 0C0784CA shlr2 Rn */
	IF(0x0C0784CCu); T = r1 & 1; r1 >>= 1;  /* 0C0784CC shlr Rn */
	r1 &= r13;  /* 0C0784CE and Rm,Rn */
	UPD(0x0C0784D0u, 4);
L_0C0784D0: BLKS(0x0C0784D0u);
	W32(r2 + 0xCu, r1); UPD(0x0C0784D2u, 1);  /* 0C0784D0 mov.l Rm,@(disp,Rn) */
L_0C0784D2: BLKS(0x0C0784D2u);
	r4 = R32(r14); UPD(0x0C0784D4u, 1);  /* 0C0784D2 mov.l @Rm,Rn */
	r1 = 0xC0A0380u; UPD(0x0C0784D6u, 1);  /* 0C0784D4 mov.l @(disp,pc),Rn */
L_0C0784D6: BLKS(0x0C0784D6u);
	r14 += 0x4u;  /* 0C0784D6 add #imm,Rn */
	UPD(0x0C0784D8u, 1);
L_0C0784D8: BLKS(0x0C0784D8u);
	r15 = r14;  /* 0C0784D8 mov Rm,Rn */
	IF(0x0C0784DAu); PR = R32(r15); r15 += 4; UPD(0x0C0784DCu, 2);  /* 0C0784DA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0784DEu, 1);  /* 0C0784DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0784E0u, 1);  /* 0C0784DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0784E2u, 1);  /* 0C0784E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0784E4u, 1);  /* 0C0784E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0784E6u, 1);  /* 0C0784E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0784E8u, 1);  /* 0C0784E6 mov.l @Rm+,Rn */
	IF(0x0C0784E8u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C078150u: goto L_0C078150; case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C0784E8 jmp @Rn */
L_0C0784F0: BLKS(0x0C0784F0u);
	r11 = 0xA5u; UPD(0x0C0784F2u, 1);  /* 0C0784F0 mov.w @(disp,pc),Rn */
	IF(0x0C0784F2u); r2 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0784F4u, 1);  /* 0C0784F2 mov.b @(r0,Rm),Rn */
	r13 = 0x0u;  /* 0C0784F4 mov #imm,Rn */
	r5 = 0x88u; UPD(0x0C0784F8u, 2);  /* 0C0784F6 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0784F8 add #imm,Rn */
	r7 = 0x84u; UPD(0x0C0784FCu, 2);  /* 0C0784FA mov.w @(disp,pc),Rn */
	r5 += r3;  /* 0C0784FC add Rm,Rn */
	r4 = 0xFFu; UPD(0x0C078500u, 2);  /* 0C0784FE mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C078500 add Rm,Rn */
	IF(0x0C078502u); ;  /* 0C078502 nop */
	UPD(0x0C078504u, 2);
L_0C078504: BLKS(0x0C078504u);
	T = (s32)r13 >= (s32)r2;  /* 0C078504 cmp/ge Rm,Rn */
	{ u32 c_ = T; r6 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0784B4u, 4); goto L_0C0784B4; } goto L_0C07850A; }  /* 0C078506 bt/s */
L_0C07850A: BLKS(0x0C07850Au);
	r6 += 0x2u;  /* 0C07850A add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r5); UPD(0x0C07850Eu, 3);  /* 0C07850C mov.w @Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r6); UPD(0x0C078510u, 1);  /* 0C07850E mov.w @Rm,Rn */
	r11 = r10;  /* 0C078510 mov Rm,Rn */
	r12 = 0x1FFu; UPD(0x0C078514u, 2);  /* 0C078512 mov.w @(disp,pc),Rn */
	r11 -= r3;  /* 0C078514 sub Rm,Rn */
	r11 &= r12;  /* 0C078516 and Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C078518 tst Rm,Rn */
	if (T) { UPD(0x0C078540u, 6); goto L_0C078540; }  /* 0C07851A bt */
L_0C07851C: BLKS(0x0C07851Cu);
	T = (s32)r11 > (s32)r4;  /* 0C07851C cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C078530u, 4); goto L_0C078530; } goto L_0C078522; }  /* 0C07851E bt/s */
L_0C078522: BLKS(0x0C078522u);
	r1 = r3;  /* 0C078522 mov Rm,Rn */
	r1 += 0x1u;  /* 0C078524 add #imm,Rn */
	UPD(0x0C078526u, 3);
L_0C078526: BLKS(0x0C078526u);
	r3 = r13;  /* 0C078526 mov Rm,Rn */
	r3 += 0x1u;  /* 0C078528 add #imm,Rn */
	W16(r6, r1); UPD(0x0C07852Cu, 3);  /* 0C07852A mov.w Rm,@Rn */
	{ r13 = (u32)(s32)(s16)r3; /* slot exts.w Rm,Rn */ UPD(0x0C078504u, 3); goto L_0C078504; }  /* 0C07852C bra */
L_0C078530: BLKS(0x0C078530u);
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C078526u, 3); goto L_0C078526; }  /* 0C078530 bra */
L_0C078540: BLKS(0x0C078540u);
	r6 = 0x9Fu; UPD(0x0C078542u, 1);  /* 0C078540 mov.w @(disp,pc),Rn */
	IF(0x0C078542u); W8(r0 + r6, r11); UPD(0x0C078544u, 1);  /* 0C078542 mov.b Rm,@(r0,Rn) */
L_0C078544: BLKS(0x0C078544u);
	r14 += 0x4u;  /* 0C078544 add #imm,Rn */
	UPD(0x0C078546u, 1);
L_0C078546: BLKS(0x0C078546u);
	r15 = r14;  /* 0C078546 mov Rm,Rn */
	IF(0x0C078548u); PR = R32(r15); r15 += 4; UPD(0x0C07854Au, 2);  /* 0C078548 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07854Cu, 1);  /* 0C07854A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07854Eu, 1);  /* 0C07854C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C078550u, 1);  /* 0C07854E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078552u, 1);  /* 0C078550 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078554u, 1);  /* 0C078552 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078556u, 1);  /* 0C078554 mov.l @Rm+,Rn */
	IF(0x0C078556u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C078556 rts */
L_0C078560: BLKS(0x0C078560u);
	r6 = 0x98u; UPD(0x0C078562u, 1);  /* 0C078560 mov.w @(disp,pc),Rn */
	r10 = 0x1Du;  /* 0C078562 mov #imm,Rn */
	r6 += r3;  /* 0C078564 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C078568u, 3);  /* 0C078566 mov.b @Rm,Rn */
	r0 = r3;  /* 0C078568 mov Rm,Rn */
	r2 += 0x1u;  /* 0C07856A add #imm,Rn */
	r5 = 0xA5u; UPD(0x0C07856Eu, 3);  /* 0C07856C mov.w @(disp,pc),Rn */
	r9 = r2 & 0xFF;  /* 0C07856E extu.b Rm,Rn */
	W8(r6, r2); UPD(0x0C078572u, 2);  /* 0C078570 mov.b Rm,@Rn */
	T = r10 >= r9;  /* 0C078572 cmp/hs Rm,Rn */
	IF(0x0C078574u); r8 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C078576u, 2);  /* 0C078574 mov.b @(r0,Rm),Rn */
	IF(0x0C078576u); r2 = T;  /* 0C078576 movt Rn */
	T = (r8 & r8) == 0;  /* 0C078578 tst Rm,Rn */
	IF(0x0C07857Au); r4 = T;  /* 0C07857A movt Rn */
	r2 &= r4;  /* 0C07857C and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07857E tst Rm,Rn */
	if (!T) { UPD(0x0C078544u, 8); goto L_0C078544; }  /* 0C078580 bf */
L_0C078582: BLKS(0x0C078582u);
	W8(r6, r2); UPD(0x0C078584u, 1);  /* 0C078582 mov.b Rm,@Rn */
	r1 = R32(r7 + 0x24u); UPD(0x0C078586u, 1);  /* 0C078584 mov.l @(disp,Rm),Rn */
	r6 = 0x3FFFFFu; UPD(0x0C078588u, 1);  /* 0C078586 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r6;  /* 0C078588 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0785B0u, 4); goto L_0C0785B0; }  /* 0C07858A bt */
L_0C07858C: BLKS(0x0C07858Cu);
	r11 = 0x88u; UPD(0x0C07858Eu, 1);  /* 0C07858C mov.w @(disp,pc),Rn */
	r11 += r3;  /* 0C07858E add Rm,Rn */
	r11 += 0x2u;  /* 0C078590 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r11); UPD(0x0C078594u, 3);  /* 0C078592 mov.w @Rm,Rn */
	{ u32 v_ = r3; r11 -= 2; W16(r11, v_); } UPD(0x0C078596u, 1);  /* 0C078594 mov.w Rm,@-Rn */
L_0C078596: BLKS(0x0C078596u);
	r1 = R32(r14); UPD(0x0C078598u, 1);  /* 0C078596 mov.l @Rm,Rn */
	r6 = 0xB4u; UPD(0x0C07859Au, 1);  /* 0C078598 mov.w @(disp,pc),Rn */
	IF(0x0C07859Au); MACL = r1 * r6;  /* 0C07859A mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C07859Eu, 3);  /* 0C07859C mov.l @(disp,pc),Rn */
	IF(0x0C07859Eu); r0 = MACL;  /* 0C07859E sts macl,Rn */
	r5 = 0x9Fu; UPD(0x0C0785A2u, 2);  /* 0C0785A0 mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C0785A2 add Rm,Rn */
	r0 += r5;  /* 0C0785A4 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C0785A8u, 3);  /* 0C0785A6 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0785A8 add #imm,Rn */
	{ W8(r0, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C0784B4u, 4); goto L_0C0784B4; }  /* 0C0785AA bra */
L_0C0785B0: BLKS(0x0C0785B0u);
	r9 = 0x88u; UPD(0x0C0785B2u, 1);  /* 0C0785B0 mov.w @(disp,pc),Rn */
	r9 += r3;  /* 0C0785B2 add Rm,Rn */
	r8 = r9;  /* 0C0785B4 mov Rm,Rn */
	r8 += 0x2u;  /* 0C0785B6 add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C0785BAu, 4);  /* 0C0785B8 mov.w @Rm,Rn */
	r12 = 0x100u; UPD(0x0C0785BCu, 1);  /* 0C0785BA mov.w @(disp,pc),Rn */
	T = r13 == r12;  /* 0C0785BC cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0785E0u, 4); goto L_0C0785E0; }  /* 0C0785BE bt */
L_0C0785C0: BLKS(0x0C0785C0u);
	r10 = 0xC050D70u; UPD(0x0C0785C2u, 1);  /* 0C0785C0 mov.l @(disp,pc),Rn */
	r4 = 0xFFu; UPD(0x0C0785C4u, 1);  /* 0C0785C2 mov.w @(disp,pc),Rn */
	IF(0x0C0785C4u); { u32 t_ = r10; PR = 0x0C0785C8u; IF(0x0C0785C6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0785C8u); }  /* 0C0785C4 jsr @Rn */
L_0C0785C8: BLKS(0x0C0785C8u);
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C0785CAu, 1);  /* 0C0785C8 mov.w @Rm,Rn */
	r0 += r7;  /* 0C0785CA add Rm,Rn */
	r0 += 0xFFFFFF80u;  /* 0C0785CC add #imm,Rn */
	{ W16(r9, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C078596u, 5); goto L_0C078596; }  /* 0C0785CE bra */
L_0C0785E0: BLKS(0x0C0785E0u);
	r8 = 0xC050D70u; UPD(0x0C0785E2u, 1);  /* 0C0785E0 mov.l @(disp,pc),Rn */
	r4 = 0x200u; UPD(0x0C0785E4u, 1);  /* 0C0785E2 mov.w @(disp,pc),Rn */
	IF(0x0C0785E4u); { u32 t_ = r8; PR = 0x0C0785E8u; IF(0x0C0785E6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0785E8u); }  /* 0C0785E4 jsr @Rn */
L_0C0785E8: BLKS(0x0C0785E8u);
	{ W16(r9, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C078596u, 3); goto L_0C078596; }  /* 0C0785E8 bra */
L_0C0785F0: BLKS(0x0C0785F0u);
	r4 = R32(r14); UPD(0x0C0785F2u, 1);  /* 0C0785F0 mov.l @Rm,Rn */
L_0C0785F2: BLKS(0x0C0785F2u);
	r1 = 0xC078150u; UPD(0x0C0785F4u, 1);  /* 0C0785F2 mov.l @(disp,pc),Rn */
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0784D8u, 3); goto L_0C0784D8; }  /* 0C0785F4 bra */
L_0C078630: BLKS(0x0C078630u);
	r8 = 0xC0A03F0u; UPD(0x0C078632u, 1);  /* 0C078630 mov.l @(disp,pc),Rn */
	IF(0x0C078632u); { u32 t_ = r8; PR = 0x0C078636u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C078636u); }  /* 0C078632 jsr @Rn */
L_0C078636: BLKS(0x0C078636u);
	IF(0x0C078636u); T = (s32)r0 >= 0;  /* 0C078636 cmp/pz Rn */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0785F0u, 4); goto L_0C0785F0; } goto L_0C07863C; }  /* 0C078638 bf/s */
L_0C07863C: BLKS(0x0C07863Cu);
	r8 = R32(r14); UPD(0x0C07863Eu, 2);  /* 0C07863C mov.l @Rm,Rn */
	r10 = 0xB4u; UPD(0x0C078640u, 1);  /* 0C07863E mov.w @(disp,pc),Rn */
	IF(0x0C078640u); MACL = r8 * r10;  /* 0C078640 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C078644u, 3);  /* 0C078642 mov.l @(disp,pc),Rn */
	IF(0x0C078644u); r8 = MACL;  /* 0C078644 sts macl,Rn */
	IF(0x0C078646u); MACL = r0 * r10;  /* 0C078646 mul.l Rm,Rn */
	r8 += r6;  /* 0C078648 add Rm,Rn */
	r12 = 0x98u; UPD(0x0C07864Cu, 5);  /* 0C07864A mov.w @(disp,pc),Rn */
	IF(0x0C07864Cu); r10 = MACL;  /* 0C07864C sts macl,Rn */
	r11 = r8;  /* 0C07864E mov Rm,Rn */
	r10 += r6;  /* 0C078650 add Rm,Rn */
	r11 += r12;  /* 0C078652 add Rm,Rn */
	r5 = 0xA4u; UPD(0x0C078656u, 5);  /* 0C078654 mov.w @(disp,pc),Rn */
	r12 += r10;  /* 0C078656 add Rm,Rn */
	r2 = 0x84u; UPD(0x0C07865Au, 2);  /* 0C078658 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C07865A mov Rm,Rn */
	r12 += 0x2u;  /* 0C07865C add #imm,Rn */
	r0 += r5;  /* 0C07865E add Rm,Rn */
	r6 = r8;  /* 0C078660 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C078664u, 5);  /* 0C078662 mov.b @Rm,Rn */
	r5 += r8;  /* 0C078664 add Rm,Rn */
	r6 += r2;  /* 0C078666 add Rm,Rn */
	r11 += 0x2u;  /* 0C078668 add #imm,Rn */
	r5 += 0x1u;  /* 0C07866A add #imm,Rn */
	r2 += r10;  /* 0C07866C add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r5); UPD(0x0C078670u, 6);  /* 0C07866E mov.b @Rm,Rn */
	r2 += 0x2u;  /* 0C078670 add #imm,Rn */
	W8(r11, r3); UPD(0x0C078674u, 2);  /* 0C078672 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C078674 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r2); UPD(0x0C078678u, 2);  /* 0C078676 mov.w @Rm,Rn */
	r8 += 0x50u;  /* 0C078678 add #imm,Rn */
	r4 = 0x1FFu; UPD(0x0C07867Cu, 2);  /* 0C07867A mov.w @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C07867C add #imm,Rn */
	r12 = 0xC058060u; UPD(0x0C078680u, 2);  /* 0C07867E mov.l @(disp,pc),Rn */
	r7 &= r4;  /* 0C078680 and Rm,Rn */
	r11 = R32(r8); UPD(0x0C078684u, 2);  /* 0C078682 mov.l @Rm,Rn */
	r4 = r7;  /* 0C078684 mov Rm,Rn */
	W8(r0, r13); UPD(0x0C078688u, 2);  /* 0C078686 mov.b Rm,@Rn */
	r5 = r11;  /* 0C078688 mov Rm,Rn */
	r13 = r7;  /* 0C07868A mov Rm,Rn */
	IF(0x0C07868Cu); { u32 t_ = r12; PR = 0x0C078690u; W16(r6, r7); /* slot mov.w Rm,@Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C078690u); }  /* 0C07868C jsr @Rn */
L_0C078690: BLKS(0x0C078690u);
	r3 = R32(r10 + 0x24u); UPD(0x0C078692u, 1);  /* 0C078690 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C078692 add #imm,Rn */
	r12 = 0xC058030u; UPD(0x0C078696u, 2);  /* 0C078694 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C078696 add Rm,Rn */
	r4 = r13;  /* 0C078698 mov Rm,Rn */
	r5 = r11;  /* 0C07869A mov Rm,Rn */
	IF(0x0C07869Cu); { u32 t_ = r12; PR = 0x0C0786A0u; W32(r8 + 0x24u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0786A0u); }  /* 0C07869C jsr @Rn */
L_0C0786A0: BLKS(0x0C0786A0u);
	r5 = R32(r10 + 0x28u); UPD(0x0C0786A2u, 1);  /* 0C0786A0 mov.l @(disp,Rm),Rn */
	r13 += 0xFFFFFF80u;  /* 0C0786A2 add #imm,Rn */
	r5 += r0;  /* 0C0786A4 add Rm,Rn */
	r1 = 0x100u; UPD(0x0C0786A8u, 3);  /* 0C0786A6 mov.w @(disp,pc),Rn */
	r0 = r13 & 0xFFFF;  /* 0C0786A8 extu.w Rm,Rn */
	T = r0 > r1;  /* 0C0786AA cmp/hi Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0786E0u, 5); goto L_0C0786E0; } UPD(0x0C0786B0u, 1); goto L_0C0786B0; }  /* 0C0786AC bf/s */
L_0C0786B0: BLKS(0x0C0786B0u);
	r1 += 0xFFFFFFA8u;  /* 0C0786B0 add #imm,Rn */
	r10 += r1;  /* 0C0786B2 add Rm,Rn */
	r8 += r1;  /* 0C0786B4 add Rm,Rn */
	r10 += 0x1u;  /* 0C0786B6 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C0786BAu, 5);  /* 0C0786B8 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0786BA add #imm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0786BC add #imm,Rn */
	UPD(0x0C0786BEu, 2);
L_0C0786BE: BLKS(0x0C0786BEu);
	W8(r8, r1); UPD(0x0C0786C0u, 1);  /* 0C0786BE mov.b Rm,@Rn */
	r0 = 0xB4u; UPD(0x0C0786C2u, 1);  /* 0C0786C0 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0786C4u, 1);  /* 0C0786C2 mov.l @Rm,Rn */
	IF(0x0C0786C4u); MACL = r1 * r0;  /* 0C0786C4 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0786C8u, 3);  /* 0C0786C6 mov.l @(disp,pc),Rn */
	IF(0x0C0786C8u); r4 = MACL;  /* 0C0786C8 sts macl,Rn */
	IF(0x0C0786CAu); MACL = r9 * r0;  /* 0C0786CA mul.l Rm,Rn */
	IF(0x0C0786CCu); r9 = MACL;  /* 0C0786CC sts macl,Rn */
	r9 += r2;  /* 0C0786CE add Rm,Rn */
	r1 = R32(r9 + 0xCu); UPD(0x0C0786D2u, 6);  /* 0C0786D0 mov.l @(disp,Rm),Rn */
	{ r2 += r4; /* slot add Rm,Rn */ UPD(0x0C0784D0u, 3); goto L_0C0784D0; }  /* 0C0786D2 bra */
L_0C0786E0: BLKS(0x0C0786E0u);
	r7 = 0xA8u; UPD(0x0C0786E2u, 1);  /* 0C0786E0 mov.w @(disp,pc),Rn */
	r10 += r7;  /* 0C0786E2 add Rm,Rn */
	r10 += 0x1u;  /* 0C0786E4 add #imm,Rn */
	r8 += r7;  /* 0C0786E6 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C0786EAu, 4);  /* 0C0786E8 mov.b @Rm,Rn */
	{ r8 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0786BEu, 3); goto L_0C0786BE; }  /* 0C0786EA bra */
L_0C0786F0: BLKS(0x0C0786F0u);
	r9 = 0xC0A0540u; UPD(0x0C0786F2u, 1);  /* 0C0786F0 mov.l @(disp,pc),Rn */
	IF(0x0C0786F2u); { u32 t_ = r9; PR = 0x0C0786F6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C0786F6u); }  /* 0C0786F2 jsr @Rn */
L_0C0786F6: BLKS(0x0C0786F6u);
	IF(0x0C0786F6u); T = (s32)r0 >= 0;  /* 0C0786F6 cmp/pz Rn */
	{ u32 c_ = T; r5 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C078700u, 4); goto L_0C078700; } goto L_0C0786FC; }  /* 0C0786F8 bt/s */
L_0C0786FC: BLKS(0x0C0786FCu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C0785F2u, 4); goto L_0C0785F2; }  /* 0C0786FC bra */
L_0C078700: BLKS(0x0C078700u);
	r10 = 0xB4u; UPD(0x0C078702u, 1);  /* 0C078700 mov.w @(disp,pc),Rn */
	IF(0x0C078702u); MACL = r0 * r10;  /* 0C078702 mul.l Rm,Rn */
	r8 = R32(r14); UPD(0x0C078706u, 3);  /* 0C078704 mov.l @Rm,Rn */
	IF(0x0C078706u); r11 = MACL;  /* 0C078706 sts macl,Rn */
	IF(0x0C078708u); MACL = r8 * r10;  /* 0C078708 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C07870Cu, 4);  /* 0C07870A mov.l @(disp,pc),Rn */
	IF(0x0C07870Cu); r10 = MACL;  /* 0C07870C sts macl,Rn */
	r10 += r13;  /* 0C07870E add Rm,Rn */
	r4 = 0x9Au; UPD(0x0C078712u, 3);  /* 0C078710 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C078712 mov Rm,Rn */
	IF(0x0C078714u); W8(r0 + r4, r5); UPD(0x0C078716u, 2);  /* 0C078714 mov.b Rm,@(r0,Rn) */
	r11 += r13;  /* 0C078716 add Rm,Rn */
	r12 = R32(r11 + 0x24u); UPD(0x0C07871Au, 2);  /* 0C078718 mov.l @(disp,Rm),Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C07871Cu, 1);  /* 0C07871A mov.l @(disp,Rm),Rn */
	r3 = R32(r10 + 0x2Cu); UPD(0x0C07871Eu, 1);  /* 0C07871C mov.l @(disp,Rm),Rn */
	r1 = R32(r10 + 0x30u); UPD(0x0C078720u, 1);  /* 0C07871E mov.l @(disp,Rm),Rn */
	r12 += r3;  /* 0C078720 add Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C078724u, 2);  /* 0C078722 mov.w @(disp,pc),Rn */
	r6 += r1;  /* 0C078724 add Rm,Rn */
	IF(0x0C078726u); r5 = R32(r0 + r10); UPD(0x0C078728u, 2);  /* 0C078726 mov.l @(r0,Rm),Rn */
	W32(r10 + 0x24u, r12); UPD(0x0C07872Au, 1);  /* 0C078728 mov.l Rm,@(disp,Rn) */
	T = (r5 & r5) == 0;  /* 0C07872A tst Rm,Rn */
	{ u32 c_ = !T; W32(r10 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C078734u, 4); goto L_0C078734; } UPD(0x0C078730u, 1); goto L_0C078730; }  /* 0C07872C bf/s */
L_0C078730: BLKS(0x0C078730u);
	{ IF(0x0C078732u); ; /* slot nop */ UPD(0x0C078850u, 3); goto L_0C078850; }  /* 0C078730 bra */
L_0C078734: BLKS(0x0C078734u);
	r11 = 0x84u; UPD(0x0C078736u, 1);  /* 0C078734 mov.w @(disp,pc),Rn */
	r13 = r5;  /* 0C078736 mov Rm,Rn */
	r4 = 0xFFFFC000u; UPD(0x0C07873Au, 2);  /* 0C078738 mov.w @(disp,pc),Rn */
	r11 += r10;  /* 0C07873A add Rm,Rn */
	r4 += r5;  /* 0C07873C add Rm,Rn */
	r6 = 0xC058060u; UPD(0x0C078740u, 3);  /* 0C07873E mov.l @(disp,pc),Rn */
	r11 += 0x2u;  /* 0C078740 add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r11); UPD(0x0C078744u, 2);  /* 0C078742 mov.w @Rm,Rn */
	IF(0x0C078744u); W32(r0 + r10, r4); UPD(0x0C078746u, 1);  /* 0C078744 mov.l Rm,@(r0,Rn) */
	IF(0x0C078746u); { u32 t_ = r6; PR = 0x0C07874Au; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07874Au); }  /* 0C078746 jsr @Rn */
L_0C07874A: BLKS(0x0C07874Au);
	r9 = R32(r10 + 0x24u); UPD(0x0C07874Cu, 1);  /* 0C07874A mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C07874C mov Rm,Rn */
	r2 = 0xC058030u; UPD(0x0C078750u, 2);  /* 0C07874E mov.l @(disp,pc),Rn */
	r9 -= r0;  /* 0C078750 sub Rm,Rn */
	r5 = r13;  /* 0C078752 mov Rm,Rn */
	IF(0x0C078754u); { u32 t_ = r2; PR = 0x0C078758u; W32(r10 + 0x24u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C078758u); }  /* 0C078754 jsr @Rn */
L_0C078758: BLKS(0x0C078758u);
	r7 = R32(r10 + 0x28u); UPD(0x0C07875Au, 1);  /* 0C078758 mov.l @(disp,Rm),Rn */
	r13 = 0x0u;  /* 0C07875A mov #imm,Rn */
	r7 -= r0;  /* 0C07875C sub Rm,Rn */
	W32(r10 + 0x28u, r7); UPD(0x0C078760u, 3);  /* 0C07875E mov.l Rm,@(disp,Rn) */
	r12 = r10;  /* 0C078760 mov Rm,Rn */
	IF(0x0C078762u); ;  /* 0C078762 nop */
	UPD(0x0C078764u, 2);
L_0C078764: BLKS(0x0C078764u);
	r2 = 0x86u; UPD(0x0C078766u, 1);  /* 0C078764 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C078766 mov Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C07876Au, 2);  /* 0C078768 mov.l @(disp,pc),Rn */
	r8 = r13;  /* 0C07876A mov Rm,Rn */
	IF(0x0C07876Cu); r11 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07876Eu, 2);  /* 0C07876C mov.w @(r0,Rm),Rn */
	IF(0x0C07876Eu); r8 <<= 2;  /* 0C07876E shll2 Rn */
	r5 = 0x50000u; UPD(0x0C078772u, 2);  /* 0C078770 mov.l @(disp,pc),Rn */
	IF(0x0C078772u); { u32 t_ = r10; PR = 0x0C078776u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C078776u); }  /* 0C078772 jsr @Rn */
L_0C078776: BLKS(0x0C078776u);
	r10 = R32(r12 + 0x24u); UPD(0x0C078778u, 1);  /* 0C078776 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C078778 mov Rm,Rn */
	r10 += r0;  /* 0C07877A add Rm,Rn */
	r0 = 0xC189F78u; UPD(0x0C07877Eu, 3);  /* 0C07877C mov.l @(disp,pc),Rn */
	r6 = 0xC058030u; UPD(0x0C078780u, 1);  /* 0C07877E mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C078780 add Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C078784u, 2);  /* 0C078782 mov.l @(disp,pc),Rn */
	IF(0x0C078784u); { u32 t_ = r6; PR = 0x0C078788u; r5 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C078788u); }  /* 0C078784 jsr @Rn */
L_0C078788: BLKS(0x0C078788u);
	r10 -= r0;  /* 0C078788 sub Rm,Rn */
	r5 = 0x50000u; UPD(0x0C07878Cu, 2);  /* 0C07878A mov.l @(disp,pc),Rn */
	IF(0x0C07878Cu); { u32 t_ = r9; PR = 0x0C078790u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C078790u); }  /* 0C07878C jsr @Rn */
L_0C078790: BLKS(0x0C078790u);
	r1 = 0xC058060u; UPD(0x0C078792u, 1);  /* 0C078790 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C078792 mov Rm,Rn */
	r9 = R32(r12 + 0x28u); UPD(0x0C078796u, 2);  /* 0C078794 mov.l @(disp,Rm),Rn */
	r5 = R32(r8); UPD(0x0C078798u, 1);  /* 0C078796 mov.l @Rm,Rn */
	IF(0x0C078798u); { u32 t_ = r1; PR = 0x0C07879Cu; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07879Cu); }  /* 0C078798 jsr @Rn */
L_0C07879C: BLKS(0x0C07879Cu);
	r9 += r0;  /* 0C07879C add Rm,Rn */
	r7 = 0xC189F80u; UPD(0x0C0787A0u, 2);  /* 0C07879E mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C0787A0 mov Rm,Rn */
	r0 += r0;  /* 0C0787A2 add Rm,Rn */
	r8 = 0xC050D70u; UPD(0x0C0787A6u, 3);  /* 0C0787A4 mov.l @(disp,pc),Rn */
	r4 = 0x1Fu;  /* 0C0787A6 mov #imm,Rn */
	IF(0x0C0787A8u); r3 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C0787AAu, 2);  /* 0C0787A8 mov.w @(r0,Rm),Rn */
	IF(0x0C0787AAu); { u32 t_ = r8; PR = 0x0C0787AEu; r11 += r3; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0787AEu); }  /* 0C0787AA jsr @Rn */
L_0C0787AE: BLKS(0x0C0787AEu);
	r0 += r11;  /* 0C0787AE add Rm,Rn */
	r0 += 0xFFFFFFF0u;  /* 0C0787B0 add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C0787B2 exts.w Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0787B6u, 4);  /* 0C0787B4 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C0787B6 add #imm,Rn */
	IF(0x0C0787B8u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0787BAu, 2);  /* 0C0787B8 mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0787BA extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0787BEu, 2);  /* 0C0787BC mov.l Rm,@Rn */
	r0 = r12;  /* 0C0787BE mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C0787C2u, 2);  /* 0C0787C0 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C0787C2 mov Rm,Rn */
	IF(0x0C0787C4u); r2 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0787C6u, 2);  /* 0C0787C4 mov.b @(r0,Rm),Rn */
	r8 = r2 & 0xFF;  /* 0C0787C6 extu.b Rm,Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C0787CAu, 2);  /* 0C0787C8 mov.l Rm,@(disp,Rn) */
	r7 = 0xC058060u; UPD(0x0C0787CCu, 1);  /* 0C0787CA mov.l @(disp,pc),Rn */
	r8 = 0x20000u; UPD(0x0C0787CEu, 1);  /* 0C0787CC mov.l @(disp,pc),Rn */
	IF(0x0C0787CEu); { u32 t_ = r7; PR = 0x0C0787D2u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0787D2u); }  /* 0C0787CE jsr @Rn */
L_0C0787D2: BLKS(0x0C0787D2u);
	r1 = 0xC058030u; UPD(0x0C0787D4u, 1);  /* 0C0787D2 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0787D4 mov Rm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C0787D8u, 2);  /* 0C0787D6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0787D8u); { u32 t_ = r1; PR = 0x0C0787DCu; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0787DCu); }  /* 0C0787D8 jsr @Rn */
L_0C0787DC: BLKS(0x0C0787DCu);
	r3 = 0x808080u; UPD(0x0C0787DEu, 1);  /* 0C0787DC mov.l @(disp,pc),Rn */
	r6 = r10;  /* 0C0787DE mov Rm,Rn */
	r10 = 0xC0ACA40u; UPD(0x0C0787E2u, 2);  /* 0C0787E0 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C0787E2 mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0787E6u, 2);  /* 0C0787E4 mov.l Rm,@(disp,Rn) */
	r7 = r9;  /* 0C0787E6 mov Rm,Rn */
	W32(r15 + 0x10u, r3); UPD(0x0C0787EAu, 2);  /* 0C0787E8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0787EAu); { u32 t_ = r10; PR = 0x0C0787EEu; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C0787EEu); }  /* 0C0787EA jsr @Rn */
L_0C0787EE: BLKS(0x0C0787EEu);
	r5 = r13;  /* 0C0787EE mov Rm,Rn */
	r5 += 0x1u;  /* 0C0787F0 add #imm,Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C0787F2 exts.w Rm,Rn */
	r0 = 0x1u;  /* 0C0787F4 mov #imm,Rn */
	T = (s32)r13 > (s32)r0;  /* 0C0787F6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C078764u, 8); goto L_0C078764; } UPD(0x0C0787FCu, 1); goto L_0C0787FC; }  /* 0C0787F8 bf/s */
L_0C0787FC: BLKS(0x0C0787FCu);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C078546u, 3); goto L_0C078546; }  /* 0C0787FC bra */
L_0C078850: BLKS(0x0C078850u);
	r10 = 0xC058130u; UPD(0x0C078852u, 1);  /* 0C078850 mov.l @(disp,pc),Rn */
	r9 = 0xC057430u; UPD(0x0C078854u, 1);  /* 0C078852 mov.l @(disp,pc),Rn */
	IF(0x0C078854u); { u32 t_ = r10; PR = 0x0C078858u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C078858u); }  /* 0C078854 jsr @Rn */
L_0C078858: BLKS(0x0C078858u);
	r4 = R32(r14); UPD(0x0C07885Au, 1);  /* 0C078858 mov.l @Rm,Rn */
	IF(0x0C07885Au); { u32 t_ = r9; PR = 0x0C07885Eu; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C07885Eu); }  /* 0C07885A jsr @Rn */
L_0C07885E: BLKS(0x0C07885Eu);
	r11 = R32(r14); UPD(0x0C078860u, 1);  /* 0C07885E mov.l @Rm,Rn */
	r5 = 0x1Fu;  /* 0C078860 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C078864u, 2);  /* 0C078862 mov.w @(disp,pc),Rn */
	IF(0x0C078864u); MACL = r11 * r8;  /* 0C078864 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C078868u, 3);  /* 0C078866 mov.l @(disp,pc),Rn */
	IF(0x0C078868u); r8 = MACL;  /* 0C078868 sts macl,Rn */
	r8 += r7;  /* 0C07886A add Rm,Rn */
	r3 = 0x86u; UPD(0x0C07886Eu, 3);  /* 0C07886C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07886E mov Rm,Rn */
	IF(0x0C078870u); r4 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C078872u, 2);  /* 0C078870 mov.w @(r0,Rm),Rn */
	r4 += 0x8u;  /* 0C078872 add #imm,Rn */
	IF(0x0C078874u); r4 >>= 2;  /* 0C078874 shlr2 Rn */
	IF(0x0C078876u); r4 >>= 2;  /* 0C078876 shlr2 Rn */
	r4 &= r5;  /* 0C078878 and Rm,Rn */
	r12 = 0xC0A0380u; UPD(0x0C07887Cu, 5);  /* 0C07887A mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C07887Eu, 1);  /* 0C07887C mov.l Rm,@(disp,Rn) */
	r13 = 0xC0A9E40u; UPD(0x0C078880u, 1);  /* 0C07887E mov.l @(disp,pc),Rn */
	IF(0x0C078880u); { u32 t_ = r12; PR = 0x0C078884u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C078884u); }  /* 0C078880 jsr @Rn */
L_0C078884: BLKS(0x0C078884u);
	r4 = R32(r14); UPD(0x0C078886u, 1);  /* 0C078884 mov.l @Rm,Rn */
	r5 = 0x5Au;  /* 0C078886 mov #imm,Rn */
	IF(0x0C078888u); { u32 t_ = r13; PR = 0x0C07888Cu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07888Cu); }  /* 0C078888 jsr @Rn */
L_0C07888C: BLKS(0x0C07888Cu);
	T = (r0 & r0) == 0;  /* 0C07888C tst Rm,Rn */
	if (T) { UPD(0x0C0787FCu, 4); goto L_0C0787FC; }  /* 0C07888E bt */
L_0C078890: BLKS(0x0C078890u);
	r0 = r8;  /* 0C078890 mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C078894u, 2);  /* 0C078892 mov.w @(disp,pc),Rn */
	r13 = 0xC0A9BB0u; UPD(0x0C078896u, 1);  /* 0C078894 mov.l @(disp,pc),Rn */
	IF(0x0C078896u); r2 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C078898u, 1);  /* 0C078896 mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C07889Au, 1);  /* 0C078898 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C07889A extu.b Rm,Rn */
	IF(0x0C07889Cu); { u32 t_ = r13; PR = 0x0C0788A0u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0788A0u); }  /* 0C07889C jsr @Rn */
L_0C0788A0: BLKS(0x0C0788A0u);
	T = (r0 & r0) == 0;  /* 0C0788A0 tst Rm,Rn */
	if (T) { UPD(0x0C0787FCu, 4); goto L_0C0787FC; }  /* 0C0788A2 bt */
L_0C0788A4: BLKS(0x0C0788A4u);
	r11 = 0x1u;  /* 0C0788A4 mov #imm,Rn */
	r0 = 0x8Cu; UPD(0x0C0788A8u, 2);  /* 0C0788A6 mov.w @(disp,pc),Rn */
	r4 = 0x60000u; UPD(0x0C0788AAu, 1);  /* 0C0788A8 mov.l @(disp,pc),Rn */
	IF(0x0C0788AAu); W32(r0 + r8, r4); UPD(0x0C0788ACu, 1);  /* 0C0788AA mov.l Rm,@(r0,Rn) */
	r12 = 0x9Au; UPD(0x0C0788AEu, 1);  /* 0C0788AC mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0788AE mov Rm,Rn */
	{ IF(0x0C0788B2u); W8(r0 + r12, r11); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C078544u, 4); goto L_0C078544; }  /* 0C0788B0 bra */
L_0C0788C0: BLKS(0x0C0788C0u);
	r13 = 0xC0A03F0u; UPD(0x0C0788C2u, 1);  /* 0C0788C0 mov.l @(disp,pc),Rn */
	IF(0x0C0788C2u); { u32 t_ = r13; PR = 0x0C0788C6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0788C6u); }  /* 0C0788C2 jsr @Rn */
L_0C0788C6: BLKS(0x0C0788C6u);
	IF(0x0C0788C6u); T = (s32)r0 >= 0;  /* 0C0788C6 cmp/pz Rn */
	{ u32 c_ = !T; r10 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C07894Au, 4); goto L_0C07894A; } UPD(0x0C0788CCu, 1); goto L_0C0788CC; }  /* 0C0788C8 bf/s */
L_0C0788CC: BLKS(0x0C0788CCu);
	r8 = 0xB4u; UPD(0x0C0788CEu, 1);  /* 0C0788CC mov.w @(disp,pc),Rn */
	IF(0x0C0788CEu); MACL = r10 * r8;  /* 0C0788CE mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C0788D2u, 3);  /* 0C0788D0 mov.l @(disp,pc),Rn */
	IF(0x0C0788D2u); r10 = MACL;  /* 0C0788D2 sts macl,Rn */
	IF(0x0C0788D4u); MACL = r0 * r8;  /* 0C0788D4 mul.l Rm,Rn */
	r10 += r1;  /* 0C0788D6 add Rm,Rn */
	r12 = 0x98u; UPD(0x0C0788DAu, 5);  /* 0C0788D8 mov.w @(disp,pc),Rn */
	IF(0x0C0788DAu); r8 = MACL;  /* 0C0788DA sts macl,Rn */
	r11 = r10;  /* 0C0788DC mov Rm,Rn */
	r8 += r1;  /* 0C0788DE add Rm,Rn */
	r11 += r12;  /* 0C0788E0 add Rm,Rn */
	r12 += r8;  /* 0C0788E2 add Rm,Rn */
	r12 += 0x2u;  /* 0C0788E4 add #imm,Rn */
	r5 = 0xA4u; UPD(0x0C0788E8u, 7);  /* 0C0788E6 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C0788E8 mov Rm,Rn */
	r4 = 0x84u; UPD(0x0C0788ECu, 2);  /* 0C0788EA mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0788EC mov Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r12); UPD(0x0C0788F0u, 2);  /* 0C0788EE mov.b @Rm,Rn */
	r11 += 0x2u;  /* 0C0788F0 add #imm,Rn */
	r0 += r5;  /* 0C0788F2 add Rm,Rn */
	r7 += r4;  /* 0C0788F4 add Rm,Rn */
	W8(r11, r9); UPD(0x0C0788F8u, 4);  /* 0C0788F6 mov.b Rm,@Rn */
	r5 += r10;  /* 0C0788F8 add Rm,Rn */
	r4 += r8;  /* 0C0788FA add Rm,Rn */
	r5 += 0x1u;  /* 0C0788FC add #imm,Rn */
	r4 += 0x2u;  /* 0C0788FE add #imm,Rn */
	r10 += 0x50u;  /* 0C078900 add #imm,Rn */
	r13 = 0xC058060u; UPD(0x0C078904u, 6);  /* 0C078902 mov.l @(disp,pc),Rn */
	r7 += 0x2u;  /* 0C078904 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C078908u, 2);  /* 0C078906 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C078908 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r4); UPD(0x0C07890Cu, 2);  /* 0C07890A mov.w @Rm,Rn */
	r9 = R32(r10); UPD(0x0C07890Eu, 1);  /* 0C07890C mov.l @Rm,Rn */
	r12 = r6;  /* 0C07890E mov Rm,Rn */
	W8(r0, r2); UPD(0x0C078912u, 2);  /* 0C078910 mov.b Rm,@Rn */
	r4 = r6;  /* 0C078912 mov Rm,Rn */
	W16(r7, r6); UPD(0x0C078916u, 2);  /* 0C078914 mov.w Rm,@Rn */
	IF(0x0C078916u); { u32 t_ = r13; PR = 0x0C07891Au; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07891Au); }  /* 0C078916 jsr @Rn */
L_0C07891A: BLKS(0x0C07891Au);
	r3 = R32(r8 + 0x24u); UPD(0x0C07891Cu, 1);  /* 0C07891A mov.l @(disp,Rm),Rn */
	r10 += 0xFFFFFFB0u;  /* 0C07891C add #imm,Rn */
	r11 = 0xC058030u; UPD(0x0C078920u, 2);  /* 0C07891E mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C078920 add Rm,Rn */
	r5 = r9;  /* 0C078922 mov Rm,Rn */
	W32(r10 + 0x24u, r3); UPD(0x0C078926u, 3);  /* 0C078924 mov.l Rm,@(disp,Rn) */
	IF(0x0C078926u); { u32 t_ = r11; PR = 0x0C07892Au; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07892Au); }  /* 0C078926 jsr @Rn */
L_0C07892A: BLKS(0x0C07892Au);
	r5 = R32(r8 + 0x28u); UPD(0x0C07892Cu, 1);  /* 0C07892A mov.l @(disp,Rm),Rn */
	r2 = R32(r8 + 0xCu); UPD(0x0C07892Eu, 1);  /* 0C07892C mov.l @(disp,Rm),Rn */
	r5 += r0;  /* 0C07892E add Rm,Rn */
	W32(r10 + 0x28u, r5); UPD(0x0C078932u, 2);  /* 0C078930 mov.l Rm,@(disp,Rn) */
	{ W32(r10 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0784D2u, 3); goto L_0C0784D2; }  /* 0C078932 bra */
L_0C078940: BLKS(0x0C078940u);
	r13 = 0xC0A03F0u; UPD(0x0C078942u, 1);  /* 0C078940 mov.l @(disp,pc),Rn */
	IF(0x0C078942u); { u32 t_ = r13; PR = 0x0C078946u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C078946u); }  /* 0C078942 jsr @Rn */
L_0C078946: BLKS(0x0C078946u);
	IF(0x0C078946u); T = (s32)r0 >= 0;  /* 0C078946 cmp/pz Rn */
	if (T) { UPD(0x0C07894Eu, 4); goto L_0C07894E; }  /* 0C078948 bt */
L_0C07894A: BLKS(0x0C07894Au);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C0785F2u, 3); goto L_0C0785F2; }  /* 0C07894A bra */
L_0C07894E: BLKS(0x0C07894Eu);
	r10 = 0xB4u; UPD(0x0C078950u, 1);  /* 0C07894E mov.w @(disp,pc),Rn */
	IF(0x0C078950u); MACL = r0 * r10;  /* 0C078950 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C078954u, 3);  /* 0C078952 mov.l @(disp,pc),Rn */
	IF(0x0C078954u); r9 = MACL;  /* 0C078954 sts macl,Rn */
	r9 += r5;  /* 0C078956 add Rm,Rn */
	r13 = 0x86u; UPD(0x0C07895Au, 3);  /* 0C078958 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C07895A mov Rm,Rn */
	IF(0x0C07895Cu); r11 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C07895Eu, 2);  /* 0C07895C mov.w @(r0,Rm),Rn */
	r0 = R32(r14); UPD(0x0C078960u, 1);  /* 0C07895E mov.l @Rm,Rn */
	r4 = r11;  /* 0C078960 mov Rm,Rn */
	IF(0x0C078962u); MACL = r0 * r10;  /* 0C078962 mul.l Rm,Rn */
	r12 = 0xC058060u; UPD(0x0C078966u, 4);  /* 0C078964 mov.l @(disp,pc),Rn */
	IF(0x0C078966u); r10 = MACL;  /* 0C078966 sts macl,Rn */
	r10 += r5;  /* 0C078968 add Rm,Rn */
	r10 += 0x50u;  /* 0C07896A add #imm,Rn */
	r8 = R32(r10); UPD(0x0C07896Eu, 4);  /* 0C07896C mov.l @Rm,Rn */
	IF(0x0C07896Eu); { u32 t_ = r12; PR = 0x0C078972u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C078972u); }  /* 0C07896E jsr @Rn */
L_0C078972: BLKS(0x0C078972u);
	r2 = R32(r9 + 0x24u); UPD(0x0C078974u, 1);  /* 0C078972 mov.l @(disp,Rm),Rn */
	r10 += 0xFFFFFFB0u;  /* 0C078974 add #imm,Rn */
	r13 = 0xC058030u; UPD(0x0C078978u, 2);  /* 0C078976 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C078978 add Rm,Rn */
	W32(r10 + 0x24u, r2); UPD(0x0C07897Cu, 2);  /* 0C07897A mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C07897C mov Rm,Rn */
	IF(0x0C07897Eu); { u32 t_ = r13; PR = 0x0C078982u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C078982u); }  /* 0C07897E jsr @Rn */
L_0C078982: BLKS(0x0C078982u);
	r4 = R32(r9 + 0x28u); UPD(0x0C078984u, 1);  /* 0C078982 mov.l @(disp,Rm),Rn */
	r6 = 0xC0A0380u; UPD(0x0C078986u, 1);  /* 0C078984 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C078986 add Rm,Rn */
	W32(r10 + 0x28u, r4); UPD(0x0C07898Au, 2);  /* 0C078988 mov.l Rm,@(disp,Rn) */
	r7 = R32(r9 + 0xCu); UPD(0x0C07898Cu, 1);  /* 0C07898A mov.l @(disp,Rm),Rn */
	r12 = 0x9Au; UPD(0x0C07898Eu, 1);  /* 0C07898C mov.w @(disp,pc),Rn */
	W32(r10 + 0xCu, r7); UPD(0x0C078990u, 1);  /* 0C07898E mov.l Rm,@(disp,Rn) */
	r12 += r9;  /* 0C078990 add Rm,Rn */
	IF(0x0C078992u); { u32 t_ = r6; PR = 0x0C078996u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C078996u); }  /* 0C078992 jsr @Rn */
L_0C078996: BLKS(0x0C078996u);
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C078998u, 1);  /* 0C078996 mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C078998 tst Rm,Rn */
	if (!T) { UPD(0x0C0789A2u, 4); goto L_0C0789A2; }  /* 0C07899A bf */
L_0C07899C: BLKS(0x0C07899Cu);
	r14 += 0x4u;  /* 0C07899C add #imm,Rn */
	{ IF(0x0C0789A0u); ; /* slot nop */ UPD(0x0C078546u, 4); goto L_0C078546; }  /* 0C07899E bra */
L_0C0789A2: BLKS(0x0C0789A2u);
	r1 = 0xC058060u; UPD(0x0C0789A4u, 1);  /* 0C0789A2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0789A4 add #imm,Rn */
	r9 = 0xC0000u; UPD(0x0C0789A8u, 2);  /* 0C0789A6 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0789A8 mov Rm,Rn */
	IF(0x0C0789AAu); { u32 t_ = r1; PR = 0x0C0789AEu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0789AEu); }  /* 0C0789AA jsr @Rn */
L_0C0789AE: BLKS(0x0C0789AEu);
	r8 = R32(r10 + 0x24u); UPD(0x0C0789B0u, 1);  /* 0C0789AE mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C0789B0 mov Rm,Rn */
	r4 = r11;  /* 0C0789B2 mov Rm,Rn */
	r9 = 0xC0A8E70u; UPD(0x0C0789B6u, 3);  /* 0C0789B4 mov.l @(disp,pc),Rn */
	IF(0x0C0789B6u); { u32 t_ = r13; PR = 0x0C0789BAu; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0789BAu); }  /* 0C0789B6 jsr @Rn */
L_0C0789BA: BLKS(0x0C0789BAu);
	r6 = R32(r10 + 0x28u); UPD(0x0C0789BCu, 1);  /* 0C0789BA mov.l @(disp,Rm),Rn */
	r7 = r11;  /* 0C0789BC mov Rm,Rn */
	r3 = 0x30000u; UPD(0x0C0789C0u, 2);  /* 0C0789BE mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0789C0 mov #imm,Rn */
	W32(r15, r3); UPD(0x0C0789C4u, 2);  /* 0C0789C2 mov.l Rm,@Rn */
	r6 += r0;  /* 0C0789C4 add Rm,Rn */
	r5 = r8;  /* 0C0789C6 mov Rm,Rn */
	IF(0x0C0789C8u); { u32 t_ = r9; PR = 0x0C0789CCu; r11 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A8E70, 0x0C0A8E70u, 0x0C0789CCu); }  /* 0C0789C8 jsr @Rn */
L_0C0789CC: BLKS(0x0C0789CCu);
	W8(r12, r11); UPD(0x0C0789CEu, 1);  /* 0C0789CC mov.b Rm,@Rn */
	r15 += 0x4u;  /* 0C0789CE add #imm,Rn */
	r1 = 0xC0580D0u; UPD(0x0C0789D2u, 2);  /* 0C0789D0 mov.l @(disp,pc),Rn */
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C0784D6u, 3); goto L_0C0784D6; }  /* 0C0789D2 bra */
}

void f_0C078A20(sh3_t *c)
{
	LOCALS;
L_0C078A20: BLKS(0x0C078A20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C078A22u, 1);  /* 0C078A20 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C078A22 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C078A26u, 2);  /* 0C078A24 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C078A28u, 1);  /* 0C078A26 mov.w @(disp,pc),Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C078A2Au, 1);  /* 0C078A28 mov.l Rm,@-Rn */
	IF(0x0C078A2Au); MACL = r4 * r2;  /* 0C078A2A mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C078A2Eu, 3);  /* 0C078A2C mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C078A30u, 1);  /* 0C078A2E mov.l @(disp,pc),Rn */
	IF(0x0C078A30u); r2 = MACL;  /* 0C078A30 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C078A34u, 2);  /* 0C078A32 mov.l Rm,@-Rn */
	r2 += r0;  /* 0C078A34 add Rm,Rn */
	IF(0x0C078A36u); r15 -= 4; W32(r15, PR); UPD(0x0C078A38u, 2);  /* 0C078A36 sts.l pr,@-Rn */
	r2 += 0x3Cu;  /* 0C078A38 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C078A3Cu, 2);  /* 0C078A3A mov.w @Rm,Rn */
	r14 = r15;  /* 0C078A3C mov Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C078A3E tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C078A48u, 5); goto L_0C078A48; } goto L_0C078A44; }  /* 0C078A40 bf/s */
L_0C078A44: BLKS(0x0C078A44u);
	{ IF(0x0C078A46u); ; /* slot nop */ UPD(0x0C078EB0u, 4); goto L_0C078EB0; }  /* 0C078A44 bra */
L_0C078A48: BLKS(0x0C078A48u);
	r2 = R32(r2 + 0x8u); UPD(0x0C078A4Au, 1);  /* 0C078A48 mov.l @(disp,Rm),Rn */
	r5 = 0x8u;  /* 0C078A4A mov #imm,Rn */
	T = r2 > r5;  /* 0C078A4C cmp/hi Rm,Rn */
	if (T) { UPD(0x0C078A9Cu, 5); goto L_0C078A9C; }  /* 0C078A4E bt */
L_0C078A50: BLKS(0x0C078A50u);
	r0 = 0xC078A60u;  /* 0C078A50 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C078A52 add Rm,Rn */
	IF(0x0C078A54u); r6 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C078A56u, 3);  /* 0C078A54 mov.w @(r0,Rm),Rn */
	IF(0x0C078A56u); { u32 tv_ = (r6 + 0x0C078A5Au); u32 t_ = PHYS(tv_); IF(0x0C078A58u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C078A80u: goto L_0C078A80; case 0x0C078A9Cu: goto L_0C078A9C; case 0x0C078B20u: goto L_0C078B20; case 0x0C078BA0u: goto L_0C078BA0; case 0x0C078C50u: goto L_0C078C50; case 0x0C078CC0u: goto L_0C078CC0; case 0x0C078D20u: goto L_0C078D20; case 0x0C078D90u: goto L_0C078D90; case 0x0C078E40u: goto L_0C078E40; default: JUMPD(tv_); } }  /* 0C078A56 braf Rn */
L_0C078A80: BLKS(0x0C078A80u);
	r7 = 0xB4u; UPD(0x0C078A82u, 1);  /* 0C078A80 mov.w @(disp,pc),Rn */
	IF(0x0C078A82u); MACL = r4 * r7;  /* 0C078A82 mul.l Rm,Rn */
	r3 = 0x99u; UPD(0x0C078A86u, 3);  /* 0C078A84 mov.w @(disp,pc),Rn */
	r4 = 0xC26CD40u; UPD(0x0C078A88u, 1);  /* 0C078A86 mov.l @(disp,pc),Rn */
	IF(0x0C078A88u); r2 = MACL;  /* 0C078A88 sts macl,Rn */
	r2 += r4;  /* 0C078A8A add Rm,Rn */
	r3 += r2;  /* 0C078A8C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C078A90u, 4);  /* 0C078A8E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C078A90 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C078A92 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C078A94 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C078AB0u, 6); goto L_0C078AB0; } UPD(0x0C078A9Au, 1); goto L_0C078A9A; }  /* 0C078A96 bt/s */
L_0C078A9A: BLKS(0x0C078A9Au);
	IF(0x0C078A9Au); ;  /* 0C078A9A nop */
	UPD(0x0C078A9Cu, 1);
L_0C078A9C: BLKS(0x0C078A9Cu);
	r15 = r14;  /* 0C078A9C mov Rm,Rn */
	IF(0x0C078A9Eu); PR = R32(r15); r15 += 4; UPD(0x0C078AA0u, 2);  /* 0C078A9E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C078AA2u, 1);  /* 0C078AA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078AA4u, 1);  /* 0C078AA2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078AA6u, 1);  /* 0C078AA4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078AA8u, 1);  /* 0C078AA6 mov.l @Rm+,Rn */
	IF(0x0C078AA8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C078AA8 rts */
L_0C078AB0: BLKS(0x0C078AB0u);
	r8 = 0x0u;  /* 0C078AB0 mov #imm,Rn */
	W8(r3, r8); UPD(0x0C078AB4u, 2);  /* 0C078AB2 mov.b Rm,@Rn */
	r9 = r2;  /* 0C078AB4 mov Rm,Rn */
	r11 = 0xC18A198u; UPD(0x0C078AB8u, 2);  /* 0C078AB6 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C078AB8 mov #imm,Rn */
	r10 = 0xC18A1A0u; UPD(0x0C078ABCu, 2);  /* 0C078ABA mov.l @(disp,pc),Rn */
L_0C078ABC: BLKS(0x0C078ABCu);
	r0 = r8;  /* 0C078ABC mov Rm,Rn */
	r0 &= 0x1u;  /* 0C078ABE and #imm,r0 */
	IF(0x0C078AC0u); r0 <<= 2;  /* 0C078AC0 shll2 Rn */
	IF(0x0C078AC2u); r7 = R32(r0 + r11); UPD(0x0C078AC4u, 4);  /* 0C078AC2 mov.l @(r0,Rm),Rn */
	r1 = r8;  /* 0C078AC4 mov Rm,Rn */
	IF(0x0C078AC6u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C078AC6 rotl Rn */
	IF(0x0C078AC8u); r0 = T;  /* 0C078AC8 movt Rn */
	r0 += r8;  /* 0C078ACA add Rm,Rn */
	IF(0x0C078ACCu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C078ACC shar Rn */
	IF(0x0C078ACEu); r0 <<= 2;  /* 0C078ACE shll2 Rn */
	IF(0x0C078AD0u); r2 = R32(r0 + r10); UPD(0x0C078AD2u, 7);  /* 0C078AD0 mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C078AD2 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C078AD6u, 2);  /* 0C078AD4 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C078AD8u, 1);  /* 0C078AD6 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C078AD8 add Rm,Rn */
	IF(0x0C078ADAu); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C078ADCu, 2);  /* 0C078ADA mov.b @(r0,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C078ADEu, 1);  /* 0C078ADC mov.l @(disp,Rm),Rn */
	r5 = r4 & 0xFF;  /* 0C078ADE extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C078AE2u, 2);  /* 0C078AE0 mov.l Rm,@Rn */
	r7 += r2;  /* 0C078AE2 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C078AE6u, 2);  /* 0C078AE4 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C078AE6 mov Rm,Rn */
	IF(0x0C078AE8u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C078AEAu, 2);  /* 0C078AE8 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C078AEA extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C078AEEu, 2);  /* 0C078AEC mov.l Rm,@(disp,Rn) */
	r4 = 0xC000u; UPD(0x0C078AF0u, 1);  /* 0C078AEE mov.l @(disp,pc),Rn */
	r5 = 0x6000u; UPD(0x0C078AF2u, 1);  /* 0C078AF0 mov.w @(disp,pc),Rn */
	r3 = 0x808080u; UPD(0x0C078AF4u, 1);  /* 0C078AF2 mov.l @(disp,pc),Rn */
	r0 = 0xC0ACA40u; UPD(0x0C078AF6u, 1);  /* 0C078AF4 mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r5); UPD(0x0C078AF8u, 1);  /* 0C078AF6 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x8u, r4); UPD(0x0C078AFAu, 1);  /* 0C078AF8 mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C078AFA mov #imm,Rn */
	W32(r15 + 0x10u, r3); UPD(0x0C078AFEu, 2);  /* 0C078AFC mov.l Rm,@(disp,Rn) */
	IF(0x0C078AFEu); { u32 t_ = r0; PR = 0x0C078B02u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C078B02u); }  /* 0C078AFE jsr @Rn */
L_0C078B02: BLKS(0x0C078B02u);
	r2 = r8;  /* 0C078B02 mov Rm,Rn */
	r2 += 0x1u;  /* 0C078B04 add #imm,Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C078B06 exts.w Rm,Rn */
	r0 = 0x3u;  /* 0C078B08 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C078B0A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C078ABCu, 8); goto L_0C078ABC; } goto L_0C078B10; }  /* 0C078B0C bf/s */
L_0C078B10: BLKS(0x0C078B10u);
	{ IF(0x0C078B12u); ; /* slot nop */ UPD(0x0C078A9Cu, 4); goto L_0C078A9C; }  /* 0C078B10 bra */
L_0C078B20: BLKS(0x0C078B20u);
	r11 = 0xB4u; UPD(0x0C078B22u, 1);  /* 0C078B20 mov.w @(disp,pc),Rn */
	IF(0x0C078B22u); MACL = r4 * r11;  /* 0C078B22 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C078B26u, 3);  /* 0C078B24 mov.l @(disp,pc),Rn */
	IF(0x0C078B26u); r2 = MACL;  /* 0C078B26 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C078B2Au, 2);  /* 0C078B28 mov.w @(disp,pc),Rn */
	r2 += r10;  /* 0C078B2A add Rm,Rn */
	r3 += r2;  /* 0C078B2C add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r3); UPD(0x0C078B30u, 3);  /* 0C078B2E mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C078B30 add #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C078B32 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C078B34 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C078A9Cu, 6); goto L_0C078A9C; } UPD(0x0C078B3Au, 1); goto L_0C078B3A; }  /* 0C078B36 bf/s */
L_0C078B3A: BLKS(0x0C078B3Au);
	r6 = 0x0u;  /* 0C078B3A mov #imm,Rn */
	r11 = 0xC18A198u; UPD(0x0C078B3Eu, 2);  /* 0C078B3C mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C078B3E mov #imm,Rn */
	r10 = 0xC18A1A8u; UPD(0x0C078B42u, 2);  /* 0C078B40 mov.l @(disp,pc),Rn */
	r9 = r2;  /* 0C078B42 mov Rm,Rn */
	W8(r3, r6); UPD(0x0C078B46u, 2);  /* 0C078B44 mov.b Rm,@Rn */
	IF(0x0C078B46u); ;  /* 0C078B46 nop */
	UPD(0x0C078B48u, 1);
L_0C078B48: BLKS(0x0C078B48u);
	r0 = r8;  /* 0C078B48 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C078B4A and #imm,r0 */
	IF(0x0C078B4Cu); r0 <<= 2;  /* 0C078B4C shll2 Rn */
	IF(0x0C078B4Eu); r7 = R32(r0 + r11); UPD(0x0C078B50u, 4);  /* 0C078B4E mov.l @(r0,Rm),Rn */
	r1 = r8;  /* 0C078B50 mov Rm,Rn */
	IF(0x0C078B52u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C078B52 rotl Rn */
	IF(0x0C078B54u); r0 = T;  /* 0C078B54 movt Rn */
	r0 += r8;  /* 0C078B56 add Rm,Rn */
	IF(0x0C078B58u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C078B58 shar Rn */
	IF(0x0C078B5Au); r0 <<= 2;  /* 0C078B5A shll2 Rn */
	IF(0x0C078B5Cu); r3 = R32(r0 + r10); UPD(0x0C078B5Eu, 7);  /* 0C078B5C mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C078B5E add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C078B62u, 2);  /* 0C078B60 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C078B64u, 1);  /* 0C078B62 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C078B64 add Rm,Rn */
	IF(0x0C078B66u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C078B68u, 2);  /* 0C078B66 mov.b @(r0,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C078B6Au, 1);  /* 0C078B68 mov.l @(disp,Rm),Rn */
	r4 = r2 & 0xFF;  /* 0C078B6A extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C078B6Eu, 2);  /* 0C078B6C mov.l Rm,@Rn */
	r7 += r3;  /* 0C078B6E add Rm,Rn */
	r5 = 0xA9u; UPD(0x0C078B72u, 2);  /* 0C078B70 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C078B72 mov Rm,Rn */
	IF(0x0C078B74u); r3 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C078B76u, 2);  /* 0C078B74 mov.b @(r0,Rm),Rn */
	r0 = r3 & 0xFF;  /* 0C078B76 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C078B7Au, 2);  /* 0C078B78 mov.l Rm,@(disp,Rn) */
	r2 = 0xC000u; UPD(0x0C078B7Cu, 1);  /* 0C078B7A mov.l @(disp,pc),Rn */
	r4 = 0x6000u; UPD(0x0C078B7Eu, 1);  /* 0C078B7C mov.w @(disp,pc),Rn */
	r5 = 0x808080u; UPD(0x0C078B80u, 1);  /* 0C078B7E mov.l @(disp,pc),Rn */
	r0 = 0xC0ACA40u; UPD(0x0C078B82u, 1);  /* 0C078B80 mov.l @(disp,pc),Rn */
	W32(r15 + 0x10u, r5); UPD(0x0C078B84u, 1);  /* 0C078B82 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x8u, r2); UPD(0x0C078B86u, 1);  /* 0C078B84 mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C078B86 mov #imm,Rn */
	W32(r15 + 0xCu, r4); UPD(0x0C078B8Au, 2);  /* 0C078B88 mov.l Rm,@(disp,Rn) */
	IF(0x0C078B8Au); { u32 t_ = r0; PR = 0x0C078B8Eu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C078B8Eu); }  /* 0C078B8A jsr @Rn */
L_0C078B8E: BLKS(0x0C078B8Eu);
	r3 = r8;  /* 0C078B8E mov Rm,Rn */
	r3 += 0x1u;  /* 0C078B90 add #imm,Rn */
	r8 = (u32)(s32)(s16)r3;  /* 0C078B92 exts.w Rm,Rn */
	r0 = 0x3u;  /* 0C078B94 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C078B96 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C078B48u, 8); goto L_0C078B48; } UPD(0x0C078B9Cu, 1); goto L_0C078B9C; }  /* 0C078B98 bf/s */
L_0C078B9C: BLKS(0x0C078B9Cu);
	{ IF(0x0C078B9Eu); ; /* slot nop */ UPD(0x0C078A9Cu, 3); goto L_0C078A9C; }  /* 0C078B9C bra */
L_0C078BA0: BLKS(0x0C078BA0u);
	r10 = 0xB4u; UPD(0x0C078BA2u, 1);  /* 0C078BA0 mov.w @(disp,pc),Rn */
	IF(0x0C078BA2u); MACL = r4 * r10;  /* 0C078BA2 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C078BA6u, 3);  /* 0C078BA4 mov.l @(disp,pc),Rn */
	IF(0x0C078BA6u); r2 = MACL;  /* 0C078BA6 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C078BAAu, 2);  /* 0C078BA8 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C078BAA add Rm,Rn */
	r3 += r2;  /* 0C078BAC add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C078BB0u, 3);  /* 0C078BAE mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C078BB0 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C078BB2 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C078BB4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C078B9Cu, 6); goto L_0C078B9C; } UPD(0x0C078BBAu, 1); goto L_0C078BBA; }  /* 0C078BB6 bf/s */
L_0C078BBA: BLKS(0x0C078BBAu);
	r11 = 0x0u;  /* 0C078BBA mov #imm,Rn */
	r10 = 0xA9u; UPD(0x0C078BBEu, 2);  /* 0C078BBC mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C078BBE mov #imm,Rn */
	W8(r3, r11); UPD(0x0C078BC2u, 2);  /* 0C078BC0 mov.b Rm,@Rn */
	r9 = r2;  /* 0C078BC2 mov Rm,Rn */
	r10 += r2;  /* 0C078BC4 add Rm,Rn */
	IF(0x0C078BC6u); ;  /* 0C078BC6 nop */
	UPD(0x0C078BC8u, 3);
L_0C078BC8: BLKS(0x0C078BC8u);
	r0 = r8;  /* 0C078BC8 mov Rm,Rn */
	r2 = 0xC18A1B0u; UPD(0x0C078BCCu, 2);  /* 0C078BCA mov.l @(disp,pc),Rn */
	IF(0x0C078BCCu); r0 <<= 2;  /* 0C078BCC shll2 Rn */
	IF(0x0C078BCEu); r7 = R32(r0 + r2); UPD(0x0C078BD0u, 2);  /* 0C078BCE mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C078BD0 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C078BD4u, 2);  /* 0C078BD2 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C078BD6u, 1);  /* 0C078BD4 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C078BD6 add Rm,Rn */
	IF(0x0C078BD8u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C078BDAu, 2);  /* 0C078BD8 mov.b @(r0,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C078BDCu, 1);  /* 0C078BDA mov.l @(disp,Rm),Rn */
	r11 = r5 & 0xFF;  /* 0C078BDC extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C078BE0u, 2);  /* 0C078BDE mov.l Rm,@Rn */
	r4 = 0xFFEC0000u; UPD(0x0C078BE2u, 1);  /* 0C078BE0 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C078BE4u, 1);  /* 0C078BE2 mov.b @Rm,Rn */
	r7 += r4;  /* 0C078BE4 add Rm,Rn */
	r2 = 0x8000u; UPD(0x0C078BE8u, 2);  /* 0C078BE6 mov.l @(disp,pc),Rn */
	r3 = r0 & 0xFF;  /* 0C078BE8 extu.b Rm,Rn */
	r4 = 0x4000u; UPD(0x0C078BECu, 2);  /* 0C078BEA mov.w @(disp,pc),Rn */
	r5 = 0x808080u; UPD(0x0C078BEEu, 1);  /* 0C078BEC mov.l @(disp,pc),Rn */
	r11 = 0xC0ACA40u; UPD(0x0C078BF0u, 1);  /* 0C078BEE mov.l @(disp,pc),Rn */
	W32(r15 + 0x10u, r5); UPD(0x0C078BF2u, 1);  /* 0C078BF0 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r3); UPD(0x0C078BF4u, 1);  /* 0C078BF2 mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C078BF4 mov #imm,Rn */
	W32(r15 + 0x8u, r2); UPD(0x0C078BF8u, 2);  /* 0C078BF6 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r4); UPD(0x0C078BFAu, 1);  /* 0C078BF8 mov.l Rm,@(disp,Rn) */
	IF(0x0C078BFAu); { u32 t_ = r11; PR = 0x0C078BFEu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C078BFEu); }  /* 0C078BFA jsr @Rn */
L_0C078BFE: BLKS(0x0C078BFEu);
	r0 = r8;  /* 0C078BFE mov Rm,Rn */
	r0 += 0x1u;  /* 0C078C00 add #imm,Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C078C02 exts.w Rm,Rn */
	r6 = 0x5u;  /* 0C078C04 mov #imm,Rn */
	T = (s32)r8 > (s32)r6;  /* 0C078C06 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C078BC8u, 8); goto L_0C078BC8; } UPD(0x0C078C0Cu, 1); goto L_0C078C0C; }  /* 0C078C08 bf/s */
L_0C078C0C: BLKS(0x0C078C0Cu);
	{ IF(0x0C078C0Eu); ; /* slot nop */ UPD(0x0C078A9Cu, 3); goto L_0C078A9C; }  /* 0C078C0C bra */
L_0C078C50: BLKS(0x0C078C50u);
	r9 = 0xB4u; UPD(0x0C078C52u, 1);  /* 0C078C50 mov.w @(disp,pc),Rn */
	IF(0x0C078C52u); MACL = r4 * r9;  /* 0C078C52 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C078C56u, 3);  /* 0C078C54 mov.l @(disp,pc),Rn */
	IF(0x0C078C56u); r2 = MACL;  /* 0C078C56 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C078C5Au, 2);  /* 0C078C58 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C078C5A add Rm,Rn */
	r3 += r2;  /* 0C078C5C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C078C60u, 3);  /* 0C078C5E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C078C60 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C078C62 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C078C64 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C078C0Cu, 6); goto L_0C078C0C; } UPD(0x0C078C6Au, 1); goto L_0C078C6A; }  /* 0C078C66 bf/s */
L_0C078C6A: BLKS(0x0C078C6Au);
	r10 = 0x0u;  /* 0C078C6A mov #imm,Rn */
	W8(r3, r10); UPD(0x0C078C6Eu, 2);  /* 0C078C6C mov.b Rm,@Rn */
	r8 = 0x0u;  /* 0C078C6E mov #imm,Rn */
	r10 = 0xA9u; UPD(0x0C078C72u, 2);  /* 0C078C70 mov.w @(disp,pc),Rn */
	r9 = r2;  /* 0C078C72 mov Rm,Rn */
	r10 += r2;  /* 0C078C74 add Rm,Rn */
	IF(0x0C078C76u); ;  /* 0C078C76 nop */
	UPD(0x0C078C78u, 3);
L_0C078C78: BLKS(0x0C078C78u);
	r0 = r8;  /* 0C078C78 mov Rm,Rn */
	r4 = 0xC18A1C8u; UPD(0x0C078C7Cu, 2);  /* 0C078C7A mov.l @(disp,pc),Rn */
	IF(0x0C078C7Cu); r0 <<= 2;  /* 0C078C7C shll2 Rn */
	IF(0x0C078C7Eu); r7 = R32(r0 + r4); UPD(0x0C078C80u, 2);  /* 0C078C7E mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C078C80 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C078C84u, 2);  /* 0C078C82 mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C078C84 add Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C078C88u, 2);  /* 0C078C86 mov.l @(disp,Rm),Rn */
	r0 = 0xA0000u; UPD(0x0C078C8Au, 1);  /* 0C078C88 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C078C8A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C078C8Eu, 2);  /* 0C078C8C mov.w @(disp,pc),Rn */
	IF(0x0C078C8Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C078C90u, 1);  /* 0C078C8E mov.b @(r0,Rm),Rn */
	r11 = r5 & 0xFF;  /* 0C078C90 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C078C94u, 2);  /* 0C078C92 mov.l Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C078C96u, 1);  /* 0C078C94 mov.b @Rm,Rn */
	r4 = 0x8000u; UPD(0x0C078C98u, 1);  /* 0C078C96 mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFF;  /* 0C078C98 extu.b Rm,Rn */
	r5 = 0x4000u; UPD(0x0C078C9Cu, 2);  /* 0C078C9A mov.w @(disp,pc),Rn */
	r0 = 0x808080u; UPD(0x0C078C9Eu, 1);  /* 0C078C9C mov.l @(disp,pc),Rn */
	r11 = 0xC0ACA40u; UPD(0x0C078CA0u, 1);  /* 0C078C9E mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r5); UPD(0x0C078CA2u, 1);  /* 0C078CA0 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r2); UPD(0x0C078CA4u, 1);  /* 0C078CA2 mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C078CA4 mov #imm,Rn */
	W32(r15 + 0x8u, r4); UPD(0x0C078CA8u, 2);  /* 0C078CA6 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r0); UPD(0x0C078CAAu, 1);  /* 0C078CA8 mov.l Rm,@(disp,Rn) */
	IF(0x0C078CAAu); { u32 t_ = r11; PR = 0x0C078CAEu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C078CAEu); }  /* 0C078CAA jsr @Rn */
L_0C078CAE: BLKS(0x0C078CAEu);
	r3 = r8;  /* 0C078CAE mov Rm,Rn */
	r3 += 0x1u;  /* 0C078CB0 add #imm,Rn */
	r8 = (u32)(s32)(s16)r3;  /* 0C078CB2 exts.w Rm,Rn */
	r6 = 0x2u;  /* 0C078CB4 mov #imm,Rn */
	T = (s32)r8 > (s32)r6;  /* 0C078CB6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C078C78u, 8); goto L_0C078C78; } UPD(0x0C078CBCu, 1); goto L_0C078CBC; }  /* 0C078CB8 bf/s */
L_0C078CBC: BLKS(0x0C078CBCu);
	{ IF(0x0C078CBEu); ; /* slot nop */ UPD(0x0C078A9Cu, 3); goto L_0C078A9C; }  /* 0C078CBC bra */
L_0C078CC0: BLKS(0x0C078CC0u);
	r9 = 0xB4u; UPD(0x0C078CC2u, 1);  /* 0C078CC0 mov.w @(disp,pc),Rn */
	IF(0x0C078CC2u); MACL = r4 * r9;  /* 0C078CC2 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C078CC6u, 3);  /* 0C078CC4 mov.l @(disp,pc),Rn */
	IF(0x0C078CC6u); r3 = MACL;  /* 0C078CC6 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C078CCAu, 2);  /* 0C078CC8 mov.w @(disp,pc),Rn */
	r3 += r8;  /* 0C078CCA add Rm,Rn */
	r2 += r3;  /* 0C078CCC add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C078CD0u, 3);  /* 0C078CCE mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C078CD0 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C078CD2 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C078CD4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C078CBCu, 6); goto L_0C078CBC; } UPD(0x0C078CDAu, 1); goto L_0C078CDA; }  /* 0C078CD6 bf/s */
L_0C078CDA: BLKS(0x0C078CDAu);
	r6 = 0x0u;  /* 0C078CDA mov #imm,Rn */
	W8(r2, r6); UPD(0x0C078CDEu, 2);  /* 0C078CDC mov.b Rm,@Rn */
	r15 += 0xFFFFFFECu;  /* 0C078CDE add #imm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C078CE2u, 2);  /* 0C078CE0 mov.l @(disp,Rm),Rn */
	r7 = 0x180000u; UPD(0x0C078CE4u, 1);  /* 0C078CE2 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C078CE6u, 1);  /* 0C078CE4 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C078CE6 add Rm,Rn */
	IF(0x0C078CE8u); r10 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C078CEAu, 2);  /* 0C078CE8 mov.b @(r0,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C078CECu, 1);  /* 0C078CEA mov.l @(disp,Rm),Rn */
	r9 = r10 & 0xFF;  /* 0C078CEC extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C078CF0u, 2);  /* 0C078CEE mov.l Rm,@Rn */
	r0 = r3;  /* 0C078CF0 mov Rm,Rn */
	r2 = 0x80000u; UPD(0x0C078CF4u, 2);  /* 0C078CF2 mov.l @(disp,pc),Rn */
	r8 = 0xA9u; UPD(0x0C078CF6u, 1);  /* 0C078CF4 mov.w @(disp,pc),Rn */
	r7 += r2;  /* 0C078CF6 add Rm,Rn */
	IF(0x0C078CF8u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C078CFAu, 2);  /* 0C078CF8 mov.b @(r0,Rm),Rn */
	r5 = 0xC000u; UPD(0x0C078CFCu, 1);  /* 0C078CFA mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFF;  /* 0C078CFC extu.b Rm,Rn */
	r2 = 0x808080u; UPD(0x0C078D00u, 2);  /* 0C078CFE mov.l @(disp,pc),Rn */
	r11 = 0x6000u; UPD(0x0C078D02u, 1);  /* 0C078D00 mov.w @(disp,pc),Rn */
	r10 = 0xC0ACA40u; UPD(0x0C078D04u, 1);  /* 0C078D02 mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C078D06u, 1);  /* 0C078D04 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r0); UPD(0x0C078D08u, 1);  /* 0C078D06 mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C078D08 mov #imm,Rn */
	W32(r15 + 0xCu, r11); UPD(0x0C078D0Cu, 2);  /* 0C078D0A mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r2); UPD(0x0C078D0Eu, 1);  /* 0C078D0C mov.l Rm,@(disp,Rn) */
	IF(0x0C078D0Eu); { u32 t_ = r10; PR = 0x0C078D12u; r4 = R32(r3); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C078D12u); }  /* 0C078D0E jsr @Rn */
L_0C078D12: BLKS(0x0C078D12u);
	r15 += 0x14u;  /* 0C078D12 add #imm,Rn */
	UPD(0x0C078D14u, 1);
L_0C078D14: BLKS(0x0C078D14u);
	{ IF(0x0C078D16u); ; /* slot nop */ UPD(0x0C078A9Cu, 3); goto L_0C078A9C; }  /* 0C078D14 bra */
L_0C078D20: BLKS(0x0C078D20u);
	r11 = 0xB4u; UPD(0x0C078D22u, 1);  /* 0C078D20 mov.w @(disp,pc),Rn */
	IF(0x0C078D22u); MACL = r4 * r11;  /* 0C078D22 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C078D26u, 3);  /* 0C078D24 mov.l @(disp,pc),Rn */
	IF(0x0C078D26u); r2 = MACL;  /* 0C078D26 sts macl,Rn */
	r2 += r3;  /* 0C078D28 add Rm,Rn */
	r3 = 0x99u; UPD(0x0C078D2Cu, 3);  /* 0C078D2A mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C078D2C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C078D30u, 2);  /* 0C078D2E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C078D30 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C078D32 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C078D34 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C078D14u, 6); goto L_0C078D14; } UPD(0x0C078D3Au, 1); goto L_0C078D3A; }  /* 0C078D36 bf/s */
L_0C078D3A: BLKS(0x0C078D3Au);
	r5 = 0x0u;  /* 0C078D3A mov #imm,Rn */
	r10 = 0xA9u; UPD(0x0C078D3Eu, 2);  /* 0C078D3C mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C078D3E mov #imm,Rn */
	W8(r3, r5); UPD(0x0C078D42u, 2);  /* 0C078D40 mov.b Rm,@Rn */
	r9 = r2;  /* 0C078D42 mov Rm,Rn */
	r10 += r2;  /* 0C078D44 add Rm,Rn */
	IF(0x0C078D46u); ;  /* 0C078D46 nop */
	UPD(0x0C078D48u, 3);
L_0C078D48: BLKS(0x0C078D48u);
	r0 = r8;  /* 0C078D48 mov Rm,Rn */
	r5 = 0xC18A1D4u; UPD(0x0C078D4Cu, 2);  /* 0C078D4A mov.l @(disp,pc),Rn */
	IF(0x0C078D4Cu); r0 <<= 2;  /* 0C078D4C shll2 Rn */
	IF(0x0C078D4Eu); r3 = R32(r0 + r5); UPD(0x0C078D50u, 2);  /* 0C078D4E mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C078D50 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C078D54u, 2);  /* 0C078D52 mov.l @(disp,Rm),Rn */
	r7 = 0x1A0000u; UPD(0x0C078D56u, 1);  /* 0C078D54 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C078D58u, 1);  /* 0C078D56 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C078D58 add Rm,Rn */
	IF(0x0C078D5Au); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C078D5Cu, 2);  /* 0C078D5A mov.b @(r0,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C078D5Eu, 1);  /* 0C078D5C mov.l @(disp,Rm),Rn */
	r11 = r2 & 0xFF;  /* 0C078D5E extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C078D62u, 2);  /* 0C078D60 mov.l Rm,@Rn */
	r7 += r3;  /* 0C078D62 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C078D66u, 2);  /* 0C078D64 mov.b @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C078D68u, 1);  /* 0C078D66 mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFF;  /* 0C078D68 extu.b Rm,Rn */
	r3 = 0x4000u; UPD(0x0C078D6Cu, 2);  /* 0C078D6A mov.w @(disp,pc),Rn */
	r2 = 0x808080u; UPD(0x0C078D6Eu, 1);  /* 0C078D6C mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C078D70u, 1);  /* 0C078D6E mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r0); UPD(0x0C078D72u, 1);  /* 0C078D70 mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C078D72 mov #imm,Rn */
	W32(r15 + 0xCu, r3); UPD(0x0C078D76u, 2);  /* 0C078D74 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r2); UPD(0x0C078D78u, 1);  /* 0C078D76 mov.l Rm,@(disp,Rn) */
	r11 = 0xC0ACA40u; UPD(0x0C078D7Au, 1);  /* 0C078D78 mov.l @(disp,pc),Rn */
	IF(0x0C078D7Au); { u32 t_ = r11; PR = 0x0C078D7Eu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C078D7Eu); }  /* 0C078D7A jsr @Rn */
L_0C078D7E: BLKS(0x0C078D7Eu);
	r4 = r8;  /* 0C078D7E mov Rm,Rn */
	r4 += 0x1u;  /* 0C078D80 add #imm,Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C078D82 exts.w Rm,Rn */
	r0 = 0x3u;  /* 0C078D84 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C078D86 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C078D48u, 8); goto L_0C078D48; } UPD(0x0C078D8Cu, 1); goto L_0C078D8C; }  /* 0C078D88 bf/s */
L_0C078D8C: BLKS(0x0C078D8Cu);
	{ IF(0x0C078D8Eu); ; /* slot nop */ UPD(0x0C078A9Cu, 3); goto L_0C078A9C; }  /* 0C078D8C bra */
L_0C078D90: BLKS(0x0C078D90u);
	r10 = 0xB4u; UPD(0x0C078D92u, 1);  /* 0C078D90 mov.w @(disp,pc),Rn */
	IF(0x0C078D92u); MACL = r4 * r10;  /* 0C078D92 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C078D96u, 3);  /* 0C078D94 mov.l @(disp,pc),Rn */
	IF(0x0C078D96u); r2 = MACL;  /* 0C078D96 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C078D9Au, 2);  /* 0C078D98 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C078D9A add Rm,Rn */
	r3 += r2;  /* 0C078D9C add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C078DA0u, 3);  /* 0C078D9E mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C078DA0 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C078DA2 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C078DA4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C078D8Cu, 6); goto L_0C078D8C; } UPD(0x0C078DAAu, 1); goto L_0C078DAA; }  /* 0C078DA6 bf/s */
L_0C078DAA: BLKS(0x0C078DAAu);
	r6 = 0x0u;  /* 0C078DAA mov #imm,Rn */
	r10 = 0xA9u; UPD(0x0C078DAEu, 2);  /* 0C078DAC mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C078DAE mov #imm,Rn */
	W8(r3, r6); UPD(0x0C078DB2u, 2);  /* 0C078DB0 mov.b Rm,@Rn */
	r9 = r2;  /* 0C078DB2 mov Rm,Rn */
	r10 += r2;  /* 0C078DB4 add Rm,Rn */
	IF(0x0C078DB6u); ;  /* 0C078DB6 nop */
	UPD(0x0C078DB8u, 3);
L_0C078DB8: BLKS(0x0C078DB8u);
	r0 = r8;  /* 0C078DB8 mov Rm,Rn */
	r5 = 0xC18A1E4u; UPD(0x0C078DBCu, 2);  /* 0C078DBA mov.l @(disp,pc),Rn */
	IF(0x0C078DBCu); r0 <<= 2;  /* 0C078DBC shll2 Rn */
	IF(0x0C078DBEu); r7 = R32(r0 + r5); UPD(0x0C078DC0u, 2);  /* 0C078DBE mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C078DC0 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C078DC4u, 2);  /* 0C078DC2 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C078DC6u, 1);  /* 0C078DC4 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C078DC6 add Rm,Rn */
	IF(0x0C078DC8u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C078DCAu, 2);  /* 0C078DC8 mov.b @(r0,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C078DCCu, 1);  /* 0C078DCA mov.l @(disp,Rm),Rn */
	r11 = r2 & 0xFF;  /* 0C078DCC extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C078DD0u, 2);  /* 0C078DCE mov.l Rm,@Rn */
	r3 = 0xE0000u; UPD(0x0C078DD2u, 1);  /* 0C078DD0 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C078DD4u, 1);  /* 0C078DD2 mov.b @Rm,Rn */
	r7 += r3;  /* 0C078DD4 add Rm,Rn */
	r5 = 0xC000u; UPD(0x0C078DD8u, 2);  /* 0C078DD6 mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFF;  /* 0C078DD8 extu.b Rm,Rn */
	r3 = 0x6000u; UPD(0x0C078DDCu, 2);  /* 0C078DDA mov.w @(disp,pc),Rn */
	r2 = 0x808080u; UPD(0x0C078DDEu, 1);  /* 0C078DDC mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C078DE0u, 1);  /* 0C078DDE mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r0); UPD(0x0C078DE2u, 1);  /* 0C078DE0 mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C078DE2 mov #imm,Rn */
	W32(r15 + 0xCu, r3); UPD(0x0C078DE6u, 2);  /* 0C078DE4 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r2); UPD(0x0C078DE8u, 1);  /* 0C078DE6 mov.l Rm,@(disp,Rn) */
	r11 = 0xC0ACA40u; UPD(0x0C078DEAu, 1);  /* 0C078DE8 mov.l @(disp,pc),Rn */
	IF(0x0C078DEAu); { u32 t_ = r11; PR = 0x0C078DEEu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C078DEEu); }  /* 0C078DEA jsr @Rn */
L_0C078DEE: BLKS(0x0C078DEEu);
	r4 = r8;  /* 0C078DEE mov Rm,Rn */
	r4 += 0x1u;  /* 0C078DF0 add #imm,Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C078DF2 exts.w Rm,Rn */
	r0 = 0x2u;  /* 0C078DF4 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C078DF6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C078DB8u, 8); goto L_0C078DB8; } UPD(0x0C078DFCu, 1); goto L_0C078DFC; }  /* 0C078DF8 bf/s */
L_0C078DFC: BLKS(0x0C078DFCu);
	{ IF(0x0C078DFEu); ; /* slot nop */ UPD(0x0C078A9Cu, 3); goto L_0C078A9C; }  /* 0C078DFC bra */
L_0C078E40: BLKS(0x0C078E40u);
	r9 = 0xB4u; UPD(0x0C078E42u, 1);  /* 0C078E40 mov.w @(disp,pc),Rn */
	IF(0x0C078E42u); MACL = r4 * r9;  /* 0C078E42 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C078E46u, 3);  /* 0C078E44 mov.l @(disp,pc),Rn */
	IF(0x0C078E46u); r2 = MACL;  /* 0C078E46 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C078E4Au, 2);  /* 0C078E48 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C078E4A add Rm,Rn */
	r3 += r2;  /* 0C078E4C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C078E50u, 3);  /* 0C078E4E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C078E50 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C078E52 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C078E54 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C078DFCu, 6); goto L_0C078DFC; } UPD(0x0C078E5Au, 1); goto L_0C078E5A; }  /* 0C078E56 bf/s */
L_0C078E5A: BLKS(0x0C078E5Au);
	r10 = 0x0u;  /* 0C078E5A mov #imm,Rn */
	W8(r3, r10); UPD(0x0C078E5Eu, 2);  /* 0C078E5C mov.b Rm,@Rn */
	r8 = 0x0u;  /* 0C078E5E mov #imm,Rn */
	r10 = 0xA9u; UPD(0x0C078E62u, 2);  /* 0C078E60 mov.w @(disp,pc),Rn */
	r9 = r2;  /* 0C078E62 mov Rm,Rn */
	r10 += r2;  /* 0C078E64 add Rm,Rn */
	IF(0x0C078E66u); ;  /* 0C078E66 nop */
	UPD(0x0C078E68u, 3);
L_0C078E68: BLKS(0x0C078E68u);
	r0 = r8;  /* 0C078E68 mov Rm,Rn */
	r3 = 0xC18A1F0u; UPD(0x0C078E6Cu, 2);  /* 0C078E6A mov.l @(disp,pc),Rn */
	IF(0x0C078E6Cu); r0 <<= 2;  /* 0C078E6C shll2 Rn */
	IF(0x0C078E6Eu); r2 = R32(r0 + r3); UPD(0x0C078E70u, 2);  /* 0C078E6E mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C078E70 add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C078E74u, 2);  /* 0C078E72 mov.w @(disp,pc),Rn */
	IF(0x0C078E74u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C078E76u, 1);  /* 0C078E74 mov.b @(r0,Rm),Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C078E78u, 1);  /* 0C078E76 mov.l @(disp,Rm),Rn */
	r11 = r4 & 0xFF;  /* 0C078E78 extu.b Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C078E7Cu, 2);  /* 0C078E7A mov.l @(disp,Rm),Rn */
	W32(r15, r11); UPD(0x0C078E7Eu, 1);  /* 0C078E7C mov.l Rm,@Rn */
	r7 += r2;  /* 0C078E7E add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C078E82u, 2);  /* 0C078E80 mov.b @Rm,Rn */
	r3 = 0x8000u; UPD(0x0C078E84u, 1);  /* 0C078E82 mov.l @(disp,pc),Rn */
	r5 = r0 & 0xFF;  /* 0C078E84 extu.b Rm,Rn */
	r2 = 0x4000u; UPD(0x0C078E88u, 2);  /* 0C078E86 mov.w @(disp,pc),Rn */
	r4 = 0x808080u; UPD(0x0C078E8Au, 1);  /* 0C078E88 mov.l @(disp,pc),Rn */
	r11 = 0xC0ACA40u; UPD(0x0C078E8Cu, 1);  /* 0C078E8A mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C078E8Eu, 1);  /* 0C078E8C mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x8u, r3); UPD(0x0C078E90u, 1);  /* 0C078E8E mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C078E90 mov #imm,Rn */
	W32(r15 + 0xCu, r2); UPD(0x0C078E94u, 2);  /* 0C078E92 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r4); UPD(0x0C078E96u, 1);  /* 0C078E94 mov.l Rm,@(disp,Rn) */
	IF(0x0C078E96u); { u32 t_ = r11; PR = 0x0C078E9Au; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C078E9Au); }  /* 0C078E96 jsr @Rn */
L_0C078E9A: BLKS(0x0C078E9Au);
	r0 = r8;  /* 0C078E9A mov Rm,Rn */
	r0 += 0x1u;  /* 0C078E9C add #imm,Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C078E9E exts.w Rm,Rn */
	r6 = 0x1u;  /* 0C078EA0 mov #imm,Rn */
	T = (s32)r8 > (s32)r6;  /* 0C078EA2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C078E68u, 8); goto L_0C078E68; } goto L_0C078EA8; }  /* 0C078EA4 bf/s */
L_0C078EA8: BLKS(0x0C078EA8u);
	{ IF(0x0C078EAAu); ; /* slot nop */ UPD(0x0C078A9Cu, 4); goto L_0C078A9C; }  /* 0C078EA8 bra */
L_0C078EB0: BLKS(0x0C078EB0u);
	r3 = 0xC0A1700u; UPD(0x0C078EB2u, 1);  /* 0C078EB0 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C078EB2 mov Rm,Rn */
	IF(0x0C078EB4u); PR = R32(r15); r15 += 4; UPD(0x0C078EB6u, 2);  /* 0C078EB4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C078EB8u, 1);  /* 0C078EB6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078EBAu, 1);  /* 0C078EB8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078EBCu, 1);  /* 0C078EBA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078EBEu, 1);  /* 0C078EBC mov.l @Rm+,Rn */
	IF(0x0C078EBEu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A1700u: TAIL(f_0C0A1700); default: JUMPD(tv_); } }  /* 0C078EBE jmp @Rn */
}

void f_0C078EF0(sh3_t *c)
{
	LOCALS;
L_0C078EF0: BLKS(0x0C078EF0u);
	r3 = 0xB4u; UPD(0x0C078EF2u, 1);  /* 0C078EF0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C078EF2 exts.w Rm,Rn */
	IF(0x0C078EF4u); MACL = r4 * r3;  /* 0C078EF4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C078EF8u, 4);  /* 0C078EF6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C078EFAu, 1);  /* 0C078EF8 mov.l Rm,@-Rn */
	IF(0x0C078EFAu); r2 = MACL;  /* 0C078EFA sts macl,Rn */
	r0 += r2;  /* 0C078EFC add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C078F00u, 3);  /* 0C078EFE mov.l @(disp,Rm),Rn */
	r0 = 0x8u;  /* 0C078F00 mov #imm,Rn */
	T = r2 > r0;  /* 0C078F02 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C078FD0u, 5); goto L_0C078FD0; } goto L_0C078F08; }  /* 0C078F04 bt/s */
L_0C078F08: BLKS(0x0C078F08u);
	r0 = 0xC078F18u;  /* 0C078F08 mova @(disp,pc),r0 */
	IF(0x0C078F0Au); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C078F0Cu, 3);  /* 0C078F0A mov.b @(r0,Rm),Rn */
	r5 = r5 & 0xFF;  /* 0C078F0C extu.b Rm,Rn */
	IF(0x0C078F0Eu); { u32 tv_ = (r5 + 0x0C078F12u); u32 t_ = PHYS(tv_); IF(0x0C078F10u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C078F30u: goto L_0C078F30; case 0x0C078F60u: goto L_0C078F60; case 0x0C078F70u: goto L_0C078F70; case 0x0C078F80u: goto L_0C078F80; case 0x0C078F90u: goto L_0C078F90; case 0x0C078FB0u: goto L_0C078FB0; case 0x0C078FC0u: goto L_0C078FC0; default: JUMPD(tv_); } }  /* 0C078F0E braf Rn */
L_0C078F30: BLKS(0x0C078F30u);
	r7 = 0xB4u; UPD(0x0C078F32u, 1);  /* 0C078F30 mov.w @(disp,pc),Rn */
	IF(0x0C078F32u); MACL = r4 * r7;  /* 0C078F32 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C078F36u, 3);  /* 0C078F34 mov.l @(disp,pc),Rn */
	IF(0x0C078F36u); r0 = MACL;  /* 0C078F36 sts macl,Rn */
	IF(0x0C078F38u); r0 = R32(r0 + r6); UPD(0x0C078F3Au, 2);  /* 0C078F38 mov.l @(r0,Rm),Rn */
	IF(0x0C078F3Au); r0 >>= 16;  /* 0C078F3A shlr16 Rn */
	IF(0x0C078F3Cu); r0 >>= 8;  /* 0C078F3C shlr8 Rn */
	IF(0x0C078F3Eu); r0 >>= 2;  /* 0C078F3E shlr2 Rn */
	r0 &= 0x1u;  /* 0C078F40 and #imm,r0 */
	r5 = 0xC18A1F8u; UPD(0x0C078F44u, 5);  /* 0C078F42 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C078F44 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C078F4Cu, 4); goto L_0C078F4C; }  /* 0C078F46 bt */
L_0C078F48: BLKS(0x0C078F48u);
	r5 = 0xC18A2DAu; UPD(0x0C078F4Au, 1);  /* 0C078F48 mov.l @(disp,pc),Rn */
	IF(0x0C078F4Au); ;  /* 0C078F4A nop */
	UPD(0x0C078F4Cu, 1);
L_0C078F4C: BLKS(0x0C078F4Cu);
	r3 = 0xC0A17E0u; UPD(0x0C078F4Eu, 1);  /* 0C078F4C mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C078F4E mov Rm,Rn */
	IF(0x0C078F50u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A17E0u: TAIL(f_0C0A17E0); default: JUMPD(tv_); } }  /* 0C078F50 jmp @Rn */
L_0C078F60: BLKS(0x0C078F60u);
	r5 = 0xC18A33Cu; UPD(0x0C078F62u, 1);  /* 0C078F60 mov.l @(disp,pc),Rn */
	{ IF(0x0C078F64u); ; /* slot nop */ UPD(0x0C078F4Cu, 3); goto L_0C078F4C; }  /* 0C078F62 bra */
L_0C078F70: BLKS(0x0C078F70u);
	r5 = 0xC18A368u; UPD(0x0C078F72u, 1);  /* 0C078F70 mov.l @(disp,pc),Rn */
	{ IF(0x0C078F74u); ; /* slot nop */ UPD(0x0C078F4Cu, 3); goto L_0C078F4C; }  /* 0C078F72 bra */
L_0C078F80: BLKS(0x0C078F80u);
	r5 = 0xC18A394u; UPD(0x0C078F82u, 1);  /* 0C078F80 mov.l @(disp,pc),Rn */
	{ IF(0x0C078F84u); ; /* slot nop */ UPD(0x0C078F4Cu, 3); goto L_0C078F4C; }  /* 0C078F82 bra */
L_0C078F90: BLKS(0x0C078F90u);
	r0 = 0xB4u; UPD(0x0C078F92u, 1);  /* 0C078F90 mov.w @(disp,pc),Rn */
	IF(0x0C078F92u); MACL = r4 * r0;  /* 0C078F92 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C078F96u, 3);  /* 0C078F94 mov.l @(disp,pc),Rn */
	IF(0x0C078F96u); r0 = MACL;  /* 0C078F96 sts macl,Rn */
	IF(0x0C078F98u); r0 = R32(r0 + r2); UPD(0x0C078F9Au, 2);  /* 0C078F98 mov.l @(r0,Rm),Rn */
	IF(0x0C078F9Au); r0 >>= 16;  /* 0C078F9A shlr16 Rn */
	IF(0x0C078F9Cu); r0 >>= 8;  /* 0C078F9C shlr8 Rn */
	IF(0x0C078F9Eu); r0 >>= 2;  /* 0C078F9E shlr2 Rn */
	r0 &= 0x1u;  /* 0C078FA0 and #imm,r0 */
	r5 = 0xC18A40Au; UPD(0x0C078FA4u, 5);  /* 0C078FA2 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C078FA4 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C078F4Cu, 4); goto L_0C078F4C; }  /* 0C078FA6 bt */
L_0C078FA8: BLKS(0x0C078FA8u);
	r5 = 0xC18A3DEu; UPD(0x0C078FAAu, 1);  /* 0C078FA8 mov.l @(disp,pc),Rn */
	{ IF(0x0C078FACu); ; /* slot nop */ UPD(0x0C078F4Cu, 3); goto L_0C078F4C; }  /* 0C078FAA bra */
L_0C078FB0: BLKS(0x0C078FB0u);
	r5 = 0xC18A3C0u; UPD(0x0C078FB2u, 1);  /* 0C078FB0 mov.l @(disp,pc),Rn */
	{ IF(0x0C078FB4u); ; /* slot nop */ UPD(0x0C078F4Cu, 3); goto L_0C078F4C; }  /* 0C078FB2 bra */
L_0C078FC0: BLKS(0x0C078FC0u);
	r5 = 0xC18A44Eu; UPD(0x0C078FC2u, 1);  /* 0C078FC0 mov.l @(disp,pc),Rn */
	{ IF(0x0C078FC4u); ; /* slot nop */ UPD(0x0C078F4Cu, 3); goto L_0C078F4C; }  /* 0C078FC2 bra */
L_0C078FD0: BLKS(0x0C078FD0u);
	r15 = r14;  /* 0C078FD0 mov Rm,Rn */
	IF(0x0C078FD2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C078FD2 rts */
}

void f_0C079010(sh3_t *c)
{
	LOCALS;
L_0C079010: BLKS(0x0C079010u);
	r3 = 0xB4u; UPD(0x0C079012u, 1);  /* 0C079010 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C079012 exts.w Rm,Rn */
	IF(0x0C079014u); MACL = r4 * r3;  /* 0C079014 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C079018u, 4);  /* 0C079016 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07901Au, 1);  /* 0C079018 mov.l Rm,@-Rn */
	IF(0x0C07901Au); r2 = MACL;  /* 0C07901A sts macl,Rn */
	r0 += r2;  /* 0C07901C add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C079020u, 3);  /* 0C07901E mov.l @(disp,Rm),Rn */
	r0 = 0x3u;  /* 0C079020 mov #imm,Rn */
	T = r2 > r0;  /* 0C079022 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0790A0u, 5); goto L_0C0790A0; } goto L_0C079028; }  /* 0C079024 bt/s */
L_0C079028: BLKS(0x0C079028u);
	r0 = 0xC079030u;  /* 0C079028 mova @(disp,pc),r0 */
	IF(0x0C07902Au); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07902Cu, 3);  /* 0C07902A mov.b @(r0,Rm),Rn */
	IF(0x0C07902Cu); { u32 tv_ = (r5 + 0x0C079030u); u32 t_ = PHYS(tv_); IF(0x0C07902Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C079040u: goto L_0C079040; case 0x0C079050u: goto L_0C079050; case 0x0C079060u: goto L_0C079060; case 0x0C079080u: goto L_0C079080; default: JUMPD(tv_); } }  /* 0C07902C braf Rn */
L_0C079040: BLKS(0x0C079040u);
	r5 = 0xC18B338u; UPD(0x0C079042u, 1);  /* 0C079040 mov.l @(disp,pc),Rn */
L_0C079042: BLKS(0x0C079042u);
	r2 = 0xC0A17E0u; UPD(0x0C079044u, 1);  /* 0C079042 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C079044 mov Rm,Rn */
	IF(0x0C079046u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A17E0u: TAIL(f_0C0A17E0); default: JUMPD(tv_); } }  /* 0C079046 jmp @Rn */
L_0C079050: BLKS(0x0C079050u);
	r5 = 0xC18B378u; UPD(0x0C079052u, 1);  /* 0C079050 mov.l @(disp,pc),Rn */
	{ IF(0x0C079054u); ; /* slot nop */ UPD(0x0C079042u, 3); goto L_0C079042; }  /* 0C079052 bra */
L_0C079060: BLKS(0x0C079060u);
	r0 = 0xB4u; UPD(0x0C079062u, 1);  /* 0C079060 mov.w @(disp,pc),Rn */
	IF(0x0C079062u); MACL = r4 * r0;  /* 0C079062 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C079066u, 3);  /* 0C079064 mov.l @(disp,pc),Rn */
	IF(0x0C079066u); r0 = MACL;  /* 0C079066 sts macl,Rn */
	IF(0x0C079068u); r7 = R32(r0 + r2); UPD(0x0C07906Au, 2);  /* 0C079068 mov.l @(r0,Rm),Rn */
	r6 = 0x4000000u; UPD(0x0C07906Cu, 1);  /* 0C07906A mov.l @(disp,pc),Rn */
	r5 = 0xC18B3B8u; UPD(0x0C07906Eu, 1);  /* 0C07906C mov.l @(disp,pc),Rn */
	T = (r7 & r6) == 0;  /* 0C07906E tst Rm,Rn */
	if (T) { UPD(0x0C079042u, 4); goto L_0C079042; }  /* 0C079070 bt */
L_0C079072: BLKS(0x0C079072u);
	r5 = 0xC18B3D0u; UPD(0x0C079074u, 1);  /* 0C079072 mov.l @(disp,pc),Rn */
	{ IF(0x0C079076u); ; /* slot nop */ UPD(0x0C079042u, 3); goto L_0C079042; }  /* 0C079074 bra */
L_0C079080: BLKS(0x0C079080u);
	r7 = 0xB4u; UPD(0x0C079082u, 1);  /* 0C079080 mov.w @(disp,pc),Rn */
	IF(0x0C079082u); MACL = r4 * r7;  /* 0C079082 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C079086u, 3);  /* 0C079084 mov.l @(disp,pc),Rn */
	IF(0x0C079086u); r0 = MACL;  /* 0C079086 sts macl,Rn */
	IF(0x0C079088u); r5 = R32(r0 + r6); UPD(0x0C07908Au, 2);  /* 0C079088 mov.l @(r0,Rm),Rn */
	r3 = 0x4000000u; UPD(0x0C07908Cu, 1);  /* 0C07908A mov.l @(disp,pc),Rn */
	T = (r5 & r3) == 0;  /* 0C07908C tst Rm,Rn */
	r5 = 0xC18B3E8u; UPD(0x0C079090u, 2);  /* 0C07908E mov.l @(disp,pc),Rn */
	if (T) { UPD(0x0C079042u, 3); goto L_0C079042; }  /* 0C079090 bt */
L_0C079092: BLKS(0x0C079092u);
	r5 = 0xC18B400u; UPD(0x0C079094u, 1);  /* 0C079092 mov.l @(disp,pc),Rn */
	{ IF(0x0C079096u); ; /* slot nop */ UPD(0x0C079042u, 3); goto L_0C079042; }  /* 0C079094 bra */
L_0C0790A0: BLKS(0x0C0790A0u);
	r15 = r14;  /* 0C0790A0 mov Rm,Rn */
	IF(0x0C0790A2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0790A2 rts */
}

void f_0C0790D0(sh3_t *c)
{
	LOCALS;
L_0C0790D0: BLKS(0x0C0790D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0790D2u, 1);  /* 0C0790D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0790D4u, 1);  /* 0C0790D2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0790D4 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0790D8u, 2);  /* 0C0790D6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0790DAu, 1);  /* 0C0790D8 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0790DCu, 1);  /* 0C0790DA mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0790DEu, 1);  /* 0C0790DC mov.l Rm,@-Rn */
	IF(0x0C0790DEu); MACL = r8 * r2;  /* 0C0790DE mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0790E2u, 3);  /* 0C0790E0 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C0790E4u, 1);  /* 0C0790E2 mov.l @(disp,pc),Rn */
	IF(0x0C0790E4u); r10 = MACL;  /* 0C0790E4 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0790E8u, 2);  /* 0C0790E6 mov.l Rm,@-Rn */
	r10 += r0;  /* 0C0790E8 add Rm,Rn */
	IF(0x0C0790EAu); r15 -= 4; W32(r15, PR); UPD(0x0C0790ECu, 2);  /* 0C0790EA sts.l pr,@-Rn */
	r10 += 0x3Cu;  /* 0C0790EC add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0790F0u, 2);  /* 0C0790EE mov.w @Rm,Rn */
	r14 = r15;  /* 0C0790F0 mov Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0790F2 tst Rm,Rn */
	{ u32 c_ = !T; r10 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0790FCu, 5); goto L_0C0790FC; } goto L_0C0790F8; }  /* 0C0790F4 bf/s */
L_0C0790F8: BLKS(0x0C0790F8u);
	{ IF(0x0C0790FAu); ; /* slot nop */ UPD(0x0C079280u, 4); goto L_0C079280; }  /* 0C0790F8 bra */
L_0C0790FC: BLKS(0x0C0790FCu);
	r9 = 0xC0A1830u; UPD(0x0C0790FEu, 1);  /* 0C0790FC mov.l @(disp,pc),Rn */
	IF(0x0C0790FEu); { u32 t_ = r9; PR = 0x0C079102u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1830, 0x0C0A1830u, 0x0C079102u); }  /* 0C0790FE jsr @Rn */
L_0C079102: BLKS(0x0C079102u);
	T = (r0 & r0) == 0;  /* 0C079102 tst Rm,Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0791A0u, 4); goto L_0C0791A0; } goto L_0C079108; }  /* 0C079104 bt/s */
L_0C079108: BLKS(0x0C079108u);
	r4 = 0x9Cu; UPD(0x0C07910Au, 2);  /* 0C079108 mov.w @(disp,pc),Rn */
	r1 = 0xAu;  /* 0C07910A mov #imm,Rn */
	r4 += r10;  /* 0C07910C add Rm,Rn */
	W8(r4, r1); UPD(0x0C079110u, 3);  /* 0C07910E mov.b Rm,@Rn */
	r3 = 0x3u;  /* 0C079110 mov #imm,Rn */
	r4 += 0x1u;  /* 0C079112 add #imm,Rn */
	r2 = R32(r10 + 0x8u); UPD(0x0C079116u, 3);  /* 0C079114 mov.l @(disp,Rm),Rn */
	T = r2 > r3;  /* 0C079116 cmp/hi Rm,Rn */
	{ u32 c_ = T; W8(r4, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C079180u, 4); goto L_0C079180; } UPD(0x0C07911Cu, 1); goto L_0C07911C; }  /* 0C079118 bt/s */
L_0C07911C: BLKS(0x0C07911Cu);
	r0 = 0xC079124u;  /* 0C07911C mova @(disp,pc),r0 */
	IF(0x0C07911Eu); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C079120u, 2);  /* 0C07911E mov.b @(r0,Rm),Rn */
	IF(0x0C079120u); { u32 tv_ = (r5 + 0x0C079124u); u32 t_ = PHYS(tv_); IF(0x0C079122u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C079130u: goto L_0C079130; case 0x0C079150u: goto L_0C079150; case 0x0C079160u: goto L_0C079160; case 0x0C079170u: goto L_0C079170; default: JUMPD(tv_); } }  /* 0C079120 braf Rn */
L_0C079130: BLKS(0x0C079130u);
	r5 = 0xC18B5CEu; UPD(0x0C079132u, 1);  /* 0C079130 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C079132 mov Rm,Rn */
	UPD(0x0C079134u, 1);
L_0C079134: BLKS(0x0C079134u);
	r6 = 0xC0A17E0u; UPD(0x0C079136u, 1);  /* 0C079134 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C079136 mov Rm,Rn */
	IF(0x0C079138u); PR = R32(r15); r15 += 4; UPD(0x0C07913Au, 2);  /* 0C079138 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07913Cu, 1);  /* 0C07913A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07913Eu, 1);  /* 0C07913C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C079140u, 1);  /* 0C07913E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C079142u, 1);  /* 0C079140 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C079144u, 1);  /* 0C079142 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C079146u, 1);  /* 0C079144 mov.l @Rm+,Rn */
	IF(0x0C079146u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A17E0u: TAIL(f_0C0A17E0); default: JUMPD(tv_); } }  /* 0C079146 jmp @Rn */
L_0C079150: BLKS(0x0C079150u);
	r5 = 0xC18B614u; UPD(0x0C079152u, 1);  /* 0C079150 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C079134u, 3); goto L_0C079134; }  /* 0C079152 bra */
L_0C079160: BLKS(0x0C079160u);
	r5 = 0xC18B65Au; UPD(0x0C079162u, 1);  /* 0C079160 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C079134u, 3); goto L_0C079134; }  /* 0C079162 bra */
L_0C079170: BLKS(0x0C079170u);
	r5 = 0xC18B6A0u; UPD(0x0C079172u, 1);  /* 0C079170 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C079134u, 3); goto L_0C079134; }  /* 0C079172 bra */
L_0C079180: BLKS(0x0C079180u);
	r15 = r14;  /* 0C079180 mov Rm,Rn */
	IF(0x0C079182u); PR = R32(r15); r15 += 4; UPD(0x0C079184u, 2);  /* 0C079182 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C079186u, 1);  /* 0C079184 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C079188u, 1);  /* 0C079186 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07918Au, 1);  /* 0C079188 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07918Cu, 1);  /* 0C07918A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07918Eu, 1);  /* 0C07918C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C079190u, 1);  /* 0C07918E mov.l @Rm+,Rn */
	IF(0x0C079190u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C079190 rts */
L_0C0791A0: BLKS(0x0C0791A0u);
	r8 = 0x9Cu; UPD(0x0C0791A2u, 1);  /* 0C0791A0 mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C0791A2 add Rm,Rn */
	r11 = r8;  /* 0C0791A4 mov Rm,Rn */
	r11 += 0x3u;  /* 0C0791A6 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r11); UPD(0x0C0791AAu, 4);  /* 0C0791A8 mov.b @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C0791AA extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0791AC tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C079210u, 5); goto L_0C079210; } goto L_0C0791B2; }  /* 0C0791AE bt/s */
L_0C0791B2: BLKS(0x0C0791B2u);
	if (!T) { UPD(0x0C079180u, 4); goto L_0C079180; }  /* 0C0791B2 bf */
L_0C0791B4: BLKS(0x0C0791B4u);
	r5 = R32(r10 + 0x8u); UPD(0x0C0791B6u, 1);  /* 0C0791B4 mov.l @(disp,Rm),Rn */
	r6 = 0x3u;  /* 0C0791B6 mov #imm,Rn */
	IF(0x0C0791B8u); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0791B8 shld Rm,Rn */
	r13 = 0xC18B5A4u; UPD(0x0C0791BCu, 3);  /* 0C0791BA mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C0791BC add #imm,Rn */
	r5 += r13;  /* 0C0791BE add Rm,Rn */
	r12 = R32(r5); UPD(0x0C0791C2u, 3);  /* 0C0791C0 mov.l @Rm,Rn */
	r13 = R32(r10 + 0x24u); UPD(0x0C0791C4u, 1);  /* 0C0791C2 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C0791C6u, 1);  /* 0C0791C4 mov.w @(disp,pc),Rn */
	r13 += r12;  /* 0C0791C6 add Rm,Rn */
	IF(0x0C0791C8u); r2 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0791CAu, 2);  /* 0C0791C8 mov.b @(r0,Rm),Rn */
	r4 = R32(r5 + 0x4u); UPD(0x0C0791CCu, 1);  /* 0C0791CA mov.l @(disp,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C0791CC extu.b Rm,Rn */
	r12 = R32(r10 + 0x28u); UPD(0x0C0791D0u, 2);  /* 0C0791CE mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C0791D2u, 1);  /* 0C0791D0 mov.l Rm,@Rn */
	r12 += r4;  /* 0C0791D2 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0791D6u, 2);  /* 0C0791D4 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C0791D6 mov Rm,Rn */
	IF(0x0C0791D8u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0791DAu, 2);  /* 0C0791D8 mov.b @(r0,Rm),Rn */
	r0 = 0xC050D70u; UPD(0x0C0791DCu, 1);  /* 0C0791DA mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C0791DC extu.b Rm,Rn */
	r5 = 0x40000u; UPD(0x0C0791E0u, 2);  /* 0C0791DE mov.l @(disp,pc),Rn */
	r4 = 0x8000u; UPD(0x0C0791E2u, 1);  /* 0C0791E0 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0791E4u, 1);  /* 0C0791E2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0791E4u); { u32 t_ = r0; PR = 0x0C0791E8u; W32(r15 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0791E8u); }  /* 0C0791E4 jsr @Rn */
L_0C0791E8: BLKS(0x0C0791E8u);
	r4 = 0x808080u; UPD(0x0C0791EAu, 1);  /* 0C0791E8 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C0791EA mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0791EEu, 2);  /* 0C0791EC mov.l Rm,@(disp,Rn) */
	r6 = r13;  /* 0C0791EE mov Rm,Rn */
	W32(r15 + 0x10u, r4); UPD(0x0C0791F2u, 2);  /* 0C0791F0 mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C0791F4u, 1);  /* 0C0791F2 mov.l @Rm,Rn */
	r10 = 0xC0ACA40u; UPD(0x0C0791F6u, 1);  /* 0C0791F4 mov.l @(disp,pc),Rn */
	IF(0x0C0791F6u); { u32 t_ = r10; PR = 0x0C0791FAu; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C0791FAu); }  /* 0C0791F6 jsr @Rn */
L_0C0791FA: BLKS(0x0C0791FAu);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0791FCu, 1);  /* 0C0791FA mov.b @Rm,Rn */
	r15 += 0x14u;  /* 0C0791FC add #imm,Rn */
	r1 += 0x1u;  /* 0C0791FE add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C079200 extu.b Rm,Rn */
	T = r0 == 0x78u;  /* 0C079202 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r8, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C079180u, 7); goto L_0C079180; } UPD(0x0C079208u, 1); goto L_0C079208; }  /* 0C079204 bf/s */
L_0C079208: BLKS(0x0C079208u);
	W8(r8, r9); UPD(0x0C07920Au, 1);  /* 0C079208 mov.b Rm,@Rn */
	W8(r11, r9); UPD(0x0C07920Cu, 1);  /* 0C07920A mov.b Rm,@Rn */
L_0C07920C: BLKS(0x0C07920Cu);
	{ IF(0x0C07920Eu); ; /* slot nop */ UPD(0x0C079180u, 3); goto L_0C079180; }  /* 0C07920C bra */
L_0C079210: BLKS(0x0C079210u);
	r1 = 0x99u; UPD(0x0C079212u, 1);  /* 0C079210 mov.w @(disp,pc),Rn */
	r1 += r10;  /* 0C079212 add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r1); UPD(0x0C079216u, 2);  /* 0C079214 mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C079216 add #imm,Rn */
	r0 = r12 & 0xFF;  /* 0C079218 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C07921A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r1, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C079180u, 6); goto L_0C079180; } UPD(0x0C079220u, 1); goto L_0C079220; }  /* 0C07921C bf/s */
L_0C079220: BLKS(0x0C079220u);
	r3 = R32(r10 + 0x8u); UPD(0x0C079222u, 1);  /* 0C079220 mov.l @(disp,Rm),Rn */
	r2 = 0x3u;  /* 0C079222 mov #imm,Rn */
	IF(0x0C079224u); ARG0(0x432Du); { s32 s_ = (s32)r2; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C079224 shld Rm,Rn */
	r13 = 0xC18B5A4u; UPD(0x0C079228u, 3);  /* 0C079226 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C079228 add #imm,Rn */
	W8(r1, r9); UPD(0x0C07922Cu, 2);  /* 0C07922A mov.b Rm,@Rn */
	r3 += r13;  /* 0C07922C add Rm,Rn */
	r12 = R32(r3); UPD(0x0C079230u, 2);  /* 0C07922E mov.l @Rm,Rn */
	r13 = R32(r10 + 0x24u); UPD(0x0C079232u, 1);  /* 0C079230 mov.l @(disp,Rm),Rn */
	r13 += r12;  /* 0C079232 add Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C079236u, 2);  /* 0C079234 mov.l @(disp,Rm),Rn */
	r12 = R32(r10 + 0x28u); UPD(0x0C079238u, 1);  /* 0C079236 mov.l @(disp,Rm),Rn */
	r12 += r0;  /* 0C079238 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07923Cu, 2);  /* 0C07923A mov.w @(disp,pc),Rn */
	IF(0x0C07923Cu); r7 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C07923Eu, 1);  /* 0C07923C mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C07923E extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C079242u, 2);  /* 0C079240 mov.l Rm,@Rn */
	r0 = r10;  /* 0C079242 mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C079246u, 2);  /* 0C079244 mov.w @(disp,pc),Rn */
	IF(0x0C079246u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C079248u, 1);  /* 0C079246 mov.b @(r0,Rm),Rn */
	r0 = 0xC050D70u; UPD(0x0C07924Au, 1);  /* 0C079248 mov.l @(disp,pc),Rn */
	r3 = r4 & 0xFF;  /* 0C07924A extu.b Rm,Rn */
	r2 = 0x10000u; UPD(0x0C07924Eu, 2);  /* 0C07924C mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C079250u, 1);  /* 0C07924E mov.l Rm,@(disp,Rn) */
	r4 = 0x8000u; UPD(0x0C079252u, 1);  /* 0C079250 mov.l @(disp,pc),Rn */
	IF(0x0C079252u); { u32 t_ = r0; PR = 0x0C079256u; W32(r15 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C079256u); }  /* 0C079252 jsr @Rn */
L_0C079256: BLKS(0x0C079256u);
	W32(r15 + 0xCu, r0); UPD(0x0C079258u, 1);  /* 0C079256 mov.l Rm,@(disp,Rn) */
	r6 = r13;  /* 0C079258 mov Rm,Rn */
	r0 = 0x808080u; UPD(0x0C07925Cu, 2);  /* 0C07925A mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C07925C mov #imm,Rn */
	W32(r15 + 0x10u, r0); UPD(0x0C079260u, 2);  /* 0C07925E mov.l Rm,@(disp,Rn) */
	r7 = r12;  /* 0C079260 mov Rm,Rn */
	r13 = 0xC0ACA40u; UPD(0x0C079264u, 2);  /* 0C079262 mov.l @(disp,pc),Rn */
	IF(0x0C079264u); { u32 t_ = r13; PR = 0x0C079268u; r4 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C079268u); }  /* 0C079264 jsr @Rn */
L_0C079268: BLKS(0x0C079268u);
	r10 = (u32)(s32)(s8)R8(r8); UPD(0x0C07926Au, 1);  /* 0C079268 mov.b @Rm,Rn */
	r15 += 0x14u;  /* 0C07926A add #imm,Rn */
	r10 += 0x1u;  /* 0C07926C add #imm,Rn */
	r0 = r10 & 0xFF;  /* 0C07926E extu.b Rm,Rn */
	T = r0 == 0x18u;  /* 0C079270 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r8, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07920Cu, 7); goto L_0C07920C; } UPD(0x0C079276u, 1); goto L_0C079276; }  /* 0C079272 bf/s */
L_0C079276: BLKS(0x0C079276u);
	W8(r8, r9); UPD(0x0C079278u, 1);  /* 0C079276 mov.b Rm,@Rn */
	r8 = (u32)(s32)(s8)R8(r11); UPD(0x0C07927Au, 1);  /* 0C079278 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C07927A add #imm,Rn */
	{ W8(r11, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C079180u, 4); goto L_0C079180; }  /* 0C07927C bra */
L_0C079280: BLKS(0x0C079280u);
	r11 = 0xC0A1700u; UPD(0x0C079282u, 1);  /* 0C079280 mov.l @(disp,pc),Rn */
	IF(0x0C079282u); { u32 t_ = r11; PR = 0x0C079286u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C079286u); }  /* 0C079282 jsr @Rn */
L_0C079286: BLKS(0x0C079286u);
	r11 = 0x9Cu; UPD(0x0C079288u, 1);  /* 0C079286 mov.w @(disp,pc),Rn */
	r11 += r10;  /* 0C079288 add Rm,Rn */
	r2 = r11;  /* 0C07928A mov Rm,Rn */
	r2 += 0x1u;  /* 0C07928C add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C079290u, 4);  /* 0C07928E mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C079290 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0792F0u, 4); goto L_0C0792F0; } goto L_0C079296; }  /* 0C079292 bt/s */
L_0C079296: BLKS(0x0C079296u);
	W8(r2, r1); UPD(0x0C079298u, 2);  /* 0C079296 mov.b Rm,@Rn */
L_0C079298: BLKS(0x0C079298u);
	{ IF(0x0C07929Au); ; /* slot nop */ UPD(0x0C079180u, 3); goto L_0C079180; }  /* 0C079298 bra */
L_0C0792F0: BLKS(0x0C0792F0u);
	r9 = 0x99u; UPD(0x0C0792F2u, 1);  /* 0C0792F0 mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C0792F2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0792F6u, 2);  /* 0C0792F4 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0792F6 add #imm,Rn */
	W8(r9, r0); UPD(0x0C0792FAu, 2);  /* 0C0792F8 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C0792FA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0792FC tst Rm,Rn */
	if (!T) { UPD(0x0C079298u, 5); goto L_0C079298; }  /* 0C0792FE bf */
L_0C079300: BLKS(0x0C079300u);
	r6 = R32(r10 + 0x28u); UPD(0x0C079302u, 1);  /* 0C079300 mov.l @(disp,Rm),Rn */
	r2 = 0xFFFFFFFAu;  /* 0C079302 mov #imm,Rn */
	r5 = (r6 >> 16) | (r6 << 16);  /* 0C079304 swap.w Rm,Rn */
	r4 = 0xFFFFFEA0u; UPD(0x0C079308u, 3);  /* 0C079306 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C079308 exts.w Rm,Rn */
	r9 += r4;  /* 0C07930A add Rm,Rn */
	IF(0x0C07930Cu); ARG0(0x492Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = (u32)((s32)r9 >> 31); else r9 = (u32)((s32)r9 >> ((~s_ & 31) + 1)); }  /* 0C07930C shad Rm,Rn */
	r13 = 0xC050D70u; UPD(0x0C079310u, 4);  /* 0C07930E mov.l @(disp,pc),Rn */
	r9 += r9;  /* 0C079310 add Rm,Rn */
	r0 = 0xC18B5C4u; UPD(0x0C079314u, 2);  /* 0C079312 mov.l @(disp,pc),Rn */
	r4 = 0x40u;  /* 0C079314 mov #imm,Rn */
	IF(0x0C079316u); { u32 t_ = r13; PR = 0x0C07931Au; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C07931Au); }  /* 0C079316 jsr @Rn */
L_0C07931A: BLKS(0x0C07931Au);
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C07931Cu, 1);  /* 0C07931A mov.w @Rm,Rn */
	r7 = r0;  /* 0C07931C mov Rm,Rn */
	r12 = 0xC058060u; UPD(0x0C079320u, 2);  /* 0C07931E mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C079320 add Rm,Rn */
	r13 = 0x48000u; UPD(0x0C079324u, 2);  /* 0C079322 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C079324 exts.w Rm,Rn */
	r4 = r8;  /* 0C079326 mov Rm,Rn */
	IF(0x0C079328u); { u32 t_ = r12; PR = 0x0C07932Cu; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07932Cu); }  /* 0C079328 jsr @Rn */
L_0C07932C: BLKS(0x0C07932Cu);
	r5 = r13;  /* 0C07932C mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C079330u, 2);  /* 0C07932E mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C079330 mov Rm,Rn */
	IF(0x0C079332u); { u32 t_ = r13; PR = 0x0C079336u; r12 = r0; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C079336u); }  /* 0C079332 jsr @Rn */
L_0C079336: BLKS(0x0C079336u);
	r1 = R32(r10); UPD(0x0C079338u, 1);  /* 0C079336 mov.l @Rm,Rn */
	r8 = 0x4000000u; UPD(0x0C07933Au, 1);  /* 0C079338 mov.l @(disp,pc),Rn */
	T = (r1 & r8) == 0;  /* 0C07933A tst Rm,Rn */
	{ u32 c_ = !T; r3 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C079350u, 4); goto L_0C079350; } UPD(0x0C079340u, 1); goto L_0C079340; }  /* 0C07933C bf/s */
L_0C079340: BLKS(0x0C079340u);
	r12 = (u32)(s32)(s8)R8(r11); UPD(0x0C079342u, 1);  /* 0C079340 mov.b @Rm,Rn */
	r12 += 0xFFFFFFFFu;  /* 0C079342 add #imm,Rn */
	r1 = r12 & 0xFF;  /* 0C079344 extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C079346 tst Rm,Rn */
	{ u32 c_ = !T; W8(r11, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C079298u, 6); goto L_0C079298; } UPD(0x0C07934Cu, 1); goto L_0C07934C; }  /* 0C079348 bf/s */
L_0C07934C: BLKS(0x0C07934Cu);
	{ W32(r10, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C079180u, 3); goto L_0C079180; }  /* 0C07934C bra */
L_0C079350: BLKS(0x0C079350u);
	r7 = 0xA9u; UPD(0x0C079352u, 1);  /* 0C079350 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C079352 mov Rm,Rn */
	IF(0x0C079354u); r9 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C079356u, 2);  /* 0C079354 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C079356 add #imm,Rn */
	r8 = 0xC06CC20u; UPD(0x0C07935Au, 2);  /* 0C079358 mov.l @(disp,pc),Rn */
	r7 = r9 & 0xFF;  /* 0C07935A extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C07935Eu, 2);  /* 0C07935C mov.l Rm,@Rn */
	r4 = 0x3u;  /* 0C07935E mov #imm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C079362u, 2);  /* 0C079360 mov.l Rm,@(disp,Rn) */
	r5 = R32(r10 + 0x24u); UPD(0x0C079364u, 1);  /* 0C079362 mov.l @(disp,Rm),Rn */
	IF(0x0C079364u); { u32 t_ = r8; PR = 0x0C079368u; r6 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C079368u); }  /* 0C079364 jsr @Rn */
L_0C079368: BLKS(0x0C079368u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C079340u, 3); goto L_0C079340; }  /* 0C079368 bra */
}

void f_0C079390(sh3_t *c)
{
	LOCALS;
L_0C079390: BLKS(0x0C079390u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C079392u, 1);  /* 0C079390 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C079392 exts.w Rm,Rn */
	r0 = 0xB4u; UPD(0x0C079396u, 2);  /* 0C079394 mov.w @(disp,pc),Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C079398u, 1);  /* 0C079396 mov.l Rm,@-Rn */
	IF(0x0C079398u); MACL = r4 * r0;  /* 0C079398 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07939Cu, 3);  /* 0C07939A mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C07939Eu, 1);  /* 0C07939C mov.l @(disp,pc),Rn */
	IF(0x0C07939Eu); r8 = MACL;  /* 0C07939E sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0793A2u, 2);  /* 0C0793A0 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C0793A2 add Rm,Rn */
	r9 = 0x9Fu; UPD(0x0C0793A6u, 2);  /* 0C0793A4 mov.w @(disp,pc),Rn */
	IF(0x0C0793A6u); r15 -= 4; W32(r15, PR); UPD(0x0C0793A8u, 1);  /* 0C0793A6 sts.l pr,@-Rn */
	r9 += r8;  /* 0C0793A8 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C0793ACu, 2);  /* 0C0793AA mov.b @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C0793AC extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C0793AE cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C079420u, 5); goto L_0C079420; } goto L_0C0793B4; }  /* 0C0793B0 bt/s */
L_0C0793B4: BLKS(0x0C0793B4u);
	r10 = 0x1u;  /* 0C0793B4 mov #imm,Rn */
	T = (s32)r0 > (s32)r10;  /* 0C0793B6 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C079400u, 6); goto L_0C079400; } goto L_0C0793BC; }  /* 0C0793B8 bt/s */
L_0C0793BC: BLKS(0x0C0793BCu);
	T = (r0 & r0) == 0;  /* 0C0793BC tst Rm,Rn */
	if (T) { UPD(0x0C0793D0u, 5); goto L_0C0793D0; }  /* 0C0793BE bt */
L_0C0793C0: BLKS(0x0C0793C0u);
	r15 = r14;  /* 0C0793C0 mov Rm,Rn */
	IF(0x0C0793C2u); PR = R32(r15); r15 += 4; UPD(0x0C0793C4u, 2);  /* 0C0793C2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0793C6u, 1);  /* 0C0793C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0793C8u, 1);  /* 0C0793C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0793CAu, 1);  /* 0C0793C8 mov.l @Rm+,Rn */
	IF(0x0C0793CAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0793CA rts */
L_0C0793D0: BLKS(0x0C0793D0u);
	r0 = 0xC0A1700u; UPD(0x0C0793D2u, 1);  /* 0C0793D0 mov.l @(disp,pc),Rn */
	IF(0x0C0793D2u); { u32 t_ = r0; PR = 0x0C0793D6u; IF(0x0C0793D4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C0793D6u); }  /* 0C0793D2 jsr @Rn */
L_0C0793D6: BLKS(0x0C0793D6u);
	r1 = R32(r8); UPD(0x0C0793D8u, 1);  /* 0C0793D6 mov.l @Rm,Rn */
	r3 = 0x100u; UPD(0x0C0793DAu, 1);  /* 0C0793D8 mov.w @(disp,pc),Rn */
	T = (r1 & r3) == 0;  /* 0C0793DA tst Rm,Rn */
	if (T) { UPD(0x0C0793C0u, 4); goto L_0C0793C0; }  /* 0C0793DC bt */
L_0C0793DE: BLKS(0x0C0793DEu);
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C0793E0u, 1);  /* 0C0793DE mov.b @Rm,Rn */
	r4 = 0x6Du;  /* 0C0793E0 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0793E4u, 2);  /* 0C0793E2 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0793E4 add #imm,Rn */
	IF(0x0C0793E6u); W16(r0 + r8, r10); UPD(0x0C0793E8u, 2);  /* 0C0793E6 mov.w Rm,@(r0,Rn) */
	W8(r9, r2); UPD(0x0C0793EAu, 1);  /* 0C0793E8 mov.b Rm,@Rn */
L_0C0793EA: BLKS(0x0C0793EAu);
	r5 = 0xC0AFC10u; UPD(0x0C0793ECu, 1);  /* 0C0793EA mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0793EC mov Rm,Rn */
	IF(0x0C0793EEu); PR = R32(r15); r15 += 4; UPD(0x0C0793F0u, 2);  /* 0C0793EE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0793F2u, 1);  /* 0C0793F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0793F4u, 1);  /* 0C0793F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0793F6u, 1);  /* 0C0793F4 mov.l @Rm+,Rn */
	IF(0x0C0793F6u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFC10u: TAIL(f_0C0AFC10); default: JUMPD(tv_); } }  /* 0C0793F6 jmp @Rn */
L_0C079400: BLKS(0x0C079400u);
	if (!T) { UPD(0x0C0793C0u, 3); goto L_0C0793C0; }  /* 0C079400 bf */
L_0C079402: BLKS(0x0C079402u);
	r10 = 0xC0A1700u; UPD(0x0C079404u, 1);  /* 0C079402 mov.l @(disp,pc),Rn */
	IF(0x0C079404u); { u32 t_ = r10; PR = 0x0C079408u; IF(0x0C079406u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C079408u); }  /* 0C079404 jsr @Rn */
L_0C079408: BLKS(0x0C079408u);
	r3 = R32(r8); UPD(0x0C07940Au, 1);  /* 0C079408 mov.l @Rm,Rn */
	r7 = 0x100u; UPD(0x0C07940Cu, 1);  /* 0C07940A mov.w @(disp,pc),Rn */
	T = (r3 & r7) == 0;  /* 0C07940C tst Rm,Rn */
	if (!T) { UPD(0x0C0793C0u, 4); goto L_0C0793C0; }  /* 0C07940E bf */
L_0C079410: BLKS(0x0C079410u);
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C079412u, 1);  /* 0C079410 mov.b @Rm,Rn */
	r4 = 0xFFFFFFFFu;  /* 0C079412 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C079416u, 2);  /* 0C079414 mov.w @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C079416 add #imm,Rn */
	IF(0x0C079418u); W16(r0 + r8, r4); UPD(0x0C07941Au, 2);  /* 0C079418 mov.w Rm,@(r0,Rn) */
	W8(r9, r2); UPD(0x0C07941Cu, 1);  /* 0C07941A mov.b Rm,@Rn */
	{ r4 = 0x75u; /* slot mov #imm,Rn */ UPD(0x0C0793EAu, 3); goto L_0C0793EA; }  /* 0C07941C bra */
L_0C079420: BLKS(0x0C079420u);
	r7 = 0x88u; UPD(0x0C079422u, 1);  /* 0C079420 mov.w @(disp,pc),Rn */
	r10 = 0x11u;  /* 0C079422 mov #imm,Rn */
	r7 += r8;  /* 0C079424 add Rm,Rn */
	r2 = 0x99u; UPD(0x0C079428u, 3);  /* 0C079426 mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C07942Au, 1);  /* 0C079428 mov.w @Rm,Rn */
	r2 += r8;  /* 0C07942A add Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C07942Eu, 2);  /* 0C07942C mov.l @(disp,Rm),Rn */
	IF(0x0C07942Eu); ARG0(0x46ADu); { s32 s_ = (s32)r10; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C07942E shld Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C079432u, 2);  /* 0C079430 mov.b @Rm,Rn */
	r5 -= r6;  /* 0C079432 sub Rm,Rn */
	r4 += 0x1u;  /* 0C079434 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C079436 extu.b Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C07943Au, 4);  /* 0C079438 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x20u;  /* 0C07943A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0793C0u, 4); goto L_0C0793C0; } UPD(0x0C079440u, 1); goto L_0C079440; }  /* 0C07943C bf/s */
L_0C079440: BLKS(0x0C079440u);
	r7 += 0x1u;  /* 0C079440 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r7); UPD(0x0C079444u, 2);  /* 0C079442 mov.b @Rm,Rn */
	r0 = 0x0u;  /* 0C079444 mov #imm,Rn */
	r8 += r3;  /* 0C079446 add Rm,Rn */
	W8(r2, r0); UPD(0x0C07944Au, 3);  /* 0C079448 mov.b Rm,@Rn */
	{ W8(r9, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C0793C0u, 3); goto L_0C0793C0; }  /* 0C07944A bra */
}

void f_0C079470(sh3_t *c)
{
	LOCALS;
L_0C079470: BLKS(0x0C079470u);
	r3 = 0xB4u; UPD(0x0C079472u, 1);  /* 0C079470 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C079472 exts.w Rm,Rn */
	IF(0x0C079474u); MACL = r4 * r3;  /* 0C079474 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C079478u, 4);  /* 0C079476 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07947Au, 1);  /* 0C079478 mov.l Rm,@-Rn */
	IF(0x0C07947Au); r2 = MACL;  /* 0C07947A sts macl,Rn */
	r0 += r2;  /* 0C07947C add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C079480u, 3);  /* 0C07947E mov.l @(disp,Rm),Rn */
	r0 = 0x3u;  /* 0C079480 mov #imm,Rn */
	T = r2 > r0;  /* 0C079482 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C079510u, 5); goto L_0C079510; } goto L_0C079488; }  /* 0C079484 bt/s */
L_0C079488: BLKS(0x0C079488u);
	r0 = 0xC079490u;  /* 0C079488 mova @(disp,pc),r0 */
	IF(0x0C07948Au); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07948Cu, 3);  /* 0C07948A mov.b @(r0,Rm),Rn */
	IF(0x0C07948Cu); { u32 tv_ = (r5 + 0x0C079490u); u32 t_ = PHYS(tv_); IF(0x0C07948Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0794A0u: goto L_0C0794A0; case 0x0C0794D0u: goto L_0C0794D0; case 0x0C0794F0u: goto L_0C0794F0; default: JUMPD(tv_); } }  /* 0C07948C braf Rn */
L_0C0794A0: BLKS(0x0C0794A0u);
	r7 = 0xB4u; UPD(0x0C0794A2u, 1);  /* 0C0794A0 mov.w @(disp,pc),Rn */
	IF(0x0C0794A2u); MACL = r4 * r7;  /* 0C0794A2 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0794A6u, 3);  /* 0C0794A4 mov.l @(disp,pc),Rn */
	IF(0x0C0794A6u); r0 = MACL;  /* 0C0794A6 sts macl,Rn */
	IF(0x0C0794A8u); r0 = R32(r0 + r6); UPD(0x0C0794AAu, 2);  /* 0C0794A8 mov.l @(r0,Rm),Rn */
	IF(0x0C0794AAu); r0 >>= 16;  /* 0C0794AA shlr16 Rn */
	IF(0x0C0794ACu); r0 >>= 8;  /* 0C0794AC shlr8 Rn */
	IF(0x0C0794AEu); r0 >>= 2;  /* 0C0794AE shlr2 Rn */
	r0 &= 0x1u;  /* 0C0794B0 and #imm,r0 */
	r5 = 0xC18C388u; UPD(0x0C0794B4u, 5);  /* 0C0794B2 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C0794B4 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0794C0u, 4); goto L_0C0794C0; }  /* 0C0794B6 bt */
L_0C0794B8: BLKS(0x0C0794B8u);
	r6 = 0xC0A17E0u; UPD(0x0C0794BAu, 1);  /* 0C0794B8 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0794BA mov Rm,Rn */
	IF(0x0C0794BCu); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A17E0u: TAIL(f_0C0A17E0); default: JUMPD(tv_); } }  /* 0C0794BC jmp @Rn */
L_0C0794C0: BLKS(0x0C0794C0u);
	r5 = 0xC18C3D0u; UPD(0x0C0794C2u, 1);  /* 0C0794C0 mov.l @(disp,pc),Rn */
	{ IF(0x0C0794C4u); ; /* slot nop */ UPD(0x0C0794B8u, 3); goto L_0C0794B8; }  /* 0C0794C2 bra */
L_0C0794D0: BLKS(0x0C0794D0u);
	r0 = 0xB4u; UPD(0x0C0794D2u, 1);  /* 0C0794D0 mov.w @(disp,pc),Rn */
	IF(0x0C0794D2u); MACL = r4 * r0;  /* 0C0794D2 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0794D6u, 3);  /* 0C0794D4 mov.l @(disp,pc),Rn */
	IF(0x0C0794D6u); r0 = MACL;  /* 0C0794D6 sts macl,Rn */
	IF(0x0C0794D8u); r0 = R32(r0 + r2); UPD(0x0C0794DAu, 2);  /* 0C0794D8 mov.l @(r0,Rm),Rn */
	IF(0x0C0794DAu); r0 >>= 16;  /* 0C0794DA shlr16 Rn */
	IF(0x0C0794DCu); r0 >>= 8;  /* 0C0794DC shlr8 Rn */
	IF(0x0C0794DEu); r0 >>= 2;  /* 0C0794DE shlr2 Rn */
	r0 &= 0x1u;  /* 0C0794E0 and #imm,r0 */
	r5 = 0xC18C420u; UPD(0x0C0794E4u, 5);  /* 0C0794E2 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C0794E4 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0794B8u, 4); goto L_0C0794B8; }  /* 0C0794E6 bf */
L_0C0794E8: BLKS(0x0C0794E8u);
	r5 = 0xC18C476u; UPD(0x0C0794EAu, 1);  /* 0C0794E8 mov.l @(disp,pc),Rn */
	{ IF(0x0C0794ECu); ; /* slot nop */ UPD(0x0C0794B8u, 3); goto L_0C0794B8; }  /* 0C0794EA bra */
L_0C0794F0: BLKS(0x0C0794F0u);
	r5 = 0xB4u; UPD(0x0C0794F2u, 1);  /* 0C0794F0 mov.w @(disp,pc),Rn */
	IF(0x0C0794F2u); MACL = r4 * r5;  /* 0C0794F2 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0794F6u, 3);  /* 0C0794F4 mov.l @(disp,pc),Rn */
	IF(0x0C0794F6u); r0 = MACL;  /* 0C0794F6 sts macl,Rn */
	IF(0x0C0794F8u); r0 = R32(r0 + r3); UPD(0x0C0794FAu, 2);  /* 0C0794F8 mov.l @(r0,Rm),Rn */
	IF(0x0C0794FAu); r0 >>= 16;  /* 0C0794FA shlr16 Rn */
	IF(0x0C0794FCu); r0 >>= 8;  /* 0C0794FC shlr8 Rn */
	IF(0x0C0794FEu); r0 >>= 2;  /* 0C0794FE shlr2 Rn */
	r0 &= 0x1u;  /* 0C079500 and #imm,r0 */
	r5 = 0xC18C4D4u; UPD(0x0C079504u, 5);  /* 0C079502 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C079504 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0794B8u, 4); goto L_0C0794B8; }  /* 0C079506 bf */
L_0C079508: BLKS(0x0C079508u);
	r5 = 0xC18C52Au; UPD(0x0C07950Au, 1);  /* 0C079508 mov.l @(disp,pc),Rn */
	{ IF(0x0C07950Cu); ; /* slot nop */ UPD(0x0C0794B8u, 3); goto L_0C0794B8; }  /* 0C07950A bra */
L_0C079510: BLKS(0x0C079510u);
	r15 = r14;  /* 0C079510 mov Rm,Rn */
	IF(0x0C079512u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C079512 rts */
}

void f_0C079540(sh3_t *c)
{
	LOCALS;
L_0C079540: BLKS(0x0C079540u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C079542u, 1);  /* 0C079540 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C079544u, 1);  /* 0C079542 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C079546u, 1);  /* 0C079544 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C079548u, 1);  /* 0C079546 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07954Au, 1);  /* 0C079548 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07954Cu, 1);  /* 0C07954A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07954Eu, 1);  /* 0C07954C mov.l Rm,@-Rn */
	r13 = 0xC392D64u; UPD(0x0C079550u, 1);  /* 0C07954E mov.l @(disp,pc),Rn */
	IF(0x0C079550u); r15 -= 4; W32(r15, PR); UPD(0x0C079552u, 1);  /* 0C079550 sts.l pr,@-Rn */
	r3 = R32(r13); UPD(0x0C079554u, 1);  /* 0C079552 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C079554 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r4 = v_; } UPD(0x0C079558u, 2);  /* 0C079556 mov.w @Rm+,Rn */
	r14 = r15;  /* 0C079558 mov Rm,Rn */
	r1 = 0xC286274u; UPD(0x0C07955Cu, 2);  /* 0C07955A mov.l @(disp,pc),Rn */
	r9 = 0xC22C874u; UPD(0x0C07955Eu, 1);  /* 0C07955C mov.l @(disp,pc),Rn */
	r8 = 0xC057A50u; UPD(0x0C079560u, 1);  /* 0C07955E mov.l @(disp,pc),Rn */
	W16(r1, r4); UPD(0x0C079562u, 1);  /* 0C079560 mov.w Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C079564u, 1);  /* 0C079562 mov.w @Rm,Rn */
	W32(r13, r3); UPD(0x0C079566u, 1);  /* 0C079564 mov.l Rm,@Rn */
	r5 = 0x8000u; UPD(0x0C079568u, 1);  /* 0C079566 mov.l @(disp,pc),Rn */
	IF(0x0C079568u); { u32 t_ = r8; PR = 0x0C07956Cu; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C07956Cu); }  /* 0C079568 jsr @Rn */
L_0C07956C: BLKS(0x0C07956Cu);
	T = (r0 & r0) == 0;  /* 0C07956C tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C079590u, 4); goto L_0C079590; } UPD(0x0C079572u, 1); goto L_0C079572; }  /* 0C07956E bf/s */
L_0C079572: BLKS(0x0C079572u);
	r14 += 0x8u;  /* 0C079572 add #imm,Rn */
	r15 = r14;  /* 0C079574 mov Rm,Rn */
	IF(0x0C079576u); PR = R32(r15); r15 += 4; UPD(0x0C079578u, 3);  /* 0C079576 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07957Au, 1);  /* 0C079578 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07957Cu, 1);  /* 0C07957A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07957Eu, 1);  /* 0C07957C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C079580u, 1);  /* 0C07957E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C079582u, 1);  /* 0C079580 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C079584u, 1);  /* 0C079582 mov.l @Rm+,Rn */
	IF(0x0C079584u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C079584 rts */
L_0C079590: BLKS(0x0C079590u);
	r8 = 0xC0606C0u; UPD(0x0C079592u, 1);  /* 0C079590 mov.l @(disp,pc),Rn */
	IF(0x0C079592u); { u32 t_ = r8; PR = 0x0C079596u; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C079596u); }  /* 0C079592 jsr @Rn */
L_0C079596: BLKS(0x0C079596u);
	T = (r0 & r0) == 0;  /* 0C079596 tst Rm,Rn */
	if (!T) { UPD(0x0C0795B0u, 4); goto L_0C0795B0; }  /* 0C079598 bf */
L_0C07959A: BLKS(0x0C07959Au);
	r2 = R32(r13); UPD(0x0C07959Cu, 1);  /* 0C07959A mov.l @Rm,Rn */
	r2 += 0x2u;  /* 0C07959C add #imm,Rn */
	W32(r13, r2); UPD(0x0C0795A0u, 2);  /* 0C07959E mov.l Rm,@Rn */
L_0C0795A0: BLKS(0x0C0795A0u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C079572u, 3); goto L_0C079572; }  /* 0C0795A0 bra */
L_0C0795B0: BLKS(0x0C0795B0u);
	r12 = 0xC2755BCu; UPD(0x0C0795B2u, 1);  /* 0C0795B0 mov.l @(disp,pc),Rn */
	r2 = 0x3u;  /* 0C0795B2 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r11 = v_; } UPD(0x0C0795B6u, 2);  /* 0C0795B4 mov.w @Rm+,Rn */
	r8 = 0xB4u; UPD(0x0C0795B8u, 1);  /* 0C0795B6 mov.w @(disp,pc),Rn */
	IF(0x0C0795B8u); MACL = r11 * r8;  /* 0C0795B8 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0795BCu, 3);  /* 0C0795BA mov.l @(disp,pc),Rn */
	r5 = 0xC286274u; UPD(0x0C0795BEu, 1);  /* 0C0795BC mov.l @(disp,pc),Rn */
	IF(0x0C0795BEu); r8 = MACL;  /* 0C0795BE sts macl,Rn */
	r8 += r0;  /* 0C0795C0 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r5); UPD(0x0C0795C4u, 3);  /* 0C0795C2 mov.w @Rm,Rn */
	r4 = 0xC286509u; UPD(0x0C0795C6u, 1);  /* 0C0795C4 mov.l @(disp,pc),Rn */
	r0 &= 0x3u;  /* 0C0795C6 and #imm,r0 */
	r10 = (u32)(s32)(s8)R8(r4); UPD(0x0C0795CAu, 2);  /* 0C0795C8 mov.b @Rm,Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r2;  /* 0C0795CA mulu.w Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C0795CEu, 3);  /* 0C0795CC mov.w @Rm,Rn */
	r4 = 0x0u;  /* 0C0795CE mov #imm,Rn */
	r0 = 0xC0A02D0u; UPD(0x0C0795D2u, 2);  /* 0C0795D0 mov.l @(disp,pc),Rn */
	IF(0x0C0795D2u); r1 = MACL;  /* 0C0795D2 sts macl,Rn */
	r3 = 0xC1000010u; UPD(0x0C0795D6u, 2);  /* 0C0795D4 mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFFFF;  /* 0C0795D6 extu.w Rm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C0795DAu, 2);  /* 0C0795D8 mov.l Rm,@(disp,Rn) */
	r9 = 0x4Cu;  /* 0C0795DA mov #imm,Rn */
	W32(r8 + 0x8u, r1); UPD(0x0C0795DEu, 2);  /* 0C0795DC mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C0795DE mov Rm,Rn */
	W32(r8, r3); UPD(0x0C0795E2u, 2);  /* 0C0795E0 mov.l Rm,@Rn */
	IF(0x0C0795E2u); { u32 t_ = r0; PR = 0x0C0795E6u; W32(r8 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0795E6u); }  /* 0C0795E2 jsr @Rn */
L_0C0795E6: BLKS(0x0C0795E6u);
	IF(0x0C0795E6u); MACL = r10 * r9;  /* 0C0795E6 mul.l Rm,Rn */
	r7 = 0xC26CAE0u; UPD(0x0C0795EAu, 3);  /* 0C0795E8 mov.l @(disp,pc),Rn */
	r2 = 0xC392D5Eu; UPD(0x0C0795ECu, 1);  /* 0C0795EA mov.l @(disp,pc),Rn */
	IF(0x0C0795ECu); r9 = MACL;  /* 0C0795EC sts macl,Rn */
	r3 = 0xC21F5E2u; UPD(0x0C0795F0u, 2);  /* 0C0795EE mov.l @(disp,pc),Rn */
	r9 += r7;  /* 0C0795F0 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C0795F4u, 2);  /* 0C0795F2 mov.w @Rm,Rn */
	r6 = R32(r9 + 0x8u); UPD(0x0C0795F6u, 1);  /* 0C0795F4 mov.l @(disp,Rm),Rn */
	IF(0x0C0795F6u); r4 <<= 16;  /* 0C0795F6 shll16 Rn */
	r5 = (u32)(s32)(s16)R16(r3); UPD(0x0C0795FAu, 2);  /* 0C0795F8 mov.w @Rm,Rn */
	r9 += 0x42u;  /* 0C0795FA add #imm,Rn */
	r0 = 0xC0A1530u; UPD(0x0C0795FEu, 2);  /* 0C0795FC mov.l @(disp,pc),Rn */
	IF(0x0C0795FEu); r5 <<= 16;  /* 0C0795FE shll16 Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C079602u, 2);  /* 0C079600 mov.l Rm,@(disp,Rn) */
	r5 -= r6;  /* 0C079602 sub Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C079606u, 2);  /* 0C079604 mov.l Rm,@(disp,Rn) */
	IF(0x0C079606u); { u32 t_ = r0; PR = 0x0C07960Au; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C07960Au); }  /* 0C079606 jsr @Rn */
L_0C07960A: BLKS(0x0C07960Au);
	r0 = 0xB0u; UPD(0x0C07960Cu, 1);  /* 0C07960A mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C07960C mov Rm,Rn */
	IF(0x0C07960Eu); W8(r0 + r8, r10); UPD(0x0C079610u, 2);  /* 0C07960E mov.b Rm,@(r0,Rn) */
	r10 = 0xA8u; UPD(0x0C079612u, 1);  /* 0C079610 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFDu;  /* 0C079612 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C079616u, 2);  /* 0C079614 mov.b @Rm,Rn */
	r10 += r8;  /* 0C079616 add Rm,Rn */
	r3 += 0x2u;  /* 0C079618 add #imm,Rn */
	r10 += 0x1u;  /* 0C07961A add #imm,Rn */
	IF(0x0C07961Cu); W8(r0 + r8, r3); UPD(0x0C07961Eu, 4);  /* 0C07961C mov.b Rm,@(r0,Rn) */
	r9 += 0xFFFFFFBEu;  /* 0C07961E add #imm,Rn */
	W8(r10, r3); UPD(0x0C079622u, 2);  /* 0C079620 mov.b Rm,@Rn */
	r8 += 0x50u;  /* 0C079622 add #imm,Rn */
	r7 = R32(r9 + 0x38u); UPD(0x0C079626u, 2);  /* 0C079624 mov.l @(disp,Rm),Rn */
	r9 = R32(r13); UPD(0x0C079628u, 1);  /* 0C079626 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r9); r9 += 2; r0 = v_; } UPD(0x0C07962Au, 1);  /* 0C079628 mov.w @Rm+,Rn */
	r6 = 0xC0A1780u; UPD(0x0C07962Cu, 1);  /* 0C07962A mov.l @(disp,pc),Rn */
	IF(0x0C07962Cu); r0 <<= 2;  /* 0C07962C shll2 Rn */
	IF(0x0C07962Eu); r5 = R32(r0 + r7); UPD(0x0C079630u, 2);  /* 0C07962E mov.l @(r0,Rm),Rn */
	IF(0x0C079630u); { u32 t_ = r6; PR = 0x0C079634u; W32(r13, r9); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C079634u); }  /* 0C079630 jsr @Rn */
L_0C079634: BLKS(0x0C079634u);
	r5 = 0x0u;  /* 0C079634 mov #imm,Rn */
	W32(r8, r5); UPD(0x0C079638u, 2);  /* 0C079636 mov.l Rm,@Rn */
	r13 = 0x0u;  /* 0C079638 mov #imm,Rn */
	r8 += 0xFFFFFFB0u;  /* 0C07963A add #imm,Rn */
	W32(r14, r5); UPD(0x0C07963Eu, 3);  /* 0C07963C mov.l Rm,@Rn */
	r11 = r8;  /* 0C07963E mov Rm,Rn */
	W32(r14 + 0x4u, r10); UPD(0x0C079642u, 2);  /* 0C079640 mov.l Rm,@(disp,Rn) */
	IF(0x0C079642u); ;  /* 0C079642 nop */
	UPD(0x0C079644u, 1);
L_0C079644: BLKS(0x0C079644u);
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C079646u, 1);  /* 0C079644 mov.w @Rm+,Rn */
	r8 = 0xB4u; UPD(0x0C079648u, 1);  /* 0C079646 mov.w @(disp,pc),Rn */
	IF(0x0C079648u); MACL = r10 * r8;  /* 0C079648 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C07964Cu, 3);  /* 0C07964A mov.l @(disp,pc),Rn */
	IF(0x0C07964Cu); r8 = MACL;  /* 0C07964C sts macl,Rn */
	r8 += r9;  /* 0C07964E add Rm,Rn */
	r9 = 0xC18C588u; UPD(0x0C079652u, 3);  /* 0C079650 mov.l @(disp,pc),Rn */
	r8 += 0x7Cu;  /* 0C079652 add #imm,Rn */
	r9 += r13;  /* 0C079654 add Rm,Rn */
	r9 += 0x4u;  /* 0C079656 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r9); UPD(0x0C07965Au, 4);  /* 0C079658 mov.w @Rm,Rn */
	r13 += 0x14u;  /* 0C07965A add #imm,Rn */
	r0 = 0xC2755BCu; UPD(0x0C07965Eu, 2);  /* 0C07965C mov.l @(disp,pc),Rn */
	r5 += r5;  /* 0C07965E add Rm,Rn */
	IF(0x0C079660u); r4 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C079662u, 2);  /* 0C079660 mov.w @(r0,Rm),Rn */
	r9 += 0xFFFFFFFCu;  /* 0C079662 add #imm,Rn */
	W16(r8, r4); UPD(0x0C079666u, 2);  /* 0C079664 mov.w Rm,@Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C079668u, 1);  /* 0C079666 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C079668 add #imm,Rn */
	r6 = R32(r9); UPD(0x0C07966Cu, 2);  /* 0C07966A mov.l @Rm,Rn */
	r4 = 0x0u;  /* 0C07966C mov #imm,Rn */
	r7 = 0x81000000u; UPD(0x0C079670u, 2);  /* 0C07966E mov.l @(disp,pc),Rn */
	W16(r8, r3); UPD(0x0C079672u, 1);  /* 0C079670 mov.w Rm,@Rn */
	r6 |= r7;  /* 0C079672 or Rm,Rn */
	r2 = R32(r11 + 0x4u); UPD(0x0C079676u, 2);  /* 0C079674 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFF82u;  /* 0C079676 add #imm,Rn */
	W32(r8, r6); UPD(0x0C07967Au, 2);  /* 0C079678 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C07967Cu, 1);  /* 0C07967A mov.l Rm,@(disp,Rn) */
	r1 = R32(r9 + 0x8u); UPD(0x0C07967Eu, 1);  /* 0C07967C mov.l @(disp,Rm),Rn */
	r5 = R32(r11 + 0x8u); UPD(0x0C079680u, 1);  /* 0C07967E mov.l @(disp,Rm),Rn */
	r3 = 0xC0A02D0u; UPD(0x0C079682u, 1);  /* 0C079680 mov.l @(disp,pc),Rn */
	r5 += r1;  /* 0C079682 add Rm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C079686u, 2);  /* 0C079684 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r5); UPD(0x0C079688u, 1);  /* 0C079686 mov.l Rm,@(disp,Rn) */
	IF(0x0C079688u); { u32 t_ = r3; PR = 0x0C07968Cu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07968Cu); }  /* 0C079688 jsr @Rn */
L_0C07968C: BLKS(0x0C07968Cu);
	r0 = 0xC0A1530u; UPD(0x0C07968Eu, 1);  /* 0C07968C mov.l @(disp,pc),Rn */
	IF(0x0C07968Eu); { u32 t_ = r0; PR = 0x0C079692u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C079692u); }  /* 0C07968E jsr @Rn */
L_0C079692: BLKS(0x0C079692u);
	r7 = R32(r11 + 0x24u); UPD(0x0C079694u, 1);  /* 0C079692 mov.l @(disp,Rm),Rn */
	r5 = 0x0u;  /* 0C079694 mov #imm,Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C079698u, 2);  /* 0C079696 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C07969Au, 1);  /* 0C079698 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r6); UPD(0x0C07969Cu, 1);  /* 0C07969A mov.l Rm,@(disp,Rn) */
	r0 = 0xB0u; UPD(0x0C07969Eu, 1);  /* 0C07969C mov.w @(disp,pc),Rn */
	r2 = R32(r9 + 0xCu); UPD(0x0C0796A0u, 1);  /* 0C07969E mov.l @(disp,Rm),Rn */
	IF(0x0C0796A0u); r3 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0796A2u, 1);  /* 0C0796A0 mov.b @(r0,Rm),Rn */
	r9 += 0x10u;  /* 0C0796A2 add #imm,Rn */
	IF(0x0C0796A4u); W8(r0 + r8, r3); UPD(0x0C0796A6u, 2);  /* 0C0796A4 mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C0796A8u, 1);  /* 0C0796A6 mov.w @(disp,pc),Rn */
	r10 = R32(r14 + 0x4u); UPD(0x0C0796AAu, 1);  /* 0C0796A8 mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C0796AA add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C0796AEu, 2);  /* 0C0796AC mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0796AE add #imm,Rn */
	W8(r0, r4); UPD(0x0C0796B2u, 2);  /* 0C0796B0 mov.b Rm,@Rn */
	r10 = 0x1u;  /* 0C0796B2 mov #imm,Rn */
	W32(r8 + 0x2Cu, r2); UPD(0x0C0796B6u, 2);  /* 0C0796B4 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r5); UPD(0x0C0796B8u, 1);  /* 0C0796B6 mov.l Rm,@(disp,Rn) */
	r7 = 0xACu; UPD(0x0C0796BAu, 1);  /* 0C0796B8 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C0796BCu, 1);  /* 0C0796BA mov.b @Rm,Rn */
	r8 += r7;  /* 0C0796BC add Rm,Rn */
	r8 += 0x3u;  /* 0C0796BE add #imm,Rn */
	r7 += r11;  /* 0C0796C0 add Rm,Rn */
	W8(r8, r1); UPD(0x0C0796C4u, 4);  /* 0C0796C2 mov.b Rm,@Rn */
	r7 += 0x1u;  /* 0C0796C4 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0796C8u, 2);  /* 0C0796C6 mov.b @Rm,Rn */
	r8 += 0xFFFFFFFEu;  /* 0C0796C8 add #imm,Rn */
	W8(r8, r6); UPD(0x0C0796CCu, 2);  /* 0C0796CA mov.b Rm,@Rn */
	r5 = R32(r14); UPD(0x0C0796CEu, 1);  /* 0C0796CC mov.l @Rm,Rn */
	r5 += 0x1u;  /* 0C0796CE add #imm,Rn */
	r2 = (u32)(s32)(s16)r5;  /* 0C0796D0 exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C0796D4u, 3);  /* 0C0796D2 mov.l Rm,@Rn */
	r9 = R32(r14); UPD(0x0C0796D6u, 1);  /* 0C0796D4 mov.l @Rm,Rn */
	T = (s32)r9 > (s32)r10;  /* 0C0796D6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C079644u, 4); goto L_0C079644; }  /* 0C0796D8 bf */
L_0C0796DA: BLKS(0x0C0796DAu);
	{ IF(0x0C0796DCu); ; /* slot nop */ UPD(0x0C0795A0u, 3); goto L_0C0795A0; }  /* 0C0796DA bra */
}

void f_0C079730(sh3_t *c)
{
	LOCALS;
L_0C079730: BLKS(0x0C079730u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C079732u, 1);  /* 0C079730 mov.l Rm,@-Rn */
	r3 = 0xBu;  /* 0C079732 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C079736u, 2);  /* 0C079734 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C079738u, 1);  /* 0C079736 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07973Au, 1);  /* 0C079738 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C07973Cu, 1);  /* 0C07973A mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07973C exts.w Rm,Rn */
	IF(0x0C07973Eu); MACL = r11 * r0;  /* 0C07973E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C079742u, 4);  /* 0C079740 mov.l Rm,@-Rn */
	r2 = 0xC26CD40u; UPD(0x0C079744u, 1);  /* 0C079742 mov.l @(disp,pc),Rn */
	IF(0x0C079744u); r0 = MACL;  /* 0C079744 sts macl,Rn */
	IF(0x0C079746u); r15 -= 4; W32(r15, PR); UPD(0x0C079748u, 2);  /* 0C079746 sts.l pr,@-Rn */
	r0 += r2;  /* 0C079748 add Rm,Rn */
	r1 = R32(r0 + 0x8u); UPD(0x0C07974Cu, 2);  /* 0C07974A mov.l @(disp,Rm),Rn */
	T = r1 > r3;  /* 0C07974C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07979Au, 4); goto L_0C07979A; } goto L_0C079752; }  /* 0C07974E bt/s */
L_0C079752: BLKS(0x0C079752u);
	r8 = R32(r0 + 0x1Cu); UPD(0x0C079754u, 2);  /* 0C079752 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r3 = v_; } UPD(0x0C079756u, 1);  /* 0C079754 mov.l @Rm+,Rn */
	T = (r3 & r3) == 0;  /* 0C079756 tst Rm,Rn */
	if (T) { UPD(0x0C07978Eu, 4); goto L_0C07978E; }  /* 0C079758 bt */
L_0C07975A: BLKS(0x0C07975Au);
	r9 = r0;  /* 0C07975A mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C07975Eu, 2);  /* 0C07975C mov.w @(disp,pc),Rn */
	r10 += r0;  /* 0C07975E add Rm,Rn */
	UPD(0x0C079760u, 1);
L_0C079760: BLKS(0x0C079760u);
	r8 += 0x4u;  /* 0C079760 add #imm,Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C079764u, 2);  /* 0C079762 mov.l @Rm+,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C079764 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C079768u, 2);  /* 0C079766 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C07976Au, 1);  /* 0C079768 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C07976A add Rm,Rn */
	IF(0x0C07976Cu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07976Eu, 2);  /* 0C07976C mov.b @(r0,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r4 = v_; } UPD(0x0C079770u, 1);  /* 0C07976E mov.l @Rm+,Rn */
	r0 = r3 & 0xFF;  /* 0C079770 extu.b Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C079774u, 2);  /* 0C079772 mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C079776u, 1);  /* 0C079774 mov.l Rm,@Rn */
	r7 += r4;  /* 0C079776 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C07977Au, 2);  /* 0C079778 mov.b @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C07977A extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07977Eu, 2);  /* 0C07977C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C079780u, 1);  /* 0C07977E mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C079780 mov #imm,Rn */
	IF(0x0C079782u); { u32 t_ = r0; PR = 0x0C079786u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C079786u); }  /* 0C079782 jsr @Rn */
L_0C079786: BLKS(0x0C079786u);
	{ u32 v_ = R32(r8); r8 += 4; r4 = v_; } UPD(0x0C079788u, 1);  /* 0C079786 mov.l @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C079788 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C079760u, 4); goto L_0C079760; } UPD(0x0C07978Eu, 1); goto L_0C07978E; }  /* 0C07978A bf/s */
L_0C07978E: BLKS(0x0C07978Eu);
	r9 = 0xB4u; UPD(0x0C079790u, 1);  /* 0C07978E mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C079790 mov #imm,Rn */
	IF(0x0C079792u); MACL = r11 * r9;  /* 0C079792 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C079796u, 4);  /* 0C079794 mov.l @(disp,pc),Rn */
	IF(0x0C079796u); r0 = MACL;  /* 0C079796 sts macl,Rn */
	IF(0x0C079798u); W32(r0 + r6, r8); UPD(0x0C07979Au, 2);  /* 0C079798 mov.l Rm,@(r0,Rn) */
L_0C07979A: BLKS(0x0C07979Au);
	r15 = r14;  /* 0C07979A mov Rm,Rn */
	IF(0x0C07979Cu); PR = R32(r15); r15 += 4; UPD(0x0C07979Eu, 2);  /* 0C07979C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0797A0u, 1);  /* 0C07979E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0797A2u, 1);  /* 0C0797A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0797A4u, 1);  /* 0C0797A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0797A6u, 1);  /* 0C0797A4 mov.l @Rm+,Rn */
	IF(0x0C0797A6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0797A6 rts */
}

void f_0C0797C0(sh3_t *c)
{
	LOCALS;
	goto L_0C0797C0;
L_0C079730: BLKS(0x0C079730u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C079732u, 1);  /* 0C079730 mov.l Rm,@-Rn */
	r3 = 0xBu;  /* 0C079732 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C079736u, 2);  /* 0C079734 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C079738u, 1);  /* 0C079736 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07973Au, 1);  /* 0C079738 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C07973Cu, 1);  /* 0C07973A mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07973C exts.w Rm,Rn */
	IF(0x0C07973Eu); MACL = r11 * r0;  /* 0C07973E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C079742u, 4);  /* 0C079740 mov.l Rm,@-Rn */
	r2 = 0xC26CD40u; UPD(0x0C079744u, 1);  /* 0C079742 mov.l @(disp,pc),Rn */
	IF(0x0C079744u); r0 = MACL;  /* 0C079744 sts macl,Rn */
	IF(0x0C079746u); r15 -= 4; W32(r15, PR); UPD(0x0C079748u, 2);  /* 0C079746 sts.l pr,@-Rn */
	r0 += r2;  /* 0C079748 add Rm,Rn */
	r1 = R32(r0 + 0x8u); UPD(0x0C07974Cu, 2);  /* 0C07974A mov.l @(disp,Rm),Rn */
	T = r1 > r3;  /* 0C07974C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07979Au, 4); goto L_0C07979A; } goto L_0C079752; }  /* 0C07974E bt/s */
L_0C079752: BLKS(0x0C079752u);
	r8 = R32(r0 + 0x1Cu); UPD(0x0C079754u, 2);  /* 0C079752 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r3 = v_; } UPD(0x0C079756u, 1);  /* 0C079754 mov.l @Rm+,Rn */
	T = (r3 & r3) == 0;  /* 0C079756 tst Rm,Rn */
	if (T) { UPD(0x0C07978Eu, 4); goto L_0C07978E; }  /* 0C079758 bt */
L_0C07975A: BLKS(0x0C07975Au);
	r9 = r0;  /* 0C07975A mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C07975Eu, 2);  /* 0C07975C mov.w @(disp,pc),Rn */
	r10 += r0;  /* 0C07975E add Rm,Rn */
	UPD(0x0C079760u, 1);
L_0C079760: BLKS(0x0C079760u);
	r8 += 0x4u;  /* 0C079760 add #imm,Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C079764u, 2);  /* 0C079762 mov.l @Rm+,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C079764 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C079768u, 2);  /* 0C079766 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C07976Au, 1);  /* 0C079768 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C07976A add Rm,Rn */
	IF(0x0C07976Cu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07976Eu, 2);  /* 0C07976C mov.b @(r0,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r4 = v_; } UPD(0x0C079770u, 1);  /* 0C07976E mov.l @Rm+,Rn */
	r0 = r3 & 0xFF;  /* 0C079770 extu.b Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C079774u, 2);  /* 0C079772 mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C079776u, 1);  /* 0C079774 mov.l Rm,@Rn */
	r7 += r4;  /* 0C079776 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C07977Au, 2);  /* 0C079778 mov.b @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C07977A extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07977Eu, 2);  /* 0C07977C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C079780u, 1);  /* 0C07977E mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C079780 mov #imm,Rn */
	IF(0x0C079782u); { u32 t_ = r0; PR = 0x0C079786u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C079786u); }  /* 0C079782 jsr @Rn */
L_0C079786: BLKS(0x0C079786u);
	{ u32 v_ = R32(r8); r8 += 4; r4 = v_; } UPD(0x0C079788u, 1);  /* 0C079786 mov.l @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C079788 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C079760u, 4); goto L_0C079760; } UPD(0x0C07978Eu, 1); goto L_0C07978E; }  /* 0C07978A bf/s */
L_0C07978E: BLKS(0x0C07978Eu);
	r9 = 0xB4u; UPD(0x0C079790u, 1);  /* 0C07978E mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C079790 mov #imm,Rn */
	IF(0x0C079792u); MACL = r11 * r9;  /* 0C079792 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C079796u, 4);  /* 0C079794 mov.l @(disp,pc),Rn */
	IF(0x0C079796u); r0 = MACL;  /* 0C079796 sts macl,Rn */
	IF(0x0C079798u); W32(r0 + r6, r8); UPD(0x0C07979Au, 2);  /* 0C079798 mov.l Rm,@(r0,Rn) */
L_0C07979A: BLKS(0x0C07979Au);
	r15 = r14;  /* 0C07979A mov Rm,Rn */
	IF(0x0C07979Cu); PR = R32(r15); r15 += 4; UPD(0x0C07979Eu, 2);  /* 0C07979C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0797A0u, 1);  /* 0C07979E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0797A2u, 1);  /* 0C0797A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0797A4u, 1);  /* 0C0797A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0797A6u, 1);  /* 0C0797A4 mov.l @Rm+,Rn */
	IF(0x0C0797A6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0797A6 rts */
L_0C0797C0: BLKS(0x0C0797C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0797C2u, 1);  /* 0C0797C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0797C4u, 1);  /* 0C0797C2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0797C4 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0797C8u, 2);  /* 0C0797C6 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0797CAu, 1);  /* 0C0797C8 mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0797CCu, 1);  /* 0C0797CA mov.l Rm,@-Rn */
	IF(0x0C0797CCu); MACL = r8 * r3;  /* 0C0797CC mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0797D0u, 3);  /* 0C0797CE mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C0797D2u, 1);  /* 0C0797D0 mov.l @(disp,pc),Rn */
	IF(0x0C0797D2u); r2 = MACL;  /* 0C0797D2 sts macl,Rn */
	IF(0x0C0797D4u); r15 -= 4; W32(r15, PR); UPD(0x0C0797D6u, 2);  /* 0C0797D4 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0797D6 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0797DAu, 2);  /* 0C0797D8 mov.l @(disp,Rm),Rn */
	r0 = 0xBu;  /* 0C0797DA mov #imm,Rn */
	T = r2 > r0;  /* 0C0797DC cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C079824u, 5); goto L_0C079824; } goto L_0C0797E2; }  /* 0C0797DE bt/s */
L_0C0797E2: BLKS(0x0C0797E2u);
	r0 = 0xC0797F4u;  /* 0C0797E2 mova @(disp,pc),r0 */
	IF(0x0C0797E4u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0797E6u, 3);  /* 0C0797E4 mov.b @(r0,Rm),Rn */
	r4 = r4 & 0xFF;  /* 0C0797E6 extu.b Rm,Rn */
	IF(0x0C0797E8u); { u32 tv_ = (r4 + 0x0C0797ECu); u32 t_ = PHYS(tv_); IF(0x0C0797EAu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C079800u: goto L_0C079800; case 0x0C0798C0u: goto L_0C0798C0; default: JUMPD(tv_); } }  /* 0C0797E8 braf Rn */
L_0C079800: BLKS(0x0C079800u);
	r6 = 0xB4u; UPD(0x0C079802u, 1);  /* 0C079800 mov.w @(disp,pc),Rn */
	IF(0x0C079802u); MACL = r8 * r6;  /* 0C079802 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C079806u, 3);  /* 0C079804 mov.l @(disp,pc),Rn */
	IF(0x0C079806u); r9 = MACL;  /* 0C079806 sts macl,Rn */
	r10 = 0x9Fu; UPD(0x0C07980Au, 2);  /* 0C079808 mov.w @(disp,pc),Rn */
	r9 += r5;  /* 0C07980A add Rm,Rn */
	r10 += r9;  /* 0C07980C add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C079810u, 3);  /* 0C07980E mov.b @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C079810 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C079812 cmp/eq #imm,r0 */
	{ u32 c_ = T; r11 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C079880u, 5); goto L_0C079880; } goto L_0C079818; }  /* 0C079814 bt/s */
L_0C079818: BLKS(0x0C079818u);
	T = (s32)r0 > (s32)r11;  /* 0C079818 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C079860u, 5); goto L_0C079860; } goto L_0C07981E; }  /* 0C07981A bt/s */
L_0C07981E: BLKS(0x0C07981Eu);
	T = (r0 & r0) == 0;  /* 0C07981E tst Rm,Rn */
	if (T) { UPD(0x0C079840u, 5); goto L_0C079840; }  /* 0C079820 bt */
L_0C079822: BLKS(0x0C079822u);
	IF(0x0C079822u); ;  /* 0C079822 nop */
	UPD(0x0C079824u, 1);
L_0C079824: BLKS(0x0C079824u);
	r15 = r14;  /* 0C079824 mov Rm,Rn */
	IF(0x0C079826u); PR = R32(r15); r15 += 4; UPD(0x0C079828u, 2);  /* 0C079826 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07982Au, 1);  /* 0C079828 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07982Cu, 1);  /* 0C07982A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07982Eu, 1);  /* 0C07982C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C079830u, 1);  /* 0C07982E mov.l @Rm+,Rn */
	IF(0x0C079830u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C079830 rts */
L_0C079840: BLKS(0x0C079840u);
	r4 = r8;  /* 0C079840 mov Rm,Rn */
	r8 = 0xC0A1700u; UPD(0x0C079844u, 2);  /* 0C079842 mov.l @(disp,pc),Rn */
	IF(0x0C079844u); { u32 t_ = r8; PR = 0x0C079848u; IF(0x0C079846u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C079848u); }  /* 0C079844 jsr @Rn */
L_0C079848: BLKS(0x0C079848u);
	r1 = R32(r9); UPD(0x0C07984Au, 1);  /* 0C079848 mov.l @Rm,Rn */
	r7 = 0x100u; UPD(0x0C07984Cu, 1);  /* 0C07984A mov.w @(disp,pc),Rn */
	T = (r1 & r7) == 0;  /* 0C07984C tst Rm,Rn */
	if (T) { UPD(0x0C079824u, 4); goto L_0C079824; }  /* 0C07984E bt */
L_0C079850: BLKS(0x0C079850u);
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C079852u, 1);  /* 0C079850 mov.b @Rm,Rn */
	r0 = 0x88u; UPD(0x0C079854u, 1);  /* 0C079852 mov.w @(disp,pc),Rn */
	IF(0x0C079854u); W16(r0 + r9, r11); UPD(0x0C079856u, 1);  /* 0C079854 mov.w Rm,@(r0,Rn) */
	r1 += 0x1u;  /* 0C079856 add #imm,Rn */
	UPD(0x0C079858u, 1);
L_0C079858: BLKS(0x0C079858u);
	{ W8(r10, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C079824u, 3); goto L_0C079824; }  /* 0C079858 bra */
L_0C079860: BLKS(0x0C079860u);
	if (!T) { UPD(0x0C079824u, 3); goto L_0C079824; }  /* 0C079860 bf */
L_0C079862: BLKS(0x0C079862u);
	r4 = r8;  /* 0C079862 mov Rm,Rn */
	r8 = 0xC0A1700u; UPD(0x0C079866u, 2);  /* 0C079864 mov.l @(disp,pc),Rn */
	IF(0x0C079866u); { u32 t_ = r8; PR = 0x0C07986Au; IF(0x0C079868u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C07986Au); }  /* 0C079866 jsr @Rn */
L_0C07986A: BLKS(0x0C07986Au);
	r7 = R32(r9); UPD(0x0C07986Cu, 1);  /* 0C07986A mov.l @Rm,Rn */
	r6 = 0x100u; UPD(0x0C07986Eu, 1);  /* 0C07986C mov.w @(disp,pc),Rn */
	T = (r7 & r6) == 0;  /* 0C07986E tst Rm,Rn */
	if (!T) { UPD(0x0C079824u, 4); goto L_0C079824; }  /* 0C079870 bf */
L_0C079872: BLKS(0x0C079872u);
	r11 = 0xFFFFFFFFu;  /* 0C079872 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C079876u, 2);  /* 0C079874 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C079878u, 1);  /* 0C079876 mov.b @Rm,Rn */
	IF(0x0C079878u); W16(r0 + r9, r11); UPD(0x0C07987Au, 1);  /* 0C079878 mov.w Rm,@(r0,Rn) */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C079858u, 3); goto L_0C079858; }  /* 0C07987A bra */
L_0C079880: BLKS(0x0C079880u);
	r6 = 0x88u; UPD(0x0C079882u, 1);  /* 0C079880 mov.w @(disp,pc),Rn */
	r4 = 0xFu;  /* 0C079882 mov #imm,Rn */
	r6 += r9;  /* 0C079884 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r6); UPD(0x0C079888u, 3);  /* 0C079886 mov.w @Rm,Rn */
	r11 = r9;  /* 0C079888 mov Rm,Rn */
	r2 = R32(r9 + 0x24u); UPD(0x0C07988Cu, 2);  /* 0C07988A mov.l @(disp,Rm),Rn */
	IF(0x0C07988Cu); ARG0(0x434Du); { s32 s_ = (s32)r4; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C07988C shld Rm,Rn */
	r2 += r3;  /* 0C07988E add Rm,Rn */
	W32(r9 + 0x24u, r2); UPD(0x0C079892u, 3);  /* 0C079890 mov.l Rm,@(disp,Rn) */
	r11 += 0x50u;  /* 0C079892 add #imm,Rn */
	r2 = 0x99u; UPD(0x0C079896u, 2);  /* 0C079894 mov.w @(disp,pc),Rn */
	r0 = R32(r11); UPD(0x0C079898u, 1);  /* 0C079896 mov.l @Rm,Rn */
	r2 += r9;  /* 0C079898 add Rm,Rn */
	r0 += r3;  /* 0C07989A add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C07989Eu, 3);  /* 0C07989C mov.b @Rm,Rn */
	W32(r11, r0); UPD(0x0C0798A0u, 1);  /* 0C07989E mov.l Rm,@Rn */
	r9 += 0x1u;  /* 0C0798A0 add #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C0798A2 extu.b Rm,Rn */
	T = r0 == 0x2Au;  /* 0C0798A4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C079824u, 6); goto L_0C079824; } UPD(0x0C0798AAu, 1); goto L_0C0798AA; }  /* 0C0798A6 bf/s */
L_0C0798AA: BLKS(0x0C0798AAu);
	r6 += 0x1u;  /* 0C0798AA add #imm,Rn */
	r5 = 0x0u;  /* 0C0798AC mov #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r6); UPD(0x0C0798B0u, 3);  /* 0C0798AE mov.b @Rm,Rn */
	W8(r2, r5); UPD(0x0C0798B2u, 1);  /* 0C0798B0 mov.b Rm,@Rn */
	{ r1 += r7; /* slot add Rm,Rn */ UPD(0x0C079858u, 3); goto L_0C079858; }  /* 0C0798B2 bra */
L_0C0798C0: BLKS(0x0C0798C0u);
	r10 = 0xC0A03F0u; UPD(0x0C0798C2u, 1);  /* 0C0798C0 mov.l @(disp,pc),Rn */
	IF(0x0C0798C2u); { u32 t_ = r10; PR = 0x0C0798C6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0798C6u); }  /* 0C0798C2 jsr @Rn */
L_0C0798C6: BLKS(0x0C0798C6u);
	IF(0x0C0798C6u); T = (s32)r0 >= 0;  /* 0C0798C6 cmp/pz Rn */
	if (!T) { UPD(0x0C079900u, 4); goto L_0C079900; }  /* 0C0798C8 bf */
L_0C0798CA: BLKS(0x0C0798CAu);
	r2 = 0xB4u; UPD(0x0C0798CCu, 1);  /* 0C0798CA mov.w @(disp,pc),Rn */
	IF(0x0C0798CCu); MACL = r8 * r2;  /* 0C0798CC mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C0798D0u, 3);  /* 0C0798CE mov.l @(disp,pc),Rn */
	IF(0x0C0798D0u); r9 = MACL;  /* 0C0798D0 sts macl,Rn */
	IF(0x0C0798D2u); MACL = r0 * r2;  /* 0C0798D2 mul.l Rm,Rn */
	r9 += r11;  /* 0C0798D4 add Rm,Rn */
	r9 += 0x50u;  /* 0C0798D6 add #imm,Rn */
	IF(0x0C0798D8u); r5 = MACL;  /* 0C0798D8 sts macl,Rn */
	r5 += r11;  /* 0C0798DA add Rm,Rn */
	r5 += 0x50u;  /* 0C0798DC add #imm,Rn */
	r7 = R32(r5); UPD(0x0C0798E0u, 9);  /* 0C0798DE mov.l @Rm,Rn */
	W32(r9, r7); UPD(0x0C0798E2u, 1);  /* 0C0798E0 mov.l Rm,@Rn */
	r5 += 0xFFFFFFB0u;  /* 0C0798E2 add #imm,Rn */
	r9 += 0xFFFFFFB0u;  /* 0C0798E4 add #imm,Rn */
	r3 = R32(r5 + 0x24u); UPD(0x0C0798E8u, 3);  /* 0C0798E6 mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C0798EAu, 1);  /* 0C0798E8 mov.l @(disp,Rm),Rn */
	r4 = R32(r5 + 0x28u); UPD(0x0C0798ECu, 1);  /* 0C0798EA mov.l @(disp,Rm),Rn */
	r3 += r6;  /* 0C0798EC add Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C0798F0u, 2);  /* 0C0798EE mov.l @(disp,Rm),Rn */
	r3 += r7;  /* 0C0798F0 add Rm,Rn */
	r4 += r1;  /* 0C0798F2 add Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C0798F6u, 3);  /* 0C0798F4 mov.l Rm,@(disp,Rn) */
	{ W32(r9 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C079824u, 3); goto L_0C079824; }  /* 0C0798F6 bra */
L_0C079900: BLKS(0x0C079900u);
	r0 = 0xC079730u; UPD(0x0C079902u, 1);  /* 0C079900 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C079902 mov Rm,Rn */
	r15 = r14;  /* 0C079904 mov Rm,Rn */
	IF(0x0C079906u); PR = R32(r15); r15 += 4; UPD(0x0C079908u, 3);  /* 0C079906 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07990Au, 1);  /* 0C079908 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07990Cu, 1);  /* 0C07990A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07990Eu, 1);  /* 0C07990C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C079910u, 1);  /* 0C07990E mov.l @Rm+,Rn */
	IF(0x0C079910u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C079730u: goto L_0C079730; default: JUMPD(tv_); } }  /* 0C079910 jmp @Rn */
}


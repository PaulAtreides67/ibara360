#include "recomp.h"
#include "recomp_funcs.h"

void f_0C067600(sh3_t *c)
{
	LOCALS;
L_0C067600: BLKS(0x0C067600u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C067602u, 1);  /* 0C067600 mov.l Rm,@-Rn */
	r3 = 0x30u;  /* 0C067602 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C067606u, 2);  /* 0C067604 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C067608u, 1);  /* 0C067606 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06760Au, 1);  /* 0C067608 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06760Cu, 1);  /* 0C06760A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C06760C exts.w Rm,Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C06760E exts.w Rm,Rn */
	r4 = 0x90u; UPD(0x0C067612u, 3);  /* 0C067610 mov.w @(disp,pc),Rn */
	IF(0x0C067612u); MACL = r12 * r4;  /* 0C067612 mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C067616u, 3);  /* 0C067614 mov.l Rm,@-Rn */
	IF(0x0C067616u); r8 = MACL;  /* 0C067616 sts macl,Rn */
	IF(0x0C067618u); MACL = r11 * r3;  /* 0C067618 mul.l Rm,Rn */
	r0 = 0xC27DC84u; UPD(0x0C06761Cu, 4);  /* 0C06761A mov.l @(disp,pc),Rn */
	IF(0x0C06761Cu); r2 = MACL;  /* 0C06761C sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067620u, 2);  /* 0C06761E mov.l Rm,@-Rn */
	r8 += r2;  /* 0C067620 add Rm,Rn */
	r8 += r0;  /* 0C067622 add Rm,Rn */
	IF(0x0C067624u); r15 -= 4; W32(r15, PR); UPD(0x0C067626u, 3);  /* 0C067624 sts.l pr,@-Rn */
	r9 = r8;  /* 0C067626 mov Rm,Rn */
	r9 += 0x2Au;  /* 0C067628 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C06762Cu, 3);  /* 0C06762A mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06762C add #imm,Rn */
	r10 = r0 & 0xFF;  /* 0C06762E extu.b Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C067630 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06763Au, 6); goto L_0C06763A; } goto L_0C067636; }  /* 0C067632 bt/s */
L_0C067636: BLKS(0x0C067636u);
	{ r9 = r8; /* slot mov Rm,Rn */ UPD(0x0C067850u, 4); goto L_0C067850; }  /* 0C067636 bra */
L_0C06763A: BLKS(0x0C06763Au);
	r13 = 0x280u; UPD(0x0C06763Cu, 1);  /* 0C06763A mov.w @(disp,pc),Rn */
	IF(0x0C06763Cu); MACL = r12 * r13;  /* 0C06763C mul.l Rm,Rn */
	r6 = 0xC283794u; UPD(0x0C067640u, 3);  /* 0C06763E mov.l @(disp,pc),Rn */
	IF(0x0C067640u); r7 = MACL;  /* 0C067640 sts macl,Rn */
	r0 = 0x258u; UPD(0x0C067644u, 2);  /* 0C067642 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C067644 add Rm,Rn */
	IF(0x0C067646u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C067648u, 2);  /* 0C067646 mov.b @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C067648 tst Rm,Rn */
	if (!T) { UPD(0x0C067670u, 4); goto L_0C067670; }  /* 0C06764A bf */
L_0C06764C: BLKS(0x0C06764Cu);
	r14 += 0x8u;  /* 0C06764C add #imm,Rn */
	UPD(0x0C06764Eu, 1);
L_0C06764E: BLKS(0x0C06764Eu);
	r15 = r14;  /* 0C06764E mov Rm,Rn */
	IF(0x0C067650u); PR = R32(r15); r15 += 4; UPD(0x0C067652u, 2);  /* 0C067650 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067654u, 1);  /* 0C067652 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C067656u, 1);  /* 0C067654 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C067658u, 1);  /* 0C067656 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06765Au, 1);  /* 0C067658 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06765Cu, 1);  /* 0C06765A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06765Eu, 1);  /* 0C06765C mov.l @Rm+,Rn */
	IF(0x0C06765Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06765E rts */
L_0C067670: BLKS(0x0C067670u);
	r13 = 0xC060840u; UPD(0x0C067672u, 1);  /* 0C067670 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C067672 mov Rm,Rn */
	r5 = r11;  /* 0C067674 mov Rm,Rn */
	r6 = 0x10u;  /* 0C067676 mov #imm,Rn */
	IF(0x0C067678u); { u32 t_ = r13; PR = 0x0C06767Cu; r7 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C060840, 0x0C060840u, 0x0C06767Cu); }  /* 0C067678 jsr @Rn */
L_0C06767C: BLKS(0x0C06767Cu);
	T = (r0 & r0) == 0;  /* 0C06767C tst Rm,Rn */
	if (T) { UPD(0x0C06764Cu, 4); goto L_0C06764C; }  /* 0C06767E bt */
L_0C067680: BLKS(0x0C067680u);
	r0 = 0x10u;  /* 0C067680 mov #imm,Rn */
	r8 += 0x2Bu;  /* 0C067682 add #imm,Rn */
	W8(r9, r0); UPD(0x0C067686u, 3);  /* 0C067684 mov.b Rm,@Rn */
	W8(r8, r10); UPD(0x0C067688u, 1);  /* 0C067686 mov.b Rm,@Rn */
	r4 = r12;  /* 0C067688 mov Rm,Rn */
	UPD(0x0C06768Au, 1);
L_0C06768A: BLKS(0x0C06768Au);
	r5 = r11;  /* 0C06768A mov Rm,Rn */
	r6 = 0x1u;  /* 0C06768C mov #imm,Rn */
	IF(0x0C06768Eu); { u32 t_ = r13; PR = 0x0C067692u; r7 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C060840, 0x0C060840u, 0x0C067692u); }  /* 0C06768E jsr @Rn */
L_0C067692: BLKS(0x0C067692u);
	T = (r0 & r0) == 0;  /* 0C067692 tst Rm,Rn */
	if (T) { UPD(0x0C06764Cu, 4); goto L_0C06764C; }  /* 0C067694 bt */
L_0C067696: BLKS(0x0C067696u);
	r7 = 0x30u;  /* 0C067696 mov #imm,Rn */
	r0 = 0x90u; UPD(0x0C06769Au, 2);  /* 0C067698 mov.w @(disp,pc),Rn */
	IF(0x0C06769Au); MACL = r12 * r0;  /* 0C06769A mul.l Rm,Rn */
	r5 = 0xC27DC84u; UPD(0x0C06769Eu, 3);  /* 0C06769C mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C06769E mov #imm,Rn */
	IF(0x0C0676A0u); r13 = MACL;  /* 0C0676A0 sts macl,Rn */
	W32(r14, r13); UPD(0x0C0676A4u, 3);  /* 0C0676A2 mov.l Rm,@Rn */
	IF(0x0C0676A4u); MACL = r11 * r7;  /* 0C0676A4 mul.l Rm,Rn */
	r3 = R32(r14); UPD(0x0C0676A8u, 3);  /* 0C0676A6 mov.l @Rm,Rn */
	r1 = 0x7u;  /* 0C0676A8 mov #imm,Rn */
	IF(0x0C0676AAu); r6 = MACL;  /* 0C0676AA sts macl,Rn */
	r3 += r6;  /* 0C0676AC add Rm,Rn */
	r3 += r5;  /* 0C0676AE add Rm,Rn */
	r4 = r3;  /* 0C0676B0 mov Rm,Rn */
	r4 += 0x2Au;  /* 0C0676B2 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C0676B6u, 7);  /* 0C0676B4 mov.b @Rm,Rn */
	r3 += 0x2Bu;  /* 0C0676B6 add #imm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0676B8 add #imm,Rn */
	W8(r4, r0); UPD(0x0C0676BCu, 3);  /* 0C0676BA mov.b Rm,@Rn */
	T = (r11 & r11) == 0;  /* 0C0676BC tst Rm,Rn */
	W8(r3, r2); UPD(0x0C0676C0u, 2);  /* 0C0676BE mov.b Rm,@Rn */
	r0 &= r1;  /* 0C0676C0 and Rm,Rn */
	r10 = 0xC1704FEu; UPD(0x0C0676C4u, 2);  /* 0C0676C2 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFD5u;  /* 0C0676C4 add #imm,Rn */
	r0 += r0;  /* 0C0676C6 add Rm,Rn */
	W32(r14, r3); UPD(0x0C0676CAu, 3);  /* 0C0676C8 mov.l Rm,@Rn */
	{ u32 c_ = T; IF(0x0C0676CCu); r13 = (u32)(s32)(s16)R16(r0 + r10); /* slot mov.w @(r0,Rm),Rn */ if (c_) { UPD(0x0C0676D2u, 3); goto L_0C0676D2; } UPD(0x0C0676CEu, 1); goto L_0C0676CE; }  /* 0C0676CA bt/s */
L_0C0676CE: BLKS(0x0C0676CEu);
	r8 = 0u - r13;  /* 0C0676CE neg Rm,Rn */
	r13 = (u32)(s32)(s16)r8;  /* 0C0676D0 exts.w Rm,Rn */
	UPD(0x0C0676D2u, 2);
L_0C0676D2: BLKS(0x0C0676D2u);
	r8 = 0x9C0u; UPD(0x0C0676D4u, 1);  /* 0C0676D2 mov.w @(disp,pc),Rn */
	r4 = 0x34u;  /* 0C0676D4 mov #imm,Rn */
	IF(0x0C0676D6u); MACL = r12 * r8;  /* 0C0676D6 mul.l Rm,Rn */
	r0 = 0x340u; UPD(0x0C0676DAu, 4);  /* 0C0676D8 mov.w @(disp,pc),Rn */
	IF(0x0C0676DAu); r8 = MACL;  /* 0C0676DA sts macl,Rn */
	r2 = 0xC2755BCu; UPD(0x0C0676DEu, 2);  /* 0C0676DC mov.l @(disp,pc),Rn */
	IF(0x0C0676DEu); MACL = r11 * r0;  /* 0C0676DE mul.l Rm,Rn */
	r5 = R32(r14); UPD(0x0C0676E2u, 3);  /* 0C0676E0 mov.l @Rm,Rn */
	r12 += 0x5u;  /* 0C0676E2 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r2); UPD(0x0C0676E6u, 2);  /* 0C0676E4 mov.w @Rm,Rn */
	IF(0x0C0676E6u); r6 = MACL;  /* 0C0676E6 sts macl,Rn */
	r5 += 0x24u;  /* 0C0676E8 add #imm,Rn */
	IF(0x0C0676EAu); MACL = r9 * r4;  /* 0C0676EA mul.l Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r5); UPD(0x0C0676EEu, 5);  /* 0C0676EC mov.w @Rm,Rn */
	r0 = r8;  /* 0C0676EE mov Rm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0676F2u, 2);  /* 0C0676F0 mov.l Rm,@(disp,Rn) */
	r10 += r13;  /* 0C0676F2 add Rm,Rn */
	IF(0x0C0676F4u); r7 = MACL;  /* 0C0676F4 sts macl,Rn */
	r13 = (u32)(s32)(s16)r10;  /* 0C0676F6 exts.w Rm,Rn */
	r8 += r7;  /* 0C0676F8 add Rm,Rn */
	r5 = 0xC21F8A0u; UPD(0x0C0676FCu, 5);  /* 0C0676FA mov.l @(disp,pc),Rn */
	r0 += r6;  /* 0C0676FC add Rm,Rn */
	r10 = 0xC050D70u; UPD(0x0C067700u, 2);  /* 0C0676FE mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C067700 add Rm,Rn */
	r3 = 0xC8800000u; UPD(0x0C067704u, 2);  /* 0C067702 mov.l @(disp,pc),Rn */
	r0 += r7;  /* 0C067704 add Rm,Rn */
	r8 += r5;  /* 0C067706 add Rm,Rn */
	IF(0x0C067708u); W32(r0 + r5, r3); UPD(0x0C06770Au, 3);  /* 0C067708 mov.l Rm,@(r0,Rn) */
	r4 = 0x4u;  /* 0C06770A mov #imm,Rn */
	IF(0x0C06770Cu); { u32 t_ = r10; PR = 0x0C067710u; W32(r8 + 0x4u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C067710u); }  /* 0C06770C jsr @Rn */
L_0C067710: BLKS(0x0C067710u);
	r0 += 0x20u;  /* 0C067710 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C067714u, 2);  /* 0C067712 mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C067714 mov Rm,Rn */
	r0 = r13;  /* 0C067716 mov Rm,Rn */
	r0 += 0x8u;  /* 0C067718 add #imm,Rn */
	IF(0x0C06771Au); r0 >>= 2;  /* 0C06771A shlr2 Rn */
	IF(0x0C06771Cu); r0 >>= 2;  /* 0C06771C shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C06771E and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C067722u, 7);  /* 0C067720 mov.l Rm,@(disp,Rn) */
	r8 += 0x2Cu;  /* 0C067722 add #imm,Rn */
	W16(r8, r13); UPD(0x0C067726u, 2);  /* 0C067724 mov.w Rm,@Rn */
	r11 = 0x70000u; UPD(0x0C067728u, 1);  /* 0C067726 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFD4u;  /* 0C067728 add #imm,Rn */
	W32(r8 + 0x20u, r11); UPD(0x0C06772Cu, 2);  /* 0C06772A mov.l Rm,@(disp,Rn) */
	r11 = 0xC058060u; UPD(0x0C06772Eu, 1);  /* 0C06772C mov.l @(disp,pc),Rn */
	r5 = 0xC0000u; UPD(0x0C067730u, 1);  /* 0C06772E mov.l @(disp,pc),Rn */
	IF(0x0C067730u); { u32 t_ = r11; PR = 0x0C067734u; r12 += 0xFFFFFFFBu; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C067734u); }  /* 0C067730 jsr @Rn */
L_0C067734: BLKS(0x0C067734u);
	r9 = R32(r14); UPD(0x0C067736u, 1);  /* 0C067734 mov.l @Rm,Rn */
	r10 = R32(r9 + 0x14u); UPD(0x0C067738u, 1);  /* 0C067736 mov.l @(disp,Rm),Rn */
	r9 = 0xFFFC0000u; UPD(0x0C06773Au, 1);  /* 0C067738 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C06773A add Rm,Rn */
	r10 += r9;  /* 0C06773C add Rm,Rn */
	W32(r8 + 0x10u, r10); UPD(0x0C067740u, 3);  /* 0C06773E mov.l Rm,@(disp,Rn) */
	r10 = 0xC058030u; UPD(0x0C067742u, 1);  /* 0C067740 mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C067744u, 1);  /* 0C067742 mov.l @(disp,pc),Rn */
	IF(0x0C067744u); { u32 t_ = r10; PR = 0x0C067748u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C067748u); }  /* 0C067744 jsr @Rn */
L_0C067748: BLKS(0x0C067748u);
	r1 = R32(r14); UPD(0x0C06774Au, 1);  /* 0C067748 mov.l @Rm,Rn */
	r4 = R32(r1 + 0x18u); UPD(0x0C06774Cu, 1);  /* 0C06774A mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C06774C add Rm,Rn */
	W32(r8 + 0x14u, r4); UPD(0x0C067750u, 2);  /* 0C06774E mov.l Rm,@(disp,Rn) */
	r5 = 0x70000u; UPD(0x0C067752u, 1);  /* 0C067750 mov.l @(disp,pc),Rn */
	IF(0x0C067752u); { u32 t_ = r11; PR = 0x0C067756u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C067756u); }  /* 0C067752 jsr @Rn */
L_0C067756: BLKS(0x0C067756u);
	r4 = r13;  /* 0C067756 mov Rm,Rn */
	r5 = 0x70000u; UPD(0x0C06775Au, 2);  /* 0C067758 mov.l @(disp,pc),Rn */
	IF(0x0C06775Au); { u32 t_ = r10; PR = 0x0C06775Eu; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06775Eu); }  /* 0C06775A jsr @Rn */
L_0C06775E: BLKS(0x0C06775Eu);
	r2 = 0x217FF00u; UPD(0x0C067760u, 1);  /* 0C06775E mov.l @(disp,pc),Rn */
	r4 = 0x14u;  /* 0C067760 mov #imm,Rn */
	r3 = 0x808080u; UPD(0x0C067764u, 2);  /* 0C067762 mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C067766u, 1);  /* 0C067764 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r3); UPD(0x0C067768u, 1);  /* 0C067766 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x1Cu, r0); UPD(0x0C06776Au, 1);  /* 0C067768 mov.l Rm,@(disp,Rn) */
	r13 = 0xC060350u; UPD(0x0C06776Cu, 1);  /* 0C06776A mov.l @(disp,pc),Rn */
	r8 += 0x30u;  /* 0C06776C add #imm,Rn */
	r0 = 0x0u;  /* 0C06776E mov #imm,Rn */
	IF(0x0C067770u); { u32 t_ = r13; PR = 0x0C067774u; W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 4); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C067774u); }  /* 0C067770 jsr @Rn */
L_0C067774: BLKS(0x0C067774u);
	r8 = 0xC0AFBA0u; UPD(0x0C067776u, 1);  /* 0C067774 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C067776 mov Rm,Rn */
	r13 = 0xC0AFE40u; UPD(0x0C06777Au, 2);  /* 0C067778 mov.l @(disp,pc),Rn */
	IF(0x0C06777Au); { u32 t_ = r8; PR = 0x0C06777Eu; r5 = 0x52u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C06777Eu); }  /* 0C06777A jsr @Rn */
L_0C06777E: BLKS(0x0C06777Eu);
	IF(0x0C06777Eu); { u32 t_ = r13; PR = 0x0C067782u; IF(0x0C067780u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C067782u); }  /* 0C06777E jsr @Rn */
L_0C067782: BLKS(0x0C067782u);
	r7 = R32(r14 + 0x4u); UPD(0x0C067784u, 1);  /* 0C067782 mov.l @(disp,Rm),Rn */
	r0 &= 0x1Fu;  /* 0C067784 and #imm,r0 */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C067788u, 2);  /* 0C067786 mov.w @Rm,Rn */
	r15 += 0xFFFFFFF0u;  /* 0C067788 add #imm,Rn */
	r5 = 0xF0u; UPD(0x0C06778Cu, 2);  /* 0C06778A mov.w @(disp,pc),Rn */
	r0 += r6;  /* 0C06778C add Rm,Rn */
	r0 += r5;  /* 0C06778E add Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C067790 exts.w Rm,Rn */
	r5 = 0x60000u; UPD(0x0C067794u, 4);  /* 0C067792 mov.l @(disp,pc),Rn */
	IF(0x0C067794u); { u32 t_ = r11; PR = 0x0C067798u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C067798u); }  /* 0C067794 jsr @Rn */
L_0C067798: BLKS(0x0C067798u);
	r4 = R32(r14); UPD(0x0C06779Au, 1);  /* 0C067798 mov.l @Rm,Rn */
	r8 = R32(r4 + 0x14u); UPD(0x0C06779Cu, 1);  /* 0C06779A mov.l @(disp,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C06779Eu, 1);  /* 0C06779C mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C06779E add Rm,Rn */
	IF(0x0C0677A0u); { u32 t_ = r10; PR = 0x0C0677A4u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0677A4u); }  /* 0C0677A0 jsr @Rn */
L_0C0677A4: BLKS(0x0C0677A4u);
	r1 = R32(r14); UPD(0x0C0677A6u, 1);  /* 0C0677A4 mov.l @Rm,Rn */
	r2 = 0x0u;  /* 0C0677A6 mov #imm,Rn */
	r12 = R32(r1 + 0x18u); UPD(0x0C0677AAu, 2);  /* 0C0677A8 mov.l @(disp,Rm),Rn */
	r3 = 0x14u;  /* 0C0677AA mov #imm,Rn */
	r5 = 0x18000u; UPD(0x0C0677AEu, 2);  /* 0C0677AC mov.l @(disp,pc),Rn */
	r12 += r0;  /* 0C0677AE add Rm,Rn */
	W32(r15, r2); UPD(0x0C0677B2u, 2);  /* 0C0677B0 mov.l Rm,@Rn */
	r4 = r13;  /* 0C0677B2 mov Rm,Rn */
	IF(0x0C0677B4u); { u32 t_ = r11; PR = 0x0C0677B8u; W32(r15 + 0x4u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0677B8u); }  /* 0C0677B4 jsr @Rn */
L_0C0677B8: BLKS(0x0C0677B8u);
	r8 += r9;  /* 0C0677B8 add Rm,Rn */
	r4 = r13;  /* 0C0677BA mov Rm,Rn */
	r5 = 0x20000u; UPD(0x0C0677BEu, 3);  /* 0C0677BC mov.l @(disp,pc),Rn */
	IF(0x0C0677BEu); { u32 t_ = r10; PR = 0x0C0677C2u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0677C2u); }  /* 0C0677BE jsr @Rn */
L_0C0677C2: BLKS(0x0C0677C2u);
	r11 = 0xC0AC540u; UPD(0x0C0677C4u, 1);  /* 0C0677C2 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0677C4 mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0677C8u, 2);  /* 0C0677C6 mov.l Rm,@(disp,Rn) */
	r6 = r8;  /* 0C0677C8 mov Rm,Rn */
	r9 = R32(r14); UPD(0x0C0677CCu, 2);  /* 0C0677CA mov.l @Rm,Rn */
	r7 = r12;  /* 0C0677CC mov Rm,Rn */
	IF(0x0C0677CEu); { u32 t_ = r11; PR = 0x0C0677D2u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AC540, 0x0C0AC540u, 0x0C0677D2u); }  /* 0C0677CE jsr @Rn */
L_0C0677D2: BLKS(0x0C0677D2u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C06764Eu, 3); goto L_0C06764E; }  /* 0C0677D2 bra */
L_0C067850: BLKS(0x0C067850u);
	r9 += 0x2Bu;  /* 0C067850 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r9); UPD(0x0C067854u, 2);  /* 0C067852 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C067854 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C067856 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C067858 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r9, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0677D2u, 6); goto L_0C0677D2; } UPD(0x0C06785Eu, 1); goto L_0C06785E; }  /* 0C06785A bf/s */
L_0C06785E: BLKS(0x0C06785Eu);
	r13 = 0xC060840u; UPD(0x0C067860u, 1);  /* 0C06785E mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C06768Au, 3); goto L_0C06768A; }  /* 0C067860 bra */
}

void f_0C067870(sh3_t *c)
{
	LOCALS;
L_0C067870: BLKS(0x0C067870u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C067872u, 1);  /* 0C067870 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C067874u, 1);  /* 0C067872 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C067876u, 1);  /* 0C067874 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C067878u, 1);  /* 0C067876 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06787Au, 1);  /* 0C067878 mov.l Rm,@-Rn */
	r2 = 0x280u; UPD(0x0C06787Cu, 1);  /* 0C06787A mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C06787C exts.w Rm,Rn */
	IF(0x0C06787Eu); MACL = r12 * r2;  /* 0C06787E mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C067882u, 4);  /* 0C067880 mov.l Rm,@-Rn */
	r4 = 0xC283794u; UPD(0x0C067884u, 1);  /* 0C067882 mov.l @(disp,pc),Rn */
	IF(0x0C067884u); r0 = MACL;  /* 0C067884 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067888u, 2);  /* 0C067886 mov.l Rm,@-Rn */
	r4 += r0;  /* 0C067888 add Rm,Rn */
	IF(0x0C06788Au); r15 -= 4; W32(r15, PR); UPD(0x0C06788Cu, 2);  /* 0C06788A sts.l pr,@-Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C06788C exts.w Rm,Rn */
	r0 = 0x258u; UPD(0x0C067890u, 2);  /* 0C06788E mov.w @(disp,pc),Rn */
	IF(0x0C067890u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C067892u, 1);  /* 0C067890 mov.b @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C067892 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0678B0u, 4); goto L_0C0678B0; } UPD(0x0C067898u, 1); goto L_0C067898; }  /* 0C067894 bf/s */
L_0C067898: BLKS(0x0C067898u);
	r15 = r14;  /* 0C067898 mov Rm,Rn */
	IF(0x0C06789Au); PR = R32(r15); r15 += 4; UPD(0x0C06789Cu, 2);  /* 0C06789A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06789Eu, 1);  /* 0C06789C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0678A0u, 1);  /* 0C06789E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0678A2u, 1);  /* 0C0678A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0678A4u, 1);  /* 0C0678A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0678A6u, 1);  /* 0C0678A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0678A8u, 1);  /* 0C0678A6 mov.l @Rm+,Rn */
	IF(0x0C0678A8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0678A8 rts */
L_0C0678B0: BLKS(0x0C0678B0u);
	r8 = 0xC060840u; UPD(0x0C0678B2u, 1);  /* 0C0678B0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0678B2 mov Rm,Rn */
	r5 = r13;  /* 0C0678B4 mov Rm,Rn */
	r6 = 0x1u;  /* 0C0678B6 mov #imm,Rn */
	IF(0x0C0678B8u); { u32 t_ = r8; PR = 0x0C0678BCu; r7 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C060840, 0x0C060840u, 0x0C0678BCu); }  /* 0C0678B8 jsr @Rn */
L_0C0678BC: BLKS(0x0C0678BCu);
	T = (r0 & r0) == 0;  /* 0C0678BC tst Rm,Rn */
	if (T) { UPD(0x0C067898u, 4); goto L_0C067898; }  /* 0C0678BE bt */
L_0C0678C0: BLKS(0x0C0678C0u);
	r3 = 0x30u;  /* 0C0678C0 mov #imm,Rn */
	r9 = 0x90u; UPD(0x0C0678C4u, 2);  /* 0C0678C2 mov.w @(disp,pc),Rn */
	IF(0x0C0678C4u); MACL = r12 * r9;  /* 0C0678C4 mul.l Rm,Rn */
	r10 = 0xC27DC84u; UPD(0x0C0678C8u, 3);  /* 0C0678C6 mov.l @(disp,pc),Rn */
	IF(0x0C0678C8u); r9 = MACL;  /* 0C0678C8 sts macl,Rn */
	IF(0x0C0678CAu); MACL = r13 * r3;  /* 0C0678CA mul.l Rm,Rn */
	r7 = 0xC050D70u; UPD(0x0C0678CEu, 4);  /* 0C0678CC mov.l @(disp,pc),Rn */
	IF(0x0C0678CEu); r4 = MACL;  /* 0C0678CE sts macl,Rn */
	r9 += r4;  /* 0C0678D0 add Rm,Rn */
	r9 += r10;  /* 0C0678D2 add Rm,Rn */
	r10 = r9;  /* 0C0678D4 mov Rm,Rn */
	r10 += 0x24u;  /* 0C0678D6 add #imm,Rn */
	IF(0x0C0678D8u); { u32 t_ = r7; PR = 0x0C0678DCu; r4 = 0x1Fu; /* slot mov #imm,Rn */ UPD(t_, 7); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0678DCu); }  /* 0C0678D8 jsr @Rn */
L_0C0678DC: BLKS(0x0C0678DCu);
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C0678DEu, 1);  /* 0C0678DC mov.w @Rm,Rn */
	r5 = 0x34u;  /* 0C0678DE mov #imm,Rn */
	r8 = 0x9C0u; UPD(0x0C0678E2u, 2);  /* 0C0678E0 mov.w @(disp,pc),Rn */
	r0 += r11;  /* 0C0678E2 add Rm,Rn */
	IF(0x0C0678E4u); MACL = r12 * r8;  /* 0C0678E4 mul.l Rm,Rn */
	r0 += 0xFFFFFFF1u;  /* 0C0678E6 add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C0678E8 exts.w Rm,Rn */
	r0 = 0x340u; UPD(0x0C0678ECu, 6);  /* 0C0678EA mov.w @(disp,pc),Rn */
	IF(0x0C0678ECu); r8 = MACL;  /* 0C0678EC sts macl,Rn */
	IF(0x0C0678EEu); MACL = r13 * r0;  /* 0C0678EE mul.l Rm,Rn */
	r2 = 0xC2755BCu; UPD(0x0C0678F2u, 4);  /* 0C0678F0 mov.l @(disp,pc),Rn */
	r11 += 0x4u;  /* 0C0678F2 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r2); UPD(0x0C0678F6u, 2);  /* 0C0678F4 mov.w @Rm,Rn */
	IF(0x0C0678F6u); r7 = MACL;  /* 0C0678F6 sts macl,Rn */
	IF(0x0C0678F8u); MACL = r6 * r5;  /* 0C0678F8 mul.l Rm,Rn */
	r0 = r8;  /* 0C0678FA mov Rm,Rn */
	r0 += r7;  /* 0C0678FC add Rm,Rn */
	IF(0x0C0678FEu); r3 = MACL;  /* 0C0678FE sts macl,Rn */
	r4 = 0xC21F8A0u; UPD(0x0C067902u, 7);  /* 0C067900 mov.l @(disp,pc),Rn */
	r0 += r3;  /* 0C067902 add Rm,Rn */
	r13 = 0xC8000000u; UPD(0x0C067906u, 2);  /* 0C067904 mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C067906 add Rm,Rn */
	r5 = 0xC050D70u; UPD(0x0C06790Au, 2);  /* 0C067908 mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C06790A add Rm,Rn */
	IF(0x0C06790Cu); W32(r0 + r4, r13); UPD(0x0C06790Eu, 2);  /* 0C06790C mov.l Rm,@(r0,Rn) */
	r6 = 0x4u;  /* 0C06790E mov #imm,Rn */
	r8 += r4;  /* 0C067910 add Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C067914u, 3);  /* 0C067912 mov.l Rm,@(disp,Rn) */
	IF(0x0C067914u); { u32 t_ = r5; PR = 0x0C067918u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C067918u); }  /* 0C067914 jsr @Rn */
L_0C067918: BLKS(0x0C067918u);
	r0 += 0x1u;  /* 0C067918 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C06791Cu, 2);  /* 0C06791A mov.l Rm,@(disp,Rn) */
	r0 = r11;  /* 0C06791C mov Rm,Rn */
	IF(0x0C06791Eu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06791E shar Rn */
	IF(0x0C067920u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C067920 shar Rn */
	IF(0x0C067922u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C067922 shar Rn */
	r0 &= 0x3Fu;  /* 0C067924 and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C067928u, 6);  /* 0C067926 mov.l Rm,@(disp,Rn) */
	r11 += 0xFFFFFFFCu;  /* 0C067928 add #imm,Rn */
	r8 += 0x2Cu;  /* 0C06792A add #imm,Rn */
	W16(r8, r11); UPD(0x0C06792Eu, 3);  /* 0C06792C mov.w Rm,@Rn */
	r13 = (u32)(s32)(s16)R16(r10); UPD(0x0C067930u, 1);  /* 0C06792E mov.w @Rm,Rn */
	r8 += 0xFFFFFFD4u;  /* 0C067930 add #imm,Rn */
	r4 = r13 & 0xFFFF;  /* 0C067932 extu.w Rm,Rn */
	r13 = 0xC058060u; UPD(0x0C067936u, 3);  /* 0C067934 mov.l @(disp,pc),Rn */
	r2 = 0x80000u; UPD(0x0C067938u, 1);  /* 0C067936 mov.l @(disp,pc),Rn */
	r5 = 0xC0000u; UPD(0x0C06793Au, 1);  /* 0C067938 mov.l @(disp,pc),Rn */
	IF(0x0C06793Au); { u32 t_ = r13; PR = 0x0C06793Eu; W32(r8 + 0x20u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06793Eu); }  /* 0C06793A jsr @Rn */
L_0C06793E: BLKS(0x0C06793Eu);
	r3 = R32(r9 + 0x14u); UPD(0x0C067940u, 1);  /* 0C06793E mov.l @(disp,Rm),Rn */
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C067942u, 1);  /* 0C067940 mov.w @Rm,Rn */
	r3 += r0;  /* 0C067942 add Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C067946u, 2);  /* 0C067944 mov.l @(disp,pc),Rn */
	r4 = r1 & 0xFFFF;  /* 0C067946 extu.w Rm,Rn */
	r0 = 0xFFFD0000u; UPD(0x0C06794Au, 2);  /* 0C067948 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C06794A add Rm,Rn */
	r5 = 0x100000u; UPD(0x0C06794Eu, 2);  /* 0C06794C mov.l @(disp,pc),Rn */
	IF(0x0C06794Eu); { u32 t_ = r10; PR = 0x0C067952u; W32(r8 + 0x10u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C067952u); }  /* 0C06794E jsr @Rn */
L_0C067952: BLKS(0x0C067952u);
	r4 = R32(r9 + 0x18u); UPD(0x0C067954u, 1);  /* 0C067952 mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C067954 add Rm,Rn */
	W32(r8 + 0x14u, r4); UPD(0x0C067958u, 2);  /* 0C067956 mov.l Rm,@(disp,Rn) */
	r5 = 0x80000u; UPD(0x0C06795Au, 1);  /* 0C067958 mov.l @(disp,pc),Rn */
	IF(0x0C06795Au); { u32 t_ = r13; PR = 0x0C06795Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06795Eu); }  /* 0C06795A jsr @Rn */
L_0C06795E: BLKS(0x0C06795Eu);
	r4 = r11;  /* 0C06795E mov Rm,Rn */
	r5 = 0x80000u; UPD(0x0C067962u, 2);  /* 0C067960 mov.l @(disp,pc),Rn */
	IF(0x0C067962u); { u32 t_ = r10; PR = 0x0C067966u; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C067966u); }  /* 0C067962 jsr @Rn */
L_0C067966: BLKS(0x0C067966u);
	r6 = 0x808080u; UPD(0x0C067968u, 1);  /* 0C067966 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C067968 mov #imm,Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C06796Cu, 2);  /* 0C06796A mov.l Rm,@(disp,Rn) */
	r4 = 0x28u;  /* 0C06796C mov #imm,Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C067970u, 2);  /* 0C06796E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x1Cu, r0); UPD(0x0C067972u, 1);  /* 0C067970 mov.l Rm,@(disp,Rn) */
	r9 = 0xC060350u; UPD(0x0C067974u, 1);  /* 0C067972 mov.l @(disp,pc),Rn */
	r8 += 0x2Eu;  /* 0C067974 add #imm,Rn */
	r5 = 0xC0u; UPD(0x0C067978u, 2);  /* 0C067976 mov.w @(disp,pc),Rn */
	IF(0x0C067978u); { u32 t_ = r9; PR = 0x0C06797Cu; W16(r8, r5); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C06797Cu); }  /* 0C067978 jsr @Rn */
L_0C06797C: BLKS(0x0C06797Cu);
	r3 = 0xC0AFBA0u; UPD(0x0C06797Eu, 1);  /* 0C06797C mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C06797E mov Rm,Rn */
	r5 = 0x4Fu;  /* 0C067980 mov #imm,Rn */
	r15 = r14;  /* 0C067982 mov Rm,Rn */
	IF(0x0C067984u); PR = R32(r15); r15 += 4; UPD(0x0C067986u, 4);  /* 0C067984 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067988u, 1);  /* 0C067986 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06798Au, 1);  /* 0C067988 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06798Cu, 1);  /* 0C06798A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06798Eu, 1);  /* 0C06798C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C067990u, 1);  /* 0C06798E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C067992u, 1);  /* 0C067990 mov.l @Rm+,Rn */
	IF(0x0C067992u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFBA0u: TAIL(f_0C0AFBA0); default: JUMPD(tv_); } }  /* 0C067992 jmp @Rn */
}

void f_0C0679F0(sh3_t *c)
{
	LOCALS;
	goto L_0C0679F0;
L_0C066E90: BLKS(0x0C066E90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066E92u, 1);  /* 0C066E90 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C066E92 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C066E96u, 2);  /* 0C066E94 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C066E96 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C066E9Au, 2);  /* 0C066E98 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C066E9Cu, 1);  /* 0C066E9A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C066E9Eu, 1);  /* 0C066E9C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C066EA0u, 1);  /* 0C066E9E mov.l Rm,@-Rn */
	r2 = 0x280u; UPD(0x0C066EA2u, 1);  /* 0C066EA0 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C066EA4u, 1);  /* 0C066EA2 mov.l Rm,@-Rn */
	IF(0x0C066EA4u); MACL = r4 * r2;  /* 0C066EA4 mul.l Rm,Rn */
	IF(0x0C066EA6u); r15 -= 4; W32(r15, PR); UPD(0x0C066EA8u, 3);  /* 0C066EA6 sts.l pr,@-Rn */
	r6 = 0xC283794u; UPD(0x0C066EAAu, 1);  /* 0C066EA8 mov.l @(disp,pc),Rn */
	IF(0x0C066EAAu); r0 = MACL;  /* 0C066EAA sts macl,Rn */
	r15 += 0xFFFFFFE8u;  /* 0C066EAC add #imm,Rn */
	r14 = r15;  /* 0C066EAE mov Rm,Rn */
	r6 += r0;  /* 0C066EB0 add Rm,Rn */
	W32(r14, r4); UPD(0x0C066EB4u, 5);  /* 0C066EB2 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C066EB6u, 1);  /* 0C066EB4 mov.l Rm,@(disp,Rn) */
	r0 = 0x258u; UPD(0x0C066EB8u, 1);  /* 0C066EB6 mov.w @(disp,pc),Rn */
	IF(0x0C066EB8u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C066EBAu, 1);  /* 0C066EB8 mov.b @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C066EBA tst Rm,Rn */
	if (!T) { UPD(0x0C066EE0u, 4); goto L_0C066EE0; }  /* 0C066EBC bf */
L_0C066EBE: BLKS(0x0C066EBEu);
	r14 += 0x18u;  /* 0C066EBE add #imm,Rn */
	UPD(0x0C066EC0u, 1);
L_0C066EC0: BLKS(0x0C066EC0u);
	r15 = r14;  /* 0C066EC0 mov Rm,Rn */
	IF(0x0C066EC2u); PR = R32(r15); r15 += 4; UPD(0x0C066EC4u, 2);  /* 0C066EC2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C066EC6u, 1);  /* 0C066EC4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C066EC8u, 1);  /* 0C066EC6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C066ECAu, 1);  /* 0C066EC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C066ECCu, 1);  /* 0C066ECA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C066ECEu, 1);  /* 0C066ECC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C066ED0u, 1);  /* 0C066ECE mov.l @Rm+,Rn */
	IF(0x0C066ED0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C066ED0 rts */
L_0C066EE0: BLKS(0x0C066EE0u);
	r8 = 0xC060840u; UPD(0x0C066EE2u, 1);  /* 0C066EE0 mov.l @(disp,pc),Rn */
	r6 = 0x2u;  /* 0C066EE2 mov #imm,Rn */
	IF(0x0C066EE4u); { u32 t_ = r8; PR = 0x0C066EE8u; r7 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C060840, 0x0C060840u, 0x0C066EE8u); }  /* 0C066EE4 jsr @Rn */
L_0C066EE8: BLKS(0x0C066EE8u);
	T = (r0 & r0) == 0;  /* 0C066EE8 tst Rm,Rn */
	if (T) { UPD(0x0C066EBEu, 4); goto L_0C066EBE; }  /* 0C066EEA bt */
L_0C066EEC: BLKS(0x0C066EECu);
	r13 = 0x30u;  /* 0C066EEC mov #imm,Rn */
	r6 = 0x90u; UPD(0x0C066EF0u, 2);  /* 0C066EEE mov.w @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C066EF2u, 1);  /* 0C066EF0 mov.l @Rm,Rn */
	IF(0x0C066EF2u); MACL = r0 * r6;  /* 0C066EF2 mul.l Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C066EF6u, 3);  /* 0C066EF4 mov.l @(disp,Rm),Rn */
	IF(0x0C066EF6u); r10 = MACL;  /* 0C066EF6 sts macl,Rn */
	IF(0x0C066EF8u); MACL = r4 * r13;  /* 0C066EF8 mul.l Rm,Rn */
	r7 = 0x9C0u; UPD(0x0C066EFCu, 4);  /* 0C066EFA mov.w @(disp,pc),Rn */
	r9 = R32(r14); UPD(0x0C066EFEu, 1);  /* 0C066EFC mov.l @Rm,Rn */
	IF(0x0C066EFEu); r12 = MACL;  /* 0C066EFE sts macl,Rn */
	IF(0x0C066F00u); MACL = r9 * r7;  /* 0C066F00 mul.l Rm,Rn */
	r3 = 0x340u; UPD(0x0C066F04u, 4);  /* 0C066F02 mov.w @(disp,pc),Rn */
	r10 += r12;  /* 0C066F04 add Rm,Rn */
	IF(0x0C066F06u); r5 = MACL;  /* 0C066F06 sts macl,Rn */
	r11 = 0xC27DC84u; UPD(0x0C066F0Au, 3);  /* 0C066F08 mov.l @(disp,pc),Rn */
	IF(0x0C066F0Au); MACL = r4 * r3;  /* 0C066F0A mul.l Rm,Rn */
	r2 = 0xC2755BCu; UPD(0x0C066F0Eu, 3);  /* 0C066F0C mov.l @(disp,pc),Rn */
	r10 += r11;  /* 0C066F0E add Rm,Rn */
	r10 += 0x24u;  /* 0C066F10 add #imm,Rn */
	IF(0x0C066F12u); r1 = MACL;  /* 0C066F12 sts macl,Rn */
	W32(r14 + 0x8u, r2); UPD(0x0C066F16u, 4);  /* 0C066F14 mov.l Rm,@(disp,Rn) */
	r13 = 0x0u;  /* 0C066F16 mov #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r10); UPD(0x0C066F1Au, 2);  /* 0C066F18 mov.w @Rm,Rn */
	W32(r14 + 0x10u, r5); UPD(0x0C066F1Cu, 1);  /* 0C066F1A mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x14u, r1); UPD(0x0C066F1Eu, 1);  /* 0C066F1C mov.l Rm,@(disp,Rn) */
	IF(0x0C066F1Eu); ;  /* 0C066F1E nop */
	UPD(0x0C066F20u, 1);
L_0C066F20: BLKS(0x0C066F20u);
	r0 = R32(r14 + 0x8u); UPD(0x0C066F22u, 1);  /* 0C066F20 mov.l @(disp,Rm),Rn */
	r1 = 0x34u;  /* 0C066F22 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r0); r0 += 2; r7 = v_; } UPD(0x0C066F26u, 2);  /* 0C066F24 mov.w @Rm+,Rn */
	r6 = 0x3u;  /* 0C066F26 mov #imm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C066F2Au, 2);  /* 0C066F28 mov.l Rm,@(disp,Rn) */
	IF(0x0C066F2Au); MACL = r7 * r1;  /* 0C066F2A mul.l Rm,Rn */
	r11 = 0xC1704D0u; UPD(0x0C066F2Eu, 3);  /* 0C066F2C mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C066F2E mov Rm,Rn */
	IF(0x0C066F30u); r0 <<= 2;  /* 0C066F30 shll2 Rn */
	IF(0x0C066F32u); r10 = R32(r0 + r11); UPD(0x0C066F34u, 3);  /* 0C066F32 mov.l @(r0,Rm),Rn */
	IF(0x0C066F34u); r5 = MACL;  /* 0C066F34 sts macl,Rn */
	r4 = R32(r14 + 0x14u); UPD(0x0C066F38u, 2);  /* 0C066F36 mov.l @(disp,Rm),Rn */
	r12 += 0x4u;  /* 0C066F38 add #imm,Rn */
	r9 = R32(r14 + 0x10u); UPD(0x0C066F3Cu, 2);  /* 0C066F3A mov.l @(disp,Rm),Rn */
	r3 = 0xC8800000u; UPD(0x0C066F3Eu, 1);  /* 0C066F3C mov.l @(disp,pc),Rn */
	r9 += r4;  /* 0C066F3E add Rm,Rn */
	r0 = 0xC21F8A0u; UPD(0x0C066F42u, 2);  /* 0C066F40 mov.l @(disp,pc),Rn */
	r9 += r5;  /* 0C066F42 add Rm,Rn */
	IF(0x0C066F44u); W32(r0 + r9, r3); UPD(0x0C066F46u, 2);  /* 0C066F44 mov.l Rm,@(r0,Rn) */
	r2 = R32(r14 + 0x10u); UPD(0x0C066F48u, 1);  /* 0C066F46 mov.l @(disp,Rm),Rn */
	IF(0x0C066F48u); r9 = MACL;  /* 0C066F48 sts macl,Rn */
	r9 += r2;  /* 0C066F4A add Rm,Rn */
	r8 = 0xC050D70u; UPD(0x0C066F4Eu, 3);  /* 0C066F4C mov.l @(disp,pc),Rn */
	r9 += r4;  /* 0C066F4E add Rm,Rn */
	r9 += r0;  /* 0C066F50 add Rm,Rn */
	W32(r9 + 0x4u, r6); UPD(0x0C066F54u, 3);  /* 0C066F52 mov.l Rm,@(disp,Rn) */
	r4 = 0x4u;  /* 0C066F54 mov #imm,Rn */
	IF(0x0C066F56u); { u32 t_ = r8; PR = 0x0C066F5Au; W32(r14 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C066F5Au); }  /* 0C066F56 jsr @Rn */
L_0C066F5A: BLKS(0x0C066F5Au);
	r0 += 0x1u;  /* 0C066F5A add #imm,Rn */
	W32(r9 + 0x8u, r0); UPD(0x0C066F5Eu, 2);  /* 0C066F5C mov.l Rm,@(disp,Rn) */
	r4 = 0x30u;  /* 0C066F5E mov #imm,Rn */
	r0 = r12;  /* 0C066F60 mov Rm,Rn */
	IF(0x0C066F62u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C066F62 shar Rn */
	IF(0x0C066F64u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C066F64 shar Rn */
	IF(0x0C066F66u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C066F66 shar Rn */
	r0 &= 0x3Fu;  /* 0C066F68 and #imm,r0 */
	W32(r9 + 0xCu, r0); UPD(0x0C066F6Cu, 7);  /* 0C066F6A mov.l Rm,@(disp,Rn) */
	r12 += 0xFFFFFFFCu;  /* 0C066F6C add #imm,Rn */
	r9 += 0x2Cu;  /* 0C066F6E add #imm,Rn */
	r10 = R32(r14); UPD(0x0C066F72u, 3);  /* 0C066F70 mov.l @Rm,Rn */
	r7 = 0x90u; UPD(0x0C066F74u, 1);  /* 0C066F72 mov.w @(disp,pc),Rn */
	W16(r9, r12); UPD(0x0C066F76u, 1);  /* 0C066F74 mov.w Rm,@Rn */
	IF(0x0C066F76u); MACL = r10 * r7;  /* 0C066F76 mul.l Rm,Rn */
	r11 = 0x30000u; UPD(0x0C066F7Au, 3);  /* 0C066F78 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFD4u;  /* 0C066F7A add #imm,Rn */
	W32(r9 + 0x20u, r11); UPD(0x0C066F7Eu, 2);  /* 0C066F7C mov.l Rm,@(disp,Rn) */
	r5 = R32(r14 + 0x4u); UPD(0x0C066F80u, 1);  /* 0C066F7E mov.l @(disp,Rm),Rn */
	IF(0x0C066F80u); r11 = MACL;  /* 0C066F80 sts macl,Rn */
	IF(0x0C066F82u); MACL = r5 * r4;  /* 0C066F82 mul.l Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C066F86u, 4);  /* 0C066F84 mov.l @(disp,pc),Rn */
	IF(0x0C066F86u); r3 = MACL;  /* 0C066F86 sts macl,Rn */
	r11 += r3;  /* 0C066F88 add Rm,Rn */
	r5 = 0x140000u; UPD(0x0C066F8Cu, 3);  /* 0C066F8A mov.l @(disp,pc),Rn */
	IF(0x0C066F8Cu); { u32 t_ = r8; PR = 0x0C066F90u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C066F90u); }  /* 0C066F8C jsr @Rn */
L_0C066F90: BLKS(0x0C066F90u);
	r1 = 0xC058030u; UPD(0x0C066F92u, 1);  /* 0C066F90 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C066F92 mov Rm,Rn */
	r4 = r12;  /* 0C066F94 mov Rm,Rn */
	IF(0x0C066F96u); { u32 t_ = r1; PR = 0x0C066F9Au; r5 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C066F9Au); }  /* 0C066F96 jsr @Rn */
L_0C066F9A: BLKS(0x0C066F9Au);
	r8 -= r0;  /* 0C066F9A sub Rm,Rn */
	r1 = r8;  /* 0C066F9C mov Rm,Rn */
	r10 = 0xC27DC84u; UPD(0x0C066FA0u, 3);  /* 0C066F9E mov.l @(disp,pc),Rn */
	r1 += r1;  /* 0C066FA0 add Rm,Rn */
	r1 += r8;  /* 0C066FA2 add Rm,Rn */
	IF(0x0C066FA4u); T = (s32)r1 >= 0;  /* 0C066FA4 cmp/pz Rn */
	{ u32 c_ = !T; r10 += r11; /* slot add Rm,Rn */ if (c_) { UPD(0x0C067080u, 6); goto L_0C067080; } UPD(0x0C066FAAu, 1); goto L_0C066FAA; }  /* 0C066FA6 bf/s */
L_0C066FAA: BLKS(0x0C066FAAu);
	r0 = R32(r10 + 0x14u); UPD(0x0C066FACu, 1);  /* 0C066FAA mov.l @(disp,Rm),Rn */
	IF(0x0C066FACu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C066FAC shar Rn */
	IF(0x0C066FAEu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C066FAE shar Rn */
	r4 = 0x10000u; UPD(0x0C066FB2u, 3);  /* 0C066FB0 mov.l @(disp,pc),Rn */
	r0 += r1;  /* 0C066FB2 add Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C066FB6u, 2);  /* 0C066FB4 mov.l @(disp,pc),Rn */
	r0 += r4;  /* 0C066FB6 add Rm,Rn */
	r4 = r12;  /* 0C066FB8 mov Rm,Rn */
	r5 = 0x140000u; UPD(0x0C066FBCu, 3);  /* 0C066FBA mov.l @(disp,pc),Rn */
	IF(0x0C066FBCu); { u32 t_ = r8; PR = 0x0C066FC0u; W32(r9 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C066FC0u); }  /* 0C066FBC jsr @Rn */
L_0C066FC0: BLKS(0x0C066FC0u);
	r8 = R32(r10 + 0x18u); UPD(0x0C066FC2u, 1);  /* 0C066FC0 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C066FC2 mov Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C066FC6u, 2);  /* 0C066FC4 mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C066FC6 add Rm,Rn */
	IF(0x0C066FC8u); { u32 t_ = r10; PR = 0x0C066FCCu; r5 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C066FCCu); }  /* 0C066FC8 jsr @Rn */
L_0C066FCC: BLKS(0x0C066FCCu);
	r8 += r0;  /* 0C066FCC add Rm,Rn */
	r7 = 0xC1704D8u; UPD(0x0C066FD0u, 2);  /* 0C066FCE mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C066FD0 mov Rm,Rn */
	r0 += r0;  /* 0C066FD2 add Rm,Rn */
	IF(0x0C066FD4u); r5 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C066FD6u, 3);  /* 0C066FD4 mov.w @(r0,Rm),Rn */
	r1 = 0xC058060u; UPD(0x0C066FD8u, 1);  /* 0C066FD6 mov.l @(disp,pc),Rn */
	r5 += r12;  /* 0C066FD8 add Rm,Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C066FDA exts.w Rm,Rn */
	W32(r9 + 0x14u, r8); UPD(0x0C066FDEu, 3);  /* 0C066FDC mov.l Rm,@(disp,Rn) */
	r5 = 0x30000u; UPD(0x0C066FE0u, 1);  /* 0C066FDE mov.l @(disp,pc),Rn */
	IF(0x0C066FE0u); { u32 t_ = r1; PR = 0x0C066FE4u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C066FE4u); }  /* 0C066FE0 jsr @Rn */
L_0C066FE4: BLKS(0x0C066FE4u);
	r3 = 0xC058030u; UPD(0x0C066FE6u, 1);  /* 0C066FE4 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C066FE6 mov Rm,Rn */
	W32(r9 + 0x18u, r0); UPD(0x0C066FEAu, 2);  /* 0C066FE8 mov.l Rm,@(disp,Rn) */
	r5 = 0x30000u; UPD(0x0C066FECu, 1);  /* 0C066FEA mov.l @(disp,pc),Rn */
	IF(0x0C066FECu); { u32 t_ = r3; PR = 0x0C066FF0u; r8 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C066FF0u); }  /* 0C066FEC jsr @Rn */
L_0C066FF0: BLKS(0x0C066FF0u);
	r6 = r13;  /* 0C066FF0 mov Rm,Rn */
	r4 = 0x808080u; UPD(0x0C066FF4u, 2);  /* 0C066FF2 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C066FF4 mov #imm,Rn */
	r6 += 0x1u;  /* 0C066FF6 add #imm,Rn */
	r13 = (u32)(s32)(s16)r6;  /* 0C066FF8 exts.w Rm,Rn */
	W32(r9 + 0x1Cu, r0); UPD(0x0C066FFCu, 4);  /* 0C066FFA mov.l Rm,@(disp,Rn) */
	T = (s32)r13 > (s32)r8;  /* 0C066FFC cmp/gt Rm,Rn */
	W32(r9 + 0x24u, r2); UPD(0x0C067000u, 2);  /* 0C066FFE mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r9 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C066F20u, 3); goto L_0C066F20; } UPD(0x0C067004u, 1); goto L_0C067004; }  /* 0C067000 bf/s */
L_0C067004: BLKS(0x0C067004u);
	r12 = 0xC060350u; UPD(0x0C067006u, 1);  /* 0C067004 mov.l @(disp,pc),Rn */
	r8 = 0xC0AFBA0u; UPD(0x0C067008u, 1);  /* 0C067006 mov.l @(disp,pc),Rn */
	IF(0x0C067008u); { u32 t_ = r12; PR = 0x0C06700Cu; r4 = 0x64u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C06700Cu); }  /* 0C067008 jsr @Rn */
L_0C06700C: BLKS(0x0C06700Cu);
	r4 = R32(r14); UPD(0x0C06700Eu, 1);  /* 0C06700C mov.l @Rm,Rn */
	IF(0x0C06700Eu); { u32 t_ = r8; PR = 0x0C067012u; r5 = 0x4Eu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C067012u); }  /* 0C06700E jsr @Rn */
L_0C067012: BLKS(0x0C067012u);
	r8 = 0xC27DC84u; UPD(0x0C067014u, 1);  /* 0C067012 mov.l @(disp,pc),Rn */
	r10 = 0xC0AFE40u; UPD(0x0C067016u, 1);  /* 0C067014 mov.l @(disp,pc),Rn */
	r8 += r11;  /* 0C067016 add Rm,Rn */
	IF(0x0C067018u); { u32 t_ = r10; PR = 0x0C06701Cu; r8 += 0x24u; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C06701Cu); }  /* 0C067018 jsr @Rn */
L_0C06701C: BLKS(0x0C06701Cu);
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C06701Eu, 1);  /* 0C06701C mov.w @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C06701E and #imm,r0 */
	r9 = 0xF0u; UPD(0x0C067022u, 2);  /* 0C067020 mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C067022 add Rm,Rn */
	r11 = 0xC058060u; UPD(0x0C067026u, 2);  /* 0C067024 mov.l @(disp,pc),Rn */
	r0 += r9;  /* 0C067026 add Rm,Rn */
	r13 = 0xC0000u; UPD(0x0C06702Au, 2);  /* 0C067028 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C06702A exts.w Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C06702C add #imm,Rn */
	r8 += 0xFFFFFFDCu;  /* 0C06702E add #imm,Rn */
	r4 = r12;  /* 0C067030 mov Rm,Rn */
	IF(0x0C067032u); { u32 t_ = r11; PR = 0x0C067036u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 6); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C067036u); }  /* 0C067032 jsr @Rn */
L_0C067036: BLKS(0x0C067036u);
	r9 = R32(r8 + 0x14u); UPD(0x0C067038u, 1);  /* 0C067036 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C067038 mov Rm,Rn */
	r1 = 0xC058030u; UPD(0x0C06703Cu, 2);  /* 0C06703A mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C06703C add Rm,Rn */
	r5 = 0x10000u; UPD(0x0C067040u, 2);  /* 0C06703E mov.l @(disp,pc),Rn */
	r9 += r5;  /* 0C067040 add Rm,Rn */
	IF(0x0C067042u); { u32 t_ = r1; PR = 0x0C067046u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C067046u); }  /* 0C067042 jsr @Rn */
L_0C067046: BLKS(0x0C067046u);
	r13 = R32(r8 + 0x18u); UPD(0x0C067048u, 1);  /* 0C067046 mov.l @(disp,Rm),Rn */
	r3 = 0x0u;  /* 0C067048 mov #imm,Rn */
	r2 = 0x14u;  /* 0C06704A mov #imm,Rn */
	r4 = r12;  /* 0C06704C mov Rm,Rn */
	r13 += r0;  /* 0C06704E add Rm,Rn */
	W32(r15, r3); UPD(0x0C067052u, 5);  /* 0C067050 mov.l Rm,@Rn */
	r5 = 0x10000u; UPD(0x0C067054u, 1);  /* 0C067052 mov.l @(disp,pc),Rn */
	IF(0x0C067054u); { u32 t_ = r11; PR = 0x0C067058u; W32(r15 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C067058u); }  /* 0C067054 jsr @Rn */
L_0C067058: BLKS(0x0C067058u);
	r6 = 0xC058030u; UPD(0x0C06705Au, 1);  /* 0C067058 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C06705A mov Rm,Rn */
	r11 = 0x808080u; UPD(0x0C06705Eu, 2);  /* 0C06705C mov.l @(disp,pc),Rn */
	r5 = 0x10000u; UPD(0x0C067060u, 1);  /* 0C06705E mov.l @(disp,pc),Rn */
	IF(0x0C067060u); { u32 t_ = r6; PR = 0x0C067064u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C067064u); }  /* 0C067060 jsr @Rn */
L_0C067064: BLKS(0x0C067064u);
	r12 = 0xC0ACA40u; UPD(0x0C067066u, 1);  /* 0C067064 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C067066 mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C06706Au, 2);  /* 0C067068 mov.l Rm,@(disp,Rn) */
	r6 = r9;  /* 0C06706A mov Rm,Rn */
	W32(r15 + 0x10u, r11); UPD(0x0C06706Eu, 2);  /* 0C06706C mov.l Rm,@(disp,Rn) */
	r7 = r13;  /* 0C06706E mov Rm,Rn */
	IF(0x0C067070u); { u32 t_ = r12; PR = 0x0C067074u; r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C067074u); }  /* 0C067070 jsr @Rn */
L_0C067074: BLKS(0x0C067074u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C066EC0u, 3); goto L_0C066EC0; }  /* 0C067074 bra */
L_0C067080: BLKS(0x0C067080u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C066FAAu, 3); goto L_0C066FAA; }  /* 0C067080 bra */
L_0C0679F0: BLKS(0x0C0679F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0679F2u, 1);  /* 0C0679F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0679F4u, 1);  /* 0C0679F2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0679F4 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0679F8u, 2);  /* 0C0679F6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C0679F8 exts.w Rm,Rn */
	r0 = 0xC066A20u; UPD(0x0C0679FCu, 2);  /* 0C0679FA mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0679FC mov Rm,Rn */
	IF(0x0C0679FEu); r15 -= 4; W32(r15, PR); UPD(0x0C067A00u, 2);  /* 0C0679FE sts.l pr,@-Rn */
	r5 = r9;  /* 0C067A00 mov Rm,Rn */
	IF(0x0C067A02u); { u32 t_ = r0; PR = 0x0C067A06u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C066A20, 0x0C066A20u, 0x0C067A06u); }  /* 0C067A02 jsr @Rn */
L_0C067A06: BLKS(0x0C067A06u);
	r0 = 0xC066E90u; UPD(0x0C067A08u, 1);  /* 0C067A06 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C067A08 mov Rm,Rn */
	r5 = r9;  /* 0C067A0A mov Rm,Rn */
	r15 = r14;  /* 0C067A0C mov Rm,Rn */
	IF(0x0C067A0Eu); PR = R32(r15); r15 += 4; UPD(0x0C067A10u, 4);  /* 0C067A0E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067A12u, 1);  /* 0C067A10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C067A14u, 1);  /* 0C067A12 mov.l @Rm+,Rn */
	IF(0x0C067A14u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C066E90u: goto L_0C066E90; default: JUMPD(tv_); } }  /* 0C067A14 jmp @Rn */
}

void f_0C067A20(sh3_t *c)
{
	LOCALS;
	goto L_0C067A20;
L_0C067600: BLKS(0x0C067600u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C067602u, 1);  /* 0C067600 mov.l Rm,@-Rn */
	r3 = 0x30u;  /* 0C067602 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C067606u, 2);  /* 0C067604 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C067608u, 1);  /* 0C067606 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06760Au, 1);  /* 0C067608 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06760Cu, 1);  /* 0C06760A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C06760C exts.w Rm,Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C06760E exts.w Rm,Rn */
	r4 = 0x90u; UPD(0x0C067612u, 3);  /* 0C067610 mov.w @(disp,pc),Rn */
	IF(0x0C067612u); MACL = r12 * r4;  /* 0C067612 mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C067616u, 3);  /* 0C067614 mov.l Rm,@-Rn */
	IF(0x0C067616u); r8 = MACL;  /* 0C067616 sts macl,Rn */
	IF(0x0C067618u); MACL = r11 * r3;  /* 0C067618 mul.l Rm,Rn */
	r0 = 0xC27DC84u; UPD(0x0C06761Cu, 4);  /* 0C06761A mov.l @(disp,pc),Rn */
	IF(0x0C06761Cu); r2 = MACL;  /* 0C06761C sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067620u, 2);  /* 0C06761E mov.l Rm,@-Rn */
	r8 += r2;  /* 0C067620 add Rm,Rn */
	r8 += r0;  /* 0C067622 add Rm,Rn */
	IF(0x0C067624u); r15 -= 4; W32(r15, PR); UPD(0x0C067626u, 3);  /* 0C067624 sts.l pr,@-Rn */
	r9 = r8;  /* 0C067626 mov Rm,Rn */
	r9 += 0x2Au;  /* 0C067628 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C06762Cu, 3);  /* 0C06762A mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06762C add #imm,Rn */
	r10 = r0 & 0xFF;  /* 0C06762E extu.b Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C067630 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06763Au, 6); goto L_0C06763A; } goto L_0C067636; }  /* 0C067632 bt/s */
L_0C067636: BLKS(0x0C067636u);
	{ r9 = r8; /* slot mov Rm,Rn */ UPD(0x0C067850u, 4); goto L_0C067850; }  /* 0C067636 bra */
L_0C06763A: BLKS(0x0C06763Au);
	r13 = 0x280u; UPD(0x0C06763Cu, 1);  /* 0C06763A mov.w @(disp,pc),Rn */
	IF(0x0C06763Cu); MACL = r12 * r13;  /* 0C06763C mul.l Rm,Rn */
	r6 = 0xC283794u; UPD(0x0C067640u, 3);  /* 0C06763E mov.l @(disp,pc),Rn */
	IF(0x0C067640u); r7 = MACL;  /* 0C067640 sts macl,Rn */
	r0 = 0x258u; UPD(0x0C067644u, 2);  /* 0C067642 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C067644 add Rm,Rn */
	IF(0x0C067646u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C067648u, 2);  /* 0C067646 mov.b @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C067648 tst Rm,Rn */
	if (!T) { UPD(0x0C067670u, 4); goto L_0C067670; }  /* 0C06764A bf */
L_0C06764C: BLKS(0x0C06764Cu);
	r14 += 0x8u;  /* 0C06764C add #imm,Rn */
	UPD(0x0C06764Eu, 1);
L_0C06764E: BLKS(0x0C06764Eu);
	r15 = r14;  /* 0C06764E mov Rm,Rn */
	IF(0x0C067650u); PR = R32(r15); r15 += 4; UPD(0x0C067652u, 2);  /* 0C067650 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067654u, 1);  /* 0C067652 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C067656u, 1);  /* 0C067654 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C067658u, 1);  /* 0C067656 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06765Au, 1);  /* 0C067658 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06765Cu, 1);  /* 0C06765A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06765Eu, 1);  /* 0C06765C mov.l @Rm+,Rn */
	IF(0x0C06765Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06765E rts */
L_0C067670: BLKS(0x0C067670u);
	r13 = 0xC060840u; UPD(0x0C067672u, 1);  /* 0C067670 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C067672 mov Rm,Rn */
	r5 = r11;  /* 0C067674 mov Rm,Rn */
	r6 = 0x10u;  /* 0C067676 mov #imm,Rn */
	IF(0x0C067678u); { u32 t_ = r13; PR = 0x0C06767Cu; r7 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C060840, 0x0C060840u, 0x0C06767Cu); }  /* 0C067678 jsr @Rn */
L_0C06767C: BLKS(0x0C06767Cu);
	T = (r0 & r0) == 0;  /* 0C06767C tst Rm,Rn */
	if (T) { UPD(0x0C06764Cu, 4); goto L_0C06764C; }  /* 0C06767E bt */
L_0C067680: BLKS(0x0C067680u);
	r0 = 0x10u;  /* 0C067680 mov #imm,Rn */
	r8 += 0x2Bu;  /* 0C067682 add #imm,Rn */
	W8(r9, r0); UPD(0x0C067686u, 3);  /* 0C067684 mov.b Rm,@Rn */
	W8(r8, r10); UPD(0x0C067688u, 1);  /* 0C067686 mov.b Rm,@Rn */
	r4 = r12;  /* 0C067688 mov Rm,Rn */
	UPD(0x0C06768Au, 1);
L_0C06768A: BLKS(0x0C06768Au);
	r5 = r11;  /* 0C06768A mov Rm,Rn */
	r6 = 0x1u;  /* 0C06768C mov #imm,Rn */
	IF(0x0C06768Eu); { u32 t_ = r13; PR = 0x0C067692u; r7 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C060840, 0x0C060840u, 0x0C067692u); }  /* 0C06768E jsr @Rn */
L_0C067692: BLKS(0x0C067692u);
	T = (r0 & r0) == 0;  /* 0C067692 tst Rm,Rn */
	if (T) { UPD(0x0C06764Cu, 4); goto L_0C06764C; }  /* 0C067694 bt */
L_0C067696: BLKS(0x0C067696u);
	r7 = 0x30u;  /* 0C067696 mov #imm,Rn */
	r0 = 0x90u; UPD(0x0C06769Au, 2);  /* 0C067698 mov.w @(disp,pc),Rn */
	IF(0x0C06769Au); MACL = r12 * r0;  /* 0C06769A mul.l Rm,Rn */
	r5 = 0xC27DC84u; UPD(0x0C06769Eu, 3);  /* 0C06769C mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C06769E mov #imm,Rn */
	IF(0x0C0676A0u); r13 = MACL;  /* 0C0676A0 sts macl,Rn */
	W32(r14, r13); UPD(0x0C0676A4u, 3);  /* 0C0676A2 mov.l Rm,@Rn */
	IF(0x0C0676A4u); MACL = r11 * r7;  /* 0C0676A4 mul.l Rm,Rn */
	r3 = R32(r14); UPD(0x0C0676A8u, 3);  /* 0C0676A6 mov.l @Rm,Rn */
	r1 = 0x7u;  /* 0C0676A8 mov #imm,Rn */
	IF(0x0C0676AAu); r6 = MACL;  /* 0C0676AA sts macl,Rn */
	r3 += r6;  /* 0C0676AC add Rm,Rn */
	r3 += r5;  /* 0C0676AE add Rm,Rn */
	r4 = r3;  /* 0C0676B0 mov Rm,Rn */
	r4 += 0x2Au;  /* 0C0676B2 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C0676B6u, 7);  /* 0C0676B4 mov.b @Rm,Rn */
	r3 += 0x2Bu;  /* 0C0676B6 add #imm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0676B8 add #imm,Rn */
	W8(r4, r0); UPD(0x0C0676BCu, 3);  /* 0C0676BA mov.b Rm,@Rn */
	T = (r11 & r11) == 0;  /* 0C0676BC tst Rm,Rn */
	W8(r3, r2); UPD(0x0C0676C0u, 2);  /* 0C0676BE mov.b Rm,@Rn */
	r0 &= r1;  /* 0C0676C0 and Rm,Rn */
	r10 = 0xC1704FEu; UPD(0x0C0676C4u, 2);  /* 0C0676C2 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFD5u;  /* 0C0676C4 add #imm,Rn */
	r0 += r0;  /* 0C0676C6 add Rm,Rn */
	W32(r14, r3); UPD(0x0C0676CAu, 3);  /* 0C0676C8 mov.l Rm,@Rn */
	{ u32 c_ = T; IF(0x0C0676CCu); r13 = (u32)(s32)(s16)R16(r0 + r10); /* slot mov.w @(r0,Rm),Rn */ if (c_) { UPD(0x0C0676D2u, 3); goto L_0C0676D2; } UPD(0x0C0676CEu, 1); goto L_0C0676CE; }  /* 0C0676CA bt/s */
L_0C0676CE: BLKS(0x0C0676CEu);
	r8 = 0u - r13;  /* 0C0676CE neg Rm,Rn */
	r13 = (u32)(s32)(s16)r8;  /* 0C0676D0 exts.w Rm,Rn */
	UPD(0x0C0676D2u, 2);
L_0C0676D2: BLKS(0x0C0676D2u);
	r8 = 0x9C0u; UPD(0x0C0676D4u, 1);  /* 0C0676D2 mov.w @(disp,pc),Rn */
	r4 = 0x34u;  /* 0C0676D4 mov #imm,Rn */
	IF(0x0C0676D6u); MACL = r12 * r8;  /* 0C0676D6 mul.l Rm,Rn */
	r0 = 0x340u; UPD(0x0C0676DAu, 4);  /* 0C0676D8 mov.w @(disp,pc),Rn */
	IF(0x0C0676DAu); r8 = MACL;  /* 0C0676DA sts macl,Rn */
	r2 = 0xC2755BCu; UPD(0x0C0676DEu, 2);  /* 0C0676DC mov.l @(disp,pc),Rn */
	IF(0x0C0676DEu); MACL = r11 * r0;  /* 0C0676DE mul.l Rm,Rn */
	r5 = R32(r14); UPD(0x0C0676E2u, 3);  /* 0C0676E0 mov.l @Rm,Rn */
	r12 += 0x5u;  /* 0C0676E2 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r2); UPD(0x0C0676E6u, 2);  /* 0C0676E4 mov.w @Rm,Rn */
	IF(0x0C0676E6u); r6 = MACL;  /* 0C0676E6 sts macl,Rn */
	r5 += 0x24u;  /* 0C0676E8 add #imm,Rn */
	IF(0x0C0676EAu); MACL = r9 * r4;  /* 0C0676EA mul.l Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r5); UPD(0x0C0676EEu, 5);  /* 0C0676EC mov.w @Rm,Rn */
	r0 = r8;  /* 0C0676EE mov Rm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0676F2u, 2);  /* 0C0676F0 mov.l Rm,@(disp,Rn) */
	r10 += r13;  /* 0C0676F2 add Rm,Rn */
	IF(0x0C0676F4u); r7 = MACL;  /* 0C0676F4 sts macl,Rn */
	r13 = (u32)(s32)(s16)r10;  /* 0C0676F6 exts.w Rm,Rn */
	r8 += r7;  /* 0C0676F8 add Rm,Rn */
	r5 = 0xC21F8A0u; UPD(0x0C0676FCu, 5);  /* 0C0676FA mov.l @(disp,pc),Rn */
	r0 += r6;  /* 0C0676FC add Rm,Rn */
	r10 = 0xC050D70u; UPD(0x0C067700u, 2);  /* 0C0676FE mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C067700 add Rm,Rn */
	r3 = 0xC8800000u; UPD(0x0C067704u, 2);  /* 0C067702 mov.l @(disp,pc),Rn */
	r0 += r7;  /* 0C067704 add Rm,Rn */
	r8 += r5;  /* 0C067706 add Rm,Rn */
	IF(0x0C067708u); W32(r0 + r5, r3); UPD(0x0C06770Au, 3);  /* 0C067708 mov.l Rm,@(r0,Rn) */
	r4 = 0x4u;  /* 0C06770A mov #imm,Rn */
	IF(0x0C06770Cu); { u32 t_ = r10; PR = 0x0C067710u; W32(r8 + 0x4u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C067710u); }  /* 0C06770C jsr @Rn */
L_0C067710: BLKS(0x0C067710u);
	r0 += 0x20u;  /* 0C067710 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C067714u, 2);  /* 0C067712 mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C067714 mov Rm,Rn */
	r0 = r13;  /* 0C067716 mov Rm,Rn */
	r0 += 0x8u;  /* 0C067718 add #imm,Rn */
	IF(0x0C06771Au); r0 >>= 2;  /* 0C06771A shlr2 Rn */
	IF(0x0C06771Cu); r0 >>= 2;  /* 0C06771C shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C06771E and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C067722u, 7);  /* 0C067720 mov.l Rm,@(disp,Rn) */
	r8 += 0x2Cu;  /* 0C067722 add #imm,Rn */
	W16(r8, r13); UPD(0x0C067726u, 2);  /* 0C067724 mov.w Rm,@Rn */
	r11 = 0x70000u; UPD(0x0C067728u, 1);  /* 0C067726 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFD4u;  /* 0C067728 add #imm,Rn */
	W32(r8 + 0x20u, r11); UPD(0x0C06772Cu, 2);  /* 0C06772A mov.l Rm,@(disp,Rn) */
	r11 = 0xC058060u; UPD(0x0C06772Eu, 1);  /* 0C06772C mov.l @(disp,pc),Rn */
	r5 = 0xC0000u; UPD(0x0C067730u, 1);  /* 0C06772E mov.l @(disp,pc),Rn */
	IF(0x0C067730u); { u32 t_ = r11; PR = 0x0C067734u; r12 += 0xFFFFFFFBu; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C067734u); }  /* 0C067730 jsr @Rn */
L_0C067734: BLKS(0x0C067734u);
	r9 = R32(r14); UPD(0x0C067736u, 1);  /* 0C067734 mov.l @Rm,Rn */
	r10 = R32(r9 + 0x14u); UPD(0x0C067738u, 1);  /* 0C067736 mov.l @(disp,Rm),Rn */
	r9 = 0xFFFC0000u; UPD(0x0C06773Au, 1);  /* 0C067738 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C06773A add Rm,Rn */
	r10 += r9;  /* 0C06773C add Rm,Rn */
	W32(r8 + 0x10u, r10); UPD(0x0C067740u, 3);  /* 0C06773E mov.l Rm,@(disp,Rn) */
	r10 = 0xC058030u; UPD(0x0C067742u, 1);  /* 0C067740 mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C067744u, 1);  /* 0C067742 mov.l @(disp,pc),Rn */
	IF(0x0C067744u); { u32 t_ = r10; PR = 0x0C067748u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C067748u); }  /* 0C067744 jsr @Rn */
L_0C067748: BLKS(0x0C067748u);
	r1 = R32(r14); UPD(0x0C06774Au, 1);  /* 0C067748 mov.l @Rm,Rn */
	r4 = R32(r1 + 0x18u); UPD(0x0C06774Cu, 1);  /* 0C06774A mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C06774C add Rm,Rn */
	W32(r8 + 0x14u, r4); UPD(0x0C067750u, 2);  /* 0C06774E mov.l Rm,@(disp,Rn) */
	r5 = 0x70000u; UPD(0x0C067752u, 1);  /* 0C067750 mov.l @(disp,pc),Rn */
	IF(0x0C067752u); { u32 t_ = r11; PR = 0x0C067756u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C067756u); }  /* 0C067752 jsr @Rn */
L_0C067756: BLKS(0x0C067756u);
	r4 = r13;  /* 0C067756 mov Rm,Rn */
	r5 = 0x70000u; UPD(0x0C06775Au, 2);  /* 0C067758 mov.l @(disp,pc),Rn */
	IF(0x0C06775Au); { u32 t_ = r10; PR = 0x0C06775Eu; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06775Eu); }  /* 0C06775A jsr @Rn */
L_0C06775E: BLKS(0x0C06775Eu);
	r2 = 0x217FF00u; UPD(0x0C067760u, 1);  /* 0C06775E mov.l @(disp,pc),Rn */
	r4 = 0x14u;  /* 0C067760 mov #imm,Rn */
	r3 = 0x808080u; UPD(0x0C067764u, 2);  /* 0C067762 mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C067766u, 1);  /* 0C067764 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r3); UPD(0x0C067768u, 1);  /* 0C067766 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x1Cu, r0); UPD(0x0C06776Au, 1);  /* 0C067768 mov.l Rm,@(disp,Rn) */
	r13 = 0xC060350u; UPD(0x0C06776Cu, 1);  /* 0C06776A mov.l @(disp,pc),Rn */
	r8 += 0x30u;  /* 0C06776C add #imm,Rn */
	r0 = 0x0u;  /* 0C06776E mov #imm,Rn */
	IF(0x0C067770u); { u32 t_ = r13; PR = 0x0C067774u; W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 4); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C067774u); }  /* 0C067770 jsr @Rn */
L_0C067774: BLKS(0x0C067774u);
	r8 = 0xC0AFBA0u; UPD(0x0C067776u, 1);  /* 0C067774 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C067776 mov Rm,Rn */
	r13 = 0xC0AFE40u; UPD(0x0C06777Au, 2);  /* 0C067778 mov.l @(disp,pc),Rn */
	IF(0x0C06777Au); { u32 t_ = r8; PR = 0x0C06777Eu; r5 = 0x52u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C06777Eu); }  /* 0C06777A jsr @Rn */
L_0C06777E: BLKS(0x0C06777Eu);
	IF(0x0C06777Eu); { u32 t_ = r13; PR = 0x0C067782u; IF(0x0C067780u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C067782u); }  /* 0C06777E jsr @Rn */
L_0C067782: BLKS(0x0C067782u);
	r7 = R32(r14 + 0x4u); UPD(0x0C067784u, 1);  /* 0C067782 mov.l @(disp,Rm),Rn */
	r0 &= 0x1Fu;  /* 0C067784 and #imm,r0 */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C067788u, 2);  /* 0C067786 mov.w @Rm,Rn */
	r15 += 0xFFFFFFF0u;  /* 0C067788 add #imm,Rn */
	r5 = 0xF0u; UPD(0x0C06778Cu, 2);  /* 0C06778A mov.w @(disp,pc),Rn */
	r0 += r6;  /* 0C06778C add Rm,Rn */
	r0 += r5;  /* 0C06778E add Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C067790 exts.w Rm,Rn */
	r5 = 0x60000u; UPD(0x0C067794u, 4);  /* 0C067792 mov.l @(disp,pc),Rn */
	IF(0x0C067794u); { u32 t_ = r11; PR = 0x0C067798u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C067798u); }  /* 0C067794 jsr @Rn */
L_0C067798: BLKS(0x0C067798u);
	r4 = R32(r14); UPD(0x0C06779Au, 1);  /* 0C067798 mov.l @Rm,Rn */
	r8 = R32(r4 + 0x14u); UPD(0x0C06779Cu, 1);  /* 0C06779A mov.l @(disp,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C06779Eu, 1);  /* 0C06779C mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C06779E add Rm,Rn */
	IF(0x0C0677A0u); { u32 t_ = r10; PR = 0x0C0677A4u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0677A4u); }  /* 0C0677A0 jsr @Rn */
L_0C0677A4: BLKS(0x0C0677A4u);
	r1 = R32(r14); UPD(0x0C0677A6u, 1);  /* 0C0677A4 mov.l @Rm,Rn */
	r2 = 0x0u;  /* 0C0677A6 mov #imm,Rn */
	r12 = R32(r1 + 0x18u); UPD(0x0C0677AAu, 2);  /* 0C0677A8 mov.l @(disp,Rm),Rn */
	r3 = 0x14u;  /* 0C0677AA mov #imm,Rn */
	r5 = 0x18000u; UPD(0x0C0677AEu, 2);  /* 0C0677AC mov.l @(disp,pc),Rn */
	r12 += r0;  /* 0C0677AE add Rm,Rn */
	W32(r15, r2); UPD(0x0C0677B2u, 2);  /* 0C0677B0 mov.l Rm,@Rn */
	r4 = r13;  /* 0C0677B2 mov Rm,Rn */
	IF(0x0C0677B4u); { u32 t_ = r11; PR = 0x0C0677B8u; W32(r15 + 0x4u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0677B8u); }  /* 0C0677B4 jsr @Rn */
L_0C0677B8: BLKS(0x0C0677B8u);
	r8 += r9;  /* 0C0677B8 add Rm,Rn */
	r4 = r13;  /* 0C0677BA mov Rm,Rn */
	r5 = 0x20000u; UPD(0x0C0677BEu, 3);  /* 0C0677BC mov.l @(disp,pc),Rn */
	IF(0x0C0677BEu); { u32 t_ = r10; PR = 0x0C0677C2u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0677C2u); }  /* 0C0677BE jsr @Rn */
L_0C0677C2: BLKS(0x0C0677C2u);
	r11 = 0xC0AC540u; UPD(0x0C0677C4u, 1);  /* 0C0677C2 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0677C4 mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0677C8u, 2);  /* 0C0677C6 mov.l Rm,@(disp,Rn) */
	r6 = r8;  /* 0C0677C8 mov Rm,Rn */
	r9 = R32(r14); UPD(0x0C0677CCu, 2);  /* 0C0677CA mov.l @Rm,Rn */
	r7 = r12;  /* 0C0677CC mov Rm,Rn */
	IF(0x0C0677CEu); { u32 t_ = r11; PR = 0x0C0677D2u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AC540, 0x0C0AC540u, 0x0C0677D2u); }  /* 0C0677CE jsr @Rn */
L_0C0677D2: BLKS(0x0C0677D2u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C06764Eu, 3); goto L_0C06764E; }  /* 0C0677D2 bra */
L_0C067850: BLKS(0x0C067850u);
	r9 += 0x2Bu;  /* 0C067850 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r9); UPD(0x0C067854u, 2);  /* 0C067852 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C067854 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C067856 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C067858 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r9, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0677D2u, 6); goto L_0C0677D2; } UPD(0x0C06785Eu, 1); goto L_0C06785E; }  /* 0C06785A bf/s */
L_0C06785E: BLKS(0x0C06785Eu);
	r13 = 0xC060840u; UPD(0x0C067860u, 1);  /* 0C06785E mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C06768Au, 3); goto L_0C06768A; }  /* 0C067860 bra */
L_0C067A20: BLKS(0x0C067A20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C067A22u, 1);  /* 0C067A20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C067A24u, 1);  /* 0C067A22 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C067A24 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067A28u, 2);  /* 0C067A26 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C067A28 exts.w Rm,Rn */
	r0 = 0xC066A20u; UPD(0x0C067A2Cu, 2);  /* 0C067A2A mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C067A2C mov Rm,Rn */
	IF(0x0C067A2Eu); r15 -= 4; W32(r15, PR); UPD(0x0C067A30u, 2);  /* 0C067A2E sts.l pr,@-Rn */
	r5 = r9;  /* 0C067A30 mov Rm,Rn */
	IF(0x0C067A32u); { u32 t_ = r0; PR = 0x0C067A36u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C066A20, 0x0C066A20u, 0x0C067A36u); }  /* 0C067A32 jsr @Rn */
L_0C067A36: BLKS(0x0C067A36u);
	r0 = 0xC067600u; UPD(0x0C067A38u, 1);  /* 0C067A36 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C067A38 mov Rm,Rn */
	r5 = r9;  /* 0C067A3A mov Rm,Rn */
	r15 = r14;  /* 0C067A3C mov Rm,Rn */
	IF(0x0C067A3Eu); PR = R32(r15); r15 += 4; UPD(0x0C067A40u, 4);  /* 0C067A3E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067A42u, 1);  /* 0C067A40 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C067A44u, 1);  /* 0C067A42 mov.l @Rm+,Rn */
	IF(0x0C067A44u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C067600u: goto L_0C067600; default: JUMPD(tv_); } }  /* 0C067A44 jmp @Rn */
}

void f_0C067A50(sh3_t *c)
{
	LOCALS;
L_0C067A50: BLKS(0x0C067A50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C067A52u, 1);  /* 0C067A50 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C067A54u, 1);  /* 0C067A52 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C067A54 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067A58u, 2);  /* 0C067A56 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C067A58 exts.w Rm,Rn */
	r7 = 0xC066A20u; UPD(0x0C067A5Cu, 2);  /* 0C067A5A mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C067A5C mov Rm,Rn */
	IF(0x0C067A5Eu); r15 -= 4; W32(r15, PR); UPD(0x0C067A60u, 2);  /* 0C067A5E sts.l pr,@-Rn */
	r5 = r9;  /* 0C067A60 mov Rm,Rn */
	IF(0x0C067A62u); { u32 t_ = r7; PR = 0x0C067A66u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C066A20, 0x0C066A20u, 0x0C067A66u); }  /* 0C067A62 jsr @Rn */
L_0C067A66: BLKS(0x0C067A66u);
	r6 = 0xC067400u; UPD(0x0C067A68u, 1);  /* 0C067A66 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C067A68 mov Rm,Rn */
	IF(0x0C067A6Au); { u32 t_ = r6; PR = 0x0C067A6Eu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C067400, 0x0C067400u, 0x0C067A6Eu); }  /* 0C067A6A jsr @Rn */
L_0C067A6E: BLKS(0x0C067A6Eu);
	r3 = 0x90u; UPD(0x0C067A70u, 1);  /* 0C067A6E mov.w @(disp,pc),Rn */
	r4 = 0x30u;  /* 0C067A70 mov #imm,Rn */
	IF(0x0C067A72u); MACL = r8 * r3;  /* 0C067A72 mul.l Rm,Rn */
	r0 = 0xC27DC84u; UPD(0x0C067A76u, 4);  /* 0C067A74 mov.l @(disp,pc),Rn */
	IF(0x0C067A76u); r3 = MACL;  /* 0C067A76 sts macl,Rn */
	IF(0x0C067A78u); MACL = r9 * r4;  /* 0C067A78 mul.l Rm,Rn */
	IF(0x0C067A7Au); r2 = MACL;  /* 0C067A7A sts macl,Rn */
	r3 += r2;  /* 0C067A7C add Rm,Rn */
	r3 += r0;  /* 0C067A7E add Rm,Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C067A82u, 7);  /* 0C067A80 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C067A82 add #imm,Rn */
	r0 &= 0x3u;  /* 0C067A84 and #imm,r0 */
	W32(r3 + 0x8u, r0); UPD(0x0C067A88u, 3);  /* 0C067A86 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C067A88 mov Rm,Rn */
	IF(0x0C067A8Au); PR = R32(r15); r15 += 4; UPD(0x0C067A8Cu, 2);  /* 0C067A8A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067A8Eu, 1);  /* 0C067A8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C067A90u, 1);  /* 0C067A8E mov.l @Rm+,Rn */
	IF(0x0C067A90u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C067A90 rts */
}

void f_0C067AB0(sh3_t *c)
{
	LOCALS;
	goto L_0C067AB0;
L_0C067870: BLKS(0x0C067870u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C067872u, 1);  /* 0C067870 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C067874u, 1);  /* 0C067872 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C067876u, 1);  /* 0C067874 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C067878u, 1);  /* 0C067876 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06787Au, 1);  /* 0C067878 mov.l Rm,@-Rn */
	r2 = 0x280u; UPD(0x0C06787Cu, 1);  /* 0C06787A mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C06787C exts.w Rm,Rn */
	IF(0x0C06787Eu); MACL = r12 * r2;  /* 0C06787E mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C067882u, 4);  /* 0C067880 mov.l Rm,@-Rn */
	r4 = 0xC283794u; UPD(0x0C067884u, 1);  /* 0C067882 mov.l @(disp,pc),Rn */
	IF(0x0C067884u); r0 = MACL;  /* 0C067884 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067888u, 2);  /* 0C067886 mov.l Rm,@-Rn */
	r4 += r0;  /* 0C067888 add Rm,Rn */
	IF(0x0C06788Au); r15 -= 4; W32(r15, PR); UPD(0x0C06788Cu, 2);  /* 0C06788A sts.l pr,@-Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C06788C exts.w Rm,Rn */
	r0 = 0x258u; UPD(0x0C067890u, 2);  /* 0C06788E mov.w @(disp,pc),Rn */
	IF(0x0C067890u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C067892u, 1);  /* 0C067890 mov.b @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C067892 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0678B0u, 4); goto L_0C0678B0; } UPD(0x0C067898u, 1); goto L_0C067898; }  /* 0C067894 bf/s */
L_0C067898: BLKS(0x0C067898u);
	r15 = r14;  /* 0C067898 mov Rm,Rn */
	IF(0x0C06789Au); PR = R32(r15); r15 += 4; UPD(0x0C06789Cu, 2);  /* 0C06789A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06789Eu, 1);  /* 0C06789C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0678A0u, 1);  /* 0C06789E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0678A2u, 1);  /* 0C0678A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0678A4u, 1);  /* 0C0678A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0678A6u, 1);  /* 0C0678A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0678A8u, 1);  /* 0C0678A6 mov.l @Rm+,Rn */
	IF(0x0C0678A8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0678A8 rts */
L_0C0678B0: BLKS(0x0C0678B0u);
	r8 = 0xC060840u; UPD(0x0C0678B2u, 1);  /* 0C0678B0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0678B2 mov Rm,Rn */
	r5 = r13;  /* 0C0678B4 mov Rm,Rn */
	r6 = 0x1u;  /* 0C0678B6 mov #imm,Rn */
	IF(0x0C0678B8u); { u32 t_ = r8; PR = 0x0C0678BCu; r7 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C060840, 0x0C060840u, 0x0C0678BCu); }  /* 0C0678B8 jsr @Rn */
L_0C0678BC: BLKS(0x0C0678BCu);
	T = (r0 & r0) == 0;  /* 0C0678BC tst Rm,Rn */
	if (T) { UPD(0x0C067898u, 4); goto L_0C067898; }  /* 0C0678BE bt */
L_0C0678C0: BLKS(0x0C0678C0u);
	r3 = 0x30u;  /* 0C0678C0 mov #imm,Rn */
	r9 = 0x90u; UPD(0x0C0678C4u, 2);  /* 0C0678C2 mov.w @(disp,pc),Rn */
	IF(0x0C0678C4u); MACL = r12 * r9;  /* 0C0678C4 mul.l Rm,Rn */
	r10 = 0xC27DC84u; UPD(0x0C0678C8u, 3);  /* 0C0678C6 mov.l @(disp,pc),Rn */
	IF(0x0C0678C8u); r9 = MACL;  /* 0C0678C8 sts macl,Rn */
	IF(0x0C0678CAu); MACL = r13 * r3;  /* 0C0678CA mul.l Rm,Rn */
	r7 = 0xC050D70u; UPD(0x0C0678CEu, 4);  /* 0C0678CC mov.l @(disp,pc),Rn */
	IF(0x0C0678CEu); r4 = MACL;  /* 0C0678CE sts macl,Rn */
	r9 += r4;  /* 0C0678D0 add Rm,Rn */
	r9 += r10;  /* 0C0678D2 add Rm,Rn */
	r10 = r9;  /* 0C0678D4 mov Rm,Rn */
	r10 += 0x24u;  /* 0C0678D6 add #imm,Rn */
	IF(0x0C0678D8u); { u32 t_ = r7; PR = 0x0C0678DCu; r4 = 0x1Fu; /* slot mov #imm,Rn */ UPD(t_, 7); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0678DCu); }  /* 0C0678D8 jsr @Rn */
L_0C0678DC: BLKS(0x0C0678DCu);
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C0678DEu, 1);  /* 0C0678DC mov.w @Rm,Rn */
	r5 = 0x34u;  /* 0C0678DE mov #imm,Rn */
	r8 = 0x9C0u; UPD(0x0C0678E2u, 2);  /* 0C0678E0 mov.w @(disp,pc),Rn */
	r0 += r11;  /* 0C0678E2 add Rm,Rn */
	IF(0x0C0678E4u); MACL = r12 * r8;  /* 0C0678E4 mul.l Rm,Rn */
	r0 += 0xFFFFFFF1u;  /* 0C0678E6 add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C0678E8 exts.w Rm,Rn */
	r0 = 0x340u; UPD(0x0C0678ECu, 6);  /* 0C0678EA mov.w @(disp,pc),Rn */
	IF(0x0C0678ECu); r8 = MACL;  /* 0C0678EC sts macl,Rn */
	IF(0x0C0678EEu); MACL = r13 * r0;  /* 0C0678EE mul.l Rm,Rn */
	r2 = 0xC2755BCu; UPD(0x0C0678F2u, 4);  /* 0C0678F0 mov.l @(disp,pc),Rn */
	r11 += 0x4u;  /* 0C0678F2 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r2); UPD(0x0C0678F6u, 2);  /* 0C0678F4 mov.w @Rm,Rn */
	IF(0x0C0678F6u); r7 = MACL;  /* 0C0678F6 sts macl,Rn */
	IF(0x0C0678F8u); MACL = r6 * r5;  /* 0C0678F8 mul.l Rm,Rn */
	r0 = r8;  /* 0C0678FA mov Rm,Rn */
	r0 += r7;  /* 0C0678FC add Rm,Rn */
	IF(0x0C0678FEu); r3 = MACL;  /* 0C0678FE sts macl,Rn */
	r4 = 0xC21F8A0u; UPD(0x0C067902u, 7);  /* 0C067900 mov.l @(disp,pc),Rn */
	r0 += r3;  /* 0C067902 add Rm,Rn */
	r13 = 0xC8000000u; UPD(0x0C067906u, 2);  /* 0C067904 mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C067906 add Rm,Rn */
	r5 = 0xC050D70u; UPD(0x0C06790Au, 2);  /* 0C067908 mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C06790A add Rm,Rn */
	IF(0x0C06790Cu); W32(r0 + r4, r13); UPD(0x0C06790Eu, 2);  /* 0C06790C mov.l Rm,@(r0,Rn) */
	r6 = 0x4u;  /* 0C06790E mov #imm,Rn */
	r8 += r4;  /* 0C067910 add Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C067914u, 3);  /* 0C067912 mov.l Rm,@(disp,Rn) */
	IF(0x0C067914u); { u32 t_ = r5; PR = 0x0C067918u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C067918u); }  /* 0C067914 jsr @Rn */
L_0C067918: BLKS(0x0C067918u);
	r0 += 0x1u;  /* 0C067918 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C06791Cu, 2);  /* 0C06791A mov.l Rm,@(disp,Rn) */
	r0 = r11;  /* 0C06791C mov Rm,Rn */
	IF(0x0C06791Eu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06791E shar Rn */
	IF(0x0C067920u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C067920 shar Rn */
	IF(0x0C067922u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C067922 shar Rn */
	r0 &= 0x3Fu;  /* 0C067924 and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C067928u, 6);  /* 0C067926 mov.l Rm,@(disp,Rn) */
	r11 += 0xFFFFFFFCu;  /* 0C067928 add #imm,Rn */
	r8 += 0x2Cu;  /* 0C06792A add #imm,Rn */
	W16(r8, r11); UPD(0x0C06792Eu, 3);  /* 0C06792C mov.w Rm,@Rn */
	r13 = (u32)(s32)(s16)R16(r10); UPD(0x0C067930u, 1);  /* 0C06792E mov.w @Rm,Rn */
	r8 += 0xFFFFFFD4u;  /* 0C067930 add #imm,Rn */
	r4 = r13 & 0xFFFF;  /* 0C067932 extu.w Rm,Rn */
	r13 = 0xC058060u; UPD(0x0C067936u, 3);  /* 0C067934 mov.l @(disp,pc),Rn */
	r2 = 0x80000u; UPD(0x0C067938u, 1);  /* 0C067936 mov.l @(disp,pc),Rn */
	r5 = 0xC0000u; UPD(0x0C06793Au, 1);  /* 0C067938 mov.l @(disp,pc),Rn */
	IF(0x0C06793Au); { u32 t_ = r13; PR = 0x0C06793Eu; W32(r8 + 0x20u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06793Eu); }  /* 0C06793A jsr @Rn */
L_0C06793E: BLKS(0x0C06793Eu);
	r3 = R32(r9 + 0x14u); UPD(0x0C067940u, 1);  /* 0C06793E mov.l @(disp,Rm),Rn */
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C067942u, 1);  /* 0C067940 mov.w @Rm,Rn */
	r3 += r0;  /* 0C067942 add Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C067946u, 2);  /* 0C067944 mov.l @(disp,pc),Rn */
	r4 = r1 & 0xFFFF;  /* 0C067946 extu.w Rm,Rn */
	r0 = 0xFFFD0000u; UPD(0x0C06794Au, 2);  /* 0C067948 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C06794A add Rm,Rn */
	r5 = 0x100000u; UPD(0x0C06794Eu, 2);  /* 0C06794C mov.l @(disp,pc),Rn */
	IF(0x0C06794Eu); { u32 t_ = r10; PR = 0x0C067952u; W32(r8 + 0x10u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C067952u); }  /* 0C06794E jsr @Rn */
L_0C067952: BLKS(0x0C067952u);
	r4 = R32(r9 + 0x18u); UPD(0x0C067954u, 1);  /* 0C067952 mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C067954 add Rm,Rn */
	W32(r8 + 0x14u, r4); UPD(0x0C067958u, 2);  /* 0C067956 mov.l Rm,@(disp,Rn) */
	r5 = 0x80000u; UPD(0x0C06795Au, 1);  /* 0C067958 mov.l @(disp,pc),Rn */
	IF(0x0C06795Au); { u32 t_ = r13; PR = 0x0C06795Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06795Eu); }  /* 0C06795A jsr @Rn */
L_0C06795E: BLKS(0x0C06795Eu);
	r4 = r11;  /* 0C06795E mov Rm,Rn */
	r5 = 0x80000u; UPD(0x0C067962u, 2);  /* 0C067960 mov.l @(disp,pc),Rn */
	IF(0x0C067962u); { u32 t_ = r10; PR = 0x0C067966u; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C067966u); }  /* 0C067962 jsr @Rn */
L_0C067966: BLKS(0x0C067966u);
	r6 = 0x808080u; UPD(0x0C067968u, 1);  /* 0C067966 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C067968 mov #imm,Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C06796Cu, 2);  /* 0C06796A mov.l Rm,@(disp,Rn) */
	r4 = 0x28u;  /* 0C06796C mov #imm,Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C067970u, 2);  /* 0C06796E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x1Cu, r0); UPD(0x0C067972u, 1);  /* 0C067970 mov.l Rm,@(disp,Rn) */
	r9 = 0xC060350u; UPD(0x0C067974u, 1);  /* 0C067972 mov.l @(disp,pc),Rn */
	r8 += 0x2Eu;  /* 0C067974 add #imm,Rn */
	r5 = 0xC0u; UPD(0x0C067978u, 2);  /* 0C067976 mov.w @(disp,pc),Rn */
	IF(0x0C067978u); { u32 t_ = r9; PR = 0x0C06797Cu; W16(r8, r5); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C06797Cu); }  /* 0C067978 jsr @Rn */
L_0C06797C: BLKS(0x0C06797Cu);
	r3 = 0xC0AFBA0u; UPD(0x0C06797Eu, 1);  /* 0C06797C mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C06797E mov Rm,Rn */
	r5 = 0x4Fu;  /* 0C067980 mov #imm,Rn */
	r15 = r14;  /* 0C067982 mov Rm,Rn */
	IF(0x0C067984u); PR = R32(r15); r15 += 4; UPD(0x0C067986u, 4);  /* 0C067984 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067988u, 1);  /* 0C067986 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06798Au, 1);  /* 0C067988 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06798Cu, 1);  /* 0C06798A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06798Eu, 1);  /* 0C06798C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C067990u, 1);  /* 0C06798E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C067992u, 1);  /* 0C067990 mov.l @Rm+,Rn */
	IF(0x0C067992u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFBA0u: TAIL(f_0C0AFBA0); default: JUMPD(tv_); } }  /* 0C067992 jmp @Rn */
L_0C067AB0: BLKS(0x0C067AB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C067AB2u, 1);  /* 0C067AB0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C067AB4u, 1);  /* 0C067AB2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C067AB4 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067AB8u, 2);  /* 0C067AB6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C067AB8 exts.w Rm,Rn */
	r0 = 0xC066A20u; UPD(0x0C067ABCu, 2);  /* 0C067ABA mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C067ABC mov Rm,Rn */
	IF(0x0C067ABEu); r15 -= 4; W32(r15, PR); UPD(0x0C067AC0u, 2);  /* 0C067ABE sts.l pr,@-Rn */
	r5 = r9;  /* 0C067AC0 mov Rm,Rn */
	IF(0x0C067AC2u); { u32 t_ = r0; PR = 0x0C067AC6u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C066A20, 0x0C066A20u, 0x0C067AC6u); }  /* 0C067AC2 jsr @Rn */
L_0C067AC6: BLKS(0x0C067AC6u);
	r0 = 0xC067870u; UPD(0x0C067AC8u, 1);  /* 0C067AC6 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C067AC8 mov Rm,Rn */
	r5 = r9;  /* 0C067ACA mov Rm,Rn */
	r15 = r14;  /* 0C067ACC mov Rm,Rn */
	IF(0x0C067ACEu); PR = R32(r15); r15 += 4; UPD(0x0C067AD0u, 4);  /* 0C067ACE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067AD2u, 1);  /* 0C067AD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C067AD4u, 1);  /* 0C067AD2 mov.l @Rm+,Rn */
	IF(0x0C067AD4u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C067870u: goto L_0C067870; default: JUMPD(tv_); } }  /* 0C067AD4 jmp @Rn */
}

void f_0C067AE0(sh3_t *c)
{
	LOCALS;
	goto L_0C067AE0;
L_0C066CC0: BLKS(0x0C066CC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066CC2u, 1);  /* 0C066CC0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C066CC4u, 1);  /* 0C066CC2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C066CC6u, 1);  /* 0C066CC4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C066CC8u, 1);  /* 0C066CC6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C066CC8 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C066CCCu, 2);  /* 0C066CCA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C066CCEu, 1);  /* 0C066CCC mov.l Rm,@-Rn */
	r2 = 0x280u; UPD(0x0C066CD0u, 1);  /* 0C066CCE mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C066CD0 exts.w Rm,Rn */
	IF(0x0C066CD2u); MACL = r13 * r2;  /* 0C066CD2 mul.l Rm,Rn */
	r4 = 0xC283794u; UPD(0x0C066CD6u, 4);  /* 0C066CD4 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C066CD8u, 1);  /* 0C066CD6 mov.l Rm,@-Rn */
	IF(0x0C066CD8u); r0 = MACL;  /* 0C066CD8 sts macl,Rn */
	r4 += r0;  /* 0C066CDA add Rm,Rn */
	IF(0x0C066CDCu); r15 -= 4; W32(r15, PR); UPD(0x0C066CDEu, 3);  /* 0C066CDC sts.l pr,@-Rn */
	r0 = 0x258u; UPD(0x0C066CE0u, 1);  /* 0C066CDE mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C066CE0 add #imm,Rn */
	IF(0x0C066CE2u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C066CE4u, 2);  /* 0C066CE2 mov.b @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C066CE4 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066D00u, 4); goto L_0C066D00; } UPD(0x0C066CEAu, 1); goto L_0C066CEA; }  /* 0C066CE6 bf/s */
L_0C066CEA: BLKS(0x0C066CEAu);
	r14 += 0x4u;  /* 0C066CEA add #imm,Rn */
	UPD(0x0C066CECu, 1);
L_0C066CEC: BLKS(0x0C066CECu);
	r15 = r14;  /* 0C066CEC mov Rm,Rn */
	IF(0x0C066CEEu); PR = R32(r15); r15 += 4; UPD(0x0C066CF0u, 2);  /* 0C066CEE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C066CF2u, 1);  /* 0C066CF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C066CF4u, 1);  /* 0C066CF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C066CF6u, 1);  /* 0C066CF4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C066CF8u, 1);  /* 0C066CF6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C066CFAu, 1);  /* 0C066CF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C066CFCu, 1);  /* 0C066CFA mov.l @Rm+,Rn */
	IF(0x0C066CFCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C066CFC rts */
L_0C066D00: BLKS(0x0C066D00u);
	r8 = 0xC060840u; UPD(0x0C066D02u, 1);  /* 0C066D00 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C066D02 mov Rm,Rn */
	r5 = r10;  /* 0C066D04 mov Rm,Rn */
	r6 = 0x1u;  /* 0C066D06 mov #imm,Rn */
	IF(0x0C066D08u); { u32 t_ = r8; PR = 0x0C066D0Cu; r7 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C060840, 0x0C060840u, 0x0C066D0Cu); }  /* 0C066D08 jsr @Rn */
L_0C066D0C: BLKS(0x0C066D0Cu);
	T = (r0 & r0) == 0;  /* 0C066D0C tst Rm,Rn */
	if (T) { UPD(0x0C066CEAu, 4); goto L_0C066CEA; }  /* 0C066D0E bt */
L_0C066D10: BLKS(0x0C066D10u);
	r6 = 0x30u;  /* 0C066D10 mov #imm,Rn */
	r11 = 0x90u; UPD(0x0C066D14u, 2);  /* 0C066D12 mov.w @(disp,pc),Rn */
	IF(0x0C066D14u); MACL = r13 * r11;  /* 0C066D14 mul.l Rm,Rn */
	r8 = 0x9C0u; UPD(0x0C066D18u, 3);  /* 0C066D16 mov.w @(disp,pc),Rn */
	r7 = 0x34u;  /* 0C066D18 mov #imm,Rn */
	IF(0x0C066D1Au); r11 = MACL;  /* 0C066D1A sts macl,Rn */
	IF(0x0C066D1Cu); MACL = r10 * r6;  /* 0C066D1C mul.l Rm,Rn */
	r0 = 0x340u; UPD(0x0C066D20u, 5);  /* 0C066D1E mov.w @(disp,pc),Rn */
	IF(0x0C066D20u); r4 = MACL;  /* 0C066D20 sts macl,Rn */
	IF(0x0C066D22u); MACL = r13 * r8;  /* 0C066D22 mul.l Rm,Rn */
	r2 = 0xC2755BCu; UPD(0x0C066D26u, 4);  /* 0C066D24 mov.l @(disp,pc),Rn */
	r11 += r4;  /* 0C066D26 add Rm,Rn */
	IF(0x0C066D28u); r8 = MACL;  /* 0C066D28 sts macl,Rn */
	IF(0x0C066D2Au); MACL = r10 * r0;  /* 0C066D2A mul.l Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C066D2Eu, 5);  /* 0C066D2C mov.w @Rm,Rn */
	r13 += 0x7u;  /* 0C066D2E add #imm,Rn */
	IF(0x0C066D30u); r6 = MACL;  /* 0C066D30 sts macl,Rn */
	IF(0x0C066D32u); MACL = r3 * r7;  /* 0C066D32 mul.l Rm,Rn */
	r12 = 0xC27DC84u; UPD(0x0C066D36u, 5);  /* 0C066D34 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C066D36 mov Rm,Rn */
	IF(0x0C066D38u); r3 = MACL;  /* 0C066D38 sts macl,Rn */
	r0 += r6;  /* 0C066D3A add Rm,Rn */
	r4 = 0xC21F8A0u; UPD(0x0C066D3Eu, 4);  /* 0C066D3C mov.l @(disp,pc),Rn */
	r11 += r12;  /* 0C066D3E add Rm,Rn */
	r5 = 0xC8000000u; UPD(0x0C066D42u, 2);  /* 0C066D40 mov.l @(disp,pc),Rn */
	r0 += r3;  /* 0C066D42 add Rm,Rn */
	r8 += r3;  /* 0C066D44 add Rm,Rn */
	r10 = 0xC050D70u; UPD(0x0C066D48u, 3);  /* 0C066D46 mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C066D48 add Rm,Rn */
	IF(0x0C066D4Au); W32(r0 + r4, r5); UPD(0x0C066D4Cu, 2);  /* 0C066D4A mov.l Rm,@(r0,Rn) */
	r9 = r11;  /* 0C066D4C mov Rm,Rn */
	r8 += r4;  /* 0C066D4E add Rm,Rn */
	r9 += 0x24u;  /* 0C066D50 add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r9); UPD(0x0C066D54u, 4);  /* 0C066D52 mov.w @Rm,Rn */
	r4 = 0x4u;  /* 0C066D54 mov #imm,Rn */
	W32(r8 + 0x4u, r13); UPD(0x0C066D58u, 2);  /* 0C066D56 mov.l Rm,@(disp,Rn) */
	r12 += 0x4u;  /* 0C066D58 add #imm,Rn */
	IF(0x0C066D5Au); { u32 t_ = r10; PR = 0x0C066D5Eu; W32(r14, r9); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C066D5Eu); }  /* 0C066D5A jsr @Rn */
L_0C066D5E: BLKS(0x0C066D5Eu);
	r0 += 0x1u;  /* 0C066D5E add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C066D62u, 2);  /* 0C066D60 mov.l Rm,@(disp,Rn) */
	r13 += 0xFFFFFFF9u;  /* 0C066D62 add #imm,Rn */
	r0 = r12;  /* 0C066D64 mov Rm,Rn */
	IF(0x0C066D66u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C066D66 shar Rn */
	IF(0x0C066D68u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C066D68 shar Rn */
	IF(0x0C066D6Au); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C066D6A shar Rn */
	r0 &= 0x3Fu;  /* 0C066D6C and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C066D70u, 7);  /* 0C066D6E mov.l Rm,@(disp,Rn) */
	r12 += 0xFFFFFFFCu;  /* 0C066D70 add #imm,Rn */
	r8 += 0x2Cu;  /* 0C066D72 add #imm,Rn */
	W16(r8, r12); UPD(0x0C066D76u, 3);  /* 0C066D74 mov.w Rm,@Rn */
	r4 = r12;  /* 0C066D76 mov Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C066D7Au, 2);  /* 0C066D78 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFD4u;  /* 0C066D7A add #imm,Rn */
	r9 = 0x70000u; UPD(0x0C066D7Eu, 2);  /* 0C066D7C mov.l @(disp,pc),Rn */
	r5 = 0xD0000u; UPD(0x0C066D80u, 1);  /* 0C066D7E mov.l @(disp,pc),Rn */
	IF(0x0C066D80u); { u32 t_ = r10; PR = 0x0C066D84u; W32(r8 + 0x20u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C066D84u); }  /* 0C066D80 jsr @Rn */
L_0C066D84: BLKS(0x0C066D84u);
	r2 = R32(r11 + 0x14u); UPD(0x0C066D86u, 1);  /* 0C066D84 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C066D86 mov Rm,Rn */
	r7 = 0xC058030u; UPD(0x0C066D8Au, 2);  /* 0C066D88 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C066D8A add Rm,Rn */
	r10 = 0xFFFD0000u; UPD(0x0C066D8Eu, 2);  /* 0C066D8C mov.l @(disp,pc),Rn */
	r5 = 0x120000u; UPD(0x0C066D90u, 1);  /* 0C066D8E mov.l @(disp,pc),Rn */
	r2 += r10;  /* 0C066D90 add Rm,Rn */
	IF(0x0C066D92u); { u32 t_ = r7; PR = 0x0C066D96u; W32(r8 + 0x10u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C066D96u); }  /* 0C066D92 jsr @Rn */
L_0C066D96: BLKS(0x0C066D96u);
	r5 = R32(r11 + 0x18u); UPD(0x0C066D98u, 1);  /* 0C066D96 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C066D98 mov Rm,Rn */
	r6 = 0xC058060u; UPD(0x0C066D9Cu, 2);  /* 0C066D9A mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C066D9C add Rm,Rn */
	W32(r8 + 0x14u, r5); UPD(0x0C066DA0u, 2);  /* 0C066D9E mov.l Rm,@(disp,Rn) */
	IF(0x0C066DA0u); { u32 t_ = r6; PR = 0x0C066DA4u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C066DA4u); }  /* 0C066DA0 jsr @Rn */
L_0C066DA4: BLKS(0x0C066DA4u);
	r3 = 0xC058030u; UPD(0x0C066DA6u, 1);  /* 0C066DA4 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C066DA6 mov Rm,Rn */
	r4 = r12;  /* 0C066DA8 mov Rm,Rn */
	IF(0x0C066DAAu); { u32 t_ = r3; PR = 0x0C066DAEu; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C066DAEu); }  /* 0C066DAA jsr @Rn */
L_0C066DAE: BLKS(0x0C066DAEu);
	W32(r8 + 0x1Cu, r0); UPD(0x0C066DB0u, 1);  /* 0C066DAE mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C066DB0 mov #imm,Rn */
	r0 = 0x808080u; UPD(0x0C066DB4u, 2);  /* 0C066DB2 mov.l @(disp,pc),Rn */
	r4 = 0x32u;  /* 0C066DB4 mov #imm,Rn */
	W32(r8 + 0x24u, r1); UPD(0x0C066DB8u, 2);  /* 0C066DB6 mov.l Rm,@(disp,Rn) */
	r9 = 0xC060350u; UPD(0x0C066DBAu, 1);  /* 0C066DB8 mov.l @(disp,pc),Rn */
	r12 = 0xC0AFBA0u; UPD(0x0C066DBCu, 1);  /* 0C066DBA mov.l @(disp,pc),Rn */
	IF(0x0C066DBCu); { u32 t_ = r9; PR = 0x0C066DC0u; W32(r8 + 0x28u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C066DC0u); }  /* 0C066DBC jsr @Rn */
L_0C066DC0: BLKS(0x0C066DC0u);
	r8 = 0xC0AFE40u; UPD(0x0C066DC2u, 1);  /* 0C066DC0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C066DC2 mov Rm,Rn */
	IF(0x0C066DC4u); { u32 t_ = r12; PR = 0x0C066DC8u; r5 = 0x51u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C066DC8u); }  /* 0C066DC4 jsr @Rn */
L_0C066DC8: BLKS(0x0C066DC8u);
	IF(0x0C066DC8u); { u32 t_ = r8; PR = 0x0C066DCCu; IF(0x0C066DCAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C066DCCu); }  /* 0C066DC8 jsr @Rn */
L_0C066DCC: BLKS(0x0C066DCCu);
	r13 = R32(r14); UPD(0x0C066DCEu, 1);  /* 0C066DCC mov.l @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C066DCE and #imm,r0 */
	r9 = (u32)(s32)(s16)R16(r13); UPD(0x0C066DD2u, 2);  /* 0C066DD0 mov.w @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C066DD2 add #imm,Rn */
	r4 = 0xF0u; UPD(0x0C066DD6u, 2);  /* 0C066DD4 mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C066DD6 add Rm,Rn */
	r2 = 0xC058060u; UPD(0x0C066DDAu, 2);  /* 0C066DD8 mov.l @(disp,pc),Rn */
	r0 += r4;  /* 0C066DDA add Rm,Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C066DDC exts.w Rm,Rn */
	r5 = 0x78000u; UPD(0x0C066DE0u, 3);  /* 0C066DDE mov.l @(disp,pc),Rn */
	IF(0x0C066DE0u); { u32 t_ = r2; PR = 0x0C066DE4u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C066DE4u); }  /* 0C066DE0 jsr @Rn */
L_0C066DE4: BLKS(0x0C066DE4u);
	r12 = 0xC058030u; UPD(0x0C066DE6u, 1);  /* 0C066DE4 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C066DE6 mov Rm,Rn */
	r9 = R32(r11 + 0x14u); UPD(0x0C066DEAu, 2);  /* 0C066DE8 mov.l @(disp,Rm),Rn */
	r5 = 0xA0000u; UPD(0x0C066DECu, 1);  /* 0C066DEA mov.l @(disp,pc),Rn */
	IF(0x0C066DECu); { u32 t_ = r12; PR = 0x0C066DF0u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C066DF0u); }  /* 0C066DEC jsr @Rn */
L_0C066DF0: BLKS(0x0C066DF0u);
	r13 = R32(r11 + 0x18u); UPD(0x0C066DF2u, 1);  /* 0C066DF0 mov.l @(disp,Rm),Rn */
	r9 += r10;  /* 0C066DF2 add Rm,Rn */
	r6 = 0xC058060u; UPD(0x0C066DF6u, 2);  /* 0C066DF4 mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C066DF6 mov #imm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C066DFAu, 2);  /* 0C066DF8 mov.l Rm,@(disp,Rn) */
	r7 = 0x0u;  /* 0C066DFA mov #imm,Rn */
	r10 = 0x10000u; UPD(0x0C066DFEu, 2);  /* 0C066DFC mov.l @(disp,pc),Rn */
	r13 += r0;  /* 0C066DFE add Rm,Rn */
	W32(r15, r7); UPD(0x0C066E02u, 2);  /* 0C066E00 mov.l Rm,@Rn */
	r4 = r8;  /* 0C066E02 mov Rm,Rn */
	IF(0x0C066E04u); { u32 t_ = r6; PR = 0x0C066E08u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C066E08u); }  /* 0C066E04 jsr @Rn */
L_0C066E08: BLKS(0x0C066E08u);
	r3 = 0xC058030u; UPD(0x0C066E0Au, 1);  /* 0C066E08 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C066E0A mov Rm,Rn */
	r5 = r10;  /* 0C066E0C mov Rm,Rn */
	IF(0x0C066E0Eu); { u32 t_ = r3; PR = 0x0C066E12u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C066E12u); }  /* 0C066E0E jsr @Rn */
L_0C066E12: BLKS(0x0C066E12u);
	r1 = 0x808080u; UPD(0x0C066E14u, 1);  /* 0C066E12 mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C066E14 mov Rm,Rn */
	r9 = 0xC0ACA40u; UPD(0x0C066E18u, 2);  /* 0C066E16 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C066E18 mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C066E1Cu, 2);  /* 0C066E1A mov.l Rm,@(disp,Rn) */
	r7 = r13;  /* 0C066E1C mov Rm,Rn */
	W32(r15 + 0x10u, r1); UPD(0x0C066E20u, 2);  /* 0C066E1E mov.l Rm,@(disp,Rn) */
	IF(0x0C066E20u); { u32 t_ = r9; PR = 0x0C066E24u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C066E24u); }  /* 0C066E20 jsr @Rn */
L_0C066E24: BLKS(0x0C066E24u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C066CECu, 3); goto L_0C066CEC; }  /* 0C066E24 bra */
L_0C067AE0: BLKS(0x0C067AE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C067AE2u, 1);  /* 0C067AE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C067AE4u, 1);  /* 0C067AE2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C067AE4 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067AE8u, 2);  /* 0C067AE6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C067AE8 exts.w Rm,Rn */
	r0 = 0xC066A20u; UPD(0x0C067AECu, 2);  /* 0C067AEA mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C067AEC mov Rm,Rn */
	IF(0x0C067AEEu); r15 -= 4; W32(r15, PR); UPD(0x0C067AF0u, 2);  /* 0C067AEE sts.l pr,@-Rn */
	r5 = r9;  /* 0C067AF0 mov Rm,Rn */
	IF(0x0C067AF2u); { u32 t_ = r0; PR = 0x0C067AF6u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C066A20, 0x0C066A20u, 0x0C067AF6u); }  /* 0C067AF2 jsr @Rn */
L_0C067AF6: BLKS(0x0C067AF6u);
	r0 = 0xC066CC0u; UPD(0x0C067AF8u, 1);  /* 0C067AF6 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C067AF8 mov Rm,Rn */
	r5 = r9;  /* 0C067AFA mov Rm,Rn */
	r15 = r14;  /* 0C067AFC mov Rm,Rn */
	IF(0x0C067AFEu); PR = R32(r15); r15 += 4; UPD(0x0C067B00u, 4);  /* 0C067AFE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067B02u, 1);  /* 0C067B00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C067B04u, 1);  /* 0C067B02 mov.l @Rm+,Rn */
	IF(0x0C067B04u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C066CC0u: goto L_0C066CC0; default: JUMPD(tv_); } }  /* 0C067B04 jmp @Rn */
}

void f_0C067B10(sh3_t *c)
{
	LOCALS;
	goto L_0C067B10;
L_0C0670E0: BLKS(0x0C0670E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0670E2u, 1);  /* 0C0670E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0670E4u, 1);  /* 0C0670E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0670E6u, 1);  /* 0C0670E4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0670E8u, 1);  /* 0C0670E6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0670EAu, 1);  /* 0C0670E8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C0670EA exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0670EEu, 2);  /* 0C0670EC mov.l Rm,@-Rn */
	r2 = 0x280u; UPD(0x0C0670F0u, 1);  /* 0C0670EE mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0670F0 exts.w Rm,Rn */
	IF(0x0C0670F2u); MACL = r13 * r2;  /* 0C0670F2 mul.l Rm,Rn */
	r4 = 0xC283794u; UPD(0x0C0670F6u, 4);  /* 0C0670F4 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0670F8u, 1);  /* 0C0670F6 mov.l Rm,@-Rn */
	IF(0x0C0670F8u); r0 = MACL;  /* 0C0670F8 sts macl,Rn */
	r4 += r0;  /* 0C0670FA add Rm,Rn */
	IF(0x0C0670FCu); r15 -= 4; W32(r15, PR); UPD(0x0C0670FEu, 3);  /* 0C0670FC sts.l pr,@-Rn */
	r0 = 0x258u; UPD(0x0C067100u, 1);  /* 0C0670FE mov.w @(disp,pc),Rn */
	IF(0x0C067100u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C067102u, 1);  /* 0C067100 mov.b @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C067102 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C067120u, 4); goto L_0C067120; } UPD(0x0C067108u, 1); goto L_0C067108; }  /* 0C067104 bf/s */
L_0C067108: BLKS(0x0C067108u);
	r15 = r14;  /* 0C067108 mov Rm,Rn */
	IF(0x0C06710Au); PR = R32(r15); r15 += 4; UPD(0x0C06710Cu, 2);  /* 0C06710A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06710Eu, 1);  /* 0C06710C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C067110u, 1);  /* 0C06710E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C067112u, 1);  /* 0C067110 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C067114u, 1);  /* 0C067112 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C067116u, 1);  /* 0C067114 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C067118u, 1);  /* 0C067116 mov.l @Rm+,Rn */
	IF(0x0C067118u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C067118 rts */
L_0C067120: BLKS(0x0C067120u);
	r8 = 0xC060840u; UPD(0x0C067122u, 1);  /* 0C067120 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C067122 mov Rm,Rn */
	r5 = r11;  /* 0C067124 mov Rm,Rn */
	r6 = 0x1u;  /* 0C067126 mov #imm,Rn */
	IF(0x0C067128u); { u32 t_ = r8; PR = 0x0C06712Cu; r7 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C060840, 0x0C060840u, 0x0C06712Cu); }  /* 0C067128 jsr @Rn */
L_0C06712C: BLKS(0x0C06712Cu);
	T = (r0 & r0) == 0;  /* 0C06712C tst Rm,Rn */
	if (T) { UPD(0x0C067108u, 4); goto L_0C067108; }  /* 0C06712E bt */
L_0C067130: BLKS(0x0C067130u);
	r6 = 0x30u;  /* 0C067130 mov #imm,Rn */
	r10 = 0x90u; UPD(0x0C067134u, 2);  /* 0C067132 mov.w @(disp,pc),Rn */
	IF(0x0C067134u); MACL = r13 * r10;  /* 0C067134 mul.l Rm,Rn */
	r8 = 0x9C0u; UPD(0x0C067138u, 3);  /* 0C067136 mov.w @(disp,pc),Rn */
	r4 = 0x34u;  /* 0C067138 mov #imm,Rn */
	IF(0x0C06713Au); r10 = MACL;  /* 0C06713A sts macl,Rn */
	IF(0x0C06713Cu); MACL = r11 * r6;  /* 0C06713C mul.l Rm,Rn */
	r2 = 0x340u; UPD(0x0C067140u, 5);  /* 0C06713E mov.w @(disp,pc),Rn */
	IF(0x0C067140u); r5 = MACL;  /* 0C067140 sts macl,Rn */
	IF(0x0C067142u); MACL = r13 * r8;  /* 0C067142 mul.l Rm,Rn */
	r0 = 0xC2755BCu; UPD(0x0C067146u, 4);  /* 0C067144 mov.l @(disp,pc),Rn */
	r10 += r5;  /* 0C067146 add Rm,Rn */
	IF(0x0C067148u); r8 = MACL;  /* 0C067148 sts macl,Rn */
	IF(0x0C06714Au); MACL = r11 * r2;  /* 0C06714A mul.l Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r0); UPD(0x0C06714Eu, 5);  /* 0C06714C mov.w @Rm,Rn */
	IF(0x0C06714Eu); r6 = MACL;  /* 0C06714E sts macl,Rn */
	IF(0x0C067150u); MACL = r12 * r4;  /* 0C067150 mul.l Rm,Rn */
	r0 = r8;  /* 0C067152 mov Rm,Rn */
	r0 += r6;  /* 0C067154 add Rm,Rn */
	IF(0x0C067156u); r3 = MACL;  /* 0C067156 sts macl,Rn */
	r7 = 0xC8000000u; UPD(0x0C06715Au, 7);  /* 0C067158 mov.l @(disp,pc),Rn */
	r0 += r3;  /* 0C06715A add Rm,Rn */
	r5 = 0xC21F8A0u; UPD(0x0C06715Eu, 2);  /* 0C06715C mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C06715E add Rm,Rn */
	r9 = 0xC27DC84u; UPD(0x0C067162u, 2);  /* 0C067160 mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C067162 add Rm,Rn */
	IF(0x0C067164u); W32(r0 + r5, r7); UPD(0x0C067166u, 2);  /* 0C067164 mov.l Rm,@(r0,Rn) */
	r10 += r9;  /* 0C067166 add Rm,Rn */
	r11 = 0xC050D70u; UPD(0x0C06716Au, 2);  /* 0C067168 mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C06716A add Rm,Rn */
	r10 += 0x24u;  /* 0C06716C add #imm,Rn */
	r0 = 0x2u;  /* 0C06716E mov #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C067172u, 4);  /* 0C067170 mov.w @Rm,Rn */
	r4 = 0x4u;  /* 0C067172 mov #imm,Rn */
	IF(0x0C067174u); { u32 t_ = r11; PR = 0x0C067178u; W32(r8 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C067178u); }  /* 0C067174 jsr @Rn */
L_0C067178: BLKS(0x0C067178u);
	r0 += 0x1u;  /* 0C067178 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C06717Cu, 2);  /* 0C06717A mov.l Rm,@(disp,Rn) */
	r10 += 0xFFFFFFDCu;  /* 0C06717C add #imm,Rn */
	r8 += 0x2Cu;  /* 0C06717E add #imm,Rn */
	W16(r8, r9); UPD(0x0C067182u, 3);  /* 0C067180 mov.w Rm,@Rn */
	r9 += 0x4u;  /* 0C067182 add #imm,Rn */
	r0 = r9;  /* 0C067184 mov Rm,Rn */
	IF(0x0C067186u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C067186 shar Rn */
	r2 = 0xC058060u; UPD(0x0C06718Au, 4);  /* 0C067188 mov.l @(disp,pc),Rn */
	IF(0x0C06718Au); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06718A shar Rn */
	r11 = 0x80000u; UPD(0x0C06718Eu, 2);  /* 0C06718C mov.l @(disp,pc),Rn */
	IF(0x0C06718Eu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06718E shar Rn */
	r8 += 0xFFFFFFD4u;  /* 0C067190 add #imm,Rn */
	r9 += 0xFFFFFFFCu;  /* 0C067192 add #imm,Rn */
	r0 &= 0x3Fu;  /* 0C067194 and #imm,r0 */
	r4 = r9;  /* 0C067196 mov Rm,Rn */
	W32(r8 + 0x20u, r11); UPD(0x0C06719Au, 6);  /* 0C067198 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0000u; UPD(0x0C06719Cu, 1);  /* 0C06719A mov.l @(disp,pc),Rn */
	IF(0x0C06719Cu); { u32 t_ = r2; PR = 0x0C0671A0u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0671A0u); }  /* 0C06719C jsr @Rn */
L_0C0671A0: BLKS(0x0C0671A0u);
	r12 = R32(r10 + 0x14u); UPD(0x0C0671A2u, 1);  /* 0C0671A0 mov.l @(disp,Rm),Rn */
	r1 = 0xFFFD0000u; UPD(0x0C0671A4u, 1);  /* 0C0671A2 mov.l @(disp,pc),Rn */
	r12 += r0;  /* 0C0671A4 add Rm,Rn */
	r12 += r1;  /* 0C0671A6 add Rm,Rn */
	W32(r8 + 0x10u, r12); UPD(0x0C0671AAu, 3);  /* 0C0671A8 mov.l Rm,@(disp,Rn) */
	r12 = 0xC058030u; UPD(0x0C0671ACu, 1);  /* 0C0671AA mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C0671AEu, 1);  /* 0C0671AC mov.l @(disp,pc),Rn */
	IF(0x0C0671AEu); { u32 t_ = r12; PR = 0x0C0671B2u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0671B2u); }  /* 0C0671AE jsr @Rn */
L_0C0671B2: BLKS(0x0C0671B2u);
	r4 = R32(r10 + 0x18u); UPD(0x0C0671B4u, 1);  /* 0C0671B2 mov.l @(disp,Rm),Rn */
	r5 = r11;  /* 0C0671B4 mov Rm,Rn */
	r7 = 0xC058060u; UPD(0x0C0671B8u, 2);  /* 0C0671B6 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C0671B8 add Rm,Rn */
	W32(r8 + 0x14u, r4); UPD(0x0C0671BCu, 2);  /* 0C0671BA mov.l Rm,@(disp,Rn) */
	IF(0x0C0671BCu); { u32 t_ = r7; PR = 0x0C0671C0u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0671C0u); }  /* 0C0671BC jsr @Rn */
L_0C0671C0: BLKS(0x0C0671C0u);
	r4 = r9;  /* 0C0671C0 mov Rm,Rn */
	r5 = r11;  /* 0C0671C2 mov Rm,Rn */
	IF(0x0C0671C4u); { u32 t_ = r12; PR = 0x0C0671C8u; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0671C8u); }  /* 0C0671C4 jsr @Rn */
L_0C0671C8: BLKS(0x0C0671C8u);
	r9 = 0xC060350u; UPD(0x0C0671CAu, 1);  /* 0C0671C8 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0671CA mov #imm,Rn */
	r5 = 0x808080u; UPD(0x0C0671CEu, 2);  /* 0C0671CC mov.l @(disp,pc),Rn */
	r4 = 0xFu;  /* 0C0671CE mov #imm,Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C0671D2u, 2);  /* 0C0671D0 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0671D4u, 1);  /* 0C0671D2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0671D4u); { u32 t_ = r9; PR = 0x0C0671D8u; W32(r8 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C0671D8u); }  /* 0C0671D4 jsr @Rn */
L_0C0671D8: BLKS(0x0C0671D8u);
	r3 = 0xC0AFBA0u; UPD(0x0C0671DAu, 1);  /* 0C0671D8 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0671DA mov Rm,Rn */
	r5 = 0x4Du;  /* 0C0671DC mov #imm,Rn */
	r15 = r14;  /* 0C0671DE mov Rm,Rn */
	IF(0x0C0671E0u); PR = R32(r15); r15 += 4; UPD(0x0C0671E2u, 4);  /* 0C0671E0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0671E4u, 1);  /* 0C0671E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0671E6u, 1);  /* 0C0671E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0671E8u, 1);  /* 0C0671E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0671EAu, 1);  /* 0C0671E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0671ECu, 1);  /* 0C0671EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0671EEu, 1);  /* 0C0671EC mov.l @Rm+,Rn */
	IF(0x0C0671EEu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFBA0u: TAIL(f_0C0AFBA0); default: JUMPD(tv_); } }  /* 0C0671EE jmp @Rn */
L_0C067B10: BLKS(0x0C067B10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C067B12u, 1);  /* 0C067B10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C067B14u, 1);  /* 0C067B12 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C067B14 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067B18u, 2);  /* 0C067B16 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C067B18 exts.w Rm,Rn */
	r0 = 0xC066A20u; UPD(0x0C067B1Cu, 2);  /* 0C067B1A mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C067B1C mov Rm,Rn */
	IF(0x0C067B1Eu); r15 -= 4; W32(r15, PR); UPD(0x0C067B20u, 2);  /* 0C067B1E sts.l pr,@-Rn */
	r5 = r9;  /* 0C067B20 mov Rm,Rn */
	IF(0x0C067B22u); { u32 t_ = r0; PR = 0x0C067B26u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C066A20, 0x0C066A20u, 0x0C067B26u); }  /* 0C067B22 jsr @Rn */
L_0C067B26: BLKS(0x0C067B26u);
	r0 = 0xC0670E0u; UPD(0x0C067B28u, 1);  /* 0C067B26 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C067B28 mov Rm,Rn */
	r5 = r9;  /* 0C067B2A mov Rm,Rn */
	r15 = r14;  /* 0C067B2C mov Rm,Rn */
	IF(0x0C067B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C067B30u, 4);  /* 0C067B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067B32u, 1);  /* 0C067B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C067B34u, 1);  /* 0C067B32 mov.l @Rm+,Rn */
	IF(0x0C067B34u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0670E0u: goto L_0C0670E0; default: JUMPD(tv_); } }  /* 0C067B34 jmp @Rn */
}

void f_0C067B40(sh3_t *c)
{
	LOCALS;
	goto L_0C067B40;
L_0C067240: BLKS(0x0C067240u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C067242u, 1);  /* 0C067240 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C067242 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C067246u, 2);  /* 0C067244 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C067246 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06724Au, 2);  /* 0C067248 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06724Cu, 1);  /* 0C06724A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06724Eu, 1);  /* 0C06724C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C067250u, 1);  /* 0C06724E mov.l Rm,@-Rn */
	r2 = 0x280u; UPD(0x0C067252u, 1);  /* 0C067250 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067254u, 1);  /* 0C067252 mov.l Rm,@-Rn */
	IF(0x0C067254u); MACL = r4 * r2;  /* 0C067254 mul.l Rm,Rn */
	IF(0x0C067256u); r15 -= 4; W32(r15, PR); UPD(0x0C067258u, 3);  /* 0C067256 sts.l pr,@-Rn */
	r6 = 0xC283794u; UPD(0x0C06725Au, 1);  /* 0C067258 mov.l @(disp,pc),Rn */
	IF(0x0C06725Au); r0 = MACL;  /* 0C06725A sts macl,Rn */
	r15 += 0xFFFFFFE4u;  /* 0C06725C add #imm,Rn */
	r14 = r15;  /* 0C06725E mov Rm,Rn */
	r6 += r0;  /* 0C067260 add Rm,Rn */
	W32(r14, r4); UPD(0x0C067264u, 5);  /* 0C067262 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C067266u, 1);  /* 0C067264 mov.l Rm,@(disp,Rn) */
	r0 = 0x258u; UPD(0x0C067268u, 1);  /* 0C067266 mov.w @(disp,pc),Rn */
	IF(0x0C067268u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C06726Au, 1);  /* 0C067268 mov.b @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C06726A tst Rm,Rn */
	if (!T) { UPD(0x0C067290u, 4); goto L_0C067290; }  /* 0C06726C bf */
L_0C06726E: BLKS(0x0C06726Eu);
	r14 += 0x1Cu;  /* 0C06726E add #imm,Rn */
	r15 = r14;  /* 0C067270 mov Rm,Rn */
	IF(0x0C067272u); PR = R32(r15); r15 += 4; UPD(0x0C067274u, 3);  /* 0C067272 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067276u, 1);  /* 0C067274 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C067278u, 1);  /* 0C067276 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06727Au, 1);  /* 0C067278 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06727Cu, 1);  /* 0C06727A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06727Eu, 1);  /* 0C06727C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C067280u, 1);  /* 0C06727E mov.l @Rm+,Rn */
	IF(0x0C067280u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C067280 rts */
L_0C067290: BLKS(0x0C067290u);
	r8 = 0xC060840u; UPD(0x0C067292u, 1);  /* 0C067290 mov.l @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C067292 mov #imm,Rn */
	IF(0x0C067294u); { u32 t_ = r8; PR = 0x0C067298u; r7 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C060840, 0x0C060840u, 0x0C067298u); }  /* 0C067294 jsr @Rn */
L_0C067298: BLKS(0x0C067298u);
	T = (r0 & r0) == 0;  /* 0C067298 tst Rm,Rn */
	if (T) { UPD(0x0C06726Eu, 4); goto L_0C06726E; }  /* 0C06729A bt */
L_0C06729C: BLKS(0x0C06729Cu);
	r9 = R32(r14); UPD(0x0C06729Eu, 1);  /* 0C06729C mov.l @Rm,Rn */
	r12 = 0x0u;  /* 0C06729E mov #imm,Rn */
	r11 = 0x90u; UPD(0x0C0672A2u, 2);  /* 0C0672A0 mov.w @(disp,pc),Rn */
	IF(0x0C0672A2u); MACL = r9 * r11;  /* 0C0672A2 mul.l Rm,Rn */
	r7 = 0x9C0u; UPD(0x0C0672A6u, 3);  /* 0C0672A4 mov.w @(disp,pc),Rn */
	IF(0x0C0672A6u); r10 = MACL;  /* 0C0672A6 sts macl,Rn */
	IF(0x0C0672A8u); MACL = r9 * r7;  /* 0C0672A8 mul.l Rm,Rn */
	r3 = 0x340u; UPD(0x0C0672ACu, 4);  /* 0C0672AA mov.w @(disp,pc),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0672AEu, 1);  /* 0C0672AC mov.l @(disp,Rm),Rn */
	IF(0x0C0672AEu); r5 = MACL;  /* 0C0672AE sts macl,Rn */
	IF(0x0C0672B0u); MACL = r4 * r3;  /* 0C0672B0 mul.l Rm,Rn */
	r13 = 0xC2755BCu; UPD(0x0C0672B4u, 4);  /* 0C0672B2 mov.l @(disp,pc),Rn */
	IF(0x0C0672B4u); r1 = MACL;  /* 0C0672B4 sts macl,Rn */
	W32(r14 + 0xCu, r13); UPD(0x0C0672B8u, 2);  /* 0C0672B6 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r12); UPD(0x0C0672BAu, 1);  /* 0C0672B8 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r10); UPD(0x0C0672BCu, 1);  /* 0C0672BA mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x14u, r5); UPD(0x0C0672BEu, 1);  /* 0C0672BC mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x18u, r1); UPD(0x0C0672C0u, 1);  /* 0C0672BE mov.l Rm,@(disp,Rn) */
	r4 = R32(r14 + 0x4u); UPD(0x0C0672C2u, 1);  /* 0C0672C0 mov.l @(disp,Rm),Rn */
L_0C0672C2: BLKS(0x0C0672C2u);
	r10 = 0x30u;  /* 0C0672C2 mov #imm,Rn */
	r0 = R32(r14 + 0x8u); UPD(0x0C0672C6u, 2);  /* 0C0672C4 mov.l @(disp,Rm),Rn */
	IF(0x0C0672C6u); MACL = r4 * r10;  /* 0C0672C6 mul.l Rm,Rn */
	r3 = 0xC1704DCu; UPD(0x0C0672CAu, 3);  /* 0C0672C8 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0672CA add Rm,Rn */
	r13 = 0xC1704E6u; UPD(0x0C0672CEu, 2);  /* 0C0672CC mov.l @(disp,pc),Rn */
	IF(0x0C0672CEu); r10 = MACL;  /* 0C0672CE sts macl,Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C0672D2u, 2);  /* 0C0672D0 mov.l @(disp,Rm),Rn */
	IF(0x0C0672D2u); r12 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0672D4u, 1);  /* 0C0672D2 mov.w @(r0,Rm),Rn */
	IF(0x0C0672D4u); r9 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C0672D6u, 1);  /* 0C0672D4 mov.w @(r0,Rm),Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C0672D8u, 1);  /* 0C0672D6 mov.l @(disp,Rm),Rn */
	r0 = 0x34u;  /* 0C0672D8 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r8 = v_; } UPD(0x0C0672DCu, 2);  /* 0C0672DA mov.w @Rm+,Rn */
	r10 += r1;  /* 0C0672DC add Rm,Rn */
	r2 = 0xC27DC84u; UPD(0x0C0672E0u, 2);  /* 0C0672DE mov.l @(disp,pc),Rn */
	IF(0x0C0672E0u); MACL = r8 * r0;  /* 0C0672E0 mul.l Rm,Rn */
	r10 += r2;  /* 0C0672E2 add Rm,Rn */
	r7 = R32(r14 + 0x18u); UPD(0x0C0672E6u, 4);  /* 0C0672E4 mov.l @(disp,Rm),Rn */
	r10 += 0x24u;  /* 0C0672E6 add #imm,Rn */
	r4 = R32(r14 + 0x14u); UPD(0x0C0672EAu, 2);  /* 0C0672E8 mov.l @(disp,Rm),Rn */
	IF(0x0C0672EAu); r8 = MACL;  /* 0C0672EA sts macl,Rn */
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C0672EEu, 2);  /* 0C0672EC mov.w @Rm,Rn */
	r4 += r7;  /* 0C0672EE add Rm,Rn */
	W32(r14 + 0xCu, r5); UPD(0x0C0672F2u, 2);  /* 0C0672F0 mov.l Rm,@(disp,Rn) */
	r4 += r8;  /* 0C0672F2 add Rm,Rn */
	r2 = R32(r14 + 0x14u); UPD(0x0C0672F6u, 2);  /* 0C0672F4 mov.l @(disp,Rm),Rn */
	r6 = r11;  /* 0C0672F6 mov Rm,Rn */
	r3 = R32(r14 + 0x18u); UPD(0x0C0672FAu, 2);  /* 0C0672F8 mov.l @(disp,Rm),Rn */
	r8 += r2;  /* 0C0672FA add Rm,Rn */
	r5 = 0xC8000000u; UPD(0x0C0672FEu, 2);  /* 0C0672FC mov.l @(disp,pc),Rn */
	r6 += r12;  /* 0C0672FE add Rm,Rn */
	r0 = 0xC21F8A0u; UPD(0x0C067302u, 2);  /* 0C067300 mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C067302 add Rm,Rn */
	r13 = 0xC050D70u; UPD(0x0C067306u, 2);  /* 0C067304 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r6;  /* 0C067306 exts.w Rm,Rn */
	IF(0x0C067308u); W32(r0 + r4, r5); UPD(0x0C06730Au, 2);  /* 0C067308 mov.l Rm,@(r0,Rn) */
	r6 = 0x2u;  /* 0C06730A mov #imm,Rn */
	r8 += r0;  /* 0C06730C add Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C067310u, 3);  /* 0C06730E mov.l Rm,@(disp,Rn) */
	IF(0x0C067310u); { u32 t_ = r13; PR = 0x0C067314u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C067314u); }  /* 0C067310 jsr @Rn */
L_0C067314: BLKS(0x0C067314u);
	r0 += 0x1u;  /* 0C067314 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C067318u, 2);  /* 0C067316 mov.l Rm,@(disp,Rn) */
	r11 += r9;  /* 0C067318 add Rm,Rn */
	r9 = (u32)(s32)(s16)r11;  /* 0C06731A exts.w Rm,Rn */
	r8 += 0x2Cu;  /* 0C06731C add #imm,Rn */
	W16(r8, r9); UPD(0x0C067320u, 4);  /* 0C06731E mov.w Rm,@Rn */
	r10 += 0xFFFFFFDCu;  /* 0C067320 add #imm,Rn */
	r11 = 0x80000u; UPD(0x0C067324u, 2);  /* 0C067322 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFD4u;  /* 0C067324 add #imm,Rn */
	r9 += 0x4u;  /* 0C067326 add #imm,Rn */
	W32(r8 + 0x20u, r11); UPD(0x0C06732Au, 3);  /* 0C067328 mov.l Rm,@(disp,Rn) */
	r0 = r9;  /* 0C06732A mov Rm,Rn */
	IF(0x0C06732Cu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06732C shar Rn */
	IF(0x0C06732Eu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06732E shar Rn */
	r11 = 0xC058060u; UPD(0x0C067332u, 4);  /* 0C067330 mov.l @(disp,pc),Rn */
	IF(0x0C067332u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C067332 shar Rn */
	r0 &= 0x3Fu;  /* 0C067334 and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C067338u, 3);  /* 0C067336 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0000u; UPD(0x0C06733Au, 1);  /* 0C067338 mov.l @(disp,pc),Rn */
	IF(0x0C06733Au); { u32 t_ = r11; PR = 0x0C06733Eu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06733Eu); }  /* 0C06733A jsr @Rn */
L_0C06733E: BLKS(0x0C06733Eu);
	r7 = R32(r10 + 0x14u); UPD(0x0C067340u, 1);  /* 0C06733E mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C067340 mov Rm,Rn */
	r1 = 0xFFFD0000u; UPD(0x0C067344u, 2);  /* 0C067342 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C067344 add Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C067348u, 2);  /* 0C067346 mov.l @(disp,pc),Rn */
	r7 += r1;  /* 0C067348 add Rm,Rn */
	r5 = 0x100000u; UPD(0x0C06734Cu, 2);  /* 0C06734A mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFFCu;  /* 0C06734C add #imm,Rn */
	IF(0x0C06734Eu); { u32 t_ = r13; PR = 0x0C067352u; W32(r8 + 0x10u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C067352u); }  /* 0C06734E jsr @Rn */
L_0C067352: BLKS(0x0C067352u);
	r5 = R32(r10 + 0x18u); UPD(0x0C067354u, 1);  /* 0C067352 mov.l @(disp,Rm),Rn */
	r5 += r0;  /* 0C067354 add Rm,Rn */
	W32(r8 + 0x14u, r5); UPD(0x0C067358u, 2);  /* 0C067356 mov.l Rm,@(disp,Rn) */
	r5 = 0x80000u; UPD(0x0C06735Au, 1);  /* 0C067358 mov.l @(disp,pc),Rn */
	IF(0x0C06735Au); { u32 t_ = r11; PR = 0x0C06735Eu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06735Eu); }  /* 0C06735A jsr @Rn */
L_0C06735E: BLKS(0x0C06735Eu);
	W32(r8 + 0x18u, r0); UPD(0x0C067360u, 1);  /* 0C06735E mov.l Rm,@(disp,Rn) */
	r5 = 0x80000u; UPD(0x0C067362u, 1);  /* 0C067360 mov.l @(disp,pc),Rn */
	IF(0x0C067362u); { u32 t_ = r13; PR = 0x0C067366u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C067366u); }  /* 0C067362 jsr @Rn */
L_0C067366: BLKS(0x0C067366u);
	r3 = 0x808080u; UPD(0x0C067368u, 1);  /* 0C067366 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C067368 mov #imm,Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C06736Cu, 2);  /* 0C06736A mov.l Rm,@(disp,Rn) */
	r6 = 0x4u;  /* 0C06736C mov #imm,Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C067370u, 2);  /* 0C06736E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r3); UPD(0x0C067372u, 1);  /* 0C067370 mov.l Rm,@(disp,Rn) */
	r8 = R32(r14 + 0x8u); UPD(0x0C067374u, 1);  /* 0C067372 mov.l @(disp,Rm),Rn */
	r8 += 0x1u;  /* 0C067374 add #imm,Rn */
	r0 = (u32)(s32)(s16)r8;  /* 0C067376 exts.w Rm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C06737Au, 3);  /* 0C067378 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x8u); UPD(0x0C06737Cu, 1);  /* 0C06737A mov.l @(disp,Rm),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C06737C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0672C2u, 4); goto L_0C0672C2; } UPD(0x0C067382u, 1); goto L_0C067382; }  /* 0C06737E bf/s */
L_0C067382: BLKS(0x0C067382u);
	r8 = 0xC060350u; UPD(0x0C067384u, 1);  /* 0C067382 mov.l @(disp,pc),Rn */
	IF(0x0C067384u); { u32 t_ = r8; PR = 0x0C067388u; r4 = 0x4Bu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C067388u); }  /* 0C067384 jsr @Rn */
L_0C067388: BLKS(0x0C067388u);
	r4 = R32(r14); UPD(0x0C06738Au, 1);  /* 0C067388 mov.l @Rm,Rn */
	r5 = 0x50u;  /* 0C06738A mov #imm,Rn */
	r0 = 0xC0AFBA0u; UPD(0x0C06738Eu, 2);  /* 0C06738C mov.l @(disp,pc),Rn */
	r14 += 0x1Cu;  /* 0C06738E add #imm,Rn */
	r15 = r14;  /* 0C067390 mov Rm,Rn */
	IF(0x0C067392u); PR = R32(r15); r15 += 4; UPD(0x0C067394u, 3);  /* 0C067392 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067396u, 1);  /* 0C067394 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C067398u, 1);  /* 0C067396 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06739Au, 1);  /* 0C067398 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06739Cu, 1);  /* 0C06739A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06739Eu, 1);  /* 0C06739C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0673A0u, 1);  /* 0C06739E mov.l @Rm+,Rn */
	IF(0x0C0673A0u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFBA0u: TAIL(f_0C0AFBA0); default: JUMPD(tv_); } }  /* 0C0673A0 jmp @Rn */
L_0C067B40: BLKS(0x0C067B40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C067B42u, 1);  /* 0C067B40 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C067B44u, 1);  /* 0C067B42 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C067B44 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067B48u, 2);  /* 0C067B46 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C067B48 exts.w Rm,Rn */
	r0 = 0xC066A20u; UPD(0x0C067B4Cu, 2);  /* 0C067B4A mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C067B4C mov Rm,Rn */
	IF(0x0C067B4Eu); r15 -= 4; W32(r15, PR); UPD(0x0C067B50u, 2);  /* 0C067B4E sts.l pr,@-Rn */
	r5 = r9;  /* 0C067B50 mov Rm,Rn */
	IF(0x0C067B52u); { u32 t_ = r0; PR = 0x0C067B56u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C066A20, 0x0C066A20u, 0x0C067B56u); }  /* 0C067B52 jsr @Rn */
L_0C067B56: BLKS(0x0C067B56u);
	r0 = 0xC067240u; UPD(0x0C067B58u, 1);  /* 0C067B56 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C067B58 mov Rm,Rn */
	r5 = r9;  /* 0C067B5A mov Rm,Rn */
	r15 = r14;  /* 0C067B5C mov Rm,Rn */
	IF(0x0C067B5Eu); PR = R32(r15); r15 += 4; UPD(0x0C067B60u, 4);  /* 0C067B5E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067B62u, 1);  /* 0C067B60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C067B64u, 1);  /* 0C067B62 mov.l @Rm+,Rn */
	IF(0x0C067B64u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C067240u: goto L_0C067240; default: JUMPD(tv_); } }  /* 0C067B64 jmp @Rn */
}

/* FUN_0c067b70 */
void f_0C067B70(sh3_t *c)
{
	LOCALS;
L_0C067B70: BLKS(0x0C067B70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C067B72u, 1);  /* 0C067B70 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C067B74u, 1);  /* 0C067B72 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C067B76u, 1);  /* 0C067B74 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C067B78u, 1);  /* 0C067B76 mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C067B78 mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C067B7Cu, 2);  /* 0C067B7A mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C067B7C mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C067B80u, 2);  /* 0C067B7E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067B82u, 1);  /* 0C067B80 mov.l Rm,@-Rn */
	r13 = 0xC21F800u; UPD(0x0C067B84u, 1);  /* 0C067B82 mov.l @(disp,pc),Rn */
	IF(0x0C067B84u); r15 -= 4; W32(r15, PR); UPD(0x0C067B86u, 1);  /* 0C067B84 sts.l pr,@-Rn */
	r12 = 0xC065A70u; UPD(0x0C067B88u, 1);  /* 0C067B86 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C067B88 mov Rm,Rn */
	IF(0x0C067B8Au); ;  /* 0C067B8A nop */
	UPD(0x0C067B8Cu, 2);
L_0C067B8C: BLKS(0x0C067B8Cu);
	r8 = 0xC27DC84u; UPD(0x0C067B8Eu, 1);  /* 0C067B8C mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C067B8E mov #imm,Rn */
	r8 += r10;  /* 0C067B90 add Rm,Rn */
	IF(0x0C067B92u); ;  /* 0C067B92 nop */
	UPD(0x0C067B94u, 3);
L_0C067B94: BLKS(0x0C067B94u);
	r1 = R32(r8); UPD(0x0C067B96u, 1);  /* 0C067B94 mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C067B98u, 1);  /* 0C067B96 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C067B98 tst Rm,Rn */
	{ u32 c_ = !T; r6 = 0x14u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C067BD0u, 4); goto L_0C067BD0; } UPD(0x0C067B9Eu, 1); goto L_0C067B9E; }  /* 0C067B9A bf/s */
L_0C067B9E: BLKS(0x0C067B9Eu);
	r9 += 0x1u;  /* 0C067B9E add #imm,Rn */
	r4 = 0x2u;  /* 0C067BA0 mov #imm,Rn */
	T = (s32)r9 > (s32)r4;  /* 0C067BA2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x30u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C067B94u, 6); goto L_0C067B94; } goto L_0C067BA8; }  /* 0C067BA4 bf/s */
L_0C067BA8: BLKS(0x0C067BA8u);
	r6 = 0x90u; UPD(0x0C067BAAu, 2);  /* 0C067BA8 mov.w @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C067BAA add #imm,Rn */
	r5 = 0x1u;  /* 0C067BAC mov #imm,Rn */
	T = (s32)r11 > (s32)r5;  /* 0C067BAE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += r6; /* slot add Rm,Rn */ if (c_) { UPD(0x0C067B8Cu, 6); goto L_0C067B8C; } goto L_0C067BB4; }  /* 0C067BB0 bf/s */
L_0C067BB4: BLKS(0x0C067BB4u);
	r15 = r14;  /* 0C067BB4 mov Rm,Rn */
	IF(0x0C067BB6u); PR = R32(r15); r15 += 4; UPD(0x0C067BB8u, 3);  /* 0C067BB6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067BBAu, 1);  /* 0C067BB8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C067BBCu, 1);  /* 0C067BBA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C067BBEu, 1);  /* 0C067BBC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C067BC0u, 1);  /* 0C067BBE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C067BC2u, 1);  /* 0C067BC0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C067BC4u, 1);  /* 0C067BC2 mov.l @Rm+,Rn */
	IF(0x0C067BC4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C067BC4 rts */
L_0C067BD0: BLKS(0x0C067BD0u);
	r4 = R32(r8 + 0x14u); UPD(0x0C067BD2u, 1);  /* 0C067BD0 mov.l @(disp,Rm),Rn */
	IF(0x0C067BD2u); { u32 t_ = r12; PR = 0x0C067BD6u; r5 = R32(r8 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C065A70, 0x0C065A70u, 0x0C067BD6u); }  /* 0C067BD2 jsr @Rn */
L_0C067BD6: BLKS(0x0C067BD6u);
	r8 += 0x2Cu;  /* 0C067BD6 add #imm,Rn */
	W8(r8, r0); UPD(0x0C067BDAu, 2);  /* 0C067BD8 mov.b Rm,@Rn */
	r2 = r0 & 0xFF;  /* 0C067BDA extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C067BDC tst Rm,Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFD4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C067B9Eu, 5); goto L_0C067B9E; } goto L_0C067BE2; }  /* 0C067BDE bt/s */
L_0C067BE2: BLKS(0x0C067BE2u);
	r3 = 0x1Fu;  /* 0C067BE2 mov #imm,Rn */
	r3 &= r0;  /* 0C067BE4 and Rm,Rn */
	r3 += r3;  /* 0C067BE6 add Rm,Rn */
	r3 += r13;  /* 0C067BE8 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C067BECu, 6);  /* 0C067BEA mov.w @Rm,Rn */
	r0 += 0x1u;  /* 0C067BEC add #imm,Rn */
	{ W16(r3, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C067B9Eu, 4); goto L_0C067B9E; }  /* 0C067BEE bra */
}

void f_0C067C90(sh3_t *c)
{
	LOCALS;
L_0C067C90: BLKS(0x0C067C90u);
	r3 = 0x2800u; UPD(0x0C067C92u, 1);  /* 0C067C90 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C067C92 exts.w Rm,Rn */
	IF(0x0C067C94u); MACL = r4 * r3;  /* 0C067C94 mul.l Rm,Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C067C96 exts.w Rm,Rn */
	r7 = 0x50u;  /* 0C067C98 mov #imm,Rn */
	IF(0x0C067C9Au); r3 = MACL;  /* 0C067C9A sts macl,Rn */
	IF(0x0C067C9Cu); MACL = r5 * r7;  /* 0C067C9C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067CA0u, 9);  /* 0C067C9E mov.l Rm,@-Rn */
	r0 = 0xC217A04u; UPD(0x0C067CA2u, 1);  /* 0C067CA0 mov.l @(disp,pc),Rn */
	IF(0x0C067CA2u); r6 = MACL;  /* 0C067CA2 sts macl,Rn */
	IF(0x0C067CA4u); r15 -= 4; W32(r15, PR); UPD(0x0C067CA6u, 2);  /* 0C067CA4 sts.l pr,@-Rn */
	r3 += r6;  /* 0C067CA6 add Rm,Rn */
	r3 += r0;  /* 0C067CA8 add Rm,Rn */
	r2 = R32(r3 + 0x8u); UPD(0x0C067CACu, 3);  /* 0C067CAA mov.l @(disp,Rm),Rn */
	r0 = 0x1u;  /* 0C067CAC mov #imm,Rn */
	r2 += 0xFFFFFFC0u;  /* 0C067CAE add #imm,Rn */
	T = r2 > r0;  /* 0C067CB0 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C067D60u, 6); goto L_0C067D60; } goto L_0C067CB6; }  /* 0C067CB2 bf/s */
L_0C067CB6: BLKS(0x0C067CB6u);
	r0 = R32(r3 + 0x24u); UPD(0x0C067CB8u, 2);  /* 0C067CB6 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C067CBAu, 1);  /* 0C067CB8 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C067CBCu, 1);  /* 0C067CBA mov.l @(disp,Rm),Rn */
	r1 = R32(r3 + 0x30u); UPD(0x0C067CBEu, 1);  /* 0C067CBC mov.l @(disp,Rm),Rn */
	r0 += r6;  /* 0C067CBE add Rm,Rn */
	r2 = 0xFF600000u; UPD(0x0C067CC2u, 2);  /* 0C067CC0 mov.l @(disp,pc),Rn */
	r7 += r1;  /* 0C067CC2 add Rm,Rn */
	r2 += r0;  /* 0C067CC4 add Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C067CC8u, 3);  /* 0C067CC6 mov.l Rm,@(disp,Rn) */
	IF(0x0C067CC8u); T = (s32)r2 >= 0;  /* 0C067CC8 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C067D50u, 4); goto L_0C067D50; } UPD(0x0C067CCEu, 1); goto L_0C067CCE; }  /* 0C067CCA bf/s */
L_0C067CCE: BLKS(0x0C067CCEu);
	r0 = 0xB00000u; UPD(0x0C067CD0u, 1);  /* 0C067CCE mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C067CD0 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C067CEAu, 4); goto L_0C067CEA; }  /* 0C067CD2 bt */
L_0C067CD4: BLKS(0x0C067CD4u);
	r2 = 0xC3929E0u; UPD(0x0C067CD6u, 1);  /* 0C067CD4 mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C067CD8u, 1);  /* 0C067CD6 mov.l @Rm,Rn */
	r2 = r7;  /* 0C067CD8 mov Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C067CDCu, 2);  /* 0C067CDA mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C067CDC sub Rm,Rn */
	r2 += r7;  /* 0C067CDE add Rm,Rn */
	IF(0x0C067CE0u); T = (s32)r2 >= 0;  /* 0C067CE0 cmp/pz Rn */
	if (!T) { UPD(0x0C067D40u, 6); goto L_0C067D40; }  /* 0C067CE2 bf */
L_0C067CE4: BLKS(0x0C067CE4u);
	r0 = 0x880000u; UPD(0x0C067CE6u, 1);  /* 0C067CE4 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C067CE6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C067D00u, 4); goto L_0C067D00; }  /* 0C067CE8 bf */
L_0C067CEA: BLKS(0x0C067CEAu);
	r4 = 0x0u;  /* 0C067CEA mov #imm,Rn */
	W32(r3, r4); UPD(0x0C067CEEu, 2);  /* 0C067CEC mov.l Rm,@Rn */
L_0C067CEE: BLKS(0x0C067CEEu);
	r15 = r14;  /* 0C067CEE mov Rm,Rn */
	IF(0x0C067CF0u); PR = R32(r15); r15 += 4; UPD(0x0C067CF2u, 2);  /* 0C067CF0 lds.l @Rn+,pr */
	IF(0x0C067CF2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C067CF2 rts */
L_0C067D00: BLKS(0x0C067D00u);
	r3 += 0x44u;  /* 0C067D00 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C067D04u, 2);  /* 0C067D02 mov.w @Rm,Rn */
	r0 = r1 & 0xFFFF;  /* 0C067D04 extu.w Rm,Rn */
	r0 += 0x4u;  /* 0C067D06 add #imm,Rn */
	IF(0x0C067D08u); r0 >>= 2;  /* 0C067D08 shlr2 Rn */
	IF(0x0C067D0Au); T = r0 & 1; r0 >>= 1;  /* 0C067D0A shlr Rn */
	r3 += 0xFFFFFFBCu;  /* 0C067D0C add #imm,Rn */
	r0 &= 0x3Fu;  /* 0C067D0E and #imm,r0 */
	W32(r3 + 0x8u, r0); UPD(0x0C067D12u, 7);  /* 0C067D10 mov.l Rm,@(disp,Rn) */
	r7 = r3;  /* 0C067D12 mov Rm,Rn */
	r7 += 0x48u;  /* 0C067D14 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C067D18u, 3);  /* 0C067D16 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C067D18 add #imm,Rn */
	W8(r7, r0); UPD(0x0C067D1Cu, 2);  /* 0C067D1A mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C067D1C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C067D1E tst Rm,Rn */
	if (T) { UPD(0x0C067D2Au, 5); goto L_0C067D2A; }  /* 0C067D20 bt */
L_0C067D22: BLKS(0x0C067D22u);
	r0 = R32(r3 + 0xCu); UPD(0x0C067D24u, 1);  /* 0C067D22 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C067D24 add #imm,Rn */
	r0 &= 0x3u;  /* 0C067D26 and #imm,r0 */
	W32(r3 + 0xCu, r0); UPD(0x0C067D2Au, 3);  /* 0C067D28 mov.l Rm,@(disp,Rn) */
L_0C067D2A: BLKS(0x0C067D2Au);
	r3 = 0xC068E90u; UPD(0x0C067D2Cu, 1);  /* 0C067D2A mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C067D2C mov Rm,Rn */
	IF(0x0C067D2Eu); PR = R32(r15); r15 += 4; UPD(0x0C067D30u, 2);  /* 0C067D2E lds.l @Rn+,pr */
	IF(0x0C067D30u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C068E90u: TAIL(f_0C068E90); default: JUMPD(tv_); } }  /* 0C067D30 jmp @Rn */
L_0C067D40: BLKS(0x0C067D40u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C067CE4u, 3); goto L_0C067CE4; }  /* 0C067D40 bra */
L_0C067D50: BLKS(0x0C067D50u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C067CCEu, 3); goto L_0C067CCE; }  /* 0C067D50 bra */
L_0C067D60: BLKS(0x0C067D60u);
	r2 = r3;  /* 0C067D60 mov Rm,Rn */
	r2 += 0x48u;  /* 0C067D62 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C067D66u, 3);  /* 0C067D64 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C067D66 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C067D68 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C067D6A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C067CEEu, 6); goto L_0C067CEE; } UPD(0x0C067D70u, 1); goto L_0C067D70; }  /* 0C067D6C bf/s */
L_0C067D70: BLKS(0x0C067D70u);
	r0 = 0x0u;  /* 0C067D70 mov #imm,Rn */
	W8(r2, r0); UPD(0x0C067D74u, 2);  /* 0C067D72 mov.b Rm,@Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C067D76u, 1);  /* 0C067D74 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C067D76 add #imm,Rn */
	T = r0 == 0x10u;  /* 0C067D78 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C067D90u, 5); goto L_0C067D90; } UPD(0x0C067D7Eu, 1); goto L_0C067D7E; }  /* 0C067D7A bt/s */
L_0C067D7E: BLKS(0x0C067D7Eu);
	r7 = 0xC068E50u; UPD(0x0C067D80u, 1);  /* 0C067D7E mov.l @(disp,pc),Rn */
	IF(0x0C067D80u); { u32 t_ = r7; PR = 0x0C067D84u; IF(0x0C067D82u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C068E50, 0x0C068E50u, 0x0C067D84u); }  /* 0C067D80 jsr @Rn */
L_0C067D84: BLKS(0x0C067D84u);
	{ IF(0x0C067D86u); ; /* slot nop */ UPD(0x0C067CEEu, 3); goto L_0C067CEE; }  /* 0C067D84 bra */
L_0C067D90: BLKS(0x0C067D90u);
	r2 = 0x0u;  /* 0C067D90 mov #imm,Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C067D7Eu, 4); goto L_0C067D7E; }  /* 0C067D92 bra */
}

/* FUN_0c067dc0 */
void f_0C067DC0(sh3_t *c)
{
	LOCALS;
L_0C067DC0: BLKS(0x0C067DC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C067DC2u, 1);  /* 0C067DC0 mov.l Rm,@-Rn */
	r5 = 0x15u;  /* 0C067DC2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C067DC6u, 2);  /* 0C067DC4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C067DC8u, 1);  /* 0C067DC6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C067DCAu, 1);  /* 0C067DC8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C067DCA exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C067DCEu, 2);  /* 0C067DCC mov.l Rm,@-Rn */
	r4 = r10;  /* 0C067DCE mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C067DD2u, 2);  /* 0C067DD0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067DD4u, 1);  /* 0C067DD2 mov.l Rm,@-Rn */
	IF(0x0C067DD4u); r15 -= 4; W32(r15, PR); UPD(0x0C067DD6u, 1);  /* 0C067DD4 sts.l pr,@-Rn */
	r8 = 0xC068EE0u; UPD(0x0C067DD8u, 1);  /* 0C067DD6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C067DD8 add #imm,Rn */
	r1 = 0xC2755BCu; UPD(0x0C067DDCu, 2);  /* 0C067DDA mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C067DDC mov Rm,Rn */
	IF(0x0C067DDEu); { u32 t_ = r8; PR = 0x0C067DE2u; W32(r14, r1); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C067DE2u); }  /* 0C067DDE jsr @Rn */
L_0C067DE2: BLKS(0x0C067DE2u);
	T = (r0 & r0) == 0;  /* 0C067DE2 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C067E88u, 4); goto L_0C067E88; } goto L_0C067DE8; }  /* 0C067DE4 bt/s */
L_0C067DE8: BLKS(0x0C067DE8u);
	r2 = 0x280u; UPD(0x0C067DEAu, 2);  /* 0C067DE8 mov.w @(disp,pc),Rn */
	r3 = r10;  /* 0C067DEA mov Rm,Rn */
	IF(0x0C067DECu); MACL = r10 * r2;  /* 0C067DEC mul.l Rm,Rn */
	r3 += 0x1u;  /* 0C067DEE add #imm,Rn */
	r0 = 0xC283794u; UPD(0x0C067DF2u, 5);  /* 0C067DF0 mov.l @(disp,pc),Rn */
	IF(0x0C067DF2u); r11 = MACL;  /* 0C067DF2 sts macl,Rn */
	W32(r14 + 0x4u, r3); UPD(0x0C067DF6u, 2);  /* 0C067DF4 mov.l Rm,@(disp,Rn) */
	r12 = 0x0u;  /* 0C067DF6 mov #imm,Rn */
	r13 = 0x0u;  /* 0C067DF8 mov #imm,Rn */
	r11 += r0;  /* 0C067DFA add Rm,Rn */
	UPD(0x0C067DFCu, 3);
L_0C067DFC: BLKS(0x0C067DFCu);
	r8 = 0x2800u; UPD(0x0C067DFEu, 1);  /* 0C067DFC mov.w @(disp,pc),Rn */
	r2 = 0x50u;  /* 0C067DFE mov #imm,Rn */
	r3 = R32(r14); UPD(0x0C067E02u, 2);  /* 0C067E00 mov.l @Rm,Rn */
	IF(0x0C067E02u); MACL = r10 * r8;  /* 0C067E02 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r5 = v_; } UPD(0x0C067E06u, 3);  /* 0C067E04 mov.w @Rm+,Rn */
	IF(0x0C067E06u); r8 = MACL;  /* 0C067E06 sts macl,Rn */
	IF(0x0C067E08u); MACL = r5 * r2;  /* 0C067E08 mul.l Rm,Rn */
	r6 = 0xC217A04u; UPD(0x0C067E0Cu, 4);  /* 0C067E0A mov.l @(disp,pc),Rn */
	IF(0x0C067E0Cu); r7 = MACL;  /* 0C067E0C sts macl,Rn */
	r8 += r7;  /* 0C067E0E add Rm,Rn */
	r9 = 0xC0800000u; UPD(0x0C067E12u, 3);  /* 0C067E10 mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C067E12 add Rm,Rn */
	W32(r8, r9); UPD(0x0C067E16u, 2);  /* 0C067E14 mov.l Rm,@Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C067E18u, 1);  /* 0C067E16 mov.l @(disp,Rm),Rn */
	r9 = r12;  /* 0C067E18 mov Rm,Rn */
	W32(r8 + 0x4u, r1); UPD(0x0C067E1Cu, 2);  /* 0C067E1A mov.l Rm,@(disp,Rn) */
	IF(0x0C067E1Cu); r9 <<= 2;  /* 0C067E1C shll2 Rn */
	W32(r14, r3); UPD(0x0C067E20u, 2);  /* 0C067E1E mov.l Rm,@Rn */
	r0 = r9;  /* 0C067E20 mov Rm,Rn */
	r4 = 0xC17388Cu; UPD(0x0C067E24u, 2);  /* 0C067E22 mov.l @(disp,pc),Rn */
	IF(0x0C067E24u); r3 = R32(r0 + r4); UPD(0x0C067E26u, 1);  /* 0C067E24 mov.l @(r0,Rm),Rn */
	r0 = 0xC068DE0u; UPD(0x0C067E28u, 1);  /* 0C067E26 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C067E28 mov Rm,Rn */
	W32(r8 + 0x8u, r3); UPD(0x0C067E2Cu, 2);  /* 0C067E2A mov.l Rm,@(disp,Rn) */
	IF(0x0C067E2Cu); { u32 t_ = r0; PR = 0x0C067E30u; W32(r8 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C067E30u); }  /* 0C067E2C jsr @Rn */
L_0C067E30: BLKS(0x0C067E30u);
	r2 = 0xC173878u; UPD(0x0C067E32u, 1);  /* 0C067E30 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C067E32 mov Rm,Rn */
	IF(0x0C067E34u); r7 = R32(r0 + r2); UPD(0x0C067E36u, 2);  /* 0C067E34 mov.l @(r0,Rm),Rn */
	W32(r8 + 0x3Cu, r7); UPD(0x0C067E38u, 1);  /* 0C067E36 mov.l Rm,@(disp,Rn) */
	r6 = 0x808080u; UPD(0x0C067E3Au, 1);  /* 0C067E38 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C067E3A add #imm,Rn */
	W32(r8, r6); UPD(0x0C067E3Eu, 2);  /* 0C067E3C mov.l Rm,@Rn */
	r8 += 0xFFFFFFC0u;  /* 0C067E3E add #imm,Rn */
	r5 = r8;  /* 0C067E40 mov Rm,Rn */
	r5 += 0x48u;  /* 0C067E42 add #imm,Rn */
	r8 += 0x49u;  /* 0C067E44 add #imm,Rn */
	W8(r8, r13); UPD(0x0C067E48u, 5);  /* 0C067E46 mov.b Rm,@Rn */
	r6 = 0x14u;  /* 0C067E48 mov #imm,Rn */
	W8(r5, r13); UPD(0x0C067E4Cu, 2);  /* 0C067E4A mov.b Rm,@Rn */
	r8 += 0xFFFFFFB7u;  /* 0C067E4C add #imm,Rn */
	r4 = R32(r11 + 0x10u); UPD(0x0C067E50u, 2);  /* 0C067E4E mov.l @(disp,Rm),Rn */
	r5 = r12;  /* 0C067E50 mov Rm,Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C067E54u, 2);  /* 0C067E52 mov.l Rm,@(disp,Rn) */
	r5 += 0x1u;  /* 0C067E54 add #imm,Rn */
	r3 = R32(r11 + 0x14u); UPD(0x0C067E58u, 2);  /* 0C067E56 mov.l @(disp,Rm),Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C067E58 exts.w Rm,Rn */
	r2 = 0x40000u; UPD(0x0C067E5Cu, 2);  /* 0C067E5A mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C067E5C mov #imm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C067E60u, 2);  /* 0C067E5E mov.l Rm,@(disp,Rn) */
	T = (s32)r12 > (s32)r4;  /* 0C067E60 cmp/gt Rm,Rn */
	W32(r8 + 0x2Cu, r2); UPD(0x0C067E64u, 2);  /* 0C067E62 mov.l Rm,@(disp,Rn) */
	r9 = 0xC1738A0u; UPD(0x0C067E66u, 1);  /* 0C067E64 mov.l @(disp,pc),Rn */
	IF(0x0C067E66u); r7 = R32(r0 + r9); UPD(0x0C067E68u, 1);  /* 0C067E66 mov.l @(r0,Rm),Rn */
	W32(r8 + 0x30u, r7); UPD(0x0C067E6Au, 1);  /* 0C067E68 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Au;  /* 0C067E6A add #imm,Rn */
	{ u32 c_ = !T; W8(r8, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C067DFCu, 4); goto L_0C067DFC; } UPD(0x0C067E70u, 1); goto L_0C067E70; }  /* 0C067E6C bf/s */
L_0C067E70: BLKS(0x0C067E70u);
	r13 = 0xC0AFBA0u; UPD(0x0C067E72u, 1);  /* 0C067E70 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C067E72 mov Rm,Rn */
	r12 = 0xC1738B4u; UPD(0x0C067E76u, 2);  /* 0C067E74 mov.l @(disp,pc),Rn */
	IF(0x0C067E76u); { u32 t_ = r13; PR = 0x0C067E7Au; r5 = 0x55u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C067E7Au); }  /* 0C067E76 jsr @Rn */
L_0C067E7A: BLKS(0x0C067E7Au);
	r0 = r12;  /* 0C067E7A mov Rm,Rn */
	IF(0x0C067E7Cu); r11 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C067E7Eu, 2);  /* 0C067E7C mov.b @(r0,Rm),Rn */
	r4 = r10;  /* 0C067E7E mov Rm,Rn */
	r10 = 0xC0AFB20u; UPD(0x0C067E82u, 2);  /* 0C067E80 mov.l @(disp,pc),Rn */
	IF(0x0C067E82u); { u32 t_ = r10; PR = 0x0C067E86u; r5 = r11 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFB20, 0x0C0AFB20u, 0x0C067E86u); }  /* 0C067E82 jsr @Rn */
L_0C067E86: BLKS(0x0C067E86u);
	r0 = 0x0u;  /* 0C067E86 mov #imm,Rn */
	UPD(0x0C067E88u, 1);
L_0C067E88: BLKS(0x0C067E88u);
	r14 += 0x8u;  /* 0C067E88 add #imm,Rn */
	r15 = r14;  /* 0C067E8A mov Rm,Rn */
	IF(0x0C067E8Cu); PR = R32(r15); r15 += 4; UPD(0x0C067E8Eu, 3);  /* 0C067E8C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067E90u, 1);  /* 0C067E8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C067E92u, 1);  /* 0C067E90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C067E94u, 1);  /* 0C067E92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C067E96u, 1);  /* 0C067E94 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C067E98u, 1);  /* 0C067E96 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C067E9Au, 1);  /* 0C067E98 mov.l @Rm+,Rn */
	IF(0x0C067E9Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C067E9A rts */
}

void f_0C067EE0(sh3_t *c)
{
	LOCALS;
L_0C067EE0: BLKS(0x0C067EE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C067EE2u, 1);  /* 0C067EE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C067EE4u, 1);  /* 0C067EE2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C067EE6u, 1);  /* 0C067EE4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C067EE8u, 1);  /* 0C067EE6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C067EEAu, 1);  /* 0C067EE8 mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C067EEA exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C067EEEu, 2);  /* 0C067EEC mov.l Rm,@-Rn */
	r5 = 0x2800u; UPD(0x0C067EF0u, 1);  /* 0C067EEE mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C067EF0 exts.w Rm,Rn */
	IF(0x0C067EF2u); MACL = r13 * r5;  /* 0C067EF2 mul.l Rm,Rn */
	r4 = 0x50u;  /* 0C067EF4 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067EF8u, 5);  /* 0C067EF6 mov.l Rm,@-Rn */
	IF(0x0C067EF8u); r3 = MACL;  /* 0C067EF8 sts macl,Rn */
	IF(0x0C067EFAu); MACL = r12 * r4;  /* 0C067EFA mul.l Rm,Rn */
	r0 = 0xC217A04u; UPD(0x0C067EFEu, 4);  /* 0C067EFC mov.l @(disp,pc),Rn */
	IF(0x0C067EFEu); r2 = MACL;  /* 0C067EFE sts macl,Rn */
	IF(0x0C067F00u); r15 -= 4; W32(r15, PR); UPD(0x0C067F02u, 2);  /* 0C067F00 sts.l pr,@-Rn */
	r3 += r2;  /* 0C067F02 add Rm,Rn */
	r0 += r3;  /* 0C067F04 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C067F08u, 3);  /* 0C067F06 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C067F08 add #imm,Rn */
	r0 = 0x6u;  /* 0C067F0A mov #imm,Rn */
	T = r2 > r0;  /* 0C067F0C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C067F8Cu, 6); goto L_0C067F8C; } goto L_0C067F12; }  /* 0C067F0E bt/s */
L_0C067F12: BLKS(0x0C067F12u);
	r0 = 0xC067F24u;  /* 0C067F12 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C067F14 add Rm,Rn */
	IF(0x0C067F16u); r6 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C067F18u, 4);  /* 0C067F16 mov.w @(r0,Rm),Rn */
	IF(0x0C067F18u); { u32 tv_ = (r6 + 0x0C067F1Cu); u32 t_ = PHYS(tv_); IF(0x0C067F1Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C067F40u: goto L_0C067F40; case 0x0C067F8Cu: goto L_0C067F8C; case 0x0C068030u: goto L_0C068030; case 0x0C068260u: goto L_0C068260; case 0x0C068310u: goto L_0C068310; case 0x0C0684A0u: goto L_0C0684A0; default: JUMPD(tv_); } }  /* 0C067F18 braf Rn */
L_0C067F40: BLKS(0x0C067F40u);
	r9 = 0x280u; UPD(0x0C067F42u, 1);  /* 0C067F40 mov.w @(disp,pc),Rn */
	IF(0x0C067F42u); MACL = r13 * r9;  /* 0C067F42 mul.l Rm,Rn */
	r8 = 0xC283794u; UPD(0x0C067F46u, 3);  /* 0C067F44 mov.l @(disp,pc),Rn */
	IF(0x0C067F46u); r9 = MACL;  /* 0C067F46 sts macl,Rn */
	r9 += r8;  /* 0C067F48 add Rm,Rn */
	r2 = R32(r9); UPD(0x0C067F4Cu, 3);  /* 0C067F4A mov.l @Rm,Rn */
	r7 = 0x4000000u; UPD(0x0C067F4Eu, 1);  /* 0C067F4C mov.l @(disp,pc),Rn */
	r2 &= r7;  /* 0C067F4E and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C067F50 tst Rm,Rn */
	if (T) { UPD(0x0C068010u, 5); goto L_0C068010; }  /* 0C067F52 bt */
L_0C067F54: BLKS(0x0C067F54u);
	r4 = 0x50u;  /* 0C067F54 mov #imm,Rn */
	r5 = 0x2800u; UPD(0x0C067F58u, 2);  /* 0C067F56 mov.w @(disp,pc),Rn */
	IF(0x0C067F58u); MACL = r13 * r5;  /* 0C067F58 mul.l Rm,Rn */
	r3 = 0xC217A04u; UPD(0x0C067F5Cu, 3);  /* 0C067F5A mov.l @(disp,pc),Rn */
	IF(0x0C067F5Cu); r8 = MACL;  /* 0C067F5C sts macl,Rn */
	IF(0x0C067F5Eu); MACL = r12 * r4;  /* 0C067F5E mul.l Rm,Rn */
	r0 = R32(r9 + 0x10u); UPD(0x0C067F62u, 4);  /* 0C067F60 mov.l @(disp,Rm),Rn */
	IF(0x0C067F62u); r2 = MACL;  /* 0C067F62 sts macl,Rn */
	r8 += r2;  /* 0C067F64 add Rm,Rn */
	r8 += r3;  /* 0C067F66 add Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C067F6Au, 4);  /* 0C067F68 mov.l Rm,@(disp,Rn) */
	r10 = r8;  /* 0C067F6A mov Rm,Rn */
	r10 += 0x48u;  /* 0C067F6C add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C067F70u, 3);  /* 0C067F6E mov.b @Rm,Rn */
	r11 = R32(r9 + 0x14u); UPD(0x0C067F72u, 1);  /* 0C067F70 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C067F72 add #imm,Rn */
	W8(r10, r0); UPD(0x0C067F76u, 2);  /* 0C067F74 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C067F76 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C067F78 tst Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x28u, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C067FF0u, 5); goto L_0C067FF0; } UPD(0x0C067F7Eu, 1); goto L_0C067F7E; }  /* 0C067F7A bt/s */
L_0C067F7E: BLKS(0x0C067F7Eu);
	r0 = 0x24Cu; UPD(0x0C067F80u, 1);  /* 0C067F7E mov.w @(disp,pc),Rn */
	r10 = 0x20u;  /* 0C067F80 mov #imm,Rn */
	IF(0x0C067F82u); r1 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C067F84u, 2);  /* 0C067F82 mov.b @(r0,Rm),Rn */
	r10 &= r1;  /* 0C067F84 and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C067F86 tst Rm,Rn */
	if (T) { UPD(0x0C067FB0u, 5); goto L_0C067FB0; }  /* 0C067F88 bt */
L_0C067F8A: BLKS(0x0C067F8Au);
	IF(0x0C067F8Au); ;  /* 0C067F8A nop */
	UPD(0x0C067F8Cu, 1);
L_0C067F8C: BLKS(0x0C067F8Cu);
	r14 += 0xCu;  /* 0C067F8C add #imm,Rn */
	UPD(0x0C067F8Eu, 1);
L_0C067F8E: BLKS(0x0C067F8Eu);
	r15 = r14;  /* 0C067F8E mov Rm,Rn */
	IF(0x0C067F90u); PR = R32(r15); r15 += 4; UPD(0x0C067F92u, 2);  /* 0C067F90 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067F94u, 1);  /* 0C067F92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C067F96u, 1);  /* 0C067F94 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C067F98u, 1);  /* 0C067F96 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C067F9Au, 1);  /* 0C067F98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C067F9Cu, 1);  /* 0C067F9A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C067F9Eu, 1);  /* 0C067F9C mov.l @Rm+,Rn */
	IF(0x0C067F9Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C067F9E rts */
L_0C067FB0: BLKS(0x0C067FB0u);
	r3 = R32(r8 + 0x8u); UPD(0x0C067FB2u, 1);  /* 0C067FB0 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C067FB2 mov Rm,Rn */
	r11 = 0xC068E90u; UPD(0x0C067FB6u, 2);  /* 0C067FB4 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C067FB6 add #imm,Rn */
	W32(r8 + 0x8u, r3); UPD(0x0C067FBAu, 2);  /* 0C067FB8 mov.l Rm,@(disp,Rn) */
	r5 = r12;  /* 0C067FBA mov Rm,Rn */
	IF(0x0C067FBCu); { u32 t_ = r11; PR = 0x0C067FC0u; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C068E90, 0x0C068E90u, 0x0C067FC0u); }  /* 0C067FBC jsr @Rn */
L_0C067FC0: BLKS(0x0C067FC0u);
	W32(r8 + 0x3Cu, r10); UPD(0x0C067FC2u, 1);  /* 0C067FC0 mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C067FC2 mov Rm,Rn */
	r0 = 0x261u; UPD(0x0C067FC6u, 2);  /* 0C067FC4 mov.w @(disp,pc),Rn */
	IF(0x0C067FC6u); W8(r0 + r9, r10); UPD(0x0C067FC8u, 1);  /* 0C067FC6 mov.b Rm,@(r0,Rn) */
	r9 = 0xC0AFBA0u; UPD(0x0C067FCAu, 1);  /* 0C067FC8 mov.l @(disp,pc),Rn */
	r8 = 0xC173900u; UPD(0x0C067FCCu, 1);  /* 0C067FCA mov.l @(disp,pc),Rn */
	IF(0x0C067FCCu); { u32 t_ = r9; PR = 0x0C067FD0u; r5 = 0x56u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C067FD0u); }  /* 0C067FCC jsr @Rn */
L_0C067FD0: BLKS(0x0C067FD0u);
	r0 = r8;  /* 0C067FD0 mov Rm,Rn */
	IF(0x0C067FD2u); r12 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C067FD4u, 2);  /* 0C067FD2 mov.b @(r0,Rm),Rn */
	r14 += 0xCu;  /* 0C067FD4 add #imm,Rn */
	r0 = 0xC0AFB20u; UPD(0x0C067FD8u, 2);  /* 0C067FD6 mov.l @(disp,pc),Rn */
	r4 = r12 & 0xFF;  /* 0C067FD8 extu.b Rm,Rn */
	r15 = r14;  /* 0C067FDA mov Rm,Rn */
	IF(0x0C067FDCu); PR = R32(r15); r15 += 4; UPD(0x0C067FDEu, 3);  /* 0C067FDC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067FE0u, 1);  /* 0C067FDE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C067FE2u, 1);  /* 0C067FE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C067FE4u, 1);  /* 0C067FE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C067FE6u, 1);  /* 0C067FE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C067FE8u, 1);  /* 0C067FE6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C067FEAu, 1);  /* 0C067FE8 mov.l @Rm+,Rn */
	IF(0x0C067FEAu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFB20u: TAIL(f_0C0AFB20); default: JUMPD(tv_); } }  /* 0C067FEA jmp @Rn */
L_0C067FF0: BLKS(0x0C067FF0u);
	r0 = R32(r8 + 0xCu); UPD(0x0C067FF2u, 1);  /* 0C067FF0 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C067FF2 mov Rm,Rn */
	r10 = 0xC1738B8u; UPD(0x0C067FF6u, 2);  /* 0C067FF4 mov.l @(disp,pc),Rn */
	IF(0x0C067FF6u); r0 <<= 2;  /* 0C067FF6 shll2 Rn */
	r6 = 0xC068E50u; UPD(0x0C067FFAu, 2);  /* 0C067FF8 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C067FFA mov Rm,Rn */
	IF(0x0C067FFCu); r7 = R32(r0 + r10); UPD(0x0C067FFEu, 2);  /* 0C067FFC mov.l @(r0,Rm),Rn */
	IF(0x0C067FFEu); { u32 t_ = r6; PR = 0x0C068002u; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C068E50, 0x0C068E50u, 0x0C068002u); }  /* 0C067FFE jsr @Rn */
L_0C068002: BLKS(0x0C068002u);
	{ IF(0x0C068004u); ; /* slot nop */ UPD(0x0C067F7Eu, 3); goto L_0C067F7E; }  /* 0C068002 bra */
L_0C068010: BLKS(0x0C068010u);
	r3 = 0x2800u; UPD(0x0C068012u, 1);  /* 0C068010 mov.w @(disp,pc),Rn */
	r6 = 0x50u;  /* 0C068012 mov #imm,Rn */
	IF(0x0C068014u); MACL = r13 * r3;  /* 0C068014 mul.l Rm,Rn */
	IF(0x0C068016u); r0 = MACL;  /* 0C068016 sts macl,Rn */
	IF(0x0C068018u); MACL = r12 * r6;  /* 0C068018 mul.l Rm,Rn */
	r13 = 0xC217A04u; UPD(0x0C06801Cu, 7);  /* 0C06801A mov.l @(disp,pc),Rn */
	IF(0x0C06801Cu); r12 = MACL;  /* 0C06801C sts macl,Rn */
	r0 += r12;  /* 0C06801E add Rm,Rn */
	{ IF(0x0C068022u); W32(r0 + r13, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C067F8Cu, 5); goto L_0C067F8C; }  /* 0C068020 bra */
L_0C068030: BLKS(0x0C068030u);
	r10 = 0x2800u; UPD(0x0C068032u, 1);  /* 0C068030 mov.w @(disp,pc),Rn */
	r7 = 0x50u;  /* 0C068032 mov #imm,Rn */
	IF(0x0C068034u); MACL = r13 * r10;  /* 0C068034 mul.l Rm,Rn */
	r4 = 0xC217A04u; UPD(0x0C068038u, 4);  /* 0C068036 mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C068038 mov #imm,Rn */
	IF(0x0C06803Au); r9 = MACL;  /* 0C06803A sts macl,Rn */
	IF(0x0C06803Cu); MACL = r12 * r7;  /* 0C06803C mul.l Rm,Rn */
	r6 = 0xC068E50u; UPD(0x0C068040u, 5);  /* 0C06803E mov.l @(disp,pc),Rn */
	IF(0x0C068040u); r5 = MACL;  /* 0C068040 sts macl,Rn */
	r9 += r5;  /* 0C068042 add Rm,Rn */
	r9 += r4;  /* 0C068044 add Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C068048u, 4);  /* 0C068046 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C068048 mov Rm,Rn */
	r0 += 0x1u;  /* 0C06804A add #imm,Rn */
	r0 &= 0x7u;  /* 0C06804C and #imm,r0 */
	W32(r9 + 0xCu, r0); UPD(0x0C068050u, 4);  /* 0C06804E mov.l Rm,@(disp,Rn) */
	IF(0x0C068050u); { u32 t_ = r6; PR = 0x0C068054u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C068E50, 0x0C068E50u, 0x0C068054u); }  /* 0C068050 jsr @Rn */
L_0C068054: BLKS(0x0C068054u);
	r2 = r13;  /* 0C068054 mov Rm,Rn */
	IF(0x0C068056u); r2 <<= 2;  /* 0C068056 shll2 Rn */
	W32(r14 + 0x8u, r2); UPD(0x0C06805Au, 3);  /* 0C068058 mov.l Rm,@(disp,Rn) */
	r10 = r9;  /* 0C06805A mov Rm,Rn */
	UPD(0x0C06805Cu, 1);
L_0C06805C: BLKS(0x0C06805Cu);
	r8 = 0xC050D70u; UPD(0x0C06805Eu, 1);  /* 0C06805C mov.l @(disp,pc),Rn */
	IF(0x0C06805Eu); { u32 t_ = r8; PR = 0x0C068062u; r4 = 0x5Fu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C068062u); }  /* 0C06805E jsr @Rn */
L_0C068062: BLKS(0x0C068062u);
	r9 = r0;  /* 0C068062 mov Rm,Rn */
	r7 = 0x50u;  /* 0C068064 mov #imm,Rn */
	r0 = 0xD0u; UPD(0x0C068068u, 3);  /* 0C068066 mov.w @(disp,pc),Rn */
	IF(0x0C068068u); MACL = r12 * r7;  /* 0C068068 mul.l Rm,Rn */
	r9 += r0;  /* 0C06806A add Rm,Rn */
	r8 = (u32)(s32)(s16)r9;  /* 0C06806C exts.w Rm,Rn */
	IF(0x0C06806Eu); r5 = MACL;  /* 0C06806E sts macl,Rn */
	r9 = R32(r10 + 0x24u); UPD(0x0C068072u, 6);  /* 0C068070 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C068072 add #imm,Rn */
	r4 = 0xFFE00000u; UPD(0x0C068076u, 2);  /* 0C068074 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C068076 mov #imm,Rn */
	r0 = 0xC058060u; UPD(0x0C06807Au, 2);  /* 0C068078 mov.l @(disp,pc),Rn */
	r6 = 0x14u;  /* 0C06807A mov #imm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C06807Eu, 2);  /* 0C06807C mov.l Rm,@(disp,Rn) */
	r9 += r4;  /* 0C06807E add Rm,Rn */
	W32(r15, r1); UPD(0x0C068082u, 2);  /* 0C068080 mov.l Rm,@Rn */
	r4 = r8;  /* 0C068082 mov Rm,Rn */
	r5 = 0x60000u; UPD(0x0C068086u, 2);  /* 0C068084 mov.l @(disp,pc),Rn */
	IF(0x0C068086u); { u32 t_ = r0; PR = 0x0C06808Au; W32(r15 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06808Au); }  /* 0C068086 jsr @Rn */
L_0C06808A: BLKS(0x0C06808Au);
	r4 = r8;  /* 0C06808A mov Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C06808Eu, 2);  /* 0C06808C mov.l @(disp,pc),Rn */
	r5 = 0x60000u; UPD(0x0C068090u, 1);  /* 0C06808E mov.l @(disp,pc),Rn */
	IF(0x0C068090u); { u32 t_ = r8; PR = 0x0C068094u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C068094u); }  /* 0C068090 jsr @Rn */
L_0C068094: BLKS(0x0C068094u);
	W32(r15 + 0xCu, r0); UPD(0x0C068096u, 1);  /* 0C068094 mov.l Rm,@(disp,Rn) */
	r6 = r9;  /* 0C068096 mov Rm,Rn */
	r0 = R32(r14 + 0x8u); UPD(0x0C06809Au, 2);  /* 0C068098 mov.l @(disp,Rm),Rn */
	r8 = r11;  /* 0C06809A mov Rm,Rn */
	r2 = 0xC1738F8u; UPD(0x0C06809Eu, 2);  /* 0C06809C mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C06809E mov #imm,Rn */
	IF(0x0C0680A0u); r3 = R32(r0 + r2); UPD(0x0C0680A2u, 2);  /* 0C0680A0 mov.l @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C0680A2 add #imm,Rn */
	r9 = 0xC0ACA40u; UPD(0x0C0680A6u, 2);  /* 0C0680A4 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r8;  /* 0C0680A6 exts.w Rm,Rn */
	W32(r15 + 0x10u, r3); UPD(0x0C0680AAu, 2);  /* 0C0680A8 mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C0680ACu, 1);  /* 0C0680AA mov.l @Rm,Rn */
	IF(0x0C0680ACu); { u32 t_ = r9; PR = 0x0C0680B0u; r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C0680B0u); }  /* 0C0680AC jsr @Rn */
L_0C0680B0: BLKS(0x0C0680B0u);
	r0 = 0x7u;  /* 0C0680B0 mov #imm,Rn */
	T = (s32)r11 > (s32)r0;  /* 0C0680B2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06805Cu, 5); goto L_0C06805C; } goto L_0C0680B8; }  /* 0C0680B4 bf/s */
L_0C0680B8: BLKS(0x0C0680B8u);
	r10 = 0x2800u; UPD(0x0C0680BAu, 2);  /* 0C0680B8 mov.w @(disp,pc),Rn */
	IF(0x0C0680BAu); MACL = r13 * r10;  /* 0C0680BA mul.l Rm,Rn */
	r9 = R32(r14 + 0x4u); UPD(0x0C0680BEu, 3);  /* 0C0680BC mov.l @(disp,Rm),Rn */
	IF(0x0C0680BEu); r10 = MACL;  /* 0C0680BE sts macl,Rn */
	r11 = 0xC217A04u; UPD(0x0C0680C2u, 2);  /* 0C0680C0 mov.l @(disp,pc),Rn */
	r9 += r10;  /* 0C0680C2 add Rm,Rn */
	r9 += r11;  /* 0C0680C4 add Rm,Rn */
	r3 = R32(r9); UPD(0x0C0680C8u, 3);  /* 0C0680C6 mov.l @Rm,Rn */
	r7 = 0xC000000u; UPD(0x0C0680CAu, 1);  /* 0C0680C8 mov.l @(disp,pc),Rn */
	T = (r3 & r7) == 0;  /* 0C0680CA tst Rm,Rn */
	if (!T) { UPD(0x0C0681B0u, 4); goto L_0C0681B0; }  /* 0C0680CC bf */
L_0C0680CE: BLKS(0x0C0680CEu);
	r4 = 0x280u; UPD(0x0C0680D0u, 1);  /* 0C0680CE mov.w @(disp,pc),Rn */
	IF(0x0C0680D0u); MACL = r13 * r4;  /* 0C0680D0 mul.l Rm,Rn */
	r2 = 0xC283794u; UPD(0x0C0680D4u, 3);  /* 0C0680D2 mov.l @(disp,pc),Rn */
	IF(0x0C0680D4u); r8 = MACL;  /* 0C0680D4 sts macl,Rn */
	r8 += r2;  /* 0C0680D6 add Rm,Rn */
	r2 = R32(r8); UPD(0x0C0680DAu, 3);  /* 0C0680D8 mov.l @Rm,Rn */
	r6 = 0x4000000u; UPD(0x0C0680DCu, 1);  /* 0C0680DA mov.l @(disp,pc),Rn */
	r2 &= r6;  /* 0C0680DC and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0680DE tst Rm,Rn */
	if (!T) { UPD(0x0C068140u, 5); goto L_0C068140; }  /* 0C0680E0 bf */
L_0C0680E2: BLKS(0x0C0680E2u);
	W32(r9, r2); UPD(0x0C0680E4u, 1);  /* 0C0680E2 mov.l Rm,@Rn */
L_0C0680E4: BLKS(0x0C0680E4u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C067F8Eu, 3); goto L_0C067F8E; }  /* 0C0680E4 bra */
L_0C068140: BLKS(0x0C068140u);
	r11 = R32(r8 + 0x10u); UPD(0x0C068142u, 1);  /* 0C068140 mov.l @(disp,Rm),Rn */
	r10 = R32(r9 + 0x2Cu); UPD(0x0C068144u, 1);  /* 0C068142 mov.l @(disp,Rm),Rn */
	r11 += r10;  /* 0C068144 add Rm,Rn */
	W32(r9 + 0x24u, r11); UPD(0x0C068148u, 2);  /* 0C068146 mov.l Rm,@(disp,Rn) */
	r10 = 0x20u;  /* 0C068148 mov #imm,Rn */
	r5 = R32(r8 + 0x14u); UPD(0x0C06814Cu, 2);  /* 0C06814A mov.l @(disp,Rm),Rn */
	r0 = R32(r9 + 0x30u); UPD(0x0C06814Eu, 1);  /* 0C06814C mov.l @(disp,Rm),Rn */
	r5 += r0;  /* 0C06814E add Rm,Rn */
	W32(r9 + 0x28u, r5); UPD(0x0C068152u, 2);  /* 0C068150 mov.l Rm,@(disp,Rn) */
	r0 = 0x24Cu; UPD(0x0C068154u, 1);  /* 0C068152 mov.w @(disp,pc),Rn */
	IF(0x0C068154u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C068156u, 1);  /* 0C068154 mov.b @(r0,Rm),Rn */
	r10 &= r1;  /* 0C068156 and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C068158 tst Rm,Rn */
	if (!T) { UPD(0x0C0680E4u, 5); goto L_0C0680E4; }  /* 0C06815A bf */
L_0C06815C: BLKS(0x0C06815Cu);
	r3 |= r7;  /* 0C06815C or Rm,Rn */
	r6 = 0xC068E90u; UPD(0x0C068160u, 2);  /* 0C06815E mov.l @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C068160 mov #imm,Rn */
	W32(r9, r3); UPD(0x0C068164u, 2);  /* 0C068162 mov.l Rm,@Rn */
	r5 = r12;  /* 0C068164 mov Rm,Rn */
	W32(r9 + 0x8u, r2); UPD(0x0C068168u, 2);  /* 0C068166 mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C068168 mov Rm,Rn */
	IF(0x0C06816Au); { u32 t_ = r6; PR = 0x0C06816Eu; W32(r9 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C068E90, 0x0C068E90u, 0x0C06816Eu); }  /* 0C06816A jsr @Rn */
L_0C06816E: BLKS(0x0C06816Eu);
	r7 = 0x30000u; UPD(0x0C068170u, 1);  /* 0C06816E mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C068170 mov Rm,Rn */
	W32(r9 + 0x2Cu, r7); UPD(0x0C068174u, 2);  /* 0C068172 mov.l Rm,@(disp,Rn) */
	r5 = 0x56u;  /* 0C068174 mov #imm,Rn */
	W32(r9 + 0x30u, r10); UPD(0x0C068178u, 2);  /* 0C068176 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x3Cu, r10); UPD(0x0C06817Au, 1);  /* 0C068178 mov.l Rm,@(disp,Rn) */
	r9 = 0xC0AFBA0u; UPD(0x0C06817Cu, 1);  /* 0C06817A mov.l @(disp,pc),Rn */
	r0 = 0x261u; UPD(0x0C06817Eu, 1);  /* 0C06817C mov.w @(disp,pc),Rn */
	IF(0x0C06817Eu); { u32 t_ = r9; PR = 0x0C068182u; IF(0x0C068180u); W8(r0 + r8, r10); /* slot mov.b Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C068182u); }  /* 0C06817E jsr @Rn */
L_0C068182: BLKS(0x0C068182u);
	r3 = 0xC173900u; UPD(0x0C068184u, 1);  /* 0C068182 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C068184 mov Rm,Rn */
	r0 = r3;  /* 0C068186 mov Rm,Rn */
	IF(0x0C068188u); r12 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C06818Au, 3);  /* 0C068188 mov.b @(r0,Rm),Rn */
	r5 = r12 & 0xFF;  /* 0C06818A extu.b Rm,Rn */
	UPD(0x0C06818Cu, 1);
L_0C06818C: BLKS(0x0C06818Cu);
	r1 = 0xC0AFB20u; UPD(0x0C06818Eu, 1);  /* 0C06818C mov.l @(disp,pc),Rn */
L_0C06818E: BLKS(0x0C06818Eu);
	r14 += 0xCu;  /* 0C06818E add #imm,Rn */
	r15 = r14;  /* 0C068190 mov Rm,Rn */
	IF(0x0C068192u); PR = R32(r15); r15 += 4; UPD(0x0C068194u, 3);  /* 0C068192 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C068196u, 1);  /* 0C068194 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C068198u, 1);  /* 0C068196 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06819Au, 1);  /* 0C068198 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06819Cu, 1);  /* 0C06819A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06819Eu, 1);  /* 0C06819C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0681A0u, 1);  /* 0C06819E mov.l @Rm+,Rn */
	IF(0x0C0681A0u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C068E50u: TAIL(f_0C068E50); case 0x0C0AFB20u: TAIL(f_0C0AFB20); default: JUMPD(tv_); } }  /* 0C0681A0 jmp @Rn */
L_0C0681B0: BLKS(0x0C0681B0u);
	r8 = R32(r9 + 0x24u); UPD(0x0C0681B2u, 1);  /* 0C0681B0 mov.l @(disp,Rm),Rn */
	r4 = R32(r9 + 0x28u); UPD(0x0C0681B4u, 1);  /* 0C0681B2 mov.l @(disp,Rm),Rn */
	r5 = R32(r9 + 0x2Cu); UPD(0x0C0681B6u, 1);  /* 0C0681B4 mov.l @(disp,Rm),Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C0681B8u, 1);  /* 0C0681B6 mov.l @(disp,Rm),Rn */
	r8 += r5;  /* 0C0681B8 add Rm,Rn */
	r2 = 0xFF600000u; UPD(0x0C0681BCu, 2);  /* 0C0681BA mov.l @(disp,pc),Rn */
	r4 += r1;  /* 0C0681BC add Rm,Rn */
	r2 += r8;  /* 0C0681BE add Rm,Rn */
	W32(r9 + 0x24u, r8); UPD(0x0C0681C2u, 3);  /* 0C0681C0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0681C2u); T = (s32)r2 >= 0;  /* 0C0681C2 cmp/pz Rn */
	{ u32 c_ = !T; W32(r9 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C068250u, 4); goto L_0C068250; } UPD(0x0C0681C8u, 1); goto L_0C0681C8; }  /* 0C0681C4 bf/s */
L_0C0681C8: BLKS(0x0C0681C8u);
	r0 = 0xE00000u; UPD(0x0C0681CAu, 1);  /* 0C0681C8 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0681CA cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0681E0u, 4); goto L_0C0681E0; }  /* 0C0681CC bf */
L_0C0681CE: BLKS(0x0C0681CEu);
	r13 = 0x0u;  /* 0C0681CE mov #imm,Rn */
	W32(r9, r13); UPD(0x0C0681D2u, 2);  /* 0C0681D0 mov.l Rm,@Rn */
L_0C0681D2: BLKS(0x0C0681D2u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C067F8Eu, 3); goto L_0C067F8E; }  /* 0C0681D2 bra */
L_0C0681E0: BLKS(0x0C0681E0u);
	r11 = r9;  /* 0C0681E0 mov Rm,Rn */
	r11 += 0x48u;  /* 0C0681E2 add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r11); UPD(0x0C0681E6u, 3);  /* 0C0681E4 mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C0681E6 add #imm,Rn */
	W8(r11, r12); UPD(0x0C0681EAu, 2);  /* 0C0681E8 mov.b Rm,@Rn */
	r11 = 0x3u;  /* 0C0681EA mov #imm,Rn */
	r11 &= r12;  /* 0C0681EC and Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C0681EE tst Rm,Rn */
	if (!T) { UPD(0x0C0681D2u, 6); goto L_0C0681D2; }  /* 0C0681F0 bf */
L_0C0681F2: BLKS(0x0C0681F2u);
	r4 = r13;  /* 0C0681F2 mov Rm,Rn */
	r8 = 0xC068EE0u; UPD(0x0C0681F6u, 2);  /* 0C0681F4 mov.l @(disp,pc),Rn */
	IF(0x0C0681F6u); { u32 t_ = r8; PR = 0x0C0681FAu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C0681FAu); }  /* 0C0681F6 jsr @Rn */
L_0C0681FA: BLKS(0x0C0681FAu);
	T = (r0 & r0) == 0;  /* 0C0681FA tst Rm,Rn */
	if (T) { UPD(0x0C0681D2u, 4); goto L_0C0681D2; }  /* 0C0681FC bt */
L_0C0681FE: BLKS(0x0C0681FEu);
	r12 = 0x50u;  /* 0C0681FE mov #imm,Rn */
	r7 = 0xC2755BCu; UPD(0x0C068202u, 2);  /* 0C068200 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r7); UPD(0x0C068204u, 1);  /* 0C068202 mov.w @Rm,Rn */
	r8 = 0x2u;  /* 0C068204 mov #imm,Rn */
	IF(0x0C068206u); MACL = r5 * r12;  /* 0C068206 mul.l Rm,Rn */
	r1 = 0xC217A04u; UPD(0x0C06820Au, 4);  /* 0C068208 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C06820A mov Rm,Rn */
	IF(0x0C06820Cu); r12 = MACL;  /* 0C06820C sts macl,Rn */
	r12 += r10;  /* 0C06820E add Rm,Rn */
	r0 = 0xC068DE0u; UPD(0x0C068212u, 4);  /* 0C068210 mov.l @(disp,pc),Rn */
	r12 += r1;  /* 0C068212 add Rm,Rn */
	r10 = R32(r9 + 0x4u); UPD(0x0C068216u, 2);  /* 0C068214 mov.l @(disp,Rm),Rn */
	r3 = 0xCD800000u; UPD(0x0C068218u, 1);  /* 0C068216 mov.l @(disp,pc),Rn */
	W32(r12 + 0x4u, r10); UPD(0x0C06821Au, 1);  /* 0C068218 mov.l Rm,@(disp,Rn) */
	W32(r12, r3); UPD(0x0C06821Cu, 1);  /* 0C06821A mov.l Rm,@Rn */
	r10 = r12;  /* 0C06821C mov Rm,Rn */
	W32(r12 + 0x8u, r8); UPD(0x0C068220u, 2);  /* 0C06821E mov.l Rm,@(disp,Rn) */
	r10 += 0x40u;  /* 0C068220 add #imm,Rn */
	IF(0x0C068222u); { u32 t_ = r0; PR = 0x0C068226u; W32(r12 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C068226u); }  /* 0C068222 jsr @Rn */
L_0C068226: BLKS(0x0C068226u);
	r6 = R32(r9 + 0x24u); UPD(0x0C068228u, 1);  /* 0C068226 mov.l @(disp,Rm),Rn */
	r2 = 0xFFE00000u; UPD(0x0C06822Au, 1);  /* 0C068228 mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C06822Cu, 1);  /* 0C06822A mov.l @(disp,Rm),Rn */
	r6 += r2;  /* 0C06822C add Rm,Rn */
	r5 = 0x204FFFFu; UPD(0x0C068230u, 2);  /* 0C06822E mov.l @(disp,pc),Rn */
	r9 += 0x4Au;  /* 0C068230 add #imm,Rn */
	r4 = 0x808080u; UPD(0x0C068234u, 2);  /* 0C068232 mov.l @(disp,pc),Rn */
	W32(r12 + 0x3Cu, r5); UPD(0x0C068236u, 1);  /* 0C068234 mov.l Rm,@(disp,Rn) */
	W32(r10, r4); UPD(0x0C068238u, 1);  /* 0C068236 mov.l Rm,@Rn */
	W32(r12 + 0x24u, r6); UPD(0x0C06823Au, 1);  /* 0C068238 mov.l Rm,@(disp,Rn) */
	r10 += 0x8u;  /* 0C06823A add #imm,Rn */
	W32(r12 + 0x28u, r7); UPD(0x0C06823Eu, 2);  /* 0C06823C mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C068240u, 1);  /* 0C06823E mov.b @Rm,Rn */
	r12 += 0x4Au;  /* 0C068240 add #imm,Rn */
	W8(r12, r3); UPD(0x0C068244u, 2);  /* 0C068242 mov.b Rm,@Rn */
	W8(r10, r11); UPD(0x0C068246u, 1);  /* 0C068244 mov.b Rm,@Rn */
L_0C068246: BLKS(0x0C068246u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C067F8Eu, 3); goto L_0C067F8E; }  /* 0C068246 bra */
L_0C068250: BLKS(0x0C068250u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0681C8u, 3); goto L_0C0681C8; }  /* 0C068250 bra */
L_0C068260: BLKS(0x0C068260u);
	r2 = 0x2800u; UPD(0x0C068262u, 1);  /* 0C068260 mov.w @(disp,pc),Rn */
	r6 = 0x50u;  /* 0C068262 mov #imm,Rn */
	IF(0x0C068264u); MACL = r13 * r2;  /* 0C068264 mul.l Rm,Rn */
	r9 = 0xC217A04u; UPD(0x0C068268u, 4);  /* 0C068266 mov.l @(disp,pc),Rn */
	IF(0x0C068268u); r7 = MACL;  /* 0C068268 sts macl,Rn */
	IF(0x0C06826Au); MACL = r12 * r6;  /* 0C06826A mul.l Rm,Rn */
	IF(0x0C06826Cu); r11 = MACL;  /* 0C06826C sts macl,Rn */
	r7 += r11;  /* 0C06826E add Rm,Rn */
	r7 += r9;  /* 0C068270 add Rm,Rn */
	r3 = r7;  /* 0C068272 mov Rm,Rn */
	r3 += 0x48u;  /* 0C068274 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C068278u, 9);  /* 0C068276 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C068278 add #imm,Rn */
	W8(r3, r0); UPD(0x0C06827Cu, 2);  /* 0C06827A mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C06827C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06827E tst Rm,Rn */
	if (!T) { UPD(0x0C06828Au, 5); goto L_0C06828A; }  /* 0C068280 bf */
L_0C068282: BLKS(0x0C068282u);
	r4 = R32(r7 + 0x3Cu); UPD(0x0C068284u, 1);  /* 0C068282 mov.l @(disp,Rm),Rn */
	r5 = 0xFFFFFEFFu; UPD(0x0C068286u, 1);  /* 0C068284 mov.w @(disp,pc),Rn */
	r4 += r5;  /* 0C068286 add Rm,Rn */
	W32(r7 + 0x3Cu, r4); UPD(0x0C06828Au, 2);  /* 0C068288 mov.l Rm,@(disp,Rn) */
L_0C06828A: BLKS(0x0C06828Au);
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C06828Cu, 1);  /* 0C06828A mov.b @Rm,Rn */
	r0 &= 0x3u;  /* 0C06828C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06828E tst Rm,Rn */
	if (!T) { UPD(0x0C068246u, 5); goto L_0C068246; }  /* 0C068290 bf */
L_0C068292: BLKS(0x0C068292u);
	r10 = R32(r7 + 0xCu); UPD(0x0C068294u, 1);  /* 0C068292 mov.l @(disp,Rm),Rn */
	r8 = 0x80u; UPD(0x0C068296u, 1);  /* 0C068294 mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C068296 add #imm,Rn */
	T = r10 == r8;  /* 0C068298 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r7 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0682B0u, 5); goto L_0C0682B0; } UPD(0x0C06829Eu, 1); goto L_0C06829E; }  /* 0C06829A bf/s */
L_0C06829E: BLKS(0x0C06829Eu);
	W32(r7, r0); UPD(0x0C0682A0u, 1);  /* 0C06829E mov.l Rm,@Rn */
L_0C0682A0: BLKS(0x0C0682A0u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C067F8Eu, 3); goto L_0C067F8E; }  /* 0C0682A0 bra */
L_0C0682B0: BLKS(0x0C0682B0u);
	r1 = 0xC068E50u; UPD(0x0C0682B2u, 1);  /* 0C0682B0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0682B2 mov Rm,Rn */
	{ r5 = r12; /* slot mov Rm,Rn */ UPD(0x0C06818Eu, 4); goto L_0C06818E; }  /* 0C0682B4 bra */
L_0C068310: BLKS(0x0C068310u);
	r3 = 0x2800u; UPD(0x0C068312u, 1);  /* 0C068310 mov.w @(disp,pc),Rn */
	r6 = 0x50u;  /* 0C068312 mov #imm,Rn */
	IF(0x0C068314u); MACL = r13 * r3;  /* 0C068314 mul.l Rm,Rn */
	r9 = 0xC217A04u; UPD(0x0C068318u, 4);  /* 0C068316 mov.l @(disp,pc),Rn */
	IF(0x0C068318u); r3 = MACL;  /* 0C068318 sts macl,Rn */
	IF(0x0C06831Au); MACL = r12 * r6;  /* 0C06831A mul.l Rm,Rn */
	r0 = 0x4000u; UPD(0x0C06831Eu, 4);  /* 0C06831C mov.w @(disp,pc),Rn */
	IF(0x0C06831Eu); r11 = MACL;  /* 0C06831E sts macl,Rn */
	r3 += r11;  /* 0C068320 add Rm,Rn */
	r3 += r9;  /* 0C068322 add Rm,Rn */
	r3 += 0x4Cu;  /* 0C068324 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C068328u, 5);  /* 0C068326 mov.w @Rm,Rn */
	r3 += 0xFFFFFFB4u;  /* 0C068328 add #imm,Rn */
	r6 = R32(r3); UPD(0x0C06832Cu, 2);  /* 0C06832A mov.l @Rm,Rn */
	T = (r6 & r0) == 0;  /* 0C06832C tst Rm,Rn */
	{ u32 c_ = T; r2 = r7 & 0xFFFF; /* slot extu.w Rm,Rn */ if (c_) { UPD(0x0C06835Cu, 4); goto L_0C06835C; } goto L_0C068332; }  /* 0C06832E bt/s */
L_0C068332: BLKS(0x0C068332u);
	r0 = 0xB4u; UPD(0x0C068334u, 2);  /* 0C068332 mov.w @(disp,pc),Rn */
	IF(0x0C068334u); MACL = r2 * r0;  /* 0C068334 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C068338u, 3);  /* 0C068336 mov.l @(disp,pc),Rn */
	IF(0x0C068338u); r7 = MACL;  /* 0C068338 sts macl,Rn */
	r7 += r10;  /* 0C06833A add Rm,Rn */
	r8 = R32(r7); UPD(0x0C06833Eu, 3);  /* 0C06833C mov.l @Rm,Rn */
	r7 += 0x3Cu;  /* 0C06833E add #imm,Rn */
	T = (r8 & r8) == 0;  /* 0C068340 tst Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r7); UPD(0x0C068344u, 3);  /* 0C068342 mov.w @Rm,Rn */
	IF(0x0C068344u); r4 = T;  /* 0C068344 movt Rn */
	T = (r5 & r5) == 0;  /* 0C068346 tst Rm,Rn */
	IF(0x0C068348u); r2 = T;  /* 0C068348 movt Rn */
	r4 |= r2;  /* 0C06834A or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06834C tst Rm,Rn */
	{ u32 c_ = !T; r7 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C068356u, 8); goto L_0C068356; } goto L_0C068352; }  /* 0C06834E bf/s */
L_0C068352: BLKS(0x0C068352u);
	{ r11 = R32(r7 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C068460u, 4); goto L_0C068460; }  /* 0C068352 bra */
L_0C068356: BLKS(0x0C068356u);
	r7 = 0xFFFFBFFFu; UPD(0x0C068358u, 1);  /* 0C068356 mov.w @(disp,pc),Rn */
	r6 &= r7;  /* 0C068358 and Rm,Rn */
	W32(r3, r6); UPD(0x0C06835Cu, 2);  /* 0C06835A mov.l Rm,@Rn */
L_0C06835C: BLKS(0x0C06835Cu);
	r10 = 0x2800u; UPD(0x0C06835Eu, 1);  /* 0C06835C mov.w @(disp,pc),Rn */
	r8 = 0x50u;  /* 0C06835E mov #imm,Rn */
	IF(0x0C068360u); MACL = r13 * r10;  /* 0C068360 mul.l Rm,Rn */
	r2 = 0xC217A04u; UPD(0x0C068364u, 4);  /* 0C068362 mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C068364 mov #imm,Rn */
	IF(0x0C068366u); r10 = MACL;  /* 0C068366 sts macl,Rn */
	IF(0x0C068368u); MACL = r12 * r8;  /* 0C068368 mul.l Rm,Rn */
	IF(0x0C06836Au); r5 = MACL;  /* 0C06836A sts macl,Rn */
	r10 += r5;  /* 0C06836C add Rm,Rn */
	r10 += r2;  /* 0C06836E add Rm,Rn */
	r4 = r10;  /* 0C068370 mov Rm,Rn */
	r4 += 0x48u;  /* 0C068372 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C068376u, 10);  /* 0C068374 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C068376 add #imm,Rn */
	r1 &= r3;  /* 0C068378 and Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C06837A tst Rm,Rn */
	{ u32 c_ = !T; W8(r4, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0682A0u, 6); goto L_0C0682A0; } UPD(0x0C068380u, 1); goto L_0C068380; }  /* 0C06837C bf/s */
L_0C068380: BLKS(0x0C068380u);
	r0 = R32(r10 + 0xCu); UPD(0x0C068382u, 1);  /* 0C068380 mov.l @(disp,Rm),Rn */
	T = r0 == 0x17u;  /* 0C068382 cmp/eq #imm,r0 */
	{ u32 c_ = T; T = r0 == 0x1Fu; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0683F0u, 4); goto L_0C0683F0; } goto L_0C068388; }  /* 0C068384 bt/s */
L_0C068388: BLKS(0x0C068388u);
	{ u32 c_ = T; r0 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0683E0u, 4); goto L_0C0683E0; } goto L_0C06838C; }  /* 0C068388 bt/s */
L_0C06838C: BLKS(0x0C06838Cu);
	W32(r10 + 0xCu, r0); UPD(0x0C06838Eu, 2);  /* 0C06838C mov.l Rm,@(disp,Rn) */
	r5 = r12;  /* 0C06838E mov Rm,Rn */
	r0 = 0xC068E50u; UPD(0x0C068392u, 2);  /* 0C068390 mov.l @(disp,pc),Rn */
	r12 = 0xC050D70u; UPD(0x0C068394u, 1);  /* 0C068392 mov.l @(disp,pc),Rn */
	IF(0x0C068394u); { u32 t_ = r0; PR = 0x0C068398u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C068E50, 0x0C068E50u, 0x0C068398u); }  /* 0C068394 jsr @Rn */
L_0C068398: BLKS(0x0C068398u);
	r8 = 0xC0AFE40u; UPD(0x0C06839Au, 1);  /* 0C068398 mov.l @(disp,pc),Rn */
	r11 = 0xC058060u; UPD(0x0C06839Cu, 1);  /* 0C06839A mov.l @(disp,pc),Rn */
	IF(0x0C06839Cu); { u32 t_ = r12; PR = 0x0C0683A0u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0683A0u); }  /* 0C06839C jsr @Rn */
L_0C0683A0: BLKS(0x0C0683A0u);
	IF(0x0C0683A0u); { u32 t_ = r8; PR = 0x0C0683A4u; r9 = r0; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0683A4u); }  /* 0C0683A0 jsr @Rn */
L_0C0683A4: BLKS(0x0C0683A4u);
	r1 = (u32)(s32)(s16)r0;  /* 0C0683A4 exts.w Rm,Rn */
	IF(0x0C0683A6u); r9 <<= 16;  /* 0C0683A6 shll16 Rn */
	r4 = r1;  /* 0C0683A8 mov Rm,Rn */
	W32(r14, r1); UPD(0x0C0683ACu, 4);  /* 0C0683AA mov.l Rm,@Rn */
	IF(0x0C0683ACu); { u32 t_ = r11; PR = 0x0C0683B0u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0683B0u); }  /* 0C0683AC jsr @Rn */
L_0C0683B0: BLKS(0x0C0683B0u);
	r5 = r9;  /* 0C0683B0 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0683B4u, 2);  /* 0C0683B2 mov.l @(disp,pc),Rn */
	r11 = R32(r10 + 0x24u); UPD(0x0C0683B6u, 1);  /* 0C0683B4 mov.l @(disp,Rm),Rn */
	r4 = R32(r14); UPD(0x0C0683B8u, 1);  /* 0C0683B6 mov.l @Rm,Rn */
	IF(0x0C0683B8u); { u32 t_ = r9; PR = 0x0C0683BCu; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0683BCu); }  /* 0C0683B8 jsr @Rn */
L_0C0683BC: BLKS(0x0C0683BCu);
	r8 = R32(r10 + 0x28u); UPD(0x0C0683BEu, 1);  /* 0C0683BC mov.l @(disp,Rm),Rn */
	r4 = 0xFFu; UPD(0x0C0683C0u, 1);  /* 0C0683BE mov.w @(disp,pc),Rn */
	IF(0x0C0683C0u); { u32 t_ = r12; PR = 0x0C0683C4u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0683C4u); }  /* 0C0683C0 jsr @Rn */
L_0C0683C4: BLKS(0x0C0683C4u);
	r7 = R32(r14); UPD(0x0C0683C6u, 1);  /* 0C0683C4 mov.l @Rm,Rn */
	r4 = r11;  /* 0C0683C6 mov Rm,Rn */
	r0 += r7;  /* 0C0683C8 add Rm,Rn */
	r0 += 0xFFFFFF80u;  /* 0C0683CA add #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0683CC exts.w Rm,Rn */
	r5 = r8;  /* 0C0683CE mov Rm,Rn */
	r6 = 0x14u;  /* 0C0683D0 mov #imm,Rn */
	r7 = r12;  /* 0C0683D2 mov Rm,Rn */
	UPD(0x0C0683D4u, 7);
L_0C0683D4: BLKS(0x0C0683D4u);
	r11 = 0xC0ADD10u; UPD(0x0C0683D6u, 1);  /* 0C0683D4 mov.l @(disp,pc),Rn */
	IF(0x0C0683D6u); { u32 t_ = r11; PR = 0x0C0683DAu; IF(0x0C0683D8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0ADD10, 0x0C0ADD10u, 0x0C0683DAu); }  /* 0C0683D6 jsr @Rn */
L_0C0683DA: BLKS(0x0C0683DAu);
	r4 = r13;  /* 0C0683DA mov Rm,Rn */
	{ r5 = 0x57u; /* slot mov #imm,Rn */ UPD(0x0C06818Cu, 4); goto L_0C06818C; }  /* 0C0683DC bra */
L_0C0683E0: BLKS(0x0C0683E0u);
	{ W32(r10, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C0682B0u, 3); goto L_0C0682B0; }  /* 0C0683E0 bra */
L_0C0683F0: BLKS(0x0C0683F0u);
	r7 = r10;  /* 0C0683F0 mov Rm,Rn */
	r7 += 0x49u;  /* 0C0683F2 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C0683F6u, 3);  /* 0C0683F4 mov.b @Rm,Rn */
	r3 = 0xFFFFFFF2u;  /* 0C0683F6 mov #imm,Rn */
	r0 = R32(r10); UPD(0x0C0683FAu, 2);  /* 0C0683F8 mov.l @Rm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0683FA add #imm,Rn */
	r2 = r5 & 0xFF;  /* 0C0683FC extu.b Rm,Rn */
	IF(0x0C0683FEu); ARG0(0x403Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0683FE shad Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C068400 tst Rm,Rn */
	r4 = 0xFFFFFFFFu;  /* 0C068402 mov #imm,Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C068404 negc Rm,Rn */
	r0 &= 0x1u;  /* 0C068406 and #imm,r0 */
	r6 &= r0;  /* 0C068408 and Rm,Rn */
	W8(r7, r5); UPD(0x0C06840Cu, 9);  /* 0C06840A mov.b Rm,@Rn */
	T = (r6 & r6) == 0;  /* 0C06840C tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x8u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C068414u, 4); goto L_0C068414; } goto L_0C068412; }  /* 0C06840E bf/s */
L_0C068412: BLKS(0x0C068412u);
	r1 = 0x18u;  /* 0C068412 mov #imm,Rn */
	UPD(0x0C068414u, 2);
L_0C068414: BLKS(0x0C068414u);
	W32(r10 + 0xCu, r1); UPD(0x0C068416u, 1);  /* 0C068414 mov.l Rm,@(disp,Rn) */
	r5 = r12;  /* 0C068416 mov Rm,Rn */
	r0 = 0xC068E50u; UPD(0x0C06841Au, 2);  /* 0C068418 mov.l @(disp,pc),Rn */
	r10 = 0xC0AFE40u; UPD(0x0C06841Cu, 1);  /* 0C06841A mov.l @(disp,pc),Rn */
	IF(0x0C06841Cu); { u32 t_ = r0; PR = 0x0C068420u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C068E50, 0x0C068E50u, 0x0C068420u); }  /* 0C06841C jsr @Rn */
L_0C068420: BLKS(0x0C068420u);
	r9 = 0xC058060u; UPD(0x0C068422u, 1);  /* 0C068420 mov.l @(disp,pc),Rn */
	IF(0x0C068422u); { u32 t_ = r10; PR = 0x0C068426u; IF(0x0C068424u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C068426u); }  /* 0C068422 jsr @Rn */
L_0C068426: BLKS(0x0C068426u);
	r5 = 0x2800u; UPD(0x0C068428u, 1);  /* 0C068426 mov.w @(disp,pc),Rn */
	r2 = 0x50u;  /* 0C068428 mov #imm,Rn */
	IF(0x0C06842Au); MACL = r13 * r5;  /* 0C06842A mul.l Rm,Rn */
	r3 = 0xC217A04u; UPD(0x0C06842Eu, 4);  /* 0C06842C mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C06842E exts.w Rm,Rn */
	IF(0x0C068430u); r11 = MACL;  /* 0C068430 sts macl,Rn */
	IF(0x0C068432u); MACL = r12 * r2;  /* 0C068432 mul.l Rm,Rn */
	r8 = 0x200000u; UPD(0x0C068436u, 5);  /* 0C068434 mov.l @(disp,pc),Rn */
	IF(0x0C068436u); r4 = MACL;  /* 0C068436 sts macl,Rn */
	r11 += r4;  /* 0C068438 add Rm,Rn */
	r11 += r3;  /* 0C06843A add Rm,Rn */
	r4 = r6;  /* 0C06843C mov Rm,Rn */
	W32(r14, r6); UPD(0x0C068440u, 5);  /* 0C06843E mov.l Rm,@Rn */
	r12 = 0xC058030u; UPD(0x0C068442u, 1);  /* 0C068440 mov.l @(disp,pc),Rn */
	IF(0x0C068442u); { u32 t_ = r9; PR = 0x0C068446u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C068446u); }  /* 0C068442 jsr @Rn */
L_0C068446: BLKS(0x0C068446u);
	r10 = R32(r11 + 0x24u); UPD(0x0C068448u, 1);  /* 0C068446 mov.l @(disp,Rm),Rn */
	r5 = r8;  /* 0C068448 mov Rm,Rn */
	r10 += r0;  /* 0C06844A add Rm,Rn */
	IF(0x0C06844Cu); { u32 t_ = r12; PR = 0x0C068450u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C068450u); }  /* 0C06844C jsr @Rn */
L_0C068450: BLKS(0x0C068450u);
	r5 = R32(r11 + 0x28u); UPD(0x0C068452u, 1);  /* 0C068450 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C068452 mov Rm,Rn */
	r7 = R32(r14); UPD(0x0C068456u, 2);  /* 0C068454 mov.l @Rm,Rn */
	r5 += r0;  /* 0C068456 add Rm,Rn */
	{ r6 = 0x14u; /* slot mov #imm,Rn */ UPD(0x0C0683D4u, 4); goto L_0C0683D4; }  /* 0C068458 bra */
L_0C068460: BLKS(0x0C068460u);
	r6 = R32(r3 + 0x2Cu); UPD(0x0C068462u, 1);  /* 0C068460 mov.l @(disp,Rm),Rn */
	r11 += r6;  /* 0C068462 add Rm,Rn */
	W32(r3 + 0x24u, r11); UPD(0x0C068466u, 2);  /* 0C068464 mov.l Rm,@(disp,Rn) */
	r1 = R32(r3 + 0x30u); UPD(0x0C068468u, 1);  /* 0C068466 mov.l @(disp,Rm),Rn */
	r9 = R32(r7 + 0x28u); UPD(0x0C06846Au, 1);  /* 0C068468 mov.l @(disp,Rm),Rn */
	r9 += r1;  /* 0C06846A add Rm,Rn */
	{ W32(r3 + 0x28u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06835Cu, 4); goto L_0C06835C; }  /* 0C06846C bra */
L_0C0684A0: BLKS(0x0C0684A0u);
	r7 = 0x280u; UPD(0x0C0684A2u, 1);  /* 0C0684A0 mov.w @(disp,pc),Rn */
	IF(0x0C0684A2u); MACL = r13 * r7;  /* 0C0684A2 mul.l Rm,Rn */
	r9 = 0xC283794u; UPD(0x0C0684A6u, 3);  /* 0C0684A4 mov.l @(disp,pc),Rn */
	IF(0x0C0684A6u); r7 = MACL;  /* 0C0684A6 sts macl,Rn */
	r7 += r9;  /* 0C0684A8 add Rm,Rn */
	r2 = R32(r7); UPD(0x0C0684ACu, 3);  /* 0C0684AA mov.l @Rm,Rn */
	r8 = 0x4000000u; UPD(0x0C0684AEu, 1);  /* 0C0684AC mov.l @(disp,pc),Rn */
	r2 &= r8;  /* 0C0684AE and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0684B0 tst Rm,Rn */
	if (!T) { UPD(0x0C0684B8u, 5); goto L_0C0684B8; }  /* 0C0684B2 bf */
L_0C0684B4: BLKS(0x0C0684B4u);
	{ IF(0x0C0684B6u); ; /* slot nop */ UPD(0x0C068010u, 3); goto L_0C068010; }  /* 0C0684B4 bra */
L_0C0684B8: BLKS(0x0C0684B8u);
	r0 = 0x24Cu; UPD(0x0C0684BAu, 1);  /* 0C0684B8 mov.w @(disp,pc),Rn */
	IF(0x0C0684BAu); r0 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0684BCu, 1);  /* 0C0684BA mov.b @(r0,Rm),Rn */
	r0 &= 0x20u;  /* 0C0684BC and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0684BE tst Rm,Rn */
	if (!T) { UPD(0x0C0684D6u, 5); goto L_0C0684D6; }  /* 0C0684C0 bf */
L_0C0684C2: BLKS(0x0C0684C2u);
	r10 = 0x50u;  /* 0C0684C2 mov #imm,Rn */
	r0 = 0x2800u; UPD(0x0C0684C6u, 2);  /* 0C0684C4 mov.w @(disp,pc),Rn */
	IF(0x0C0684C6u); MACL = r13 * r0;  /* 0C0684C6 mul.l Rm,Rn */
	r2 = 0x1u;  /* 0C0684C8 mov #imm,Rn */
	IF(0x0C0684CAu); r4 = MACL;  /* 0C0684CA sts macl,Rn */
	IF(0x0C0684CCu); MACL = r12 * r10;  /* 0C0684CC mul.l Rm,Rn */
	r0 = 0xC217A4Du; UPD(0x0C0684D0u, 7);  /* 0C0684CE mov.l @(disp,pc),Rn */
	IF(0x0C0684D0u); r5 = MACL;  /* 0C0684D0 sts macl,Rn */
	r4 += r5;  /* 0C0684D2 add Rm,Rn */
	IF(0x0C0684D4u); W8(r0 + r4, r2); UPD(0x0C0684D6u, 3);  /* 0C0684D4 mov.b Rm,@(r0,Rn) */
L_0C0684D6: BLKS(0x0C0684D6u);
	r3 = 0x2800u; UPD(0x0C0684D8u, 1);  /* 0C0684D6 mov.w @(disp,pc),Rn */
	r5 = 0x50u;  /* 0C0684D8 mov #imm,Rn */
	IF(0x0C0684DAu); MACL = r13 * r3;  /* 0C0684DA mul.l Rm,Rn */
	r4 = 0xC217A04u; UPD(0x0C0684DEu, 4);  /* 0C0684DC mov.l @(disp,pc),Rn */
	IF(0x0C0684DEu); r3 = MACL;  /* 0C0684DE sts macl,Rn */
	IF(0x0C0684E0u); MACL = r12 * r5;  /* 0C0684E0 mul.l Rm,Rn */
	r9 = R32(r7 + 0x10u); UPD(0x0C0684E4u, 4);  /* 0C0684E2 mov.l @(disp,Rm),Rn */
	IF(0x0C0684E4u); r2 = MACL;  /* 0C0684E4 sts macl,Rn */
	r3 += r2;  /* 0C0684E6 add Rm,Rn */
	r3 += r4;  /* 0C0684E8 add Rm,Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0684ECu, 4);  /* 0C0684EA mov.l @(disp,Rm),Rn */
	r2 = r3;  /* 0C0684EC mov Rm,Rn */
	r9 += r6;  /* 0C0684EE add Rm,Rn */
	W32(r3 + 0x24u, r9); UPD(0x0C0684F2u, 3);  /* 0C0684F0 mov.l Rm,@(disp,Rn) */
	r2 += 0x48u;  /* 0C0684F2 add #imm,Rn */
	r11 = R32(r7 + 0x14u); UPD(0x0C0684F6u, 2);  /* 0C0684F4 mov.l @(disp,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0684F8u, 1);  /* 0C0684F6 mov.b @Rm,Rn */
	r8 = R32(r3 + 0x30u); UPD(0x0C0684FAu, 1);  /* 0C0684F8 mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C0684FA add #imm,Rn */
	r11 += r8;  /* 0C0684FC add Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C0684FE extu.b Rm,Rn */
	W32(r3 + 0x28u, r11); UPD(0x0C068502u, 4);  /* 0C068500 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x2u;  /* 0C068502 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C068534u, 4); goto L_0C068534; } UPD(0x0C068508u, 1); goto L_0C068508; }  /* 0C068504 bf/s */
L_0C068508: BLKS(0x0C068508u);
	r7 = 0x0u;  /* 0C068508 mov #imm,Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C06850Cu, 2);  /* 0C06850A mov.l @(disp,Rm),Rn */
	T = r0 == 0x17u;  /* 0C06850C cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C068540u, 4); goto L_0C068540; } UPD(0x0C068512u, 1); goto L_0C068512; }  /* 0C06850E bt/s */
L_0C068512: BLKS(0x0C068512u);
	T = r0 == 0x1Fu;  /* 0C068512 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C068530u, 4); goto L_0C068530; }  /* 0C068514 bt */
L_0C068516: BLKS(0x0C068516u);
	r2 = 0x2800u; UPD(0x0C068518u, 1);  /* 0C068516 mov.w @(disp,pc),Rn */
	r4 = 0x50u;  /* 0C068518 mov #imm,Rn */
	IF(0x0C06851Au); MACL = r13 * r2;  /* 0C06851A mul.l Rm,Rn */
	r9 = 0xC217A04u; UPD(0x0C06851Eu, 4);  /* 0C06851C mov.l @(disp,pc),Rn */
	IF(0x0C06851Eu); r11 = MACL;  /* 0C06851E sts macl,Rn */
	IF(0x0C068520u); MACL = r12 * r4;  /* 0C068520 mul.l Rm,Rn */
	IF(0x0C068522u); r6 = MACL;  /* 0C068522 sts macl,Rn */
	r11 += r6;  /* 0C068524 add Rm,Rn */
	r11 += r9;  /* 0C068526 add Rm,Rn */
	r8 = R32(r11 + 0xCu); UPD(0x0C06852Au, 7);  /* 0C068528 mov.l @(disp,Rm),Rn */
	r8 += 0x1u;  /* 0C06852A add #imm,Rn */
	{ W32(r11 + 0xCu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0682B0u, 4); goto L_0C0682B0; }  /* 0C06852C bra */
L_0C068530: BLKS(0x0C068530u);
	r13 = 0x0u;  /* 0C068530 mov #imm,Rn */
	W32(r3, r13); UPD(0x0C068534u, 2);  /* 0C068532 mov.l Rm,@Rn */
L_0C068534: BLKS(0x0C068534u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C067F8Eu, 3); goto L_0C067F8E; }  /* 0C068534 bra */
L_0C068540: BLKS(0x0C068540u);
	r3 += 0x49u;  /* 0C068540 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r3); UPD(0x0C068544u, 2);  /* 0C068542 mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C068544 tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFB7u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C068516u, 4); goto L_0C068516; } goto L_0C06854A; }  /* 0C068546 bf/s */
L_0C06854A: BLKS(0x0C06854Au);
	r0 = 0x7u;  /* 0C06854A mov #imm,Rn */
	{ W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0682B0u, 5); goto L_0C0682B0; }  /* 0C06854C bra */
}

/* FUN_0c068570 */
void f_0C068570(sh3_t *c)
{
	LOCALS;
L_0C068570: BLKS(0x0C068570u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C068572u, 1);  /* 0C068570 mov.l Rm,@-Rn */
	r5 = 0x2u;  /* 0C068572 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C068576u, 2);  /* 0C068574 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C068578u, 1);  /* 0C068576 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06857Au, 1);  /* 0C068578 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06857Cu, 1);  /* 0C06857A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C06857C exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C068580u, 2);  /* 0C06857E mov.l Rm,@-Rn */
	r0 = r11;  /* 0C068580 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C068584u, 2);  /* 0C068582 mov.l Rm,@-Rn */
	IF(0x0C068584u); r0 <<= 2;  /* 0C068584 shll2 Rn */
	IF(0x0C068586u); r15 -= 4; W32(r15, PR); UPD(0x0C068588u, 2);  /* 0C068586 sts.l pr,@-Rn */
	r4 = r11;  /* 0C068588 mov Rm,Rn */
	r3 = 0xC1741A8u; UPD(0x0C06858Cu, 2);  /* 0C06858A mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C06858C add #imm,Rn */
	r8 = 0xC068EE0u; UPD(0x0C068590u, 2);  /* 0C06858E mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C068590 mov Rm,Rn */
	r1 = 0xC2755BCu; UPD(0x0C068594u, 2);  /* 0C068592 mov.l @(disp,pc),Rn */
	IF(0x0C068594u); r2 = R32(r0 + r3); UPD(0x0C068596u, 1);  /* 0C068594 mov.l @(r0,Rm),Rn */
	W32(r14, r1); UPD(0x0C068598u, 1);  /* 0C068596 mov.l Rm,@Rn */
	IF(0x0C068598u); { u32 t_ = r8; PR = 0x0C06859Cu; W32(r14 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C06859Cu); }  /* 0C068598 jsr @Rn */
L_0C06859C: BLKS(0x0C06859Cu);
	T = (r0 & r0) == 0;  /* 0C06859C tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C068660u, 4); goto L_0C068660; } goto L_0C0685A2; }  /* 0C06859E bt/s */
L_0C0685A2: BLKS(0x0C0685A2u);
	r0 = r11;  /* 0C0685A2 mov Rm,Rn */
	r4 = 0x0u;  /* 0C0685A4 mov #imm,Rn */
	r0 += 0x1u;  /* 0C0685A6 add #imm,Rn */
	W32(r14 + 0x8u, r4); UPD(0x0C0685AAu, 5);  /* 0C0685A8 mov.l Rm,@(disp,Rn) */
	T = (s32)r4 >= (s32)r0;  /* 0C0685AA cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C068656u, 4); goto L_0C068656; } UPD(0x0C0685B0u, 1); goto L_0C0685B0; }  /* 0C0685AC bt/s */
L_0C0685B0: BLKS(0x0C0685B0u);
	r6 = 0x280u; UPD(0x0C0685B2u, 1);  /* 0C0685B0 mov.w @(disp,pc),Rn */
	r7 = r11;  /* 0C0685B2 mov Rm,Rn */
	IF(0x0C0685B4u); MACL = r11 * r6;  /* 0C0685B4 mul.l Rm,Rn */
	r7 += 0x7u;  /* 0C0685B6 add #imm,Rn */
	r5 = 0xC283794u; UPD(0x0C0685BAu, 5);  /* 0C0685B8 mov.l @(disp,pc),Rn */
	IF(0x0C0685BAu); r12 = MACL;  /* 0C0685BA sts macl,Rn */
	W32(r14 + 0x10u, r7); UPD(0x0C0685BEu, 2);  /* 0C0685BC mov.l Rm,@(disp,Rn) */
	r13 = 0x0u;  /* 0C0685BE mov #imm,Rn */
	r12 += r5;  /* 0C0685C0 add Rm,Rn */
	IF(0x0C0685C2u); ;  /* 0C0685C2 nop */
	UPD(0x0C0685C4u, 3);
L_0C0685C4: BLKS(0x0C0685C4u);
	r5 = R32(r14 + 0x4u); UPD(0x0C0685C6u, 1);  /* 0C0685C4 mov.l @(disp,Rm),Rn */
	r6 = 0x50u;  /* 0C0685C6 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r10 = v_; } UPD(0x0C0685CAu, 2);  /* 0C0685C8 mov.w @Rm+,Rn */
	r8 = 0x2800u; UPD(0x0C0685CCu, 1);  /* 0C0685CA mov.w @(disp,pc),Rn */
	r10 += 0x4u;  /* 0C0685CC add #imm,Rn */
	r1 = R32(r14); UPD(0x0C0685D0u, 2);  /* 0C0685CE mov.l @Rm,Rn */
	IF(0x0C0685D0u); MACL = r11 * r8;  /* 0C0685D0 mul.l Rm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0685D4u, 3);  /* 0C0685D2 mov.l Rm,@(disp,Rn) */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r5 = v_; } UPD(0x0C0685D6u, 1);  /* 0C0685D4 mov.w @Rm+,Rn */
	IF(0x0C0685D6u); r8 = MACL;  /* 0C0685D6 sts macl,Rn */
	IF(0x0C0685D8u); MACL = r5 * r6;  /* 0C0685D8 mul.l Rm,Rn */
	r0 = 0xC217A04u; UPD(0x0C0685DCu, 4);  /* 0C0685DA mov.l @(disp,pc),Rn */
	IF(0x0C0685DCu); r4 = MACL;  /* 0C0685DC sts macl,Rn */
	r8 += r4;  /* 0C0685DE add Rm,Rn */
	r8 += r0;  /* 0C0685E0 add Rm,Rn */
	r0 = r10;  /* 0C0685E2 mov Rm,Rn */
	IF(0x0C0685E4u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0685E4 shar Rn */
	IF(0x0C0685E6u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0685E6 shar Rn */
	r2 = 0xC068DE0u; UPD(0x0C0685EAu, 7);  /* 0C0685E8 mov.l @(disp,pc),Rn */
	IF(0x0C0685EAu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0685EA shar Rn */
	r3 = 0xC0000000u; UPD(0x0C0685EEu, 2);  /* 0C0685EC mov.l @(disp,pc),Rn */
	r0 &= 0x3Fu;  /* 0C0685EE and #imm,r0 */
	r9 = R32(r14 + 0x10u); UPD(0x0C0685F2u, 2);  /* 0C0685F0 mov.l @(disp,Rm),Rn */
	r0 += 0x2u;  /* 0C0685F2 add #imm,Rn */
	W32(r8, r3); UPD(0x0C0685F6u, 2);  /* 0C0685F4 mov.l Rm,@Rn */
	r4 = r11;  /* 0C0685F6 mov Rm,Rn */
	W32(r8 + 0x4u, r9); UPD(0x0C0685FAu, 2);  /* 0C0685F8 mov.l Rm,@(disp,Rn) */
	r10 += 0xFFFFFFFCu;  /* 0C0685FA add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0685FEu, 2);  /* 0C0685FC mov.l Rm,@(disp,Rn) */
	W32(r14, r1); UPD(0x0C068600u, 1);  /* 0C0685FE mov.l Rm,@Rn */
	IF(0x0C068600u); { u32 t_ = r2; PR = 0x0C068604u; W32(r8 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C068604u); }  /* 0C068600 jsr @Rn */
L_0C068604: BLKS(0x0C068604u);
	W32(r8 + 0x3Cu, r13); UPD(0x0C068606u, 1);  /* 0C068604 mov.l Rm,@(disp,Rn) */
	r0 = r12;  /* 0C068606 mov Rm,Rn */
	r7 = 0x808080u; UPD(0x0C06860Au, 2);  /* 0C068608 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C06860A add #imm,Rn */
	W32(r8, r7); UPD(0x0C06860Eu, 2);  /* 0C06860C mov.l Rm,@Rn */
	r8 += 0x8u;  /* 0C06860E add #imm,Rn */
	W8(r8, r13); UPD(0x0C068612u, 2);  /* 0C068610 mov.b Rm,@Rn */
	r6 = 0x25Fu; UPD(0x0C068614u, 1);  /* 0C068612 mov.w @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C068614 add #imm,Rn */
	IF(0x0C068616u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C068618u, 2);  /* 0C068616 mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C068618 extu.b Rm,Rn */
	IF(0x0C06861Au); r4 <<= 2;  /* 0C06861A shll2 Rn */
	W8(r8, r4); UPD(0x0C06861Eu, 3);  /* 0C06861C mov.b Rm,@Rn */
	r1 = 0x100000u; UPD(0x0C068620u, 1);  /* 0C06861E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB7u;  /* 0C068620 add #imm,Rn */
	r0 = R32(r12 + 0x10u); UPD(0x0C068624u, 2);  /* 0C068622 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C068624 mov Rm,Rn */
	r0 += r1;  /* 0C068626 add Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C06862Au, 3);  /* 0C068628 mov.l Rm,@(disp,Rn) */
	r0 = 0xC058060u; UPD(0x0C06862Cu, 1);  /* 0C06862A mov.l @(disp,pc),Rn */
	r3 = R32(r12 + 0x14u); UPD(0x0C06862Eu, 1);  /* 0C06862C mov.l @(disp,Rm),Rn */
	r9 = 0x80000u; UPD(0x0C068630u, 1);  /* 0C06862E mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C068632u, 1);  /* 0C068630 mov.l Rm,@(disp,Rn) */
	IF(0x0C068632u); { u32 t_ = r0; PR = 0x0C068636u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C068636u); }  /* 0C068632 jsr @Rn */
L_0C068636: BLKS(0x0C068636u);
	r5 = r9;  /* 0C068636 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C06863Au, 2);  /* 0C068638 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C06863A mov Rm,Rn */
	IF(0x0C06863Cu); { u32 t_ = r9; PR = 0x0C068640u; W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C068640u); }  /* 0C06863C jsr @Rn */
L_0C068640: BLKS(0x0C068640u);
	W32(r8 + 0x30u, r0); UPD(0x0C068642u, 1);  /* 0C068640 mov.l Rm,@(disp,Rn) */
	r2 = 0x14u;  /* 0C068642 mov #imm,Rn */
	r8 += 0x4Au;  /* 0C068644 add #imm,Rn */
	W8(r8, r2); UPD(0x0C068648u, 3);  /* 0C068646 mov.b Rm,@Rn */
	r10 = R32(r14 + 0x8u); UPD(0x0C06864Au, 1);  /* 0C068648 mov.l @(disp,Rm),Rn */
	r10 += 0x1u;  /* 0C06864A add #imm,Rn */
	r9 = (u32)(s32)(s16)r10;  /* 0C06864C exts.w Rm,Rn */
	r8 = R32(r14 + 0xCu); UPD(0x0C068650u, 3);  /* 0C06864E mov.l @(disp,Rm),Rn */
	T = (s32)r9 >= (s32)r8;  /* 0C068650 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0685C4u, 4); goto L_0C0685C4; } UPD(0x0C068656u, 1); goto L_0C068656; }  /* 0C068652 bf/s */
L_0C068656: BLKS(0x0C068656u);
	r4 = r11;  /* 0C068656 mov Rm,Rn */
	r11 = 0xC0AFBA0u; UPD(0x0C06865Au, 2);  /* 0C068658 mov.l @(disp,pc),Rn */
	IF(0x0C06865Au); { u32 t_ = r11; PR = 0x0C06865Eu; r5 = 0x7Cu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C06865Eu); }  /* 0C06865A jsr @Rn */
L_0C06865E: BLKS(0x0C06865Eu);
	r0 = 0x0u;  /* 0C06865E mov #imm,Rn */
	UPD(0x0C068660u, 1);
L_0C068660: BLKS(0x0C068660u);
	r14 += 0x14u;  /* 0C068660 add #imm,Rn */
	r15 = r14;  /* 0C068662 mov Rm,Rn */
	IF(0x0C068664u); PR = R32(r15); r15 += 4; UPD(0x0C068666u, 3);  /* 0C068664 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C068668u, 1);  /* 0C068666 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06866Au, 1);  /* 0C068668 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06866Cu, 1);  /* 0C06866A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06866Eu, 1);  /* 0C06866C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C068670u, 1);  /* 0C06866E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C068672u, 1);  /* 0C068670 mov.l @Rm+,Rn */
	IF(0x0C068672u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C068672 rts */
}

void f_0C0686B0(sh3_t *c)
{
	LOCALS;
L_0C0686B0: BLKS(0x0C0686B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0686B2u, 1);  /* 0C0686B0 mov.l Rm,@-Rn */
	r2 = 0x50u;  /* 0C0686B2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0686B6u, 2);  /* 0C0686B4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0686B8u, 1);  /* 0C0686B6 mov.l Rm,@-Rn */
	r3 = 0x2800u; UPD(0x0C0686BAu, 1);  /* 0C0686B8 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0686BA exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0686BEu, 2);  /* 0C0686BC mov.l Rm,@-Rn */
	IF(0x0C0686BEu); MACL = r10 * r3;  /* 0C0686BE mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0686C2u, 3);  /* 0C0686C0 mov.l Rm,@-Rn */
	IF(0x0C0686C2u); r9 = MACL;  /* 0C0686C2 sts macl,Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C0686C4 exts.w Rm,Rn */
	IF(0x0C0686C6u); MACL = r12 * r2;  /* 0C0686C6 mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0686CAu, 5);  /* 0C0686C8 mov.l Rm,@-Rn */
	IF(0x0C0686CAu); r0 = MACL;  /* 0C0686CA sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0686CEu, 2);  /* 0C0686CC mov.l Rm,@-Rn */
	r9 += r0;  /* 0C0686CE add Rm,Rn */
	r0 = 0xC217A04u; UPD(0x0C0686D2u, 2);  /* 0C0686D0 mov.l @(disp,pc),Rn */
	IF(0x0C0686D2u); r15 -= 4; W32(r15, PR); UPD(0x0C0686D4u, 1);  /* 0C0686D2 sts.l pr,@-Rn */
	r9 += r0;  /* 0C0686D4 add Rm,Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C0686D8u, 2);  /* 0C0686D6 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C0686D8 add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C0686DA tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0686E4u, 5); goto L_0C0686E4; } goto L_0C0686E0; }  /* 0C0686DC bf/s */
L_0C0686E0: BLKS(0x0C0686E0u);
	{ r8 = R32(r9 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C068960u, 4); goto L_0C068960; }  /* 0C0686E0 bra */
L_0C0686E4: BLKS(0x0C0686E4u);
	T = r0 == 0x1u;  /* 0C0686E4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r8 = 0x50u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0686EEu, 4); goto L_0C0686EE; } goto L_0C0686EA; }  /* 0C0686E6 bf/s */
L_0C0686EA: BLKS(0x0C0686EAu);
	{ r13 = r9; /* slot mov Rm,Rn */ UPD(0x0C068840u, 4); goto L_0C068840; }  /* 0C0686EA bra */
L_0C0686EE: BLKS(0x0C0686EEu);
	r3 = 0x2800u; UPD(0x0C0686F0u, 1);  /* 0C0686EE mov.w @(disp,pc),Rn */
	IF(0x0C0686F0u); MACL = r10 * r3;  /* 0C0686F0 mul.l Rm,Rn */
	r4 = 0xC217A04u; UPD(0x0C0686F4u, 3);  /* 0C0686F2 mov.l @(disp,pc),Rn */
	r9 = 0x7u;  /* 0C0686F4 mov #imm,Rn */
	IF(0x0C0686F6u); r0 = MACL;  /* 0C0686F6 sts macl,Rn */
	IF(0x0C0686F8u); MACL = r12 * r8;  /* 0C0686F8 mul.l Rm,Rn */
	IF(0x0C0686FAu); r7 = MACL;  /* 0C0686FA sts macl,Rn */
	r0 += r7;  /* 0C0686FC add Rm,Rn */
	r0 += r4;  /* 0C0686FE add Rm,Rn */
	r5 = R32(r0 + 0x24u); UPD(0x0C068702u, 8);  /* 0C068700 mov.l @(disp,Rm),Rn */
	r11 = R32(r0 + 0x28u); UPD(0x0C068704u, 1);  /* 0C068702 mov.l @(disp,Rm),Rn */
	r13 = R32(r0 + 0x2Cu); UPD(0x0C068706u, 1);  /* 0C068704 mov.l @(disp,Rm),Rn */
	r1 = R32(r0 + 0x30u); UPD(0x0C068708u, 1);  /* 0C068706 mov.l @(disp,Rm),Rn */
	r5 += r13;  /* 0C068708 add Rm,Rn */
	r11 += r1;  /* 0C06870A add Rm,Rn */
	r2 = R32(r0 + 0xCu); UPD(0x0C06870Eu, 3);  /* 0C06870C mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r5); UPD(0x0C068710u, 1);  /* 0C06870E mov.l Rm,@(disp,Rn) */
	T = r2 > r9;  /* 0C068710 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r0 + 0x28u, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06875Cu, 4); goto L_0C06875C; } UPD(0x0C068716u, 1); goto L_0C068716; }  /* 0C068712 bt/s */
L_0C068716: BLKS(0x0C068716u);
	r0 = 0xC068728u;  /* 0C068716 mova @(disp,pc),r0 */
	IF(0x0C068718u); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C06871Au, 2);  /* 0C068718 mov.b @(r0,Rm),Rn */
	r6 = r6 & 0xFF;  /* 0C06871A extu.b Rm,Rn */
	IF(0x0C06871Cu); { u32 tv_ = (r6 + 0x0C068720u); u32 t_ = PHYS(tv_); IF(0x0C06871Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C068730u: goto L_0C068730; case 0x0C068780u: goto L_0C068780; case 0x0C0687D0u: goto L_0C0687D0; default: JUMPD(tv_); } }  /* 0C06871C braf Rn */
L_0C068730: BLKS(0x0C068730u);
	r4 = 0x2800u; UPD(0x0C068732u, 1);  /* 0C068730 mov.w @(disp,pc),Rn */
	r13 = 0x50u;  /* 0C068732 mov #imm,Rn */
	IF(0x0C068734u); MACL = r10 * r4;  /* 0C068734 mul.l Rm,Rn */
	r11 = 0xC217A04u; UPD(0x0C068738u, 4);  /* 0C068736 mov.l @(disp,pc),Rn */
	r2 = 0x4u;  /* 0C068738 mov #imm,Rn */
	IF(0x0C06873Au); r9 = MACL;  /* 0C06873A sts macl,Rn */
	IF(0x0C06873Cu); MACL = r12 * r13;  /* 0C06873C mul.l Rm,Rn */
	IF(0x0C06873Eu); r5 = MACL;  /* 0C06873E sts macl,Rn */
	r9 += r5;  /* 0C068740 add Rm,Rn */
	r9 += r11;  /* 0C068742 add Rm,Rn */
	r8 = r9;  /* 0C068744 mov Rm,Rn */
	r8 += 0x48u;  /* 0C068746 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C06874Au, 10);  /* 0C068748 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C06874A add #imm,Rn */
	W8(r8, r0); UPD(0x0C06874Eu, 2);  /* 0C06874C mov.b Rm,@Rn */
	W32(r9 + 0xCu, r2); UPD(0x0C068750u, 1);  /* 0C06874E mov.l Rm,@(disp,Rn) */
L_0C068750: BLKS(0x0C068750u);
	r5 = r12;  /* 0C068750 mov Rm,Rn */
	r12 = 0xC068E50u; UPD(0x0C068754u, 2);  /* 0C068752 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C068754 mov Rm,Rn */
	IF(0x0C068756u); { u32 t_ = r12; PR = 0x0C06875Au; r10 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C068E50, 0x0C068E50u, 0x0C06875Au); }  /* 0C068756 jsr @Rn */
L_0C06875A: BLKS(0x0C06875Au);
	W8(r8, r10); UPD(0x0C06875Cu, 1);  /* 0C06875A mov.b Rm,@Rn */
L_0C06875C: BLKS(0x0C06875Cu);
	r14 += 0x14u;  /* 0C06875C add #imm,Rn */
	UPD(0x0C06875Eu, 1);
L_0C06875E: BLKS(0x0C06875Eu);
	r15 = r14;  /* 0C06875E mov Rm,Rn */
	IF(0x0C068760u); PR = R32(r15); r15 += 4; UPD(0x0C068762u, 2);  /* 0C068760 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C068764u, 1);  /* 0C068762 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C068766u, 1);  /* 0C068764 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C068768u, 1);  /* 0C068766 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06876Au, 1);  /* 0C068768 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06876Cu, 1);  /* 0C06876A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06876Eu, 1);  /* 0C06876C mov.l @Rm+,Rn */
	IF(0x0C06876Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06876E rts */
L_0C068780: BLKS(0x0C068780u);
	r7 = 0x2800u; UPD(0x0C068782u, 1);  /* 0C068780 mov.w @(disp,pc),Rn */
	r13 = 0x50u;  /* 0C068782 mov #imm,Rn */
	IF(0x0C068784u); MACL = r10 * r7;  /* 0C068784 mul.l Rm,Rn */
	r11 = 0xC217A04u; UPD(0x0C068788u, 4);  /* 0C068786 mov.l @(disp,pc),Rn */
	r6 = 0xFFFFFFF8u;  /* 0C068788 mov #imm,Rn */
	IF(0x0C06878Au); r7 = MACL;  /* 0C06878A sts macl,Rn */
	IF(0x0C06878Cu); MACL = r12 * r13;  /* 0C06878C mul.l Rm,Rn */
	r9 = 0xE0u; UPD(0x0C068790u, 5);  /* 0C06878E mov.w @(disp,pc),Rn */
	IF(0x0C068790u); r5 = MACL;  /* 0C068790 sts macl,Rn */
	r7 += r5;  /* 0C068792 add Rm,Rn */
	r7 += r11;  /* 0C068794 add Rm,Rn */
	r0 = R32(r7 + 0x2Cu); UPD(0x0C068798u, 4);  /* 0C068796 mov.l @(disp,Rm),Rn */
	IF(0x0C068798u); MACL = r0 * r9;  /* 0C068798 mul.l Rm,Rn */
	r3 = R32(r7 + 0x30u); UPD(0x0C06879Cu, 3);  /* 0C06879A mov.l @(disp,Rm),Rn */
	IF(0x0C06879Cu); r2 = MACL;  /* 0C06879C sts macl,Rn */
	IF(0x0C06879Eu); MACL = r3 * r9;  /* 0C06879E mul.l Rm,Rn */
	IF(0x0C0687A0u); ARG0(0x426Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0687A0 shad Rm,Rn */
	IF(0x0C0687A2u); r8 = MACL;  /* 0C0687A2 sts macl,Rn */
	IF(0x0C0687A4u); ARG0(0x486Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = (u32)((s32)r8 >> 31); else r8 = (u32)((s32)r8 >> ((~s_ & 31) + 1)); }  /* 0C0687A4 shad Rm,Rn */
	W32(r7 + 0x30u, r8); UPD(0x0C0687A8u, 7);  /* 0C0687A6 mov.l Rm,@(disp,Rn) */
	r8 = r7;  /* 0C0687A8 mov Rm,Rn */
	r8 += 0x48u;  /* 0C0687AA add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0687AEu, 3);  /* 0C0687AC mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0687AE add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0687B0 extu.b Rm,Rn */
	W32(r7 + 0x2Cu, r2); UPD(0x0C0687B4u, 3);  /* 0C0687B2 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x4u;  /* 0C0687B4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r8, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06875Cu, 4); goto L_0C06875C; } UPD(0x0C0687BAu, 1); goto L_0C0687BA; }  /* 0C0687B6 bf/s */
L_0C0687BA: BLKS(0x0C0687BAu);
	r4 = R32(r7 + 0xCu); UPD(0x0C0687BCu, 1);  /* 0C0687BA mov.l @(disp,Rm),Rn */
	r4 += 0x1u;  /* 0C0687BC add #imm,Rn */
	{ W32(r7 + 0xCu, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C068750u, 4); goto L_0C068750; }  /* 0C0687BE bra */
L_0C0687D0: BLKS(0x0C0687D0u);
	r9 = 0x2800u; UPD(0x0C0687D2u, 1);  /* 0C0687D0 mov.w @(disp,pc),Rn */
	r7 = 0x50u;  /* 0C0687D2 mov #imm,Rn */
	IF(0x0C0687D4u); MACL = r10 * r9;  /* 0C0687D4 mul.l Rm,Rn */
	r5 = 0xC217A04u; UPD(0x0C0687D8u, 4);  /* 0C0687D6 mov.l @(disp,pc),Rn */
	r6 = 0xFFFFFFF8u;  /* 0C0687D8 mov #imm,Rn */
	IF(0x0C0687DAu); r9 = MACL;  /* 0C0687DA sts macl,Rn */
	IF(0x0C0687DCu); MACL = r12 * r7;  /* 0C0687DC mul.l Rm,Rn */
	r2 = 0xE0u; UPD(0x0C0687E0u, 5);  /* 0C0687DE mov.w @(disp,pc),Rn */
	IF(0x0C0687E0u); r13 = MACL;  /* 0C0687E0 sts macl,Rn */
	r9 += r13;  /* 0C0687E2 add Rm,Rn */
	r9 += r5;  /* 0C0687E4 add Rm,Rn */
	r11 = R32(r9 + 0x2Cu); UPD(0x0C0687E8u, 4);  /* 0C0687E6 mov.l @(disp,Rm),Rn */
	IF(0x0C0687E8u); MACL = r11 * r2;  /* 0C0687E8 mul.l Rm,Rn */
	r3 = R32(r9 + 0x30u); UPD(0x0C0687ECu, 3);  /* 0C0687EA mov.l @(disp,Rm),Rn */
	IF(0x0C0687ECu); r0 = MACL;  /* 0C0687EC sts macl,Rn */
	IF(0x0C0687EEu); MACL = r3 * r2;  /* 0C0687EE mul.l Rm,Rn */
	r11 = r9;  /* 0C0687F0 mov Rm,Rn */
	IF(0x0C0687F2u); ARG0(0x406Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0687F2 shad Rm,Rn */
	r11 += 0x48u;  /* 0C0687F4 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r11); UPD(0x0C0687F8u, 7);  /* 0C0687F6 mov.b @Rm,Rn */
	IF(0x0C0687F8u); r8 = MACL;  /* 0C0687F8 sts macl,Rn */
	W32(r9 + 0x2Cu, r0); UPD(0x0C0687FCu, 2);  /* 0C0687FA mov.l Rm,@(disp,Rn) */
	IF(0x0C0687FCu); ARG0(0x486Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = (u32)((s32)r8 >> 31); else r8 = (u32)((s32)r8 >> ((~s_ & 31) + 1)); }  /* 0C0687FC shad Rm,Rn */
	r1 += 0x1u;  /* 0C0687FE add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C068800 extu.b Rm,Rn */
	W32(r9 + 0x30u, r8); UPD(0x0C068804u, 4);  /* 0C068802 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x4u;  /* 0C068804 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r11, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06875Cu, 4); goto L_0C06875C; } UPD(0x0C06880Au, 1); goto L_0C06880A; }  /* 0C068806 bf/s */
L_0C06880A: BLKS(0x0C06880Au);
	r6 = R32(r9); UPD(0x0C06880Cu, 1);  /* 0C06880A mov.l @Rm,Rn */
	r13 = 0x0u;  /* 0C06880C mov #imm,Rn */
	r1 = 0xD800000u; UPD(0x0C068810u, 2);  /* 0C06880E mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C068810 mov Rm,Rn */
	r8 = 0xC068DE0u; UPD(0x0C068814u, 2);  /* 0C068812 mov.l @(disp,pc),Rn */
	r6 |= r1;  /* 0C068814 or Rm,Rn */
	r4 = r10;  /* 0C068816 mov Rm,Rn */
	W32(r9, r6); UPD(0x0C06881Au, 3);  /* 0C068818 mov.l Rm,@Rn */
	W32(r9 + 0x30u, r13); UPD(0x0C06881Cu, 1);  /* 0C06881A mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x2Cu, r13); UPD(0x0C06881Eu, 1);  /* 0C06881C mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r13); UPD(0x0C068820u, 1);  /* 0C06881E mov.l Rm,@(disp,Rn) */
	IF(0x0C068820u); { u32 t_ = r8; PR = 0x0C068824u; W32(r9 + 0x8u, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C068824u); }  /* 0C068820 jsr @Rn */
L_0C068824: BLKS(0x0C068824u);
	r12 = 0x204D0D0u; UPD(0x0C068826u, 1);  /* 0C068824 mov.l @(disp,pc),Rn */
	r4 = 0xC1741F8u; UPD(0x0C068828u, 1);  /* 0C068826 mov.l @(disp,pc),Rn */
	W8(r11, r13); UPD(0x0C06882Au, 1);  /* 0C068828 mov.b Rm,@Rn */
	r0 = r4;  /* 0C06882A mov Rm,Rn */
	W32(r9 + 0x3Cu, r12); UPD(0x0C06882Eu, 2);  /* 0C06882C mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C06882E mov Rm,Rn */
	IF(0x0C068830u); r5 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C068832u, 2);  /* 0C068830 mov.b @(r0,Rm),Rn */
	r10 = 0xC0AFBA0u; UPD(0x0C068834u, 1);  /* 0C068832 mov.l @(disp,pc),Rn */
	IF(0x0C068834u); { u32 t_ = r10; PR = 0x0C068838u; IF(0x0C068836u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C068838u); }  /* 0C068834 jsr @Rn */
L_0C068838: BLKS(0x0C068838u);
	{ r14 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C06875Eu, 3); goto L_0C06875E; }  /* 0C068838 bra */
L_0C068840: BLKS(0x0C068840u);
	r13 += 0x44u;  /* 0C068840 add #imm,Rn */
	r1 = R32(r9 + 0x2Cu); UPD(0x0C068844u, 2);  /* 0C068842 mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s16)R16(r13); UPD(0x0C068846u, 1);  /* 0C068844 mov.w @Rm,Rn */
	r3 = 0x3000u; UPD(0x0C068848u, 1);  /* 0C068846 mov.w @(disp,pc),Rn */
	r2 += 0x4u;  /* 0C068848 add #imm,Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C06884Cu, 2);  /* 0C06884A mov.l @(disp,Rm),Rn */
	r4 = r2 & 0xFFFF;  /* 0C06884C extu.w Rm,Rn */
	r6 = R32(r9 + 0x28u); UPD(0x0C068850u, 2);  /* 0C06884E mov.l @(disp,Rm),Rn */
	r11 += r1;  /* 0C068850 add Rm,Rn */
	r5 = R32(r9 + 0x34u); UPD(0x0C068854u, 2);  /* 0C068852 mov.l @(disp,Rm),Rn */
	r0 = R32(r9 + 0x30u); UPD(0x0C068856u, 1);  /* 0C068854 mov.l @(disp,Rm),Rn */
	r5 += r3;  /* 0C068856 add Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C06885Au, 2);  /* 0C068858 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C06885A add Rm,Rn */
	W16(r13, r2); UPD(0x0C06885Eu, 2);  /* 0C06885C mov.w Rm,@Rn */
	W32(r9 + 0x24u, r11); UPD(0x0C068860u, 1);  /* 0C06885E mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r6); UPD(0x0C068862u, 1);  /* 0C068860 mov.l Rm,@(disp,Rn) */
	IF(0x0C068862u); { u32 t_ = r8; PR = 0x0C068866u; W32(r9 + 0x34u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C068866u); }  /* 0C068862 jsr @Rn */
L_0C068866: BLKS(0x0C068866u);
	r7 = 0x3u;  /* 0C068866 mov #imm,Rn */
	IF(0x0C068868u); ARG0(0x407Du); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C068868 shld Rm,Rn */
	r4 = R32(r9 + 0x2Cu); UPD(0x0C06886Cu, 3);  /* 0C06886A mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C06886C add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r13); UPD(0x0C068870u, 2);  /* 0C06886E mov.w @Rm,Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C068872u, 1);  /* 0C068870 mov.l Rm,@(disp,Rn) */
	r11 = 0xC058030u; UPD(0x0C068874u, 1);  /* 0C068872 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFFFF;  /* 0C068874 extu.w Rm,Rn */
	IF(0x0C068876u); { u32 t_ = r11; PR = 0x0C06887Au; r5 = R32(r9 + 0x34u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06887Au); }  /* 0C068876 jsr @Rn */
L_0C06887A: BLKS(0x0C06887Au);
	r1 = 0x3u;  /* 0C06887A mov #imm,Rn */
	IF(0x0C06887Cu); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06887C shld Rm,Rn */
	r3 = R32(r9 + 0x30u); UPD(0x0C068880u, 3);  /* 0C06887E mov.l @(disp,Rm),Rn */
	r2 = R32(r9 + 0x24u); UPD(0x0C068882u, 1);  /* 0C068880 mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C068882 add Rm,Rn */
	r13 = 0xFF600000u; UPD(0x0C068886u, 2);  /* 0C068884 mov.l @(disp,pc),Rn */
	r2 += r13;  /* 0C068886 add Rm,Rn */
	IF(0x0C068888u); T = (s32)r2 >= 0;  /* 0C068888 cmp/pz Rn */
	{ u32 c_ = !T; W32(r9 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C068950u, 5); goto L_0C068950; } UPD(0x0C06888Eu, 1); goto L_0C06888E; }  /* 0C06888A bf/s */
L_0C06888E: BLKS(0x0C06888Eu);
	r5 = 0xA80000u; UPD(0x0C068890u, 1);  /* 0C06888E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C068890 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0688AEu, 4); goto L_0C0688AE; } goto L_0C068896; }  /* 0C068892 bt/s */
L_0C068896: BLKS(0x0C068896u);
	r7 = 0xC3929E0u; UPD(0x0C068898u, 2);  /* 0C068896 mov.l @(disp,pc),Rn */
	r2 = r3;  /* 0C068898 mov Rm,Rn */
	r4 = R32(r7); UPD(0x0C06889Cu, 2);  /* 0C06889A mov.l @Rm,Rn */
	r13 = 0xFF880000u; UPD(0x0C06889Eu, 1);  /* 0C06889C mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C06889E sub Rm,Rn */
	r2 += r13;  /* 0C0688A0 add Rm,Rn */
	IF(0x0C0688A2u); T = (s32)r2 >= 0;  /* 0C0688A2 cmp/pz Rn */
	if (!T) { UPD(0x0C068940u, 6); goto L_0C068940; }  /* 0C0688A4 bf */
L_0C0688A6: BLKS(0x0C0688A6u);
	r8 = 0x800000u; UPD(0x0C0688A8u, 1);  /* 0C0688A6 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C0688A8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0688C0u, 4); goto L_0C0688C0; } UPD(0x0C0688AEu, 1); goto L_0C0688AE; }  /* 0C0688AA bf/s */
L_0C0688AE: BLKS(0x0C0688AEu);
	W32(r9, r1); UPD(0x0C0688B0u, 1);  /* 0C0688AE mov.l Rm,@Rn */
L_0C0688B0: BLKS(0x0C0688B0u);
	{ r14 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C06875Eu, 3); goto L_0C06875E; }  /* 0C0688B0 bra */
L_0C0688C0: BLKS(0x0C0688C0u);
	r2 = r9;  /* 0C0688C0 mov Rm,Rn */
	r2 += 0x48u;  /* 0C0688C2 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C0688C6u, 3);  /* 0C0688C4 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C0688C6 add #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C0688C8 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0688CA cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0688B0u, 6); goto L_0C0688B0; } UPD(0x0C0688D0u, 1); goto L_0C0688D0; }  /* 0C0688CC bf/s */
L_0C0688D0: BLKS(0x0C0688D0u);
	r6 = 0x0u;  /* 0C0688D0 mov #imm,Rn */
	r1 = R32(r9 + 0xCu); UPD(0x0C0688D4u, 2);  /* 0C0688D2 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0688D4 tst Rm,Rn */
	{ u32 c_ = T; W8(r2, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0688AEu, 4); goto L_0C0688AE; } UPD(0x0C0688DAu, 1); goto L_0C0688DA; }  /* 0C0688D6 bt/s */
L_0C0688DA: BLKS(0x0C0688DAu);
	r1 += 0xFFFFFFFFu;  /* 0C0688DA add #imm,Rn */
	UPD(0x0C0688DCu, 1);
L_0C0688DC: BLKS(0x0C0688DCu);
	W32(r9 + 0xCu, r1); UPD(0x0C0688DEu, 1);  /* 0C0688DC mov.l Rm,@(disp,Rn) */
	IF(0x0C0688DEu); ;  /* 0C0688DE nop */
	UPD(0x0C0688E0u, 1);
L_0C0688E0: BLKS(0x0C0688E0u);
	r2 = 0xC068E50u; UPD(0x0C0688E2u, 1);  /* 0C0688E0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0688E2 mov Rm,Rn */
	r5 = r12;  /* 0C0688E4 mov Rm,Rn */
	r14 += 0x14u;  /* 0C0688E6 add #imm,Rn */
	r15 = r14;  /* 0C0688E8 mov Rm,Rn */
	IF(0x0C0688EAu); PR = R32(r15); r15 += 4; UPD(0x0C0688ECu, 5);  /* 0C0688EA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0688EEu, 1);  /* 0C0688EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0688F0u, 1);  /* 0C0688EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0688F2u, 1);  /* 0C0688F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0688F4u, 1);  /* 0C0688F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0688F6u, 1);  /* 0C0688F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0688F8u, 1);  /* 0C0688F6 mov.l @Rm+,Rn */
	IF(0x0C0688F8u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C068E50u: TAIL(f_0C068E50); default: JUMPD(tv_); } }  /* 0C0688F8 jmp @Rn */
L_0C068940: BLKS(0x0C068940u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0688A6u, 3); goto L_0C0688A6; }  /* 0C068940 bra */
L_0C068950: BLKS(0x0C068950u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C06888Eu, 3); goto L_0C06888E; }  /* 0C068950 bra */
L_0C068960: BLKS(0x0C068960u);
	r4 = 0x17u;  /* 0C068960 mov #imm,Rn */
	r8 += 0xFFFFFFF8u;  /* 0C068962 add #imm,Rn */
	T = r8 > r4;  /* 0C068964 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C068A18u, 6); goto L_0C068A18; }  /* 0C068966 bt */
L_0C068968: BLKS(0x0C068968u);
	r0 = 0xC068974u;  /* 0C068968 mova @(disp,pc),r0 */
	r8 += r8;  /* 0C06896A add Rm,Rn */
	IF(0x0C06896Cu); r5 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C06896Eu, 3);  /* 0C06896C mov.w @(r0,Rm),Rn */
	IF(0x0C06896Eu); { u32 tv_ = (r5 + 0x0C068972u); u32 t_ = PHYS(tv_); IF(0x0C068970u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0689B0u: goto L_0C0689B0; case 0x0C068A18u: goto L_0C068A18; case 0x0C068BB0u: goto L_0C068BB0; case 0x0C068DB0u: goto L_0C068DB0; default: JUMPD(tv_); } }  /* 0C06896E braf Rn */
L_0C0689B0: BLKS(0x0C0689B0u);
	r8 = 0x2800u; UPD(0x0C0689B2u, 1);  /* 0C0689B0 mov.w @(disp,pc),Rn */
	r7 = 0x50u;  /* 0C0689B2 mov #imm,Rn */
	IF(0x0C0689B4u); MACL = r10 * r8;  /* 0C0689B4 mul.l Rm,Rn */
	r1 = 0xC217A04u; UPD(0x0C0689B8u, 4);  /* 0C0689B6 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0689B8 mov Rm,Rn */
	IF(0x0C0689BAu); r11 = MACL;  /* 0C0689BA sts macl,Rn */
	IF(0x0C0689BCu); MACL = r12 * r7;  /* 0C0689BC mul.l Rm,Rn */
	r13 = 0xC068EE0u; UPD(0x0C0689C0u, 5);  /* 0C0689BE mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C0689C0 mov #imm,Rn */
	IF(0x0C0689C2u); r9 = MACL;  /* 0C0689C2 sts macl,Rn */
	r9 += r11;  /* 0C0689C4 add Rm,Rn */
	r9 += r1;  /* 0C0689C6 add Rm,Rn */
	r9 += 0x44u;  /* 0C0689C8 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C0689CCu, 6);  /* 0C0689CA mov.w @Rm,Rn */
	IF(0x0C0689CCu); { u32 t_ = r13; PR = 0x0C0689D0u; W32(r14, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C0689D0u); }  /* 0C0689CC jsr @Rn */
L_0C0689D0: BLKS(0x0C0689D0u);
	T = (r0 & r0) == 0;  /* 0C0689D0 tst Rm,Rn */
	{ u32 c_ = T; r9 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0689DAu, 4); goto L_0C0689DA; } goto L_0C0689D6; }  /* 0C0689D2 bt/s */
L_0C0689D6: BLKS(0x0C0689D6u);
	{ r1 = 0x50u; /* slot mov #imm,Rn */ UPD(0x0C068B20u, 4); goto L_0C068B20; }  /* 0C0689D6 bra */
L_0C0689DA: BLKS(0x0C0689DAu);
	r3 = 0x2800u; UPD(0x0C0689DCu, 1);  /* 0C0689DA mov.w @(disp,pc),Rn */
	r9 += 0x4Cu;  /* 0C0689DC add #imm,Rn */
	IF(0x0C0689DEu); MACL = r10 * r3;  /* 0C0689DE mul.l Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r9); UPD(0x0C0689E2u, 4);  /* 0C0689E0 mov.w @Rm,Rn */
	r4 = r10;  /* 0C0689E2 mov Rm,Rn */
	IF(0x0C0689E4u); r5 = MACL;  /* 0C0689E4 sts macl,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0689E8u, 3);  /* 0C0689E6 mov.l Rm,@(disp,Rn) */
	r9 += 0xFFFFFFB4u;  /* 0C0689E8 add #imm,Rn */
	IF(0x0C0689EAu); { u32 t_ = r13; PR = 0x0C0689EEu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C0689EEu); }  /* 0C0689EA jsr @Rn */
L_0C0689EE: BLKS(0x0C0689EEu);
	T = (r0 & r0) == 0;  /* 0C0689EE tst Rm,Rn */
	{ u32 c_ = !T; r8 = 0x50u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C068AB0u, 4); goto L_0C068AB0; } UPD(0x0C0689F4u, 1); goto L_0C0689F4; }  /* 0C0689F0 bf/s */
L_0C0689F4: BLKS(0x0C0689F4u);
	r9 += 0x4Eu;  /* 0C0689F4 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r9); UPD(0x0C0689F8u, 2);  /* 0C0689F6 mov.w @Rm,Rn */
	r4 = r10;  /* 0C0689F8 mov Rm,Rn */
	IF(0x0C0689FAu); { u32 t_ = r13; PR = 0x0C0689FEu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C0689FEu); }  /* 0C0689FA jsr @Rn */
L_0C0689FE: BLKS(0x0C0689FEu);
	T = (r0 & r0) == 0;  /* 0C0689FE tst Rm,Rn */
	{ u32 c_ = !T; r9 += 0xFFFFFFB2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C068A40u, 4); goto L_0C068A40; } UPD(0x0C068A04u, 1); goto L_0C068A04; }  /* 0C068A00 bf/s */
L_0C068A04: BLKS(0x0C068A04u);
	r0 = r9;  /* 0C068A04 mov Rm,Rn */
	r0 += 0x49u;  /* 0C068A06 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C068A0Au, 3);  /* 0C068A08 mov.b @Rm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C068A0A add #imm,Rn */
	r11 = r5 & 0xFF;  /* 0C068A0C extu.b Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C068A0E tst Rm,Rn */
	{ u32 c_ = !T; W8(r0, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C068A18u, 6); goto L_0C068A18; } UPD(0x0C068A14u, 1); goto L_0C068A14; }  /* 0C068A10 bf/s */
L_0C068A14: BLKS(0x0C068A14u);
	r3 = 0x18u;  /* 0C068A14 mov #imm,Rn */
	W32(r9 + 0xCu, r3); UPD(0x0C068A18u, 2);  /* 0C068A16 mov.l Rm,@(disp,Rn) */
L_0C068A18: BLKS(0x0C068A18u);
	r13 = 0x2800u; UPD(0x0C068A1Au, 1);  /* 0C068A18 mov.w @(disp,pc),Rn */
	r7 = 0x50u;  /* 0C068A1A mov #imm,Rn */
	IF(0x0C068A1Cu); MACL = r10 * r13;  /* 0C068A1C mul.l Rm,Rn */
	r6 = 0xC217A04u; UPD(0x0C068A20u, 4);  /* 0C068A1E mov.l @(disp,pc),Rn */
	IF(0x0C068A20u); r9 = MACL;  /* 0C068A20 sts macl,Rn */
	IF(0x0C068A22u); MACL = r12 * r7;  /* 0C068A22 mul.l Rm,Rn */
	IF(0x0C068A24u); r8 = MACL;  /* 0C068A24 sts macl,Rn */
	r9 += r8;  /* 0C068A26 add Rm,Rn */
	r9 += r6;  /* 0C068A28 add Rm,Rn */
	r4 = R32(r9 + 0xCu); UPD(0x0C068A2Cu, 7);  /* 0C068A2A mov.l @(disp,Rm),Rn */
	r4 += 0x1u;  /* 0C068A2C add #imm,Rn */
	{ W32(r9 + 0xCu, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0688E0u, 4); goto L_0C0688E0; }  /* 0C068A2E bra */
L_0C068A40: BLKS(0x0C068A40u);
	r2 = 0xC2755BCu; UPD(0x0C068A42u, 1);  /* 0C068A40 mov.l @(disp,pc),Rn */
	r13 = 0x50u;  /* 0C068A42 mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C068A46u, 2);  /* 0C068A44 mov.w @Rm,Rn */
	r4 = 0x1u;  /* 0C068A46 mov #imm,Rn */
	IF(0x0C068A48u); MACL = r5 * r13;  /* 0C068A48 mul.l Rm,Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C068A4Cu, 4);  /* 0C068A4A mov.l @(disp,Rm),Rn */
	r3 = 0xFu;  /* 0C068A4C mov #imm,Rn */
	IF(0x0C068A4Eu); r13 = MACL;  /* 0C068A4E sts macl,Rn */
	r1 = 0xC217A04u; UPD(0x0C068A52u, 3);  /* 0C068A50 mov.l @(disp,pc),Rn */
	r13 += r7;  /* 0C068A52 add Rm,Rn */
	r13 += r1;  /* 0C068A54 add Rm,Rn */
	r0 = 0xC068DE0u; UPD(0x0C068A58u, 3);  /* 0C068A56 mov.l @(disp,pc),Rn */
	r6 = R32(r9 + 0x4u); UPD(0x0C068A5Au, 1);  /* 0C068A58 mov.l @(disp,Rm),Rn */
	W32(r13 + 0x8u, r4); UPD(0x0C068A5Cu, 1);  /* 0C068A5A mov.l Rm,@(disp,Rn) */
	r8 = 0xC0000000u; UPD(0x0C068A5Eu, 1);  /* 0C068A5C mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C068A5E mov Rm,Rn */
	W32(r13, r8); UPD(0x0C068A62u, 2);  /* 0C068A60 mov.l Rm,@Rn */
	W32(r13 + 0x4u, r6); UPD(0x0C068A64u, 1);  /* 0C068A62 mov.l Rm,@(disp,Rn) */
	r8 = 0x0u;  /* 0C068A64 mov #imm,Rn */
	IF(0x0C068A66u); { u32 t_ = r0; PR = 0x0C068A6Au; W32(r13 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C068A6Au); }  /* 0C068A66 jsr @Rn */
L_0C068A6A: BLKS(0x0C068A6Au);
	r5 = 0x2048080u; UPD(0x0C068A6Cu, 1);  /* 0C068A6A mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C068A6C mov Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C068A70u, 2);  /* 0C068A6E mov.l @(disp,Rm),Rn */
	r0 += 0x44u;  /* 0C068A70 add #imm,Rn */
	r3 = R32(r9 + 0x28u); UPD(0x0C068A74u, 2);  /* 0C068A72 mov.l @(disp,Rm),Rn */
	r7 = r13;  /* 0C068A74 mov Rm,Rn */
	W32(r13 + 0x3Cu, r5); UPD(0x0C068A78u, 2);  /* 0C068A76 mov.l Rm,@(disp,Rn) */
	r7 += 0x40u;  /* 0C068A78 add #imm,Rn */
	r2 = 0x808080u; UPD(0x0C068A7Cu, 2);  /* 0C068A7A mov.l @(disp,pc),Rn */
	r9 += 0x4Au;  /* 0C068A7C add #imm,Rn */
	W16(r0, r11); UPD(0x0C068A80u, 2);  /* 0C068A7E mov.w Rm,@Rn */
	r5 = 0x0u;  /* 0C068A80 mov #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r9); UPD(0x0C068A84u, 2);  /* 0C068A82 mov.b @Rm,Rn */
	r6 = r13;  /* 0C068A84 mov Rm,Rn */
	W32(r7, r2); UPD(0x0C068A88u, 2);  /* 0C068A86 mov.l Rm,@Rn */
	r6 += 0x48u;  /* 0C068A88 add #imm,Rn */
	W32(r13 + 0x2Cu, r4); UPD(0x0C068A8Cu, 2);  /* 0C068A8A mov.l Rm,@(disp,Rn) */
	r7 += 0x9u;  /* 0C068A8C add #imm,Rn */
	W32(r13 + 0x24u, r4); UPD(0x0C068A90u, 2);  /* 0C068A8E mov.l Rm,@(disp,Rn) */
	r11 += 0x1u;  /* 0C068A90 add #imm,Rn */
	W32(r13 + 0x30u, r3); UPD(0x0C068A94u, 2);  /* 0C068A92 mov.l Rm,@(disp,Rn) */
	r9 += 0xFFFFFFB6u;  /* 0C068A94 add #imm,Rn */
	W32(r13 + 0x28u, r3); UPD(0x0C068A98u, 2);  /* 0C068A96 mov.l Rm,@(disp,Rn) */
	W32(r13 + 0x34u, r5); UPD(0x0C068A9Au, 1);  /* 0C068A98 mov.l Rm,@(disp,Rn) */
	r13 += 0x4Au;  /* 0C068A9A add #imm,Rn */
	W8(r7, r8); UPD(0x0C068A9Eu, 2);  /* 0C068A9C mov.b Rm,@Rn */
	W8(r6, r8); UPD(0x0C068AA0u, 1);  /* 0C068A9E mov.b Rm,@Rn */
	{ W8(r13, r11); /* slot mov.b Rm,@Rn */ UPD(0x0C068A04u, 3); goto L_0C068A04; }  /* 0C068AA0 bra */
L_0C068AB0: BLKS(0x0C068AB0u);
	r7 = 0xC2755BCu; UPD(0x0C068AB2u, 1);  /* 0C068AB0 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r7); UPD(0x0C068AB4u, 1);  /* 0C068AB2 mov.w @Rm,Rn */
	r3 = 0x1u;  /* 0C068AB4 mov #imm,Rn */
	IF(0x0C068AB6u); MACL = r5 * r8;  /* 0C068AB6 mul.l Rm,Rn */
	r6 = R32(r14 + 0x4u); UPD(0x0C068ABAu, 4);  /* 0C068AB8 mov.l @(disp,Rm),Rn */
	r0 = 0xFu;  /* 0C068ABA mov #imm,Rn */
	IF(0x0C068ABCu); r8 = MACL;  /* 0C068ABC sts macl,Rn */
	r1 = 0xC217A04u; UPD(0x0C068AC0u, 3);  /* 0C068ABE mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C068AC0 add Rm,Rn */
	r4 = R32(r9 + 0x4u); UPD(0x0C068AC4u, 2);  /* 0C068AC2 mov.l @(disp,Rm),Rn */
	r8 += r1;  /* 0C068AC4 add Rm,Rn */
	r2 = 0xC0000000u; UPD(0x0C068AC8u, 2);  /* 0C068AC6 mov.l @(disp,pc),Rn */
	r7 = 0xC068DE0u; UPD(0x0C068ACAu, 1);  /* 0C068AC8 mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r4); UPD(0x0C068ACCu, 1);  /* 0C068ACA mov.l Rm,@(disp,Rn) */
	W32(r8, r2); UPD(0x0C068ACEu, 1);  /* 0C068ACC mov.l Rm,@Rn */
	r4 = r10;  /* 0C068ACE mov Rm,Rn */
	W32(r8 + 0x8u, r3); UPD(0x0C068AD2u, 2);  /* 0C068AD0 mov.l Rm,@(disp,Rn) */
	IF(0x0C068AD2u); { u32 t_ = r7; PR = 0x0C068AD6u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C068AD6u); }  /* 0C068AD2 jsr @Rn */
L_0C068AD6: BLKS(0x0C068AD6u);
	r4 = r8;  /* 0C068AD6 mov Rm,Rn */
	r2 = 0x808080u; UPD(0x0C068ADAu, 2);  /* 0C068AD8 mov.l @(disp,pc),Rn */
	r4 += 0x40u;  /* 0C068ADA add #imm,Rn */
	W32(r4, r2); UPD(0x0C068ADEu, 2);  /* 0C068ADC mov.l Rm,@Rn */
	r3 = 0x0u;  /* 0C068ADE mov #imm,Rn */
	r4 += 0x9u;  /* 0C068AE0 add #imm,Rn */
	r0 = R32(r9 + 0x24u); UPD(0x0C068AE4u, 3);  /* 0C068AE2 mov.l @(disp,Rm),Rn */
	r5 = r8;  /* 0C068AE4 mov Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C068AE8u, 2);  /* 0C068AE6 mov.l @(disp,Rm),Rn */
	r5 += 0x48u;  /* 0C068AE8 add #imm,Rn */
	r6 = 0x2048080u; UPD(0x0C068AECu, 2);  /* 0C068AEA mov.l @(disp,pc),Rn */
	r9 += 0x4Au;  /* 0C068AEC add #imm,Rn */
	W8(r4, r3); UPD(0x0C068AF0u, 2);  /* 0C068AEE mov.b Rm,@Rn */
	W32(r8 + 0x3Cu, r6); UPD(0x0C068AF2u, 1);  /* 0C068AF0 mov.l Rm,@(disp,Rn) */
	r4 = 0x0u;  /* 0C068AF2 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C068AF6u, 2);  /* 0C068AF4 mov.b @Rm,Rn */
	r6 = r8;  /* 0C068AF6 mov Rm,Rn */
	W32(r8 + 0x2Cu, r0); UPD(0x0C068AFAu, 2);  /* 0C068AF8 mov.l Rm,@(disp,Rn) */
	r6 += 0x44u;  /* 0C068AFA add #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C068AFEu, 2);  /* 0C068AFC mov.l Rm,@(disp,Rn) */
	r2 += 0x1u;  /* 0C068AFE add #imm,Rn */
	W32(r8 + 0x30u, r7); UPD(0x0C068B02u, 2);  /* 0C068B00 mov.l Rm,@(disp,Rn) */
	r9 += 0xFFFFFFB6u;  /* 0C068B02 add #imm,Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C068B06u, 2);  /* 0C068B04 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x34u, r4); UPD(0x0C068B08u, 1);  /* 0C068B06 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Au;  /* 0C068B08 add #imm,Rn */
	W8(r5, r3); UPD(0x0C068B0Cu, 2);  /* 0C068B0A mov.b Rm,@Rn */
	W16(r6, r11); UPD(0x0C068B0Eu, 1);  /* 0C068B0C mov.w Rm,@Rn */
	{ W8(r8, r2); /* slot mov.b Rm,@Rn */ UPD(0x0C0689F4u, 3); goto L_0C0689F4; }  /* 0C068B0E bra */
L_0C068B20: BLKS(0x0C068B20u);
	r8 = 0xC2755BCu; UPD(0x0C068B22u, 1);  /* 0C068B20 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r8); UPD(0x0C068B24u, 1);  /* 0C068B22 mov.w @Rm,Rn */
	r4 = 0xFu;  /* 0C068B24 mov #imm,Rn */
	IF(0x0C068B26u); MACL = r5 * r1;  /* 0C068B26 mul.l Rm,Rn */
	r0 = 0xC217A04u; UPD(0x0C068B2Au, 4);  /* 0C068B28 mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C068B2A mov #imm,Rn */
	IF(0x0C068B2Cu); r8 = MACL;  /* 0C068B2C sts macl,Rn */
	r8 += r11;  /* 0C068B2E add Rm,Rn */
	r8 += r0;  /* 0C068B30 add Rm,Rn */
	r11 = 0xC0000000u; UPD(0x0C068B34u, 5);  /* 0C068B32 mov.l @(disp,pc),Rn */
	r2 = 0xC068DE0u; UPD(0x0C068B36u, 1);  /* 0C068B34 mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x4u); UPD(0x0C068B38u, 1);  /* 0C068B36 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C068B3Au, 1);  /* 0C068B38 mov.l Rm,@(disp,Rn) */
	W32(r8, r11); UPD(0x0C068B3Cu, 1);  /* 0C068B3A mov.l Rm,@Rn */
	r4 = r10;  /* 0C068B3C mov Rm,Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C068B40u, 2);  /* 0C068B3E mov.l Rm,@(disp,Rn) */
	r11 = r8;  /* 0C068B40 mov Rm,Rn */
	IF(0x0C068B42u); { u32 t_ = r2; PR = 0x0C068B46u; W32(r8 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C068B46u); }  /* 0C068B42 jsr @Rn */
L_0C068B46: BLKS(0x0C068B46u);
	r0 = 0x808080u; UPD(0x0C068B48u, 1);  /* 0C068B46 mov.l @(disp,pc),Rn */
	r11 += 0x40u;  /* 0C068B48 add #imm,Rn */
	W32(r11, r0); UPD(0x0C068B4Cu, 2);  /* 0C068B4A mov.l Rm,@Rn */
	r6 = r8;  /* 0C068B4C mov Rm,Rn */
	r11 += 0x9u;  /* 0C068B4E add #imm,Rn */
	r7 = 0x0u;  /* 0C068B50 mov #imm,Rn */
	r6 += 0x48u;  /* 0C068B52 add #imm,Rn */
	W8(r11, r7); UPD(0x0C068B56u, 5);  /* 0C068B54 mov.b Rm,@Rn */
	r0 = 0x2u;  /* 0C068B56 mov #imm,Rn */
	W8(r6, r7); UPD(0x0C068B5Au, 2);  /* 0C068B58 mov.b Rm,@Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C068B5Cu, 1);  /* 0C068B5A mov.l @(disp,Rm),Rn */
	r2 = R32(r9 + 0x28u); UPD(0x0C068B5Eu, 1);  /* 0C068B5C mov.l @(disp,Rm),Rn */
	IF(0x0C068B5Eu); r4 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C068B60u, 1);  /* 0C068B5E mov.w @(r0,Rm),Rn */
	r9 += 0x4Au;  /* 0C068B60 add #imm,Rn */
	r3 = 0x2048080u; UPD(0x0C068B64u, 2);  /* 0C068B62 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C068B64 mov #imm,Rn */
	W32(r8 + 0x3Cu, r3); UPD(0x0C068B68u, 2);  /* 0C068B66 mov.l Rm,@(disp,Rn) */
	r11 = (u32)(s32)(s8)R8(r9); UPD(0x0C068B6Au, 1);  /* 0C068B68 mov.b @Rm,Rn */
	r3 = r8;  /* 0C068B6A mov Rm,Rn */
	W32(r8 + 0x2Cu, r5); UPD(0x0C068B6Eu, 2);  /* 0C068B6C mov.l Rm,@(disp,Rn) */
	r3 += 0x44u;  /* 0C068B6E add #imm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C068B72u, 2);  /* 0C068B70 mov.l Rm,@(disp,Rn) */
	r11 += 0x1u;  /* 0C068B72 add #imm,Rn */
	W32(r8 + 0x30u, r2); UPD(0x0C068B76u, 2);  /* 0C068B74 mov.l Rm,@(disp,Rn) */
	r9 += 0xFFFFFFB6u;  /* 0C068B76 add #imm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C068B7Au, 2);  /* 0C068B78 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x34u, r0); UPD(0x0C068B7Cu, 1);  /* 0C068B7A mov.l Rm,@(disp,Rn) */
	r8 += 0x4Au;  /* 0C068B7C add #imm,Rn */
	W16(r3, r4); UPD(0x0C068B80u, 2);  /* 0C068B7E mov.w Rm,@Rn */
	{ W8(r8, r11); /* slot mov.b Rm,@Rn */ UPD(0x0C0689DAu, 3); goto L_0C0689DA; }  /* 0C068B80 bra */
L_0C068BB0: BLKS(0x0C068BB0u);
	r11 = 0x2800u; UPD(0x0C068BB2u, 1);  /* 0C068BB0 mov.w @(disp,pc),Rn */
	r0 = 0x50u;  /* 0C068BB2 mov #imm,Rn */
	IF(0x0C068BB4u); MACL = r10 * r11;  /* 0C068BB4 mul.l Rm,Rn */
	r5 = 0xC217A04u; UPD(0x0C068BB8u, 4);  /* 0C068BB6 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C068BB8 mov Rm,Rn */
	IF(0x0C068BBAu); r11 = MACL;  /* 0C068BBA sts macl,Rn */
	IF(0x0C068BBCu); MACL = r12 * r0;  /* 0C068BBC mul.l Rm,Rn */
	r1 = 0xC068EE0u; UPD(0x0C068BC0u, 5);  /* 0C068BBE mov.l @(disp,pc),Rn */
	IF(0x0C068BC0u); r9 = MACL;  /* 0C068BC0 sts macl,Rn */
	r9 += r11;  /* 0C068BC2 add Rm,Rn */
	r9 += r5;  /* 0C068BC4 add Rm,Rn */
	r2 = r9;  /* 0C068BC6 mov Rm,Rn */
	r2 += 0x44u;  /* 0C068BC8 add #imm,Rn */
	W32(r14 + 0x8u, r2); UPD(0x0C068BCCu, 6);  /* 0C068BCA mov.l Rm,@(disp,Rn) */
	r5 = 0x1u;  /* 0C068BCC mov #imm,Rn */
	IF(0x0C068BCEu); { u32 t_ = r1; PR = 0x0C068BD2u; r13 = (u32)(s32)(s16)R16(r2); /* slot mov.w @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C068BD2u); }  /* 0C068BCE jsr @Rn */
L_0C068BD2: BLKS(0x0C068BD2u);
	T = (r0 & r0) == 0;  /* 0C068BD2 tst Rm,Rn */
	{ u32 c_ = T; r8 = 0x50u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C068BDCu, 4); goto L_0C068BDC; } goto L_0C068BD8; }  /* 0C068BD4 bt/s */
L_0C068BD8: BLKS(0x0C068BD8u);
	{ r2 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C068D50u, 4); goto L_0C068D50; }  /* 0C068BD8 bra */
L_0C068BDC: BLKS(0x0C068BDCu);
	r6 = 0x2800u; UPD(0x0C068BDEu, 1);  /* 0C068BDC mov.w @(disp,pc),Rn */
	r5 = r9;  /* 0C068BDE mov Rm,Rn */
	IF(0x0C068BE0u); MACL = r10 * r6;  /* 0C068BE0 mul.l Rm,Rn */
	r5 += 0x4Cu;  /* 0C068BE2 add #imm,Rn */
	r13 = 0xC068EE0u; UPD(0x0C068BE6u, 5);  /* 0C068BE4 mov.l @(disp,pc),Rn */
	IF(0x0C068BE6u); r4 = MACL;  /* 0C068BE6 sts macl,Rn */
	W32(r14 + 0xCu, r4); UPD(0x0C068BEAu, 2);  /* 0C068BE8 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r5); UPD(0x0C068BECu, 1);  /* 0C068BEA mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C068BEC mov Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r5); UPD(0x0C068BF0u, 2);  /* 0C068BEE mov.w @Rm,Rn */
	IF(0x0C068BF0u); { u32 t_ = r13; PR = 0x0C068BF4u; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C068BF4u); }  /* 0C068BF0 jsr @Rn */
L_0C068BF4: BLKS(0x0C068BF4u);
	T = (r0 & r0) == 0;  /* 0C068BF4 tst Rm,Rn */
	{ u32 c_ = !T; r13 = 0x50u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C068CC0u, 4); goto L_0C068CC0; } UPD(0x0C068BFAu, 1); goto L_0C068BFA; }  /* 0C068BF6 bf/s */
L_0C068BFA: BLKS(0x0C068BFAu);
	r2 = 0xC068EE0u; UPD(0x0C068BFCu, 1);  /* 0C068BFA mov.l @(disp,pc),Rn */
	r13 = r9;  /* 0C068BFC mov Rm,Rn */
	r13 += 0x4Eu;  /* 0C068BFE add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r13); UPD(0x0C068C02u, 3);  /* 0C068C00 mov.w @Rm,Rn */
	r4 = r10;  /* 0C068C02 mov Rm,Rn */
	IF(0x0C068C04u); { u32 t_ = r2; PR = 0x0C068C08u; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C068C08u); }  /* 0C068C04 jsr @Rn */
L_0C068C08: BLKS(0x0C068C08u);
	T = (r0 & r0) == 0;  /* 0C068C08 tst Rm,Rn */
	{ u32 c_ = !T; r8 = 0x50u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C068C50u, 4); goto L_0C068C50; } UPD(0x0C068C0Eu, 1); goto L_0C068C0E; }  /* 0C068C0A bf/s */
L_0C068C0E: BLKS(0x0C068C0Eu);
	r8 = 0xC0AFE40u; UPD(0x0C068C10u, 1);  /* 0C068C0E mov.l @(disp,pc),Rn */
	IF(0x0C068C10u); { u32 t_ = r8; PR = 0x0C068C14u; r11 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C068C14u); }  /* 0C068C10 jsr @Rn */
L_0C068C14: BLKS(0x0C068C14u);
	r2 = R32(r14 + 0x8u); UPD(0x0C068C16u, 1);  /* 0C068C14 mov.l @(disp,Rm),Rn */
	IF(0x0C068C16u); { u32 t_ = r8; PR = 0x0C068C1Au; W16(r2, r0); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C068C1Au); }  /* 0C068C16 jsr @Rn */
L_0C068C1A: BLKS(0x0C068C1Au);
	r7 = R32(r14 + 0x10u); UPD(0x0C068C1Cu, 1);  /* 0C068C1A mov.l @(disp,Rm),Rn */
	IF(0x0C068C1Cu); { u32 t_ = r8; PR = 0x0C068C20u; W16(r7, r0); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C068C20u); }  /* 0C068C1C jsr @Rn */
L_0C068C20: BLKS(0x0C068C20u);
	r4 = r9;  /* 0C068C20 mov Rm,Rn */
	r4 += 0x49u;  /* 0C068C22 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C068C26u, 3);  /* 0C068C24 mov.b @Rm,Rn */
	W16(r13, r0); UPD(0x0C068C28u, 1);  /* 0C068C26 mov.w Rm,@Rn */
	r5 += 0xFFFFFFFFu;  /* 0C068C28 add #imm,Rn */
	r13 = r5 & 0xFF;  /* 0C068C2A extu.b Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C068C2C tst Rm,Rn */
	{ u32 c_ = !T; W8(r4, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C068C40u, 6); goto L_0C068C40; } UPD(0x0C068C32u, 1); goto L_0C068C32; }  /* 0C068C2E bf/s */
L_0C068C32: BLKS(0x0C068C32u);
	r9 = 0x18u;  /* 0C068C32 mov #imm,Rn */
	{ W32(r11 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0688E0u, 4); goto L_0C0688E0; }  /* 0C068C34 bra */
L_0C068C40: BLKS(0x0C068C40u);
	{ r1 = 0x8u; /* slot mov #imm,Rn */ UPD(0x0C0688DCu, 3); goto L_0C0688DC; }  /* 0C068C40 bra */
L_0C068C50: BLKS(0x0C068C50u);
	r6 = 0xC2755BCu; UPD(0x0C068C52u, 1);  /* 0C068C50 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C068C54u, 1);  /* 0C068C52 mov.w @Rm,Rn */
	r4 = 0xFu;  /* 0C068C54 mov #imm,Rn */
	IF(0x0C068C56u); MACL = r5 * r8;  /* 0C068C56 mul.l Rm,Rn */
	r3 = R32(r14 + 0xCu); UPD(0x0C068C5Au, 4);  /* 0C068C58 mov.l @(disp,Rm),Rn */
	r7 = 0x1u;  /* 0C068C5A mov #imm,Rn */
	IF(0x0C068C5Cu); r8 = MACL;  /* 0C068C5C sts macl,Rn */
	r1 = 0xC217A04u; UPD(0x0C068C60u, 3);  /* 0C068C5E mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C068C60 add Rm,Rn */
	r8 += r1;  /* 0C068C62 add Rm,Rn */
	r2 = 0xC0000000u; UPD(0x0C068C66u, 3);  /* 0C068C64 mov.l @(disp,pc),Rn */
	r6 = 0xC068DE0u; UPD(0x0C068C68u, 1);  /* 0C068C66 mov.l @(disp,pc),Rn */
	r0 = R32(r9 + 0x4u); UPD(0x0C068C6Au, 1);  /* 0C068C68 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C068C6Cu, 1);  /* 0C068C6A mov.l Rm,@(disp,Rn) */
	W32(r8, r2); UPD(0x0C068C6Eu, 1);  /* 0C068C6C mov.l Rm,@Rn */
	r4 = r10;  /* 0C068C6E mov Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C068C72u, 2);  /* 0C068C70 mov.l Rm,@(disp,Rn) */
	IF(0x0C068C72u); { u32 t_ = r6; PR = 0x0C068C76u; W32(r8 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C068C76u); }  /* 0C068C72 jsr @Rn */
L_0C068C76: BLKS(0x0C068C76u);
	r3 = 0x2048080u; UPD(0x0C068C78u, 1);  /* 0C068C76 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C068C78 mov Rm,Rn */
	r2 = 0x808080u; UPD(0x0C068C7Cu, 2);  /* 0C068C7A mov.l @(disp,pc),Rn */
	r5 += 0x40u;  /* 0C068C7C add #imm,Rn */
	W32(r8 + 0x3Cu, r3); UPD(0x0C068C80u, 2);  /* 0C068C7E mov.l Rm,@(disp,Rn) */
	r0 = 0x0u;  /* 0C068C80 mov #imm,Rn */
	W32(r5, r2); UPD(0x0C068C84u, 2);  /* 0C068C82 mov.l Rm,@Rn */
	r3 = r8;  /* 0C068C84 mov Rm,Rn */
	r5 += 0x9u;  /* 0C068C86 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C068C8Au, 3);  /* 0C068C88 mov.l @(disp,Rm),Rn */
	r3 += 0x44u;  /* 0C068C8A add #imm,Rn */
	r4 = R32(r9 + 0x28u); UPD(0x0C068C8Eu, 2);  /* 0C068C8C mov.l @(disp,Rm),Rn */
	r7 = r8;  /* 0C068C8E mov Rm,Rn */
	W8(r5, r0); UPD(0x0C068C92u, 2);  /* 0C068C90 mov.b Rm,@Rn */
	r9 += 0x4Au;  /* 0C068C92 add #imm,Rn */
	W16(r3, r11); UPD(0x0C068C96u, 2);  /* 0C068C94 mov.w Rm,@Rn */
	r5 = 0x0u;  /* 0C068C96 mov #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r9); UPD(0x0C068C9Au, 2);  /* 0C068C98 mov.b @Rm,Rn */
	r7 += 0x48u;  /* 0C068C9A add #imm,Rn */
	W32(r8 + 0x2Cu, r6); UPD(0x0C068C9Eu, 2);  /* 0C068C9C mov.l Rm,@(disp,Rn) */
	r11 += 0x1u;  /* 0C068C9E add #imm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C068CA2u, 2);  /* 0C068CA0 mov.l Rm,@(disp,Rn) */
	r9 += 0xFFFFFFB6u;  /* 0C068CA2 add #imm,Rn */
	W32(r8 + 0x30u, r4); UPD(0x0C068CA6u, 2);  /* 0C068CA4 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r4); UPD(0x0C068CA8u, 1);  /* 0C068CA6 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x34u, r5); UPD(0x0C068CAAu, 1);  /* 0C068CA8 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Au;  /* 0C068CAA add #imm,Rn */
	W8(r7, r0); UPD(0x0C068CAEu, 2);  /* 0C068CAC mov.b Rm,@Rn */
	{ W8(r8, r11); /* slot mov.b Rm,@Rn */ UPD(0x0C068C0Eu, 3); goto L_0C068C0E; }  /* 0C068CAE bra */
L_0C068CC0: BLKS(0x0C068CC0u);
	r0 = 0xC2755BCu; UPD(0x0C068CC2u, 1);  /* 0C068CC0 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C068CC4u, 1);  /* 0C068CC2 mov.w @Rm,Rn */
	r3 = 0x1u;  /* 0C068CC4 mov #imm,Rn */
	IF(0x0C068CC6u); MACL = r5 * r13;  /* 0C068CC6 mul.l Rm,Rn */
	r7 = R32(r14 + 0xCu); UPD(0x0C068CCAu, 4);  /* 0C068CC8 mov.l @(disp,Rm),Rn */
	r8 = 0xFu;  /* 0C068CCA mov #imm,Rn */
	IF(0x0C068CCCu); r13 = MACL;  /* 0C068CCC sts macl,Rn */
	r1 = 0xC217A04u; UPD(0x0C068CD0u, 3);  /* 0C068CCE mov.l @(disp,pc),Rn */
	r13 += r7;  /* 0C068CD0 add Rm,Rn */
	r4 = R32(r9 + 0x4u); UPD(0x0C068CD4u, 2);  /* 0C068CD2 mov.l @(disp,Rm),Rn */
	r13 += r1;  /* 0C068CD4 add Rm,Rn */
	r0 = 0xC068DE0u; UPD(0x0C068CD8u, 2);  /* 0C068CD6 mov.l @(disp,pc),Rn */
	r6 = 0xC0000000u; UPD(0x0C068CDAu, 1);  /* 0C068CD8 mov.l @(disp,pc),Rn */
	W32(r13 + 0x4u, r4); UPD(0x0C068CDCu, 1);  /* 0C068CDA mov.l Rm,@(disp,Rn) */
	W32(r13, r6); UPD(0x0C068CDEu, 1);  /* 0C068CDC mov.l Rm,@Rn */
	r4 = r10;  /* 0C068CDE mov Rm,Rn */
	W32(r13 + 0x8u, r3); UPD(0x0C068CE2u, 2);  /* 0C068CE0 mov.l Rm,@(disp,Rn) */
	IF(0x0C068CE2u); { u32 t_ = r0; PR = 0x0C068CE6u; W32(r13 + 0xCu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C068CE6u); }  /* 0C068CE2 jsr @Rn */
L_0C068CE6: BLKS(0x0C068CE6u);
	r2 = 0x2048080u; UPD(0x0C068CE8u, 1);  /* 0C068CE6 mov.l @(disp,pc),Rn */
	r6 = r13;  /* 0C068CE8 mov Rm,Rn */
	r7 = 0x808080u; UPD(0x0C068CECu, 2);  /* 0C068CEA mov.l @(disp,pc),Rn */
	r6 += 0x40u;  /* 0C068CEC add #imm,Rn */
	r3 = R32(r9 + 0x24u); UPD(0x0C068CF0u, 2);  /* 0C068CEE mov.l @(disp,Rm),Rn */
	r5 = r13;  /* 0C068CF0 mov Rm,Rn */
	r8 = R32(r9 + 0x28u); UPD(0x0C068CF4u, 2);  /* 0C068CF2 mov.l @(disp,Rm),Rn */
	r0 = r13;  /* 0C068CF4 mov Rm,Rn */
	W32(r13 + 0x3Cu, r2); UPD(0x0C068CF8u, 2);  /* 0C068CF6 mov.l Rm,@(disp,Rn) */
	r9 += 0x4Au;  /* 0C068CF8 add #imm,Rn */
	W32(r6, r7); UPD(0x0C068CFCu, 2);  /* 0C068CFA mov.l Rm,@Rn */
	r2 = 0x0u;  /* 0C068CFC mov #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C068D00u, 2);  /* 0C068CFE mov.b @Rm,Rn */
	r4 = 0x0u;  /* 0C068D00 mov #imm,Rn */
	W32(r13 + 0x2Cu, r3); UPD(0x0C068D04u, 2);  /* 0C068D02 mov.l Rm,@(disp,Rn) */
	r5 += 0x48u;  /* 0C068D04 add #imm,Rn */
	W32(r13 + 0x24u, r3); UPD(0x0C068D08u, 2);  /* 0C068D06 mov.l Rm,@(disp,Rn) */
	r6 += 0x9u;  /* 0C068D08 add #imm,Rn */
	W32(r13 + 0x30u, r8); UPD(0x0C068D0Cu, 2);  /* 0C068D0A mov.l Rm,@(disp,Rn) */
	r0 += 0x44u;  /* 0C068D0C add #imm,Rn */
	W32(r13 + 0x28u, r8); UPD(0x0C068D10u, 2);  /* 0C068D0E mov.l Rm,@(disp,Rn) */
	r7 += 0x1u;  /* 0C068D10 add #imm,Rn */
	W32(r13 + 0x34u, r2); UPD(0x0C068D14u, 2);  /* 0C068D12 mov.l Rm,@(disp,Rn) */
	r9 += 0xFFFFFFB6u;  /* 0C068D14 add #imm,Rn */
	r13 += 0x4Au;  /* 0C068D16 add #imm,Rn */
	W8(r6, r4); UPD(0x0C068D1Au, 3);  /* 0C068D18 mov.b Rm,@Rn */
	W8(r5, r4); UPD(0x0C068D1Cu, 1);  /* 0C068D1A mov.b Rm,@Rn */
	W16(r0, r11); UPD(0x0C068D1Eu, 1);  /* 0C068D1C mov.w Rm,@Rn */
	{ W8(r13, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C068BFAu, 3); goto L_0C068BFA; }  /* 0C068D1E bra */
L_0C068D50: BLKS(0x0C068D50u);
	r3 = 0xC2755BCu; UPD(0x0C068D52u, 1);  /* 0C068D50 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r3); UPD(0x0C068D54u, 1);  /* 0C068D52 mov.w @Rm,Rn */
	IF(0x0C068D54u); MACL = r5 * r8;  /* 0C068D54 mul.l Rm,Rn */
	r1 = 0xC217A04u; UPD(0x0C068D58u, 3);  /* 0C068D56 mov.l @(disp,pc),Rn */
	r7 = 0xFu;  /* 0C068D58 mov #imm,Rn */
	IF(0x0C068D5Au); r8 = MACL;  /* 0C068D5A sts macl,Rn */
	r8 += r11;  /* 0C068D5C add Rm,Rn */
	r6 = 0xC068DE0u; UPD(0x0C068D60u, 4);  /* 0C068D5E mov.l @(disp,pc),Rn */
	r8 += r1;  /* 0C068D60 add Rm,Rn */
	r0 = R32(r9 + 0x4u); UPD(0x0C068D64u, 2);  /* 0C068D62 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C068D64 mov Rm,Rn */
	r11 = 0xC0000000u; UPD(0x0C068D68u, 2);  /* 0C068D66 mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C068D6Au, 1);  /* 0C068D68 mov.l Rm,@(disp,Rn) */
	W32(r8, r11); UPD(0x0C068D6Cu, 1);  /* 0C068D6A mov.l Rm,@Rn */
	W32(r8 + 0x8u, r2); UPD(0x0C068D6Eu, 1);  /* 0C068D6C mov.l Rm,@(disp,Rn) */
	r11 = r8;  /* 0C068D6E mov Rm,Rn */
	IF(0x0C068D70u); { u32 t_ = r6; PR = 0x0C068D74u; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C068D74u); }  /* 0C068D70 jsr @Rn */
L_0C068D74: BLKS(0x0C068D74u);
	r4 = 0x2048080u; UPD(0x0C068D76u, 1);  /* 0C068D74 mov.l @(disp,pc),Rn */
	r11 += 0x40u;  /* 0C068D76 add #imm,Rn */
	r3 = 0x808080u; UPD(0x0C068D7Au, 2);  /* 0C068D78 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C068D7A mov Rm,Rn */
	r2 = R32(r9 + 0x24u); UPD(0x0C068D7Eu, 2);  /* 0C068D7C mov.l @(disp,Rm),Rn */
	r6 = r8;  /* 0C068D7E mov Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C068D82u, 2);  /* 0C068D80 mov.l @(disp,Rm),Rn */
	r0 = 0x0u;  /* 0C068D82 mov #imm,Rn */
	W32(r8 + 0x3Cu, r4); UPD(0x0C068D86u, 2);  /* 0C068D84 mov.l Rm,@(disp,Rn) */
	r9 += 0x4Au;  /* 0C068D86 add #imm,Rn */
	W32(r11, r3); UPD(0x0C068D8Au, 2);  /* 0C068D88 mov.l Rm,@Rn */
	r4 = 0x0u;  /* 0C068D8A mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C068D8Eu, 2);  /* 0C068D8C mov.b @Rm,Rn */
	r5 += 0x48u;  /* 0C068D8E add #imm,Rn */
	W32(r8 + 0x2Cu, r2); UPD(0x0C068D92u, 2);  /* 0C068D90 mov.l Rm,@(disp,Rn) */
	r11 += 0x9u;  /* 0C068D92 add #imm,Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C068D96u, 2);  /* 0C068D94 mov.l Rm,@(disp,Rn) */
	r6 += 0x44u;  /* 0C068D96 add #imm,Rn */
	W32(r8 + 0x30u, r7); UPD(0x0C068D9Au, 2);  /* 0C068D98 mov.l Rm,@(disp,Rn) */
	r3 += 0x1u;  /* 0C068D9A add #imm,Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C068D9Eu, 2);  /* 0C068D9C mov.l Rm,@(disp,Rn) */
	r9 += 0xFFFFFFB6u;  /* 0C068D9E add #imm,Rn */
	W32(r8 + 0x34u, r4); UPD(0x0C068DA2u, 2);  /* 0C068DA0 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Au;  /* 0C068DA2 add #imm,Rn */
	W8(r11, r0); UPD(0x0C068DA6u, 2);  /* 0C068DA4 mov.b Rm,@Rn */
	W8(r5, r0); UPD(0x0C068DA8u, 1);  /* 0C068DA6 mov.b Rm,@Rn */
	W16(r6, r13); UPD(0x0C068DAAu, 1);  /* 0C068DA8 mov.w Rm,@Rn */
	{ W8(r8, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C068BDCu, 3); goto L_0C068BDC; }  /* 0C068DAA bra */
L_0C068DB0: BLKS(0x0C068DB0u);
	r0 = 0x2800u; UPD(0x0C068DB2u, 1);  /* 0C068DB0 mov.w @(disp,pc),Rn */
	r6 = 0x50u;  /* 0C068DB2 mov #imm,Rn */
	IF(0x0C068DB4u); MACL = r10 * r0;  /* 0C068DB4 mul.l Rm,Rn */
	r11 = 0xC217A04u; UPD(0x0C068DB8u, 4);  /* 0C068DB6 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C068DB8 mov #imm,Rn */
	IF(0x0C068DBAu); r0 = MACL;  /* 0C068DBA sts macl,Rn */
	IF(0x0C068DBCu); MACL = r12 * r6;  /* 0C068DBC mul.l Rm,Rn */
	IF(0x0C068DBEu); r8 = MACL;  /* 0C068DBE sts macl,Rn */
	r0 += r8;  /* 0C068DC0 add Rm,Rn */
	{ IF(0x0C068DC4u); W32(r0 + r11, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0688E0u, 9); goto L_0C0688E0; }  /* 0C068DC2 bra */
}

/* FUN_0c068de0 */
void f_0C068DE0(sh3_t *c)
{
	LOCALS;
L_0C068DE0: BLKS(0x0C068DE0u);
	r0 = 0x2800u; UPD(0x0C068DE2u, 1);  /* 0C068DE0 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C068DE2 exts.w Rm,Rn */
	IF(0x0C068DE4u); MACL = r1 * r0;  /* 0C068DE4 mul.l Rm,Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C068DE6 exts.w Rm,Rn */
	r7 = 0x50u;  /* 0C068DE8 mov #imm,Rn */
	IF(0x0C068DEAu); r0 = MACL;  /* 0C068DEA sts macl,Rn */
	IF(0x0C068DECu); MACL = r3 * r7;  /* 0C068DEC mul.l Rm,Rn */
	r6 = 0xC217A04u; UPD(0x0C068DF0u, 9);  /* 0C068DEE mov.l @(disp,pc),Rn */
	r1 = 0x4u;  /* 0C068DF0 mov #imm,Rn */
	IF(0x0C068DF2u); r2 = MACL;  /* 0C068DF2 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C068DF6u, 3);  /* 0C068DF4 mov.l Rm,@-Rn */
	r0 += r2;  /* 0C068DF6 add Rm,Rn */
	r0 += r6;  /* 0C068DF8 add Rm,Rn */
	r2 = R32(r0 + 0x4u); UPD(0x0C068DFCu, 3);  /* 0C068DFA mov.l @(disp,Rm),Rn */
	r3 = 0x3u;  /* 0C068DFC mov #imm,Rn */
	IF(0x0C068DFEu); ARG0(0x423Du); { s32 s_ = (s32)r3; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C068DFE shld Rm,Rn */
	r5 = 0xC174370u; UPD(0x0C068E02u, 3);  /* 0C068E00 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C068E02 mov Rm,Rn */
	r3 = R32(r0 + 0x8u); UPD(0x0C068E06u, 2);  /* 0C068E04 mov.l @(disp,Rm),Rn */
	r2 += r5;  /* 0C068E06 add Rm,Rn */
	r4 = R32(r2); UPD(0x0C068E0Au, 2);  /* 0C068E08 mov.l @Rm,Rn */
	IF(0x0C068E0Au); ARG0(0x431Du); { s32 s_ = (s32)r1; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C068E0A shld Rm,Rn */
	W32(r0 + 0x10u, r4); UPD(0x0C068E0Eu, 2);  /* 0C068E0C mov.l Rm,@(disp,Rn) */
	r3 += r4;  /* 0C068E0E add Rm,Rn */
	r3 += 0xEu;  /* 0C068E10 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C068E14u, 3);  /* 0C068E12 mov.w @Rm,Rn */
	r0 += 0x38u;  /* 0C068E14 add #imm,Rn */
	W16(r0, r7); UPD(0x0C068E18u, 2);  /* 0C068E16 mov.w Rm,@Rn */
	r3 += 0xFFFFFFF2u;  /* 0C068E18 add #imm,Rn */
	r6 = R32(r2 + 0x4u); UPD(0x0C068E1Cu, 2);  /* 0C068E1A mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFC8u;  /* 0C068E1C add #imm,Rn */
	W32(r0 + 0x20u, r6); UPD(0x0C068E20u, 2);  /* 0C068E1E mov.l Rm,@(disp,Rn) */
	r5 = 0x3u;  /* 0C068E20 mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C068E24u, 2);  /* 0C068E22 mov.l @Rm,Rn */
	r3 = R32(r0 + 0xCu); UPD(0x0C068E26u, 1);  /* 0C068E24 mov.l @(disp,Rm),Rn */
	IF(0x0C068E26u); ARG0(0x435Du); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C068E26 shld Rm,Rn */
	W32(r0 + 0x14u, r4); UPD(0x0C068E2Au, 2);  /* 0C068E28 mov.l Rm,@(disp,Rn) */
	r3 += r4;  /* 0C068E2A add Rm,Rn */
	r1 = R32(r3); UPD(0x0C068E2Eu, 2);  /* 0C068E2C mov.l @Rm,Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C068E30u, 1);  /* 0C068E2E mov.l Rm,@(disp,Rn) */
	r2 = R32(r3 + 0x4u); UPD(0x0C068E32u, 1);  /* 0C068E30 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x1Cu, r2); UPD(0x0C068E34u, 1);  /* 0C068E32 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C068E34 mov Rm,Rn */
	IF(0x0C068E36u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C068E36 rts */
}

/* FUN_0c068e50 */
void f_0C068E50(sh3_t *c)
{
	LOCALS;
L_0C068E50: BLKS(0x0C068E50u);
	r0 = 0x2800u; UPD(0x0C068E52u, 1);  /* 0C068E50 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C068E52 exts.w Rm,Rn */
	IF(0x0C068E54u); MACL = r1 * r0;  /* 0C068E54 mul.l Rm,Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C068E56 exts.w Rm,Rn */
	r2 = 0x50u;  /* 0C068E58 mov #imm,Rn */
	IF(0x0C068E5Au); r0 = MACL;  /* 0C068E5A sts macl,Rn */
	IF(0x0C068E5Cu); MACL = r3 * r2;  /* 0C068E5C mul.l Rm,Rn */
	r6 = 0xC217A04u; UPD(0x0C068E60u, 9);  /* 0C068E5E mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C068E60 mov #imm,Rn */
	IF(0x0C068E62u); r7 = MACL;  /* 0C068E62 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C068E66u, 3);  /* 0C068E64 mov.l Rm,@-Rn */
	r0 += r7;  /* 0C068E66 add Rm,Rn */
	r0 += r6;  /* 0C068E68 add Rm,Rn */
	r3 = R32(r0 + 0xCu); UPD(0x0C068E6Cu, 3);  /* 0C068E6A mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C068E6C mov Rm,Rn */
	r4 = R32(r0 + 0x14u); UPD(0x0C068E70u, 2);  /* 0C068E6E mov.l @(disp,Rm),Rn */
	IF(0x0C068E70u); ARG0(0x435Du); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C068E70 shld Rm,Rn */
	r3 += r4;  /* 0C068E72 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C068E76u, 3);  /* 0C068E74 mov.l @Rm,Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C068E78u, 1);  /* 0C068E76 mov.l Rm,@(disp,Rn) */
	r2 = R32(r3 + 0x4u); UPD(0x0C068E7Au, 1);  /* 0C068E78 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x1Cu, r2); UPD(0x0C068E7Cu, 1);  /* 0C068E7A mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C068E7C mov Rm,Rn */
	IF(0x0C068E7Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C068E7E rts */
}

/* FUN_0c068e90 */
void f_0C068E90(sh3_t *c)
{
	LOCALS;
L_0C068E90: BLKS(0x0C068E90u);
	r0 = 0x2800u; UPD(0x0C068E92u, 1);  /* 0C068E90 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C068E92 exts.w Rm,Rn */
	IF(0x0C068E94u); MACL = r1 * r0;  /* 0C068E94 mul.l Rm,Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C068E96 exts.w Rm,Rn */
	r6 = 0x50u;  /* 0C068E98 mov #imm,Rn */
	IF(0x0C068E9Au); r0 = MACL;  /* 0C068E9A sts macl,Rn */
	IF(0x0C068E9Cu); MACL = r7 * r6;  /* 0C068E9C mul.l Rm,Rn */
	r4 = 0xC217A04u; UPD(0x0C068EA0u, 9);  /* 0C068E9E mov.l @(disp,pc),Rn */
	r2 = 0x4u;  /* 0C068EA0 mov #imm,Rn */
	IF(0x0C068EA2u); r5 = MACL;  /* 0C068EA2 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C068EA6u, 3);  /* 0C068EA4 mov.l Rm,@-Rn */
	r0 += r5;  /* 0C068EA6 add Rm,Rn */
	r0 += r4;  /* 0C068EA8 add Rm,Rn */
	r6 = R32(r0 + 0x8u); UPD(0x0C068EACu, 3);  /* 0C068EAA mov.l @(disp,Rm),Rn */
	r5 = 0x3u;  /* 0C068EAC mov #imm,Rn */
	r3 = R32(r0 + 0x10u); UPD(0x0C068EB0u, 2);  /* 0C068EAE mov.l @(disp,Rm),Rn */
	IF(0x0C068EB0u); ARG0(0x462Du); { s32 s_ = (s32)r2; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C068EB0 shld Rm,Rn */
	r6 += r3;  /* 0C068EB2 add Rm,Rn */
	r6 += 0xEu;  /* 0C068EB4 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r6); UPD(0x0C068EB8u, 4);  /* 0C068EB6 mov.w @Rm,Rn */
	r0 += 0x38u;  /* 0C068EB8 add #imm,Rn */
	W16(r0, r7); UPD(0x0C068EBCu, 2);  /* 0C068EBA mov.w Rm,@Rn */
	r6 += 0xFFFFFFF2u;  /* 0C068EBC add #imm,Rn */
	r0 += 0xFFFFFFC8u;  /* 0C068EBE add #imm,Rn */
	r3 = R32(r0 + 0xCu); UPD(0x0C068EC2u, 3);  /* 0C068EC0 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C068EC2 mov Rm,Rn */
	r4 = R32(r6); UPD(0x0C068EC6u, 2);  /* 0C068EC4 mov.l @Rm,Rn */
	IF(0x0C068EC6u); ARG0(0x435Du); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C068EC6 shld Rm,Rn */
	W32(r0 + 0x14u, r4); UPD(0x0C068ECAu, 2);  /* 0C068EC8 mov.l Rm,@(disp,Rn) */
	r3 += r4;  /* 0C068ECA add Rm,Rn */
	r1 = R32(r3); UPD(0x0C068ECEu, 2);  /* 0C068ECC mov.l @Rm,Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C068ED0u, 1);  /* 0C068ECE mov.l Rm,@(disp,Rn) */
	r2 = R32(r3 + 0x4u); UPD(0x0C068ED2u, 1);  /* 0C068ED0 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x1Cu, r2); UPD(0x0C068ED4u, 1);  /* 0C068ED2 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C068ED4 mov Rm,Rn */
	IF(0x0C068ED6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C068ED6 rts */
}

/* FUN_0c068ee0 */
void f_0C068EE0(sh3_t *c)
{
	LOCALS;
L_0C068EE0: BLKS(0x0C068EE0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C068EE2u, 1);  /* 0C068EE0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C068EE2 exts.w Rm,Rn */
	r0 = 0x400u; UPD(0x0C068EE6u, 2);  /* 0C068EE4 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C068EE6 mov Rm,Rn */
	r7 = 0xC2755BCu; UPD(0x0C068EEAu, 2);  /* 0C068EE8 mov.l @(disp,pc),Rn */
	T = (s32)r5 > (s32)r0;  /* 0C068EEA cmp/gt Rm,Rn */
	{ u32 c_ = T; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C068F22u, 4); goto L_0C068F22; } goto L_0C068EF0; }  /* 0C068EEC bt/s */
L_0C068EF0: BLKS(0x0C068EF0u);
	r2 = 0x2800u; UPD(0x0C068EF2u, 2);  /* 0C068EF0 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C068EF2 mov #imm,Rn */
	IF(0x0C068EF4u); MACL = r4 * r2;  /* 0C068EF4 mul.l Rm,Rn */
	r0 = 0xC217A04u; UPD(0x0C068EF8u, 4);  /* 0C068EF6 mov.l @(disp,pc),Rn */
	r6 = 0x7Fu;  /* 0C068EF8 mov #imm,Rn */
	IF(0x0C068EFAu); r2 = MACL;  /* 0C068EFA sts macl,Rn */
	r2 += r0;  /* 0C068EFC add Rm,Rn */
	IF(0x0C068EFEu); ;  /* 0C068EFE nop */
	UPD(0x0C068F00u, 4);
L_0C068F00: BLKS(0x0C068F00u);
	r4 = R32(r2); UPD(0x0C068F02u, 1);  /* 0C068F00 mov.l @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C068F02 tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0x50u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C068F18u, 4); goto L_0C068F18; } goto L_0C068F08; }  /* 0C068F04 bf/s */
L_0C068F08: BLKS(0x0C068F08u);
	r0 = r5;  /* 0C068F08 mov Rm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C068F0A add #imm,Rn */
	W16(r7, r3); UPD(0x0C068F0Eu, 4);  /* 0C068F0C mov.w Rm,@Rn */
	r5 = (u32)(s32)(s16)r0;  /* 0C068F0E exts.w Rm,Rn */
	r7 += 0x2u;  /* 0C068F10 add #imm,Rn */
	T = (r5 & r5) == 0;  /* 0C068F12 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C068F24u, 6); goto L_0C068F24; } UPD(0x0C068F18u, 1); goto L_0C068F18; }  /* 0C068F14 bt/s */
L_0C068F18: BLKS(0x0C068F18u);
	r4 = r3;  /* 0C068F18 mov Rm,Rn */
	r4 += 0x1u;  /* 0C068F1A add #imm,Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C068F1C exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C068F1E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C068F00u, 7); goto L_0C068F00; }  /* 0C068F20 bf */
L_0C068F22: BLKS(0x0C068F22u);
	r0 = 0x0u;  /* 0C068F22 mov #imm,Rn */
	UPD(0x0C068F24u, 1);
L_0C068F24: BLKS(0x0C068F24u);
	r15 = r14;  /* 0C068F24 mov Rm,Rn */
	IF(0x0C068F26u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C068F26 rts */
}

/* FUN_0c068f40 */
void f_0C068F40(sh3_t *c)
{
	LOCALS;
L_0C068F40: BLKS(0x0C068F40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C068F42u, 1);  /* 0C068F40 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C068F44u, 1);  /* 0C068F42 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C068F46u, 1);  /* 0C068F44 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C068F48u, 1);  /* 0C068F46 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C068F4Au, 1);  /* 0C068F48 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C068F4Cu, 1);  /* 0C068F4A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C068F4Eu, 1);  /* 0C068F4C mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C068F4E exts.w Rm,Rn */
	IF(0x0C068F50u); r15 -= 4; W32(r15, PR); UPD(0x0C068F52u, 2);  /* 0C068F50 sts.l pr,@-Rn */
	r4 = r13;  /* 0C068F52 mov Rm,Rn */
	r8 = 0xC068EE0u; UPD(0x0C068F56u, 2);  /* 0C068F54 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C068F56 add #imm,Rn */
	r1 = 0xC2755BCu; UPD(0x0C068F5Au, 2);  /* 0C068F58 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C068F5A mov Rm,Rn */
	r5 = 0x80u; UPD(0x0C068F5Eu, 2);  /* 0C068F5C mov.w @(disp,pc),Rn */
	IF(0x0C068F5Eu); { u32 t_ = r8; PR = 0x0C068F62u; W32(r14, r1); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C068F62u); }  /* 0C068F5E jsr @Rn */
L_0C068F62: BLKS(0x0C068F62u);
	T = (r0 & r0) == 0;  /* 0C068F62 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06900Au, 4); goto L_0C06900A; } goto L_0C068F68; }  /* 0C068F64 bt/s */
L_0C068F68: BLKS(0x0C068F68u);
	r2 = 0x280u; UPD(0x0C068F6Au, 2);  /* 0C068F68 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C068F6A mov #imm,Rn */
	IF(0x0C068F6Cu); MACL = r13 * r2;  /* 0C068F6C mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C068F70u, 4);  /* 0C068F6E mov.l @(disp,pc),Rn */
	IF(0x0C068F70u); r12 = MACL;  /* 0C068F70 sts macl,Rn */
	r12 += r0;  /* 0C068F72 add Rm,Rn */
	UPD(0x0C068F74u, 2);
L_0C068F74: BLKS(0x0C068F74u);
	r8 = 0x2800u; UPD(0x0C068F76u, 1);  /* 0C068F74 mov.w @(disp,pc),Rn */
	r7 = 0x50u;  /* 0C068F76 mov #imm,Rn */
	r3 = R32(r14); UPD(0x0C068F7Au, 2);  /* 0C068F78 mov.l @Rm,Rn */
	IF(0x0C068F7Au); MACL = r13 * r8;  /* 0C068F7A mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r5 = v_; } UPD(0x0C068F7Eu, 3);  /* 0C068F7C mov.w @Rm+,Rn */
	IF(0x0C068F7Eu); r8 = MACL;  /* 0C068F7E sts macl,Rn */
	IF(0x0C068F80u); MACL = r5 * r7;  /* 0C068F80 mul.l Rm,Rn */
	r9 = 0xC217A04u; UPD(0x0C068F84u, 4);  /* 0C068F82 mov.l @(disp,pc),Rn */
	IF(0x0C068F84u); r6 = MACL;  /* 0C068F84 sts macl,Rn */
	r8 += r6;  /* 0C068F86 add Rm,Rn */
	r8 += r9;  /* 0C068F88 add Rm,Rn */
	r9 = 0x3u;  /* 0C068F8A mov #imm,Rn */
	r9 &= r11;  /* 0C068F8C and Rm,Rn */
	W32(r14, r3); UPD(0x0C068F90u, 6);  /* 0C068F8E mov.l Rm,@Rn */
	r9 += r9;  /* 0C068F90 add Rm,Rn */
	r4 = 0xC17443Cu; UPD(0x0C068F94u, 2);  /* 0C068F92 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C068F94 mov Rm,Rn */
	IF(0x0C068F96u); r2 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C068F98u, 2);  /* 0C068F96 mov.w @(r0,Rm),Rn */
	r3 = r11;  /* 0C068F98 mov Rm,Rn */
	r10 = 0xCC808000u; UPD(0x0C068F9Cu, 2);  /* 0C068F9A mov.l @(disp,pc),Rn */
	IF(0x0C068F9Cu); r3 <<= 2;  /* 0C068F9C shll2 Rn */
	r3 += r2;  /* 0C068F9E add Rm,Rn */
	W32(r8, r10); UPD(0x0C068FA2u, 3);  /* 0C068FA0 mov.l Rm,@Rn */
	r7 = r3 & 0xFFFF;  /* 0C068FA2 extu.w Rm,Rn */
	r6 = 0xC068DE0u; UPD(0x0C068FA6u, 2);  /* 0C068FA4 mov.l @(disp,pc),Rn */
	r10 = r8;  /* 0C068FA6 mov Rm,Rn */
	IF(0x0C068FA8u); r7 >>= 2;  /* 0C068FA8 shlr2 Rn */
	IF(0x0C068FAAu); T = r7 & 1; r7 >>= 1;  /* 0C068FAA shlr Rn */
	r0 = 0x0u;  /* 0C068FAC mov #imm,Rn */
	r10 += 0x44u;  /* 0C068FAE add #imm,Rn */
	W32(r8 + 0x8u, r7); UPD(0x0C068FB2u, 6);  /* 0C068FB0 mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C068FB2 mov Rm,Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C068FB6u, 2);  /* 0C068FB4 mov.l Rm,@(disp,Rn) */
	r9 += r9;  /* 0C068FB6 add Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C068FBAu, 2);  /* 0C068FB8 mov.l Rm,@(disp,Rn) */
	IF(0x0C068FBAu); { u32 t_ = r6; PR = 0x0C068FBEu; W16(r10, r3); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C068FBEu); }  /* 0C068FBA jsr @Rn */
L_0C068FBE: BLKS(0x0C068FBEu);
	r5 = 0x0u;  /* 0C068FBE mov #imm,Rn */
	W32(r8 + 0x3Cu, r5); UPD(0x0C068FC2u, 2);  /* 0C068FC0 mov.l Rm,@(disp,Rn) */
	r4 = 0x808080u; UPD(0x0C068FC4u, 1);  /* 0C068FC2 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C068FC4 add #imm,Rn */
	W32(r8, r4); UPD(0x0C068FC8u, 2);  /* 0C068FC6 mov.l Rm,@Rn */
	r3 = R32(r12 + 0x10u); UPD(0x0C068FCAu, 1);  /* 0C068FC8 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFC0u;  /* 0C068FCA add #imm,Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C068FCEu, 2);  /* 0C068FCC mov.l Rm,@(disp,Rn) */
	r0 = 0xC17442Cu; UPD(0x0C068FD0u, 1);  /* 0C068FCE mov.l @(disp,pc),Rn */
	r2 = R32(r12 + 0x14u); UPD(0x0C068FD2u, 1);  /* 0C068FD0 mov.l @(disp,Rm),Rn */
	r9 += r0;  /* 0C068FD2 add Rm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C068FD6u, 2);  /* 0C068FD4 mov.l Rm,@(disp,Rn) */
	r0 = 0xC058060u; UPD(0x0C068FD8u, 1);  /* 0C068FD6 mov.l @(disp,pc),Rn */
	r5 = R32(r9); UPD(0x0C068FDAu, 1);  /* 0C068FD8 mov.l @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C068FDCu, 1);  /* 0C068FDA mov.w @Rm,Rn */
	W32(r8 + 0x34u, r5); UPD(0x0C068FDEu, 1);  /* 0C068FDC mov.l Rm,@(disp,Rn) */
	IF(0x0C068FDEu); { u32 t_ = r0; PR = 0x0C068FE2u; r4 = r1 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C068FE2u); }  /* 0C068FDE jsr @Rn */
L_0C068FE2: BLKS(0x0C068FE2u);
	W32(r8 + 0x2Cu, r0); UPD(0x0C068FE4u, 1);  /* 0C068FE2 mov.l Rm,@(disp,Rn) */
	r5 = R32(r9); UPD(0x0C068FE6u, 1);  /* 0C068FE4 mov.l @Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C068FE8u, 1);  /* 0C068FE6 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C068FEAu, 1);  /* 0C068FE8 mov.w @Rm,Rn */
	IF(0x0C068FEAu); { u32 t_ = r9; PR = 0x0C068FEEu; r4 = r7 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C068FEEu); }  /* 0C068FEA jsr @Rn */
L_0C068FEE: BLKS(0x0C068FEEu);
	W32(r8 + 0x30u, r0); UPD(0x0C068FF0u, 1);  /* 0C068FEE mov.l Rm,@(disp,Rn) */
	r6 = 0x0u;  /* 0C068FF0 mov #imm,Rn */
	r8 += 0x48u;  /* 0C068FF2 add #imm,Rn */
	W8(r8, r6); UPD(0x0C068FF6u, 3);  /* 0C068FF4 mov.b Rm,@Rn */
	r4 = r11;  /* 0C068FF6 mov Rm,Rn */
	r8 += 0x2u;  /* 0C068FF8 add #imm,Rn */
	r5 = 0x14u;  /* 0C068FFA mov #imm,Rn */
	r4 += 0x1u;  /* 0C068FFC add #imm,Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C068FFE exts.w Rm,Rn */
	r3 = 0x7Fu;  /* 0C069000 mov #imm,Rn */
	T = (s32)r11 > (s32)r3;  /* 0C069002 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W8(r8, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C068F74u, 10); goto L_0C068F74; } UPD(0x0C069008u, 1); goto L_0C069008; }  /* 0C069004 bf/s */
L_0C069008: BLKS(0x0C069008u);
	r0 = 0x0u;  /* 0C069008 mov #imm,Rn */
	UPD(0x0C06900Au, 1);
L_0C06900A: BLKS(0x0C06900Au);
	r14 += 0x4u;  /* 0C06900A add #imm,Rn */
	r15 = r14;  /* 0C06900C mov Rm,Rn */
	IF(0x0C06900Eu); PR = R32(r15); r15 += 4; UPD(0x0C069010u, 3);  /* 0C06900E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069012u, 1);  /* 0C069010 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C069014u, 1);  /* 0C069012 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C069016u, 1);  /* 0C069014 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C069018u, 1);  /* 0C069016 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06901Au, 1);  /* 0C069018 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06901Cu, 1);  /* 0C06901A mov.l @Rm+,Rn */
	IF(0x0C06901Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06901C rts */
}

/* FUN_0c069060 */
void f_0C069060(sh3_t *c)
{
	LOCALS;
L_0C069060: BLKS(0x0C069060u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C069062u, 1);  /* 0C069060 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C069062 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C069066u, 2);  /* 0C069064 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C069068u, 1);  /* 0C069066 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06906Au, 1);  /* 0C069068 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06906Cu, 1);  /* 0C06906A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06906Eu, 1);  /* 0C06906C mov.l Rm,@-Rn */
	r5 = 0x280u; UPD(0x0C069070u, 1);  /* 0C06906E mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069072u, 1);  /* 0C069070 mov.l Rm,@-Rn */
	IF(0x0C069072u); MACL = r4 * r5;  /* 0C069072 mul.l Rm,Rn */
	IF(0x0C069074u); r15 -= 4; W32(r15, PR); UPD(0x0C069076u, 3);  /* 0C069074 sts.l pr,@-Rn */
	r1 = 0xC2755BCu; UPD(0x0C069078u, 1);  /* 0C069076 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C069078 add #imm,Rn */
	r0 = 0xC283794u; UPD(0x0C06907Cu, 2);  /* 0C06907A mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06907C mov Rm,Rn */
	IF(0x0C06907Eu); r8 = MACL;  /* 0C06907E sts macl,Rn */
	W32(r14, r4); UPD(0x0C069082u, 3);  /* 0C069080 mov.l Rm,@Rn */
	r8 += r0;  /* 0C069082 add Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C069086u, 2);  /* 0C069084 mov.l Rm,@(disp,Rn) */
	r0 = r8;  /* 0C069086 mov Rm,Rn */
	r3 = 0x25Fu; UPD(0x0C06908Au, 2);  /* 0C069088 mov.w @(disp,pc),Rn */
	r9 = 0xC068EE0u; UPD(0x0C06908Cu, 1);  /* 0C06908A mov.l @(disp,pc),Rn */
	IF(0x0C06908Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06908Eu, 1);  /* 0C06908C mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C06908E extu.b Rm,Rn */
	IF(0x0C069090u); { u32 t_ = r9; PR = 0x0C069094u; r5 += r5; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C069094u); }  /* 0C069090 jsr @Rn */
L_0C069094: BLKS(0x0C069094u);
	T = (r0 & r0) == 0;  /* 0C069094 tst Rm,Rn */
	if (!T) { UPD(0x0C06909Eu, 4); goto L_0C06909E; }  /* 0C069096 bf */
L_0C069098: BLKS(0x0C069098u);
	r14 += 0xCu;  /* 0C069098 add #imm,Rn */
	{ IF(0x0C06909Cu); ; /* slot nop */ UPD(0x0C06918Eu, 4); goto L_0C06918E; }  /* 0C06909A bra */
L_0C06909E: BLKS(0x0C06909Eu);
	r4 = 0x0u;  /* 0C06909E mov #imm,Rn */
	W32(r14 + 0x8u, r4); UPD(0x0C0690A2u, 2);  /* 0C0690A0 mov.l Rm,@(disp,Rn) */
	r13 = r8;  /* 0C0690A2 mov Rm,Rn */
	UPD(0x0C0690A4u, 1);
L_0C0690A4: BLKS(0x0C0690A4u);
	r3 = 0x25Cu; UPD(0x0C0690A6u, 1);  /* 0C0690A4 mov.w @(disp,pc),Rn */
	r12 = r13;  /* 0C0690A6 mov Rm,Rn */
	r12 += r3;  /* 0C0690A8 add Rm,Rn */
	r12 += 0x3u;  /* 0C0690AA add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C0690AEu, 4);  /* 0C0690AC mov.b @Rm,Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C0690B0u, 1);  /* 0C0690AE mov.l @(disp,Rm),Rn */
	r10 = r0 & 0xFF;  /* 0C0690B0 extu.b Rm,Rn */
	r10 += r10;  /* 0C0690B2 add Rm,Rn */
	T = (s32)r2 >= (s32)r10;  /* 0C0690B4 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C069170u, 6); goto L_0C069170; } UPD(0x0C0690BAu, 1); goto L_0C0690BA; }  /* 0C0690B6 bt/s */
L_0C0690BA: BLKS(0x0C0690BAu);
	r7 = 0x50u;  /* 0C0690BA mov #imm,Rn */
	r8 = 0x2800u; UPD(0x0C0690BEu, 2);  /* 0C0690BC mov.w @(disp,pc),Rn */
	r11 = R32(r14 + 0x4u); UPD(0x0C0690C0u, 1);  /* 0C0690BE mov.l @(disp,Rm),Rn */
	IF(0x0C0690C0u); MACL = r1 * r8;  /* 0C0690C0 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r10 = v_; } UPD(0x0C0690C4u, 3);  /* 0C0690C2 mov.w @Rm+,Rn */
	IF(0x0C0690C4u); r8 = MACL;  /* 0C0690C4 sts macl,Rn */
	IF(0x0C0690C6u); MACL = r10 * r7;  /* 0C0690C6 mul.l Rm,Rn */
	r4 = 0xC217A04u; UPD(0x0C0690CAu, 4);  /* 0C0690C8 mov.l @(disp,pc),Rn */
	IF(0x0C0690CAu); r6 = MACL;  /* 0C0690CA sts macl,Rn */
	r8 += r6;  /* 0C0690CC add Rm,Rn */
	r9 = 0xCD800000u; UPD(0x0C0690D0u, 3);  /* 0C0690CE mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0690D0 add Rm,Rn */
	W32(r8, r9); UPD(0x0C0690D4u, 2);  /* 0C0690D2 mov.l Rm,@Rn */
	r4 = 0xFu;  /* 0C0690D4 mov #imm,Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C0690D8u, 2);  /* 0C0690D6 mov.l @(disp,Rm),Rn */
	r9 = 0xFu;  /* 0C0690D8 mov #imm,Rn */
	r3 = 0xC050D70u; UPD(0x0C0690DCu, 2);  /* 0C0690DA mov.l @(disp,pc),Rn */
	r9 &= r5;  /* 0C0690DC and Rm,Rn */
	r0 = 0xC174444u; UPD(0x0C0690E0u, 2);  /* 0C0690DE mov.l @(disp,pc),Rn */
	r9 += r9;  /* 0C0690E0 add Rm,Rn */
	W32(r14 + 0x4u, r11); UPD(0x0C0690E4u, 2);  /* 0C0690E2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0690E4u); { u32 t_ = r3; PR = 0x0C0690E8u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0690E8u); }  /* 0C0690E4 jsr @Rn */
L_0C0690E8: BLKS(0x0C0690E8u);
	r11 = (u32)(s32)(s16)R16(r9); UPD(0x0C0690EAu, 1);  /* 0C0690E8 mov.w @Rm,Rn */
	r8 += 0x44u;  /* 0C0690EA add #imm,Rn */
	r0 += r11;  /* 0C0690EC add Rm,Rn */
	r0 += 0xFFFFFFF8u;  /* 0C0690EE add #imm,Rn */
	W16(r8, r0); UPD(0x0C0690F2u, 4);  /* 0C0690F0 mov.w Rm,@Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C0690F2 exts.w Rm,Rn */
	r0 = r0 & 0xFFFF;  /* 0C0690F4 extu.w Rm,Rn */
	r0 += 0x4u;  /* 0C0690F6 add #imm,Rn */
	r7 = 0xC068DE0u; UPD(0x0C0690FAu, 4);  /* 0C0690F8 mov.l @(disp,pc),Rn */
	IF(0x0C0690FAu); r0 >>= 2;  /* 0C0690FA shlr2 Rn */
	IF(0x0C0690FCu); T = r0 & 1; r0 >>= 1;  /* 0C0690FC shlr Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0690FE add #imm,Rn */
	r2 = 0x3u;  /* 0C069100 mov #imm,Rn */
	r1 = 0x0u;  /* 0C069102 mov #imm,Rn */
	r0 &= 0x3Fu;  /* 0C069104 and #imm,r0 */
	W32(r8 + 0x4u, r2); UPD(0x0C069108u, 7);  /* 0C069106 mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C069108 mov Rm,Rn */
	W32(r8 + 0xCu, r1); UPD(0x0C06910Cu, 2);  /* 0C06910A mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r0); UPD(0x0C06910Eu, 1);  /* 0C06910C mov.l Rm,@(disp,Rn) */
	IF(0x0C06910Eu); { u32 t_ = r7; PR = 0x0C069112u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C069112u); }  /* 0C06910E jsr @Rn */
L_0C069112: BLKS(0x0C069112u);
	r6 = R32(r13 + 0x10u); UPD(0x0C069114u, 1);  /* 0C069112 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C069116u, 1);  /* 0C069114 mov.l Rm,@(disp,Rn) */
	r4 = R32(r13 + 0x14u); UPD(0x0C069118u, 1);  /* 0C069116 mov.l @(disp,Rm),Rn */
	r5 = 0xC050D70u; UPD(0x0C06911Au, 1);  /* 0C069118 mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C06911Cu, 1);  /* 0C06911A mov.l Rm,@(disp,Rn) */
	r10 = 0x8000u; UPD(0x0C06911Eu, 1);  /* 0C06911C mov.l @(disp,pc),Rn */
	IF(0x0C06911Eu); { u32 t_ = r5; PR = 0x0C069122u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C069122u); }  /* 0C06911E jsr @Rn */
L_0C069122: BLKS(0x0C069122u);
	r9 = r0;  /* 0C069122 mov Rm,Rn */
	r9 += r10;  /* 0C069124 add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C069128u, 3);  /* 0C069126 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C069128 mov Rm,Rn */
	IF(0x0C06912Au); { u32 t_ = r10; PR = 0x0C06912Eu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06912Eu); }  /* 0C06912A jsr @Rn */
L_0C06912E: BLKS(0x0C06912Eu);
	r5 = r9;  /* 0C06912E mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C069132u, 2);  /* 0C069130 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C069132 mov Rm,Rn */
	IF(0x0C069134u); { u32 t_ = r9; PR = 0x0C069138u; W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C069138u); }  /* 0C069134 jsr @Rn */
L_0C069138: BLKS(0x0C069138u);
	W32(r8 + 0x30u, r0); UPD(0x0C06913Au, 1);  /* 0C069138 mov.l Rm,@(disp,Rn) */
	r11 = 0x14u;  /* 0C06913A mov #imm,Rn */
	r8 += 0x48u;  /* 0C06913C add #imm,Rn */
	r0 = 0x0u;  /* 0C06913E mov #imm,Rn */
	W8(r8, r0); UPD(0x0C069142u, 4);  /* 0C069140 mov.b Rm,@Rn */
	r10 = 0x0u;  /* 0C069142 mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C069146u, 2);  /* 0C069144 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C069146 add #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C069148 extu.b Rm,Rn */
	r12 = 0xC050D70u; UPD(0x0C06914Cu, 3);  /* 0C06914A mov.l @(disp,pc),Rn */
	r4 = r2;  /* 0C06914C mov Rm,Rn */
	IF(0x0C06914Eu); r4 <<= 2;  /* 0C06914E shll2 Rn */
	IF(0x0C069150u); { u32 t_ = r12; PR = 0x0C069154u; r4 += r2; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C069154u); }  /* 0C069150 jsr @Rn */
L_0C069154: BLKS(0x0C069154u);
	r0 += 0x1u;  /* 0C069154 add #imm,Rn */
	W8(r8, r0); UPD(0x0C069158u, 2);  /* 0C069156 mov.b Rm,@Rn */
	r8 += 0x1u;  /* 0C069158 add #imm,Rn */
	W8(r8, r11); UPD(0x0C06915Cu, 2);  /* 0C06915A mov.b Rm,@Rn */
	r8 += 0xFFFFFFB6u;  /* 0C06915C add #imm,Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C069160u, 2);  /* 0C06915E mov.l @(disp,Rm),Rn */
	W32(r8 + 0x3Cu, r10); UPD(0x0C069162u, 1);  /* 0C069160 mov.l Rm,@(disp,Rn) */
	r7 += 0x1u;  /* 0C069162 add #imm,Rn */
	r9 = 0x808080u; UPD(0x0C069166u, 2);  /* 0C069164 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C069166 add #imm,Rn */
	r6 = (u32)(s32)(s16)r7;  /* 0C069168 exts.w Rm,Rn */
	W32(r8, r9); UPD(0x0C06916Cu, 3);  /* 0C06916A mov.l Rm,@Rn */
	{ W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0690A4u, 3); goto L_0C0690A4; }  /* 0C06916C bra */
L_0C069170: BLKS(0x0C069170u);
	r4 = R32(r14); UPD(0x0C069172u, 1);  /* 0C069170 mov.l @Rm,Rn */
	r9 = 0x280u; UPD(0x0C069174u, 1);  /* 0C069172 mov.w @(disp,pc),Rn */
	IF(0x0C069174u); MACL = r4 * r9;  /* 0C069174 mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C069178u, 3);  /* 0C069176 mov.l @(disp,pc),Rn */
	IF(0x0C069178u); r12 = MACL;  /* 0C069178 sts macl,Rn */
	r12 += r5;  /* 0C06917A add Rm,Rn */
	r12 += r3;  /* 0C06917C add Rm,Rn */
	r12 += 0x3u;  /* 0C06917E add #imm,Rn */
	r3 = 0x0u;  /* 0C069180 mov #imm,Rn */
	r13 = 0xC0AFBA0u; UPD(0x0C069184u, 6);  /* 0C069182 mov.l @(disp,pc),Rn */
	r5 = 0x53u;  /* 0C069184 mov #imm,Rn */
	W8(r12, r3); UPD(0x0C069188u, 2);  /* 0C069186 mov.b Rm,@Rn */
	IF(0x0C069188u); { u32 t_ = r13; PR = 0x0C06918Cu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C06918Cu); }  /* 0C069188 jsr @Rn */
L_0C06918C: BLKS(0x0C06918Cu);
	r14 += 0xCu;  /* 0C06918C add #imm,Rn */
	UPD(0x0C06918Eu, 1);
L_0C06918E: BLKS(0x0C06918Eu);
	r15 = r14;  /* 0C06918E mov Rm,Rn */
	IF(0x0C069190u); PR = R32(r15); r15 += 4; UPD(0x0C069192u, 2);  /* 0C069190 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069194u, 1);  /* 0C069192 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C069196u, 1);  /* 0C069194 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C069198u, 1);  /* 0C069196 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06919Au, 1);  /* 0C069198 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06919Cu, 1);  /* 0C06919A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06919Eu, 1);  /* 0C06919C mov.l @Rm+,Rn */
	IF(0x0C06919Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06919E rts */
}

/* FUN_0c0691e0 */
void f_0C0691E0(sh3_t *c)
{
	LOCALS;
L_0C0691E0: BLKS(0x0C0691E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0691E2u, 1);  /* 0C0691E0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0691E2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0691E6u, 2);  /* 0C0691E4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0691E8u, 1);  /* 0C0691E6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0691EAu, 1);  /* 0C0691E8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0691ECu, 1);  /* 0C0691EA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0691EEu, 1);  /* 0C0691EC mov.l Rm,@-Rn */
	r5 = 0x280u; UPD(0x0C0691F0u, 1);  /* 0C0691EE mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0691F2u, 1);  /* 0C0691F0 mov.l Rm,@-Rn */
	IF(0x0C0691F2u); MACL = r4 * r5;  /* 0C0691F2 mul.l Rm,Rn */
	IF(0x0C0691F4u); r15 -= 4; W32(r15, PR); UPD(0x0C0691F6u, 3);  /* 0C0691F4 sts.l pr,@-Rn */
	r1 = 0xC2755BCu; UPD(0x0C0691F8u, 1);  /* 0C0691F6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C0691F8 add #imm,Rn */
	r0 = 0xC283794u; UPD(0x0C0691FCu, 2);  /* 0C0691FA mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0691FC mov Rm,Rn */
	IF(0x0C0691FEu); r8 = MACL;  /* 0C0691FE sts macl,Rn */
	W32(r14, r4); UPD(0x0C069202u, 3);  /* 0C069200 mov.l Rm,@Rn */
	r8 += r0;  /* 0C069202 add Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C069206u, 2);  /* 0C069204 mov.l Rm,@(disp,Rn) */
	r0 = r8;  /* 0C069206 mov Rm,Rn */
	r3 = 0x25Fu; UPD(0x0C06920Au, 2);  /* 0C069208 mov.w @(disp,pc),Rn */
	r9 = 0xC068EE0u; UPD(0x0C06920Cu, 1);  /* 0C06920A mov.l @(disp,pc),Rn */
	IF(0x0C06920Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06920Eu, 1);  /* 0C06920C mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C06920E extu.b Rm,Rn */
	IF(0x0C069210u); { u32 t_ = r9; PR = 0x0C069214u; r5 += r5; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C069214u); }  /* 0C069210 jsr @Rn */
L_0C069214: BLKS(0x0C069214u);
	T = (r0 & r0) == 0;  /* 0C069214 tst Rm,Rn */
	{ u32 c_ = !T; r4 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06921Eu, 4); goto L_0C06921E; } goto L_0C06921A; }  /* 0C069216 bf/s */
L_0C06921A: BLKS(0x0C06921Au);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C069320u, 4); goto L_0C069320; }  /* 0C06921A bra */
L_0C06921E: BLKS(0x0C06921Eu);
	W32(r14 + 0x8u, r4); UPD(0x0C069220u, 1);  /* 0C06921E mov.l Rm,@(disp,Rn) */
	r13 = r8;  /* 0C069220 mov Rm,Rn */
	IF(0x0C069222u); ;  /* 0C069222 nop */
	UPD(0x0C069224u, 2);
L_0C069224: BLKS(0x0C069224u);
	r3 = 0x25Cu; UPD(0x0C069226u, 1);  /* 0C069224 mov.w @(disp,pc),Rn */
	r12 = r13;  /* 0C069226 mov Rm,Rn */
	r12 += r3;  /* 0C069228 add Rm,Rn */
	r12 += 0x3u;  /* 0C06922A add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C06922Eu, 4);  /* 0C06922C mov.b @Rm,Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C069230u, 1);  /* 0C06922E mov.l @(disp,Rm),Rn */
	r10 = r0 & 0xFF;  /* 0C069230 extu.b Rm,Rn */
	r10 += r10;  /* 0C069232 add Rm,Rn */
	T = (s32)r2 >= (s32)r10;  /* 0C069234 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0692F0u, 6); goto L_0C0692F0; } UPD(0x0C06923Au, 1); goto L_0C06923A; }  /* 0C069236 bt/s */
L_0C06923A: BLKS(0x0C06923Au);
	r7 = 0x50u;  /* 0C06923A mov #imm,Rn */
	r8 = 0x2800u; UPD(0x0C06923Eu, 2);  /* 0C06923C mov.w @(disp,pc),Rn */
	r11 = R32(r14 + 0x4u); UPD(0x0C069240u, 1);  /* 0C06923E mov.l @(disp,Rm),Rn */
	IF(0x0C069240u); MACL = r1 * r8;  /* 0C069240 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r10 = v_; } UPD(0x0C069244u, 3);  /* 0C069242 mov.w @Rm+,Rn */
	IF(0x0C069244u); r8 = MACL;  /* 0C069244 sts macl,Rn */
	IF(0x0C069246u); MACL = r10 * r7;  /* 0C069246 mul.l Rm,Rn */
	r4 = 0xC217A04u; UPD(0x0C06924Au, 4);  /* 0C069248 mov.l @(disp,pc),Rn */
	IF(0x0C06924Au); r6 = MACL;  /* 0C06924A sts macl,Rn */
	r8 += r6;  /* 0C06924C add Rm,Rn */
	r9 = 0xCD800000u; UPD(0x0C069250u, 3);  /* 0C06924E mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C069250 add Rm,Rn */
	W32(r8, r9); UPD(0x0C069254u, 2);  /* 0C069252 mov.l Rm,@Rn */
	r4 = 0xDu;  /* 0C069254 mov #imm,Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C069258u, 2);  /* 0C069256 mov.l @(disp,Rm),Rn */
	r9 = 0xFu;  /* 0C069258 mov #imm,Rn */
	r3 = 0xC050D70u; UPD(0x0C06925Cu, 2);  /* 0C06925A mov.l @(disp,pc),Rn */
	r9 &= r5;  /* 0C06925C and Rm,Rn */
	r0 = 0xC174464u; UPD(0x0C069260u, 2);  /* 0C06925E mov.l @(disp,pc),Rn */
	r9 += r9;  /* 0C069260 add Rm,Rn */
	W32(r14 + 0x4u, r11); UPD(0x0C069264u, 2);  /* 0C069262 mov.l Rm,@(disp,Rn) */
	IF(0x0C069264u); { u32 t_ = r3; PR = 0x0C069268u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C069268u); }  /* 0C069264 jsr @Rn */
L_0C069268: BLKS(0x0C069268u);
	r11 = (u32)(s32)(s16)R16(r9); UPD(0x0C06926Au, 1);  /* 0C069268 mov.w @Rm,Rn */
	r8 += 0x44u;  /* 0C06926A add #imm,Rn */
	r0 += r11;  /* 0C06926C add Rm,Rn */
	r0 += 0xFFFFFFFAu;  /* 0C06926E add #imm,Rn */
	W16(r8, r0); UPD(0x0C069272u, 4);  /* 0C069270 mov.w Rm,@Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C069272 exts.w Rm,Rn */
	r0 = r0 & 0xFFFF;  /* 0C069274 extu.w Rm,Rn */
	r0 += 0x4u;  /* 0C069276 add #imm,Rn */
	r7 = 0xC068DE0u; UPD(0x0C06927Au, 4);  /* 0C069278 mov.l @(disp,pc),Rn */
	IF(0x0C06927Au); r0 >>= 2;  /* 0C06927A shlr2 Rn */
	IF(0x0C06927Cu); T = r0 & 1; r0 >>= 1;  /* 0C06927C shlr Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06927E add #imm,Rn */
	r2 = 0x3u;  /* 0C069280 mov #imm,Rn */
	r1 = 0x0u;  /* 0C069282 mov #imm,Rn */
	r0 &= 0x3Fu;  /* 0C069284 and #imm,r0 */
	W32(r8 + 0x4u, r2); UPD(0x0C069288u, 7);  /* 0C069286 mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C069288 mov Rm,Rn */
	W32(r8 + 0xCu, r1); UPD(0x0C06928Cu, 2);  /* 0C06928A mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r0); UPD(0x0C06928Eu, 1);  /* 0C06928C mov.l Rm,@(disp,Rn) */
	IF(0x0C06928Eu); { u32 t_ = r7; PR = 0x0C069292u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C069292u); }  /* 0C06928E jsr @Rn */
L_0C069292: BLKS(0x0C069292u);
	r6 = R32(r13 + 0x10u); UPD(0x0C069294u, 1);  /* 0C069292 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C069296u, 1);  /* 0C069294 mov.l Rm,@(disp,Rn) */
	r4 = R32(r13 + 0x14u); UPD(0x0C069298u, 1);  /* 0C069296 mov.l @(disp,Rm),Rn */
	r5 = 0xC050D70u; UPD(0x0C06929Au, 1);  /* 0C069298 mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C06929Cu, 1);  /* 0C06929A mov.l Rm,@(disp,Rn) */
	r10 = 0x18000u; UPD(0x0C06929Eu, 1);  /* 0C06929C mov.l @(disp,pc),Rn */
	IF(0x0C06929Eu); { u32 t_ = r5; PR = 0x0C0692A2u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0692A2u); }  /* 0C06929E jsr @Rn */
L_0C0692A2: BLKS(0x0C0692A2u);
	r9 = r0;  /* 0C0692A2 mov Rm,Rn */
	r9 += r10;  /* 0C0692A4 add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C0692A8u, 3);  /* 0C0692A6 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0692A8 mov Rm,Rn */
	IF(0x0C0692AAu); { u32 t_ = r10; PR = 0x0C0692AEu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0692AEu); }  /* 0C0692AA jsr @Rn */
L_0C0692AE: BLKS(0x0C0692AEu);
	r5 = r9;  /* 0C0692AE mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0692B2u, 2);  /* 0C0692B0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0692B2 mov Rm,Rn */
	IF(0x0C0692B4u); { u32 t_ = r9; PR = 0x0C0692B8u; W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0692B8u); }  /* 0C0692B4 jsr @Rn */
L_0C0692B8: BLKS(0x0C0692B8u);
	W32(r8 + 0x30u, r0); UPD(0x0C0692BAu, 1);  /* 0C0692B8 mov.l Rm,@(disp,Rn) */
	r11 = 0x14u;  /* 0C0692BA mov #imm,Rn */
	r8 += 0x48u;  /* 0C0692BC add #imm,Rn */
	r0 = 0x0u;  /* 0C0692BE mov #imm,Rn */
	W8(r8, r0); UPD(0x0C0692C2u, 4);  /* 0C0692C0 mov.b Rm,@Rn */
	r10 = 0x0u;  /* 0C0692C2 mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C0692C6u, 2);  /* 0C0692C4 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0692C6 add #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C0692C8 extu.b Rm,Rn */
	r12 = 0xC050D70u; UPD(0x0C0692CCu, 3);  /* 0C0692CA mov.l @(disp,pc),Rn */
	r4 = r2;  /* 0C0692CC mov Rm,Rn */
	r4 += r4;  /* 0C0692CE add Rm,Rn */
	IF(0x0C0692D0u); { u32 t_ = r12; PR = 0x0C0692D4u; r4 += r2; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0692D4u); }  /* 0C0692D0 jsr @Rn */
L_0C0692D4: BLKS(0x0C0692D4u);
	r0 += 0x4u;  /* 0C0692D4 add #imm,Rn */
	W8(r8, r0); UPD(0x0C0692D8u, 2);  /* 0C0692D6 mov.b Rm,@Rn */
	r8 += 0x1u;  /* 0C0692D8 add #imm,Rn */
	W8(r8, r11); UPD(0x0C0692DCu, 2);  /* 0C0692DA mov.b Rm,@Rn */
	r8 += 0xFFFFFFB6u;  /* 0C0692DC add #imm,Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C0692E0u, 2);  /* 0C0692DE mov.l @(disp,Rm),Rn */
	W32(r8 + 0x3Cu, r10); UPD(0x0C0692E2u, 1);  /* 0C0692E0 mov.l Rm,@(disp,Rn) */
	r7 += 0x1u;  /* 0C0692E2 add #imm,Rn */
	r9 = 0x808080u; UPD(0x0C0692E6u, 2);  /* 0C0692E4 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0692E6 add #imm,Rn */
	r6 = (u32)(s32)(s16)r7;  /* 0C0692E8 exts.w Rm,Rn */
	W32(r8, r9); UPD(0x0C0692ECu, 3);  /* 0C0692EA mov.l Rm,@Rn */
	{ W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C069224u, 3); goto L_0C069224; }  /* 0C0692EC bra */
L_0C0692F0: BLKS(0x0C0692F0u);
	r4 = R32(r14); UPD(0x0C0692F2u, 1);  /* 0C0692F0 mov.l @Rm,Rn */
	r12 = 0x0u;  /* 0C0692F2 mov #imm,Rn */
	r9 = 0x280u; UPD(0x0C0692F6u, 2);  /* 0C0692F4 mov.w @(disp,pc),Rn */
	IF(0x0C0692F6u); MACL = r4 * r9;  /* 0C0692F6 mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C0692FAu, 3);  /* 0C0692F8 mov.l @(disp,pc),Rn */
	IF(0x0C0692FAu); r13 = MACL;  /* 0C0692FA sts macl,Rn */
	r13 += r5;  /* 0C0692FC add Rm,Rn */
	r13 += r3;  /* 0C0692FE add Rm,Rn */
	r13 += 0x3u;  /* 0C069300 add #imm,Rn */
	W8(r13, r12); UPD(0x0C069304u, 5);  /* 0C069302 mov.b Rm,@Rn */
	r5 = 0x53u;  /* 0C069304 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C069308u, 2);  /* 0C069306 mov.l @Rm,Rn */
	r3 = 0xC0AFBA0u; UPD(0x0C06930Au, 1);  /* 0C069308 mov.l @(disp,pc),Rn */
	r14 += 0xCu;  /* 0C06930A add #imm,Rn */
	r15 = r14;  /* 0C06930C mov Rm,Rn */
	IF(0x0C06930Eu); PR = R32(r15); r15 += 4; UPD(0x0C069310u, 3);  /* 0C06930E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069312u, 1);  /* 0C069310 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C069314u, 1);  /* 0C069312 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C069316u, 1);  /* 0C069314 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C069318u, 1);  /* 0C069316 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06931Au, 1);  /* 0C069318 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06931Cu, 1);  /* 0C06931A mov.l @Rm+,Rn */
	IF(0x0C06931Cu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFBA0u: TAIL(f_0C0AFBA0); default: JUMPD(tv_); } }  /* 0C06931C jmp @Rn */
L_0C069320: BLKS(0x0C069320u);
	r15 = r14;  /* 0C069320 mov Rm,Rn */
	IF(0x0C069322u); PR = R32(r15); r15 += 4; UPD(0x0C069324u, 2);  /* 0C069322 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069326u, 1);  /* 0C069324 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C069328u, 1);  /* 0C069326 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06932Au, 1);  /* 0C069328 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06932Cu, 1);  /* 0C06932A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06932Eu, 1);  /* 0C06932C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C069330u, 1);  /* 0C06932E mov.l @Rm+,Rn */
	IF(0x0C069330u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C069330 rts */
}

/* FUN_0c069370 */
void f_0C069370(sh3_t *c)
{
	LOCALS;
L_0C069370: BLKS(0x0C069370u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C069372u, 1);  /* 0C069370 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C069372 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C069376u, 2);  /* 0C069374 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C069378u, 1);  /* 0C069376 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06937Au, 1);  /* 0C069378 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06937Cu, 1);  /* 0C06937A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06937Eu, 1);  /* 0C06937C mov.l Rm,@-Rn */
	r5 = 0x280u; UPD(0x0C069380u, 1);  /* 0C06937E mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069382u, 1);  /* 0C069380 mov.l Rm,@-Rn */
	IF(0x0C069382u); MACL = r4 * r5;  /* 0C069382 mul.l Rm,Rn */
	IF(0x0C069384u); r15 -= 4; W32(r15, PR); UPD(0x0C069386u, 3);  /* 0C069384 sts.l pr,@-Rn */
	r1 = 0xC2755BCu; UPD(0x0C069388u, 1);  /* 0C069386 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C069388 add #imm,Rn */
	r0 = 0xC283794u; UPD(0x0C06938Cu, 2);  /* 0C06938A mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06938C mov Rm,Rn */
	IF(0x0C06938Eu); r8 = MACL;  /* 0C06938E sts macl,Rn */
	W32(r14, r4); UPD(0x0C069392u, 3);  /* 0C069390 mov.l Rm,@Rn */
	r8 += r0;  /* 0C069392 add Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C069396u, 2);  /* 0C069394 mov.l Rm,@(disp,Rn) */
	r0 = r8;  /* 0C069396 mov Rm,Rn */
	r3 = 0x25Fu; UPD(0x0C06939Au, 2);  /* 0C069398 mov.w @(disp,pc),Rn */
	r9 = 0xC068EE0u; UPD(0x0C06939Cu, 1);  /* 0C06939A mov.l @(disp,pc),Rn */
	IF(0x0C06939Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06939Eu, 1);  /* 0C06939C mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C06939E extu.b Rm,Rn */
	IF(0x0C0693A0u); { u32 t_ = r9; PR = 0x0C0693A4u; r5 += r5; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C0693A4u); }  /* 0C0693A0 jsr @Rn */
L_0C0693A4: BLKS(0x0C0693A4u);
	T = (r0 & r0) == 0;  /* 0C0693A4 tst Rm,Rn */
	{ u32 c_ = !T; r4 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0693AEu, 4); goto L_0C0693AE; } goto L_0C0693AA; }  /* 0C0693A6 bf/s */
L_0C0693AA: BLKS(0x0C0693AAu);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C0694D0u, 4); goto L_0C0694D0; }  /* 0C0693AA bra */
L_0C0693AE: BLKS(0x0C0693AEu);
	W32(r14 + 0x8u, r4); UPD(0x0C0693B0u, 1);  /* 0C0693AE mov.l Rm,@(disp,Rn) */
	r13 = r8;  /* 0C0693B0 mov Rm,Rn */
	IF(0x0C0693B2u); ;  /* 0C0693B2 nop */
	UPD(0x0C0693B4u, 2);
L_0C0693B4: BLKS(0x0C0693B4u);
	r3 = 0x25Cu; UPD(0x0C0693B6u, 1);  /* 0C0693B4 mov.w @(disp,pc),Rn */
	r12 = r13;  /* 0C0693B6 mov Rm,Rn */
	r12 += r3;  /* 0C0693B8 add Rm,Rn */
	r12 += 0x3u;  /* 0C0693BA add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C0693BEu, 4);  /* 0C0693BC mov.b @Rm,Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C0693C0u, 1);  /* 0C0693BE mov.l @(disp,Rm),Rn */
	r10 = r7 & 0xFF;  /* 0C0693C0 extu.b Rm,Rn */
	r10 += r10;  /* 0C0693C2 add Rm,Rn */
	T = (s32)r6 >= (s32)r10;  /* 0C0693C4 cmp/ge Rm,Rn */
	{ u32 c_ = T; r5 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0694A0u, 6); goto L_0C0694A0; } UPD(0x0C0693CAu, 1); goto L_0C0693CA; }  /* 0C0693C6 bt/s */
L_0C0693CA: BLKS(0x0C0693CAu);
	r9 = 0x50u;  /* 0C0693CA mov #imm,Rn */
	r8 = 0x2800u; UPD(0x0C0693CEu, 2);  /* 0C0693CC mov.w @(disp,pc),Rn */
	r2 = 0xFu;  /* 0C0693CE mov #imm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0693D2u, 2);  /* 0C0693D0 mov.l @(disp,Rm),Rn */
	IF(0x0C0693D2u); MACL = r5 * r8;  /* 0C0693D2 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r10 = v_; } UPD(0x0C0693D6u, 3);  /* 0C0693D4 mov.w @Rm+,Rn */
	IF(0x0C0693D6u); r8 = MACL;  /* 0C0693D6 sts macl,Rn */
	IF(0x0C0693D8u); MACL = r10 * r9;  /* 0C0693D8 mul.l Rm,Rn */
	r11 = 0xC217A04u; UPD(0x0C0693DCu, 4);  /* 0C0693DA mov.l @(disp,pc),Rn */
	IF(0x0C0693DCu); r3 = MACL;  /* 0C0693DC sts macl,Rn */
	r8 += r3;  /* 0C0693DE add Rm,Rn */
	r0 = 0xCD800000u; UPD(0x0C0693E2u, 3);  /* 0C0693E0 mov.l @(disp,pc),Rn */
	r8 += r11;  /* 0C0693E2 add Rm,Rn */
	W32(r8, r0); UPD(0x0C0693E6u, 2);  /* 0C0693E4 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C0693E8u, 1);  /* 0C0693E6 mov.l Rm,@(disp,Rn) */
	r8 += 0x44u;  /* 0C0693E8 add #imm,Rn */
	r0 = 0x24Cu; UPD(0x0C0693ECu, 2);  /* 0C0693EA mov.w @(disp,pc),Rn */
	r4 = 0xFu;  /* 0C0693EC mov #imm,Rn */
	IF(0x0C0693EEu); r1 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0693F0u, 2);  /* 0C0693EE mov.b @(r0,Rm),Rn */
	r2 &= r1;  /* 0C0693F0 and Rm,Rn */
	r6 = 0xC174484u; UPD(0x0C0693F4u, 2);  /* 0C0693F2 mov.l @(disp,pc),Rn */
	r2 += r2;  /* 0C0693F4 add Rm,Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C0693F8u, 2);  /* 0C0693F6 mov.l @(disp,Rm),Rn */
	r0 = r2;  /* 0C0693F8 mov Rm,Rn */
	IF(0x0C0693FAu); r11 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C0693FCu, 2);  /* 0C0693FA mov.w @(r0,Rm),Rn */
	r4 &= r7;  /* 0C0693FC and Rm,Rn */
	r5 = 0xC174464u; UPD(0x0C069400u, 2);  /* 0C0693FE mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C069400 add Rm,Rn */
	r3 = 0xC050D70u; UPD(0x0C069404u, 2);  /* 0C069402 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C069404 mov Rm,Rn */
	IF(0x0C069406u); r9 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C069408u, 2);  /* 0C069406 mov.w @(r0,Rm),Rn */
	r4 = 0xDu;  /* 0C069408 mov #imm,Rn */
	IF(0x0C06940Au); { u32 t_ = r3; PR = 0x0C06940Eu; r11 += r9; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C06940Eu); }  /* 0C06940A jsr @Rn */
L_0C06940E: BLKS(0x0C06940Eu);
	r0 += r11;  /* 0C06940E add Rm,Rn */
	r0 += 0xFFFFFFFAu;  /* 0C069410 add #imm,Rn */
	W16(r8, r0); UPD(0x0C069414u, 3);  /* 0C069412 mov.w Rm,@Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C069414 exts.w Rm,Rn */
	r0 = r0 & 0xFFFF;  /* 0C069416 extu.w Rm,Rn */
	r0 += 0x4u;  /* 0C069418 add #imm,Rn */
	r7 = 0xC068DE0u; UPD(0x0C06941Cu, 4);  /* 0C06941A mov.l @(disp,pc),Rn */
	IF(0x0C06941Cu); r0 >>= 2;  /* 0C06941C shlr2 Rn */
	IF(0x0C06941Eu); T = r0 & 1; r0 >>= 1;  /* 0C06941E shlr Rn */
	r8 += 0xFFFFFFBCu;  /* 0C069420 add #imm,Rn */
	r2 = 0x3u;  /* 0C069422 mov #imm,Rn */
	r1 = 0x0u;  /* 0C069424 mov #imm,Rn */
	r0 &= 0x3Fu;  /* 0C069426 and #imm,r0 */
	W32(r8 + 0x4u, r2); UPD(0x0C06942Au, 7);  /* 0C069428 mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C06942A mov Rm,Rn */
	W32(r8 + 0xCu, r1); UPD(0x0C06942Eu, 2);  /* 0C06942C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r0); UPD(0x0C069430u, 1);  /* 0C06942E mov.l Rm,@(disp,Rn) */
	IF(0x0C069430u); { u32 t_ = r7; PR = 0x0C069434u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C069434u); }  /* 0C069430 jsr @Rn */
L_0C069434: BLKS(0x0C069434u);
	r6 = R32(r13 + 0x10u); UPD(0x0C069436u, 1);  /* 0C069434 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C069438u, 1);  /* 0C069436 mov.l Rm,@(disp,Rn) */
	r4 = R32(r13 + 0x14u); UPD(0x0C06943Au, 1);  /* 0C069438 mov.l @(disp,Rm),Rn */
	r5 = 0xC050D70u; UPD(0x0C06943Cu, 1);  /* 0C06943A mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C06943Eu, 1);  /* 0C06943C mov.l Rm,@(disp,Rn) */
	r10 = 0x18000u; UPD(0x0C069440u, 1);  /* 0C06943E mov.l @(disp,pc),Rn */
	IF(0x0C069440u); { u32 t_ = r5; PR = 0x0C069444u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C069444u); }  /* 0C069440 jsr @Rn */
L_0C069444: BLKS(0x0C069444u);
	r9 = r0;  /* 0C069444 mov Rm,Rn */
	r9 += r10;  /* 0C069446 add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C06944Au, 3);  /* 0C069448 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06944A mov Rm,Rn */
	IF(0x0C06944Cu); { u32 t_ = r10; PR = 0x0C069450u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C069450u); }  /* 0C06944C jsr @Rn */
L_0C069450: BLKS(0x0C069450u);
	r5 = r9;  /* 0C069450 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C069454u, 2);  /* 0C069452 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C069454 mov Rm,Rn */
	IF(0x0C069456u); { u32 t_ = r9; PR = 0x0C06945Au; W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06945Au); }  /* 0C069456 jsr @Rn */
L_0C06945A: BLKS(0x0C06945Au);
	W32(r8 + 0x30u, r0); UPD(0x0C06945Cu, 1);  /* 0C06945A mov.l Rm,@(disp,Rn) */
	r11 = 0x14u;  /* 0C06945C mov #imm,Rn */
	r8 += 0x48u;  /* 0C06945E add #imm,Rn */
	r0 = 0x0u;  /* 0C069460 mov #imm,Rn */
	W8(r8, r0); UPD(0x0C069464u, 4);  /* 0C069462 mov.b Rm,@Rn */
	r10 = 0x0u;  /* 0C069464 mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C069468u, 2);  /* 0C069466 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C069468 add #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C06946A extu.b Rm,Rn */
	r12 = 0xC050D70u; UPD(0x0C06946Eu, 3);  /* 0C06946C mov.l @(disp,pc),Rn */
	r4 = r2;  /* 0C06946E mov Rm,Rn */
	r4 += r4;  /* 0C069470 add Rm,Rn */
	IF(0x0C069472u); { u32 t_ = r12; PR = 0x0C069476u; r4 += r2; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C069476u); }  /* 0C069472 jsr @Rn */
L_0C069476: BLKS(0x0C069476u);
	r0 += 0x4u;  /* 0C069476 add #imm,Rn */
	W8(r8, r0); UPD(0x0C06947Au, 2);  /* 0C069478 mov.b Rm,@Rn */
	r8 += 0x1u;  /* 0C06947A add #imm,Rn */
	W8(r8, r11); UPD(0x0C06947Eu, 2);  /* 0C06947C mov.b Rm,@Rn */
	r8 += 0xFFFFFFB6u;  /* 0C06947E add #imm,Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C069482u, 2);  /* 0C069480 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x3Cu, r10); UPD(0x0C069484u, 1);  /* 0C069482 mov.l Rm,@(disp,Rn) */
	r7 += 0x1u;  /* 0C069484 add #imm,Rn */
	r9 = 0x808080u; UPD(0x0C069488u, 2);  /* 0C069486 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C069488 add #imm,Rn */
	r6 = (u32)(s32)(s16)r7;  /* 0C06948A exts.w Rm,Rn */
	W32(r8, r9); UPD(0x0C06948Eu, 3);  /* 0C06948C mov.l Rm,@Rn */
	{ W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0693B4u, 3); goto L_0C0693B4; }  /* 0C06948E bra */
L_0C0694A0: BLKS(0x0C0694A0u);
	r11 = R32(r14); UPD(0x0C0694A2u, 1);  /* 0C0694A0 mov.l @Rm,Rn */
	r12 = 0x0u;  /* 0C0694A2 mov #imm,Rn */
	r0 = 0x280u; UPD(0x0C0694A6u, 2);  /* 0C0694A4 mov.w @(disp,pc),Rn */
	r5 = 0x53u;  /* 0C0694A6 mov #imm,Rn */
	IF(0x0C0694A8u); MACL = r11 * r0;  /* 0C0694A8 mul.l Rm,Rn */
	r1 = 0xC283794u; UPD(0x0C0694ACu, 4);  /* 0C0694AA mov.l @(disp,pc),Rn */
	IF(0x0C0694ACu); r13 = MACL;  /* 0C0694AC sts macl,Rn */
	r13 += r1;  /* 0C0694AE add Rm,Rn */
	r13 += r3;  /* 0C0694B0 add Rm,Rn */
	r13 += 0x3u;  /* 0C0694B2 add #imm,Rn */
	W8(r13, r12); UPD(0x0C0694B6u, 5);  /* 0C0694B4 mov.b Rm,@Rn */
	r4 = R32(r14); UPD(0x0C0694B8u, 1);  /* 0C0694B6 mov.l @Rm,Rn */
	r2 = 0xC0AFBA0u; UPD(0x0C0694BAu, 1);  /* 0C0694B8 mov.l @(disp,pc),Rn */
	r14 += 0xCu;  /* 0C0694BA add #imm,Rn */
	r15 = r14;  /* 0C0694BC mov Rm,Rn */
	IF(0x0C0694BEu); PR = R32(r15); r15 += 4; UPD(0x0C0694C0u, 3);  /* 0C0694BE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0694C2u, 1);  /* 0C0694C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0694C4u, 1);  /* 0C0694C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0694C6u, 1);  /* 0C0694C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0694C8u, 1);  /* 0C0694C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0694CAu, 1);  /* 0C0694C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0694CCu, 1);  /* 0C0694CA mov.l @Rm+,Rn */
	IF(0x0C0694CCu); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFBA0u: TAIL(f_0C0AFBA0); default: JUMPD(tv_); } }  /* 0C0694CC jmp @Rn */
L_0C0694D0: BLKS(0x0C0694D0u);
	r15 = r14;  /* 0C0694D0 mov Rm,Rn */
	IF(0x0C0694D2u); PR = R32(r15); r15 += 4; UPD(0x0C0694D4u, 2);  /* 0C0694D2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0694D6u, 1);  /* 0C0694D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0694D8u, 1);  /* 0C0694D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0694DAu, 1);  /* 0C0694D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0694DCu, 1);  /* 0C0694DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0694DEu, 1);  /* 0C0694DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0694E0u, 1);  /* 0C0694DE mov.l @Rm+,Rn */
	IF(0x0C0694E0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0694E0 rts */
}

void f_0C069530(sh3_t *c)
{
	LOCALS;
L_0C069530: BLKS(0x0C069530u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C069532u, 1);  /* 0C069530 mov.l Rm,@-Rn */
	r7 = 0x50u;  /* 0C069532 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C069536u, 2);  /* 0C069534 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C069536 exts.w Rm,Rn */
	r3 = 0x2800u; UPD(0x0C06953Au, 2);  /* 0C069538 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C06953A exts.w Rm,Rn */
	IF(0x0C06953Cu); MACL = r9 * r3;  /* 0C06953C mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C069540u, 4);  /* 0C06953E mov.l Rm,@-Rn */
	IF(0x0C069540u); r3 = MACL;  /* 0C069540 sts macl,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C069544u, 2);  /* 0C069542 mov.l Rm,@-Rn */
	IF(0x0C069544u); MACL = r5 * r7;  /* 0C069544 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069548u, 3);  /* 0C069546 mov.l Rm,@-Rn */
	IF(0x0C069548u); r6 = MACL;  /* 0C069548 sts macl,Rn */
	r0 = 0xC217A04u; UPD(0x0C06954Cu, 2);  /* 0C06954A mov.l @(disp,pc),Rn */
	r3 += r6;  /* 0C06954C add Rm,Rn */
	IF(0x0C06954Eu); r15 -= 4; W32(r15, PR); UPD(0x0C069550u, 2);  /* 0C06954E sts.l pr,@-Rn */
	r3 += r0;  /* 0C069550 add Rm,Rn */
	r0 = R32(r3 + 0x24u); UPD(0x0C069554u, 2);  /* 0C069552 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C069554 mov Rm,Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C069558u, 2);  /* 0C069556 mov.l @(disp,Rm),Rn */
	r4 = R32(r3 + 0x2Cu); UPD(0x0C06955Au, 1);  /* 0C069558 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C06955Cu, 1);  /* 0C06955A mov.l @(disp,Rm),Rn */
	r0 += r4;  /* 0C06955C add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C069560u, 2);  /* 0C06955E mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C069560 add Rm,Rn */
	r7 += r0;  /* 0C069562 add Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C069566u, 3);  /* 0C069564 mov.l Rm,@(disp,Rn) */
	IF(0x0C069566u); T = (s32)r7 >= 0;  /* 0C069566 cmp/pz Rn */
	{ u32 c_ = T; W32(r3 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C069570u, 4); goto L_0C069570; } UPD(0x0C06956Cu, 1); goto L_0C06956C; }  /* 0C069568 bt/s */
L_0C06956C: BLKS(0x0C06956Cu);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0696F0u, 3); goto L_0C0696F0; }  /* 0C06956C bra */
L_0C069570: BLKS(0x0C069570u);
	r8 = 0xB00000u; UPD(0x0C069572u, 1);  /* 0C069570 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r8;  /* 0C069572 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C06958Eu, 4); goto L_0C06958E; }  /* 0C069574 bt */
L_0C069576: BLKS(0x0C069576u);
	r2 = 0xC3929E0u; UPD(0x0C069578u, 1);  /* 0C069576 mov.l @(disp,pc),Rn */
	r11 = R32(r2); UPD(0x0C06957Au, 1);  /* 0C069578 mov.l @Rm,Rn */
	r10 = 0xFF880000u; UPD(0x0C06957Cu, 1);  /* 0C06957A mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C06957C mov Rm,Rn */
	r2 -= r11;  /* 0C06957E sub Rm,Rn */
	r2 += r10;  /* 0C069580 add Rm,Rn */
	IF(0x0C069582u); T = (s32)r2 >= 0;  /* 0C069582 cmp/pz Rn */
	if (T) { UPD(0x0C069588u, 7); goto L_0C069588; }  /* 0C069584 bt */
L_0C069586: BLKS(0x0C069586u);
	r2 = 0u - r2;  /* 0C069586 neg Rm,Rn */
	UPD(0x0C069588u, 1);
L_0C069588: BLKS(0x0C069588u);
	r4 = 0x880000u; UPD(0x0C06958Au, 1);  /* 0C069588 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C06958A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0695B0u, 4); goto L_0C0695B0; }  /* 0C06958C bf */
L_0C06958E: BLKS(0x0C06958Eu);
	r5 = 0x0u;  /* 0C06958E mov #imm,Rn */
	W32(r3, r5); UPD(0x0C069592u, 2);  /* 0C069590 mov.l Rm,@Rn */
L_0C069592: BLKS(0x0C069592u);
	r15 = r14;  /* 0C069592 mov Rm,Rn */
	IF(0x0C069594u); PR = R32(r15); r15 += 4; UPD(0x0C069596u, 2);  /* 0C069594 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069598u, 1);  /* 0C069596 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06959Au, 1);  /* 0C069598 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06959Cu, 1);  /* 0C06959A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06959Eu, 1);  /* 0C06959C mov.l @Rm+,Rn */
	IF(0x0C06959Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06959E rts */
L_0C0695B0: BLKS(0x0C0695B0u);
	r2 = R32(r3 + 0xCu); UPD(0x0C0695B2u, 1);  /* 0C0695B0 mov.l @(disp,Rm),Rn */
	r0 = 0x7u;  /* 0C0695B2 mov #imm,Rn */
	T = r2 > r0;  /* 0C0695B4 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C069592u, 5); goto L_0C069592; }  /* 0C0695B6 bt */
L_0C0695B8: BLKS(0x0C0695B8u);
	r0 = 0xC0695DCu;  /* 0C0695B8 mova @(disp,pc),r0 */
	IF(0x0C0695BAu); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0695BCu, 2);  /* 0C0695BA mov.b @(r0,Rm),Rn */
	r6 = r6 & 0xFF;  /* 0C0695BC extu.b Rm,Rn */
	IF(0x0C0695BEu); { u32 tv_ = (r6 + 0x0C0695C2u); u32 t_ = PHYS(tv_); IF(0x0C0695C0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0695F0u: goto L_0C0695F0; case 0x0C069630u: goto L_0C069630; case 0x0C069680u: goto L_0C069680; default: JUMPD(tv_); } }  /* 0C0695BE braf Rn */
L_0C0695F0: BLKS(0x0C0695F0u);
	r3 = 0x2800u; UPD(0x0C0695F2u, 1);  /* 0C0695F0 mov.w @(disp,pc),Rn */
	r2 = 0x50u;  /* 0C0695F2 mov #imm,Rn */
	IF(0x0C0695F4u); MACL = r9 * r3;  /* 0C0695F4 mul.l Rm,Rn */
	r8 = 0xC217A04u; UPD(0x0C0695F8u, 4);  /* 0C0695F6 mov.l @(disp,pc),Rn */
	IF(0x0C0695F8u); r3 = MACL;  /* 0C0695F8 sts macl,Rn */
	IF(0x0C0695FAu); MACL = r5 * r2;  /* 0C0695FA mul.l Rm,Rn */
	IF(0x0C0695FCu); r11 = MACL;  /* 0C0695FC sts macl,Rn */
	r3 += r11;  /* 0C0695FE add Rm,Rn */
	r3 += r8;  /* 0C069600 add Rm,Rn */
	r8 = r3;  /* 0C069602 mov Rm,Rn */
	r8 += 0x48u;  /* 0C069604 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r8); UPD(0x0C069608u, 9);  /* 0C069606 mov.b @Rm,Rn */
	r1 = r3;  /* 0C069608 mov Rm,Rn */
	r1 += 0x49u;  /* 0C06960A add #imm,Rn */
	r10 += 0x1u;  /* 0C06960C add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r1); UPD(0x0C069610u, 4);  /* 0C06960E mov.b @Rm,Rn */
	W8(r8, r10); UPD(0x0C069612u, 1);  /* 0C069610 mov.b Rm,@Rn */
	r7 += 0xFFFFFFFFu;  /* 0C069612 add #imm,Rn */
	r10 = r7 & 0xFF;  /* 0C069614 extu.b Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C069616 tst Rm,Rn */
	{ u32 c_ = !T; W8(r1, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C069592u, 6); goto L_0C069592; } UPD(0x0C06961Cu, 1); goto L_0C06961C; }  /* 0C069618 bf/s */
L_0C06961C: BLKS(0x0C06961Cu);
	r4 = 0x4u;  /* 0C06961C mov #imm,Rn */
	W32(r3 + 0xCu, r4); UPD(0x0C069620u, 2);  /* 0C06961E mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C069620 mov Rm,Rn */
	r9 = 0xC068E50u; UPD(0x0C069624u, 2);  /* 0C069622 mov.l @(disp,pc),Rn */
	IF(0x0C069624u); { u32 t_ = r9; PR = 0x0C069628u; IF(0x0C069626u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C068E50, 0x0C068E50u, 0x0C069628u); }  /* 0C069624 jsr @Rn */
L_0C069628: BLKS(0x0C069628u);
	{ W8(r8, r10); /* slot mov.b Rm,@Rn */ UPD(0x0C069592u, 3); goto L_0C069592; }  /* 0C069628 bra */
L_0C069630: BLKS(0x0C069630u);
	r7 = 0x2800u; UPD(0x0C069632u, 1);  /* 0C069630 mov.w @(disp,pc),Rn */
	r0 = 0x50u;  /* 0C069632 mov #imm,Rn */
	IF(0x0C069634u); MACL = r9 * r7;  /* 0C069634 mul.l Rm,Rn */
	r4 = 0xC217A04u; UPD(0x0C069638u, 4);  /* 0C069636 mov.l @(disp,pc),Rn */
	r10 = 0xFFFFFFF8u;  /* 0C069638 mov #imm,Rn */
	IF(0x0C06963Au); r7 = MACL;  /* 0C06963A sts macl,Rn */
	IF(0x0C06963Cu); MACL = r5 * r0;  /* 0C06963C mul.l Rm,Rn */
	r8 = 0xE0u; UPD(0x0C069640u, 5);  /* 0C06963E mov.w @(disp,pc),Rn */
	IF(0x0C069640u); r6 = MACL;  /* 0C069640 sts macl,Rn */
	r7 += r6;  /* 0C069642 add Rm,Rn */
	r7 += r4;  /* 0C069644 add Rm,Rn */
	r3 = R32(r7 + 0x2Cu); UPD(0x0C069648u, 4);  /* 0C069646 mov.l @(disp,Rm),Rn */
	IF(0x0C069648u); MACL = r3 * r8;  /* 0C069648 mul.l Rm,Rn */
	r11 = R32(r7 + 0x30u); UPD(0x0C06964Cu, 3);  /* 0C06964A mov.l @(disp,Rm),Rn */
	IF(0x0C06964Cu); r2 = MACL;  /* 0C06964C sts macl,Rn */
	IF(0x0C06964Eu); MACL = r11 * r8;  /* 0C06964E mul.l Rm,Rn */
	IF(0x0C069650u); ARG0(0x42ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C069650 shad Rm,Rn */
	IF(0x0C069652u); r0 = MACL;  /* 0C069652 sts macl,Rn */
	r8 = r7;  /* 0C069654 mov Rm,Rn */
	IF(0x0C069656u); ARG0(0x40ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C069656 shad Rm,Rn */
	r8 += 0x48u;  /* 0C069658 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C06965Cu, 9);  /* 0C06965A mov.b @Rm,Rn */
	W32(r7 + 0x30u, r0); UPD(0x0C06965Eu, 1);  /* 0C06965C mov.l Rm,@(disp,Rn) */
	r6 += 0x1u;  /* 0C06965E add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C069660 extu.b Rm,Rn */
	W32(r7 + 0x2Cu, r2); UPD(0x0C069664u, 3);  /* 0C069662 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x4u;  /* 0C069664 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r8, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C069592u, 4); goto L_0C069592; } UPD(0x0C06966Au, 1); goto L_0C06966A; }  /* 0C069666 bf/s */
L_0C06966A: BLKS(0x0C06966Au);
	r4 = r9;  /* 0C06966A mov Rm,Rn */
	r10 = R32(r7 + 0xCu); UPD(0x0C06966Eu, 2);  /* 0C06966C mov.l @(disp,Rm),Rn */
	r9 = 0xC068E50u; UPD(0x0C069670u, 1);  /* 0C06966E mov.l @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C069670 add #imm,Rn */
	IF(0x0C069672u); { u32 t_ = r9; PR = 0x0C069676u; W32(r7 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C068E50, 0x0C068E50u, 0x0C069676u); }  /* 0C069672 jsr @Rn */
L_0C069676: BLKS(0x0C069676u);
	r5 = 0x0u;  /* 0C069676 mov #imm,Rn */
	W8(r8, r5); UPD(0x0C06967Au, 2);  /* 0C069678 mov.b Rm,@Rn */
L_0C06967A: BLKS(0x0C06967Au);
	{ IF(0x0C06967Cu); ; /* slot nop */ UPD(0x0C069592u, 3); goto L_0C069592; }  /* 0C06967A bra */
L_0C069680: BLKS(0x0C069680u);
	r10 = 0x2800u; UPD(0x0C069682u, 1);  /* 0C069680 mov.w @(disp,pc),Rn */
	r8 = 0x50u;  /* 0C069682 mov #imm,Rn */
	IF(0x0C069684u); MACL = r9 * r10;  /* 0C069684 mul.l Rm,Rn */
	r0 = 0xC217A04u; UPD(0x0C069688u, 4);  /* 0C069686 mov.l @(disp,pc),Rn */
	r11 = 0xFFFFFFF8u;  /* 0C069688 mov #imm,Rn */
	IF(0x0C06968Au); r10 = MACL;  /* 0C06968A sts macl,Rn */
	IF(0x0C06968Cu); MACL = r5 * r8;  /* 0C06968C mul.l Rm,Rn */
	r2 = 0xE0u; UPD(0x0C069690u, 5);  /* 0C06968E mov.w @(disp,pc),Rn */
	IF(0x0C069690u); r7 = MACL;  /* 0C069690 sts macl,Rn */
	r10 += r7;  /* 0C069692 add Rm,Rn */
	r10 += r0;  /* 0C069694 add Rm,Rn */
	r6 = R32(r10 + 0x2Cu); UPD(0x0C069698u, 4);  /* 0C069696 mov.l @(disp,Rm),Rn */
	IF(0x0C069698u); MACL = r6 * r2;  /* 0C069698 mul.l Rm,Rn */
	r3 = R32(r10 + 0x30u); UPD(0x0C06969Cu, 3);  /* 0C06969A mov.l @(disp,Rm),Rn */
	IF(0x0C06969Cu); r4 = MACL;  /* 0C06969C sts macl,Rn */
	IF(0x0C06969Eu); MACL = r3 * r2;  /* 0C06969E mul.l Rm,Rn */
	IF(0x0C0696A0u); ARG0(0x44BCu); { s32 s_ = (s32)r11; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0696A0 shad Rm,Rn */
	IF(0x0C0696A2u); r8 = MACL;  /* 0C0696A2 sts macl,Rn */
	IF(0x0C0696A4u); ARG0(0x48BCu); { s32 s_ = (s32)r11; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = (u32)((s32)r8 >> 31); else r8 = (u32)((s32)r8 >> ((~s_ & 31) + 1)); }  /* 0C0696A4 shad Rm,Rn */
	r11 = r10;  /* 0C0696A6 mov Rm,Rn */
	r11 += 0x48u;  /* 0C0696A8 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r11); UPD(0x0C0696ACu, 9);  /* 0C0696AA mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0696AC add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0696AE extu.b Rm,Rn */
	W32(r10 + 0x2Cu, r4); UPD(0x0C0696B2u, 3);  /* 0C0696B0 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x4u;  /* 0C0696B2 cmp/eq #imm,r0 */
	W32(r10 + 0x30u, r8); UPD(0x0C0696B6u, 2);  /* 0C0696B4 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W8(r11, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06967Au, 3); goto L_0C06967A; } UPD(0x0C0696BAu, 1); goto L_0C0696BA; }  /* 0C0696B6 bf/s */
L_0C0696BA: BLKS(0x0C0696BAu);
	r9 += 0x40u;  /* 0C0696BA add #imm,Rn */
	W32(r10 + 0x8u, r9); UPD(0x0C0696BEu, 2);  /* 0C0696BC mov.l Rm,@(disp,Rn) */
	r8 = 0x0u;  /* 0C0696BE mov #imm,Rn */
	r2 = 0xC068DE0u; UPD(0x0C0696C2u, 2);  /* 0C0696C0 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFC0u;  /* 0C0696C2 add #imm,Rn */
	r4 = r9;  /* 0C0696C4 mov Rm,Rn */
	W32(r10 + 0x30u, r8); UPD(0x0C0696C8u, 3);  /* 0C0696C6 mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x2Cu, r8); UPD(0x0C0696CAu, 1);  /* 0C0696C8 mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x4u, r8); UPD(0x0C0696CCu, 1);  /* 0C0696CA mov.l Rm,@(disp,Rn) */
	IF(0x0C0696CCu); { u32 t_ = r2; PR = 0x0C0696D0u; W32(r10 + 0xCu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C0696D0u); }  /* 0C0696CC jsr @Rn */
L_0C0696D0: BLKS(0x0C0696D0u);
	r5 = 0x204B0B0u; UPD(0x0C0696D2u, 1);  /* 0C0696D0 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0696D2 mov Rm,Rn */
	r9 = 0xC0AFB20u; UPD(0x0C0696D6u, 2);  /* 0C0696D4 mov.l @(disp,pc),Rn */
	W32(r10 + 0x3Cu, r5); UPD(0x0C0696D8u, 1);  /* 0C0696D6 mov.l Rm,@(disp,Rn) */
	W8(r11, r8); UPD(0x0C0696DAu, 1);  /* 0C0696D8 mov.b Rm,@Rn */
	IF(0x0C0696DAu); { u32 t_ = r9; PR = 0x0C0696DEu; r5 = 0x54u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFB20, 0x0C0AFB20u, 0x0C0696DEu); }  /* 0C0696DA jsr @Rn */
L_0C0696DE: BLKS(0x0C0696DEu);
	{ IF(0x0C0696E0u); ; /* slot nop */ UPD(0x0C069592u, 3); goto L_0C069592; }  /* 0C0696DE bra */
L_0C0696F0: BLKS(0x0C0696F0u);
	{ IF(0x0C0696F2u); ; /* slot nop */ UPD(0x0C069570u, 3); goto L_0C069570; }  /* 0C0696F0 bra */
}

/* FUN_0c069710 */
void f_0C069710(sh3_t *c)
{
	LOCALS;
L_0C069710: BLKS(0x0C069710u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C069712u, 1);  /* 0C069710 mov.l Rm,@-Rn */
	r5 = 0x8u;  /* 0C069712 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C069716u, 2);  /* 0C069714 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C069718u, 1);  /* 0C069716 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C069718 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06971Cu, 2);  /* 0C06971A mov.l Rm,@-Rn */
	r4 = r9;  /* 0C06971C mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C069720u, 2);  /* 0C06971E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C069722u, 1);  /* 0C069720 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069724u, 1);  /* 0C069722 mov.l Rm,@-Rn */
	r8 = 0xC068EE0u; UPD(0x0C069726u, 1);  /* 0C069724 mov.l @(disp,pc),Rn */
	IF(0x0C069726u); r15 -= 4; W32(r15, PR); UPD(0x0C069728u, 1);  /* 0C069726 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF4u;  /* 0C069728 add #imm,Rn */
	IF(0x0C06972Au); { u32 t_ = r8; PR = 0x0C06972Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C06972Eu); }  /* 0C06972A jsr @Rn */
L_0C06972E: BLKS(0x0C06972Eu);
	T = (r0 & r0) == 0;  /* 0C06972E tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069738u, 4); goto L_0C069738; } goto L_0C069734; }  /* 0C069730 bf/s */
L_0C069734: BLKS(0x0C069734u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C069830u, 4); goto L_0C069830; }  /* 0C069734 bra */
L_0C069738: BLKS(0x0C069738u);
	r2 = 0xC2755BCu; UPD(0x0C06973Au, 1);  /* 0C069738 mov.l @(disp,pc),Rn */
	W32(r14, r2); UPD(0x0C06973Cu, 1);  /* 0C06973A mov.l Rm,@Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C06973Eu, 1);  /* 0C06973C mov.l Rm,@(disp,Rn) */
	IF(0x0C06973Eu); ;  /* 0C06973E nop */
	UPD(0x0C069740u, 1);
L_0C069740: BLKS(0x0C069740u);
	r7 = 0x280u; UPD(0x0C069742u, 1);  /* 0C069740 mov.w @(disp,pc),Rn */
	r3 = 0xAu;  /* 0C069742 mov #imm,Rn */
	IF(0x0C069744u); MACL = r9 * r7;  /* 0C069744 mul.l Rm,Rn */
	r6 = 0xC283794u; UPD(0x0C069748u, 4);  /* 0C069746 mov.l @(disp,pc),Rn */
	IF(0x0C069748u); r0 = MACL;  /* 0C069748 sts macl,Rn */
	r5 = 0x25Fu; UPD(0x0C06974Cu, 2);  /* 0C06974A mov.w @(disp,pc),Rn */
	r0 += r6;  /* 0C06974C add Rm,Rn */
	IF(0x0C06974Eu); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C069750u, 2);  /* 0C06974E mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C069750 extu.b Rm,Rn */
	T = r2 > r3;  /* 0C069752 cmp/hi Rm,Rn */
	{ u32 c_ = T; r6 = 0xAu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06975Au, 5); goto L_0C06975A; } goto L_0C069758; }  /* 0C069754 bt/s */
L_0C069758: BLKS(0x0C069758u);
	r6 = r2;  /* 0C069758 mov Rm,Rn */
	UPD(0x0C06975Au, 2);
L_0C06975A: BLKS(0x0C06975Au);
	r1 = 0x280u; UPD(0x0C06975Cu, 1);  /* 0C06975A mov.w @(disp,pc),Rn */
	IF(0x0C06975Cu); MACL = r9 * r1;  /* 0C06975C mul.l Rm,Rn */
	r10 = 0xC283794u; UPD(0x0C069760u, 3);  /* 0C06975E mov.l @(disp,pc),Rn */
	IF(0x0C069760u); r8 = MACL;  /* 0C069760 sts macl,Rn */
	r13 = 0x25Fu; UPD(0x0C069764u, 2);  /* 0C069762 mov.w @(disp,pc),Rn */
	r10 += r8;  /* 0C069764 add Rm,Rn */
	r10 += r13;  /* 0C069766 add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r10); UPD(0x0C06976Au, 3);  /* 0C069768 mov.b @Rm,Rn */
	r13 = r6;  /* 0C06976A mov Rm,Rn */
	r12 -= r6;  /* 0C06976C sub Rm,Rn */
	W8(r10, r12); UPD(0x0C069770u, 3);  /* 0C06976E mov.b Rm,@Rn */
	r13 += 0xFFFFFFFFu;  /* 0C069770 add #imm,Rn */
	r11 = R32(r14 + 0x4u); UPD(0x0C069774u, 2);  /* 0C069772 mov.l @(disp,Rm),Rn */
	r10 = 0x0u;  /* 0C069774 mov #imm,Rn */
	r11 += r11;  /* 0C069776 add Rm,Rn */
	W32(r14 + 0x8u, r11); UPD(0x0C06977Au, 3);  /* 0C069778 mov.l Rm,@(disp,Rn) */
	r12 = 0xC283794u; UPD(0x0C06977Cu, 1);  /* 0C06977A mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C06977C mov #imm,Rn */
	r12 += r8;  /* 0C06977E add Rm,Rn */
	UPD(0x0C069780u, 2);
L_0C069780: BLKS(0x0C069780u);
	r8 = 0x2800u; UPD(0x0C069782u, 1);  /* 0C069780 mov.w @(disp,pc),Rn */
	r6 = 0x50u;  /* 0C069782 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C069786u, 2);  /* 0C069784 mov.l @Rm,Rn */
	IF(0x0C069786u); MACL = r9 * r8;  /* 0C069786 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r5 = v_; } UPD(0x0C06978Au, 3);  /* 0C069788 mov.w @Rm+,Rn */
	r7 = 0x5u;  /* 0C06978A mov #imm,Rn */
	IF(0x0C06978Cu); r8 = MACL;  /* 0C06978C sts macl,Rn */
	IF(0x0C06978Eu); MACL = r5 * r6;  /* 0C06978E mul.l Rm,Rn */
	r3 = 0xC217A04u; UPD(0x0C069792u, 5);  /* 0C069790 mov.l @(disp,pc),Rn */
	IF(0x0C069792u); r0 = MACL;  /* 0C069792 sts macl,Rn */
	r8 += r0;  /* 0C069794 add Rm,Rn */
	W32(r14, r4); UPD(0x0C069798u, 3);  /* 0C069796 mov.l Rm,@Rn */
	r8 += r3;  /* 0C069798 add Rm,Rn */
	r0 = R32(r14 + 0x8u); UPD(0x0C06979Cu, 2);  /* 0C06979A mov.l @(disp,Rm),Rn */
	r2 = 0xCD000000u; UPD(0x0C06979Eu, 1);  /* 0C06979C mov.l @(disp,pc),Rn */
	r0 += r10;  /* 0C06979E add Rm,Rn */
	r4 = 0xC1744ACu; UPD(0x0C0697A2u, 2);  /* 0C0697A0 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0697A2 add Rm,Rn */
	W32(r8, r2); UPD(0x0C0697A6u, 2);  /* 0C0697A4 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C0697A8u, 1);  /* 0C0697A6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0697A8u); r0 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C0697AAu, 1);  /* 0C0697A8 mov.w @(r0,Rm),Rn */
	r8 += 0x44u;  /* 0C0697AA add #imm,Rn */
	W16(r8, r0); UPD(0x0C0697AEu, 2);  /* 0C0697AC mov.w Rm,@Rn */
	r4 = r9;  /* 0C0697AE mov Rm,Rn */
	r0 += 0x4u;  /* 0C0697B0 add #imm,Rn */
	IF(0x0C0697B2u); r0 >>= 2;  /* 0C0697B2 shlr2 Rn */
	IF(0x0C0697B4u); T = r0 & 1; r0 >>= 1;  /* 0C0697B4 shlr Rn */
	r6 = 0xC068DE0u; UPD(0x0C0697B8u, 5);  /* 0C0697B6 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0697B8 add #imm,Rn */
	r0 &= 0x3Fu;  /* 0C0697BA and #imm,r0 */
	W32(r8 + 0x8u, r0); UPD(0x0C0697BEu, 3);  /* 0C0697BC mov.l Rm,@(disp,Rn) */
	IF(0x0C0697BEu); { u32 t_ = r6; PR = 0x0C0697C2u; W32(r8 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C0697C2u); }  /* 0C0697BE jsr @Rn */
L_0C0697C2: BLKS(0x0C0697C2u);
	r0 = R32(r12 + 0x10u); UPD(0x0C0697C4u, 1);  /* 0C0697C2 mov.l @(disp,Rm),Rn */
	r5 = 0x14u;  /* 0C0697C4 mov #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0697C8u, 2);  /* 0C0697C6 mov.l Rm,@(disp,Rn) */
	r2 = 0xC1744A4u; UPD(0x0C0697CAu, 1);  /* 0C0697C8 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C0697CA mov Rm,Rn */
	IF(0x0C0697CCu); r0 <<= 2;  /* 0C0697CC shll2 Rn */
	IF(0x0C0697CEu); r7 = R32(r0 + r2); UPD(0x0C0697D0u, 3);  /* 0C0697CE mov.l @(r0,Rm),Rn */
	r6 = R32(r12 + 0x14u); UPD(0x0C0697D2u, 1);  /* 0C0697D0 mov.l @(disp,Rm),Rn */
	r2 = r10;  /* 0C0697D2 mov Rm,Rn */
	r6 += r7;  /* 0C0697D4 add Rm,Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C0697D8u, 3);  /* 0C0697D6 mov.l Rm,@(disp,Rn) */
	r2 += 0x1u;  /* 0C0697D8 add #imm,Rn */
	r8 += 0x48u;  /* 0C0697DA add #imm,Rn */
	W8(r8, r11); UPD(0x0C0697DEu, 3);  /* 0C0697DC mov.b Rm,@Rn */
	r10 = (u32)(s32)(s16)r2;  /* 0C0697DE exts.w Rm,Rn */
	r8 += 0x1u;  /* 0C0697E0 add #imm,Rn */
	W8(r8, r13); UPD(0x0C0697E4u, 3);  /* 0C0697E2 mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C0697E4 mov #imm,Rn */
	r8 += 0x1u;  /* 0C0697E6 add #imm,Rn */
	W8(r8, r5); UPD(0x0C0697EAu, 3);  /* 0C0697E8 mov.b Rm,@Rn */
	T = (s32)r10 > (s32)r0;  /* 0C0697EA cmp/gt Rm,Rn */
	r3 = 0x280u; UPD(0x0C0697EEu, 2);  /* 0C0697EC mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB6u;  /* 0C0697EE add #imm,Rn */
	W32(r8 + 0x3Cu, r11); UPD(0x0C0697F2u, 2);  /* 0C0697F0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0697F2u); MACL = r9 * r3;  /* 0C0697F2 mul.l Rm,Rn */
	r4 = 0x808080u; UPD(0x0C0697F6u, 3);  /* 0C0697F4 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0697F6 add #imm,Rn */
	W32(r8, r4); UPD(0x0C0697FAu, 2);  /* 0C0697F8 mov.l Rm,@Rn */
	{ u32 c_ = !T; IF(0x0C0697FCu); r3 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C069780u, 3); goto L_0C069780; } goto L_0C0697FE; }  /* 0C0697FA bf/s */
L_0C0697FE: BLKS(0x0C0697FEu);
	r13 = R32(r14 + 0x4u); UPD(0x0C069800u, 2);  /* 0C0697FE mov.l @(disp,Rm),Rn */
	r13 += 0x1u;  /* 0C069800 add #imm,Rn */
	r12 = (u32)(s32)(s16)r13;  /* 0C069802 exts.w Rm,Rn */
	r10 = 0xC283794u; UPD(0x0C069806u, 3);  /* 0C069804 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r12); UPD(0x0C069808u, 1);  /* 0C069806 mov.l Rm,@(disp,Rn) */
	r10 += r3;  /* 0C069808 add Rm,Rn */
	r0 = 0x25Fu; UPD(0x0C06980Cu, 2);  /* 0C06980A mov.w @(disp,pc),Rn */
	IF(0x0C06980Cu); r11 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C06980Eu, 1);  /* 0C06980C mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C06980E tst Rm,Rn */
	{ u32 c_ = !T; r4 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C069740u, 4); goto L_0C069740; } goto L_0C069814; }  /* 0C069810 bf/s */
L_0C069814: BLKS(0x0C069814u);
	r7 = 0xC0AFBA0u; UPD(0x0C069816u, 2);  /* 0C069814 mov.l @(disp,pc),Rn */
	r5 = 0x53u;  /* 0C069816 mov #imm,Rn */
	r14 += 0xCu;  /* 0C069818 add #imm,Rn */
	r15 = r14;  /* 0C06981A mov Rm,Rn */
	IF(0x0C06981Cu); PR = R32(r15); r15 += 4; UPD(0x0C06981Eu, 4);  /* 0C06981C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069820u, 1);  /* 0C06981E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C069822u, 1);  /* 0C069820 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C069824u, 1);  /* 0C069822 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C069826u, 1);  /* 0C069824 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C069828u, 1);  /* 0C069826 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06982Au, 1);  /* 0C069828 mov.l @Rm+,Rn */
	IF(0x0C06982Au); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFBA0u: TAIL(f_0C0AFBA0); default: JUMPD(tv_); } }  /* 0C06982A jmp @Rn */
L_0C069830: BLKS(0x0C069830u);
	r15 = r14;  /* 0C069830 mov Rm,Rn */
	IF(0x0C069832u); PR = R32(r15); r15 += 4; UPD(0x0C069834u, 2);  /* 0C069832 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069836u, 1);  /* 0C069834 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C069838u, 1);  /* 0C069836 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06983Au, 1);  /* 0C069838 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06983Cu, 1);  /* 0C06983A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06983Eu, 1);  /* 0C06983C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C069840u, 1);  /* 0C06983E mov.l @Rm+,Rn */
	IF(0x0C069840u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C069840 rts */
}

/* FUN_0c069880 */
void f_0C069880(sh3_t *c)
{
	LOCALS;
L_0C069880: BLKS(0x0C069880u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C069882u, 1);  /* 0C069880 mov.l Rm,@-Rn */
	r5 = 0x8u;  /* 0C069882 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C069886u, 2);  /* 0C069884 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C069888u, 1);  /* 0C069886 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C069888 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06988Cu, 2);  /* 0C06988A mov.l Rm,@-Rn */
	r4 = r9;  /* 0C06988C mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C069890u, 2);  /* 0C06988E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C069892u, 1);  /* 0C069890 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069894u, 1);  /* 0C069892 mov.l Rm,@-Rn */
	r8 = 0xC068EE0u; UPD(0x0C069896u, 1);  /* 0C069894 mov.l @(disp,pc),Rn */
	IF(0x0C069896u); r15 -= 4; W32(r15, PR); UPD(0x0C069898u, 1);  /* 0C069896 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF0u;  /* 0C069898 add #imm,Rn */
	IF(0x0C06989Au); { u32 t_ = r8; PR = 0x0C06989Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C06989Eu); }  /* 0C06989A jsr @Rn */
L_0C06989E: BLKS(0x0C06989Eu);
	T = (r0 & r0) == 0;  /* 0C06989E tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0698A8u, 4); goto L_0C0698A8; } goto L_0C0698A4; }  /* 0C0698A0 bf/s */
L_0C0698A4: BLKS(0x0C0698A4u);
	{ r14 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0699A0u, 4); goto L_0C0699A0; }  /* 0C0698A4 bra */
L_0C0698A8: BLKS(0x0C0698A8u);
	r1 = 0xC2755BCu; UPD(0x0C0698AAu, 1);  /* 0C0698A8 mov.l @(disp,pc),Rn */
	W32(r14, r1); UPD(0x0C0698ACu, 1);  /* 0C0698AA mov.l Rm,@Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0698AEu, 1);  /* 0C0698AC mov.l Rm,@(disp,Rn) */
	IF(0x0C0698AEu); ;  /* 0C0698AE nop */
	UPD(0x0C0698B0u, 1);
L_0C0698B0: BLKS(0x0C0698B0u);
	r6 = 0x280u; UPD(0x0C0698B2u, 1);  /* 0C0698B0 mov.w @(disp,pc),Rn */
	r3 = 0xAu;  /* 0C0698B2 mov #imm,Rn */
	IF(0x0C0698B4u); MACL = r9 * r6;  /* 0C0698B4 mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C0698B8u, 4);  /* 0C0698B6 mov.l @(disp,pc),Rn */
	r2 = 0x25Fu; UPD(0x0C0698BAu, 1);  /* 0C0698B8 mov.w @(disp,pc),Rn */
	IF(0x0C0698BAu); r0 = MACL;  /* 0C0698BA sts macl,Rn */
	r0 += r5;  /* 0C0698BC add Rm,Rn */
	IF(0x0C0698BEu); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0698C0u, 3);  /* 0C0698BE mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0698C0 extu.b Rm,Rn */
	T = r2 > r3;  /* 0C0698C2 cmp/hi Rm,Rn */
	{ u32 c_ = T; r6 = 0xAu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0698CAu, 5); goto L_0C0698CA; } goto L_0C0698C8; }  /* 0C0698C4 bt/s */
L_0C0698C8: BLKS(0x0C0698C8u);
	r6 = r2;  /* 0C0698C8 mov Rm,Rn */
	UPD(0x0C0698CAu, 2);
L_0C0698CA: BLKS(0x0C0698CAu);
	r0 = 0x280u; UPD(0x0C0698CCu, 1);  /* 0C0698CA mov.w @(disp,pc),Rn */
	IF(0x0C0698CCu); MACL = r9 * r0;  /* 0C0698CC mul.l Rm,Rn */
	r11 = 0xC283794u; UPD(0x0C0698D0u, 3);  /* 0C0698CE mov.l @(disp,pc),Rn */
	IF(0x0C0698D0u); r7 = MACL;  /* 0C0698D0 sts macl,Rn */
	r13 = 0x25Fu; UPD(0x0C0698D4u, 2);  /* 0C0698D2 mov.w @(disp,pc),Rn */
	r11 += r7;  /* 0C0698D4 add Rm,Rn */
	r11 += r13;  /* 0C0698D6 add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r11); UPD(0x0C0698DAu, 3);  /* 0C0698D8 mov.b @Rm,Rn */
	r13 = r6;  /* 0C0698DA mov Rm,Rn */
	r12 -= r6;  /* 0C0698DC sub Rm,Rn */
	W8(r11, r12); UPD(0x0C0698E0u, 3);  /* 0C0698DE mov.b Rm,@Rn */
	r13 += 0xFFFFFFFFu;  /* 0C0698E0 add #imm,Rn */
	r10 = R32(r14 + 0x4u); UPD(0x0C0698E4u, 2);  /* 0C0698E2 mov.l @(disp,Rm),Rn */
	r11 = 0x0u;  /* 0C0698E4 mov #imm,Rn */
	r8 = R32(r14 + 0x4u); UPD(0x0C0698E8u, 2);  /* 0C0698E6 mov.l @(disp,Rm),Rn */
	IF(0x0C0698E8u); r10 <<= 2;  /* 0C0698E8 shll2 Rn */
	W32(r14 + 0xCu, r10); UPD(0x0C0698ECu, 2);  /* 0C0698EA mov.l Rm,@(disp,Rn) */
	r8 += r8;  /* 0C0698EC add Rm,Rn */
	r12 = 0xC283794u; UPD(0x0C0698F0u, 2);  /* 0C0698EE mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0698F0 mov #imm,Rn */
	W32(r14 + 0x8u, r8); UPD(0x0C0698F4u, 2);  /* 0C0698F2 mov.l Rm,@(disp,Rn) */
	r12 += r7;  /* 0C0698F4 add Rm,Rn */
	IF(0x0C0698F6u); ;  /* 0C0698F6 nop */
	UPD(0x0C0698F8u, 2);
L_0C0698F8: BLKS(0x0C0698F8u);
	r8 = 0x2800u; UPD(0x0C0698FAu, 1);  /* 0C0698F8 mov.w @(disp,pc),Rn */
	r1 = 0x50u;  /* 0C0698FA mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0698FEu, 2);  /* 0C0698FC mov.l @Rm,Rn */
	IF(0x0C0698FEu); MACL = r9 * r8;  /* 0C0698FE mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r5 = v_; } UPD(0x0C069902u, 3);  /* 0C069900 mov.w @Rm+,Rn */
	r2 = 0x5u;  /* 0C069902 mov #imm,Rn */
	IF(0x0C069904u); r8 = MACL;  /* 0C069904 sts macl,Rn */
	IF(0x0C069906u); MACL = r5 * r1;  /* 0C069906 mul.l Rm,Rn */
	r6 = 0xC217A04u; UPD(0x0C06990Au, 5);  /* 0C069908 mov.l @(disp,pc),Rn */
	IF(0x0C06990Au); r7 = MACL;  /* 0C06990A sts macl,Rn */
	r0 = 0xC068DE0u; UPD(0x0C06990Eu, 2);  /* 0C06990C mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C06990E add Rm,Rn */
	r3 = 0xCD000000u; UPD(0x0C069912u, 2);  /* 0C069910 mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C069912 add Rm,Rn */
	W32(r14, r4); UPD(0x0C069916u, 2);  /* 0C069914 mov.l Rm,@Rn */
	W32(r8, r3); UPD(0x0C069918u, 1);  /* 0C069916 mov.l Rm,@Rn */
	r4 = r9;  /* 0C069918 mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C06991Cu, 2);  /* 0C06991A mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r10); UPD(0x0C06991Eu, 1);  /* 0C06991C mov.l Rm,@(disp,Rn) */
	IF(0x0C06991Eu); { u32 t_ = r0; PR = 0x0C069922u; W32(r8 + 0x8u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C069922u); }  /* 0C06991E jsr @Rn */
L_0C069922: BLKS(0x0C069922u);
	r0 = R32(r14 + 0xCu); UPD(0x0C069924u, 1);  /* 0C069922 mov.l @(disp,Rm),Rn */
	r4 = 0xC1744BCu; UPD(0x0C069926u, 1);  /* 0C069924 mov.l @(disp,pc),Rn */
	IF(0x0C069926u); r7 = R32(r0 + r4); UPD(0x0C069928u, 1);  /* 0C069926 mov.l @(r0,Rm),Rn */
	r6 = R32(r12 + 0x10u); UPD(0x0C06992Au, 1);  /* 0C069928 mov.l @(disp,Rm),Rn */
	r0 = R32(r14 + 0x8u); UPD(0x0C06992Cu, 1);  /* 0C06992A mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C06992C add Rm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C069930u, 2);  /* 0C06992E mov.l Rm,@(disp,Rn) */
	r0 += r11;  /* 0C069930 add Rm,Rn */
	r5 = 0xC1744CCu; UPD(0x0C069934u, 2);  /* 0C069932 mov.l @(disp,pc),Rn */
	IF(0x0C069934u); r0 <<= 2;  /* 0C069934 shll2 Rn */
	IF(0x0C069936u); r2 = R32(r0 + r5); UPD(0x0C069938u, 2);  /* 0C069936 mov.l @(r0,Rm),Rn */
	r7 = 0x0u;  /* 0C069938 mov #imm,Rn */
	r4 = R32(r12 + 0x14u); UPD(0x0C06993Cu, 2);  /* 0C06993A mov.l @(disp,Rm),Rn */
	r6 = 0x14u;  /* 0C06993C mov #imm,Rn */
	r4 += r2;  /* 0C06993E add Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C069942u, 3);  /* 0C069940 mov.l Rm,@(disp,Rn) */
	r2 = r11;  /* 0C069942 mov Rm,Rn */
	r8 += 0x44u;  /* 0C069944 add #imm,Rn */
	W16(r8, r10); UPD(0x0C069948u, 3);  /* 0C069946 mov.w Rm,@Rn */
	r2 += 0x1u;  /* 0C069948 add #imm,Rn */
	r8 += 0x4u;  /* 0C06994A add #imm,Rn */
	W8(r8, r7); UPD(0x0C06994Eu, 3);  /* 0C06994C mov.b Rm,@Rn */
	r11 = (u32)(s32)(s16)r2;  /* 0C06994E exts.w Rm,Rn */
	r8 += 0x1u;  /* 0C069950 add #imm,Rn */
	W8(r8, r13); UPD(0x0C069954u, 3);  /* 0C069952 mov.b Rm,@Rn */
	r4 = 0x1u;  /* 0C069954 mov #imm,Rn */
	r8 += 0x1u;  /* 0C069956 add #imm,Rn */
	W8(r8, r6); UPD(0x0C06995Au, 3);  /* 0C069958 mov.b Rm,@Rn */
	T = (s32)r11 > (s32)r4;  /* 0C06995A cmp/gt Rm,Rn */
	r8 += 0xFFFFFFB6u;  /* 0C06995C add #imm,Rn */
	r3 = 0x280u; UPD(0x0C069960u, 3);  /* 0C06995E mov.w @(disp,pc),Rn */
	W32(r8 + 0x3Cu, r10); UPD(0x0C069962u, 1);  /* 0C069960 mov.l Rm,@(disp,Rn) */
	IF(0x0C069962u); MACL = r9 * r3;  /* 0C069962 mul.l Rm,Rn */
	r5 = 0x808080u; UPD(0x0C069966u, 3);  /* 0C069964 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C069966 add #imm,Rn */
	{ u32 c_ = !T; W32(r8, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0698F8u, 4); goto L_0C0698F8; } UPD(0x0C06996Cu, 1); goto L_0C06996C; }  /* 0C069968 bf/s */
L_0C06996C: BLKS(0x0C06996Cu);
	r5 = R32(r14 + 0x4u); UPD(0x0C06996Eu, 1);  /* 0C06996C mov.l @(disp,Rm),Rn */
	IF(0x0C06996Eu); r0 = MACL;  /* 0C06996E sts macl,Rn */
	r5 += 0x1u;  /* 0C069970 add #imm,Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C069972 exts.w Rm,Rn */
	r12 = 0xC283794u; UPD(0x0C069976u, 4);  /* 0C069974 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r13); UPD(0x0C069978u, 1);  /* 0C069976 mov.l Rm,@(disp,Rn) */
	r0 += r12;  /* 0C069978 add Rm,Rn */
	r11 = 0x25Fu; UPD(0x0C06997Cu, 2);  /* 0C06997A mov.w @(disp,pc),Rn */
	IF(0x0C06997Cu); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06997Eu, 1);  /* 0C06997C mov.b @(r0,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C06997E tst Rm,Rn */
	{ u32 c_ = !T; r4 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0698B0u, 4); goto L_0C0698B0; } goto L_0C069984; }  /* 0C069980 bf/s */
L_0C069984: BLKS(0x0C069984u);
	r0 = 0xC0AFBA0u; UPD(0x0C069986u, 2);  /* 0C069984 mov.l @(disp,pc),Rn */
	r5 = 0x53u;  /* 0C069986 mov #imm,Rn */
	r14 += 0x10u;  /* 0C069988 add #imm,Rn */
	r15 = r14;  /* 0C06998A mov Rm,Rn */
	IF(0x0C06998Cu); PR = R32(r15); r15 += 4; UPD(0x0C06998Eu, 4);  /* 0C06998C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069990u, 1);  /* 0C06998E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C069992u, 1);  /* 0C069990 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C069994u, 1);  /* 0C069992 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C069996u, 1);  /* 0C069994 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C069998u, 1);  /* 0C069996 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06999Au, 1);  /* 0C069998 mov.l @Rm+,Rn */
	IF(0x0C06999Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFBA0u: TAIL(f_0C0AFBA0); default: JUMPD(tv_); } }  /* 0C06999A jmp @Rn */
L_0C0699A0: BLKS(0x0C0699A0u);
	r15 = r14;  /* 0C0699A0 mov Rm,Rn */
	IF(0x0C0699A2u); PR = R32(r15); r15 += 4; UPD(0x0C0699A4u, 2);  /* 0C0699A2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0699A6u, 1);  /* 0C0699A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0699A8u, 1);  /* 0C0699A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0699AAu, 1);  /* 0C0699A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0699ACu, 1);  /* 0C0699AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0699AEu, 1);  /* 0C0699AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0699B0u, 1);  /* 0C0699AE mov.l @Rm+,Rn */
	IF(0x0C0699B0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0699B0 rts */
}

/* FUN_0c0699f0 */
void f_0C0699F0(sh3_t *c)
{
	LOCALS;
L_0C0699F0: BLKS(0x0C0699F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0699F2u, 1);  /* 0C0699F0 mov.l Rm,@-Rn */
	r5 = 0x2u;  /* 0C0699F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0699F6u, 2);  /* 0C0699F4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0699F8u, 1);  /* 0C0699F6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0699FAu, 1);  /* 0C0699F8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0699FCu, 1);  /* 0C0699FA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0699FC exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C069A00u, 2);  /* 0C0699FE mov.l Rm,@-Rn */
	r4 = r11;  /* 0C069A00 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069A04u, 2);  /* 0C069A02 mov.l Rm,@-Rn */
	r8 = 0xC068EE0u; UPD(0x0C069A06u, 1);  /* 0C069A04 mov.l @(disp,pc),Rn */
	IF(0x0C069A06u); r15 -= 4; W32(r15, PR); UPD(0x0C069A08u, 1);  /* 0C069A06 sts.l pr,@-Rn */
	IF(0x0C069A08u); { u32 t_ = r8; PR = 0x0C069A0Cu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C069A0Cu); }  /* 0C069A08 jsr @Rn */
L_0C069A0C: BLKS(0x0C069A0Cu);
	T = (r0 & r0) == 0;  /* 0C069A0C tst Rm,Rn */
	if (T) { UPD(0x0C069AC0u, 4); goto L_0C069AC0; }  /* 0C069A0E bt */
L_0C069A10: BLKS(0x0C069A10u);
	r12 = 0x0u;  /* 0C069A10 mov #imm,Rn */
	r2 = 0x280u; UPD(0x0C069A14u, 2);  /* 0C069A12 mov.w @(disp,pc),Rn */
	IF(0x0C069A14u); MACL = r11 * r2;  /* 0C069A14 mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C069A18u, 3);  /* 0C069A16 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C069A18 mov #imm,Rn */
	r13 = 0xC2755BCu; UPD(0x0C069A1Cu, 2);  /* 0C069A1A mov.l @(disp,pc),Rn */
	IF(0x0C069A1Cu); r9 = MACL;  /* 0C069A1C sts macl,Rn */
	r9 += r0;  /* 0C069A1E add Rm,Rn */
	UPD(0x0C069A20u, 2);
L_0C069A20: BLKS(0x0C069A20u);
	r8 = 0x2800u; UPD(0x0C069A22u, 1);  /* 0C069A20 mov.w @(disp,pc),Rn */
	r0 = 0x50u;  /* 0C069A22 mov #imm,Rn */
	IF(0x0C069A24u); MACL = r11 * r8;  /* 0C069A24 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r5 = v_; } UPD(0x0C069A28u, 4);  /* 0C069A26 mov.w @Rm+,Rn */
	r4 = 0x6u;  /* 0C069A28 mov #imm,Rn */
	IF(0x0C069A2Au); r8 = MACL;  /* 0C069A2A sts macl,Rn */
	IF(0x0C069A2Cu); MACL = r5 * r0;  /* 0C069A2C mul.l Rm,Rn */
	r3 = 0xC217A04u; UPD(0x0C069A30u, 5);  /* 0C069A2E mov.l @(disp,pc),Rn */
	IF(0x0C069A30u); r7 = MACL;  /* 0C069A30 sts macl,Rn */
	r8 += r7;  /* 0C069A32 add Rm,Rn */
	r6 = 0xCD000000u; UPD(0x0C069A36u, 3);  /* 0C069A34 mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C069A36 add Rm,Rn */
	W32(r8, r6); UPD(0x0C069A3Au, 2);  /* 0C069A38 mov.l Rm,@Rn */
	r8 += 0x44u;  /* 0C069A3A add #imm,Rn */
	W16(r8, r10); UPD(0x0C069A3Eu, 2);  /* 0C069A3C mov.w Rm,@Rn */
	r2 = 0xC068DE0u; UPD(0x0C069A40u, 1);  /* 0C069A3E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C069A40 add #imm,Rn */
	W32(r8 + 0x4u, r4); UPD(0x0C069A44u, 2);  /* 0C069A42 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r10); UPD(0x0C069A46u, 1);  /* 0C069A44 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C069A46 mov Rm,Rn */
	IF(0x0C069A48u); { u32 t_ = r2; PR = 0x0C069A4Cu; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C069A4Cu); }  /* 0C069A48 jsr @Rn */
L_0C069A4C: BLKS(0x0C069A4Cu);
	W32(r8 + 0x3Cu, r10); UPD(0x0C069A4Eu, 1);  /* 0C069A4C mov.l Rm,@(disp,Rn) */
	r2 = 0x0u;  /* 0C069A4E mov #imm,Rn */
	r0 = 0x808080u; UPD(0x0C069A52u, 2);  /* 0C069A50 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C069A52 add #imm,Rn */
	W32(r8, r0); UPD(0x0C069A56u, 2);  /* 0C069A54 mov.l Rm,@Rn */
	r7 = R32(r9 + 0x10u); UPD(0x0C069A58u, 1);  /* 0C069A56 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFC0u;  /* 0C069A58 add #imm,Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C069A5Cu, 2);  /* 0C069A5A mov.l Rm,@(disp,Rn) */
	r0 = r12;  /* 0C069A5C mov Rm,Rn */
	r6 = 0xC1744ECu; UPD(0x0C069A60u, 2);  /* 0C069A5E mov.l @(disp,pc),Rn */
	IF(0x0C069A60u); r0 <<= 2;  /* 0C069A60 shll2 Rn */
	IF(0x0C069A62u); r5 = R32(r0 + r6); UPD(0x0C069A64u, 2);  /* 0C069A62 mov.l @(r0,Rm),Rn */
	r4 = R32(r9 + 0x14u); UPD(0x0C069A66u, 1);  /* 0C069A64 mov.l @(disp,Rm),Rn */
	r0 = r9;  /* 0C069A66 mov Rm,Rn */
	r4 += r5;  /* 0C069A68 add Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C069A6Cu, 3);  /* 0C069A6A mov.l Rm,@(disp,Rn) */
	r5 = r12;  /* 0C069A6C mov Rm,Rn */
	W32(r8 + 0x30u, r10); UPD(0x0C069A70u, 2);  /* 0C069A6E mov.l Rm,@(disp,Rn) */
	r6 = 0x14u;  /* 0C069A70 mov #imm,Rn */
	W32(r8 + 0x2Cu, r10); UPD(0x0C069A74u, 2);  /* 0C069A72 mov.l Rm,@(disp,Rn) */
	r5 += 0x1u;  /* 0C069A74 add #imm,Rn */
	r8 += 0x48u;  /* 0C069A76 add #imm,Rn */
	W8(r8, r2); UPD(0x0C069A7Au, 3);  /* 0C069A78 mov.b Rm,@Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C069A7A exts.w Rm,Rn */
	r2 = 0x25Cu; UPD(0x0C069A7Eu, 2);  /* 0C069A7C mov.w @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C069A7E add #imm,Rn */
	r0 += r2;  /* 0C069A80 add Rm,Rn */
	r0 += 0x3u;  /* 0C069A82 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r0); UPD(0x0C069A86u, 4);  /* 0C069A84 mov.b @Rm,Rn */
	r4 = 0x1u;  /* 0C069A86 mov #imm,Rn */
	r3 = 0x280u; UPD(0x0C069A8Au, 2);  /* 0C069A88 mov.w @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C069A8A add #imm,Rn */
	W8(r8, r7); UPD(0x0C069A8Eu, 2);  /* 0C069A8C mov.b Rm,@Rn */
	IF(0x0C069A8Eu); MACL = r11 * r3;  /* 0C069A8E mul.l Rm,Rn */
	r8 += 0x1u;  /* 0C069A90 add #imm,Rn */
	W8(r8, r6); UPD(0x0C069A94u, 4);  /* 0C069A92 mov.b Rm,@Rn */
	T = (s32)r12 > (s32)r4;  /* 0C069A94 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C069A98u); r3 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C069A20u, 4); goto L_0C069A20; } goto L_0C069A9A; }  /* 0C069A96 bf/s */
L_0C069A9A: BLKS(0x0C069A9Au);
	r9 = 0xC283794u; UPD(0x0C069A9Cu, 2);  /* 0C069A9A mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C069A9C mov #imm,Rn */
	r9 += r3;  /* 0C069A9E add Rm,Rn */
	r9 += r2;  /* 0C069AA0 add Rm,Rn */
	r9 += 0x3u;  /* 0C069AA2 add #imm,Rn */
	W8(r9, r1); UPD(0x0C069AA6u, 5);  /* 0C069AA4 mov.b Rm,@Rn */
	r4 = r11;  /* 0C069AA6 mov Rm,Rn */
	r2 = 0xC0AFBA0u; UPD(0x0C069AAAu, 2);  /* 0C069AA8 mov.l @(disp,pc),Rn */
	r5 = 0x53u;  /* 0C069AAA mov #imm,Rn */
	r15 = r14;  /* 0C069AAC mov Rm,Rn */
	IF(0x0C069AAEu); PR = R32(r15); r15 += 4; UPD(0x0C069AB0u, 3);  /* 0C069AAE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069AB2u, 1);  /* 0C069AB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C069AB4u, 1);  /* 0C069AB2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C069AB6u, 1);  /* 0C069AB4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C069AB8u, 1);  /* 0C069AB6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C069ABAu, 1);  /* 0C069AB8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C069ABCu, 1);  /* 0C069ABA mov.l @Rm+,Rn */
	IF(0x0C069ABCu); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFBA0u: TAIL(f_0C0AFBA0); default: JUMPD(tv_); } }  /* 0C069ABC jmp @Rn */
L_0C069AC0: BLKS(0x0C069AC0u);
	r15 = r14;  /* 0C069AC0 mov Rm,Rn */
	IF(0x0C069AC2u); PR = R32(r15); r15 += 4; UPD(0x0C069AC4u, 2);  /* 0C069AC2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069AC6u, 1);  /* 0C069AC4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C069AC8u, 1);  /* 0C069AC6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C069ACAu, 1);  /* 0C069AC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C069ACCu, 1);  /* 0C069ACA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C069ACEu, 1);  /* 0C069ACC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C069AD0u, 1);  /* 0C069ACE mov.l @Rm+,Rn */
	IF(0x0C069AD0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C069AD0 rts */
}

void f_0C069C50(sh3_t *c)
{
	LOCALS;
L_0C069C50: BLKS(0x0C069C50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C069C52u, 1);  /* 0C069C50 mov.l Rm,@-Rn */
	r3 = 0x50u;  /* 0C069C52 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C069C56u, 2);  /* 0C069C54 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C069C58u, 1);  /* 0C069C56 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C069C5Au, 1);  /* 0C069C58 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C069C5A exts.w Rm,Rn */
	r4 = 0x2800u; UPD(0x0C069C5Eu, 2);  /* 0C069C5C mov.w @(disp,pc),Rn */
	IF(0x0C069C5Eu); MACL = r11 * r4;  /* 0C069C5E mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C069C62u, 3);  /* 0C069C60 mov.l Rm,@-Rn */
	IF(0x0C069C62u); r9 = MACL;  /* 0C069C62 sts macl,Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C069C64 exts.w Rm,Rn */
	IF(0x0C069C66u); MACL = r12 * r3;  /* 0C069C66 mul.l Rm,Rn */
	r0 = 0xC217A04u; UPD(0x0C069C6Au, 5);  /* 0C069C68 mov.l @(disp,pc),Rn */
	IF(0x0C069C6Au); r2 = MACL;  /* 0C069C6A sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069C6Eu, 2);  /* 0C069C6C mov.l Rm,@-Rn */
	r9 += r2;  /* 0C069C6E add Rm,Rn */
	r9 += r0;  /* 0C069C70 add Rm,Rn */
	IF(0x0C069C72u); r15 -= 4; W32(r15, PR); UPD(0x0C069C74u, 3);  /* 0C069C72 sts.l pr,@-Rn */
	r8 = r9;  /* 0C069C74 mov Rm,Rn */
	r8 += 0x46u;  /* 0C069C76 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C069C7Au, 3);  /* 0C069C78 mov.w @Rm,Rn */
	r14 = r15;  /* 0C069C7A mov Rm,Rn */
	r4 = r0 & 0xFFFF;  /* 0C069C7C extu.w Rm,Rn */
	r0 = 0xC065950u; UPD(0x0C069C80u, 3);  /* 0C069C7E mov.l @(disp,pc),Rn */
	r10 = r9;  /* 0C069C80 mov Rm,Rn */
	IF(0x0C069C82u); { u32 t_ = r0; PR = 0x0C069C86u; r10 += 0x44u; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C065950, 0x0C065950u, 0x0C069C86u); }  /* 0C069C82 jsr @Rn */
L_0C069C86: BLKS(0x0C069C86u);
	W16(r8, r0); UPD(0x0C069C88u, 1);  /* 0C069C86 mov.w Rm,@Rn */
	r1 = 0xBFu; UPD(0x0C069C8Au, 1);  /* 0C069C88 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r0;  /* 0C069C8A exts.w Rm,Rn */
	T = (s32)r0 > (s32)r1;  /* 0C069C8C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 += 0xFFFFFFF5u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C069D60u, 5); goto L_0C069D60; } UPD(0x0C069C92u, 1); goto L_0C069C92; }  /* 0C069C8E bf/s */
L_0C069C92: BLKS(0x0C069C92u);
	r9 = 0x2800u; UPD(0x0C069C94u, 1);  /* 0C069C92 mov.w @(disp,pc),Rn */
	r0 = 0x50u;  /* 0C069C94 mov #imm,Rn */
	IF(0x0C069C96u); MACL = r11 * r9;  /* 0C069C96 mul.l Rm,Rn */
	r7 = 0xC217A04u; UPD(0x0C069C9Au, 4);  /* 0C069C98 mov.l @(disp,pc),Rn */
	IF(0x0C069C9Au); r9 = MACL;  /* 0C069C9A sts macl,Rn */
	IF(0x0C069C9Cu); MACL = r12 * r0;  /* 0C069C9C mul.l Rm,Rn */
	IF(0x0C069C9Eu); r8 = MACL;  /* 0C069C9E sts macl,Rn */
	r9 += r8;  /* 0C069CA0 add Rm,Rn */
	r9 += r7;  /* 0C069CA2 add Rm,Rn */
	r10 = r9;  /* 0C069CA4 mov Rm,Rn */
	r10 += 0x44u;  /* 0C069CA6 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C069CAAu, 9);  /* 0C069CA8 mov.w @Rm,Rn */
	r6 = r9;  /* 0C069CAA mov Rm,Rn */
	r0 = r1 & 0xFFFF;  /* 0C069CAC extu.w Rm,Rn */
	r0 += 0x4u;  /* 0C069CAE add #imm,Rn */
	IF(0x0C069CB0u); r0 >>= 2;  /* 0C069CB0 shlr2 Rn */
	IF(0x0C069CB2u); T = r0 & 1; r0 >>= 1;  /* 0C069CB2 shlr Rn */
	r0 &= 0x3Fu;  /* 0C069CB4 and #imm,r0 */
	W32(r9 + 0x8u, r0); UPD(0x0C069CB8u, 7);  /* 0C069CB6 mov.l Rm,@(disp,Rn) */
	r6 += 0x48u;  /* 0C069CB8 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C069CBCu, 2);  /* 0C069CBA mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C069CBC add #imm,Rn */
	W8(r6, r0); UPD(0x0C069CC0u, 2);  /* 0C069CBE mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C069CC0 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C069CC2 tst Rm,Rn */
	if (T) { UPD(0x0C069CCEu, 5); goto L_0C069CCE; }  /* 0C069CC4 bt */
L_0C069CC6: BLKS(0x0C069CC6u);
	r0 = R32(r9 + 0xCu); UPD(0x0C069CC8u, 1);  /* 0C069CC6 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C069CC8 add #imm,Rn */
	r0 &= 0x3u;  /* 0C069CCA and #imm,r0 */
	W32(r9 + 0xCu, r0); UPD(0x0C069CCEu, 3);  /* 0C069CCC mov.l Rm,@(disp,Rn) */
L_0C069CCE: BLKS(0x0C069CCEu);
	r6 = 0xC068E90u; UPD(0x0C069CD0u, 1);  /* 0C069CCE mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C069CD0 mov Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C069CD4u, 2);  /* 0C069CD2 mov.l @(disp,pc),Rn */
	IF(0x0C069CD4u); { u32 t_ = r6; PR = 0x0C069CD8u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C068E90, 0x0C068E90u, 0x0C069CD8u); }  /* 0C069CD4 jsr @Rn */
L_0C069CD8: BLKS(0x0C069CD8u);
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C069CDAu, 1);  /* 0C069CD8 mov.w @Rm,Rn */
	r11 = R32(r9 + 0x34u); UPD(0x0C069CDCu, 1);  /* 0C069CDA mov.l @(disp,Rm),Rn */
	r4 = r3 & 0xFFFF;  /* 0C069CDC extu.w Rm,Rn */
	IF(0x0C069CDEu); { u32 t_ = r8; PR = 0x0C069CE2u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C069CE2u); }  /* 0C069CDE jsr @Rn */
L_0C069CE2: BLKS(0x0C069CE2u);
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C069CE4u, 1);  /* 0C069CE2 mov.w @Rm,Rn */
	r5 = r11;  /* 0C069CE4 mov Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C069CE8u, 2);  /* 0C069CE6 mov.l @(disp,pc),Rn */
	r4 = r2 & 0xFFFF;  /* 0C069CE8 extu.w Rm,Rn */
	IF(0x0C069CEAu); { u32 t_ = r10; PR = 0x0C069CEEu; W32(r9 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C069CEEu); }  /* 0C069CEA jsr @Rn */
L_0C069CEE: BLKS(0x0C069CEEu);
	r11 = R32(r9 + 0x24u); UPD(0x0C069CF0u, 1);  /* 0C069CEE mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C069CF2u, 1);  /* 0C069CF0 mov.l @(disp,Rm),Rn */
	r12 = R32(r9 + 0x2Cu); UPD(0x0C069CF4u, 1);  /* 0C069CF2 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C069CF4 add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C069CF8u, 2);  /* 0C069CF6 mov.l @(disp,pc),Rn */
	r11 += r12;  /* 0C069CF8 add Rm,Rn */
	r3 += r11;  /* 0C069CFA add Rm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C069CFEu, 3);  /* 0C069CFC mov.l Rm,@(disp,Rn) */
	IF(0x0C069CFEu); T = (s32)r3 >= 0;  /* 0C069CFE cmp/pz Rn */
	W32(r9 + 0x24u, r11); UPD(0x0C069D02u, 2);  /* 0C069D00 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r9 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C069D50u, 3); goto L_0C069D50; } UPD(0x0C069D06u, 1); goto L_0C069D06; }  /* 0C069D02 bf/s */
L_0C069D06: BLKS(0x0C069D06u);
	r4 = 0xB00000u; UPD(0x0C069D08u, 1);  /* 0C069D06 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r4;  /* 0C069D08 cmp/gt Rm,Rn */
	{ u32 c_ = T; r10 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069D26u, 4); goto L_0C069D26; } goto L_0C069D0E; }  /* 0C069D0A bt/s */
L_0C069D0E: BLKS(0x0C069D0Eu);
	r12 = 0xC3929E0u; UPD(0x0C069D10u, 2);  /* 0C069D0E mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C069D10 mov Rm,Rn */
	r0 = R32(r12); UPD(0x0C069D14u, 2);  /* 0C069D12 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C069D16u, 1);  /* 0C069D14 mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C069D16 sub Rm,Rn */
	r2 += r5;  /* 0C069D18 add Rm,Rn */
	IF(0x0C069D1Au); T = (s32)r2 >= 0;  /* 0C069D1A cmp/pz Rn */
	if (!T) { UPD(0x0C069D40u, 6); goto L_0C069D40; }  /* 0C069D1C bf */
L_0C069D1E: BLKS(0x0C069D1Eu);
	r7 = 0x880000u; UPD(0x0C069D20u, 1);  /* 0C069D1E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C069D20 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C069D28u, 4); goto L_0C069D28; }  /* 0C069D22 bf */
L_0C069D24: BLKS(0x0C069D24u);
	r10 = 0x0u;  /* 0C069D24 mov #imm,Rn */
	UPD(0x0C069D26u, 1);
L_0C069D26: BLKS(0x0C069D26u);
	W32(r9, r10); UPD(0x0C069D28u, 1);  /* 0C069D26 mov.l Rm,@Rn */
L_0C069D28: BLKS(0x0C069D28u);
	r15 = r14;  /* 0C069D28 mov Rm,Rn */
	IF(0x0C069D2Au); PR = R32(r15); r15 += 4; UPD(0x0C069D2Cu, 2);  /* 0C069D2A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069D2Eu, 1);  /* 0C069D2C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C069D30u, 1);  /* 0C069D2E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C069D32u, 1);  /* 0C069D30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C069D34u, 1);  /* 0C069D32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C069D36u, 1);  /* 0C069D34 mov.l @Rm+,Rn */
	IF(0x0C069D36u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C069D36 rts */
L_0C069D40: BLKS(0x0C069D40u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C069D1Eu, 3); goto L_0C069D1E; }  /* 0C069D40 bra */
L_0C069D50: BLKS(0x0C069D50u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C069D06u, 3); goto L_0C069D06; }  /* 0C069D50 bra */
L_0C069D60: BLKS(0x0C069D60u);
	IF(0x0C069D60u); MACL = r0 * r1;  /* 0C069D60 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C069D64u, 3);  /* 0C069D62 mov.l @(disp,pc),Rn */
	r8 = 0xC057390u; UPD(0x0C069D66u, 1);  /* 0C069D64 mov.l @(disp,pc),Rn */
	IF(0x0C069D66u); r0 = MACL;  /* 0C069D66 sts macl,Rn */
	r0 += r2;  /* 0C069D68 add Rm,Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C069D6Cu, 3);  /* 0C069D6A mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x24u); UPD(0x0C069D6Eu, 1);  /* 0C069D6C mov.l @(disp,Rm),Rn */
	r7 = R32(r0 + 0x28u); UPD(0x0C069D70u, 1);  /* 0C069D6E mov.l @(disp,Rm),Rn */
	IF(0x0C069D70u); { u32 t_ = r8; PR = 0x0C069D74u; r4 = R32(r9 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C069D74u); }  /* 0C069D70 jsr @Rn */
L_0C069D74: BLKS(0x0C069D74u);
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C069D76u, 1);  /* 0C069D74 mov.w @Rm,Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C069D76 exts.w Rm,Rn */
	r8 = 0x1FFu; UPD(0x0C069D7Au, 2);  /* 0C069D78 mov.w @(disp,pc),Rn */
	r6 -= r3;  /* 0C069D7A sub Rm,Rn */
	r7 = 0xFFFFFF00u; UPD(0x0C069D7Eu, 2);  /* 0C069D7C mov.w @(disp,pc),Rn */
	r6 &= r8;  /* 0C069D7E and Rm,Rn */
	r6 += r7;  /* 0C069D80 add Rm,Rn */
	r0 = (u32)(s32)(s16)r6;  /* 0C069D82 exts.w Rm,Rn */
	r0 += 0x2u;  /* 0C069D84 add #imm,Rn */
	r1 = r0 & 0xFFFF;  /* 0C069D86 extu.w Rm,Rn */
	r5 = 0x4u;  /* 0C069D88 mov #imm,Rn */
	T = r1 > r5;  /* 0C069D8A cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C069DA0u, 10); goto L_0C069DA0; } goto L_0C069D90; }  /* 0C069D8C bt/s */
L_0C069D90: BLKS(0x0C069D90u);
	r10 = R32(r9 + 0x34u); UPD(0x0C069D92u, 2);  /* 0C069D90 mov.l @(disp,Rm),Rn */
	r3 = 0x2000u; UPD(0x0C069D94u, 1);  /* 0C069D92 mov.w @(disp,pc),Rn */
	r10 += r3;  /* 0C069D94 add Rm,Rn */
	W32(r9 + 0x34u, r10); UPD(0x0C069D98u, 2);  /* 0C069D96 mov.l Rm,@(disp,Rn) */
L_0C069D98: BLKS(0x0C069D98u);
	{ IF(0x0C069D9Au); ; /* slot nop */ UPD(0x0C069C92u, 3); goto L_0C069C92; }  /* 0C069D98 bra */
L_0C069DA0: BLKS(0x0C069DA0u);
	IF(0x0C069DA0u); T = (s32)r0 >= 0;  /* 0C069DA0 cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C069DA4u); T = (s32)r0 > 0; /* slot cmp/pl Rn */ if (c_) { UPD(0x0C069DC0u, 4); goto L_0C069DC0; } goto L_0C069DA6; }  /* 0C069DA2 bf/s */
L_0C069DA6: BLKS(0x0C069DA6u);
	{ u32 c_ = !T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C069D98u, 4); goto L_0C069D98; } goto L_0C069DAA; }  /* 0C069DA6 bf/s */
L_0C069DAA: BLKS(0x0C069DAAu);
	r1 += 0xFFFFFFFEu;  /* 0C069DAA add #imm,Rn */
	UPD(0x0C069DACu, 2);
L_0C069DAC: BLKS(0x0C069DACu);
	r2 = R32(r9 + 0x34u); UPD(0x0C069DAEu, 1);  /* 0C069DAC mov.l @(disp,Rm),Rn */
	r4 = 0x10000u; UPD(0x0C069DB0u, 1);  /* 0C069DAE mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C069DB0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W16(r10, r1); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C069D98u, 4); goto L_0C069D98; } UPD(0x0C069DB6u, 1); goto L_0C069DB6; }  /* 0C069DB2 bf/s */
L_0C069DB6: BLKS(0x0C069DB6u);
	r5 = 0xFFFFF000u; UPD(0x0C069DB8u, 1);  /* 0C069DB6 mov.w @(disp,pc),Rn */
	r2 += r5;  /* 0C069DB8 add Rm,Rn */
	{ W32(r9 + 0x34u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C069C92u, 4); goto L_0C069C92; }  /* 0C069DBA bra */
L_0C069DC0: BLKS(0x0C069DC0u);
	r1 = r3;  /* 0C069DC0 mov Rm,Rn */
	{ r1 += 0x2u; /* slot add #imm,Rn */ UPD(0x0C069DACu, 4); goto L_0C069DAC; }  /* 0C069DC2 bra */
}

void f_0C069E10(sh3_t *c)
{
	LOCALS;
L_0C069E10: BLKS(0x0C069E10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C069E12u, 1);  /* 0C069E10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C069E14u, 1);  /* 0C069E12 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C069E16u, 1);  /* 0C069E14 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C069E18u, 1);  /* 0C069E16 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C069E1Au, 1);  /* 0C069E18 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C069E1A exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C069E1Eu, 2);  /* 0C069E1C mov.l Rm,@-Rn */
	r4 = 0x50u;  /* 0C069E1E mov #imm,Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C069E20 exts.w Rm,Rn */
	r5 = 0x2800u; UPD(0x0C069E24u, 3);  /* 0C069E22 mov.w @(disp,pc),Rn */
	IF(0x0C069E24u); MACL = r11 * r5;  /* 0C069E24 mul.l Rm,Rn */
	r3 = 0xC217A04u; UPD(0x0C069E28u, 3);  /* 0C069E26 mov.l @(disp,pc),Rn */
	IF(0x0C069E28u); r12 = MACL;  /* 0C069E28 sts macl,Rn */
	IF(0x0C069E2Au); MACL = r13 * r4;  /* 0C069E2A mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069E2Eu, 4);  /* 0C069E2C mov.l Rm,@-Rn */
	IF(0x0C069E2Eu); r10 = MACL;  /* 0C069E2E sts macl,Rn */
	r10 += r12;  /* 0C069E30 add Rm,Rn */
	r10 += r3;  /* 0C069E32 add Rm,Rn */
	IF(0x0C069E34u); r15 -= 4; W32(r15, PR); UPD(0x0C069E36u, 4);  /* 0C069E34 sts.l pr,@-Rn */
	r8 = r10;  /* 0C069E36 mov Rm,Rn */
	r8 += 0x44u;  /* 0C069E38 add #imm,Rn */
	r0 = 0xC058060u; UPD(0x0C069E3Cu, 3);  /* 0C069E3A mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C069E3C mov Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r8); UPD(0x0C069E40u, 2);  /* 0C069E3E mov.w @Rm,Rn */
	r9 = 0x60000u; UPD(0x0C069E42u, 1);  /* 0C069E40 mov.l @(disp,pc),Rn */
	r4 = r1 & 0xFFFF;  /* 0C069E42 extu.w Rm,Rn */
	IF(0x0C069E44u); { u32 t_ = r0; PR = 0x0C069E48u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C069E48u); }  /* 0C069E44 jsr @Rn */
L_0C069E48: BLKS(0x0C069E48u);
	W32(r10 + 0x2Cu, r0); UPD(0x0C069E4Au, 1);  /* 0C069E48 mov.l Rm,@(disp,Rn) */
	r5 = r9;  /* 0C069E4A mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C069E4Eu, 2);  /* 0C069E4C mov.w @Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C069E50u, 1);  /* 0C069E4E mov.l @(disp,pc),Rn */
	IF(0x0C069E50u); { u32 t_ = r8; PR = 0x0C069E54u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C069E54u); }  /* 0C069E50 jsr @Rn */
L_0C069E54: BLKS(0x0C069E54u);
	r4 = R32(r10 + 0x24u); UPD(0x0C069E56u, 1);  /* 0C069E54 mov.l @(disp,Rm),Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C069E58u, 1);  /* 0C069E56 mov.l @(disp,Rm),Rn */
	r2 = R32(r10 + 0x2Cu); UPD(0x0C069E5Au, 1);  /* 0C069E58 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C069E5A add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C069E5Eu, 2);  /* 0C069E5C mov.l @(disp,pc),Rn */
	r4 += r2;  /* 0C069E5E add Rm,Rn */
	r3 += r4;  /* 0C069E60 add Rm,Rn */
	W32(r10 + 0x30u, r0); UPD(0x0C069E64u, 3);  /* 0C069E62 mov.l Rm,@(disp,Rn) */
	IF(0x0C069E64u); T = (s32)r3 >= 0;  /* 0C069E64 cmp/pz Rn */
	W32(r10 + 0x24u, r4); UPD(0x0C069E68u, 2);  /* 0C069E66 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r10 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C069E70u, 3); goto L_0C069E70; } UPD(0x0C069E6Cu, 1); goto L_0C069E6C; }  /* 0C069E68 bt/s */
L_0C069E6C: BLKS(0x0C069E6Cu);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C069FD0u, 3); goto L_0C069FD0; }  /* 0C069E6C bra */
L_0C069E70: BLKS(0x0C069E70u);
	r6 = 0xB00000u; UPD(0x0C069E72u, 1);  /* 0C069E70 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r6;  /* 0C069E72 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C069E8Eu, 4); goto L_0C069E8E; }  /* 0C069E74 bt */
L_0C069E76: BLKS(0x0C069E76u);
	r2 = 0xC3929E0u; UPD(0x0C069E78u, 1);  /* 0C069E76 mov.l @(disp,pc),Rn */
	r9 = R32(r2); UPD(0x0C069E7Au, 1);  /* 0C069E78 mov.l @Rm,Rn */
	r2 = r7;  /* 0C069E7A mov Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C069E7Eu, 2);  /* 0C069E7C mov.l @(disp,pc),Rn */
	r2 -= r9;  /* 0C069E7E sub Rm,Rn */
	r2 += r7;  /* 0C069E80 add Rm,Rn */
	IF(0x0C069E82u); T = (s32)r2 >= 0;  /* 0C069E82 cmp/pz Rn */
	if (T) { UPD(0x0C069E88u, 6); goto L_0C069E88; }  /* 0C069E84 bt */
L_0C069E86: BLKS(0x0C069E86u);
	r2 = 0u - r2;  /* 0C069E86 neg Rm,Rn */
	UPD(0x0C069E88u, 1);
L_0C069E88: BLKS(0x0C069E88u);
	r8 = 0x880000u; UPD(0x0C069E8Au, 1);  /* 0C069E88 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C069E8A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C069EB0u, 4); goto L_0C069EB0; }  /* 0C069E8C bf */
L_0C069E8E: BLKS(0x0C069E8Eu);
	r11 = 0x0u;  /* 0C069E8E mov #imm,Rn */
	W32(r10, r11); UPD(0x0C069E92u, 2);  /* 0C069E90 mov.l Rm,@Rn */
L_0C069E92: BLKS(0x0C069E92u);
	r15 = r14;  /* 0C069E92 mov Rm,Rn */
	IF(0x0C069E94u); PR = R32(r15); r15 += 4; UPD(0x0C069E96u, 2);  /* 0C069E94 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069E98u, 1);  /* 0C069E96 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C069E9Au, 1);  /* 0C069E98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C069E9Cu, 1);  /* 0C069E9A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C069E9Eu, 1);  /* 0C069E9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C069EA0u, 1);  /* 0C069E9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C069EA2u, 1);  /* 0C069EA0 mov.l @Rm+,Rn */
	IF(0x0C069EA2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C069EA2 rts */
L_0C069EB0: BLKS(0x0C069EB0u);
	r2 = r10;  /* 0C069EB0 mov Rm,Rn */
	r2 += 0x49u;  /* 0C069EB2 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C069EB6u, 3);  /* 0C069EB4 mov.b @Rm,Rn */
	r9 = r1 & 0xFF;  /* 0C069EB6 extu.b Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C069EB8 tst Rm,Rn */
	if (!T) { UPD(0x0C069F40u, 5); goto L_0C069F40; }  /* 0C069EBA bf */
L_0C069EBC: BLKS(0x0C069EBCu);
	r0 = R32(r10 + 0xCu); UPD(0x0C069EBEu, 1);  /* 0C069EBC mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C069EBE add #imm,Rn */
	T = r0 == 0x8u;  /* 0C069EC0 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r10 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C069E92u, 5); goto L_0C069E92; } UPD(0x0C069EC6u, 1); goto L_0C069EC6; }  /* 0C069EC2 bf/s */
L_0C069EC6: BLKS(0x0C069EC6u);
	r13 = 0xC068EE0u; UPD(0x0C069EC8u, 1);  /* 0C069EC6 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C069EC8 mov Rm,Rn */
	IF(0x0C069ECAu); { u32 t_ = r13; PR = 0x0C069ECEu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C069ECEu); }  /* 0C069ECA jsr @Rn */
L_0C069ECE: BLKS(0x0C069ECEu);
	T = (r0 & r0) == 0;  /* 0C069ECE tst Rm,Rn */
	if (!T) { UPD(0x0C069EE0u, 4); goto L_0C069EE0; }  /* 0C069ED0 bf */
L_0C069ED2: BLKS(0x0C069ED2u);
	W32(r10, r9); UPD(0x0C069ED4u, 1);  /* 0C069ED2 mov.l Rm,@Rn */
	{ IF(0x0C069ED6u); ; /* slot nop */ UPD(0x0C069E92u, 3); goto L_0C069E92; }  /* 0C069ED4 bra */
L_0C069EE0: BLKS(0x0C069EE0u);
	r13 = 0xC2755BCu; UPD(0x0C069EE2u, 1);  /* 0C069EE0 mov.l @(disp,pc),Rn */
	r0 = 0x50u;  /* 0C069EE2 mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r13); UPD(0x0C069EE6u, 2);  /* 0C069EE4 mov.w @Rm,Rn */
	r11 += 0x40u;  /* 0C069EE6 add #imm,Rn */
	IF(0x0C069EE8u); MACL = r5 * r0;  /* 0C069EE8 mul.l Rm,Rn */
	r2 = 0xC068DE0u; UPD(0x0C069EECu, 4);  /* 0C069EEA mov.l @(disp,pc),Rn */
	IF(0x0C069EECu); r13 = MACL;  /* 0C069EEC sts macl,Rn */
	r13 += r12;  /* 0C069EEE add Rm,Rn */
	r12 = 0xC217A04u; UPD(0x0C069EF2u, 3);  /* 0C069EF0 mov.l @(disp,pc),Rn */
	r13 += r12;  /* 0C069EF2 add Rm,Rn */
	W32(r13 + 0x8u, r11); UPD(0x0C069EF6u, 2);  /* 0C069EF4 mov.l Rm,@(disp,Rn) */
	r8 = 0xCD000000u; UPD(0x0C069EF8u, 1);  /* 0C069EF6 mov.l @(disp,pc),Rn */
	r11 += 0xFFFFFFC0u;  /* 0C069EF8 add #imm,Rn */
	W32(r13, r8); UPD(0x0C069EFCu, 2);  /* 0C069EFA mov.l Rm,@Rn */
	r4 = r11;  /* 0C069EFC mov Rm,Rn */
	W32(r13 + 0x4u, r9); UPD(0x0C069F00u, 2);  /* 0C069EFE mov.l Rm,@(disp,Rn) */
	IF(0x0C069F00u); { u32 t_ = r2; PR = 0x0C069F04u; W32(r13 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C069F04u); }  /* 0C069F00 jsr @Rn */
L_0C069F04: BLKS(0x0C069F04u);
	r5 = R32(r10 + 0x24u); UPD(0x0C069F06u, 1);  /* 0C069F04 mov.l @(disp,Rm),Rn */
	r0 = r13;  /* 0C069F06 mov Rm,Rn */
	r4 = R32(r10 + 0x28u); UPD(0x0C069F0Au, 2);  /* 0C069F08 mov.l @(disp,Rm),Rn */
	r0 += 0x40u;  /* 0C069F0A add #imm,Rn */
	r7 = 0x204B0B0u; UPD(0x0C069F0Eu, 2);  /* 0C069F0C mov.l @(disp,pc),Rn */
	r10 += 0x4Au;  /* 0C069F0E add #imm,Rn */
	r6 = 0x808080u; UPD(0x0C069F12u, 2);  /* 0C069F10 mov.l @(disp,pc),Rn */
	W32(r13 + 0x24u, r5); UPD(0x0C069F14u, 1);  /* 0C069F12 mov.l Rm,@(disp,Rn) */
	W32(r13 + 0x28u, r4); UPD(0x0C069F16u, 1);  /* 0C069F14 mov.l Rm,@(disp,Rn) */
	r5 = 0x54u;  /* 0C069F16 mov #imm,Rn */
	W32(r13 + 0x3Cu, r7); UPD(0x0C069F1Au, 2);  /* 0C069F18 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C069F1A mov Rm,Rn */
	W32(r0, r6); UPD(0x0C069F1Eu, 2);  /* 0C069F1C mov.l Rm,@Rn */
	r13 += 0x4Au;  /* 0C069F1E add #imm,Rn */
	r12 = 0xC0AFB20u; UPD(0x0C069F22u, 2);  /* 0C069F20 mov.l @(disp,pc),Rn */
	r0 += 0x8u;  /* 0C069F22 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C069F26u, 2);  /* 0C069F24 mov.b @Rm,Rn */
	W8(r0, r9); UPD(0x0C069F28u, 1);  /* 0C069F26 mov.b Rm,@Rn */
	r10 += 0xFFFFFFB6u;  /* 0C069F28 add #imm,Rn */
	IF(0x0C069F2Au); { u32 t_ = r12; PR = 0x0C069F2Eu; W8(r13, r3); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFB20, 0x0C0AFB20u, 0x0C069F2Eu); }  /* 0C069F2A jsr @Rn */
L_0C069F2E: BLKS(0x0C069F2Eu);
	{ W32(r10, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C069E92u, 3); goto L_0C069E92; }  /* 0C069F2E bra */
L_0C069F40: BLKS(0x0C069F40u);
	r3 = R32(r10 + 0xCu); UPD(0x0C069F42u, 1);  /* 0C069F40 mov.l @(disp,Rm),Rn */
	r9 = 0x3u;  /* 0C069F42 mov #imm,Rn */
	r3 += 0x1u;  /* 0C069F44 add #imm,Rn */
	r9 &= r3;  /* 0C069F46 and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C069F48 tst Rm,Rn */
	{ u32 c_ = !T; W32(r10 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C069E92u, 7); goto L_0C069E92; } UPD(0x0C069F4Eu, 1); goto L_0C069F4E; }  /* 0C069F4A bf/s */
L_0C069F4E: BLKS(0x0C069F4Eu);
	r1 += 0xFFFFFFFFu;  /* 0C069F4E add #imm,Rn */
	r4 = r1 & 0xFF;  /* 0C069F50 extu.b Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C069F52 tst Rm,Rn */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C069F5Au, 6); goto L_0C069F5A; } UPD(0x0C069F58u, 1); goto L_0C069F58; }  /* 0C069F54 bt/s */
L_0C069F58: BLKS(0x0C069F58u);
	W32(r10 + 0xCu, r9); UPD(0x0C069F5Au, 1);  /* 0C069F58 mov.l Rm,@(disp,Rn) */
L_0C069F5A: BLKS(0x0C069F5Au);
	r6 = 0xC068E50u; UPD(0x0C069F5Cu, 1);  /* 0C069F5A mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C069F5C mov Rm,Rn */
	r8 = 0xC068EE0u; UPD(0x0C069F60u, 2);  /* 0C069F5E mov.l @(disp,pc),Rn */
	IF(0x0C069F60u); { u32 t_ = r6; PR = 0x0C069F64u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C068E50, 0x0C068E50u, 0x0C069F64u); }  /* 0C069F60 jsr @Rn */
L_0C069F64: BLKS(0x0C069F64u);
	r4 = r11;  /* 0C069F64 mov Rm,Rn */
	IF(0x0C069F66u); { u32 t_ = r8; PR = 0x0C069F6Au; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C069F6Au); }  /* 0C069F66 jsr @Rn */
L_0C069F6A: BLKS(0x0C069F6Au);
	T = (r0 & r0) == 0;  /* 0C069F6A tst Rm,Rn */
	if (T) { UPD(0x0C069E92u, 4); goto L_0C069E92; }  /* 0C069F6C bt */
L_0C069F6E: BLKS(0x0C069F6Eu);
	r13 = 0x50u;  /* 0C069F6E mov #imm,Rn */
	r2 = 0xC2755BCu; UPD(0x0C069F72u, 2);  /* 0C069F70 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C069F74u, 1);  /* 0C069F72 mov.w @Rm,Rn */
	r11 += 0x40u;  /* 0C069F74 add #imm,Rn */
	IF(0x0C069F76u); MACL = r5 * r13;  /* 0C069F76 mul.l Rm,Rn */
	r7 = 0xC217A04u; UPD(0x0C069F7Au, 4);  /* 0C069F78 mov.l @(disp,pc),Rn */
	IF(0x0C069F7Au); r13 = MACL;  /* 0C069F7A sts macl,Rn */
	r13 += r12;  /* 0C069F7C add Rm,Rn */
	r13 += r7;  /* 0C069F7E add Rm,Rn */
	W32(r13 + 0x8u, r11); UPD(0x0C069F82u, 4);  /* 0C069F80 mov.l Rm,@(disp,Rn) */
	r8 = 0xC068DE0u; UPD(0x0C069F84u, 1);  /* 0C069F82 mov.l @(disp,pc),Rn */
	r11 += 0xFFFFFFC0u;  /* 0C069F84 add #imm,Rn */
	r6 = 0xCD000000u; UPD(0x0C069F88u, 2);  /* 0C069F86 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C069F88 mov Rm,Rn */
	W32(r13, r6); UPD(0x0C069F8Cu, 2);  /* 0C069F8A mov.l Rm,@Rn */
	W32(r13 + 0x4u, r9); UPD(0x0C069F8Eu, 1);  /* 0C069F8C mov.l Rm,@(disp,Rn) */
	IF(0x0C069F8Eu); { u32 t_ = r8; PR = 0x0C069F92u; W32(r13 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C069F92u); }  /* 0C069F8E jsr @Rn */
L_0C069F92: BLKS(0x0C069F92u);
	r5 = r13;  /* 0C069F92 mov Rm,Rn */
	r3 = 0x808080u; UPD(0x0C069F96u, 2);  /* 0C069F94 mov.l @(disp,pc),Rn */
	r5 += 0x40u;  /* 0C069F96 add #imm,Rn */
	r0 = R32(r10 + 0x24u); UPD(0x0C069F9Au, 2);  /* 0C069F98 mov.l @(disp,Rm),Rn */
	r12 = R32(r10 + 0x28u); UPD(0x0C069F9Cu, 1);  /* 0C069F9A mov.l @(disp,Rm),Rn */
	r4 = 0x204B0B0u; UPD(0x0C069F9Eu, 1);  /* 0C069F9C mov.l @(disp,pc),Rn */
	r10 += 0x4Au;  /* 0C069F9E add #imm,Rn */
	W32(r5, r3); UPD(0x0C069FA2u, 2);  /* 0C069FA0 mov.l Rm,@Rn */
	W32(r13 + 0x3Cu, r4); UPD(0x0C069FA4u, 1);  /* 0C069FA2 mov.l Rm,@(disp,Rn) */
	r5 += 0x8u;  /* 0C069FA4 add #imm,Rn */
	W32(r13 + 0x24u, r0); UPD(0x0C069FA8u, 2);  /* 0C069FA6 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C069FA8 mov Rm,Rn */
	W32(r13 + 0x28u, r12); UPD(0x0C069FACu, 2);  /* 0C069FAA mov.l Rm,@(disp,Rn) */
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C069FAEu, 1);  /* 0C069FAC mov.b @Rm,Rn */
	r13 += 0x4Au;  /* 0C069FAE add #imm,Rn */
	W8(r5, r9); UPD(0x0C069FB2u, 2);  /* 0C069FB0 mov.b Rm,@Rn */
	W8(r13, r2); UPD(0x0C069FB4u, 1);  /* 0C069FB2 mov.b Rm,@Rn */
	r5 = 0x54u;  /* 0C069FB4 mov #imm,Rn */
	r7 = 0xC0AFB20u; UPD(0x0C069FB8u, 2);  /* 0C069FB6 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C069FB8 mov Rm,Rn */
	IF(0x0C069FBAu); PR = R32(r15); r15 += 4; UPD(0x0C069FBCu, 2);  /* 0C069FBA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069FBEu, 1);  /* 0C069FBC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C069FC0u, 1);  /* 0C069FBE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C069FC2u, 1);  /* 0C069FC0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C069FC4u, 1);  /* 0C069FC2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C069FC6u, 1);  /* 0C069FC4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C069FC8u, 1);  /* 0C069FC6 mov.l @Rm+,Rn */
	IF(0x0C069FC8u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFB20u: TAIL(f_0C0AFB20); default: JUMPD(tv_); } }  /* 0C069FC8 jmp @Rn */
L_0C069FD0: BLKS(0x0C069FD0u);
	{ IF(0x0C069FD2u); ; /* slot nop */ UPD(0x0C069E70u, 3); goto L_0C069E70; }  /* 0C069FD0 bra */
}

void f_0C06A020(sh3_t *c)
{
	LOCALS;
L_0C06A020: BLKS(0x0C06A020u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06A022u, 1);  /* 0C06A020 mov.l Rm,@-Rn */
	r3 = 0x50u;  /* 0C06A022 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06A026u, 2);  /* 0C06A024 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06A028u, 1);  /* 0C06A026 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06A02Au, 1);  /* 0C06A028 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C06A02A exts.w Rm,Rn */
	r4 = 0x2800u; UPD(0x0C06A02Eu, 2);  /* 0C06A02C mov.w @(disp,pc),Rn */
	IF(0x0C06A02Eu); MACL = r11 * r4;  /* 0C06A02E mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06A032u, 3);  /* 0C06A030 mov.l Rm,@-Rn */
	IF(0x0C06A032u); r9 = MACL;  /* 0C06A032 sts macl,Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C06A034 exts.w Rm,Rn */
	IF(0x0C06A036u); MACL = r12 * r3;  /* 0C06A036 mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06A03Au, 5);  /* 0C06A038 mov.l Rm,@-Rn */
	IF(0x0C06A03Au); r2 = MACL;  /* 0C06A03A sts macl,Rn */
	r0 = 0xC217A04u; UPD(0x0C06A03Eu, 2);  /* 0C06A03C mov.l @(disp,pc),Rn */
	r9 += r2;  /* 0C06A03E add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A042u, 2);  /* 0C06A040 mov.l Rm,@-Rn */
	r9 += r0;  /* 0C06A042 add Rm,Rn */
	r8 = 0xC065950u; UPD(0x0C06A046u, 2);  /* 0C06A044 mov.l @(disp,pc),Rn */
	r13 = r9;  /* 0C06A046 mov Rm,Rn */
	IF(0x0C06A048u); r15 -= 4; W32(r15, PR); UPD(0x0C06A04Au, 2);  /* 0C06A048 sts.l pr,@-Rn */
	r13 += 0x46u;  /* 0C06A04A add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r13); UPD(0x0C06A04Eu, 2);  /* 0C06A04C mov.w @Rm,Rn */
	IF(0x0C06A04Eu); { u32 t_ = r8; PR = 0x0C06A052u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C065950, 0x0C065950u, 0x0C06A052u); }  /* 0C06A04E jsr @Rn */
L_0C06A052: BLKS(0x0C06A052u);
	r1 = 0xBFu; UPD(0x0C06A054u, 1);  /* 0C06A052 mov.w @(disp,pc),Rn */
	r10 = r9;  /* 0C06A054 mov Rm,Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C06A056 exts.w Rm,Rn */
	W16(r13, r0); UPD(0x0C06A05Au, 3);  /* 0C06A058 mov.w Rm,@Rn */
	T = (s32)r4 > (s32)r1;  /* 0C06A05A cmp/gt Rm,Rn */
	{ u32 c_ = T; r10 += 0x44u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06A064u, 4); goto L_0C06A064; } goto L_0C06A060; }  /* 0C06A05C bt/s */
L_0C06A060: BLKS(0x0C06A060u);
	{ r1 += 0xFFFFFFF5u; /* slot add #imm,Rn */ UPD(0x0C06A210u, 4); goto L_0C06A210; }  /* 0C06A060 bra */
L_0C06A064: BLKS(0x0C06A064u);
	r5 = 0x2800u; UPD(0x0C06A066u, 1);  /* 0C06A064 mov.w @(disp,pc),Rn */
	r3 = 0x50u;  /* 0C06A066 mov #imm,Rn */
	IF(0x0C06A068u); MACL = r11 * r5;  /* 0C06A068 mul.l Rm,Rn */
	r10 = 0xC217A04u; UPD(0x0C06A06Cu, 4);  /* 0C06A06A mov.l @(disp,pc),Rn */
	IF(0x0C06A06Cu); r13 = MACL;  /* 0C06A06C sts macl,Rn */
	IF(0x0C06A06Eu); MACL = r12 * r3;  /* 0C06A06E mul.l Rm,Rn */
	r8 = 0x60000u; UPD(0x0C06A072u, 4);  /* 0C06A070 mov.l @(disp,pc),Rn */
	IF(0x0C06A072u); r9 = MACL;  /* 0C06A072 sts macl,Rn */
	r9 += r13;  /* 0C06A074 add Rm,Rn */
	r9 += r10;  /* 0C06A076 add Rm,Rn */
	r10 = r9;  /* 0C06A078 mov Rm,Rn */
	r10 += 0x44u;  /* 0C06A07A add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C06A07Eu, 6);  /* 0C06A07C mov.w @Rm,Rn */
	r4 = r0 & 0xFFFF;  /* 0C06A07E extu.w Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C06A082u, 2);  /* 0C06A080 mov.l @(disp,pc),Rn */
	IF(0x0C06A082u); { u32 t_ = r0; PR = 0x0C06A086u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06A086u); }  /* 0C06A082 jsr @Rn */
L_0C06A086: BLKS(0x0C06A086u);
	r5 = r8;  /* 0C06A086 mov Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C06A08Au, 2);  /* 0C06A088 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C06A08Cu, 1);  /* 0C06A08A mov.w @Rm,Rn */
	W32(r9 + 0x2Cu, r0); UPD(0x0C06A08Eu, 1);  /* 0C06A08C mov.l Rm,@(disp,Rn) */
	IF(0x0C06A08Eu); { u32 t_ = r8; PR = 0x0C06A092u; r4 = r1 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06A092u); }  /* 0C06A08E jsr @Rn */
L_0C06A092: BLKS(0x0C06A092u);
	r4 = R32(r9 + 0x24u); UPD(0x0C06A094u, 1);  /* 0C06A092 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C06A096u, 1);  /* 0C06A094 mov.l @(disp,Rm),Rn */
	r2 = R32(r9 + 0x2Cu); UPD(0x0C06A098u, 1);  /* 0C06A096 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C06A098 add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C06A09Cu, 2);  /* 0C06A09A mov.l @(disp,pc),Rn */
	r4 += r2;  /* 0C06A09C add Rm,Rn */
	r3 += r4;  /* 0C06A09E add Rm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C06A0A2u, 3);  /* 0C06A0A0 mov.l Rm,@(disp,Rn) */
	IF(0x0C06A0A2u); T = (s32)r3 >= 0;  /* 0C06A0A2 cmp/pz Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C06A0A6u, 2);  /* 0C06A0A4 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r9 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06A0AEu, 3); goto L_0C06A0AE; } UPD(0x0C06A0AAu, 1); goto L_0C06A0AA; }  /* 0C06A0A6 bt/s */
L_0C06A0AA: BLKS(0x0C06A0AAu);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C06A1C0u, 3); goto L_0C06A1C0; }  /* 0C06A0AA bra */
L_0C06A0AE: BLKS(0x0C06A0AEu);
	r6 = 0xB00000u; UPD(0x0C06A0B0u, 1);  /* 0C06A0AE mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r6;  /* 0C06A0B0 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06A0CEu, 4); goto L_0C06A0CE; } goto L_0C06A0B6; }  /* 0C06A0B2 bt/s */
L_0C06A0B6: BLKS(0x0C06A0B6u);
	r2 = 0xC3929E0u; UPD(0x0C06A0B8u, 2);  /* 0C06A0B6 mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C06A0BAu, 1);  /* 0C06A0B8 mov.l @Rm,Rn */
	r2 = r7;  /* 0C06A0BA mov Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C06A0BEu, 2);  /* 0C06A0BC mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C06A0BE sub Rm,Rn */
	r2 += r7;  /* 0C06A0C0 add Rm,Rn */
	IF(0x0C06A0C2u); T = (s32)r2 >= 0;  /* 0C06A0C2 cmp/pz Rn */
	if (!T) { UPD(0x0C06A1B0u, 6); goto L_0C06A1B0; }  /* 0C06A0C4 bf */
L_0C06A0C6: BLKS(0x0C06A0C6u);
	r8 = 0x880000u; UPD(0x0C06A0C8u, 1);  /* 0C06A0C6 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C06A0C8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06A0F0u, 4); goto L_0C06A0F0; } UPD(0x0C06A0CEu, 1); goto L_0C06A0CE; }  /* 0C06A0CA bf/s */
L_0C06A0CE: BLKS(0x0C06A0CEu);
	W32(r9, r1); UPD(0x0C06A0D0u, 1);  /* 0C06A0CE mov.l Rm,@Rn */
L_0C06A0D0: BLKS(0x0C06A0D0u);
	r15 = r14;  /* 0C06A0D0 mov Rm,Rn */
	IF(0x0C06A0D2u); PR = R32(r15); r15 += 4; UPD(0x0C06A0D4u, 2);  /* 0C06A0D2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06A0D6u, 1);  /* 0C06A0D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06A0D8u, 1);  /* 0C06A0D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06A0DAu, 1);  /* 0C06A0D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06A0DCu, 1);  /* 0C06A0DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06A0DEu, 1);  /* 0C06A0DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06A0E0u, 1);  /* 0C06A0DE mov.l @Rm+,Rn */
	IF(0x0C06A0E0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06A0E0 rts */
L_0C06A0F0: BLKS(0x0C06A0F0u);
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C06A0F2u, 1);  /* 0C06A0F0 mov.w @Rm,Rn */
	r8 = r9;  /* 0C06A0F2 mov Rm,Rn */
	r0 = r1 & 0xFFFF;  /* 0C06A0F4 extu.w Rm,Rn */
	r0 += 0x4u;  /* 0C06A0F6 add #imm,Rn */
	IF(0x0C06A0F8u); r0 >>= 2;  /* 0C06A0F8 shlr2 Rn */
	IF(0x0C06A0FAu); T = r0 & 1; r0 >>= 1;  /* 0C06A0FA shlr Rn */
	r0 &= 0x3Fu;  /* 0C06A0FC and #imm,r0 */
	W32(r9 + 0x8u, r0); UPD(0x0C06A100u, 7);  /* 0C06A0FE mov.l Rm,@(disp,Rn) */
	r8 += 0x48u;  /* 0C06A100 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C06A104u, 2);  /* 0C06A102 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C06A104 add #imm,Rn */
	W8(r8, r0); UPD(0x0C06A108u, 2);  /* 0C06A106 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C06A108 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06A10A tst Rm,Rn */
	if (T) { UPD(0x0C06A116u, 5); goto L_0C06A116; }  /* 0C06A10C bt */
L_0C06A10E: BLKS(0x0C06A10Eu);
	r0 = R32(r9 + 0xCu); UPD(0x0C06A110u, 1);  /* 0C06A10E mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C06A110 add #imm,Rn */
	r0 &= 0x3u;  /* 0C06A112 and #imm,r0 */
	W32(r9 + 0xCu, r0); UPD(0x0C06A116u, 3);  /* 0C06A114 mov.l Rm,@(disp,Rn) */
L_0C06A116: BLKS(0x0C06A116u);
	r0 = 0xC068E90u; UPD(0x0C06A118u, 1);  /* 0C06A116 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C06A118 mov Rm,Rn */
	IF(0x0C06A11Au); { u32 t_ = r0; PR = 0x0C06A11Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C068E90, 0x0C068E90u, 0x0C06A11Eu); }  /* 0C06A11A jsr @Rn */
L_0C06A11E: BLKS(0x0C06A11Eu);
	r12 = (u32)(s32)(s8)R8(r8); UPD(0x0C06A120u, 1);  /* 0C06A11E mov.b @Rm,Rn */
	r10 = 0x3u;  /* 0C06A120 mov #imm,Rn */
	r10 &= r12;  /* 0C06A122 and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C06A124 tst Rm,Rn */
	if (!T) { UPD(0x0C06A0D0u, 6); goto L_0C06A0D0; }  /* 0C06A126 bf */
L_0C06A128: BLKS(0x0C06A128u);
	r4 = r11;  /* 0C06A128 mov Rm,Rn */
	r8 = 0xC068EE0u; UPD(0x0C06A12Cu, 2);  /* 0C06A12A mov.l @(disp,pc),Rn */
	IF(0x0C06A12Cu); { u32 t_ = r8; PR = 0x0C06A130u; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C06A130u); }  /* 0C06A12C jsr @Rn */
L_0C06A130: BLKS(0x0C06A130u);
	T = (r0 & r0) == 0;  /* 0C06A130 tst Rm,Rn */
	if (!T) { UPD(0x0C06A150u, 4); goto L_0C06A150; }  /* 0C06A132 bf */
L_0C06A134: BLKS(0x0C06A134u);
	r1 = r9;  /* 0C06A134 mov Rm,Rn */
	UPD(0x0C06A136u, 1);
L_0C06A136: BLKS(0x0C06A136u);
	r1 += 0x49u;  /* 0C06A136 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r1); UPD(0x0C06A13Au, 2);  /* 0C06A138 mov.b @Rm,Rn */
	r10 += 0xFFFFFFFFu;  /* 0C06A13A add #imm,Rn */
	W8(r1, r10); UPD(0x0C06A13Eu, 2);  /* 0C06A13C mov.b Rm,@Rn */
	r1 = r10 & 0xFF;  /* 0C06A13E extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C06A140 tst Rm,Rn */
	if (T) { UPD(0x0C06A0CEu, 5); goto L_0C06A0CE; }  /* 0C06A142 bt */
L_0C06A144: BLKS(0x0C06A144u);
	{ IF(0x0C06A146u); ; /* slot nop */ UPD(0x0C06A0D0u, 3); goto L_0C06A0D0; }  /* 0C06A144 bra */
L_0C06A150: BLKS(0x0C06A150u);
	r3 = 0xC2755BCu; UPD(0x0C06A152u, 1);  /* 0C06A150 mov.l @(disp,pc),Rn */
	r12 = 0x50u;  /* 0C06A152 mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r3); UPD(0x0C06A156u, 2);  /* 0C06A154 mov.w @Rm,Rn */
	r11 += 0x40u;  /* 0C06A156 add #imm,Rn */
	IF(0x0C06A158u); MACL = r5 * r12;  /* 0C06A158 mul.l Rm,Rn */
	r8 = 0xC217A04u; UPD(0x0C06A15Cu, 4);  /* 0C06A15A mov.l @(disp,pc),Rn */
	IF(0x0C06A15Cu); r12 = MACL;  /* 0C06A15C sts macl,Rn */
	r12 += r13;  /* 0C06A15E add Rm,Rn */
	r12 += r8;  /* 0C06A160 add Rm,Rn */
	W32(r12 + 0x8u, r11); UPD(0x0C06A164u, 4);  /* 0C06A162 mov.l Rm,@(disp,Rn) */
	r13 = r12;  /* 0C06A164 mov Rm,Rn */
	r2 = 0xC068DE0u; UPD(0x0C06A168u, 2);  /* 0C06A166 mov.l @(disp,pc),Rn */
	r11 += 0xFFFFFFC0u;  /* 0C06A168 add #imm,Rn */
	r0 = 0xCD000000u; UPD(0x0C06A16Cu, 2);  /* 0C06A16A mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06A16C mov Rm,Rn */
	W32(r12, r0); UPD(0x0C06A170u, 2);  /* 0C06A16E mov.l Rm,@Rn */
	r13 += 0x40u;  /* 0C06A170 add #imm,Rn */
	W32(r12 + 0x4u, r10); UPD(0x0C06A174u, 2);  /* 0C06A172 mov.l Rm,@(disp,Rn) */
	IF(0x0C06A174u); { u32 t_ = r2; PR = 0x0C06A178u; W32(r12 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C06A178u); }  /* 0C06A174 jsr @Rn */
L_0C06A178: BLKS(0x0C06A178u);
	r4 = 0x204B0B0u; UPD(0x0C06A17Au, 1);  /* 0C06A178 mov.l @(disp,pc),Rn */
	W32(r12 + 0x3Cu, r4); UPD(0x0C06A17Cu, 1);  /* 0C06A17A mov.l Rm,@(disp,Rn) */
	r5 = R32(r9 + 0x28u); UPD(0x0C06A17Eu, 1);  /* 0C06A17C mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C06A17E mov Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C06A182u, 2);  /* 0C06A180 mov.l @(disp,Rm),Rn */
	r7 = 0x808080u; UPD(0x0C06A184u, 1);  /* 0C06A182 mov.l @(disp,pc),Rn */
	r9 += 0x4Au;  /* 0C06A184 add #imm,Rn */
	W32(r12 + 0x28u, r5); UPD(0x0C06A188u, 2);  /* 0C06A186 mov.l Rm,@(disp,Rn) */
	W32(r13, r7); UPD(0x0C06A18Au, 1);  /* 0C06A188 mov.l Rm,@Rn */
	r5 = 0x54u;  /* 0C06A18A mov #imm,Rn */
	W32(r12 + 0x24u, r6); UPD(0x0C06A18Eu, 2);  /* 0C06A18C mov.l Rm,@(disp,Rn) */
	r13 += 0x8u;  /* 0C06A18E add #imm,Rn */
	r11 = 0xC0AFB20u; UPD(0x0C06A192u, 2);  /* 0C06A190 mov.l @(disp,pc),Rn */
	r12 += 0x4Au;  /* 0C06A192 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C06A196u, 2);  /* 0C06A194 mov.b @Rm,Rn */
	W8(r13, r10); UPD(0x0C06A198u, 1);  /* 0C06A196 mov.b Rm,@Rn */
	r9 += 0xFFFFFFB6u;  /* 0C06A198 add #imm,Rn */
	IF(0x0C06A19Au); { u32 t_ = r11; PR = 0x0C06A19Eu; W8(r12, r3); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFB20, 0x0C0AFB20u, 0x0C06A19Eu); }  /* 0C06A19A jsr @Rn */
L_0C06A19E: BLKS(0x0C06A19Eu);
	{ r1 = r9; /* slot mov Rm,Rn */ UPD(0x0C06A136u, 3); goto L_0C06A136; }  /* 0C06A19E bra */
L_0C06A1B0: BLKS(0x0C06A1B0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C06A0C6u, 3); goto L_0C06A0C6; }  /* 0C06A1B0 bra */
L_0C06A1C0: BLKS(0x0C06A1C0u);
	{ IF(0x0C06A1C2u); ; /* slot nop */ UPD(0x0C06A0AEu, 3); goto L_0C06A0AE; }  /* 0C06A1C0 bra */
L_0C06A210: BLKS(0x0C06A210u);
	IF(0x0C06A210u); MACL = r4 * r1;  /* 0C06A210 mul.l Rm,Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C06A214u, 3);  /* 0C06A212 mov.l @(disp,Rm),Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C06A216u, 1);  /* 0C06A214 mov.l @(disp,Rm),Rn */
	IF(0x0C06A216u); r13 = MACL;  /* 0C06A216 sts macl,Rn */
	r6 = 0xC26CD40u; UPD(0x0C06A21Au, 2);  /* 0C06A218 mov.l @(disp,pc),Rn */
	r9 = 0xC057390u; UPD(0x0C06A21Cu, 1);  /* 0C06A21A mov.l @(disp,pc),Rn */
	r13 += r6;  /* 0C06A21C add Rm,Rn */
	r6 = R32(r13 + 0x24u); UPD(0x0C06A220u, 2);  /* 0C06A21E mov.l @(disp,Rm),Rn */
	IF(0x0C06A220u); { u32 t_ = r9; PR = 0x0C06A224u; r7 = R32(r13 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C06A224u); }  /* 0C06A220 jsr @Rn */
L_0C06A224: BLKS(0x0C06A224u);
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C06A226u, 1);  /* 0C06A224 mov.w @Rm,Rn */
	r0 = (u32)(s32)(s16)r0;  /* 0C06A226 exts.w Rm,Rn */
	r3 = 0x1FFu; UPD(0x0C06A22Au, 2);  /* 0C06A228 mov.w @(disp,pc),Rn */
	r5 = r2;  /* 0C06A22A mov Rm,Rn */
	r5 &= r3;  /* 0C06A22C and Rm,Rn */
	T = r0 == r5;  /* 0C06A22E cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 -= r2; /* slot sub Rm,Rn */ if (c_) { UPD(0x0C06A244u, 6); goto L_0C06A244; } goto L_0C06A234; }  /* 0C06A230 bt/s */
L_0C06A234: BLKS(0x0C06A234u);
	r7 = 0x100u; UPD(0x0C06A236u, 2);  /* 0C06A234 mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C06A236 add Rm,Rn */
	r0 &= r3;  /* 0C06A238 and Rm,Rn */
	T = (s32)r0 > (s32)r7;  /* 0C06A23A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06A250u, 6); goto L_0C06A250; } goto L_0C06A240; }  /* 0C06A23C bf/s */
L_0C06A240: BLKS(0x0C06A240u);
	r1 += 0x8u;  /* 0C06A240 add #imm,Rn */
	UPD(0x0C06A242u, 2);
L_0C06A242: BLKS(0x0C06A242u);
	W16(r10, r1); UPD(0x0C06A244u, 1);  /* 0C06A242 mov.w Rm,@Rn */
L_0C06A244: BLKS(0x0C06A244u);
	{ IF(0x0C06A246u); ; /* slot nop */ UPD(0x0C06A064u, 3); goto L_0C06A064; }  /* 0C06A244 bra */
L_0C06A250: BLKS(0x0C06A250u);
	r8 = 0xFFu; UPD(0x0C06A252u, 1);  /* 0C06A250 mov.w @(disp,pc),Rn */
	T = (s32)r0 > (s32)r8;  /* 0C06A252 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06A244u, 4); goto L_0C06A244; } goto L_0C06A258; }  /* 0C06A254 bt/s */
L_0C06A258: BLKS(0x0C06A258u);
	{ r1 += 0xFFFFFFF8u; /* slot add #imm,Rn */ UPD(0x0C06A242u, 4); goto L_0C06A242; }  /* 0C06A258 bra */
}

void f_0C06A270(sh3_t *c)
{
	LOCALS;
L_0C06A270: BLKS(0x0C06A270u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A272u, 1);  /* 0C06A270 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C06A272 mov Rm,Rn */
	r15 = r14;  /* 0C06A274 mov Rm,Rn */
	IF(0x0C06A276u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C06A276 rts */
}

void f_0C06A350(sh3_t *c)
{
	LOCALS;
L_0C06A350: BLKS(0x0C06A350u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06A352u, 1);  /* 0C06A350 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C06A352 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06A356u, 2);  /* 0C06A354 mov.l Rm,@-Rn */
	r2 = 0x50u;  /* 0C06A356 mov #imm,Rn */
	r3 = 0x2800u; UPD(0x0C06A35Au, 2);  /* 0C06A358 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C06A35A exts.w Rm,Rn */
	IF(0x0C06A35Cu); MACL = r9 * r3;  /* 0C06A35C mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06A360u, 4);  /* 0C06A35E mov.l Rm,@-Rn */
	IF(0x0C06A360u); r8 = MACL;  /* 0C06A360 sts macl,Rn */
	IF(0x0C06A362u); MACL = r5 * r2;  /* 0C06A362 mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06A366u, 4);  /* 0C06A364 mov.l Rm,@-Rn */
	IF(0x0C06A366u); r0 = MACL;  /* 0C06A366 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A36Au, 2);  /* 0C06A368 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C06A36A add Rm,Rn */
	r0 = 0xC217A04u; UPD(0x0C06A36Eu, 2);  /* 0C06A36C mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r6;  /* 0C06A36E exts.w Rm,Rn */
	IF(0x0C06A370u); r15 -= 4; W32(r15, PR); UPD(0x0C06A372u, 2);  /* 0C06A370 sts.l pr,@-Rn */
	r8 += r0;  /* 0C06A372 add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C06A376u, 2);  /* 0C06A374 mov.l @(disp,Rm),Rn */
	T = r0 == 0x1u;  /* 0C06A376 cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06A390u, 4); goto L_0C06A390; } UPD(0x0C06A37Cu, 1); goto L_0C06A37C; }  /* 0C06A378 bt/s */
L_0C06A37C: BLKS(0x0C06A37Cu);
	r15 = r14;  /* 0C06A37C mov Rm,Rn */
	IF(0x0C06A37Eu); PR = R32(r15); r15 += 4; UPD(0x0C06A380u, 2);  /* 0C06A37E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06A382u, 1);  /* 0C06A380 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06A384u, 1);  /* 0C06A382 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06A386u, 1);  /* 0C06A384 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06A388u, 1);  /* 0C06A386 mov.l @Rm+,Rn */
	IF(0x0C06A388u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06A388 rts */
L_0C06A390: BLKS(0x0C06A390u);
	r7 = 0xB4u; UPD(0x0C06A392u, 1);  /* 0C06A390 mov.w @(disp,pc),Rn */
	IF(0x0C06A392u); MACL = r11 * r7;  /* 0C06A392 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C06A396u, 3);  /* 0C06A394 mov.l @(disp,pc),Rn */
	IF(0x0C06A396u); r10 = MACL;  /* 0C06A396 sts macl,Rn */
	r10 += r6;  /* 0C06A398 add Rm,Rn */
	r1 = R32(r10); UPD(0x0C06A39Cu, 3);  /* 0C06A39A mov.l @Rm,Rn */
	r4 = 0x8000u; UPD(0x0C06A39Eu, 1);  /* 0C06A39C mov.l @(disp,pc),Rn */
	T = (r1 & r4) == 0;  /* 0C06A39E tst Rm,Rn */
	if (T) { UPD(0x0C06A37Cu, 4); goto L_0C06A37C; }  /* 0C06A3A0 bt */
L_0C06A3A2: BLKS(0x0C06A3A2u);
	r4 = 0x3u;  /* 0C06A3A2 mov #imm,Rn */
	r0 = 0xC068E90u; UPD(0x0C06A3A6u, 2);  /* 0C06A3A4 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C06A3A6 mov #imm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C06A3AAu, 2);  /* 0C06A3A8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r3); UPD(0x0C06A3ACu, 1);  /* 0C06A3AA mov.l Rm,@(disp,Rn) */
	IF(0x0C06A3ACu); { u32 t_ = r0; PR = 0x0C06A3B0u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C068E90, 0x0C068E90u, 0x0C06A3B0u); }  /* 0C06A3AC jsr @Rn */
L_0C06A3B0: BLKS(0x0C06A3B0u);
	r8 += 0x49u;  /* 0C06A3B0 add #imm,Rn */
	r2 = 0xFu;  /* 0C06A3B2 mov #imm,Rn */
	W8(r8, r2); UPD(0x0C06A3B6u, 3);  /* 0C06A3B4 mov.b Rm,@Rn */
	r8 += 0xFFFFFFB7u;  /* 0C06A3B6 add #imm,Rn */
	r6 = R32(r8); UPD(0x0C06A3BAu, 2);  /* 0C06A3B8 mov.l @Rm,Rn */
	r7 = 0x4000u; UPD(0x0C06A3BCu, 1);  /* 0C06A3BA mov.w @(disp,pc),Rn */
	r6 |= r7;  /* 0C06A3BC or Rm,Rn */
	W32(r8, r6); UPD(0x0C06A3C0u, 2);  /* 0C06A3BE mov.l Rm,@Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C06A3C2u, 1);  /* 0C06A3C0 mov.l @(disp,Rm),Rn */
	r1 = R32(r10 + 0x24u); UPD(0x0C06A3C4u, 1);  /* 0C06A3C2 mov.l @(disp,Rm),Rn */
	r4 -= r1;  /* 0C06A3C4 sub Rm,Rn */
	W32(r8 + 0x2Cu, r4); UPD(0x0C06A3C8u, 2);  /* 0C06A3C6 mov.l Rm,@(disp,Rn) */
	r0 = R32(r8 + 0x28u); UPD(0x0C06A3CAu, 1);  /* 0C06A3C8 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C06A3CA mov Rm,Rn */
	r3 = R32(r10 + 0x28u); UPD(0x0C06A3CEu, 2);  /* 0C06A3CC mov.l @(disp,Rm),Rn */
	r0 -= r3;  /* 0C06A3CE sub Rm,Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C06A3D2u, 2);  /* 0C06A3D0 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Cu;  /* 0C06A3D2 add #imm,Rn */
	W16(r8, r11); UPD(0x0C06A3D6u, 2);  /* 0C06A3D4 mov.w Rm,@Rn */
	r5 = 0x204C0C0u; UPD(0x0C06A3D8u, 1);  /* 0C06A3D6 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB4u;  /* 0C06A3D8 add #imm,Rn */
	W32(r8 + 0x3Cu, r5); UPD(0x0C06A3DCu, 2);  /* 0C06A3DA mov.l Rm,@(disp,Rn) */
	r8 = 0xC0AFB20u; UPD(0x0C06A3DEu, 1);  /* 0C06A3DC mov.l @(disp,pc),Rn */
	IF(0x0C06A3DEu); { u32 t_ = r8; PR = 0x0C06A3E2u; r5 = 0x7Du; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFB20, 0x0C0AFB20u, 0x0C06A3E2u); }  /* 0C06A3DE jsr @Rn */
L_0C06A3E2: BLKS(0x0C06A3E2u);
	{ IF(0x0C06A3E4u); ; /* slot nop */ UPD(0x0C06A37Cu, 3); goto L_0C06A37C; }  /* 0C06A3E2 bra */
}

void f_0C06A4E0(sh3_t *c)
{
	LOCALS;
L_0C06A4E0: BLKS(0x0C06A4E0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A4E2u, 1);  /* 0C06A4E0 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C06A4E2 mov Rm,Rn */
	r15 = r14;  /* 0C06A4E4 mov Rm,Rn */
	IF(0x0C06A4E6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C06A4E6 rts */
}

void f_0C06A4F0(sh3_t *c)
{
	LOCALS;
L_0C06A4F0: BLKS(0x0C06A4F0u);
	r3 = 0x2800u; UPD(0x0C06A4F2u, 1);  /* 0C06A4F0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C06A4F2 exts.w Rm,Rn */
	IF(0x0C06A4F4u); MACL = r4 * r3;  /* 0C06A4F4 mul.l Rm,Rn */
	r2 = 0x50u;  /* 0C06A4F6 mov #imm,Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C06A4F8 exts.w Rm,Rn */
	IF(0x0C06A4FAu); r3 = MACL;  /* 0C06A4FA sts macl,Rn */
	IF(0x0C06A4FCu); MACL = r5 * r2;  /* 0C06A4FC mul.l Rm,Rn */
	r7 = 0x280u; UPD(0x0C06A500u, 9);  /* 0C06A4FE mov.w @(disp,pc),Rn */
	IF(0x0C06A500u); r0 = MACL;  /* 0C06A500 sts macl,Rn */
	r6 = 0xC217A04u; UPD(0x0C06A504u, 2);  /* 0C06A502 mov.l @(disp,pc),Rn */
	IF(0x0C06A504u); MACL = r4 * r7;  /* 0C06A504 mul.l Rm,Rn */
	r3 += r0;  /* 0C06A506 add Rm,Rn */
	r3 += r6;  /* 0C06A508 add Rm,Rn */
	r2 = 0xC283794u; UPD(0x0C06A50Cu, 5);  /* 0C06A50A mov.l @(disp,pc),Rn */
	IF(0x0C06A50Cu); r6 = MACL;  /* 0C06A50C sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A510u, 2);  /* 0C06A50E mov.l Rm,@-Rn */
	r6 += r2;  /* 0C06A510 add Rm,Rn */
	r0 = R32(r6 + 0x10u); UPD(0x0C06A514u, 2);  /* 0C06A512 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C06A514 mov Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C06A518u, 2);  /* 0C06A516 mov.l Rm,@(disp,Rn) */
	r0 = R32(r6 + 0x14u); UPD(0x0C06A51Au, 1);  /* 0C06A518 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x28u, r0); UPD(0x0C06A51Cu, 1);  /* 0C06A51A mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0xCu); UPD(0x0C06A51Eu, 1);  /* 0C06A51C mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C06A51E add #imm,Rn */
	T = r0 == 0x10u;  /* 0C06A520 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06A530u, 5); goto L_0C06A530; } UPD(0x0C06A526u, 1); goto L_0C06A526; }  /* 0C06A522 bf/s */
L_0C06A526: BLKS(0x0C06A526u);
	r4 = 0x0u;  /* 0C06A526 mov #imm,Rn */
	W32(r3, r4); UPD(0x0C06A52Au, 2);  /* 0C06A528 mov.l Rm,@Rn */
	r15 = r14;  /* 0C06A52A mov Rm,Rn */
	IF(0x0C06A52Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06A52C rts */
L_0C06A530: BLKS(0x0C06A530u);
	r7 = 0xC068E50u; UPD(0x0C06A532u, 1);  /* 0C06A530 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C06A532 mov Rm,Rn */
	IF(0x0C06A534u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C068E50u: TAIL(f_0C068E50); default: JUMPD(tv_); } }  /* 0C06A534 jmp @Rn */
}

void f_0C06A550(sh3_t *c)
{
	LOCALS;
L_0C06A550: BLKS(0x0C06A550u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A552u, 1);  /* 0C06A550 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C06A552 mov Rm,Rn */
	r15 = r14;  /* 0C06A554 mov Rm,Rn */
	IF(0x0C06A556u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C06A556 rts */
}

/* FUN_0c06a560 */
void f_0C06A560(sh3_t *c)
{
	LOCALS;
L_0C06A560: BLKS(0x0C06A560u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06A562u, 1);  /* 0C06A560 mov.l Rm,@-Rn */
	r5 = 0x1u;  /* 0C06A562 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06A566u, 2);  /* 0C06A564 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06A568u, 1);  /* 0C06A566 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A56Au, 1);  /* 0C06A568 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C06A56A exts.w Rm,Rn */
	r8 = 0xC068EE0u; UPD(0x0C06A56Eu, 2);  /* 0C06A56C mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C06A56E mov Rm,Rn */
	IF(0x0C06A570u); r15 -= 4; W32(r15, PR); UPD(0x0C06A572u, 2);  /* 0C06A570 sts.l pr,@-Rn */
	IF(0x0C06A572u); { u32 t_ = r8; PR = 0x0C06A576u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C068EE0, 0x0C068EE0u, 0x0C06A576u); }  /* 0C06A572 jsr @Rn */
L_0C06A576: BLKS(0x0C06A576u);
	T = (r0 & r0) == 0;  /* 0C06A576 tst Rm,Rn */
	if (!T) { UPD(0x0C06A590u, 4); goto L_0C06A590; }  /* 0C06A578 bf */
L_0C06A57A: BLKS(0x0C06A57Au);
	r15 = r14;  /* 0C06A57A mov Rm,Rn */
	IF(0x0C06A57Cu); PR = R32(r15); r15 += 4; UPD(0x0C06A57Eu, 2);  /* 0C06A57C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06A580u, 1);  /* 0C06A57E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06A582u, 1);  /* 0C06A580 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06A584u, 1);  /* 0C06A582 mov.l @Rm+,Rn */
	IF(0x0C06A584u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06A584 rts */
L_0C06A590: BLKS(0x0C06A590u);
	r8 = 0x2800u; UPD(0x0C06A592u, 1);  /* 0C06A590 mov.w @(disp,pc),Rn */
	r6 = 0x50u;  /* 0C06A592 mov #imm,Rn */
	r7 = 0xC2755BCu; UPD(0x0C06A596u, 2);  /* 0C06A594 mov.l @(disp,pc),Rn */
	IF(0x0C06A596u); MACL = r10 * r8;  /* 0C06A596 mul.l Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r7); UPD(0x0C06A59Au, 3);  /* 0C06A598 mov.w @Rm,Rn */
	IF(0x0C06A59Au); r8 = MACL;  /* 0C06A59A sts macl,Rn */
	IF(0x0C06A59Cu); MACL = r5 * r6;  /* 0C06A59C mul.l Rm,Rn */
	r4 = 0xC217A04u; UPD(0x0C06A5A0u, 4);  /* 0C06A59E mov.l @(disp,pc),Rn */
	r10 += 0x9u;  /* 0C06A5A0 add #imm,Rn */
	IF(0x0C06A5A2u); r2 = MACL;  /* 0C06A5A2 sts macl,Rn */
	r8 += r2;  /* 0C06A5A4 add Rm,Rn */
	r9 = 0xCD000000u; UPD(0x0C06A5A8u, 4);  /* 0C06A5A6 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C06A5A8 add Rm,Rn */
	W32(r8, r9); UPD(0x0C06A5ACu, 2);  /* 0C06A5AA mov.l Rm,@Rn */
	W32(r8 + 0x4u, r10); UPD(0x0C06A5AEu, 1);  /* 0C06A5AC mov.l Rm,@(disp,Rn) */
	r9 = 0x0u;  /* 0C06A5AE mov #imm,Rn */
	r3 = 0xC068DE0u; UPD(0x0C06A5B2u, 2);  /* 0C06A5B0 mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFF7u;  /* 0C06A5B2 add #imm,Rn */
	W32(r8 + 0xCu, r9); UPD(0x0C06A5B6u, 2);  /* 0C06A5B4 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C06A5B6 mov Rm,Rn */
	IF(0x0C06A5B8u); { u32 t_ = r3; PR = 0x0C06A5BCu; W32(r8 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C06A5BCu); }  /* 0C06A5B8 jsr @Rn */
L_0C06A5BC: BLKS(0x0C06A5BCu);
	r0 = 0x207C0C0u; UPD(0x0C06A5BEu, 1);  /* 0C06A5BC mov.l @(disp,pc),Rn */
	r6 = 0x280u; UPD(0x0C06A5C0u, 1);  /* 0C06A5BE mov.w @(disp,pc),Rn */
	W32(r8 + 0x3Cu, r0); UPD(0x0C06A5C2u, 1);  /* 0C06A5C0 mov.l Rm,@(disp,Rn) */
	IF(0x0C06A5C2u); MACL = r10 * r6;  /* 0C06A5C2 mul.l Rm,Rn */
	r7 = 0x808080u; UPD(0x0C06A5C6u, 3);  /* 0C06A5C4 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C06A5C6 add #imm,Rn */
	r5 = 0xC283794u; UPD(0x0C06A5CAu, 2);  /* 0C06A5C8 mov.l @(disp,pc),Rn */
	IF(0x0C06A5CAu); r4 = MACL;  /* 0C06A5CA sts macl,Rn */
	W32(r8, r7); UPD(0x0C06A5CEu, 2);  /* 0C06A5CC mov.l Rm,@Rn */
	r4 += r5;  /* 0C06A5CE add Rm,Rn */
	r2 = R32(r4 + 0x10u); UPD(0x0C06A5D2u, 2);  /* 0C06A5D0 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFC0u;  /* 0C06A5D2 add #imm,Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C06A5D6u, 2);  /* 0C06A5D4 mov.l Rm,@(disp,Rn) */
	r0 = 0x14u;  /* 0C06A5D6 mov #imm,Rn */
	r3 = R32(r4 + 0x14u); UPD(0x0C06A5DAu, 2);  /* 0C06A5D8 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C06A5DCu, 1);  /* 0C06A5DA mov.l Rm,@(disp,Rn) */
	r8 += 0x4Au;  /* 0C06A5DC add #imm,Rn */
	W8(r8, r0); UPD(0x0C06A5E0u, 2);  /* 0C06A5DE mov.b Rm,@Rn */
	r8 += 0xFFFFFFFEu;  /* 0C06A5E0 add #imm,Rn */
	{ W8(r8, r9); /* slot mov.b Rm,@Rn */ UPD(0x0C06A57Au, 4); goto L_0C06A57A; }  /* 0C06A5E2 bra */
}

/* FUN_0c06a690 */
void f_0C06A690(sh3_t *c)
{
	LOCALS;
L_0C06A690: BLKS(0x0C06A690u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A692u, 1);  /* 0C06A690 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C06A692 mov #imm,Rn */
	r0 = 0xC217A04u; UPD(0x0C06A696u, 2);  /* 0C06A694 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06A696 mov Rm,Rn */
	r4 = 0xC392968u; UPD(0x0C06A69Au, 2);  /* 0C06A698 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C06A69A mov #imm,Rn */
	UPD(0x0C06A69Cu, 1);
L_0C06A69C: BLKS(0x0C06A69Cu);
	r3 = r6;  /* 0C06A69C mov Rm,Rn */
	r7 = 0x0u;  /* 0C06A69E mov #imm,Rn */
	r3 += r0;  /* 0C06A6A0 add Rm,Rn */
	IF(0x0C06A6A2u); ;  /* 0C06A6A2 nop */
	UPD(0x0C06A6A4u, 4);
L_0C06A6A4: BLKS(0x0C06A6A4u);
	r2 = R32(r3); UPD(0x0C06A6A6u, 1);  /* 0C06A6A4 mov.l @Rm,Rn */
	r1 = 0x40000000u; UPD(0x0C06A6A8u, 1);  /* 0C06A6A6 mov.l @(disp,pc),Rn */
	T = (r2 & r1) == 0;  /* 0C06A6A8 tst Rm,Rn */
	{ u32 c_ = T; r2 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06A6C6u, 4); goto L_0C06A6C6; } goto L_0C06A6AE; }  /* 0C06A6AA bt/s */
L_0C06A6AE: BLKS(0x0C06A6AEu);
	r3 += 0x4Au;  /* 0C06A6AE add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C06A6B2u, 3);  /* 0C06A6B0 mov.b @Rm,Rn */
	r1 = 0x1Fu;  /* 0C06A6B2 mov #imm,Rn */
	r1 &= r2;  /* 0C06A6B4 and Rm,Rn */
	r1 += r1;  /* 0C06A6B6 add Rm,Rn */
	r2 = r1;  /* 0C06A6B8 mov Rm,Rn */
	r2 += r4;  /* 0C06A6BA add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C06A6BEu, 6);  /* 0C06A6BC mov.w @Rm,Rn */
	r3 += 0xFFFFFFB6u;  /* 0C06A6BE add #imm,Rn */
	r1 += 0x1u;  /* 0C06A6C0 add #imm,Rn */
	W16(r2, r1); UPD(0x0C06A6C4u, 3);  /* 0C06A6C2 mov.w Rm,@Rn */
	r2 = r7;  /* 0C06A6C4 mov Rm,Rn */
	UPD(0x0C06A6C6u, 1);
L_0C06A6C6: BLKS(0x0C06A6C6u);
	r2 += 0x1u;  /* 0C06A6C6 add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C06A6C8 exts.w Rm,Rn */
	r2 = 0x7Fu;  /* 0C06A6CA mov #imm,Rn */
	T = (s32)r7 > (s32)r2;  /* 0C06A6CC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x50u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06A6A4u, 7); goto L_0C06A6A4; } goto L_0C06A6D2; }  /* 0C06A6CE bf/s */
L_0C06A6D2: BLKS(0x0C06A6D2u);
	r7 = r5;  /* 0C06A6D2 mov Rm,Rn */
	r7 += 0x1u;  /* 0C06A6D4 add #imm,Rn */
	r1 = 0x2800u; UPD(0x0C06A6D8u, 4);  /* 0C06A6D6 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r7;  /* 0C06A6D8 exts.w Rm,Rn */
	r3 = 0x1u;  /* 0C06A6DA mov #imm,Rn */
	T = (s32)r5 > (s32)r3;  /* 0C06A6DC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += r1; /* slot add Rm,Rn */ if (c_) { UPD(0x0C06A69Cu, 6); goto L_0C06A69C; } goto L_0C06A6E2; }  /* 0C06A6DE bf/s */
L_0C06A6E2: BLKS(0x0C06A6E2u);
	r15 = r14;  /* 0C06A6E2 mov Rm,Rn */
	IF(0x0C06A6E4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C06A6E4 rts */
}

/* FUN_0c06a700 */
void f_0C06A700(sh3_t *c)
{
	LOCALS;
L_0C06A700: BLKS(0x0C06A700u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06A702u, 1);  /* 0C06A700 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06A704u, 1);  /* 0C06A702 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06A706u, 1);  /* 0C06A704 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06A708u, 1);  /* 0C06A706 mov.l Rm,@-Rn */
	r10 = r4 & 0xFF;  /* 0C06A708 extu.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06A70Cu, 2);  /* 0C06A70A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06A70Eu, 1);  /* 0C06A70C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A710u, 1);  /* 0C06A70E mov.l Rm,@-Rn */
	r13 = 0x0u;  /* 0C06A710 mov #imm,Rn */
	IF(0x0C06A712u); r15 -= 4; W32(r15, PR); UPD(0x0C06A714u, 2);  /* 0C06A712 sts.l pr,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06A714 add #imm,Rn */
	r14 = r15;  /* 0C06A716 mov Rm,Rn */
	r11 = 0xC2175E8u; UPD(0x0C06A71Au, 3);  /* 0C06A718 mov.l @(disp,pc),Rn */
	r12 = 0xC393044u; UPD(0x0C06A71Cu, 1);  /* 0C06A71A mov.l @(disp,pc),Rn */
	W32(r14, r13); UPD(0x0C06A71Eu, 1);  /* 0C06A71C mov.l Rm,@Rn */
L_0C06A71E: BLKS(0x0C06A71Eu);
	r0 = 0xC217A04u; UPD(0x0C06A720u, 1);  /* 0C06A71E mov.l @(disp,pc),Rn */
	r9 = 0x7Fu;  /* 0C06A720 mov #imm,Rn */
	r8 = R32(r14); UPD(0x0C06A724u, 2);  /* 0C06A722 mov.l @Rm,Rn */
	r8 += r0;  /* 0C06A724 add Rm,Rn */
	r0 = 0x27B0u; UPD(0x0C06A728u, 2);  /* 0C06A726 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C06A728 add Rm,Rn */
	IF(0x0C06A72Au); ;  /* 0C06A72A nop */
	UPD(0x0C06A72Cu, 2);
L_0C06A72C: BLKS(0x0C06A72Cu);
	r1 = R32(r8); UPD(0x0C06A72Eu, 1);  /* 0C06A72C mov.l @Rm,Rn */
	r3 = 0x40000000u; UPD(0x0C06A730u, 1);  /* 0C06A72E mov.l @(disp,pc),Rn */
	T = (r1 & r3) == 0;  /* 0C06A730 tst Rm,Rn */
	{ u32 c_ = T; r3 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06A744u, 4); goto L_0C06A744; } goto L_0C06A736; }  /* 0C06A732 bt/s */
L_0C06A736: BLKS(0x0C06A736u);
	r8 += 0x4Au;  /* 0C06A736 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C06A73Au, 3);  /* 0C06A738 mov.b @Rm,Rn */
	r2 = r4 & 0xFF;  /* 0C06A73A extu.b Rm,Rn */
	T = r2 == r10;  /* 0C06A73C cmp/eq Rm,Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFB6u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06A780u, 5); goto L_0C06A780; } UPD(0x0C06A742u, 1); goto L_0C06A742; }  /* 0C06A73E bt/s */
L_0C06A742: BLKS(0x0C06A742u);
	r3 = r9;  /* 0C06A742 mov Rm,Rn */
	UPD(0x0C06A744u, 1);
L_0C06A744: BLKS(0x0C06A744u);
	r3 += 0xFFFFFFFFu;  /* 0C06A744 add #imm,Rn */
	r9 = (u32)(s32)(s16)r3;  /* 0C06A746 exts.w Rm,Rn */
	IF(0x0C06A748u); T = (s32)r9 >= 0;  /* 0C06A748 cmp/pz Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06A72Cu, 6); goto L_0C06A72C; } goto L_0C06A74E; }  /* 0C06A74A bt/s */
L_0C06A74E: BLKS(0x0C06A74Eu);
	r9 = r13;  /* 0C06A74E mov Rm,Rn */
	r13 = R32(r14); UPD(0x0C06A752u, 3);  /* 0C06A750 mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C06A752 add #imm,Rn */
	r1 = 0x2800u; UPD(0x0C06A756u, 2);  /* 0C06A754 mov.w @(disp,pc),Rn */
	r8 = 0x1u;  /* 0C06A756 mov #imm,Rn */
	r13 += r1;  /* 0C06A758 add Rm,Rn */
	W32(r14, r13); UPD(0x0C06A75Cu, 3);  /* 0C06A75A mov.l Rm,@Rn */
	r13 = (u32)(s32)(s16)r9;  /* 0C06A75C exts.w Rm,Rn */
	T = (s32)r13 > (s32)r8;  /* 0C06A75E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06A71Eu, 5); goto L_0C06A71E; }  /* 0C06A760 bf */
L_0C06A762: BLKS(0x0C06A762u);
	r14 += 0x4u;  /* 0C06A762 add #imm,Rn */
	r15 = r14;  /* 0C06A764 mov Rm,Rn */
	IF(0x0C06A766u); PR = R32(r15); r15 += 4; UPD(0x0C06A768u, 3);  /* 0C06A766 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06A76Au, 1);  /* 0C06A768 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06A76Cu, 1);  /* 0C06A76A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06A76Eu, 1);  /* 0C06A76C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06A770u, 1);  /* 0C06A76E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06A772u, 1);  /* 0C06A770 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06A774u, 1);  /* 0C06A772 mov.l @Rm+,Rn */
	IF(0x0C06A774u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06A774 rts */
L_0C06A780: BLKS(0x0C06A780u);
	r7 = R32(r8 + 0x18u); UPD(0x0C06A782u, 1);  /* 0C06A780 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06A782 add #imm,Rn */
	W32(r11, r7); UPD(0x0C06A786u, 2);  /* 0C06A784 mov.l Rm,@Rn */
	r5 = 0x0u;  /* 0C06A786 mov #imm,Rn */
	r6 = R32(r8 + 0x20u); UPD(0x0C06A78Au, 2);  /* 0C06A788 mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C06A78A mov Rm,Rn */
	W32(r15, r5); UPD(0x0C06A78Eu, 2);  /* 0C06A78C mov.l Rm,@Rn */
	r0 += 0x40u;  /* 0C06A78E add #imm,Rn */
	W32(r12, r6); UPD(0x0C06A792u, 2);  /* 0C06A790 mov.l Rm,@Rn */
	r7 = R32(r0); UPD(0x0C06A794u, 1);  /* 0C06A792 mov.l @Rm,Rn */
	r0 = 0xC062A70u; UPD(0x0C06A796u, 1);  /* 0C06A794 mov.l @(disp,pc),Rn */
	r4 = R32(r8 + 0x3Cu); UPD(0x0C06A798u, 1);  /* 0C06A796 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C06A79Au, 1);  /* 0C06A798 mov.l @(disp,Rm),Rn */
	IF(0x0C06A79Au); { u32 t_ = r0; PR = 0x0C06A79Eu; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C06A79Eu); }  /* 0C06A79A jsr @Rn */
L_0C06A79E: BLKS(0x0C06A79Eu);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C06A742u, 3); goto L_0C06A742; }  /* 0C06A79E bra */
}

/* FUN_0c06a7c0 */
void f_0C06A7C0(sh3_t *c)
{
	LOCALS;
L_0C06A7C0: BLKS(0x0C06A7C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06A7C2u, 1);  /* 0C06A7C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06A7C4u, 1);  /* 0C06A7C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06A7C6u, 1);  /* 0C06A7C4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06A7C8u, 1);  /* 0C06A7C6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06A7CAu, 1);  /* 0C06A7C8 mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C06A7CA mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06A7CEu, 2);  /* 0C06A7CC mov.l Rm,@-Rn */
	r12 = 0x0u;  /* 0C06A7CE mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A7D2u, 2);  /* 0C06A7D0 mov.l Rm,@-Rn */
	r13 = 0xC1743CCu; UPD(0x0C06A7D4u, 1);  /* 0C06A7D2 mov.l @(disp,pc),Rn */
	IF(0x0C06A7D4u); r15 -= 4; W32(r15, PR); UPD(0x0C06A7D6u, 1);  /* 0C06A7D4 sts.l pr,@-Rn */
	r14 = r15;  /* 0C06A7D6 mov Rm,Rn */
	UPD(0x0C06A7D8u, 1);
L_0C06A7D8: BLKS(0x0C06A7D8u);
	r3 = 0xC2179FAu; UPD(0x0C06A7DAu, 1);  /* 0C06A7D8 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C06A7DA mov Rm,Rn */
	r0 += r0;  /* 0C06A7DC add Rm,Rn */
	r2 = 0x0u;  /* 0C06A7DE mov #imm,Rn */
	r8 = 0xC217A04u; UPD(0x0C06A7E2u, 4);  /* 0C06A7E0 mov.l @(disp,pc),Rn */
	r10 = r0;  /* 0C06A7E2 mov Rm,Rn */
	IF(0x0C06A7E4u); W16(r0 + r3, r2); UPD(0x0C06A7E6u, 2);  /* 0C06A7E4 mov.w Rm,@(r0,Rn) */
	r9 = 0x0u;  /* 0C06A7E6 mov #imm,Rn */
	r10 += r3;  /* 0C06A7E8 add Rm,Rn */
	r8 += r12;  /* 0C06A7EA add Rm,Rn */
	UPD(0x0C06A7ECu, 3);
L_0C06A7EC: BLKS(0x0C06A7ECu);
	r0 = R32(r8); UPD(0x0C06A7EEu, 1);  /* 0C06A7EC mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06A7EE tst Rm,Rn */
	if (!T) { UPD(0x0C06A830u, 4); goto L_0C06A830; }  /* 0C06A7F0 bf */
L_0C06A7F2: BLKS(0x0C06A7F2u);
	r6 = r9;  /* 0C06A7F2 mov Rm,Rn */
	UPD(0x0C06A7F4u, 1);
L_0C06A7F4: BLKS(0x0C06A7F4u);
	r6 += 0x1u;  /* 0C06A7F4 add #imm,Rn */
	r9 = (u32)(s32)(s16)r6;  /* 0C06A7F6 exts.w Rm,Rn */
	r5 = 0x7Fu;  /* 0C06A7F8 mov #imm,Rn */
	T = (s32)r9 > (s32)r5;  /* 0C06A7FA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x50u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06A7ECu, 7); goto L_0C06A7EC; } goto L_0C06A800; }  /* 0C06A7FC bf/s */
L_0C06A800: BLKS(0x0C06A800u);
	r8 = r11;  /* 0C06A800 mov Rm,Rn */
	r8 += 0x1u;  /* 0C06A802 add #imm,Rn */
	r1 = 0x2800u; UPD(0x0C06A806u, 4);  /* 0C06A804 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r8;  /* 0C06A806 exts.w Rm,Rn */
	r7 = 0x1u;  /* 0C06A808 mov #imm,Rn */
	T = (s32)r11 > (s32)r7;  /* 0C06A80A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 += r1; /* slot add Rm,Rn */ if (c_) { UPD(0x0C06A7D8u, 6); goto L_0C06A7D8; } goto L_0C06A810; }  /* 0C06A80C bf/s */
L_0C06A810: BLKS(0x0C06A810u);
	r15 = r14;  /* 0C06A810 mov Rm,Rn */
	IF(0x0C06A812u); PR = R32(r15); r15 += 4; UPD(0x0C06A814u, 3);  /* 0C06A812 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06A816u, 1);  /* 0C06A814 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06A818u, 1);  /* 0C06A816 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06A81Au, 1);  /* 0C06A818 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06A81Cu, 1);  /* 0C06A81A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06A81Eu, 1);  /* 0C06A81C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06A820u, 1);  /* 0C06A81E mov.l @Rm+,Rn */
	IF(0x0C06A820u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06A820 rts */
L_0C06A830: BLKS(0x0C06A830u);
	r0 = R32(r8 + 0x4u); UPD(0x0C06A832u, 1);  /* 0C06A830 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C06A832 mov Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C06A836u, 2);  /* 0C06A834 mov.w @Rm,Rn */
	IF(0x0C06A836u); r0 <<= 2;  /* 0C06A836 shll2 Rn */
	r4 += 0x1u;  /* 0C06A838 add #imm,Rn */
	IF(0x0C06A83Au); r3 = R32(r0 + r13); UPD(0x0C06A83Cu, 3);  /* 0C06A83A mov.l @(r0,Rm),Rn */
	W16(r10, r4); UPD(0x0C06A83Eu, 1);  /* 0C06A83C mov.w Rm,@Rn */
	IF(0x0C06A83Eu); { u32 t_ = r3; PR = 0x0C06A842u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C06A842u); }  /* 0C06A83E jsr @Rn */
L_0C06A842: BLKS(0x0C06A842u);
	{ r6 = r9; /* slot mov Rm,Rn */ UPD(0x0C06A7F4u, 3); goto L_0C06A7F4; }  /* 0C06A842 bra */
}

/* FUN_0c06a860 */
void f_0C06A860(sh3_t *c)
{
	LOCALS;
L_0C06A860: BLKS(0x0C06A860u);
	r0 = 0x2800u; UPD(0x0C06A862u, 1);  /* 0C06A860 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C06A862 exts.w Rm,Rn */
	IF(0x0C06A864u); MACL = r4 * r0;  /* 0C06A864 mul.l Rm,Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C06A866 exts.w Rm,Rn */
	r3 = 0x50u;  /* 0C06A868 mov #imm,Rn */
	IF(0x0C06A86Au); r0 = MACL;  /* 0C06A86A sts macl,Rn */
	IF(0x0C06A86Cu); MACL = r5 * r3;  /* 0C06A86C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A870u, 9);  /* 0C06A86E mov.l Rm,@-Rn */
	r6 = (u32)(s32)(s16)r6;  /* 0C06A870 exts.w Rm,Rn */
	IF(0x0C06A872u); r2 = MACL;  /* 0C06A872 sts macl,Rn */
	r7 = 0xC217A04u; UPD(0x0C06A876u, 3);  /* 0C06A874 mov.l @(disp,pc),Rn */
	r0 += r2;  /* 0C06A876 add Rm,Rn */
	IF(0x0C06A878u); r15 -= 4; W32(r15, PR); UPD(0x0C06A87Au, 2);  /* 0C06A878 sts.l pr,@-Rn */
	r7 += r0;  /* 0C06A87A add Rm,Rn */
	r0 = R32(r7 + 0x4u); UPD(0x0C06A87Eu, 2);  /* 0C06A87C mov.l @(disp,Rm),Rn */
	r3 = 0xC1743FCu; UPD(0x0C06A880u, 1);  /* 0C06A87E mov.l @(disp,pc),Rn */
	IF(0x0C06A880u); r0 <<= 2;  /* 0C06A880 shll2 Rn */
	IF(0x0C06A882u); r2 = R32(r0 + r3); UPD(0x0C06A884u, 2);  /* 0C06A882 mov.l @(r0,Rm),Rn */
	IF(0x0C06A884u); { u32 t_ = r2; PR = 0x0C06A888u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C06A888u); }  /* 0C06A884 jsr @Rn */
L_0C06A888: BLKS(0x0C06A888u);
	r15 = r14;  /* 0C06A888 mov Rm,Rn */
	IF(0x0C06A88Au); PR = R32(r15); r15 += 4; UPD(0x0C06A88Cu, 2);  /* 0C06A88A lds.l @Rn+,pr */
	IF(0x0C06A88Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06A88C rts */
}


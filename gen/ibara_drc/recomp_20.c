#include "recomp.h"
#include "recomp_funcs.h"

/* FUN_0c0ac6a0 */
void f_0C0AC6A0(sh3_t *c)
{
	LOCALS;
L_0C0AC6A0: BLKS(0x0C0AC6A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC6A2u, 1);  /* 0C0AC6A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC6A4u, 1);  /* 0C0AC6A2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC6A6u, 1);  /* 0C0AC6A4 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C0AC6A6 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC6AAu, 2);  /* 0C0AC6A8 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C0AC6AA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC6AEu, 2);  /* 0C0AC6AC mov.l Rm,@-Rn */
	r11 = r6;  /* 0C0AC6AE mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC6B2u, 2);  /* 0C0AC6B0 mov.l Rm,@-Rn */
	r12 = r5;  /* 0C0AC6B2 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC6B6u, 2);  /* 0C0AC6B4 mov.l Rm,@-Rn */
	IF(0x0C0AC6B6u); r12 <<= 2;  /* 0C0AC6B6 shll2 Rn */
	IF(0x0C0AC6B8u); r15 -= 4; W32(r15, PR); UPD(0x0C0AC6BAu, 2);  /* 0C0AC6B8 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AC6BA add #imm,Rn */
	r14 = r15;  /* 0C0AC6BC mov Rm,Rn */
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0AC6C0u, 3);  /* 0C0AC6BE mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x28u); UPD(0x0C0AC6C2u, 1);  /* 0C0AC6C0 mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0AC6C2 exts.b Rm,Rn */
	r3 = (u32)(s32)(s8)r4;  /* 0C0AC6C4 exts.b Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0AC6C8u, 3);  /* 0C0AC6C6 mov.l Rm,@(disp,Rn) */
	r2 = 0xC1EEBA4u; UPD(0x0C0AC6CAu, 1);  /* 0C0AC6C8 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0AC6CA mov Rm,Rn */
	W32(r14, r3); UPD(0x0C0AC6CEu, 2);  /* 0C0AC6CC mov.l Rm,@Rn */
	IF(0x0C0AC6CEu); r3 = R32(r0 + r2); UPD(0x0C0AC6D0u, 1);  /* 0C0AC6CE mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0AC6D2u, 1);  /* 0C0AC6D0 mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0AC6D2 add Rm,Rn */
	IF(0x0C0AC6D4u); T = (s32)r2 >= 0;  /* 0C0AC6D4 cmp/pz Rn */
	{ u32 c_ = !T; r13 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AC7C0u, 5); goto L_0C0AC7C0; } UPD(0x0C0AC6DAu, 1); goto L_0C0AC6DA; }  /* 0C0AC6D6 bf/s */
L_0C0AC6DA: BLKS(0x0C0AC6DAu);
	r5 = 0xA00000u; UPD(0x0C0AC6DCu, 1);  /* 0C0AC6DA mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0AC6DC add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0AC6DE cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC6FCu, 5); goto L_0C0AC6FC; } goto L_0C0AC6E4; }  /* 0C0AC6E0 bt/s */
L_0C0AC6E4: BLKS(0x0C0AC6E4u);
	r8 = 0xC3929E0u; UPD(0x0C0AC6E6u, 2);  /* 0C0AC6E4 mov.l @(disp,pc),Rn */
	r2 = r13;  /* 0C0AC6E6 mov Rm,Rn */
	r7 = R32(r8); UPD(0x0C0AC6EAu, 2);  /* 0C0AC6E8 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0AC6ECu, 1);  /* 0C0AC6EA mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0AC6EC sub Rm,Rn */
	r2 += r6;  /* 0C0AC6EE add Rm,Rn */
	IF(0x0C0AC6F0u); T = (s32)r2 >= 0;  /* 0C0AC6F0 cmp/pz Rn */
	if (!T) { UPD(0x0C0AC7B0u, 6); goto L_0C0AC7B0; }  /* 0C0AC6F2 bf */
L_0C0AC6F4: BLKS(0x0C0AC6F4u);
	r0 = 0x780000u; UPD(0x0C0AC6F6u, 1);  /* 0C0AC6F4 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0AC6F6 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0AC6F8 cmp/ge Rm,Rn */
	IF(0x0C0AC6FAu); r1 = T;  /* 0C0AC6FA movt Rn */
	UPD(0x0C0AC6FCu, 3);
L_0C0AC6FC: BLKS(0x0C0AC6FCu);
	r8 = (u32)(s32)(s16)r1;  /* 0C0AC6FC exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0AC6FE tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC720u, 5); goto L_0C0AC720; } UPD(0x0C0AC704u, 1); goto L_0C0AC704; }  /* 0C0AC700 bt/s */
L_0C0AC704: BLKS(0x0C0AC704u);
	r14 += 0x8u;  /* 0C0AC704 add #imm,Rn */
	UPD(0x0C0AC706u, 1);
L_0C0AC706: BLKS(0x0C0AC706u);
	r15 = r14;  /* 0C0AC706 mov Rm,Rn */
	IF(0x0C0AC708u); PR = R32(r15); r15 += 4; UPD(0x0C0AC70Au, 2);  /* 0C0AC708 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC70Cu, 1);  /* 0C0AC70A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AC70Eu, 1);  /* 0C0AC70C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AC710u, 1);  /* 0C0AC70E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AC712u, 1);  /* 0C0AC710 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AC714u, 1);  /* 0C0AC712 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC716u, 1);  /* 0C0AC714 mov.l @Rm+,Rn */
	IF(0x0C0AC716u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC716 rts */
L_0C0AC720: BLKS(0x0C0AC720u);
	r0 = 0xC0AA550u; UPD(0x0C0AC722u, 1);  /* 0C0AC720 mov.l @(disp,pc),Rn */
	IF(0x0C0AC722u); { u32 t_ = r0; PR = 0x0C0AC726u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0AC726u); }  /* 0C0AC722 jsr @Rn */
L_0C0AC726: BLKS(0x0C0AC726u);
	T = (r0 & r0) == 0;  /* 0C0AC726 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC704u, 4); goto L_0C0AC704; } goto L_0C0AC72C; }  /* 0C0AC728 bt/s */
L_0C0AC72C: BLKS(0x0C0AC72Cu);
	r7 = 0xC2755BCu; UPD(0x0C0AC72Eu, 2);  /* 0C0AC72C mov.l @(disp,pc),Rn */
	r3 = 0x38u;  /* 0C0AC72E mov #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0AC732u, 2);  /* 0C0AC730 mov.w @Rm,Rn */
	r4 = 0x10u;  /* 0C0AC732 mov #imm,Rn */
	IF(0x0C0AC734u); MACL = r6 * r3;  /* 0C0AC734 mul.l Rm,Rn */
	r5 = 0xC275E1Cu; UPD(0x0C0AC738u, 4);  /* 0C0AC736 mov.l @(disp,pc),Rn */
	r10 &= r4;  /* 0C0AC738 and Rm,Rn */
	r2 = 0xC0000000u; UPD(0x0C0AC73Cu, 2);  /* 0C0AC73A mov.l @(disp,pc),Rn */
	IF(0x0C0AC73Cu); r3 = MACL;  /* 0C0AC73C sts macl,Rn */
	r7 = R32(r14 + 0x30u); UPD(0x0C0AC740u, 2);  /* 0C0AC73E mov.l @(disp,Rm),Rn */
	r3 += r5;  /* 0C0AC740 add Rm,Rn */
	r6 = R32(r14 + 0x34u); UPD(0x0C0AC744u, 2);  /* 0C0AC742 mov.l @(disp,Rm),Rn */
	r2 |= r10;  /* 0C0AC744 or Rm,Rn */
	r0 = 0x2u;  /* 0C0AC746 mov #imm,Rn */
	W32(r3 + 0x4u, r9); UPD(0x0C0AC74Au, 3);  /* 0C0AC748 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x8u, r0); UPD(0x0C0AC74Cu, 1);  /* 0C0AC74A mov.l Rm,@(disp,Rn) */
	r9 += r9;  /* 0C0AC74C add Rm,Rn */
	W32(r3 + 0x10u, r11); UPD(0x0C0AC750u, 2);  /* 0C0AC74E mov.l Rm,@(disp,Rn) */
	r0 = 0x3u;  /* 0C0AC750 mov #imm,Rn */
	W32(r3 + 0x14u, r13); UPD(0x0C0AC754u, 2);  /* 0C0AC752 mov.l Rm,@(disp,Rn) */
	W32(r3, r2); UPD(0x0C0AC756u, 1);  /* 0C0AC754 mov.l Rm,@Rn */
	W32(r3 + 0xCu, r8); UPD(0x0C0AC758u, 1);  /* 0C0AC756 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x18u, r7); UPD(0x0C0AC75Au, 1);  /* 0C0AC758 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r6); UPD(0x0C0AC75Cu, 1);  /* 0C0AC75A mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0AC75C add #imm,Rn */
	W8(r3, r8); UPD(0x0C0AC760u, 2);  /* 0C0AC75E mov.b Rm,@Rn */
	IF(0x0C0AC760u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AC762u, 1);  /* 0C0AC760 mov.b @(r0,Rm),Rn */
	r3 += 0x4u;  /* 0C0AC762 add #imm,Rn */
	W8(r3, r1); UPD(0x0C0AC766u, 2);  /* 0C0AC764 mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0AC766 mov #imm,Rn */
	IF(0x0C0AC768u); r5 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AC76Au, 2);  /* 0C0AC768 mov.b @(r0,Rm),Rn */
	r4 = 0xC1EED0Cu; UPD(0x0C0AC76Cu, 1);  /* 0C0AC76A mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0AC76C mov Rm,Rn */
	{ u32 v_ = r5; r3 -= 1; W8(r3, v_); } UPD(0x0C0AC770u, 2);  /* 0C0AC76E mov.b Rm,@-Rn */
	r12 = 0xC0AFE40u; UPD(0x0C0AC772u, 1);  /* 0C0AC770 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0AC772 add #imm,Rn */
	IF(0x0C0AC774u); r2 = R32(r0 + r4); UPD(0x0C0AC776u, 2);  /* 0C0AC774 mov.l @(r0,Rm),Rn */
	r13 = 0x808080u; UPD(0x0C0AC778u, 1);  /* 0C0AC776 mov.l @(disp,pc),Rn */
	r11 = 0xC1EEBF4u; UPD(0x0C0AC77Au, 1);  /* 0C0AC778 mov.l @(disp,pc),Rn */
	W32(r3 + 0x28u, r2); UPD(0x0C0AC77Cu, 1);  /* 0C0AC77A mov.l Rm,@(disp,Rn) */
	r11 += r9;  /* 0C0AC77C add Rm,Rn */
	IF(0x0C0AC77Eu); { u32 t_ = r12; PR = 0x0C0AC782u; W32(r3 + 0x2Cu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AC782u); }  /* 0C0AC77E jsr @Rn */
L_0C0AC782: BLKS(0x0C0AC782u);
	r0 &= 0x1u;  /* 0C0AC782 and #imm,r0 */
	IF(0x0C0AC784u); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0AC786u, 2);  /* 0C0AC784 mov.b @(r0,Rm),Rn */
	r9 = 0x3Fu;  /* 0C0AC786 mov #imm,Rn */
	r4 = r10 & 0xFF;  /* 0C0AC788 extu.b Rm,Rn */
	T = r4 > r9;  /* 0C0AC78A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0AC7A0u, 6); goto L_0C0AC7A0; }  /* 0C0AC78C bt */
L_0C0AC78E: BLKS(0x0C0AC78Eu);
	r0 = 0x1u;  /* 0C0AC78E mov #imm,Rn */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0AC706u, 4); goto L_0C0AC706; }  /* 0C0AC790 bra */
L_0C0AC7A0: BLKS(0x0C0AC7A0u);
	r8 = 0xC0AFC10u; UPD(0x0C0AC7A2u, 1);  /* 0C0AC7A0 mov.l @(disp,pc),Rn */
	IF(0x0C0AC7A2u); { u32 t_ = r8; PR = 0x0C0AC7A6u; IF(0x0C0AC7A4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0AC7A6u); }  /* 0C0AC7A2 jsr @Rn */
L_0C0AC7A6: BLKS(0x0C0AC7A6u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AC704u, 3); goto L_0C0AC704; }  /* 0C0AC7A6 bra */
L_0C0AC7B0: BLKS(0x0C0AC7B0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AC6F4u, 3); goto L_0C0AC6F4; }  /* 0C0AC7B0 bra */
L_0C0AC7C0: BLKS(0x0C0AC7C0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AC6DAu, 3); goto L_0C0AC6DA; }  /* 0C0AC7C0 bra */
}

/* FUN_0c0ac800 */
void f_0C0AC800(sh3_t *c)
{
	LOCALS;
L_0C0AC800: BLKS(0x0C0AC800u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC802u, 1);  /* 0C0AC800 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC804u, 1);  /* 0C0AC802 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC806u, 1);  /* 0C0AC804 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC808u, 1);  /* 0C0AC806 mov.l Rm,@-Rn */
	r10 = r5;  /* 0C0AC808 mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC80Cu, 2);  /* 0C0AC80A mov.l Rm,@-Rn */
	r11 = r6;  /* 0C0AC80C mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC810u, 2);  /* 0C0AC80E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC812u, 1);  /* 0C0AC810 mov.l Rm,@-Rn */
	r13 = r4;  /* 0C0AC812 mov Rm,Rn */
	IF(0x0C0AC814u); r15 -= 4; W32(r15, PR); UPD(0x0C0AC816u, 2);  /* 0C0AC814 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AC816 add #imm,Rn */
	r14 = r15;  /* 0C0AC818 mov Rm,Rn */
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0AC81Cu, 3);  /* 0C0AC81A mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x28u); UPD(0x0C0AC81Eu, 1);  /* 0C0AC81C mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0AC81E exts.b Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0AC822u, 2);  /* 0C0AC820 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)r4;  /* 0C0AC822 exts.b Rm,Rn */
	r2 = 0xC1EEBA4u; UPD(0x0C0AC826u, 2);  /* 0C0AC824 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0AC826 mov Rm,Rn */
	W32(r14, r3); UPD(0x0C0AC82Au, 2);  /* 0C0AC828 mov.l Rm,@Rn */
	IF(0x0C0AC82Au); r0 <<= 2;  /* 0C0AC82A shll2 Rn */
	IF(0x0C0AC82Cu); r3 = R32(r0 + r2); UPD(0x0C0AC82Eu, 2);  /* 0C0AC82C mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0AC830u, 1);  /* 0C0AC82E mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0AC830 add Rm,Rn */
	IF(0x0C0AC832u); T = (s32)r2 >= 0;  /* 0C0AC832 cmp/pz Rn */
	{ u32 c_ = !T; r12 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AC920u, 5); goto L_0C0AC920; } UPD(0x0C0AC838u, 1); goto L_0C0AC838; }  /* 0C0AC834 bf/s */
L_0C0AC838: BLKS(0x0C0AC838u);
	r5 = 0xA00000u; UPD(0x0C0AC83Au, 1);  /* 0C0AC838 mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0AC83A add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0AC83C cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC85Au, 5); goto L_0C0AC85A; } goto L_0C0AC842; }  /* 0C0AC83E bt/s */
L_0C0AC842: BLKS(0x0C0AC842u);
	r8 = 0xC3929E0u; UPD(0x0C0AC844u, 2);  /* 0C0AC842 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0AC844 mov Rm,Rn */
	r7 = R32(r8); UPD(0x0C0AC848u, 2);  /* 0C0AC846 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0AC84Au, 1);  /* 0C0AC848 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0AC84A sub Rm,Rn */
	r2 += r6;  /* 0C0AC84C add Rm,Rn */
	IF(0x0C0AC84Eu); T = (s32)r2 >= 0;  /* 0C0AC84E cmp/pz Rn */
	if (!T) { UPD(0x0C0AC910u, 6); goto L_0C0AC910; }  /* 0C0AC850 bf */
L_0C0AC852: BLKS(0x0C0AC852u);
	r9 = 0x780000u; UPD(0x0C0AC854u, 1);  /* 0C0AC852 mov.l @(disp,pc),Rn */
	r3 += r9;  /* 0C0AC854 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0AC856 cmp/ge Rm,Rn */
	IF(0x0C0AC858u); r1 = T;  /* 0C0AC858 movt Rn */
	UPD(0x0C0AC85Au, 3);
L_0C0AC85A: BLKS(0x0C0AC85Au);
	r9 = (u32)(s32)(s16)r1;  /* 0C0AC85A exts.w Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0AC85C tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC880u, 5); goto L_0C0AC880; } UPD(0x0C0AC862u, 1); goto L_0C0AC862; }  /* 0C0AC85E bt/s */
L_0C0AC862: BLKS(0x0C0AC862u);
	r14 += 0x8u;  /* 0C0AC862 add #imm,Rn */
	r15 = r14;  /* 0C0AC864 mov Rm,Rn */
	IF(0x0C0AC866u); PR = R32(r15); r15 += 4; UPD(0x0C0AC868u, 3);  /* 0C0AC866 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC86Au, 1);  /* 0C0AC868 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AC86Cu, 1);  /* 0C0AC86A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AC86Eu, 1);  /* 0C0AC86C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AC870u, 1);  /* 0C0AC86E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AC872u, 1);  /* 0C0AC870 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC874u, 1);  /* 0C0AC872 mov.l @Rm+,Rn */
	IF(0x0C0AC874u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC874 rts */
L_0C0AC880: BLKS(0x0C0AC880u);
	r8 = 0xC0AB240u; UPD(0x0C0AC882u, 1);  /* 0C0AC880 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AC882 add #imm,Rn */
	r2 = R32(r14); UPD(0x0C0AC886u, 2);  /* 0C0AC884 mov.l @Rm,Rn */
	r4 = r13;  /* 0C0AC886 mov Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C0AC88Au, 2);  /* 0C0AC888 mov.l @(disp,Rm),Rn */
	r5 = r10;  /* 0C0AC88A mov Rm,Rn */
	W32(r15, r2); UPD(0x0C0AC88Eu, 2);  /* 0C0AC88C mov.l Rm,@Rn */
	r6 = r11;  /* 0C0AC88E mov Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AC892u, 2);  /* 0C0AC890 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC892u); { u32 t_ = r8; PR = 0x0C0AC896u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0AC896u); }  /* 0C0AC892 jsr @Rn */
L_0C0AC896: BLKS(0x0C0AC896u);
	r8 = 0xC0AA550u; UPD(0x0C0AC898u, 1);  /* 0C0AC896 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0AC898 add #imm,Rn */
	IF(0x0C0AC89Au); { u32 t_ = r8; PR = 0x0C0AC89Eu; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0AC89Eu); }  /* 0C0AC89A jsr @Rn */
L_0C0AC89E: BLKS(0x0C0AC89Eu);
	T = (r0 & r0) == 0;  /* 0C0AC89E tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AC862u, 4); goto L_0C0AC862; } goto L_0C0AC8A4; }  /* 0C0AC8A0 bt/s */
L_0C0AC8A4: BLKS(0x0C0AC8A4u);
	r8 = 0xC2755BCu; UPD(0x0C0AC8A6u, 2);  /* 0C0AC8A4 mov.l @(disp,pc),Rn */
	r6 = 0x38u;  /* 0C0AC8A6 mov #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C0AC8AAu, 2);  /* 0C0AC8A8 mov.w @Rm,Rn */
	r4 = 0x10u;  /* 0C0AC8AA mov #imm,Rn */
	IF(0x0C0AC8ACu); MACL = r7 * r6;  /* 0C0AC8AC mul.l Rm,Rn */
	r5 = 0xC275E1Cu; UPD(0x0C0AC8B0u, 4);  /* 0C0AC8AE mov.l @(disp,pc),Rn */
	r13 &= r4;  /* 0C0AC8B0 and Rm,Rn */
	IF(0x0C0AC8B2u); r8 = MACL;  /* 0C0AC8B2 sts macl,Rn */
	r3 = 0x80000000u; UPD(0x0C0AC8B6u, 3);  /* 0C0AC8B4 mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C0AC8B6 add Rm,Rn */
	r3 |= r13;  /* 0C0AC8B8 or Rm,Rn */
	W32(r8 + 0x4u, r10); UPD(0x0C0AC8BCu, 3);  /* 0C0AC8BA mov.l Rm,@(disp,Rn) */
	r13 = 0x3u;  /* 0C0AC8BC mov #imm,Rn */
	W32(r8, r3); UPD(0x0C0AC8C0u, 2);  /* 0C0AC8BE mov.l Rm,@Rn */
	r10 = 0xC0AFE40u; UPD(0x0C0AC8C2u, 1);  /* 0C0AC8C0 mov.l @(disp,pc),Rn */
	W32(r8 + 0x10u, r11); UPD(0x0C0AC8C4u, 1);  /* 0C0AC8C2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x14u, r12); UPD(0x0C0AC8C6u, 1);  /* 0C0AC8C4 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r13); UPD(0x0C0AC8C8u, 1);  /* 0C0AC8C6 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r9); UPD(0x0C0AC8CAu, 1);  /* 0C0AC8C8 mov.l Rm,@(disp,Rn) */
	r8 += 0x30u;  /* 0C0AC8CA add #imm,Rn */
	IF(0x0C0AC8CCu); { u32 t_ = r10; PR = 0x0C0AC8D0u; W8(r8, r9); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AC8D0u); }  /* 0C0AC8CC jsr @Rn */
L_0C0AC8D0: BLKS(0x0C0AC8D0u);
	r0 &= 0x7u;  /* 0C0AC8D0 and #imm,r0 */
	r8 += 0x1u;  /* 0C0AC8D2 add #imm,Rn */
	r0 += 0x8u;  /* 0C0AC8D4 add #imm,Rn */
	IF(0x0C0AC8D6u); { u32 t_ = r10; PR = 0x0C0AC8DAu; W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 5); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AC8DAu); }  /* 0C0AC8D6 jsr @Rn */
L_0C0AC8DA: BLKS(0x0C0AC8DAu);
	r0 &= 0xFu;  /* 0C0AC8DA and #imm,r0 */
	r8 += 0x1u;  /* 0C0AC8DC add #imm,Rn */
	r0 += 0x4u;  /* 0C0AC8DE add #imm,Rn */
	W8(r8, r0); UPD(0x0C0AC8E2u, 4);  /* 0C0AC8E0 mov.b Rm,@Rn */
	r0 = 0x3u;  /* 0C0AC8E2 mov #imm,Rn */
	IF(0x0C0AC8E4u); r12 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AC8E6u, 2);  /* 0C0AC8E4 mov.b @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C0AC8E6 add #imm,Rn */
	W8(r8, r12); UPD(0x0C0AC8EAu, 2);  /* 0C0AC8E8 mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0AC8EA mov #imm,Rn */
	IF(0x0C0AC8ECu); r11 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AC8EEu, 2);  /* 0C0AC8EC mov.b @(r0,Rm),Rn */
	IF(0x0C0AC8EEu); { u32 t_ = r10; PR = 0x0C0AC8F2u; { u32 v_ = r11; r8 -= 1; W8(r8, v_); } /* slot mov.b Rm,@-Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AC8F2u); }  /* 0C0AC8EE jsr @Rn */
L_0C0AC8F2: BLKS(0x0C0AC8F2u);
	r8 += 0xFFFFFFCDu;  /* 0C0AC8F2 add #imm,Rn */
	W32(r8 + 0x20u, r0); UPD(0x0C0AC8F6u, 2);  /* 0C0AC8F4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC8F6u); { u32 t_ = r10; PR = 0x0C0AC8FAu; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AC8FAu); }  /* 0C0AC8F6 jsr @Rn */
L_0C0AC8FA: BLKS(0x0C0AC8FAu);
	r0 &= 0x3Fu;  /* 0C0AC8FA and #imm,r0 */
	r0 += 0xFFFFFFE0u;  /* 0C0AC8FC add #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0AC900u, 3);  /* 0C0AC8FE mov.l Rm,@(disp,Rn) */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AC862u, 3); goto L_0C0AC862; }  /* 0C0AC900 bra */
L_0C0AC910: BLKS(0x0C0AC910u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AC852u, 3); goto L_0C0AC852; }  /* 0C0AC910 bra */
L_0C0AC920: BLKS(0x0C0AC920u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AC838u, 3); goto L_0C0AC838; }  /* 0C0AC920 bra */
}

/* FUN_0c0ac960 */
void f_0C0AC960(sh3_t *c)
{
	LOCALS;
L_0C0AC960: BLKS(0x0C0AC960u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC962u, 1);  /* 0C0AC960 mov.l Rm,@-Rn */
	r0 = 0xFFFFFFFCu;  /* 0C0AC962 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC966u, 2);  /* 0C0AC964 mov.l Rm,@-Rn */
	r0 &= r4;  /* 0C0AC966 and Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC96Au, 2);  /* 0C0AC968 mov.l Rm,@-Rn */
	r9 = r4;  /* 0C0AC96A mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC96Eu, 2);  /* 0C0AC96C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC970u, 1);  /* 0C0AC96E mov.l Rm,@-Rn */
	r11 = r5;  /* 0C0AC970 mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC974u, 2);  /* 0C0AC972 mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r7;  /* 0C0AC974 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC978u, 2);  /* 0C0AC976 mov.l Rm,@-Rn */
	r13 = r6;  /* 0C0AC978 mov Rm,Rn */
	IF(0x0C0AC97Au); r15 -= 4; W32(r15, PR); UPD(0x0C0AC97Cu, 2);  /* 0C0AC97A sts.l pr,@-Rn */
	r3 = 0xC1EED54u; UPD(0x0C0AC97Eu, 1);  /* 0C0AC97C mov.l @(disp,pc),Rn */
	IF(0x0C0AC97Eu); r2 = R32(r0 + r3); UPD(0x0C0AC980u, 1);  /* 0C0AC97E mov.l @(r0,Rm),Rn */
	r3 = 0xFF600000u; UPD(0x0C0AC982u, 1);  /* 0C0AC980 mov.l @(disp,pc),Rn */
	r3 += r5;  /* 0C0AC982 add Rm,Rn */
	IF(0x0C0AC984u); T = (s32)r3 >= 0;  /* 0C0AC984 cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0ACA10u, 5); goto L_0C0ACA10; } UPD(0x0C0AC98Au, 1); goto L_0C0AC98A; }  /* 0C0AC986 bf/s */
L_0C0AC98A: BLKS(0x0C0AC98Au);
	r0 = 0xA00000u; UPD(0x0C0AC98Cu, 1);  /* 0C0AC98A mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C0AC98C add Rm,Rn */
	T = (s32)r3 >= (s32)r2;  /* 0C0AC98E cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0AC9A4u, 5); goto L_0C0AC9A4; }  /* 0C0AC990 bt */
L_0C0AC992: BLKS(0x0C0AC992u);
	r3 = 0x4Cu;  /* 0C0AC992 mov #imm,Rn */
	IF(0x0C0AC994u); MACL = r12 * r3;  /* 0C0AC994 mul.l Rm,Rn */
	r2 = 0xC26CAE0u; UPD(0x0C0AC998u, 4);  /* 0C0AC996 mov.l @(disp,pc),Rn */
	IF(0x0C0AC998u); r10 = MACL;  /* 0C0AC998 sts macl,Rn */
	r10 += r2;  /* 0C0AC99A add Rm,Rn */
	r0 = R32(r10); UPD(0x0C0AC99Eu, 3);  /* 0C0AC99C mov.l @Rm,Rn */
	r0 &= 0x10u;  /* 0C0AC99E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0AC9A0 tst Rm,Rn */
	if (!T) { UPD(0x0C0AC9C0u, 5); goto L_0C0AC9C0; }  /* 0C0AC9A2 bf */
L_0C0AC9A4: BLKS(0x0C0AC9A4u);
	r15 = r14;  /* 0C0AC9A4 mov Rm,Rn */
	IF(0x0C0AC9A6u); PR = R32(r15); r15 += 4; UPD(0x0C0AC9A8u, 2);  /* 0C0AC9A6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC9AAu, 1);  /* 0C0AC9A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AC9ACu, 1);  /* 0C0AC9AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AC9AEu, 1);  /* 0C0AC9AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AC9B0u, 1);  /* 0C0AC9AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AC9B2u, 1);  /* 0C0AC9B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC9B4u, 1);  /* 0C0AC9B2 mov.l @Rm+,Rn */
	IF(0x0C0AC9B4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC9B4 rts */
L_0C0AC9C0: BLKS(0x0C0AC9C0u);
	r8 = 0xC0AA790u; UPD(0x0C0AC9C2u, 1);  /* 0C0AC9C0 mov.l @(disp,pc),Rn */
	IF(0x0C0AC9C2u); { u32 t_ = r8; PR = 0x0C0AC9C6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA790, 0x0C0AA790u, 0x0C0AC9C6u); }  /* 0C0AC9C2 jsr @Rn */
L_0C0AC9C6: BLKS(0x0C0AC9C6u);
	T = (r0 & r0) == 0;  /* 0C0AC9C6 tst Rm,Rn */
	if (T) { UPD(0x0C0AC9A4u, 4); goto L_0C0AC9A4; }  /* 0C0AC9C8 bt */
L_0C0AC9CA: BLKS(0x0C0AC9CAu);
	r8 = 0x38u;  /* 0C0AC9CA mov #imm,Rn */
	r5 = 0xC2755BCu; UPD(0x0C0AC9CEu, 2);  /* 0C0AC9CC mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C0AC9D0u, 1);  /* 0C0AC9CE mov.w @Rm,Rn */
	r0 = 0x18u;  /* 0C0AC9D0 mov #imm,Rn */
	IF(0x0C0AC9D2u); MACL = r4 * r8;  /* 0C0AC9D2 mul.l Rm,Rn */
	r3 = 0xC275E1Cu; UPD(0x0C0AC9D6u, 4);  /* 0C0AC9D4 mov.l @(disp,pc),Rn */
	r10 += 0x42u;  /* 0C0AC9D6 add #imm,Rn */
	IF(0x0C0AC9D8u); r8 = MACL;  /* 0C0AC9D8 sts macl,Rn */
	r8 += r3;  /* 0C0AC9DA add Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C0AC9DEu, 4);  /* 0C0AC9DC mov.l Rm,@(disp,Rn) */
	r4 = 0x4u;  /* 0C0AC9DE mov #imm,Rn */
	r0 = 0xC050D70u; UPD(0x0C0AC9E2u, 2);  /* 0C0AC9E0 mov.l @(disp,pc),Rn */
	r2 = 0xC0000010u; UPD(0x0C0AC9E4u, 1);  /* 0C0AC9E2 mov.l @(disp,pc),Rn */
	IF(0x0C0AC9E4u); { u32 t_ = r0; PR = 0x0C0AC9E8u; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AC9E8u); }  /* 0C0AC9E4 jsr @Rn */
L_0C0AC9E8: BLKS(0x0C0AC9E8u);
	r7 = 0x0u;  /* 0C0AC9E8 mov #imm,Rn */
	r9 += r0;  /* 0C0AC9EA add Rm,Rn */
	W32(r8 + 0x8u, r9); UPD(0x0C0AC9EEu, 3);  /* 0C0AC9EC mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r7); UPD(0x0C0AC9F0u, 1);  /* 0C0AC9EE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x10u, r11); UPD(0x0C0AC9F2u, 1);  /* 0C0AC9F0 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x14u, r13); UPD(0x0C0AC9F4u, 1);  /* 0C0AC9F2 mov.l Rm,@(disp,Rn) */
	r8 += 0x30u;  /* 0C0AC9F4 add #imm,Rn */
	W8(r8, r7); UPD(0x0C0AC9F8u, 2);  /* 0C0AC9F6 mov.b Rm,@Rn */
	r8 += 0x4u;  /* 0C0AC9F8 add #imm,Rn */
	W8(r8, r12); UPD(0x0C0AC9FCu, 2);  /* 0C0AC9FA mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r10); UPD(0x0C0AC9FEu, 1);  /* 0C0AC9FC mov.b @Rm,Rn */
	{ u32 v_ = r6; r8 -= 1; W8(r8, v_); } UPD(0x0C0ACA00u, 1);  /* 0C0AC9FE mov.b Rm,@-Rn */
	r5 = 0xFFFFu; UPD(0x0C0ACA02u, 1);  /* 0C0ACA00 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0ACA02 add #imm,Rn */
	r4 = 0x808080u; UPD(0x0C0ACA06u, 2);  /* 0C0ACA04 mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C0ACA08u, 1);  /* 0C0ACA06 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x2Cu, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0AC9A4u, 3); goto L_0C0AC9A4; }  /* 0C0ACA08 bra */
L_0C0ACA10: BLKS(0x0C0ACA10u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C0AC98Au, 3); goto L_0C0AC98A; }  /* 0C0ACA10 bra */
}

/* FUN_0c0aca40 */
void f_0C0ACA40(sh3_t *c)
{
	LOCALS;
L_0C0ACA40: BLKS(0x0C0ACA40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA42u, 1);  /* 0C0ACA40 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA44u, 1);  /* 0C0ACA42 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA46u, 1);  /* 0C0ACA44 mov.l Rm,@-Rn */
	r9 = r4;  /* 0C0ACA46 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA4Au, 2);  /* 0C0ACA48 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA4Cu, 1);  /* 0C0ACA4A mov.l Rm,@-Rn */
	r11 = r5;  /* 0C0ACA4C mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA50u, 2);  /* 0C0ACA4E mov.l Rm,@-Rn */
	r12 = r6;  /* 0C0ACA50 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA54u, 2);  /* 0C0ACA52 mov.l Rm,@-Rn */
	r13 = r7;  /* 0C0ACA54 mov Rm,Rn */
	IF(0x0C0ACA56u); r15 -= 4; W32(r15, PR); UPD(0x0C0ACA58u, 2);  /* 0C0ACA56 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0ACA58 add #imm,Rn */
	r14 = r15;  /* 0C0ACA5A mov Rm,Rn */
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0ACA5Eu, 3);  /* 0C0ACA5C mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x28u); UPD(0x0C0ACA60u, 1);  /* 0C0ACA5E mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0ACA60 exts.b Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0ACA64u, 2);  /* 0C0ACA62 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)r4;  /* 0C0ACA64 exts.b Rm,Rn */
	r2 = 0xC1EED6Cu; UPD(0x0C0ACA68u, 2);  /* 0C0ACA66 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0ACA68 mov Rm,Rn */
	W32(r14, r3); UPD(0x0C0ACA6Cu, 2);  /* 0C0ACA6A mov.l Rm,@Rn */
	IF(0x0C0ACA6Cu); r0 <<= 2;  /* 0C0ACA6C shll2 Rn */
	IF(0x0C0ACA6Eu); r3 = R32(r0 + r2); UPD(0x0C0ACA70u, 2);  /* 0C0ACA6E mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0ACA72u, 1);  /* 0C0ACA70 mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0ACA72 add Rm,Rn */
	IF(0x0C0ACA74u); T = (s32)r2 >= 0;  /* 0C0ACA74 cmp/pz Rn */
	{ u32 c_ = !T; r10 = R32(r14 + 0x38u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0ACB30u, 5); goto L_0C0ACB30; } UPD(0x0C0ACA7Au, 1); goto L_0C0ACA7A; }  /* 0C0ACA76 bf/s */
L_0C0ACA7A: BLKS(0x0C0ACA7Au);
	r5 = 0xA00000u; UPD(0x0C0ACA7Cu, 1);  /* 0C0ACA7A mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0ACA7C add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0ACA7E cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACA9Cu, 5); goto L_0C0ACA9C; } goto L_0C0ACA84; }  /* 0C0ACA80 bt/s */
L_0C0ACA84: BLKS(0x0C0ACA84u);
	r8 = 0xC3929E0u; UPD(0x0C0ACA86u, 2);  /* 0C0ACA84 mov.l @(disp,pc),Rn */
	r2 = r13;  /* 0C0ACA86 mov Rm,Rn */
	r7 = R32(r8); UPD(0x0C0ACA8Au, 2);  /* 0C0ACA88 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0ACA8Cu, 1);  /* 0C0ACA8A mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0ACA8C sub Rm,Rn */
	r2 += r6;  /* 0C0ACA8E add Rm,Rn */
	IF(0x0C0ACA90u); T = (s32)r2 >= 0;  /* 0C0ACA90 cmp/pz Rn */
	if (!T) { UPD(0x0C0ACB20u, 6); goto L_0C0ACB20; }  /* 0C0ACA92 bf */
L_0C0ACA94: BLKS(0x0C0ACA94u);
	r0 = 0x780000u; UPD(0x0C0ACA96u, 1);  /* 0C0ACA94 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0ACA96 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0ACA98 cmp/ge Rm,Rn */
	IF(0x0C0ACA9Au); r1 = T;  /* 0C0ACA9A movt Rn */
	UPD(0x0C0ACA9Cu, 3);
L_0C0ACA9C: BLKS(0x0C0ACA9Cu);
	r8 = (u32)(s32)(s16)r1;  /* 0C0ACA9C exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0ACA9E tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACAC0u, 5); goto L_0C0ACAC0; } UPD(0x0C0ACAA4u, 1); goto L_0C0ACAA4; }  /* 0C0ACAA0 bt/s */
L_0C0ACAA4: BLKS(0x0C0ACAA4u);
	r14 += 0x8u;  /* 0C0ACAA4 add #imm,Rn */
	r15 = r14;  /* 0C0ACAA6 mov Rm,Rn */
	IF(0x0C0ACAA8u); PR = R32(r15); r15 += 4; UPD(0x0C0ACAAAu, 3);  /* 0C0ACAA8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ACAACu, 1);  /* 0C0ACAAA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0ACAAEu, 1);  /* 0C0ACAAC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0ACAB0u, 1);  /* 0C0ACAAE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ACAB2u, 1);  /* 0C0ACAB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ACAB4u, 1);  /* 0C0ACAB2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ACAB6u, 1);  /* 0C0ACAB4 mov.l @Rm+,Rn */
	IF(0x0C0ACAB6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ACAB6 rts */
L_0C0ACAC0: BLKS(0x0C0ACAC0u);
	r0 = 0xC0AA550u; UPD(0x0C0ACAC2u, 1);  /* 0C0ACAC0 mov.l @(disp,pc),Rn */
	IF(0x0C0ACAC2u); { u32 t_ = r0; PR = 0x0C0ACAC6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0ACAC6u); }  /* 0C0ACAC2 jsr @Rn */
L_0C0ACAC6: BLKS(0x0C0ACAC6u);
	T = (r0 & r0) == 0;  /* 0C0ACAC6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACAA4u, 4); goto L_0C0ACAA4; } goto L_0C0ACACC; }  /* 0C0ACAC8 bt/s */
L_0C0ACACC: BLKS(0x0C0ACACCu);
	r2 = 0xC2755BCu; UPD(0x0C0ACACEu, 2);  /* 0C0ACACC mov.l @(disp,pc),Rn */
	r3 = 0x38u;  /* 0C0ACACE mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C0ACAD2u, 2);  /* 0C0ACAD0 mov.w @Rm,Rn */
	r7 = 0x10u;  /* 0C0ACAD2 mov #imm,Rn */
	IF(0x0C0ACAD4u); MACL = r4 * r3;  /* 0C0ACAD4 mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0ACAD8u, 4);  /* 0C0ACAD6 mov.l @(disp,pc),Rn */
	r9 &= r7;  /* 0C0ACAD8 and Rm,Rn */
	r6 = 0xC0000000u; UPD(0x0C0ACADCu, 2);  /* 0C0ACADA mov.l @(disp,pc),Rn */
	IF(0x0C0ACADCu); r3 = MACL;  /* 0C0ACADC sts macl,Rn */
	r4 = R32(r14 + 0x30u); UPD(0x0C0ACAE0u, 2);  /* 0C0ACADE mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C0ACAE0 add Rm,Rn */
	r2 = R32(r14 + 0x34u); UPD(0x0C0ACAE4u, 2);  /* 0C0ACAE2 mov.l @(disp,Rm),Rn */
	r6 |= r9;  /* 0C0ACAE4 or Rm,Rn */
	r5 = 0x15u;  /* 0C0ACAE6 mov #imm,Rn */
	W32(r3 + 0x8u, r11); UPD(0x0C0ACAEAu, 3);  /* 0C0ACAE8 mov.l Rm,@(disp,Rn) */
	r0 = 0x3u;  /* 0C0ACAEA mov #imm,Rn */
	W32(r3 + 0x10u, r12); UPD(0x0C0ACAEEu, 2);  /* 0C0ACAEC mov.l Rm,@(disp,Rn) */
	r9 = 0xFFFFFFFCu;  /* 0C0ACAEE mov #imm,Rn */
	W32(r3 + 0x14u, r13); UPD(0x0C0ACAF2u, 2);  /* 0C0ACAF0 mov.l Rm,@(disp,Rn) */
	W32(r3, r6); UPD(0x0C0ACAF4u, 1);  /* 0C0ACAF2 mov.l Rm,@Rn */
	W32(r3 + 0x4u, r5); UPD(0x0C0ACAF6u, 1);  /* 0C0ACAF4 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0xCu, r8); UPD(0x0C0ACAF8u, 1);  /* 0C0ACAF6 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x18u, r4); UPD(0x0C0ACAFAu, 1);  /* 0C0ACAF8 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r2); UPD(0x0C0ACAFCu, 1);  /* 0C0ACAFA mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0ACAFC add #imm,Rn */
	W8(r3, r8); UPD(0x0C0ACB00u, 2);  /* 0C0ACAFE mov.b Rm,@Rn */
	IF(0x0C0ACB00u); r13 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0ACB02u, 1);  /* 0C0ACB00 mov.b @(r0,Rm),Rn */
	r3 += 0x4u;  /* 0C0ACB02 add #imm,Rn */
	W8(r3, r13); UPD(0x0C0ACB06u, 2);  /* 0C0ACB04 mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0ACB06 mov #imm,Rn */
	IF(0x0C0ACB08u); r12 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0ACB0Au, 2);  /* 0C0ACB08 mov.b @(r0,Rm),Rn */
	{ u32 v_ = r12; r3 -= 1; W8(r3, v_); } UPD(0x0C0ACB0Cu, 1);  /* 0C0ACB0A mov.b Rm,@-Rn */
	r0 = 0x1u;  /* 0C0ACB0C mov #imm,Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0ACB0E add #imm,Rn */
	W32(r3 + 0x2Cu, r10); UPD(0x0C0ACB12u, 3);  /* 0C0ACB10 mov.l Rm,@(disp,Rn) */
	r11 = 0x207C0C0u; UPD(0x0C0ACB14u, 1);  /* 0C0ACB12 mov.l @(disp,pc),Rn */
	IF(0x0C0ACB14u); ARG0(0x4A9Cu); { s32 s_ = (s32)r9; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = (u32)((s32)r10 >> 31); else r10 = (u32)((s32)r10 >> ((~s_ & 31) + 1)); }  /* 0C0ACB14 shad Rm,Rn */
	W32(r3 + 0x28u, r11); UPD(0x0C0ACB18u, 2);  /* 0C0ACB16 mov.l Rm,@(disp,Rn) */
	{ W32(r3 + 0x24u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0ACAA4u, 3); goto L_0C0ACAA4; }  /* 0C0ACB18 bra */
L_0C0ACB20: BLKS(0x0C0ACB20u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ACA94u, 3); goto L_0C0ACA94; }  /* 0C0ACB20 bra */
L_0C0ACB30: BLKS(0x0C0ACB30u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ACA7Au, 3); goto L_0C0ACA7A; }  /* 0C0ACB30 bra */
}

/* FUN_0c0acb60 */
void f_0C0ACB60(sh3_t *c)
{
	LOCALS;
L_0C0ACB60: BLKS(0x0C0ACB60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACB62u, 1);  /* 0C0ACB60 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACB64u, 1);  /* 0C0ACB62 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C0ACB64 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACB68u, 2);  /* 0C0ACB66 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACB6Au, 1);  /* 0C0ACB68 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACB6Cu, 1);  /* 0C0ACB6A mov.l Rm,@-Rn */
	r11 = r5;  /* 0C0ACB6C mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACB70u, 2);  /* 0C0ACB6E mov.l Rm,@-Rn */
	r12 = r6;  /* 0C0ACB70 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACB74u, 2);  /* 0C0ACB72 mov.l Rm,@-Rn */
	IF(0x0C0ACB74u); r15 -= 4; W32(r15, PR); UPD(0x0C0ACB76u, 1);  /* 0C0ACB74 sts.l pr,@-Rn */
	r15 += 0xFFFFFFECu;  /* 0C0ACB76 add #imm,Rn */
	r14 = r15;  /* 0C0ACB78 mov Rm,Rn */
	r2 = R32(r14 + 0x38u); UPD(0x0C0ACB7Cu, 3);  /* 0C0ACB7A mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x34u); UPD(0x0C0ACB7Eu, 1);  /* 0C0ACB7C mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0ACB7E exts.b Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0ACB82u, 2);  /* 0C0ACB80 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)r4;  /* 0C0ACB82 exts.b Rm,Rn */
	r2 = 0xC1EEBA4u; UPD(0x0C0ACB86u, 2);  /* 0C0ACB84 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0ACB86 mov Rm,Rn */
	W32(r14, r3); UPD(0x0C0ACB8Au, 2);  /* 0C0ACB88 mov.l Rm,@Rn */
	IF(0x0C0ACB8Au); r0 <<= 2;  /* 0C0ACB8A shll2 Rn */
	IF(0x0C0ACB8Cu); r3 = R32(r0 + r2); UPD(0x0C0ACB8Eu, 2);  /* 0C0ACB8C mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0ACB90u, 1);  /* 0C0ACB8E mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0ACB90 add Rm,Rn */
	IF(0x0C0ACB92u); T = (s32)r2 >= 0;  /* 0C0ACB92 cmp/pz Rn */
	{ u32 c_ = T; r13 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0ACB9Cu, 5); goto L_0C0ACB9C; } goto L_0C0ACB98; }  /* 0C0ACB94 bt/s */
L_0C0ACB98: BLKS(0x0C0ACB98u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ACCA0u, 4); goto L_0C0ACCA0; }  /* 0C0ACB98 bra */
L_0C0ACB9C: BLKS(0x0C0ACB9Cu);
	r5 = 0xA00000u; UPD(0x0C0ACB9Eu, 1);  /* 0C0ACB9C mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0ACB9E add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0ACBA0 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACBC0u, 5); goto L_0C0ACBC0; } goto L_0C0ACBA6; }  /* 0C0ACBA2 bt/s */
L_0C0ACBA6: BLKS(0x0C0ACBA6u);
	r9 = 0xC3929E0u; UPD(0x0C0ACBA8u, 2);  /* 0C0ACBA6 mov.l @(disp,pc),Rn */
	r2 = r13;  /* 0C0ACBA8 mov Rm,Rn */
	r7 = R32(r9); UPD(0x0C0ACBACu, 2);  /* 0C0ACBAA mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0ACBAEu, 1);  /* 0C0ACBAC mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0ACBAE sub Rm,Rn */
	r2 += r6;  /* 0C0ACBB0 add Rm,Rn */
	IF(0x0C0ACBB2u); T = (s32)r2 >= 0;  /* 0C0ACBB2 cmp/pz Rn */
	if (T) { UPD(0x0C0ACBB8u, 6); goto L_0C0ACBB8; }  /* 0C0ACBB4 bt */
L_0C0ACBB6: BLKS(0x0C0ACBB6u);
	r2 = 0u - r2;  /* 0C0ACBB6 neg Rm,Rn */
	UPD(0x0C0ACBB8u, 1);
L_0C0ACBB8: BLKS(0x0C0ACBB8u);
	r10 = 0x780000u; UPD(0x0C0ACBBAu, 1);  /* 0C0ACBB8 mov.l @(disp,pc),Rn */
	r3 += r10;  /* 0C0ACBBA add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0ACBBC cmp/ge Rm,Rn */
	IF(0x0C0ACBBEu); r1 = T;  /* 0C0ACBBE movt Rn */
	UPD(0x0C0ACBC0u, 3);
L_0C0ACBC0: BLKS(0x0C0ACBC0u);
	r0 = (u32)(s32)(s16)r1;  /* 0C0ACBC0 exts.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0ACBC2 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACBE0u, 5); goto L_0C0ACBE0; } UPD(0x0C0ACBC8u, 1); goto L_0C0ACBC8; }  /* 0C0ACBC4 bt/s */
L_0C0ACBC8: BLKS(0x0C0ACBC8u);
	r14 += 0x14u;  /* 0C0ACBC8 add #imm,Rn */
	UPD(0x0C0ACBCAu, 1);
L_0C0ACBCA: BLKS(0x0C0ACBCAu);
	r15 = r14;  /* 0C0ACBCA mov Rm,Rn */
	IF(0x0C0ACBCCu); PR = R32(r15); r15 += 4; UPD(0x0C0ACBCEu, 2);  /* 0C0ACBCC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ACBD0u, 1);  /* 0C0ACBCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0ACBD2u, 1);  /* 0C0ACBD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0ACBD4u, 1);  /* 0C0ACBD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ACBD6u, 1);  /* 0C0ACBD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ACBD8u, 1);  /* 0C0ACBD6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ACBDAu, 1);  /* 0C0ACBD8 mov.l @Rm+,Rn */
	IF(0x0C0ACBDAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ACBDA rts */
L_0C0ACBE0: BLKS(0x0C0ACBE0u);
	r5 = R32(r14); UPD(0x0C0ACBE2u, 1);  /* 0C0ACBE0 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0ACBE2 add #imm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0ACBE6u, 2);  /* 0C0ACBE4 mov.l @(disp,Rm),Rn */
	r6 = r12;  /* 0C0ACBE6 mov Rm,Rn */
	r10 = 0xC0AB240u; UPD(0x0C0ACBEAu, 2);  /* 0C0ACBE8 mov.l @(disp,pc),Rn */
	r7 = r13;  /* 0C0ACBEA mov Rm,Rn */
	W32(r15, r5); UPD(0x0C0ACBEEu, 2);  /* 0C0ACBEC mov.l Rm,@Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0ACBF0u, 1);  /* 0C0ACBEE mov.l Rm,@(disp,Rn) */
	r5 = r11;  /* 0C0ACBF0 mov Rm,Rn */
	IF(0x0C0ACBF2u); { u32 t_ = r10; PR = 0x0C0ACBF6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0ACBF6u); }  /* 0C0ACBF2 jsr @Rn */
L_0C0ACBF6: BLKS(0x0C0ACBF6u);
	r0 = 0x7u;  /* 0C0ACBF6 mov #imm,Rn */
	r3 = 0xC1EED94u; UPD(0x0C0ACBFAu, 2);  /* 0C0ACBF8 mov.l @(disp,pc),Rn */
	r0 &= r11;  /* 0C0ACBFA and Rm,Rn */
	IF(0x0C0ACBFCu); r0 <<= 2;  /* 0C0ACBFC shll2 Rn */
	r9 = 0xC0AA550u; UPD(0x0C0ACC00u, 3);  /* 0C0ACBFE mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0ACC00 add #imm,Rn */
	r1 = 0xC2755BCu; UPD(0x0C0ACC04u, 2);  /* 0C0ACC02 mov.l @(disp,pc),Rn */
	r4 = 0x20u;  /* 0C0ACC04 mov #imm,Rn */
	IF(0x0C0ACC06u); r2 = R32(r0 + r3); UPD(0x0C0ACC08u, 2);  /* 0C0ACC06 mov.l @(r0,Rm),Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0ACC0Au, 1);  /* 0C0ACC08 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ACC0Au); { u32 t_ = r9; PR = 0x0C0ACC0Eu; W32(r14 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0ACC0Eu); }  /* 0C0ACC0A jsr @Rn */
L_0C0ACC0E: BLKS(0x0C0ACC0Eu);
	T = (r0 & r0) == 0;  /* 0C0ACC0E tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACBC8u, 4); goto L_0C0ACBC8; } goto L_0C0ACC14; }  /* 0C0ACC10 bt/s */
L_0C0ACC14: BLKS(0x0C0ACC14u);
	r0 = r8;  /* 0C0ACC14 mov Rm,Rn */
	r0 &= 0x10u;  /* 0C0ACC16 and #imm,r0 */
	r9 = 0x80u; UPD(0x0C0ACC1Au, 4);  /* 0C0ACC18 mov.w @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0ACC1A mov #imm,Rn */
	W32(r14 + 0x10u, r0); UPD(0x0C0ACC1Eu, 2);  /* 0C0ACC1C mov.l Rm,@(disp,Rn) */
	IF(0x0C0ACC1Eu); ;  /* 0C0ACC1E nop */
	UPD(0x0C0ACC20u, 1);
L_0C0ACC20: BLKS(0x0C0ACC20u);
	r6 = R32(r14 + 0x8u); UPD(0x0C0ACC22u, 1);  /* 0C0ACC20 mov.l @(disp,Rm),Rn */
	r8 = 0x38u;  /* 0C0ACC22 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r5 = v_; } UPD(0x0C0ACC26u, 2);  /* 0C0ACC24 mov.w @Rm+,Rn */
	r2 = 0x0u;  /* 0C0ACC26 mov #imm,Rn */
	IF(0x0C0ACC28u); MACL = r5 * r8;  /* 0C0ACC28 mul.l Rm,Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C0ACC2Cu, 4);  /* 0C0ACC2A mov.l @(disp,Rm),Rn */
	r0 = 0x5u;  /* 0C0ACC2C mov #imm,Rn */
	r7 = 0xC058060u; UPD(0x0C0ACC30u, 2);  /* 0C0ACC2E mov.l @(disp,pc),Rn */
	IF(0x0C0ACC30u); r8 = MACL;  /* 0C0ACC30 sts macl,Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0ACC34u, 2);  /* 0C0ACC32 mov.l @(disp,pc),Rn */
	r3 = 0x80000000u; UPD(0x0C0ACC36u, 1);  /* 0C0ACC34 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0ACC36 add Rm,Rn */
	r3 |= r1;  /* 0C0ACC38 or Rm,Rn */
	W32(r14 + 0x8u, r6); UPD(0x0C0ACC3Cu, 3);  /* 0C0ACC3A mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0ACC3C mov Rm,Rn */
	W32(r8 + 0xCu, r2); UPD(0x0C0ACC40u, 2);  /* 0C0ACC3E mov.l Rm,@(disp,Rn) */
	W32(r8, r3); UPD(0x0C0ACC42u, 1);  /* 0C0ACC40 mov.l Rm,@Rn */
	W32(r8 + 0x20u, r9); UPD(0x0C0ACC44u, 1);  /* 0C0ACC42 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x4u, r11); UPD(0x0C0ACC46u, 1);  /* 0C0ACC44 mov.l Rm,@(disp,Rn) */
	r9 += 0x10u;  /* 0C0ACC46 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0ACC4Au, 2);  /* 0C0ACC48 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ACC4Au); { u32 t_ = r7; PR = 0x0C0ACC4Eu; r5 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0ACC4Eu); }  /* 0C0ACC4A jsr @Rn */
L_0C0ACC4E: BLKS(0x0C0ACC4Eu);
	r6 = 0xC058030u; UPD(0x0C0ACC50u, 1);  /* 0C0ACC4E mov.l @(disp,pc),Rn */
	r0 += r12;  /* 0C0ACC50 add Rm,Rn */
	r4 = R32(r8 + 0x20u); UPD(0x0C0ACC54u, 2);  /* 0C0ACC52 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x10u, r0); UPD(0x0C0ACC56u, 1);  /* 0C0ACC54 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ACC56u); { u32 t_ = r6; PR = 0x0C0ACC5Au; r5 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0ACC5Au); }  /* 0C0ACC56 jsr @Rn */
L_0C0ACC5A: BLKS(0x0C0ACC5Au);
	r0 += r13;  /* 0C0ACC5A add Rm,Rn */
	W32(r8 + 0x14u, r0); UPD(0x0C0ACC5Eu, 2);  /* 0C0ACC5C mov.l Rm,@(disp,Rn) */
	r5 = 0x0u;  /* 0C0ACC5E mov #imm,Rn */
	r8 += 0x30u;  /* 0C0ACC60 add #imm,Rn */
	W8(r8, r5); UPD(0x0C0ACC64u, 3);  /* 0C0ACC62 mov.b Rm,@Rn */
	r0 = 0x3u;  /* 0C0ACC64 mov #imm,Rn */
	IF(0x0C0ACC66u); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0ACC68u, 2);  /* 0C0ACC66 mov.b @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0ACC68 add #imm,Rn */
	W8(r8, r4); UPD(0x0C0ACC6Cu, 2);  /* 0C0ACC6A mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0ACC6C mov #imm,Rn */
	IF(0x0C0ACC6Eu); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0ACC70u, 2);  /* 0C0ACC6E mov.b @(r0,Rm),Rn */
	r3 = 0xC058060u; UPD(0x0C0ACC72u, 1);  /* 0C0ACC70 mov.l @(disp,pc),Rn */
	{ u32 v_ = r1; r8 -= 1; W8(r8, v_); } UPD(0x0C0ACC74u, 1);  /* 0C0ACC72 mov.b Rm,@-Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0ACC74 add #imm,Rn */
	r5 = 0x30000u; UPD(0x0C0ACC78u, 2);  /* 0C0ACC76 mov.l @(disp,pc),Rn */
	IF(0x0C0ACC78u); { u32 t_ = r3; PR = 0x0C0ACC7Cu; r4 = R32(r8 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0ACC7Cu); }  /* 0C0ACC78 jsr @Rn */
L_0C0ACC7C: BLKS(0x0C0ACC7Cu);
	r2 = 0x20000u; UPD(0x0C0ACC7Eu, 1);  /* 0C0ACC7C mov.l @(disp,pc),Rn */
	r7 = 0xC058030u; UPD(0x0C0ACC80u, 1);  /* 0C0ACC7E mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C0ACC80 add Rm,Rn */
	W32(r8 + 0x18u, r2); UPD(0x0C0ACC84u, 2);  /* 0C0ACC82 mov.l Rm,@(disp,Rn) */
	r5 = 0x30000u; UPD(0x0C0ACC86u, 1);  /* 0C0ACC84 mov.l @(disp,pc),Rn */
	IF(0x0C0ACC86u); { u32 t_ = r7; PR = 0x0C0ACC8Au; r4 = R32(r8 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0ACC8Au); }  /* 0C0ACC86 jsr @Rn */
L_0C0ACC8A: BLKS(0x0C0ACC8Au);
	r6 = r10;  /* 0C0ACC8A mov Rm,Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0ACC8Eu, 2);  /* 0C0ACC8C mov.l Rm,@(disp,Rn) */
	r6 += 0x1u;  /* 0C0ACC8E add #imm,Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C0ACC90 exts.w Rm,Rn */
	r8 = 0x1Fu;  /* 0C0ACC92 mov #imm,Rn */
	T = (s32)r10 > (s32)r8;  /* 0C0ACC94 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACC20u, 7); goto L_0C0ACC20; } goto L_0C0ACC9A; }  /* 0C0ACC96 bf/s */
L_0C0ACC9A: BLKS(0x0C0ACC9Au);
	{ r14 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C0ACBCAu, 4); goto L_0C0ACBCA; }  /* 0C0ACC9A bra */
L_0C0ACCA0: BLKS(0x0C0ACCA0u);
	{ IF(0x0C0ACCA2u); ; /* slot nop */ UPD(0x0C0ACB9Cu, 3); goto L_0C0ACB9C; }  /* 0C0ACCA0 bra */
}

void f_0C0ACCF0(sh3_t *c)
{
	LOCALS;
L_0C0ACCF0: BLKS(0x0C0ACCF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACCF2u, 1);  /* 0C0ACCF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACCF4u, 1);  /* 0C0ACCF2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACCF6u, 1);  /* 0C0ACCF4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0ACCF6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACCFAu, 2);  /* 0C0ACCF8 mov.l Rm,@-Rn */
	r4 = 0x38u;  /* 0C0ACCFA mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACCFEu, 2);  /* 0C0ACCFC mov.l Rm,@-Rn */
	IF(0x0C0ACCFEu); MACL = r9 * r4;  /* 0C0ACCFE mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACD02u, 3);  /* 0C0ACD00 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACD04u, 1);  /* 0C0ACD02 mov.l Rm,@-Rn */
	IF(0x0C0ACD04u); r5 = MACL;  /* 0C0ACD04 sts macl,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0ACD08u, 2);  /* 0C0ACD06 mov.l @(disp,pc),Rn */
	IF(0x0C0ACD08u); r15 -= 4; W32(r15, PR); UPD(0x0C0ACD0Au, 1);  /* 0C0ACD08 sts.l pr,@-Rn */
	r5 += r0;  /* 0C0ACD0A add Rm,Rn */
	r1 = R32(r5 + 0x18u); UPD(0x0C0ACD0Eu, 2);  /* 0C0ACD0C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0ACD0E add #imm,Rn */
	r4 = R32(r5 + 0x10u); UPD(0x0C0ACD12u, 2);  /* 0C0ACD10 mov.l @(disp,Rm),Rn */
	r6 = R32(r5 + 0x14u); UPD(0x0C0ACD14u, 1);  /* 0C0ACD12 mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C0ACD14 add Rm,Rn */
	r3 = 0xFFFFE000u; UPD(0x0C0ACD18u, 2);  /* 0C0ACD16 mov.w @(disp,pc),Rn */
	r7 = R32(r5 + 0x1Cu); UPD(0x0C0ACD1Au, 1);  /* 0C0ACD18 mov.l @(disp,Rm),Rn */
	r1 += r3;  /* 0C0ACD1A add Rm,Rn */
	r0 = R32(r5 + 0x4u); UPD(0x0C0ACD1Eu, 2);  /* 0C0ACD1C mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C0ACD1E add Rm,Rn */
	r2 = 0xC1EEBA4u; UPD(0x0C0ACD22u, 2);  /* 0C0ACD20 mov.l @(disp,pc),Rn */
	IF(0x0C0ACD22u); r0 <<= 2;  /* 0C0ACD22 shll2 Rn */
	W32(r5 + 0x10u, r4); UPD(0x0C0ACD26u, 2);  /* 0C0ACD24 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x14u, r6); UPD(0x0C0ACD28u, 1);  /* 0C0ACD26 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x18u, r1); UPD(0x0C0ACD2Au, 1);  /* 0C0ACD28 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ACD2Au); r3 = R32(r0 + r2); UPD(0x0C0ACD2Cu, 1);  /* 0C0ACD2A mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0ACD2Eu, 1);  /* 0C0ACD2C mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0ACD2E add Rm,Rn */
	IF(0x0C0ACD30u); T = (s32)r2 >= 0;  /* 0C0ACD30 cmp/pz Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0ACD3Au, 5); goto L_0C0ACD3A; } goto L_0C0ACD36; }  /* 0C0ACD32 bt/s */
L_0C0ACD36: BLKS(0x0C0ACD36u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ACF00u, 4); goto L_0C0ACF00; }  /* 0C0ACD36 bra */
L_0C0ACD3A: BLKS(0x0C0ACD3Au);
	r8 = 0xA00000u; UPD(0x0C0ACD3Cu, 1);  /* 0C0ACD3A mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C0ACD3C add Rm,Rn */
	T = (s32)r2 >= (s32)r8;  /* 0C0ACD3E cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACD5Eu, 5); goto L_0C0ACD5E; } goto L_0C0ACD44; }  /* 0C0ACD40 bt/s */
L_0C0ACD44: BLKS(0x0C0ACD44u);
	r11 = 0xC3929E0u; UPD(0x0C0ACD46u, 2);  /* 0C0ACD44 mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C0ACD46 mov Rm,Rn */
	r10 = R32(r11); UPD(0x0C0ACD4Au, 2);  /* 0C0ACD48 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0ACD4Cu, 1);  /* 0C0ACD4A mov.l @(disp,pc),Rn */
	r2 -= r10;  /* 0C0ACD4C sub Rm,Rn */
	r2 += r6;  /* 0C0ACD4E add Rm,Rn */
	IF(0x0C0ACD50u); T = (s32)r2 >= 0;  /* 0C0ACD50 cmp/pz Rn */
	if (T) { UPD(0x0C0ACD56u, 6); goto L_0C0ACD56; }  /* 0C0ACD52 bt */
L_0C0ACD54: BLKS(0x0C0ACD54u);
	r2 = 0u - r2;  /* 0C0ACD54 neg Rm,Rn */
	UPD(0x0C0ACD56u, 1);
L_0C0ACD56: BLKS(0x0C0ACD56u);
	r12 = 0x780000u; UPD(0x0C0ACD58u, 1);  /* 0C0ACD56 mov.l @(disp,pc),Rn */
	r3 += r12;  /* 0C0ACD58 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0ACD5A cmp/ge Rm,Rn */
	IF(0x0C0ACD5Cu); r1 = T;  /* 0C0ACD5C movt Rn */
	UPD(0x0C0ACD5Eu, 3);
L_0C0ACD5E: BLKS(0x0C0ACD5Eu);
	r6 = (u32)(s32)(s16)r1;  /* 0C0ACD5E exts.w Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0ACD60 tst Rm,Rn */
	{ u32 c_ = T; r2 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACD90u, 5); goto L_0C0ACD90; } goto L_0C0ACD66; }  /* 0C0ACD62 bt/s */
L_0C0ACD66: BLKS(0x0C0ACD66u);
	IF(0x0C0ACD66u); MACL = r9 * r2;  /* 0C0ACD66 mul.l Rm,Rn */
	r13 = 0x0u;  /* 0C0ACD68 mov #imm,Rn */
	r9 = 0xC275E1Cu; UPD(0x0C0ACD6Cu, 5);  /* 0C0ACD6A mov.l @(disp,pc),Rn */
	IF(0x0C0ACD6Cu); r0 = MACL;  /* 0C0ACD6C sts macl,Rn */
	IF(0x0C0ACD6Eu); W32(r0 + r9, r13); UPD(0x0C0ACD70u, 2);  /* 0C0ACD6E mov.l Rm,@(r0,Rn) */
L_0C0ACD70: BLKS(0x0C0ACD70u);
	r14 += 0x8u;  /* 0C0ACD70 add #imm,Rn */
	r15 = r14;  /* 0C0ACD72 mov Rm,Rn */
	IF(0x0C0ACD74u); PR = R32(r15); r15 += 4; UPD(0x0C0ACD76u, 3);  /* 0C0ACD74 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ACD78u, 1);  /* 0C0ACD76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0ACD7Au, 1);  /* 0C0ACD78 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0ACD7Cu, 1);  /* 0C0ACD7A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ACD7Eu, 1);  /* 0C0ACD7C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ACD80u, 1);  /* 0C0ACD7E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ACD82u, 1);  /* 0C0ACD80 mov.l @Rm+,Rn */
	IF(0x0C0ACD82u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ACD82 rts */
L_0C0ACD90: BLKS(0x0C0ACD90u);
	r3 = 0x38u;  /* 0C0ACD90 mov #imm,Rn */
	IF(0x0C0ACD92u); MACL = r9 * r3;  /* 0C0ACD92 mul.l Rm,Rn */
	r7 = 0xC275E1Cu; UPD(0x0C0ACD96u, 4);  /* 0C0ACD94 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0ACD96 mov #imm,Rn */
	IF(0x0C0ACD98u); r3 = MACL;  /* 0C0ACD98 sts macl,Rn */
	r3 += r7;  /* 0C0ACD9A add Rm,Rn */
	r7 = r3;  /* 0C0ACD9C mov Rm,Rn */
	r7 += 0x30u;  /* 0C0ACD9E add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r7); UPD(0x0C0ACDA2u, 6);  /* 0C0ACDA0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0ACDA2 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0ACDA4 extu.b Rm,Rn */
	T = r0 > r5;  /* 0C0ACDA6 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0ACD70u, 6); goto L_0C0ACD70; } UPD(0x0C0ACDACu, 1); goto L_0C0ACDAC; }  /* 0C0ACDA8 bf/s */
L_0C0ACDAC: BLKS(0x0C0ACDACu);
	r10 = R32(r3 + 0x4u); UPD(0x0C0ACDAEu, 1);  /* 0C0ACDAC mov.l @(disp,Rm),Rn */
	r12 = R32(r3 + 0x10u); UPD(0x0C0ACDB0u, 1);  /* 0C0ACDAE mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C0ACDB0 mov Rm,Rn */
	r11 = R32(r3); UPD(0x0C0ACDB4u, 2);  /* 0C0ACDB2 mov.l @Rm,Rn */
	IF(0x0C0ACDB4u); r0 <<= 2;  /* 0C0ACDB4 shll2 Rn */
	r13 = R32(r3 + 0x14u); UPD(0x0C0ACDB8u, 2);  /* 0C0ACDB6 mov.l @(disp,Rm),Rn */
	W8(r7, r6); UPD(0x0C0ACDBAu, 1);  /* 0C0ACDB8 mov.b Rm,@Rn */
	r3 += 0x34u;  /* 0C0ACDBA add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C0ACDBEu, 2);  /* 0C0ACDBC mov.b @Rm,Rn */
	W32(r14, r6); UPD(0x0C0ACDC0u, 1);  /* 0C0ACDBE mov.l Rm,@Rn */
	r3 += 0xFFFFFFFFu;  /* 0C0ACDC0 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0ACDC4u, 2);  /* 0C0ACDC2 mov.b @Rm,Rn */
	r8 = 0xC1EEBA4u; UPD(0x0C0ACDC6u, 1);  /* 0C0ACDC4 mov.l @(disp,pc),Rn */
	r2 = 0xFF600000u; UPD(0x0C0ACDC8u, 1);  /* 0C0ACDC6 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0ACDCAu, 1);  /* 0C0ACDC8 mov.l Rm,@(disp,Rn) */
	r2 += r12;  /* 0C0ACDCA add Rm,Rn */
	IF(0x0C0ACDCCu); T = (s32)r2 >= 0;  /* 0C0ACDCC cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C0ACDD0u); r3 = R32(r0 + r8); /* slot mov.l @(r0,Rm),Rn */ if (c_) { UPD(0x0C0ACEB0u, 5); goto L_0C0ACEB0; } UPD(0x0C0ACDD2u, 1); goto L_0C0ACDD2; }  /* 0C0ACDCE bf/s */
L_0C0ACDD2: BLKS(0x0C0ACDD2u);
	r5 = 0xA00000u; UPD(0x0C0ACDD4u, 1);  /* 0C0ACDD2 mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0ACDD4 add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0ACDD6 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACDF4u, 5); goto L_0C0ACDF4; } goto L_0C0ACDDC; }  /* 0C0ACDD8 bt/s */
L_0C0ACDDC: BLKS(0x0C0ACDDCu);
	r2 = 0xC3929E0u; UPD(0x0C0ACDDEu, 2);  /* 0C0ACDDC mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C0ACDE0u, 1);  /* 0C0ACDDE mov.l @Rm,Rn */
	r0 = 0xFF880000u; UPD(0x0C0ACDE2u, 1);  /* 0C0ACDE0 mov.l @(disp,pc),Rn */
	r2 = r13;  /* 0C0ACDE2 mov Rm,Rn */
	r2 -= r4;  /* 0C0ACDE4 sub Rm,Rn */
	r2 += r0;  /* 0C0ACDE6 add Rm,Rn */
	IF(0x0C0ACDE8u); T = (s32)r2 >= 0;  /* 0C0ACDE8 cmp/pz Rn */
	if (!T) { UPD(0x0C0ACEA0u, 7); goto L_0C0ACEA0; }  /* 0C0ACDEA bf */
L_0C0ACDEC: BLKS(0x0C0ACDECu);
	r7 = 0x780000u; UPD(0x0C0ACDEEu, 1);  /* 0C0ACDEC mov.l @(disp,pc),Rn */
	r3 += r7;  /* 0C0ACDEE add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0ACDF0 cmp/ge Rm,Rn */
	IF(0x0C0ACDF2u); r1 = T;  /* 0C0ACDF2 movt Rn */
	UPD(0x0C0ACDF4u, 3);
L_0C0ACDF4: BLKS(0x0C0ACDF4u);
	r8 = (u32)(s32)(s16)r1;  /* 0C0ACDF4 exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0ACDF6 tst Rm,Rn */
	if (T) { UPD(0x0C0ACE30u, 5); goto L_0C0ACE30; }  /* 0C0ACDF8 bt */
L_0C0ACDFA: BLKS(0x0C0ACDFAu);
	r12 = 0x38u;  /* 0C0ACDFA mov #imm,Rn */
	UPD(0x0C0ACDFCu, 1);
L_0C0ACDFC: BLKS(0x0C0ACDFCu);
	IF(0x0C0ACDFCu); MACL = r9 * r12;  /* 0C0ACDFC mul.l Rm,Rn */
	UPD(0x0C0ACDFEu, 2);
L_0C0ACDFE: BLKS(0x0C0ACDFEu);
	r11 = 0xC275E1Cu; UPD(0x0C0ACE00u, 1);  /* 0C0ACDFE mov.l @(disp,pc),Rn */
	IF(0x0C0ACE00u); r2 = MACL;  /* 0C0ACE00 sts macl,Rn */
	r2 += r11;  /* 0C0ACE02 add Rm,Rn */
	r0 = R32(r2 + 0x4u); UPD(0x0C0ACE06u, 3);  /* 0C0ACE04 mov.l @(disp,Rm),Rn */
	r9 = 0x1u;  /* 0C0ACE06 mov #imm,Rn */
	r0 &= 0xFu;  /* 0C0ACE08 and #imm,r0 */
	T = (s32)r0 > (s32)r9;  /* 0C0ACE0A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0ACD70u, 6); goto L_0C0ACD70; }  /* 0C0ACE0C bf */
L_0C0ACE0E: BLKS(0x0C0ACE0Eu);
	r2 += 0x33u;  /* 0C0ACE0E add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0ACE12u, 2);  /* 0C0ACE10 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0ACE12 add #imm,Rn */
	r8 = 0x0u;  /* 0C0ACE14 mov #imm,Rn */
	r13 = 0xC06CC20u; UPD(0x0C0ACE18u, 3);  /* 0C0ACE16 mov.l @(disp,pc),Rn */
	r2 += 0xFFFFFFCDu;  /* 0C0ACE18 add #imm,Rn */
	W32(r15, r8); UPD(0x0C0ACE1Cu, 2);  /* 0C0ACE1A mov.l Rm,@Rn */
	r7 = r1 & 0xFF;  /* 0C0ACE1C extu.b Rm,Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C0ACE20u, 2);  /* 0C0ACE1E mov.l Rm,@(disp,Rn) */
	r4 = 0x7u;  /* 0C0ACE20 mov #imm,Rn */
	r5 = R32(r2 + 0x10u); UPD(0x0C0ACE24u, 2);  /* 0C0ACE22 mov.l @(disp,Rm),Rn */
	IF(0x0C0ACE24u); { u32 t_ = r13; PR = 0x0C0ACE28u; r6 = R32(r2 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C0ACE28u); }  /* 0C0ACE24 jsr @Rn */
L_0C0ACE28: BLKS(0x0C0ACE28u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0ACD70u, 3); goto L_0C0ACD70; }  /* 0C0ACE28 bra */
L_0C0ACE30: BLKS(0x0C0ACE30u);
	r0 = 0xC0AA550u; UPD(0x0C0ACE32u, 1);  /* 0C0ACE30 mov.l @(disp,pc),Rn */
	IF(0x0C0ACE32u); { u32 t_ = r0; PR = 0x0C0ACE36u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0ACE36u); }  /* 0C0ACE32 jsr @Rn */
L_0C0ACE36: BLKS(0x0C0ACE36u);
	T = (r0 & r0) == 0;  /* 0C0ACE36 tst Rm,Rn */
	{ u32 c_ = T; r7 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACDFAu, 4); goto L_0C0ACDFA; } goto L_0C0ACE3C; }  /* 0C0ACE38 bt/s */
L_0C0ACE3C: BLKS(0x0C0ACE3Cu);
	r2 = 0xC2755BCu; UPD(0x0C0ACE3Eu, 2);  /* 0C0ACE3C mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C0ACE40u, 1);  /* 0C0ACE3E mov.w @Rm,Rn */
	r0 = 0x10u;  /* 0C0ACE40 mov #imm,Rn */
	IF(0x0C0ACE42u); MACL = r3 * r7;  /* 0C0ACE42 mul.l Rm,Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0ACE46u, 4);  /* 0C0ACE44 mov.l @(disp,pc),Rn */
	r11 &= r0;  /* 0C0ACE46 and Rm,Rn */
	r5 = 0xC0000000u; UPD(0x0C0ACE4Au, 2);  /* 0C0ACE48 mov.l @(disp,pc),Rn */
	IF(0x0C0ACE4Au); r3 = MACL;  /* 0C0ACE4A sts macl,Rn */
	r3 += r4;  /* 0C0ACE4C add Rm,Rn */
	r11 |= r5;  /* 0C0ACE4E or Rm,Rn */
	W32(r3, r11); UPD(0x0C0ACE52u, 4);  /* 0C0ACE50 mov.l Rm,@Rn */
	r0 = 0x3u;  /* 0C0ACE52 mov #imm,Rn */
	W32(r3 + 0x4u, r10); UPD(0x0C0ACE56u, 2);  /* 0C0ACE54 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0xCu, r8); UPD(0x0C0ACE58u, 1);  /* 0C0ACE56 mov.l Rm,@(disp,Rn) */
	r10 += r10;  /* 0C0ACE58 add Rm,Rn */
	W32(r3 + 0x8u, r8); UPD(0x0C0ACE5Cu, 2);  /* 0C0ACE5A mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x10u, r12); UPD(0x0C0ACE5Eu, 1);  /* 0C0ACE5C mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x14u, r13); UPD(0x0C0ACE60u, 1);  /* 0C0ACE5E mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r8); UPD(0x0C0ACE62u, 1);  /* 0C0ACE60 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x18u, r8); UPD(0x0C0ACE64u, 1);  /* 0C0ACE62 mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0ACE64 add #imm,Rn */
	W8(r3, r8); UPD(0x0C0ACE68u, 2);  /* 0C0ACE66 mov.b Rm,@Rn */
	IF(0x0C0ACE68u); r6 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0ACE6Au, 1);  /* 0C0ACE68 mov.b @(r0,Rm),Rn */
	r3 += 0x4u;  /* 0C0ACE6A add #imm,Rn */
	W8(r3, r6); UPD(0x0C0ACE6Eu, 2);  /* 0C0ACE6C mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0ACE6E mov #imm,Rn */
	IF(0x0C0ACE70u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0ACE72u, 2);  /* 0C0ACE70 mov.b @(r0,Rm),Rn */
	{ u32 v_ = r1; r3 -= 1; W8(r3, v_); } UPD(0x0C0ACE74u, 1);  /* 0C0ACE72 mov.b Rm,@-Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0ACE74 add #imm,Rn */
	W32(r3 + 0x28u, r8); UPD(0x0C0ACE78u, 2);  /* 0C0ACE76 mov.l Rm,@(disp,Rn) */
	r13 = 0xC0AFE40u; UPD(0x0C0ACE7Au, 1);  /* 0C0ACE78 mov.l @(disp,pc),Rn */
	r8 = 0x808080u; UPD(0x0C0ACE7Cu, 1);  /* 0C0ACE7A mov.l @(disp,pc),Rn */
	r12 = 0xC1EEBF4u; UPD(0x0C0ACE7Eu, 1);  /* 0C0ACE7C mov.l @(disp,pc),Rn */
	IF(0x0C0ACE7Eu); { u32 t_ = r13; PR = 0x0C0ACE82u; W32(r3 + 0x2Cu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0ACE82u); }  /* 0C0ACE7E jsr @Rn */
L_0C0ACE82: BLKS(0x0C0ACE82u);
	r10 += r12;  /* 0C0ACE82 add Rm,Rn */
	r0 &= 0x1u;  /* 0C0ACE84 and #imm,r0 */
	IF(0x0C0ACE86u); r11 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0ACE88u, 3);  /* 0C0ACE86 mov.b @(r0,Rm),Rn */
	r10 = 0x3Fu;  /* 0C0ACE88 mov #imm,Rn */
	r4 = r11 & 0xFF;  /* 0C0ACE8A extu.b Rm,Rn */
	T = r4 > r10;  /* 0C0ACE8C cmp/hi Rm,Rn */
	{ u32 c_ = !T; r12 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACDFCu, 6); goto L_0C0ACDFC; } goto L_0C0ACE92; }  /* 0C0ACE8E bf/s */
L_0C0ACE92: BLKS(0x0C0ACE92u);
	r10 = 0xC0AFC10u; UPD(0x0C0ACE94u, 2);  /* 0C0ACE92 mov.l @(disp,pc),Rn */
	IF(0x0C0ACE94u); { u32 t_ = r10; PR = 0x0C0ACE98u; IF(0x0C0ACE96u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0ACE98u); }  /* 0C0ACE94 jsr @Rn */
L_0C0ACE98: BLKS(0x0C0ACE98u);
	{ IF(0x0C0ACE9Au); MACL = r9 * r12; /* slot mul.l Rm,Rn */ UPD(0x0C0ACDFEu, 4); goto L_0C0ACDFE; }  /* 0C0ACE98 bra */
L_0C0ACEA0: BLKS(0x0C0ACEA0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ACDECu, 3); goto L_0C0ACDEC; }  /* 0C0ACEA0 bra */
L_0C0ACEB0: BLKS(0x0C0ACEB0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ACDD2u, 3); goto L_0C0ACDD2; }  /* 0C0ACEB0 bra */
L_0C0ACF00: BLKS(0x0C0ACF00u);
	{ IF(0x0C0ACF02u); ; /* slot nop */ UPD(0x0C0ACD3Au, 3); goto L_0C0ACD3A; }  /* 0C0ACF00 bra */
}

void f_0C0ACF10(sh3_t *c)
{
	LOCALS;
L_0C0ACF10: BLKS(0x0C0ACF10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACF12u, 1);  /* 0C0ACF10 mov.l Rm,@-Rn */
	r4 = 0x1u;  /* 0C0ACF12 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACF16u, 2);  /* 0C0ACF14 mov.l Rm,@-Rn */
	r0 = 0xC286509u; UPD(0x0C0ACF18u, 1);  /* 0C0ACF16 mov.l @(disp,pc),Rn */
	IF(0x0C0ACF18u); r15 -= 4; W32(r15, PR); UPD(0x0C0ACF1Au, 1);  /* 0C0ACF18 sts.l pr,@-Rn */
	r8 = (u32)(s32)(s8)R8(r0); UPD(0x0C0ACF1Cu, 1);  /* 0C0ACF1A mov.b @Rm,Rn */
	r0 = 0xC0AA550u; UPD(0x0C0ACF1Eu, 1);  /* 0C0ACF1C mov.l @(disp,pc),Rn */
	IF(0x0C0ACF1Eu); { u32 t_ = r0; PR = 0x0C0ACF22u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0ACF22u); }  /* 0C0ACF1E jsr @Rn */
L_0C0ACF22: BLKS(0x0C0ACF22u);
	T = (r0 & r0) == 0;  /* 0C0ACF22 tst Rm,Rn */
	{ u32 c_ = T; r4 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ACFA0u, 4); goto L_0C0ACFA0; } goto L_0C0ACF28; }  /* 0C0ACF24 bt/s */
L_0C0ACF28: BLKS(0x0C0ACF28u);
	r7 = 0xC2755BCu; UPD(0x0C0ACF2Au, 2);  /* 0C0ACF28 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r7); UPD(0x0C0ACF2Cu, 1);  /* 0C0ACF2A mov.w @Rm,Rn */
	r3 = 0x1Fu;  /* 0C0ACF2C mov #imm,Rn */
	IF(0x0C0ACF2Eu); MACL = r0 * r4;  /* 0C0ACF2E mul.l Rm,Rn */
	r5 = 0xC275E1Cu; UPD(0x0C0ACF32u, 4);  /* 0C0ACF30 mov.l @(disp,pc),Rn */
	r7 = 0x4Cu;  /* 0C0ACF32 mov #imm,Rn */
	IF(0x0C0ACF34u); r4 = MACL;  /* 0C0ACF34 sts macl,Rn */
	r4 += r5;  /* 0C0ACF36 add Rm,Rn */
	r6 = 0xC0000010u; UPD(0x0C0ACF3Au, 4);  /* 0C0ACF38 mov.l @(disp,pc),Rn */
	IF(0x0C0ACF3Au); MACL = r8 * r7;  /* 0C0ACF3A mul.l Rm,Rn */
	W32(r4 + 0x4u, r3); UPD(0x0C0ACF3Eu, 3);  /* 0C0ACF3C mov.l Rm,@(disp,Rn) */
	W32(r4, r6); UPD(0x0C0ACF40u, 1);  /* 0C0ACF3E mov.l Rm,@Rn */
	r3 = 0x0u;  /* 0C0ACF40 mov #imm,Rn */
	r2 = 0xC21F5E2u; UPD(0x0C0ACF44u, 2);  /* 0C0ACF42 mov.l @(disp,pc),Rn */
	IF(0x0C0ACF44u); r7 = MACL;  /* 0C0ACF44 sts macl,Rn */
	r5 = 0xC26CAE0u; UPD(0x0C0ACF48u, 2);  /* 0C0ACF46 mov.l @(disp,pc),Rn */
	W32(r4 + 0xCu, r3); UPD(0x0C0ACF4Au, 1);  /* 0C0ACF48 mov.l Rm,@(disp,Rn) */
	r7 += r5;  /* 0C0ACF4A add Rm,Rn */
	W32(r4 + 0x8u, r3); UPD(0x0C0ACF4Eu, 2);  /* 0C0ACF4C mov.l Rm,@(disp,Rn) */
	r6 = (u32)(s32)(s16)R16(r2); UPD(0x0C0ACF50u, 1);  /* 0C0ACF4E mov.w @Rm,Rn */
	r2 = R32(r7 + 0x8u); UPD(0x0C0ACF52u, 1);  /* 0C0ACF50 mov.l @(disp,Rm),Rn */
	IF(0x0C0ACF52u); r6 <<= 16;  /* 0C0ACF52 shll16 Rn */
	r6 -= r2;  /* 0C0ACF54 sub Rm,Rn */
	W32(r4 + 0x10u, r6); UPD(0x0C0ACF58u, 3);  /* 0C0ACF56 mov.l Rm,@(disp,Rn) */
	r7 += 0x42u;  /* 0C0ACF58 add #imm,Rn */
	r5 = 0xC392D5Eu; UPD(0x0C0ACF5Cu, 2);  /* 0C0ACF5A mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C0ACF5Eu, 1);  /* 0C0ACF5C mov.w @Rm,Rn */
	r2 = 0xB4u; UPD(0x0C0ACF60u, 1);  /* 0C0ACF5E mov.w @(disp,pc),Rn */
	IF(0x0C0ACF60u); r6 <<= 16;  /* 0C0ACF60 shll16 Rn */
	W32(r4 + 0x14u, r6); UPD(0x0C0ACF64u, 2);  /* 0C0ACF62 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ACF64u); MACL = r0 * r2;  /* 0C0ACF64 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0ACF68u, 3);  /* 0C0ACF66 mov.l @(disp,pc),Rn */
	W32(r4 + 0x1Cu, r3); UPD(0x0C0ACF6Au, 1);  /* 0C0ACF68 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ACF6Au); r5 = MACL;  /* 0C0ACF6A sts macl,Rn */
	W32(r4 + 0x18u, r3); UPD(0x0C0ACF6Eu, 2);  /* 0C0ACF6C mov.l Rm,@(disp,Rn) */
	r6 += r5;  /* 0C0ACF6E add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0ACF72u, 2);  /* 0C0ACF70 mov.w @(disp,pc),Rn */
	IF(0x0C0ACF72u); W8(r0 + r6, r8); UPD(0x0C0ACF74u, 1);  /* 0C0ACF72 mov.b Rm,@(r0,Rn) */
	r0 = r4;  /* 0C0ACF74 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0ACF78u, 2);  /* 0C0ACF76 mov.b @Rm,Rn */
	r4 += 0x33u;  /* 0C0ACF78 add #imm,Rn */
	W8(r4, r6); UPD(0x0C0ACF7Cu, 2);  /* 0C0ACF7A mov.b Rm,@Rn */
	r0 += 0x30u;  /* 0C0ACF7C add #imm,Rn */
	r4 += 0xFFFFFFCDu;  /* 0C0ACF7E add #imm,Rn */
	W8(r0, r3); UPD(0x0C0ACF82u, 3);  /* 0C0ACF80 mov.b Rm,@Rn */
	W32(r4 + 0x28u, r3); UPD(0x0C0ACF84u, 1);  /* 0C0ACF82 mov.l Rm,@(disp,Rn) */
	r2 = 0xC392D5Cu; UPD(0x0C0ACF86u, 1);  /* 0C0ACF84 mov.l @(disp,pc),Rn */
	r3 = 0xC283CB2u; UPD(0x0C0ACF88u, 1);  /* 0C0ACF86 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0ACF8Au, 1);  /* 0C0ACF88 mov.b @Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C0ACF8Cu, 1);  /* 0C0ACF8A mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C0ACF8C extu.b Rm,Rn */
	r6 = 0xC392B09u; UPD(0x0C0ACF90u, 2);  /* 0C0ACF8E mov.l @(disp,pc),Rn */
	r7 = r8 & 0xFF;  /* 0C0ACF90 extu.b Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0ACF94u, 2);  /* 0C0ACF92 mov.b @Rm,Rn */
	IF(0x0C0ACF94u); r0 <<= 16;  /* 0C0ACF94 shll16 Rn */
	IF(0x0C0ACF96u); r7 <<= 8;  /* 0C0ACF96 shll8 Rn */
	r0 |= r7;  /* 0C0ACF98 or Rm,Rn */
	r3 = r5 & 0xFF;  /* 0C0ACF9A extu.b Rm,Rn */
	r0 |= r3;  /* 0C0ACF9C or Rm,Rn */
	W32(r4 + 0x2Cu, r0); UPD(0x0C0ACFA0u, 6);  /* 0C0ACF9E mov.l Rm,@(disp,Rn) */
L_0C0ACFA0: BLKS(0x0C0ACFA0u);
	r0 = 0x1u;  /* 0C0ACFA0 mov #imm,Rn */
	r15 = r14;  /* 0C0ACFA2 mov Rm,Rn */
	IF(0x0C0ACFA4u); PR = R32(r15); r15 += 4; UPD(0x0C0ACFA6u, 3);  /* 0C0ACFA4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ACFA8u, 1);  /* 0C0ACFA6 mov.l @Rm+,Rn */
	IF(0x0C0ACFA8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ACFA8 rts */
}

void f_0C0ACFE0(sh3_t *c)
{
	LOCALS;
L_0C0ACFE0: BLKS(0x0C0ACFE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACFE2u, 1);  /* 0C0ACFE0 mov.l Rm,@-Rn */
	r2 = 0x38u;  /* 0C0ACFE2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACFE6u, 2);  /* 0C0ACFE4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACFE8u, 1);  /* 0C0ACFE6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0ACFE8 exts.w Rm,Rn */
	IF(0x0C0ACFEAu); MACL = r10 * r2;  /* 0C0ACFEA mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACFEEu, 4);  /* 0C0ACFEC mov.l Rm,@-Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0ACFF0u, 1);  /* 0C0ACFEE mov.l @(disp,pc),Rn */
	IF(0x0C0ACFF0u); r8 = MACL;  /* 0C0ACFF0 sts macl,Rn */
	IF(0x0C0ACFF2u); r15 -= 4; W32(r15, PR); UPD(0x0C0ACFF4u, 2);  /* 0C0ACFF2 sts.l pr,@-Rn */
	r8 += r0;  /* 0C0ACFF4 add Rm,Rn */
	r8 += 0x34u;  /* 0C0ACFF6 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0ACFFAu, 3);  /* 0C0ACFF8 mov.b @Rm,Rn */
	r0 = 0x8u;  /* 0C0ACFFA mov #imm,Rn */
	r14 = r15;  /* 0C0ACFFC mov Rm,Rn */
	T = r1 > r0;  /* 0C0ACFFE cmp/hi Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFCCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD008u, 6); goto L_0C0AD008; } goto L_0C0AD004; }  /* 0C0AD000 bf/s */
L_0C0AD004: BLKS(0x0C0AD004u);
	r3 = 0x0u;  /* 0C0AD004 mov #imm,Rn */
	W32(r8, r3); UPD(0x0C0AD008u, 3);  /* 0C0AD006 mov.l Rm,@Rn */
L_0C0AD008: BLKS(0x0C0AD008u);
	r9 = R32(r8 + 0xCu); UPD(0x0C0AD00Au, 1);  /* 0C0AD008 mov.l @(disp,Rm),Rn */
	T = (r9 & r9) == 0;  /* 0C0AD00A tst Rm,Rn */
	{ u32 c_ = T; r2 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AD070u, 4); goto L_0C0AD070; } goto L_0C0AD010; }  /* 0C0AD00C bt/s */
L_0C0AD010: BLKS(0x0C0AD010u);
	r2 += 0x30u;  /* 0C0AD010 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AD014u, 3);  /* 0C0AD012 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0AD014 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C0AD016 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C0AD018 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0AD060u, 6); goto L_0C0AD060; } UPD(0x0C0AD01Eu, 1); goto L_0C0AD01E; }  /* 0C0AD01A bt/s */
L_0C0AD01E: BLKS(0x0C0AD01Eu);
	r3 = 0x38u;  /* 0C0AD01E mov #imm,Rn */
	IF(0x0C0AD020u); MACL = r10 * r3;  /* 0C0AD020 mul.l Rm,Rn */
	r2 = 0xC392D5Cu; UPD(0x0C0AD024u, 4);  /* 0C0AD022 mov.l @(disp,pc),Rn */
	r7 = 0xC283CB2u; UPD(0x0C0AD026u, 1);  /* 0C0AD024 mov.l @(disp,pc),Rn */
	IF(0x0C0AD026u); r9 = MACL;  /* 0C0AD026 sts macl,Rn */
	r8 = 0xC275E1Cu; UPD(0x0C0AD02Au, 2);  /* 0C0AD028 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AD02Cu, 1);  /* 0C0AD02A mov.b @Rm,Rn */
	r8 += r9;  /* 0C0AD02C add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0AD030u, 2);  /* 0C0AD02E mov.b @Rm,Rn */
	r9 = r0 & 0xFF;  /* 0C0AD030 extu.b Rm,Rn */
	r4 = 0xC392B09u; UPD(0x0C0AD034u, 2);  /* 0C0AD032 mov.l @(disp,pc),Rn */
	r5 = r6 & 0xFF;  /* 0C0AD034 extu.b Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AD038u, 2);  /* 0C0AD036 mov.b @Rm,Rn */
	IF(0x0C0AD038u); r5 <<= 8;  /* 0C0AD038 shll8 Rn */
	IF(0x0C0AD03Au); r9 <<= 16;  /* 0C0AD03A shll16 Rn */
	r9 |= r5;  /* 0C0AD03C or Rm,Rn */
	r10 = r3 & 0xFF;  /* 0C0AD03E extu.b Rm,Rn */
	r9 |= r10;  /* 0C0AD040 or Rm,Rn */
	W32(r8 + 0x2Cu, r9); UPD(0x0C0AD044u, 6);  /* 0C0AD042 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C0AD044 mov Rm,Rn */
	IF(0x0C0AD046u); PR = R32(r15); r15 += 4; UPD(0x0C0AD048u, 2);  /* 0C0AD046 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD04Au, 1);  /* 0C0AD048 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD04Cu, 1);  /* 0C0AD04A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD04Eu, 1);  /* 0C0AD04C mov.l @Rm+,Rn */
	IF(0x0C0AD04Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD04E rts */
L_0C0AD060: BLKS(0x0C0AD060u);
	r9 += 0x1u;  /* 0C0AD060 add #imm,Rn */
	r7 = 0x3u;  /* 0C0AD062 mov #imm,Rn */
	r0 = 0x0u;  /* 0C0AD064 mov #imm,Rn */
	r9 &= r7;  /* 0C0AD066 and Rm,Rn */
	W8(r2, r0); UPD(0x0C0AD06Au, 5);  /* 0C0AD068 mov.b Rm,@Rn */
	{ W32(r8 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0AD01Eu, 3); goto L_0C0AD01E; }  /* 0C0AD06A bra */
L_0C0AD070: BLKS(0x0C0AD070u);
	r0 = 0xC0AFE40u; UPD(0x0C0AD072u, 1);  /* 0C0AD070 mov.l @(disp,pc),Rn */
	IF(0x0C0AD072u); { u32 t_ = r0; PR = 0x0C0AD076u; IF(0x0C0AD074u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AD076u); }  /* 0C0AD072 jsr @Rn */
L_0C0AD076: BLKS(0x0C0AD076u);
	r4 = 0x100u; UPD(0x0C0AD078u, 1);  /* 0C0AD076 mov.w @(disp,pc),Rn */
	T = (s32)r0 > (s32)r4;  /* 0C0AD078 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0AD01Eu, 4); goto L_0C0AD01E; }  /* 0C0AD07A bt */
L_0C0AD07C: BLKS(0x0C0AD07Cu);
	r8 += 0x30u;  /* 0C0AD07C add #imm,Rn */
	W8(r8, r9); UPD(0x0C0AD080u, 2);  /* 0C0AD07E mov.b Rm,@Rn */
	r8 += 0xFFFFFFD0u;  /* 0C0AD080 add #imm,Rn */
	r5 = R32(r8 + 0xCu); UPD(0x0C0AD084u, 2);  /* 0C0AD082 mov.l @(disp,Rm),Rn */
	r5 += 0x1u;  /* 0C0AD084 add #imm,Rn */
	{ W32(r8 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0AD01Eu, 4); goto L_0C0AD01E; }  /* 0C0AD086 bra */
}

void f_0C0AD0A0(sh3_t *c)
{
	LOCALS;
L_0C0AD0A0: BLKS(0x0C0AD0A0u);
	r2 = 0x38u;  /* 0C0AD0A0 mov #imm,Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0AD0A2 exts.w Rm,Rn */
	IF(0x0C0AD0A4u); MACL = r1 * r2;  /* 0C0AD0A4 mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AD0A8u, 5);  /* 0C0AD0A6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD0AAu, 1);  /* 0C0AD0A8 mov.l Rm,@-Rn */
	IF(0x0C0AD0AAu); r3 = MACL;  /* 0C0AD0AA sts macl,Rn */
	r3 += r0;  /* 0C0AD0AC add Rm,Rn */
	r2 = R32(r3 + 0x18u); UPD(0x0C0AD0B0u, 3);  /* 0C0AD0AE mov.l @(disp,Rm),Rn */
	r0 = R32(r3 + 0x20u); UPD(0x0C0AD0B2u, 1);  /* 0C0AD0B0 mov.l @(disp,Rm),Rn */
	T = (s32)r2 >= (s32)r0;  /* 0C0AD0B2 cmp/ge Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AD0BEu, 4); goto L_0C0AD0BE; } goto L_0C0AD0B8; }  /* 0C0AD0B4 bt/s */
L_0C0AD0B8: BLKS(0x0C0AD0B8u);
	r4 = 0x8000u; UPD(0x0C0AD0BAu, 2);  /* 0C0AD0B8 mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0AD0BA add Rm,Rn */
	W32(r3 + 0x18u, r2); UPD(0x0C0AD0BEu, 2);  /* 0C0AD0BC mov.l Rm,@(disp,Rn) */
L_0C0AD0BE: BLKS(0x0C0AD0BEu);
	r6 = R32(r3 + 0x10u); UPD(0x0C0AD0C0u, 1);  /* 0C0AD0BE mov.l @(disp,Rm),Rn */
	r5 = 0x147FFFFu; UPD(0x0C0AD0C2u, 1);  /* 0C0AD0C0 mov.l @(disp,pc),Rn */
	T = (s32)r6 > (s32)r5;  /* 0C0AD0C2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD0D0u, 4); goto L_0C0AD0D0; } goto L_0C0AD0C8; }  /* 0C0AD0C4 bf/s */
L_0C0AD0C8: BLKS(0x0C0AD0C8u);
	W32(r3, r7); UPD(0x0C0AD0CAu, 2);  /* 0C0AD0C8 mov.l Rm,@Rn */
L_0C0AD0CA: BLKS(0x0C0AD0CAu);
	r15 = r14;  /* 0C0AD0CA mov Rm,Rn */
	IF(0x0C0AD0CCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AD0CC rts */
L_0C0AD0D0: BLKS(0x0C0AD0D0u);
	r5 = R32(r3 + 0x18u); UPD(0x0C0AD0D2u, 1);  /* 0C0AD0D0 mov.l @(disp,Rm),Rn */
	r2 = 0xC3929E0u; UPD(0x0C0AD0D4u, 1);  /* 0C0AD0D2 mov.l @(disp,pc),Rn */
	W32(r3 + 0x10u, r5); UPD(0x0C0AD0D6u, 1);  /* 0C0AD0D4 mov.l Rm,@(disp,Rn) */
	r4 = R32(r3 + 0x1Cu); UPD(0x0C0AD0D8u, 1);  /* 0C0AD0D6 mov.l @(disp,Rm),Rn */
	r0 = R32(r2); UPD(0x0C0AD0DAu, 1);  /* 0C0AD0D8 mov.l @Rm,Rn */
	r0 += r4;  /* 0C0AD0DA add Rm,Rn */
	{ W32(r3 + 0x14u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0AD0CAu, 4); goto L_0C0AD0CA; }  /* 0C0AD0DC bra */
}

/* FUN_0c0ad0f0 */
void f_0C0AD0F0(sh3_t *c)
{
	LOCALS;
L_0C0AD0F0: BLKS(0x0C0AD0F0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD0F2u, 1);  /* 0C0AD0F0 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C0AD0F2 mov #imm,Rn */
	r3 = 0x23Fu; UPD(0x0C0AD0F6u, 2);  /* 0C0AD0F4 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0AD0F6 mov Rm,Rn */
	r2 = 0xC275E1Cu; UPD(0x0C0AD0FAu, 2);  /* 0C0AD0F8 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C0AD0FA mov #imm,Rn */
	UPD(0x0C0AD0FCu, 1);
L_0C0AD0FC: BLKS(0x0C0AD0FCu);
	W32(r2, r7); UPD(0x0C0AD0FEu, 1);  /* 0C0AD0FC mov.l Rm,@Rn */
	r1 += 0x1u;  /* 0C0AD0FE add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C0AD100 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C0AD102 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD0FCu, 6); goto L_0C0AD0FC; } goto L_0C0AD108; }  /* 0C0AD104 bf/s */
L_0C0AD108: BLKS(0x0C0AD108u);
	r15 = r14;  /* 0C0AD108 mov Rm,Rn */
	IF(0x0C0AD10Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AD10A rts */
}

/* FUN_0c0ad120 */
void f_0C0AD120(sh3_t *c)
{
	LOCALS;
L_0C0AD120: BLKS(0x0C0AD120u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD122u, 1);  /* 0C0AD120 mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C0AD122 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD126u, 2);  /* 0C0AD124 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0AD126 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD12Au, 2);  /* 0C0AD128 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0AD12A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD12Eu, 2);  /* 0C0AD12C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD130u, 1);  /* 0C0AD12E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD132u, 1);  /* 0C0AD130 mov.l Rm,@-Rn */
	r0 = 0xC26C8D6u; UPD(0x0C0AD134u, 1);  /* 0C0AD132 mov.l @(disp,pc),Rn */
	IF(0x0C0AD134u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD136u, 1);  /* 0C0AD134 sts.l pr,@-Rn */
	r11 = r0;  /* 0C0AD136 mov Rm,Rn */
	r2 = 0xC28353Eu; UPD(0x0C0AD13Au, 2);  /* 0C0AD138 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AD13A mov Rm,Rn */
	r10 = 0xC275E1Cu; UPD(0x0C0AD13Eu, 2);  /* 0C0AD13C mov.l @(disp,pc),Rn */
	r12 = 0xC1EEAF4u; UPD(0x0C0AD140u, 1);  /* 0C0AD13E mov.l @(disp,pc),Rn */
	W16(r2, r3); UPD(0x0C0AD142u, 1);  /* 0C0AD140 mov.w Rm,@Rn */
	W16(r0, r3); UPD(0x0C0AD144u, 1);  /* 0C0AD142 mov.w Rm,@Rn */
L_0C0AD144: BLKS(0x0C0AD144u);
	r2 = r9;  /* 0C0AD144 mov Rm,Rn */
	r2 += r10;  /* 0C0AD146 add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0AD14Au, 3);  /* 0C0AD148 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AD14A tst Rm,Rn */
	if (!T) { UPD(0x0C0AD1C0u, 4); goto L_0C0AD1C0; }  /* 0C0AD14C bf */
L_0C0AD14E: BLKS(0x0C0AD14Eu);
	r7 = r8;  /* 0C0AD14E mov Rm,Rn */
	UPD(0x0C0AD150u, 1);
L_0C0AD150: BLKS(0x0C0AD150u);
	r7 += 0x1u;  /* 0C0AD150 add #imm,Rn */
	r6 = 0x1FFu; UPD(0x0C0AD154u, 2);  /* 0C0AD152 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C0AD154 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r6;  /* 0C0AD156 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD144u, 5); goto L_0C0AD144; } goto L_0C0AD15C; }  /* 0C0AD158 bf/s */
L_0C0AD15C: BLKS(0x0C0AD15Cu);
	r8 = 0x200u; UPD(0x0C0AD15Eu, 2);  /* 0C0AD15C mov.w @(disp,pc),Rn */
	r10 = 0xC275E1Cu; UPD(0x0C0AD160u, 1);  /* 0C0AD15E mov.l @(disp,pc),Rn */
	r11 = 0xC28353Eu; UPD(0x0C0AD162u, 1);  /* 0C0AD160 mov.l @(disp,pc),Rn */
	r12 = 0xC1EEAF4u; UPD(0x0C0AD164u, 1);  /* 0C0AD162 mov.l @(disp,pc),Rn */
	r9 = 0x7000u; UPD(0x0C0AD166u, 1);  /* 0C0AD164 mov.w @(disp,pc),Rn */
	IF(0x0C0AD166u); ;  /* 0C0AD166 nop */
	UPD(0x0C0AD168u, 1);
L_0C0AD168: BLKS(0x0C0AD168u);
	r2 = r9;  /* 0C0AD168 mov Rm,Rn */
	r2 += r10;  /* 0C0AD16A add Rm,Rn */
	r3 = R32(r2); UPD(0x0C0AD16Eu, 3);  /* 0C0AD16C mov.l @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0AD16E tst Rm,Rn */
	if (!T) { UPD(0x0C0AD1A0u, 4); goto L_0C0AD1A0; }  /* 0C0AD170 bf */
L_0C0AD172: BLKS(0x0C0AD172u);
	r4 = r8;  /* 0C0AD172 mov Rm,Rn */
	UPD(0x0C0AD174u, 1);
L_0C0AD174: BLKS(0x0C0AD174u);
	r4 += 0x1u;  /* 0C0AD174 add #imm,Rn */
	r5 = 0x23Fu; UPD(0x0C0AD178u, 2);  /* 0C0AD176 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0AD178 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r5;  /* 0C0AD17A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD168u, 5); goto L_0C0AD168; } goto L_0C0AD180; }  /* 0C0AD17C bf/s */
L_0C0AD180: BLKS(0x0C0AD180u);
	r15 = r14;  /* 0C0AD180 mov Rm,Rn */
	IF(0x0C0AD182u); PR = R32(r15); r15 += 4; UPD(0x0C0AD184u, 3);  /* 0C0AD182 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD186u, 1);  /* 0C0AD184 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD188u, 1);  /* 0C0AD186 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD18Au, 1);  /* 0C0AD188 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD18Cu, 1);  /* 0C0AD18A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD18Eu, 1);  /* 0C0AD18C mov.l @Rm+,Rn */
	IF(0x0C0AD18Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD18E rts */
L_0C0AD1A0: BLKS(0x0C0AD1A0u);
	r0 = (u32)(s32)(s16)R16(r11); UPD(0x0C0AD1A2u, 1);  /* 0C0AD1A0 mov.w @Rm,Rn */
	r0 += 0x1u;  /* 0C0AD1A2 add #imm,Rn */
	W16(r11, r0); UPD(0x0C0AD1A6u, 2);  /* 0C0AD1A4 mov.w Rm,@Rn */
	r0 = R32(r2 + 0x4u); UPD(0x0C0AD1A8u, 1);  /* 0C0AD1A6 mov.l @(disp,Rm),Rn */
	IF(0x0C0AD1A8u); r0 <<= 2;  /* 0C0AD1A8 shll2 Rn */
	IF(0x0C0AD1AAu); r2 = R32(r0 + r12); UPD(0x0C0AD1ACu, 2);  /* 0C0AD1AA mov.l @(r0,Rm),Rn */
	IF(0x0C0AD1ACu); { u32 t_ = r2; PR = 0x0C0AD1B0u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0AD1B0u); }  /* 0C0AD1AC jsr @Rn */
L_0C0AD1B0: BLKS(0x0C0AD1B0u);
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C0AD174u, 3); goto L_0C0AD174; }  /* 0C0AD1B0 bra */
L_0C0AD1C0: BLKS(0x0C0AD1C0u);
	r0 = R32(r2 + 0x4u); UPD(0x0C0AD1C2u, 1);  /* 0C0AD1C0 mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C0AD1C4u, 1);  /* 0C0AD1C2 mov.w @Rm,Rn */
	IF(0x0C0AD1C4u); r0 <<= 2;  /* 0C0AD1C4 shll2 Rn */
	r4 += 0x1u;  /* 0C0AD1C6 add #imm,Rn */
	IF(0x0C0AD1C8u); r5 = R32(r0 + r12); UPD(0x0C0AD1CAu, 3);  /* 0C0AD1C8 mov.l @(r0,Rm),Rn */
	W16(r11, r4); UPD(0x0C0AD1CCu, 1);  /* 0C0AD1CA mov.w Rm,@Rn */
	IF(0x0C0AD1CCu); { u32 t_ = r5; PR = 0x0C0AD1D0u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0AD1D0u); }  /* 0C0AD1CC jsr @Rn */
L_0C0AD1D0: BLKS(0x0C0AD1D0u);
	{ r7 = r8; /* slot mov Rm,Rn */ UPD(0x0C0AD150u, 3); goto L_0C0AD150; }  /* 0C0AD1D0 bra */
}

/* FUN_0c0ad1f0 */
void f_0C0AD1F0(sh3_t *c)
{
	LOCALS;
L_0C0AD1F0: BLKS(0x0C0AD1F0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD1F2u, 1);  /* 0C0AD1F0 mov.l Rm,@-Rn */
	r7 = 0x0u;  /* 0C0AD1F2 mov #imm,Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0AD1F6u, 2);  /* 0C0AD1F4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AD1F6 mov Rm,Rn */
	r0 = 0xC27557Cu; UPD(0x0C0AD1FAu, 2);  /* 0C0AD1F8 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0AD1FA mov #imm,Rn */
	r5 = 0x1FFu; UPD(0x0C0AD1FEu, 2);  /* 0C0AD1FC mov.w @(disp,pc),Rn */
	r6 = 0x40000000u; UPD(0x0C0AD200u, 1);  /* 0C0AD1FE mov.l @(disp,pc),Rn */
L_0C0AD200: BLKS(0x0C0AD200u);
	r2 = r3;  /* 0C0AD200 mov Rm,Rn */
	r2 += r4;  /* 0C0AD202 add Rm,Rn */
	r1 = R32(r2); UPD(0x0C0AD206u, 3);  /* 0C0AD204 mov.l @Rm,Rn */
	T = (r1 & r6) == 0;  /* 0C0AD206 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x33u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD21Eu, 4); goto L_0C0AD21E; } goto L_0C0AD20C; }  /* 0C0AD208 bt/s */
L_0C0AD20C: BLKS(0x0C0AD20Cu);
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AD20Eu, 2);  /* 0C0AD20C mov.b @Rm,Rn */
	r1 = 0x1Fu;  /* 0C0AD20E mov #imm,Rn */
	r1 &= r2;  /* 0C0AD210 and Rm,Rn */
	r1 += r1;  /* 0C0AD212 add Rm,Rn */
	r2 = r1;  /* 0C0AD214 mov Rm,Rn */
	r2 += r0;  /* 0C0AD216 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AD21Au, 6);  /* 0C0AD218 mov.w @Rm,Rn */
	r1 += 0x1u;  /* 0C0AD21A add #imm,Rn */
	W16(r2, r1); UPD(0x0C0AD21Eu, 2);  /* 0C0AD21C mov.w Rm,@Rn */
L_0C0AD21E: BLKS(0x0C0AD21Eu);
	r2 = r7;  /* 0C0AD21E mov Rm,Rn */
	r2 += 0x1u;  /* 0C0AD220 add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C0AD222 exts.w Rm,Rn */
	T = (s32)r7 > (s32)r5;  /* 0C0AD224 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD200u, 7); goto L_0C0AD200; } goto L_0C0AD22A; }  /* 0C0AD226 bf/s */
L_0C0AD22A: BLKS(0x0C0AD22Au);
	r15 = r14;  /* 0C0AD22A mov Rm,Rn */
	IF(0x0C0AD22Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AD22C rts */
}

/* FUN_0c0ad240 */
void f_0C0AD240(sh3_t *c)
{
	LOCALS;
L_0C0AD240: BLKS(0x0C0AD240u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD242u, 1);  /* 0C0AD240 mov.l Rm,@-Rn */
	r7 = 0x200u; UPD(0x0C0AD244u, 1);  /* 0C0AD242 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0AD244 mov Rm,Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0AD248u, 2);  /* 0C0AD246 mov.l @(disp,pc),Rn */
	r0 = 0xC27DDB4u; UPD(0x0C0AD24Au, 1);  /* 0C0AD248 mov.l @(disp,pc),Rn */
	r5 = 0x23Fu; UPD(0x0C0AD24Cu, 1);  /* 0C0AD24A mov.w @(disp,pc),Rn */
	r3 = 0x7000u; UPD(0x0C0AD24Eu, 1);  /* 0C0AD24C mov.w @(disp,pc),Rn */
	r6 = 0x40000000u; UPD(0x0C0AD250u, 1);  /* 0C0AD24E mov.l @(disp,pc),Rn */
L_0C0AD250: BLKS(0x0C0AD250u);
	r2 = r3;  /* 0C0AD250 mov Rm,Rn */
	r2 += r4;  /* 0C0AD252 add Rm,Rn */
	r1 = R32(r2); UPD(0x0C0AD256u, 3);  /* 0C0AD254 mov.l @Rm,Rn */
	T = (r1 & r6) == 0;  /* 0C0AD256 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x33u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD26Eu, 4); goto L_0C0AD26E; } goto L_0C0AD25C; }  /* 0C0AD258 bt/s */
L_0C0AD25C: BLKS(0x0C0AD25Cu);
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AD25Eu, 2);  /* 0C0AD25C mov.b @Rm,Rn */
	r1 = 0x1Fu;  /* 0C0AD25E mov #imm,Rn */
	r1 &= r2;  /* 0C0AD260 and Rm,Rn */
	r1 += r1;  /* 0C0AD262 add Rm,Rn */
	r2 = r1;  /* 0C0AD264 mov Rm,Rn */
	r2 += r0;  /* 0C0AD266 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AD26Au, 6);  /* 0C0AD268 mov.w @Rm,Rn */
	r1 += 0x1u;  /* 0C0AD26A add #imm,Rn */
	W16(r2, r1); UPD(0x0C0AD26Eu, 2);  /* 0C0AD26C mov.w Rm,@Rn */
L_0C0AD26E: BLKS(0x0C0AD26Eu);
	r2 = r7;  /* 0C0AD26E mov Rm,Rn */
	r2 += 0x1u;  /* 0C0AD270 add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C0AD272 exts.w Rm,Rn */
	T = (s32)r7 > (s32)r5;  /* 0C0AD274 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD250u, 7); goto L_0C0AD250; } goto L_0C0AD27A; }  /* 0C0AD276 bf/s */
L_0C0AD27A: BLKS(0x0C0AD27Au);
	r15 = r14;  /* 0C0AD27A mov Rm,Rn */
	IF(0x0C0AD27Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AD27C rts */
}

/* FUN_0c0ad2a0 */
void f_0C0AD2A0(sh3_t *c)
{
	LOCALS;
L_0C0AD2A0: BLKS(0x0C0AD2A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2A2u, 1);  /* 0C0AD2A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2A4u, 1);  /* 0C0AD2A2 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0AD2A4 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2A8u, 2);  /* 0C0AD2A6 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0AD2A8 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2ACu, 2);  /* 0C0AD2AA mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C0AD2AC exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2B0u, 2);  /* 0C0AD2AE mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2B2u, 1);  /* 0C0AD2B0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2B4u, 1);  /* 0C0AD2B2 mov.l Rm,@-Rn */
	r13 = 0xC1EE9D8u; UPD(0x0C0AD2B6u, 1);  /* 0C0AD2B4 mov.l @(disp,pc),Rn */
	IF(0x0C0AD2B6u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD2B8u, 1);  /* 0C0AD2B6 sts.l pr,@-Rn */
	r12 = 0xC2175E8u; UPD(0x0C0AD2BAu, 1);  /* 0C0AD2B8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AD2BA mov Rm,Rn */
	r11 = 0xC062A70u; UPD(0x0C0AD2BEu, 2);  /* 0C0AD2BC mov.l @(disp,pc),Rn */
	IF(0x0C0AD2BEu); ;  /* 0C0AD2BE nop */
	UPD(0x0C0AD2C0u, 1);
L_0C0AD2C0: BLKS(0x0C0AD2C0u);
	r7 = 0xC275E1Cu; UPD(0x0C0AD2C2u, 1);  /* 0C0AD2C0 mov.l @(disp,pc),Rn */
	r7 += r8;  /* 0C0AD2C2 add Rm,Rn */
	r1 = R32(r7); UPD(0x0C0AD2C6u, 2);  /* 0C0AD2C4 mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C0AD2C8u, 1);  /* 0C0AD2C6 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C0AD2C8 tst Rm,Rn */
	{ u32 c_ = T; r6 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AD2DCu, 4); goto L_0C0AD2DC; } goto L_0C0AD2CE; }  /* 0C0AD2CA bt/s */
L_0C0AD2CE: BLKS(0x0C0AD2CEu);
	r7 += 0x33u;  /* 0C0AD2CE add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0AD2D2u, 3);  /* 0C0AD2D0 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C0AD2D2 extu.b Rm,Rn */
	T = r0 == r10;  /* 0C0AD2D4 cmp/eq Rm,Rn */
	{ u32 c_ = T; r7 += 0xFFFFFFCDu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD300u, 5); goto L_0C0AD300; } UPD(0x0C0AD2DAu, 1); goto L_0C0AD2DA; }  /* 0C0AD2D6 bt/s */
L_0C0AD2DA: BLKS(0x0C0AD2DAu);
	r6 = r9;  /* 0C0AD2DA mov Rm,Rn */
	UPD(0x0C0AD2DCu, 1);
L_0C0AD2DC: BLKS(0x0C0AD2DCu);
	r6 += 0x1u;  /* 0C0AD2DC add #imm,Rn */
	r7 = 0x1FFu; UPD(0x0C0AD2E0u, 2);  /* 0C0AD2DE mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r6;  /* 0C0AD2E0 exts.w Rm,Rn */
	T = (s32)r9 > (s32)r7;  /* 0C0AD2E2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD2C0u, 5); goto L_0C0AD2C0; } goto L_0C0AD2E8; }  /* 0C0AD2E4 bf/s */
L_0C0AD2E8: BLKS(0x0C0AD2E8u);
	r15 = r14;  /* 0C0AD2E8 mov Rm,Rn */
	IF(0x0C0AD2EAu); PR = R32(r15); r15 += 4; UPD(0x0C0AD2ECu, 3);  /* 0C0AD2EA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD2EEu, 1);  /* 0C0AD2EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AD2F0u, 1);  /* 0C0AD2EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD2F2u, 1);  /* 0C0AD2F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD2F4u, 1);  /* 0C0AD2F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD2F6u, 1);  /* 0C0AD2F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD2F8u, 1);  /* 0C0AD2F6 mov.l @Rm+,Rn */
	IF(0x0C0AD2F8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD2F8 rts */
L_0C0AD300: BLKS(0x0C0AD300u);
	r5 = R32(r7 + 0x4u); UPD(0x0C0AD302u, 1);  /* 0C0AD300 mov.l @(disp,Rm),Rn */
	r1 = 0x3u;  /* 0C0AD302 mov #imm,Rn */
	IF(0x0C0AD304u); ARG0(0x451Du); { s32 s_ = (s32)r1; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0AD304 shld Rm,Rn */
	r5 += r13;  /* 0C0AD306 add Rm,Rn */
	r3 = R32(r5 + 0x4u); UPD(0x0C0AD30Au, 4);  /* 0C0AD308 mov.l @(disp,Rm),Rn */
	r2 = 0x4u;  /* 0C0AD30A mov #imm,Rn */
	r0 = 0xC393044u; UPD(0x0C0AD30Eu, 2);  /* 0C0AD30C mov.l @(disp,pc),Rn */
	r6 = 0x3u;  /* 0C0AD30E mov #imm,Rn */
	W32(r0, r3); UPD(0x0C0AD312u, 2);  /* 0C0AD310 mov.l Rm,@Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AD312 add #imm,Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C0AD316u, 2);  /* 0C0AD314 mov.l @(disp,Rm),Rn */
	r3 = 0x0u;  /* 0C0AD316 mov #imm,Rn */
	r4 = R32(r5); UPD(0x0C0AD31Au, 2);  /* 0C0AD318 mov.l @Rm,Rn */
	IF(0x0C0AD31Au); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0AD31A shld Rm,Rn */
	IF(0x0C0AD31Cu); r5 = R32(r0 + r4); UPD(0x0C0AD31Eu, 2);  /* 0C0AD31C mov.l @(r0,Rm),Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C0AD320u, 1);  /* 0C0AD31E mov.l @(disp,Rm),Rn */
	IF(0x0C0AD320u); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0AD320 shld Rm,Rn */
	IF(0x0C0AD322u); r4 = R32(r0 + r5); UPD(0x0C0AD324u, 2);  /* 0C0AD322 mov.l @(r0,Rm),Rn */
	W32(r15, r3); UPD(0x0C0AD326u, 1);  /* 0C0AD324 mov.l Rm,@Rn */
	W32(r12, r4); UPD(0x0C0AD328u, 1);  /* 0C0AD326 mov.l Rm,@Rn */
	r4 = R32(r7 + 0x28u); UPD(0x0C0AD32Au, 1);  /* 0C0AD328 mov.l @(disp,Rm),Rn */
	r5 = R32(r7 + 0x10u); UPD(0x0C0AD32Cu, 1);  /* 0C0AD32A mov.l @(disp,Rm),Rn */
	r6 = R32(r7 + 0x14u); UPD(0x0C0AD32Eu, 1);  /* 0C0AD32C mov.l @(disp,Rm),Rn */
	IF(0x0C0AD32Eu); { u32 t_ = r11; PR = 0x0C0AD332u; r7 = R32(r7 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C0AD332u); }  /* 0C0AD32E jsr @Rn */
L_0C0AD332: BLKS(0x0C0AD332u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0AD2DAu, 3); goto L_0C0AD2DA; }  /* 0C0AD332 bra */
}

/* FUN_0c0ad350 */
void f_0C0AD350(sh3_t *c)
{
	LOCALS;
L_0C0AD350: BLKS(0x0C0AD350u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD352u, 1);  /* 0C0AD350 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD354u, 1);  /* 0C0AD352 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD356u, 1);  /* 0C0AD354 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD358u, 1);  /* 0C0AD356 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD35Au, 1);  /* 0C0AD358 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r4;  /* 0C0AD35A exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD35Eu, 2);  /* 0C0AD35C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD360u, 1);  /* 0C0AD35E mov.l Rm,@-Rn */
	r9 = 0x200u; UPD(0x0C0AD362u, 1);  /* 0C0AD360 mov.w @(disp,pc),Rn */
	IF(0x0C0AD362u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD364u, 1);  /* 0C0AD362 sts.l pr,@-Rn */
	r13 = 0xC2175E8u; UPD(0x0C0AD366u, 1);  /* 0C0AD364 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AD366 mov Rm,Rn */
	r8 = 0x7000u; UPD(0x0C0AD36Au, 2);  /* 0C0AD368 mov.w @(disp,pc),Rn */
	r10 = 0xC275E1Cu; UPD(0x0C0AD36Cu, 1);  /* 0C0AD36A mov.l @(disp,pc),Rn */
	r12 = 0xC062A70u; UPD(0x0C0AD36Eu, 1);  /* 0C0AD36C mov.l @(disp,pc),Rn */
	IF(0x0C0AD36Eu); ;  /* 0C0AD36E nop */
	UPD(0x0C0AD370u, 1);
L_0C0AD370: BLKS(0x0C0AD370u);
	r7 = r8;  /* 0C0AD370 mov Rm,Rn */
	r7 += r10;  /* 0C0AD372 add Rm,Rn */
	r1 = R32(r7); UPD(0x0C0AD376u, 3);  /* 0C0AD374 mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C0AD378u, 1);  /* 0C0AD376 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C0AD378 tst Rm,Rn */
	{ u32 c_ = T; r4 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AD38Cu, 4); goto L_0C0AD38C; } goto L_0C0AD37E; }  /* 0C0AD37A bt/s */
L_0C0AD37E: BLKS(0x0C0AD37Eu);
	r7 += 0x33u;  /* 0C0AD37E add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0AD382u, 3);  /* 0C0AD380 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C0AD382 extu.b Rm,Rn */
	T = r0 == r11;  /* 0C0AD384 cmp/eq Rm,Rn */
	{ u32 c_ = T; r7 += 0xFFFFFFCDu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD3B0u, 5); goto L_0C0AD3B0; } UPD(0x0C0AD38Au, 1); goto L_0C0AD38A; }  /* 0C0AD386 bt/s */
L_0C0AD38A: BLKS(0x0C0AD38Au);
	r4 = r9;  /* 0C0AD38A mov Rm,Rn */
	UPD(0x0C0AD38Cu, 1);
L_0C0AD38C: BLKS(0x0C0AD38Cu);
	r4 += 0x1u;  /* 0C0AD38C add #imm,Rn */
	r7 = 0x23Fu; UPD(0x0C0AD390u, 2);  /* 0C0AD38E mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AD390 exts.w Rm,Rn */
	T = (s32)r9 > (s32)r7;  /* 0C0AD392 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD370u, 5); goto L_0C0AD370; } goto L_0C0AD398; }  /* 0C0AD394 bf/s */
L_0C0AD398: BLKS(0x0C0AD398u);
	r15 = r14;  /* 0C0AD398 mov Rm,Rn */
	IF(0x0C0AD39Au); PR = R32(r15); r15 += 4; UPD(0x0C0AD39Cu, 3);  /* 0C0AD39A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD39Eu, 1);  /* 0C0AD39C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AD3A0u, 1);  /* 0C0AD39E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD3A2u, 1);  /* 0C0AD3A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD3A4u, 1);  /* 0C0AD3A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD3A6u, 1);  /* 0C0AD3A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD3A8u, 1);  /* 0C0AD3A6 mov.l @Rm+,Rn */
	IF(0x0C0AD3A8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD3A8 rts */
L_0C0AD3B0: BLKS(0x0C0AD3B0u);
	r5 = R32(r7 + 0x4u); UPD(0x0C0AD3B2u, 1);  /* 0C0AD3B0 mov.l @(disp,Rm),Rn */
	r6 = 0x3u;  /* 0C0AD3B2 mov #imm,Rn */
	IF(0x0C0AD3B4u); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0AD3B4 shld Rm,Rn */
	r1 = 0xC1EE9D8u; UPD(0x0C0AD3B8u, 3);  /* 0C0AD3B6 mov.l @(disp,pc),Rn */
	r2 = 0x4u;  /* 0C0AD3B8 mov #imm,Rn */
	r5 += r1;  /* 0C0AD3BA add Rm,Rn */
	r3 = R32(r5 + 0x4u); UPD(0x0C0AD3BEu, 3);  /* 0C0AD3BC mov.l @(disp,Rm),Rn */
	r6 = 0x3u;  /* 0C0AD3BE mov #imm,Rn */
	r0 = 0xC393044u; UPD(0x0C0AD3C2u, 2);  /* 0C0AD3C0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AD3C2 add #imm,Rn */
	W32(r0, r3); UPD(0x0C0AD3C6u, 2);  /* 0C0AD3C4 mov.l Rm,@Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C0AD3C8u, 1);  /* 0C0AD3C6 mov.l @(disp,Rm),Rn */
	r3 = 0x0u;  /* 0C0AD3C8 mov #imm,Rn */
	r4 = R32(r5); UPD(0x0C0AD3CCu, 2);  /* 0C0AD3CA mov.l @Rm,Rn */
	IF(0x0C0AD3CCu); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0AD3CC shld Rm,Rn */
	IF(0x0C0AD3CEu); r5 = R32(r0 + r4); UPD(0x0C0AD3D0u, 2);  /* 0C0AD3CE mov.l @(r0,Rm),Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C0AD3D2u, 1);  /* 0C0AD3D0 mov.l @(disp,Rm),Rn */
	IF(0x0C0AD3D2u); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0AD3D2 shld Rm,Rn */
	IF(0x0C0AD3D4u); r4 = R32(r0 + r5); UPD(0x0C0AD3D6u, 2);  /* 0C0AD3D4 mov.l @(r0,Rm),Rn */
	W32(r15, r3); UPD(0x0C0AD3D8u, 1);  /* 0C0AD3D6 mov.l Rm,@Rn */
	W32(r13, r4); UPD(0x0C0AD3DAu, 1);  /* 0C0AD3D8 mov.l Rm,@Rn */
	r5 = R32(r7 + 0x10u); UPD(0x0C0AD3DCu, 1);  /* 0C0AD3DA mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C0AD3DC mov #imm,Rn */
	r6 = R32(r7 + 0x14u); UPD(0x0C0AD3E0u, 2);  /* 0C0AD3DE mov.l @(disp,Rm),Rn */
	IF(0x0C0AD3E0u); { u32 t_ = r12; PR = 0x0C0AD3E4u; r7 = R32(r7 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C0AD3E4u); }  /* 0C0AD3E0 jsr @Rn */
L_0C0AD3E4: BLKS(0x0C0AD3E4u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0AD38Au, 3); goto L_0C0AD38A; }  /* 0C0AD3E4 bra */
}

/* FUN_0c0ad540 */
void f_0C0AD540(sh3_t *c)
{
	LOCALS;
L_0C0AD540: BLKS(0x0C0AD540u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD542u, 1);  /* 0C0AD540 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD544u, 1);  /* 0C0AD542 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD546u, 1);  /* 0C0AD544 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C0AD546 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD54Au, 2);  /* 0C0AD548 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C0AD54A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD54Eu, 2);  /* 0C0AD54C mov.l Rm,@-Rn */
	r11 = r6;  /* 0C0AD54E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD552u, 2);  /* 0C0AD550 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD554u, 1);  /* 0C0AD552 mov.l Rm,@-Rn */
	IF(0x0C0AD554u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD556u, 1);  /* 0C0AD554 sts.l pr,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AD556 add #imm,Rn */
	r14 = r15;  /* 0C0AD558 mov Rm,Rn */
	r2 = R32(r14 + 0x28u); UPD(0x0C0AD55Cu, 3);  /* 0C0AD55A mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0AD55C exts.b Rm,Rn */
	W32(r14, r0); UPD(0x0C0AD560u, 2);  /* 0C0AD55E mov.l Rm,@Rn */
	r3 = R32(r14 + 0x24u); UPD(0x0C0AD562u, 1);  /* 0C0AD560 mov.l @(disp,Rm),Rn */
	r0 = r5;  /* 0C0AD562 mov Rm,Rn */
	r2 = 0xC1EEBA4u; UPD(0x0C0AD566u, 2);  /* 0C0AD564 mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s8)r3;  /* 0C0AD566 exts.b Rm,Rn */
	IF(0x0C0AD568u); r0 <<= 2;  /* 0C0AD568 shll2 Rn */
	IF(0x0C0AD56Au); r3 = R32(r0 + r2); UPD(0x0C0AD56Cu, 3);  /* 0C0AD56A mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0AD56Eu, 1);  /* 0C0AD56C mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0AD56E add Rm,Rn */
	IF(0x0C0AD570u); T = (s32)r2 >= 0;  /* 0C0AD570 cmp/pz Rn */
	{ u32 c_ = !T; r12 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AD650u, 5); goto L_0C0AD650; } UPD(0x0C0AD576u, 1); goto L_0C0AD576; }  /* 0C0AD572 bf/s */
L_0C0AD576: BLKS(0x0C0AD576u);
	r4 = 0xA00000u; UPD(0x0C0AD578u, 1);  /* 0C0AD576 mov.l @(disp,pc),Rn */
	r4 += r3;  /* 0C0AD578 add Rm,Rn */
	T = (s32)r2 >= (s32)r4;  /* 0C0AD57A cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD598u, 5); goto L_0C0AD598; } goto L_0C0AD580; }  /* 0C0AD57C bt/s */
L_0C0AD580: BLKS(0x0C0AD580u);
	r7 = 0xC3929E0u; UPD(0x0C0AD582u, 2);  /* 0C0AD580 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0AD582 mov Rm,Rn */
	r6 = R32(r7); UPD(0x0C0AD586u, 2);  /* 0C0AD584 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C0AD588u, 1);  /* 0C0AD586 mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C0AD588 sub Rm,Rn */
	r2 += r5;  /* 0C0AD58A add Rm,Rn */
	IF(0x0C0AD58Cu); T = (s32)r2 >= 0;  /* 0C0AD58C cmp/pz Rn */
	if (!T) { UPD(0x0C0AD640u, 6); goto L_0C0AD640; }  /* 0C0AD58E bf */
L_0C0AD590: BLKS(0x0C0AD590u);
	r8 = 0x780000u; UPD(0x0C0AD592u, 1);  /* 0C0AD590 mov.l @(disp,pc),Rn */
	r3 += r8;  /* 0C0AD592 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0AD594 cmp/ge Rm,Rn */
	IF(0x0C0AD596u); r1 = T;  /* 0C0AD596 movt Rn */
	UPD(0x0C0AD598u, 3);
L_0C0AD598: BLKS(0x0C0AD598u);
	r8 = (u32)(s32)(s16)r1;  /* 0C0AD598 exts.w Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0AD59A tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD5C0u, 5); goto L_0C0AD5C0; } UPD(0x0C0AD5A0u, 1); goto L_0C0AD5A0; }  /* 0C0AD59C bt/s */
L_0C0AD5A0: BLKS(0x0C0AD5A0u);
	r14 += 0x4u;  /* 0C0AD5A0 add #imm,Rn */
	UPD(0x0C0AD5A2u, 1);
L_0C0AD5A2: BLKS(0x0C0AD5A2u);
	r15 = r14;  /* 0C0AD5A2 mov Rm,Rn */
	IF(0x0C0AD5A4u); PR = R32(r15); r15 += 4; UPD(0x0C0AD5A6u, 2);  /* 0C0AD5A4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD5A8u, 1);  /* 0C0AD5A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AD5AAu, 1);  /* 0C0AD5A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD5ACu, 1);  /* 0C0AD5AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD5AEu, 1);  /* 0C0AD5AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD5B0u, 1);  /* 0C0AD5AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD5B2u, 1);  /* 0C0AD5B0 mov.l @Rm+,Rn */
	IF(0x0C0AD5B2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD5B2 rts */
L_0C0AD5C0: BLKS(0x0C0AD5C0u);
	r0 = 0xC0AA550u; UPD(0x0C0AD5C2u, 1);  /* 0C0AD5C0 mov.l @(disp,pc),Rn */
	IF(0x0C0AD5C2u); { u32 t_ = r0; PR = 0x0C0AD5C6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0AD5C6u); }  /* 0C0AD5C2 jsr @Rn */
L_0C0AD5C6: BLKS(0x0C0AD5C6u);
	T = (r0 & r0) == 0;  /* 0C0AD5C6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD5A0u, 4); goto L_0C0AD5A0; } goto L_0C0AD5CC; }  /* 0C0AD5C8 bt/s */
L_0C0AD5CC: BLKS(0x0C0AD5CCu);
	r2 = 0xC2755BCu; UPD(0x0C0AD5CEu, 2);  /* 0C0AD5CC mov.l @(disp,pc),Rn */
	r6 = 0x38u;  /* 0C0AD5CE mov #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AD5D2u, 2);  /* 0C0AD5D0 mov.w @Rm,Rn */
	r4 = 0x10u;  /* 0C0AD5D2 mov #imm,Rn */
	IF(0x0C0AD5D4u); MACL = r7 * r6;  /* 0C0AD5D4 mul.l Rm,Rn */
	r5 = 0xC275E1Cu; UPD(0x0C0AD5D8u, 4);  /* 0C0AD5D6 mov.l @(disp,pc),Rn */
	r10 &= r4;  /* 0C0AD5D8 and Rm,Rn */
	r0 = 0xC0000000u; UPD(0x0C0AD5DCu, 2);  /* 0C0AD5DA mov.l @(disp,pc),Rn */
	IF(0x0C0AD5DCu); r3 = MACL;  /* 0C0AD5DC sts macl,Rn */
	r3 += r5;  /* 0C0AD5DE add Rm,Rn */
	r0 |= r10;  /* 0C0AD5E0 or Rm,Rn */
	W32(r3, r0); UPD(0x0C0AD5E4u, 4);  /* 0C0AD5E2 mov.l Rm,@Rn */
	W32(r3 + 0x4u, r9); UPD(0x0C0AD5E6u, 1);  /* 0C0AD5E4 mov.l Rm,@(disp,Rn) */
	r0 = 0x3u;  /* 0C0AD5E6 mov #imm,Rn */
	W32(r3 + 0x10u, r11); UPD(0x0C0AD5EAu, 2);  /* 0C0AD5E8 mov.l Rm,@(disp,Rn) */
	r9 += r9;  /* 0C0AD5EA add Rm,Rn */
	W32(r3 + 0x14u, r12); UPD(0x0C0AD5EEu, 2);  /* 0C0AD5EC mov.l Rm,@(disp,Rn) */
	W32(r3 + 0xCu, r8); UPD(0x0C0AD5F0u, 1);  /* 0C0AD5EE mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x8u, r8); UPD(0x0C0AD5F2u, 1);  /* 0C0AD5F0 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r8); UPD(0x0C0AD5F4u, 1);  /* 0C0AD5F2 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x18u, r8); UPD(0x0C0AD5F6u, 1);  /* 0C0AD5F4 mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0AD5F6 add #imm,Rn */
	W8(r3, r8); UPD(0x0C0AD5FAu, 2);  /* 0C0AD5F8 mov.b Rm,@Rn */
	r3 += 0x4u;  /* 0C0AD5FA add #imm,Rn */
	W8(r3, r13); UPD(0x0C0AD5FEu, 2);  /* 0C0AD5FC mov.b Rm,@Rn */
	IF(0x0C0AD5FEu); r13 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AD600u, 1);  /* 0C0AD5FE mov.b @(r0,Rm),Rn */
	r12 = 0xC0AFE40u; UPD(0x0C0AD602u, 1);  /* 0C0AD600 mov.l @(disp,pc),Rn */
	{ u32 v_ = r13; r3 -= 1; W8(r3, v_); } UPD(0x0C0AD604u, 1);  /* 0C0AD602 mov.b Rm,@-Rn */
	r1 = 0x808080u; UPD(0x0C0AD606u, 1);  /* 0C0AD604 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0AD606 add #imm,Rn */
	r11 = 0xC1EEBF4u; UPD(0x0C0AD60Au, 2);  /* 0C0AD608 mov.l @(disp,pc),Rn */
	W32(r3 + 0x28u, r8); UPD(0x0C0AD60Cu, 1);  /* 0C0AD60A mov.l Rm,@(disp,Rn) */
	r11 += r9;  /* 0C0AD60C add Rm,Rn */
	IF(0x0C0AD60Eu); { u32 t_ = r12; PR = 0x0C0AD612u; W32(r3 + 0x2Cu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AD612u); }  /* 0C0AD60E jsr @Rn */
L_0C0AD612: BLKS(0x0C0AD612u);
	r0 &= 0x1u;  /* 0C0AD612 and #imm,r0 */
	IF(0x0C0AD614u); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0AD616u, 2);  /* 0C0AD614 mov.b @(r0,Rm),Rn */
	r9 = 0x3Fu;  /* 0C0AD616 mov #imm,Rn */
	r4 = r10 & 0xFF;  /* 0C0AD618 extu.b Rm,Rn */
	T = r4 > r9;  /* 0C0AD61A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0AD630u, 6); goto L_0C0AD630; }  /* 0C0AD61C bt */
L_0C0AD61E: BLKS(0x0C0AD61Eu);
	r0 = 0x1u;  /* 0C0AD61E mov #imm,Rn */
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0AD5A2u, 4); goto L_0C0AD5A2; }  /* 0C0AD620 bra */
L_0C0AD630: BLKS(0x0C0AD630u);
	r8 = 0xC0AFC10u; UPD(0x0C0AD632u, 1);  /* 0C0AD630 mov.l @(disp,pc),Rn */
	IF(0x0C0AD632u); { u32 t_ = r8; PR = 0x0C0AD636u; IF(0x0C0AD634u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0AD636u); }  /* 0C0AD632 jsr @Rn */
L_0C0AD636: BLKS(0x0C0AD636u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AD5A0u, 3); goto L_0C0AD5A0; }  /* 0C0AD636 bra */
L_0C0AD640: BLKS(0x0C0AD640u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AD590u, 3); goto L_0C0AD590; }  /* 0C0AD640 bra */
L_0C0AD650: BLKS(0x0C0AD650u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AD576u, 3); goto L_0C0AD576; }  /* 0C0AD650 bra */
}

void f_0C0AD690(sh3_t *c)
{
	LOCALS;
L_0C0AD690: BLKS(0x0C0AD690u);
	r1 = (u32)(s32)(s16)r4;  /* 0C0AD690 exts.w Rm,Rn */
	r3 = 0x38u;  /* 0C0AD692 mov #imm,Rn */
	IF(0x0C0AD694u); MACL = r1 * r3;  /* 0C0AD694 mul.l Rm,Rn */
	r5 = 0xC275E1Cu; UPD(0x0C0AD698u, 5);  /* 0C0AD696 mov.l @(disp,pc),Rn */
	r0 = 0x4Cu;  /* 0C0AD698 mov #imm,Rn */
	IF(0x0C0AD69Au); r3 = MACL;  /* 0C0AD69A sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD69Eu, 3);  /* 0C0AD69C mov.l Rm,@-Rn */
	r3 += r5;  /* 0C0AD69E add Rm,Rn */
	r3 += 0x34u;  /* 0C0AD6A0 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AD6A4u, 3);  /* 0C0AD6A2 mov.b @Rm,Rn */
	r14 = r15;  /* 0C0AD6A4 mov Rm,Rn */
	r2 = r4 & 0xFF;  /* 0C0AD6A6 extu.b Rm,Rn */
	IF(0x0C0AD6A8u); MACL = r2 * r0;  /* 0C0AD6A8 mul.l Rm,Rn */
	r2 = 0xC26CAE0u; UPD(0x0C0AD6ACu, 5);  /* 0C0AD6AA mov.l @(disp,pc),Rn */
	IF(0x0C0AD6ACu); r0 = MACL;  /* 0C0AD6AC sts macl,Rn */
	IF(0x0C0AD6AEu); r1 = R32(r0 + r2); UPD(0x0C0AD6B0u, 2);  /* 0C0AD6AE mov.l @(r0,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0AD6B0 tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFCCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD6B8u, 4); goto L_0C0AD6B8; } goto L_0C0AD6B6; }  /* 0C0AD6B2 bf/s */
L_0C0AD6B6: BLKS(0x0C0AD6B6u);
	W32(r3, r1); UPD(0x0C0AD6B8u, 2);  /* 0C0AD6B6 mov.l Rm,@Rn */
L_0C0AD6B8: BLKS(0x0C0AD6B8u);
	r6 = r3;  /* 0C0AD6B8 mov Rm,Rn */
	r6 += 0x30u;  /* 0C0AD6BA add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C0AD6BEu, 3);  /* 0C0AD6BC mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0AD6BE add #imm,Rn */
	W8(r6, r0); UPD(0x0C0AD6C2u, 2);  /* 0C0AD6C0 mov.b Rm,@Rn */
	r0 &= 0x7u;  /* 0C0AD6C2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0AD6C4 tst Rm,Rn */
	if (!T) { UPD(0x0C0AD6D0u, 5); goto L_0C0AD6D0; }  /* 0C0AD6C6 bf */
L_0C0AD6C8: BLKS(0x0C0AD6C8u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0AD6CAu, 1);  /* 0C0AD6C8 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0AD6CA add #imm,Rn */
	r0 &= 0x3u;  /* 0C0AD6CC and #imm,r0 */
	W32(r3 + 0xCu, r0); UPD(0x0C0AD6D0u, 3);  /* 0C0AD6CE mov.l Rm,@(disp,Rn) */
L_0C0AD6D0: BLKS(0x0C0AD6D0u);
	r2 = 0xC392D5Cu; UPD(0x0C0AD6D2u, 1);  /* 0C0AD6D0 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AD6D4u, 1);  /* 0C0AD6D2 mov.b @Rm,Rn */
	r4 = 0xC283CB2u; UPD(0x0C0AD6D6u, 1);  /* 0C0AD6D4 mov.l @(disp,pc),Rn */
	r7 = r5 & 0xFF;  /* 0C0AD6D6 extu.b Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AD6DAu, 2);  /* 0C0AD6D8 mov.b @Rm,Rn */
	IF(0x0C0AD6DAu); r7 <<= 16;  /* 0C0AD6DA shll16 Rn */
	r5 = 0xC392B09u; UPD(0x0C0AD6DEu, 2);  /* 0C0AD6DC mov.l @(disp,pc),Rn */
	r6 = r0 & 0xFF;  /* 0C0AD6DE extu.b Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C0AD6E2u, 2);  /* 0C0AD6E0 mov.b @Rm,Rn */
	IF(0x0C0AD6E2u); r6 <<= 8;  /* 0C0AD6E2 shll8 Rn */
	r7 |= r6;  /* 0C0AD6E4 or Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C0AD6E6 extu.b Rm,Rn */
	r7 |= r0;  /* 0C0AD6E8 or Rm,Rn */
	W32(r3 + 0x2Cu, r7); UPD(0x0C0AD6ECu, 5);  /* 0C0AD6EA mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C0AD6EC mov Rm,Rn */
	IF(0x0C0AD6EEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AD6EE rts */
}

void f_0C0AD710(sh3_t *c)
{
	LOCALS;
L_0C0AD710: BLKS(0x0C0AD710u);
	r1 = (u32)(s32)(s16)r4;  /* 0C0AD710 exts.w Rm,Rn */
	r3 = 0x38u;  /* 0C0AD712 mov #imm,Rn */
	IF(0x0C0AD714u); MACL = r1 * r3;  /* 0C0AD714 mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AD718u, 5);  /* 0C0AD716 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD71Au, 1);  /* 0C0AD718 mov.l Rm,@-Rn */
	IF(0x0C0AD71Au); r3 = MACL;  /* 0C0AD71A sts macl,Rn */
	r3 += r0;  /* 0C0AD71C add Rm,Rn */
	r0 = R32(r3 + 0x10u); UPD(0x0C0AD720u, 3);  /* 0C0AD71E mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0AD720 mov Rm,Rn */
	r6 = R32(r3 + 0x14u); UPD(0x0C0AD724u, 2);  /* 0C0AD722 mov.l @(disp,Rm),Rn */
	r4 = R32(r3 + 0x18u); UPD(0x0C0AD726u, 1);  /* 0C0AD724 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x1Cu); UPD(0x0C0AD728u, 1);  /* 0C0AD726 mov.l @(disp,Rm),Rn */
	r0 += r4;  /* 0C0AD728 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0AD72Cu, 2);  /* 0C0AD72A mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0AD72C add Rm,Rn */
	r7 += r0;  /* 0C0AD72E add Rm,Rn */
	W32(r3 + 0x10u, r0); UPD(0x0C0AD732u, 3);  /* 0C0AD730 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AD732u); T = (s32)r7 >= 0;  /* 0C0AD732 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x14u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AD770u, 4); goto L_0C0AD770; } UPD(0x0C0AD738u, 1); goto L_0C0AD738; }  /* 0C0AD734 bf/s */
L_0C0AD738: BLKS(0x0C0AD738u);
	r5 = 0xA00000u; UPD(0x0C0AD73Au, 1);  /* 0C0AD738 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r5;  /* 0C0AD73A cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD758u, 4); goto L_0C0AD758; } goto L_0C0AD740; }  /* 0C0AD73C bt/s */
L_0C0AD740: BLKS(0x0C0AD740u);
	r2 = 0xC3929E0u; UPD(0x0C0AD742u, 2);  /* 0C0AD740 mov.l @(disp,pc),Rn */
	r7 = R32(r2); UPD(0x0C0AD744u, 1);  /* 0C0AD742 mov.l @Rm,Rn */
	r2 = r6;  /* 0C0AD744 mov Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0AD748u, 2);  /* 0C0AD746 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0AD748 sub Rm,Rn */
	r2 += r6;  /* 0C0AD74A add Rm,Rn */
	IF(0x0C0AD74Cu); T = (s32)r2 >= 0;  /* 0C0AD74C cmp/pz Rn */
	if (!T) { UPD(0x0C0AD760u, 6); goto L_0C0AD760; }  /* 0C0AD74E bf */
L_0C0AD750: BLKS(0x0C0AD750u);
	r4 = 0x780000u; UPD(0x0C0AD752u, 1);  /* 0C0AD750 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0AD752 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD75Au, 4); goto L_0C0AD75A; } UPD(0x0C0AD758u, 1); goto L_0C0AD758; }  /* 0C0AD754 bf/s */
L_0C0AD758: BLKS(0x0C0AD758u);
	W32(r3, r0); UPD(0x0C0AD75Au, 1);  /* 0C0AD758 mov.l Rm,@Rn */
L_0C0AD75A: BLKS(0x0C0AD75Au);
	r15 = r14;  /* 0C0AD75A mov Rm,Rn */
	IF(0x0C0AD75Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AD75C rts */
L_0C0AD760: BLKS(0x0C0AD760u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AD750u, 3); goto L_0C0AD750; }  /* 0C0AD760 bra */
L_0C0AD770: BLKS(0x0C0AD770u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0AD738u, 3); goto L_0C0AD738; }  /* 0C0AD770 bra */
}

void f_0C0AD790(sh3_t *c)
{
	LOCALS;
L_0C0AD790: BLKS(0x0C0AD790u);
	r1 = (u32)(s32)(s16)r4;  /* 0C0AD790 exts.w Rm,Rn */
	r3 = 0x38u;  /* 0C0AD792 mov #imm,Rn */
	IF(0x0C0AD794u); MACL = r1 * r3;  /* 0C0AD794 mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0AD798u, 5);  /* 0C0AD796 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD79Au, 1);  /* 0C0AD798 mov.l Rm,@-Rn */
	IF(0x0C0AD79Au); r3 = MACL;  /* 0C0AD79A sts macl,Rn */
	r3 += r0;  /* 0C0AD79C add Rm,Rn */
	r0 = R32(r3 + 0x10u); UPD(0x0C0AD7A0u, 3);  /* 0C0AD79E mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0AD7A0 mov Rm,Rn */
	r6 = R32(r3 + 0x14u); UPD(0x0C0AD7A4u, 2);  /* 0C0AD7A2 mov.l @(disp,Rm),Rn */
	r4 = R32(r3 + 0x18u); UPD(0x0C0AD7A6u, 1);  /* 0C0AD7A4 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x1Cu); UPD(0x0C0AD7A8u, 1);  /* 0C0AD7A6 mov.l @(disp,Rm),Rn */
	r0 += r4;  /* 0C0AD7A8 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0AD7ACu, 2);  /* 0C0AD7AA mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0AD7AC add Rm,Rn */
	r7 += r0;  /* 0C0AD7AE add Rm,Rn */
	W32(r3 + 0x10u, r0); UPD(0x0C0AD7B2u, 3);  /* 0C0AD7B0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AD7B2u); T = (s32)r7 >= 0;  /* 0C0AD7B2 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x14u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AD810u, 4); goto L_0C0AD810; } UPD(0x0C0AD7B8u, 1); goto L_0C0AD7B8; }  /* 0C0AD7B4 bf/s */
L_0C0AD7B8: BLKS(0x0C0AD7B8u);
	r5 = 0xA00000u; UPD(0x0C0AD7BAu, 1);  /* 0C0AD7B8 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r5;  /* 0C0AD7BA cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD7F2u, 4); goto L_0C0AD7F2; } goto L_0C0AD7C0; }  /* 0C0AD7BC bt/s */
L_0C0AD7C0: BLKS(0x0C0AD7C0u);
	r2 = 0xC3929E0u; UPD(0x0C0AD7C2u, 2);  /* 0C0AD7C0 mov.l @(disp,pc),Rn */
	r7 = R32(r2); UPD(0x0C0AD7C4u, 1);  /* 0C0AD7C2 mov.l @Rm,Rn */
	r2 = r6;  /* 0C0AD7C4 mov Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0AD7C8u, 2);  /* 0C0AD7C6 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0AD7C8 sub Rm,Rn */
	r2 += r6;  /* 0C0AD7CA add Rm,Rn */
	IF(0x0C0AD7CCu); T = (s32)r2 >= 0;  /* 0C0AD7CC cmp/pz Rn */
	if (!T) { UPD(0x0C0AD800u, 6); goto L_0C0AD800; }  /* 0C0AD7CE bf */
L_0C0AD7D0: BLKS(0x0C0AD7D0u);
	r4 = 0x780000u; UPD(0x0C0AD7D2u, 1);  /* 0C0AD7D0 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0AD7D2 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD7F2u, 4); goto L_0C0AD7F2; } goto L_0C0AD7D8; }  /* 0C0AD7D4 bt/s */
L_0C0AD7D8: BLKS(0x0C0AD7D8u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0AD7DAu, 2);  /* 0C0AD7D8 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0AD7DA add #imm,Rn */
	T = r0 == 0x8u;  /* 0C0AD7DC cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AD7F0u, 5); goto L_0C0AD7F0; } UPD(0x0C0AD7E2u, 1); goto L_0C0AD7E2; }  /* 0C0AD7DE bt/s */
L_0C0AD7E2: BLKS(0x0C0AD7E2u);
	r15 = r14;  /* 0C0AD7E2 mov Rm,Rn */
	IF(0x0C0AD7E4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AD7E4 rts */
L_0C0AD7F0: BLKS(0x0C0AD7F0u);
	r0 = 0x0u;  /* 0C0AD7F0 mov #imm,Rn */
	UPD(0x0C0AD7F2u, 1);
L_0C0AD7F2: BLKS(0x0C0AD7F2u);
	{ W32(r3, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C0AD7E2u, 3); goto L_0C0AD7E2; }  /* 0C0AD7F2 bra */
L_0C0AD800: BLKS(0x0C0AD800u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AD7D0u, 3); goto L_0C0AD7D0; }  /* 0C0AD800 bra */
L_0C0AD810: BLKS(0x0C0AD810u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0AD7B8u, 3); goto L_0C0AD7B8; }  /* 0C0AD810 bra */
}

/* FUN_0c0ad830 */
void f_0C0AD830(sh3_t *c)
{
	LOCALS;
L_0C0AD830: BLKS(0x0C0AD830u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD832u, 1);  /* 0C0AD830 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD834u, 1);  /* 0C0AD832 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD836u, 1);  /* 0C0AD834 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C0AD836 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD83Au, 2);  /* 0C0AD838 mov.l Rm,@-Rn */
	r10 = r6;  /* 0C0AD83A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD83Eu, 2);  /* 0C0AD83C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD840u, 1);  /* 0C0AD83E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD842u, 1);  /* 0C0AD840 mov.l Rm,@-Rn */
	r13 = r4;  /* 0C0AD842 mov Rm,Rn */
	IF(0x0C0AD844u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD846u, 2);  /* 0C0AD844 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD846 add #imm,Rn */
	r14 = r15;  /* 0C0AD848 mov Rm,Rn */
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0AD84Cu, 3);  /* 0C0AD84A mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x28u); UPD(0x0C0AD84Eu, 1);  /* 0C0AD84C mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0AD84E exts.b Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0AD852u, 2);  /* 0C0AD850 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)r4;  /* 0C0AD852 exts.b Rm,Rn */
	r2 = 0xC1EEBA4u; UPD(0x0C0AD856u, 2);  /* 0C0AD854 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0AD856 mov Rm,Rn */
	W32(r14, r3); UPD(0x0C0AD85Au, 2);  /* 0C0AD858 mov.l Rm,@Rn */
	IF(0x0C0AD85Au); r0 <<= 2;  /* 0C0AD85A shll2 Rn */
	IF(0x0C0AD85Cu); r3 = R32(r0 + r2); UPD(0x0C0AD85Eu, 2);  /* 0C0AD85C mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0AD860u, 1);  /* 0C0AD85E mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0AD860 add Rm,Rn */
	IF(0x0C0AD862u); T = (s32)r2 >= 0;  /* 0C0AD862 cmp/pz Rn */
	{ u32 c_ = !T; r12 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AD930u, 5); goto L_0C0AD930; } UPD(0x0C0AD868u, 1); goto L_0C0AD868; }  /* 0C0AD864 bf/s */
L_0C0AD868: BLKS(0x0C0AD868u);
	r5 = 0xA00000u; UPD(0x0C0AD86Au, 1);  /* 0C0AD868 mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0AD86A add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0AD86C cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD88Au, 5); goto L_0C0AD88A; } goto L_0C0AD872; }  /* 0C0AD86E bt/s */
L_0C0AD872: BLKS(0x0C0AD872u);
	r8 = 0xC3929E0u; UPD(0x0C0AD874u, 2);  /* 0C0AD872 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0AD874 mov Rm,Rn */
	r7 = R32(r8); UPD(0x0C0AD878u, 2);  /* 0C0AD876 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0AD87Au, 1);  /* 0C0AD878 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0AD87A sub Rm,Rn */
	r2 += r6;  /* 0C0AD87C add Rm,Rn */
	IF(0x0C0AD87Eu); T = (s32)r2 >= 0;  /* 0C0AD87E cmp/pz Rn */
	if (!T) { UPD(0x0C0AD920u, 6); goto L_0C0AD920; }  /* 0C0AD880 bf */
L_0C0AD882: BLKS(0x0C0AD882u);
	r11 = 0x780000u; UPD(0x0C0AD884u, 1);  /* 0C0AD882 mov.l @(disp,pc),Rn */
	r3 += r11;  /* 0C0AD884 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0AD886 cmp/ge Rm,Rn */
	IF(0x0C0AD888u); r1 = T;  /* 0C0AD888 movt Rn */
	UPD(0x0C0AD88Au, 3);
L_0C0AD88A: BLKS(0x0C0AD88Au);
	r11 = (u32)(s32)(s16)r1;  /* 0C0AD88A exts.w Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C0AD88C tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD8B0u, 5); goto L_0C0AD8B0; } UPD(0x0C0AD892u, 1); goto L_0C0AD892; }  /* 0C0AD88E bt/s */
L_0C0AD892: BLKS(0x0C0AD892u);
	r14 += 0x8u;  /* 0C0AD892 add #imm,Rn */
	r15 = r14;  /* 0C0AD894 mov Rm,Rn */
	IF(0x0C0AD896u); PR = R32(r15); r15 += 4; UPD(0x0C0AD898u, 3);  /* 0C0AD896 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD89Au, 1);  /* 0C0AD898 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AD89Cu, 1);  /* 0C0AD89A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD89Eu, 1);  /* 0C0AD89C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD8A0u, 1);  /* 0C0AD89E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD8A2u, 1);  /* 0C0AD8A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD8A4u, 1);  /* 0C0AD8A2 mov.l @Rm+,Rn */
	IF(0x0C0AD8A4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD8A4 rts */
L_0C0AD8B0: BLKS(0x0C0AD8B0u);
	r8 = 0xC0AB240u; UPD(0x0C0AD8B2u, 1);  /* 0C0AD8B0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD8B2 add #imm,Rn */
	r2 = R32(r14); UPD(0x0C0AD8B6u, 2);  /* 0C0AD8B4 mov.l @Rm,Rn */
	r4 = r13;  /* 0C0AD8B6 mov Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C0AD8BAu, 2);  /* 0C0AD8B8 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C0AD8BA mov Rm,Rn */
	W32(r15, r2); UPD(0x0C0AD8BEu, 2);  /* 0C0AD8BC mov.l Rm,@Rn */
	r6 = r10;  /* 0C0AD8BE mov Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AD8C2u, 2);  /* 0C0AD8C0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AD8C2u); { u32 t_ = r8; PR = 0x0C0AD8C6u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0AD8C6u); }  /* 0C0AD8C2 jsr @Rn */
L_0C0AD8C6: BLKS(0x0C0AD8C6u);
	r8 = 0xC0AA550u; UPD(0x0C0AD8C8u, 1);  /* 0C0AD8C6 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0AD8C8 add #imm,Rn */
	IF(0x0C0AD8CAu); { u32 t_ = r8; PR = 0x0C0AD8CEu; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0AD8CEu); }  /* 0C0AD8CA jsr @Rn */
L_0C0AD8CE: BLKS(0x0C0AD8CEu);
	T = (r0 & r0) == 0;  /* 0C0AD8CE tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD892u, 4); goto L_0C0AD892; } goto L_0C0AD8D4; }  /* 0C0AD8D0 bt/s */
L_0C0AD8D4: BLKS(0x0C0AD8D4u);
	r8 = 0xC2755BCu; UPD(0x0C0AD8D6u, 2);  /* 0C0AD8D4 mov.l @(disp,pc),Rn */
	r6 = 0x38u;  /* 0C0AD8D6 mov #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C0AD8DAu, 2);  /* 0C0AD8D8 mov.w @Rm,Rn */
	r4 = 0x10u;  /* 0C0AD8DA mov #imm,Rn */
	IF(0x0C0AD8DCu); MACL = r7 * r6;  /* 0C0AD8DC mul.l Rm,Rn */
	r5 = 0xC275E1Cu; UPD(0x0C0AD8E0u, 4);  /* 0C0AD8DE mov.l @(disp,pc),Rn */
	r13 &= r4;  /* 0C0AD8E0 and Rm,Rn */
	IF(0x0C0AD8E2u); r8 = MACL;  /* 0C0AD8E2 sts macl,Rn */
	r8 += r5;  /* 0C0AD8E4 add Rm,Rn */
	W32(r8 + 0x14u, r12); UPD(0x0C0AD8E8u, 4);  /* 0C0AD8E6 mov.l Rm,@(disp,Rn) */
	r4 = 0x14u;  /* 0C0AD8E8 mov #imm,Rn */
	r3 = 0x80000000u; UPD(0x0C0AD8ECu, 2);  /* 0C0AD8EA mov.l @(disp,pc),Rn */
	r12 = 0xC050D70u; UPD(0x0C0AD8EEu, 1);  /* 0C0AD8EC mov.l @(disp,pc),Rn */
	r3 |= r13;  /* 0C0AD8EE or Rm,Rn */
	r13 = 0x4u;  /* 0C0AD8F0 mov #imm,Rn */
	W32(r8 + 0x4u, r9); UPD(0x0C0AD8F4u, 3);  /* 0C0AD8F2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x10u, r10); UPD(0x0C0AD8F6u, 1);  /* 0C0AD8F4 mov.l Rm,@(disp,Rn) */
	W32(r8, r3); UPD(0x0C0AD8F8u, 1);  /* 0C0AD8F6 mov.l Rm,@Rn */
	W32(r8 + 0x8u, r13); UPD(0x0C0AD8FAu, 1);  /* 0C0AD8F8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AD8FAu); { u32 t_ = r12; PR = 0x0C0AD8FEu; W32(r8 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AD8FEu); }  /* 0C0AD8FA jsr @Rn */
L_0C0AD8FE: BLKS(0x0C0AD8FEu);
	r8 += 0x30u;  /* 0C0AD8FE add #imm,Rn */
	r0 += 0x4u;  /* 0C0AD900 add #imm,Rn */
	W8(r8, r0); UPD(0x0C0AD904u, 3);  /* 0C0AD902 mov.b Rm,@Rn */
	r0 = 0x3u;  /* 0C0AD904 mov #imm,Rn */
	IF(0x0C0AD906u); r10 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AD908u, 2);  /* 0C0AD906 mov.b @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0AD908 add #imm,Rn */
	W8(r8, r10); UPD(0x0C0AD90Cu, 2);  /* 0C0AD90A mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0AD90C mov #imm,Rn */
	IF(0x0C0AD90Eu); r9 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0AD910u, 2);  /* 0C0AD90E mov.b @(r0,Rm),Rn */
	{ u32 v_ = r9; r8 -= 1; W8(r8, v_); } UPD(0x0C0AD912u, 1);  /* 0C0AD910 mov.b Rm,@-Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AD892u, 3); goto L_0C0AD892; }  /* 0C0AD912 bra */
L_0C0AD920: BLKS(0x0C0AD920u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AD882u, 3); goto L_0C0AD882; }  /* 0C0AD920 bra */
L_0C0AD930: BLKS(0x0C0AD930u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AD868u, 3); goto L_0C0AD868; }  /* 0C0AD930 bra */
}

/* FUN_0c0ad970 */
void f_0C0AD970(sh3_t *c)
{
	LOCALS;
L_0C0AD970: BLKS(0x0C0AD970u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD972u, 1);  /* 0C0AD970 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD974u, 1);  /* 0C0AD972 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD976u, 1);  /* 0C0AD974 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD978u, 1);  /* 0C0AD976 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD97Au, 1);  /* 0C0AD978 mov.l Rm,@-Rn */
	r11 = r5;  /* 0C0AD97A mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD97Eu, 2);  /* 0C0AD97C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD980u, 1);  /* 0C0AD97E mov.l Rm,@-Rn */
	r13 = r6;  /* 0C0AD980 mov Rm,Rn */
	IF(0x0C0AD982u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD984u, 2);  /* 0C0AD982 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE8u;  /* 0C0AD984 add #imm,Rn */
	r14 = r15;  /* 0C0AD986 mov Rm,Rn */
	r2 = R32(r14 + 0x3Cu); UPD(0x0C0AD98Au, 3);  /* 0C0AD988 mov.l @(disp,Rm),Rn */
	W32(r14, r4); UPD(0x0C0AD98Cu, 1);  /* 0C0AD98A mov.l Rm,@Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0AD98C exts.b Rm,Rn */
	r4 = R32(r14 + 0x38u); UPD(0x0C0AD990u, 2);  /* 0C0AD98E mov.l @(disp,Rm),Rn */
	W32(r14 + 0xCu, r0); UPD(0x0C0AD992u, 1);  /* 0C0AD990 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)r4;  /* 0C0AD992 exts.b Rm,Rn */
	r2 = 0xC1EEBA4u; UPD(0x0C0AD996u, 2);  /* 0C0AD994 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0AD996 mov Rm,Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C0AD99Au, 2);  /* 0C0AD998 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AD99Au); r0 <<= 2;  /* 0C0AD99A shll2 Rn */
	IF(0x0C0AD99Cu); r3 = R32(r0 + r2); UPD(0x0C0AD99Eu, 2);  /* 0C0AD99C mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0AD9A0u, 1);  /* 0C0AD99E mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C0AD9A0 add Rm,Rn */
	IF(0x0C0AD9A2u); T = (s32)r2 >= 0;  /* 0C0AD9A2 cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x4u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AD9ACu, 5); goto L_0C0AD9AC; } UPD(0x0C0AD9A8u, 1); goto L_0C0AD9A8; }  /* 0C0AD9A4 bt/s */
L_0C0AD9A8: BLKS(0x0C0AD9A8u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ADAE0u, 3); goto L_0C0ADAE0; }  /* 0C0AD9A8 bra */
L_0C0AD9AC: BLKS(0x0C0AD9ACu);
	r5 = 0xA00000u; UPD(0x0C0AD9AEu, 1);  /* 0C0AD9AC mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0AD9AE add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0AD9B0 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD9D0u, 5); goto L_0C0AD9D0; } goto L_0C0AD9B6; }  /* 0C0AD9B2 bt/s */
L_0C0AD9B6: BLKS(0x0C0AD9B6u);
	r8 = 0xC3929E0u; UPD(0x0C0AD9B8u, 2);  /* 0C0AD9B6 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0AD9BAu, 1);  /* 0C0AD9B8 mov.l @(disp,Rm),Rn */
	r7 = R32(r8); UPD(0x0C0AD9BCu, 1);  /* 0C0AD9BA mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0AD9BEu, 1);  /* 0C0AD9BC mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0AD9BE sub Rm,Rn */
	r2 += r6;  /* 0C0AD9C0 add Rm,Rn */
	IF(0x0C0AD9C2u); T = (s32)r2 >= 0;  /* 0C0AD9C2 cmp/pz Rn */
	if (T) { UPD(0x0C0AD9C8u, 6); goto L_0C0AD9C8; }  /* 0C0AD9C4 bt */
L_0C0AD9C6: BLKS(0x0C0AD9C6u);
	r2 = 0u - r2;  /* 0C0AD9C6 neg Rm,Rn */
	UPD(0x0C0AD9C8u, 1);
L_0C0AD9C8: BLKS(0x0C0AD9C8u);
	r9 = 0x780000u; UPD(0x0C0AD9CAu, 1);  /* 0C0AD9C8 mov.l @(disp,pc),Rn */
	r3 += r9;  /* 0C0AD9CA add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0AD9CC cmp/ge Rm,Rn */
	IF(0x0C0AD9CEu); r1 = T;  /* 0C0AD9CE movt Rn */
	UPD(0x0C0AD9D0u, 3);
L_0C0AD9D0: BLKS(0x0C0AD9D0u);
	r10 = (u32)(s32)(s16)r1;  /* 0C0AD9D0 exts.w Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0AD9D2 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD9F0u, 5); goto L_0C0AD9F0; } UPD(0x0C0AD9D8u, 1); goto L_0C0AD9D8; }  /* 0C0AD9D4 bt/s */
L_0C0AD9D8: BLKS(0x0C0AD9D8u);
	r14 += 0x18u;  /* 0C0AD9D8 add #imm,Rn */
	r15 = r14;  /* 0C0AD9DA mov Rm,Rn */
	IF(0x0C0AD9DCu); PR = R32(r15); r15 += 4; UPD(0x0C0AD9DEu, 3);  /* 0C0AD9DC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD9E0u, 1);  /* 0C0AD9DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AD9E2u, 1);  /* 0C0AD9E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD9E4u, 1);  /* 0C0AD9E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD9E6u, 1);  /* 0C0AD9E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD9E8u, 1);  /* 0C0AD9E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD9EAu, 1);  /* 0C0AD9E8 mov.l @Rm+,Rn */
	IF(0x0C0AD9EAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD9EA rts */
L_0C0AD9F0: BLKS(0x0C0AD9F0u);
	r12 = 0xC0AFE40u; UPD(0x0C0AD9F2u, 1);  /* 0C0AD9F0 mov.l @(disp,pc),Rn */
	r9 = 0x7u;  /* 0C0AD9F2 mov #imm,Rn */
	IF(0x0C0AD9F4u); { u32 t_ = r12; PR = 0x0C0AD9F8u; r9 &= r11; /* slot and Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AD9F8u); }  /* 0C0AD9F4 jsr @Rn */
L_0C0AD9F8: BLKS(0x0C0AD9F8u);
	r3 = 0x1FFu; UPD(0x0C0AD9FAu, 1);  /* 0C0AD9F8 mov.w @(disp,pc),Rn */
	r10 = r0;  /* 0C0AD9FA mov Rm,Rn */
	IF(0x0C0AD9FCu); { u32 t_ = r12; PR = 0x0C0ADA00u; r10 &= r3; /* slot and Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0ADA00u); }  /* 0C0AD9FC jsr @Rn */
L_0C0ADA00: BLKS(0x0C0ADA00u);
	r0 &= 0x1Fu;  /* 0C0ADA00 and #imm,r0 */
	r0 += 0xFFFFFFF0u;  /* 0C0ADA02 add #imm,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C0ADA04 exts.w Rm,Rn */
	r0 = 0xC1EEDF4u; UPD(0x0C0ADA08u, 4);  /* 0C0ADA06 mov.l @(disp,pc),Rn */
	IF(0x0C0ADA08u); r9 <<= 2;  /* 0C0ADA08 shll2 Rn */
	r12 = 0xC050D70u; UPD(0x0C0ADA0Cu, 2);  /* 0C0ADA0A mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C0ADA0C add Rm,Rn */
	r4 = R32(r9); UPD(0x0C0ADA10u, 2);  /* 0C0ADA0E mov.l @Rm,Rn */
	IF(0x0C0ADA10u); { u32 t_ = r12; PR = 0x0C0ADA14u; W32(r14 + 0x10u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0ADA14u); }  /* 0C0ADA10 jsr @Rn */
L_0C0ADA14: BLKS(0x0C0ADA14u);
	r4 = R32(r9); UPD(0x0C0ADA16u, 1);  /* 0C0ADA14 mov.l @Rm,Rn */
	r0 += r4;  /* 0C0ADA16 add Rm,Rn */
	r1 = r0;  /* 0C0ADA18 mov Rm,Rn */
	IF(0x0C0ADA1Au); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C0ADA1A rotl Rn */
	IF(0x0C0ADA1Cu); r8 = T;  /* 0C0ADA1C movt Rn */
	IF(0x0C0ADA1Eu); { u32 t_ = r12; PR = 0x0C0ADA22u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 6); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0ADA22u); }  /* 0C0ADA1E jsr @Rn */
L_0C0ADA22: BLKS(0x0C0ADA22u);
	W32(r14 + 0x14u, r0); UPD(0x0C0ADA24u, 1);  /* 0C0ADA22 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ADA24u); T = r8 & 1; r8 = (u32)((s32)r8 >> 1);  /* 0C0ADA24 shar Rn */
	r9 = 0x0u;  /* 0C0ADA26 mov #imm,Rn */
	UPD(0x0C0ADA28u, 2);
L_0C0ADA28: BLKS(0x0C0ADA28u);
	r12 = 0xC0AFE40u; UPD(0x0C0ADA2Au, 1);  /* 0C0ADA28 mov.l @(disp,pc),Rn */
	IF(0x0C0ADA2Au); { u32 t_ = r12; PR = 0x0C0ADA2Eu; IF(0x0C0ADA2Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0ADA2Eu); }  /* 0C0ADA2A jsr @Rn */
L_0C0ADA2E: BLKS(0x0C0ADA2Eu);
	r0 &= 0xFu;  /* 0C0ADA2E and #imm,r0 */
	r0 += 0x4u;  /* 0C0ADA30 add #imm,Rn */
	T = (s32)r9 >= (s32)r0;  /* 0C0ADA32 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0ADA80u, 6); goto L_0C0ADA80; }  /* 0C0ADA34 bt */
L_0C0ADA36: BLKS(0x0C0ADA36u);
	r15 += 0xFFFFFFF0u;  /* 0C0ADA36 add #imm,Rn */
	r12 = 0xC058060u; UPD(0x0C0ADA3Au, 2);  /* 0C0ADA38 mov.l @(disp,pc),Rn */
	r3 = R32(r14 + 0x8u); UPD(0x0C0ADA3Cu, 1);  /* 0C0ADA3A mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0ADA3C mov Rm,Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C0ADA40u, 2);  /* 0C0ADA3E mov.l @(disp,Rm),Rn */
	r5 = r8;  /* 0C0ADA40 mov Rm,Rn */
	W32(r15, r3); UPD(0x0C0ADA44u, 2);  /* 0C0ADA42 mov.l Rm,@Rn */
	IF(0x0C0ADA44u); { u32 t_ = r12; PR = 0x0C0ADA48u; W32(r15 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0ADA48u); }  /* 0C0ADA44 jsr @Rn */
L_0C0ADA48: BLKS(0x0C0ADA48u);
	r7 = 0xC058030u; UPD(0x0C0ADA4Au, 1);  /* 0C0ADA48 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0ADA4A mov Rm,Rn */
	r5 = r8;  /* 0C0ADA4C mov Rm,Rn */
	IF(0x0C0ADA4Eu); { u32 t_ = r7; PR = 0x0C0ADA52u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0ADA52u); }  /* 0C0ADA4E jsr @Rn */
L_0C0ADA52: BLKS(0x0C0ADA52u);
	r2 = 0xC0AC540u; UPD(0x0C0ADA54u, 1);  /* 0C0ADA52 mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C0ADA54 mov Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0ADA58u, 2);  /* 0C0ADA56 mov.l Rm,@(disp,Rn) */
	r6 = r13;  /* 0C0ADA58 mov Rm,Rn */
	r4 = R32(r14); UPD(0x0C0ADA5Cu, 2);  /* 0C0ADA5A mov.l @Rm,Rn */
	IF(0x0C0ADA5Cu); { u32 t_ = r2; PR = 0x0C0ADA60u; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC540, 0x0C0AC540u, 0x0C0ADA60u); }  /* 0C0ADA5C jsr @Rn */
L_0C0ADA60: BLKS(0x0C0ADA60u);
	r6 = R32(r14 + 0x10u); UPD(0x0C0ADA62u, 1);  /* 0C0ADA60 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0ADA62 mov Rm,Rn */
	r5 = R32(r14 + 0x14u); UPD(0x0C0ADA66u, 2);  /* 0C0ADA64 mov.l @(disp,Rm),Rn */
	r6 += r10;  /* 0C0ADA66 add Rm,Rn */
	r4 += 0x1u;  /* 0C0ADA68 add #imm,Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C0ADA6A exts.w Rm,Rn */
	r8 += r5;  /* 0C0ADA6C add Rm,Rn */
	r15 += 0x10u;  /* 0C0ADA6E add #imm,Rn */
	{ r9 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ UPD(0x0C0ADA28u, 8); goto L_0C0ADA28; }  /* 0C0ADA70 bra */
L_0C0ADA80: BLKS(0x0C0ADA80u);
	r9 = R32(r14 + 0xCu); UPD(0x0C0ADA82u, 1);  /* 0C0ADA80 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0ADA82 add #imm,Rn */
	W32(r15, r9); UPD(0x0C0ADA86u, 2);  /* 0C0ADA84 mov.l Rm,@Rn */
	r5 = r13;  /* 0C0ADA86 mov Rm,Rn */
	r9 = r11;  /* 0C0ADA88 mov Rm,Rn */
	r10 = 0xC1EEB80u; UPD(0x0C0ADA8Cu, 3);  /* 0C0ADA8A mov.l @(disp,pc),Rn */
	r9 += r9;  /* 0C0ADA8C add Rm,Rn */
	r10 += r9;  /* 0C0ADA8E add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C0ADA92u, 3);  /* 0C0ADA90 mov.w @Rm,Rn */
	r11 = 0x3Fu;  /* 0C0ADA92 mov #imm,Rn */
	r2 = 0xC0AABB0u; UPD(0x0C0ADA96u, 2);  /* 0C0ADA94 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0ADA98u, 1);  /* 0C0ADA96 mov.l Rm,@(disp,Rn) */
	r6 = R32(r14 + 0x4u); UPD(0x0C0ADA9Au, 1);  /* 0C0ADA98 mov.l @(disp,Rm),Rn */
	r4 = R32(r14); UPD(0x0C0ADA9Cu, 1);  /* 0C0ADA9A mov.l @Rm,Rn */
	IF(0x0C0ADA9Cu); { u32 t_ = r2; PR = 0x0C0ADAA0u; r7 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AABB0, 0x0C0AABB0u, 0x0C0ADAA0u); }  /* 0C0ADA9C jsr @Rn */
L_0C0ADAA0: BLKS(0x0C0ADAA0u);
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C0ADAA2u, 1);  /* 0C0ADAA0 mov.w @Rm,Rn */
	r4 = r13;  /* 0C0ADAA2 mov Rm,Rn */
	r8 = 0xC0AAFE0u; UPD(0x0C0ADAA6u, 2);  /* 0C0ADAA4 mov.l @(disp,pc),Rn */
	r1 += r1;  /* 0C0ADAA6 add Rm,Rn */
	r15 += 0x8u;  /* 0C0ADAA8 add #imm,Rn */
	r7 = (u32)(s32)(s16)r1;  /* 0C0ADAAA exts.w Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0ADAAEu, 4);  /* 0C0ADAAC mov.l @(disp,Rm),Rn */
	IF(0x0C0ADAAEu); { u32 t_ = r8; PR = 0x0C0ADAB2u; r6 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AAFE0, 0x0C0AAFE0u, 0x0C0ADAB2u); }  /* 0C0ADAAE jsr @Rn */
L_0C0ADAB2: BLKS(0x0C0ADAB2u);
	r10 = 0xC1EEBF4u; UPD(0x0C0ADAB4u, 1);  /* 0C0ADAB2 mov.l @(disp,pc),Rn */
	IF(0x0C0ADAB4u); { u32 t_ = r12; PR = 0x0C0ADAB8u; r10 += r9; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0ADAB8u); }  /* 0C0ADAB4 jsr @Rn */
L_0C0ADAB8: BLKS(0x0C0ADAB8u);
	r0 &= 0x1u;  /* 0C0ADAB8 and #imm,r0 */
	IF(0x0C0ADABAu); r13 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0ADABCu, 2);  /* 0C0ADABA mov.b @(r0,Rm),Rn */
	r4 = r13 & 0xFF;  /* 0C0ADABC extu.b Rm,Rn */
	T = r4 > r11;  /* 0C0ADABE cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0ADAD0u, 5); goto L_0C0ADAD0; }  /* 0C0ADAC0 bt */
L_0C0ADAC2: BLKS(0x0C0ADAC2u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AD9D8u, 3); goto L_0C0AD9D8; }  /* 0C0ADAC2 bra */
L_0C0ADAD0: BLKS(0x0C0ADAD0u);
	r12 = 0xC0AFC10u; UPD(0x0C0ADAD2u, 1);  /* 0C0ADAD0 mov.l @(disp,pc),Rn */
	IF(0x0C0ADAD2u); { u32 t_ = r12; PR = 0x0C0ADAD6u; IF(0x0C0ADAD4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0ADAD6u); }  /* 0C0ADAD2 jsr @Rn */
L_0C0ADAD6: BLKS(0x0C0ADAD6u);
	{ IF(0x0C0ADAD8u); ; /* slot nop */ UPD(0x0C0ADAC2u, 3); goto L_0C0ADAC2; }  /* 0C0ADAD6 bra */
L_0C0ADAE0: BLKS(0x0C0ADAE0u);
	{ IF(0x0C0ADAE2u); ; /* slot nop */ UPD(0x0C0AD9ACu, 3); goto L_0C0AD9AC; }  /* 0C0ADAE0 bra */
}

/* FUN_0c0adb30 */
void f_0C0ADB30(sh3_t *c)
{
	LOCALS;
L_0C0ADB30: BLKS(0x0C0ADB30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADB32u, 1);  /* 0C0ADB30 mov.l Rm,@-Rn */
	r3 = 0x40u;  /* 0C0ADB32 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADB36u, 2);  /* 0C0ADB34 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADB38u, 1);  /* 0C0ADB36 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADB3Au, 1);  /* 0C0ADB38 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADB3Cu, 1);  /* 0C0ADB3A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADB3Eu, 1);  /* 0C0ADB3C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADB40u, 1);  /* 0C0ADB3E mov.l Rm,@-Rn */
	IF(0x0C0ADB40u); r15 -= 4; W32(r15, PR); UPD(0x0C0ADB42u, 1);  /* 0C0ADB40 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE0u;  /* 0C0ADB42 add #imm,Rn */
	r14 = r15;  /* 0C0ADB44 mov Rm,Rn */
	W32(r14 + 0xCu, r7); UPD(0x0C0ADB48u, 3);  /* 0C0ADB46 mov.l Rm,@(disp,Rn) */
	r3 += r14;  /* 0C0ADB48 add Rm,Rn */
	r7 = R32(r3 + 0x0u); UPD(0x0C0ADB4Cu, 2);  /* 0C0ADB4A mov.l @(disp,Rm),Rn */
	W32(r14, r4); UPD(0x0C0ADB4Eu, 1);  /* 0C0ADB4C mov.l Rm,@Rn */
	r4 = (u32)(s32)(s8)r7;  /* 0C0ADB4E exts.b Rm,Rn */
	W32(r14 + 0x10u, r4); UPD(0x0C0ADB52u, 2);  /* 0C0ADB50 mov.l Rm,@(disp,Rn) */
	r7 = r5;  /* 0C0ADB52 mov Rm,Rn */
	r2 = R32(r3 + 0x4u); UPD(0x0C0ADB56u, 2);  /* 0C0ADB54 mov.l @(disp,Rm),Rn */
	IF(0x0C0ADB56u); r7 <<= 2;  /* 0C0ADB56 shll2 Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C0ADB58 exts.b Rm,Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C0ADB5Cu, 3);  /* 0C0ADB5A mov.l Rm,@(disp,Rn) */
	r2 = 0xC1EEBA4u; UPD(0x0C0ADB5Eu, 1);  /* 0C0ADB5C mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0ADB5E mov Rm,Rn */
	IF(0x0C0ADB60u); r3 = R32(r0 + r2); UPD(0x0C0ADB62u, 2);  /* 0C0ADB60 mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0ADB64u, 1);  /* 0C0ADB62 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0ADB66u, 1);  /* 0C0ADB64 mov.l Rm,@(disp,Rn) */
	r2 += r6;  /* 0C0ADB66 add Rm,Rn */
	IF(0x0C0ADB68u); T = (s32)r2 >= 0;  /* 0C0ADB68 cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0ADB72u, 5); goto L_0C0ADB72; } UPD(0x0C0ADB6Eu, 1); goto L_0C0ADB6E; }  /* 0C0ADB6A bt/s */
L_0C0ADB6E: BLKS(0x0C0ADB6Eu);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ADCC0u, 3); goto L_0C0ADCC0; }  /* 0C0ADB6E bra */
L_0C0ADB72: BLKS(0x0C0ADB72u);
	r5 = 0xA00000u; UPD(0x0C0ADB74u, 1);  /* 0C0ADB72 mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0ADB74 add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0ADB76 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ADB96u, 5); goto L_0C0ADB96; } goto L_0C0ADB7C; }  /* 0C0ADB78 bt/s */
L_0C0ADB7C: BLKS(0x0C0ADB7Cu);
	r9 = 0xC3929E0u; UPD(0x0C0ADB7Eu, 2);  /* 0C0ADB7C mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0ADB80u, 1);  /* 0C0ADB7E mov.l @(disp,Rm),Rn */
	r8 = R32(r9); UPD(0x0C0ADB82u, 1);  /* 0C0ADB80 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0ADB84u, 1);  /* 0C0ADB82 mov.l @(disp,pc),Rn */
	r2 -= r8;  /* 0C0ADB84 sub Rm,Rn */
	r2 += r6;  /* 0C0ADB86 add Rm,Rn */
	IF(0x0C0ADB88u); T = (s32)r2 >= 0;  /* 0C0ADB88 cmp/pz Rn */
	if (T) { UPD(0x0C0ADB8Eu, 6); goto L_0C0ADB8E; }  /* 0C0ADB8A bt */
L_0C0ADB8C: BLKS(0x0C0ADB8Cu);
	r2 = 0u - r2;  /* 0C0ADB8C neg Rm,Rn */
	UPD(0x0C0ADB8Eu, 1);
L_0C0ADB8E: BLKS(0x0C0ADB8Eu);
	r10 = 0x780000u; UPD(0x0C0ADB90u, 1);  /* 0C0ADB8E mov.l @(disp,pc),Rn */
	r3 += r10;  /* 0C0ADB90 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0ADB92 cmp/ge Rm,Rn */
	IF(0x0C0ADB94u); r1 = T;  /* 0C0ADB94 movt Rn */
	UPD(0x0C0ADB96u, 3);
L_0C0ADB96: BLKS(0x0C0ADB96u);
	r11 = (u32)(s32)(s16)r1;  /* 0C0ADB96 exts.w Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C0ADB98 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ADBC0u, 5); goto L_0C0ADBC0; } UPD(0x0C0ADB9Eu, 1); goto L_0C0ADB9E; }  /* 0C0ADB9A bt/s */
L_0C0ADB9E: BLKS(0x0C0ADB9Eu);
	r14 += 0x20u;  /* 0C0ADB9E add #imm,Rn */
	r15 = r14;  /* 0C0ADBA0 mov Rm,Rn */
	IF(0x0C0ADBA2u); PR = R32(r15); r15 += 4; UPD(0x0C0ADBA4u, 3);  /* 0C0ADBA2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ADBA6u, 1);  /* 0C0ADBA4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0ADBA8u, 1);  /* 0C0ADBA6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0ADBAAu, 1);  /* 0C0ADBA8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ADBACu, 1);  /* 0C0ADBAA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ADBAEu, 1);  /* 0C0ADBAC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ADBB0u, 1);  /* 0C0ADBAE mov.l @Rm+,Rn */
	IF(0x0C0ADBB0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ADBB0 rts */
L_0C0ADBC0: BLKS(0x0C0ADBC0u);
	r8 = 0xC0AFE40u; UPD(0x0C0ADBC2u, 1);  /* 0C0ADBC0 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0ADBC2 mov Rm,Rn */
	r2 = 0xC1EEE14u; UPD(0x0C0ADBC6u, 2);  /* 0C0ADBC4 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0ADBC6 mov #imm,Rn */
	r13 = 0xC050D70u; UPD(0x0C0ADBCAu, 2);  /* 0C0ADBC8 mov.l @(disp,pc),Rn */
	IF(0x0C0ADBCAu); { u32 t_ = r8; PR = 0x0C0ADBCEu; IF(0x0C0ADBCCu); r10 = R32(r0 + r2); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0ADBCEu); }  /* 0C0ADBCA jsr @Rn */
L_0C0ADBCE: BLKS(0x0C0ADBCEu);
	r4 = 0x3u;  /* 0C0ADBCE mov #imm,Rn */
	IF(0x0C0ADBD0u); { u32 t_ = r13; PR = 0x0C0ADBD4u; r11 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0ADBD4u); }  /* 0C0ADBD0 jsr @Rn */
L_0C0ADBD4: BLKS(0x0C0ADBD4u);
	r0 += 0x1u;  /* 0C0ADBD4 add #imm,Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C0ADBD6 exts.w Rm,Rn */
	r4 = r10;  /* 0C0ADBD8 mov Rm,Rn */
	IF(0x0C0ADBDAu); { u32 t_ = r13; PR = 0x0C0ADBDEu; W32(r14 + 0x1Cu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0ADBDEu); }  /* 0C0ADBDA jsr @Rn */
L_0C0ADBDE: BLKS(0x0C0ADBDEu);
	W32(r14 + 0x18u, r12); UPD(0x0C0ADBE0u, 1);  /* 0C0ADBDE mov.l Rm,@(disp,Rn) */
	r13 = r0;  /* 0C0ADBE0 mov Rm,Rn */
	IF(0x0C0ADBE2u); T = r10 & 1; r10 = (u32)((s32)r10 >> 1);  /* 0C0ADBE2 shar Rn */
	r13 += r10;  /* 0C0ADBE4 add Rm,Rn */
	r12 = 0x0u;  /* 0C0ADBE6 mov #imm,Rn */
	UPD(0x0C0ADBE8u, 4);
L_0C0ADBE8: BLKS(0x0C0ADBE8u);
	r9 = 0xC058060u; UPD(0x0C0ADBEAu, 1);  /* 0C0ADBE8 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0ADBEA mov Rm,Rn */
	IF(0x0C0ADBECu); { u32 t_ = r9; PR = 0x0C0ADBF0u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0ADBF0u); }  /* 0C0ADBEC jsr @Rn */
L_0C0ADBF0: BLKS(0x0C0ADBF0u);
	r7 = 0xC0AFF74u; UPD(0x0C0ADBF2u, 1);  /* 0C0ADBF0 mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C0ADBF2 mov Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C0ADBF6u, 2);  /* 0C0ADBF4 mov.l @(disp,pc),Rn */
	IF(0x0C0ADBF6u); { u32 t_ = r7; PR = 0x0C0ADBFAu; r5 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFF74, 0x0C0AFF74u, 0x0C0ADBFAu); }  /* 0C0ADBF6 jsr @Rn */
L_0C0ADBFA: BLKS(0x0C0ADBFAu);
	r9 = r0;  /* 0C0ADBFA mov Rm,Rn */
	r4 = r12;  /* 0C0ADBFC mov Rm,Rn */
	IF(0x0C0ADBFEu); { u32 t_ = r10; PR = 0x0C0ADC02u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0ADC02u); }  /* 0C0ADBFE jsr @Rn */
L_0C0ADC02: BLKS(0x0C0ADC02u);
	r5 = R32(r14 + 0x14u); UPD(0x0C0ADC04u, 1);  /* 0C0ADC02 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0ADC04 add #imm,Rn */
	r10 = r0;  /* 0C0ADC06 mov Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C0ADC0Au, 3);  /* 0C0ADC08 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0ADC0A mov Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0ADC0Eu, 2);  /* 0C0ADC0C mov.l Rm,@(disp,Rn) */
	r12 += 0x10u;  /* 0C0ADC0E add #imm,Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0ADC12u, 2);  /* 0C0ADC10 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C0ADC12 mov Rm,Rn */
	IF(0x0C0ADC14u); { u32 t_ = r8; PR = 0x0C0ADC18u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0ADC18u); }  /* 0C0ADC14 jsr @Rn */
L_0C0ADC18: BLKS(0x0C0ADC18u);
	r3 = 0xC058030u; UPD(0x0C0ADC1Au, 1);  /* 0C0ADC18 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C0ADC1A mov Rm,Rn */
	r4 = r11;  /* 0C0ADC1C mov Rm,Rn */
	IF(0x0C0ADC1Eu); { u32 t_ = r3; PR = 0x0C0ADC22u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0ADC22u); }  /* 0C0ADC1E jsr @Rn */
L_0C0ADC22: BLKS(0x0C0ADC22u);
	r1 = 0xC058030u; UPD(0x0C0ADC24u, 1);  /* 0C0ADC22 mov.l @(disp,pc),Rn */
	r8 -= r0;  /* 0C0ADC24 sub Rm,Rn */
	r5 = r9;  /* 0C0ADC26 mov Rm,Rn */
	W32(r15 + 0x8u, r8); UPD(0x0C0ADC2Au, 3);  /* 0C0ADC28 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ADC2Au); { u32 t_ = r1; PR = 0x0C0ADC2Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0ADC2Eu); }  /* 0C0ADC2A jsr @Rn */
L_0C0ADC2E: BLKS(0x0C0ADC2Eu);
	r6 = 0xC058060u; UPD(0x0C0ADC30u, 1);  /* 0C0ADC2E mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C0ADC30 mov Rm,Rn */
	r4 = r11;  /* 0C0ADC32 mov Rm,Rn */
	IF(0x0C0ADC34u); { u32 t_ = r6; PR = 0x0C0ADC38u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0ADC38u); }  /* 0C0ADC34 jsr @Rn */
L_0C0ADC38: BLKS(0x0C0ADC38u);
	r9 += r0;  /* 0C0ADC38 add Rm,Rn */
	W32(r15 + 0xCu, r9); UPD(0x0C0ADC3Cu, 2);  /* 0C0ADC3A mov.l Rm,@(disp,Rn) */
	r9 = 0xC0AC6A0u; UPD(0x0C0ADC3Eu, 1);  /* 0C0ADC3C mov.l @(disp,pc),Rn */
	r7 = R32(r14 + 0xCu); UPD(0x0C0ADC40u, 1);  /* 0C0ADC3E mov.l @(disp,Rm),Rn */
	r4 = R32(r14); UPD(0x0C0ADC42u, 1);  /* 0C0ADC40 mov.l @Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0ADC44u, 1);  /* 0C0ADC42 mov.l @(disp,Rm),Rn */
	IF(0x0C0ADC44u); { u32 t_ = r9; PR = 0x0C0ADC48u; r6 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC6A0, 0x0C0AC6A0u, 0x0C0ADC48u); }  /* 0C0ADC44 jsr @Rn */
L_0C0ADC48: BLKS(0x0C0ADC48u);
	r7 = R32(r14 + 0x18u); UPD(0x0C0ADC4Au, 1);  /* 0C0ADC48 mov.l @(disp,Rm),Rn */
	r0 = 0x1Fu;  /* 0C0ADC4A mov #imm,Rn */
	r7 += 0x1u;  /* 0C0ADC4C add #imm,Rn */
	r4 = (u32)(s32)(s16)r7;  /* 0C0ADC4E exts.w Rm,Rn */
	W32(r14 + 0x18u, r4); UPD(0x0C0ADC52u, 4);  /* 0C0ADC50 mov.l Rm,@(disp,Rn) */
	r3 = R32(r14 + 0x18u); UPD(0x0C0ADC54u, 1);  /* 0C0ADC52 mov.l @(disp,Rm),Rn */
	T = (s32)r3 > (s32)r0;  /* 0C0ADC54 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0ADBE8u, 4); goto L_0C0ADBE8; } goto L_0C0ADC5A; }  /* 0C0ADC56 bf/s */
L_0C0ADC5A: BLKS(0x0C0ADC5Au);
	r1 = R32(r14 + 0x14u); UPD(0x0C0ADC5Cu, 2);  /* 0C0ADC5A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0ADC5C add #imm,Rn */
	r10 = R32(r14 + 0x4u); UPD(0x0C0ADC60u, 2);  /* 0C0ADC5E mov.l @(disp,Rm),Rn */
	r11 = 0x3Fu;  /* 0C0ADC60 mov #imm,Rn */
	r9 = 0xC1EEB80u; UPD(0x0C0ADC64u, 2);  /* 0C0ADC62 mov.l @(disp,pc),Rn */
	r10 += r10;  /* 0C0ADC64 add Rm,Rn */
	W32(r15, r1); UPD(0x0C0ADC68u, 2);  /* 0C0ADC66 mov.l Rm,@Rn */
	r9 += r10;  /* 0C0ADC68 add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C0ADC6Cu, 2);  /* 0C0ADC6A mov.w @Rm,Rn */
	r3 = 0xC0AABB0u; UPD(0x0C0ADC6Eu, 1);  /* 0C0ADC6C mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0ADC70u, 1);  /* 0C0ADC6E mov.l Rm,@(disp,Rn) */
	r4 = R32(r14); UPD(0x0C0ADC72u, 1);  /* 0C0ADC70 mov.l @Rm,Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C0ADC74u, 1);  /* 0C0ADC72 mov.l @(disp,Rm),Rn */
	r6 = R32(r14 + 0xCu); UPD(0x0C0ADC76u, 1);  /* 0C0ADC74 mov.l @(disp,Rm),Rn */
	IF(0x0C0ADC76u); { u32 t_ = r3; PR = 0x0C0ADC7Au; r7 = R32(r14 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AABB0, 0x0C0AABB0u, 0x0C0ADC7Au); }  /* 0C0ADC76 jsr @Rn */
L_0C0ADC7A: BLKS(0x0C0ADC7Au);
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0ADC7Cu, 1);  /* 0C0ADC7A mov.w @Rm,Rn */
	r15 += 0x8u;  /* 0C0ADC7C add #imm,Rn */
	r2 = 0xC0AAFE0u; UPD(0x0C0ADC80u, 2);  /* 0C0ADC7E mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C0ADC80 add Rm,Rn */
	r8 = 0xC0AFE40u; UPD(0x0C0ADC84u, 2);  /* 0C0ADC82 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r4;  /* 0C0ADC84 exts.w Rm,Rn */
	r4 = R32(r14 + 0x8u); UPD(0x0C0ADC88u, 2);  /* 0C0ADC86 mov.l @(disp,Rm),Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C0ADC8Au, 1);  /* 0C0ADC88 mov.l @(disp,Rm),Rn */
	IF(0x0C0ADC8Au); { u32 t_ = r2; PR = 0x0C0ADC8Eu; r6 = R32(r14 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AAFE0, 0x0C0AAFE0u, 0x0C0ADC8Eu); }  /* 0C0ADC8A jsr @Rn */
L_0C0ADC8E: BLKS(0x0C0ADC8Eu);
	r13 = 0xC1EEBF4u; UPD(0x0C0ADC90u, 1);  /* 0C0ADC8E mov.l @(disp,pc),Rn */
	IF(0x0C0ADC90u); { u32 t_ = r8; PR = 0x0C0ADC94u; r13 += r10; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0ADC94u); }  /* 0C0ADC90 jsr @Rn */
L_0C0ADC94: BLKS(0x0C0ADC94u);
	r0 &= 0x1u;  /* 0C0ADC94 and #imm,r0 */
	IF(0x0C0ADC96u); r12 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0ADC98u, 2);  /* 0C0ADC96 mov.b @(r0,Rm),Rn */
	r4 = r12 & 0xFF;  /* 0C0ADC98 extu.b Rm,Rn */
	T = r4 > r11;  /* 0C0ADC9A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0ADCB0u, 5); goto L_0C0ADCB0; }  /* 0C0ADC9C bt */
L_0C0ADC9E: BLKS(0x0C0ADC9Eu);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0ADB9Eu, 3); goto L_0C0ADB9E; }  /* 0C0ADC9E bra */
L_0C0ADCB0: BLKS(0x0C0ADCB0u);
	r11 = 0xC0AFC10u; UPD(0x0C0ADCB2u, 1);  /* 0C0ADCB0 mov.l @(disp,pc),Rn */
	IF(0x0C0ADCB2u); { u32 t_ = r11; PR = 0x0C0ADCB6u; IF(0x0C0ADCB4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0ADCB6u); }  /* 0C0ADCB2 jsr @Rn */
L_0C0ADCB6: BLKS(0x0C0ADCB6u);
	{ IF(0x0C0ADCB8u); ; /* slot nop */ UPD(0x0C0ADC9Eu, 3); goto L_0C0ADC9E; }  /* 0C0ADCB6 bra */
L_0C0ADCC0: BLKS(0x0C0ADCC0u);
	{ IF(0x0C0ADCC2u); ; /* slot nop */ UPD(0x0C0ADB72u, 3); goto L_0C0ADB72; }  /* 0C0ADCC0 bra */
}

/* FUN_0c0add10 */
void f_0C0ADD10(sh3_t *c)
{
	LOCALS;
L_0C0ADD10: BLKS(0x0C0ADD10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADD12u, 1);  /* 0C0ADD10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADD14u, 1);  /* 0C0ADD12 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADD16u, 1);  /* 0C0ADD14 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADD18u, 1);  /* 0C0ADD16 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C0ADD18 mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADD1Cu, 2);  /* 0C0ADD1A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r6;  /* 0C0ADD1C exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADD20u, 2);  /* 0C0ADD1E mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r7;  /* 0C0ADD20 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADD24u, 2);  /* 0C0ADD22 mov.l Rm,@-Rn */
	r13 = r5;  /* 0C0ADD24 mov Rm,Rn */
	r8 = 0xC0AA550u; UPD(0x0C0ADD28u, 2);  /* 0C0ADD26 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0ADD28 mov #imm,Rn */
	IF(0x0C0ADD2Au); r15 -= 4; W32(r15, PR); UPD(0x0C0ADD2Cu, 2);  /* 0C0ADD2A sts.l pr,@-Rn */
	IF(0x0C0ADD2Cu); { u32 t_ = r8; PR = 0x0C0ADD30u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0ADD30u); }  /* 0C0ADD2C jsr @Rn */
L_0C0ADD30: BLKS(0x0C0ADD30u);
	T = (r0 & r0) == 0;  /* 0C0ADD30 tst Rm,Rn */
	if (!T) { UPD(0x0C0ADD50u, 4); goto L_0C0ADD50; }  /* 0C0ADD32 bf */
L_0C0ADD34: BLKS(0x0C0ADD34u);
	r15 = r14;  /* 0C0ADD34 mov Rm,Rn */
	IF(0x0C0ADD36u); PR = R32(r15); r15 += 4; UPD(0x0C0ADD38u, 2);  /* 0C0ADD36 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ADD3Au, 1);  /* 0C0ADD38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0ADD3Cu, 1);  /* 0C0ADD3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0ADD3Eu, 1);  /* 0C0ADD3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ADD40u, 1);  /* 0C0ADD3E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ADD42u, 1);  /* 0C0ADD40 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ADD44u, 1);  /* 0C0ADD42 mov.l @Rm+,Rn */
	IF(0x0C0ADD44u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ADD44 rts */
L_0C0ADD50: BLKS(0x0C0ADD50u);
	r2 = 0xC2755BCu; UPD(0x0C0ADD52u, 1);  /* 0C0ADD50 mov.l @(disp,pc),Rn */
	r8 = 0x38u;  /* 0C0ADD52 mov #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0ADD56u, 2);  /* 0C0ADD54 mov.w @Rm,Rn */
	r5 = 0x1Au;  /* 0C0ADD56 mov #imm,Rn */
	IF(0x0C0ADD58u); MACL = r0 * r8;  /* 0C0ADD58 mul.l Rm,Rn */
	r7 = 0xC275E1Cu; UPD(0x0C0ADD5Cu, 4);  /* 0C0ADD5A mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0ADD5C mov #imm,Rn */
	r9 = 0xC050D70u; UPD(0x0C0ADD60u, 2);  /* 0C0ADD5E mov.l @(disp,pc),Rn */
	IF(0x0C0ADD60u); r8 = MACL;  /* 0C0ADD60 sts macl,Rn */
	r6 = 0xC0000000u; UPD(0x0C0ADD64u, 2);  /* 0C0ADD62 mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C0ADD64 add Rm,Rn */
	W32(r8, r6); UPD(0x0C0ADD68u, 2);  /* 0C0ADD66 mov.l Rm,@Rn */
	IF(0x0C0ADD68u); { u32 t_ = r9; PR = 0x0C0ADD6Cu; W32(r8 + 0x4u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0ADD6Cu); }  /* 0C0ADD68 jsr @Rn */
L_0C0ADD6C: BLKS(0x0C0ADD6Cu);
	r4 = 0x0u;  /* 0C0ADD6C mov #imm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C0ADD70u, 2);  /* 0C0ADD6E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x10u, r10); UPD(0x0C0ADD72u, 1);  /* 0C0ADD70 mov.l Rm,@(disp,Rn) */
	r4 = 0x3Fu;  /* 0C0ADD72 mov #imm,Rn */
	W32(r8 + 0x14u, r13); UPD(0x0C0ADD76u, 2);  /* 0C0ADD74 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ADD76u); { u32 t_ = r9; PR = 0x0C0ADD7Au; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0ADD7Au); }  /* 0C0ADD76 jsr @Rn */
L_0C0ADD7A: BLKS(0x0C0ADD7Au);
	r10 = 0x400u; UPD(0x0C0ADD7Cu, 1);  /* 0C0ADD7A mov.w @(disp,pc),Rn */
	r0 += r12;  /* 0C0ADD7C add Rm,Rn */
	r0 += 0xFFFFFFE0u;  /* 0C0ADD7E add #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0ADD80 exts.w Rm,Rn */
	IF(0x0C0ADD82u); { u32 t_ = r9; PR = 0x0C0ADD86u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0ADD86u); }  /* 0C0ADD82 jsr @Rn */
L_0C0ADD86: BLKS(0x0C0ADD86u);
	r13 = r0;  /* 0C0ADD86 mov Rm,Rn */
	r13 += r10;  /* 0C0ADD88 add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C0ADD8Cu, 3);  /* 0C0ADD8A mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0ADD8C mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0ADD90u, 2);  /* 0C0ADD8E mov.l @(disp,pc),Rn */
	IF(0x0C0ADD90u); { u32 t_ = r10; PR = 0x0C0ADD94u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0ADD94u); }  /* 0C0ADD90 jsr @Rn */
L_0C0ADD94: BLKS(0x0C0ADD94u);
	IF(0x0C0ADD94u); r0 <<= 8;  /* 0C0ADD94 shll8 Rn */
	W32(r8 + 0x18u, r0); UPD(0x0C0ADD98u, 2);  /* 0C0ADD96 mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C0ADD98 mov Rm,Rn */
	IF(0x0C0ADD9Au); { u32 t_ = r9; PR = 0x0C0ADD9Eu; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0ADD9Eu); }  /* 0C0ADD9A jsr @Rn */
L_0C0ADD9E: BLKS(0x0C0ADD9Eu);
	IF(0x0C0ADD9Eu); r0 <<= 8;  /* 0C0ADD9E shll8 Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0ADDA2u, 2);  /* 0C0ADDA0 mov.l Rm,@(disp,Rn) */
	r3 = 0x0u;  /* 0C0ADDA2 mov #imm,Rn */
	r8 += 0x30u;  /* 0C0ADDA4 add #imm,Rn */
	W8(r8, r3); UPD(0x0C0ADDA8u, 3);  /* 0C0ADDA6 mov.b Rm,@Rn */
	r2 = 0x0u;  /* 0C0ADDA8 mov #imm,Rn */
	r8 += 0x3u;  /* 0C0ADDAA add #imm,Rn */
	W8(r8, r11); UPD(0x0C0ADDAEu, 3);  /* 0C0ADDAC mov.b Rm,@Rn */
	r0 = 0x808080u; UPD(0x0C0ADDB0u, 1);  /* 0C0ADDAE mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0ADDB0 add #imm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C0ADDB4u, 2);  /* 0C0ADDB2 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0ADD34u, 3); goto L_0C0ADD34; }  /* 0C0ADDB4 bra */
}

/* FUN_0c0adde0 */
void f_0C0ADDE0(sh3_t *c)
{
	LOCALS;
L_0C0ADDE0: BLKS(0x0C0ADDE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADDE2u, 1);  /* 0C0ADDE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADDE4u, 1);  /* 0C0ADDE2 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C0ADDE4 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADDE8u, 2);  /* 0C0ADDE6 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C0ADDE8 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADDECu, 2);  /* 0C0ADDEA mov.l Rm,@-Rn */
	r10 = r6;  /* 0C0ADDEC mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADDF0u, 2);  /* 0C0ADDEE mov.l Rm,@-Rn */
	r11 = r7;  /* 0C0ADDF0 mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADDF4u, 2);  /* 0C0ADDF2 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADDF6u, 1);  /* 0C0ADDF4 mov.l Rm,@-Rn */
	IF(0x0C0ADDF6u); r15 -= 4; W32(r15, PR); UPD(0x0C0ADDF8u, 1);  /* 0C0ADDF6 sts.l pr,@-Rn */
	r14 = r15;  /* 0C0ADDF8 mov Rm,Rn */
	r0 = R32(r14 + 0x20u); UPD(0x0C0ADDFCu, 2);  /* 0C0ADDFA mov.l @(disp,Rm),Rn */
	r12 = (u32)(s32)(s8)r0;  /* 0C0ADDFC exts.b Rm,Rn */
	r0 = R32(r14 + 0x24u); UPD(0x0C0ADE00u, 2);  /* 0C0ADDFE mov.l @(disp,Rm),Rn */
	r13 = (u32)(s32)(s8)r0;  /* 0C0ADE00 exts.b Rm,Rn */
	r0 = 0xC0AA550u; UPD(0x0C0ADE04u, 2);  /* 0C0ADE02 mov.l @(disp,pc),Rn */
	IF(0x0C0ADE04u); { u32 t_ = r0; PR = 0x0C0ADE08u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA550, 0x0C0AA550u, 0x0C0ADE08u); }  /* 0C0ADE04 jsr @Rn */
L_0C0ADE08: BLKS(0x0C0ADE08u);
	T = (r0 & r0) == 0;  /* 0C0ADE08 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ADE4Eu, 4); goto L_0C0ADE4E; } goto L_0C0ADE0E; }  /* 0C0ADE0A bt/s */
L_0C0ADE0E: BLKS(0x0C0ADE0Eu);
	r5 = 0xC2755BCu; UPD(0x0C0ADE10u, 2);  /* 0C0ADE0E mov.l @(disp,pc),Rn */
	r3 = 0x38u;  /* 0C0ADE10 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C0ADE14u, 2);  /* 0C0ADE12 mov.w @Rm,Rn */
	r0 = 0x10u;  /* 0C0ADE14 mov #imm,Rn */
	IF(0x0C0ADE16u); MACL = r4 * r3;  /* 0C0ADE16 mul.l Rm,Rn */
	r2 = 0xC275E1Cu; UPD(0x0C0ADE1Au, 4);  /* 0C0ADE18 mov.l @(disp,pc),Rn */
	r8 &= r0;  /* 0C0ADE1A and Rm,Rn */
	r7 = 0xC0000000u; UPD(0x0C0ADE1Eu, 2);  /* 0C0ADE1C mov.l @(disp,pc),Rn */
	IF(0x0C0ADE1Eu); r3 = MACL;  /* 0C0ADE1E sts macl,Rn */
	r3 += r2;  /* 0C0ADE20 add Rm,Rn */
	r5 = 0x0u;  /* 0C0ADE22 mov #imm,Rn */
	r7 |= r8;  /* 0C0ADE24 or Rm,Rn */
	r6 = 0x14u;  /* 0C0ADE26 mov #imm,Rn */
	W32(r3, r7); UPD(0x0C0ADE2Au, 6);  /* 0C0ADE28 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0ADE2A mov #imm,Rn */
	W32(r3 + 0x4u, r6); UPD(0x0C0ADE2Eu, 2);  /* 0C0ADE2C mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x8u, r9); UPD(0x0C0ADE30u, 1);  /* 0C0ADE2E mov.l Rm,@(disp,Rn) */
	W32(r3 + 0xCu, r5); UPD(0x0C0ADE32u, 1);  /* 0C0ADE30 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x10u, r10); UPD(0x0C0ADE34u, 1);  /* 0C0ADE32 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x14u, r11); UPD(0x0C0ADE36u, 1);  /* 0C0ADE34 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r5); UPD(0x0C0ADE38u, 1);  /* 0C0ADE36 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x18u, r5); UPD(0x0C0ADE3Au, 1);  /* 0C0ADE38 mov.l Rm,@(disp,Rn) */
	r3 += 0x30u;  /* 0C0ADE3A add #imm,Rn */
	W8(r3, r5); UPD(0x0C0ADE3Eu, 2);  /* 0C0ADE3C mov.b Rm,@Rn */
	r3 += 0x4u;  /* 0C0ADE3E add #imm,Rn */
	W8(r3, r12); UPD(0x0C0ADE42u, 2);  /* 0C0ADE40 mov.b Rm,@Rn */
	{ u32 v_ = r13; r3 -= 1; W8(r3, v_); } UPD(0x0C0ADE44u, 1);  /* 0C0ADE42 mov.b Rm,@-Rn */
	r4 = 0x207C0C0u; UPD(0x0C0ADE46u, 1);  /* 0C0ADE44 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFCDu;  /* 0C0ADE46 add #imm,Rn */
	r2 = 0x808080u; UPD(0x0C0ADE4Au, 2);  /* 0C0ADE48 mov.l @(disp,pc),Rn */
	W32(r3 + 0x28u, r4); UPD(0x0C0ADE4Cu, 1);  /* 0C0ADE4A mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x2Cu, r2); UPD(0x0C0ADE4Eu, 1);  /* 0C0ADE4C mov.l Rm,@(disp,Rn) */
L_0C0ADE4E: BLKS(0x0C0ADE4Eu);
	r15 = r14;  /* 0C0ADE4E mov Rm,Rn */
	IF(0x0C0ADE50u); PR = R32(r15); r15 += 4; UPD(0x0C0ADE52u, 2);  /* 0C0ADE50 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ADE54u, 1);  /* 0C0ADE52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0ADE56u, 1);  /* 0C0ADE54 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0ADE58u, 1);  /* 0C0ADE56 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ADE5Au, 1);  /* 0C0ADE58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ADE5Cu, 1);  /* 0C0ADE5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ADE5Eu, 1);  /* 0C0ADE5C mov.l @Rm+,Rn */
	IF(0x0C0ADE5Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ADE5E rts */
}

void f_0C0ADE80(sh3_t *c)
{
	LOCALS;
L_0C0ADE80: BLKS(0x0C0ADE80u);
	r6 = 0x38u;  /* 0C0ADE80 mov #imm,Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0ADE82 exts.w Rm,Rn */
	IF(0x0C0ADE84u); MACL = r4 * r6;  /* 0C0ADE84 mul.l Rm,Rn */
	r5 = 0xC275E1Cu; UPD(0x0C0ADE88u, 5);  /* 0C0ADE86 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADE8Au, 1);  /* 0C0ADE88 mov.l Rm,@-Rn */
	IF(0x0C0ADE8Au); r3 = MACL;  /* 0C0ADE8A sts macl,Rn */
	r3 += r5;  /* 0C0ADE8C add Rm,Rn */
	r7 = R32(r3 + 0x14u); UPD(0x0C0ADE90u, 3);  /* 0C0ADE8E mov.l @(disp,Rm),Rn */
	r0 = R32(r3 + 0x1Cu); UPD(0x0C0ADE92u, 1);  /* 0C0ADE90 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x10u); UPD(0x0C0ADE94u, 1);  /* 0C0ADE92 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C0ADE94 add Rm,Rn */
	r1 = R32(r3 + 0x18u); UPD(0x0C0ADE98u, 2);  /* 0C0ADE96 mov.l @(disp,Rm),Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C0ADE9Au, 1);  /* 0C0ADE98 mov.l @(disp,Rm),Rn */
	r5 += r1;  /* 0C0ADE9A add Rm,Rn */
	r2 = 0xC1EED6Cu; UPD(0x0C0ADE9Eu, 2);  /* 0C0ADE9C mov.l @(disp,pc),Rn */
	IF(0x0C0ADE9Eu); r0 <<= 2;  /* 0C0ADE9E shll2 Rn */
	W32(r3 + 0x10u, r5); UPD(0x0C0ADEA2u, 2);  /* 0C0ADEA0 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x14u, r7); UPD(0x0C0ADEA4u, 1);  /* 0C0ADEA2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ADEA4u); r6 = R32(r0 + r2); UPD(0x0C0ADEA6u, 1);  /* 0C0ADEA4 mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0ADEA8u, 1);  /* 0C0ADEA6 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0ADEA8 add Rm,Rn */
	IF(0x0C0ADEAAu); T = (s32)r2 >= 0;  /* 0C0ADEAA cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0ADF50u, 5); goto L_0C0ADF50; } UPD(0x0C0ADEB0u, 1); goto L_0C0ADEB0; }  /* 0C0ADEAC bf/s */
L_0C0ADEB0: BLKS(0x0C0ADEB0u);
	r3 = 0xA00000u; UPD(0x0C0ADEB2u, 1);  /* 0C0ADEB0 mov.l @(disp,pc),Rn */
	r3 += r6;  /* 0C0ADEB2 add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0ADEB4 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ADED2u, 5); goto L_0C0ADED2; } goto L_0C0ADEBA; }  /* 0C0ADEB6 bt/s */
L_0C0ADEBA: BLKS(0x0C0ADEBAu);
	r2 = 0xC3929E0u; UPD(0x0C0ADEBCu, 2);  /* 0C0ADEBA mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0ADEBEu, 1);  /* 0C0ADEBC mov.l @Rm,Rn */
	r2 = r7;  /* 0C0ADEBE mov Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C0ADEC2u, 2);  /* 0C0ADEC0 mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C0ADEC2 sub Rm,Rn */
	r2 += r7;  /* 0C0ADEC4 add Rm,Rn */
	IF(0x0C0ADEC6u); T = (s32)r2 >= 0;  /* 0C0ADEC6 cmp/pz Rn */
	if (!T) { UPD(0x0C0ADF40u, 6); goto L_0C0ADF40; }  /* 0C0ADEC8 bf */
L_0C0ADECA: BLKS(0x0C0ADECAu);
	r5 = 0x780000u; UPD(0x0C0ADECCu, 1);  /* 0C0ADECA mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C0ADECC add Rm,Rn */
	T = (s32)r2 >= (s32)r6;  /* 0C0ADECE cmp/ge Rm,Rn */
	IF(0x0C0ADED0u); r1 = T;  /* 0C0ADED0 movt Rn */
	UPD(0x0C0ADED2u, 3);
L_0C0ADED2: BLKS(0x0C0ADED2u);
	r7 = (u32)(s32)(s16)r1;  /* 0C0ADED2 exts.w Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0ADED4 tst Rm,Rn */
	{ u32 c_ = T; r3 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0ADEF0u, 5); goto L_0C0ADEF0; } goto L_0C0ADEDA; }  /* 0C0ADED6 bt/s */
L_0C0ADEDA: BLKS(0x0C0ADEDAu);
	IF(0x0C0ADEDAu); MACL = r4 * r3;  /* 0C0ADEDA mul.l Rm,Rn */
	r6 = 0x0u;  /* 0C0ADEDC mov #imm,Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0ADEE0u, 5);  /* 0C0ADEDE mov.l @(disp,pc),Rn */
	IF(0x0C0ADEE0u); r0 = MACL;  /* 0C0ADEE0 sts macl,Rn */
	IF(0x0C0ADEE2u); W32(r0 + r4, r6); UPD(0x0C0ADEE4u, 2);  /* 0C0ADEE2 mov.l Rm,@(r0,Rn) */
L_0C0ADEE4: BLKS(0x0C0ADEE4u);
	r15 = r14;  /* 0C0ADEE4 mov Rm,Rn */
	IF(0x0C0ADEE6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0ADEE6 rts */
L_0C0ADEF0: BLKS(0x0C0ADEF0u);
	r5 = 0x38u;  /* 0C0ADEF0 mov #imm,Rn */
	IF(0x0C0ADEF2u); MACL = r4 * r5;  /* 0C0ADEF2 mul.l Rm,Rn */
	r2 = 0xC275E1Cu; UPD(0x0C0ADEF6u, 4);  /* 0C0ADEF4 mov.l @(disp,pc),Rn */
	IF(0x0C0ADEF6u); r3 = MACL;  /* 0C0ADEF6 sts macl,Rn */
	r3 += r2;  /* 0C0ADEF8 add Rm,Rn */
	r0 = R32(r3 + 0x2Cu); UPD(0x0C0ADEFCu, 3);  /* 0C0ADEFA mov.l @(disp,Rm),Rn */
	r1 = R32(r3 + 0x24u); UPD(0x0C0ADEFEu, 1);  /* 0C0ADEFC mov.l @(disp,Rm),Rn */
	r0 -= r1;  /* 0C0ADEFE sub Rm,Rn */
	W32(r3 + 0x2Cu, r0); UPD(0x0C0ADF02u, 2);  /* 0C0ADF00 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0xCu); UPD(0x0C0ADF04u, 1);  /* 0C0ADF02 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0ADF04 add #imm,Rn */
	T = r0 == 0xAu;  /* 0C0ADF06 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0ADF30u, 5); goto L_0C0ADF30; } UPD(0x0C0ADF0Cu, 1); goto L_0C0ADF0C; }  /* 0C0ADF08 bt/s */
L_0C0ADF0C: BLKS(0x0C0ADF0Cu);
	r4 = 0xAu;  /* 0C0ADF0C mov #imm,Rn */
	T = (s32)r0 > (s32)r4;  /* 0C0ADF0E cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x10u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0ADF20u, 5); goto L_0C0ADF20; } goto L_0C0ADF14; }  /* 0C0ADF10 bt/s */
L_0C0ADF14: BLKS(0x0C0ADF14u);
	T = r0 == 0x6u;  /* 0C0ADF14 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0ADEE4u, 5); goto L_0C0ADEE4; }  /* 0C0ADF16 bf */
L_0C0ADF18: BLKS(0x0C0ADF18u);
	r0 = R32(r3); UPD(0x0C0ADF1Au, 1);  /* 0C0ADF18 mov.l @Rm,Rn */
	r0 |= 0x2u;  /* 0C0ADF1A or #imm,r0 */
	UPD(0x0C0ADF1Cu, 1);
L_0C0ADF1C: BLKS(0x0C0ADF1Cu);
	{ W32(r3, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C0ADEE4u, 3); goto L_0C0ADEE4; }  /* 0C0ADF1C bra */
L_0C0ADF20: BLKS(0x0C0ADF20u);
	if (!T) { UPD(0x0C0ADEE4u, 3); goto L_0C0ADEE4; }  /* 0C0ADF20 bf */
L_0C0ADF22: BLKS(0x0C0ADF22u);
	W32(r3, r7); UPD(0x0C0ADF24u, 1);  /* 0C0ADF22 mov.l Rm,@Rn */
	{ IF(0x0C0ADF26u); ; /* slot nop */ UPD(0x0C0ADEE4u, 3); goto L_0C0ADEE4; }  /* 0C0ADF24 bra */
L_0C0ADF30: BLKS(0x0C0ADF30u);
	r0 = R32(r3); UPD(0x0C0ADF32u, 1);  /* 0C0ADF30 mov.l @Rm,Rn */
	{ r0 |= 0x1u; /* slot or #imm,r0 */ UPD(0x0C0ADF1Cu, 3); goto L_0C0ADF1C; }  /* 0C0ADF32 bra */
L_0C0ADF40: BLKS(0x0C0ADF40u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ADECAu, 3); goto L_0C0ADECA; }  /* 0C0ADF40 bra */
L_0C0ADF50: BLKS(0x0C0ADF50u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ADEB0u, 3); goto L_0C0ADEB0; }  /* 0C0ADF50 bra */
}

void f_0C0ADF70(sh3_t *c)
{
	LOCALS;
L_0C0ADF70: BLKS(0x0C0ADF70u);
	r1 = (u32)(s32)(s16)r4;  /* 0C0ADF70 exts.w Rm,Rn */
	r2 = 0x38u;  /* 0C0ADF72 mov #imm,Rn */
	IF(0x0C0ADF74u); MACL = r1 * r2;  /* 0C0ADF74 mul.l Rm,Rn */
	r0 = 0xC275E1Cu; UPD(0x0C0ADF78u, 5);  /* 0C0ADF76 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADF7Au, 1);  /* 0C0ADF78 mov.l Rm,@-Rn */
	IF(0x0C0ADF7Au); r3 = MACL;  /* 0C0ADF7A sts macl,Rn */
	r3 += r0;  /* 0C0ADF7C add Rm,Rn */
	r7 = R32(r3 + 0xCu); UPD(0x0C0ADF80u, 3);  /* 0C0ADF7E mov.l @(disp,Rm),Rn */
	r0 = 0x9u;  /* 0C0ADF80 mov #imm,Rn */
	T = (s32)r7 > (s32)r0;  /* 0C0ADF82 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0ADF90u, 5); goto L_0C0ADF90; } goto L_0C0ADF88; }  /* 0C0ADF84 bf/s */
L_0C0ADF88: BLKS(0x0C0ADF88u);
	r4 = R32(r3 + 0x2Cu); UPD(0x0C0ADF8Au, 2);  /* 0C0ADF88 mov.l @(disp,Rm),Rn */
	r5 = 0xFFFAFAFBu; UPD(0x0C0ADF8Cu, 1);  /* 0C0ADF8A mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C0ADF8C add Rm,Rn */
	W32(r3 + 0x2Cu, r4); UPD(0x0C0ADF90u, 2);  /* 0C0ADF8E mov.l Rm,@(disp,Rn) */
L_0C0ADF90: BLKS(0x0C0ADF90u);
	r2 = r3;  /* 0C0ADF90 mov Rm,Rn */
	r2 += 0x30u;  /* 0C0ADF92 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C0ADF96u, 3);  /* 0C0ADF94 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0ADF96 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C0ADF98 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0ADF9A cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0ADFB0u, 6); goto L_0C0ADFB0; } UPD(0x0C0ADFA0u, 1); goto L_0C0ADFA0; }  /* 0C0ADF9C bt/s */
L_0C0ADFA0: BLKS(0x0C0ADFA0u);
	r15 = r14;  /* 0C0ADFA0 mov Rm,Rn */
	IF(0x0C0ADFA2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0ADFA2 rts */
L_0C0ADFB0: BLKS(0x0C0ADFB0u);
	r0 = 0x0u;  /* 0C0ADFB0 mov #imm,Rn */
	W8(r2, r0); UPD(0x0C0ADFB4u, 2);  /* 0C0ADFB2 mov.b Rm,@Rn */
	r0 = r7;  /* 0C0ADFB4 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0ADFB6 add #imm,Rn */
	T = r0 == 0x10u;  /* 0C0ADFB8 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0ADFA0u, 6); goto L_0C0ADFA0; } UPD(0x0C0ADFBEu, 1); goto L_0C0ADFBE; }  /* 0C0ADFBA bf/s */
L_0C0ADFBE: BLKS(0x0C0ADFBEu);
	r7 = 0x0u;  /* 0C0ADFBE mov #imm,Rn */
	{ W32(r3, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C0ADFA0u, 4); goto L_0C0ADFA0; }  /* 0C0ADFC0 bra */
}

/* FUN_0c0adfd0 */
void f_0C0ADFD0(sh3_t *c)
{
	LOCALS;
L_0C0ADFD0: BLKS(0x0C0ADFD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADFD2u, 1);  /* 0C0ADFD0 mov.l Rm,@-Rn */
	r0 = 0x40u;  /* 0C0ADFD2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADFD6u, 2);  /* 0C0ADFD4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADFD8u, 1);  /* 0C0ADFD6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADFDAu, 1);  /* 0C0ADFD8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADFDCu, 1);  /* 0C0ADFDA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADFDEu, 1);  /* 0C0ADFDC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADFE0u, 1);  /* 0C0ADFDE mov.l Rm,@-Rn */
	IF(0x0C0ADFE0u); r15 -= 4; W32(r15, PR); UPD(0x0C0ADFE2u, 1);  /* 0C0ADFE0 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE4u;  /* 0C0ADFE2 add #imm,Rn */
	r14 = r15;  /* 0C0ADFE4 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0ADFE8u, 3);  /* 0C0ADFE6 mov.l Rm,@Rn */
	r4 = R32(r14 + 0x3Cu); UPD(0x0C0ADFEAu, 1);  /* 0C0ADFE8 mov.l @(disp,Rm),Rn */
	r3 = (u32)(s32)(s8)r4;  /* 0C0ADFEA exts.b Rm,Rn */
	W32(r14 + 0x10u, r3); UPD(0x0C0ADFEEu, 2);  /* 0C0ADFEC mov.l Rm,@(disp,Rn) */
	IF(0x0C0ADFEEu); r2 = R32(r0 + r14); UPD(0x0C0ADFF0u, 1);  /* 0C0ADFEE mov.l @(r0,Rm),Rn */
	W32(r14 + 0xCu, r7); UPD(0x0C0ADFF2u, 1);  /* 0C0ADFF0 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s8)r2;  /* 0C0ADFF2 exts.b Rm,Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C0ADFF6u, 2);  /* 0C0ADFF4 mov.l Rm,@(disp,Rn) */
	r7 = r5;  /* 0C0ADFF6 mov Rm,Rn */
	r2 = 0xC1EEBA4u; UPD(0x0C0ADFFAu, 2);  /* 0C0ADFF8 mov.l @(disp,pc),Rn */
	IF(0x0C0ADFFAu); r7 <<= 2;  /* 0C0ADFFA shll2 Rn */
	r0 = r7;  /* 0C0ADFFC mov Rm,Rn */
	IF(0x0C0ADFFEu); r3 = R32(r0 + r2); UPD(0x0C0AE000u, 3);  /* 0C0ADFFE mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0AE002u, 1);  /* 0C0AE000 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0AE004u, 1);  /* 0C0AE002 mov.l Rm,@(disp,Rn) */
	r2 += r6;  /* 0C0AE004 add Rm,Rn */
	IF(0x0C0AE006u); T = (s32)r2 >= 0;  /* 0C0AE006 cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AE010u, 5); goto L_0C0AE010; } UPD(0x0C0AE00Cu, 1); goto L_0C0AE00C; }  /* 0C0AE008 bt/s */
L_0C0AE00C: BLKS(0x0C0AE00Cu);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AE120u, 3); goto L_0C0AE120; }  /* 0C0AE00C bra */
L_0C0AE010: BLKS(0x0C0AE010u);
	r5 = 0xA00000u; UPD(0x0C0AE012u, 1);  /* 0C0AE010 mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0AE012 add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0AE014 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AE034u, 5); goto L_0C0AE034; } goto L_0C0AE01A; }  /* 0C0AE016 bt/s */
L_0C0AE01A: BLKS(0x0C0AE01Au);
	r9 = 0xC3929E0u; UPD(0x0C0AE01Cu, 2);  /* 0C0AE01A mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0AE01Eu, 1);  /* 0C0AE01C mov.l @(disp,Rm),Rn */
	r8 = R32(r9); UPD(0x0C0AE020u, 1);  /* 0C0AE01E mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0AE022u, 1);  /* 0C0AE020 mov.l @(disp,pc),Rn */
	r2 -= r8;  /* 0C0AE022 sub Rm,Rn */
	r2 += r6;  /* 0C0AE024 add Rm,Rn */
	IF(0x0C0AE026u); T = (s32)r2 >= 0;  /* 0C0AE026 cmp/pz Rn */
	if (T) { UPD(0x0C0AE02Cu, 6); goto L_0C0AE02C; }  /* 0C0AE028 bt */
L_0C0AE02A: BLKS(0x0C0AE02Au);
	r2 = 0u - r2;  /* 0C0AE02A neg Rm,Rn */
	UPD(0x0C0AE02Cu, 1);
L_0C0AE02C: BLKS(0x0C0AE02Cu);
	r10 = 0x780000u; UPD(0x0C0AE02Eu, 1);  /* 0C0AE02C mov.l @(disp,pc),Rn */
	r3 += r10;  /* 0C0AE02E add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0AE030 cmp/ge Rm,Rn */
	IF(0x0C0AE032u); r1 = T;  /* 0C0AE032 movt Rn */
	UPD(0x0C0AE034u, 3);
L_0C0AE034: BLKS(0x0C0AE034u);
	r11 = (u32)(s32)(s16)r1;  /* 0C0AE034 exts.w Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C0AE036 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AE060u, 5); goto L_0C0AE060; } UPD(0x0C0AE03Cu, 1); goto L_0C0AE03C; }  /* 0C0AE038 bt/s */
L_0C0AE03C: BLKS(0x0C0AE03Cu);
	r14 += 0x1Cu;  /* 0C0AE03C add #imm,Rn */
	r15 = r14;  /* 0C0AE03E mov Rm,Rn */
	IF(0x0C0AE040u); PR = R32(r15); r15 += 4; UPD(0x0C0AE042u, 3);  /* 0C0AE040 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AE044u, 1);  /* 0C0AE042 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AE046u, 1);  /* 0C0AE044 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AE048u, 1);  /* 0C0AE046 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AE04Au, 1);  /* 0C0AE048 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AE04Cu, 1);  /* 0C0AE04A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AE04Eu, 1);  /* 0C0AE04C mov.l @Rm+,Rn */
	IF(0x0C0AE04Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AE04E rts */
L_0C0AE060: BLKS(0x0C0AE060u);
	r2 = 0xC1EEE64u; UPD(0x0C0AE062u, 1);  /* 0C0AE060 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0AE062 mov Rm,Rn */
	r8 = 0xC0AFE40u; UPD(0x0C0AE066u, 2);  /* 0C0AE064 mov.l @(disp,pc),Rn */
	r13 = 0xC050D70u; UPD(0x0C0AE068u, 1);  /* 0C0AE066 mov.l @(disp,pc),Rn */
	IF(0x0C0AE068u); { u32 t_ = r8; PR = 0x0C0AE06Cu; IF(0x0C0AE06Au); r12 = R32(r0 + r2); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AE06Cu); }  /* 0C0AE068 jsr @Rn */
L_0C0AE06C: BLKS(0x0C0AE06Cu);
	r4 = r12;  /* 0C0AE06C mov Rm,Rn */
	IF(0x0C0AE06Eu); { u32 t_ = r13; PR = 0x0C0AE072u; r11 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AE072u); }  /* 0C0AE06E jsr @Rn */
L_0C0AE072: BLKS(0x0C0AE072u);
	IF(0x0C0AE072u); T = r12 & 1; r12 = (u32)((s32)r12 >> 1);  /* 0C0AE072 shar Rn */
	r13 = r0;  /* 0C0AE074 mov Rm,Rn */
	r7 = 0x0u;  /* 0C0AE076 mov #imm,Rn */
	r13 += r12;  /* 0C0AE078 add Rm,Rn */
	W32(r14 + 0x18u, r7); UPD(0x0C0AE07Cu, 5);  /* 0C0AE07A mov.l Rm,@(disp,Rn) */
	r12 = 0x0u;  /* 0C0AE07C mov #imm,Rn */
	IF(0x0C0AE07Eu); ;  /* 0C0AE07E nop */
	UPD(0x0C0AE080u, 2);
L_0C0AE080: BLKS(0x0C0AE080u);
	r3 = 0xC058060u; UPD(0x0C0AE082u, 1);  /* 0C0AE080 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0AE082 mov Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C0AE086u, 2);  /* 0C0AE084 mov.l @(disp,pc),Rn */
	IF(0x0C0AE086u); { u32 t_ = r3; PR = 0x0C0AE08Au; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0AE08Au); }  /* 0C0AE086 jsr @Rn */
L_0C0AE08A: BLKS(0x0C0AE08Au);
	r9 = r0;  /* 0C0AE08A mov Rm,Rn */
	r4 = r12;  /* 0C0AE08C mov Rm,Rn */
	IF(0x0C0AE08Eu); { u32 t_ = r10; PR = 0x0C0AE092u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0AE092u); }  /* 0C0AE08E jsr @Rn */
L_0C0AE092: BLKS(0x0C0AE092u);
	r5 = R32(r14 + 0x14u); UPD(0x0C0AE094u, 1);  /* 0C0AE092 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0AE094 add #imm,Rn */
	r10 = r0;  /* 0C0AE096 mov Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C0AE09Au, 3);  /* 0C0AE098 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0AE09A mov Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0AE09Eu, 2);  /* 0C0AE09C mov.l Rm,@(disp,Rn) */
	r12 += 0x10u;  /* 0C0AE09E add #imm,Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0AE0A2u, 2);  /* 0C0AE0A0 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C0AE0A2 mov Rm,Rn */
	IF(0x0C0AE0A4u); { u32 t_ = r8; PR = 0x0C0AE0A8u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0AE0A8u); }  /* 0C0AE0A4 jsr @Rn */
L_0C0AE0A8: BLKS(0x0C0AE0A8u);
	r1 = 0xC058030u; UPD(0x0C0AE0AAu, 1);  /* 0C0AE0A8 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C0AE0AA mov Rm,Rn */
	r4 = r11;  /* 0C0AE0AC mov Rm,Rn */
	IF(0x0C0AE0AEu); { u32 t_ = r1; PR = 0x0C0AE0B2u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0AE0B2u); }  /* 0C0AE0AE jsr @Rn */
L_0C0AE0B2: BLKS(0x0C0AE0B2u);
	r7 = 0xC058030u; UPD(0x0C0AE0B4u, 1);  /* 0C0AE0B2 mov.l @(disp,pc),Rn */
	r8 -= r0;  /* 0C0AE0B4 sub Rm,Rn */
	r5 = r9;  /* 0C0AE0B6 mov Rm,Rn */
	W32(r15 + 0x8u, r8); UPD(0x0C0AE0BAu, 3);  /* 0C0AE0B8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AE0BAu); { u32 t_ = r7; PR = 0x0C0AE0BEu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0AE0BEu); }  /* 0C0AE0BA jsr @Rn */
L_0C0AE0BE: BLKS(0x0C0AE0BEu);
	r6 = 0xC058060u; UPD(0x0C0AE0C0u, 1);  /* 0C0AE0BE mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C0AE0C0 mov Rm,Rn */
	r4 = r11;  /* 0C0AE0C2 mov Rm,Rn */
	IF(0x0C0AE0C4u); { u32 t_ = r6; PR = 0x0C0AE0C8u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0AE0C8u); }  /* 0C0AE0C4 jsr @Rn */
L_0C0AE0C8: BLKS(0x0C0AE0C8u);
	r9 += r0;  /* 0C0AE0C8 add Rm,Rn */
	W32(r15 + 0xCu, r9); UPD(0x0C0AE0CCu, 2);  /* 0C0AE0CA mov.l Rm,@(disp,Rn) */
	r9 = 0xC0AC6A0u; UPD(0x0C0AE0CEu, 1);  /* 0C0AE0CC mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0AE0D0u, 1);  /* 0C0AE0CE mov.l @Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0AE0D2u, 1);  /* 0C0AE0D0 mov.l @(disp,Rm),Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C0AE0D4u, 1);  /* 0C0AE0D2 mov.l @(disp,Rm),Rn */
	IF(0x0C0AE0D4u); { u32 t_ = r9; PR = 0x0C0AE0D8u; r7 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC6A0, 0x0C0AC6A0u, 0x0C0AE0D8u); }  /* 0C0AE0D4 jsr @Rn */
L_0C0AE0D8: BLKS(0x0C0AE0D8u);
	r4 = R32(r14 + 0x18u); UPD(0x0C0AE0DAu, 1);  /* 0C0AE0D8 mov.l @(disp,Rm),Rn */
	r0 = 0x1Fu;  /* 0C0AE0DA mov #imm,Rn */
	r4 += 0x1u;  /* 0C0AE0DC add #imm,Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C0AE0DE exts.w Rm,Rn */
	W32(r14 + 0x18u, r3); UPD(0x0C0AE0E2u, 4);  /* 0C0AE0E0 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x18u); UPD(0x0C0AE0E4u, 1);  /* 0C0AE0E2 mov.l @(disp,Rm),Rn */
	T = (s32)r1 > (s32)r0;  /* 0C0AE0E4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AE080u, 4); goto L_0C0AE080; } goto L_0C0AE0EA; }  /* 0C0AE0E6 bf/s */
L_0C0AE0EA: BLKS(0x0C0AE0EAu);
	r9 = 0xC0AFE40u; UPD(0x0C0AE0ECu, 2);  /* 0C0AE0EA mov.l @(disp,pc),Rn */
	r13 = 0xC1EEBF4u; UPD(0x0C0AE0EEu, 1);  /* 0C0AE0EC mov.l @(disp,pc),Rn */
	IF(0x0C0AE0EEu); { u32 t_ = r9; PR = 0x0C0AE0F2u; r11 = 0x3Fu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AE0F2u); }  /* 0C0AE0EE jsr @Rn */
L_0C0AE0F2: BLKS(0x0C0AE0F2u);
	r2 = R32(r14 + 0x4u); UPD(0x0C0AE0F4u, 1);  /* 0C0AE0F2 mov.l @(disp,Rm),Rn */
	r0 &= 0x1u;  /* 0C0AE0F4 and #imm,r0 */
	r2 += r2;  /* 0C0AE0F6 add Rm,Rn */
	r13 += r2;  /* 0C0AE0F8 add Rm,Rn */
	IF(0x0C0AE0FAu); r12 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0AE0FCu, 4);  /* 0C0AE0FA mov.b @(r0,Rm),Rn */
	r4 = r12 & 0xFF;  /* 0C0AE0FC extu.b Rm,Rn */
	T = r4 > r11;  /* 0C0AE0FE cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0AE110u, 5); goto L_0C0AE110; }  /* 0C0AE100 bt */
L_0C0AE102: BLKS(0x0C0AE102u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AE03Cu, 3); goto L_0C0AE03C; }  /* 0C0AE102 bra */
L_0C0AE110: BLKS(0x0C0AE110u);
	r8 = 0xC0AFC10u; UPD(0x0C0AE112u, 1);  /* 0C0AE110 mov.l @(disp,pc),Rn */
	IF(0x0C0AE112u); { u32 t_ = r8; PR = 0x0C0AE116u; IF(0x0C0AE114u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0AE116u); }  /* 0C0AE112 jsr @Rn */
L_0C0AE116: BLKS(0x0C0AE116u);
	{ IF(0x0C0AE118u); ; /* slot nop */ UPD(0x0C0AE102u, 3); goto L_0C0AE102; }  /* 0C0AE116 bra */
L_0C0AE120: BLKS(0x0C0AE120u);
	{ IF(0x0C0AE122u); ; /* slot nop */ UPD(0x0C0AE010u, 3); goto L_0C0AE010; }  /* 0C0AE120 bra */
}

void f_0C0AE160(sh3_t *c)
{
	LOCALS;
L_0C0AE160: BLKS(0x0C0AE160u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE162u, 1);  /* 0C0AE160 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE164u, 1);  /* 0C0AE162 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE166u, 1);  /* 0C0AE164 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AE166 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE16Au, 2);  /* 0C0AE168 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0AE16A mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE16Eu, 2);  /* 0C0AE16C mov.l Rm,@-Rn */
	r3 = 0xC0AE8F0u; UPD(0x0C0AE170u, 1);  /* 0C0AE16E mov.l @(disp,pc),Rn */
	IF(0x0C0AE170u); r15 -= 4; W32(r15, PR); UPD(0x0C0AE172u, 1);  /* 0C0AE170 sts.l pr,@-Rn */
	IF(0x0C0AE172u); { u32 t_ = r3; PR = 0x0C0AE176u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AE8F0, 0x0C0AE8F0u, 0x0C0AE176u); }  /* 0C0AE172 jsr @Rn */
L_0C0AE176: BLKS(0x0C0AE176u);
	r2 = 0x4Cu;  /* 0C0AE176 mov #imm,Rn */
	IF(0x0C0AE178u); MACL = r9 * r2;  /* 0C0AE178 mul.l Rm,Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0AE17Cu, 4);  /* 0C0AE17A mov.l @(disp,pc),Rn */
	IF(0x0C0AE17Cu); r3 = MACL;  /* 0C0AE17C sts macl,Rn */
	r3 += r0;  /* 0C0AE17E add Rm,Rn */
	r0 = 0x8000000u; UPD(0x0C0AE182u, 3);  /* 0C0AE180 mov.l @(disp,pc),Rn */
	r1 = R32(r3); UPD(0x0C0AE184u, 1);  /* 0C0AE182 mov.l @Rm,Rn */
	T = (r1 & r0) == 0;  /* 0C0AE184 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x50u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AE192u, 4); goto L_0C0AE192; } goto L_0C0AE18A; }  /* 0C0AE186 bf/s */
L_0C0AE18A: BLKS(0x0C0AE18Au);
	r0 = R32(r3 + 0x8u); UPD(0x0C0AE18Cu, 2);  /* 0C0AE18A mov.l @(disp,Rm),Rn */
	r4 = 0xFFFFFFEBu;  /* 0C0AE18C mov #imm,Rn */
	IF(0x0C0AE18Eu); ARG0(0x404Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0AE18E shad Rm,Rn */
	r0 &= 0x7Fu;  /* 0C0AE190 and #imm,r0 */
	UPD(0x0C0AE192u, 3);
L_0C0AE192: BLKS(0x0C0AE192u);
	r6 = 0xC1F46C4u; UPD(0x0C0AE194u, 1);  /* 0C0AE192 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0AE194 add Rm,Rn */
	r7 = 0xC3929E0u; UPD(0x0C0AE198u, 2);  /* 0C0AE196 mov.l @(disp,pc),Rn */
	IF(0x0C0AE198u); r5 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C0AE19Au, 1);  /* 0C0AE198 mov.w @(r0,Rm),Rn */
	r2 = (u32)(s32)(s16)R16(r7); UPD(0x0C0AE19Cu, 1);  /* 0C0AE19A mov.w @Rm,Rn */
	r3 = 0x160u; UPD(0x0C0AE19Eu, 1);  /* 0C0AE19C mov.w @(disp,pc),Rn */
	r5 -= r2;  /* 0C0AE19E sub Rm,Rn */
	r5 += r3;  /* 0C0AE1A0 add Rm,Rn */
	r6 = (u32)(s32)(s16)r5;  /* 0C0AE1A2 exts.w Rm,Rn */
	IF(0x0C0AE1A4u); T = (s32)r6 >= 0;  /* 0C0AE1A4 cmp/pz Rn */
	if (T) { UPD(0x0C0AE1AAu, 7); goto L_0C0AE1AA; }  /* 0C0AE1A6 bt */
L_0C0AE1A8: BLKS(0x0C0AE1A8u);
	r6 = 0x0u;  /* 0C0AE1A8 mov #imm,Rn */
	UPD(0x0C0AE1AAu, 1);
L_0C0AE1AA: BLKS(0x0C0AE1AAu);
	r8 = 0xC1F47C4u; UPD(0x0C0AE1ACu, 1);  /* 0C0AE1AA mov.l @(disp,pc),Rn */
	IF(0x0C0AE1ACu); r10 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0AE1AEu, 1);  /* 0C0AE1AC mov.w @(r0,Rm),Rn */
	r10 -= r2;  /* 0C0AE1AE sub Rm,Rn */
	r10 += r3;  /* 0C0AE1B0 add Rm,Rn */
	r8 = (u32)(s32)(s16)r10;  /* 0C0AE1B2 exts.w Rm,Rn */
	IF(0x0C0AE1B4u); T = (s32)r8 >= 0;  /* 0C0AE1B4 cmp/pz Rn */
	if (!T) { UPD(0x0C0AE2B0u, 7); goto L_0C0AE2B0; }  /* 0C0AE1B6 bf */
L_0C0AE1B8: BLKS(0x0C0AE1B8u);
	T = (s32)r8 > (s32)r6;  /* 0C0AE1B8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AE298u, 4); goto L_0C0AE298; }  /* 0C0AE1BA bf */
L_0C0AE1BC: BLKS(0x0C0AE1BCu);
	r10 = 0x4Cu;  /* 0C0AE1BC mov #imm,Rn */
	IF(0x0C0AE1BEu); MACL = r9 * r10;  /* 0C0AE1BE mul.l Rm,Rn */
	r4 = 0xC26CAE0u; UPD(0x0C0AE1C2u, 4);  /* 0C0AE1C0 mov.l @(disp,pc),Rn */
	T = (s32)r6 >= (s32)r8;  /* 0C0AE1C2 cmp/ge Rm,Rn */
	IF(0x0C0AE1C4u); r10 = MACL;  /* 0C0AE1C4 sts macl,Rn */
	r10 += r4;  /* 0C0AE1C6 add Rm,Rn */
	r4 = R32(r10); UPD(0x0C0AE1CAu, 4);  /* 0C0AE1C8 mov.l @Rm,Rn */
	r10 += 0x3Cu;  /* 0C0AE1CA add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r5 = v_; } UPD(0x0C0AE1CEu, 2);  /* 0C0AE1CC mov.b @Rm+,Rn */
	r3 = 0xC392AF4u; UPD(0x0C0AE1D0u, 1);  /* 0C0AE1CE mov.l @(disp,pc),Rn */
	r2 = r5 & 0xFF;  /* 0C0AE1D0 extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r11 = v_; } UPD(0x0C0AE1D4u, 2);  /* 0C0AE1D2 mov.b @Rm+,Rn */
	IF(0x0C0AE1D4u); r2 <<= 16;  /* 0C0AE1D4 shll16 Rn */
	r0 = 0x2000000u; UPD(0x0C0AE1D8u, 2);  /* 0C0AE1D6 mov.l @(disp,pc),Rn */
	r7 = R32(r3); UPD(0x0C0AE1DAu, 1);  /* 0C0AE1D8 mov.l @Rm,Rn */
	r4 &= r0;  /* 0C0AE1DA and Rm,Rn */
	r3 = r11 & 0xFF;  /* 0C0AE1DC extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r0 = v_; } UPD(0x0C0AE1E0u, 3);  /* 0C0AE1DE mov.b @Rm+,Rn */
	r4 |= r2;  /* 0C0AE1E0 or Rm,Rn */
	IF(0x0C0AE1E2u); r3 <<= 8;  /* 0C0AE1E2 shll8 Rn */
	r11 = 0xC392D5Cu; UPD(0x0C0AE1E6u, 3);  /* 0C0AE1E4 mov.l @(disp,pc),Rn */
	r4 |= r3;  /* 0C0AE1E6 or Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r1 = v_; } UPD(0x0C0AE1EAu, 2);  /* 0C0AE1E8 mov.b @Rm+,Rn */
	r5 = r0 & 0xFF;  /* 0C0AE1EA extu.b Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C0AE1EEu, 2);  /* 0C0AE1EC mov.b @Rm,Rn */
	r4 |= r5;  /* 0C0AE1EE or Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C0AE1F0 extu.b Rm,Rn */
	r5 = r3 & 0xFF;  /* 0C0AE1F2 extu.b Rm,Rn */
	r11 = 0xC283CB2u; UPD(0x0C0AE1F6u, 4);  /* 0C0AE1F4 mov.l @(disp,pc),Rn */
	IF(0x0C0AE1F6u); MACL = r0 * r5;  /* 0C0AE1F6 mul.l Rm,Rn */
	r2 = 0x11000000u; UPD(0x0C0AE1FAu, 3);  /* 0C0AE1F8 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r1 = v_; } UPD(0x0C0AE1FCu, 1);  /* 0C0AE1FA mov.b @Rm+,Rn */
	r4 |= r2;  /* 0C0AE1FC or Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C0AE200u, 2);  /* 0C0AE1FE mov.b @Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C0AE200 extu.b Rm,Rn */
	r11 = r3 & 0xFF;  /* 0C0AE202 extu.b Rm,Rn */
	IF(0x0C0AE204u); r2 = MACL;  /* 0C0AE204 sts macl,Rn */
	IF(0x0C0AE206u); MACL = r0 * r11;  /* 0C0AE206 mul.l Rm,Rn */
	r2 += r2;  /* 0C0AE208 add Rm,Rn */
	IF(0x0C0AE20Au); r2 >>= 8;  /* 0C0AE20A shlr8 Rn */
	IF(0x0C0AE20Cu); r3 = MACL;  /* 0C0AE20C sts macl,Rn */
	r0 = 0xC392B09u; UPD(0x0C0AE210u, 9);  /* 0C0AE20E mov.l @(disp,pc),Rn */
	r3 += r3;  /* 0C0AE210 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AE214u, 2);  /* 0C0AE212 mov.b @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C0AE214 extu.b Rm,Rn */
	IF(0x0C0AE216u); r3 >>= 8;  /* 0C0AE216 shlr8 Rn */
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C0AE21Au, 3);  /* 0C0AE218 mov.b @Rm,Rn */
	r2 = r3 & 0xFF;  /* 0C0AE21A extu.b Rm,Rn */
	r10 = r1 & 0xFF;  /* 0C0AE21C extu.b Rm,Rn */
	r3 = r11 & 0xFF;  /* 0C0AE21E extu.b Rm,Rn */
	IF(0x0C0AE220u); MACL = r10 * r3;  /* 0C0AE220 mul.l Rm,Rn */
	r1 = 0xFFFFFFF9u;  /* 0C0AE222 mov #imm,Rn */
	IF(0x0C0AE224u); r5 <<= 16;  /* 0C0AE224 shll16 Rn */
	IF(0x0C0AE226u); r0 = MACL;  /* 0C0AE226 sts macl,Rn */
	IF(0x0C0AE228u); ARG0(0x401Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0AE228 shad Rm,Rn */
	IF(0x0C0AE22Au); r2 <<= 8;  /* 0C0AE22A shll8 Rn */
	r5 += r2;  /* 0C0AE22C add Rm,Rn */
	r11 = r0 & 0xFF;  /* 0C0AE22E extu.b Rm,Rn */
	{ u32 c_ = T; r5 += r11; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0AE294u, 15); goto L_0C0AE294; } goto L_0C0AE234; }  /* 0C0AE230 bt/s */
L_0C0AE234: BLKS(0x0C0AE234u);
	r2 = 0x140u; UPD(0x0C0AE236u, 2);  /* 0C0AE234 mov.w @(disp,pc),Rn */
	IF(0x0C0AE236u); MACL = r9 * r2; UPD(0x0C0AE238u, 2);  /* 0C0AE236 mul.l Rm,Rn */
	r11 = 0xC21CCF8u; UPD(0x0C0AE23Au, 1);  /* 0C0AE238 mov.l @(disp,pc),Rn */
	r10 = 0xC21CCF4u; UPD(0x0C0AE23Cu, 1);  /* 0C0AE23A mov.l @(disp,pc),Rn */
	IF(0x0C0AE23Cu); r9 = MACL;  /* 0C0AE23C sts macl,Rn */
	IF(0x0C0AE23Eu); ;  /* 0C0AE23E nop */
	UPD(0x0C0AE240u, 2);
L_0C0AE240: BLKS(0x0C0AE240u);
	r0 = r6;  /* 0C0AE240 mov Rm,Rn */
	r0 &= 0x3Fu;  /* 0C0AE242 and #imm,r0 */
	r0 += r9;  /* 0C0AE244 add Rm,Rn */
	r0 += r0;  /* 0C0AE246 add Rm,Rn */
	IF(0x0C0AE248u); r3 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C0AE24Au, 5);  /* 0C0AE248 mov.w @(r0,Rm),Rn */
	r0 = 0xFFE0u; UPD(0x0C0AE24Cu, 1);  /* 0C0AE24A mov.l @(disp,pc),Rn */
	r2 = 0x3E0u; UPD(0x0C0AE24Eu, 1);  /* 0C0AE24C mov.w @(disp,pc),Rn */
	r0 &= r3;  /* 0C0AE24E and Rm,Rn */
	r0 += r2;  /* 0C0AE250 add Rm,Rn */
	r2 = 0x88u; UPD(0x0C0AE254u, 3);  /* 0C0AE252 mov.w @(disp,pc),Rn */
	IF(0x0C0AE254u); r0 <<= 16;  /* 0C0AE254 shll16 Rn */
	W32(r7, r4); UPD(0x0C0AE258u, 2);  /* 0C0AE256 mov.l Rm,@Rn */
	r2 += r6;  /* 0C0AE258 add Rm,Rn */
	r0 |= r2;  /* 0C0AE25A or Rm,Rn */
	r7 += 0x4u;  /* 0C0AE25C add #imm,Rn */
	W32(r7, r0); UPD(0x0C0AE260u, 4);  /* 0C0AE25E mov.l Rm,@Rn */
	r0 = r3;  /* 0C0AE260 mov Rm,Rn */
	r2 = R32(r10); UPD(0x0C0AE264u, 2);  /* 0C0AE262 mov.l @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0AE264 and #imm,r0 */
	r1 = 0xC283CA8u; UPD(0x0C0AE268u, 2);  /* 0C0AE266 mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C0AE268 sub Rm,Rn */
	r0 = R32(r1); UPD(0x0C0AE26Cu, 2);  /* 0C0AE26A mov.l @Rm,Rn */
	IF(0x0C0AE26Cu); r2 <<= 16;  /* 0C0AE26C shll16 Rn */
	r0 += r6;  /* 0C0AE26E add Rm,Rn */
	r2 |= r0;  /* 0C0AE270 or Rm,Rn */
	r7 += 0x4u;  /* 0C0AE272 add #imm,Rn */
	W32(r7, r2); UPD(0x0C0AE276u, 5);  /* 0C0AE274 mov.l Rm,@Rn */
	r0 = 0x1Cu;  /* 0C0AE276 mov #imm,Rn */
	r2 = 0x143u; UPD(0x0C0AE27Au, 2);  /* 0C0AE278 mov.w @(disp,pc),Rn */
	r3 &= r0;  /* 0C0AE27A and Rm,Rn */
	r3 += r2;  /* 0C0AE27C add Rm,Rn */
	r7 += 0x4u;  /* 0C0AE27E add #imm,Rn */
	IF(0x0C0AE280u); r3 <<= 16;  /* 0C0AE280 shll16 Rn */
	W32(r7, r3); UPD(0x0C0AE284u, 5);  /* 0C0AE282 mov.l Rm,@Rn */
	r0 = r6;  /* 0C0AE284 mov Rm,Rn */
	r7 += 0x4u;  /* 0C0AE286 add #imm,Rn */
	W32(r7, r5); UPD(0x0C0AE28Au, 3);  /* 0C0AE288 mov.l Rm,@Rn */
	r0 += 0x1u;  /* 0C0AE28A add #imm,Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C0AE28C exts.w Rm,Rn */
	T = (s32)r6 >= (s32)r8;  /* 0C0AE28E cmp/ge Rm,Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AE240u, 6); goto L_0C0AE240; } UPD(0x0C0AE294u, 1); goto L_0C0AE294; }  /* 0C0AE290 bf/s */
L_0C0AE294: BLKS(0x0C0AE294u);
	r9 = 0xC392AF4u; UPD(0x0C0AE296u, 1);  /* 0C0AE294 mov.l @(disp,pc),Rn */
	W32(r9, r7); UPD(0x0C0AE298u, 1);  /* 0C0AE296 mov.l Rm,@Rn */
L_0C0AE298: BLKS(0x0C0AE298u);
	r15 = r14;  /* 0C0AE298 mov Rm,Rn */
	IF(0x0C0AE29Au); PR = R32(r15); r15 += 4; UPD(0x0C0AE29Cu, 2);  /* 0C0AE29A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AE29Eu, 1);  /* 0C0AE29C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AE2A0u, 1);  /* 0C0AE29E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AE2A2u, 1);  /* 0C0AE2A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AE2A4u, 1);  /* 0C0AE2A2 mov.l @Rm+,Rn */
	IF(0x0C0AE2A4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AE2A4 rts */
L_0C0AE2B0: BLKS(0x0C0AE2B0u);
	{ r8 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0AE1B8u, 3); goto L_0C0AE1B8; }  /* 0C0AE2B0 bra */
}

/* FUN_0c0ae310 */
void f_0C0AE310(sh3_t *c)
{
	LOCALS;
L_0C0AE310: BLKS(0x0C0AE310u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE312u, 1);  /* 0C0AE310 mov.l Rm,@-Rn */
	r6 = 0xFFFFFFFBu;  /* 0C0AE312 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE316u, 2);  /* 0C0AE314 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0AE316 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE31Au, 2);  /* 0C0AE318 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE31Cu, 1);  /* 0C0AE31A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE31Eu, 1);  /* 0C0AE31C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE320u, 1);  /* 0C0AE31E mov.l Rm,@-Rn */
	r12 = 0x4Cu;  /* 0C0AE320 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE324u, 2);  /* 0C0AE322 mov.l Rm,@-Rn */
	IF(0x0C0AE324u); MACL = r8 * r12;  /* 0C0AE324 mul.l Rm,Rn */
	r5 = 0xC392AF4u; UPD(0x0C0AE328u, 3);  /* 0C0AE326 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AE328 add #imm,Rn */
	r7 = R32(r5); UPD(0x0C0AE32Cu, 2);  /* 0C0AE32A mov.l @Rm,Rn */
	IF(0x0C0AE32Cu); r11 = MACL;  /* 0C0AE32C sts macl,Rn */
	r5 = 0xC26CAE0u; UPD(0x0C0AE330u, 2);  /* 0C0AE32E mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AE330 mov Rm,Rn */
	r11 += r5;  /* 0C0AE332 add Rm,Rn */
	r10 = R32(r11 + 0x8u); UPD(0x0C0AE336u, 3);  /* 0C0AE334 mov.l @(disp,Rm),Rn */
	r13 = r8;  /* 0C0AE336 mov Rm,Rn */
	r9 = (r10 >> 16) | (r10 << 16);  /* 0C0AE338 swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r9;  /* 0C0AE33A exts.w Rm,Rn */
	r4 = r0;  /* 0C0AE33C mov Rm,Rn */
	IF(0x0C0AE33Eu); ARG0(0x446Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0AE33E shad Rm,Rn */
	W32(r14, r4); UPD(0x0C0AE342u, 6);  /* 0C0AE340 mov.l Rm,@Rn */
	r0 &= 0x1Fu;  /* 0C0AE342 and #imm,r0 */
	r1 = 0xC0000001u; UPD(0x0C0AE346u, 2);  /* 0C0AE344 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0AE346 mov #imm,Rn */
	r3 = 0xC286290u; UPD(0x0C0AE34Au, 2);  /* 0C0AE348 mov.l @(disp,pc),Rn */
	r10 = r5;  /* 0C0AE34A mov Rm,Rn */
	r4 = 0x3DBu; UPD(0x0C0AE34Eu, 2);  /* 0C0AE34C mov.w @(disp,pc),Rn */
	W32(r3, r1); UPD(0x0C0AE350u, 1);  /* 0C0AE34E mov.l Rm,@Rn */
	r4 -= r0;  /* 0C0AE350 sub Rm,Rn */
	r2 = 0xC0000000u; UPD(0x0C0AE354u, 2);  /* 0C0AE352 mov.l @(disp,pc),Rn */
	r0 = 0x4u;  /* 0C0AE354 mov #imm,Rn */
	W32(r7, r2); UPD(0x0C0AE358u, 2);  /* 0C0AE356 mov.l Rm,@Rn */
	IF(0x0C0AE358u); ARG0(0x4D0Du); { s32 s_ = (s32)r0; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C0AE358 shld Rm,Rn */
	r11 = 0xC221068u; UPD(0x0C0AE35Cu, 2);  /* 0C0AE35A mov.l @(disp,pc),Rn */
	r7 += 0x4u;  /* 0C0AE35C add #imm,Rn */
	r9 = 0x10000000u; UPD(0x0C0AE360u, 2);  /* 0C0AE35E mov.l @(disp,pc),Rn */
	IF(0x0C0AE360u); r4 <<= 16;  /* 0C0AE360 shll16 Rn */
	IF(0x0C0AE362u); ;  /* 0C0AE362 nop */
	UPD(0x0C0AE364u, 2);
L_0C0AE364: BLKS(0x0C0AE364u);
	r6 = R32(r14); UPD(0x0C0AE366u, 1);  /* 0C0AE364 mov.l @Rm,Rn */
	r3 = 0xFu;  /* 0C0AE366 mov #imm,Rn */
	r6 += r12;  /* 0C0AE368 add Rm,Rn */
	r6 &= r3;  /* 0C0AE36A and Rm,Rn */
	r6 += r13;  /* 0C0AE36C add Rm,Rn */
	r0 = 0x4u;  /* 0C0AE36E mov #imm,Rn */
	IF(0x0C0AE370u); ARG0(0x460Du); { s32 s_ = (s32)r0; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0AE370 shld Rm,Rn */
	r5 = 0x0u;  /* 0C0AE372 mov #imm,Rn */
	r3 = 0x60u;  /* 0C0AE374 mov #imm,Rn */
	IF(0x0C0AE376u); ;  /* 0C0AE376 nop */
	UPD(0x0C0AE378u, 9);
L_0C0AE378: BLKS(0x0C0AE378u);
	r0 = r5;  /* 0C0AE378 mov Rm,Rn */
	r2 = 0x4Cu;  /* 0C0AE37A mov #imm,Rn */
	IF(0x0C0AE37Cu); MACL = r8 * r2;  /* 0C0AE37C mul.l Rm,Rn */
	r0 &= 0xFu;  /* 0C0AE37E and #imm,r0 */
	W32(r7, r9); UPD(0x0C0AE382u, 6);  /* 0C0AE380 mov.l Rm,@Rn */
	r0 += r6;  /* 0C0AE382 add Rm,Rn */
	IF(0x0C0AE384u); r0 <<= 2;  /* 0C0AE384 shll2 Rn */
	IF(0x0C0AE386u); r2 = R32(r0 + r11); UPD(0x0C0AE388u, 3);  /* 0C0AE386 mov.l @(r0,Rm),Rn */
	IF(0x0C0AE388u); r1 = MACL;  /* 0C0AE388 sts macl,Rn */
	r1 += r10;  /* 0C0AE38A add Rm,Rn */
	r0 = R32(r1 + 0x24u); UPD(0x0C0AE38Eu, 3);  /* 0C0AE38C mov.l @(disp,Rm),Rn */
	r7 += 0x4u;  /* 0C0AE38E add #imm,Rn */
	r2 += r0;  /* 0C0AE390 add Rm,Rn */
	W32(r7, r2); UPD(0x0C0AE394u, 3);  /* 0C0AE392 mov.l Rm,@Rn */
	r0 = r4;  /* 0C0AE394 mov Rm,Rn */
	r0 |= r3;  /* 0C0AE396 or Rm,Rn */
	r7 += 0x4u;  /* 0C0AE398 add #imm,Rn */
	W32(r7, r0); UPD(0x0C0AE39Cu, 4);  /* 0C0AE39A mov.l Rm,@Rn */
	r5 += 0x1u;  /* 0C0AE39C add #imm,Rn */
	r2 = 0x1F001Fu; UPD(0x0C0AE3A0u, 2);  /* 0C0AE39E mov.l @(disp,pc),Rn */
	r7 += 0x4u;  /* 0C0AE3A0 add #imm,Rn */
	W32(r7, r2); UPD(0x0C0AE3A4u, 2);  /* 0C0AE3A2 mov.l Rm,@Rn */
	r3 += 0x20u;  /* 0C0AE3A4 add #imm,Rn */
	r0 = 0x808080u; UPD(0x0C0AE3A8u, 2);  /* 0C0AE3A6 mov.l @(disp,pc),Rn */
	r7 += 0x4u;  /* 0C0AE3A8 add #imm,Rn */
	W32(r7, r0); UPD(0x0C0AE3ACu, 2);  /* 0C0AE3AA mov.l Rm,@Rn */
	r2 = 0xAu;  /* 0C0AE3AC mov #imm,Rn */
	T = (s32)r5 > (s32)r2;  /* 0C0AE3AE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AE378u, 5); goto L_0C0AE378; } goto L_0C0AE3B4; }  /* 0C0AE3B0 bf/s */
L_0C0AE3B4: BLKS(0x0C0AE3B4u);
	r5 = 0x200000u; UPD(0x0C0AE3B6u, 2);  /* 0C0AE3B4 mov.l @(disp,pc),Rn */
	r12 += 0x1u;  /* 0C0AE3B6 add #imm,Rn */
	r6 = 0xBu;  /* 0C0AE3B8 mov #imm,Rn */
	T = (s32)r12 > (s32)r6;  /* 0C0AE3BA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += r5; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0AE364u, 6); goto L_0C0AE364; } goto L_0C0AE3C0; }  /* 0C0AE3BC bf/s */
L_0C0AE3C0: BLKS(0x0C0AE3C0u);
	r13 = 0xC0000001u; UPD(0x0C0AE3C2u, 2);  /* 0C0AE3C0 mov.l @(disp,pc),Rn */
	r14 += 0x4u;  /* 0C0AE3C2 add #imm,Rn */
	W32(r7, r13); UPD(0x0C0AE3C6u, 2);  /* 0C0AE3C4 mov.l Rm,@Rn */
	r8 = 0xC392AF4u; UPD(0x0C0AE3C8u, 1);  /* 0C0AE3C6 mov.l @(disp,pc),Rn */
	r7 += 0x4u;  /* 0C0AE3C8 add #imm,Rn */
	W32(r8, r7); UPD(0x0C0AE3CCu, 2);  /* 0C0AE3CA mov.l Rm,@Rn */
	r15 = r14;  /* 0C0AE3CC mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AE3D0u, 2);  /* 0C0AE3CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AE3D2u, 1);  /* 0C0AE3D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AE3D4u, 1);  /* 0C0AE3D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AE3D6u, 1);  /* 0C0AE3D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AE3D8u, 1);  /* 0C0AE3D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AE3DAu, 1);  /* 0C0AE3D8 mov.l @Rm+,Rn */
	IF(0x0C0AE3DAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AE3DA rts */
}

/* FUN_0c0ae410 */
void f_0C0AE410(sh3_t *c)
{
	LOCALS;
L_0C0AE410: BLKS(0x0C0AE410u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE412u, 1);  /* 0C0AE410 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE414u, 1);  /* 0C0AE412 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE416u, 1);  /* 0C0AE414 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0AE416 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE41Au, 2);  /* 0C0AE418 mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C0AE41A mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE41Eu, 2);  /* 0C0AE41C mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C0AE41E mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE422u, 2);  /* 0C0AE420 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE424u, 1);  /* 0C0AE422 mov.l Rm,@-Rn */
	r12 = 0xC26CAE0u; UPD(0x0C0AE426u, 1);  /* 0C0AE424 mov.l @(disp,pc),Rn */
	IF(0x0C0AE426u); r15 -= 4; W32(r15, PR); UPD(0x0C0AE428u, 1);  /* 0C0AE426 sts.l pr,@-Rn */
	r13 = 0xC057F60u; UPD(0x0C0AE42Au, 1);  /* 0C0AE428 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AE42A mov Rm,Rn */
	UPD(0x0C0AE42Cu, 1);
L_0C0AE42C: BLKS(0x0C0AE42Cu);
	r8 = r10;  /* 0C0AE42C mov Rm,Rn */
	r8 += r12;  /* 0C0AE42E add Rm,Rn */
	r0 = R32(r8); UPD(0x0C0AE432u, 3);  /* 0C0AE430 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AE432 tst Rm,Rn */
	if (!T) { UPD(0x0C0AE500u, 4); goto L_0C0AE500; }  /* 0C0AE434 bf */
L_0C0AE436: BLKS(0x0C0AE436u);
	r3 = r11;  /* 0C0AE436 mov Rm,Rn */
	UPD(0x0C0AE438u, 1);
L_0C0AE438: BLKS(0x0C0AE438u);
	r3 += 0x1u;  /* 0C0AE438 add #imm,Rn */
	r11 = (u32)(s32)(s8)r3;  /* 0C0AE43A exts.b Rm,Rn */
	r2 = 0x7u;  /* 0C0AE43C mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0AE440u, 4);  /* 0C0AE43E mov.l Rm,@Rn */
	r10 += 0x4Cu;  /* 0C0AE440 add #imm,Rn */
	W32(r8 + 0xCu, r9); UPD(0x0C0AE444u, 2);  /* 0C0AE442 mov.l Rm,@(disp,Rn) */
	T = (s32)r11 > (s32)r2;  /* 0C0AE444 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AE42Cu, 4); goto L_0C0AE42C; } UPD(0x0C0AE44Au, 1); goto L_0C0AE44A; }  /* 0C0AE446 bf/s */
L_0C0AE44A: BLKS(0x0C0AE44Au);
	r12 = 0xC22486Eu; UPD(0x0C0AE44Cu, 1);  /* 0C0AE44A mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C0AE44C mov #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C0AE450u, 2);  /* 0C0AE44E mov.b @Rm,Rn */
	r10 = 0xC1F519Cu; UPD(0x0C0AE452u, 1);  /* 0C0AE450 mov.l @(disp,pc),Rn */
	r0 = r7 & 0xFF;  /* 0C0AE452 extu.b Rm,Rn */
	IF(0x0C0AE454u); r0 <<= 2;  /* 0C0AE454 shll2 Rn */
	IF(0x0C0AE456u); r7 = R32(r0 + r10); UPD(0x0C0AE458u, 3);  /* 0C0AE456 mov.l @(r0,Rm),Rn */
	{ u32 v_ = R32(r7); r7 += 4; r9 = v_; } UPD(0x0C0AE45Au, 1);  /* 0C0AE458 mov.l @Rm+,Rn */
	r6 = 0xC283CA0u; UPD(0x0C0AE45Cu, 1);  /* 0C0AE45A mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r7); r7 += 4; r1 = v_; } UPD(0x0C0AE45Eu, 1);  /* 0C0AE45C mov.l @Rm+,Rn */
	W32(r6, r1); UPD(0x0C0AE460u, 1);  /* 0C0AE45E mov.l Rm,@Rn */
	r8 = 0xC2859A0u; UPD(0x0C0AE462u, 1);  /* 0C0AE460 mov.l @(disp,pc),Rn */
	r5 = 0xC21F5DCu; UPD(0x0C0AE464u, 1);  /* 0C0AE462 mov.l @(disp,pc),Rn */
	r4 = 0xC26C8BAu; UPD(0x0C0AE466u, 1);  /* 0C0AE464 mov.l @(disp,pc),Rn */
	r6 = 0xC26CB20u; UPD(0x0C0AE468u, 1);  /* 0C0AE466 mov.l @(disp,pc),Rn */
	W32(r8, r9); UPD(0x0C0AE46Au, 1);  /* 0C0AE468 mov.l Rm,@Rn */
	r3 = r6;  /* 0C0AE46A mov Rm,Rn */
	W32(r5, r11); UPD(0x0C0AE46Eu, 2);  /* 0C0AE46C mov.l Rm,@Rn */
	r3 += 0xFFFFFFC0u;  /* 0C0AE46E add #imm,Rn */
	W8(r4, r11); UPD(0x0C0AE472u, 2);  /* 0C0AE470 mov.b Rm,@Rn */
	IF(0x0C0AE472u); ;  /* 0C0AE472 nop */
	UPD(0x0C0AE474u, 1);
L_0C0AE474: BLKS(0x0C0AE474u);
	r2 = R32(r7); UPD(0x0C0AE476u, 1);  /* 0C0AE474 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AE476 tst Rm,Rn */
	{ u32 c_ = T; r5 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AE4DCu, 4); goto L_0C0AE4DC; } goto L_0C0AE47C; }  /* 0C0AE478 bt/s */
L_0C0AE47C: BLKS(0x0C0AE47Cu);
	r4 = R32(r2); UPD(0x0C0AE47Eu, 2);  /* 0C0AE47C mov.l @Rm,Rn */
	r7 += 0x4u;  /* 0C0AE47E add #imm,Rn */
	W32(r3, r4); UPD(0x0C0AE482u, 2);  /* 0C0AE480 mov.l Rm,@Rn */
	r0 = R32(r2 + 0x4u); UPD(0x0C0AE484u, 1);  /* 0C0AE482 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x4u, r0); UPD(0x0C0AE486u, 1);  /* 0C0AE484 mov.l Rm,@(disp,Rn) */
	r13 = R32(r2 + 0x14u); UPD(0x0C0AE488u, 1);  /* 0C0AE486 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x28u, r13); UPD(0x0C0AE48Au, 1);  /* 0C0AE488 mov.l Rm,@(disp,Rn) */
	r12 = R32(r2 + 0x18u); UPD(0x0C0AE48Cu, 1);  /* 0C0AE48A mov.l @(disp,Rm),Rn */
	W32(r3 + 0x2Cu, r12); UPD(0x0C0AE48Eu, 1);  /* 0C0AE48C mov.l Rm,@(disp,Rn) */
	r10 = R32(r2 + 0x1Cu); UPD(0x0C0AE490u, 1);  /* 0C0AE48E mov.l @(disp,Rm),Rn */
	W32(r3 + 0x30u, r10); UPD(0x0C0AE492u, 1);  /* 0C0AE490 mov.l Rm,@(disp,Rn) */
	r9 = R32(r2 + 0x20u); UPD(0x0C0AE494u, 1);  /* 0C0AE492 mov.l @(disp,Rm),Rn */
	r8 = R32(r2 + 0x24u); UPD(0x0C0AE496u, 1);  /* 0C0AE494 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x38u, r8); UPD(0x0C0AE498u, 1);  /* 0C0AE496 mov.l Rm,@(disp,Rn) */
	r5 = R32(r2 + 0xCu); UPD(0x0C0AE49Au, 1);  /* 0C0AE498 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x10u, r5); UPD(0x0C0AE49Cu, 1);  /* 0C0AE49A mov.l Rm,@(disp,Rn) */
	r4 = R32(r2 + 0x10u); UPD(0x0C0AE49Eu, 1);  /* 0C0AE49C mov.l @(disp,Rm),Rn */
	r2 += 0x8u;  /* 0C0AE49E add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AE4A2u, 2);  /* 0C0AE4A0 mov.w @Rm,Rn */
	IF(0x0C0AE4A2u); r0 <<= 16;  /* 0C0AE4A2 shll16 Rn */
	W32(r3 + 0x34u, r9); UPD(0x0C0AE4A6u, 2);  /* 0C0AE4A4 mov.l Rm,@(disp,Rn) */
	r2 += 0x20u;  /* 0C0AE4A6 add #imm,Rn */
	W32(r3 + 0x14u, r4); UPD(0x0C0AE4AAu, 2);  /* 0C0AE4A8 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x20u, r0); UPD(0x0C0AE4ACu, 1);  /* 0C0AE4AA mov.l Rm,@(disp,Rn) */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r13 = v_; } UPD(0x0C0AE4AEu, 1);  /* 0C0AE4AC mov.b @Rm+,Rn */
	r3 += 0x42u;  /* 0C0AE4AE add #imm,Rn */
	W8(r3, r13); UPD(0x0C0AE4B2u, 2);  /* 0C0AE4B0 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r12 = v_; } UPD(0x0C0AE4B4u, 1);  /* 0C0AE4B2 mov.b @Rm+,Rn */
	r3 += 0xFFFFFFFAu;  /* 0C0AE4B4 add #imm,Rn */
	W8(r3, r12); UPD(0x0C0AE4B8u, 2);  /* 0C0AE4B6 mov.b Rm,@Rn */
	r13 = 0x0u;  /* 0C0AE4B8 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r10 = v_; } UPD(0x0C0AE4BCu, 2);  /* 0C0AE4BA mov.b @Rm+,Rn */
	r3 += 0x1u;  /* 0C0AE4BC add #imm,Rn */
	W8(r3, r10); UPD(0x0C0AE4C0u, 2);  /* 0C0AE4BE mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r9 = v_; } UPD(0x0C0AE4C2u, 1);  /* 0C0AE4C0 mov.b @Rm+,Rn */
	r3 += 0x1u;  /* 0C0AE4C2 add #imm,Rn */
	W8(r3, r9); UPD(0x0C0AE4C6u, 2);  /* 0C0AE4C4 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r8 = v_; } UPD(0x0C0AE4C8u, 1);  /* 0C0AE4C6 mov.b @Rm+,Rn */
	r3 += 0x1u;  /* 0C0AE4C8 add #imm,Rn */
	W8(r3, r8); UPD(0x0C0AE4CCu, 2);  /* 0C0AE4CA mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r5 = v_; } UPD(0x0C0AE4CEu, 1);  /* 0C0AE4CC mov.b @Rm+,Rn */
	r3 += 0x2u;  /* 0C0AE4CE add #imm,Rn */
	W8(r6, r5); UPD(0x0C0AE4D2u, 2);  /* 0C0AE4D0 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AE4D4u, 1);  /* 0C0AE4D2 mov.b @Rm,Rn */
	W8(r3, r0); UPD(0x0C0AE4D6u, 1);  /* 0C0AE4D4 mov.b Rm,@Rn */
	W32(r6 + 0x8u, r13); UPD(0x0C0AE4D8u, 1);  /* 0C0AE4D6 mov.l Rm,@(disp,Rn) */
	r3 += 0xFFFFFFBFu;  /* 0C0AE4D8 add #imm,Rn */
	r5 = r11;  /* 0C0AE4DA mov Rm,Rn */
	UPD(0x0C0AE4DCu, 2);
L_0C0AE4DC: BLKS(0x0C0AE4DCu);
	r5 += 0x1u;  /* 0C0AE4DC add #imm,Rn */
	r11 = (u32)(s32)(s8)r5;  /* 0C0AE4DE exts.b Rm,Rn */
	r2 = 0x7u;  /* 0C0AE4E0 mov #imm,Rn */
	r6 += 0x4Cu;  /* 0C0AE4E2 add #imm,Rn */
	T = (s32)r11 > (s32)r2;  /* 0C0AE4E4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AE474u, 8); goto L_0C0AE474; } goto L_0C0AE4EA; }  /* 0C0AE4E6 bf/s */
L_0C0AE4EA: BLKS(0x0C0AE4EAu);
	r3 = 0xC057DC0u; UPD(0x0C0AE4ECu, 2);  /* 0C0AE4EA mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0AE4EC mov Rm,Rn */
	IF(0x0C0AE4EEu); PR = R32(r15); r15 += 4; UPD(0x0C0AE4F0u, 2);  /* 0C0AE4EE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AE4F2u, 1);  /* 0C0AE4F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AE4F4u, 1);  /* 0C0AE4F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AE4F6u, 1);  /* 0C0AE4F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AE4F8u, 1);  /* 0C0AE4F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AE4FAu, 1);  /* 0C0AE4F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AE4FCu, 1);  /* 0C0AE4FA mov.l @Rm+,Rn */
	IF(0x0C0AE4FCu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C057DC0u: TAIL(f_0C057DC0); default: JUMPD(tv_); } }  /* 0C0AE4FC jmp @Rn */
L_0C0AE500: BLKS(0x0C0AE500u);
	r4 = r11;  /* 0C0AE500 mov Rm,Rn */
	r4 += 0x8u;  /* 0C0AE502 add #imm,Rn */
	IF(0x0C0AE504u); { u32 t_ = r13; PR = 0x0C0AE508u; r5 = R32(r8 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C057F60, 0x0C057F60u, 0x0C0AE508u); }  /* 0C0AE504 jsr @Rn */
L_0C0AE508: BLKS(0x0C0AE508u);
	r0 = 0xC0AEEC0u; UPD(0x0C0AE50Au, 1);  /* 0C0AE508 mov.l @(disp,pc),Rn */
	IF(0x0C0AE50Au); { u32 t_ = r0; PR = 0x0C0AE50Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AEEC0, 0x0C0AEEC0u, 0x0C0AE50Eu); }  /* 0C0AE50A jsr @Rn */
L_0C0AE50E: BLKS(0x0C0AE50Eu);
	{ r3 = r11; /* slot mov Rm,Rn */ UPD(0x0C0AE438u, 3); goto L_0C0AE438; }  /* 0C0AE50E bra */
}

/* FUN_0c0ae540 */
void f_0C0AE540(sh3_t *c)
{
	LOCALS;
L_0C0AE540: BLKS(0x0C0AE540u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE542u, 1);  /* 0C0AE540 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C0AE542 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE546u, 2);  /* 0C0AE544 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE548u, 1);  /* 0C0AE546 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE54Au, 1);  /* 0C0AE548 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE54Cu, 1);  /* 0C0AE54A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE54Eu, 1);  /* 0C0AE54C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE550u, 1);  /* 0C0AE54E mov.l Rm,@-Rn */
	r0 = 0xC392D80u; UPD(0x0C0AE552u, 1);  /* 0C0AE550 mov.l @(disp,pc),Rn */
	IF(0x0C0AE552u); r15 -= 4; W32(r15, PR); UPD(0x0C0AE554u, 1);  /* 0C0AE552 sts.l pr,@-Rn */
	r3 = 0xC283CA4u; UPD(0x0C0AE556u, 1);  /* 0C0AE554 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AE556 mov Rm,Rn */
	W8(r0, r1); UPD(0x0C0AE55Au, 2);  /* 0C0AE558 mov.b Rm,@Rn */
	r4 = 0xC220C2Cu; UPD(0x0C0AE55Cu, 1);  /* 0C0AE55A mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C0AE55Eu, 1);  /* 0C0AE55C mov.l @Rm,Rn */
	r0 = R32(r4); UPD(0x0C0AE560u, 1);  /* 0C0AE55E mov.l @Rm,Rn */
	r1 = 0x40000000u; UPD(0x0C0AE562u, 1);  /* 0C0AE560 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C0AE562 add Rm,Rn */
	T = (s32)r2 > (s32)r1;  /* 0C0AE564 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r3, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0AE56Eu, 5); goto L_0C0AE56E; } UPD(0x0C0AE56Au, 1); goto L_0C0AE56A; }  /* 0C0AE566 bf/s */
L_0C0AE56A: BLKS(0x0C0AE56Au);
	r2 -= r1;  /* 0C0AE56A sub Rm,Rn */
	W32(r3, r2); UPD(0x0C0AE56Eu, 2);  /* 0C0AE56C mov.l Rm,@Rn */
L_0C0AE56E: BLKS(0x0C0AE56Eu);
	r3 = 0xC286288u; UPD(0x0C0AE570u, 1);  /* 0C0AE56E mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0AE570 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AE574u, 2);  /* 0C0AE572 mov.b @Rm,Rn */
	r4 = 0xC392D5Cu; UPD(0x0C0AE576u, 1);  /* 0C0AE574 mov.l @(disp,pc),Rn */
	r5 = r2 & 0xFF;  /* 0C0AE576 extu.b Rm,Rn */
	r8 = 0xC275DCAu; UPD(0x0C0AE57Au, 2);  /* 0C0AE578 mov.l @(disp,pc),Rn */
	r0 = 0xC220C52u; UPD(0x0C0AE57Cu, 1);  /* 0C0AE57A mov.l @(disp,pc),Rn */
L_0C0AE57C: BLKS(0x0C0AE57Cu);
	r1 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AE57Eu, 1);  /* 0C0AE57C mov.b @Rm,Rn */
	r2 = r1 & 0xFF;  /* 0C0AE57E extu.b Rm,Rn */
	T = r2 == r5;  /* 0C0AE580 cmp/eq Rm,Rn */
	{ u32 c_ = T; T = r2 > r5; /* slot cmp/hi Rm,Rn */ if (c_) { UPD(0x0C0AE592u, 5); goto L_0C0AE592; } goto L_0C0AE586; }  /* 0C0AE582 bt/s */
L_0C0AE586: BLKS(0x0C0AE586u);
	if (T) { UPD(0x0C0AE58Eu, 4); goto L_0C0AE58E; }  /* 0C0AE586 bt */
L_0C0AE588: BLKS(0x0C0AE588u);
	r1 += 0x1u;  /* 0C0AE588 add #imm,Rn */
	{ W8(r4, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C0AE592u, 4); goto L_0C0AE592; }  /* 0C0AE58A bra */
L_0C0AE58E: BLKS(0x0C0AE58Eu);
	r1 += 0xFFFFFFFFu;  /* 0C0AE58E add #imm,Rn */
	W8(r4, r1); UPD(0x0C0AE592u, 2);  /* 0C0AE590 mov.b Rm,@Rn */
L_0C0AE592: BLKS(0x0C0AE592u);
	r7 = 0xC283CB2u; UPD(0x0C0AE594u, 1);  /* 0C0AE592 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s8)R8(r8); UPD(0x0C0AE596u, 1);  /* 0C0AE594 mov.b @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0AE598u, 1);  /* 0C0AE596 mov.b @Rm,Rn */
	r1 = r9 & 0xFF;  /* 0C0AE598 extu.b Rm,Rn */
	r3 = r2 & 0xFF;  /* 0C0AE59A extu.b Rm,Rn */
	T = r3 == r1;  /* 0C0AE59C cmp/eq Rm,Rn */
	{ u32 c_ = T; T = r3 > r1; /* slot cmp/hi Rm,Rn */ if (c_) { UPD(0x0C0AE5B0u, 6); goto L_0C0AE5B0; } goto L_0C0AE5A2; }  /* 0C0AE59E bt/s */
L_0C0AE5A2: BLKS(0x0C0AE5A2u);
	{ u32 c_ = T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AE5AAu, 4); goto L_0C0AE5AA; } goto L_0C0AE5A6; }  /* 0C0AE5A2 bt/s */
L_0C0AE5A6: BLKS(0x0C0AE5A6u);
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0AE5AEu, 4); goto L_0C0AE5AE; }  /* 0C0AE5A6 bra */
L_0C0AE5AA: BLKS(0x0C0AE5AAu);
	r1 = r2;  /* 0C0AE5AA mov Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0AE5AC add #imm,Rn */
	UPD(0x0C0AE5AEu, 2);
L_0C0AE5AE: BLKS(0x0C0AE5AEu);
	W8(r7, r1); UPD(0x0C0AE5B0u, 1);  /* 0C0AE5AE mov.b Rm,@Rn */
L_0C0AE5B0: BLKS(0x0C0AE5B0u);
	r7 = 0xC392B09u; UPD(0x0C0AE5B2u, 1);  /* 0C0AE5B0 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AE5B4u, 1);  /* 0C0AE5B2 mov.b @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0AE5B6u, 1);  /* 0C0AE5B4 mov.b @Rm,Rn */
	r1 = r10 & 0xFF;  /* 0C0AE5B6 extu.b Rm,Rn */
	r3 = r2 & 0xFF;  /* 0C0AE5B8 extu.b Rm,Rn */
	T = r3 == r1;  /* 0C0AE5BA cmp/eq Rm,Rn */
	{ u32 c_ = T; T = r3 > r1; /* slot cmp/hi Rm,Rn */ if (c_) { UPD(0x0C0AE5CEu, 6); goto L_0C0AE5CE; } goto L_0C0AE5C0; }  /* 0C0AE5BC bt/s */
L_0C0AE5C0: BLKS(0x0C0AE5C0u);
	{ u32 c_ = T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AE5C8u, 4); goto L_0C0AE5C8; } goto L_0C0AE5C4; }  /* 0C0AE5C0 bt/s */
L_0C0AE5C4: BLKS(0x0C0AE5C4u);
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0AE5CCu, 4); goto L_0C0AE5CC; }  /* 0C0AE5C4 bra */
L_0C0AE5C8: BLKS(0x0C0AE5C8u);
	r1 = r2;  /* 0C0AE5C8 mov Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0AE5CA add #imm,Rn */
	UPD(0x0C0AE5CCu, 2);
L_0C0AE5CC: BLKS(0x0C0AE5CCu);
	W8(r7, r1); UPD(0x0C0AE5CEu, 1);  /* 0C0AE5CC mov.b Rm,@Rn */
L_0C0AE5CE: BLKS(0x0C0AE5CEu);
	r11 = r6;  /* 0C0AE5CE mov Rm,Rn */
	r11 += 0x1u;  /* 0C0AE5D0 add #imm,Rn */
	r6 = (u32)(s32)(s16)r11;  /* 0C0AE5D2 exts.w Rm,Rn */
	r7 = 0x1u;  /* 0C0AE5D4 mov #imm,Rn */
	T = (s32)r6 > (s32)r7;  /* 0C0AE5D6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AE57Cu, 8); goto L_0C0AE57C; }  /* 0C0AE5D8 bf */
L_0C0AE5DA: BLKS(0x0C0AE5DAu);
	r6 = 0xC220C2Cu; UPD(0x0C0AE5DCu, 1);  /* 0C0AE5DA mov.l @(disp,pc),Rn */
	r5 = 0xC21CC84u; UPD(0x0C0AE5DEu, 1);  /* 0C0AE5DC mov.l @(disp,pc),Rn */
	r3 = R32(r6); UPD(0x0C0AE5E0u, 1);  /* 0C0AE5DE mov.l @Rm,Rn */
	r7 = R32(r5); UPD(0x0C0AE5E2u, 1);  /* 0C0AE5E0 mov.l @Rm,Rn */
	T = r3 == r7;  /* 0C0AE5E2 cmp/eq Rm,Rn */
	{ u32 c_ = T; r2 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AE5FCu, 4); goto L_0C0AE5FC; } goto L_0C0AE5E8; }  /* 0C0AE5E4 bt/s */
L_0C0AE5E8: BLKS(0x0C0AE5E8u);
	r2 -= r7;  /* 0C0AE5E8 sub Rm,Rn */
	IF(0x0C0AE5EAu); T = (s32)r2 >= 0;  /* 0C0AE5EA cmp/pz Rn */
	if (T) { UPD(0x0C0AE5F0u, 6); goto L_0C0AE5F0; }  /* 0C0AE5EC bt */
L_0C0AE5EE: BLKS(0x0C0AE5EEu);
	r2 = 0u - r2;  /* 0C0AE5EE neg Rm,Rn */
	UPD(0x0C0AE5F0u, 1);
L_0C0AE5F0: BLKS(0x0C0AE5F0u);
	r8 = 0xC220C24u; UPD(0x0C0AE5F2u, 1);  /* 0C0AE5F0 mov.l @(disp,pc),Rn */
	r1 = R32(r8); UPD(0x0C0AE5F4u, 1);  /* 0C0AE5F2 mov.l @Rm,Rn */
	T = (s32)r2 >= (s32)r1;  /* 0C0AE5F4 cmp/ge Rm,Rn */
	{ u32 c_ = T; T = (s32)r3 >= (s32)r7; /* slot cmp/ge Rm,Rn */ if (c_) { UPD(0x0C0AE6D0u, 4); goto L_0C0AE6D0; } goto L_0C0AE5FA; }  /* 0C0AE5F6 bt/s */
L_0C0AE5FA: BLKS(0x0C0AE5FAu);
	W32(r6, r7); UPD(0x0C0AE5FCu, 2);  /* 0C0AE5FA mov.l Rm,@Rn */
L_0C0AE5FC: BLKS(0x0C0AE5FCu);
	r11 = 0xC26CAE0u; UPD(0x0C0AE5FEu, 1);  /* 0C0AE5FC mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C0AE5FE mov #imm,Rn */
	r12 = 0xC392D80u; UPD(0x0C0AE602u, 2);  /* 0C0AE600 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0AE602 mov #imm,Rn */
	r13 = 0xC2864B8u; UPD(0x0C0AE606u, 2);  /* 0C0AE604 mov.l @(disp,pc),Rn */
	IF(0x0C0AE606u); ;  /* 0C0AE606 nop */
	UPD(0x0C0AE608u, 1);
L_0C0AE608: BLKS(0x0C0AE608u);
	r9 = r10;  /* 0C0AE608 mov Rm,Rn */
	r9 += r11;  /* 0C0AE60A add Rm,Rn */
	r6 = R32(r9); UPD(0x0C0AE60Eu, 3);  /* 0C0AE60C mov.l @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0AE60E tst Rm,Rn */
	if (!T) { UPD(0x0C0AE690u, 4); goto L_0C0AE690; }  /* 0C0AE610 bf */
L_0C0AE612: BLKS(0x0C0AE612u);
	r3 = r8;  /* 0C0AE612 mov Rm,Rn */
	r3 += 0x1u;  /* 0C0AE614 add #imm,Rn */
	r8 = (u32)(s32)(s16)r3;  /* 0C0AE616 exts.w Rm,Rn */
	r0 = 0x7u;  /* 0C0AE618 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C0AE61A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AE608u, 8); goto L_0C0AE608; } goto L_0C0AE620; }  /* 0C0AE61C bf/s */
L_0C0AE620: BLKS(0x0C0AE620u);
	r13 = 0xC392D80u; UPD(0x0C0AE622u, 2);  /* 0C0AE620 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s8)R8(r13); UPD(0x0C0AE624u, 1);  /* 0C0AE622 mov.b @Rm,Rn */
	r1 = r12 & 0xFF;  /* 0C0AE624 extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0AE626 tst Rm,Rn */
	if (T) { UPD(0x0C0AE67Cu, 5); goto L_0C0AE67C; }  /* 0C0AE628 bt */
L_0C0AE62A: BLKS(0x0C0AE62Au);
	r12 = r1;  /* 0C0AE62A mov Rm,Rn */
	r12 += 0xFFFFFFFFu;  /* 0C0AE62C add #imm,Rn */
	IF(0x0C0AE62Eu); ;  /* 0C0AE62E nop */
	UPD(0x0C0AE630u, 3);
L_0C0AE630: BLKS(0x0C0AE630u);
	r10 = 0x0u;  /* 0C0AE630 mov #imm,Rn */
	T = (s32)r10 >= (s32)r12;  /* 0C0AE632 cmp/ge Rm,Rn */
	{ u32 c_ = T; r8 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AE678u, 5); goto L_0C0AE678; } goto L_0C0AE638; }  /* 0C0AE634 bt/s */
L_0C0AE638: BLKS(0x0C0AE638u);
	r2 = 0xC392D80u; UPD(0x0C0AE63Au, 2);  /* 0C0AE638 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AE63Cu, 1);  /* 0C0AE63A mov.b @Rm,Rn */
	r11 = 0xC286058u; UPD(0x0C0AE63Eu, 1);  /* 0C0AE63C mov.l @(disp,pc),Rn */
	r9 = r5 & 0xFF;  /* 0C0AE63E extu.b Rm,Rn */
	r0 = 0xC39302Cu; UPD(0x0C0AE642u, 2);  /* 0C0AE640 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFFFu;  /* 0C0AE642 add #imm,Rn */
	UPD(0x0C0AE644u, 1);
L_0C0AE644: BLKS(0x0C0AE644u);
	r7 = r8;  /* 0C0AE644 mov Rm,Rn */
	r7 += r11;  /* 0C0AE646 add Rm,Rn */
	r4 = r7;  /* 0C0AE648 mov Rm,Rn */
	r4 += 0x1u;  /* 0C0AE64A add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r7); UPD(0x0C0AE64Eu, 5);  /* 0C0AE64C mov.b @Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AE650u, 1);  /* 0C0AE64E mov.b @Rm,Rn */
	r5 = r13 & 0xFF;  /* 0C0AE650 extu.b Rm,Rn */
	r3 = r6 & 0xFF;  /* 0C0AE652 extu.b Rm,Rn */
	T = r5 >= r3;  /* 0C0AE654 cmp/hs Rm,Rn */
	{ u32 c_ = T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AE66Cu, 6); goto L_0C0AE66C; } goto L_0C0AE65A; }  /* 0C0AE656 bt/s */
L_0C0AE65A: BLKS(0x0C0AE65Au);
	{ u32 v_ = (u32)(s32)(s8)R8(r13); r13 += 1; r1 = v_; } UPD(0x0C0AE65Cu, 2);  /* 0C0AE65A mov.b @Rm+,Rn */
	r3 = (u32)(s32)(s8)R8(r13); UPD(0x0C0AE65Eu, 1);  /* 0C0AE65C mov.b @Rm,Rn */
	W8(r7, r6); UPD(0x0C0AE660u, 1);  /* 0C0AE65E mov.b Rm,@Rn */
	W8(r0, r3); UPD(0x0C0AE662u, 1);  /* 0C0AE660 mov.b Rm,@Rn */
	r6 = r10;  /* 0C0AE662 mov Rm,Rn */
	r6 += 0x1u;  /* 0C0AE664 add #imm,Rn */
	W8(r13, r1); UPD(0x0C0AE668u, 3);  /* 0C0AE666 mov.b Rm,@Rn */
	r10 = r6 & 0xFF;  /* 0C0AE668 extu.b Rm,Rn */
	W8(r4, r5); UPD(0x0C0AE66Cu, 2);  /* 0C0AE66A mov.b Rm,@Rn */
L_0C0AE66C: BLKS(0x0C0AE66Cu);
	r7 = r8;  /* 0C0AE66C mov Rm,Rn */
	r7 += 0x1u;  /* 0C0AE66E add #imm,Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C0AE670 exts.w Rm,Rn */
	T = (s32)r8 >= (s32)r9;  /* 0C0AE672 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r0 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AE644u, 7); goto L_0C0AE644; } UPD(0x0C0AE678u, 1); goto L_0C0AE678; }  /* 0C0AE674 bf/s */
L_0C0AE678: BLKS(0x0C0AE678u);
	T = (r10 & r10) == 0;  /* 0C0AE678 tst Rm,Rn */
	if (!T) { UPD(0x0C0AE630u, 4); goto L_0C0AE630; }  /* 0C0AE67A bf */
L_0C0AE67C: BLKS(0x0C0AE67Cu);
	r15 = r14;  /* 0C0AE67C mov Rm,Rn */
	IF(0x0C0AE67Eu); PR = R32(r15); r15 += 4; UPD(0x0C0AE680u, 2);  /* 0C0AE67E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AE682u, 1);  /* 0C0AE680 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AE684u, 1);  /* 0C0AE682 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AE686u, 1);  /* 0C0AE684 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AE688u, 1);  /* 0C0AE686 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AE68Au, 1);  /* 0C0AE688 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AE68Cu, 1);  /* 0C0AE68A mov.l @Rm+,Rn */
	IF(0x0C0AE68Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AE68C rts */
L_0C0AE690: BLKS(0x0C0AE690u);
	r4 = R32(r9 + 0x4u); UPD(0x0C0AE692u, 1);  /* 0C0AE690 mov.l @(disp,Rm),Rn */
	r0 = 0xC1F51E8u; UPD(0x0C0AE694u, 1);  /* 0C0AE692 mov.l @(disp,pc),Rn */
	IF(0x0C0AE694u); r4 <<= 2;  /* 0C0AE694 shll2 Rn */
	IF(0x0C0AE696u); r7 = R32(r0 + r4); UPD(0x0C0AE698u, 2);  /* 0C0AE696 mov.l @(r0,Rm),Rn */
	r9 += 0x42u;  /* 0C0AE698 add #imm,Rn */
	IF(0x0C0AE69Au); { u32 t_ = r7; PR = 0x0C0AE69Eu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C0AE69Eu); }  /* 0C0AE69A jsr @Rn */
L_0C0AE69E: BLKS(0x0C0AE69Eu);
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C0AE6A0u, 1);  /* 0C0AE69E mov.b @Rm,Rn */
	r3 = 0x1Fu;  /* 0C0AE6A0 mov #imm,Rn */
	r0 = 0xC39302Cu; UPD(0x0C0AE6A4u, 2);  /* 0C0AE6A2 mov.l @(disp,pc),Rn */
	r6 = r2 & 0xFF;  /* 0C0AE6A4 extu.b Rm,Rn */
	IF(0x0C0AE6A6u); W8(r0 + r6, r8); UPD(0x0C0AE6A8u, 2);  /* 0C0AE6A6 mov.b Rm,@(r0,Rn) */
	r2 += 0x1u;  /* 0C0AE6A8 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C0AE6ACu, 2);  /* 0C0AE6AA mov.b @Rm,Rn */
	r9 = 0xC286058u; UPD(0x0C0AE6AEu, 1);  /* 0C0AE6AC mov.l @(disp,pc),Rn */
	r3 &= r5;  /* 0C0AE6AE and Rm,Rn */
	r0 = r9;  /* 0C0AE6B0 mov Rm,Rn */
	r3 += r3;  /* 0C0AE6B2 add Rm,Rn */
	IF(0x0C0AE6B4u); W8(r0 + r6, r5); UPD(0x0C0AE6B6u, 4);  /* 0C0AE6B4 mov.b Rm,@(r0,Rn) */
	r4 = r3;  /* 0C0AE6B6 mov Rm,Rn */
	r4 += r13;  /* 0C0AE6B8 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C0AE6BCu, 3);  /* 0C0AE6BA mov.w @Rm,Rn */
	r0 += 0x1u;  /* 0C0AE6BC add #imm,Rn */
	W8(r12, r2); UPD(0x0C0AE6C0u, 2);  /* 0C0AE6BE mov.b Rm,@Rn */
	{ W16(r4, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C0AE612u, 3); goto L_0C0AE612; }  /* 0C0AE6C0 bra */
L_0C0AE6D0: BLKS(0x0C0AE6D0u);
	if (T) { UPD(0x0C0AE6E0u, 3); goto L_0C0AE6E0; }  /* 0C0AE6D0 bt */
L_0C0AE6D2: BLKS(0x0C0AE6D2u);
	r3 += r1;  /* 0C0AE6D2 add Rm,Rn */
	UPD(0x0C0AE6D4u, 1);
L_0C0AE6D4: BLKS(0x0C0AE6D4u);
	{ W32(r6, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C0AE5FCu, 3); goto L_0C0AE5FC; }  /* 0C0AE6D4 bra */
L_0C0AE6E0: BLKS(0x0C0AE6E0u);
	{ r3 -= r1; /* slot sub Rm,Rn */ UPD(0x0C0AE6D4u, 3); goto L_0C0AE6D4; }  /* 0C0AE6E0 bra */
}

void f_0C0AE730(sh3_t *c)
{
	LOCALS;
L_0C0AE730: BLKS(0x0C0AE730u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE732u, 1);  /* 0C0AE730 mov.l Rm,@-Rn */
	r6 = 0x4Cu;  /* 0C0AE732 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE736u, 2);  /* 0C0AE734 mov.l Rm,@-Rn */
	r8 = 0xFFFFFFFBu;  /* 0C0AE736 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE73Au, 2);  /* 0C0AE738 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE73Cu, 1);  /* 0C0AE73A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE73Eu, 1);  /* 0C0AE73C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE740u, 1);  /* 0C0AE73E mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0AE740 exts.w Rm,Rn */
	IF(0x0C0AE742u); MACL = r13 * r6;  /* 0C0AE742 mul.l Rm,Rn */
	r2 = 0xC26CAE0u; UPD(0x0C0AE746u, 4);  /* 0C0AE744 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE748u, 1);  /* 0C0AE746 mov.l Rm,@-Rn */
	IF(0x0C0AE748u); r6 = MACL;  /* 0C0AE748 sts macl,Rn */
	r9 = 0xC3929E0u; UPD(0x0C0AE74Cu, 2);  /* 0C0AE74A mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0AE74C add Rm,Rn */
	r0 = R32(r6 + 0xCu); UPD(0x0C0AE750u, 2);  /* 0C0AE74E mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0AE750 add #imm,Rn */
	r4 = R32(r9); UPD(0x0C0AE754u, 2);  /* 0C0AE752 mov.l @Rm,Rn */
	r14 = r15;  /* 0C0AE754 mov Rm,Rn */
	r4 -= r0;  /* 0C0AE756 sub Rm,Rn */
	r10 = R32(r6 + 0x8u); UPD(0x0C0AE75Au, 3);  /* 0C0AE758 mov.l @(disp,Rm),Rn */
	r1 = (r4 >> 16) | (r4 << 16);  /* 0C0AE75A swap.w Rm,Rn */
	r9 = 0xC283CAAu; UPD(0x0C0AE75Eu, 2);  /* 0C0AE75C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r1;  /* 0C0AE75E exts.w Rm,Rn */
	r3 = (r10 >> 16) | (r10 << 16);  /* 0C0AE760 swap.w Rm,Rn */
	r5 = r0;  /* 0C0AE762 mov Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0AE766u, 4);  /* 0C0AE764 mov.w @Rm,Rn */
	r10 = (u32)(s32)(s16)r3;  /* 0C0AE766 exts.w Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0AE768 and #imm,r0 */
	r4 -= r0;  /* 0C0AE76A sub Rm,Rn */
	r11 = r10;  /* 0C0AE76C mov Rm,Rn */
	IF(0x0C0AE76Eu); ARG0(0x4B8Cu); { s32 s_ = (s32)r8; if (s_ >= 0) r11 <<= (s_ & 31); else if ((s_ & 31) == 0) r11 = (u32)((s32)r11 >> 31); else r11 = (u32)((s32)r11 >> ((~s_ & 31) + 1)); }  /* 0C0AE76E shad Rm,Rn */
	IF(0x0C0AE770u); ARG0(0x458Cu); { s32 s_ = (s32)r8; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C0AE770 shad Rm,Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AE772 exts.w Rm,Rn */
	r4 = R32(r6); UPD(0x0C0AE776u, 8);  /* 0C0AE774 mov.l @Rm,Rn */
	W32(r14, r11); UPD(0x0C0AE778u, 1);  /* 0C0AE776 mov.l Rm,@Rn */
	r6 += 0x3Cu;  /* 0C0AE778 add #imm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0AE77Cu, 2);  /* 0C0AE77A mov.l Rm,@(disp,Rn) */
	r12 = 0xC392AF4u; UPD(0x0C0AE77Eu, 1);  /* 0C0AE77C mov.l @(disp,pc),Rn */
	r8 = 0x2000000u; UPD(0x0C0AE780u, 1);  /* 0C0AE77E mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r5 = v_; } UPD(0x0C0AE782u, 1);  /* 0C0AE780 mov.b @Rm+,Rn */
	r4 &= r8;  /* 0C0AE782 and Rm,Rn */
	r3 = 0xC21CCF6u; UPD(0x0C0AE786u, 2);  /* 0C0AE784 mov.l @(disp,pc),Rn */
	r8 = r5 & 0xFF;  /* 0C0AE786 extu.b Rm,Rn */
	r7 = R32(r12); UPD(0x0C0AE78Au, 2);  /* 0C0AE788 mov.l @Rm,Rn */
	r2 = r8;  /* 0C0AE78A mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r0 = v_; } UPD(0x0C0AE78Eu, 2);  /* 0C0AE78C mov.b @Rm+,Rn */
	r12 = 0x1Fu;  /* 0C0AE78E mov #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r3); UPD(0x0C0AE792u, 2);  /* 0C0AE790 mov.w @Rm,Rn */
	r10 &= r12;  /* 0C0AE792 and Rm,Rn */
	IF(0x0C0AE794u); r2 <<= 16;  /* 0C0AE794 shll16 Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C0AE798u, 3);  /* 0C0AE796 mov.b @Rm,Rn */
	r11 -= r10;  /* 0C0AE798 sub Rm,Rn */
	r4 |= r2;  /* 0C0AE79A or Rm,Rn */
	r12 = r0 & 0xFF;  /* 0C0AE79C extu.b Rm,Rn */
	IF(0x0C0AE79Eu); r12 <<= 8;  /* 0C0AE79E shll8 Rn */
	r2 = 0xC392D5Cu; UPD(0x0C0AE7A2u, 5);  /* 0C0AE7A0 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r11;  /* 0C0AE7A2 exts.w Rm,Rn */
	r11 = r3 & 0xFF;  /* 0C0AE7A4 extu.b Rm,Rn */
	r4 |= r12;  /* 0C0AE7A6 or Rm,Rn */
	r5 = 0x10000000u; UPD(0x0C0AE7AAu, 4);  /* 0C0AE7A8 mov.l @(disp,pc),Rn */
	r4 |= r11;  /* 0C0AE7AA or Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AE7AEu, 2);  /* 0C0AE7AC mov.b @Rm,Rn */
	r4 |= r5; UPD(0x0C0AE7B0u, 1);  /* 0C0AE7AE or Rm,Rn */
	r12 = 0xC283CB2u; UPD(0x0C0AE7B2u, 1);  /* 0C0AE7B0 mov.l @(disp,pc),Rn */
	r5 = r0 & 0xFF;  /* 0C0AE7B2 extu.b Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C0AE7B6u, 2);  /* 0C0AE7B4 mov.b @Rm,Rn */
	r11 = 0xFFFFFFFFu;  /* 0C0AE7B6 mov #imm,Rn */
	T = (r5 & r5) == 0;  /* 0C0AE7B8 tst Rm,Rn */
	{ u32 t_ = 0u - r11, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0AE7BA negc Rm,Rn */
	r12 = r3 & 0xFF;  /* 0C0AE7BC extu.b Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C0AE7BE tst Rm,Rn */
	{ u32 t_ = 0u - r11, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C0AE7C0 negc Rm,Rn */
	r3 = 0xC392B09u; UPD(0x0C0AE7C4u, 7);  /* 0C0AE7C2 mov.l @(disp,pc),Rn */
	r0 |= r1;  /* 0C0AE7C4 or Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AE7C8u, 2);  /* 0C0AE7C6 mov.b @Rm,Rn */
	r2 = r1 & 0xFF;  /* 0C0AE7C8 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AE7CA tst Rm,Rn */
	{ u32 t_ = 0u - r11, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C0AE7CC negc Rm,Rn */
	r0 |= r3;  /* 0C0AE7CE or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AE7D0 tst Rm,Rn */
	{ u32 c_ = T; r6 += 0xFFFFFFC2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AE7DAu, 8); goto L_0C0AE7DA; } goto L_0C0AE7D6; }  /* 0C0AE7D2 bt/s */
L_0C0AE7D6: BLKS(0x0C0AE7D6u);
	r0 = 0x1000000u; UPD(0x0C0AE7D8u, 2);  /* 0C0AE7D6 mov.l @(disp,pc),Rn */
	r4 |= r0;  /* 0C0AE7D8 or Rm,Rn */
	UPD(0x0C0AE7DAu, 1);
L_0C0AE7DA: BLKS(0x0C0AE7DAu);
	IF(0x0C0AE7DAu); r10 <<= 16;  /* 0C0AE7DA shll16 Rn */
	r1 = r10;  /* 0C0AE7DC mov Rm,Rn */
	r1 |= r9;  /* 0C0AE7DE or Rm,Rn */
	r0 = r8;  /* 0C0AE7E0 mov Rm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0AE7E4u, 5);  /* 0C0AE7E2 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x1u;  /* 0C0AE7E4 cmp/eq #imm,r0 */
	{ u32 c_ = T; r11 = R32(r6 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0AE8A0u, 4); goto L_0C0AE8A0; } UPD(0x0C0AE7EAu, 1); goto L_0C0AE7EA; }  /* 0C0AE7E6 bt/s */
L_0C0AE7EA: BLKS(0x0C0AE7EAu);
	r6 += 0x3Fu;  /* 0C0AE7EA add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r0 = v_; } UPD(0x0C0AE7EEu, 2);  /* 0C0AE7EC mov.b @Rm+,Rn */
	r10 = r0 & 0xFF;  /* 0C0AE7EE extu.b Rm,Rn */
	IF(0x0C0AE7F0u); MACL = r10 * r5;  /* 0C0AE7F0 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r3 = v_; } UPD(0x0C0AE7F4u, 4);  /* 0C0AE7F2 mov.b @Rm+,Rn */
	IF(0x0C0AE7F4u); r1 = MACL;  /* 0C0AE7F4 sts macl,Rn */
	r9 = r3 & 0xFF;  /* 0C0AE7F6 extu.b Rm,Rn */
	IF(0x0C0AE7F8u); MACL = r9 * r12;  /* 0C0AE7F8 mul.l Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r6); UPD(0x0C0AE7FCu, 5);  /* 0C0AE7FA mov.b @Rm,Rn */
	r1 += r1;  /* 0C0AE7FC add Rm,Rn */
	IF(0x0C0AE7FEu); r8 = MACL;  /* 0C0AE7FE sts macl,Rn */
	r10 = r6 & 0xFF;  /* 0C0AE800 extu.b Rm,Rn */
	IF(0x0C0AE802u); MACL = r10 * r2;  /* 0C0AE802 mul.l Rm,Rn */
	r8 += r8;  /* 0C0AE804 add Rm,Rn */
	IF(0x0C0AE806u); r8 >>= 8;  /* 0C0AE806 shlr8 Rn */
	IF(0x0C0AE808u); r1 >>= 8;  /* 0C0AE808 shlr8 Rn */
	IF(0x0C0AE80Au); r9 = MACL;  /* 0C0AE80A sts macl,Rn */
	r3 = 0xFFFFFFF9u;  /* 0C0AE80C mov #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C0AE80E extu.b Rm,Rn */
	r5 = r1 & 0xFF;  /* 0C0AE810 extu.b Rm,Rn */
	IF(0x0C0AE812u); ARG0(0x493Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = (u32)((s32)r9 >> 31); else r9 = (u32)((s32)r9 >> ((~s_ & 31) + 1)); }  /* 0C0AE812 shad Rm,Rn */
	IF(0x0C0AE814u); r5 <<= 16;  /* 0C0AE814 shll16 Rn */
	IF(0x0C0AE816u); r0 <<= 8;  /* 0C0AE816 shll8 Rn */
	r5 += r0;  /* 0C0AE818 add Rm,Rn */
	r8 = r9 & 0xFF;  /* 0C0AE81A extu.b Rm,Rn */
	r5 += r8;  /* 0C0AE81C add Rm,Rn */
	UPD(0x0C0AE81Eu, 18);
L_0C0AE81E: BLKS(0x0C0AE81Eu);
	r10 = 0x4u;  /* 0C0AE81E mov #imm,Rn */
	IF(0x0C0AE820u); ARG0(0x4DADu); { s32 s_ = (s32)r10; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C0AE820 shld Rm,Rn */
	r9 = 0x1F001Fu; UPD(0x0C0AE824u, 3);  /* 0C0AE822 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0AE824 mov #imm,Rn */
	W32(r14 + 0xCu, r13); UPD(0x0C0AE828u, 2);  /* 0C0AE826 mov.l Rm,@(disp,Rn) */
	r8 = 0x8u;  /* 0C0AE828 mov #imm,Rn */
	r10 = 0xC221068u; UPD(0x0C0AE82Cu, 2);  /* 0C0AE82A mov.l @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C0AE82C mov #imm,Rn */
	IF(0x0C0AE82Eu); ;  /* 0C0AE82E nop */
	UPD(0x0C0AE830u, 2);
L_0C0AE830: BLKS(0x0C0AE830u);
	r6 = R32(r14); UPD(0x0C0AE832u, 1);  /* 0C0AE830 mov.l @Rm,Rn */
	r2 = 0xFu;  /* 0C0AE832 mov #imm,Rn */
	r6 += r12;  /* 0C0AE834 add Rm,Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C0AE838u, 3);  /* 0C0AE836 mov.l @(disp,Rm),Rn */
	r6 &= r2;  /* 0C0AE838 and Rm,Rn */
	r6 += r0;  /* 0C0AE83A add Rm,Rn */
	r1 = 0x4u;  /* 0C0AE83C mov #imm,Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C0AE840u, 4);  /* 0C0AE83E mov.l @(disp,Rm),Rn */
	IF(0x0C0AE840u); ARG0(0x461Du); { s32 s_ = (s32)r1; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0AE840 shld Rm,Rn */
	r3 = 0x0u;  /* 0C0AE842 mov #imm,Rn */
	r2 += r13;  /* 0C0AE844 add Rm,Rn */
	IF(0x0C0AE846u); ;  /* 0C0AE846 nop */
	UPD(0x0C0AE848u, 4);
L_0C0AE848: BLKS(0x0C0AE848u);
	r0 = R32(r14 + 0x4u); UPD(0x0C0AE84Au, 1);  /* 0C0AE848 mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C0AE84A add Rm,Rn */
	r0 &= 0xFu;  /* 0C0AE84C and #imm,r0 */
	r0 += r6;  /* 0C0AE84E add Rm,Rn */
	IF(0x0C0AE850u); r0 <<= 2;  /* 0C0AE850 shll2 Rn */
	IF(0x0C0AE852u); r1 = R32(r0 + r10); UPD(0x0C0AE854u, 5);  /* 0C0AE852 mov.l @(r0,Rm),Rn */
	W32(r7, r4); UPD(0x0C0AE856u, 1);  /* 0C0AE854 mov.l Rm,@Rn */
	r1 += r11;  /* 0C0AE856 add Rm,Rn */
	r7 += 0x4u;  /* 0C0AE858 add #imm,Rn */
	W32(r7, r1); UPD(0x0C0AE85Cu, 3);  /* 0C0AE85A mov.l Rm,@Rn */
	r0 = r3;  /* 0C0AE85C mov Rm,Rn */
	r7 += 0x4u;  /* 0C0AE85E add #imm,Rn */
	W32(r7, r2); UPD(0x0C0AE862u, 3);  /* 0C0AE860 mov.l Rm,@Rn */
	r0 += 0x1u;  /* 0C0AE862 add #imm,Rn */
	r7 += 0x4u;  /* 0C0AE864 add #imm,Rn */
	W32(r7, r9); UPD(0x0C0AE868u, 3);  /* 0C0AE866 mov.l Rm,@Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C0AE868 exts.w Rm,Rn */
	r7 += 0x4u;  /* 0C0AE86A add #imm,Rn */
	W32(r7, r5); UPD(0x0C0AE86Eu, 3);  /* 0C0AE86C mov.l Rm,@Rn */
	r2 += 0x20u;  /* 0C0AE86E add #imm,Rn */
	T = (s32)r3 > (s32)r8;  /* 0C0AE870 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AE848u, 5); goto L_0C0AE848; } goto L_0C0AE876; }  /* 0C0AE872 bf/s */
L_0C0AE876: BLKS(0x0C0AE876u);
	r3 = r12;  /* 0C0AE876 mov Rm,Rn */
	r12 = 0x200000u; UPD(0x0C0AE87Au, 3);  /* 0C0AE878 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0AE87A add #imm,Rn */
	r13 += r12;  /* 0C0AE87C add Rm,Rn */
	r12 = (u32)(s32)(s16)r3;  /* 0C0AE87E exts.w Rm,Rn */
	r6 = 0xAu;  /* 0C0AE880 mov #imm,Rn */
	T = (s32)r12 > (s32)r6;  /* 0C0AE882 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AE830u, 8); goto L_0C0AE830; }  /* 0C0AE884 bf */
L_0C0AE886: BLKS(0x0C0AE886u);
	r14 += 0x10u;  /* 0C0AE886 add #imm,Rn */
	r13 = 0xC392AF4u; UPD(0x0C0AE88Au, 2);  /* 0C0AE888 mov.l @(disp,pc),Rn */
	W32(r13, r7); UPD(0x0C0AE88Cu, 1);  /* 0C0AE88A mov.l Rm,@Rn */
	r15 = r14;  /* 0C0AE88C mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AE890u, 2);  /* 0C0AE88E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AE892u, 1);  /* 0C0AE890 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AE894u, 1);  /* 0C0AE892 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AE896u, 1);  /* 0C0AE894 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AE898u, 1);  /* 0C0AE896 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AE89Au, 1);  /* 0C0AE898 mov.l @Rm+,Rn */
	IF(0x0C0AE89Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AE89A rts */
L_0C0AE8A0: BLKS(0x0C0AE8A0u);
	r6 += 0x3Fu;  /* 0C0AE8A0 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r3 = v_; } UPD(0x0C0AE8A4u, 2);  /* 0C0AE8A2 mov.b @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r9 = v_; } UPD(0x0C0AE8A6u, 1);  /* 0C0AE8A4 mov.b @Rm+,Rn */
	r5 = r3 & 0xFF;  /* 0C0AE8A6 extu.b Rm,Rn */
	r8 = r9 & 0xFF;  /* 0C0AE8A8 extu.b Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r6); UPD(0x0C0AE8ACu, 3);  /* 0C0AE8AA mov.b @Rm,Rn */
	IF(0x0C0AE8ACu); r5 <<= 16;  /* 0C0AE8AC shll16 Rn */
	IF(0x0C0AE8AEu); r8 <<= 8;  /* 0C0AE8AE shll8 Rn */
	r5 |= r8;  /* 0C0AE8B0 or Rm,Rn */
	r2 = r6 & 0xFF;  /* 0C0AE8B2 extu.b Rm,Rn */
	{ r5 |= r2; /* slot or Rm,Rn */ UPD(0x0C0AE81Eu, 7); goto L_0C0AE81E; }  /* 0C0AE8B4 bra */
}

/* FUN_0c0ae8f0 */
void f_0C0AE8F0(sh3_t *c)
{
	LOCALS;
L_0C0AE8F0: BLKS(0x0C0AE8F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE8F2u, 1);  /* 0C0AE8F0 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0AE8F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE8F6u, 2);  /* 0C0AE8F4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE8F8u, 1);  /* 0C0AE8F6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AE8F8 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE8FCu, 2);  /* 0C0AE8FA mov.l Rm,@-Rn */
	IF(0x0C0AE8FCu); MACL = r9 * r2;  /* 0C0AE8FC mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE900u, 3);  /* 0C0AE8FE mov.l Rm,@-Rn */
	r4 = 0xFFFFFFFBu;  /* 0C0AE900 mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE904u, 2);  /* 0C0AE902 mov.l Rm,@-Rn */
	r6 = 0xC392AF4u; UPD(0x0C0AE906u, 1);  /* 0C0AE904 mov.l @(disp,pc),Rn */
	IF(0x0C0AE906u); r13 = MACL;  /* 0C0AE906 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE90Au, 2);  /* 0C0AE908 mov.l Rm,@-Rn */
	r5 = R32(r6); UPD(0x0C0AE90Cu, 1);  /* 0C0AE90A mov.l @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AE90C add #imm,Rn */
	r6 = 0xC26CAE0u; UPD(0x0C0AE910u, 2);  /* 0C0AE90E mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AE910 mov Rm,Rn */
	r13 += r6;  /* 0C0AE912 add Rm,Rn */
	r7 = R32(r13 + 0x8u); UPD(0x0C0AE916u, 3);  /* 0C0AE914 mov.l @(disp,Rm),Rn */
	r0 = 0xC3929E0u; UPD(0x0C0AE918u, 1);  /* 0C0AE916 mov.l @(disp,pc),Rn */
	r1 = (r7 >> 16) | (r7 << 16);  /* 0C0AE918 swap.w Rm,Rn */
	r12 = R32(r13 + 0xCu); UPD(0x0C0AE91Cu, 2);  /* 0C0AE91A mov.l @(disp,Rm),Rn */
	r10 = (u32)(s32)(s16)r1;  /* 0C0AE91C exts.w Rm,Rn */
	r11 = R32(r0); UPD(0x0C0AE920u, 2);  /* 0C0AE91E mov.l @Rm,Rn */
	r3 = r10;  /* 0C0AE920 mov Rm,Rn */
	IF(0x0C0AE922u); ARG0(0x434Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C0AE922 shad Rm,Rn */
	r11 -= r12;  /* 0C0AE924 sub Rm,Rn */
	r8 = (r11 >> 16) | (r11 << 16);  /* 0C0AE926 swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r8;  /* 0C0AE928 exts.w Rm,Rn */
	r7 = 0x1Fu;  /* 0C0AE92A mov #imm,Rn */
	W32(r14, r3); UPD(0x0C0AE92Eu, 7);  /* 0C0AE92C mov.l Rm,@Rn */
	r10 &= r7;  /* 0C0AE92E and Rm,Rn */
	r8 = r0;  /* 0C0AE930 mov Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0AE932 and #imm,r0 */
	r7 += 0x69u;  /* 0C0AE934 add #imm,Rn */
	r1 = 0xC0000001u; UPD(0x0C0AE938u, 5);  /* 0C0AE936 mov.l @(disp,pc),Rn */
	r7 -= r0;  /* 0C0AE938 sub Rm,Rn */
	r3 = 0xC286290u; UPD(0x0C0AE93Cu, 2);  /* 0C0AE93A mov.l @(disp,pc),Rn */
	IF(0x0C0AE93Cu); ARG0(0x484Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = (u32)((s32)r8 >> 31); else r8 = (u32)((s32)r8 >> ((~s_ & 31) + 1)); }  /* 0C0AE93C shad Rm,Rn */
	r0 = 0xC0000000u; UPD(0x0C0AE940u, 2);  /* 0C0AE93E mov.l @(disp,pc),Rn */
	r13 = r9;  /* 0C0AE940 mov Rm,Rn */
	W32(r3, r1); UPD(0x0C0AE944u, 2);  /* 0C0AE942 mov.l Rm,@Rn */
	r11 = 0x0u;  /* 0C0AE944 mov #imm,Rn */
	r4 = 0x3DBu; UPD(0x0C0AE948u, 2);  /* 0C0AE946 mov.w @(disp,pc),Rn */
	r12 = r6;  /* 0C0AE948 mov Rm,Rn */
	W32(r5, r0); UPD(0x0C0AE94Cu, 2);  /* 0C0AE94A mov.l Rm,@Rn */
	r4 -= r10;  /* 0C0AE94C sub Rm,Rn */
	r0 = 0x4u;  /* 0C0AE94E mov #imm,Rn */
	r10 = 0xC221068u; UPD(0x0C0AE952u, 3);  /* 0C0AE950 mov.l @(disp,pc),Rn */
	IF(0x0C0AE952u); ARG0(0x4D0Du); { s32 s_ = (s32)r0; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C0AE952 shld Rm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C0AE956u, 2);  /* 0C0AE954 mov.l Rm,@(disp,Rn) */
	r5 += 0x4u;  /* 0C0AE956 add #imm,Rn */
	IF(0x0C0AE958u); r4 <<= 16;  /* 0C0AE958 shll16 Rn */
	IF(0x0C0AE95Au); ;  /* 0C0AE95A nop */
	UPD(0x0C0AE95Cu, 3);
L_0C0AE95C: BLKS(0x0C0AE95Cu);
	r7 = R32(r14); UPD(0x0C0AE95Eu, 1);  /* 0C0AE95C mov.l @Rm,Rn */
	r3 = 0xFu;  /* 0C0AE95E mov #imm,Rn */
	r7 += r11;  /* 0C0AE960 add Rm,Rn */
	r7 &= r3;  /* 0C0AE962 and Rm,Rn */
	r7 += r13;  /* 0C0AE964 add Rm,Rn */
	r0 = 0x4u;  /* 0C0AE966 mov #imm,Rn */
	r3 = R32(r14 + 0x4u); UPD(0x0C0AE96Au, 6);  /* 0C0AE968 mov.l @(disp,Rm),Rn */
	IF(0x0C0AE96Au); ARG0(0x470Du); { s32 s_ = (s32)r0; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C0AE96A shld Rm,Rn */
	r6 = 0x0u;  /* 0C0AE96C mov #imm,Rn */
	IF(0x0C0AE96Eu); ;  /* 0C0AE96E nop */
	UPD(0x0C0AE970u, 3);
L_0C0AE970: BLKS(0x0C0AE970u);
	r0 = r8;  /* 0C0AE970 mov Rm,Rn */
	r0 += r6;  /* 0C0AE972 add Rm,Rn */
	r0 &= 0xFu;  /* 0C0AE974 and #imm,r0 */
	r0 += r7;  /* 0C0AE976 add Rm,Rn */
	IF(0x0C0AE978u); r0 <<= 2;  /* 0C0AE978 shll2 Rn */
	IF(0x0C0AE97Au); r2 = R32(r0 + r10); UPD(0x0C0AE97Cu, 6);  /* 0C0AE97A mov.l @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0AE97C tst Rm,Rn */
	if (T) { UPD(0x0C0AE9AAu, 4); goto L_0C0AE9AA; }  /* 0C0AE97E bt */
L_0C0AE980: BLKS(0x0C0AE980u);
	r0 = 0x11000000u; UPD(0x0C0AE982u, 1);  /* 0C0AE980 mov.l @(disp,pc),Rn */
	W32(r5, r0); UPD(0x0C0AE984u, 1);  /* 0C0AE982 mov.l Rm,@Rn */
	r0 = 0x4Cu;  /* 0C0AE984 mov #imm,Rn */
	IF(0x0C0AE986u); MACL = r9 * r0;  /* 0C0AE986 mul.l Rm,Rn */
	r5 += 0x4u;  /* 0C0AE988 add #imm,Rn */
	IF(0x0C0AE98Au); r1 = MACL;  /* 0C0AE98A sts macl,Rn */
	r1 += r12;  /* 0C0AE98C add Rm,Rn */
	r0 = R32(r1 + 0x24u); UPD(0x0C0AE990u, 7);  /* 0C0AE98E mov.l @(disp,Rm),Rn */
	r2 += r0;  /* 0C0AE990 add Rm,Rn */
	W32(r5, r2); UPD(0x0C0AE994u, 2);  /* 0C0AE992 mov.l Rm,@Rn */
	r2 = r4;  /* 0C0AE994 mov Rm,Rn */
	r5 += 0x4u;  /* 0C0AE996 add #imm,Rn */
	r2 |= r3;  /* 0C0AE998 or Rm,Rn */
	W32(r5, r2); UPD(0x0C0AE99Cu, 4);  /* 0C0AE99A mov.l Rm,@Rn */
	r0 = 0x1F001Fu; UPD(0x0C0AE99Eu, 1);  /* 0C0AE99C mov.l @(disp,pc),Rn */
	r5 += 0x4u;  /* 0C0AE99E add #imm,Rn */
	W32(r5, r0); UPD(0x0C0AE9A2u, 2);  /* 0C0AE9A0 mov.l Rm,@Rn */
	r2 = 0x808080u; UPD(0x0C0AE9A4u, 1);  /* 0C0AE9A2 mov.l @(disp,pc),Rn */
	r5 += 0x4u;  /* 0C0AE9A4 add #imm,Rn */
	W32(r5, r2); UPD(0x0C0AE9A8u, 2);  /* 0C0AE9A6 mov.l Rm,@Rn */
	r5 += 0x4u;  /* 0C0AE9A8 add #imm,Rn */
	UPD(0x0C0AE9AAu, 1);
L_0C0AE9AA: BLKS(0x0C0AE9AAu);
	r6 += 0x1u;  /* 0C0AE9AA add #imm,Rn */
	r2 = 0x8u;  /* 0C0AE9AC mov #imm,Rn */
	T = (s32)r6 > (s32)r2;  /* 0C0AE9AE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x20u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AE970u, 6); goto L_0C0AE970; } goto L_0C0AE9B4; }  /* 0C0AE9B0 bf/s */
L_0C0AE9B4: BLKS(0x0C0AE9B4u);
	r6 = 0x200000u; UPD(0x0C0AE9B6u, 2);  /* 0C0AE9B4 mov.l @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C0AE9B6 add #imm,Rn */
	r7 = 0xCu;  /* 0C0AE9B8 mov #imm,Rn */
	T = (s32)r11 > (s32)r7;  /* 0C0AE9BA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += r6; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0AE95Cu, 6); goto L_0C0AE95C; } goto L_0C0AE9C0; }  /* 0C0AE9BC bf/s */
L_0C0AE9C0: BLKS(0x0C0AE9C0u);
	r10 = 0xC0000001u; UPD(0x0C0AE9C2u, 2);  /* 0C0AE9C0 mov.l @(disp,pc),Rn */
	r14 += 0x8u;  /* 0C0AE9C2 add #imm,Rn */
	W32(r5, r10); UPD(0x0C0AE9C6u, 2);  /* 0C0AE9C4 mov.l Rm,@Rn */
	r9 = 0xC392AF4u; UPD(0x0C0AE9C8u, 1);  /* 0C0AE9C6 mov.l @(disp,pc),Rn */
	r5 += 0x4u;  /* 0C0AE9C8 add #imm,Rn */
	W32(r9, r5); UPD(0x0C0AE9CCu, 2);  /* 0C0AE9CA mov.l Rm,@Rn */
	r15 = r14;  /* 0C0AE9CC mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AE9D0u, 2);  /* 0C0AE9CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AE9D2u, 1);  /* 0C0AE9D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AE9D4u, 1);  /* 0C0AE9D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AE9D6u, 1);  /* 0C0AE9D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AE9D8u, 1);  /* 0C0AE9D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AE9DAu, 1);  /* 0C0AE9D8 mov.l @Rm+,Rn */
	IF(0x0C0AE9DAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AE9DA rts */
}

/* FUN_0c0aea10 */
void f_0C0AEA10(sh3_t *c)
{
	LOCALS;
L_0C0AEA10: BLKS(0x0C0AEA10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEA12u, 1);  /* 0C0AEA10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEA14u, 1);  /* 0C0AEA12 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0AEA14 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEA18u, 2);  /* 0C0AEA16 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEA1Au, 1);  /* 0C0AEA18 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEA1Cu, 1);  /* 0C0AEA1A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEA1Eu, 1);  /* 0C0AEA1C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEA20u, 1);  /* 0C0AEA1E mov.l Rm,@-Rn */
	r0 = 0xC220C2Cu; UPD(0x0C0AEA22u, 1);  /* 0C0AEA20 mov.l @(disp,pc),Rn */
	IF(0x0C0AEA22u); r15 -= 4; W32(r15, PR); UPD(0x0C0AEA24u, 1);  /* 0C0AEA22 sts.l pr,@-Rn */
	r2 = R32(r0); UPD(0x0C0AEA26u, 1);  /* 0C0AEA24 mov.l @Rm,Rn */
	IF(0x0C0AEA26u); T = (s32)r2 >= 0;  /* 0C0AEA26 cmp/pz Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AEA30u, 4); goto L_0C0AEA30; } goto L_0C0AEA2C; }  /* 0C0AEA28 bt/s */
L_0C0AEA2C: BLKS(0x0C0AEA2Cu);
	{ IF(0x0C0AEA2Eu); ; /* slot nop */ UPD(0x0C0AEBE0u, 4); goto L_0C0AEBE0; }  /* 0C0AEA2C bra */
L_0C0AEA30: BLKS(0x0C0AEA30u);
	r4 = 0x4Cu;  /* 0C0AEA30 mov #imm,Rn */
	IF(0x0C0AEA32u); MACL = r8 * r4;  /* 0C0AEA32 mul.l Rm,Rn */
	r3 = r2;  /* 0C0AEA34 mov Rm,Rn */
	r2 = 0xC26CAE0u; UPD(0x0C0AEA38u, 5);  /* 0C0AEA36 mov.l @(disp,pc),Rn */
	IF(0x0C0AEA38u); r7 = MACL;  /* 0C0AEA38 sts macl,Rn */
	r7 += r2;  /* 0C0AEA3A add Rm,Rn */
	r6 = 0xFFFFFFF8u;  /* 0C0AEA3C mov #imm,Rn */
	r2 = R32(r7 + 0x10u); UPD(0x0C0AEA40u, 4);  /* 0C0AEA3E mov.l @(disp,Rm),Rn */
	IF(0x0C0AEA40u); T = (s32)r2 >= 0;  /* 0C0AEA40 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C0AEA44u); ARG0(0x436Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ if (c_) { UPD(0x0C0AEA4Au, 4); goto L_0C0AEA4A; } goto L_0C0AEA46; }  /* 0C0AEA42 bt/s */
L_0C0AEA46: BLKS(0x0C0AEA46u);
	{ IF(0x0C0AEA48u); ; /* slot nop */ UPD(0x0C0AEBD0u, 4); goto L_0C0AEBD0; }  /* 0C0AEA46 bra */
L_0C0AEA4A: BLKS(0x0C0AEA4Au);
	IF(0x0C0AEA4Au); ARG0(0x426Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0AEA4A shad Rm,Rn */
	IF(0x0C0AEA4Cu); MACL = r3 * r2;  /* 0C0AEA4C mul.l Rm,Rn */
	r6 = R32(r7 + 0x8u); UPD(0x0C0AEA50u, 4);  /* 0C0AEA4E mov.l @(disp,Rm),Rn */
	IF(0x0C0AEA50u); r10 = MACL;  /* 0C0AEA50 sts macl,Rn */
	r6 += r10;  /* 0C0AEA52 add Rm,Rn */
	W32(r7 + 0x8u, r6); UPD(0x0C0AEA56u, 3);  /* 0C0AEA54 mov.l Rm,@(disp,Rn) */
	r2 = 0xC3929E0u; UPD(0x0C0AEA58u, 1);  /* 0C0AEA56 mov.l @(disp,pc),Rn */
	r0 = 0xFFFFFE78u; UPD(0x0C0AEA5Au, 1);  /* 0C0AEA58 mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AEA5Cu, 1);  /* 0C0AEA5A mov.w @Rm,Rn */
	r13 = R32(r7 + 0x14u); UPD(0x0C0AEA5Eu, 1);  /* 0C0AEA5C mov.l @(disp,Rm),Rn */
	r12 += r0;  /* 0C0AEA5E add Rm,Rn */
	r11 = 0x10000u; UPD(0x0C0AEA62u, 2);  /* 0C0AEA60 mov.l @(disp,pc),Rn */
	r11 -= r13;  /* 0C0AEA62 sub Rm,Rn */
	IF(0x0C0AEA64u); MACL = r12 * r11;  /* 0C0AEA64 mul.l Rm,Rn */
	r9 = 0x1600000u; UPD(0x0C0AEA68u, 4);  /* 0C0AEA66 mov.l @(disp,pc),Rn */
	IF(0x0C0AEA68u); r1 = MACL;  /* 0C0AEA68 sts macl,Rn */
	r9 += r1;  /* 0C0AEA6A add Rm,Rn */
	r3 = R32(r7 + 0x20u); UPD(0x0C0AEA6Eu, 3);  /* 0C0AEA6C mov.l @(disp,Rm),Rn */
	T = (s32)r6 > (s32)r3;  /* 0C0AEA6E cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r7 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AEA8Cu, 4); goto L_0C0AEA8C; } UPD(0x0C0AEA74u, 1); goto L_0C0AEA74; }  /* 0C0AEA70 bf/s */
L_0C0AEA74: BLKS(0x0C0AEA74u);
	r2 = R32(r7); UPD(0x0C0AEA76u, 1);  /* 0C0AEA74 mov.l @Rm,Rn */
	r4 = 0x10000000u; UPD(0x0C0AEA78u, 1);  /* 0C0AEA76 mov.l @(disp,pc),Rn */
	T = (r2 & r4) == 0;  /* 0C0AEA78 tst Rm,Rn */
	if (!T) { UPD(0x0C0AEA80u, 4); goto L_0C0AEA80; }  /* 0C0AEA7A bf */
L_0C0AEA7C: BLKS(0x0C0AEA7Cu);
	{ IF(0x0C0AEA7Eu); ; /* slot nop */ UPD(0x0C0AEBC0u, 3); goto L_0C0AEBC0; }  /* 0C0AEA7C bra */
L_0C0AEA80: BLKS(0x0C0AEA80u);
	r5 = 0xF6000000u; UPD(0x0C0AEA82u, 1);  /* 0C0AEA80 mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C0AEA82 add Rm,Rn */
	W32(r7 + 0x8u, r6); UPD(0x0C0AEA86u, 2);  /* 0C0AEA84 mov.l Rm,@(disp,Rn) */
	r6 = 0x8000000u; UPD(0x0C0AEA88u, 1);  /* 0C0AEA86 mov.l @(disp,pc),Rn */
	r2 |= r6;  /* 0C0AEA88 or Rm,Rn */
	W32(r7, r2); UPD(0x0C0AEA8Cu, 2);  /* 0C0AEA8A mov.l Rm,@Rn */
L_0C0AEA8C: BLKS(0x0C0AEA8Cu);
	r0 = 0xC0AEC40u; UPD(0x0C0AEA8Eu, 1);  /* 0C0AEA8C mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0AEA8E mov Rm,Rn */
	IF(0x0C0AEA90u); { u32 t_ = r0; PR = 0x0C0AEA94u; r13 = 0x4Cu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AEC40, 0x0C0AEC40u, 0x0C0AEA94u); }  /* 0C0AEA90 jsr @Rn */
L_0C0AEA94: BLKS(0x0C0AEA94u);
	IF(0x0C0AEA94u); MACL = r8 * r13;  /* 0C0AEA94 mul.l Rm,Rn */
	r9 = 0xC26CAE0u; UPD(0x0C0AEA98u, 3);  /* 0C0AEA96 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0AEA98 mov #imm,Rn */
	IF(0x0C0AEA9Au); r11 = MACL;  /* 0C0AEA9A sts macl,Rn */
	r11 += r9;  /* 0C0AEA9C add Rm,Rn */
	r12 = R32(r11 + 0xCu); UPD(0x0C0AEAA0u, 4);  /* 0C0AEA9E mov.l @(disp,Rm),Rn */
	r5 = 0x0u;  /* 0C0AEAA0 mov #imm,Rn */
	r3 = R32(r11 + 0x1Cu); UPD(0x0C0AEAA4u, 2);  /* 0C0AEAA2 mov.l @(disp,Rm),Rn */
	r9 = r12;  /* 0C0AEAA4 mov Rm,Rn */
	W32(r11 + 0x1Cu, r12); UPD(0x0C0AEAA8u, 2);  /* 0C0AEAA6 mov.l Rm,@(disp,Rn) */
	r9 -= r3;  /* 0C0AEAA8 sub Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C0AEAACu, 2);  /* 0C0AEAAA mov.l @(disp,pc),Rn */
	r4 = 0xBFu; UPD(0x0C0AEAAEu, 1);  /* 0C0AEAAC mov.w @(disp,pc),Rn */
	IF(0x0C0AEAAEu); ;  /* 0C0AEAAE nop */
	UPD(0x0C0AEAB0u, 1);
L_0C0AEAB0: BLKS(0x0C0AEAB0u);
	r3 = r5;  /* 0C0AEAB0 mov Rm,Rn */
	r3 += r11;  /* 0C0AEAB2 add Rm,Rn */
	r7 = R32(r3); UPD(0x0C0AEAB6u, 3);  /* 0C0AEAB4 mov.l @Rm,Rn */
	r0 = 0x1u;  /* 0C0AEAB6 mov #imm,Rn */
	r12 = r7;  /* 0C0AEAB8 mov Rm,Rn */
	IF(0x0C0AEABAu); r12 >>= 2;  /* 0C0AEABA shlr2 Rn */
	IF(0x0C0AEABCu); r12 >>= 2;  /* 0C0AEABC shlr2 Rn */
	r12 &= r0;  /* 0C0AEABE and Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AEAC2u, 6);  /* 0C0AEAC0 mov.w @(disp,pc),Rn */
	IF(0x0C0AEAC2u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AEAC4u, 1);  /* 0C0AEAC2 mov.b @(r0,Rm),Rn */
	r13 = r2 & 0xFF;  /* 0C0AEAC4 extu.b Rm,Rn */
	T = r13 == r8;  /* 0C0AEAC6 cmp/eq Rm,Rn */
	IF(0x0C0AEAC8u); r2 = T;  /* 0C0AEAC8 movt Rn */
	r12 &= r2;  /* 0C0AEACA and Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C0AEACC tst Rm,Rn */
	if (T) { UPD(0x0C0AEAF6u, 8); goto L_0C0AEAF6; }  /* 0C0AEACE bt */
L_0C0AEAD0: BLKS(0x0C0AEAD0u);
	r0 = R32(r3 + 0x28u); UPD(0x0C0AEAD2u, 1);  /* 0C0AEAD0 mov.l @(disp,Rm),Rn */
	r2 = 0xFFFFFFF1u;  /* 0C0AEAD2 mov #imm,Rn */
	r0 += r9;  /* 0C0AEAD4 add Rm,Rn */
	r12 = R32(r3 + 0x24u); UPD(0x0C0AEAD8u, 3);  /* 0C0AEAD6 mov.l @(disp,Rm),Rn */
	IF(0x0C0AEAD8u); ARG0(0x472Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C0AEAD8 shad Rm,Rn */
	W32(r3 + 0x28u, r0); UPD(0x0C0AEADCu, 2);  /* 0C0AEADA mov.l Rm,@(disp,Rn) */
	r12 -= r10;  /* 0C0AEADC sub Rm,Rn */
	r13 = 0xFFA00000u; UPD(0x0C0AEAE0u, 2);  /* 0C0AEADE mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0AEAE0 mov Rm,Rn */
	T = (s32)r13 > (s32)r12;  /* 0C0AEAE2 cmp/gt Rm,Rn */
	r0 ^= 0x1u;  /* 0C0AEAE4 xor #imm,r0 */
	IF(0x0C0AEAE6u); r7 = T;  /* 0C0AEAE6 movt Rn */
	r0 &= 0x1u;  /* 0C0AEAE8 and #imm,r0 */
	r0 &= r7;  /* 0C0AEAEA and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AEAEC tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x24u, r12); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AEAF6u, 10); goto L_0C0AEAF6; } UPD(0x0C0AEAF2u, 1); goto L_0C0AEAF2; }  /* 0C0AEAEE bt/s */
L_0C0AEAF2: BLKS(0x0C0AEAF2u);
	r7 = 0x0u;  /* 0C0AEAF2 mov #imm,Rn */
	W32(r3, r7); UPD(0x0C0AEAF6u, 2);  /* 0C0AEAF4 mov.l Rm,@Rn */
L_0C0AEAF6: BLKS(0x0C0AEAF6u);
	r3 = r6;  /* 0C0AEAF6 mov Rm,Rn */
	r6 = 0xB4u; UPD(0x0C0AEAFAu, 2);  /* 0C0AEAF8 mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0AEAFA add #imm,Rn */
	r5 += r6;  /* 0C0AEAFC add Rm,Rn */
	r6 = (u32)(s32)(s16)r3;  /* 0C0AEAFE exts.w Rm,Rn */
	T = (s32)r6 > (s32)r4;  /* 0C0AEB00 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AEAB0u, 7); goto L_0C0AEAB0; }  /* 0C0AEB02 bf */
L_0C0AEB04: BLKS(0x0C0AEB04u);
	r6 = 0x0u;  /* 0C0AEB04 mov #imm,Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0AEB08u, 2);  /* 0C0AEB06 mov.l @(disp,pc),Rn */
	r5 = 0x23Fu; UPD(0x0C0AEB0Au, 1);  /* 0C0AEB08 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C0AEB0A mov #imm,Rn */
	UPD(0x0C0AEB0Cu, 1);
L_0C0AEB0C: BLKS(0x0C0AEB0Cu);
	r3 = r7;  /* 0C0AEB0C mov Rm,Rn */
	r3 += r4;  /* 0C0AEB0E add Rm,Rn */
	r0 = R32(r3); UPD(0x0C0AEB12u, 3);  /* 0C0AEB10 mov.l @Rm,Rn */
	r3 += 0x34u;  /* 0C0AEB12 add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AEB16u, 2);  /* 0C0AEB14 mov.b @Rm,Rn */
	IF(0x0C0AEB16u); r0 >>= 2;  /* 0C0AEB16 shlr2 Rn */
	r12 = r13 & 0xFF;  /* 0C0AEB18 extu.b Rm,Rn */
	T = r12 == r8;  /* 0C0AEB1A cmp/eq Rm,Rn */
	IF(0x0C0AEB1Cu); r0 >>= 2;  /* 0C0AEB1C shlr2 Rn */
	IF(0x0C0AEB1Eu); r11 = T;  /* 0C0AEB1E movt Rn */
	r0 &= 0x1u;  /* 0C0AEB20 and #imm,r0 */
	r0 &= r11;  /* 0C0AEB22 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AEB24 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFCCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AEB40u, 11); goto L_0C0AEB40; } goto L_0C0AEB2A; }  /* 0C0AEB26 bt/s */
L_0C0AEB2A: BLKS(0x0C0AEB2Au);
	r11 = R32(r3 + 0x10u); UPD(0x0C0AEB2Cu, 2);  /* 0C0AEB2A mov.l @(disp,Rm),Rn */
	r1 = R32(r3 + 0x14u); UPD(0x0C0AEB2Eu, 1);  /* 0C0AEB2C mov.l @(disp,Rm),Rn */
	r11 -= r10;  /* 0C0AEB2E sub Rm,Rn */
	r1 += r9;  /* 0C0AEB30 add Rm,Rn */
	r0 = 0xFFC00000u; UPD(0x0C0AEB34u, 3);  /* 0C0AEB32 mov.l @(disp,pc),Rn */
	W32(r3 + 0x10u, r11); UPD(0x0C0AEB36u, 1);  /* 0C0AEB34 mov.l Rm,@(disp,Rn) */
	T = (s32)r11 >= (s32)r0;  /* 0C0AEB36 cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x14u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AEB40u, 4); goto L_0C0AEB40; } UPD(0x0C0AEB3Cu, 1); goto L_0C0AEB3C; }  /* 0C0AEB38 bt/s */
L_0C0AEB3C: BLKS(0x0C0AEB3Cu);
	r2 = 0x0u;  /* 0C0AEB3C mov #imm,Rn */
	W32(r3, r2); UPD(0x0C0AEB40u, 2);  /* 0C0AEB3E mov.l Rm,@Rn */
L_0C0AEB40: BLKS(0x0C0AEB40u);
	r3 = r6;  /* 0C0AEB40 mov Rm,Rn */
	r3 += 0x1u;  /* 0C0AEB42 add #imm,Rn */
	r6 = (u32)(s32)(s16)r3;  /* 0C0AEB44 exts.w Rm,Rn */
	T = (s32)r6 > (s32)r5;  /* 0C0AEB46 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AEB0Cu, 7); goto L_0C0AEB0C; } goto L_0C0AEB4C; }  /* 0C0AEB48 bf/s */
L_0C0AEB4C: BLKS(0x0C0AEB4Cu);
	r11 = 0x100u; UPD(0x0C0AEB4Eu, 2);  /* 0C0AEB4C mov.w @(disp,pc),Rn */
	r13 = 0xC38C064u; UPD(0x0C0AEB50u, 1);  /* 0C0AEB4E mov.l @(disp,pc),Rn */
	r12 = 0x5400u; UPD(0x0C0AEB52u, 1);  /* 0C0AEB50 mov.w @(disp,pc),Rn */
L_0C0AEB52: BLKS(0x0C0AEB52u);
	r3 = r12;  /* 0C0AEB52 mov Rm,Rn */
	r3 += r13;  /* 0C0AEB54 add Rm,Rn */
	r0 = R32(r3); UPD(0x0C0AEB58u, 3);  /* 0C0AEB56 mov.l @Rm,Rn */
	r3 += 0x48u;  /* 0C0AEB58 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AEB5Cu, 2);  /* 0C0AEB5A mov.b @Rm,Rn */
	IF(0x0C0AEB5Cu); r0 >>= 2;  /* 0C0AEB5C shlr2 Rn */
	r5 = r7 & 0xFF;  /* 0C0AEB5E extu.b Rm,Rn */
	T = r5 == r8;  /* 0C0AEB60 cmp/eq Rm,Rn */
	IF(0x0C0AEB62u); r0 >>= 2;  /* 0C0AEB62 shlr2 Rn */
	IF(0x0C0AEB64u); r4 = T;  /* 0C0AEB64 movt Rn */
	r0 &= 0x1u;  /* 0C0AEB66 and #imm,r0 */
	r0 &= r4;  /* 0C0AEB68 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AEB6A tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFB8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AEB82u, 11); goto L_0C0AEB82; } goto L_0C0AEB70; }  /* 0C0AEB6C bt/s */
L_0C0AEB70: BLKS(0x0C0AEB70u);
	r0 = R32(r3 + 0x28u); UPD(0x0C0AEB72u, 2);  /* 0C0AEB70 mov.l @(disp,Rm),Rn */
	r1 = R32(r3 + 0x2Cu); UPD(0x0C0AEB74u, 1);  /* 0C0AEB72 mov.l @(disp,Rm),Rn */
	r0 -= r10;  /* 0C0AEB74 sub Rm,Rn */
	r1 += r9;  /* 0C0AEB76 add Rm,Rn */
	r6 = 0xFFF00000u; UPD(0x0C0AEB7Au, 3);  /* 0C0AEB78 mov.l @(disp,pc),Rn */
	W32(r3 + 0x28u, r0); UPD(0x0C0AEB7Cu, 1);  /* 0C0AEB7A mov.l Rm,@(disp,Rn) */
	T = (s32)r0 >= (s32)r6;  /* 0C0AEB7C cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r3 + 0x2Cu, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AEBB0u, 4); goto L_0C0AEBB0; } UPD(0x0C0AEB82u, 1); goto L_0C0AEB82; }  /* 0C0AEB7E bf/s */
L_0C0AEB82: BLKS(0x0C0AEB82u);
	r3 = r11;  /* 0C0AEB82 mov Rm,Rn */
	UPD(0x0C0AEB84u, 1);
L_0C0AEB84: BLKS(0x0C0AEB84u);
	r3 += 0x1u;  /* 0C0AEB84 add #imm,Rn */
	r2 = 0x13Fu; UPD(0x0C0AEB88u, 2);  /* 0C0AEB86 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r3;  /* 0C0AEB88 exts.w Rm,Rn */
	T = (s32)r11 > (s32)r2;  /* 0C0AEB8A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AEB52u, 5); goto L_0C0AEB52; } goto L_0C0AEB90; }  /* 0C0AEB8C bf/s */
L_0C0AEB90: BLKS(0x0C0AEB90u);
	r15 = r14;  /* 0C0AEB90 mov Rm,Rn */
	IF(0x0C0AEB92u); PR = R32(r15); r15 += 4; UPD(0x0C0AEB94u, 3);  /* 0C0AEB92 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AEB96u, 1);  /* 0C0AEB94 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AEB98u, 1);  /* 0C0AEB96 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AEB9Au, 1);  /* 0C0AEB98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AEB9Cu, 1);  /* 0C0AEB9A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AEB9Eu, 1);  /* 0C0AEB9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AEBA0u, 1);  /* 0C0AEB9E mov.l @Rm+,Rn */
	IF(0x0C0AEBA0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AEBA0 rts */
L_0C0AEBB0: BLKS(0x0C0AEBB0u);
	r0 = 0xC06B480u; UPD(0x0C0AEBB2u, 1);  /* 0C0AEBB0 mov.l @(disp,pc),Rn */
	IF(0x0C0AEBB2u); { u32 t_ = r0; PR = 0x0C0AEBB6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06B480, 0x0C06B480u, 0x0C0AEBB6u); }  /* 0C0AEBB2 jsr @Rn */
L_0C0AEBB6: BLKS(0x0C0AEBB6u);
	{ r3 = r11; /* slot mov Rm,Rn */ UPD(0x0C0AEB84u, 3); goto L_0C0AEB84; }  /* 0C0AEBB6 bra */
L_0C0AEBC0: BLKS(0x0C0AEBC0u);
	r7 = 0xC0AEEC0u; UPD(0x0C0AEBC2u, 1);  /* 0C0AEBC0 mov.l @(disp,pc),Rn */
	IF(0x0C0AEBC2u); { u32 t_ = r7; PR = 0x0C0AEBC6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AEEC0, 0x0C0AEEC0u, 0x0C0AEBC6u); }  /* 0C0AEBC2 jsr @Rn */
L_0C0AEBC6: BLKS(0x0C0AEBC6u);
	{ IF(0x0C0AEBC8u); ; /* slot nop */ UPD(0x0C0AEA8Cu, 3); goto L_0C0AEA8C; }  /* 0C0AEBC6 bra */
L_0C0AEBD0: BLKS(0x0C0AEBD0u);
	r5 = 0xFFu; UPD(0x0C0AEBD2u, 1);  /* 0C0AEBD0 mov.w @(disp,pc),Rn */
	{ r2 += r5; /* slot add Rm,Rn */ UPD(0x0C0AEA4Au, 3); goto L_0C0AEA4A; }  /* 0C0AEBD2 bra */
L_0C0AEBE0: BLKS(0x0C0AEBE0u);
	r0 = 0xFFu; UPD(0x0C0AEBE2u, 1);  /* 0C0AEBE0 mov.w @(disp,pc),Rn */
	{ r2 += r0; /* slot add Rm,Rn */ UPD(0x0C0AEA30u, 3); goto L_0C0AEA30; }  /* 0C0AEBE2 bra */
}

/* FUN_0c0aec40 */
void f_0C0AEC40(sh3_t *c)
{
	LOCALS;
L_0C0AEC40: BLKS(0x0C0AEC40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEC42u, 1);  /* 0C0AEC40 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0AEC42 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEC46u, 2);  /* 0C0AEC44 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0AEC46 mov #imm,Rn */
	IF(0x0C0AEC48u); MACL = r4 * r2;  /* 0C0AEC48 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEC4Cu, 4);  /* 0C0AEC4A mov.l Rm,@-Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0AEC4Eu, 1);  /* 0C0AEC4C mov.l @(disp,pc),Rn */
	IF(0x0C0AEC4Eu); r3 = MACL;  /* 0C0AEC4E sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEC52u, 2);  /* 0C0AEC50 mov.l Rm,@-Rn */
	r3 += r0;  /* 0C0AEC52 add Rm,Rn */
	r0 = 0xFFE00000u; UPD(0x0C0AEC56u, 2);  /* 0C0AEC54 mov.l @(disp,pc),Rn */
	r1 = R32(r3 + 0x18u); UPD(0x0C0AEC58u, 1);  /* 0C0AEC56 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x8u); UPD(0x0C0AEC5Au, 1);  /* 0C0AEC58 mov.l @(disp,Rm),Rn */
	r1 &= r0;  /* 0C0AEC5A and Rm,Rn */
	r0 &= r7;  /* 0C0AEC5C and Rm,Rn */
	T = r1 == r0;  /* 0C0AEC5E cmp/eq Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AECD6u, 6); goto L_0C0AECD6; } goto L_0C0AEC64; }  /* 0C0AEC60 bt/s */
L_0C0AEC64: BLKS(0x0C0AEC64u);
	W32(r3 + 0x18u, r7); UPD(0x0C0AEC66u, 2);  /* 0C0AEC64 mov.l Rm,@(disp,Rn) */
	r9 = R32(r3 + 0x28u); UPD(0x0C0AEC68u, 1);  /* 0C0AEC66 mov.l @(disp,Rm),Rn */
	r8 = R32(r3 + 0x2Cu); UPD(0x0C0AEC6Au, 1);  /* 0C0AEC68 mov.l @(disp,Rm),Rn */
	r5 = 0xC220C2Cu; UPD(0x0C0AEC6Cu, 1);  /* 0C0AEC6A mov.l @(disp,pc),Rn */
	r3 = R32(r5); UPD(0x0C0AEC6Eu, 1);  /* 0C0AEC6C mov.l @Rm,Rn */
	IF(0x0C0AEC6Eu); T = (s32)r3 > 0;  /* 0C0AEC6E cmp/pl Rn */
	{ u32 c_ = !T; r10 = (r7 >> 16) | (r7 << 16); /* slot swap.w Rm,Rn */ if (c_) { UPD(0x0C0AED40u, 4); goto L_0C0AED40; } goto L_0C0AEC74; }  /* 0C0AEC70 bf/s */
L_0C0AEC74: BLKS(0x0C0AEC74u);
	r6 = 0x1A0u; UPD(0x0C0AEC76u, 2);  /* 0C0AEC74 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r10;  /* 0C0AEC76 exts.w Rm,Rn */
	r0 += r6;  /* 0C0AEC78 add Rm,Rn */
	UPD(0x0C0AEC7Au, 2);
L_0C0AEC7A: BLKS(0x0C0AEC7Au);
	IF(0x0C0AEC7Au); T = (s32)r0 >= 0;  /* 0C0AEC7A cmp/pz Rn */
	if (!T) { UPD(0x0C0AED30u, 4); goto L_0C0AED30; }  /* 0C0AEC7C bf */
L_0C0AEC7E: BLKS(0x0C0AEC7Eu);
	r2 = 0x4Cu;  /* 0C0AEC7E mov #imm,Rn */
	IF(0x0C0AEC80u); MACL = r4 * r2;  /* 0C0AEC80 mul.l Rm,Rn */
	r7 = r0;  /* 0C0AEC82 mov Rm,Rn */
	r6 = 0xC26CAE0u; UPD(0x0C0AEC86u, 5);  /* 0C0AEC84 mov.l @(disp,pc),Rn */
	IF(0x0C0AEC86u); r0 = MACL;  /* 0C0AEC86 sts macl,Rn */
	r10 = 0xFFFFFFFBu;  /* 0C0AEC88 mov #imm,Rn */
	IF(0x0C0AEC8Au); r5 = R32(r0 + r6); UPD(0x0C0AEC8Cu, 3);  /* 0C0AEC8A mov.l @(r0,Rm),Rn */
	r3 = 0x4000000u; UPD(0x0C0AEC8Eu, 1);  /* 0C0AEC8C mov.l @(disp,pc),Rn */
	T = (r5 & r3) == 0;  /* 0C0AEC8E tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0AEC92u); ARG0(0x47ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ if (c_) { UPD(0x0C0AECF0u, 4); goto L_0C0AECF0; } goto L_0C0AEC94; }  /* 0C0AEC90 bf/s */
L_0C0AEC94: BLKS(0x0C0AEC94u);
	r6 = 0xAu;  /* 0C0AEC94 mov #imm,Rn */
	IF(0x0C0AEC96u); MACL = r7 * r6;  /* 0C0AEC96 mul.l Rm,Rn */
	r10 = r4;  /* 0C0AEC98 mov Rm,Rn */
	r4 = 0x4u;  /* 0C0AEC9A mov #imm,Rn */
	IF(0x0C0AEC9Cu); ARG0(0x4A4Du); { s32 s_ = (s32)r4; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = 0; else r10 >>= ((~s_ & 31) + 1); }  /* 0C0AEC9C shld Rm,Rn */
	r5 = 0x3u;  /* 0C0AEC9E mov #imm,Rn */
	r0 = 0xFu;  /* 0C0AECA0 mov #imm,Rn */
	IF(0x0C0AECA2u); r2 = MACL;  /* 0C0AECA2 sts macl,Rn */
	r0 &= r7;  /* 0C0AECA4 and Rm,Rn */
	IF(0x0C0AECA6u); ARG0(0x425Du); { s32 s_ = (s32)r5; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C0AECA6 shld Rm,Rn */
	r10 += r0;  /* 0C0AECA8 add Rm,Rn */
	r0 = 0x6u;  /* 0C0AECAA mov #imm,Rn */
	r4 = 0xC221068u; UPD(0x0C0AECAEu, 15);  /* 0C0AECAC mov.l @(disp,pc),Rn */
	IF(0x0C0AECAEu); ARG0(0x4A0Du); { s32 s_ = (s32)r0; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = 0; else r10 >>= ((~s_ & 31) + 1); }  /* 0C0AECAE shld Rm,Rn */
	r7 = 0x3FFFFFFFu; UPD(0x0C0AECB2u, 2);  /* 0C0AECB0 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0AECB2 mov #imm,Rn */
	r5 = 0xC393084u; UPD(0x0C0AECB6u, 2);  /* 0C0AECB4 mov.l @(disp,pc),Rn */
	r6 = 0x9u;  /* 0C0AECB6 mov #imm,Rn */
	UPD(0x0C0AECB8u, 1);
L_0C0AECB8: BLKS(0x0C0AECB8u);
	r0 = r2;  /* 0C0AECB8 mov Rm,Rn */
	IF(0x0C0AECBAu); r1 = R32(r0 + r9); UPD(0x0C0AECBCu, 2);  /* 0C0AECBA mov.l @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C0AECBC add #imm,Rn */
	r0 = r10;  /* 0C0AECBE mov Rm,Rn */
	r1 &= r7;  /* 0C0AECC0 and Rm,Rn */
	IF(0x0C0AECC2u); W32(r0 + r4, r1); UPD(0x0C0AECC4u, 4);  /* 0C0AECC2 mov.l Rm,@(r0,Rn) */
	T = (s32)r3 > (s32)r6;  /* 0C0AECC4 cmp/gt Rm,Rn */
	r0 = r2;  /* 0C0AECC6 mov Rm,Rn */
	IF(0x0C0AECC8u); r1 = R32(r0 + r8); UPD(0x0C0AECCAu, 3);  /* 0C0AECC8 mov.l @(r0,Rm),Rn */
	r2 += 0x8u;  /* 0C0AECCA add #imm,Rn */
	r0 = r10;  /* 0C0AECCC mov Rm,Rn */
	r1 &= r7;  /* 0C0AECCE and Rm,Rn */
	IF(0x0C0AECD0u); W32(r0 + r5, r1); UPD(0x0C0AECD2u, 4);  /* 0C0AECD0 mov.l Rm,@(r0,Rn) */
	{ u32 c_ = !T; r10 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AECB8u, 3); goto L_0C0AECB8; } UPD(0x0C0AECD6u, 1); goto L_0C0AECD6; }  /* 0C0AECD2 bf/s */
L_0C0AECD6: BLKS(0x0C0AECD6u);
	r15 = r14;  /* 0C0AECD6 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AECDAu, 2);  /* 0C0AECD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AECDCu, 1);  /* 0C0AECDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AECDEu, 1);  /* 0C0AECDC mov.l @Rm+,Rn */
	IF(0x0C0AECDEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AECDE rts */
L_0C0AECF0: BLKS(0x0C0AECF0u);
	r10 = 0x4u;  /* 0C0AECF0 mov #imm,Rn */
	r0 = r7;  /* 0C0AECF2 mov Rm,Rn */
	IF(0x0C0AECF4u); ARG0(0x44ADu); { s32 s_ = (s32)r10; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0AECF4 shld Rm,Rn */
	r2 = 0xFu;  /* 0C0AECF6 mov #imm,Rn */
	r7 &= r2;  /* 0C0AECF8 and Rm,Rn */
	r3 = 0x6u;  /* 0C0AECFA mov #imm,Rn */
	r4 += r7;  /* 0C0AECFC add Rm,Rn */
	IF(0x0C0AECFEu); ARG0(0x403Du); { s32 s_ = (s32)r3; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0AECFE shld Rm,Rn */
	IF(0x0C0AED00u); ARG0(0x443Du); { s32 s_ = (s32)r3; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0AED00 shld Rm,Rn */
	r5 = 0xC221068u; UPD(0x0C0AED04u, 10);  /* 0C0AED02 mov.l @(disp,pc),Rn */
	r3 = 0x8u;  /* 0C0AED04 mov #imm,Rn */
	r6 = 0x3FFFFFFFu; UPD(0x0C0AED08u, 2);  /* 0C0AED06 mov.l @(disp,pc),Rn */
	r7 = 0xC393084u; UPD(0x0C0AED0Au, 1);  /* 0C0AED08 mov.l @(disp,pc),Rn */
	IF(0x0C0AED0Au); ;  /* 0C0AED0A nop */
	UPD(0x0C0AED0Cu, 1);
L_0C0AED0C: BLKS(0x0C0AED0Cu);
	IF(0x0C0AED0Cu); r2 = R32(r0 + r9); UPD(0x0C0AED0Eu, 1);  /* 0C0AED0C mov.l @(r0,Rm),Rn */
	r10 = r4;  /* 0C0AED0E mov Rm,Rn */
	r10 += r5;  /* 0C0AED10 add Rm,Rn */
	r2 &= r6;  /* 0C0AED12 and Rm,Rn */
	W32(r10 + 0x4u, r2); UPD(0x0C0AED16u, 4);  /* 0C0AED14 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AED16u); r3 -= 1; T = r3 == 0;  /* 0C0AED16 dt Rn */
	IF(0x0C0AED18u); r2 = R32(r0 + r8); UPD(0x0C0AED1Au, 2);  /* 0C0AED18 mov.l @(r0,Rm),Rn */
	r10 = r4;  /* 0C0AED1A mov Rm,Rn */
	r10 += r7;  /* 0C0AED1C add Rm,Rn */
	r2 &= r6;  /* 0C0AED1E and Rm,Rn */
	W32(r10 + 0x4u, r2); UPD(0x0C0AED22u, 4);  /* 0C0AED20 mov.l Rm,@(disp,Rn) */
	r0 += 0x8u;  /* 0C0AED22 add #imm,Rn */
	{ u32 c_ = !T; r4 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AED0Cu, 4); goto L_0C0AED0C; } goto L_0C0AED28; }  /* 0C0AED24 bf/s */
L_0C0AED28: BLKS(0x0C0AED28u);
	{ IF(0x0C0AED2Au); ; /* slot nop */ UPD(0x0C0AECD6u, 4); goto L_0C0AECD6; }  /* 0C0AED28 bra */
L_0C0AED30: BLKS(0x0C0AED30u);
	{ r0 += 0x1Fu; /* slot add #imm,Rn */ UPD(0x0C0AEC7Eu, 3); goto L_0C0AEC7E; }  /* 0C0AED30 bra */
L_0C0AED40: BLKS(0x0C0AED40u);
	r0 = (r7 >> 16) | (r7 << 16);  /* 0C0AED40 swap.w Rm,Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C0AED42 exts.w Rm,Rn */
	r0 = r7;  /* 0C0AED44 mov Rm,Rn */
	{ r0 += 0xFFFFFFD0u; /* slot add #imm,Rn */ UPD(0x0C0AEC7Au, 6); goto L_0C0AEC7A; }  /* 0C0AED46 bra */
}

/* FUN_0c0aed70 */
void f_0C0AED70(sh3_t *c)
{
	LOCALS;
L_0C0AED70: BLKS(0x0C0AED70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AED72u, 1);  /* 0C0AED70 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0AED72 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AED76u, 2);  /* 0C0AED74 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AED78u, 1);  /* 0C0AED76 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AED7Au, 1);  /* 0C0AED78 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AED7Cu, 1);  /* 0C0AED7A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AED7Eu, 1);  /* 0C0AED7C mov.l Rm,@-Rn */
	r2 = 0xC392AFEu; UPD(0x0C0AED80u, 1);  /* 0C0AED7E mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AED82u, 1);  /* 0C0AED80 mov.l Rm,@-Rn */
	r6 = 0xC283CA4u; UPD(0x0C0AED84u, 1);  /* 0C0AED82 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AED84 add #imm,Rn */
	r5 = 0xC21CC84u; UPD(0x0C0AED88u, 2);  /* 0C0AED86 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AED88 mov Rm,Rn */
	r4 = 0xC220C24u; UPD(0x0C0AED8Cu, 2);  /* 0C0AED8A mov.l @(disp,pc),Rn */
	r3 = 0xC220C2Cu; UPD(0x0C0AED8Eu, 1);  /* 0C0AED8C mov.l @(disp,pc),Rn */
	W8(r2, r0); UPD(0x0C0AED90u, 1);  /* 0C0AED8E mov.b Rm,@Rn */
	W32(r6, r0); UPD(0x0C0AED92u, 1);  /* 0C0AED90 mov.l Rm,@Rn */
	W32(r5, r0); UPD(0x0C0AED94u, 1);  /* 0C0AED92 mov.l Rm,@Rn */
	W32(r4, r0); UPD(0x0C0AED96u, 1);  /* 0C0AED94 mov.l Rm,@Rn */
	W32(r3, r0); UPD(0x0C0AED98u, 1);  /* 0C0AED96 mov.l Rm,@Rn */
	W32(r14, r0); UPD(0x0C0AED9Au, 1);  /* 0C0AED98 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0AED9Cu, 1);  /* 0C0AED9A mov.l Rm,@(disp,Rn) */
L_0C0AED9C: BLKS(0x0C0AED9Cu);
	r1 = R32(r14 + 0x4u); UPD(0x0C0AED9Eu, 1);  /* 0C0AED9C mov.l @(disp,Rm),Rn */
	r7 = 0xC26CAE0u; UPD(0x0C0AEDA0u, 1);  /* 0C0AED9E mov.l @(disp,pc),Rn */
	r1 += r7;  /* 0C0AEDA0 add Rm,Rn */
	r2 = R32(r1); UPD(0x0C0AEDA4u, 2);  /* 0C0AEDA2 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AEDA4 tst Rm,Rn */
	{ u32 c_ = T; r6 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0AEE0Eu, 4); goto L_0C0AEE0E; } UPD(0x0C0AEDAAu, 1); goto L_0C0AEDAA; }  /* 0C0AEDA6 bt/s */
L_0C0AEDAA: BLKS(0x0C0AEDAAu);
	r0 = 0x4000000u; UPD(0x0C0AEDACu, 1);  /* 0C0AEDAA mov.l @(disp,pc),Rn */
	r4 = R32(r1 + 0x28u); UPD(0x0C0AEDAEu, 1);  /* 0C0AEDAC mov.l @(disp,Rm),Rn */
	T = (r2 & r0) == 0;  /* 0C0AEDAE tst Rm,Rn */
	{ u32 c_ = !T; r5 = R32(r1 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0AEE40u, 4); goto L_0C0AEE40; } UPD(0x0C0AEDB4u, 1); goto L_0C0AEDB4; }  /* 0C0AEDB0 bf/s */
L_0C0AEDB4: BLKS(0x0C0AEDB4u);
	r13 = R32(r14); UPD(0x0C0AEDB6u, 1);  /* 0C0AEDB4 mov.l @Rm,Rn */
	r8 = 0x4u;  /* 0C0AEDB6 mov #imm,Rn */
	IF(0x0C0AEDB8u); ARG0(0x4D8Du); { s32 s_ = (s32)r8; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C0AEDB8 shld Rm,Rn */
	r7 = 0x3FFFFFFFu; UPD(0x0C0AEDBCu, 3);  /* 0C0AEDBA mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0AEDBC mov #imm,Rn */
	r8 = 0xC221068u; UPD(0x0C0AEDC0u, 2);  /* 0C0AEDBE mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0AEDC0 mov #imm,Rn */
	r6 = 0xC393084u; UPD(0x0C0AEDC4u, 2);  /* 0C0AEDC2 mov.l @(disp,pc),Rn */
	r11 = 0x9u;  /* 0C0AEDC4 mov #imm,Rn */
	UPD(0x0C0AEDC6u, 1);
L_0C0AEDC6: BLKS(0x0C0AEDC6u);
	r12 = 0xFu;  /* 0C0AEDC6 mov #imm,Rn */
	r12 &= r9;  /* 0C0AEDC8 and Rm,Rn */
	r3 = 0x6u;  /* 0C0AEDCA mov #imm,Rn */
	r12 += r13;  /* 0C0AEDCC add Rm,Rn */
	IF(0x0C0AEDCEu); ARG0(0x4C3Du); { s32 s_ = (s32)r3; if (s_ >= 0) r12 <<= (s_ & 31); else if ((s_ & 31) == 0) r12 = 0; else r12 >>= ((~s_ & 31) + 1); }  /* 0C0AEDCE shld Rm,Rn */
	r2 = r10;  /* 0C0AEDD0 mov Rm,Rn */
	r1 = 0x3u;  /* 0C0AEDD2 mov #imm,Rn */
	r3 = r11;  /* 0C0AEDD4 mov Rm,Rn */
	IF(0x0C0AEDD6u); ARG0(0x421Du); { s32 s_ = (s32)r1; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C0AEDD6 shld Rm,Rn */
	r3 += 0x1u;  /* 0C0AEDD8 add #imm,Rn */
	IF(0x0C0AEDDAu); ;  /* 0C0AEDDA nop */
	UPD(0x0C0AEDDCu, 11);
L_0C0AEDDC: BLKS(0x0C0AEDDCu);
	r0 = r2;  /* 0C0AEDDC mov Rm,Rn */
	IF(0x0C0AEDDEu); r1 = R32(r0 + r4); UPD(0x0C0AEDE0u, 2);  /* 0C0AEDDE mov.l @(r0,Rm),Rn */
	IF(0x0C0AEDE0u); r3 -= 1; T = r3 == 0;  /* 0C0AEDE0 dt Rn */
	r0 = r12;  /* 0C0AEDE2 mov Rm,Rn */
	r1 &= r7;  /* 0C0AEDE4 and Rm,Rn */
	IF(0x0C0AEDE6u); W32(r0 + r8, r1); UPD(0x0C0AEDE8u, 4);  /* 0C0AEDE6 mov.l Rm,@(r0,Rn) */
	r0 = r2;  /* 0C0AEDE8 mov Rm,Rn */
	IF(0x0C0AEDEAu); r1 = R32(r0 + r5); UPD(0x0C0AEDECu, 2);  /* 0C0AEDEA mov.l @(r0,Rm),Rn */
	r2 += 0x8u;  /* 0C0AEDEC add #imm,Rn */
	r0 = r12;  /* 0C0AEDEE mov Rm,Rn */
	r1 &= r7;  /* 0C0AEDF0 and Rm,Rn */
	IF(0x0C0AEDF2u); W32(r0 + r6, r1); UPD(0x0C0AEDF4u, 4);  /* 0C0AEDF2 mov.l Rm,@(r0,Rn) */
	{ u32 c_ = !T; r12 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AEDDCu, 3); goto L_0C0AEDDC; } goto L_0C0AEDF8; }  /* 0C0AEDF4 bf/s */
L_0C0AEDF8: BLKS(0x0C0AEDF8u);
	r9 += 0x1u;  /* 0C0AEDF8 add #imm,Rn */
	r12 = 0xFu;  /* 0C0AEDFA mov #imm,Rn */
	T = (s32)r9 > (s32)r12;  /* 0C0AEDFC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += 0xAu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AEDC6u, 7); goto L_0C0AEDC6; } UPD(0x0C0AEE02u, 1); goto L_0C0AEE02; }  /* 0C0AEDFE bf/s */
L_0C0AEE02: BLKS(0x0C0AEE02u);
	r9 = 0xC26CAE0u; UPD(0x0C0AEE04u, 1);  /* 0C0AEE02 mov.l @(disp,pc),Rn */
	r13 = R32(r14 + 0x4u); UPD(0x0C0AEE06u, 1);  /* 0C0AEE04 mov.l @(disp,Rm),Rn */
	r9 += r13;  /* 0C0AEE06 add Rm,Rn */
	r11 = R32(r9 + 0x8u); UPD(0x0C0AEE0Au, 2);  /* 0C0AEE08 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x18u, r11); UPD(0x0C0AEE0Cu, 1);  /* 0C0AEE0A mov.l Rm,@(disp,Rn) */
	r6 = R32(r14); UPD(0x0C0AEE0Eu, 1);  /* 0C0AEE0C mov.l @Rm,Rn */
L_0C0AEE0E: BLKS(0x0C0AEE0Eu);
	r4 = 0x7u;  /* 0C0AEE0E mov #imm,Rn */
	r6 += 0x1u;  /* 0C0AEE10 add #imm,Rn */
	r8 = R32(r14 + 0x4u); UPD(0x0C0AEE14u, 3);  /* 0C0AEE12 mov.l @(disp,Rm),Rn */
	W32(r14, r6); UPD(0x0C0AEE16u, 1);  /* 0C0AEE14 mov.l Rm,@Rn */
	r8 += 0x4Cu;  /* 0C0AEE16 add #imm,Rn */
	r5 = R32(r14); UPD(0x0C0AEE1Au, 2);  /* 0C0AEE18 mov.l @Rm,Rn */
	T = (s32)r5 > (s32)r4;  /* 0C0AEE1A cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x4u, r8); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AED9Cu, 4); goto L_0C0AED9C; } UPD(0x0C0AEE20u, 1); goto L_0C0AEE20; }  /* 0C0AEE1C bf/s */
L_0C0AEE20: BLKS(0x0C0AEE20u);
	r14 += 0x8u;  /* 0C0AEE20 add #imm,Rn */
	r15 = r14;  /* 0C0AEE22 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AEE26u, 3);  /* 0C0AEE24 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AEE28u, 1);  /* 0C0AEE26 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AEE2Au, 1);  /* 0C0AEE28 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AEE2Cu, 1);  /* 0C0AEE2A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AEE2Eu, 1);  /* 0C0AEE2C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AEE30u, 1);  /* 0C0AEE2E mov.l @Rm+,Rn */
	IF(0x0C0AEE30u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AEE30 rts */
L_0C0AEE40: BLKS(0x0C0AEE40u);
	r13 = R32(r14); UPD(0x0C0AEE42u, 1);  /* 0C0AEE40 mov.l @Rm,Rn */
	r10 = 0x4u;  /* 0C0AEE42 mov #imm,Rn */
	IF(0x0C0AEE44u); ARG0(0x4DADu); { s32 s_ = (s32)r10; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C0AEE44 shld Rm,Rn */
	r11 = 0xC221068u; UPD(0x0C0AEE48u, 3);  /* 0C0AEE46 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0AEE48 mov #imm,Rn */
	r8 = 0x3FFFFFFFu; UPD(0x0C0AEE4Cu, 2);  /* 0C0AEE4A mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0AEE4C mov #imm,Rn */
	r10 = 0xC393084u; UPD(0x0C0AEE50u, 2);  /* 0C0AEE4E mov.l @(disp,pc),Rn */
L_0C0AEE50: BLKS(0x0C0AEE50u);
	r0 = r9;  /* 0C0AEE50 mov Rm,Rn */
	r0 &= 0xFu;  /* 0C0AEE52 and #imm,r0 */
	r7 = 0x40u;  /* 0C0AEE54 mov #imm,Rn */
	r0 += r13;  /* 0C0AEE56 add Rm,Rn */
	IF(0x0C0AEE58u); MACL = r0 * r7;  /* 0C0AEE58 mul.l Rm,Rn */
	r3 = 0x7u;  /* 0C0AEE5A mov #imm,Rn */
	r6 = r12;  /* 0C0AEE5C mov Rm,Rn */
	IF(0x0C0AEE5Eu); r7 = MACL;  /* 0C0AEE5E sts macl,Rn */
	r3 += 0x1u;  /* 0C0AEE60 add #imm,Rn */
	IF(0x0C0AEE62u); ;  /* 0C0AEE62 nop */
	UPD(0x0C0AEE64u, 11);
L_0C0AEE64: BLKS(0x0C0AEE64u);
	r0 = r6;  /* 0C0AEE64 mov Rm,Rn */
	IF(0x0C0AEE66u); r1 = R32(r0 + r4); UPD(0x0C0AEE68u, 2);  /* 0C0AEE66 mov.l @(r0,Rm),Rn */
	r2 = r7;  /* 0C0AEE68 mov Rm,Rn */
	r2 += r11;  /* 0C0AEE6A add Rm,Rn */
	r1 &= r8;  /* 0C0AEE6C and Rm,Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C0AEE70u, 4);  /* 0C0AEE6E mov.l Rm,@(disp,Rn) */
	r6 += 0x8u;  /* 0C0AEE70 add #imm,Rn */
	IF(0x0C0AEE72u); r1 = R32(r0 + r5); UPD(0x0C0AEE74u, 2);  /* 0C0AEE72 mov.l @(r0,Rm),Rn */
	r2 = r7;  /* 0C0AEE74 mov Rm,Rn */
	r2 += r10;  /* 0C0AEE76 add Rm,Rn */
	r1 &= r8;  /* 0C0AEE78 and Rm,Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C0AEE7Cu, 4);  /* 0C0AEE7A mov.l Rm,@(disp,Rn) */
	IF(0x0C0AEE7Cu); r3 -= 1; T = r3 == 0;  /* 0C0AEE7C dt Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AEE64u, 4); goto L_0C0AEE64; } goto L_0C0AEE82; }  /* 0C0AEE7E bf/s */
L_0C0AEE82: BLKS(0x0C0AEE82u);
	r9 += 0x1u;  /* 0C0AEE82 add #imm,Rn */
	r2 = 0xFu;  /* 0C0AEE84 mov #imm,Rn */
	T = (s32)r9 > (s32)r2;  /* 0C0AEE86 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 += 0x40u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AEE50u, 7); goto L_0C0AEE50; } goto L_0C0AEE8C; }  /* 0C0AEE88 bf/s */
L_0C0AEE8C: BLKS(0x0C0AEE8Cu);
	{ IF(0x0C0AEE8Eu); ; /* slot nop */ UPD(0x0C0AEE02u, 4); goto L_0C0AEE02; }  /* 0C0AEE8C bra */
}

/* FUN_0c0aeec0 */
void f_0C0AEEC0(sh3_t *c)
{
	LOCALS;
L_0C0AEEC0: BLKS(0x0C0AEEC0u);
	r1 = (u32)(s32)(s16)r4;  /* 0C0AEEC0 exts.w Rm,Rn */
	r0 = 0x4Cu;  /* 0C0AEEC2 mov #imm,Rn */
	IF(0x0C0AEEC4u); MACL = r1 * r0;  /* 0C0AEEC4 mul.l Rm,Rn */
	r3 = 0xC26CAE0u; UPD(0x0C0AEEC8u, 5);  /* 0C0AEEC6 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0AEEC8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEECCu, 2);  /* 0C0AEECA mov.l Rm,@-Rn */
	IF(0x0C0AEECCu); r0 = MACL;  /* 0C0AEECC sts macl,Rn */
	IF(0x0C0AEECEu); W32(r0 + r3, r2); UPD(0x0C0AEED0u, 2);  /* 0C0AEECE mov.l Rm,@(r0,Rn) */
	r14 = r15;  /* 0C0AEED0 mov Rm,Rn */
	r15 = r14;  /* 0C0AEED2 mov Rm,Rn */
	IF(0x0C0AEED4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AEED4 rts */
}

void f_0C0AEEE0(sh3_t *c)
{
	LOCALS;
L_0C0AEEE0: BLKS(0x0C0AEEE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEEE2u, 1);  /* 0C0AEEE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEEE4u, 1);  /* 0C0AEEE2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEEE6u, 1);  /* 0C0AEEE4 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0AEEE6 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEEEAu, 2);  /* 0C0AEEE8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0AEEEA exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEEEEu, 2);  /* 0C0AEEEC mov.l Rm,@-Rn */
	r4 = r10;  /* 0C0AEEEE mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEEF2u, 2);  /* 0C0AEEF0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEEF4u, 1);  /* 0C0AEEF2 mov.l Rm,@-Rn */
	r0 = 0xC0AEA10u; UPD(0x0C0AEEF6u, 1);  /* 0C0AEEF4 mov.l @(disp,pc),Rn */
	IF(0x0C0AEEF6u); r15 -= 4; W32(r15, PR); UPD(0x0C0AEEF8u, 1);  /* 0C0AEEF6 sts.l pr,@-Rn */
	IF(0x0C0AEEF8u); { u32 t_ = r0; PR = 0x0C0AEEFCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AEA10, 0x0C0AEA10u, 0x0C0AEEFCu); }  /* 0C0AEEF8 jsr @Rn */
L_0C0AEEFC: BLKS(0x0C0AEEFCu);
	r4 = 0x4Cu;  /* 0C0AEEFC mov #imm,Rn */
	IF(0x0C0AEEFEu); MACL = r10 * r4;  /* 0C0AEEFE mul.l Rm,Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0AEF02u, 4);  /* 0C0AEF00 mov.l @(disp,pc),Rn */
	IF(0x0C0AEF02u); r3 = MACL;  /* 0C0AEF02 sts macl,Rn */
	r3 += r0;  /* 0C0AEF04 add Rm,Rn */
	r3 += 0x44u;  /* 0C0AEF06 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0AEF0Au, 4);  /* 0C0AEF08 mov.w @Rm,Rn */
	r12 = r0;  /* 0C0AEF0A mov Rm,Rn */
	r2 += 0x1u;  /* 0C0AEF0C add #imm,Rn */
	r13 = 0xC21CCF8u; UPD(0x0C0AEF10u, 3);  /* 0C0AEF0E mov.l @(disp,pc),Rn */
	r11 = 0xC058030u; UPD(0x0C0AEF12u, 1);  /* 0C0AEF10 mov.l @(disp,pc),Rn */
	W16(r3, r2); UPD(0x0C0AEF14u, 1);  /* 0C0AEF12 mov.w Rm,@Rn */
L_0C0AEF14: BLKS(0x0C0AEF14u);
	r8 = 0x140u; UPD(0x0C0AEF16u, 1);  /* 0C0AEF14 mov.w @(disp,pc),Rn */
	r6 = 0x4Cu;  /* 0C0AEF16 mov #imm,Rn */
	IF(0x0C0AEF18u); MACL = r10 * r8;  /* 0C0AEF18 mul.l Rm,Rn */
	r7 = 0xC3929E0u; UPD(0x0C0AEF1Cu, 4);  /* 0C0AEF1A mov.l @(disp,pc),Rn */
	r3 = 0x3u;  /* 0C0AEF1C mov #imm,Rn */
	IF(0x0C0AEF1Eu); r8 = MACL;  /* 0C0AEF1E sts macl,Rn */
	IF(0x0C0AEF20u); MACL = r10 * r6;  /* 0C0AEF20 mul.l Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r7); UPD(0x0C0AEF24u, 5);  /* 0C0AEF22 mov.w @Rm,Rn */
	r8 += r9;  /* 0C0AEF24 add Rm,Rn */
	IF(0x0C0AEF26u); r5 = MACL;  /* 0C0AEF26 sts macl,Rn */
	r5 += r12;  /* 0C0AEF28 add Rm,Rn */
	r5 += 0x44u;  /* 0C0AEF2A add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r5); UPD(0x0C0AEF2Eu, 5);  /* 0C0AEF2C mov.w @Rm,Rn */
	r4 += r9;  /* 0C0AEF2E add Rm,Rn */
	r2 = r0 & 0xFFFF;  /* 0C0AEF30 extu.w Rm,Rn */
	IF(0x0C0AEF32u); r2 >>= 2;  /* 0C0AEF32 shlr2 Rn */
	r4 += r2;  /* 0C0AEF34 add Rm,Rn */
	r5 = 0x30000u; UPD(0x0C0AEF38u, 5);  /* 0C0AEF36 mov.l @(disp,pc),Rn */
	IF(0x0C0AEF38u); { u32 t_ = r11; PR = 0x0C0AEF3Cu; IF(0x0C0AEF3Au); ARG0(0x443Du); { s32 s_ = (s32)r3; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); } /* slot shld Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0AEF3Cu); }  /* 0C0AEF38 jsr @Rn */
L_0C0AEF3C: BLKS(0x0C0AEF3Cu);
	r6 = r9;  /* 0C0AEF3C mov Rm,Rn */
	r8 += r8;  /* 0C0AEF3E add Rm,Rn */
	r7 = (r0 >> 16) | (r0 << 16);  /* 0C0AEF40 swap.w Rm,Rn */
	r8 += r13;  /* 0C0AEF42 add Rm,Rn */
	r1 = (u32)(s32)(s16)r7;  /* 0C0AEF44 exts.w Rm,Rn */
	r6 += 0x1u;  /* 0C0AEF46 add #imm,Rn */
	r9 = (u32)(s32)(s16)r6;  /* 0C0AEF48 exts.w Rm,Rn */
	r5 = 0x3Fu;  /* 0C0AEF4A mov #imm,Rn */
	T = (s32)r9 > (s32)r5;  /* 0C0AEF4C cmp/gt Rm,Rn */
	{ u32 c_ = !T; W16(r8, r1); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0AEF14u, 12); goto L_0C0AEF14; } UPD(0x0C0AEF52u, 1); goto L_0C0AEF52; }  /* 0C0AEF4E bf/s */
L_0C0AEF52: BLKS(0x0C0AEF52u);
	r15 = r14;  /* 0C0AEF52 mov Rm,Rn */
	IF(0x0C0AEF54u); PR = R32(r15); r15 += 4; UPD(0x0C0AEF56u, 2);  /* 0C0AEF54 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AEF58u, 1);  /* 0C0AEF56 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AEF5Au, 1);  /* 0C0AEF58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AEF5Cu, 1);  /* 0C0AEF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AEF5Eu, 1);  /* 0C0AEF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AEF60u, 1);  /* 0C0AEF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AEF62u, 1);  /* 0C0AEF60 mov.l @Rm+,Rn */
	IF(0x0C0AEF62u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AEF62 rts */
}

void f_0C0AF0C0(sh3_t *c)
{
	LOCALS;
L_0C0AF0C0: BLKS(0x0C0AF0C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF0C2u, 1);  /* 0C0AF0C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF0C4u, 1);  /* 0C0AF0C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF0C6u, 1);  /* 0C0AF0C4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AF0C6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF0CAu, 2);  /* 0C0AF0C8 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0AF0CA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF0CEu, 2);  /* 0C0AF0CC mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C0AF0CE mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF0D2u, 2);  /* 0C0AF0D0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF0D4u, 1);  /* 0C0AF0D2 mov.l Rm,@-Rn */
	r7 = 0xC0AEA10u; UPD(0x0C0AF0D6u, 1);  /* 0C0AF0D4 mov.l @(disp,pc),Rn */
	IF(0x0C0AF0D6u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF0D8u, 1);  /* 0C0AF0D6 sts.l pr,@-Rn */
	IF(0x0C0AF0D8u); { u32 t_ = r7; PR = 0x0C0AF0DCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AEA10, 0x0C0AEA10u, 0x0C0AF0DCu); }  /* 0C0AF0D8 jsr @Rn */
L_0C0AF0DC: BLKS(0x0C0AF0DCu);
	r6 = 0xC1F5218u; UPD(0x0C0AF0DEu, 1);  /* 0C0AF0DC mov.l @(disp,pc),Rn */
	r5 = 0x4Cu;  /* 0C0AF0DE mov #imm,Rn */
	IF(0x0C0AF0E0u); MACL = r9 * r5;  /* 0C0AF0E0 mul.l Rm,Rn */
	r0 = r6;  /* 0C0AF0E2 mov Rm,Rn */
	IF(0x0C0AF0E4u); r12 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AF0E6u, 5);  /* 0C0AF0E4 mov.b @(r0,Rm),Rn */
	r4 = 0xC26CAE0u; UPD(0x0C0AF0E8u, 1);  /* 0C0AF0E6 mov.l @(disp,pc),Rn */
	IF(0x0C0AF0E8u); r0 = MACL;  /* 0C0AF0E8 sts macl,Rn */
	r0 += r4;  /* 0C0AF0EA add Rm,Rn */
	r3 = r0;  /* 0C0AF0EC mov Rm,Rn */
	r10 = r0;  /* 0C0AF0EE mov Rm,Rn */
	r0 = 0x140u; UPD(0x0C0AF0F2u, 5);  /* 0C0AF0F0 mov.w @(disp,pc),Rn */
	r3 += 0x44u;  /* 0C0AF0F2 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0AF0F6u, 2);  /* 0C0AF0F4 mov.w @Rm,Rn */
	IF(0x0C0AF0F6u); MACL = r9 * r0;  /* 0C0AF0F6 mul.l Rm,Rn */
	r2 += 0x1u;  /* 0C0AF0F8 add #imm,Rn */
	r13 = 0xC223268u; UPD(0x0C0AF0FCu, 4);  /* 0C0AF0FA mov.l @(disp,pc),Rn */
	IF(0x0C0AF0FCu); r9 = MACL;  /* 0C0AF0FC sts macl,Rn */
	W16(r3, r2); UPD(0x0C0AF100u, 2);  /* 0C0AF0FE mov.w Rm,@Rn */
	r9 += r9;  /* 0C0AF100 add Rm,Rn */
	IF(0x0C0AF102u); ;  /* 0C0AF102 nop */
	UPD(0x0C0AF104u, 2);
L_0C0AF104: BLKS(0x0C0AF104u);
	r4 = r11;  /* 0C0AF104 mov Rm,Rn */
	r0 = 0xC21CCF8u; UPD(0x0C0AF108u, 2);  /* 0C0AF106 mov.l @(disp,pc),Rn */
	IF(0x0C0AF108u); r4 <<= 2;  /* 0C0AF108 shll2 Rn */
	IF(0x0C0AF10Au); W16(r0 + r9, r4); UPD(0x0C0AF10Cu, 2);  /* 0C0AF10A mov.w Rm,@(r0,Rn) */
	r10 += 0x44u;  /* 0C0AF10C add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AF110u, 2);  /* 0C0AF10E mov.w @Rm,Rn */
	r8 = r9;  /* 0C0AF110 mov Rm,Rn */
	r3 = r2 & 0xFFFF;  /* 0C0AF112 extu.w Rm,Rn */
	r3 += r11;  /* 0C0AF114 add Rm,Rn */
	IF(0x0C0AF116u); MACL = r3 * r12;  /* 0C0AF116 mul.l Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C0AF11Au, 6);  /* 0C0AF118 mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFBCu;  /* 0C0AF11A add #imm,Rn */
	IF(0x0C0AF11Cu); r4 = MACL;  /* 0C0AF11C sts macl,Rn */
	IF(0x0C0AF11Eu); { u32 t_ = r0; PR = 0x0C0AF122u; r5 = R32(r10 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0AF122u); }  /* 0C0AF11E jsr @Rn */
L_0C0AF122: BLKS(0x0C0AF122u);
	r8 += r13;  /* 0C0AF122 add Rm,Rn */
	r0 += 0x28u;  /* 0C0AF124 add #imm,Rn */
	W16(r8, r0); UPD(0x0C0AF128u, 3);  /* 0C0AF126 mov.w Rm,@Rn */
	r0 = r11;  /* 0C0AF128 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0AF12A add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C0AF12C exts.w Rm,Rn */
	r8 = 0x51u;  /* 0C0AF12E mov #imm,Rn */
	T = (s32)r11 > (s32)r8;  /* 0C0AF130 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AF104u, 8); goto L_0C0AF104; } goto L_0C0AF136; }  /* 0C0AF132 bf/s */
L_0C0AF136: BLKS(0x0C0AF136u);
	r15 = r14;  /* 0C0AF136 mov Rm,Rn */
	IF(0x0C0AF138u); PR = R32(r15); r15 += 4; UPD(0x0C0AF13Au, 3);  /* 0C0AF138 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF13Cu, 1);  /* 0C0AF13A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AF13Eu, 1);  /* 0C0AF13C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AF140u, 1);  /* 0C0AF13E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF142u, 1);  /* 0C0AF140 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF144u, 1);  /* 0C0AF142 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF146u, 1);  /* 0C0AF144 mov.l @Rm+,Rn */
	IF(0x0C0AF146u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF146 rts */
}

void f_0C0AF170(sh3_t *c)
{
	LOCALS;
L_0C0AF170: BLKS(0x0C0AF170u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF172u, 1);  /* 0C0AF170 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF174u, 1);  /* 0C0AF172 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF176u, 1);  /* 0C0AF174 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF178u, 1);  /* 0C0AF176 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF17Au, 1);  /* 0C0AF178 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF17Cu, 1);  /* 0C0AF17A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF17Eu, 1);  /* 0C0AF17C mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0AF17E exts.w Rm,Rn */
	r7 = 0xC0AE310u; UPD(0x0C0AF182u, 2);  /* 0C0AF180 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0AF182 mov Rm,Rn */
	IF(0x0C0AF184u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF186u, 2);  /* 0C0AF184 sts.l pr,@-Rn */
	IF(0x0C0AF186u); { u32 t_ = r7; PR = 0x0C0AF18Au; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AE310, 0x0C0AE310u, 0x0C0AF18Au); }  /* 0C0AF186 jsr @Rn */
L_0C0AF18A: BLKS(0x0C0AF18Au);
	r0 = 0x4Cu;  /* 0C0AF18A mov #imm,Rn */
	IF(0x0C0AF18Cu); MACL = r13 * r0;  /* 0C0AF18C mul.l Rm,Rn */
	r9 = 0xC26CAE0u; UPD(0x0C0AF190u, 4);  /* 0C0AF18E mov.l @(disp,pc),Rn */
	IF(0x0C0AF190u); r0 = MACL;  /* 0C0AF190 sts macl,Rn */
	r0 += r9;  /* 0C0AF192 add Rm,Rn */
	r9 = R32(r0); UPD(0x0C0AF196u, 3);  /* 0C0AF194 mov.l @Rm,Rn */
	r0 += 0x3Cu;  /* 0C0AF196 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r6 = v_; } UPD(0x0C0AF19Au, 2);  /* 0C0AF198 mov.b @Rm+,Rn */
	r10 = 0x2000000u; UPD(0x0C0AF19Cu, 1);  /* 0C0AF19A mov.l @(disp,pc),Rn */
	r5 = r6 & 0xFF;  /* 0C0AF19C extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r3 = v_; } UPD(0x0C0AF1A0u, 2);  /* 0C0AF19E mov.b @Rm+,Rn */
	r9 &= r10;  /* 0C0AF1A0 and Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r12 = v_; } UPD(0x0C0AF1A4u, 2);  /* 0C0AF1A2 mov.b @Rm+,Rn */
	IF(0x0C0AF1A4u); r5 <<= 16;  /* 0C0AF1A4 shll16 Rn */
	r6 = 0xC392D5Cu; UPD(0x0C0AF1A8u, 2);  /* 0C0AF1A6 mov.l @(disp,pc),Rn */
	r9 |= r5;  /* 0C0AF1A8 or Rm,Rn */
	r4 = r3 & 0xFF;  /* 0C0AF1AA extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r10 = v_; } UPD(0x0C0AF1AEu, 3);  /* 0C0AF1AC mov.b @Rm+,Rn */
	IF(0x0C0AF1AEu); r4 <<= 8;  /* 0C0AF1AE shll8 Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0AF1B2u, 2);  /* 0C0AF1B0 mov.b @Rm,Rn */
	r9 |= r4;  /* 0C0AF1B2 or Rm,Rn */
	r11 = r12 & 0xFF;  /* 0C0AF1B4 extu.b Rm,Rn */
	r3 = r10 & 0xFF;  /* 0C0AF1B6 extu.b Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0AF1B8 extu.b Rm,Rn */
	IF(0x0C0AF1BAu); MACL = r3 * r4;  /* 0C0AF1BA mul.l Rm,Rn */
	r9 |= r11;  /* 0C0AF1BC or Rm,Rn */
	r11 = 0xC283CB2u; UPD(0x0C0AF1C0u, 8);  /* 0C0AF1BE mov.l @(disp,pc),Rn */
	IF(0x0C0AF1C0u); r12 = MACL;  /* 0C0AF1C0 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r1 = v_; } UPD(0x0C0AF1C4u, 2);  /* 0C0AF1C2 mov.b @Rm+,Rn */
	r12 += r12;  /* 0C0AF1C4 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C0AF1C8u, 2);  /* 0C0AF1C6 mov.b @Rm,Rn */
	r6 = r1 & 0xFF;  /* 0C0AF1C8 extu.b Rm,Rn */
	r5 = r10 & 0xFF;  /* 0C0AF1CA extu.b Rm,Rn */
	r2 = 0xC392AF4u; UPD(0x0C0AF1CEu, 3);  /* 0C0AF1CC mov.l @(disp,pc),Rn */
	IF(0x0C0AF1CEu); r12 >>= 8;  /* 0C0AF1CE shlr8 Rn */
	r11 = 0xC392B09u; UPD(0x0C0AF1D2u, 2);  /* 0C0AF1D0 mov.l @(disp,pc),Rn */
	IF(0x0C0AF1D2u); MACL = r6 * r5;  /* 0C0AF1D2 mul.l Rm,Rn */
	r4 = r12 & 0xFF;  /* 0C0AF1D4 extu.b Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AF1D8u, 4);  /* 0C0AF1D6 mov.b @Rm,Rn */
	IF(0x0C0AF1D8u); r3 = MACL;  /* 0C0AF1D8 sts macl,Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C0AF1DCu, 2);  /* 0C0AF1DA mov.b @Rm,Rn */
	r6 = r12 & 0xFF;  /* 0C0AF1DC extu.b Rm,Rn */
	r7 = R32(r2); UPD(0x0C0AF1E0u, 2);  /* 0C0AF1DE mov.l @Rm,Rn */
	r5 = r10 & 0xFF;  /* 0C0AF1E0 extu.b Rm,Rn */
	r2 = 0x11000000u; UPD(0x0C0AF1E4u, 2);  /* 0C0AF1E2 mov.l @(disp,pc),Rn */
	IF(0x0C0AF1E4u); MACL = r6 * r5;  /* 0C0AF1E4 mul.l Rm,Rn */
	r3 += r3;  /* 0C0AF1E6 add Rm,Rn */
	IF(0x0C0AF1E8u); r3 >>= 8;  /* 0C0AF1E8 shlr8 Rn */
	r9 |= r2;  /* 0C0AF1EA or Rm,Rn */
	r2 = r3 & 0xFF;  /* 0C0AF1EC extu.b Rm,Rn */
	IF(0x0C0AF1EEu); r3 = MACL;  /* 0C0AF1EE sts macl,Rn */
	r1 = 0xFFFFFFF9u;  /* 0C0AF1F0 mov #imm,Rn */
	IF(0x0C0AF1F2u); ARG0(0x431Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C0AF1F2 shad Rm,Rn */
	IF(0x0C0AF1F4u); r4 <<= 16;  /* 0C0AF1F4 shll16 Rn */
	IF(0x0C0AF1F6u); r2 <<= 8;  /* 0C0AF1F6 shll8 Rn */
	r0 = r3 & 0xFF;  /* 0C0AF1F8 extu.b Rm,Rn */
	r4 += r2;  /* 0C0AF1FA add Rm,Rn */
	r4 += r0;  /* 0C0AF1FC add Rm,Rn */
	r0 = 0x140u; UPD(0x0C0AF200u, 15);  /* 0C0AF1FE mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0AF200 mov #imm,Rn */
	IF(0x0C0AF202u); MACL = r13 * r0;  /* 0C0AF202 mul.l Rm,Rn */
	r12 = 0xC21CCF8u; UPD(0x0C0AF206u, 4);  /* 0C0AF204 mov.l @(disp,pc),Rn */
	r11 = 0xC223268u; UPD(0x0C0AF208u, 1);  /* 0C0AF206 mov.l @(disp,pc),Rn */
	IF(0x0C0AF208u); r6 = MACL; UPD(0x0C0AF20Au, 1);  /* 0C0AF208 sts macl,Rn */
	r10 = 0xC283CA8u; UPD(0x0C0AF20Cu, 1);  /* 0C0AF20A mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C0AF20C add Rm,Rn */
	r8 = 0xC21CCF4u; UPD(0x0C0AF210u, 2);  /* 0C0AF20E mov.l @(disp,pc),Rn */
L_0C0AF210: BLKS(0x0C0AF210u);
	r0 = r6;  /* 0C0AF210 mov Rm,Rn */
	IF(0x0C0AF212u); r13 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C0AF214u, 2);  /* 0C0AF212 mov.w @(r0,Rm),Rn */
	r6 += 0x2u;  /* 0C0AF214 add #imm,Rn */
	IF(0x0C0AF216u); r3 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C0AF218u, 2);  /* 0C0AF216 mov.w @(r0,Rm),Rn */
	r2 = 0x3E0u; UPD(0x0C0AF21Au, 1);  /* 0C0AF218 mov.w @(disp,pc),Rn */
	r0 = r13;  /* 0C0AF21A mov Rm,Rn */
	r1 = 0xFFE0u; UPD(0x0C0AF21Eu, 2);  /* 0C0AF21C mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C0AF21E add Rm,Rn */
	W32(r7, r9); UPD(0x0C0AF222u, 2);  /* 0C0AF220 mov.l Rm,@Rn */
	r0 += 0x60u;  /* 0C0AF222 add #imm,Rn */
	r0 &= r1;  /* 0C0AF224 and Rm,Rn */
	IF(0x0C0AF226u); r3 <<= 16;  /* 0C0AF226 shll16 Rn */
	r3 |= r0;  /* 0C0AF228 or Rm,Rn */
	r7 += 0x4u;  /* 0C0AF22A add #imm,Rn */
	W32(r7, r3); UPD(0x0C0AF22Eu, 6);  /* 0C0AF22C mov.l Rm,@Rn */
	r0 = r5;  /* 0C0AF22E mov Rm,Rn */
	r3 = R32(r8); UPD(0x0C0AF232u, 2);  /* 0C0AF230 mov.l @Rm,Rn */
	IF(0x0C0AF232u); r0 <<= 2;  /* 0C0AF232 shll2 Rn */
	r3 += r0;  /* 0C0AF234 add Rm,Rn */
	r0 = r13;  /* 0C0AF236 mov Rm,Rn */
	r13 = R32(r10); UPD(0x0C0AF23Au, 4);  /* 0C0AF238 mov.l @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0AF23A and #imm,r0 */
	r13 -= r0;  /* 0C0AF23C sub Rm,Rn */
	r2 = r13 & 0xFFFF;  /* 0C0AF23E extu.w Rm,Rn */
	IF(0x0C0AF240u); r3 <<= 16;  /* 0C0AF240 shll16 Rn */
	r7 += 0x4u;  /* 0C0AF242 add #imm,Rn */
	r3 |= r2;  /* 0C0AF244 or Rm,Rn */
	W32(r7, r3); UPD(0x0C0AF248u, 7);  /* 0C0AF246 mov.l Rm,@Rn */
	r13 = 0x51u;  /* 0C0AF248 mov #imm,Rn */
	r0 = 0x3010Fu; UPD(0x0C0AF24Cu, 2);  /* 0C0AF24A mov.l @(disp,pc),Rn */
	r7 += 0x4u;  /* 0C0AF24C add #imm,Rn */
	W32(r7, r0); UPD(0x0C0AF250u, 2);  /* 0C0AF24E mov.l Rm,@Rn */
	r3 = r5;  /* 0C0AF250 mov Rm,Rn */
	r7 += 0x4u;  /* 0C0AF252 add #imm,Rn */
	W32(r7, r4); UPD(0x0C0AF256u, 3);  /* 0C0AF254 mov.l Rm,@Rn */
	r3 += 0x1u;  /* 0C0AF256 add #imm,Rn */
	r5 = (u32)(s32)(s16)r3;  /* 0C0AF258 exts.w Rm,Rn */
	T = (s32)r5 > (s32)r13;  /* 0C0AF25A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AF210u, 6); goto L_0C0AF210; } goto L_0C0AF260; }  /* 0C0AF25C bf/s */
L_0C0AF260: BLKS(0x0C0AF260u);
	r8 = 0xC392AF4u; UPD(0x0C0AF262u, 2);  /* 0C0AF260 mov.l @(disp,pc),Rn */
	W32(r8, r7); UPD(0x0C0AF264u, 1);  /* 0C0AF262 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0AF264 mov Rm,Rn */
	IF(0x0C0AF266u); PR = R32(r15); r15 += 4; UPD(0x0C0AF268u, 2);  /* 0C0AF266 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF26Au, 1);  /* 0C0AF268 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AF26Cu, 1);  /* 0C0AF26A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AF26Eu, 1);  /* 0C0AF26C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF270u, 1);  /* 0C0AF26E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF272u, 1);  /* 0C0AF270 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF274u, 1);  /* 0C0AF272 mov.l @Rm+,Rn */
	IF(0x0C0AF274u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF274 rts */
}


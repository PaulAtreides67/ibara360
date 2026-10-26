#include "recomp.h"
#include "blk_recomp_funcs.h"

/* FUN_0c0695b0 */
void blk_f_0C0695B0(sh3_t *c)
{
	LOCALS;
L_0C0695B0: BLKS(0x0C0695B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0695B2u, 1);  /* 0C0695B0 mov.l Rm,@-Rn */
	r7 = 0xFu;  /* 0C0695B2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0695B6u, 2);  /* 0C0695B4 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0695B6 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0695BAu, 2);  /* 0C0695B8 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C0695BA mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0695BEu, 2);  /* 0C0695BC mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C0695BE exts.w Rm,Rn */
	IF(0x0C0695C0u); r15 -= 4; W32(r15, PR); UPD(0x0C0695C2u, 2);  /* 0C0695C0 sts.l pr,@-Rn */
	r5 = 0x0u;  /* 0C0695C2 mov #imm,Rn */
	r0 = 0xC3BC3CCu; UPD(0x0C0695C6u, 2);  /* 0C0695C4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0695C6 mov Rm,Rn */
	r6 = 0x3FFFu; UPD(0x0C0695CAu, 2);  /* 0C0695C8 mov.w @(disp,pc),Rn */
	r9 = 0x1Fu;  /* 0C0695CA mov #imm,Rn */
	UPD(0x0C0695CCu, 1);
L_0C0695CC: BLKS(0x0C0695CCu);
	r2 = r5;  /* 0C0695CC mov Rm,Rn */
	r2 += r2;  /* 0C0695CE add Rm,Rn */
	r3 = 0x0u;  /* 0C0695D0 mov #imm,Rn */
	r2 += r0;  /* 0C0695D2 add Rm,Rn */
	UPD(0x0C0695D4u, 4);
L_0C0695D4: BLKS(0x0C0695D4u);
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r1 = v_; } UPD(0x0C0695D6u, 1);  /* 0C0695D4 mov.w @Rm+,Rn */
	r1 &= r6;  /* 0C0695D6 and Rm,Rn */
	T = r1 == r8;  /* 0C0695D8 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0695E2u, 5); goto L_0C0695E2; } goto L_0C0695DE; }  /* 0C0695DA bf/s */
L_0C0695DE: BLKS(0x0C0695DEu);
	{ T = (r1 & r1) == 0; /* slot tst Rm,Rn */ UPD(0x0C0695FCu, 4); goto L_0C0695FC; }  /* 0C0695DE bra */
L_0C0695E2: BLKS(0x0C0695E2u);
	r1 = r3;  /* 0C0695E2 mov Rm,Rn */
	r1 += 0x1u;  /* 0C0695E4 add #imm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C0695E6 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r7;  /* 0C0695E8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0695D4u, 7); goto L_0C0695D4; }  /* 0C0695EA bf */
L_0C0695EC: BLKS(0x0C0695ECu);
	r2 = r4;  /* 0C0695EC mov Rm,Rn */
	r2 += 0x1u;  /* 0C0695EE add #imm,Rn */
	r4 = (u32)(s32)(s16)r2;  /* 0C0695F0 exts.w Rm,Rn */
	T = (s32)r4 > (s32)r9;  /* 0C0695F2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r5 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0695CCu, 7); goto L_0C0695CC; } goto L_0C0695F8; }  /* 0C0695F4 bf/s */
L_0C0695F8: BLKS(0x0C0695F8u);
	r1 = 0x0u;  /* 0C0695F8 mov #imm,Rn */
	T = (r1 & r1) == 0;  /* 0C0695FA tst Rm,Rn */
	UPD(0x0C0695FCu, 3);
L_0C0695FC: BLKS(0x0C0695FCu);
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069636u, 3); goto L_0C069636; } goto L_0C069600; }  /* 0C0695FC bf/s */
L_0C069600: BLKS(0x0C069600u);
	r4 = 0xC2B016Cu; UPD(0x0C069602u, 2);  /* 0C069600 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C069602 mov #imm,Rn */
	r5 = 0xC22E04Cu; UPD(0x0C069606u, 2);  /* 0C069604 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C069606 mov #imm,Rn */
	r6 = 0xFFu; UPD(0x0C06960Au, 2);  /* 0C069608 mov.w @(disp,pc),Rn */
	r7 = 0x3FFFu; UPD(0x0C06960Cu, 1);  /* 0C06960A mov.w @(disp,pc),Rn */
L_0C06960C: BLKS(0x0C06960Cu);
	IF(0x0C06960Cu); r9 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C06960Eu, 1);  /* 0C06960C mov.w @(r0,Rm),Rn */
	IF(0x0C06960Eu); r2 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C069610u, 1);  /* 0C06960E mov.w @(r0,Rm),Rn */
	r9 &= r7;  /* 0C069610 and Rm,Rn */
	T = r9 == r8;  /* 0C069612 cmp/eq Rm,Rn */
	IF(0x0C069614u); r9 = T;  /* 0C069614 movt Rn */
	r2 &= r7;  /* 0C069616 and Rm,Rn */
	T = r2 == r8;  /* 0C069618 cmp/eq Rm,Rn */
	IF(0x0C06961Au); r2 = T;  /* 0C06961A movt Rn */
	r9 |= r2;  /* 0C06961C or Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C06961E tst Rm,Rn */
	if (!T) { UPD(0x0C0696D0u, 11); goto L_0C0696D0; }  /* 0C069620 bf */
L_0C069622: BLKS(0x0C069622u);
	r2 = r3;  /* 0C069622 mov Rm,Rn */
	r2 += 0x1u;  /* 0C069624 add #imm,Rn */
	r3 = (u32)(s32)(s16)r2;  /* 0C069626 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C069628 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06960Cu, 7); goto L_0C06960C; } goto L_0C06962E; }  /* 0C06962A bf/s */
L_0C06962E: BLKS(0x0C06962Eu);
	r1 = 0x0u;  /* 0C06962E mov #imm,Rn */
	UPD(0x0C069630u, 2);
L_0C069630: BLKS(0x0C069630u);
	T = (r1 & r1) == 0;  /* 0C069630 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069650u, 4); goto L_0C069650; } UPD(0x0C069636u, 1); goto L_0C069636; }  /* 0C069632 bt/s */
L_0C069636: BLKS(0x0C069636u);
	r15 = r14;  /* 0C069636 mov Rm,Rn */
	IF(0x0C069638u); PR = R32(r15); r15 += 4; UPD(0x0C06963Au, 2);  /* 0C069638 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06963Cu, 1);  /* 0C06963A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06963Eu, 1);  /* 0C06963C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C069640u, 1);  /* 0C06963E mov.l @Rm+,Rn */
	IF(0x0C069640u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C069640 rts */
L_0C069650: BLKS(0x0C069650u);
	r9 = 0xC069410u; UPD(0x0C069652u, 1);  /* 0C069650 mov.l @(disp,pc),Rn */
	IF(0x0C069652u); { u32 t_ = r9; PR = 0x0C069656u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069410, 0x0C069410u, 0x0C069656u); }  /* 0C069652 jsr @Rn */
L_0C069656: BLKS(0x0C069656u);
	T = (r0 & r0) == 0;  /* 0C069656 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069636u, 4); goto L_0C069636; } goto L_0C06965C; }  /* 0C069658 bt/s */
L_0C06965C: BLKS(0x0C06965Cu);
	r6 = 0x400u; UPD(0x0C06965Eu, 2);  /* 0C06965C mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C06965E mov #imm,Rn */
	r7 = 0xFFu; UPD(0x0C069662u, 2);  /* 0C069660 mov.w @(disp,pc),Rn */
	r3 = 0xC22E04Cu; UPD(0x0C069664u, 1);  /* 0C069662 mov.l @(disp,pc),Rn */
	r5 = 0x3FFFu; UPD(0x0C069666u, 1);  /* 0C069664 mov.w @(disp,pc),Rn */
L_0C069666: BLKS(0x0C069666u);
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C069668u, 1);  /* 0C069666 mov.w @Rm+,Rn */
	r0 &= r5;  /* 0C069668 and Rm,Rn */
	T = r0 == r6;  /* 0C06966A cmp/eq Rm,Rn */
	{ u32 c_ = T; r4 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0696C0u, 5); goto L_0C0696C0; } goto L_0C069670; }  /* 0C06966C bt/s */
L_0C069670: BLKS(0x0C069670u);
	r4 += 0x1u;  /* 0C069670 add #imm,Rn */
	r2 = (u32)(s32)(s16)r4;  /* 0C069672 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r7;  /* 0C069674 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C069666u, 7); goto L_0C069666; }  /* 0C069676 bf */
L_0C069678: BLKS(0x0C069678u);
	r1 = 0x100u; UPD(0x0C06967Au, 1);  /* 0C069678 mov.w @(disp,pc),Rn */
L_0C06967A: BLKS(0x0C06967Au);
	r5 = 0xFFu; UPD(0x0C06967Cu, 1);  /* 0C06967A mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C06967C exts.w Rm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C06967E cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069636u, 5); goto L_0C069636; } goto L_0C069684; }  /* 0C069680 bt/s */
L_0C069684: BLKS(0x0C069684u);
	r3 += r3;  /* 0C069684 add Rm,Rn */
	r9 = 0xC22E04Cu; UPD(0x0C069688u, 3);  /* 0C069686 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C069688 mov Rm,Rn */
	IF(0x0C06968Au); W16(r0 + r9, r8); UPD(0x0C06968Cu, 2);  /* 0C06968A mov.w Rm,@(r0,Rn) */
	r6 = 0xC28EDFCu; UPD(0x0C06968Eu, 1);  /* 0C06968C mov.l @(disp,pc),Rn */
	r3 = 0xC29D73Cu; UPD(0x0C069690u, 1);  /* 0C06968E mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r7 = v_; } UPD(0x0C069692u, 1);  /* 0C069690 mov.w @Rm+,Rn */
	IF(0x0C069692u); W16(r0 + r3, r7); UPD(0x0C069694u, 1);  /* 0C069692 mov.w Rm,@(r0,Rn) */
	r4 = 0xC23DEA6u; UPD(0x0C069696u, 1);  /* 0C069694 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C069698u, 1);  /* 0C069696 mov.w @Rm,Rn */
	r2 = 0xC3C848Eu; UPD(0x0C06969Au, 1);  /* 0C069698 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C06969A exts.w Rm,Rn */
	IF(0x0C06969Cu); W16(r0 + r4, r5); UPD(0x0C06969Eu, 2);  /* 0C06969C mov.w Rm,@(r0,Rn) */
	IF(0x0C06969Eu); W16(r0 + r2, r10); UPD(0x0C0696A0u, 1);  /* 0C06969E mov.w Rm,@(r0,Rn) */
	r0 = (u32)(s32)(s16)r7;  /* 0C0696A0 exts.w Rm,Rn */
	IF(0x0C0696A2u); r0 <<= 2;  /* 0C0696A2 shll2 Rn */
	IF(0x0C0696A4u); r0 <<= 2;  /* 0C0696A4 shll2 Rn */
	r6 = 0xFFFF8000u; UPD(0x0C0696A8u, 4);  /* 0C0696A6 mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C0696A8 add Rm,Rn */
	r3 = 0xC3BC3CCu; UPD(0x0C0696ACu, 2);  /* 0C0696AA mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0696AC add Rm,Rn */
	r8 |= r6;  /* 0C0696AE or Rm,Rn */
	IF(0x0C0696B0u); W16(r0 + r3, r8); UPD(0x0C0696B2u, 3);  /* 0C0696B0 mov.w Rm,@(r0,Rn) */
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C069636u, 3); goto L_0C069636; }  /* 0C0696B2 bra */
L_0C0696C0: BLKS(0x0C0696C0u);
	{ r1 = r2; /* slot mov Rm,Rn */ UPD(0x0C06967Au, 3); goto L_0C06967A; }  /* 0C0696C0 bra */
L_0C0696D0: BLKS(0x0C0696D0u);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C069630u, 3); goto L_0C069630; }  /* 0C0696D0 bra */
}

/* FUN_0c069710 */
void blk_f_0C069710(sh3_t *c)
{
	LOCALS;
L_0C069710: BLKS(0x0C069710u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C069712u, 1);  /* 0C069710 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C069712 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C069716u, 2);  /* 0C069714 mov.l Rm,@-Rn */
	r6 = 0xFu;  /* 0C069716 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06971Au, 2);  /* 0C069718 mov.l Rm,@-Rn */
	r9 = 0x1Fu;  /* 0C06971A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06971Eu, 2);  /* 0C06971C mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C06971E exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069722u, 2);  /* 0C069720 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C069722 exts.w Rm,Rn */
	r2 = 0x3FFFu; UPD(0x0C069726u, 2);  /* 0C069724 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C069726 mov Rm,Rn */
	IF(0x0C069728u); r15 -= 4; W32(r15, PR); UPD(0x0C06972Au, 2);  /* 0C069728 sts.l pr,@-Rn */
	r7 &= r2;  /* 0C06972A and Rm,Rn */
	r8 = 0xC3BC3CCu; UPD(0x0C06972Eu, 2);  /* 0C06972C mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06972E mov Rm,Rn */
	r5 = r2;  /* 0C069730 mov Rm,Rn */
	r4 = 0x0u;  /* 0C069732 mov #imm,Rn */
	UPD(0x0C069734u, 3);
L_0C069734: BLKS(0x0C069734u);
	r2 = r4;  /* 0C069734 mov Rm,Rn */
	r2 += r2;  /* 0C069736 add Rm,Rn */
	r3 = 0x0u;  /* 0C069738 mov #imm,Rn */
	r2 += r8;  /* 0C06973A add Rm,Rn */
	UPD(0x0C06973Cu, 4);
L_0C06973C: BLKS(0x0C06973Cu);
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r1 = v_; } UPD(0x0C06973Eu, 1);  /* 0C06973C mov.w @Rm+,Rn */
	r1 &= r5;  /* 0C06973E and Rm,Rn */
	T = r1 == r7;  /* 0C069740 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06974Au, 5); goto L_0C06974A; } goto L_0C069746; }  /* 0C069742 bf/s */
L_0C069746: BLKS(0x0C069746u);
	{ T = (r1 & r1) == 0; /* slot tst Rm,Rn */ UPD(0x0C069764u, 4); goto L_0C069764; }  /* 0C069746 bra */
L_0C06974A: BLKS(0x0C06974Au);
	r1 = r3;  /* 0C06974A mov Rm,Rn */
	r1 += 0x1u;  /* 0C06974C add #imm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C06974E exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C069750 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06973Cu, 7); goto L_0C06973C; }  /* 0C069752 bf */
L_0C069754: BLKS(0x0C069754u);
	r2 = r0;  /* 0C069754 mov Rm,Rn */
	r2 += 0x1u;  /* 0C069756 add #imm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C069758 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r9;  /* 0C06975A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C069734u, 7); goto L_0C069734; } goto L_0C069760; }  /* 0C06975C bf/s */
L_0C069760: BLKS(0x0C069760u);
	r1 = 0x0u;  /* 0C069760 mov #imm,Rn */
	T = (r1 & r1) == 0;  /* 0C069762 tst Rm,Rn */
	UPD(0x0C069764u, 3);
L_0C069764: BLKS(0x0C069764u);
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0697A6u, 3); goto L_0C0697A6; } goto L_0C069768; }  /* 0C069764 bf/s */
L_0C069768: BLKS(0x0C069768u);
	r0 = 0x3FFFu; UPD(0x0C06976Au, 2);  /* 0C069768 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C06976A mov Rm,Rn */
	r8 = 0xC2B016Cu; UPD(0x0C06976Eu, 2);  /* 0C06976C mov.l @(disp,pc),Rn */
	r7 &= r0;  /* 0C06976E and Rm,Rn */
	r4 = 0xC22E04Cu; UPD(0x0C069772u, 2);  /* 0C069770 mov.l @(disp,pc),Rn */
	r6 = r0;  /* 0C069772 mov Rm,Rn */
	r5 = 0xFFu; UPD(0x0C069776u, 2);  /* 0C069774 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C069776 mov #imm,Rn */
	r0 = 0x0u;  /* 0C069778 mov #imm,Rn */
	IF(0x0C06977Au); ;  /* 0C06977A nop */
	UPD(0x0C06977Cu, 3);
L_0C06977C: BLKS(0x0C06977Cu);
	IF(0x0C06977Cu); r9 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C06977Eu, 1);  /* 0C06977C mov.w @(r0,Rm),Rn */
	IF(0x0C06977Eu); r2 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C069780u, 1);  /* 0C06977E mov.w @(r0,Rm),Rn */
	r9 &= r6;  /* 0C069780 and Rm,Rn */
	T = r9 == r7;  /* 0C069782 cmp/eq Rm,Rn */
	IF(0x0C069784u); r9 = T;  /* 0C069784 movt Rn */
	r2 &= r6;  /* 0C069786 and Rm,Rn */
	T = r2 == r7;  /* 0C069788 cmp/eq Rm,Rn */
	IF(0x0C06978Au); r2 = T;  /* 0C06978A movt Rn */
	r9 |= r2;  /* 0C06978C or Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C06978E tst Rm,Rn */
	if (!T) { UPD(0x0C069840u, 11); goto L_0C069840; }  /* 0C069790 bf */
L_0C069792: BLKS(0x0C069792u);
	r2 = r3;  /* 0C069792 mov Rm,Rn */
	r2 += 0x1u;  /* 0C069794 add #imm,Rn */
	r3 = (u32)(s32)(s16)r2;  /* 0C069796 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C069798 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06977Cu, 7); goto L_0C06977C; } goto L_0C06979E; }  /* 0C06979A bf/s */
L_0C06979E: BLKS(0x0C06979Eu);
	r1 = 0x0u;  /* 0C06979E mov #imm,Rn */
	UPD(0x0C0697A0u, 2);
L_0C0697A0: BLKS(0x0C0697A0u);
	T = (r1 & r1) == 0;  /* 0C0697A0 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0697C0u, 4); goto L_0C0697C0; } UPD(0x0C0697A6u, 1); goto L_0C0697A6; }  /* 0C0697A2 bt/s */
L_0C0697A6: BLKS(0x0C0697A6u);
	r15 = r14;  /* 0C0697A6 mov Rm,Rn */
	IF(0x0C0697A8u); PR = R32(r15); r15 += 4; UPD(0x0C0697AAu, 2);  /* 0C0697A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0697ACu, 1);  /* 0C0697AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0697AEu, 1);  /* 0C0697AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0697B0u, 1);  /* 0C0697AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0697B2u, 1);  /* 0C0697B0 mov.l @Rm+,Rn */
	IF(0x0C0697B2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0697B2 rts */
L_0C0697C0: BLKS(0x0C0697C0u);
	r8 = 0xC069410u; UPD(0x0C0697C2u, 1);  /* 0C0697C0 mov.l @(disp,pc),Rn */
	IF(0x0C0697C2u); { u32 t_ = r8; PR = 0x0C0697C6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069410, 0x0C069410u, 0x0C0697C6u); }  /* 0C0697C2 jsr @Rn */
L_0C0697C6: BLKS(0x0C0697C6u);
	T = (r0 & r0) == 0;  /* 0C0697C6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0697A6u, 4); goto L_0C0697A6; } goto L_0C0697CC; }  /* 0C0697C8 bt/s */
L_0C0697CC: BLKS(0x0C0697CCu);
	r6 = 0x400u; UPD(0x0C0697CEu, 2);  /* 0C0697CC mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0697CE mov #imm,Rn */
	r7 = 0xFFu; UPD(0x0C0697D2u, 2);  /* 0C0697D0 mov.w @(disp,pc),Rn */
	r3 = 0xC2B016Cu; UPD(0x0C0697D4u, 1);  /* 0C0697D2 mov.l @(disp,pc),Rn */
	r5 = 0x3FFFu; UPD(0x0C0697D6u, 1);  /* 0C0697D4 mov.w @(disp,pc),Rn */
L_0C0697D6: BLKS(0x0C0697D6u);
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r4 = v_; } UPD(0x0C0697D8u, 1);  /* 0C0697D6 mov.w @Rm+,Rn */
	r4 &= r5;  /* 0C0697D8 and Rm,Rn */
	T = r4 == r6;  /* 0C0697DA cmp/eq Rm,Rn */
	if (T) { UPD(0x0C069830u, 5); goto L_0C069830; }  /* 0C0697DC bt */
L_0C0697DE: BLKS(0x0C0697DEu);
	r0 = r2;  /* 0C0697DE mov Rm,Rn */
	r0 += 0x1u;  /* 0C0697E0 add #imm,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C0697E2 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r7;  /* 0C0697E4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0697D6u, 7); goto L_0C0697D6; }  /* 0C0697E6 bf */
L_0C0697E8: BLKS(0x0C0697E8u);
	r1 = 0x100u; UPD(0x0C0697EAu, 1);  /* 0C0697E8 mov.w @(disp,pc),Rn */
L_0C0697EA: BLKS(0x0C0697EAu);
	r5 = 0xFFu; UPD(0x0C0697ECu, 1);  /* 0C0697EA mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C0697EC exts.w Rm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C0697EE cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0697A6u, 5); goto L_0C0697A6; } goto L_0C0697F4; }  /* 0C0697F0 bt/s */
L_0C0697F4: BLKS(0x0C0697F4u);
	r3 += r3;  /* 0C0697F4 add Rm,Rn */
	r6 = 0xC2B016Cu; UPD(0x0C0697F8u, 3);  /* 0C0697F6 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C0697F8 mov Rm,Rn */
	IF(0x0C0697FAu); W16(r0 + r6, r10); UPD(0x0C0697FCu, 2);  /* 0C0697FA mov.w Rm,@(r0,Rn) */
	r5 = 0xC28EDFCu; UPD(0x0C0697FEu, 1);  /* 0C0697FC mov.l @(disp,pc),Rn */
	r3 = 0xC2289F4u; UPD(0x0C069800u, 1);  /* 0C0697FE mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r7 = v_; } UPD(0x0C069802u, 1);  /* 0C069800 mov.w @Rm+,Rn */
	IF(0x0C069802u); W16(r0 + r3, r7); UPD(0x0C069804u, 1);  /* 0C069802 mov.w Rm,@(r0,Rn) */
	r8 = 0xC23C8A0u; UPD(0x0C069806u, 1);  /* 0C069804 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C069808u, 1);  /* 0C069806 mov.w @Rm,Rn */
	r2 = 0xC2287D8u; UPD(0x0C06980Au, 1);  /* 0C069808 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C06980A exts.w Rm,Rn */
	IF(0x0C06980Cu); W16(r0 + r8, r4); UPD(0x0C06980Eu, 2);  /* 0C06980C mov.w Rm,@(r0,Rn) */
	IF(0x0C06980Eu); W16(r0 + r2, r11); UPD(0x0C069810u, 1);  /* 0C06980E mov.w Rm,@(r0,Rn) */
	r0 = (u32)(s32)(s16)r7;  /* 0C069810 exts.w Rm,Rn */
	IF(0x0C069812u); r0 <<= 2;  /* 0C069812 shll2 Rn */
	IF(0x0C069814u); r0 <<= 2;  /* 0C069814 shll2 Rn */
	r6 = 0xFFFF8000u; UPD(0x0C069818u, 4);  /* 0C069816 mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C069818 add Rm,Rn */
	r3 = 0xC3BC3CCu; UPD(0x0C06981Cu, 2);  /* 0C06981A mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C06981C add Rm,Rn */
	r10 |= r6;  /* 0C06981E or Rm,Rn */
	IF(0x0C069820u); W16(r0 + r3, r10); UPD(0x0C069822u, 3);  /* 0C069820 mov.w Rm,@(r0,Rn) */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0697A6u, 3); goto L_0C0697A6; }  /* 0C069822 bra */
L_0C069830: BLKS(0x0C069830u);
	{ r1 = r2; /* slot mov Rm,Rn */ UPD(0x0C0697EAu, 3); goto L_0C0697EA; }  /* 0C069830 bra */
L_0C069840: BLKS(0x0C069840u);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0697A0u, 3); goto L_0C0697A0; }  /* 0C069840 bra */
}

/* FUN_0c069880 */
void blk_f_0C069880(sh3_t *c)
{
	LOCALS;
L_0C069880: BLKS(0x0C069880u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C069882u, 1);  /* 0C069880 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C069882 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C069886u, 2);  /* 0C069884 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C069886 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06988Au, 2);  /* 0C069888 mov.l Rm,@-Rn */
	r6 = 0x7u;  /* 0C06988A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06988Eu, 2);  /* 0C06988C mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C06988E mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C069892u, 2);  /* 0C069890 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C069894u, 1);  /* 0C069892 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069896u, 1);  /* 0C069894 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFDCu;  /* 0C069896 add #imm,Rn */
	r14 = r15;  /* 0C069898 mov Rm,Rn */
	r5 = 0xC286318u; UPD(0x0C06989Cu, 3);  /* 0C06989A mov.l @(disp,pc),Rn */
	r7 = r14;  /* 0C06989C mov Rm,Rn */
	W32(r14 + 0x20u, r1); UPD(0x0C0698A0u, 2);  /* 0C06989E mov.l Rm,@(disp,Rn) */
L_0C0698A0: BLKS(0x0C0698A0u);
	r2 = r3;  /* 0C0698A0 mov Rm,Rn */
	r2 += r5;  /* 0C0698A2 add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0698A6u, 3);  /* 0C0698A4 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0698A6 tst Rm,Rn */
	if (T) { UPD(0x0C0698AEu, 4); goto L_0C0698AE; }  /* 0C0698A8 bt */
L_0C0698AA: BLKS(0x0C0698AAu);
	r8 = R32(r2 + 0x30u); UPD(0x0C0698ACu, 1);  /* 0C0698AA mov.l @(disp,Rm),Rn */
	W32(r7, r8); UPD(0x0C0698AEu, 1);  /* 0C0698AC mov.l Rm,@Rn */
L_0C0698AE: BLKS(0x0C0698AEu);
	r2 = r4;  /* 0C0698AE mov Rm,Rn */
	r2 += 0x1u;  /* 0C0698B0 add #imm,Rn */
	r4 = (u32)(s32)(s16)r2;  /* 0C0698B2 exts.w Rm,Rn */
	r7 += 0x4u;  /* 0C0698B4 add #imm,Rn */
	T = (s32)r4 > (s32)r6;  /* 0C0698B6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0698A0u, 8); goto L_0C0698A0; } UPD(0x0C0698BCu, 1); goto L_0C0698BC; }  /* 0C0698B8 bf/s */
L_0C0698BC: BLKS(0x0C0698BCu);
	r2 = 0x0u;  /* 0C0698BC mov #imm,Rn */
	r4 = 0x0u;  /* 0C0698BE mov #imm,Rn */
	r12 = 0x0u;  /* 0C0698C0 mov #imm,Rn */
	r11 = 0x0u;  /* 0C0698C2 mov #imm,Rn */
	r10 = 0x0u;  /* 0C0698C4 mov #imm,Rn */
	IF(0x0C0698C6u); ;  /* 0C0698C6 nop */
	UPD(0x0C0698C8u, 6);
L_0C0698C8: BLKS(0x0C0698C8u);
	r5 = 0xC286318u; UPD(0x0C0698CAu, 1);  /* 0C0698C8 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C0698CA mov Rm,Rn */
	IF(0x0C0698CCu); r3 = R32(r0 + r5); UPD(0x0C0698CEu, 2);  /* 0C0698CC mov.l @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C0698CE tst Rm,Rn */
	{ u32 c_ = T; r8 = r4; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C069956u, 4); goto L_0C069956; } goto L_0C0698D4; }  /* 0C0698D0 bt/s */
L_0C0698D4: BLKS(0x0C0698D4u);
	r0 = r11;  /* 0C0698D4 mov Rm,Rn */
	IF(0x0C0698D6u); r9 = R32(r0 + r14); UPD(0x0C0698D8u, 3);  /* 0C0698D6 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r9); r9 += 2; r8 = v_; } UPD(0x0C0698DAu, 1);  /* 0C0698D8 mov.w @Rm+,Rn */
	T = (r8 & r8) == 0;  /* 0C0698DA tst Rm,Rn */
	{ u32 c_ = T; r13 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C069954u, 4); goto L_0C069954; } goto L_0C0698E0; }  /* 0C0698DC bt/s */
L_0C0698E0: BLKS(0x0C0698E0u);
	IF(0x0C0698E0u); T = (s32)r8 >= 0;  /* 0C0698E0 cmp/pz Rn */
	{ u32 c_ = !T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069990u, 5); goto L_0C069990; } goto L_0C0698E6; }  /* 0C0698E2 bf/s */
L_0C0698E6: BLKS(0x0C0698E6u);
	r7 = 0x400u; UPD(0x0C0698E8u, 2);  /* 0C0698E6 mov.w @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C0698E8 mov #imm,Rn */
	r3 = 0xFFu; UPD(0x0C0698ECu, 2);  /* 0C0698EA mov.w @(disp,pc),Rn */
	r2 = 0xC2B016Cu; UPD(0x0C0698EEu, 1);  /* 0C0698EC mov.l @(disp,pc),Rn */
	r6 = 0x3FFFu; UPD(0x0C0698F0u, 1);  /* 0C0698EE mov.w @(disp,pc),Rn */
L_0C0698F0: BLKS(0x0C0698F0u);
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r5 = v_; } UPD(0x0C0698F2u, 1);  /* 0C0698F0 mov.w @Rm+,Rn */
	r5 &= r6;  /* 0C0698F2 and Rm,Rn */
	T = r5 == r7;  /* 0C0698F4 cmp/eq Rm,Rn */
	{ u32 c_ = T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C069904u, 5); goto L_0C069904; } goto L_0C0698FA; }  /* 0C0698F6 bt/s */
L_0C0698FA: BLKS(0x0C0698FAu);
	r5 += 0x1u;  /* 0C0698FA add #imm,Rn */
	r0 = (u32)(s32)(s16)r5;  /* 0C0698FC exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C0698FE cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0698F0u, 7); goto L_0C0698F0; }  /* 0C069900 bf */
L_0C069902: BLKS(0x0C069902u);
	r0 = 0x100u; UPD(0x0C069904u, 1);  /* 0C069902 mov.w @(disp,pc),Rn */
L_0C069904: BLKS(0x0C069904u);
	r6 = 0xFFu; UPD(0x0C069906u, 1);  /* 0C069904 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r0;  /* 0C069906 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r6;  /* 0C069908 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069974u, 5); goto L_0C069974; } goto L_0C06990E; }  /* 0C06990A bt/s */
L_0C06990E: BLKS(0x0C06990Eu);
	r2 = 0x3FFFu; UPD(0x0C069910u, 2);  /* 0C06990E mov.w @(disp,pc),Rn */
	r5 = r8;  /* 0C069910 mov Rm,Rn */
	r7 = 0xC2B016Cu; UPD(0x0C069914u, 2);  /* 0C069912 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C069914 add Rm,Rn */
	r5 &= r2;  /* 0C069916 and Rm,Rn */
	IF(0x0C069918u); W16(r0 + r7, r5); UPD(0x0C06991Au, 3);  /* 0C069918 mov.w Rm,@(r0,Rn) */
	r6 = 0x22u;  /* 0C06991A mov #imm,Rn */
	r6 += r14;  /* 0C06991C add Rm,Rn */
	r4 += 0x8u;  /* 0C06991E add #imm,Rn */
	r5 = 0xC2289F4u; UPD(0x0C069922u, 4);  /* 0C069920 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C069922 exts.w Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r6); UPD(0x0C069926u, 2);  /* 0C069924 mov.w @Rm,Rn */
	r4 += 0xFFFFFFF8u;  /* 0C069926 add #imm,Rn */
	r7 = 0xC23C8A0u; UPD(0x0C06992Au, 2);  /* 0C069928 mov.l @(disp,pc),Rn */
	IF(0x0C06992Au); W16(r0 + r5, r1); UPD(0x0C06992Cu, 1);  /* 0C06992A mov.w Rm,@(r0,Rn) */
	IF(0x0C06992Cu); W16(r0 + r7, r3); UPD(0x0C06992Eu, 1);  /* 0C06992C mov.w Rm,@(r0,Rn) */
	r2 = 0xC2287D8u; UPD(0x0C069930u, 1);  /* 0C06992E mov.l @(disp,pc),Rn */
L_0C069930: BLKS(0x0C069930u);
	r5 = 0x100u; UPD(0x0C069932u, 1);  /* 0C069930 mov.w @(disp,pc),Rn */
	r7 = 0x4u;  /* 0C069932 mov #imm,Rn */
	IF(0x0C069934u); W16(r0 + r2, r5); UPD(0x0C069936u, 2);  /* 0C069934 mov.w Rm,@(r0,Rn) */
	r0 = R32(r14 + 0x20u); UPD(0x0C069938u, 1);  /* 0C069936 mov.l @(disp,Rm),Rn */
	r2 = 0x1u;  /* 0C069938 mov #imm,Rn */
	IF(0x0C06993Au); ARG0(0x407Du); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06993A shld Rm,Rn */
	r6 = 0xFFFF8000u; UPD(0x0C06993Eu, 3);  /* 0C06993C mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C06993E add Rm,Rn */
	r5 = 0xC3BC3CCu; UPD(0x0C069942u, 2);  /* 0C069940 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C069942 add Rm,Rn */
	r8 |= r6;  /* 0C069944 or Rm,Rn */
	IF(0x0C069946u); W16(r0 + r5, r8); UPD(0x0C069948u, 3);  /* 0C069946 mov.w Rm,@(r0,Rn) */
	IF(0x0C069948u); r3 <<= 8;  /* 0C069948 shll8 Rn */
	r0 = r13;  /* 0C06994A mov Rm,Rn */
	IF(0x0C06994Cu); W32(r0 + r14, r9); UPD(0x0C06994Eu, 3);  /* 0C06994C mov.l Rm,@(r0,Rn) */
	r9 = 0xC286318u; UPD(0x0C069950u, 1);  /* 0C06994E mov.l @(disp,pc),Rn */
	r9 += r12;  /* 0C069950 add Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C069954u, 2);  /* 0C069952 mov.l Rm,@(disp,Rn) */
L_0C069954: BLKS(0x0C069954u);
	r8 = r4;  /* 0C069954 mov Rm,Rn */
	UPD(0x0C069956u, 1);
L_0C069956: BLKS(0x0C069956u);
	r8 += 0x1u;  /* 0C069956 add #imm,Rn */
	r4 = (u32)(s32)(s16)r8;  /* 0C069958 exts.w Rm,Rn */
	r13 = 0x7u;  /* 0C06995A mov #imm,Rn */
	r12 += 0x4Cu;  /* 0C06995C add #imm,Rn */
	r11 += 0x4u;  /* 0C06995E add #imm,Rn */
	T = (s32)r4 > (s32)r13;  /* 0C069960 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0698C8u, 9); goto L_0C0698C8; } goto L_0C069966; }  /* 0C069962 bf/s */
L_0C069966: BLKS(0x0C069966u);
	r10 = R32(r14 + 0x20u); UPD(0x0C069968u, 2);  /* 0C069966 mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C069968 tst Rm,Rn */
	r10 += 0x1u;  /* 0C06996A add #imm,Rn */
	r4 = (u32)(s32)(s16)r10;  /* 0C06996C exts.w Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x20u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0698BCu, 6); goto L_0C0698BC; } UPD(0x0C069972u, 1); goto L_0C069972; }  /* 0C06996E bf/s */
L_0C069972: BLKS(0x0C069972u);
	r1 = 0x1u;  /* 0C069972 mov #imm,Rn */
	UPD(0x0C069974u, 1);
L_0C069974: BLKS(0x0C069974u);
	r0 = r1;  /* 0C069974 mov Rm,Rn */
	r14 += 0x24u;  /* 0C069976 add #imm,Rn */
	r15 = r14;  /* 0C069978 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06997Cu, 4);  /* 0C06997A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06997Eu, 1);  /* 0C06997C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C069980u, 1);  /* 0C06997E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C069982u, 1);  /* 0C069980 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C069984u, 1);  /* 0C069982 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C069986u, 1);  /* 0C069984 mov.l @Rm+,Rn */
	IF(0x0C069986u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C069986 rts */
L_0C069990: BLKS(0x0C069990u);
	r6 = 0x400u; UPD(0x0C069992u, 1);  /* 0C069990 mov.w @(disp,pc),Rn */
	r7 = 0xFFu; UPD(0x0C069994u, 1);  /* 0C069992 mov.w @(disp,pc),Rn */
	r3 = 0xC22E04Cu; UPD(0x0C069996u, 1);  /* 0C069994 mov.l @(disp,pc),Rn */
	r5 = 0x3FFFu; UPD(0x0C069998u, 1);  /* 0C069996 mov.w @(disp,pc),Rn */
L_0C069998: BLKS(0x0C069998u);
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C06999Au, 1);  /* 0C069998 mov.w @Rm+,Rn */
	r0 &= r5;  /* 0C06999A and Rm,Rn */
	T = r0 == r6;  /* 0C06999C cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0699E0u, 5); goto L_0C0699E0; }  /* 0C06999E bt */
L_0C0699A0: BLKS(0x0C0699A0u);
	r0 = r2;  /* 0C0699A0 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0699A2 add #imm,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C0699A4 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r7;  /* 0C0699A6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C069998u, 7); goto L_0C069998; }  /* 0C0699A8 bf */
L_0C0699AA: BLKS(0x0C0699AAu);
	r0 = 0x100u; UPD(0x0C0699ACu, 1);  /* 0C0699AA mov.w @(disp,pc),Rn */
L_0C0699AC: BLKS(0x0C0699ACu);
	r3 = 0xFFu; UPD(0x0C0699AEu, 1);  /* 0C0699AC mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r0;  /* 0C0699AE exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C0699B0 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069974u, 5); goto L_0C069974; } goto L_0C0699B6; }  /* 0C0699B2 bt/s */
L_0C0699B6: BLKS(0x0C0699B6u);
	r2 = 0x3FFFu; UPD(0x0C0699B8u, 2);  /* 0C0699B6 mov.w @(disp,pc),Rn */
	r7 = r8;  /* 0C0699B8 mov Rm,Rn */
	r6 = 0xC22E04Cu; UPD(0x0C0699BCu, 2);  /* 0C0699BA mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0699BC add Rm,Rn */
	r7 &= r2;  /* 0C0699BE and Rm,Rn */
	IF(0x0C0699C0u); W16(r0 + r6, r7); UPD(0x0C0699C2u, 3);  /* 0C0699C0 mov.w Rm,@(r0,Rn) */
	r5 = 0x22u;  /* 0C0699C2 mov #imm,Rn */
	r5 += r14;  /* 0C0699C4 add Rm,Rn */
	r4 += 0x8u;  /* 0C0699C6 add #imm,Rn */
	r7 = 0xC29D73Cu; UPD(0x0C0699CAu, 4);  /* 0C0699C8 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C0699CA exts.w Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r5); UPD(0x0C0699CEu, 2);  /* 0C0699CC mov.w @Rm,Rn */
	r4 += 0xFFFFFFF8u;  /* 0C0699CE add #imm,Rn */
	r6 = 0xC23DEA6u; UPD(0x0C0699D2u, 2);  /* 0C0699D0 mov.l @(disp,pc),Rn */
	r2 = 0xC3C848Eu; UPD(0x0C0699D4u, 1);  /* 0C0699D2 mov.l @(disp,pc),Rn */
	IF(0x0C0699D4u); W16(r0 + r7, r1); UPD(0x0C0699D6u, 1);  /* 0C0699D4 mov.w Rm,@(r0,Rn) */
	{ IF(0x0C0699D8u); W16(r0 + r6, r3); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C069930u, 3); goto L_0C069930; }  /* 0C0699D6 bra */
L_0C0699E0: BLKS(0x0C0699E0u);
	{ r0 = r2; /* slot mov Rm,Rn */ UPD(0x0C0699ACu, 3); goto L_0C0699AC; }  /* 0C0699E0 bra */
}

/* FUN_0c069a20 */
void blk_f_0C069A20(sh3_t *c)
{
	LOCALS;
L_0C069A20: BLKS(0x0C069A20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C069A22u, 1);  /* 0C069A20 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C069A22 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C069A26u, 2);  /* 0C069A24 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C069A28u, 1);  /* 0C069A26 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C069A2Au, 1);  /* 0C069A28 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C069A2Cu, 1);  /* 0C069A2A mov.l Rm,@-Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r6 = v_; } UPD(0x0C069A2Eu, 1);  /* 0C069A2C mov.w @Rm+,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069A30u, 1);  /* 0C069A2E mov.l Rm,@-Rn */
	T = (r6 & r6) == 0;  /* 0C069A30 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C069A9Eu, 4); goto L_0C069A9E; } goto L_0C069A36; }  /* 0C069A32 bt/s */
L_0C069A36: BLKS(0x0C069A36u);
	r10 = 0xFFFF8400u; UPD(0x0C069A38u, 2);  /* 0C069A36 mov.w @(disp,pc),Rn */
	r4 += r4;  /* 0C069A38 add Rm,Rn */
	r12 = 0xC3BC3CCu; UPD(0x0C069A3Cu, 2);  /* 0C069A3A mov.l @(disp,pc),Rn */
	r11 = r10;  /* 0C069A3C mov Rm,Rn */
	r9 = 0xC2B016Cu; UPD(0x0C069A40u, 2);  /* 0C069A3E mov.l @(disp,pc),Rn */
	r4 += r12;  /* 0C069A40 add Rm,Rn */
	r8 = 0xC22E04Cu; UPD(0x0C069A44u, 2);  /* 0C069A42 mov.l @(disp,pc),Rn */
	r0 = 0xFFu; UPD(0x0C069A46u, 1);  /* 0C069A44 mov.w @(disp,pc),Rn */
	IF(0x0C069A46u); ;  /* 0C069A46 nop */
	UPD(0x0C069A48u, 1);
L_0C069A48: BLKS(0x0C069A48u);
	r2 = 0x400u; UPD(0x0C069A4Au, 1);  /* 0C069A48 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C069A4A mov #imm,Rn */
	W16(r4, r2); UPD(0x0C069A4Eu, 2);  /* 0C069A4C mov.w Rm,@Rn */
	r4 += 0x20u;  /* 0C069A4E add #imm,Rn */
	r3 = r7;  /* 0C069A50 mov Rm,Rn */
	UPD(0x0C069A52u, 2);
L_0C069A52: BLKS(0x0C069A52u);
	r3 += r3;  /* 0C069A52 add Rm,Rn */
	r2 = r3;  /* 0C069A54 mov Rm,Rn */
	r2 += r9;  /* 0C069A56 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C069A5Au, 4);  /* 0C069A58 mov.w @Rm,Rn */
	r1 = r1 & 0xFFFF;  /* 0C069A5A extu.w Rm,Rn */
	T = r1 == r6;  /* 0C069A5C cmp/eq Rm,Rn */
	if (T) { UPD(0x0C069AD0u, 5); goto L_0C069AD0; }  /* 0C069A5E bt */
L_0C069A60: BLKS(0x0C069A60u);
	r2 = r3;  /* 0C069A60 mov Rm,Rn */
	r2 += r8;  /* 0C069A62 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C069A66u, 3);  /* 0C069A64 mov.w @Rm,Rn */
	r3 = r1 & 0xFFFF;  /* 0C069A66 extu.w Rm,Rn */
	T = r3 == r6;  /* 0C069A68 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C069AC0u, 5); goto L_0C069AC0; }  /* 0C069A6A bt */
L_0C069A6C: BLKS(0x0C069A6Cu);
	r2 = r7;  /* 0C069A6C mov Rm,Rn */
	r2 += 0x1u;  /* 0C069A6E add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C069A70 exts.w Rm,Rn */
	T = (s32)r7 > (s32)r0;  /* 0C069A72 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C069A52u, 7); goto L_0C069A52; } goto L_0C069A78; }  /* 0C069A74 bf/s */
L_0C069A78: BLKS(0x0C069A78u);
	r3 = 0xC3C5454u; UPD(0x0C069A7Au, 2);  /* 0C069A78 mov.l @(disp,pc),Rn */
	r7 = 0xC2380B4u; UPD(0x0C069A7Cu, 1);  /* 0C069A7A mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C069A7Eu, 1);  /* 0C069A7C mov.w @Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C069A80u, 1);  /* 0C069A7E mov.w @Rm,Rn */
	r7 = r3 & 0xFFFF;  /* 0C069A80 extu.w Rm,Rn */
	r3 = r2 & 0xFFFF;  /* 0C069A82 extu.w Rm,Rn */
	IF(0x0C069A84u); r3 <<= 2;  /* 0C069A84 shll2 Rn */
	IF(0x0C069A86u); r3 <<= 2;  /* 0C069A86 shll2 Rn */
	r3 += r7;  /* 0C069A88 add Rm,Rn */
	r3 += r3;  /* 0C069A8A add Rm,Rn */
	r3 += r12;  /* 0C069A8C add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C069A90u, 8);  /* 0C069A8E mov.w @Rm,Rn */
	r7 = 0x3FFFu; UPD(0x0C069A92u, 1);  /* 0C069A90 mov.w @(disp,pc),Rn */
	r2 &= r7;  /* 0C069A92 and Rm,Rn */
	T = r2 == r6;  /* 0C069A94 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C069AB0u, 5); goto L_0C069AB0; }  /* 0C069A96 bt */
L_0C069A98: BLKS(0x0C069A98u);
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r6 = v_; } UPD(0x0C069A9Au, 1);  /* 0C069A98 mov.w @Rm+,Rn */
	T = (r6 & r6) == 0;  /* 0C069A9A tst Rm,Rn */
	if (!T) { UPD(0x0C069A48u, 4); goto L_0C069A48; }  /* 0C069A9C bf */
L_0C069A9E: BLKS(0x0C069A9Eu);
	r15 = r14;  /* 0C069A9E mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069AA2u, 2);  /* 0C069AA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C069AA4u, 1);  /* 0C069AA2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C069AA6u, 1);  /* 0C069AA4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C069AA8u, 1);  /* 0C069AA6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C069AAAu, 1);  /* 0C069AA8 mov.l @Rm+,Rn */
	IF(0x0C069AAAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C069AAA rts */
L_0C069AB0: BLKS(0x0C069AB0u);
	{ W16(r3, r2); /* slot mov.w Rm,@Rn */ UPD(0x0C069A98u, 3); goto L_0C069A98; }  /* 0C069AB0 bra */
L_0C069AC0: BLKS(0x0C069AC0u);
	{ W16(r2, r11); /* slot mov.w Rm,@Rn */ UPD(0x0C069A6Cu, 3); goto L_0C069A6C; }  /* 0C069AC0 bra */
L_0C069AD0: BLKS(0x0C069AD0u);
	{ W16(r2, r10); /* slot mov.w Rm,@Rn */ UPD(0x0C069A60u, 3); goto L_0C069A60; }  /* 0C069AD0 bra */
}

/* FUN_0c069af0 */
void blk_f_0C069AF0(sh3_t *c)
{
	LOCALS;
L_0C069AF0: BLKS(0x0C069AF0u);
	r6 = 0x1FFu; UPD(0x0C069AF2u, 1);  /* 0C069AF0 mov.w @(disp,pc),Rn */
	r0 = r4;  /* 0C069AF2 mov Rm,Rn */
	r0 &= r6;  /* 0C069AF4 and Rm,Rn */
	r3 = 0xC0C4468u; UPD(0x0C069AF8u, 3);  /* 0C069AF6 mov.l @(disp,pc),Rn */
	IF(0x0C069AF8u); r0 <<= 2;  /* 0C069AF8 shll2 Rn */
	r4 = 0xFFFFFFFCu;  /* 0C069AFA mov #imm,Rn */
	IF(0x0C069AFCu); r2 = R32(r0 + r3); UPD(0x0C069AFEu, 3);  /* 0C069AFC mov.l @(r0,Rm),Rn */
	IF(0x0C069AFEu); ARG0(0x454Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C069AFE shad Rm,Rn */
	IF(0x0C069B00u); MACL = r2 * r5;  /* 0C069B00 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069B04u, 4);  /* 0C069B02 mov.l Rm,@-Rn */
	IF(0x0C069B04u); r0 = MACL;  /* 0C069B04 sts macl,Rn */
	r2 = 0xFFFFFFF8u;  /* 0C069B06 mov #imm,Rn */
	IF(0x0C069B08u); ARG0(0x402Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C069B08 shad Rm,Rn */
	r14 = r15;  /* 0C069B0A mov Rm,Rn */
	r15 = r14;  /* 0C069B0C mov Rm,Rn */
	IF(0x0C069B0Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 8); RET(t_); }  /* 0C069B0E rts */
}

/* FUN_0c069b20 */
void blk_f_0C069B20(sh3_t *c)
{
	LOCALS;
L_0C069B20: BLKS(0x0C069B20u);
	r7 = 0x80u; UPD(0x0C069B22u, 1);  /* 0C069B20 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C069B22 exts.w Rm,Rn */
	r6 = 0x1FFu; UPD(0x0C069B26u, 2);  /* 0C069B24 mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C069B26 add Rm,Rn */
	r0 &= r6;  /* 0C069B28 and Rm,Rn */
	r3 = 0xC0C4468u; UPD(0x0C069B2Cu, 3);  /* 0C069B2A mov.l @(disp,pc),Rn */
	IF(0x0C069B2Cu); r0 <<= 2;  /* 0C069B2C shll2 Rn */
	r4 = 0xFFFFFFFCu;  /* 0C069B2E mov #imm,Rn */
	IF(0x0C069B30u); r2 = R32(r0 + r3); UPD(0x0C069B32u, 3);  /* 0C069B30 mov.l @(r0,Rm),Rn */
	IF(0x0C069B32u); ARG0(0x454Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C069B32 shad Rm,Rn */
	IF(0x0C069B34u); MACL = r2 * r5;  /* 0C069B34 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069B38u, 4);  /* 0C069B36 mov.l Rm,@-Rn */
	IF(0x0C069B38u); r0 = MACL;  /* 0C069B38 sts macl,Rn */
	r2 = 0xFFFFFFF8u;  /* 0C069B3A mov #imm,Rn */
	IF(0x0C069B3Cu); ARG0(0x402Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C069B3C shad Rm,Rn */
	r14 = r15;  /* 0C069B3E mov Rm,Rn */
	r15 = r14;  /* 0C069B40 mov Rm,Rn */
	IF(0x0C069B42u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 8); RET(t_); }  /* 0C069B42 rts */
}

/* FUN_0c069b50 */
void blk_f_0C069B50(sh3_t *c)
{
	LOCALS;
L_0C069B50: BLKS(0x0C069B50u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069B52u, 1);  /* 0C069B50 mov.l Rm,@-Rn */
	r0 = 0xC0C2360u; UPD(0x0C069B54u, 1);  /* 0C069B52 mov.l @(disp,pc),Rn */
	IF(0x0C069B54u); r15 -= 4; W32(r15, PR); UPD(0x0C069B56u, 1);  /* 0C069B54 sts.l pr,@-Rn */
	IF(0x0C069B56u); { u32 t_ = r0; PR = 0x0C069B5Au; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C069B5Au); }  /* 0C069B56 jsr @Rn */
L_0C069B5A: BLKS(0x0C069B5Au);
	r3 = r0;  /* 0C069B5A mov Rm,Rn */
	r0 = 0x2A0u; UPD(0x0C069B5Eu, 2);  /* 0C069B5C mov.w @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C069B5E mov #imm,Rn */
	r3 &= r5;  /* 0C069B60 and Rm,Rn */
	IF(0x0C069B62u); MACL = r3 * r0;  /* 0C069B62 mul.l Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C069B66u, 5);  /* 0C069B64 mov.l @(disp,pc),Rn */
	IF(0x0C069B66u); r0 = MACL;  /* 0C069B66 sts macl,Rn */
	IF(0x0C069B68u); r4 = R32(r0 + r2); UPD(0x0C069B6Au, 2);  /* 0C069B68 mov.l @(r0,Rm),Rn */
	r0 = 0x4000000u; UPD(0x0C069B6Cu, 1);  /* 0C069B6A mov.l @(disp,pc),Rn */
	T = (r4 & r0) == 0;  /* 0C069B6C tst Rm,Rn */
	{ u32 c_ = !T; r6 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069B74u, 4); goto L_0C069B74; } goto L_0C069B72; }  /* 0C069B6E bf/s */
L_0C069B72: BLKS(0x0C069B72u);
	r3 ^= r6;  /* 0C069B72 xor Rm,Rn */
	UPD(0x0C069B74u, 2);
L_0C069B74: BLKS(0x0C069B74u);
	r0 = r3;  /* 0C069B74 mov Rm,Rn */
	r15 = r14;  /* 0C069B76 mov Rm,Rn */
	IF(0x0C069B78u); PR = R32(r15); r15 += 4; UPD(0x0C069B7Au, 3);  /* 0C069B78 lds.l @Rn+,pr */
	IF(0x0C069B7Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C069B7A rts */
}

/* FUN_0c069b90 */
void blk_f_0C069B90(sh3_t *c)
{
	LOCALS;
L_0C069B90: BLKS(0x0C069B90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C069B92u, 1);  /* 0C069B90 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069B94u, 1);  /* 0C069B92 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C069B94 exts.w Rm,Rn */
	r0 = 0xC0C2360u; UPD(0x0C069B98u, 2);  /* 0C069B96 mov.l @(disp,pc),Rn */
	IF(0x0C069B98u); r15 -= 4; W32(r15, PR); UPD(0x0C069B9Au, 1);  /* 0C069B98 sts.l pr,@-Rn */
	IF(0x0C069B9Au); { u32 t_ = r0; PR = 0x0C069B9Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C069B9Eu); }  /* 0C069B9A jsr @Rn */
L_0C069B9E: BLKS(0x0C069B9Eu);
	r3 = r0;  /* 0C069B9E mov Rm,Rn */
	r0 = 0x2A0u; UPD(0x0C069BA2u, 2);  /* 0C069BA0 mov.w @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C069BA2 mov #imm,Rn */
	r3 &= r5;  /* 0C069BA4 and Rm,Rn */
	IF(0x0C069BA6u); MACL = r3 * r0;  /* 0C069BA6 mul.l Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C069BAAu, 5);  /* 0C069BA8 mov.l @(disp,pc),Rn */
	IF(0x0C069BAAu); r0 = MACL;  /* 0C069BAA sts macl,Rn */
	IF(0x0C069BACu); r4 = R32(r0 + r2); UPD(0x0C069BAEu, 2);  /* 0C069BAC mov.l @(r0,Rm),Rn */
	r0 = 0x4000000u; UPD(0x0C069BB0u, 1);  /* 0C069BAE mov.l @(disp,pc),Rn */
	T = (r4 & r0) == 0;  /* 0C069BB0 tst Rm,Rn */
	{ u32 c_ = !T; r6 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069BB8u, 4); goto L_0C069BB8; } goto L_0C069BB6; }  /* 0C069BB2 bf/s */
L_0C069BB6: BLKS(0x0C069BB6u);
	r3 ^= r6;  /* 0C069BB6 xor Rm,Rn */
	UPD(0x0C069BB8u, 2);
L_0C069BB8: BLKS(0x0C069BB8u);
	r4 = 0xB4u; UPD(0x0C069BBAu, 1);  /* 0C069BB8 mov.w @(disp,pc),Rn */
	IF(0x0C069BBAu); MACL = r8 * r4;  /* 0C069BBA mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C069BBEu, 3);  /* 0C069BBC mov.l @(disp,pc),Rn */
	IF(0x0C069BBEu); r8 = MACL;  /* 0C069BBE sts macl,Rn */
	r0 = 0x9Eu; UPD(0x0C069BC2u, 2);  /* 0C069BC0 mov.w @(disp,pc),Rn */
	r7 += r8;  /* 0C069BC2 add Rm,Rn */
	IF(0x0C069BC4u); W8(r0 + r7, r3); UPD(0x0C069BC6u, 2);  /* 0C069BC4 mov.b Rm,@(r0,Rn) */
	r0 = r3;  /* 0C069BC6 mov Rm,Rn */
	r15 = r14;  /* 0C069BC8 mov Rm,Rn */
	IF(0x0C069BCAu); PR = R32(r15); r15 += 4; UPD(0x0C069BCCu, 3);  /* 0C069BCA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069BCEu, 1);  /* 0C069BCC mov.l @Rm+,Rn */
	IF(0x0C069BCEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C069BCE rts */
}

/* FUN_0c069bf0 */
void blk_f_0C069BF0(sh3_t *c)
{
	LOCALS;
L_0C069BF0: BLKS(0x0C069BF0u);
	r6 = 0xB4u; UPD(0x0C069BF2u, 1);  /* 0C069BF0 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r4;  /* 0C069BF2 exts.w Rm,Rn */
	IF(0x0C069BF4u); MACL = r7 * r6;  /* 0C069BF4 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C069BF8u, 4);  /* 0C069BF6 mov.l @(disp,pc),Rn */
	IF(0x0C069BF8u); r7 = MACL;  /* 0C069BF8 sts macl,Rn */
	r3 = 0x9Eu; UPD(0x0C069BFCu, 2);  /* 0C069BFA mov.w @(disp,pc),Rn */
	r7 += r5;  /* 0C069BFC add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069C00u, 2);  /* 0C069BFE mov.l Rm,@-Rn */
	r7 += r3;  /* 0C069C00 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C069C04u, 2);  /* 0C069C02 mov.b @Rm,Rn */
	r3 = 0x1u;  /* 0C069C04 mov #imm,Rn */
	r0 = 0x2A0u; UPD(0x0C069C08u, 2);  /* 0C069C06 mov.w @(disp,pc),Rn */
	r3 &= r1;  /* 0C069C08 and Rm,Rn */
	IF(0x0C069C0Au); MACL = r3 * r0;  /* 0C069C0A mul.l Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C069C0Eu, 4);  /* 0C069C0C mov.l @(disp,pc),Rn */
	IF(0x0C069C0Eu); r0 = MACL;  /* 0C069C0E sts macl,Rn */
	IF(0x0C069C10u); r4 = R32(r0 + r2); UPD(0x0C069C12u, 2);  /* 0C069C10 mov.l @(r0,Rm),Rn */
	r0 = 0x4000000u; UPD(0x0C069C14u, 1);  /* 0C069C12 mov.l @(disp,pc),Rn */
	T = (r4 & r0) == 0;  /* 0C069C14 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C069C1Eu, 4); goto L_0C069C1E; } goto L_0C069C1A; }  /* 0C069C16 bf/s */
L_0C069C1A: BLKS(0x0C069C1Au);
	r4 = 0x1u;  /* 0C069C1A mov #imm,Rn */
	r3 ^= r4;  /* 0C069C1C xor Rm,Rn */
	UPD(0x0C069C1Eu, 3);
L_0C069C1E: BLKS(0x0C069C1Eu);
	W8(r7, r3); UPD(0x0C069C20u, 1);  /* 0C069C1E mov.b Rm,@Rn */
	r0 = r3;  /* 0C069C20 mov Rm,Rn */
	r15 = r14;  /* 0C069C22 mov Rm,Rn */
	IF(0x0C069C24u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C069C24 rts */
}

/* FUN_0c069c40 */
void blk_f_0C069C40(sh3_t *c)
{
	LOCALS;
L_0C069C40: BLKS(0x0C069C40u);
	r0 = 0xB4u; UPD(0x0C069C42u, 1);  /* 0C069C40 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C069C42 exts.w Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C069C46u, 2);  /* 0C069C44 mov.l Rm,@-Rn */
	IF(0x0C069C46u); MACL = r1 * r0;  /* 0C069C46 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069C4Au, 3);  /* 0C069C48 mov.l Rm,@-Rn */
	r7 = 0xC286578u; UPD(0x0C069C4Cu, 1);  /* 0C069C4A mov.l @(disp,pc),Rn */
	IF(0x0C069C4Cu); r0 = MACL;  /* 0C069C4C sts macl,Rn */
	IF(0x0C069C4Eu); r15 -= 4; W32(r15, PR); UPD(0x0C069C50u, 2);  /* 0C069C4E sts.l pr,@-Rn */
	r0 += r7;  /* 0C069C50 add Rm,Rn */
	r6 = 0x9Eu; UPD(0x0C069C54u, 2);  /* 0C069C52 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C069C54 mov Rm,Rn */
	IF(0x0C069C56u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C069C58u, 2);  /* 0C069C56 mov.b @(r0,Rm),Rn */
	r3 = 0x2A0u; UPD(0x0C069C5Au, 1);  /* 0C069C58 mov.w @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C069C5A extu.b Rm,Rn */
	IF(0x0C069C5Cu); MACL = r4 * r3;  /* 0C069C5C mul.l Rm,Rn */
	r8 = 0x86u; UPD(0x0C069C60u, 4);  /* 0C069C5E mov.w @(disp,pc),Rn */
	r4 = R32(r0 + 0x24u); UPD(0x0C069C62u, 1);  /* 0C069C60 mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C069C62 add Rm,Rn */
	r5 = R32(r0 + 0x28u); UPD(0x0C069C66u, 2);  /* 0C069C64 mov.l @(disp,Rm),Rn */
	IF(0x0C069C66u); r3 = MACL;  /* 0C069C66 sts macl,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C069C6Au, 2);  /* 0C069C68 mov.l @(disp,pc),Rn */
	r0 = 0xC068E60u; UPD(0x0C069C6Cu, 1);  /* 0C069C6A mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C069C6C add Rm,Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C069C70u, 2);  /* 0C069C6E mov.l @(disp,Rm),Rn */
	IF(0x0C069C70u); { u32 t_ = r0; PR = 0x0C069C74u; r7 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C069C74u); }  /* 0C069C70 jsr @Rn */
L_0C069C74: BLKS(0x0C069C74u);
	W16(r8, r0); UPD(0x0C069C76u, 1);  /* 0C069C74 mov.w Rm,@Rn */
	r15 = r14;  /* 0C069C76 mov Rm,Rn */
	IF(0x0C069C78u); PR = R32(r15); r15 += 4; UPD(0x0C069C7Au, 2);  /* 0C069C78 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069C7Cu, 1);  /* 0C069C7A mov.l @Rm+,Rn */
	IF(0x0C069C7Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C069C7C rts */
}

/* FUN_0c069d00 */
void blk_f_0C069D00(sh3_t *c)
{
	LOCALS;
L_0C069D00: BLKS(0x0C069D00u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C069D02u, 1);  /* 0C069D00 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C069D02 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C069D06u, 2);  /* 0C069D04 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C069D06 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069D0Au, 2);  /* 0C069D08 mov.l Rm,@-Rn */
	r7 = 0xFu;  /* 0C069D0A mov #imm,Rn */
	r6 = 0x400u; UPD(0x0C069D0Eu, 2);  /* 0C069D0C mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C069D0E mov Rm,Rn */
	r9 = 0xC3BC3CCu; UPD(0x0C069D12u, 2);  /* 0C069D10 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C069D12 mov #imm,Rn */
	r8 = 0x1Fu;  /* 0C069D14 mov #imm,Rn */
	IF(0x0C069D16u); ;  /* 0C069D16 nop */
	UPD(0x0C069D18u, 3);
L_0C069D18: BLKS(0x0C069D18u);
	r2 = r5;  /* 0C069D18 mov Rm,Rn */
	r2 += r2;  /* 0C069D1A add Rm,Rn */
	r3 = 0x0u;  /* 0C069D1C mov #imm,Rn */
	r2 += r9;  /* 0C069D1E add Rm,Rn */
	UPD(0x0C069D20u, 4);
L_0C069D20: BLKS(0x0C069D20u);
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r1 = v_; } UPD(0x0C069D22u, 1);  /* 0C069D20 mov.w @Rm+,Rn */
	T = r1 == r6;  /* 0C069D22 cmp/eq Rm,Rn */
	{ u32 c_ = T; r1 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C069D2Cu, 4); goto L_0C069D2C; } goto L_0C069D28; }  /* 0C069D24 bt/s */
L_0C069D28: BLKS(0x0C069D28u);
	r1 += 0x1u;  /* 0C069D28 add #imm,Rn */
	r0 = (u32)(s32)(s16)r1;  /* 0C069D2A exts.w Rm,Rn */
	UPD(0x0C069D2Cu, 3);
L_0C069D2C: BLKS(0x0C069D2Cu);
	r1 = r3;  /* 0C069D2C mov Rm,Rn */
	r1 += 0x1u;  /* 0C069D2E add #imm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C069D30 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r7;  /* 0C069D32 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C069D20u, 7); goto L_0C069D20; }  /* 0C069D34 bf */
L_0C069D36: BLKS(0x0C069D36u);
	r2 = r4;  /* 0C069D36 mov Rm,Rn */
	r2 += 0x1u;  /* 0C069D38 add #imm,Rn */
	r4 = (u32)(s32)(s16)r2;  /* 0C069D3A exts.w Rm,Rn */
	T = (s32)r4 > (s32)r8;  /* 0C069D3C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r5 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C069D18u, 7); goto L_0C069D18; } goto L_0C069D42; }  /* 0C069D3E bf/s */
L_0C069D42: BLKS(0x0C069D42u);
	r15 = r14;  /* 0C069D42 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069D46u, 3);  /* 0C069D44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C069D48u, 1);  /* 0C069D46 mov.l @Rm+,Rn */
	IF(0x0C069D48u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C069D48 rts */
}

/* FUN_0c069e60 */
void blk_f_0C069E60(sh3_t *c)
{
	LOCALS;
L_0C069E60: BLKS(0x0C069E60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C069E62u, 1);  /* 0C069E60 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C069E62 exts.w Rm,Rn */
	r0 = 0xC1DD458u; UPD(0x0C069E66u, 2);  /* 0C069E64 mov.l @(disp,pc),Rn */
	IF(0x0C069E66u); r1 <<= 2;  /* 0C069E66 shll2 Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069E6Au, 2);  /* 0C069E68 mov.l Rm,@-Rn */
	r1 += r1;  /* 0C069E6A add Rm,Rn */
	r0 += r1;  /* 0C069E6C add Rm,Rn */
	r2 = R32(r0 + 0x4u); UPD(0x0C069E70u, 3);  /* 0C069E6E mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r1 = v_; } UPD(0x0C069E72u, 1);  /* 0C069E70 mov.w @Rm+,Rn */
	T = (r1 & r1) == 0;  /* 0C069E72 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C069E9Cu, 4); goto L_0C069E9C; } goto L_0C069E78; }  /* 0C069E74 bt/s */
L_0C069E78: BLKS(0x0C069E78u);
	r5 = 0xC3BC3CCu; UPD(0x0C069E7Au, 2);  /* 0C069E78 mov.l @(disp,pc),Rn */
	r6 = 0xC2A6944u; UPD(0x0C069E7Cu, 1);  /* 0C069E7A mov.l @(disp,pc),Rn */
	r7 = 0xC23949Cu; UPD(0x0C069E7Eu, 1);  /* 0C069E7C mov.l @(disp,pc),Rn */
	r3 = 0x400u; UPD(0x0C069E80u, 1);  /* 0C069E7E mov.w @(disp,pc),Rn */
	r0 = r6;  /* 0C069E80 mov Rm,Rn */
	UPD(0x0C069E82u, 1);
L_0C069E82: BLKS(0x0C069E82u);
	IF(0x0C069E82u); r8 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C069E84u, 1);  /* 0C069E82 mov.b @(r0,Rm),Rn */
	r0 = r7;  /* 0C069E84 mov Rm,Rn */
	IF(0x0C069E86u); r1 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C069E88u, 2);  /* 0C069E86 mov.b @(r0,Rm),Rn */
	r0 = 0x4u;  /* 0C069E88 mov #imm,Rn */
	IF(0x0C069E8Au); ARG0(0x480Du); { s32 s_ = (s32)r0; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C069E8A shld Rm,Rn */
	r8 += r1;  /* 0C069E8C add Rm,Rn */
	r8 += r8;  /* 0C069E8E add Rm,Rn */
	r0 = r8;  /* 0C069E90 mov Rm,Rn */
	IF(0x0C069E92u); W16(r0 + r5, r3); UPD(0x0C069E94u, 6);  /* 0C069E92 mov.w Rm,@(r0,Rn) */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r1 = v_; } UPD(0x0C069E96u, 1);  /* 0C069E94 mov.w @Rm+,Rn */
	T = (r1 & r1) == 0;  /* 0C069E96 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C069E82u, 4); goto L_0C069E82; } UPD(0x0C069E9Cu, 1); goto L_0C069E9C; }  /* 0C069E98 bf/s */
L_0C069E9C: BLKS(0x0C069E9Cu);
	r15 = r14;  /* 0C069E9C mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069EA0u, 2);  /* 0C069E9E mov.l @Rm+,Rn */
	IF(0x0C069EA0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C069EA0 rts */
}

/* FUN_0c069f40 */
void blk_f_0C069F40(sh3_t *c)
{
	LOCALS;
L_0C069F40: BLKS(0x0C069F40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C069F42u, 1);  /* 0C069F40 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C069F44u, 1);  /* 0C069F42 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C069F44 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069F48u, 2);  /* 0C069F46 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C069F48 exts.w Rm,Rn */
	r0 = 0xC069480u; UPD(0x0C069F4Cu, 2);  /* 0C069F4A mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C069F4C mov Rm,Rn */
	IF(0x0C069F4Eu); r15 -= 4; W32(r15, PR); UPD(0x0C069F50u, 2);  /* 0C069F4E sts.l pr,@-Rn */
	IF(0x0C069F50u); { u32 t_ = r0; PR = 0x0C069F54u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069480, 0x0C069480u, 0x0C069F54u); }  /* 0C069F50 jsr @Rn */
L_0C069F54: BLKS(0x0C069F54u);
	T = (r0 & r0) == 0;  /* 0C069F54 tst Rm,Rn */
	if (T) { UPD(0x0C069F80u, 4); goto L_0C069F80; }  /* 0C069F56 bt */
L_0C069F58: BLKS(0x0C069F58u);
	r3 = 0xC2A6944u; UPD(0x0C069F5Au, 1);  /* 0C069F58 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C069F5A mov Rm,Rn */
	IF(0x0C069F5Cu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C069F5Eu, 2);  /* 0C069F5C mov.b @(r0,Rm),Rn */
	r2 = 0xC23949Cu; UPD(0x0C069F60u, 1);  /* 0C069F5E mov.l @(disp,pc),Rn */
	IF(0x0C069F60u); r7 <<= 16;  /* 0C069F60 shll16 Rn */
	r0 = r2;  /* 0C069F62 mov Rm,Rn */
	IF(0x0C069F64u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C069F66u, 3);  /* 0C069F64 mov.b @(r0,Rm),Rn */
	r7 |= r2;  /* 0C069F66 or Rm,Rn */
	UPD(0x0C069F68u, 1);
L_0C069F68: BLKS(0x0C069F68u);
	r0 = r7;  /* 0C069F68 mov Rm,Rn */
	r15 = r14;  /* 0C069F6A mov Rm,Rn */
	IF(0x0C069F6Cu); PR = R32(r15); r15 += 4; UPD(0x0C069F6Eu, 3);  /* 0C069F6C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069F70u, 1);  /* 0C069F6E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C069F72u, 1);  /* 0C069F70 mov.l @Rm+,Rn */
	IF(0x0C069F72u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C069F72 rts */
L_0C069F80: BLKS(0x0C069F80u);
	r0 = 0xC0693A0u; UPD(0x0C069F82u, 1);  /* 0C069F80 mov.l @(disp,pc),Rn */
	IF(0x0C069F82u); { u32 t_ = r0; PR = 0x0C069F86u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0693A0, 0x0C0693A0u, 0x0C069F86u); }  /* 0C069F82 jsr @Rn */
L_0C069F86: BLKS(0x0C069F86u);
	T = (r0 & r0) == 0;  /* 0C069F86 tst Rm,Rn */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069F68u, 4); goto L_0C069F68; } goto L_0C069F8C; }  /* 0C069F88 bt/s */
L_0C069F8C: BLKS(0x0C069F8Cu);
	r6 = 0x400u; UPD(0x0C069F8Eu, 2);  /* 0C069F8C mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C069F8E mov #imm,Rn */
	r7 = 0xFFu; UPD(0x0C069F92u, 2);  /* 0C069F90 mov.w @(disp,pc),Rn */
	r3 = 0xC2B016Cu; UPD(0x0C069F94u, 1);  /* 0C069F92 mov.l @(disp,pc),Rn */
	r5 = 0x3FFFu; UPD(0x0C069F96u, 1);  /* 0C069F94 mov.w @(disp,pc),Rn */
	IF(0x0C069F96u); ;  /* 0C069F96 nop */
	UPD(0x0C069F98u, 1);
L_0C069F98: BLKS(0x0C069F98u);
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C069F9Au, 1);  /* 0C069F98 mov.w @Rm+,Rn */
	r0 &= r5;  /* 0C069F9A and Rm,Rn */
	T = r0 == r6;  /* 0C069F9C cmp/eq Rm,Rn */
	{ u32 c_ = T; r4 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C069FF0u, 5); goto L_0C069FF0; } goto L_0C069FA2; }  /* 0C069F9E bt/s */
L_0C069FA2: BLKS(0x0C069FA2u);
	r4 += 0x1u;  /* 0C069FA2 add #imm,Rn */
	r2 = (u32)(s32)(s16)r4;  /* 0C069FA4 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r7;  /* 0C069FA6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C069F98u, 7); goto L_0C069F98; }  /* 0C069FA8 bf */
L_0C069FAA: BLKS(0x0C069FAAu);
	r0 = 0x100u; UPD(0x0C069FACu, 1);  /* 0C069FAA mov.w @(disp,pc),Rn */
L_0C069FAC: BLKS(0x0C069FACu);
	r5 = 0xFFu; UPD(0x0C069FAEu, 1);  /* 0C069FAC mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C069FAE exts.w Rm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C069FB0 cmp/gt Rm,Rn */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069F68u, 5); goto L_0C069F68; } goto L_0C069FB6; }  /* 0C069FB2 bt/s */
L_0C069FB6: BLKS(0x0C069FB6u);
	r0 = r3;  /* 0C069FB6 mov Rm,Rn */
	r6 = 0xC2B016Cu; UPD(0x0C069FBAu, 3);  /* 0C069FB8 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C069FBA add Rm,Rn */
	IF(0x0C069FBCu); W16(r0 + r6, r8); UPD(0x0C069FBEu, 2);  /* 0C069FBC mov.w Rm,@(r0,Rn) */
	r7 = 0xC28EDFCu; UPD(0x0C069FC0u, 1);  /* 0C069FBE mov.l @(disp,pc),Rn */
	r2 = 0xC2289F4u; UPD(0x0C069FC2u, 1);  /* 0C069FC0 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r4 = v_; } UPD(0x0C069FC4u, 1);  /* 0C069FC2 mov.w @Rm+,Rn */
	IF(0x0C069FC4u); W16(r0 + r2, r4); UPD(0x0C069FC6u, 1);  /* 0C069FC4 mov.w Rm,@(r0,Rn) */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C069FC8u, 1);  /* 0C069FC6 mov.w @Rm,Rn */
	r5 = 0xC23C8A0u; UPD(0x0C069FCAu, 1);  /* 0C069FC8 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r6;  /* 0C069FCA exts.w Rm,Rn */
	r7 = 0xC2287D8u; UPD(0x0C069FCEu, 2);  /* 0C069FCC mov.l @(disp,pc),Rn */
	r1 = r6 & 0xFFFF;  /* 0C069FCE extu.w Rm,Rn */
	IF(0x0C069FD0u); W16(r0 + r7, r9); UPD(0x0C069FD2u, 2);  /* 0C069FD0 mov.w Rm,@(r0,Rn) */
	IF(0x0C069FD2u); W16(r0 + r5, r6); UPD(0x0C069FD4u, 1);  /* 0C069FD2 mov.w Rm,@(r0,Rn) */
	r0 = (u32)(s32)(s16)r4;  /* 0C069FD4 exts.w Rm,Rn */
	IF(0x0C069FD6u); r0 <<= 2;  /* 0C069FD6 shll2 Rn */
	IF(0x0C069FD8u); r0 <<= 2;  /* 0C069FD8 shll2 Rn */
	r9 = 0xFFFF8000u; UPD(0x0C069FDCu, 4);  /* 0C069FDA mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C069FDC add Rm,Rn */
	r7 = 0xC3BC3CCu; UPD(0x0C069FE0u, 2);  /* 0C069FDE mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C069FE0 add Rm,Rn */
	r8 |= r9;  /* 0C069FE2 or Rm,Rn */
	IF(0x0C069FE4u); W16(r0 + r7, r8); UPD(0x0C069FE6u, 3);  /* 0C069FE4 mov.w Rm,@(r0,Rn) */
	r7 = r4;  /* 0C069FE6 mov Rm,Rn */
	IF(0x0C069FE8u); r7 <<= 16;  /* 0C069FE8 shll16 Rn */
	{ r7 |= r1; /* slot or Rm,Rn */ UPD(0x0C069F68u, 5); goto L_0C069F68; }  /* 0C069FEA bra */
L_0C069FF0: BLKS(0x0C069FF0u);
	{ r0 = r2; /* slot mov Rm,Rn */ UPD(0x0C069FACu, 3); goto L_0C069FAC; }  /* 0C069FF0 bra */
}

/* FUN_0c06a070 */
void blk_f_0C06A070(sh3_t *c)
{
	LOCALS;
L_0C06A070: BLKS(0x0C06A070u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06A072u, 1);  /* 0C06A070 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C06A072 exts.w Rm,Rn */
	r0 = 0xC1DD458u; UPD(0x0C06A076u, 2);  /* 0C06A074 mov.l @(disp,pc),Rn */
	IF(0x0C06A076u); r1 <<= 2;  /* 0C06A076 shll2 Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A07Au, 2);  /* 0C06A078 mov.l Rm,@-Rn */
	r1 += r1;  /* 0C06A07A add Rm,Rn */
	r0 += r1;  /* 0C06A07C add Rm,Rn */
	r2 = R32(r0 + 0x4u); UPD(0x0C06A080u, 3);  /* 0C06A07E mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r0 = v_; } UPD(0x0C06A082u, 1);  /* 0C06A080 mov.w @Rm+,Rn */
	T = (r0 & r0) == 0;  /* 0C06A082 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06A0ACu, 4); goto L_0C06A0AC; } goto L_0C06A088; }  /* 0C06A084 bt/s */
L_0C06A088: BLKS(0x0C06A088u);
	r7 = 0xC23949Cu; UPD(0x0C06A08Au, 2);  /* 0C06A088 mov.l @(disp,pc),Rn */
	r3 = 0x7u;  /* 0C06A08A mov #imm,Rn */
	r4 = 0xC3BC3CCu; UPD(0x0C06A08Eu, 2);  /* 0C06A08C mov.l @(disp,pc),Rn */
	r5 = 0xC2A6944u; UPD(0x0C06A090u, 1);  /* 0C06A08E mov.l @(disp,pc),Rn */
	r6 = 0x400u; UPD(0x0C06A092u, 1);  /* 0C06A090 mov.w @(disp,pc),Rn */
	IF(0x0C06A092u); ;  /* 0C06A092 nop */
	UPD(0x0C06A094u, 1);
L_0C06A094: BLKS(0x0C06A094u);
	IF(0x0C06A094u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C06A096u, 1);  /* 0C06A094 mov.b @(r0,Rm),Rn */
	T = (s32)r1 > (s32)r3;  /* 0C06A096 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06A0A6u, 4); goto L_0C06A0A6; }  /* 0C06A098 bf */
L_0C06A09A: BLKS(0x0C06A09Au);
	IF(0x0C06A09Au); r0 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C06A09Cu, 1);  /* 0C06A09A mov.b @(r0,Rm),Rn */
	r8 = 0x4u;  /* 0C06A09C mov #imm,Rn */
	IF(0x0C06A09Eu); ARG0(0x408Du); { s32 s_ = (s32)r8; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06A09E shld Rm,Rn */
	r0 += r1;  /* 0C06A0A0 add Rm,Rn */
	r0 += r0;  /* 0C06A0A2 add Rm,Rn */
	IF(0x0C06A0A4u); W16(r0 + r4, r6); UPD(0x0C06A0A6u, 5);  /* 0C06A0A4 mov.w Rm,@(r0,Rn) */
L_0C06A0A6: BLKS(0x0C06A0A6u);
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r0 = v_; } UPD(0x0C06A0A8u, 1);  /* 0C06A0A6 mov.w @Rm+,Rn */
	T = (r0 & r0) == 0;  /* 0C06A0A8 tst Rm,Rn */
	if (!T) { UPD(0x0C06A094u, 4); goto L_0C06A094; }  /* 0C06A0AA bf */
L_0C06A0AC: BLKS(0x0C06A0ACu);
	r15 = r14;  /* 0C06A0AC mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06A0B0u, 2);  /* 0C06A0AE mov.l @Rm+,Rn */
	IF(0x0C06A0B0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06A0B0 rts */
}

/* FUN_0c06a0d0 */
void blk_f_0C06A0D0(sh3_t *c)
{
	LOCALS;
L_0C06A0D0: BLKS(0x0C06A0D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06A0D2u, 1);  /* 0C06A0D0 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C06A0D2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06A0D6u, 2);  /* 0C06A0D4 mov.l Rm,@-Rn */
	IF(0x0C06A0D6u); r1 <<= 2;  /* 0C06A0D6 shll2 Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06A0DAu, 2);  /* 0C06A0D8 mov.l Rm,@-Rn */
	r1 += r1;  /* 0C06A0DA add Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06A0DEu, 2);  /* 0C06A0DC mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C06A0DE exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A0E2u, 2);  /* 0C06A0E0 mov.l Rm,@-Rn */
	r11 = 0x1u;  /* 0C06A0E2 mov #imm,Rn */
	r0 = 0xC1DD458u; UPD(0x0C06A0E6u, 2);  /* 0C06A0E4 mov.l @(disp,pc),Rn */
	IF(0x0C06A0E6u); r15 -= 4; W32(r15, PR); UPD(0x0C06A0E8u, 1);  /* 0C06A0E6 sts.l pr,@-Rn */
	r0 += r1;  /* 0C06A0E8 add Rm,Rn */
	r8 = R32(r0 + 0x4u); UPD(0x0C06A0ECu, 2);  /* 0C06A0EA mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C06A0EEu, 1);  /* 0C06A0EC mov.w @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C06A0EE tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06A10Au, 4); goto L_0C06A10A; } goto L_0C06A0F4; }  /* 0C06A0F0 bt/s */
L_0C06A0F4: BLKS(0x0C06A0F4u);
	r10 = 0xC069710u; UPD(0x0C06A0F6u, 2);  /* 0C06A0F4 mov.l @(disp,pc),Rn */
	IF(0x0C06A0F6u); ;  /* 0C06A0F6 nop */
	UPD(0x0C06A0F8u, 1);
L_0C06A0F8: BLKS(0x0C06A0F8u);
	r5 = 0x100u; UPD(0x0C06A0FAu, 1);  /* 0C06A0F8 mov.w @(disp,pc),Rn */
	IF(0x0C06A0FAu); { u32 t_ = r10; PR = 0x0C06A0FEu; r4 |= r9; /* slot or Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069710, 0x0C069710u, 0x0C06A0FEu); }  /* 0C06A0FA jsr @Rn */
L_0C06A0FE: BLKS(0x0C06A0FEu);
	T = (r0 & r0) == 0;  /* 0C06A0FE tst Rm,Rn */
	if (!T) { UPD(0x0C06A104u, 4); goto L_0C06A104; }  /* 0C06A100 bf */
L_0C06A102: BLKS(0x0C06A102u);
	r11 = 0x0u;  /* 0C06A102 mov #imm,Rn */
	UPD(0x0C06A104u, 1);
L_0C06A104: BLKS(0x0C06A104u);
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C06A106u, 1);  /* 0C06A104 mov.w @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C06A106 tst Rm,Rn */
	if (!T) { UPD(0x0C06A0F8u, 4); goto L_0C06A0F8; }  /* 0C06A108 bf */
L_0C06A10A: BLKS(0x0C06A10Au);
	r0 = r11;  /* 0C06A10A mov Rm,Rn */
	r15 = r14;  /* 0C06A10C mov Rm,Rn */
	IF(0x0C06A10Eu); PR = R32(r15); r15 += 4; UPD(0x0C06A110u, 3);  /* 0C06A10E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06A112u, 1);  /* 0C06A110 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06A114u, 1);  /* 0C06A112 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06A116u, 1);  /* 0C06A114 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06A118u, 1);  /* 0C06A116 mov.l @Rm+,Rn */
	IF(0x0C06A118u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06A118 rts */
}

/* FUN_0c06a130 */
void blk_f_0C06A130(sh3_t *c)
{
	LOCALS;
L_0C06A130: BLKS(0x0C06A130u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06A132u, 1);  /* 0C06A130 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06A134u, 1);  /* 0C06A132 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06A136u, 1);  /* 0C06A134 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C06A136 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A13Au, 2);  /* 0C06A138 mov.l Rm,@-Rn */
	r8 = 0xC069F40u; UPD(0x0C06A13Cu, 1);  /* 0C06A13A mov.l @(disp,pc),Rn */
	IF(0x0C06A13Cu); r15 -= 4; W32(r15, PR); UPD(0x0C06A13Eu, 1);  /* 0C06A13C sts.l pr,@-Rn */
	r14 = r15;  /* 0C06A13E mov Rm,Rn */
	UPD(0x0C06A140u, 1);
L_0C06A140: BLKS(0x0C06A140u);
	r5 = 0x100u; UPD(0x0C06A142u, 1);  /* 0C06A140 mov.w @(disp,pc),Rn */
	IF(0x0C06A142u); { u32 t_ = r8; PR = 0x0C06A146u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069F40, 0x0C069F40u, 0x0C06A146u); }  /* 0C06A142 jsr @Rn */
L_0C06A146: BLKS(0x0C06A146u);
	T = (r0 & r0) == 0;  /* 0C06A146 tst Rm,Rn */
	if (T) { UPD(0x0C06A140u, 4); goto L_0C06A140; }  /* 0C06A148 bt */
L_0C06A14A: BLKS(0x0C06A14Au);
	r8 = 0xFFFFFFFFu;  /* 0C06A14A mov #imm,Rn */
	r10 = 0x400u; UPD(0x0C06A14Eu, 2);  /* 0C06A14C mov.w @(disp,pc),Rn */
	IF(0x0C06A14Eu); ;  /* 0C06A14E nop */
	UPD(0x0C06A150u, 1);
L_0C06A150: BLKS(0x0C06A150u);
	r0 = 0xC060BC0u; UPD(0x0C06A152u, 1);  /* 0C06A150 mov.l @(disp,pc),Rn */
	IF(0x0C06A152u); { u32 t_ = r0; PR = 0x0C06A156u; IF(0x0C06A154u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060BC0, 0x0C060BC0u, 0x0C06A156u); }  /* 0C06A152 jsr @Rn */
L_0C06A156: BLKS(0x0C06A156u);
	r0 = 0xC061200u; UPD(0x0C06A158u, 1);  /* 0C06A156 mov.l @(disp,pc),Rn */
	IF(0x0C06A158u); { u32 t_ = r0; PR = 0x0C06A15Cu; IF(0x0C06A15Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061200, 0x0C061200u, 0x0C06A15Cu); }  /* 0C06A158 jsr @Rn */
L_0C06A15C: BLKS(0x0C06A15Cu);
	r0 = 0xC062250u; UPD(0x0C06A15Eu, 1);  /* 0C06A15C mov.l @(disp,pc),Rn */
	IF(0x0C06A15Eu); { u32 t_ = r0; PR = 0x0C06A162u; IF(0x0C06A160u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062250, 0x0C062250u, 0x0C06A162u); }  /* 0C06A15E jsr @Rn */
L_0C06A162: BLKS(0x0C06A162u);
	r7 = 0xC2B016Cu; UPD(0x0C06A164u, 1);  /* 0C06A162 mov.l @(disp,pc),Rn */
	r5 = 0xC2A6D4Cu; UPD(0x0C06A166u, 1);  /* 0C06A164 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C06A168u, 1);  /* 0C06A166 mov.w @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C06A16Au, 1);  /* 0C06A168 mov.w @Rm,Rn */
	r0 = r6 & 0xFFFF;  /* 0C06A16A extu.w Rm,Rn */
	T = r0 == r10;  /* 0C06A16C cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C06A16E negc Rm,Rn */
	r3 = r4 & 0xFFFF;  /* 0C06A170 extu.w Rm,Rn */
	T = r3 == r10;  /* 0C06A172 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C06A174 negc Rm,Rn */
	r0 |= r2;  /* 0C06A176 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06A178 tst Rm,Rn */
	if (!T) { UPD(0x0C06A150u, 11); goto L_0C06A150; }  /* 0C06A17A bf */
L_0C06A17C: BLKS(0x0C06A17Cu);
	r6 = 0xC2A6944u; UPD(0x0C06A17Eu, 1);  /* 0C06A17C mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C06A17E mov Rm,Rn */
	IF(0x0C06A180u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06A182u, 2);  /* 0C06A180 mov.b @(r0,Rm),Rn */
	r2 = 0xC23949Cu; UPD(0x0C06A184u, 1);  /* 0C06A182 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C06A184 mov Rm,Rn */
	IF(0x0C06A186u); r1 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06A188u, 2);  /* 0C06A186 mov.b @(r0,Rm),Rn */
	r10 = 0xC29D93Cu; UPD(0x0C06A18Au, 1);  /* 0C06A188 mov.l @(disp,pc),Rn */
	IF(0x0C06A18Au); r9 <<= 2;  /* 0C06A18A shll2 Rn */
	r0 = r9;  /* 0C06A18C mov Rm,Rn */
	r4 = 0xC29CF80u; UPD(0x0C06A190u, 3);  /* 0C06A18E mov.l @(disp,pc),Rn */
	r3 = 0xC22E25Eu; UPD(0x0C06A192u, 1);  /* 0C06A190 mov.l @(disp,pc),Rn */
	IF(0x0C06A192u); r9 = R32(r0 + r10); UPD(0x0C06A194u, 1);  /* 0C06A192 mov.l @(r0,Rm),Rn */
	r8 = 0xC29D088u; UPD(0x0C06A196u, 1);  /* 0C06A194 mov.l @(disp,pc),Rn */
	W16(r4, r5); UPD(0x0C06A198u, 1);  /* 0C06A196 mov.w Rm,@Rn */
	W16(r3, r1); UPD(0x0C06A19Au, 1);  /* 0C06A198 mov.w Rm,@Rn */
	W32(r8, r9); UPD(0x0C06A19Cu, 1);  /* 0C06A19A mov.l Rm,@Rn */
	r15 = r14;  /* 0C06A19C mov Rm,Rn */
	IF(0x0C06A19Eu); PR = R32(r15); r15 += 4; UPD(0x0C06A1A0u, 2);  /* 0C06A19E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06A1A2u, 1);  /* 0C06A1A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06A1A4u, 1);  /* 0C06A1A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06A1A6u, 1);  /* 0C06A1A4 mov.l @Rm+,Rn */
	IF(0x0C06A1A6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06A1A6 rts */
}

/* FUN_0c06a290 */
void blk_f_0C06A290(sh3_t *c)
{
	LOCALS;
L_0C06A290: BLKS(0x0C06A290u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A292u, 1);  /* 0C06A290 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C06A292 exts.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r2 = v_; } UPD(0x0C06A296u, 2);  /* 0C06A294 mov.w @Rm+,Rn */
	T = (r2 & r2) == 0;  /* 0C06A296 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06A2BEu, 4); goto L_0C06A2BE; } goto L_0C06A29C; }  /* 0C06A298 bt/s */
L_0C06A29C: BLKS(0x0C06A29Cu);
	r0 = 0xC3BC3CCu; UPD(0x0C06A29Eu, 2);  /* 0C06A29C mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C06A29E add Rm,Rn */
	r3 = 0x8000u; UPD(0x0C06A2A2u, 2);  /* 0C06A2A0 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C06A2A2 add Rm,Rn */
	r7 = 0x3FFFu; UPD(0x0C06A2A6u, 2);  /* 0C06A2A4 mov.w @(disp,pc),Rn */
	IF(0x0C06A2A6u); ;  /* 0C06A2A6 nop */
	UPD(0x0C06A2A8u, 1);
L_0C06A2A8: BLKS(0x0C06A2A8u);
	T = (r2 & r3) == 0;  /* 0C06A2A8 tst Rm,Rn */
	if (T) { UPD(0x0C06A2B6u, 4); goto L_0C06A2B6; }  /* 0C06A2AA bt */
L_0C06A2AC: BLKS(0x0C06A2ACu);
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C06A2AEu, 1);  /* 0C06A2AC mov.w @Rm,Rn */
	r2 &= r7;  /* 0C06A2AE and Rm,Rn */
	T = r0 == r2;  /* 0C06A2B0 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06A2C0u, 5); goto L_0C06A2C0; } UPD(0x0C06A2B6u, 1); goto L_0C06A2B6; }  /* 0C06A2B2 bf/s */
L_0C06A2B6: BLKS(0x0C06A2B6u);
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r2 = v_; } UPD(0x0C06A2B8u, 1);  /* 0C06A2B6 mov.w @Rm+,Rn */
	T = (r2 & r2) == 0;  /* 0C06A2B8 tst Rm,Rn */
	{ u32 c_ = !T; r4 += 0x20u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06A2A8u, 4); goto L_0C06A2A8; } UPD(0x0C06A2BEu, 1); goto L_0C06A2BE; }  /* 0C06A2BA bf/s */
L_0C06A2BE: BLKS(0x0C06A2BEu);
	r0 = 0x1u;  /* 0C06A2BE mov #imm,Rn */
	UPD(0x0C06A2C0u, 1);
L_0C06A2C0: BLKS(0x0C06A2C0u);
	r15 = r14;  /* 0C06A2C0 mov Rm,Rn */
	IF(0x0C06A2C2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06A2C2 rts */
}

/* FUN_0c06a2d0 */
void blk_f_0C06A2D0(sh3_t *c)
{
	LOCALS;
L_0C06A2D0: BLKS(0x0C06A2D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A2D2u, 1);  /* 0C06A2D0 mov.l Rm,@-Rn */
	r1 = 0x1u;  /* 0C06A2D2 mov #imm,Rn */
	IF(0x0C06A2D4u); r15 -= 4; W32(r15, PR); UPD(0x0C06A2D6u, 2);  /* 0C06A2D4 sts.l pr,@-Rn */
	r0 = 0xC228FF8u; UPD(0x0C06A2D8u, 1);  /* 0C06A2D6 mov.l @(disp,pc),Rn */
	W8(r0, r1); UPD(0x0C06A2DAu, 1);  /* 0C06A2D8 mov.b Rm,@Rn */
	r0 = 0xC060BC0u; UPD(0x0C06A2DCu, 1);  /* 0C06A2DA mov.l @(disp,pc),Rn */
	IF(0x0C06A2DCu); { u32 t_ = r0; PR = 0x0C06A2E0u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C060BC0, 0x0C060BC0u, 0x0C06A2E0u); }  /* 0C06A2DC jsr @Rn */
L_0C06A2E0: BLKS(0x0C06A2E0u);
	r0 = 0xC061200u; UPD(0x0C06A2E2u, 1);  /* 0C06A2E0 mov.l @(disp,pc),Rn */
	IF(0x0C06A2E2u); { u32 t_ = r0; PR = 0x0C06A2E6u; IF(0x0C06A2E4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061200, 0x0C061200u, 0x0C06A2E6u); }  /* 0C06A2E2 jsr @Rn */
L_0C06A2E6: BLKS(0x0C06A2E6u);
	r0 = 0xC062250u; UPD(0x0C06A2E8u, 1);  /* 0C06A2E6 mov.l @(disp,pc),Rn */
	IF(0x0C06A2E8u); { u32 t_ = r0; PR = 0x0C06A2ECu; IF(0x0C06A2EAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062250, 0x0C062250u, 0x0C06A2ECu); }  /* 0C06A2E8 jsr @Rn */
L_0C06A2EC: BLKS(0x0C06A2ECu);
	r6 = 0xC3BC3CCu; UPD(0x0C06A2EEu, 1);  /* 0C06A2EC mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C06A2EE mov #imm,Rn */
	r7 = 0x400u; UPD(0x0C06A2F2u, 2);  /* 0C06A2F0 mov.w @(disp,pc),Rn */
	r3 = 0xFu;  /* 0C06A2F2 mov #imm,Rn */
	r4 = 0x1Fu;  /* 0C06A2F4 mov #imm,Rn */
	IF(0x0C06A2F6u); ;  /* 0C06A2F6 nop */
	UPD(0x0C06A2F8u, 3);
L_0C06A2F8: BLKS(0x0C06A2F8u);
	r2 = r6;  /* 0C06A2F8 mov Rm,Rn */
	r1 = 0x8u;  /* 0C06A2FA mov #imm,Rn */
	r2 += 0x10u;  /* 0C06A2FC add #imm,Rn */
	IF(0x0C06A2FEu); ;  /* 0C06A2FE nop */
	UPD(0x0C06A300u, 4);
L_0C06A300: BLKS(0x0C06A300u);
	W16(r2, r7); UPD(0x0C06A302u, 1);  /* 0C06A300 mov.w Rm,@Rn */
	r1 += 0x1u;  /* 0C06A302 add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C06A304 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C06A306 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06A300u, 6); goto L_0C06A300; } goto L_0C06A30C; }  /* 0C06A308 bf/s */
L_0C06A30C: BLKS(0x0C06A30Cu);
	r0 = r5;  /* 0C06A30C mov Rm,Rn */
	r0 += 0x1u;  /* 0C06A30E add #imm,Rn */
	r5 = (u32)(s32)(s16)r0;  /* 0C06A310 exts.w Rm,Rn */
	T = (s32)r5 > (s32)r4;  /* 0C06A312 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += 0x20u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06A2F8u, 8); goto L_0C06A2F8; } goto L_0C06A318; }  /* 0C06A314 bf/s */
L_0C06A318: BLKS(0x0C06A318u);
	r15 = r14;  /* 0C06A318 mov Rm,Rn */
	IF(0x0C06A31Au); PR = R32(r15); r15 += 4; UPD(0x0C06A31Cu, 3);  /* 0C06A31A lds.l @Rn+,pr */
	IF(0x0C06A31Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06A31C rts */
}

/* FUN_0c06a340 */
void blk_f_0C06A340(sh3_t *c)
{
	LOCALS;
L_0C06A340: BLKS(0x0C06A340u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A342u, 1);  /* 0C06A340 mov.l Rm,@-Rn */
	r0 = r4;  /* 0C06A342 mov Rm,Rn */
	T = (s32)r4 > (s32)r5;  /* 0C06A344 cmp/gt Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06A34Cu, 5); goto L_0C06A34C; } goto L_0C06A34A; }  /* 0C06A346 bt/s */
L_0C06A34A: BLKS(0x0C06A34Au);
	r0 = r5;  /* 0C06A34A mov Rm,Rn */
	UPD(0x0C06A34Cu, 2);
L_0C06A34C: BLKS(0x0C06A34Cu);
	r15 = r14;  /* 0C06A34C mov Rm,Rn */
	IF(0x0C06A34Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06A34E rts */
}

/* FUN_0c06a360 */
void blk_f_0C06A360(sh3_t *c)
{
	LOCALS;
L_0C06A360: BLKS(0x0C06A360u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A362u, 1);  /* 0C06A360 mov.l Rm,@-Rn */
	r0 = r4;  /* 0C06A362 mov Rm,Rn */
	T = (s32)r4 >= (s32)r5;  /* 0C06A364 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06A36Cu, 5); goto L_0C06A36C; } goto L_0C06A36A; }  /* 0C06A366 bf/s */
L_0C06A36A: BLKS(0x0C06A36Au);
	r0 = r5;  /* 0C06A36A mov Rm,Rn */
	UPD(0x0C06A36Cu, 2);
L_0C06A36C: BLKS(0x0C06A36Cu);
	r15 = r14;  /* 0C06A36C mov Rm,Rn */
	IF(0x0C06A36Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06A36E rts */
}

/* FUN_0c06a380 */
void blk_f_0C06A380(sh3_t *c)
{
	LOCALS;
L_0C06A380: BLKS(0x0C06A380u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A382u, 1);  /* 0C06A380 mov.l Rm,@-Rn */
	r4 -= r6;  /* 0C06A382 sub Rm,Rn */
	r14 = r15;  /* 0C06A384 mov Rm,Rn */
	IF(0x0C06A386u); T = (s32)r4 >= 0;  /* 0C06A386 cmp/pz Rn */
	{ u32 c_ = !T; r2 = 0u - r4; /* slot neg Rm,Rn */ if (c_) { UPD(0x0C06A38Eu, 6); goto L_0C06A38E; } goto L_0C06A38C; }  /* 0C06A388 bf/s */
L_0C06A38C: BLKS(0x0C06A38Cu);
	r2 = r4;  /* 0C06A38C mov Rm,Rn */
	UPD(0x0C06A38Eu, 2);
L_0C06A38E: BLKS(0x0C06A38Eu);
	r5 -= r7;  /* 0C06A38E sub Rm,Rn */
	IF(0x0C06A390u); T = (s32)r5 >= 0;  /* 0C06A390 cmp/pz Rn */
	{ u32 c_ = !T; r1 = 0u - r5; /* slot neg Rm,Rn */ if (c_) { UPD(0x0C06A398u, 5); goto L_0C06A398; } goto L_0C06A396; }  /* 0C06A392 bf/s */
L_0C06A396: BLKS(0x0C06A396u);
	r1 = r5;  /* 0C06A396 mov Rm,Rn */
	UPD(0x0C06A398u, 2);
L_0C06A398: BLKS(0x0C06A398u);
	T = (s32)r2 >= (s32)r1;  /* 0C06A398 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C06A3B0u, 4); goto L_0C06A3B0; }  /* 0C06A39A bt */
L_0C06A39C: BLKS(0x0C06A39Cu);
	r3 = r2;  /* 0C06A39C mov Rm,Rn */
	IF(0x0C06A39Eu); T = r3 >> 31; r3 = (r3 << 1) | T;  /* 0C06A39E rotl Rn */
	IF(0x0C06A3A0u); r0 = T;  /* 0C06A3A0 movt Rn */
	r0 += r2;  /* 0C06A3A2 add Rm,Rn */
	IF(0x0C06A3A4u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06A3A4 shar Rn */
	r0 += r1;  /* 0C06A3A6 add Rm,Rn */
	UPD(0x0C06A3A8u, 6);
L_0C06A3A8: BLKS(0x0C06A3A8u);
	r15 = r14;  /* 0C06A3A8 mov Rm,Rn */
	IF(0x0C06A3AAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06A3AA rts */
L_0C06A3B0: BLKS(0x0C06A3B0u);
	r3 = r1;  /* 0C06A3B0 mov Rm,Rn */
	IF(0x0C06A3B2u); T = r3 >> 31; r3 = (r3 << 1) | T;  /* 0C06A3B2 rotl Rn */
	IF(0x0C06A3B4u); r0 = T;  /* 0C06A3B4 movt Rn */
	r0 += r1;  /* 0C06A3B6 add Rm,Rn */
	IF(0x0C06A3B8u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06A3B8 shar Rn */
	{ r0 += r2; /* slot add Rm,Rn */ UPD(0x0C06A3A8u, 8); goto L_0C06A3A8; }  /* 0C06A3BA bra */
}

/* FUN_0c06a3c0 */
void blk_f_0C06A3C0(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C06A3FC);
L_0C06A3C0: BLKS(0x0C06A3C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06A3C2u, 1);  /* 0C06A3C0 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C06A3C2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06A3C6u, 2);  /* 0C06A3C4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06A3C8u, 1);  /* 0C06A3C6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06A3CAu, 1);  /* 0C06A3C8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06A3CCu, 1);  /* 0C06A3CA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06A3CEu, 1);  /* 0C06A3CC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A3D0u, 1);  /* 0C06A3CE mov.l Rm,@-Rn */
	r2 = 0xC297489u; UPD(0x0C06A3D2u, 1);  /* 0C06A3D0 mov.l @(disp,pc),Rn */
	IF(0x0C06A3D2u); r15 -= 4; W32(r15, PR); UPD(0x0C06A3D4u, 1);  /* 0C06A3D2 sts.l pr,@-Rn */
	r3 = 0xC238029u; UPD(0x0C06A3D6u, 1);  /* 0C06A3D4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06A3D6 add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C06A3DAu, 2);  /* 0C06A3D8 mov.b @Rm,Rn */
	r14 = r15;  /* 0C06A3DA mov Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C06A3DEu, 2);  /* 0C06A3DC mov.b @Rm,Rn */
	W32(r14, r0); UPD(0x0C06A3E0u, 1);  /* 0C06A3DE mov.l Rm,@Rn */
	T = (r2 & r2) == 0;  /* 0C06A3E0 tst Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06A3F2u, 4); goto L_0C06A3F2; } UPD(0x0C06A3E6u, 1); goto L_0C06A3E6; }  /* 0C06A3E2 bf/s */
L_0C06A3E6: BLKS(0x0C06A3E6u);
	r5 = 0xC2B1A5Au; UPD(0x0C06A3E8u, 1);  /* 0C06A3E6 mov.l @(disp,pc),Rn */
	W8(r5, r0); UPD(0x0C06A3EAu, 1);  /* 0C06A3E8 mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C06A3EA mov #imm,Rn */
	r4 = 0xC239464u; UPD(0x0C06A3EEu, 2);  /* 0C06A3EC mov.l @(disp,pc),Rn */
	IF(0x0C06A3EEu); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C06A3F0u, 1);  /* 0C06A3EE mov.b @(r0,Rm),Rn */
	W8(r4, r1); UPD(0x0C06A3F2u, 1);  /* 0C06A3F0 mov.b Rm,@Rn */
L_0C06A3F2: BLKS(0x0C06A3F2u);
	r7 = 0xC2A6D64u; UPD(0x0C06A3F4u, 1);  /* 0C06A3F2 mov.l @(disp,pc),Rn */
	r2 = 0x5u;  /* 0C06A3F4 mov #imm,Rn */
	r3 = 0xC173A7Cu; UPD(0x0C06A3F8u, 2);  /* 0C06A3F6 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C06A3FAu, 1);  /* 0C06A3F8 mov.b @Rm,Rn */
	IF(0x0C06A3FAu); ;  /* 0C06A3FA nop */
	UPD(0x0C06A3FCu, 1);
L_0C06A3FC: BLKS(0x0C06A3FCu);
	SPIN_SAVE(0C06A3FC);
	r0 = r0 & 0xFF;  /* 0C06A3FC extu.b Rm,Rn */
	IF(0x0C06A3FEu); r0 = (u32)(s32)(s8)RS8(0C06A3FC, r0 + r3); UPD(0x0C06A400u, 2);  /* 0C06A3FE mov.b @(r0,Rm),Rn */
	r9 = r0;  /* 0C06A400 mov Rm,Rn */
	r9 += 0xFFFFFFFFu;  /* 0C06A402 add #imm,Rn */
	r8 = r9 & 0xFF;  /* 0C06A404 extu.b Rm,Rn */
	T = r8 > r2;  /* 0C06A406 cmp/hi Rm,Rn */
	if (T) { SPIN_FFD(0C06A3FC, 9); UPD(0x0C06A3FCu, 7); goto L_0C06A3FC; }  /* 0C06A408 bt */
L_0C06A40A: BLKS(0x0C06A40Au);
	r3 = 0x0u;  /* 0C06A40A mov #imm,Rn */
	r6 = 0xC2860B0u; UPD(0x0C06A40Eu, 2);  /* 0C06A40C mov.l @(disp,pc),Rn */
	r5 = 0xC3C8690u; UPD(0x0C06A410u, 1);  /* 0C06A40E mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C06A410 mov #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r6); UPD(0x0C06A414u, 2);  /* 0C06A412 mov.b @Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r5); UPD(0x0C06A416u, 1);  /* 0C06A414 mov.b @Rm,Rn */
	r9 = r11 & 0xFF;  /* 0C06A416 extu.b Rm,Rn */
	r8 = r10 & 0xFF;  /* 0C06A418 extu.b Rm,Rn */
	W8(r7, r0); UPD(0x0C06A41Cu, 3);  /* 0C06A41A mov.b Rm,@Rn */
	T = r9 >= r8;  /* 0C06A41C cmp/hs Rm,Rn */
	IF(0x0C06A41Eu); r0 = T;  /* 0C06A41E movt Rn */
	r9 = 0xFFFFFFFFu;  /* 0C06A420 mov #imm,Rn */
	T = (r8 & r8) == 0;  /* 0C06A422 tst Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r11 = r_; }  /* 0C06A424 negc Rm,Rn */
	r11 &= r0;  /* 0C06A426 and Rm,Rn */
	r4 = 0xC22E016u; UPD(0x0C06A42Au, 7);  /* 0C06A428 mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C06A42A mov Rm,Rn */
	IF(0x0C06A42Cu); r2 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C06A42Eu, 2);  /* 0C06A42C mov.b @(r0,Rm),Rn */
	W8(r4, r3); UPD(0x0C06A430u, 1);  /* 0C06A42E mov.b Rm,@Rn */
	r0 = r5;  /* 0C06A430 mov Rm,Rn */
	r12 = 0xC22E015u; UPD(0x0C06A434u, 2);  /* 0C06A432 mov.l @(disp,pc),Rn */
	r7 = 0xC2074F2u; UPD(0x0C06A436u, 1);  /* 0C06A434 mov.l @(disp,pc),Rn */
	W8(r12, r3); UPD(0x0C06A438u, 1);  /* 0C06A436 mov.b Rm,@Rn */
	IF(0x0C06A438u); r4 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C06A43Au, 1);  /* 0C06A438 mov.b @(r0,Rm),Rn */
	r3 = r2 & 0xFF;  /* 0C06A43A extu.b Rm,Rn */
	r12 = r4 & 0xFF;  /* 0C06A43C extu.b Rm,Rn */
	W16(r7, r1); UPD(0x0C06A440u, 3);  /* 0C06A43E mov.w Rm,@Rn */
	T = r3 >= r12;  /* 0C06A440 cmp/hs Rm,Rn */
	IF(0x0C06A442u); r7 = T;  /* 0C06A442 movt Rn */
	T = (r12 & r12) == 0;  /* 0C06A444 tst Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r10 = r_; }  /* 0C06A446 negc Rm,Rn */
	r10 &= r7;  /* 0C06A448 and Rm,Rn */
	r10 |= r11;  /* 0C06A44A or Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C06A44C tst Rm,Rn */
	if (T) { UPD(0x0C06A456u, 10); goto L_0C06A456; }  /* 0C06A44E bt */
L_0C06A450: BLKS(0x0C06A450u);
	r6 = 0x4B0u; UPD(0x0C06A452u, 1);  /* 0C06A450 mov.w @(disp,pc),Rn */
	r5 = 0xC2380B0u; UPD(0x0C06A454u, 1);  /* 0C06A452 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C06A456u, 1);  /* 0C06A454 mov.l Rm,@Rn */
L_0C06A456: BLKS(0x0C06A456u);
	r12 = 0xC06D6E0u; UPD(0x0C06A458u, 1);  /* 0C06A456 mov.l @(disp,pc),Rn */
	r1 = 0xAu;  /* 0C06A458 mov #imm,Rn */
	r3 = 0xC23E0A6u; UPD(0x0C06A45Cu, 2);  /* 0C06A45A mov.l @(disp,pc),Rn */
	r11 = 0xC072340u; UPD(0x0C06A45Eu, 1);  /* 0C06A45C mov.l @(disp,pc),Rn */
	r10 = 0xC0C0910u; UPD(0x0C06A460u, 1);  /* 0C06A45E mov.l @(disp,pc),Rn */
	IF(0x0C06A460u); { u32 t_ = r12; PR = 0x0C06A464u; W8(r3, r1); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06D6E0, 0x0C06D6E0u, 0x0C06A464u); }  /* 0C06A460 jsr @Rn */
L_0C06A464: BLKS(0x0C06A464u);
	IF(0x0C06A464u); { u32 t_ = r11; PR = 0x0C06A468u; IF(0x0C06A466u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C072340, 0x0C072340u, 0x0C06A468u); }  /* 0C06A464 jsr @Rn */
L_0C06A468: BLKS(0x0C06A468u);
	IF(0x0C06A468u); { u32 t_ = r10; PR = 0x0C06A46Cu; IF(0x0C06A46Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0910, 0x0C0C0910u, 0x0C06A46Cu); }  /* 0C06A468 jsr @Rn */
L_0C06A46C: BLKS(0x0C06A46Cu);
	r8 = 0xC07D620u; UPD(0x0C06A46Eu, 1);  /* 0C06A46C mov.l @(disp,pc),Rn */
	r10 = 0xC06D520u; UPD(0x0C06A470u, 1);  /* 0C06A46E mov.l @(disp,pc),Rn */
	IF(0x0C06A470u); { u32 t_ = r8; PR = 0x0C06A474u; IF(0x0C06A472u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C07D620, 0x0C07D620u, 0x0C06A474u); }  /* 0C06A470 jsr @Rn */
L_0C06A474: BLKS(0x0C06A474u);
	r12 = 0xC06D570u; UPD(0x0C06A476u, 1);  /* 0C06A474 mov.l @(disp,pc),Rn */
	IF(0x0C06A476u); { u32 t_ = r10; PR = 0x0C06A47Au; IF(0x0C06A478u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D520, 0x0C06D520u, 0x0C06A47Au); }  /* 0C06A476 jsr @Rn */
L_0C06A47A: BLKS(0x0C06A47Au);
	r11 = 0xC0BF5C0u; UPD(0x0C06A47Cu, 1);  /* 0C06A47A mov.l @(disp,pc),Rn */
	IF(0x0C06A47Cu); { u32 t_ = r12; PR = 0x0C06A480u; IF(0x0C06A47Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D570, 0x0C06D570u, 0x0C06A480u); }  /* 0C06A47C jsr @Rn */
L_0C06A480: BLKS(0x0C06A480u);
	r8 = 0xC06D390u; UPD(0x0C06A482u, 1);  /* 0C06A480 mov.l @(disp,pc),Rn */
	IF(0x0C06A482u); { u32 t_ = r11; PR = 0x0C06A486u; IF(0x0C06A484u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BF5C0, 0x0C0BF5C0u, 0x0C06A486u); }  /* 0C06A482 jsr @Rn */
L_0C06A486: BLKS(0x0C06A486u);
	r12 = 0xC0C1270u; UPD(0x0C06A488u, 1);  /* 0C06A486 mov.l @(disp,pc),Rn */
	IF(0x0C06A488u); { u32 t_ = r10; PR = 0x0C06A48Cu; IF(0x0C06A48Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D520, 0x0C06D520u, 0x0C06A48Cu); }  /* 0C06A488 jsr @Rn */
L_0C06A48C: BLKS(0x0C06A48Cu);
	IF(0x0C06A48Cu); { u32 t_ = r8; PR = 0x0C06A490u; IF(0x0C06A48Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D390, 0x0C06D390u, 0x0C06A490u); }  /* 0C06A48C jsr @Rn */
L_0C06A490: BLKS(0x0C06A490u);
	IF(0x0C06A490u); { u32 t_ = r12; PR = 0x0C06A494u; IF(0x0C06A492u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1270, 0x0C0C1270u, 0x0C06A494u); }  /* 0C06A490 jsr @Rn */
L_0C06A494: BLKS(0x0C06A494u);
	r7 = 0xC2860FCu; UPD(0x0C06A496u, 1);  /* 0C06A494 mov.l @(disp,pc),Rn */
	r10 = 0xC3C43B8u; UPD(0x0C06A498u, 1);  /* 0C06A496 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)R8(r7); UPD(0x0C06A49Au, 1);  /* 0C06A498 mov.b @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C06A49Cu, 1);  /* 0C06A49A mov.b @Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C06A49C tst Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r8 = r_; }  /* 0C06A49E negc Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C06A4A0 tst Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C06A4A2 negc Rm,Rn */
	T = (r8 & r0) == 0;  /* 0C06A4A4 tst Rm,Rn */
	if (T) { UPD(0x0C06A4ACu, 8); goto L_0C06A4AC; }  /* 0C06A4A6 bt */
L_0C06A4A8: BLKS(0x0C06A4A8u);
	{ IF(0x0C06A4AAu); ; /* slot nop */ UPD(0x0C06AA50u, 3); goto L_0C06AA50; }  /* 0C06A4A8 bra */
L_0C06A4AC: BLKS(0x0C06A4ACu);
	r11 = 0xC060BC0u; UPD(0x0C06A4AEu, 1);  /* 0C06A4AC mov.l @(disp,pc),Rn */
	r10 = 0xC061200u; UPD(0x0C06A4B0u, 1);  /* 0C06A4AE mov.l @(disp,pc),Rn */
	IF(0x0C06A4B0u); { u32 t_ = r11; PR = 0x0C06A4B4u; IF(0x0C06A4B2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060BC0, 0x0C060BC0u, 0x0C06A4B4u); }  /* 0C06A4B0 jsr @Rn */
L_0C06A4B4: BLKS(0x0C06A4B4u);
	r8 = 0xC062000u; UPD(0x0C06A4B6u, 1);  /* 0C06A4B4 mov.l @(disp,pc),Rn */
	IF(0x0C06A4B6u); { u32 t_ = r10; PR = 0x0C06A4BAu; IF(0x0C06A4B8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061200, 0x0C061200u, 0x0C06A4BAu); }  /* 0C06A4B6 jsr @Rn */
L_0C06A4BA: BLKS(0x0C06A4BAu);
	IF(0x0C06A4BAu); { u32 t_ = r8; PR = 0x0C06A4BEu; IF(0x0C06A4BCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C06A4BEu); }  /* 0C06A4BA jsr @Rn */
L_0C06A4BE: BLKS(0x0C06A4BEu);
	r5 = 0xC2074F2u; UPD(0x0C06A4C0u, 1);  /* 0C06A4BE mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C06A4C2u, 1);  /* 0C06A4C0 mov.w @Rm,Rn */
	r4 += 0x1u;  /* 0C06A4C2 add #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C06A4C4 exts.w Rm,Rn */
	T = r0 == 0x3Cu;  /* 0C06A4C6 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W16(r5, r4); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C06A4D0u, 6); goto L_0C06A4D0; } UPD(0x0C06A4CCu, 1); goto L_0C06A4CC; }  /* 0C06A4C8 bf/s */
L_0C06A4CC: BLKS(0x0C06A4CCu);
	{ r7 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ UPD(0x0C06AA30u, 3); goto L_0C06AA30; }  /* 0C06A4CC bra */
L_0C06A4D0: BLKS(0x0C06A4D0u);
	r8 = 0xC071630u; UPD(0x0C06A4D2u, 1);  /* 0C06A4D0 mov.l @(disp,pc),Rn */
	r9 = 0xC0C0A40u; UPD(0x0C06A4D4u, 1);  /* 0C06A4D2 mov.l @(disp,pc),Rn */
	IF(0x0C06A4D4u); { u32 t_ = r8; PR = 0x0C06A4D8u; IF(0x0C06A4D6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071630, 0x0C071630u, 0x0C06A4D8u); }  /* 0C06A4D4 jsr @Rn */
L_0C06A4D8: BLKS(0x0C06A4D8u);
	r12 = 0xC0AE940u; UPD(0x0C06A4DAu, 1);  /* 0C06A4D8 mov.l @(disp,pc),Rn */
	IF(0x0C06A4DAu); { u32 t_ = r9; PR = 0x0C06A4DEu; IF(0x0C06A4DCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0A40, 0x0C0C0A40u, 0x0C06A4DEu); }  /* 0C06A4DA jsr @Rn */
L_0C06A4DE: BLKS(0x0C06A4DEu);
	r11 = 0xC071CF0u; UPD(0x0C06A4E0u, 1);  /* 0C06A4DE mov.l @(disp,pc),Rn */
	IF(0x0C06A4E0u); { u32 t_ = r12; PR = 0x0C06A4E4u; r9 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0AE940, 0x0C0AE940u, 0x0C06A4E4u); }  /* 0C06A4E0 jsr @Rn */
L_0C06A4E4: BLKS(0x0C06A4E4u);
	r10 = 0xC0C1B00u; UPD(0x0C06A4E6u, 1);  /* 0C06A4E4 mov.l @(disp,pc),Rn */
	IF(0x0C06A4E6u); { u32 t_ = r11; PR = 0x0C06A4EAu; IF(0x0C06A4E8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071CF0, 0x0C071CF0u, 0x0C06A4EAu); }  /* 0C06A4E6 jsr @Rn */
L_0C06A4EA: BLKS(0x0C06A4EAu);
	r8 = 0xC0AEAB0u; UPD(0x0C06A4ECu, 1);  /* 0C06A4EA mov.l @(disp,pc),Rn */
	IF(0x0C06A4ECu); { u32 t_ = r10; PR = 0x0C06A4F0u; IF(0x0C06A4EEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1B00, 0x0C0C1B00u, 0x0C06A4F0u); }  /* 0C06A4EC jsr @Rn */
L_0C06A4F0: BLKS(0x0C06A4F0u);
	r10 = 0xC2B07BCu; UPD(0x0C06A4F2u, 1);  /* 0C06A4F0 mov.l @(disp,pc),Rn */
	IF(0x0C06A4F2u); { u32 t_ = r8; PR = 0x0C06A4F6u; IF(0x0C06A4F4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0AEAB0, 0x0C0AEAB0u, 0x0C06A4F6u); }  /* 0C06A4F2 jsr @Rn */
L_0C06A4F6: BLKS(0x0C06A4F6u);
	r12 = 0xC0C1B50u; UPD(0x0C06A4F8u, 1);  /* 0C06A4F6 mov.l @(disp,pc),Rn */
	r11 = 0xC0AE9E0u; UPD(0x0C06A4FAu, 1);  /* 0C06A4F8 mov.l @(disp,pc),Rn */
	r8 = r9;  /* 0C06A4FA mov Rm,Rn */
	UPD(0x0C06A4FCu, 1);
L_0C06A4FC: BLKS(0x0C06A4FCu);
	r8 += r8;  /* 0C06A4FC add Rm,Rn */
	r0 = r8;  /* 0C06A4FE mov Rm,Rn */
	IF(0x0C06A500u); r4 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C06A502u, 3);  /* 0C06A500 mov.w @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C06A502 tst Rm,Rn */
	if (T) { UPD(0x0C06A50Au, 4); goto L_0C06A50A; }  /* 0C06A504 bt */
L_0C06A506: BLKS(0x0C06A506u);
	{ IF(0x0C06A508u); ; /* slot nop */ UPD(0x0C06AA20u, 3); goto L_0C06AA20; }  /* 0C06A506 bra */
L_0C06A50A: BLKS(0x0C06A50Au);
	r7 = 0xC29D196u; UPD(0x0C06A50Cu, 1);  /* 0C06A50A mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06A50C mov Rm,Rn */
	IF(0x0C06A50Eu); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C06A510u, 2);  /* 0C06A50E mov.w @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C06A510 tst Rm,Rn */
	if (T) { UPD(0x0C06A518u, 4); goto L_0C06A518; }  /* 0C06A512 bt */
L_0C06A514: BLKS(0x0C06A514u);
	{ IF(0x0C06A516u); ; /* slot nop */ UPD(0x0C06AA10u, 3); goto L_0C06AA10; }  /* 0C06A514 bra */
L_0C06A518: BLKS(0x0C06A518u);
	r3 = r9;  /* 0C06A518 mov Rm,Rn */
	UPD(0x0C06A51Au, 1);
L_0C06A51A: BLKS(0x0C06A51Au);
	r3 += 0x1u;  /* 0C06A51A add #imm,Rn */
	r9 = r3 & 0xFF;  /* 0C06A51C extu.b Rm,Rn */
	r0 = 0x17u;  /* 0C06A51E mov #imm,Rn */
	T = r9 > r0;  /* 0C06A520 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r8 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06A4FCu, 7); goto L_0C06A4FC; } goto L_0C06A526; }  /* 0C06A522 bf/s */
L_0C06A526: BLKS(0x0C06A526u);
	r9 = 0xC0626E0u; UPD(0x0C06A528u, 2);  /* 0C06A526 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C06A528 mov #imm,Rn */
	r10 = 0xC0404000u; UPD(0x0C06A52Cu, 2);  /* 0C06A52A mov.l @(disp,pc),Rn */
	r6 = 0x6u;  /* 0C06A52C mov #imm,Rn */
	r4 = 0xC173A4Cu; UPD(0x0C06A530u, 2);  /* 0C06A52E mov.l @(disp,pc),Rn */
	IF(0x0C06A530u); { u32 t_ = r9; PR = 0x0C06A534u; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06A534u); }  /* 0C06A530 jsr @Rn */
L_0C06A534: BLKS(0x0C06A534u);
	r5 = 0x2u;  /* 0C06A534 mov #imm,Rn */
	r4 = 0xC173A60u; UPD(0x0C06A538u, 2);  /* 0C06A536 mov.l @(disp,pc),Rn */
	r6 = 0x9u;  /* 0C06A538 mov #imm,Rn */
	IF(0x0C06A53Au); { u32 t_ = r9; PR = 0x0C06A53Eu; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06A53Eu); }  /* 0C06A53A jsr @Rn */
L_0C06A53E: BLKS(0x0C06A53Eu);
	r5 = 0xC238029u; UPD(0x0C06A540u, 1);  /* 0C06A53E mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C06A542u, 1);  /* 0C06A540 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C06A542 tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x12u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06A54Cu, 4); goto L_0C06A54C; } goto L_0C06A548; }  /* 0C06A544 bt/s */
L_0C06A548: BLKS(0x0C06A548u);
	{ IF(0x0C06A54Au); ; /* slot nop */ UPD(0x0C06A950u, 4); goto L_0C06A950; }  /* 0C06A548 bra */
L_0C06A54C: BLKS(0x0C06A54Cu);
	r3 = 0xC234BA9u; UPD(0x0C06A54Eu, 1);  /* 0C06A54C mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C06A550u, 1);  /* 0C06A54E mov.b @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06A550 tst Rm,Rn */
	{ u32 c_ = T; r6 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06A55Eu, 4); goto L_0C06A55E; } goto L_0C06A556; }  /* 0C06A552 bt/s */
L_0C06A556: BLKS(0x0C06A556u);
	r2 = 0x4B0u; UPD(0x0C06A558u, 2);  /* 0C06A556 mov.w @(disp,pc),Rn */
	r7 = 0xC2380B0u; UPD(0x0C06A55Au, 1);  /* 0C06A558 mov.l @(disp,pc),Rn */
	W8(r3, r6); UPD(0x0C06A55Cu, 1);  /* 0C06A55A mov.b Rm,@Rn */
	W32(r7, r2); UPD(0x0C06A55Eu, 1);  /* 0C06A55C mov.l Rm,@Rn */
L_0C06A55E: BLKS(0x0C06A55Eu);
	r4 = 0xC2860B0u; UPD(0x0C06A560u, 1);  /* 0C06A55E mov.l @(disp,pc),Rn */
	r11 = 0xFFFFFFFFu;  /* 0C06A560 mov #imm,Rn */
	r9 = 0xC3C8690u; UPD(0x0C06A564u, 2);  /* 0C06A562 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C06A564 mov Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C06A568u, 2);  /* 0C06A566 mov.b @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C06A56Au, 1);  /* 0C06A568 mov.b @Rm,Rn */
	r7 = r5 & 0xFF;  /* 0C06A56A extu.b Rm,Rn */
	IF(0x0C06A56Cu); r12 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C06A56Eu, 2);  /* 0C06A56C mov.b @(r0,Rm),Rn */
	r3 = r2 & 0xFF;  /* 0C06A56E extu.b Rm,Rn */
	T = r3 >= r7;  /* 0C06A570 cmp/hs Rm,Rn */
	r0 = r9;  /* 0C06A572 mov Rm,Rn */
	IF(0x0C06A574u); r6 = T;  /* 0C06A574 movt Rn */
	IF(0x0C06A576u); r10 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C06A578u, 5);  /* 0C06A576 mov.b @(r0,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C06A578 tst Rm,Rn */
	{ u32 t_ = 0u - r11, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C06A57A negc Rm,Rn */
	r1 = r10 & 0xFF;  /* 0C06A57C extu.b Rm,Rn */
	r8 = r12 & 0xFF;  /* 0C06A57E extu.b Rm,Rn */
	T = r8 >= r1;  /* 0C06A580 cmp/hs Rm,Rn */
	IF(0x0C06A582u); r0 = T;  /* 0C06A582 movt Rn */
	T = (r1 & r1) == 0;  /* 0C06A584 tst Rm,Rn */
	{ u32 t_ = 0u - r11, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C06A586 negc Rm,Rn */
	r5 &= r6;  /* 0C06A588 and Rm,Rn */
	r3 &= r0;  /* 0C06A58A and Rm,Rn */
	r3 |= r5;  /* 0C06A58C or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06A58E tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C06A598u, 15); goto L_0C06A598; } UPD(0x0C06A594u, 1); goto L_0C06A594; }  /* 0C06A590 bt/s */
L_0C06A594: BLKS(0x0C06A594u);
	{ r5 = 0xDu; /* slot mov #imm,Rn */ UPD(0x0C06A910u, 3); goto L_0C06A910; }  /* 0C06A594 bra */
L_0C06A598: BLKS(0x0C06A598u);
	r4 = 0xC174088u; UPD(0x0C06A59Au, 1);  /* 0C06A598 mov.l @(disp,pc),Rn */
	r0 &= 0x40u;  /* 0C06A59A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06A59C tst Rm,Rn */
	if (!T) { UPD(0x0C06A5AEu, 5); goto L_0C06A5AE; }  /* 0C06A59E bf */
L_0C06A5A0: BLKS(0x0C06A5A0u);
	r11 = 0xC071C50u; UPD(0x0C06A5A2u, 1);  /* 0C06A5A0 mov.l @(disp,pc),Rn */
	IF(0x0C06A5A2u); { u32 t_ = r11; PR = 0x0C06A5A6u; IF(0x0C06A5A4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071C50, 0x0C071C50u, 0x0C06A5A6u); }  /* 0C06A5A2 jsr @Rn */
L_0C06A5A6: BLKS(0x0C06A5A6u);
	r0 &= 0x1u;  /* 0C06A5A6 and #imm,r0 */
	r5 = 0xC173A44u; UPD(0x0C06A5AAu, 2);  /* 0C06A5A8 mov.l @(disp,pc),Rn */
	IF(0x0C06A5AAu); r0 <<= 2;  /* 0C06A5AA shll2 Rn */
	IF(0x0C06A5ACu); r4 = R32(r0 + r5); UPD(0x0C06A5AEu, 2);  /* 0C06A5AC mov.l @(r0,Rm),Rn */
L_0C06A5AE: BLKS(0x0C06A5AEu);
	r8 = 0xC0626E0u; UPD(0x0C06A5B0u, 1);  /* 0C06A5AE mov.l @(disp,pc),Rn */
	r5 = 0xCu;  /* 0C06A5B0 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C06A5B4u, 2);  /* 0C06A5B2 mov.l @(disp,pc),Rn */
	IF(0x0C06A5B4u); { u32 t_ = r8; PR = 0x0C06A5B8u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06A5B8u); }  /* 0C06A5B4 jsr @Rn */
L_0C06A5B8: BLKS(0x0C06A5B8u);
	r0 = 0xC3C542Au; UPD(0x0C06A5BAu, 1);  /* 0C06A5B8 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C06A5BCu, 1);  /* 0C06A5BA mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C06A5BC tst Rm,Rn */
	if (!T) { UPD(0x0C06A5C8u, 4); goto L_0C06A5C8; }  /* 0C06A5BE bf */
L_0C06A5C0: BLKS(0x0C06A5C0u);
	r12 = 0xC3C8690u; UPD(0x0C06A5C2u, 1);  /* 0C06A5C0 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s8)R8(r12); UPD(0x0C06A5C4u, 1);  /* 0C06A5C2 mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C06A5C4 tst Rm,Rn */
	if (T) { UPD(0x0C06A5D0u, 4); goto L_0C06A5D0; }  /* 0C06A5C6 bt */
L_0C06A5C8: BLKS(0x0C06A5C8u);
	r9 = 0xC06FC20u; UPD(0x0C06A5CAu, 1);  /* 0C06A5C8 mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C06A5CA mov #imm,Rn */
	IF(0x0C06A5CCu); { u32 t_ = r9; PR = 0x0C06A5D0u; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C06FC20, 0x0C06FC20u, 0x0C06A5D0u); }  /* 0C06A5CC jsr @Rn */
L_0C06A5D0: BLKS(0x0C06A5D0u);
	r7 = 0xC3C542Au; UPD(0x0C06A5D2u, 1);  /* 0C06A5D0 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C06A5D2 mov #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C06A5D6u, 2);  /* 0C06A5D4 mov.b @Rm,Rn */
	r2 = r6 & 0xFF;  /* 0C06A5D6 extu.b Rm,Rn */
	T = r2 > r4;  /* 0C06A5D8 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C06A6B0u, 5); goto L_0C06A6B0; }  /* 0C06A5DA bt */
L_0C06A5DC: BLKS(0x0C06A5DCu);
	r0 = 0xC06A6A8u;  /* 0C06A5DC mova @(disp,pc),r0 */
	r2 += r2;  /* 0C06A5DE add Rm,Rn */
	IF(0x0C06A5E0u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06A5E2u, 3);  /* 0C06A5E0 mov.w @(r0,Rm),Rn */
	IF(0x0C06A5E2u); { u32 tv_ = (r3 + 0x0C06A5E6u); u32 t_ = PHYS(tv_); IF(0x0C06A5E4u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C06A6B0u: goto L_0C06A6B0; case 0x0C06A880u: goto L_0C06A880; default: JUMPD(tv_); } }  /* 0C06A5E2 braf Rn */
L_0C06A6B0: BLKS(0x0C06A6B0u);
	r11 = 0xC06FEB0u; UPD(0x0C06A6B2u, 1);  /* 0C06A6B0 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C06A6B2 mov #imm,Rn */
	r5 = 0x5u;  /* 0C06A6B4 mov #imm,Rn */
	IF(0x0C06A6B6u); { u32 t_ = r11; PR = 0x0C06A6BAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C06FEB0, 0x0C06FEB0u, 0x0C06A6BAu); }  /* 0C06A6B6 jsr @Rn */
L_0C06A6BA: BLKS(0x0C06A6BAu);
	r2 = 0xC238029u; UPD(0x0C06A6BCu, 1);  /* 0C06A6BA mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C06A6BEu, 1);  /* 0C06A6BC mov.b @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C06A6BE tst Rm,Rn */
	if (T) { UPD(0x0C06A6C6u, 4); goto L_0C06A6C6; }  /* 0C06A6C0 bt */
L_0C06A6C2: BLKS(0x0C06A6C2u);
	{ IF(0x0C06A6C4u); ; /* slot nop */ UPD(0x0C06A870u, 3); goto L_0C06A870; }  /* 0C06A6C2 bra */
L_0C06A6C6: BLKS(0x0C06A6C6u);
	r5 = R32(r14); UPD(0x0C06A6C8u, 1);  /* 0C06A6C6 mov.l @Rm,Rn */
L_0C06A6C8: BLKS(0x0C06A6C8u);
	IF(0x0C06A6C8u); T = (s32)r5 >= 0;  /* 0C06A6C8 cmp/pz Rn */
	if (T) { UPD(0x0C06A6D2u, 4); goto L_0C06A6D2; }  /* 0C06A6CA bt */
L_0C06A6CC: BLKS(0x0C06A6CCu);
	r5 += 0x3u;  /* 0C06A6CC add #imm,Rn */
	{ r9 = 0xEu; /* slot mov #imm,Rn */ UPD(0x0C06A6D4u, 4); goto L_0C06A6D4; }  /* 0C06A6CE bra */
L_0C06A6D2: BLKS(0x0C06A6D2u);
	r9 = 0xEu;  /* 0C06A6D2 mov #imm,Rn */
	UPD(0x0C06A6D4u, 1);
L_0C06A6D4: BLKS(0x0C06A6D4u);
	IF(0x0C06A6D4u); ARG0(0x459Du); { s32 s_ = (s32)r9; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C06A6D4 shld Rm,Rn */
	r12 = 0xC061010u; UPD(0x0C06A6D8u, 2);  /* 0C06A6D6 mov.l @(disp,pc),Rn */
	r1 = (r5 >> 16) | (r5 << 16);  /* 0C06A6D8 swap.w Rm,Rn */
	r5 = (u32)(s32)(s16)r1;  /* 0C06A6DA exts.w Rm,Rn */
	IF(0x0C06A6DCu); { u32 t_ = r12; PR = 0x0C06A6E0u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C061010, 0x0C061010u, 0x0C06A6E0u); }  /* 0C06A6DC jsr @Rn */
L_0C06A6E0: BLKS(0x0C06A6E0u);
	r2 = R32(r14); UPD(0x0C06A6E2u, 1);  /* 0C06A6E0 mov.l @Rm,Rn */
	r0 = 0x1Bu;  /* 0C06A6E2 mov #imm,Rn */
	T = (s32)r2 > (s32)r0;  /* 0C06A6E4 cmp/gt Rm,Rn */
	{ u32 c_ = T; r6 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06A6F0u, 5); goto L_0C06A6F0; } goto L_0C06A6EA; }  /* 0C06A6E6 bt/s */
L_0C06A6EA: BLKS(0x0C06A6EAu);
	r6 += 0x1u;  /* 0C06A6EA add #imm,Rn */
	r4 = (u32)(s32)(s16)r6;  /* 0C06A6EC exts.w Rm,Rn */
	W32(r14, r4); UPD(0x0C06A6F0u, 4);  /* 0C06A6EE mov.l Rm,@Rn */
L_0C06A6F0: BLKS(0x0C06A6F0u);
	r11 = 0xC062250u; UPD(0x0C06A6F2u, 1);  /* 0C06A6F0 mov.l @(disp,pc),Rn */
	r9 = 0xC3C8690u; UPD(0x0C06A6F4u, 1);  /* 0C06A6F2 mov.l @(disp,pc),Rn */
	IF(0x0C06A6F4u); { u32 t_ = r11; PR = 0x0C06A6F8u; IF(0x0C06A6F6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062250, 0x0C062250u, 0x0C06A6F8u); }  /* 0C06A6F4 jsr @Rn */
L_0C06A6F8: BLKS(0x0C06A6F8u);
	r4 = 0xC2860B0u; UPD(0x0C06A6FAu, 1);  /* 0C06A6F8 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C06A6FCu, 1);  /* 0C06A6FA mov.b @Rm,Rn */
	r0 = r4;  /* 0C06A6FC mov Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C06A700u, 2);  /* 0C06A6FE mov.b @Rm,Rn */
	IF(0x0C06A700u); r7 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C06A702u, 1);  /* 0C06A700 mov.b @(r0,Rm),Rn */
	T = r6 > r5;  /* 0C06A702 cmp/hi Rm,Rn */
	IF(0x0C06A704u); r5 = T;  /* 0C06A704 movt Rn */
	r0 = r9;  /* 0C06A706 mov Rm,Rn */
	IF(0x0C06A708u); r12 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C06A70Au, 4);  /* 0C06A708 mov.b @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C06A70A tst Rm,Rn */
	IF(0x0C06A70Cu); r10 = T;  /* 0C06A70C movt Rn */
	T = r12 > r7;  /* 0C06A70E cmp/hi Rm,Rn */
	r8 = R32(r14 + 0x4u); UPD(0x0C06A712u, 4);  /* 0C06A710 mov.l @(disp,Rm),Rn */
	IF(0x0C06A712u); r7 = T;  /* 0C06A712 movt Rn */
	T = (r12 & r12) == 0;  /* 0C06A714 tst Rm,Rn */
	r3 = 0x12Bu; UPD(0x0C06A718u, 3);  /* 0C06A716 mov.w @(disp,pc),Rn */
	IF(0x0C06A718u); r0 = T;  /* 0C06A718 movt Rn */
	r2 = r8;  /* 0C06A71A mov Rm,Rn */
	T = (s32)r8 > (s32)r3;  /* 0C06A71C cmp/gt Rm,Rn */
	r10 |= r5;  /* 0C06A71E or Rm,Rn */
	r0 |= r7;  /* 0C06A720 or Rm,Rn */
	r2 += 0x1u;  /* 0C06A722 add #imm,Rn */
	r10 &= r0;  /* 0C06A724 and Rm,Rn */
	IF(0x0C06A726u); r11 = T;  /* 0C06A726 movt Rn */
	T = (r10 & r11) == 0;  /* 0C06A728 tst Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06A732u, 12); goto L_0C06A732; } UPD(0x0C06A72Eu, 1); goto L_0C06A72E; }  /* 0C06A72A bt/s */
L_0C06A72E: BLKS(0x0C06A72Eu);
	{ r6 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C06A860u, 3); goto L_0C06A860; }  /* 0C06A72E bra */
L_0C06A732: BLKS(0x0C06A732u);
	r9 = 0xC233720u; UPD(0x0C06A734u, 1);  /* 0C06A732 mov.l @(disp,pc),Rn */
	r8 = 0xFFFFFFF8u;  /* 0C06A734 mov #imm,Rn */
	r0 = 0xC239468u; UPD(0x0C06A738u, 2);  /* 0C06A736 mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C06A738 mov #imm,Rn */
	r12 = R32(r9); UPD(0x0C06A73Cu, 2);  /* 0C06A73A mov.l @Rm,Rn */
	r2 = 0xC237D12u; UPD(0x0C06A73Eu, 1);  /* 0C06A73C mov.l @(disp,pc),Rn */
	W32(r0, r12); UPD(0x0C06A740u, 1);  /* 0C06A73E mov.l Rm,@Rn */
	r3 = 0xC228CF8u; UPD(0x0C06A742u, 1);  /* 0C06A740 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)R16(r2); UPD(0x0C06A744u, 1);  /* 0C06A742 mov.w @Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C06A746u, 1);  /* 0C06A744 mov.w @Rm,Rn */
	IF(0x0C06A746u); ARG0(0x4A8Cu); { s32 s_ = (s32)r8; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = (u32)((s32)r10 >> 31); else r10 = (u32)((s32)r10 >> ((~s_ & 31) + 1)); }  /* 0C06A746 shad Rm,Rn */
	IF(0x0C06A748u); ARG0(0x408Cu); { s32 s_ = (s32)r8; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C06A748 shad Rm,Rn */
	r10 ^= r1;  /* 0C06A74A xor Rm,Rn */
	r0 ^= 0x1u;  /* 0C06A74C xor #imm,r0 */
	r10 &= r1;  /* 0C06A74E and Rm,Rn */
	r0 &= 0x1u;  /* 0C06A750 and #imm,r0 */
	r10 |= r5;  /* 0C06A752 or Rm,Rn */
	r0 |= r7;  /* 0C06A754 or Rm,Rn */
	T = (r10 & r0) == 0;  /* 0C06A756 tst Rm,Rn */
	if (T) { UPD(0x0C06A75Eu, 12); goto L_0C06A75E; }  /* 0C06A758 bt */
L_0C06A75A: BLKS(0x0C06A75Au);
	{ IF(0x0C06A75Cu); ; /* slot nop */ UPD(0x0C06A4ACu, 3); goto L_0C06A4AC; }  /* 0C06A75A bra */
L_0C06A75E: BLKS(0x0C06A75Eu);
	r3 = 0xC0C21A0u; UPD(0x0C06A760u, 1);  /* 0C06A75E mov.l @(disp,pc),Rn */
	r10 = 0xC0716E0u; UPD(0x0C06A762u, 1);  /* 0C06A760 mov.l @(disp,pc),Rn */
	IF(0x0C06A762u); { u32 t_ = r3; PR = 0x0C06A766u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C21A0, 0x0C0C21A0u, 0x0C06A766u); }  /* 0C06A762 jsr @Rn */
L_0C06A766: BLKS(0x0C06A766u);
	r6 = 0xC3C4170u; UPD(0x0C06A768u, 1);  /* 0C06A766 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C06A768 mov #imm,Rn */
	IF(0x0C06A76Au); { u32 t_ = r10; PR = 0x0C06A76Eu; W8(r6, r8); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0716E0, 0x0C0716E0u, 0x0C06A76Eu); }  /* 0C06A76A jsr @Rn */
L_0C06A76E: BLKS(0x0C06A76Eu);
	r4 = 0xC22E015u; UPD(0x0C06A770u, 1);  /* 0C06A76E mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C06A770 mov #imm,Rn */
	r6 = 0xC3C86ACu; UPD(0x0C06A774u, 2);  /* 0C06A772 mov.l @(disp,pc),Rn */
	r11 = 0xC2B1A5Au; UPD(0x0C06A776u, 1);  /* 0C06A774 mov.l @(disp,pc),Rn */
	r5 = 0xC22E016u; UPD(0x0C06A778u, 1);  /* 0C06A776 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C06A77Au, 1);  /* 0C06A778 mov.b @Rm,Rn */
	W32(r6, r3); UPD(0x0C06A77Cu, 1);  /* 0C06A77A mov.l Rm,@Rn */
	r0 = r7 & 0xFF;  /* 0C06A77C extu.b Rm,Rn */
	W8(r11, r3); UPD(0x0C06A780u, 2);  /* 0C06A77E mov.b Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C06A780 tst Rm,Rn */
	{ u32 c_ = !T; W8(r5, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06A840u, 4); goto L_0C06A840; } UPD(0x0C06A786u, 1); goto L_0C06A786; }  /* 0C06A782 bf/s */
L_0C06A786: BLKS(0x0C06A786u);
	r11 = 0xC239464u; UPD(0x0C06A788u, 1);  /* 0C06A786 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C06A788 mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C06A78Cu, 2);  /* 0C06A78A mov.b @Rm,Rn */
	r7 = 0xC23E0A6u; UPD(0x0C06A78Eu, 1);  /* 0C06A78C mov.l @(disp,pc),Rn */
	r1 = r4 & 0xFF;  /* 0C06A78E extu.b Rm,Rn */
	r3 = 0xC297490u; UPD(0x0C06A792u, 2);  /* 0C06A790 mov.l @(disp,pc),Rn */
	T = (r1 & r1) == 0;  /* 0C06A792 tst Rm,Rn */
	W8(r7, r4); UPD(0x0C06A796u, 2);  /* 0C06A794 mov.b Rm,@Rn */
	{ u32 c_ = !T; W8(r3, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06A7AAu, 3); goto L_0C06A7AA; } UPD(0x0C06A79Au, 1); goto L_0C06A79A; }  /* 0C06A796 bf/s */
L_0C06A79A: BLKS(0x0C06A79Au);
	r2 = 0xC173A94u; UPD(0x0C06A79Cu, 1);  /* 0C06A79A mov.l @(disp,pc),Rn */
	IF(0x0C06A79Cu); r10 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C06A79Eu, 1);  /* 0C06A79C mov.b @(r0,Rm),Rn */
	W8(r7, r10); UPD(0x0C06A7A0u, 1);  /* 0C06A79E mov.b Rm,@Rn */
	r8 = 0xC239498u; UPD(0x0C06A7A2u, 1);  /* 0C06A7A0 mov.l @(disp,pc),Rn */
	r7 = 0x1u;  /* 0C06A7A2 mov #imm,Rn */
	W32(r8, r10); UPD(0x0C06A7A6u, 2);  /* 0C06A7A4 mov.l Rm,@Rn */
	W8(r3, r0); UPD(0x0C06A7A8u, 1);  /* 0C06A7A6 mov.b Rm,@Rn */
	W32(r6, r7); UPD(0x0C06A7AAu, 1);  /* 0C06A7A8 mov.l Rm,@Rn */
L_0C06A7AA: BLKS(0x0C06A7AAu);
	r7 = 0xC29D1D8u; UPD(0x0C06A7ACu, 1);  /* 0C06A7AA mov.l @(disp,pc),Rn */
	r2 = 0x8u;  /* 0C06A7AC mov #imm,Rn */
	r8 = 0xC29D454u; UPD(0x0C06A7B0u, 2);  /* 0C06A7AE mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C06A7B0 mov #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C06A7B4u, 2);  /* 0C06A7B2 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x4u, r0); UPD(0x0C06A7B6u, 1);  /* 0C06A7B4 mov.l Rm,@(disp,Rn) */
	W32(r7, r0); UPD(0x0C06A7B8u, 1);  /* 0C06A7B6 mov.l Rm,@Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C06A7BAu, 1);  /* 0C06A7B8 mov.l Rm,@(disp,Rn) */
	r3 = 0xC2A6D68u; UPD(0x0C06A7BCu, 1);  /* 0C06A7BA mov.l @(disp,pc),Rn */
	r11 = 0xC2860B0u; UPD(0x0C06A7BEu, 1);  /* 0C06A7BC mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C06A7C0u, 1);  /* 0C06A7BE mov.b @Rm,Rn */
	r5 = 0xC3C8690u; UPD(0x0C06A7C2u, 1);  /* 0C06A7C0 mov.l @(disp,pc),Rn */
	r10 = 0xC237D12u; UPD(0x0C06A7C4u, 1);  /* 0C06A7C2 mov.l @(disp,pc),Rn */
	IF(0x0C06A7C4u); r4 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06A7C6u, 1);  /* 0C06A7C4 mov.b @(r0,Rm),Rn */
	IF(0x0C06A7C6u); r9 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C06A7C8u, 1);  /* 0C06A7C6 mov.b @(r0,Rm),Rn */
	r12 = r4 & 0xFF;  /* 0C06A7C8 extu.b Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C06A7CCu, 2);  /* 0C06A7CA mov.w @Rm,Rn */
	r0 = r9 & 0xFF;  /* 0C06A7CC extu.b Rm,Rn */
	T = r12 >= r0;  /* 0C06A7CE cmp/hs Rm,Rn */
	IF(0x0C06A7D0u); r3 >>= 8;  /* 0C06A7D0 shlr8 Rn */
	IF(0x0C06A7D2u); r6 = T;  /* 0C06A7D2 movt Rn */
	r3 &= r1;  /* 0C06A7D4 and Rm,Rn */
	r3 &= r6;  /* 0C06A7D6 and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06A7D8 tst Rm,Rn */
	if (!T) { UPD(0x0C06A830u, 10); goto L_0C06A830; }  /* 0C06A7DA bf */
L_0C06A7DC: BLKS(0x0C06A7DCu);
	W32(r7, r3); UPD(0x0C06A7DEu, 1);  /* 0C06A7DC mov.l Rm,@Rn */
L_0C06A7DE: BLKS(0x0C06A7DEu);
	r0 = 0xC228CF8u; UPD(0x0C06A7E0u, 1);  /* 0C06A7DE mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C06A7E0 mov #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C06A7E4u, 2);  /* 0C06A7E2 mov.w @Rm,Rn */
	r11 = 0xC2860B0u; UPD(0x0C06A7E6u, 1);  /* 0C06A7E4 mov.l @(disp,pc),Rn */
	IF(0x0C06A7E6u); r3 >>= 8;  /* 0C06A7E6 shlr8 Rn */
	r0 = r11;  /* 0C06A7E8 mov Rm,Rn */
	IF(0x0C06A7EAu); r4 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C06A7ECu, 3);  /* 0C06A7EA mov.b @(r0,Rm),Rn */
	r3 &= r1;  /* 0C06A7EC and Rm,Rn */
	r5 = 0xC3C8690u; UPD(0x0C06A7F0u, 2);  /* 0C06A7EE mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C06A7F0 extu.b Rm,Rn */
	r0 = r5;  /* 0C06A7F2 mov Rm,Rn */
	IF(0x0C06A7F4u); r9 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C06A7F6u, 3);  /* 0C06A7F4 mov.b @(r0,Rm),Rn */
	r7 = r9 & 0xFF;  /* 0C06A7F6 extu.b Rm,Rn */
	T = r6 >= r7;  /* 0C06A7F8 cmp/hs Rm,Rn */
	IF(0x0C06A7FAu); r13 = T;  /* 0C06A7FA movt Rn */
	r3 &= r13;  /* 0C06A7FC and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06A7FE tst Rm,Rn */
	if (!T) { UPD(0x0C06A820u, 8); goto L_0C06A820; }  /* 0C06A800 bf */
L_0C06A802: BLKS(0x0C06A802u);
	r8 = 0xC29D454u; UPD(0x0C06A804u, 1);  /* 0C06A802 mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C06A806u, 1);  /* 0C06A804 mov.l Rm,@(disp,Rn) */
L_0C06A806: BLKS(0x0C06A806u);
	r3 = 0xC22E015u; UPD(0x0C06A808u, 1);  /* 0C06A806 mov.l @(disp,pc),Rn */
	r14 += 0x8u;  /* 0C06A808 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C06A80Cu, 2);  /* 0C06A80A mov.b @Rm,Rn */
	r15 = r14;  /* 0C06A80C mov Rm,Rn */
	IF(0x0C06A80Eu); PR = R32(r15); r15 += 4; UPD(0x0C06A810u, 2);  /* 0C06A80E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06A812u, 1);  /* 0C06A810 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06A814u, 1);  /* 0C06A812 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06A816u, 1);  /* 0C06A814 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06A818u, 1);  /* 0C06A816 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06A81Au, 1);  /* 0C06A818 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06A81Cu, 1);  /* 0C06A81A mov.l @Rm+,Rn */
	IF(0x0C06A81Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06A81C rts */
L_0C06A820: BLKS(0x0C06A820u);
	r10 = 0xC06CFF0u; UPD(0x0C06A822u, 1);  /* 0C06A820 mov.l @(disp,pc),Rn */
	IF(0x0C06A822u); { u32 t_ = r10; PR = 0x0C06A826u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06CFF0, 0x0C06CFF0u, 0x0C06A826u); }  /* 0C06A822 jsr @Rn */
L_0C06A826: BLKS(0x0C06A826u);
	{ IF(0x0C06A828u); ; /* slot nop */ UPD(0x0C06A806u, 3); goto L_0C06A806; }  /* 0C06A826 bra */
L_0C06A830: BLKS(0x0C06A830u);
	r12 = 0xC06CFF0u; UPD(0x0C06A832u, 1);  /* 0C06A830 mov.l @(disp,pc),Rn */
	IF(0x0C06A832u); { u32 t_ = r12; PR = 0x0C06A836u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06CFF0, 0x0C06CFF0u, 0x0C06A836u); }  /* 0C06A832 jsr @Rn */
L_0C06A836: BLKS(0x0C06A836u);
	{ IF(0x0C06A838u); ; /* slot nop */ UPD(0x0C06A7DEu, 3); goto L_0C06A7DE; }  /* 0C06A836 bra */
L_0C06A840: BLKS(0x0C06A840u);
	r9 = 0xC2A6D64u; UPD(0x0C06A842u, 1);  /* 0C06A840 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C06A842 mov #imm,Rn */
	r13 = 0xC06CFF0u; UPD(0x0C06A846u, 2);  /* 0C06A844 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s8)R8(r9); UPD(0x0C06A848u, 1);  /* 0C06A846 mov.b @Rm,Rn */
	r2 = 0xC297490u; UPD(0x0C06A84Au, 1);  /* 0C06A848 mov.l @(disp,pc),Rn */
	r0 = 0xC23E0A6u; UPD(0x0C06A84Cu, 1);  /* 0C06A84A mov.l @(disp,pc),Rn */
	W8(r2, r3); UPD(0x0C06A84Eu, 1);  /* 0C06A84C mov.b Rm,@Rn */
	IF(0x0C06A84Eu); { u32 t_ = r13; PR = 0x0C06A852u; W8(r0, r12); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06CFF0, 0x0C06CFF0u, 0x0C06A852u); }  /* 0C06A84E jsr @Rn */
L_0C06A852: BLKS(0x0C06A852u);
	IF(0x0C06A852u); { u32 t_ = r13; PR = 0x0C06A856u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06CFF0, 0x0C06CFF0u, 0x0C06A856u); }  /* 0C06A852 jsr @Rn */
L_0C06A856: BLKS(0x0C06A856u);
	{ IF(0x0C06A858u); ; /* slot nop */ UPD(0x0C06A806u, 3); goto L_0C06A806; }  /* 0C06A856 bra */
L_0C06A860: BLKS(0x0C06A860u);
	r0 = 0xC22E015u; UPD(0x0C06A862u, 1);  /* 0C06A860 mov.l @(disp,pc),Rn */
	W8(r0, r6); UPD(0x0C06A864u, 1);  /* 0C06A862 mov.b Rm,@Rn */
L_0C06A864: BLKS(0x0C06A864u);
	{ IF(0x0C06A866u); ; /* slot nop */ UPD(0x0C06A75Eu, 3); goto L_0C06A75E; }  /* 0C06A864 bra */
L_0C06A870: BLKS(0x0C06A870u);
	r8 = 0xC06D730u; UPD(0x0C06A872u, 1);  /* 0C06A870 mov.l @(disp,pc),Rn */
	IF(0x0C06A872u); { u32 t_ = r8; PR = 0x0C06A876u; IF(0x0C06A874u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D730, 0x0C06D730u, 0x0C06A876u); }  /* 0C06A872 jsr @Rn */
L_0C06A876: BLKS(0x0C06A876u);
	{ r5 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C06A6C8u, 3); goto L_0C06A6C8; }  /* 0C06A876 bra */
L_0C06A880: BLKS(0x0C06A880u);
	r10 = 0xC06FEB0u; UPD(0x0C06A882u, 1);  /* 0C06A880 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C06A882 mov #imm,Rn */
	r5 = 0x5u;  /* 0C06A884 mov #imm,Rn */
	IF(0x0C06A886u); { u32 t_ = r10; PR = 0x0C06A88Au; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C06FEB0, 0x0C06FEB0u, 0x0C06A88Au); }  /* 0C06A886 jsr @Rn */
L_0C06A88A: BLKS(0x0C06A88Au);
	r4 = 0x1u;  /* 0C06A88A mov #imm,Rn */
	r5 = 0x5u;  /* 0C06A88C mov #imm,Rn */
	IF(0x0C06A88Eu); { u32 t_ = r10; PR = 0x0C06A892u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C06FEB0, 0x0C06FEB0u, 0x0C06A892u); }  /* 0C06A88E jsr @Rn */
L_0C06A892: BLKS(0x0C06A892u);
	{ IF(0x0C06A894u); ; /* slot nop */ UPD(0x0C06A6BAu, 3); goto L_0C06A6BA; }  /* 0C06A892 bra */
L_0C06A910: BLKS(0x0C06A910u);
	r8 = 0xC06B6B0u; UPD(0x0C06A912u, 1);  /* 0C06A910 mov.l @(disp,pc),Rn */
	r11 = 0xC2380B0u; UPD(0x0C06A914u, 1);  /* 0C06A912 mov.l @(disp,pc),Rn */
	r6 = 0xCu;  /* 0C06A914 mov #imm,Rn */
	IF(0x0C06A916u); { u32 t_ = r8; PR = 0x0C06A91Au; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C06B6B0, 0x0C06B6B0u, 0x0C06A91Au); }  /* 0C06A916 jsr @Rn */
L_0C06A91A: BLKS(0x0C06A91Au);
	r0 = R32(r11); UPD(0x0C06A91Cu, 1);  /* 0C06A91A mov.l @Rm,Rn */
	IF(0x0C06A91Cu); r0 -= 1; T = r0 == 0;  /* 0C06A91C dt Rn */
	{ u32 c_ = T; W32(r11, r0); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06A926u, 4); goto L_0C06A926; } UPD(0x0C06A922u, 1); goto L_0C06A922; }  /* 0C06A91E bt/s */
L_0C06A922: BLKS(0x0C06A922u);
	{ r0 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C06A598u, 3); goto L_0C06A598; }  /* 0C06A922 bra */
L_0C06A926: BLKS(0x0C06A926u);
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C06A928u, 1);  /* 0C06A926 mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C06A928 tst Rm,Rn */
	{ u32 c_ = T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06A93Au, 4); goto L_0C06A93A; } goto L_0C06A92E; }  /* 0C06A92A bt/s */
L_0C06A92E: BLKS(0x0C06A92Eu);
	r12 = 0xC237D12u; UPD(0x0C06A930u, 2);  /* 0C06A92E mov.l @(disp,pc),Rn */
	r4 = 0x100u; UPD(0x0C06A932u, 1);  /* 0C06A930 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r12); UPD(0x0C06A934u, 1);  /* 0C06A932 mov.w @Rm,Rn */
	r4 |= r1;  /* 0C06A934 or Rm,Rn */
	W16(r12, r4); UPD(0x0C06A938u, 2);  /* 0C06A936 mov.w Rm,@Rn */
	r0 = r9;  /* 0C06A938 mov Rm,Rn */
	UPD(0x0C06A93Au, 1);
L_0C06A93A: BLKS(0x0C06A93Au);
	IF(0x0C06A93Au); r9 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C06A93Cu, 1);  /* 0C06A93A mov.b @(r0,Rm),Rn */
	T = (r9 & r9) == 0;  /* 0C06A93C tst Rm,Rn */
	if (T) { UPD(0x0C06A864u, 4); goto L_0C06A864; }  /* 0C06A93E bt */
L_0C06A940: BLKS(0x0C06A940u);
	r6 = 0xC228CF8u; UPD(0x0C06A942u, 1);  /* 0C06A940 mov.l @(disp,pc),Rn */
	r7 = 0x100u; UPD(0x0C06A944u, 1);  /* 0C06A942 mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r6); UPD(0x0C06A946u, 1);  /* 0C06A944 mov.w @Rm,Rn */
	r7 |= r3;  /* 0C06A946 or Rm,Rn */
	{ W16(r6, r7); /* slot mov.w Rm,@Rn */ UPD(0x0C06A75Eu, 4); goto L_0C06A75E; }  /* 0C06A948 bra */
L_0C06A950: BLKS(0x0C06A950u);
	r4 = 0xC17397Cu; UPD(0x0C06A952u, 1);  /* 0C06A950 mov.l @(disp,pc),Rn */
	r7 = 0x4040C000u; UPD(0x0C06A954u, 1);  /* 0C06A952 mov.l @(disp,pc),Rn */
	r11 = 0x40C04000u; UPD(0x0C06A956u, 1);  /* 0C06A954 mov.l @(disp,pc),Rn */
	IF(0x0C06A956u); { u32 t_ = r9; PR = 0x0C06A95Au; r6 = 0x12u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06A95Au); }  /* 0C06A956 jsr @Rn */
L_0C06A95A: BLKS(0x0C06A95Au);
	r8 = 0xC239464u; UPD(0x0C06A95Cu, 1);  /* 0C06A95A mov.l @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C06A95C mov #imm,Rn */
	r4 = 0xC173A74u; UPD(0x0C06A960u, 2);  /* 0C06A95E mov.l @(disp,pc),Rn */
	r6 = 0x16u;  /* 0C06A960 mov #imm,Rn */
	r10 = 0xC062490u; UPD(0x0C06A964u, 2);  /* 0C06A962 mov.l @(disp,pc),Rn */
	IF(0x0C06A964u); { u32 t_ = r9; PR = 0x0C06A968u; r7 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06A968u); }  /* 0C06A964 jsr @Rn */
L_0C06A968: BLKS(0x0C06A968u);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C06A96Au, 1);  /* 0C06A968 mov.b @Rm,Rn */
	r5 = 0x24u;  /* 0C06A96A mov #imm,Rn */
	r12 = 0xC297738u; UPD(0x0C06A96Eu, 2);  /* 0C06A96C mov.l @(disp,pc),Rn */
	r4 = r1 & 0xFF;  /* 0C06A96E extu.b Rm,Rn */
	IF(0x0C06A970u); { u32 t_ = r10; PR = 0x0C06A974u; r6 = 0x1Cu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06A974u); }  /* 0C06A970 jsr @Rn */
L_0C06A974: BLKS(0x0C06A974u);
	r2 = (u32)(s32)(s16)R16(r12); UPD(0x0C06A976u, 1);  /* 0C06A974 mov.w @Rm,Rn */
	r0 = r2;  /* 0C06A976 mov Rm,Rn */
	r0 &= 0x8u;  /* 0C06A978 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06A97A tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06A98Cu, 6); goto L_0C06A98C; } goto L_0C06A980; }  /* 0C06A97C bt/s */
L_0C06A980: BLKS(0x0C06A980u);
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C06A982u, 2);  /* 0C06A980 mov.b @Rm,Rn */
	r6 = 0xC173A7Cu; UPD(0x0C06A984u, 1);  /* 0C06A982 mov.l @(disp,pc),Rn */
	r0 = r7 & 0xFF;  /* 0C06A984 extu.b Rm,Rn */
	IF(0x0C06A986u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C06A988u, 2);  /* 0C06A986 mov.b @(r0,Rm),Rn */
	W8(r8, r4); UPD(0x0C06A98Au, 1);  /* 0C06A988 mov.b Rm,@Rn */
	r0 = r2;  /* 0C06A98A mov Rm,Rn */
	UPD(0x0C06A98Cu, 1);
L_0C06A98C: BLKS(0x0C06A98Cu);
	r0 &= 0x4u;  /* 0C06A98C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06A98E tst Rm,Rn */
	if (T) { UPD(0x0C06A99Cu, 5); goto L_0C06A99C; }  /* 0C06A990 bt */
L_0C06A992: BLKS(0x0C06A992u);
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C06A994u, 1);  /* 0C06A992 mov.b @Rm,Rn */
	r2 = 0xC173A84u; UPD(0x0C06A996u, 1);  /* 0C06A994 mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C06A996 extu.b Rm,Rn */
	IF(0x0C06A998u); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C06A99Au, 2);  /* 0C06A998 mov.b @(r0,Rm),Rn */
	W8(r8, r3); UPD(0x0C06A99Cu, 1);  /* 0C06A99A mov.b Rm,@Rn */
L_0C06A99C: BLKS(0x0C06A99Cu);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C06A99Eu, 1);  /* 0C06A99C mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06A99E tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x27u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06A9F0u, 4); goto L_0C06A9F0; } UPD(0x0C06A9A4u, 1); goto L_0C06A9A4; }  /* 0C06A9A0 bt/s */
L_0C06A9A4: BLKS(0x0C06A9A4u);
	r12 = 0xC065D00u; UPD(0x0C06A9A6u, 1);  /* 0C06A9A4 mov.l @(disp,pc),Rn */
	r4 = 0xEu;  /* 0C06A9A6 mov #imm,Rn */
	r10 = 0xC065D60u; UPD(0x0C06A9AAu, 2);  /* 0C06A9A8 mov.l @(disp,pc),Rn */
	r8 = 0xC065DC0u; UPD(0x0C06A9ACu, 1);  /* 0C06A9AA mov.l @(disp,pc),Rn */
	IF(0x0C06A9ACu); { u32 t_ = r12; PR = 0x0C06A9B0u; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C065D00, 0x0C065D00u, 0x0C06A9B0u); }  /* 0C06A9AC jsr @Rn */
L_0C06A9B0: BLKS(0x0C06A9B0u);
	r9 = 0xC068920u; UPD(0x0C06A9B2u, 1);  /* 0C06A9B0 mov.l @(disp,pc),Rn */
	r4 = 0xDu;  /* 0C06A9B2 mov #imm,Rn */
	r11 = 0xC065E20u; UPD(0x0C06A9B6u, 2);  /* 0C06A9B4 mov.l @(disp,pc),Rn */
	IF(0x0C06A9B6u); { u32 t_ = r10; PR = 0x0C06A9BAu; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C065D60, 0x0C065D60u, 0x0C06A9BAu); }  /* 0C06A9B6 jsr @Rn */
L_0C06A9BA: BLKS(0x0C06A9BAu);
	r4 = 0xCu;  /* 0C06A9BA mov #imm,Rn */
	r12 = 0xC065EA0u; UPD(0x0C06A9BEu, 2);  /* 0C06A9BC mov.l @(disp,pc),Rn */
	IF(0x0C06A9BEu); { u32 t_ = r8; PR = 0x0C06A9C2u; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C065DC0, 0x0C065DC0u, 0x0C06A9C2u); }  /* 0C06A9BE jsr @Rn */
L_0C06A9C2: BLKS(0x0C06A9C2u);
	r4 = 0xBu;  /* 0C06A9C2 mov #imm,Rn */
	r10 = 0xC065EF0u; UPD(0x0C06A9C6u, 2);  /* 0C06A9C4 mov.l @(disp,pc),Rn */
	IF(0x0C06A9C6u); { u32 t_ = r9; PR = 0x0C06A9CAu; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068920, 0x0C068920u, 0x0C06A9CAu); }  /* 0C06A9C6 jsr @Rn */
L_0C06A9CA: BLKS(0x0C06A9CAu);
	r4 = 0xAu;  /* 0C06A9CA mov #imm,Rn */
	r8 = 0xC068AD0u; UPD(0x0C06A9CEu, 2);  /* 0C06A9CC mov.l @(disp,pc),Rn */
	IF(0x0C06A9CEu); { u32 t_ = r11; PR = 0x0C06A9D2u; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C065E20, 0x0C065E20u, 0x0C06A9D2u); }  /* 0C06A9CE jsr @Rn */
L_0C06A9D2: BLKS(0x0C06A9D2u);
	r4 = 0x9u;  /* 0C06A9D2 mov #imm,Rn */
	IF(0x0C06A9D4u); { u32 t_ = r12; PR = 0x0C06A9D8u; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C065EA0, 0x0C065EA0u, 0x0C06A9D8u); }  /* 0C06A9D4 jsr @Rn */
L_0C06A9D8: BLKS(0x0C06A9D8u);
	r4 = 0x8u;  /* 0C06A9D8 mov #imm,Rn */
	IF(0x0C06A9DAu); { u32 t_ = r10; PR = 0x0C06A9DEu; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C065EF0, 0x0C065EF0u, 0x0C06A9DEu); }  /* 0C06A9DA jsr @Rn */
L_0C06A9DE: BLKS(0x0C06A9DEu);
	r4 = 0x1u;  /* 0C06A9DE mov #imm,Rn */
	IF(0x0C06A9E0u); { u32 t_ = r8; PR = 0x0C06A9E4u; r5 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068AD0, 0x0C068AD0u, 0x0C06A9E4u); }  /* 0C06A9E0 jsr @Rn */
L_0C06A9E4: BLKS(0x0C06A9E4u);
	{ IF(0x0C06A9E6u); ; /* slot nop */ UPD(0x0C06A54Cu, 3); goto L_0C06A54C; }  /* 0C06A9E4 bra */
L_0C06A9F0: BLKS(0x0C06A9F0u);
	r4 = 0xC173A6Cu; UPD(0x0C06A9F2u, 1);  /* 0C06A9F0 mov.l @(disp,pc),Rn */
	r6 = 0x16u;  /* 0C06A9F2 mov #imm,Rn */
	IF(0x0C06A9F4u); { u32 t_ = r9; PR = 0x0C06A9F8u; r7 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06A9F8u); }  /* 0C06A9F4 jsr @Rn */
L_0C06A9F8: BLKS(0x0C06A9F8u);
	r9 = 0xC239466u; UPD(0x0C06A9FAu, 1);  /* 0C06A9F8 mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C06A9FA mov #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r9); UPD(0x0C06A9FEu, 2);  /* 0C06A9FC mov.w @Rm,Rn */
	r6 = 0x1Cu;  /* 0C06A9FE mov #imm,Rn */
	IF(0x0C06AA00u); { u32 t_ = r10; PR = 0x0C06AA04u; r4 = r11 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06AA04u); }  /* 0C06AA00 jsr @Rn */
L_0C06AA04: BLKS(0x0C06AA04u);
	{ IF(0x0C06AA06u); ; /* slot nop */ UPD(0x0C06A9A4u, 3); goto L_0C06A9A4; }  /* 0C06AA04 bra */
L_0C06AA10: BLKS(0x0C06AA10u);
	IF(0x0C06AA10u); { u32 t_ = r11; PR = 0x0C06AA14u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0AE9E0, 0x0C0AE9E0u, 0x0C06AA14u); }  /* 0C06AA10 jsr @Rn */
L_0C06AA14: BLKS(0x0C06AA14u);
	{ r3 = r9; /* slot mov Rm,Rn */ UPD(0x0C06A51Au, 3); goto L_0C06A51A; }  /* 0C06AA14 bra */
L_0C06AA20: BLKS(0x0C06AA20u);
	IF(0x0C06AA20u); { u32 t_ = r12; PR = 0x0C06AA24u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1B50, 0x0C0C1B50u, 0x0C06AA24u); }  /* 0C06AA20 jsr @Rn */
L_0C06AA24: BLKS(0x0C06AA24u);
	{ IF(0x0C06AA26u); ; /* slot nop */ UPD(0x0C06A50Au, 3); goto L_0C06A50A; }  /* 0C06AA24 bra */
L_0C06AA30: BLKS(0x0C06AA30u);
	r9 = 0xC2860FCu; UPD(0x0C06AA32u, 1);  /* 0C06AA30 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C06AA34u, 1);  /* 0C06AA32 mov.b @Rm,Rn */
	r3 = 0xC3C43B8u; UPD(0x0C06AA36u, 1);  /* 0C06AA34 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C06AA36 tst Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r3); UPD(0x0C06AA3Au, 2);  /* 0C06AA38 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C06AA3A negc Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C06AA3C tst Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C06AA3E negc Rm,Rn */
	T = (r0 & r6) == 0;  /* 0C06AA40 tst Rm,Rn */
	if (T) { UPD(0x0C06AA4Cu, 7); goto L_0C06AA4C; }  /* 0C06AA42 bt */
L_0C06AA44: BLKS(0x0C06AA44u);
	r5 = 0xC0C2110u; UPD(0x0C06AA46u, 1);  /* 0C06AA44 mov.l @(disp,pc),Rn */
	r4 = 0x85u; UPD(0x0C06AA48u, 1);  /* 0C06AA46 mov.w @(disp,pc),Rn */
	IF(0x0C06AA48u); { u32 t_ = r5; PR = 0x0C06AA4Cu; IF(0x0C06AA4Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C06AA4Cu); }  /* 0C06AA48 jsr @Rn */
L_0C06AA4C: BLKS(0x0C06AA4Cu);
	{ IF(0x0C06AA4Eu); ; /* slot nop */ UPD(0x0C06A4D0u, 3); goto L_0C06A4D0; }  /* 0C06AA4C bra */
L_0C06AA50: BLKS(0x0C06AA50u);
	r9 = 0xC0C2110u; UPD(0x0C06AA52u, 1);  /* 0C06AA50 mov.l @(disp,pc),Rn */
	r4 = 0xC1u; UPD(0x0C06AA54u, 1);  /* 0C06AA52 mov.w @(disp,pc),Rn */
	IF(0x0C06AA54u); { u32 t_ = r9; PR = 0x0C06AA58u; IF(0x0C06AA56u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C06AA58u); }  /* 0C06AA54 jsr @Rn */
L_0C06AA58: BLKS(0x0C06AA58u);
	{ IF(0x0C06AA5Au); ; /* slot nop */ UPD(0x0C06A4ACu, 3); goto L_0C06A4AC; }  /* 0C06AA58 bra */
}

/* FUN_0c06aad0 */
void blk_f_0C06AAD0(sh3_t *c)
{
	LOCALS;
L_0C06AAD0: BLKS(0x0C06AAD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06AAD2u, 1);  /* 0C06AAD0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06AAD4u, 1);  /* 0C06AAD2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06AAD6u, 1);  /* 0C06AAD4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06AAD8u, 1);  /* 0C06AAD6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06AADAu, 1);  /* 0C06AAD8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06AADCu, 1);  /* 0C06AADA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06AADEu, 1);  /* 0C06AADC mov.l Rm,@-Rn */
	r3 = 0xC234BA9u; UPD(0x0C06AAE0u, 1);  /* 0C06AADE mov.l @(disp,pc),Rn */
	IF(0x0C06AAE0u); r15 -= 4; W32(r15, PR); UPD(0x0C06AAE2u, 1);  /* 0C06AAE0 sts.l pr,@-Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C06AAE4u, 1);  /* 0C06AAE2 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF0u;  /* 0C06AAE4 add #imm,Rn */
	T = (r2 & r2) == 0;  /* 0C06AAE6 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06AAF0u, 5); goto L_0C06AAF0; } goto L_0C06AAEC; }  /* 0C06AAE8 bt/s */
L_0C06AAEC: BLKS(0x0C06AAECu);
	{ r14 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C06AE30u, 4); goto L_0C06AE30; }  /* 0C06AAEC bra */
L_0C06AAF0: BLKS(0x0C06AAF0u);
	r9 = 0xC3C8474u; UPD(0x0C06AAF2u, 1);  /* 0C06AAF0 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C06AAF2 mov #imm,Rn */
	W32(r9, r10); UPD(0x0C06AAF6u, 2);  /* 0C06AAF4 mov.l Rm,@Rn */
	r7 = 0x0u;  /* 0C06AAF6 mov #imm,Rn */
	r12 = 0xC297490u; UPD(0x0C06AAFAu, 2);  /* 0C06AAF8 mov.l @(disp,pc),Rn */
	r2 = 0xC233720u; UPD(0x0C06AAFCu, 1);  /* 0C06AAFA mov.l @(disp,pc),Rn */
	r9 = 0xC22E015u; UPD(0x0C06AAFEu, 1);  /* 0C06AAFC mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)R8(r12); UPD(0x0C06AB00u, 1);  /* 0C06AAFE mov.b @Rm,Rn */
	r1 = 0x12Cu; UPD(0x0C06AB02u, 1);  /* 0C06AB00 mov.w @(disp,pc),Rn */
	r8 = 0xC2B1A50u; UPD(0x0C06AB04u, 1);  /* 0C06AB02 mov.l @(disp,pc),Rn */
	r6 = 0xC3C5448u; UPD(0x0C06AB06u, 1);  /* 0C06AB04 mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C06AB08u, 1);  /* 0C06AB06 mov.l @Rm,Rn */
	r4 = 0xC239468u; UPD(0x0C06AB0Au, 1);  /* 0C06AB08 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C06AB0Cu, 1);  /* 0C06AB0A mov.b @Rm,Rn */
	W32(r14, r7); UPD(0x0C06AB0Eu, 1);  /* 0C06AB0C mov.l Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C06AB0E tst Rm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C06AB12u, 2);  /* 0C06AB10 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r11); UPD(0x0C06AB14u, 1);  /* 0C06AB12 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r7); UPD(0x0C06AB16u, 1);  /* 0C06AB14 mov.l Rm,@(disp,Rn) */
	W32(r8, r1); UPD(0x0C06AB18u, 1);  /* 0C06AB16 mov.l Rm,@Rn */
	W32(r6, r7); UPD(0x0C06AB1Au, 1);  /* 0C06AB18 mov.l Rm,@Rn */
	{ u32 c_ = !T; W32(r4, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06AB22u, 3); goto L_0C06AB22; } UPD(0x0C06AB1Eu, 1); goto L_0C06AB1E; }  /* 0C06AB1A bf/s */
L_0C06AB1E: BLKS(0x0C06AB1Eu);
	{ IF(0x0C06AB20u); ; /* slot nop */ UPD(0x0C06AEF0u, 3); goto L_0C06AEF0; }  /* 0C06AB1E bra */
L_0C06AB22: BLKS(0x0C06AB22u);
	r12 = 0xC06D6E0u; UPD(0x0C06AB24u, 1);  /* 0C06AB22 mov.l @(disp,pc),Rn */
	r5 = 0xBu;  /* 0C06AB24 mov #imm,Rn */
	r7 = R32(r14); UPD(0x0C06AB28u, 2);  /* 0C06AB26 mov.l @Rm,Rn */
	r2 = 0xC29D728u; UPD(0x0C06AB2Au, 1);  /* 0C06AB28 mov.l @(disp,pc),Rn */
	r6 = 0xC3C4048u; UPD(0x0C06AB2Cu, 1);  /* 0C06AB2A mov.l @(disp,pc),Rn */
	r4 = 0xC23E0A6u; UPD(0x0C06AB2Eu, 1);  /* 0C06AB2C mov.l @(disp,pc),Rn */
	r11 = 0xC072340u; UPD(0x0C06AB30u, 1);  /* 0C06AB2E mov.l @(disp,pc),Rn */
	W32(r2, r7); UPD(0x0C06AB32u, 1);  /* 0C06AB30 mov.l Rm,@Rn */
	W32(r6, r7); UPD(0x0C06AB34u, 1);  /* 0C06AB32 mov.l Rm,@Rn */
	IF(0x0C06AB34u); { u32 t_ = r12; PR = 0x0C06AB38u; W8(r4, r5); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06D6E0, 0x0C06D6E0u, 0x0C06AB38u); }  /* 0C06AB34 jsr @Rn */
L_0C06AB38: BLKS(0x0C06AB38u);
	r10 = 0xC0C0910u; UPD(0x0C06AB3Au, 1);  /* 0C06AB38 mov.l @(disp,pc),Rn */
	IF(0x0C06AB3Au); { u32 t_ = r11; PR = 0x0C06AB3Eu; IF(0x0C06AB3Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C072340, 0x0C072340u, 0x0C06AB3Eu); }  /* 0C06AB3A jsr @Rn */
L_0C06AB3E: BLKS(0x0C06AB3Eu);
	r8 = 0xC07D620u; UPD(0x0C06AB40u, 1);  /* 0C06AB3E mov.l @(disp,pc),Rn */
	IF(0x0C06AB40u); { u32 t_ = r10; PR = 0x0C06AB44u; IF(0x0C06AB42u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0910, 0x0C0C0910u, 0x0C06AB44u); }  /* 0C06AB40 jsr @Rn */
L_0C06AB44: BLKS(0x0C06AB44u);
	r11 = 0xC06D520u; UPD(0x0C06AB46u, 1);  /* 0C06AB44 mov.l @(disp,pc),Rn */
	IF(0x0C06AB46u); { u32 t_ = r8; PR = 0x0C06AB4Au; IF(0x0C06AB48u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C07D620, 0x0C07D620u, 0x0C06AB4Au); }  /* 0C06AB46 jsr @Rn */
L_0C06AB4A: BLKS(0x0C06AB4Au);
	r13 = 0xC06D570u; UPD(0x0C06AB4Cu, 1);  /* 0C06AB4A mov.l @(disp,pc),Rn */
	IF(0x0C06AB4Cu); { u32 t_ = r11; PR = 0x0C06AB50u; IF(0x0C06AB4Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D520, 0x0C06D520u, 0x0C06AB50u); }  /* 0C06AB4C jsr @Rn */
L_0C06AB50: BLKS(0x0C06AB50u);
	r12 = 0xC0BF5C0u; UPD(0x0C06AB52u, 1);  /* 0C06AB50 mov.l @(disp,pc),Rn */
	IF(0x0C06AB52u); { u32 t_ = r13; PR = 0x0C06AB56u; IF(0x0C06AB54u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D570, 0x0C06D570u, 0x0C06AB56u); }  /* 0C06AB52 jsr @Rn */
L_0C06AB56: BLKS(0x0C06AB56u);
	r10 = 0xC06D390u; UPD(0x0C06AB58u, 1);  /* 0C06AB56 mov.l @(disp,pc),Rn */
	IF(0x0C06AB58u); { u32 t_ = r12; PR = 0x0C06AB5Cu; IF(0x0C06AB5Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BF5C0, 0x0C0BF5C0u, 0x0C06AB5Cu); }  /* 0C06AB58 jsr @Rn */
L_0C06AB5C: BLKS(0x0C06AB5Cu);
	r8 = 0xC0C1270u; UPD(0x0C06AB5Eu, 1);  /* 0C06AB5C mov.l @(disp,pc),Rn */
	IF(0x0C06AB5Eu); { u32 t_ = r11; PR = 0x0C06AB62u; IF(0x0C06AB60u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D520, 0x0C06D520u, 0x0C06AB62u); }  /* 0C06AB5E jsr @Rn */
L_0C06AB62: BLKS(0x0C06AB62u);
	IF(0x0C06AB62u); { u32 t_ = r10; PR = 0x0C06AB66u; IF(0x0C06AB64u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D390, 0x0C06D390u, 0x0C06AB66u); }  /* 0C06AB62 jsr @Rn */
L_0C06AB66: BLKS(0x0C06AB66u);
	IF(0x0C06AB66u); { u32 t_ = r8; PR = 0x0C06AB6Au; IF(0x0C06AB68u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1270, 0x0C0C1270u, 0x0C06AB6Au); }  /* 0C06AB66 jsr @Rn */
L_0C06AB6A: BLKS(0x0C06AB6Au);
	r0 = 0xC3C43B8u; UPD(0x0C06AB6Cu, 1);  /* 0C06AB6A mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C06AB6Eu, 1);  /* 0C06AB6C mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06AB6E tst Rm,Rn */
	if (T) { UPD(0x0C06AB90u, 4); goto L_0C06AB90; }  /* 0C06AB70 bt */
L_0C06AB72: BLKS(0x0C06AB72u);
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C06AB74u, 1);  /* 0C06AB72 mov.b @Rm,Rn */
	r13 = 0xFFFFFFFFu;  /* 0C06AB74 mov #imm,Rn */
	r8 = 0xC2860FCu; UPD(0x0C06AB78u, 2);  /* 0C06AB76 mov.l @(disp,pc),Rn */
	T = (r10 & r10) == 0;  /* 0C06AB78 tst Rm,Rn */
	IF(0x0C06AB7Au); r9 = T;  /* 0C06AB7A movt Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C06AB7Eu, 3);  /* 0C06AB7C mov.b @Rm,Rn */
	{ u32 t_ = 0u - r13, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C06AB7E negc Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C06AB80 tst Rm,Rn */
	{ u32 t_ = 0u - r13, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C06AB82 negc Rm,Rn */
	r0 &= r3;  /* 0C06AB84 and Rm,Rn */
	r9 |= r0;  /* 0C06AB86 or Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C06AB88 tst Rm,Rn */
	if (T) { UPD(0x0C06AB90u, 9); goto L_0C06AB90; }  /* 0C06AB8A bt */
L_0C06AB8C: BLKS(0x0C06AB8Cu);
	{ IF(0x0C06AB8Eu); ; /* slot nop */ UPD(0x0C06AEE0u, 3); goto L_0C06AEE0; }  /* 0C06AB8C bra */
L_0C06AB90: BLKS(0x0C06AB90u);
	r13 = 0xC060BC0u; UPD(0x0C06AB92u, 1);  /* 0C06AB90 mov.l @(disp,pc),Rn */
	r9 = 0xC061200u; UPD(0x0C06AB94u, 1);  /* 0C06AB92 mov.l @(disp,pc),Rn */
	IF(0x0C06AB94u); { u32 t_ = r13; PR = 0x0C06AB98u; IF(0x0C06AB96u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060BC0, 0x0C060BC0u, 0x0C06AB98u); }  /* 0C06AB94 jsr @Rn */
L_0C06AB98: BLKS(0x0C06AB98u);
	r12 = 0xC062000u; UPD(0x0C06AB9Au, 1);  /* 0C06AB98 mov.l @(disp,pc),Rn */
	IF(0x0C06AB9Au); { u32 t_ = r9; PR = 0x0C06AB9Eu; IF(0x0C06AB9Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061200, 0x0C061200u, 0x0C06AB9Eu); }  /* 0C06AB9A jsr @Rn */
L_0C06AB9E: BLKS(0x0C06AB9Eu);
	r11 = 0xC071630u; UPD(0x0C06ABA0u, 1);  /* 0C06AB9E mov.l @(disp,pc),Rn */
	IF(0x0C06ABA0u); { u32 t_ = r12; PR = 0x0C06ABA4u; IF(0x0C06ABA2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C06ABA4u); }  /* 0C06ABA0 jsr @Rn */
L_0C06ABA4: BLKS(0x0C06ABA4u);
	r10 = 0xC0C0A40u; UPD(0x0C06ABA6u, 1);  /* 0C06ABA4 mov.l @(disp,pc),Rn */
	IF(0x0C06ABA6u); { u32 t_ = r11; PR = 0x0C06ABAAu; IF(0x0C06ABA8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071630, 0x0C071630u, 0x0C06ABAAu); }  /* 0C06ABA6 jsr @Rn */
L_0C06ABAA: BLKS(0x0C06ABAAu);
	r8 = 0xC0AE940u; UPD(0x0C06ABACu, 1);  /* 0C06ABAA mov.l @(disp,pc),Rn */
	IF(0x0C06ABACu); { u32 t_ = r10; PR = 0x0C06ABB0u; IF(0x0C06ABAEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0A40, 0x0C0C0A40u, 0x0C06ABB0u); }  /* 0C06ABAC jsr @Rn */
L_0C06ABB0: BLKS(0x0C06ABB0u);
	r13 = 0xC071CF0u; UPD(0x0C06ABB2u, 1);  /* 0C06ABB0 mov.l @(disp,pc),Rn */
	IF(0x0C06ABB2u); { u32 t_ = r8; PR = 0x0C06ABB6u; IF(0x0C06ABB4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0AE940, 0x0C0AE940u, 0x0C06ABB6u); }  /* 0C06ABB2 jsr @Rn */
L_0C06ABB6: BLKS(0x0C06ABB6u);
	r9 = 0xC0C1B00u; UPD(0x0C06ABB8u, 1);  /* 0C06ABB6 mov.l @(disp,pc),Rn */
	IF(0x0C06ABB8u); { u32 t_ = r13; PR = 0x0C06ABBCu; IF(0x0C06ABBAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071CF0, 0x0C071CF0u, 0x0C06ABBCu); }  /* 0C06ABB8 jsr @Rn */
L_0C06ABBC: BLKS(0x0C06ABBCu);
	r12 = 0xC0AEAB0u; UPD(0x0C06ABBEu, 1);  /* 0C06ABBC mov.l @(disp,pc),Rn */
	IF(0x0C06ABBEu); { u32 t_ = r9; PR = 0x0C06ABC2u; IF(0x0C06ABC0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1B00, 0x0C0C1B00u, 0x0C06ABC2u); }  /* 0C06ABBE jsr @Rn */
L_0C06ABC2: BLKS(0x0C06ABC2u);
	IF(0x0C06ABC2u); { u32 t_ = r12; PR = 0x0C06ABC6u; r9 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0AEAB0, 0x0C0AEAB0u, 0x0C06ABC6u); }  /* 0C06ABC2 jsr @Rn */
L_0C06ABC6: BLKS(0x0C06ABC6u);
	r8 = r9;  /* 0C06ABC6 mov Rm,Rn */
	UPD(0x0C06ABC8u, 1);
L_0C06ABC8: BLKS(0x0C06ABC8u);
	r0 = 0xC2B07BCu; UPD(0x0C06ABCAu, 1);  /* 0C06ABC8 mov.l @(disp,pc),Rn */
	r8 += r8;  /* 0C06ABCA add Rm,Rn */
	IF(0x0C06ABCCu); r4 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C06ABCEu, 2);  /* 0C06ABCC mov.w @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C06ABCE tst Rm,Rn */
	if (T) { UPD(0x0C06ABD6u, 4); goto L_0C06ABD6; }  /* 0C06ABD0 bt */
L_0C06ABD2: BLKS(0x0C06ABD2u);
	{ IF(0x0C06ABD4u); ; /* slot nop */ UPD(0x0C06AED0u, 3); goto L_0C06AED0; }  /* 0C06ABD2 bra */
L_0C06ABD6: BLKS(0x0C06ABD6u);
	r7 = 0xC29D196u; UPD(0x0C06ABD8u, 1);  /* 0C06ABD6 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06ABD8 mov Rm,Rn */
	IF(0x0C06ABDAu); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C06ABDCu, 2);  /* 0C06ABDA mov.w @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C06ABDC tst Rm,Rn */
	if (T) { UPD(0x0C06ABE4u, 4); goto L_0C06ABE4; }  /* 0C06ABDE bt */
L_0C06ABE0: BLKS(0x0C06ABE0u);
	{ IF(0x0C06ABE2u); ; /* slot nop */ UPD(0x0C06AEC0u, 3); goto L_0C06AEC0; }  /* 0C06ABE0 bra */
L_0C06ABE4: BLKS(0x0C06ABE4u);
	r3 = r9;  /* 0C06ABE4 mov Rm,Rn */
	UPD(0x0C06ABE6u, 1);
L_0C06ABE6: BLKS(0x0C06ABE6u);
	r3 += 0x1u;  /* 0C06ABE6 add #imm,Rn */
	r9 = r3 & 0xFF;  /* 0C06ABE8 extu.b Rm,Rn */
	r0 = 0x17u;  /* 0C06ABEA mov #imm,Rn */
	T = r9 > r0;  /* 0C06ABEC cmp/hi Rm,Rn */
	{ u32 c_ = !T; r8 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06ABC8u, 7); goto L_0C06ABC8; } goto L_0C06ABF2; }  /* 0C06ABEE bf/s */
L_0C06ABF2: BLKS(0x0C06ABF2u);
	r8 = 0xC3C8474u; UPD(0x0C06ABF4u, 2);  /* 0C06ABF2 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C06ABF6u, 1);  /* 0C06ABF4 mov.l @Rm,Rn */
	IF(0x0C06ABF6u); T = (s32)r4 > 0;  /* 0C06ABF6 cmp/pl Rn */
	{ u32 c_ = T; r5 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06AC00u, 4); goto L_0C06AC00; } goto L_0C06ABFC; }  /* 0C06ABF8 bt/s */
L_0C06ABFC: BLKS(0x0C06ABFCu);
	{ IF(0x0C06ABFEu); ; /* slot nop */ UPD(0x0C06AEA0u, 4); goto L_0C06AEA0; }  /* 0C06ABFC bra */
L_0C06AC00: BLKS(0x0C06AC00u);
	r12 = 0xC06B6B0u; UPD(0x0C06AC02u, 1);  /* 0C06AC00 mov.l @(disp,pc),Rn */
	r4 += 0xFFFFFFFFu;  /* 0C06AC02 add #imm,Rn */
	r11 = 0xC06B1B0u; UPD(0x0C06AC06u, 2);  /* 0C06AC04 mov.l @(disp,pc),Rn */
	W32(r8, r4); UPD(0x0C06AC08u, 1);  /* 0C06AC06 mov.l Rm,@Rn */
	IF(0x0C06AC08u); { u32 t_ = r12; PR = 0x0C06AC0Cu; r6 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06B6B0, 0x0C06B6B0u, 0x0C06AC0Cu); }  /* 0C06AC08 jsr @Rn */
L_0C06AC0C: BLKS(0x0C06AC0Cu);
	IF(0x0C06AC0Cu); { u32 t_ = r11; PR = 0x0C06AC10u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06B1B0, 0x0C06B1B0u, 0x0C06AC10u); }  /* 0C06AC0C jsr @Rn */
L_0C06AC10: BLKS(0x0C06AC10u);
	r10 = R32(r8); UPD(0x0C06AC12u, 1);  /* 0C06AC10 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C06AC12 tst Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06AC1Cu, 4); goto L_0C06AC1C; } UPD(0x0C06AC18u, 1); goto L_0C06AC18; }  /* 0C06AC14 bf/s */
L_0C06AC18: BLKS(0x0C06AC18u);
	{ r9 = r0; /* slot mov Rm,Rn */ UPD(0x0C06AE80u, 3); goto L_0C06AE80; }  /* 0C06AC18 bra */
L_0C06AC1C: BLKS(0x0C06AC1Cu);
	r5 = 0x16Cu; UPD(0x0C06AC1Eu, 1);  /* 0C06AC1C mov.w @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C06AC1E mov #imm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C06AC22u, 2);  /* 0C06AC20 mov.l @(disp,Rm),Rn */
	r10 = 0x0u;  /* 0C06AC22 mov #imm,Rn */
	IF(0x0C06AC24u); MACL = r1 * r5;  /* 0C06AC24 mul.l Rm,Rn */
	r11 = 0xC173B0Cu; UPD(0x0C06AC28u, 4);  /* 0C06AC26 mov.l @(disp,pc),Rn */
	r13 = 0xC173C84u; UPD(0x0C06AC2Au, 1);  /* 0C06AC28 mov.l @(disp,pc),Rn */
	IF(0x0C06AC2Au); r12 = MACL;  /* 0C06AC2A sts macl,Rn */
	UPD(0x0C06AC2Cu, 1);
L_0C06AC2C: BLKS(0x0C06AC2Cu);
	r0 = 0xC2ABAACu; UPD(0x0C06AC2Eu, 1);  /* 0C06AC2C mov.l @(disp,pc),Rn */
	r8 = r12;  /* 0C06AC2E mov Rm,Rn */
	r8 += r10;  /* 0C06AC30 add Rm,Rn */
	r8 += r0;  /* 0C06AC32 add Rm,Rn */
	r0 = r11;  /* 0C06AC34 mov Rm,Rn */
	r8 += 0x18u;  /* 0C06AC36 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C06AC3Au, 6);  /* 0C06AC38 mov.b @Rm,Rn */
	r6 = 0x0u;  /* 0C06AC3A mov #imm,Rn */
	IF(0x0C06AC3Cu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06AC3Eu, 2);  /* 0C06AC3C mov.b @(r0,Rm),Rn */
	r8 += 0xFFFFFFE8u;  /* 0C06AC3E add #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C06AC40 extu.b Rm,Rn */
	IF(0x0C06AC42u); r0 <<= 2;  /* 0C06AC42 shll2 Rn */
	IF(0x0C06AC44u); r7 = R32(r0 + r13); UPD(0x0C06AC46u, 4);  /* 0C06AC44 mov.l @(r0,Rm),Rn */
	r0 = 0xC071A20u; UPD(0x0C06AC48u, 1);  /* 0C06AC46 mov.l @(disp,pc),Rn */
	IF(0x0C06AC48u); { u32 t_ = r0; PR = 0x0C06AC4Cu; r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071A20, 0x0C071A20u, 0x0C06AC4Cu); }  /* 0C06AC48 jsr @Rn */
L_0C06AC4C: BLKS(0x0C06AC4Cu);
	r2 = R32(r8 + 0x4u); UPD(0x0C06AC4Eu, 1);  /* 0C06AC4C mov.l @(disp,Rm),Rn */
	r7 = 0xFFu; UPD(0x0C06AC50u, 1);  /* 0C06AC4E mov.w @(disp,pc),Rn */
	T = r2 == r7;  /* 0C06AC50 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r0 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06AC5Au, 4); goto L_0C06AC5A; } goto L_0C06AC56; }  /* 0C06AC52 bf/s */
L_0C06AC56: BLKS(0x0C06AC56u);
	{ IF(0x0C06AC58u); r5 = (u32)(s32)(s8)R8(r0 + r9); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C06AE70u, 4); goto L_0C06AE70; }  /* 0C06AC56 bra */
L_0C06AC5A: BLKS(0x0C06AC5Au);
	r5 = 0xCu;  /* 0C06AC5A mov #imm,Rn */
	r2 &= r5;  /* 0C06AC5C and Rm,Rn */
	r0 = r11;  /* 0C06AC5E mov Rm,Rn */
	IF(0x0C06AC60u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06AC62u, 4);  /* 0C06AC60 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06AC62 add #imm,Rn */
	r7 = 0x4u;  /* 0C06AC64 mov #imm,Rn */
	W32(r15, r7); UPD(0x0C06AC68u, 3);  /* 0C06AC66 mov.l Rm,@Rn */
	r0 = r2;  /* 0C06AC68 mov Rm,Rn */
	r6 = 0xC173C74u; UPD(0x0C06AC6Cu, 2);  /* 0C06AC6A mov.l @(disp,pc),Rn */
	r7 = 0x3u;  /* 0C06AC6C mov #imm,Rn */
	IF(0x0C06AC6Eu); r4 = R32(r0 + r6); UPD(0x0C06AC70u, 2);  /* 0C06AC6E mov.l @(r0,Rm),Rn */
	r0 = 0xC062560u; UPD(0x0C06AC72u, 1);  /* 0C06AC70 mov.l @(disp,pc),Rn */
	IF(0x0C06AC72u); { u32 t_ = r0; PR = 0x0C06AC76u; r6 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062560, 0x0C062560u, 0x0C06AC76u); }  /* 0C06AC72 jsr @Rn */
L_0C06AC76: BLKS(0x0C06AC76u);
	r4 = 0xC174FA4u; UPD(0x0C06AC78u, 1);  /* 0C06AC76 mov.l @(disp,pc),Rn */
	r1 = 0x3u;  /* 0C06AC78 mov #imm,Rn */
	r3 = 0xC3C86B0u; UPD(0x0C06AC7Cu, 2);  /* 0C06AC7A mov.l @(disp,pc),Rn */
	r6 = 0x13u;  /* 0C06AC7C mov #imm,Rn */
	W32(r3, r4); UPD(0x0C06AC80u, 2);  /* 0C06AC7E mov.l Rm,@Rn */
	r0 = R32(r8 + 0x4u); UPD(0x0C06AC82u, 1);  /* 0C06AC80 mov.l @(disp,Rm),Rn */
	r3 = 0x0u;  /* 0C06AC82 mov #imm,Rn */
	r8 = 0x8u;  /* 0C06AC84 mov #imm,Rn */
	r8 &= r0;  /* 0C06AC86 and Rm,Rn */
	r0 &= r1;  /* 0C06AC88 and Rm,Rn */
	IF(0x0C06AC8Au); T = r8 & 1; r8 >>= 1;  /* 0C06AC8A shlr Rn */
	r8 |= r0;  /* 0C06AC8C or Rm,Rn */
	r0 = 0xC173AECu; UPD(0x0C06AC90u, 7);  /* 0C06AC8E mov.l @(disp,pc),Rn */
	IF(0x0C06AC90u); r8 <<= 2;  /* 0C06AC90 shll2 Rn */
	IF(0x0C06AC92u); r7 = R32(r0 + r8); UPD(0x0C06AC94u, 2);  /* 0C06AC92 mov.l @(r0,Rm),Rn */
	r5 = 0xC2289E8u; UPD(0x0C06AC96u, 1);  /* 0C06AC94 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C06AC96 mov Rm,Rn */
	W32(r5, r7); UPD(0x0C06AC9Au, 2);  /* 0C06AC98 mov.l Rm,@Rn */
	IF(0x0C06AC9Au); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06AC9Cu, 1);  /* 0C06AC9A mov.b @(r0,Rm),Rn */
	r4 = 0xC3C4048u; UPD(0x0C06AC9Eu, 1);  /* 0C06AC9C mov.l @(disp,pc),Rn */
	IF(0x0C06AC9Eu); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C06AC9E shld Rm,Rn */
	r6 = R32(r4); UPD(0x0C06ACA2u, 2);  /* 0C06ACA0 mov.l @Rm,Rn */
	r8 = 0x880000u; UPD(0x0C06ACA4u, 1);  /* 0C06ACA2 mov.l @(disp,pc),Rn */
	W32(r15, r3); UPD(0x0C06ACA6u, 1);  /* 0C06ACA4 mov.l Rm,@Rn */
	r6 += r8;  /* 0C06ACA6 add Rm,Rn */
	r4 = 0x10000000u; UPD(0x0C06ACAAu, 2);  /* 0C06ACA8 mov.l @(disp,pc),Rn */
	r7 = 0x808080u; UPD(0x0C06ACACu, 1);  /* 0C06ACAA mov.l @(disp,pc),Rn */
	r0 = 0xC073B10u; UPD(0x0C06ACAEu, 1);  /* 0C06ACAC mov.l @(disp,pc),Rn */
L_0C06ACAE: BLKS(0x0C06ACAEu);
	IF(0x0C06ACAEu); { u32 t_ = r0; PR = 0x0C06ACB2u; IF(0x0C06ACB0u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C06ACB2u); }  /* 0C06ACAE jsr @Rn */
L_0C06ACB2: BLKS(0x0C06ACB2u);
	r4 = 0x16Cu; UPD(0x0C06ACB4u, 1);  /* 0C06ACB2 mov.w @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C06ACB4 add #imm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C06ACB8u, 2);  /* 0C06ACB6 mov.l @(disp,Rm),Rn */
	r6 = 0x17u;  /* 0C06ACB8 mov #imm,Rn */
	IF(0x0C06ACBAu); MACL = r1 * r4;  /* 0C06ACBA mul.l Rm,Rn */
	r3 = 0xC173B0Cu; UPD(0x0C06ACBEu, 4);  /* 0C06ACBC mov.l @(disp,pc),Rn */
	IF(0x0C06ACBEu); r0 = MACL;  /* 0C06ACBE sts macl,Rn */
	r4 = 0xC2ABAB4u; UPD(0x0C06ACC2u, 2);  /* 0C06ACC0 mov.l @(disp,pc),Rn */
	r0 += r10;  /* 0C06ACC2 add Rm,Rn */
	r4 += r0;  /* 0C06ACC4 add Rm,Rn */
	r8 = 0xC062500u; UPD(0x0C06ACC8u, 3);  /* 0C06ACC6 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C06ACC8 mov Rm,Rn */
	IF(0x0C06ACCAu); { u32 t_ = r8; PR = 0x0C06ACCEu; IF(0x0C06ACCCu); r5 = (u32)(s32)(s8)R8(r0 + r9); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062500, 0x0C062500u, 0x0C06ACCEu); }  /* 0C06ACCA jsr @Rn */
L_0C06ACCE: BLKS(0x0C06ACCEu);
	r9 += 0x1u;  /* 0C06ACCE add #imm,Rn */
	r8 = 0x9u;  /* 0C06ACD0 mov #imm,Rn */
	T = (s32)r9 > (s32)r8;  /* 0C06ACD2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += 0x1Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06AC2Cu, 6); goto L_0C06AC2C; } goto L_0C06ACD8; }  /* 0C06ACD4 bf/s */
L_0C06ACD8: BLKS(0x0C06ACD8u);
	r9 = 0xC06FC20u; UPD(0x0C06ACDAu, 2);  /* 0C06ACD8 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C06ACDA mov #imm,Rn */
	r12 = 0xC238029u; UPD(0x0C06ACDEu, 2);  /* 0C06ACDC mov.l @(disp,pc),Rn */
	IF(0x0C06ACDEu); { u32 t_ = r9; PR = 0x0C06ACE2u; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06FC20, 0x0C06FC20u, 0x0C06ACE2u); }  /* 0C06ACDE jsr @Rn */
L_0C06ACE2: BLKS(0x0C06ACE2u);
	{ r11 = (u32)(s32)(s8)R8(r12); /* slot mov.b @Rm,Rn */ UPD(0x0C06ADC0u, 3); goto L_0C06ADC0; }  /* 0C06ACE2 bra */
L_0C06ADC0: BLKS(0x0C06ADC0u);
	T = (r11 & r11) == 0;  /* 0C06ADC0 tst Rm,Rn */
	if (!T) { UPD(0x0C06AE60u, 4); goto L_0C06AE60; }  /* 0C06ADC2 bf */
L_0C06ADC4: BLKS(0x0C06ADC4u);
	r5 = R32(r14); UPD(0x0C06ADC6u, 1);  /* 0C06ADC4 mov.l @Rm,Rn */
L_0C06ADC6: BLKS(0x0C06ADC6u);
	IF(0x0C06ADC6u); T = (s32)r5 >= 0;  /* 0C06ADC6 cmp/pz Rn */
	if (!T) { UPD(0x0C06AE50u, 4); goto L_0C06AE50; }  /* 0C06ADC8 bf */
L_0C06ADCA: BLKS(0x0C06ADCAu);
	r7 = 0xEu;  /* 0C06ADCA mov #imm,Rn */
	IF(0x0C06ADCCu); ARG0(0x457Du); { s32 s_ = (s32)r7; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C06ADCC shld Rm,Rn */
	r8 = 0xC061010u; UPD(0x0C06ADD0u, 3);  /* 0C06ADCE mov.l @(disp,pc),Rn */
	r6 = (r5 >> 16) | (r5 << 16);  /* 0C06ADD0 swap.w Rm,Rn */
	r5 = (u32)(s32)(s16)r6;  /* 0C06ADD2 exts.w Rm,Rn */
	IF(0x0C06ADD4u); { u32 t_ = r8; PR = 0x0C06ADD8u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C061010, 0x0C061010u, 0x0C06ADD8u); }  /* 0C06ADD4 jsr @Rn */
L_0C06ADD8: BLKS(0x0C06ADD8u);
	r2 = R32(r14); UPD(0x0C06ADDAu, 1);  /* 0C06ADD8 mov.l @Rm,Rn */
	r10 = 0x1Bu;  /* 0C06ADDA mov #imm,Rn */
	T = (s32)r2 > (s32)r10;  /* 0C06ADDC cmp/gt Rm,Rn */
	{ u32 c_ = T; r3 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06ADE8u, 5); goto L_0C06ADE8; } goto L_0C06ADE2; }  /* 0C06ADDE bt/s */
L_0C06ADE2: BLKS(0x0C06ADE2u);
	r3 += 0x1u;  /* 0C06ADE2 add #imm,Rn */
	r5 = (u32)(s32)(s16)r3;  /* 0C06ADE4 exts.w Rm,Rn */
	W32(r14, r5); UPD(0x0C06ADE8u, 4);  /* 0C06ADE6 mov.l Rm,@Rn */
L_0C06ADE8: BLKS(0x0C06ADE8u);
	r12 = 0xC062250u; UPD(0x0C06ADEAu, 1);  /* 0C06ADE8 mov.l @(disp,pc),Rn */
	r11 = 0xC071BD0u; UPD(0x0C06ADECu, 1);  /* 0C06ADEA mov.l @(disp,pc),Rn */
	IF(0x0C06ADECu); { u32 t_ = r12; PR = 0x0C06ADF0u; IF(0x0C06ADEEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062250, 0x0C062250u, 0x0C06ADF0u); }  /* 0C06ADEC jsr @Rn */
L_0C06ADF0: BLKS(0x0C06ADF0u);
	IF(0x0C06ADF0u); { u32 t_ = r11; PR = 0x0C06ADF4u; IF(0x0C06ADF2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071BD0, 0x0C071BD0u, 0x0C06ADF4u); }  /* 0C06ADF0 jsr @Rn */
L_0C06ADF4: BLKS(0x0C06ADF4u);
	r0 = 0xC2B1A50u; UPD(0x0C06ADF6u, 1);  /* 0C06ADF4 mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C06ADF8u, 1);  /* 0C06ADF6 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C06ADF8 tst Rm,Rn */
	if (!T) { UPD(0x0C06AE0Eu, 4); goto L_0C06AE0E; }  /* 0C06ADFA bf */
L_0C06ADFC: BLKS(0x0C06ADFCu);
	r0 = R32(r14 + 0xCu); UPD(0x0C06ADFEu, 1);  /* 0C06ADFC mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C06ADFE tst Rm,Rn */
	if (!T) { UPD(0x0C06AE0Eu, 4); goto L_0C06AE0E; }  /* 0C06AE00 bf */
L_0C06AE02: BLKS(0x0C06AE02u);
	r9 = 0xC3C5448u; UPD(0x0C06AE04u, 1);  /* 0C06AE02 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C06AE06u, 1);  /* 0C06AE04 mov.l @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06AE06 tst Rm,Rn */
	if (T) { UPD(0x0C06AE24u, 4); goto L_0C06AE24; }  /* 0C06AE08 bt */
L_0C06AE0A: BLKS(0x0C06AE0Au);
	r13 = 0xC239468u; UPD(0x0C06AE0Cu, 1);  /* 0C06AE0A mov.l @(disp,pc),Rn */
	W32(r13, r0); UPD(0x0C06AE0Eu, 1);  /* 0C06AE0C mov.l Rm,@Rn */
L_0C06AE0E: BLKS(0x0C06AE0Eu);
	r8 = 0xC3C8474u; UPD(0x0C06AE10u, 1);  /* 0C06AE0E mov.l @(disp,pc),Rn */
	r10 = R32(r8); UPD(0x0C06AE12u, 1);  /* 0C06AE10 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C06AE12 tst Rm,Rn */
	if (!T) { UPD(0x0C06AEE6u, 4); goto L_0C06AEE6; }  /* 0C06AE14 bf */
L_0C06AE16: BLKS(0x0C06AE16u);
	r7 = 0xC234BA9u; UPD(0x0C06AE18u, 1);  /* 0C06AE16 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C06AE1Au, 1);  /* 0C06AE18 mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C06AE1A tst Rm,Rn */
	{ u32 c_ = T; r5 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C06AEE6u, 4); goto L_0C06AEE6; } UPD(0x0C06AE20u, 1); goto L_0C06AE20; }  /* 0C06AE1C bt/s */
L_0C06AE20: BLKS(0x0C06AE20u);
	T = (r5 & r5) == 0;  /* 0C06AE20 tst Rm,Rn */
	if (!T) { UPD(0x0C06AEE6u, 4); goto L_0C06AEE6; }  /* 0C06AE22 bf */
L_0C06AE24: BLKS(0x0C06AE24u);
	r1 = 0xC0C21A0u; UPD(0x0C06AE26u, 1);  /* 0C06AE24 mov.l @(disp,pc),Rn */
	IF(0x0C06AE26u); { u32 t_ = r1; PR = 0x0C06AE2Au; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C21A0, 0x0C0C21A0u, 0x0C06AE2Au); }  /* 0C06AE26 jsr @Rn */
L_0C06AE2A: BLKS(0x0C06AE2Au);
	r3 = 0xC22E015u; UPD(0x0C06AE2Cu, 1);  /* 0C06AE2A mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C06AE2Eu, 1);  /* 0C06AE2C mov.b @Rm,Rn */
	r14 += 0x10u;  /* 0C06AE2E add #imm,Rn */
	UPD(0x0C06AE30u, 1);
L_0C06AE30: BLKS(0x0C06AE30u);
	r15 = r14;  /* 0C06AE30 mov Rm,Rn */
	IF(0x0C06AE32u); PR = R32(r15); r15 += 4; UPD(0x0C06AE34u, 2);  /* 0C06AE32 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06AE36u, 1);  /* 0C06AE34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06AE38u, 1);  /* 0C06AE36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06AE3Au, 1);  /* 0C06AE38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06AE3Cu, 1);  /* 0C06AE3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06AE3Eu, 1);  /* 0C06AE3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06AE40u, 1);  /* 0C06AE3E mov.l @Rm+,Rn */
	IF(0x0C06AE40u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06AE40 rts */
L_0C06AE50: BLKS(0x0C06AE50u);
	{ r5 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C06ADCAu, 3); goto L_0C06ADCA; }  /* 0C06AE50 bra */
L_0C06AE60: BLKS(0x0C06AE60u);
	r13 = 0xC06D730u; UPD(0x0C06AE62u, 1);  /* 0C06AE60 mov.l @(disp,pc),Rn */
	IF(0x0C06AE62u); { u32 t_ = r13; PR = 0x0C06AE66u; IF(0x0C06AE64u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D730, 0x0C06D730u, 0x0C06AE66u); }  /* 0C06AE62 jsr @Rn */
L_0C06AE66: BLKS(0x0C06AE66u);
	{ r5 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C06ADC6u, 3); goto L_0C06ADC6; }  /* 0C06AE66 bra */
L_0C06AE70: BLKS(0x0C06AE70u);
	r15 += 0xFFFFFFFCu;  /* 0C06AE70 add #imm,Rn */
	r2 = 0x4u;  /* 0C06AE72 mov #imm,Rn */
	r4 = 0xC173C3Cu; UPD(0x0C06AE76u, 3);  /* 0C06AE74 mov.l @(disp,pc),Rn */
	r6 = 0x11u;  /* 0C06AE76 mov #imm,Rn */
	r0 = 0xC062560u; UPD(0x0C06AE7Au, 2);  /* 0C06AE78 mov.l @(disp,pc),Rn */
	r7 = 0x3u;  /* 0C06AE7A mov #imm,Rn */
	{ W32(r15, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C06ACAEu, 4); goto L_0C06ACAE; }  /* 0C06AE7C bra */
L_0C06AE80: BLKS(0x0C06AE80u);
	r4 = 0xC2B037Au; UPD(0x0C06AE82u, 1);  /* 0C06AE80 mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s8)R8(r4); UPD(0x0C06AE84u, 1);  /* 0C06AE82 mov.b @Rm,Rn */
	r8 = 0xC2B0390u; UPD(0x0C06AE86u, 1);  /* 0C06AE84 mov.l @(disp,pc),Rn */
	r9 &= r13;  /* 0C06AE86 and Rm,Rn */
	W8(r8, r9); UPD(0x0C06AE8Au, 2);  /* 0C06AE88 mov.b Rm,@Rn */
L_0C06AE8A: BLKS(0x0C06AE8Au);
	r10 = 0xC06BA60u; UPD(0x0C06AE8Cu, 1);  /* 0C06AE8A mov.l @(disp,pc),Rn */
	IF(0x0C06AE8Cu); { u32 t_ = r10; PR = 0x0C06AE90u; IF(0x0C06AE8Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06BA60, 0x0C06BA60u, 0x0C06AE90u); }  /* 0C06AE8C jsr @Rn */
L_0C06AE90: BLKS(0x0C06AE90u);
	{ W32(r14 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06AC1Cu, 3); goto L_0C06AC1C; }  /* 0C06AE90 bra */
L_0C06AEA0: BLKS(0x0C06AEA0u);
	r2 = 0xC2B1A50u; UPD(0x0C06AEA2u, 1);  /* 0C06AEA0 mov.l @(disp,pc),Rn */
	r1 = R32(r2); UPD(0x0C06AEA4u, 1);  /* 0C06AEA2 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C06AEA4 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06AEACu, 4); goto L_0C06AEAC; } goto L_0C06AEAA; }  /* 0C06AEA6 bt/s */
L_0C06AEAA: BLKS(0x0C06AEAAu);
	W32(r2, r1); UPD(0x0C06AEACu, 2);  /* 0C06AEAA mov.l Rm,@Rn */
L_0C06AEAC: BLKS(0x0C06AEACu);
	r6 = 0xC06B7C0u; UPD(0x0C06AEAEu, 1);  /* 0C06AEAC mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C06AEAE mov #imm,Rn */
	IF(0x0C06AEB0u); { u32 t_ = r6; PR = 0x0C06AEB4u; r5 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C06B7C0, 0x0C06B7C0u, 0x0C06AEB4u); }  /* 0C06AEB0 jsr @Rn */
L_0C06AEB4: BLKS(0x0C06AEB4u);
	{ IF(0x0C06AEB6u); ; /* slot nop */ UPD(0x0C06AE8Au, 3); goto L_0C06AE8A; }  /* 0C06AEB4 bra */
L_0C06AEC0: BLKS(0x0C06AEC0u);
	r2 = 0xC0AE9E0u; UPD(0x0C06AEC2u, 1);  /* 0C06AEC0 mov.l @(disp,pc),Rn */
	IF(0x0C06AEC2u); { u32 t_ = r2; PR = 0x0C06AEC6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0AE9E0, 0x0C0AE9E0u, 0x0C06AEC6u); }  /* 0C06AEC2 jsr @Rn */
L_0C06AEC6: BLKS(0x0C06AEC6u);
	{ r3 = r9; /* slot mov Rm,Rn */ UPD(0x0C06ABE6u, 3); goto L_0C06ABE6; }  /* 0C06AEC6 bra */
L_0C06AED0: BLKS(0x0C06AED0u);
	r5 = 0xC0C1B50u; UPD(0x0C06AED2u, 1);  /* 0C06AED0 mov.l @(disp,pc),Rn */
	IF(0x0C06AED2u); { u32 t_ = r5; PR = 0x0C06AED6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1B50, 0x0C0C1B50u, 0x0C06AED6u); }  /* 0C06AED2 jsr @Rn */
L_0C06AED6: BLKS(0x0C06AED6u);
	{ IF(0x0C06AED8u); ; /* slot nop */ UPD(0x0C06ABD6u, 3); goto L_0C06ABD6; }  /* 0C06AED6 bra */
L_0C06AEE0: BLKS(0x0C06AEE0u);
	r11 = 0xC0C21A0u; UPD(0x0C06AEE2u, 1);  /* 0C06AEE0 mov.l @(disp,pc),Rn */
	IF(0x0C06AEE2u); { u32 t_ = r11; PR = 0x0C06AEE6u; r4 = 0xBu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C21A0, 0x0C0C21A0u, 0x0C06AEE6u); }  /* 0C06AEE2 jsr @Rn */
L_0C06AEE6: BLKS(0x0C06AEE6u);
	{ IF(0x0C06AEE8u); ; /* slot nop */ UPD(0x0C06AB90u, 3); goto L_0C06AB90; }  /* 0C06AEE6 bra */
L_0C06AEF0: BLKS(0x0C06AEF0u);
	r13 = 0xC06AF50u; UPD(0x0C06AEF2u, 1);  /* 0C06AEF0 mov.l @(disp,pc),Rn */
	IF(0x0C06AEF2u); { u32 t_ = r13; PR = 0x0C06AEF6u; IF(0x0C06AEF4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06AF50, 0x0C06AF50u, 0x0C06AEF6u); }  /* 0C06AEF2 jsr @Rn */
L_0C06AEF6: BLKS(0x0C06AEF6u);
	{ IF(0x0C06AEF8u); ; /* slot nop */ UPD(0x0C06AB22u, 3); goto L_0C06AB22; }  /* 0C06AEF6 bra */
}

/* FUN_0c06af50 */
void blk_f_0C06AF50(sh3_t *c)
{
	LOCALS;
L_0C06AF50: BLKS(0x0C06AF50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06AF52u, 1);  /* 0C06AF50 mov.l Rm,@-Rn */
	r6 = 0x0u;  /* 0C06AF52 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06AF56u, 2);  /* 0C06AF54 mov.l Rm,@-Rn */
	r7 = 0xFFFFFFFFu;  /* 0C06AF56 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06AF5Au, 2);  /* 0C06AF58 mov.l Rm,@-Rn */
	r3 = 0x9u;  /* 0C06AF5A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06AF5Eu, 2);  /* 0C06AF5C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06AF60u, 1);  /* 0C06AF5E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06AF62u, 1);  /* 0C06AF60 mov.l Rm,@-Rn */
	r2 = 0xC297490u; UPD(0x0C06AF64u, 1);  /* 0C06AF62 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06AF66u, 1);  /* 0C06AF64 mov.l Rm,@-Rn */
	r0 = 0x16Cu; UPD(0x0C06AF68u, 1);  /* 0C06AF66 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06AF68 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C06AF6Cu, 2);  /* 0C06AF6A mov.b @Rm,Rn */
	r14 = r15;  /* 0C06AF6C mov Rm,Rn */
	IF(0x0C06AF6Eu); MACL = r8 * r0;  /* 0C06AF6E mul.l Rm,Rn */
	r0 = 0xC2ABAC6u; UPD(0x0C06AF72u, 4);  /* 0C06AF70 mov.l @(disp,pc),Rn */
	IF(0x0C06AF72u); r2 = MACL;  /* 0C06AF72 sts macl,Rn */
	r2 += r0;  /* 0C06AF74 add Rm,Rn */
	IF(0x0C06AF76u); ;  /* 0C06AF76 nop */
	UPD(0x0C06AF78u, 3);
L_0C06AF78: BLKS(0x0C06AF78u);
	W8(r2, r7); UPD(0x0C06AF7Au, 1);  /* 0C06AF78 mov.b Rm,@Rn */
	r6 += 0x1u;  /* 0C06AF7A add #imm,Rn */
	T = (s32)r6 > (s32)r3;  /* 0C06AF7C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x1Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06AF78u, 5); goto L_0C06AF78; } goto L_0C06AF82; }  /* 0C06AF7E bf/s */
L_0C06AF82: BLKS(0x0C06AF82u);
	r9 = 0xC2ABAACu; UPD(0x0C06AF84u, 2);  /* 0C06AF82 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C06AF84 mov #imm,Rn */
	r10 = r9;  /* 0C06AF86 mov Rm,Rn */
	r5 = 0x0u;  /* 0C06AF88 mov #imm,Rn */
	r6 = 0x0u;  /* 0C06AF8A mov #imm,Rn */
	UPD(0x0C06AF8Cu, 4);
L_0C06AF8C: BLKS(0x0C06AF8Cu);
	r7 = 0xC29D1D8u; UPD(0x0C06AF8Eu, 1);  /* 0C06AF8C mov.l @(disp,pc),Rn */
	r13 = 0x5u;  /* 0C06AF8E mov #imm,Rn */
	r11 = 0x28Au; UPD(0x0C06AF92u, 2);  /* 0C06AF90 mov.w @(disp,pc),Rn */
	r7 += r6;  /* 0C06AF92 add Rm,Rn */
	r0 = r7;  /* 0C06AF94 mov Rm,Rn */
	IF(0x0C06AF96u); r3 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06AF98u, 3);  /* 0C06AF96 mov.b @(r0,Rm),Rn */
	r2 = 0xC239483u; UPD(0x0C06AF9Au, 1);  /* 0C06AF98 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C06AF9A mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C06AF9C cmp/eq #imm,r0 */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06AFA0u, 3);  /* 0C06AF9E mov.b @Rm,Rn */
	IF(0x0C06AFA0u); r3 = T;  /* 0C06AFA0 movt Rn */
	r12 = r0 & 0xFF;  /* 0C06AFA2 extu.b Rm,Rn */
	T = r13 >= r12;  /* 0C06AFA4 cmp/hs Rm,Rn */
	IF(0x0C06AFA6u); r11 = T;  /* 0C06AFA6 movt Rn */
	r3 &= r11;  /* 0C06AFA8 and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06AFAA tst Rm,Rn */
	if (!T) { UPD(0x0C06AFB2u, 9); goto L_0C06AFB2; }  /* 0C06AFAC bf */
L_0C06AFAE: BLKS(0x0C06AFAEu);
	{ IF(0x0C06AFB0u); ; /* slot nop */ UPD(0x0C06B190u, 3); goto L_0C06B190; }  /* 0C06AFAE bra */
L_0C06AFB2: BLKS(0x0C06AFB2u);
	r0 = 0x16Cu; UPD(0x0C06AFB4u, 1);  /* 0C06AFB2 mov.w @(disp,pc),Rn */
	IF(0x0C06AFB4u); MACL = r8 * r0;  /* 0C06AFB4 mul.l Rm,Rn */
	r3 = 0xC173CB0u; UPD(0x0C06AFB8u, 3);  /* 0C06AFB6 mov.l @(disp,pc),Rn */
	r0 = 0x290u; UPD(0x0C06AFBAu, 1);  /* 0C06AFB8 mov.w @(disp,pc),Rn */
	IF(0x0C06AFBAu); r12 = MACL;  /* 0C06AFBA sts macl,Rn */
	IF(0x0C06AFBCu); r13 = R32(r0 + r7); UPD(0x0C06AFBEu, 2);  /* 0C06AFBC mov.l @(r0,Rm),Rn */
	r12 += r5;  /* 0C06AFBE add Rm,Rn */
	r0 = 0x118u; UPD(0x0C06AFC2u, 2);  /* 0C06AFC0 mov.w @(disp,pc),Rn */
	r12 += r10;  /* 0C06AFC2 add Rm,Rn */
	IF(0x0C06AFC4u); W32(r0 + r12, r13); UPD(0x0C06AFC6u, 2);  /* 0C06AFC4 mov.l Rm,@(r0,Rn) */
	r11 = R32(r7 + 0x4u); UPD(0x0C06AFC8u, 1);  /* 0C06AFC6 mov.l @(disp,Rm),Rn */
	r0 += 0x4u;  /* 0C06AFC8 add #imm,Rn */
	IF(0x0C06AFCAu); W32(r0 + r12, r11); UPD(0x0C06AFCCu, 2);  /* 0C06AFCA mov.l Rm,@(r0,Rn) */
	r0 = r4;  /* 0C06AFCC mov Rm,Rn */
	IF(0x0C06AFCEu); r0 <<= 2;  /* 0C06AFCE shll2 Rn */
	IF(0x0C06AFD0u); r11 = R32(r0 + r3); UPD(0x0C06AFD2u, 3);  /* 0C06AFD0 mov.l @(r0,Rm),Rn */
	r0 = 0x120u; UPD(0x0C06AFD4u, 1);  /* 0C06AFD2 mov.w @(disp,pc),Rn */
	{ u32 v_ = R32(r11); r11 += 4; r2 = v_; } UPD(0x0C06AFD6u, 1);  /* 0C06AFD4 mov.l @Rm+,Rn */
	IF(0x0C06AFD6u); W32(r0 + r12, r2); UPD(0x0C06AFD8u, 1);  /* 0C06AFD6 mov.l Rm,@(r0,Rn) */
	{ u32 v_ = R32(r11); r11 += 4; r13 = v_; } UPD(0x0C06AFDAu, 1);  /* 0C06AFD8 mov.l @Rm+,Rn */
	r0 += 0x4u;  /* 0C06AFDA add #imm,Rn */
	IF(0x0C06AFDCu); W32(r0 + r12, r13); UPD(0x0C06AFDEu, 2);  /* 0C06AFDC mov.l Rm,@(r0,Rn) */
	r3 = 0x130u; UPD(0x0C06AFE0u, 1);  /* 0C06AFDE mov.w @(disp,pc),Rn */
	r0 += 0x4u;  /* 0C06AFE0 add #imm,Rn */
	r2 = R32(r11); UPD(0x0C06AFE4u, 2);  /* 0C06AFE2 mov.l @Rm,Rn */
	r3 += r12;  /* 0C06AFE4 add Rm,Rn */
	IF(0x0C06AFE6u); W32(r0 + r12, r2); UPD(0x0C06AFE8u, 2);  /* 0C06AFE6 mov.l Rm,@(r0,Rn) */
	r3 += 0x2u;  /* 0C06AFE8 add #imm,Rn */
	W8(r3, r4); UPD(0x0C06AFECu, 2);  /* 0C06AFEA mov.b Rm,@Rn */
	r0 += 0x4u;  /* 0C06AFEC add #imm,Rn */
	r13 = 0x0u;  /* 0C06AFEE mov #imm,Rn */
	{ u32 v_ = r4; r3 -= 1; W8(r3, v_); } UPD(0x0C06AFF2u, 3);  /* 0C06AFF0 mov.b Rm,@-Rn */
	IF(0x0C06AFF2u); W32(r0 + r12, r13); UPD(0x0C06AFF4u, 1);  /* 0C06AFF2 mov.l Rm,@(r0,Rn) */
	r1 = R32(r7); UPD(0x0C06AFF6u, 1);  /* 0C06AFF4 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C06AFF6 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B000u, 4); goto L_0C06B000; } goto L_0C06AFFC; }  /* 0C06AFF8 bt/s */
L_0C06AFFC: BLKS(0x0C06AFFCu);
	r7 = 0xC238020u; UPD(0x0C06AFFEu, 2);  /* 0C06AFFC mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C06B000u, 1);  /* 0C06AFFE mov.b @Rm,Rn */
L_0C06B000: BLKS(0x0C06B000u);
	W8(r3, r1); UPD(0x0C06B002u, 1);  /* 0C06B000 mov.b Rm,@Rn */
L_0C06B002: BLKS(0x0C06B002u);
	r3 = 0x2A0u; UPD(0x0C06B004u, 1);  /* 0C06B002 mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C06B004 add #imm,Rn */
	r2 = 0x1u;  /* 0C06B006 mov #imm,Rn */
	r5 += 0x1Cu;  /* 0C06B008 add #imm,Rn */
	T = (s32)r4 > (s32)r2;  /* 0C06B00A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += r3; /* slot add Rm,Rn */ if (c_) { UPD(0x0C06AF8Cu, 7); goto L_0C06AF8C; } goto L_0C06B010; }  /* 0C06B00C bf/s */
L_0C06B010: BLKS(0x0C06B010u);
	r4 = 0x16Cu; UPD(0x0C06B012u, 2);  /* 0C06B010 mov.w @(disp,pc),Rn */
	IF(0x0C06B012u); MACL = r8 * r4;  /* 0C06B012 mul.l Rm,Rn */
	r7 = 0xC2ABAACu; UPD(0x0C06B016u, 3);  /* 0C06B014 mov.l @(disp,pc),Rn */
	IF(0x0C06B016u); r9 = MACL;  /* 0C06B016 sts macl,Rn */
	r5 = 0x150u; UPD(0x0C06B01Au, 2);  /* 0C06B018 mov.w @(disp,pc),Rn */
	r7 += r9;  /* 0C06B01A add Rm,Rn */
	r7 += r5;  /* 0C06B01C add Rm,Rn */
	IF(0x0C06B01Eu); ;  /* 0C06B01E nop */
	UPD(0x0C06B020u, 3);
L_0C06B020: BLKS(0x0C06B020u);
	r2 = 0xC2ABAACu; UPD(0x0C06B022u, 1);  /* 0C06B020 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C06B022 mov #imm,Rn */
	r6 = 0x0u;  /* 0C06B024 mov #imm,Rn */
	r2 += r9;  /* 0C06B026 add Rm,Rn */
	UPD(0x0C06B028u, 3);
L_0C06B028: BLKS(0x0C06B028u);
	IF(0x0C06B028u); MACL = r8 * r4;  /* 0C06B028 mul.l Rm,Rn */
	r3 = R32(r2); UPD(0x0C06B02Cu, 3);  /* 0C06B02A mov.l @Rm,Rn */
	r10 = R32(r2 + 0x1Cu); UPD(0x0C06B02Eu, 1);  /* 0C06B02C mov.l @(disp,Rm),Rn */
	T = r3 >= r10;  /* 0C06B02E cmp/hs Rm,Rn */
	{ u32 c_ = T; IF(0x0C06B032u); r0 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C06B088u, 4); goto L_0C06B088; } goto L_0C06B034; }  /* 0C06B030 bt/s */
L_0C06B034: BLKS(0x0C06B034u);
	W32(r7, r3); UPD(0x0C06B036u, 2);  /* 0C06B034 mov.l Rm,@Rn */
	r5 += 0x1u;  /* 0C06B036 add #imm,Rn */
	r10 = R32(r2 + 0x4u); UPD(0x0C06B03Au, 2);  /* 0C06B038 mov.l @(disp,Rm),Rn */
	W32(r7 + 0x4u, r10); UPD(0x0C06B03Cu, 1);  /* 0C06B03A mov.l Rm,@(disp,Rn) */
	r3 = R32(r2 + 0x8u); UPD(0x0C06B03Eu, 1);  /* 0C06B03C mov.l @(disp,Rm),Rn */
	W32(r7 + 0x8u, r3); UPD(0x0C06B040u, 1);  /* 0C06B03E mov.l Rm,@(disp,Rn) */
	r12 = R32(r2 + 0xCu); UPD(0x0C06B042u, 1);  /* 0C06B040 mov.l @(disp,Rm),Rn */
	W32(r7 + 0xCu, r12); UPD(0x0C06B044u, 1);  /* 0C06B042 mov.l Rm,@(disp,Rn) */
	r13 = R32(r2 + 0x10u); UPD(0x0C06B046u, 1);  /* 0C06B044 mov.l @(disp,Rm),Rn */
	W32(r7 + 0x10u, r13); UPD(0x0C06B048u, 1);  /* 0C06B046 mov.l Rm,@(disp,Rn) */
	r11 = R32(r2 + 0x14u); UPD(0x0C06B04Au, 1);  /* 0C06B048 mov.l @(disp,Rm),Rn */
	W32(r7 + 0x14u, r11); UPD(0x0C06B04Cu, 1);  /* 0C06B04A mov.l Rm,@(disp,Rn) */
	r10 = R32(r2 + 0x18u); UPD(0x0C06B04Eu, 1);  /* 0C06B04C mov.l @(disp,Rm),Rn */
	W32(r7 + 0x18u, r10); UPD(0x0C06B050u, 1);  /* 0C06B04E mov.l Rm,@(disp,Rn) */
	r3 = R32(r2 + 0x1Cu); UPD(0x0C06B052u, 1);  /* 0C06B050 mov.l @(disp,Rm),Rn */
	r12 = R32(r2 + 0x20u); UPD(0x0C06B054u, 1);  /* 0C06B052 mov.l @(disp,Rm),Rn */
	W32(r2, r3); UPD(0x0C06B056u, 1);  /* 0C06B054 mov.l Rm,@Rn */
	W32(r2 + 0x4u, r12); UPD(0x0C06B058u, 1);  /* 0C06B056 mov.l Rm,@(disp,Rn) */
	r13 = R32(r2 + 0x24u); UPD(0x0C06B05Au, 1);  /* 0C06B058 mov.l @(disp,Rm),Rn */
	r11 = R32(r2 + 0x28u); UPD(0x0C06B05Cu, 1);  /* 0C06B05A mov.l @(disp,Rm),Rn */
	r10 = R32(r2 + 0x2Cu); UPD(0x0C06B05Eu, 1);  /* 0C06B05C mov.l @(disp,Rm),Rn */
	r3 = R32(r2 + 0x30u); UPD(0x0C06B060u, 1);  /* 0C06B05E mov.l @(disp,Rm),Rn */
	r12 = R32(r2 + 0x34u); UPD(0x0C06B062u, 1);  /* 0C06B060 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x8u, r13); UPD(0x0C06B064u, 1);  /* 0C06B062 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x18u, r12); UPD(0x0C06B066u, 1);  /* 0C06B064 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0xCu, r11); UPD(0x0C06B068u, 1);  /* 0C06B066 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x10u, r10); UPD(0x0C06B06Au, 1);  /* 0C06B068 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x14u, r3); UPD(0x0C06B06Cu, 1);  /* 0C06B06A mov.l Rm,@(disp,Rn) */
	r13 = R32(r7); UPD(0x0C06B06Eu, 1);  /* 0C06B06C mov.l @Rm,Rn */
	W32(r2 + 0x1Cu, r13); UPD(0x0C06B070u, 1);  /* 0C06B06E mov.l Rm,@(disp,Rn) */
	r11 = R32(r7 + 0x4u); UPD(0x0C06B072u, 1);  /* 0C06B070 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x20u, r11); UPD(0x0C06B074u, 1);  /* 0C06B072 mov.l Rm,@(disp,Rn) */
	r10 = R32(r7 + 0x8u); UPD(0x0C06B076u, 1);  /* 0C06B074 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x24u, r10); UPD(0x0C06B078u, 1);  /* 0C06B076 mov.l Rm,@(disp,Rn) */
	r3 = R32(r7 + 0xCu); UPD(0x0C06B07Au, 1);  /* 0C06B078 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x28u, r3); UPD(0x0C06B07Cu, 1);  /* 0C06B07A mov.l Rm,@(disp,Rn) */
	r12 = R32(r7 + 0x10u); UPD(0x0C06B07Eu, 1);  /* 0C06B07C mov.l @(disp,Rm),Rn */
	W32(r2 + 0x2Cu, r12); UPD(0x0C06B080u, 1);  /* 0C06B07E mov.l Rm,@(disp,Rn) */
	r13 = R32(r7 + 0x14u); UPD(0x0C06B082u, 1);  /* 0C06B080 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x30u, r13); UPD(0x0C06B084u, 1);  /* 0C06B082 mov.l Rm,@(disp,Rn) */
	r11 = R32(r7 + 0x18u); UPD(0x0C06B086u, 1);  /* 0C06B084 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x34u, r11); UPD(0x0C06B088u, 1);  /* 0C06B086 mov.l Rm,@(disp,Rn) */
L_0C06B088: BLKS(0x0C06B088u);
	r6 += 0x1u;  /* 0C06B088 add #imm,Rn */
	r11 = 0xAu;  /* 0C06B08A mov #imm,Rn */
	T = (s32)r6 > (s32)r11;  /* 0C06B08C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x1Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B028u, 6); goto L_0C06B028; } goto L_0C06B092; }  /* 0C06B08E bf/s */
L_0C06B092: BLKS(0x0C06B092u);
	T = (r5 & r5) == 0;  /* 0C06B092 tst Rm,Rn */
	if (!T) { UPD(0x0C06B020u, 5); goto L_0C06B020; }  /* 0C06B094 bf */
L_0C06B096: BLKS(0x0C06B096u);
	r9 = r0;  /* 0C06B096 mov Rm,Rn */
	r5 = 0xC2ABAACu; UPD(0x0C06B09Au, 2);  /* 0C06B098 mov.l @(disp,pc),Rn */
	r12 = 0x80808020u; UPD(0x0C06B09Cu, 1);  /* 0C06B09A mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C06B09C mov #imm,Rn */
	r11 = 0x0u;  /* 0C06B09E mov #imm,Rn */
	r9 += r5;  /* 0C06B0A0 add Rm,Rn */
	IF(0x0C06B0A2u); ;  /* 0C06B0A2 nop */
	UPD(0x0C06B0A4u, 4);
L_0C06B0A4: BLKS(0x0C06B0A4u);
	r6 = 0x130u; UPD(0x0C06B0A6u, 1);  /* 0C06B0A4 mov.w @(disp,pc),Rn */
	r0 = 0xFFFFFFFFu;  /* 0C06B0A6 mov #imm,Rn */
	r6 += r9;  /* 0C06B0A8 add Rm,Rn */
	r6 += 0x2u;  /* 0C06B0AA add #imm,Rn */
	W8(r6, r0); UPD(0x0C06B0AEu, 4);  /* 0C06B0AC mov.b Rm,@Rn */
	r1 = 0x3u;  /* 0C06B0AE mov #imm,Rn */
	r6 += 0x1u;  /* 0C06B0B0 add #imm,Rn */
	W8(r6, r1); UPD(0x0C06B0B4u, 3);  /* 0C06B0B2 mov.b Rm,@Rn */
	r10 = r11;  /* 0C06B0B4 mov Rm,Rn */
	r6 = 0x0u;  /* 0C06B0B6 mov #imm,Rn */
	r7 = 0x0u;  /* 0C06B0B8 mov #imm,Rn */
	IF(0x0C06B0BAu); ;  /* 0C06B0BA nop */
	UPD(0x0C06B0BCu, 4);
L_0C06B0BC: BLKS(0x0C06B0BCu);
	r3 = 0x16Cu; UPD(0x0C06B0BEu, 1);  /* 0C06B0BC mov.w @(disp,pc),Rn */
	IF(0x0C06B0BEu); MACL = r8 * r3;  /* 0C06B0BE mul.l Rm,Rn */
	IF(0x0C06B0C0u); r0 = MACL;  /* 0C06B0C0 sts macl,Rn */
	r0 += r7;  /* 0C06B0C2 add Rm,Rn */
	r0 += r5;  /* 0C06B0C4 add Rm,Rn */
	r0 += 0x1Au;  /* 0C06B0C6 add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r0); UPD(0x0C06B0CAu, 7);  /* 0C06B0C8 mov.b @Rm,Rn */
	r2 = r13 & 0xFF;  /* 0C06B0CA extu.b Rm,Rn */
	T = r2 == r4;  /* 0C06B0CC cmp/eq Rm,Rn */
	{ u32 c_ = T; IF(0x0C06B0D0u); r3 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C06B160u, 5); goto L_0C06B160; } UPD(0x0C06B0D2u, 1); goto L_0C06B0D2; }  /* 0C06B0CE bt/s */
L_0C06B0D2: BLKS(0x0C06B0D2u);
	r6 += 0x1u;  /* 0C06B0D2 add #imm,Rn */
	r2 = 0x9u;  /* 0C06B0D4 mov #imm,Rn */
	T = (s32)r6 > (s32)r2;  /* 0C06B0D6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x1Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B0BCu, 6); goto L_0C06B0BC; } goto L_0C06B0DC; }  /* 0C06B0D8 bf/s */
L_0C06B0DC: BLKS(0x0C06B0DCu);
	r4 += 0x1u;  /* 0C06B0DC add #imm,Rn */
	r7 = 0x1u;  /* 0C06B0DE mov #imm,Rn */
	r11 += 0x1Cu;  /* 0C06B0E0 add #imm,Rn */
	T = (s32)r4 > (s32)r7;  /* 0C06B0E2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x1Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B0A4u, 8); goto L_0C06B0A4; } goto L_0C06B0E8; }  /* 0C06B0E4 bf/s */
L_0C06B0E8: BLKS(0x0C06B0E8u);
	r0 = 0xC2ABAACu; UPD(0x0C06B0EAu, 2);  /* 0C06B0E8 mov.l @(disp,pc),Rn */
	r10 = 0x133u; UPD(0x0C06B0ECu, 1);  /* 0C06B0EA mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C06B0EC add Rm,Rn */
	IF(0x0C06B0EEu); r12 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C06B0F0u, 2);  /* 0C06B0EE mov.b @(r0,Rm),Rn */
	r5 = 0x14Fu; UPD(0x0C06B0F2u, 1);  /* 0C06B0F0 mov.w @(disp,pc),Rn */
	T = (r12 & r12) == 0;  /* 0C06B0F2 tst Rm,Rn */
	IF(0x0C06B0F4u); r9 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C06B0F6u, 2);  /* 0C06B0F4 mov.b @(r0,Rm),Rn */
	IF(0x0C06B0F6u); r4 = T;  /* 0C06B0F6 movt Rn */
	T = (r9 & r9) == 0;  /* 0C06B0F8 tst Rm,Rn */
	IF(0x0C06B0FAu); r8 = T;  /* 0C06B0FA movt Rn */
	r4 |= r8;  /* 0C06B0FC or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06B0FE tst Rm,Rn */
	if (T) { UPD(0x0C06B108u, 8); goto L_0C06B108; }  /* 0C06B100 bt */
L_0C06B102: BLKS(0x0C06B102u);
	r6 = 0x708u; UPD(0x0C06B104u, 1);  /* 0C06B102 mov.w @(disp,pc),Rn */
	r11 = 0xC3C8474u; UPD(0x0C06B106u, 1);  /* 0C06B104 mov.l @(disp,pc),Rn */
	W32(r11, r6); UPD(0x0C06B108u, 1);  /* 0C06B106 mov.l Rm,@Rn */
L_0C06B108: BLKS(0x0C06B108u);
	r14 += 0x4u;  /* 0C06B108 add #imm,Rn */
	r15 = r14;  /* 0C06B10A mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06B10Eu, 3);  /* 0C06B10C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06B110u, 1);  /* 0C06B10E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06B112u, 1);  /* 0C06B110 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06B114u, 1);  /* 0C06B112 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06B116u, 1);  /* 0C06B114 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06B118u, 1);  /* 0C06B116 mov.l @Rm+,Rn */
	IF(0x0C06B118u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06B118 rts */
L_0C06B160: BLKS(0x0C06B160u);
	IF(0x0C06B160u); r0 = MACL;  /* 0C06B160 sts macl,Rn */
	r0 += r10;  /* 0C06B162 add Rm,Rn */
	r2 = 0x130u; UPD(0x0C06B166u, 3);  /* 0C06B164 mov.w @(disp,pc),Rn */
	r0 += r5;  /* 0C06B166 add Rm,Rn */
	W32(r14, r0); UPD(0x0C06B16Au, 2);  /* 0C06B168 mov.l Rm,@Rn */
	r2 += r0;  /* 0C06B16A add Rm,Rn */
	r2 += 0x2u;  /* 0C06B16C add #imm,Rn */
	W8(r2, r6); UPD(0x0C06B170u, 3);  /* 0C06B16E mov.b Rm,@Rn */
	r1 = 0x80808041u; UPD(0x0C06B172u, 1);  /* 0C06B170 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C06B172 add #imm,Rn */
	r0 = R32(r14); UPD(0x0C06B176u, 2);  /* 0C06B174 mov.l @Rm,Rn */
	r13 = 0x120u; UPD(0x0C06B178u, 1);  /* 0C06B176 mov.w @(disp,pc),Rn */
	IF(0x0C06B178u); W32(r0 + r13, r1); UPD(0x0C06B17Au, 1);  /* 0C06B178 mov.l Rm,@(r0,Rn) */
	r1 = 0x124u; UPD(0x0C06B17Cu, 1);  /* 0C06B17A mov.w @(disp,pc),Rn */
	r13 += 0x8u;  /* 0C06B17C add #imm,Rn */
	IF(0x0C06B17Eu); W32(r0 + r1, r12); UPD(0x0C06B180u, 2);  /* 0C06B17E mov.l Rm,@(r0,Rn) */
	IF(0x0C06B180u); W32(r0 + r13, r12); UPD(0x0C06B182u, 1);  /* 0C06B180 mov.l Rm,@(r0,Rn) */
	r13 = 0x0u;  /* 0C06B182 mov #imm,Rn */
	{ W8(r2, r13); /* slot mov.b Rm,@Rn */ UPD(0x0C06B0D2u, 4); goto L_0C06B0D2; }  /* 0C06B184 bra */
L_0C06B190: BLKS(0x0C06B190u);
	r12 = 0x16Cu; UPD(0x0C06B192u, 1);  /* 0C06B190 mov.w @(disp,pc),Rn */
	IF(0x0C06B192u); MACL = r8 * r12;  /* 0C06B192 mul.l Rm,Rn */
	IF(0x0C06B194u); r0 = MACL;  /* 0C06B194 sts macl,Rn */
	r0 += r5;  /* 0C06B196 add Rm,Rn */
	r0 += r9;  /* 0C06B198 add Rm,Rn */
	r12 += 0xFFFFFFACu;  /* 0C06B19A add #imm,Rn */
	{ IF(0x0C06B19Eu); W32(r0 + r12, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C06B002u, 9); goto L_0C06B002; }  /* 0C06B19C bra */
}

/* FUN_0c06b1b0 */
void blk_f_0C06B1B0(sh3_t *c)
{
	LOCALS;
L_0C06B1B0: BLKS(0x0C06B1B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06B1B2u, 1);  /* 0C06B1B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06B1B4u, 1);  /* 0C06B1B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06B1B6u, 1);  /* 0C06B1B4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06B1B8u, 1);  /* 0C06B1B6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06B1BAu, 1);  /* 0C06B1B8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r4;  /* 0C06B1BA exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06B1BEu, 2);  /* 0C06B1BC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06B1C0u, 1);  /* 0C06B1BE mov.l Rm,@-Rn */
	IF(0x0C06B1C0u); r15 -= 4; W32(r15, PR); UPD(0x0C06B1C2u, 1);  /* 0C06B1C0 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF4u;  /* 0C06B1C2 add #imm,Rn */
	r14 = r15;  /* 0C06B1C4 mov Rm,Rn */
	r4 = 0xC237C12u; UPD(0x0C06B1C8u, 3);  /* 0C06B1C6 mov.l @(disp,pc),Rn */
	r2 = 0xC297490u; UPD(0x0C06B1CAu, 1);  /* 0C06B1C8 mov.l @(disp,pc),Rn */
	W32(r14, r11); UPD(0x0C06B1CCu, 1);  /* 0C06B1CA mov.l Rm,@Rn */
	r1 = (u32)(s32)(s16)R16(r4); UPD(0x0C06B1CEu, 1);  /* 0C06B1CC mov.w @Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C06B1D0u, 1);  /* 0C06B1CE mov.b @Rm,Rn */
	r0 = 0xC29D424u; UPD(0x0C06B1D2u, 1);  /* 0C06B1D0 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C06B1D4u, 1);  /* 0C06B1D2 mov.w Rm,@Rn */
	r6 = 0x100u; UPD(0x0C06B1D6u, 1);  /* 0C06B1D4 mov.w @(disp,pc),Rn */
	r0 = r4;  /* 0C06B1D6 mov Rm,Rn */
	IF(0x0C06B1D8u); r3 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C06B1DAu, 2);  /* 0C06B1D8 mov.w @(r0,Rm),Rn */
	r13 = 0xC29D426u; UPD(0x0C06B1DCu, 1);  /* 0C06B1DA mov.l @(disp,pc),Rn */
	r4 = 0x200u; UPD(0x0C06B1DEu, 1);  /* 0C06B1DC mov.w @(disp,pc),Rn */
	W16(r13, r3); UPD(0x0C06B1E0u, 1);  /* 0C06B1DE mov.w Rm,@Rn */
	r10 = 0xC29D428u; UPD(0x0C06B1E2u, 1);  /* 0C06B1E0 mov.l @(disp,pc),Rn */
	IF(0x0C06B1E2u); r12 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C06B1E4u, 1);  /* 0C06B1E2 mov.w @(r0,Rm),Rn */
	r7 = 0xC228BF8u; UPD(0x0C06B1E6u, 1);  /* 0C06B1E4 mov.l @(disp,pc),Rn */
	W16(r10, r12); UPD(0x0C06B1E8u, 1);  /* 0C06B1E6 mov.w Rm,@Rn */
	r0 = r7;  /* 0C06B1E8 mov Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r7); UPD(0x0C06B1ECu, 2);  /* 0C06B1EA mov.w @Rm,Rn */
	r8 = 0xC29D6C4u; UPD(0x0C06B1EEu, 1);  /* 0C06B1EC mov.l @(disp,pc),Rn */
	W16(r8, r9); UPD(0x0C06B1F0u, 1);  /* 0C06B1EE mov.w Rm,@Rn */
	r2 = 0xC29D6C6u; UPD(0x0C06B1F2u, 1);  /* 0C06B1F0 mov.l @(disp,pc),Rn */
	IF(0x0C06B1F2u); r5 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C06B1F4u, 1);  /* 0C06B1F2 mov.w @(r0,Rm),Rn */
	W16(r2, r5); UPD(0x0C06B1F6u, 1);  /* 0C06B1F4 mov.w Rm,@Rn */
	IF(0x0C06B1F6u); r1 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C06B1F8u, 1);  /* 0C06B1F6 mov.w @(r0,Rm),Rn */
	r0 = 0x0u;  /* 0C06B1F8 mov #imm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C06B1FCu, 2);  /* 0C06B1FA mov.l Rm,@(disp,Rn) */
	r3 = 0xC29D6C8u; UPD(0x0C06B1FEu, 1);  /* 0C06B1FC mov.l @(disp,pc),Rn */
	r0 = 0x46u;  /* 0C06B1FE mov #imm,Rn */
	r13 = 0x118u; UPD(0x0C06B202u, 2);  /* 0C06B200 mov.w @(disp,pc),Rn */
	W16(r3, r1); UPD(0x0C06B204u, 1);  /* 0C06B202 mov.w Rm,@Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C06B206u, 1);  /* 0C06B204 mov.l Rm,@(disp,Rn) */
	IF(0x0C06B206u); ;  /* 0C06B206 nop */
	UPD(0x0C06B208u, 1);
L_0C06B208: BLKS(0x0C06B208u);
	r5 = 0x16Cu; UPD(0x0C06B20Au, 1);  /* 0C06B208 mov.w @(disp,pc),Rn */
	IF(0x0C06B20Au); MACL = r11 * r5;  /* 0C06B20A mul.l Rm,Rn */
	r3 = 0xC2ABAACu; UPD(0x0C06B20Eu, 3);  /* 0C06B20C mov.l @(disp,pc),Rn */
	IF(0x0C06B20Eu); r1 = MACL;  /* 0C06B20E sts macl,Rn */
	r1 += r13;  /* 0C06B210 add Rm,Rn */
	r1 += r3;  /* 0C06B212 add Rm,Rn */
	r1 += 0x1Au;  /* 0C06B214 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C06B218u, 5);  /* 0C06B216 mov.b @Rm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C06B218 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r1 += 0xFFFFFFE6u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B222u, 4); goto L_0C06B222; } goto L_0C06B21E; }  /* 0C06B21A bf/s */
L_0C06B21E: BLKS(0x0C06B21Eu);
	{ r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C06B42Cu, 4); goto L_0C06B42C; }  /* 0C06B21E bra */
L_0C06B222: BLKS(0x0C06B222u);
	r1 += 0x1Bu;  /* 0C06B222 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r1); UPD(0x0C06B226u, 2);  /* 0C06B224 mov.b @Rm,Rn */
	r6 = 0x2u;  /* 0C06B226 mov #imm,Rn */
	r8 = r7 & 0xFF;  /* 0C06B228 extu.b Rm,Rn */
	T = r8 > r6;  /* 0C06B22A cmp/hi Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C06B234u, 6); goto L_0C06B234; } UPD(0x0C06B230u, 1); goto L_0C06B230; }  /* 0C06B22C bf/s */
L_0C06B230: BLKS(0x0C06B230u);
	{ r5 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C06B370u, 3); goto L_0C06B370; }  /* 0C06B230 bra */
L_0C06B234: BLKS(0x0C06B234u);
	r4 = 0x2A0u; UPD(0x0C06B236u, 1);  /* 0C06B234 mov.w @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C06B238u, 1);  /* 0C06B236 mov.l @(disp,Rm),Rn */
	IF(0x0C06B238u); MACL = r1 * r4;  /* 0C06B238 mul.l Rm,Rn */
	r10 = 0xC29D1D8u; UPD(0x0C06B23Cu, 3);  /* 0C06B23A mov.l @(disp,pc),Rn */
	IF(0x0C06B23Cu); r12 = MACL;  /* 0C06B23C sts macl,Rn */
	r0 = 0x250u; UPD(0x0C06B240u, 2);  /* 0C06B23E mov.w @(disp,pc),Rn */
	r10 += r12;  /* 0C06B240 add Rm,Rn */
	IF(0x0C06B242u); r0 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C06B244u, 2);  /* 0C06B242 mov.w @(r0,Rm),Rn */
	r0 &= 0x2u;  /* 0C06B244 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06B246 tst Rm,Rn */
	{ u32 c_ = T; r2 = 0x5Bu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06B272u, 5); goto L_0C06B272; } goto L_0C06B24C; }  /* 0C06B248 bt/s */
L_0C06B24C: BLKS(0x0C06B24Cu);
	IF(0x0C06B24Cu); MACL = r11 * r2;  /* 0C06B24C mul.l Rm,Rn */
	r0 = R32(r14 + 0x8u); UPD(0x0C06B250u, 4);  /* 0C06B24E mov.l @(disp,Rm),Rn */
	IF(0x0C06B250u); r2 = MACL;  /* 0C06B250 sts macl,Rn */
	r2 += r0;  /* 0C06B252 add Rm,Rn */
	r2 += r8;  /* 0C06B254 add Rm,Rn */
	IF(0x0C06B256u); r2 <<= 2;  /* 0C06B256 shll2 Rn */
	r2 += r3;  /* 0C06B258 add Rm,Rn */
	r3 = R32(r2 + 0x8u); UPD(0x0C06B25Cu, 6);  /* 0C06B25A mov.l @(disp,Rm),Rn */
	r3 += 0x1u;  /* 0C06B25C add #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C06B25E extu.b Rm,Rn */
	T = r0 == 0x7Bu;  /* 0C06B260 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r2 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06B26Au, 6); goto L_0C06B26A; } UPD(0x0C06B266u, 1); goto L_0C06B266; }  /* 0C06B262 bf/s */
L_0C06B266: BLKS(0x0C06B266u);
	{ IF(0x0C06B268u); ; /* slot nop */ UPD(0x0C06B500u, 3); goto L_0C06B500; }  /* 0C06B266 bra */
L_0C06B26A: BLKS(0x0C06B26Au);
	r3 = 0xC0C22E0u; UPD(0x0C06B26Cu, 1);  /* 0C06B26A mov.l @(disp,pc),Rn */
	r4 = 0x63u;  /* 0C06B26C mov #imm,Rn */
	IF(0x0C06B26Eu); { u32 t_ = r3; PR = 0x0C06B272u; r5 = 0x1Cu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C22E0, 0x0C0C22E0u, 0x0C06B272u); }  /* 0C06B26E jsr @Rn */
L_0C06B272: BLKS(0x0C06B272u);
	r7 = 0x2A0u; UPD(0x0C06B274u, 1);  /* 0C06B272 mov.w @(disp,pc),Rn */
	r10 = R32(r14 + 0x4u); UPD(0x0C06B276u, 1);  /* 0C06B274 mov.l @(disp,Rm),Rn */
	IF(0x0C06B276u); MACL = r10 * r7;  /* 0C06B276 mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C06B27Au, 3);  /* 0C06B278 mov.l @(disp,pc),Rn */
	IF(0x0C06B27Au); r6 = MACL;  /* 0C06B27A sts macl,Rn */
	r0 = 0x250u; UPD(0x0C06B27Eu, 2);  /* 0C06B27C mov.w @(disp,pc),Rn */
	r5 += r6;  /* 0C06B27E add Rm,Rn */
	IF(0x0C06B280u); r0 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C06B282u, 2);  /* 0C06B280 mov.w @(r0,Rm),Rn */
	r0 &= 0x1u;  /* 0C06B282 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06B284 tst Rm,Rn */
	{ u32 c_ = T; r4 = 0x5Bu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06B2B2u, 5); goto L_0C06B2B2; } goto L_0C06B28A; }  /* 0C06B286 bt/s */
L_0C06B28A: BLKS(0x0C06B28Au);
	IF(0x0C06B28Au); MACL = r11 * r4;  /* 0C06B28A mul.l Rm,Rn */
	r12 = R32(r14 + 0x8u); UPD(0x0C06B28Eu, 4);  /* 0C06B28C mov.l @(disp,Rm),Rn */
	IF(0x0C06B28Eu); r2 = MACL;  /* 0C06B28E sts macl,Rn */
	r2 += r12;  /* 0C06B290 add Rm,Rn */
	r2 += r8;  /* 0C06B292 add Rm,Rn */
	r8 = 0xC2ABAACu; UPD(0x0C06B296u, 4);  /* 0C06B294 mov.l @(disp,pc),Rn */
	IF(0x0C06B296u); r2 <<= 2;  /* 0C06B296 shll2 Rn */
	r2 += r8;  /* 0C06B298 add Rm,Rn */
	r3 = R32(r2 + 0x8u); UPD(0x0C06B29Cu, 3);  /* 0C06B29A mov.l @(disp,Rm),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C06B29C add #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C06B29E extu.b Rm,Rn */
	T = r0 == 0x1Fu;  /* 0C06B2A0 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r2 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06B2AAu, 6); goto L_0C06B2AA; } UPD(0x0C06B2A6u, 1); goto L_0C06B2A6; }  /* 0C06B2A2 bf/s */
L_0C06B2A6: BLKS(0x0C06B2A6u);
	{ IF(0x0C06B2A8u); ; /* slot nop */ UPD(0x0C06B4F0u, 3); goto L_0C06B4F0; }  /* 0C06B2A6 bra */
L_0C06B2AA: BLKS(0x0C06B2AAu);
	r2 = 0xC0C22E0u; UPD(0x0C06B2ACu, 1);  /* 0C06B2AA mov.l @(disp,pc),Rn */
	r4 = 0x63u;  /* 0C06B2AC mov #imm,Rn */
	IF(0x0C06B2AEu); { u32 t_ = r2; PR = 0x0C06B2B2u; r5 = 0x1Cu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C22E0, 0x0C0C22E0u, 0x0C06B2B2u); }  /* 0C06B2AE jsr @Rn */
L_0C06B2B2: BLKS(0x0C06B2B2u);
	r5 = 0x2A0u; UPD(0x0C06B2B4u, 1);  /* 0C06B2B2 mov.w @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C06B2B6u, 1);  /* 0C06B2B4 mov.l @(disp,Rm),Rn */
	IF(0x0C06B2B6u); MACL = r1 * r5;  /* 0C06B2B6 mul.l Rm,Rn */
	r9 = 0xC29D1D8u; UPD(0x0C06B2BAu, 3);  /* 0C06B2B8 mov.l @(disp,pc),Rn */
	IF(0x0C06B2BAu); r3 = MACL;  /* 0C06B2BA sts macl,Rn */
	r0 = 0x24Eu; UPD(0x0C06B2BEu, 2);  /* 0C06B2BC mov.w @(disp,pc),Rn */
	r9 += r3;  /* 0C06B2BE add Rm,Rn */
	IF(0x0C06B2C0u); r0 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C06B2C2u, 2);  /* 0C06B2C0 mov.w @(r0,Rm),Rn */
	r0 &= 0xD0u;  /* 0C06B2C2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06B2C4 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x5Bu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06B308u, 5); goto L_0C06B308; } goto L_0C06B2CA; }  /* 0C06B2C6 bt/s */
L_0C06B2CA: BLKS(0x0C06B2CAu);
	r6 = 0x16Cu; UPD(0x0C06B2CCu, 2);  /* 0C06B2CA mov.w @(disp,pc),Rn */
	IF(0x0C06B2CCu); MACL = r11 * r6;  /* 0C06B2CC mul.l Rm,Rn */
	r8 = 0xC2ABAACu; UPD(0x0C06B2D0u, 3);  /* 0C06B2CE mov.l @(disp,pc),Rn */
	IF(0x0C06B2D0u); r7 = MACL;  /* 0C06B2D0 sts macl,Rn */
	r7 += r13;  /* 0C06B2D2 add Rm,Rn */
	IF(0x0C06B2D4u); MACL = r11 * r0;  /* 0C06B2D4 mul.l Rm,Rn */
	r7 += r8;  /* 0C06B2D6 add Rm,Rn */
	r7 += 0x1Bu;  /* 0C06B2D8 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C06B2DCu, 7);  /* 0C06B2DA mov.b @Rm,Rn */
	IF(0x0C06B2DCu); r3 = MACL;  /* 0C06B2DC sts macl,Rn */
	r4 = R32(r14 + 0x8u); UPD(0x0C06B2E0u, 2);  /* 0C06B2DE mov.l @(disp,Rm),Rn */
	r12 = r6 & 0xFF;  /* 0C06B2E0 extu.b Rm,Rn */
	r3 += r4;  /* 0C06B2E2 add Rm,Rn */
	r3 += r12;  /* 0C06B2E4 add Rm,Rn */
	IF(0x0C06B2E6u); r3 <<= 2;  /* 0C06B2E6 shll2 Rn */
	r3 += r8;  /* 0C06B2E8 add Rm,Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C06B2ECu, 6);  /* 0C06B2EA mov.l @(disp,Rm),Rn */
	r10 = 0x3FFu; UPD(0x0C06B2EEu, 1);  /* 0C06B2EC mov.w @(disp,pc),Rn */
	r0 &= r10;  /* 0C06B2EE and Rm,Rn */
	T = r0 == 0x20u;  /* 0C06B2F0 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r9 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06B2FCu, 5); goto L_0C06B2FC; } goto L_0C06B2F6; }  /* 0C06B2F2 bf/s */
L_0C06B2F6: BLKS(0x0C06B2F6u);
	{ r2 = R32(r3 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C06B4E0u, 4); goto L_0C06B4E0; }  /* 0C06B2F6 bra */
L_0C06B2FA: BLKS(0x0C06B2FAu);
	r9 = r6;  /* 0C06B2FA mov Rm,Rn */
	UPD(0x0C06B2FCu, 1);
L_0C06B2FC: BLKS(0x0C06B2FCu);
	r9 += 0x1u;  /* 0C06B2FC add #imm,Rn */
	W8(r7, r9); UPD(0x0C06B300u, 2);  /* 0C06B2FE mov.b Rm,@Rn */
	r4 = 0x5Fu;  /* 0C06B300 mov #imm,Rn */
	r7 = 0xC0C22E0u; UPD(0x0C06B304u, 2);  /* 0C06B302 mov.l @(disp,pc),Rn */
	IF(0x0C06B304u); { u32 t_ = r7; PR = 0x0C06B308u; r5 = 0x24u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C22E0, 0x0C0C22E0u, 0x0C06B308u); }  /* 0C06B304 jsr @Rn */
L_0C06B308: BLKS(0x0C06B308u);
	r10 = 0x2A0u; UPD(0x0C06B30Au, 1);  /* 0C06B308 mov.w @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C06B30Cu, 1);  /* 0C06B30A mov.l @(disp,Rm),Rn */
	IF(0x0C06B30Cu); MACL = r1 * r10;  /* 0C06B30C mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C06B310u, 3);  /* 0C06B30E mov.l @(disp,pc),Rn */
	IF(0x0C06B310u); r3 = MACL;  /* 0C06B310 sts macl,Rn */
	r0 = 0x24Eu; UPD(0x0C06B314u, 2);  /* 0C06B312 mov.w @(disp,pc),Rn */
	r5 += r3;  /* 0C06B314 add Rm,Rn */
	IF(0x0C06B316u); r0 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C06B318u, 2);  /* 0C06B316 mov.w @(r0,Rm),Rn */
	r0 &= 0x20u;  /* 0C06B318 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06B31A tst Rm,Rn */
	if (T) { UPD(0x0C06B336u, 5); goto L_0C06B336; }  /* 0C06B31C bt */
L_0C06B31E: BLKS(0x0C06B31Eu);
	r12 = 0x16Cu; UPD(0x0C06B320u, 1);  /* 0C06B31E mov.w @(disp,pc),Rn */
	IF(0x0C06B320u); MACL = r11 * r12;  /* 0C06B320 mul.l Rm,Rn */
	r8 = 0xC2ABAC7u; UPD(0x0C06B324u, 3);  /* 0C06B322 mov.l @(disp,pc),Rn */
	IF(0x0C06B324u); r2 = MACL;  /* 0C06B324 sts macl,Rn */
	r2 += r13;  /* 0C06B326 add Rm,Rn */
	r2 += r8;  /* 0C06B328 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C06B32Cu, 4);  /* 0C06B32A mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C06B32C tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B336u, 4); goto L_0C06B336; } goto L_0C06B332; }  /* 0C06B32E bt/s */
L_0C06B332: BLKS(0x0C06B332u);
	{ W8(r2, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C06B4D0u, 4); goto L_0C06B4D0; }  /* 0C06B332 bra */
L_0C06B336: BLKS(0x0C06B336u);
	r5 = 0x2A0u; UPD(0x0C06B338u, 1);  /* 0C06B336 mov.w @(disp,pc),Rn */
	r3 = R32(r14 + 0x4u); UPD(0x0C06B33Au, 1);  /* 0C06B338 mov.l @(disp,Rm),Rn */
	IF(0x0C06B33Au); MACL = r3 * r5;  /* 0C06B33A mul.l Rm,Rn */
	r9 = 0xC29D1D8u; UPD(0x0C06B33Eu, 3);  /* 0C06B33C mov.l @(disp,pc),Rn */
	IF(0x0C06B33Eu); r2 = MACL;  /* 0C06B33E sts macl,Rn */
	r0 = 0x250u; UPD(0x0C06B342u, 2);  /* 0C06B340 mov.w @(disp,pc),Rn */
	r9 += r2;  /* 0C06B342 add Rm,Rn */
	r6 = 0xC3C8474u; UPD(0x0C06B346u, 2);  /* 0C06B344 mov.l @(disp,pc),Rn */
	IF(0x0C06B346u); r2 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C06B348u, 1);  /* 0C06B346 mov.w @(r0,Rm),Rn */
	r7 = 0x100u; UPD(0x0C06B34Au, 1);  /* 0C06B348 mov.w @(disp,pc),Rn */
	r4 = R32(r6); UPD(0x0C06B34Cu, 1);  /* 0C06B34A mov.l @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06B34C tst Rm,Rn */
	{ u32 c_ = T; r2 &= r7; /* slot and Rm,Rn */ if (c_) { UPD(0x0C06B356u, 4); goto L_0C06B356; } goto L_0C06B352; }  /* 0C06B34E bt/s */
L_0C06B352: BLKS(0x0C06B352u);
	T = (r2 & r2) == 0;  /* 0C06B352 tst Rm,Rn */
	if (T) { UPD(0x0C06B36Cu, 5); goto L_0C06B36C; }  /* 0C06B354 bt */
L_0C06B356: BLKS(0x0C06B356u);
	r0 = 0x16Cu; UPD(0x0C06B358u, 1);  /* 0C06B356 mov.w @(disp,pc),Rn */
	r12 = 0x3u;  /* 0C06B358 mov #imm,Rn */
	IF(0x0C06B35Au); MACL = r11 * r0;  /* 0C06B35A mul.l Rm,Rn */
	r10 = 0xC0C22E0u; UPD(0x0C06B35Eu, 4);  /* 0C06B35C mov.l @(disp,pc),Rn */
	r4 = 0x5Fu;  /* 0C06B35E mov #imm,Rn */
	IF(0x0C06B360u); r0 = MACL;  /* 0C06B360 sts macl,Rn */
	r8 = 0xC2ABAC7u; UPD(0x0C06B364u, 3);  /* 0C06B362 mov.l @(disp,pc),Rn */
	r0 += r13;  /* 0C06B364 add Rm,Rn */
	IF(0x0C06B366u); W8(r0 + r8, r12); UPD(0x0C06B368u, 2);  /* 0C06B366 mov.b Rm,@(r0,Rn) */
	IF(0x0C06B368u); { u32 t_ = r10; PR = 0x0C06B36Cu; r5 = 0x24u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C22E0, 0x0C0C22E0u, 0x0C06B36Cu); }  /* 0C06B368 jsr @Rn */
L_0C06B36C: BLKS(0x0C06B36Cu);
	r0 = R32(r14 + 0x4u); UPD(0x0C06B36Eu, 1);  /* 0C06B36C mov.l @(disp,Rm),Rn */
	r5 = 0x3u;  /* 0C06B36E mov #imm,Rn */
	UPD(0x0C06B370u, 1);
L_0C06B370: BLKS(0x0C06B370u);
	r2 = 0xC173CF4u; UPD(0x0C06B372u, 1);  /* 0C06B370 mov.l @(disp,pc),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C06B374u, 1);  /* 0C06B372 mov.l @(disp,Rm),Rn */
	IF(0x0C06B374u); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C06B376u, 1);  /* 0C06B374 mov.b @(r0,Rm),Rn */
	IF(0x0C06B376u); r4 <<= 2;  /* 0C06B376 shll2 Rn */
	r9 = 0xC062500u; UPD(0x0C06B37Au, 2);  /* 0C06B378 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C06B37A mov Rm,Rn */
	r7 = 0xC173CF8u; UPD(0x0C06B37Eu, 2);  /* 0C06B37C mov.l @(disp,pc),Rn */
	r12 = 0xC2ABAACu; UPD(0x0C06B380u, 1);  /* 0C06B37E mov.l @(disp,pc),Rn */
	IF(0x0C06B380u); { u32 t_ = r9; PR = 0x0C06B384u; IF(0x0C06B382u); r4 = R32(r0 + r7); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062500, 0x0C062500u, 0x0C06B384u); }  /* 0C06B380 jsr @Rn */
L_0C06B384: BLKS(0x0C06B384u);
	r9 = 0x0u;  /* 0C06B384 mov #imm,Rn */
	IF(0x0C06B386u); ;  /* 0C06B386 nop */
	UPD(0x0C06B388u, 2);
L_0C06B388: BLKS(0x0C06B388u);
	r10 = 0xC2B039Cu; UPD(0x0C06B38Au, 1);  /* 0C06B388 mov.l @(disp,pc),Rn */
	r5 = 0xFFFFFFFFu;  /* 0C06B38A mov #imm,Rn */
	r0 = R32(r10); UPD(0x0C06B38Eu, 2);  /* 0C06B38C mov.l @Rm,Rn */
	r10 = 0x16Cu; UPD(0x0C06B390u, 1);  /* 0C06B38E mov.w @(disp,pc),Rn */
	IF(0x0C06B390u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06B390 shar Rn */
	IF(0x0C06B392u); MACL = r11 * r10;  /* 0C06B392 mul.l Rm,Rn */
	IF(0x0C06B394u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06B394 shar Rn */
	IF(0x0C06B396u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06B396 shar Rn */
	IF(0x0C06B398u); r8 = MACL;  /* 0C06B398 sts macl,Rn */
	r8 += r13;  /* 0C06B39A add Rm,Rn */
	r4 = r8;  /* 0C06B39C mov Rm,Rn */
	r4 += r12;  /* 0C06B39E add Rm,Rn */
	r4 += 0x1Bu;  /* 0C06B3A0 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C06B3A4u, 11);  /* 0C06B3A2 mov.b @Rm,Rn */
	r0 &= 0x1u;  /* 0C06B3A4 and #imm,r0 */
	r3 = r7 & 0xFF;  /* 0C06B3A6 extu.b Rm,Rn */
	T = r9 == r3;  /* 0C06B3A8 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C06B3AA negc Rm,Rn */
	r0 |= r6;  /* 0C06B3AC or Rm,Rn */
	{ T = (r0 & r0) == 0; /* slot tst Rm,Rn */ UPD(0x0C06B410u, 8); goto L_0C06B410; }  /* 0C06B3AE bra */
L_0C06B410: BLKS(0x0C06B410u);
	if (!T) { UPD(0x0C06B4A0u, 3); goto L_0C06B4A0; }  /* 0C06B410 bf */
L_0C06B412: BLKS(0x0C06B412u);
	r9 += 0x1u;  /* 0C06B412 add #imm,Rn */
	UPD(0x0C06B414u, 1);
L_0C06B414: BLKS(0x0C06B414u);
	r4 = 0x2u;  /* 0C06B414 mov #imm,Rn */
	T = (s32)r9 > (s32)r4;  /* 0C06B416 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06B388u, 5); goto L_0C06B388; }  /* 0C06B418 bf */
L_0C06B41A: BLKS(0x0C06B41Au);
	IF(0x0C06B41Au); MACL = r11 * r10;  /* 0C06B41A mul.l Rm,Rn */
	r12 = 0xC2ABAACu; UPD(0x0C06B41Eu, 3);  /* 0C06B41C mov.l @(disp,pc),Rn */
	r8 += r12;  /* 0C06B41E add Rm,Rn */
	r8 += 0x1Bu;  /* 0C06B420 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C06B424u, 3);  /* 0C06B422 mov.b @Rm,Rn */
	T = r0 == 0x3u;  /* 0C06B424 cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C06B428u); r9 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C06B460u, 4); goto L_0C06B460; } UPD(0x0C06B42Au, 1); goto L_0C06B42A; }  /* 0C06B426 bt/s */
L_0C06B42A: BLKS(0x0C06B42Au);
	r5 = R32(r14 + 0x4u); UPD(0x0C06B42Cu, 1);  /* 0C06B42A mov.l @(disp,Rm),Rn */
L_0C06B42C: BLKS(0x0C06B42Cu);
	r12 = 0x1u;  /* 0C06B42C mov #imm,Rn */
	r5 += 0x1u;  /* 0C06B42E add #imm,Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C06B430 exts.w Rm,Rn */
	r3 = R32(r14 + 0x8u); UPD(0x0C06B434u, 4);  /* 0C06B432 mov.l @(disp,Rm),Rn */
	r13 += 0x1Cu;  /* 0C06B434 add #imm,Rn */
	W32(r14 + 0x4u, r10); UPD(0x0C06B438u, 2);  /* 0C06B436 mov.l Rm,@(disp,Rn) */
	r3 += 0x7u;  /* 0C06B438 add #imm,Rn */
	r9 = R32(r14 + 0x4u); UPD(0x0C06B43Cu, 2);  /* 0C06B43A mov.l @(disp,Rm),Rn */
	T = (s32)r9 > (s32)r12;  /* 0C06B43C cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06B446u, 4); goto L_0C06B446; } UPD(0x0C06B442u, 1); goto L_0C06B442; }  /* 0C06B43E bt/s */
L_0C06B442: BLKS(0x0C06B442u);
	{ IF(0x0C06B444u); ; /* slot nop */ UPD(0x0C06B208u, 3); goto L_0C06B208; }  /* 0C06B442 bra */
L_0C06B446: BLKS(0x0C06B446u);
	r0 = R32(r14); UPD(0x0C06B448u, 1);  /* 0C06B446 mov.l @Rm,Rn */
	r14 += 0xCu;  /* 0C06B448 add #imm,Rn */
	r15 = r14;  /* 0C06B44A mov Rm,Rn */
	IF(0x0C06B44Cu); PR = R32(r15); r15 += 4; UPD(0x0C06B44Eu, 3);  /* 0C06B44C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06B450u, 1);  /* 0C06B44E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06B452u, 1);  /* 0C06B450 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06B454u, 1);  /* 0C06B452 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06B456u, 1);  /* 0C06B454 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06B458u, 1);  /* 0C06B456 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06B45Au, 1);  /* 0C06B458 mov.l @Rm+,Rn */
	IF(0x0C06B45Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06B45A rts */
L_0C06B460: BLKS(0x0C06B460u);
	r0 = 0xC06B590u; UPD(0x0C06B462u, 1);  /* 0C06B460 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06B462 mov Rm,Rn */
	IF(0x0C06B464u); { u32 t_ = r0; PR = 0x0C06B468u; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C06B590, 0x0C06B590u, 0x0C06B468u); }  /* 0C06B464 jsr @Rn */
L_0C06B468: BLKS(0x0C06B468u);
	r5 = r9;  /* 0C06B468 mov Rm,Rn */
	r5 += r12;  /* 0C06B46A add Rm,Rn */
	r3 = 0x133u; UPD(0x0C06B46Eu, 3);  /* 0C06B46C mov.w @(disp,pc),Rn */
	r0 = r5;  /* 0C06B46E mov Rm,Rn */
	IF(0x0C06B470u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06B472u, 2);  /* 0C06B470 mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C06B472 mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C06B474 cmp/eq #imm,r0 */
	r10 = 0x14Fu; UPD(0x0C06B478u, 3);  /* 0C06B476 mov.w @(disp,pc),Rn */
	r0 = r5;  /* 0C06B478 mov Rm,Rn */
	IF(0x0C06B47Au); r9 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C06B47Cu, 2);  /* 0C06B47A mov.b @(r0,Rm),Rn */
	IF(0x0C06B47Cu); r8 = T;  /* 0C06B47C movt Rn */
	r0 = r9;  /* 0C06B47E mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C06B480 cmp/eq #imm,r0 */
	IF(0x0C06B482u); r12 = T;  /* 0C06B482 movt Rn */
	r8 &= r12;  /* 0C06B484 and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C06B486 tst Rm,Rn */
	{ u32 c_ = T; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C06B42Cu, 9); goto L_0C06B42C; } UPD(0x0C06B48Cu, 1); goto L_0C06B48C; }  /* 0C06B488 bt/s */
L_0C06B48C: BLKS(0x0C06B48Cu);
	r8 = 0xC3C43BCu; UPD(0x0C06B48Eu, 1);  /* 0C06B48C mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C06B48E mov #imm,Rn */
	r7 = 0xC3C8474u; UPD(0x0C06B492u, 2);  /* 0C06B490 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06B492 mov Rm,Rn */
	r1 = 0x0u;  /* 0C06B494 mov #imm,Rn */
	r6 = 0x1u;  /* 0C06B496 mov #imm,Rn */
	IF(0x0C06B498u); W8(r0 + r11, r4); UPD(0x0C06B49Au, 4);  /* 0C06B498 mov.b Rm,@(r0,Rn) */
	W32(r7, r1); UPD(0x0C06B49Cu, 1);  /* 0C06B49A mov.l Rm,@Rn */
	{ W32(r14, r6); /* slot mov.l Rm,@Rn */ UPD(0x0C06B42Au, 3); goto L_0C06B42A; }  /* 0C06B49C bra */
L_0C06B4A0: BLKS(0x0C06B4A0u);
	r7 = 0x5Bu;  /* 0C06B4A0 mov #imm,Rn */
	IF(0x0C06B4A2u); MACL = r11 * r7;  /* 0C06B4A2 mul.l Rm,Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C06B4A6u, 4);  /* 0C06B4A4 mov.l @(disp,Rm),Rn */
	r2 = r9;  /* 0C06B4A6 mov Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C06B4AAu, 2);  /* 0C06B4A8 mov.l @(disp,Rm),Rn */
	IF(0x0C06B4AAu); r5 = MACL;  /* 0C06B4AA sts macl,Rn */
	r3 = 0xC173CF4u; UPD(0x0C06B4AEu, 2);  /* 0C06B4AC mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C06B4AE add Rm,Rn */
	IF(0x0C06B4B0u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06B4B2u, 2);  /* 0C06B4B0 mov.b @(r0,Rm),Rn */
	r5 += r9;  /* 0C06B4B2 add Rm,Rn */
	IF(0x0C06B4B4u); r5 <<= 2;  /* 0C06B4B4 shll2 Rn */
	r5 += r12;  /* 0C06B4B6 add Rm,Rn */
	r0 = 0xC06B530u; UPD(0x0C06B4BAu, 4);  /* 0C06B4B8 mov.l @(disp,pc),Rn */
	r2 += r2;  /* 0C06B4BA add Rm,Rn */
	r4 = R32(r5 + 0x8u); UPD(0x0C06B4BEu, 2);  /* 0C06B4BC mov.l @(disp,Rm),Rn */
	r6 += r2;  /* 0C06B4BE add Rm,Rn */
	r6 += 0x4u;  /* 0C06B4C0 add #imm,Rn */
	IF(0x0C06B4C2u); { u32 t_ = r0; PR = 0x0C06B4C6u; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C06B530, 0x0C06B530u, 0x0C06B4C6u); }  /* 0C06B4C2 jsr @Rn */
L_0C06B4C6: BLKS(0x0C06B4C6u);
	{ r9 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C06B414u, 3); goto L_0C06B414; }  /* 0C06B4C6 bra */
L_0C06B4D0: BLKS(0x0C06B4D0u);
	r0 = 0xC0C22E0u; UPD(0x0C06B4D2u, 1);  /* 0C06B4D0 mov.l @(disp,pc),Rn */
	r4 = 0x4Cu;  /* 0C06B4D2 mov #imm,Rn */
	IF(0x0C06B4D4u); { u32 t_ = r0; PR = 0x0C06B4D8u; r5 = 0x28u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C22E0, 0x0C0C22E0u, 0x0C06B4D8u); }  /* 0C06B4D4 jsr @Rn */
L_0C06B4D8: BLKS(0x0C06B4D8u);
	{ IF(0x0C06B4DAu); ; /* slot nop */ UPD(0x0C06B336u, 3); goto L_0C06B336; }  /* 0C06B4D8 bra */
L_0C06B4E0: BLKS(0x0C06B4E0u);
	{ W32(r3 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06B2FAu, 3); goto L_0C06B2FA; }  /* 0C06B4E0 bra */
L_0C06B4F0: BLKS(0x0C06B4F0u);
	r0 = 0xFFFFFC00u; UPD(0x0C06B4F2u, 1);  /* 0C06B4F0 mov.w @(disp,pc),Rn */
	r3 &= r0;  /* 0C06B4F2 and Rm,Rn */
	r3 += 0x7Au;  /* 0C06B4F4 add #imm,Rn */
	{ W32(r2 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06B2AAu, 5); goto L_0C06B2AA; }  /* 0C06B4F6 bra */
L_0C06B500: BLKS(0x0C06B500u);
	r9 = 0xFFFFFC00u; UPD(0x0C06B502u, 1);  /* 0C06B500 mov.w @(disp,pc),Rn */
	r3 &= r9;  /* 0C06B502 and Rm,Rn */
	r3 += 0x20u;  /* 0C06B504 add #imm,Rn */
	{ W32(r2 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06B26Au, 5); goto L_0C06B26A; }  /* 0C06B506 bra */
}

/* FUN_0c06b530 */
void blk_f_0C06B530(sh3_t *c)
{
	LOCALS;
L_0C06B530: BLKS(0x0C06B530u);
	r3 = r5;  /* 0C06B530 mov Rm,Rn */
	r5 = 0xFFFFFC00u; UPD(0x0C06B534u, 2);  /* 0C06B532 mov.w @(disp,pc),Rn */
	r0 = 0xFu;  /* 0C06B534 mov #imm,Rn */
	r2 = 0x1FFu; UPD(0x0C06B538u, 2);  /* 0C06B536 mov.w @(disp,pc),Rn */
	r5 &= r4;  /* 0C06B538 and Rm,Rn */
	r4 &= r2;  /* 0C06B53A and Rm,Rn */
	r0 &= r4;  /* 0C06B53C and Rm,Rn */
	r2 += 0xFFFFFFF1u;  /* 0C06B53E add #imm,Rn */
	r4 &= r2;  /* 0C06B540 and Rm,Rn */
	r7 = 0xC0u; UPD(0x0C06B544u, 6);  /* 0C06B542 mov.w @(disp,pc),Rn */
	IF(0x0C06B544u); r4 <<= 2;  /* 0C06B544 shll2 Rn */
	r4 += r7;  /* 0C06B546 add Rm,Rn */
	r0 += r0;  /* 0C06B548 add Rm,Rn */
	r0 |= r4;  /* 0C06B54A or Rm,Rn */
	r4 = 0x5u;  /* 0C06B54C mov #imm,Rn */
	IF(0x0C06B54Eu); ARG0(0x434Du); { s32 s_ = (s32)r4; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C06B54E shld Rm,Rn */
	r5 += r0;  /* 0C06B550 add Rm,Rn */
	r3 += r6;  /* 0C06B552 add Rm,Rn */
	r2 = 0xC233728u; UPD(0x0C06B556u, 9);  /* 0C06B554 mov.l @(disp,pc),Rn */
	IF(0x0C06B556u); r3 <<= 2;  /* 0C06B556 shll2 Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06B55Au, 2);  /* 0C06B558 mov.l Rm,@-Rn */
	r3 += r2;  /* 0C06B55A add Rm,Rn */
	r0 = 0x80u; UPD(0x0C06B55Eu, 2);  /* 0C06B55C mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C06B55E mov Rm,Rn */
	IF(0x0C06B560u); W32(r0 + r3, r5); UPD(0x0C06B562u, 2);  /* 0C06B560 mov.l Rm,@(r0,Rn) */
	r5 += 0x1u;  /* 0C06B562 add #imm,Rn */
	r0 += 0x4u;  /* 0C06B564 add #imm,Rn */
	IF(0x0C06B566u); W32(r0 + r3, r5); UPD(0x0C06B568u, 3);  /* 0C06B566 mov.l Rm,@(r0,Rn) */
	r5 += 0x1Fu;  /* 0C06B568 add #imm,Rn */
	W32(r3, r5); UPD(0x0C06B56Cu, 2);  /* 0C06B56A mov.l Rm,@Rn */
	r5 += 0x1u;  /* 0C06B56C add #imm,Rn */
	W32(r3 + 0x4u, r5); UPD(0x0C06B570u, 2);  /* 0C06B56E mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C06B570 mov Rm,Rn */
	IF(0x0C06B572u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06B572 rts */
}

/* FUN_0c06b590 */
void blk_f_0C06B590(sh3_t *c)
{
	LOCALS;
L_0C06B590: BLKS(0x0C06B590u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06B592u, 1);  /* 0C06B590 mov.l Rm,@-Rn */
	r0 = r5;  /* 0C06B592 mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06B596u, 2);  /* 0C06B594 mov.l Rm,@-Rn */
	r0 += 0xAu;  /* 0C06B596 add #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06B59Au, 2);  /* 0C06B598 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06B59Cu, 1);  /* 0C06B59A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06B59Eu, 1);  /* 0C06B59C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06B5A0u, 1);  /* 0C06B59E mov.l Rm,@-Rn */
	r12 = r4;  /* 0C06B5A0 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06B5A4u, 2);  /* 0C06B5A2 mov.l Rm,@-Rn */
	r13 = r5;  /* 0C06B5A4 mov Rm,Rn */
	r10 = 0xC1739D0u; UPD(0x0C06B5A8u, 2);  /* 0C06B5A6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06B5A8 add #imm,Rn */
	r14 = r15;  /* 0C06B5AA mov Rm,Rn */
	{ u32 v_ = R32(r10); r10 += 4; r6 = v_; } UPD(0x0C06B5AEu, 3);  /* 0C06B5AC mov.l @Rm+,Rn */
	T = (r6 & r6) == 0;  /* 0C06B5AE tst Rm,Rn */
	{ u32 c_ = T; W32(r14, r0); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06B618u, 4); goto L_0C06B618; } UPD(0x0C06B5B4u, 1); goto L_0C06B5B4; }  /* 0C06B5B0 bt/s */
L_0C06B5B4: BLKS(0x0C06B5B4u);
	r3 = 0x16Cu; UPD(0x0C06B5B6u, 1);  /* 0C06B5B4 mov.w @(disp,pc),Rn */
	r2 = 0x1Cu;  /* 0C06B5B6 mov #imm,Rn */
	IF(0x0C06B5B8u); MACL = r4 * r3;  /* 0C06B5B8 mul.l Rm,Rn */
	r9 = 0xC2ABAACu; UPD(0x0C06B5BCu, 4);  /* 0C06B5BA mov.l @(disp,pc),Rn */
	IF(0x0C06B5BCu); r8 = MACL;  /* 0C06B5BC sts macl,Rn */
	IF(0x0C06B5BEu); MACL = r0 * r2;  /* 0C06B5BE mul.l Rm,Rn */
	r11 = 0xFFFFFC00u; UPD(0x0C06B5C2u, 4);  /* 0C06B5C0 mov.w @(disp,pc),Rn */
	IF(0x0C06B5C2u); r0 = MACL;  /* 0C06B5C2 sts macl,Rn */
	r8 += r0;  /* 0C06B5C4 add Rm,Rn */
	r0 = 0x5Bu;  /* 0C06B5C6 mov #imm,Rn */
	IF(0x0C06B5C8u); MACL = r4 * r0;  /* 0C06B5C8 mul.l Rm,Rn */
	r8 += r9;  /* 0C06B5CA add Rm,Rn */
	IF(0x0C06B5CCu); r4 = MACL;  /* 0C06B5CC sts macl,Rn */
	IF(0x0C06B5CEu); ;  /* 0C06B5CE nop */
	UPD(0x0C06B5D0u, 8);
L_0C06B5D0: BLKS(0x0C06B5D0u);
	r5 = 0x0u;  /* 0C06B5D0 mov #imm,Rn */
	r7 = 0x0u;  /* 0C06B5D2 mov #imm,Rn */
	r0 = R32(r14); UPD(0x0C06B5D6u, 3);  /* 0C06B5D4 mov.l @Rm,Rn */
L_0C06B5D6: BLKS(0x0C06B5D6u);
	r3 = 0x7u;  /* 0C06B5D6 mov #imm,Rn */
	IF(0x0C06B5D8u); MACL = r0 * r3;  /* 0C06B5D8 mul.l Rm,Rn */
	IF(0x0C06B5DAu); r2 = MACL;  /* 0C06B5DA sts macl,Rn */
	r2 += r4;  /* 0C06B5DC add Rm,Rn */
	r2 += r7;  /* 0C06B5DE add Rm,Rn */
	IF(0x0C06B5E0u); r2 <<= 2;  /* 0C06B5E0 shll2 Rn */
	r2 += r9;  /* 0C06B5E2 add Rm,Rn */
	r2 += 0xBu;  /* 0C06B5E4 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C06B5E8u, 10);  /* 0C06B5E6 mov.b @Rm,Rn */
	r0 = 0x19u;  /* 0C06B5E8 mov #imm,Rn */
	r3 += 0xFFFFFF9Fu;  /* 0C06B5EA add #imm,Rn */
	r1 = r3 & 0xFF;  /* 0C06B5EC extu.b Rm,Rn */
	T = r1 > r0;  /* 0C06B5EE cmp/hi Rm,Rn */
	{ u32 c_ = T; r3 += 0x61u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B5FAu, 7); goto L_0C06B5FA; } goto L_0C06B5F4; }  /* 0C06B5F0 bt/s */
L_0C06B5F4: BLKS(0x0C06B5F4u);
	r2 = r3;  /* 0C06B5F4 mov Rm,Rn */
	r2 += 0xFFFFFFE0u;  /* 0C06B5F6 add #imm,Rn */
	r3 = (u32)(s32)(s8)r2;  /* 0C06B5F8 exts.b Rm,Rn */
	UPD(0x0C06B5FAu, 4);
L_0C06B5FA: BLKS(0x0C06B5FAu);
	r1 = r3 & 0xFF;  /* 0C06B5FA extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r3 = v_; } UPD(0x0C06B5FEu, 2);  /* 0C06B5FC mov.b @Rm+,Rn */
	T = r1 == r3;  /* 0C06B5FE cmp/eq Rm,Rn */
	if (T) { UPD(0x0C06B690u, 4); goto L_0C06B690; }  /* 0C06B600 bt */
L_0C06B602: BLKS(0x0C06B602u);
	r7 += 0x1u;  /* 0C06B602 add #imm,Rn */
	r0 = 0x2u;  /* 0C06B604 mov #imm,Rn */
	T = (s32)r7 > (s32)r0;  /* 0C06B606 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C06B5D6u, 6); goto L_0C06B5D6; } UPD(0x0C06B60Cu, 1); goto L_0C06B60C; }  /* 0C06B608 bf/s */
L_0C06B60C: BLKS(0x0C06B60Cu);
	r0 = r5;  /* 0C06B60C mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C06B60E cmp/eq #imm,r0 */
	if (T) { UPD(0x0C06B670u, 5); goto L_0C06B670; }  /* 0C06B610 bt */
L_0C06B612: BLKS(0x0C06B612u);
	{ u32 v_ = R32(r10); r10 += 4; r6 = v_; } UPD(0x0C06B614u, 1);  /* 0C06B612 mov.l @Rm+,Rn */
	T = (r6 & r6) == 0;  /* 0C06B614 tst Rm,Rn */
	if (!T) { UPD(0x0C06B5D0u, 4); goto L_0C06B5D0; }  /* 0C06B616 bf */
L_0C06B618: BLKS(0x0C06B618u);
	r9 = 0x16Cu; UPD(0x0C06B61Au, 1);  /* 0C06B618 mov.w @(disp,pc),Rn */
	r5 = 0x1Cu;  /* 0C06B61A mov #imm,Rn */
	IF(0x0C06B61Cu); MACL = r12 * r9;  /* 0C06B61C mul.l Rm,Rn */
	r0 = R32(r14); UPD(0x0C06B620u, 4);  /* 0C06B61E mov.l @Rm,Rn */
	IF(0x0C06B620u); r13 <<= 2;  /* 0C06B620 shll2 Rn */
	IF(0x0C06B622u); r4 = MACL;  /* 0C06B622 sts macl,Rn */
	IF(0x0C06B624u); MACL = r0 * r5;  /* 0C06B624 mul.l Rm,Rn */
	r7 = 0xC2ABAACu; UPD(0x0C06B628u, 5);  /* 0C06B626 mov.l @(disp,pc),Rn */
	r14 += 0x4u;  /* 0C06B628 add #imm,Rn */
	IF(0x0C06B62Au); r11 = MACL;  /* 0C06B62A sts macl,Rn */
	r11 += r4;  /* 0C06B62C add Rm,Rn */
	r11 += r7;  /* 0C06B62E add Rm,Rn */
	r11 += 0x1Au;  /* 0C06B630 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r11); UPD(0x0C06B634u, 6);  /* 0C06B632 mov.b @Rm,Rn */
	r0 = r13;  /* 0C06B634 mov Rm,Rn */
	r6 = r1 & 0xFF;  /* 0C06B636 extu.b Rm,Rn */
	r8 = 0xC173D00u; UPD(0x0C06B63Au, 3);  /* 0C06B638 mov.l @(disp,pc),Rn */
	IF(0x0C06B63Au); MACL = r6 * r5;  /* 0C06B63A mul.l Rm,Rn */
	IF(0x0C06B63Cu); r9 = R32(r0 + r8); UPD(0x0C06B63Eu, 3);  /* 0C06B63C mov.l @(r0,Rm),Rn */
	r11 += 0xFFFFFFE6u;  /* 0C06B63E add #imm,Rn */
	r3 = R32(r11 + 0x8u); UPD(0x0C06B642u, 2);  /* 0C06B640 mov.l @(disp,Rm),Rn */
	IF(0x0C06B642u); r8 = MACL;  /* 0C06B642 sts macl,Rn */
	r8 += r4;  /* 0C06B644 add Rm,Rn */
	r2 = r3 & 0xFF;  /* 0C06B646 extu.b Rm,Rn */
	r8 += r7;  /* 0C06B648 add Rm,Rn */
	r2 |= r9;  /* 0C06B64A or Rm,Rn */
	W32(r8 + 0x8u, r2); UPD(0x0C06B64Eu, 6);  /* 0C06B64C mov.l Rm,@(disp,Rn) */
	r13 = R32(r11 + 0xCu); UPD(0x0C06B650u, 1);  /* 0C06B64E mov.l @(disp,Rm),Rn */
	r12 = r13 & 0xFF;  /* 0C06B650 extu.b Rm,Rn */
	r12 |= r9;  /* 0C06B652 or Rm,Rn */
	W32(r8 + 0xCu, r12); UPD(0x0C06B656u, 3);  /* 0C06B654 mov.l Rm,@(disp,Rn) */
	r10 = R32(r11 + 0x10u); UPD(0x0C06B658u, 1);  /* 0C06B656 mov.l @(disp,Rm),Rn */
	r4 = r10 & 0xFF;  /* 0C06B658 extu.b Rm,Rn */
	r9 |= r4;  /* 0C06B65A or Rm,Rn */
	W32(r8 + 0x10u, r9); UPD(0x0C06B65Eu, 3);  /* 0C06B65C mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C06B65E mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06B662u, 2);  /* 0C06B660 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06B664u, 1);  /* 0C06B662 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06B666u, 1);  /* 0C06B664 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06B668u, 1);  /* 0C06B666 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06B66Au, 1);  /* 0C06B668 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06B66Cu, 1);  /* 0C06B66A mov.l @Rm+,Rn */
	IF(0x0C06B66Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06B66C rts */
L_0C06B670: BLKS(0x0C06B670u);
	r7 = R32(r8 + 0x8u); UPD(0x0C06B672u, 1);  /* 0C06B670 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0xCu); UPD(0x0C06B674u, 1);  /* 0C06B672 mov.l @(disp,Rm),Rn */
	r7 &= r11;  /* 0C06B674 and Rm,Rn */
	r5 = R32(r8 + 0x10u); UPD(0x0C06B678u, 2);  /* 0C06B676 mov.l @(disp,Rm),Rn */
	r6 &= r11;  /* 0C06B678 and Rm,Rn */
	r5 &= r11;  /* 0C06B67A and Rm,Rn */
	r7 += 0x63u;  /* 0C06B67C add #imm,Rn */
	r6 += 0x61u;  /* 0C06B67E add #imm,Rn */
	r5 += 0x76u;  /* 0C06B680 add #imm,Rn */
	W32(r8 + 0x8u, r7); UPD(0x0C06B684u, 6);  /* 0C06B682 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r6); UPD(0x0C06B686u, 1);  /* 0C06B684 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x10u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06B612u, 3); goto L_0C06B612; }  /* 0C06B686 bra */
L_0C06B690: BLKS(0x0C06B690u);
	{ r5 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C06B602u, 3); goto L_0C06B602; }  /* 0C06B690 bra */
}

/* FUN_0c06b6b0 */
void blk_f_0C06B6B0(sh3_t *c)
{
	LOCALS;
L_0C06B6B0: BLKS(0x0C06B6B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06B6B2u, 1);  /* 0C06B6B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06B6B4u, 1);  /* 0C06B6B2 mov.l Rm,@-Rn */
	r8 = r5;  /* 0C06B6B4 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06B6B8u, 2);  /* 0C06B6B6 mov.l Rm,@-Rn */
	r9 = r6;  /* 0C06B6B8 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06B6BCu, 2);  /* 0C06B6BA mov.l Rm,@-Rn */
	r5 = 0x3Cu;  /* 0C06B6BC mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06B6C0u, 2);  /* 0C06B6BE mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06B6C2u, 1);  /* 0C06B6C0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06B6C4u, 1);  /* 0C06B6C2 mov.l Rm,@-Rn */
	r13 = 0xC0C2310u; UPD(0x0C06B6C6u, 1);  /* 0C06B6C4 mov.l @(disp,pc),Rn */
	IF(0x0C06B6C6u); r15 -= 4; W32(r15, PR); UPD(0x0C06B6C8u, 1);  /* 0C06B6C6 sts.l pr,@-Rn */
	IF(0x0C06B6C8u); { u32 t_ = r13; PR = 0x0C06B6CCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C06B6CCu); }  /* 0C06B6C8 jsr @Rn */
L_0C06B6CC: BLKS(0x0C06B6CCu);
	r11 = r1;  /* 0C06B6CC mov Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C06B6CE tst Rm,Rn */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06B780u, 5); goto L_0C06B780; } goto L_0C06B6D4; }  /* 0C06B6D0 bt/s */
L_0C06B6D4: BLKS(0x0C06B6D4u);
	r4 = r11;  /* 0C06B6D4 mov Rm,Rn */
	UPD(0x0C06B6D6u, 2);
L_0C06B6D6: BLKS(0x0C06B6D6u);
	r11 = 0x5u;  /* 0C06B6D6 mov #imm,Rn */
	IF(0x0C06B6D8u); ARG0(0x48BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C06B6D8 shld Rm,Rn */
	r8 += r9;  /* 0C06B6DA add Rm,Rn */
	r9 = 0xC233728u; UPD(0x0C06B6DEu, 4);  /* 0C06B6DC mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C06B6DE mov #imm,Rn */
	IF(0x0C06B6E0u); { u32 t_ = r13; PR = 0x0C06B6E4u; IF(0x0C06B6E2u); r8 <<= 2; /* slot shll2 Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C06B6E4u); }  /* 0C06B6E0 jsr @Rn */
L_0C06B6E4: BLKS(0x0C06B6E4u);
	r8 += r9;  /* 0C06B6E4 add Rm,Rn */
	r5 = r0;  /* 0C06B6E6 mov Rm,Rn */
	r9 = 0xC173D20u; UPD(0x0C06B6EAu, 3);  /* 0C06B6E8 mov.l @(disp,pc),Rn */
	r0 = r1;  /* 0C06B6EA mov Rm,Rn */
	IF(0x0C06B6ECu); r0 <<= 2;  /* 0C06B6EC shll2 Rn */
	IF(0x0C06B6EEu); r6 = R32(r0 + r9); UPD(0x0C06B6F0u, 3);  /* 0C06B6EE mov.l @(r0,Rm),Rn */
	r10 = 0xFu;  /* 0C06B6F0 mov #imm,Rn */
	r0 = r5;  /* 0C06B6F2 mov Rm,Rn */
	IF(0x0C06B6F4u); r0 <<= 2;  /* 0C06B6F4 shll2 Rn */
	IF(0x0C06B6F6u); r4 = R32(r0 + r9); UPD(0x0C06B6F8u, 4);  /* 0C06B6F6 mov.l @(r0,Rm),Rn */
	r5 = 0x3Cu;  /* 0C06B6F8 mov #imm,Rn */
	r3 = 0x40C0403Au; UPD(0x0C06B6FCu, 2);  /* 0C06B6FA mov.l @(disp,pc),Rn */
	W32(r8 + 0x14u, r4); UPD(0x0C06B6FEu, 1);  /* 0C06B6FC mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x18u, r6); UPD(0x0C06B700u, 1);  /* 0C06B6FE mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C06B700 mov Rm,Rn */
	IF(0x0C06B702u); { u32 t_ = r13; PR = 0x0C06B706u; W32(r8 + 0x10u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C06B706u); }  /* 0C06B702 jsr @Rn */
L_0C06B706: BLKS(0x0C06B706u);
	r4 = r1;  /* 0C06B706 mov Rm,Rn */
	IF(0x0C06B708u); { u32 t_ = r13; PR = 0x0C06B70Cu; r5 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C06B70Cu); }  /* 0C06B708 jsr @Rn */
L_0C06B70C: BLKS(0x0C06B70Cu);
	r7 = r0;  /* 0C06B70C mov Rm,Rn */
	r0 = r1;  /* 0C06B70E mov Rm,Rn */
	IF(0x0C06B710u); r0 <<= 2;  /* 0C06B710 shll2 Rn */
	IF(0x0C06B712u); r13 = R32(r0 + r9); UPD(0x0C06B714u, 4);  /* 0C06B712 mov.l @(r0,Rm),Rn */
	r4 = 0xFu;  /* 0C06B714 mov #imm,Rn */
	r12 = 0x1F0u; UPD(0x0C06B718u, 2);  /* 0C06B716 mov.w @(disp,pc),Rn */
	r10 &= r13;  /* 0C06B718 and Rm,Rn */
	r11 = 0xC0u; UPD(0x0C06B71Cu, 2);  /* 0C06B71A mov.w @(disp,pc),Rn */
	r13 &= r12;  /* 0C06B71C and Rm,Rn */
	IF(0x0C06B71Eu); r13 <<= 2;  /* 0C06B71E shll2 Rn */
	r5 = 0x40C04000u; UPD(0x0C06B722u, 3);  /* 0C06B720 mov.l @(disp,pc),Rn */
	r13 += r11;  /* 0C06B722 add Rm,Rn */
	r10 += r10;  /* 0C06B724 add Rm,Rn */
	r10 |= r13;  /* 0C06B726 or Rm,Rn */
	r0 = 0x88u; UPD(0x0C06B72Au, 4);  /* 0C06B728 mov.w @(disp,pc),Rn */
	r10 |= r5;  /* 0C06B72A or Rm,Rn */
	IF(0x0C06B72Cu); W32(r0 + r8, r10); UPD(0x0C06B72Eu, 2);  /* 0C06B72C mov.l Rm,@(r0,Rn) */
	r10 += 0x1u;  /* 0C06B72E add #imm,Rn */
	r0 += 0x4u;  /* 0C06B730 add #imm,Rn */
	IF(0x0C06B732u); W32(r0 + r8, r10); UPD(0x0C06B734u, 3);  /* 0C06B732 mov.l Rm,@(r0,Rn) */
	r0 = r7;  /* 0C06B734 mov Rm,Rn */
	IF(0x0C06B736u); r0 <<= 2;  /* 0C06B736 shll2 Rn */
	IF(0x0C06B738u); r6 = R32(r0 + r9); UPD(0x0C06B73Au, 3);  /* 0C06B738 mov.l @(r0,Rm),Rn */
	r10 += 0x1Fu;  /* 0C06B73A add #imm,Rn */
	r4 &= r6;  /* 0C06B73C and Rm,Rn */
	W32(r8 + 0x8u, r10); UPD(0x0C06B740u, 3);  /* 0C06B73E mov.l Rm,@(disp,Rn) */
	r6 &= r12;  /* 0C06B740 and Rm,Rn */
	IF(0x0C06B742u); r6 <<= 2;  /* 0C06B742 shll2 Rn */
	r10 += 0x1u;  /* 0C06B744 add #imm,Rn */
	r6 += r11;  /* 0C06B746 add Rm,Rn */
	r4 += r4;  /* 0C06B748 add Rm,Rn */
	W32(r8 + 0xCu, r10); UPD(0x0C06B74Cu, 6);  /* 0C06B74A mov.l Rm,@(disp,Rn) */
	r4 |= r6;  /* 0C06B74C or Rm,Rn */
	r0 = 0x80u; UPD(0x0C06B750u, 2);  /* 0C06B74E mov.w @(disp,pc),Rn */
	r4 |= r5;  /* 0C06B750 or Rm,Rn */
	IF(0x0C06B752u); W32(r0 + r8, r4); UPD(0x0C06B754u, 2);  /* 0C06B752 mov.l Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C06B754 add #imm,Rn */
	r0 += 0x4u;  /* 0C06B756 add #imm,Rn */
	IF(0x0C06B758u); W32(r0 + r8, r4); UPD(0x0C06B75Au, 3);  /* 0C06B758 mov.l Rm,@(r0,Rn) */
	r4 += 0x1Fu;  /* 0C06B75A add #imm,Rn */
	W32(r8, r4); UPD(0x0C06B75Eu, 2);  /* 0C06B75C mov.l Rm,@Rn */
	r4 += 0x1u;  /* 0C06B75E add #imm,Rn */
	W32(r8 + 0x4u, r4); UPD(0x0C06B762u, 2);  /* 0C06B760 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C06B762 mov Rm,Rn */
	IF(0x0C06B764u); PR = R32(r15); r15 += 4; UPD(0x0C06B766u, 2);  /* 0C06B764 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06B768u, 1);  /* 0C06B766 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06B76Au, 1);  /* 0C06B768 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06B76Cu, 1);  /* 0C06B76A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06B76Eu, 1);  /* 0C06B76C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06B770u, 1);  /* 0C06B76E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06B772u, 1);  /* 0C06B770 mov.l @Rm+,Rn */
	IF(0x0C06B772u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06B772 rts */
L_0C06B780: BLKS(0x0C06B780u);
	T = (r0 & r0) == 0;  /* 0C06B780 tst Rm,Rn */
	r3 = 0xC173D08u; UPD(0x0C06B784u, 2);  /* 0C06B782 mov.l @(disp,pc),Rn */
	IF(0x0C06B784u); r0 = T;  /* 0C06B784 movt Rn */
	IF(0x0C06B786u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06B788u, 2);  /* 0C06B786 mov.b @(r0,Rm),Rn */
	r0 = 0xC0C2110u; UPD(0x0C06B78Au, 1);  /* 0C06B788 mov.l @(disp,pc),Rn */
	IF(0x0C06B78Au); { u32 t_ = r0; PR = 0x0C06B78Eu; r4 = r2 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C06B78Eu); }  /* 0C06B78A jsr @Rn */
L_0C06B78E: BLKS(0x0C06B78Eu);
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C06B6D6u, 3); goto L_0C06B6D6; }  /* 0C06B78E bra */
}

/* FUN_0c06b7c0 */
void blk_f_0C06B7C0(sh3_t *c)
{
	LOCALS;
L_0C06B7C0: BLKS(0x0C06B7C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06B7C2u, 1);  /* 0C06B7C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06B7C4u, 1);  /* 0C06B7C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06B7C6u, 1);  /* 0C06B7C4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06B7C8u, 1);  /* 0C06B7C6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06B7CAu, 1);  /* 0C06B7C8 mov.l Rm,@-Rn */
	r11 = r4;  /* 0C06B7CA mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06B7CEu, 2);  /* 0C06B7CC mov.l Rm,@-Rn */
	r12 = r5;  /* 0C06B7CE mov Rm,Rn */
	r10 = 0xC0626E0u; UPD(0x0C06B7D2u, 2);  /* 0C06B7D0 mov.l @(disp,pc),Rn */
	r5 = r4;  /* 0C06B7D2 mov Rm,Rn */
	IF(0x0C06B7D4u); r15 -= 4; W32(r15, PR); UPD(0x0C06B7D6u, 2);  /* 0C06B7D4 sts.l pr,@-Rn */
	r6 = r12;  /* 0C06B7D6 mov Rm,Rn */
	r8 = 0xC173D48u; UPD(0x0C06B7DAu, 2);  /* 0C06B7D8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06B7DA mov Rm,Rn */
	r9 = 0x80808000u; UPD(0x0C06B7DEu, 2);  /* 0C06B7DC mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C06B7DE mov Rm,Rn */
	r7 = r9;  /* 0C06B7E0 mov Rm,Rn */
	IF(0x0C06B7E2u); { u32 t_ = r10; PR = 0x0C06B7E6u; r5 += 0x1u; /* slot add #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06B7E6u); }  /* 0C06B7E2 jsr @Rn */
L_0C06B7E6: BLKS(0x0C06B7E6u);
	r4 = r8;  /* 0C06B7E6 mov Rm,Rn */
	r5 = r11;  /* 0C06B7E8 mov Rm,Rn */
	r6 = r12;  /* 0C06B7EA mov Rm,Rn */
	r7 = r9;  /* 0C06B7EC mov Rm,Rn */
	r0 = r10;  /* 0C06B7EE mov Rm,Rn */
	r15 = r14;  /* 0C06B7F0 mov Rm,Rn */
	IF(0x0C06B7F2u); PR = R32(r15); r15 += 4; UPD(0x0C06B7F4u, 7);  /* 0C06B7F2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06B7F6u, 1);  /* 0C06B7F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06B7F8u, 1);  /* 0C06B7F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06B7FAu, 1);  /* 0C06B7F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06B7FCu, 1);  /* 0C06B7FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06B7FEu, 1);  /* 0C06B7FC mov.l @Rm+,Rn */
	IF(0x0C06B7FEu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0626E0u: TAIL(blk_f_0C0626E0); default: JUMPD(tv_); } }  /* 0C06B7FE jmp @Rn */
}

/* FUN_0c06b810 */
void blk_f_0C06B810(sh3_t *c)
{
	LOCALS;
L_0C06B810: BLKS(0x0C06B810u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06B812u, 1);  /* 0C06B810 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06B814u, 1);  /* 0C06B812 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06B816u, 1);  /* 0C06B814 mov.l Rm,@-Rn */
	r2 = 0xC234BA9u; UPD(0x0C06B818u, 1);  /* 0C06B816 mov.l @(disp,pc),Rn */
	IF(0x0C06B818u); r15 -= 4; W32(r15, PR); UPD(0x0C06B81Au, 1);  /* 0C06B818 sts.l pr,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06B81Cu, 1);  /* 0C06B81A mov.b @Rm,Rn */
	r2 = r0 & 0xFF;  /* 0C06B81C extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C06B81E tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06B8B8u, 5); goto L_0C06B8B8; } goto L_0C06B824; }  /* 0C06B820 bf/s */
L_0C06B824: BLKS(0x0C06B824u);
	r4 = 0xC233720u; UPD(0x0C06B826u, 2);  /* 0C06B824 mov.l @(disp,pc),Rn */
	r8 = 0x78u;  /* 0C06B826 mov #imm,Rn */
	r7 = 0xC29D728u; UPD(0x0C06B82Au, 2);  /* 0C06B828 mov.l @(disp,pc),Rn */
	r6 = 0xC3C4048u; UPD(0x0C06B82Cu, 1);  /* 0C06B82A mov.l @(disp,pc),Rn */
	r5 = 0xC3C5448u; UPD(0x0C06B82Eu, 1);  /* 0C06B82C mov.l @(disp,pc),Rn */
	r3 = R32(r4); UPD(0x0C06B830u, 1);  /* 0C06B82E mov.l @Rm,Rn */
	r0 = 0xC239468u; UPD(0x0C06B832u, 1);  /* 0C06B830 mov.l @(disp,pc),Rn */
	r9 = 0xC073B10u; UPD(0x0C06B834u, 1);  /* 0C06B832 mov.l @(disp,pc),Rn */
	W32(r7, r2); UPD(0x0C06B836u, 1);  /* 0C06B834 mov.l Rm,@Rn */
	W32(r6, r2); UPD(0x0C06B838u, 1);  /* 0C06B836 mov.l Rm,@Rn */
	W32(r5, r2); UPD(0x0C06B83Au, 1);  /* 0C06B838 mov.l Rm,@Rn */
	W32(r0, r3); UPD(0x0C06B83Cu, 1);  /* 0C06B83A mov.l Rm,@Rn */
L_0C06B83C: BLKS(0x0C06B83Cu);
	r0 = 0xC060BC0u; UPD(0x0C06B83Eu, 1);  /* 0C06B83C mov.l @(disp,pc),Rn */
	IF(0x0C06B83Eu); { u32 t_ = r0; PR = 0x0C06B842u; IF(0x0C06B840u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060BC0, 0x0C060BC0u, 0x0C06B842u); }  /* 0C06B83E jsr @Rn */
L_0C06B842: BLKS(0x0C06B842u);
	r0 = 0xC061200u; UPD(0x0C06B844u, 1);  /* 0C06B842 mov.l @(disp,pc),Rn */
	IF(0x0C06B844u); { u32 t_ = r0; PR = 0x0C06B848u; IF(0x0C06B846u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061200, 0x0C061200u, 0x0C06B848u); }  /* 0C06B844 jsr @Rn */
L_0C06B848: BLKS(0x0C06B848u);
	r0 = 0xC062060u; UPD(0x0C06B84Au, 1);  /* 0C06B848 mov.l @(disp,pc),Rn */
	r4 = 0xFFFFFFu; UPD(0x0C06B84Cu, 1);  /* 0C06B84A mov.l @(disp,pc),Rn */
	IF(0x0C06B84Cu); { u32 t_ = r0; PR = 0x0C06B850u; IF(0x0C06B84Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062060, 0x0C062060u, 0x0C06B850u); }  /* 0C06B84C jsr @Rn */
L_0C06B850: BLKS(0x0C06B850u);
	r0 = 0xC062000u; UPD(0x0C06B852u, 1);  /* 0C06B850 mov.l @(disp,pc),Rn */
	IF(0x0C06B852u); { u32 t_ = r0; PR = 0x0C06B856u; IF(0x0C06B854u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C06B856u); }  /* 0C06B852 jsr @Rn */
L_0C06B856: BLKS(0x0C06B856u);
	r3 = 0xC2289E8u; UPD(0x0C06B858u, 1);  /* 0C06B856 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C06B858 mov #imm,Rn */
	r1 = 0xC173D5Au; UPD(0x0C06B85Cu, 2);  /* 0C06B85A mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06B85C add #imm,Rn */
	r4 = 0xC173D50u; UPD(0x0C06B860u, 2);  /* 0C06B85E mov.l @(disp,pc),Rn */
	r0 = 0xC3C86B0u; UPD(0x0C06B862u, 1);  /* 0C06B860 mov.l @(disp,pc),Rn */
	W32(r3, r4); UPD(0x0C06B864u, 1);  /* 0C06B862 mov.l Rm,@Rn */
	W32(r0, r1); UPD(0x0C06B866u, 1);  /* 0C06B864 mov.l Rm,@Rn */
	r4 = 0x0u;  /* 0C06B866 mov #imm,Rn */
	r6 = 0x780000u; UPD(0x0C06B86Au, 2);  /* 0C06B868 mov.l @(disp,pc),Rn */
	r7 = 0x808080u; UPD(0x0C06B86Cu, 1);  /* 0C06B86A mov.l @(disp,pc),Rn */
	r5 = 0xA80000u; UPD(0x0C06B86Eu, 1);  /* 0C06B86C mov.l @(disp,pc),Rn */
	IF(0x0C06B86Eu); { u32 t_ = r9; PR = 0x0C06B872u; W32(r15, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C06B872u); }  /* 0C06B86E jsr @Rn */
L_0C06B872: BLKS(0x0C06B872u);
	r0 = 0xC061010u; UPD(0x0C06B874u, 1);  /* 0C06B872 mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C06B874 add #imm,Rn */
	r4 = 0x7u;  /* 0C06B876 mov #imm,Rn */
	IF(0x0C06B878u); { u32 t_ = r0; PR = 0x0C06B87Cu; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C061010, 0x0C061010u, 0x0C06B87Cu); }  /* 0C06B878 jsr @Rn */
L_0C06B87C: BLKS(0x0C06B87Cu);
	r0 = 0xC062250u; UPD(0x0C06B87Eu, 1);  /* 0C06B87C mov.l @(disp,pc),Rn */
	IF(0x0C06B87Eu); { u32 t_ = r0; PR = 0x0C06B882u; IF(0x0C06B880u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062250, 0x0C062250u, 0x0C06B882u); }  /* 0C06B87E jsr @Rn */
L_0C06B882: BLKS(0x0C06B882u);
	T = (r8 & r8) == 0;  /* 0C06B882 tst Rm,Rn */
	if (T) { UPD(0x0C06B888u, 4); goto L_0C06B888; }  /* 0C06B884 bt */
L_0C06B886: BLKS(0x0C06B886u);
	r8 += 0xFFFFFFFFu;  /* 0C06B886 add #imm,Rn */
	UPD(0x0C06B888u, 1);
L_0C06B888: BLKS(0x0C06B888u);
	r6 = 0xC238029u; UPD(0x0C06B88Au, 1);  /* 0C06B888 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C06B88Cu, 1);  /* 0C06B88A mov.b @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C06B88C tst Rm,Rn */
	if (T) { UPD(0x0C06B89Au, 4); goto L_0C06B89A; }  /* 0C06B88E bt */
L_0C06B890: BLKS(0x0C06B890u);
	r0 = 0x100u; UPD(0x0C06B892u, 1);  /* 0C06B890 mov.w @(disp,pc),Rn */
	r2 = 0xC297638u; UPD(0x0C06B894u, 1);  /* 0C06B892 mov.l @(disp,pc),Rn */
	IF(0x0C06B894u); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06B896u, 1);  /* 0C06B894 mov.w @(r0,Rm),Rn */
	T = (r0 & r7) == 0;  /* 0C06B896 tst Rm,Rn */
	if (!T) { UPD(0x0C06B8B8u, 4); goto L_0C06B8B8; }  /* 0C06B898 bf */
L_0C06B89A: BLKS(0x0C06B89Au);
	r0 = 0xC071BD0u; UPD(0x0C06B89Cu, 1);  /* 0C06B89A mov.l @(disp,pc),Rn */
	IF(0x0C06B89Cu); { u32 t_ = r0; PR = 0x0C06B8A0u; IF(0x0C06B89Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071BD0, 0x0C071BD0u, 0x0C06B8A0u); }  /* 0C06B89C jsr @Rn */
L_0C06B8A0: BLKS(0x0C06B8A0u);
	T = (r8 & r8) == 0;  /* 0C06B8A0 tst Rm,Rn */
	if (!T) { UPD(0x0C06B8B0u, 4); goto L_0C06B8B0; }  /* 0C06B8A2 bf */
L_0C06B8A4: BLKS(0x0C06B8A4u);
	r3 = 0xC3C5448u; UPD(0x0C06B8A6u, 1);  /* 0C06B8A4 mov.l @(disp,pc),Rn */
	r0 = R32(r3); UPD(0x0C06B8A8u, 1);  /* 0C06B8A6 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06B8A8 tst Rm,Rn */
	if (T) { UPD(0x0C06B8B8u, 4); goto L_0C06B8B8; }  /* 0C06B8AA bt */
L_0C06B8AC: BLKS(0x0C06B8ACu);
	r4 = 0xC239468u; UPD(0x0C06B8AEu, 1);  /* 0C06B8AC mov.l @(disp,pc),Rn */
	W32(r4, r8); UPD(0x0C06B8B0u, 1);  /* 0C06B8AE mov.l Rm,@Rn */
L_0C06B8B0: BLKS(0x0C06B8B0u);
	r6 = 0xC234BA9u; UPD(0x0C06B8B2u, 1);  /* 0C06B8B0 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C06B8B4u, 1);  /* 0C06B8B2 mov.b @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C06B8B4 tst Rm,Rn */
	if (T) { UPD(0x0C06B83Cu, 4); goto L_0C06B83C; }  /* 0C06B8B6 bt */
L_0C06B8B8: BLKS(0x0C06B8B8u);
	r15 = r14;  /* 0C06B8B8 mov Rm,Rn */
	IF(0x0C06B8BAu); PR = R32(r15); r15 += 4; UPD(0x0C06B8BCu, 2);  /* 0C06B8BA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06B8BEu, 1);  /* 0C06B8BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06B8C0u, 1);  /* 0C06B8BE mov.l @Rm+,Rn */
	IF(0x0C06B8C0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06B8C0 rts */
}

/* FUN_0c06b930 */
void blk_f_0C06B930(sh3_t *c)
{
	LOCALS;
L_0C06B930: BLKS(0x0C06B930u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06B932u, 1);  /* 0C06B930 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06B934u, 1);  /* 0C06B932 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06B936u, 1);  /* 0C06B934 mov.l Rm,@-Rn */
	r2 = 0xC234BA9u; UPD(0x0C06B938u, 1);  /* 0C06B936 mov.l @(disp,pc),Rn */
	IF(0x0C06B938u); r15 -= 4; W32(r15, PR); UPD(0x0C06B93Au, 1);  /* 0C06B938 sts.l pr,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06B93Cu, 1);  /* 0C06B93A mov.b @Rm,Rn */
	r2 = r0 & 0xFF;  /* 0C06B93C extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C06B93E tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06B9E4u, 5); goto L_0C06B9E4; } goto L_0C06B944; }  /* 0C06B940 bf/s */
L_0C06B944: BLKS(0x0C06B944u);
	r4 = 0xC233720u; UPD(0x0C06B946u, 2);  /* 0C06B944 mov.l @(disp,pc),Rn */
	r8 = 0x78u;  /* 0C06B946 mov #imm,Rn */
	r7 = 0xC29D728u; UPD(0x0C06B94Au, 2);  /* 0C06B948 mov.l @(disp,pc),Rn */
	r6 = 0xC3C4048u; UPD(0x0C06B94Cu, 1);  /* 0C06B94A mov.l @(disp,pc),Rn */
	r5 = 0xC3C5448u; UPD(0x0C06B94Eu, 1);  /* 0C06B94C mov.l @(disp,pc),Rn */
	r3 = R32(r4); UPD(0x0C06B950u, 1);  /* 0C06B94E mov.l @Rm,Rn */
	r0 = 0xC239468u; UPD(0x0C06B952u, 1);  /* 0C06B950 mov.l @(disp,pc),Rn */
	r9 = 0xC073B10u; UPD(0x0C06B954u, 1);  /* 0C06B952 mov.l @(disp,pc),Rn */
	W32(r7, r2); UPD(0x0C06B956u, 1);  /* 0C06B954 mov.l Rm,@Rn */
	W32(r6, r2); UPD(0x0C06B958u, 1);  /* 0C06B956 mov.l Rm,@Rn */
	W32(r5, r2); UPD(0x0C06B95Au, 1);  /* 0C06B958 mov.l Rm,@Rn */
	W32(r0, r3); UPD(0x0C06B95Cu, 1);  /* 0C06B95A mov.l Rm,@Rn */
L_0C06B95C: BLKS(0x0C06B95Cu);
	r0 = 0xC060BC0u; UPD(0x0C06B95Eu, 1);  /* 0C06B95C mov.l @(disp,pc),Rn */
	IF(0x0C06B95Eu); { u32 t_ = r0; PR = 0x0C06B962u; IF(0x0C06B960u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060BC0, 0x0C060BC0u, 0x0C06B962u); }  /* 0C06B95E jsr @Rn */
L_0C06B962: BLKS(0x0C06B962u);
	r0 = 0xC061200u; UPD(0x0C06B964u, 1);  /* 0C06B962 mov.l @(disp,pc),Rn */
	IF(0x0C06B964u); { u32 t_ = r0; PR = 0x0C06B968u; IF(0x0C06B966u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061200, 0x0C061200u, 0x0C06B968u); }  /* 0C06B964 jsr @Rn */
L_0C06B968: BLKS(0x0C06B968u);
	r0 = 0xC062060u; UPD(0x0C06B96Au, 1);  /* 0C06B968 mov.l @(disp,pc),Rn */
	r4 = 0xFFFFFFu; UPD(0x0C06B96Cu, 1);  /* 0C06B96A mov.l @(disp,pc),Rn */
	IF(0x0C06B96Cu); { u32 t_ = r0; PR = 0x0C06B970u; IF(0x0C06B96Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062060, 0x0C062060u, 0x0C06B970u); }  /* 0C06B96C jsr @Rn */
L_0C06B970: BLKS(0x0C06B970u);
	r0 = 0xC062000u; UPD(0x0C06B972u, 1);  /* 0C06B970 mov.l @(disp,pc),Rn */
	IF(0x0C06B972u); { u32 t_ = r0; PR = 0x0C06B976u; IF(0x0C06B974u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C06B976u); }  /* 0C06B972 jsr @Rn */
L_0C06B976: BLKS(0x0C06B976u);
	r3 = 0xC2289E8u; UPD(0x0C06B978u, 1);  /* 0C06B976 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C06B978 mov #imm,Rn */
	r1 = 0xC173D78u; UPD(0x0C06B97Cu, 2);  /* 0C06B97A mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06B97C add #imm,Rn */
	r4 = 0xC173D6Eu; UPD(0x0C06B980u, 2);  /* 0C06B97E mov.l @(disp,pc),Rn */
	r0 = 0xC3C86B0u; UPD(0x0C06B982u, 1);  /* 0C06B980 mov.l @(disp,pc),Rn */
	W32(r3, r4); UPD(0x0C06B984u, 1);  /* 0C06B982 mov.l Rm,@Rn */
	W32(r0, r1); UPD(0x0C06B986u, 1);  /* 0C06B984 mov.l Rm,@Rn */
	r4 = 0x0u;  /* 0C06B986 mov #imm,Rn */
	r6 = 0x780000u; UPD(0x0C06B98Au, 2);  /* 0C06B988 mov.l @(disp,pc),Rn */
	r7 = 0x808080u; UPD(0x0C06B98Cu, 1);  /* 0C06B98A mov.l @(disp,pc),Rn */
	r5 = 0xA80000u; UPD(0x0C06B98Eu, 1);  /* 0C06B98C mov.l @(disp,pc),Rn */
	IF(0x0C06B98Eu); { u32 t_ = r9; PR = 0x0C06B992u; W32(r15, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C06B992u); }  /* 0C06B98E jsr @Rn */
L_0C06B992: BLKS(0x0C06B992u);
	r0 = 0xC061010u; UPD(0x0C06B994u, 1);  /* 0C06B992 mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C06B994 add #imm,Rn */
	r4 = 0x7u;  /* 0C06B996 mov #imm,Rn */
	IF(0x0C06B998u); { u32 t_ = r0; PR = 0x0C06B99Cu; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C061010, 0x0C061010u, 0x0C06B99Cu); }  /* 0C06B998 jsr @Rn */
L_0C06B99C: BLKS(0x0C06B99Cu);
	r0 = 0xC062250u; UPD(0x0C06B99Eu, 1);  /* 0C06B99C mov.l @(disp,pc),Rn */
	IF(0x0C06B99Eu); { u32 t_ = r0; PR = 0x0C06B9A2u; IF(0x0C06B9A0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062250, 0x0C062250u, 0x0C06B9A2u); }  /* 0C06B99E jsr @Rn */
L_0C06B9A2: BLKS(0x0C06B9A2u);
	T = (r8 & r8) == 0;  /* 0C06B9A2 tst Rm,Rn */
	if (T) { UPD(0x0C06B9A8u, 4); goto L_0C06B9A8; }  /* 0C06B9A4 bt */
L_0C06B9A6: BLKS(0x0C06B9A6u);
	r8 += 0xFFFFFFFFu;  /* 0C06B9A6 add #imm,Rn */
	UPD(0x0C06B9A8u, 1);
L_0C06B9A8: BLKS(0x0C06B9A8u);
	r0 = 0xC238029u; UPD(0x0C06B9AAu, 1);  /* 0C06B9A8 mov.l @(disp,pc),Rn */
	r7 = 0xFFFFFFFFu;  /* 0C06B9AA mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C06B9AEu, 2);  /* 0C06B9AC mov.b @Rm,Rn */
	r6 = 0xC297638u; UPD(0x0C06B9B0u, 1);  /* 0C06B9AE mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C06B9B0 tst Rm,Rn */
	r0 = 0x100u; UPD(0x0C06B9B4u, 2);  /* 0C06B9B2 mov.w @(disp,pc),Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C06B9B4 negc Rm,Rn */
	IF(0x0C06B9B6u); r0 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C06B9B8u, 2);  /* 0C06B9B6 mov.w @(r0,Rm),Rn */
	IF(0x0C06B9B8u); r0 >>= 8;  /* 0C06B9B8 shlr8 Rn */
	r0 &= 0x1u;  /* 0C06B9BA and #imm,r0 */
	r5 &= r0;  /* 0C06B9BC and Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C06B9BE tst Rm,Rn */
	if (!T) { UPD(0x0C06B9E4u, 7); goto L_0C06B9E4; }  /* 0C06B9C0 bf */
L_0C06B9C2: BLKS(0x0C06B9C2u);
	r0 = 0xC071BD0u; UPD(0x0C06B9C4u, 1);  /* 0C06B9C2 mov.l @(disp,pc),Rn */
	IF(0x0C06B9C4u); { u32 t_ = r0; PR = 0x0C06B9C8u; IF(0x0C06B9C6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071BD0, 0x0C071BD0u, 0x0C06B9C8u); }  /* 0C06B9C4 jsr @Rn */
L_0C06B9C8: BLKS(0x0C06B9C8u);
	T = (r0 & r0) == 0;  /* 0C06B9C8 tst Rm,Rn */
	{ u32 c_ = !T; T = (r8 & r8) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C06B9E4u, 4); goto L_0C06B9E4; } goto L_0C06B9CE; }  /* 0C06B9CA bf/s */
L_0C06B9CE: BLKS(0x0C06B9CEu);
	if (!T) { UPD(0x0C06B9DCu, 4); goto L_0C06B9DC; }  /* 0C06B9CE bf */
L_0C06B9D0: BLKS(0x0C06B9D0u);
	r4 = 0xC3C5448u; UPD(0x0C06B9D2u, 1);  /* 0C06B9D0 mov.l @(disp,pc),Rn */
	r3 = R32(r4); UPD(0x0C06B9D4u, 1);  /* 0C06B9D2 mov.l @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06B9D4 tst Rm,Rn */
	if (T) { UPD(0x0C06B9E4u, 4); goto L_0C06B9E4; }  /* 0C06B9D6 bt */
L_0C06B9D8: BLKS(0x0C06B9D8u);
	r5 = 0xC239468u; UPD(0x0C06B9DAu, 1);  /* 0C06B9D8 mov.l @(disp,pc),Rn */
	W32(r5, r8); UPD(0x0C06B9DCu, 1);  /* 0C06B9DA mov.l Rm,@Rn */
L_0C06B9DC: BLKS(0x0C06B9DCu);
	r7 = 0xC234BA9u; UPD(0x0C06B9DEu, 1);  /* 0C06B9DC mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C06B9E0u, 1);  /* 0C06B9DE mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C06B9E0 tst Rm,Rn */
	if (T) { UPD(0x0C06B95Cu, 4); goto L_0C06B95C; }  /* 0C06B9E2 bt */
L_0C06B9E4: BLKS(0x0C06B9E4u);
	r15 = r14;  /* 0C06B9E4 mov Rm,Rn */
	IF(0x0C06B9E6u); PR = R32(r15); r15 += 4; UPD(0x0C06B9E8u, 2);  /* 0C06B9E6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06B9EAu, 1);  /* 0C06B9E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06B9ECu, 1);  /* 0C06B9EA mov.l @Rm+,Rn */
	IF(0x0C06B9ECu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06B9EC rts */
}

/* FUN_0c06ba60 */
void blk_f_0C06BA60(sh3_t *c)
{
	LOCALS;
L_0C06BA60: BLKS(0x0C06BA60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06BA62u, 1);  /* 0C06BA60 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06BA64u, 1);  /* 0C06BA62 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06BA66u, 1);  /* 0C06BA64 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06BA68u, 1);  /* 0C06BA66 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06BA6Au, 1);  /* 0C06BA68 mov.l Rm,@-Rn */
	r8 = 0xC173D87u; UPD(0x0C06BA6Cu, 1);  /* 0C06BA6A mov.l @(disp,pc),Rn */
	IF(0x0C06BA6Cu); r15 -= 4; W32(r15, PR); UPD(0x0C06BA6Eu, 1);  /* 0C06BA6C sts.l pr,@-Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C06BA70u, 1);  /* 0C06BA6E mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C06BA70 exts.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C06BA72 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06BA7Cu, 5); goto L_0C06BA7C; } goto L_0C06BA78; }  /* 0C06BA74 bf/s */
L_0C06BA78: BLKS(0x0C06BA78u);
	{ IF(0x0C06BA7Au); ; /* slot nop */ UPD(0x0C06BB80u, 4); goto L_0C06BB80; }  /* 0C06BA78 bra */
L_0C06BA7C: BLKS(0x0C06BA7Cu);
	r3 = 0x1u;  /* 0C06BA7C mov #imm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C06BA7E cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C06BAB0u, 5); goto L_0C06BAB0; } goto L_0C06BA84; }  /* 0C06BA80 bt/s */
L_0C06BA84: BLKS(0x0C06BA84u);
	T = (r0 & r0) == 0;  /* 0C06BA84 tst Rm,Rn */
	if (T) { UPD(0x0C06BAA0u, 5); goto L_0C06BAA0; }  /* 0C06BA86 bt */
L_0C06BA88: BLKS(0x0C06BA88u);
	r6 = 0xC173D87u; UPD(0x0C06BA8Au, 1);  /* 0C06BA88 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C06BA8Cu, 1);  /* 0C06BA8A mov.b @Rm,Rn */
	r15 = r14;  /* 0C06BA8C mov Rm,Rn */
	IF(0x0C06BA8Eu); PR = R32(r15); r15 += 4; UPD(0x0C06BA90u, 2);  /* 0C06BA8E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06BA92u, 1);  /* 0C06BA90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06BA94u, 1);  /* 0C06BA92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06BA96u, 1);  /* 0C06BA94 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06BA98u, 1);  /* 0C06BA96 mov.l @Rm+,Rn */
	IF(0x0C06BA98u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06BA98 rts */
L_0C06BAA0: BLKS(0x0C06BAA0u);
	r3 = 0xC2B0390u; UPD(0x0C06BAA2u, 1);  /* 0C06BAA0 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C06BAA4u, 1);  /* 0C06BAA2 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06BAA4 tst Rm,Rn */
	{ u32 c_ = T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06BA88u, 4); goto L_0C06BA88; } UPD(0x0C06BAAAu, 1); goto L_0C06BAAA; }  /* 0C06BAA6 bt/s */
L_0C06BAAA: BLKS(0x0C06BAAAu);
	r1 += 0x1u;  /* 0C06BAAA add #imm,Rn */
	{ W8(r8, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C06BA88u, 4); goto L_0C06BA88; }  /* 0C06BAAC bra */
L_0C06BAB0: BLKS(0x0C06BAB0u);
	if (!T) { UPD(0x0C06BA88u, 3); goto L_0C06BA88; }  /* 0C06BAB0 bf */
L_0C06BAB2: BLKS(0x0C06BAB2u);
	r10 = 0xC2074F4u; UPD(0x0C06BAB4u, 1);  /* 0C06BAB2 mov.l @(disp,pc),Rn */
	r5 = 0x1D3u; UPD(0x0C06BAB6u, 1);  /* 0C06BAB4 mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r10); UPD(0x0C06BAB8u, 1);  /* 0C06BAB6 mov.w @Rm,Rn */
	T = (s32)r6 > (s32)r5;  /* 0C06BAB8 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C06BAFAu, 4); goto L_0C06BAFA; }  /* 0C06BABA bt */
L_0C06BABC: BLKS(0x0C06BABCu);
	r11 = r10;  /* 0C06BABC mov Rm,Rn */
	r9 = 0xC2B1824u; UPD(0x0C06BAC0u, 2);  /* 0C06BABE mov.l @(disp,pc),Rn */
	r8 = 0xC286110u; UPD(0x0C06BAC2u, 1);  /* 0C06BAC0 mov.l @(disp,pc),Rn */
	r6 = 0xFFFFFFFFu;  /* 0C06BAC2 mov #imm,Rn */
	UPD(0x0C06BAC4u, 1);
L_0C06BAC4: BLKS(0x0C06BAC4u);
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C06BAC6u, 1);  /* 0C06BAC4 mov.w @Rm,Rn */
	r0 = (u32)(s32)(s16)r7;  /* 0C06BAC6 exts.w Rm,Rn */
	IF(0x0C06BAC8u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06BACAu, 2);  /* 0C06BAC8 mov.b @(r0,Rm),Rn */
	r2 = r0;  /* 0C06BACA mov Rm,Rn */
	IF(0x0C06BACCu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06BACEu, 2);  /* 0C06BACC mov.b @(r0,Rm),Rn */
	r2 += r9;  /* 0C06BACE add Rm,Rn */
	T = r3 == r4;  /* 0C06BAD0 cmp/eq Rm,Rn */
	r2 += 0x1u;  /* 0C06BAD2 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C06BAD6u, 4);  /* 0C06BAD4 mov.b @Rm,Rn */
	r0 += r8;  /* 0C06BAD6 add Rm,Rn */
	r0 += 0x1u;  /* 0C06BAD8 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C06BADCu, 3);  /* 0C06BADA mov.b @Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C06BADC negc Rm,Rn */
	T = r2 == r3;  /* 0C06BADE cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C06BAE0 negc Rm,Rn */
	r4 |= r2;  /* 0C06BAE2 or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06BAE4 tst Rm,Rn */
	{ u32 c_ = !T; r5 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06BB10u, 8); goto L_0C06BB10; } goto L_0C06BAEA; }  /* 0C06BAE6 bf/s */
L_0C06BAEA: BLKS(0x0C06BAEAu);
	r2 = r7;  /* 0C06BAEA mov Rm,Rn */
	r2 += 0x2u;  /* 0C06BAEC add #imm,Rn */
	r5 = 0x1D3u; UPD(0x0C06BAF0u, 4);  /* 0C06BAEE mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r2;  /* 0C06BAF0 exts.w Rm,Rn */
	T = (s32)r4 > (s32)r5;  /* 0C06BAF2 cmp/gt Rm,Rn */
	r10 = 0xC2074F4u; UPD(0x0C06BAF6u, 3);  /* 0C06BAF4 mov.l @(disp,pc),Rn */
	{ u32 c_ = !T; W16(r11, r2); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C06BAC4u, 3); goto L_0C06BAC4; } UPD(0x0C06BAFAu, 1); goto L_0C06BAFA; }  /* 0C06BAF6 bf/s */
L_0C06BAFA: BLKS(0x0C06BAFAu);
	r1 = 0xC173D87u; UPD(0x0C06BAFCu, 1);  /* 0C06BAFA mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C06BAFC mov #imm,Rn */
	r11 = 0xC2B0390u; UPD(0x0C06BB00u, 2);  /* 0C06BAFE mov.l @(disp,pc),Rn */
	W8(r1, r9); UPD(0x0C06BB02u, 1);  /* 0C06BB00 mov.b Rm,@Rn */
	{ W8(r11, r9); /* slot mov.b Rm,@Rn */ UPD(0x0C06BA88u, 3); goto L_0C06BA88; }  /* 0C06BB02 bra */
L_0C06BB10: BLKS(0x0C06BB10u);
	r0 = 0xC238029u; UPD(0x0C06BB12u, 1);  /* 0C06BB10 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r0); UPD(0x0C06BB14u, 1);  /* 0C06BB12 mov.b @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C06BB14 tst Rm,Rn */
	if (!T) { UPD(0x0C06BB50u, 4); goto L_0C06BB50; }  /* 0C06BB16 bf */
L_0C06BB18: BLKS(0x0C06BB18u);
	r3 = (u32)(s32)(s16)r5;  /* 0C06BB18 exts.w Rm,Rn */
	r0 = r3;  /* 0C06BB1A mov Rm,Rn */
	IF(0x0C06BB1Cu); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C06BB1C rotl Rn */
	IF(0x0C06BB1Eu); r7 = T;  /* 0C06BB1E movt Rn */
	r4 = r3;  /* 0C06BB20 mov Rm,Rn */
	r10 = 0xC05DAA8u; UPD(0x0C06BB24u, 6);  /* 0C06BB22 mov.l @(disp,pc),Rn */
	r3 += r7;  /* 0C06BB24 add Rm,Rn */
	IF(0x0C06BB26u); T = r3 & 1; r3 >>= 1;  /* 0C06BB26 shlr Rn */
	r4 += r8;  /* 0C06BB28 add Rm,Rn */
	r5 = r3 & 0xFF;  /* 0C06BB2A extu.b Rm,Rn */
	IF(0x0C06BB2Cu); { u32 t_ = r10; PR = 0x0C06BB30u; r6 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 6); CALLP(t_, blk_f_0C05DAA8, 0x0C05DAA8u, 0x0C06BB30u); }  /* 0C06BB2C jsr @Rn */
L_0C06BB30: BLKS(0x0C06BB30u);
	r10 = (u32)(s32)(s16)R16(r11); UPD(0x0C06BB32u, 1);  /* 0C06BB30 mov.w @Rm,Rn */
	r4 = r9;  /* 0C06BB32 mov Rm,Rn */
	r0 = (u32)(s32)(s16)r10;  /* 0C06BB34 exts.w Rm,Rn */
	IF(0x0C06BB36u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06BB38u, 3);  /* 0C06BB36 mov.b @(r0,Rm),Rn */
	r4 += r0;  /* 0C06BB38 add Rm,Rn */
	IF(0x0C06BB3Au); W8(r0 + r9, r2); UPD(0x0C06BB3Cu, 2);  /* 0C06BB3A mov.b Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C06BB3C add #imm,Rn */
	r0 += r8;  /* 0C06BB3E add Rm,Rn */
	r0 += 0x1u;  /* 0C06BB40 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r0); UPD(0x0C06BB44u, 4);  /* 0C06BB42 mov.b @Rm,Rn */
	r10 += 0x2u;  /* 0C06BB44 add #imm,Rn */
	W8(r4, r8); UPD(0x0C06BB48u, 2);  /* 0C06BB46 mov.b Rm,@Rn */
	{ W16(r11, r10); /* slot mov.w Rm,@Rn */ UPD(0x0C06BA88u, 3); goto L_0C06BA88; }  /* 0C06BB48 bra */
L_0C06BB50: BLKS(0x0C06BB50u);
	r0 = 0xC0626E0u; UPD(0x0C06BB52u, 1);  /* 0C06BB50 mov.l @(disp,pc),Rn */
	r5 = 0x26u;  /* 0C06BB52 mov #imm,Rn */
	r4 = 0xC173D7Cu; UPD(0x0C06BB56u, 2);  /* 0C06BB54 mov.l @(disp,pc),Rn */
	r7 = 0x40C04000u; UPD(0x0C06BB58u, 1);  /* 0C06BB56 mov.l @(disp,pc),Rn */
	IF(0x0C06BB58u); { u32 t_ = r0; PR = 0x0C06BB5Cu; r6 = 0xBu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06BB5Cu); }  /* 0C06BB58 jsr @Rn */
L_0C06BB5C: BLKS(0x0C06BB5Cu);
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C06BB5Eu, 1);  /* 0C06BB5C mov.w @Rm,Rn */
	r6 = r4;  /* 0C06BB5E mov Rm,Rn */
	IF(0x0C06BB60u); T = r6 >> 31; r6 = (r6 << 1) | T;  /* 0C06BB60 rotl Rn */
	r0 = 0xC062490u; UPD(0x0C06BB64u, 3);  /* 0C06BB62 mov.l @(disp,pc),Rn */
	IF(0x0C06BB64u); r5 = T;  /* 0C06BB64 movt Rn */
	r4 += r5;  /* 0C06BB66 add Rm,Rn */
	r5 = 0x26u;  /* 0C06BB68 mov #imm,Rn */
	IF(0x0C06BB6Au); T = r4 & 1; r4 = (u32)((s32)r4 >> 1);  /* 0C06BB6A shar Rn */
	IF(0x0C06BB6Cu); { u32 t_ = r0; PR = 0x0C06BB70u; r6 = 0x16u; /* slot mov #imm,Rn */ UPD(t_, 6); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06BB70u); }  /* 0C06BB6C jsr @Rn */
L_0C06BB70: BLKS(0x0C06BB70u);
	{ r5 = (u32)(s32)(s16)R16(r10); /* slot mov.w @Rm,Rn */ UPD(0x0C06BB18u, 3); goto L_0C06BB18; }  /* 0C06BB70 bra */
L_0C06BB80: BLKS(0x0C06BB80u);
	r9 = 0xC067580u; UPD(0x0C06BB82u, 1);  /* 0C06BB80 mov.l @(disp,pc),Rn */
	IF(0x0C06BB82u); { u32 t_ = r9; PR = 0x0C06BB86u; IF(0x0C06BB84u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C067580, 0x0C067580u, 0x0C06BB86u); }  /* 0C06BB82 jsr @Rn */
L_0C06BB86: BLKS(0x0C06BB86u);
	r4 = 0xC2074F4u; UPD(0x0C06BB88u, 1);  /* 0C06BB86 mov.l @(disp,pc),Rn */
	r1 = 0x40u;  /* 0C06BB88 mov #imm,Rn */
	W16(r4, r1); UPD(0x0C06BB8Cu, 2);  /* 0C06BB8A mov.w Rm,@Rn */
	{ r1 = (u32)(s32)(s8)R8(r8); /* slot mov.b @Rm,Rn */ UPD(0x0C06BAAAu, 3); goto L_0C06BAAA; }  /* 0C06BB8C bra */
}

/* FUN_0c06bbd0 */
void blk_f_0C06BBD0(sh3_t *c)
{
	LOCALS;
L_0C06BBD0: BLKS(0x0C06BBD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06BBD2u, 1);  /* 0C06BBD0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06BBD4u, 1);  /* 0C06BBD2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06BBD6u, 1);  /* 0C06BBD4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06BBD8u, 1);  /* 0C06BBD6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06BBDAu, 1);  /* 0C06BBD8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06BBDCu, 1);  /* 0C06BBDA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06BBDEu, 1);  /* 0C06BBDC mov.l Rm,@-Rn */
	r2 = 0xC234BA9u; UPD(0x0C06BBE0u, 1);  /* 0C06BBDE mov.l @(disp,pc),Rn */
	IF(0x0C06BBE0u); r15 -= 4; W32(r15, PR); UPD(0x0C06BBE2u, 1);  /* 0C06BBE0 sts.l pr,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06BBE4u, 1);  /* 0C06BBE2 mov.b @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06BBE4 add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C06BBE6 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06BBF0u, 5); goto L_0C06BBF0; } goto L_0C06BBEC; }  /* 0C06BBE8 bt/s */
L_0C06BBEC: BLKS(0x0C06BBECu);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C06BCEAu, 4); goto L_0C06BCEA; }  /* 0C06BBEC bra */
L_0C06BBF0: BLKS(0x0C06BBF0u);
	r7 = 0xC28F611u; UPD(0x0C06BBF2u, 1);  /* 0C06BBF0 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C06BBF2 mov #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C06BBF6u, 2);  /* 0C06BBF4 mov.b @Rm,Rn */
	r10 = 0xDu;  /* 0C06BBF6 mov #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C06BBF8 extu.b Rm,Rn */
	r5 = 0xC173DF8u; UPD(0x0C06BBFCu, 3);  /* 0C06BBFA mov.l @(disp,pc),Rn */
	IF(0x0C06BBFCu); r0 <<= 2;  /* 0C06BBFC shll2 Rn */
	IF(0x0C06BBFEu); r4 = R32(r0 + r5); UPD(0x0C06BC00u, 2);  /* 0C06BBFE mov.l @(r0,Rm),Rn */
	r3 = 0xC29D728u; UPD(0x0C06BC02u, 1);  /* 0C06BC00 mov.l @(disp,pc),Rn */
	r0 = 0xC3C4048u; UPD(0x0C06BC04u, 1);  /* 0C06BC02 mov.l @(disp,pc),Rn */
	r13 = 0xF0u; UPD(0x0C06BC06u, 1);  /* 0C06BC04 mov.w @(disp,pc),Rn */
	r11 = 0xC0626E0u; UPD(0x0C06BC08u, 1);  /* 0C06BC06 mov.l @(disp,pc),Rn */
	W32(r14, r4); UPD(0x0C06BC0Au, 1);  /* 0C06BC08 mov.l Rm,@Rn */
	W32(r3, r12); UPD(0x0C06BC0Cu, 1);  /* 0C06BC0A mov.l Rm,@Rn */
	W32(r0, r12); UPD(0x0C06BC0Eu, 1);  /* 0C06BC0C mov.l Rm,@Rn */
L_0C06BC0E: BLKS(0x0C06BC0Eu);
	r9 = 0xC060BC0u; UPD(0x0C06BC10u, 1);  /* 0C06BC0E mov.l @(disp,pc),Rn */
	r8 = 0xC061200u; UPD(0x0C06BC12u, 1);  /* 0C06BC10 mov.l @(disp,pc),Rn */
	IF(0x0C06BC12u); { u32 t_ = r9; PR = 0x0C06BC16u; IF(0x0C06BC14u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060BC0, 0x0C060BC0u, 0x0C06BC16u); }  /* 0C06BC12 jsr @Rn */
L_0C06BC16: BLKS(0x0C06BC16u);
	r9 = 0xC062060u; UPD(0x0C06BC18u, 1);  /* 0C06BC16 mov.l @(disp,pc),Rn */
	IF(0x0C06BC18u); { u32 t_ = r8; PR = 0x0C06BC1Cu; IF(0x0C06BC1Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061200, 0x0C061200u, 0x0C06BC1Cu); }  /* 0C06BC18 jsr @Rn */
L_0C06BC1C: BLKS(0x0C06BC1Cu);
	r8 = 0xC062000u; UPD(0x0C06BC1Eu, 1);  /* 0C06BC1C mov.l @(disp,pc),Rn */
	r4 = 0xFFFFFFu; UPD(0x0C06BC20u, 1);  /* 0C06BC1E mov.l @(disp,pc),Rn */
	IF(0x0C06BC20u); { u32 t_ = r9; PR = 0x0C06BC24u; IF(0x0C06BC22u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062060, 0x0C062060u, 0x0C06BC24u); }  /* 0C06BC20 jsr @Rn */
L_0C06BC24: BLKS(0x0C06BC24u);
	IF(0x0C06BC24u); { u32 t_ = r8; PR = 0x0C06BC28u; IF(0x0C06BC26u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C06BC28u); }  /* 0C06BC24 jsr @Rn */
L_0C06BC28: BLKS(0x0C06BC28u);
	r9 = R32(r14); UPD(0x0C06BC2Au, 1);  /* 0C06BC28 mov.l @Rm,Rn */
	r8 = 0x0u;  /* 0C06BC2A mov #imm,Rn */
	UPD(0x0C06BC2Cu, 1);
L_0C06BC2C: BLKS(0x0C06BC2Cu);
	r5 = 0u - r8;  /* 0C06BC2C neg Rm,Rn */
	r5 += 0xEu;  /* 0C06BC2E add #imm,Rn */
	{ u32 v_ = R32(r9); r9 += 4; r4 = v_; } UPD(0x0C06BC32u, 3);  /* 0C06BC30 mov.l @Rm+,Rn */
	r7 = 0x80808000u; UPD(0x0C06BC34u, 1);  /* 0C06BC32 mov.l @(disp,pc),Rn */
	IF(0x0C06BC34u); { u32 t_ = r11; PR = 0x0C06BC38u; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06BC38u); }  /* 0C06BC34 jsr @Rn */
L_0C06BC38: BLKS(0x0C06BC38u);
	r2 = r8;  /* 0C06BC38 mov Rm,Rn */
	r2 += 0x1u;  /* 0C06BC3A add #imm,Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C06BC3C exts.w Rm,Rn */
	T = (s32)r8 > (s32)r10;  /* 0C06BC3E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06BC2Cu, 7); goto L_0C06BC2C; }  /* 0C06BC40 bf */
L_0C06BC42: BLKS(0x0C06BC42u);
	r15 += 0xFFFFFFFCu;  /* 0C06BC42 add #imm,Rn */
	r1 = 0xC173A36u; UPD(0x0C06BC46u, 2);  /* 0C06BC44 mov.l @(disp,pc),Rn */
	r3 = 0xC3C86B0u; UPD(0x0C06BC48u, 1);  /* 0C06BC46 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C06BC48 mov #imm,Rn */
	r0 = 0xC173A18u; UPD(0x0C06BC4Cu, 2);  /* 0C06BC4A mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C06BC4C mov #imm,Rn */
	r7 = 0xC2289E8u; UPD(0x0C06BC50u, 2);  /* 0C06BC4E mov.l @(disp,pc),Rn */
	r2 = 0xC073B10u; UPD(0x0C06BC52u, 1);  /* 0C06BC50 mov.l @(disp,pc),Rn */
	W32(r3, r1); UPD(0x0C06BC54u, 1);  /* 0C06BC52 mov.l Rm,@Rn */
	W32(r7, r0); UPD(0x0C06BC56u, 1);  /* 0C06BC54 mov.l Rm,@Rn */
	r5 = 0xC80000u; UPD(0x0C06BC58u, 1);  /* 0C06BC56 mov.l @(disp,pc),Rn */
	r6 = 0x780000u; UPD(0x0C06BC5Au, 1);  /* 0C06BC58 mov.l @(disp,pc),Rn */
	r7 = 0x808080u; UPD(0x0C06BC5Cu, 1);  /* 0C06BC5A mov.l @(disp,pc),Rn */
	IF(0x0C06BC5Cu); { u32 t_ = r2; PR = 0x0C06BC60u; W32(r15, r9); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C06BC60u); }  /* 0C06BC5C jsr @Rn */
L_0C06BC60: BLKS(0x0C06BC60u);
	r6 = 0xC173A22u; UPD(0x0C06BC62u, 1);  /* 0C06BC60 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C06BC62 mov #imm,Rn */
	r5 = 0xC2289E8u; UPD(0x0C06BC66u, 2);  /* 0C06BC64 mov.l @(disp,pc),Rn */
	r8 = 0xC073B10u; UPD(0x0C06BC68u, 1);  /* 0C06BC66 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C06BC6Au, 1);  /* 0C06BC68 mov.l Rm,@Rn */
	r7 = 0x808080u; UPD(0x0C06BC6Cu, 1);  /* 0C06BC6A mov.l @(disp,pc),Rn */
	r5 = 0x280000u; UPD(0x0C06BC6Eu, 1);  /* 0C06BC6C mov.l @(disp,pc),Rn */
	r6 = 0x780000u; UPD(0x0C06BC70u, 1);  /* 0C06BC6E mov.l @(disp,pc),Rn */
	IF(0x0C06BC70u); { u32 t_ = r8; PR = 0x0C06BC74u; W32(r15, r9); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C06BC74u); }  /* 0C06BC70 jsr @Rn */
L_0C06BC74: BLKS(0x0C06BC74u);
	r4 = 0xC2975ECu; UPD(0x0C06BC76u, 1);  /* 0C06BC74 mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C06BC76 add #imm,Rn */
	r4 += 0x5u;  /* 0C06BC78 add #imm,Rn */
	r9 = 0xC062490u; UPD(0x0C06BC7Cu, 3);  /* 0C06BC7A mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C06BC7C mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C06BC80u, 2);  /* 0C06BC7E mov.b @Rm,Rn */
	r6 = 0x9u;  /* 0C06BC80 mov #imm,Rn */
	IF(0x0C06BC82u); { u32 t_ = r9; PR = 0x0C06BC86u; r4 = r3 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06BC86u); }  /* 0C06BC82 jsr @Rn */
L_0C06BC86: BLKS(0x0C06BC86u);
	r0 = 0xC2975F0u; UPD(0x0C06BC88u, 1);  /* 0C06BC86 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C06BC88 mov #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r0); UPD(0x0C06BC8Cu, 2);  /* 0C06BC8A mov.b @Rm,Rn */
	r6 = 0xCu;  /* 0C06BC8C mov #imm,Rn */
	IF(0x0C06BC8Eu); { u32 t_ = r9; PR = 0x0C06BC92u; r4 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06BC92u); }  /* 0C06BC8E jsr @Rn */
L_0C06BC92: BLKS(0x0C06BC92u);
	IF(0x0C06BC92u); T = (s32)r12 >= 0;  /* 0C06BC92 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06BD00u, 4); goto L_0C06BD00; } UPD(0x0C06BC98u, 1); goto L_0C06BC98; }  /* 0C06BC94 bf/s */
L_0C06BC98: BLKS(0x0C06BC98u);
	r6 = 0xEu;  /* 0C06BC98 mov #imm,Rn */
	IF(0x0C06BC9Au); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C06BC9A shld Rm,Rn */
	r8 = 0xC061010u; UPD(0x0C06BC9Eu, 3);  /* 0C06BC9C mov.l @(disp,pc),Rn */
	r9 = (r5 >> 16) | (r5 << 16);  /* 0C06BC9E swap.w Rm,Rn */
	r4 = 0x7u;  /* 0C06BCA0 mov #imm,Rn */
	IF(0x0C06BCA2u); { u32 t_ = r8; PR = 0x0C06BCA6u; r5 = (u32)(s32)(s16)r9; /* slot exts.w Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C061010, 0x0C061010u, 0x0C06BCA6u); }  /* 0C06BCA2 jsr @Rn */
L_0C06BCA6: BLKS(0x0C06BCA6u);
	r4 = 0x1Bu;  /* 0C06BCA6 mov #imm,Rn */
	T = (s32)r12 > (s32)r4;  /* 0C06BCA8 cmp/gt Rm,Rn */
	{ u32 c_ = T; r5 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06BCB2u, 5); goto L_0C06BCB2; } goto L_0C06BCAE; }  /* 0C06BCAA bt/s */
L_0C06BCAE: BLKS(0x0C06BCAEu);
	r5 += 0x1u;  /* 0C06BCAE add #imm,Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C06BCB0 exts.w Rm,Rn */
	UPD(0x0C06BCB2u, 3);
L_0C06BCB2: BLKS(0x0C06BCB2u);
	r8 = 0xC062250u; UPD(0x0C06BCB4u, 1);  /* 0C06BCB2 mov.l @(disp,pc),Rn */
	IF(0x0C06BCB4u); { u32 t_ = r8; PR = 0x0C06BCB8u; IF(0x0C06BCB6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062250, 0x0C062250u, 0x0C06BCB8u); }  /* 0C06BCB4 jsr @Rn */
L_0C06BCB8: BLKS(0x0C06BCB8u);
	T = (r13 & r13) == 0;  /* 0C06BCB8 tst Rm,Rn */
	if (T) { UPD(0x0C06BCBEu, 4); goto L_0C06BCBE; }  /* 0C06BCBA bt */
L_0C06BCBC: BLKS(0x0C06BCBCu);
	r13 += 0xFFFFFFFFu;  /* 0C06BCBC add #imm,Rn */
	UPD(0x0C06BCBEu, 1);
L_0C06BCBE: BLKS(0x0C06BCBEu);
	r3 = 0xC238029u; UPD(0x0C06BCC0u, 1);  /* 0C06BCBE mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C06BCC2u, 1);  /* 0C06BCC0 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06BCC2 tst Rm,Rn */
	r0 = 0x100u; UPD(0x0C06BCC6u, 2);  /* 0C06BCC4 mov.w @(disp,pc),Rn */
	r3 = 0xFFFFFFFFu;  /* 0C06BCC6 mov #imm,Rn */
	r2 = 0xC297638u; UPD(0x0C06BCCAu, 2);  /* 0C06BCC8 mov.l @(disp,pc),Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C06BCCA negc Rm,Rn */
	IF(0x0C06BCCCu); r0 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06BCCEu, 2);  /* 0C06BCCC mov.w @(r0,Rm),Rn */
	IF(0x0C06BCCEu); r0 >>= 8;  /* 0C06BCCE shlr8 Rn */
	r0 &= 0x1u;  /* 0C06BCD0 and #imm,r0 */
	r7 &= r0;  /* 0C06BCD2 and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C06BCD4 tst Rm,Rn */
	if (!T) { UPD(0x0C06BCE8u, 7); goto L_0C06BCE8; }  /* 0C06BCD6 bf */
L_0C06BCD8: BLKS(0x0C06BCD8u);
	T = (r13 & r13) == 0;  /* 0C06BCD8 tst Rm,Rn */
	r5 = 0xC234BA9u; UPD(0x0C06BCDCu, 2);  /* 0C06BCDA mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C06BCDEu, 1);  /* 0C06BCDC mov.b @Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C06BCDE negc Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C06BCE0 tst Rm,Rn */
	IF(0x0C06BCE2u); r4 = T;  /* 0C06BCE2 movt Rn */
	T = (r9 & r4) == 0;  /* 0C06BCE4 tst Rm,Rn */
	if (!T) { UPD(0x0C06BC0Eu, 7); goto L_0C06BC0E; }  /* 0C06BCE6 bf */
L_0C06BCE8: BLKS(0x0C06BCE8u);
	r14 += 0x4u;  /* 0C06BCE8 add #imm,Rn */
	UPD(0x0C06BCEAu, 1);
L_0C06BCEA: BLKS(0x0C06BCEAu);
	r15 = r14;  /* 0C06BCEA mov Rm,Rn */
	IF(0x0C06BCECu); PR = R32(r15); r15 += 4; UPD(0x0C06BCEEu, 2);  /* 0C06BCEC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06BCF0u, 1);  /* 0C06BCEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06BCF2u, 1);  /* 0C06BCF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06BCF4u, 1);  /* 0C06BCF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06BCF6u, 1);  /* 0C06BCF4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06BCF8u, 1);  /* 0C06BCF6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06BCFAu, 1);  /* 0C06BCF8 mov.l @Rm+,Rn */
	IF(0x0C06BCFAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06BCFA rts */
L_0C06BD00: BLKS(0x0C06BD00u);
	{ r5 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C06BC98u, 3); goto L_0C06BC98; }  /* 0C06BD00 bra */
}

/* FUN_0c06bd80 */
void blk_f_0C06BD80(sh3_t *c)
{
	LOCALS;
L_0C06BD80: BLKS(0x0C06BD80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06BD82u, 1);  /* 0C06BD80 mov.l Rm,@-Rn */
	r1 = 0x8u;  /* 0C06BD82 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06BD86u, 2);  /* 0C06BD84 mov.l Rm,@-Rn */
	r0 = 0xFFFFFFFFu;  /* 0C06BD86 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06BD8Au, 2);  /* 0C06BD88 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06BD8Cu, 1);  /* 0C06BD8A mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C06BD8C mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06BD90u, 2);  /* 0C06BD8E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06BD92u, 1);  /* 0C06BD90 mov.l Rm,@-Rn */
	r3 = 0xC2B037Bu; UPD(0x0C06BD94u, 1);  /* 0C06BD92 mov.l @(disp,pc),Rn */
	IF(0x0C06BD94u); r15 -= 4; W32(r15, PR); UPD(0x0C06BD96u, 1);  /* 0C06BD94 sts.l pr,@-Rn */
	r5 = 0xC29D1D8u; UPD(0x0C06BD98u, 1);  /* 0C06BD96 mov.l @(disp,pc),Rn */
	W8(r3, r1); UPD(0x0C06BD9Au, 1);  /* 0C06BD98 mov.b Rm,@Rn */
	r2 = R32(r5); UPD(0x0C06BD9Cu, 1);  /* 0C06BD9A mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C06BD9C tst Rm,Rn */
	{ u32 t_ = 0u - r0, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C06BD9E negc Rm,Rn */
	r0 = 0x2A0u; UPD(0x0C06BDA2u, 3);  /* 0C06BDA0 mov.w @(disp,pc),Rn */
	IF(0x0C06BDA2u); r4 = R32(r0 + r5); UPD(0x0C06BDA4u, 1);  /* 0C06BDA2 mov.l @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C06BDA4 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06BDAEu, 4); goto L_0C06BDAE; } goto L_0C06BDAA; }  /* 0C06BDA6 bf/s */
L_0C06BDAA: BLKS(0x0C06BDAAu);
	{ r0 = r3; /* slot mov Rm,Rn */ UPD(0x0C06C110u, 4); goto L_0C06C110; }  /* 0C06BDAA bra */
L_0C06BDAE: BLKS(0x0C06BDAEu);
	r0 = r3;  /* 0C06BDAE mov Rm,Rn */
	r0 += 0x2u;  /* 0C06BDB0 add #imm,Rn */
	UPD(0x0C06BDB2u, 2);
L_0C06BDB2: BLKS(0x0C06BDB2u);
	r8 = 0xC173E00u; UPD(0x0C06BDB4u, 1);  /* 0C06BDB2 mov.l @(disp,pc),Rn */
	r0 &= 0x3u;  /* 0C06BDB4 and #imm,r0 */
	IF(0x0C06BDB6u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06BDB8u, 2);  /* 0C06BDB6 mov.b @(r0,Rm),Rn */
	r7 = 0xC23E0A6u; UPD(0x0C06BDBAu, 1);  /* 0C06BDB8 mov.l @(disp,pc),Rn */
	r0 = r6 & 0xFF;  /* 0C06BDBA extu.b Rm,Rn */
	W8(r7, r6); UPD(0x0C06BDBEu, 2);  /* 0C06BDBC mov.b Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C06BDBE tst Rm,Rn */
	{ u32 c_ = !T; r8 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06BDC8u, 4); goto L_0C06BDC8; } goto L_0C06BDC4; }  /* 0C06BDC0 bf/s */
L_0C06BDC4: BLKS(0x0C06BDC4u);
	{ IF(0x0C06BDC6u); ; /* slot nop */ UPD(0x0C06C066u, 4); goto L_0C06C066; }  /* 0C06BDC4 bra */
L_0C06BDC8: BLKS(0x0C06BDC8u);
	T = r0 == 0xFu;  /* 0C06BDC8 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C06BDD0u, 4); goto L_0C06BDD0; }  /* 0C06BDCA bf */
L_0C06BDCC: BLKS(0x0C06BDCCu);
	{ IF(0x0C06BDCEu); ; /* slot nop */ UPD(0x0C06C100u, 3); goto L_0C06C100; }  /* 0C06BDCC bra */
L_0C06BDD0: BLKS(0x0C06BDD0u);
	r11 = 0xC062780u; UPD(0x0C06BDD2u, 1);  /* 0C06BDD0 mov.l @(disp,pc),Rn */
L_0C06BDD2: BLKS(0x0C06BDD2u);
	r12 = 0xC06D6E0u; UPD(0x0C06BDD4u, 1);  /* 0C06BDD2 mov.l @(disp,pc),Rn */
	r9 = 0xC072340u; UPD(0x0C06BDD6u, 1);  /* 0C06BDD4 mov.l @(disp,pc),Rn */
	IF(0x0C06BDD6u); { u32 t_ = r12; PR = 0x0C06BDDAu; IF(0x0C06BDD8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D6E0, 0x0C06D6E0u, 0x0C06BDDAu); }  /* 0C06BDD6 jsr @Rn */
L_0C06BDDA: BLKS(0x0C06BDDAu);
	r8 = 0xC0C0910u; UPD(0x0C06BDDCu, 1);  /* 0C06BDDA mov.l @(disp,pc),Rn */
	IF(0x0C06BDDCu); { u32 t_ = r9; PR = 0x0C06BDE0u; IF(0x0C06BDDEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C072340, 0x0C072340u, 0x0C06BDE0u); }  /* 0C06BDDC jsr @Rn */
L_0C06BDE0: BLKS(0x0C06BDE0u);
	r12 = 0xC07D620u; UPD(0x0C06BDE2u, 1);  /* 0C06BDE0 mov.l @(disp,pc),Rn */
	IF(0x0C06BDE2u); { u32 t_ = r8; PR = 0x0C06BDE6u; IF(0x0C06BDE4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0910, 0x0C0C0910u, 0x0C06BDE6u); }  /* 0C06BDE2 jsr @Rn */
L_0C06BDE6: BLKS(0x0C06BDE6u);
	r9 = 0xC06D570u; UPD(0x0C06BDE8u, 1);  /* 0C06BDE6 mov.l @(disp,pc),Rn */
	IF(0x0C06BDE8u); { u32 t_ = r12; PR = 0x0C06BDECu; IF(0x0C06BDEAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C07D620, 0x0C07D620u, 0x0C06BDECu); }  /* 0C06BDE8 jsr @Rn */
L_0C06BDEC: BLKS(0x0C06BDECu);
	r12 = 0xC06D520u; UPD(0x0C06BDEEu, 1);  /* 0C06BDEC mov.l @(disp,pc),Rn */
	r8 = 0xC0BF5C0u; UPD(0x0C06BDF0u, 1);  /* 0C06BDEE mov.l @(disp,pc),Rn */
	IF(0x0C06BDF0u); { u32 t_ = r12; PR = 0x0C06BDF4u; IF(0x0C06BDF2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D520, 0x0C06D520u, 0x0C06BDF4u); }  /* 0C06BDF0 jsr @Rn */
L_0C06BDF4: BLKS(0x0C06BDF4u);
	IF(0x0C06BDF4u); { u32 t_ = r9; PR = 0x0C06BDF8u; IF(0x0C06BDF6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D570, 0x0C06D570u, 0x0C06BDF8u); }  /* 0C06BDF4 jsr @Rn */
L_0C06BDF8: BLKS(0x0C06BDF8u);
	IF(0x0C06BDF8u); { u32 t_ = r8; PR = 0x0C06BDFCu; IF(0x0C06BDFAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BF5C0, 0x0C0BF5C0u, 0x0C06BDFCu); }  /* 0C06BDF8 jsr @Rn */
L_0C06BDFC: BLKS(0x0C06BDFCu);
	r9 = 0xC06D390u; UPD(0x0C06BDFEu, 1);  /* 0C06BDFC mov.l @(disp,pc),Rn */
	IF(0x0C06BDFEu); { u32 t_ = r12; PR = 0x0C06BE02u; IF(0x0C06BE00u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D520, 0x0C06D520u, 0x0C06BE02u); }  /* 0C06BDFE jsr @Rn */
L_0C06BE02: BLKS(0x0C06BE02u);
	r8 = 0xC0C1270u; UPD(0x0C06BE04u, 1);  /* 0C06BE02 mov.l @(disp,pc),Rn */
	IF(0x0C06BE04u); { u32 t_ = r9; PR = 0x0C06BE08u; IF(0x0C06BE06u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D390, 0x0C06D390u, 0x0C06BE08u); }  /* 0C06BE04 jsr @Rn */
L_0C06BE08: BLKS(0x0C06BE08u);
	IF(0x0C06BE08u); { u32 t_ = r8; PR = 0x0C06BE0Cu; IF(0x0C06BE0Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1270, 0x0C0C1270u, 0x0C06BE0Cu); }  /* 0C06BE08 jsr @Rn */
L_0C06BE0C: BLKS(0x0C06BE0Cu);
	r5 = 0xC3C43B8u; UPD(0x0C06BE0Eu, 1);  /* 0C06BE0C mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s8)R8(r5); UPD(0x0C06BE10u, 1);  /* 0C06BE0E mov.b @Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C06BE10 tst Rm,Rn */
	if (T) { UPD(0x0C06BE18u, 4); goto L_0C06BE18; }  /* 0C06BE12 bt */
L_0C06BE14: BLKS(0x0C06BE14u);
	{ IF(0x0C06BE16u); ; /* slot nop */ UPD(0x0C06C0F0u, 3); goto L_0C06C0F0; }  /* 0C06BE14 bra */
L_0C06BE18: BLKS(0x0C06BE18u);
	r12 = 0xC0C21A0u; UPD(0x0C06BE1Au, 1);  /* 0C06BE18 mov.l @(disp,pc),Rn */
	IF(0x0C06BE1Au); ;  /* 0C06BE1A nop */
	UPD(0x0C06BE1Cu, 1);
L_0C06BE1C: BLKS(0x0C06BE1Cu);
	r9 = 0xC060BC0u; UPD(0x0C06BE1Eu, 1);  /* 0C06BE1C mov.l @(disp,pc),Rn */
	r8 = 0xC061200u; UPD(0x0C06BE20u, 1);  /* 0C06BE1E mov.l @(disp,pc),Rn */
	IF(0x0C06BE20u); { u32 t_ = r9; PR = 0x0C06BE24u; IF(0x0C06BE22u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060BC0, 0x0C060BC0u, 0x0C06BE24u); }  /* 0C06BE20 jsr @Rn */
L_0C06BE24: BLKS(0x0C06BE24u);
	r9 = 0xC062000u; UPD(0x0C06BE26u, 1);  /* 0C06BE24 mov.l @(disp,pc),Rn */
	IF(0x0C06BE26u); { u32 t_ = r8; PR = 0x0C06BE2Au; IF(0x0C06BE28u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061200, 0x0C061200u, 0x0C06BE2Au); }  /* 0C06BE26 jsr @Rn */
L_0C06BE2A: BLKS(0x0C06BE2Au);
	r8 = 0xC071630u; UPD(0x0C06BE2Cu, 1);  /* 0C06BE2A mov.l @(disp,pc),Rn */
	IF(0x0C06BE2Cu); { u32 t_ = r9; PR = 0x0C06BE30u; IF(0x0C06BE2Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C06BE30u); }  /* 0C06BE2C jsr @Rn */
L_0C06BE30: BLKS(0x0C06BE30u);
	r9 = 0xC2B1A4Cu; UPD(0x0C06BE32u, 1);  /* 0C06BE30 mov.l @(disp,pc),Rn */
	IF(0x0C06BE32u); { u32 t_ = r8; PR = 0x0C06BE36u; IF(0x0C06BE34u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071630, 0x0C071630u, 0x0C06BE36u); }  /* 0C06BE32 jsr @Rn */
L_0C06BE36: BLKS(0x0C06BE36u);
	r2 = 0xC28EC80u; UPD(0x0C06BE38u, 1);  /* 0C06BE36 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C06BE38 mov #imm,Rn */
	r3 = 0xC3C86EEu; UPD(0x0C06BE3Cu, 2);  /* 0C06BE3A mov.l @(disp,pc),Rn */
	r0 = 0xC28F604u; UPD(0x0C06BE3Eu, 1);  /* 0C06BE3C mov.l @(disp,pc),Rn */
	W16(r9, r8); UPD(0x0C06BE40u, 1);  /* 0C06BE3E mov.w Rm,@Rn */
	W16(r2, r8); UPD(0x0C06BE42u, 1);  /* 0C06BE40 mov.w Rm,@Rn */
	W16(r3, r8); UPD(0x0C06BE44u, 1);  /* 0C06BE42 mov.w Rm,@Rn */
	W16(r0, r8); UPD(0x0C06BE46u, 1);  /* 0C06BE44 mov.w Rm,@Rn */
	r9 = 0xC0C0A40u; UPD(0x0C06BE48u, 1);  /* 0C06BE46 mov.l @(disp,pc),Rn */
	r4 = 0x200u; UPD(0x0C06BE4Au, 1);  /* 0C06BE48 mov.w @(disp,pc),Rn */
	r5 = 0xC2B038Eu; UPD(0x0C06BE4Cu, 1);  /* 0C06BE4A mov.l @(disp,pc),Rn */
	r7 = 0xC2B03A4u; UPD(0x0C06BE4Eu, 1);  /* 0C06BE4C mov.l @(disp,pc),Rn */
	r6 = 0xC22E25Cu; UPD(0x0C06BE50u, 1);  /* 0C06BE4E mov.l @(disp,pc),Rn */
	r3 = 0xC2860FEu; UPD(0x0C06BE52u, 1);  /* 0C06BE50 mov.l @(disp,pc),Rn */
	r8 = 0xC0AE940u; UPD(0x0C06BE54u, 1);  /* 0C06BE52 mov.l @(disp,pc),Rn */
	W16(r5, r4); UPD(0x0C06BE56u, 1);  /* 0C06BE54 mov.w Rm,@Rn */
	W16(r7, r4); UPD(0x0C06BE58u, 1);  /* 0C06BE56 mov.w Rm,@Rn */
	W16(r6, r4); UPD(0x0C06BE5Au, 1);  /* 0C06BE58 mov.w Rm,@Rn */
	IF(0x0C06BE5Au); { u32 t_ = r9; PR = 0x0C06BE5Eu; W16(r3, r4); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0A40, 0x0C0C0A40u, 0x0C06BE5Eu); }  /* 0C06BE5A jsr @Rn */
L_0C06BE5E: BLKS(0x0C06BE5Eu);
	IF(0x0C06BE5Eu); { u32 t_ = r8; PR = 0x0C06BE62u; IF(0x0C06BE60u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0AE940, 0x0C0AE940u, 0x0C06BE62u); }  /* 0C06BE5E jsr @Rn */
L_0C06BE62: BLKS(0x0C06BE62u);
	r9 = 0xC0BF5F0u; UPD(0x0C06BE64u, 1);  /* 0C06BE62 mov.l @(disp,pc),Rn */
	r8 = 0xC07C060u; UPD(0x0C06BE66u, 1);  /* 0C06BE64 mov.l @(disp,pc),Rn */
	IF(0x0C06BE66u); { u32 t_ = r9; PR = 0x0C06BE6Au; IF(0x0C06BE68u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BF5F0, 0x0C0BF5F0u, 0x0C06BE6Au); }  /* 0C06BE66 jsr @Rn */
L_0C06BE6A: BLKS(0x0C06BE6Au);
	IF(0x0C06BE6Au); { u32 t_ = r8; PR = 0x0C06BE6Eu; IF(0x0C06BE6Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C07C060, 0x0C07C060u, 0x0C06BE6Eu); }  /* 0C06BE6A jsr @Rn */
L_0C06BE6E: BLKS(0x0C06BE6Eu);
	r0 = 0xC2B039Cu; UPD(0x0C06BE70u, 1);  /* 0C06BE6E mov.l @(disp,pc),Rn */
	r2 = 0xFu;  /* 0C06BE70 mov #imm,Rn */
	r9 = R32(r0); UPD(0x0C06BE74u, 2);  /* 0C06BE72 mov.l @Rm,Rn */
	r4 = 0x4u;  /* 0C06BE74 mov #imm,Rn */
	IF(0x0C06BE76u); { u32 t_ = r11; PR = 0x0C06BE7Au; r9 &= r2; /* slot and Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C06BE7Au); }  /* 0C06BE76 jsr @Rn */
L_0C06BE7A: BLKS(0x0C06BE7Au);
	T = (s32)r9 >= (s32)r0;  /* 0C06BE7A cmp/ge Rm,Rn */
	if (T) { UPD(0x0C06BE82u, 4); goto L_0C06BE82; }  /* 0C06BE7C bt */
L_0C06BE7E: BLKS(0x0C06BE7Eu);
	{ IF(0x0C06BE80u); ; /* slot nop */ UPD(0x0C06C0D0u, 3); goto L_0C06C0D0; }  /* 0C06BE7E bra */
L_0C06BE82: BLKS(0x0C06BE82u);
	r9 = 0xC071CF0u; UPD(0x0C06BE84u, 1);  /* 0C06BE82 mov.l @(disp,pc),Rn */
	r8 = 0xC0C1B00u; UPD(0x0C06BE86u, 1);  /* 0C06BE84 mov.l @(disp,pc),Rn */
	IF(0x0C06BE86u); { u32 t_ = r9; PR = 0x0C06BE8Au; IF(0x0C06BE88u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071CF0, 0x0C071CF0u, 0x0C06BE8Au); }  /* 0C06BE86 jsr @Rn */
L_0C06BE8A: BLKS(0x0C06BE8Au);
	r9 = 0xC0AEAB0u; UPD(0x0C06BE8Cu, 1);  /* 0C06BE8A mov.l @(disp,pc),Rn */
	IF(0x0C06BE8Cu); { u32 t_ = r8; PR = 0x0C06BE90u; IF(0x0C06BE8Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1B00, 0x0C0C1B00u, 0x0C06BE90u); }  /* 0C06BE8C jsr @Rn */
L_0C06BE90: BLKS(0x0C06BE90u);
	r8 = 0xC0BF6C0u; UPD(0x0C06BE92u, 1);  /* 0C06BE90 mov.l @(disp,pc),Rn */
	IF(0x0C06BE92u); { u32 t_ = r9; PR = 0x0C06BE96u; IF(0x0C06BE94u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0AEAB0, 0x0C0AEAB0u, 0x0C06BE96u); }  /* 0C06BE92 jsr @Rn */
L_0C06BE96: BLKS(0x0C06BE96u);
	r9 = 0xC07DB40u; UPD(0x0C06BE98u, 1);  /* 0C06BE96 mov.l @(disp,pc),Rn */
	IF(0x0C06BE98u); { u32 t_ = r8; PR = 0x0C06BE9Cu; IF(0x0C06BE9Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BF6C0, 0x0C0BF6C0u, 0x0C06BE9Cu); }  /* 0C06BE98 jsr @Rn */
L_0C06BE9C: BLKS(0x0C06BE9Cu);
	IF(0x0C06BE9Cu); { u32 t_ = r9; PR = 0x0C06BEA0u; IF(0x0C06BE9Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C07DB40, 0x0C07DB40u, 0x0C06BEA0u); }  /* 0C06BE9C jsr @Rn */
L_0C06BEA0: BLKS(0x0C06BEA0u);
	r9 = 0x0u;  /* 0C06BEA0 mov #imm,Rn */
	r8 = r9;  /* 0C06BEA2 mov Rm,Rn */
	UPD(0x0C06BEA4u, 2);
L_0C06BEA4: BLKS(0x0C06BEA4u);
	r8 += r8;  /* 0C06BEA4 add Rm,Rn */
	r5 = 0xC2B07BCu; UPD(0x0C06BEA8u, 2);  /* 0C06BEA6 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06BEA8 mov Rm,Rn */
	IF(0x0C06BEAAu); r7 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C06BEACu, 2);  /* 0C06BEAA mov.w @(r0,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C06BEAC tst Rm,Rn */
	if (T) { UPD(0x0C06BEB4u, 4); goto L_0C06BEB4; }  /* 0C06BEAE bt */
L_0C06BEB0: BLKS(0x0C06BEB0u);
	{ IF(0x0C06BEB2u); ; /* slot nop */ UPD(0x0C06C0C0u, 3); goto L_0C06C0C0; }  /* 0C06BEB0 bra */
L_0C06BEB4: BLKS(0x0C06BEB4u);
	r3 = 0xC29D196u; UPD(0x0C06BEB6u, 1);  /* 0C06BEB4 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06BEB6 mov Rm,Rn */
	IF(0x0C06BEB8u); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C06BEBAu, 2);  /* 0C06BEB8 mov.w @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C06BEBA tst Rm,Rn */
	if (T) { UPD(0x0C06BEC2u, 4); goto L_0C06BEC2; }  /* 0C06BEBC bt */
L_0C06BEBE: BLKS(0x0C06BEBEu);
	{ IF(0x0C06BEC0u); ; /* slot nop */ UPD(0x0C06C0B0u, 3); goto L_0C06C0B0; }  /* 0C06BEBE bra */
L_0C06BEC2: BLKS(0x0C06BEC2u);
	r6 = 0xC28EDBCu; UPD(0x0C06BEC4u, 1);  /* 0C06BEC2 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06BEC4 mov Rm,Rn */
	IF(0x0C06BEC6u); r4 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C06BEC8u, 2);  /* 0C06BEC6 mov.w @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C06BEC8 tst Rm,Rn */
	if (T) { UPD(0x0C06BED0u, 4); goto L_0C06BED0; }  /* 0C06BECA bt */
L_0C06BECC: BLKS(0x0C06BECCu);
	{ IF(0x0C06BECEu); ; /* slot nop */ UPD(0x0C06C0A0u, 3); goto L_0C06C0A0; }  /* 0C06BECC bra */
L_0C06BED0: BLKS(0x0C06BED0u);
	r7 = 0xC3C53EAu; UPD(0x0C06BED2u, 1);  /* 0C06BED0 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06BED2 mov Rm,Rn */
	IF(0x0C06BED4u); r8 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C06BED6u, 2);  /* 0C06BED4 mov.w @(r0,Rm),Rn */
	T = (r8 & r8) == 0;  /* 0C06BED6 tst Rm,Rn */
	if (T) { UPD(0x0C06BEDEu, 4); goto L_0C06BEDE; }  /* 0C06BED8 bt */
L_0C06BEDA: BLKS(0x0C06BEDAu);
	{ IF(0x0C06BEDCu); ; /* slot nop */ UPD(0x0C06C090u, 3); goto L_0C06C090; }  /* 0C06BEDA bra */
L_0C06BEDE: BLKS(0x0C06BEDEu);
	r5 = r9;  /* 0C06BEDE mov Rm,Rn */
	UPD(0x0C06BEE0u, 1);
L_0C06BEE0: BLKS(0x0C06BEE0u);
	r5 += 0x1u;  /* 0C06BEE0 add #imm,Rn */
	r9 = r5 & 0xFF;  /* 0C06BEE2 extu.b Rm,Rn */
	r0 = 0x17u;  /* 0C06BEE4 mov #imm,Rn */
	T = r9 > r0;  /* 0C06BEE6 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r8 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06BEA4u, 7); goto L_0C06BEA4; } goto L_0C06BEEC; }  /* 0C06BEE8 bf/s */
L_0C06BEEC: BLKS(0x0C06BEECu);
	r3 = 0xC297638u; UPD(0x0C06BEEEu, 2);  /* 0C06BEEC mov.l @(disp,pc),Rn */
	r9 = 0x100u; UPD(0x0C06BEF0u, 1);  /* 0C06BEEE mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C06BEF0 mov Rm,Rn */
	IF(0x0C06BEF2u); r2 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C06BEF4u, 2);  /* 0C06BEF2 mov.w @(r0,Rm),Rn */
	r0 = r2;  /* 0C06BEF4 mov Rm,Rn */
	r0 &= 0x40u;  /* 0C06BEF6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06BEF8 tst Rm,Rn */
	if (T) { UPD(0x0C06BF04u, 6); goto L_0C06BF04; }  /* 0C06BEFA bt */
L_0C06BEFC: BLKS(0x0C06BEFCu);
	r4 = 0xC173E04u; UPD(0x0C06BEFEu, 1);  /* 0C06BEFC mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C06BF00u, 1);  /* 0C06BEFE mov.b @Rm,Rn */
	r6 += 0xFFFFFF80u;  /* 0C06BF00 add #imm,Rn */
	W8(r4, r6); UPD(0x0C06BF04u, 2);  /* 0C06BF02 mov.b Rm,@Rn */
L_0C06BF04: BLKS(0x0C06BF04u);
	r3 = 0xC173E04u; UPD(0x0C06BF06u, 1);  /* 0C06BF04 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C06BF08u, 1);  /* 0C06BF06 mov.b @Rm,Rn */
	r2 = 0xC238029u; UPD(0x0C06BF0Au, 1);  /* 0C06BF08 mov.l @(disp,pc),Rn */
	T = (r8 & r8) == 0;  /* 0C06BF0A tst Rm,Rn */
	r8 = 0xFFFFFFFFu;  /* 0C06BF0C mov #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C06BF10u, 3);  /* 0C06BF0E mov.b @Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C06BF10 negc Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C06BF12 tst Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C06BF14 negc Rm,Rn */
	T = (r0 & r7) == 0;  /* 0C06BF16 tst Rm,Rn */
	if (T) { UPD(0x0C06BF1Eu, 7); goto L_0C06BF1E; }  /* 0C06BF18 bt */
L_0C06BF1A: BLKS(0x0C06BF1Au);
	{ IF(0x0C06BF1Cu); ; /* slot nop */ UPD(0x0C06C080u, 3); goto L_0C06C080; }  /* 0C06BF1A bra */
L_0C06BF1E: BLKS(0x0C06BF1Eu);
	r4 = 0x1Bu;  /* 0C06BF1E mov #imm,Rn */
	UPD(0x0C06BF20u, 1);
L_0C06BF20: BLKS(0x0C06BF20u);
	T = (s32)r10 > (s32)r4;  /* 0C06BF20 cmp/gt Rm,Rn */
	{ u32 c_ = T; r6 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06BF2Au, 4); goto L_0C06BF2A; } goto L_0C06BF26; }  /* 0C06BF22 bt/s */
L_0C06BF26: BLKS(0x0C06BF26u);
	r6 += 0x1u;  /* 0C06BF26 add #imm,Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C06BF28 exts.w Rm,Rn */
	UPD(0x0C06BF2Au, 3);
L_0C06BF2A: BLKS(0x0C06BF2Au);
	r0 = 0xC062250u; UPD(0x0C06BF2Cu, 1);  /* 0C06BF2A mov.l @(disp,pc),Rn */
	IF(0x0C06BF2Cu); { u32 t_ = r0; PR = 0x0C06BF30u; IF(0x0C06BF2Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062250, 0x0C062250u, 0x0C06BF30u); }  /* 0C06BF2C jsr @Rn */
L_0C06BF30: BLKS(0x0C06BF30u);
	r7 = 0xC29D1D8u; UPD(0x0C06BF32u, 1);  /* 0C06BF30 mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C06BF32 mov #imm,Rn */
	r0 = R32(r7); UPD(0x0C06BF36u, 2);  /* 0C06BF34 mov.l @Rm,Rn */
	r3 = 0xC237C12u; UPD(0x0C06BF38u, 1);  /* 0C06BF36 mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C06BF38 tst Rm,Rn */
	r0 = r9;  /* 0C06BF3A mov Rm,Rn */
	IF(0x0C06BF3Cu); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C06BF3Eu, 3);  /* 0C06BF3C mov.w @(r0,Rm),Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C06BF3E negc Rm,Rn */
	r3 = 0xFFFFFFF8u;  /* 0C06BF40 mov #imm,Rn */
	IF(0x0C06BF42u); ARG0(0x423Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C06BF42 shad Rm,Rn */
	r2 &= r6;  /* 0C06BF44 and Rm,Rn */
	r5 &= r2;  /* 0C06BF46 and Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C06BF48 tst Rm,Rn */
	if (!T) { UPD(0x0C06BF84u, 9); goto L_0C06BF84; }  /* 0C06BF4A bf */
L_0C06BF4C: BLKS(0x0C06BF4Cu);
	r0 = 0x2A0u; UPD(0x0C06BF4Eu, 1);  /* 0C06BF4C mov.w @(disp,pc),Rn */
	IF(0x0C06BF4Eu); r5 = R32(r0 + r7); UPD(0x0C06BF50u, 1);  /* 0C06BF4E mov.l @(r0,Rm),Rn */
	r4 = 0xC228BF8u; UPD(0x0C06BF52u, 1);  /* 0C06BF50 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06BF52 mov Rm,Rn */
	IF(0x0C06BF54u); r9 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C06BF56u, 2);  /* 0C06BF54 mov.w @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C06BF56 tst Rm,Rn */
	IF(0x0C06BF58u); ARG0(0x493Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = (u32)((s32)r9 >> 31); else r9 = (u32)((s32)r9 >> ((~s_ & 31) + 1)); }  /* 0C06BF58 shad Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C06BF5A negc Rm,Rn */
	r9 &= r6;  /* 0C06BF5C and Rm,Rn */
	r7 &= r9;  /* 0C06BF5E and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C06BF60 tst Rm,Rn */
	if (!T) { UPD(0x0C06BF84u, 9); goto L_0C06BF84; }  /* 0C06BF62 bf */
L_0C06BF64: BLKS(0x0C06BF64u);
	r5 = 0xC2ABAA4u; UPD(0x0C06BF66u, 1);  /* 0C06BF64 mov.l @(disp,pc),Rn */
	r4 = R32(r5); UPD(0x0C06BF68u, 1);  /* 0C06BF66 mov.l @Rm,Rn */
	r7 = 0x7FFFu; UPD(0x0C06BF6Au, 1);  /* 0C06BF68 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)R16(r4); UPD(0x0C06BF6Cu, 1);  /* 0C06BF6A mov.w @Rm,Rn */
	r0 = 0xC234C00u; UPD(0x0C06BF6Eu, 1);  /* 0C06BF6C mov.l @(disp,pc),Rn */
	r9 &= r7;  /* 0C06BF6E and Rm,Rn */
	T = r9 == r7;  /* 0C06BF70 cmp/eq Rm,Rn */
	r3 = R32(r0); UPD(0x0C06BF74u, 3);  /* 0C06BF72 mov.l @Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C06BF74 negc Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06BF76 tst Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C06BF78 negc Rm,Rn */
	r6 |= r2;  /* 0C06BF7A or Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C06BF7C tst Rm,Rn */
	if (T) { UPD(0x0C06BF84u, 8); goto L_0C06BF84; }  /* 0C06BF7E bt */
L_0C06BF80: BLKS(0x0C06BF80u);
	{ IF(0x0C06BF82u); ; /* slot nop */ UPD(0x0C06BE1Cu, 3); goto L_0C06BE1C; }  /* 0C06BF80 bra */
L_0C06BF84: BLKS(0x0C06BF84u);
	r10 = 0xC22E015u; UPD(0x0C06BF86u, 1);  /* 0C06BF84 mov.l @(disp,pc),Rn */
	{ r4 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C06C060u, 3); goto L_0C06C060; }  /* 0C06BF86 bra */
L_0C06C060: BLKS(0x0C06C060u);
	IF(0x0C06C060u); { u32 t_ = r12; PR = 0x0C06C064u; IF(0x0C06C062u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C21A0, 0x0C0C21A0u, 0x0C06C064u); }  /* 0C06C060 jsr @Rn */
L_0C06C064: BLKS(0x0C06C064u);
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C06C066u, 1);  /* 0C06C064 mov.b @Rm,Rn */
L_0C06C066: BLKS(0x0C06C066u);
	r15 = r14;  /* 0C06C066 mov Rm,Rn */
	IF(0x0C06C068u); PR = R32(r15); r15 += 4; UPD(0x0C06C06Au, 2);  /* 0C06C068 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06C06Cu, 1);  /* 0C06C06A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06C06Eu, 1);  /* 0C06C06C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06C070u, 1);  /* 0C06C06E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06C072u, 1);  /* 0C06C070 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06C074u, 1);  /* 0C06C072 mov.l @Rm+,Rn */
	IF(0x0C06C074u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06C074 rts */
L_0C06C080: BLKS(0x0C06C080u);
	r0 = 0xC06F5B0u; UPD(0x0C06C082u, 1);  /* 0C06C080 mov.l @(disp,pc),Rn */
	IF(0x0C06C082u); { u32 t_ = r0; PR = 0x0C06C086u; IF(0x0C06C084u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06F5B0, 0x0C06F5B0u, 0x0C06C086u); }  /* 0C06C082 jsr @Rn */
L_0C06C086: BLKS(0x0C06C086u);
	{ r4 = 0x1Bu; /* slot mov #imm,Rn */ UPD(0x0C06BF20u, 3); goto L_0C06BF20; }  /* 0C06C086 bra */
L_0C06C090: BLKS(0x0C06C090u);
	r8 = 0xC07D9C0u; UPD(0x0C06C092u, 1);  /* 0C06C090 mov.l @(disp,pc),Rn */
	IF(0x0C06C092u); { u32 t_ = r8; PR = 0x0C06C096u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07D9C0, 0x0C07D9C0u, 0x0C06C096u); }  /* 0C06C092 jsr @Rn */
L_0C06C096: BLKS(0x0C06C096u);
	{ r5 = r9; /* slot mov Rm,Rn */ UPD(0x0C06BEE0u, 3); goto L_0C06BEE0; }  /* 0C06C096 bra */
L_0C06C0A0: BLKS(0x0C06C0A0u);
	r0 = 0xC0BF790u; UPD(0x0C06C0A2u, 1);  /* 0C06C0A0 mov.l @(disp,pc),Rn */
	IF(0x0C06C0A2u); { u32 t_ = r0; PR = 0x0C06C0A6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BF790, 0x0C0BF790u, 0x0C06C0A6u); }  /* 0C06C0A2 jsr @Rn */
L_0C06C0A6: BLKS(0x0C06C0A6u);
	{ IF(0x0C06C0A8u); ; /* slot nop */ UPD(0x0C06BED0u, 3); goto L_0C06BED0; }  /* 0C06C0A6 bra */
L_0C06C0B0: BLKS(0x0C06C0B0u);
	r0 = 0xC0AE9E0u; UPD(0x0C06C0B2u, 1);  /* 0C06C0B0 mov.l @(disp,pc),Rn */
	IF(0x0C06C0B2u); { u32 t_ = r0; PR = 0x0C06C0B6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0AE9E0, 0x0C0AE9E0u, 0x0C06C0B6u); }  /* 0C06C0B2 jsr @Rn */
L_0C06C0B6: BLKS(0x0C06C0B6u);
	{ IF(0x0C06C0B8u); ; /* slot nop */ UPD(0x0C06BEC2u, 3); goto L_0C06BEC2; }  /* 0C06C0B6 bra */
L_0C06C0C0: BLKS(0x0C06C0C0u);
	r0 = 0xC0C1B50u; UPD(0x0C06C0C2u, 1);  /* 0C06C0C0 mov.l @(disp,pc),Rn */
	IF(0x0C06C0C2u); { u32 t_ = r0; PR = 0x0C06C0C6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1B50, 0x0C0C1B50u, 0x0C06C0C6u); }  /* 0C06C0C2 jsr @Rn */
L_0C06C0C6: BLKS(0x0C06C0C6u);
	{ IF(0x0C06C0C8u); ; /* slot nop */ UPD(0x0C06BEB4u, 3); goto L_0C06BEB4; }  /* 0C06C0C6 bra */
L_0C06C0D0: BLKS(0x0C06C0D0u);
	r4 = 0xF0u; UPD(0x0C06C0D2u, 1);  /* 0C06C0D0 mov.w @(disp,pc),Rn */
	IF(0x0C06C0D2u); { u32 t_ = r11; PR = 0x0C06C0D6u; r15 += 0xFFFFFFFCu; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C06C0D6u); }  /* 0C06C0D2 jsr @Rn */
L_0C06C0D6: BLKS(0x0C06C0D6u);
	r6 = 0x188u; UPD(0x0C06C0D8u, 1);  /* 0C06C0D6 mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C06C0D8 mov #imm,Rn */
	r8 = 0xC07DD90u; UPD(0x0C06C0DCu, 2);  /* 0C06C0DA mov.l @(disp,pc),Rn */
	r0 += r6;  /* 0C06C0DC add Rm,Rn */
	W32(r15, r4); UPD(0x0C06C0E0u, 2);  /* 0C06C0DE mov.l Rm,@Rn */
	IF(0x0C06C0E0u); r0 <<= 16;  /* 0C06C0E0 shll16 Rn */
	r4 = 0x1800000u; UPD(0x0C06C0E4u, 2);  /* 0C06C0E2 mov.l @(disp,pc),Rn */
	r5 = r0;  /* 0C06C0E4 mov Rm,Rn */
	r6 = 0x14u;  /* 0C06C0E6 mov #imm,Rn */
	IF(0x0C06C0E8u); { u32 t_ = r8; PR = 0x0C06C0ECu; r7 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C07DD90, 0x0C07DD90u, 0x0C06C0ECu); }  /* 0C06C0E8 jsr @Rn */
L_0C06C0EC: BLKS(0x0C06C0ECu);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C06BE82u, 3); goto L_0C06BE82; }  /* 0C06C0EC bra */
L_0C06C0F0: BLKS(0x0C06C0F0u);
	r12 = 0xC0C21A0u; UPD(0x0C06C0F2u, 1);  /* 0C06C0F0 mov.l @(disp,pc),Rn */
	IF(0x0C06C0F2u); { u32 t_ = r12; PR = 0x0C06C0F6u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C21A0, 0x0C0C21A0u, 0x0C06C0F6u); }  /* 0C06C0F2 jsr @Rn */
L_0C06C0F6: BLKS(0x0C06C0F6u);
	{ IF(0x0C06C0F8u); ; /* slot nop */ UPD(0x0C06BE1Cu, 3); goto L_0C06BE1C; }  /* 0C06C0F6 bra */
L_0C06C100: BLKS(0x0C06C100u);
	r11 = 0xC062780u; UPD(0x0C06C102u, 1);  /* 0C06C100 mov.l @(disp,pc),Rn */
	IF(0x0C06C102u); { u32 t_ = r11; PR = 0x0C06C106u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C06C106u); }  /* 0C06C102 jsr @Rn */
L_0C06C106: BLKS(0x0C06C106u);
	r9 = (u32)(s32)(s8)R8(r8); UPD(0x0C06C108u, 1);  /* 0C06C106 mov.b @Rm,Rn */
	r0 += r9;  /* 0C06C108 add Rm,Rn */
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C06BDD2u, 4); goto L_0C06BDD2; }  /* 0C06C10A bra */
L_0C06C110: BLKS(0x0C06C110u);
	{ IF(0x0C06C112u); ; /* slot nop */ UPD(0x0C06BDB2u, 3); goto L_0C06BDB2; }  /* 0C06C110 bra */
}

/* FUN_0c06c140 */
void blk_f_0C06C140(sh3_t *c)
{
	LOCALS;
L_0C06C140: BLKS(0x0C06C140u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06C142u, 1);  /* 0C06C140 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C06C142 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06C146u, 2);  /* 0C06C144 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C06C146 mov #imm,Rn */
	r8 = 0x16Cu; UPD(0x0C06C14Au, 2);  /* 0C06C148 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C06C14A mov Rm,Rn */
	UPD(0x0C06C14Cu, 1);
L_0C06C14C: BLKS(0x0C06C14Cu);
	IF(0x0C06C14Cu); MACL = r4 * r8;  /* 0C06C14C mul.l Rm,Rn */
	r0 = 0xC2ABAACu; UPD(0x0C06C150u, 3);  /* 0C06C14E mov.l @(disp,pc),Rn */
	r6 = r4;  /* 0C06C150 mov Rm,Rn */
	IF(0x0C06C152u); r3 = MACL;  /* 0C06C152 sts macl,Rn */
	r7 = 0x0u;  /* 0C06C154 mov #imm,Rn */
	r6 += 0x1u;  /* 0C06C156 add #imm,Rn */
	r3 += r0;  /* 0C06C158 add Rm,Rn */
	IF(0x0C06C15Au); ;  /* 0C06C15A nop */
	UPD(0x0C06C15Cu, 6);
L_0C06C15C: BLKS(0x0C06C15Cu);
	r2 = 0u - r7;  /* 0C06C15C neg Rm,Rn */
	r2 += 0xAu;  /* 0C06C15E add #imm,Rn */
	IF(0x0C06C160u); MACL = r2 * r6;  /* 0C06C160 mul.l Rm,Rn */
	r0 = 0xF4240u; UPD(0x0C06C164u, 5);  /* 0C06C162 mov.l @(disp,pc),Rn */
	IF(0x0C06C164u); r1 = MACL;  /* 0C06C164 sts macl,Rn */
	IF(0x0C06C166u); MACL = r1 * r0;  /* 0C06C166 mul.l Rm,Rn */
	r2 = 0x3u;  /* 0C06C168 mov #imm,Rn */
	W32(r3 + 0x14u, r5); UPD(0x0C06C16Cu, 5);  /* 0C06C16A mov.l Rm,@(disp,Rn) */
	r0 = r7;  /* 0C06C16C mov Rm,Rn */
	r0 &= 0x1u;  /* 0C06C16E and #imm,r0 */
	IF(0x0C06C170u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06C170 shld Rm,Rn */
	r2 = 0x2u;  /* 0C06C172 mov #imm,Rn */
	r2 &= r7;  /* 0C06C174 and Rm,Rn */
	r2 += r2;  /* 0C06C176 add Rm,Rn */
	r0 |= r2;  /* 0C06C178 or Rm,Rn */
	r2 = 0x3u;  /* 0C06C17A mov #imm,Rn */
	r2 &= r7;  /* 0C06C17C and Rm,Rn */
	r0 |= r2;  /* 0C06C17E or Rm,Rn */
	r2 = 0x80808043u; UPD(0x0C06C182u, 11);  /* 0C06C180 mov.l @(disp,pc),Rn */
	IF(0x0C06C182u); r1 = MACL;  /* 0C06C182 sts macl,Rn */
	W32(r3 + 0x8u, r2); UPD(0x0C06C186u, 2);  /* 0C06C184 mov.l Rm,@(disp,Rn) */
	r2 += 0xFFFFFFFEu;  /* 0C06C186 add #imm,Rn */
	W32(r3 + 0xCu, r2); UPD(0x0C06C18Au, 2);  /* 0C06C188 mov.l Rm,@(disp,Rn) */
	r2 += 0x15u;  /* 0C06C18A add #imm,Rn */
	W32(r3 + 0x4u, r0); UPD(0x0C06C18Eu, 2);  /* 0C06C18C mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x10u, r2); UPD(0x0C06C190u, 1);  /* 0C06C18E mov.l Rm,@(disp,Rn) */
	r0 = 0x2u;  /* 0C06C190 mov #imm,Rn */
	W32(r3, r1); UPD(0x0C06C194u, 2);  /* 0C06C192 mov.l Rm,@Rn */
	r2 = r7;  /* 0C06C194 mov Rm,Rn */
	r3 += 0x19u;  /* 0C06C196 add #imm,Rn */
	W8(r3, r0); UPD(0x0C06C19Au, 3);  /* 0C06C198 mov.b Rm,@Rn */
	r2 += 0x1u;  /* 0C06C19A add #imm,Rn */
	{ u32 v_ = r5; r3 -= 1; W8(r3, v_); } UPD(0x0C06C19Eu, 2);  /* 0C06C19C mov.b Rm,@-Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C06C19E exts.w Rm,Rn */
	r0 = 0x9u;  /* 0C06C1A0 mov #imm,Rn */
	T = (s32)r7 > (s32)r0;  /* 0C06C1A2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06C15Cu, 6); goto L_0C06C15C; } goto L_0C06C1A8; }  /* 0C06C1A4 bf/s */
L_0C06C1A8: BLKS(0x0C06C1A8u);
	r2 = 0xC3C43BCu; UPD(0x0C06C1AAu, 2);  /* 0C06C1A8 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C06C1AA mov #imm,Rn */
	r0 = r2;  /* 0C06C1AC mov Rm,Rn */
	IF(0x0C06C1AEu); W8(r0 + r4, r3); UPD(0x0C06C1B0u, 3);  /* 0C06C1AE mov.b Rm,@(r0,Rn) */
	r4 = (u32)(s32)(s16)r6;  /* 0C06C1B0 exts.w Rm,Rn */
	r6 = 0x3u;  /* 0C06C1B2 mov #imm,Rn */
	T = (s32)r4 > (s32)r6;  /* 0C06C1B4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06C14Cu, 6); goto L_0C06C14C; }  /* 0C06C1B6 bf */
L_0C06C1B8: BLKS(0x0C06C1B8u);
	r5 = 0x1u;  /* 0C06C1B8 mov #imm,Rn */
	r4 = 0xC2B0390u; UPD(0x0C06C1BCu, 2);  /* 0C06C1BA mov.l @(disp,pc),Rn */
	W8(r2, r5); UPD(0x0C06C1BEu, 1);  /* 0C06C1BC mov.b Rm,@Rn */
	W8(r4, r3); UPD(0x0C06C1C0u, 1);  /* 0C06C1BE mov.b Rm,@Rn */
	r15 = r14;  /* 0C06C1C0 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06C1C4u, 2);  /* 0C06C1C2 mov.l @Rm+,Rn */
	IF(0x0C06C1C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06C1C4 rts */
}

/* FUN_0c06c1e0 */
void blk_f_0C06C1E0(sh3_t *c)
{
	LOCALS;
L_0C06C1E0: BLKS(0x0C06C1E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06C1E2u, 1);  /* 0C06C1E0 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C06C1E2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06C1E6u, 2);  /* 0C06C1E4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06C1E8u, 1);  /* 0C06C1E6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06C1EAu, 1);  /* 0C06C1E8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06C1ECu, 1);  /* 0C06C1EA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06C1EEu, 1);  /* 0C06C1EC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06C1F0u, 1);  /* 0C06C1EE mov.l Rm,@-Rn */
	r2 = 0xC3CA704u; UPD(0x0C06C1F2u, 1);  /* 0C06C1F0 mov.l @(disp,pc),Rn */
	IF(0x0C06C1F2u); r15 -= 4; W32(r15, PR); UPD(0x0C06C1F4u, 1);  /* 0C06C1F2 sts.l pr,@-Rn */
	r4 = 0xC173E08u; UPD(0x0C06C1F6u, 1);  /* 0C06C1F4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C06C1F6 add #imm,Rn */
	r3 = 0xC3C86B0u; UPD(0x0C06C1FAu, 2);  /* 0C06C1F8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06C1FA mov Rm,Rn */
	r0 = R32(r2); UPD(0x0C06C1FEu, 2);  /* 0C06C1FC mov.l @Rm,Rn */
	r10 = 0xC3CA708u; UPD(0x0C06C200u, 1);  /* 0C06C1FE mov.l @(disp,pc),Rn */
	W32(r3, r4); UPD(0x0C06C202u, 1);  /* 0C06C200 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C06C204u, 1);  /* 0C06C202 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r1); UPD(0x0C06C206u, 1);  /* 0C06C204 mov.l Rm,@(disp,Rn) */
	r0 = R32(r10); UPD(0x0C06C208u, 1);  /* 0C06C206 mov.l @Rm,Rn */
L_0C06C208: BLKS(0x0C06C208u);
	T = (r0 & r0) == 0;  /* 0C06C208 tst Rm,Rn */
	if (!T) { UPD(0x0C06C212u, 4); goto L_0C06C212; }  /* 0C06C20A bf */
L_0C06C20C: BLKS(0x0C06C20Cu);
	r9 = R32(r14 + 0x8u); UPD(0x0C06C20Eu, 1);  /* 0C06C20C mov.l @(disp,Rm),Rn */
	{ r10 += 0x1Cu; /* slot add #imm,Rn */ UPD(0x0C06C3B8u, 3); goto L_0C06C3B8; }  /* 0C06C20E bra */
L_0C06C212: BLKS(0x0C06C212u);
	r6 = 0xC22E024u; UPD(0x0C06C214u, 1);  /* 0C06C212 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C06C216u, 1);  /* 0C06C214 mov.b @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C06C216 tst Rm,Rn */
	if (!T) { UPD(0x0C06C22Cu, 4); goto L_0C06C22C; }  /* 0C06C218 bf */
L_0C06C21A: BLKS(0x0C06C21Au);
	r8 = 0xC29D194u; UPD(0x0C06C21Cu, 1);  /* 0C06C21A mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C06C21Eu, 1);  /* 0C06C21C mov.b @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C06C21E tst Rm,Rn */
	if (!T) { UPD(0x0C06C22Cu, 4); goto L_0C06C22C; }  /* 0C06C220 bf */
L_0C06C222: BLKS(0x0C06C222u);
	r9 = 0xC3C8474u; UPD(0x0C06C224u, 1);  /* 0C06C222 mov.l @(disp,pc),Rn */
	r2 = R32(r9); UPD(0x0C06C226u, 1);  /* 0C06C224 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C06C226 tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C06C230u, 4); goto L_0C06C230; } UPD(0x0C06C22Cu, 1); goto L_0C06C22C; }  /* 0C06C228 bt/s */
L_0C06C22C: BLKS(0x0C06C22Cu);
	{ r6 = R32(r10 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C06C5F0u, 3); goto L_0C06C5F0; }  /* 0C06C22C bra */
L_0C06C230: BLKS(0x0C06C230u);
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C06C238u, 3); goto L_0C06C238; } goto L_0C06C234; }  /* 0C06C230 bf/s */
L_0C06C234: BLKS(0x0C06C234u);
	{ r11 = R32(r10 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C06C5D0u, 4); goto L_0C06C5D0; }  /* 0C06C234 bra */
L_0C06C238: BLKS(0x0C06C238u);
	if (!T) { UPD(0x0C06C240u, 3); goto L_0C06C240; }  /* 0C06C238 bf */
L_0C06C23A: BLKS(0x0C06C23Au);
	r3 = R32(r10 + 0xCu); UPD(0x0C06C23Cu, 1);  /* 0C06C23A mov.l @(disp,Rm),Rn */
	{ r3 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C06C5B0u, 3); goto L_0C06C5B0; }  /* 0C06C23C bra */
L_0C06C240: BLKS(0x0C06C240u);
	r5 = R32(r10 + 0x4u); UPD(0x0C06C242u, 1);  /* 0C06C240 mov.l @(disp,Rm),Rn */
L_0C06C242: BLKS(0x0C06C242u);
	r6 = 0x2000u; UPD(0x0C06C244u, 1);  /* 0C06C242 mov.w @(disp,pc),Rn */
	r4 = R32(r10 + 0x8u); UPD(0x0C06C246u, 1);  /* 0C06C244 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C06C246 add Rm,Rn */
	r1 = 0x4000u; UPD(0x0C06C24Au, 2);  /* 0C06C248 mov.w @(disp,pc),Rn */
	r6 = R32(r10 + 0x10u); UPD(0x0C06C24Cu, 1);  /* 0C06C24A mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C06C24C add Rm,Rn */
	W32(r10 + 0x4u, r5); UPD(0x0C06C250u, 2);  /* 0C06C24E mov.l Rm,@(disp,Rn) */
	T = (r6 & r6) == 0;  /* 0C06C250 tst Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x8u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06C25Eu, 4); goto L_0C06C25E; } UPD(0x0C06C256u, 1); goto L_0C06C256; }  /* 0C06C252 bt/s */
L_0C06C256: BLKS(0x0C06C256u);
	r7 = r6;  /* 0C06C256 mov Rm,Rn */
	r7 += 0xFFFFFFFFu;  /* 0C06C258 add #imm,Rn */
	W32(r10 + 0x10u, r7); UPD(0x0C06C25Cu, 3);  /* 0C06C25A mov.l Rm,@(disp,Rn) */
	r6 = r7;  /* 0C06C25C mov Rm,Rn */
	UPD(0x0C06C25Eu, 1);
L_0C06C25E: BLKS(0x0C06C25Eu);
	r8 = R32(r10 + 0x18u); UPD(0x0C06C260u, 1);  /* 0C06C25E mov.l @(disp,Rm),Rn */
	r8 += 0x1u;  /* 0C06C260 add #imm,Rn */
	W32(r10 + 0x18u, r8); UPD(0x0C06C264u, 2);  /* 0C06C262 mov.l Rm,@(disp,Rn) */
	r9 = 0x0u;  /* 0C06C264 mov #imm,Rn */
	UPD(0x0C06C266u, 1);
L_0C06C266: BLKS(0x0C06C266u);
	T = r0 == 0x1u;  /* 0C06C266 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r14, r9); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06C27Au, 4); goto L_0C06C27A; } UPD(0x0C06C26Cu, 1); goto L_0C06C26C; }  /* 0C06C268 bt/s */
L_0C06C26C: BLKS(0x0C06C26Cu);
	r3 = R32(r10 + 0xCu); UPD(0x0C06C26Eu, 1);  /* 0C06C26C mov.l @(disp,Rm),Rn */
	r13 = 0x808u; UPD(0x0C06C270u, 1);  /* 0C06C26E mov.w @(disp,pc),Rn */
	IF(0x0C06C270u); MACL = r3 * r13;  /* 0C06C270 mul.l Rm,Rn */
	r12 = 0x2040000u; UPD(0x0C06C274u, 3);  /* 0C06C272 mov.l @(disp,pc),Rn */
	IF(0x0C06C274u); r11 = MACL;  /* 0C06C274 sts macl,Rn */
	r11 |= r12;  /* 0C06C276 or Rm,Rn */
	W32(r14, r11); UPD(0x0C06C27Au, 3);  /* 0C06C278 mov.l Rm,@Rn */
L_0C06C27A: BLKS(0x0C06C27Au);
	r7 = R32(r10 + 0x14u); UPD(0x0C06C27Cu, 1);  /* 0C06C27A mov.l @(disp,Rm),Rn */
	r11 = 0x0u;  /* 0C06C27C mov #imm,Rn */
	r0 = 0x12Cu; UPD(0x0C06C280u, 2);  /* 0C06C27E mov.w @(disp,pc),Rn */
	T = r7 == r0;  /* 0C06C280 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r4 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06C28Au, 4); goto L_0C06C28A; } goto L_0C06C286; }  /* 0C06C282 bf/s */
L_0C06C286: BLKS(0x0C06C286u);
	{ IF(0x0C06C288u); ; /* slot nop */ UPD(0x0C06C4C0u, 4); goto L_0C06C4C0; }  /* 0C06C286 bra */
L_0C06C28A: BLKS(0x0C06C28Au);
	r12 = 0xC173EB8u; UPD(0x0C06C28Cu, 1);  /* 0C06C28A mov.l @(disp,pc),Rn */
	r9 = 0x4u;  /* 0C06C28C mov #imm,Rn */
	r5 = R32(r12); UPD(0x0C06C290u, 2);  /* 0C06C28E mov.l @Rm,Rn */
	r8 = 0x63u;  /* 0C06C290 mov #imm,Rn */
	r2 = 0xC2289E8u; UPD(0x0C06C294u, 2);  /* 0C06C292 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r8;  /* 0C06C294 cmp/gt Rm,Rn */
	W32(r2, r5); UPD(0x0C06C298u, 2);  /* 0C06C296 mov.l Rm,@Rn */
	W16(r5, r9); UPD(0x0C06C29Au, 1);  /* 0C06C298 mov.w Rm,@Rn */
	{ u32 c_ = !T; r2 = r5; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06C2A2u, 3); goto L_0C06C2A2; } goto L_0C06C29E; }  /* 0C06C29A bf/s */
L_0C06C29E: BLKS(0x0C06C29Eu);
	{ IF(0x0C06C2A0u); ; /* slot nop */ UPD(0x0C06C460u, 4); goto L_0C06C460; }  /* 0C06C29E bra */
L_0C06C2A2: BLKS(0x0C06C2A2u);
	r12 = 0xFFFFFCFCu; UPD(0x0C06C2A4u, 1);  /* 0C06C2A2 mov.w @(disp,pc),Rn */
	r2 += 0x4u;  /* 0C06C2A4 add #imm,Rn */
	W16(r2, r12); UPD(0x0C06C2A8u, 2);  /* 0C06C2A6 mov.w Rm,@Rn */
	r1 = 0x58u;  /* 0C06C2A8 mov #imm,Rn */
	r0 = 0x707u; UPD(0x0C06C2ACu, 2);  /* 0C06C2AA mov.w @(disp,pc),Rn */
	r2 += 0x2u;  /* 0C06C2AC add #imm,Rn */
	W16(r2, r0); UPD(0x0C06C2B0u, 2);  /* 0C06C2AE mov.w Rm,@Rn */
	r13 = 0x3u;  /* 0C06C2B0 mov #imm,Rn */
	r0 = R32(r10 + 0x18u); UPD(0x0C06C2B4u, 2);  /* 0C06C2B2 mov.l @(disp,Rm),Rn */
	r3 = 0x66666667u; UPD(0x0C06C2B6u, 1);  /* 0C06C2B4 mov.l @(disp,pc),Rn */
	IF(0x0C06C2B6u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06C2B6 shar Rn */
	r0 &= 0x7u;  /* 0C06C2B8 and #imm,r0 */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r3; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C06C2BA dmuls.l Rm,Rn */
	r2 = r0;  /* 0C06C2BC mov Rm,Rn */
	IF(0x0C06C2BEu); r9 = MACH;  /* 0C06C2BE sts mach,Rn */
	IF(0x0C06C2C0u); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C06C2C0 shar Rn */
	IF(0x0C06C2C2u); T = r2 >> 31; r2 <<= 1;  /* 0C06C2C2 shll Rn */
	{ u32 a_ = r2, t_ = a_ - r2, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r2 = r_; }  /* 0C06C2C4 subc Rm,Rn */
	r9 -= r2;  /* 0C06C2C6 sub Rm,Rn */
	r8 = r9;  /* 0C06C2C8 mov Rm,Rn */
	IF(0x0C06C2CAu); r8 <<= 2;  /* 0C06C2CA shll2 Rn */
	r8 += r9;  /* 0C06C2CC add Rm,Rn */
	IF(0x0C06C2CEu); MACL = r9 * r1;  /* 0C06C2CE mul.l Rm,Rn */
	r0 -= r8;  /* 0C06C2D0 sub Rm,Rn */
	IF(0x0C06C2D2u); ARG0(0x40DDu); { s32 s_ = (s32)r13; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06C2D2 shld Rm,Rn */
	IF(0x0C06C2D4u); r12 = MACL;  /* 0C06C2D4 sts macl,Rn */
	r9 = 0u - r0;  /* 0C06C2D6 neg Rm,Rn */
	r12 += 0x8u;  /* 0C06C2D8 add #imm,Rn */
	r9 += 0x20u;  /* 0C06C2DA add #imm,Rn */
	UPD(0x0C06C2DCu, 21);
L_0C06C2DC: BLKS(0x0C06C2DCu);
	IF(0x0C06C2DCu); r9 <<= 8;  /* 0C06C2DC shll8 Rn */
	r3 = 0x8u;  /* 0C06C2DE mov #imm,Rn */
	UPD(0x0C06C2E0u, 2);
L_0C06C2E0: BLKS(0x0C06C2E0u);
	r13 = r5;  /* 0C06C2E0 mov Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C06C2E2 tst Rm,Rn */
	{ u32 c_ = !T; r13 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06C2ECu, 5); goto L_0C06C2EC; } goto L_0C06C2E8; }  /* 0C06C2E4 bf/s */
L_0C06C2E8: BLKS(0x0C06C2E8u);
	{ r13 = r5; /* slot mov Rm,Rn */ UPD(0x0C06C450u, 4); goto L_0C06C450; }  /* 0C06C2E8 bra */
L_0C06C2EC: BLKS(0x0C06C2ECu);
	r8 = 0x66666667u; UPD(0x0C06C2EEu, 1);  /* 0C06C2EC mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C06C2EE mov Rm,Rn */
	{ s64 r_ = (s64)(s32)r7 * (s64)(s32)r8; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C06C2F0 dmuls.l Rm,Rn */
	r4 = 0xAu;  /* 0C06C2F2 mov #imm,Rn */
	r1 = r11;  /* 0C06C2F4 mov Rm,Rn */
	IF(0x0C06C2F6u); r8 = MACH;  /* 0C06C2F6 sts mach,Rn */
	IF(0x0C06C2F8u); T = r8 & 1; r8 = (u32)((s32)r8 >> 1);  /* 0C06C2F8 shar Rn */
	IF(0x0C06C2FAu); T = r8 & 1; r8 = (u32)((s32)r8 >> 1);  /* 0C06C2FA shar Rn */
	IF(0x0C06C2FCu); T = r2 >> 31; r2 <<= 1;  /* 0C06C2FC shll Rn */
	{ u32 a_ = r2, t_ = a_ - r2, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r2 = r_; }  /* 0C06C2FE subc Rm,Rn */
	r8 -= r2;  /* 0C06C300 sub Rm,Rn */
	IF(0x0C06C302u); MACL = r8 * r4;  /* 0C06C302 mul.l Rm,Rn */
	r1 += r1;  /* 0C06C304 add Rm,Rn */
	r1 += r6;  /* 0C06C306 add Rm,Rn */
	IF(0x0C06C308u); r5 = MACL;  /* 0C06C308 sts macl,Rn */
	r7 -= r5;  /* 0C06C30A sub Rm,Rn */
	IF(0x0C06C30Cu); MACL = r7 * r3;  /* 0C06C30C mul.l Rm,Rn */
	IF(0x0C06C30Eu); r1 <<= 2;  /* 0C06C30E shll2 Rn */
	r2 = 0xC0C4468u; UPD(0x0C06C312u, 21);  /* 0C06C310 mov.l @(disp,pc),Rn */
	IF(0x0C06C312u); r0 = MACL;  /* 0C06C312 sts macl,Rn */
	r0 += r12;  /* 0C06C314 add Rm,Rn */
	r0 |= r9;  /* 0C06C316 or Rm,Rn */
	W16(r13, r0); UPD(0x0C06C31Au, 4);  /* 0C06C318 mov.w Rm,@Rn */
	IF(0x0C06C31Au); r6 <<= 2;  /* 0C06C31A shll2 Rn */
	r0 = r1 & 0xFF;  /* 0C06C31C extu.b Rm,Rn */
	IF(0x0C06C31Eu); r0 <<= 2;  /* 0C06C31E shll2 Rn */
	r0 += r0;  /* 0C06C320 add Rm,Rn */
	IF(0x0C06C322u); r4 = R32(r0 + r2); UPD(0x0C06C324u, 5);  /* 0C06C322 mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06C324 add #imm,Rn */
	IF(0x0C06C326u); MACL = r4 * r6;  /* 0C06C326 mul.l Rm,Rn */
	r5 = R32(r14); UPD(0x0C06C32Au, 4);  /* 0C06C328 mov.l @Rm,Rn */
	r4 = 0x10000000u; UPD(0x0C06C32Cu, 1);  /* 0C06C32A mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C06C32C mov Rm,Rn */
	r4 |= r5;  /* 0C06C32E or Rm,Rn */
	IF(0x0C06C330u); r7 = MACL;  /* 0C06C330 sts macl,Rn */
	r5 = R32(r10 + 0x4u); UPD(0x0C06C334u, 4);  /* 0C06C332 mov.l @(disp,Rm),Rn */
	IF(0x0C06C334u); r6 <<= 16;  /* 0C06C334 shll16 Rn */
	IF(0x0C06C336u); MACL = r6 * r3;  /* 0C06C336 mul.l Rm,Rn */
	r5 += r7;  /* 0C06C338 add Rm,Rn */
	r7 = 0x0u;  /* 0C06C33A mov #imm,Rn */
	r0 = 0xC073B10u; UPD(0x0C06C33Eu, 6);  /* 0C06C33C mov.l @(disp,pc),Rn */
	IF(0x0C06C33Eu); r2 = MACL;  /* 0C06C33E sts macl,Rn */
	W32(r15, r7); UPD(0x0C06C342u, 2);  /* 0C06C340 mov.l Rm,@Rn */
	r11 += 0x1u;  /* 0C06C342 add #imm,Rn */
	r6 = R32(r10 + 0x8u); UPD(0x0C06C346u, 2);  /* 0C06C344 mov.l @(disp,Rm),Rn */
	W32(r14 + 0xCu, r3); UPD(0x0C06C348u, 1);  /* 0C06C346 mov.l Rm,@(disp,Rn) */
	r7 = 0x808080u; UPD(0x0C06C34Au, 1);  /* 0C06C348 mov.l @(disp,pc),Rn */
	IF(0x0C06C34Au); { u32 t_ = r0; PR = 0x0C06C34Eu; r6 -= r2; /* slot sub Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C06C34Eu); }  /* 0C06C34A jsr @Rn */
L_0C06C34E: BLKS(0x0C06C34Eu);
	r3 = R32(r14 + 0xCu); UPD(0x0C06C350u, 1);  /* 0C06C34E mov.l @(disp,Rm),Rn */
	r7 = r8;  /* 0C06C350 mov Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C06C352 tst Rm,Rn */
	{ u32 c_ = T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06C360u, 5); goto L_0C06C360; } goto L_0C06C358; }  /* 0C06C354 bt/s */
L_0C06C358: BLKS(0x0C06C358u);
	{ r6 = R32(r10 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C06C2ECu, 4); goto L_0C06C2EC; }  /* 0C06C358 bra */
L_0C06C360: BLKS(0x0C06C360u);
	r6 = R32(r10 + 0x10u); UPD(0x0C06C362u, 1);  /* 0C06C360 mov.l @(disp,Rm),Rn */
	r4 = R32(r10 + 0x14u); UPD(0x0C06C364u, 1);  /* 0C06C362 mov.l @(disp,Rm),Rn */
L_0C06C364: BLKS(0x0C06C364u);
	r7 = 0x63u;  /* 0C06C364 mov #imm,Rn */
	T = (s32)r4 > (s32)r7;  /* 0C06C366 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C06C3E0u, 5); goto L_0C06C3E0; }  /* 0C06C368 bt */
L_0C06C36A: BLKS(0x0C06C36Au);
	r12 += 0xFFFFFFF8u;  /* 0C06C36A add #imm,Rn */
	UPD(0x0C06C36Cu, 1);
L_0C06C36C: BLKS(0x0C06C36Cu);
	r9 |= r12;  /* 0C06C36C or Rm,Rn */
	W16(r13, r9); UPD(0x0C06C370u, 2);  /* 0C06C36E mov.w Rm,@Rn */
L_0C06C370: BLKS(0x0C06C370u);
	r11 += r11;  /* 0C06C370 add Rm,Rn */
	r8 = r6;  /* 0C06C372 mov Rm,Rn */
	r8 += r11;  /* 0C06C374 add Rm,Rn */
	IF(0x0C06C376u); r8 <<= 2;  /* 0C06C376 shll2 Rn */
	r0 = r8 & 0xFF;  /* 0C06C378 extu.b Rm,Rn */
	r2 = 0xC0C4468u; UPD(0x0C06C37Cu, 6);  /* 0C06C37A mov.l @(disp,pc),Rn */
	IF(0x0C06C37Cu); r0 <<= 2;  /* 0C06C37C shll2 Rn */
	r0 += r0;  /* 0C06C37E add Rm,Rn */
	IF(0x0C06C380u); r4 = R32(r0 + r2); UPD(0x0C06C382u, 3);  /* 0C06C380 mov.l @(r0,Rm),Rn */
	IF(0x0C06C382u); r6 <<= 2;  /* 0C06C382 shll2 Rn */
	IF(0x0C06C384u); MACL = r4 * r6;  /* 0C06C384 mul.l Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06C386 add #imm,Rn */
	r1 = R32(r14); UPD(0x0C06C38Au, 5);  /* 0C06C388 mov.l @Rm,Rn */
	r6 = 0xFu;  /* 0C06C38A mov #imm,Rn */
	IF(0x0C06C38Cu); ARG0(0x4B6Du); { s32 s_ = (s32)r6; if (s_ >= 0) r11 <<= (s_ & 31); else if ((s_ & 31) == 0) r11 = 0; else r11 >>= ((~s_ & 31) + 1); }  /* 0C06C38C shld Rm,Rn */
	IF(0x0C06C38Eu); r0 = MACL;  /* 0C06C38E sts macl,Rn */
	IF(0x0C06C390u); MACL = r11 * r3;  /* 0C06C390 mul.l Rm,Rn */
	r5 = R32(r10 + 0x4u); UPD(0x0C06C394u, 6);  /* 0C06C392 mov.l @(disp,Rm),Rn */
	r11 = 0xC073B10u; UPD(0x0C06C396u, 1);  /* 0C06C394 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C06C396 mov #imm,Rn */
	r6 = R32(r10 + 0x8u); UPD(0x0C06C39Au, 2);  /* 0C06C398 mov.l @(disp,Rm),Rn */
	IF(0x0C06C39Au); r13 = MACL;  /* 0C06C39A sts macl,Rn */
	r4 = 0x10000000u; UPD(0x0C06C39Eu, 2);  /* 0C06C39C mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C06C39E add Rm,Rn */
	W32(r15, r3); UPD(0x0C06C3A2u, 2);  /* 0C06C3A0 mov.l Rm,@Rn */
	r4 |= r1;  /* 0C06C3A2 or Rm,Rn */
	r7 = 0x808080u; UPD(0x0C06C3A6u, 2);  /* 0C06C3A4 mov.l @(disp,pc),Rn */
	IF(0x0C06C3A6u); { u32 t_ = r11; PR = 0x0C06C3AAu; r6 -= r13; /* slot sub Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C06C3AAu); }  /* 0C06C3A6 jsr @Rn */
L_0C06C3AA: BLKS(0x0C06C3AAu);
	r7 = R32(r14 + 0x4u); UPD(0x0C06C3ACu, 1);  /* 0C06C3AA mov.l @(disp,Rm),Rn */
L_0C06C3AC: BLKS(0x0C06C3ACu);
	r15 += 0x4u;  /* 0C06C3AC add #imm,Rn */
	IF(0x0C06C3AEu); r7 -= 1; T = r7 == 0;  /* 0C06C3AE dt Rn */
	{ u32 c_ = T; W32(r14 + 0x4u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06C3C6u, 5); goto L_0C06C3C6; } UPD(0x0C06C3B4u, 1); goto L_0C06C3B4; }  /* 0C06C3B0 bt/s */
L_0C06C3B4: BLKS(0x0C06C3B4u);
	r9 = R32(r14 + 0x8u); UPD(0x0C06C3B6u, 1);  /* 0C06C3B4 mov.l @(disp,Rm),Rn */
	r10 += 0x1Cu;  /* 0C06C3B6 add #imm,Rn */
	UPD(0x0C06C3B8u, 1);
L_0C06C3B8: BLKS(0x0C06C3B8u);
	r9 += 0x1u;  /* 0C06C3B8 add #imm,Rn */
	r12 = 0xFFu; UPD(0x0C06C3BCu, 2);  /* 0C06C3BA mov.w @(disp,pc),Rn */
	T = (s32)r9 > (s32)r12;  /* 0C06C3BC cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06C3C6u, 4); goto L_0C06C3C6; } UPD(0x0C06C3C2u, 1); goto L_0C06C3C2; }  /* 0C06C3BE bt/s */
L_0C06C3C2: BLKS(0x0C06C3C2u);
	{ r0 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(0x0C06C208u, 3); goto L_0C06C208; }  /* 0C06C3C2 bra */
L_0C06C3C6: BLKS(0x0C06C3C6u);
	r14 += 0x10u;  /* 0C06C3C6 add #imm,Rn */
	r15 = r14;  /* 0C06C3C8 mov Rm,Rn */
	IF(0x0C06C3CAu); PR = R32(r15); r15 += 4; UPD(0x0C06C3CCu, 3);  /* 0C06C3CA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06C3CEu, 1);  /* 0C06C3CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06C3D0u, 1);  /* 0C06C3CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06C3D2u, 1);  /* 0C06C3D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06C3D4u, 1);  /* 0C06C3D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06C3D6u, 1);  /* 0C06C3D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06C3D8u, 1);  /* 0C06C3D6 mov.l @Rm+,Rn */
	IF(0x0C06C3D8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06C3D8 rts */
L_0C06C3E0: BLKS(0x0C06C3E0u);
	r5 = 0xC7u; UPD(0x0C06C3E2u, 1);  /* 0C06C3E0 mov.w @(disp,pc),Rn */
	T = (s32)r4 > (s32)r5;  /* 0C06C3E2 cmp/gt Rm,Rn */
	{ u32 c_ = T; r12 += 0xFFFFFFF0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06C36Cu, 4); goto L_0C06C36C; } goto L_0C06C3E8; }  /* 0C06C3E4 bt/s */
L_0C06C3E8: BLKS(0x0C06C3E8u);
	r0 = R32(r10 + 0x18u); UPD(0x0C06C3EAu, 2);  /* 0C06C3E8 mov.l @(disp,Rm),Rn */
	r12 = 0x3Eu;  /* 0C06C3EA mov #imm,Rn */
	r0 &= r12;  /* 0C06C3EC and Rm,Rn */
	IF(0x0C06C3EEu); r0 <<= 2;  /* 0C06C3EE shll2 Rn */
	r9 = 0xFFFFF000u; UPD(0x0C06C3F2u, 4);  /* 0C06C3F0 mov.w @(disp,pc),Rn */
	r0 |= 0xC0u;  /* 0C06C3F2 or #imm,r0 */
	r0 |= r9;  /* 0C06C3F4 or Rm,Rn */
	{ W16(r13, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C06C370u, 5); goto L_0C06C370; }  /* 0C06C3F6 bra */
L_0C06C450: BLKS(0x0C06C450u);
	{ r13 += 0x2u; /* slot add #imm,Rn */ UPD(0x0C06C364u, 3); goto L_0C06C364; }  /* 0C06C450 bra */
L_0C06C460: BLKS(0x0C06C460u);
	r13 = 0xC7u; UPD(0x0C06C462u, 1);  /* 0C06C460 mov.w @(disp,pc),Rn */
	T = (s32)r7 > (s32)r13;  /* 0C06C462 cmp/gt Rm,Rn */
	{ u32 c_ = T; r3 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06C490u, 4); goto L_0C06C490; } goto L_0C06C468; }  /* 0C06C464 bt/s */
L_0C06C468: BLKS(0x0C06C468u);
	r0 = 0xFFFFF8FCu; UPD(0x0C06C46Au, 2);  /* 0C06C468 mov.w @(disp,pc),Rn */
	r2 += 0x4u;  /* 0C06C46A add #imm,Rn */
	r8 = R32(r10 + 0x18u); UPD(0x0C06C46Eu, 2);  /* 0C06C46C mov.l @(disp,Rm),Rn */
	r9 = 0xEu;  /* 0C06C46E mov #imm,Rn */
	W16(r2, r0); UPD(0x0C06C472u, 2);  /* 0C06C470 mov.w Rm,@Rn */
	r8 &= r9;  /* 0C06C472 and Rm,Rn */
	r3 = 0xF07u; UPD(0x0C06C476u, 2);  /* 0C06C474 mov.w @(disp,pc),Rn */
	r2 += 0x2u;  /* 0C06C476 add #imm,Rn */
	IF(0x0C06C478u); r8 <<= 2;  /* 0C06C478 shll2 Rn */
	r9 = 0xD8u; UPD(0x0C06C47Cu, 3);  /* 0C06C47A mov.w @(disp,pc),Rn */
	r8 += r8;  /* 0C06C47C add Rm,Rn */
	r12 = 0xB0u; UPD(0x0C06C480u, 2);  /* 0C06C47E mov.w @(disp,pc),Rn */
	r9 -= r8;  /* 0C06C480 sub Rm,Rn */
	{ W16(r2, r3); /* slot mov.w Rm,@Rn */ UPD(0x0C06C2DCu, 4); goto L_0C06C2DC; }  /* 0C06C482 bra */
L_0C06C490: BLKS(0x0C06C490u);
	r8 = 0xFFFFF4F8u; UPD(0x0C06C492u, 1);  /* 0C06C490 mov.w @(disp,pc),Rn */
	r2 += 0x4u;  /* 0C06C492 add #imm,Rn */
	r0 = R32(r10 + 0x18u); UPD(0x0C06C496u, 2);  /* 0C06C494 mov.l @(disp,Rm),Rn */
	r13 = 0x18u;  /* 0C06C496 mov #imm,Rn */
	W16(r2, r8); UPD(0x0C06C49Au, 2);  /* 0C06C498 mov.w Rm,@Rn */
	IF(0x0C06C49Au); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06C49A shar Rn */
	r12 = 0x170Fu; UPD(0x0C06C49Eu, 2);  /* 0C06C49C mov.w @(disp,pc),Rn */
	r0 &= 0x7u;  /* 0C06C49E and #imm,r0 */
	r2 += 0x2u;  /* 0C06C4A0 add #imm,Rn */
	IF(0x0C06C4A2u); MACL = r0 * r13;  /* 0C06C4A2 mul.l Rm,Rn */
	W16(r2, r12); UPD(0x0C06C4A6u, 5);  /* 0C06C4A4 mov.w Rm,@Rn */
	r9 = 0xD0u; UPD(0x0C06C4A8u, 1);  /* 0C06C4A6 mov.w @(disp,pc),Rn */
	IF(0x0C06C4A8u); r2 = MACL;  /* 0C06C4A8 sts macl,Rn */
	r9 -= r2;  /* 0C06C4AA sub Rm,Rn */
	r12 = 0x10u;  /* 0C06C4AC mov #imm,Rn */
	{ IF(0x0C06C4B0u); r9 <<= 8; /* slot shll8 Rn */ UPD(0x0C06C2E0u, 6); goto L_0C06C2E0; }  /* 0C06C4AE bra */
L_0C06C4C0: BLKS(0x0C06C4C0u);
	r8 = 0x66666667u; UPD(0x0C06C4C2u, 1);  /* 0C06C4C0 mov.l @(disp,pc),Rn */
	r13 = r7;  /* 0C06C4C2 mov Rm,Rn */
	{ s64 r_ = (s64)(s32)r7 * (s64)(s32)r8; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C06C4C4 dmuls.l Rm,Rn */
	r9 = 0xAu;  /* 0C06C4C6 mov #imm,Rn */
	r0 = 0xC173E8Cu; UPD(0x0C06C4CAu, 5);  /* 0C06C4C8 mov.l @(disp,pc),Rn */
	IF(0x0C06C4CAu); r8 = MACH;  /* 0C06C4CA sts mach,Rn */
	IF(0x0C06C4CCu); T = r8 & 1; r8 = (u32)((s32)r8 >> 1);  /* 0C06C4CC shar Rn */
	IF(0x0C06C4CEu); T = r8 & 1; r8 = (u32)((s32)r8 >> 1);  /* 0C06C4CE shar Rn */
	IF(0x0C06C4D0u); T = r13 >> 31; r13 <<= 1;  /* 0C06C4D0 shll Rn */
	{ u32 a_ = r13, t_ = a_ - r13, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r13 = r_; }  /* 0C06C4D2 subc Rm,Rn */
	r8 -= r13;  /* 0C06C4D4 sub Rm,Rn */
	IF(0x0C06C4D6u); MACL = r8 * r9;  /* 0C06C4D6 mul.l Rm,Rn */
	r2 = 0xC2289E8u; UPD(0x0C06C4DAu, 9);  /* 0C06C4D8 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06C4DA add #imm,Rn */
	IF(0x0C06C4DCu); r5 = MACL;  /* 0C06C4DC sts macl,Rn */
	r7 -= r5;  /* 0C06C4DE sub Rm,Rn */
	IF(0x0C06C4E0u); r7 <<= 2;  /* 0C06C4E0 shll2 Rn */
	IF(0x0C06C4E2u); r4 = R32(r0 + r7); UPD(0x0C06C4E4u, 5);  /* 0C06C4E2 mov.l @(r0,Rm),Rn */
	r0 = r11;  /* 0C06C4E4 mov Rm,Rn */
	r0 += r0;  /* 0C06C4E6 add Rm,Rn */
	r0 += r6;  /* 0C06C4E8 add Rm,Rn */
	IF(0x0C06C4EAu); r0 <<= 2;  /* 0C06C4EA shll2 Rn */
	r13 = r0 & 0xFF;  /* 0C06C4EC extu.b Rm,Rn */
	r0 = 0xC0C4468u; UPD(0x0C06C4F0u, 6);  /* 0C06C4EE mov.l @(disp,pc),Rn */
	IF(0x0C06C4F0u); r13 <<= 2;  /* 0C06C4F0 shll2 Rn */
	r13 += r13;  /* 0C06C4F2 add Rm,Rn */
	IF(0x0C06C4F4u); r9 = R32(r0 + r13); UPD(0x0C06C4F6u, 3);  /* 0C06C4F4 mov.l @(r0,Rm),Rn */
	IF(0x0C06C4F6u); r6 <<= 2;  /* 0C06C4F6 shll2 Rn */
	IF(0x0C06C4F8u); MACL = r9 * r6;  /* 0C06C4F8 mul.l Rm,Rn */
	r12 = R32(r10 + 0x18u); UPD(0x0C06C4FCu, 4);  /* 0C06C4FA mov.l @(disp,Rm),Rn */
	W32(r2, r4); UPD(0x0C06C4FEu, 1);  /* 0C06C4FC mov.l Rm,@Rn */
	IF(0x0C06C4FEu); T = r12 & 1; r12 >>= 1;  /* 0C06C4FE shlr Rn */
	r5 = R32(r14); UPD(0x0C06C502u, 2);  /* 0C06C500 mov.l @Rm,Rn */
	IF(0x0C06C502u); r12 <<= 16;  /* 0C06C502 shll16 Rn */
	r9 = 0x10000000u; UPD(0x0C06C506u, 2);  /* 0C06C504 mov.l @(disp,pc),Rn */
	r4 += 0x2u;  /* 0C06C506 add #imm,Rn */
	IF(0x0C06C508u); r12 >>= 2;  /* 0C06C508 shlr2 Rn */
	r1 = (u32)(s32)(s16)R16(r4); UPD(0x0C06C50Cu, 3);  /* 0C06C50A mov.w @Rm,Rn */
	IF(0x0C06C50Cu); T = r12 & 1; r12 >>= 1;  /* 0C06C50C shlr Rn */
	r9 |= r5;  /* 0C06C50E or Rm,Rn */
	r3 = r12 & 0xFFFF;  /* 0C06C510 extu.w Rm,Rn */
	r5 = R32(r10 + 0x4u); UPD(0x0C06C514u, 4);  /* 0C06C512 mov.l @(disp,Rm),Rn */
	IF(0x0C06C514u); r12 = MACL;  /* 0C06C514 sts macl,Rn */
	r7 = r1 & 0xFF;  /* 0C06C516 extu.b Rm,Rn */
	r7 |= r3;  /* 0C06C518 or Rm,Rn */
	r5 += r12;  /* 0C06C51A add Rm,Rn */
	W16(r4, r7); UPD(0x0C06C51Eu, 5);  /* 0C06C51C mov.w Rm,@Rn */
	r12 = 0x150000u; UPD(0x0C06C520u, 1);  /* 0C06C51E mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C06C520 mov #imm,Rn */
	IF(0x0C06C522u); MACL = r11 * r12;  /* 0C06C522 mul.l Rm,Rn */
	W32(r15, r7); UPD(0x0C06C526u, 4);  /* 0C06C524 mov.l Rm,@Rn */
	r4 = r9;  /* 0C06C526 mov Rm,Rn */
	r13 = 0xC073B10u; UPD(0x0C06C52Au, 2);  /* 0C06C528 mov.l @(disp,pc),Rn */
	IF(0x0C06C52Au); r3 = MACL;  /* 0C06C52A sts macl,Rn */
	r6 = R32(r10 + 0x8u); UPD(0x0C06C52Eu, 2);  /* 0C06C52C mov.l @(disp,Rm),Rn */
	r11 += 0x1u;  /* 0C06C52E add #imm,Rn */
	r7 = 0x808080u; UPD(0x0C06C532u, 2);  /* 0C06C530 mov.l @(disp,pc),Rn */
	IF(0x0C06C532u); { u32 t_ = r13; PR = 0x0C06C536u; r6 -= r3; /* slot sub Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C06C536u); }  /* 0C06C532 jsr @Rn */
L_0C06C536: BLKS(0x0C06C536u);
	r7 = r8;  /* 0C06C536 mov Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C06C538 tst Rm,Rn */
	{ u32 c_ = T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06C550u, 5); goto L_0C06C550; } goto L_0C06C53E; }  /* 0C06C53A bt/s */
L_0C06C53E: BLKS(0x0C06C53Eu);
	{ r6 = R32(r10 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C06C4C0u, 4); goto L_0C06C4C0; }  /* 0C06C53E bra */
L_0C06C550: BLKS(0x0C06C550u);
	r0 = R32(r10 + 0x18u); UPD(0x0C06C552u, 1);  /* 0C06C550 mov.l @(disp,Rm),Rn */
	r4 = 0x18u;  /* 0C06C552 mov #imm,Rn */
	r3 = 0xC173E8Cu; UPD(0x0C06C556u, 2);  /* 0C06C554 mov.l @(disp,pc),Rn */
	IF(0x0C06C556u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06C556 shar Rn */
	r8 = R32(r3 + 0x28u); UPD(0x0C06C55Au, 2);  /* 0C06C558 mov.l @(disp,Rm),Rn */
	r0 &= 0x7u;  /* 0C06C55A and #imm,r0 */
	r5 = 0xC2289E8u; UPD(0x0C06C55Eu, 2);  /* 0C06C55C mov.l @(disp,pc),Rn */
	IF(0x0C06C55Eu); MACL = r0 * r4;  /* 0C06C55E mul.l Rm,Rn */
	W32(r5, r8); UPD(0x0C06C562u, 3);  /* 0C06C560 mov.l Rm,@Rn */
	r1 = 0x3u;  /* 0C06C562 mov #imm,Rn */
	r8 += 0x2u;  /* 0C06C564 add #imm,Rn */
	r5 = r11;  /* 0C06C566 mov Rm,Rn */
	r4 = R32(r10 + 0x10u); UPD(0x0C06C56Au, 4);  /* 0C06C568 mov.l @(disp,Rm),Rn */
	r5 += r5;  /* 0C06C56A add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C06C56Eu, 2);  /* 0C06C56C mov.w @Rm,Rn */
	r5 += r4;  /* 0C06C56E add Rm,Rn */
	r2 = 0xFFFFFF00u; UPD(0x0C06C572u, 2);  /* 0C06C570 mov.w @(disp,pc),Rn */
	IF(0x0C06C572u); r0 = MACL;  /* 0C06C572 sts macl,Rn */
	r6 &= r2;  /* 0C06C574 and Rm,Rn */
	IF(0x0C06C576u); ARG0(0x451Du); { s32 s_ = (s32)r1; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C06C576 shld Rm,Rn */
	r3 = 0x1FFu; UPD(0x0C06C57Au, 4);  /* 0C06C578 mov.w @(disp,pc),Rn */
	r6 |= r0;  /* 0C06C57A or Rm,Rn */
	r5 &= r3;  /* 0C06C57C and Rm,Rn */
	r0 = 0xC0C4468u; UPD(0x0C06C580u, 3);  /* 0C06C57E mov.l @(disp,pc),Rn */
	IF(0x0C06C580u); r5 <<= 2;  /* 0C06C580 shll2 Rn */
	IF(0x0C06C582u); r2 = R32(r0 + r5); UPD(0x0C06C584u, 2);  /* 0C06C582 mov.l @(r0,Rm),Rn */
	IF(0x0C06C584u); r4 <<= 2;  /* 0C06C584 shll2 Rn */
	IF(0x0C06C586u); MACL = r2 * r4;  /* 0C06C586 mul.l Rm,Rn */
	W16(r8, r6); UPD(0x0C06C58Au, 4);  /* 0C06C588 mov.w Rm,@Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06C58A add #imm,Rn */
	IF(0x0C06C58Cu); r6 = MACL;  /* 0C06C58C sts macl,Rn */
	r5 = R32(r10 + 0x4u); UPD(0x0C06C590u, 3);  /* 0C06C58E mov.l @(disp,Rm),Rn */
	IF(0x0C06C590u); MACL = r11 * r12;  /* 0C06C590 mul.l Rm,Rn */
	r5 += r6;  /* 0C06C592 add Rm,Rn */
	r6 = R32(r10 + 0x8u); UPD(0x0C06C596u, 4);  /* 0C06C594 mov.l @(disp,Rm),Rn */
	IF(0x0C06C596u); r11 = MACL;  /* 0C06C596 sts macl,Rn */
	W32(r15, r7); UPD(0x0C06C59Au, 2);  /* 0C06C598 mov.l Rm,@Rn */
	r6 -= r11;  /* 0C06C59A sub Rm,Rn */
	r7 = 0x808080u; UPD(0x0C06C59Eu, 2);  /* 0C06C59C mov.l @(disp,pc),Rn */
	IF(0x0C06C59Eu); { u32 t_ = r13; PR = 0x0C06C5A2u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C06C5A2u); }  /* 0C06C59E jsr @Rn */
L_0C06C5A2: BLKS(0x0C06C5A2u);
	{ r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C06C3ACu, 3); goto L_0C06C3AC; }  /* 0C06C5A2 bra */
L_0C06C5B0: BLKS(0x0C06C5B0u);
	IF(0x0C06C5B0u); T = (s32)r3 > 0;  /* 0C06C5B0 cmp/pl Rn */
	{ u32 c_ = T; W32(r10 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06C5C2u, 4); goto L_0C06C5C2; } UPD(0x0C06C5B6u, 1); goto L_0C06C5B6; }  /* 0C06C5B2 bt/s */
L_0C06C5B6: BLKS(0x0C06C5B6u);
	r0 = 0xC3CA704u; UPD(0x0C06C5B8u, 1);  /* 0C06C5B6 mov.l @(disp,pc),Rn */
	W32(r10, r2); UPD(0x0C06C5BAu, 1);  /* 0C06C5B8 mov.l Rm,@Rn */
	r2 = R32(r0); UPD(0x0C06C5BCu, 1);  /* 0C06C5BA mov.l @Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C06C5BC add #imm,Rn */
	W32(r0, r2); UPD(0x0C06C5C0u, 2);  /* 0C06C5BE mov.l Rm,@Rn */
	r0 = 0x0u;  /* 0C06C5C0 mov #imm,Rn */
	UPD(0x0C06C5C2u, 1);
L_0C06C5C2: BLKS(0x0C06C5C2u);
	{ r5 = R32(r10 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C06C242u, 3); goto L_0C06C242; }  /* 0C06C5C2 bra */
L_0C06C5D0: BLKS(0x0C06C5D0u);
	r11 += 0xFFFFFFFFu;  /* 0C06C5D0 add #imm,Rn */
	IF(0x0C06C5D2u); T = (s32)r11 > 0;  /* 0C06C5D2 cmp/pl Rn */
	{ u32 c_ = T; W32(r10 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06C5C2u, 5); goto L_0C06C5C2; } UPD(0x0C06C5D8u, 1); goto L_0C06C5D8; }  /* 0C06C5D4 bt/s */
L_0C06C5D8: BLKS(0x0C06C5D8u);
	r13 = 0x2u;  /* 0C06C5D8 mov #imm,Rn */
	r12 = 0x1Fu;  /* 0C06C5DA mov #imm,Rn */
	W32(r10, r13); UPD(0x0C06C5DEu, 3);  /* 0C06C5DC mov.l Rm,@Rn */
	r0 = 0x2u;  /* 0C06C5DE mov #imm,Rn */
	{ W32(r10 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06C240u, 4); goto L_0C06C240; }  /* 0C06C5E0 bra */
L_0C06C5F0: BLKS(0x0C06C5F0u);
	{ r9 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C06C266u, 3); goto L_0C06C266; }  /* 0C06C5F0 bra */
}

/* FUN_0c06c630 */
void blk_f_0C06C630(sh3_t *c)
{
	LOCALS;
L_0C06C630: BLKS(0x0C06C630u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06C632u, 1);  /* 0C06C630 mov.l Rm,@-Rn */
	r1 = 0xBu;  /* 0C06C632 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06C636u, 2);  /* 0C06C634 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C06C636 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06C63Au, 2);  /* 0C06C638 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06C63Cu, 1);  /* 0C06C63A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06C63Eu, 1);  /* 0C06C63C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06C640u, 1);  /* 0C06C63E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06C642u, 1);  /* 0C06C640 mov.l Rm,@-Rn */
	r0 = 0xC2A6D69u; UPD(0x0C06C644u, 1);  /* 0C06C642 mov.l @(disp,pc),Rn */
	IF(0x0C06C644u); r15 -= 4; W32(r15, PR); UPD(0x0C06C646u, 1);  /* 0C06C644 sts.l pr,@-Rn */
	r13 = 0xC0C23B0u; UPD(0x0C06C648u, 1);  /* 0C06C646 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06C648 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r0); UPD(0x0C06C64Cu, 2);  /* 0C06C64A mov.b @Rm,Rn */
	r14 = r15;  /* 0C06C64C mov Rm,Rn */
	r9 = 0xC2B037Bu; UPD(0x0C06C650u, 2);  /* 0C06C64E mov.l @(disp,pc),Rn */
	r12 = 0xC062000u; UPD(0x0C06C652u, 1);  /* 0C06C650 mov.l @(disp,pc),Rn */
	W8(r9, r1); UPD(0x0C06C654u, 1);  /* 0C06C652 mov.b Rm,@Rn */
	IF(0x0C06C654u); { u32 t_ = r13; PR = 0x0C06C658u; W32(r14, r8); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C23B0, 0x0C0C23B0u, 0x0C06C658u); }  /* 0C06C654 jsr @Rn */
L_0C06C658: BLKS(0x0C06C658u);
	IF(0x0C06C658u); { u32 t_ = r12; PR = 0x0C06C65Cu; IF(0x0C06C65Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C06C65Cu); }  /* 0C06C658 jsr @Rn */
L_0C06C65C: BLKS(0x0C06C65Cu);
	r7 = 0xC06D5A0u; UPD(0x0C06C65Eu, 1);  /* 0C06C65C mov.l @(disp,pc),Rn */
	r11 = 0xC072340u; UPD(0x0C06C660u, 1);  /* 0C06C65E mov.l @(disp,pc),Rn */
	IF(0x0C06C660u); { u32 t_ = r7; PR = 0x0C06C664u; IF(0x0C06C662u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D5A0, 0x0C06D5A0u, 0x0C06C664u); }  /* 0C06C660 jsr @Rn */
L_0C06C664: BLKS(0x0C06C664u);
	r6 = 0xC06D6E0u; UPD(0x0C06C666u, 1);  /* 0C06C664 mov.l @(disp,pc),Rn */
	r10 = 0xC0C0910u; UPD(0x0C06C668u, 1);  /* 0C06C666 mov.l @(disp,pc),Rn */
	IF(0x0C06C668u); { u32 t_ = r6; PR = 0x0C06C66Cu; IF(0x0C06C66Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D6E0, 0x0C06D6E0u, 0x0C06C66Cu); }  /* 0C06C668 jsr @Rn */
L_0C06C66C: BLKS(0x0C06C66Cu);
	IF(0x0C06C66Cu); { u32 t_ = r11; PR = 0x0C06C670u; IF(0x0C06C66Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C072340, 0x0C072340u, 0x0C06C670u); }  /* 0C06C66C jsr @Rn */
L_0C06C670: BLKS(0x0C06C670u);
	IF(0x0C06C670u); { u32 t_ = r10; PR = 0x0C06C674u; IF(0x0C06C672u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0910, 0x0C0C0910u, 0x0C06C674u); }  /* 0C06C670 jsr @Rn */
L_0C06C674: BLKS(0x0C06C674u);
	r5 = 0xC06D3C0u; UPD(0x0C06C676u, 1);  /* 0C06C674 mov.l @(disp,pc),Rn */
	r9 = 0xC07D620u; UPD(0x0C06C678u, 1);  /* 0C06C676 mov.l @(disp,pc),Rn */
	IF(0x0C06C678u); { u32 t_ = r5; PR = 0x0C06C67Cu; IF(0x0C06C67Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D3C0, 0x0C06D3C0u, 0x0C06C67Cu); }  /* 0C06C678 jsr @Rn */
L_0C06C67C: BLKS(0x0C06C67Cu);
	r4 = 0xC06D480u; UPD(0x0C06C67Eu, 1);  /* 0C06C67C mov.l @(disp,pc),Rn */
	r8 = 0xC0BF5C0u; UPD(0x0C06C680u, 1);  /* 0C06C67E mov.l @(disp,pc),Rn */
	IF(0x0C06C680u); { u32 t_ = r4; PR = 0x0C06C684u; IF(0x0C06C682u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D480, 0x0C06D480u, 0x0C06C684u); }  /* 0C06C680 jsr @Rn */
L_0C06C684: BLKS(0x0C06C684u);
	r3 = 0xC06D4D0u; UPD(0x0C06C686u, 1);  /* 0C06C684 mov.l @(disp,pc),Rn */
	IF(0x0C06C686u); { u32 t_ = r3; PR = 0x0C06C68Au; IF(0x0C06C688u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D4D0, 0x0C06D4D0u, 0x0C06C68Au); }  /* 0C06C686 jsr @Rn */
L_0C06C68A: BLKS(0x0C06C68Au);
	IF(0x0C06C68Au); { u32 t_ = r9; PR = 0x0C06C68Eu; IF(0x0C06C68Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C07D620, 0x0C07D620u, 0x0C06C68Eu); }  /* 0C06C68A jsr @Rn */
L_0C06C68E: BLKS(0x0C06C68Eu);
	r2 = 0xC06D520u; UPD(0x0C06C690u, 1);  /* 0C06C68E mov.l @(disp,pc),Rn */
	IF(0x0C06C690u); { u32 t_ = r2; PR = 0x0C06C694u; IF(0x0C06C692u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D520, 0x0C06D520u, 0x0C06C694u); }  /* 0C06C690 jsr @Rn */
L_0C06C694: BLKS(0x0C06C694u);
	r0 = 0xC06D570u; UPD(0x0C06C696u, 1);  /* 0C06C694 mov.l @(disp,pc),Rn */
	IF(0x0C06C696u); { u32 t_ = r0; PR = 0x0C06C69Au; IF(0x0C06C698u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D570, 0x0C06D570u, 0x0C06C69Au); }  /* 0C06C696 jsr @Rn */
L_0C06C69A: BLKS(0x0C06C69Au);
	IF(0x0C06C69Au); { u32 t_ = r8; PR = 0x0C06C69Eu; IF(0x0C06C69Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BF5C0, 0x0C0BF5C0u, 0x0C06C69Eu); }  /* 0C06C69A jsr @Rn */
L_0C06C69E: BLKS(0x0C06C69Eu);
	r0 = 0xC06D390u; UPD(0x0C06C6A0u, 1);  /* 0C06C69E mov.l @(disp,pc),Rn */
	r8 = 0x100u; UPD(0x0C06C6A2u, 1);  /* 0C06C6A0 mov.w @(disp,pc),Rn */
	IF(0x0C06C6A2u); { u32 t_ = r0; PR = 0x0C06C6A6u; IF(0x0C06C6A4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D390, 0x0C06D390u, 0x0C06C6A6u); }  /* 0C06C6A2 jsr @Rn */
L_0C06C6A6: BLKS(0x0C06C6A6u);
	r1 = 0xC3CA708u; UPD(0x0C06C6A8u, 1);  /* 0C06C6A6 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C06C6A8 mov #imm,Rn */
	IF(0x0C06C6AAu); ;  /* 0C06C6AA nop */
	UPD(0x0C06C6ACu, 2);
L_0C06C6AC: BLKS(0x0C06C6ACu);
	W32(r1, r2); UPD(0x0C06C6AEu, 1);  /* 0C06C6AC mov.l Rm,@Rn */
	IF(0x0C06C6AEu); r8 -= 1; T = r8 == 0;  /* 0C06C6AE dt Rn */
	{ u32 c_ = !T; r1 += 0x1Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06C6ACu, 4); goto L_0C06C6AC; } goto L_0C06C6B4; }  /* 0C06C6B0 bf/s */
L_0C06C6B4: BLKS(0x0C06C6B4u);
	r10 = 0xC0C1270u; UPD(0x0C06C6B6u, 2);  /* 0C06C6B4 mov.l @(disp,pc),Rn */
	r5 = 0xC3CA704u; UPD(0x0C06C6B8u, 1);  /* 0C06C6B6 mov.l @(disp,pc),Rn */
	IF(0x0C06C6B8u); { u32 t_ = r10; PR = 0x0C06C6BCu; W32(r5, r8); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1270, 0x0C0C1270u, 0x0C06C6BCu); }  /* 0C06C6B8 jsr @Rn */
L_0C06C6BC: BLKS(0x0C06C6BCu);
	r4 = 0xC2ABAA0u; UPD(0x0C06C6BEu, 1);  /* 0C06C6BC mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C06C6BE mov #imm,Rn */
	r3 = 0xC2B1A50u; UPD(0x0C06C6C2u, 2);  /* 0C06C6C0 mov.l @(disp,pc),Rn */
	r2 = 0xC3C8474u; UPD(0x0C06C6C4u, 1);  /* 0C06C6C2 mov.l @(disp,pc),Rn */
	r11 = 0xC07BE10u; UPD(0x0C06C6C6u, 1);  /* 0C06C6C4 mov.l @(disp,pc),Rn */
	r0 = 0xC234C00u; UPD(0x0C06C6C8u, 1);  /* 0C06C6C6 mov.l @(disp,pc),Rn */
	r13 = 0xC238020u; UPD(0x0C06C6CAu, 1);  /* 0C06C6C8 mov.l @(disp,pc),Rn */
	r12 = 0xC29D194u; UPD(0x0C06C6CCu, 1);  /* 0C06C6CA mov.l @(disp,pc),Rn */
	r7 = 0xC3C86ECu; UPD(0x0C06C6CEu, 1);  /* 0C06C6CC mov.l @(disp,pc),Rn */
	r6 = 0xC22E024u; UPD(0x0C06C6D0u, 1);  /* 0C06C6CE mov.l @(disp,pc),Rn */
	r9 = 0xC2380B0u; UPD(0x0C06C6D2u, 1);  /* 0C06C6D0 mov.l @(disp,pc),Rn */
	W8(r4, r1); UPD(0x0C06C6D4u, 1);  /* 0C06C6D2 mov.b Rm,@Rn */
	W32(r3, r8); UPD(0x0C06C6D6u, 1);  /* 0C06C6D4 mov.l Rm,@Rn */
	W32(r2, r8); UPD(0x0C06C6D8u, 1);  /* 0C06C6D6 mov.l Rm,@Rn */
	W8(r13, r8); UPD(0x0C06C6DAu, 1);  /* 0C06C6D8 mov.b Rm,@Rn */
	W8(r12, r8); UPD(0x0C06C6DCu, 1);  /* 0C06C6DA mov.b Rm,@Rn */
	r13 = 0xFFFFFFF8u;  /* 0C06C6DC mov #imm,Rn */
	W32(r9, r8); UPD(0x0C06C6E0u, 2);  /* 0C06C6DE mov.l Rm,@Rn */
	W32(r0, r8); UPD(0x0C06C6E2u, 1);  /* 0C06C6E0 mov.l Rm,@Rn */
	W8(r7, r8); UPD(0x0C06C6E4u, 1);  /* 0C06C6E2 mov.b Rm,@Rn */
	IF(0x0C06C6E4u); { u32 t_ = r11; PR = 0x0C06C6E8u; W8(r6, r8); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07BE10, 0x0C07BE10u, 0x0C06C6E8u); }  /* 0C06C6E4 jsr @Rn */
L_0C06C6E8: BLKS(0x0C06C6E8u);
	r10 = 0xC175064u; UPD(0x0C06C6EAu, 1);  /* 0C06C6E8 mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C06C6EA mov #imm,Rn */
	r5 = 0xC2B07FCu; UPD(0x0C06C6EEu, 2);  /* 0C06C6EC mov.l @(disp,pc),Rn */
	r4 = 0x124u; UPD(0x0C06C6F0u, 1);  /* 0C06C6EE mov.w @(disp,pc),Rn */
	r3 = 0xC3CC30Cu; UPD(0x0C06C6F2u, 1);  /* 0C06C6F0 mov.l @(disp,pc),Rn */
	r2 = 0xC234BECu; UPD(0x0C06C6F4u, 1);  /* 0C06C6F2 mov.l @(disp,pc),Rn */
	r12 = 0xC29D196u; UPD(0x0C06C6F6u, 1);  /* 0C06C6F4 mov.l @(disp,pc),Rn */
	W32(r10, r8); UPD(0x0C06C6F8u, 1);  /* 0C06C6F6 mov.l Rm,@Rn */
	W32(r5, r8); UPD(0x0C06C6FAu, 1);  /* 0C06C6F8 mov.l Rm,@Rn */
	W32(r3, r4); UPD(0x0C06C6FCu, 1);  /* 0C06C6FA mov.l Rm,@Rn */
	W32(r2, r8); UPD(0x0C06C6FEu, 1);  /* 0C06C6FC mov.l Rm,@Rn */
	IF(0x0C06C6FEu); ;  /* 0C06C6FE nop */
	UPD(0x0C06C700u, 1);
L_0C06C700: BLKS(0x0C06C700u);
	r10 = 0xC060BC0u; UPD(0x0C06C702u, 1);  /* 0C06C700 mov.l @(disp,pc),Rn */
	r9 = 0xC061F70u; UPD(0x0C06C704u, 1);  /* 0C06C702 mov.l @(disp,pc),Rn */
	IF(0x0C06C704u); { u32 t_ = r10; PR = 0x0C06C708u; IF(0x0C06C706u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060BC0, 0x0C060BC0u, 0x0C06C708u); }  /* 0C06C704 jsr @Rn */
L_0C06C708: BLKS(0x0C06C708u);
	r6 = 0xC06CE70u; UPD(0x0C06C70Au, 1);  /* 0C06C708 mov.l @(disp,pc),Rn */
	r8 = 0xC29748Cu; UPD(0x0C06C70Cu, 1);  /* 0C06C70A mov.l @(disp,pc),Rn */
	IF(0x0C06C70Cu); { u32 t_ = r6; PR = 0x0C06C710u; IF(0x0C06C70Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06CE70, 0x0C06CE70u, 0x0C06C710u); }  /* 0C06C70C jsr @Rn */
L_0C06C710: BLKS(0x0C06C710u);
	IF(0x0C06C710u); { u32 t_ = r9; PR = 0x0C06C714u; IF(0x0C06C712u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061F70, 0x0C061F70u, 0x0C06C714u); }  /* 0C06C710 jsr @Rn */
L_0C06C714: BLKS(0x0C06C714u);
	W32(r8, r0); UPD(0x0C06C716u, 1);  /* 0C06C714 mov.l Rm,@Rn */
	r4 = 0x0u;  /* 0C06C716 mov #imm,Rn */
	r0 = 0x0u;  /* 0C06C718 mov #imm,Rn */
	IF(0x0C06C71Au); ;  /* 0C06C71A nop */
	UPD(0x0C06C71Cu, 3);
L_0C06C71C: BLKS(0x0C06C71Cu);
	r8 = 0xC28EDBCu; UPD(0x0C06C71Eu, 1);  /* 0C06C71C mov.l @(disp,pc),Rn */
	r5 = 0xC3C53EAu; UPD(0x0C06C720u, 1);  /* 0C06C71E mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C06C720 add Rm,Rn */
	r6 = 0xC2860B2u; UPD(0x0C06C724u, 2);  /* 0C06C722 mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C06C724 add Rm,Rn */
	r9 = 0xC2975F8u; UPD(0x0C06C728u, 2);  /* 0C06C726 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C06C728 add Rm,Rn */
	r2 = 0xC3C3FD0u; UPD(0x0C06C72Cu, 2);  /* 0C06C72A mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C06C72C add Rm,Rn */
	r2 += r0;  /* 0C06C72E add Rm,Rn */
	W16(r6, r11); UPD(0x0C06C732u, 3);  /* 0C06C730 mov.w Rm,@Rn */
	W16(r5, r11); UPD(0x0C06C734u, 1);  /* 0C06C732 mov.w Rm,@Rn */
	W16(r8, r11); UPD(0x0C06C736u, 1);  /* 0C06C734 mov.w Rm,@Rn */
	r7 = 0xC28F616u; UPD(0x0C06C738u, 1);  /* 0C06C736 mov.l @(disp,pc),Rn */
	W16(r2, r11); UPD(0x0C06C73Au, 1);  /* 0C06C738 mov.w Rm,@Rn */
	r7 += r0;  /* 0C06C73A add Rm,Rn */
	W16(r9, r11); UPD(0x0C06C73Eu, 2);  /* 0C06C73C mov.w Rm,@Rn */
	r2 = r4;  /* 0C06C73E mov Rm,Rn */
	r8 = 0xC2B07BCu; UPD(0x0C06C742u, 2);  /* 0C06C740 mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C06C742 mov Rm,Rn */
	r5 = 0xC238070u; UPD(0x0C06C746u, 2);  /* 0C06C744 mov.l @(disp,pc),Rn */
	r9 += r8;  /* 0C06C746 add Rm,Rn */
	r6 = 0xC238030u; UPD(0x0C06C74Au, 2);  /* 0C06C748 mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C06C74A add Rm,Rn */
	r10 = 0xC29CF40u; UPD(0x0C06C74Eu, 2);  /* 0C06C74C mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C06C74E add Rm,Rn */
	r3 = 0xC22E260u; UPD(0x0C06C752u, 2);  /* 0C06C750 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C06C752 add Rm,Rn */
	W16(r7, r11); UPD(0x0C06C756u, 2);  /* 0C06C754 mov.w Rm,@Rn */
	r3 += r0;  /* 0C06C756 add Rm,Rn */
	IF(0x0C06C758u); W16(r0 + r12, r11); UPD(0x0C06C75Au, 2);  /* 0C06C758 mov.w Rm,@(r0,Rn) */
	r2 += 0x1u;  /* 0C06C75A add #imm,Rn */
	r4 = (u32)(s32)(s8)r2;  /* 0C06C75C exts.b Rm,Rn */
	r7 = 0x17u;  /* 0C06C75E mov #imm,Rn */
	W16(r3, r11); UPD(0x0C06C762u, 4);  /* 0C06C760 mov.w Rm,@Rn */
	r0 += 0x2u;  /* 0C06C762 add #imm,Rn */
	W16(r10, r11); UPD(0x0C06C766u, 2);  /* 0C06C764 mov.w Rm,@Rn */
	T = (s32)r4 > (s32)r7;  /* 0C06C766 cmp/gt Rm,Rn */
	W16(r6, r11); UPD(0x0C06C76Au, 2);  /* 0C06C768 mov.w Rm,@Rn */
	W16(r5, r11); UPD(0x0C06C76Cu, 1);  /* 0C06C76A mov.w Rm,@Rn */
	{ u32 c_ = !T; W16(r9, r11); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C06C71Cu, 3); goto L_0C06C71C; } UPD(0x0C06C770u, 1); goto L_0C06C770; }  /* 0C06C76C bf/s */
L_0C06C770: BLKS(0x0C06C770u);
	r5 = r8;  /* 0C06C770 mov Rm,Rn */
	r5 += 0x28u;  /* 0C06C772 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C06C776u, 3);  /* 0C06C774 mov.w @Rm,Rn */
	r7 = 0x0u;  /* 0C06C776 mov #imm,Rn */
	r10 = 0xC3C86EEu; UPD(0x0C06C77Au, 2);  /* 0C06C778 mov.l @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C06C77A add #imm,Rn */
	W16(r10, r7); UPD(0x0C06C77Eu, 2);  /* 0C06C77C mov.w Rm,@Rn */
	r9 = 0xC2B1A4Cu; UPD(0x0C06C780u, 1);  /* 0C06C77E mov.l @(disp,pc),Rn */
	W16(r5, r6); UPD(0x0C06C782u, 1);  /* 0C06C780 mov.w Rm,@Rn */
	W16(r9, r7); UPD(0x0C06C784u, 1);  /* 0C06C782 mov.w Rm,@Rn */
	r3 = 0xC28F604u; UPD(0x0C06C786u, 1);  /* 0C06C784 mov.l @(disp,pc),Rn */
	r8 = 0xC28EC80u; UPD(0x0C06C788u, 1);  /* 0C06C786 mov.l @(disp,pc),Rn */
	r10 = 0xC06DFB0u; UPD(0x0C06C78Au, 1);  /* 0C06C788 mov.l @(disp,pc),Rn */
	r6 = 0x200u; UPD(0x0C06C78Cu, 1);  /* 0C06C78A mov.w @(disp,pc),Rn */
	r4 = 0xC2B038Eu; UPD(0x0C06C78Eu, 1);  /* 0C06C78C mov.l @(disp,pc),Rn */
	r0 = 0xC2B03A4u; UPD(0x0C06C790u, 1);  /* 0C06C78E mov.l @(disp,pc),Rn */
	r2 = 0xC22E25Cu; UPD(0x0C06C792u, 1);  /* 0C06C790 mov.l @(disp,pc),Rn */
	r5 = 0xC2860FEu; UPD(0x0C06C794u, 1);  /* 0C06C792 mov.l @(disp,pc),Rn */
	W16(r8, r7); UPD(0x0C06C796u, 1);  /* 0C06C794 mov.w Rm,@Rn */
	W16(r3, r7); UPD(0x0C06C798u, 1);  /* 0C06C796 mov.w Rm,@Rn */
	r9 = 0xC29D194u; UPD(0x0C06C79Au, 1);  /* 0C06C798 mov.l @(disp,pc),Rn */
	W16(r4, r6); UPD(0x0C06C79Cu, 1);  /* 0C06C79A mov.w Rm,@Rn */
	W16(r0, r6); UPD(0x0C06C79Eu, 1);  /* 0C06C79C mov.w Rm,@Rn */
	W16(r2, r6); UPD(0x0C06C7A0u, 1);  /* 0C06C79E mov.w Rm,@Rn */
	IF(0x0C06C7A0u); { u32 t_ = r10; PR = 0x0C06C7A4u; W16(r5, r6); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06DFB0, 0x0C06DFB0u, 0x0C06C7A4u); }  /* 0C06C7A0 jsr @Rn */
L_0C06C7A4: BLKS(0x0C06C7A4u);
	T = (r0 & r0) == 0;  /* 0C06C7A4 tst Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r9); UPD(0x0C06C7A8u, 2);  /* 0C06C7A6 mov.b @Rm,Rn */
	IF(0x0C06C7A8u); r0 = T;  /* 0C06C7A8 movt Rn */
	r3 = 0xC3C8474u; UPD(0x0C06C7ACu, 2);  /* 0C06C7AA mov.l @(disp,pc),Rn */
	T = (r8 & r8) == 0;  /* 0C06C7AC tst Rm,Rn */
	r10 = R32(r3); UPD(0x0C06C7B0u, 2);  /* 0C06C7AE mov.l @Rm,Rn */
	IF(0x0C06C7B0u); r7 = T;  /* 0C06C7B0 movt Rn */
	T = (r10 & r10) == 0;  /* 0C06C7B2 tst Rm,Rn */
	IF(0x0C06C7B4u); r4 = T;  /* 0C06C7B4 movt Rn */
	r0 &= r7;  /* 0C06C7B6 and Rm,Rn */
	r0 &= r4;  /* 0C06C7B8 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06C7BA tst Rm,Rn */
	if (T) { UPD(0x0C06C7C2u, 9); goto L_0C06C7C2; }  /* 0C06C7BC bt */
L_0C06C7BE: BLKS(0x0C06C7BEu);
	{ IF(0x0C06C7C0u); ; /* slot nop */ UPD(0x0C06CD50u, 3); goto L_0C06CD50; }  /* 0C06C7BE bra */
L_0C06C7C2: BLKS(0x0C06C7C2u);
	r8 = 0xC0C1B00u; UPD(0x0C06C7C4u, 1);  /* 0C06C7C2 mov.l @(disp,pc),Rn */
	r10 = 0xC078BF0u; UPD(0x0C06C7C6u, 1);  /* 0C06C7C4 mov.l @(disp,pc),Rn */
	IF(0x0C06C7C6u); { u32 t_ = r8; PR = 0x0C06C7CAu; IF(0x0C06C7C8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1B00, 0x0C0C1B00u, 0x0C06C7CAu); }  /* 0C06C7C6 jsr @Rn */
L_0C06C7CA: BLKS(0x0C06C7CAu);
	r0 = 0xC076FA0u; UPD(0x0C06C7CCu, 1);  /* 0C06C7CA mov.l @(disp,pc),Rn */
	r9 = 0xC07B750u; UPD(0x0C06C7CEu, 1);  /* 0C06C7CC mov.l @(disp,pc),Rn */
	IF(0x0C06C7CEu); { u32 t_ = r0; PR = 0x0C06C7D2u; IF(0x0C06C7D0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C076FA0, 0x0C076FA0u, 0x0C06C7D2u); }  /* 0C06C7CE jsr @Rn */
L_0C06C7D2: BLKS(0x0C06C7D2u);
	IF(0x0C06C7D2u); { u32 t_ = r10; PR = 0x0C06C7D6u; IF(0x0C06C7D4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C078BF0, 0x0C078BF0u, 0x0C06C7D6u); }  /* 0C06C7D2 jsr @Rn */
L_0C06C7D6: BLKS(0x0C06C7D6u);
	r8 = 0xC07DB40u; UPD(0x0C06C7D8u, 1);  /* 0C06C7D6 mov.l @(disp,pc),Rn */
	IF(0x0C06C7D8u); { u32 t_ = r9; PR = 0x0C06C7DCu; IF(0x0C06C7DAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C07B750, 0x0C07B750u, 0x0C06C7DCu); }  /* 0C06C7D8 jsr @Rn */
L_0C06C7DC: BLKS(0x0C06C7DCu);
	r10 = 0xC07DC10u; UPD(0x0C06C7DEu, 1);  /* 0C06C7DC mov.l @(disp,pc),Rn */
	IF(0x0C06C7DEu); { u32 t_ = r8; PR = 0x0C06C7E2u; IF(0x0C06C7E0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C07DB40, 0x0C07DB40u, 0x0C06C7E2u); }  /* 0C06C7DE jsr @Rn */
L_0C06C7E2: BLKS(0x0C06C7E2u);
	r9 = 0xC0AEAB0u; UPD(0x0C06C7E4u, 1);  /* 0C06C7E2 mov.l @(disp,pc),Rn */
	IF(0x0C06C7E4u); { u32 t_ = r10; PR = 0x0C06C7E8u; IF(0x0C06C7E6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C07DC10, 0x0C07DC10u, 0x0C06C7E8u); }  /* 0C06C7E4 jsr @Rn */
L_0C06C7E8: BLKS(0x0C06C7E8u);
	r8 = 0xC0BF6C0u; UPD(0x0C06C7EAu, 1);  /* 0C06C7E8 mov.l @(disp,pc),Rn */
	IF(0x0C06C7EAu); { u32 t_ = r9; PR = 0x0C06C7EEu; IF(0x0C06C7ECu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0AEAB0, 0x0C0AEAB0u, 0x0C06C7EEu); }  /* 0C06C7EA jsr @Rn */
L_0C06C7EE: BLKS(0x0C06C7EEu);
	r10 = 0xC0BF720u; UPD(0x0C06C7F0u, 1);  /* 0C06C7EE mov.l @(disp,pc),Rn */
	IF(0x0C06C7F0u); { u32 t_ = r8; PR = 0x0C06C7F4u; IF(0x0C06C7F2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BF6C0, 0x0C0BF6C0u, 0x0C06C7F4u); }  /* 0C06C7F0 jsr @Rn */
L_0C06C7F4: BLKS(0x0C06C7F4u);
	r9 = 0xC061F70u; UPD(0x0C06C7F6u, 1);  /* 0C06C7F4 mov.l @(disp,pc),Rn */
	IF(0x0C06C7F6u); { u32 t_ = r10; PR = 0x0C06C7FAu; IF(0x0C06C7F8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BF720, 0x0C0BF720u, 0x0C06C7FAu); }  /* 0C06C7F6 jsr @Rn */
L_0C06C7FA: BLKS(0x0C06C7FAu);
	r8 = 0xC061200u; UPD(0x0C06C7FCu, 1);  /* 0C06C7FA mov.l @(disp,pc),Rn */
	IF(0x0C06C7FCu); { u32 t_ = r9; PR = 0x0C06C800u; r10 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C061F70, 0x0C061F70u, 0x0C06C800u); }  /* 0C06C7FC jsr @Rn */
L_0C06C800: BLKS(0x0C06C800u);
	r2 = 0xC2B1A38u; UPD(0x0C06C802u, 1);  /* 0C06C800 mov.l @(disp,pc),Rn */
	IF(0x0C06C802u); { u32 t_ = r8; PR = 0x0C06C806u; W32(r2, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C061200, 0x0C061200u, 0x0C06C806u); }  /* 0C06C802 jsr @Rn */
L_0C06C806: BLKS(0x0C06C806u);
	r8 = r10;  /* 0C06C806 mov Rm,Rn */
	r8 += r8;  /* 0C06C808 add Rm,Rn */
	UPD(0x0C06C80Au, 2);
L_0C06C80A: BLKS(0x0C06C80Au);
	r3 = 0xC2B07BCu; UPD(0x0C06C80Cu, 1);  /* 0C06C80A mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06C80C mov Rm,Rn */
	IF(0x0C06C80Eu); r4 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C06C810u, 2);  /* 0C06C80E mov.w @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C06C810 tst Rm,Rn */
	if (T) { UPD(0x0C06C818u, 4); goto L_0C06C818; }  /* 0C06C812 bt */
L_0C06C814: BLKS(0x0C06C814u);
	{ IF(0x0C06C816u); ; /* slot nop */ UPD(0x0C06CD40u, 3); goto L_0C06CD40; }  /* 0C06C814 bra */
L_0C06C818: BLKS(0x0C06C818u);
	r5 = 0xC28F616u; UPD(0x0C06C81Au, 1);  /* 0C06C818 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06C81A mov Rm,Rn */
	IF(0x0C06C81Cu); r7 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C06C81Eu, 2);  /* 0C06C81C mov.w @(r0,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C06C81E tst Rm,Rn */
	if (T) { UPD(0x0C06C826u, 4); goto L_0C06C826; }  /* 0C06C820 bt */
L_0C06C822: BLKS(0x0C06C822u);
	{ IF(0x0C06C824u); ; /* slot nop */ UPD(0x0C06CD30u, 3); goto L_0C06CD30; }  /* 0C06C822 bra */
L_0C06C826: BLKS(0x0C06C826u);
	r2 = 0xC22E260u; UPD(0x0C06C828u, 1);  /* 0C06C826 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06C828 mov Rm,Rn */
	IF(0x0C06C82Au); r6 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06C82Cu, 2);  /* 0C06C82A mov.w @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C06C82C tst Rm,Rn */
	if (T) { UPD(0x0C06C834u, 4); goto L_0C06C834; }  /* 0C06C82E bt */
L_0C06C830: BLKS(0x0C06C830u);
	{ IF(0x0C06C832u); ; /* slot nop */ UPD(0x0C06CD20u, 3); goto L_0C06CD20; }  /* 0C06C830 bra */
L_0C06C834: BLKS(0x0C06C834u);
	r3 = 0xC29CF40u; UPD(0x0C06C836u, 1);  /* 0C06C834 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06C836 mov Rm,Rn */
	IF(0x0C06C838u); r4 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C06C83Au, 2);  /* 0C06C838 mov.w @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C06C83A tst Rm,Rn */
	if (T) { UPD(0x0C06C842u, 4); goto L_0C06C842; }  /* 0C06C83C bt */
L_0C06C83E: BLKS(0x0C06C83Eu);
	{ IF(0x0C06C840u); ; /* slot nop */ UPD(0x0C06CD10u, 3); goto L_0C06CD10; }  /* 0C06C83E bra */
L_0C06C842: BLKS(0x0C06C842u);
	r5 = 0xC238030u; UPD(0x0C06C844u, 1);  /* 0C06C842 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06C844 mov Rm,Rn */
	IF(0x0C06C846u); r7 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C06C848u, 2);  /* 0C06C846 mov.w @(r0,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C06C848 tst Rm,Rn */
	if (T) { UPD(0x0C06C850u, 4); goto L_0C06C850; }  /* 0C06C84A bt */
L_0C06C84C: BLKS(0x0C06C84Cu);
	{ IF(0x0C06C84Eu); ; /* slot nop */ UPD(0x0C06CD00u, 3); goto L_0C06CD00; }  /* 0C06C84C bra */
L_0C06C850: BLKS(0x0C06C850u);
	r2 = 0xC238070u; UPD(0x0C06C852u, 1);  /* 0C06C850 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06C852 mov Rm,Rn */
	IF(0x0C06C854u); r6 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06C856u, 2);  /* 0C06C854 mov.w @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C06C856 tst Rm,Rn */
	if (T) { UPD(0x0C06C85Eu, 4); goto L_0C06C85E; }  /* 0C06C858 bt */
L_0C06C85A: BLKS(0x0C06C85Au);
	{ IF(0x0C06C85Cu); ; /* slot nop */ UPD(0x0C06CCF0u, 3); goto L_0C06CCF0; }  /* 0C06C85A bra */
L_0C06C85E: BLKS(0x0C06C85Eu);
	r3 = 0xC2975F8u; UPD(0x0C06C860u, 1);  /* 0C06C85E mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06C860 mov Rm,Rn */
	IF(0x0C06C862u); r4 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C06C864u, 2);  /* 0C06C862 mov.w @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C06C864 tst Rm,Rn */
	if (T) { UPD(0x0C06C86Cu, 4); goto L_0C06C86C; }  /* 0C06C866 bt */
L_0C06C868: BLKS(0x0C06C868u);
	{ IF(0x0C06C86Au); ; /* slot nop */ UPD(0x0C06CC20u, 3); goto L_0C06CC20; }  /* 0C06C868 bra */
L_0C06C86C: BLKS(0x0C06C86Cu);
	r5 = 0xC2860B2u; UPD(0x0C06C86Eu, 1);  /* 0C06C86C mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06C86E mov Rm,Rn */
	IF(0x0C06C870u); r7 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C06C872u, 2);  /* 0C06C870 mov.w @(r0,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C06C872 tst Rm,Rn */
	if (T) { UPD(0x0C06C87Au, 4); goto L_0C06C87A; }  /* 0C06C874 bt */
L_0C06C876: BLKS(0x0C06C876u);
	{ IF(0x0C06C878u); ; /* slot nop */ UPD(0x0C06CC10u, 3); goto L_0C06CC10; }  /* 0C06C876 bra */
L_0C06C87A: BLKS(0x0C06C87Au);
	r2 = 0xC29D196u; UPD(0x0C06C87Cu, 1);  /* 0C06C87A mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06C87C mov Rm,Rn */
	IF(0x0C06C87Eu); r6 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06C880u, 2);  /* 0C06C87E mov.w @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C06C880 tst Rm,Rn */
	if (T) { UPD(0x0C06C888u, 4); goto L_0C06C888; }  /* 0C06C882 bt */
L_0C06C884: BLKS(0x0C06C884u);
	{ IF(0x0C06C886u); ; /* slot nop */ UPD(0x0C06CC00u, 3); goto L_0C06CC00; }  /* 0C06C884 bra */
L_0C06C888: BLKS(0x0C06C888u);
	r3 = 0xC3C3FD0u; UPD(0x0C06C88Au, 1);  /* 0C06C888 mov.l @(disp,pc),Rn */
	{ r0 = r8; /* slot mov Rm,Rn */ UPD(0x0C06C9B0u, 3); goto L_0C06C9B0; }  /* 0C06C88A bra */
L_0C06C9B0: BLKS(0x0C06C9B0u);
	IF(0x0C06C9B0u); r4 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C06C9B2u, 1);  /* 0C06C9B0 mov.w @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C06C9B2 tst Rm,Rn */
	if (T) { UPD(0x0C06C9BAu, 4); goto L_0C06C9BA; }  /* 0C06C9B4 bt */
L_0C06C9B6: BLKS(0x0C06C9B6u);
	{ IF(0x0C06C9B8u); ; /* slot nop */ UPD(0x0C06CBF0u, 3); goto L_0C06CBF0; }  /* 0C06C9B6 bra */
L_0C06C9BA: BLKS(0x0C06C9BAu);
	r9 = 0xC3C53EAu; UPD(0x0C06C9BCu, 1);  /* 0C06C9BA mov.l @(disp,pc),Rn */
	r9 += r8;  /* 0C06C9BC add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C06C9C0u, 2);  /* 0C06C9BE mov.w @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06C9C0 tst Rm,Rn */
	if (T) { UPD(0x0C06C9C8u, 4); goto L_0C06C9C8; }  /* 0C06C9C2 bt */
L_0C06C9C4: BLKS(0x0C06C9C4u);
	{ IF(0x0C06C9C6u); ; /* slot nop */ UPD(0x0C06CBE0u, 3); goto L_0C06CBE0; }  /* 0C06C9C4 bra */
L_0C06C9C8: BLKS(0x0C06C9C8u);
	r7 = 0xC28EDBCu; UPD(0x0C06C9CAu, 1);  /* 0C06C9C8 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06C9CA mov Rm,Rn */
	IF(0x0C06C9CCu); r8 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C06C9CEu, 2);  /* 0C06C9CC mov.w @(r0,Rm),Rn */
	T = (r8 & r8) == 0;  /* 0C06C9CE tst Rm,Rn */
	if (T) { UPD(0x0C06C9D6u, 4); goto L_0C06C9D6; }  /* 0C06C9D0 bt */
L_0C06C9D2: BLKS(0x0C06C9D2u);
	{ IF(0x0C06C9D4u); ; /* slot nop */ UPD(0x0C06CBD0u, 3); goto L_0C06CBD0; }  /* 0C06C9D2 bra */
L_0C06C9D6: BLKS(0x0C06C9D6u);
	r0 = r10;  /* 0C06C9D6 mov Rm,Rn */
	UPD(0x0C06C9D8u, 1);
L_0C06C9D8: BLKS(0x0C06C9D8u);
	T = r0 == 0x14u;  /* 0C06C9D8 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C06C9E0u, 4); goto L_0C06C9E0; }  /* 0C06C9DA bf */
L_0C06C9DC: BLKS(0x0C06C9DCu);
	{ IF(0x0C06C9DEu); ; /* slot nop */ UPD(0x0C06CBC0u, 3); goto L_0C06CBC0; }  /* 0C06C9DC bra */
L_0C06C9E0: BLKS(0x0C06C9E0u);
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C06C9E2u, 1);  /* 0C06C9E0 mov.w @Rm,Rn */
L_0C06C9E2: BLKS(0x0C06C9E2u);
	T = (r6 & r6) == 0;  /* 0C06C9E2 tst Rm,Rn */
	if (T) { UPD(0x0C06C9EAu, 4); goto L_0C06C9EA; }  /* 0C06C9E4 bt */
L_0C06C9E6: BLKS(0x0C06C9E6u);
	{ IF(0x0C06C9E8u); ; /* slot nop */ UPD(0x0C06CBB0u, 3); goto L_0C06CBB0; }  /* 0C06C9E6 bra */
L_0C06C9EA: BLKS(0x0C06C9EAu);
	r0 = r10;  /* 0C06C9EA mov Rm,Rn */
	UPD(0x0C06C9ECu, 1);
L_0C06C9EC: BLKS(0x0C06C9ECu);
	T = r0 == 0x14u;  /* 0C06C9EC cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C06C9F4u, 4); goto L_0C06C9F4; }  /* 0C06C9EE bf */
L_0C06C9F0: BLKS(0x0C06C9F0u);
	{ IF(0x0C06C9F2u); ; /* slot nop */ UPD(0x0C06CB90u, 3); goto L_0C06CB90; }  /* 0C06C9F0 bra */
L_0C06C9F4: BLKS(0x0C06C9F4u);
	r0 = r10;  /* 0C06C9F4 mov Rm,Rn */
	UPD(0x0C06C9F6u, 1);
L_0C06C9F6: BLKS(0x0C06C9F6u);
	r0 += 0x1u;  /* 0C06C9F6 add #imm,Rn */
	r10 = (u32)(s32)(s8)r0;  /* 0C06C9F8 exts.b Rm,Rn */
	r3 = 0x17u;  /* 0C06C9FA mov #imm,Rn */
	T = (s32)r10 > (s32)r3;  /* 0C06C9FC cmp/gt Rm,Rn */
	{ u32 c_ = T; r8 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06CA06u, 7); goto L_0C06CA06; } goto L_0C06CA02; }  /* 0C06C9FE bt/s */
L_0C06CA02: BLKS(0x0C06CA02u);
	{ r8 += r8; /* slot add Rm,Rn */ UPD(0x0C06C80Au, 4); goto L_0C06C80A; }  /* 0C06CA02 bra */
L_0C06CA06: BLKS(0x0C06CA06u);
	r9 = 0xC061F70u; UPD(0x0C06CA08u, 1);  /* 0C06CA06 mov.l @(disp,pc),Rn */
	r8 = 0xC2B0168u; UPD(0x0C06CA0Au, 1);  /* 0C06CA08 mov.l @(disp,pc),Rn */
	IF(0x0C06CA0Au); { u32 t_ = r9; PR = 0x0C06CA0Eu; IF(0x0C06CA0Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061F70, 0x0C061F70u, 0x0C06CA0Eu); }  /* 0C06CA0A jsr @Rn */
L_0C06CA0E: BLKS(0x0C06CA0Eu);
	r7 = 0xC0709B0u; UPD(0x0C06CA10u, 1);  /* 0C06CA0E mov.l @(disp,pc),Rn */
	IF(0x0C06CA10u); { u32 t_ = r7; PR = 0x0C06CA14u; W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0709B0, 0x0C0709B0u, 0x0C06CA14u); }  /* 0C06CA10 jsr @Rn */
L_0C06CA14: BLKS(0x0C06CA14u);
	r0 = 0xC0703C0u; UPD(0x0C06CA16u, 1);  /* 0C06CA14 mov.l @(disp,pc),Rn */
	r10 = 0xC061010u; UPD(0x0C06CA18u, 1);  /* 0C06CA16 mov.l @(disp,pc),Rn */
	IF(0x0C06CA18u); { u32 t_ = r0; PR = 0x0C06CA1Cu; IF(0x0C06CA1Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0703C0, 0x0C0703C0u, 0x0C06CA1Cu); }  /* 0C06CA18 jsr @Rn */
L_0C06CA1C: BLKS(0x0C06CA1Cu);
	r3 = 0xC070DC0u; UPD(0x0C06CA1Eu, 1);  /* 0C06CA1C mov.l @(disp,pc),Rn */
	r8 = 0xC062250u; UPD(0x0C06CA20u, 1);  /* 0C06CA1E mov.l @(disp,pc),Rn */
	IF(0x0C06CA20u); { u32 t_ = r3; PR = 0x0C06CA24u; IF(0x0C06CA22u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C070DC0, 0x0C070DC0u, 0x0C06CA24u); }  /* 0C06CA20 jsr @Rn */
L_0C06CA24: BLKS(0x0C06CA24u);
	r4 = 0xC06D950u; UPD(0x0C06CA26u, 1);  /* 0C06CA24 mov.l @(disp,pc),Rn */
	IF(0x0C06CA26u); { u32 t_ = r4; PR = 0x0C06CA2Au; IF(0x0C06CA28u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D950, 0x0C06D950u, 0x0C06CA2Au); }  /* 0C06CA26 jsr @Rn */
L_0C06CA2A: BLKS(0x0C06CA2Au);
	IF(0x0C06CA2Au); { u32 t_ = r9; PR = 0x0C06CA2Eu; IF(0x0C06CA2Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061F70, 0x0C061F70u, 0x0C06CA2Eu); }  /* 0C06CA2A jsr @Rn */
L_0C06CA2E: BLKS(0x0C06CA2Eu);
	r6 = 0xC06D830u; UPD(0x0C06CA30u, 1);  /* 0C06CA2E mov.l @(disp,pc),Rn */
	r2 = 0xC239478u; UPD(0x0C06CA32u, 1);  /* 0C06CA30 mov.l @(disp,pc),Rn */
	IF(0x0C06CA32u); { u32 t_ = r6; PR = 0x0C06CA36u; W32(r2, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06D830, 0x0C06D830u, 0x0C06CA36u); }  /* 0C06CA32 jsr @Rn */
L_0C06CA36: BLKS(0x0C06CA36u);
	r4 = 0x7u;  /* 0C06CA36 mov #imm,Rn */
	IF(0x0C06CA38u); { u32 t_ = r10; PR = 0x0C06CA3Cu; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C061010, 0x0C061010u, 0x0C06CA3Cu); }  /* 0C06CA38 jsr @Rn */
L_0C06CA3C: BLKS(0x0C06CA3Cu);
	IF(0x0C06CA3Cu); { u32 t_ = r9; PR = 0x0C06CA40u; IF(0x0C06CA3Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061F70, 0x0C061F70u, 0x0C06CA40u); }  /* 0C06CA3C jsr @Rn */
L_0C06CA40: BLKS(0x0C06CA40u);
	r5 = 0xC238024u; UPD(0x0C06CA42u, 1);  /* 0C06CA40 mov.l @(disp,pc),Rn */
	IF(0x0C06CA42u); { u32 t_ = r8; PR = 0x0C06CA46u; W32(r5, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062250, 0x0C062250u, 0x0C06CA46u); }  /* 0C06CA42 jsr @Rn */
L_0C06CA46: BLKS(0x0C06CA46u);
	IF(0x0C06CA46u); { u32 t_ = r9; PR = 0x0C06CA4Au; IF(0x0C06CA48u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061F70, 0x0C061F70u, 0x0C06CA4Au); }  /* 0C06CA46 jsr @Rn */
L_0C06CA4A: BLKS(0x0C06CA4Au);
	r7 = 0xC22E004u; UPD(0x0C06CA4Cu, 1);  /* 0C06CA4A mov.l @(disp,pc),Rn */
	r2 = 0xC29D454u; UPD(0x0C06CA4Eu, 1);  /* 0C06CA4C mov.l @(disp,pc),Rn */
	W32(r7, r0); UPD(0x0C06CA50u, 1);  /* 0C06CA4E mov.l Rm,@Rn */
	r3 = 0x3B9AC9FFu; UPD(0x0C06CA52u, 1);  /* 0C06CA50 mov.l @(disp,pc),Rn */
	r10 = R32(r2 + 0x14u); UPD(0x0C06CA54u, 1);  /* 0C06CA52 mov.l @(disp,Rm),Rn */
	T = r10 > r3;  /* 0C06CA54 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C06CA5Au, 4); goto L_0C06CA5A; }  /* 0C06CA56 bf */
L_0C06CA58: BLKS(0x0C06CA58u);
	W32(r2 + 0x14u, r3); UPD(0x0C06CA5Au, 1);  /* 0C06CA58 mov.l Rm,@(disp,Rn) */
L_0C06CA5A: BLKS(0x0C06CA5Au);
	r2 = 0x4FCu; UPD(0x0C06CA5Cu, 1);  /* 0C06CA5A mov.w @(disp,pc),Rn */
	r5 = 0xC29D1D8u; UPD(0x0C06CA5Eu, 1);  /* 0C06CA5C mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C06CA5E add Rm,Rn */
	r9 = R32(r2 + 0x34u); UPD(0x0C06CA62u, 2);  /* 0C06CA60 mov.l @(disp,Rm),Rn */
	T = r9 > r3;  /* 0C06CA62 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C06CA68u, 4); goto L_0C06CA68; }  /* 0C06CA64 bf */
L_0C06CA66: BLKS(0x0C06CA66u);
	W32(r2 + 0x34u, r3); UPD(0x0C06CA68u, 1);  /* 0C06CA66 mov.l Rm,@(disp,Rn) */
L_0C06CA68: BLKS(0x0C06CA68u);
	r6 = 0xC22E015u; UPD(0x0C06CA6Au, 1);  /* 0C06CA68 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s8)R8(r6); UPD(0x0C06CA6Cu, 1);  /* 0C06CA6A mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C06CA6C tst Rm,Rn */
	if (T) { UPD(0x0C06CAE0u, 4); goto L_0C06CAE0; }  /* 0C06CA6E bt */
L_0C06CA70: BLKS(0x0C06CA70u);
	r2 = 0xC2380B0u; UPD(0x0C06CA72u, 1);  /* 0C06CA70 mov.l @(disp,pc),Rn */
	r4 = 0x708u; UPD(0x0C06CA74u, 1);  /* 0C06CA72 mov.w @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C06CA76u, 1);  /* 0C06CA74 mov.l @Rm,Rn */
	T = r3 == r4;  /* 0C06CA76 cmp/eq Rm,Rn */
	{ u32 c_ = T; r7 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06CB38u, 4); goto L_0C06CB38; } goto L_0C06CA7C; }  /* 0C06CA78 bt/s */
L_0C06CA7C: BLKS(0x0C06CA7Cu);
	r8 = 0xC3C8690u; UPD(0x0C06CA7Eu, 2);  /* 0C06CA7C mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C06CA80u, 1);  /* 0C06CA7E mov.b @Rm,Rn */
	r5 = 0xC2860B0u; UPD(0x0C06CA82u, 1);  /* 0C06CA80 mov.l @(disp,pc),Rn */
	r6 = r1 & 0xFF;  /* 0C06CA82 extu.b Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r5); UPD(0x0C06CA86u, 2);  /* 0C06CA84 mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C06CA86 tst Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C06CA88 negc Rm,Rn */
	r3 = r10 & 0xFF;  /* 0C06CA8A extu.b Rm,Rn */
	T = r3 >= r6;  /* 0C06CA8C cmp/hs Rm,Rn */
	IF(0x0C06CA8Eu); r4 = T;  /* 0C06CA8E movt Rn */
	T = (r6 & r6) == 0;  /* 0C06CA90 tst Rm,Rn */
	IF(0x0C06CA92u); r0 = T;  /* 0C06CA92 movt Rn */
	r9 &= r4;  /* 0C06CA94 and Rm,Rn */
	r10 = 0xC237C12u; UPD(0x0C06CA98u, 9);  /* 0C06CA96 mov.l @(disp,pc),Rn */
	r9 |= r0;  /* 0C06CA98 or Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C06CA9Cu, 2);  /* 0C06CA9A mov.w @Rm,Rn */
	r6 = 0xFFFFFFF8u;  /* 0C06CA9C mov #imm,Rn */
	IF(0x0C06CA9Eu); ARG0(0x406Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C06CA9E shad Rm,Rn */
	r0 &= 0x1u;  /* 0C06CAA0 and #imm,r0 */
	r9 &= r0;  /* 0C06CAA2 and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C06CAA4 tst Rm,Rn */
	{ u32 c_ = T; r2 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06CB80u, 8); goto L_0C06CB80; } goto L_0C06CAAA; }  /* 0C06CAA6 bt/s */
L_0C06CAAA: BLKS(0x0C06CAAAu);
	r4 = 0xC234BA9u; UPD(0x0C06CAACu, 2);  /* 0C06CAAA mov.l @(disp,pc),Rn */
	W8(r4, r2); UPD(0x0C06CAAEu, 1);  /* 0C06CAAC mov.b Rm,@Rn */
	r0 = R32(r14); UPD(0x0C06CAB0u, 1);  /* 0C06CAAE mov.l @Rm,Rn */
L_0C06CAB0: BLKS(0x0C06CAB0u);
	IF(0x0C06CAB0u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06CAB2u, 1);  /* 0C06CAB0 mov.b @(r0,Rm),Rn */
	IF(0x0C06CAB2u); r10 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C06CAB4u, 1);  /* 0C06CAB2 mov.b @(r0,Rm),Rn */
	r9 = r1 & 0xFF;  /* 0C06CAB4 extu.b Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C06CAB6 tst Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r8 = r_; }  /* 0C06CAB8 negc Rm,Rn */
	r3 = r10 & 0xFF;  /* 0C06CABA extu.b Rm,Rn */
	T = r3 >= r9;  /* 0C06CABC cmp/hs Rm,Rn */
	IF(0x0C06CABEu); r0 = T;  /* 0C06CABE movt Rn */
	r7 = 0xC228BF8u; UPD(0x0C06CAC2u, 7);  /* 0C06CAC0 mov.l @(disp,pc),Rn */
	r8 &= r0;  /* 0C06CAC2 and Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r7); UPD(0x0C06CAC6u, 2);  /* 0C06CAC4 mov.w @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C06CAC6 tst Rm,Rn */
	IF(0x0C06CAC8u); ARG0(0x406Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C06CAC8 shad Rm,Rn */
	IF(0x0C06CACAu); r5 = T;  /* 0C06CACA movt Rn */
	r8 |= r5;  /* 0C06CACC or Rm,Rn */
	r0 &= 0x1u;  /* 0C06CACE and #imm,r0 */
	r8 &= r0;  /* 0C06CAD0 and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C06CAD2 tst Rm,Rn */
	{ u32 c_ = T; r6 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06CADAu, 10); goto L_0C06CADA; } goto L_0C06CAD8; }  /* 0C06CAD4 bt/s */
L_0C06CAD8: BLKS(0x0C06CAD8u);
	W8(r4, r6); UPD(0x0C06CADAu, 2);  /* 0C06CAD8 mov.b Rm,@Rn */
L_0C06CADA: BLKS(0x0C06CADAu);
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C06CADCu, 1);  /* 0C06CADA mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C06CADC tst Rm,Rn */
	if (!T) { UPD(0x0C06CB38u, 4); goto L_0C06CB38; }  /* 0C06CADE bf */
L_0C06CAE0: BLKS(0x0C06CAE0u);
	r5 = 0xC2B03A6u; UPD(0x0C06CAE2u, 1);  /* 0C06CAE0 mov.l @(disp,pc),Rn */
	r7 = 0x1u;  /* 0C06CAE2 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C06CAE6u, 2);  /* 0C06CAE4 mov.w @Rm,Rn */
	r3 = 0x5u;  /* 0C06CAE6 mov #imm,Rn */
	r8 = 0xC238029u; UPD(0x0C06CAEAu, 2);  /* 0C06CAE8 mov.l @(disp,pc),Rn */
	IF(0x0C06CAEAu); ARG0(0x44DCu); { s32 s_ = (s32)r13; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C06CAEA shad Rm,Rn */
	r6 = 0xC239483u; UPD(0x0C06CAEEu, 2);  /* 0C06CAEC mov.l @(disp,pc),Rn */
	r4 ^= r7;  /* 0C06CAEE xor Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C06CAF2u, 2);  /* 0C06CAF0 mov.b @Rm,Rn */
	r4 &= r7;  /* 0C06CAF2 and Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C06CAF6u, 2);  /* 0C06CAF4 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C06CAF6 tst Rm,Rn */
	r7 = 0xC29D194u; UPD(0x0C06CAFAu, 2);  /* 0C06CAF8 mov.l @(disp,pc),Rn */
	r10 = r0 & 0xFF;  /* 0C06CAFA extu.b Rm,Rn */
	IF(0x0C06CAFCu); r5 = T;  /* 0C06CAFC movt Rn */
	T = r3 >= r10;  /* 0C06CAFE cmp/hs Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r7); UPD(0x0C06CB02u, 4);  /* 0C06CB00 mov.b @Rm,Rn */
	IF(0x0C06CB02u); r9 = T;  /* 0C06CB02 movt Rn */
	r2 = 0xC2B1A50u; UPD(0x0C06CB06u, 2);  /* 0C06CB04 mov.l @(disp,pc),Rn */
	T = (r8 & r8) == 0;  /* 0C06CB06 tst Rm,Rn */
	r6 = R32(r2); UPD(0x0C06CB0Au, 2);  /* 0C06CB08 mov.l @Rm,Rn */
	IF(0x0C06CB0Au); r10 = T;  /* 0C06CB0A movt Rn */
	r5 &= r9;  /* 0C06CB0C and Rm,Rn */
	r0 = 0xFFFFFFFFu;  /* 0C06CB0E mov #imm,Rn */
	T = (r6 & r6) == 0;  /* 0C06CB10 tst Rm,Rn */
	r3 = 0xC297638u; UPD(0x0C06CB14u, 5);  /* 0C06CB12 mov.l @(disp,pc),Rn */
	{ u32 t_ = 0u - r0, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C06CB14 negc Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C06CB18u, 2);  /* 0C06CB16 mov.w @Rm,Rn */
	r4 |= r5;  /* 0C06CB18 or Rm,Rn */
	IF(0x0C06CB1Au); ARG0(0x40DCu); { s32 s_ = (s32)r13; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C06CB1A shad Rm,Rn */
	r5 = 0xC238020u; UPD(0x0C06CB1Eu, 3);  /* 0C06CB1C mov.l @(disp,pc),Rn */
	r0 ^= 0x1u;  /* 0C06CB1E xor #imm,r0 */
	r0 &= 0x1u;  /* 0C06CB20 and #imm,r0 */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C06CB24u, 3);  /* 0C06CB22 mov.b @Rm,Rn */
	r9 &= r0;  /* 0C06CB24 and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C06CB26 tst Rm,Rn */
	r9 |= r10;  /* 0C06CB28 or Rm,Rn */
	IF(0x0C06CB2Au); r8 = T;  /* 0C06CB2A movt Rn */
	r4 &= r9;  /* 0C06CB2C and Rm,Rn */
	r4 &= r8;  /* 0C06CB2E and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06CB30 tst Rm,Rn */
	if (T) { UPD(0x0C06CB38u, 10); goto L_0C06CB38; }  /* 0C06CB32 bt */
L_0C06CB34: BLKS(0x0C06CB34u);
	{ IF(0x0C06CB36u); ; /* slot nop */ UPD(0x0C06C700u, 3); goto L_0C06C700; }  /* 0C06CB34 bra */
L_0C06CB38: BLKS(0x0C06CB38u);
	r9 = 0xC0C1C70u; UPD(0x0C06CB3Au, 1);  /* 0C06CB38 mov.l @(disp,pc),Rn */
	r12 = 0xC22E015u; UPD(0x0C06CB3Cu, 1);  /* 0C06CB3A mov.l @(disp,pc),Rn */
	IF(0x0C06CB3Cu); { u32 t_ = r9; PR = 0x0C06CB40u; IF(0x0C06CB3Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1C70, 0x0C0C1C70u, 0x0C06CB40u); }  /* 0C06CB3C jsr @Rn */
L_0C06CB40: BLKS(0x0C06CB40u);
	r4 = 0xC06A2D0u; UPD(0x0C06CB42u, 1);  /* 0C06CB40 mov.l @(disp,pc),Rn */
	r13 = 0xC2ABAA0u; UPD(0x0C06CB44u, 1);  /* 0C06CB42 mov.l @(disp,pc),Rn */
	IF(0x0C06CB44u); { u32 t_ = r4; PR = 0x0C06CB48u; IF(0x0C06CB46u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06A2D0, 0x0C06A2D0u, 0x0C06CB48u); }  /* 0C06CB44 jsr @Rn */
L_0C06CB48: BLKS(0x0C06CB48u);
	r11 = (u32)(s32)(s8)R8(r12); UPD(0x0C06CB4Au, 1);  /* 0C06CB48 mov.b @Rm,Rn */
	r1 = 0x0u;  /* 0C06CB4A mov #imm,Rn */
	r2 = r11 & 0xFF;  /* 0C06CB4C extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C06CB4E tst Rm,Rn */
	{ u32 c_ = !T; W8(r13, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06CB58u, 6); goto L_0C06CB58; } UPD(0x0C06CB54u, 1); goto L_0C06CB54; }  /* 0C06CB50 bf/s */
L_0C06CB54: BLKS(0x0C06CB54u);
	r10 = 0xC234BA9u; UPD(0x0C06CB56u, 1);  /* 0C06CB54 mov.l @(disp,pc),Rn */
	W8(r10, r2); UPD(0x0C06CB58u, 1);  /* 0C06CB56 mov.b Rm,@Rn */
L_0C06CB58: BLKS(0x0C06CB58u);
	r3 = 0xC2B037Bu; UPD(0x0C06CB5Au, 1);  /* 0C06CB58 mov.l @(disp,pc),Rn */
	r0 = 0x20u;  /* 0C06CB5A mov #imm,Rn */
	W8(r3, r0); UPD(0x0C06CB5Eu, 2);  /* 0C06CB5C mov.b Rm,@Rn */
	r14 += 0x4u;  /* 0C06CB5E add #imm,Rn */
	r15 = r14;  /* 0C06CB60 mov Rm,Rn */
	IF(0x0C06CB62u); PR = R32(r15); r15 += 4; UPD(0x0C06CB64u, 3);  /* 0C06CB62 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06CB66u, 1);  /* 0C06CB64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06CB68u, 1);  /* 0C06CB66 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06CB6Au, 1);  /* 0C06CB68 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06CB6Cu, 1);  /* 0C06CB6A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06CB6Eu, 1);  /* 0C06CB6C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06CB70u, 1);  /* 0C06CB6E mov.l @Rm+,Rn */
	IF(0x0C06CB70u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06CB70 rts */
L_0C06CB80: BLKS(0x0C06CB80u);
	r4 = 0xC234BA9u; UPD(0x0C06CB82u, 1);  /* 0C06CB80 mov.l @(disp,pc),Rn */
	{ r0 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C06CAB0u, 3); goto L_0C06CAB0; }  /* 0C06CB82 bra */
L_0C06CB90: BLKS(0x0C06CB90u);
	r9 = 0xC0775D0u; UPD(0x0C06CB92u, 1);  /* 0C06CB90 mov.l @(disp,pc),Rn */
	r8 = 0xC0BBC30u; UPD(0x0C06CB94u, 1);  /* 0C06CB92 mov.l @(disp,pc),Rn */
	IF(0x0C06CB94u); { u32 t_ = r9; PR = 0x0C06CB98u; IF(0x0C06CB96u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0775D0, 0x0C0775D0u, 0x0C06CB98u); }  /* 0C06CB94 jsr @Rn */
L_0C06CB98: BLKS(0x0C06CB98u);
	r4 = 0xC075FD0u; UPD(0x0C06CB9Au, 1);  /* 0C06CB98 mov.l @(disp,pc),Rn */
	IF(0x0C06CB9Au); { u32 t_ = r4; PR = 0x0C06CB9Eu; IF(0x0C06CB9Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C075FD0, 0x0C075FD0u, 0x0C06CB9Eu); }  /* 0C06CB9A jsr @Rn */
L_0C06CB9E: BLKS(0x0C06CB9Eu);
	r2 = 0xC076EF0u; UPD(0x0C06CBA0u, 1);  /* 0C06CB9E mov.l @(disp,pc),Rn */
	IF(0x0C06CBA0u); { u32 t_ = r2; PR = 0x0C06CBA4u; IF(0x0C06CBA2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C076EF0, 0x0C076EF0u, 0x0C06CBA4u); }  /* 0C06CBA0 jsr @Rn */
L_0C06CBA4: BLKS(0x0C06CBA4u);
	IF(0x0C06CBA4u); { u32 t_ = r8; PR = 0x0C06CBA8u; IF(0x0C06CBA6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBC30, 0x0C0BBC30u, 0x0C06CBA8u); }  /* 0C06CBA4 jsr @Rn */
L_0C06CBA8: BLKS(0x0C06CBA8u);
	{ r0 = r10; /* slot mov Rm,Rn */ UPD(0x0C06C9F6u, 3); goto L_0C06C9F6; }  /* 0C06CBA8 bra */
L_0C06CBB0: BLKS(0x0C06CBB0u);
	r9 = 0xC07D9C0u; UPD(0x0C06CBB2u, 1);  /* 0C06CBB0 mov.l @(disp,pc),Rn */
	IF(0x0C06CBB2u); { u32 t_ = r9; PR = 0x0C06CBB6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07D9C0, 0x0C07D9C0u, 0x0C06CBB6u); }  /* 0C06CBB2 jsr @Rn */
L_0C06CBB6: BLKS(0x0C06CBB6u);
	{ r0 = r10; /* slot mov Rm,Rn */ UPD(0x0C06C9ECu, 3); goto L_0C06C9EC; }  /* 0C06CBB6 bra */
L_0C06CBC0: BLKS(0x0C06CBC0u);
	r5 = 0xC06C1E0u; UPD(0x0C06CBC2u, 1);  /* 0C06CBC0 mov.l @(disp,pc),Rn */
	IF(0x0C06CBC2u); { u32 t_ = r5; PR = 0x0C06CBC6u; IF(0x0C06CBC4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06C1E0, 0x0C06C1E0u, 0x0C06CBC6u); }  /* 0C06CBC2 jsr @Rn */
L_0C06CBC6: BLKS(0x0C06CBC6u);
	{ r6 = (u32)(s32)(s16)R16(r9); /* slot mov.w @Rm,Rn */ UPD(0x0C06C9E2u, 3); goto L_0C06C9E2; }  /* 0C06CBC6 bra */
L_0C06CBD0: BLKS(0x0C06CBD0u);
	r8 = 0xC0BF790u; UPD(0x0C06CBD2u, 1);  /* 0C06CBD0 mov.l @(disp,pc),Rn */
	IF(0x0C06CBD2u); { u32 t_ = r8; PR = 0x0C06CBD6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BF790, 0x0C0BF790u, 0x0C06CBD6u); }  /* 0C06CBD2 jsr @Rn */
L_0C06CBD6: BLKS(0x0C06CBD6u);
	{ r0 = r10; /* slot mov Rm,Rn */ UPD(0x0C06C9D8u, 3); goto L_0C06C9D8; }  /* 0C06CBD6 bra */
L_0C06CBE0: BLKS(0x0C06CBE0u);
	r0 = 0xC07D8E0u; UPD(0x0C06CBE2u, 1);  /* 0C06CBE0 mov.l @(disp,pc),Rn */
	IF(0x0C06CBE2u); { u32 t_ = r0; PR = 0x0C06CBE6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07D8E0, 0x0C07D8E0u, 0x0C06CBE6u); }  /* 0C06CBE2 jsr @Rn */
L_0C06CBE6: BLKS(0x0C06CBE6u);
	{ IF(0x0C06CBE8u); ; /* slot nop */ UPD(0x0C06C9C8u, 3); goto L_0C06C9C8; }  /* 0C06CBE6 bra */
L_0C06CBF0: BLKS(0x0C06CBF0u);
	r9 = 0xC07B7C0u; UPD(0x0C06CBF2u, 1);  /* 0C06CBF0 mov.l @(disp,pc),Rn */
	IF(0x0C06CBF2u); { u32 t_ = r9; PR = 0x0C06CBF6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07B7C0, 0x0C07B7C0u, 0x0C06CBF6u); }  /* 0C06CBF2 jsr @Rn */
L_0C06CBF6: BLKS(0x0C06CBF6u);
	{ IF(0x0C06CBF8u); ; /* slot nop */ UPD(0x0C06C9BAu, 3); goto L_0C06C9BA; }  /* 0C06CBF6 bra */
L_0C06CC00: BLKS(0x0C06CC00u);
	r9 = 0xC0AE9E0u; UPD(0x0C06CC02u, 1);  /* 0C06CC00 mov.l @(disp,pc),Rn */
	IF(0x0C06CC02u); { u32 t_ = r9; PR = 0x0C06CC06u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0AE9E0, 0x0C0AE9E0u, 0x0C06CC06u); }  /* 0C06CC02 jsr @Rn */
L_0C06CC06: BLKS(0x0C06CC06u);
	{ IF(0x0C06CC08u); ; /* slot nop */ UPD(0x0C06C888u, 3); goto L_0C06C888; }  /* 0C06CC06 bra */
L_0C06CC10: BLKS(0x0C06CC10u);
	r9 = 0xC07DA90u; UPD(0x0C06CC12u, 1);  /* 0C06CC10 mov.l @(disp,pc),Rn */
	IF(0x0C06CC12u); { u32 t_ = r9; PR = 0x0C06CC16u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DA90, 0x0C07DA90u, 0x0C06CC16u); }  /* 0C06CC12 jsr @Rn */
L_0C06CC16: BLKS(0x0C06CC16u);
	{ IF(0x0C06CC18u); ; /* slot nop */ UPD(0x0C06C87Au, 3); goto L_0C06C87A; }  /* 0C06CC16 bra */
L_0C06CC20: BLKS(0x0C06CC20u);
	r9 = 0xC0BF850u; UPD(0x0C06CC22u, 1);  /* 0C06CC20 mov.l @(disp,pc),Rn */
	IF(0x0C06CC22u); { u32 t_ = r9; PR = 0x0C06CC26u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BF850, 0x0C0BF850u, 0x0C06CC26u); }  /* 0C06CC22 jsr @Rn */
L_0C06CC26: BLKS(0x0C06CC26u);
	{ IF(0x0C06CC28u); ; /* slot nop */ UPD(0x0C06C86Cu, 3); goto L_0C06C86C; }  /* 0C06CC26 bra */
L_0C06CCF0: BLKS(0x0C06CCF0u);
	r0 = 0xC0759A0u; UPD(0x0C06CCF2u, 1);  /* 0C06CCF0 mov.l @(disp,pc),Rn */
	IF(0x0C06CCF2u); { u32 t_ = r0; PR = 0x0C06CCF6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0759A0, 0x0C0759A0u, 0x0C06CCF6u); }  /* 0C06CCF2 jsr @Rn */
L_0C06CCF6: BLKS(0x0C06CCF6u);
	{ IF(0x0C06CCF8u); ; /* slot nop */ UPD(0x0C06C85Eu, 3); goto L_0C06C85E; }  /* 0C06CCF6 bra */
L_0C06CD00: BLKS(0x0C06CD00u);
	r9 = 0xC077700u; UPD(0x0C06CD02u, 1);  /* 0C06CD00 mov.l @(disp,pc),Rn */
	IF(0x0C06CD02u); { u32 t_ = r9; PR = 0x0C06CD06u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C077700, 0x0C077700u, 0x0C06CD06u); }  /* 0C06CD02 jsr @Rn */
L_0C06CD06: BLKS(0x0C06CD06u);
	{ IF(0x0C06CD08u); ; /* slot nop */ UPD(0x0C06C850u, 3); goto L_0C06C850; }  /* 0C06CD06 bra */
L_0C06CD10: BLKS(0x0C06CD10u);
	r9 = 0xC07CA30u; UPD(0x0C06CD12u, 1);  /* 0C06CD10 mov.l @(disp,pc),Rn */
	IF(0x0C06CD12u); { u32 t_ = r9; PR = 0x0C06CD16u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CA30, 0x0C07CA30u, 0x0C06CD16u); }  /* 0C06CD12 jsr @Rn */
L_0C06CD16: BLKS(0x0C06CD16u);
	{ IF(0x0C06CD18u); ; /* slot nop */ UPD(0x0C06C842u, 3); goto L_0C06C842; }  /* 0C06CD16 bra */
L_0C06CD20: BLKS(0x0C06CD20u);
	r9 = 0xC07CB20u; UPD(0x0C06CD22u, 1);  /* 0C06CD20 mov.l @(disp,pc),Rn */
	IF(0x0C06CD22u); { u32 t_ = r9; PR = 0x0C06CD26u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CB20, 0x0C07CB20u, 0x0C06CD26u); }  /* 0C06CD22 jsr @Rn */
L_0C06CD26: BLKS(0x0C06CD26u);
	{ IF(0x0C06CD28u); ; /* slot nop */ UPD(0x0C06C834u, 3); goto L_0C06C834; }  /* 0C06CD26 bra */
L_0C06CD30: BLKS(0x0C06CD30u);
	r9 = 0xC0A8950u; UPD(0x0C06CD32u, 1);  /* 0C06CD30 mov.l @(disp,pc),Rn */
	IF(0x0C06CD32u); { u32 t_ = r9; PR = 0x0C06CD36u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8950, 0x0C0A8950u, 0x0C06CD36u); }  /* 0C06CD32 jsr @Rn */
L_0C06CD36: BLKS(0x0C06CD36u);
	{ IF(0x0C06CD38u); ; /* slot nop */ UPD(0x0C06C826u, 3); goto L_0C06C826; }  /* 0C06CD36 bra */
L_0C06CD40: BLKS(0x0C06CD40u);
	r9 = 0xC0C1B50u; UPD(0x0C06CD42u, 1);  /* 0C06CD40 mov.l @(disp,pc),Rn */
	IF(0x0C06CD42u); { u32 t_ = r9; PR = 0x0C06CD46u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1B50, 0x0C0C1B50u, 0x0C06CD46u); }  /* 0C06CD42 jsr @Rn */
L_0C06CD46: BLKS(0x0C06CD46u);
	{ IF(0x0C06CD48u); ; /* slot nop */ UPD(0x0C06C818u, 3); goto L_0C06C818; }  /* 0C06CD46 bra */
L_0C06CD50: BLKS(0x0C06CD50u);
	r5 = 0xC075DC0u; UPD(0x0C06CD52u, 1);  /* 0C06CD50 mov.l @(disp,pc),Rn */
	r9 = 0xC0774F0u; UPD(0x0C06CD54u, 1);  /* 0C06CD52 mov.l @(disp,pc),Rn */
	IF(0x0C06CD54u); { u32 t_ = r5; PR = 0x0C06CD58u; IF(0x0C06CD56u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C075DC0, 0x0C075DC0u, 0x0C06CD58u); }  /* 0C06CD54 jsr @Rn */
L_0C06CD58: BLKS(0x0C06CD58u);
	r7 = 0xC0739E0u; UPD(0x0C06CD5Au, 1);  /* 0C06CD58 mov.l @(disp,pc),Rn */
	r8 = 0xC07B870u; UPD(0x0C06CD5Cu, 1);  /* 0C06CD5A mov.l @(disp,pc),Rn */
	IF(0x0C06CD5Cu); { u32 t_ = r7; PR = 0x0C06CD60u; IF(0x0C06CD5Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0739E0, 0x0C0739E0u, 0x0C06CD60u); }  /* 0C06CD5C jsr @Rn */
L_0C06CD60: BLKS(0x0C06CD60u);
	IF(0x0C06CD60u); { u32 t_ = r9; PR = 0x0C06CD64u; IF(0x0C06CD62u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0774F0, 0x0C0774F0u, 0x0C06CD64u); }  /* 0C06CD60 jsr @Rn */
L_0C06CD64: BLKS(0x0C06CD64u);
	r10 = 0xC0C0A40u; UPD(0x0C06CD66u, 1);  /* 0C06CD64 mov.l @(disp,pc),Rn */
	IF(0x0C06CD66u); { u32 t_ = r8; PR = 0x0C06CD6Au; IF(0x0C06CD68u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C07B870, 0x0C07B870u, 0x0C06CD6Au); }  /* 0C06CD66 jsr @Rn */
L_0C06CD6A: BLKS(0x0C06CD6Au);
	r9 = 0xC0BBD90u; UPD(0x0C06CD6Cu, 1);  /* 0C06CD6A mov.l @(disp,pc),Rn */
	IF(0x0C06CD6Cu); { u32 t_ = r10; PR = 0x0C06CD70u; IF(0x0C06CD6Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0A40, 0x0C0C0A40u, 0x0C06CD70u); }  /* 0C06CD6C jsr @Rn */
L_0C06CD70: BLKS(0x0C06CD70u);
	r8 = 0xC0AE940u; UPD(0x0C06CD72u, 1);  /* 0C06CD70 mov.l @(disp,pc),Rn */
	IF(0x0C06CD72u); { u32 t_ = r9; PR = 0x0C06CD76u; IF(0x0C06CD74u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBD90, 0x0C0BBD90u, 0x0C06CD76u); }  /* 0C06CD72 jsr @Rn */
L_0C06CD76: BLKS(0x0C06CD76u);
	r10 = 0xC07C060u; UPD(0x0C06CD78u, 1);  /* 0C06CD76 mov.l @(disp,pc),Rn */
	IF(0x0C06CD78u); { u32 t_ = r8; PR = 0x0C06CD7Cu; IF(0x0C06CD7Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0AE940, 0x0C0AE940u, 0x0C06CD7Cu); }  /* 0C06CD78 jsr @Rn */
L_0C06CD7C: BLKS(0x0C06CD7Cu);
	r9 = 0xC0BF5F0u; UPD(0x0C06CD7Eu, 1);  /* 0C06CD7C mov.l @(disp,pc),Rn */
	IF(0x0C06CD7Eu); { u32 t_ = r10; PR = 0x0C06CD82u; IF(0x0C06CD80u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C07C060, 0x0C07C060u, 0x0C06CD82u); }  /* 0C06CD7E jsr @Rn */
L_0C06CD82: BLKS(0x0C06CD82u);
	r8 = 0xC2289E0u; UPD(0x0C06CD84u, 1);  /* 0C06CD82 mov.l @(disp,pc),Rn */
	IF(0x0C06CD84u); { u32 t_ = r9; PR = 0x0C06CD88u; IF(0x0C06CD86u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BF5F0, 0x0C0BF5F0u, 0x0C06CD88u); }  /* 0C06CD84 jsr @Rn */
L_0C06CD88: BLKS(0x0C06CD88u);
	r9 = 0xC061F70u; UPD(0x0C06CD8Au, 1);  /* 0C06CD88 mov.l @(disp,pc),Rn */
	r10 = 0xC06F240u; UPD(0x0C06CD8Cu, 1);  /* 0C06CD8A mov.l @(disp,pc),Rn */
	IF(0x0C06CD8Cu); { u32 t_ = r9; PR = 0x0C06CD90u; IF(0x0C06CD8Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061F70, 0x0C061F70u, 0x0C06CD90u); }  /* 0C06CD8C jsr @Rn */
L_0C06CD90: BLKS(0x0C06CD90u);
	r3 = 0xC06E1D0u; UPD(0x0C06CD92u, 1);  /* 0C06CD90 mov.l @(disp,pc),Rn */
	IF(0x0C06CD92u); { u32 t_ = r3; PR = 0x0C06CD96u; W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06E1D0, 0x0C06E1D0u, 0x0C06CD96u); }  /* 0C06CD92 jsr @Rn */
L_0C06CD96: BLKS(0x0C06CD96u);
	r4 = 0xC06E540u; UPD(0x0C06CD98u, 1);  /* 0C06CD96 mov.l @(disp,pc),Rn */
	r8 = 0xC071CF0u; UPD(0x0C06CD9Au, 1);  /* 0C06CD98 mov.l @(disp,pc),Rn */
	IF(0x0C06CD9Au); { u32 t_ = r4; PR = 0x0C06CD9Eu; IF(0x0C06CD9Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06E540, 0x0C06E540u, 0x0C06CD9Eu); }  /* 0C06CD9A jsr @Rn */
L_0C06CD9E: BLKS(0x0C06CD9Eu);
	r0 = 0xC06E810u; UPD(0x0C06CDA0u, 1);  /* 0C06CD9E mov.l @(disp,pc),Rn */
	IF(0x0C06CDA0u); { u32 t_ = r0; PR = 0x0C06CDA4u; IF(0x0C06CDA2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06E810, 0x0C06E810u, 0x0C06CDA4u); }  /* 0C06CDA0 jsr @Rn */
L_0C06CDA4: BLKS(0x0C06CDA4u);
	r2 = 0xC06EAC0u; UPD(0x0C06CDA6u, 1);  /* 0C06CDA4 mov.l @(disp,pc),Rn */
	IF(0x0C06CDA6u); { u32 t_ = r2; PR = 0x0C06CDAAu; IF(0x0C06CDA8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06EAC0, 0x0C06EAC0u, 0x0C06CDAAu); }  /* 0C06CDA6 jsr @Rn */
L_0C06CDAA: BLKS(0x0C06CDAAu);
	r6 = 0xC06ECD0u; UPD(0x0C06CDACu, 1);  /* 0C06CDAA mov.l @(disp,pc),Rn */
	IF(0x0C06CDACu); { u32 t_ = r6; PR = 0x0C06CDB0u; IF(0x0C06CDAEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06ECD0, 0x0C06ECD0u, 0x0C06CDB0u); }  /* 0C06CDAC jsr @Rn */
L_0C06CDB0: BLKS(0x0C06CDB0u);
	r5 = 0xC06EF50u; UPD(0x0C06CDB2u, 1);  /* 0C06CDB0 mov.l @(disp,pc),Rn */
	IF(0x0C06CDB2u); { u32 t_ = r5; PR = 0x0C06CDB6u; IF(0x0C06CDB4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06EF50, 0x0C06EF50u, 0x0C06CDB6u); }  /* 0C06CDB2 jsr @Rn */
L_0C06CDB6: BLKS(0x0C06CDB6u);
	IF(0x0C06CDB6u); { u32 t_ = r10; PR = 0x0C06CDBAu; IF(0x0C06CDB8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06F240, 0x0C06F240u, 0x0C06CDBAu); }  /* 0C06CDB6 jsr @Rn */
L_0C06CDBA: BLKS(0x0C06CDBAu);
	IF(0x0C06CDBAu); { u32 t_ = r9; PR = 0x0C06CDBEu; IF(0x0C06CDBCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061F70, 0x0C061F70u, 0x0C06CDBEu); }  /* 0C06CDBA jsr @Rn */
L_0C06CDBE: BLKS(0x0C06CDBEu);
	r7 = 0xC2AC164u; UPD(0x0C06CDC0u, 1);  /* 0C06CDBE mov.l @(disp,pc),Rn */
	IF(0x0C06CDC0u); { u32 t_ = r8; PR = 0x0C06CDC4u; W32(r7, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071CF0, 0x0C071CF0u, 0x0C06CDC4u); }  /* 0C06CDC0 jsr @Rn */
L_0C06CDC4: BLKS(0x0C06CDC4u);
	IF(0x0C06CDC4u); { u32 t_ = r9; PR = 0x0C06CDC8u; IF(0x0C06CDC6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061F70, 0x0C061F70u, 0x0C06CDC8u); }  /* 0C06CDC4 jsr @Rn */
L_0C06CDC8: BLKS(0x0C06CDC8u);
	r3 = 0xC3C846Cu; UPD(0x0C06CDCAu, 1);  /* 0C06CDC8 mov.l @(disp,pc),Rn */
	W32(r3, r0); UPD(0x0C06CDCCu, 1);  /* 0C06CDCA mov.l Rm,@Rn */
	r0 = 0xC2380B0u; UPD(0x0C06CDCEu, 1);  /* 0C06CDCC mov.l @(disp,pc),Rn */
	r8 = 0xC2B07FCu; UPD(0x0C06CDD0u, 1);  /* 0C06CDCE mov.l @(disp,pc),Rn */
	r4 = R32(r0); UPD(0x0C06CDD2u, 1);  /* 0C06CDD0 mov.l @Rm,Rn */
	r2 = R32(r8); UPD(0x0C06CDD4u, 1);  /* 0C06CDD2 mov.l @Rm,Rn */
	r4 += 0x1u;  /* 0C06CDD4 add #imm,Rn */
	T = (r2 & r2) == 0;  /* 0C06CDD6 tst Rm,Rn */
	{ u32 c_ = T; W32(r0, r4); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06CDE8u, 5); goto L_0C06CDE8; } UPD(0x0C06CDDCu, 1); goto L_0C06CDDC; }  /* 0C06CDD8 bt/s */
L_0C06CDDC: BLKS(0x0C06CDDCu);
	r10 = 0xC0BC310u; UPD(0x0C06CDDEu, 1);  /* 0C06CDDC mov.l @(disp,pc),Rn */
	IF(0x0C06CDDEu); { u32 t_ = r10; PR = 0x0C06CDE2u; IF(0x0C06CDE0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC310, 0x0C0BC310u, 0x0C06CDE2u); }  /* 0C06CDDE jsr @Rn */
L_0C06CDE2: BLKS(0x0C06CDE2u);
	r6 = R32(r8); UPD(0x0C06CDE4u, 1);  /* 0C06CDE2 mov.l @Rm,Rn */
	r6 += 0xFFFFFFFFu;  /* 0C06CDE4 add #imm,Rn */
	W32(r8, r6); UPD(0x0C06CDE8u, 2);  /* 0C06CDE6 mov.l Rm,@Rn */
L_0C06CDE8: BLKS(0x0C06CDE8u);
	{ IF(0x0C06CDEAu); ; /* slot nop */ UPD(0x0C06C7C2u, 3); goto L_0C06C7C2; }  /* 0C06CDE8 bra */
}

/* FUN_0c06ce70 */
void blk_f_0C06CE70(sh3_t *c)
{
	LOCALS;
L_0C06CE70: BLKS(0x0C06CE70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06CE72u, 1);  /* 0C06CE70 mov.l Rm,@-Rn */
	r3 = 0xC23E0A6u; UPD(0x0C06CE74u, 1);  /* 0C06CE72 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06CE76u, 1);  /* 0C06CE74 mov.l Rm,@-Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C06CE78u, 1);  /* 0C06CE76 mov.b @Rm,Rn */
	r14 = r15;  /* 0C06CE78 mov Rm,Rn */
	r0 = 0x708u; UPD(0x0C06CE7Cu, 2);  /* 0C06CE7A mov.w @(disp,pc),Rn */
	r4 = r2 & 0xFF;  /* 0C06CE7C extu.b Rm,Rn */
	r6 = 0xC22E015u; UPD(0x0C06CE80u, 2);  /* 0C06CE7E mov.l @(disp,pc),Rn */
	IF(0x0C06CE80u); MACL = r4 * r0;  /* 0C06CE80 mul.l Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C06CE84u, 3);  /* 0C06CE82 mov.b @Rm,Rn */
	r8 = 0xC2380B0u; UPD(0x0C06CE86u, 1);  /* 0C06CE84 mov.l @(disp,pc),Rn */
	T = (r5 & r5) == 0;  /* 0C06CE86 tst Rm,Rn */
	r2 = R32(r8); UPD(0x0C06CE8Au, 2);  /* 0C06CE88 mov.l @Rm,Rn */
	r6 = 0xFFFFFFFFu;  /* 0C06CE8A mov #imm,Rn */
	r3 = 0x707u; UPD(0x0C06CE8Eu, 2);  /* 0C06CE8C mov.w @(disp,pc),Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C06CE8E negc Rm,Rn */
	IF(0x0C06CE90u); r0 = MACL;  /* 0C06CE90 sts macl,Rn */
	T = (s32)r3 >= (s32)r2;  /* 0C06CE92 cmp/ge Rm,Rn */
	r0 += r2;  /* 0C06CE94 add Rm,Rn */
	r7 = 0xFFFFF1F0u; UPD(0x0C06CE98u, 5);  /* 0C06CE96 mov.w @(disp,pc),Rn */
	r0 += r0;  /* 0C06CE98 add Rm,Rn */
	IF(0x0C06CE9Au); r3 = T;  /* 0C06CE9A movt Rn */
	T = (r4 & r3) == 0;  /* 0C06CE9C tst Rm,Rn */
	{ u32 c_ = T; r0 += r7; /* slot add Rm,Rn */ if (c_) { UPD(0x0C06CF90u, 6); goto L_0C06CF90; } goto L_0C06CEA2; }  /* 0C06CE9E bt/s */
L_0C06CEA2: BLKS(0x0C06CEA2u);
	r3 = 0xC29D42Eu; UPD(0x0C06CEA4u, 2);  /* 0C06CEA2 mov.l @(disp,pc),Rn */
	r2 = 0xC238029u; UPD(0x0C06CEA6u, 1);  /* 0C06CEA4 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r3); UPD(0x0C06CEA8u, 1);  /* 0C06CEA6 mov.w @Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C06CEAAu, 1);  /* 0C06CEA8 mov.b @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C06CEAA tst Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r8 = r_; }  /* 0C06CEAC negc Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06CEAE tst Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C06CEB0 negc Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C06CEB4u, 5);  /* 0C06CEB2 mov.l @(disp,pc),Rn */
	T = (r8 & r5) == 0;  /* 0C06CEB4 tst Rm,Rn */
	{ u32 c_ = T; r6 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06CF70u, 4); goto L_0C06CF70; } goto L_0C06CEBA; }  /* 0C06CEB6 bt/s */
L_0C06CEBA: BLKS(0x0C06CEBAu);
	r6 = r0;  /* 0C06CEBA mov Rm,Rn */
	r0 = 0xC237C12u; UPD(0x0C06CEBEu, 3);  /* 0C06CEBC mov.l @(disp,pc),Rn */
	r3 = 0x7Fu;  /* 0C06CEBE mov #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C06CEC2u, 2);  /* 0C06CEC0 mov.w @Rm,Rn */
	r6 += r6;  /* 0C06CEC2 add Rm,Rn */
	r4 = 0x24Cu; UPD(0x0C06CEC6u, 2);  /* 0C06CEC4 mov.w @(disp,pc),Rn */
	r3 &= r2;  /* 0C06CEC6 and Rm,Rn */
	r0 = r7;  /* 0C06CEC8 mov Rm,Rn */
	IF(0x0C06CECAu); W16(r0 + r4, r3); UPD(0x0C06CECCu, 3);  /* 0C06CECA mov.w Rm,@(r0,Rn) */
	r8 = 0xC3B1B0Cu; UPD(0x0C06CECEu, 1);  /* 0C06CECC mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C06CECE mov Rm,Rn */
	IF(0x0C06CED0u); W16(r0 + r8, r3); UPD(0x0C06CED2u, 2);  /* 0C06CED0 mov.w Rm,@(r0,Rn) */
L_0C06CED2: BLKS(0x0C06CED2u);
	r5 = 0xC29D6CEu; UPD(0x0C06CED4u, 1);  /* 0C06CED2 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C06CED4 mov #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r5); UPD(0x0C06CED8u, 2);  /* 0C06CED6 mov.w @Rm,Rn */
	r2 = 0xC238029u; UPD(0x0C06CEDAu, 1);  /* 0C06CED8 mov.l @(disp,pc),Rn */
	T = (r3 & r3) == 0;  /* 0C06CEDA tst Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06CEDEu, 2);  /* 0C06CEDC mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C06CEDE negc Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06CEE0 tst Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C06CEE2 negc Rm,Rn */
	r4 = 0xC29D1D8u; UPD(0x0C06CEE6u, 4);  /* 0C06CEE4 mov.l @(disp,pc),Rn */
	T = (r3 & r0) == 0;  /* 0C06CEE6 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x7Fu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06CF50u, 4); goto L_0C06CF50; } goto L_0C06CEEC; }  /* 0C06CEE8 bt/s */
L_0C06CEEC: BLKS(0x0C06CEECu);
	r0 = 0xC228BF8u; UPD(0x0C06CEEEu, 2);  /* 0C06CEEC mov.l @(disp,pc),Rn */
	r6 += r8;  /* 0C06CEEE add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C06CEF2u, 2);  /* 0C06CEF0 mov.w @Rm,Rn */
	r8 = 0x7Fu;  /* 0C06CEF2 mov #imm,Rn */
	r5 = 0x4ECu; UPD(0x0C06CEF6u, 2);  /* 0C06CEF4 mov.w @(disp,pc),Rn */
	r8 &= r2;  /* 0C06CEF6 and Rm,Rn */
	r0 = r4;  /* 0C06CEF8 mov Rm,Rn */
	IF(0x0C06CEFAu); W16(r0 + r5, r8); UPD(0x0C06CEFCu, 3);  /* 0C06CEFA mov.w Rm,@(r0,Rn) */
	r6 += 0x2u;  /* 0C06CEFC add #imm,Rn */
	W16(r6, r8); UPD(0x0C06CF00u, 2);  /* 0C06CEFE mov.w Rm,@Rn */
L_0C06CF00: BLKS(0x0C06CF00u);
	r8 = 0x0u;  /* 0C06CF00 mov #imm,Rn */
	r4 = r7;  /* 0C06CF02 mov Rm,Rn */
	UPD(0x0C06CF04u, 2);
L_0C06CF04: BLKS(0x0C06CF04u);
	r0 = 0x24Cu; UPD(0x0C06CF06u, 1);  /* 0C06CF04 mov.w @(disp,pc),Rn */
	r7 = 0x254u; UPD(0x0C06CF08u, 1);  /* 0C06CF06 mov.w @(disp,pc),Rn */
	r0 += r4;  /* 0C06CF08 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r0); r0 += 2; r3 = v_; } UPD(0x0C06CF0Cu, 2);  /* 0C06CF0A mov.w @Rm+,Rn */
	r7 += r4;  /* 0C06CF0C add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C06CF10u, 2);  /* 0C06CF0E mov.w @Rm,Rn */
	r5 = r3;  /* 0C06CF10 mov Rm,Rn */
	r5 ^= r6;  /* 0C06CF12 xor Rm,Rn */
	r2 = r3;  /* 0C06CF14 mov Rm,Rn */
	r2 &= r5;  /* 0C06CF16 and Rm,Rn */
	W16(r0, r2); UPD(0x0C06CF1Au, 5);  /* 0C06CF18 mov.w Rm,@Rn */
	r2 = 0x250u; UPD(0x0C06CF1Cu, 1);  /* 0C06CF1A mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C06CF1C mov Rm,Rn */
	r2 += r4;  /* 0C06CF1E add Rm,Rn */
	r0 &= r6;  /* 0C06CF20 and Rm,Rn */
	W16(r2, r0); UPD(0x0C06CF24u, 4);  /* 0C06CF22 mov.w Rm,@Rn */
	r0 = r3;  /* 0C06CF24 mov Rm,Rn */
	r0 ^= 0xFFu;  /* 0C06CF26 xor #imm,r0 */
	r0 &= r5;  /* 0C06CF28 and Rm,Rn */
	r5 = r8;  /* 0C06CF2A mov Rm,Rn */
	r8 = 0x2A0u; UPD(0x0C06CF2Eu, 5);  /* 0C06CF2C mov.w @(disp,pc),Rn */
	r2 += 0x2u;  /* 0C06CF2E add #imm,Rn */
	W16(r7, r3); UPD(0x0C06CF32u, 2);  /* 0C06CF30 mov.w Rm,@Rn */
	r5 += 0x1u;  /* 0C06CF32 add #imm,Rn */
	r4 += r8;  /* 0C06CF34 add Rm,Rn */
	r8 = (u32)(s32)(s16)r5;  /* 0C06CF36 exts.w Rm,Rn */
	r3 = 0x1u;  /* 0C06CF38 mov #imm,Rn */
	T = (s32)r8 > (s32)r3;  /* 0C06CF3A cmp/gt Rm,Rn */
	{ u32 c_ = !T; W16(r2, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C06CF04u, 8); goto L_0C06CF04; } UPD(0x0C06CF40u, 1); goto L_0C06CF40; }  /* 0C06CF3C bf/s */
L_0C06CF40: BLKS(0x0C06CF40u);
	r15 = r14;  /* 0C06CF40 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06CF44u, 2);  /* 0C06CF42 mov.l @Rm+,Rn */
	IF(0x0C06CF44u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06CF44 rts */
L_0C06CF50: BLKS(0x0C06CF50u);
	r6 += r8;  /* 0C06CF50 add Rm,Rn */
	r6 += 0x2u;  /* 0C06CF52 add #imm,Rn */
	r8 = (u32)(s32)(s16)R16(r6); UPD(0x0C06CF56u, 3);  /* 0C06CF54 mov.w @Rm,Rn */
	r3 = 0x4ECu; UPD(0x0C06CF58u, 1);  /* 0C06CF56 mov.w @(disp,pc),Rn */
	r0 = r4;  /* 0C06CF58 mov Rm,Rn */
	r1 &= r8;  /* 0C06CF5A and Rm,Rn */
	IF(0x0C06CF5Cu); W16(r0 + r3, r1); UPD(0x0C06CF5Eu, 3);  /* 0C06CF5C mov.w Rm,@(r0,Rn) */
	r4 = 0xC228BF8u; UPD(0x0C06CF60u, 1);  /* 0C06CF5E mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r4); UPD(0x0C06CF62u, 1);  /* 0C06CF60 mov.w @Rm,Rn */
	{ W16(r5, r6); /* slot mov.w Rm,@Rn */ UPD(0x0C06CF00u, 3); goto L_0C06CF00; }  /* 0C06CF62 bra */
L_0C06CF70: BLKS(0x0C06CF70u);
	r8 = 0xC3B1B0Cu; UPD(0x0C06CF72u, 1);  /* 0C06CF70 mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C06CF72 add Rm,Rn */
	r0 = r6;  /* 0C06CF74 mov Rm,Rn */
	IF(0x0C06CF76u); r2 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C06CF78u, 3);  /* 0C06CF76 mov.w @(r0,Rm),Rn */
	r4 = 0x7Fu;  /* 0C06CF78 mov #imm,Rn */
	r5 = 0x24Cu; UPD(0x0C06CF7Cu, 2);  /* 0C06CF7A mov.w @(disp,pc),Rn */
	r4 &= r2;  /* 0C06CF7C and Rm,Rn */
	r0 = r7;  /* 0C06CF7E mov Rm,Rn */
	IF(0x0C06CF80u); W16(r0 + r5, r4); UPD(0x0C06CF82u, 3);  /* 0C06CF80 mov.w Rm,@(r0,Rn) */
	r4 = 0xC237C12u; UPD(0x0C06CF84u, 1);  /* 0C06CF82 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r4); UPD(0x0C06CF86u, 1);  /* 0C06CF84 mov.w @Rm,Rn */
	{ W16(r3, r5); /* slot mov.w Rm,@Rn */ UPD(0x0C06CED2u, 3); goto L_0C06CED2; }  /* 0C06CF86 bra */
L_0C06CF90: BLKS(0x0C06CF90u);
	r4 = 0xC237C12u; UPD(0x0C06CF92u, 1);  /* 0C06CF90 mov.l @(disp,pc),Rn */
	r7 = 0xC29D424u; UPD(0x0C06CF94u, 1);  /* 0C06CF92 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r4); UPD(0x0C06CF96u, 1);  /* 0C06CF94 mov.w @Rm,Rn */
	r2 = 0xC228BF8u; UPD(0x0C06CF98u, 1);  /* 0C06CF96 mov.l @(disp,pc),Rn */
	W16(r7, r6); UPD(0x0C06CF9Au, 1);  /* 0C06CF98 mov.w Rm,@Rn */
	r5 = 0xC29D6C4u; UPD(0x0C06CF9Cu, 1);  /* 0C06CF9A mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C06CF9Eu, 1);  /* 0C06CF9C mov.w @Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C06CFA0u, 1);  /* 0C06CF9E mov.l @(disp,pc),Rn */
	{ W16(r5, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C06CF00u, 3); goto L_0C06CF00; }  /* 0C06CFA0 bra */
}

/* FUN_0c06cff0 */
void blk_f_0C06CFF0(sh3_t *c)
{
	LOCALS;
L_0C06CFF0: BLKS(0x0C06CFF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06CFF2u, 1);  /* 0C06CFF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06CFF4u, 1);  /* 0C06CFF2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06CFF6u, 1);  /* 0C06CFF4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06CFF8u, 1);  /* 0C06CFF6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06CFFAu, 1);  /* 0C06CFF8 mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C06CFFA mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06CFFEu, 2);  /* 0C06CFFC mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C06CFFE exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D002u, 2);  /* 0C06D000 mov.l Rm,@-Rn */
	r5 = 0xC297488u; UPD(0x0C06D004u, 1);  /* 0C06D002 mov.l @(disp,pc),Rn */
	IF(0x0C06D004u); r15 -= 4; W32(r15, PR); UPD(0x0C06D006u, 1);  /* 0C06D004 sts.l pr,@-Rn */
	r0 = r5;  /* 0C06D006 mov Rm,Rn */
	r4 = 0x2A0u; UPD(0x0C06D00Au, 2);  /* 0C06D008 mov.w @(disp,pc),Rn */
	IF(0x0C06D00Au); r13 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C06D00Cu, 1);  /* 0C06D00A mov.b @(r0,Rm),Rn */
	IF(0x0C06D00Cu); MACL = r12 * r4;  /* 0C06D00C mul.l Rm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C06D010u, 3);  /* 0C06D00E mov.l @(disp,pc),Rn */
	IF(0x0C06D010u); r10 = MACL;  /* 0C06D010 sts macl,Rn */
	r3 = 0x25Cu; UPD(0x0C06D014u, 2);  /* 0C06D012 mov.w @(disp,pc),Rn */
	r10 += r0;  /* 0C06D014 add Rm,Rn */
	r3 += r10;  /* 0C06D016 add Rm,Rn */
	W8(r3, r11); UPD(0x0C06D01Au, 3);  /* 0C06D018 mov.b Rm,@Rn */
	r0 = r10;  /* 0C06D01A mov Rm,Rn */
	r3 += 0x2u;  /* 0C06D01C add #imm,Rn */
	W8(r3, r11); UPD(0x0C06D020u, 3);  /* 0C06D01E mov.b Rm,@Rn */
	r1 = 0x25Bu; UPD(0x0C06D022u, 1);  /* 0C06D020 mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r3 -= 1; W8(r3, v_); } UPD(0x0C06D024u, 1);  /* 0C06D022 mov.b Rm,@-Rn */
	IF(0x0C06D024u); W8(r0 + r1, r11); UPD(0x0C06D026u, 1);  /* 0C06D024 mov.b Rm,@(r0,Rn) */
	r2 = 0xC22E015u; UPD(0x0C06D028u, 1);  /* 0C06D026 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06D02Au, 1);  /* 0C06D028 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06D02A tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06D110u, 4); goto L_0C06D110; } UPD(0x0C06D030u, 1); goto L_0C06D030; }  /* 0C06D02C bf/s */
L_0C06D030: BLKS(0x0C06D030u);
	r0 = 0x284u; UPD(0x0C06D032u, 1);  /* 0C06D030 mov.w @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C06D032 mov #imm,Rn */
	r0 += r10;  /* 0C06D034 add Rm,Rn */
	r0 += 0x2u;  /* 0C06D036 add #imm,Rn */
	W8(r0, r11); UPD(0x0C06D03Au, 4);  /* 0C06D038 mov.b Rm,@Rn */
	r3 = 0x0u;  /* 0C06D03A mov #imm,Rn */
	{ u32 v_ = r1; r0 -= 2; W16(r0, v_); } UPD(0x0C06D03Eu, 2);  /* 0C06D03C mov.w Rm,@-Rn */
	r4 = r12;  /* 0C06D03E mov Rm,Rn */
	r0 = 0x280u; UPD(0x0C06D042u, 2);  /* 0C06D040 mov.w @(disp,pc),Rn */
	IF(0x0C06D042u); W32(r0 + r10, r3); UPD(0x0C06D044u, 1);  /* 0C06D042 mov.l Rm,@(r0,Rn) */
	r2 = 0xC06D170u; UPD(0x0C06D046u, 1);  /* 0C06D044 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFF4u;  /* 0C06D046 add #imm,Rn */
	IF(0x0C06D048u); { u32 t_ = r2; PR = 0x0C06D04Cu; IF(0x0C06D04Au); W32(r0 + r10, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C06D170, 0x0C06D170u, 0x0C06D04Cu); }  /* 0C06D048 jsr @Rn */
L_0C06D04C: BLKS(0x0C06D04Cu);
	r11 = 0x28Au; UPD(0x0C06D04Eu, 1);  /* 0C06D04C mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C06D04E mov Rm,Rn */
	IF(0x0C06D050u); r9 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06D052u, 2);  /* 0C06D050 mov.b @(r0,Rm),Rn */
	r2 = 0x9u;  /* 0C06D052 mov #imm,Rn */
	r1 = r9 & 0xFF;  /* 0C06D054 extu.b Rm,Rn */
	T = r1 > r2;  /* 0C06D056 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C06D100u, 6); goto L_0C06D100; }  /* 0C06D058 bf */
L_0C06D05A: BLKS(0x0C06D05Au);
	r0 = 0x290u; UPD(0x0C06D05Cu, 1);  /* 0C06D05A mov.w @(disp,pc),Rn */
	IF(0x0C06D05Cu); W32(r0 + r10, r2); UPD(0x0C06D05Eu, 1);  /* 0C06D05C mov.l Rm,@(r0,Rn) */
L_0C06D05E: BLKS(0x0C06D05Eu);
	r8 = 0x2A0u; UPD(0x0C06D060u, 1);  /* 0C06D05E mov.w @(disp,pc),Rn */
	IF(0x0C06D060u); MACL = r12 * r8;  /* 0C06D060 mul.l Rm,Rn */
	r6 = 0xC3C4150u; UPD(0x0C06D064u, 3);  /* 0C06D062 mov.l @(disp,pc),Rn */
	r7 = 0xC29D1D8u; UPD(0x0C06D066u, 1);  /* 0C06D064 mov.l @(disp,pc),Rn */
	IF(0x0C06D066u); r3 = MACL;  /* 0C06D066 sts macl,Rn */
	r5 = R32(r6); UPD(0x0C06D06Au, 2);  /* 0C06D068 mov.l @Rm,Rn */
	r3 += r7;  /* 0C06D06A add Rm,Rn */
	r0 = 0x294u; UPD(0x0C06D06Eu, 2);  /* 0C06D06C mov.w @(disp,pc),Rn */
	r4 = 0xC22E015u; UPD(0x0C06D070u, 1);  /* 0C06D06E mov.l @(disp,pc),Rn */
	IF(0x0C06D070u); W32(r0 + r3, r5); UPD(0x0C06D072u, 1);  /* 0C06D070 mov.l Rm,@(r0,Rn) */
	r10 = (u32)(s32)(s8)R8(r4); UPD(0x0C06D074u, 1);  /* 0C06D072 mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C06D074 tst Rm,Rn */
	{ u32 c_ = T; r0 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06D0C0u, 4); goto L_0C06D0C0; } goto L_0C06D07A; }  /* 0C06D076 bt/s */
L_0C06D07A: BLKS(0x0C06D07Au);
	r13 = 0x25Au; UPD(0x0C06D07Cu, 2);  /* 0C06D07A mov.w @(disp,pc),Rn */
	r9 = 0x6u;  /* 0C06D07C mov #imm,Rn */
	r0 = r3;  /* 0C06D07E mov Rm,Rn */
	IF(0x0C06D080u); W8(r0 + r13, r9); UPD(0x0C06D082u, 3);  /* 0C06D080 mov.b Rm,@(r0,Rn) */
L_0C06D082: BLKS(0x0C06D082u);
	r7 = 0x2A0u; UPD(0x0C06D084u, 1);  /* 0C06D082 mov.w @(disp,pc),Rn */
	IF(0x0C06D084u); MACL = r12 * r7;  /* 0C06D084 mul.l Rm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C06D088u, 3);  /* 0C06D086 mov.l @(disp,pc),Rn */
	IF(0x0C06D088u); r2 = MACL;  /* 0C06D088 sts macl,Rn */
	r12 = 0x28Au; UPD(0x0C06D08Cu, 2);  /* 0C06D08A mov.w @(disp,pc),Rn */
	r2 += r0;  /* 0C06D08C add Rm,Rn */
	r2 += r12;  /* 0C06D08E add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06D092u, 3);  /* 0C06D090 mov.b @Rm,Rn */
	T = r0 == 0xAu;  /* 0C06D092 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C06D09Cu, 4); goto L_0C06D09C; }  /* 0C06D094 bt */
L_0C06D096: BLKS(0x0C06D096u);
	r8 = r0;  /* 0C06D096 mov Rm,Rn */
	r8 += 0x1u;  /* 0C06D098 add #imm,Rn */
	W8(r2, r8); UPD(0x0C06D09Cu, 3);  /* 0C06D09A mov.b Rm,@Rn */
L_0C06D09C: BLKS(0x0C06D09Cu);
	r13 = 0xC3C8474u; UPD(0x0C06D09Eu, 1);  /* 0C06D09C mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C06D09E mov #imm,Rn */
	W32(r13, r9); UPD(0x0C06D0A2u, 2);  /* 0C06D0A0 mov.l Rm,@Rn */
	r15 = r14;  /* 0C06D0A2 mov Rm,Rn */
	IF(0x0C06D0A4u); PR = R32(r15); r15 += 4; UPD(0x0C06D0A6u, 2);  /* 0C06D0A4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06D0A8u, 1);  /* 0C06D0A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06D0AAu, 1);  /* 0C06D0A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06D0ACu, 1);  /* 0C06D0AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06D0AEu, 1);  /* 0C06D0AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06D0B0u, 1);  /* 0C06D0AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06D0B2u, 1);  /* 0C06D0B0 mov.l @Rm+,Rn */
	IF(0x0C06D0B2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06D0B2 rts */
L_0C06D0C0: BLKS(0x0C06D0C0u);
	r2 = 0xC239483u; UPD(0x0C06D0C2u, 1);  /* 0C06D0C0 mov.l @(disp,pc),Rn */
	r10 = 0x25Au; UPD(0x0C06D0C4u, 1);  /* 0C06D0C2 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C06D0C6u, 1);  /* 0C06D0C4 mov.b @Rm,Rn */
	IF(0x0C06D0C6u); W8(r0 + r10, r4); UPD(0x0C06D0C8u, 1);  /* 0C06D0C6 mov.b Rm,@(r0,Rn) */
	r10 += 0x30u;  /* 0C06D0C8 add #imm,Rn */
	IF(0x0C06D0CAu); r11 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C06D0CCu, 2);  /* 0C06D0CA mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C06D0CC tst Rm,Rn */
	if (!T) { UPD(0x0C06D0F0u, 4); goto L_0C06D0F0; }  /* 0C06D0CE bf */
L_0C06D0D0: BLKS(0x0C06D0D0u);
	r5 = 0xC2860B0u; UPD(0x0C06D0D2u, 1);  /* 0C06D0D0 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C06D0D2 mov Rm,Rn */
	IF(0x0C06D0D4u); r1 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C06D0D6u, 2);  /* 0C06D0D4 mov.b @(r0,Rm),Rn */
	r6 = 0xC3C8690u; UPD(0x0C06D0D8u, 1);  /* 0C06D0D6 mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C06D0D8 mov Rm,Rn */
	IF(0x0C06D0DAu); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C06D0DCu, 2);  /* 0C06D0DA mov.b @(r0,Rm),Rn */
	r0 = r5;  /* 0C06D0DC mov Rm,Rn */
	r1 -= r3;  /* 0C06D0DE sub Rm,Rn */
	UPD(0x0C06D0E0u, 2);
L_0C06D0E0: BLKS(0x0C06D0E0u);
	{ IF(0x0C06D0E2u); W8(r0 + r13, r1); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C06D082u, 3); goto L_0C06D082; }  /* 0C06D0E0 bra */
L_0C06D0F0: BLKS(0x0C06D0F0u);
	r1 = 0xC2860B0u; UPD(0x0C06D0F2u, 1);  /* 0C06D0F0 mov.l @(disp,pc),Rn */
	r0 = r1;  /* 0C06D0F2 mov Rm,Rn */
	IF(0x0C06D0F4u); r1 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C06D0F6u, 2);  /* 0C06D0F4 mov.b @(r0,Rm),Rn */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C06D0E0u, 3); goto L_0C06D0E0; }  /* 0C06D0F6 bra */
L_0C06D100: BLKS(0x0C06D100u);
	r0 = 0x290u; UPD(0x0C06D102u, 1);  /* 0C06D100 mov.w @(disp,pc),Rn */
	{ IF(0x0C06D104u); W32(r0 + r10, r1); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C06D05Eu, 3); goto L_0C06D05E; }  /* 0C06D102 bra */
L_0C06D110: BLKS(0x0C06D110u);
	r8 = 0x3u;  /* 0C06D110 mov #imm,Rn */
	r9 = r12;  /* 0C06D112 mov Rm,Rn */
	IF(0x0C06D114u); ARG0(0x498Du); { s32 s_ = (s32)r8; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C06D114 shld Rm,Rn */
	r7 = 0xC23E0A6u; UPD(0x0C06D118u, 4);  /* 0C06D116 mov.l @(disp,pc),Rn */
	r6 = 0x3u;  /* 0C06D118 mov #imm,Rn */
	r0 = 0xC0C2360u; UPD(0x0C06D11Cu, 2);  /* 0C06D11A mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s8)R8(r7); UPD(0x0C06D11Eu, 1);  /* 0C06D11C mov.b @Rm,Rn */
	IF(0x0C06D11Eu); { u32 t_ = r0; PR = 0x0C06D122u; r8 &= r6; /* slot and Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C06D122u); }  /* 0C06D11E jsr @Rn */
L_0C06D122: BLKS(0x0C06D122u);
	r0 &= 0x1u;  /* 0C06D122 and #imm,r0 */
	IF(0x0C06D124u); r0 <<= 2;  /* 0C06D124 shll2 Rn */
	r8 += r0;  /* 0C06D126 add Rm,Rn */
	r9 |= r8;  /* 0C06D128 or Rm,Rn */
	{ W32(r10 + 0x4u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06D030u, 7); goto L_0C06D030; }  /* 0C06D12A bra */
}

/* FUN_0c06d170 */
void blk_f_0C06D170(sh3_t *c)
{
	LOCALS;
L_0C06D170: BLKS(0x0C06D170u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06D172u, 1);  /* 0C06D170 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C06D172 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06D176u, 2);  /* 0C06D174 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C06D176 exts.w Rm,Rn */
	r3 = 0x2A0u; UPD(0x0C06D17Au, 2);  /* 0C06D178 mov.w @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C06D17A mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06D17Eu, 2);  /* 0C06D17C mov.l Rm,@-Rn */
	IF(0x0C06D17Eu); MACL = r8 * r3;  /* 0C06D17E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D182u, 3);  /* 0C06D180 mov.l Rm,@-Rn */
	r10 = r3;  /* 0C06D182 mov Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C06D186u, 2);  /* 0C06D184 mov.l @(disp,pc),Rn */
	IF(0x0C06D186u); r2 = MACL;  /* 0C06D186 sts macl,Rn */
	IF(0x0C06D188u); r15 -= 4; W32(r15, PR); UPD(0x0C06D18Au, 2);  /* 0C06D188 sts.l pr,@-Rn */
	r2 += r5;  /* 0C06D18A add Rm,Rn */
	W32(r2 + 0xCu, r0); UPD(0x0C06D18Eu, 2);  /* 0C06D18C mov.l Rm,@(disp,Rn) */
	r14 = r15;  /* 0C06D18E mov Rm,Rn */
	W32(r2 + 0x8u, r0); UPD(0x0C06D192u, 2);  /* 0C06D190 mov.l Rm,@(disp,Rn) */
	r9 = 0x0u;  /* 0C06D192 mov #imm,Rn */
	r4 = 0xDC000000u; UPD(0x0C06D196u, 2);  /* 0C06D194 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFCCu;  /* 0C06D196 add #imm,Rn */
	r0 = 0xFFD00000u; UPD(0x0C06D19Au, 2);  /* 0C06D198 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C06D19A mov #imm,Rn */
	W32(r2, r4); UPD(0x0C06D19Eu, 2);  /* 0C06D19C mov.l Rm,@Rn */
	r7 = 0x269u; UPD(0x0C06D1A0u, 1);  /* 0C06D19E mov.w @(disp,pc),Rn */
	r4 = 0xFFFFFFFFu;  /* 0C06D1A0 mov #imm,Rn */
	W32(r2 + 0x10u, r0); UPD(0x0C06D1A4u, 2);  /* 0C06D1A2 mov.l Rm,@(disp,Rn) */
	r7 += r2;  /* 0C06D1A4 add Rm,Rn */
	UPD(0x0C06D1A6u, 1);
L_0C06D1A6: BLKS(0x0C06D1A6u);
	r0 = r2;  /* 0C06D1A6 mov Rm,Rn */
	r0 += r1;  /* 0C06D1A8 add Rm,Rn */
	IF(0x0C06D1AAu); MACL = r8 * r10;  /* 0C06D1AA mul.l Rm,Rn */
	W8(r7, r9); UPD(0x0C06D1AEu, 5);  /* 0C06D1AC mov.b Rm,@Rn */
	r1 += 0x1u;  /* 0C06D1AE add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C06D1B0 exts.w Rm,Rn */
	IF(0x0C06D1B2u); W8(r0 + r3, r4); UPD(0x0C06D1B4u, 3);  /* 0C06D1B2 mov.b Rm,@(r0,Rn) */
	r7 += 0x1u;  /* 0C06D1B4 add #imm,Rn */
	T = (s32)r1 > (s32)r5;  /* 0C06D1B6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C06D1BAu); r6 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C06D1A6u, 5); goto L_0C06D1A6; } goto L_0C06D1BC; }  /* 0C06D1B8 bf/s */
L_0C06D1BC: BLKS(0x0C06D1BCu);
	r7 = 0xC29D1D8u; UPD(0x0C06D1BEu, 2);  /* 0C06D1BC mov.l @(disp,pc),Rn */
	r0 = 0x25Bu; UPD(0x0C06D1C0u, 1);  /* 0C06D1BE mov.w @(disp,pc),Rn */
	r7 += r6;  /* 0C06D1C0 add Rm,Rn */
	IF(0x0C06D1C2u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C06D1C4u, 2);  /* 0C06D1C2 mov.b @(r0,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C06D1C4 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06D1CCu, 4); goto L_0C06D1CC; } goto L_0C06D1CA; }  /* 0C06D1C6 bt/s */
L_0C06D1CA: BLKS(0x0C06D1CAu);
	IF(0x0C06D1CAu); W8(r0 + r7, r1); UPD(0x0C06D1CCu, 2);  /* 0C06D1CA mov.b Rm,@(r0,Rn) */
L_0C06D1CC: BLKS(0x0C06D1CCu);
	r4 = 0x260u; UPD(0x0C06D1CEu, 1);  /* 0C06D1CC mov.w @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C06D1CE mov #imm,Rn */
	r6 = 0x25Cu; UPD(0x0C06D1D2u, 2);  /* 0C06D1D0 mov.w @(disp,pc),Rn */
	r4 += r7;  /* 0C06D1D2 add Rm,Rn */
	r3 = 0x264u; UPD(0x0C06D1D6u, 2);  /* 0C06D1D4 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C06D1D6 add Rm,Rn */
	r5 = r4;  /* 0C06D1D8 mov Rm,Rn */
	r7 += r3;  /* 0C06D1DA add Rm,Rn */
	r4 += 0x3u;  /* 0C06D1DC add #imm,Rn */
	W8(r4, r0); UPD(0x0C06D1E0u, 5);  /* 0C06D1DE mov.b Rm,@Rn */
	r3 = r6;  /* 0C06D1E0 mov Rm,Rn */
	W8(r7, r0); UPD(0x0C06D1E4u, 2);  /* 0C06D1E2 mov.b Rm,@Rn */
	r3 += 0x2u;  /* 0C06D1E4 add #imm,Rn */
	r4 += 0xFFFFFFFDu;  /* 0C06D1E6 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C06D1EAu, 3);  /* 0C06D1E8 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C06D1EA add #imm,Rn */
	W8(r4, r0); UPD(0x0C06D1EEu, 2);  /* 0C06D1EC mov.b Rm,@Rn */
	r10 = r7;  /* 0C06D1EE mov Rm,Rn */
	r10 += 0x28u;  /* 0C06D1F0 add #imm,Rn */
	r4 += 0x2u;  /* 0C06D1F2 add #imm,Rn */
	r1 = 0x6u;  /* 0C06D1F4 mov #imm,Rn */
	r2 = r10 & 0xFF;  /* 0C06D1F6 extu.b Rm,Rn */
	r9 = 0x27u;  /* 0C06D1F8 mov #imm,Rn */
	W8(r6, r0); UPD(0x0C06D1FCu, 7);  /* 0C06D1FA mov.b Rm,@Rn */
	T = r2 > r9;  /* 0C06D1FC cmp/hi Rm,Rn */
	W8(r5, r0); UPD(0x0C06D200u, 2);  /* 0C06D1FE mov.b Rm,@Rn */
	W8(r4, r1); UPD(0x0C06D202u, 1);  /* 0C06D200 mov.b Rm,@Rn */
	{ u32 c_ = !T; W8(r3, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06D21Cu, 3); goto L_0C06D21C; } UPD(0x0C06D206u, 1); goto L_0C06D206; }  /* 0C06D202 bf/s */
L_0C06D206: BLKS(0x0C06D206u);
	r2 = r6;  /* 0C06D206 mov Rm,Rn */
	r2 += 0x1u;  /* 0C06D208 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06D20Cu, 3);  /* 0C06D20A mov.b @Rm,Rn */
	T = r0 == 0x4u;  /* 0C06D20C cmp/eq #imm,r0 */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06D216u, 4); goto L_0C06D216; } goto L_0C06D212; }  /* 0C06D20E bf/s */
L_0C06D212: BLKS(0x0C06D212u);
	{ r6 = 0x28u; /* slot mov #imm,Rn */ UPD(0x0C06D330u, 4); goto L_0C06D330; }  /* 0C06D212 bra */
L_0C06D216: BLKS(0x0C06D216u);
	r9 += 0x1u;  /* 0C06D216 add #imm,Rn */
	W8(r2, r9); UPD(0x0C06D21Au, 2);  /* 0C06D218 mov.b Rm,@Rn */
	W8(r3, r7); UPD(0x0C06D21Cu, 1);  /* 0C06D21A mov.b Rm,@Rn */
L_0C06D21C: BLKS(0x0C06D21Cu);
	r4 = 0x2A0u; UPD(0x0C06D21Eu, 1);  /* 0C06D21C mov.w @(disp,pc),Rn */
	r2 = 0x7u;  /* 0C06D21E mov #imm,Rn */
	IF(0x0C06D220u); MACL = r8 * r4;  /* 0C06D220 mul.l Rm,Rn */
	r10 = 0xC29D1D8u; UPD(0x0C06D224u, 4);  /* 0C06D222 mov.l @(disp,pc),Rn */
	IF(0x0C06D224u); r5 = MACL;  /* 0C06D224 sts macl,Rn */
	r5 += r10;  /* 0C06D226 add Rm,Rn */
	r0 = R32(r5 + 0x4u); UPD(0x0C06D22Au, 3);  /* 0C06D228 mov.l @(disp,Rm),Rn */
	r7 = 0xC1740D0u; UPD(0x0C06D22Cu, 1);  /* 0C06D22A mov.l @(disp,pc),Rn */
	r0 &= r2;  /* 0C06D22C and Rm,Rn */
	IF(0x0C06D22Eu); r0 <<= 2;  /* 0C06D22E shll2 Rn */
	IF(0x0C06D230u); r9 = R32(r0 + r7); UPD(0x0C06D232u, 3);  /* 0C06D230 mov.l @(r0,Rm),Rn */
	r6 = 0x260u; UPD(0x0C06D234u, 1);  /* 0C06D232 mov.w @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C06D234 mov #imm,Rn */
	r3 = 0x264u; UPD(0x0C06D238u, 2);  /* 0C06D236 mov.w @(disp,pc),Rn */
	r6 += r5;  /* 0C06D238 add Rm,Rn */
	r3 += r5;  /* 0C06D23A add Rm,Rn */
	r7 = 0x287u; UPD(0x0C06D23Eu, 3);  /* 0C06D23C mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C06D23E add #imm,Rn */
	r3 += 0x3u;  /* 0C06D240 add #imm,Rn */
	r2 = 0x289u; UPD(0x0C06D244u, 3);  /* 0C06D242 mov.w @(disp,pc),Rn */
	r7 += r5;  /* 0C06D244 add Rm,Rn */
	W32(r5 + 0x1Cu, r9); UPD(0x0C06D248u, 2);  /* 0C06D246 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x18u, r9); UPD(0x0C06D24Au, 1);  /* 0C06D248 mov.l Rm,@(disp,Rn) */
	W8(r6, r0); UPD(0x0C06D24Cu, 1);  /* 0C06D24A mov.b Rm,@Rn */
	r5 += r2;  /* 0C06D24C add Rm,Rn */
	W8(r3, r0); UPD(0x0C06D250u, 2);  /* 0C06D24E mov.b Rm,@Rn */
	{ u32 v_ = r0; r6 -= 1; W8(r6, v_); } UPD(0x0C06D252u, 1);  /* 0C06D250 mov.b Rm,@-Rn */
	{ u32 v_ = r0; r3 -= 1; W8(r3, v_); } UPD(0x0C06D254u, 1);  /* 0C06D252 mov.b Rm,@-Rn */
	W8(r7, r0); UPD(0x0C06D256u, 1);  /* 0C06D254 mov.b Rm,@Rn */
	W8(r5, r0); UPD(0x0C06D258u, 1);  /* 0C06D256 mov.b Rm,@Rn */
	r0 = r8;  /* 0C06D258 mov Rm,Rn */
	r0 ^= 0x1u;  /* 0C06D25A xor #imm,r0 */
	IF(0x0C06D25Cu); MACL = r0 * r4;  /* 0C06D25C mul.l Rm,Rn */
	IF(0x0C06D25Eu); r0 = MACL;  /* 0C06D25E sts macl,Rn */
	IF(0x0C06D260u); r2 = R32(r0 + r10); UPD(0x0C06D262u, 6);  /* 0C06D260 mov.l @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C06D262 tst Rm,Rn */
	{ u32 c_ = !T; r3 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06D278u, 4); goto L_0C06D278; } goto L_0C06D268; }  /* 0C06D264 bf/s */
L_0C06D268: BLKS(0x0C06D268u);
	r10 = 0xC297498u; UPD(0x0C06D26Au, 2);  /* 0C06D268 mov.l @(disp,pc),Rn */
	W32(r10, r2); UPD(0x0C06D26Cu, 1);  /* 0C06D26A mov.l Rm,@Rn */
	r1 = 0x7u;  /* 0C06D26C mov #imm,Rn */
	r2 = 0xC22E028u; UPD(0x0C06D270u, 2);  /* 0C06D26E mov.l @(disp,pc),Rn */
L_0C06D270: BLKS(0x0C06D270u);
	W32(r2, r3); UPD(0x0C06D272u, 1);  /* 0C06D270 mov.l Rm,@Rn */
	IF(0x0C06D272u); r1 -= 1; T = r1 == 0;  /* 0C06D272 dt Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06D270u, 4); goto L_0C06D270; } UPD(0x0C06D278u, 1); goto L_0C06D278; }  /* 0C06D274 bf/s */
L_0C06D278: BLKS(0x0C06D278u);
	r0 = 0x2A0u; UPD(0x0C06D27Au, 1);  /* 0C06D278 mov.w @(disp,pc),Rn */
	r3 = 0xFFFFFFFFu;  /* 0C06D27A mov #imm,Rn */
	IF(0x0C06D27Cu); MACL = r8 * r0;  /* 0C06D27C mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C06D280u, 4);  /* 0C06D27E mov.l @(disp,pc),Rn */
	r7 = 0xFFFFFFFFu;  /* 0C06D280 mov #imm,Rn */
	IF(0x0C06D282u); r4 = MACL;  /* 0C06D282 sts macl,Rn */
	r0 = 0x26Fu; UPD(0x0C06D286u, 3);  /* 0C06D284 mov.w @(disp,pc),Rn */
	r5 += r4;  /* 0C06D286 add Rm,Rn */
	r2 = 0xC29D444u; UPD(0x0C06D28Au, 2);  /* 0C06D288 mov.l @(disp,pc),Rn */
	r1 = 0x3u;  /* 0C06D28A mov #imm,Rn */
	IF(0x0C06D28Cu); W8(r0 + r5, r3); UPD(0x0C06D28Eu, 2);  /* 0C06D28C mov.b Rm,@(r0,Rn) */
	r2 += r4;  /* 0C06D28E add Rm,Rn */
	UPD(0x0C06D290u, 1);
L_0C06D290: BLKS(0x0C06D290u);
	W8(r2, r7); UPD(0x0C06D292u, 1);  /* 0C06D290 mov.b Rm,@Rn */
	IF(0x0C06D292u); r1 -= 1; T = r1 == 0;  /* 0C06D292 dt Rn */
	{ u32 c_ = !T; r2 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06D290u, 4); goto L_0C06D290; } goto L_0C06D298; }  /* 0C06D294 bf/s */
L_0C06D298: BLKS(0x0C06D298u);
	r10 = 0x2A0u; UPD(0x0C06D29Au, 2);  /* 0C06D298 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C06D29A mov #imm,Rn */
	IF(0x0C06D29Cu); MACL = r8 * r10;  /* 0C06D29C mul.l Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C06D2A0u, 4);  /* 0C06D29E mov.l @(disp,pc),Rn */
	r7 = 0xFFFFFFF0u;  /* 0C06D2A0 mov #imm,Rn */
	IF(0x0C06D2A2u); r10 = MACL;  /* 0C06D2A2 sts macl,Rn */
	r0 = 0x270u; UPD(0x0C06D2A6u, 3);  /* 0C06D2A4 mov.w @(disp,pc),Rn */
	r10 += r2;  /* 0C06D2A6 add Rm,Rn */
	r0 += r10;  /* 0C06D2A8 add Rm,Rn */
	r0 += 0x1u;  /* 0C06D2AA add #imm,Rn */
	W8(r0, r5); UPD(0x0C06D2AEu, 4);  /* 0C06D2AC mov.b Rm,@Rn */
	{ u32 v_ = r5; r0 -= 1; W8(r0, v_); } UPD(0x0C06D2B0u, 1);  /* 0C06D2AE mov.b Rm,@-Rn */
	r0 += 0x2u;  /* 0C06D2B0 add #imm,Rn */
	W8(r0, r5); UPD(0x0C06D2B4u, 2);  /* 0C06D2B2 mov.b Rm,@Rn */
	r0 = 0x268u; UPD(0x0C06D2B6u, 1);  /* 0C06D2B4 mov.w @(disp,pc),Rn */
	r4 = 0x28Cu; UPD(0x0C06D2B8u, 1);  /* 0C06D2B6 mov.w @(disp,pc),Rn */
	IF(0x0C06D2B8u); W8(r0 + r10, r5); UPD(0x0C06D2BAu, 1);  /* 0C06D2B8 mov.b Rm,@(r0,Rn) */
	r4 += r10;  /* 0C06D2BA add Rm,Rn */
	W8(r4, r5); UPD(0x0C06D2BEu, 2);  /* 0C06D2BC mov.b Rm,@Rn */
	r0 += 0x20u;  /* 0C06D2BE add #imm,Rn */
	IF(0x0C06D2C0u); W8(r0 + r10, r7); UPD(0x0C06D2C2u, 2);  /* 0C06D2C0 mov.b Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C06D2C2 add #imm,Rn */
	W8(r4, r5); UPD(0x0C06D2C6u, 2);  /* 0C06D2C4 mov.b Rm,@Rn */
	r0 = r8;  /* 0C06D2C6 mov Rm,Rn */
	r9 = 0xC1740F0u; UPD(0x0C06D2CAu, 2);  /* 0C06D2C8 mov.l @(disp,pc),Rn */
	IF(0x0C06D2CAu); r0 <<= 2;  /* 0C06D2CA shll2 Rn */
	IF(0x0C06D2CCu); r6 = R32(r0 + r9); UPD(0x0C06D2CEu, 2);  /* 0C06D2CC mov.l @(r0,Rm),Rn */
	r2 = 0x250u; UPD(0x0C06D2D0u, 1);  /* 0C06D2CE mov.w @(disp,pc),Rn */
	r0 = 0x298u; UPD(0x0C06D2D2u, 1);  /* 0C06D2D0 mov.w @(disp,pc),Rn */
	r2 += r10;  /* 0C06D2D2 add Rm,Rn */
	IF(0x0C06D2D4u); W32(r0 + r10, r6); UPD(0x0C06D2D6u, 2);  /* 0C06D2D4 mov.l Rm,@(r0,Rn) */
	r2 += 0x2u;  /* 0C06D2D6 add #imm,Rn */
	r4 = 0x24Cu; UPD(0x0C06D2DAu, 2);  /* 0C06D2D8 mov.w @(disp,pc),Rn */
	r0 += 0x4u;  /* 0C06D2DA add #imm,Rn */
	r3 = 0x808080u; UPD(0x0C06D2DEu, 2);  /* 0C06D2DC mov.l @(disp,pc),Rn */
	r4 += r10;  /* 0C06D2DE add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C06D2E2u, 2);  /* 0C06D2E0 mov.w @Rm,Rn */
	r4 += 0x2u;  /* 0C06D2E2 add #imm,Rn */
	IF(0x0C06D2E4u); W32(r0 + r10, r3); UPD(0x0C06D2E6u, 2);  /* 0C06D2E4 mov.l Rm,@(r0,Rn) */
	r9 = 0xC3C86ACu; UPD(0x0C06D2E8u, 1);  /* 0C06D2E6 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFB8u;  /* 0C06D2E8 add #imm,Rn */
	W16(r4, r5); UPD(0x0C06D2ECu, 2);  /* 0C06D2EA mov.w Rm,@Rn */
	r7 = 0x100u; UPD(0x0C06D2EEu, 1);  /* 0C06D2EC mov.w @(disp,pc),Rn */
	r6 = R32(r9); UPD(0x0C06D2F0u, 1);  /* 0C06D2EE mov.l @Rm,Rn */
	{ u32 v_ = r5; r2 -= 2; W16(r2, v_); } UPD(0x0C06D2F2u, 1);  /* 0C06D2F0 mov.w Rm,@-Rn */
	T = (r6 & r6) == 0;  /* 0C06D2F2 tst Rm,Rn */
	{ u32 v_ = r5; r4 -= 2; W16(r4, v_); } UPD(0x0C06D2F6u, 2);  /* 0C06D2F4 mov.w Rm,@-Rn */
	{ u32 c_ = T; IF(0x0C06D2F8u); W16(r0 + r10, r7); /* slot mov.w Rm,@(r0,Rn) */ if (c_) { UPD(0x0C06D310u, 3); goto L_0C06D310; } UPD(0x0C06D2FAu, 1); goto L_0C06D2FA; }  /* 0C06D2F6 bt/s */
L_0C06D2FA: BLKS(0x0C06D2FAu);
	r4 = 0xC237C0Cu; UPD(0x0C06D2FCu, 1);  /* 0C06D2FA mov.l @(disp,pc),Rn */
	r6 = 0xC297A3Cu; UPD(0x0C06D2FEu, 1);  /* 0C06D2FC mov.l @(disp,pc),Rn */
	r7 = R32(r4); UPD(0x0C06D300u, 1);  /* 0C06D2FE mov.l @Rm,Rn */
	W32(r6, r7); UPD(0x0C06D302u, 1);  /* 0C06D300 mov.l Rm,@Rn */
	r15 = r14;  /* 0C06D302 mov Rm,Rn */
	IF(0x0C06D304u); PR = R32(r15); r15 += 4; UPD(0x0C06D306u, 2);  /* 0C06D304 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06D308u, 1);  /* 0C06D306 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06D30Au, 1);  /* 0C06D308 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06D30Cu, 1);  /* 0C06D30A mov.l @Rm+,Rn */
	IF(0x0C06D30Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06D30C rts */
L_0C06D310: BLKS(0x0C06D310u);
	r9 = 0xC0C20A0u; UPD(0x0C06D312u, 1);  /* 0C06D310 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C06D312 mov Rm,Rn */
	IF(0x0C06D314u); { u32 t_ = r9; PR = 0x0C06D318u; r5 = 0x5Au; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C06D318u); }  /* 0C06D314 jsr @Rn */
L_0C06D318: BLKS(0x0C06D318u);
	r3 = 0xC1740F8u; UPD(0x0C06D31Au, 1);  /* 0C06D318 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C06D31A mov Rm,Rn */
	IF(0x0C06D31Cu); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06D31Eu, 2);  /* 0C06D31C mov.b @(r0,Rm),Rn */
	r8 = 0xC0C2110u; UPD(0x0C06D320u, 1);  /* 0C06D31E mov.l @(disp,pc),Rn */
	IF(0x0C06D320u); { u32 t_ = r8; PR = 0x0C06D324u; r4 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C06D324u); }  /* 0C06D320 jsr @Rn */
L_0C06D324: BLKS(0x0C06D324u);
	{ IF(0x0C06D326u); ; /* slot nop */ UPD(0x0C06D2FAu, 3); goto L_0C06D2FA; }  /* 0C06D324 bra */
L_0C06D330: BLKS(0x0C06D330u);
	{ W8(r3, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C06D21Cu, 3); goto L_0C06D21C; }  /* 0C06D330 bra */
}


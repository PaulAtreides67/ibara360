#include "recomp.h"
#include "blk_recomp_funcs.h"

/* FUN_0c0c04d0 */
void blk_f_0C0C04D0(sh3_t *c)
{
	LOCALS;
L_0C0C04D0: BLKS(0x0C0C04D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C04D2u, 1);  /* 0C0C04D0 mov.l Rm,@-Rn */
	r0 = 0x40u;  /* 0C0C04D2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C04D6u, 2);  /* 0C0C04D4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C04D8u, 1);  /* 0C0C04D6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C04DAu, 1);  /* 0C0C04D8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C04DCu, 1);  /* 0C0C04DA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0C04DEu, 1);  /* 0C0C04DC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C04E0u, 1);  /* 0C0C04DE mov.l Rm,@-Rn */
	IF(0x0C0C04E0u); r15 -= 4; W32(r15, PR); UPD(0x0C0C04E2u, 1);  /* 0C0C04E0 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE4u;  /* 0C0C04E2 add #imm,Rn */
	r14 = r15;  /* 0C0C04E4 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0C04E8u, 3);  /* 0C0C04E6 mov.l Rm,@Rn */
	r4 = R32(r14 + 0x3Cu); UPD(0x0C0C04EAu, 1);  /* 0C0C04E8 mov.l @(disp,Rm),Rn */
	r3 = (u32)(s32)(s8)r4;  /* 0C0C04EA exts.b Rm,Rn */
	W32(r14 + 0x10u, r3); UPD(0x0C0C04EEu, 2);  /* 0C0C04EC mov.l Rm,@(disp,Rn) */
	IF(0x0C0C04EEu); r2 = R32(r0 + r14); UPD(0x0C0C04F0u, 1);  /* 0C0C04EE mov.l @(r0,Rm),Rn */
	W32(r14 + 0xCu, r7); UPD(0x0C0C04F2u, 1);  /* 0C0C04F0 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s8)r2;  /* 0C0C04F2 exts.b Rm,Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C0C04F6u, 2);  /* 0C0C04F4 mov.l Rm,@(disp,Rn) */
	r7 = r5;  /* 0C0C04F6 mov Rm,Rn */
	r2 = 0xC1FFEF0u; UPD(0x0C0C04FAu, 2);  /* 0C0C04F8 mov.l @(disp,pc),Rn */
	IF(0x0C0C04FAu); r7 <<= 2;  /* 0C0C04FA shll2 Rn */
	r0 = r7;  /* 0C0C04FC mov Rm,Rn */
	IF(0x0C0C04FEu); r3 = R32(r0 + r2); UPD(0x0C0C0500u, 3);  /* 0C0C04FE mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0C0502u, 1);  /* 0C0C0500 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0C0504u, 1);  /* 0C0C0502 mov.l Rm,@(disp,Rn) */
	r2 += r6;  /* 0C0C0504 add Rm,Rn */
	IF(0x0C0C0506u); T = (s32)r2 >= 0;  /* 0C0C0506 cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0C0510u, 5); goto L_0C0C0510; } UPD(0x0C0C050Cu, 1); goto L_0C0C050C; }  /* 0C0C0508 bt/s */
L_0C0C050C: BLKS(0x0C0C050Cu);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0C0620u, 3); goto L_0C0C0620; }  /* 0C0C050C bra */
L_0C0C0510: BLKS(0x0C0C0510u);
	r5 = 0xA00000u; UPD(0x0C0C0512u, 1);  /* 0C0C0510 mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0C0512 add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0C0514 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C0534u, 5); goto L_0C0C0534; } goto L_0C0C051A; }  /* 0C0C0516 bt/s */
L_0C0C051A: BLKS(0x0C0C051Au);
	r9 = 0xC3C4048u; UPD(0x0C0C051Cu, 2);  /* 0C0C051A mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0C051Eu, 1);  /* 0C0C051C mov.l @(disp,Rm),Rn */
	r8 = R32(r9); UPD(0x0C0C0520u, 1);  /* 0C0C051E mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0C0522u, 1);  /* 0C0C0520 mov.l @(disp,pc),Rn */
	r2 -= r8;  /* 0C0C0522 sub Rm,Rn */
	r2 += r6;  /* 0C0C0524 add Rm,Rn */
	IF(0x0C0C0526u); T = (s32)r2 >= 0;  /* 0C0C0526 cmp/pz Rn */
	if (T) { UPD(0x0C0C052Cu, 6); goto L_0C0C052C; }  /* 0C0C0528 bt */
L_0C0C052A: BLKS(0x0C0C052Au);
	r2 = 0u - r2;  /* 0C0C052A neg Rm,Rn */
	UPD(0x0C0C052Cu, 1);
L_0C0C052C: BLKS(0x0C0C052Cu);
	r10 = 0x780000u; UPD(0x0C0C052Eu, 1);  /* 0C0C052C mov.l @(disp,pc),Rn */
	r3 += r10;  /* 0C0C052E add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0C0530 cmp/ge Rm,Rn */
	IF(0x0C0C0532u); r1 = T;  /* 0C0C0532 movt Rn */
	UPD(0x0C0C0534u, 3);
L_0C0C0534: BLKS(0x0C0C0534u);
	r11 = (u32)(s32)(s16)r1;  /* 0C0C0534 exts.w Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C0C0536 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C0560u, 5); goto L_0C0C0560; } UPD(0x0C0C053Cu, 1); goto L_0C0C053C; }  /* 0C0C0538 bt/s */
L_0C0C053C: BLKS(0x0C0C053Cu);
	r14 += 0x1Cu;  /* 0C0C053C add #imm,Rn */
	r15 = r14;  /* 0C0C053E mov Rm,Rn */
	IF(0x0C0C0540u); PR = R32(r15); r15 += 4; UPD(0x0C0C0542u, 3);  /* 0C0C0540 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C0544u, 1);  /* 0C0C0542 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0C0546u, 1);  /* 0C0C0544 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C0548u, 1);  /* 0C0C0546 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C054Au, 1);  /* 0C0C0548 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C054Cu, 1);  /* 0C0C054A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C054Eu, 1);  /* 0C0C054C mov.l @Rm+,Rn */
	IF(0x0C0C054Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C054E rts */
L_0C0C0560: BLKS(0x0C0C0560u);
	r2 = 0xC2001B0u; UPD(0x0C0C0562u, 1);  /* 0C0C0560 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0C0562 mov Rm,Rn */
	r8 = 0xC0C2360u; UPD(0x0C0C0566u, 2);  /* 0C0C0564 mov.l @(disp,pc),Rn */
	r13 = 0xC062780u; UPD(0x0C0C0568u, 1);  /* 0C0C0566 mov.l @(disp,pc),Rn */
	IF(0x0C0C0568u); { u32 t_ = r8; PR = 0x0C0C056Cu; IF(0x0C0C056Au); r12 = R32(r0 + r2); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0C056Cu); }  /* 0C0C0568 jsr @Rn */
L_0C0C056C: BLKS(0x0C0C056Cu);
	r4 = r12;  /* 0C0C056C mov Rm,Rn */
	IF(0x0C0C056Eu); { u32 t_ = r13; PR = 0x0C0C0572u; r11 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0C0572u); }  /* 0C0C056E jsr @Rn */
L_0C0C0572: BLKS(0x0C0C0572u);
	IF(0x0C0C0572u); T = r12 & 1; r12 = (u32)((s32)r12 >> 1);  /* 0C0C0572 shar Rn */
	r13 = r0;  /* 0C0C0574 mov Rm,Rn */
	r7 = 0x0u;  /* 0C0C0576 mov #imm,Rn */
	r13 += r12;  /* 0C0C0578 add Rm,Rn */
	W32(r14 + 0x18u, r7); UPD(0x0C0C057Cu, 5);  /* 0C0C057A mov.l Rm,@(disp,Rn) */
	r12 = 0x0u;  /* 0C0C057C mov #imm,Rn */
	IF(0x0C0C057Eu); ;  /* 0C0C057E nop */
	UPD(0x0C0C0580u, 2);
L_0C0C0580: BLKS(0x0C0C0580u);
	r3 = 0xC069B20u; UPD(0x0C0C0582u, 1);  /* 0C0C0580 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0C0582 mov Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C0C0586u, 2);  /* 0C0C0584 mov.l @(disp,pc),Rn */
	IF(0x0C0C0586u); { u32 t_ = r3; PR = 0x0C0C058Au; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0C058Au); }  /* 0C0C0586 jsr @Rn */
L_0C0C058A: BLKS(0x0C0C058Au);
	r9 = r0;  /* 0C0C058A mov Rm,Rn */
	r4 = r12;  /* 0C0C058C mov Rm,Rn */
	IF(0x0C0C058Eu); { u32 t_ = r10; PR = 0x0C0C0592u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0C0592u); }  /* 0C0C058E jsr @Rn */
L_0C0C0592: BLKS(0x0C0C0592u);
	r5 = R32(r14 + 0x14u); UPD(0x0C0C0594u, 1);  /* 0C0C0592 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0C0594 add #imm,Rn */
	r10 = r0;  /* 0C0C0596 mov Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C0C059Au, 3);  /* 0C0C0598 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0C059A mov Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0C059Eu, 2);  /* 0C0C059C mov.l Rm,@(disp,Rn) */
	r12 += 0x10u;  /* 0C0C059E add #imm,Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0C05A2u, 2);  /* 0C0C05A0 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C0C05A2 mov Rm,Rn */
	IF(0x0C0C05A4u); { u32 t_ = r8; PR = 0x0C0C05A8u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0C05A8u); }  /* 0C0C05A4 jsr @Rn */
L_0C0C05A8: BLKS(0x0C0C05A8u);
	r1 = 0xC069AF0u; UPD(0x0C0C05AAu, 1);  /* 0C0C05A8 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C0C05AA mov Rm,Rn */
	r4 = r11;  /* 0C0C05AC mov Rm,Rn */
	IF(0x0C0C05AEu); { u32 t_ = r1; PR = 0x0C0C05B2u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0C05B2u); }  /* 0C0C05AE jsr @Rn */
L_0C0C05B2: BLKS(0x0C0C05B2u);
	r7 = 0xC069AF0u; UPD(0x0C0C05B4u, 1);  /* 0C0C05B2 mov.l @(disp,pc),Rn */
	r8 -= r0;  /* 0C0C05B4 sub Rm,Rn */
	r5 = r9;  /* 0C0C05B6 mov Rm,Rn */
	W32(r15 + 0x8u, r8); UPD(0x0C0C05BAu, 3);  /* 0C0C05B8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0C05BAu); { u32 t_ = r7; PR = 0x0C0C05BEu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0C05BEu); }  /* 0C0C05BA jsr @Rn */
L_0C0C05BE: BLKS(0x0C0C05BEu);
	r6 = 0xC069B20u; UPD(0x0C0C05C0u, 1);  /* 0C0C05BE mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C0C05C0 mov Rm,Rn */
	r4 = r11;  /* 0C0C05C2 mov Rm,Rn */
	IF(0x0C0C05C4u); { u32 t_ = r6; PR = 0x0C0C05C8u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0C05C8u); }  /* 0C0C05C4 jsr @Rn */
L_0C0C05C8: BLKS(0x0C0C05C8u);
	r9 += r0;  /* 0C0C05C8 add Rm,Rn */
	W32(r15 + 0xCu, r9); UPD(0x0C0C05CCu, 2);  /* 0C0C05CA mov.l Rm,@(disp,Rn) */
	r9 = 0xC0BEB50u; UPD(0x0C0C05CEu, 1);  /* 0C0C05CC mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0C05D0u, 1);  /* 0C0C05CE mov.l @Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0C05D2u, 1);  /* 0C0C05D0 mov.l @(disp,Rm),Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C0C05D4u, 1);  /* 0C0C05D2 mov.l @(disp,Rm),Rn */
	IF(0x0C0C05D4u); { u32 t_ = r9; PR = 0x0C0C05D8u; r7 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEB50, 0x0C0BEB50u, 0x0C0C05D8u); }  /* 0C0C05D4 jsr @Rn */
L_0C0C05D8: BLKS(0x0C0C05D8u);
	r4 = R32(r14 + 0x18u); UPD(0x0C0C05DAu, 1);  /* 0C0C05D8 mov.l @(disp,Rm),Rn */
	r0 = 0x1Fu;  /* 0C0C05DA mov #imm,Rn */
	r4 += 0x1u;  /* 0C0C05DC add #imm,Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C0C05DE exts.w Rm,Rn */
	W32(r14 + 0x18u, r3); UPD(0x0C0C05E2u, 4);  /* 0C0C05E0 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x18u); UPD(0x0C0C05E4u, 1);  /* 0C0C05E2 mov.l @(disp,Rm),Rn */
	T = (s32)r1 > (s32)r0;  /* 0C0C05E4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C0580u, 4); goto L_0C0C0580; } goto L_0C0C05EA; }  /* 0C0C05E6 bf/s */
L_0C0C05EA: BLKS(0x0C0C05EAu);
	r9 = 0xC0C2360u; UPD(0x0C0C05ECu, 2);  /* 0C0C05EA mov.l @(disp,pc),Rn */
	r13 = 0xC1FFF40u; UPD(0x0C0C05EEu, 1);  /* 0C0C05EC mov.l @(disp,pc),Rn */
	IF(0x0C0C05EEu); { u32 t_ = r9; PR = 0x0C0C05F2u; r11 = 0x3Fu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0C05F2u); }  /* 0C0C05EE jsr @Rn */
L_0C0C05F2: BLKS(0x0C0C05F2u);
	r2 = R32(r14 + 0x4u); UPD(0x0C0C05F4u, 1);  /* 0C0C05F2 mov.l @(disp,Rm),Rn */
	r0 &= 0x1u;  /* 0C0C05F4 and #imm,r0 */
	r2 += r2;  /* 0C0C05F6 add Rm,Rn */
	r13 += r2;  /* 0C0C05F8 add Rm,Rn */
	IF(0x0C0C05FAu); r12 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0C05FCu, 4);  /* 0C0C05FA mov.b @(r0,Rm),Rn */
	r4 = r12 & 0xFF;  /* 0C0C05FC extu.b Rm,Rn */
	T = r4 > r11;  /* 0C0C05FE cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0C0610u, 5); goto L_0C0C0610; }  /* 0C0C0600 bt */
L_0C0C0602: BLKS(0x0C0C0602u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0C053Cu, 3); goto L_0C0C053C; }  /* 0C0C0602 bra */
L_0C0C0610: BLKS(0x0C0C0610u);
	r8 = 0xC0C2110u; UPD(0x0C0C0612u, 1);  /* 0C0C0610 mov.l @(disp,pc),Rn */
	IF(0x0C0C0612u); { u32 t_ = r8; PR = 0x0C0C0616u; IF(0x0C0C0614u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0C0616u); }  /* 0C0C0612 jsr @Rn */
L_0C0C0616: BLKS(0x0C0C0616u);
	{ IF(0x0C0C0618u); ; /* slot nop */ UPD(0x0C0C0602u, 3); goto L_0C0C0602; }  /* 0C0C0616 bra */
L_0C0C0620: BLKS(0x0C0C0620u);
	{ IF(0x0C0C0622u); ; /* slot nop */ UPD(0x0C0C0510u, 3); goto L_0C0C0510; }  /* 0C0C0620 bra */
}

void blk_f_0C0C0660(sh3_t *c)
{
	LOCALS;
L_0C0C0660: BLKS(0x0C0C0660u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0662u, 1);  /* 0C0C0660 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0664u, 1);  /* 0C0C0662 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0666u, 1);  /* 0C0C0664 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0C0666 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C066Au, 2);  /* 0C0C0668 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0C066A mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C066Eu, 2);  /* 0C0C066C mov.l Rm,@-Rn */
	r3 = 0xC0C0DF0u; UPD(0x0C0C0670u, 1);  /* 0C0C066E mov.l @(disp,pc),Rn */
	IF(0x0C0C0670u); r15 -= 4; W32(r15, PR); UPD(0x0C0C0672u, 1);  /* 0C0C0670 sts.l pr,@-Rn */
	IF(0x0C0C0672u); { u32 t_ = r3; PR = 0x0C0C0676u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0DF0, 0x0C0C0DF0u, 0x0C0C0676u); }  /* 0C0C0672 jsr @Rn */
L_0C0C0676: BLKS(0x0C0C0676u);
	r2 = 0x4Cu;  /* 0C0C0676 mov #imm,Rn */
	IF(0x0C0C0678u); MACL = r9 * r2;  /* 0C0C0678 mul.l Rm,Rn */
	r0 = 0xC286318u; UPD(0x0C0C067Cu, 4);  /* 0C0C067A mov.l @(disp,pc),Rn */
	IF(0x0C0C067Cu); r3 = MACL;  /* 0C0C067C sts macl,Rn */
	r3 += r0;  /* 0C0C067E add Rm,Rn */
	r0 = 0x8000000u; UPD(0x0C0C0682u, 3);  /* 0C0C0680 mov.l @(disp,pc),Rn */
	r1 = R32(r3); UPD(0x0C0C0684u, 1);  /* 0C0C0682 mov.l @Rm,Rn */
	T = (r1 & r0) == 0;  /* 0C0C0684 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x50u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C0692u, 4); goto L_0C0C0692; } goto L_0C0C068A; }  /* 0C0C0686 bf/s */
L_0C0C068A: BLKS(0x0C0C068Au);
	r0 = R32(r3 + 0x8u); UPD(0x0C0C068Cu, 2);  /* 0C0C068A mov.l @(disp,Rm),Rn */
	r4 = 0xFFFFFFEBu;  /* 0C0C068C mov #imm,Rn */
	IF(0x0C0C068Eu); ARG0(0x404Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0C068E shad Rm,Rn */
	r0 &= 0x7Fu;  /* 0C0C0690 and #imm,r0 */
	UPD(0x0C0C0692u, 3);
L_0C0C0692: BLKS(0x0C0C0692u);
	r6 = 0xC205AE8u; UPD(0x0C0C0694u, 1);  /* 0C0C0692 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0C0694 add Rm,Rn */
	r7 = 0xC3C4048u; UPD(0x0C0C0698u, 2);  /* 0C0C0696 mov.l @(disp,pc),Rn */
	IF(0x0C0C0698u); r5 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C0C069Au, 1);  /* 0C0C0698 mov.w @(r0,Rm),Rn */
	r2 = (u32)(s32)(s16)R16(r7); UPD(0x0C0C069Cu, 1);  /* 0C0C069A mov.w @Rm,Rn */
	r3 = 0x160u; UPD(0x0C0C069Eu, 1);  /* 0C0C069C mov.w @(disp,pc),Rn */
	r5 -= r2;  /* 0C0C069E sub Rm,Rn */
	r5 += r3;  /* 0C0C06A0 add Rm,Rn */
	r6 = (u32)(s32)(s16)r5;  /* 0C0C06A2 exts.w Rm,Rn */
	IF(0x0C0C06A4u); T = (s32)r6 >= 0;  /* 0C0C06A4 cmp/pz Rn */
	if (T) { UPD(0x0C0C06AAu, 7); goto L_0C0C06AA; }  /* 0C0C06A6 bt */
L_0C0C06A8: BLKS(0x0C0C06A8u);
	r6 = 0x0u;  /* 0C0C06A8 mov #imm,Rn */
	UPD(0x0C0C06AAu, 1);
L_0C0C06AA: BLKS(0x0C0C06AAu);
	r8 = 0xC205BE8u; UPD(0x0C0C06ACu, 1);  /* 0C0C06AA mov.l @(disp,pc),Rn */
	IF(0x0C0C06ACu); r10 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0C06AEu, 1);  /* 0C0C06AC mov.w @(r0,Rm),Rn */
	r10 -= r2;  /* 0C0C06AE sub Rm,Rn */
	r10 += r3;  /* 0C0C06B0 add Rm,Rn */
	r8 = (u32)(s32)(s16)r10;  /* 0C0C06B2 exts.w Rm,Rn */
	IF(0x0C0C06B4u); T = (s32)r8 >= 0;  /* 0C0C06B4 cmp/pz Rn */
	if (!T) { UPD(0x0C0C07B0u, 7); goto L_0C0C07B0; }  /* 0C0C06B6 bf */
L_0C0C06B8: BLKS(0x0C0C06B8u);
	T = (s32)r8 > (s32)r6;  /* 0C0C06B8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0C0798u, 4); goto L_0C0C0798; }  /* 0C0C06BA bf */
L_0C0C06BC: BLKS(0x0C0C06BCu);
	r10 = 0x4Cu;  /* 0C0C06BC mov #imm,Rn */
	IF(0x0C0C06BEu); MACL = r9 * r10;  /* 0C0C06BE mul.l Rm,Rn */
	r4 = 0xC286318u; UPD(0x0C0C06C2u, 4);  /* 0C0C06C0 mov.l @(disp,pc),Rn */
	T = (s32)r6 >= (s32)r8;  /* 0C0C06C2 cmp/ge Rm,Rn */
	IF(0x0C0C06C4u); r10 = MACL;  /* 0C0C06C4 sts macl,Rn */
	r10 += r4;  /* 0C0C06C6 add Rm,Rn */
	r4 = R32(r10); UPD(0x0C0C06CAu, 4);  /* 0C0C06C8 mov.l @Rm,Rn */
	r10 += 0x3Cu;  /* 0C0C06CA add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r5 = v_; } UPD(0x0C0C06CEu, 2);  /* 0C0C06CC mov.b @Rm+,Rn */
	r3 = 0xC3C415Cu; UPD(0x0C0C06D0u, 1);  /* 0C0C06CE mov.l @(disp,pc),Rn */
	r2 = r5 & 0xFF;  /* 0C0C06D0 extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r11 = v_; } UPD(0x0C0C06D4u, 2);  /* 0C0C06D2 mov.b @Rm+,Rn */
	IF(0x0C0C06D4u); r2 <<= 16;  /* 0C0C06D4 shll16 Rn */
	r0 = 0x2000000u; UPD(0x0C0C06D8u, 2);  /* 0C0C06D6 mov.l @(disp,pc),Rn */
	r7 = R32(r3); UPD(0x0C0C06DAu, 1);  /* 0C0C06D8 mov.l @Rm,Rn */
	r4 &= r0;  /* 0C0C06DA and Rm,Rn */
	r3 = r11 & 0xFF;  /* 0C0C06DC extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r0 = v_; } UPD(0x0C0C06E0u, 3);  /* 0C0C06DE mov.b @Rm+,Rn */
	r4 |= r2;  /* 0C0C06E0 or Rm,Rn */
	IF(0x0C0C06E2u); r3 <<= 8;  /* 0C0C06E2 shll8 Rn */
	r11 = 0xC3C43C4u; UPD(0x0C0C06E6u, 3);  /* 0C0C06E4 mov.l @(disp,pc),Rn */
	r4 |= r3;  /* 0C0C06E6 or Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r1 = v_; } UPD(0x0C0C06EAu, 2);  /* 0C0C06E8 mov.b @Rm+,Rn */
	r5 = r0 & 0xFF;  /* 0C0C06EA extu.b Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C0C06EEu, 2);  /* 0C0C06EC mov.b @Rm,Rn */
	r4 |= r5;  /* 0C0C06EE or Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C0C06F0 extu.b Rm,Rn */
	r5 = r3 & 0xFF;  /* 0C0C06F2 extu.b Rm,Rn */
	r11 = 0xC29D736u; UPD(0x0C0C06F6u, 4);  /* 0C0C06F4 mov.l @(disp,pc),Rn */
	IF(0x0C0C06F6u); MACL = r0 * r5;  /* 0C0C06F6 mul.l Rm,Rn */
	r2 = 0x11000000u; UPD(0x0C0C06FAu, 3);  /* 0C0C06F8 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r1 = v_; } UPD(0x0C0C06FCu, 1);  /* 0C0C06FA mov.b @Rm+,Rn */
	r4 |= r2;  /* 0C0C06FC or Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C0C0700u, 2);  /* 0C0C06FE mov.b @Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C0C0700 extu.b Rm,Rn */
	r11 = r3 & 0xFF;  /* 0C0C0702 extu.b Rm,Rn */
	IF(0x0C0C0704u); r2 = MACL;  /* 0C0C0704 sts macl,Rn */
	IF(0x0C0C0706u); MACL = r0 * r11;  /* 0C0C0706 mul.l Rm,Rn */
	r2 += r2;  /* 0C0C0708 add Rm,Rn */
	IF(0x0C0C070Au); r2 >>= 8;  /* 0C0C070A shlr8 Rn */
	IF(0x0C0C070Cu); r3 = MACL;  /* 0C0C070C sts macl,Rn */
	r0 = 0xC3C4171u; UPD(0x0C0C0710u, 9);  /* 0C0C070E mov.l @(disp,pc),Rn */
	r3 += r3;  /* 0C0C0710 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r0); UPD(0x0C0C0714u, 2);  /* 0C0C0712 mov.b @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C0C0714 extu.b Rm,Rn */
	IF(0x0C0C0716u); r3 >>= 8;  /* 0C0C0716 shlr8 Rn */
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C0C071Au, 3);  /* 0C0C0718 mov.b @Rm,Rn */
	r2 = r3 & 0xFF;  /* 0C0C071A extu.b Rm,Rn */
	r10 = r1 & 0xFF;  /* 0C0C071C extu.b Rm,Rn */
	r3 = r11 & 0xFF;  /* 0C0C071E extu.b Rm,Rn */
	IF(0x0C0C0720u); MACL = r10 * r3;  /* 0C0C0720 mul.l Rm,Rn */
	r1 = 0xFFFFFFF9u;  /* 0C0C0722 mov #imm,Rn */
	IF(0x0C0C0724u); r5 <<= 16;  /* 0C0C0724 shll16 Rn */
	IF(0x0C0C0726u); r0 = MACL;  /* 0C0C0726 sts macl,Rn */
	IF(0x0C0C0728u); ARG0(0x401Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0C0728 shad Rm,Rn */
	IF(0x0C0C072Au); r2 <<= 8;  /* 0C0C072A shll8 Rn */
	r5 += r2;  /* 0C0C072C add Rm,Rn */
	r11 = r0 & 0xFF;  /* 0C0C072E extu.b Rm,Rn */
	{ u32 c_ = T; r5 += r11; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0C0794u, 15); goto L_0C0C0794; } goto L_0C0C0734; }  /* 0C0C0730 bt/s */
L_0C0C0734: BLKS(0x0C0C0734u);
	r2 = 0x140u; UPD(0x0C0C0736u, 2);  /* 0C0C0734 mov.w @(disp,pc),Rn */
	IF(0x0C0C0736u); MACL = r9 * r2; UPD(0x0C0C0738u, 2);  /* 0C0C0736 mul.l Rm,Rn */
	r11 = 0xC232318u; UPD(0x0C0C073Au, 1);  /* 0C0C0738 mov.l @(disp,pc),Rn */
	r10 = 0xC232314u; UPD(0x0C0C073Cu, 1);  /* 0C0C073A mov.l @(disp,pc),Rn */
	IF(0x0C0C073Cu); r9 = MACL;  /* 0C0C073C sts macl,Rn */
	IF(0x0C0C073Eu); ;  /* 0C0C073E nop */
	UPD(0x0C0C0740u, 2);
L_0C0C0740: BLKS(0x0C0C0740u);
	r0 = r6;  /* 0C0C0740 mov Rm,Rn */
	r0 &= 0x3Fu;  /* 0C0C0742 and #imm,r0 */
	r0 += r9;  /* 0C0C0744 add Rm,Rn */
	r0 += r0;  /* 0C0C0746 add Rm,Rn */
	IF(0x0C0C0748u); r3 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C0C074Au, 5);  /* 0C0C0748 mov.w @(r0,Rm),Rn */
	r0 = 0xFFE0u; UPD(0x0C0C074Cu, 1);  /* 0C0C074A mov.l @(disp,pc),Rn */
	r2 = 0x3E0u; UPD(0x0C0C074Eu, 1);  /* 0C0C074C mov.w @(disp,pc),Rn */
	r0 &= r3;  /* 0C0C074E and Rm,Rn */
	r0 += r2;  /* 0C0C0750 add Rm,Rn */
	r2 = 0x88u; UPD(0x0C0C0754u, 3);  /* 0C0C0752 mov.w @(disp,pc),Rn */
	IF(0x0C0C0754u); r0 <<= 16;  /* 0C0C0754 shll16 Rn */
	W32(r7, r4); UPD(0x0C0C0758u, 2);  /* 0C0C0756 mov.l Rm,@Rn */
	r2 += r6;  /* 0C0C0758 add Rm,Rn */
	r0 |= r2;  /* 0C0C075A or Rm,Rn */
	r7 += 0x4u;  /* 0C0C075C add #imm,Rn */
	W32(r7, r0); UPD(0x0C0C0760u, 4);  /* 0C0C075E mov.l Rm,@Rn */
	r0 = r3;  /* 0C0C0760 mov Rm,Rn */
	r2 = R32(r10); UPD(0x0C0C0764u, 2);  /* 0C0C0762 mov.l @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0C0764 and #imm,r0 */
	r1 = 0xC29D72Cu; UPD(0x0C0C0768u, 2);  /* 0C0C0766 mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C0C0768 sub Rm,Rn */
	r0 = R32(r1); UPD(0x0C0C076Cu, 2);  /* 0C0C076A mov.l @Rm,Rn */
	IF(0x0C0C076Cu); r2 <<= 16;  /* 0C0C076C shll16 Rn */
	r0 += r6;  /* 0C0C076E add Rm,Rn */
	r2 |= r0;  /* 0C0C0770 or Rm,Rn */
	r7 += 0x4u;  /* 0C0C0772 add #imm,Rn */
	W32(r7, r2); UPD(0x0C0C0776u, 5);  /* 0C0C0774 mov.l Rm,@Rn */
	r0 = 0x1Cu;  /* 0C0C0776 mov #imm,Rn */
	r2 = 0x143u; UPD(0x0C0C077Au, 2);  /* 0C0C0778 mov.w @(disp,pc),Rn */
	r3 &= r0;  /* 0C0C077A and Rm,Rn */
	r3 += r2;  /* 0C0C077C add Rm,Rn */
	r7 += 0x4u;  /* 0C0C077E add #imm,Rn */
	IF(0x0C0C0780u); r3 <<= 16;  /* 0C0C0780 shll16 Rn */
	W32(r7, r3); UPD(0x0C0C0784u, 5);  /* 0C0C0782 mov.l Rm,@Rn */
	r0 = r6;  /* 0C0C0784 mov Rm,Rn */
	r7 += 0x4u;  /* 0C0C0786 add #imm,Rn */
	W32(r7, r5); UPD(0x0C0C078Au, 3);  /* 0C0C0788 mov.l Rm,@Rn */
	r0 += 0x1u;  /* 0C0C078A add #imm,Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C0C078C exts.w Rm,Rn */
	T = (s32)r6 >= (s32)r8;  /* 0C0C078E cmp/ge Rm,Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C0740u, 6); goto L_0C0C0740; } UPD(0x0C0C0794u, 1); goto L_0C0C0794; }  /* 0C0C0790 bf/s */
L_0C0C0794: BLKS(0x0C0C0794u);
	r9 = 0xC3C415Cu; UPD(0x0C0C0796u, 1);  /* 0C0C0794 mov.l @(disp,pc),Rn */
	W32(r9, r7); UPD(0x0C0C0798u, 1);  /* 0C0C0796 mov.l Rm,@Rn */
L_0C0C0798: BLKS(0x0C0C0798u);
	r15 = r14;  /* 0C0C0798 mov Rm,Rn */
	IF(0x0C0C079Au); PR = R32(r15); r15 += 4; UPD(0x0C0C079Cu, 2);  /* 0C0C079A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C079Eu, 1);  /* 0C0C079C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C07A0u, 1);  /* 0C0C079E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C07A2u, 1);  /* 0C0C07A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C07A4u, 1);  /* 0C0C07A2 mov.l @Rm+,Rn */
	IF(0x0C0C07A4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C07A4 rts */
L_0C0C07B0: BLKS(0x0C0C07B0u);
	{ r8 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0C06B8u, 3); goto L_0C0C06B8; }  /* 0C0C07B0 bra */
}

/* FUN_0c0c0810 */
void blk_f_0C0C0810(sh3_t *c)
{
	LOCALS;
L_0C0C0810: BLKS(0x0C0C0810u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0812u, 1);  /* 0C0C0810 mov.l Rm,@-Rn */
	r6 = 0xFFFFFFFBu;  /* 0C0C0812 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0816u, 2);  /* 0C0C0814 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0C0816 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C081Au, 2);  /* 0C0C0818 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C081Cu, 1);  /* 0C0C081A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C081Eu, 1);  /* 0C0C081C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0820u, 1);  /* 0C0C081E mov.l Rm,@-Rn */
	r12 = 0x4Cu;  /* 0C0C0820 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0824u, 2);  /* 0C0C0822 mov.l Rm,@-Rn */
	IF(0x0C0C0824u); MACL = r8 * r12;  /* 0C0C0824 mul.l Rm,Rn */
	r5 = 0xC3C415Cu; UPD(0x0C0C0828u, 3);  /* 0C0C0826 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0C0828 add #imm,Rn */
	r7 = R32(r5); UPD(0x0C0C082Cu, 2);  /* 0C0C082A mov.l @Rm,Rn */
	IF(0x0C0C082Cu); r11 = MACL;  /* 0C0C082C sts macl,Rn */
	r5 = 0xC286318u; UPD(0x0C0C0830u, 2);  /* 0C0C082E mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0C0830 mov Rm,Rn */
	r11 += r5;  /* 0C0C0832 add Rm,Rn */
	r10 = R32(r11 + 0x8u); UPD(0x0C0C0836u, 3);  /* 0C0C0834 mov.l @(disp,Rm),Rn */
	r13 = r8;  /* 0C0C0836 mov Rm,Rn */
	r9 = (r10 >> 16) | (r10 << 16);  /* 0C0C0838 swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r9;  /* 0C0C083A exts.w Rm,Rn */
	r4 = r0;  /* 0C0C083C mov Rm,Rn */
	IF(0x0C0C083Eu); ARG0(0x446Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0C083E shad Rm,Rn */
	W32(r14, r4); UPD(0x0C0C0842u, 6);  /* 0C0C0840 mov.l Rm,@Rn */
	r0 &= 0x1Fu;  /* 0C0C0842 and #imm,r0 */
	r1 = 0xC0000001u; UPD(0x0C0C0846u, 2);  /* 0C0C0844 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0C0846 mov #imm,Rn */
	r3 = 0xC2B0394u; UPD(0x0C0C084Au, 2);  /* 0C0C0848 mov.l @(disp,pc),Rn */
	r10 = r5;  /* 0C0C084A mov Rm,Rn */
	r4 = 0x3DBu; UPD(0x0C0C084Eu, 2);  /* 0C0C084C mov.w @(disp,pc),Rn */
	W32(r3, r1); UPD(0x0C0C0850u, 1);  /* 0C0C084E mov.l Rm,@Rn */
	r4 -= r0;  /* 0C0C0850 sub Rm,Rn */
	r2 = 0xC0000000u; UPD(0x0C0C0854u, 2);  /* 0C0C0852 mov.l @(disp,pc),Rn */
	r0 = 0x4u;  /* 0C0C0854 mov #imm,Rn */
	W32(r7, r2); UPD(0x0C0C0858u, 2);  /* 0C0C0856 mov.l Rm,@Rn */
	IF(0x0C0C0858u); ARG0(0x4D0Du); { s32 s_ = (s32)r0; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C0C0858 shld Rm,Rn */
	r11 = 0xC2398A0u; UPD(0x0C0C085Cu, 2);  /* 0C0C085A mov.l @(disp,pc),Rn */
	r7 += 0x4u;  /* 0C0C085C add #imm,Rn */
	r9 = 0x10000000u; UPD(0x0C0C0860u, 2);  /* 0C0C085E mov.l @(disp,pc),Rn */
	IF(0x0C0C0860u); r4 <<= 16;  /* 0C0C0860 shll16 Rn */
	IF(0x0C0C0862u); ;  /* 0C0C0862 nop */
	UPD(0x0C0C0864u, 2);
L_0C0C0864: BLKS(0x0C0C0864u);
	r6 = R32(r14); UPD(0x0C0C0866u, 1);  /* 0C0C0864 mov.l @Rm,Rn */
	r3 = 0xFu;  /* 0C0C0866 mov #imm,Rn */
	r6 += r12;  /* 0C0C0868 add Rm,Rn */
	r6 &= r3;  /* 0C0C086A and Rm,Rn */
	r6 += r13;  /* 0C0C086C add Rm,Rn */
	r0 = 0x4u;  /* 0C0C086E mov #imm,Rn */
	IF(0x0C0C0870u); ARG0(0x460Du); { s32 s_ = (s32)r0; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0C0870 shld Rm,Rn */
	r5 = 0x0u;  /* 0C0C0872 mov #imm,Rn */
	r3 = 0x60u;  /* 0C0C0874 mov #imm,Rn */
	IF(0x0C0C0876u); ;  /* 0C0C0876 nop */
	UPD(0x0C0C0878u, 9);
L_0C0C0878: BLKS(0x0C0C0878u);
	r0 = r5;  /* 0C0C0878 mov Rm,Rn */
	r2 = 0x4Cu;  /* 0C0C087A mov #imm,Rn */
	IF(0x0C0C087Cu); MACL = r8 * r2;  /* 0C0C087C mul.l Rm,Rn */
	r0 &= 0xFu;  /* 0C0C087E and #imm,r0 */
	W32(r7, r9); UPD(0x0C0C0882u, 6);  /* 0C0C0880 mov.l Rm,@Rn */
	r0 += r6;  /* 0C0C0882 add Rm,Rn */
	IF(0x0C0C0884u); r0 <<= 2;  /* 0C0C0884 shll2 Rn */
	IF(0x0C0C0886u); r2 = R32(r0 + r11); UPD(0x0C0C0888u, 3);  /* 0C0C0886 mov.l @(r0,Rm),Rn */
	IF(0x0C0C0888u); r1 = MACL;  /* 0C0C0888 sts macl,Rn */
	r1 += r10;  /* 0C0C088A add Rm,Rn */
	r0 = R32(r1 + 0x24u); UPD(0x0C0C088Eu, 3);  /* 0C0C088C mov.l @(disp,Rm),Rn */
	r7 += 0x4u;  /* 0C0C088E add #imm,Rn */
	r2 += r0;  /* 0C0C0890 add Rm,Rn */
	W32(r7, r2); UPD(0x0C0C0894u, 3);  /* 0C0C0892 mov.l Rm,@Rn */
	r0 = r4;  /* 0C0C0894 mov Rm,Rn */
	r0 |= r3;  /* 0C0C0896 or Rm,Rn */
	r7 += 0x4u;  /* 0C0C0898 add #imm,Rn */
	W32(r7, r0); UPD(0x0C0C089Cu, 4);  /* 0C0C089A mov.l Rm,@Rn */
	r5 += 0x1u;  /* 0C0C089C add #imm,Rn */
	r2 = 0x1F001Fu; UPD(0x0C0C08A0u, 2);  /* 0C0C089E mov.l @(disp,pc),Rn */
	r7 += 0x4u;  /* 0C0C08A0 add #imm,Rn */
	W32(r7, r2); UPD(0x0C0C08A4u, 2);  /* 0C0C08A2 mov.l Rm,@Rn */
	r3 += 0x20u;  /* 0C0C08A4 add #imm,Rn */
	r0 = 0x808080u; UPD(0x0C0C08A8u, 2);  /* 0C0C08A6 mov.l @(disp,pc),Rn */
	r7 += 0x4u;  /* 0C0C08A8 add #imm,Rn */
	W32(r7, r0); UPD(0x0C0C08ACu, 2);  /* 0C0C08AA mov.l Rm,@Rn */
	r2 = 0xAu;  /* 0C0C08AC mov #imm,Rn */
	T = (s32)r5 > (s32)r2;  /* 0C0C08AE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C0878u, 5); goto L_0C0C0878; } goto L_0C0C08B4; }  /* 0C0C08B0 bf/s */
L_0C0C08B4: BLKS(0x0C0C08B4u);
	r5 = 0x200000u; UPD(0x0C0C08B6u, 2);  /* 0C0C08B4 mov.l @(disp,pc),Rn */
	r12 += 0x1u;  /* 0C0C08B6 add #imm,Rn */
	r6 = 0xBu;  /* 0C0C08B8 mov #imm,Rn */
	T = (s32)r12 > (s32)r6;  /* 0C0C08BA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += r5; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0C0864u, 6); goto L_0C0C0864; } goto L_0C0C08C0; }  /* 0C0C08BC bf/s */
L_0C0C08C0: BLKS(0x0C0C08C0u);
	r13 = 0xC0000001u; UPD(0x0C0C08C2u, 2);  /* 0C0C08C0 mov.l @(disp,pc),Rn */
	r14 += 0x4u;  /* 0C0C08C2 add #imm,Rn */
	W32(r7, r13); UPD(0x0C0C08C6u, 2);  /* 0C0C08C4 mov.l Rm,@Rn */
	r8 = 0xC3C415Cu; UPD(0x0C0C08C8u, 1);  /* 0C0C08C6 mov.l @(disp,pc),Rn */
	r7 += 0x4u;  /* 0C0C08C8 add #imm,Rn */
	W32(r8, r7); UPD(0x0C0C08CCu, 2);  /* 0C0C08CA mov.l Rm,@Rn */
	r15 = r14;  /* 0C0C08CC mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C08D0u, 2);  /* 0C0C08CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0C08D2u, 1);  /* 0C0C08D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C08D4u, 1);  /* 0C0C08D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C08D6u, 1);  /* 0C0C08D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C08D8u, 1);  /* 0C0C08D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C08DAu, 1);  /* 0C0C08D8 mov.l @Rm+,Rn */
	IF(0x0C0C08DAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C08DA rts */
}

/* FUN_0c0c0910 */
void blk_f_0C0C0910(sh3_t *c)
{
	LOCALS;
L_0C0C0910: BLKS(0x0C0C0910u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0912u, 1);  /* 0C0C0910 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0914u, 1);  /* 0C0C0912 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0916u, 1);  /* 0C0C0914 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0C0916 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C091Au, 2);  /* 0C0C0918 mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C0C091A mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C091Eu, 2);  /* 0C0C091C mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C0C091E mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0922u, 2);  /* 0C0C0920 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0924u, 1);  /* 0C0C0922 mov.l Rm,@-Rn */
	r12 = 0xC286318u; UPD(0x0C0C0926u, 1);  /* 0C0C0924 mov.l @(disp,pc),Rn */
	IF(0x0C0C0926u); r15 -= 4; W32(r15, PR); UPD(0x0C0C0928u, 1);  /* 0C0C0926 sts.l pr,@-Rn */
	r13 = 0xC069A20u; UPD(0x0C0C092Au, 1);  /* 0C0C0928 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0C092A mov Rm,Rn */
	UPD(0x0C0C092Cu, 1);
L_0C0C092C: BLKS(0x0C0C092Cu);
	r8 = r10;  /* 0C0C092C mov Rm,Rn */
	r8 += r12;  /* 0C0C092E add Rm,Rn */
	r0 = R32(r8); UPD(0x0C0C0932u, 3);  /* 0C0C0930 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0C0932 tst Rm,Rn */
	if (!T) { UPD(0x0C0C0A00u, 4); goto L_0C0C0A00; }  /* 0C0C0934 bf */
L_0C0C0936: BLKS(0x0C0C0936u);
	r3 = r11;  /* 0C0C0936 mov Rm,Rn */
	UPD(0x0C0C0938u, 1);
L_0C0C0938: BLKS(0x0C0C0938u);
	r3 += 0x1u;  /* 0C0C0938 add #imm,Rn */
	r11 = (u32)(s32)(s8)r3;  /* 0C0C093A exts.b Rm,Rn */
	r2 = 0x7u;  /* 0C0C093C mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0C0940u, 4);  /* 0C0C093E mov.l Rm,@Rn */
	r10 += 0x4Cu;  /* 0C0C0940 add #imm,Rn */
	W32(r8 + 0xCu, r9); UPD(0x0C0C0944u, 2);  /* 0C0C0942 mov.l Rm,@(disp,Rn) */
	T = (s32)r11 > (s32)r2;  /* 0C0C0944 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0C092Cu, 4); goto L_0C0C092C; } UPD(0x0C0C094Au, 1); goto L_0C0C094A; }  /* 0C0C0946 bf/s */
L_0C0C094A: BLKS(0x0C0C094Au);
	r12 = 0xC23E0A6u; UPD(0x0C0C094Cu, 1);  /* 0C0C094A mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C0C094C mov #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C0C0950u, 2);  /* 0C0C094E mov.b @Rm,Rn */
	r10 = 0xC2065A0u; UPD(0x0C0C0952u, 1);  /* 0C0C0950 mov.l @(disp,pc),Rn */
	r0 = r7 & 0xFF;  /* 0C0C0952 extu.b Rm,Rn */
	IF(0x0C0C0954u); r0 <<= 2;  /* 0C0C0954 shll2 Rn */
	IF(0x0C0C0956u); r7 = R32(r0 + r10); UPD(0x0C0C0958u, 3);  /* 0C0C0956 mov.l @(r0,Rm),Rn */
	{ u32 v_ = R32(r7); r7 += 4; r9 = v_; } UPD(0x0C0C095Au, 1);  /* 0C0C0958 mov.l @Rm+,Rn */
	r6 = 0xC29D724u; UPD(0x0C0C095Cu, 1);  /* 0C0C095A mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r7); r7 += 4; r1 = v_; } UPD(0x0C0C095Eu, 1);  /* 0C0C095C mov.l @Rm+,Rn */
	W32(r6, r1); UPD(0x0C0C0960u, 1);  /* 0C0C095E mov.l Rm,@Rn */
	r8 = 0xC2ABAA4u; UPD(0x0C0C0962u, 1);  /* 0C0C0960 mov.l @(disp,pc),Rn */
	r5 = 0xC234C00u; UPD(0x0C0C0964u, 1);  /* 0C0C0962 mov.l @(disp,pc),Rn */
	r4 = 0xC2860F2u; UPD(0x0C0C0966u, 1);  /* 0C0C0964 mov.l @(disp,pc),Rn */
	r6 = 0xC286358u; UPD(0x0C0C0968u, 1);  /* 0C0C0966 mov.l @(disp,pc),Rn */
	W32(r8, r9); UPD(0x0C0C096Au, 1);  /* 0C0C0968 mov.l Rm,@Rn */
	r3 = r6;  /* 0C0C096A mov Rm,Rn */
	W32(r5, r11); UPD(0x0C0C096Eu, 2);  /* 0C0C096C mov.l Rm,@Rn */
	r3 += 0xFFFFFFC0u;  /* 0C0C096E add #imm,Rn */
	W8(r4, r11); UPD(0x0C0C0972u, 2);  /* 0C0C0970 mov.b Rm,@Rn */
	IF(0x0C0C0972u); ;  /* 0C0C0972 nop */
	UPD(0x0C0C0974u, 1);
L_0C0C0974: BLKS(0x0C0C0974u);
	r2 = R32(r7); UPD(0x0C0C0976u, 1);  /* 0C0C0974 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0C0976 tst Rm,Rn */
	{ u32 c_ = T; r5 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C09DCu, 4); goto L_0C0C09DC; } goto L_0C0C097C; }  /* 0C0C0978 bt/s */
L_0C0C097C: BLKS(0x0C0C097Cu);
	r4 = R32(r2); UPD(0x0C0C097Eu, 2);  /* 0C0C097C mov.l @Rm,Rn */
	r7 += 0x4u;  /* 0C0C097E add #imm,Rn */
	W32(r3, r4); UPD(0x0C0C0982u, 2);  /* 0C0C0980 mov.l Rm,@Rn */
	r0 = R32(r2 + 0x4u); UPD(0x0C0C0984u, 1);  /* 0C0C0982 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x4u, r0); UPD(0x0C0C0986u, 1);  /* 0C0C0984 mov.l Rm,@(disp,Rn) */
	r13 = R32(r2 + 0x14u); UPD(0x0C0C0988u, 1);  /* 0C0C0986 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x28u, r13); UPD(0x0C0C098Au, 1);  /* 0C0C0988 mov.l Rm,@(disp,Rn) */
	r12 = R32(r2 + 0x18u); UPD(0x0C0C098Cu, 1);  /* 0C0C098A mov.l @(disp,Rm),Rn */
	W32(r3 + 0x2Cu, r12); UPD(0x0C0C098Eu, 1);  /* 0C0C098C mov.l Rm,@(disp,Rn) */
	r10 = R32(r2 + 0x1Cu); UPD(0x0C0C0990u, 1);  /* 0C0C098E mov.l @(disp,Rm),Rn */
	W32(r3 + 0x30u, r10); UPD(0x0C0C0992u, 1);  /* 0C0C0990 mov.l Rm,@(disp,Rn) */
	r9 = R32(r2 + 0x20u); UPD(0x0C0C0994u, 1);  /* 0C0C0992 mov.l @(disp,Rm),Rn */
	r8 = R32(r2 + 0x24u); UPD(0x0C0C0996u, 1);  /* 0C0C0994 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x38u, r8); UPD(0x0C0C0998u, 1);  /* 0C0C0996 mov.l Rm,@(disp,Rn) */
	r5 = R32(r2 + 0xCu); UPD(0x0C0C099Au, 1);  /* 0C0C0998 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x10u, r5); UPD(0x0C0C099Cu, 1);  /* 0C0C099A mov.l Rm,@(disp,Rn) */
	r4 = R32(r2 + 0x10u); UPD(0x0C0C099Eu, 1);  /* 0C0C099C mov.l @(disp,Rm),Rn */
	r2 += 0x8u;  /* 0C0C099E add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0C09A2u, 2);  /* 0C0C09A0 mov.w @Rm,Rn */
	IF(0x0C0C09A2u); r0 <<= 16;  /* 0C0C09A2 shll16 Rn */
	W32(r3 + 0x34u, r9); UPD(0x0C0C09A6u, 2);  /* 0C0C09A4 mov.l Rm,@(disp,Rn) */
	r2 += 0x20u;  /* 0C0C09A6 add #imm,Rn */
	W32(r3 + 0x14u, r4); UPD(0x0C0C09AAu, 2);  /* 0C0C09A8 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x20u, r0); UPD(0x0C0C09ACu, 1);  /* 0C0C09AA mov.l Rm,@(disp,Rn) */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r13 = v_; } UPD(0x0C0C09AEu, 1);  /* 0C0C09AC mov.b @Rm+,Rn */
	r3 += 0x42u;  /* 0C0C09AE add #imm,Rn */
	W8(r3, r13); UPD(0x0C0C09B2u, 2);  /* 0C0C09B0 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r12 = v_; } UPD(0x0C0C09B4u, 1);  /* 0C0C09B2 mov.b @Rm+,Rn */
	r3 += 0xFFFFFFFAu;  /* 0C0C09B4 add #imm,Rn */
	W8(r3, r12); UPD(0x0C0C09B8u, 2);  /* 0C0C09B6 mov.b Rm,@Rn */
	r13 = 0x0u;  /* 0C0C09B8 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r10 = v_; } UPD(0x0C0C09BCu, 2);  /* 0C0C09BA mov.b @Rm+,Rn */
	r3 += 0x1u;  /* 0C0C09BC add #imm,Rn */
	W8(r3, r10); UPD(0x0C0C09C0u, 2);  /* 0C0C09BE mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r9 = v_; } UPD(0x0C0C09C2u, 1);  /* 0C0C09C0 mov.b @Rm+,Rn */
	r3 += 0x1u;  /* 0C0C09C2 add #imm,Rn */
	W8(r3, r9); UPD(0x0C0C09C6u, 2);  /* 0C0C09C4 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r8 = v_; } UPD(0x0C0C09C8u, 1);  /* 0C0C09C6 mov.b @Rm+,Rn */
	r3 += 0x1u;  /* 0C0C09C8 add #imm,Rn */
	W8(r3, r8); UPD(0x0C0C09CCu, 2);  /* 0C0C09CA mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r5 = v_; } UPD(0x0C0C09CEu, 1);  /* 0C0C09CC mov.b @Rm+,Rn */
	r3 += 0x2u;  /* 0C0C09CE add #imm,Rn */
	W8(r6, r5); UPD(0x0C0C09D2u, 2);  /* 0C0C09D0 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0C09D4u, 1);  /* 0C0C09D2 mov.b @Rm,Rn */
	W8(r3, r0); UPD(0x0C0C09D6u, 1);  /* 0C0C09D4 mov.b Rm,@Rn */
	W32(r6 + 0x8u, r13); UPD(0x0C0C09D8u, 1);  /* 0C0C09D6 mov.l Rm,@(disp,Rn) */
	r3 += 0xFFFFFFBFu;  /* 0C0C09D8 add #imm,Rn */
	r5 = r11;  /* 0C0C09DA mov Rm,Rn */
	UPD(0x0C0C09DCu, 2);
L_0C0C09DC: BLKS(0x0C0C09DCu);
	r5 += 0x1u;  /* 0C0C09DC add #imm,Rn */
	r11 = (u32)(s32)(s8)r5;  /* 0C0C09DE exts.b Rm,Rn */
	r2 = 0x7u;  /* 0C0C09E0 mov #imm,Rn */
	r6 += 0x4Cu;  /* 0C0C09E2 add #imm,Rn */
	T = (s32)r11 > (s32)r2;  /* 0C0C09E4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C0974u, 8); goto L_0C0C0974; } goto L_0C0C09EA; }  /* 0C0C09E6 bf/s */
L_0C0C09EA: BLKS(0x0C0C09EAu);
	r3 = 0xC069880u; UPD(0x0C0C09ECu, 2);  /* 0C0C09EA mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0C09EC mov Rm,Rn */
	IF(0x0C0C09EEu); PR = R32(r15); r15 += 4; UPD(0x0C0C09F0u, 2);  /* 0C0C09EE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C09F2u, 1);  /* 0C0C09F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0C09F4u, 1);  /* 0C0C09F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C09F6u, 1);  /* 0C0C09F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C09F8u, 1);  /* 0C0C09F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C09FAu, 1);  /* 0C0C09F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C09FCu, 1);  /* 0C0C09FA mov.l @Rm+,Rn */
	IF(0x0C0C09FCu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C069880u: TAIL(blk_f_0C069880); default: JUMPD(tv_); } }  /* 0C0C09FC jmp @Rn */
L_0C0C0A00: BLKS(0x0C0C0A00u);
	r4 = r11;  /* 0C0C0A00 mov Rm,Rn */
	r4 += 0x8u;  /* 0C0C0A02 add #imm,Rn */
	IF(0x0C0C0A04u); { u32 t_ = r13; PR = 0x0C0C0A08u; r5 = R32(r8 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069A20, 0x0C069A20u, 0x0C0C0A08u); }  /* 0C0C0A04 jsr @Rn */
L_0C0C0A08: BLKS(0x0C0C0A08u);
	r0 = 0xC0C13C0u; UPD(0x0C0C0A0Au, 1);  /* 0C0C0A08 mov.l @(disp,pc),Rn */
	IF(0x0C0C0A0Au); { u32 t_ = r0; PR = 0x0C0C0A0Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C13C0, 0x0C0C13C0u, 0x0C0C0A0Eu); }  /* 0C0C0A0A jsr @Rn */
L_0C0C0A0E: BLKS(0x0C0C0A0Eu);
	{ r3 = r11; /* slot mov Rm,Rn */ UPD(0x0C0C0938u, 3); goto L_0C0C0938; }  /* 0C0C0A0E bra */
}

/* FUN_0c0c0a40 */
void blk_f_0C0C0A40(sh3_t *c)
{
	LOCALS;
L_0C0C0A40: BLKS(0x0C0C0A40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0A42u, 1);  /* 0C0C0A40 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C0C0A42 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0A46u, 2);  /* 0C0C0A44 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0A48u, 1);  /* 0C0C0A46 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0A4Au, 1);  /* 0C0C0A48 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0A4Cu, 1);  /* 0C0C0A4A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0A4Eu, 1);  /* 0C0C0A4C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0A50u, 1);  /* 0C0C0A4E mov.l Rm,@-Rn */
	r0 = 0xC3C53E8u; UPD(0x0C0C0A52u, 1);  /* 0C0C0A50 mov.l @(disp,pc),Rn */
	IF(0x0C0C0A52u); r15 -= 4; W32(r15, PR); UPD(0x0C0C0A54u, 1);  /* 0C0C0A52 sts.l pr,@-Rn */
	r3 = 0xC29D728u; UPD(0x0C0C0A56u, 1);  /* 0C0C0A54 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0C0A56 mov Rm,Rn */
	W8(r0, r1); UPD(0x0C0C0A5Au, 2);  /* 0C0C0A58 mov.b Rm,@Rn */
	r4 = 0xC23945Cu; UPD(0x0C0C0A5Cu, 1);  /* 0C0C0A5A mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C0C0A5Eu, 1);  /* 0C0C0A5C mov.l @Rm,Rn */
	r0 = R32(r4); UPD(0x0C0C0A60u, 1);  /* 0C0C0A5E mov.l @Rm,Rn */
	r1 = 0x40000000u; UPD(0x0C0C0A62u, 1);  /* 0C0C0A60 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C0C0A62 add Rm,Rn */
	T = (s32)r2 > (s32)r1;  /* 0C0C0A64 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r3, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0C0A6Eu, 5); goto L_0C0C0A6E; } UPD(0x0C0C0A6Au, 1); goto L_0C0C0A6A; }  /* 0C0C0A66 bf/s */
L_0C0C0A6A: BLKS(0x0C0C0A6Au);
	r2 -= r1;  /* 0C0C0A6A sub Rm,Rn */
	W32(r3, r2); UPD(0x0C0C0A6Eu, 2);  /* 0C0C0A6C mov.l Rm,@Rn */
L_0C0C0A6E: BLKS(0x0C0C0A6Eu);
	r3 = 0xC2B038Cu; UPD(0x0C0C0A70u, 1);  /* 0C0C0A6E mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0C0A70 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0C0A74u, 2);  /* 0C0C0A72 mov.b @Rm,Rn */
	r4 = 0xC3C43C4u; UPD(0x0C0C0A76u, 1);  /* 0C0C0A74 mov.l @(disp,pc),Rn */
	r5 = r2 & 0xFF;  /* 0C0C0A76 extu.b Rm,Rn */
	r8 = 0xC28F60Au; UPD(0x0C0C0A7Au, 2);  /* 0C0C0A78 mov.l @(disp,pc),Rn */
	r0 = 0xC239482u; UPD(0x0C0C0A7Cu, 1);  /* 0C0C0A7A mov.l @(disp,pc),Rn */
L_0C0C0A7C: BLKS(0x0C0C0A7Cu);
	r1 = (u32)(s32)(s8)R8(r4); UPD(0x0C0C0A7Eu, 1);  /* 0C0C0A7C mov.b @Rm,Rn */
	r2 = r1 & 0xFF;  /* 0C0C0A7E extu.b Rm,Rn */
	T = r2 == r5;  /* 0C0C0A80 cmp/eq Rm,Rn */
	{ u32 c_ = T; T = r2 > r5; /* slot cmp/hi Rm,Rn */ if (c_) { UPD(0x0C0C0A92u, 5); goto L_0C0C0A92; } goto L_0C0C0A86; }  /* 0C0C0A82 bt/s */
L_0C0C0A86: BLKS(0x0C0C0A86u);
	if (T) { UPD(0x0C0C0A8Eu, 4); goto L_0C0C0A8E; }  /* 0C0C0A86 bt */
L_0C0C0A88: BLKS(0x0C0C0A88u);
	r1 += 0x1u;  /* 0C0C0A88 add #imm,Rn */
	{ W8(r4, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C0C0A92u, 4); goto L_0C0C0A92; }  /* 0C0C0A8A bra */
L_0C0C0A8E: BLKS(0x0C0C0A8Eu);
	r1 += 0xFFFFFFFFu;  /* 0C0C0A8E add #imm,Rn */
	W8(r4, r1); UPD(0x0C0C0A92u, 2);  /* 0C0C0A90 mov.b Rm,@Rn */
L_0C0C0A92: BLKS(0x0C0C0A92u);
	r7 = 0xC29D736u; UPD(0x0C0C0A94u, 1);  /* 0C0C0A92 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s8)R8(r8); UPD(0x0C0C0A96u, 1);  /* 0C0C0A94 mov.b @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0C0A98u, 1);  /* 0C0C0A96 mov.b @Rm,Rn */
	r1 = r9 & 0xFF;  /* 0C0C0A98 extu.b Rm,Rn */
	r3 = r2 & 0xFF;  /* 0C0C0A9A extu.b Rm,Rn */
	T = r3 == r1;  /* 0C0C0A9C cmp/eq Rm,Rn */
	{ u32 c_ = T; T = r3 > r1; /* slot cmp/hi Rm,Rn */ if (c_) { UPD(0x0C0C0AB0u, 6); goto L_0C0C0AB0; } goto L_0C0C0AA2; }  /* 0C0C0A9E bt/s */
L_0C0C0AA2: BLKS(0x0C0C0AA2u);
	{ u32 c_ = T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C0AAAu, 4); goto L_0C0C0AAA; } goto L_0C0C0AA6; }  /* 0C0C0AA2 bt/s */
L_0C0C0AA6: BLKS(0x0C0C0AA6u);
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0C0AAEu, 4); goto L_0C0C0AAE; }  /* 0C0C0AA6 bra */
L_0C0C0AAA: BLKS(0x0C0C0AAAu);
	r1 = r2;  /* 0C0C0AAA mov Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0C0AAC add #imm,Rn */
	UPD(0x0C0C0AAEu, 2);
L_0C0C0AAE: BLKS(0x0C0C0AAEu);
	W8(r7, r1); UPD(0x0C0C0AB0u, 1);  /* 0C0C0AAE mov.b Rm,@Rn */
L_0C0C0AB0: BLKS(0x0C0C0AB0u);
	r7 = 0xC3C4171u; UPD(0x0C0C0AB2u, 1);  /* 0C0C0AB0 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C0C0AB4u, 1);  /* 0C0C0AB2 mov.b @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0C0AB6u, 1);  /* 0C0C0AB4 mov.b @Rm,Rn */
	r1 = r10 & 0xFF;  /* 0C0C0AB6 extu.b Rm,Rn */
	r3 = r2 & 0xFF;  /* 0C0C0AB8 extu.b Rm,Rn */
	T = r3 == r1;  /* 0C0C0ABA cmp/eq Rm,Rn */
	{ u32 c_ = T; T = r3 > r1; /* slot cmp/hi Rm,Rn */ if (c_) { UPD(0x0C0C0ACEu, 6); goto L_0C0C0ACE; } goto L_0C0C0AC0; }  /* 0C0C0ABC bt/s */
L_0C0C0AC0: BLKS(0x0C0C0AC0u);
	{ u32 c_ = T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C0AC8u, 4); goto L_0C0C0AC8; } goto L_0C0C0AC4; }  /* 0C0C0AC0 bt/s */
L_0C0C0AC4: BLKS(0x0C0C0AC4u);
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0C0ACCu, 4); goto L_0C0C0ACC; }  /* 0C0C0AC4 bra */
L_0C0C0AC8: BLKS(0x0C0C0AC8u);
	r1 = r2;  /* 0C0C0AC8 mov Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0C0ACA add #imm,Rn */
	UPD(0x0C0C0ACCu, 2);
L_0C0C0ACC: BLKS(0x0C0C0ACCu);
	W8(r7, r1); UPD(0x0C0C0ACEu, 1);  /* 0C0C0ACC mov.b Rm,@Rn */
L_0C0C0ACE: BLKS(0x0C0C0ACEu);
	r11 = r6;  /* 0C0C0ACE mov Rm,Rn */
	r11 += 0x1u;  /* 0C0C0AD0 add #imm,Rn */
	r6 = (u32)(s32)(s16)r11;  /* 0C0C0AD2 exts.w Rm,Rn */
	r7 = 0x1u;  /* 0C0C0AD4 mov #imm,Rn */
	T = (s32)r6 > (s32)r7;  /* 0C0C0AD6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0C0A7Cu, 8); goto L_0C0C0A7C; }  /* 0C0C0AD8 bf */
L_0C0C0ADA: BLKS(0x0C0C0ADAu);
	r6 = 0xC23945Cu; UPD(0x0C0C0ADCu, 1);  /* 0C0C0ADA mov.l @(disp,pc),Rn */
	r5 = 0xC22E2A4u; UPD(0x0C0C0ADEu, 1);  /* 0C0C0ADC mov.l @(disp,pc),Rn */
	r3 = R32(r6); UPD(0x0C0C0AE0u, 1);  /* 0C0C0ADE mov.l @Rm,Rn */
	r7 = R32(r5); UPD(0x0C0C0AE2u, 1);  /* 0C0C0AE0 mov.l @Rm,Rn */
	T = r3 == r7;  /* 0C0C0AE2 cmp/eq Rm,Rn */
	{ u32 c_ = T; r2 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C0AFCu, 4); goto L_0C0C0AFC; } goto L_0C0C0AE8; }  /* 0C0C0AE4 bt/s */
L_0C0C0AE8: BLKS(0x0C0C0AE8u);
	r2 -= r7;  /* 0C0C0AE8 sub Rm,Rn */
	IF(0x0C0C0AEAu); T = (s32)r2 >= 0;  /* 0C0C0AEA cmp/pz Rn */
	if (T) { UPD(0x0C0C0AF0u, 6); goto L_0C0C0AF0; }  /* 0C0C0AEC bt */
L_0C0C0AEE: BLKS(0x0C0C0AEEu);
	r2 = 0u - r2;  /* 0C0C0AEE neg Rm,Rn */
	UPD(0x0C0C0AF0u, 1);
L_0C0C0AF0: BLKS(0x0C0C0AF0u);
	r8 = 0xC239454u; UPD(0x0C0C0AF2u, 1);  /* 0C0C0AF0 mov.l @(disp,pc),Rn */
	r1 = R32(r8); UPD(0x0C0C0AF4u, 1);  /* 0C0C0AF2 mov.l @Rm,Rn */
	T = (s32)r2 >= (s32)r1;  /* 0C0C0AF4 cmp/ge Rm,Rn */
	{ u32 c_ = T; T = (s32)r3 >= (s32)r7; /* slot cmp/ge Rm,Rn */ if (c_) { UPD(0x0C0C0BD0u, 4); goto L_0C0C0BD0; } goto L_0C0C0AFA; }  /* 0C0C0AF6 bt/s */
L_0C0C0AFA: BLKS(0x0C0C0AFAu);
	W32(r6, r7); UPD(0x0C0C0AFCu, 2);  /* 0C0C0AFA mov.l Rm,@Rn */
L_0C0C0AFC: BLKS(0x0C0C0AFCu);
	r11 = 0xC286318u; UPD(0x0C0C0AFEu, 1);  /* 0C0C0AFC mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C0C0AFE mov #imm,Rn */
	r12 = 0xC3C53E8u; UPD(0x0C0C0B02u, 2);  /* 0C0C0B00 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0C0B02 mov #imm,Rn */
	r13 = 0xC2B07BCu; UPD(0x0C0C0B06u, 2);  /* 0C0C0B04 mov.l @(disp,pc),Rn */
	IF(0x0C0C0B06u); ;  /* 0C0C0B06 nop */
	UPD(0x0C0C0B08u, 1);
L_0C0C0B08: BLKS(0x0C0C0B08u);
	r9 = r10;  /* 0C0C0B08 mov Rm,Rn */
	r9 += r11;  /* 0C0C0B0A add Rm,Rn */
	r6 = R32(r9); UPD(0x0C0C0B0Eu, 3);  /* 0C0C0B0C mov.l @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0C0B0E tst Rm,Rn */
	if (!T) { UPD(0x0C0C0B90u, 4); goto L_0C0C0B90; }  /* 0C0C0B10 bf */
L_0C0C0B12: BLKS(0x0C0C0B12u);
	r3 = r8;  /* 0C0C0B12 mov Rm,Rn */
	r3 += 0x1u;  /* 0C0C0B14 add #imm,Rn */
	r8 = (u32)(s32)(s16)r3;  /* 0C0C0B16 exts.w Rm,Rn */
	r0 = 0x7u;  /* 0C0C0B18 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C0C0B1A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C0B08u, 8); goto L_0C0C0B08; } goto L_0C0C0B20; }  /* 0C0C0B1C bf/s */
L_0C0C0B20: BLKS(0x0C0C0B20u);
	r13 = 0xC3C53E8u; UPD(0x0C0C0B22u, 2);  /* 0C0C0B20 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s8)R8(r13); UPD(0x0C0C0B24u, 1);  /* 0C0C0B22 mov.b @Rm,Rn */
	r1 = r12 & 0xFF;  /* 0C0C0B24 extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0C0B26 tst Rm,Rn */
	if (T) { UPD(0x0C0C0B7Cu, 5); goto L_0C0C0B7C; }  /* 0C0C0B28 bt */
L_0C0C0B2A: BLKS(0x0C0C0B2Au);
	r12 = r1;  /* 0C0C0B2A mov Rm,Rn */
	r12 += 0xFFFFFFFFu;  /* 0C0C0B2C add #imm,Rn */
	IF(0x0C0C0B2Eu); ;  /* 0C0C0B2E nop */
	UPD(0x0C0C0B30u, 3);
L_0C0C0B30: BLKS(0x0C0C0B30u);
	r10 = 0x0u;  /* 0C0C0B30 mov #imm,Rn */
	T = (s32)r10 >= (s32)r12;  /* 0C0C0B32 cmp/ge Rm,Rn */
	{ u32 c_ = T; r8 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C0B78u, 5); goto L_0C0C0B78; } goto L_0C0C0B38; }  /* 0C0C0B34 bt/s */
L_0C0C0B38: BLKS(0x0C0C0B38u);
	r2 = 0xC3C53E8u; UPD(0x0C0C0B3Au, 2);  /* 0C0C0B38 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0C0B3Cu, 1);  /* 0C0C0B3A mov.b @Rm,Rn */
	r11 = 0xC2AC15Cu; UPD(0x0C0C0B3Eu, 1);  /* 0C0C0B3C mov.l @(disp,pc),Rn */
	r9 = r5 & 0xFF;  /* 0C0C0B3E extu.b Rm,Rn */
	r0 = 0xC3C8694u; UPD(0x0C0C0B42u, 2);  /* 0C0C0B40 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFFFu;  /* 0C0C0B42 add #imm,Rn */
	UPD(0x0C0C0B44u, 1);
L_0C0C0B44: BLKS(0x0C0C0B44u);
	r7 = r8;  /* 0C0C0B44 mov Rm,Rn */
	r7 += r11;  /* 0C0C0B46 add Rm,Rn */
	r4 = r7;  /* 0C0C0B48 mov Rm,Rn */
	r4 += 0x1u;  /* 0C0C0B4A add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r7); UPD(0x0C0C0B4Eu, 5);  /* 0C0C0B4C mov.b @Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0C0B50u, 1);  /* 0C0C0B4E mov.b @Rm,Rn */
	r5 = r13 & 0xFF;  /* 0C0C0B50 extu.b Rm,Rn */
	r3 = r6 & 0xFF;  /* 0C0C0B52 extu.b Rm,Rn */
	T = r5 >= r3;  /* 0C0C0B54 cmp/hs Rm,Rn */
	{ u32 c_ = T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C0B6Cu, 6); goto L_0C0C0B6C; } goto L_0C0C0B5A; }  /* 0C0C0B56 bt/s */
L_0C0C0B5A: BLKS(0x0C0C0B5Au);
	{ u32 v_ = (u32)(s32)(s8)R8(r13); r13 += 1; r1 = v_; } UPD(0x0C0C0B5Cu, 2);  /* 0C0C0B5A mov.b @Rm+,Rn */
	r3 = (u32)(s32)(s8)R8(r13); UPD(0x0C0C0B5Eu, 1);  /* 0C0C0B5C mov.b @Rm,Rn */
	W8(r7, r6); UPD(0x0C0C0B60u, 1);  /* 0C0C0B5E mov.b Rm,@Rn */
	W8(r0, r3); UPD(0x0C0C0B62u, 1);  /* 0C0C0B60 mov.b Rm,@Rn */
	r6 = r10;  /* 0C0C0B62 mov Rm,Rn */
	r6 += 0x1u;  /* 0C0C0B64 add #imm,Rn */
	W8(r13, r1); UPD(0x0C0C0B68u, 3);  /* 0C0C0B66 mov.b Rm,@Rn */
	r10 = r6 & 0xFF;  /* 0C0C0B68 extu.b Rm,Rn */
	W8(r4, r5); UPD(0x0C0C0B6Cu, 2);  /* 0C0C0B6A mov.b Rm,@Rn */
L_0C0C0B6C: BLKS(0x0C0C0B6Cu);
	r7 = r8;  /* 0C0C0B6C mov Rm,Rn */
	r7 += 0x1u;  /* 0C0C0B6E add #imm,Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C0C0B70 exts.w Rm,Rn */
	T = (s32)r8 >= (s32)r9;  /* 0C0C0B72 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r0 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C0B44u, 7); goto L_0C0C0B44; } UPD(0x0C0C0B78u, 1); goto L_0C0C0B78; }  /* 0C0C0B74 bf/s */
L_0C0C0B78: BLKS(0x0C0C0B78u);
	T = (r10 & r10) == 0;  /* 0C0C0B78 tst Rm,Rn */
	if (!T) { UPD(0x0C0C0B30u, 4); goto L_0C0C0B30; }  /* 0C0C0B7A bf */
L_0C0C0B7C: BLKS(0x0C0C0B7Cu);
	r15 = r14;  /* 0C0C0B7C mov Rm,Rn */
	IF(0x0C0C0B7Eu); PR = R32(r15); r15 += 4; UPD(0x0C0C0B80u, 2);  /* 0C0C0B7E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C0B82u, 1);  /* 0C0C0B80 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0C0B84u, 1);  /* 0C0C0B82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C0B86u, 1);  /* 0C0C0B84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C0B88u, 1);  /* 0C0C0B86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C0B8Au, 1);  /* 0C0C0B88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C0B8Cu, 1);  /* 0C0C0B8A mov.l @Rm+,Rn */
	IF(0x0C0C0B8Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C0B8C rts */
L_0C0C0B90: BLKS(0x0C0C0B90u);
	r4 = R32(r9 + 0x4u); UPD(0x0C0C0B92u, 1);  /* 0C0C0B90 mov.l @(disp,Rm),Rn */
	r0 = 0xC2065ECu; UPD(0x0C0C0B94u, 1);  /* 0C0C0B92 mov.l @(disp,pc),Rn */
	IF(0x0C0C0B94u); r4 <<= 2;  /* 0C0C0B94 shll2 Rn */
	IF(0x0C0C0B96u); r7 = R32(r0 + r4); UPD(0x0C0C0B98u, 2);  /* 0C0C0B96 mov.l @(r0,Rm),Rn */
	r9 += 0x42u;  /* 0C0C0B98 add #imm,Rn */
	IF(0x0C0C0B9Au); { u32 t_ = r7; PR = 0x0C0C0B9Eu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C0C0B9Eu); }  /* 0C0C0B9A jsr @Rn */
L_0C0C0B9E: BLKS(0x0C0C0B9Eu);
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C0C0BA0u, 1);  /* 0C0C0B9E mov.b @Rm,Rn */
	r3 = 0x1Fu;  /* 0C0C0BA0 mov #imm,Rn */
	r0 = 0xC3C8694u; UPD(0x0C0C0BA4u, 2);  /* 0C0C0BA2 mov.l @(disp,pc),Rn */
	r6 = r2 & 0xFF;  /* 0C0C0BA4 extu.b Rm,Rn */
	IF(0x0C0C0BA6u); W8(r0 + r6, r8); UPD(0x0C0C0BA8u, 2);  /* 0C0C0BA6 mov.b Rm,@(r0,Rn) */
	r2 += 0x1u;  /* 0C0C0BA8 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C0C0BACu, 2);  /* 0C0C0BAA mov.b @Rm,Rn */
	r9 = 0xC2AC15Cu; UPD(0x0C0C0BAEu, 1);  /* 0C0C0BAC mov.l @(disp,pc),Rn */
	r3 &= r5;  /* 0C0C0BAE and Rm,Rn */
	r0 = r9;  /* 0C0C0BB0 mov Rm,Rn */
	r3 += r3;  /* 0C0C0BB2 add Rm,Rn */
	IF(0x0C0C0BB4u); W8(r0 + r6, r5); UPD(0x0C0C0BB6u, 4);  /* 0C0C0BB4 mov.b Rm,@(r0,Rn) */
	r4 = r3;  /* 0C0C0BB6 mov Rm,Rn */
	r4 += r13;  /* 0C0C0BB8 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C0C0BBCu, 3);  /* 0C0C0BBA mov.w @Rm,Rn */
	r0 += 0x1u;  /* 0C0C0BBC add #imm,Rn */
	W8(r12, r2); UPD(0x0C0C0BC0u, 2);  /* 0C0C0BBE mov.b Rm,@Rn */
	{ W16(r4, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C0C0B12u, 3); goto L_0C0C0B12; }  /* 0C0C0BC0 bra */
L_0C0C0BD0: BLKS(0x0C0C0BD0u);
	if (T) { UPD(0x0C0C0BE0u, 3); goto L_0C0C0BE0; }  /* 0C0C0BD0 bt */
L_0C0C0BD2: BLKS(0x0C0C0BD2u);
	r3 += r1;  /* 0C0C0BD2 add Rm,Rn */
	UPD(0x0C0C0BD4u, 1);
L_0C0C0BD4: BLKS(0x0C0C0BD4u);
	{ W32(r6, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C0C0AFCu, 3); goto L_0C0C0AFC; }  /* 0C0C0BD4 bra */
L_0C0C0BE0: BLKS(0x0C0C0BE0u);
	{ r3 -= r1; /* slot sub Rm,Rn */ UPD(0x0C0C0BD4u, 3); goto L_0C0C0BD4; }  /* 0C0C0BE0 bra */
}

void blk_f_0C0C0C30(sh3_t *c)
{
	LOCALS;
L_0C0C0C30: BLKS(0x0C0C0C30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0C32u, 1);  /* 0C0C0C30 mov.l Rm,@-Rn */
	r6 = 0x4Cu;  /* 0C0C0C32 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0C36u, 2);  /* 0C0C0C34 mov.l Rm,@-Rn */
	r8 = 0xFFFFFFFBu;  /* 0C0C0C36 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0C3Au, 2);  /* 0C0C0C38 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0C3Cu, 1);  /* 0C0C0C3A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0C3Eu, 1);  /* 0C0C0C3C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0C40u, 1);  /* 0C0C0C3E mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0C0C40 exts.w Rm,Rn */
	IF(0x0C0C0C42u); MACL = r13 * r6;  /* 0C0C0C42 mul.l Rm,Rn */
	r2 = 0xC286318u; UPD(0x0C0C0C46u, 4);  /* 0C0C0C44 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0C48u, 1);  /* 0C0C0C46 mov.l Rm,@-Rn */
	IF(0x0C0C0C48u); r6 = MACL;  /* 0C0C0C48 sts macl,Rn */
	r9 = 0xC3C4048u; UPD(0x0C0C0C4Cu, 2);  /* 0C0C0C4A mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0C0C4C add Rm,Rn */
	r0 = R32(r6 + 0xCu); UPD(0x0C0C0C50u, 2);  /* 0C0C0C4E mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0C0C50 add #imm,Rn */
	r4 = R32(r9); UPD(0x0C0C0C54u, 2);  /* 0C0C0C52 mov.l @Rm,Rn */
	r14 = r15;  /* 0C0C0C54 mov Rm,Rn */
	r4 -= r0;  /* 0C0C0C56 sub Rm,Rn */
	r10 = R32(r6 + 0x8u); UPD(0x0C0C0C5Au, 3);  /* 0C0C0C58 mov.l @(disp,Rm),Rn */
	r1 = (r4 >> 16) | (r4 << 16);  /* 0C0C0C5A swap.w Rm,Rn */
	r9 = 0xC29D72Eu; UPD(0x0C0C0C5Eu, 2);  /* 0C0C0C5C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r1;  /* 0C0C0C5E exts.w Rm,Rn */
	r3 = (r10 >> 16) | (r10 << 16);  /* 0C0C0C60 swap.w Rm,Rn */
	r5 = r0;  /* 0C0C0C62 mov Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0C0C66u, 4);  /* 0C0C0C64 mov.w @Rm,Rn */
	r10 = (u32)(s32)(s16)r3;  /* 0C0C0C66 exts.w Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0C0C68 and #imm,r0 */
	r4 -= r0;  /* 0C0C0C6A sub Rm,Rn */
	r11 = r10;  /* 0C0C0C6C mov Rm,Rn */
	IF(0x0C0C0C6Eu); ARG0(0x4B8Cu); { s32 s_ = (s32)r8; if (s_ >= 0) r11 <<= (s_ & 31); else if ((s_ & 31) == 0) r11 = (u32)((s32)r11 >> 31); else r11 = (u32)((s32)r11 >> ((~s_ & 31) + 1)); }  /* 0C0C0C6E shad Rm,Rn */
	IF(0x0C0C0C70u); ARG0(0x458Cu); { s32 s_ = (s32)r8; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C0C0C70 shad Rm,Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0C0C72 exts.w Rm,Rn */
	r4 = R32(r6); UPD(0x0C0C0C76u, 8);  /* 0C0C0C74 mov.l @Rm,Rn */
	W32(r14, r11); UPD(0x0C0C0C78u, 1);  /* 0C0C0C76 mov.l Rm,@Rn */
	r6 += 0x3Cu;  /* 0C0C0C78 add #imm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0C0C7Cu, 2);  /* 0C0C0C7A mov.l Rm,@(disp,Rn) */
	r12 = 0xC3C415Cu; UPD(0x0C0C0C7Eu, 1);  /* 0C0C0C7C mov.l @(disp,pc),Rn */
	r8 = 0x2000000u; UPD(0x0C0C0C80u, 1);  /* 0C0C0C7E mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r5 = v_; } UPD(0x0C0C0C82u, 1);  /* 0C0C0C80 mov.b @Rm+,Rn */
	r4 &= r8;  /* 0C0C0C82 and Rm,Rn */
	r3 = 0xC232316u; UPD(0x0C0C0C86u, 2);  /* 0C0C0C84 mov.l @(disp,pc),Rn */
	r8 = r5 & 0xFF;  /* 0C0C0C86 extu.b Rm,Rn */
	r7 = R32(r12); UPD(0x0C0C0C8Au, 2);  /* 0C0C0C88 mov.l @Rm,Rn */
	r2 = r8;  /* 0C0C0C8A mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r0 = v_; } UPD(0x0C0C0C8Eu, 2);  /* 0C0C0C8C mov.b @Rm+,Rn */
	r12 = 0x1Fu;  /* 0C0C0C8E mov #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r3); UPD(0x0C0C0C92u, 2);  /* 0C0C0C90 mov.w @Rm,Rn */
	r10 &= r12;  /* 0C0C0C92 and Rm,Rn */
	IF(0x0C0C0C94u); r2 <<= 16;  /* 0C0C0C94 shll16 Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C0C0C98u, 3);  /* 0C0C0C96 mov.b @Rm,Rn */
	r11 -= r10;  /* 0C0C0C98 sub Rm,Rn */
	r4 |= r2;  /* 0C0C0C9A or Rm,Rn */
	r12 = r0 & 0xFF;  /* 0C0C0C9C extu.b Rm,Rn */
	IF(0x0C0C0C9Eu); r12 <<= 8;  /* 0C0C0C9E shll8 Rn */
	r2 = 0xC3C43C4u; UPD(0x0C0C0CA2u, 5);  /* 0C0C0CA0 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r11;  /* 0C0C0CA2 exts.w Rm,Rn */
	r11 = r3 & 0xFF;  /* 0C0C0CA4 extu.b Rm,Rn */
	r4 |= r12;  /* 0C0C0CA6 or Rm,Rn */
	r5 = 0x10000000u; UPD(0x0C0C0CAAu, 4);  /* 0C0C0CA8 mov.l @(disp,pc),Rn */
	r4 |= r11;  /* 0C0C0CAA or Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0C0CAEu, 2);  /* 0C0C0CAC mov.b @Rm,Rn */
	r4 |= r5; UPD(0x0C0C0CB0u, 1);  /* 0C0C0CAE or Rm,Rn */
	r12 = 0xC29D736u; UPD(0x0C0C0CB2u, 1);  /* 0C0C0CB0 mov.l @(disp,pc),Rn */
	r5 = r0 & 0xFF;  /* 0C0C0CB2 extu.b Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C0C0CB6u, 2);  /* 0C0C0CB4 mov.b @Rm,Rn */
	r11 = 0xFFFFFFFFu;  /* 0C0C0CB6 mov #imm,Rn */
	T = (r5 & r5) == 0;  /* 0C0C0CB8 tst Rm,Rn */
	{ u32 t_ = 0u - r11, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0C0CBA negc Rm,Rn */
	r12 = r3 & 0xFF;  /* 0C0C0CBC extu.b Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C0C0CBE tst Rm,Rn */
	{ u32 t_ = 0u - r11, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C0C0CC0 negc Rm,Rn */
	r3 = 0xC3C4171u; UPD(0x0C0C0CC4u, 7);  /* 0C0C0CC2 mov.l @(disp,pc),Rn */
	r0 |= r1;  /* 0C0C0CC4 or Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0C0CC8u, 2);  /* 0C0C0CC6 mov.b @Rm,Rn */
	r2 = r1 & 0xFF;  /* 0C0C0CC8 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0C0CCA tst Rm,Rn */
	{ u32 t_ = 0u - r11, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C0C0CCC negc Rm,Rn */
	r0 |= r3;  /* 0C0C0CCE or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0C0CD0 tst Rm,Rn */
	{ u32 c_ = T; r6 += 0xFFFFFFC2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C0CDAu, 8); goto L_0C0C0CDA; } goto L_0C0C0CD6; }  /* 0C0C0CD2 bt/s */
L_0C0C0CD6: BLKS(0x0C0C0CD6u);
	r0 = 0x1000000u; UPD(0x0C0C0CD8u, 2);  /* 0C0C0CD6 mov.l @(disp,pc),Rn */
	r4 |= r0;  /* 0C0C0CD8 or Rm,Rn */
	UPD(0x0C0C0CDAu, 1);
L_0C0C0CDA: BLKS(0x0C0C0CDAu);
	IF(0x0C0C0CDAu); r10 <<= 16;  /* 0C0C0CDA shll16 Rn */
	r1 = r10;  /* 0C0C0CDC mov Rm,Rn */
	r1 |= r9;  /* 0C0C0CDE or Rm,Rn */
	r0 = r8;  /* 0C0C0CE0 mov Rm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0C0CE4u, 5);  /* 0C0C0CE2 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x1u;  /* 0C0C0CE4 cmp/eq #imm,r0 */
	{ u32 c_ = T; r11 = R32(r6 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0C0DA0u, 4); goto L_0C0C0DA0; } UPD(0x0C0C0CEAu, 1); goto L_0C0C0CEA; }  /* 0C0C0CE6 bt/s */
L_0C0C0CEA: BLKS(0x0C0C0CEAu);
	r6 += 0x3Fu;  /* 0C0C0CEA add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r0 = v_; } UPD(0x0C0C0CEEu, 2);  /* 0C0C0CEC mov.b @Rm+,Rn */
	r10 = r0 & 0xFF;  /* 0C0C0CEE extu.b Rm,Rn */
	IF(0x0C0C0CF0u); MACL = r10 * r5;  /* 0C0C0CF0 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r3 = v_; } UPD(0x0C0C0CF4u, 4);  /* 0C0C0CF2 mov.b @Rm+,Rn */
	IF(0x0C0C0CF4u); r1 = MACL;  /* 0C0C0CF4 sts macl,Rn */
	r9 = r3 & 0xFF;  /* 0C0C0CF6 extu.b Rm,Rn */
	IF(0x0C0C0CF8u); MACL = r9 * r12;  /* 0C0C0CF8 mul.l Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r6); UPD(0x0C0C0CFCu, 5);  /* 0C0C0CFA mov.b @Rm,Rn */
	r1 += r1;  /* 0C0C0CFC add Rm,Rn */
	IF(0x0C0C0CFEu); r8 = MACL;  /* 0C0C0CFE sts macl,Rn */
	r10 = r6 & 0xFF;  /* 0C0C0D00 extu.b Rm,Rn */
	IF(0x0C0C0D02u); MACL = r10 * r2;  /* 0C0C0D02 mul.l Rm,Rn */
	r8 += r8;  /* 0C0C0D04 add Rm,Rn */
	IF(0x0C0C0D06u); r8 >>= 8;  /* 0C0C0D06 shlr8 Rn */
	IF(0x0C0C0D08u); r1 >>= 8;  /* 0C0C0D08 shlr8 Rn */
	IF(0x0C0C0D0Au); r9 = MACL;  /* 0C0C0D0A sts macl,Rn */
	r3 = 0xFFFFFFF9u;  /* 0C0C0D0C mov #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C0C0D0E extu.b Rm,Rn */
	r5 = r1 & 0xFF;  /* 0C0C0D10 extu.b Rm,Rn */
	IF(0x0C0C0D12u); ARG0(0x493Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = (u32)((s32)r9 >> 31); else r9 = (u32)((s32)r9 >> ((~s_ & 31) + 1)); }  /* 0C0C0D12 shad Rm,Rn */
	IF(0x0C0C0D14u); r5 <<= 16;  /* 0C0C0D14 shll16 Rn */
	IF(0x0C0C0D16u); r0 <<= 8;  /* 0C0C0D16 shll8 Rn */
	r5 += r0;  /* 0C0C0D18 add Rm,Rn */
	r8 = r9 & 0xFF;  /* 0C0C0D1A extu.b Rm,Rn */
	r5 += r8;  /* 0C0C0D1C add Rm,Rn */
	UPD(0x0C0C0D1Eu, 18);
L_0C0C0D1E: BLKS(0x0C0C0D1Eu);
	r10 = 0x4u;  /* 0C0C0D1E mov #imm,Rn */
	IF(0x0C0C0D20u); ARG0(0x4DADu); { s32 s_ = (s32)r10; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C0C0D20 shld Rm,Rn */
	r9 = 0x1F001Fu; UPD(0x0C0C0D24u, 3);  /* 0C0C0D22 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0C0D24 mov #imm,Rn */
	W32(r14 + 0xCu, r13); UPD(0x0C0C0D28u, 2);  /* 0C0C0D26 mov.l Rm,@(disp,Rn) */
	r8 = 0x8u;  /* 0C0C0D28 mov #imm,Rn */
	r10 = 0xC2398A0u; UPD(0x0C0C0D2Cu, 2);  /* 0C0C0D2A mov.l @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C0C0D2C mov #imm,Rn */
	IF(0x0C0C0D2Eu); ;  /* 0C0C0D2E nop */
	UPD(0x0C0C0D30u, 2);
L_0C0C0D30: BLKS(0x0C0C0D30u);
	r6 = R32(r14); UPD(0x0C0C0D32u, 1);  /* 0C0C0D30 mov.l @Rm,Rn */
	r2 = 0xFu;  /* 0C0C0D32 mov #imm,Rn */
	r6 += r12;  /* 0C0C0D34 add Rm,Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C0C0D38u, 3);  /* 0C0C0D36 mov.l @(disp,Rm),Rn */
	r6 &= r2;  /* 0C0C0D38 and Rm,Rn */
	r6 += r0;  /* 0C0C0D3A add Rm,Rn */
	r1 = 0x4u;  /* 0C0C0D3C mov #imm,Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C0C0D40u, 4);  /* 0C0C0D3E mov.l @(disp,Rm),Rn */
	IF(0x0C0C0D40u); ARG0(0x461Du); { s32 s_ = (s32)r1; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0C0D40 shld Rm,Rn */
	r3 = 0x0u;  /* 0C0C0D42 mov #imm,Rn */
	r2 += r13;  /* 0C0C0D44 add Rm,Rn */
	IF(0x0C0C0D46u); ;  /* 0C0C0D46 nop */
	UPD(0x0C0C0D48u, 4);
L_0C0C0D48: BLKS(0x0C0C0D48u);
	r0 = R32(r14 + 0x4u); UPD(0x0C0C0D4Au, 1);  /* 0C0C0D48 mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C0C0D4A add Rm,Rn */
	r0 &= 0xFu;  /* 0C0C0D4C and #imm,r0 */
	r0 += r6;  /* 0C0C0D4E add Rm,Rn */
	IF(0x0C0C0D50u); r0 <<= 2;  /* 0C0C0D50 shll2 Rn */
	IF(0x0C0C0D52u); r1 = R32(r0 + r10); UPD(0x0C0C0D54u, 5);  /* 0C0C0D52 mov.l @(r0,Rm),Rn */
	W32(r7, r4); UPD(0x0C0C0D56u, 1);  /* 0C0C0D54 mov.l Rm,@Rn */
	r1 += r11;  /* 0C0C0D56 add Rm,Rn */
	r7 += 0x4u;  /* 0C0C0D58 add #imm,Rn */
	W32(r7, r1); UPD(0x0C0C0D5Cu, 3);  /* 0C0C0D5A mov.l Rm,@Rn */
	r0 = r3;  /* 0C0C0D5C mov Rm,Rn */
	r7 += 0x4u;  /* 0C0C0D5E add #imm,Rn */
	W32(r7, r2); UPD(0x0C0C0D62u, 3);  /* 0C0C0D60 mov.l Rm,@Rn */
	r0 += 0x1u;  /* 0C0C0D62 add #imm,Rn */
	r7 += 0x4u;  /* 0C0C0D64 add #imm,Rn */
	W32(r7, r9); UPD(0x0C0C0D68u, 3);  /* 0C0C0D66 mov.l Rm,@Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C0C0D68 exts.w Rm,Rn */
	r7 += 0x4u;  /* 0C0C0D6A add #imm,Rn */
	W32(r7, r5); UPD(0x0C0C0D6Eu, 3);  /* 0C0C0D6C mov.l Rm,@Rn */
	r2 += 0x20u;  /* 0C0C0D6E add #imm,Rn */
	T = (s32)r3 > (s32)r8;  /* 0C0C0D70 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C0D48u, 5); goto L_0C0C0D48; } goto L_0C0C0D76; }  /* 0C0C0D72 bf/s */
L_0C0C0D76: BLKS(0x0C0C0D76u);
	r3 = r12;  /* 0C0C0D76 mov Rm,Rn */
	r12 = 0x200000u; UPD(0x0C0C0D7Au, 3);  /* 0C0C0D78 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0C0D7A add #imm,Rn */
	r13 += r12;  /* 0C0C0D7C add Rm,Rn */
	r12 = (u32)(s32)(s16)r3;  /* 0C0C0D7E exts.w Rm,Rn */
	r6 = 0xAu;  /* 0C0C0D80 mov #imm,Rn */
	T = (s32)r12 > (s32)r6;  /* 0C0C0D82 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0C0D30u, 8); goto L_0C0C0D30; }  /* 0C0C0D84 bf */
L_0C0C0D86: BLKS(0x0C0C0D86u);
	r14 += 0x10u;  /* 0C0C0D86 add #imm,Rn */
	r13 = 0xC3C415Cu; UPD(0x0C0C0D8Au, 2);  /* 0C0C0D88 mov.l @(disp,pc),Rn */
	W32(r13, r7); UPD(0x0C0C0D8Cu, 1);  /* 0C0C0D8A mov.l Rm,@Rn */
	r15 = r14;  /* 0C0C0D8C mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C0D90u, 2);  /* 0C0C0D8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0C0D92u, 1);  /* 0C0C0D90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C0D94u, 1);  /* 0C0C0D92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C0D96u, 1);  /* 0C0C0D94 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C0D98u, 1);  /* 0C0C0D96 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C0D9Au, 1);  /* 0C0C0D98 mov.l @Rm+,Rn */
	IF(0x0C0C0D9Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C0D9A rts */
L_0C0C0DA0: BLKS(0x0C0C0DA0u);
	r6 += 0x3Fu;  /* 0C0C0DA0 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r3 = v_; } UPD(0x0C0C0DA4u, 2);  /* 0C0C0DA2 mov.b @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r9 = v_; } UPD(0x0C0C0DA6u, 1);  /* 0C0C0DA4 mov.b @Rm+,Rn */
	r5 = r3 & 0xFF;  /* 0C0C0DA6 extu.b Rm,Rn */
	r8 = r9 & 0xFF;  /* 0C0C0DA8 extu.b Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r6); UPD(0x0C0C0DACu, 3);  /* 0C0C0DAA mov.b @Rm,Rn */
	IF(0x0C0C0DACu); r5 <<= 16;  /* 0C0C0DAC shll16 Rn */
	IF(0x0C0C0DAEu); r8 <<= 8;  /* 0C0C0DAE shll8 Rn */
	r5 |= r8;  /* 0C0C0DB0 or Rm,Rn */
	r2 = r6 & 0xFF;  /* 0C0C0DB2 extu.b Rm,Rn */
	{ r5 |= r2; /* slot or Rm,Rn */ UPD(0x0C0C0D1Eu, 7); goto L_0C0C0D1E; }  /* 0C0C0DB4 bra */
}

/* FUN_0c0c0df0 */
void blk_f_0C0C0DF0(sh3_t *c)
{
	LOCALS;
L_0C0C0DF0: BLKS(0x0C0C0DF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0DF2u, 1);  /* 0C0C0DF0 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0C0DF2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0DF6u, 2);  /* 0C0C0DF4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0DF8u, 1);  /* 0C0C0DF6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0C0DF8 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0DFCu, 2);  /* 0C0C0DFA mov.l Rm,@-Rn */
	IF(0x0C0C0DFCu); MACL = r9 * r2;  /* 0C0C0DFC mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0E00u, 3);  /* 0C0C0DFE mov.l Rm,@-Rn */
	r4 = 0xFFFFFFFBu;  /* 0C0C0E00 mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0E04u, 2);  /* 0C0C0E02 mov.l Rm,@-Rn */
	r6 = 0xC3C415Cu; UPD(0x0C0C0E06u, 1);  /* 0C0C0E04 mov.l @(disp,pc),Rn */
	IF(0x0C0C0E06u); r13 = MACL;  /* 0C0C0E06 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0E0Au, 2);  /* 0C0C0E08 mov.l Rm,@-Rn */
	r5 = R32(r6); UPD(0x0C0C0E0Cu, 1);  /* 0C0C0E0A mov.l @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0C0E0C add #imm,Rn */
	r6 = 0xC286318u; UPD(0x0C0C0E10u, 2);  /* 0C0C0E0E mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0C0E10 mov Rm,Rn */
	r13 += r6;  /* 0C0C0E12 add Rm,Rn */
	r7 = R32(r13 + 0x8u); UPD(0x0C0C0E16u, 3);  /* 0C0C0E14 mov.l @(disp,Rm),Rn */
	r0 = 0xC3C4048u; UPD(0x0C0C0E18u, 1);  /* 0C0C0E16 mov.l @(disp,pc),Rn */
	r1 = (r7 >> 16) | (r7 << 16);  /* 0C0C0E18 swap.w Rm,Rn */
	r12 = R32(r13 + 0xCu); UPD(0x0C0C0E1Cu, 2);  /* 0C0C0E1A mov.l @(disp,Rm),Rn */
	r10 = (u32)(s32)(s16)r1;  /* 0C0C0E1C exts.w Rm,Rn */
	r11 = R32(r0); UPD(0x0C0C0E20u, 2);  /* 0C0C0E1E mov.l @Rm,Rn */
	r3 = r10;  /* 0C0C0E20 mov Rm,Rn */
	IF(0x0C0C0E22u); ARG0(0x434Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C0C0E22 shad Rm,Rn */
	r11 -= r12;  /* 0C0C0E24 sub Rm,Rn */
	r8 = (r11 >> 16) | (r11 << 16);  /* 0C0C0E26 swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r8;  /* 0C0C0E28 exts.w Rm,Rn */
	r7 = 0x1Fu;  /* 0C0C0E2A mov #imm,Rn */
	W32(r14, r3); UPD(0x0C0C0E2Eu, 7);  /* 0C0C0E2C mov.l Rm,@Rn */
	r10 &= r7;  /* 0C0C0E2E and Rm,Rn */
	r8 = r0;  /* 0C0C0E30 mov Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0C0E32 and #imm,r0 */
	r7 += 0x69u;  /* 0C0C0E34 add #imm,Rn */
	r1 = 0xC0000001u; UPD(0x0C0C0E38u, 5);  /* 0C0C0E36 mov.l @(disp,pc),Rn */
	r7 -= r0;  /* 0C0C0E38 sub Rm,Rn */
	r3 = 0xC2B0394u; UPD(0x0C0C0E3Cu, 2);  /* 0C0C0E3A mov.l @(disp,pc),Rn */
	IF(0x0C0C0E3Cu); ARG0(0x484Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = (u32)((s32)r8 >> 31); else r8 = (u32)((s32)r8 >> ((~s_ & 31) + 1)); }  /* 0C0C0E3C shad Rm,Rn */
	r0 = 0xC0000000u; UPD(0x0C0C0E40u, 2);  /* 0C0C0E3E mov.l @(disp,pc),Rn */
	r13 = r9;  /* 0C0C0E40 mov Rm,Rn */
	W32(r3, r1); UPD(0x0C0C0E44u, 2);  /* 0C0C0E42 mov.l Rm,@Rn */
	r11 = 0x0u;  /* 0C0C0E44 mov #imm,Rn */
	r4 = 0x3DBu; UPD(0x0C0C0E48u, 2);  /* 0C0C0E46 mov.w @(disp,pc),Rn */
	r12 = r6;  /* 0C0C0E48 mov Rm,Rn */
	W32(r5, r0); UPD(0x0C0C0E4Cu, 2);  /* 0C0C0E4A mov.l Rm,@Rn */
	r4 -= r10;  /* 0C0C0E4C sub Rm,Rn */
	r0 = 0x4u;  /* 0C0C0E4E mov #imm,Rn */
	r10 = 0xC2398A0u; UPD(0x0C0C0E52u, 3);  /* 0C0C0E50 mov.l @(disp,pc),Rn */
	IF(0x0C0C0E52u); ARG0(0x4D0Du); { s32 s_ = (s32)r0; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C0C0E52 shld Rm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C0C0E56u, 2);  /* 0C0C0E54 mov.l Rm,@(disp,Rn) */
	r5 += 0x4u;  /* 0C0C0E56 add #imm,Rn */
	IF(0x0C0C0E58u); r4 <<= 16;  /* 0C0C0E58 shll16 Rn */
	IF(0x0C0C0E5Au); ;  /* 0C0C0E5A nop */
	UPD(0x0C0C0E5Cu, 3);
L_0C0C0E5C: BLKS(0x0C0C0E5Cu);
	r7 = R32(r14); UPD(0x0C0C0E5Eu, 1);  /* 0C0C0E5C mov.l @Rm,Rn */
	r3 = 0xFu;  /* 0C0C0E5E mov #imm,Rn */
	r7 += r11;  /* 0C0C0E60 add Rm,Rn */
	r7 &= r3;  /* 0C0C0E62 and Rm,Rn */
	r7 += r13;  /* 0C0C0E64 add Rm,Rn */
	r0 = 0x4u;  /* 0C0C0E66 mov #imm,Rn */
	r3 = R32(r14 + 0x4u); UPD(0x0C0C0E6Au, 6);  /* 0C0C0E68 mov.l @(disp,Rm),Rn */
	IF(0x0C0C0E6Au); ARG0(0x470Du); { s32 s_ = (s32)r0; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C0C0E6A shld Rm,Rn */
	r6 = 0x0u;  /* 0C0C0E6C mov #imm,Rn */
	IF(0x0C0C0E6Eu); ;  /* 0C0C0E6E nop */
	UPD(0x0C0C0E70u, 3);
L_0C0C0E70: BLKS(0x0C0C0E70u);
	r0 = r8;  /* 0C0C0E70 mov Rm,Rn */
	r0 += r6;  /* 0C0C0E72 add Rm,Rn */
	r0 &= 0xFu;  /* 0C0C0E74 and #imm,r0 */
	r0 += r7;  /* 0C0C0E76 add Rm,Rn */
	IF(0x0C0C0E78u); r0 <<= 2;  /* 0C0C0E78 shll2 Rn */
	IF(0x0C0C0E7Au); r2 = R32(r0 + r10); UPD(0x0C0C0E7Cu, 6);  /* 0C0C0E7A mov.l @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0C0E7C tst Rm,Rn */
	if (T) { UPD(0x0C0C0EAAu, 4); goto L_0C0C0EAA; }  /* 0C0C0E7E bt */
L_0C0C0E80: BLKS(0x0C0C0E80u);
	r0 = 0x11000000u; UPD(0x0C0C0E82u, 1);  /* 0C0C0E80 mov.l @(disp,pc),Rn */
	W32(r5, r0); UPD(0x0C0C0E84u, 1);  /* 0C0C0E82 mov.l Rm,@Rn */
	r0 = 0x4Cu;  /* 0C0C0E84 mov #imm,Rn */
	IF(0x0C0C0E86u); MACL = r9 * r0;  /* 0C0C0E86 mul.l Rm,Rn */
	r5 += 0x4u;  /* 0C0C0E88 add #imm,Rn */
	IF(0x0C0C0E8Au); r1 = MACL;  /* 0C0C0E8A sts macl,Rn */
	r1 += r12;  /* 0C0C0E8C add Rm,Rn */
	r0 = R32(r1 + 0x24u); UPD(0x0C0C0E90u, 7);  /* 0C0C0E8E mov.l @(disp,Rm),Rn */
	r2 += r0;  /* 0C0C0E90 add Rm,Rn */
	W32(r5, r2); UPD(0x0C0C0E94u, 2);  /* 0C0C0E92 mov.l Rm,@Rn */
	r2 = r4;  /* 0C0C0E94 mov Rm,Rn */
	r5 += 0x4u;  /* 0C0C0E96 add #imm,Rn */
	r2 |= r3;  /* 0C0C0E98 or Rm,Rn */
	W32(r5, r2); UPD(0x0C0C0E9Cu, 4);  /* 0C0C0E9A mov.l Rm,@Rn */
	r0 = 0x1F001Fu; UPD(0x0C0C0E9Eu, 1);  /* 0C0C0E9C mov.l @(disp,pc),Rn */
	r5 += 0x4u;  /* 0C0C0E9E add #imm,Rn */
	W32(r5, r0); UPD(0x0C0C0EA2u, 2);  /* 0C0C0EA0 mov.l Rm,@Rn */
	r2 = 0x808080u; UPD(0x0C0C0EA4u, 1);  /* 0C0C0EA2 mov.l @(disp,pc),Rn */
	r5 += 0x4u;  /* 0C0C0EA4 add #imm,Rn */
	W32(r5, r2); UPD(0x0C0C0EA8u, 2);  /* 0C0C0EA6 mov.l Rm,@Rn */
	r5 += 0x4u;  /* 0C0C0EA8 add #imm,Rn */
	UPD(0x0C0C0EAAu, 1);
L_0C0C0EAA: BLKS(0x0C0C0EAAu);
	r6 += 0x1u;  /* 0C0C0EAA add #imm,Rn */
	r2 = 0x8u;  /* 0C0C0EAC mov #imm,Rn */
	T = (s32)r6 > (s32)r2;  /* 0C0C0EAE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x20u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C0E70u, 6); goto L_0C0C0E70; } goto L_0C0C0EB4; }  /* 0C0C0EB0 bf/s */
L_0C0C0EB4: BLKS(0x0C0C0EB4u);
	r6 = 0x200000u; UPD(0x0C0C0EB6u, 2);  /* 0C0C0EB4 mov.l @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C0C0EB6 add #imm,Rn */
	r7 = 0xCu;  /* 0C0C0EB8 mov #imm,Rn */
	T = (s32)r11 > (s32)r7;  /* 0C0C0EBA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += r6; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0C0E5Cu, 6); goto L_0C0C0E5C; } goto L_0C0C0EC0; }  /* 0C0C0EBC bf/s */
L_0C0C0EC0: BLKS(0x0C0C0EC0u);
	r10 = 0xC0000001u; UPD(0x0C0C0EC2u, 2);  /* 0C0C0EC0 mov.l @(disp,pc),Rn */
	r14 += 0x8u;  /* 0C0C0EC2 add #imm,Rn */
	W32(r5, r10); UPD(0x0C0C0EC6u, 2);  /* 0C0C0EC4 mov.l Rm,@Rn */
	r9 = 0xC3C415Cu; UPD(0x0C0C0EC8u, 1);  /* 0C0C0EC6 mov.l @(disp,pc),Rn */
	r5 += 0x4u;  /* 0C0C0EC8 add #imm,Rn */
	W32(r9, r5); UPD(0x0C0C0ECCu, 2);  /* 0C0C0ECA mov.l Rm,@Rn */
	r15 = r14;  /* 0C0C0ECC mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C0ED0u, 2);  /* 0C0C0ECE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0C0ED2u, 1);  /* 0C0C0ED0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C0ED4u, 1);  /* 0C0C0ED2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C0ED6u, 1);  /* 0C0C0ED4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C0ED8u, 1);  /* 0C0C0ED6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C0EDAu, 1);  /* 0C0C0ED8 mov.l @Rm+,Rn */
	IF(0x0C0C0EDAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C0EDA rts */
}

/* FUN_0c0c0f10 */
void blk_f_0C0C0F10(sh3_t *c)
{
	LOCALS;
L_0C0C0F10: BLKS(0x0C0C0F10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0F12u, 1);  /* 0C0C0F10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0F14u, 1);  /* 0C0C0F12 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0C0F14 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0F18u, 2);  /* 0C0C0F16 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0F1Au, 1);  /* 0C0C0F18 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0F1Cu, 1);  /* 0C0C0F1A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0F1Eu, 1);  /* 0C0C0F1C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C0F20u, 1);  /* 0C0C0F1E mov.l Rm,@-Rn */
	r0 = 0xC23945Cu; UPD(0x0C0C0F22u, 1);  /* 0C0C0F20 mov.l @(disp,pc),Rn */
	IF(0x0C0C0F22u); r15 -= 4; W32(r15, PR); UPD(0x0C0C0F24u, 1);  /* 0C0C0F22 sts.l pr,@-Rn */
	r2 = R32(r0); UPD(0x0C0C0F26u, 1);  /* 0C0C0F24 mov.l @Rm,Rn */
	IF(0x0C0C0F26u); T = (s32)r2 >= 0;  /* 0C0C0F26 cmp/pz Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C0F30u, 4); goto L_0C0C0F30; } goto L_0C0C0F2C; }  /* 0C0C0F28 bt/s */
L_0C0C0F2C: BLKS(0x0C0C0F2Cu);
	{ IF(0x0C0C0F2Eu); ; /* slot nop */ UPD(0x0C0C10E0u, 4); goto L_0C0C10E0; }  /* 0C0C0F2C bra */
L_0C0C0F30: BLKS(0x0C0C0F30u);
	r4 = 0x4Cu;  /* 0C0C0F30 mov #imm,Rn */
	IF(0x0C0C0F32u); MACL = r8 * r4;  /* 0C0C0F32 mul.l Rm,Rn */
	r3 = r2;  /* 0C0C0F34 mov Rm,Rn */
	r2 = 0xC286318u; UPD(0x0C0C0F38u, 5);  /* 0C0C0F36 mov.l @(disp,pc),Rn */
	IF(0x0C0C0F38u); r7 = MACL;  /* 0C0C0F38 sts macl,Rn */
	r7 += r2;  /* 0C0C0F3A add Rm,Rn */
	r6 = 0xFFFFFFF8u;  /* 0C0C0F3C mov #imm,Rn */
	r2 = R32(r7 + 0x10u); UPD(0x0C0C0F40u, 4);  /* 0C0C0F3E mov.l @(disp,Rm),Rn */
	IF(0x0C0C0F40u); T = (s32)r2 >= 0;  /* 0C0C0F40 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C0C0F44u); ARG0(0x436Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ if (c_) { UPD(0x0C0C0F4Au, 4); goto L_0C0C0F4A; } goto L_0C0C0F46; }  /* 0C0C0F42 bt/s */
L_0C0C0F46: BLKS(0x0C0C0F46u);
	{ IF(0x0C0C0F48u); ; /* slot nop */ UPD(0x0C0C10D0u, 4); goto L_0C0C10D0; }  /* 0C0C0F46 bra */
L_0C0C0F4A: BLKS(0x0C0C0F4Au);
	IF(0x0C0C0F4Au); ARG0(0x426Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0C0F4A shad Rm,Rn */
	IF(0x0C0C0F4Cu); MACL = r3 * r2;  /* 0C0C0F4C mul.l Rm,Rn */
	r6 = R32(r7 + 0x8u); UPD(0x0C0C0F50u, 4);  /* 0C0C0F4E mov.l @(disp,Rm),Rn */
	IF(0x0C0C0F50u); r10 = MACL;  /* 0C0C0F50 sts macl,Rn */
	r6 += r10;  /* 0C0C0F52 add Rm,Rn */
	W32(r7 + 0x8u, r6); UPD(0x0C0C0F56u, 3);  /* 0C0C0F54 mov.l Rm,@(disp,Rn) */
	r2 = 0xC3C4048u; UPD(0x0C0C0F58u, 1);  /* 0C0C0F56 mov.l @(disp,pc),Rn */
	r0 = 0xFFFFFE78u; UPD(0x0C0C0F5Au, 1);  /* 0C0C0F58 mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)R16(r2); UPD(0x0C0C0F5Cu, 1);  /* 0C0C0F5A mov.w @Rm,Rn */
	r13 = R32(r7 + 0x14u); UPD(0x0C0C0F5Eu, 1);  /* 0C0C0F5C mov.l @(disp,Rm),Rn */
	r12 += r0;  /* 0C0C0F5E add Rm,Rn */
	r11 = 0x10000u; UPD(0x0C0C0F62u, 2);  /* 0C0C0F60 mov.l @(disp,pc),Rn */
	r11 -= r13;  /* 0C0C0F62 sub Rm,Rn */
	IF(0x0C0C0F64u); MACL = r12 * r11;  /* 0C0C0F64 mul.l Rm,Rn */
	r9 = 0x1600000u; UPD(0x0C0C0F68u, 4);  /* 0C0C0F66 mov.l @(disp,pc),Rn */
	IF(0x0C0C0F68u); r1 = MACL;  /* 0C0C0F68 sts macl,Rn */
	r9 += r1;  /* 0C0C0F6A add Rm,Rn */
	r3 = R32(r7 + 0x20u); UPD(0x0C0C0F6Eu, 3);  /* 0C0C0F6C mov.l @(disp,Rm),Rn */
	T = (s32)r6 > (s32)r3;  /* 0C0C0F6E cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r7 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0C0F8Cu, 4); goto L_0C0C0F8C; } UPD(0x0C0C0F74u, 1); goto L_0C0C0F74; }  /* 0C0C0F70 bf/s */
L_0C0C0F74: BLKS(0x0C0C0F74u);
	r2 = R32(r7); UPD(0x0C0C0F76u, 1);  /* 0C0C0F74 mov.l @Rm,Rn */
	r4 = 0x10000000u; UPD(0x0C0C0F78u, 1);  /* 0C0C0F76 mov.l @(disp,pc),Rn */
	T = (r2 & r4) == 0;  /* 0C0C0F78 tst Rm,Rn */
	if (!T) { UPD(0x0C0C0F80u, 4); goto L_0C0C0F80; }  /* 0C0C0F7A bf */
L_0C0C0F7C: BLKS(0x0C0C0F7Cu);
	{ IF(0x0C0C0F7Eu); ; /* slot nop */ UPD(0x0C0C10C0u, 3); goto L_0C0C10C0; }  /* 0C0C0F7C bra */
L_0C0C0F80: BLKS(0x0C0C0F80u);
	r5 = 0xF6000000u; UPD(0x0C0C0F82u, 1);  /* 0C0C0F80 mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C0C0F82 add Rm,Rn */
	W32(r7 + 0x8u, r6); UPD(0x0C0C0F86u, 2);  /* 0C0C0F84 mov.l Rm,@(disp,Rn) */
	r6 = 0x8000000u; UPD(0x0C0C0F88u, 1);  /* 0C0C0F86 mov.l @(disp,pc),Rn */
	r2 |= r6;  /* 0C0C0F88 or Rm,Rn */
	W32(r7, r2); UPD(0x0C0C0F8Cu, 2);  /* 0C0C0F8A mov.l Rm,@Rn */
L_0C0C0F8C: BLKS(0x0C0C0F8Cu);
	r0 = 0xC0C1140u; UPD(0x0C0C0F8Eu, 1);  /* 0C0C0F8C mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0C0F8E mov Rm,Rn */
	IF(0x0C0C0F90u); { u32 t_ = r0; PR = 0x0C0C0F94u; r13 = 0x4Cu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C1140, 0x0C0C1140u, 0x0C0C0F94u); }  /* 0C0C0F90 jsr @Rn */
L_0C0C0F94: BLKS(0x0C0C0F94u);
	IF(0x0C0C0F94u); MACL = r8 * r13;  /* 0C0C0F94 mul.l Rm,Rn */
	r9 = 0xC286318u; UPD(0x0C0C0F98u, 3);  /* 0C0C0F96 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0C0F98 mov #imm,Rn */
	IF(0x0C0C0F9Au); r11 = MACL;  /* 0C0C0F9A sts macl,Rn */
	r11 += r9;  /* 0C0C0F9C add Rm,Rn */
	r12 = R32(r11 + 0xCu); UPD(0x0C0C0FA0u, 4);  /* 0C0C0F9E mov.l @(disp,Rm),Rn */
	r5 = 0x0u;  /* 0C0C0FA0 mov #imm,Rn */
	r3 = R32(r11 + 0x1Cu); UPD(0x0C0C0FA4u, 2);  /* 0C0C0FA2 mov.l @(disp,Rm),Rn */
	r9 = r12;  /* 0C0C0FA4 mov Rm,Rn */
	W32(r11 + 0x1Cu, r12); UPD(0x0C0C0FA8u, 2);  /* 0C0C0FA6 mov.l Rm,@(disp,Rn) */
	r9 -= r3;  /* 0C0C0FA8 sub Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0C0FACu, 2);  /* 0C0C0FAA mov.l @(disp,pc),Rn */
	r4 = 0xBFu; UPD(0x0C0C0FAEu, 1);  /* 0C0C0FAC mov.w @(disp,pc),Rn */
	IF(0x0C0C0FAEu); ;  /* 0C0C0FAE nop */
	UPD(0x0C0C0FB0u, 1);
L_0C0C0FB0: BLKS(0x0C0C0FB0u);
	r3 = r5;  /* 0C0C0FB0 mov Rm,Rn */
	r3 += r11;  /* 0C0C0FB2 add Rm,Rn */
	r7 = R32(r3); UPD(0x0C0C0FB6u, 3);  /* 0C0C0FB4 mov.l @Rm,Rn */
	r0 = 0x1u;  /* 0C0C0FB6 mov #imm,Rn */
	r12 = r7;  /* 0C0C0FB8 mov Rm,Rn */
	IF(0x0C0C0FBAu); r12 >>= 2;  /* 0C0C0FBA shlr2 Rn */
	IF(0x0C0C0FBCu); r12 >>= 2;  /* 0C0C0FBC shlr2 Rn */
	r12 &= r0;  /* 0C0C0FBE and Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0C0FC2u, 6);  /* 0C0C0FC0 mov.w @(disp,pc),Rn */
	IF(0x0C0C0FC2u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0C0FC4u, 1);  /* 0C0C0FC2 mov.b @(r0,Rm),Rn */
	r13 = r2 & 0xFF;  /* 0C0C0FC4 extu.b Rm,Rn */
	T = r13 == r8;  /* 0C0C0FC6 cmp/eq Rm,Rn */
	IF(0x0C0C0FC8u); r2 = T;  /* 0C0C0FC8 movt Rn */
	r12 &= r2;  /* 0C0C0FCA and Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C0C0FCC tst Rm,Rn */
	if (T) { UPD(0x0C0C0FF6u, 8); goto L_0C0C0FF6; }  /* 0C0C0FCE bt */
L_0C0C0FD0: BLKS(0x0C0C0FD0u);
	r0 = R32(r3 + 0x28u); UPD(0x0C0C0FD2u, 1);  /* 0C0C0FD0 mov.l @(disp,Rm),Rn */
	r2 = 0xFFFFFFF1u;  /* 0C0C0FD2 mov #imm,Rn */
	r0 += r9;  /* 0C0C0FD4 add Rm,Rn */
	r12 = R32(r3 + 0x24u); UPD(0x0C0C0FD8u, 3);  /* 0C0C0FD6 mov.l @(disp,Rm),Rn */
	IF(0x0C0C0FD8u); ARG0(0x472Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C0C0FD8 shad Rm,Rn */
	W32(r3 + 0x28u, r0); UPD(0x0C0C0FDCu, 2);  /* 0C0C0FDA mov.l Rm,@(disp,Rn) */
	r12 -= r10;  /* 0C0C0FDC sub Rm,Rn */
	r13 = 0xFFA00000u; UPD(0x0C0C0FE0u, 2);  /* 0C0C0FDE mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0C0FE0 mov Rm,Rn */
	T = (s32)r13 > (s32)r12;  /* 0C0C0FE2 cmp/gt Rm,Rn */
	r0 ^= 0x1u;  /* 0C0C0FE4 xor #imm,r0 */
	IF(0x0C0C0FE6u); r7 = T;  /* 0C0C0FE6 movt Rn */
	r0 &= 0x1u;  /* 0C0C0FE8 and #imm,r0 */
	r0 &= r7;  /* 0C0C0FEA and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0C0FEC tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x24u, r12); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0C0FF6u, 10); goto L_0C0C0FF6; } UPD(0x0C0C0FF2u, 1); goto L_0C0C0FF2; }  /* 0C0C0FEE bt/s */
L_0C0C0FF2: BLKS(0x0C0C0FF2u);
	r7 = 0x0u;  /* 0C0C0FF2 mov #imm,Rn */
	W32(r3, r7); UPD(0x0C0C0FF6u, 2);  /* 0C0C0FF4 mov.l Rm,@Rn */
L_0C0C0FF6: BLKS(0x0C0C0FF6u);
	r3 = r6;  /* 0C0C0FF6 mov Rm,Rn */
	r6 = 0xB4u; UPD(0x0C0C0FFAu, 2);  /* 0C0C0FF8 mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0C0FFA add #imm,Rn */
	r5 += r6;  /* 0C0C0FFC add Rm,Rn */
	r6 = (u32)(s32)(s16)r3;  /* 0C0C0FFE exts.w Rm,Rn */
	T = (s32)r6 > (s32)r4;  /* 0C0C1000 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0C0FB0u, 7); goto L_0C0C0FB0; }  /* 0C0C1002 bf */
L_0C0C1004: BLKS(0x0C0C1004u);
	r6 = 0x0u;  /* 0C0C1004 mov #imm,Rn */
	r4 = 0xC28F65Cu; UPD(0x0C0C1008u, 2);  /* 0C0C1006 mov.l @(disp,pc),Rn */
	r5 = 0x23Fu; UPD(0x0C0C100Au, 1);  /* 0C0C1008 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C0C100A mov #imm,Rn */
	UPD(0x0C0C100Cu, 1);
L_0C0C100C: BLKS(0x0C0C100Cu);
	r3 = r7;  /* 0C0C100C mov Rm,Rn */
	r3 += r4;  /* 0C0C100E add Rm,Rn */
	r0 = R32(r3); UPD(0x0C0C1012u, 3);  /* 0C0C1010 mov.l @Rm,Rn */
	r3 += 0x34u;  /* 0C0C1012 add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r3); UPD(0x0C0C1016u, 2);  /* 0C0C1014 mov.b @Rm,Rn */
	IF(0x0C0C1016u); r0 >>= 2;  /* 0C0C1016 shlr2 Rn */
	r12 = r13 & 0xFF;  /* 0C0C1018 extu.b Rm,Rn */
	T = r12 == r8;  /* 0C0C101A cmp/eq Rm,Rn */
	IF(0x0C0C101Cu); r0 >>= 2;  /* 0C0C101C shlr2 Rn */
	IF(0x0C0C101Eu); r11 = T;  /* 0C0C101E movt Rn */
	r0 &= 0x1u;  /* 0C0C1020 and #imm,r0 */
	r0 &= r11;  /* 0C0C1022 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0C1024 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFCCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C1040u, 11); goto L_0C0C1040; } goto L_0C0C102A; }  /* 0C0C1026 bt/s */
L_0C0C102A: BLKS(0x0C0C102Au);
	r11 = R32(r3 + 0x10u); UPD(0x0C0C102Cu, 2);  /* 0C0C102A mov.l @(disp,Rm),Rn */
	r1 = R32(r3 + 0x14u); UPD(0x0C0C102Eu, 1);  /* 0C0C102C mov.l @(disp,Rm),Rn */
	r11 -= r10;  /* 0C0C102E sub Rm,Rn */
	r1 += r9;  /* 0C0C1030 add Rm,Rn */
	r0 = 0xFFC00000u; UPD(0x0C0C1034u, 3);  /* 0C0C1032 mov.l @(disp,pc),Rn */
	W32(r3 + 0x10u, r11); UPD(0x0C0C1036u, 1);  /* 0C0C1034 mov.l Rm,@(disp,Rn) */
	T = (s32)r11 >= (s32)r0;  /* 0C0C1036 cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x14u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0C1040u, 4); goto L_0C0C1040; } UPD(0x0C0C103Cu, 1); goto L_0C0C103C; }  /* 0C0C1038 bt/s */
L_0C0C103C: BLKS(0x0C0C103Cu);
	r2 = 0x0u;  /* 0C0C103C mov #imm,Rn */
	W32(r3, r2); UPD(0x0C0C1040u, 2);  /* 0C0C103E mov.l Rm,@Rn */
L_0C0C1040: BLKS(0x0C0C1040u);
	r3 = r6;  /* 0C0C1040 mov Rm,Rn */
	r3 += 0x1u;  /* 0C0C1042 add #imm,Rn */
	r6 = (u32)(s32)(s16)r3;  /* 0C0C1044 exts.w Rm,Rn */
	T = (s32)r6 > (s32)r5;  /* 0C0C1046 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C100Cu, 7); goto L_0C0C100C; } goto L_0C0C104C; }  /* 0C0C1048 bf/s */
L_0C0C104C: BLKS(0x0C0C104Cu);
	r11 = 0x100u; UPD(0x0C0C104Eu, 2);  /* 0C0C104C mov.w @(disp,pc),Rn */
	r13 = 0xC3BC7CCu; UPD(0x0C0C1050u, 1);  /* 0C0C104E mov.l @(disp,pc),Rn */
	r12 = 0x6000u; UPD(0x0C0C1052u, 1);  /* 0C0C1050 mov.w @(disp,pc),Rn */
L_0C0C1052: BLKS(0x0C0C1052u);
	r3 = r12;  /* 0C0C1052 mov Rm,Rn */
	r3 += r13;  /* 0C0C1054 add Rm,Rn */
	r0 = R32(r3); UPD(0x0C0C1058u, 3);  /* 0C0C1056 mov.l @Rm,Rn */
	r3 += 0x48u;  /* 0C0C1058 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C0C105Cu, 2);  /* 0C0C105A mov.b @Rm,Rn */
	IF(0x0C0C105Cu); r0 >>= 2;  /* 0C0C105C shlr2 Rn */
	r5 = r7 & 0xFF;  /* 0C0C105E extu.b Rm,Rn */
	T = r5 == r8;  /* 0C0C1060 cmp/eq Rm,Rn */
	IF(0x0C0C1062u); r0 >>= 2;  /* 0C0C1062 shlr2 Rn */
	IF(0x0C0C1064u); r4 = T;  /* 0C0C1064 movt Rn */
	r0 &= 0x1u;  /* 0C0C1066 and #imm,r0 */
	r0 &= r4;  /* 0C0C1068 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0C106A tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFB8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C1082u, 11); goto L_0C0C1082; } goto L_0C0C1070; }  /* 0C0C106C bt/s */
L_0C0C1070: BLKS(0x0C0C1070u);
	r0 = R32(r3 + 0x28u); UPD(0x0C0C1072u, 2);  /* 0C0C1070 mov.l @(disp,Rm),Rn */
	r1 = R32(r3 + 0x2Cu); UPD(0x0C0C1074u, 1);  /* 0C0C1072 mov.l @(disp,Rm),Rn */
	r0 -= r10;  /* 0C0C1074 sub Rm,Rn */
	r1 += r9;  /* 0C0C1076 add Rm,Rn */
	r6 = 0xFFF00000u; UPD(0x0C0C107Au, 3);  /* 0C0C1078 mov.l @(disp,pc),Rn */
	W32(r3 + 0x28u, r0); UPD(0x0C0C107Cu, 1);  /* 0C0C107A mov.l Rm,@(disp,Rn) */
	T = (s32)r0 >= (s32)r6;  /* 0C0C107C cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r3 + 0x2Cu, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0C10B0u, 4); goto L_0C0C10B0; } UPD(0x0C0C1082u, 1); goto L_0C0C1082; }  /* 0C0C107E bf/s */
L_0C0C1082: BLKS(0x0C0C1082u);
	r3 = r11;  /* 0C0C1082 mov Rm,Rn */
	UPD(0x0C0C1084u, 1);
L_0C0C1084: BLKS(0x0C0C1084u);
	r3 += 0x1u;  /* 0C0C1084 add #imm,Rn */
	r2 = 0x13Fu; UPD(0x0C0C1088u, 2);  /* 0C0C1086 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r3;  /* 0C0C1088 exts.w Rm,Rn */
	T = (s32)r11 > (s32)r2;  /* 0C0C108A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 += 0x60u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C1052u, 5); goto L_0C0C1052; } goto L_0C0C1090; }  /* 0C0C108C bf/s */
L_0C0C1090: BLKS(0x0C0C1090u);
	r15 = r14;  /* 0C0C1090 mov Rm,Rn */
	IF(0x0C0C1092u); PR = R32(r15); r15 += 4; UPD(0x0C0C1094u, 3);  /* 0C0C1092 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C1096u, 1);  /* 0C0C1094 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0C1098u, 1);  /* 0C0C1096 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C109Au, 1);  /* 0C0C1098 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C109Cu, 1);  /* 0C0C109A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C109Eu, 1);  /* 0C0C109C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C10A0u, 1);  /* 0C0C109E mov.l @Rm+,Rn */
	IF(0x0C0C10A0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C10A0 rts */
L_0C0C10B0: BLKS(0x0C0C10B0u);
	r0 = 0xC07C910u; UPD(0x0C0C10B2u, 1);  /* 0C0C10B0 mov.l @(disp,pc),Rn */
	IF(0x0C0C10B2u); { u32 t_ = r0; PR = 0x0C0C10B6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07C910, 0x0C07C910u, 0x0C0C10B6u); }  /* 0C0C10B2 jsr @Rn */
L_0C0C10B6: BLKS(0x0C0C10B6u);
	{ r3 = r11; /* slot mov Rm,Rn */ UPD(0x0C0C1084u, 3); goto L_0C0C1084; }  /* 0C0C10B6 bra */
L_0C0C10C0: BLKS(0x0C0C10C0u);
	r7 = 0xC0C13C0u; UPD(0x0C0C10C2u, 1);  /* 0C0C10C0 mov.l @(disp,pc),Rn */
	IF(0x0C0C10C2u); { u32 t_ = r7; PR = 0x0C0C10C6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C13C0, 0x0C0C13C0u, 0x0C0C10C6u); }  /* 0C0C10C2 jsr @Rn */
L_0C0C10C6: BLKS(0x0C0C10C6u);
	{ IF(0x0C0C10C8u); ; /* slot nop */ UPD(0x0C0C0F8Cu, 3); goto L_0C0C0F8C; }  /* 0C0C10C6 bra */
L_0C0C10D0: BLKS(0x0C0C10D0u);
	r5 = 0xFFu; UPD(0x0C0C10D2u, 1);  /* 0C0C10D0 mov.w @(disp,pc),Rn */
	{ r2 += r5; /* slot add Rm,Rn */ UPD(0x0C0C0F4Au, 3); goto L_0C0C0F4A; }  /* 0C0C10D2 bra */
L_0C0C10E0: BLKS(0x0C0C10E0u);
	r0 = 0xFFu; UPD(0x0C0C10E2u, 1);  /* 0C0C10E0 mov.w @(disp,pc),Rn */
	{ r2 += r0; /* slot add Rm,Rn */ UPD(0x0C0C0F30u, 3); goto L_0C0C0F30; }  /* 0C0C10E2 bra */
}

/* FUN_0c0c1140 */
void blk_f_0C0C1140(sh3_t *c)
{
	LOCALS;
L_0C0C1140: BLKS(0x0C0C1140u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1142u, 1);  /* 0C0C1140 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0C1142 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1146u, 2);  /* 0C0C1144 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0C1146 mov #imm,Rn */
	IF(0x0C0C1148u); MACL = r4 * r2;  /* 0C0C1148 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C114Cu, 4);  /* 0C0C114A mov.l Rm,@-Rn */
	r0 = 0xC286318u; UPD(0x0C0C114Eu, 1);  /* 0C0C114C mov.l @(disp,pc),Rn */
	IF(0x0C0C114Eu); r3 = MACL;  /* 0C0C114E sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1152u, 2);  /* 0C0C1150 mov.l Rm,@-Rn */
	r3 += r0;  /* 0C0C1152 add Rm,Rn */
	r0 = 0xFFE00000u; UPD(0x0C0C1156u, 2);  /* 0C0C1154 mov.l @(disp,pc),Rn */
	r1 = R32(r3 + 0x18u); UPD(0x0C0C1158u, 1);  /* 0C0C1156 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x8u); UPD(0x0C0C115Au, 1);  /* 0C0C1158 mov.l @(disp,Rm),Rn */
	r1 &= r0;  /* 0C0C115A and Rm,Rn */
	r0 &= r7;  /* 0C0C115C and Rm,Rn */
	T = r1 == r0;  /* 0C0C115E cmp/eq Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C11D6u, 6); goto L_0C0C11D6; } goto L_0C0C1164; }  /* 0C0C1160 bt/s */
L_0C0C1164: BLKS(0x0C0C1164u);
	W32(r3 + 0x18u, r7); UPD(0x0C0C1166u, 2);  /* 0C0C1164 mov.l Rm,@(disp,Rn) */
	r9 = R32(r3 + 0x28u); UPD(0x0C0C1168u, 1);  /* 0C0C1166 mov.l @(disp,Rm),Rn */
	r8 = R32(r3 + 0x2Cu); UPD(0x0C0C116Au, 1);  /* 0C0C1168 mov.l @(disp,Rm),Rn */
	r5 = 0xC23945Cu; UPD(0x0C0C116Cu, 1);  /* 0C0C116A mov.l @(disp,pc),Rn */
	r3 = R32(r5); UPD(0x0C0C116Eu, 1);  /* 0C0C116C mov.l @Rm,Rn */
	IF(0x0C0C116Eu); T = (s32)r3 > 0;  /* 0C0C116E cmp/pl Rn */
	{ u32 c_ = !T; r10 = (r7 >> 16) | (r7 << 16); /* slot swap.w Rm,Rn */ if (c_) { UPD(0x0C0C1240u, 4); goto L_0C0C1240; } goto L_0C0C1174; }  /* 0C0C1170 bf/s */
L_0C0C1174: BLKS(0x0C0C1174u);
	r6 = 0x1A0u; UPD(0x0C0C1176u, 2);  /* 0C0C1174 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r10;  /* 0C0C1176 exts.w Rm,Rn */
	r0 += r6;  /* 0C0C1178 add Rm,Rn */
	UPD(0x0C0C117Au, 2);
L_0C0C117A: BLKS(0x0C0C117Au);
	IF(0x0C0C117Au); T = (s32)r0 >= 0;  /* 0C0C117A cmp/pz Rn */
	if (!T) { UPD(0x0C0C1230u, 4); goto L_0C0C1230; }  /* 0C0C117C bf */
L_0C0C117E: BLKS(0x0C0C117Eu);
	r2 = 0x4Cu;  /* 0C0C117E mov #imm,Rn */
	IF(0x0C0C1180u); MACL = r4 * r2;  /* 0C0C1180 mul.l Rm,Rn */
	r7 = r0;  /* 0C0C1182 mov Rm,Rn */
	r6 = 0xC286318u; UPD(0x0C0C1186u, 5);  /* 0C0C1184 mov.l @(disp,pc),Rn */
	IF(0x0C0C1186u); r0 = MACL;  /* 0C0C1186 sts macl,Rn */
	r10 = 0xFFFFFFFBu;  /* 0C0C1188 mov #imm,Rn */
	IF(0x0C0C118Au); r5 = R32(r0 + r6); UPD(0x0C0C118Cu, 3);  /* 0C0C118A mov.l @(r0,Rm),Rn */
	r3 = 0x4000000u; UPD(0x0C0C118Eu, 1);  /* 0C0C118C mov.l @(disp,pc),Rn */
	T = (r5 & r3) == 0;  /* 0C0C118E tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0C1192u); ARG0(0x47ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ if (c_) { UPD(0x0C0C11F0u, 4); goto L_0C0C11F0; } goto L_0C0C1194; }  /* 0C0C1190 bf/s */
L_0C0C1194: BLKS(0x0C0C1194u);
	r6 = 0xAu;  /* 0C0C1194 mov #imm,Rn */
	IF(0x0C0C1196u); MACL = r7 * r6;  /* 0C0C1196 mul.l Rm,Rn */
	r10 = r4;  /* 0C0C1198 mov Rm,Rn */
	r4 = 0x4u;  /* 0C0C119A mov #imm,Rn */
	IF(0x0C0C119Cu); ARG0(0x4A4Du); { s32 s_ = (s32)r4; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = 0; else r10 >>= ((~s_ & 31) + 1); }  /* 0C0C119C shld Rm,Rn */
	r5 = 0x3u;  /* 0C0C119E mov #imm,Rn */
	r0 = 0xFu;  /* 0C0C11A0 mov #imm,Rn */
	IF(0x0C0C11A2u); r2 = MACL;  /* 0C0C11A2 sts macl,Rn */
	r0 &= r7;  /* 0C0C11A4 and Rm,Rn */
	IF(0x0C0C11A6u); ARG0(0x425Du); { s32 s_ = (s32)r5; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C0C11A6 shld Rm,Rn */
	r10 += r0;  /* 0C0C11A8 add Rm,Rn */
	r0 = 0x6u;  /* 0C0C11AA mov #imm,Rn */
	r4 = 0xC2398A0u; UPD(0x0C0C11AEu, 15);  /* 0C0C11AC mov.l @(disp,pc),Rn */
	IF(0x0C0C11AEu); ARG0(0x4A0Du); { s32 s_ = (s32)r0; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = 0; else r10 >>= ((~s_ & 31) + 1); }  /* 0C0C11AE shld Rm,Rn */
	r7 = 0x3FFFFFFFu; UPD(0x0C0C11B2u, 2);  /* 0C0C11B0 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0C11B2 mov #imm,Rn */
	r5 = 0xC3C86F0u; UPD(0x0C0C11B6u, 2);  /* 0C0C11B4 mov.l @(disp,pc),Rn */
	r6 = 0x9u;  /* 0C0C11B6 mov #imm,Rn */
	UPD(0x0C0C11B8u, 1);
L_0C0C11B8: BLKS(0x0C0C11B8u);
	r0 = r2;  /* 0C0C11B8 mov Rm,Rn */
	IF(0x0C0C11BAu); r1 = R32(r0 + r9); UPD(0x0C0C11BCu, 2);  /* 0C0C11BA mov.l @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C0C11BC add #imm,Rn */
	r0 = r10;  /* 0C0C11BE mov Rm,Rn */
	r1 &= r7;  /* 0C0C11C0 and Rm,Rn */
	IF(0x0C0C11C2u); W32(r0 + r4, r1); UPD(0x0C0C11C4u, 4);  /* 0C0C11C2 mov.l Rm,@(r0,Rn) */
	T = (s32)r3 > (s32)r6;  /* 0C0C11C4 cmp/gt Rm,Rn */
	r0 = r2;  /* 0C0C11C6 mov Rm,Rn */
	IF(0x0C0C11C8u); r1 = R32(r0 + r8); UPD(0x0C0C11CAu, 3);  /* 0C0C11C8 mov.l @(r0,Rm),Rn */
	r2 += 0x8u;  /* 0C0C11CA add #imm,Rn */
	r0 = r10;  /* 0C0C11CC mov Rm,Rn */
	r1 &= r7;  /* 0C0C11CE and Rm,Rn */
	IF(0x0C0C11D0u); W32(r0 + r5, r1); UPD(0x0C0C11D2u, 4);  /* 0C0C11D0 mov.l Rm,@(r0,Rn) */
	{ u32 c_ = !T; r10 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C11B8u, 3); goto L_0C0C11B8; } UPD(0x0C0C11D6u, 1); goto L_0C0C11D6; }  /* 0C0C11D2 bf/s */
L_0C0C11D6: BLKS(0x0C0C11D6u);
	r15 = r14;  /* 0C0C11D6 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C11DAu, 2);  /* 0C0C11D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C11DCu, 1);  /* 0C0C11DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C11DEu, 1);  /* 0C0C11DC mov.l @Rm+,Rn */
	IF(0x0C0C11DEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C11DE rts */
L_0C0C11F0: BLKS(0x0C0C11F0u);
	r10 = 0x4u;  /* 0C0C11F0 mov #imm,Rn */
	r0 = r7;  /* 0C0C11F2 mov Rm,Rn */
	IF(0x0C0C11F4u); ARG0(0x44ADu); { s32 s_ = (s32)r10; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0C11F4 shld Rm,Rn */
	r2 = 0xFu;  /* 0C0C11F6 mov #imm,Rn */
	r7 &= r2;  /* 0C0C11F8 and Rm,Rn */
	r3 = 0x6u;  /* 0C0C11FA mov #imm,Rn */
	r4 += r7;  /* 0C0C11FC add Rm,Rn */
	IF(0x0C0C11FEu); ARG0(0x403Du); { s32 s_ = (s32)r3; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0C11FE shld Rm,Rn */
	IF(0x0C0C1200u); ARG0(0x443Du); { s32 s_ = (s32)r3; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0C1200 shld Rm,Rn */
	r5 = 0xC2398A0u; UPD(0x0C0C1204u, 10);  /* 0C0C1202 mov.l @(disp,pc),Rn */
	r3 = 0x8u;  /* 0C0C1204 mov #imm,Rn */
	r6 = 0x3FFFFFFFu; UPD(0x0C0C1208u, 2);  /* 0C0C1206 mov.l @(disp,pc),Rn */
	r7 = 0xC3C86F0u; UPD(0x0C0C120Au, 1);  /* 0C0C1208 mov.l @(disp,pc),Rn */
	IF(0x0C0C120Au); ;  /* 0C0C120A nop */
	UPD(0x0C0C120Cu, 1);
L_0C0C120C: BLKS(0x0C0C120Cu);
	IF(0x0C0C120Cu); r2 = R32(r0 + r9); UPD(0x0C0C120Eu, 1);  /* 0C0C120C mov.l @(r0,Rm),Rn */
	r10 = r4;  /* 0C0C120E mov Rm,Rn */
	r10 += r5;  /* 0C0C1210 add Rm,Rn */
	r2 &= r6;  /* 0C0C1212 and Rm,Rn */
	W32(r10 + 0x4u, r2); UPD(0x0C0C1216u, 4);  /* 0C0C1214 mov.l Rm,@(disp,Rn) */
	IF(0x0C0C1216u); r3 -= 1; T = r3 == 0;  /* 0C0C1216 dt Rn */
	IF(0x0C0C1218u); r2 = R32(r0 + r8); UPD(0x0C0C121Au, 2);  /* 0C0C1218 mov.l @(r0,Rm),Rn */
	r10 = r4;  /* 0C0C121A mov Rm,Rn */
	r10 += r7;  /* 0C0C121C add Rm,Rn */
	r2 &= r6;  /* 0C0C121E and Rm,Rn */
	W32(r10 + 0x4u, r2); UPD(0x0C0C1222u, 4);  /* 0C0C1220 mov.l Rm,@(disp,Rn) */
	r0 += 0x8u;  /* 0C0C1222 add #imm,Rn */
	{ u32 c_ = !T; r4 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C120Cu, 4); goto L_0C0C120C; } goto L_0C0C1228; }  /* 0C0C1224 bf/s */
L_0C0C1228: BLKS(0x0C0C1228u);
	{ IF(0x0C0C122Au); ; /* slot nop */ UPD(0x0C0C11D6u, 4); goto L_0C0C11D6; }  /* 0C0C1228 bra */
L_0C0C1230: BLKS(0x0C0C1230u);
	{ r0 += 0x1Fu; /* slot add #imm,Rn */ UPD(0x0C0C117Eu, 3); goto L_0C0C117E; }  /* 0C0C1230 bra */
L_0C0C1240: BLKS(0x0C0C1240u);
	r0 = (r7 >> 16) | (r7 << 16);  /* 0C0C1240 swap.w Rm,Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C0C1242 exts.w Rm,Rn */
	r0 = r7;  /* 0C0C1244 mov Rm,Rn */
	{ r0 += 0xFFFFFFD0u; /* slot add #imm,Rn */ UPD(0x0C0C117Au, 6); goto L_0C0C117A; }  /* 0C0C1246 bra */
}

/* FUN_0c0c1270 */
void blk_f_0C0C1270(sh3_t *c)
{
	LOCALS;
L_0C0C1270: BLKS(0x0C0C1270u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1272u, 1);  /* 0C0C1270 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0C1272 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1276u, 2);  /* 0C0C1274 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1278u, 1);  /* 0C0C1276 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C127Au, 1);  /* 0C0C1278 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C127Cu, 1);  /* 0C0C127A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0C127Eu, 1);  /* 0C0C127C mov.l Rm,@-Rn */
	r2 = 0xC3C4165u; UPD(0x0C0C1280u, 1);  /* 0C0C127E mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1282u, 1);  /* 0C0C1280 mov.l Rm,@-Rn */
	r6 = 0xC29D728u; UPD(0x0C0C1284u, 1);  /* 0C0C1282 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0C1284 add #imm,Rn */
	r5 = 0xC22E2A4u; UPD(0x0C0C1288u, 2);  /* 0C0C1286 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0C1288 mov Rm,Rn */
	r4 = 0xC239454u; UPD(0x0C0C128Cu, 2);  /* 0C0C128A mov.l @(disp,pc),Rn */
	r3 = 0xC23945Cu; UPD(0x0C0C128Eu, 1);  /* 0C0C128C mov.l @(disp,pc),Rn */
	W8(r2, r0); UPD(0x0C0C1290u, 1);  /* 0C0C128E mov.b Rm,@Rn */
	W32(r6, r0); UPD(0x0C0C1292u, 1);  /* 0C0C1290 mov.l Rm,@Rn */
	W32(r5, r0); UPD(0x0C0C1294u, 1);  /* 0C0C1292 mov.l Rm,@Rn */
	W32(r4, r0); UPD(0x0C0C1296u, 1);  /* 0C0C1294 mov.l Rm,@Rn */
	W32(r3, r0); UPD(0x0C0C1298u, 1);  /* 0C0C1296 mov.l Rm,@Rn */
	W32(r14, r0); UPD(0x0C0C129Au, 1);  /* 0C0C1298 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0C129Cu, 1);  /* 0C0C129A mov.l Rm,@(disp,Rn) */
L_0C0C129C: BLKS(0x0C0C129Cu);
	r1 = R32(r14 + 0x4u); UPD(0x0C0C129Eu, 1);  /* 0C0C129C mov.l @(disp,Rm),Rn */
	r7 = 0xC286318u; UPD(0x0C0C12A0u, 1);  /* 0C0C129E mov.l @(disp,pc),Rn */
	r1 += r7;  /* 0C0C12A0 add Rm,Rn */
	r2 = R32(r1); UPD(0x0C0C12A4u, 2);  /* 0C0C12A2 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0C12A4 tst Rm,Rn */
	{ u32 c_ = T; r6 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0C130Eu, 4); goto L_0C0C130E; } UPD(0x0C0C12AAu, 1); goto L_0C0C12AA; }  /* 0C0C12A6 bt/s */
L_0C0C12AA: BLKS(0x0C0C12AAu);
	r0 = 0x4000000u; UPD(0x0C0C12ACu, 1);  /* 0C0C12AA mov.l @(disp,pc),Rn */
	r4 = R32(r1 + 0x28u); UPD(0x0C0C12AEu, 1);  /* 0C0C12AC mov.l @(disp,Rm),Rn */
	T = (r2 & r0) == 0;  /* 0C0C12AE tst Rm,Rn */
	{ u32 c_ = !T; r5 = R32(r1 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0C1340u, 4); goto L_0C0C1340; } UPD(0x0C0C12B4u, 1); goto L_0C0C12B4; }  /* 0C0C12B0 bf/s */
L_0C0C12B4: BLKS(0x0C0C12B4u);
	r13 = R32(r14); UPD(0x0C0C12B6u, 1);  /* 0C0C12B4 mov.l @Rm,Rn */
	r8 = 0x4u;  /* 0C0C12B6 mov #imm,Rn */
	IF(0x0C0C12B8u); ARG0(0x4D8Du); { s32 s_ = (s32)r8; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C0C12B8 shld Rm,Rn */
	r7 = 0x3FFFFFFFu; UPD(0x0C0C12BCu, 3);  /* 0C0C12BA mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0C12BC mov #imm,Rn */
	r8 = 0xC2398A0u; UPD(0x0C0C12C0u, 2);  /* 0C0C12BE mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0C12C0 mov #imm,Rn */
	r6 = 0xC3C86F0u; UPD(0x0C0C12C4u, 2);  /* 0C0C12C2 mov.l @(disp,pc),Rn */
	r11 = 0x9u;  /* 0C0C12C4 mov #imm,Rn */
	UPD(0x0C0C12C6u, 1);
L_0C0C12C6: BLKS(0x0C0C12C6u);
	r12 = 0xFu;  /* 0C0C12C6 mov #imm,Rn */
	r12 &= r9;  /* 0C0C12C8 and Rm,Rn */
	r3 = 0x6u;  /* 0C0C12CA mov #imm,Rn */
	r12 += r13;  /* 0C0C12CC add Rm,Rn */
	IF(0x0C0C12CEu); ARG0(0x4C3Du); { s32 s_ = (s32)r3; if (s_ >= 0) r12 <<= (s_ & 31); else if ((s_ & 31) == 0) r12 = 0; else r12 >>= ((~s_ & 31) + 1); }  /* 0C0C12CE shld Rm,Rn */
	r2 = r10;  /* 0C0C12D0 mov Rm,Rn */
	r1 = 0x3u;  /* 0C0C12D2 mov #imm,Rn */
	r3 = r11;  /* 0C0C12D4 mov Rm,Rn */
	IF(0x0C0C12D6u); ARG0(0x421Du); { s32 s_ = (s32)r1; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C0C12D6 shld Rm,Rn */
	r3 += 0x1u;  /* 0C0C12D8 add #imm,Rn */
	IF(0x0C0C12DAu); ;  /* 0C0C12DA nop */
	UPD(0x0C0C12DCu, 11);
L_0C0C12DC: BLKS(0x0C0C12DCu);
	r0 = r2;  /* 0C0C12DC mov Rm,Rn */
	IF(0x0C0C12DEu); r1 = R32(r0 + r4); UPD(0x0C0C12E0u, 2);  /* 0C0C12DE mov.l @(r0,Rm),Rn */
	IF(0x0C0C12E0u); r3 -= 1; T = r3 == 0;  /* 0C0C12E0 dt Rn */
	r0 = r12;  /* 0C0C12E2 mov Rm,Rn */
	r1 &= r7;  /* 0C0C12E4 and Rm,Rn */
	IF(0x0C0C12E6u); W32(r0 + r8, r1); UPD(0x0C0C12E8u, 4);  /* 0C0C12E6 mov.l Rm,@(r0,Rn) */
	r0 = r2;  /* 0C0C12E8 mov Rm,Rn */
	IF(0x0C0C12EAu); r1 = R32(r0 + r5); UPD(0x0C0C12ECu, 2);  /* 0C0C12EA mov.l @(r0,Rm),Rn */
	r2 += 0x8u;  /* 0C0C12EC add #imm,Rn */
	r0 = r12;  /* 0C0C12EE mov Rm,Rn */
	r1 &= r7;  /* 0C0C12F0 and Rm,Rn */
	IF(0x0C0C12F2u); W32(r0 + r6, r1); UPD(0x0C0C12F4u, 4);  /* 0C0C12F2 mov.l Rm,@(r0,Rn) */
	{ u32 c_ = !T; r12 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C12DCu, 3); goto L_0C0C12DC; } goto L_0C0C12F8; }  /* 0C0C12F4 bf/s */
L_0C0C12F8: BLKS(0x0C0C12F8u);
	r9 += 0x1u;  /* 0C0C12F8 add #imm,Rn */
	r12 = 0xFu;  /* 0C0C12FA mov #imm,Rn */
	T = (s32)r9 > (s32)r12;  /* 0C0C12FC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += 0xAu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C12C6u, 7); goto L_0C0C12C6; } UPD(0x0C0C1302u, 1); goto L_0C0C1302; }  /* 0C0C12FE bf/s */
L_0C0C1302: BLKS(0x0C0C1302u);
	r9 = 0xC286318u; UPD(0x0C0C1304u, 1);  /* 0C0C1302 mov.l @(disp,pc),Rn */
	r13 = R32(r14 + 0x4u); UPD(0x0C0C1306u, 1);  /* 0C0C1304 mov.l @(disp,Rm),Rn */
	r9 += r13;  /* 0C0C1306 add Rm,Rn */
	r11 = R32(r9 + 0x8u); UPD(0x0C0C130Au, 2);  /* 0C0C1308 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x18u, r11); UPD(0x0C0C130Cu, 1);  /* 0C0C130A mov.l Rm,@(disp,Rn) */
	r6 = R32(r14); UPD(0x0C0C130Eu, 1);  /* 0C0C130C mov.l @Rm,Rn */
L_0C0C130E: BLKS(0x0C0C130Eu);
	r4 = 0x7u;  /* 0C0C130E mov #imm,Rn */
	r6 += 0x1u;  /* 0C0C1310 add #imm,Rn */
	r8 = R32(r14 + 0x4u); UPD(0x0C0C1314u, 3);  /* 0C0C1312 mov.l @(disp,Rm),Rn */
	W32(r14, r6); UPD(0x0C0C1316u, 1);  /* 0C0C1314 mov.l Rm,@Rn */
	r8 += 0x4Cu;  /* 0C0C1316 add #imm,Rn */
	r5 = R32(r14); UPD(0x0C0C131Au, 2);  /* 0C0C1318 mov.l @Rm,Rn */
	T = (s32)r5 > (s32)r4;  /* 0C0C131A cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x4u, r8); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0C129Cu, 4); goto L_0C0C129C; } UPD(0x0C0C1320u, 1); goto L_0C0C1320; }  /* 0C0C131C bf/s */
L_0C0C1320: BLKS(0x0C0C1320u);
	r14 += 0x8u;  /* 0C0C1320 add #imm,Rn */
	r15 = r14;  /* 0C0C1322 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C1326u, 3);  /* 0C0C1324 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0C1328u, 1);  /* 0C0C1326 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C132Au, 1);  /* 0C0C1328 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C132Cu, 1);  /* 0C0C132A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C132Eu, 1);  /* 0C0C132C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C1330u, 1);  /* 0C0C132E mov.l @Rm+,Rn */
	IF(0x0C0C1330u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C1330 rts */
L_0C0C1340: BLKS(0x0C0C1340u);
	r13 = R32(r14); UPD(0x0C0C1342u, 1);  /* 0C0C1340 mov.l @Rm,Rn */
	r10 = 0x4u;  /* 0C0C1342 mov #imm,Rn */
	IF(0x0C0C1344u); ARG0(0x4DADu); { s32 s_ = (s32)r10; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C0C1344 shld Rm,Rn */
	r11 = 0xC2398A0u; UPD(0x0C0C1348u, 3);  /* 0C0C1346 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0C1348 mov #imm,Rn */
	r8 = 0x3FFFFFFFu; UPD(0x0C0C134Cu, 2);  /* 0C0C134A mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0C134C mov #imm,Rn */
	r10 = 0xC3C86F0u; UPD(0x0C0C1350u, 2);  /* 0C0C134E mov.l @(disp,pc),Rn */
L_0C0C1350: BLKS(0x0C0C1350u);
	r0 = r9;  /* 0C0C1350 mov Rm,Rn */
	r0 &= 0xFu;  /* 0C0C1352 and #imm,r0 */
	r7 = 0x40u;  /* 0C0C1354 mov #imm,Rn */
	r0 += r13;  /* 0C0C1356 add Rm,Rn */
	IF(0x0C0C1358u); MACL = r0 * r7;  /* 0C0C1358 mul.l Rm,Rn */
	r3 = 0x7u;  /* 0C0C135A mov #imm,Rn */
	r6 = r12;  /* 0C0C135C mov Rm,Rn */
	IF(0x0C0C135Eu); r7 = MACL;  /* 0C0C135E sts macl,Rn */
	r3 += 0x1u;  /* 0C0C1360 add #imm,Rn */
	IF(0x0C0C1362u); ;  /* 0C0C1362 nop */
	UPD(0x0C0C1364u, 11);
L_0C0C1364: BLKS(0x0C0C1364u);
	r0 = r6;  /* 0C0C1364 mov Rm,Rn */
	IF(0x0C0C1366u); r1 = R32(r0 + r4); UPD(0x0C0C1368u, 2);  /* 0C0C1366 mov.l @(r0,Rm),Rn */
	r2 = r7;  /* 0C0C1368 mov Rm,Rn */
	r2 += r11;  /* 0C0C136A add Rm,Rn */
	r1 &= r8;  /* 0C0C136C and Rm,Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C0C1370u, 4);  /* 0C0C136E mov.l Rm,@(disp,Rn) */
	r6 += 0x8u;  /* 0C0C1370 add #imm,Rn */
	IF(0x0C0C1372u); r1 = R32(r0 + r5); UPD(0x0C0C1374u, 2);  /* 0C0C1372 mov.l @(r0,Rm),Rn */
	r2 = r7;  /* 0C0C1374 mov Rm,Rn */
	r2 += r10;  /* 0C0C1376 add Rm,Rn */
	r1 &= r8;  /* 0C0C1378 and Rm,Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C0C137Cu, 4);  /* 0C0C137A mov.l Rm,@(disp,Rn) */
	IF(0x0C0C137Cu); r3 -= 1; T = r3 == 0;  /* 0C0C137C dt Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C1364u, 4); goto L_0C0C1364; } goto L_0C0C1382; }  /* 0C0C137E bf/s */
L_0C0C1382: BLKS(0x0C0C1382u);
	r9 += 0x1u;  /* 0C0C1382 add #imm,Rn */
	r2 = 0xFu;  /* 0C0C1384 mov #imm,Rn */
	T = (s32)r9 > (s32)r2;  /* 0C0C1386 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 += 0x40u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C1350u, 7); goto L_0C0C1350; } goto L_0C0C138C; }  /* 0C0C1388 bf/s */
L_0C0C138C: BLKS(0x0C0C138Cu);
	{ IF(0x0C0C138Eu); ; /* slot nop */ UPD(0x0C0C1302u, 4); goto L_0C0C1302; }  /* 0C0C138C bra */
}

/* FUN_0c0c13c0 */
void blk_f_0C0C13C0(sh3_t *c)
{
	LOCALS;
L_0C0C13C0: BLKS(0x0C0C13C0u);
	r1 = (u32)(s32)(s16)r4;  /* 0C0C13C0 exts.w Rm,Rn */
	r0 = 0x4Cu;  /* 0C0C13C2 mov #imm,Rn */
	IF(0x0C0C13C4u); MACL = r1 * r0;  /* 0C0C13C4 mul.l Rm,Rn */
	r3 = 0xC286318u; UPD(0x0C0C13C8u, 5);  /* 0C0C13C6 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0C13C8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C13CCu, 2);  /* 0C0C13CA mov.l Rm,@-Rn */
	IF(0x0C0C13CCu); r0 = MACL;  /* 0C0C13CC sts macl,Rn */
	IF(0x0C0C13CEu); W32(r0 + r3, r2); UPD(0x0C0C13D0u, 2);  /* 0C0C13CE mov.l Rm,@(r0,Rn) */
	r14 = r15;  /* 0C0C13D0 mov Rm,Rn */
	r15 = r14;  /* 0C0C13D2 mov Rm,Rn */
	IF(0x0C0C13D4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0C13D4 rts */
}

void blk_f_0C0C13E0(sh3_t *c)
{
	LOCALS;
L_0C0C13E0: BLKS(0x0C0C13E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C13E2u, 1);  /* 0C0C13E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C13E4u, 1);  /* 0C0C13E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C13E6u, 1);  /* 0C0C13E4 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0C13E6 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C13EAu, 2);  /* 0C0C13E8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0C13EA exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C13EEu, 2);  /* 0C0C13EC mov.l Rm,@-Rn */
	r4 = r10;  /* 0C0C13EE mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0C13F2u, 2);  /* 0C0C13F0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C13F4u, 1);  /* 0C0C13F2 mov.l Rm,@-Rn */
	r0 = 0xC0C0F10u; UPD(0x0C0C13F6u, 1);  /* 0C0C13F4 mov.l @(disp,pc),Rn */
	IF(0x0C0C13F6u); r15 -= 4; W32(r15, PR); UPD(0x0C0C13F8u, 1);  /* 0C0C13F6 sts.l pr,@-Rn */
	IF(0x0C0C13F8u); { u32 t_ = r0; PR = 0x0C0C13FCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0F10, 0x0C0C0F10u, 0x0C0C13FCu); }  /* 0C0C13F8 jsr @Rn */
L_0C0C13FC: BLKS(0x0C0C13FCu);
	r4 = 0x4Cu;  /* 0C0C13FC mov #imm,Rn */
	IF(0x0C0C13FEu); MACL = r10 * r4;  /* 0C0C13FE mul.l Rm,Rn */
	r0 = 0xC286318u; UPD(0x0C0C1402u, 4);  /* 0C0C1400 mov.l @(disp,pc),Rn */
	IF(0x0C0C1402u); r3 = MACL;  /* 0C0C1402 sts macl,Rn */
	r3 += r0;  /* 0C0C1404 add Rm,Rn */
	r3 += 0x44u;  /* 0C0C1406 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0C140Au, 4);  /* 0C0C1408 mov.w @Rm,Rn */
	r12 = r0;  /* 0C0C140A mov Rm,Rn */
	r2 += 0x1u;  /* 0C0C140C add #imm,Rn */
	r13 = 0xC232318u; UPD(0x0C0C1410u, 3);  /* 0C0C140E mov.l @(disp,pc),Rn */
	r11 = 0xC069AF0u; UPD(0x0C0C1412u, 1);  /* 0C0C1410 mov.l @(disp,pc),Rn */
	W16(r3, r2); UPD(0x0C0C1414u, 1);  /* 0C0C1412 mov.w Rm,@Rn */
L_0C0C1414: BLKS(0x0C0C1414u);
	r8 = 0x140u; UPD(0x0C0C1416u, 1);  /* 0C0C1414 mov.w @(disp,pc),Rn */
	r6 = 0x4Cu;  /* 0C0C1416 mov #imm,Rn */
	IF(0x0C0C1418u); MACL = r10 * r8;  /* 0C0C1418 mul.l Rm,Rn */
	r7 = 0xC3C4048u; UPD(0x0C0C141Cu, 4);  /* 0C0C141A mov.l @(disp,pc),Rn */
	r3 = 0x3u;  /* 0C0C141C mov #imm,Rn */
	IF(0x0C0C141Eu); r8 = MACL;  /* 0C0C141E sts macl,Rn */
	IF(0x0C0C1420u); MACL = r10 * r6;  /* 0C0C1420 mul.l Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r7); UPD(0x0C0C1424u, 5);  /* 0C0C1422 mov.w @Rm,Rn */
	r8 += r9;  /* 0C0C1424 add Rm,Rn */
	IF(0x0C0C1426u); r5 = MACL;  /* 0C0C1426 sts macl,Rn */
	r5 += r12;  /* 0C0C1428 add Rm,Rn */
	r5 += 0x44u;  /* 0C0C142A add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r5); UPD(0x0C0C142Eu, 5);  /* 0C0C142C mov.w @Rm,Rn */
	r4 += r9;  /* 0C0C142E add Rm,Rn */
	r2 = r0 & 0xFFFF;  /* 0C0C1430 extu.w Rm,Rn */
	IF(0x0C0C1432u); r2 >>= 2;  /* 0C0C1432 shlr2 Rn */
	r4 += r2;  /* 0C0C1434 add Rm,Rn */
	r5 = 0x30000u; UPD(0x0C0C1438u, 5);  /* 0C0C1436 mov.l @(disp,pc),Rn */
	IF(0x0C0C1438u); { u32 t_ = r11; PR = 0x0C0C143Cu; IF(0x0C0C143Au); ARG0(0x443Du); { s32 s_ = (s32)r3; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); } /* slot shld Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0C143Cu); }  /* 0C0C1438 jsr @Rn */
L_0C0C143C: BLKS(0x0C0C143Cu);
	r6 = r9;  /* 0C0C143C mov Rm,Rn */
	r8 += r8;  /* 0C0C143E add Rm,Rn */
	r7 = (r0 >> 16) | (r0 << 16);  /* 0C0C1440 swap.w Rm,Rn */
	r8 += r13;  /* 0C0C1442 add Rm,Rn */
	r1 = (u32)(s32)(s16)r7;  /* 0C0C1444 exts.w Rm,Rn */
	r6 += 0x1u;  /* 0C0C1446 add #imm,Rn */
	r9 = (u32)(s32)(s16)r6;  /* 0C0C1448 exts.w Rm,Rn */
	r5 = 0x3Fu;  /* 0C0C144A mov #imm,Rn */
	T = (s32)r9 > (s32)r5;  /* 0C0C144C cmp/gt Rm,Rn */
	{ u32 c_ = !T; W16(r8, r1); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0C1414u, 12); goto L_0C0C1414; } UPD(0x0C0C1452u, 1); goto L_0C0C1452; }  /* 0C0C144E bf/s */
L_0C0C1452: BLKS(0x0C0C1452u);
	r15 = r14;  /* 0C0C1452 mov Rm,Rn */
	IF(0x0C0C1454u); PR = R32(r15); r15 += 4; UPD(0x0C0C1456u, 2);  /* 0C0C1454 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C1458u, 1);  /* 0C0C1456 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0C145Au, 1);  /* 0C0C1458 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C145Cu, 1);  /* 0C0C145A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C145Eu, 1);  /* 0C0C145C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C1460u, 1);  /* 0C0C145E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C1462u, 1);  /* 0C0C1460 mov.l @Rm+,Rn */
	IF(0x0C0C1462u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C1462 rts */
}

void blk_f_0C0C1500(sh3_t *c)
{
	LOCALS;
L_0C0C1500: BLKS(0x0C0C1500u);
	IF(0x0C0C1500u); r3 = MACL;  /* 0C0C1500 sts macl,Rn */
	IF(0x0C0C1502u); r6 <<= 16;  /* 0C0C1502 shll16 Rn */
	IF(0x0C0C1504u); ARG0(0x431Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C0C1504 shad Rm,Rn */
	r6 += r2;  /* 0C0C1506 add Rm,Rn */
	r2 = r3 & 0xFF;  /* 0C0C1508 extu.b Rm,Rn */
	r6 += r2;  /* 0C0C150A add Rm,Rn */
	{ u32 c_ = T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C1570u, 9); goto L_0C0C1570; } goto L_0C0C1510; }  /* 0C0C150C bt/s */
L_0C0C1510: BLKS(0x0C0C1510u);
	r0 = 0x140u; UPD(0x0C0C1512u, 2);  /* 0C0C1510 mov.w @(disp,pc),Rn */
	IF(0x0C0C1512u); MACL = r9 * r0;  /* 0C0C1512 mul.l Rm,Rn */
	r11 = 0xC232318u; UPD(0x0C0C1516u, 3);  /* 0C0C1514 mov.l @(disp,pc),Rn */
	r10 = 0xC232314u; UPD(0x0C0C1518u, 1);  /* 0C0C1516 mov.l @(disp,pc),Rn */
	IF(0x0C0C1518u); r9 = MACL;  /* 0C0C1518 sts macl,Rn */
	IF(0x0C0C151Au); ;  /* 0C0C151A nop */
	UPD(0x0C0C151Cu, 2);
L_0C0C151C: BLKS(0x0C0C151Cu);
	r0 = r5;  /* 0C0C151C mov Rm,Rn */
	r0 &= 0x3Fu;  /* 0C0C151E and #imm,r0 */
	r0 += r9;  /* 0C0C1520 add Rm,Rn */
	r0 += r0;  /* 0C0C1522 add Rm,Rn */
	IF(0x0C0C1524u); r3 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C0C1526u, 5);  /* 0C0C1524 mov.w @(r0,Rm),Rn */
	r0 = 0xFFE0u; UPD(0x0C0C1528u, 1);  /* 0C0C1526 mov.l @(disp,pc),Rn */
	r2 = 0x3E0u; UPD(0x0C0C152Au, 1);  /* 0C0C1528 mov.w @(disp,pc),Rn */
	r0 &= r3;  /* 0C0C152A and Rm,Rn */
	r0 += r2;  /* 0C0C152C add Rm,Rn */
	r2 = 0x88u; UPD(0x0C0C1530u, 3);  /* 0C0C152E mov.w @(disp,pc),Rn */
	IF(0x0C0C1530u); r0 <<= 16;  /* 0C0C1530 shll16 Rn */
	W32(r7, r4); UPD(0x0C0C1534u, 2);  /* 0C0C1532 mov.l Rm,@Rn */
	r2 += r5;  /* 0C0C1534 add Rm,Rn */
	r0 |= r2;  /* 0C0C1536 or Rm,Rn */
	r7 += 0x4u;  /* 0C0C1538 add #imm,Rn */
	W32(r7, r0); UPD(0x0C0C153Cu, 4);  /* 0C0C153A mov.l Rm,@Rn */
	r0 = r3;  /* 0C0C153C mov Rm,Rn */
	r2 = R32(r10); UPD(0x0C0C1540u, 2);  /* 0C0C153E mov.l @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0C1540 and #imm,r0 */
	r1 = 0xC29D72Cu; UPD(0x0C0C1544u, 2);  /* 0C0C1542 mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C0C1544 sub Rm,Rn */
	r0 = R32(r1); UPD(0x0C0C1548u, 2);  /* 0C0C1546 mov.l @Rm,Rn */
	IF(0x0C0C1548u); r2 <<= 16;  /* 0C0C1548 shll16 Rn */
	r0 += r5;  /* 0C0C154A add Rm,Rn */
	r2 |= r0;  /* 0C0C154C or Rm,Rn */
	r7 += 0x4u;  /* 0C0C154E add #imm,Rn */
	W32(r7, r2); UPD(0x0C0C1552u, 5);  /* 0C0C1550 mov.l Rm,@Rn */
	r0 = 0x143u; UPD(0x0C0C1554u, 1);  /* 0C0C1552 mov.w @(disp,pc),Rn */
	r2 = 0x1Cu;  /* 0C0C1554 mov #imm,Rn */
	r3 &= r2;  /* 0C0C1556 and Rm,Rn */
	r3 += r0;  /* 0C0C1558 add Rm,Rn */
	r7 += 0x4u;  /* 0C0C155A add #imm,Rn */
	IF(0x0C0C155Cu); r3 <<= 16;  /* 0C0C155C shll16 Rn */
	W32(r7, r3); UPD(0x0C0C1560u, 6);  /* 0C0C155E mov.l Rm,@Rn */
	r2 = r5;  /* 0C0C1560 mov Rm,Rn */
	r7 += 0x4u;  /* 0C0C1562 add #imm,Rn */
	W32(r7, r6); UPD(0x0C0C1566u, 3);  /* 0C0C1564 mov.l Rm,@Rn */
	r2 += 0x1u;  /* 0C0C1566 add #imm,Rn */
	r5 = (u32)(s32)(s16)r2;  /* 0C0C1568 exts.w Rm,Rn */
	T = (s32)r5 >= (s32)r8;  /* 0C0C156A cmp/ge Rm,Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C151Cu, 6); goto L_0C0C151C; } UPD(0x0C0C1570u, 1); goto L_0C0C1570; }  /* 0C0C156C bf/s */
L_0C0C1570: BLKS(0x0C0C1570u);
	r8 = 0xC3C415Cu; UPD(0x0C0C1572u, 1);  /* 0C0C1570 mov.l @(disp,pc),Rn */
	W32(r8, r7); UPD(0x0C0C1574u, 1);  /* 0C0C1572 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0C1574 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C1578u, 2);  /* 0C0C1576 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C157Au, 1);  /* 0C0C1578 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C157Cu, 1);  /* 0C0C157A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C157Eu, 1);  /* 0C0C157C mov.l @Rm+,Rn */
	IF(0x0C0C157Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C157E rts */
}

void blk_f_0C0C15C0(sh3_t *c)
{
	LOCALS;
L_0C0C15C0: BLKS(0x0C0C15C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C15C2u, 1);  /* 0C0C15C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C15C4u, 1);  /* 0C0C15C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C15C6u, 1);  /* 0C0C15C4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0C15C6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C15CAu, 2);  /* 0C0C15C8 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0C15CA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C15CEu, 2);  /* 0C0C15CC mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C0C15CE mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0C15D2u, 2);  /* 0C0C15D0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C15D4u, 1);  /* 0C0C15D2 mov.l Rm,@-Rn */
	r7 = 0xC0C0F10u; UPD(0x0C0C15D6u, 1);  /* 0C0C15D4 mov.l @(disp,pc),Rn */
	IF(0x0C0C15D6u); r15 -= 4; W32(r15, PR); UPD(0x0C0C15D8u, 1);  /* 0C0C15D6 sts.l pr,@-Rn */
	IF(0x0C0C15D8u); { u32 t_ = r7; PR = 0x0C0C15DCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0F10, 0x0C0C0F10u, 0x0C0C15DCu); }  /* 0C0C15D8 jsr @Rn */
L_0C0C15DC: BLKS(0x0C0C15DCu);
	r6 = 0xC20661Cu; UPD(0x0C0C15DEu, 1);  /* 0C0C15DC mov.l @(disp,pc),Rn */
	r5 = 0x4Cu;  /* 0C0C15DE mov #imm,Rn */
	IF(0x0C0C15E0u); MACL = r9 * r5;  /* 0C0C15E0 mul.l Rm,Rn */
	r0 = r6;  /* 0C0C15E2 mov Rm,Rn */
	IF(0x0C0C15E4u); r12 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0C15E6u, 5);  /* 0C0C15E4 mov.b @(r0,Rm),Rn */
	r4 = 0xC286318u; UPD(0x0C0C15E8u, 1);  /* 0C0C15E6 mov.l @(disp,pc),Rn */
	IF(0x0C0C15E8u); r0 = MACL;  /* 0C0C15E8 sts macl,Rn */
	r0 += r4;  /* 0C0C15EA add Rm,Rn */
	r3 = r0;  /* 0C0C15EC mov Rm,Rn */
	r10 = r0;  /* 0C0C15EE mov Rm,Rn */
	r0 = 0x140u; UPD(0x0C0C15F2u, 5);  /* 0C0C15F0 mov.w @(disp,pc),Rn */
	r3 += 0x44u;  /* 0C0C15F2 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0C15F6u, 2);  /* 0C0C15F4 mov.w @Rm,Rn */
	IF(0x0C0C15F6u); MACL = r9 * r0;  /* 0C0C15F6 mul.l Rm,Rn */
	r2 += 0x1u;  /* 0C0C15F8 add #imm,Rn */
	r13 = 0xC23CAA0u; UPD(0x0C0C15FCu, 4);  /* 0C0C15FA mov.l @(disp,pc),Rn */
	IF(0x0C0C15FCu); r9 = MACL;  /* 0C0C15FC sts macl,Rn */
	W16(r3, r2); UPD(0x0C0C1600u, 2);  /* 0C0C15FE mov.w Rm,@Rn */
	r9 += r9;  /* 0C0C1600 add Rm,Rn */
	IF(0x0C0C1602u); ;  /* 0C0C1602 nop */
	UPD(0x0C0C1604u, 2);
L_0C0C1604: BLKS(0x0C0C1604u);
	r4 = r11;  /* 0C0C1604 mov Rm,Rn */
	r0 = 0xC232318u; UPD(0x0C0C1608u, 2);  /* 0C0C1606 mov.l @(disp,pc),Rn */
	IF(0x0C0C1608u); r4 <<= 2;  /* 0C0C1608 shll2 Rn */
	IF(0x0C0C160Au); W16(r0 + r9, r4); UPD(0x0C0C160Cu, 2);  /* 0C0C160A mov.w Rm,@(r0,Rn) */
	r10 += 0x44u;  /* 0C0C160C add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C0C1610u, 2);  /* 0C0C160E mov.w @Rm,Rn */
	r8 = r9;  /* 0C0C1610 mov Rm,Rn */
	r3 = r2 & 0xFFFF;  /* 0C0C1612 extu.w Rm,Rn */
	r3 += r11;  /* 0C0C1614 add Rm,Rn */
	IF(0x0C0C1616u); MACL = r3 * r12;  /* 0C0C1616 mul.l Rm,Rn */
	r0 = 0xC069AF0u; UPD(0x0C0C161Au, 6);  /* 0C0C1618 mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFBCu;  /* 0C0C161A add #imm,Rn */
	IF(0x0C0C161Cu); r4 = MACL;  /* 0C0C161C sts macl,Rn */
	IF(0x0C0C161Eu); { u32 t_ = r0; PR = 0x0C0C1622u; r5 = R32(r10 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0C1622u); }  /* 0C0C161E jsr @Rn */
L_0C0C1622: BLKS(0x0C0C1622u);
	r8 += r13;  /* 0C0C1622 add Rm,Rn */
	r0 += 0x28u;  /* 0C0C1624 add #imm,Rn */
	W16(r8, r0); UPD(0x0C0C1628u, 3);  /* 0C0C1626 mov.w Rm,@Rn */
	r0 = r11;  /* 0C0C1628 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0C162A add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C0C162C exts.w Rm,Rn */
	r8 = 0x51u;  /* 0C0C162E mov #imm,Rn */
	T = (s32)r11 > (s32)r8;  /* 0C0C1630 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C1604u, 8); goto L_0C0C1604; } goto L_0C0C1636; }  /* 0C0C1632 bf/s */
L_0C0C1636: BLKS(0x0C0C1636u);
	r15 = r14;  /* 0C0C1636 mov Rm,Rn */
	IF(0x0C0C1638u); PR = R32(r15); r15 += 4; UPD(0x0C0C163Au, 3);  /* 0C0C1638 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C163Cu, 1);  /* 0C0C163A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0C163Eu, 1);  /* 0C0C163C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C1640u, 1);  /* 0C0C163E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C1642u, 1);  /* 0C0C1640 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C1644u, 1);  /* 0C0C1642 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C1646u, 1);  /* 0C0C1644 mov.l @Rm+,Rn */
	IF(0x0C0C1646u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C1646 rts */
}

void blk_f_0C0C1670(sh3_t *c)
{
	LOCALS;
L_0C0C1670: BLKS(0x0C0C1670u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1672u, 1);  /* 0C0C1670 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1674u, 1);  /* 0C0C1672 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1676u, 1);  /* 0C0C1674 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1678u, 1);  /* 0C0C1676 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C167Au, 1);  /* 0C0C1678 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0C167Cu, 1);  /* 0C0C167A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C167Eu, 1);  /* 0C0C167C mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0C167E exts.w Rm,Rn */
	r7 = 0xC0C0810u; UPD(0x0C0C1682u, 2);  /* 0C0C1680 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0C1682 mov Rm,Rn */
	IF(0x0C0C1684u); r15 -= 4; W32(r15, PR); UPD(0x0C0C1686u, 2);  /* 0C0C1684 sts.l pr,@-Rn */
	IF(0x0C0C1686u); { u32 t_ = r7; PR = 0x0C0C168Au; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0810, 0x0C0C0810u, 0x0C0C168Au); }  /* 0C0C1686 jsr @Rn */
L_0C0C168A: BLKS(0x0C0C168Au);
	r0 = 0x4Cu;  /* 0C0C168A mov #imm,Rn */
	IF(0x0C0C168Cu); MACL = r13 * r0;  /* 0C0C168C mul.l Rm,Rn */
	r9 = 0xC286318u; UPD(0x0C0C1690u, 4);  /* 0C0C168E mov.l @(disp,pc),Rn */
	IF(0x0C0C1690u); r0 = MACL;  /* 0C0C1690 sts macl,Rn */
	r0 += r9;  /* 0C0C1692 add Rm,Rn */
	r9 = R32(r0); UPD(0x0C0C1696u, 3);  /* 0C0C1694 mov.l @Rm,Rn */
	r0 += 0x3Cu;  /* 0C0C1696 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r6 = v_; } UPD(0x0C0C169Au, 2);  /* 0C0C1698 mov.b @Rm+,Rn */
	r10 = 0x2000000u; UPD(0x0C0C169Cu, 1);  /* 0C0C169A mov.l @(disp,pc),Rn */
	r5 = r6 & 0xFF;  /* 0C0C169C extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r3 = v_; } UPD(0x0C0C16A0u, 2);  /* 0C0C169E mov.b @Rm+,Rn */
	r9 &= r10;  /* 0C0C16A0 and Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r12 = v_; } UPD(0x0C0C16A4u, 2);  /* 0C0C16A2 mov.b @Rm+,Rn */
	IF(0x0C0C16A4u); r5 <<= 16;  /* 0C0C16A4 shll16 Rn */
	r6 = 0xC3C43C4u; UPD(0x0C0C16A8u, 2);  /* 0C0C16A6 mov.l @(disp,pc),Rn */
	r9 |= r5;  /* 0C0C16A8 or Rm,Rn */
	r4 = r3 & 0xFF;  /* 0C0C16AA extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r10 = v_; } UPD(0x0C0C16AEu, 3);  /* 0C0C16AC mov.b @Rm+,Rn */
	IF(0x0C0C16AEu); r4 <<= 8;  /* 0C0C16AE shll8 Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0C16B2u, 2);  /* 0C0C16B0 mov.b @Rm,Rn */
	r9 |= r4;  /* 0C0C16B2 or Rm,Rn */
	r11 = r12 & 0xFF;  /* 0C0C16B4 extu.b Rm,Rn */
	r3 = r10 & 0xFF;  /* 0C0C16B6 extu.b Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0C16B8 extu.b Rm,Rn */
	IF(0x0C0C16BAu); MACL = r3 * r4;  /* 0C0C16BA mul.l Rm,Rn */
	r9 |= r11;  /* 0C0C16BC or Rm,Rn */
	r11 = 0xC29D736u; UPD(0x0C0C16C0u, 8);  /* 0C0C16BE mov.l @(disp,pc),Rn */
	IF(0x0C0C16C0u); r12 = MACL;  /* 0C0C16C0 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r1 = v_; } UPD(0x0C0C16C4u, 2);  /* 0C0C16C2 mov.b @Rm+,Rn */
	r12 += r12;  /* 0C0C16C4 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C0C16C8u, 2);  /* 0C0C16C6 mov.b @Rm,Rn */
	r6 = r1 & 0xFF;  /* 0C0C16C8 extu.b Rm,Rn */
	r5 = r10 & 0xFF;  /* 0C0C16CA extu.b Rm,Rn */
	r2 = 0xC3C415Cu; UPD(0x0C0C16CEu, 3);  /* 0C0C16CC mov.l @(disp,pc),Rn */
	IF(0x0C0C16CEu); r12 >>= 8;  /* 0C0C16CE shlr8 Rn */
	r11 = 0xC3C4171u; UPD(0x0C0C16D2u, 2);  /* 0C0C16D0 mov.l @(disp,pc),Rn */
	IF(0x0C0C16D2u); MACL = r6 * r5;  /* 0C0C16D2 mul.l Rm,Rn */
	r4 = r12 & 0xFF;  /* 0C0C16D4 extu.b Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r0); UPD(0x0C0C16D8u, 4);  /* 0C0C16D6 mov.b @Rm,Rn */
	IF(0x0C0C16D8u); r3 = MACL;  /* 0C0C16D8 sts macl,Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C0C16DCu, 2);  /* 0C0C16DA mov.b @Rm,Rn */
	r6 = r12 & 0xFF;  /* 0C0C16DC extu.b Rm,Rn */
	r7 = R32(r2); UPD(0x0C0C16E0u, 2);  /* 0C0C16DE mov.l @Rm,Rn */
	r5 = r10 & 0xFF;  /* 0C0C16E0 extu.b Rm,Rn */
	r2 = 0x11000000u; UPD(0x0C0C16E4u, 2);  /* 0C0C16E2 mov.l @(disp,pc),Rn */
	IF(0x0C0C16E4u); MACL = r6 * r5;  /* 0C0C16E4 mul.l Rm,Rn */
	r3 += r3;  /* 0C0C16E6 add Rm,Rn */
	IF(0x0C0C16E8u); r3 >>= 8;  /* 0C0C16E8 shlr8 Rn */
	r9 |= r2;  /* 0C0C16EA or Rm,Rn */
	r2 = r3 & 0xFF;  /* 0C0C16EC extu.b Rm,Rn */
	IF(0x0C0C16EEu); r3 = MACL;  /* 0C0C16EE sts macl,Rn */
	r1 = 0xFFFFFFF9u;  /* 0C0C16F0 mov #imm,Rn */
	IF(0x0C0C16F2u); ARG0(0x431Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C0C16F2 shad Rm,Rn */
	IF(0x0C0C16F4u); r4 <<= 16;  /* 0C0C16F4 shll16 Rn */
	IF(0x0C0C16F6u); r2 <<= 8;  /* 0C0C16F6 shll8 Rn */
	r0 = r3 & 0xFF;  /* 0C0C16F8 extu.b Rm,Rn */
	r4 += r2;  /* 0C0C16FA add Rm,Rn */
	r4 += r0;  /* 0C0C16FC add Rm,Rn */
	r0 = 0x140u; UPD(0x0C0C1700u, 15);  /* 0C0C16FE mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0C1700 mov #imm,Rn */
	IF(0x0C0C1702u); MACL = r13 * r0;  /* 0C0C1702 mul.l Rm,Rn */
	r12 = 0xC232318u; UPD(0x0C0C1706u, 4);  /* 0C0C1704 mov.l @(disp,pc),Rn */
	r11 = 0xC23CAA0u; UPD(0x0C0C1708u, 1);  /* 0C0C1706 mov.l @(disp,pc),Rn */
	IF(0x0C0C1708u); r6 = MACL; UPD(0x0C0C170Au, 1);  /* 0C0C1708 sts macl,Rn */
	r10 = 0xC29D72Cu; UPD(0x0C0C170Cu, 1);  /* 0C0C170A mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C0C170C add Rm,Rn */
	r8 = 0xC232314u; UPD(0x0C0C1710u, 2);  /* 0C0C170E mov.l @(disp,pc),Rn */
L_0C0C1710: BLKS(0x0C0C1710u);
	r0 = r6;  /* 0C0C1710 mov Rm,Rn */
	IF(0x0C0C1712u); r13 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C0C1714u, 2);  /* 0C0C1712 mov.w @(r0,Rm),Rn */
	r6 += 0x2u;  /* 0C0C1714 add #imm,Rn */
	IF(0x0C0C1716u); r3 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C0C1718u, 2);  /* 0C0C1716 mov.w @(r0,Rm),Rn */
	r2 = 0x3E0u; UPD(0x0C0C171Au, 1);  /* 0C0C1718 mov.w @(disp,pc),Rn */
	r0 = r13;  /* 0C0C171A mov Rm,Rn */
	r1 = 0xFFE0u; UPD(0x0C0C171Eu, 2);  /* 0C0C171C mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C0C171E add Rm,Rn */
	W32(r7, r9); UPD(0x0C0C1722u, 2);  /* 0C0C1720 mov.l Rm,@Rn */
	r0 += 0x60u;  /* 0C0C1722 add #imm,Rn */
	r0 &= r1;  /* 0C0C1724 and Rm,Rn */
	IF(0x0C0C1726u); r3 <<= 16;  /* 0C0C1726 shll16 Rn */
	r3 |= r0;  /* 0C0C1728 or Rm,Rn */
	r7 += 0x4u;  /* 0C0C172A add #imm,Rn */
	W32(r7, r3); UPD(0x0C0C172Eu, 6);  /* 0C0C172C mov.l Rm,@Rn */
	r0 = r5;  /* 0C0C172E mov Rm,Rn */
	r3 = R32(r8); UPD(0x0C0C1732u, 2);  /* 0C0C1730 mov.l @Rm,Rn */
	IF(0x0C0C1732u); r0 <<= 2;  /* 0C0C1732 shll2 Rn */
	r3 += r0;  /* 0C0C1734 add Rm,Rn */
	r0 = r13;  /* 0C0C1736 mov Rm,Rn */
	r13 = R32(r10); UPD(0x0C0C173Au, 4);  /* 0C0C1738 mov.l @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0C173A and #imm,r0 */
	r13 -= r0;  /* 0C0C173C sub Rm,Rn */
	r2 = r13 & 0xFFFF;  /* 0C0C173E extu.w Rm,Rn */
	IF(0x0C0C1740u); r3 <<= 16;  /* 0C0C1740 shll16 Rn */
	r7 += 0x4u;  /* 0C0C1742 add #imm,Rn */
	r3 |= r2;  /* 0C0C1744 or Rm,Rn */
	W32(r7, r3); UPD(0x0C0C1748u, 7);  /* 0C0C1746 mov.l Rm,@Rn */
	r13 = 0x51u;  /* 0C0C1748 mov #imm,Rn */
	r0 = 0x3010Fu; UPD(0x0C0C174Cu, 2);  /* 0C0C174A mov.l @(disp,pc),Rn */
	r7 += 0x4u;  /* 0C0C174C add #imm,Rn */
	W32(r7, r0); UPD(0x0C0C1750u, 2);  /* 0C0C174E mov.l Rm,@Rn */
	r3 = r5;  /* 0C0C1750 mov Rm,Rn */
	r7 += 0x4u;  /* 0C0C1752 add #imm,Rn */
	W32(r7, r4); UPD(0x0C0C1756u, 3);  /* 0C0C1754 mov.l Rm,@Rn */
	r3 += 0x1u;  /* 0C0C1756 add #imm,Rn */
	r5 = (u32)(s32)(s16)r3;  /* 0C0C1758 exts.w Rm,Rn */
	T = (s32)r5 > (s32)r13;  /* 0C0C175A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C1710u, 6); goto L_0C0C1710; } goto L_0C0C1760; }  /* 0C0C175C bf/s */
L_0C0C1760: BLKS(0x0C0C1760u);
	r8 = 0xC3C415Cu; UPD(0x0C0C1762u, 2);  /* 0C0C1760 mov.l @(disp,pc),Rn */
	W32(r8, r7); UPD(0x0C0C1764u, 1);  /* 0C0C1762 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0C1764 mov Rm,Rn */
	IF(0x0C0C1766u); PR = R32(r15); r15 += 4; UPD(0x0C0C1768u, 2);  /* 0C0C1766 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C176Au, 1);  /* 0C0C1768 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0C176Cu, 1);  /* 0C0C176A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C176Eu, 1);  /* 0C0C176C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C1770u, 1);  /* 0C0C176E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C1772u, 1);  /* 0C0C1770 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C1774u, 1);  /* 0C0C1772 mov.l @Rm+,Rn */
	IF(0x0C0C1774u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C1774 rts */
}

void blk_f_0C0C17C0(sh3_t *c)
{
	LOCALS;
L_0C0C17C0: BLKS(0x0C0C17C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C17C2u, 1);  /* 0C0C17C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C17C4u, 1);  /* 0C0C17C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C17C6u, 1);  /* 0C0C17C4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C17C8u, 1);  /* 0C0C17C6 mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C0C17C8 mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C17CCu, 2);  /* 0C0C17CA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0C17CC exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0C17D0u, 2);  /* 0C0C17CE mov.l Rm,@-Rn */
	r4 = r11;  /* 0C0C17D0 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C17D4u, 2);  /* 0C0C17D2 mov.l Rm,@-Rn */
	r0 = 0xC0C0F10u; UPD(0x0C0C17D6u, 1);  /* 0C0C17D4 mov.l @(disp,pc),Rn */
	IF(0x0C0C17D6u); r15 -= 4; W32(r15, PR); UPD(0x0C0C17D8u, 1);  /* 0C0C17D6 sts.l pr,@-Rn */
	IF(0x0C0C17D8u); { u32 t_ = r0; PR = 0x0C0C17DCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0F10, 0x0C0C0F10u, 0x0C0C17DCu); }  /* 0C0C17D8 jsr @Rn */
L_0C0C17DC: BLKS(0x0C0C17DCu);
	r0 = 0xC2B039Cu; UPD(0x0C0C17DEu, 1);  /* 0C0C17DC mov.l @(disp,pc),Rn */
	r13 = 0xC23CAA0u; UPD(0x0C0C17E0u, 1);  /* 0C0C17DE mov.l @(disp,pc),Rn */
	r9 = R32(r0); UPD(0x0C0C17E2u, 1);  /* 0C0C17E0 mov.l @Rm,Rn */
	IF(0x0C0C17E2u); ;  /* 0C0C17E2 nop */
	UPD(0x0C0C17E4u, 1);
L_0C0C17E4: BLKS(0x0C0C17E4u);
	r1 = 0x140u; UPD(0x0C0C17E6u, 1);  /* 0C0C17E4 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0C17E6 mov #imm,Rn */
	IF(0x0C0C17E8u); MACL = r11 * r1;  /* 0C0C17E8 mul.l Rm,Rn */
	r0 = 0xC232318u; UPD(0x0C0C17ECu, 4);  /* 0C0C17EA mov.l @(disp,pc),Rn */
	r12 = 0x4Cu;  /* 0C0C17EC mov #imm,Rn */
	IF(0x0C0C17EEu); r8 = MACL;  /* 0C0C17EE sts macl,Rn */
	r8 += r10;  /* 0C0C17F0 add Rm,Rn */
	r8 += r8;  /* 0C0C17F2 add Rm,Rn */
	IF(0x0C0C17F4u); W16(r0 + r8, r3); UPD(0x0C0C17F6u, 5);  /* 0C0C17F4 mov.w Rm,@(r0,Rn) */
	IF(0x0C0C17F6u); MACL = r11 * r12;  /* 0C0C17F6 mul.l Rm,Rn */
	r2 = 0xC2B039Cu; UPD(0x0C0C17FAu, 3);  /* 0C0C17F8 mov.l @(disp,pc),Rn */
	r0 = 0xC286318u; UPD(0x0C0C17FCu, 1);  /* 0C0C17FA mov.l @(disp,pc),Rn */
	IF(0x0C0C17FCu); r12 = MACL;  /* 0C0C17FC sts macl,Rn */
	r7 = 0xC069B20u; UPD(0x0C0C1800u, 2);  /* 0C0C17FE mov.l @(disp,pc),Rn */
	r0 += r12;  /* 0C0C1800 add Rm,Rn */
	r4 = R32(r2); UPD(0x0C0C1804u, 2);  /* 0C0C1802 mov.l @Rm,Rn */
	r0 += 0x48u;  /* 0C0C1804 add #imm,Rn */
	r4 += r10;  /* 0C0C1806 add Rm,Rn */
	IF(0x0C0C1808u); { u32 t_ = r7; PR = 0x0C0C180Cu; r5 = R32(r0); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0C180Cu); }  /* 0C0C1808 jsr @Rn */
L_0C0C180C: BLKS(0x0C0C180Cu);
	r6 = 0x10000u; UPD(0x0C0C180Eu, 1);  /* 0C0C180C mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C0C180E add Rm,Rn */
	r9 += r6;  /* 0C0C1810 add Rm,Rn */
	r5 = r9;  /* 0C0C1812 mov Rm,Rn */
	r3 = r10;  /* 0C0C1814 mov Rm,Rn */
	IF(0x0C0C1816u); r5 >>= 16;  /* 0C0C1816 shlr16 Rn */
	r4 = r5 & 0xFF;  /* 0C0C1818 extu.b Rm,Rn */
	r0 = r8;  /* 0C0C181A mov Rm,Rn */
	r3 += 0x1u;  /* 0C0C181C add #imm,Rn */
	r2 = 0xEFu; UPD(0x0C0C1820u, 9);  /* 0C0C181E mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r3;  /* 0C0C1820 exts.w Rm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C0C1822 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0C1826u); W16(r0 + r13, r4); /* slot mov.w Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0C17E4u, 5); goto L_0C0C17E4; } UPD(0x0C0C1828u, 1); goto L_0C0C1828; }  /* 0C0C1824 bf/s */
L_0C0C1828: BLKS(0x0C0C1828u);
	r3 = 0xC286360u; UPD(0x0C0C182Au, 1);  /* 0C0C1828 mov.l @(disp,pc),Rn */
	r3 += r12;  /* 0C0C182A add Rm,Rn */
	r2 = R32(r3); UPD(0x0C0C182Eu, 2);  /* 0C0C182C mov.l @Rm,Rn */
	r8 = 0x8000u; UPD(0x0C0C1830u, 1);  /* 0C0C182E mov.l @(disp,pc),Rn */
	T = r2 == r8;  /* 0C0C1830 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0C183Au, 4); goto L_0C0C183A; }  /* 0C0C1832 bt */
L_0C0C1834: BLKS(0x0C0C1834u);
	r9 = 0x80u; UPD(0x0C0C1836u, 1);  /* 0C0C1834 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C0C1836 add Rm,Rn */
	W32(r3, r2); UPD(0x0C0C183Au, 2);  /* 0C0C1838 mov.l Rm,@Rn */
L_0C0C183A: BLKS(0x0C0C183Au);
	r15 = r14;  /* 0C0C183A mov Rm,Rn */
	IF(0x0C0C183Cu); PR = R32(r15); r15 += 4; UPD(0x0C0C183Eu, 2);  /* 0C0C183C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C1840u, 1);  /* 0C0C183E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0C1842u, 1);  /* 0C0C1840 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C1844u, 1);  /* 0C0C1842 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C1846u, 1);  /* 0C0C1844 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C1848u, 1);  /* 0C0C1846 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C184Au, 1);  /* 0C0C1848 mov.l @Rm+,Rn */
	IF(0x0C0C184Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C184A rts */
}

void blk_f_0C0C1880(sh3_t *c)
{
	LOCALS;
L_0C0C1880: BLKS(0x0C0C1880u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1882u, 1);  /* 0C0C1880 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1884u, 1);  /* 0C0C1882 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1886u, 1);  /* 0C0C1884 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1888u, 1);  /* 0C0C1886 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0C1888 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C188Cu, 2);  /* 0C0C188A mov.l Rm,@-Rn */
	r4 = r10;  /* 0C0C188C mov Rm,Rn */
	r6 = 0xC0C0810u; UPD(0x0C0C1890u, 2);  /* 0C0C188E mov.l @(disp,pc),Rn */
	IF(0x0C0C1890u); r15 -= 4; W32(r15, PR); UPD(0x0C0C1892u, 1);  /* 0C0C1890 sts.l pr,@-Rn */
	IF(0x0C0C1892u); { u32 t_ = r6; PR = 0x0C0C1896u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0810, 0x0C0C0810u, 0x0C0C1896u); }  /* 0C0C1892 jsr @Rn */
L_0C0C1896: BLKS(0x0C0C1896u);
	r5 = 0x4Cu;  /* 0C0C1896 mov #imm,Rn */
	IF(0x0C0C1898u); MACL = r10 * r5;  /* 0C0C1898 mul.l Rm,Rn */
	r9 = 0xC286318u; UPD(0x0C0C189Cu, 4);  /* 0C0C189A mov.l @(disp,pc),Rn */
	IF(0x0C0C189Cu); r5 = MACL;  /* 0C0C189C sts macl,Rn */
	r5 += r9;  /* 0C0C189E add Rm,Rn */
	r9 = R32(r5); UPD(0x0C0C18A2u, 3);  /* 0C0C18A0 mov.l @Rm,Rn */
	r5 += 0x3Cu;  /* 0C0C18A2 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r2 = v_; } UPD(0x0C0C18A6u, 2);  /* 0C0C18A4 mov.b @Rm+,Rn */
	r7 = 0xC3C415Cu; UPD(0x0C0C18A8u, 1);  /* 0C0C18A6 mov.l @(disp,pc),Rn */
	r3 = r2 & 0xFF;  /* 0C0C18A8 extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r0 = v_; } UPD(0x0C0C18ACu, 2);  /* 0C0C18AA mov.b @Rm+,Rn */
	IF(0x0C0C18ACu); r3 <<= 16;  /* 0C0C18AC shll16 Rn */
	r4 = 0x2000000u; UPD(0x0C0C18B0u, 2);  /* 0C0C18AE mov.l @(disp,pc),Rn */
	r11 = r0 & 0xFF;  /* 0C0C18B0 extu.b Rm,Rn */
	r6 = R32(r7); UPD(0x0C0C18B4u, 2);  /* 0C0C18B2 mov.l @Rm,Rn */
	r9 &= r4;  /* 0C0C18B4 and Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r7 = v_; } UPD(0x0C0C18B8u, 2);  /* 0C0C18B6 mov.b @Rm+,Rn */
	r9 |= r3;  /* 0C0C18B8 or Rm,Rn */
	IF(0x0C0C18BAu); r11 <<= 8;  /* 0C0C18BA shll8 Rn */
	r0 = 0xC3C43C4u; UPD(0x0C0C18BEu, 3);  /* 0C0C18BC mov.l @(disp,pc),Rn */
	r9 |= r11;  /* 0C0C18BE or Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r3 = v_; } UPD(0x0C0C18C2u, 2);  /* 0C0C18C0 mov.b @Rm+,Rn */
	r4 = r7 & 0xFF;  /* 0C0C18C2 extu.b Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r0); UPD(0x0C0C18C6u, 2);  /* 0C0C18C4 mov.b @Rm,Rn */
	r7 = r3 & 0xFF;  /* 0C0C18C6 extu.b Rm,Rn */
	r9 |= r4;  /* 0C0C18C8 or Rm,Rn */
	r4 = r11 & 0xFF;  /* 0C0C18CA extu.b Rm,Rn */
	r3 = 0xC29D736u; UPD(0x0C0C18CEu, 4);  /* 0C0C18CC mov.l @(disp,pc),Rn */
	IF(0x0C0C18CEu); MACL = r7 * r4;  /* 0C0C18CE mul.l Rm,Rn */
	r2 = 0x11000000u; UPD(0x0C0C18D2u, 3);  /* 0C0C18D0 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r1 = v_; } UPD(0x0C0C18D4u, 1);  /* 0C0C18D2 mov.b @Rm+,Rn */
	r9 |= r2;  /* 0C0C18D4 or Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0C18D8u, 2);  /* 0C0C18D6 mov.b @Rm,Rn */
	r11 = r1 & 0xFF;  /* 0C0C18D8 extu.b Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0C18DA extu.b Rm,Rn */
	IF(0x0C0C18DCu); r2 = MACL;  /* 0C0C18DC sts macl,Rn */
	IF(0x0C0C18DEu); MACL = r11 * r7;  /* 0C0C18DE mul.l Rm,Rn */
	r0 = 0xC3C4171u; UPD(0x0C0C18E2u, 6);  /* 0C0C18E0 mov.l @(disp,pc),Rn */
	r2 += r2;  /* 0C0C18E2 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r5); UPD(0x0C0C18E6u, 2);  /* 0C0C18E4 mov.b @Rm,Rn */
	IF(0x0C0C18E6u); r3 = MACL;  /* 0C0C18E6 sts macl,Rn */
	r11 = (u32)(s32)(s8)R8(r0); UPD(0x0C0C18EAu, 2);  /* 0C0C18E8 mov.b @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0C18EA extu.b Rm,Rn */
	r5 = r11 & 0xFF;  /* 0C0C18EC extu.b Rm,Rn */
	IF(0x0C0C18EEu); MACL = r7 * r5;  /* 0C0C18EE mul.l Rm,Rn */
	IF(0x0C0C18F0u); r2 >>= 8;  /* 0C0C18F0 shlr8 Rn */
	r3 += r3;  /* 0C0C18F2 add Rm,Rn */
	r4 = r2 & 0xFF;  /* 0C0C18F4 extu.b Rm,Rn */
	IF(0x0C0C18F6u); r3 >>= 8;  /* 0C0C18F6 shlr8 Rn */
	r2 = r3 & 0xFF;  /* 0C0C18F8 extu.b Rm,Rn */
	IF(0x0C0C18FAu); r3 = MACL;  /* 0C0C18FA sts macl,Rn */
	r1 = 0xFFFFFFF9u;  /* 0C0C18FC mov #imm,Rn */
	IF(0x0C0C18FEu); ARG0(0x431Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C0C18FE shad Rm,Rn */
	IF(0x0C0C1900u); r4 <<= 16;  /* 0C0C1900 shll16 Rn */
	IF(0x0C0C1902u); r2 <<= 8;  /* 0C0C1902 shll8 Rn */
	r0 = r3 & 0xFF;  /* 0C0C1904 extu.b Rm,Rn */
	r4 += r2;  /* 0C0C1906 add Rm,Rn */
	r4 += r0;  /* 0C0C1908 add Rm,Rn */
	r0 = 0x140u; UPD(0x0C0C190Cu, 18);  /* 0C0C190A mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0C190C mov #imm,Rn */
	IF(0x0C0C190Eu); MACL = r10 * r0;  /* 0C0C190E mul.l Rm,Rn */
	r11 = 0xC232318u; UPD(0x0C0C1912u, 4);  /* 0C0C1910 mov.l @(disp,pc),Rn */
	r10 = 0xC23CAA0u; UPD(0x0C0C1914u, 1);  /* 0C0C1912 mov.l @(disp,pc),Rn */
	IF(0x0C0C1914u); r0 = MACL; UPD(0x0C0C1916u, 1);  /* 0C0C1914 sts macl,Rn */
	r8 = 0xC232314u; UPD(0x0C0C1918u, 1);  /* 0C0C1916 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0C1918 add Rm,Rn */
	IF(0x0C0C191Au); ;  /* 0C0C191A nop */
	UPD(0x0C0C191Cu, 2);
L_0C0C191C: BLKS(0x0C0C191Cu);
	IF(0x0C0C191Cu); r7 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C0C191Eu, 1);  /* 0C0C191C mov.w @(r0,Rm),Rn */
	r1 = 0xFFE0u; UPD(0x0C0C1920u, 1);  /* 0C0C191E mov.l @(disp,pc),Rn */
	r3 = 0x3E0u; UPD(0x0C0C1922u, 1);  /* 0C0C1920 mov.w @(disp,pc),Rn */
	r1 &= r7;  /* 0C0C1922 and Rm,Rn */
	r1 += r3;  /* 0C0C1924 add Rm,Rn */
	IF(0x0C0C1926u); r2 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C0C1928u, 3);  /* 0C0C1926 mov.w @(r0,Rm),Rn */
	IF(0x0C0C1928u); r1 <<= 16;  /* 0C0C1928 shll16 Rn */
	r3 = 0x88u; UPD(0x0C0C192Cu, 2);  /* 0C0C192A mov.w @(disp,pc),Rn */
	r0 += 0x2u;  /* 0C0C192C add #imm,Rn */
	W32(r6, r9); UPD(0x0C0C1930u, 2);  /* 0C0C192E mov.l Rm,@Rn */
	r2 += r3;  /* 0C0C1930 add Rm,Rn */
	r6 += 0x4u;  /* 0C0C1932 add #imm,Rn */
	r1 |= r2;  /* 0C0C1934 or Rm,Rn */
	W32(r6, r1); UPD(0x0C0C1938u, 4);  /* 0C0C1936 mov.l Rm,@Rn */
	r3 = R32(r8); UPD(0x0C0C193Au, 1);  /* 0C0C1938 mov.l @Rm,Rn */
	r6 += 0x4u;  /* 0C0C193A add #imm,Rn */
	r3 -= r7;  /* 0C0C193C sub Rm,Rn */
	r7 = 0xC29D72Cu; UPD(0x0C0C1940u, 3);  /* 0C0C193E mov.l @(disp,pc),Rn */
	IF(0x0C0C1940u); r3 <<= 16;  /* 0C0C1940 shll16 Rn */
	r2 = R32(r7); UPD(0x0C0C1944u, 2);  /* 0C0C1942 mov.l @Rm,Rn */
	r2 += r5;  /* 0C0C1944 add Rm,Rn */
	r3 |= r2;  /* 0C0C1946 or Rm,Rn */
	W32(r6, r3); UPD(0x0C0C194Au, 3);  /* 0C0C1948 mov.l Rm,@Rn */
	r2 = r5;  /* 0C0C194A mov Rm,Rn */
	r7 = 0x1600000u; UPD(0x0C0C194Eu, 2);  /* 0C0C194C mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C0C194E add #imm,Rn */
	W32(r6, r7); UPD(0x0C0C1952u, 2);  /* 0C0C1950 mov.l Rm,@Rn */
	r2 += 0x1u;  /* 0C0C1952 add #imm,Rn */
	r6 += 0x4u;  /* 0C0C1954 add #imm,Rn */
	W32(r6, r4); UPD(0x0C0C1958u, 3);  /* 0C0C1956 mov.l Rm,@Rn */
	r5 = (u32)(s32)(s16)r2;  /* 0C0C1958 exts.w Rm,Rn */
	r3 = 0xEFu; UPD(0x0C0C195Cu, 2);  /* 0C0C195A mov.w @(disp,pc),Rn */
	T = (s32)r5 > (s32)r3;  /* 0C0C195C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C191Cu, 4); goto L_0C0C191C; } goto L_0C0C1962; }  /* 0C0C195E bf/s */
L_0C0C1962: BLKS(0x0C0C1962u);
	r10 = 0xC0000001u; UPD(0x0C0C1964u, 2);  /* 0C0C1962 mov.l @(disp,pc),Rn */
	W32(r6, r10); UPD(0x0C0C1966u, 1);  /* 0C0C1964 mov.l Rm,@Rn */
	r8 = 0xC3C415Cu; UPD(0x0C0C1968u, 1);  /* 0C0C1966 mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C0C1968 add #imm,Rn */
	W32(r8, r6); UPD(0x0C0C196Cu, 2);  /* 0C0C196A mov.l Rm,@Rn */
	r15 = r14;  /* 0C0C196C mov Rm,Rn */
	IF(0x0C0C196Eu); PR = R32(r15); r15 += 4; UPD(0x0C0C1970u, 2);  /* 0C0C196E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C1972u, 1);  /* 0C0C1970 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C1974u, 1);  /* 0C0C1972 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C1976u, 1);  /* 0C0C1974 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C1978u, 1);  /* 0C0C1976 mov.l @Rm+,Rn */
	IF(0x0C0C1978u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C1978 rts */
}

void blk_f_0C0C19C0(sh3_t *c)
{
	LOCALS;
L_0C0C19C0: BLKS(0x0C0C19C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C19C2u, 1);  /* 0C0C19C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C19C4u, 1);  /* 0C0C19C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C19C6u, 1);  /* 0C0C19C4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0C19C6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C19CAu, 2);  /* 0C0C19C8 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0C19CA mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C19CEu, 2);  /* 0C0C19CC mov.l Rm,@-Rn */
	r7 = 0xC0C0DF0u; UPD(0x0C0C19D0u, 1);  /* 0C0C19CE mov.l @(disp,pc),Rn */
	IF(0x0C0C19D0u); r15 -= 4; W32(r15, PR); UPD(0x0C0C19D2u, 1);  /* 0C0C19D0 sts.l pr,@-Rn */
	IF(0x0C0C19D2u); { u32 t_ = r7; PR = 0x0C0C19D6u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0DF0, 0x0C0C0DF0u, 0x0C0C19D6u); }  /* 0C0C19D2 jsr @Rn */
L_0C0C19D6: BLKS(0x0C0C19D6u);
	r6 = 0x4Cu;  /* 0C0C19D6 mov #imm,Rn */
	IF(0x0C0C19D8u); MACL = r9 * r6;  /* 0C0C19D8 mul.l Rm,Rn */
	r4 = 0xC286318u; UPD(0x0C0C19DCu, 4);  /* 0C0C19DA mov.l @(disp,pc),Rn */
	IF(0x0C0C19DCu); r6 = MACL;  /* 0C0C19DC sts macl,Rn */
	r6 += r4;  /* 0C0C19DE add Rm,Rn */
	r4 = R32(r6); UPD(0x0C0C19E2u, 3);  /* 0C0C19E0 mov.l @Rm,Rn */
	r6 += 0x3Cu;  /* 0C0C19E2 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r5 = v_; } UPD(0x0C0C19E6u, 2);  /* 0C0C19E4 mov.b @Rm+,Rn */
	r10 = 0xC3C415Cu; UPD(0x0C0C19E8u, 1);  /* 0C0C19E6 mov.l @(disp,pc),Rn */
	r2 = r5 & 0xFF;  /* 0C0C19E8 extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r0 = v_; } UPD(0x0C0C19ECu, 2);  /* 0C0C19EA mov.b @Rm+,Rn */
	IF(0x0C0C19ECu); r2 <<= 16;  /* 0C0C19EC shll16 Rn */
	r3 = 0x2000000u; UPD(0x0C0C19F0u, 2);  /* 0C0C19EE mov.l @(disp,pc),Rn */
	r7 = R32(r10); UPD(0x0C0C19F2u, 1);  /* 0C0C19F0 mov.l @Rm,Rn */
	r4 &= r3;  /* 0C0C19F2 and Rm,Rn */
	r10 = r0 & 0xFF;  /* 0C0C19F4 extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r3 = v_; } UPD(0x0C0C19F8u, 3);  /* 0C0C19F6 mov.b @Rm+,Rn */
	r4 |= r2;  /* 0C0C19F8 or Rm,Rn */
	IF(0x0C0C19FAu); r10 <<= 8;  /* 0C0C19FA shll8 Rn */
	r0 = 0xC3C43C4u; UPD(0x0C0C19FEu, 3);  /* 0C0C19FC mov.l @(disp,pc),Rn */
	r4 |= r10;  /* 0C0C19FE or Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r1 = v_; } UPD(0x0C0C1A02u, 2);  /* 0C0C1A00 mov.b @Rm+,Rn */
	r5 = r3 & 0xFF;  /* 0C0C1A02 extu.b Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C0C1A06u, 2);  /* 0C0C1A04 mov.b @Rm,Rn */
	r4 |= r5;  /* 0C0C1A06 or Rm,Rn */
	r3 = r1 & 0xFF;  /* 0C0C1A08 extu.b Rm,Rn */
	r5 = r10 & 0xFF;  /* 0C0C1A0A extu.b Rm,Rn */
	r0 = 0xC29D736u; UPD(0x0C0C1A0Eu, 4);  /* 0C0C1A0C mov.l @(disp,pc),Rn */
	IF(0x0C0C1A0Eu); MACL = r3 * r5;  /* 0C0C1A0E mul.l Rm,Rn */
	r2 = 0x11000000u; UPD(0x0C0C1A12u, 3);  /* 0C0C1A10 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r1 = v_; } UPD(0x0C0C1A14u, 1);  /* 0C0C1A12 mov.b @Rm+,Rn */
	r4 |= r2;  /* 0C0C1A14 or Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C0C1A18u, 2);  /* 0C0C1A16 mov.b @Rm,Rn */
	r3 = r1 & 0xFF;  /* 0C0C1A18 extu.b Rm,Rn */
	r0 = r10 & 0xFF;  /* 0C0C1A1A extu.b Rm,Rn */
	IF(0x0C0C1A1Cu); r2 = MACL;  /* 0C0C1A1C sts macl,Rn */
	IF(0x0C0C1A1Eu); MACL = r3 * r0;  /* 0C0C1A1E mul.l Rm,Rn */
	r2 += r2;  /* 0C0C1A20 add Rm,Rn */
	IF(0x0C0C1A22u); r2 >>= 8;  /* 0C0C1A22 shlr8 Rn */
	IF(0x0C0C1A24u); r10 = MACL;  /* 0C0C1A24 sts macl,Rn */
	r3 = 0xC3C4171u; UPD(0x0C0C1A28u, 9);  /* 0C0C1A26 mov.l @(disp,pc),Rn */
	r10 += r10;  /* 0C0C1A28 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r6); UPD(0x0C0C1A2Cu, 2);  /* 0C0C1A2A mov.b @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C0C1A2C extu.b Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0C1A30u, 2);  /* 0C0C1A2E mov.b @Rm,Rn */
	IF(0x0C0C1A30u); r10 >>= 8;  /* 0C0C1A30 shlr8 Rn */
	r2 = r10 & 0xFF;  /* 0C0C1A32 extu.b Rm,Rn */
	r10 = r1 & 0xFF;  /* 0C0C1A34 extu.b Rm,Rn */
	r6 = r0 & 0xFF;  /* 0C0C1A36 extu.b Rm,Rn */
	IF(0x0C0C1A38u); MACL = r10 * r6;  /* 0C0C1A38 mul.l Rm,Rn */
	r11 = 0x140u; UPD(0x0C0C1A3Cu, 7);  /* 0C0C1A3A mov.w @(disp,pc),Rn */
	r1 = 0xFFFFFFF9u;  /* 0C0C1A3C mov #imm,Rn */
	IF(0x0C0C1A3Eu); r3 = MACL;  /* 0C0C1A3E sts macl,Rn */
	IF(0x0C0C1A40u); MACL = r9 * r11;  /* 0C0C1A40 mul.l Rm,Rn */
	IF(0x0C0C1A42u); ARG0(0x431Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C0C1A42 shad Rm,Rn */
	IF(0x0C0C1A44u); r5 <<= 16;  /* 0C0C1A44 shll16 Rn */
	IF(0x0C0C1A46u); r2 <<= 8;  /* 0C0C1A46 shll8 Rn */
	r10 = 0xC232318u; UPD(0x0C0C1A4Au, 8);  /* 0C0C1A48 mov.l @(disp,pc),Rn */
	r5 += r2;  /* 0C0C1A4A add Rm,Rn */
	r9 = 0xC232314u; UPD(0x0C0C1A4Eu, 2);  /* 0C0C1A4C mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C0C1A4E extu.b Rm,Rn */
	r5 += r0;  /* 0C0C1A50 add Rm,Rn */
	r6 = 0x0u;  /* 0C0C1A52 mov #imm,Rn */
	IF(0x0C0C1A54u); r8 = MACL; UPD(0x0C0C1A56u, 4);  /* 0C0C1A54 sts macl,Rn */
	IF(0x0C0C1A56u); ;  /* 0C0C1A56 nop */
	UPD(0x0C0C1A58u, 1);
L_0C0C1A58: BLKS(0x0C0C1A58u);
	r0 = r6;  /* 0C0C1A58 mov Rm,Rn */
	r0 &= 0x3Fu;  /* 0C0C1A5A and #imm,r0 */
	r0 += r8;  /* 0C0C1A5C add Rm,Rn */
	r0 += r0;  /* 0C0C1A5E add Rm,Rn */
	IF(0x0C0C1A60u); r3 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C0C1A62u, 5);  /* 0C0C1A60 mov.w @(r0,Rm),Rn */
	r0 = 0xFFE0u; UPD(0x0C0C1A64u, 1);  /* 0C0C1A62 mov.l @(disp,pc),Rn */
	r2 = 0x3E0u; UPD(0x0C0C1A66u, 1);  /* 0C0C1A64 mov.w @(disp,pc),Rn */
	r0 &= r3;  /* 0C0C1A66 and Rm,Rn */
	r0 += r2;  /* 0C0C1A68 add Rm,Rn */
	r2 = 0x88u; UPD(0x0C0C1A6Cu, 3);  /* 0C0C1A6A mov.w @(disp,pc),Rn */
	IF(0x0C0C1A6Cu); r0 <<= 16;  /* 0C0C1A6C shll16 Rn */
	W32(r7, r4); UPD(0x0C0C1A70u, 2);  /* 0C0C1A6E mov.l Rm,@Rn */
	r2 += r6;  /* 0C0C1A70 add Rm,Rn */
	r0 |= r2;  /* 0C0C1A72 or Rm,Rn */
	r7 += 0x4u;  /* 0C0C1A74 add #imm,Rn */
	W32(r7, r0); UPD(0x0C0C1A78u, 4);  /* 0C0C1A76 mov.l Rm,@Rn */
	r0 = r3;  /* 0C0C1A78 mov Rm,Rn */
	r2 = R32(r9); UPD(0x0C0C1A7Cu, 2);  /* 0C0C1A7A mov.l @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0C1A7C and #imm,r0 */
	r1 = 0xC29D72Cu; UPD(0x0C0C1A80u, 2);  /* 0C0C1A7E mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C0C1A80 sub Rm,Rn */
	r0 = R32(r1); UPD(0x0C0C1A84u, 2);  /* 0C0C1A82 mov.l @Rm,Rn */
	IF(0x0C0C1A84u); r2 <<= 16;  /* 0C0C1A84 shll16 Rn */
	r0 += r6;  /* 0C0C1A86 add Rm,Rn */
	r2 |= r0;  /* 0C0C1A88 or Rm,Rn */
	r7 += 0x4u;  /* 0C0C1A8A add #imm,Rn */
	W32(r7, r2); UPD(0x0C0C1A8Eu, 5);  /* 0C0C1A8C mov.l Rm,@Rn */
	r0 = 0x1Cu;  /* 0C0C1A8E mov #imm,Rn */
	r2 = 0x143u; UPD(0x0C0C1A92u, 2);  /* 0C0C1A90 mov.w @(disp,pc),Rn */
	r3 &= r0;  /* 0C0C1A92 and Rm,Rn */
	r3 += r2;  /* 0C0C1A94 add Rm,Rn */
	r7 += 0x4u;  /* 0C0C1A96 add #imm,Rn */
	IF(0x0C0C1A98u); r3 <<= 16;  /* 0C0C1A98 shll16 Rn */
	W32(r7, r3); UPD(0x0C0C1A9Cu, 5);  /* 0C0C1A9A mov.l Rm,@Rn */
	r0 = r6;  /* 0C0C1A9C mov Rm,Rn */
	r7 += 0x4u;  /* 0C0C1A9E add #imm,Rn */
	W32(r7, r5); UPD(0x0C0C1AA2u, 3);  /* 0C0C1AA0 mov.l Rm,@Rn */
	r0 += 0x1u;  /* 0C0C1AA2 add #imm,Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C0C1AA4 exts.w Rm,Rn */
	T = (s32)r6 >= (s32)r11;  /* 0C0C1AA6 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C1A58u, 6); goto L_0C0C1A58; } goto L_0C0C1AAC; }  /* 0C0C1AA8 bf/s */
L_0C0C1AAC: BLKS(0x0C0C1AACu);
	r8 = 0xC3C415Cu; UPD(0x0C0C1AAEu, 2);  /* 0C0C1AAC mov.l @(disp,pc),Rn */
	W32(r8, r7); UPD(0x0C0C1AB0u, 1);  /* 0C0C1AAE mov.l Rm,@Rn */
	r15 = r14;  /* 0C0C1AB0 mov Rm,Rn */
	IF(0x0C0C1AB2u); PR = R32(r15); r15 += 4; UPD(0x0C0C1AB4u, 2);  /* 0C0C1AB2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C1AB6u, 1);  /* 0C0C1AB4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C1AB8u, 1);  /* 0C0C1AB6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C1ABAu, 1);  /* 0C0C1AB8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C1ABCu, 1);  /* 0C0C1ABA mov.l @Rm+,Rn */
	IF(0x0C0C1ABCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C1ABC rts */
}

/* FUN_0c0c1b00 */
void blk_f_0C0C1B00(sh3_t *c)
{
	LOCALS;
L_0C0C1B00: BLKS(0x0C0C1B00u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1B02u, 1);  /* 0C0C1B00 mov.l Rm,@-Rn */
	r7 = 0x0u;  /* 0C0C1B02 mov #imm,Rn */
	r5 = 0xC286318u; UPD(0x0C0C1B06u, 2);  /* 0C0C1B04 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0C1B06 mov Rm,Rn */
	r4 = 0xC2B07BCu; UPD(0x0C0C1B0Au, 2);  /* 0C0C1B08 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0C1B0A mov #imm,Rn */
	r6 = 0x7u;  /* 0C0C1B0C mov #imm,Rn */
	IF(0x0C0C1B0Eu); ;  /* 0C0C1B0E nop */
	UPD(0x0C0C1B10u, 3);
L_0C0C1B10: BLKS(0x0C0C1B10u);
	r2 = r3;  /* 0C0C1B10 mov Rm,Rn */
	r2 += r5;  /* 0C0C1B12 add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0C1B16u, 3);  /* 0C0C1B14 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0C1B16 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x42u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C1B2Eu, 4); goto L_0C0C1B2E; } goto L_0C0C1B1C; }  /* 0C0C1B18 bt/s */
L_0C0C1B1C: BLKS(0x0C0C1B1Cu);
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0C1B1Eu, 2);  /* 0C0C1B1C mov.b @Rm,Rn */
	r1 = 0x1Fu;  /* 0C0C1B1E mov #imm,Rn */
	r1 &= r0;  /* 0C0C1B20 and Rm,Rn */
	r1 += r1;  /* 0C0C1B22 add Rm,Rn */
	r0 = r1;  /* 0C0C1B24 mov Rm,Rn */
	r0 += r4;  /* 0C0C1B26 add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C0C1B2Au, 6);  /* 0C0C1B28 mov.w @Rm,Rn */
	r2 += 0x1u;  /* 0C0C1B2A add #imm,Rn */
	W16(r0, r2); UPD(0x0C0C1B2Eu, 2);  /* 0C0C1B2C mov.w Rm,@Rn */
L_0C0C1B2E: BLKS(0x0C0C1B2Eu);
	r2 = r7;  /* 0C0C1B2E mov Rm,Rn */
	r2 += 0x1u;  /* 0C0C1B30 add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C0C1B32 exts.w Rm,Rn */
	T = (s32)r7 > (s32)r6;  /* 0C0C1B34 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C1B10u, 7); goto L_0C0C1B10; } goto L_0C0C1B3A; }  /* 0C0C1B36 bf/s */
L_0C0C1B3A: BLKS(0x0C0C1B3Au);
	r15 = r14;  /* 0C0C1B3A mov Rm,Rn */
	IF(0x0C0C1B3Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0C1B3C rts */
}

/* FUN_0c0c1b50 */
void blk_f_0C0C1B50(sh3_t *c)
{
	LOCALS;
L_0C0C1B50: BLKS(0x0C0C1B50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1B52u, 1);  /* 0C0C1B50 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1B54u, 1);  /* 0C0C1B52 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0C1B54 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1B58u, 2);  /* 0C0C1B56 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0C1B58 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1B5Cu, 2);  /* 0C0C1B5A mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C0C1B5C exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1B60u, 2);  /* 0C0C1B5E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1B62u, 1);  /* 0C0C1B60 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1B64u, 1);  /* 0C0C1B62 mov.l Rm,@-Rn */
	r11 = 0xC286318u; UPD(0x0C0C1B66u, 1);  /* 0C0C1B64 mov.l @(disp,pc),Rn */
	IF(0x0C0C1B66u); r15 -= 4; W32(r15, PR); UPD(0x0C0C1B68u, 1);  /* 0C0C1B66 sts.l pr,@-Rn */
	r13 = 0xC22E010u; UPD(0x0C0C1B6Au, 1);  /* 0C0C1B68 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0C1B6A mov Rm,Rn */
	r12 = 0xC206604u; UPD(0x0C0C1B6Eu, 2);  /* 0C0C1B6C mov.l @(disp,pc),Rn */
	IF(0x0C0C1B6Eu); ;  /* 0C0C1B6E nop */
	UPD(0x0C0C1B70u, 1);
L_0C0C1B70: BLKS(0x0C0C1B70u);
	r3 = r9;  /* 0C0C1B70 mov Rm,Rn */
	r3 += r11;  /* 0C0C1B72 add Rm,Rn */
	r0 = R32(r3); UPD(0x0C0C1B76u, 3);  /* 0C0C1B74 mov.l @Rm,Rn */
	r3 += 0x42u;  /* 0C0C1B76 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C0C1B7Au, 2);  /* 0C0C1B78 mov.b @Rm,Rn */
	IF(0x0C0C1B7Au); r0 >>= 16;  /* 0C0C1B7A shlr16 Rn */
	r2 = r4 & 0xFF;  /* 0C0C1B7C extu.b Rm,Rn */
	IF(0x0C0C1B7Eu); r0 <<= 2;  /* 0C0C1B7E shll2 Rn */
	T = r2 == r10;  /* 0C0C1B80 cmp/eq Rm,Rn */
	IF(0x0C0C1B82u); r0 >>= 16;  /* 0C0C1B82 shlr16 Rn */
	IF(0x0C0C1B84u); r2 = T;  /* 0C0C1B84 movt Rn */
	r0 &= 0x1u;  /* 0C0C1B86 and #imm,r0 */
	r0 &= r2;  /* 0C0C1B88 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0C1B8A tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFBEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C1BB2u, 12); goto L_0C0C1BB2; } goto L_0C0C1B90; }  /* 0C0C1B8C bt/s */
L_0C0C1B90: BLKS(0x0C0C1B90u);
	r2 = 0xC3C415Cu; UPD(0x0C0C1B92u, 2);  /* 0C0C1B90 mov.l @(disp,pc),Rn */
	r4 = 0xC3C5440u; UPD(0x0C0C1B94u, 1);  /* 0C0C1B92 mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C0C1B96u, 1);  /* 0C0C1B94 mov.l @Rm,Rn */
	r7 = R32(r4); UPD(0x0C0C1B98u, 1);  /* 0C0C1B96 mov.l @Rm,Rn */
	r6 -= r7;  /* 0C0C1B98 sub Rm,Rn */
	IF(0x0C0C1B9Au); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C0C1B9A shar Rn */
	r5 = R32(r13); UPD(0x0C0C1B9Eu, 3);  /* 0C0C1B9C mov.l @Rm,Rn */
	IF(0x0C0C1B9Eu); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C0C1B9E shar Rn */
	r0 = 0x2803u; UPD(0x0C0C1BA2u, 2);  /* 0C0C1BA0 mov.w @(disp,pc),Rn */
	r5 -= r6;  /* 0C0C1BA2 sub Rm,Rn */
	T = (s32)r5 > (s32)r0;  /* 0C0C1BA4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0C1BC0u, 5); goto L_0C0C1BC0; }  /* 0C0C1BA6 bf */
L_0C0C1BA8: BLKS(0x0C0C1BA8u);
	r0 = R32(r3 + 0x4u); UPD(0x0C0C1BAAu, 1);  /* 0C0C1BA8 mov.l @(disp,Rm),Rn */
	IF(0x0C0C1BAAu); r0 <<= 2;  /* 0C0C1BAA shll2 Rn */
	IF(0x0C0C1BACu); r3 = R32(r0 + r12); UPD(0x0C0C1BAEu, 2);  /* 0C0C1BAC mov.l @(r0,Rm),Rn */
	IF(0x0C0C1BAEu); { u32 t_ = r3; PR = 0x0C0C1BB2u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0C1BB2u); }  /* 0C0C1BAE jsr @Rn */
L_0C0C1BB2: BLKS(0x0C0C1BB2u);
	r5 = r8;  /* 0C0C1BB2 mov Rm,Rn */
	r5 += 0x1u;  /* 0C0C1BB4 add #imm,Rn */
	r8 = (u32)(s32)(s16)r5;  /* 0C0C1BB6 exts.w Rm,Rn */
	r0 = 0x7u;  /* 0C0C1BB8 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C0C1BBA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C1B70u, 8); goto L_0C0C1B70; } UPD(0x0C0C1BC0u, 1); goto L_0C0C1BC0; }  /* 0C0C1BBC bf/s */
L_0C0C1BC0: BLKS(0x0C0C1BC0u);
	r15 = r14;  /* 0C0C1BC0 mov Rm,Rn */
	IF(0x0C0C1BC2u); PR = R32(r15); r15 += 4; UPD(0x0C0C1BC4u, 2);  /* 0C0C1BC2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C1BC6u, 1);  /* 0C0C1BC4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0C1BC8u, 1);  /* 0C0C1BC6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C1BCAu, 1);  /* 0C0C1BC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C1BCCu, 1);  /* 0C0C1BCA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C1BCEu, 1);  /* 0C0C1BCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C1BD0u, 1);  /* 0C0C1BCE mov.l @Rm+,Rn */
	IF(0x0C0C1BD0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C1BD0 rts */
}

/* FUN_0c0c1c70 */
void blk_f_0C0C1C70(sh3_t *c)
{
	LOCALS;
L_0C0C1C70: BLKS(0x0C0C1C70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1C72u, 1);  /* 0C0C1C70 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1C74u, 1);  /* 0C0C1C72 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0C1C74 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1C78u, 2);  /* 0C0C1C76 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0C1C78 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1C7Cu, 2);  /* 0C0C1C7A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1C7Eu, 1);  /* 0C0C1C7C mov.l Rm,@-Rn */
	r10 = 0xC286318u; UPD(0x0C0C1C80u, 1);  /* 0C0C1C7E mov.l @(disp,pc),Rn */
	IF(0x0C0C1C80u); r15 -= 4; W32(r15, PR); UPD(0x0C0C1C82u, 1);  /* 0C0C1C80 sts.l pr,@-Rn */
	r11 = 0xC069A20u; UPD(0x0C0C1C84u, 1);  /* 0C0C1C82 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0C1C84 mov Rm,Rn */
	IF(0x0C0C1C86u); ;  /* 0C0C1C86 nop */
	UPD(0x0C0C1C88u, 2);
L_0C0C1C88: BLKS(0x0C0C1C88u);
	r2 = r9;  /* 0C0C1C88 mov Rm,Rn */
	r2 += r10;  /* 0C0C1C8A add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0C1C8Eu, 3);  /* 0C0C1C8C mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0C1C8E tst Rm,Rn */
	if (!T) { UPD(0x0C0C1CB0u, 4); goto L_0C0C1CB0; }  /* 0C0C1C90 bf */
L_0C0C1C92: BLKS(0x0C0C1C92u);
	r2 = r8;  /* 0C0C1C92 mov Rm,Rn */
	UPD(0x0C0C1C94u, 1);
L_0C0C1C94: BLKS(0x0C0C1C94u);
	r2 += 0x1u;  /* 0C0C1C94 add #imm,Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C0C1C96 exts.w Rm,Rn */
	r0 = 0x7u;  /* 0C0C1C98 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C0C1C9A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C1C88u, 7); goto L_0C0C1C88; } goto L_0C0C1CA0; }  /* 0C0C1C9C bf/s */
L_0C0C1CA0: BLKS(0x0C0C1CA0u);
	r15 = r14;  /* 0C0C1CA0 mov Rm,Rn */
	IF(0x0C0C1CA2u); PR = R32(r15); r15 += 4; UPD(0x0C0C1CA4u, 3);  /* 0C0C1CA2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C1CA6u, 1);  /* 0C0C1CA4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C1CA8u, 1);  /* 0C0C1CA6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C1CAAu, 1);  /* 0C0C1CA8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C1CACu, 1);  /* 0C0C1CAA mov.l @Rm+,Rn */
	IF(0x0C0C1CACu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C1CAC rts */
L_0C0C1CB0: BLKS(0x0C0C1CB0u);
	r4 = r8;  /* 0C0C1CB0 mov Rm,Rn */
	r4 += 0x8u;  /* 0C0C1CB2 add #imm,Rn */
	IF(0x0C0C1CB4u); { u32 t_ = r11; PR = 0x0C0C1CB8u; r5 = R32(r2 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069A20, 0x0C069A20u, 0x0C0C1CB8u); }  /* 0C0C1CB4 jsr @Rn */
L_0C0C1CB8: BLKS(0x0C0C1CB8u);
	{ r2 = r8; /* slot mov Rm,Rn */ UPD(0x0C0C1C94u, 3); goto L_0C0C1C94; }  /* 0C0C1CB8 bra */
}

/* FUN_0c0c1cd0 */
void blk_f_0C0C1CD0(sh3_t *c)
{
	LOCALS;
L_0C0C1CD0: BLKS(0x0C0C1CD0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1CD2u, 1);  /* 0C0C1CD0 mov.l Rm,@-Rn */
	r7 = r4 & 0xFF;  /* 0C0C1CD2 extu.b Rm,Rn */
	r6 = 0xFFu; UPD(0x0C0C1CD6u, 2);  /* 0C0C1CD4 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0C1CD6 mov Rm,Rn */
	r3 = 0xC3C4018u; UPD(0x0C0C1CDAu, 2);  /* 0C0C1CD8 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0C1CDA mov #imm,Rn */
	r0 = 0x3u;  /* 0C0C1CDC mov #imm,Rn */
	r2 = 0x7u;  /* 0C0C1CDE mov #imm,Rn */
	UPD(0x0C0C1CE0u, 3);
L_0C0C1CE0: BLKS(0x0C0C1CE0u);
	IF(0x0C0C1CE0u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0C1CE2u, 1);  /* 0C0C1CE0 mov.b @(r0,Rm),Rn */
	r4 = r1 & 0xFF;  /* 0C0C1CE2 extu.b Rm,Rn */
	T = r4 == r7;  /* 0C0C1CE4 cmp/eq Rm,Rn */
	{ u32 c_ = T; r4 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C1D30u, 5); goto L_0C0C1D30; } goto L_0C0C1CEA; }  /* 0C0C1CE6 bt/s */
L_0C0C1CEA: BLKS(0x0C0C1CEAu);
	r4 += 0x1u;  /* 0C0C1CEA add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0C1CEC extu.b Rm,Rn */
	T = r0 > r2;  /* 0C0C1CEE cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0C1CE0u, 7); goto L_0C0C1CE0; }  /* 0C0C1CF0 bf */
L_0C0C1CF2: BLKS(0x0C0C1CF2u);
	r0 = 0x3u;  /* 0C0C1CF2 mov #imm,Rn */
	r3 = 0xC3C4030u; UPD(0x0C0C1CF6u, 2);  /* 0C0C1CF4 mov.l @(disp,pc),Rn */
	r2 = 0x7u;  /* 0C0C1CF6 mov #imm,Rn */
	UPD(0x0C0C1CF8u, 1);
L_0C0C1CF8: BLKS(0x0C0C1CF8u);
	IF(0x0C0C1CF8u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0C1CFAu, 1);  /* 0C0C1CF8 mov.b @(r0,Rm),Rn */
	r1 = r4 & 0xFF;  /* 0C0C1CFA extu.b Rm,Rn */
	T = r1 >= r6;  /* 0C0C1CFC cmp/hs Rm,Rn */
	{ u32 c_ = T; r4 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C1D08u, 5); goto L_0C0C1D08; } goto L_0C0C1D02; }  /* 0C0C1CFE bt/s */
L_0C0C1D02: BLKS(0x0C0C1D02u);
	r6 = r1;  /* 0C0C1D02 mov Rm,Rn */
	r5 = r0;  /* 0C0C1D04 mov Rm,Rn */
	r4 = r0;  /* 0C0C1D06 mov Rm,Rn */
	UPD(0x0C0C1D08u, 4);
L_0C0C1D08: BLKS(0x0C0C1D08u);
	r4 += 0x1u;  /* 0C0C1D08 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0C1D0A extu.b Rm,Rn */
	T = r0 > r2;  /* 0C0C1D0C cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0C1CF8u, 6); goto L_0C0C1CF8; }  /* 0C0C1D0E bf */
L_0C0C1D10: BLKS(0x0C0C1D10u);
	r3 = 0xC3C4030u; UPD(0x0C0C1D12u, 1);  /* 0C0C1D10 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C0C1D12 mov Rm,Rn */
	IF(0x0C0C1D14u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0C1D16u, 2);  /* 0C0C1D14 mov.b @(r0,Rm),Rn */
	r2 = 0xC29D08Cu; UPD(0x0C0C1D18u, 1);  /* 0C0C1D16 mov.l @(disp,pc),Rn */
	r3 = r4 & 0xFF;  /* 0C0C1D18 extu.b Rm,Rn */
	r0 = r2;  /* 0C0C1D1A mov Rm,Rn */
	IF(0x0C0C1D1Cu); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0C1D1Eu, 3);  /* 0C0C1D1C mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C0C1D1E extu.b Rm,Rn */
	T = r3 > r0;  /* 0C0C1D20 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r0 = (u32)(s32)(s8)r5; /* slot exts.b Rm,Rn */ if (c_) { UPD(0x0C0C1D28u, 5); goto L_0C0C1D28; } goto L_0C0C1D26; }  /* 0C0C1D22 bf/s */
L_0C0C1D26: BLKS(0x0C0C1D26u);
	r0 = 0x0u;  /* 0C0C1D26 mov #imm,Rn */
	UPD(0x0C0C1D28u, 2);
L_0C0C1D28: BLKS(0x0C0C1D28u);
	r15 = r14;  /* 0C0C1D28 mov Rm,Rn */
	IF(0x0C0C1D2Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0C1D2A rts */
L_0C0C1D30: BLKS(0x0C0C1D30u);
	{ r0 = (u32)(s32)(s8)r0; /* slot exts.b Rm,Rn */ UPD(0x0C0C1D28u, 3); goto L_0C0C1D28; }  /* 0C0C1D30 bra */
}

/* FUN_0c0c1d50 */
void blk_f_0C0C1D50(sh3_t *c)
{
	LOCALS;
L_0C0C1D50: BLKS(0x0C0C1D50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1D52u, 1);  /* 0C0C1D50 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1D54u, 1);  /* 0C0C1D52 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1D56u, 1);  /* 0C0C1D54 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1D58u, 1);  /* 0C0C1D56 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1D5Au, 1);  /* 0C0C1D58 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1D5Cu, 1);  /* 0C0C1D5A mov.l Rm,@-Rn */
	r0 = 0xC234BF0u; UPD(0x0C0C1D5Eu, 1);  /* 0C0C1D5C mov.l @(disp,pc),Rn */
	IF(0x0C0C1D5Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0C1D60u, 1);  /* 0C0C1D5E sts.l pr,@-Rn */
	r3 = R32(r0); UPD(0x0C0C1D62u, 1);  /* 0C0C1D60 mov.l @Rm,Rn */
	r0 = 0x98765432u; UPD(0x0C0C1D64u, 1);  /* 0C0C1D62 mov.l @(disp,pc),Rn */
	T = r3 == r0;  /* 0C0C1D64 cmp/eq Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C1D80u, 4); goto L_0C0C1D80; } UPD(0x0C0C1D6Au, 1); goto L_0C0C1D6A; }  /* 0C0C1D66 bt/s */
L_0C0C1D6A: BLKS(0x0C0C1D6Au);
	r15 = r14;  /* 0C0C1D6A mov Rm,Rn */
	IF(0x0C0C1D6Cu); PR = R32(r15); r15 += 4; UPD(0x0C0C1D6Eu, 2);  /* 0C0C1D6C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C1D70u, 1);  /* 0C0C1D6E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C1D72u, 1);  /* 0C0C1D70 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C1D74u, 1);  /* 0C0C1D72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C1D76u, 1);  /* 0C0C1D74 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C1D78u, 1);  /* 0C0C1D76 mov.l @Rm+,Rn */
	IF(0x0C0C1D78u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C1D78 rts */
L_0C0C1D80: BLKS(0x0C0C1D80u);
	r11 = 0xC05FD00u; UPD(0x0C0C1D82u, 1);  /* 0C0C1D80 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C0C1D82 mov #imm,Rn */
	r10 = 0xC3C4018u; UPD(0x0C0C1D86u, 2);  /* 0C0C1D84 mov.l @(disp,pc),Rn */
	r9 = 0xC297464u; UPD(0x0C0C1D88u, 1);  /* 0C0C1D86 mov.l @(disp,pc),Rn */
L_0C0C1D88: BLKS(0x0C0C1D88u);
	IF(0x0C0C1D88u); { u32 t_ = r11; PR = 0x0C0C1D8Cu; r4 = r8 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C05FD00, 0x0C05FD00u, 0x0C0C1D8Cu); }  /* 0C0C1D88 jsr @Rn */
L_0C0C1D8C: BLKS(0x0C0C1D8Cu);
	r2 = R32(r0); UPD(0x0C0C1D8Eu, 1);  /* 0C0C1D8C mov.l @Rm,Rn */
	r0 += 0x7u;  /* 0C0C1D8E add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C0C1D92u, 2);  /* 0C0C1D90 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0C1D92 tst Rm,Rn */
	W32(r9, r2); UPD(0x0C0C1D96u, 2);  /* 0C0C1D94 mov.l Rm,@Rn */
	r0 = r10;  /* 0C0C1D96 mov Rm,Rn */
	IF(0x0C0C1D98u); W8(r0 + r8, r4); UPD(0x0C0C1D9Au, 2);  /* 0C0C1D98 mov.b Rm,@(r0,Rn) */
	{ u32 c_ = !T; r9 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C1DA4u, 3); goto L_0C0C1DA4; } goto L_0C0C1D9E; }  /* 0C0C1D9A bf/s */
L_0C0C1D9E: BLKS(0x0C0C1D9Eu);
	r5 = 0xC3C4030u; UPD(0x0C0C1DA0u, 2);  /* 0C0C1D9E mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0C1DA0 mov Rm,Rn */
	IF(0x0C0C1DA2u); W8(r0 + r8, r2); UPD(0x0C0C1DA4u, 2);  /* 0C0C1DA2 mov.b Rm,@(r0,Rn) */
L_0C0C1DA4: BLKS(0x0C0C1DA4u);
	r6 = r8;  /* 0C0C1DA4 mov Rm,Rn */
	r6 += 0x1u;  /* 0C0C1DA6 add #imm,Rn */
	r8 = (u32)(s32)(s16)r6;  /* 0C0C1DA8 exts.w Rm,Rn */
	r2 = 0x7u;  /* 0C0C1DAA mov #imm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C0C1DAC cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0C1D88u, 8); goto L_0C0C1D88; }  /* 0C0C1DAE bf */
L_0C0C1DB0: BLKS(0x0C0C1DB0u);
	r8 = 0x0u;  /* 0C0C1DB0 mov #imm,Rn */
	IF(0x0C0C1DB2u); ;  /* 0C0C1DB2 nop */
	UPD(0x0C0C1DB4u, 2);
L_0C0C1DB4: BLKS(0x0C0C1DB4u);
	r2 = 0xC29CF88u; UPD(0x0C0C1DB6u, 1);  /* 0C0C1DB4 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C0C1DB6 mov Rm,Rn */
	IF(0x0C0C1DB8u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1DBAu, 2);  /* 0C0C1DB8 mov.b @(r0,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0C1DBA tst Rm,Rn */
	{ u32 c_ = T; r2 += r8; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0C1DC4u, 4); goto L_0C0C1DC4; } goto L_0C0C1DC0; }  /* 0C0C1DBC bt/s */
L_0C0C1DC0: BLKS(0x0C0C1DC0u);
	r1 += 0xFFFFFFFFu;  /* 0C0C1DC0 add #imm,Rn */
	W8(r2, r1); UPD(0x0C0C1DC4u, 3);  /* 0C0C1DC2 mov.b Rm,@Rn */
L_0C0C1DC4: BLKS(0x0C0C1DC4u);
	r9 = 0xC28EC84u; UPD(0x0C0C1DC6u, 1);  /* 0C0C1DC4 mov.l @(disp,pc),Rn */
	r7 = 0x7u;  /* 0C0C1DC6 mov #imm,Rn */
	r0 = r9;  /* 0C0C1DC8 mov Rm,Rn */
	IF(0x0C0C1DCAu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1DCCu, 3);  /* 0C0C1DCA mov.b @(r0,Rm),Rn */
	T = r9 > r7;  /* 0C0C1DCC cmp/hi Rm,Rn */
	{ u32 c_ = !T; r1 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C1DD6u, 4); goto L_0C0C1DD6; } goto L_0C0C1DD2; }  /* 0C0C1DCE bf/s */
L_0C0C1DD2: BLKS(0x0C0C1DD2u);
	{ IF(0x0C0C1DD4u); ; /* slot nop */ UPD(0x0C0C1ED0u, 4); goto L_0C0C1ED0; }  /* 0C0C1DD2 bra */
L_0C0C1DD6: BLKS(0x0C0C1DD6u);
	r0 = 0xC0C1E00u;  /* 0C0C1DD6 mova @(disp,pc),r0 */
	IF(0x0C0C1DD8u); r10 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C0C1DDAu, 2);  /* 0C0C1DD8 mov.b @(r0,Rm),Rn */
	r10 = r10 & 0xFF;  /* 0C0C1DDA extu.b Rm,Rn */
	IF(0x0C0C1DDCu); { u32 tv_ = (r10 + 0x0C0C1DE0u); u32 t_ = PHYS(tv_); IF(0x0C0C1DDEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0C1E10u: goto L_0C0C1E10; case 0x0C0C1E3Au: goto L_0C0C1E3A; case 0x0C0C1E80u: goto L_0C0C1E80; default: JUMPD(tv_); } }  /* 0C0C1DDC braf Rn */
L_0C0C1E10: BLKS(0x0C0C1E10u);
	r12 = 0xC29CF88u; UPD(0x0C0C1E12u, 1);  /* 0C0C1E10 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0C1E12 mov Rm,Rn */
	IF(0x0C0C1E14u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1E16u, 2);  /* 0C0C1E14 mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C0C1E16 tst Rm,Rn */
	r11 = 0xC3C4030u; UPD(0x0C0C1E1Au, 2);  /* 0C0C1E18 mov.l @(disp,pc),Rn */
	IF(0x0C0C1E1Au); r4 = T;  /* 0C0C1E1A movt Rn */
	r0 = r11;  /* 0C0C1E1C mov Rm,Rn */
	IF(0x0C0C1E1Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0C1E20u, 3);  /* 0C0C1E1E mov.b @(r0,Rm),Rn */
	r10 = 0xC29D08Cu; UPD(0x0C0C1E22u, 1);  /* 0C0C1E20 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C0C1E22 mov Rm,Rn */
	IF(0x0C0C1E24u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1E26u, 2);  /* 0C0C1E24 mov.b @(r0,Rm),Rn */
	T = r2 >= r5;  /* 0C0C1E26 cmp/hs Rm,Rn */
	IF(0x0C0C1E28u); r3 = T;  /* 0C0C1E28 movt Rn */
	r4 &= r3;  /* 0C0C1E2A and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0C1E2C tst Rm,Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C1E50u, 7); goto L_0C0C1E50; } UPD(0x0C0C1E32u, 1); goto L_0C0C1E32; }  /* 0C0C1E2E bf/s */
L_0C0C1E32: BLKS(0x0C0C1E32u);
	r10 = 0xC28EC84u; UPD(0x0C0C1E34u, 1);  /* 0C0C1E32 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0C1E34 mov #imm,Rn */
	r0 = r10;  /* 0C0C1E36 mov Rm,Rn */
	IF(0x0C0C1E38u); W8(r0 + r8, r9); UPD(0x0C0C1E3Au, 3);  /* 0C0C1E38 mov.b Rm,@(r0,Rn) */
L_0C0C1E3A: BLKS(0x0C0C1E3Au);
	r9 = r8;  /* 0C0C1E3A mov Rm,Rn */
	r9 += 0x1u;  /* 0C0C1E3C add #imm,Rn */
	r12 = 0xFFu; UPD(0x0C0C1E40u, 3);  /* 0C0C1E3E mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r9;  /* 0C0C1E40 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r12;  /* 0C0C1E42 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0C1DB4u, 5); goto L_0C0C1DB4; }  /* 0C0C1E44 bf */
L_0C0C1E46: BLKS(0x0C0C1E46u);
	{ IF(0x0C0C1E48u); ; /* slot nop */ UPD(0x0C0C1D6Au, 3); goto L_0C0C1D6A; }  /* 0C0C1E46 bra */
L_0C0C1E50: BLKS(0x0C0C1E50u);
	r4 = 0xC28EC84u; UPD(0x0C0C1E52u, 1);  /* 0C0C1E50 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C0C1E52 mov Rm,Rn */
	IF(0x0C0C1E54u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1E56u, 2);  /* 0C0C1E54 mov.b @(r0,Rm),Rn */
	r3 = 0xC3C404Cu; UPD(0x0C0C1E58u, 1);  /* 0C0C1E56 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C0C1E58 extu.b Rm,Rn */
	r0 = r3;  /* 0C0C1E5A mov Rm,Rn */
	IF(0x0C0C1E5Cu); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1E5Eu, 3);  /* 0C0C1E5C mov.b @(r0,Rm),Rn */
	r5 = r8 & 0xFF;  /* 0C0C1E5E extu.b Rm,Rn */
	r0 = 0xC05FD2Cu; UPD(0x0C0C1E62u, 2);  /* 0C0C1E60 mov.l @(disp,pc),Rn */
	IF(0x0C0C1E62u); { u32 t_ = r0; PR = 0x0C0C1E66u; r6 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C05FD2C, 0x0C05FD2Cu, 0x0C0C1E66u); }  /* 0C0C1E62 jsr @Rn */
L_0C0C1E66: BLKS(0x0C0C1E66u);
	r7 = 0xC2AC05Cu; UPD(0x0C0C1E68u, 1);  /* 0C0C1E66 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0C1E68 mov Rm,Rn */
	IF(0x0C0C1E6Au); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1E6Cu, 2);  /* 0C0C1E6A mov.b @(r0,Rm),Rn */
	r0 = r12;  /* 0C0C1E6C mov Rm,Rn */
	IF(0x0C0C1E6Eu); W8(r0 + r8, r6); UPD(0x0C0C1E70u, 2);  /* 0C0C1E6E mov.b Rm,@(r0,Rn) */
	r0 = r10;  /* 0C0C1E70 mov Rm,Rn */
	IF(0x0C0C1E72u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1E74u, 2);  /* 0C0C1E72 mov.b @(r0,Rm),Rn */
	r0 = r11;  /* 0C0C1E74 mov Rm,Rn */
	{ IF(0x0C0C1E78u); W8(r0 + r9, r12); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0C1E32u, 4); goto L_0C0C1E32; }  /* 0C0C1E76 bra */
L_0C0C1E80: BLKS(0x0C0C1E80u);
	r12 = 0xC28EC84u; UPD(0x0C0C1E82u, 1);  /* 0C0C1E80 mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C0C1E82 mov #imm,Rn */
	r0 = r12;  /* 0C0C1E84 mov Rm,Rn */
	IF(0x0C0C1E86u); W8(r0 + r8, r11); UPD(0x0C0C1E88u, 3);  /* 0C0C1E86 mov.b Rm,@(r0,Rn) */
	r11 = 0xC29CF88u; UPD(0x0C0C1E8Au, 1);  /* 0C0C1E88 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C0C1E8A mov Rm,Rn */
	IF(0x0C0C1E8Cu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1E8Eu, 2);  /* 0C0C1E8C mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0C1E8E tst Rm,Rn */
	{ u32 c_ = !T; r10 = r8 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C0C1E3Au, 4); goto L_0C0C1E3A; } goto L_0C0C1E94; }  /* 0C0C1E90 bf/s */
L_0C0C1E94: BLKS(0x0C0C1E94u);
	r9 = 0xC0C1CD0u; UPD(0x0C0C1E96u, 2);  /* 0C0C1E94 mov.l @(disp,pc),Rn */
	IF(0x0C0C1E96u); { u32 t_ = r9; PR = 0x0C0C1E9Au; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1CD0, 0x0C0C1CD0u, 0x0C0C1E9Au); }  /* 0C0C1E96 jsr @Rn */
L_0C0C1E9A: BLKS(0x0C0C1E9Au);
	T = (r0 & r0) == 0;  /* 0C0C1E9A tst Rm,Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C1E3Au, 4); goto L_0C0C1E3A; } goto L_0C0C1EA0; }  /* 0C0C1E9C bt/s */
L_0C0C1EA0: BLKS(0x0C0C1EA0u);
	r2 = 0xC3C404Cu; UPD(0x0C0C1EA2u, 2);  /* 0C0C1EA0 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFF;  /* 0C0C1EA2 extu.b Rm,Rn */
	r0 = r2;  /* 0C0C1EA4 mov Rm,Rn */
	IF(0x0C0C1EA6u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1EA8u, 3);  /* 0C0C1EA6 mov.b @(r0,Rm),Rn */
	r5 = r10;  /* 0C0C1EA8 mov Rm,Rn */
	r0 = 0xC05FD2Cu; UPD(0x0C0C1EACu, 2);  /* 0C0C1EAA mov.l @(disp,pc),Rn */
	r6 = r1 & 0xFF;  /* 0C0C1EAC extu.b Rm,Rn */
	IF(0x0C0C1EAEu); { u32 t_ = r0; PR = 0x0C0C1EB2u; r7 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C05FD2C, 0x0C05FD2Cu, 0x0C0C1EB2u); }  /* 0C0C1EAE jsr @Rn */
L_0C0C1EB2: BLKS(0x0C0C1EB2u);
	r4 = 0xC2AC05Cu; UPD(0x0C0C1EB4u, 1);  /* 0C0C1EB2 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C0C1EB4 mov Rm,Rn */
	IF(0x0C0C1EB6u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1EB8u, 2);  /* 0C0C1EB6 mov.b @(r0,Rm),Rn */
	r0 = r11;  /* 0C0C1EB8 mov Rm,Rn */
	IF(0x0C0C1EBAu); W8(r0 + r8, r5); UPD(0x0C0C1EBCu, 2);  /* 0C0C1EBA mov.b Rm,@(r0,Rn) */
	r3 = 0xC29D08Cu; UPD(0x0C0C1EBEu, 1);  /* 0C0C1EBC mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C0C1EBE mov Rm,Rn */
	IF(0x0C0C1EC0u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1EC2u, 2);  /* 0C0C1EC0 mov.b @(r0,Rm),Rn */
	r7 = 0xC3C4030u; UPD(0x0C0C1EC4u, 1);  /* 0C0C1EC2 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0C1EC4 mov Rm,Rn */
	{ IF(0x0C0C1EC8u); W8(r0 + r9, r6); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0C1E3Au, 4); goto L_0C0C1E3A; }  /* 0C0C1EC6 bra */
L_0C0C1ED0: BLKS(0x0C0C1ED0u);
	r11 = 0xC238028u; UPD(0x0C0C1ED2u, 1);  /* 0C0C1ED0 mov.l @(disp,pc),Rn */
	r10 = 0xC23230Du; UPD(0x0C0C1ED4u, 1);  /* 0C0C1ED2 mov.l @(disp,pc),Rn */
	W8(r11, r9); UPD(0x0C0C1ED6u, 1);  /* 0C0C1ED4 mov.b Rm,@Rn */
	{ W8(r10, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C0C1E3Au, 3); goto L_0C0C1E3A; }  /* 0C0C1ED6 bra */
}

/* FUN_0c0c1f10 */
void blk_f_0C0C1F10(sh3_t *c)
{
	LOCALS;
L_0C0C1F10: BLKS(0x0C0C1F10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1F12u, 1);  /* 0C0C1F10 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0C1F12 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1F16u, 2);  /* 0C0C1F14 mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C0C1F16 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1F1Au, 2);  /* 0C0C1F18 mov.l Rm,@-Rn */
	r2 = 0x7u;  /* 0C0C1F1A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1F1Eu, 2);  /* 0C0C1F1C mov.l Rm,@-Rn */
	r7 = 0xC3C4030u; UPD(0x0C0C1F20u, 1);  /* 0C0C1F1E mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1F22u, 1);  /* 0C0C1F20 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C0C1F22 mov Rm,Rn */
	r4 = r0;  /* 0C0C1F24 mov Rm,Rn */
	UPD(0x0C0C1F26u, 2);
L_0C0C1F26: BLKS(0x0C0C1F26u);
	IF(0x0C0C1F26u); W8(r0 + r7, r3); UPD(0x0C0C1F28u, 1);  /* 0C0C1F26 mov.b Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C0C1F28 add #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C0C1F2A exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C0C1F2C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C1F26u, 6); goto L_0C0C1F26; } goto L_0C0C1F32; }  /* 0C0C1F2E bf/s */
L_0C0C1F32: BLKS(0x0C0C1F32u);
	r8 = 0xC234BF0u; UPD(0x0C0C1F34u, 2);  /* 0C0C1F32 mov.l @(disp,pc),Rn */
	r2 = 0xFFFFFFFFu;  /* 0C0C1F34 mov #imm,Rn */
	r7 = R32(r8); UPD(0x0C0C1F38u, 2);  /* 0C0C1F36 mov.l @Rm,Rn */
	r6 = 0x98765432u; UPD(0x0C0C1F3Au, 1);  /* 0C0C1F38 mov.l @(disp,pc),Rn */
	r5 = 0xC238029u; UPD(0x0C0C1F3Cu, 1);  /* 0C0C1F3A mov.l @(disp,pc),Rn */
	T = r7 == r6;  /* 0C0C1F3C cmp/eq Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C0C1F40u, 2);  /* 0C0C1F3E mov.b @Rm,Rn */
	IF(0x0C0C1F40u); r3 = T;  /* 0C0C1F40 movt Rn */
	T = (r4 & r4) == 0;  /* 0C0C1F42 tst Rm,Rn */
	{ u32 t_ = 0u - r2, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0C1F44 negc Rm,Rn */
	r0 &= r3;  /* 0C0C1F46 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0C1F48 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C1F8Eu, 8); goto L_0C0C1F8E; } goto L_0C0C1F4E; }  /* 0C0C1F4A bf/s */
L_0C0C1F4E: BLKS(0x0C0C1F4Eu);
	r11 = 0xC2AC05Cu; UPD(0x0C0C1F50u, 2);  /* 0C0C1F4E mov.l @(disp,pc),Rn */
	r10 = 0xC206624u; UPD(0x0C0C1F52u, 1);  /* 0C0C1F50 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0C1F52 mov #imm,Rn */
	r9 = 0xC29D08Cu; UPD(0x0C0C1F56u, 2);  /* 0C0C1F54 mov.l @(disp,pc),Rn */
	r8 = 0xC206724u; UPD(0x0C0C1F58u, 1);  /* 0C0C1F56 mov.l @(disp,pc),Rn */
	r4 = 0xC3C404Cu; UPD(0x0C0C1F5Au, 1);  /* 0C0C1F58 mov.l @(disp,pc),Rn */
	r5 = 0xC29CF88u; UPD(0x0C0C1F5Cu, 1);  /* 0C0C1F5A mov.l @(disp,pc),Rn */
	r6 = 0xC206824u; UPD(0x0C0C1F5Eu, 1);  /* 0C0C1F5C mov.l @(disp,pc),Rn */
	r7 = 0xC28EC84u; UPD(0x0C0C1F60u, 1);  /* 0C0C1F5E mov.l @(disp,pc),Rn */
	r3 = 0xFFu; UPD(0x0C0C1F62u, 1);  /* 0C0C1F60 mov.w @(disp,pc),Rn */
	IF(0x0C0C1F62u); ;  /* 0C0C1F62 nop */
	UPD(0x0C0C1F64u, 1);
L_0C0C1F64: BLKS(0x0C0C1F64u);
	IF(0x0C0C1F64u); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0C1F66u, 1);  /* 0C0C1F64 mov.b @(r0,Rm),Rn */
	IF(0x0C0C1F66u); W8(r0 + r11, r1); UPD(0x0C0C1F68u, 1);  /* 0C0C1F66 mov.b Rm,@(r0,Rn) */
	IF(0x0C0C1F68u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1F6Au, 1);  /* 0C0C1F68 mov.b @(r0,Rm),Rn */
	IF(0x0C0C1F6Au); W8(r0 + r9, r1); UPD(0x0C0C1F6Cu, 1);  /* 0C0C1F6A mov.b Rm,@(r0,Rn) */
	IF(0x0C0C1F6Cu); r1 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0C1F6Eu, 1);  /* 0C0C1F6C mov.b @(r0,Rm),Rn */
	IF(0x0C0C1F6Eu); W8(r0 + r4, r1); UPD(0x0C0C1F70u, 1);  /* 0C0C1F6E mov.b Rm,@(r0,Rn) */
	IF(0x0C0C1F70u); W8(r0 + r5, r2); UPD(0x0C0C1F72u, 1);  /* 0C0C1F70 mov.b Rm,@(r0,Rn) */
	r1 = r0;  /* 0C0C1F72 mov Rm,Rn */
	IF(0x0C0C1F74u); W8(r0 + r7, r2); UPD(0x0C0C1F76u, 2);  /* 0C0C1F74 mov.b Rm,@(r0,Rn) */
	r1 += 0x1u;  /* 0C0C1F76 add #imm,Rn */
	r0 = (u32)(s32)(s16)r1;  /* 0C0C1F78 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C0C1F7A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0C1F64u, 6); goto L_0C0C1F64; }  /* 0C0C1F7C bf */
L_0C0C1F7E: BLKS(0x0C0C1F7Eu);
	r11 = 0x0u;  /* 0C0C1F7E mov #imm,Rn */
	r0 = 0xC23230Du; UPD(0x0C0C1F82u, 2);  /* 0C0C1F80 mov.l @(disp,pc),Rn */
	r10 = 0xC238028u; UPD(0x0C0C1F84u, 1);  /* 0C0C1F82 mov.l @(disp,pc),Rn */
	r1 = 0x98765432u; UPD(0x0C0C1F86u, 1);  /* 0C0C1F84 mov.l @(disp,pc),Rn */
	r9 = 0xC234BF0u; UPD(0x0C0C1F88u, 1);  /* 0C0C1F86 mov.l @(disp,pc),Rn */
	W8(r0, r11); UPD(0x0C0C1F8Au, 1);  /* 0C0C1F88 mov.b Rm,@Rn */
	W8(r10, r11); UPD(0x0C0C1F8Cu, 1);  /* 0C0C1F8A mov.b Rm,@Rn */
	W32(r9, r1); UPD(0x0C0C1F8Eu, 1);  /* 0C0C1F8C mov.l Rm,@Rn */
L_0C0C1F8E: BLKS(0x0C0C1F8Eu);
	r15 = r14;  /* 0C0C1F8E mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C1F92u, 2);  /* 0C0C1F90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C1F94u, 1);  /* 0C0C1F92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C1F96u, 1);  /* 0C0C1F94 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C1F98u, 1);  /* 0C0C1F96 mov.l @Rm+,Rn */
	IF(0x0C0C1F98u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C1F98 rts */
}

/* FUN_0c0c1fe0 */
void blk_f_0C0C1FE0(sh3_t *c)
{
	LOCALS;
L_0C0C1FE0: BLKS(0x0C0C1FE0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1FE2u, 1);  /* 0C0C1FE0 mov.l Rm,@-Rn */
	r0 = r4 & 0xFF;  /* 0C0C1FE2 extu.b Rm,Rn */
	r3 = 0xC3C848Cu; UPD(0x0C0C1FE6u, 2);  /* 0C0C1FE4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0C1FE6 mov Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0C1FEAu, 2);  /* 0C0C1FE8 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0C1FEA tst Rm,Rn */
	{ u32 c_ = T; r4 = (u32)(s32)(s8)r5; /* slot exts.b Rm,Rn */ if (c_) { UPD(0x0C0C1FF8u, 4); goto L_0C0C1FF8; } goto L_0C0C1FF0; }  /* 0C0C1FEC bt/s */
L_0C0C1FF0: BLKS(0x0C0C1FF0u);
	T = (r0 & r0) == 0;  /* 0C0C1FF0 tst Rm,Rn */
	if (T) { UPD(0x0C0C2000u, 5); goto L_0C0C2000; }  /* 0C0C1FF2 bt */
L_0C0C1FF4: BLKS(0x0C0C1FF4u);
	r2 = 0xC28EC84u; UPD(0x0C0C1FF6u, 1);  /* 0C0C1FF4 mov.l @(disp,pc),Rn */
	IF(0x0C0C1FF6u); W8(r0 + r2, r4); UPD(0x0C0C1FF8u, 1);  /* 0C0C1FF6 mov.b Rm,@(r0,Rn) */
L_0C0C1FF8: BLKS(0x0C0C1FF8u);
	r15 = r14;  /* 0C0C1FF8 mov Rm,Rn */
	IF(0x0C0C1FFAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0C1FFA rts */
L_0C0C2000: BLKS(0x0C0C2000u);
	r0 = 0xC05FED8u; UPD(0x0C0C2002u, 1);  /* 0C0C2000 mov.l @(disp,pc),Rn */
	r4 = r4 & 0xFF;  /* 0C0C2002 extu.b Rm,Rn */
	r15 = r14;  /* 0C0C2004 mov Rm,Rn */
	IF(0x0C0C2006u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C05FED8u: TAIL(blk_f_0C05FED8); default: JUMPD(tv_); } }  /* 0C0C2006 jmp @Rn */
}

/* FUN_0c0c2020 */
void blk_f_0C0C2020(sh3_t *c)
{
	LOCALS;
L_0C0C2020: BLKS(0x0C0C2020u);
	r0 = (u32)(s32)(s16)r4;  /* 0C0C2020 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2024u, 2);  /* 0C0C2022 mov.l Rm,@-Rn */
	r3 = r5 & 0xFF;  /* 0C0C2024 extu.b Rm,Rn */
	r4 = 0xC3C848Cu; UPD(0x0C0C2028u, 2);  /* 0C0C2026 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C0C202Au, 1);  /* 0C0C2028 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0C202A tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C205Cu, 4); goto L_0C0C205C; } goto L_0C0C2030; }  /* 0C0C202C bt/s */
L_0C0C2030: BLKS(0x0C0C2030u);
	r5 = 0xC22E015u; UPD(0x0C0C2032u, 2);  /* 0C0C2030 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0C2032 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C0C2036u, 2);  /* 0C0C2034 mov.b @Rm,Rn */
	r4 = 0xC2860FCu; UPD(0x0C0C2038u, 1);  /* 0C0C2036 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C0C2038 tst Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C0C203Cu, 2);  /* 0C0C203A mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C0C203C negc Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0C203E tst Rm,Rn */
	IF(0x0C0C2040u); r5 = T;  /* 0C0C2040 movt Rn */
	T = (r6 & r5) == 0;  /* 0C0C2042 tst Rm,Rn */
	if (!T) { UPD(0x0C0C205Cu, 7); goto L_0C0C205C; }  /* 0C0C2044 bf */
L_0C0C2046: BLKS(0x0C0C2046u);
	T = (r3 & r3) == 0;  /* 0C0C2046 tst Rm,Rn */
	{ u32 c_ = T; r7 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C2070u, 4); goto L_0C0C2070; } goto L_0C0C204C; }  /* 0C0C2048 bt/s */
L_0C0C204C: BLKS(0x0C0C204Cu);
	T = r0 > r7;  /* 0C0C204C cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0C205Cu, 5); goto L_0C0C205C; }  /* 0C0C204E bt */
L_0C0C2050: BLKS(0x0C0C2050u);
	r5 = 0xC2074C8u; UPD(0x0C0C2052u, 1);  /* 0C0C2050 mov.l @(disp,pc),Rn */
	r2 = 0xC28EC84u; UPD(0x0C0C2054u, 1);  /* 0C0C2052 mov.l @(disp,pc),Rn */
	IF(0x0C0C2054u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0C2056u, 1);  /* 0C0C2054 mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C0C2056 mov Rm,Rn */
	IF(0x0C0C2058u); W8(r0 + r3, r4); UPD(0x0C0C205Au, 2);  /* 0C0C2058 mov.b Rm,@(r0,Rn) */
	IF(0x0C0C205Au); ;  /* 0C0C205A nop */
	UPD(0x0C0C205Cu, 1);
L_0C0C205C: BLKS(0x0C0C205Cu);
	r15 = r14;  /* 0C0C205C mov Rm,Rn */
	IF(0x0C0C205Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0C205E rts */
L_0C0C2070: BLKS(0x0C0C2070u);
	r6 = 0xC2074C8u; UPD(0x0C0C2072u, 1);  /* 0C0C2070 mov.l @(disp,pc),Rn */
	IF(0x0C0C2072u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0C2074u, 1);  /* 0C0C2072 mov.b @(r0,Rm),Rn */
	r0 = 0xC05FED8u; UPD(0x0C0C2076u, 1);  /* 0C0C2074 mov.l @(disp,pc),Rn */
	r4 = r3 & 0xFF;  /* 0C0C2076 extu.b Rm,Rn */
	r15 = r14;  /* 0C0C2078 mov Rm,Rn */
	IF(0x0C0C207Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C05FED8u: TAIL(blk_f_0C05FED8); default: JUMPD(tv_); } }  /* 0C0C207A jmp @Rn */
}

/* FUN_0c0c20a0 */
void blk_f_0C0C20A0(sh3_t *c)
{
	LOCALS;
L_0C0C20A0: BLKS(0x0C0C20A0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C20A2u, 1);  /* 0C0C20A0 mov.l Rm,@-Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C0C20A2 exts.w Rm,Rn */
	r2 = 0xC3C848Cu; UPD(0x0C0C20A6u, 2);  /* 0C0C20A4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0C20A6 mov Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0C20AAu, 2);  /* 0C0C20A8 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0C20AA tst Rm,Rn */
	{ u32 c_ = T; r7 = r5 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C0C20E8u, 4); goto L_0C0C20E8; } goto L_0C0C20B0; }  /* 0C0C20AC bt/s */
L_0C0C20B0: BLKS(0x0C0C20B0u);
	r0 = 0xC22E015u; UPD(0x0C0C20B2u, 2);  /* 0C0C20B0 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0C20B2 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0C20B6u, 2);  /* 0C0C20B4 mov.b @Rm,Rn */
	r6 = 0xC2860FCu; UPD(0x0C0C20B8u, 1);  /* 0C0C20B6 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C0C20B8 tst Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0C20BCu, 2);  /* 0C0C20BA mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C0C20BC negc Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0C20BE tst Rm,Rn */
	IF(0x0C0C20C0u); r0 = T;  /* 0C0C20C0 movt Rn */
	T = (r4 & r0) == 0;  /* 0C0C20C2 tst Rm,Rn */
	if (!T) { UPD(0x0C0C20E8u, 7); goto L_0C0C20E8; }  /* 0C0C20C4 bf */
L_0C0C20C6: BLKS(0x0C0C20C6u);
	r2 = 0xC2074D0u; UPD(0x0C0C20C8u, 1);  /* 0C0C20C6 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C0C20C8 mov Rm,Rn */
	IF(0x0C0C20CAu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0C20CCu, 2);  /* 0C0C20CA mov.b @(r0,Rm),Rn */
	r6 = 0x2A0u; UPD(0x0C0C20CEu, 1);  /* 0C0C20CC mov.w @(disp,pc),Rn */
	IF(0x0C0C20CEu); MACL = r2 * r6;  /* 0C0C20CE mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C0C20D2u, 3);  /* 0C0C20D0 mov.l @(disp,pc),Rn */
	IF(0x0C0C20D2u); r0 = MACL;  /* 0C0C20D2 sts macl,Rn */
	IF(0x0C0C20D4u); r4 = R32(r0 + r5); UPD(0x0C0C20D6u, 2);  /* 0C0C20D4 mov.l @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C0C20D6 tst Rm,Rn */
	if (!T) { UPD(0x0C0C20DCu, 4); goto L_0C0C20DC; }  /* 0C0C20D8 bf */
L_0C0C20DA: BLKS(0x0C0C20DAu);
	r3 = r2;  /* 0C0C20DA mov Rm,Rn */
	UPD(0x0C0C20DCu, 1);
L_0C0C20DC: BLKS(0x0C0C20DCu);
	r5 = 0xC2074CCu; UPD(0x0C0C20DEu, 1);  /* 0C0C20DC mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0C20DE mov Rm,Rn */
	IF(0x0C0C20E0u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0C20E2u, 2);  /* 0C0C20E0 mov.b @(r0,Rm),Rn */
	r3 = 0xC28EC84u; UPD(0x0C0C20E4u, 1);  /* 0C0C20E2 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C0C20E4 mov Rm,Rn */
	IF(0x0C0C20E6u); W8(r0 + r7, r4); UPD(0x0C0C20E8u, 2);  /* 0C0C20E6 mov.b Rm,@(r0,Rn) */
L_0C0C20E8: BLKS(0x0C0C20E8u);
	r15 = r14;  /* 0C0C20E8 mov Rm,Rn */
	IF(0x0C0C20EAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0C20EA rts */
}

/* FUN_0c0c2110 */
void blk_f_0C0C2110(sh3_t *c)
{
	LOCALS;
L_0C0C2110: BLKS(0x0C0C2110u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2112u, 1);  /* 0C0C2110 mov.l Rm,@-Rn */
	r0 = r4 & 0xFF;  /* 0C0C2112 extu.b Rm,Rn */
	r3 = 0xC3C848Cu; UPD(0x0C0C2116u, 2);  /* 0C0C2114 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0C2118u, 1);  /* 0C0C2116 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0C2118 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C2140u, 4); goto L_0C0C2140; } goto L_0C0C211E; }  /* 0C0C211A bt/s */
L_0C0C211E: BLKS(0x0C0C211Eu);
	r3 = 0xC22E015u; UPD(0x0C0C2120u, 2);  /* 0C0C211E mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0C2120 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0C2124u, 2);  /* 0C0C2122 mov.b @Rm,Rn */
	r7 = 0xC2860FCu; UPD(0x0C0C2126u, 1);  /* 0C0C2124 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C0C2126 tst Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0C212Au, 2);  /* 0C0C2128 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C0C212A negc Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0C212C tst Rm,Rn */
	IF(0x0C0C212Eu); r4 = T;  /* 0C0C212E movt Rn */
	T = (r5 & r4) == 0;  /* 0C0C2130 tst Rm,Rn */
	{ u32 c_ = !T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C0C2140u, 7); goto L_0C0C2140; } goto L_0C0C2136; }  /* 0C0C2132 bf/s */
L_0C0C2136: BLKS(0x0C0C2136u);
	{ u32 c_ = T; r5 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C2140u, 4); goto L_0C0C2140; } goto L_0C0C213A; }  /* 0C0C2136 bt/s */
L_0C0C213A: BLKS(0x0C0C213Au);
	r4 = 0xC28EC84u; UPD(0x0C0C213Cu, 2);  /* 0C0C213A mov.l @(disp,pc),Rn */
	IF(0x0C0C213Cu); W8(r0 + r4, r5); UPD(0x0C0C213Eu, 1);  /* 0C0C213C mov.b Rm,@(r0,Rn) */
	IF(0x0C0C213Eu); ;  /* 0C0C213E nop */
	UPD(0x0C0C2140u, 1);
L_0C0C2140: BLKS(0x0C0C2140u);
	r15 = r14;  /* 0C0C2140 mov Rm,Rn */
	IF(0x0C0C2142u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0C2142 rts */
}

/* FUN_0c0c2160 */
void blk_f_0C0C2160(sh3_t *c)
{
	LOCALS;
L_0C0C2160: BLKS(0x0C0C2160u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2162u, 1);  /* 0C0C2160 mov.l Rm,@-Rn */
	r0 = r4 & 0xFF;  /* 0C0C2162 extu.b Rm,Rn */
	r3 = 0xC3C848Cu; UPD(0x0C0C2166u, 2);  /* 0C0C2164 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0C2168u, 1);  /* 0C0C2166 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0C2168 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C2178u, 4); goto L_0C0C2178; } goto L_0C0C216E; }  /* 0C0C216A bt/s */
L_0C0C216E: BLKS(0x0C0C216Eu);
	T = (r0 & r0) == 0;  /* 0C0C216E tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x7u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C2180u, 5); goto L_0C0C2180; } goto L_0C0C2174; }  /* 0C0C2170 bt/s */
L_0C0C2174: BLKS(0x0C0C2174u);
	r4 = 0xC28EC84u; UPD(0x0C0C2176u, 2);  /* 0C0C2174 mov.l @(disp,pc),Rn */
	IF(0x0C0C2176u); W8(r0 + r4, r1); UPD(0x0C0C2178u, 1);  /* 0C0C2176 mov.b Rm,@(r0,Rn) */
L_0C0C2178: BLKS(0x0C0C2178u);
	r15 = r14;  /* 0C0C2178 mov Rm,Rn */
	IF(0x0C0C217Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0C217A rts */
L_0C0C2180: BLKS(0x0C0C2180u);
	r0 = 0xC05FED8u; UPD(0x0C0C2182u, 1);  /* 0C0C2180 mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C0C2182 mov #imm,Rn */
	r15 = r14;  /* 0C0C2184 mov Rm,Rn */
	IF(0x0C0C2186u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C05FED8u: TAIL(blk_f_0C05FED8); default: JUMPD(tv_); } }  /* 0C0C2186 jmp @Rn */
}

/* FUN_0c0c21a0 */
void blk_f_0C0C21A0(sh3_t *c)
{
	LOCALS;
L_0C0C21A0: BLKS(0x0C0C21A0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C21A2u, 1);  /* 0C0C21A0 mov.l Rm,@-Rn */
	r2 = (u32)(s32)(s8)r4;  /* 0C0C21A2 exts.b Rm,Rn */
	r0 = 0xC3CA6F4u; UPD(0x0C0C21A6u, 2);  /* 0C0C21A4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0C21A6 mov Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0C21A8 tst Rm,Rn */
	{ u32 c_ = !T; W32(r0, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0C21C0u, 5); goto L_0C0C21C0; } UPD(0x0C0C21AEu, 1); goto L_0C0C21AE; }  /* 0C0C21AA bf/s */
L_0C0C21AE: BLKS(0x0C0C21AEu);
	r0 = 0xC05FED8u; UPD(0x0C0C21B0u, 1);  /* 0C0C21AE mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0C21B0 mov #imm,Rn */
	r15 = r14;  /* 0C0C21B2 mov Rm,Rn */
	IF(0x0C0C21B4u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C05FED8u: TAIL(blk_f_0C05FED8); default: JUMPD(tv_); } }  /* 0C0C21B4 jmp @Rn */
L_0C0C21C0: BLKS(0x0C0C21C0u);
	r5 = 0x3u;  /* 0C0C21C0 mov #imm,Rn */
	IF(0x0C0C21C2u); ARG0(0x425Du); { s32 s_ = (s32)r5; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C0C21C2 shld Rm,Rn */
	r4 = 0xC206924u; UPD(0x0C0C21C6u, 3);  /* 0C0C21C4 mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0C21C6 add Rm,Rn */
	r3 = r2;  /* 0C0C21C8 mov Rm,Rn */
	r2 += 0xFFFFFFF8u;  /* 0C0C21CA add #imm,Rn */
	r5 = R32(r2); UPD(0x0C0C21CEu, 4);  /* 0C0C21CC mov.l @Rm,Rn */
	r3 += 0xFFFFFFFCu;  /* 0C0C21CE add #imm,Rn */
	r6 = R32(r3); UPD(0x0C0C21D2u, 2);  /* 0C0C21D0 mov.l @Rm,Rn */
	r4 = 0x0u;  /* 0C0C21D2 mov #imm,Rn */
	r2 = 0xC05FE4Cu; UPD(0x0C0C21D6u, 2);  /* 0C0C21D4 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0C21D6 mov Rm,Rn */
	IF(0x0C0C21D8u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C05FE4Cu: TAIL(blk_f_0C05FE4C); default: JUMPD(tv_); } }  /* 0C0C21D8 jmp @Rn */
}

/* FUN_0c0c21f0 */
void blk_f_0C0C21F0(sh3_t *c)
{
	LOCALS;
L_0C0C21F0: BLKS(0x0C0C21F0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C21F2u, 1);  /* 0C0C21F0 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0C21F2 mov #imm,Rn */
	r0 = 0xC062780u; UPD(0x0C0C21F6u, 2);  /* 0C0C21F4 mov.l @(disp,pc),Rn */
	IF(0x0C0C21F6u); r15 -= 4; W32(r15, PR); UPD(0x0C0C21F8u, 1);  /* 0C0C21F6 sts.l pr,@-Rn */
	IF(0x0C0C21F8u); { u32 t_ = r0; PR = 0x0C0C21FCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0C21FCu); }  /* 0C0C21F8 jsr @Rn */
L_0C0C21FC: BLKS(0x0C0C21FCu);
	r4 = 0xC2074D4u; UPD(0x0C0C21FEu, 1);  /* 0C0C21FC mov.l @(disp,pc),Rn */
	IF(0x0C0C21FEu); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0C2200u, 1);  /* 0C0C21FE mov.b @(r0,Rm),Rn */
	r3 = 0xC3C848Cu; UPD(0x0C0C2202u, 1);  /* 0C0C2200 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0C2202 extu.b Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0C2206u, 2);  /* 0C0C2204 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0C2206 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C222Cu, 4); goto L_0C0C222C; } goto L_0C0C220C; }  /* 0C0C2208 bt/s */
L_0C0C220C: BLKS(0x0C0C220Cu);
	r4 = 0xC22E015u; UPD(0x0C0C220Eu, 2);  /* 0C0C220C mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C0C2210u, 1);  /* 0C0C220E mov.b @Rm,Rn */
	r3 = 0xC2860FCu; UPD(0x0C0C2212u, 1);  /* 0C0C2210 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C0C2212 tst Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C0C2216u, 2);  /* 0C0C2214 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C0C2216 negc Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0C2218 tst Rm,Rn */
	IF(0x0C0C221Au); r5 = T;  /* 0C0C221A movt Rn */
	T = (r6 & r5) == 0;  /* 0C0C221C tst Rm,Rn */
	{ u32 c_ = !T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C0C222Cu, 7); goto L_0C0C222C; } goto L_0C0C2222; }  /* 0C0C221E bf/s */
L_0C0C2222: BLKS(0x0C0C2222u);
	{ u32 c_ = T; r6 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C222Cu, 4); goto L_0C0C222C; } goto L_0C0C2226; }  /* 0C0C2222 bt/s */
L_0C0C2226: BLKS(0x0C0C2226u);
	r5 = 0xC28EC84u; UPD(0x0C0C2228u, 2);  /* 0C0C2226 mov.l @(disp,pc),Rn */
	IF(0x0C0C2228u); W8(r0 + r5, r6); UPD(0x0C0C222Au, 1);  /* 0C0C2228 mov.b Rm,@(r0,Rn) */
	IF(0x0C0C222Au); ;  /* 0C0C222A nop */
	UPD(0x0C0C222Cu, 1);
L_0C0C222C: BLKS(0x0C0C222Cu);
	r15 = r14;  /* 0C0C222C mov Rm,Rn */
	IF(0x0C0C222Eu); PR = R32(r15); r15 += 4; UPD(0x0C0C2230u, 2);  /* 0C0C222E lds.l @Rn+,pr */
	IF(0x0C0C2230u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C2230 rts */
}

/* FUN_0c0c2250 */
void blk_f_0C0C2250(sh3_t *c)
{
	LOCALS;
L_0C0C2250: BLKS(0x0C0C2250u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2252u, 1);  /* 0C0C2250 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2254u, 1);  /* 0C0C2252 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r5;  /* 0C0C2254 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2258u, 2);  /* 0C0C2256 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r6;  /* 0C0C2258 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C225Cu, 2);  /* 0C0C225A mov.l Rm,@-Rn */
	r5 = r8;  /* 0C0C225C mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2260u, 2);  /* 0C0C225E mov.l Rm,@-Rn */
	r6 = r9;  /* 0C0C2260 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2264u, 2);  /* 0C0C2262 mov.l Rm,@-Rn */
	r12 = r4 & 0xFF;  /* 0C0C2264 extu.b Rm,Rn */
	r11 = 0xC0626E0u; UPD(0x0C0C2268u, 2);  /* 0C0C2266 mov.l @(disp,pc),Rn */
	IF(0x0C0C2268u); r12 <<= 2;  /* 0C0C2268 shll2 Rn */
	IF(0x0C0C226Au); r15 -= 4; W32(r15, PR); UPD(0x0C0C226Cu, 2);  /* 0C0C226A sts.l pr,@-Rn */
	r10 = 0x80808000u; UPD(0x0C0C226Eu, 1);  /* 0C0C226C mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0C226E mov Rm,Rn */
	r4 = 0xC20699Cu; UPD(0x0C0C2272u, 2);  /* 0C0C2270 mov.l @(disp,pc),Rn */
	IF(0x0C0C2272u); { u32 t_ = r11; PR = 0x0C0C2276u; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0C2276u); }  /* 0C0C2272 jsr @Rn */
L_0C0C2276: BLKS(0x0C0C2276u);
	r2 = 0xC2070C8u; UPD(0x0C0C2278u, 1);  /* 0C0C2276 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0C2278 mov Rm,Rn */
	IF(0x0C0C227Au); r4 = R32(r0 + r2); UPD(0x0C0C227Cu, 2);  /* 0C0C227A mov.l @(r0,Rm),Rn */
	r5 = r8;  /* 0C0C227C mov Rm,Rn */
	r6 = r9;  /* 0C0C227E mov Rm,Rn */
	r7 = r10;  /* 0C0C2280 mov Rm,Rn */
	r0 = r11;  /* 0C0C2282 mov Rm,Rn */
	r15 = r14;  /* 0C0C2284 mov Rm,Rn */
	IF(0x0C0C2286u); PR = R32(r15); r15 += 4; UPD(0x0C0C2288u, 6);  /* 0C0C2286 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C228Au, 1);  /* 0C0C2288 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C228Cu, 1);  /* 0C0C228A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C228Eu, 1);  /* 0C0C228C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C2290u, 1);  /* 0C0C228E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C2292u, 1);  /* 0C0C2290 mov.l @Rm+,Rn */
	IF(0x0C0C2292u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0626E0u: TAIL(blk_f_0C0626E0); default: JUMPD(tv_); } }  /* 0C0C2292 jmp @Rn */
}

/* FUN_0c0c22b0 */
void blk_f_0C0C22B0(sh3_t *c)
{
	LOCALS;
L_0C0C22B0: BLKS(0x0C0C22B0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C22B2u, 1);  /* 0C0C22B0 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C0C22B2 exts.b Rm,Rn */
	r2 = 0xC2070C8u; UPD(0x0C0C22B6u, 2);  /* 0C0C22B4 mov.l @(disp,pc),Rn */
	IF(0x0C0C22B6u); r0 <<= 2;  /* 0C0C22B6 shll2 Rn */
	IF(0x0C0C22B8u); r4 = R32(r0 + r2); UPD(0x0C0C22BAu, 2);  /* 0C0C22B8 mov.l @(r0,Rm),Rn */
	r14 = r15;  /* 0C0C22BA mov Rm,Rn */
	r7 = 0xC040C000u; UPD(0x0C0C22BEu, 2);  /* 0C0C22BC mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)r5;  /* 0C0C22BE exts.b Rm,Rn */
	r0 = 0xC0626E0u; UPD(0x0C0C22C2u, 2);  /* 0C0C22C0 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)r6;  /* 0C0C22C2 exts.b Rm,Rn */
	r15 = r14;  /* 0C0C22C4 mov Rm,Rn */
	IF(0x0C0C22C6u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0626E0u: TAIL(blk_f_0C0626E0); default: JUMPD(tv_); } }  /* 0C0C22C6 jmp @Rn */
}

/* FUN_0c0c22e0 */
void blk_f_0C0C22E0(sh3_t *c)
{
	LOCALS;
L_0C0C22E0: BLKS(0x0C0C22E0u);
	r0 = r4 & 0xFF;  /* 0C0C22E0 extu.b Rm,Rn */
	r6 = r5 & 0xFF;  /* 0C0C22E2 extu.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C22E6u, 3);  /* 0C0C22E4 mov.l Rm,@-Rn */
	r5 = r0;  /* 0C0C22E6 mov Rm,Rn */
	r0 = 0xC05FD2Cu; UPD(0x0C0C22EAu, 2);  /* 0C0C22E8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0C22EA mov Rm,Rn */
	r4 = 0x7u;  /* 0C0C22EC mov #imm,Rn */
	r7 = 0x0u;  /* 0C0C22EE mov #imm,Rn */
	r15 = r14;  /* 0C0C22F0 mov Rm,Rn */
	IF(0x0C0C22F2u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 6); switch (t_) { case 0x0C05FD2Cu: TAIL(blk_f_0C05FD2C); default: JUMPD(tv_); } }  /* 0C0C22F2 jmp @Rn */
}

/* divmod10 */
void blk_f_0C0C2310(sh3_t *c)
{
	LOCALS;
L_0C0C2310: BLKS(0x0C0C2310u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2312u, 1);  /* 0C0C2310 mov.l Rm,@-Rn */
	IF(0x0C0C2312u); r15 -= 4; W32(r15, PR); UPD(0x0C0C2314u, 1);  /* 0C0C2312 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0C2314 add #imm,Rn */
	r14 = r15;  /* 0C0C2316 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0C231Au, 3);  /* 0C0C2318 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0C231Cu, 1);  /* 0C0C231A mov.l Rm,@(disp,Rn) */
	r7 = 0xC0C2494u; UPD(0x0C0C231Eu, 1);  /* 0C0C231C mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0C2320u, 1);  /* 0C0C231E mov.l @Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0C2322u, 1);  /* 0C0C2320 mov.l @(disp,Rm),Rn */
	IF(0x0C0C2322u); { u32 t_ = r7; PR = 0x0C0C2326u; IF(0x0C0C2324u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2494, 0x0C0C2494u, 0x0C0C2326u); }  /* 0C0C2322 jsr @Rn */
L_0C0C2326: BLKS(0x0C0C2326u);
	W32(r14 + 0x8u, r0); UPD(0x0C0C2328u, 1);  /* 0C0C2326 mov.l Rm,@(disp,Rn) */
	r6 = R32(r14); UPD(0x0C0C232Au, 1);  /* 0C0C2328 mov.l @Rm,Rn */
	r7 = 0xC0C2494u; UPD(0x0C0C232Cu, 1);  /* 0C0C232A mov.l @(disp,pc),Rn */
	r4 = r6;  /* 0C0C232C mov Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0C2330u, 2);  /* 0C0C232E mov.l @(disp,Rm),Rn */
	IF(0x0C0C2330u); { u32 t_ = r7; PR = 0x0C0C2334u; IF(0x0C0C2332u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2494, 0x0C0C2494u, 0x0C0C2334u); }  /* 0C0C2330 jsr @Rn */
L_0C0C2334: BLKS(0x0C0C2334u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0C2336u, 1);  /* 0C0C2334 mov.l @(disp,Rm),Rn */
	IF(0x0C0C2336u); MACL = r0 * r1;  /* 0C0C2336 mul.l Rm,Rn */
	IF(0x0C0C2338u); r1 = MACL;  /* 0C0C2338 sts macl,Rn */
	r6 -= r1;  /* 0C0C233A sub Rm,Rn */
	r1 = r6;  /* 0C0C233C mov Rm,Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0C2340u, 6);  /* 0C0C233E mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x8u); UPD(0x0C0C2342u, 1);  /* 0C0C2340 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0C2344u, 1);  /* 0C0C2342 mov.l @(disp,Rm),Rn */
	r0 = r1;  /* 0C0C2344 mov Rm,Rn */
	r1 = r2;  /* 0C0C2346 mov Rm,Rn */
	r14 += 0x10u;  /* 0C0C2348 add #imm,Rn */
	r15 = r14;  /* 0C0C234A mov Rm,Rn */
	IF(0x0C0C234Cu); PR = R32(r15); r15 += 4; UPD(0x0C0C234Eu, 5);  /* 0C0C234C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C2350u, 1);  /* 0C0C234E mov.l @Rm+,Rn */
	IF(0x0C0C2350u); { u32 t_ = PR; IF(0x0C0C2352u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C2350 rts */
}

/* FUN_0c0c2360 */
void blk_f_0C0C2360(sh3_t *c)
{
	LOCALS;
L_0C0C2360: BLKS(0x0C0C2360u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2362u, 1);  /* 0C0C2360 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0C2362 add #imm,Rn */
	r14 = r15;  /* 0C0C2364 mov Rm,Rn */
	r3 = 0xC207578u; UPD(0x0C0C2368u, 3);  /* 0C0C2366 mov.l @(disp,pc),Rn */
	r1 = 0xC207578u; UPD(0x0C0C236Au, 1);  /* 0C0C2368 mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C0C236Cu, 1);  /* 0C0C236A mov.l @Rm,Rn */
	r1 = 0x41C64E6Du; UPD(0x0C0C236Eu, 1);  /* 0C0C236C mov.l @(disp,pc),Rn */
	IF(0x0C0C236Eu); MACL = r2 * r1;  /* 0C0C236E mul.l Rm,Rn */
	IF(0x0C0C2370u); r2 = MACL;  /* 0C0C2370 sts macl,Rn */
	r1 = 0x3039u; UPD(0x0C0C2374u, 4);  /* 0C0C2372 mov.w @(disp,pc),Rn */
	r1 += r2;  /* 0C0C2374 add Rm,Rn */
	W32(r3, r1); UPD(0x0C0C2378u, 2);  /* 0C0C2376 mov.l Rm,@Rn */
	r1 = 0xC207578u; UPD(0x0C0C237Au, 1);  /* 0C0C2378 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0C237Cu, 1);  /* 0C0C237A mov.l @Rm,Rn */
	r1 += 0x1u;  /* 0C0C237C add #imm,Rn */
	W32(r14, r1); UPD(0x0C0C2380u, 2);  /* 0C0C237E mov.l Rm,@Rn */
	r2 = R32(r14); UPD(0x0C0C2382u, 1);  /* 0C0C2380 mov.l @Rm,Rn */
	r1 = (r2 >> 16) | (r2 << 16);  /* 0C0C2382 swap.w Rm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C0C2384 exts.w Rm,Rn */
	W32(r14, r1); UPD(0x0C0C2388u, 3);  /* 0C0C2386 mov.l Rm,@Rn */
	r1 = 0x7FFFu; UPD(0x0C0C238Au, 1);  /* 0C0C2388 mov.w @(disp,pc),Rn */
	r2 = R32(r14); UPD(0x0C0C238Cu, 1);  /* 0C0C238A mov.l @Rm,Rn */
	r2 &= r1;  /* 0C0C238C and Rm,Rn */
	W32(r14, r2); UPD(0x0C0C2390u, 2);  /* 0C0C238E mov.l Rm,@Rn */
	r0 = R32(r14); UPD(0x0C0C2392u, 1);  /* 0C0C2390 mov.l @Rm,Rn */
	r14 += 0x4u;  /* 0C0C2392 add #imm,Rn */
	r15 = r14;  /* 0C0C2394 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C2398u, 3);  /* 0C0C2396 mov.l @Rm+,Rn */
	IF(0x0C0C2398u); { u32 t_ = PR; IF(0x0C0C239Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C2398 rts */
}

/* FUN_0c0c23b0 */
void blk_f_0C0C23B0(sh3_t *c)
{
	LOCALS;
L_0C0C23B0: BLKS(0x0C0C23B0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C23B2u, 1);  /* 0C0C23B0 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0C23B2 add #imm,Rn */
	r14 = r15;  /* 0C0C23B4 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0C23B8u, 3);  /* 0C0C23B6 mov.l Rm,@Rn */
	r2 = 0xC207578u; UPD(0x0C0C23BAu, 1);  /* 0C0C23B8 mov.l @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0C23BCu, 1);  /* 0C0C23BA mov.l @Rm,Rn */
	W32(r2, r1); UPD(0x0C0C23BEu, 1);  /* 0C0C23BC mov.l Rm,@Rn */
	r14 += 0x4u;  /* 0C0C23BE add #imm,Rn */
	r15 = r14;  /* 0C0C23C0 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C23C4u, 3);  /* 0C0C23C2 mov.l @Rm+,Rn */
	IF(0x0C0C23C4u); { u32 t_ = PR; IF(0x0C0C23C6u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C23C4 rts */
}

/* memcpy */
void blk_f_0C0C23D0(sh3_t *c)
{
	LOCALS;
L_0C0C23D0: BLKS(0x0C0C23D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C23D2u, 1);  /* 0C0C23D0 mov.l Rm,@-Rn */
	IF(0x0C0C23D2u); r15 -= 4; W32(r15, PR); UPD(0x0C0C23D4u, 1);  /* 0C0C23D2 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF4u;  /* 0C0C23D4 add #imm,Rn */
	r14 = r15;  /* 0C0C23D6 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0C23DAu, 3);  /* 0C0C23D8 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0C23DCu, 1);  /* 0C0C23DA mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r6); UPD(0x0C0C23DEu, 1);  /* 0C0C23DC mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C23E0u, 1);  /* 0C0C23DE mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C0C23E2u, 1);  /* 0C0C23E0 mov.l @(disp,Rm),Rn */
	r4 = r1;  /* 0C0C23E2 mov Rm,Rn */
	r5 = R32(r14); UPD(0x0C0C23E6u, 2);  /* 0C0C23E4 mov.l @Rm,Rn */
	r6 = r2;  /* 0C0C23E6 mov Rm,Rn */
	r1 = 0xC0C25E0u; UPD(0x0C0C23EAu, 2);  /* 0C0C23E8 mov.l @(disp,pc),Rn */
	IF(0x0C0C23EAu); { u32 t_ = r1; PR = 0x0C0C23EEu; IF(0x0C0C23ECu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C25E0, 0x0C0C25E0u, 0x0C0C23EEu); }  /* 0C0C23EA jsr @Rn */
L_0C0C23EE: BLKS(0x0C0C23EEu);
	r14 += 0xCu;  /* 0C0C23EE add #imm,Rn */
	r15 = r14;  /* 0C0C23F0 mov Rm,Rn */
	IF(0x0C0C23F2u); PR = R32(r15); r15 += 4; UPD(0x0C0C23F4u, 3);  /* 0C0C23F2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C23F6u, 1);  /* 0C0C23F4 mov.l @Rm+,Rn */
	IF(0x0C0C23F6u); { u32 t_ = PR; IF(0x0C0C23F8u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C23F6 rts */
}

/* sdiv32 */
void blk_f_0C0C2494(sh3_t *c)
{
	LOCALS;
	goto L_0C0C2494;
L_0C0C248E: BLKS(0x0C0C248Eu);
	IF(0x0C0C248Eu); rt_illegal(c, 0x0C0C248Eu);  /* 0C0C248E illegal 0FF0 */
L_0C0C2494: BLKS(0x0C0C2494u);
	T = (r5 & r5) == 0;  /* 0C0C2494 tst Rm,Rn */
	if (T) { UPD(0x0C0C248Eu, 4); goto L_0C0C248E; }  /* 0C0C2496 bt */
L_0C0C2498: BLKS(0x0C0C2498u);
	r1 = r4;  /* 0C0C2498 mov Rm,Rn */
	r0 = r5;  /* 0C0C249A mov Rm,Rn */
	r2 ^= r2;  /* 0C0C249C xor Rm,Rn */
	{ u32 q_ = r1 >> 31, m_ = r2 >> 31; c->sr = (c->sr & ~(SR_Q | SR_M)) | (q_ ? SR_Q : 0) | (m_ ? SR_M : 0); T = q_ ^ m_; }  /* 0C0C249E div0s Rm,Rn */
	{ u32 a_ = r3, t_ = a_ - r3, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r3 = r_; }  /* 0C0C24A0 subc Rm,Rn */
	{ u32 a_ = r1, t_ = a_ - r2, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r1 = r_; }  /* 0C0C24A2 subc Rm,Rn */
	{ u32 q_ = r3 >> 31, m_ = r0 >> 31; c->sr = (c->sr & ~(SR_Q | SR_M)) | (q_ ? SR_Q : 0) | (m_ ? SR_M : 0); T = q_ ^ m_; }  /* 0C0C24A4 div0s Rm,Rn */
	IF(0x0C0C24A6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24A6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24A8 div1 Rm,Rn */
	IF(0x0C0C24AAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24AA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24AC div1 Rm,Rn */
	IF(0x0C0C24AEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24AE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24B0 div1 Rm,Rn */
	IF(0x0C0C24B2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24B2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24B4 div1 Rm,Rn */
	IF(0x0C0C24B6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24B6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24B8 div1 Rm,Rn */
	IF(0x0C0C24BAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24BA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24BC div1 Rm,Rn */
	IF(0x0C0C24BEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24BE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24C0 div1 Rm,Rn */
	IF(0x0C0C24C2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24C2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24C4 div1 Rm,Rn */
	IF(0x0C0C24C6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24C6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24C8 div1 Rm,Rn */
	IF(0x0C0C24CAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24CA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24CC div1 Rm,Rn */
	IF(0x0C0C24CEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24CE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24D0 div1 Rm,Rn */
	IF(0x0C0C24D2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24D2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24D4 div1 Rm,Rn */
	IF(0x0C0C24D6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24D6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24D8 div1 Rm,Rn */
	IF(0x0C0C24DAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24DA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24DC div1 Rm,Rn */
	IF(0x0C0C24DEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24DE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24E0 div1 Rm,Rn */
	IF(0x0C0C24E2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24E2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24E4 div1 Rm,Rn */
	IF(0x0C0C24E6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24E6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24E8 div1 Rm,Rn */
	IF(0x0C0C24EAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24EA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24EC div1 Rm,Rn */
	IF(0x0C0C24EEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24EE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24F0 div1 Rm,Rn */
	IF(0x0C0C24F2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24F2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24F4 div1 Rm,Rn */
	IF(0x0C0C24F6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24F6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24F8 div1 Rm,Rn */
	IF(0x0C0C24FAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24FA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24FC div1 Rm,Rn */
	IF(0x0C0C24FEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24FE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C2500 div1 Rm,Rn */
	IF(0x0C0C2502u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C2502 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C2504 div1 Rm,Rn */
	IF(0x0C0C2506u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C2506 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C2508 div1 Rm,Rn */
	IF(0x0C0C250Au); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C250A rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C250C div1 Rm,Rn */
	IF(0x0C0C250Eu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C250E rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C2510 div1 Rm,Rn */
	IF(0x0C0C2512u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; } UPD(0x0C0C2514u, 62);  /* 0C0C2512 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C2514 div1 Rm,Rn */
	IF(0x0C0C2516u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C2516 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C2518 div1 Rm,Rn */
	IF(0x0C0C251Au); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C251A rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C251C div1 Rm,Rn */
	IF(0x0C0C251Eu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C251E rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C2520 div1 Rm,Rn */
	IF(0x0C0C2522u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C2522 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C2524 div1 Rm,Rn */
	IF(0x0C0C2526u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C2526 rotcl Rn */
	{ u32 a_ = r1, t_ = a_ + r2, r_ = t_ + T; T = (a_ > t_) | (t_ > r_); r1 = r_; }  /* 0C0C2528 addc Rm,Rn */
	IF(0x0C0C252Au); { u32 t_ = PR; r0 = r1; /* slot mov Rm,Rn */ UPD(t_, 14); RET(t_); }  /* 0C0C252A rts */
}

/* copy_long16 */
void blk_f_0C0C252E(sh3_t *c)
{
	LOCALS;
L_0C0C252E: BLKS(0x0C0C252Eu);
	r0 = R32(r5 + 0x3Cu); UPD(0x0C0C2530u, 1);  /* 0C0C252E mov.l @(disp,Rm),Rn */
	W32(r4 + 0x3Cu, r0); UPD(0x0C0C2532u, 1);  /* 0C0C2530 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x38u); UPD(0x0C0C2534u, 1);  /* 0C0C2532 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x38u, r0); UPD(0x0C0C2536u, 1);  /* 0C0C2534 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x34u); UPD(0x0C0C2538u, 1);  /* 0C0C2536 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x34u, r0); UPD(0x0C0C253Au, 1);  /* 0C0C2538 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x30u); UPD(0x0C0C253Cu, 1);  /* 0C0C253A mov.l @(disp,Rm),Rn */
	W32(r4 + 0x30u, r0); UPD(0x0C0C253Eu, 1);  /* 0C0C253C mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x2Cu); UPD(0x0C0C2540u, 1);  /* 0C0C253E mov.l @(disp,Rm),Rn */
	W32(r4 + 0x2Cu, r0); UPD(0x0C0C2542u, 1);  /* 0C0C2540 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x28u); UPD(0x0C0C2544u, 1);  /* 0C0C2542 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x28u, r0); UPD(0x0C0C2546u, 1);  /* 0C0C2544 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x24u); UPD(0x0C0C2548u, 1);  /* 0C0C2546 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x24u, r0); UPD(0x0C0C254Au, 1);  /* 0C0C2548 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x20u); UPD(0x0C0C254Cu, 1);  /* 0C0C254A mov.l @(disp,Rm),Rn */
	W32(r4 + 0x20u, r0); UPD(0x0C0C254Eu, 1);  /* 0C0C254C mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x1Cu); UPD(0x0C0C2550u, 1);  /* 0C0C254E mov.l @(disp,Rm),Rn */
	W32(r4 + 0x1Cu, r0); UPD(0x0C0C2552u, 1);  /* 0C0C2550 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x18u); UPD(0x0C0C2554u, 1);  /* 0C0C2552 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x18u, r0); UPD(0x0C0C2556u, 1);  /* 0C0C2554 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x14u); UPD(0x0C0C2558u, 1);  /* 0C0C2556 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x14u, r0); UPD(0x0C0C255Au, 1);  /* 0C0C2558 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x10u); UPD(0x0C0C255Cu, 1);  /* 0C0C255A mov.l @(disp,Rm),Rn */
	W32(r4 + 0x10u, r0); UPD(0x0C0C255Eu, 1);  /* 0C0C255C mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0xCu); UPD(0x0C0C2560u, 1);  /* 0C0C255E mov.l @(disp,Rm),Rn */
	W32(r4 + 0xCu, r0); UPD(0x0C0C2562u, 1);  /* 0C0C2560 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x8u); UPD(0x0C0C2564u, 1);  /* 0C0C2562 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x8u, r0); UPD(0x0C0C2566u, 1);  /* 0C0C2564 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x4u); UPD(0x0C0C2568u, 1);  /* 0C0C2566 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x4u, r0); UPD(0x0C0C256Au, 1);  /* 0C0C2568 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x0u); UPD(0x0C0C256Cu, 1);  /* 0C0C256A mov.l @(disp,Rm),Rn */
	W32(r4 + 0x0u, r0); UPD(0x0C0C256Eu, 1);  /* 0C0C256C mov.l Rm,@(disp,Rn) */
	r6 += 0xFFFFFFF0u;  /* 0C0C256E add #imm,Rn */
	IF(0x0C0C2570u); T = (s32)r6 > 0;  /* 0C0C2570 cmp/pl Rn */
	if (T) { UPD(0x0C0C2580u, 5); goto L_0C0C2580; }  /* 0C0C2572 bt */
L_0C0C2574: BLKS(0x0C0C2574u);
	r5 += 0x40u;  /* 0C0C2574 add #imm,Rn */
	r0 = 0xC0C25D0u;  /* 0C0C2576 mova @(disp,pc),r0 */
	IF(0x0C0C2578u); r6 <<= 2;  /* 0C0C2578 shll2 Rn */
	r0 += r6;  /* 0C0C257A add Rm,Rn */
	IF(0x0C0C257Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r4 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 6); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0C257C jmp @Rn */
L_0C0C2580: BLKS(0x0C0C2580u);
	r5 += 0x40u;  /* 0C0C2580 add #imm,Rn */
	{ r4 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C0C252Eu, 4); goto L_0C0C252E; }  /* 0C0C2582 bra */
}


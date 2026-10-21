#include "recomp.h"
#include "recomp_funcs.h"

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
	r9 = 0xC06CB10u; UPD(0x0C0A0E98u, 3);  /* 0C0A0E96 mov.l @(disp,pc),Rn */
	IF(0x0C0A0E98u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A0E9Au, 1);  /* 0C0A0E98 mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A0E9Cu, 1);  /* 0C0A0E9A mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A0E9C extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A0EA0u, 2);  /* 0C0A0E9E mov.l @(disp,Rm),Rn */
	IF(0x0C0A0EA0u); { u32 t_ = r9; PR = 0x0C0A0EA4u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CB10, 0x0C06CB10u, 0x0C0A0EA4u); }  /* 0C0A0EA0 jsr @Rn */
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
	r9 = 0xC06CB10u; UPD(0x0C0A1028u, 3);  /* 0C0A1026 mov.l @(disp,pc),Rn */
	IF(0x0C0A1028u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A102Au, 1);  /* 0C0A1028 mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A102Cu, 1);  /* 0C0A102A mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A102C extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A1030u, 2);  /* 0C0A102E mov.l @(disp,Rm),Rn */
	IF(0x0C0A1030u); { u32 t_ = r9; PR = 0x0C0A1034u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CB10, 0x0C06CB10u, 0x0C0A1034u); }  /* 0C0A1030 jsr @Rn */
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
	r9 = 0xC06CB10u; UPD(0x0C0A11BAu, 3);  /* 0C0A11B8 mov.l @(disp,pc),Rn */
	IF(0x0C0A11BAu); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A11BCu, 1);  /* 0C0A11BA mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A11BEu, 1);  /* 0C0A11BC mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A11BE extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A11C2u, 2);  /* 0C0A11C0 mov.l @(disp,Rm),Rn */
	IF(0x0C0A11C2u); { u32 t_ = r9; PR = 0x0C0A11C6u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CB10, 0x0C06CB10u, 0x0C0A11C6u); }  /* 0C0A11C2 jsr @Rn */
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
	r9 = 0xC06CB10u; UPD(0x0C0A137Au, 3);  /* 0C0A1378 mov.l @(disp,pc),Rn */
	IF(0x0C0A137Au); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A137Cu, 1);  /* 0C0A137A mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A137Eu, 1);  /* 0C0A137C mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A137E extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A1382u, 2);  /* 0C0A1380 mov.l @(disp,Rm),Rn */
	IF(0x0C0A1382u); { u32 t_ = r9; PR = 0x0C0A1386u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CB10, 0x0C06CB10u, 0x0C0A1386u); }  /* 0C0A1382 jsr @Rn */
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
	r0 = 0xB4u; UPD(0x0C0A1532u, 1);  /* 0C0A1530 mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)r4;  /* 0C0A1532 exts.w Rm,Rn */
	IF(0x0C0A1534u); MACL = r2 * r0;  /* 0C0A1534 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0A1538u, 4);  /* 0C0A1536 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C0A1538 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A153Cu, 2);  /* 0C0A153A mov.l Rm,@-Rn */
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

void f_0C0A25E0(sh3_t *c)
{
	LOCALS;
L_0C0A25E0: BLKS(0x0C0A25E0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A25E2u, 1);  /* 0C0A25E0 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0A25E2 mov #imm,Rn */
	IF(0x0C0A25E4u); r15 -= 4; W32(r15, PR); UPD(0x0C0A25E6u, 2);  /* 0C0A25E4 sts.l pr,@-Rn */
	r4 = 0xC286509u; UPD(0x0C0A25E8u, 1);  /* 0C0A25E6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A25E8 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0A25ECu, 2);  /* 0C0A25EA mov.b @Rm,Rn */
	r4 = 0xC392D64u; UPD(0x0C0A25EEu, 1);  /* 0C0A25EC mov.l @(disp,pc),Rn */
	IF(0x0C0A25EEu); MACL = r6 * r2;  /* 0C0A25EE mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0A25F2u, 3);  /* 0C0A25F0 mov.l @Rm,Rn */
	r7 = 0xC286274u; UPD(0x0C0A25F4u, 1);  /* 0C0A25F2 mov.l @(disp,pc),Rn */
	IF(0x0C0A25F4u); r3 = MACL;  /* 0C0A25F4 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A25F8u, 2);  /* 0C0A25F6 mov.w @Rm+,Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0A25FAu, 1);  /* 0C0A25F8 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0A25FCu, 1);  /* 0C0A25FA mov.w Rm,@Rn */
	r0 += r3;  /* 0C0A25FC add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0A2600u, 2);  /* 0C0A25FE mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A2602u, 1);  /* 0C0A2600 mov.w @Rm+,Rn */
	IF(0x0C0A2602u); r0 <<= 2;  /* 0C0A2602 shll2 Rn */
	IF(0x0C0A2604u); r6 = R32(r0 + r7); UPD(0x0C0A2606u, 2);  /* 0C0A2604 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A2608u, 1);  /* 0C0A2606 mov.w @Rm+,Rn */
	r0 = 0xC28629Eu; UPD(0x0C0A260Au, 1);  /* 0C0A2608 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0A260Cu, 1);  /* 0C0A260A mov.w Rm,@Rn */
	r2 = 0xC27DC20u; UPD(0x0C0A260Eu, 1);  /* 0C0A260C mov.l @(disp,pc),Rn */
	r0 = 0xC071350u; UPD(0x0C0A2610u, 1);  /* 0C0A260E mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0A2612u, 1);  /* 0C0A2610 mov.l Rm,@Rn */
	IF(0x0C0A2612u); { u32 t_ = r0; PR = 0x0C0A2616u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C071350, 0x0C071350u, 0x0C0A2616u); }  /* 0C0A2612 jsr @Rn */
L_0C0A2616: BLKS(0x0C0A2616u);
	r15 = r14;  /* 0C0A2616 mov Rm,Rn */
	IF(0x0C0A2618u); PR = R32(r15); r15 += 4; UPD(0x0C0A261Au, 2);  /* 0C0A2618 lds.l @Rn+,pr */
	IF(0x0C0A261Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A261A rts */
}

void f_0C0A2640(sh3_t *c)
{
	LOCALS;
L_0C0A2640: BLKS(0x0C0A2640u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A2642u, 1);  /* 0C0A2640 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0A2642 mov #imm,Rn */
	IF(0x0C0A2644u); r15 -= 4; W32(r15, PR); UPD(0x0C0A2646u, 2);  /* 0C0A2644 sts.l pr,@-Rn */
	r4 = 0xC286509u; UPD(0x0C0A2648u, 1);  /* 0C0A2646 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A2648 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0A264Cu, 2);  /* 0C0A264A mov.b @Rm,Rn */
	r4 = 0xC392D64u; UPD(0x0C0A264Eu, 1);  /* 0C0A264C mov.l @(disp,pc),Rn */
	IF(0x0C0A264Eu); MACL = r6 * r2;  /* 0C0A264E mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0A2652u, 3);  /* 0C0A2650 mov.l @Rm,Rn */
	r7 = 0xC286274u; UPD(0x0C0A2654u, 1);  /* 0C0A2652 mov.l @(disp,pc),Rn */
	IF(0x0C0A2654u); r3 = MACL;  /* 0C0A2654 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A2658u, 2);  /* 0C0A2656 mov.w @Rm+,Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0A265Au, 1);  /* 0C0A2658 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0A265Cu, 1);  /* 0C0A265A mov.w Rm,@Rn */
	r0 += r3;  /* 0C0A265C add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0A2660u, 2);  /* 0C0A265E mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A2662u, 1);  /* 0C0A2660 mov.w @Rm+,Rn */
	IF(0x0C0A2662u); r0 <<= 2;  /* 0C0A2662 shll2 Rn */
	IF(0x0C0A2664u); r6 = R32(r0 + r7); UPD(0x0C0A2666u, 2);  /* 0C0A2664 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A2668u, 1);  /* 0C0A2666 mov.w @Rm+,Rn */
	r0 = 0xC28629Eu; UPD(0x0C0A266Au, 1);  /* 0C0A2668 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0A266Cu, 1);  /* 0C0A266A mov.w Rm,@Rn */
	r2 = 0xC27DC20u; UPD(0x0C0A266Eu, 1);  /* 0C0A266C mov.l @(disp,pc),Rn */
	r0 = 0xC071730u; UPD(0x0C0A2670u, 1);  /* 0C0A266E mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0A2672u, 1);  /* 0C0A2670 mov.l Rm,@Rn */
	IF(0x0C0A2672u); { u32 t_ = r0; PR = 0x0C0A2676u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C071730, 0x0C071730u, 0x0C0A2676u); }  /* 0C0A2672 jsr @Rn */
L_0C0A2676: BLKS(0x0C0A2676u);
	r15 = r14;  /* 0C0A2676 mov Rm,Rn */
	IF(0x0C0A2678u); PR = R32(r15); r15 += 4; UPD(0x0C0A267Au, 2);  /* 0C0A2678 lds.l @Rn+,pr */
	IF(0x0C0A267Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A267A rts */
}

void f_0C0A2E20(sh3_t *c)
{
	LOCALS;
L_0C0A2E20: BLKS(0x0C0A2E20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A2E22u, 1);  /* 0C0A2E20 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C0A2E24u, 1);  /* 0C0A2E22 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A2E24 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A2E28u, 2);  /* 0C0A2E26 mov.l Rm,@-Rn */
	IF(0x0C0A2E28u); MACL = r8 * r0;  /* 0C0A2E28 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A2E2Cu, 3);  /* 0C0A2E2A mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A2E2Eu, 1);  /* 0C0A2E2C mov.l @(disp,pc),Rn */
	IF(0x0C0A2E2Eu); r9 = MACL;  /* 0C0A2E2E sts macl,Rn */
	IF(0x0C0A2E30u); r15 -= 4; W32(r15, PR); UPD(0x0C0A2E32u, 2);  /* 0C0A2E30 sts.l pr,@-Rn */
	r9 += r0;  /* 0C0A2E32 add Rm,Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C0A2E36u, 2);  /* 0C0A2E34 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0A2E36 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A2E40u, 4); goto L_0C0A2E40; } goto L_0C0A2E3C; }  /* 0C0A2E38 bf/s */
L_0C0A2E3C: BLKS(0x0C0A2E3Cu);
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C0A2FB0u, 4); goto L_0C0A2FB0; }  /* 0C0A2E3C bra */
L_0C0A2E40: BLKS(0x0C0A2E40u);
	T = r0 == 0x1u;  /* 0C0A2E40 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0A2E4Au, 4); goto L_0C0A2E4A; }  /* 0C0A2E42 bf */
L_0C0A2E44: BLKS(0x0C0A2E44u);
	r15 += 0xFFFFFFF8u;  /* 0C0A2E44 add #imm,Rn */
	{ IF(0x0C0A2E48u); ; /* slot nop */ UPD(0x0C0A2F70u, 4); goto L_0C0A2F70; }  /* 0C0A2E46 bra */
L_0C0A2E4A: BLKS(0x0C0A2E4Au);
	r9 = 0xC0A03F0u; UPD(0x0C0A2E4Cu, 1);  /* 0C0A2E4A mov.l @(disp,pc),Rn */
	IF(0x0C0A2E4Cu); { u32 t_ = r9; PR = 0x0C0A2E50u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0A2E50u); }  /* 0C0A2E4C jsr @Rn */
L_0C0A2E50: BLKS(0x0C0A2E50u);
	IF(0x0C0A2E50u); T = (s32)r0 >= 0;  /* 0C0A2E50 cmp/pz Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A2E5Au, 4); goto L_0C0A2E5A; } goto L_0C0A2E56; }  /* 0C0A2E52 bt/s */
L_0C0A2E56: BLKS(0x0C0A2E56u);
	{ r2 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A2F60u, 4); goto L_0C0A2F60; }  /* 0C0A2E56 bra */
L_0C0A2E5A: BLKS(0x0C0A2E5Au);
	r0 = 0xC050D70u; UPD(0x0C0A2E5Cu, 1);  /* 0C0A2E5A mov.l @(disp,pc),Rn */
	IF(0x0C0A2E5Cu); { u32 t_ = r0; PR = 0x0C0A2E60u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A2E60u); }  /* 0C0A2E5C jsr @Rn */
L_0C0A2E60: BLKS(0x0C0A2E60u);
	T = r0 == 0x2u;  /* 0C0A2E60 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0A2F30u, 4); goto L_0C0A2F30; }  /* 0C0A2E62 bt */
L_0C0A2E64: BLKS(0x0C0A2E64u);
	r5 = 0x2u;  /* 0C0A2E64 mov #imm,Rn */
	T = (s32)r0 > (s32)r5;  /* 0C0A2E66 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0A2F00u, 5); goto L_0C0A2F00; } goto L_0C0A2E6C; }  /* 0C0A2E68 bt/s */
L_0C0A2E6C: BLKS(0x0C0A2E6Cu);
	T = r0 == 0x1u;  /* 0C0A2E6C cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0A2ED0u, 5); goto L_0C0A2ED0; }  /* 0C0A2E6E bt */
L_0C0A2E70: BLKS(0x0C0A2E70u);
	r5 = 0xB4u; UPD(0x0C0A2E72u, 1);  /* 0C0A2E70 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A2E72 add #imm,Rn */
	IF(0x0C0A2E74u); MACL = r8 * r5;  /* 0C0A2E74 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A2E78u, 4);  /* 0C0A2E76 mov.l @(disp,pc),Rn */
	IF(0x0C0A2E78u); r3 = MACL;  /* 0C0A2E78 sts macl,Rn */
	r3 += r0;  /* 0C0A2E7A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A2E7Eu, 3);  /* 0C0A2E7C mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0A2E7E mov #imm,Rn */
	IF(0x0C0A2E80u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A2E82u, 2);  /* 0C0A2E80 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0A2E82 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A2E86u, 2);  /* 0C0A2E84 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A2E86 add #imm,Rn */
	IF(0x0C0A2E88u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A2E8Au, 2);  /* 0C0A2E88 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A2E8A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0A2E8Eu, 2);  /* 0C0A2E8C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C0A2E90u, 1);  /* 0C0A2E8E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A2E92u, 1);  /* 0C0A2E90 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A2E94u, 1);  /* 0C0A2E92 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0A2E96u, 1);  /* 0C0A2E94 mov.l @(disp,Rm),Rn */
L_0C0A2E96: BLKS(0x0C0A2E96u);
	IF(0x0C0A2E96u); { u32 t_ = r0; PR = 0x0C0A2E9Au; IF(0x0C0A2E98u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A2E9Au); }  /* 0C0A2E96 jsr @Rn */
L_0C0A2E9A: BLKS(0x0C0A2E9Au);
	r6 = 0xB4u; UPD(0x0C0A2E9Cu, 1);  /* 0C0A2E9A mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0A2E9C add #imm,Rn */
	IF(0x0C0A2E9Eu); MACL = r9 * r6;  /* 0C0A2E9E mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C0A2EA2u, 4);  /* 0C0A2EA0 mov.l @(disp,pc),Rn */
	IF(0x0C0A2EA2u); r9 = MACL;  /* 0C0A2EA2 sts macl,Rn */
	r9 += r4;  /* 0C0A2EA4 add Rm,Rn */
	r3 = R32(r9); UPD(0x0C0A2EA8u, 3);  /* 0C0A2EA6 mov.l @Rm,Rn */
	IF(0x0C0A2EA8u); MACL = r8 * r6;  /* 0C0A2EA8 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C0A2EACu, 3);  /* 0C0A2EAA mov.l @(disp,pc),Rn */
	r3 |= r1;  /* 0C0A2EAC or Rm,Rn */
	W32(r9, r3); UPD(0x0C0A2EB0u, 2);  /* 0C0A2EAE mov.l Rm,@Rn */
	IF(0x0C0A2EB0u); r0 = MACL;  /* 0C0A2EB0 sts macl,Rn */
	r8 = 0x0u;  /* 0C0A2EB2 mov #imm,Rn */
	IF(0x0C0A2EB4u); W32(r0 + r4, r8); UPD(0x0C0A2EB6u, 3);  /* 0C0A2EB4 mov.l Rm,@(r0,Rn) */
L_0C0A2EB6: BLKS(0x0C0A2EB6u);
	r15 = r14;  /* 0C0A2EB6 mov Rm,Rn */
	IF(0x0C0A2EB8u); PR = R32(r15); r15 += 4; UPD(0x0C0A2EBAu, 2);  /* 0C0A2EB8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A2EBCu, 1);  /* 0C0A2EBA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A2EBEu, 1);  /* 0C0A2EBC mov.l @Rm+,Rn */
	IF(0x0C0A2EBEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A2EBE rts */
L_0C0A2ED0: BLKS(0x0C0A2ED0u);
	r5 = 0xB4u; UPD(0x0C0A2ED2u, 1);  /* 0C0A2ED0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A2ED2 add #imm,Rn */
	IF(0x0C0A2ED4u); MACL = r8 * r5;  /* 0C0A2ED4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A2ED8u, 4);  /* 0C0A2ED6 mov.l @(disp,pc),Rn */
	IF(0x0C0A2ED8u); r3 = MACL;  /* 0C0A2ED8 sts macl,Rn */
	r3 += r0;  /* 0C0A2EDA add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A2EDEu, 3);  /* 0C0A2EDC mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0A2EDE mov #imm,Rn */
	IF(0x0C0A2EE0u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A2EE2u, 2);  /* 0C0A2EE0 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0A2EE2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A2EE6u, 2);  /* 0C0A2EE4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A2EE6 add #imm,Rn */
	IF(0x0C0A2EE8u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A2EEAu, 2);  /* 0C0A2EE8 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A2EEA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0A2EEEu, 2);  /* 0C0A2EEC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C0A2EF0u, 1);  /* 0C0A2EEE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A2EF2u, 1);  /* 0C0A2EF0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A2EF4u, 1);  /* 0C0A2EF2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A2E96u, 3); goto L_0C0A2E96; }  /* 0C0A2EF4 bra */
L_0C0A2F00: BLKS(0x0C0A2F00u);
	if (!T) { UPD(0x0C0A2E70u, 3); goto L_0C0A2E70; }  /* 0C0A2F00 bf */
L_0C0A2F02: BLKS(0x0C0A2F02u);
	r15 += 0xFFFFFFF8u;  /* 0C0A2F02 add #imm,Rn */
	r5 = 0xB4u; UPD(0x0C0A2F06u, 2);  /* 0C0A2F04 mov.w @(disp,pc),Rn */
	IF(0x0C0A2F06u); MACL = r8 * r5;  /* 0C0A2F06 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A2F0Au, 3);  /* 0C0A2F08 mov.l @(disp,pc),Rn */
	IF(0x0C0A2F0Au); r3 = MACL;  /* 0C0A2F0A sts macl,Rn */
	r3 += r0;  /* 0C0A2F0C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A2F10u, 3);  /* 0C0A2F0E mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0A2F10 mov #imm,Rn */
	IF(0x0C0A2F12u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A2F14u, 2);  /* 0C0A2F12 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0A2F14 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A2F18u, 2);  /* 0C0A2F16 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A2F18 add #imm,Rn */
	IF(0x0C0A2F1Au); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A2F1Cu, 2);  /* 0C0A2F1A mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A2F1C extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0A2F20u, 2);  /* 0C0A2F1E mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0A2F22u, 1);  /* 0C0A2F20 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A2F24u, 1);  /* 0C0A2F22 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A2F26u, 1);  /* 0C0A2F24 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A2E96u, 3); goto L_0C0A2E96; }  /* 0C0A2F26 bra */
L_0C0A2F30: BLKS(0x0C0A2F30u);
	r5 = 0xB4u; UPD(0x0C0A2F32u, 1);  /* 0C0A2F30 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A2F32 add #imm,Rn */
	IF(0x0C0A2F34u); MACL = r8 * r5;  /* 0C0A2F34 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A2F38u, 4);  /* 0C0A2F36 mov.l @(disp,pc),Rn */
	IF(0x0C0A2F38u); r3 = MACL;  /* 0C0A2F38 sts macl,Rn */
	r3 += r0;  /* 0C0A2F3A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A2F3Eu, 3);  /* 0C0A2F3C mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0A2F3E mov #imm,Rn */
	IF(0x0C0A2F40u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A2F42u, 2);  /* 0C0A2F40 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0A2F42 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A2F46u, 2);  /* 0C0A2F44 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A2F46 add #imm,Rn */
	IF(0x0C0A2F48u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A2F4Au, 2);  /* 0C0A2F48 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A2F4A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0A2F4Eu, 2);  /* 0C0A2F4C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C0A2F50u, 1);  /* 0C0A2F4E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A2F52u, 1);  /* 0C0A2F50 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A2F54u, 1);  /* 0C0A2F52 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A2E96u, 3); goto L_0C0A2E96; }  /* 0C0A2F54 bra */
L_0C0A2F60: BLKS(0x0C0A2F60u);
	r4 = 0xB4u; UPD(0x0C0A2F62u, 1);  /* 0C0A2F60 mov.w @(disp,pc),Rn */
	IF(0x0C0A2F62u); MACL = r8 * r4;  /* 0C0A2F62 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0A2F66u, 3);  /* 0C0A2F64 mov.l @(disp,pc),Rn */
	IF(0x0C0A2F66u); r0 = MACL;  /* 0C0A2F66 sts macl,Rn */
	{ IF(0x0C0A2F6Au); W32(r0 + r3, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0A2EB6u, 4); goto L_0C0A2EB6; }  /* 0C0A2F68 bra */
L_0C0A2F70: BLKS(0x0C0A2F70u);
	r8 = 0xB0u; UPD(0x0C0A2F72u, 1);  /* 0C0A2F70 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C0A2F72 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C0A2F76u, 2);  /* 0C0A2F74 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0A2F76 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0A2F7Au, 2);  /* 0C0A2F78 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0A2F7A mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C0A2F7Eu, 2);  /* 0C0A2F7C mov.w @(disp,pc),Rn */
	IF(0x0C0A2F7Eu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0A2F80u, 1);  /* 0C0A2F7E mov.b @(r0,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C0A2F82u, 1);  /* 0C0A2F80 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C0A2F82 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0A2F86u, 2);  /* 0C0A2F84 mov.l Rm,@(disp,Rn) */
	r5 = 0xBu;  /* 0C0A2F86 mov #imm,Rn */
	r4 = R32(r9); UPD(0x0C0A2F8Au, 2);  /* 0C0A2F88 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0A2F8Cu, 1);  /* 0C0A2F8A mov.l @(disp,Rm),Rn */
	IF(0x0C0A2F8Cu); { u32 t_ = r0; PR = 0x0C0A2F90u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0A2F90u); }  /* 0C0A2F8C jsr @Rn */
L_0C0A2F90: BLKS(0x0C0A2F90u);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0A2F92u, 1);  /* 0C0A2F90 mov.b @Rm,Rn */
	r15 += 0x8u;  /* 0C0A2F92 add #imm,Rn */
	r8 = 0xC06CE70u; UPD(0x0C0A2F96u, 2);  /* 0C0A2F94 mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C0A2F96 extu.b Rm,Rn */
	r4 = 0x2u;  /* 0C0A2F98 mov #imm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C0A2F9Cu, 3);  /* 0C0A2F9A mov.l @(disp,Rm),Rn */
	IF(0x0C0A2F9Cu); { u32 t_ = r8; PR = 0x0C0A2FA0u; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C0A2FA0u); }  /* 0C0A2F9C jsr @Rn */
L_0C0A2FA0: BLKS(0x0C0A2FA0u);
	r3 = 0x0u;  /* 0C0A2FA0 mov #imm,Rn */
	{ W32(r9, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C0A2EB6u, 4); goto L_0C0A2EB6; }  /* 0C0A2FA2 bra */
L_0C0A2FB0: BLKS(0x0C0A2FB0u);
	r2 = 0xC0A0870u; UPD(0x0C0A2FB2u, 1);  /* 0C0A2FB0 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0A2FB2 mov Rm,Rn */
	IF(0x0C0A2FB4u); PR = R32(r15); r15 += 4; UPD(0x0C0A2FB6u, 2);  /* 0C0A2FB4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A2FB8u, 1);  /* 0C0A2FB6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A2FBAu, 1);  /* 0C0A2FB8 mov.l @Rm+,Rn */
	IF(0x0C0A2FBAu); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A0870u: TAIL(f_0C0A0870); default: JUMPD(tv_); } }  /* 0C0A2FBA jmp @Rn */
}

void f_0C0A2FF0(sh3_t *c)
{
	LOCALS;
L_0C0A2FF0: BLKS(0x0C0A2FF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A2FF2u, 1);  /* 0C0A2FF0 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C0A2FF4u, 1);  /* 0C0A2FF2 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A2FF4 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A2FF8u, 2);  /* 0C0A2FF6 mov.l Rm,@-Rn */
	IF(0x0C0A2FF8u); MACL = r8 * r0;  /* 0C0A2FF8 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A2FFCu, 3);  /* 0C0A2FFA mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A2FFEu, 1);  /* 0C0A2FFC mov.l @(disp,pc),Rn */
	IF(0x0C0A2FFEu); r9 = MACL;  /* 0C0A2FFE sts macl,Rn */
	IF(0x0C0A3000u); r15 -= 4; W32(r15, PR); UPD(0x0C0A3002u, 2);  /* 0C0A3000 sts.l pr,@-Rn */
	r9 += r0;  /* 0C0A3002 add Rm,Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C0A3006u, 2);  /* 0C0A3004 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0A3006 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A3010u, 4); goto L_0C0A3010; } goto L_0C0A300C; }  /* 0C0A3008 bf/s */
L_0C0A300C: BLKS(0x0C0A300Cu);
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C0A3170u, 4); goto L_0C0A3170; }  /* 0C0A300C bra */
L_0C0A3010: BLKS(0x0C0A3010u);
	T = r0 == 0x1u;  /* 0C0A3010 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0A301Au, 4); goto L_0C0A301A; }  /* 0C0A3012 bf */
L_0C0A3014: BLKS(0x0C0A3014u);
	r15 += 0xFFFFFFF8u;  /* 0C0A3014 add #imm,Rn */
	{ IF(0x0C0A3018u); ; /* slot nop */ UPD(0x0C0A3130u, 4); goto L_0C0A3130; }  /* 0C0A3016 bra */
L_0C0A301A: BLKS(0x0C0A301Au);
	r9 = 0xC050D70u; UPD(0x0C0A301Cu, 1);  /* 0C0A301A mov.l @(disp,pc),Rn */
	IF(0x0C0A301Cu); { u32 t_ = r9; PR = 0x0C0A3020u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A3020u); }  /* 0C0A301C jsr @Rn */
L_0C0A3020: BLKS(0x0C0A3020u);
	T = r0 == 0x2u;  /* 0C0A3020 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A3100u, 4); goto L_0C0A3100; } goto L_0C0A3026; }  /* 0C0A3022 bt/s */
L_0C0A3026: BLKS(0x0C0A3026u);
	T = (s32)r0 > (s32)r2;  /* 0C0A3026 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0A30D0u, 5); goto L_0C0A30D0; } goto L_0C0A302C; }  /* 0C0A3028 bt/s */
L_0C0A302C: BLKS(0x0C0A302Cu);
	T = r0 == 0x1u;  /* 0C0A302C cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0A30A0u, 5); goto L_0C0A30A0; }  /* 0C0A302E bt */
L_0C0A3030: BLKS(0x0C0A3030u);
	r9 = 0xB4u; UPD(0x0C0A3032u, 1);  /* 0C0A3030 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A3032 add #imm,Rn */
	IF(0x0C0A3034u); MACL = r8 * r9;  /* 0C0A3034 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A3038u, 4);  /* 0C0A3036 mov.l @(disp,pc),Rn */
	IF(0x0C0A3038u); r3 = MACL;  /* 0C0A3038 sts macl,Rn */
	r3 += r0;  /* 0C0A303A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A303Eu, 3);  /* 0C0A303C mov.w @(disp,pc),Rn */
	IF(0x0C0A303Eu); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A3040u, 1);  /* 0C0A303E mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A3040 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0A3044u, 2);  /* 0C0A3042 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A3044 add #imm,Rn */
	IF(0x0C0A3046u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A3048u, 2);  /* 0C0A3046 mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A3048 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0A304Cu, 2);  /* 0C0A304A mov.l Rm,@(disp,Rn) */
	r5 = 0xCu;  /* 0C0A304C mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C0A3050u, 2);  /* 0C0A304E mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A3052u, 1);  /* 0C0A3050 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0A3054u, 1);  /* 0C0A3052 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C0A3056u, 1);  /* 0C0A3054 mov.l @(disp,pc),Rn */
L_0C0A3056: BLKS(0x0C0A3056u);
	r9 = 0xC0A03F0u; UPD(0x0C0A3058u, 1);  /* 0C0A3056 mov.l @(disp,pc),Rn */
	IF(0x0C0A3058u); { u32 t_ = r0; PR = 0x0C0A305Cu; IF(0x0C0A305Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A305Cu); }  /* 0C0A3058 jsr @Rn */
L_0C0A305C: BLKS(0x0C0A305Cu);
	r15 += 0x8u;  /* 0C0A305C add #imm,Rn */
	IF(0x0C0A305Eu); { u32 t_ = r9; PR = 0x0C0A3062u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0A3062u); }  /* 0C0A305E jsr @Rn */
L_0C0A3062: BLKS(0x0C0A3062u);
	IF(0x0C0A3062u); T = (s32)r0 >= 0;  /* 0C0A3062 cmp/pz Rn */
	if (!T) { UPD(0x0C0A3090u, 4); goto L_0C0A3090; }  /* 0C0A3064 bf */
L_0C0A3066: BLKS(0x0C0A3066u);
	r3 = 0x0u;  /* 0C0A3066 mov #imm,Rn */
	r5 = 0xB4u; UPD(0x0C0A306Au, 2);  /* 0C0A3068 mov.w @(disp,pc),Rn */
	IF(0x0C0A306Au); MACL = r0 * r5;  /* 0C0A306A mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C0A306Eu, 3);  /* 0C0A306C mov.l @(disp,pc),Rn */
	IF(0x0C0A306Eu); r6 = MACL;  /* 0C0A306E sts macl,Rn */
	r6 += r4;  /* 0C0A3070 add Rm,Rn */
	r9 = R32(r6); UPD(0x0C0A3074u, 3);  /* 0C0A3072 mov.l @Rm,Rn */
	IF(0x0C0A3074u); MACL = r8 * r5;  /* 0C0A3074 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C0A3078u, 3);  /* 0C0A3076 mov.l @(disp,pc),Rn */
	r9 |= r1;  /* 0C0A3078 or Rm,Rn */
	W32(r6, r9); UPD(0x0C0A307Cu, 2);  /* 0C0A307A mov.l Rm,@Rn */
	IF(0x0C0A307Cu); r0 = MACL;  /* 0C0A307C sts macl,Rn */
	IF(0x0C0A307Eu); W32(r0 + r4, r3); UPD(0x0C0A3080u, 2);  /* 0C0A307E mov.l Rm,@(r0,Rn) */
L_0C0A3080: BLKS(0x0C0A3080u);
	r15 = r14;  /* 0C0A3080 mov Rm,Rn */
	IF(0x0C0A3082u); PR = R32(r15); r15 += 4; UPD(0x0C0A3084u, 2);  /* 0C0A3082 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A3086u, 1);  /* 0C0A3084 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A3088u, 1);  /* 0C0A3086 mov.l @Rm+,Rn */
	IF(0x0C0A3088u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A3088 rts */
L_0C0A3090: BLKS(0x0C0A3090u);
	r0 = 0xB4u; UPD(0x0C0A3092u, 1);  /* 0C0A3090 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C0A3092 mov #imm,Rn */
	IF(0x0C0A3094u); MACL = r8 * r0;  /* 0C0A3094 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C0A3098u, 4);  /* 0C0A3096 mov.l @(disp,pc),Rn */
	IF(0x0C0A3098u); r0 = MACL;  /* 0C0A3098 sts macl,Rn */
	{ IF(0x0C0A309Cu); W32(r0 + r8, r7); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0A3080u, 4); goto L_0C0A3080; }  /* 0C0A309A bra */
L_0C0A30A0: BLKS(0x0C0A30A0u);
	r0 = 0xB4u; UPD(0x0C0A30A2u, 1);  /* 0C0A30A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A30A2 add #imm,Rn */
	IF(0x0C0A30A4u); MACL = r8 * r0;  /* 0C0A30A4 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0A30A8u, 4);  /* 0C0A30A6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A30AAu, 1);  /* 0C0A30A8 mov.w @(disp,pc),Rn */
	IF(0x0C0A30AAu); r3 = MACL;  /* 0C0A30AA sts macl,Rn */
	r3 += r7;  /* 0C0A30AC add Rm,Rn */
	IF(0x0C0A30AEu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A30B0u, 3);  /* 0C0A30AE mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A30B0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0A30B4u, 2);  /* 0C0A30B2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A30B4 add #imm,Rn */
	IF(0x0C0A30B6u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A30B8u, 2);  /* 0C0A30B6 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C0A30B8 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A30BA extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0A30BEu, 3);  /* 0C0A30BC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C0A30C0u, 1);  /* 0C0A30BE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A30C2u, 1);  /* 0C0A30C0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A30C4u, 1);  /* 0C0A30C2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A3056u, 3); goto L_0C0A3056; }  /* 0C0A30C4 bra */
L_0C0A30D0: BLKS(0x0C0A30D0u);
	if (!T) { UPD(0x0C0A3030u, 3); goto L_0C0A3030; }  /* 0C0A30D0 bf */
L_0C0A30D2: BLKS(0x0C0A30D2u);
	r15 += 0xFFFFFFF8u;  /* 0C0A30D2 add #imm,Rn */
	r6 = 0xB4u; UPD(0x0C0A30D6u, 2);  /* 0C0A30D4 mov.w @(disp,pc),Rn */
	IF(0x0C0A30D6u); MACL = r8 * r6;  /* 0C0A30D6 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0A30DAu, 3);  /* 0C0A30D8 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A30DCu, 1);  /* 0C0A30DA mov.w @(disp,pc),Rn */
	IF(0x0C0A30DCu); r9 = MACL;  /* 0C0A30DC sts macl,Rn */
	r9 += r5;  /* 0C0A30DE add Rm,Rn */
	IF(0x0C0A30E0u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A30E2u, 3);  /* 0C0A30E0 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C0A30E2 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A30E4 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A30E8u, 3);  /* 0C0A30E6 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A30E8 add #imm,Rn */
	IF(0x0C0A30EAu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A30ECu, 2);  /* 0C0A30EA mov.b @(r0,Rm),Rn */
	r0 = r3 & 0xFF;  /* 0C0A30EC extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A30F0u, 2);  /* 0C0A30EE mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0A30F2u, 1);  /* 0C0A30F0 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0A30F4u, 1);  /* 0C0A30F2 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0A30F6u, 1);  /* 0C0A30F4 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A3056u, 3); goto L_0C0A3056; }  /* 0C0A30F6 bra */
L_0C0A3100: BLKS(0x0C0A3100u);
	r7 = 0xB4u; UPD(0x0C0A3102u, 1);  /* 0C0A3100 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A3102 add #imm,Rn */
	IF(0x0C0A3104u); MACL = r8 * r7;  /* 0C0A3104 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0A3108u, 4);  /* 0C0A3106 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A310Au, 1);  /* 0C0A3108 mov.w @(disp,pc),Rn */
	IF(0x0C0A310Au); r9 = MACL;  /* 0C0A310A sts macl,Rn */
	r9 += r6;  /* 0C0A310C add Rm,Rn */
	IF(0x0C0A310Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A3110u, 3);  /* 0C0A310E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A3110 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A3114u, 2);  /* 0C0A3112 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A3114 add #imm,Rn */
	IF(0x0C0A3116u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A3118u, 2);  /* 0C0A3116 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C0A3118 mov #imm,Rn */
	r3 = r2 & 0xFF;  /* 0C0A311A extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0A311Eu, 3);  /* 0C0A311C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C0A3120u, 1);  /* 0C0A311E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0A3122u, 1);  /* 0C0A3120 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0A3124u, 1);  /* 0C0A3122 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A3056u, 3); goto L_0C0A3056; }  /* 0C0A3124 bra */
L_0C0A3130: BLKS(0x0C0A3130u);
	r8 = 0xB0u; UPD(0x0C0A3132u, 1);  /* 0C0A3130 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C0A3132 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C0A3136u, 2);  /* 0C0A3134 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0A3136 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0A313Au, 2);  /* 0C0A3138 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0A313A mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C0A313Eu, 2);  /* 0C0A313C mov.w @(disp,pc),Rn */
	IF(0x0C0A313Eu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0A3140u, 1);  /* 0C0A313E mov.b @(r0,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C0A3142u, 1);  /* 0C0A3140 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C0A3142 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0A3146u, 2);  /* 0C0A3144 mov.l Rm,@(disp,Rn) */
	r5 = 0xCu;  /* 0C0A3146 mov #imm,Rn */
	r4 = R32(r9); UPD(0x0C0A314Au, 2);  /* 0C0A3148 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0A314Cu, 1);  /* 0C0A314A mov.l @(disp,Rm),Rn */
	IF(0x0C0A314Cu); { u32 t_ = r0; PR = 0x0C0A3150u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0A3150u); }  /* 0C0A314C jsr @Rn */
L_0C0A3150: BLKS(0x0C0A3150u);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0A3152u, 1);  /* 0C0A3150 mov.b @Rm,Rn */
	r15 += 0x8u;  /* 0C0A3152 add #imm,Rn */
	r8 = 0xC06CE70u; UPD(0x0C0A3156u, 2);  /* 0C0A3154 mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C0A3156 extu.b Rm,Rn */
	r4 = 0x2u;  /* 0C0A3158 mov #imm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C0A315Cu, 3);  /* 0C0A315A mov.l @(disp,Rm),Rn */
	IF(0x0C0A315Cu); { u32 t_ = r8; PR = 0x0C0A3160u; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C0A3160u); }  /* 0C0A315C jsr @Rn */
L_0C0A3160: BLKS(0x0C0A3160u);
	r3 = 0x0u;  /* 0C0A3160 mov #imm,Rn */
	{ W32(r9, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C0A3080u, 4); goto L_0C0A3080; }  /* 0C0A3162 bra */
L_0C0A3170: BLKS(0x0C0A3170u);
	r2 = 0xC0A0940u; UPD(0x0C0A3172u, 1);  /* 0C0A3170 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0A3172 mov Rm,Rn */
	IF(0x0C0A3174u); PR = R32(r15); r15 += 4; UPD(0x0C0A3176u, 2);  /* 0C0A3174 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A3178u, 1);  /* 0C0A3176 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A317Au, 1);  /* 0C0A3178 mov.l @Rm+,Rn */
	IF(0x0C0A317Au); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A0940u: TAIL(f_0C0A0940); default: JUMPD(tv_); } }  /* 0C0A317A jmp @Rn */
}

void f_0C0A31B0(sh3_t *c)
{
	LOCALS;
L_0C0A31B0: BLKS(0x0C0A31B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A31B2u, 1);  /* 0C0A31B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A31B4u, 1);  /* 0C0A31B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A31B6u, 1);  /* 0C0A31B4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A31B8u, 1);  /* 0C0A31B6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A31BAu, 1);  /* 0C0A31B8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A31BCu, 1);  /* 0C0A31BA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A31BEu, 1);  /* 0C0A31BC mov.l Rm,@-Rn */
	r4 = 0xC392D64u; UPD(0x0C0A31C0u, 1);  /* 0C0A31BE mov.l @(disp,pc),Rn */
	IF(0x0C0A31C0u); r15 -= 4; W32(r15, PR); UPD(0x0C0A31C2u, 1);  /* 0C0A31C0 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C0A31C4u, 1);  /* 0C0A31C2 mov.l @Rm,Rn */
	r14 = r15;  /* 0C0A31C4 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C0A31C8u, 2);  /* 0C0A31C6 mov.w @Rm+,Rn */
	r12 = 0xC286274u; UPD(0x0C0A31CAu, 1);  /* 0C0A31C8 mov.l @(disp,pc),Rn */
	W16(r12, r0); UPD(0x0C0A31CCu, 1);  /* 0C0A31CA mov.w Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C0A31CEu, 1);  /* 0C0A31CC mov.w @Rm+,Rn */
	r8 = 0xC0606C0u; UPD(0x0C0A31D0u, 1);  /* 0C0A31CE mov.l @(disp,pc),Rn */
	r0 &= 0x3u;  /* 0C0A31D0 and #imm,r0 */
	W32(r4, r3); UPD(0x0C0A31D4u, 2);  /* 0C0A31D2 mov.l Rm,@Rn */
	r13 = 0xC286280u; UPD(0x0C0A31D6u, 1);  /* 0C0A31D4 mov.l @(disp,pc),Rn */
	r4 = 0xCu;  /* 0C0A31D6 mov #imm,Rn */
	IF(0x0C0A31D8u); { u32 t_ = r8; PR = 0x0C0A31DCu; W16(r13, r0); /* slot mov.w Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0A31DCu); }  /* 0C0A31D8 jsr @Rn */
L_0C0A31DC: BLKS(0x0C0A31DCu);
	T = (r0 & r0) == 0;  /* 0C0A31DC tst Rm,Rn */
	if (!T) { UPD(0x0C0A3200u, 4); goto L_0C0A3200; }  /* 0C0A31DE bf */
L_0C0A31E0: BLKS(0x0C0A31E0u);
	r0 = 0x1u;  /* 0C0A31E0 mov #imm,Rn */
	UPD(0x0C0A31E2u, 1);
L_0C0A31E2: BLKS(0x0C0A31E2u);
	r15 = r14;  /* 0C0A31E2 mov Rm,Rn */
	IF(0x0C0A31E4u); PR = R32(r15); r15 += 4; UPD(0x0C0A31E6u, 2);  /* 0C0A31E4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A31E8u, 1);  /* 0C0A31E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A31EAu, 1);  /* 0C0A31E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A31ECu, 1);  /* 0C0A31EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A31EEu, 1);  /* 0C0A31EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A31F0u, 1);  /* 0C0A31EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A31F2u, 1);  /* 0C0A31F0 mov.l @Rm+,Rn */
	IF(0x0C0A31F2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A31F2 rts */
L_0C0A3200: BLKS(0x0C0A3200u);
	r9 = 0xC286509u; UPD(0x0C0A3202u, 1);  /* 0C0A3200 mov.l @(disp,pc),Rn */
	r0 = 0xC2755BCu; UPD(0x0C0A3204u, 1);  /* 0C0A3202 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A3206u, 1);  /* 0C0A3204 mov.b @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0A3208u, 1);  /* 0C0A3206 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)R16(r0); UPD(0x0C0A320Au, 1);  /* 0C0A3208 mov.w @Rm,Rn */
	r7 = 0xC22C874u; UPD(0x0C0A320Cu, 1);  /* 0C0A320A mov.l @(disp,pc),Rn */
	IF(0x0C0A320Cu); MACL = r9 * r8;  /* 0C0A320C mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0A3210u, 3);  /* 0C0A320E mov.w @Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0A3212u, 1);  /* 0C0A3210 mov.l @(disp,pc),Rn */
	IF(0x0C0A3212u); r8 = MACL;  /* 0C0A3212 sts macl,Rn */
	r8 += r3;  /* 0C0A3214 add Rm,Rn */
	r11 = r6 & 0xFFFF;  /* 0C0A3216 extu.w Rm,Rn */
	r4 = 0xC0000110u; UPD(0x0C0A321Au, 4);  /* 0C0A3218 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r13); UPD(0x0C0A321Cu, 1);  /* 0C0A321A mov.w @Rm,Rn */
	r0 = 0xC0A02D0u; UPD(0x0C0A321Eu, 1);  /* 0C0A321C mov.l @(disp,pc),Rn */
	r5 = r2 & 0xFFFF;  /* 0C0A321E extu.w Rm,Rn */
	W32(r8 + 0x4u, r11); UPD(0x0C0A3222u, 2);  /* 0C0A3220 mov.l Rm,@(disp,Rn) */
	W32(r8, r4); UPD(0x0C0A3224u, 1);  /* 0C0A3222 mov.l Rm,@Rn */
	r11 = 0x0u;  /* 0C0A3224 mov #imm,Rn */
	W32(r8 + 0xCu, r5); UPD(0x0C0A3228u, 2);  /* 0C0A3226 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0A3228 mov Rm,Rn */
	IF(0x0C0A322Au); { u32 t_ = r0; PR = 0x0C0A322Eu; W32(r8 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A322Eu); }  /* 0C0A322A jsr @Rn */
L_0C0A322E: BLKS(0x0C0A322Eu);
	r3 = 0xC0A1530u; UPD(0x0C0A3230u, 1);  /* 0C0A322E mov.l @(disp,pc),Rn */
	IF(0x0C0A3230u); { u32 t_ = r3; PR = 0x0C0A3234u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A3234u); }  /* 0C0A3230 jsr @Rn */
L_0C0A3234: BLKS(0x0C0A3234u);
	r4 = 0xC21F5E2u; UPD(0x0C0A3236u, 1);  /* 0C0A3234 mov.l @(disp,pc),Rn */
	r7 = 0x4Cu;  /* 0C0A3236 mov #imm,Rn */
	IF(0x0C0A3238u); MACL = r10 * r7;  /* 0C0A3238 mul.l Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r4); UPD(0x0C0A323Cu, 4);  /* 0C0A323A mov.w @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C0A323C add #imm,Rn */
	r6 = 0xC26CAE0u; UPD(0x0C0A3240u, 2);  /* 0C0A323E mov.l @(disp,pc),Rn */
	IF(0x0C0A3240u); r4 = MACL;  /* 0C0A3240 sts macl,Rn */
	r0 = 0xC392D5Eu; UPD(0x0C0A3244u, 2);  /* 0C0A3242 mov.l @(disp,pc),Rn */
	r4 += r6;  /* 0C0A3244 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C0A3248u, 2);  /* 0C0A3246 mov.w @Rm,Rn */
	IF(0x0C0A3248u); r5 <<= 16;  /* 0C0A3248 shll16 Rn */
	r2 = R32(r4 + 0x8u); UPD(0x0C0A324Cu, 2);  /* 0C0A324A mov.l @(disp,Rm),Rn */
	IF(0x0C0A324Cu); r3 <<= 16;  /* 0C0A324C shll16 Rn */
	r0 = 0xB0u; UPD(0x0C0A3250u, 2);  /* 0C0A324E mov.w @(disp,pc),Rn */
	r5 -= r2;  /* 0C0A3250 sub Rm,Rn */
	IF(0x0C0A3252u); W8(r0 + r8, r10); UPD(0x0C0A3254u, 2);  /* 0C0A3252 mov.b Rm,@(r0,Rn) */
	r4 += 0x42u;  /* 0C0A3254 add #imm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C0A3258u, 2);  /* 0C0A3256 mov.l Rm,@(disp,Rn) */
	r0 += 0xFFFFFFFDu;  /* 0C0A3258 add #imm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C0A325Cu, 2);  /* 0C0A325A mov.l Rm,@(disp,Rn) */
	r10 = (u32)(s32)(s8)R8(r4); UPD(0x0C0A325Eu, 1);  /* 0C0A325C mov.b @Rm,Rn */
	IF(0x0C0A325Eu); W8(r0 + r8, r10); UPD(0x0C0A3260u, 1);  /* 0C0A325E mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0A3260 add #imm,Rn */
	IF(0x0C0A3262u); W8(r0 + r8, r10); UPD(0x0C0A3264u, 2);  /* 0C0A3262 mov.b Rm,@(r0,Rn) */
	r7 = (u32)(s32)(s16)R16(r12); UPD(0x0C0A3266u, 1);  /* 0C0A3264 mov.w @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r13); UPD(0x0C0A3268u, 1);  /* 0C0A3266 mov.w @Rm,Rn */
	W32(r15, r7); UPD(0x0C0A326Au, 1);  /* 0C0A3268 mov.l Rm,@Rn */
	r0 = r1 & 0xFFFF;  /* 0C0A326A extu.w Rm,Rn */
	r6 = 0xC1D98E8u; UPD(0x0C0A326Eu, 2);  /* 0C0A326C mov.l @(disp,pc),Rn */
	IF(0x0C0A326Eu); r0 <<= 2;  /* 0C0A326E shll2 Rn */
	IF(0x0C0A3270u); r5 = R32(r0 + r6); UPD(0x0C0A3272u, 2);  /* 0C0A3270 mov.l @(r0,Rm),Rn */
	r7 = 0x1u;  /* 0C0A3272 mov #imm,Rn */
	r2 = 0xC074B40u; UPD(0x0C0A3276u, 2);  /* 0C0A3274 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0A3276 mov #imm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0A327Au, 2);  /* 0C0A3278 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x8u, r11); UPD(0x0C0A327Cu, 1);  /* 0C0A327A mov.l Rm,@(disp,Rn) */
	r4 = 0xC2755BCu; UPD(0x0C0A327Eu, 1);  /* 0C0A327C mov.l @(disp,pc),Rn */
	IF(0x0C0A327Eu); { u32 t_ = r2; PR = 0x0C0A3282u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C074B40, 0x0C074B40u, 0x0C0A3282u); }  /* 0C0A327E jsr @Rn */
L_0C0A3282: BLKS(0x0C0A3282u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0A31E2u, 3); goto L_0C0A31E2; }  /* 0C0A3282 bra */
}

void f_0C0A32D0(sh3_t *c)
{
	LOCALS;
L_0C0A32D0: BLKS(0x0C0A32D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A32D2u, 1);  /* 0C0A32D0 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0A32D2 mov #imm,Rn */
	IF(0x0C0A32D4u); r15 -= 4; W32(r15, PR); UPD(0x0C0A32D6u, 2);  /* 0C0A32D4 sts.l pr,@-Rn */
	r4 = 0xC286509u; UPD(0x0C0A32D8u, 1);  /* 0C0A32D6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A32D8 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0A32DCu, 2);  /* 0C0A32DA mov.b @Rm,Rn */
	r4 = 0xC392D64u; UPD(0x0C0A32DEu, 1);  /* 0C0A32DC mov.l @(disp,pc),Rn */
	IF(0x0C0A32DEu); MACL = r6 * r2;  /* 0C0A32DE mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0A32E2u, 3);  /* 0C0A32E0 mov.l @Rm,Rn */
	r7 = 0xC286274u; UPD(0x0C0A32E4u, 1);  /* 0C0A32E2 mov.l @(disp,pc),Rn */
	IF(0x0C0A32E4u); r3 = MACL;  /* 0C0A32E4 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A32E8u, 2);  /* 0C0A32E6 mov.w @Rm+,Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0A32EAu, 1);  /* 0C0A32E8 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0A32ECu, 1);  /* 0C0A32EA mov.w Rm,@Rn */
	r0 += r3;  /* 0C0A32EC add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0A32F0u, 2);  /* 0C0A32EE mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A32F2u, 1);  /* 0C0A32F0 mov.w @Rm+,Rn */
	IF(0x0C0A32F2u); r0 <<= 2;  /* 0C0A32F2 shll2 Rn */
	IF(0x0C0A32F4u); r6 = R32(r0 + r7); UPD(0x0C0A32F6u, 2);  /* 0C0A32F4 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A32F8u, 1);  /* 0C0A32F6 mov.w @Rm+,Rn */
	r0 = 0xC28629Eu; UPD(0x0C0A32FAu, 1);  /* 0C0A32F8 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0A32FCu, 1);  /* 0C0A32FA mov.w Rm,@Rn */
	r2 = 0xC27DC20u; UPD(0x0C0A32FEu, 1);  /* 0C0A32FC mov.l @(disp,pc),Rn */
	r0 = 0xC075760u; UPD(0x0C0A3300u, 1);  /* 0C0A32FE mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0A3302u, 1);  /* 0C0A3300 mov.l Rm,@Rn */
	IF(0x0C0A3302u); { u32 t_ = r0; PR = 0x0C0A3306u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C075760, 0x0C075760u, 0x0C0A3306u); }  /* 0C0A3302 jsr @Rn */
L_0C0A3306: BLKS(0x0C0A3306u);
	r15 = r14;  /* 0C0A3306 mov Rm,Rn */
	IF(0x0C0A3308u); PR = R32(r15); r15 += 4; UPD(0x0C0A330Au, 2);  /* 0C0A3308 lds.l @Rn+,pr */
	IF(0x0C0A330Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A330A rts */
}

void f_0C0A3410(sh3_t *c)
{
	LOCALS;
L_0C0A3410: BLKS(0x0C0A3410u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3412u, 1);  /* 0C0A3410 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0A3412 mov #imm,Rn */
	IF(0x0C0A3414u); r15 -= 4; W32(r15, PR); UPD(0x0C0A3416u, 2);  /* 0C0A3414 sts.l pr,@-Rn */
	r4 = 0xC286509u; UPD(0x0C0A3418u, 1);  /* 0C0A3416 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A3418 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0A341Cu, 2);  /* 0C0A341A mov.b @Rm,Rn */
	r4 = 0xC392D64u; UPD(0x0C0A341Eu, 1);  /* 0C0A341C mov.l @(disp,pc),Rn */
	IF(0x0C0A341Eu); MACL = r6 * r2;  /* 0C0A341E mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0A3422u, 3);  /* 0C0A3420 mov.l @Rm,Rn */
	r7 = 0xC286274u; UPD(0x0C0A3424u, 1);  /* 0C0A3422 mov.l @(disp,pc),Rn */
	IF(0x0C0A3424u); r3 = MACL;  /* 0C0A3424 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A3428u, 2);  /* 0C0A3426 mov.w @Rm+,Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0A342Au, 1);  /* 0C0A3428 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0A342Cu, 1);  /* 0C0A342A mov.w Rm,@Rn */
	r0 += r3;  /* 0C0A342C add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0A3430u, 2);  /* 0C0A342E mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A3432u, 1);  /* 0C0A3430 mov.w @Rm+,Rn */
	IF(0x0C0A3432u); r0 <<= 2;  /* 0C0A3432 shll2 Rn */
	IF(0x0C0A3434u); r6 = R32(r0 + r7); UPD(0x0C0A3436u, 2);  /* 0C0A3434 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A3438u, 1);  /* 0C0A3436 mov.w @Rm+,Rn */
	r0 = 0xC28629Eu; UPD(0x0C0A343Au, 1);  /* 0C0A3438 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0A343Cu, 1);  /* 0C0A343A mov.w Rm,@Rn */
	r2 = 0xC27DC20u; UPD(0x0C0A343Eu, 1);  /* 0C0A343C mov.l @(disp,pc),Rn */
	r0 = 0xC076370u; UPD(0x0C0A3440u, 1);  /* 0C0A343E mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0A3442u, 1);  /* 0C0A3440 mov.l Rm,@Rn */
	IF(0x0C0A3442u); { u32 t_ = r0; PR = 0x0C0A3446u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C076370, 0x0C076370u, 0x0C0A3446u); }  /* 0C0A3442 jsr @Rn */
L_0C0A3446: BLKS(0x0C0A3446u);
	r15 = r14;  /* 0C0A3446 mov Rm,Rn */
	IF(0x0C0A3448u); PR = R32(r15); r15 += 4; UPD(0x0C0A344Au, 2);  /* 0C0A3448 lds.l @Rn+,pr */
	IF(0x0C0A344Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A344A rts */
}

void f_0C0A3470(sh3_t *c)
{
	LOCALS;
L_0C0A3470: BLKS(0x0C0A3470u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3472u, 1);  /* 0C0A3470 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3474u, 1);  /* 0C0A3472 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3476u, 1);  /* 0C0A3474 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3478u, 1);  /* 0C0A3476 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A347Au, 1);  /* 0C0A3478 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A347Cu, 1);  /* 0C0A347A mov.l Rm,@-Rn */
	r4 = 0xC392D64u; UPD(0x0C0A347Eu, 1);  /* 0C0A347C mov.l @(disp,pc),Rn */
	IF(0x0C0A347Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0A3480u, 1);  /* 0C0A347E sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C0A3482u, 1);  /* 0C0A3480 mov.l @Rm,Rn */
	r14 = r15;  /* 0C0A3482 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r1 = v_; } UPD(0x0C0A3486u, 2);  /* 0C0A3484 mov.w @Rm+,Rn */
	r9 = 0xC22C874u; UPD(0x0C0A3488u, 1);  /* 0C0A3486 mov.l @(disp,pc),Rn */
	r8 = 0xC057A50u; UPD(0x0C0A348Au, 1);  /* 0C0A3488 mov.l @(disp,pc),Rn */
	W32(r4, r3); UPD(0x0C0A348Cu, 1);  /* 0C0A348A mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C0A348Eu, 1);  /* 0C0A348C mov.w @Rm,Rn */
	r12 = 0xC286274u; UPD(0x0C0A3490u, 1);  /* 0C0A348E mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C0A3490 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0A3494u, 2);  /* 0C0A3492 mov.l @(disp,pc),Rn */
	IF(0x0C0A3494u); { u32 t_ = r8; PR = 0x0C0A3498u; W16(r12, r1); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C0A3498u); }  /* 0C0A3494 jsr @Rn */
L_0C0A3498: BLKS(0x0C0A3498u);
	T = (r0 & r0) == 0;  /* 0C0A3498 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A34B0u, 4); goto L_0C0A34B0; } UPD(0x0C0A349Eu, 1); goto L_0C0A349E; }  /* 0C0A349A bf/s */
L_0C0A349E: BLKS(0x0C0A349Eu);
	r15 = r14;  /* 0C0A349E mov Rm,Rn */
	IF(0x0C0A34A0u); PR = R32(r15); r15 += 4; UPD(0x0C0A34A2u, 2);  /* 0C0A34A0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A34A4u, 1);  /* 0C0A34A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A34A6u, 1);  /* 0C0A34A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A34A8u, 1);  /* 0C0A34A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A34AAu, 1);  /* 0C0A34A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A34ACu, 1);  /* 0C0A34AA mov.l @Rm+,Rn */
	IF(0x0C0A34ACu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A34AC rts */
L_0C0A34B0: BLKS(0x0C0A34B0u);
	r8 = 0xC0606C0u; UPD(0x0C0A34B2u, 1);  /* 0C0A34B0 mov.l @(disp,pc),Rn */
	IF(0x0C0A34B2u); { u32 t_ = r8; PR = 0x0C0A34B6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0A34B6u); }  /* 0C0A34B2 jsr @Rn */
L_0C0A34B6: BLKS(0x0C0A34B6u);
	T = (r0 & r0) == 0;  /* 0C0A34B6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A349Eu, 4); goto L_0C0A349E; } goto L_0C0A34BC; }  /* 0C0A34B8 bt/s */
L_0C0A34BC: BLKS(0x0C0A34BCu);
	r11 = 0xC2755BCu; UPD(0x0C0A34BEu, 2);  /* 0C0A34BC mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0A34BE mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r11); UPD(0x0C0A34C2u, 2);  /* 0C0A34C0 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0A34C4u, 1);  /* 0C0A34C2 mov.w @(disp,pc),Rn */
	IF(0x0C0A34C4u); MACL = r10 * r8;  /* 0C0A34C4 mul.l Rm,Rn */
	r2 = 0xC286509u; UPD(0x0C0A34C8u, 3);  /* 0C0A34C6 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r12); UPD(0x0C0A34CAu, 1);  /* 0C0A34C8 mov.w @Rm,Rn */
	IF(0x0C0A34CAu); r8 = MACL;  /* 0C0A34CA sts macl,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0A34CEu, 2);  /* 0C0A34CC mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFFFF;  /* 0C0A34CE extu.w Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A34D2u, 2);  /* 0C0A34D0 mov.b @Rm,Rn */
	r8 += r3;  /* 0C0A34D2 add Rm,Rn */
	r4 = 0xC3000010u; UPD(0x0C0A34D6u, 2);  /* 0C0A34D4 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C0A34D8u, 1);  /* 0C0A34D6 mov.w @Rm,Rn */
	r12 = 0xC0A02D0u; UPD(0x0C0A34DAu, 1);  /* 0C0A34D8 mov.l @(disp,pc),Rn */
	r9 = r0 & 0xFFFF;  /* 0C0A34DA extu.w Rm,Rn */
	W32(r8, r4); UPD(0x0C0A34DEu, 2);  /* 0C0A34DC mov.l Rm,@Rn */
	W32(r8 + 0x4u, r9); UPD(0x0C0A34E0u, 1);  /* 0C0A34DE mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C0A34E0 mov Rm,Rn */
	W32(r8 + 0x8u, r6); UPD(0x0C0A34E4u, 2);  /* 0C0A34E2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A34E4u); { u32 t_ = r12; PR = 0x0C0A34E8u; W32(r8 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A34E8u); }  /* 0C0A34E4 jsr @Rn */
L_0C0A34E8: BLKS(0x0C0A34E8u);
	r3 = 0x4Cu;  /* 0C0A34E8 mov #imm,Rn */
	IF(0x0C0A34EAu); MACL = r11 * r3;  /* 0C0A34EA mul.l Rm,Rn */
	r2 = 0xC21F5E2u; UPD(0x0C0A34EEu, 4);  /* 0C0A34EC mov.l @(disp,pc),Rn */
	r4 = 0xC26CAE0u; UPD(0x0C0A34F0u, 1);  /* 0C0A34EE mov.l @(disp,pc),Rn */
	IF(0x0C0A34F0u); r12 = MACL;  /* 0C0A34F0 sts macl,Rn */
	r7 = 0xC392D5Eu; UPD(0x0C0A34F4u, 2);  /* 0C0A34F2 mov.l @(disp,pc),Rn */
	r12 += r4;  /* 0C0A34F4 add Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r2); UPD(0x0C0A34F8u, 2);  /* 0C0A34F6 mov.w @Rm,Rn */
	r4 = r10;  /* 0C0A34F8 mov Rm,Rn */
	r0 = R32(r12 + 0x8u); UPD(0x0C0A34FCu, 2);  /* 0C0A34FA mov.l @(disp,Rm),Rn */
	IF(0x0C0A34FCu); r9 <<= 16;  /* 0C0A34FC shll16 Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0A3500u, 2);  /* 0C0A34FE mov.w @Rm,Rn */
	r9 -= r0;  /* 0C0A3500 sub Rm,Rn */
	r5 = 0xC0A1530u; UPD(0x0C0A3504u, 2);  /* 0C0A3502 mov.l @(disp,pc),Rn */
	IF(0x0C0A3504u); r6 <<= 16;  /* 0C0A3504 shll16 Rn */
	W32(r8 + 0x24u, r9); UPD(0x0C0A3508u, 2);  /* 0C0A3506 mov.l Rm,@(disp,Rn) */
	r12 += 0x42u;  /* 0C0A3508 add #imm,Rn */
	IF(0x0C0A350Au); { u32 t_ = r5; PR = 0x0C0A350Eu; W32(r8 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A350Eu); }  /* 0C0A350A jsr @Rn */
L_0C0A350E: BLKS(0x0C0A350Eu);
	r0 = 0xB0u; UPD(0x0C0A3510u, 1);  /* 0C0A350E mov.w @(disp,pc),Rn */
	IF(0x0C0A3510u); W8(r0 + r8, r11); UPD(0x0C0A3512u, 1);  /* 0C0A3510 mov.b Rm,@(r0,Rn) */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C0A3514u, 1);  /* 0C0A3512 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0A3514 add #imm,Rn */
	IF(0x0C0A3516u); W8(r0 + r8, r2); UPD(0x0C0A3518u, 2);  /* 0C0A3516 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0A3518 add #imm,Rn */
	IF(0x0C0A351Au); W8(r0 + r8, r2); UPD(0x0C0A351Cu, 2);  /* 0C0A351A mov.b Rm,@(r0,Rn) */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0A349Eu, 3); goto L_0C0A349E; }  /* 0C0A351C bra */
}

void f_0C0A3560(sh3_t *c)
{
	LOCALS;
L_0C0A3560: BLKS(0x0C0A3560u);
	r2 = 0xB4u; UPD(0x0C0A3562u, 1);  /* 0C0A3560 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A3562 exts.w Rm,Rn */
	IF(0x0C0A3564u); MACL = r4 * r2;  /* 0C0A3564 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A3568u, 4);  /* 0C0A3566 mov.l @(disp,pc),Rn */
	IF(0x0C0A3568u); r2 = MACL;  /* 0C0A3568 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A356Cu, 2);  /* 0C0A356A mov.l Rm,@-Rn */
	r2 += r0;  /* 0C0A356C add Rm,Rn */
	r2 += 0x3Cu;  /* 0C0A356E add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0A3572u, 3);  /* 0C0A3570 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0A3572 mov Rm,Rn */
	r1 = 0xC0A1700u; UPD(0x0C0A3576u, 2);  /* 0C0A3574 mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C0A3576 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A3586u, 4); goto L_0C0A3586; } goto L_0C0A357C; }  /* 0C0A3578 bt/s */
L_0C0A357C: BLKS(0x0C0A357Cu);
	r0 = R32(r2 + 0xCu); UPD(0x0C0A357Eu, 2);  /* 0C0A357C mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0A357E add #imm,Rn */
	r0 &= 0x3Fu;  /* 0C0A3580 and #imm,r0 */
	r1 = 0xC0A0380u; UPD(0x0C0A3584u, 3);  /* 0C0A3582 mov.l @(disp,pc),Rn */
	W32(r2 + 0xCu, r0); UPD(0x0C0A3586u, 1);  /* 0C0A3584 mov.l Rm,@(disp,Rn) */
L_0C0A3586: BLKS(0x0C0A3586u);
	r15 = r14;  /* 0C0A3586 mov Rm,Rn */
	IF(0x0C0A3588u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A0380u: TAIL(f_0C0A0380); case 0x0C0A1700u: TAIL(f_0C0A1700); default: JUMPD(tv_); } }  /* 0C0A3588 jmp @Rn */
}

void f_0C0A35A0(sh3_t *c)
{
	LOCALS;
L_0C0A35A0: BLKS(0x0C0A35A0u);
	r5 = 0xB4u; UPD(0x0C0A35A2u, 1);  /* 0C0A35A0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A35A2 exts.w Rm,Rn */
	IF(0x0C0A35A4u); MACL = r4 * r5;  /* 0C0A35A4 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0A35A8u, 4);  /* 0C0A35A6 mov.l @(disp,pc),Rn */
	r1 = 0xAu;  /* 0C0A35A8 mov #imm,Rn */
	IF(0x0C0A35AAu); r0 = MACL;  /* 0C0A35AA sts macl,Rn */
	r3 = 0x9Cu; UPD(0x0C0A35AEu, 3);  /* 0C0A35AC mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C0A35AE add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A35B2u, 2);  /* 0C0A35B0 mov.l Rm,@-Rn */
	r3 += r0;  /* 0C0A35B2 add Rm,Rn */
	W8(r3, r1); UPD(0x0C0A35B6u, 2);  /* 0C0A35B4 mov.b Rm,@Rn */
	r14 = r15;  /* 0C0A35B6 mov Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0A35BAu, 2);  /* 0C0A35B8 mov.l @(disp,Rm),Rn */
	r3 += 0x1u;  /* 0C0A35BA add #imm,Rn */
	r0 = 0x3u;  /* 0C0A35BC mov #imm,Rn */
	T = r2 > r0;  /* 0C0A35BE cmp/hi Rm,Rn */
	{ u32 c_ = T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0A3610u, 6); goto L_0C0A3610; } UPD(0x0C0A35C4u, 1); goto L_0C0A35C4; }  /* 0C0A35C0 bt/s */
L_0C0A35C4: BLKS(0x0C0A35C4u);
	r0 = 0xC0A35CCu;  /* 0C0A35C4 mova @(disp,pc),r0 */
	IF(0x0C0A35C6u); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0A35C8u, 2);  /* 0C0A35C6 mov.b @(r0,Rm),Rn */
	IF(0x0C0A35C8u); { u32 tv_ = (r6 + 0x0C0A35CCu); u32 t_ = PHYS(tv_); IF(0x0C0A35CAu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A35D0u: goto L_0C0A35D0; case 0x0C0A35E0u: goto L_0C0A35E0; case 0x0C0A35F0u: goto L_0C0A35F0; case 0x0C0A3600u: goto L_0C0A3600; default: JUMPD(tv_); } }  /* 0C0A35C8 braf Rn */
L_0C0A35D0: BLKS(0x0C0A35D0u);
	r5 = 0xC18B5CEu; UPD(0x0C0A35D2u, 1);  /* 0C0A35D0 mov.l @(disp,pc),Rn */
L_0C0A35D2: BLKS(0x0C0A35D2u);
	r7 = 0xC0A17E0u; UPD(0x0C0A35D4u, 1);  /* 0C0A35D2 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0A35D4 mov Rm,Rn */
	IF(0x0C0A35D6u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A17E0u: TAIL(f_0C0A17E0); default: JUMPD(tv_); } }  /* 0C0A35D6 jmp @Rn */
L_0C0A35E0: BLKS(0x0C0A35E0u);
	r5 = 0xC18B614u; UPD(0x0C0A35E2u, 1);  /* 0C0A35E0 mov.l @(disp,pc),Rn */
	{ IF(0x0C0A35E4u); ; /* slot nop */ UPD(0x0C0A35D2u, 3); goto L_0C0A35D2; }  /* 0C0A35E2 bra */
L_0C0A35F0: BLKS(0x0C0A35F0u);
	r5 = 0xC18B65Au; UPD(0x0C0A35F2u, 1);  /* 0C0A35F0 mov.l @(disp,pc),Rn */
	{ IF(0x0C0A35F4u); ; /* slot nop */ UPD(0x0C0A35D2u, 3); goto L_0C0A35D2; }  /* 0C0A35F2 bra */
L_0C0A3600: BLKS(0x0C0A3600u);
	r5 = 0xC18B6A0u; UPD(0x0C0A3602u, 1);  /* 0C0A3600 mov.l @(disp,pc),Rn */
	{ IF(0x0C0A3604u); ; /* slot nop */ UPD(0x0C0A35D2u, 3); goto L_0C0A35D2; }  /* 0C0A3602 bra */
L_0C0A3610: BLKS(0x0C0A3610u);
	r15 = r14;  /* 0C0A3610 mov Rm,Rn */
	IF(0x0C0A3612u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A3612 rts */
}

void f_0C0A3640(sh3_t *c)
{
	LOCALS;
L_0C0A3640: BLKS(0x0C0A3640u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3642u, 1);  /* 0C0A3640 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3644u, 1);  /* 0C0A3642 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3646u, 1);  /* 0C0A3644 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3648u, 1);  /* 0C0A3646 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A364Au, 1);  /* 0C0A3648 mov.l Rm,@-Rn */
	r8 = 0xC22C874u; UPD(0x0C0A364Cu, 1);  /* 0C0A364A mov.l @(disp,pc),Rn */
	IF(0x0C0A364Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0A364Eu, 1);  /* 0C0A364C sts.l pr,@-Rn */
	r9 = 0xC057A50u; UPD(0x0C0A3650u, 1);  /* 0C0A364E mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A3650 mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C0A3654u, 2);  /* 0C0A3652 mov.w @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0A3656u, 1);  /* 0C0A3654 mov.l @(disp,pc),Rn */
	IF(0x0C0A3656u); { u32 t_ = r9; PR = 0x0C0A365Au; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C0A365Au); }  /* 0C0A3656 jsr @Rn */
L_0C0A365A: BLKS(0x0C0A365Au);
	T = (r0 & r0) == 0;  /* 0C0A365A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A3670u, 4); goto L_0C0A3670; } UPD(0x0C0A3660u, 1); goto L_0C0A3660; }  /* 0C0A365C bf/s */
L_0C0A3660: BLKS(0x0C0A3660u);
	r15 = r14;  /* 0C0A3660 mov Rm,Rn */
	IF(0x0C0A3662u); PR = R32(r15); r15 += 4; UPD(0x0C0A3664u, 2);  /* 0C0A3662 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A3666u, 1);  /* 0C0A3664 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A3668u, 1);  /* 0C0A3666 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A366Au, 1);  /* 0C0A3668 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A366Cu, 1);  /* 0C0A366A mov.l @Rm+,Rn */
	IF(0x0C0A366Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A366C rts */
L_0C0A3670: BLKS(0x0C0A3670u);
	r9 = 0xC0606C0u; UPD(0x0C0A3672u, 1);  /* 0C0A3670 mov.l @(disp,pc),Rn */
	IF(0x0C0A3672u); { u32 t_ = r9; PR = 0x0C0A3676u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0A3676u); }  /* 0C0A3672 jsr @Rn */
L_0C0A3676: BLKS(0x0C0A3676u);
	T = (r0 & r0) == 0;  /* 0C0A3676 tst Rm,Rn */
	if (!T) { UPD(0x0C0A3690u, 4); goto L_0C0A3690; }  /* 0C0A3678 bf */
L_0C0A367A: BLKS(0x0C0A367Au);
	r0 = 0x1u;  /* 0C0A367A mov #imm,Rn */
	r3 = 0xC392D64u; UPD(0x0C0A367Eu, 2);  /* 0C0A367C mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C0A3680u, 1);  /* 0C0A367E mov.l @Rm,Rn */
	r2 += 0x2u;  /* 0C0A3680 add #imm,Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C0A3660u, 4); goto L_0C0A3660; }  /* 0C0A3682 bra */
L_0C0A3690: BLKS(0x0C0A3690u);
	r11 = 0xC2755BCu; UPD(0x0C0A3692u, 1);  /* 0C0A3690 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0A3692 mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r11); UPD(0x0C0A3696u, 2);  /* 0C0A3694 mov.w @Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0A3698u, 1);  /* 0C0A3696 mov.w @(disp,pc),Rn */
	IF(0x0C0A3698u); MACL = r10 * r9;  /* 0C0A3698 mul.l Rm,Rn */
	r5 = 0xC286509u; UPD(0x0C0A369Cu, 3);  /* 0C0A369A mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C0A369Eu, 1);  /* 0C0A369C mov.w @Rm,Rn */
	IF(0x0C0A369Eu); r9 = MACL;  /* 0C0A369E sts macl,Rn */
	r4 = 0xC26CD40u; UPD(0x0C0A36A2u, 2);  /* 0C0A36A0 mov.l @(disp,pc),Rn */
	r2 = r6 & 0xFFFF;  /* 0C0A36A2 extu.w Rm,Rn */
	r0 = 0xC0A02D0u; UPD(0x0C0A36A6u, 2);  /* 0C0A36A4 mov.l @(disp,pc),Rn */
	r9 += r4;  /* 0C0A36A6 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r5); UPD(0x0C0A36AAu, 2);  /* 0C0A36A8 mov.b @Rm,Rn */
	r4 = r10;  /* 0C0A36AA mov Rm,Rn */
	r7 = 0xC1000010u; UPD(0x0C0A36AEu, 2);  /* 0C0A36AC mov.l @(disp,pc),Rn */
	r8 = 0x4Cu;  /* 0C0A36AE mov #imm,Rn */
	W32(r9, r7); UPD(0x0C0A36B2u, 2);  /* 0C0A36B0 mov.l Rm,@Rn */
	W32(r9 + 0x4u, r2); UPD(0x0C0A36B4u, 1);  /* 0C0A36B2 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r3); UPD(0x0C0A36B6u, 1);  /* 0C0A36B4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A36B6u); { u32 t_ = r0; PR = 0x0C0A36BAu; W32(r9 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A36BAu); }  /* 0C0A36B6 jsr @Rn */
L_0C0A36BA: BLKS(0x0C0A36BAu);
	IF(0x0C0A36BAu); MACL = r11 * r8;  /* 0C0A36BA mul.l Rm,Rn */
	r5 = 0xC21F5E2u; UPD(0x0C0A36BEu, 3);  /* 0C0A36BC mov.l @(disp,pc),Rn */
	r4 = 0xC26CAE0u; UPD(0x0C0A36C0u, 1);  /* 0C0A36BE mov.l @(disp,pc),Rn */
	IF(0x0C0A36C0u); r8 = MACL;  /* 0C0A36C0 sts macl,Rn */
	r2 = 0xC392D5Eu; UPD(0x0C0A36C4u, 2);  /* 0C0A36C2 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0A36C4 add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C0A36C8u, 2);  /* 0C0A36C6 mov.w @Rm,Rn */
	r4 = r10;  /* 0C0A36C8 mov Rm,Rn */
	r7 = R32(r8 + 0x8u); UPD(0x0C0A36CCu, 2);  /* 0C0A36CA mov.l @(disp,Rm),Rn */
	IF(0x0C0A36CCu); r6 <<= 16;  /* 0C0A36CC shll16 Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C0A36D0u, 2);  /* 0C0A36CE mov.w @Rm,Rn */
	r6 -= r7;  /* 0C0A36D0 sub Rm,Rn */
	r0 = 0xC0A1530u; UPD(0x0C0A36D4u, 2);  /* 0C0A36D2 mov.l @(disp,pc),Rn */
	IF(0x0C0A36D4u); r3 <<= 16;  /* 0C0A36D4 shll16 Rn */
	W32(r9 + 0x24u, r6); UPD(0x0C0A36D8u, 2);  /* 0C0A36D6 mov.l Rm,@(disp,Rn) */
	r8 += 0x42u;  /* 0C0A36D8 add #imm,Rn */
	IF(0x0C0A36DAu); { u32 t_ = r0; PR = 0x0C0A36DEu; W32(r9 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A36DEu); }  /* 0C0A36DA jsr @Rn */
L_0C0A36DE: BLKS(0x0C0A36DEu);
	r0 = 0xB0u; UPD(0x0C0A36E0u, 1);  /* 0C0A36DE mov.w @(disp,pc),Rn */
	IF(0x0C0A36E0u); W8(r0 + r9, r11); UPD(0x0C0A36E2u, 1);  /* 0C0A36E0 mov.b Rm,@(r0,Rn) */
	r11 = (u32)(s32)(s8)R8(r8); UPD(0x0C0A36E4u, 1);  /* 0C0A36E2 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0A36E4 add #imm,Rn */
	r11 += 0x2u;  /* 0C0A36E6 add #imm,Rn */
	IF(0x0C0A36E8u); W8(r0 + r9, r11); UPD(0x0C0A36EAu, 3);  /* 0C0A36E8 mov.b Rm,@(r0,Rn) */
	r8 += 0xFFFFFFBEu;  /* 0C0A36EA add #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0A36EC add #imm,Rn */
	IF(0x0C0A36EEu); W8(r0 + r9, r11); UPD(0x0C0A36F0u, 3);  /* 0C0A36EE mov.b Rm,@(r0,Rn) */
	r4 = 0xC392D64u; UPD(0x0C0A36F2u, 1);  /* 0C0A36F0 mov.l @(disp,pc),Rn */
	r5 = R32(r4); UPD(0x0C0A36F4u, 1);  /* 0C0A36F2 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A36F6u, 1);  /* 0C0A36F4 mov.w @Rm+,Rn */
	r6 = 0xC0A1780u; UPD(0x0C0A36F8u, 1);  /* 0C0A36F6 mov.l @(disp,pc),Rn */
	IF(0x0C0A36F8u); r0 <<= 2;  /* 0C0A36F8 shll2 Rn */
	W32(r4, r5); UPD(0x0C0A36FCu, 2);  /* 0C0A36FA mov.l Rm,@Rn */
	r7 = R32(r8 + 0x38u); UPD(0x0C0A36FEu, 1);  /* 0C0A36FC mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0A36FE mov Rm,Rn */
	IF(0x0C0A3700u); { u32 t_ = r6; PR = 0x0C0A3704u; IF(0x0C0A3702u); r5 = R32(r0 + r7); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C0A3704u); }  /* 0C0A3700 jsr @Rn */
L_0C0A3704: BLKS(0x0C0A3704u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0A3660u, 3); goto L_0C0A3660; }  /* 0C0A3704 bra */
}

void f_0C0A3750(sh3_t *c)
{
	LOCALS;
L_0C0A3750: BLKS(0x0C0A3750u);
	r6 = 0xB4u; UPD(0x0C0A3752u, 1);  /* 0C0A3750 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A3752 exts.w Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3756u, 2);  /* 0C0A3754 mov.l Rm,@-Rn */
	IF(0x0C0A3756u); MACL = r1 * r6;  /* 0C0A3756 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A375Au, 3);  /* 0C0A3758 mov.l Rm,@-Rn */
	r5 = 0xC26CD40u; UPD(0x0C0A375Cu, 1);  /* 0C0A375A mov.l @(disp,pc),Rn */
	IF(0x0C0A375Cu); r8 = MACL;  /* 0C0A375C sts macl,Rn */
	IF(0x0C0A375Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0A3760u, 2);  /* 0C0A375E sts.l pr,@-Rn */
	r8 += r5;  /* 0C0A3760 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A3764u, 2);  /* 0C0A3762 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0A3764 mov Rm,Rn */
	IF(0x0C0A3766u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A3768u, 2);  /* 0C0A3766 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A3768 add #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C0A376A extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0A376Eu, 3);  /* 0C0A376C mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A376E add #imm,Rn */
	IF(0x0C0A3770u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A3772u, 2);  /* 0C0A3770 mov.b @(r0,Rm),Rn */
	r5 = 0xFu;  /* 0C0A3772 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A3774 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A3778u, 3);  /* 0C0A3776 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C0A377Au, 1);  /* 0C0A3778 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0A377Cu, 1);  /* 0C0A377A mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A377Eu, 1);  /* 0C0A377C mov.l @(disp,Rm),Rn */
	IF(0x0C0A377Eu); { u32 t_ = r0; PR = 0x0C0A3782u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0A3782u); }  /* 0C0A377E jsr @Rn */
L_0C0A3782: BLKS(0x0C0A3782u);
	r0 = 0x0u;  /* 0C0A3782 mov #imm,Rn */
	W32(r8, r0); UPD(0x0C0A3786u, 2);  /* 0C0A3784 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A3786 mov Rm,Rn */
	IF(0x0C0A3788u); PR = R32(r15); r15 += 4; UPD(0x0C0A378Au, 2);  /* 0C0A3788 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A378Cu, 1);  /* 0C0A378A mov.l @Rm+,Rn */
	IF(0x0C0A378Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A378C rts */
}

void f_0C0A37A0(sh3_t *c)
{
	LOCALS;
L_0C0A37A0: BLKS(0x0C0A37A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A37A2u, 1);  /* 0C0A37A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A37A4u, 1);  /* 0C0A37A2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A37A6u, 1);  /* 0C0A37A4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A37A8u, 1);  /* 0C0A37A6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A37AAu, 1);  /* 0C0A37A8 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A37ACu, 1);  /* 0C0A37AA mov.l Rm,@-Rn */
	r4 = 0xC392D64u; UPD(0x0C0A37AEu, 1);  /* 0C0A37AC mov.l @(disp,pc),Rn */
	IF(0x0C0A37AEu); r15 -= 4; W32(r15, PR); UPD(0x0C0A37B0u, 1);  /* 0C0A37AE sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C0A37B2u, 1);  /* 0C0A37B0 mov.l @Rm,Rn */
	r14 = r15;  /* 0C0A37B2 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r1 = v_; } UPD(0x0C0A37B6u, 2);  /* 0C0A37B4 mov.w @Rm+,Rn */
	r9 = 0xC22C874u; UPD(0x0C0A37B8u, 1);  /* 0C0A37B6 mov.l @(disp,pc),Rn */
	r8 = 0xC057A50u; UPD(0x0C0A37BAu, 1);  /* 0C0A37B8 mov.l @(disp,pc),Rn */
	W32(r4, r3); UPD(0x0C0A37BCu, 1);  /* 0C0A37BA mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C0A37BEu, 1);  /* 0C0A37BC mov.w @Rm,Rn */
	r12 = 0xC286274u; UPD(0x0C0A37C0u, 1);  /* 0C0A37BE mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C0A37C0 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0A37C4u, 2);  /* 0C0A37C2 mov.l @(disp,pc),Rn */
	IF(0x0C0A37C4u); { u32 t_ = r8; PR = 0x0C0A37C8u; W16(r12, r1); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C0A37C8u); }  /* 0C0A37C4 jsr @Rn */
L_0C0A37C8: BLKS(0x0C0A37C8u);
	T = (r0 & r0) == 0;  /* 0C0A37C8 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A37E0u, 4); goto L_0C0A37E0; } UPD(0x0C0A37CEu, 1); goto L_0C0A37CE; }  /* 0C0A37CA bf/s */
L_0C0A37CE: BLKS(0x0C0A37CEu);
	r15 = r14;  /* 0C0A37CE mov Rm,Rn */
	IF(0x0C0A37D0u); PR = R32(r15); r15 += 4; UPD(0x0C0A37D2u, 2);  /* 0C0A37D0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A37D4u, 1);  /* 0C0A37D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A37D6u, 1);  /* 0C0A37D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A37D8u, 1);  /* 0C0A37D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A37DAu, 1);  /* 0C0A37D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A37DCu, 1);  /* 0C0A37DA mov.l @Rm+,Rn */
	IF(0x0C0A37DCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A37DC rts */
L_0C0A37E0: BLKS(0x0C0A37E0u);
	r8 = 0xC0606C0u; UPD(0x0C0A37E2u, 1);  /* 0C0A37E0 mov.l @(disp,pc),Rn */
	IF(0x0C0A37E2u); { u32 t_ = r8; PR = 0x0C0A37E6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0A37E6u); }  /* 0C0A37E2 jsr @Rn */
L_0C0A37E6: BLKS(0x0C0A37E6u);
	T = (r0 & r0) == 0;  /* 0C0A37E6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A37CEu, 4); goto L_0C0A37CE; } goto L_0C0A37EC; }  /* 0C0A37E8 bt/s */
L_0C0A37EC: BLKS(0x0C0A37ECu);
	r11 = 0xC2755BCu; UPD(0x0C0A37EEu, 2);  /* 0C0A37EC mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0A37EE mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r11); UPD(0x0C0A37F2u, 2);  /* 0C0A37F0 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0A37F4u, 1);  /* 0C0A37F2 mov.w @(disp,pc),Rn */
	IF(0x0C0A37F4u); MACL = r10 * r8;  /* 0C0A37F4 mul.l Rm,Rn */
	r2 = 0xC286509u; UPD(0x0C0A37F8u, 3);  /* 0C0A37F6 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r12); UPD(0x0C0A37FAu, 1);  /* 0C0A37F8 mov.w @Rm,Rn */
	IF(0x0C0A37FAu); r8 = MACL;  /* 0C0A37FA sts macl,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0A37FEu, 2);  /* 0C0A37FC mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFFFF;  /* 0C0A37FE extu.w Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A3802u, 2);  /* 0C0A3800 mov.b @Rm,Rn */
	r8 += r3;  /* 0C0A3802 add Rm,Rn */
	r4 = 0xC3000010u; UPD(0x0C0A3806u, 2);  /* 0C0A3804 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C0A3808u, 1);  /* 0C0A3806 mov.w @Rm,Rn */
	r12 = 0xC0A02D0u; UPD(0x0C0A380Au, 1);  /* 0C0A3808 mov.l @(disp,pc),Rn */
	r9 = r0 & 0xFFFF;  /* 0C0A380A extu.w Rm,Rn */
	W32(r8, r4); UPD(0x0C0A380Eu, 2);  /* 0C0A380C mov.l Rm,@Rn */
	W32(r8 + 0x4u, r9); UPD(0x0C0A3810u, 1);  /* 0C0A380E mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C0A3810 mov Rm,Rn */
	W32(r8 + 0x8u, r6); UPD(0x0C0A3814u, 2);  /* 0C0A3812 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A3814u); { u32 t_ = r12; PR = 0x0C0A3818u; W32(r8 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A3818u); }  /* 0C0A3814 jsr @Rn */
L_0C0A3818: BLKS(0x0C0A3818u);
	r3 = 0x4Cu;  /* 0C0A3818 mov #imm,Rn */
	IF(0x0C0A381Au); MACL = r11 * r3;  /* 0C0A381A mul.l Rm,Rn */
	r2 = 0xC21F5E2u; UPD(0x0C0A381Eu, 4);  /* 0C0A381C mov.l @(disp,pc),Rn */
	r4 = 0xC26CAE0u; UPD(0x0C0A3820u, 1);  /* 0C0A381E mov.l @(disp,pc),Rn */
	IF(0x0C0A3820u); r12 = MACL;  /* 0C0A3820 sts macl,Rn */
	r7 = 0xC392D5Eu; UPD(0x0C0A3824u, 2);  /* 0C0A3822 mov.l @(disp,pc),Rn */
	r12 += r4;  /* 0C0A3824 add Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r2); UPD(0x0C0A3828u, 2);  /* 0C0A3826 mov.w @Rm,Rn */
	r4 = r10;  /* 0C0A3828 mov Rm,Rn */
	r0 = R32(r12 + 0x8u); UPD(0x0C0A382Cu, 2);  /* 0C0A382A mov.l @(disp,Rm),Rn */
	IF(0x0C0A382Cu); r9 <<= 16;  /* 0C0A382C shll16 Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0A3830u, 2);  /* 0C0A382E mov.w @Rm,Rn */
	r9 -= r0;  /* 0C0A3830 sub Rm,Rn */
	r5 = 0xC0A1530u; UPD(0x0C0A3834u, 2);  /* 0C0A3832 mov.l @(disp,pc),Rn */
	IF(0x0C0A3834u); r6 <<= 16;  /* 0C0A3834 shll16 Rn */
	W32(r8 + 0x24u, r9); UPD(0x0C0A3838u, 2);  /* 0C0A3836 mov.l Rm,@(disp,Rn) */
	r12 += 0x42u;  /* 0C0A3838 add #imm,Rn */
	IF(0x0C0A383Au); { u32 t_ = r5; PR = 0x0C0A383Eu; W32(r8 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A383Eu); }  /* 0C0A383A jsr @Rn */
L_0C0A383E: BLKS(0x0C0A383Eu);
	r0 = 0xB0u; UPD(0x0C0A3840u, 1);  /* 0C0A383E mov.w @(disp,pc),Rn */
	IF(0x0C0A3840u); W8(r0 + r8, r11); UPD(0x0C0A3842u, 1);  /* 0C0A3840 mov.b Rm,@(r0,Rn) */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C0A3844u, 1);  /* 0C0A3842 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0A3844 add #imm,Rn */
	r2 += 0x2u;  /* 0C0A3846 add #imm,Rn */
	IF(0x0C0A3848u); W8(r0 + r8, r2); UPD(0x0C0A384Au, 3);  /* 0C0A3848 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0A384A add #imm,Rn */
	IF(0x0C0A384Cu); W8(r0 + r8, r2); UPD(0x0C0A384Eu, 2);  /* 0C0A384C mov.b Rm,@(r0,Rn) */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0A37CEu, 3); goto L_0C0A37CE; }  /* 0C0A384E bra */
}

void f_0C0A38A0(sh3_t *c)
{
	LOCALS;
L_0C0A38A0: BLKS(0x0C0A38A0u);
	r0 = 0xB4u; UPD(0x0C0A38A2u, 1);  /* 0C0A38A0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A38A2 exts.w Rm,Rn */
	IF(0x0C0A38A4u); MACL = r4 * r0;  /* 0C0A38A4 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A38A8u, 4);  /* 0C0A38A6 mov.l Rm,@-Rn */
	r0 = 0xC26CD7Cu; UPD(0x0C0A38AAu, 1);  /* 0C0A38A8 mov.l @(disp,pc),Rn */
	IF(0x0C0A38AAu); r3 = MACL;  /* 0C0A38AA sts macl,Rn */
	IF(0x0C0A38ACu); r15 -= 4; W32(r15, PR); UPD(0x0C0A38AEu, 2);  /* 0C0A38AC sts.l pr,@-Rn */
	IF(0x0C0A38AEu); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0A38B0u, 1);  /* 0C0A38AE mov.w @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0A38B0 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A38C0u, 4); goto L_0C0A38C0; } UPD(0x0C0A38B6u, 1); goto L_0C0A38B6; }  /* 0C0A38B2 bt/s */
L_0C0A38B6: BLKS(0x0C0A38B6u);
	r15 = r14;  /* 0C0A38B6 mov Rm,Rn */
	IF(0x0C0A38B8u); PR = R32(r15); r15 += 4; UPD(0x0C0A38BAu, 2);  /* 0C0A38B8 lds.l @Rn+,pr */
	IF(0x0C0A38BAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A38BA rts */
L_0C0A38C0: BLKS(0x0C0A38C0u);
	r0 = 0xC0A1700u; UPD(0x0C0A38C2u, 1);  /* 0C0A38C0 mov.l @(disp,pc),Rn */
	IF(0x0C0A38C2u); { u32 t_ = r0; PR = 0x0C0A38C6u; IF(0x0C0A38C4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C0A38C6u); }  /* 0C0A38C2 jsr @Rn */
L_0C0A38C6: BLKS(0x0C0A38C6u);
	{ IF(0x0C0A38C8u); ; /* slot nop */ UPD(0x0C0A38B6u, 3); goto L_0C0A38B6; }  /* 0C0A38C6 bra */
}


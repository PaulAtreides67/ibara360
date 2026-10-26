#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C0715D0(sh3_t *c)
{
	LOCALS;
L_0C0715D0: BLKS(0x0C0715D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0715D2u, 1);  /* 0C0715D0 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0715D2 mov #imm,Rn */
	r2 = 0xC3CA708u; UPD(0x0C0715D6u, 2);  /* 0C0715D4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0715D6 mov Rm,Rn */
	r3 = 0xFFu; UPD(0x0C0715DAu, 2);  /* 0C0715D8 mov.w @(disp,pc),Rn */
	IF(0x0C0715DAu); ;  /* 0C0715DA nop */
	UPD(0x0C0715DCu, 1);
L_0C0715DC: BLKS(0x0C0715DCu);
	r7 = R32(r2); UPD(0x0C0715DEu, 1);  /* 0C0715DC mov.l @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0715DE tst Rm,Rn */
	if (T) { UPD(0x0C0715EAu, 4); goto L_0C0715EA; }  /* 0C0715E0 bt */
L_0C0715E2: BLKS(0x0C0715E2u);
	r0 += 0x1u;  /* 0C0715E2 add #imm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C0715E4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x1Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0715DCu, 5); goto L_0C0715DC; } UPD(0x0C0715EAu, 1); goto L_0C0715EA; }  /* 0C0715E6 bf/s */
L_0C0715EA: BLKS(0x0C0715EAu);
	r3 = 0x100u; UPD(0x0C0715ECu, 1);  /* 0C0715EA mov.w @(disp,pc),Rn */
	T = r0 == r3;  /* 0C0715EC cmp/eq Rm,Rn */
	{ u32 c_ = T; r1 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C071612u, 4); goto L_0C071612; } goto L_0C0715F2; }  /* 0C0715EE bt/s */
L_0C0715F2: BLKS(0x0C0715F2u);
	r7 = 0x1u;  /* 0C0715F2 mov #imm,Rn */
	W32(r2, r7); UPD(0x0C0715F6u, 3);  /* 0C0715F4 mov.l Rm,@Rn */
	r3 = 0x2Fu;  /* 0C0715F6 mov #imm,Rn */
	W32(r2 + 0x8u, r5); UPD(0x0C0715FAu, 2);  /* 0C0715F8 mov.l Rm,@(disp,Rn) */
	r7 = 0x4Fu;  /* 0C0715FA mov #imm,Rn */
	W32(r2 + 0x4u, r4); UPD(0x0C0715FEu, 2);  /* 0C0715FC mov.l Rm,@(disp,Rn) */
	r5 = 0x0u;  /* 0C0715FE mov #imm,Rn */
	W32(r2 + 0xCu, r3); UPD(0x0C071602u, 2);  /* 0C071600 mov.l Rm,@(disp,Rn) */
	r1 = r0;  /* 0C071602 mov Rm,Rn */
	W32(r2 + 0x10u, r7); UPD(0x0C071606u, 2);  /* 0C071604 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x14u, r6); UPD(0x0C071608u, 1);  /* 0C071606 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x18u, r5); UPD(0x0C07160Au, 1);  /* 0C071608 mov.l Rm,@(disp,Rn) */
	r4 = 0xC3CA704u; UPD(0x0C07160Cu, 1);  /* 0C07160A mov.l @(disp,pc),Rn */
	r2 = R32(r4); UPD(0x0C07160Eu, 1);  /* 0C07160C mov.l @Rm,Rn */
	r2 += 0x1u;  /* 0C07160E add #imm,Rn */
	W32(r4, r2); UPD(0x0C071612u, 2);  /* 0C071610 mov.l Rm,@Rn */
L_0C071612: BLKS(0x0C071612u);
	r0 = r1;  /* 0C071612 mov Rm,Rn */
	r15 = r14;  /* 0C071614 mov Rm,Rn */
	IF(0x0C071616u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C071616 rts */
}

/* FUN_0c071630 */
void blk_f_0C071630(sh3_t *c)
{
	LOCALS;
L_0C071630: BLKS(0x0C071630u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C071632u, 1);  /* 0C071630 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C071632 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C071636u, 2);  /* 0C071634 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C071636 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07163Au, 2);  /* 0C071638 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C07163A mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07163Eu, 2);  /* 0C07163C mov.l Rm,@-Rn */
	r10 = 0xC29D196u; UPD(0x0C071640u, 1);  /* 0C07163E mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C071640 mov Rm,Rn */
	IF(0x0C071642u); ;  /* 0C071642 nop */
	UPD(0x0C071644u, 2);
L_0C071644: BLKS(0x0C071644u);
	r6 = 0xC2975F8u; UPD(0x0C071646u, 1);  /* 0C071644 mov.l @(disp,pc),Rn */
	r7 = 0xC3C53EAu; UPD(0x0C071648u, 1);  /* 0C071646 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C071648 add Rm,Rn */
	r3 = 0xC2860B2u; UPD(0x0C07164Cu, 2);  /* 0C07164A mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C07164C add Rm,Rn */
	r9 = 0xC3C3FD0u; UPD(0x0C071650u, 2);  /* 0C07164E mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C071650 add Rm,Rn */
	r2 = 0xC22E260u; UPD(0x0C071654u, 2);  /* 0C071652 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C071654 add Rm,Rn */
	r5 = 0xC28EDBCu; UPD(0x0C071658u, 2);  /* 0C071656 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C071658 add Rm,Rn */
	r5 += r0;  /* 0C07165A add Rm,Rn */
	W16(r9, r4); UPD(0x0C07165Eu, 3);  /* 0C07165C mov.w Rm,@Rn */
	W16(r3, r4); UPD(0x0C071660u, 1);  /* 0C07165E mov.w Rm,@Rn */
	W16(r7, r4); UPD(0x0C071662u, 1);  /* 0C071660 mov.w Rm,@Rn */
	W16(r6, r4); UPD(0x0C071664u, 1);  /* 0C071662 mov.w Rm,@Rn */
	W16(r2, r4); UPD(0x0C071666u, 1);  /* 0C071664 mov.w Rm,@Rn */
	W16(r5, r4); UPD(0x0C071668u, 1);  /* 0C071666 mov.w Rm,@Rn */
	r2 = r8;  /* 0C071668 mov Rm,Rn */
	r9 = 0xC2B07BCu; UPD(0x0C07166Cu, 2);  /* 0C07166A mov.l @(disp,pc),Rn */
	r5 = r0;  /* 0C07166C mov Rm,Rn */
	r6 = 0xC238070u; UPD(0x0C071670u, 2);  /* 0C07166E mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C071670 add #imm,Rn */
	r7 = 0xC238030u; UPD(0x0C071674u, 2);  /* 0C071672 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C071674 add Rm,Rn */
	r3 = 0xC29CF40u; UPD(0x0C071678u, 2);  /* 0C071676 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C071678 add Rm,Rn */
	r1 = 0xC28F616u; UPD(0x0C07167Cu, 2);  /* 0C07167A mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C07167C add Rm,Rn */
	r1 += r0;  /* 0C07167E add Rm,Rn */
	r8 = (u32)(s32)(s8)r2;  /* 0C071680 exts.b Rm,Rn */
	IF(0x0C071682u); W16(r0 + r10, r4); UPD(0x0C071684u, 4);  /* 0C071682 mov.w Rm,@(r0,Rn) */
	r5 += r9;  /* 0C071684 add Rm,Rn */
	r2 = 0x17u;  /* 0C071686 mov #imm,Rn */
	W16(r1, r4); UPD(0x0C07168Au, 3);  /* 0C071688 mov.w Rm,@Rn */
	r0 += 0x2u;  /* 0C07168A add #imm,Rn */
	W16(r3, r4); UPD(0x0C07168Eu, 2);  /* 0C07168C mov.w Rm,@Rn */
	T = (s32)r8 > (s32)r2;  /* 0C07168E cmp/gt Rm,Rn */
	W16(r7, r4); UPD(0x0C071692u, 2);  /* 0C071690 mov.w Rm,@Rn */
	W16(r6, r4); UPD(0x0C071694u, 1);  /* 0C071692 mov.w Rm,@Rn */
	{ u32 c_ = !T; W16(r5, r4); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C071644u, 3); goto L_0C071644; } UPD(0x0C071698u, 1); goto L_0C071698; }  /* 0C071694 bf/s */
L_0C071698: BLKS(0x0C071698u);
	r0 = r9;  /* 0C071698 mov Rm,Rn */
	r0 += 0x28u;  /* 0C07169A add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r0); UPD(0x0C07169Eu, 3);  /* 0C07169C mov.w @Rm,Rn */
	r4 += 0x1u;  /* 0C07169E add #imm,Rn */
	W16(r0, r4); UPD(0x0C0716A2u, 2);  /* 0C0716A0 mov.w Rm,@Rn */
	r15 = r14;  /* 0C0716A2 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0716A6u, 2);  /* 0C0716A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0716A8u, 1);  /* 0C0716A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0716AAu, 1);  /* 0C0716A8 mov.l @Rm+,Rn */
	IF(0x0C0716AAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0716AA rts */
}

/* FUN_0c0716e0 */
void blk_f_0C0716E0(sh3_t *c)
{
	LOCALS;
L_0C0716E0: BLKS(0x0C0716E0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0716E2u, 1);  /* 0C0716E0 mov.l Rm,@-Rn */
	r7 = 0x0u;  /* 0C0716E2 mov #imm,Rn */
	r3 = 0xC29D702u; UPD(0x0C0716E6u, 2);  /* 0C0716E4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0716E6 mov Rm,Rn */
	W8(r3, r7); UPD(0x0C0716EAu, 2);  /* 0C0716E8 mov.b Rm,@Rn */
	r1 = 0x7u;  /* 0C0716EA mov #imm,Rn */
	r2 = 0xC29D6CEu; UPD(0x0C0716EEu, 2);  /* 0C0716EC mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0716EE mov #imm,Rn */
	W16(r2, r3); UPD(0x0C0716F2u, 2);  /* 0C0716F0 mov.w Rm,@Rn */
	r0 = 0xC29D42Eu; UPD(0x0C0716F4u, 1);  /* 0C0716F2 mov.l @(disp,pc),Rn */
	r6 = 0xC29D462u; UPD(0x0C0716F6u, 1);  /* 0C0716F4 mov.l @(disp,pc),Rn */
	W16(r0, r3); UPD(0x0C0716F8u, 1);  /* 0C0716F6 mov.w Rm,@Rn */
	r5 = 0xC29D6D4u; UPD(0x0C0716FAu, 1);  /* 0C0716F8 mov.l @(disp,pc),Rn */
	W8(r6, r7); UPD(0x0C0716FCu, 1);  /* 0C0716FA mov.b Rm,@Rn */
	W32(r5 + 0x34u, r3); UPD(0x0C0716FEu, 1);  /* 0C0716FC mov.l Rm,@(disp,Rn) */
	r4 = 0xC29D454u; UPD(0x0C071700u, 1);  /* 0C0716FE mov.l @(disp,pc),Rn */
	r0 = 0xC297498u; UPD(0x0C071702u, 1);  /* 0C071700 mov.l @(disp,pc),Rn */
	W32(r4 + 0x14u, r3); UPD(0x0C071704u, 1);  /* 0C071702 mov.l Rm,@(disp,Rn) */
	W32(r0, r3); UPD(0x0C071706u, 1);  /* 0C071704 mov.l Rm,@Rn */
	r2 = 0xC22E028u; UPD(0x0C071708u, 1);  /* 0C071706 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C071708 mov #imm,Rn */
	IF(0x0C07170Au); ;  /* 0C07170A nop */
	UPD(0x0C07170Cu, 2);
L_0C07170C: BLKS(0x0C07170Cu);
	W32(r2, r3); UPD(0x0C07170Eu, 1);  /* 0C07170C mov.l Rm,@Rn */
	IF(0x0C07170Eu); r1 -= 1; T = r1 == 0;  /* 0C07170E dt Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07170Cu, 4); goto L_0C07170C; } goto L_0C071714; }  /* 0C071710 bf/s */
L_0C071714: BLKS(0x0C071714u);
	r15 = r14;  /* 0C071714 mov Rm,Rn */
	IF(0x0C071716u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C071716 rts */
}

/* FUN_0c071740 */
void blk_f_0C071740(sh3_t *c)
{
	LOCALS;
L_0C071740: BLKS(0x0C071740u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C071742u, 1);  /* 0C071740 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C071742 exts.w Rm,Rn */
	r0 = 0xC0u; UPD(0x0C071746u, 2);  /* 0C071744 mov.w @(disp,pc),Rn */
	r7 = 0xC28EDFCu; UPD(0x0C071748u, 1);  /* 0C071746 mov.l @(disp,pc),Rn */
	T = (s32)r4 > (s32)r0;  /* 0C071748 cmp/gt Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C071778u, 4); goto L_0C071778; } goto L_0C07174E; }  /* 0C07174A bt/s */
L_0C07174E: BLKS(0x0C07174Eu);
	r0 = 0xC2289ECu; UPD(0x0C071750u, 2);  /* 0C07174E mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C071750 mov #imm,Rn */
	r5 = 0xBFu; UPD(0x0C071754u, 2);  /* 0C071752 mov.w @(disp,pc),Rn */
	r3 = 0xC286578u; UPD(0x0C071756u, 1);  /* 0C071754 mov.l @(disp,pc),Rn */
	r6 = 0xB4u; UPD(0x0C071758u, 1);  /* 0C071756 mov.w @(disp,pc),Rn */
L_0C071758: BLKS(0x0C071758u);
	r1 = R32(r3); UPD(0x0C07175Au, 1);  /* 0C071758 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C07175A tst Rm,Rn */
	{ u32 c_ = !T; r3 += r6; /* slot add Rm,Rn */ if (c_) { UPD(0x0C07176Eu, 4); goto L_0C07176E; } goto L_0C071760; }  /* 0C07175C bf/s */
L_0C071760: BLKS(0x0C071760u);
	r1 = r4;  /* 0C071760 mov Rm,Rn */
	W16(r7, r2); UPD(0x0C071764u, 3);  /* 0C071762 mov.w Rm,@Rn */
	r1 += 0xFFFFFFFFu;  /* 0C071764 add #imm,Rn */
	r4 = (u32)(s32)(s16)r1;  /* 0C071766 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C071768 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C071780u, 6); goto L_0C071780; } UPD(0x0C07176Eu, 1); goto L_0C07176E; }  /* 0C07176A bt/s */
L_0C07176E: BLKS(0x0C07176Eu);
	r1 = r2;  /* 0C07176E mov Rm,Rn */
	r1 += 0x1u;  /* 0C071770 add #imm,Rn */
	r2 = (u32)(s32)(s16)r1;  /* 0C071772 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r5;  /* 0C071774 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C071758u, 7); goto L_0C071758; }  /* 0C071776 bf */
L_0C071778: BLKS(0x0C071778u);
	r0 = 0x0u;  /* 0C071778 mov #imm,Rn */
	UPD(0x0C07177Au, 1);
L_0C07177A: BLKS(0x0C07177Au);
	r15 = r14;  /* 0C07177A mov Rm,Rn */
	IF(0x0C07177Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C07177C rts */
L_0C071780: BLKS(0x0C071780u);
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C071782u, 1);  /* 0C071780 mov.w @Rm,Rn */
	r2 += 0x1u;  /* 0C071782 add #imm,Rn */
	W16(r0, r2); UPD(0x0C071786u, 2);  /* 0C071784 mov.w Rm,@Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C07177Au, 3); goto L_0C07177A; }  /* 0C071786 bra */
}

/* FUN_0c0717a0 */
void blk_f_0C0717A0(sh3_t *c)
{
	LOCALS;
L_0C0717A0: BLKS(0x0C0717A0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0717A2u, 1);  /* 0C0717A0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0717A2 exts.w Rm,Rn */
	r0 = 0x100u; UPD(0x0C0717A6u, 2);  /* 0C0717A4 mov.w @(disp,pc),Rn */
	r7 = 0xC28EDFCu; UPD(0x0C0717A8u, 1);  /* 0C0717A6 mov.l @(disp,pc),Rn */
	T = (s32)r4 > (s32)r0;  /* 0C0717A8 cmp/gt Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0717D8u, 4); goto L_0C0717D8; } goto L_0C0717AE; }  /* 0C0717AA bt/s */
L_0C0717AE: BLKS(0x0C0717AEu);
	r5 = 0xC2380C4u; UPD(0x0C0717B0u, 2);  /* 0C0717AE mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0717B0 mov #imm,Rn */
	r6 = 0xFFu; UPD(0x0C0717B4u, 2);  /* 0C0717B2 mov.w @(disp,pc),Rn */
	r3 = 0xC297B40u; UPD(0x0C0717B6u, 1);  /* 0C0717B4 mov.l @(disp,pc),Rn */
	IF(0x0C0717B6u); ;  /* 0C0717B6 nop */
	UPD(0x0C0717B8u, 1);
L_0C0717B8: BLKS(0x0C0717B8u);
	r0 = R32(r3); UPD(0x0C0717BAu, 1);  /* 0C0717B8 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0717BA tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0717CEu, 4); goto L_0C0717CE; } goto L_0C0717C0; }  /* 0C0717BC bf/s */
L_0C0717C0: BLKS(0x0C0717C0u);
	r0 = r4;  /* 0C0717C0 mov Rm,Rn */
	W16(r7, r2); UPD(0x0C0717C4u, 3);  /* 0C0717C2 mov.w Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0717C4 add #imm,Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C0717C6 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0717C8 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0717E0u, 6); goto L_0C0717E0; } UPD(0x0C0717CEu, 1); goto L_0C0717CE; }  /* 0C0717CA bt/s */
L_0C0717CE: BLKS(0x0C0717CEu);
	r0 = r2;  /* 0C0717CE mov Rm,Rn */
	r0 += 0x1u;  /* 0C0717D0 add #imm,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C0717D2 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0717D4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0717B8u, 7); goto L_0C0717B8; }  /* 0C0717D6 bf */
L_0C0717D8: BLKS(0x0C0717D8u);
	r0 = 0x0u;  /* 0C0717D8 mov #imm,Rn */
	UPD(0x0C0717DAu, 1);
L_0C0717DA: BLKS(0x0C0717DAu);
	r15 = r14;  /* 0C0717DA mov Rm,Rn */
	IF(0x0C0717DCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0717DC rts */
L_0C0717E0: BLKS(0x0C0717E0u);
	r2 = (u32)(s32)(s16)R16(r5); UPD(0x0C0717E2u, 1);  /* 0C0717E0 mov.w @Rm,Rn */
	r0 = 0x1u;  /* 0C0717E2 mov #imm,Rn */
	r2 += 0x1u;  /* 0C0717E4 add #imm,Rn */
	{ W16(r5, r2); /* slot mov.w Rm,@Rn */ UPD(0x0C0717DAu, 5); goto L_0C0717DA; }  /* 0C0717E6 bra */
}

/* FUN_0c071850 */
void blk_f_0C071850(sh3_t *c)
{
	LOCALS;
L_0C071850: BLKS(0x0C071850u);
	r0 = 0x3FFu; UPD(0x0C071852u, 1);  /* 0C071850 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C071852 exts.w Rm,Rn */
	T = (s32)r0 >= (s32)r5;  /* 0C071854 cmp/ge Rm,Rn */
	IF(0x0C071856u); r0 = T;  /* 0C071856 movt Rn */
	r6 = (u32)(s32)(s16)r6;  /* 0C071858 exts.w Rm,Rn */
	r3 = 0x20u;  /* 0C07185A mov #imm,Rn */
	T = (s32)r3 >= (s32)r6;  /* 0C07185C cmp/ge Rm,Rn */
	IF(0x0C07185Eu); r2 = T;  /* 0C07185E movt Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C071862u, 8);  /* 0C071860 mov.l Rm,@-Rn */
	r0 &= r2;  /* 0C071862 and Rm,Rn */
	r7 = 0xC28EDFCu; UPD(0x0C071866u, 2);  /* 0C071864 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C071866 mov Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C071868 tst Rm,Rn */
	{ u32 c_ = T; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0718A2u, 5); goto L_0C0718A2; } goto L_0C07186E; }  /* 0C07186A bt/s */
L_0C07186E: BLKS(0x0C07186Eu);
	r3 = 0x0u;  /* 0C07186E mov #imm,Rn */
	T = (s32)r3 >= (s32)r6;  /* 0C071870 cmp/ge Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0718A4u, 6); goto L_0C0718A4; } goto L_0C071876; }  /* 0C071872 bt/s */
L_0C071876: BLKS(0x0C071876u);
	r2 = 0x680u; UPD(0x0C071878u, 2);  /* 0C071876 mov.w @(disp,pc),Rn */
	IF(0x0C071878u); MACL = r4 * r2;  /* 0C071878 mul.l Rm,Rn */
	r4 = 0xC2A6D9Cu; UPD(0x0C07187Cu, 3);  /* 0C07187A mov.l @(disp,pc),Rn */
	IF(0x0C07187Cu); r2 = MACL;  /* 0C07187C sts macl,Rn */
	r2 += r4;  /* 0C07187E add Rm,Rn */
	UPD(0x0C071880u, 2);
L_0C071880: BLKS(0x0C071880u);
	r0 = R32(r2); UPD(0x0C071882u, 1);  /* 0C071880 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C071882 tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0x34u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C071898u, 4); goto L_0C071898; } goto L_0C071888; }  /* 0C071884 bf/s */
L_0C071888: BLKS(0x0C071888u);
	r4 = r5;  /* 0C071888 mov Rm,Rn */
	W16(r7, r3); UPD(0x0C07188Cu, 3);  /* 0C07188A mov.w Rm,@Rn */
	r4 += 0xFFFFFFFFu;  /* 0C07188C add #imm,Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C07188E exts.w Rm,Rn */
	r7 += 0x2u;  /* 0C071890 add #imm,Rn */
	T = (r5 & r5) == 0;  /* 0C071892 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0718A4u, 7); goto L_0C0718A4; } UPD(0x0C071898u, 1); goto L_0C071898; }  /* 0C071894 bt/s */
L_0C071898: BLKS(0x0C071898u);
	r0 = r3;  /* 0C071898 mov Rm,Rn */
	r0 += 0x1u;  /* 0C07189A add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C07189C exts.w Rm,Rn */
	T = (s32)r3 >= (s32)r6;  /* 0C07189E cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C071880u, 7); goto L_0C071880; }  /* 0C0718A0 bf */
L_0C0718A2: BLKS(0x0C0718A2u);
	r0 = 0x0u;  /* 0C0718A2 mov #imm,Rn */
	UPD(0x0C0718A4u, 1);
L_0C0718A4: BLKS(0x0C0718A4u);
	r15 = r14;  /* 0C0718A4 mov Rm,Rn */
	IF(0x0C0718A6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0718A6 rts */
}

/* FUN_0c0718c0 */
void blk_f_0C0718C0(sh3_t *c)
{
	LOCALS;
L_0C0718C0: BLKS(0x0C0718C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0718C2u, 1);  /* 0C0718C0 mov.l Rm,@-Rn */
	r0 = 0x10u;  /* 0C0718C2 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0718C6u, 2);  /* 0C0718C4 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r5;  /* 0C0718C6 exts.w Rm,Rn */
	r7 = (u32)(s32)(s16)r7;  /* 0C0718C8 exts.w Rm,Rn */
	T = (s32)r7 > (s32)r0;  /* 0C0718CA cmp/gt Rm,Rn */
	r5 = 0xC28EDFCu; UPD(0x0C0718CEu, 4);  /* 0C0718CC mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0718CE mov Rm,Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0718D0 exts.w Rm,Rn */
	r6 = (u32)(s32)(s16)r6;  /* 0C0718D2 exts.w Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07191Au, 6); goto L_0C07191A; } goto L_0C0718D8; }  /* 0C0718D4 bt/s */
L_0C0718D8: BLKS(0x0C0718D8u);
	r0 = 0x3FFu; UPD(0x0C0718DAu, 2);  /* 0C0718D8 mov.w @(disp,pc),Rn */
	T = (s32)r6 > (s32)r0;  /* 0C0718DA cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07191Au, 4); goto L_0C07191A; } goto L_0C0718E0; }  /* 0C0718DC bt/s */
L_0C0718E0: BLKS(0x0C0718E0u);
	r3 = 0x0u;  /* 0C0718E0 mov #imm,Rn */
	T = (s32)r3 >= (s32)r7;  /* 0C0718E2 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C07191Au, 6); goto L_0C07191A; }  /* 0C0718E4 bt */
L_0C0718E6: BLKS(0x0C0718E6u);
	r2 = 0x9C0u; UPD(0x0C0718E8u, 1);  /* 0C0718E6 mov.w @(disp,pc),Rn */
	IF(0x0C0718E8u); MACL = r4 * r2;  /* 0C0718E8 mul.l Rm,Rn */
	r0 = 0x340u; UPD(0x0C0718ECu, 3);  /* 0C0718EA mov.w @(disp,pc),Rn */
	IF(0x0C0718ECu); r2 = MACL;  /* 0C0718EC sts macl,Rn */
	IF(0x0C0718EEu); MACL = r8 * r0;  /* 0C0718EE mul.l Rm,Rn */
	r4 = 0xC2380D0u; UPD(0x0C0718F2u, 4);  /* 0C0718F0 mov.l @(disp,pc),Rn */
	IF(0x0C0718F2u); r8 = MACL;  /* 0C0718F2 sts macl,Rn */
	r2 += r8;  /* 0C0718F4 add Rm,Rn */
	r2 += r4;  /* 0C0718F6 add Rm,Rn */
	UPD(0x0C0718F8u, 3);
L_0C0718F8: BLKS(0x0C0718F8u);
	r4 = R32(r2); UPD(0x0C0718FAu, 1);  /* 0C0718F8 mov.l @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0718FA tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0x34u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07190Eu, 4); goto L_0C07190E; } goto L_0C071900; }  /* 0C0718FC bf/s */
L_0C071900: BLKS(0x0C071900u);
	r8 = r6;  /* 0C071900 mov Rm,Rn */
	W16(r5, r3); UPD(0x0C071904u, 3);  /* 0C071902 mov.w Rm,@Rn */
	r8 += 0xFFFFFFFFu;  /* 0C071904 add #imm,Rn */
	r6 = (u32)(s32)(s16)r8;  /* 0C071906 exts.w Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C071908 tst Rm,Rn */
	{ u32 c_ = T; r5 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C071930u, 6); goto L_0C071930; } UPD(0x0C07190Eu, 1); goto L_0C07190E; }  /* 0C07190A bt/s */
L_0C07190E: BLKS(0x0C07190Eu);
	r0 = r3;  /* 0C07190E mov Rm,Rn */
	r0 += 0x1u;  /* 0C071910 add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C071912 exts.w Rm,Rn */
	T = (s32)r3 >= (s32)r7;  /* 0C071914 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0718F8u, 7); goto L_0C0718F8; } UPD(0x0C07191Au, 1); goto L_0C07191A; }  /* 0C071916 bf/s */
L_0C07191A: BLKS(0x0C07191Au);
	r15 = r14;  /* 0C07191A mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07191Eu, 2);  /* 0C07191C mov.l @Rm+,Rn */
	IF(0x0C07191Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07191E rts */
L_0C071930: BLKS(0x0C071930u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C07191Au, 3); goto L_0C07191A; }  /* 0C071930 bra */
}

/* FUN_0c071950 */
void blk_f_0C071950(sh3_t *c)
{
	LOCALS;
L_0C071950: BLKS(0x0C071950u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C071952u, 1);  /* 0C071950 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C071952 exts.w Rm,Rn */
	r0 = 0x20u;  /* 0C071954 mov #imm,Rn */
	r2 = 0xC28EDFCu; UPD(0x0C071958u, 3);  /* 0C071956 mov.l @(disp,pc),Rn */
	T = (s32)r4 > (s32)r0;  /* 0C071958 cmp/gt Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C071986u, 4); goto L_0C071986; } goto L_0C07195E; }  /* 0C07195A bt/s */
L_0C07195E: BLKS(0x0C07195Eu);
	r7 = 0xC3C86B4u; UPD(0x0C071960u, 2);  /* 0C07195E mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C071960 mov #imm,Rn */
	r3 = 0x1Fu;  /* 0C071962 mov #imm,Rn */
	UPD(0x0C071964u, 2);
L_0C071964: BLKS(0x0C071964u);
	IF(0x0C071964u); r5 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C071966u, 1);  /* 0C071964 mov.b @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C071966 tst Rm,Rn */
	{ u32 c_ = !T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07197Eu, 4); goto L_0C07197E; } goto L_0C07196C; }  /* 0C071968 bf/s */
L_0C07196C: BLKS(0x0C07196Cu);
	r6 = r4;  /* 0C07196C mov Rm,Rn */
	W16(r2, r0); UPD(0x0C071970u, 3);  /* 0C07196E mov.w Rm,@Rn */
	r6 += 0xFFFFFFFFu;  /* 0C071970 add #imm,Rn */
	r4 = (u32)(s32)(s16)r6;  /* 0C071972 exts.w Rm,Rn */
	r2 += 0x2u;  /* 0C071974 add #imm,Rn */
	T = (r4 & r4) == 0;  /* 0C071976 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C071988u, 7); goto L_0C071988; } goto L_0C07197C; }  /* 0C071978 bt/s */
L_0C07197C: BLKS(0x0C07197Cu);
	r5 = r0;  /* 0C07197C mov Rm,Rn */
	UPD(0x0C07197Eu, 2);
L_0C07197E: BLKS(0x0C07197Eu);
	r5 += 0x1u;  /* 0C07197E add #imm,Rn */
	r0 = (u32)(s32)(s16)r5;  /* 0C071980 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C071982 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C071964u, 6); goto L_0C071964; }  /* 0C071984 bf */
L_0C071986: BLKS(0x0C071986u);
	r1 = 0x0u;  /* 0C071986 mov #imm,Rn */
	UPD(0x0C071988u, 1);
L_0C071988: BLKS(0x0C071988u);
	r0 = r1;  /* 0C071988 mov Rm,Rn */
	r15 = r14;  /* 0C07198A mov Rm,Rn */
	IF(0x0C07198Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C07198C rts */
}

/* FUN_0c071a20 */
void blk_f_0C071A20(sh3_t *c)
{
	LOCALS;
L_0C071A20: BLKS(0x0C071A20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C071A22u, 1);  /* 0C071A20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C071A24u, 1);  /* 0C071A22 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r6;  /* 0C071A24 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C071A28u, 2);  /* 0C071A26 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C071A2Au, 1);  /* 0C071A28 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r5;  /* 0C071A2A exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C071A2Eu, 2);  /* 0C071A2C mov.l Rm,@-Rn */
	r11 = r7;  /* 0C071A2E mov Rm,Rn */
	r9 = 0xC0C2310u; UPD(0x0C071A32u, 2);  /* 0C071A30 mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C071A32 mov #imm,Rn */
	IF(0x0C071A34u); r15 -= 4; W32(r15, PR); UPD(0x0C071A36u, 2);  /* 0C071A34 sts.l pr,@-Rn */
	IF(0x0C071A36u); { u32 t_ = r9; PR = 0x0C071A3Au; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C071A3Au); }  /* 0C071A36 jsr @Rn */
L_0C071A3A: BLKS(0x0C071A3Au);
	r2 = 0xC1748A0u; UPD(0x0C071A3Cu, 1);  /* 0C071A3A mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C071A3C mov Rm,Rn */
	r0 = r2;  /* 0C071A3E mov Rm,Rn */
	IF(0x0C071A40u); r7 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C071A42u, 3);  /* 0C071A40 mov.b @(r0,Rm),Rn */
	r6 = 0x1Fu;  /* 0C071A42 mov #imm,Rn */
	r5 = r7;  /* 0C071A44 mov Rm,Rn */
	r3 = 0xF0u; UPD(0x0C071A48u, 3);  /* 0C071A46 mov.w @(disp,pc),Rn */
	IF(0x0C071A48u); T = r5 & 1; r5 >>= 1;  /* 0C071A48 shlr Rn */
	r6 &= r7;  /* 0C071A4A and Rm,Rn */
	r5 &= r3;  /* 0C071A4C and Rm,Rn */
	IF(0x0C071A4Eu); r5 <<= 2;  /* 0C071A4E shll2 Rn */
	r6 |= r11;  /* 0C071A50 or Rm,Rn */
	r6 |= r5;  /* 0C071A52 or Rm,Rn */
	r5 = r10;  /* 0C071A54 mov Rm,Rn */
	r1 = 0x5u;  /* 0C071A56 mov #imm,Rn */
	IF(0x0C071A58u); ARG0(0x451Du); { s32 s_ = (s32)r1; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C071A58 shld Rm,Rn */
	r0 = 0xC233728u; UPD(0x0C071A5Cu, 10);  /* 0C071A5A mov.l @(disp,pc),Rn */
	r5 += r8;  /* 0C071A5C add Rm,Rn */
	IF(0x0C071A5Eu); r5 <<= 2;  /* 0C071A5E shll2 Rn */
	r5 += r0;  /* 0C071A60 add Rm,Rn */
	r2 = 0x3000000u; UPD(0x0C071A64u, 4);  /* 0C071A62 mov.l @(disp,pc),Rn */
	r8 = r5;  /* 0C071A64 mov Rm,Rn */
	r0 = 0xB4u; UPD(0x0C071A68u, 2);  /* 0C071A66 mov.w @(disp,pc),Rn */
	r6 |= r2;  /* 0C071A68 or Rm,Rn */
	IF(0x0C071A6Au); W32(r0 + r5, r6); UPD(0x0C071A6Cu, 2);  /* 0C071A6A mov.l Rm,@(r0,Rn) */
	r10 = 0x9u;  /* 0C071A6C mov #imm,Rn */
	r6 += 0x20u;  /* 0C071A6E add #imm,Rn */
	W32(r5 + 0x34u, r6); UPD(0x0C071A72u, 3);  /* 0C071A70 mov.l Rm,@(disp,Rn) */
	r8 += 0x24u;  /* 0C071A72 add #imm,Rn */
	UPD(0x0C071A74u, 1);
L_0C071A74: BLKS(0x0C071A74u);
	IF(0x0C071A74u); { u32 t_ = r9; PR = 0x0C071A78u; r5 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C071A78u); }  /* 0C071A74 jsr @Rn */
L_0C071A78: BLKS(0x0C071A78u);
	r3 = r1;  /* 0C071A78 mov Rm,Rn */
	r1 = 0xC1748ACu; UPD(0x0C071A7Cu, 2);  /* 0C071A7A mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C071A7C tst Rm,Rn */
	{ u32 c_ = T; r4 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C071A84u, 4); goto L_0C071A84; } goto L_0C071A82; }  /* 0C071A7E bt/s */
L_0C071A82: BLKS(0x0C071A82u);
	r1 = 0xC1748A0u; UPD(0x0C071A84u, 2);  /* 0C071A82 mov.l @(disp,pc),Rn */
L_0C071A84: BLKS(0x0C071A84u);
	r0 = r1;  /* 0C071A84 mov Rm,Rn */
	IF(0x0C071A86u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C071A88u, 2);  /* 0C071A86 mov.b @(r0,Rm),Rn */
	r6 = 0x1Fu;  /* 0C071A88 mov #imm,Rn */
	r2 = r1;  /* 0C071A8A mov Rm,Rn */
	r3 = 0xF0u; UPD(0x0C071A8Eu, 3);  /* 0C071A8C mov.w @(disp,pc),Rn */
	IF(0x0C071A8Eu); T = r2 & 1; r2 >>= 1;  /* 0C071A8E shlr Rn */
	r6 &= r1;  /* 0C071A90 and Rm,Rn */
	r2 &= r3;  /* 0C071A92 and Rm,Rn */
	r0 = 0x3000000u; UPD(0x0C071A96u, 4);  /* 0C071A94 mov.l @(disp,pc),Rn */
	r6 |= r11;  /* 0C071A96 or Rm,Rn */
	IF(0x0C071A98u); r2 <<= 2;  /* 0C071A98 shll2 Rn */
	r6 |= r2;  /* 0C071A9A or Rm,Rn */
	r6 |= r0;  /* 0C071A9C or Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C071AA0u, 5);  /* 0C071A9E mov.w @(disp,pc),Rn */
	r10 += 0xFFFFFFFFu;  /* 0C071AA0 add #imm,Rn */
	IF(0x0C071AA2u); W32(r0 + r8, r6); UPD(0x0C071AA4u, 2);  /* 0C071AA2 mov.l Rm,@(r0,Rn) */
	IF(0x0C071AA4u); T = (s32)r10 > 0;  /* 0C071AA4 cmp/pl Rn */
	r6 += 0x20u;  /* 0C071AA6 add #imm,Rn */
	W32(r8 + 0xCu, r6); UPD(0x0C071AAAu, 3);  /* 0C071AA8 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; r8 += 0xFFFFFFFCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C071A74u, 3); goto L_0C071A74; } goto L_0C071AAE; }  /* 0C071AAA bt/s */
L_0C071AAE: BLKS(0x0C071AAEu);
	r15 = r14;  /* 0C071AAE mov Rm,Rn */
	IF(0x0C071AB0u); PR = R32(r15); r15 += 4; UPD(0x0C071AB2u, 3);  /* 0C071AB0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C071AB4u, 1);  /* 0C071AB2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C071AB6u, 1);  /* 0C071AB4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C071AB8u, 1);  /* 0C071AB6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C071ABAu, 1);  /* 0C071AB8 mov.l @Rm+,Rn */
	IF(0x0C071ABAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C071ABA rts */
}

/* FUN_0c071bd0 */
void blk_f_0C071BD0(sh3_t *c)
{
	LOCALS;
L_0C071BD0: BLKS(0x0C071BD0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C071BD2u, 1);  /* 0C071BD0 mov.l Rm,@-Rn */
	r0 = 0xC297489u; UPD(0x0C071BD4u, 1);  /* 0C071BD2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C071BD4 mov Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r0); UPD(0x0C071BD8u, 2);  /* 0C071BD6 mov.b @Rm,Rn */
	r3 = 0xC234BA9u; UPD(0x0C071BDAu, 1);  /* 0C071BD8 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C071BDCu, 1);  /* 0C071BDA mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C071BDC tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C071C26u, 4); goto L_0C071C26; } goto L_0C071BE2; }  /* 0C071BDE bf/s */
L_0C071BE2: BLKS(0x0C071BE2u);
	r5 = 0xC2860B0u; UPD(0x0C071BE4u, 2);  /* 0C071BE2 mov.l @(disp,pc),Rn */
	r4 = 0xC3C8690u; UPD(0x0C071BE6u, 1);  /* 0C071BE4 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C071BE8u, 1);  /* 0C071BE6 mov.b @Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r4); UPD(0x0C071BEAu, 1);  /* 0C071BE8 mov.b @Rm,Rn */
	r6 = r0 & 0xFF;  /* 0C071BEA extu.b Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C071BEC extu.b Rm,Rn */
	T = r6 >= r0;  /* 0C071BEE cmp/hs Rm,Rn */
	r6 = 0xC237C12u; UPD(0x0C071BF2u, 4);  /* 0C071BF0 mov.l @(disp,pc),Rn */
	IF(0x0C071BF2u); r2 = T;  /* 0C071BF2 movt Rn */
	r0 = (u32)(s32)(s16)R16(r6); UPD(0x0C071BF6u, 2);  /* 0C071BF4 mov.w @Rm,Rn */
	r6 = 0xFFFFFFF8u;  /* 0C071BF6 mov #imm,Rn */
	IF(0x0C071BF8u); ARG0(0x406Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C071BF8 shad Rm,Rn */
	r0 &= 0x1u;  /* 0C071BFA and #imm,r0 */
	r0 &= r2;  /* 0C071BFC and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C071BFE tst Rm,Rn */
	if (!T) { UPD(0x0C071C20u, 8); goto L_0C071C20; }  /* 0C071C00 bf */
L_0C071C02: BLKS(0x0C071C02u);
	r0 = r5;  /* 0C071C02 mov Rm,Rn */
	IF(0x0C071C04u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C071C06u, 2);  /* 0C071C04 mov.b @(r0,Rm),Rn */
	r0 = r4;  /* 0C071C06 mov Rm,Rn */
	IF(0x0C071C08u); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C071C0Au, 2);  /* 0C071C08 mov.b @(r0,Rm),Rn */
	r2 = 0xC228BF8u; UPD(0x0C071C0Cu, 1);  /* 0C071C0A mov.l @(disp,pc),Rn */
	r5 = r4 & 0xFF;  /* 0C071C0C extu.b Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C071C10u, 2);  /* 0C071C0E mov.w @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C071C10 extu.b Rm,Rn */
	IF(0x0C071C12u); ARG0(0x406Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C071C12 shad Rm,Rn */
	T = r7 >= r5;  /* 0C071C14 cmp/hs Rm,Rn */
	IF(0x0C071C16u); r4 = T;  /* 0C071C16 movt Rn */
	r0 &= 0x1u;  /* 0C071C18 and #imm,r0 */
	r0 &= r4;  /* 0C071C1A and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C071C1C tst Rm,Rn */
	if (T) { UPD(0x0C071C30u, 10); goto L_0C071C30; }  /* 0C071C1E bt */
L_0C071C20: BLKS(0x0C071C20u);
	r6 = 0x1u;  /* 0C071C20 mov #imm,Rn */
	W8(r3, r6); UPD(0x0C071C24u, 2);  /* 0C071C22 mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C071C24 mov #imm,Rn */
	UPD(0x0C071C26u, 1);
L_0C071C26: BLKS(0x0C071C26u);
	r15 = r14;  /* 0C071C26 mov Rm,Rn */
	IF(0x0C071C28u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C071C28 rts */
L_0C071C30: BLKS(0x0C071C30u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C071C26u, 3); goto L_0C071C26; }  /* 0C071C30 bra */
}

/* FUN_0c071c50 */
void blk_f_0C071C50(sh3_t *c)
{
	LOCALS;
L_0C071C50: BLKS(0x0C071C50u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C071C52u, 1);  /* 0C071C50 mov.l Rm,@-Rn */
	r7 = 0xC2860B0u; UPD(0x0C071C54u, 1);  /* 0C071C52 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C071C54 mov Rm,Rn */
	r6 = 0xC3C8690u; UPD(0x0C071C58u, 2);  /* 0C071C56 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C071C5Au, 1);  /* 0C071C58 mov.b @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C071C5Cu, 1);  /* 0C071C5A mov.b @Rm,Rn */
	r4 = r0 & 0xFF;  /* 0C071C5C extu.b Rm,Rn */
	r2 = 0xC297489u; UPD(0x0C071C60u, 2);  /* 0C071C5E mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C071C60 extu.b Rm,Rn */
	T = r4 >= r0;  /* 0C071C62 cmp/hs Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C071C66u, 3);  /* 0C071C64 mov.b @Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C071C7Au, 3); goto L_0C071C7A; } goto L_0C071C6A; }  /* 0C071C66 bt/s */
L_0C071C6A: BLKS(0x0C071C6Au);
	r0 = r7;  /* 0C071C6A mov Rm,Rn */
	IF(0x0C071C6Cu); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C071C6Eu, 3);  /* 0C071C6C mov.b @(r0,Rm),Rn */
	r0 = r6;  /* 0C071C6E mov Rm,Rn */
	IF(0x0C071C70u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C071C72u, 2);  /* 0C071C70 mov.b @(r0,Rm),Rn */
	r6 = r1 & 0xFF;  /* 0C071C72 extu.b Rm,Rn */
	r3 = r7 & 0xFF;  /* 0C071C74 extu.b Rm,Rn */
	T = r6 >= r3;  /* 0C071C76 cmp/hs Rm,Rn */
	IF(0x0C071C78u); r0 = T;  /* 0C071C78 movt Rn */
	UPD(0x0C071C7Au, 4);
L_0C071C7A: BLKS(0x0C071C7Au);
	r15 = r14;  /* 0C071C7A mov Rm,Rn */
	IF(0x0C071C7Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C071C7C rts */
}

/* FUN_0c071c90 */
void blk_f_0C071C90(sh3_t *c)
{
	LOCALS;
L_0C071C90: BLKS(0x0C071C90u);
	r2 = 0xC297A3Cu; UPD(0x0C071C92u, 1);  /* 0C071C90 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C071C94u, 1);  /* 0C071C92 mov.l Rm,@-Rn */
	r1 = R32(r2); UPD(0x0C071C96u, 1);  /* 0C071C94 mov.l @Rm,Rn */
	T = r1 > r4;  /* 0C071C96 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C071CB0u, 4); goto L_0C071CB0; } goto L_0C071C9C; }  /* 0C071C98 bf/s */
L_0C071C9C: BLKS(0x0C071C9Cu);
	r1 -= r4;  /* 0C071C9C sub Rm,Rn */
	W32(r2, r1); UPD(0x0C071CA0u, 3);  /* 0C071C9E mov.l Rm,@Rn */
L_0C071CA0: BLKS(0x0C071CA0u);
	r15 = r14;  /* 0C071CA0 mov Rm,Rn */
	IF(0x0C071CA2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C071CA2 rts */
L_0C071CB0: BLKS(0x0C071CB0u);
	T = (r1 & r1) == 0;  /* 0C071CB0 tst Rm,Rn */
	if (T) { UPD(0x0C071CA0u, 4); goto L_0C071CA0; }  /* 0C071CB2 bt */
L_0C071CB4: BLKS(0x0C071CB4u);
	r1 = 0x0u;  /* 0C071CB4 mov #imm,Rn */
	{ W32(r2, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C071CA0u, 4); goto L_0C071CA0; }  /* 0C071CB6 bra */
}

/* rank_down */
void blk_f_0C071CC0(sh3_t *c)
{
	LOCALS;
L_0C071CC0: BLKS(0x0C071CC0u);
	r3 = 0xC297A3Cu; UPD(0x0C071CC2u, 1);  /* 0C071CC0 mov.l @(disp,pc),Rn */
	r2 = 0xC237C0Cu; UPD(0x0C071CC4u, 1);  /* 0C071CC2 mov.l @(disp,pc),Rn */
	r0 = R32(r3); UPD(0x0C071CC6u, 1);  /* 0C071CC4 mov.l @Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C071CC8u, 1);  /* 0C071CC6 mov.l Rm,@-Rn */
	r0 += r4;  /* 0C071CC8 add Rm,Rn */
	r1 = R32(r2); UPD(0x0C071CCCu, 2);  /* 0C071CCA mov.l @Rm,Rn */
	r14 = r15;  /* 0C071CCC mov Rm,Rn */
	T = r0 > r1;  /* 0C071CCE cmp/hi Rm,Rn */
	{ u32 c_ = !T; W32(r3, r0); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C071CD6u, 5); goto L_0C071CD6; } UPD(0x0C071CD4u, 1); goto L_0C071CD4; }  /* 0C071CD0 bf/s */
L_0C071CD4: BLKS(0x0C071CD4u);
	W32(r3, r1); UPD(0x0C071CD6u, 1);  /* 0C071CD4 mov.l Rm,@Rn */
L_0C071CD6: BLKS(0x0C071CD6u);
	r15 = r14;  /* 0C071CD6 mov Rm,Rn */
	IF(0x0C071CD8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C071CD8 rts */
}

/* FUN_0c071cf0 */
void blk_f_0C071CF0(sh3_t *c)
{
	LOCALS;
L_0C071CF0: BLKS(0x0C071CF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C071CF2u, 1);  /* 0C071CF0 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C071CF2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C071CF6u, 2);  /* 0C071CF4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C071CF8u, 1);  /* 0C071CF6 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C071CF8 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C071CFCu, 2);  /* 0C071CFA mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C071CFC mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C071D00u, 2);  /* 0C071CFE mov.l Rm,@-Rn */
	r0 = 0xC2B1A48u; UPD(0x0C071D02u, 1);  /* 0C071D00 mov.l @(disp,pc),Rn */
	IF(0x0C071D02u); r15 -= 4; W32(r15, PR); UPD(0x0C071D04u, 1);  /* 0C071D02 sts.l pr,@-Rn */
	W8(r0, r1); UPD(0x0C071D06u, 1);  /* 0C071D04 mov.b Rm,@Rn */
	r14 = r15;  /* 0C071D06 mov Rm,Rn */
	UPD(0x0C071D08u, 1);
L_0C071D08: BLKS(0x0C071D08u);
	r5 = 0xC297A40u; UPD(0x0C071D0Au, 1);  /* 0C071D08 mov.l @(disp,pc),Rn */
	r5 += r10;  /* 0C071D0A add Rm,Rn */
	r0 = R32(r5); UPD(0x0C071D0Eu, 2);  /* 0C071D0C mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C071D0E tst Rm,Rn */
	{ u32 c_ = T; r8 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C071D36u, 4); goto L_0C071D36; } goto L_0C071D14; }  /* 0C071D10 bt/s */
L_0C071D14: BLKS(0x0C071D14u);
	r7 = 0xC2B1A48u; UPD(0x0C071D16u, 2);  /* 0C071D14 mov.l @(disp,pc),Rn */
	r5 += 0x8u;  /* 0C071D16 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r7); UPD(0x0C071D1Au, 2);  /* 0C071D18 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C071D1A add #imm,Rn */
	W8(r7, r8); UPD(0x0C071D1Eu, 2);  /* 0C071D1C mov.b Rm,@Rn */
	r6 = 0xC29D728u; UPD(0x0C071D20u, 1);  /* 0C071D1E mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r5); UPD(0x0C071D22u, 1);  /* 0C071D20 mov.w @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r6); UPD(0x0C071D24u, 1);  /* 0C071D22 mov.w @Rm,Rn */
	r3 = r2 & 0xFFFF;  /* 0C071D24 extu.w Rm,Rn */
	T = (s32)r4 > (s32)r3;  /* 0C071D26 cmp/gt Rm,Rn */
	{ u32 c_ = T; r5 += 0xFFFFFFF8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C071D30u, 5); goto L_0C071D30; } goto L_0C071D2C; }  /* 0C071D28 bt/s */
L_0C071D2C: BLKS(0x0C071D2Cu);
	{ r4 = r5; /* slot mov Rm,Rn */ UPD(0x0C071EA0u, 4); goto L_0C071EA0; }  /* 0C071D2C bra */
L_0C071D30: BLKS(0x0C071D30u);
	r11 = 0x0u;  /* 0C071D30 mov #imm,Rn */
	W32(r5, r11); UPD(0x0C071D34u, 2);  /* 0C071D32 mov.l Rm,@Rn */
	r8 = r9;  /* 0C071D34 mov Rm,Rn */
	UPD(0x0C071D36u, 1);
L_0C071D36: BLKS(0x0C071D36u);
	r8 += 0x1u;  /* 0C071D36 add #imm,Rn */
	r9 = (u32)(s32)(s16)r8;  /* 0C071D38 exts.w Rm,Rn */
	r3 = 0xFu;  /* 0C071D3A mov #imm,Rn */
	T = (s32)r9 > (s32)r3;  /* 0C071D3C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C071D08u, 7); goto L_0C071D08; } goto L_0C071D42; }  /* 0C071D3E bf/s */
L_0C071D42: BLKS(0x0C071D42u);
	r9 = 0xC22E2BCu; UPD(0x0C071D44u, 2);  /* 0C071D42 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C071D44 mov #imm,Rn */
	W8(r9, r10); UPD(0x0C071D48u, 2);  /* 0C071D46 mov.b Rm,@Rn */
	r9 = 0x0u;  /* 0C071D48 mov #imm,Rn */
	r10 = 0x0u;  /* 0C071D4A mov #imm,Rn */
	UPD(0x0C071D4Cu, 2);
L_0C071D4C: BLKS(0x0C071D4Cu);
	r8 = 0xC286318u; UPD(0x0C071D4Eu, 1);  /* 0C071D4C mov.l @(disp,pc),Rn */
	r8 += r10;  /* 0C071D4E add Rm,Rn */
	r5 = R32(r8); UPD(0x0C071D52u, 2);  /* 0C071D50 mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C071D52 tst Rm,Rn */
	if (T) { UPD(0x0C071D74u, 4); goto L_0C071D74; }  /* 0C071D54 bt */
L_0C071D56: BLKS(0x0C071D56u);
	r3 = R32(r8 + 0x34u); UPD(0x0C071D58u, 1);  /* 0C071D56 mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C071D58 tst Rm,Rn */
	if (T) { UPD(0x0C071D74u, 4); goto L_0C071D74; }  /* 0C071D5A bt */
L_0C071D5C: BLKS(0x0C071D5Cu);
	r11 = 0xC22E2BCu; UPD(0x0C071D5Eu, 1);  /* 0C071D5C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C071D60u, 1);  /* 0C071D5E mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C071D60 add #imm,Rn */
	W8(r11, r0); UPD(0x0C071D64u, 2);  /* 0C071D62 mov.b Rm,@Rn */
	r7 = R32(r8 + 0x8u); UPD(0x0C071D66u, 1);  /* 0C071D64 mov.l @(disp,Rm),Rn */
	r11 = 0xC3C43CCu; UPD(0x0C071D68u, 1);  /* 0C071D66 mov.l @(disp,pc),Rn */
	r2 = (r7 >> 16) | (r7 << 16);  /* 0C071D68 swap.w Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C071D6Cu, 2);  /* 0C071D6A mov.w @Rm,Rn */
	r6 = (u32)(s32)(s16)r2;  /* 0C071D6C exts.w Rm,Rn */
	T = (s32)r6 > (s32)r4;  /* 0C071D6E cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r11, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C071E60u, 5); goto L_0C071E60; } UPD(0x0C071D74u, 1); goto L_0C071D74; }  /* 0C071D70 bt/s */
L_0C071D74: BLKS(0x0C071D74u);
	r9 += 0x1u;  /* 0C071D74 add #imm,Rn */
	UPD(0x0C071D76u, 1);
L_0C071D76: BLKS(0x0C071D76u);
	r8 = 0x7u;  /* 0C071D76 mov #imm,Rn */
	T = (s32)r9 > (s32)r8;  /* 0C071D78 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C071D4Cu, 5); goto L_0C071D4C; } goto L_0C071D7E; }  /* 0C071D7A bf/s */
L_0C071D7E: BLKS(0x0C071D7Eu);
	r2 = 0xC2860F2u; UPD(0x0C071D80u, 2);  /* 0C071D7E mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C071D82u, 1);  /* 0C071D80 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C071D82 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C071D8Au, 4); goto L_0C071D8A; } goto L_0C071D88; }  /* 0C071D84 bt/s */
L_0C071D88: BLKS(0x0C071D88u);
	W8(r2, r1); UPD(0x0C071D8Au, 2);  /* 0C071D88 mov.b Rm,@Rn */
L_0C071D8A: BLKS(0x0C071D8Au);
	r1 = 0xC234C00u; UPD(0x0C071D8Cu, 1);  /* 0C071D8A mov.l @(disp,pc),Rn */
	r7 = R32(r1); UPD(0x0C071D8Eu, 1);  /* 0C071D8C mov.l @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C071D8E tst Rm,Rn */
	if (T) { UPD(0x0C071DB0u, 4); goto L_0C071DB0; }  /* 0C071D90 bt */
L_0C071D92: BLKS(0x0C071D92u);
	r7 += 0xFFFFFFFFu;  /* 0C071D92 add #imm,Rn */
	W32(r1, r7); UPD(0x0C071D96u, 2);  /* 0C071D94 mov.l Rm,@Rn */
L_0C071D96: BLKS(0x0C071D96u);
	r15 = r14;  /* 0C071D96 mov Rm,Rn */
	IF(0x0C071D98u); PR = R32(r15); r15 += 4; UPD(0x0C071D9Au, 2);  /* 0C071D98 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C071D9Cu, 1);  /* 0C071D9A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C071D9Eu, 1);  /* 0C071D9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C071DA0u, 1);  /* 0C071D9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C071DA2u, 1);  /* 0C071DA0 mov.l @Rm+,Rn */
	IF(0x0C071DA2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C071DA2 rts */
L_0C071DB0: BLKS(0x0C071DB0u);
	r9 = 0xC2ABAA4u; UPD(0x0C071DB2u, 1);  /* 0C071DB0 mov.l @(disp,pc),Rn */
	r5 = R32(r9); UPD(0x0C071DB4u, 1);  /* 0C071DB2 mov.l @Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C071DB6u, 1);  /* 0C071DB4 mov.w @Rm,Rn */
	r2 = (u32)(s32)(s16)r6;  /* 0C071DB6 exts.w Rm,Rn */
	IF(0x0C071DB8u); T = (s32)r2 >= 0;  /* 0C071DB8 cmp/pz Rn */
	if (!T) { UPD(0x0C071E20u, 5); goto L_0C071E20; }  /* 0C071DBA bf */
L_0C071DBC: BLKS(0x0C071DBCu);
	r11 = 0xC29D728u; UPD(0x0C071DBEu, 1);  /* 0C071DBC mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)R16(r11); UPD(0x0C071DC0u, 1);  /* 0C071DBE mov.w @Rm,Rn */
	T = (s32)r10 >= (s32)r2;  /* 0C071DC0 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C071D96u, 4); goto L_0C071D96; }  /* 0C071DC2 bf */
L_0C071DC4: BLKS(0x0C071DC4u);
	r9 = 0xC2ABAA4u; UPD(0x0C071DC6u, 1);  /* 0C071DC4 mov.l @(disp,pc),Rn */
	r8 = R32(r9); UPD(0x0C071DC8u, 1);  /* 0C071DC6 mov.l @Rm,Rn */
	r3 = r8;  /* 0C071DC8 mov Rm,Rn */
	r3 += 0x2u;  /* 0C071DCA add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C071DCEu, 3);  /* 0C071DCC mov.w @Rm+,Rn */
	r6 = 0xC2460ACu; UPD(0x0C071DD0u, 1);  /* 0C071DCE mov.l @(disp,pc),Rn */
	r7 = r0 & 0xFFFF;  /* 0C071DD0 extu.w Rm,Rn */
	r4 = 0xFEFFu; UPD(0x0C071DD4u, 2);  /* 0C071DD2 mov.l @(disp,pc),Rn */
	W16(r6, r0); UPD(0x0C071DD6u, 1);  /* 0C071DD4 mov.w Rm,@Rn */
	T = r7 > r4;  /* 0C071DD6 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W32(r9, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C071E00u, 4); goto L_0C071E00; } UPD(0x0C071DDCu, 1); goto L_0C071DDC; }  /* 0C071DD8 bf/s */
L_0C071DDC: BLKS(0x0C071DDCu);
	r7 = 0xC175610u; UPD(0x0C071DDEu, 1);  /* 0C071DDC mov.l @(disp,pc),Rn */
	r0 = r0 & 0xFF;  /* 0C071DDE extu.b Rm,Rn */
	IF(0x0C071DE0u); r0 <<= 2;  /* 0C071DE0 shll2 Rn */
	IF(0x0C071DE2u); r10 = R32(r0 + r7); UPD(0x0C071DE4u, 3);  /* 0C071DE2 mov.l @(r0,Rm),Rn */
	IF(0x0C071DE4u); { u32 t_ = r10; PR = 0x0C071DE8u; IF(0x0C071DE6u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C071DE8u); }  /* 0C071DE4 jsr @Rn */
L_0C071DE8: BLKS(0x0C071DE8u);
	T = (r0 & r0) == 0;  /* 0C071DE8 tst Rm,Rn */
	UPD(0x0C071DEAu, 1);
L_0C071DEA: BLKS(0x0C071DEAu);
	if (!T) { UPD(0x0C071D96u, 3); goto L_0C071D96; }  /* 0C071DEA bf */
L_0C071DEC: BLKS(0x0C071DECu);
	W32(r9, r8); UPD(0x0C071DEEu, 1);  /* 0C071DEC mov.l Rm,@Rn */
	{ IF(0x0C071DF0u); ; /* slot nop */ UPD(0x0C071D96u, 3); goto L_0C071D96; }  /* 0C071DEE bra */
L_0C071E00: BLKS(0x0C071E00u);
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r1 = v_; } UPD(0x0C071E02u, 1);  /* 0C071E00 mov.w @Rm+,Rn */
	IF(0x0C071E02u); r7 <<= 2;  /* 0C071E02 shll2 Rn */
	r0 = 0xC237C08u; UPD(0x0C071E06u, 2);  /* 0C071E04 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C071E08u, 1);  /* 0C071E06 mov.w Rm,@Rn */
	W32(r9, r3); UPD(0x0C071E0Au, 1);  /* 0C071E08 mov.l Rm,@Rn */
	r0 = r7;  /* 0C071E0A mov Rm,Rn */
	r11 = 0xC1756B0u; UPD(0x0C071E0Eu, 2);  /* 0C071E0C mov.l @(disp,pc),Rn */
	IF(0x0C071E0Eu); r3 = R32(r0 + r11); UPD(0x0C071E10u, 1);  /* 0C071E0E mov.l @(r0,Rm),Rn */
	IF(0x0C071E10u); { u32 t_ = r3; PR = 0x0C071E14u; IF(0x0C071E12u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C071E14u); }  /* 0C071E10 jsr @Rn */
L_0C071E14: BLKS(0x0C071E14u);
	{ T = (r0 & r0) == 0; /* slot tst Rm,Rn */ UPD(0x0C071DEAu, 3); goto L_0C071DEA; }  /* 0C071E14 bra */
L_0C071E20: BLKS(0x0C071E20u);
	r4 = 0xC237C10u; UPD(0x0C071E22u, 1);  /* 0C071E20 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r4); UPD(0x0C071E24u, 1);  /* 0C071E22 mov.w @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C071E24 tst Rm,Rn */
	if (!T) { UPD(0x0C071E50u, 4); goto L_0C071E50; }  /* 0C071E26 bf */
L_0C071E28: BLKS(0x0C071E28u);
	r3 = 0xC29D728u; UPD(0x0C071E2Au, 1);  /* 0C071E28 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C071E2Cu, 1);  /* 0C071E2A mov.w @Rm,Rn */
	W16(r4, r1); UPD(0x0C071E2Eu, 1);  /* 0C071E2C mov.w Rm,@Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C071E30u, 1);  /* 0C071E2E mov.w @Rm,Rn */
L_0C071E30: BLKS(0x0C071E30u);
	r5 = 0x7FFFu; UPD(0x0C071E32u, 1);  /* 0C071E30 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r1;  /* 0C071E32 exts.w Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C071E36u, 2);  /* 0C071E34 mov.w @Rm,Rn */
	r5 &= r6;  /* 0C071E36 and Rm,Rn */
	r0 += r5;  /* 0C071E38 add Rm,Rn */
	T = (s32)r2 >= (s32)r0;  /* 0C071E3A cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C071D96u, 6); goto L_0C071D96; }  /* 0C071E3C bf */
L_0C071E3E: BLKS(0x0C071E3Eu);
	W16(r4, r7); UPD(0x0C071E40u, 1);  /* 0C071E3E mov.w Rm,@Rn */
	{ IF(0x0C071E42u); ; /* slot nop */ UPD(0x0C071DC4u, 3); goto L_0C071DC4; }  /* 0C071E40 bra */
L_0C071E50: BLKS(0x0C071E50u);
	r3 = 0xC29D728u; UPD(0x0C071E52u, 1);  /* 0C071E50 mov.l @(disp,pc),Rn */
	{ IF(0x0C071E54u); ; /* slot nop */ UPD(0x0C071E30u, 3); goto L_0C071E30; }  /* 0C071E52 bra */
L_0C071E60: BLKS(0x0C071E60u);
	r4 = r3;  /* 0C071E60 mov Rm,Rn */
	r4 += 0x2u;  /* 0C071E62 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r5 = v_; } UPD(0x0C071E66u, 3);  /* 0C071E64 mov.w @Rm+,Rn */
	r3 = 0xC2460ACu; UPD(0x0C071E68u, 1);  /* 0C071E66 mov.l @(disp,pc),Rn */
	r0 = 0xC2B1811u; UPD(0x0C071E6Au, 1);  /* 0C071E68 mov.l @(disp,pc),Rn */
	W16(r3, r5); UPD(0x0C071E6Cu, 1);  /* 0C071E6A mov.w Rm,@Rn */
	W8(r0, r9); UPD(0x0C071E6Eu, 1);  /* 0C071E6C mov.b Rm,@Rn */
	r7 = 0xC237C08u; UPD(0x0C071E70u, 1);  /* 0C071E6E mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFFFF;  /* 0C071E70 extu.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r2 = v_; } UPD(0x0C071E74u, 2);  /* 0C071E72 mov.w @Rm+,Rn */
	IF(0x0C071E74u); r0 <<= 2;  /* 0C071E74 shll2 Rn */
	r3 = 0xC1756B0u; UPD(0x0C071E78u, 2);  /* 0C071E76 mov.l @(disp,pc),Rn */
	W16(r7, r2); UPD(0x0C071E7Au, 1);  /* 0C071E78 mov.w Rm,@Rn */
	IF(0x0C071E7Au); r0 = R32(r0 + r3); UPD(0x0C071E7Cu, 1);  /* 0C071E7A mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r6 = v_; } UPD(0x0C071E7Eu, 1);  /* 0C071E7C mov.w @Rm+,Rn */
	r1 = 0xC3C43C6u; UPD(0x0C071E80u, 1);  /* 0C071E7E mov.l @(disp,pc),Rn */
	W32(r11, r4); UPD(0x0C071E82u, 1);  /* 0C071E80 mov.l Rm,@Rn */
	IF(0x0C071E82u); { u32 t_ = r0; PR = 0x0C071E86u; W16(r1, r6); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLD(t_, 0x0C071E86u); }  /* 0C071E82 jsr @Rn */
L_0C071E86: BLKS(0x0C071E86u);
	T = (r0 & r0) == 0;  /* 0C071E86 tst Rm,Rn */
	if (T) { UPD(0x0C071E8Eu, 4); goto L_0C071E8E; }  /* 0C071E88 bt */
L_0C071E8A: BLKS(0x0C071E8Au);
	r5 = R32(r11); UPD(0x0C071E8Cu, 1);  /* 0C071E8A mov.l @Rm,Rn */
	W32(r8 + 0x34u, r5); UPD(0x0C071E8Eu, 1);  /* 0C071E8C mov.l Rm,@(disp,Rn) */
L_0C071E8E: BLKS(0x0C071E8Eu);
	{ r9 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C071D76u, 3); goto L_0C071D76; }  /* 0C071E8E bra */
L_0C071EA0: BLKS(0x0C071EA0u);
	r5 += 0xAu;  /* 0C071EA0 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r5); UPD(0x0C071EA4u, 2);  /* 0C071EA2 mov.w @Rm,Rn */
	r4 += 0xCu;  /* 0C071EA4 add #imm,Rn */
	r7 = 0xAAAAAAABu; UPD(0x0C071EA8u, 2);  /* 0C071EA6 mov.l @(disp,pc),Rn */
	r8 = r0 & 0xFFFF;  /* 0C071EA8 extu.w Rm,Rn */
	{ u64 r_ = (u64)r8 * (u64)r7; MACH = (u32)(r_ >> 32); MACL = (u32)r_; }  /* 0C071EAA dmulu.l Rm,Rn */
	r11 = 0x55555556u; UPD(0x0C071EAEu, 4);  /* 0C071EAC mov.l @(disp,pc),Rn */
	IF(0x0C071EAEu); r1 = MACH;  /* 0C071EAE sts mach,Rn */
	r8 += r8;  /* 0C071EB0 add Rm,Rn */
	{ s64 r_ = (s64)(s32)r8 * (s64)(s32)r11; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C071EB2 dmuls.l Rm,Rn */
	IF(0x0C071EB4u); T = r1 & 1; r1 >>= 1;  /* 0C071EB4 shlr Rn */
	r0 = r1 & 0xFFFF;  /* 0C071EB6 extu.w Rm,Rn */
	IF(0x0C071EB8u); T = r8 >> 31; r8 <<= 1;  /* 0C071EB8 shll Rn */
	{ u32 a_ = r8, t_ = a_ - r8, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r8 = r_; }  /* 0C071EBA subc Rm,Rn */
	IF(0x0C071EBCu); r11 = MACH;  /* 0C071EBC sts mach,Rn */
	r1 = 0xC297A3Cu; UPD(0x0C071EC0u, 10);  /* 0C071EBE mov.l @(disp,pc),Rn */
	r11 -= r8;  /* 0C071EC0 sub Rm,Rn */
	r8 = R32(r1); UPD(0x0C071EC4u, 2);  /* 0C071EC2 mov.l @Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C071EC6u, 1);  /* 0C071EC4 mov.w @Rm,Rn */
	IF(0x0C071EC6u); r8 >>= 16;  /* 0C071EC6 shlr16 Rn */
	r3 += 0x1u;  /* 0C071EC8 add #imm,Rn */
	IF(0x0C071ECAu); MACL = r11 * r8;  /* 0C071ECA mul.l Rm,Rn */
	W16(r4, r3); UPD(0x0C071ECEu, 5);  /* 0C071ECC mov.w Rm,@Rn */
	r2 = r3 & 0xFFFF;  /* 0C071ECE extu.w Rm,Rn */
	IF(0x0C071ED0u); r3 = MACL;  /* 0C071ED0 sts macl,Rn */
	IF(0x0C071ED2u); r3 >>= 8;  /* 0C071ED2 shlr8 Rn */
	r0 += r3;  /* 0C071ED4 add Rm,Rn */
	T = r2 > r0;  /* 0C071ED6 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r5 += 0xFFFFFFF6u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C071EF8u, 8); goto L_0C071EF8; } goto L_0C071EDC; }  /* 0C071ED8 bf/s */
L_0C071EDC: BLKS(0x0C071EDCu);
	r0 = 0x0u;  /* 0C071EDC mov #imm,Rn */
	W16(r4, r0); UPD(0x0C071EE0u, 3);  /* 0C071EDE mov.w Rm,@Rn */
	r5 += 0x4u;  /* 0C071EE0 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r4 = v_; } UPD(0x0C071EE4u, 2);  /* 0C071EE2 mov.w @Rm+,Rn */
	r7 = 0xC2460ACu; UPD(0x0C071EE6u, 1);  /* 0C071EE4 mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFFFF;  /* 0C071EE6 extu.w Rm,Rn */
	W16(r7, r4); UPD(0x0C071EEAu, 2);  /* 0C071EE8 mov.w Rm,@Rn */
	IF(0x0C071EEAu); r0 <<= 2;  /* 0C071EEA shll2 Rn */
	r11 = (u32)(s32)(s16)R16(r5); UPD(0x0C071EEEu, 2);  /* 0C071EEC mov.w @Rm,Rn */
	r5 = 0xC1756B0u; UPD(0x0C071EF0u, 1);  /* 0C071EEE mov.l @(disp,pc),Rn */
	IF(0x0C071EF0u); r8 = R32(r0 + r5); UPD(0x0C071EF2u, 1);  /* 0C071EF0 mov.l @(r0,Rm),Rn */
	r6 = 0xC237C08u; UPD(0x0C071EF4u, 1);  /* 0C071EF2 mov.l @(disp,pc),Rn */
	IF(0x0C071EF4u); { u32 t_ = r8; PR = 0x0C071EF8u; W16(r6, r11); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLD(t_, 0x0C071EF8u); }  /* 0C071EF4 jsr @Rn */
L_0C071EF8: BLKS(0x0C071EF8u);
	{ r8 = r9; /* slot mov Rm,Rn */ UPD(0x0C071D36u, 3); goto L_0C071D36; }  /* 0C071EF8 bra */
}

void blk_f_0C071F50(sh3_t *c)
{
	LOCALS;
L_0C071F50: BLKS(0x0C071F50u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C071F52u, 1);  /* 0C071F50 mov.l Rm,@-Rn */
	r7 = 0xC3C86E4u; UPD(0x0C071F54u, 1);  /* 0C071F52 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r7); UPD(0x0C071F56u, 1);  /* 0C071F54 mov.w @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C071F56 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C071F70u, 4); goto L_0C071F70; } goto L_0C071F5C; }  /* 0C071F58 bf/s */
L_0C071F5C: BLKS(0x0C071F5Cu);
	r0 = 0xC2ABAA4u; UPD(0x0C071F5Eu, 2);  /* 0C071F5C mov.l @(disp,pc),Rn */
	r1 = R32(r0); UPD(0x0C071F60u, 1);  /* 0C071F5E mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r2 = v_; } UPD(0x0C071F62u, 1);  /* 0C071F60 mov.w @Rm+,Rn */
	W16(r7, r2); UPD(0x0C071F64u, 1);  /* 0C071F62 mov.w Rm,@Rn */
	W32(r0, r1); UPD(0x0C071F66u, 1);  /* 0C071F64 mov.l Rm,@Rn */
L_0C071F66: BLKS(0x0C071F66u);
	r0 = 0x0u;  /* 0C071F66 mov #imm,Rn */
	UPD(0x0C071F68u, 1);
L_0C071F68: BLKS(0x0C071F68u);
	r15 = r14;  /* 0C071F68 mov Rm,Rn */
	IF(0x0C071F6Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C071F6A rts */
L_0C071F70: BLKS(0x0C071F70u);
	r1 += 0xFFFFFFFFu;  /* 0C071F70 add #imm,Rn */
	r0 = r1 & 0xFFFF;  /* 0C071F72 extu.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C071F74 tst Rm,Rn */
	{ u32 c_ = T; W16(r7, r1); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C071FAAu, 6); goto L_0C071FAA; } UPD(0x0C071F7Au, 1); goto L_0C071F7A; }  /* 0C071F76 bt/s */
L_0C071F7A: BLKS(0x0C071F7Au);
	r5 = 0xBFu; UPD(0x0C071F7Cu, 1);  /* 0C071F7A mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C071F7C mov #imm,Rn */
	r2 = 0xC286578u; UPD(0x0C071F80u, 2);  /* 0C071F7E mov.l @(disp,pc),Rn */
	r4 = 0xFFFFFFE7u;  /* 0C071F80 mov #imm,Rn */
	r6 = 0xB4u; UPD(0x0C071F84u, 2);  /* 0C071F82 mov.w @(disp,pc),Rn */
	r7 = 0xFFFFFFFFu;  /* 0C071F84 mov #imm,Rn */
	IF(0x0C071F86u); ;  /* 0C071F86 nop */
	UPD(0x0C071F88u, 2);
L_0C071F88: BLKS(0x0C071F88u);
	r0 = R32(r2); UPD(0x0C071F8Au, 1);  /* 0C071F88 mov.l @Rm,Rn */
	r2 += 0x3Cu;  /* 0C071F8A add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C071F8Eu, 2);  /* 0C071F8C mov.w @Rm,Rn */
	IF(0x0C071F8Eu); ARG0(0x404Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C071F8E shad Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C071F90 tst Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C071F92 negc Rm,Rn */
	r0 &= 0x1u;  /* 0C071F94 and #imm,r0 */
	r0 &= r1;  /* 0C071F96 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C071F98 tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C071F66u, 9); goto L_0C071F66; } goto L_0C071F9E; }  /* 0C071F9A bf/s */
L_0C071F9E: BLKS(0x0C071F9Eu);
	r0 = r3;  /* 0C071F9E mov Rm,Rn */
	r0 += 0x1u;  /* 0C071FA0 add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C071FA2 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C071FA4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += r6; /* slot add Rm,Rn */ if (c_) { UPD(0x0C071F88u, 8); goto L_0C071F88; } UPD(0x0C071FAAu, 1); goto L_0C071FAA; }  /* 0C071FA6 bf/s */
L_0C071FAA: BLKS(0x0C071FAAu);
	r5 = 0xC2ABAA4u; UPD(0x0C071FACu, 1);  /* 0C071FAA mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C071FAC mov #imm,Rn */
	r6 = R32(r5); UPD(0x0C071FB0u, 2);  /* 0C071FAE mov.l @Rm,Rn */
	r0 = 0x1u;  /* 0C071FB0 mov #imm,Rn */
	r3 = 0xC3C86E4u; UPD(0x0C071FB4u, 2);  /* 0C071FB2 mov.l @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C071FB4 add #imm,Rn */
	W32(r5, r6); UPD(0x0C071FB8u, 2);  /* 0C071FB6 mov.l Rm,@Rn */
	{ W16(r3, r4); /* slot mov.w Rm,@Rn */ UPD(0x0C071F68u, 3); goto L_0C071F68; }  /* 0C071FB8 bra */
}

void blk_f_0C071FD0(sh3_t *c)
{
	LOCALS;
L_0C071FD0: BLKS(0x0C071FD0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C071FD2u, 1);  /* 0C071FD0 mov.l Rm,@-Rn */
	r7 = 0xC3C86E4u; UPD(0x0C071FD4u, 1);  /* 0C071FD2 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r7); UPD(0x0C071FD6u, 1);  /* 0C071FD4 mov.w @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C071FD6 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C071FF0u, 4); goto L_0C071FF0; } goto L_0C071FDC; }  /* 0C071FD8 bf/s */
L_0C071FDC: BLKS(0x0C071FDCu);
	r0 = 0xC2ABAA4u; UPD(0x0C071FDEu, 2);  /* 0C071FDC mov.l @(disp,pc),Rn */
	r1 = R32(r0); UPD(0x0C071FE0u, 1);  /* 0C071FDE mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r2 = v_; } UPD(0x0C071FE2u, 1);  /* 0C071FE0 mov.w @Rm+,Rn */
	W16(r7, r2); UPD(0x0C071FE4u, 1);  /* 0C071FE2 mov.w Rm,@Rn */
	W32(r0, r1); UPD(0x0C071FE6u, 1);  /* 0C071FE4 mov.l Rm,@Rn */
L_0C071FE6: BLKS(0x0C071FE6u);
	r0 = 0x0u;  /* 0C071FE6 mov #imm,Rn */
	UPD(0x0C071FE8u, 1);
L_0C071FE8: BLKS(0x0C071FE8u);
	r15 = r14;  /* 0C071FE8 mov Rm,Rn */
	IF(0x0C071FEAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C071FEA rts */
L_0C071FF0: BLKS(0x0C071FF0u);
	r1 += 0xFFFFFFFFu;  /* 0C071FF0 add #imm,Rn */
	r0 = r1 & 0xFFFF;  /* 0C071FF2 extu.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C071FF4 tst Rm,Rn */
	{ u32 c_ = T; W16(r7, r1); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C072030u, 6); goto L_0C072030; } UPD(0x0C071FFAu, 1); goto L_0C071FFA; }  /* 0C071FF6 bt/s */
L_0C071FFA: BLKS(0x0C071FFAu);
	r4 = 0xBFu; UPD(0x0C071FFCu, 1);  /* 0C071FFA mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C071FFC mov #imm,Rn */
	r3 = 0xC286578u; UPD(0x0C072000u, 2);  /* 0C071FFE mov.l @(disp,pc),Rn */
	r7 = 0xFFFFFFFFu;  /* 0C072000 mov #imm,Rn */
	r5 = 0xFFFFFFFCu;  /* 0C072002 mov #imm,Rn */
	UPD(0x0C072004u, 2);
L_0C072004: BLKS(0x0C072004u);
	r0 = R32(r3); UPD(0x0C072006u, 1);  /* 0C072004 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C072006 tst Rm,Rn */
	IF(0x0C072008u); ARG0(0x405Cu); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C072008 shad Rm,Rn */
	r0 ^= 0x1u;  /* 0C07200A xor #imm,r0 */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C07200C negc Rm,Rn */
	r0 &= 0x1u;  /* 0C07200E and #imm,r0 */
	r2 &= r0;  /* 0C072010 and Rm,Rn */
	r3 += 0x3Cu;  /* 0C072012 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C072016u, 8);  /* 0C072014 mov.w @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C072016 tst Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C072018 negc Rm,Rn */
	r2 &= r0;  /* 0C07201A and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07201C tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C071FE6u, 7); goto L_0C071FE6; } goto L_0C072022; }  /* 0C07201E bf/s */
L_0C072022: BLKS(0x0C072022u);
	r0 = r6;  /* 0C072022 mov Rm,Rn */
	r6 = 0xB4u; UPD(0x0C072026u, 3);  /* 0C072024 mov.w @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C072026 add #imm,Rn */
	r3 += r6;  /* 0C072028 add Rm,Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C07202A exts.w Rm,Rn */
	T = (s32)r6 > (s32)r4;  /* 0C07202C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C072004u, 7); goto L_0C072004; }  /* 0C07202E bf */
L_0C072030: BLKS(0x0C072030u);
	r5 = 0xC2ABAA4u; UPD(0x0C072032u, 1);  /* 0C072030 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C072032 mov #imm,Rn */
	r7 = R32(r5); UPD(0x0C072036u, 2);  /* 0C072034 mov.l @Rm,Rn */
	r0 = 0x1u;  /* 0C072036 mov #imm,Rn */
	r3 = 0xC3C86E4u; UPD(0x0C07203Au, 2);  /* 0C072038 mov.l @(disp,pc),Rn */
	r7 += 0x2u;  /* 0C07203A add #imm,Rn */
	W32(r5, r7); UPD(0x0C07203Eu, 2);  /* 0C07203C mov.l Rm,@Rn */
	{ W16(r3, r4); /* slot mov.w Rm,@Rn */ UPD(0x0C071FE8u, 3); goto L_0C071FE8; }  /* 0C07203E bra */
}

void blk_f_0C072060(sh3_t *c)
{
	LOCALS;
L_0C072060: BLKS(0x0C072060u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072062u, 1);  /* 0C072060 mov.l Rm,@-Rn */
	r7 = 0xC3C86E4u; UPD(0x0C072064u, 1);  /* 0C072062 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r7); UPD(0x0C072066u, 1);  /* 0C072064 mov.w @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C072066 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C072080u, 4); goto L_0C072080; } goto L_0C07206C; }  /* 0C072068 bf/s */
L_0C07206C: BLKS(0x0C07206Cu);
	r0 = 0xC2ABAA4u; UPD(0x0C07206Eu, 2);  /* 0C07206C mov.l @(disp,pc),Rn */
	r1 = R32(r0); UPD(0x0C072070u, 1);  /* 0C07206E mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r2 = v_; } UPD(0x0C072072u, 1);  /* 0C072070 mov.w @Rm+,Rn */
	W16(r7, r2); UPD(0x0C072074u, 1);  /* 0C072072 mov.w Rm,@Rn */
	W32(r0, r1); UPD(0x0C072076u, 1);  /* 0C072074 mov.l Rm,@Rn */
L_0C072076: BLKS(0x0C072076u);
	r0 = 0x0u;  /* 0C072076 mov #imm,Rn */
	UPD(0x0C072078u, 1);
L_0C072078: BLKS(0x0C072078u);
	r15 = r14;  /* 0C072078 mov Rm,Rn */
	IF(0x0C07207Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C07207A rts */
L_0C072080: BLKS(0x0C072080u);
	r1 += 0xFFFFFFFFu;  /* 0C072080 add #imm,Rn */
	r0 = r1 & 0xFFFF;  /* 0C072082 extu.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C072084 tst Rm,Rn */
	{ u32 c_ = T; W16(r7, r1); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0720BAu, 6); goto L_0C0720BA; } UPD(0x0C07208Au, 1); goto L_0C07208A; }  /* 0C072086 bt/s */
L_0C07208A: BLKS(0x0C07208Au);
	r5 = 0xBFu; UPD(0x0C07208Cu, 1);  /* 0C07208A mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C07208C mov #imm,Rn */
	r2 = 0xC286578u; UPD(0x0C072090u, 2);  /* 0C07208E mov.l @(disp,pc),Rn */
	r4 = 0xFFFFFFFCu;  /* 0C072090 mov #imm,Rn */
	r6 = 0xB4u; UPD(0x0C072094u, 2);  /* 0C072092 mov.w @(disp,pc),Rn */
	r7 = 0xFFFFFFFFu;  /* 0C072094 mov #imm,Rn */
	IF(0x0C072096u); ;  /* 0C072096 nop */
	UPD(0x0C072098u, 2);
L_0C072098: BLKS(0x0C072098u);
	r0 = R32(r2); UPD(0x0C07209Au, 1);  /* 0C072098 mov.l @Rm,Rn */
	r2 += 0x3Cu;  /* 0C07209A add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C07209Eu, 2);  /* 0C07209C mov.w @Rm,Rn */
	IF(0x0C07209Eu); ARG0(0x404Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C07209E shad Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0720A0 tst Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C0720A2 negc Rm,Rn */
	r0 &= 0x1u;  /* 0C0720A4 and #imm,r0 */
	r0 &= r1;  /* 0C0720A6 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0720A8 tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C072076u, 9); goto L_0C072076; } goto L_0C0720AE; }  /* 0C0720AA bf/s */
L_0C0720AE: BLKS(0x0C0720AEu);
	r0 = r3;  /* 0C0720AE mov Rm,Rn */
	r0 += 0x1u;  /* 0C0720B0 add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C0720B2 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C0720B4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += r6; /* slot add Rm,Rn */ if (c_) { UPD(0x0C072098u, 8); goto L_0C072098; } UPD(0x0C0720BAu, 1); goto L_0C0720BA; }  /* 0C0720B6 bf/s */
L_0C0720BA: BLKS(0x0C0720BAu);
	r5 = 0xC2ABAA4u; UPD(0x0C0720BCu, 1);  /* 0C0720BA mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0720BC mov #imm,Rn */
	r6 = R32(r5); UPD(0x0C0720C0u, 2);  /* 0C0720BE mov.l @Rm,Rn */
	r0 = 0x1u;  /* 0C0720C0 mov #imm,Rn */
	r3 = 0xC3C86E4u; UPD(0x0C0720C4u, 2);  /* 0C0720C2 mov.l @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C0720C4 add #imm,Rn */
	W32(r5, r6); UPD(0x0C0720C8u, 2);  /* 0C0720C6 mov.l Rm,@Rn */
	{ W16(r3, r4); /* slot mov.w Rm,@Rn */ UPD(0x0C072078u, 3); goto L_0C072078; }  /* 0C0720C8 bra */
}

/* FUN_0c072220 */
void blk_f_0C072220(sh3_t *c)
{
	LOCALS;
L_0C072220: BLKS(0x0C072220u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C072222u, 1);  /* 0C072220 mov.l Rm,@-Rn */
	r6 = 0x50u;  /* 0C072222 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072226u, 2);  /* 0C072224 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C072226 exts.w Rm,Rn */
	IF(0x0C072228u); r15 -= 4; W32(r15, PR); UPD(0x0C07222Au, 2);  /* 0C072228 sts.l pr,@-Rn */
	r2 = 0x140u; UPD(0x0C07222Cu, 1);  /* 0C07222A mov.w @(disp,pc),Rn */
	r7 = 0xC0C252Eu; UPD(0x0C07222Eu, 1);  /* 0C07222C mov.l @(disp,pc),Rn */
	r15 -= r2;  /* 0C07222E sub Rm,Rn */
	r14 = r15;  /* 0C072230 mov Rm,Rn */
	r5 = 0xC0C4FB0u; UPD(0x0C072234u, 3);  /* 0C072232 mov.l @(disp,pc),Rn */
	IF(0x0C072234u); { u32 t_ = r7; PR = 0x0C072238u; r4 = r14; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C252E, 0x0C0C252Eu, 0x0C072238u); }  /* 0C072234 jsr @Rn */
L_0C072238: BLKS(0x0C072238u);
	r5 = 0xB4u; UPD(0x0C07223Au, 1);  /* 0C072238 mov.w @(disp,pc),Rn */
	IF(0x0C07223Au); MACL = r8 * r5;  /* 0C07223A mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C07223Eu, 3);  /* 0C07223C mov.l @(disp,pc),Rn */
	IF(0x0C07223Eu); r7 = MACL;  /* 0C07223E sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C072242u, 2);  /* 0C072240 mov.w @(disp,pc),Rn */
	r7 += r4;  /* 0C072242 add Rm,Rn */
	IF(0x0C072244u); r8 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C072246u, 2);  /* 0C072244 mov.b @(r0,Rm),Rn */
	r4 = 0xC2B1A3Cu; UPD(0x0C072248u, 1);  /* 0C072246 mov.l @(disp,pc),Rn */
	r0 = 0x4Cu;  /* 0C072248 mov #imm,Rn */
	r2 = R32(r4); UPD(0x0C07224Cu, 2);  /* 0C07224A mov.l @Rm,Rn */
	IF(0x0C07224Cu); MACL = r8 * r0;  /* 0C07224C mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r5 = v_; } UPD(0x0C072250u, 3);  /* 0C07224E mov.w @Rm+,Rn */
	r6 = 0xC2460ACu; UPD(0x0C072252u, 1);  /* 0C072250 mov.l @(disp,pc),Rn */
	IF(0x0C072252u); r0 = MACL;  /* 0C072252 sts macl,Rn */
	r3 = 0xC286318u; UPD(0x0C072256u, 2);  /* 0C072254 mov.l @(disp,pc),Rn */
	W16(r6, r5); UPD(0x0C072258u, 1);  /* 0C072256 mov.w Rm,@Rn */
	r0 += r3;  /* 0C072258 add Rm,Rn */
	r6 = R32(r7 + 0x24u); UPD(0x0C07225Cu, 2);  /* 0C07225A mov.l @(disp,Rm),Rn */
	r1 = R32(r0 + 0x8u); UPD(0x0C07225Eu, 1);  /* 0C07225C mov.l @(disp,Rm),Rn */
	r6 += r1;  /* 0C07225E add Rm,Rn */
	r3 = (r6 >> 16) | (r6 << 16);  /* 0C072260 swap.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r6 = v_; } UPD(0x0C072264u, 3);  /* 0C072262 mov.w @Rm+,Rn */
	r1 = (u32)(s32)(s16)r3;  /* 0C072264 exts.w Rm,Rn */
	r1 += r6;  /* 0C072266 add Rm,Rn */
	r6 = 0xC237C08u; UPD(0x0C07226Au, 3);  /* 0C072268 mov.l @(disp,pc),Rn */
	W16(r6, r1); UPD(0x0C07226Cu, 1);  /* 0C07226A mov.w Rm,@Rn */
	r6 = R32(r7 + 0x28u); UPD(0x0C07226Eu, 1);  /* 0C07226C mov.l @(disp,Rm),Rn */
	r1 = r5 & 0xFFFF;  /* 0C07226E extu.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r7 = v_; } UPD(0x0C072272u, 2);  /* 0C072270 mov.w @Rm+,Rn */
	r3 = (r6 >> 16) | (r6 << 16);  /* 0C072272 swap.w Rm,Rn */
	r6 = (u32)(s32)(s16)r3;  /* 0C072274 exts.w Rm,Rn */
	r6 += r7;  /* 0C072276 add Rm,Rn */
	r7 = 0xC3C43C6u; UPD(0x0C07227Au, 4);  /* 0C072278 mov.l @(disp,pc),Rn */
	IF(0x0C07227Au); r1 <<= 2;  /* 0C07227A shll2 Rn */
	W16(r7, r6); UPD(0x0C07227Eu, 2);  /* 0C07227C mov.w Rm,@Rn */
	r3 = R32(r0 + 0x38u); UPD(0x0C072280u, 1);  /* 0C07227E mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r0 = v_; } UPD(0x0C072282u, 1);  /* 0C072280 mov.w @Rm+,Rn */
	IF(0x0C072282u); r0 <<= 2;  /* 0C072282 shll2 Rn */
	IF(0x0C072284u); r6 = R32(r0 + r3); UPD(0x0C072286u, 2);  /* 0C072284 mov.l @(r0,Rm),Rn */
	r0 = 0xC297460u; UPD(0x0C072288u, 1);  /* 0C072286 mov.l @(disp,pc),Rn */
	W32(r0, r6); UPD(0x0C07228Au, 1);  /* 0C072288 mov.l Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r7 = v_; } UPD(0x0C07228Cu, 1);  /* 0C07228A mov.w @Rm+,Rn */
	r0 = 0xC2B1811u; UPD(0x0C07228Eu, 1);  /* 0C07228C mov.l @(disp,pc),Rn */
	W8(r0, r8); UPD(0x0C072290u, 1);  /* 0C07228E mov.b Rm,@Rn */
	W32(r4, r2); UPD(0x0C072292u, 1);  /* 0C072290 mov.l Rm,@Rn */
	r0 = r1;  /* 0C072292 mov Rm,Rn */
	IF(0x0C072294u); r2 = R32(r0 + r14); UPD(0x0C072296u, 2);  /* 0C072294 mov.l @(r0,Rm),Rn */
	r6 = 0xC2B03A2u; UPD(0x0C072298u, 1);  /* 0C072296 mov.l @(disp,pc),Rn */
	IF(0x0C072298u); { u32 t_ = r2; PR = 0x0C07229Cu; W16(r6, r7); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLD(t_, 0x0C07229Cu); }  /* 0C072298 jsr @Rn */
L_0C07229C: BLKS(0x0C07229Cu);
	r1 = 0x140u; UPD(0x0C07229Eu, 1);  /* 0C07229C mov.w @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C07229E mov #imm,Rn */
	r14 += r1;  /* 0C0722A0 add Rm,Rn */
	r15 = r14;  /* 0C0722A2 mov Rm,Rn */
	IF(0x0C0722A4u); PR = R32(r15); r15 += 4; UPD(0x0C0722A6u, 4);  /* 0C0722A4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0722A8u, 1);  /* 0C0722A6 mov.l @Rm+,Rn */
	IF(0x0C0722A8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0722A8 rts */
}

/* FUN_0c0722e0 */
void blk_f_0C0722E0(sh3_t *c)
{
	LOCALS;
L_0C0722E0: BLKS(0x0C0722E0u);
	r3 = 0xB4u; UPD(0x0C0722E2u, 1);  /* 0C0722E0 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0722E2 exts.w Rm,Rn */
	IF(0x0C0722E4u); MACL = r1 * r3;  /* 0C0722E4 mul.l Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0722E8u, 4);  /* 0C0722E6 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0722EAu, 1);  /* 0C0722E8 mov.l @(disp,pc),Rn */
	IF(0x0C0722EAu); r8 = MACL;  /* 0C0722EA sts macl,Rn */
	r2 = 0xC237C08u; UPD(0x0C0722EEu, 2);  /* 0C0722EC mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C0722EE add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0722F2u, 2);  /* 0C0722F0 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0722F4u, 1);  /* 0C0722F2 mov.w @Rm,Rn */
	IF(0x0C0722F4u); r15 -= 4; W32(r15, PR); UPD(0x0C0722F6u, 1);  /* 0C0722F4 sts.l pr,@-Rn */
	IF(0x0C0722F6u); r0 <<= 16;  /* 0C0722F6 shll16 Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C0722FAu, 2);  /* 0C0722F8 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C0722FA tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C072310u, 4); goto L_0C072310; } UPD(0x0C072300u, 1); goto L_0C072300; }  /* 0C0722FC bt/s */
L_0C072300: BLKS(0x0C072300u);
	r15 = r14;  /* 0C072300 mov Rm,Rn */
	IF(0x0C072302u); PR = R32(r15); r15 += 4; UPD(0x0C072304u, 2);  /* 0C072302 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C072306u, 1);  /* 0C072304 mov.l @Rm+,Rn */
	IF(0x0C072306u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C072306 rts */
L_0C072310: BLKS(0x0C072310u);
	r0 = 0xC0C2360u; UPD(0x0C072312u, 1);  /* 0C072310 mov.l @(disp,pc),Rn */
	IF(0x0C072312u); { u32 t_ = r0; PR = 0x0C072316u; IF(0x0C072314u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C072316u); }  /* 0C072312 jsr @Rn */
L_0C072316: BLKS(0x0C072316u);
	r4 = 0x1C0u; UPD(0x0C072318u, 1);  /* 0C072316 mov.w @(disp,pc),Rn */
	r0 &= 0x7Fu;  /* 0C072318 and #imm,r0 */
	r0 += r4;  /* 0C07231A add Rm,Rn */
	IF(0x0C07231Cu); r0 <<= 16;  /* 0C07231C shll16 Rn */
	{ W32(r8 + 0x28u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C072300u, 6); goto L_0C072300; }  /* 0C07231E bra */
}

/* FUN_0c072340 */
void blk_f_0C072340(sh3_t *c)
{
	LOCALS;
L_0C072340: BLKS(0x0C072340u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072342u, 1);  /* 0C072340 mov.l Rm,@-Rn */
	r2 = 0x0u;  /* 0C072342 mov #imm,Rn */
	r6 = 0xC3C4378u; UPD(0x0C072346u, 2);  /* 0C072344 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C072346 mov Rm,Rn */
	r7 = 0x0u;  /* 0C072348 mov #imm,Rn */
	r3 = 0xFu;  /* 0C07234A mov #imm,Rn */
	r0 = r2;  /* 0C07234C mov Rm,Rn */
	UPD(0x0C07234Eu, 4);
L_0C07234E: BLKS(0x0C07234Eu);
	IF(0x0C07234Eu); r0 <<= 2;  /* 0C07234E shll2 Rn */
	IF(0x0C072350u); W32(r0 + r6, r7); UPD(0x0C072352u, 2);  /* 0C072350 mov.l Rm,@(r0,Rn) */
	r0 = r2;  /* 0C072352 mov Rm,Rn */
	r0 += 0x1u;  /* 0C072354 add #imm,Rn */
	r2 = r0 & 0xFF;  /* 0C072356 extu.b Rm,Rn */
	T = r2 > r3;  /* 0C072358 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07234Eu, 7); goto L_0C07234E; } goto L_0C07235E; }  /* 0C07235A bf/s */
L_0C07235E: BLKS(0x0C07235Eu);
	r6 = 0xC3C86E4u; UPD(0x0C072360u, 2);  /* 0C07235E mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C072360 mov #imm,Rn */
	r7 = 0xC237C10u; UPD(0x0C072364u, 2);  /* 0C072362 mov.l @(disp,pc),Rn */
	r3 = 0xC2A6D90u; UPD(0x0C072366u, 1);  /* 0C072364 mov.l @(disp,pc),Rn */
	r2 = 0xC3C4048u; UPD(0x0C072368u, 1);  /* 0C072366 mov.l @(disp,pc),Rn */
	W16(r6, r4); UPD(0x0C07236Au, 1);  /* 0C072368 mov.w Rm,@Rn */
	r1 = 0x1880000u; UPD(0x0C07236Cu, 1);  /* 0C07236A mov.l @(disp,pc),Rn */
	r5 = 0xC23947Cu; UPD(0x0C07236Eu, 1);  /* 0C07236C mov.l @(disp,pc),Rn */
	r6 = 0xC2B038Cu; UPD(0x0C072370u, 1);  /* 0C07236E mov.l @(disp,pc),Rn */
	W16(r7, r4); UPD(0x0C072372u, 1);  /* 0C072370 mov.w Rm,@Rn */
	W8(r3, r4); UPD(0x0C072374u, 1);  /* 0C072372 mov.b Rm,@Rn */
	W32(r2, r1); UPD(0x0C072376u, 1);  /* 0C072374 mov.l Rm,@Rn */
	W16(r5, r4); UPD(0x0C072378u, 1);  /* 0C072376 mov.w Rm,@Rn */
	r7 = 0xC28F60Au; UPD(0x0C07237Au, 1);  /* 0C072378 mov.l @(disp,pc),Rn */
	r2 = 0xC29D736u; UPD(0x0C07237Cu, 1);  /* 0C07237A mov.l @(disp,pc),Rn */
	r3 = 0xC3C43C4u; UPD(0x0C07237Eu, 1);  /* 0C07237C mov.l @(disp,pc),Rn */
	W8(r6, r4); UPD(0x0C072380u, 1);  /* 0C07237E mov.b Rm,@Rn */
	r0 = 0xC239482u; UPD(0x0C072382u, 1);  /* 0C072380 mov.l @(disp,pc),Rn */
	r5 = 0xC3C4171u; UPD(0x0C072384u, 1);  /* 0C072382 mov.l @(disp,pc),Rn */
	W8(r7, r4); UPD(0x0C072386u, 1);  /* 0C072384 mov.b Rm,@Rn */
	W8(r2, r4); UPD(0x0C072388u, 1);  /* 0C072386 mov.b Rm,@Rn */
	r7 = 0x0u;  /* 0C072388 mov #imm,Rn */
	W8(r3, r4); UPD(0x0C07238Cu, 2);  /* 0C07238A mov.b Rm,@Rn */
	r2 = 0x0u;  /* 0C07238C mov #imm,Rn */
	r6 = 0xC297A40u; UPD(0x0C072390u, 2);  /* 0C07238E mov.l @(disp,pc),Rn */
	r3 = 0xFu;  /* 0C072390 mov #imm,Rn */
	W8(r0, r4); UPD(0x0C072394u, 2);  /* 0C072392 mov.b Rm,@Rn */
	W8(r5, r4); UPD(0x0C072396u, 1);  /* 0C072394 mov.b Rm,@Rn */
	IF(0x0C072396u); ;  /* 0C072396 nop */
	UPD(0x0C072398u, 1);
L_0C072398: BLKS(0x0C072398u);
	r0 = r2;  /* 0C072398 mov Rm,Rn */
	r1 = 0x4u;  /* 0C07239A mov #imm,Rn */
	IF(0x0C07239Cu); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07239C shld Rm,Rn */
	r4 = r2;  /* 0C07239E mov Rm,Rn */
	r0 += r6;  /* 0C0723A0 add Rm,Rn */
	r4 += 0x1u;  /* 0C0723A2 add #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0723A4 extu.b Rm,Rn */
	T = r2 > r3;  /* 0C0723A6 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W32(r0, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C072398u, 11); goto L_0C072398; } UPD(0x0C0723ACu, 1); goto L_0C0723AC; }  /* 0C0723A8 bf/s */
L_0C0723AC: BLKS(0x0C0723ACu);
	r15 = r14;  /* 0C0723AC mov Rm,Rn */
	IF(0x0C0723AEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0723AE rts */
}

void blk_f_0C072430(sh3_t *c)
{
	LOCALS;
L_0C072430: BLKS(0x0C072430u);
	r2 = 0xC22E015u; UPD(0x0C072432u, 1);  /* 0C072430 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072434u, 1);  /* 0C072432 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C072436u, 1);  /* 0C072434 mov.b @Rm,Rn */
	IF(0x0C072436u); r15 -= 4; W32(r15, PR); UPD(0x0C072438u, 1);  /* 0C072436 sts.l pr,@-Rn */
	T = (r0 & r0) == 0;  /* 0C072438 tst Rm,Rn */
	r14 = r15;  /* 0C07243A mov Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C072450u, 5); goto L_0C072450; } UPD(0x0C072440u, 1); goto L_0C072440; }  /* 0C07243C bt/s */
L_0C072440: BLKS(0x0C072440u);
	r15 = r14;  /* 0C072440 mov Rm,Rn */
	IF(0x0C072442u); PR = R32(r15); r15 += 4; UPD(0x0C072444u, 2);  /* 0C072442 lds.l @Rn+,pr */
	IF(0x0C072444u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C072444 rts */
L_0C072450: BLKS(0x0C072450u);
	r0 = 0xC2860F2u; UPD(0x0C072452u, 1);  /* 0C072450 mov.l @(disp,pc),Rn */
	r1 = 0x78u;  /* 0C072452 mov #imm,Rn */
	W8(r0, r1); UPD(0x0C072456u, 2);  /* 0C072454 mov.b Rm,@Rn */
	r0 = 0xC0A7F90u; UPD(0x0C072458u, 1);  /* 0C072456 mov.l @(disp,pc),Rn */
	IF(0x0C072458u); { u32 t_ = r0; PR = 0x0C07245Cu; IF(0x0C07245Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A7F90, 0x0C0A7F90u, 0x0C07245Cu); }  /* 0C072458 jsr @Rn */
L_0C07245C: BLKS(0x0C07245Cu);
	T = (r0 & r0) == 0;  /* 0C07245C tst Rm,Rn */
	IF(0x0C07245Eu); r0 = T;  /* 0C07245E movt Rn */
	{ r0 ^= 0x1u; /* slot xor #imm,r0 */ UPD(0x0C072440u, 5); goto L_0C072440; }  /* 0C072460 bra */
}

void blk_f_0C072470(sh3_t *c)
{
	LOCALS;
L_0C072470: BLKS(0x0C072470u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072472u, 1);  /* 0C072470 mov.l Rm,@-Rn */
	r1 = 0x1u;  /* 0C072472 mov #imm,Rn */
	r0 = 0xC23230Cu; UPD(0x0C072476u, 2);  /* 0C072474 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C072476 mov Rm,Rn */
	W8(r0, r1); UPD(0x0C07247Au, 2);  /* 0C072478 mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C07247A mov #imm,Rn */
	r15 = r14;  /* 0C07247C mov Rm,Rn */
	IF(0x0C07247Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C07247E rts */
}

void blk_f_0C072490(sh3_t *c)
{
	LOCALS;
L_0C072490: BLKS(0x0C072490u);
	r2 = 0xC2860F2u; UPD(0x0C072492u, 1);  /* 0C072490 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C072494u, 1);  /* 0C072492 mov.b @Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072496u, 1);  /* 0C072494 mov.l Rm,@-Rn */
	T = (r0 & r0) == 0;  /* 0C072496 tst Rm,Rn */
	IF(0x0C072498u); r0 = T;  /* 0C072498 movt Rn */
	r14 = r15;  /* 0C07249A mov Rm,Rn */
	r15 = r14;  /* 0C07249C mov Rm,Rn */
	IF(0x0C07249Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 7); RET(t_); }  /* 0C07249E rts */
}

void blk_f_0C0724B0(sh3_t *c)
{
	LOCALS;
L_0C0724B0: BLKS(0x0C0724B0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0724B2u, 1);  /* 0C0724B0 mov.l Rm,@-Rn */
	r3 = 0xC2ABAA4u; UPD(0x0C0724B4u, 1);  /* 0C0724B2 mov.l @(disp,pc),Rn */
	IF(0x0C0724B4u); r15 -= 4; W32(r15, PR); UPD(0x0C0724B6u, 1);  /* 0C0724B4 sts.l pr,@-Rn */
	r4 = R32(r3); UPD(0x0C0724B8u, 1);  /* 0C0724B6 mov.l @Rm,Rn */
	r14 = r15;  /* 0C0724B8 mov Rm,Rn */
	r4 += 0x1u;  /* 0C0724BA add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r1 = v_; } UPD(0x0C0724BEu, 3);  /* 0C0724BC mov.b @Rm+,Rn */
	r0 = 0xC2A6D90u; UPD(0x0C0724C0u, 1);  /* 0C0724BE mov.l @(disp,pc),Rn */
	W32(r3, r4); UPD(0x0C0724C2u, 1);  /* 0C0724C0 mov.l Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C0724C4u, 1);  /* 0C0724C2 mov.b @Rm,Rn */
	r2 = r3;  /* 0C0724C4 mov Rm,Rn */
	r2 += 0x1u;  /* 0C0724C6 add #imm,Rn */
	W8(r0, r2); UPD(0x0C0724CAu, 3);  /* 0C0724C8 mov.b Rm,@Rn */
	r0 = r3 & 0xFF;  /* 0C0724CA extu.b Rm,Rn */
	r2 = 0xC3C4378u; UPD(0x0C0724CEu, 2);  /* 0C0724CC mov.l @(disp,pc),Rn */
	IF(0x0C0724CEu); r0 <<= 2;  /* 0C0724CE shll2 Rn */
	r5 = 0xC3C4170u; UPD(0x0C0724D2u, 2);  /* 0C0724D0 mov.l @(disp,pc),Rn */
	IF(0x0C0724D2u); W32(r0 + r2, r4); UPD(0x0C0724D4u, 1);  /* 0C0724D2 mov.l Rm,@(r0,Rn) */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C0724D6u, 1);  /* 0C0724D4 mov.b @Rm,Rn */
	r0 = 0xC0C0910u; UPD(0x0C0724D8u, 1);  /* 0C0724D6 mov.l @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C0724D8 add #imm,Rn */
	r7 = 0xC23E0A6u; UPD(0x0C0724DCu, 2);  /* 0C0724DA mov.l @(disp,pc),Rn */
	W8(r5, r6); UPD(0x0C0724DEu, 1);  /* 0C0724DC mov.b Rm,@Rn */
	IF(0x0C0724DEu); { u32 t_ = r0; PR = 0x0C0724E2u; W8(r7, r1); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0910, 0x0C0C0910u, 0x0C0724E2u); }  /* 0C0724DE jsr @Rn */
L_0C0724E2: BLKS(0x0C0724E2u);
	r0 = 0xC0BF5C0u; UPD(0x0C0724E4u, 1);  /* 0C0724E2 mov.l @(disp,pc),Rn */
	IF(0x0C0724E4u); { u32 t_ = r0; PR = 0x0C0724E8u; IF(0x0C0724E6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BF5C0, 0x0C0BF5C0u, 0x0C0724E8u); }  /* 0C0724E4 jsr @Rn */
L_0C0724E8: BLKS(0x0C0724E8u);
	r0 = 0xC0C1270u; UPD(0x0C0724EAu, 1);  /* 0C0724E8 mov.l @(disp,pc),Rn */
	IF(0x0C0724EAu); { u32 t_ = r0; PR = 0x0C0724EEu; IF(0x0C0724ECu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1270, 0x0C0C1270u, 0x0C0724EEu); }  /* 0C0724EA jsr @Rn */
L_0C0724EE: BLKS(0x0C0724EEu);
	r0 = 0x1u;  /* 0C0724EE mov #imm,Rn */
	r15 = r14;  /* 0C0724F0 mov Rm,Rn */
	IF(0x0C0724F2u); PR = R32(r15); r15 += 4; UPD(0x0C0724F4u, 3);  /* 0C0724F2 lds.l @Rn+,pr */
	IF(0x0C0724F4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0724F4 rts */
}

void blk_f_0C072520(sh3_t *c)
{
	LOCALS;
L_0C072520: BLKS(0x0C072520u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072522u, 1);  /* 0C072520 mov.l Rm,@-Rn */
	r0 = 0x1u;  /* 0C072522 mov #imm,Rn */
	r14 = r15;  /* 0C072524 mov Rm,Rn */
	r15 = r14;  /* 0C072526 mov Rm,Rn */
	IF(0x0C072528u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C072528 rts */
}

void blk_f_0C072530(sh3_t *c)
{
	LOCALS;
L_0C072530: BLKS(0x0C072530u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072532u, 1);  /* 0C072530 mov.l Rm,@-Rn */
	r1 = 0xC2A6D90u; UPD(0x0C072534u, 1);  /* 0C072532 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C072536u, 1);  /* 0C072534 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C072536 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C072550u, 4); goto L_0C072550; } goto L_0C07253C; }  /* 0C072538 bf/s */
L_0C07253C: BLKS(0x0C07253Cu);
	r0 = 0xC238020u; UPD(0x0C07253Eu, 2);  /* 0C07253C mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C07253E mov #imm,Rn */
	W8(r0, r1); UPD(0x0C072542u, 2);  /* 0C072540 mov.b Rm,@Rn */
L_0C072542: BLKS(0x0C072542u);
	r15 = r14;  /* 0C072542 mov Rm,Rn */
	IF(0x0C072544u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C072544 rts */
L_0C072550: BLKS(0x0C072550u);
	r0 += 0xFFFFFFFFu;  /* 0C072550 add #imm,Rn */
	W8(r1, r0); UPD(0x0C072554u, 2);  /* 0C072552 mov.b Rm,@Rn */
	r2 = 0xC3C4378u; UPD(0x0C072556u, 1);  /* 0C072554 mov.l @(disp,pc),Rn */
	r0 = r0 & 0xFF;  /* 0C072556 extu.b Rm,Rn */
	IF(0x0C072558u); r0 <<= 2;  /* 0C072558 shll2 Rn */
	IF(0x0C07255Au); r3 = R32(r0 + r2); UPD(0x0C07255Cu, 3);  /* 0C07255A mov.l @(r0,Rm),Rn */
	r0 = 0xC2ABAA4u; UPD(0x0C07255Eu, 1);  /* 0C07255C mov.l @(disp,pc),Rn */
	W32(r0, r3); UPD(0x0C072560u, 1);  /* 0C07255E mov.l Rm,@Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C072542u, 3); goto L_0C072542; }  /* 0C072560 bra */
}

void blk_f_0C072580(sh3_t *c)
{
	LOCALS;
L_0C072580: BLKS(0x0C072580u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072582u, 1);  /* 0C072580 mov.l Rm,@-Rn */
	r5 = 0xC2ABAA4u; UPD(0x0C072584u, 1);  /* 0C072582 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C072584 mov Rm,Rn */
	r0 = 0xC2A6D90u; UPD(0x0C072588u, 2);  /* 0C072586 mov.l @(disp,pc),Rn */
	r4 = R32(r5); UPD(0x0C07258Au, 1);  /* 0C072588 mov.l @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C07258Cu, 1);  /* 0C07258A mov.b @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r1 = v_; } UPD(0x0C07258Eu, 1);  /* 0C07258C mov.w @Rm+,Rn */
	r3 = r2;  /* 0C07258E mov Rm,Rn */
	r3 += 0x1u;  /* 0C072590 add #imm,Rn */
	W8(r0, r3); UPD(0x0C072594u, 3);  /* 0C072592 mov.b Rm,@Rn */
	r0 = r2 & 0xFF;  /* 0C072594 extu.b Rm,Rn */
	r3 = 0xC3C4378u; UPD(0x0C072598u, 2);  /* 0C072596 mov.l @(disp,pc),Rn */
	IF(0x0C072598u); r0 <<= 2;  /* 0C072598 shll2 Rn */
	r6 = 0xC23947Cu; UPD(0x0C07259Cu, 2);  /* 0C07259A mov.l @(disp,pc),Rn */
	IF(0x0C07259Cu); W32(r0 + r3, r4); UPD(0x0C07259Eu, 1);  /* 0C07259C mov.l Rm,@(r0,Rn) */
	W16(r6, r1); UPD(0x0C0725A0u, 1);  /* 0C07259E mov.w Rm,@Rn */
	r0 = 0x1u;  /* 0C0725A0 mov #imm,Rn */
	W32(r5, r4); UPD(0x0C0725A4u, 2);  /* 0C0725A2 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0725A4 mov Rm,Rn */
	IF(0x0C0725A6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0725A6 rts */
}

void blk_f_0C0725C0(sh3_t *c)
{
	LOCALS;
L_0C0725C0: BLKS(0x0C0725C0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0725C2u, 1);  /* 0C0725C0 mov.l Rm,@-Rn */
	r0 = 0xC23947Cu; UPD(0x0C0725C4u, 1);  /* 0C0725C2 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C0725C6u, 1);  /* 0C0725C4 mov.w @Rm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C0725C6 add #imm,Rn */
	W16(r0, r3); UPD(0x0C0725CAu, 2);  /* 0C0725C8 mov.w Rm,@Rn */
	r0 = r3 & 0xFFFF;  /* 0C0725CA extu.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0725CC tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0725F0u, 5); goto L_0C0725F0; } goto L_0C0725D2; }  /* 0C0725CE bf/s */
L_0C0725D2: BLKS(0x0C0725D2u);
	r4 = 0xC2A6D90u; UPD(0x0C0725D4u, 2);  /* 0C0725D2 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C0725D6u, 1);  /* 0C0725D4 mov.b @Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0725D6 add #imm,Rn */
	W8(r4, r2); UPD(0x0C0725DAu, 2);  /* 0C0725D8 mov.b Rm,@Rn */
L_0C0725DA: BLKS(0x0C0725DAu);
	r0 = 0x1u;  /* 0C0725DA mov #imm,Rn */
	r15 = r14;  /* 0C0725DC mov Rm,Rn */
	IF(0x0C0725DEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0725DE rts */
L_0C0725F0: BLKS(0x0C0725F0u);
	r0 = 0xC2A6D90u; UPD(0x0C0725F2u, 1);  /* 0C0725F0 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C0725F4u, 1);  /* 0C0725F2 mov.b @Rm,Rn */
	r7 = 0xC3C4374u; UPD(0x0C0725F6u, 1);  /* 0C0725F4 mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C0725F6 extu.b Rm,Rn */
	IF(0x0C0725F8u); r0 <<= 2;  /* 0C0725F8 shll2 Rn */
	IF(0x0C0725FAu); r6 = R32(r0 + r7); UPD(0x0C0725FCu, 3);  /* 0C0725FA mov.l @(r0,Rm),Rn */
	r5 = 0xC2ABAA4u; UPD(0x0C0725FEu, 1);  /* 0C0725FC mov.l @(disp,pc),Rn */
	{ W32(r5, r6); /* slot mov.l Rm,@Rn */ UPD(0x0C0725DAu, 3); goto L_0C0725DA; }  /* 0C0725FE bra */
}

void blk_f_0C072620(sh3_t *c)
{
	LOCALS;
L_0C072620: BLKS(0x0C072620u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C072622u, 1);  /* 0C072620 mov.l Rm,@-Rn */
	r1 = 0xFFFFFFFFu;  /* 0C072622 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072626u, 2);  /* 0C072624 mov.l Rm,@-Rn */
	r6 = 0xC2ABAA4u; UPD(0x0C072628u, 1);  /* 0C072626 mov.l @(disp,pc),Rn */
	IF(0x0C072628u); r15 -= 4; W32(r15, PR); UPD(0x0C07262Au, 1);  /* 0C072628 sts.l pr,@-Rn */
	r5 = 0xC3C43B8u; UPD(0x0C07262Cu, 1);  /* 0C07262A mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07262C mov Rm,Rn */
	r7 = R32(r6); UPD(0x0C072630u, 2);  /* 0C07262E mov.l @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C072632u, 1);  /* 0C072630 mov.b @Rm,Rn */
	r7 += 0x2u;  /* 0C072632 add #imm,Rn */
	r4 = 0xC22E015u; UPD(0x0C072636u, 2);  /* 0C072634 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C072636 tst Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C07263Au, 2);  /* 0C072638 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C07263A negc Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r8 = v_; } UPD(0x0C07263Eu, 2);  /* 0C07263C mov.w @Rm+,Rn */
	T = (r0 & r0) == 0;  /* 0C07263E tst Rm,Rn */
	IF(0x0C072640u); r0 = T;  /* 0C072640 movt Rn */
	T = (r3 & r0) == 0;  /* 0C072642 tst Rm,Rn */
	{ u32 c_ = !T; W32(r6, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C072660u, 6); goto L_0C072660; } UPD(0x0C072648u, 1); goto L_0C072648; }  /* 0C072644 bf/s */
L_0C072648: BLKS(0x0C072648u);
	r0 = 0x1u;  /* 0C072648 mov #imm,Rn */
	r15 = r14;  /* 0C07264A mov Rm,Rn */
	IF(0x0C07264Cu); PR = R32(r15); r15 += 4; UPD(0x0C07264Eu, 3);  /* 0C07264C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C072650u, 1);  /* 0C07264E mov.l @Rm+,Rn */
	IF(0x0C072650u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C072650 rts */
L_0C072660: BLKS(0x0C072660u);
	r0 = 0xC0C21A0u; UPD(0x0C072662u, 1);  /* 0C072660 mov.l @(disp,pc),Rn */
	IF(0x0C072662u); { u32 t_ = r0; PR = 0x0C072666u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C21A0, 0x0C0C21A0u, 0x0C072666u); }  /* 0C072662 jsr @Rn */
L_0C072666: BLKS(0x0C072666u);
	r4 = r8;  /* 0C072666 mov Rm,Rn */
	r8 = 0xC0C22B0u; UPD(0x0C07266Au, 2);  /* 0C072668 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C07266A mov #imm,Rn */
	IF(0x0C07266Cu); { u32 t_ = r8; PR = 0x0C072670u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C22B0, 0x0C0C22B0u, 0x0C072670u); }  /* 0C07266C jsr @Rn */
L_0C072670: BLKS(0x0C072670u);
	r8 = 0xC239474u; UPD(0x0C072672u, 1);  /* 0C072670 mov.l @(disp,pc),Rn */
	r3 = 0xFFFFFFF0u;  /* 0C072672 mov #imm,Rn */
	{ W8(r8, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C072648u, 4); goto L_0C072648; }  /* 0C072674 bra */
}

void blk_f_0C072690(sh3_t *c)
{
	LOCALS;
L_0C072690: BLKS(0x0C072690u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072692u, 1);  /* 0C072690 mov.l Rm,@-Rn */
	r1 = 0xFFFFFFFFu;  /* 0C072692 mov #imm,Rn */
	IF(0x0C072694u); r15 -= 4; W32(r15, PR); UPD(0x0C072696u, 2);  /* 0C072694 sts.l pr,@-Rn */
	r7 = 0xC2ABAA4u; UPD(0x0C072698u, 1);  /* 0C072696 mov.l @(disp,pc),Rn */
	r3 = R32(r7); UPD(0x0C07269Au, 1);  /* 0C072698 mov.l @Rm,Rn */
	r6 = 0xC3C848Cu; UPD(0x0C07269Cu, 1);  /* 0C07269A mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r4 = v_; } UPD(0x0C07269Eu, 1);  /* 0C07269C mov.w @Rm+,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C0726A0u, 1);  /* 0C07269E mov.b @Rm,Rn */
	r5 = 0xC22E015u; UPD(0x0C0726A2u, 1);  /* 0C0726A0 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C0726A2 tst Rm,Rn */
	W32(r7, r3); UPD(0x0C0726A6u, 2);  /* 0C0726A4 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C0726A8u, 1);  /* 0C0726A6 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C0726A8 negc Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0726AA tst Rm,Rn */
	IF(0x0C0726ACu); r0 = T;  /* 0C0726AC movt Rn */
	T = (r3 & r0) == 0;  /* 0C0726AE tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0726C0u, 7); goto L_0C0726C0; } goto L_0C0726B4; }  /* 0C0726B0 bf/s */
L_0C0726B4: BLKS(0x0C0726B4u);
	r0 = 0x1u;  /* 0C0726B4 mov #imm,Rn */
	UPD(0x0C0726B6u, 2);
L_0C0726B6: BLKS(0x0C0726B6u);
	r15 = r14;  /* 0C0726B6 mov Rm,Rn */
	IF(0x0C0726B8u); PR = R32(r15); r15 += 4; UPD(0x0C0726BAu, 2);  /* 0C0726B8 lds.l @Rn+,pr */
	IF(0x0C0726BAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0726BA rts */
L_0C0726C0: BLKS(0x0C0726C0u);
	r0 = 0xC0C2160u; UPD(0x0C0726C2u, 1);  /* 0C0726C0 mov.l @(disp,pc),Rn */
	IF(0x0C0726C2u); { u32 t_ = r0; PR = 0x0C0726C6u; IF(0x0C0726C4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2160, 0x0C0C2160u, 0x0C0726C6u); }  /* 0C0726C2 jsr @Rn */
L_0C0726C6: BLKS(0x0C0726C6u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0726B6u, 3); goto L_0C0726B6; }  /* 0C0726C6 bra */
}

void blk_f_0C0726E0(sh3_t *c)
{
	LOCALS;
L_0C0726E0: BLKS(0x0C0726E0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0726E2u, 1);  /* 0C0726E0 mov.l Rm,@-Rn */
	r0 = 0xC0A71E0u; UPD(0x0C0726E4u, 1);  /* 0C0726E2 mov.l @(disp,pc),Rn */
	IF(0x0C0726E4u); r15 -= 4; W32(r15, PR); UPD(0x0C0726E6u, 1);  /* 0C0726E4 sts.l pr,@-Rn */
	IF(0x0C0726E6u); { u32 t_ = r0; PR = 0x0C0726EAu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A71E0, 0x0C0A71E0u, 0x0C0726EAu); }  /* 0C0726E6 jsr @Rn */
L_0C0726EA: BLKS(0x0C0726EAu);
	T = (r0 & r0) == 0;  /* 0C0726EA tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C072700u, 4); goto L_0C072700; } UPD(0x0C0726F0u, 1); goto L_0C0726F0; }  /* 0C0726EC bf/s */
L_0C0726F0: BLKS(0x0C0726F0u);
	r15 = r14;  /* 0C0726F0 mov Rm,Rn */
	IF(0x0C0726F2u); PR = R32(r15); r15 += 4; UPD(0x0C0726F4u, 2);  /* 0C0726F2 lds.l @Rn+,pr */
	IF(0x0C0726F4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0726F4 rts */
L_0C072700: BLKS(0x0C072700u);
	r0 = 0xC060078u; UPD(0x0C072702u, 1);  /* 0C072700 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C072702 mov #imm,Rn */
	IF(0x0C072704u); { u32 t_ = r0; PR = 0x0C072708u; r5 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C060078, 0x0C060078u, 0x0C072708u); }  /* 0C072704 jsr @Rn */
L_0C072708: BLKS(0x0C072708u);
	r3 = 0xC3C4164u; UPD(0x0C07270Au, 1);  /* 0C072708 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C07270A mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C07270Eu, 2);  /* 0C07270C mov.b @Rm,Rn */
	r4 = 0xC175800u; UPD(0x0C072710u, 1);  /* 0C07270E mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C072710 and #imm,r0 */
	IF(0x0C072712u); r0 <<= 2;  /* 0C072712 shll2 Rn */
	IF(0x0C072714u); r3 = R32(r0 + r4); UPD(0x0C072716u, 3);  /* 0C072714 mov.l @(r0,Rm),Rn */
	r0 = 0xC23E0A6u; UPD(0x0C072718u, 1);  /* 0C072716 mov.l @(disp,pc),Rn */
	r5 = 0xC3CA6F4u; UPD(0x0C07271Au, 1);  /* 0C072718 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C07271Cu, 1);  /* 0C07271A mov.b @Rm,Rn */
	W32(r5, r1); UPD(0x0C07271Eu, 1);  /* 0C07271C mov.l Rm,@Rn */
	r0 = r2 & 0xFF;  /* 0C07271E extu.b Rm,Rn */
	IF(0x0C072720u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C072722u, 2);  /* 0C072720 mov.b @(r0,Rm),Rn */
	r0 = 0xC0C2110u; UPD(0x0C072724u, 1);  /* 0C072722 mov.l @(disp,pc),Rn */
	IF(0x0C072724u); { u32 t_ = r0; PR = 0x0C072728u; IF(0x0C072726u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C072728u); }  /* 0C072724 jsr @Rn */
L_0C072728: BLKS(0x0C072728u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0726F0u, 3); goto L_0C0726F0; }  /* 0C072728 bra */
}

void blk_f_0C072750(sh3_t *c)
{
	LOCALS;
L_0C072750: BLKS(0x0C072750u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072752u, 1);  /* 0C072750 mov.l Rm,@-Rn */
	r0 = 0xC0A7330u; UPD(0x0C072754u, 1);  /* 0C072752 mov.l @(disp,pc),Rn */
	IF(0x0C072754u); r15 -= 4; W32(r15, PR); UPD(0x0C072756u, 1);  /* 0C072754 sts.l pr,@-Rn */
	IF(0x0C072756u); { u32 t_ = r0; PR = 0x0C07275Au; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A7330, 0x0C0A7330u, 0x0C07275Au); }  /* 0C072756 jsr @Rn */
L_0C07275A: BLKS(0x0C07275Au);
	T = (r0 & r0) == 0;  /* 0C07275A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C072770u, 4); goto L_0C072770; } UPD(0x0C072760u, 1); goto L_0C072760; }  /* 0C07275C bf/s */
L_0C072760: BLKS(0x0C072760u);
	r15 = r14;  /* 0C072760 mov Rm,Rn */
	IF(0x0C072762u); PR = R32(r15); r15 += 4; UPD(0x0C072764u, 2);  /* 0C072762 lds.l @Rn+,pr */
	IF(0x0C072764u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C072764 rts */
L_0C072770: BLKS(0x0C072770u);
	r0 = 0xC060078u; UPD(0x0C072772u, 1);  /* 0C072770 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C072772 mov #imm,Rn */
	IF(0x0C072774u); { u32 t_ = r0; PR = 0x0C072778u; r5 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C060078, 0x0C060078u, 0x0C072778u); }  /* 0C072774 jsr @Rn */
L_0C072778: BLKS(0x0C072778u);
	r0 = 0xC23E0A6u; UPD(0x0C07277Au, 1);  /* 0C072778 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C07277A mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C07277Eu, 2);  /* 0C07277C mov.b @Rm,Rn */
	r3 = 0xC175808u; UPD(0x0C072780u, 1);  /* 0C07277E mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C072780 extu.b Rm,Rn */
	IF(0x0C072782u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C072784u, 2);  /* 0C072782 mov.b @(r0,Rm),Rn */
	r4 = 0xC3CA6F4u; UPD(0x0C072786u, 1);  /* 0C072784 mov.l @(disp,pc),Rn */
	r0 = 0xC0C2110u; UPD(0x0C072788u, 1);  /* 0C072786 mov.l @(disp,pc),Rn */
	W32(r4, r1); UPD(0x0C07278Au, 1);  /* 0C072788 mov.l Rm,@Rn */
	IF(0x0C07278Au); { u32 t_ = r0; PR = 0x0C07278Eu; r4 = r2 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C07278Eu); }  /* 0C07278A jsr @Rn */
L_0C07278E: BLKS(0x0C07278Eu);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C072760u, 3); goto L_0C072760; }  /* 0C07278E bra */
}

void blk_f_0C0727B0(sh3_t *c)
{
	LOCALS;
L_0C0727B0: BLKS(0x0C0727B0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0727B2u, 1);  /* 0C0727B0 mov.l Rm,@-Rn */
	r0 = 0xC0A7680u; UPD(0x0C0727B4u, 1);  /* 0C0727B2 mov.l @(disp,pc),Rn */
	IF(0x0C0727B4u); r15 -= 4; W32(r15, PR); UPD(0x0C0727B6u, 1);  /* 0C0727B4 sts.l pr,@-Rn */
	IF(0x0C0727B6u); { u32 t_ = r0; PR = 0x0C0727BAu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A7680, 0x0C0A7680u, 0x0C0727BAu); }  /* 0C0727B6 jsr @Rn */
L_0C0727BA: BLKS(0x0C0727BAu);
	T = (r0 & r0) == 0;  /* 0C0727BA tst Rm,Rn */
	IF(0x0C0727BCu); r0 = T;  /* 0C0727BC movt Rn */
	T = (r0 & r0) == 0;  /* 0C0727BE tst Rm,Rn */
	IF(0x0C0727C0u); r0 = T;  /* 0C0727C0 movt Rn */
	r15 = r14;  /* 0C0727C2 mov Rm,Rn */
	IF(0x0C0727C4u); PR = R32(r15); r15 += 4; UPD(0x0C0727C6u, 6);  /* 0C0727C4 lds.l @Rn+,pr */
	IF(0x0C0727C6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0727C6 rts */
}

void blk_f_0C0727D0(sh3_t *c)
{
	LOCALS;
L_0C0727D0: BLKS(0x0C0727D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0727D2u, 1);  /* 0C0727D0 mov.l Rm,@-Rn */
	r0 = 0xC0AE7E0u; UPD(0x0C0727D4u, 1);  /* 0C0727D2 mov.l @(disp,pc),Rn */
	IF(0x0C0727D4u); r15 -= 4; W32(r15, PR); UPD(0x0C0727D6u, 1);  /* 0C0727D4 sts.l pr,@-Rn */
	IF(0x0C0727D6u); { u32 t_ = r0; PR = 0x0C0727DAu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0AE7E0, 0x0C0AE7E0u, 0x0C0727DAu); }  /* 0C0727D6 jsr @Rn */
L_0C0727DA: BLKS(0x0C0727DAu);
	T = (r0 & r0) == 0;  /* 0C0727DA tst Rm,Rn */
	IF(0x0C0727DCu); r0 = T;  /* 0C0727DC movt Rn */
	T = (r0 & r0) == 0;  /* 0C0727DE tst Rm,Rn */
	IF(0x0C0727E0u); r0 = T;  /* 0C0727E0 movt Rn */
	r15 = r14;  /* 0C0727E2 mov Rm,Rn */
	IF(0x0C0727E4u); PR = R32(r15); r15 += 4; UPD(0x0C0727E6u, 6);  /* 0C0727E4 lds.l @Rn+,pr */
	IF(0x0C0727E6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0727E6 rts */
}

void blk_f_0C0727F0(sh3_t *c)
{
	LOCALS;
L_0C0727F0: BLKS(0x0C0727F0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0727F2u, 1);  /* 0C0727F0 mov.l Rm,@-Rn */
	r0 = 0xC2ABAA4u; UPD(0x0C0727F4u, 1);  /* 0C0727F2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0727F4 mov Rm,Rn */
	r4 = R32(r0); UPD(0x0C0727F8u, 2);  /* 0C0727F6 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r2 = v_; } UPD(0x0C0727FAu, 1);  /* 0C0727F8 mov.w @Rm+,Rn */
	r1 = 0xC234C00u; UPD(0x0C0727FCu, 1);  /* 0C0727FA mov.l @(disp,pc),Rn */
	W32(r0, r4); UPD(0x0C0727FEu, 1);  /* 0C0727FC mov.l Rm,@Rn */
	W32(r1, r2); UPD(0x0C072800u, 1);  /* 0C0727FE mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C072800 mov #imm,Rn */
	r15 = r14;  /* 0C072802 mov Rm,Rn */
	IF(0x0C072804u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C072804 rts */
}

void blk_f_0C072810(sh3_t *c)
{
	LOCALS;
L_0C072810: BLKS(0x0C072810u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C072812u, 1);  /* 0C072810 mov.l Rm,@-Rn */
	r2 = 0xC2ABAA4u; UPD(0x0C072814u, 1);  /* 0C072812 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072816u, 1);  /* 0C072814 mov.l Rm,@-Rn */
	r4 = R32(r2); UPD(0x0C072818u, 1);  /* 0C072816 mov.l @Rm,Rn */
	IF(0x0C072818u); r15 -= 4; W32(r15, PR); UPD(0x0C07281Au, 1);  /* 0C072818 sts.l pr,@-Rn */
	r4 += 0x1u;  /* 0C07281A add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r0 = v_; } UPD(0x0C07281Eu, 2);  /* 0C07281C mov.b @Rm+,Rn */
	r14 = r15;  /* 0C07281E mov Rm,Rn */
	r6 = 0xC239482u; UPD(0x0C072822u, 2);  /* 0C072820 mov.l @(disp,pc),Rn */
	r8 = r0 & 0xFF;  /* 0C072822 extu.b Rm,Rn */
	r5 = 0xC28F60Au; UPD(0x0C072826u, 2);  /* 0C072824 mov.l @(disp,pc),Rn */
	T = (r8 & r8) == 0;  /* 0C072826 tst Rm,Rn */
	r3 = 0xC2B038Cu; UPD(0x0C07282Au, 2);  /* 0C072828 mov.l @(disp,pc),Rn */
	W8(r6, r0); UPD(0x0C07282Cu, 1);  /* 0C07282A mov.b Rm,@Rn */
	W8(r5, r0); UPD(0x0C07282Eu, 1);  /* 0C07282C mov.b Rm,@Rn */
	W8(r3, r0); UPD(0x0C072830u, 1);  /* 0C07282E mov.b Rm,@Rn */
	{ u32 c_ = T; W32(r2, r4); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C072840u, 3); goto L_0C072840; } UPD(0x0C072834u, 1); goto L_0C072834; }  /* 0C072830 bt/s */
L_0C072834: BLKS(0x0C072834u);
	r0 = 0x1u;  /* 0C072834 mov #imm,Rn */
	UPD(0x0C072836u, 1);
L_0C072836: BLKS(0x0C072836u);
	r15 = r14;  /* 0C072836 mov Rm,Rn */
	IF(0x0C072838u); PR = R32(r15); r15 += 4; UPD(0x0C07283Au, 2);  /* 0C072838 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07283Cu, 1);  /* 0C07283A mov.l @Rm+,Rn */
	IF(0x0C07283Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07283C rts */
L_0C072840: BLKS(0x0C072840u);
	r0 = 0xC060078u; UPD(0x0C072842u, 1);  /* 0C072840 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C072842 mov #imm,Rn */
	IF(0x0C072844u); { u32 t_ = r0; PR = 0x0C072848u; r5 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C060078, 0x0C060078u, 0x0C072848u); }  /* 0C072844 jsr @Rn */
L_0C072848: BLKS(0x0C072848u);
	r0 = 0xC3CA6F4u; UPD(0x0C07284Au, 1);  /* 0C072848 mov.l @(disp,pc),Rn */
	W32(r0, r8); UPD(0x0C07284Cu, 1);  /* 0C07284A mov.l Rm,@Rn */
	r8 = 0xC0C2160u; UPD(0x0C07284Eu, 1);  /* 0C07284C mov.l @(disp,pc),Rn */
	IF(0x0C07284Eu); { u32 t_ = r8; PR = 0x0C072852u; r4 = 0x5Au; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2160, 0x0C0C2160u, 0x0C072852u); }  /* 0C07284E jsr @Rn */
L_0C072852: BLKS(0x0C072852u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C072836u, 3); goto L_0C072836; }  /* 0C072852 bra */
}

void blk_f_0C072880(sh3_t *c)
{
	LOCALS;
L_0C072880: BLKS(0x0C072880u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072882u, 1);  /* 0C072880 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C072882 mov #imm,Rn */
	r0 = 0xC060078u; UPD(0x0C072886u, 2);  /* 0C072884 mov.l @(disp,pc),Rn */
	r5 = 0x10u;  /* 0C072886 mov #imm,Rn */
	IF(0x0C072888u); r15 -= 4; W32(r15, PR); UPD(0x0C07288Au, 2);  /* 0C072888 sts.l pr,@-Rn */
	IF(0x0C07288Au); { u32 t_ = r0; PR = 0x0C07288Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C060078, 0x0C060078u, 0x0C07288Eu); }  /* 0C07288A jsr @Rn */
L_0C07288E: BLKS(0x0C07288Eu);
	r0 = 0xC3CA6F4u; UPD(0x0C072890u, 1);  /* 0C07288E mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C072890 mov #imm,Rn */
	W32(r0, r1); UPD(0x0C072894u, 2);  /* 0C072892 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C072894 mov #imm,Rn */
	r15 = r14;  /* 0C072896 mov Rm,Rn */
	IF(0x0C072898u); PR = R32(r15); r15 += 4; UPD(0x0C07289Au, 3);  /* 0C072898 lds.l @Rn+,pr */
	IF(0x0C07289Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07289A rts */
}

void blk_f_0C0728B0(sh3_t *c)
{
	LOCALS;
L_0C0728B0: BLKS(0x0C0728B0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0728B2u, 1);  /* 0C0728B0 mov.l Rm,@-Rn */
	r3 = 0xC3C43C4u; UPD(0x0C0728B4u, 1);  /* 0C0728B2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0728B4 mov Rm,Rn */
	r2 = 0xC2B038Cu; UPD(0x0C0728B8u, 2);  /* 0C0728B6 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C0728BAu, 1);  /* 0C0728B8 mov.b @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0728BCu, 1);  /* 0C0728BA mov.b @Rm,Rn */
	r0 = 0xC29D736u; UPD(0x0C0728BEu, 1);  /* 0C0728BC mov.l @(disp,pc),Rn */
	T = r5 == r4;  /* 0C0728BE cmp/eq Rm,Rn */
	r7 = 0xC28F60Au; UPD(0x0C0728C2u, 2);  /* 0C0728C0 mov.l @(disp,pc),Rn */
	r4 = 0xFFFFFFFFu;  /* 0C0728C2 mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C0728C6u, 2);  /* 0C0728C4 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C0728C6 negc Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0728CAu, 2);  /* 0C0728C8 mov.b @Rm,Rn */
	r0 = 0xC3C4171u; UPD(0x0C0728CCu, 1);  /* 0C0728CA mov.l @(disp,pc),Rn */
	T = r6 == r3;  /* 0C0728CC cmp/eq Rm,Rn */
	r7 = 0xC239482u; UPD(0x0C0728D0u, 2);  /* 0C0728CE mov.l @(disp,pc),Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C0728D0 negc Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C0728D4u, 2);  /* 0C0728D2 mov.b @Rm,Rn */
	r5 |= r2;  /* 0C0728D4 or Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0728D8u, 2);  /* 0C0728D6 mov.b @Rm,Rn */
	T = r6 == r3;  /* 0C0728D8 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C0728DA negc Rm,Rn */
	r5 |= r2;  /* 0C0728DC or Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0728DE tst Rm,Rn */
	IF(0x0C0728E0u); r0 = T;  /* 0C0728E0 movt Rn */
	T = (r0 & r0) == 0;  /* 0C0728E2 tst Rm,Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0728E4 negc Rm,Rn */
	r15 = r14;  /* 0C0728E6 mov Rm,Rn */
	IF(0x0C0728E8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 11); RET(t_); }  /* 0C0728E8 rts */
}

void blk_f_0C072910(sh3_t *c)
{
	LOCALS;
L_0C072910: BLKS(0x0C072910u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C072912u, 1);  /* 0C072910 mov.l Rm,@-Rn */
	r5 = 0x1u;  /* 0C072912 mov #imm,Rn */
	r3 = 0xC28EDFCu; UPD(0x0C072916u, 2);  /* 0C072914 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C072916 mov Rm,Rn */
	r7 = 0xC297A40u; UPD(0x0C07291Au, 2);  /* 0C072918 mov.l @(disp,pc),Rn */
	r6 = r3;  /* 0C07291A mov Rm,Rn */
	r2 = 0x0u;  /* 0C07291C mov #imm,Rn */
	r4 = 0xFu;  /* 0C07291E mov #imm,Rn */
	UPD(0x0C072920u, 3);
L_0C072920: BLKS(0x0C072920u);
	r0 = R32(r7); UPD(0x0C072922u, 1);  /* 0C072920 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C072922 tst Rm,Rn */
	{ u32 c_ = !T; r7 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C072930u, 4); goto L_0C072930; } goto L_0C072928; }  /* 0C072924 bf/s */
L_0C072928: BLKS(0x0C072928u);
	W16(r6, r2); UPD(0x0C07292Au, 2);  /* 0C072928 mov.w Rm,@Rn */
	IF(0x0C07292Au); r5 -= 1; T = r5 == 0;  /* 0C07292A dt Rn */
	{ u32 c_ = T; r6 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0729B0u, 4); goto L_0C0729B0; } UPD(0x0C072930u, 1); goto L_0C072930; }  /* 0C07292C bt/s */
L_0C072930: BLKS(0x0C072930u);
	r0 = r2;  /* 0C072930 mov Rm,Rn */
	r0 += 0x1u;  /* 0C072932 add #imm,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C072934 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r4;  /* 0C072936 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C072920u, 7); goto L_0C072920; } UPD(0x0C07293Cu, 1); goto L_0C07293C; }  /* 0C072938 bf/s */
L_0C07293C: BLKS(0x0C07293Cu);
	T = (r1 & r1) == 0;  /* 0C07293C tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C072990u, 4); goto L_0C072990; } goto L_0C072942; }  /* 0C07293E bt/s */
L_0C072942: BLKS(0x0C072942u);
	r6 = (u32)(s32)(s16)R16(r3); UPD(0x0C072944u, 2);  /* 0C072942 mov.w @Rm,Rn */
	r3 = 0x4u;  /* 0C072944 mov #imm,Rn */
	IF(0x0C072946u); ARG0(0x463Du); { s32 s_ = (s32)r3; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C072946 shld Rm,Rn */
	r7 = 0xC297A40u; UPD(0x0C07294Au, 3);  /* 0C072948 mov.l @(disp,pc),Rn */
	r2 = 0x80000000u; UPD(0x0C07294Cu, 1);  /* 0C07294A mov.l @(disp,pc),Rn */
	r7 += r6;  /* 0C07294C add Rm,Rn */
	r5 = 0xC2ABAA4u; UPD(0x0C072950u, 2);  /* 0C07294E mov.l @(disp,pc),Rn */
	W32(r7, r2); UPD(0x0C072952u, 1);  /* 0C072950 mov.l Rm,@Rn */
	r3 = R32(r5); UPD(0x0C072954u, 1);  /* 0C072952 mov.l @Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C072956u, 1);  /* 0C072954 mov.w @Rm,Rn */
	IF(0x0C072956u); T = (s32)r2 >= 0;  /* 0C072956 cmp/pz Rn */
	if (T) { UPD(0x0C0729A0u, 4); goto L_0C0729A0; }  /* 0C072958 bt */
L_0C07295A: BLKS(0x0C07295Au);
	r7 += 0x8u;  /* 0C07295A add #imm,Rn */
	r0 = 0xC29D728u; UPD(0x0C07295Eu, 2);  /* 0C07295C mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r0); UPD(0x0C072960u, 1);  /* 0C07295E mov.w @Rm,Rn */
	r0 = 0x7FFFu; UPD(0x0C072962u, 1);  /* 0C072960 mov.w @(disp,pc),Rn */
	r4 += r2;  /* 0C072962 add Rm,Rn */
	r4 &= r0;  /* 0C072964 and Rm,Rn */
	W16(r7, r4); UPD(0x0C072968u, 3);  /* 0C072966 mov.w Rm,@Rn */
L_0C072968: BLKS(0x0C072968u);
	r3 += 0x2u;  /* 0C072968 add #imm,Rn */
	W32(r5, r3); UPD(0x0C07296Cu, 2);  /* 0C07296A mov.l Rm,@Rn */
	r3 = 0xC2ABAA4u; UPD(0x0C07296Eu, 1);  /* 0C07296C mov.l @(disp,pc),Rn */
	r5 = 0xC297A40u; UPD(0x0C072970u, 1);  /* 0C07296E mov.l @(disp,pc),Rn */
	r7 = R32(r3); UPD(0x0C072972u, 1);  /* 0C072970 mov.l @Rm,Rn */
	r5 += r6;  /* 0C072972 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C072976u, 2);  /* 0C072974 mov.w @Rm+,Rn */
	r5 += 0xAu;  /* 0C072976 add #imm,Rn */
	W16(r5, r0); UPD(0x0C07297Au, 2);  /* 0C072978 mov.w Rm,@Rn */
	r6 = 0x0u;  /* 0C07297A mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r4 = v_; } UPD(0x0C07297Eu, 2);  /* 0C07297C mov.w @Rm+,Rn */
	r5 += 0xFFFFFFFAu;  /* 0C07297E add #imm,Rn */
	W16(r5, r4); UPD(0x0C072982u, 2);  /* 0C072980 mov.w Rm,@Rn */
	r0 = 0x1u;  /* 0C072982 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r1 = v_; } UPD(0x0C072986u, 2);  /* 0C072984 mov.w @Rm+,Rn */
	r5 += 0x2u;  /* 0C072986 add #imm,Rn */
	W16(r5, r1); UPD(0x0C07298Au, 2);  /* 0C072988 mov.w Rm,@Rn */
	r5 += 0x6u;  /* 0C07298A add #imm,Rn */
	W32(r3, r7); UPD(0x0C07298Eu, 2);  /* 0C07298C mov.l Rm,@Rn */
	W16(r5, r6); UPD(0x0C072990u, 1);  /* 0C07298E mov.w Rm,@Rn */
L_0C072990: BLKS(0x0C072990u);
	r15 = r14;  /* 0C072990 mov Rm,Rn */
	IF(0x0C072992u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C072992 rts */
L_0C0729A0: BLKS(0x0C0729A0u);
	r7 += 0x8u;  /* 0C0729A0 add #imm,Rn */
	{ W16(r7, r2); /* slot mov.w Rm,@Rn */ UPD(0x0C072968u, 4); goto L_0C072968; }  /* 0C0729A2 bra */
L_0C0729B0: BLKS(0x0C0729B0u);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C07293Cu, 3); goto L_0C07293C; }  /* 0C0729B0 bra */
}

void blk_f_0C0729D0(sh3_t *c)
{
	LOCALS;
L_0C0729D0: BLKS(0x0C0729D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0729D2u, 1);  /* 0C0729D0 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C0729D2 mov #imm,Rn */
	r2 = 0xC297A40u; UPD(0x0C0729D6u, 2);  /* 0C0729D4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0729D6 mov Rm,Rn */
	r7 = 0x0u;  /* 0C0729D8 mov #imm,Rn */
	r3 = 0xFu;  /* 0C0729DA mov #imm,Rn */
	UPD(0x0C0729DCu, 3);
L_0C0729DC: BLKS(0x0C0729DCu);
	W32(r2, r7); UPD(0x0C0729DEu, 1);  /* 0C0729DC mov.l Rm,@Rn */
	r1 += 0x1u;  /* 0C0729DE add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C0729E0 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C0729E2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0729DCu, 6); goto L_0C0729DC; } goto L_0C0729E8; }  /* 0C0729E4 bf/s */
L_0C0729E8: BLKS(0x0C0729E8u);
	r0 = 0x1u;  /* 0C0729E8 mov #imm,Rn */
	r15 = r14;  /* 0C0729EA mov Rm,Rn */
	IF(0x0C0729ECu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C0729EC rts */
}


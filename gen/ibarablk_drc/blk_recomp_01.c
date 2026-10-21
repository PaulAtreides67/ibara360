#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C056664(sh3_t *c)
{
	LOCALS;
L_0C056664: BLKS(0x0C056664u);
	IF(0x0C056664u); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C056664 stc Rb_bank,Rn */
	IF(0x0C056666u); ARG0(0x05D2u); r5 = c->rbank[5];  /* 0C056666 stc Rb_bank,Rn */
	IF(0x0C056668u); r15 -= 4; W32(r15, PR); UPD(0x0C05666Au, 3);  /* 0C056668 sts.l pr,@-Rn */
	{ PR = 0x0C05666Eu; { u32 v_ = r5; r15 -= 4; W32(r15, v_); } /* slot mov.l Rm,@-Rn */ UPD(0x0C05669Au, 3); CALL(blk_f_0C05669A, 0x0C05666Eu); }  /* 0C05666A bsr */
L_0C05666E: BLKS(0x0C05666Eu);
	{ u32 v_ = R32(r15); r15 += 4; r4 = v_; } UPD(0x0C056670u, 1);  /* 0C05666E mov.l @Rm+,Rn */
	{ PR = 0x0C056674u; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C056752u, 3); CALL(blk_f_0C056752, 0x0C056674u); }  /* 0C056670 bsr */
L_0C056674: BLKS(0x0C056674u);
	IF(0x0C056674u); PR = R32(r15); r15 += 4; UPD(0x0C056676u, 1);  /* 0C056674 lds.l @Rn+,pr */
	IF(0x0C056676u); { u32 t_ = PR; IF(0x0C056678u); ARG0(0x408Eu); c->rbank[0] = r0; /* slot ldc Rn,Rb_bank */ UPD(t_, 3); RET(t_); }  /* 0C056676 rts */
}

/* FUN_0c05667c */
void blk_f_0C05667C(sh3_t *c)
{
	LOCALS;
L_0C05667C: BLKS(0x0C05667Cu);
	r0 = 0xC002780u; UPD(0x0C05667Eu, 1);  /* 0C05667C mov.l @(disp,pc),Rn */
	r1 = 0xC002780u; UPD(0x0C056680u, 1);  /* 0C05667E mov.l @(disp,pc),Rn */
	r0 -= r1;  /* 0C056680 sub Rm,Rn */
	r1 = 0xCu; UPD(0x0C056684u, 2);  /* 0C056682 mov.l @(disp,pc),Rn */
	r0 += r1;  /* 0C056684 add Rm,Rn */
	UPDN(0x0C056688u, 7); ARG0(0xC30Fu); TRAPA(0x0C056688u, 15);  /* 0C056686 trapa #imm */
L_0C056688: BLKS(0x0C056688u);
	IF(0x0C056688u); { u32 t_ = PR; IF(0x0C05668Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C056688 rts */
}

void blk_f_0C056698(sh3_t *c)
{
	LOCALS;
L_0C056698: BLKS(0x0C056698u);
	IF(0x0C056698u); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C056698 stc Rb_bank,Rn */
	r7 = 0xC056550u; UPD(0x0C05669Cu, 2);  /* 0C05669A mov.l @(disp,pc),Rn */
	T = (r4 & r4) == 0;  /* 0C05669C tst Rm,Rn */
	{ u32 c_ = T; r4 += 0xFFFFFFE0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0566E0u, 4); goto L_0C0566E0; } goto L_0C0566A2; }  /* 0C05669E bt/s */
L_0C0566A2: BLKS(0x0C0566A2u);
	r5 = R32(r4 + 0x8u); UPD(0x0C0566A4u, 2);  /* 0C0566A2 mov.l @(disp,Rm),Rn */
	r6 = R32(r4 + 0xCu); UPD(0x0C0566A6u, 1);  /* 0C0566A4 mov.l @(disp,Rm),Rn */
	W32(r5 + 0xCu, r6); UPD(0x0C0566A8u, 1);  /* 0C0566A6 mov.l Rm,@(disp,Rn) */
	T = (r6 & r6) == 0;  /* 0C0566A8 tst Rm,Rn */
	{ u32 c_ = T; r0 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0566C4u, 4); goto L_0C0566C4; } goto L_0C0566AE; }  /* 0C0566AA bt/s */
L_0C0566AE: BLKS(0x0C0566AEu);
	r1 = R32(r5 + 0x0u); UPD(0x0C0566B0u, 2);  /* 0C0566AE mov.l @(disp,Rm),Rn */
	r0 -= r5;  /* 0C0566B0 sub Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0566B2 tst Rm,Rn */
	r0 -= r1;  /* 0C0566B4 sub Rm,Rn */
	{ u32 c_ = T; W32(r5 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0566D6u, 6); goto L_0C0566D6; } UPD(0x0C0566BAu, 1); goto L_0C0566BA; }  /* 0C0566B6 bt/s */
L_0C0566BA: BLKS(0x0C0566BAu);
	{ W32(r6 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0566D6u, 3); goto L_0C0566D6; }  /* 0C0566BA bra */
L_0C0566C4: BLKS(0x0C0566C4u);
	r0 = 0xC05654Cu; UPD(0x0C0566C6u, 1);  /* 0C0566C4 mov.l @(disp,pc),Rn */
	r1 = R32(r5 + 0x0u); UPD(0x0C0566C8u, 1);  /* 0C0566C6 mov.l @(disp,Rm),Rn */
	r0 = R32(r0); UPD(0x0C0566CAu, 1);  /* 0C0566C8 mov.l @Rm,Rn */
	r0 -= r5;  /* 0C0566CA sub Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0566CC tst Rm,Rn */
	r0 -= r1;  /* 0C0566CE sub Rm,Rn */
	{ u32 c_ = T; W32(r5 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0566D6u, 6); goto L_0C0566D6; } UPD(0x0C0566D4u, 1); goto L_0C0566D4; }  /* 0C0566D0 bt/s */
L_0C0566D4: BLKS(0x0C0566D4u);
	W32(r6 + 0x8u, r5); UPD(0x0C0566D6u, 1);  /* 0C0566D4 mov.l Rm,@(disp,Rn) */
L_0C0566D6: BLKS(0x0C0566D6u);
	r0 = R32(r7); UPD(0x0C0566D8u, 1);  /* 0C0566D6 mov.l @Rm,Rn */
	T = r0 == r4;  /* 0C0566D8 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0566DCu); ; /* slot nop */ if (c_) { UPD(0x0C0566E0u, 4); goto L_0C0566E0; } goto L_0C0566DE; }  /* 0C0566DA bf/s */
L_0C0566DE: BLKS(0x0C0566DEu);
	W32(r7, r5); UPD(0x0C0566E0u, 2);  /* 0C0566DE mov.l Rm,@Rn */
L_0C0566E0: BLKS(0x0C0566E0u);
	IF(0x0C0566E0u); { u32 t_ = PR; IF(0x0C0566E2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0566E0 rts */
}

/* free */
void blk_f_0C05669A(sh3_t *c)
{
	LOCALS;
L_0C05669A: BLKS(0x0C05669Au);
	r7 = 0xC056550u; UPD(0x0C05669Cu, 1);  /* 0C05669A mov.l @(disp,pc),Rn */
	T = (r4 & r4) == 0;  /* 0C05669C tst Rm,Rn */
	{ u32 c_ = T; r4 += 0xFFFFFFE0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0566E0u, 4); goto L_0C0566E0; } goto L_0C0566A2; }  /* 0C05669E bt/s */
L_0C0566A2: BLKS(0x0C0566A2u);
	r5 = R32(r4 + 0x8u); UPD(0x0C0566A4u, 2);  /* 0C0566A2 mov.l @(disp,Rm),Rn */
	r6 = R32(r4 + 0xCu); UPD(0x0C0566A6u, 1);  /* 0C0566A4 mov.l @(disp,Rm),Rn */
	W32(r5 + 0xCu, r6); UPD(0x0C0566A8u, 1);  /* 0C0566A6 mov.l Rm,@(disp,Rn) */
	T = (r6 & r6) == 0;  /* 0C0566A8 tst Rm,Rn */
	{ u32 c_ = T; r0 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0566C4u, 4); goto L_0C0566C4; } goto L_0C0566AE; }  /* 0C0566AA bt/s */
L_0C0566AE: BLKS(0x0C0566AEu);
	r1 = R32(r5 + 0x0u); UPD(0x0C0566B0u, 2);  /* 0C0566AE mov.l @(disp,Rm),Rn */
	r0 -= r5;  /* 0C0566B0 sub Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0566B2 tst Rm,Rn */
	r0 -= r1;  /* 0C0566B4 sub Rm,Rn */
	{ u32 c_ = T; W32(r5 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0566D6u, 6); goto L_0C0566D6; } UPD(0x0C0566BAu, 1); goto L_0C0566BA; }  /* 0C0566B6 bt/s */
L_0C0566BA: BLKS(0x0C0566BAu);
	{ W32(r6 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0566D6u, 3); goto L_0C0566D6; }  /* 0C0566BA bra */
L_0C0566C4: BLKS(0x0C0566C4u);
	r0 = 0xC05654Cu; UPD(0x0C0566C6u, 1);  /* 0C0566C4 mov.l @(disp,pc),Rn */
	r1 = R32(r5 + 0x0u); UPD(0x0C0566C8u, 1);  /* 0C0566C6 mov.l @(disp,Rm),Rn */
	r0 = R32(r0); UPD(0x0C0566CAu, 1);  /* 0C0566C8 mov.l @Rm,Rn */
	r0 -= r5;  /* 0C0566CA sub Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0566CC tst Rm,Rn */
	r0 -= r1;  /* 0C0566CE sub Rm,Rn */
	{ u32 c_ = T; W32(r5 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0566D6u, 6); goto L_0C0566D6; } UPD(0x0C0566D4u, 1); goto L_0C0566D4; }  /* 0C0566D0 bt/s */
L_0C0566D4: BLKS(0x0C0566D4u);
	W32(r6 + 0x8u, r5); UPD(0x0C0566D6u, 1);  /* 0C0566D4 mov.l Rm,@(disp,Rn) */
L_0C0566D6: BLKS(0x0C0566D6u);
	r0 = R32(r7); UPD(0x0C0566D8u, 1);  /* 0C0566D6 mov.l @Rm,Rn */
	T = r0 == r4;  /* 0C0566D8 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0566DCu); ; /* slot nop */ if (c_) { UPD(0x0C0566E0u, 4); goto L_0C0566E0; } goto L_0C0566DE; }  /* 0C0566DA bf/s */
L_0C0566DE: BLKS(0x0C0566DEu);
	W32(r7, r5); UPD(0x0C0566E0u, 2);  /* 0C0566DE mov.l Rm,@Rn */
L_0C0566E0: BLKS(0x0C0566E0u);
	IF(0x0C0566E0u); { u32 t_ = PR; IF(0x0C0566E2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0566E0 rts */
}

void blk_f_0C056704(sh3_t *c)
{
	LOCALS;
L_0C056704: BLKS(0x0C056704u);
	IF(0x0C056704u); r15 -= 4; W32(r15, PR); UPD(0x0C056706u, 1);  /* 0C056704 sts.l pr,@-Rn */
	IF(0x0C056706u); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C056706 stc Rb_bank,Rn */
	r5 = r4;  /* 0C056708 mov Rm,Rn */
	r4 = R32(r4); UPD(0x0C05670Cu, 3);  /* 0C05670A mov.l @Rm,Rn */
	IF(0x0C05670Cu); ARG0(0x44CEu); c->rbank[4] = r4;  /* 0C05670C ldc Rn,Rb_bank */
	{ PR = 0x0C056712u; { u32 v_ = r5; r15 -= 4; W32(r15, v_); } /* slot mov.l Rm,@-Rn */ UPD(0x0C05669Au, 4); CALL(blk_f_0C05669A, 0x0C056712u); }  /* 0C05670E bsr */
L_0C056712: BLKS(0x0C056712u);
	{ u32 v_ = R32(r15); r15 += 4; r5 = v_; } UPD(0x0C056714u, 1);  /* 0C056712 mov.l @Rm+,Rn */
	r0 = 0x0u;  /* 0C056714 mov #imm,Rn */
	IF(0x0C056716u); PR = R32(r15); r15 += 4; UPD(0x0C056718u, 2);  /* 0C056716 lds.l @Rn+,pr */
	IF(0x0C056718u); { u32 t_ = PR; W32(r5, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C056718 rts */
}

void blk_f_0C056738(sh3_t *c)
{
	LOCALS;
L_0C056738: BLKS(0x0C056738u);
	IF(0x0C056738u); r15 -= 4; W32(r15, PR); UPD(0x0C05673Au, 1);  /* 0C056738 sts.l pr,@-Rn */
	IF(0x0C05673Au); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C05673A stc Rb_bank,Rn */
	{ PR = 0x0C056740u; IF(0x0C05673Eu); ARG0(0x05D2u); r5 = c->rbank[5]; /* slot stc Rb_bank,Rn */ UPD(0x0C056752u, 4); CALL(blk_f_0C056752, 0x0C056740u); }  /* 0C05673C bsr */
L_0C056740: BLKS(0x0C056740u);
	IF(0x0C056740u); PR = R32(r15); r15 += 4; UPD(0x0C056742u, 1);  /* 0C056740 lds.l @Rn+,pr */
	IF(0x0C056742u); { u32 t_ = PR; IF(0x0C056744u); ARG0(0x408Eu); c->rbank[0] = r0; /* slot ldc Rn,Rb_bank */ UPD(t_, 3); RET(t_); }  /* 0C056742 rts */
}

/* malloc */
void blk_f_0C056746(sh3_t *c)
{
	LOCALS;
L_0C056746: BLKS(0x0C056746u);
	IF(0x0C056746u); r15 -= 4; W32(r15, PR); UPD(0x0C056748u, 1);  /* 0C056746 sts.l pr,@-Rn */
	{ PR = 0x0C05674Cu; IF(0x0C05674Au); ; /* slot nop */ UPD(0x0C056752u, 3); CALL(blk_f_0C056752, 0x0C05674Cu); }  /* 0C056748 bsr */
L_0C05674C: BLKS(0x0C05674Cu);
	IF(0x0C05674Cu); PR = R32(r15); r15 += 4; UPD(0x0C05674Eu, 1);  /* 0C05674C lds.l @Rn+,pr */
	IF(0x0C05674Eu); { u32 t_ = PR; IF(0x0C056750u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C05674E rts */
}

/* heap_alloc */
void blk_f_0C056752(sh3_t *c)
{
	LOCALS;
L_0C056752: BLKS(0x0C056752u);
	{ u32 v_ = r3; r15 -= 4; W32(r15, v_); } UPD(0x0C056754u, 1);  /* 0C056752 mov.l Rm,@-Rn */
	{ u32 v_ = r2; r15 -= 4; W32(r15, v_); } UPD(0x0C056756u, 1);  /* 0C056754 mov.l Rm,@-Rn */
	{ u32 v_ = r1; r15 -= 4; W32(r15, v_); } UPD(0x0C056758u, 1);  /* 0C056756 mov.l Rm,@-Rn */
	{ u32 v_ = r7; r15 -= 4; W32(r15, v_); } UPD(0x0C05675Au, 1);  /* 0C056758 mov.l Rm,@-Rn */
	{ u32 v_ = r6; r15 -= 4; W32(r15, v_); } UPD(0x0C05675Cu, 1);  /* 0C05675A mov.l Rm,@-Rn */
	{ u32 v_ = r5; r15 -= 4; W32(r15, v_); } UPD(0x0C05675Eu, 1);  /* 0C05675C mov.l Rm,@-Rn */
	{ u32 v_ = r4; r15 -= 4; W32(r15, v_); } UPD(0x0C056760u, 1);  /* 0C05675E mov.l Rm,@-Rn */
	r3 = 0x2u;  /* 0C056760 mov #imm,Rn */
	r4 += 0x2Fu;  /* 0C056762 add #imm,Rn */
	r0 = 0xFFFFFFF0u;  /* 0C056764 mov #imm,Rn */
	r4 &= r0;  /* 0C056766 and Rm,Rn */
	IF(0x0C056768u); T = (s32)r5 > 0;  /* 0C056768 cmp/pl Rn */
	{ u32 c_ = !T; r6 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C056770u, 8); goto L_0C056770; } goto L_0C05676E; }  /* 0C05676A bf/s */
L_0C05676E: BLKS(0x0C05676Eu);
	r5 += 0xFFFFFFFFu;  /* 0C05676E add #imm,Rn */
	UPD(0x0C056770u, 2);
L_0C056770: BLKS(0x0C056770u);
	r7 = 0xC056550u; UPD(0x0C056772u, 1);  /* 0C056770 mov.l @(disp,pc),Rn */
	r7 = R32(r7); UPD(0x0C056774u, 1);  /* 0C056772 mov.l @Rm,Rn */
L_0C056774: BLKS(0x0C056774u);
	r0 = R32(r7 + 0x0u); UPD(0x0C056776u, 1);  /* 0C056774 mov.l @(disp,Rm),Rn */
L_0C056776: BLKS(0x0C056776u);
	r2 = R32(r15 + 0x4u); UPD(0x0C056778u, 1);  /* 0C056776 mov.l @(disp,Rm),Rn */
	r0 += r7;  /* 0C056778 add Rm,Rn */
	r0 += 0x20u;  /* 0C05677A add #imm,Rn */
	r0 &= r5;  /* 0C05677C and Rm,Rn */
	r2 -= r0;  /* 0C05677E sub Rm,Rn */
	r2 &= r5;  /* 0C056780 and Rm,Rn */
	r0 = R32(r7 + 0x10u); UPD(0x0C056784u, 6);  /* 0C056782 mov.l @(disp,Rm),Rn */
	r0 -= r2;  /* 0C056784 sub Rm,Rn */
	T = (s32)r0 >= (s32)r4;  /* 0C056786 cmp/ge Rm,Rn */
	{ u32 c_ = T; IF(0x0C05678Au); ; /* slot nop */ if (c_) { UPD(0x0C0567BCu, 5); goto L_0C0567BC; } goto L_0C05678C; }  /* 0C056788 bt/s */
L_0C05678C: BLKS(0x0C05678Cu);
	r7 = R32(r7 + 0xCu); UPD(0x0C05678Eu, 2);  /* 0C05678C mov.l @(disp,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C05678E tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C056792u); ; /* slot nop */ if (c_) { UPD(0x0C056774u, 4); goto L_0C056774; } goto L_0C056794; }  /* 0C056790 bf/s */
L_0C056794: BLKS(0x0C056794u);
	r7 = 0xC056548u; UPD(0x0C056796u, 2);  /* 0C056794 mov.l @(disp,pc),Rn */
	r0 = 0xC056550u; UPD(0x0C056798u, 1);  /* 0C056796 mov.l @(disp,pc),Rn */
	r7 = R32(r7); UPD(0x0C05679Au, 1);  /* 0C056798 mov.l @Rm,Rn */
	IF(0x0C05679Au); r3 -= 1; T = r3 == 0;  /* 0C05679A dt Rn */
	W32(r0, r7); UPD(0x0C05679Eu, 2);  /* 0C05679C mov.l Rm,@Rn */
	{ u32 c_ = !T; r0 = R32(r7 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C056776u, 3); goto L_0C056776; } UPD(0x0C0567A2u, 1); goto L_0C0567A2; }  /* 0C05679E bf/s */
L_0C0567A2: BLKS(0x0C0567A2u);
	{ u32 v_ = R32(r15); r15 += 4; r4 = v_; } UPD(0x0C0567A4u, 1);  /* 0C0567A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r5 = v_; } UPD(0x0C0567A6u, 1);  /* 0C0567A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r6 = v_; } UPD(0x0C0567A8u, 1);  /* 0C0567A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r7 = v_; } UPD(0x0C0567AAu, 1);  /* 0C0567A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r1 = v_; } UPD(0x0C0567ACu, 1);  /* 0C0567AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r2 = v_; } UPD(0x0C0567AEu, 1);  /* 0C0567AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r3 = v_; } UPD(0x0C0567B0u, 1);  /* 0C0567AE mov.l @Rm+,Rn */
	IF(0x0C0567B0u); { u32 t_ = PR; r0 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0567B0 rts */
L_0C0567BC: BLKS(0x0C0567BCu);
	r6 = R32(r7 + 0x0u); UPD(0x0C0567BEu, 1);  /* 0C0567BC mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C0567BE add Rm,Rn */
	r6 += r2;  /* 0C0567C0 add Rm,Rn */
	r0 = R32(r15 + 0x0u); UPD(0x0C0567C4u, 3);  /* 0C0567C2 mov.l @(disp,Rm),Rn */
	W32(r6 + 0x0u, r4); UPD(0x0C0567C6u, 1);  /* 0C0567C4 mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x4u, r0); UPD(0x0C0567C8u, 1);  /* 0C0567C6 mov.l Rm,@(disp,Rn) */
	r1 = R32(r7 + 0xCu); UPD(0x0C0567CAu, 1);  /* 0C0567C8 mov.l @(disp,Rm),Rn */
	W32(r6 + 0x8u, r7); UPD(0x0C0567CCu, 1);  /* 0C0567CA mov.l Rm,@(disp,Rn) */
	T = (r1 & r1) == 0;  /* 0C0567CC tst Rm,Rn */
	{ u32 c_ = T; W32(r6 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0567FCu, 4); goto L_0C0567FC; } UPD(0x0C0567D2u, 1); goto L_0C0567D2; }  /* 0C0567CE bt/s */
L_0C0567D2: BLKS(0x0C0567D2u);
	W32(r1 + 0x8u, r6); UPD(0x0C0567D4u, 1);  /* 0C0567D2 mov.l Rm,@(disp,Rn) */
	r1 -= r6;  /* 0C0567D4 sub Rm,Rn */
	W32(r7 + 0xCu, r6); UPD(0x0C0567D8u, 2);  /* 0C0567D6 mov.l Rm,@(disp,Rn) */
	r1 -= r4;  /* 0C0567D8 sub Rm,Rn */
	W32(r7 + 0x10u, r2); UPD(0x0C0567DCu, 2);  /* 0C0567DA mov.l Rm,@(disp,Rn) */
	r0 = 0xC056550u; UPD(0x0C0567DEu, 1);  /* 0C0567DC mov.l @(disp,pc),Rn */
	W32(r6 + 0x10u, r1); UPD(0x0C0567E0u, 1);  /* 0C0567DE mov.l Rm,@(disp,Rn) */
	W32(r0, r6); UPD(0x0C0567E2u, 1);  /* 0C0567E0 mov.l Rm,@Rn */
	r6 += 0x20u;  /* 0C0567E2 add #imm,Rn */
	r0 = r6;  /* 0C0567E4 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r4 = v_; } UPD(0x0C0567E8u, 3);  /* 0C0567E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r5 = v_; } UPD(0x0C0567EAu, 1);  /* 0C0567E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r6 = v_; } UPD(0x0C0567ECu, 1);  /* 0C0567EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r7 = v_; } UPD(0x0C0567EEu, 1);  /* 0C0567EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r1 = v_; } UPD(0x0C0567F0u, 1);  /* 0C0567EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r2 = v_; } UPD(0x0C0567F2u, 1);  /* 0C0567F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r3 = v_; } UPD(0x0C0567F4u, 1);  /* 0C0567F2 mov.l @Rm+,Rn */
	IF(0x0C0567F4u); { u32 t_ = PR; IF(0x0C0567F6u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0567F4 rts */
L_0C0567FC: BLKS(0x0C0567FCu);
	r0 = 0xC05654Cu; UPD(0x0C0567FEu, 1);  /* 0C0567FC mov.l @(disp,pc),Rn */
	W32(r7 + 0xCu, r6); UPD(0x0C056800u, 1);  /* 0C0567FE mov.l Rm,@(disp,Rn) */
	r0 = R32(r0); UPD(0x0C056802u, 1);  /* 0C056800 mov.l @Rm,Rn */
	W32(r7 + 0x10u, r2); UPD(0x0C056804u, 1);  /* 0C056802 mov.l Rm,@(disp,Rn) */
	r0 -= r6;  /* 0C056804 sub Rm,Rn */
	r1 = 0xC056550u; UPD(0x0C056808u, 2);  /* 0C056806 mov.l @(disp,pc),Rn */
	r0 -= r4;  /* 0C056808 sub Rm,Rn */
	W32(r1, r6); UPD(0x0C05680Cu, 2);  /* 0C05680A mov.l Rm,@Rn */
	W32(r6 + 0x10u, r0); UPD(0x0C05680Eu, 1);  /* 0C05680C mov.l Rm,@(disp,Rn) */
	r6 += 0x20u;  /* 0C05680E add #imm,Rn */
	r0 = r6;  /* 0C056810 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r4 = v_; } UPD(0x0C056814u, 3);  /* 0C056812 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r5 = v_; } UPD(0x0C056816u, 1);  /* 0C056814 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r6 = v_; } UPD(0x0C056818u, 1);  /* 0C056816 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r7 = v_; } UPD(0x0C05681Au, 1);  /* 0C056818 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r1 = v_; } UPD(0x0C05681Cu, 1);  /* 0C05681A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r2 = v_; } UPD(0x0C05681Eu, 1);  /* 0C05681C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r3 = v_; } UPD(0x0C056820u, 1);  /* 0C05681E mov.l @Rm+,Rn */
	IF(0x0C056820u); { u32 t_ = PR; IF(0x0C056822u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C056820 rts */
}

void blk_f_0C056848(sh3_t *c)
{
	LOCALS;
L_0C056848: BLKS(0x0C056848u);
	IF(0x0C056848u); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C056848 stc Rb_bank,Rn */
	IF(0x0C05684Au); ARG0(0x05D2u); r5 = c->rbank[5];  /* 0C05684A stc Rb_bank,Rn */
	IF(0x0C05684Cu); r15 -= 4; W32(r15, MACL); UPD(0x0C05684Eu, 3);  /* 0C05684C sts.l macl,@-Rn */
	IF(0x0C05684Eu); r15 -= 4; W32(r15, PR); UPD(0x0C056850u, 1);  /* 0C05684E sts.l pr,@-Rn */
	IF(0x0C056850u); MACL = r5 * r4;  /* 0C056850 mul.l Rm,Rn */
	r5 = r6;  /* 0C056852 mov Rm,Rn */
	{ PR = 0x0C056858u; IF(0x0C056856u); r4 = MACL; /* slot sts macl,Rn */ UPD(0x0C056752u, 6); CALL(blk_f_0C056752, 0x0C056858u); }  /* 0C056854 bsr */
L_0C056858: BLKS(0x0C056858u);
	IF(0x0C056858u); ARG0(0x408Eu); c->rbank[0] = r0;  /* 0C056858 ldc Rn,Rb_bank */
	r2 = r0;  /* 0C05685A mov Rm,Rn */
	IF(0x0C05685Cu); r3 = MACL;  /* 0C05685C sts macl,Rn */
	T = (r2 & r2) == 0;  /* 0C05685E tst Rm,Rn */
	{ u32 c_ = T; r3 += 0x3u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C056870u, 7); goto L_0C056870; } goto L_0C056864; }  /* 0C056860 bt/s */
L_0C056864: BLKS(0x0C056864u);
	r1 = 0x0u;  /* 0C056864 mov #imm,Rn */
	IF(0x0C056866u); r3 >>= 2;  /* 0C056866 shlr2 Rn */
	UPD(0x0C056868u, 3);
L_0C056868: BLKS(0x0C056868u);
	W32(r2, r1); UPD(0x0C05686Au, 1);  /* 0C056868 mov.l Rm,@Rn */
	IF(0x0C05686Au); r3 -= 1; T = r3 == 0;  /* 0C05686A dt Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C056868u, 4); goto L_0C056868; } UPD(0x0C056870u, 1); goto L_0C056870; }  /* 0C05686C bf/s */
L_0C056870: BLKS(0x0C056870u);
	IF(0x0C056870u); PR = R32(r15); r15 += 4; UPD(0x0C056872u, 1);  /* 0C056870 lds.l @Rn+,pr */
	IF(0x0C056872u); { u32 t_ = PR; IF(0x0C056874u); MACL = R32(r15); r15 += 4; /* slot lds.l @Rn+,macl */ UPD(t_, 3); RET(t_); }  /* 0C056872 rts */
}

/* memset8 */
void blk_f_0C056878(sh3_t *c)
{
	LOCALS;
L_0C056878: BLKS(0x0C056878u);
	W8(r4, r5); UPD(0x0C05687Au, 1);  /* 0C056878 mov.b Rm,@Rn */
	IF(0x0C05687Au); r6 -= 1; T = r6 == 0;  /* 0C05687A dt Rn */
	{ u32 c_ = !T; r4 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C056878u, 4); goto L_0C056878; } goto L_0C056880; }  /* 0C05687C bf/s */
L_0C056880: BLKS(0x0C056880u);
	IF(0x0C056880u); { u32 t_ = PR; IF(0x0C056882u); ; /* slot nop */ UPD(t_, 4); RET(t_); }  /* 0C056880 rts */
}

/* memcpy8 */
void blk_f_0C056884(sh3_t *c)
{
	LOCALS;
L_0C056884: BLKS(0x0C056884u);
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r0 = v_; } UPD(0x0C056886u, 1);  /* 0C056884 mov.b @Rm+,Rn */
	W8(r4, r0); UPD(0x0C056888u, 1);  /* 0C056886 mov.b Rm,@Rn */
	IF(0x0C056888u); r6 -= 1; T = r6 == 0;  /* 0C056888 dt Rn */
	{ u32 c_ = !T; r4 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C056884u, 4); goto L_0C056884; } goto L_0C05688E; }  /* 0C05688A bf/s */
L_0C05688E: BLKS(0x0C05688Eu);
	IF(0x0C05688Eu); { u32 t_ = PR; IF(0x0C056890u); ; /* slot nop */ UPD(t_, 4); RET(t_); }  /* 0C05688E rts */
}

void blk_f_0C0571BC(sh3_t *c)
{
	LOCALS;
L_0C0571BC: BLKS(0x0C0571BCu);
	IF(0x0C0571BCu); r0 = PR;  /* 0C0571BC sts pr,Rn */
	IF(0x0C0571BEu); r15 -= 4; W32(r15, PR); UPD(0x0C0571C0u, 2);  /* 0C0571BE sts.l pr,@-Rn */
	IF(0x0C0571C0u); ARG0(0x40FEu); c->rbank[7] = r0;  /* 0C0571C0 ldc Rn,Rb_bank */
	{ PR = 0x0C0571C6u; IF(0x0C0571C4u); ARG0(0x04C2u); r4 = c->rbank[4]; /* slot stc Rb_bank,Rn */ UPD(0x0C0571CCu, 4); CALL(blk_f_0C0571CC, 0x0C0571C6u); }  /* 0C0571C2 bsr */
L_0C0571C6: BLKS(0x0C0571C6u);
	IF(0x0C0571C6u); PR = R32(r15); r15 += 4; UPD(0x0C0571C8u, 1);  /* 0C0571C6 lds.l @Rn+,pr */
	{ IF(0x0C0571CAu); ARG0(0x408Eu); c->rbank[0] = r0; /* slot ldc Rn,Rb_bank */ UPD(0x0C0575B8u, 3); TAIL(blk_f_0C0575B8); }  /* 0C0571C8 bra */
}

/* interrupt_dispatch */
void blk_f_0C0571CC(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C05725C);
L_0C0571CC: BLKS(0x0C0571CCu);
	IF(0x0C0571CCu); r15 -= 4; W32(r15, PR); UPD(0x0C0571CEu, 1);  /* 0C0571CC sts.l pr,@-Rn */
	{ u32 v_ = r4; r15 -= 4; W32(r15, v_); } UPD(0x0C0571D0u, 1);  /* 0C0571CE mov.l Rm,@-Rn */
	r1 = 0x100u; UPD(0x0C0571D2u, 1);  /* 0C0571D0 mov.l @(disp,pc),Rn */
	r4 = R32(r4 + 0x10u); UPD(0x0C0571D4u, 1);  /* 0C0571D2 mov.l @(disp,Rm),Rn */
	r0 = 0xC056746u; UPD(0x0C0571D6u, 1);  /* 0C0571D4 mov.l @(disp,pc),Rn */
	r4 += r1;  /* 0C0571D6 add Rm,Rn */
	IF(0x0C0571D8u); { u32 t_ = r0; PR = 0x0C0571DCu; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C056746, 0x0C056746u, 0x0C0571DCu); }  /* 0C0571D8 jsr @Rn */
L_0C0571DC: BLKS(0x0C0571DCu);
	r4 = r0;  /* 0C0571DC mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r6 = v_; } UPD(0x0C0571E0u, 2);  /* 0C0571DE mov.l @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C0571E0 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0571E4u); ; /* slot nop */ if (c_) { UPD(0x0C0571F4u, 4); goto L_0C0571F4; } goto L_0C0571E6; }  /* 0C0571E2 bf/s */
L_0C0571E6: BLKS(0x0C0571E6u);
	IF(0x0C0571E6u); PR = R32(r15); r15 += 4; UPD(0x0C0571E8u, 2);  /* 0C0571E6 lds.l @Rn+,pr */
	IF(0x0C0571E8u); { u32 t_ = PR; r0 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0571E8 rts */
L_0C0571F4: BLKS(0x0C0571F4u);
	r7 = 0xC0569E4u; UPD(0x0C0571F6u, 1);  /* 0C0571F4 mov.l @(disp,pc),Rn */
	r1 = 0x20u;  /* 0C0571F6 mov #imm,Rn */
	UPD(0x0C0571F8u, 1);
L_0C0571F8: BLKS(0x0C0571F8u);
	r0 = R32(r7 + 0x0u); UPD(0x0C0571FAu, 1);  /* 0C0571F8 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0571FA tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C0571FEu); r1 -= 1; T = r1 == 0; /* slot dt Rn */ if (c_) { UPD(0x0C057218u, 4); goto L_0C057218; } goto L_0C057200; }  /* 0C0571FC bt/s */
L_0C057200: BLKS(0x0C057200u);
	{ u32 c_ = !T; r7 += 0x28u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0571F8u, 4); goto L_0C0571F8; } goto L_0C057204; }  /* 0C057200 bf/s */
L_0C057204: BLKS(0x0C057204u);
	r0 = 0xC05669Au; UPD(0x0C057206u, 2);  /* 0C057204 mov.l @(disp,pc),Rn */
	IF(0x0C057206u); { u32 t_ = r0; PR = 0x0C05720Au; IF(0x0C057208u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05669A, 0x0C05669Au, 0x0C05720Au); }  /* 0C057206 jsr @Rn */
L_0C05720A: BLKS(0x0C05720Au);
	IF(0x0C05720Au); PR = R32(r15); r15 += 4; UPD(0x0C05720Cu, 1);  /* 0C05720A lds.l @Rn+,pr */
	IF(0x0C05720Cu); { u32 t_ = PR; r0 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05720C rts */
L_0C057218: BLKS(0x0C057218u);
	r0 = R32(r6 + 0x0u); UPD(0x0C05721Au, 1);  /* 0C057218 mov.l @(disp,Rm),Rn */
	r1 = R32(r6 + 0x4u); UPD(0x0C05721Cu, 1);  /* 0C05721A mov.l @(disp,Rm),Rn */
	IF(0x0C05721Cu); T = r0 >> 31; r0 <<= 1;  /* 0C05721C shll Rn */
	r2 = 0x1u;  /* 0C05721E mov #imm,Rn */
	r0 += r1;  /* 0C057220 add Rm,Rn */
	r3 = 0x0u;  /* 0C057222 mov #imm,Rn */
	W32(r7 + 0x0u, r2); UPD(0x0C057226u, 5);  /* 0C057224 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x4u, r0); UPD(0x0C057228u, 1);  /* 0C057226 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x8u, r3); UPD(0x0C05722Au, 1);  /* 0C057228 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0xCu, r3); UPD(0x0C05722Cu, 1);  /* 0C05722A mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x10u, r4); UPD(0x0C05722Eu, 1);  /* 0C05722C mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x1Cu, r3); UPD(0x0C057230u, 1);  /* 0C05722E mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x20u, r3); UPD(0x0C057232u, 1);  /* 0C057230 mov.l Rm,@(disp,Rn) */
	r1 = R32(r6 + 0x10u); UPD(0x0C057234u, 1);  /* 0C057232 mov.l @(disp,Rm),Rn */
	r2 = R32(r15); UPD(0x0C057236u, 1);  /* 0C057234 mov.l @Rm,Rn */
	r4 += r1;  /* 0C057236 add Rm,Rn */
	r3 = R32(r6 + 0x8u); UPD(0x0C05723Au, 2);  /* 0C057238 mov.l @(disp,Rm),Rn */
	r1 = R32(r6 + 0xCu); UPD(0x0C05723Cu, 1);  /* 0C05723A mov.l @(disp,Rm),Rn */
	{ u32 v_ = r2; r4 -= 4; W32(r4, v_); } UPD(0x0C05723Eu, 1);  /* 0C05723C mov.l Rm,@-Rn */
	r4 += 0xFFFFFFFCu;  /* 0C05723E add #imm,Rn */
	IF(0x0C057240u); ARG0(0x4433u); r4 -= 4; W32N(r4, c->ssr);  /* 0C057240 stc.l ssr,@-Rn */
	{ u32 v_ = r3; r4 -= 4; W32(r4, v_); } UPD(0x0C057244u, 3);  /* 0C057242 mov.l Rm,@-Rn */
	r4 += 0xFFFFFFF0u;  /* 0C057244 add #imm,Rn */
	{ u32 v_ = r7; r4 -= 4; W32(r4, v_); } UPD(0x0C057248u, 2);  /* 0C057246 mov.l Rm,@-Rn */
	{ u32 v_ = r1; r4 -= 4; W32(r4, v_); } UPD(0x0C05724Au, 1);  /* 0C057248 mov.l Rm,@-Rn */
	r4 += 0xFFFFFFF0u;  /* 0C05724A add #imm,Rn */
	IF(0x0C05724Cu); ARG0(0x44F3u); r4 -= 4; W32N(r4, c->rbank[7]); UPDN(0x0C05724Eu, 1);  /* 0C05724C stc.l Rb_bank,@-Rn */
	r4 += 0xFFFFFFE4u;  /* 0C05724E add #imm,Rn */
	W32(r7 + 0x14u, r4); UPD(0x0C057252u, 4);  /* 0C057250 mov.l Rm,@(disp,Rn) */
	IF(0x0C057252u); r0 <<= 2;  /* 0C057252 shll2 Rn */
	r3 = 0xC056964u; UPD(0x0C057256u, 2);  /* 0C057254 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C057256 add Rm,Rn */
	r5 = R32(r3); UPD(0x0C05725Au, 2);  /* 0C057258 mov.l @Rm,Rn */
	r0 = 0x4u;  /* 0C05725A mov #imm,Rn */
	UPD(0x0C05725Cu, 1);
L_0C05725C: BLKS(0x0C05725Cu);
	SPIN_SAVE(0C05725C);
	IF(0x0C05725Cu); r6 = RS32(0C05725C, r0 + r3); UPD(0x0C05725Eu, 1);  /* 0C05725C mov.l @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C05725E tst Rm,Rn */
	{ u32 c_ = T; r0 += 0x4u; /* slot add #imm,Rn */ if (c_) { SPIN_FFD(0C05725C, 5); UPD(0x0C05725Cu, 4); goto L_0C05725C; } goto L_0C057264; }  /* 0C057260 bt/s */
L_0C057264: BLKS(0x0C057264u);
	r4 = R32(r6 + 0x18u); UPD(0x0C057266u, 2);  /* 0C057264 mov.l @(disp,Rm),Rn */
	W32(r6 + 0x18u, r7); UPD(0x0C057268u, 1);  /* 0C057266 mov.l Rm,@(disp,Rn) */
	T = (r4 & r4) == 0;  /* 0C057268 tst Rm,Rn */
	W32(r7 + 0x18u, r4); UPD(0x0C05726Cu, 2);  /* 0C05726A mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r7 + 0x1Cu, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C057272u, 3); goto L_0C057272; } UPD(0x0C057270u, 1); goto L_0C057270; }  /* 0C05726C bt/s */
L_0C057270: BLKS(0x0C057270u);
	W32(r4 + 0x1Cu, r7); UPD(0x0C057272u, 1);  /* 0C057270 mov.l Rm,@(disp,Rn) */
L_0C057272: BLKS(0x0C057272u);
	T = (r5 & r5) == 0;  /* 0C057272 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C057276u); ; /* slot nop */ if (c_) { UPD(0x0C05727Au, 4); goto L_0C05727A; } goto L_0C057278; }  /* 0C057274 bf/s */
L_0C057278: BLKS(0x0C057278u);
	W32(r3, r7); UPD(0x0C05727Au, 2);  /* 0C057278 mov.l Rm,@Rn */
L_0C05727A: BLKS(0x0C05727Au);
	{ u32 v_ = r7; r15 -= 4; W32(r15, v_); } UPD(0x0C05727Cu, 1);  /* 0C05727A mov.l Rm,@-Rn */
	{ PR = 0x0C057280u; IF(0x0C05727Eu); ; /* slot nop */ UPD(0x0C0576D8u, 3); CALL(blk_f_0C0576D8, 0x0C057280u); }  /* 0C05727C bsr */
L_0C057280: BLKS(0x0C057280u);
	{ u32 v_ = R32(r15); r15 += 4; r0 = v_; } UPD(0x0C057282u, 1);  /* 0C057280 mov.l @Rm+,Rn */
	IF(0x0C057282u); PR = R32(r15); r15 += 4; UPD(0x0C057284u, 1);  /* 0C057282 lds.l @Rn+,pr */
	IF(0x0C057284u); { u32 t_ = PR; IF(0x0C057286u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C057284 rts */
}

void blk_f_0C0572C8(sh3_t *c)
{
	LOCALS;
L_0C0572C8: BLKS(0x0C0572C8u);
	IF(0x0C0572C8u); r15 -= 4; W32(r15, PR); UPD(0x0C0572CAu, 1);  /* 0C0572C8 sts.l pr,@-Rn */
	{ PR = 0x0C0572CEu; IF(0x0C0572CCu); ARG0(0x04C2u); r4 = c->rbank[4]; /* slot stc Rb_bank,Rn */ UPD(0x0C0572D2u, 3); CALL(blk_f_0C0572D2, 0x0C0572CEu); }  /* 0C0572CA bsr */
L_0C0572CE: BLKS(0x0C0572CEu);
	{ IF(0x0C0572D0u); PR = R32(r15); r15 += 4; /* slot lds.l @Rn+,pr */ UPD(0x0C0575B8u, 3); TAIL(blk_f_0C0575B8); }  /* 0C0572CE bra */
}

/* FUN_0c0572d2 */
void blk_f_0C0572D2(sh3_t *c)
{
	LOCALS;
L_0C0572D2: BLKS(0x0C0572D2u);
	IF(0x0C0572D2u); r15 -= 4; W32(r15, PR); UPD(0x0C0572D4u, 1);  /* 0C0572D2 sts.l pr,@-Rn */
	{ u32 v_ = r4; r15 -= 4; W32(r15, v_); } UPD(0x0C0572D6u, 1);  /* 0C0572D4 mov.l Rm,@-Rn */
	r0 = 0xC05669Au; UPD(0x0C0572D8u, 1);  /* 0C0572D6 mov.l @(disp,pc),Rn */
	r4 = R32(r4 + 0x10u); UPD(0x0C0572DAu, 1);  /* 0C0572D8 mov.l @(disp,Rm),Rn */
	IF(0x0C0572DAu); { u32 t_ = r0; PR = 0x0C0572DEu; IF(0x0C0572DCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05669A, 0x0C05669Au, 0x0C0572DEu); }  /* 0C0572DA jsr @Rn */
L_0C0572DE: BLKS(0x0C0572DEu);
	{ u32 v_ = R32(r15); r15 += 4; r7 = v_; } UPD(0x0C0572E0u, 1);  /* 0C0572DE mov.l @Rm+,Rn */
	r0 = 0x0u;  /* 0C0572E0 mov #imm,Rn */
	r5 = R32(r7 + 0x18u); UPD(0x0C0572E4u, 2);  /* 0C0572E2 mov.l @(disp,Rm),Rn */
	r6 = R32(r7 + 0x1Cu); UPD(0x0C0572E6u, 1);  /* 0C0572E4 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C0572E6 tst Rm,Rn */
	W32(r7 + 0x0u, r0); UPD(0x0C0572EAu, 2);  /* 0C0572E8 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; r0 = R32(r7 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0572F0u, 3); goto L_0C0572F0; } UPD(0x0C0572EEu, 1); goto L_0C0572EE; }  /* 0C0572EA bt/s */
L_0C0572EE: BLKS(0x0C0572EEu);
	W32(r5 + 0x1Cu, r6); UPD(0x0C0572F0u, 1);  /* 0C0572EE mov.l Rm,@(disp,Rn) */
L_0C0572F0: BLKS(0x0C0572F0u);
	r1 = 0xC056964u; UPD(0x0C0572F2u, 1);  /* 0C0572F0 mov.l @(disp,pc),Rn */
	IF(0x0C0572F2u); r0 <<= 2;  /* 0C0572F2 shll2 Rn */
	W32(r6 + 0x18u, r5); UPD(0x0C0572F6u, 2);  /* 0C0572F4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0572F6u); r2 = R32(r0 + r1); UPD(0x0C0572F8u, 1);  /* 0C0572F6 mov.l @(r0,Rm),Rn */
	T = r7 == r2;  /* 0C0572F8 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0572FCu); r0 >>= 2; /* slot shlr2 Rn */ if (c_) { UPD(0x0C05730Au, 4); goto L_0C05730A; } goto L_0C0572FE; }  /* 0C0572FA bf/s */
L_0C0572FE: BLKS(0x0C0572FEu);
	r2 = R32(r6 + 0x4u); UPD(0x0C057300u, 2);  /* 0C0572FE mov.l @(disp,Rm),Rn */
	T = r0 == r2;  /* 0C057300 cmp/eq Rm,Rn */
	{ u32 c_ = T; IF(0x0C057304u); r0 <<= 2; /* slot shll2 Rn */ if (c_) { UPD(0x0C057308u, 4); goto L_0C057308; } goto L_0C057306; }  /* 0C057302 bt/s */
L_0C057306: BLKS(0x0C057306u);
	r6 = 0x0u;  /* 0C057306 mov #imm,Rn */
	UPD(0x0C057308u, 2);
L_0C057308: BLKS(0x0C057308u);
	IF(0x0C057308u); W32(r0 + r1, r6); UPD(0x0C05730Au, 1);  /* 0C057308 mov.l Rm,@(r0,Rn) */
L_0C05730A: BLKS(0x0C05730Au);
	r4 = 0x1u;  /* 0C05730A mov #imm,Rn */
	W32(r7 + 0x8u, r4); UPD(0x0C05730Eu, 2);  /* 0C05730C mov.l Rm,@(disp,Rn) */
	{ PR = 0x0C057312u; IF(0x0C057310u); ; /* slot nop */ UPD(0x0C0576D8u, 3); CALL(blk_f_0C0576D8, 0x0C057312u); }  /* 0C05730E bsr */
L_0C057312: BLKS(0x0C057312u);
	IF(0x0C057312u); PR = R32(r15); r15 += 4; UPD(0x0C057314u, 1);  /* 0C057312 lds.l @Rn+,pr */
	IF(0x0C057314u); { u32 t_ = PR; IF(0x0C057316u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C057314 rts */
}

void blk_f_0C057340(sh3_t *c)
{
	LOCALS;
L_0C057340: BLKS(0x0C057340u);
	r4 = 0xC056EE4u; UPD(0x0C057342u, 1);  /* 0C057340 mov.l @(disp,pc),Rn */
	r4 = R32(r4); UPD(0x0C057344u, 1);  /* 0C057342 mov.l @Rm,Rn */
	r0 = 0xC05669Au; UPD(0x0C057346u, 1);  /* 0C057344 mov.l @(disp,pc),Rn */
	r4 = R32(r4 + 0x10u); UPD(0x0C057348u, 1);  /* 0C057346 mov.l @(disp,Rm),Rn */
	IF(0x0C057348u); { u32 t_ = r0; PR = 0x0C05734Cu; IF(0x0C05734Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05669A, 0x0C05669Au, 0x0C05734Cu); }  /* 0C057348 jsr @Rn */
L_0C05734C: BLKS(0x0C05734Cu);
	r1 = 0xC056EE4u; UPD(0x0C05734Eu, 1);  /* 0C05734C mov.l @(disp,pc),Rn */
	r7 = R32(r1); UPD(0x0C057350u, 1);  /* 0C05734E mov.l @Rm,Rn */
	r0 = 0x0u;  /* 0C057350 mov #imm,Rn */
	r5 = R32(r7 + 0x18u); UPD(0x0C057354u, 2);  /* 0C057352 mov.l @(disp,Rm),Rn */
	r6 = R32(r7 + 0x1Cu); UPD(0x0C057356u, 1);  /* 0C057354 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C057356 tst Rm,Rn */
	W32(r1, r6); UPD(0x0C05735Au, 2);  /* 0C057358 mov.l Rm,@Rn */
	{ u32 c_ = T; W32(r7 + 0x0u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C057360u, 3); goto L_0C057360; } UPD(0x0C05735Eu, 1); goto L_0C05735E; }  /* 0C05735A bt/s */
L_0C05735E: BLKS(0x0C05735Eu);
	W32(r5 + 0x1Cu, r6); UPD(0x0C057360u, 1);  /* 0C05735E mov.l Rm,@(disp,Rn) */
L_0C057360: BLKS(0x0C057360u);
	r0 = R32(r7 + 0x4u); UPD(0x0C057362u, 1);  /* 0C057360 mov.l @(disp,Rm),Rn */
	r1 = 0xC056964u; UPD(0x0C057364u, 1);  /* 0C057362 mov.l @(disp,pc),Rn */
	IF(0x0C057364u); r0 <<= 2;  /* 0C057364 shll2 Rn */
	W32(r6 + 0x18u, r5); UPD(0x0C057368u, 2);  /* 0C057366 mov.l Rm,@(disp,Rn) */
	IF(0x0C057368u); r2 = R32(r0 + r1); UPD(0x0C05736Au, 1);  /* 0C057368 mov.l @(r0,Rm),Rn */
	T = r7 == r2;  /* 0C05736A cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05736Eu); r0 >>= 2; /* slot shlr2 Rn */ if (c_) { UPD(0x0C05737Eu, 4); goto L_0C05737E; } goto L_0C057370; }  /* 0C05736C bf/s */
L_0C057370: BLKS(0x0C057370u);
	r2 = R32(r6 + 0x4u); UPD(0x0C057372u, 2);  /* 0C057370 mov.l @(disp,Rm),Rn */
	r3 = 0x0u;  /* 0C057372 mov #imm,Rn */
	T = r0 == r2;  /* 0C057374 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C057378u); r0 <<= 2; /* slot shll2 Rn */ if (c_) { UPD(0x0C05737Cu, 5); goto L_0C05737C; } goto L_0C05737A; }  /* 0C057376 bf/s */
L_0C05737A: BLKS(0x0C05737Au);
	r3 = r6;  /* 0C05737A mov Rm,Rn */
	UPD(0x0C05737Cu, 2);
L_0C05737C: BLKS(0x0C05737Cu);
	IF(0x0C05737Cu); W32(r0 + r1, r3); UPD(0x0C05737Eu, 1);  /* 0C05737C mov.l Rm,@(r0,Rn) */
L_0C05737E: BLKS(0x0C05737Eu);
	r4 = 0x1u;  /* 0C05737E mov #imm,Rn */
	W32(r7 + 0x8u, r4); UPD(0x0C057382u, 2);  /* 0C057380 mov.l Rm,@(disp,Rn) */
	{ u32 v_ = r6; r15 -= 4; W32(r15, v_); } UPD(0x0C057384u, 1);  /* 0C057382 mov.l Rm,@-Rn */
	{ PR = 0x0C057388u; IF(0x0C057386u); ; /* slot nop */ UPD(0x0C0576D8u, 3); CALL(blk_f_0C0576D8, 0x0C057388u); }  /* 0C057384 bsr */
L_0C057388: BLKS(0x0C057388u);
	{ u32 v_ = R32(r15); r15 += 4; r6 = v_; } UPD(0x0C05738Au, 1);  /* 0C057388 mov.l @Rm+,Rn */
	r0 = R32(r6 + 0x4u); UPD(0x0C05738Cu, 1);  /* 0C05738A mov.l @(disp,Rm),Rn */
	r1 = 0xC0569A4u; UPD(0x0C05738Eu, 1);  /* 0C05738C mov.l @(disp,pc),Rn */
	IF(0x0C05738Eu); r0 <<= 2;  /* 0C05738E shll2 Rn */
	IF(0x0C057390u); W32(r0 + r1, r6); UPD(0x0C057392u, 2);  /* 0C057390 mov.l Rm,@(r0,Rn) */
	r15 = R32(r6 + 0x14u); UPD(0x0C057394u, 1);  /* 0C057392 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C057396u, 1);  /* 0C057394 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C057398u, 1);  /* 0C057396 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05739Au, 1);  /* 0C057398 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05739Cu, 1);  /* 0C05739A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05739Eu, 1);  /* 0C05739C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0573A0u, 1);  /* 0C05739E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C0573A2u, 1);  /* 0C0573A0 mov.l @Rm+,Rn */
	IF(0x0C0573A2u); PR = R32(r15); r15 += 4; UPD(0x0C0573A4u, 1);  /* 0C0573A2 lds.l @Rn+,pr */
	IF(0x0C0573A4u); MACL = R32(r15); r15 += 4; UPD(0x0C0573A6u, 1);  /* 0C0573A4 lds.l @Rn+,macl */
	IF(0x0C0573A6u); MACH = R32(r15); r15 += 4; UPD(0x0C0573A8u, 1);  /* 0C0573A6 lds.l @Rn+,mach */
	IF(0x0C0573A8u); ARG0(0x4FF7u); c->rbank[7] = R32N(r15); r15 += 4;  /* 0C0573A8 ldc.l @Rn+,Rb_bank */
	IF(0x0C0573AAu); ARG0(0x4FE7u); c->rbank[6] = R32N(r15); r15 += 4;  /* 0C0573AA ldc.l @Rn+,Rb_bank */
	IF(0x0C0573ACu); ARG0(0x4FD7u); c->rbank[5] = R32N(r15); r15 += 4;  /* 0C0573AC ldc.l @Rn+,Rb_bank */
	IF(0x0C0573AEu); ARG0(0x4FC7u); c->rbank[4] = R32N(r15); r15 += 4;  /* 0C0573AE ldc.l @Rn+,Rb_bank */
	IF(0x0C0573B0u); ARG0(0x4FB7u); c->rbank[3] = R32N(r15); r15 += 4;  /* 0C0573B0 ldc.l @Rn+,Rb_bank */
	IF(0x0C0573B2u); ARG0(0x4FA7u); c->rbank[2] = R32N(r15); r15 += 4;  /* 0C0573B2 ldc.l @Rn+,Rb_bank */
	IF(0x0C0573B4u); ARG0(0x4F97u); c->rbank[1] = R32N(r15); r15 += 4;  /* 0C0573B4 ldc.l @Rn+,Rb_bank */
	IF(0x0C0573B6u); ARG0(0x4F87u); c->rbank[0] = R32N(r15); r15 += 4;  /* 0C0573B6 ldc.l @Rn+,Rb_bank */
	IF(0x0C0573B8u); ARG0(0x4F47u); c->spc = R32N(r15); r15 += 4;  /* 0C0573B8 ldc.l @Rn+,spc */
	IF(0x0C0573BAu); ARG0(0x4F37u); c->ssr = R32N(r15); r15 += 4;  /* 0C0573BA ldc.l @Rn+,ssr */
	{ IF(0x0C0573BEu); c->gbr = R32(r15); r15 += 4; /* slot ldc.l @Rn+,gbr */ UPD(0x0C0575B8u, 13); TAIL(blk_f_0C0575B8); }  /* 0C0573BC bra */
}

void blk_f_0C057400(sh3_t *c)
{
	LOCALS;
L_0C057400: BLKS(0x0C057400u);
	IF(0x0C057400u); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C057400 stc Rb_bank,Rn */
	IF(0x0C057402u); ARG0(0x05D2u); r5 = c->rbank[5];  /* 0C057402 stc Rb_bank,Rn */
	{ W32(r4 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0575B8u, 5); TAIL(blk_f_0C0575B8); }  /* 0C057404 bra */
}

void blk_f_0C057438(sh3_t *c)
{
	LOCALS;
L_0C057438: BLKS(0x0C057438u);
	r0 = 0xFFFFFFFFu;  /* 0C057438 mov #imm,Rn */
	IF(0x0C05743Au); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C05743A stc Rb_bank,Rn */
	{ W32(r4 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0575B8u, 5); TAIL(blk_f_0C0575B8); }  /* 0C05743C bra */
}

void blk_f_0C057470(sh3_t *c)
{
	LOCALS;
L_0C057470: BLKS(0x0C057470u);
	r0 = 0x0u;  /* 0C057470 mov #imm,Rn */
	IF(0x0C057472u); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C057472 stc Rb_bank,Rn */
	{ W32(r4 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0575B8u, 5); TAIL(blk_f_0C0575B8); }  /* 0C057474 bra */
}

void blk_f_0C0574A8(sh3_t *c)
{
	LOCALS;
L_0C0574A8: BLKS(0x0C0574A8u);
	IF(0x0C0574A8u); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C0574A8 stc Rb_bank,Rn */
	r0 = R32(r4 + 0x8u); UPD(0x0C0574ACu, 2);  /* 0C0574AA mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0574AC add #imm,Rn */
	{ W32(r4 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0575B8u, 4); TAIL(blk_f_0C0575B8); }  /* 0C0574AE bra */
}

void blk_f_0C0574EC(sh3_t *c)
{
	LOCALS;
L_0C0574EC: BLKS(0x0C0574ECu);
	IF(0x0C0574ECu); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C0574EC stc Rb_bank,Rn */
	r0 = R32(r4 + 0x8u); UPD(0x0C0574F0u, 2);  /* 0C0574EE mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0574F0 tst Rm,Rn */
	{ u32 c_ = T; r0 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0574FAu, 4); goto L_0C0574FA; } goto L_0C0574F6; }  /* 0C0574F2 bt/s */
L_0C0574F6: BLKS(0x0C0574F6u);
	{ W32(r4 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0575B8u, 4); TAIL(blk_f_0C0575B8); }  /* 0C0574F6 bra */
L_0C0574FA: BLKS(0x0C0574FAu);
	IF(0x0C0574FAu); { u32 t_ = PR; IF(0x0C0574FCu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0574FA rts */
}

void blk_f_0C057520(sh3_t *c)
{
	LOCALS;
L_0C057520: BLKS(0x0C057520u);
	r0 = 0xC056EE4u; UPD(0x0C057522u, 1);  /* 0C057520 mov.l @(disp,pc),Rn */
	IF(0x0C057522u); { u32 t_ = PR; IF(0x0C057524u); ARG0(0x4087u); c->rbank[0] = R32N(r0); r0 += 4; /* slot ldc.l @Rn+,Rb_bank */ UPD(t_, 3); RET(t_); }  /* 0C057522 rts */
}

void blk_f_0C05752C(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C057538);
L_0C05752C: BLKS(0x0C05752Cu);
	r0 = 0xC056EF0u; UPD(0x0C05752Eu, 1);  /* 0C05752C mov.l @(disp,pc),Rn */
	r0 = R32(r0); UPD(0x0C057530u, 1);  /* 0C05752E mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C057530 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C057534u); ; /* slot nop */ if (c_) { UPD(0x0C057560u, 4); goto L_0C057560; } goto L_0C057536; }  /* 0C057532 bf/s */
L_0C057536: BLKS(0x0C057536u);
	r2 = 0xC056964u; UPD(0x0C057538u, 2);  /* 0C057536 mov.l @(disp,pc),Rn */
L_0C057538: BLKS(0x0C057538u);
	SPIN_SAVE(0C057538);
	r1 = RS32(0C057538, r2); UPD(0x0C05753Au, 1);  /* 0C057538 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C05753A tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { SPIN_FFD(0C057538, 5); UPD(0x0C057538u, 4); goto L_0C057538; } UPD(0x0C057540u, 1); goto L_0C057540; }  /* 0C05753C bt/s */
L_0C057540: BLKS(0x0C057540u);
	r0 = R32(r1 + 0xCu); UPD(0x0C057542u, 1);  /* 0C057540 mov.l @(disp,Rm),Rn */
	IF(0x0C057542u); T = (s32)r0 > 0;  /* 0C057542 cmp/pl Rn */
	{ u32 c_ = !T; r0 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05754Au, 4); goto L_0C05754A; } goto L_0C057548; }  /* 0C057544 bf/s */
L_0C057548: BLKS(0x0C057548u);
	W32(r1 + 0xCu, r0); UPD(0x0C05754Au, 2);  /* 0C057548 mov.l Rm,@(disp,Rn) */
L_0C05754A: BLKS(0x0C05754Au);
	r1 = R32(r1 + 0x1Cu); UPD(0x0C05754Cu, 1);  /* 0C05754A mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C05754C tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C057550u); ; /* slot nop */ if (c_) { UPD(0x0C057540u, 4); goto L_0C057540; } goto L_0C057552; }  /* 0C05754E bf/s */
L_0C057552: BLKS(0x0C057552u);
	{ IF(0x0C057554u); ; /* slot nop */ UPD(0x0C0575B8u, 4); TAIL(blk_f_0C0575B8); }  /* 0C057552 bra */
L_0C057560: BLKS(0x0C057560u);
	IF(0x0C057560u); { u32 t_ = PR; IF(0x0C057562u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C057560 rts */
}

void blk_f_0C057564(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C05757A);
L_0C057564: BLKS(0x0C057564u);
	r0 = 0xC056EF0u; UPD(0x0C057566u, 1);  /* 0C057564 mov.l @(disp,pc),Rn */
	r0 = R32(r0); UPD(0x0C057568u, 1);  /* 0C057566 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C057568 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05756Cu); ; /* slot nop */ if (c_) { UPD(0x0C0575B4u, 4); goto L_0C0575B4; } goto L_0C05756E; }  /* 0C05756A bf/s */
L_0C05756E: BLKS(0x0C05756Eu);
	r2 = 0xC056964u; UPD(0x0C057570u, 2);  /* 0C05756E mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C057570 mov #imm,Rn */
	r6 = 0xC056EE4u; UPD(0x0C057574u, 2);  /* 0C057572 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C057574 mov #imm,Rn */
	r6 = R32(r6); UPD(0x0C057578u, 2);  /* 0C057576 mov.l @Rm,Rn */
	r6 = R32(r6 + 0x4u); UPD(0x0C05757Au, 1);  /* 0C057578 mov.l @(disp,Rm),Rn */
L_0C05757A: BLKS(0x0C05757Au);
	SPIN_SAVE(0C05757A);
	r1 = RS32(0C05757A, r2); UPD(0x0C05757Cu, 1);  /* 0C05757A mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C05757C tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { SPIN_FFD(0C05757A, 5); UPD(0x0C05757Au, 4); goto L_0C05757A; } UPD(0x0C057582u, 1); goto L_0C057582; }  /* 0C05757E bt/s */
L_0C057582: BLKS(0x0C057582u);
	r0 = R32(r1 + 0xCu); UPD(0x0C057584u, 1);  /* 0C057582 mov.l @(disp,Rm),Rn */
	IF(0x0C057584u); T = (s32)r0 >= 0;  /* 0C057584 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C057588u); ; /* slot nop */ if (c_) { UPD(0x0C057594u, 4); goto L_0C057594; } goto L_0C05758A; }  /* 0C057586 bt/s */
L_0C05758A: BLKS(0x0C05758Au);
	r0 = R32(r1 + 0x4u); UPD(0x0C05758Cu, 2);  /* 0C05758A mov.l @(disp,Rm),Rn */
	W32(r1 + 0xCu, r3); UPD(0x0C05758Eu, 1);  /* 0C05758C mov.l Rm,@(disp,Rn) */
	T = r6 > r0;  /* 0C05758E cmp/hi Rm,Rn */
	IF(0x0C057590u); r5 = T;  /* 0C057590 movt Rn */
	r4 += r5;  /* 0C057592 add Rm,Rn */
	UPD(0x0C057594u, 3);
L_0C057594: BLKS(0x0C057594u);
	r1 = R32(r1 + 0x1Cu); UPD(0x0C057596u, 1);  /* 0C057594 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C057596 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05759Au); ; /* slot nop */ if (c_) { UPD(0x0C057582u, 4); goto L_0C057582; } goto L_0C05759C; }  /* 0C057598 bf/s */
L_0C05759C: BLKS(0x0C05759Cu);
	r0 = 0xC056EE8u; UPD(0x0C05759Eu, 2);  /* 0C05759C mov.l @(disp,pc),Rn */
	IF(0x0C05759Eu); { u32 t_ = PR; W32(r0, r4); /* slot mov.l Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C05759E rts */
L_0C0575B4: BLKS(0x0C0575B4u);
	IF(0x0C0575B4u); { u32 t_ = PR; IF(0x0C0575B6u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0575B4 rts */
}

/* FUN_0c0575b8 */
void blk_f_0C0575B8(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C057622);
L_0C0575B8: BLKS(0x0C0575B8u);
	r7 = 0xC056EE4u; UPD(0x0C0575BAu, 1);  /* 0C0575B8 mov.l @(disp,pc),Rn */
	r6 = 0xC056EECu; UPD(0x0C0575BCu, 1);  /* 0C0575BA mov.l @(disp,pc),Rn */
	r7 = R32(r7); UPD(0x0C0575BEu, 1);  /* 0C0575BC mov.l @Rm,Rn */
	r6 = R32(r6); UPD(0x0C0575C0u, 1);  /* 0C0575BE mov.l @Rm,Rn */
	r0 = R32(r7 + 0x4u); UPD(0x0C0575C2u, 1);  /* 0C0575C0 mov.l @(disp,Rm),Rn */
	r4 = 0xC056964u; UPD(0x0C0575C4u, 1);  /* 0C0575C2 mov.l @(disp,pc),Rn */
	IF(0x0C0575C4u); r0 <<= 2;  /* 0C0575C4 shll2 Rn */
	IF(0x0C0575C6u); r2 = R32(r0 + r4); UPD(0x0C0575C8u, 2);  /* 0C0575C6 mov.l @(r0,Rm),Rn */
	T = r2 == r6;  /* 0C0575C8 cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 = R32(r6 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0575E0u, 4); goto L_0C0575E0; } UPD(0x0C0575CEu, 1); goto L_0C0575CE; }  /* 0C0575CA bt/s */
L_0C0575CE: BLKS(0x0C0575CEu);
	r1 = R32(r6 + 0xCu); UPD(0x0C0575D0u, 1);  /* 0C0575CE mov.l @(disp,Rm),Rn */
	r0 |= r1;  /* 0C0575D0 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0575D2 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C0575D6u); ; /* slot nop */ if (c_) { UPD(0x0C05765Eu, 5); goto L_0C05765E; } goto L_0C0575D8; }  /* 0C0575D4 bt/s */
L_0C0575D8: BLKS(0x0C0575D8u);
	r6 = R32(r6 + 0x1Cu); UPD(0x0C0575DAu, 2);  /* 0C0575D8 mov.l @(disp,Rm),Rn */
	T = r2 == r6;  /* 0C0575DA cmp/eq Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r6 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0575CEu, 4); goto L_0C0575CE; } UPD(0x0C0575E0u, 1); goto L_0C0575E0; }  /* 0C0575DC bf/s */
L_0C0575E0: BLKS(0x0C0575E0u);
	r0 = R32(r7 + 0x4u); UPD(0x0C0575E2u, 1);  /* 0C0575E0 mov.l @(disp,Rm),Rn */
	T = (r0 & 0x1u) == 0;  /* 0C0575E2 tst #imm,r0 */
	{ u32 c_ = !T; IF(0x0C0575E6u); ; /* slot nop */ if (c_) { UPD(0x0C0575F4u, 4); goto L_0C0575F4; } goto L_0C0575E8; }  /* 0C0575E4 bf/s */
L_0C0575E8: BLKS(0x0C0575E8u);
	r1 = R32(r7 + 0x8u); UPD(0x0C0575EAu, 2);  /* 0C0575E8 mov.l @(disp,Rm),Rn */
	r2 = R32(r7 + 0xCu); UPD(0x0C0575ECu, 1);  /* 0C0575EA mov.l @(disp,Rm),Rn */
	r1 |= r2;  /* 0C0575EC or Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0575EE tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C0575F2u); ; /* slot nop */ if (c_) { UPD(0x0C0576C2u, 5); goto L_0C0576C2; } UPD(0x0C0575F4u, 1); goto L_0C0575F4; }  /* 0C0575F0 bt/s */
L_0C0575F4: BLKS(0x0C0575F4u);
	r6 = R32(r7 + 0x24u); UPD(0x0C0575F6u, 1);  /* 0C0575F4 mov.l @(disp,Rm),Rn */
	T = r7 == r6;  /* 0C0575F6 cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 = R32(r6 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C05760Eu, 4); goto L_0C05760E; } UPD(0x0C0575FCu, 1); goto L_0C0575FC; }  /* 0C0575F8 bt/s */
L_0C0575FC: BLKS(0x0C0575FCu);
	r1 = R32(r6 + 0xCu); UPD(0x0C0575FEu, 1);  /* 0C0575FC mov.l @(disp,Rm),Rn */
	r0 |= r1;  /* 0C0575FE or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C057600 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C057604u); ; /* slot nop */ if (c_) { UPD(0x0C05765Eu, 5); goto L_0C05765E; } goto L_0C057606; }  /* 0C057602 bt/s */
L_0C057606: BLKS(0x0C057606u);
	r6 = R32(r6 + 0x24u); UPD(0x0C057608u, 2);  /* 0C057606 mov.l @(disp,Rm),Rn */
	T = r7 == r6;  /* 0C057608 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r6 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0575FCu, 4); goto L_0C0575FC; } UPD(0x0C05760Eu, 1); goto L_0C05760E; }  /* 0C05760A bf/s */
L_0C05760E: BLKS(0x0C05760Eu);
	r0 = R32(r7 + 0x8u); UPD(0x0C057610u, 1);  /* 0C05760E mov.l @(disp,Rm),Rn */
	r1 = R32(r7 + 0xCu); UPD(0x0C057612u, 1);  /* 0C057610 mov.l @(disp,Rm),Rn */
	r0 |= r1;  /* 0C057612 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C057614 tst Rm,Rn */
	{ u32 c_ = T; r6 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0576C2u, 5); goto L_0C0576C2; } goto L_0C05761A; }  /* 0C057616 bt/s */
L_0C05761A: BLKS(0x0C05761Au);
	r4 = 0xC0569A4u; UPD(0x0C05761Cu, 2);  /* 0C05761A mov.l @(disp,pc),Rn */
L_0C05761C: BLKS(0x0C05761Cu);
	r0 = R32(r6 + 0x4u); UPD(0x0C05761Eu, 1);  /* 0C05761C mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C05761E add #imm,Rn */
	IF(0x0C057620u); r0 <<= 2;  /* 0C057620 shll2 Rn */
	UPD(0x0C057622u, 2);
L_0C057622: BLKS(0x0C057622u);
	SPIN_SAVE(0C057622);
	IF(0x0C057622u); r5 = RS32(0C057622, r0 + r4); UPD(0x0C057624u, 1);  /* 0C057622 mov.l @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C057624 tst Rm,Rn */
	{ u32 c_ = T; r0 += 0x4u; /* slot add #imm,Rn */ if (c_) { SPIN_FFD(0C057622, 5); UPD(0x0C057622u, 4); goto L_0C057622; } goto L_0C05762A; }  /* 0C057626 bt/s */
L_0C05762A: BLKS(0x0C05762Au);
	T = (r0 & 0x4u) == 0;  /* 0C05762A tst #imm,r0 */
	{ u32 c_ = T; r0 = R32(r5 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C05763Au, 5); goto L_0C05763A; } UPD(0x0C057630u, 1); goto L_0C057630; }  /* 0C05762C bt/s */
L_0C057630: BLKS(0x0C057630u);
	r1 = R32(r5 + 0xCu); UPD(0x0C057632u, 1);  /* 0C057630 mov.l @(disp,Rm),Rn */
	r0 |= r1;  /* 0C057632 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C057634 tst Rm,Rn */
	{ u32 c_ = T; r6 = r5; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05765Eu, 5); goto L_0C05765E; } UPD(0x0C05763Au, 1); goto L_0C05763A; }  /* 0C057636 bt/s */
L_0C05763A: BLKS(0x0C05763Au);
	r6 = R32(r5 + 0x24u); UPD(0x0C05763Cu, 1);  /* 0C05763A mov.l @(disp,Rm),Rn */
	T = r5 == r6;  /* 0C05763C cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 = R32(r6 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C057654u, 4); goto L_0C057654; } UPD(0x0C057642u, 1); goto L_0C057642; }  /* 0C05763E bt/s */
L_0C057642: BLKS(0x0C057642u);
	r1 = R32(r6 + 0xCu); UPD(0x0C057644u, 1);  /* 0C057642 mov.l @(disp,Rm),Rn */
	r0 |= r1;  /* 0C057644 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C057646 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C05764Au); ; /* slot nop */ if (c_) { UPD(0x0C05765Eu, 5); goto L_0C05765E; } goto L_0C05764C; }  /* 0C057648 bt/s */
L_0C05764C: BLKS(0x0C05764Cu);
	r6 = R32(r6 + 0x24u); UPD(0x0C05764Eu, 2);  /* 0C05764C mov.l @(disp,Rm),Rn */
	T = r5 == r6;  /* 0C05764E cmp/eq Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r6 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C057642u, 4); goto L_0C057642; } UPD(0x0C057654u, 1); goto L_0C057654; }  /* 0C057650 bf/s */
L_0C057654: BLKS(0x0C057654u);
	r1 = R32(r6 + 0xCu); UPD(0x0C057656u, 1);  /* 0C057654 mov.l @(disp,Rm),Rn */
	r0 |= r1;  /* 0C057656 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C057658 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05765Cu); ; /* slot nop */ if (c_) { UPD(0x0C05761Cu, 5); goto L_0C05761C; } UPD(0x0C05765Eu, 1); goto L_0C05765E; }  /* 0C05765A bf/s */
L_0C05765E: BLKS(0x0C05765Eu);
	r0 = R32(r6 + 0x4u); UPD(0x0C057660u, 1);  /* 0C05765E mov.l @(disp,Rm),Rn */
	r1 = 0xC0569A4u; UPD(0x0C057662u, 1);  /* 0C057660 mov.l @(disp,pc),Rn */
	r2 = 0xC056EE4u; UPD(0x0C057664u, 1);  /* 0C057662 mov.l @(disp,pc),Rn */
	IF(0x0C057664u); r0 <<= 2;  /* 0C057664 shll2 Rn */
	W32(r2, r6); UPD(0x0C057668u, 2);  /* 0C057666 mov.l Rm,@Rn */
	IF(0x0C057668u); W32(r0 + r1, r6); UPD(0x0C05766Au, 1);  /* 0C057668 mov.l Rm,@(r0,Rn) */
	IF(0x0C05766Au); r15 -= 4; W32(r15, c->gbr); UPD(0x0C05766Cu, 1);  /* 0C05766A stc.l gbr,@-Rn */
	IF(0x0C05766Cu); ARG0(0x4F33u); r15 -= 4; W32N(r15, c->ssr);  /* 0C05766C stc.l ssr,@-Rn */
	IF(0x0C05766Eu); ARG0(0x4F43u); r15 -= 4; W32N(r15, c->spc);  /* 0C05766E stc.l spc,@-Rn */
	IF(0x0C057670u); ARG0(0x4F83u); r15 -= 4; W32N(r15, c->rbank[0]); UPDN(0x0C057672u, 1);  /* 0C057670 stc.l Rb_bank,@-Rn */
	IF(0x0C057672u); ARG0(0x4F93u); r15 -= 4; W32N(r15, c->rbank[1]); UPDN(0x0C057674u, 1);  /* 0C057672 stc.l Rb_bank,@-Rn */
	IF(0x0C057674u); ARG0(0x4FA3u); r15 -= 4; W32N(r15, c->rbank[2]); UPDN(0x0C057676u, 1);  /* 0C057674 stc.l Rb_bank,@-Rn */
	IF(0x0C057676u); ARG0(0x4FB3u); r15 -= 4; W32N(r15, c->rbank[3]); UPDN(0x0C057678u, 1);  /* 0C057676 stc.l Rb_bank,@-Rn */
	IF(0x0C057678u); ARG0(0x4FC3u); r15 -= 4; W32N(r15, c->rbank[4]); UPDN(0x0C05767Au, 1);  /* 0C057678 stc.l Rb_bank,@-Rn */
	IF(0x0C05767Au); ARG0(0x4FD3u); r15 -= 4; W32N(r15, c->rbank[5]); UPDN(0x0C05767Cu, 1);  /* 0C05767A stc.l Rb_bank,@-Rn */
	IF(0x0C05767Cu); ARG0(0x4FE3u); r15 -= 4; W32N(r15, c->rbank[6]); UPDN(0x0C05767Eu, 1);  /* 0C05767C stc.l Rb_bank,@-Rn */
	IF(0x0C05767Eu); ARG0(0x4FF3u); r15 -= 4; W32N(r15, c->rbank[7]); UPDN(0x0C057680u, 1);  /* 0C05767E stc.l Rb_bank,@-Rn */
	IF(0x0C057680u); r15 -= 4; W32(r15, MACH); UPD(0x0C057682u, 11);  /* 0C057680 sts.l mach,@-Rn */
	IF(0x0C057682u); r15 -= 4; W32(r15, MACL); UPD(0x0C057684u, 1);  /* 0C057682 sts.l macl,@-Rn */
	IF(0x0C057684u); r15 -= 4; W32(r15, PR); UPD(0x0C057686u, 1);  /* 0C057684 sts.l pr,@-Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C057688u, 1);  /* 0C057686 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05768Au, 1);  /* 0C057688 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05768Cu, 1);  /* 0C05768A mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05768Eu, 1);  /* 0C05768C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C057690u, 1);  /* 0C05768E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C057692u, 1);  /* 0C057690 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C057694u, 1);  /* 0C057692 mov.l Rm,@-Rn */
	W32(r7 + 0x14u, r15); UPD(0x0C057696u, 1);  /* 0C057694 mov.l Rm,@(disp,Rn) */
	r15 = R32(r6 + 0x14u); UPD(0x0C057698u, 1);  /* 0C057696 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05769Au, 1);  /* 0C057698 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05769Cu, 1);  /* 0C05769A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05769Eu, 1);  /* 0C05769C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0576A0u, 1);  /* 0C05769E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0576A2u, 1);  /* 0C0576A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0576A4u, 1);  /* 0C0576A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C0576A6u, 1);  /* 0C0576A4 mov.l @Rm+,Rn */
	IF(0x0C0576A6u); PR = R32(r15); r15 += 4; UPD(0x0C0576A8u, 1);  /* 0C0576A6 lds.l @Rn+,pr */
	IF(0x0C0576A8u); MACL = R32(r15); r15 += 4; UPD(0x0C0576AAu, 1);  /* 0C0576A8 lds.l @Rn+,macl */
	IF(0x0C0576AAu); MACH = R32(r15); r15 += 4; UPD(0x0C0576ACu, 1);  /* 0C0576AA lds.l @Rn+,mach */
	IF(0x0C0576ACu); ARG0(0x4FF7u); c->rbank[7] = R32N(r15); r15 += 4;  /* 0C0576AC ldc.l @Rn+,Rb_bank */
	IF(0x0C0576AEu); ARG0(0x4FE7u); c->rbank[6] = R32N(r15); r15 += 4;  /* 0C0576AE ldc.l @Rn+,Rb_bank */
	IF(0x0C0576B0u); ARG0(0x4FD7u); c->rbank[5] = R32N(r15); r15 += 4;  /* 0C0576B0 ldc.l @Rn+,Rb_bank */
	IF(0x0C0576B2u); ARG0(0x4FC7u); c->rbank[4] = R32N(r15); r15 += 4;  /* 0C0576B2 ldc.l @Rn+,Rb_bank */
	IF(0x0C0576B4u); ARG0(0x4FB7u); c->rbank[3] = R32N(r15); r15 += 4;  /* 0C0576B4 ldc.l @Rn+,Rb_bank */
	IF(0x0C0576B6u); ARG0(0x4FA7u); c->rbank[2] = R32N(r15); r15 += 4;  /* 0C0576B6 ldc.l @Rn+,Rb_bank */
	IF(0x0C0576B8u); ARG0(0x4F97u); c->rbank[1] = R32N(r15); r15 += 4;  /* 0C0576B8 ldc.l @Rn+,Rb_bank */
	IF(0x0C0576BAu); ARG0(0x4F87u); c->rbank[0] = R32N(r15); r15 += 4;  /* 0C0576BA ldc.l @Rn+,Rb_bank */
	IF(0x0C0576BCu); ARG0(0x4F47u); c->spc = R32N(r15); r15 += 4;  /* 0C0576BC ldc.l @Rn+,spc */
	IF(0x0C0576BEu); ARG0(0x4F37u); c->ssr = R32N(r15); r15 += 4;  /* 0C0576BE ldc.l @Rn+,ssr */
	IF(0x0C0576C0u); c->gbr = R32(r15); r15 += 4; UPD(0x0C0576C2u, 11);  /* 0C0576C0 ldc.l @Rn+,gbr */
L_0C0576C2: BLKS(0x0C0576C2u);
	IF(0x0C0576C2u); { u32 t_ = PR; IF(0x0C0576C4u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0576C2 rts */
}

/* FUN_0c0576d8 */
void blk_f_0C0576D8(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C0576DC);
L_0C0576D8: BLKS(0x0C0576D8u);
	r7 = 0xC056964u; UPD(0x0C0576DAu, 1);  /* 0C0576D8 mov.l @(disp,pc),Rn */
	r1 = 0xC056EECu; UPD(0x0C0576DCu, 1);  /* 0C0576DA mov.l @(disp,pc),Rn */
L_0C0576DC: BLKS(0x0C0576DCu);
	SPIN_SAVE(0C0576DC);
	{ u32 v_ = RS32(0C0576DC, r7); r7 += 4; r0 = v_; } UPD(0x0C0576DEu, 1);  /* 0C0576DC mov.l @Rm+,Rn */
	T = (r0 & r0) == 0;  /* 0C0576DE tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C0576E2u); ; /* slot nop */ if (c_) { SPIN_FFD(0C0576DC, 5); UPD(0x0C0576DCu, 4); goto L_0C0576DC; } goto L_0C0576E4; }  /* 0C0576E0 bt/s */
L_0C0576E4: BLKS(0x0C0576E4u);
	W32(r1, r0); UPD(0x0C0576E6u, 2);  /* 0C0576E4 mov.l Rm,@Rn */
	r7 = 0xC056964u; UPD(0x0C0576E8u, 1);  /* 0C0576E6 mov.l @(disp,pc),Rn */
	r6 = 0x10u;  /* 0C0576E8 mov #imm,Rn */
	{ u32 v_ = R32(r7); r7 += 4; r5 = v_; } UPD(0x0C0576ECu, 2);  /* 0C0576EA mov.l @Rm+,Rn */
L_0C0576EC: BLKS(0x0C0576ECu);
	T = (r5 & r5) == 0;  /* 0C0576EC tst Rm,Rn */
	{ u32 c_ = T; r4 = r5; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C057716u, 4); goto L_0C057716; } goto L_0C0576F2; }  /* 0C0576EE bt/s */
L_0C0576F2: BLKS(0x0C0576F2u);
	r0 = R32(r4 + 0x4u); UPD(0x0C0576F4u, 2);  /* 0C0576F2 mov.l @(disp,Rm),Rn */
L_0C0576F4: BLKS(0x0C0576F4u);
	r3 = R32(r4 + 0x1Cu); UPD(0x0C0576F6u, 1);  /* 0C0576F4 mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C0576F6 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C0576FAu); ; /* slot nop */ if (c_) { UPD(0x0C057714u, 4); goto L_0C057714; } goto L_0C0576FC; }  /* 0C0576F8 bt/s */
L_0C0576FC: BLKS(0x0C0576FCu);
	r1 = R32(r3 + 0x4u); UPD(0x0C0576FEu, 2);  /* 0C0576FC mov.l @(disp,Rm),Rn */
	T = r0 == r1;  /* 0C0576FE cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C057702u); ; /* slot nop */ if (c_) { UPD(0x0C057714u, 4); goto L_0C057714; } goto L_0C057704; }  /* 0C057700 bf/s */
L_0C057704: BLKS(0x0C057704u);
	W32(r4 + 0x24u, r3); UPD(0x0C057706u, 2);  /* 0C057704 mov.l Rm,@(disp,Rn) */
	{ r4 = r3; /* slot mov Rm,Rn */ UPD(0x0C0576F4u, 3); goto L_0C0576F4; }  /* 0C057706 bra */
L_0C057714: BLKS(0x0C057714u);
	W32(r4 + 0x24u, r5); UPD(0x0C057716u, 1);  /* 0C057714 mov.l Rm,@(disp,Rn) */
L_0C057716: BLKS(0x0C057716u);
	IF(0x0C057716u); r6 -= 1; T = r6 == 0;  /* 0C057716 dt Rn */
	{ u32 c_ = !T; { u32 v_ = R32(r7); r7 += 4; r5 = v_; } /* slot mov.l @Rm+,Rn */ if (c_) { UPD(0x0C0576ECu, 4); goto L_0C0576EC; } UPD(0x0C05771Cu, 1); goto L_0C05771C; }  /* 0C057718 bf/s */
L_0C05771C: BLKS(0x0C05771Cu);
	IF(0x0C05771Cu); { u32 t_ = PR; IF(0x0C05771Eu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C05771C rts */
}

/* FUN_0c05b8e4 */
void blk_f_0C05B8E4(sh3_t *c)
{
	LOCALS;
L_0C05B8E4: BLKS(0x0C05B8E4u);
	r3 = 0xC05B85Cu; UPD(0x0C05B8E6u, 1);  /* 0C05B8E4 mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C05B8E8u, 1);  /* 0C05B8E6 mov.l @(disp,pc),Rn */
	IF(0x0C05B8E8u); c->gbr = r3;  /* 0C05B8E8 ldc Rn,gbr */
	W32(c->gbr + 0x0u, r0); UPD(0x0C05B8ECu, 2);  /* 0C05B8EA mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x4u, r0); UPD(0x0C05B8EEu, 1);  /* 0C05B8EC mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x8u, r0); UPD(0x0C05B8F0u, 1);  /* 0C05B8EE mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0xCu, r0); UPD(0x0C05B8F2u, 1);  /* 0C05B8F0 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x14u, r0); UPD(0x0C05B8F4u, 1);  /* 0C05B8F2 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x20u, r0); UPD(0x0C05B8F6u, 1);  /* 0C05B8F4 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x24u, r0); UPD(0x0C05B8F8u, 1);  /* 0C05B8F6 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x28u, r0); UPD(0x0C05B8FAu, 1);  /* 0C05B8F8 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x2Cu, r0); UPD(0x0C05B8FCu, 1);  /* 0C05B8FA mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x30u, r0); UPD(0x0C05B8FEu, 1);  /* 0C05B8FC mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x34u, r0); UPD(0x0C05B900u, 1);  /* 0C05B8FE mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x38u, r0); UPD(0x0C05B902u, 1);  /* 0C05B900 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x3Cu, r0); UPD(0x0C05B904u, 1);  /* 0C05B902 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x40u, r0); UPD(0x0C05B906u, 1);  /* 0C05B904 mov.l r0,@(disp,gbr) */
	r0 = 0x10u; UPD(0x0C05B908u, 1);  /* 0C05B906 mov.l @(disp,pc),Rn */
	W32(c->gbr + 0x18u, r0); UPD(0x0C05B90Au, 1);  /* 0C05B908 mov.l r0,@(disp,gbr) */
	r0 = 0x4u; UPD(0x0C05B90Cu, 1);  /* 0C05B90A mov.l @(disp,pc),Rn */
	W32(c->gbr + 0x1Cu, r0); UPD(0x0C05B90Eu, 1);  /* 0C05B90C mov.l r0,@(disp,gbr) */
	r3 = 0xC05B8A0u; UPD(0x0C05B910u, 1);  /* 0C05B90E mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C05B912u, 1);  /* 0C05B910 mov.l @(disp,pc),Rn */
	IF(0x0C05B912u); c->gbr = r3;  /* 0C05B912 ldc Rn,gbr */
	W32(c->gbr + 0x0u, r0); UPD(0x0C05B916u, 2);  /* 0C05B914 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x4u, r0); UPD(0x0C05B918u, 1);  /* 0C05B916 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x8u, r0); UPD(0x0C05B91Au, 1);  /* 0C05B918 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0xCu, r0); UPD(0x0C05B91Cu, 1);  /* 0C05B91A mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x14u, r0); UPD(0x0C05B91Eu, 1);  /* 0C05B91C mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x20u, r0); UPD(0x0C05B920u, 1);  /* 0C05B91E mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x24u, r0); UPD(0x0C05B922u, 1);  /* 0C05B920 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x28u, r0); UPD(0x0C05B924u, 1);  /* 0C05B922 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x2Cu, r0); UPD(0x0C05B926u, 1);  /* 0C05B924 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x30u, r0); UPD(0x0C05B928u, 1);  /* 0C05B926 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x34u, r0); UPD(0x0C05B92Au, 1);  /* 0C05B928 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x38u, r0); UPD(0x0C05B92Cu, 1);  /* 0C05B92A mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x3Cu, r0); UPD(0x0C05B92Eu, 1);  /* 0C05B92C mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x40u, r0); UPD(0x0C05B930u, 1);  /* 0C05B92E mov.l r0,@(disp,gbr) */
	r0 = 0x10u; UPD(0x0C05B932u, 1);  /* 0C05B930 mov.l @(disp,pc),Rn */
	W32(c->gbr + 0x18u, r0); UPD(0x0C05B934u, 1);  /* 0C05B932 mov.l r0,@(disp,gbr) */
	r0 = 0x4u; UPD(0x0C05B936u, 1);  /* 0C05B934 mov.l @(disp,pc),Rn */
	W32(c->gbr + 0x1Cu, r0); UPD(0x0C05B938u, 1);  /* 0C05B936 mov.l r0,@(disp,gbr) */
	IF(0x0C05B938u); { u32 t_ = PR; IF(0x0C05B93Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C05B938 rts */
}

/* FUN_0c05c030 */
void blk_f_0C05C030(sh3_t *c)
{
	LOCALS;
L_0C05C030: BLKS(0x0C05C030u);
	r5 = 0x3Eu; UPD(0x0C05C032u, 1);  /* 0C05C030 mov.l @(disp,pc),Rn */
	r0 = 0xC05BF38u; UPD(0x0C05C034u, 1);  /* 0C05C032 mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C05C036u, 1);  /* 0C05C034 mov.l @(disp,pc),Rn */
L_0C05C036: BLKS(0x0C05C036u);
	W32(r0, r1); UPD(0x0C05C038u, 1);  /* 0C05C036 mov.l Rm,@Rn */
	IF(0x0C05C038u); r5 -= 1; T = r5 == 0;  /* 0C05C038 dt Rn */
	{ u32 c_ = !T; r0 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05C036u, 4); goto L_0C05C036; } goto L_0C05C03E; }  /* 0C05C03A bf/s */
L_0C05C03E: BLKS(0x0C05C03Eu);
	IF(0x0C05C03Eu); { u32 t_ = PR; IF(0x0C05C040u); ; /* slot nop */ UPD(t_, 4); RET(t_); }  /* 0C05C03E rts */
}

void blk_f_0C05C664(sh3_t *c)
{
	LOCALS;
L_0C05C664: BLKS(0x0C05C664u);
	r0 = 0x0u; UPD(0x0C05C666u, 1);  /* 0C05C664 mov.l @(disp,pc),Rn */
	IF(0x0C05C666u); { u32 t_ = PR; r1 = r0; /* slot mov Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05C666 rts */
}

void blk_f_0C05C670(sh3_t *c)
{
	LOCALS;
L_0C05C670: BLKS(0x0C05C670u);
	r0 = 0x0u; UPD(0x0C05C672u, 1);  /* 0C05C670 mov.l @(disp,pc),Rn */
	r1 = 0xFFu; UPD(0x0C05C674u, 1);  /* 0C05C672 mov.l @(disp,pc),Rn */
	IF(0x0C05C674u); { u32 t_ = PR; IF(0x0C05C676u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C05C674 rts */
}

void blk_f_0C05C680(sh3_t *c)
{
	LOCALS;
L_0C05C680: BLKS(0x0C05C680u);
	r0 = 0x0u; UPD(0x0C05C682u, 1);  /* 0C05C680 mov.l @(disp,pc),Rn */
	IF(0x0C05C682u); { u32 t_ = PR; IF(0x0C05C684u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C05C682 rts */
}

void blk_f_0C05C68C(sh3_t *c)
{
	LOCALS;
L_0C05C68C: BLKS(0x0C05C68Cu);
	r0 = 0x0u; UPD(0x0C05C68Eu, 1);  /* 0C05C68C mov.l @(disp,pc),Rn */
	r3 = r1;  /* 0C05C68E mov Rm,Rn */
	r1 = 0xFFu; UPD(0x0C05C692u, 2);  /* 0C05C690 mov.l @(disp,pc),Rn */
	IF(0x0C05C692u); { u32 t_ = PR; r1 -= r3; /* slot sub Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05C692 rts */
}

void blk_f_0C05C6A0(sh3_t *c)
{
	LOCALS;
L_0C05C6A0: BLKS(0x0C05C6A0u);
	r0 = 0x0u; UPD(0x0C05C6A2u, 1);  /* 0C05C6A0 mov.l @(disp,pc),Rn */
	r1 = r2;  /* 0C05C6A2 mov Rm,Rn */
	IF(0x0C05C6A4u); { u32 t_ = PR; r1 = r2; /* slot mov Rm,Rn */ UPD(t_, 4); RET(t_); }  /* 0C05C6A4 rts */
}

void blk_f_0C05C6AC(sh3_t *c)
{
	LOCALS;
L_0C05C6AC: BLKS(0x0C05C6ACu);
	r0 = 0x0u; UPD(0x0C05C6AEu, 1);  /* 0C05C6AC mov.l @(disp,pc),Rn */
	r1 = 0xFFu; UPD(0x0C05C6B0u, 1);  /* 0C05C6AE mov.l @(disp,pc),Rn */
	IF(0x0C05C6B0u); { u32 t_ = PR; r1 -= r2; /* slot sub Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05C6B0 rts */
}

void blk_f_0C05C6BC(sh3_t *c)
{
	LOCALS;
L_0C05C6BC: BLKS(0x0C05C6BCu);
	r0 = 0x1u; UPD(0x0C05C6BEu, 1);  /* 0C05C6BC mov.l @(disp,pc),Rn */
	r1 = 0xFFu; UPD(0x0C05C6C0u, 1);  /* 0C05C6BE mov.l @(disp,pc),Rn */
	IF(0x0C05C6C0u); { u32 t_ = PR; IF(0x0C05C6C2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C05C6C0 rts */
}

void blk_f_0C05C6CC(sh3_t *c)
{
	LOCALS;
L_0C05C6CC: BLKS(0x0C05C6CCu);
	r0 = 0x5u; UPD(0x0C05C6CEu, 1);  /* 0C05C6CC mov.l @(disp,pc),Rn */
	r1 = 0xFFu; UPD(0x0C05C6D0u, 1);  /* 0C05C6CE mov.l @(disp,pc),Rn */
	IF(0x0C05C6D0u); { u32 t_ = PR; IF(0x0C05C6D2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C05C6D0 rts */
}

void blk_f_0C05C6DC(sh3_t *c)
{
	LOCALS;
L_0C05C6DC: BLKS(0x0C05C6DCu);
	r0 = 0x2u; UPD(0x0C05C6DEu, 1);  /* 0C05C6DC mov.l @(disp,pc),Rn */
	r1 = 0xFFu; UPD(0x0C05C6E0u, 1);  /* 0C05C6DE mov.l @(disp,pc),Rn */
	IF(0x0C05C6E0u); { u32 t_ = PR; IF(0x0C05C6E2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C05C6E0 rts */
}

void blk_f_0C05C6EC(sh3_t *c)
{
	LOCALS;
L_0C05C6EC: BLKS(0x0C05C6ECu);
	r0 = 0x6u; UPD(0x0C05C6EEu, 1);  /* 0C05C6EC mov.l @(disp,pc),Rn */
	r1 = 0xFFu; UPD(0x0C05C6F0u, 1);  /* 0C05C6EE mov.l @(disp,pc),Rn */
	IF(0x0C05C6F0u); { u32 t_ = PR; IF(0x0C05C6F2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C05C6F0 rts */
}

/* rtc_eeprom_wait */
void blk_f_0C05D4A0(sh3_t *c)
{
	LOCALS;
L_0C05D4A0: BLKS(0x0C05D4A0u);
	r6 = 0x1u; UPD(0x0C05D4A2u, 1);  /* 0C05D4A0 mov.l @(disp,pc),Rn */
L_0C05D4A2: BLKS(0x0C05D4A2u);
	r6 = 0x6u; UPD(0x0C05D4A4u, 1);  /* 0C05D4A2 mov.l @(disp,pc),Rn */
	W8(r7, r6); UPD(0x0C05D4A6u, 1);  /* 0C05D4A4 mov.b Rm,@Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C05D4A8u, 1);  /* 0C05D4A6 mov.b @Rm,Rn */
	T = (r5 & r6) == 0;  /* 0C05D4A8 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05D4ACu); ; /* slot nop */ if (c_) { UPD(0x0C05D4C0u, 4); goto L_0C05D4C0; } goto L_0C05D4AE; }  /* 0C05D4AA bf/s */
L_0C05D4AE: BLKS(0x0C05D4AEu);
	r6 = 0x2u; UPD(0x0C05D4B0u, 2);  /* 0C05D4AE mov.l @(disp,pc),Rn */
	{ W8(r7, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C05D4A2u, 3); goto L_0C05D4A2; }  /* 0C05D4B0 bra */
L_0C05D4C0: BLKS(0x0C05D4C0u);
	IF(0x0C05D4C0u); ;  /* 0C05D4C0 nop */
	r6 = 0x2u; UPD(0x0C05D4C4u, 2);  /* 0C05D4C2 mov.l @(disp,pc),Rn */
	IF(0x0C05D4C4u); { u32 t_ = PR; W8(r7, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C05D4C4 rts */
}

/* rtc_eeprom_send_cmd */
void blk_f_0C05D4CC(sh3_t *c)
{
	LOCALS;
L_0C05D4CC: BLKS(0x0C05D4CCu);
	r7 = 0xB0C00001u; UPD(0x0C05D4CEu, 1);  /* 0C05D4CC mov.l @(disp,pc),Rn */
	r5 = 0x6u; UPD(0x0C05D4D0u, 1);  /* 0C05D4CE mov.l @(disp,pc),Rn */
	W8(r7, r5); UPD(0x0C05D4D2u, 1);  /* 0C05D4D0 mov.b Rm,@Rn */
	r2 = 0x64C00000u; UPD(0x0C05D4D4u, 1);  /* 0C05D4D2 mov.l @(disp,pc),Rn */
	r3 = 0x1u; UPD(0x0C05D4D6u, 1);  /* 0C05D4D4 mov.l @(disp,pc),Rn */
	r6 = 0x10u; UPD(0x0C05D4D8u, 1);  /* 0C05D4D6 mov.l @(disp,pc),Rn */
L_0C05D4D8: BLKS(0x0C05D4D8u);
	r5 = 0x4u; UPD(0x0C05D4DAu, 1);  /* 0C05D4D8 mov.l @(disp,pc),Rn */
	W8(r7, r5); UPD(0x0C05D4DCu, 1);  /* 0C05D4DA mov.b Rm,@Rn */
	IF(0x0C05D4DCu); T = r2 >> 31; r2 = (r2 << 1) | T;  /* 0C05D4DC rotl Rn */
	r4 = r2;  /* 0C05D4DE mov Rm,Rn */
	r4 &= r3;  /* 0C05D4E0 and Rm,Rn */
	r5 |= r4;  /* 0C05D4E2 or Rm,Rn */
	W8(r7, r5); UPD(0x0C05D4E6u, 5);  /* 0C05D4E4 mov.b Rm,@Rn */
	r5 = 0x6u; UPD(0x0C05D4E8u, 1);  /* 0C05D4E6 mov.l @(disp,pc),Rn */
	r5 |= r4;  /* 0C05D4E8 or Rm,Rn */
	W8(r7, r5); UPD(0x0C05D4ECu, 2);  /* 0C05D4EA mov.b Rm,@Rn */
	IF(0x0C05D4ECu); r6 -= 1; T = r6 == 0;  /* 0C05D4EC dt Rn */
	{ u32 c_ = !T; IF(0x0C05D4F0u); ; /* slot nop */ if (c_) { UPD(0x0C05D4D8u, 4); goto L_0C05D4D8; } goto L_0C05D4F2; }  /* 0C05D4EE bf/s */
L_0C05D4F2: BLKS(0x0C05D4F2u);
	r5 = 0x2u; UPD(0x0C05D4F4u, 2);  /* 0C05D4F2 mov.l @(disp,pc),Rn */
	IF(0x0C05D4F4u); { u32 t_ = PR; W8(r7, r5); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C05D4F4 rts */
}


#include "recomp.h"
#include "recomp_funcs.h"

/* free */
void f_0C04A572(sh3_t *c)
{
	LOCALS;
L_0C04A572: BLKS(0x0C04A572u);
	r7 = 0xC04A428u; UPD(0x0C04A574u, 1);  /* 0C04A572 mov.l @(disp,pc),Rn */
	T = (r4 & r4) == 0;  /* 0C04A574 tst Rm,Rn */
	{ u32 c_ = T; r4 += 0xFFFFFFE0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C04A5B8u, 4); goto L_0C04A5B8; } goto L_0C04A57A; }  /* 0C04A576 bt/s */
L_0C04A57A: BLKS(0x0C04A57Au);
	r5 = R32(r4 + 0x8u); UPD(0x0C04A57Cu, 2);  /* 0C04A57A mov.l @(disp,Rm),Rn */
	r6 = R32(r4 + 0xCu); UPD(0x0C04A57Eu, 1);  /* 0C04A57C mov.l @(disp,Rm),Rn */
	W32(r5 + 0xCu, r6); UPD(0x0C04A580u, 1);  /* 0C04A57E mov.l Rm,@(disp,Rn) */
	T = (r6 & r6) == 0;  /* 0C04A580 tst Rm,Rn */
	{ u32 c_ = T; r0 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04A59Cu, 4); goto L_0C04A59C; } goto L_0C04A586; }  /* 0C04A582 bt/s */
L_0C04A586: BLKS(0x0C04A586u);
	r1 = R32(r5 + 0x0u); UPD(0x0C04A588u, 2);  /* 0C04A586 mov.l @(disp,Rm),Rn */
	r0 -= r5;  /* 0C04A588 sub Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C04A58A tst Rm,Rn */
	r0 -= r1;  /* 0C04A58C sub Rm,Rn */
	{ u32 c_ = T; W32(r5 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C04A5AEu, 6); goto L_0C04A5AE; } UPD(0x0C04A592u, 1); goto L_0C04A592; }  /* 0C04A58E bt/s */
L_0C04A592: BLKS(0x0C04A592u);
	{ W32(r6 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C04A5AEu, 3); goto L_0C04A5AE; }  /* 0C04A592 bra */
L_0C04A59C: BLKS(0x0C04A59Cu);
	r0 = 0xC04A424u; UPD(0x0C04A59Eu, 1);  /* 0C04A59C mov.l @(disp,pc),Rn */
	r1 = R32(r5 + 0x0u); UPD(0x0C04A5A0u, 1);  /* 0C04A59E mov.l @(disp,Rm),Rn */
	r0 = R32(r0); UPD(0x0C04A5A2u, 1);  /* 0C04A5A0 mov.l @Rm,Rn */
	r0 -= r5;  /* 0C04A5A2 sub Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C04A5A4 tst Rm,Rn */
	r0 -= r1;  /* 0C04A5A6 sub Rm,Rn */
	{ u32 c_ = T; W32(r5 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C04A5AEu, 6); goto L_0C04A5AE; } UPD(0x0C04A5ACu, 1); goto L_0C04A5AC; }  /* 0C04A5A8 bt/s */
L_0C04A5AC: BLKS(0x0C04A5ACu);
	W32(r6 + 0x8u, r5); UPD(0x0C04A5AEu, 1);  /* 0C04A5AC mov.l Rm,@(disp,Rn) */
L_0C04A5AE: BLKS(0x0C04A5AEu);
	r0 = R32(r7); UPD(0x0C04A5B0u, 1);  /* 0C04A5AE mov.l @Rm,Rn */
	T = r0 == r4;  /* 0C04A5B0 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04A5B4u); ; /* slot nop */ if (c_) { UPD(0x0C04A5B8u, 4); goto L_0C04A5B8; } goto L_0C04A5B6; }  /* 0C04A5B2 bf/s */
L_0C04A5B6: BLKS(0x0C04A5B6u);
	W32(r7, r5); UPD(0x0C04A5B8u, 2);  /* 0C04A5B6 mov.l Rm,@Rn */
L_0C04A5B8: BLKS(0x0C04A5B8u);
	IF(0x0C04A5B8u); { u32 t_ = PR; IF(0x0C04A5BAu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04A5B8 rts */
}

void f_0C04A5DC(sh3_t *c)
{
	LOCALS;
L_0C04A5DC: BLKS(0x0C04A5DCu);
	IF(0x0C04A5DCu); r15 -= 4; W32(r15, PR); UPD(0x0C04A5DEu, 1);  /* 0C04A5DC sts.l pr,@-Rn */
	IF(0x0C04A5DEu); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C04A5DE stc Rb_bank,Rn */
	r5 = r4;  /* 0C04A5E0 mov Rm,Rn */
	r4 = R32(r4); UPD(0x0C04A5E4u, 3);  /* 0C04A5E2 mov.l @Rm,Rn */
	IF(0x0C04A5E4u); ARG0(0x44CEu); c->rbank[4] = r4;  /* 0C04A5E4 ldc Rn,Rb_bank */
	{ PR = 0x0C04A5EAu; { u32 v_ = r5; r15 -= 4; W32(r15, v_); } /* slot mov.l Rm,@-Rn */ UPD(0x0C04A572u, 4); CALL(f_0C04A572, 0x0C04A5EAu); }  /* 0C04A5E6 bsr */
L_0C04A5EA: BLKS(0x0C04A5EAu);
	{ u32 v_ = R32(r15); r15 += 4; r5 = v_; } UPD(0x0C04A5ECu, 1);  /* 0C04A5EA mov.l @Rm+,Rn */
	r0 = 0x0u;  /* 0C04A5EC mov #imm,Rn */
	IF(0x0C04A5EEu); PR = R32(r15); r15 += 4; UPD(0x0C04A5F0u, 2);  /* 0C04A5EE lds.l @Rn+,pr */
	IF(0x0C04A5F0u); { u32 t_ = PR; W32(r5, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C04A5F0 rts */
}

void f_0C04A610(sh3_t *c)
{
	LOCALS;
L_0C04A610: BLKS(0x0C04A610u);
	IF(0x0C04A610u); r15 -= 4; W32(r15, PR); UPD(0x0C04A612u, 1);  /* 0C04A610 sts.l pr,@-Rn */
	IF(0x0C04A612u); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C04A612 stc Rb_bank,Rn */
	{ PR = 0x0C04A618u; IF(0x0C04A616u); ARG0(0x05D2u); r5 = c->rbank[5]; /* slot stc Rb_bank,Rn */ UPD(0x0C04A62Au, 4); CALL(f_0C04A62A, 0x0C04A618u); }  /* 0C04A614 bsr */
L_0C04A618: BLKS(0x0C04A618u);
	IF(0x0C04A618u); PR = R32(r15); r15 += 4; UPD(0x0C04A61Au, 1);  /* 0C04A618 lds.l @Rn+,pr */
	IF(0x0C04A61Au); { u32 t_ = PR; IF(0x0C04A61Cu); ARG0(0x408Eu); c->rbank[0] = r0; /* slot ldc Rn,Rb_bank */ UPD(t_, 3); RET(t_); }  /* 0C04A61A rts */
}

/* malloc */
void f_0C04A61E(sh3_t *c)
{
	LOCALS;
L_0C04A61E: BLKS(0x0C04A61Eu);
	IF(0x0C04A61Eu); r15 -= 4; W32(r15, PR); UPD(0x0C04A620u, 1);  /* 0C04A61E sts.l pr,@-Rn */
	{ PR = 0x0C04A624u; IF(0x0C04A622u); ; /* slot nop */ UPD(0x0C04A62Au, 3); CALL(f_0C04A62A, 0x0C04A624u); }  /* 0C04A620 bsr */
L_0C04A624: BLKS(0x0C04A624u);
	IF(0x0C04A624u); PR = R32(r15); r15 += 4; UPD(0x0C04A626u, 1);  /* 0C04A624 lds.l @Rn+,pr */
	IF(0x0C04A626u); { u32 t_ = PR; IF(0x0C04A628u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04A626 rts */
}

/* heap_alloc */
void f_0C04A62A(sh3_t *c)
{
	LOCALS;
L_0C04A62A: BLKS(0x0C04A62Au);
	{ u32 v_ = r3; r15 -= 4; W32(r15, v_); } UPD(0x0C04A62Cu, 1);  /* 0C04A62A mov.l Rm,@-Rn */
	{ u32 v_ = r2; r15 -= 4; W32(r15, v_); } UPD(0x0C04A62Eu, 1);  /* 0C04A62C mov.l Rm,@-Rn */
	{ u32 v_ = r1; r15 -= 4; W32(r15, v_); } UPD(0x0C04A630u, 1);  /* 0C04A62E mov.l Rm,@-Rn */
	{ u32 v_ = r7; r15 -= 4; W32(r15, v_); } UPD(0x0C04A632u, 1);  /* 0C04A630 mov.l Rm,@-Rn */
	{ u32 v_ = r6; r15 -= 4; W32(r15, v_); } UPD(0x0C04A634u, 1);  /* 0C04A632 mov.l Rm,@-Rn */
	{ u32 v_ = r5; r15 -= 4; W32(r15, v_); } UPD(0x0C04A636u, 1);  /* 0C04A634 mov.l Rm,@-Rn */
	{ u32 v_ = r4; r15 -= 4; W32(r15, v_); } UPD(0x0C04A638u, 1);  /* 0C04A636 mov.l Rm,@-Rn */
	r3 = 0x2u;  /* 0C04A638 mov #imm,Rn */
	r4 += 0x2Fu;  /* 0C04A63A add #imm,Rn */
	r0 = 0xFFFFFFF0u;  /* 0C04A63C mov #imm,Rn */
	r4 &= r0;  /* 0C04A63E and Rm,Rn */
	IF(0x0C04A640u); T = (s32)r5 > 0;  /* 0C04A640 cmp/pl Rn */
	{ u32 c_ = !T; r6 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C04A648u, 8); goto L_0C04A648; } goto L_0C04A646; }  /* 0C04A642 bf/s */
L_0C04A646: BLKS(0x0C04A646u);
	r5 += 0xFFFFFFFFu;  /* 0C04A646 add #imm,Rn */
	UPD(0x0C04A648u, 2);
L_0C04A648: BLKS(0x0C04A648u);
	r7 = 0xC04A428u; UPD(0x0C04A64Au, 1);  /* 0C04A648 mov.l @(disp,pc),Rn */
	r7 = R32(r7); UPD(0x0C04A64Cu, 1);  /* 0C04A64A mov.l @Rm,Rn */
L_0C04A64C: BLKS(0x0C04A64Cu);
	r0 = R32(r7 + 0x0u); UPD(0x0C04A64Eu, 1);  /* 0C04A64C mov.l @(disp,Rm),Rn */
L_0C04A64E: BLKS(0x0C04A64Eu);
	r2 = R32(r15 + 0x4u); UPD(0x0C04A650u, 1);  /* 0C04A64E mov.l @(disp,Rm),Rn */
	r0 += r7;  /* 0C04A650 add Rm,Rn */
	r0 += 0x20u;  /* 0C04A652 add #imm,Rn */
	r0 &= r5;  /* 0C04A654 and Rm,Rn */
	r2 -= r0;  /* 0C04A656 sub Rm,Rn */
	r2 &= r5;  /* 0C04A658 and Rm,Rn */
	r0 = R32(r7 + 0x10u); UPD(0x0C04A65Cu, 6);  /* 0C04A65A mov.l @(disp,Rm),Rn */
	r0 -= r2;  /* 0C04A65C sub Rm,Rn */
	T = (s32)r0 >= (s32)r4;  /* 0C04A65E cmp/ge Rm,Rn */
	{ u32 c_ = T; IF(0x0C04A662u); ; /* slot nop */ if (c_) { UPD(0x0C04A694u, 5); goto L_0C04A694; } goto L_0C04A664; }  /* 0C04A660 bt/s */
L_0C04A664: BLKS(0x0C04A664u);
	r7 = R32(r7 + 0xCu); UPD(0x0C04A666u, 2);  /* 0C04A664 mov.l @(disp,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C04A666 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04A66Au); ; /* slot nop */ if (c_) { UPD(0x0C04A64Cu, 4); goto L_0C04A64C; } goto L_0C04A66C; }  /* 0C04A668 bf/s */
L_0C04A66C: BLKS(0x0C04A66Cu);
	r7 = 0xC04A420u; UPD(0x0C04A66Eu, 2);  /* 0C04A66C mov.l @(disp,pc),Rn */
	r0 = 0xC04A428u; UPD(0x0C04A670u, 1);  /* 0C04A66E mov.l @(disp,pc),Rn */
	r7 = R32(r7); UPD(0x0C04A672u, 1);  /* 0C04A670 mov.l @Rm,Rn */
	IF(0x0C04A672u); r3 -= 1; T = r3 == 0;  /* 0C04A672 dt Rn */
	W32(r0, r7); UPD(0x0C04A676u, 2);  /* 0C04A674 mov.l Rm,@Rn */
	{ u32 c_ = !T; r0 = R32(r7 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C04A64Eu, 3); goto L_0C04A64E; } UPD(0x0C04A67Au, 1); goto L_0C04A67A; }  /* 0C04A676 bf/s */
L_0C04A67A: BLKS(0x0C04A67Au);
	{ u32 v_ = R32(r15); r15 += 4; r4 = v_; } UPD(0x0C04A67Cu, 1);  /* 0C04A67A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r5 = v_; } UPD(0x0C04A67Eu, 1);  /* 0C04A67C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r6 = v_; } UPD(0x0C04A680u, 1);  /* 0C04A67E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r7 = v_; } UPD(0x0C04A682u, 1);  /* 0C04A680 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r1 = v_; } UPD(0x0C04A684u, 1);  /* 0C04A682 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r2 = v_; } UPD(0x0C04A686u, 1);  /* 0C04A684 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r3 = v_; } UPD(0x0C04A688u, 1);  /* 0C04A686 mov.l @Rm+,Rn */
	IF(0x0C04A688u); { u32 t_ = PR; r0 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04A688 rts */
L_0C04A694: BLKS(0x0C04A694u);
	r6 = R32(r7 + 0x0u); UPD(0x0C04A696u, 1);  /* 0C04A694 mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C04A696 add Rm,Rn */
	r6 += r2;  /* 0C04A698 add Rm,Rn */
	r0 = R32(r15 + 0x0u); UPD(0x0C04A69Cu, 3);  /* 0C04A69A mov.l @(disp,Rm),Rn */
	W32(r6 + 0x0u, r4); UPD(0x0C04A69Eu, 1);  /* 0C04A69C mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x4u, r0); UPD(0x0C04A6A0u, 1);  /* 0C04A69E mov.l Rm,@(disp,Rn) */
	r1 = R32(r7 + 0xCu); UPD(0x0C04A6A2u, 1);  /* 0C04A6A0 mov.l @(disp,Rm),Rn */
	W32(r6 + 0x8u, r7); UPD(0x0C04A6A4u, 1);  /* 0C04A6A2 mov.l Rm,@(disp,Rn) */
	T = (r1 & r1) == 0;  /* 0C04A6A4 tst Rm,Rn */
	{ u32 c_ = T; W32(r6 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C04A6D4u, 4); goto L_0C04A6D4; } UPD(0x0C04A6AAu, 1); goto L_0C04A6AA; }  /* 0C04A6A6 bt/s */
L_0C04A6AA: BLKS(0x0C04A6AAu);
	W32(r1 + 0x8u, r6); UPD(0x0C04A6ACu, 1);  /* 0C04A6AA mov.l Rm,@(disp,Rn) */
	r1 -= r6;  /* 0C04A6AC sub Rm,Rn */
	W32(r7 + 0xCu, r6); UPD(0x0C04A6B0u, 2);  /* 0C04A6AE mov.l Rm,@(disp,Rn) */
	r1 -= r4;  /* 0C04A6B0 sub Rm,Rn */
	W32(r7 + 0x10u, r2); UPD(0x0C04A6B4u, 2);  /* 0C04A6B2 mov.l Rm,@(disp,Rn) */
	r0 = 0xC04A428u; UPD(0x0C04A6B6u, 1);  /* 0C04A6B4 mov.l @(disp,pc),Rn */
	W32(r6 + 0x10u, r1); UPD(0x0C04A6B8u, 1);  /* 0C04A6B6 mov.l Rm,@(disp,Rn) */
	W32(r0, r6); UPD(0x0C04A6BAu, 1);  /* 0C04A6B8 mov.l Rm,@Rn */
	r6 += 0x20u;  /* 0C04A6BA add #imm,Rn */
	r0 = r6;  /* 0C04A6BC mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r4 = v_; } UPD(0x0C04A6C0u, 3);  /* 0C04A6BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r5 = v_; } UPD(0x0C04A6C2u, 1);  /* 0C04A6C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r6 = v_; } UPD(0x0C04A6C4u, 1);  /* 0C04A6C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r7 = v_; } UPD(0x0C04A6C6u, 1);  /* 0C04A6C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r1 = v_; } UPD(0x0C04A6C8u, 1);  /* 0C04A6C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r2 = v_; } UPD(0x0C04A6CAu, 1);  /* 0C04A6C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r3 = v_; } UPD(0x0C04A6CCu, 1);  /* 0C04A6CA mov.l @Rm+,Rn */
	IF(0x0C04A6CCu); { u32 t_ = PR; IF(0x0C04A6CEu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04A6CC rts */
L_0C04A6D4: BLKS(0x0C04A6D4u);
	r0 = 0xC04A424u; UPD(0x0C04A6D6u, 1);  /* 0C04A6D4 mov.l @(disp,pc),Rn */
	W32(r7 + 0xCu, r6); UPD(0x0C04A6D8u, 1);  /* 0C04A6D6 mov.l Rm,@(disp,Rn) */
	r0 = R32(r0); UPD(0x0C04A6DAu, 1);  /* 0C04A6D8 mov.l @Rm,Rn */
	W32(r7 + 0x10u, r2); UPD(0x0C04A6DCu, 1);  /* 0C04A6DA mov.l Rm,@(disp,Rn) */
	r0 -= r6;  /* 0C04A6DC sub Rm,Rn */
	r1 = 0xC04A428u; UPD(0x0C04A6E0u, 2);  /* 0C04A6DE mov.l @(disp,pc),Rn */
	r0 -= r4;  /* 0C04A6E0 sub Rm,Rn */
	W32(r1, r6); UPD(0x0C04A6E4u, 2);  /* 0C04A6E2 mov.l Rm,@Rn */
	W32(r6 + 0x10u, r0); UPD(0x0C04A6E6u, 1);  /* 0C04A6E4 mov.l Rm,@(disp,Rn) */
	r6 += 0x20u;  /* 0C04A6E6 add #imm,Rn */
	r0 = r6;  /* 0C04A6E8 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r4 = v_; } UPD(0x0C04A6ECu, 3);  /* 0C04A6EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r5 = v_; } UPD(0x0C04A6EEu, 1);  /* 0C04A6EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r6 = v_; } UPD(0x0C04A6F0u, 1);  /* 0C04A6EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r7 = v_; } UPD(0x0C04A6F2u, 1);  /* 0C04A6F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r1 = v_; } UPD(0x0C04A6F4u, 1);  /* 0C04A6F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r2 = v_; } UPD(0x0C04A6F6u, 1);  /* 0C04A6F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r3 = v_; } UPD(0x0C04A6F8u, 1);  /* 0C04A6F6 mov.l @Rm+,Rn */
	IF(0x0C04A6F8u); { u32 t_ = PR; IF(0x0C04A6FAu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04A6F8 rts */
}

void f_0C04A720(sh3_t *c)
{
	LOCALS;
L_0C04A720: BLKS(0x0C04A720u);
	IF(0x0C04A720u); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C04A720 stc Rb_bank,Rn */
	IF(0x0C04A722u); ARG0(0x05D2u); r5 = c->rbank[5];  /* 0C04A722 stc Rb_bank,Rn */
	IF(0x0C04A724u); r15 -= 4; W32(r15, MACL); UPD(0x0C04A726u, 3);  /* 0C04A724 sts.l macl,@-Rn */
	IF(0x0C04A726u); r15 -= 4; W32(r15, PR); UPD(0x0C04A728u, 1);  /* 0C04A726 sts.l pr,@-Rn */
	IF(0x0C04A728u); MACL = r5 * r4;  /* 0C04A728 mul.l Rm,Rn */
	r5 = r6;  /* 0C04A72A mov Rm,Rn */
	{ PR = 0x0C04A730u; IF(0x0C04A72Eu); r4 = MACL; /* slot sts macl,Rn */ UPD(0x0C04A62Au, 6); CALL(f_0C04A62A, 0x0C04A730u); }  /* 0C04A72C bsr */
L_0C04A730: BLKS(0x0C04A730u);
	IF(0x0C04A730u); ARG0(0x408Eu); c->rbank[0] = r0;  /* 0C04A730 ldc Rn,Rb_bank */
	r2 = r0;  /* 0C04A732 mov Rm,Rn */
	IF(0x0C04A734u); r3 = MACL;  /* 0C04A734 sts macl,Rn */
	T = (r2 & r2) == 0;  /* 0C04A736 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0x3u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C04A748u, 7); goto L_0C04A748; } goto L_0C04A73C; }  /* 0C04A738 bt/s */
L_0C04A73C: BLKS(0x0C04A73Cu);
	r1 = 0x0u;  /* 0C04A73C mov #imm,Rn */
	IF(0x0C04A73Eu); r3 >>= 2;  /* 0C04A73E shlr2 Rn */
	UPD(0x0C04A740u, 3);
L_0C04A740: BLKS(0x0C04A740u);
	W32(r2, r1); UPD(0x0C04A742u, 1);  /* 0C04A740 mov.l Rm,@Rn */
	IF(0x0C04A742u); r3 -= 1; T = r3 == 0;  /* 0C04A742 dt Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C04A740u, 4); goto L_0C04A740; } UPD(0x0C04A748u, 1); goto L_0C04A748; }  /* 0C04A744 bf/s */
L_0C04A748: BLKS(0x0C04A748u);
	IF(0x0C04A748u); PR = R32(r15); r15 += 4; UPD(0x0C04A74Au, 1);  /* 0C04A748 lds.l @Rn+,pr */
	IF(0x0C04A74Au); { u32 t_ = PR; IF(0x0C04A74Cu); MACL = R32(r15); r15 += 4; /* slot lds.l @Rn+,macl */ UPD(t_, 3); RET(t_); }  /* 0C04A74A rts */
}

/* memset8 */
void f_0C04A750(sh3_t *c)
{
	LOCALS;
L_0C04A750: BLKS(0x0C04A750u);
	W8(r4, r5); UPD(0x0C04A752u, 1);  /* 0C04A750 mov.b Rm,@Rn */
	IF(0x0C04A752u); r6 -= 1; T = r6 == 0;  /* 0C04A752 dt Rn */
	{ u32 c_ = !T; r4 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C04A750u, 4); goto L_0C04A750; } goto L_0C04A758; }  /* 0C04A754 bf/s */
L_0C04A758: BLKS(0x0C04A758u);
	IF(0x0C04A758u); { u32 t_ = PR; IF(0x0C04A75Au); ; /* slot nop */ UPD(t_, 4); RET(t_); }  /* 0C04A758 rts */
}

/* memcpy8 */
void f_0C04A75C(sh3_t *c)
{
	LOCALS;
L_0C04A75C: BLKS(0x0C04A75Cu);
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r0 = v_; } UPD(0x0C04A75Eu, 1);  /* 0C04A75C mov.b @Rm+,Rn */
	W8(r4, r0); UPD(0x0C04A760u, 1);  /* 0C04A75E mov.b Rm,@Rn */
	IF(0x0C04A760u); r6 -= 1; T = r6 == 0;  /* 0C04A760 dt Rn */
	{ u32 c_ = !T; r4 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C04A75Cu, 4); goto L_0C04A75C; } goto L_0C04A766; }  /* 0C04A762 bf/s */
L_0C04A766: BLKS(0x0C04A766u);
	IF(0x0C04A766u); { u32 t_ = PR; IF(0x0C04A768u); ; /* slot nop */ UPD(t_, 4); RET(t_); }  /* 0C04A766 rts */
}

void f_0C04AFF8(sh3_t *c)
{
	LOCALS;
L_0C04AFF8: BLKS(0x0C04AFF8u);
	IF(0x0C04AFF8u); r0 = PR;  /* 0C04AFF8 sts pr,Rn */
	IF(0x0C04AFFAu); r15 -= 4; W32(r15, PR); UPD(0x0C04AFFCu, 2);  /* 0C04AFFA sts.l pr,@-Rn */
	IF(0x0C04AFFCu); ARG0(0x40FEu); c->rbank[7] = r0;  /* 0C04AFFC ldc Rn,Rb_bank */
	{ PR = 0x0C04B002u; IF(0x0C04B000u); ARG0(0x04C2u); r4 = c->rbank[4]; /* slot stc Rb_bank,Rn */ UPD(0x0C04B008u, 4); CALL(f_0C04B008, 0x0C04B002u); }  /* 0C04AFFE bsr */
L_0C04B002: BLKS(0x0C04B002u);
	IF(0x0C04B002u); PR = R32(r15); r15 += 4; UPD(0x0C04B004u, 1);  /* 0C04B002 lds.l @Rn+,pr */
	{ IF(0x0C04B006u); ARG0(0x408Eu); c->rbank[0] = r0; /* slot ldc Rn,Rb_bank */ UPD(0x0C04B3F4u, 3); TAIL(f_0C04B3F4); }  /* 0C04B004 bra */
}

/* interrupt_dispatch */
void f_0C04B008(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C04B098);
L_0C04B008: BLKS(0x0C04B008u);
	IF(0x0C04B008u); r15 -= 4; W32(r15, PR); UPD(0x0C04B00Au, 1);  /* 0C04B008 sts.l pr,@-Rn */
	{ u32 v_ = r4; r15 -= 4; W32(r15, v_); } UPD(0x0C04B00Cu, 1);  /* 0C04B00A mov.l Rm,@-Rn */
	r1 = 0x100u; UPD(0x0C04B00Eu, 1);  /* 0C04B00C mov.l @(disp,pc),Rn */
	r4 = R32(r4 + 0x10u); UPD(0x0C04B010u, 1);  /* 0C04B00E mov.l @(disp,Rm),Rn */
	r0 = 0xC04A61Eu; UPD(0x0C04B012u, 1);  /* 0C04B010 mov.l @(disp,pc),Rn */
	r4 += r1;  /* 0C04B012 add Rm,Rn */
	IF(0x0C04B014u); { u32 t_ = r0; PR = 0x0C04B018u; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04A61E, 0x0C04A61Eu, 0x0C04B018u); }  /* 0C04B014 jsr @Rn */
L_0C04B018: BLKS(0x0C04B018u);
	r4 = r0;  /* 0C04B018 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r6 = v_; } UPD(0x0C04B01Cu, 2);  /* 0C04B01A mov.l @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C04B01C tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04B020u); ; /* slot nop */ if (c_) { UPD(0x0C04B030u, 4); goto L_0C04B030; } goto L_0C04B022; }  /* 0C04B01E bf/s */
L_0C04B022: BLKS(0x0C04B022u);
	IF(0x0C04B022u); PR = R32(r15); r15 += 4; UPD(0x0C04B024u, 2);  /* 0C04B022 lds.l @Rn+,pr */
	IF(0x0C04B024u); { u32 t_ = PR; r0 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04B024 rts */
L_0C04B030: BLKS(0x0C04B030u);
	r7 = 0xC04A820u; UPD(0x0C04B032u, 1);  /* 0C04B030 mov.l @(disp,pc),Rn */
	r1 = 0x20u;  /* 0C04B032 mov #imm,Rn */
	UPD(0x0C04B034u, 1);
L_0C04B034: BLKS(0x0C04B034u);
	r0 = R32(r7 + 0x0u); UPD(0x0C04B036u, 1);  /* 0C04B034 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C04B036 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C04B03Au); r1 -= 1; T = r1 == 0; /* slot dt Rn */ if (c_) { UPD(0x0C04B054u, 4); goto L_0C04B054; } goto L_0C04B03C; }  /* 0C04B038 bt/s */
L_0C04B03C: BLKS(0x0C04B03Cu);
	{ u32 c_ = !T; r7 += 0x28u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C04B034u, 4); goto L_0C04B034; } goto L_0C04B040; }  /* 0C04B03C bf/s */
L_0C04B040: BLKS(0x0C04B040u);
	r0 = 0xC04A572u; UPD(0x0C04B042u, 2);  /* 0C04B040 mov.l @(disp,pc),Rn */
	IF(0x0C04B042u); { u32 t_ = r0; PR = 0x0C04B046u; IF(0x0C04B044u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A572, 0x0C04A572u, 0x0C04B046u); }  /* 0C04B042 jsr @Rn */
L_0C04B046: BLKS(0x0C04B046u);
	IF(0x0C04B046u); PR = R32(r15); r15 += 4; UPD(0x0C04B048u, 1);  /* 0C04B046 lds.l @Rn+,pr */
	IF(0x0C04B048u); { u32 t_ = PR; r0 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04B048 rts */
L_0C04B054: BLKS(0x0C04B054u);
	r0 = R32(r6 + 0x0u); UPD(0x0C04B056u, 1);  /* 0C04B054 mov.l @(disp,Rm),Rn */
	r1 = R32(r6 + 0x4u); UPD(0x0C04B058u, 1);  /* 0C04B056 mov.l @(disp,Rm),Rn */
	IF(0x0C04B058u); T = r0 >> 31; r0 <<= 1;  /* 0C04B058 shll Rn */
	r2 = 0x1u;  /* 0C04B05A mov #imm,Rn */
	r0 += r1;  /* 0C04B05C add Rm,Rn */
	r3 = 0x0u;  /* 0C04B05E mov #imm,Rn */
	W32(r7 + 0x0u, r2); UPD(0x0C04B062u, 5);  /* 0C04B060 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x4u, r0); UPD(0x0C04B064u, 1);  /* 0C04B062 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x8u, r3); UPD(0x0C04B066u, 1);  /* 0C04B064 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0xCu, r3); UPD(0x0C04B068u, 1);  /* 0C04B066 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x10u, r4); UPD(0x0C04B06Au, 1);  /* 0C04B068 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x1Cu, r3); UPD(0x0C04B06Cu, 1);  /* 0C04B06A mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x20u, r3); UPD(0x0C04B06Eu, 1);  /* 0C04B06C mov.l Rm,@(disp,Rn) */
	r1 = R32(r6 + 0x10u); UPD(0x0C04B070u, 1);  /* 0C04B06E mov.l @(disp,Rm),Rn */
	r2 = R32(r15); UPD(0x0C04B072u, 1);  /* 0C04B070 mov.l @Rm,Rn */
	r4 += r1;  /* 0C04B072 add Rm,Rn */
	r3 = R32(r6 + 0x8u); UPD(0x0C04B076u, 2);  /* 0C04B074 mov.l @(disp,Rm),Rn */
	r1 = R32(r6 + 0xCu); UPD(0x0C04B078u, 1);  /* 0C04B076 mov.l @(disp,Rm),Rn */
	{ u32 v_ = r2; r4 -= 4; W32(r4, v_); } UPD(0x0C04B07Au, 1);  /* 0C04B078 mov.l Rm,@-Rn */
	r4 += 0xFFFFFFFCu;  /* 0C04B07A add #imm,Rn */
	IF(0x0C04B07Cu); ARG0(0x4433u); r4 -= 4; W32N(r4, c->ssr);  /* 0C04B07C stc.l ssr,@-Rn */
	{ u32 v_ = r3; r4 -= 4; W32(r4, v_); } UPD(0x0C04B080u, 3);  /* 0C04B07E mov.l Rm,@-Rn */
	r4 += 0xFFFFFFF0u;  /* 0C04B080 add #imm,Rn */
	{ u32 v_ = r7; r4 -= 4; W32(r4, v_); } UPD(0x0C04B084u, 2);  /* 0C04B082 mov.l Rm,@-Rn */
	{ u32 v_ = r1; r4 -= 4; W32(r4, v_); } UPD(0x0C04B086u, 1);  /* 0C04B084 mov.l Rm,@-Rn */
	r4 += 0xFFFFFFF0u;  /* 0C04B086 add #imm,Rn */
	IF(0x0C04B088u); ARG0(0x44F3u); r4 -= 4; W32N(r4, c->rbank[7]); UPDN(0x0C04B08Au, 1);  /* 0C04B088 stc.l Rb_bank,@-Rn */
	r4 += 0xFFFFFFE4u;  /* 0C04B08A add #imm,Rn */
	W32(r7 + 0x14u, r4); UPD(0x0C04B08Eu, 4);  /* 0C04B08C mov.l Rm,@(disp,Rn) */
	IF(0x0C04B08Eu); r0 <<= 2;  /* 0C04B08E shll2 Rn */
	r3 = 0xC04A7A0u; UPD(0x0C04B092u, 2);  /* 0C04B090 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C04B092 add Rm,Rn */
	r5 = R32(r3); UPD(0x0C04B096u, 2);  /* 0C04B094 mov.l @Rm,Rn */
	r0 = 0x4u;  /* 0C04B096 mov #imm,Rn */
	UPD(0x0C04B098u, 1);
L_0C04B098: BLKS(0x0C04B098u);
	SPIN_SAVE(0C04B098);
	IF(0x0C04B098u); r6 = RS32(0C04B098, r0 + r3); UPD(0x0C04B09Au, 1);  /* 0C04B098 mov.l @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C04B09A tst Rm,Rn */
	{ u32 c_ = T; r0 += 0x4u; /* slot add #imm,Rn */ if (c_) { SPIN_FFD(0C04B098, 5); UPD(0x0C04B098u, 4); goto L_0C04B098; } goto L_0C04B0A0; }  /* 0C04B09C bt/s */
L_0C04B0A0: BLKS(0x0C04B0A0u);
	r4 = R32(r6 + 0x18u); UPD(0x0C04B0A2u, 2);  /* 0C04B0A0 mov.l @(disp,Rm),Rn */
	W32(r6 + 0x18u, r7); UPD(0x0C04B0A4u, 1);  /* 0C04B0A2 mov.l Rm,@(disp,Rn) */
	T = (r4 & r4) == 0;  /* 0C04B0A4 tst Rm,Rn */
	W32(r7 + 0x18u, r4); UPD(0x0C04B0A8u, 2);  /* 0C04B0A6 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r7 + 0x1Cu, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C04B0AEu, 3); goto L_0C04B0AE; } UPD(0x0C04B0ACu, 1); goto L_0C04B0AC; }  /* 0C04B0A8 bt/s */
L_0C04B0AC: BLKS(0x0C04B0ACu);
	W32(r4 + 0x1Cu, r7); UPD(0x0C04B0AEu, 1);  /* 0C04B0AC mov.l Rm,@(disp,Rn) */
L_0C04B0AE: BLKS(0x0C04B0AEu);
	T = (r5 & r5) == 0;  /* 0C04B0AE tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04B0B2u); ; /* slot nop */ if (c_) { UPD(0x0C04B0B6u, 4); goto L_0C04B0B6; } goto L_0C04B0B4; }  /* 0C04B0B0 bf/s */
L_0C04B0B4: BLKS(0x0C04B0B4u);
	W32(r3, r7); UPD(0x0C04B0B6u, 2);  /* 0C04B0B4 mov.l Rm,@Rn */
L_0C04B0B6: BLKS(0x0C04B0B6u);
	{ u32 v_ = r7; r15 -= 4; W32(r15, v_); } UPD(0x0C04B0B8u, 1);  /* 0C04B0B6 mov.l Rm,@-Rn */
	{ PR = 0x0C04B0BCu; IF(0x0C04B0BAu); ; /* slot nop */ UPD(0x0C04B514u, 3); CALL(f_0C04B514, 0x0C04B0BCu); }  /* 0C04B0B8 bsr */
L_0C04B0BC: BLKS(0x0C04B0BCu);
	{ u32 v_ = R32(r15); r15 += 4; r0 = v_; } UPD(0x0C04B0BEu, 1);  /* 0C04B0BC mov.l @Rm+,Rn */
	IF(0x0C04B0BEu); PR = R32(r15); r15 += 4; UPD(0x0C04B0C0u, 1);  /* 0C04B0BE lds.l @Rn+,pr */
	IF(0x0C04B0C0u); { u32 t_ = PR; IF(0x0C04B0C2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04B0C0 rts */
}

void f_0C04B104(sh3_t *c)
{
	LOCALS;
L_0C04B104: BLKS(0x0C04B104u);
	IF(0x0C04B104u); r15 -= 4; W32(r15, PR); UPD(0x0C04B106u, 1);  /* 0C04B104 sts.l pr,@-Rn */
	{ PR = 0x0C04B10Au; IF(0x0C04B108u); ARG0(0x04C2u); r4 = c->rbank[4]; /* slot stc Rb_bank,Rn */ UPD(0x0C04B10Eu, 3); CALL(f_0C04B10E, 0x0C04B10Au); }  /* 0C04B106 bsr */
L_0C04B10A: BLKS(0x0C04B10Au);
	{ IF(0x0C04B10Cu); PR = R32(r15); r15 += 4; /* slot lds.l @Rn+,pr */ UPD(0x0C04B3F4u, 3); TAIL(f_0C04B3F4); }  /* 0C04B10A bra */
}

/* FUN_0c04b10e */
void f_0C04B10E(sh3_t *c)
{
	LOCALS;
L_0C04B10E: BLKS(0x0C04B10Eu);
	IF(0x0C04B10Eu); r15 -= 4; W32(r15, PR); UPD(0x0C04B110u, 1);  /* 0C04B10E sts.l pr,@-Rn */
	{ u32 v_ = r4; r15 -= 4; W32(r15, v_); } UPD(0x0C04B112u, 1);  /* 0C04B110 mov.l Rm,@-Rn */
	r0 = 0xC04A572u; UPD(0x0C04B114u, 1);  /* 0C04B112 mov.l @(disp,pc),Rn */
	r4 = R32(r4 + 0x10u); UPD(0x0C04B116u, 1);  /* 0C04B114 mov.l @(disp,Rm),Rn */
	IF(0x0C04B116u); { u32 t_ = r0; PR = 0x0C04B11Au; IF(0x0C04B118u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A572, 0x0C04A572u, 0x0C04B11Au); }  /* 0C04B116 jsr @Rn */
L_0C04B11A: BLKS(0x0C04B11Au);
	{ u32 v_ = R32(r15); r15 += 4; r7 = v_; } UPD(0x0C04B11Cu, 1);  /* 0C04B11A mov.l @Rm+,Rn */
	r0 = 0x0u;  /* 0C04B11C mov #imm,Rn */
	r5 = R32(r7 + 0x18u); UPD(0x0C04B120u, 2);  /* 0C04B11E mov.l @(disp,Rm),Rn */
	r6 = R32(r7 + 0x1Cu); UPD(0x0C04B122u, 1);  /* 0C04B120 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C04B122 tst Rm,Rn */
	W32(r7 + 0x0u, r0); UPD(0x0C04B126u, 2);  /* 0C04B124 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; r0 = R32(r7 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C04B12Cu, 3); goto L_0C04B12C; } UPD(0x0C04B12Au, 1); goto L_0C04B12A; }  /* 0C04B126 bt/s */
L_0C04B12A: BLKS(0x0C04B12Au);
	W32(r5 + 0x1Cu, r6); UPD(0x0C04B12Cu, 1);  /* 0C04B12A mov.l Rm,@(disp,Rn) */
L_0C04B12C: BLKS(0x0C04B12Cu);
	r1 = 0xC04A7A0u; UPD(0x0C04B12Eu, 1);  /* 0C04B12C mov.l @(disp,pc),Rn */
	IF(0x0C04B12Eu); r0 <<= 2;  /* 0C04B12E shll2 Rn */
	W32(r6 + 0x18u, r5); UPD(0x0C04B132u, 2);  /* 0C04B130 mov.l Rm,@(disp,Rn) */
	IF(0x0C04B132u); r2 = R32(r0 + r1); UPD(0x0C04B134u, 1);  /* 0C04B132 mov.l @(r0,Rm),Rn */
	T = r7 == r2;  /* 0C04B134 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04B138u); r0 >>= 2; /* slot shlr2 Rn */ if (c_) { UPD(0x0C04B146u, 4); goto L_0C04B146; } goto L_0C04B13A; }  /* 0C04B136 bf/s */
L_0C04B13A: BLKS(0x0C04B13Au);
	r2 = R32(r6 + 0x4u); UPD(0x0C04B13Cu, 2);  /* 0C04B13A mov.l @(disp,Rm),Rn */
	T = r0 == r2;  /* 0C04B13C cmp/eq Rm,Rn */
	{ u32 c_ = T; IF(0x0C04B140u); r0 <<= 2; /* slot shll2 Rn */ if (c_) { UPD(0x0C04B144u, 4); goto L_0C04B144; } goto L_0C04B142; }  /* 0C04B13E bt/s */
L_0C04B142: BLKS(0x0C04B142u);
	r6 = 0x0u;  /* 0C04B142 mov #imm,Rn */
	UPD(0x0C04B144u, 2);
L_0C04B144: BLKS(0x0C04B144u);
	IF(0x0C04B144u); W32(r0 + r1, r6); UPD(0x0C04B146u, 1);  /* 0C04B144 mov.l Rm,@(r0,Rn) */
L_0C04B146: BLKS(0x0C04B146u);
	r4 = 0x1u;  /* 0C04B146 mov #imm,Rn */
	W32(r7 + 0x8u, r4); UPD(0x0C04B14Au, 2);  /* 0C04B148 mov.l Rm,@(disp,Rn) */
	{ PR = 0x0C04B14Eu; IF(0x0C04B14Cu); ; /* slot nop */ UPD(0x0C04B514u, 3); CALL(f_0C04B514, 0x0C04B14Eu); }  /* 0C04B14A bsr */
L_0C04B14E: BLKS(0x0C04B14Eu);
	IF(0x0C04B14Eu); PR = R32(r15); r15 += 4; UPD(0x0C04B150u, 1);  /* 0C04B14E lds.l @Rn+,pr */
	IF(0x0C04B150u); { u32 t_ = PR; IF(0x0C04B152u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04B150 rts */
}

void f_0C04B17C(sh3_t *c)
{
	LOCALS;
L_0C04B17C: BLKS(0x0C04B17Cu);
	r4 = 0xC04AD20u; UPD(0x0C04B17Eu, 1);  /* 0C04B17C mov.l @(disp,pc),Rn */
	r4 = R32(r4); UPD(0x0C04B180u, 1);  /* 0C04B17E mov.l @Rm,Rn */
	r0 = 0xC04A572u; UPD(0x0C04B182u, 1);  /* 0C04B180 mov.l @(disp,pc),Rn */
	r4 = R32(r4 + 0x10u); UPD(0x0C04B184u, 1);  /* 0C04B182 mov.l @(disp,Rm),Rn */
	IF(0x0C04B184u); { u32 t_ = r0; PR = 0x0C04B188u; IF(0x0C04B186u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A572, 0x0C04A572u, 0x0C04B188u); }  /* 0C04B184 jsr @Rn */
L_0C04B188: BLKS(0x0C04B188u);
	r1 = 0xC04AD20u; UPD(0x0C04B18Au, 1);  /* 0C04B188 mov.l @(disp,pc),Rn */
	r7 = R32(r1); UPD(0x0C04B18Cu, 1);  /* 0C04B18A mov.l @Rm,Rn */
	r0 = 0x0u;  /* 0C04B18C mov #imm,Rn */
	r5 = R32(r7 + 0x18u); UPD(0x0C04B190u, 2);  /* 0C04B18E mov.l @(disp,Rm),Rn */
	r6 = R32(r7 + 0x1Cu); UPD(0x0C04B192u, 1);  /* 0C04B190 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C04B192 tst Rm,Rn */
	W32(r1, r6); UPD(0x0C04B196u, 2);  /* 0C04B194 mov.l Rm,@Rn */
	{ u32 c_ = T; W32(r7 + 0x0u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C04B19Cu, 3); goto L_0C04B19C; } UPD(0x0C04B19Au, 1); goto L_0C04B19A; }  /* 0C04B196 bt/s */
L_0C04B19A: BLKS(0x0C04B19Au);
	W32(r5 + 0x1Cu, r6); UPD(0x0C04B19Cu, 1);  /* 0C04B19A mov.l Rm,@(disp,Rn) */
L_0C04B19C: BLKS(0x0C04B19Cu);
	r0 = R32(r7 + 0x4u); UPD(0x0C04B19Eu, 1);  /* 0C04B19C mov.l @(disp,Rm),Rn */
	r1 = 0xC04A7A0u; UPD(0x0C04B1A0u, 1);  /* 0C04B19E mov.l @(disp,pc),Rn */
	IF(0x0C04B1A0u); r0 <<= 2;  /* 0C04B1A0 shll2 Rn */
	W32(r6 + 0x18u, r5); UPD(0x0C04B1A4u, 2);  /* 0C04B1A2 mov.l Rm,@(disp,Rn) */
	IF(0x0C04B1A4u); r2 = R32(r0 + r1); UPD(0x0C04B1A6u, 1);  /* 0C04B1A4 mov.l @(r0,Rm),Rn */
	T = r7 == r2;  /* 0C04B1A6 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04B1AAu); r0 >>= 2; /* slot shlr2 Rn */ if (c_) { UPD(0x0C04B1BAu, 4); goto L_0C04B1BA; } goto L_0C04B1AC; }  /* 0C04B1A8 bf/s */
L_0C04B1AC: BLKS(0x0C04B1ACu);
	r2 = R32(r6 + 0x4u); UPD(0x0C04B1AEu, 2);  /* 0C04B1AC mov.l @(disp,Rm),Rn */
	r3 = 0x0u;  /* 0C04B1AE mov #imm,Rn */
	T = r0 == r2;  /* 0C04B1B0 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04B1B4u); r0 <<= 2; /* slot shll2 Rn */ if (c_) { UPD(0x0C04B1B8u, 5); goto L_0C04B1B8; } goto L_0C04B1B6; }  /* 0C04B1B2 bf/s */
L_0C04B1B6: BLKS(0x0C04B1B6u);
	r3 = r6;  /* 0C04B1B6 mov Rm,Rn */
	UPD(0x0C04B1B8u, 2);
L_0C04B1B8: BLKS(0x0C04B1B8u);
	IF(0x0C04B1B8u); W32(r0 + r1, r3); UPD(0x0C04B1BAu, 1);  /* 0C04B1B8 mov.l Rm,@(r0,Rn) */
L_0C04B1BA: BLKS(0x0C04B1BAu);
	r4 = 0x1u;  /* 0C04B1BA mov #imm,Rn */
	W32(r7 + 0x8u, r4); UPD(0x0C04B1BEu, 2);  /* 0C04B1BC mov.l Rm,@(disp,Rn) */
	{ u32 v_ = r6; r15 -= 4; W32(r15, v_); } UPD(0x0C04B1C0u, 1);  /* 0C04B1BE mov.l Rm,@-Rn */
	{ PR = 0x0C04B1C4u; IF(0x0C04B1C2u); ; /* slot nop */ UPD(0x0C04B514u, 3); CALL(f_0C04B514, 0x0C04B1C4u); }  /* 0C04B1C0 bsr */
L_0C04B1C4: BLKS(0x0C04B1C4u);
	{ u32 v_ = R32(r15); r15 += 4; r6 = v_; } UPD(0x0C04B1C6u, 1);  /* 0C04B1C4 mov.l @Rm+,Rn */
	r0 = R32(r6 + 0x4u); UPD(0x0C04B1C8u, 1);  /* 0C04B1C6 mov.l @(disp,Rm),Rn */
	r1 = 0xC04A7E0u; UPD(0x0C04B1CAu, 1);  /* 0C04B1C8 mov.l @(disp,pc),Rn */
	IF(0x0C04B1CAu); r0 <<= 2;  /* 0C04B1CA shll2 Rn */
	IF(0x0C04B1CCu); W32(r0 + r1, r6); UPD(0x0C04B1CEu, 2);  /* 0C04B1CC mov.l Rm,@(r0,Rn) */
	r15 = R32(r6 + 0x14u); UPD(0x0C04B1D0u, 1);  /* 0C04B1CE mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C04B1D2u, 1);  /* 0C04B1D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C04B1D4u, 1);  /* 0C04B1D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C04B1D6u, 1);  /* 0C04B1D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C04B1D8u, 1);  /* 0C04B1D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C04B1DAu, 1);  /* 0C04B1D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04B1DCu, 1);  /* 0C04B1DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C04B1DEu, 1);  /* 0C04B1DC mov.l @Rm+,Rn */
	IF(0x0C04B1DEu); PR = R32(r15); r15 += 4; UPD(0x0C04B1E0u, 1);  /* 0C04B1DE lds.l @Rn+,pr */
	IF(0x0C04B1E0u); MACL = R32(r15); r15 += 4; UPD(0x0C04B1E2u, 1);  /* 0C04B1E0 lds.l @Rn+,macl */
	IF(0x0C04B1E2u); MACH = R32(r15); r15 += 4; UPD(0x0C04B1E4u, 1);  /* 0C04B1E2 lds.l @Rn+,mach */
	IF(0x0C04B1E4u); ARG0(0x4FF7u); c->rbank[7] = R32N(r15); r15 += 4;  /* 0C04B1E4 ldc.l @Rn+,Rb_bank */
	IF(0x0C04B1E6u); ARG0(0x4FE7u); c->rbank[6] = R32N(r15); r15 += 4;  /* 0C04B1E6 ldc.l @Rn+,Rb_bank */
	IF(0x0C04B1E8u); ARG0(0x4FD7u); c->rbank[5] = R32N(r15); r15 += 4;  /* 0C04B1E8 ldc.l @Rn+,Rb_bank */
	IF(0x0C04B1EAu); ARG0(0x4FC7u); c->rbank[4] = R32N(r15); r15 += 4;  /* 0C04B1EA ldc.l @Rn+,Rb_bank */
	IF(0x0C04B1ECu); ARG0(0x4FB7u); c->rbank[3] = R32N(r15); r15 += 4;  /* 0C04B1EC ldc.l @Rn+,Rb_bank */
	IF(0x0C04B1EEu); ARG0(0x4FA7u); c->rbank[2] = R32N(r15); r15 += 4;  /* 0C04B1EE ldc.l @Rn+,Rb_bank */
	IF(0x0C04B1F0u); ARG0(0x4F97u); c->rbank[1] = R32N(r15); r15 += 4;  /* 0C04B1F0 ldc.l @Rn+,Rb_bank */
	IF(0x0C04B1F2u); ARG0(0x4F87u); c->rbank[0] = R32N(r15); r15 += 4;  /* 0C04B1F2 ldc.l @Rn+,Rb_bank */
	IF(0x0C04B1F4u); ARG0(0x4F47u); c->spc = R32N(r15); r15 += 4;  /* 0C04B1F4 ldc.l @Rn+,spc */
	IF(0x0C04B1F6u); ARG0(0x4F37u); c->ssr = R32N(r15); r15 += 4;  /* 0C04B1F6 ldc.l @Rn+,ssr */
	{ IF(0x0C04B1FAu); c->gbr = R32(r15); r15 += 4; /* slot ldc.l @Rn+,gbr */ UPD(0x0C04B3F4u, 13); TAIL(f_0C04B3F4); }  /* 0C04B1F8 bra */
}

void f_0C04B23C(sh3_t *c)
{
	LOCALS;
L_0C04B23C: BLKS(0x0C04B23Cu);
	IF(0x0C04B23Cu); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C04B23C stc Rb_bank,Rn */
	IF(0x0C04B23Eu); ARG0(0x05D2u); r5 = c->rbank[5];  /* 0C04B23E stc Rb_bank,Rn */
	{ W32(r4 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C04B3F4u, 5); TAIL(f_0C04B3F4); }  /* 0C04B240 bra */
}

void f_0C04B274(sh3_t *c)
{
	LOCALS;
L_0C04B274: BLKS(0x0C04B274u);
	r0 = 0xFFFFFFFFu;  /* 0C04B274 mov #imm,Rn */
	IF(0x0C04B276u); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C04B276 stc Rb_bank,Rn */
	{ W32(r4 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C04B3F4u, 5); TAIL(f_0C04B3F4); }  /* 0C04B278 bra */
}

void f_0C04B2AC(sh3_t *c)
{
	LOCALS;
L_0C04B2AC: BLKS(0x0C04B2ACu);
	r0 = 0x0u;  /* 0C04B2AC mov #imm,Rn */
	IF(0x0C04B2AEu); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C04B2AE stc Rb_bank,Rn */
	{ W32(r4 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C04B3F4u, 5); TAIL(f_0C04B3F4); }  /* 0C04B2B0 bra */
}

void f_0C04B2E4(sh3_t *c)
{
	LOCALS;
L_0C04B2E4: BLKS(0x0C04B2E4u);
	IF(0x0C04B2E4u); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C04B2E4 stc Rb_bank,Rn */
	r0 = R32(r4 + 0x8u); UPD(0x0C04B2E8u, 2);  /* 0C04B2E6 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C04B2E8 add #imm,Rn */
	{ W32(r4 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C04B3F4u, 4); TAIL(f_0C04B3F4); }  /* 0C04B2EA bra */
}

void f_0C04B328(sh3_t *c)
{
	LOCALS;
L_0C04B328: BLKS(0x0C04B328u);
	IF(0x0C04B328u); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C04B328 stc Rb_bank,Rn */
	r0 = R32(r4 + 0x8u); UPD(0x0C04B32Cu, 2);  /* 0C04B32A mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C04B32C tst Rm,Rn */
	{ u32 c_ = T; r0 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C04B336u, 4); goto L_0C04B336; } goto L_0C04B332; }  /* 0C04B32E bt/s */
L_0C04B332: BLKS(0x0C04B332u);
	{ W32(r4 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C04B3F4u, 4); TAIL(f_0C04B3F4); }  /* 0C04B332 bra */
L_0C04B336: BLKS(0x0C04B336u);
	IF(0x0C04B336u); { u32 t_ = PR; IF(0x0C04B338u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04B336 rts */
}

void f_0C04B35C(sh3_t *c)
{
	LOCALS;
L_0C04B35C: BLKS(0x0C04B35Cu);
	r0 = 0xC04AD20u; UPD(0x0C04B35Eu, 1);  /* 0C04B35C mov.l @(disp,pc),Rn */
	IF(0x0C04B35Eu); { u32 t_ = PR; IF(0x0C04B360u); ARG0(0x4087u); c->rbank[0] = R32N(r0); r0 += 4; /* slot ldc.l @Rn+,Rb_bank */ UPD(t_, 3); RET(t_); }  /* 0C04B35E rts */
}

void f_0C04B368(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C04B374);
L_0C04B368: BLKS(0x0C04B368u);
	r0 = 0xC04AD2Cu; UPD(0x0C04B36Au, 1);  /* 0C04B368 mov.l @(disp,pc),Rn */
	r0 = R32(r0); UPD(0x0C04B36Cu, 1);  /* 0C04B36A mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04B36C tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04B370u); ; /* slot nop */ if (c_) { UPD(0x0C04B39Cu, 4); goto L_0C04B39C; } goto L_0C04B372; }  /* 0C04B36E bf/s */
L_0C04B372: BLKS(0x0C04B372u);
	r2 = 0xC04A7A0u; UPD(0x0C04B374u, 2);  /* 0C04B372 mov.l @(disp,pc),Rn */
L_0C04B374: BLKS(0x0C04B374u);
	SPIN_SAVE(0C04B374);
	r1 = RS32(0C04B374, r2); UPD(0x0C04B376u, 1);  /* 0C04B374 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C04B376 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { SPIN_FFD(0C04B374, 5); UPD(0x0C04B374u, 4); goto L_0C04B374; } UPD(0x0C04B37Cu, 1); goto L_0C04B37C; }  /* 0C04B378 bt/s */
L_0C04B37C: BLKS(0x0C04B37Cu);
	r0 = R32(r1 + 0xCu); UPD(0x0C04B37Eu, 1);  /* 0C04B37C mov.l @(disp,Rm),Rn */
	IF(0x0C04B37Eu); T = (s32)r0 > 0;  /* 0C04B37E cmp/pl Rn */
	{ u32 c_ = !T; r0 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C04B386u, 4); goto L_0C04B386; } goto L_0C04B384; }  /* 0C04B380 bf/s */
L_0C04B384: BLKS(0x0C04B384u);
	W32(r1 + 0xCu, r0); UPD(0x0C04B386u, 2);  /* 0C04B384 mov.l Rm,@(disp,Rn) */
L_0C04B386: BLKS(0x0C04B386u);
	r1 = R32(r1 + 0x1Cu); UPD(0x0C04B388u, 1);  /* 0C04B386 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C04B388 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04B38Cu); ; /* slot nop */ if (c_) { UPD(0x0C04B37Cu, 4); goto L_0C04B37C; } goto L_0C04B38E; }  /* 0C04B38A bf/s */
L_0C04B38E: BLKS(0x0C04B38Eu);
	{ IF(0x0C04B390u); ; /* slot nop */ UPD(0x0C04B3F4u, 4); TAIL(f_0C04B3F4); }  /* 0C04B38E bra */
L_0C04B39C: BLKS(0x0C04B39Cu);
	IF(0x0C04B39Cu); { u32 t_ = PR; IF(0x0C04B39Eu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04B39C rts */
}

void f_0C04B3A0(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C04B3B6);
L_0C04B3A0: BLKS(0x0C04B3A0u);
	r0 = 0xC04AD2Cu; UPD(0x0C04B3A2u, 1);  /* 0C04B3A0 mov.l @(disp,pc),Rn */
	r0 = R32(r0); UPD(0x0C04B3A4u, 1);  /* 0C04B3A2 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04B3A4 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04B3A8u); ; /* slot nop */ if (c_) { UPD(0x0C04B3F0u, 4); goto L_0C04B3F0; } goto L_0C04B3AA; }  /* 0C04B3A6 bf/s */
L_0C04B3AA: BLKS(0x0C04B3AAu);
	r2 = 0xC04A7A0u; UPD(0x0C04B3ACu, 2);  /* 0C04B3AA mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C04B3AC mov #imm,Rn */
	r6 = 0xC04AD20u; UPD(0x0C04B3B0u, 2);  /* 0C04B3AE mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C04B3B0 mov #imm,Rn */
	r6 = R32(r6); UPD(0x0C04B3B4u, 2);  /* 0C04B3B2 mov.l @Rm,Rn */
	r6 = R32(r6 + 0x4u); UPD(0x0C04B3B6u, 1);  /* 0C04B3B4 mov.l @(disp,Rm),Rn */
L_0C04B3B6: BLKS(0x0C04B3B6u);
	SPIN_SAVE(0C04B3B6);
	r1 = RS32(0C04B3B6, r2); UPD(0x0C04B3B8u, 1);  /* 0C04B3B6 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C04B3B8 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { SPIN_FFD(0C04B3B6, 5); UPD(0x0C04B3B6u, 4); goto L_0C04B3B6; } UPD(0x0C04B3BEu, 1); goto L_0C04B3BE; }  /* 0C04B3BA bt/s */
L_0C04B3BE: BLKS(0x0C04B3BEu);
	r0 = R32(r1 + 0xCu); UPD(0x0C04B3C0u, 1);  /* 0C04B3BE mov.l @(disp,Rm),Rn */
	IF(0x0C04B3C0u); T = (s32)r0 >= 0;  /* 0C04B3C0 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C04B3C4u); ; /* slot nop */ if (c_) { UPD(0x0C04B3D0u, 4); goto L_0C04B3D0; } goto L_0C04B3C6; }  /* 0C04B3C2 bt/s */
L_0C04B3C6: BLKS(0x0C04B3C6u);
	r0 = R32(r1 + 0x4u); UPD(0x0C04B3C8u, 2);  /* 0C04B3C6 mov.l @(disp,Rm),Rn */
	W32(r1 + 0xCu, r3); UPD(0x0C04B3CAu, 1);  /* 0C04B3C8 mov.l Rm,@(disp,Rn) */
	T = r6 > r0;  /* 0C04B3CA cmp/hi Rm,Rn */
	IF(0x0C04B3CCu); r5 = T;  /* 0C04B3CC movt Rn */
	r4 += r5;  /* 0C04B3CE add Rm,Rn */
	UPD(0x0C04B3D0u, 3);
L_0C04B3D0: BLKS(0x0C04B3D0u);
	r1 = R32(r1 + 0x1Cu); UPD(0x0C04B3D2u, 1);  /* 0C04B3D0 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C04B3D2 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04B3D6u); ; /* slot nop */ if (c_) { UPD(0x0C04B3BEu, 4); goto L_0C04B3BE; } goto L_0C04B3D8; }  /* 0C04B3D4 bf/s */
L_0C04B3D8: BLKS(0x0C04B3D8u);
	r0 = 0xC04AD24u; UPD(0x0C04B3DAu, 2);  /* 0C04B3D8 mov.l @(disp,pc),Rn */
	IF(0x0C04B3DAu); { u32 t_ = PR; W32(r0, r4); /* slot mov.l Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C04B3DA rts */
L_0C04B3F0: BLKS(0x0C04B3F0u);
	IF(0x0C04B3F0u); { u32 t_ = PR; IF(0x0C04B3F2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04B3F0 rts */
}

/* FUN_0c04b3f4 */
void f_0C04B3F4(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C04B45E);
L_0C04B3F4: BLKS(0x0C04B3F4u);
	r7 = 0xC04AD20u; UPD(0x0C04B3F6u, 1);  /* 0C04B3F4 mov.l @(disp,pc),Rn */
	r6 = 0xC04AD28u; UPD(0x0C04B3F8u, 1);  /* 0C04B3F6 mov.l @(disp,pc),Rn */
	r7 = R32(r7); UPD(0x0C04B3FAu, 1);  /* 0C04B3F8 mov.l @Rm,Rn */
	r6 = R32(r6); UPD(0x0C04B3FCu, 1);  /* 0C04B3FA mov.l @Rm,Rn */
	r0 = R32(r7 + 0x4u); UPD(0x0C04B3FEu, 1);  /* 0C04B3FC mov.l @(disp,Rm),Rn */
	r4 = 0xC04A7A0u; UPD(0x0C04B400u, 1);  /* 0C04B3FE mov.l @(disp,pc),Rn */
	IF(0x0C04B400u); r0 <<= 2;  /* 0C04B400 shll2 Rn */
	IF(0x0C04B402u); r2 = R32(r0 + r4); UPD(0x0C04B404u, 2);  /* 0C04B402 mov.l @(r0,Rm),Rn */
	T = r2 == r6;  /* 0C04B404 cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 = R32(r6 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C04B41Cu, 4); goto L_0C04B41C; } UPD(0x0C04B40Au, 1); goto L_0C04B40A; }  /* 0C04B406 bt/s */
L_0C04B40A: BLKS(0x0C04B40Au);
	r1 = R32(r6 + 0xCu); UPD(0x0C04B40Cu, 1);  /* 0C04B40A mov.l @(disp,Rm),Rn */
	r0 |= r1;  /* 0C04B40C or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04B40E tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C04B412u); ; /* slot nop */ if (c_) { UPD(0x0C04B49Au, 5); goto L_0C04B49A; } goto L_0C04B414; }  /* 0C04B410 bt/s */
L_0C04B414: BLKS(0x0C04B414u);
	r6 = R32(r6 + 0x1Cu); UPD(0x0C04B416u, 2);  /* 0C04B414 mov.l @(disp,Rm),Rn */
	T = r2 == r6;  /* 0C04B416 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r6 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C04B40Au, 4); goto L_0C04B40A; } UPD(0x0C04B41Cu, 1); goto L_0C04B41C; }  /* 0C04B418 bf/s */
L_0C04B41C: BLKS(0x0C04B41Cu);
	r0 = R32(r7 + 0x4u); UPD(0x0C04B41Eu, 1);  /* 0C04B41C mov.l @(disp,Rm),Rn */
	T = (r0 & 0x1u) == 0;  /* 0C04B41E tst #imm,r0 */
	{ u32 c_ = !T; IF(0x0C04B422u); ; /* slot nop */ if (c_) { UPD(0x0C04B430u, 4); goto L_0C04B430; } goto L_0C04B424; }  /* 0C04B420 bf/s */
L_0C04B424: BLKS(0x0C04B424u);
	r1 = R32(r7 + 0x8u); UPD(0x0C04B426u, 2);  /* 0C04B424 mov.l @(disp,Rm),Rn */
	r2 = R32(r7 + 0xCu); UPD(0x0C04B428u, 1);  /* 0C04B426 mov.l @(disp,Rm),Rn */
	r1 |= r2;  /* 0C04B428 or Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C04B42A tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C04B42Eu); ; /* slot nop */ if (c_) { UPD(0x0C04B4FEu, 5); goto L_0C04B4FE; } UPD(0x0C04B430u, 1); goto L_0C04B430; }  /* 0C04B42C bt/s */
L_0C04B430: BLKS(0x0C04B430u);
	r6 = R32(r7 + 0x24u); UPD(0x0C04B432u, 1);  /* 0C04B430 mov.l @(disp,Rm),Rn */
	T = r7 == r6;  /* 0C04B432 cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 = R32(r6 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C04B44Au, 4); goto L_0C04B44A; } UPD(0x0C04B438u, 1); goto L_0C04B438; }  /* 0C04B434 bt/s */
L_0C04B438: BLKS(0x0C04B438u);
	r1 = R32(r6 + 0xCu); UPD(0x0C04B43Au, 1);  /* 0C04B438 mov.l @(disp,Rm),Rn */
	r0 |= r1;  /* 0C04B43A or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04B43C tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C04B440u); ; /* slot nop */ if (c_) { UPD(0x0C04B49Au, 5); goto L_0C04B49A; } goto L_0C04B442; }  /* 0C04B43E bt/s */
L_0C04B442: BLKS(0x0C04B442u);
	r6 = R32(r6 + 0x24u); UPD(0x0C04B444u, 2);  /* 0C04B442 mov.l @(disp,Rm),Rn */
	T = r7 == r6;  /* 0C04B444 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r6 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C04B438u, 4); goto L_0C04B438; } UPD(0x0C04B44Au, 1); goto L_0C04B44A; }  /* 0C04B446 bf/s */
L_0C04B44A: BLKS(0x0C04B44Au);
	r0 = R32(r7 + 0x8u); UPD(0x0C04B44Cu, 1);  /* 0C04B44A mov.l @(disp,Rm),Rn */
	r1 = R32(r7 + 0xCu); UPD(0x0C04B44Eu, 1);  /* 0C04B44C mov.l @(disp,Rm),Rn */
	r0 |= r1;  /* 0C04B44E or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04B450 tst Rm,Rn */
	{ u32 c_ = T; r6 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04B4FEu, 5); goto L_0C04B4FE; } goto L_0C04B456; }  /* 0C04B452 bt/s */
L_0C04B456: BLKS(0x0C04B456u);
	r4 = 0xC04A7E0u; UPD(0x0C04B458u, 2);  /* 0C04B456 mov.l @(disp,pc),Rn */
L_0C04B458: BLKS(0x0C04B458u);
	r0 = R32(r6 + 0x4u); UPD(0x0C04B45Au, 1);  /* 0C04B458 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C04B45A add #imm,Rn */
	IF(0x0C04B45Cu); r0 <<= 2;  /* 0C04B45C shll2 Rn */
	UPD(0x0C04B45Eu, 2);
L_0C04B45E: BLKS(0x0C04B45Eu);
	SPIN_SAVE(0C04B45E);
	IF(0x0C04B45Eu); r5 = RS32(0C04B45E, r0 + r4); UPD(0x0C04B460u, 1);  /* 0C04B45E mov.l @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C04B460 tst Rm,Rn */
	{ u32 c_ = T; r0 += 0x4u; /* slot add #imm,Rn */ if (c_) { SPIN_FFD(0C04B45E, 5); UPD(0x0C04B45Eu, 4); goto L_0C04B45E; } goto L_0C04B466; }  /* 0C04B462 bt/s */
L_0C04B466: BLKS(0x0C04B466u);
	T = (r0 & 0x4u) == 0;  /* 0C04B466 tst #imm,r0 */
	{ u32 c_ = T; r0 = R32(r5 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C04B476u, 5); goto L_0C04B476; } UPD(0x0C04B46Cu, 1); goto L_0C04B46C; }  /* 0C04B468 bt/s */
L_0C04B46C: BLKS(0x0C04B46Cu);
	r1 = R32(r5 + 0xCu); UPD(0x0C04B46Eu, 1);  /* 0C04B46C mov.l @(disp,Rm),Rn */
	r0 |= r1;  /* 0C04B46E or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04B470 tst Rm,Rn */
	{ u32 c_ = T; r6 = r5; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04B49Au, 5); goto L_0C04B49A; } UPD(0x0C04B476u, 1); goto L_0C04B476; }  /* 0C04B472 bt/s */
L_0C04B476: BLKS(0x0C04B476u);
	r6 = R32(r5 + 0x24u); UPD(0x0C04B478u, 1);  /* 0C04B476 mov.l @(disp,Rm),Rn */
	T = r5 == r6;  /* 0C04B478 cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 = R32(r6 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C04B490u, 4); goto L_0C04B490; } UPD(0x0C04B47Eu, 1); goto L_0C04B47E; }  /* 0C04B47A bt/s */
L_0C04B47E: BLKS(0x0C04B47Eu);
	r1 = R32(r6 + 0xCu); UPD(0x0C04B480u, 1);  /* 0C04B47E mov.l @(disp,Rm),Rn */
	r0 |= r1;  /* 0C04B480 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04B482 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C04B486u); ; /* slot nop */ if (c_) { UPD(0x0C04B49Au, 5); goto L_0C04B49A; } goto L_0C04B488; }  /* 0C04B484 bt/s */
L_0C04B488: BLKS(0x0C04B488u);
	r6 = R32(r6 + 0x24u); UPD(0x0C04B48Au, 2);  /* 0C04B488 mov.l @(disp,Rm),Rn */
	T = r5 == r6;  /* 0C04B48A cmp/eq Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r6 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C04B47Eu, 4); goto L_0C04B47E; } UPD(0x0C04B490u, 1); goto L_0C04B490; }  /* 0C04B48C bf/s */
L_0C04B490: BLKS(0x0C04B490u);
	r1 = R32(r6 + 0xCu); UPD(0x0C04B492u, 1);  /* 0C04B490 mov.l @(disp,Rm),Rn */
	r0 |= r1;  /* 0C04B492 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04B494 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04B498u); ; /* slot nop */ if (c_) { UPD(0x0C04B458u, 5); goto L_0C04B458; } UPD(0x0C04B49Au, 1); goto L_0C04B49A; }  /* 0C04B496 bf/s */
L_0C04B49A: BLKS(0x0C04B49Au);
	r0 = R32(r6 + 0x4u); UPD(0x0C04B49Cu, 1);  /* 0C04B49A mov.l @(disp,Rm),Rn */
	r1 = 0xC04A7E0u; UPD(0x0C04B49Eu, 1);  /* 0C04B49C mov.l @(disp,pc),Rn */
	r2 = 0xC04AD20u; UPD(0x0C04B4A0u, 1);  /* 0C04B49E mov.l @(disp,pc),Rn */
	IF(0x0C04B4A0u); r0 <<= 2;  /* 0C04B4A0 shll2 Rn */
	W32(r2, r6); UPD(0x0C04B4A4u, 2);  /* 0C04B4A2 mov.l Rm,@Rn */
	IF(0x0C04B4A4u); W32(r0 + r1, r6); UPD(0x0C04B4A6u, 1);  /* 0C04B4A4 mov.l Rm,@(r0,Rn) */
	IF(0x0C04B4A6u); r15 -= 4; W32(r15, c->gbr); UPD(0x0C04B4A8u, 1);  /* 0C04B4A6 stc.l gbr,@-Rn */
	IF(0x0C04B4A8u); ARG0(0x4F33u); r15 -= 4; W32N(r15, c->ssr);  /* 0C04B4A8 stc.l ssr,@-Rn */
	IF(0x0C04B4AAu); ARG0(0x4F43u); r15 -= 4; W32N(r15, c->spc);  /* 0C04B4AA stc.l spc,@-Rn */
	IF(0x0C04B4ACu); ARG0(0x4F83u); r15 -= 4; W32N(r15, c->rbank[0]); UPDN(0x0C04B4AEu, 1);  /* 0C04B4AC stc.l Rb_bank,@-Rn */
	IF(0x0C04B4AEu); ARG0(0x4F93u); r15 -= 4; W32N(r15, c->rbank[1]); UPDN(0x0C04B4B0u, 1);  /* 0C04B4AE stc.l Rb_bank,@-Rn */
	IF(0x0C04B4B0u); ARG0(0x4FA3u); r15 -= 4; W32N(r15, c->rbank[2]); UPDN(0x0C04B4B2u, 1);  /* 0C04B4B0 stc.l Rb_bank,@-Rn */
	IF(0x0C04B4B2u); ARG0(0x4FB3u); r15 -= 4; W32N(r15, c->rbank[3]); UPDN(0x0C04B4B4u, 1);  /* 0C04B4B2 stc.l Rb_bank,@-Rn */
	IF(0x0C04B4B4u); ARG0(0x4FC3u); r15 -= 4; W32N(r15, c->rbank[4]); UPDN(0x0C04B4B6u, 1);  /* 0C04B4B4 stc.l Rb_bank,@-Rn */
	IF(0x0C04B4B6u); ARG0(0x4FD3u); r15 -= 4; W32N(r15, c->rbank[5]); UPDN(0x0C04B4B8u, 1);  /* 0C04B4B6 stc.l Rb_bank,@-Rn */
	IF(0x0C04B4B8u); ARG0(0x4FE3u); r15 -= 4; W32N(r15, c->rbank[6]); UPDN(0x0C04B4BAu, 1);  /* 0C04B4B8 stc.l Rb_bank,@-Rn */
	IF(0x0C04B4BAu); ARG0(0x4FF3u); r15 -= 4; W32N(r15, c->rbank[7]); UPDN(0x0C04B4BCu, 1);  /* 0C04B4BA stc.l Rb_bank,@-Rn */
	IF(0x0C04B4BCu); r15 -= 4; W32(r15, MACH); UPD(0x0C04B4BEu, 11);  /* 0C04B4BC sts.l mach,@-Rn */
	IF(0x0C04B4BEu); r15 -= 4; W32(r15, MACL); UPD(0x0C04B4C0u, 1);  /* 0C04B4BE sts.l macl,@-Rn */
	IF(0x0C04B4C0u); r15 -= 4; W32(r15, PR); UPD(0x0C04B4C2u, 1);  /* 0C04B4C0 sts.l pr,@-Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C04B4C4u, 1);  /* 0C04B4C2 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04B4C6u, 1);  /* 0C04B4C4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C04B4C8u, 1);  /* 0C04B4C6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C04B4CAu, 1);  /* 0C04B4C8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C04B4CCu, 1);  /* 0C04B4CA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C04B4CEu, 1);  /* 0C04B4CC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C04B4D0u, 1);  /* 0C04B4CE mov.l Rm,@-Rn */
	W32(r7 + 0x14u, r15); UPD(0x0C04B4D2u, 1);  /* 0C04B4D0 mov.l Rm,@(disp,Rn) */
	r15 = R32(r6 + 0x14u); UPD(0x0C04B4D4u, 1);  /* 0C04B4D2 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C04B4D6u, 1);  /* 0C04B4D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C04B4D8u, 1);  /* 0C04B4D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C04B4DAu, 1);  /* 0C04B4D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C04B4DCu, 1);  /* 0C04B4DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C04B4DEu, 1);  /* 0C04B4DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04B4E0u, 1);  /* 0C04B4DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C04B4E2u, 1);  /* 0C04B4E0 mov.l @Rm+,Rn */
	IF(0x0C04B4E2u); PR = R32(r15); r15 += 4; UPD(0x0C04B4E4u, 1);  /* 0C04B4E2 lds.l @Rn+,pr */
	IF(0x0C04B4E4u); MACL = R32(r15); r15 += 4; UPD(0x0C04B4E6u, 1);  /* 0C04B4E4 lds.l @Rn+,macl */
	IF(0x0C04B4E6u); MACH = R32(r15); r15 += 4; UPD(0x0C04B4E8u, 1);  /* 0C04B4E6 lds.l @Rn+,mach */
	IF(0x0C04B4E8u); ARG0(0x4FF7u); c->rbank[7] = R32N(r15); r15 += 4;  /* 0C04B4E8 ldc.l @Rn+,Rb_bank */
	IF(0x0C04B4EAu); ARG0(0x4FE7u); c->rbank[6] = R32N(r15); r15 += 4;  /* 0C04B4EA ldc.l @Rn+,Rb_bank */
	IF(0x0C04B4ECu); ARG0(0x4FD7u); c->rbank[5] = R32N(r15); r15 += 4;  /* 0C04B4EC ldc.l @Rn+,Rb_bank */
	IF(0x0C04B4EEu); ARG0(0x4FC7u); c->rbank[4] = R32N(r15); r15 += 4;  /* 0C04B4EE ldc.l @Rn+,Rb_bank */
	IF(0x0C04B4F0u); ARG0(0x4FB7u); c->rbank[3] = R32N(r15); r15 += 4;  /* 0C04B4F0 ldc.l @Rn+,Rb_bank */
	IF(0x0C04B4F2u); ARG0(0x4FA7u); c->rbank[2] = R32N(r15); r15 += 4;  /* 0C04B4F2 ldc.l @Rn+,Rb_bank */
	IF(0x0C04B4F4u); ARG0(0x4F97u); c->rbank[1] = R32N(r15); r15 += 4;  /* 0C04B4F4 ldc.l @Rn+,Rb_bank */
	IF(0x0C04B4F6u); ARG0(0x4F87u); c->rbank[0] = R32N(r15); r15 += 4;  /* 0C04B4F6 ldc.l @Rn+,Rb_bank */
	IF(0x0C04B4F8u); ARG0(0x4F47u); c->spc = R32N(r15); r15 += 4;  /* 0C04B4F8 ldc.l @Rn+,spc */
	IF(0x0C04B4FAu); ARG0(0x4F37u); c->ssr = R32N(r15); r15 += 4;  /* 0C04B4FA ldc.l @Rn+,ssr */
	IF(0x0C04B4FCu); c->gbr = R32(r15); r15 += 4; UPD(0x0C04B4FEu, 11);  /* 0C04B4FC ldc.l @Rn+,gbr */
L_0C04B4FE: BLKS(0x0C04B4FEu);
	IF(0x0C04B4FEu); { u32 t_ = PR; IF(0x0C04B500u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04B4FE rts */
}

/* FUN_0c04b514 */
void f_0C04B514(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C04B518);
L_0C04B514: BLKS(0x0C04B514u);
	r7 = 0xC04A7A0u; UPD(0x0C04B516u, 1);  /* 0C04B514 mov.l @(disp,pc),Rn */
	r1 = 0xC04AD28u; UPD(0x0C04B518u, 1);  /* 0C04B516 mov.l @(disp,pc),Rn */
L_0C04B518: BLKS(0x0C04B518u);
	SPIN_SAVE(0C04B518);
	{ u32 v_ = RS32(0C04B518, r7); r7 += 4; r0 = v_; } UPD(0x0C04B51Au, 1);  /* 0C04B518 mov.l @Rm+,Rn */
	T = (r0 & r0) == 0;  /* 0C04B51A tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C04B51Eu); ; /* slot nop */ if (c_) { SPIN_FFD(0C04B518, 5); UPD(0x0C04B518u, 4); goto L_0C04B518; } goto L_0C04B520; }  /* 0C04B51C bt/s */
L_0C04B520: BLKS(0x0C04B520u);
	W32(r1, r0); UPD(0x0C04B522u, 2);  /* 0C04B520 mov.l Rm,@Rn */
	r7 = 0xC04A7A0u; UPD(0x0C04B524u, 1);  /* 0C04B522 mov.l @(disp,pc),Rn */
	r6 = 0x10u;  /* 0C04B524 mov #imm,Rn */
	{ u32 v_ = R32(r7); r7 += 4; r5 = v_; } UPD(0x0C04B528u, 2);  /* 0C04B526 mov.l @Rm+,Rn */
L_0C04B528: BLKS(0x0C04B528u);
	T = (r5 & r5) == 0;  /* 0C04B528 tst Rm,Rn */
	{ u32 c_ = T; r4 = r5; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04B552u, 4); goto L_0C04B552; } goto L_0C04B52E; }  /* 0C04B52A bt/s */
L_0C04B52E: BLKS(0x0C04B52Eu);
	r0 = R32(r4 + 0x4u); UPD(0x0C04B530u, 2);  /* 0C04B52E mov.l @(disp,Rm),Rn */
L_0C04B530: BLKS(0x0C04B530u);
	r3 = R32(r4 + 0x1Cu); UPD(0x0C04B532u, 1);  /* 0C04B530 mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C04B532 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C04B536u); ; /* slot nop */ if (c_) { UPD(0x0C04B550u, 4); goto L_0C04B550; } goto L_0C04B538; }  /* 0C04B534 bt/s */
L_0C04B538: BLKS(0x0C04B538u);
	r1 = R32(r3 + 0x4u); UPD(0x0C04B53Au, 2);  /* 0C04B538 mov.l @(disp,Rm),Rn */
	T = r0 == r1;  /* 0C04B53A cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04B53Eu); ; /* slot nop */ if (c_) { UPD(0x0C04B550u, 4); goto L_0C04B550; } goto L_0C04B540; }  /* 0C04B53C bf/s */
L_0C04B540: BLKS(0x0C04B540u);
	W32(r4 + 0x24u, r3); UPD(0x0C04B542u, 2);  /* 0C04B540 mov.l Rm,@(disp,Rn) */
	{ r4 = r3; /* slot mov Rm,Rn */ UPD(0x0C04B530u, 3); goto L_0C04B530; }  /* 0C04B542 bra */
L_0C04B550: BLKS(0x0C04B550u);
	W32(r4 + 0x24u, r5); UPD(0x0C04B552u, 1);  /* 0C04B550 mov.l Rm,@(disp,Rn) */
L_0C04B552: BLKS(0x0C04B552u);
	IF(0x0C04B552u); r6 -= 1; T = r6 == 0;  /* 0C04B552 dt Rn */
	{ u32 c_ = !T; { u32 v_ = R32(r7); r7 += 4; r5 = v_; } /* slot mov.l @Rm+,Rn */ if (c_) { UPD(0x0C04B528u, 4); goto L_0C04B528; } UPD(0x0C04B558u, 1); goto L_0C04B558; }  /* 0C04B554 bf/s */
L_0C04B558: BLKS(0x0C04B558u);
	IF(0x0C04B558u); { u32 t_ = PR; IF(0x0C04B55Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04B558 rts */
}

/* FUN_0c04b5e4 */
void f_0C04B5E4(sh3_t *c)
{
	LOCALS;
L_0C04B5E4: BLKS(0x0C04B5E4u);
	r3 = 0xC04B55Cu; UPD(0x0C04B5E6u, 1);  /* 0C04B5E4 mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C04B5E8u, 1);  /* 0C04B5E6 mov.l @(disp,pc),Rn */
	IF(0x0C04B5E8u); c->gbr = r3;  /* 0C04B5E8 ldc Rn,gbr */
	W32(c->gbr + 0x0u, r0); UPD(0x0C04B5ECu, 2);  /* 0C04B5EA mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x4u, r0); UPD(0x0C04B5EEu, 1);  /* 0C04B5EC mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x8u, r0); UPD(0x0C04B5F0u, 1);  /* 0C04B5EE mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0xCu, r0); UPD(0x0C04B5F2u, 1);  /* 0C04B5F0 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x14u, r0); UPD(0x0C04B5F4u, 1);  /* 0C04B5F2 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x20u, r0); UPD(0x0C04B5F6u, 1);  /* 0C04B5F4 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x24u, r0); UPD(0x0C04B5F8u, 1);  /* 0C04B5F6 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x28u, r0); UPD(0x0C04B5FAu, 1);  /* 0C04B5F8 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x2Cu, r0); UPD(0x0C04B5FCu, 1);  /* 0C04B5FA mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x30u, r0); UPD(0x0C04B5FEu, 1);  /* 0C04B5FC mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x34u, r0); UPD(0x0C04B600u, 1);  /* 0C04B5FE mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x38u, r0); UPD(0x0C04B602u, 1);  /* 0C04B600 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x3Cu, r0); UPD(0x0C04B604u, 1);  /* 0C04B602 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x40u, r0); UPD(0x0C04B606u, 1);  /* 0C04B604 mov.l r0,@(disp,gbr) */
	r0 = 0x10u; UPD(0x0C04B608u, 1);  /* 0C04B606 mov.l @(disp,pc),Rn */
	W32(c->gbr + 0x18u, r0); UPD(0x0C04B60Au, 1);  /* 0C04B608 mov.l r0,@(disp,gbr) */
	r0 = 0x4u; UPD(0x0C04B60Cu, 1);  /* 0C04B60A mov.l @(disp,pc),Rn */
	W32(c->gbr + 0x1Cu, r0); UPD(0x0C04B60Eu, 1);  /* 0C04B60C mov.l r0,@(disp,gbr) */
	r3 = 0xC04B5A0u; UPD(0x0C04B610u, 1);  /* 0C04B60E mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C04B612u, 1);  /* 0C04B610 mov.l @(disp,pc),Rn */
	IF(0x0C04B612u); c->gbr = r3;  /* 0C04B612 ldc Rn,gbr */
	W32(c->gbr + 0x0u, r0); UPD(0x0C04B616u, 2);  /* 0C04B614 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x4u, r0); UPD(0x0C04B618u, 1);  /* 0C04B616 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x8u, r0); UPD(0x0C04B61Au, 1);  /* 0C04B618 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0xCu, r0); UPD(0x0C04B61Cu, 1);  /* 0C04B61A mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x14u, r0); UPD(0x0C04B61Eu, 1);  /* 0C04B61C mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x20u, r0); UPD(0x0C04B620u, 1);  /* 0C04B61E mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x24u, r0); UPD(0x0C04B622u, 1);  /* 0C04B620 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x28u, r0); UPD(0x0C04B624u, 1);  /* 0C04B622 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x2Cu, r0); UPD(0x0C04B626u, 1);  /* 0C04B624 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x30u, r0); UPD(0x0C04B628u, 1);  /* 0C04B626 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x34u, r0); UPD(0x0C04B62Au, 1);  /* 0C04B628 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x38u, r0); UPD(0x0C04B62Cu, 1);  /* 0C04B62A mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x3Cu, r0); UPD(0x0C04B62Eu, 1);  /* 0C04B62C mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x40u, r0); UPD(0x0C04B630u, 1);  /* 0C04B62E mov.l r0,@(disp,gbr) */
	r0 = 0x10u; UPD(0x0C04B632u, 1);  /* 0C04B630 mov.l @(disp,pc),Rn */
	W32(c->gbr + 0x18u, r0); UPD(0x0C04B634u, 1);  /* 0C04B632 mov.l r0,@(disp,gbr) */
	r0 = 0x4u; UPD(0x0C04B636u, 1);  /* 0C04B634 mov.l @(disp,pc),Rn */
	W32(c->gbr + 0x1Cu, r0); UPD(0x0C04B638u, 1);  /* 0C04B636 mov.l r0,@(disp,gbr) */
	IF(0x0C04B638u); { u32 t_ = PR; IF(0x0C04B63Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04B638 rts */
}

void f_0C04BBC4(sh3_t *c)
{
	LOCALS;
L_0C04BBC4: BLKS(0x0C04BBC4u);
	r2 = 0xB8000028u; UPD(0x0C04BBC6u, 1);  /* 0C04BBC4 mov.l @(disp,pc),Rn */
	r1 = R32(r2); UPD(0x0C04BBC8u, 1);  /* 0C04BBC6 mov.l @Rm,Rn */
	r0 = 0x2u; UPD(0x0C04BBCAu, 1);  /* 0C04BBC8 mov.l @(disp,pc),Rn */
	r1 |= r0;  /* 0C04BBCA or Rm,Rn */
	IF(0x0C04BBCCu); { u32 t_ = PR; W32(r2, r1); /* slot mov.l Rm,@Rn */ UPD(t_, 4); RET(t_); }  /* 0C04BBCC rts */
}

void f_0C04BBEC(sh3_t *c)
{
	LOCALS;
L_0C04BBEC: BLKS(0x0C04BBECu);
	r2 = 0xB8000028u; UPD(0x0C04BBEEu, 1);  /* 0C04BBEC mov.l @(disp,pc),Rn */
	r1 = R32(r2); UPD(0x0C04BBF0u, 1);  /* 0C04BBEE mov.l @Rm,Rn */
	r0 = 0xFFFFFFFDu; UPD(0x0C04BBF2u, 1);  /* 0C04BBF0 mov.l @(disp,pc),Rn */
	r1 &= r0;  /* 0C04BBF2 and Rm,Rn */
	IF(0x0C04BBF4u); { u32 t_ = PR; W32(r2, r1); /* slot mov.l Rm,@Rn */ UPD(t_, 4); RET(t_); }  /* 0C04BBF4 rts */
}

/* rtc_eeprom_wait_bit */
void f_0C04BC34(sh3_t *c)
{
	LOCALS;
L_0C04BC34: BLKS(0x0C04BC34u);
	r6 = 0x1u; UPD(0x0C04BC36u, 1);  /* 0C04BC34 mov.l @(disp,pc),Rn */
L_0C04BC36: BLKS(0x0C04BC36u);
	r6 = 0x6u; UPD(0x0C04BC38u, 1);  /* 0C04BC36 mov.l @(disp,pc),Rn */
	W8(r7, r6); UPD(0x0C04BC3Au, 1);  /* 0C04BC38 mov.b Rm,@Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C04BC3Cu, 1);  /* 0C04BC3A mov.b @Rm,Rn */
	T = (r5 & r6) == 0;  /* 0C04BC3C tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04BC40u); ; /* slot nop */ if (c_) { UPD(0x0C04BC54u, 4); goto L_0C04BC54; } goto L_0C04BC42; }  /* 0C04BC3E bf/s */
L_0C04BC42: BLKS(0x0C04BC42u);
	r6 = 0x2u; UPD(0x0C04BC44u, 2);  /* 0C04BC42 mov.l @(disp,pc),Rn */
	{ W8(r7, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C04BC36u, 3); goto L_0C04BC36; }  /* 0C04BC44 bra */
L_0C04BC54: BLKS(0x0C04BC54u);
	IF(0x0C04BC54u); ;  /* 0C04BC54 nop */
	r6 = 0x2u; UPD(0x0C04BC58u, 2);  /* 0C04BC56 mov.l @(disp,pc),Rn */
	IF(0x0C04BC58u); { u32 t_ = PR; W8(r7, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C04BC58 rts */
}

/* rtc_eeprom_send_cmd */
void f_0C04BC60(sh3_t *c)
{
	LOCALS;
L_0C04BC60: BLKS(0x0C04BC60u);
	r7 = 0xB0C00001u; UPD(0x0C04BC62u, 1);  /* 0C04BC60 mov.l @(disp,pc),Rn */
	r5 = 0x6u; UPD(0x0C04BC64u, 1);  /* 0C04BC62 mov.l @(disp,pc),Rn */
	W8(r7, r5); UPD(0x0C04BC66u, 1);  /* 0C04BC64 mov.b Rm,@Rn */
	r2 = 0x64C00000u; UPD(0x0C04BC68u, 1);  /* 0C04BC66 mov.l @(disp,pc),Rn */
	r3 = 0x1u; UPD(0x0C04BC6Au, 1);  /* 0C04BC68 mov.l @(disp,pc),Rn */
	r6 = 0x10u; UPD(0x0C04BC6Cu, 1);  /* 0C04BC6A mov.l @(disp,pc),Rn */
L_0C04BC6C: BLKS(0x0C04BC6Cu);
	r5 = 0x4u; UPD(0x0C04BC6Eu, 1);  /* 0C04BC6C mov.l @(disp,pc),Rn */
	W8(r7, r5); UPD(0x0C04BC70u, 1);  /* 0C04BC6E mov.b Rm,@Rn */
	IF(0x0C04BC70u); T = r2 >> 31; r2 = (r2 << 1) | T;  /* 0C04BC70 rotl Rn */
	r4 = r2;  /* 0C04BC72 mov Rm,Rn */
	r4 &= r3;  /* 0C04BC74 and Rm,Rn */
	r5 |= r4;  /* 0C04BC76 or Rm,Rn */
	W8(r7, r5); UPD(0x0C04BC7Au, 5);  /* 0C04BC78 mov.b Rm,@Rn */
	r5 = 0x6u; UPD(0x0C04BC7Cu, 1);  /* 0C04BC7A mov.l @(disp,pc),Rn */
	r5 |= r4;  /* 0C04BC7C or Rm,Rn */
	W8(r7, r5); UPD(0x0C04BC80u, 2);  /* 0C04BC7E mov.b Rm,@Rn */
	IF(0x0C04BC80u); r6 -= 1; T = r6 == 0;  /* 0C04BC80 dt Rn */
	{ u32 c_ = !T; IF(0x0C04BC84u); ; /* slot nop */ if (c_) { UPD(0x0C04BC6Cu, 4); goto L_0C04BC6C; } goto L_0C04BC86; }  /* 0C04BC82 bf/s */
L_0C04BC86: BLKS(0x0C04BC86u);
	r5 = 0x2u; UPD(0x0C04BC88u, 2);  /* 0C04BC86 mov.l @(disp,pc),Rn */
	IF(0x0C04BC88u); { u32 t_ = PR; W8(r7, r5); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C04BC88 rts */
}

/* rtc_eeprom_init */
void f_0C04BCA8(sh3_t *c)
{
	LOCALS;
L_0C04BCA8: BLKS(0x0C04BCA8u);
	IF(0x0C04BCA8u); r15 -= 4; W32(r15, PR); UPD(0x0C04BCAAu, 1);  /* 0C04BCA8 sts.l pr,@-Rn */
	r0 = 0xDu; UPD(0x0C04BCACu, 1);  /* 0C04BCAA mov.l @(disp,pc),Rn */
	r1 = 0x2u; UPD(0x0C04BCAEu, 1);  /* 0C04BCAC mov.l @(disp,pc),Rn */
	r6 = 0xC04BCD0u; UPD(0x0C04BCB0u, 1);  /* 0C04BCAE mov.l @(disp,pc),Rn */
	IF(0x0C04BCB0u); { u32 t_ = r6; PR = 0x0C04BCB4u; IF(0x0C04BCB2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BCD0, 0x0C04BCD0u, 0x0C04BCB4u); }  /* 0C04BCB0 jsr @Rn */
L_0C04BCB4: BLKS(0x0C04BCB4u);
	r6 = 0xC04BC60u; UPD(0x0C04BCB6u, 1);  /* 0C04BCB4 mov.l @(disp,pc),Rn */
	IF(0x0C04BCB6u); { u32 t_ = r6; PR = 0x0C04BCBAu; IF(0x0C04BCB8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BC60, 0x0C04BC60u, 0x0C04BCBAu); }  /* 0C04BCB6 jsr @Rn */
L_0C04BCBA: BLKS(0x0C04BCBAu);
	IF(0x0C04BCBAu); PR = R32(r15); r15 += 4; UPD(0x0C04BCBCu, 1);  /* 0C04BCBA lds.l @Rn+,pr */
	IF(0x0C04BCBCu); { u32 t_ = PR; IF(0x0C04BCBEu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04BCBC rts */
}

/* rtc_eeprom_write_bits */
void f_0C04BCD0(sh3_t *c)
{
	LOCALS;
L_0C04BCD0: BLKS(0x0C04BCD0u);
	IF(0x0C04BCD0u); r15 -= 4; W32(r15, PR); UPD(0x0C04BCD2u, 1);  /* 0C04BCD0 sts.l pr,@-Rn */
	r7 = 0xB0C00001u; UPD(0x0C04BCD4u, 1);  /* 0C04BCD2 mov.l @(disp,pc),Rn */
	r6 = 0xC04BC34u; UPD(0x0C04BCD6u, 1);  /* 0C04BCD4 mov.l @(disp,pc),Rn */
	IF(0x0C04BCD6u); { u32 t_ = r6; PR = 0x0C04BCDAu; IF(0x0C04BCD8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BC34, 0x0C04BC34u, 0x0C04BCDAu); }  /* 0C04BCD6 jsr @Rn */
L_0C04BCDA: BLKS(0x0C04BCDAu);
	r5 = 0x0u; UPD(0x0C04BCDCu, 1);  /* 0C04BCDA mov.l @(disp,pc),Rn */
	r5 |= r0;  /* 0C04BCDC or Rm,Rn */
	r3 = 0x1u; UPD(0x0C04BCE0u, 2);  /* 0C04BCDE mov.l @(disp,pc),Rn */
	r5 = (r5 & 0xFFFF0000u) | ((r5 & 0xFF) << 8) | ((r5 >> 8) & 0xFF);  /* 0C04BCE0 swap.b Rm,Rn */
	r5 = (r5 >> 16) | (r5 << 16);  /* 0C04BCE2 swap.w Rm,Rn */
	r6 = 0x8u; UPD(0x0C04BCE6u, 3);  /* 0C04BCE4 mov.l @(disp,pc),Rn */
L_0C04BCE6: BLKS(0x0C04BCE6u);
	IF(0x0C04BCE6u); T = r5 >> 31; r5 = (r5 << 1) | T;  /* 0C04BCE6 rotl Rn */
	r2 = r5;  /* 0C04BCE8 mov Rm,Rn */
	r2 &= r3;  /* 0C04BCEA and Rm,Rn */
	r4 = 0x4u; UPD(0x0C04BCEEu, 4);  /* 0C04BCEC mov.l @(disp,pc),Rn */
	W8(r7, r4); UPD(0x0C04BCF0u, 1);  /* 0C04BCEE mov.b Rm,@Rn */
	r4 |= r2;  /* 0C04BCF0 or Rm,Rn */
	W8(r7, r4); UPD(0x0C04BCF4u, 2);  /* 0C04BCF2 mov.b Rm,@Rn */
	r4 = 0x6u; UPD(0x0C04BCF6u, 1);  /* 0C04BCF4 mov.l @(disp,pc),Rn */
	r4 |= r2;  /* 0C04BCF6 or Rm,Rn */
	IF(0x0C04BCF8u); r6 -= 1; T = r6 == 0;  /* 0C04BCF8 dt Rn */
	{ u32 c_ = !T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C04BCE6u, 5); goto L_0C04BCE6; } UPD(0x0C04BCFEu, 1); goto L_0C04BCFE; }  /* 0C04BCFA bf/s */
L_0C04BCFE: BLKS(0x0C04BCFEu);
	r5 = r1;  /* 0C04BCFE mov Rm,Rn */
	r3 = 0x1u; UPD(0x0C04BD02u, 2);  /* 0C04BD00 mov.l @(disp,pc),Rn */
	r5 = (r5 & 0xFFFF0000u) | ((r5 & 0xFF) << 8) | ((r5 >> 8) & 0xFF);  /* 0C04BD02 swap.b Rm,Rn */
	r5 = (r5 >> 16) | (r5 << 16);  /* 0C04BD04 swap.w Rm,Rn */
	r6 = 0x8u; UPD(0x0C04BD08u, 3);  /* 0C04BD06 mov.l @(disp,pc),Rn */
L_0C04BD08: BLKS(0x0C04BD08u);
	IF(0x0C04BD08u); T = r5 >> 31; r5 = (r5 << 1) | T;  /* 0C04BD08 rotl Rn */
	r2 = r5;  /* 0C04BD0A mov Rm,Rn */
	r2 &= r3;  /* 0C04BD0C and Rm,Rn */
	r4 = 0x4u; UPD(0x0C04BD10u, 4);  /* 0C04BD0E mov.l @(disp,pc),Rn */
	W8(r7, r4); UPD(0x0C04BD12u, 1);  /* 0C04BD10 mov.b Rm,@Rn */
	r4 |= r2;  /* 0C04BD12 or Rm,Rn */
	W8(r7, r4); UPD(0x0C04BD16u, 2);  /* 0C04BD14 mov.b Rm,@Rn */
	r4 = 0x6u; UPD(0x0C04BD18u, 1);  /* 0C04BD16 mov.l @(disp,pc),Rn */
	r4 |= r2;  /* 0C04BD18 or Rm,Rn */
	IF(0x0C04BD1Au); r6 -= 1; T = r6 == 0;  /* 0C04BD1A dt Rn */
	{ u32 c_ = !T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C04BD08u, 5); goto L_0C04BD08; } UPD(0x0C04BD20u, 1); goto L_0C04BD20; }  /* 0C04BD1C bf/s */
L_0C04BD20: BLKS(0x0C04BD20u);
	r6 = 0x2u; UPD(0x0C04BD22u, 1);  /* 0C04BD20 mov.l @(disp,pc),Rn */
	IF(0x0C04BD22u); PR = R32(r15); r15 += 4; UPD(0x0C04BD24u, 1);  /* 0C04BD22 lds.l @Rn+,pr */
	IF(0x0C04BD24u); { u32 t_ = PR; W8(r7, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C04BD24 rts */
}

/* rtc_eeprom_read_bits */
void f_0C04BD48(sh3_t *c)
{
	LOCALS;
L_0C04BD48: BLKS(0x0C04BD48u);
	IF(0x0C04BD48u); r15 -= 4; W32(r15, PR); UPD(0x0C04BD4Au, 1);  /* 0C04BD48 sts.l pr,@-Rn */
	r7 = 0xB0C00001u; UPD(0x0C04BD4Cu, 1);  /* 0C04BD4A mov.l @(disp,pc),Rn */
	r6 = 0xC04BC34u; UPD(0x0C04BD4Eu, 1);  /* 0C04BD4C mov.l @(disp,pc),Rn */
	IF(0x0C04BD4Eu); { u32 t_ = r6; PR = 0x0C04BD52u; IF(0x0C04BD50u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BC34, 0x0C04BC34u, 0x0C04BD52u); }  /* 0C04BD4E jsr @Rn */
L_0C04BD52: BLKS(0x0C04BD52u);
	r5 = 0x80u; UPD(0x0C04BD54u, 1);  /* 0C04BD52 mov.l @(disp,pc),Rn */
	r5 |= r0;  /* 0C04BD54 or Rm,Rn */
	r3 = 0x1u; UPD(0x0C04BD58u, 2);  /* 0C04BD56 mov.l @(disp,pc),Rn */
	r5 = (r5 & 0xFFFF0000u) | ((r5 & 0xFF) << 8) | ((r5 >> 8) & 0xFF);  /* 0C04BD58 swap.b Rm,Rn */
	r5 = (r5 >> 16) | (r5 << 16);  /* 0C04BD5A swap.w Rm,Rn */
	r6 = 0x8u; UPD(0x0C04BD5Eu, 3);  /* 0C04BD5C mov.l @(disp,pc),Rn */
L_0C04BD5E: BLKS(0x0C04BD5Eu);
	IF(0x0C04BD5Eu); T = r5 >> 31; r5 = (r5 << 1) | T;  /* 0C04BD5E rotl Rn */
	r2 = r5;  /* 0C04BD60 mov Rm,Rn */
	r2 &= r3;  /* 0C04BD62 and Rm,Rn */
	r4 = 0x4u; UPD(0x0C04BD66u, 4);  /* 0C04BD64 mov.l @(disp,pc),Rn */
	W8(r7, r4); UPD(0x0C04BD68u, 1);  /* 0C04BD66 mov.b Rm,@Rn */
	r4 |= r2;  /* 0C04BD68 or Rm,Rn */
	W8(r7, r4); UPD(0x0C04BD6Cu, 2);  /* 0C04BD6A mov.b Rm,@Rn */
	r4 = 0x6u; UPD(0x0C04BD6Eu, 1);  /* 0C04BD6C mov.l @(disp,pc),Rn */
	r4 |= r2;  /* 0C04BD6E or Rm,Rn */
	IF(0x0C04BD70u); r6 -= 1; T = r6 == 0;  /* 0C04BD70 dt Rn */
	{ u32 c_ = !T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C04BD5Eu, 5); goto L_0C04BD5E; } UPD(0x0C04BD76u, 1); goto L_0C04BD76; }  /* 0C04BD72 bf/s */
L_0C04BD76: BLKS(0x0C04BD76u);
	r3 = 0x1u; UPD(0x0C04BD78u, 1);  /* 0C04BD76 mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C04BD7Au, 1);  /* 0C04BD78 mov.l @(disp,pc),Rn */
	r6 = 0x8u; UPD(0x0C04BD7Cu, 1);  /* 0C04BD7A mov.l @(disp,pc),Rn */
L_0C04BD7C: BLKS(0x0C04BD7Cu);
	r5 = 0x4u; UPD(0x0C04BD7Eu, 1);  /* 0C04BD7C mov.l @(disp,pc),Rn */
	W8(r7, r5); UPD(0x0C04BD80u, 1);  /* 0C04BD7E mov.b Rm,@Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C04BD82u, 1);  /* 0C04BD80 mov.b @Rm,Rn */
	r1 &= r3;  /* 0C04BD82 and Rm,Rn */
	r0 |= r1;  /* 0C04BD84 or Rm,Rn */
	IF(0x0C04BD86u); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C04BD86 rotl Rn */
	r5 = 0x6u; UPD(0x0C04BD8Au, 4);  /* 0C04BD88 mov.l @(disp,pc),Rn */
	IF(0x0C04BD8Au); r6 -= 1; T = r6 == 0;  /* 0C04BD8A dt Rn */
	{ u32 c_ = !T; W8(r7, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C04BD7Cu, 4); goto L_0C04BD7C; } UPD(0x0C04BD90u, 1); goto L_0C04BD90; }  /* 0C04BD8C bf/s */
L_0C04BD90: BLKS(0x0C04BD90u);
	IF(0x0C04BD90u); T = r0 & 1; r0 = (r0 >> 1) | (T << 31);  /* 0C04BD90 rotr Rn */
	r6 = 0x2u; UPD(0x0C04BD94u, 2);  /* 0C04BD92 mov.l @(disp,pc),Rn */
	IF(0x0C04BD94u); PR = R32(r15); r15 += 4; UPD(0x0C04BD96u, 1);  /* 0C04BD94 lds.l @Rn+,pr */
	IF(0x0C04BD96u); { u32 t_ = PR; W8(r7, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C04BD96 rts */
}

/* rtc_eeprom_write_block */
void f_0C04BDC0(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C04BDDC);
	SPIN_VARS(0C04BDF4);
	SPIN_VARS(0C04BE06);
	SPIN_VARS(0C04BE26);
	SPIN_VARS(0C04BE3E);
	SPIN_VARS(0C04BE50);
L_0C04BDC0: BLKS(0x0C04BDC0u);
	IF(0x0C04BDC0u); r15 -= 4; W32(r15, PR); UPD(0x0C04BDC2u, 1);  /* 0C04BDC0 sts.l pr,@-Rn */
	r7 = 0xB0C00001u; UPD(0x0C04BDC4u, 1);  /* 0C04BDC2 mov.l @(disp,pc),Rn */
	r6 = 0xC04BC34u; UPD(0x0C04BDC6u, 1);  /* 0C04BDC4 mov.l @(disp,pc),Rn */
	IF(0x0C04BDC6u); { u32 t_ = r6; PR = 0x0C04BDCAu; IF(0x0C04BDC8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BC34, 0x0C04BC34u, 0x0C04BDCAu); }  /* 0C04BDC6 jsr @Rn */
L_0C04BDCA: BLKS(0x0C04BDCAu);
	r3 = 0x2000u; UPD(0x0C04BDCCu, 1);  /* 0C04BDCA mov.l @(disp,pc),Rn */
	r5 = r0;  /* 0C04BDCC mov Rm,Rn */
	IF(0x0C04BDCEu); T = r5 >> 31; r5 = (r5 << 1) | T;  /* 0C04BDCE rotl Rn */
	r5 |= r3;  /* 0C04BDD0 or Rm,Rn */
	r3 = 0x1u; UPD(0x0C04BDD4u, 4);  /* 0C04BDD2 mov.l @(disp,pc),Rn */
	r5 = (r5 >> 16) | (r5 << 16);  /* 0C04BDD4 swap.w Rm,Rn */
	r6 = 0x10u; UPD(0x0C04BDD8u, 2);  /* 0C04BDD6 mov.l @(disp,pc),Rn */
L_0C04BDD8: BLKS(0x0C04BDD8u);
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04BDDAu, 1);  /* 0C04BDD8 mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C04BDDCu, 1);  /* 0C04BDDA mov.l @(disp,pc),Rn */
L_0C04BDDC: BLKS(0x0C04BDDCu);
	SPIN_SAVE(0C04BDDC);
	IF(0x0C04BDDCu); ;  /* 0C04BDDC nop */
	IF(0x0C04BDDEu); r9 -= 1; T = r9 == 0;  /* 0C04BDDE dt Rn */
	{ u32 c_ = !T; IF(0x0C04BDE2u); ; /* slot nop */ if (c_) { SPIN_FFD(0C04BDDC, 5); UPD(0x0C04BDDCu, 5); goto L_0C04BDDC; } goto L_0C04BDE4; }  /* 0C04BDE0 bf/s */
L_0C04BDE4: BLKS(0x0C04BDE4u);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04BDE6u, 2);  /* 0C04BDE4 mov.l @Rm+,Rn */
	IF(0x0C04BDE6u); T = r5 >> 31; r5 = (r5 << 1) | T;  /* 0C04BDE6 rotl Rn */
	r2 = r5;  /* 0C04BDE8 mov Rm,Rn */
	r2 &= r3;  /* 0C04BDEA and Rm,Rn */
	r4 = 0x4u; UPD(0x0C04BDEEu, 4);  /* 0C04BDEC mov.l @(disp,pc),Rn */
	W8(r7, r4); UPD(0x0C04BDF0u, 1);  /* 0C04BDEE mov.b Rm,@Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04BDF2u, 1);  /* 0C04BDF0 mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C04BDF4u, 1);  /* 0C04BDF2 mov.l @(disp,pc),Rn */
L_0C04BDF4: BLKS(0x0C04BDF4u);
	SPIN_SAVE(0C04BDF4);
	IF(0x0C04BDF4u); ;  /* 0C04BDF4 nop */
	IF(0x0C04BDF6u); r9 -= 1; T = r9 == 0;  /* 0C04BDF6 dt Rn */
	{ u32 c_ = !T; IF(0x0C04BDFAu); ; /* slot nop */ if (c_) { SPIN_FFD(0C04BDF4, 5); UPD(0x0C04BDF4u, 5); goto L_0C04BDF4; } goto L_0C04BDFC; }  /* 0C04BDF8 bf/s */
L_0C04BDFC: BLKS(0x0C04BDFCu);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04BDFEu, 2);  /* 0C04BDFC mov.l @Rm+,Rn */
	r4 |= r2;  /* 0C04BDFE or Rm,Rn */
	W8(r7, r4); UPD(0x0C04BE02u, 2);  /* 0C04BE00 mov.b Rm,@Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04BE04u, 1);  /* 0C04BE02 mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C04BE06u, 1);  /* 0C04BE04 mov.l @(disp,pc),Rn */
L_0C04BE06: BLKS(0x0C04BE06u);
	SPIN_SAVE(0C04BE06);
	IF(0x0C04BE06u); ;  /* 0C04BE06 nop */
	IF(0x0C04BE08u); r9 -= 1; T = r9 == 0;  /* 0C04BE08 dt Rn */
	{ u32 c_ = !T; IF(0x0C04BE0Cu); ; /* slot nop */ if (c_) { SPIN_FFD(0C04BE06, 5); UPD(0x0C04BE06u, 5); goto L_0C04BE06; } goto L_0C04BE0E; }  /* 0C04BE0A bf/s */
L_0C04BE0E: BLKS(0x0C04BE0Eu);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04BE10u, 2);  /* 0C04BE0E mov.l @Rm+,Rn */
	r4 = 0x6u; UPD(0x0C04BE12u, 1);  /* 0C04BE10 mov.l @(disp,pc),Rn */
	r4 |= r2;  /* 0C04BE12 or Rm,Rn */
	IF(0x0C04BE14u); r6 -= 1; T = r6 == 0;  /* 0C04BE14 dt Rn */
	{ u32 c_ = !T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C04BDD8u, 5); goto L_0C04BDD8; } UPD(0x0C04BE1Au, 1); goto L_0C04BE1A; }  /* 0C04BE16 bf/s */
L_0C04BE1A: BLKS(0x0C04BE1Au);
	r5 = r1;  /* 0C04BE1A mov Rm,Rn */
	r3 = 0x1u; UPD(0x0C04BE1Eu, 2);  /* 0C04BE1C mov.l @(disp,pc),Rn */
	r5 = (r5 >> 16) | (r5 << 16);  /* 0C04BE1E swap.w Rm,Rn */
	r6 = 0x10u; UPD(0x0C04BE22u, 2);  /* 0C04BE20 mov.l @(disp,pc),Rn */
L_0C04BE22: BLKS(0x0C04BE22u);
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04BE24u, 1);  /* 0C04BE22 mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C04BE26u, 1);  /* 0C04BE24 mov.l @(disp,pc),Rn */
L_0C04BE26: BLKS(0x0C04BE26u);
	SPIN_SAVE(0C04BE26);
	IF(0x0C04BE26u); ;  /* 0C04BE26 nop */
	IF(0x0C04BE28u); r9 -= 1; T = r9 == 0;  /* 0C04BE28 dt Rn */
	{ u32 c_ = !T; IF(0x0C04BE2Cu); ; /* slot nop */ if (c_) { SPIN_FFD(0C04BE26, 5); UPD(0x0C04BE26u, 5); goto L_0C04BE26; } goto L_0C04BE2E; }  /* 0C04BE2A bf/s */
L_0C04BE2E: BLKS(0x0C04BE2Eu);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04BE30u, 2);  /* 0C04BE2E mov.l @Rm+,Rn */
	IF(0x0C04BE30u); T = r5 >> 31; r5 = (r5 << 1) | T;  /* 0C04BE30 rotl Rn */
	r2 = r5;  /* 0C04BE32 mov Rm,Rn */
	r2 &= r3;  /* 0C04BE34 and Rm,Rn */
	r4 = 0x4u; UPD(0x0C04BE38u, 4);  /* 0C04BE36 mov.l @(disp,pc),Rn */
	W8(r7, r4); UPD(0x0C04BE3Au, 1);  /* 0C04BE38 mov.b Rm,@Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04BE3Cu, 1);  /* 0C04BE3A mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C04BE3Eu, 1);  /* 0C04BE3C mov.l @(disp,pc),Rn */
L_0C04BE3E: BLKS(0x0C04BE3Eu);
	SPIN_SAVE(0C04BE3E);
	IF(0x0C04BE3Eu); ;  /* 0C04BE3E nop */
	IF(0x0C04BE40u); r9 -= 1; T = r9 == 0;  /* 0C04BE40 dt Rn */
	{ u32 c_ = !T; IF(0x0C04BE44u); ; /* slot nop */ if (c_) { SPIN_FFD(0C04BE3E, 5); UPD(0x0C04BE3Eu, 5); goto L_0C04BE3E; } goto L_0C04BE46; }  /* 0C04BE42 bf/s */
L_0C04BE46: BLKS(0x0C04BE46u);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04BE48u, 2);  /* 0C04BE46 mov.l @Rm+,Rn */
	r4 |= r2;  /* 0C04BE48 or Rm,Rn */
	W8(r7, r4); UPD(0x0C04BE4Cu, 2);  /* 0C04BE4A mov.b Rm,@Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04BE4Eu, 1);  /* 0C04BE4C mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C04BE50u, 1);  /* 0C04BE4E mov.l @(disp,pc),Rn */
L_0C04BE50: BLKS(0x0C04BE50u);
	SPIN_SAVE(0C04BE50);
	IF(0x0C04BE50u); ;  /* 0C04BE50 nop */
	IF(0x0C04BE52u); r9 -= 1; T = r9 == 0;  /* 0C04BE52 dt Rn */
	{ u32 c_ = !T; IF(0x0C04BE56u); ; /* slot nop */ if (c_) { SPIN_FFD(0C04BE50, 5); UPD(0x0C04BE50u, 5); goto L_0C04BE50; } goto L_0C04BE58; }  /* 0C04BE54 bf/s */
L_0C04BE58: BLKS(0x0C04BE58u);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04BE5Au, 2);  /* 0C04BE58 mov.l @Rm+,Rn */
	r4 = 0x6u; UPD(0x0C04BE5Cu, 1);  /* 0C04BE5A mov.l @(disp,pc),Rn */
	r4 |= r2;  /* 0C04BE5C or Rm,Rn */
	IF(0x0C04BE5Eu); r6 -= 1; T = r6 == 0;  /* 0C04BE5E dt Rn */
	{ u32 c_ = !T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C04BE22u, 5); goto L_0C04BE22; } UPD(0x0C04BE64u, 1); goto L_0C04BE64; }  /* 0C04BE60 bf/s */
L_0C04BE64: BLKS(0x0C04BE64u);
	r6 = 0x2u; UPD(0x0C04BE66u, 1);  /* 0C04BE64 mov.l @(disp,pc),Rn */
	IF(0x0C04BE66u); PR = R32(r15); r15 += 4; UPD(0x0C04BE68u, 1);  /* 0C04BE66 lds.l @Rn+,pr */
	IF(0x0C04BE68u); { u32 t_ = PR; W8(r7, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C04BE68 rts */
}

/* rtc_eeprom_read_block */
void f_0C04BE90(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C04BEAC);
	SPIN_VARS(0C04BEC4);
	SPIN_VARS(0C04BED6);
	SPIN_VARS(0C04BEF4);
	SPIN_VARS(0C04BF06);
	SPIN_VARS(0C04BF1C);
L_0C04BE90: BLKS(0x0C04BE90u);
	IF(0x0C04BE90u); r15 -= 4; W32(r15, PR); UPD(0x0C04BE92u, 1);  /* 0C04BE90 sts.l pr,@-Rn */
	r7 = 0xB0C00001u; UPD(0x0C04BE94u, 1);  /* 0C04BE92 mov.l @(disp,pc),Rn */
	r6 = 0xC04BC34u; UPD(0x0C04BE96u, 1);  /* 0C04BE94 mov.l @(disp,pc),Rn */
	IF(0x0C04BE96u); { u32 t_ = r6; PR = 0x0C04BE9Au; IF(0x0C04BE98u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BC34, 0x0C04BC34u, 0x0C04BE9Au); }  /* 0C04BE96 jsr @Rn */
L_0C04BE9A: BLKS(0x0C04BE9Au);
	r3 = 0xA000u; UPD(0x0C04BE9Cu, 1);  /* 0C04BE9A mov.l @(disp,pc),Rn */
	r5 = r0;  /* 0C04BE9C mov Rm,Rn */
	IF(0x0C04BE9Eu); T = r5 >> 31; r5 = (r5 << 1) | T;  /* 0C04BE9E rotl Rn */
	r5 |= r3;  /* 0C04BEA0 or Rm,Rn */
	r3 = 0x1u; UPD(0x0C04BEA4u, 4);  /* 0C04BEA2 mov.l @(disp,pc),Rn */
	r5 = (r5 >> 16) | (r5 << 16);  /* 0C04BEA4 swap.w Rm,Rn */
	r6 = 0x10u; UPD(0x0C04BEA8u, 2);  /* 0C04BEA6 mov.l @(disp,pc),Rn */
L_0C04BEA8: BLKS(0x0C04BEA8u);
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04BEAAu, 1);  /* 0C04BEA8 mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C04BEACu, 1);  /* 0C04BEAA mov.l @(disp,pc),Rn */
L_0C04BEAC: BLKS(0x0C04BEACu);
	SPIN_SAVE(0C04BEAC);
	IF(0x0C04BEACu); ;  /* 0C04BEAC nop */
	IF(0x0C04BEAEu); r9 -= 1; T = r9 == 0;  /* 0C04BEAE dt Rn */
	{ u32 c_ = !T; IF(0x0C04BEB2u); ; /* slot nop */ if (c_) { SPIN_FFD(0C04BEAC, 5); UPD(0x0C04BEACu, 5); goto L_0C04BEAC; } goto L_0C04BEB4; }  /* 0C04BEB0 bf/s */
L_0C04BEB4: BLKS(0x0C04BEB4u);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04BEB6u, 2);  /* 0C04BEB4 mov.l @Rm+,Rn */
	IF(0x0C04BEB6u); T = r5 >> 31; r5 = (r5 << 1) | T;  /* 0C04BEB6 rotl Rn */
	r2 = r5;  /* 0C04BEB8 mov Rm,Rn */
	r2 &= r3;  /* 0C04BEBA and Rm,Rn */
	r4 = 0x4u; UPD(0x0C04BEBEu, 4);  /* 0C04BEBC mov.l @(disp,pc),Rn */
	W8(r7, r4); UPD(0x0C04BEC0u, 1);  /* 0C04BEBE mov.b Rm,@Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04BEC2u, 1);  /* 0C04BEC0 mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C04BEC4u, 1);  /* 0C04BEC2 mov.l @(disp,pc),Rn */
L_0C04BEC4: BLKS(0x0C04BEC4u);
	SPIN_SAVE(0C04BEC4);
	IF(0x0C04BEC4u); ;  /* 0C04BEC4 nop */
	IF(0x0C04BEC6u); r9 -= 1; T = r9 == 0;  /* 0C04BEC6 dt Rn */
	{ u32 c_ = !T; IF(0x0C04BECAu); ; /* slot nop */ if (c_) { SPIN_FFD(0C04BEC4, 5); UPD(0x0C04BEC4u, 5); goto L_0C04BEC4; } goto L_0C04BECC; }  /* 0C04BEC8 bf/s */
L_0C04BECC: BLKS(0x0C04BECCu);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04BECEu, 2);  /* 0C04BECC mov.l @Rm+,Rn */
	r4 |= r2;  /* 0C04BECE or Rm,Rn */
	W8(r7, r4); UPD(0x0C04BED2u, 2);  /* 0C04BED0 mov.b Rm,@Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04BED4u, 1);  /* 0C04BED2 mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C04BED6u, 1);  /* 0C04BED4 mov.l @(disp,pc),Rn */
L_0C04BED6: BLKS(0x0C04BED6u);
	SPIN_SAVE(0C04BED6);
	IF(0x0C04BED6u); ;  /* 0C04BED6 nop */
	IF(0x0C04BED8u); r9 -= 1; T = r9 == 0;  /* 0C04BED8 dt Rn */
	{ u32 c_ = !T; IF(0x0C04BEDCu); ; /* slot nop */ if (c_) { SPIN_FFD(0C04BED6, 5); UPD(0x0C04BED6u, 5); goto L_0C04BED6; } goto L_0C04BEDE; }  /* 0C04BEDA bf/s */
L_0C04BEDE: BLKS(0x0C04BEDEu);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04BEE0u, 2);  /* 0C04BEDE mov.l @Rm+,Rn */
	r4 = 0x6u; UPD(0x0C04BEE2u, 1);  /* 0C04BEE0 mov.l @(disp,pc),Rn */
	r4 |= r2;  /* 0C04BEE2 or Rm,Rn */
	IF(0x0C04BEE4u); r6 -= 1; T = r6 == 0;  /* 0C04BEE4 dt Rn */
	{ u32 c_ = !T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C04BEA8u, 5); goto L_0C04BEA8; } UPD(0x0C04BEEAu, 1); goto L_0C04BEEA; }  /* 0C04BEE6 bf/s */
L_0C04BEEA: BLKS(0x0C04BEEAu);
	r3 = 0x1u; UPD(0x0C04BEECu, 1);  /* 0C04BEEA mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C04BEEEu, 1);  /* 0C04BEEC mov.l @(disp,pc),Rn */
	r6 = 0x10u; UPD(0x0C04BEF0u, 1);  /* 0C04BEEE mov.l @(disp,pc),Rn */
L_0C04BEF0: BLKS(0x0C04BEF0u);
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04BEF2u, 1);  /* 0C04BEF0 mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C04BEF4u, 1);  /* 0C04BEF2 mov.l @(disp,pc),Rn */
L_0C04BEF4: BLKS(0x0C04BEF4u);
	SPIN_SAVE(0C04BEF4);
	IF(0x0C04BEF4u); ;  /* 0C04BEF4 nop */
	IF(0x0C04BEF6u); r9 -= 1; T = r9 == 0;  /* 0C04BEF6 dt Rn */
	{ u32 c_ = !T; IF(0x0C04BEFAu); ; /* slot nop */ if (c_) { SPIN_FFD(0C04BEF4, 5); UPD(0x0C04BEF4u, 5); goto L_0C04BEF4; } goto L_0C04BEFC; }  /* 0C04BEF8 bf/s */
L_0C04BEFC: BLKS(0x0C04BEFCu);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04BEFEu, 2);  /* 0C04BEFC mov.l @Rm+,Rn */
	r5 = 0x4u; UPD(0x0C04BF00u, 1);  /* 0C04BEFE mov.l @(disp,pc),Rn */
	W8(r7, r5); UPD(0x0C04BF02u, 1);  /* 0C04BF00 mov.b Rm,@Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04BF04u, 1);  /* 0C04BF02 mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C04BF06u, 1);  /* 0C04BF04 mov.l @(disp,pc),Rn */
L_0C04BF06: BLKS(0x0C04BF06u);
	SPIN_SAVE(0C04BF06);
	IF(0x0C04BF06u); ;  /* 0C04BF06 nop */
	IF(0x0C04BF08u); r9 -= 1; T = r9 == 0;  /* 0C04BF08 dt Rn */
	{ u32 c_ = !T; IF(0x0C04BF0Cu); ; /* slot nop */ if (c_) { SPIN_FFD(0C04BF06, 5); UPD(0x0C04BF06u, 5); goto L_0C04BF06; } goto L_0C04BF0E; }  /* 0C04BF0A bf/s */
L_0C04BF0E: BLKS(0x0C04BF0Eu);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04BF10u, 2);  /* 0C04BF0E mov.l @Rm+,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C04BF12u, 1);  /* 0C04BF10 mov.b @Rm,Rn */
	r1 &= r3;  /* 0C04BF12 and Rm,Rn */
	r0 |= r1;  /* 0C04BF14 or Rm,Rn */
	IF(0x0C04BF16u); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C04BF16 rotl Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04BF1Au, 4);  /* 0C04BF18 mov.l Rm,@-Rn */
	r9 = 0x19C8u; UPD(0x0C04BF1Cu, 1);  /* 0C04BF1A mov.l @(disp,pc),Rn */
L_0C04BF1C: BLKS(0x0C04BF1Cu);
	SPIN_SAVE(0C04BF1C);
	IF(0x0C04BF1Cu); ;  /* 0C04BF1C nop */
	IF(0x0C04BF1Eu); r9 -= 1; T = r9 == 0;  /* 0C04BF1E dt Rn */
	{ u32 c_ = !T; IF(0x0C04BF22u); ; /* slot nop */ if (c_) { SPIN_FFD(0C04BF1C, 5); UPD(0x0C04BF1Cu, 5); goto L_0C04BF1C; } goto L_0C04BF24; }  /* 0C04BF20 bf/s */
L_0C04BF24: BLKS(0x0C04BF24u);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04BF26u, 2);  /* 0C04BF24 mov.l @Rm+,Rn */
	r5 = 0x6u; UPD(0x0C04BF28u, 1);  /* 0C04BF26 mov.l @(disp,pc),Rn */
	IF(0x0C04BF28u); r6 -= 1; T = r6 == 0;  /* 0C04BF28 dt Rn */
	{ u32 c_ = !T; W8(r7, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C04BEF0u, 4); goto L_0C04BEF0; } UPD(0x0C04BF2Eu, 1); goto L_0C04BF2E; }  /* 0C04BF2A bf/s */
L_0C04BF2E: BLKS(0x0C04BF2Eu);
	IF(0x0C04BF2Eu); T = r0 & 1; r0 = (r0 >> 1) | (T << 31);  /* 0C04BF2E rotr Rn */
	r6 = 0x2u; UPD(0x0C04BF32u, 2);  /* 0C04BF30 mov.l @(disp,pc),Rn */
	IF(0x0C04BF32u); PR = R32(r15); r15 += 4; UPD(0x0C04BF34u, 1);  /* 0C04BF32 lds.l @Rn+,pr */
	IF(0x0C04BF34u); { u32 t_ = PR; W8(r7, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C04BF34 rts */
}

/* FUN_0c04bf60 */
void f_0C04BF60(sh3_t *c)
{
	LOCALS;
L_0C04BF60: BLKS(0x0C04BF60u);
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C04BF62u, 1);  /* 0C04BF60 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C04BF64u, 1);  /* 0C04BF62 mov.l Rm,@-Rn */
	IF(0x0C04BF64u); r15 -= 4; W32(r15, PR); UPD(0x0C04BF66u, 1);  /* 0C04BF64 sts.l pr,@-Rn */
	r12 = 0x1u; UPD(0x0C04BF68u, 1);  /* 0C04BF66 mov.l @(disp,pc),Rn */
	r13 = r4;  /* 0C04BF68 mov Rm,Rn */
	r0 = 0x0u; UPD(0x0C04BF6Cu, 2);  /* 0C04BF6A mov.l @(disp,pc),Rn */
	r6 = 0xC04BD48u; UPD(0x0C04BF6Eu, 1);  /* 0C04BF6C mov.l @(disp,pc),Rn */
	IF(0x0C04BF6Eu); { u32 t_ = r6; PR = 0x0C04BF72u; IF(0x0C04BF70u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BD48, 0x0C04BD48u, 0x0C04BF72u); }  /* 0C04BF6E jsr @Rn */
L_0C04BF72: BLKS(0x0C04BF72u);
	W8(r13, r0); UPD(0x0C04BF74u, 1);  /* 0C04BF72 mov.b Rm,@Rn */
	r13 += 0x1u;  /* 0C04BF74 add #imm,Rn */
	r5 = 0xFu; UPD(0x0C04BF78u, 2);  /* 0C04BF76 mov.l @(disp,pc),Rn */
	r1 = r0;  /* 0C04BF78 mov Rm,Rn */
	r1 &= r5;  /* 0C04BF7A and Rm,Rn */
	IF(0x0C04BF7Cu); r0 >>= 2;  /* 0C04BF7C shlr2 Rn */
	IF(0x0C04BF7Eu); r0 >>= 2;  /* 0C04BF7E shlr2 Rn */
	r0 &= r5;  /* 0C04BF80 and Rm,Rn */
	r4 = 0x9u; UPD(0x0C04BF84u, 6);  /* 0C04BF82 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r4;  /* 0C04BF84 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04BF88u); ; /* slot nop */ if (c_) { UPD(0x0C04BF8Cu, 4); goto L_0C04BF8C; } goto L_0C04BF8A; }  /* 0C04BF86 bf/s */
L_0C04BF8A: BLKS(0x0C04BF8Au);
	r12 = 0x0u; UPD(0x0C04BF8Cu, 2);  /* 0C04BF8A mov.l @(disp,pc),Rn */
L_0C04BF8C: BLKS(0x0C04BF8Cu);
	r4 = 0x5u; UPD(0x0C04BF8Eu, 1);  /* 0C04BF8C mov.l @(disp,pc),Rn */
	T = (s32)r0 > (s32)r4;  /* 0C04BF8E cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04BF92u); ; /* slot nop */ if (c_) { UPD(0x0C04BF96u, 4); goto L_0C04BF96; } goto L_0C04BF94; }  /* 0C04BF90 bf/s */
L_0C04BF94: BLKS(0x0C04BF94u);
	r12 = 0x0u; UPD(0x0C04BF96u, 2);  /* 0C04BF94 mov.l @(disp,pc),Rn */
L_0C04BF96: BLKS(0x0C04BF96u);
	r0 = 0x1u; UPD(0x0C04BF98u, 1);  /* 0C04BF96 mov.l @(disp,pc),Rn */
	r6 = 0xC04BD48u; UPD(0x0C04BF9Au, 1);  /* 0C04BF98 mov.l @(disp,pc),Rn */
	IF(0x0C04BF9Au); { u32 t_ = r6; PR = 0x0C04BF9Eu; IF(0x0C04BF9Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BD48, 0x0C04BD48u, 0x0C04BF9Eu); }  /* 0C04BF9A jsr @Rn */
L_0C04BF9E: BLKS(0x0C04BF9Eu);
	W8(r13, r0); UPD(0x0C04BFA0u, 1);  /* 0C04BF9E mov.b Rm,@Rn */
	r13 += 0x1u;  /* 0C04BFA0 add #imm,Rn */
	r5 = 0xFu; UPD(0x0C04BFA4u, 2);  /* 0C04BFA2 mov.l @(disp,pc),Rn */
	r1 = r0;  /* 0C04BFA4 mov Rm,Rn */
	r1 &= r5;  /* 0C04BFA6 and Rm,Rn */
	IF(0x0C04BFA8u); r0 >>= 2;  /* 0C04BFA8 shlr2 Rn */
	IF(0x0C04BFAAu); r0 >>= 2;  /* 0C04BFAA shlr2 Rn */
	r0 &= r5;  /* 0C04BFAC and Rm,Rn */
	r4 = 0x9u; UPD(0x0C04BFB0u, 6);  /* 0C04BFAE mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r4;  /* 0C04BFB0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04BFB4u); ; /* slot nop */ if (c_) { UPD(0x0C04BFB8u, 4); goto L_0C04BFB8; } goto L_0C04BFB6; }  /* 0C04BFB2 bf/s */
L_0C04BFB6: BLKS(0x0C04BFB6u);
	r12 = 0x0u; UPD(0x0C04BFB8u, 2);  /* 0C04BFB6 mov.l @(disp,pc),Rn */
L_0C04BFB8: BLKS(0x0C04BFB8u);
	r4 = 0x5u; UPD(0x0C04BFBAu, 1);  /* 0C04BFB8 mov.l @(disp,pc),Rn */
	T = (s32)r0 > (s32)r4;  /* 0C04BFBA cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04BFBEu); ; /* slot nop */ if (c_) { UPD(0x0C04BFC2u, 4); goto L_0C04BFC2; } goto L_0C04BFC0; }  /* 0C04BFBC bf/s */
L_0C04BFC0: BLKS(0x0C04BFC0u);
	r12 = 0x0u; UPD(0x0C04BFC2u, 2);  /* 0C04BFC0 mov.l @(disp,pc),Rn */
L_0C04BFC2: BLKS(0x0C04BFC2u);
	r0 = 0x2u; UPD(0x0C04BFC4u, 1);  /* 0C04BFC2 mov.l @(disp,pc),Rn */
	r6 = 0xC04BD48u; UPD(0x0C04BFC6u, 1);  /* 0C04BFC4 mov.l @(disp,pc),Rn */
	IF(0x0C04BFC6u); { u32 t_ = r6; PR = 0x0C04BFCAu; IF(0x0C04BFC8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BD48, 0x0C04BD48u, 0x0C04BFCAu); }  /* 0C04BFC6 jsr @Rn */
L_0C04BFCA: BLKS(0x0C04BFCAu);
	W8(r13, r0); UPD(0x0C04BFCCu, 1);  /* 0C04BFCA mov.b Rm,@Rn */
	r13 += 0x1u;  /* 0C04BFCC add #imm,Rn */
	r5 = 0xFu; UPD(0x0C04BFD0u, 2);  /* 0C04BFCE mov.l @(disp,pc),Rn */
	r1 = r0;  /* 0C04BFD0 mov Rm,Rn */
	r1 &= r5;  /* 0C04BFD2 and Rm,Rn */
	IF(0x0C04BFD4u); r0 >>= 2;  /* 0C04BFD4 shlr2 Rn */
	IF(0x0C04BFD6u); r0 >>= 2;  /* 0C04BFD6 shlr2 Rn */
	r0 &= r5;  /* 0C04BFD8 and Rm,Rn */
	r4 = 0xAu; UPD(0x0C04BFDCu, 6);  /* 0C04BFDA mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C04BFDC mulu.w Rm,Rn */
	IF(0x0C04BFDEu); r4 = MACL;  /* 0C04BFDE sts macl,Rn */
	r1 += r4;  /* 0C04BFE0 add Rm,Rn */
	r4 = 0x17u; UPD(0x0C04BFE4u, 5);  /* 0C04BFE2 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r4;  /* 0C04BFE4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04BFE8u); ; /* slot nop */ if (c_) { UPD(0x0C04BFECu, 4); goto L_0C04BFEC; } goto L_0C04BFEA; }  /* 0C04BFE6 bf/s */
L_0C04BFEA: BLKS(0x0C04BFEAu);
	r12 = 0x0u; UPD(0x0C04BFECu, 2);  /* 0C04BFEA mov.l @(disp,pc),Rn */
L_0C04BFEC: BLKS(0x0C04BFECu);
	r0 = 0x3u; UPD(0x0C04BFEEu, 1);  /* 0C04BFEC mov.l @(disp,pc),Rn */
	r6 = 0xC04BD48u; UPD(0x0C04BFF0u, 1);  /* 0C04BFEE mov.l @(disp,pc),Rn */
	IF(0x0C04BFF0u); { u32 t_ = r6; PR = 0x0C04BFF4u; IF(0x0C04BFF2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BD48, 0x0C04BD48u, 0x0C04BFF4u); }  /* 0C04BFF0 jsr @Rn */
L_0C04BFF4: BLKS(0x0C04BFF4u);
	W8(r13, r0); UPD(0x0C04BFF6u, 1);  /* 0C04BFF4 mov.b Rm,@Rn */
	r13 += 0x1u;  /* 0C04BFF6 add #imm,Rn */
	r0 = 0x4u; UPD(0x0C04BFFAu, 2);  /* 0C04BFF8 mov.l @(disp,pc),Rn */
	r6 = 0xC04BD48u; UPD(0x0C04BFFCu, 1);  /* 0C04BFFA mov.l @(disp,pc),Rn */
	IF(0x0C04BFFCu); { u32 t_ = r6; PR = 0x0C04C000u; IF(0x0C04BFFEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BD48, 0x0C04BD48u, 0x0C04C000u); }  /* 0C04BFFC jsr @Rn */
L_0C04C000: BLKS(0x0C04C000u);
	W8(r13, r0); UPD(0x0C04C002u, 1);  /* 0C04C000 mov.b Rm,@Rn */
	r13 += 0x1u;  /* 0C04C002 add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C04C004 tst Rm,Rn */
	{ u32 c_ = T; r1 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04C024u, 5); goto L_0C04C024; } goto L_0C04C00A; }  /* 0C04C006 bt/s */
L_0C04C00A: BLKS(0x0C04C00Au);
	r5 = 0xFu; UPD(0x0C04C00Cu, 2);  /* 0C04C00A mov.l @(disp,pc),Rn */
	r1 &= r5;  /* 0C04C00C and Rm,Rn */
	IF(0x0C04C00Eu); r0 >>= 2;  /* 0C04C00E shlr2 Rn */
	IF(0x0C04C010u); r0 >>= 2;  /* 0C04C010 shlr2 Rn */
	r0 &= r5;  /* 0C04C012 and Rm,Rn */
	r4 = 0xAu; UPD(0x0C04C016u, 5);  /* 0C04C014 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C04C016 mulu.w Rm,Rn */
	IF(0x0C04C018u); r4 = MACL;  /* 0C04C018 sts macl,Rn */
	r1 += r4;  /* 0C04C01A add Rm,Rn */
	r4 = 0x1Fu; UPD(0x0C04C01Eu, 5);  /* 0C04C01C mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r4;  /* 0C04C01E cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04C022u); ; /* slot nop */ if (c_) { UPD(0x0C04C026u, 4); goto L_0C04C026; } UPD(0x0C04C024u, 1); goto L_0C04C024; }  /* 0C04C020 bf/s */
L_0C04C024: BLKS(0x0C04C024u);
	r12 = 0x0u; UPD(0x0C04C026u, 1);  /* 0C04C024 mov.l @(disp,pc),Rn */
L_0C04C026: BLKS(0x0C04C026u);
	r0 = 0x5u; UPD(0x0C04C028u, 1);  /* 0C04C026 mov.l @(disp,pc),Rn */
	r6 = 0xC04BD48u; UPD(0x0C04C02Au, 1);  /* 0C04C028 mov.l @(disp,pc),Rn */
	IF(0x0C04C02Au); { u32 t_ = r6; PR = 0x0C04C02Eu; IF(0x0C04C02Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BD48, 0x0C04BD48u, 0x0C04C02Eu); }  /* 0C04C02A jsr @Rn */
L_0C04C02E: BLKS(0x0C04C02Eu);
	W8(r13, r0); UPD(0x0C04C030u, 1);  /* 0C04C02E mov.b Rm,@Rn */
	r13 += 0x1u;  /* 0C04C030 add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C04C032 tst Rm,Rn */
	{ u32 c_ = T; r1 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04C052u, 5); goto L_0C04C052; } goto L_0C04C038; }  /* 0C04C034 bt/s */
L_0C04C038: BLKS(0x0C04C038u);
	r5 = 0xFu; UPD(0x0C04C03Au, 2);  /* 0C04C038 mov.l @(disp,pc),Rn */
	r1 &= r5;  /* 0C04C03A and Rm,Rn */
	IF(0x0C04C03Cu); r0 >>= 2;  /* 0C04C03C shlr2 Rn */
	IF(0x0C04C03Eu); r0 >>= 2;  /* 0C04C03E shlr2 Rn */
	r0 &= r5;  /* 0C04C040 and Rm,Rn */
	r4 = 0xAu; UPD(0x0C04C044u, 5);  /* 0C04C042 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C04C044 mulu.w Rm,Rn */
	IF(0x0C04C046u); r4 = MACL;  /* 0C04C046 sts macl,Rn */
	r1 += r4;  /* 0C04C048 add Rm,Rn */
	r4 = 0xCu; UPD(0x0C04C04Cu, 5);  /* 0C04C04A mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r4;  /* 0C04C04C cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04C050u); ; /* slot nop */ if (c_) { UPD(0x0C04C054u, 4); goto L_0C04C054; } UPD(0x0C04C052u, 1); goto L_0C04C052; }  /* 0C04C04E bf/s */
L_0C04C052: BLKS(0x0C04C052u);
	r12 = 0x0u; UPD(0x0C04C054u, 1);  /* 0C04C052 mov.l @(disp,pc),Rn */
L_0C04C054: BLKS(0x0C04C054u);
	r0 = 0x6u; UPD(0x0C04C056u, 1);  /* 0C04C054 mov.l @(disp,pc),Rn */
	r6 = 0xC04BD48u; UPD(0x0C04C058u, 1);  /* 0C04C056 mov.l @(disp,pc),Rn */
	IF(0x0C04C058u); { u32 t_ = r6; PR = 0x0C04C05Cu; IF(0x0C04C05Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BD48, 0x0C04BD48u, 0x0C04C05Cu); }  /* 0C04C058 jsr @Rn */
L_0C04C05C: BLKS(0x0C04C05Cu);
	W8(r13, r0); UPD(0x0C04C05Eu, 1);  /* 0C04C05C mov.b Rm,@Rn */
	r1 = r0;  /* 0C04C05E mov Rm,Rn */
	r5 = 0xFu; UPD(0x0C04C062u, 2);  /* 0C04C060 mov.l @(disp,pc),Rn */
	r1 &= r5;  /* 0C04C062 and Rm,Rn */
	IF(0x0C04C064u); r0 >>= 2;  /* 0C04C064 shlr2 Rn */
	IF(0x0C04C066u); r0 >>= 2;  /* 0C04C066 shlr2 Rn */
	r0 &= r5;  /* 0C04C068 and Rm,Rn */
	r4 = 0xAu; UPD(0x0C04C06Cu, 5);  /* 0C04C06A mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C04C06C mulu.w Rm,Rn */
	IF(0x0C04C06Eu); r4 = MACL;  /* 0C04C06E sts macl,Rn */
	r1 += r4;  /* 0C04C070 add Rm,Rn */
	r4 = 0x4u; UPD(0x0C04C074u, 5);  /* 0C04C072 mov.l @(disp,pc),Rn */
	T = (s32)r1 >= (s32)r4;  /* 0C04C074 cmp/ge Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04C078u); ; /* slot nop */ if (c_) { UPD(0x0C04C082u, 4); goto L_0C04C082; } goto L_0C04C07A; }  /* 0C04C076 bf/s */
L_0C04C07A: BLKS(0x0C04C07Au);
	r4 = 0x63u; UPD(0x0C04C07Cu, 2);  /* 0C04C07A mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r4;  /* 0C04C07C cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04C080u); ; /* slot nop */ if (c_) { UPD(0x0C04C084u, 4); goto L_0C04C084; } UPD(0x0C04C082u, 1); goto L_0C04C082; }  /* 0C04C07E bf/s */
L_0C04C082: BLKS(0x0C04C082u);
	r12 = 0x0u; UPD(0x0C04C084u, 1);  /* 0C04C082 mov.l @(disp,pc),Rn */
L_0C04C084: BLKS(0x0C04C084u);
	r0 = r12;  /* 0C04C084 mov Rm,Rn */
	IF(0x0C04C086u); PR = R32(r15); r15 += 4; UPD(0x0C04C088u, 2);  /* 0C04C086 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C04C08Au, 1);  /* 0C04C088 mov.l @Rm+,Rn */
	IF(0x0C04C08Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r12 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04C08A rts */
}

/* FUN_0c04c0cc */
void f_0C04C0CC(sh3_t *c)
{
	LOCALS;
L_0C04C0CC: BLKS(0x0C04C0CCu);
	r0 = 0x0u; UPD(0x0C04C0CEu, 1);  /* 0C04C0CC mov.l @(disp,pc),Rn */
	IF(0x0C04C0CEu); PR = R32(r15); r15 += 4; UPD(0x0C04C0D0u, 1);  /* 0C04C0CE lds.l @Rn+,pr */
	IF(0x0C04C0D0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r13 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04C0D0 rts */
}

/* FUN_0c04c0d8 */
void f_0C04C0D8(sh3_t *c)
{
	LOCALS;
	goto L_0C04C0D8;
L_0C04C0CC: BLKS(0x0C04C0CCu);
	r0 = 0x0u; UPD(0x0C04C0CEu, 1);  /* 0C04C0CC mov.l @(disp,pc),Rn */
	IF(0x0C04C0CEu); PR = R32(r15); r15 += 4; UPD(0x0C04C0D0u, 1);  /* 0C04C0CE lds.l @Rn+,pr */
	IF(0x0C04C0D0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r13 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04C0D0 rts */
L_0C04C0D8: BLKS(0x0C04C0D8u);
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C04C0DAu, 1);  /* 0C04C0D8 mov.l Rm,@-Rn */
	IF(0x0C04C0DAu); r15 -= 4; W32(r15, PR); UPD(0x0C04C0DCu, 1);  /* 0C04C0DA sts.l pr,@-Rn */
	r13 = r4;  /* 0C04C0DC mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r13); r13 += 1; r1 = v_; } UPD(0x0C04C0E0u, 2);  /* 0C04C0DE mov.b @Rm+,Rn */
	r5 = 0xFu; UPD(0x0C04C0E2u, 1);  /* 0C04C0E0 mov.l @(disp,pc),Rn */
	r2 = r1;  /* 0C04C0E2 mov Rm,Rn */
	r0 = r1;  /* 0C04C0E4 mov Rm,Rn */
	r2 &= r5;  /* 0C04C0E6 and Rm,Rn */
	IF(0x0C04C0E8u); r0 >>= 2;  /* 0C04C0E8 shlr2 Rn */
	IF(0x0C04C0EAu); r0 >>= 2;  /* 0C04C0EA shlr2 Rn */
	r0 &= r5;  /* 0C04C0EC and Rm,Rn */
	r4 = 0xAu; UPD(0x0C04C0F0u, 7);  /* 0C04C0EE mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C04C0F0 mulu.w Rm,Rn */
	IF(0x0C04C0F2u); r4 = MACL;  /* 0C04C0F2 sts macl,Rn */
	r2 += r4;  /* 0C04C0F4 add Rm,Rn */
	r4 = 0x3Bu; UPD(0x0C04C0F8u, 5);  /* 0C04C0F6 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C04C0F8 cmp/gt Rm,Rn */
	{ u32 c_ = T; IF(0x0C04C0FCu); ; /* slot nop */ if (c_) { UPD(0x0C04C0CCu, 4); TAIL(f_0C04C0CC); } goto L_0C04C0FE; }  /* 0C04C0FA bt/s */
L_0C04C0FE: BLKS(0x0C04C0FEu);
	r0 = 0x0u; UPD(0x0C04C100u, 2);  /* 0C04C0FE mov.l @(disp,pc),Rn */
	r6 = 0xC04BCD0u; UPD(0x0C04C102u, 1);  /* 0C04C100 mov.l @(disp,pc),Rn */
	IF(0x0C04C102u); { u32 t_ = r6; PR = 0x0C04C106u; IF(0x0C04C104u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BCD0, 0x0C04BCD0u, 0x0C04C106u); }  /* 0C04C102 jsr @Rn */
L_0C04C106: BLKS(0x0C04C106u);
	{ u32 v_ = (u32)(s32)(s8)R8(r13); r13 += 1; r1 = v_; } UPD(0x0C04C108u, 1);  /* 0C04C106 mov.b @Rm+,Rn */
	r5 = 0xFu; UPD(0x0C04C10Au, 1);  /* 0C04C108 mov.l @(disp,pc),Rn */
	r2 = r1;  /* 0C04C10A mov Rm,Rn */
	r0 = r1;  /* 0C04C10C mov Rm,Rn */
	r2 &= r5;  /* 0C04C10E and Rm,Rn */
	IF(0x0C04C110u); r0 >>= 2;  /* 0C04C110 shlr2 Rn */
	IF(0x0C04C112u); r0 >>= 2;  /* 0C04C112 shlr2 Rn */
	r0 &= r5;  /* 0C04C114 and Rm,Rn */
	r4 = 0xAu; UPD(0x0C04C118u, 7);  /* 0C04C116 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C04C118 mulu.w Rm,Rn */
	IF(0x0C04C11Au); r4 = MACL;  /* 0C04C11A sts macl,Rn */
	r2 += r4;  /* 0C04C11C add Rm,Rn */
	r4 = 0x3Bu; UPD(0x0C04C120u, 5);  /* 0C04C11E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C04C120 cmp/gt Rm,Rn */
	{ u32 c_ = T; IF(0x0C04C124u); ; /* slot nop */ if (c_) { UPD(0x0C04C0CCu, 4); TAIL(f_0C04C0CC); } goto L_0C04C126; }  /* 0C04C122 bt/s */
L_0C04C126: BLKS(0x0C04C126u);
	r0 = 0x1u; UPD(0x0C04C128u, 2);  /* 0C04C126 mov.l @(disp,pc),Rn */
	r6 = 0xC04BCD0u; UPD(0x0C04C12Au, 1);  /* 0C04C128 mov.l @(disp,pc),Rn */
	IF(0x0C04C12Au); { u32 t_ = r6; PR = 0x0C04C12Eu; IF(0x0C04C12Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BCD0, 0x0C04BCD0u, 0x0C04C12Eu); }  /* 0C04C12A jsr @Rn */
L_0C04C12E: BLKS(0x0C04C12Eu);
	{ u32 v_ = (u32)(s32)(s8)R8(r13); r13 += 1; r1 = v_; } UPD(0x0C04C130u, 1);  /* 0C04C12E mov.b @Rm+,Rn */
	r5 = 0xFu; UPD(0x0C04C132u, 1);  /* 0C04C130 mov.l @(disp,pc),Rn */
	r2 = r1;  /* 0C04C132 mov Rm,Rn */
	r0 = r1;  /* 0C04C134 mov Rm,Rn */
	r2 &= r5;  /* 0C04C136 and Rm,Rn */
	IF(0x0C04C138u); r0 >>= 2;  /* 0C04C138 shlr2 Rn */
	IF(0x0C04C13Au); r0 >>= 2;  /* 0C04C13A shlr2 Rn */
	r0 &= r5;  /* 0C04C13C and Rm,Rn */
	r4 = 0xAu; UPD(0x0C04C140u, 7);  /* 0C04C13E mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C04C140 mulu.w Rm,Rn */
	IF(0x0C04C142u); r4 = MACL;  /* 0C04C142 sts macl,Rn */
	r2 += r4;  /* 0C04C144 add Rm,Rn */
	r4 = 0x17u; UPD(0x0C04C148u, 5);  /* 0C04C146 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C04C148 cmp/gt Rm,Rn */
	{ u32 c_ = T; IF(0x0C04C14Cu); ; /* slot nop */ if (c_) { UPD(0x0C04C0CCu, 4); TAIL(f_0C04C0CC); } goto L_0C04C14E; }  /* 0C04C14A bt/s */
L_0C04C14E: BLKS(0x0C04C14Eu);
	r0 = 0x2u; UPD(0x0C04C150u, 2);  /* 0C04C14E mov.l @(disp,pc),Rn */
	r6 = 0xC04BCD0u; UPD(0x0C04C152u, 1);  /* 0C04C150 mov.l @(disp,pc),Rn */
	IF(0x0C04C152u); { u32 t_ = r6; PR = 0x0C04C156u; IF(0x0C04C154u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BCD0, 0x0C04BCD0u, 0x0C04C156u); }  /* 0C04C152 jsr @Rn */
L_0C04C156: BLKS(0x0C04C156u);
	{ u32 v_ = (u32)(s32)(s8)R8(r13); r13 += 1; r1 = v_; } UPD(0x0C04C158u, 1);  /* 0C04C156 mov.b @Rm+,Rn */
	r0 = 0x3u; UPD(0x0C04C15Au, 1);  /* 0C04C158 mov.l @(disp,pc),Rn */
	r6 = 0xC04BCD0u; UPD(0x0C04C15Cu, 1);  /* 0C04C15A mov.l @(disp,pc),Rn */
	IF(0x0C04C15Cu); { u32 t_ = r6; PR = 0x0C04C160u; IF(0x0C04C15Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BCD0, 0x0C04BCD0u, 0x0C04C160u); }  /* 0C04C15C jsr @Rn */
L_0C04C160: BLKS(0x0C04C160u);
	r1 = 0x0u; UPD(0x0C04C162u, 1);  /* 0C04C160 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r13); r13 += 1; r1 = v_; } UPD(0x0C04C164u, 1);  /* 0C04C162 mov.b @Rm+,Rn */
	T = (r1 & r1) == 0;  /* 0C04C164 tst Rm,Rn */
	{ u32 c_ = T; r2 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04C0CCu, 4); TAIL(f_0C04C0CC); } goto L_0C04C16A; }  /* 0C04C166 bt/s */
L_0C04C16A: BLKS(0x0C04C16Au);
	r0 = r1;  /* 0C04C16A mov Rm,Rn */
	r5 = 0xFu; UPD(0x0C04C16Eu, 3);  /* 0C04C16C mov.l @(disp,pc),Rn */
	r2 &= r5;  /* 0C04C16E and Rm,Rn */
	IF(0x0C04C170u); r0 >>= 2;  /* 0C04C170 shlr2 Rn */
	IF(0x0C04C172u); r0 >>= 2;  /* 0C04C172 shlr2 Rn */
	r0 &= r5;  /* 0C04C174 and Rm,Rn */
	r4 = 0xAu; UPD(0x0C04C178u, 5);  /* 0C04C176 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C04C178 mulu.w Rm,Rn */
	IF(0x0C04C17Au); r4 = MACL;  /* 0C04C17A sts macl,Rn */
	r2 += r4;  /* 0C04C17C add Rm,Rn */
	r4 = 0x1Fu; UPD(0x0C04C180u, 5);  /* 0C04C17E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C04C180 cmp/gt Rm,Rn */
	{ u32 c_ = T; IF(0x0C04C184u); ; /* slot nop */ if (c_) { UPD(0x0C04C0CCu, 4); TAIL(f_0C04C0CC); } goto L_0C04C186; }  /* 0C04C182 bt/s */
L_0C04C186: BLKS(0x0C04C186u);
	r0 = 0x4u; UPD(0x0C04C188u, 2);  /* 0C04C186 mov.l @(disp,pc),Rn */
	r6 = 0xC04BCD0u; UPD(0x0C04C18Au, 1);  /* 0C04C188 mov.l @(disp,pc),Rn */
	IF(0x0C04C18Au); { u32 t_ = r6; PR = 0x0C04C18Eu; IF(0x0C04C18Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BCD0, 0x0C04BCD0u, 0x0C04C18Eu); }  /* 0C04C18A jsr @Rn */
L_0C04C18E: BLKS(0x0C04C18Eu);
	r1 = 0x0u; UPD(0x0C04C190u, 1);  /* 0C04C18E mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r13); r13 += 1; r1 = v_; } UPD(0x0C04C192u, 1);  /* 0C04C190 mov.b @Rm+,Rn */
	T = (r1 & r1) == 0;  /* 0C04C192 tst Rm,Rn */
	{ u32 c_ = T; r2 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04C0CCu, 4); TAIL(f_0C04C0CC); } goto L_0C04C198; }  /* 0C04C194 bt/s */
L_0C04C198: BLKS(0x0C04C198u);
	r0 = r1;  /* 0C04C198 mov Rm,Rn */
	r5 = 0xFu; UPD(0x0C04C19Cu, 3);  /* 0C04C19A mov.l @(disp,pc),Rn */
	r2 &= r5;  /* 0C04C19C and Rm,Rn */
	IF(0x0C04C19Eu); r0 >>= 2;  /* 0C04C19E shlr2 Rn */
	IF(0x0C04C1A0u); r0 >>= 2;  /* 0C04C1A0 shlr2 Rn */
	r0 &= r5;  /* 0C04C1A2 and Rm,Rn */
	r4 = 0xAu; UPD(0x0C04C1A6u, 5);  /* 0C04C1A4 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C04C1A6 mulu.w Rm,Rn */
	IF(0x0C04C1A8u); r4 = MACL;  /* 0C04C1A8 sts macl,Rn */
	r2 += r4;  /* 0C04C1AA add Rm,Rn */
	r4 = 0xCu; UPD(0x0C04C1AEu, 5);  /* 0C04C1AC mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C04C1AE cmp/gt Rm,Rn */
	{ u32 c_ = T; IF(0x0C04C1B2u); ; /* slot nop */ if (c_) { UPD(0x0C04C0CCu, 4); TAIL(f_0C04C0CC); } goto L_0C04C1B4; }  /* 0C04C1B0 bt/s */
L_0C04C1B4: BLKS(0x0C04C1B4u);
	r0 = 0x5u; UPD(0x0C04C1B6u, 2);  /* 0C04C1B4 mov.l @(disp,pc),Rn */
	r6 = 0xC04BCD0u; UPD(0x0C04C1B8u, 1);  /* 0C04C1B6 mov.l @(disp,pc),Rn */
	IF(0x0C04C1B8u); { u32 t_ = r6; PR = 0x0C04C1BCu; IF(0x0C04C1BAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BCD0, 0x0C04BCD0u, 0x0C04C1BCu); }  /* 0C04C1B8 jsr @Rn */
L_0C04C1BC: BLKS(0x0C04C1BCu);
	r1 = 0x0u; UPD(0x0C04C1BEu, 1);  /* 0C04C1BC mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r13); r13 += 1; r1 = v_; } UPD(0x0C04C1C0u, 1);  /* 0C04C1BE mov.b @Rm+,Rn */
	r4 = 0x4u; UPD(0x0C04C1C2u, 1);  /* 0C04C1C0 mov.l @(disp,pc),Rn */
	T = (s32)r1 >= (s32)r4;  /* 0C04C1C2 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r2 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04C0CCu, 4); TAIL(f_0C04C0CC); } goto L_0C04C1C8; }  /* 0C04C1C4 bf/s */
L_0C04C1C8: BLKS(0x0C04C1C8u);
	r0 = r1;  /* 0C04C1C8 mov Rm,Rn */
	r5 = 0xFu; UPD(0x0C04C1CCu, 3);  /* 0C04C1CA mov.l @(disp,pc),Rn */
	r2 &= r5;  /* 0C04C1CC and Rm,Rn */
	IF(0x0C04C1CEu); r0 >>= 2;  /* 0C04C1CE shlr2 Rn */
	IF(0x0C04C1D0u); r0 >>= 2;  /* 0C04C1D0 shlr2 Rn */
	r0 &= r5;  /* 0C04C1D2 and Rm,Rn */
	r4 = 0xAu; UPD(0x0C04C1D6u, 5);  /* 0C04C1D4 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r4;  /* 0C04C1D6 mulu.w Rm,Rn */
	IF(0x0C04C1D8u); r4 = MACL;  /* 0C04C1D8 sts macl,Rn */
	r2 += r4;  /* 0C04C1DA add Rm,Rn */
	r4 = 0x63u; UPD(0x0C04C1DEu, 5);  /* 0C04C1DC mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C04C1DE cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04C1E2u); ; /* slot nop */ if (c_) { UPD(0x0C04C220u, 4); goto L_0C04C220; } goto L_0C04C1E4; }  /* 0C04C1E0 bf/s */
L_0C04C1E4: BLKS(0x0C04C1E4u);
	{ IF(0x0C04C1E6u); ; /* slot nop */ UPD(0x0C04C0CCu, 4); TAIL(f_0C04C0CC); }  /* 0C04C1E4 bra */
L_0C04C220: BLKS(0x0C04C220u);
	r0 = 0x6u; UPD(0x0C04C222u, 1);  /* 0C04C220 mov.l @(disp,pc),Rn */
	r6 = 0xC04BCD0u; UPD(0x0C04C224u, 1);  /* 0C04C222 mov.l @(disp,pc),Rn */
	IF(0x0C04C224u); { u32 t_ = r6; PR = 0x0C04C228u; IF(0x0C04C226u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BCD0, 0x0C04BCD0u, 0x0C04C228u); }  /* 0C04C224 jsr @Rn */
L_0C04C228: BLKS(0x0C04C228u);
	r0 = 0x1u; UPD(0x0C04C22Au, 1);  /* 0C04C228 mov.l @(disp,pc),Rn */
	IF(0x0C04C22Au); PR = R32(r15); r15 += 4; UPD(0x0C04C22Cu, 1);  /* 0C04C22A lds.l @Rn+,pr */
	IF(0x0C04C22Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r13 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04C22C rts */
}

/* rtc_eeprom_write */
void f_0C04C23C(sh3_t *c)
{
	LOCALS;
L_0C04C23C: BLKS(0x0C04C23Cu);
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C04C23Eu, 1);  /* 0C04C23C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C04C240u, 1);  /* 0C04C23E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C04C242u, 1);  /* 0C04C240 mov.l Rm,@-Rn */
	IF(0x0C04C242u); r15 -= 4; W32(r15, PR); UPD(0x0C04C244u, 1);  /* 0C04C242 sts.l pr,@-Rn */
	r13 = r6;  /* 0C04C244 mov Rm,Rn */
	IF(0x0C04C246u); T = r13 & 1; r13 >>= 1;  /* 0C04C246 shlr Rn */
	r12 = r5;  /* 0C04C248 mov Rm,Rn */
	r11 = r4;  /* 0C04C24A mov Rm,Rn */
	UPD(0x0C04C24Cu, 4);
L_0C04C24C: BLKS(0x0C04C24Cu);
	r1 = (u32)(s32)(s16)R16(r11); UPD(0x0C04C24Eu, 1);  /* 0C04C24C mov.w @Rm,Rn */
	r6 = 0xC04BDC0u; UPD(0x0C04C250u, 1);  /* 0C04C24E mov.l @(disp,pc),Rn */
	IF(0x0C04C250u); { u32 t_ = r6; PR = 0x0C04C254u; r0 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04BDC0, 0x0C04BDC0u, 0x0C04C254u); }  /* 0C04C250 jsr @Rn */
L_0C04C254: BLKS(0x0C04C254u);
	r11 += 0x2u;  /* 0C04C254 add #imm,Rn */
	IF(0x0C04C256u); r13 -= 1; T = r13 == 0;  /* 0C04C256 dt Rn */
	{ u32 c_ = !T; r12 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C04C24Cu, 5); goto L_0C04C24C; } goto L_0C04C25C; }  /* 0C04C258 bf/s */
L_0C04C25C: BLKS(0x0C04C25Cu);
	r0 = 0x1u; UPD(0x0C04C25Eu, 2);  /* 0C04C25C mov.l @(disp,pc),Rn */
	IF(0x0C04C25Eu); PR = R32(r15); r15 += 4; UPD(0x0C04C260u, 1);  /* 0C04C25E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C04C262u, 1);  /* 0C04C260 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C04C264u, 1);  /* 0C04C262 mov.l @Rm+,Rn */
	IF(0x0C04C264u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r11 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04C264 rts */
}

/* rtc_eeprom_read */
void f_0C04C270(sh3_t *c)
{
	LOCALS;
L_0C04C270: BLKS(0x0C04C270u);
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C04C272u, 1);  /* 0C04C270 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C04C274u, 1);  /* 0C04C272 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C04C276u, 1);  /* 0C04C274 mov.l Rm,@-Rn */
	IF(0x0C04C276u); r15 -= 4; W32(r15, PR); UPD(0x0C04C278u, 1);  /* 0C04C276 sts.l pr,@-Rn */
	r13 = r6;  /* 0C04C278 mov Rm,Rn */
	IF(0x0C04C27Au); T = r13 & 1; r13 >>= 1;  /* 0C04C27A shlr Rn */
	r12 = r5;  /* 0C04C27C mov Rm,Rn */
	r11 = r4;  /* 0C04C27E mov Rm,Rn */
	UPD(0x0C04C280u, 4);
L_0C04C280: BLKS(0x0C04C280u);
	r6 = 0xC04BE90u; UPD(0x0C04C282u, 1);  /* 0C04C280 mov.l @(disp,pc),Rn */
	IF(0x0C04C282u); { u32 t_ = r6; PR = 0x0C04C286u; r0 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04BE90, 0x0C04BE90u, 0x0C04C286u); }  /* 0C04C282 jsr @Rn */
L_0C04C286: BLKS(0x0C04C286u);
	W16(r11, r0); UPD(0x0C04C288u, 1);  /* 0C04C286 mov.w Rm,@Rn */
	r11 += 0x2u;  /* 0C04C288 add #imm,Rn */
	IF(0x0C04C28Au); r13 -= 1; T = r13 == 0;  /* 0C04C28A dt Rn */
	{ u32 c_ = !T; r12 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C04C280u, 5); goto L_0C04C280; } goto L_0C04C290; }  /* 0C04C28C bf/s */
L_0C04C290: BLKS(0x0C04C290u);
	IF(0x0C04C290u); PR = R32(r15); r15 += 4; UPD(0x0C04C292u, 2);  /* 0C04C290 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C04C294u, 1);  /* 0C04C292 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C04C296u, 1);  /* 0C04C294 mov.l @Rm+,Rn */
	IF(0x0C04C296u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r11 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04C296 rts */
}

void f_0C04E080(sh3_t *c)
{
	LOCALS;
L_0C04E080: BLKS(0x0C04E080u);
	r0 = 0xC04E07Cu; UPD(0x0C04E082u, 1);  /* 0C04E080 mov.l @(disp,pc),Rn */
	r1 = R32(r0); UPD(0x0C04E084u, 1);  /* 0C04E082 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C04E084 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04E088u); ; /* slot nop */ if (c_) { UPD(0x0C04E0A0u, 4); goto L_0C04E0A0; } goto L_0C04E08A; }  /* 0C04E086 bf/s */
L_0C04E08A: BLKS(0x0C04E08Au);
	r0 = 0xC04E078u; UPD(0x0C04E08Cu, 2);  /* 0C04E08A mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C04E08Eu, 1);  /* 0C04E08C mov.l @(disp,pc),Rn */
	IF(0x0C04E08Eu); { u32 t_ = PR; W32(r0, r1); /* slot mov.l Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C04E08E rts */
L_0C04E0A0: BLKS(0x0C04E0A0u);
	IF(0x0C04E0A0u); r15 -= 4; W32(r15, PR); UPD(0x0C04E0A2u, 1);  /* 0C04E0A0 sts.l pr,@-Rn */
	r0 = 0xC04E078u; UPD(0x0C04E0A4u, 1);  /* 0C04E0A2 mov.l @(disp,pc),Rn */
	r1 = 0x1u; UPD(0x0C04E0A6u, 1);  /* 0C04E0A4 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C04E0A8u, 1);  /* 0C04E0A6 mov.l Rm,@Rn */
	r7 = 0xC04DEA0u; UPD(0x0C04E0AAu, 1);  /* 0C04E0A8 mov.l @(disp,pc),Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C04E0ACu, 1);  /* 0C04E0AA mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C04E0AC tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C04E0B0u); ; /* slot nop */ if (c_) { UPD(0x0C04E0C4u, 4); goto L_0C04E0C4; } goto L_0C04E0B2; }  /* 0C04E0AE bt/s */
L_0C04E0B2: BLKS(0x0C04E0B2u);
	{ IF(0x0C04E0B4u); ; /* slot nop */ UPD(0x0C04E216u, 4); goto L_0C04E216; }  /* 0C04E0B2 bra */
L_0C04E0C4: BLKS(0x0C04E0C4u);
	r1 = 0x1u; UPD(0x0C04E0C6u, 1);  /* 0C04E0C4 mov.l @(disp,pc),Rn */
	r5 = R32(r7 + 0x0u); UPD(0x0C04E0C8u, 1);  /* 0C04E0C6 mov.l @(disp,Rm),Rn */
	r4 = R32(r7 + 0x4u); UPD(0x0C04E0CAu, 1);  /* 0C04E0C8 mov.l @(disp,Rm),Rn */
	T = r5 == r4;  /* 0C04E0CA cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r7 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C04E0D8u, 4); goto L_0C04E0D8; } UPD(0x0C04E0D0u, 1); goto L_0C04E0D0; }  /* 0C04E0CC bf/s */
L_0C04E0D0: BLKS(0x0C04E0D0u);
	{ IF(0x0C04E0D2u); ; /* slot nop */ UPD(0x0C04E212u, 3); goto L_0C04E212; }  /* 0C04E0D0 bra */
L_0C04E0D8: BLKS(0x0C04E0D8u);
	r12 = 0xC04C2A0u; UPD(0x0C04E0DAu, 1);  /* 0C04E0D8 mov.l @(disp,pc),Rn */
	r12 += r5;  /* 0C04E0DA add Rm,Rn */
	r1 = R32(r12 + 0x10u); UPD(0x0C04E0DEu, 2);  /* 0C04E0DC mov.l @(disp,Rm),Rn */
	r0 = 0x7u; UPD(0x0C04E0E0u, 1);  /* 0C04E0DE mov.l @(disp,pc),Rn */
	T = r1 == r0;  /* 0C04E0E0 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04E0E4u); ; /* slot nop */ if (c_) { UPD(0x0C04E130u, 4); goto L_0C04E130; } goto L_0C04E0E6; }  /* 0C04E0E2 bf/s */
L_0C04E0E6: BLKS(0x0C04E0E6u);
	r9 = 0xC04DEB0u; UPD(0x0C04E0E8u, 2);  /* 0C04E0E6 mov.l @(disp,pc),Rn */
	r13 = 0x8u; UPD(0x0C04E0EAu, 1);  /* 0C04E0E8 mov.l @(disp,pc),Rn */
L_0C04E0EA: BLKS(0x0C04E0EAu);
	r4 = R32(r9 + 0x1Cu); UPD(0x0C04E0ECu, 1);  /* 0C04E0EA mov.l @(disp,Rm),Rn */
	r1 = 0x0u; UPD(0x0C04E0EEu, 1);  /* 0C04E0EC mov.l @(disp,pc),Rn */
	W32(r9 + 0x10u, r1); UPD(0x0C04E0F0u, 1);  /* 0C04E0EE mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x0u, r1); UPD(0x0C04E0F2u, 1);  /* 0C04E0F0 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r1); UPD(0x0C04E0F4u, 1);  /* 0C04E0F2 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x20u, r1); UPD(0x0C04E0F6u, 1);  /* 0C04E0F4 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x2Cu, r1); UPD(0x0C04E0F8u, 1);  /* 0C04E0F6 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x8u, r1); UPD(0x0C04E0FAu, 1);  /* 0C04E0F8 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x4u, r1); UPD(0x0C04E0FCu, 1);  /* 0C04E0FA mov.l Rm,@(disp,Rn) */
	r0 = 0xC04E9E8u; UPD(0x0C04E0FEu, 1);  /* 0C04E0FC mov.l @(disp,pc),Rn */
	IF(0x0C04E0FEu); { u32 t_ = r0; PR = 0x0C04E102u; IF(0x0C04E100u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E9E8, 0x0C04E9E8u, 0x0C04E102u); }  /* 0C04E0FE jsr @Rn */
L_0C04E102: BLKS(0x0C04E102u);
	r0 = 0xC04EAECu; UPD(0x0C04E104u, 1);  /* 0C04E102 mov.l @(disp,pc),Rn */
	IF(0x0C04E104u); { u32 t_ = r0; PR = 0x0C04E108u; IF(0x0C04E106u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04EAEC, 0x0C04EAECu, 0x0C04E108u); }  /* 0C04E104 jsr @Rn */
L_0C04E108: BLKS(0x0C04E108u);
	IF(0x0C04E108u); r13 -= 1; T = r13 == 0;  /* 0C04E108 dt Rn */
	{ u32 c_ = !T; r9 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C04E0EAu, 4); goto L_0C04E0EA; } goto L_0C04E10E; }  /* 0C04E10A bf/s */
L_0C04E10E: BLKS(0x0C04E10Eu);
	{ IF(0x0C04E110u); ; /* slot nop */ UPD(0x0C04E200u, 4); goto L_0C04E200; }  /* 0C04E10E bra */
L_0C04E130: BLKS(0x0C04E130u);
	r2 = R32(r12 + 0x0u); UPD(0x0C04E132u, 1);  /* 0C04E130 mov.l @(disp,Rm),Rn */
	r9 = 0xC04DEB0u; UPD(0x0C04E134u, 1);  /* 0C04E132 mov.l @(disp,pc),Rn */
	r9 += r2;  /* 0C04E134 add Rm,Rn */
	r1 = R32(r12 + 0x10u); UPD(0x0C04E138u, 2);  /* 0C04E136 mov.l @(disp,Rm),Rn */
	r0 = 0x0u; UPD(0x0C04E13Au, 1);  /* 0C04E138 mov.l @(disp,pc),Rn */
	T = r1 == r0;  /* 0C04E13A cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04E13Eu); ; /* slot nop */ if (c_) { UPD(0x0C04E170u, 4); goto L_0C04E170; } goto L_0C04E140; }  /* 0C04E13C bf/s */
L_0C04E140: BLKS(0x0C04E140u);
	r1 = 0x0u; UPD(0x0C04E142u, 2);  /* 0C04E140 mov.l @(disp,pc),Rn */
	W32(r9 + 0x10u, r1); UPD(0x0C04E144u, 1);  /* 0C04E142 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r1); UPD(0x0C04E146u, 1);  /* 0C04E144 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r1); UPD(0x0C04E148u, 1);  /* 0C04E146 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x20u, r1); UPD(0x0C04E14Au, 1);  /* 0C04E148 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x2Cu, r1); UPD(0x0C04E14Cu, 1);  /* 0C04E14A mov.l Rm,@(disp,Rn) */
	r0 = R32(r12 + 0x14u); UPD(0x0C04E14Eu, 1);  /* 0C04E14C mov.l @(disp,Rm),Rn */
	W32(r9 + 0x8u, r0); UPD(0x0C04E150u, 1);  /* 0C04E14E mov.l Rm,@(disp,Rn) */
	r6 = R32(r12 + 0xCu); UPD(0x0C04E152u, 1);  /* 0C04E150 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x18u, r6); UPD(0x0C04E154u, 1);  /* 0C04E152 mov.l Rm,@(disp,Rn) */
	r5 = R32(r12 + 0x18u); UPD(0x0C04E156u, 1);  /* 0C04E154 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x4u, r5); UPD(0x0C04E158u, 1);  /* 0C04E156 mov.l Rm,@(disp,Rn) */
	r1 = 0x4u; UPD(0x0C04E15Au, 1);  /* 0C04E158 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r5 * (u32)(u16)r1;  /* 0C04E15A mulu.w Rm,Rn */
	IF(0x0C04E15Cu); r2 = MACL;  /* 0C04E15C sts macl,Rn */
	r3 = 0xC04E070u; UPD(0x0C04E160u, 4);  /* 0C04E15E mov.l @(disp,pc),Rn */
	r3 = R32(r3); UPD(0x0C04E162u, 1);  /* 0C04E160 mov.l @Rm,Rn */
	r3 += r2;  /* 0C04E162 add Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C04E166u, 2);  /* 0C04E164 mov.l Rm,@(disp,Rn) */
	r1 = R32(r3 + 0x0u); UPD(0x0C04E168u, 1);  /* 0C04E166 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x0u, r1); UPD(0x0C04E16Au, 1);  /* 0C04E168 mov.l Rm,@(disp,Rn) */
	r0 = 0xC04EA5Cu; UPD(0x0C04E16Cu, 1);  /* 0C04E16A mov.l @(disp,pc),Rn */
	IF(0x0C04E16Cu); { u32 t_ = r0; PR = 0x0C04E170u; r4 = R32(r9 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C04EA5C, 0x0C04EA5Cu, 0x0C04E170u); }  /* 0C04E16C jsr @Rn */
L_0C04E170: BLKS(0x0C04E170u);
	r1 = R32(r12 + 0x10u); UPD(0x0C04E172u, 1);  /* 0C04E170 mov.l @(disp,Rm),Rn */
	r0 = 0x1u; UPD(0x0C04E174u, 1);  /* 0C04E172 mov.l @(disp,pc),Rn */
	T = r1 == r0;  /* 0C04E174 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04E178u); ; /* slot nop */ if (c_) { UPD(0x0C04E1ACu, 4); goto L_0C04E1AC; } goto L_0C04E17A; }  /* 0C04E176 bf/s */
L_0C04E17A: BLKS(0x0C04E17Au);
	r1 = 0x0u; UPD(0x0C04E17Cu, 2);  /* 0C04E17A mov.l @(disp,pc),Rn */
	W32(r9 + 0x10u, r1); UPD(0x0C04E17Eu, 1);  /* 0C04E17C mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x20u, r1); UPD(0x0C04E180u, 1);  /* 0C04E17E mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x2Cu, r1); UPD(0x0C04E182u, 1);  /* 0C04E180 mov.l Rm,@(disp,Rn) */
	r1 = 0x2u; UPD(0x0C04E184u, 1);  /* 0C04E182 mov.l @(disp,pc),Rn */
	W32(r9 + 0xCu, r1); UPD(0x0C04E186u, 1);  /* 0C04E184 mov.l Rm,@(disp,Rn) */
	r0 = R32(r12 + 0x14u); UPD(0x0C04E188u, 1);  /* 0C04E186 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x8u, r0); UPD(0x0C04E18Au, 1);  /* 0C04E188 mov.l Rm,@(disp,Rn) */
	r6 = R32(r12 + 0xCu); UPD(0x0C04E18Cu, 1);  /* 0C04E18A mov.l @(disp,Rm),Rn */
	W32(r9 + 0x18u, r6); UPD(0x0C04E18Eu, 1);  /* 0C04E18C mov.l Rm,@(disp,Rn) */
	r5 = R32(r12 + 0x18u); UPD(0x0C04E190u, 1);  /* 0C04E18E mov.l @(disp,Rm),Rn */
	W32(r9 + 0x4u, r5); UPD(0x0C04E192u, 1);  /* 0C04E190 mov.l Rm,@(disp,Rn) */
	r1 = 0x4u; UPD(0x0C04E194u, 1);  /* 0C04E192 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r5 * (u32)(u16)r1;  /* 0C04E194 mulu.w Rm,Rn */
	IF(0x0C04E196u); r2 = MACL;  /* 0C04E196 sts macl,Rn */
	r3 = 0xC04E070u; UPD(0x0C04E19Au, 4);  /* 0C04E198 mov.l @(disp,pc),Rn */
	r3 = R32(r3); UPD(0x0C04E19Cu, 1);  /* 0C04E19A mov.l @Rm,Rn */
	r3 += r2;  /* 0C04E19C add Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C04E1A0u, 2);  /* 0C04E19E mov.l Rm,@(disp,Rn) */
	r1 = R32(r3 + 0x0u); UPD(0x0C04E1A2u, 1);  /* 0C04E1A0 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x0u, r1); UPD(0x0C04E1A4u, 1);  /* 0C04E1A2 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r1); UPD(0x0C04E1A6u, 1);  /* 0C04E1A4 mov.l Rm,@(disp,Rn) */
	r0 = 0xC04EAA4u; UPD(0x0C04E1A8u, 1);  /* 0C04E1A6 mov.l @(disp,pc),Rn */
	IF(0x0C04E1A8u); { u32 t_ = r0; PR = 0x0C04E1ACu; r4 = R32(r9 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C04EAA4, 0x0C04EAA4u, 0x0C04E1ACu); }  /* 0C04E1A8 jsr @Rn */
L_0C04E1AC: BLKS(0x0C04E1ACu);
	r1 = R32(r12 + 0x10u); UPD(0x0C04E1AEu, 1);  /* 0C04E1AC mov.l @(disp,Rm),Rn */
	r0 = 0x4u; UPD(0x0C04E1B0u, 1);  /* 0C04E1AE mov.l @(disp,pc),Rn */
	T = r1 == r0;  /* 0C04E1B0 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04E1B4u); ; /* slot nop */ if (c_) { UPD(0x0C04E1C6u, 4); goto L_0C04E1C6; } goto L_0C04E1B6; }  /* 0C04E1B2 bf/s */
L_0C04E1B6: BLKS(0x0C04E1B6u);
	r10 = R32(r12 + 0x4u); UPD(0x0C04E1B8u, 2);  /* 0C04E1B6 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x10u, r10); UPD(0x0C04E1BAu, 1);  /* 0C04E1B8 mov.l Rm,@(disp,Rn) */
	r10 = R32(r12 + 0x8u); UPD(0x0C04E1BCu, 1);  /* 0C04E1BA mov.l @(disp,Rm),Rn */
	W32(r9 + 0x14u, r10); UPD(0x0C04E1BEu, 1);  /* 0C04E1BC mov.l Rm,@(disp,Rn) */
	r1 = 0x0u; UPD(0x0C04E1C0u, 1);  /* 0C04E1BE mov.l @(disp,pc),Rn */
	W32(r9 + 0x2Cu, r1); UPD(0x0C04E1C2u, 1);  /* 0C04E1C0 mov.l Rm,@(disp,Rn) */
	r1 = 0x1u; UPD(0x0C04E1C4u, 1);  /* 0C04E1C2 mov.l @(disp,pc),Rn */
	W32(r9 + 0x20u, r1); UPD(0x0C04E1C6u, 1);  /* 0C04E1C4 mov.l Rm,@(disp,Rn) */
L_0C04E1C6: BLKS(0x0C04E1C6u);
	r1 = R32(r12 + 0x10u); UPD(0x0C04E1C8u, 1);  /* 0C04E1C6 mov.l @(disp,Rm),Rn */
	r0 = 0x5u; UPD(0x0C04E1CAu, 1);  /* 0C04E1C8 mov.l @(disp,pc),Rn */
	T = r1 == r0;  /* 0C04E1CA cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04E1CEu); ; /* slot nop */ if (c_) { UPD(0x0C04E1DAu, 4); goto L_0C04E1DA; } goto L_0C04E1D0; }  /* 0C04E1CC bf/s */
L_0C04E1D0: BLKS(0x0C04E1D0u);
	r1 = R32(r12 + 0xCu); UPD(0x0C04E1D2u, 2);  /* 0C04E1D0 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x30u, r1); UPD(0x0C04E1D4u, 1);  /* 0C04E1D2 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x34u, r1); UPD(0x0C04E1D6u, 1);  /* 0C04E1D4 mov.l Rm,@(disp,Rn) */
	r1 = 0x1u; UPD(0x0C04E1D8u, 1);  /* 0C04E1D6 mov.l @(disp,pc),Rn */
	W32(r9 + 0x2Cu, r1); UPD(0x0C04E1DAu, 1);  /* 0C04E1D8 mov.l Rm,@(disp,Rn) */
L_0C04E1DA: BLKS(0x0C04E1DAu);
	r1 = R32(r12 + 0x10u); UPD(0x0C04E1DCu, 1);  /* 0C04E1DA mov.l @(disp,Rm),Rn */
	r0 = 0x6u; UPD(0x0C04E1DEu, 1);  /* 0C04E1DC mov.l @(disp,pc),Rn */
	T = r1 == r0;  /* 0C04E1DE cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04E1E2u); ; /* slot nop */ if (c_) { UPD(0x0C04E200u, 4); goto L_0C04E200; } goto L_0C04E1E4; }  /* 0C04E1E0 bf/s */
L_0C04E1E4: BLKS(0x0C04E1E4u);
	r1 = 0x0u; UPD(0x0C04E1E6u, 2);  /* 0C04E1E4 mov.l @(disp,pc),Rn */
	W32(r9 + 0x10u, r1); UPD(0x0C04E1E8u, 1);  /* 0C04E1E6 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x0u, r1); UPD(0x0C04E1EAu, 1);  /* 0C04E1E8 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r1); UPD(0x0C04E1ECu, 1);  /* 0C04E1EA mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x20u, r1); UPD(0x0C04E1EEu, 1);  /* 0C04E1EC mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x2Cu, r1); UPD(0x0C04E1F0u, 1);  /* 0C04E1EE mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x8u, r1); UPD(0x0C04E1F2u, 1);  /* 0C04E1F0 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x4u, r1); UPD(0x0C04E1F4u, 1);  /* 0C04E1F2 mov.l Rm,@(disp,Rn) */
	r0 = 0xC04E9E8u; UPD(0x0C04E1F6u, 1);  /* 0C04E1F4 mov.l @(disp,pc),Rn */
	IF(0x0C04E1F6u); { u32 t_ = r0; PR = 0x0C04E1FAu; r4 = R32(r9 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C04E9E8, 0x0C04E9E8u, 0x0C04E1FAu); }  /* 0C04E1F6 jsr @Rn */
L_0C04E1FA: BLKS(0x0C04E1FAu);
	r0 = 0xC04EAECu; UPD(0x0C04E1FCu, 1);  /* 0C04E1FA mov.l @(disp,pc),Rn */
	IF(0x0C04E1FCu); { u32 t_ = r0; PR = 0x0C04E200u; IF(0x0C04E1FEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04EAEC, 0x0C04EAECu, 0x0C04E200u); }  /* 0C04E1FC jsr @Rn */
L_0C04E200: BLKS(0x0C04E200u);
	r5 = R32(r7 + 0x0u); UPD(0x0C04E202u, 1);  /* 0C04E200 mov.l @(disp,Rm),Rn */
	r1 = 0x1Cu; UPD(0x0C04E204u, 1);  /* 0C04E202 mov.l @(disp,pc),Rn */
	r5 += r1;  /* 0C04E204 add Rm,Rn */
	r2 = 0x1C00u; UPD(0x0C04E208u, 2);  /* 0C04E206 mov.l @(disp,pc),Rn */
	T = r5 == r2;  /* 0C04E208 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04E20Cu); ; /* slot nop */ if (c_) { UPD(0x0C04E210u, 4); goto L_0C04E210; } goto L_0C04E20E; }  /* 0C04E20A bf/s */
L_0C04E20E: BLKS(0x0C04E20Eu);
	r5 = 0x0u; UPD(0x0C04E210u, 2);  /* 0C04E20E mov.l @(disp,pc),Rn */
L_0C04E210: BLKS(0x0C04E210u);
	W32(r7 + 0x0u, r5); UPD(0x0C04E212u, 1);  /* 0C04E210 mov.l Rm,@(disp,Rn) */
L_0C04E212: BLKS(0x0C04E212u);
	r1 = 0x0u; UPD(0x0C04E214u, 1);  /* 0C04E212 mov.l @(disp,pc),Rn */
	W32(r7 + 0xCu, r1); UPD(0x0C04E216u, 1);  /* 0C04E214 mov.l Rm,@(disp,Rn) */
L_0C04E216: BLKS(0x0C04E216u);
	r13 = 0xC04DEB0u; UPD(0x0C04E218u, 1);  /* 0C04E216 mov.l @(disp,pc),Rn */
	r12 = 0x8u; UPD(0x0C04E21Au, 1);  /* 0C04E218 mov.l @(disp,pc),Rn */
L_0C04E21A: BLKS(0x0C04E21Au);
	r4 = R32(r13 + 0x1Cu); UPD(0x0C04E21Cu, 1);  /* 0C04E21A mov.l @(disp,Rm),Rn */
	r0 = R32(r13 + 0x20u); UPD(0x0C04E21Eu, 1);  /* 0C04E21C mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C04E21E tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C04E222u); ; /* slot nop */ if (c_) { UPD(0x0C04E276u, 4); goto L_0C04E276; } goto L_0C04E224; }  /* 0C04E220 bt/s */
L_0C04E224: BLKS(0x0C04E224u);
	r7 = 0x0u; UPD(0x0C04E226u, 2);  /* 0C04E224 mov.l @(disp,pc),Rn */
	W32(r13 + 0x20u, r7); UPD(0x0C04E228u, 1);  /* 0C04E226 mov.l Rm,@(disp,Rn) */
L_0C04E228: BLKS(0x0C04E228u);
	r10 = R32(r13 + 0x10u); UPD(0x0C04E22Au, 1);  /* 0C04E228 mov.l @(disp,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C04E22A tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C04E22Eu); ; /* slot nop */ if (c_) { UPD(0x0C04E260u, 4); goto L_0C04E260; } goto L_0C04E230; }  /* 0C04E22C bt/s */
L_0C04E230: BLKS(0x0C04E230u);
	r0 = R32(r13 + 0x2Cu); UPD(0x0C04E232u, 2);  /* 0C04E230 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C04E232 tst Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r13 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C04E23Cu, 4); goto L_0C04E23C; } UPD(0x0C04E238u, 1); goto L_0C04E238; }  /* 0C04E234 bf/s */
L_0C04E238: BLKS(0x0C04E238u);
	r0 = 0x0u; UPD(0x0C04E23Au, 1);  /* 0C04E238 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r10 + 0x2u); UPD(0x0C04E23Cu, 1);  /* 0C04E23A mov.w @(disp,Rm),r0 */
L_0C04E23C: BLKS(0x0C04E23Cu);
	W32(r13 + 0x18u, r0); UPD(0x0C04E23Eu, 1);  /* 0C04E23C mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)R16(r10 + 0x0u); UPD(0x0C04E240u, 1);  /* 0C04E23E mov.w @(disp,Rm),r0 */
	W32(r13 + 0x4u, r0); UPD(0x0C04E242u, 1);  /* 0C04E240 mov.l Rm,@(disp,Rn) */
	r1 = 0x4u; UPD(0x0C04E244u, 1);  /* 0C04E242 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r1;  /* 0C04E244 mulu.w Rm,Rn */
	IF(0x0C04E246u); r2 = MACL;  /* 0C04E246 sts macl,Rn */
	r3 = 0xC04E074u; UPD(0x0C04E24Au, 4);  /* 0C04E248 mov.l @(disp,pc),Rn */
	r3 = R32(r3); UPD(0x0C04E24Cu, 1);  /* 0C04E24A mov.l @Rm,Rn */
	r3 += r2;  /* 0C04E24C add Rm,Rn */
	W32(r13 + 0x24u, r3); UPD(0x0C04E250u, 2);  /* 0C04E24E mov.l Rm,@(disp,Rn) */
	r1 = R32(r3 + 0x0u); UPD(0x0C04E252u, 1);  /* 0C04E250 mov.l @(disp,Rm),Rn */
	r0 = R32(r10 + 0x4u); UPD(0x0C04E254u, 1);  /* 0C04E252 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C04E254 tst Rm,Rn */
	{ u32 c_ = T; W32(r13 + 0x28u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C04E25Cu, 4); goto L_0C04E25C; } UPD(0x0C04E25Au, 1); goto L_0C04E25A; }  /* 0C04E256 bt/s */
L_0C04E25A: BLKS(0x0C04E25Au);
	W32(r13 + 0x28u, r0); UPD(0x0C04E25Cu, 1);  /* 0C04E25A mov.l Rm,@(disp,Rn) */
L_0C04E25C: BLKS(0x0C04E25Cu);
	r0 = R32(r10 + 0x8u); UPD(0x0C04E25Eu, 1);  /* 0C04E25C mov.l @(disp,Rm),Rn */
	W32(r13 + 0xCu, r0); UPD(0x0C04E260u, 1);  /* 0C04E25E mov.l Rm,@(disp,Rn) */
L_0C04E260: BLKS(0x0C04E260u);
	r0 = R32(r13 + 0x28u); UPD(0x0C04E262u, 1);  /* 0C04E260 mov.l @(disp,Rm),Rn */
	W32(r13 + 0x0u, r0); UPD(0x0C04E264u, 1);  /* 0C04E262 mov.l Rm,@(disp,Rn) */
	r5 = R32(r13 + 0x4u); UPD(0x0C04E266u, 1);  /* 0C04E264 mov.l @(disp,Rm),Rn */
	r0 = 0xFFFFFFFFu; UPD(0x0C04E268u, 1);  /* 0C04E266 mov.l @(disp,pc),Rn */
	W32(r13 + 0x8u, r0); UPD(0x0C04E26Au, 1);  /* 0C04E268 mov.l Rm,@(disp,Rn) */
	r0 = 0xC04E8FCu; UPD(0x0C04E26Cu, 1);  /* 0C04E26A mov.l @(disp,pc),Rn */
	r7 = 0x0u; UPD(0x0C04E26Eu, 1);  /* 0C04E26C mov.l @(disp,pc),Rn */
	r8 = 0x0u; UPD(0x0C04E270u, 1);  /* 0C04E26E mov.l @(disp,pc),Rn */
	r9 = 0x0u; UPD(0x0C04E272u, 1);  /* 0C04E270 mov.l @(disp,pc),Rn */
	IF(0x0C04E272u); { u32 t_ = r0; PR = 0x0C04E276u; IF(0x0C04E274u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E8FC, 0x0C04E8FCu, 0x0C04E276u); }  /* 0C04E272 jsr @Rn */
L_0C04E276: BLKS(0x0C04E276u);
	r11 = R32(r13 + 0x0u); UPD(0x0C04E278u, 1);  /* 0C04E276 mov.l @(disp,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C04E278 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C04E27Cu); ; /* slot nop */ if (c_) { UPD(0x0C04E36Au, 4); goto L_0C04E36A; } goto L_0C04E27E; }  /* 0C04E27A bt/s */
L_0C04E27E: BLKS(0x0C04E27Eu);
	r0 = R32(r13 + 0x2Cu); UPD(0x0C04E280u, 2);  /* 0C04E27E mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C04E280 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r13 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C04E30Cu, 4); goto L_0C04E30C; } UPD(0x0C04E286u, 1); goto L_0C04E286; }  /* 0C04E282 bt/s */
L_0C04E286: BLKS(0x0C04E286u);
	T = (r0 & r0) == 0;  /* 0C04E286 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C04E28Au); r0 -= 1; T = r0 == 0; /* slot dt Rn */ if (c_) { UPD(0x0C04E2D8u, 4); goto L_0C04E2D8; } goto L_0C04E28C; }  /* 0C04E288 bt/s */
L_0C04E28C: BLKS(0x0C04E28Cu);
	{ W32(r13 + 0x30u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C04E30Cu, 4); goto L_0C04E30C; }  /* 0C04E28C bra */
L_0C04E2D8: BLKS(0x0C04E2D8u);
	r0 = R32(r13 + 0x34u); UPD(0x0C04E2DAu, 1);  /* 0C04E2D8 mov.l @(disp,Rm),Rn */
	W32(r13 + 0x30u, r0); UPD(0x0C04E2DCu, 1);  /* 0C04E2DA mov.l Rm,@(disp,Rn) */
	r1 = R32(r13 + 0x18u); UPD(0x0C04E2DEu, 1);  /* 0C04E2DC mov.l @(disp,Rm),Rn */
	IF(0x0C04E2DEu); r1 -= 1; T = r1 == 0;  /* 0C04E2DE dt Rn */
	T = (r1 & r1) == 0;  /* 0C04E2E0 tst Rm,Rn */
	{ u32 c_ = T; W32(r13 + 0x18u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C04E2EAu, 5); goto L_0C04E2EA; } UPD(0x0C04E2E6u, 1); goto L_0C04E2E6; }  /* 0C04E2E2 bt/s */
L_0C04E2E6: BLKS(0x0C04E2E6u);
	{ IF(0x0C04E2E8u); ; /* slot nop */ UPD(0x0C04E30Cu, 3); goto L_0C04E30C; }  /* 0C04E2E6 bra */
L_0C04E2EA: BLKS(0x0C04E2EAu);
	r0 = 0xC04E9E8u; UPD(0x0C04E2ECu, 1);  /* 0C04E2EA mov.l @(disp,pc),Rn */
	IF(0x0C04E2ECu); { u32 t_ = r0; PR = 0x0C04E2F0u; IF(0x0C04E2EEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E9E8, 0x0C04E9E8u, 0x0C04E2F0u); }  /* 0C04E2EC jsr @Rn */
L_0C04E2F0: BLKS(0x0C04E2F0u);
	r0 = 0xC04EAECu; UPD(0x0C04E2F2u, 1);  /* 0C04E2F0 mov.l @(disp,pc),Rn */
	IF(0x0C04E2F2u); { u32 t_ = r0; PR = 0x0C04E2F6u; IF(0x0C04E2F4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04EAEC, 0x0C04EAECu, 0x0C04E2F6u); }  /* 0C04E2F2 jsr @Rn */
L_0C04E2F6: BLKS(0x0C04E2F6u);
	r11 = 0x0u; UPD(0x0C04E2F8u, 1);  /* 0C04E2F6 mov.l @(disp,pc),Rn */
	W32(r13 + 0x8u, r11); UPD(0x0C04E2FAu, 1);  /* 0C04E2F8 mov.l Rm,@(disp,Rn) */
	W32(r13 + 0x4u, r11); UPD(0x0C04E2FCu, 1);  /* 0C04E2FA mov.l Rm,@(disp,Rn) */
	{ W32(r13 + 0x0u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C04E36Au, 3); goto L_0C04E36A; }  /* 0C04E2FC bra */
L_0C04E30C: BLKS(0x0C04E30Cu);
	r0 = 0xC04EA34u; UPD(0x0C04E30Eu, 1);  /* 0C04E30C mov.l @(disp,pc),Rn */
	IF(0x0C04E30Eu); { u32 t_ = r0; PR = 0x0C04E312u; r6 = R32(r13 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C04EA34, 0x0C04EA34u, 0x0C04E312u); }  /* 0C04E30E jsr @Rn */
L_0C04E312: BLKS(0x0C04E312u);
	IF(0x0C04E312u); r11 -= 1; T = r11 == 0;  /* 0C04E312 dt Rn */
	T = (r11 & r11) == 0;  /* 0C04E314 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04E318u); ; /* slot nop */ if (c_) { UPD(0x0C04E36Au, 5); goto L_0C04E36A; } goto L_0C04E31A; }  /* 0C04E316 bf/s */
L_0C04E31A: BLKS(0x0C04E31Au);
	r1 = 0x0u; UPD(0x0C04E31Cu, 2);  /* 0C04E31A mov.l @(disp,pc),Rn */
	r0 = R32(r13 + 0xCu); UPD(0x0C04E31Eu, 1);  /* 0C04E31C mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C04E31E tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C04E322u); ; /* slot nop */ if (c_) { UPD(0x0C04E350u, 4); goto L_0C04E350; } goto L_0C04E324; }  /* 0C04E320 bt/s */
L_0C04E324: BLKS(0x0C04E324u);
	r2 = 0x2u; UPD(0x0C04E326u, 2);  /* 0C04E324 mov.l @(disp,pc),Rn */
	T = r0 == r2;  /* 0C04E326 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r13 + 0x10u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C04E34Cu, 4); goto L_0C04E34C; } UPD(0x0C04E32Cu, 1); goto L_0C04E32C; }  /* 0C04E328 bf/s */
L_0C04E32C: BLKS(0x0C04E32Cu);
	r11 = R32(r13 + 0x28u); UPD(0x0C04E32Eu, 1);  /* 0C04E32C mov.l @(disp,Rm),Rn */
	r5 = R32(r13 + 0x4u); UPD(0x0C04E330u, 1);  /* 0C04E32E mov.l @(disp,Rm),Rn */
	r0 = 0xC04EAA4u; UPD(0x0C04E332u, 1);  /* 0C04E330 mov.l @(disp,pc),Rn */
	IF(0x0C04E332u); { u32 t_ = r0; PR = 0x0C04E336u; r6 = R32(r13 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C04EAA4, 0x0C04EAA4u, 0x0C04E336u); }  /* 0C04E332 jsr @Rn */
L_0C04E336: BLKS(0x0C04E336u);
	{ IF(0x0C04E338u); ; /* slot nop */ UPD(0x0C04E36Au, 3); goto L_0C04E36A; }  /* 0C04E336 bra */
L_0C04E34C: BLKS(0x0C04E34Cu);
	{ IF(0x0C04E34Eu); ; /* slot nop */ UPD(0x0C04E228u, 3); goto L_0C04E228; }  /* 0C04E34C bra */
L_0C04E350: BLKS(0x0C04E350u);
	W32(r13 + 0x4u, r1); UPD(0x0C04E352u, 1);  /* 0C04E350 mov.l Rm,@(disp,Rn) */
	W32(r13 + 0x8u, r1); UPD(0x0C04E354u, 1);  /* 0C04E352 mov.l Rm,@(disp,Rn) */
	r10 = R32(r13 + 0x10u); UPD(0x0C04E356u, 1);  /* 0C04E354 mov.l @(disp,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C04E356 tst Rm,Rn */
	{ u32 c_ = T; r9 = R32(r13 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C04E36Au, 4); goto L_0C04E36A; } UPD(0x0C04E35Cu, 1); goto L_0C04E35C; }  /* 0C04E358 bt/s */
L_0C04E35C: BLKS(0x0C04E35Cu);
	r10 += 0xCu;  /* 0C04E35C add #imm,Rn */
	T = r10 == r9;  /* 0C04E35E cmp/eq Rm,Rn */
	{ u32 c_ = T; W32(r13 + 0x10u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C04E368u, 5); goto L_0C04E368; } UPD(0x0C04E364u, 1); goto L_0C04E364; }  /* 0C04E360 bt/s */
L_0C04E364: BLKS(0x0C04E364u);
	{ IF(0x0C04E366u); ; /* slot nop */ UPD(0x0C04E228u, 3); goto L_0C04E228; }  /* 0C04E364 bra */
L_0C04E368: BLKS(0x0C04E368u);
	W32(r13 + 0x10u, r1); UPD(0x0C04E36Au, 1);  /* 0C04E368 mov.l Rm,@(disp,Rn) */
L_0C04E36A: BLKS(0x0C04E36Au);
	W32(r13 + 0x0u, r11); UPD(0x0C04E36Cu, 1);  /* 0C04E36A mov.l Rm,@(disp,Rn) */
	IF(0x0C04E36Cu); r12 -= 1; T = r12 == 0;  /* 0C04E36C dt Rn */
	{ u32 c_ = T; r13 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C04E376u, 4); goto L_0C04E376; } goto L_0C04E372; }  /* 0C04E36E bt/s */
L_0C04E372: BLKS(0x0C04E372u);
	{ IF(0x0C04E374u); ; /* slot nop */ UPD(0x0C04E21Au, 4); goto L_0C04E21A; }  /* 0C04E372 bra */
L_0C04E376: BLKS(0x0C04E376u);
	r0 = 0xC04E078u; UPD(0x0C04E378u, 1);  /* 0C04E376 mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C04E37Au, 1);  /* 0C04E378 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C04E37Cu, 1);  /* 0C04E37A mov.l Rm,@Rn */
	IF(0x0C04E37Cu); PR = R32(r15); r15 += 4; UPD(0x0C04E37Eu, 1);  /* 0C04E37C lds.l @Rn+,pr */
	IF(0x0C04E37Eu); { u32 t_ = PR; IF(0x0C04E380u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04E37E rts */
}

/* FUN_0c04e38c */
void f_0C04E38C(sh3_t *c)
{
	LOCALS;
L_0C04E38C: BLKS(0x0C04E38Cu);
	IF(0x0C04E38Cu); r15 -= 4; W32(r15, PR); UPD(0x0C04E38Eu, 1);  /* 0C04E38C sts.l pr,@-Rn */
	r0 = 0xC04E07Cu; UPD(0x0C04E390u, 1);  /* 0C04E38E mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C04E392u, 1);  /* 0C04E390 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C04E394u, 1);  /* 0C04E392 mov.l Rm,@Rn */
	r7 = 0xC04E8A4u; UPD(0x0C04E396u, 1);  /* 0C04E394 mov.l @(disp,pc),Rn */
	IF(0x0C04E396u); { u32 t_ = r7; PR = 0x0C04E39Au; IF(0x0C04E398u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E8A4, 0x0C04E8A4u, 0x0C04E39Au); }  /* 0C04E396 jsr @Rn */
L_0C04E39A: BLKS(0x0C04E39Au);
	r7 = 0xC04DEB0u; UPD(0x0C04E39Cu, 1);  /* 0C04E39A mov.l @(disp,pc),Rn */
	r6 = 0x8u; UPD(0x0C04E39Eu, 1);  /* 0C04E39C mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C04E3A0u, 1);  /* 0C04E39E mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C04E3A2u, 1);  /* 0C04E3A0 mov.l @(disp,pc),Rn */
L_0C04E3A2: BLKS(0x0C04E3A2u);
	W32(r7 + 0x0u, r0); UPD(0x0C04E3A4u, 1);  /* 0C04E3A2 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x4u, r0); UPD(0x0C04E3A6u, 1);  /* 0C04E3A4 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0xCu, r0); UPD(0x0C04E3A8u, 1);  /* 0C04E3A6 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x20u, r0); UPD(0x0C04E3AAu, 1);  /* 0C04E3A8 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x8u, r0); UPD(0x0C04E3ACu, 1);  /* 0C04E3AA mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x2Cu, r0); UPD(0x0C04E3AEu, 1);  /* 0C04E3AC mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x1Cu, r1); UPD(0x0C04E3B0u, 1);  /* 0C04E3AE mov.l Rm,@(disp,Rn) */
	r1 += 0x1u;  /* 0C04E3B0 add #imm,Rn */
	IF(0x0C04E3B2u); r6 -= 1; T = r6 == 0;  /* 0C04E3B2 dt Rn */
	{ u32 c_ = !T; r7 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C04E3A2u, 5); goto L_0C04E3A2; } goto L_0C04E3B8; }  /* 0C04E3B4 bf/s */
L_0C04E3B8: BLKS(0x0C04E3B8u);
	r0 = 0xC04E078u; UPD(0x0C04E3BAu, 2);  /* 0C04E3B8 mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C04E3BCu, 1);  /* 0C04E3BA mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C04E3BEu, 1);  /* 0C04E3BC mov.l Rm,@Rn */
	r0 = 0xFFFFFE00u; UPD(0x0C04E3C0u, 1);  /* 0C04E3BE mov.l @(disp,pc),Rn */
	IF(0x0C04E3C0u); c->gbr = r0;  /* 0C04E3C0 ldc Rn,gbr */
	r0 = (u32)(s32)(s8)R8(c->gbr + 0x92u); UPD(0x0C04E3C4u, 2);  /* 0C04E3C2 mov.b @(disp,gbr),r0 */
	r1 = 0xFFFFFFFEu; UPD(0x0C04E3C6u, 1);  /* 0C04E3C4 mov.l @(disp,pc),Rn */
	r0 &= r1;  /* 0C04E3C6 and Rm,Rn */
	W8(c->gbr + 0x92u, r0); UPD(0x0C04E3CAu, 2);  /* 0C04E3C8 mov.b r0,@(disp,gbr) */
	r0 = 0x20u; UPD(0x0C04E3CCu, 1);  /* 0C04E3CA mov.w @(disp,pc),Rn */
	W16(c->gbr + 0x9Cu, r0); UPD(0x0C04E3CEu, 1);  /* 0C04E3CC mov.w r0,@(disp,gbr) */
	r0 = 0x18FFu; UPD(0x0C04E3D0u, 1);  /* 0C04E3CE mov.l @(disp,pc),Rn */
	W32(c->gbr + 0x94u, r0); UPD(0x0C04E3D2u, 1);  /* 0C04E3D0 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0x98u, r0); UPD(0x0C04E3D4u, 1);  /* 0C04E3D2 mov.l r0,@(disp,gbr) */
	r0 = (u32)(s32)(s8)R8(c->gbr + 0x92u); UPD(0x0C04E3D6u, 1);  /* 0C04E3D4 mov.b @(disp,gbr),r0 */
	r0 |= 0x1u;  /* 0C04E3D6 or #imm,r0 */
	W8(c->gbr + 0x92u, r0); UPD(0x0C04E3DAu, 2);  /* 0C04E3D8 mov.b r0,@(disp,gbr) */
	r3 = 0xFFFFFEE2u; UPD(0x0C04E3DCu, 1);  /* 0C04E3DA mov.l @(disp,pc),Rn */
	r2 = 0x6000u; UPD(0x0C04E3DEu, 1);  /* 0C04E3DC mov.w @(disp,pc),Rn */
	r1 = 0xFFFF0FFFu; UPD(0x0C04E3E0u, 1);  /* 0C04E3DE mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C04E3E2u, 1);  /* 0C04E3E0 mov.w @Rm,Rn */
	r0 &= r1;  /* 0C04E3E2 and Rm,Rn */
	r0 |= r2;  /* 0C04E3E4 or Rm,Rn */
	W16(r3, r0); UPD(0x0C04E3E8u, 3);  /* 0C04E3E6 mov.w Rm,@Rn */
	r0 = 0xC0025B0u; UPD(0x0C04E3EAu, 1);  /* 0C04E3E8 mov.l @(disp,pc),Rn */
	r1 = 0xC04E080u; UPD(0x0C04E3ECu, 1);  /* 0C04E3EA mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C04E3EEu, 1);  /* 0C04E3EC mov.l Rm,@Rn */
	r1 = 0xC04E070u; UPD(0x0C04E3F0u, 1);  /* 0C04E3EE mov.l @(disp,pc),Rn */
	r3 = 0xC04E074u; UPD(0x0C04E3F2u, 1);  /* 0C04E3F0 mov.l @(disp,pc),Rn */
	r2 = 0x0u; UPD(0x0C04E3F4u, 1);  /* 0C04E3F2 mov.l @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C04E3F6u, 1);  /* 0C04E3F4 mov.l Rm,@Rn */
	W32(r3, r3); UPD(0x0C04E3F8u, 1);  /* 0C04E3F6 mov.l Rm,@Rn */
	r0 = 0xC04DEA0u; UPD(0x0C04E3FAu, 1);  /* 0C04E3F8 mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C04E3FCu, 1);  /* 0C04E3FA mov.l @(disp,pc),Rn */
	W32(r0 + 0x0u, r1); UPD(0x0C04E3FEu, 1);  /* 0C04E3FC mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x4u, r1); UPD(0x0C04E400u, 1);  /* 0C04E3FE mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x8u, r1); UPD(0x0C04E402u, 1);  /* 0C04E400 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0xCu, r1); UPD(0x0C04E404u, 1);  /* 0C04E402 mov.l Rm,@(disp,Rn) */
	r0 = 0xC04E07Cu; UPD(0x0C04E406u, 1);  /* 0C04E404 mov.l @(disp,pc),Rn */
	r1 = 0x1u; UPD(0x0C04E408u, 1);  /* 0C04E406 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C04E40Au, 1);  /* 0C04E408 mov.l Rm,@Rn */
	IF(0x0C04E40Au); PR = R32(r15); r15 += 4; UPD(0x0C04E40Cu, 1);  /* 0C04E40A lds.l @Rn+,pr */
	IF(0x0C04E40Cu); { u32 t_ = PR; IF(0x0C04E40Eu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04E40C rts */
}


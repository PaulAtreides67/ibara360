#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C099500(sh3_t *c)
{
	LOCALS;
L_0C099500: BLKS(0x0C099500u);
	r2 = 0xB4u; UPD(0x0C099502u, 1);  /* 0C099500 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C099502 exts.w Rm,Rn */
	IF(0x0C099504u); MACL = r1 * r2;  /* 0C099504 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C099508u, 4);  /* 0C099506 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09950Au, 1);  /* 0C099508 mov.l Rm,@-Rn */
	IF(0x0C09950Au); r3 = MACL;  /* 0C09950A sts macl,Rn */
	r3 += r0;  /* 0C09950C add Rm,Rn */
	r7 = R32(r3 + 0x24u); UPD(0x0C099510u, 3);  /* 0C09950E mov.l @(disp,Rm),Rn */
	r0 = 0xEFFFFFu; UPD(0x0C099512u, 1);  /* 0C099510 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r0;  /* 0C099512 cmp/gt Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C099520u, 4); goto L_0C099520; } goto L_0C099518; }  /* 0C099514 bt/s */
L_0C099518: BLKS(0x0C099518u);
	r4 = R32(r3 + 0x2Cu); UPD(0x0C09951Au, 2);  /* 0C099518 mov.l @(disp,Rm),Rn */
	r5 = 0x400u; UPD(0x0C09951Cu, 1);  /* 0C09951A mov.w @(disp,pc),Rn */
	r4 += r5;  /* 0C09951C add Rm,Rn */
	W32(r3 + 0x2Cu, r4); UPD(0x0C099520u, 2);  /* 0C09951E mov.l Rm,@(disp,Rn) */
L_0C099520: BLKS(0x0C099520u);
	r6 = 0x1180000u; UPD(0x0C099522u, 1);  /* 0C099520 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r6;  /* 0C099522 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09952Eu, 4); goto L_0C09952E; }  /* 0C099524 bf */
L_0C099526: BLKS(0x0C099526u);
	r7 = R32(r3 + 0x2Cu); UPD(0x0C099528u, 1);  /* 0C099526 mov.l @(disp,Rm),Rn */
	r0 = 0xFFFFFC00u; UPD(0x0C09952Au, 1);  /* 0C099528 mov.w @(disp,pc),Rn */
	r7 += r0;  /* 0C09952A add Rm,Rn */
	W32(r3 + 0x2Cu, r7); UPD(0x0C09952Eu, 2);  /* 0C09952C mov.l Rm,@(disp,Rn) */
L_0C09952E: BLKS(0x0C09952Eu);
	r7 = R32(r3 + 0x28u); UPD(0x0C099530u, 1);  /* 0C09952E mov.l @(disp,Rm),Rn */
	r2 = 0x1B7FFFFu; UPD(0x0C099532u, 1);  /* 0C099530 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r2;  /* 0C099532 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C09953Eu, 4); goto L_0C09953E; }  /* 0C099534 bt */
L_0C099536: BLKS(0x0C099536u);
	r4 = R32(r3 + 0x30u); UPD(0x0C099538u, 1);  /* 0C099536 mov.l @(disp,Rm),Rn */
	r1 = 0x400u; UPD(0x0C09953Au, 1);  /* 0C099538 mov.w @(disp,pc),Rn */
	r4 += r1;  /* 0C09953A add Rm,Rn */
	W32(r3 + 0x30u, r4); UPD(0x0C09953Eu, 2);  /* 0C09953C mov.l Rm,@(disp,Rn) */
L_0C09953E: BLKS(0x0C09953Eu);
	r5 = 0x2480000u; UPD(0x0C099540u, 1);  /* 0C09953E mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r5;  /* 0C099540 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09954Cu, 4); goto L_0C09954C; }  /* 0C099542 bf */
L_0C099544: BLKS(0x0C099544u);
	r6 = R32(r3 + 0x30u); UPD(0x0C099546u, 1);  /* 0C099544 mov.l @(disp,Rm),Rn */
	r7 = 0xFFFFFC00u; UPD(0x0C099548u, 1);  /* 0C099546 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C099548 add Rm,Rn */
	W32(r3 + 0x30u, r6); UPD(0x0C09954Cu, 2);  /* 0C09954A mov.l Rm,@(disp,Rn) */
L_0C09954C: BLKS(0x0C09954Cu);
	r6 = 0x9Au; UPD(0x0C09954Eu, 1);  /* 0C09954C mov.w @(disp,pc),Rn */
	r7 = r3;  /* 0C09954E mov Rm,Rn */
	r7 += 0x50u;  /* 0C099550 add #imm,Rn */
	r6 += r3;  /* 0C099552 add Rm,Rn */
	r5 = R32(r7); UPD(0x0C099556u, 4);  /* 0C099554 mov.l @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C099558u, 1);  /* 0C099556 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C099558 add #imm,Rn */
	r3 = r0 & 0xFF;  /* 0C09955A extu.b Rm,Rn */
	W32(r7, r5); UPD(0x0C09955Eu, 3);  /* 0C09955C mov.l Rm,@Rn */
	r0 = r3;  /* 0C09955E mov Rm,Rn */
	r2 = 0xC1C7144u; UPD(0x0C099562u, 2);  /* 0C099560 mov.l @(disp,pc),Rn */
	IF(0x0C099562u); r0 <<= 2;  /* 0C099562 shll2 Rn */
	IF(0x0C099564u); r4 = R32(r0 + r2); UPD(0x0C099566u, 2);  /* 0C099564 mov.l @(r0,Rm),Rn */
	T = r5 == r4;  /* 0C099566 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C099570u, 4); goto L_0C099570; }  /* 0C099568 bt */
L_0C09956A: BLKS(0x0C09956Au);
	r15 = r14;  /* 0C09956A mov Rm,Rn */
	IF(0x0C09956Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C09956C rts */
L_0C099570: BLKS(0x0C099570u);
	r5 = 0xC1C713Cu; UPD(0x0C099572u, 1);  /* 0C099570 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C099572 mov Rm,Rn */
	IF(0x0C099574u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C099576u, 2);  /* 0C099574 mov.b @(r0,Rm),Rn */
	r3 = 0x0u;  /* 0C099576 mov #imm,Rn */
	W8(r6, r4); UPD(0x0C09957Au, 2);  /* 0C099578 mov.b Rm,@Rn */
	{ W32(r7, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C09956Au, 3); goto L_0C09956A; }  /* 0C09957A bra */
}

void blk_f_0C0995B0(sh3_t *c)
{
	LOCALS;
L_0C0995B0: BLKS(0x0C0995B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0995B2u, 1);  /* 0C0995B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0995B4u, 1);  /* 0C0995B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0995B6u, 1);  /* 0C0995B4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0995B8u, 1);  /* 0C0995B6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0995BAu, 1);  /* 0C0995B8 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0995BCu, 1);  /* 0C0995BA mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0995BC exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0995C0u, 2);  /* 0C0995BE mov.l Rm,@-Rn */
	IF(0x0C0995C0u); MACL = r12 * r3;  /* 0C0995C0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0995C4u, 3);  /* 0C0995C2 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0995C6u, 1);  /* 0C0995C4 mov.l @(disp,pc),Rn */
	IF(0x0C0995C6u); r2 = MACL;  /* 0C0995C6 sts macl,Rn */
	IF(0x0C0995C8u); r15 -= 4; W32(r15, PR); UPD(0x0C0995CAu, 2);  /* 0C0995C8 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0995CA add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0995CEu, 2);  /* 0C0995CC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0995CE add #imm,Rn */
	r0 = 0x67u;  /* 0C0995D0 mov #imm,Rn */
	r8 = 0x13000000u; UPD(0x0C0995D4u, 3);  /* 0C0995D2 mov.l @(disp,pc),Rn */
	T = r2 > r0;  /* 0C0995D4 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0996C0u, 4); goto L_0C0996C0; } goto L_0C0995DA; }  /* 0C0995D6 bt/s */
L_0C0995DA: BLKS(0x0C0995DAu);
	r0 = 0xC0995F0u;  /* 0C0995DA mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0995DC add Rm,Rn */
	IF(0x0C0995DEu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0995E0u, 4);  /* 0C0995DE mov.w @(r0,Rm),Rn */
	IF(0x0C0995E0u); { u32 tv_ = (r4 + 0x0C0995E4u); u32 t_ = PHYS(tv_); IF(0x0C0995E2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0995E0 braf Rn */
L_0C0996C0: BLKS(0x0C0996C0u);
	r8 = 0xC0A8CA0u; UPD(0x0C0996C2u, 1);  /* 0C0996C0 mov.l @(disp,pc),Rn */
	IF(0x0C0996C2u); { u32 t_ = r8; PR = 0x0C0996C6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0996C6u); }  /* 0C0996C2 jsr @Rn */
L_0C0996C6: BLKS(0x0C0996C6u);
	IF(0x0C0996C6u); T = (s32)r0 >= 0;  /* 0C0996C6 cmp/pz Rn */
	{ u32 c_ = !T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C099730u, 4); goto L_0C099730; } goto L_0C0996CC; }  /* 0C0996C8 bf/s */
L_0C0996CC: BLKS(0x0C0996CCu);
	r9 = 0xB4u; UPD(0x0C0996CEu, 2);  /* 0C0996CC mov.w @(disp,pc),Rn */
	IF(0x0C0996CEu); MACL = r12 * r9;  /* 0C0996CE mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0996D2u, 3);  /* 0C0996D0 mov.l @(disp,pc),Rn */
	IF(0x0C0996D2u); r0 = MACL;  /* 0C0996D2 sts macl,Rn */
	IF(0x0C0996D4u); MACL = r10 * r9;  /* 0C0996D4 mul.l Rm,Rn */
	r0 += r6;  /* 0C0996D6 add Rm,Rn */
	r2 = 0xA8u; UPD(0x0C0996DAu, 5);  /* 0C0996D8 mov.w @(disp,pc),Rn */
	IF(0x0C0996DAu); r9 = MACL;  /* 0C0996DA sts macl,Rn */
	r9 += r6;  /* 0C0996DC add Rm,Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C0996E0u, 3);  /* 0C0996DE mov.l @(disp,Rm),Rn */
	r10 = r0;  /* 0C0996E0 mov Rm,Rn */
	r5 = R32(r0 + 0x2Cu); UPD(0x0C0996E4u, 2);  /* 0C0996E2 mov.l @(disp,Rm),Rn */
	r10 += r2;  /* 0C0996E4 add Rm,Rn */
	r8 += r5;  /* 0C0996E6 add Rm,Rn */
	r2 += r9;  /* 0C0996E8 add Rm,Rn */
	r13 = 0xAFu; UPD(0x0C0996ECu, 4);  /* 0C0996EA mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0996EC add #imm,Rn */
	r5 = R32(r0); UPD(0x0C0996F0u, 2);  /* 0C0996EE mov.l @Rm,Rn */
	r10 += 0x1u;  /* 0C0996F0 add #imm,Rn */
	r6 = R32(r9); UPD(0x0C0996F4u, 2);  /* 0C0996F2 mov.l @Rm,Rn */
	r7 = 0xFFFFFEFFu; UPD(0x0C0996F6u, 1);  /* 0C0996F4 mov.w @(disp,pc),Rn */
	r1 = 0x100u; UPD(0x0C0996F8u, 1);  /* 0C0996F6 mov.w @(disp,pc),Rn */
	r5 &= r7;  /* 0C0996F8 and Rm,Rn */
	r3 = R32(r9 + 0x28u); UPD(0x0C0996FCu, 2);  /* 0C0996FA mov.l @(disp,Rm),Rn */
	r6 &= r1;  /* 0C0996FC and Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C099700u, 2);  /* 0C0996FE mov.b @Rm,Rn */
	r5 |= r6;  /* 0C099700 or Rm,Rn */
	r4 = R32(r0 + 0x30u); UPD(0x0C099704u, 2);  /* 0C099702 mov.l @(disp,Rm),Rn */
	IF(0x0C099704u); r12 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C099706u, 1);  /* 0C099704 mov.b @(r0,Rm),Rn */
	r3 += r4;  /* 0C099706 add Rm,Rn */
	r11 += r12;  /* 0C099708 add Rm,Rn */
	W32(r0 + 0x24u, r8); UPD(0x0C09970Cu, 3);  /* 0C09970A mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x28u, r3); UPD(0x0C09970Eu, 1);  /* 0C09970C mov.l Rm,@(disp,Rn) */
	W8(r10, r11); UPD(0x0C099710u, 1);  /* 0C09970E mov.b Rm,@Rn */
	W32(r0, r5); UPD(0x0C099712u, 1);  /* 0C099710 mov.l Rm,@Rn */
L_0C099712: BLKS(0x0C099712u);
	r14 += 0x8u;  /* 0C099712 add #imm,Rn */
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 3);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099730: BLKS(0x0C099730u);
	r0 = 0xB4u; UPD(0x0C099732u, 1);  /* 0C099730 mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C099732 mov #imm,Rn */
	IF(0x0C099734u); MACL = r12 * r0;  /* 0C099734 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C099738u, 4);  /* 0C099736 mov.l @(disp,pc),Rn */
	IF(0x0C099738u); r0 = MACL;  /* 0C099738 sts macl,Rn */
	{ IF(0x0C09973Cu); W32(r0 + r4, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C099712u, 4); goto L_0C099712; }  /* 0C09973A bra */
}

void blk_f_0C099714(sh3_t *c)
{
	LOCALS;
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
}

void blk_f_0C099740(sh3_t *c)
{
	LOCALS;
	goto L_0C099740;
L_0C099712: BLKS(0x0C099712u);
	r14 += 0x8u;  /* 0C099712 add #imm,Rn */
	UPD(0x0C099714u, 1);
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099740: BLKS(0x0C099740u);
	r7 = 0xB4u; UPD(0x0C099742u, 1);  /* 0C099740 mov.w @(disp,pc),Rn */
	IF(0x0C099742u); MACL = r12 * r7;  /* 0C099742 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C099746u, 3);  /* 0C099744 mov.l @(disp,pc),Rn */
	IF(0x0C099746u); r10 = MACL;  /* 0C099746 sts macl,Rn */
	r10 += r0;  /* 0C099748 add Rm,Rn */
	r10 += 0x3Cu;  /* 0C09974A add #imm,Rn */
	r8 = (u32)(s32)(s16)R16(r10); UPD(0x0C09974Eu, 4);  /* 0C09974C mov.w @Rm,Rn */
	r5 = 0xC3CC310u; UPD(0x0C099750u, 1);  /* 0C09974E mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFC4u;  /* 0C099750 add #imm,Rn */
	T = (r8 & r8) == 0;  /* 0C099752 tst Rm,Rn */
	{ u32 c_ = !T; W32(r5, r8); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0997D0u, 5); goto L_0C0997D0; } UPD(0x0C099758u, 1); goto L_0C099758; }  /* 0C099754 bf/s */
L_0C099758: BLKS(0x0C099758u);
	r3 = R32(r10); UPD(0x0C09975Au, 1);  /* 0C099758 mov.l @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C09975A tst Rm,Rn */
	if (T) { UPD(0x0C0997C0u, 4); goto L_0C0997C0; }  /* 0C09975C bt */
L_0C09975E: BLKS(0x0C09975Eu);
	r13 = 0xC0A9CB0u; UPD(0x0C099760u, 1);  /* 0C09975E mov.l @(disp,pc),Rn */
	IF(0x0C099760u); { u32 t_ = r13; PR = 0x0C099764u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C099764u); }  /* 0C099760 jsr @Rn */
L_0C099764: BLKS(0x0C099764u);
	r0 = 0x98u; UPD(0x0C099766u, 1);  /* 0C099764 mov.w @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C099766 mov #imm,Rn */
	IF(0x0C099768u); r9 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09976Au, 2);  /* 0C099768 mov.b @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C09976A add #imm,Rn */
	r2 = r9 & 0xFF;  /* 0C09976C extu.b Rm,Rn */
	T = r2 > r4;  /* 0C09976E cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C099772u); W8(r0 + r10, r9); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C099712u, 6); goto L_0C099712; } UPD(0x0C099774u, 1); goto L_0C099774; }  /* 0C099770 bf/s */
L_0C099774: BLKS(0x0C099774u);
	r13 = 0xC062780u; UPD(0x0C099776u, 1);  /* 0C099774 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C099776 add #imm,Rn */
	IF(0x0C099778u); W8(r0 + r10, r8); UPD(0x0C09977Au, 2);  /* 0C099778 mov.b Rm,@(r0,Rn) */
	r11 = 0xC1C7384u; UPD(0x0C09977Cu, 1);  /* 0C09977A mov.l @(disp,pc),Rn */
	IF(0x0C09977Cu); { u32 t_ = r13; PR = 0x0C099780u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C099780u); }  /* 0C09977C jsr @Rn */
L_0C099780: BLKS(0x0C099780u);
	IF(0x0C099780u); r0 <<= 2;  /* 0C099780 shll2 Rn */
	r11 += r0;  /* 0C099782 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C099786u, 3);  /* 0C099784 mov.w @(disp,pc),Rn */
	IF(0x0C099786u); r9 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C099788u, 1);  /* 0C099786 mov.b @(r0,Rm),Rn */
	r2 = r9 & 0xFF;  /* 0C099788 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C09978Cu, 2);  /* 0C09978A mov.l Rm,@Rn */
	r0 = r10;  /* 0C09978C mov Rm,Rn */
	r4 = 0xA9u; UPD(0x0C099790u, 2);  /* 0C09978E mov.w @(disp,pc),Rn */
	IF(0x0C099790u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C099792u, 1);  /* 0C099790 mov.b @(r0,Rm),Rn */
	r0 = 0xFFFA0000u; UPD(0x0C099794u, 1);  /* 0C099792 mov.l @(disp,pc),Rn */
	r7 = r3 & 0xFF;  /* 0C099794 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C099798u, 2);  /* 0C099796 mov.l Rm,@(disp,Rn) */
	r4 = 0x2000u; UPD(0x0C09979Au, 1);  /* 0C099798 mov.w @(disp,pc),Rn */
	IF(0x0C09979Au); { u32 t_ = r13; PR = 0x0C09979Eu; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLD(t_, 0x0C09979Eu); }  /* 0C09979A jsr @Rn */
L_0C09979E: BLKS(0x0C09979Eu);
	r5 = 0xFFFFF000u; UPD(0x0C0997A0u, 1);  /* 0C09979E mov.w @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C0997A0 mov #imm,Rn */
	r0 += r5;  /* 0C0997A2 add Rm,Rn */
	IF(0x0C0997A4u); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0997A4 shld Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0997A8u, 4);  /* 0C0997A6 mov.l Rm,@(disp,Rn) */
	r12 = 0xC0BE860u; UPD(0x0C0997AAu, 1);  /* 0C0997A8 mov.l @(disp,pc),Rn */
	r4 = R32(r10); UPD(0x0C0997ACu, 1);  /* 0C0997AA mov.l @Rm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C0997AEu, 1);  /* 0C0997AC mov.l @(disp,Rm),Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C0997B0u, 1);  /* 0C0997AE mov.l @(disp,Rm),Rn */
	r8 = 0xC2B07FCu; UPD(0x0C0997B2u, 1);  /* 0C0997B0 mov.l @(disp,pc),Rn */
	r10 = 0x10u;  /* 0C0997B2 mov #imm,Rn */
	IF(0x0C0997B4u); { u32 t_ = r12; PR = 0x0C0997B8u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BE860, 0x0C0BE860u, 0x0C0997B8u); }  /* 0C0997B4 jsr @Rn */
L_0C0997B8: BLKS(0x0C0997B8u);
	W32(r8, r10); UPD(0x0C0997BAu, 1);  /* 0C0997B8 mov.l Rm,@Rn */
	r15 += 0x10u;  /* 0C0997BA add #imm,Rn */
	UPD(0x0C0997BCu, 1);
L_0C0997BC: BLKS(0x0C0997BCu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C0997BC bra */
L_0C0997C0: BLKS(0x0C0997C0u);
	r11 = 0xC069E60u; UPD(0x0C0997C2u, 1);  /* 0C0997C0 mov.l @(disp,pc),Rn */
	IF(0x0C0997C2u); { u32 t_ = r11; PR = 0x0C0997C6u; r4 = R32(r10 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069E60, 0x0C069E60u, 0x0C0997C6u); }  /* 0C0997C2 jsr @Rn */
L_0C0997C6: BLKS(0x0C0997C6u);
	{ IF(0x0C0997C8u); ; /* slot nop */ UPD(0x0C09975Eu, 3); goto L_0C09975E; }  /* 0C0997C6 bra */
L_0C0997D0: BLKS(0x0C0997D0u);
	r11 = R32(r10 + 0x24u); UPD(0x0C0997D2u, 1);  /* 0C0997D0 mov.l @(disp,Rm),Rn */
	r13 = R32(r10 + 0x2Cu); UPD(0x0C0997D4u, 1);  /* 0C0997D2 mov.l @(disp,Rm),Rn */
	r6 = R32(r10 + 0x28u); UPD(0x0C0997D6u, 1);  /* 0C0997D4 mov.l @(disp,Rm),Rn */
	r11 += r13;  /* 0C0997D6 add Rm,Rn */
	r5 = R32(r10 + 0x30u); UPD(0x0C0997DAu, 2);  /* 0C0997D8 mov.l @(disp,Rm),Rn */
	r1 = (r11 >> 16) | (r11 << 16);  /* 0C0997DA swap.w Rm,Rn */
	r8 = 0xFFFFFF60u; UPD(0x0C0997DEu, 2);  /* 0C0997DC mov.w @(disp,pc),Rn */
	r6 += r5;  /* 0C0997DE add Rm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C0997E0 exts.w Rm,Rn */
	r3 += r8;  /* 0C0997E2 add Rm,Rn */
	W32(r10 + 0x24u, r11); UPD(0x0C0997E6u, 4);  /* 0C0997E4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0997E6u); T = (s32)r3 >= 0;  /* 0C0997E6 cmp/pz Rn */
	{ u32 c_ = T; W32(r10 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0997F0u, 4); goto L_0C0997F0; } UPD(0x0C0997ECu, 1); goto L_0C0997EC; }  /* 0C0997E8 bt/s */
L_0C0997EC: BLKS(0x0C0997ECu);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C099A20u, 3); goto L_0C099A20; }  /* 0C0997EC bra */
L_0C0997F0: BLKS(0x0C0997F0u);
	r0 = 0x120u; UPD(0x0C0997F2u, 1);  /* 0C0997F0 mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r0;  /* 0C0997F2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r11 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C099810u, 4); goto L_0C099810; } goto L_0C0997F8; }  /* 0C0997F4 bf/s */
L_0C0997F8: BLKS(0x0C0997F8u);
	W32(r10, r11); UPD(0x0C0997FAu, 2);  /* 0C0997F8 mov.l Rm,@Rn */
	r3 = 0x4u;  /* 0C0997FA mov #imm,Rn */
	r9 = 0xC3C4165u; UPD(0x0C0997FEu, 2);  /* 0C0997FC mov.l @(disp,pc),Rn */
	r4 = 0xC3C4164u; UPD(0x0C099800u, 1);  /* 0C0997FE mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s8)R8(r9); UPD(0x0C099802u, 1);  /* 0C099800 mov.b @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C099804u, 1);  /* 0C099802 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C099804 add #imm,Rn */
	r7 = 0xC175064u; UPD(0x0C099808u, 2);  /* 0C099806 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C099808 add #imm,Rn */
	W8(r9, r8); UPD(0x0C09980Cu, 2);  /* 0C09980A mov.b Rm,@Rn */
	W8(r4, r2); UPD(0x0C09980Eu, 1);  /* 0C09980C mov.b Rm,@Rn */
	W32(r7, r3); UPD(0x0C099810u, 1);  /* 0C09980E mov.l Rm,@Rn */
L_0C099810: BLKS(0x0C099810u);
	r5 = 0x9Fu; UPD(0x0C099812u, 1);  /* 0C099810 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C099812 mov Rm,Rn */
	IF(0x0C099814u); r6 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C099816u, 2);  /* 0C099814 mov.b @(r0,Rm),Rn */
	r10 = 0x5u;  /* 0C099816 mov #imm,Rn */
	r4 = r6 & 0xFF;  /* 0C099818 extu.b Rm,Rn */
	T = r4 > r10;  /* 0C09981A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0997BCu, 6); goto L_0C0997BC; }  /* 0C09981C bt */
L_0C09981E: BLKS(0x0C09981Eu);
	r0 = 0xC099878u;  /* 0C09981E mova @(disp,pc),r0 */
	r4 += r4;  /* 0C099820 add Rm,Rn */
	IF(0x0C099822u); r13 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C099824u, 3);  /* 0C099822 mov.w @(r0,Rm),Rn */
	IF(0x0C099824u); { u32 tv_ = (r13 + 0x0C099828u); u32 t_ = PHYS(tv_); IF(0x0C099826u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099824 braf Rn */
L_0C099A20: BLKS(0x0C099A20u);
	{ IF(0x0C099A22u); ; /* slot nop */ UPD(0x0C0997F0u, 3); goto L_0C0997F0; }  /* 0C099A20 bra */
}

void blk_f_0C099890(sh3_t *c)
{
	LOCALS;
	goto L_0C099890;
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C0997BC: BLKS(0x0C0997BCu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C0997BC bra */
L_0C099890: BLKS(0x0C099890u);
	r7 = 0xB4u; UPD(0x0C099892u, 1);  /* 0C099890 mov.w @(disp,pc),Rn */
	IF(0x0C099892u); MACL = r12 * r7;  /* 0C099892 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C099896u, 3);  /* 0C099894 mov.l @(disp,pc),Rn */
	IF(0x0C099896u); r3 = MACL;  /* 0C099896 sts macl,Rn */
	r3 += r0;  /* 0C099898 add Rm,Rn */
	r1 = R32(r3 + 0x24u); UPD(0x0C09989Cu, 3);  /* 0C09989A mov.l @(disp,Rm),Rn */
	r12 = 0x400000u; UPD(0x0C09989Eu, 1);  /* 0C09989C mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r12;  /* 0C09989E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0997BCu, 4); goto L_0C0997BC; }  /* 0C0998A0 bt */
L_0C0998A2: BLKS(0x0C0998A2u);
	r1 = R32(r3); UPD(0x0C0998A4u, 1);  /* 0C0998A2 mov.l @Rm,Rn */
	r4 = 0xFFFFFFEFu;  /* 0C0998A4 mov #imm,Rn */
	r1 &= r4;  /* 0C0998A6 and Rm,Rn */
	W32(r3, r1); UPD(0x0C0998AAu, 3);  /* 0C0998A8 mov.l Rm,@Rn */
	r0 = 0x9Fu; UPD(0x0C0998ACu, 1);  /* 0C0998AA mov.w @(disp,pc),Rn */
	IF(0x0C0998ACu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0998AEu, 1);  /* 0C0998AC mov.b @(r0,Rm),Rn */
	r2 += 0x1u;  /* 0C0998AE add #imm,Rn */
	IF(0x0C0998B0u); W8(r0 + r3, r2); UPD(0x0C0998B2u, 2);  /* 0C0998B0 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C0998B2 bra */
}

void blk_f_0C0998C0(sh3_t *c)
{
	LOCALS;
	goto L_0C0998C0;
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C0998B2: BLKS(0x0C0998B2u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C0998B2 bra */
L_0C0998C0: BLKS(0x0C0998C0u);
	r3 = 0xB4u; UPD(0x0C0998C2u, 1);  /* 0C0998C0 mov.w @(disp,pc),Rn */
	IF(0x0C0998C2u); MACL = r12 * r3;  /* 0C0998C2 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0998C6u, 3);  /* 0C0998C4 mov.l @(disp,pc),Rn */
	IF(0x0C0998C6u); r3 = MACL;  /* 0C0998C6 sts macl,Rn */
	r3 += r11;  /* 0C0998C8 add Rm,Rn */
	r8 = R32(r3 + 0x2Cu); UPD(0x0C0998CCu, 3);  /* 0C0998CA mov.l @(disp,Rm),Rn */
	r2 = 0x400u; UPD(0x0C0998CEu, 1);  /* 0C0998CC mov.w @(disp,pc),Rn */
	r9 = 0x10000u; UPD(0x0C0998D0u, 1);  /* 0C0998CE mov.l @(disp,pc),Rn */
	r8 += r2;  /* 0C0998D0 add Rm,Rn */
	T = r8 == r9;  /* 0C0998D2 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r3 + 0x2Cu, r8); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0998B2u, 5); goto L_0C0998B2; } UPD(0x0C0998D8u, 1); goto L_0C0998D8; }  /* 0C0998D4 bf/s */
L_0C0998D8: BLKS(0x0C0998D8u);
	r0 = 0x9Fu; UPD(0x0C0998DAu, 1);  /* 0C0998D8 mov.w @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C0998DA mov #imm,Rn */
	IF(0x0C0998DCu); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0998DEu, 2);  /* 0C0998DC mov.b @(r0,Rm),Rn */
	r7 += 0x1u;  /* 0C0998DE add #imm,Rn */
	IF(0x0C0998E0u); W8(r0 + r3, r7); UPD(0x0C0998E2u, 2);  /* 0C0998E0 mov.b Rm,@(r0,Rn) */
	r3 += 0x3Cu;  /* 0C0998E2 add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r3); UPD(0x0C0998E6u, 2);  /* 0C0998E4 mov.w @Rm,Rn */
	r12 = 0xC3CA700u; UPD(0x0C0998E8u, 1);  /* 0C0998E6 mov.l @(disp,pc),Rn */
	r5 = 0xC3CC310u; UPD(0x0C0998EAu, 1);  /* 0C0998E8 mov.l @(disp,pc),Rn */
	r10 = 0xC175064u; UPD(0x0C0998ECu, 1);  /* 0C0998EA mov.l @(disp,pc),Rn */
	W32(r12, r13); UPD(0x0C0998EEu, 1);  /* 0C0998EC mov.l Rm,@Rn */
	W32(r5, r13); UPD(0x0C0998F0u, 1);  /* 0C0998EE mov.l Rm,@Rn */
	W32(r10, r6); UPD(0x0C0998F2u, 1);  /* 0C0998F0 mov.l Rm,@Rn */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C0998F2 bra */
}

void blk_f_0C099900(sh3_t *c)
{
	LOCALS;
	goto L_0C099900;
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C0998A8: BLKS(0x0C0998A8u);
	W32(r3, r1); UPD(0x0C0998AAu, 1);  /* 0C0998A8 mov.l Rm,@Rn */
	r0 = 0x9Fu; UPD(0x0C0998ACu, 1);  /* 0C0998AA mov.w @(disp,pc),Rn */
	IF(0x0C0998ACu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0998AEu, 1);  /* 0C0998AC mov.b @(r0,Rm),Rn */
	r2 += 0x1u;  /* 0C0998AE add #imm,Rn */
	IF(0x0C0998B0u); W8(r0 + r3, r2); UPD(0x0C0998B2u, 2);  /* 0C0998B0 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C0998B2 bra */
L_0C0998F2: BLKS(0x0C0998F2u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C0998F2 bra */
L_0C099900: BLKS(0x0C099900u);
	r9 = 0xB4u; UPD(0x0C099902u, 1);  /* 0C099900 mov.w @(disp,pc),Rn */
	IF(0x0C099902u); MACL = r12 * r9;  /* 0C099902 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C099906u, 3);  /* 0C099904 mov.l @(disp,pc),Rn */
	IF(0x0C099906u); r3 = MACL;  /* 0C099906 sts macl,Rn */
	r3 += r4;  /* 0C099908 add Rm,Rn */
	r1 = R32(r3 + 0x24u); UPD(0x0C09990Cu, 3);  /* 0C09990A mov.l @(disp,Rm),Rn */
	r0 = 0xE00000u; UPD(0x0C09990Eu, 1);  /* 0C09990C mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r0;  /* 0C09990E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0998F2u, 4); goto L_0C0998F2; }  /* 0C099910 bf */
L_0C099912: BLKS(0x0C099912u);
	r1 = R32(r3); UPD(0x0C099914u, 1);  /* 0C099912 mov.l @Rm,Rn */
	r8 = 0x100u; UPD(0x0C099916u, 1);  /* 0C099914 mov.w @(disp,pc),Rn */
	{ r1 |= r8; /* slot or Rm,Rn */ UPD(0x0C0998A8u, 3); goto L_0C0998A8; }  /* 0C099916 bra */
}

void blk_f_0C099920(sh3_t *c)
{
	LOCALS;
	goto L_0C099920;
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C0998F2: BLKS(0x0C0998F2u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C0998F2 bra */
L_0C099920: BLKS(0x0C099920u);
	r11 = 0xB4u; UPD(0x0C099922u, 1);  /* 0C099920 mov.w @(disp,pc),Rn */
	IF(0x0C099922u); MACL = r12 * r11;  /* 0C099922 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C099926u, 3);  /* 0C099924 mov.l @(disp,pc),Rn */
	IF(0x0C099926u); r9 = MACL;  /* 0C099926 sts macl,Rn */
	r9 += r2;  /* 0C099928 add Rm,Rn */
	r7 = R32(r9 + 0x2Cu); UPD(0x0C09992Cu, 3);  /* 0C09992A mov.l @(disp,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C09992C tst Rm,Rn */
	if (T) { UPD(0x0C099938u, 4); goto L_0C099938; }  /* 0C09992E bt */
L_0C099930: BLKS(0x0C099930u);
	r3 = 0xFFFFFC00u; UPD(0x0C099932u, 1);  /* 0C099930 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C099932 add Rm,Rn */
	W32(r9 + 0x2Cu, r3); UPD(0x0C099936u, 2);  /* 0C099934 mov.l Rm,@(disp,Rn) */
	r7 = r3;  /* 0C099936 mov Rm,Rn */
	UPD(0x0C099938u, 1);
L_0C099938: BLKS(0x0C099938u);
	r6 = 0x99u; UPD(0x0C09993Au, 1);  /* 0C099938 mov.w @(disp,pc),Rn */
	r12 = 0x13u;  /* 0C09993A mov #imm,Rn */
	r6 += r9;  /* 0C09993C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C099940u, 3);  /* 0C09993E mov.b @Rm,Rn */
	r1 = r0;  /* 0C099940 mov Rm,Rn */
	r1 += 0x1u;  /* 0C099942 add #imm,Rn */
	W8(r6, r1); UPD(0x0C099946u, 3);  /* 0C099944 mov.b Rm,@Rn */
	r0 &= 0x7u;  /* 0C099946 and #imm,r0 */
	r6 = 0xA9u; UPD(0x0C09994Au, 2);  /* 0C099948 mov.w @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C09994A tst Rm,Rn */
	r6 += r9;  /* 0C09994C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C099950u, 3);  /* 0C09994E mov.b @Rm,Rn */
	IF(0x0C099950u); r10 = T;  /* 0C099950 movt Rn */
	r13 = r0 & 0xFF;  /* 0C099952 extu.b Rm,Rn */
	T = r12 >= r13;  /* 0C099954 cmp/hs Rm,Rn */
	IF(0x0C099956u); r5 = T;  /* 0C099956 movt Rn */
	r10 &= r5;  /* 0C099958 and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09995A tst Rm,Rn */
	{ u32 c_ = T; r8 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09996Au, 9); goto L_0C09996A; } goto L_0C099960; }  /* 0C09995C bt/s */
L_0C099960: BLKS(0x0C099960u);
	r4 = r0;  /* 0C099960 mov Rm,Rn */
	r4 += 0x1u;  /* 0C099962 add #imm,Rn */
	W8(r6, r4); UPD(0x0C099966u, 4);  /* 0C099964 mov.b Rm,@Rn */
	r0 = r4;  /* 0C099966 mov Rm,Rn */
	r8 = 0xFFFFFFFFu;  /* 0C099968 mov #imm,Rn */
	UPD(0x0C09996Au, 2);
L_0C09996A: BLKS(0x0C09996Au);
	T = (r7 & r7) == 0;  /* 0C09996A tst Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C09996C negc Rm,Rn */
	r0 = r0 & 0xFF;  /* 0C09996E extu.b Rm,Rn */
	T = r0 == 0x14u;  /* 0C099970 cmp/eq #imm,r0 */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C099972 negc Rm,Rn */
	r7 |= r0;  /* 0C099974 or Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C099976 tst Rm,Rn */
	if (!T) { UPD(0x0C0998F2u, 10); goto L_0C0998F2; }  /* 0C099978 bf */
L_0C09997A: BLKS(0x0C09997Au);
	r12 = R32(r9); UPD(0x0C09997Cu, 1);  /* 0C09997A mov.l @Rm,Rn */
	r6 = 0xFFFFFFEFu;  /* 0C09997C mov #imm,Rn */
	r4 = 0x13000000u; UPD(0x0C099980u, 2);  /* 0C09997E mov.l @(disp,pc),Rn */
	r10 = 0xC0C2360u; UPD(0x0C099982u, 1);  /* 0C099980 mov.l @(disp,pc),Rn */
	r12 |= r4;  /* 0C099982 or Rm,Rn */
	r12 &= r6;  /* 0C099984 and Rm,Rn */
	IF(0x0C099986u); { u32 t_ = r10; PR = 0x0C09998Au; W32(r9, r12); /* slot mov.l Rm,@Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C09998Au); }  /* 0C099986 jsr @Rn */
L_0C09998A: BLKS(0x0C09998Au);
	r0 &= 0x1u;  /* 0C09998A and #imm,r0 */
	r13 = 0xC1C7374u; UPD(0x0C09998Eu, 2);  /* 0C09998C mov.l @(disp,pc),Rn */
	IF(0x0C09998Eu); r0 <<= 2;  /* 0C09998E shll2 Rn */
	IF(0x0C099990u); r5 = R32(r0 + r13); UPD(0x0C099992u, 2);  /* 0C099990 mov.l @(r0,Rm),Rn */
	IF(0x0C099992u); { u32 t_ = r10; PR = 0x0C099996u; W32(r9 + 0x2Cu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLD(t_, 0x0C099996u); }  /* 0C099992 jsr @Rn */
L_0C099996: BLKS(0x0C099996u);
	r0 &= 0x1u;  /* 0C099996 and #imm,r0 */
	r3 = 0xC1C737Cu; UPD(0x0C09999Au, 2);  /* 0C099998 mov.l @(disp,pc),Rn */
	IF(0x0C09999Au); r0 <<= 2;  /* 0C09999A shll2 Rn */
	IF(0x0C09999Cu); r11 = R32(r0 + r3); UPD(0x0C09999Eu, 2);  /* 0C09999C mov.l @(r0,Rm),Rn */
	r0 = 0x9Fu; UPD(0x0C0999A0u, 1);  /* 0C09999E mov.w @(disp,pc),Rn */
	IF(0x0C0999A0u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0999A2u, 1);  /* 0C0999A0 mov.b @(r0,Rm),Rn */
	r2 += 0x1u;  /* 0C0999A2 add #imm,Rn */
	W32(r9 + 0x30u, r11); UPD(0x0C0999A6u, 2);  /* 0C0999A4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0999A6u); W8(r0 + r9, r2); UPD(0x0C0999A8u, 1);  /* 0C0999A6 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C0999A8 bra */
}

void blk_f_0C0999B0(sh3_t *c)
{
	LOCALS;
	goto L_0C0999B0;
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C0998AC: BLKS(0x0C0998ACu);
	IF(0x0C0998ACu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0998AEu, 1);  /* 0C0998AC mov.b @(r0,Rm),Rn */
	r2 += 0x1u;  /* 0C0998AE add #imm,Rn */
	IF(0x0C0998B0u); W8(r0 + r3, r2); UPD(0x0C0998B2u, 2);  /* 0C0998B0 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C0998B2 bra */
L_0C0999A8: BLKS(0x0C0999A8u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C0999A8 bra */
L_0C0999B0: BLKS(0x0C0999B0u);
	r8 = 0xC099500u; UPD(0x0C0999B2u, 1);  /* 0C0999B0 mov.l @(disp,pc),Rn */
	r9 = 0x2327u; UPD(0x0C0999B4u, 1);  /* 0C0999B2 mov.w @(disp,pc),Rn */
	IF(0x0C0999B4u); { u32 t_ = r8; PR = 0x0C0999B8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C099500, 0x0C099500u, 0x0C0999B8u); }  /* 0C0999B4 jsr @Rn */
L_0C0999B8: BLKS(0x0C0999B8u);
	r0 = 0xB4u; UPD(0x0C0999BAu, 1);  /* 0C0999B8 mov.w @(disp,pc),Rn */
	IF(0x0C0999BAu); MACL = r12 * r0;  /* 0C0999BA mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0999BEu, 3);  /* 0C0999BC mov.l @(disp,pc),Rn */
	r0 = 0x8Cu; UPD(0x0C0999C0u, 1);  /* 0C0999BE mov.w @(disp,pc),Rn */
	IF(0x0C0999C0u); r3 = MACL;  /* 0C0999C0 sts macl,Rn */
	r3 += r7;  /* 0C0999C2 add Rm,Rn */
	IF(0x0C0999C4u); r1 = R32(r0 + r3); UPD(0x0C0999C6u, 3);  /* 0C0999C4 mov.l @(r0,Rm),Rn */
	r1 += 0x1u;  /* 0C0999C6 add #imm,Rn */
	T = (s32)r1 > (s32)r9;  /* 0C0999C8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0999CCu); W32(r0 + r3, r1); /* slot mov.l Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0999A8u, 5); goto L_0C0999A8; } UPD(0x0C0999CEu, 1); goto L_0C0999CE; }  /* 0C0999CA bf/s */
L_0C0999CE: BLKS(0x0C0999CEu);
	{ r0 += 0x13u; /* slot add #imm,Rn */ UPD(0x0C0998ACu, 3); goto L_0C0998AC; }  /* 0C0999CE bra */
}

void blk_f_0C099A70(sh3_t *c)
{
	LOCALS;
	goto L_0C099A70;
L_0C099712: BLKS(0x0C099712u);
	r14 += 0x8u;  /* 0C099712 add #imm,Rn */
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 3);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099A70: BLKS(0x0C099A70u);
	r10 = 0xC0A8CA0u; UPD(0x0C099A72u, 1);  /* 0C099A70 mov.l @(disp,pc),Rn */
	IF(0x0C099A72u); { u32 t_ = r10; PR = 0x0C099A76u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C099A76u); }  /* 0C099A72 jsr @Rn */
L_0C099A76: BLKS(0x0C099A76u);
	IF(0x0C099A76u); T = (s32)r0 >= 0;  /* 0C099A76 cmp/pz Rn */
	if (!T) { UPD(0x0C099AE0u, 4); goto L_0C099AE0; }  /* 0C099A78 bf */
L_0C099A7A: BLKS(0x0C099A7Au);
	r13 = 0xB4u; UPD(0x0C099A7Cu, 1);  /* 0C099A7A mov.w @(disp,pc),Rn */
	IF(0x0C099A7Cu); MACL = r12 * r13;  /* 0C099A7C mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C099A80u, 3);  /* 0C099A7E mov.l @(disp,pc),Rn */
	IF(0x0C099A80u); r11 = MACL;  /* 0C099A80 sts macl,Rn */
	IF(0x0C099A82u); MACL = r0 * r13;  /* 0C099A82 mul.l Rm,Rn */
	r11 += r8;  /* 0C099A84 add Rm,Rn */
	r3 = R32(r11 + 0x2Cu); UPD(0x0C099A88u, 5);  /* 0C099A86 mov.l @(disp,Rm),Rn */
	IF(0x0C099A88u); r13 = MACL;  /* 0C099A88 sts macl,Rn */
	r13 += r8;  /* 0C099A8A add Rm,Rn */
	r4 = R32(r13 + 0x24u); UPD(0x0C099A8Eu, 3);  /* 0C099A8C mov.l @(disp,Rm),Rn */
	r8 = r11;  /* 0C099A8E mov Rm,Rn */
	r4 += r3;  /* 0C099A90 add Rm,Rn */
	r0 = R32(r13 + 0x28u); UPD(0x0C099A94u, 3);  /* 0C099A92 mov.l @(disp,Rm),Rn */
	r7 = R32(r11 + 0x30u); UPD(0x0C099A96u, 1);  /* 0C099A94 mov.l @(disp,Rm),Rn */
	W32(r11 + 0x24u, r4); UPD(0x0C099A98u, 1);  /* 0C099A96 mov.l Rm,@(disp,Rn) */
	r0 += r7;  /* 0C099A98 add Rm,Rn */
	r4 = R32(r11); UPD(0x0C099A9Cu, 2);  /* 0C099A9A mov.l @Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C099A9Eu, 1);  /* 0C099A9C mov.w @(disp,pc),Rn */
	W32(r11 + 0x28u, r0); UPD(0x0C099AA0u, 1);  /* 0C099A9E mov.l Rm,@(disp,Rn) */
	r4 &= r2;  /* 0C099AA0 and Rm,Rn */
	r9 = 0xAFu; UPD(0x0C099AA4u, 2);  /* 0C099AA2 mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C099AA4 mov Rm,Rn */
	W32(r11, r4); UPD(0x0C099AA8u, 2);  /* 0C099AA6 mov.l Rm,@Rn */
	r10 = 0xA8u; UPD(0x0C099AAAu, 1);  /* 0C099AA8 mov.w @(disp,pc),Rn */
	IF(0x0C099AAAu); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C099AACu, 1);  /* 0C099AAA mov.b @(r0,Rm),Rn */
	r8 += r10;  /* 0C099AAC add Rm,Rn */
	r3 = R32(r13); UPD(0x0C099AB0u, 2);  /* 0C099AAE mov.l @Rm,Rn */
	r10 += r13;  /* 0C099AB0 add Rm,Rn */
	r1 = 0x100u; UPD(0x0C099AB4u, 2);  /* 0C099AB2 mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C099AB4 add #imm,Rn */
	r0 = R32(r11 + 0xCu); UPD(0x0C099AB8u, 2);  /* 0C099AB6 mov.l @(disp,Rm),Rn */
	r3 &= r1;  /* 0C099AB8 and Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C099ABCu, 2);  /* 0C099ABA mov.b @Rm,Rn */
	r4 |= r3;  /* 0C099ABC or Rm,Rn */
	r0 += 0x1u;  /* 0C099ABE add #imm,Rn */
	r7 = 0xC0A8AE0u; UPD(0x0C099AC2u, 3);  /* 0C099AC0 mov.l @(disp,pc),Rn */
	r0 &= 0x7u;  /* 0C099AC2 and #imm,r0 */
	W32(r11, r4); UPD(0x0C099AC6u, 2);  /* 0C099AC4 mov.l Rm,@Rn */
	r5 += r6;  /* 0C099AC6 add Rm,Rn */
	W32(r11 + 0xCu, r0); UPD(0x0C099ACAu, 2);  /* 0C099AC8 mov.l Rm,@(disp,Rn) */
	r8 += 0x1u;  /* 0C099ACA add #imm,Rn */
	W8(r8, r5); UPD(0x0C099ACEu, 2);  /* 0C099ACC mov.b Rm,@Rn */
	r4 = r12;  /* 0C099ACE mov Rm,Rn */
	IF(0x0C099AD0u); { u32 t_ = r7; PR = 0x0C099AD4u; r13 += 0x3Cu; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C099AD4u); }  /* 0C099AD0 jsr @Rn */
L_0C099AD4: BLKS(0x0C099AD4u);
	r0 = (u32)(s32)(s16)R16(r13); UPD(0x0C099AD6u, 1);  /* 0C099AD4 mov.w @Rm,Rn */
	r11 += 0x3Cu;  /* 0C099AD6 add #imm,Rn */
	{ W16(r11, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C099712u, 4); goto L_0C099712; }  /* 0C099AD8 bra */
L_0C099AE0: BLKS(0x0C099AE0u);
	r1 = 0xC098E60u; UPD(0x0C099AE2u, 1);  /* 0C099AE0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C099AE2 mov Rm,Rn */
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 4);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
}

void blk_f_0C099AE0(sh3_t *c)
{
	LOCALS;
L_0C099AE0: BLKS(0x0C099AE0u);
	r1 = 0xC098E60u; UPD(0x0C099AE2u, 1);  /* 0C099AE0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C099AE2 mov Rm,Rn */
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 4);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
}

void blk_f_0C099B00(sh3_t *c)
{
	LOCALS;
	goto L_0C099B00;
L_0C099712: BLKS(0x0C099712u);
	r14 += 0x8u;  /* 0C099712 add #imm,Rn */
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 3);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099AE0: BLKS(0x0C099AE0u);
	r1 = 0xC098E60u; UPD(0x0C099AE2u, 1);  /* 0C099AE0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C099AE2 mov Rm,Rn */
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 4);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C099B00: BLKS(0x0C099B00u);
	r11 = 0xC0A8CA0u; UPD(0x0C099B02u, 1);  /* 0C099B00 mov.l @(disp,pc),Rn */
	IF(0x0C099B02u); { u32 t_ = r11; PR = 0x0C099B06u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C099B06u); }  /* 0C099B02 jsr @Rn */
L_0C099B06: BLKS(0x0C099B06u);
	IF(0x0C099B06u); T = (s32)r0 >= 0;  /* 0C099B06 cmp/pz Rn */
	if (!T) { UPD(0x0C099AE0u, 4); goto L_0C099AE0; }  /* 0C099B08 bf */
L_0C099B0A: BLKS(0x0C099B0Au);
	r9 = 0xB4u; UPD(0x0C099B0Cu, 1);  /* 0C099B0A mov.w @(disp,pc),Rn */
	IF(0x0C099B0Cu); MACL = r12 * r9;  /* 0C099B0C mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C099B10u, 3);  /* 0C099B0E mov.l @(disp,pc),Rn */
	IF(0x0C099B10u); r8 = MACL;  /* 0C099B10 sts macl,Rn */
	IF(0x0C099B12u); MACL = r0 * r9;  /* 0C099B12 mul.l Rm,Rn */
	r8 += r11;  /* 0C099B14 add Rm,Rn */
	r6 = r8;  /* 0C099B16 mov Rm,Rn */
	r0 = 0xA8u; UPD(0x0C099B1Au, 6);  /* 0C099B18 mov.w @(disp,pc),Rn */
	IF(0x0C099B1Au); r9 = MACL;  /* 0C099B1A sts macl,Rn */
	r9 += r11;  /* 0C099B1C add Rm,Rn */
	r6 += r0;  /* 0C099B1E add Rm,Rn */
	r0 += r9;  /* 0C099B20 add Rm,Rn */
	r0 += 0x1u;  /* 0C099B22 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C099B26u, 6);  /* 0C099B24 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C099B26 add #imm,Rn */
	r7 = 0xAFu; UPD(0x0C099B2Au, 2);  /* 0C099B28 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C099B2A mov Rm,Rn */
	r3 = R32(r9 + 0x24u); UPD(0x0C099B2Eu, 2);  /* 0C099B2C mov.l @(disp,Rm),Rn */
	r5 = r10;  /* 0C099B2E mov Rm,Rn */
	r4 = R32(r9 + 0x28u); UPD(0x0C099B32u, 2);  /* 0C099B30 mov.l @(disp,Rm),Rn */
	IF(0x0C099B32u); r2 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C099B34u, 1);  /* 0C099B32 mov.b @(r0,Rm),Rn */
	r13 = R32(r8 + 0x2Cu); UPD(0x0C099B36u, 1);  /* 0C099B34 mov.l @(disp,Rm),Rn */
	r5 += r2;  /* 0C099B36 add Rm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C099B3Au, 2);  /* 0C099B38 mov.l @(disp,Rm),Rn */
	r3 += r13;  /* 0C099B3A add Rm,Rn */
	r4 += r1;  /* 0C099B3C add Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C099B3E extu.b Rm,Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C099B42u, 4);  /* 0C099B40 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x14u;  /* 0C099B42 cmp/eq #imm,r0 */
	W32(r8 + 0x28u, r4); UPD(0x0C099B46u, 2);  /* 0C099B44 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W8(r6, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C099B80u, 3); goto L_0C099B80; } UPD(0x0C099B4Au, 1); goto L_0C099B4A; }  /* 0C099B46 bt/s */
L_0C099B4A: BLKS(0x0C099B4Au);
	r10 = 0x9Bu; UPD(0x0C099B4Cu, 1);  /* 0C099B4A mov.w @(disp,pc),Rn */
	r10 += r8;  /* 0C099B4C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C099B50u, 2);  /* 0C099B4E mov.b @Rm,Rn */
	r7 = r0;  /* 0C099B50 mov Rm,Rn */
	r7 += 0x1u;  /* 0C099B52 add #imm,Rn */
	W8(r10, r7); UPD(0x0C099B56u, 3);  /* 0C099B54 mov.b Rm,@Rn */
	r0 &= 0x7u;  /* 0C099B56 and #imm,r0 */
	r4 = r12;  /* 0C099B58 mov Rm,Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C099B5Cu, 3);  /* 0C099B5A mov.l @(disp,pc),Rn */
	IF(0x0C099B5Cu); { u32 t_ = r12; PR = 0x0C099B60u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C099B60u); }  /* 0C099B5C jsr @Rn */
L_0C099B60: BLKS(0x0C099B60u);
	r5 = R32(r8); UPD(0x0C099B62u, 1);  /* 0C099B60 mov.l @Rm,Rn */
	r13 = R32(r9); UPD(0x0C099B64u, 1);  /* 0C099B62 mov.l @Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C099B66u, 1);  /* 0C099B64 mov.w @(disp,pc),Rn */
	r3 = 0x100u; UPD(0x0C099B68u, 1);  /* 0C099B66 mov.w @(disp,pc),Rn */
	r5 &= r2;  /* 0C099B68 and Rm,Rn */
	r13 &= r3;  /* 0C099B6A and Rm,Rn */
	r5 |= r13;  /* 0C099B6C or Rm,Rn */
	{ W32(r8, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C099712u, 6); goto L_0C099712; }  /* 0C099B6E bra */
L_0C099B80: BLKS(0x0C099B80u);
	r5 = R32(r8); UPD(0x0C099B82u, 1);  /* 0C099B80 mov.l @Rm,Rn */
	r6 = 0x3000000u; UPD(0x0C099B84u, 1);  /* 0C099B82 mov.l @(disp,pc),Rn */
	r5 |= r6;  /* 0C099B84 or Rm,Rn */
	{ W32(r8, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C099B4Au, 4); goto L_0C099B4A; }  /* 0C099B86 bra */
}

void blk_f_0C099B90(sh3_t *c)
{
	LOCALS;
	goto L_0C099B90;
L_0C099AE0: BLKS(0x0C099AE0u);
	r1 = 0xC098E60u; UPD(0x0C099AE2u, 1);  /* 0C099AE0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C099AE2 mov Rm,Rn */
	UPD(0x0C099AE4u, 1);
L_0C099AE4: BLKS(0x0C099AE4u);
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 3);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C099B90: BLKS(0x0C099B90u);
	r13 = 0xC0A8CA0u; UPD(0x0C099B92u, 1);  /* 0C099B90 mov.l @(disp,pc),Rn */
	IF(0x0C099B92u); { u32 t_ = r13; PR = 0x0C099B96u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C099B96u); }  /* 0C099B92 jsr @Rn */
L_0C099B96: BLKS(0x0C099B96u);
	IF(0x0C099B96u); T = (s32)r0 >= 0;  /* 0C099B96 cmp/pz Rn */
	if (!T) { UPD(0x0C099AE0u, 4); goto L_0C099AE0; }  /* 0C099B98 bf */
L_0C099B9A: BLKS(0x0C099B9Au);
	r6 = 0xB4u; UPD(0x0C099B9Cu, 1);  /* 0C099B9A mov.w @(disp,pc),Rn */
	IF(0x0C099B9Cu); MACL = r0 * r6;  /* 0C099B9C mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C099BA0u, 3);  /* 0C099B9E mov.l @(disp,pc),Rn */
	IF(0x0C099BA0u); r7 = MACL;  /* 0C099BA0 sts macl,Rn */
	r7 += r5;  /* 0C099BA2 add Rm,Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C099BA6u, 3);  /* 0C099BA4 mov.l @(disp,Rm),Rn */
	T = r0 == 0x13u;  /* 0C099BA6 cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C099BAAu); MACL = r12 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C099BC2u, 5); goto L_0C099BC2; } goto L_0C099BAC; }  /* 0C099BA8 bt/s */
L_0C099BAC: BLKS(0x0C099BACu);
	r10 = R32(r7); UPD(0x0C099BAEu, 3);  /* 0C099BAC mov.l @Rm,Rn */
	IF(0x0C099BAEu); r0 = MACL;  /* 0C099BAE sts macl,Rn */
	r0 += r5;  /* 0C099BB0 add Rm,Rn */
	r3 = R32(r0); UPD(0x0C099BB4u, 3);  /* 0C099BB2 mov.l @Rm,Rn */
	r10 &= r8;  /* 0C099BB4 and Rm,Rn */
	r4 = 0xECFFFFFFu; UPD(0x0C099BB8u, 2);  /* 0C099BB6 mov.l @(disp,pc),Rn */
	r8 = 0x40000000u; UPD(0x0C099BBAu, 1);  /* 0C099BB8 mov.l @(disp,pc),Rn */
	r3 &= r4;  /* 0C099BBA and Rm,Rn */
	r3 |= r10;  /* 0C099BBC or Rm,Rn */
	r3 |= r8;  /* 0C099BBE or Rm,Rn */
	W32(r0, r3); UPD(0x0C099BC2u, 4);  /* 0C099BC0 mov.l Rm,@Rn */
L_0C099BC2: BLKS(0x0C099BC2u);
	IF(0x0C099BC2u); MACL = r12 * r6;  /* 0C099BC2 mul.l Rm,Rn */
	r2 = 0xA8u; UPD(0x0C099BC6u, 3);  /* 0C099BC4 mov.w @(disp,pc),Rn */
	IF(0x0C099BC6u); r0 = MACL;  /* 0C099BC6 sts macl,Rn */
	r0 += r5;  /* 0C099BC8 add Rm,Rn */
	r9 = r0;  /* 0C099BCA mov Rm,Rn */
	r9 += r2;  /* 0C099BCC add Rm,Rn */
	r2 += r7;  /* 0C099BCE add Rm,Rn */
	r11 = 0xAFu; UPD(0x0C099BD2u, 6);  /* 0C099BD0 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C099BD2 add #imm,Rn */
	r8 = R32(r7 + 0x24u); UPD(0x0C099BD6u, 2);  /* 0C099BD4 mov.l @(disp,Rm),Rn */
	r9 += 0x1u;  /* 0C099BD6 add #imm,Rn */
	r3 = R32(r7 + 0x28u); UPD(0x0C099BDAu, 2);  /* 0C099BD8 mov.l @(disp,Rm),Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C099BDCu, 1);  /* 0C099BDA mov.b @Rm,Rn */
	r10 = R32(r0 + 0x2Cu); UPD(0x0C099BDEu, 1);  /* 0C099BDC mov.l @(disp,Rm),Rn */
	r1 = R32(r0 + 0x30u); UPD(0x0C099BE0u, 1);  /* 0C099BDE mov.l @(disp,Rm),Rn */
	r8 += r10;  /* 0C099BE0 add Rm,Rn */
	IF(0x0C099BE2u); r13 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C099BE4u, 2);  /* 0C099BE2 mov.b @(r0,Rm),Rn */
	r3 += r1;  /* 0C099BE4 add Rm,Rn */
	r5 = R32(r7 + 0xCu); UPD(0x0C099BE8u, 2);  /* 0C099BE6 mov.l @(disp,Rm),Rn */
	r6 += r13;  /* 0C099BE8 add Rm,Rn */
	W32(r0 + 0x24u, r8); UPD(0x0C099BECu, 2);  /* 0C099BEA mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x28u, r3); UPD(0x0C099BEEu, 1);  /* 0C099BEC mov.l Rm,@(disp,Rn) */
	W8(r9, r6); UPD(0x0C099BF0u, 1);  /* 0C099BEE mov.b Rm,@Rn */
	W32(r0 + 0xCu, r5); UPD(0x0C099BF2u, 1);  /* 0C099BF0 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A8AE0u; UPD(0x0C099BF4u, 1);  /* 0C099BF2 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C099AE4u, 3); goto L_0C099AE4; }  /* 0C099BF4 bra */
}

void blk_f_0C099C20(sh3_t *c)
{
	LOCALS;
	goto L_0C099C20;
L_0C099712: BLKS(0x0C099712u);
	r14 += 0x8u;  /* 0C099712 add #imm,Rn */
	UPD(0x0C099714u, 1);
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099730: BLKS(0x0C099730u);
	r0 = 0xB4u; UPD(0x0C099732u, 1);  /* 0C099730 mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C099732 mov #imm,Rn */
	IF(0x0C099734u); MACL = r12 * r0;  /* 0C099734 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C099738u, 4);  /* 0C099736 mov.l @(disp,pc),Rn */
	IF(0x0C099738u); r0 = MACL;  /* 0C099738 sts macl,Rn */
	{ IF(0x0C09973Cu); W32(r0 + r4, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C099712u, 4); goto L_0C099712; }  /* 0C09973A bra */
L_0C099AE4: BLKS(0x0C099AE4u);
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	UPD(0x0C099AE6u, 1);
L_0C099AE6: BLKS(0x0C099AE6u);
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 2);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C099BF2: BLKS(0x0C099BF2u);
	r1 = 0xC0A8AE0u; UPD(0x0C099BF4u, 1);  /* 0C099BF2 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C099AE4u, 3); goto L_0C099AE4; }  /* 0C099BF4 bra */
L_0C099C20: BLKS(0x0C099C20u);
	r8 = 0xC0A8CA0u; UPD(0x0C099C22u, 1);  /* 0C099C20 mov.l @(disp,pc),Rn */
	IF(0x0C099C22u); { u32 t_ = r8; PR = 0x0C099C26u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C099C26u); }  /* 0C099C22 jsr @Rn */
L_0C099C26: BLKS(0x0C099C26u);
	IF(0x0C099C26u); T = (s32)r0 >= 0;  /* 0C099C26 cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C099C30u, 4); goto L_0C099C30; } goto L_0C099C2C; }  /* 0C099C28 bt/s */
L_0C099C2C: BLKS(0x0C099C2Cu);
	{ IF(0x0C099C2Eu); ; /* slot nop */ UPD(0x0C099730u, 4); goto L_0C099730; }  /* 0C099C2C bra */
L_0C099C30: BLKS(0x0C099C30u);
	r4 = 0xB4u; UPD(0x0C099C32u, 1);  /* 0C099C30 mov.w @(disp,pc),Rn */
	IF(0x0C099C32u); MACL = r12 * r4;  /* 0C099C32 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C099C36u, 3);  /* 0C099C34 mov.l @(disp,pc),Rn */
	IF(0x0C099C36u); r6 = MACL;  /* 0C099C36 sts macl,Rn */
	IF(0x0C099C38u); MACL = r10 * r4;  /* 0C099C38 mul.l Rm,Rn */
	r6 += r0;  /* 0C099C3A add Rm,Rn */
	r2 = 0xA8u; UPD(0x0C099C3Eu, 5);  /* 0C099C3C mov.w @(disp,pc),Rn */
	IF(0x0C099C3Eu); r4 = MACL;  /* 0C099C3E sts macl,Rn */
	r13 = r6;  /* 0C099C40 mov Rm,Rn */
	r4 += r0;  /* 0C099C42 add Rm,Rn */
	r13 += r2;  /* 0C099C44 add Rm,Rn */
	r2 += r4;  /* 0C099C46 add Rm,Rn */
	r2 += 0x1u;  /* 0C099C48 add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C099C4Cu, 7);  /* 0C099C4A mov.b @Rm,Rn */
	r0 = r6;  /* 0C099C4C mov Rm,Rn */
	r5 = 0xAFu; UPD(0x0C099C50u, 2);  /* 0C099C4E mov.w @(disp,pc),Rn */
	r13 += 0x1u;  /* 0C099C50 add #imm,Rn */
	r2 = R32(r6); UPD(0x0C099C54u, 2);  /* 0C099C52 mov.l @Rm,Rn */
	r3 = 0xFFFFFEFFu; UPD(0x0C099C56u, 1);  /* 0C099C54 mov.w @(disp,pc),Rn */
	IF(0x0C099C56u); r9 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C099C58u, 1);  /* 0C099C56 mov.b @(r0,Rm),Rn */
	r2 &= r3;  /* 0C099C58 and Rm,Rn */
	r0 = R32(r4); UPD(0x0C099C5Cu, 2);  /* 0C099C5A mov.l @Rm,Rn */
	r11 += r9;  /* 0C099C5C add Rm,Rn */
	r3 = 0x100u; UPD(0x0C099C60u, 2);  /* 0C099C5E mov.w @(disp,pc),Rn */
	r7 = R32(r4 + 0x24u); UPD(0x0C099C62u, 1);  /* 0C099C60 mov.l @(disp,Rm),Rn */
	r0 &= r3;  /* 0C099C62 and Rm,Rn */
	r10 = R32(r4 + 0x28u); UPD(0x0C099C66u, 2);  /* 0C099C64 mov.l @(disp,Rm),Rn */
	r2 |= r0;  /* 0C099C66 or Rm,Rn */
	r8 = R32(r6 + 0x2Cu); UPD(0x0C099C6Au, 2);  /* 0C099C68 mov.l @(disp,Rm),Rn */
	r1 = R32(r6 + 0x30u); UPD(0x0C099C6Cu, 1);  /* 0C099C6A mov.l @(disp,Rm),Rn */
	r7 += r8;  /* 0C099C6C add Rm,Rn */
	r10 += r1;  /* 0C099C6E add Rm,Rn */
	r0 = R32(r6 + 0xCu); UPD(0x0C099C72u, 3);  /* 0C099C70 mov.l @(disp,Rm),Rn */
	W32(r6 + 0x24u, r7); UPD(0x0C099C74u, 1);  /* 0C099C72 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C099C74 tst Rm,Rn */
	W32(r6 + 0x28u, r10); UPD(0x0C099C78u, 2);  /* 0C099C76 mov.l Rm,@(disp,Rn) */
	W8(r13, r11); UPD(0x0C099C7Au, 1);  /* 0C099C78 mov.b Rm,@Rn */
	{ u32 c_ = T; W32(r6, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C099CF0u, 3); goto L_0C099CF0; } UPD(0x0C099C7Eu, 1); goto L_0C099C7E; }  /* 0C099C7A bt/s */
L_0C099C7E: BLKS(0x0C099C7Eu);
	T = r0 == 0xFu;  /* 0C099C7E cmp/eq #imm,r0 */
	if (T) { UPD(0x0C099CB0u, 4); goto L_0C099CB0; }  /* 0C099C80 bt */
L_0C099C82: BLKS(0x0C099C82u);
	r11 = 0xB4u; UPD(0x0C099C84u, 1);  /* 0C099C82 mov.w @(disp,pc),Rn */
	IF(0x0C099C84u); MACL = r12 * r11;  /* 0C099C84 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C099C88u, 3);  /* 0C099C86 mov.l @(disp,pc),Rn */
	IF(0x0C099C88u); r2 = MACL;  /* 0C099C88 sts macl,Rn */
	r6 = 0x98u; UPD(0x0C099C8Cu, 2);  /* 0C099C8A mov.w @(disp,pc),Rn */
	r2 += r13;  /* 0C099C8C add Rm,Rn */
	r6 += r2;  /* 0C099C8E add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C099C92u, 3);  /* 0C099C90 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C099C92 add #imm,Rn */
	W8(r6, r0); UPD(0x0C099C96u, 2);  /* 0C099C94 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C099C96 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C099C98 tst Rm,Rn */
	if (!T) { UPD(0x0C099CE8u, 5); goto L_0C099CE8; }  /* 0C099C9A bf */
L_0C099C9C: BLKS(0x0C099C9Cu);
	r1 = R32(r2 + 0xCu); UPD(0x0C099C9Eu, 1);  /* 0C099C9C mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C099C9E add #imm,Rn */
	{ W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C099BF2u, 4); goto L_0C099BF2; }  /* 0C099CA0 bra */
L_0C099CB0: BLKS(0x0C099CB0u);
	r9 = 0x98u; UPD(0x0C099CB2u, 1);  /* 0C099CB0 mov.w @(disp,pc),Rn */
	r9 += r6;  /* 0C099CB2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C099CB6u, 2);  /* 0C099CB4 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C099CB6 add #imm,Rn */
	W8(r9, r0); UPD(0x0C099CBAu, 2);  /* 0C099CB8 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C099CBA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C099CBC tst Rm,Rn */
	if (!T) { UPD(0x0C099CE8u, 5); goto L_0C099CE8; }  /* 0C099CBE bf */
L_0C099CC0: BLKS(0x0C099CC0u);
	r0 = R32(r6 + 0x8u); UPD(0x0C099CC2u, 1);  /* 0C099CC0 mov.l @(disp,Rm),Rn */
	T = r0 == 0x13u;  /* 0C099CC2 cmp/eq #imm,r0 */
	{ u32 c_ = T; r1 = 0x1Cu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C099CCAu, 4); goto L_0C099CCA; } goto L_0C099CC8; }  /* 0C099CC4 bt/s */
L_0C099CC8: BLKS(0x0C099CC8u);
	r1 = 0x35u;  /* 0C099CC8 mov #imm,Rn */
	UPD(0x0C099CCAu, 2);
L_0C099CCA: BLKS(0x0C099CCAu);
	r7 = 0xB4u; UPD(0x0C099CCCu, 1);  /* 0C099CCA mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C099CCC mov #imm,Rn */
	IF(0x0C099CCEu); MACL = r12 * r7;  /* 0C099CCE mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C099CD2u, 4);  /* 0C099CD0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C099CD2 mov Rm,Rn */
	IF(0x0C099CD4u); r8 = MACL;  /* 0C099CD4 sts macl,Rn */
	r5 = 0xC0A8B10u; UPD(0x0C099CD8u, 3);  /* 0C099CD6 mov.l @(disp,pc),Rn */
	r8 += r10;  /* 0C099CD8 add Rm,Rn */
	W32(r6 + 0x8u, r1); UPD(0x0C099CDCu, 2);  /* 0C099CDA mov.l Rm,@(disp,Rn) */
	IF(0x0C099CDCu); { u32 t_ = r5; PR = 0x0C099CE0u; W32(r8 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C099CE0u); }  /* 0C099CDC jsr @Rn */
L_0C099CE0: BLKS(0x0C099CE0u);
	r1 = R32(r8); UPD(0x0C099CE2u, 1);  /* 0C099CE0 mov.l @Rm,Rn */
	r2 = 0x53000000u; UPD(0x0C099CE4u, 1);  /* 0C099CE2 mov.l @(disp,pc),Rn */
	r1 |= r2;  /* 0C099CE4 or Rm,Rn */
	W32(r8, r1); UPD(0x0C099CE8u, 2);  /* 0C099CE6 mov.l Rm,@Rn */
L_0C099CE8: BLKS(0x0C099CE8u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C099CE8 bra */
L_0C099CF0: BLKS(0x0C099CF0u);
	T = (r2 & r3) == 0;  /* 0C099CF0 tst Rm,Rn */
	if (T) { UPD(0x0C099CE8u, 4); goto L_0C099CE8; }  /* 0C099CF2 bt */
L_0C099CF4: BLKS(0x0C099CF4u);
	r4 = r12;  /* 0C099CF4 mov Rm,Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C099CF8u, 2);  /* 0C099CF6 mov.l @(disp,pc),Rn */
	r3 = 0x1u;  /* 0C099CF8 mov #imm,Rn */
	IF(0x0C099CFAu); { u32 t_ = r12; PR = 0x0C099CFEu; W32(r6 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C099CFEu); }  /* 0C099CFA jsr @Rn */
L_0C099CFE: BLKS(0x0C099CFEu);
	r4 = 0x6Cu;  /* 0C099CFE mov #imm,Rn */
	r1 = 0xC0C2110u; UPD(0x0C099D02u, 2);  /* 0C099D00 mov.l @(disp,pc),Rn */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099AE6u, 3); goto L_0C099AE6; }  /* 0C099D02 bra */
}

void blk_f_0C099D10(sh3_t *c)
{
	LOCALS;
	goto L_0C099D10;
L_0C099712: BLKS(0x0C099712u);
	r14 += 0x8u;  /* 0C099712 add #imm,Rn */
	UPD(0x0C099714u, 1);
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099AE0: BLKS(0x0C099AE0u);
	r1 = 0xC098E60u; UPD(0x0C099AE2u, 1);  /* 0C099AE0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C099AE2 mov Rm,Rn */
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 4);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C099B62: BLKS(0x0C099B62u);
	r13 = R32(r9); UPD(0x0C099B64u, 1);  /* 0C099B62 mov.l @Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C099B66u, 1);  /* 0C099B64 mov.w @(disp,pc),Rn */
	r3 = 0x100u; UPD(0x0C099B68u, 1);  /* 0C099B66 mov.w @(disp,pc),Rn */
	r5 &= r2;  /* 0C099B68 and Rm,Rn */
	r13 &= r3;  /* 0C099B6A and Rm,Rn */
	r5 |= r13;  /* 0C099B6C or Rm,Rn */
	{ W32(r8, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C099712u, 6); goto L_0C099712; }  /* 0C099B6E bra */
L_0C099CE6: BLKS(0x0C099CE6u);
	W32(r8, r1); UPD(0x0C099CE8u, 1);  /* 0C099CE6 mov.l Rm,@Rn */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C099CE8 bra */
L_0C099D10: BLKS(0x0C099D10u);
	r8 = 0xC0A8CA0u; UPD(0x0C099D12u, 1);  /* 0C099D10 mov.l @(disp,pc),Rn */
	IF(0x0C099D12u); { u32 t_ = r8; PR = 0x0C099D16u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C099D16u); }  /* 0C099D12 jsr @Rn */
L_0C099D16: BLKS(0x0C099D16u);
	IF(0x0C099D16u); T = (s32)r0 >= 0;  /* 0C099D16 cmp/pz Rn */
	if (T) { UPD(0x0C099D1Eu, 4); goto L_0C099D1E; }  /* 0C099D18 bt */
L_0C099D1A: BLKS(0x0C099D1Au);
	{ IF(0x0C099D1Cu); ; /* slot nop */ UPD(0x0C099AE0u, 3); goto L_0C099AE0; }  /* 0C099D1A bra */
L_0C099D1E: BLKS(0x0C099D1Eu);
	r9 = 0xB4u; UPD(0x0C099D20u, 1);  /* 0C099D1E mov.w @(disp,pc),Rn */
	IF(0x0C099D20u); MACL = r12 * r9;  /* 0C099D20 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C099D24u, 3);  /* 0C099D22 mov.l @(disp,pc),Rn */
	IF(0x0C099D24u); r8 = MACL;  /* 0C099D24 sts macl,Rn */
	IF(0x0C099D26u); MACL = r0 * r9;  /* 0C099D26 mul.l Rm,Rn */
	r8 += r4;  /* 0C099D28 add Rm,Rn */
	r6 = r8;  /* 0C099D2A mov Rm,Rn */
	r0 = 0xA8u; UPD(0x0C099D2Eu, 6);  /* 0C099D2C mov.w @(disp,pc),Rn */
	IF(0x0C099D2Eu); r9 = MACL;  /* 0C099D2E sts macl,Rn */
	r9 += r4;  /* 0C099D30 add Rm,Rn */
	r6 += r0;  /* 0C099D32 add Rm,Rn */
	r0 += r9;  /* 0C099D34 add Rm,Rn */
	r0 += 0x1u;  /* 0C099D36 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C099D3Au, 6);  /* 0C099D38 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C099D3A add #imm,Rn */
	r11 = 0xAFu; UPD(0x0C099D3Eu, 2);  /* 0C099D3C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C099D3E mov Rm,Rn */
	r4 = 0x98u; UPD(0x0C099D42u, 2);  /* 0C099D40 mov.w @(disp,pc),Rn */
	IF(0x0C099D42u); r13 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C099D44u, 1);  /* 0C099D42 mov.b @(r0,Rm),Rn */
	r4 += r8;  /* 0C099D44 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C099D48u, 2);  /* 0C099D46 mov.b @Rm,Rn */
	r3 += r13;  /* 0C099D48 add Rm,Rn */
	r10 = R32(r9 + 0x24u); UPD(0x0C099D4Cu, 2);  /* 0C099D4A mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C099D4C add #imm,Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C099D50u, 2);  /* 0C099D4E mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x2Cu); UPD(0x0C099D52u, 1);  /* 0C099D50 mov.l @(disp,Rm),Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C099D54u, 1);  /* 0C099D52 mov.l @(disp,Rm),Rn */
	r10 += r7;  /* 0C099D54 add Rm,Rn */
	W8(r4, r0); UPD(0x0C099D58u, 2);  /* 0C099D56 mov.b Rm,@Rn */
	r5 += r1;  /* 0C099D58 add Rm,Rn */
	r0 &= 0x1u;  /* 0C099D5A and #imm,r0 */
	W32(r8 + 0x24u, r10); UPD(0x0C099D5Eu, 3);  /* 0C099D5C mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C099D5E tst Rm,Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C099D62u, 2);  /* 0C099D60 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W8(r6, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C099D80u, 3); goto L_0C099D80; } UPD(0x0C099D66u, 1); goto L_0C099D66; }  /* 0C099D62 bt/s */
L_0C099D66: BLKS(0x0C099D66u);
	r9 += 0x3Cu;  /* 0C099D66 add #imm,Rn */
	UPD(0x0C099D68u, 1);
L_0C099D68: BLKS(0x0C099D68u);
	r2 = (u32)(s32)(s16)R16(r9); UPD(0x0C099D6Au, 1);  /* 0C099D68 mov.w @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C099D6A tst Rm,Rn */
	{ u32 c_ = T; r9 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C099D74u, 4); goto L_0C099D74; } goto L_0C099D70; }  /* 0C099D6C bt/s */
L_0C099D70: BLKS(0x0C099D70u);
	{ r5 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C099B62u, 4); goto L_0C099B62; }  /* 0C099D70 bra */
L_0C099D74: BLKS(0x0C099D74u);
	r1 = R32(r8); UPD(0x0C099D76u, 1);  /* 0C099D74 mov.l @Rm,Rn */
	r6 = 0xECFFFFFFu; UPD(0x0C099D78u, 1);  /* 0C099D76 mov.l @(disp,pc),Rn */
	{ r1 &= r6; /* slot and Rm,Rn */ UPD(0x0C099CE6u, 3); goto L_0C099CE6; }  /* 0C099D78 bra */
L_0C099D80: BLKS(0x0C099D80u);
	r0 = R32(r8 + 0xCu); UPD(0x0C099D82u, 1);  /* 0C099D80 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C099D82 mov Rm,Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C099D86u, 2);  /* 0C099D84 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C099D86 add #imm,Rn */
	r0 &= 0x7u;  /* 0C099D88 and #imm,r0 */
	IF(0x0C099D8Au); { u32 t_ = r12; PR = 0x0C099D8Eu; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C099D8Eu); }  /* 0C099D8A jsr @Rn */
L_0C099D8E: BLKS(0x0C099D8Eu);
	{ r9 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C099D68u, 3); goto L_0C099D68; }  /* 0C099D8E bra */
}

void blk_f_0C099DA0(sh3_t *c)
{
	LOCALS;
	goto L_0C099DA0;
L_0C099712: BLKS(0x0C099712u);
	r14 += 0x8u;  /* 0C099712 add #imm,Rn */
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 3);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099730: BLKS(0x0C099730u);
	r0 = 0xB4u; UPD(0x0C099732u, 1);  /* 0C099730 mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C099732 mov #imm,Rn */
	IF(0x0C099734u); MACL = r12 * r0;  /* 0C099734 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C099738u, 4);  /* 0C099736 mov.l @(disp,pc),Rn */
	IF(0x0C099738u); r0 = MACL;  /* 0C099738 sts macl,Rn */
	{ IF(0x0C09973Cu); W32(r0 + r4, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C099712u, 4); goto L_0C099712; }  /* 0C09973A bra */
L_0C099AE4: BLKS(0x0C099AE4u);
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 3);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C099BA8: BLKS(0x0C099BA8u);
	{ u32 c_ = T; IF(0x0C099BAAu); MACL = r12 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C099BC2u, 4); goto L_0C099BC2; } goto L_0C099BAC; }  /* 0C099BA8 bt/s */
L_0C099BAC: BLKS(0x0C099BACu);
	r10 = R32(r7); UPD(0x0C099BAEu, 3);  /* 0C099BAC mov.l @Rm,Rn */
	IF(0x0C099BAEu); r0 = MACL;  /* 0C099BAE sts macl,Rn */
	r0 += r5;  /* 0C099BB0 add Rm,Rn */
	r3 = R32(r0); UPD(0x0C099BB4u, 3);  /* 0C099BB2 mov.l @Rm,Rn */
	r10 &= r8;  /* 0C099BB4 and Rm,Rn */
	r4 = 0xECFFFFFFu; UPD(0x0C099BB8u, 2);  /* 0C099BB6 mov.l @(disp,pc),Rn */
	r8 = 0x40000000u; UPD(0x0C099BBAu, 1);  /* 0C099BB8 mov.l @(disp,pc),Rn */
	r3 &= r4;  /* 0C099BBA and Rm,Rn */
	r3 |= r10;  /* 0C099BBC or Rm,Rn */
	r3 |= r8;  /* 0C099BBE or Rm,Rn */
	W32(r0, r3); UPD(0x0C099BC2u, 4);  /* 0C099BC0 mov.l Rm,@Rn */
L_0C099BC2: BLKS(0x0C099BC2u);
	IF(0x0C099BC2u); MACL = r12 * r6;  /* 0C099BC2 mul.l Rm,Rn */
	r2 = 0xA8u; UPD(0x0C099BC6u, 3);  /* 0C099BC4 mov.w @(disp,pc),Rn */
	IF(0x0C099BC6u); r0 = MACL;  /* 0C099BC6 sts macl,Rn */
	r0 += r5;  /* 0C099BC8 add Rm,Rn */
	r9 = r0;  /* 0C099BCA mov Rm,Rn */
	r9 += r2;  /* 0C099BCC add Rm,Rn */
	r2 += r7;  /* 0C099BCE add Rm,Rn */
	r11 = 0xAFu; UPD(0x0C099BD2u, 6);  /* 0C099BD0 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C099BD2 add #imm,Rn */
	r8 = R32(r7 + 0x24u); UPD(0x0C099BD6u, 2);  /* 0C099BD4 mov.l @(disp,Rm),Rn */
	r9 += 0x1u;  /* 0C099BD6 add #imm,Rn */
	r3 = R32(r7 + 0x28u); UPD(0x0C099BDAu, 2);  /* 0C099BD8 mov.l @(disp,Rm),Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C099BDCu, 1);  /* 0C099BDA mov.b @Rm,Rn */
	r10 = R32(r0 + 0x2Cu); UPD(0x0C099BDEu, 1);  /* 0C099BDC mov.l @(disp,Rm),Rn */
	r1 = R32(r0 + 0x30u); UPD(0x0C099BE0u, 1);  /* 0C099BDE mov.l @(disp,Rm),Rn */
	r8 += r10;  /* 0C099BE0 add Rm,Rn */
	IF(0x0C099BE2u); r13 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C099BE4u, 2);  /* 0C099BE2 mov.b @(r0,Rm),Rn */
	r3 += r1;  /* 0C099BE4 add Rm,Rn */
	r5 = R32(r7 + 0xCu); UPD(0x0C099BE8u, 2);  /* 0C099BE6 mov.l @(disp,Rm),Rn */
	r6 += r13;  /* 0C099BE8 add Rm,Rn */
	W32(r0 + 0x24u, r8); UPD(0x0C099BECu, 2);  /* 0C099BEA mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x28u, r3); UPD(0x0C099BEEu, 1);  /* 0C099BEC mov.l Rm,@(disp,Rn) */
	W8(r9, r6); UPD(0x0C099BF0u, 1);  /* 0C099BEE mov.b Rm,@Rn */
	W32(r0 + 0xCu, r5); UPD(0x0C099BF2u, 1);  /* 0C099BF0 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A8AE0u; UPD(0x0C099BF4u, 1);  /* 0C099BF2 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C099AE4u, 3); goto L_0C099AE4; }  /* 0C099BF4 bra */
L_0C099DA0: BLKS(0x0C099DA0u);
	r11 = 0xC0A8CA0u; UPD(0x0C099DA2u, 1);  /* 0C099DA0 mov.l @(disp,pc),Rn */
	IF(0x0C099DA2u); { u32 t_ = r11; PR = 0x0C099DA6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C099DA6u); }  /* 0C099DA2 jsr @Rn */
L_0C099DA6: BLKS(0x0C099DA6u);
	IF(0x0C099DA6u); T = (s32)r0 >= 0;  /* 0C099DA6 cmp/pz Rn */
	if (!T) { UPD(0x0C099DFCu, 4); goto L_0C099DFC; }  /* 0C099DA8 bf */
L_0C099DAA: BLKS(0x0C099DAAu);
	r6 = 0xB4u; UPD(0x0C099DACu, 1);  /* 0C099DAA mov.w @(disp,pc),Rn */
	IF(0x0C099DACu); MACL = r0 * r6;  /* 0C099DAC mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C099DB0u, 3);  /* 0C099DAE mov.l @(disp,pc),Rn */
	IF(0x0C099DB0u); r7 = MACL;  /* 0C099DB0 sts macl,Rn */
	r7 += r5;  /* 0C099DB2 add Rm,Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C099DB6u, 3);  /* 0C099DB4 mov.l @(disp,Rm),Rn */
	{ T = r0 == 0x2Cu; /* slot cmp/eq #imm,r0 */ UPD(0x0C099BA8u, 3); goto L_0C099BA8; }  /* 0C099DB6 bra */
L_0C099DFC: BLKS(0x0C099DFCu);
	{ IF(0x0C099DFEu); ; /* slot nop */ UPD(0x0C099730u, 3); goto L_0C099730; }  /* 0C099DFC bra */
}

void blk_f_0C099DF0(sh3_t *c)
{
	LOCALS;
	goto L_0C099DF0;
L_0C099712: BLKS(0x0C099712u);
	r14 += 0x8u;  /* 0C099712 add #imm,Rn */
	UPD(0x0C099714u, 1);
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099730: BLKS(0x0C099730u);
	r0 = 0xB4u; UPD(0x0C099732u, 1);  /* 0C099730 mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C099732 mov #imm,Rn */
	IF(0x0C099734u); MACL = r12 * r0;  /* 0C099734 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C099738u, 4);  /* 0C099736 mov.l @(disp,pc),Rn */
	IF(0x0C099738u); r0 = MACL;  /* 0C099738 sts macl,Rn */
	{ IF(0x0C09973Cu); W32(r0 + r4, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C099712u, 4); goto L_0C099712; }  /* 0C09973A bra */
L_0C099AE4: BLKS(0x0C099AE4u);
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 3);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C099BF2: BLKS(0x0C099BF2u);
	r1 = 0xC0A8AE0u; UPD(0x0C099BF4u, 1);  /* 0C099BF2 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C099AE4u, 3); goto L_0C099AE4; }  /* 0C099BF4 bra */
L_0C099DF0: BLKS(0x0C099DF0u);
	r9 = 0xC0A8CA0u; UPD(0x0C099DF2u, 1);  /* 0C099DF0 mov.l @(disp,pc),Rn */
	IF(0x0C099DF2u); { u32 t_ = r9; PR = 0x0C099DF6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C099DF6u); }  /* 0C099DF2 jsr @Rn */
L_0C099DF6: BLKS(0x0C099DF6u);
	IF(0x0C099DF6u); T = (s32)r0 >= 0;  /* 0C099DF6 cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C099E00u, 4); goto L_0C099E00; } goto L_0C099DFC; }  /* 0C099DF8 bt/s */
L_0C099DFC: BLKS(0x0C099DFCu);
	{ IF(0x0C099DFEu); ; /* slot nop */ UPD(0x0C099730u, 4); goto L_0C099730; }  /* 0C099DFC bra */
L_0C099E00: BLKS(0x0C099E00u);
	r3 = 0xB4u; UPD(0x0C099E02u, 1);  /* 0C099E00 mov.w @(disp,pc),Rn */
	IF(0x0C099E02u); MACL = r0 * r3;  /* 0C099E02 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C099E06u, 3);  /* 0C099E04 mov.l @(disp,pc),Rn */
	IF(0x0C099E06u); r2 = MACL;  /* 0C099E06 sts macl,Rn */
	r2 += r7;  /* 0C099E08 add Rm,Rn */
	r0 = R32(r2 + 0x8u); UPD(0x0C099E0Cu, 3);  /* 0C099E0A mov.l @(disp,Rm),Rn */
	T = r0 == 0x13u;  /* 0C099E0C cmp/eq #imm,r0 */
	{ u32 c_ = T; T = r0 == 0x2Cu; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C099E16u, 4); goto L_0C099E16; } goto L_0C099E12; }  /* 0C099E0E bt/s */
L_0C099E12: BLKS(0x0C099E12u);
	{ u32 c_ = !T; IF(0x0C099E14u); MACL = r12 * r3; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C099E1Au, 5); goto L_0C099E1A; } UPD(0x0C099E16u, 2); goto L_0C099E16; }  /* 0C099E12 bf/s */
L_0C099E16: BLKS(0x0C099E16u);
	{ r0 = R32(r2 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C099F50u, 3); goto L_0C099F50; }  /* 0C099E16 bra */
L_0C099E1A: BLKS(0x0C099E1Au);
	IF(0x0C099E1Au); r2 = MACL;  /* 0C099E1A sts macl,Rn */
	r2 += r7;  /* 0C099E1C add Rm,Rn */
	r13 = R32(r2 + 0x2Cu); UPD(0x0C099E20u, 3);  /* 0C099E1E mov.l @(disp,Rm),Rn */
	r9 = R32(r2 + 0x30u); UPD(0x0C099E22u, 1);  /* 0C099E20 mov.l @(disp,Rm),Rn */
L_0C099E22: BLKS(0x0C099E22u);
	r6 = 0xB4u; UPD(0x0C099E24u, 1);  /* 0C099E22 mov.w @(disp,pc),Rn */
	IF(0x0C099E24u); MACL = r12 * r6;  /* 0C099E24 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C099E28u, 3);  /* 0C099E26 mov.l @(disp,pc),Rn */
	IF(0x0C099E28u); r11 = MACL;  /* 0C099E28 sts macl,Rn */
	IF(0x0C099E2Au); MACL = r10 * r6;  /* 0C099E2A mul.l Rm,Rn */
	r11 += r5;  /* 0C099E2C add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C099E30u, 5);  /* 0C099E2E mov.w @(disp,pc),Rn */
	IF(0x0C099E30u); r7 = MACL;  /* 0C099E30 sts macl,Rn */
	r7 += r5;  /* 0C099E32 add Rm,Rn */
	r4 = R32(r7 + 0x28u); UPD(0x0C099E36u, 3);  /* 0C099E34 mov.l @(disp,Rm),Rn */
	r4 += r9;  /* 0C099E36 add Rm,Rn */
	r9 = r11;  /* 0C099E38 mov Rm,Rn */
	r9 += r0;  /* 0C099E3A add Rm,Rn */
	r0 += r7;  /* 0C099E3C add Rm,Rn */
	r0 += 0x1u;  /* 0C099E3E add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C099E42u, 6);  /* 0C099E40 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C099E42 add #imm,Rn */
	r2 = R32(r7 + 0x24u); UPD(0x0C099E46u, 2);  /* 0C099E44 mov.l @(disp,Rm),Rn */
	r0 = r11;  /* 0C099E46 mov Rm,Rn */
	r10 = 0xAFu; UPD(0x0C099E4Au, 2);  /* 0C099E48 mov.w @(disp,pc),Rn */
	r2 += r13;  /* 0C099E4A add Rm,Rn */
	IF(0x0C099E4Cu); r13 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C099E4Eu, 2);  /* 0C099E4C mov.b @(r0,Rm),Rn */
	W32(r11 + 0x28u, r4); UPD(0x0C099E50u, 1);  /* 0C099E4E mov.l Rm,@(disp,Rn) */
	r10 = r11;  /* 0C099E50 mov Rm,Rn */
	r4 = r3;  /* 0C099E52 mov Rm,Rn */
	r10 += 0x3Cu;  /* 0C099E54 add #imm,Rn */
	r4 += r13;  /* 0C099E56 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C099E5Au, 5);  /* 0C099E58 mov.w @Rm,Rn */
	W32(r11 + 0x24u, r2); UPD(0x0C099E5Cu, 1);  /* 0C099E5A mov.l Rm,@(disp,Rn) */
	T = (r3 & r3) == 0;  /* 0C099E5C tst Rm,Rn */
	{ u32 c_ = T; W8(r9, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C099EB0u, 4); goto L_0C099EB0; } UPD(0x0C099E62u, 1); goto L_0C099E62; }  /* 0C099E5E bt/s */
L_0C099E62: BLKS(0x0C099E62u);
	r11 += 0x7Eu;  /* 0C099E62 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r11); UPD(0x0C099E66u, 2);  /* 0C099E64 mov.w @Rm,Rn */
	IF(0x0C099E66u); MACL = r9 * r6;  /* 0C099E66 mul.l Rm,Rn */
	IF(0x0C099E68u); r6 = MACL;  /* 0C099E68 sts macl,Rn */
	r6 += r5;  /* 0C099E6A add Rm,Rn */
	r6 += 0x3Cu;  /* 0C099E6C add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r6); UPD(0x0C099E70u, 6);  /* 0C099E6E mov.w @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C099E70 tst Rm,Rn */
	{ u32 c_ = !T; r11 += 0xFFFFFF82u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C099E90u, 4); goto L_0C099E90; } goto L_0C099E76; }  /* 0C099E72 bf/s */
L_0C099E76: BLKS(0x0C099E76u);
	r7 = 0xC098E60u; UPD(0x0C099E78u, 2);  /* 0C099E76 mov.l @(disp,pc),Rn */
	IF(0x0C099E78u); { u32 t_ = r7; PR = 0x0C099E7Cu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C098E60, 0x0C098E60u, 0x0C099E7Cu); }  /* 0C099E78 jsr @Rn */
L_0C099E7C: BLKS(0x0C099E7Cu);
	W16(r10, r9); UPD(0x0C099E7Eu, 1);  /* 0C099E7C mov.w Rm,@Rn */
L_0C099E7E: BLKS(0x0C099E7Eu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C099E7E bra */
L_0C099E90: BLKS(0x0C099E90u);
	r13 = 0x100u; UPD(0x0C099E92u, 1);  /* 0C099E90 mov.w @(disp,pc),Rn */
	r13 |= r8;  /* 0C099E92 or Rm,Rn */
	r8 = R32(r11); UPD(0x0C099E96u, 2);  /* 0C099E94 mov.l @Rm,Rn */
	r3 = ~r13;  /* 0C099E96 not Rm,Rn */
	r5 = R32(r7); UPD(0x0C099E9Au, 2);  /* 0C099E98 mov.l @Rm,Rn */
	r8 &= r3;  /* 0C099E9A and Rm,Rn */
	r0 = R32(r11 + 0xCu); UPD(0x0C099E9Eu, 2);  /* 0C099E9C mov.l @(disp,Rm),Rn */
	r5 &= r13;  /* 0C099E9E and Rm,Rn */
	r0 += 0x1u;  /* 0C099EA0 add #imm,Rn */
	r8 |= r5;  /* 0C099EA2 or Rm,Rn */
	r0 &= 0xFu;  /* 0C099EA4 and #imm,r0 */
	W32(r11, r8); UPD(0x0C099EA8u, 5);  /* 0C099EA6 mov.l Rm,@Rn */
	{ W32(r11 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C099BF2u, 3); goto L_0C099BF2; }  /* 0C099EA8 bra */
L_0C099EB0: BLKS(0x0C099EB0u);
	r8 = 0x98u; UPD(0x0C099EB2u, 1);  /* 0C099EB0 mov.w @(disp,pc),Rn */
	r10 = 0x2u;  /* 0C099EB2 mov #imm,Rn */
	r8 += r11;  /* 0C099EB4 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C099EB8u, 3);  /* 0C099EB6 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C099EB8 add #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C099EBA extu.b Rm,Rn */
	T = r0 > r10;  /* 0C099EBC cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r8, r2); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C099E7Eu, 6); goto L_0C099E7E; } UPD(0x0C099EC2u, 1); goto L_0C099EC2; }  /* 0C099EBE bf/s */
L_0C099EC2: BLKS(0x0C099EC2u);
	r10 = 0xB0u; UPD(0x0C099EC4u, 1);  /* 0C099EC2 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C099EC4 add #imm,Rn */
	r10 += r11;  /* 0C099EC6 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C099ECAu, 3);  /* 0C099EC8 mov.b @Rm,Rn */
	r2 = r4 & 0xFF;  /* 0C099ECA extu.b Rm,Rn */
	r13 = 0xC062780u; UPD(0x0C099ECEu, 2);  /* 0C099ECC mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C099ECE extu.b Rm,Rn */
	W8(r8, r3); UPD(0x0C099ED2u, 2);  /* 0C099ED0 mov.b Rm,@Rn */
	r0 = 0xFFFA0000u; UPD(0x0C099ED4u, 1);  /* 0C099ED2 mov.l @(disp,pc),Rn */
	W32(r15, r6); UPD(0x0C099ED6u, 1);  /* 0C099ED4 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C099ED8u, 1);  /* 0C099ED6 mov.l Rm,@(disp,Rn) */
	r4 = 0x2000u; UPD(0x0C099EDAu, 1);  /* 0C099ED8 mov.w @(disp,pc),Rn */
	IF(0x0C099EDAu); { u32 t_ = r13; PR = 0x0C099EDEu; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C099EDEu); }  /* 0C099EDA jsr @Rn */
L_0C099EDE: BLKS(0x0C099EDEu);
	r3 = 0xFFFFF000u; UPD(0x0C099EE0u, 1);  /* 0C099EDE mov.w @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C099EE0 mov #imm,Rn */
	r0 += r3;  /* 0C099EE2 add Rm,Rn */
	IF(0x0C099EE4u); ARG0(0x405Du); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C099EE4 shld Rm,Rn */
	r13 = 0xC0BE860u; UPD(0x0C099EE8u, 4);  /* 0C099EE6 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C099EE8 mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C099EECu, 2);  /* 0C099EEA mov.l Rm,@(disp,Rn) */
	r4 = R32(r11); UPD(0x0C099EEEu, 1);  /* 0C099EEC mov.l @Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C099EF0u, 1);  /* 0C099EEE mov.l @(disp,Rm),Rn */
	IF(0x0C099EF0u); { u32 t_ = r13; PR = 0x0C099EF4u; r7 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BE860, 0x0C0BE860u, 0x0C099EF4u); }  /* 0C099EF0 jsr @Rn */
L_0C099EF4: BLKS(0x0C099EF4u);
	r1 = r8;  /* 0C099EF4 mov Rm,Rn */
	r1 += 0x1u;  /* 0C099EF6 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r1); UPD(0x0C099EFAu, 3);  /* 0C099EF8 mov.b @Rm,Rn */
	r4 = 0x3Bu;  /* 0C099EFA mov #imm,Rn */
	r7 += 0x1u;  /* 0C099EFC add #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C099EFE extu.b Rm,Rn */
	W8(r1, r7); UPD(0x0C099F02u, 4);  /* 0C099F00 mov.b Rm,@Rn */
	T = r6 > r4;  /* 0C099F02 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r15 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C099E7Eu, 4); goto L_0C099E7E; } goto L_0C099F08; }  /* 0C099F04 bf/s */
L_0C099F08: BLKS(0x0C099F08u);
	r6 = (u32)(s32)(s8)R8(r10); UPD(0x0C099F0Au, 2);  /* 0C099F08 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C099F0A add #imm,Rn */
	r2 = r6 & 0xFF;  /* 0C099F0C extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C099F10u, 3);  /* 0C099F0E mov.l Rm,@Rn */
	r5 = 0x6u;  /* 0C099F10 mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C099F14u, 2);  /* 0C099F12 mov.b @Rm,Rn */
	r3 = r0 & 0xFF;  /* 0C099F14 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C099F18u, 2);  /* 0C099F16 mov.l Rm,@(disp,Rn) */
	r13 = 0xC0BD6F0u; UPD(0x0C099F1Au, 1);  /* 0C099F18 mov.l @(disp,pc),Rn */
	r4 = R32(r11); UPD(0x0C099F1Cu, 1);  /* 0C099F1A mov.l @Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C099F1Eu, 1);  /* 0C099F1C mov.l @(disp,Rm),Rn */
	IF(0x0C099F1Eu); { u32 t_ = r13; PR = 0x0C099F22u; r7 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C099F22u); }  /* 0C099F1E jsr @Rn */
L_0C099F22: BLKS(0x0C099F22u);
	r4 = 0x10u;  /* 0C099F22 mov #imm,Rn */
	r10 = 0xC0A8B10u; UPD(0x0C099F26u, 2);  /* 0C099F24 mov.l @(disp,pc),Rn */
	r5 = 0x5Du;  /* 0C099F26 mov #imm,Rn */
	W32(r11 + 0xCu, r4); UPD(0x0C099F2Au, 2);  /* 0C099F28 mov.l Rm,@(disp,Rn) */
	r15 += 0x8u;  /* 0C099F2A add #imm,Rn */
	r8 = 0xC0A9AE0u; UPD(0x0C099F2Eu, 2);  /* 0C099F2C mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C099F2E mov Rm,Rn */
	IF(0x0C099F30u); { u32 t_ = r10; PR = 0x0C099F34u; W32(r11 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C099F34u); }  /* 0C099F30 jsr @Rn */
L_0C099F34: BLKS(0x0C099F34u);
	r9 = 0x1A0000u; UPD(0x0C099F36u, 1);  /* 0C099F34 mov.l @(disp,pc),Rn */
	IF(0x0C099F36u); { u32 t_ = r8; PR = 0x0C099F3Au; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C099F3Au); }  /* 0C099F36 jsr @Rn */
L_0C099F3A: BLKS(0x0C099F3Au);
	r1 = R32(r11); UPD(0x0C099F3Cu, 1);  /* 0C099F3A mov.l @Rm,Rn */
	r12 = 0x13000000u; UPD(0x0C099F3Eu, 1);  /* 0C099F3C mov.l @(disp,pc),Rn */
	W32(r11 + 0x2Cu, r9); UPD(0x0C099F40u, 1);  /* 0C099F3E mov.l Rm,@(disp,Rn) */
	r1 |= r12;  /* 0C099F40 or Rm,Rn */
	{ W32(r11, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C099712u, 4); goto L_0C099712; }  /* 0C099F42 bra */
L_0C099F50: BLKS(0x0C099F50u);
	r5 = 0xC1C7174u; UPD(0x0C099F52u, 1);  /* 0C099F50 mov.l @(disp,pc),Rn */
	IF(0x0C099F52u); r0 <<= 2;  /* 0C099F52 shll2 Rn */
	r4 = 0xC1C71B4u; UPD(0x0C099F56u, 2);  /* 0C099F54 mov.l @(disp,pc),Rn */
	IF(0x0C099F56u); r13 = R32(r0 + r5); UPD(0x0C099F58u, 1);  /* 0C099F56 mov.l @(r0,Rm),Rn */
	IF(0x0C099F58u); r9 = R32(r0 + r4); UPD(0x0C099F5Au, 1);  /* 0C099F58 mov.l @(r0,Rm),Rn */
	r0 = R32(r2 + 0x30u); UPD(0x0C099F5Cu, 1);  /* 0C099F5A mov.l @(disp,Rm),Rn */
	IF(0x0C099F5Cu); T = (s32)r0 > 0;  /* 0C099F5C cmp/pl Rn */
	{ u32 c_ = !T; IF(0x0C099F60u); MACL = r12 * r3; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C099F6Au, 5); goto L_0C099F6A; } goto L_0C099F62; }  /* 0C099F5E bf/s */
L_0C099F62: BLKS(0x0C099F62u);
	r6 = 0x20000u; UPD(0x0C099F64u, 3);  /* 0C099F62 mov.l @(disp,pc),Rn */
	r6 -= r9;  /* 0C099F64 sub Rm,Rn */
	r9 = r6;  /* 0C099F66 mov Rm,Rn */
	IF(0x0C099F68u); MACL = r12 * r3;  /* 0C099F68 mul.l Rm,Rn */
	UPD(0x0C099F6Au, 4);
L_0C099F6A: BLKS(0x0C099F6Au);
	IF(0x0C099F6Au); r11 = MACL;  /* 0C099F6A sts macl,Rn */
	r11 += r7;  /* 0C099F6C add Rm,Rn */
	W32(r11 + 0x2Cu, r13); UPD(0x0C099F70u, 3);  /* 0C099F6E mov.l Rm,@(disp,Rn) */
	{ W32(r11 + 0x30u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C099E22u, 3); goto L_0C099E22; }  /* 0C099F70 bra */
}

void blk_f_0C099FC0(sh3_t *c)
{
	LOCALS;
	goto L_0C099FC0;
L_0C099712: BLKS(0x0C099712u);
	r14 += 0x8u;  /* 0C099712 add #imm,Rn */
	UPD(0x0C099714u, 1);
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099730: BLKS(0x0C099730u);
	r0 = 0xB4u; UPD(0x0C099732u, 1);  /* 0C099730 mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C099732 mov #imm,Rn */
	IF(0x0C099734u); MACL = r12 * r0;  /* 0C099734 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C099738u, 4);  /* 0C099736 mov.l @(disp,pc),Rn */
	IF(0x0C099738u); r0 = MACL;  /* 0C099738 sts macl,Rn */
	{ IF(0x0C09973Cu); W32(r0 + r4, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C099712u, 4); goto L_0C099712; }  /* 0C09973A bra */
L_0C099FC0: BLKS(0x0C099FC0u);
	r8 = 0xC0A8CA0u; UPD(0x0C099FC2u, 1);  /* 0C099FC0 mov.l @(disp,pc),Rn */
	IF(0x0C099FC2u); { u32 t_ = r8; PR = 0x0C099FC6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C099FC6u); }  /* 0C099FC2 jsr @Rn */
L_0C099FC6: BLKS(0x0C099FC6u);
	IF(0x0C099FC6u); T = (s32)r0 >= 0;  /* 0C099FC6 cmp/pz Rn */
	if (!T) { UPD(0x0C09A0AAu, 4); goto L_0C09A0AA; }  /* 0C099FC8 bf */
L_0C099FCA: BLKS(0x0C099FCAu);
	r3 = 0xB4u; UPD(0x0C099FCCu, 1);  /* 0C099FCA mov.w @(disp,pc),Rn */
	IF(0x0C099FCCu); MACL = r12 * r3;  /* 0C099FCC mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C099FD0u, 3);  /* 0C099FCE mov.l @(disp,pc),Rn */
	IF(0x0C099FD0u); r8 = MACL;  /* 0C099FD0 sts macl,Rn */
	IF(0x0C099FD2u); MACL = r0 * r3;  /* 0C099FD2 mul.l Rm,Rn */
	r8 += r6;  /* 0C099FD4 add Rm,Rn */
	r11 = r8;  /* 0C099FD6 mov Rm,Rn */
	r0 = 0xA8u; UPD(0x0C099FDAu, 6);  /* 0C099FD8 mov.w @(disp,pc),Rn */
	IF(0x0C099FDAu); r3 = MACL;  /* 0C099FDA sts macl,Rn */
	r3 += r6;  /* 0C099FDC add Rm,Rn */
	r11 += r0;  /* 0C099FDE add Rm,Rn */
	r0 += r3;  /* 0C099FE0 add Rm,Rn */
	r0 += 0x1u;  /* 0C099FE2 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C099FE6u, 6);  /* 0C099FE4 mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C099FE6 add #imm,Rn */
	r7 = 0xAFu; UPD(0x0C099FEAu, 2);  /* 0C099FE8 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C099FEA mov Rm,Rn */
	r5 = R32(r3 + 0x24u); UPD(0x0C099FEEu, 2);  /* 0C099FEC mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C099FEE mov Rm,Rn */
	r4 = R32(r3 + 0x28u); UPD(0x0C099FF2u, 2);  /* 0C099FF0 mov.l @(disp,Rm),Rn */
	IF(0x0C099FF2u); r9 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C099FF4u, 1);  /* 0C099FF2 mov.b @(r0,Rm),Rn */
	r13 = R32(r8 + 0x2Cu); UPD(0x0C099FF6u, 1);  /* 0C099FF4 mov.l @(disp,Rm),Rn */
	r6 += r9;  /* 0C099FF6 add Rm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C099FFAu, 2);  /* 0C099FF8 mov.l @(disp,Rm),Rn */
	r5 += r13;  /* 0C099FFA add Rm,Rn */
	r4 += r1;  /* 0C099FFC add Rm,Rn */
	r0 = r6 & 0xFF;  /* 0C099FFE extu.b Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C09A002u, 4);  /* 0C09A000 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x14u;  /* 0C09A002 cmp/eq #imm,r0 */
	W32(r8 + 0x28u, r4); UPD(0x0C09A006u, 2);  /* 0C09A004 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W8(r11, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09A090u, 3); goto L_0C09A090; } UPD(0x0C09A00Au, 1); goto L_0C09A00A; }  /* 0C09A006 bt/s */
L_0C09A00A: BLKS(0x0C09A00Au);
	r7 = R32(r8); UPD(0x0C09A00Cu, 1);  /* 0C09A00A mov.l @Rm,Rn */
	r0 = R32(r3); UPD(0x0C09A00Eu, 1);  /* 0C09A00C mov.l @Rm,Rn */
	r4 = 0xFFFFFEFFu; UPD(0x0C09A010u, 1);  /* 0C09A00E mov.w @(disp,pc),Rn */
	r11 = 0x100u; UPD(0x0C09A012u, 1);  /* 0C09A010 mov.w @(disp,pc),Rn */
	r7 &= r4;  /* 0C09A012 and Rm,Rn */
	r0 &= r11;  /* 0C09A014 and Rm,Rn */
	r7 |= r0;  /* 0C09A016 or Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C09A01Au, 4);  /* 0C09A018 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C09A01A mov Rm,Rn */
	r10 = 0xC0A8AE0u; UPD(0x0C09A01Eu, 2);  /* 0C09A01C mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C09A01E add #imm,Rn */
	r9 = 0x9Cu; UPD(0x0C09A022u, 2);  /* 0C09A020 mov.w @(disp,pc),Rn */
	r0 &= 0xFu;  /* 0C09A022 and #imm,r0 */
	W32(r8, r7); UPD(0x0C09A026u, 2);  /* 0C09A024 mov.l Rm,@Rn */
	r9 += r8;  /* 0C09A026 add Rm,Rn */
	IF(0x0C09A028u); { u32 t_ = r10; PR = 0x0C09A02Cu; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09A02Cu); }  /* 0C09A028 jsr @Rn */
L_0C09A02C: BLKS(0x0C09A02Cu);
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C09A02Eu, 1);  /* 0C09A02C mov.b @Rm,Rn */
	r10 = r2 & 0xFF;  /* 0C09A02E extu.b Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09A030 tst Rm,Rn */
	{ u32 c_ = T; r2 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09A070u, 5); goto L_0C09A070; } goto L_0C09A036; }  /* 0C09A032 bt/s */
L_0C09A036: BLKS(0x0C09A036u);
	r2 += 0x1u;  /* 0C09A036 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C09A03Au, 3);  /* 0C09A038 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C09A03A add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C09A03C extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C09A03E cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09A066u, 6); goto L_0C09A066; } UPD(0x0C09A044u, 1); goto L_0C09A044; }  /* 0C09A040 bf/s */
L_0C09A044: BLKS(0x0C09A044u);
	r10 = 0x0u;  /* 0C09A044 mov #imm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C09A048u, 2);  /* 0C09A046 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09A048 add #imm,Rn */
	W8(r2, r10); UPD(0x0C09A04Cu, 2);  /* 0C09A04A mov.b Rm,@Rn */
	r4 = 0x2u;  /* 0C09A04C mov #imm,Rn */
	r6 = 0x28000u; UPD(0x0C09A050u, 2);  /* 0C09A04E mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C09A050 mov Rm,Rn */
	r13 = 0xC072C90u; UPD(0x0C09A054u, 2);  /* 0C09A052 mov.l @(disp,pc),Rn */
	r3 = 0xFFF00000u; UPD(0x0C09A056u, 1);  /* 0C09A054 mov.l @(disp,pc),Rn */
	W32(r15, r6); UPD(0x0C09A058u, 1);  /* 0C09A056 mov.l Rm,@Rn */
	r5 += r3;  /* 0C09A058 add Rm,Rn */
	IF(0x0C09A05Au); { u32 t_ = r13; PR = 0x0C09A05Eu; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C072C90, 0x0C072C90u, 0x0C09A05Eu); }  /* 0C09A05A jsr @Rn */
L_0C09A05E: BLKS(0x0C09A05Eu);
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C09A060u, 1);  /* 0C09A05E mov.b @Rm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C09A060 add #imm,Rn */
	W8(r9, r5); UPD(0x0C09A064u, 2);  /* 0C09A062 mov.b Rm,@Rn */
	r15 += 0x4u;  /* 0C09A064 add #imm,Rn */
	UPD(0x0C09A066u, 1);
L_0C09A066: BLKS(0x0C09A066u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C09A066 bra */
L_0C09A070: BLKS(0x0C09A070u);
	r4 = r12;  /* 0C09A070 mov Rm,Rn */
	r12 = 0xC0BC1B0u; UPD(0x0C09A074u, 2);  /* 0C09A072 mov.l @(disp,pc),Rn */
	r5 = 0xF0u; UPD(0x0C09A076u, 1);  /* 0C09A074 mov.w @(disp,pc),Rn */
	IF(0x0C09A076u); { u32 t_ = r12; PR = 0x0C09A07Au; r6 = 0x1Eu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09A07Au); }  /* 0C09A076 jsr @Rn */
L_0C09A07A: BLKS(0x0C09A07Au);
	T = (r0 & r0) == 0;  /* 0C09A07A tst Rm,Rn */
	if (T) { UPD(0x0C09A066u, 4); goto L_0C09A066; }  /* 0C09A07C bt */
L_0C09A07E: BLKS(0x0C09A07Eu);
	r8 = 0x8u;  /* 0C09A07E mov #imm,Rn */
	W8(r9, r8); UPD(0x0C09A082u, 2);  /* 0C09A080 mov.b Rm,@Rn */
	r9 += 0x1u;  /* 0C09A082 add #imm,Rn */
	{ W8(r9, r10); /* slot mov.b Rm,@Rn */ UPD(0x0C099712u, 4); goto L_0C099712; }  /* 0C09A084 bra */
L_0C09A090: BLKS(0x0C09A090u);
	r11 = R32(r8); UPD(0x0C09A092u, 1);  /* 0C09A090 mov.l @Rm,Rn */
	r9 = 0x13000000u; UPD(0x0C09A094u, 1);  /* 0C09A092 mov.l @(disp,pc),Rn */
	r11 |= r9;  /* 0C09A094 or Rm,Rn */
	{ W32(r8, r11); /* slot mov.l Rm,@Rn */ UPD(0x0C09A00Au, 4); goto L_0C09A00A; }  /* 0C09A096 bra */
L_0C09A0AA: BLKS(0x0C09A0AAu);
	{ IF(0x0C09A0ACu); ; /* slot nop */ UPD(0x0C099730u, 3); goto L_0C099730; }  /* 0C09A0AA bra */
}

void blk_f_0C09A0A0(sh3_t *c)
{
	LOCALS;
	goto L_0C09A0A0;
L_0C099712: BLKS(0x0C099712u);
	r14 += 0x8u;  /* 0C099712 add #imm,Rn */
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 3);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099730: BLKS(0x0C099730u);
	r0 = 0xB4u; UPD(0x0C099732u, 1);  /* 0C099730 mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C099732 mov #imm,Rn */
	IF(0x0C099734u); MACL = r12 * r0;  /* 0C099734 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C099738u, 4);  /* 0C099736 mov.l @(disp,pc),Rn */
	IF(0x0C099738u); r0 = MACL;  /* 0C099738 sts macl,Rn */
	{ IF(0x0C09973Cu); W32(r0 + r4, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C099712u, 4); goto L_0C099712; }  /* 0C09973A bra */
L_0C099B58: BLKS(0x0C099B58u);
	r4 = r12;  /* 0C099B58 mov Rm,Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C099B5Cu, 2);  /* 0C099B5A mov.l @(disp,pc),Rn */
	IF(0x0C099B5Cu); { u32 t_ = r12; PR = 0x0C099B60u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C099B60u); }  /* 0C099B5C jsr @Rn */
L_0C099B60: BLKS(0x0C099B60u);
	r5 = R32(r8); UPD(0x0C099B62u, 1);  /* 0C099B60 mov.l @Rm,Rn */
	r13 = R32(r9); UPD(0x0C099B64u, 1);  /* 0C099B62 mov.l @Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C099B66u, 1);  /* 0C099B64 mov.w @(disp,pc),Rn */
	r3 = 0x100u; UPD(0x0C099B68u, 1);  /* 0C099B66 mov.w @(disp,pc),Rn */
	r5 &= r2;  /* 0C099B68 and Rm,Rn */
	r13 &= r3;  /* 0C099B6A and Rm,Rn */
	r5 |= r13;  /* 0C099B6C or Rm,Rn */
	{ W32(r8, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C099712u, 6); goto L_0C099712; }  /* 0C099B6E bra */
L_0C09A0A0: BLKS(0x0C09A0A0u);
	r11 = 0xC0A8CA0u; UPD(0x0C09A0A2u, 1);  /* 0C09A0A0 mov.l @(disp,pc),Rn */
	IF(0x0C09A0A2u); { u32 t_ = r11; PR = 0x0C09A0A6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09A0A6u); }  /* 0C09A0A2 jsr @Rn */
L_0C09A0A6: BLKS(0x0C09A0A6u);
	IF(0x0C09A0A6u); T = (s32)r0 >= 0;  /* 0C09A0A6 cmp/pz Rn */
	if (T) { UPD(0x0C09A0AEu, 4); goto L_0C09A0AE; }  /* 0C09A0A8 bt */
L_0C09A0AA: BLKS(0x0C09A0AAu);
	{ IF(0x0C09A0ACu); ; /* slot nop */ UPD(0x0C099730u, 3); goto L_0C099730; }  /* 0C09A0AA bra */
L_0C09A0AE: BLKS(0x0C09A0AEu);
	r9 = 0xB4u; UPD(0x0C09A0B0u, 1);  /* 0C09A0AE mov.w @(disp,pc),Rn */
	IF(0x0C09A0B0u); MACL = r12 * r9;  /* 0C09A0B0 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09A0B4u, 3);  /* 0C09A0B2 mov.l @(disp,pc),Rn */
	IF(0x0C09A0B4u); r8 = MACL;  /* 0C09A0B4 sts macl,Rn */
	IF(0x0C09A0B6u); MACL = r0 * r9;  /* 0C09A0B6 mul.l Rm,Rn */
	r8 += r7;  /* 0C09A0B8 add Rm,Rn */
	r3 = 0xA8u; UPD(0x0C09A0BCu, 5);  /* 0C09A0BA mov.w @(disp,pc),Rn */
	IF(0x0C09A0BCu); r9 = MACL;  /* 0C09A0BC sts macl,Rn */
	r9 += r7;  /* 0C09A0BE add Rm,Rn */
	r0 = R32(r9 + 0x28u); UPD(0x0C09A0C2u, 3);  /* 0C09A0C0 mov.l @(disp,Rm),Rn */
	r10 = r8;  /* 0C09A0C2 mov Rm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C09A0C6u, 2);  /* 0C09A0C4 mov.l @(disp,Rm),Rn */
	r10 += r3;  /* 0C09A0C6 add Rm,Rn */
	r0 += r1;  /* 0C09A0C8 add Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C09A0CCu, 3);  /* 0C09A0CA mov.l Rm,@(disp,Rn) */
	r3 += r9;  /* 0C09A0CC add Rm,Rn */
	r3 += 0x1u;  /* 0C09A0CE add #imm,Rn */
	r13 = 0xAFu; UPD(0x0C09A0D2u, 3);  /* 0C09A0D0 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09A0D2 mov Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r3); UPD(0x0C09A0D6u, 2);  /* 0C09A0D4 mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C09A0D6 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C09A0DAu, 2);  /* 0C09A0D8 mov.l @(disp,Rm),Rn */
	r7 = r5;  /* 0C09A0DA mov Rm,Rn */
	IF(0x0C09A0DCu); r4 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C09A0DEu, 2);  /* 0C09A0DC mov.b @(r0,Rm),Rn */
	r11 = R32(r8 + 0x2Cu); UPD(0x0C09A0E0u, 1);  /* 0C09A0DE mov.l @(disp,Rm),Rn */
	r7 += r4;  /* 0C09A0E0 add Rm,Rn */
	r6 += r11;  /* 0C09A0E2 add Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C09A0E4 extu.b Rm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C09A0E8u, 4);  /* 0C09A0E6 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x14u;  /* 0C09A0E8 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r10, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09A100u, 4); goto L_0C09A100; } UPD(0x0C09A0EEu, 1); goto L_0C09A0EE; }  /* 0C09A0EA bt/s */
L_0C09A0EE: BLKS(0x0C09A0EEu);
	r0 = R32(r8 + 0xCu); UPD(0x0C09A0F0u, 1);  /* 0C09A0EE mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C09A0F0 add #imm,Rn */
	{ r0 &= 0xFu; /* slot and #imm,r0 */ UPD(0x0C099B58u, 4); goto L_0C099B58; }  /* 0C09A0F2 bra */
L_0C09A100: BLKS(0x0C09A100u);
	r10 = R32(r8); UPD(0x0C09A102u, 1);  /* 0C09A100 mov.l @Rm,Rn */
	r4 = 0x13000000u; UPD(0x0C09A104u, 1);  /* 0C09A102 mov.l @(disp,pc),Rn */
	r10 |= r4;  /* 0C09A104 or Rm,Rn */
	{ W32(r8, r10); /* slot mov.l Rm,@Rn */ UPD(0x0C09A0EEu, 4); goto L_0C09A0EE; }  /* 0C09A106 bra */
}

void blk_f_0C09A140(sh3_t *c)
{
	LOCALS;
	goto L_0C09A140;
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099AE0: BLKS(0x0C099AE0u);
	r1 = 0xC098E60u; UPD(0x0C099AE2u, 1);  /* 0C099AE0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C099AE2 mov Rm,Rn */
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 4);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C09A140: BLKS(0x0C09A140u);
	r9 = 0xC0A8BF0u; UPD(0x0C09A142u, 1);  /* 0C09A140 mov.l @(disp,pc),Rn */
	IF(0x0C09A142u); { u32 t_ = r9; PR = 0x0C09A146u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C09A146u); }  /* 0C09A142 jsr @Rn */
L_0C09A146: BLKS(0x0C09A146u);
	IF(0x0C09A146u); T = (s32)r0 >= 0;  /* 0C09A146 cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09A150u, 4); goto L_0C09A150; } goto L_0C09A14C; }  /* 0C09A148 bt/s */
L_0C09A14C: BLKS(0x0C09A14Cu);
	{ IF(0x0C09A14Eu); ; /* slot nop */ UPD(0x0C099AE0u, 4); goto L_0C099AE0; }  /* 0C09A14C bra */
L_0C09A150: BLKS(0x0C09A150u);
	r5 = 0xB4u; UPD(0x0C09A152u, 1);  /* 0C09A150 mov.w @(disp,pc),Rn */
	IF(0x0C09A152u); MACL = r12 * r5;  /* 0C09A152 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C09A156u, 3);  /* 0C09A154 mov.l @(disp,pc),Rn */
	IF(0x0C09A156u); r0 = MACL;  /* 0C09A156 sts macl,Rn */
	IF(0x0C09A158u); MACL = r10 * r5;  /* 0C09A158 mul.l Rm,Rn */
	r0 += r13;  /* 0C09A15A add Rm,Rn */
	r1 = R32(r0 + 0x2Cu); UPD(0x0C09A15Eu, 5);  /* 0C09A15C mov.l @(disp,Rm),Rn */
	IF(0x0C09A15Eu); r5 = MACL;  /* 0C09A15E sts macl,Rn */
	r5 += r13;  /* 0C09A160 add Rm,Rn */
	r4 = R32(r5 + 0x24u); UPD(0x0C09A164u, 3);  /* 0C09A162 mov.l @(disp,Rm),Rn */
	r6 = r0;  /* 0C09A164 mov Rm,Rn */
	r2 = 0xA8u; UPD(0x0C09A168u, 2);  /* 0C09A166 mov.w @(disp,pc),Rn */
	r4 += r1;  /* 0C09A168 add Rm,Rn */
	r3 = R32(r5 + 0x28u); UPD(0x0C09A16Cu, 2);  /* 0C09A16A mov.l @(disp,Rm),Rn */
	r6 += r2;  /* 0C09A16C add Rm,Rn */
	r8 = R32(r0 + 0x30u); UPD(0x0C09A170u, 2);  /* 0C09A16E mov.l @(disp,Rm),Rn */
	r2 += r5;  /* 0C09A170 add Rm,Rn */
	W32(r0 + 0x24u, r4); UPD(0x0C09A174u, 2);  /* 0C09A172 mov.l Rm,@(disp,Rn) */
	r3 += r8;  /* 0C09A174 add Rm,Rn */
	r9 = 0xAFu; UPD(0x0C09A178u, 2);  /* 0C09A176 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C09A178 add #imm,Rn */
	r8 = R32(r0); UPD(0x0C09A17Cu, 2);  /* 0C09A17A mov.l @Rm,Rn */
	r6 += 0x1u;  /* 0C09A17C add #imm,Rn */
	r4 = R32(r5); UPD(0x0C09A180u, 2);  /* 0C09A17E mov.l @Rm,Rn */
	r13 = 0xFFFFFEFFu; UPD(0x0C09A182u, 1);  /* 0C09A180 mov.w @(disp,pc),Rn */
	r1 = 0x100u; UPD(0x0C09A184u, 1);  /* 0C09A182 mov.w @(disp,pc),Rn */
	r8 &= r13;  /* 0C09A184 and Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C09A188u, 2);  /* 0C09A186 mov.b @Rm,Rn */
	r4 &= r1;  /* 0C09A188 and Rm,Rn */
	IF(0x0C09A18Au); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09A18Cu, 2);  /* 0C09A18A mov.b @(r0,Rm),Rn */
	r8 |= r4;  /* 0C09A18C or Rm,Rn */
	W32(r0 + 0x28u, r3); UPD(0x0C09A190u, 2);  /* 0C09A18E mov.l Rm,@(disp,Rn) */
	r11 += r7;  /* 0C09A190 add Rm,Rn */
	r2 = R32(r0 + 0xCu); UPD(0x0C09A194u, 2);  /* 0C09A192 mov.l @(disp,Rm),Rn */
	r3 = 0x13u;  /* 0C09A194 mov #imm,Rn */
	W8(r6, r11); UPD(0x0C09A198u, 2);  /* 0C09A196 mov.b Rm,@Rn */
	T = r2 > r3;  /* 0C09A198 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r0, r8); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09A1F0u, 4); goto L_0C09A1F0; } UPD(0x0C09A19Eu, 1); goto L_0C09A19E; }  /* 0C09A19A bt/s */
L_0C09A19E: BLKS(0x0C09A19Eu);
	r0 = 0xC09A1BCu;  /* 0C09A19E mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09A1A0 add Rm,Rn */
	IF(0x0C09A1A2u); r6 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09A1A4u, 3);  /* 0C09A1A2 mov.w @(r0,Rm),Rn */
	IF(0x0C09A1A4u); { u32 tv_ = (r6 + 0x0C09A1A8u); u32 t_ = PHYS(tv_); IF(0x0C09A1A6u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09A1A4 braf Rn */
L_0C09A1F0: BLKS(0x0C09A1F0u);
	r5 = 0xB4u; UPD(0x0C09A1F2u, 1);  /* 0C09A1F0 mov.w @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C09A1F2 mov #imm,Rn */
	IF(0x0C09A1F4u); MACL = r10 * r5;  /* 0C09A1F4 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C09A1F8u, 4);  /* 0C09A1F6 mov.l @(disp,pc),Rn */
	IF(0x0C09A1F8u); r2 = MACL;  /* 0C09A1F8 sts macl,Rn */
	r2 += r4;  /* 0C09A1FA add Rm,Rn */
	r0 = 0x98u; UPD(0x0C09A1FEu, 3);  /* 0C09A1FC mov.w @(disp,pc),Rn */
	r7 = r2;  /* 0C09A1FE mov Rm,Rn */
	r7 += r0;  /* 0C09A200 add Rm,Rn */
	r7 += 0x2u;  /* 0C09A202 add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r7); UPD(0x0C09A206u, 4);  /* 0C09A204 mov.b @Rm,Rn */
	r10 = r11 & 0xFF;  /* 0C09A206 extu.b Rm,Rn */
	T = r10 > r6;  /* 0C09A208 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C09A248u, 5); goto L_0C09A248; }  /* 0C09A20A bf */
L_0C09A20C: BLKS(0x0C09A20Cu);
	r7 = 0x3u;  /* 0C09A20C mov #imm,Rn */
	r10 = 0xA4u; UPD(0x0C09A210u, 2);  /* 0C09A20E mov.w @(disp,pc),Rn */
	r10 += r2;  /* 0C09A210 add Rm,Rn */
	r10 += 0x1u;  /* 0C09A212 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r9 = v_; } UPD(0x0C09A216u, 3);  /* 0C09A214 mov.b @Rm+,Rn */
	IF(0x0C09A216u); MACL = r12 * r5;  /* 0C09A216 mul.l Rm,Rn */
	T = (s32)r7 >= (s32)r9;  /* 0C09A218 cmp/ge Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r11 = v_; } UPD(0x0C09A21Cu, 4);  /* 0C09A21A mov.b @Rm+,Rn */
	IF(0x0C09A21Cu); r8 = T;  /* 0C09A21C movt Rn */
	T = (s32)r7 >= (s32)r11;  /* 0C09A21E cmp/ge Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C09A222u, 3);  /* 0C09A220 mov.b @Rm,Rn */
	IF(0x0C09A222u); r1 = T;  /* 0C09A222 movt Rn */
	T = (s32)r6 >= (s32)r3;  /* 0C09A224 cmp/ge Rm,Rn */
	IF(0x0C09A226u); r3 = MACL;  /* 0C09A226 sts macl,Rn */
	r3 += r4;  /* 0C09A228 add Rm,Rn */
	IF(0x0C09A22Au); r2 = T;  /* 0C09A22A movt Rn */
	r8 &= r1;  /* 0C09A22C and Rm,Rn */
	r6 = r3;  /* 0C09A22E mov Rm,Rn */
	r8 &= r2;  /* 0C09A230 and Rm,Rn */
	r6 += 0x50u;  /* 0C09A232 add #imm,Rn */
	r2 = R32(r6); UPD(0x0C09A236u, 10);  /* 0C09A234 mov.l @Rm,Rn */
	r4 = 0xFFFFFFFFu;  /* 0C09A236 mov #imm,Rn */
	r13 = 0xE10u; UPD(0x0C09A23Au, 2);  /* 0C09A238 mov.w @(disp,pc),Rn */
	T = r2 == r13;  /* 0C09A23A cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C09A23C negc Rm,Rn */
	r9 &= r8;  /* 0C09A23E and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09A240 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09A250u, 7); goto L_0C09A250; } goto L_0C09A246; }  /* 0C09A242 bt/s */
L_0C09A246: BLKS(0x0C09A246u);
	W32(r6, r2); UPD(0x0C09A248u, 2);  /* 0C09A246 mov.l Rm,@Rn */
L_0C09A248: BLKS(0x0C09A248u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C09A248 bra */
L_0C09A250: BLKS(0x0C09A250u);
	r6 = r0;  /* 0C09A250 mov Rm,Rn */
	r6 += r3;  /* 0C09A252 add Rm,Rn */
	r6 += 0x1u;  /* 0C09A254 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C09A258u, 4);  /* 0C09A256 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C09A258 add #imm,Rn */
	r0 = r5 & 0xFF;  /* 0C09A25A extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C09A25C cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r6, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09A248u, 6); goto L_0C09A248; } UPD(0x0C09A262u, 1); goto L_0C09A262; }  /* 0C09A25E bf/s */
L_0C09A262: BLKS(0x0C09A262u);
	r4 = R32(r3 + 0xCu); UPD(0x0C09A264u, 1);  /* 0C09A262 mov.l @(disp,Rm),Rn */
	r4 += 0x1u;  /* 0C09A264 add #imm,Rn */
	W32(r3 + 0xCu, r4); UPD(0x0C09A268u, 2);  /* 0C09A266 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0A8AE0u; UPD(0x0C09A26Au, 1);  /* 0C09A268 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C09A26A mov Rm,Rn */
	r12 = 0xC0C2110u; UPD(0x0C09A26Eu, 2);  /* 0C09A26C mov.l @(disp,pc),Rn */
	IF(0x0C09A26Eu); { u32 t_ = r8; PR = 0x0C09A272u; IF(0x0C09A270u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09A272u); }  /* 0C09A26E jsr @Rn */
L_0C09A272: BLKS(0x0C09A272u);
	IF(0x0C09A272u); { u32 t_ = r12; PR = 0x0C09A276u; r4 = 0x6Cu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C09A276u); }  /* 0C09A272 jsr @Rn */
L_0C09A276: BLKS(0x0C09A276u);
	r0 = 0xC0C21F0u; UPD(0x0C09A278u, 1);  /* 0C09A276 mov.l @(disp,pc),Rn */
	r14 += 0x8u;  /* 0C09A278 add #imm,Rn */
	r15 = r14;  /* 0C09A27A mov Rm,Rn */
	IF(0x0C09A27Cu); PR = R32(r15); r15 += 4; UPD(0x0C09A27Eu, 3);  /* 0C09A27C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09A280u, 1);  /* 0C09A27E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09A282u, 1);  /* 0C09A280 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09A284u, 1);  /* 0C09A282 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09A286u, 1);  /* 0C09A284 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09A288u, 1);  /* 0C09A286 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09A28Au, 1);  /* 0C09A288 mov.l @Rm+,Rn */
	IF(0x0C09A28Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C21F0u: TAIL(blk_f_0C0C21F0); default: JUMPD(tv_); } }  /* 0C09A28A jmp @Rn */
}

void blk_f_0C09A1F0(sh3_t *c)
{
	LOCALS;
	goto L_0C09A1F0;
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C09A1F0: BLKS(0x0C09A1F0u);
	r5 = 0xB4u; UPD(0x0C09A1F2u, 1);  /* 0C09A1F0 mov.w @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C09A1F2 mov #imm,Rn */
	IF(0x0C09A1F4u); MACL = r10 * r5;  /* 0C09A1F4 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C09A1F8u, 4);  /* 0C09A1F6 mov.l @(disp,pc),Rn */
	IF(0x0C09A1F8u); r2 = MACL;  /* 0C09A1F8 sts macl,Rn */
	r2 += r4;  /* 0C09A1FA add Rm,Rn */
	r0 = 0x98u; UPD(0x0C09A1FEu, 3);  /* 0C09A1FC mov.w @(disp,pc),Rn */
	r7 = r2;  /* 0C09A1FE mov Rm,Rn */
	r7 += r0;  /* 0C09A200 add Rm,Rn */
	r7 += 0x2u;  /* 0C09A202 add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r7); UPD(0x0C09A206u, 4);  /* 0C09A204 mov.b @Rm,Rn */
	r10 = r11 & 0xFF;  /* 0C09A206 extu.b Rm,Rn */
	T = r10 > r6;  /* 0C09A208 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C09A248u, 5); goto L_0C09A248; }  /* 0C09A20A bf */
L_0C09A20C: BLKS(0x0C09A20Cu);
	r7 = 0x3u;  /* 0C09A20C mov #imm,Rn */
	r10 = 0xA4u; UPD(0x0C09A210u, 2);  /* 0C09A20E mov.w @(disp,pc),Rn */
	r10 += r2;  /* 0C09A210 add Rm,Rn */
	r10 += 0x1u;  /* 0C09A212 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r9 = v_; } UPD(0x0C09A216u, 3);  /* 0C09A214 mov.b @Rm+,Rn */
	IF(0x0C09A216u); MACL = r12 * r5;  /* 0C09A216 mul.l Rm,Rn */
	T = (s32)r7 >= (s32)r9;  /* 0C09A218 cmp/ge Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r11 = v_; } UPD(0x0C09A21Cu, 4);  /* 0C09A21A mov.b @Rm+,Rn */
	IF(0x0C09A21Cu); r8 = T;  /* 0C09A21C movt Rn */
	T = (s32)r7 >= (s32)r11;  /* 0C09A21E cmp/ge Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C09A222u, 3);  /* 0C09A220 mov.b @Rm,Rn */
	IF(0x0C09A222u); r1 = T;  /* 0C09A222 movt Rn */
	T = (s32)r6 >= (s32)r3;  /* 0C09A224 cmp/ge Rm,Rn */
	IF(0x0C09A226u); r3 = MACL;  /* 0C09A226 sts macl,Rn */
	r3 += r4;  /* 0C09A228 add Rm,Rn */
	IF(0x0C09A22Au); r2 = T;  /* 0C09A22A movt Rn */
	r8 &= r1;  /* 0C09A22C and Rm,Rn */
	r6 = r3;  /* 0C09A22E mov Rm,Rn */
	r8 &= r2;  /* 0C09A230 and Rm,Rn */
	r6 += 0x50u;  /* 0C09A232 add #imm,Rn */
	r2 = R32(r6); UPD(0x0C09A236u, 10);  /* 0C09A234 mov.l @Rm,Rn */
	r4 = 0xFFFFFFFFu;  /* 0C09A236 mov #imm,Rn */
	r13 = 0xE10u; UPD(0x0C09A23Au, 2);  /* 0C09A238 mov.w @(disp,pc),Rn */
	T = r2 == r13;  /* 0C09A23A cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C09A23C negc Rm,Rn */
	r9 &= r8;  /* 0C09A23E and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09A240 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09A250u, 7); goto L_0C09A250; } goto L_0C09A246; }  /* 0C09A242 bt/s */
L_0C09A246: BLKS(0x0C09A246u);
	W32(r6, r2); UPD(0x0C09A248u, 2);  /* 0C09A246 mov.l Rm,@Rn */
L_0C09A248: BLKS(0x0C09A248u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C09A248 bra */
L_0C09A250: BLKS(0x0C09A250u);
	r6 = r0;  /* 0C09A250 mov Rm,Rn */
	r6 += r3;  /* 0C09A252 add Rm,Rn */
	r6 += 0x1u;  /* 0C09A254 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C09A258u, 4);  /* 0C09A256 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C09A258 add #imm,Rn */
	r0 = r5 & 0xFF;  /* 0C09A25A extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C09A25C cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r6, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09A248u, 6); goto L_0C09A248; } UPD(0x0C09A262u, 1); goto L_0C09A262; }  /* 0C09A25E bf/s */
L_0C09A262: BLKS(0x0C09A262u);
	r4 = R32(r3 + 0xCu); UPD(0x0C09A264u, 1);  /* 0C09A262 mov.l @(disp,Rm),Rn */
	r4 += 0x1u;  /* 0C09A264 add #imm,Rn */
	W32(r3 + 0xCu, r4); UPD(0x0C09A268u, 2);  /* 0C09A266 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0A8AE0u; UPD(0x0C09A26Au, 1);  /* 0C09A268 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C09A26A mov Rm,Rn */
	r12 = 0xC0C2110u; UPD(0x0C09A26Eu, 2);  /* 0C09A26C mov.l @(disp,pc),Rn */
	IF(0x0C09A26Eu); { u32 t_ = r8; PR = 0x0C09A272u; IF(0x0C09A270u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09A272u); }  /* 0C09A26E jsr @Rn */
L_0C09A272: BLKS(0x0C09A272u);
	IF(0x0C09A272u); { u32 t_ = r12; PR = 0x0C09A276u; r4 = 0x6Cu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C09A276u); }  /* 0C09A272 jsr @Rn */
L_0C09A276: BLKS(0x0C09A276u);
	r0 = 0xC0C21F0u; UPD(0x0C09A278u, 1);  /* 0C09A276 mov.l @(disp,pc),Rn */
	r14 += 0x8u;  /* 0C09A278 add #imm,Rn */
	r15 = r14;  /* 0C09A27A mov Rm,Rn */
	IF(0x0C09A27Cu); PR = R32(r15); r15 += 4; UPD(0x0C09A27Eu, 3);  /* 0C09A27C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09A280u, 1);  /* 0C09A27E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09A282u, 1);  /* 0C09A280 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09A284u, 1);  /* 0C09A282 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09A286u, 1);  /* 0C09A284 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09A288u, 1);  /* 0C09A286 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09A28Au, 1);  /* 0C09A288 mov.l @Rm+,Rn */
	IF(0x0C09A28Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C21F0u: TAIL(blk_f_0C0C21F0); default: JUMPD(tv_); } }  /* 0C09A28A jmp @Rn */
}

void blk_f_0C09A290(sh3_t *c)
{
	LOCALS;
	goto L_0C09A290;
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099CE6: BLKS(0x0C099CE6u);
	W32(r8, r1); UPD(0x0C099CE8u, 1);  /* 0C099CE6 mov.l Rm,@Rn */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C099CE8 bra */
L_0C09A248: BLKS(0x0C09A248u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C09A248 bra */
L_0C09A290: BLKS(0x0C09A290u);
	r3 = 0xB4u; UPD(0x0C09A292u, 1);  /* 0C09A290 mov.w @(disp,pc),Rn */
	IF(0x0C09A292u); MACL = r12 * r3;  /* 0C09A292 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09A296u, 3);  /* 0C09A294 mov.l @(disp,pc),Rn */
	IF(0x0C09A296u); r8 = MACL;  /* 0C09A296 sts macl,Rn */
	r13 = 0x99u; UPD(0x0C09A29Au, 2);  /* 0C09A298 mov.w @(disp,pc),Rn */
	r8 += r2;  /* 0C09A29A add Rm,Rn */
	r13 += r8;  /* 0C09A29C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r13); UPD(0x0C09A2A0u, 3);  /* 0C09A29E mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09A2A0 add #imm,Rn */
	W8(r13, r0); UPD(0x0C09A2A4u, 2);  /* 0C09A2A2 mov.b Rm,@Rn */
	r0 &= 0x7u;  /* 0C09A2A4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09A2A6 tst Rm,Rn */
	if (!T) { UPD(0x0C09A248u, 5); goto L_0C09A248; }  /* 0C09A2A8 bf */
L_0C09A2AA: BLKS(0x0C09A2AAu);
	r11 = R32(r8 + 0xCu); UPD(0x0C09A2ACu, 1);  /* 0C09A2AA mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C09A2AC mov Rm,Rn */
	r10 = 0xC0A8AE0u; UPD(0x0C09A2B0u, 2);  /* 0C09A2AE mov.l @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C09A2B0 add #imm,Rn */
	IF(0x0C09A2B2u); { u32 t_ = r10; PR = 0x0C09A2B6u; W32(r8 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09A2B6u); }  /* 0C09A2B2 jsr @Rn */
L_0C09A2B6: BLKS(0x0C09A2B6u);
	r0 = R32(r8 + 0xCu); UPD(0x0C09A2B8u, 1);  /* 0C09A2B6 mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C09A2B8 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C09A248u, 4); goto L_0C09A248; }  /* 0C09A2BA bf */
L_0C09A2BC: BLKS(0x0C09A2BCu);
	r1 = R32(r8); UPD(0x0C09A2BEu, 1);  /* 0C09A2BC mov.l @Rm,Rn */
	r2 = 0x13000000u; UPD(0x0C09A2C0u, 1);  /* 0C09A2BE mov.l @(disp,pc),Rn */
	{ r1 |= r2; /* slot or Rm,Rn */ UPD(0x0C099CE6u, 3); goto L_0C099CE6; }  /* 0C09A2C0 bra */
}

void blk_f_0C09A2D0(sh3_t *c)
{
	LOCALS;
	goto L_0C09A2D0;
L_0C099712: BLKS(0x0C099712u);
	r14 += 0x8u;  /* 0C099712 add #imm,Rn */
	UPD(0x0C099714u, 1);
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C09A248: BLKS(0x0C09A248u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C09A248 bra */
L_0C09A2D0: BLKS(0x0C09A2D0u);
	r9 = 0xB4u; UPD(0x0C09A2D2u, 1);  /* 0C09A2D0 mov.w @(disp,pc),Rn */
	IF(0x0C09A2D2u); MACL = r12 * r9;  /* 0C09A2D2 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C09A2D6u, 3);  /* 0C09A2D4 mov.l @(disp,pc),Rn */
	IF(0x0C09A2D6u); r8 = MACL;  /* 0C09A2D6 sts macl,Rn */
	r8 += r11;  /* 0C09A2D8 add Rm,Rn */
	r1 = R32(r8); UPD(0x0C09A2DCu, 3);  /* 0C09A2DA mov.l @Rm,Rn */
	r7 = 0x13000000u; UPD(0x0C09A2DEu, 1);  /* 0C09A2DC mov.l @(disp,pc),Rn */
	T = (r1 & r7) == 0;  /* 0C09A2DE tst Rm,Rn */
	if (!T) { UPD(0x0C09A248u, 4); goto L_0C09A248; }  /* 0C09A2E0 bf */
L_0C09A2E2: BLKS(0x0C09A2E2u);
	r2 = 0x99u; UPD(0x0C09A2E4u, 1);  /* 0C09A2E2 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C09A2E4 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C09A2E8u, 2);  /* 0C09A2E6 mov.b @Rm,Rn */
	T = r0 == 0x30u;  /* 0C09A2E8 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09A320u, 4); goto L_0C09A320; }  /* 0C09A2EA bt */
L_0C09A2EC: BLKS(0x0C09A2ECu);
	r9 = r0;  /* 0C09A2EC mov Rm,Rn */
	r9 += 0x1u;  /* 0C09A2EE add #imm,Rn */
	W8(r2, r9); UPD(0x0C09A2F2u, 3);  /* 0C09A2F0 mov.b Rm,@Rn */
L_0C09A2F2: BLKS(0x0C09A2F2u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C09A2F2 bra */
L_0C09A320: BLKS(0x0C09A320u);
	r0 = R32(r8 + 0xCu); UPD(0x0C09A322u, 1);  /* 0C09A320 mov.l @(disp,Rm),Rn */
	r2 = 0xC1C7124u; UPD(0x0C09A324u, 1);  /* 0C09A322 mov.l @(disp,pc),Rn */
	IF(0x0C09A324u); r0 <<= 2;  /* 0C09A324 shll2 Rn */
	IF(0x0C09A326u); r4 = R32(r0 + r2); UPD(0x0C09A328u, 2);  /* 0C09A326 mov.l @(r0,Rm),Rn */
	r13 = 0xC0A8AE0u; UPD(0x0C09A32Au, 1);  /* 0C09A328 mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C09A32Cu, 1);  /* 0C09A32A mov.l Rm,@(disp,Rn) */
	IF(0x0C09A32Cu); { u32 t_ = r13; PR = 0x0C09A330u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09A330u); }  /* 0C09A32C jsr @Rn */
L_0C09A330: BLKS(0x0C09A330u);
	IF(0x0C09A330u); MACL = r10 * r9;  /* 0C09A330 mul.l Rm,Rn */
	r0 = 0x9Du; UPD(0x0C09A334u, 3);  /* 0C09A332 mov.w @(disp,pc),Rn */
	r4 = r12;  /* 0C09A334 mov Rm,Rn */
	IF(0x0C09A336u); r9 = MACL;  /* 0C09A336 sts macl,Rn */
	r9 += r11;  /* 0C09A338 add Rm,Rn */
	r9 += r0;  /* 0C09A33A add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C09A33Eu, 5);  /* 0C09A33C mov.b @Rm,Rn */
	r11 = 0xCu;  /* 0C09A33E mov #imm,Rn */
	r5 = r6 & 0xFF;  /* 0C09A340 extu.b Rm,Rn */
	IF(0x0C09A342u); MACL = r5 * r11;  /* 0C09A342 mul.l Rm,Rn */
	r10 = 0xC0BC1B0u; UPD(0x0C09A346u, 5);  /* 0C09A344 mov.l @(disp,pc),Rn */
	r6 = 0xAu;  /* 0C09A346 mov #imm,Rn */
	r13 = 0xC1C71F4u; UPD(0x0C09A34Au, 2);  /* 0C09A348 mov.l @(disp,pc),Rn */
	IF(0x0C09A34Au); r0 = MACL;  /* 0C09A34A sts macl,Rn */
	IF(0x0C09A34Cu); { u32 t_ = r10; PR = 0x0C09A350u; IF(0x0C09A34Eu); r5 = R32(r0 + r13); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09A350u); }  /* 0C09A34C jsr @Rn */
L_0C09A350: BLKS(0x0C09A350u);
	T = (r0 & r0) == 0;  /* 0C09A350 tst Rm,Rn */
	if (T) { UPD(0x0C09A2F2u, 4); goto L_0C09A2F2; }  /* 0C09A352 bt */
L_0C09A354: BLKS(0x0C09A354u);
	r4 = r12;  /* 0C09A354 mov Rm,Rn */
	r10 = 0xC069B50u; UPD(0x0C09A358u, 2);  /* 0C09A356 mov.l @(disp,pc),Rn */
	r12 = 0xC068E60u; UPD(0x0C09A35Au, 1);  /* 0C09A358 mov.l @(disp,pc),Rn */
	IF(0x0C09A35Au); { u32 t_ = r10; PR = 0x0C09A35Eu; IF(0x0C09A35Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C09A35Eu); }  /* 0C09A35A jsr @Rn */
L_0C09A35E: BLKS(0x0C09A35Eu);
	r6 = 0x2A0u; UPD(0x0C09A360u, 1);  /* 0C09A35E mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C09A360 exts.w Rm,Rn */
	IF(0x0C09A362u); MACL = r1 * r6;  /* 0C09A362 mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C09A366u, 4);  /* 0C09A364 mov.l @(disp,pc),Rn */
	IF(0x0C09A366u); r0 = MACL;  /* 0C09A366 sts macl,Rn */
	r0 += r5;  /* 0C09A368 add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C09A36Cu, 3);  /* 0C09A36A mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C09A36Eu, 1);  /* 0C09A36C mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C09A370u, 1);  /* 0C09A36E mov.l @(disp,Rm),Rn */
	IF(0x0C09A370u); { u32 t_ = r12; PR = 0x0C09A374u; r7 = R32(r0 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C09A374u); }  /* 0C09A370 jsr @Rn */
L_0C09A374: BLKS(0x0C09A374u);
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C09A376u, 1);  /* 0C09A374 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09A376 add #imm,Rn */
	r9 = r10 & 0xFF;  /* 0C09A378 extu.b Rm,Rn */
	IF(0x0C09A37Au); MACL = r9 * r11;  /* 0C09A37A mul.l Rm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C09A37C exts.w Rm,Rn */
	r0 = 0xC0BB3A0u; UPD(0x0C09A380u, 6);  /* 0C09A37E mov.l @(disp,pc),Rn */
	IF(0x0C09A380u); r11 = MACL;  /* 0C09A380 sts macl,Rn */
	r11 += r13;  /* 0C09A382 add Rm,Rn */
	r7 = R32(r11 + 0x4u); UPD(0x0C09A386u, 3);  /* 0C09A384 mov.l @(disp,Rm),Rn */
	r4 = 0x5u;  /* 0C09A386 mov #imm,Rn */
	W32(r15, r7); UPD(0x0C09A38Au, 2);  /* 0C09A388 mov.l Rm,@Rn */
	r3 = R32(r11 + 0x8u); UPD(0x0C09A38Cu, 1);  /* 0C09A38A mov.l @(disp,Rm),Rn */
	r7 = r12;  /* 0C09A38C mov Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C09A390u, 2);  /* 0C09A38E mov.l Rm,@(disp,Rn) */
	r5 = R32(r8 + 0x24u); UPD(0x0C09A392u, 1);  /* 0C09A390 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C09A394u, 1);  /* 0C09A392 mov.l @(disp,Rm),Rn */
	IF(0x0C09A394u); { u32 t_ = r0; PR = 0x0C09A398u; IF(0x0C09A396u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BB3A0, 0x0C0BB3A0u, 0x0C09A398u); }  /* 0C09A394 jsr @Rn */
L_0C09A398: BLKS(0x0C09A398u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099712u, 3); goto L_0C099712; }  /* 0C09A398 bra */
}

void blk_f_0C09A3A0(sh3_t *c)
{
	LOCALS;
	goto L_0C09A3A0;
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099AE0: BLKS(0x0C099AE0u);
	r1 = 0xC098E60u; UPD(0x0C099AE2u, 1);  /* 0C099AE0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C099AE2 mov Rm,Rn */
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	UPD(0x0C099AE6u, 2);
L_0C099AE6: BLKS(0x0C099AE6u);
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 2);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C099D00: BLKS(0x0C099D00u);
	r1 = 0xC0C2110u; UPD(0x0C099D02u, 1);  /* 0C099D00 mov.l @(disp,pc),Rn */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099AE6u, 3); goto L_0C099AE6; }  /* 0C099D02 bra */
L_0C09A3A0: BLKS(0x0C09A3A0u);
	r8 = 0xC0A8CA0u; UPD(0x0C09A3A2u, 1);  /* 0C09A3A0 mov.l @(disp,pc),Rn */
	IF(0x0C09A3A2u); { u32 t_ = r8; PR = 0x0C09A3A6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09A3A6u); }  /* 0C09A3A2 jsr @Rn */
L_0C09A3A6: BLKS(0x0C09A3A6u);
	IF(0x0C09A3A6u); T = (s32)r0 >= 0;  /* 0C09A3A6 cmp/pz Rn */
	if (T) { UPD(0x0C09A3AEu, 4); goto L_0C09A3AE; }  /* 0C09A3A8 bt */
L_0C09A3AA: BLKS(0x0C09A3AAu);
	{ IF(0x0C09A3ACu); ; /* slot nop */ UPD(0x0C099AE0u, 3); goto L_0C099AE0; }  /* 0C09A3AA bra */
L_0C09A3AE: BLKS(0x0C09A3AEu);
	r2 = 0xB4u; UPD(0x0C09A3B0u, 1);  /* 0C09A3AE mov.w @(disp,pc),Rn */
	IF(0x0C09A3B0u); MACL = r0 * r2;  /* 0C09A3B0 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09A3B4u, 3);  /* 0C09A3B2 mov.l @(disp,pc),Rn */
	IF(0x0C09A3B4u); r6 = MACL;  /* 0C09A3B4 sts macl,Rn */
	r6 += r5;  /* 0C09A3B6 add Rm,Rn */
	r4 = 0x9Au; UPD(0x0C09A3BAu, 3);  /* 0C09A3B8 mov.w @(disp,pc),Rn */
	r0 = r6;  /* 0C09A3BA mov Rm,Rn */
	IF(0x0C09A3BCu); r7 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C09A3BEu, 2);  /* 0C09A3BC mov.b @(r0,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C09A3BE tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09A3C2u); MACL = r12 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09A420u, 5); goto L_0C09A420; } goto L_0C09A3C4; }  /* 0C09A3C0 bf/s */
L_0C09A3C4: BLKS(0x0C09A3C4u);
	IF(0x0C09A3C4u); MACL = r12 * r2;  /* 0C09A3C4 mul.l Rm,Rn */
	IF(0x0C09A3C6u); r7 = MACL;  /* 0C09A3C6 sts macl,Rn */
	r7 += r5;  /* 0C09A3C8 add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C09A3CCu, 7);  /* 0C09A3CA mov.w @(disp,pc),Rn */
	r5 = r7;  /* 0C09A3CC mov Rm,Rn */
	r5 += r0;  /* 0C09A3CE add Rm,Rn */
	r0 += r6;  /* 0C09A3D0 add Rm,Rn */
	r0 += 0x1u;  /* 0C09A3D2 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C09A3D6u, 5);  /* 0C09A3D4 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C09A3D6 add #imm,Rn */
	r3 = 0xAFu; UPD(0x0C09A3DAu, 2);  /* 0C09A3D8 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C09A3DA mov Rm,Rn */
	r9 = R32(r6 + 0x24u); UPD(0x0C09A3DEu, 2);  /* 0C09A3DC mov.l @(disp,Rm),Rn */
	r12 = r10;  /* 0C09A3DE mov Rm,Rn */
	r11 = R32(r6 + 0x28u); UPD(0x0C09A3E2u, 2);  /* 0C09A3E0 mov.l @(disp,Rm),Rn */
	IF(0x0C09A3E2u); r13 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09A3E4u, 1);  /* 0C09A3E2 mov.b @(r0,Rm),Rn */
	r8 = R32(r7 + 0x2Cu); UPD(0x0C09A3E6u, 1);  /* 0C09A3E4 mov.l @(disp,Rm),Rn */
	r12 += r13;  /* 0C09A3E6 add Rm,Rn */
	r1 = R32(r7 + 0x30u); UPD(0x0C09A3EAu, 2);  /* 0C09A3E8 mov.l @(disp,Rm),Rn */
	r9 += r8;  /* 0C09A3EA add Rm,Rn */
	r11 += r1;  /* 0C09A3EC add Rm,Rn */
	r0 = r12 & 0xFF;  /* 0C09A3EE extu.b Rm,Rn */
	W32(r7 + 0x24u, r9); UPD(0x0C09A3F2u, 4);  /* 0C09A3F0 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x14u;  /* 0C09A3F2 cmp/eq #imm,r0 */
	W32(r7 + 0x28u, r11); UPD(0x0C09A3F6u, 2);  /* 0C09A3F4 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W8(r5, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09A410u, 3); goto L_0C09A410; } UPD(0x0C09A3FAu, 1); goto L_0C09A3FA; }  /* 0C09A3F6 bt/s */
L_0C09A3FA: BLKS(0x0C09A3FAu);
	r13 = R32(r6); UPD(0x0C09A3FCu, 1);  /* 0C09A3FA mov.l @Rm,Rn */
	r5 = R32(r7); UPD(0x0C09A3FEu, 1);  /* 0C09A3FC mov.l @Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C09A400u, 1);  /* 0C09A3FE mov.w @(disp,pc),Rn */
	r6 = 0x100u; UPD(0x0C09A402u, 1);  /* 0C09A400 mov.w @(disp,pc),Rn */
	r5 &= r2;  /* 0C09A402 and Rm,Rn */
	r13 &= r6;  /* 0C09A404 and Rm,Rn */
	r5 |= r13;  /* 0C09A406 or Rm,Rn */
	W32(r7, r5); UPD(0x0C09A40Au, 4);  /* 0C09A408 mov.l Rm,@Rn */
L_0C09A40A: BLKS(0x0C09A40Au);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C09A40A bra */
L_0C09A410: BLKS(0x0C09A410u);
	r4 = R32(r7); UPD(0x0C09A412u, 1);  /* 0C09A410 mov.l @Rm,Rn */
	r12 = 0x13000000u; UPD(0x0C09A414u, 1);  /* 0C09A412 mov.l @(disp,pc),Rn */
	r4 |= r12;  /* 0C09A414 or Rm,Rn */
	{ W32(r7, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C09A3FAu, 4); goto L_0C09A3FA; }  /* 0C09A416 bra */
L_0C09A420: BLKS(0x0C09A420u);
	r2 = 0x9Fu; UPD(0x0C09A422u, 1);  /* 0C09A420 mov.w @(disp,pc),Rn */
	IF(0x0C09A422u); r3 = MACL;  /* 0C09A422 sts macl,Rn */
	r3 += r5;  /* 0C09A424 add Rm,Rn */
	r2 += r3;  /* 0C09A426 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C09A42Au, 4);  /* 0C09A428 mov.b @Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C09A42A extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C09A42C tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C09A450u, 5); goto L_0C09A450; } goto L_0C09A432; }  /* 0C09A42E bt/s */
L_0C09A432: BLKS(0x0C09A432u);
	if (!T) { UPD(0x0C09A40Au, 4); goto L_0C09A40A; }  /* 0C09A432 bf */
L_0C09A434: BLKS(0x0C09A434u);
	r7 = R32(r3 + 0x24u); UPD(0x0C09A436u, 1);  /* 0C09A434 mov.l @(disp,Rm),Rn */
	r10 = 0xFFC00000u; UPD(0x0C09A438u, 1);  /* 0C09A436 mov.l @(disp,pc),Rn */
	T = (s32)r7 >= (s32)r10;  /* 0C09A438 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C09A440u, 4); goto L_0C09A440; }  /* 0C09A43A bt */
L_0C09A43C: BLKS(0x0C09A43Cu);
	r0 = 0x0u;  /* 0C09A43C mov #imm,Rn */
	W32(r3, r0); UPD(0x0C09A440u, 2);  /* 0C09A43E mov.l Rm,@Rn */
L_0C09A440: BLKS(0x0C09A440u);
	r11 = R32(r3 + 0x2Cu); UPD(0x0C09A442u, 1);  /* 0C09A440 mov.l @(disp,Rm),Rn */
	r7 += r11;  /* 0C09A442 add Rm,Rn */
	W32(r3 + 0x24u, r7); UPD(0x0C09A446u, 2);  /* 0C09A444 mov.l Rm,@(disp,Rn) */
	r7 = 0xFFFFF800u; UPD(0x0C09A448u, 1);  /* 0C09A446 mov.w @(disp,pc),Rn */
	r11 += r7;  /* 0C09A448 add Rm,Rn */
	W32(r3 + 0x2Cu, r11); UPD(0x0C09A44Cu, 2);  /* 0C09A44A mov.l Rm,@(disp,Rn) */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C09A44C bra */
L_0C09A450: BLKS(0x0C09A450u);
	r1 += 0x1u;  /* 0C09A450 add #imm,Rn */
	W32(r3 + 0x30u, r0); UPD(0x0C09A454u, 2);  /* 0C09A452 mov.l Rm,@(disp,Rn) */
	r4 = 0x6Du;  /* 0C09A454 mov #imm,Rn */
	W32(r3 + 0x2Cu, r0); UPD(0x0C09A458u, 2);  /* 0C09A456 mov.l Rm,@(disp,Rn) */
	{ W8(r2, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C099D00u, 3); goto L_0C099D00; }  /* 0C09A458 bra */
}

void blk_f_0C09A4A0(sh3_t *c)
{
	LOCALS;
	goto L_0C09A4A0;
L_0C099712: BLKS(0x0C099712u);
	r14 += 0x8u;  /* 0C099712 add #imm,Rn */
	UPD(0x0C099714u, 1);
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099AE0: BLKS(0x0C099AE0u);
	r1 = 0xC098E60u; UPD(0x0C099AE2u, 1);  /* 0C099AE0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C099AE2 mov Rm,Rn */
	UPD(0x0C099AE4u, 1);
L_0C099AE4: BLKS(0x0C099AE4u);
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	UPD(0x0C099AE6u, 1);
L_0C099AE6: BLKS(0x0C099AE6u);
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 2);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C099BF2: BLKS(0x0C099BF2u);
	r1 = 0xC0A8AE0u; UPD(0x0C099BF4u, 1);  /* 0C099BF2 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C099AE4u, 3); goto L_0C099AE4; }  /* 0C099BF4 bra */
L_0C099D00: BLKS(0x0C099D00u);
	r1 = 0xC0C2110u; UPD(0x0C099D02u, 1);  /* 0C099D00 mov.l @(disp,pc),Rn */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099AE6u, 3); goto L_0C099AE6; }  /* 0C099D02 bra */
L_0C09A394: BLKS(0x0C09A394u);
	IF(0x0C09A394u); { u32 t_ = r0; PR = 0x0C09A398u; IF(0x0C09A396u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C09A398u); }  /* 0C09A394 jsr @Rn */
L_0C09A398: BLKS(0x0C09A398u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099712u, 3); goto L_0C099712; }  /* 0C09A398 bra */
L_0C09A44C: BLKS(0x0C09A44Cu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C09A44C bra */
L_0C09A4A0: BLKS(0x0C09A4A0u);
	r8 = 0xC0A8CA0u; UPD(0x0C09A4A2u, 1);  /* 0C09A4A0 mov.l @(disp,pc),Rn */
	IF(0x0C09A4A2u); { u32 t_ = r8; PR = 0x0C09A4A6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09A4A6u); }  /* 0C09A4A2 jsr @Rn */
L_0C09A4A6: BLKS(0x0C09A4A6u);
	IF(0x0C09A4A6u); T = (s32)r0 >= 0;  /* 0C09A4A6 cmp/pz Rn */
	if (T) { UPD(0x0C09A4AEu, 4); goto L_0C09A4AE; }  /* 0C09A4A8 bt */
L_0C09A4AA: BLKS(0x0C09A4AAu);
	{ IF(0x0C09A4ACu); ; /* slot nop */ UPD(0x0C099AE0u, 3); goto L_0C099AE0; }  /* 0C09A4AA bra */
L_0C09A4AE: BLKS(0x0C09A4AEu);
	r4 = 0xB4u; UPD(0x0C09A4B0u, 1);  /* 0C09A4AE mov.w @(disp,pc),Rn */
	IF(0x0C09A4B0u); MACL = r12 * r4;  /* 0C09A4B0 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C09A4B4u, 3);  /* 0C09A4B2 mov.l @(disp,pc),Rn */
	IF(0x0C09A4B4u); r9 = MACL;  /* 0C09A4B4 sts macl,Rn */
	IF(0x0C09A4B6u); MACL = r0 * r4;  /* 0C09A4B6 mul.l Rm,Rn */
	r9 += r13;  /* 0C09A4B8 add Rm,Rn */
	r2 = 0xA8u; UPD(0x0C09A4BCu, 5);  /* 0C09A4BA mov.w @(disp,pc),Rn */
	IF(0x0C09A4BCu); r4 = MACL;  /* 0C09A4BC sts macl,Rn */
	r11 = r9;  /* 0C09A4BE mov Rm,Rn */
	r4 += r13;  /* 0C09A4C0 add Rm,Rn */
	r11 += r2;  /* 0C09A4C2 add Rm,Rn */
	r2 += r4;  /* 0C09A4C4 add Rm,Rn */
	r2 += 0x1u;  /* 0C09A4C6 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C09A4CAu, 7);  /* 0C09A4C8 mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C09A4CA add #imm,Rn */
	r0 = R32(r4 + 0x28u); UPD(0x0C09A4CEu, 2);  /* 0C09A4CC mov.l @(disp,Rm),Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C09A4D0u, 1);  /* 0C09A4CE mov.l @(disp,Rm),Rn */
	r2 = R32(r9); UPD(0x0C09A4D2u, 1);  /* 0C09A4D0 mov.l @Rm,Rn */
	r0 += r1;  /* 0C09A4D2 add Rm,Rn */
	r3 = 0xFFFFFEFFu; UPD(0x0C09A4D6u, 2);  /* 0C09A4D4 mov.w @(disp,pc),Rn */
	W32(r9 + 0x28u, r0); UPD(0x0C09A4D8u, 1);  /* 0C09A4D6 mov.l Rm,@(disp,Rn) */
	r2 &= r3;  /* 0C09A4D8 and Rm,Rn */
	r6 = 0xAFu; UPD(0x0C09A4DCu, 2);  /* 0C09A4DA mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C09A4DC mov Rm,Rn */
	r10 = R32(r4 + 0x24u); UPD(0x0C09A4E0u, 2);  /* 0C09A4DE mov.l @(disp,Rm),Rn */
	r8 = R32(r9 + 0x2Cu); UPD(0x0C09A4E2u, 1);  /* 0C09A4E0 mov.l @(disp,Rm),Rn */
	r13 = R32(r4); UPD(0x0C09A4E4u, 1);  /* 0C09A4E2 mov.l @Rm,Rn */
	r10 += r8;  /* 0C09A4E4 add Rm,Rn */
	r3 = 0x100u; UPD(0x0C09A4E8u, 2);  /* 0C09A4E6 mov.w @(disp,pc),Rn */
	IF(0x0C09A4E8u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09A4EAu, 1);  /* 0C09A4E8 mov.b @(r0,Rm),Rn */
	r13 &= r3;  /* 0C09A4EA and Rm,Rn */
	r7 += r5;  /* 0C09A4EC add Rm,Rn */
	r2 |= r13;  /* 0C09A4EE or Rm,Rn */
	r8 = R32(r9 + 0xCu); UPD(0x0C09A4F2u, 4);  /* 0C09A4F0 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x24u, r10); UPD(0x0C09A4F4u, 1);  /* 0C09A4F2 mov.l Rm,@(disp,Rn) */
	T = (r8 & r8) == 0;  /* 0C09A4F4 tst Rm,Rn */
	W8(r11, r7); UPD(0x0C09A4F8u, 2);  /* 0C09A4F6 mov.b Rm,@Rn */
	{ u32 c_ = T; W32(r9, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09A5A0u, 3); goto L_0C09A5A0; } UPD(0x0C09A4FCu, 1); goto L_0C09A4FC; }  /* 0C09A4F8 bt/s */
L_0C09A4FC: BLKS(0x0C09A4FCu);
	r0 = r8;  /* 0C09A4FC mov Rm,Rn */
	T = r0 == 0x7u;  /* 0C09A4FE cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09A530u, 5); goto L_0C09A530; }  /* 0C09A500 bt */
L_0C09A502: BLKS(0x0C09A502u);
	r6 = 0xB4u; UPD(0x0C09A504u, 1);  /* 0C09A502 mov.w @(disp,pc),Rn */
	IF(0x0C09A504u); MACL = r12 * r6;  /* 0C09A504 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09A508u, 3);  /* 0C09A506 mov.l @(disp,pc),Rn */
	IF(0x0C09A508u); r3 = MACL;  /* 0C09A508 sts macl,Rn */
	r9 = 0x99u; UPD(0x0C09A50Cu, 2);  /* 0C09A50A mov.w @(disp,pc),Rn */
	r3 += r5;  /* 0C09A50C add Rm,Rn */
	r9 += r3;  /* 0C09A50E add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C09A512u, 3);  /* 0C09A510 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09A512 add #imm,Rn */
	W8(r9, r0); UPD(0x0C09A516u, 2);  /* 0C09A514 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C09A516 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09A518 tst Rm,Rn */
	if (!T) { UPD(0x0C09A44Cu, 5); goto L_0C09A44C; }  /* 0C09A51A bf */
L_0C09A51C: BLKS(0x0C09A51Cu);
	r0 = 0x88u; UPD(0x0C09A51Eu, 1);  /* 0C09A51C mov.w @(disp,pc),Rn */
	IF(0x0C09A51Eu); r1 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C09A520u, 1);  /* 0C09A51E mov.w @(r0,Rm),Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C09A522u, 1);  /* 0C09A520 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C09A522 add Rm,Rn */
	{ W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C099BF2u, 4); goto L_0C099BF2; }  /* 0C09A524 bra */
L_0C09A530: BLKS(0x0C09A530u);
	r0 = 0x98u; UPD(0x0C09A532u, 1);  /* 0C09A530 mov.w @(disp,pc),Rn */
	IF(0x0C09A532u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09A534u, 1);  /* 0C09A532 mov.b @(r0,Rm),Rn */
	r2 += 0x1u;  /* 0C09A534 add #imm,Rn */
	IF(0x0C09A536u); W8(r0 + r9, r2); UPD(0x0C09A538u, 2);  /* 0C09A536 mov.b Rm,@(r0,Rn) */
	r0 = r2 & 0xFF;  /* 0C09A538 extu.b Rm,Rn */
	T = r0 == 0x10u;  /* 0C09A53A cmp/eq #imm,r0 */
	{ u32 c_ = T; T = r0 == 0x8u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C09A590u, 5); goto L_0C09A590; } goto L_0C09A540; }  /* 0C09A53C bt/s */
L_0C09A540: BLKS(0x0C09A540u);
	if (!T) { UPD(0x0C09A5B2u, 4); goto L_0C09A5B2; }  /* 0C09A540 bf */
L_0C09A542: BLKS(0x0C09A542u);
	r13 = 0xC069B50u; UPD(0x0C09A544u, 1);  /* 0C09A542 mov.l @(disp,pc),Rn */
	r10 = 0xC068E60u; UPD(0x0C09A546u, 1);  /* 0C09A544 mov.l @(disp,pc),Rn */
	IF(0x0C09A546u); { u32 t_ = r13; PR = 0x0C09A54Au; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C09A54Au); }  /* 0C09A546 jsr @Rn */
L_0C09A54A: BLKS(0x0C09A54Au);
	r5 = 0x2A0u; UPD(0x0C09A54Cu, 1);  /* 0C09A54A mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C09A54C exts.w Rm,Rn */
	IF(0x0C09A54Eu); MACL = r6 * r5;  /* 0C09A54E mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C09A552u, 4);  /* 0C09A550 mov.l @(disp,pc),Rn */
	IF(0x0C09A552u); r3 = MACL;  /* 0C09A552 sts macl,Rn */
	r8 = 0xC062780u; UPD(0x0C09A556u, 2);  /* 0C09A554 mov.l @(disp,pc),Rn */
	r3 += r7;  /* 0C09A556 add Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C09A55Au, 2);  /* 0C09A558 mov.l @(disp,Rm),Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C09A55Cu, 1);  /* 0C09A55A mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C09A55Eu, 1);  /* 0C09A55C mov.l @(disp,Rm),Rn */
	IF(0x0C09A55Eu); { u32 t_ = r10; PR = 0x0C09A562u; r7 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C09A562u); }  /* 0C09A55E jsr @Rn */
L_0C09A562: BLKS(0x0C09A562u);
	r12 = r0;  /* 0C09A562 mov Rm,Rn */
	IF(0x0C09A564u); { u32 t_ = r8; PR = 0x0C09A568u; r4 = 0x1Fu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C09A568u); }  /* 0C09A564 jsr @Rn */
L_0C09A568: BLKS(0x0C09A568u);
	r4 = 0xC1C723Cu; UPD(0x0C09A56Au, 1);  /* 0C09A568 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09A56A add #imm,Rn */
	r11 = 0x28000u; UPD(0x0C09A56Eu, 2);  /* 0C09A56C mov.l @(disp,pc),Rn */
	r12 += r0;  /* 0C09A56E add Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C09A572u, 2);  /* 0C09A570 mov.l Rm,@(disp,Rn) */
	r12 += 0xFFFFFFF0u;  /* 0C09A572 add #imm,Rn */
	W32(r15, r11); UPD(0x0C09A576u, 2);  /* 0C09A574 mov.l Rm,@Rn */
	r13 = (u32)(s32)(s16)r12;  /* 0C09A576 exts.w Rm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C09A57Au, 2);  /* 0C09A578 mov.l @(disp,Rm),Rn */
	r4 = 0x1u;  /* 0C09A57A mov #imm,Rn */
	r6 = R32(r9 + 0x28u); UPD(0x0C09A57Eu, 2);  /* 0C09A57C mov.l @(disp,Rm),Rn */
	r0 = 0xC0BAB50u; UPD(0x0C09A580u, 1);  /* 0C09A57E mov.l @(disp,pc),Rn */
	{ r7 = r13; /* slot mov Rm,Rn */ UPD(0x0C09A394u, 3); goto L_0C09A394; }  /* 0C09A580 bra */
L_0C09A590: BLKS(0x0C09A590u);
	r0 = 0x88u; UPD(0x0C09A592u, 1);  /* 0C09A590 mov.w @(disp,pc),Rn */
	r10 = 0xFFFFFFFFu;  /* 0C09A592 mov #imm,Rn */
	IF(0x0C09A594u); W16(r0 + r9, r10); UPD(0x0C09A596u, 2);  /* 0C09A594 mov.w Rm,@(r0,Rn) */
	r1 = 0x6u;  /* 0C09A596 mov #imm,Rn */
	{ W32(r9 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C099BF2u, 4); goto L_0C099BF2; }  /* 0C09A598 bra */
L_0C09A5A0: BLKS(0x0C09A5A0u);
	T = (r2 & r3) == 0;  /* 0C09A5A0 tst Rm,Rn */
	if (T) { UPD(0x0C09A5B2u, 4); goto L_0C09A5B2; }  /* 0C09A5A2 bt */
L_0C09A5A4: BLKS(0x0C09A5A4u);
	r4 = r12;  /* 0C09A5A4 mov Rm,Rn */
	r11 = 0xC0BC1B0u; UPD(0x0C09A5A8u, 2);  /* 0C09A5A6 mov.l @(disp,pc),Rn */
	r5 = 0x78u;  /* 0C09A5A8 mov #imm,Rn */
	IF(0x0C09A5AAu); { u32 t_ = r11; PR = 0x0C09A5AEu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09A5AEu); }  /* 0C09A5AA jsr @Rn */
L_0C09A5AE: BLKS(0x0C09A5AEu);
	T = (r0 & r0) == 0;  /* 0C09A5AE tst Rm,Rn */
	if (!T) { UPD(0x0C09A5B6u, 4); goto L_0C09A5B6; }  /* 0C09A5B0 bf */
L_0C09A5B2: BLKS(0x0C09A5B2u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C09A5B2 bra */
L_0C09A5B6: BLKS(0x0C09A5B6u);
	r4 = r12;  /* 0C09A5B6 mov Rm,Rn */
	r0 = 0x88u; UPD(0x0C09A5BAu, 2);  /* 0C09A5B8 mov.w @(disp,pc),Rn */
	r7 = 0x1u;  /* 0C09A5BA mov #imm,Rn */
	r3 = R32(r9 + 0xCu); UPD(0x0C09A5BEu, 2);  /* 0C09A5BC mov.l @(disp,Rm),Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C09A5C0u, 1);  /* 0C09A5BE mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C09A5C0 add #imm,Rn */
	IF(0x0C09A5C2u); W16(r0 + r9, r7); UPD(0x0C09A5C4u, 2);  /* 0C09A5C2 mov.w Rm,@(r0,Rn) */
	IF(0x0C09A5C4u); { u32 t_ = r12; PR = 0x0C09A5C8u; W32(r9 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09A5C8u); }  /* 0C09A5C4 jsr @Rn */
L_0C09A5C8: BLKS(0x0C09A5C8u);
	r0 = 0x98u; UPD(0x0C09A5CAu, 1);  /* 0C09A5C8 mov.w @(disp,pc),Rn */
	IF(0x0C09A5CAu); W8(r0 + r9, r8); UPD(0x0C09A5CCu, 1);  /* 0C09A5CA mov.b Rm,@(r0,Rn) */
	{ r4 = 0x74u; /* slot mov #imm,Rn */ UPD(0x0C099D00u, 3); goto L_0C099D00; }  /* 0C09A5CC bra */
}

void blk_f_0C09A5D0(sh3_t *c)
{
	LOCALS;
	goto L_0C09A5D0;
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099AE0: BLKS(0x0C099AE0u);
	r1 = 0xC098E60u; UPD(0x0C099AE2u, 1);  /* 0C099AE0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C099AE2 mov Rm,Rn */
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 4);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C09A3CA: BLKS(0x0C09A3CAu);
	r0 = 0xA8u; UPD(0x0C09A3CCu, 1);  /* 0C09A3CA mov.w @(disp,pc),Rn */
	r5 = r7;  /* 0C09A3CC mov Rm,Rn */
	r5 += r0;  /* 0C09A3CE add Rm,Rn */
	r0 += r6;  /* 0C09A3D0 add Rm,Rn */
	r0 += 0x1u;  /* 0C09A3D2 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C09A3D6u, 5);  /* 0C09A3D4 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C09A3D6 add #imm,Rn */
	r3 = 0xAFu; UPD(0x0C09A3DAu, 2);  /* 0C09A3D8 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C09A3DA mov Rm,Rn */
	r9 = R32(r6 + 0x24u); UPD(0x0C09A3DEu, 2);  /* 0C09A3DC mov.l @(disp,Rm),Rn */
	r12 = r10;  /* 0C09A3DE mov Rm,Rn */
	r11 = R32(r6 + 0x28u); UPD(0x0C09A3E2u, 2);  /* 0C09A3E0 mov.l @(disp,Rm),Rn */
	IF(0x0C09A3E2u); r13 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09A3E4u, 1);  /* 0C09A3E2 mov.b @(r0,Rm),Rn */
	r8 = R32(r7 + 0x2Cu); UPD(0x0C09A3E6u, 1);  /* 0C09A3E4 mov.l @(disp,Rm),Rn */
	r12 += r13;  /* 0C09A3E6 add Rm,Rn */
	r1 = R32(r7 + 0x30u); UPD(0x0C09A3EAu, 2);  /* 0C09A3E8 mov.l @(disp,Rm),Rn */
	r9 += r8;  /* 0C09A3EA add Rm,Rn */
	r11 += r1;  /* 0C09A3EC add Rm,Rn */
	r0 = r12 & 0xFF;  /* 0C09A3EE extu.b Rm,Rn */
	W32(r7 + 0x24u, r9); UPD(0x0C09A3F2u, 4);  /* 0C09A3F0 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x14u;  /* 0C09A3F2 cmp/eq #imm,r0 */
	W32(r7 + 0x28u, r11); UPD(0x0C09A3F6u, 2);  /* 0C09A3F4 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W8(r5, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09A410u, 3); goto L_0C09A410; } UPD(0x0C09A3FAu, 1); goto L_0C09A3FA; }  /* 0C09A3F6 bt/s */
L_0C09A3FA: BLKS(0x0C09A3FAu);
	r13 = R32(r6); UPD(0x0C09A3FCu, 1);  /* 0C09A3FA mov.l @Rm,Rn */
	r5 = R32(r7); UPD(0x0C09A3FEu, 1);  /* 0C09A3FC mov.l @Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C09A400u, 1);  /* 0C09A3FE mov.w @(disp,pc),Rn */
	r6 = 0x100u; UPD(0x0C09A402u, 1);  /* 0C09A400 mov.w @(disp,pc),Rn */
	r5 &= r2;  /* 0C09A402 and Rm,Rn */
	r13 &= r6;  /* 0C09A404 and Rm,Rn */
	r5 |= r13;  /* 0C09A406 or Rm,Rn */
	W32(r7, r5); UPD(0x0C09A40Au, 4);  /* 0C09A408 mov.l Rm,@Rn */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C09A40A bra */
L_0C09A410: BLKS(0x0C09A410u);
	r4 = R32(r7); UPD(0x0C09A412u, 1);  /* 0C09A410 mov.l @Rm,Rn */
	r12 = 0x13000000u; UPD(0x0C09A414u, 1);  /* 0C09A412 mov.l @(disp,pc),Rn */
	r4 |= r12;  /* 0C09A414 or Rm,Rn */
	{ W32(r7, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C09A3FAu, 4); goto L_0C09A3FA; }  /* 0C09A416 bra */
L_0C09A5D0: BLKS(0x0C09A5D0u);
	r11 = 0xC0A8CA0u; UPD(0x0C09A5D2u, 1);  /* 0C09A5D0 mov.l @(disp,pc),Rn */
	IF(0x0C09A5D2u); { u32 t_ = r11; PR = 0x0C09A5D6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09A5D6u); }  /* 0C09A5D2 jsr @Rn */
L_0C09A5D6: BLKS(0x0C09A5D6u);
	IF(0x0C09A5D6u); T = (s32)r0 >= 0;  /* 0C09A5D6 cmp/pz Rn */
	if (T) { UPD(0x0C09A5DEu, 4); goto L_0C09A5DE; }  /* 0C09A5D8 bt */
L_0C09A5DA: BLKS(0x0C09A5DAu);
	{ IF(0x0C09A5DCu); ; /* slot nop */ UPD(0x0C099AE0u, 3); goto L_0C099AE0; }  /* 0C09A5DA bra */
L_0C09A5DE: BLKS(0x0C09A5DEu);
	r2 = 0xB4u; UPD(0x0C09A5E0u, 1);  /* 0C09A5DE mov.w @(disp,pc),Rn */
	IF(0x0C09A5E0u); MACL = r12 * r2;  /* 0C09A5E0 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09A5E4u, 3);  /* 0C09A5E2 mov.l @(disp,pc),Rn */
	IF(0x0C09A5E4u); r7 = MACL;  /* 0C09A5E4 sts macl,Rn */
	IF(0x0C09A5E6u); MACL = r0 * r2;  /* 0C09A5E6 mul.l Rm,Rn */
	r7 += r9;  /* 0C09A5E8 add Rm,Rn */
	IF(0x0C09A5EAu); r6 = MACL;  /* 0C09A5EA sts macl,Rn */
	{ r6 += r9; /* slot add Rm,Rn */ UPD(0x0C09A3CAu, 8); goto L_0C09A3CA; }  /* 0C09A5EC bra */
}

void blk_f_0C09A630(sh3_t *c)
{
	LOCALS;
	goto L_0C09A630;
L_0C099712: BLKS(0x0C099712u);
	r14 += 0x8u;  /* 0C099712 add #imm,Rn */
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 3);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099730: BLKS(0x0C099730u);
	r0 = 0xB4u; UPD(0x0C099732u, 1);  /* 0C099730 mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C099732 mov #imm,Rn */
	IF(0x0C099734u); MACL = r12 * r0;  /* 0C099734 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C099738u, 4);  /* 0C099736 mov.l @(disp,pc),Rn */
	IF(0x0C099738u); r0 = MACL;  /* 0C099738 sts macl,Rn */
	{ IF(0x0C09973Cu); W32(r0 + r4, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C099712u, 4); goto L_0C099712; }  /* 0C09973A bra */
L_0C099AE6: BLKS(0x0C099AE6u);
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 2);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C099D00: BLKS(0x0C099D00u);
	r1 = 0xC0C2110u; UPD(0x0C099D02u, 1);  /* 0C099D00 mov.l @(disp,pc),Rn */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099AE6u, 3); goto L_0C099AE6; }  /* 0C099D02 bra */
L_0C09A630: BLKS(0x0C09A630u);
	r9 = 0xC0A8CA0u; UPD(0x0C09A632u, 1);  /* 0C09A630 mov.l @(disp,pc),Rn */
	IF(0x0C09A632u); { u32 t_ = r9; PR = 0x0C09A636u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09A636u); }  /* 0C09A632 jsr @Rn */
L_0C09A636: BLKS(0x0C09A636u);
	IF(0x0C09A636u); T = (s32)r0 >= 0;  /* 0C09A636 cmp/pz Rn */
	if (T) { UPD(0x0C09A63Eu, 4); goto L_0C09A63E; }  /* 0C09A638 bt */
L_0C09A63A: BLKS(0x0C09A63Au);
	{ IF(0x0C09A63Cu); ; /* slot nop */ UPD(0x0C099730u, 3); goto L_0C099730; }  /* 0C09A63A bra */
L_0C09A63E: BLKS(0x0C09A63Eu);
	r5 = 0xB4u; UPD(0x0C09A640u, 1);  /* 0C09A63E mov.w @(disp,pc),Rn */
	IF(0x0C09A640u); MACL = r12 * r5;  /* 0C09A640 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C09A644u, 3);  /* 0C09A642 mov.l @(disp,pc),Rn */
	IF(0x0C09A644u); r8 = MACL;  /* 0C09A644 sts macl,Rn */
	IF(0x0C09A646u); MACL = r0 * r5;  /* 0C09A646 mul.l Rm,Rn */
	r8 += r6;  /* 0C09A648 add Rm,Rn */
	r10 = R32(r8 + 0x30u); UPD(0x0C09A64Cu, 5);  /* 0C09A64A mov.l @(disp,Rm),Rn */
	IF(0x0C09A64Cu); r5 = MACL;  /* 0C09A64C sts macl,Rn */
	r5 += r6;  /* 0C09A64E add Rm,Rn */
	r0 = R32(r5 + 0x28u); UPD(0x0C09A652u, 3);  /* 0C09A650 mov.l @(disp,Rm),Rn */
	r13 = r8;  /* 0C09A652 mov Rm,Rn */
	r0 += r10;  /* 0C09A654 add Rm,Rn */
	r7 = R32(r5 + 0x24u); UPD(0x0C09A658u, 3);  /* 0C09A656 mov.l @(disp,Rm),Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C09A65Au, 1);  /* 0C09A658 mov.l @(disp,Rm),Rn */
	r2 = 0xA8u; UPD(0x0C09A65Cu, 1);  /* 0C09A65A mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C09A65C add Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C09A660u, 2);  /* 0C09A65E mov.l Rm,@(disp,Rn) */
	r13 += r2;  /* 0C09A660 add Rm,Rn */
	r11 = 0xAFu; UPD(0x0C09A664u, 2);  /* 0C09A662 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09A664 mov Rm,Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C09A668u, 2);  /* 0C09A666 mov.l Rm,@(disp,Rn) */
	r2 += r5;  /* 0C09A668 add Rm,Rn */
	IF(0x0C09A66Au); r4 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C09A66Cu, 2);  /* 0C09A66A mov.b @(r0,Rm),Rn */
	r2 += 0x1u;  /* 0C09A66C add #imm,Rn */
	r7 = R32(r8); UPD(0x0C09A670u, 2);  /* 0C09A66E mov.l @Rm,Rn */
	r0 = r5;  /* 0C09A670 mov Rm,Rn */
	r3 = R32(r5); UPD(0x0C09A674u, 2);  /* 0C09A672 mov.l @Rm,Rn */
	r13 += 0x1u;  /* 0C09A674 add #imm,Rn */
	r6 = 0xFCFFFEFFu; UPD(0x0C09A678u, 2);  /* 0C09A676 mov.l @(disp,pc),Rn */
	r1 = 0x3000100u; UPD(0x0C09A67Au, 1);  /* 0C09A678 mov.l @(disp,pc),Rn */
	r7 &= r6;  /* 0C09A67A and Rm,Rn */
	r10 = 0x9Au; UPD(0x0C09A67Eu, 2);  /* 0C09A67C mov.w @(disp,pc),Rn */
	r3 &= r1;  /* 0C09A67E and Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C09A682u, 2);  /* 0C09A680 mov.b @Rm,Rn */
	r7 |= r3;  /* 0C09A682 or Rm,Rn */
	IF(0x0C09A684u); r11 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09A686u, 2);  /* 0C09A684 mov.b @(r0,Rm),Rn */
	r9 += r4;  /* 0C09A686 add Rm,Rn */
	r0 = r11;  /* 0C09A688 mov Rm,Rn */
	W8(r13, r9); UPD(0x0C09A68Cu, 3);  /* 0C09A68A mov.b Rm,@Rn */
	T = r0 == 0x3u;  /* 0C09A68C cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r8, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09A742u, 4); goto L_0C09A742; } UPD(0x0C09A692u, 1); goto L_0C09A692; }  /* 0C09A68E bf/s */
L_0C09A692: BLKS(0x0C09A692u);
	r10 = 0xC062780u; UPD(0x0C09A694u, 1);  /* 0C09A692 mov.l @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C09A694 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09A698u, 2);  /* 0C09A696 mov.w @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C09A698 mov #imm,Rn */
	IF(0x0C09A69Au); { u32 t_ = r10; PR = 0x0C09A69Eu; IF(0x0C09A69Cu); W16(r0 + r8, r2); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09A69Eu); }  /* 0C09A69A jsr @Rn */
L_0C09A69E: BLKS(0x0C09A69Eu);
	r11 = 0xC1C7260u; UPD(0x0C09A6A0u, 1);  /* 0C09A69E mov.l @(disp,pc),Rn */
	IF(0x0C09A6A0u); r0 <<= 2;  /* 0C09A6A0 shll2 Rn */
	IF(0x0C09A6A2u); r4 = R32(r0 + r11); UPD(0x0C09A6A4u, 2);  /* 0C09A6A2 mov.l @(r0,Rm),Rn */
	r9 = 0x0u;  /* 0C09A6A4 mov #imm,Rn */
	r13 = 0xC0A8B10u; UPD(0x0C09A6A8u, 2);  /* 0C09A6A6 mov.l @(disp,pc),Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C09A6AAu, 1);  /* 0C09A6A8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r9); UPD(0x0C09A6ACu, 1);  /* 0C09A6AA mov.l Rm,@(disp,Rn) */
	IF(0x0C09A6ACu); { u32 t_ = r13; PR = 0x0C09A6B0u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C09A6B0u); }  /* 0C09A6AC jsr @Rn */
L_0C09A6B0: BLKS(0x0C09A6B0u);
	r12 = R32(r8); UPD(0x0C09A6B2u, 1);  /* 0C09A6B0 mov.l @Rm,Rn */
	r4 = 0x75u;  /* 0C09A6B2 mov #imm,Rn */
	r1 = 0xFFFFBFFFu; UPD(0x0C09A6B6u, 2);  /* 0C09A6B4 mov.w @(disp,pc),Rn */
	r12 &= r1;  /* 0C09A6B6 and Rm,Rn */
	{ W32(r8, r12); /* slot mov.l Rm,@Rn */ UPD(0x0C099D00u, 4); goto L_0C099D00; }  /* 0C09A6B8 bra */
L_0C09A742: BLKS(0x0C09A742u);
	r13 = 0xFFFFEFCCu; UPD(0x0C09A744u, 1);  /* 0C09A742 mov.w @(disp,pc),Rn */
	IF(0x0C09A744u); { u32 tv_ = (r13 + 0x0C09A748u); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09A744 braf Rn */
}

void blk_f_0C09A6C0(sh3_t *c)
{
	LOCALS;
	goto L_0C09A6C0;
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099AE0: BLKS(0x0C099AE0u);
	r1 = 0xC098E60u; UPD(0x0C099AE2u, 1);  /* 0C099AE0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C099AE2 mov Rm,Rn */
	UPD(0x0C099AE4u, 1);
L_0C099AE4: BLKS(0x0C099AE4u);
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 3);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C099BF2: BLKS(0x0C099BF2u);
	r1 = 0xC0A8AE0u; UPD(0x0C099BF4u, 1);  /* 0C099BF2 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C099AE4u, 3); goto L_0C099AE4; }  /* 0C099BF4 bra */
L_0C09A066: BLKS(0x0C09A066u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C09A066 bra */
L_0C09A6C0: BLKS(0x0C09A6C0u);
	r9 = 0xC0A8BF0u; UPD(0x0C09A6C2u, 1);  /* 0C09A6C0 mov.l @(disp,pc),Rn */
	IF(0x0C09A6C2u); { u32 t_ = r9; PR = 0x0C09A6C6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C09A6C6u); }  /* 0C09A6C2 jsr @Rn */
L_0C09A6C6: BLKS(0x0C09A6C6u);
	IF(0x0C09A6C6u); T = (s32)r0 >= 0;  /* 0C09A6C6 cmp/pz Rn */
	if (T) { UPD(0x0C09A6CEu, 4); goto L_0C09A6CE; }  /* 0C09A6C8 bt */
L_0C09A6CA: BLKS(0x0C09A6CAu);
	{ IF(0x0C09A6CCu); ; /* slot nop */ UPD(0x0C099AE0u, 3); goto L_0C099AE0; }  /* 0C09A6CA bra */
L_0C09A6CE: BLKS(0x0C09A6CEu);
	r9 = 0xB4u; UPD(0x0C09A6D0u, 1);  /* 0C09A6CE mov.w @(disp,pc),Rn */
	IF(0x0C09A6D0u); MACL = r12 * r9;  /* 0C09A6D0 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C09A6D4u, 3);  /* 0C09A6D2 mov.l @(disp,pc),Rn */
	IF(0x0C09A6D4u); r8 = MACL;  /* 0C09A6D4 sts macl,Rn */
	IF(0x0C09A6D6u); MACL = r0 * r9;  /* 0C09A6D6 mul.l Rm,Rn */
	r8 += r13;  /* 0C09A6D8 add Rm,Rn */
	r6 = R32(r8 + 0x2Cu); UPD(0x0C09A6DCu, 5);  /* 0C09A6DA mov.l @(disp,Rm),Rn */
	IF(0x0C09A6DCu); r9 = MACL;  /* 0C09A6DC sts macl,Rn */
	r9 += r13;  /* 0C09A6DE add Rm,Rn */
	r0 = R32(r9 + 0x24u); UPD(0x0C09A6E2u, 3);  /* 0C09A6E0 mov.l @(disp,Rm),Rn */
	r13 = r8;  /* 0C09A6E2 mov Rm,Rn */
	r4 = 0xA8u; UPD(0x0C09A6E6u, 2);  /* 0C09A6E4 mov.w @(disp,pc),Rn */
	r0 += r6;  /* 0C09A6E6 add Rm,Rn */
	r13 += r4;  /* 0C09A6E8 add Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C09A6ECu, 3);  /* 0C09A6EA mov.l Rm,@(disp,Rn) */
	r4 += r9;  /* 0C09A6EC add Rm,Rn */
	r5 = 0xAFu; UPD(0x0C09A6F0u, 2);  /* 0C09A6EE mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09A6F0 mov Rm,Rn */
	r11 = R32(r9 + 0x28u); UPD(0x0C09A6F4u, 2);  /* 0C09A6F2 mov.l @(disp,Rm),Rn */
	r4 += 0x1u;  /* 0C09A6F4 add #imm,Rn */
	r10 = R32(r8 + 0x30u); UPD(0x0C09A6F8u, 2);  /* 0C09A6F6 mov.l @(disp,Rm),Rn */
	r13 += 0x1u;  /* 0C09A6F8 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C09A6FCu, 2);  /* 0C09A6FA mov.b @Rm,Rn */
	r11 += r10;  /* 0C09A6FC add Rm,Rn */
	IF(0x0C09A6FEu); r7 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C09A700u, 2);  /* 0C09A6FE mov.b @(r0,Rm),Rn */
	r6 = R32(r9); UPD(0x0C09A702u, 1);  /* 0C09A700 mov.l @Rm,Rn */
	r3 += r7;  /* 0C09A702 add Rm,Rn */
	r0 = R32(r8); UPD(0x0C09A706u, 2);  /* 0C09A704 mov.l @Rm,Rn */
	r2 = 0xFCFFFEFFu; UPD(0x0C09A708u, 1);  /* 0C09A706 mov.l @(disp,pc),Rn */
	r1 = 0x3000100u; UPD(0x0C09A70Au, 1);  /* 0C09A708 mov.l @(disp,pc),Rn */
	r0 &= r2;  /* 0C09A70A and Rm,Rn */
	r10 = 0x9Cu; UPD(0x0C09A70Eu, 2);  /* 0C09A70C mov.w @(disp,pc),Rn */
	r6 &= r1;  /* 0C09A70E and Rm,Rn */
	W8(r13, r3); UPD(0x0C09A712u, 2);  /* 0C09A710 mov.b Rm,@Rn */
	r10 += r8;  /* 0C09A712 add Rm,Rn */
	r0 |= r6;  /* 0C09A714 or Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C09A718u, 3);  /* 0C09A716 mov.b @Rm,Rn */
	W32(r8 + 0x28u, r11); UPD(0x0C09A71Au, 1);  /* 0C09A718 mov.l Rm,@(disp,Rn) */
	T = (r3 & r3) == 0;  /* 0C09A71A tst Rm,Rn */
	{ u32 c_ = T; W32(r8, r0); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09A724u, 4); goto L_0C09A724; } UPD(0x0C09A720u, 1); goto L_0C09A720; }  /* 0C09A71C bt/s */
L_0C09A720: BLKS(0x0C09A720u);
	{ r2 = r10; /* slot mov Rm,Rn */ UPD(0x0C09A830u, 3); goto L_0C09A830; }  /* 0C09A720 bra */
L_0C09A724: BLKS(0x0C09A724u);
	r2 = 0x98u; UPD(0x0C09A726u, 1);  /* 0C09A724 mov.w @(disp,pc),Rn */
	r3 = r9;  /* 0C09A726 mov Rm,Rn */
	r3 += r2;  /* 0C09A728 add Rm,Rn */
	r3 += 0x2u;  /* 0C09A72A add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C09A72Eu, 4);  /* 0C09A72C mov.b @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09A72E cmp/eq #imm,r0 */
	{ u32 c_ = T; r3 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09A790u, 4); goto L_0C09A790; } goto L_0C09A734; }  /* 0C09A730 bt/s */
L_0C09A734: BLKS(0x0C09A734u);
	r3 += r8;  /* 0C09A734 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C09A738u, 3);  /* 0C09A736 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09A738 add #imm,Rn */
	W8(r3, r0); UPD(0x0C09A73Cu, 2);  /* 0C09A73A mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09A73C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09A73E tst Rm,Rn */
	if (T) { UPD(0x0C09A74Au, 5); goto L_0C09A74A; }  /* 0C09A740 bt */
L_0C09A742: BLKS(0x0C09A742u);
	r13 = 0xFFFFEFCCu; UPD(0x0C09A744u, 1);  /* 0C09A742 mov.w @(disp,pc),Rn */
	IF(0x0C09A744u); { u32 tv_ = (r13 + 0x0C09A748u); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09A744 braf Rn */
L_0C09A74A: BLKS(0x0C09A74Au);
	r0 = R32(r8 + 0xCu); UPD(0x0C09A74Cu, 1);  /* 0C09A74A mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C09A74C cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09A770u, 4); goto L_0C09A770; } goto L_0C09A752; }  /* 0C09A74E bt/s */
L_0C09A752: BLKS(0x0C09A752u);
	T = (s32)r0 > (s32)r2;  /* 0C09A752 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09A760u, 5); goto L_0C09A760; }  /* 0C09A754 bf */
L_0C09A756: BLKS(0x0C09A756u);
	r0 += 0xFFFFFFFFu;  /* 0C09A756 add #imm,Rn */
	UPD(0x0C09A758u, 1);
L_0C09A758: BLKS(0x0C09A758u);
	{ W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C099BF2u, 3); goto L_0C099BF2; }  /* 0C09A758 bra */
L_0C09A760: BLKS(0x0C09A760u);
	{ r0 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09A758u, 3); goto L_0C09A758; }  /* 0C09A760 bra */
L_0C09A770: BLKS(0x0C09A770u);
	r4 = R32(r8 + 0x8u); UPD(0x0C09A772u, 1);  /* 0C09A770 mov.l @(disp,Rm),Rn */
	r6 = 0xFFFFFFFFu;  /* 0C09A772 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09A776u, 2);  /* 0C09A774 mov.w @(disp,pc),Rn */
	r4 += 0xFFFFFFFFu;  /* 0C09A776 add #imm,Rn */
	IF(0x0C09A778u); W16(r0 + r8, r6); UPD(0x0C09A77Au, 2);  /* 0C09A778 mov.w Rm,@(r0,Rn) */
	r1 = 0x17u;  /* 0C09A77A mov #imm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C09A77Eu, 2);  /* 0C09A77C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r1); UPD(0x0C09A780u, 1);  /* 0C09A77E mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A8B10u; UPD(0x0C09A782u, 1);  /* 0C09A780 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C099AE4u, 3); goto L_0C099AE4; }  /* 0C09A782 bra */
L_0C09A790: BLKS(0x0C09A790u);
	r11 = 0xC069BF0u; UPD(0x0C09A792u, 1);  /* 0C09A790 mov.l @(disp,pc),Rn */
	r13 = 0xC068F00u; UPD(0x0C09A794u, 1);  /* 0C09A792 mov.l @(disp,pc),Rn */
	IF(0x0C09A794u); { u32 t_ = r11; PR = 0x0C09A798u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C09A798u); }  /* 0C09A794 jsr @Rn */
L_0C09A798: BLKS(0x0C09A798u);
	r5 = 0x4u;  /* 0C09A798 mov #imm,Rn */
	IF(0x0C09A79Au); { u32 t_ = r13; PR = 0x0C09A79Eu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C09A79Eu); }  /* 0C09A79A jsr @Rn */
L_0C09A79E: BLKS(0x0C09A79Eu);
	r6 = 0x86u; UPD(0x0C09A7A0u, 1);  /* 0C09A79E mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09A7A0 mov Rm,Rn */
	IF(0x0C09A7A2u); r4 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C09A7A4u, 2);  /* 0C09A7A2 mov.w @(r0,Rm),Rn */
	r4 += 0x8u;  /* 0C09A7A4 add #imm,Rn */
	IF(0x0C09A7A6u); r4 >>= 2;  /* 0C09A7A6 shlr2 Rn */
	r0 = 0x1Fu;  /* 0C09A7A8 mov #imm,Rn */
	IF(0x0C09A7AAu); r4 >>= 2;  /* 0C09A7AA shlr2 Rn */
	r4 &= r0;  /* 0C09A7AC and Rm,Rn */
	r11 = 0xC0A8AE0u; UPD(0x0C09A7B0u, 6);  /* 0C09A7AE mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C09A7B2u, 1);  /* 0C09A7B0 mov.l Rm,@(disp,Rn) */
	IF(0x0C09A7B2u); { u32 t_ = r11; PR = 0x0C09A7B6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09A7B6u); }  /* 0C09A7B2 jsr @Rn */
L_0C09A7B6: BLKS(0x0C09A7B6u);
	r5 = 0xA5u; UPD(0x0C09A7B8u, 1);  /* 0C09A7B6 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C09A7B8 mov Rm,Rn */
	IF(0x0C09A7BAu); r7 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C09A7BCu, 2);  /* 0C09A7BA mov.b @(r0,Rm),Rn */
	r4 = r12;  /* 0C09A7BC mov Rm,Rn */
	r2 = 0xC1C727Cu; UPD(0x0C09A7C0u, 2);  /* 0C09A7BE mov.l @(disp,pc),Rn */
	r6 = 0xAu;  /* 0C09A7C0 mov #imm,Rn */
	r8 = 0xC0BC1B0u; UPD(0x0C09A7C4u, 2);  /* 0C09A7C2 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C09A7C4 mov Rm,Rn */
	IF(0x0C09A7C6u); { u32 t_ = r8; PR = 0x0C09A7CAu; IF(0x0C09A7C8u); r5 = (u32)(s32)(s8)R8(r0 + r7); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09A7CAu); }  /* 0C09A7C6 jsr @Rn */
L_0C09A7CA: BLKS(0x0C09A7CAu);
	T = (r0 & r0) == 0;  /* 0C09A7CA tst Rm,Rn */
	if (T) { UPD(0x0C09A7D2u, 4); goto L_0C09A7D2; }  /* 0C09A7CC bt */
L_0C09A7CE: BLKS(0x0C09A7CEu);
	r12 = 0x4u;  /* 0C09A7CE mov #imm,Rn */
	W8(r10, r12); UPD(0x0C09A7D2u, 2);  /* 0C09A7D0 mov.b Rm,@Rn */
L_0C09A7D2: BLKS(0x0C09A7D2u);
	r13 = 0xFFFFEF3Cu; UPD(0x0C09A7D4u, 1);  /* 0C09A7D2 mov.w @(disp,pc),Rn */
	IF(0x0C09A7D4u); { u32 tv_ = (r13 + 0x0C09A7D8u); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09A7D4 braf Rn */
L_0C09A830: BLKS(0x0C09A830u);
	r2 += 0x1u;  /* 0C09A830 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C09A834u, 2);  /* 0C09A832 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C09A834 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C09A836 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C09A838 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09A7D2u, 6); goto L_0C09A7D2; } UPD(0x0C09A83Eu, 1); goto L_0C09A83E; }  /* 0C09A83A bf/s */
L_0C09A83E: BLKS(0x0C09A83Eu);
	r7 = r3;  /* 0C09A83E mov Rm,Rn */
	r7 += 0xFFFFFFFFu;  /* 0C09A840 add #imm,Rn */
	W8(r10, r7); UPD(0x0C09A844u, 3);  /* 0C09A842 mov.b Rm,@Rn */
	r5 = 0x0u;  /* 0C09A844 mov #imm,Rn */
	r9 = 0x86u; UPD(0x0C09A848u, 2);  /* 0C09A846 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09A848 mov Rm,Rn */
	W8(r2, r5); UPD(0x0C09A84Cu, 2);  /* 0C09A84A mov.b Rm,@Rn */
	IF(0x0C09A84Cu); r10 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C09A84Eu, 1);  /* 0C09A84C mov.w @(r0,Rm),Rn */
	r12 = 0xC069B20u; UPD(0x0C09A850u, 1);  /* 0C09A84E mov.l @(disp,pc),Rn */
	r5 = 0x80000u; UPD(0x0C09A852u, 1);  /* 0C09A850 mov.l @(disp,pc),Rn */
	IF(0x0C09A852u); { u32 t_ = r12; PR = 0x0C09A856u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09A856u); }  /* 0C09A852 jsr @Rn */
L_0C09A856: BLKS(0x0C09A856u);
	r9 = 0xC069AF0u; UPD(0x0C09A858u, 1);  /* 0C09A856 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C09A858 mov Rm,Rn */
	r13 = R32(r8 + 0x24u); UPD(0x0C09A85Cu, 2);  /* 0C09A85A mov.l @(disp,Rm),Rn */
	r5 = 0x66666u; UPD(0x0C09A85Eu, 1);  /* 0C09A85C mov.l @(disp,pc),Rn */
	IF(0x0C09A85Eu); { u32 t_ = r9; PR = 0x0C09A862u; r13 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09A862u); }  /* 0C09A85E jsr @Rn */
L_0C09A862: BLKS(0x0C09A862u);
	r6 = R32(r8 + 0x28u); UPD(0x0C09A864u, 1);  /* 0C09A862 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09A864 add #imm,Rn */
	r8 = 0x20000u; UPD(0x0C09A868u, 2);  /* 0C09A866 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09A868 add Rm,Rn */
	W32(r15, r8); UPD(0x0C09A86Cu, 2);  /* 0C09A86A mov.l Rm,@Rn */
	r4 = 0x0u;  /* 0C09A86C mov #imm,Rn */
	r0 = 0xC0BA480u; UPD(0x0C09A870u, 2);  /* 0C09A86E mov.l @(disp,pc),Rn */
	r5 = r13;  /* 0C09A870 mov Rm,Rn */
	r7 = r10;  /* 0C09A872 mov Rm,Rn */
	IF(0x0C09A874u); { u32 t_ = r0; PR = 0x0C09A878u; IF(0x0C09A876u); ; /* slot nop */ UPD(t_, 4); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C09A878u); }  /* 0C09A874 jsr @Rn */
L_0C09A878: BLKS(0x0C09A878u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C09A066u, 3); goto L_0C09A066; }  /* 0C09A878 bra */
}

void blk_f_0C09A880(sh3_t *c)
{
	LOCALS;
	goto L_0C09A880;
L_0C099AE0: BLKS(0x0C099AE0u);
	r1 = 0xC098E60u; UPD(0x0C099AE2u, 1);  /* 0C099AE0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C099AE2 mov Rm,Rn */
	UPD(0x0C099AE4u, 1);
L_0C099AE4: BLKS(0x0C099AE4u);
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 3);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C099BF2: BLKS(0x0C099BF2u);
	r1 = 0xC0A8AE0u; UPD(0x0C099BF4u, 1);  /* 0C099BF2 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C099AE4u, 3); goto L_0C099AE4; }  /* 0C099BF4 bra */
L_0C099CA0: BLKS(0x0C099CA0u);
	{ W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C099BF2u, 3); goto L_0C099BF2; }  /* 0C099CA0 bra */
L_0C09A780: BLKS(0x0C09A780u);
	r1 = 0xC0A8B10u; UPD(0x0C09A782u, 1);  /* 0C09A780 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C099AE4u, 3); goto L_0C099AE4; }  /* 0C09A782 bra */
L_0C09A880: BLKS(0x0C09A880u);
	r10 = 0xC0A8BF0u; UPD(0x0C09A882u, 1);  /* 0C09A880 mov.l @(disp,pc),Rn */
	IF(0x0C09A882u); { u32 t_ = r10; PR = 0x0C09A886u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C09A886u); }  /* 0C09A882 jsr @Rn */
L_0C09A886: BLKS(0x0C09A886u);
	IF(0x0C09A886u); T = (s32)r0 >= 0;  /* 0C09A886 cmp/pz Rn */
	if (T) { UPD(0x0C09A88Eu, 4); goto L_0C09A88E; }  /* 0C09A888 bt */
L_0C09A88A: BLKS(0x0C09A88Au);
	{ IF(0x0C09A88Cu); ; /* slot nop */ UPD(0x0C099AE0u, 3); goto L_0C099AE0; }  /* 0C09A88A bra */
L_0C09A88E: BLKS(0x0C09A88Eu);
	r7 = 0xB4u; UPD(0x0C09A890u, 1);  /* 0C09A88E mov.w @(disp,pc),Rn */
	IF(0x0C09A890u); MACL = r12 * r7;  /* 0C09A890 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C09A894u, 3);  /* 0C09A892 mov.l @(disp,pc),Rn */
	IF(0x0C09A894u); r8 = MACL;  /* 0C09A894 sts macl,Rn */
	IF(0x0C09A896u); MACL = r0 * r7;  /* 0C09A896 mul.l Rm,Rn */
	r8 += r13;  /* 0C09A898 add Rm,Rn */
	r6 = R32(r8 + 0x2Cu); UPD(0x0C09A89Cu, 5);  /* 0C09A89A mov.l @(disp,Rm),Rn */
	IF(0x0C09A89Cu); r7 = MACL;  /* 0C09A89C sts macl,Rn */
	r7 += r13;  /* 0C09A89E add Rm,Rn */
	r0 = R32(r7 + 0x24u); UPD(0x0C09A8A2u, 3);  /* 0C09A8A0 mov.l @(disp,Rm),Rn */
	r11 = r8;  /* 0C09A8A2 mov Rm,Rn */
	r0 += r6;  /* 0C09A8A4 add Rm,Rn */
	r4 = R32(r7 + 0x28u); UPD(0x0C09A8A8u, 3);  /* 0C09A8A6 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C09A8AAu, 1);  /* 0C09A8A8 mov.l Rm,@(disp,Rn) */
	r1 = R32(r8 + 0x30u); UPD(0x0C09A8ACu, 1);  /* 0C09A8AA mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C09A8AC mov Rm,Rn */
	r10 = 0xAFu; UPD(0x0C09A8B0u, 2);  /* 0C09A8AE mov.w @(disp,pc),Rn */
	r4 += r1;  /* 0C09A8B0 add Rm,Rn */
	r3 = 0xA8u; UPD(0x0C09A8B4u, 2);  /* 0C09A8B2 mov.w @(disp,pc),Rn */
	IF(0x0C09A8B4u); r5 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09A8B6u, 1);  /* 0C09A8B4 mov.b @(r0,Rm),Rn */
	r11 += r3;  /* 0C09A8B6 add Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C09A8BAu, 2);  /* 0C09A8B8 mov.l Rm,@(disp,Rn) */
	r3 += r7;  /* 0C09A8BA add Rm,Rn */
	r4 = R32(r8); UPD(0x0C09A8BEu, 2);  /* 0C09A8BC mov.l @Rm,Rn */
	r3 += 0x1u;  /* 0C09A8BE add #imm,Rn */
	r0 = R32(r7); UPD(0x0C09A8C2u, 2);  /* 0C09A8C0 mov.l @Rm,Rn */
	r11 += 0x1u;  /* 0C09A8C2 add #imm,Rn */
	r13 = 0xFCFFFEFFu; UPD(0x0C09A8C6u, 2);  /* 0C09A8C4 mov.l @(disp,pc),Rn */
	r6 = 0x3000100u; UPD(0x0C09A8C8u, 1);  /* 0C09A8C6 mov.l @(disp,pc),Rn */
	r4 &= r13;  /* 0C09A8C8 and Rm,Rn */
	r0 &= r6;  /* 0C09A8CA and Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r3); UPD(0x0C09A8CEu, 3);  /* 0C09A8CC mov.b @Rm,Rn */
	r4 |= r0;  /* 0C09A8CE or Rm,Rn */
	r2 = 0x9Au; UPD(0x0C09A8D2u, 2);  /* 0C09A8D0 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C09A8D2 mov Rm,Rn */
	IF(0x0C09A8D4u); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09A8D6u, 2);  /* 0C09A8D4 mov.b @(r0,Rm),Rn */
	r9 += r5;  /* 0C09A8D6 add Rm,Rn */
	r0 = r3;  /* 0C09A8D8 mov Rm,Rn */
	W8(r11, r9); UPD(0x0C09A8DCu, 3);  /* 0C09A8DA mov.b Rm,@Rn */
	T = r0 == 0x3u;  /* 0C09A8DC cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r8, r4); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09A930u, 4); goto L_0C09A930; } UPD(0x0C09A8E2u, 1); goto L_0C09A8E2; }  /* 0C09A8DE bt/s */
L_0C09A8E2: BLKS(0x0C09A8E2u);
	r9 = 0xB4u; UPD(0x0C09A8E4u, 1);  /* 0C09A8E2 mov.w @(disp,pc),Rn */
	IF(0x0C09A8E4u); MACL = r12 * r9;  /* 0C09A8E4 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C09A8E8u, 3);  /* 0C09A8E6 mov.l @(disp,pc),Rn */
	IF(0x0C09A8E8u); r2 = MACL;  /* 0C09A8E8 sts macl,Rn */
	r8 = 0x98u; UPD(0x0C09A8ECu, 2);  /* 0C09A8EA mov.w @(disp,pc),Rn */
	r2 += r11;  /* 0C09A8EC add Rm,Rn */
	r8 += r2;  /* 0C09A8EE add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C09A8F2u, 3);  /* 0C09A8F0 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09A8F2 add #imm,Rn */
	W8(r8, r0); UPD(0x0C09A8F6u, 2);  /* 0C09A8F4 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09A8F6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09A8F8 tst Rm,Rn */
	if (!T) { UPD(0x0C09A9A4u, 5); goto L_0C09A9A4; }  /* 0C09A8FA bf */
L_0C09A8FC: BLKS(0x0C09A8FCu);
	r1 = R32(r2 + 0xCu); UPD(0x0C09A8FEu, 1);  /* 0C09A8FC mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C09A8FE tst Rm,Rn */
	if (!T) { UPD(0x0C09A920u, 4); goto L_0C09A920; }  /* 0C09A900 bf */
L_0C09A902: BLKS(0x0C09A902u);
	r5 = R32(r2 + 0x8u); UPD(0x0C09A904u, 1);  /* 0C09A902 mov.l @(disp,Rm),Rn */
	r10 = 0xFFFFFFFFu;  /* 0C09A904 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09A908u, 2);  /* 0C09A906 mov.w @(disp,pc),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C09A908 add #imm,Rn */
	IF(0x0C09A90Au); W16(r0 + r2, r10); UPD(0x0C09A90Cu, 2);  /* 0C09A90A mov.w Rm,@(r0,Rn) */
	r1 = 0x17u; UPD(0x0C09A90Eu, 1);  /* 0C09A90C mov #imm,Rn */
	W32(r2 + 0x8u, r5); UPD(0x0C09A910u, 1);  /* 0C09A90E mov.l Rm,@(disp,Rn) */
	{ W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09A780u, 3); goto L_0C09A780; }  /* 0C09A910 bra */
L_0C09A920: BLKS(0x0C09A920u);
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C099CA0u, 3); goto L_0C099CA0; }  /* 0C09A920 bra */
L_0C09A930: BLKS(0x0C09A930u);
	r5 = 0xA6u; UPD(0x0C09A932u, 1);  /* 0C09A930 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C09A932 mov Rm,Rn */
	IF(0x0C09A934u); r9 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C09A936u, 2);  /* 0C09A934 mov.b @(r0,Rm),Rn */
	r4 = r12;  /* 0C09A936 mov Rm,Rn */
	r2 = 0xC1C7280u; UPD(0x0C09A93Au, 2);  /* 0C09A938 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C09A93A mov #imm,Rn */
	r11 = 0xC0BC1B0u; UPD(0x0C09A93Eu, 2);  /* 0C09A93C mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C09A93E mov Rm,Rn */
	IF(0x0C09A940u); { u32 t_ = r11; PR = 0x0C09A944u; IF(0x0C09A942u); r5 = (u32)(s32)(s8)R8(r0 + r9); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09A944u); }  /* 0C09A940 jsr @Rn */
L_0C09A944: BLKS(0x0C09A944u);
	T = (r0 & r0) == 0;  /* 0C09A944 tst Rm,Rn */
	if (T) { UPD(0x0C09A9A4u, 4); goto L_0C09A9A4; }  /* 0C09A946 bt */
L_0C09A948: BLKS(0x0C09A948u);
	r4 = r12;  /* 0C09A948 mov Rm,Rn */
	r0 = 0x88u; UPD(0x0C09A94Cu, 2);  /* 0C09A94A mov.w @(disp,pc),Rn */
	IF(0x0C09A94Cu); r10 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09A94Eu, 1);  /* 0C09A94C mov.w @(r0,Rm),Rn */
	r9 = 0x0u;  /* 0C09A94E mov #imm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C09A952u, 2);  /* 0C09A950 mov.l @(disp,Rm),Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C09A954u, 1);  /* 0C09A952 mov.l @(disp,pc),Rn */
	r0 += r10;  /* 0C09A954 add Rm,Rn */
	r0 &= 0xFu;  /* 0C09A956 and #imm,r0 */
	IF(0x0C09A958u); { u32 t_ = r12; PR = 0x0C09A95Cu; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09A95Cu); }  /* 0C09A958 jsr @Rn */
L_0C09A95C: BLKS(0x0C09A95Cu);
	r11 = 0xC069B20u; UPD(0x0C09A95Eu, 1);  /* 0C09A95C mov.l @(disp,pc),Rn */
	r12 = 0xC0BA480u; UPD(0x0C09A960u, 1);  /* 0C09A95E mov.l @(disp,pc),Rn */
L_0C09A960: BLKS(0x0C09A960u);
	r7 = 0xC1C7284u; UPD(0x0C09A962u, 1);  /* 0C09A960 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C09A962 mov Rm,Rn */
	r6 = R32(r8 + 0xCu); UPD(0x0C09A966u, 2);  /* 0C09A964 mov.l @(disp,Rm),Rn */
	r2 = 0x4u;  /* 0C09A966 mov #imm,Rn */
	r0 += r0;  /* 0C09A968 add Rm,Rn */
	IF(0x0C09A96Au); r13 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C09A96Cu, 3);  /* 0C09A96A mov.w @(r0,Rm),Rn */
	IF(0x0C09A96Cu); ARG0(0x462Du); { s32 s_ = (s32)r2; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C09A96C shld Rm,Rn */
	r6 += r13;  /* 0C09A96E add Rm,Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C09A970 exts.w Rm,Rn */
	r5 = 0x100000u; UPD(0x0C09A974u, 4);  /* 0C09A972 mov.l @(disp,pc),Rn */
	IF(0x0C09A974u); { u32 t_ = r11; PR = 0x0C09A978u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C09A978u); }  /* 0C09A974 jsr @Rn */
L_0C09A978: BLKS(0x0C09A978u);
	r13 = R32(r8 + 0x24u); UPD(0x0C09A97Au, 1);  /* 0C09A978 mov.l @(disp,Rm),Rn */
	r13 += r0;  /* 0C09A97A add Rm,Rn */
	r0 = 0xC069AF0u; UPD(0x0C09A97Eu, 2);  /* 0C09A97C mov.l @(disp,pc),Rn */
	r5 = 0xCCCCCu; UPD(0x0C09A980u, 1);  /* 0C09A97E mov.l @(disp,pc),Rn */
	IF(0x0C09A980u); { u32 t_ = r0; PR = 0x0C09A984u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09A984u); }  /* 0C09A980 jsr @Rn */
L_0C09A984: BLKS(0x0C09A984u);
	r6 = R32(r8 + 0x28u); UPD(0x0C09A986u, 1);  /* 0C09A984 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09A986 add #imm,Rn */
	r6 += r0;  /* 0C09A988 add Rm,Rn */
	r0 = 0x28000u; UPD(0x0C09A98Cu, 3);  /* 0C09A98A mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C09A98C mov #imm,Rn */
	W32(r15, r0); UPD(0x0C09A990u, 2);  /* 0C09A98E mov.l Rm,@Rn */
	r5 = r13;  /* 0C09A990 mov Rm,Rn */
	IF(0x0C09A992u); { u32 t_ = r12; PR = 0x0C09A996u; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C09A996u); }  /* 0C09A992 jsr @Rn */
L_0C09A996: BLKS(0x0C09A996u);
	r4 = r9;  /* 0C09A996 mov Rm,Rn */
	r4 += 0x1u;  /* 0C09A998 add #imm,Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C09A99A exts.w Rm,Rn */
	r3 = 0x1u;  /* 0C09A99C mov #imm,Rn */
	T = (s32)r9 > (s32)r3;  /* 0C09A99E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09A960u, 8); goto L_0C09A960; } UPD(0x0C09A9A4u, 1); goto L_0C09A9A4; }  /* 0C09A9A0 bf/s */
L_0C09A9A4: BLKS(0x0C09A9A4u);
	r13 = 0xFFFFED6Au; UPD(0x0C09A9A6u, 1);  /* 0C09A9A4 mov.w @(disp,pc),Rn */
	IF(0x0C09A9A6u); { u32 tv_ = (r13 + 0x0C09A9AAu); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09A9A6 braf Rn */
}

void blk_f_0C09AA00(sh3_t *c)
{
	LOCALS;
	goto L_0C09AA00;
L_0C099AE0: BLKS(0x0C099AE0u);
	r1 = 0xC098E60u; UPD(0x0C099AE2u, 1);  /* 0C099AE0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C099AE2 mov Rm,Rn */
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 4);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C09A9A4: BLKS(0x0C09A9A4u);
	r13 = 0xFFFFED6Au; UPD(0x0C09A9A6u, 1);  /* 0C09A9A4 mov.w @(disp,pc),Rn */
	IF(0x0C09A9A6u); { u32 tv_ = (r13 + 0x0C09A9AAu); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09A9A6 braf Rn */
L_0C09AA00: BLKS(0x0C09AA00u);
	r8 = 0xC0A8BF0u; UPD(0x0C09AA02u, 1);  /* 0C09AA00 mov.l @(disp,pc),Rn */
	IF(0x0C09AA02u); { u32 t_ = r8; PR = 0x0C09AA06u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C09AA06u); }  /* 0C09AA02 jsr @Rn */
L_0C09AA06: BLKS(0x0C09AA06u);
	IF(0x0C09AA06u); T = (s32)r0 >= 0;  /* 0C09AA06 cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09AA10u, 4); goto L_0C09AA10; } goto L_0C09AA0C; }  /* 0C09AA08 bt/s */
L_0C09AA0C: BLKS(0x0C09AA0Cu);
	{ IF(0x0C09AA0Eu); ; /* slot nop */ UPD(0x0C099AE0u, 4); goto L_0C099AE0; }  /* 0C09AA0C bra */
L_0C09AA10: BLKS(0x0C09AA10u);
	r5 = 0xB4u; UPD(0x0C09AA12u, 1);  /* 0C09AA10 mov.w @(disp,pc),Rn */
	IF(0x0C09AA12u); MACL = r12 * r5;  /* 0C09AA12 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09AA16u, 3);  /* 0C09AA14 mov.l @(disp,pc),Rn */
	IF(0x0C09AA16u); r0 = MACL;  /* 0C09AA16 sts macl,Rn */
	IF(0x0C09AA18u); MACL = r10 * r5;  /* 0C09AA18 mul.l Rm,Rn */
	r0 += r7;  /* 0C09AA1A add Rm,Rn */
	r3 = R32(r0 + 0x2Cu); UPD(0x0C09AA1Eu, 5);  /* 0C09AA1C mov.l @(disp,Rm),Rn */
	IF(0x0C09AA1Eu); r5 = MACL;  /* 0C09AA1E sts macl,Rn */
	r5 += r7;  /* 0C09AA20 add Rm,Rn */
	r6 = R32(r5 + 0x24u); UPD(0x0C09AA24u, 3);  /* 0C09AA22 mov.l @(disp,Rm),Rn */
	r9 = r0;  /* 0C09AA24 mov Rm,Rn */
	r6 += r3;  /* 0C09AA26 add Rm,Rn */
	r2 = 0xA8u; UPD(0x0C09AA2Au, 3);  /* 0C09AA28 mov.w @(disp,pc),Rn */
	W32(r0 + 0x24u, r6); UPD(0x0C09AA2Cu, 1);  /* 0C09AA2A mov.l Rm,@(disp,Rn) */
	r9 += r2;  /* 0C09AA2C add Rm,Rn */
	r6 = R32(r0); UPD(0x0C09AA30u, 2);  /* 0C09AA2E mov.l @Rm,Rn */
	r2 += r5;  /* 0C09AA30 add Rm,Rn */
	r3 = R32(r5); UPD(0x0C09AA34u, 2);  /* 0C09AA32 mov.l @Rm,Rn */
	r2 += 0x1u;  /* 0C09AA34 add #imm,Rn */
	r13 = 0xFCFFFEFFu; UPD(0x0C09AA38u, 2);  /* 0C09AA36 mov.l @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C09AA38 add #imm,Rn */
	r7 = 0x3000100u; UPD(0x0C09AA3Cu, 2);  /* 0C09AA3A mov.l @(disp,pc),Rn */
	r6 &= r13;  /* 0C09AA3C and Rm,Rn */
	r8 = R32(r5 + 0x28u); UPD(0x0C09AA40u, 2);  /* 0C09AA3E mov.l @(disp,Rm),Rn */
	r3 &= r7;  /* 0C09AA40 and Rm,Rn */
	r1 = R32(r0 + 0x30u); UPD(0x0C09AA44u, 2);  /* 0C09AA42 mov.l @(disp,Rm),Rn */
	r6 |= r3;  /* 0C09AA44 or Rm,Rn */
	r10 = 0xAFu; UPD(0x0C09AA48u, 2);  /* 0C09AA46 mov.w @(disp,pc),Rn */
	r8 += r1;  /* 0C09AA48 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C09AA4Cu, 2);  /* 0C09AA4A mov.b @Rm,Rn */
	IF(0x0C09AA4Cu); r11 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09AA4Eu, 1);  /* 0C09AA4C mov.b @(r0,Rm),Rn */
	r2 = R32(r0 + 0xCu); UPD(0x0C09AA50u, 1);  /* 0C09AA4E mov.l @(disp,Rm),Rn */
	r4 += r11;  /* 0C09AA50 add Rm,Rn */
	W32(r0 + 0x28u, r8); UPD(0x0C09AA54u, 2);  /* 0C09AA52 mov.l Rm,@(disp,Rn) */
	W32(r0, r6); UPD(0x0C09AA56u, 1);  /* 0C09AA54 mov.l Rm,@Rn */
	r0 = 0x17u;  /* 0C09AA56 mov #imm,Rn */
	T = r2 > r0;  /* 0C09AA58 cmp/hi Rm,Rn */
	{ u32 c_ = T; W8(r9, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09A9A4u, 5); goto L_0C09A9A4; } UPD(0x0C09AA5Eu, 1); goto L_0C09AA5E; }  /* 0C09AA5A bt/s */
L_0C09AA5E: BLKS(0x0C09AA5Eu);
	r0 = 0xC09AA80u;  /* 0C09AA5E mova @(disp,pc),r0 */
	IF(0x0C09AA60u); r13 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09AA62u, 2);  /* 0C09AA60 mov.b @(r0,Rm),Rn */
	r13 = r13 & 0xFF;  /* 0C09AA62 extu.b Rm,Rn */
	IF(0x0C09AA64u); { u32 tv_ = (r13 + 0x0C09AA68u); u32 t_ = PHYS(tv_); IF(0x0C09AA66u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AA64 braf Rn */
}

void blk_f_0C09AAA0(sh3_t *c)
{
	LOCALS;
	goto L_0C09AAA0;
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099AE4: BLKS(0x0C099AE4u);
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 3);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C099CE6: BLKS(0x0C099CE6u);
	W32(r8, r1); UPD(0x0C099CE8u, 1);  /* 0C099CE6 mov.l Rm,@Rn */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C099CE8 bra */
L_0C09A780: BLKS(0x0C09A780u);
	r1 = 0xC0A8B10u; UPD(0x0C09A782u, 1);  /* 0C09A780 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C099AE4u, 3); goto L_0C099AE4; }  /* 0C09A782 bra */
L_0C09A910: BLKS(0x0C09A910u);
	{ W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09A780u, 3); goto L_0C09A780; }  /* 0C09A910 bra */
L_0C09AAA0: BLKS(0x0C09AAA0u);
	r4 = 0xB4u; UPD(0x0C09AAA2u, 1);  /* 0C09AAA0 mov.w @(disp,pc),Rn */
	IF(0x0C09AAA2u); MACL = r12 * r4;  /* 0C09AAA2 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C09AAA6u, 3);  /* 0C09AAA4 mov.l @(disp,pc),Rn */
	IF(0x0C09AAA6u); r2 = MACL;  /* 0C09AAA6 sts macl,Rn */
	r2 += r0;  /* 0C09AAA8 add Rm,Rn */
	r0 = 0x88u; UPD(0x0C09AAACu, 3);  /* 0C09AAAA mov.w @(disp,pc),Rn */
	IF(0x0C09AAACu); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09AAAEu, 1);  /* 0C09AAAC mov.w @(r0,Rm),Rn */
	IF(0x0C09AAAEu); T = (s32)r9 >= 0;  /* 0C09AAAE cmp/pz Rn */
	{ u32 c_ = !T; r11 = 0x4Fu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09AAF0u, 4); goto L_0C09AAF0; } goto L_0C09AAB4; }  /* 0C09AAB0 bf/s */
L_0C09AAB4: BLKS(0x0C09AAB4u);
	r13 = 0xB4u; UPD(0x0C09AAB6u, 2);  /* 0C09AAB4 mov.w @(disp,pc),Rn */
	IF(0x0C09AAB6u); MACL = r12 * r13;  /* 0C09AAB6 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09AABAu, 3);  /* 0C09AAB8 mov.l @(disp,pc),Rn */
	IF(0x0C09AABAu); r8 = MACL;  /* 0C09AABA sts macl,Rn */
	r2 = 0x98u; UPD(0x0C09AABEu, 2);  /* 0C09AABC mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C09AABE add Rm,Rn */
	r2 += r8;  /* 0C09AAC0 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C09AAC4u, 3);  /* 0C09AAC2 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09AAC4 add #imm,Rn */
	W8(r2, r0); UPD(0x0C09AAC8u, 2);  /* 0C09AAC6 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09AAC8 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09AACA tst Rm,Rn */
	if (!T) { UPD(0x0C09AB42u, 5); goto L_0C09AB42; }  /* 0C09AACC bf */
L_0C09AACE: BLKS(0x0C09AACEu);
	r4 = r12;  /* 0C09AACE mov Rm,Rn */
	r0 = 0x88u; UPD(0x0C09AAD2u, 2);  /* 0C09AAD0 mov.w @(disp,pc),Rn */
	r10 = R32(r8 + 0xCu); UPD(0x0C09AAD4u, 1);  /* 0C09AAD2 mov.l @(disp,Rm),Rn */
	IF(0x0C09AAD4u); r1 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09AAD6u, 1);  /* 0C09AAD4 mov.w @(r0,Rm),Rn */
	r9 = 0xC0A8AE0u; UPD(0x0C09AAD8u, 1);  /* 0C09AAD6 mov.l @(disp,pc),Rn */
	r10 += r1;  /* 0C09AAD8 add Rm,Rn */
	IF(0x0C09AADAu); { u32 t_ = r9; PR = 0x0C09AADEu; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09AADEu); }  /* 0C09AADA jsr @Rn */
L_0C09AADE: BLKS(0x0C09AADEu);
	r7 = R32(r8 + 0xCu); UPD(0x0C09AAE0u, 1);  /* 0C09AADE mov.l @(disp,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C09AAE0 tst Rm,Rn */
	if (!T) { UPD(0x0C09AB42u, 4); goto L_0C09AB42; }  /* 0C09AAE2 bf */
L_0C09AAE4: BLKS(0x0C09AAE4u);
	r1 = R32(r8); UPD(0x0C09AAE6u, 1);  /* 0C09AAE4 mov.l @Rm,Rn */
	r2 = 0x4000u; UPD(0x0C09AAE8u, 1);  /* 0C09AAE6 mov.w @(disp,pc),Rn */
	{ r1 |= r2; /* slot or Rm,Rn */ UPD(0x0C099CE6u, 3); goto L_0C099CE6; }  /* 0C09AAE8 bra */
L_0C09AAF0: BLKS(0x0C09AAF0u);
	W32(r2 + 0x8u, r11); UPD(0x0C09AAF2u, 1);  /* 0C09AAF0 mov.l Rm,@(disp,Rn) */
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C09A910u, 3); goto L_0C09A910; }  /* 0C09AAF2 bra */
L_0C09AB42: BLKS(0x0C09AB42u);
	r13 = 0xFFFFEBCCu; UPD(0x0C09AB44u, 1);  /* 0C09AB42 mov.w @(disp,pc),Rn */
	IF(0x0C09AB44u); { u32 tv_ = (r13 + 0x0C09AB48u); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AB44 braf Rn */
}

void blk_f_0C09AAB4(sh3_t *c)
{
	LOCALS;
	goto L_0C09AAB4;
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099CE6: BLKS(0x0C099CE6u);
	W32(r8, r1); UPD(0x0C099CE8u, 1);  /* 0C099CE6 mov.l Rm,@Rn */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C099CE8 bra */
L_0C09AAB4: BLKS(0x0C09AAB4u);
	r13 = 0xB4u; UPD(0x0C09AAB6u, 1);  /* 0C09AAB4 mov.w @(disp,pc),Rn */
	IF(0x0C09AAB6u); MACL = r12 * r13;  /* 0C09AAB6 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09AABAu, 3);  /* 0C09AAB8 mov.l @(disp,pc),Rn */
	IF(0x0C09AABAu); r8 = MACL;  /* 0C09AABA sts macl,Rn */
	r2 = 0x98u; UPD(0x0C09AABEu, 2);  /* 0C09AABC mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C09AABE add Rm,Rn */
	r2 += r8;  /* 0C09AAC0 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C09AAC4u, 3);  /* 0C09AAC2 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09AAC4 add #imm,Rn */
	W8(r2, r0); UPD(0x0C09AAC8u, 2);  /* 0C09AAC6 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09AAC8 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09AACA tst Rm,Rn */
	if (!T) { UPD(0x0C09AB42u, 5); goto L_0C09AB42; }  /* 0C09AACC bf */
L_0C09AACE: BLKS(0x0C09AACEu);
	r4 = r12;  /* 0C09AACE mov Rm,Rn */
	r0 = 0x88u; UPD(0x0C09AAD2u, 2);  /* 0C09AAD0 mov.w @(disp,pc),Rn */
	r10 = R32(r8 + 0xCu); UPD(0x0C09AAD4u, 1);  /* 0C09AAD2 mov.l @(disp,Rm),Rn */
	IF(0x0C09AAD4u); r1 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09AAD6u, 1);  /* 0C09AAD4 mov.w @(r0,Rm),Rn */
	r9 = 0xC0A8AE0u; UPD(0x0C09AAD8u, 1);  /* 0C09AAD6 mov.l @(disp,pc),Rn */
	r10 += r1;  /* 0C09AAD8 add Rm,Rn */
	IF(0x0C09AADAu); { u32 t_ = r9; PR = 0x0C09AADEu; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09AADEu); }  /* 0C09AADA jsr @Rn */
L_0C09AADE: BLKS(0x0C09AADEu);
	r7 = R32(r8 + 0xCu); UPD(0x0C09AAE0u, 1);  /* 0C09AADE mov.l @(disp,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C09AAE0 tst Rm,Rn */
	if (!T) { UPD(0x0C09AB42u, 4); goto L_0C09AB42; }  /* 0C09AAE2 bf */
L_0C09AAE4: BLKS(0x0C09AAE4u);
	r1 = R32(r8); UPD(0x0C09AAE6u, 1);  /* 0C09AAE4 mov.l @Rm,Rn */
	r2 = 0x4000u; UPD(0x0C09AAE8u, 1);  /* 0C09AAE6 mov.w @(disp,pc),Rn */
	{ r1 |= r2; /* slot or Rm,Rn */ UPD(0x0C099CE6u, 3); goto L_0C099CE6; }  /* 0C09AAE8 bra */
L_0C09AB42: BLKS(0x0C09AB42u);
	r13 = 0xFFFFEBCCu; UPD(0x0C09AB44u, 1);  /* 0C09AB42 mov.w @(disp,pc),Rn */
	IF(0x0C09AB44u); { u32 tv_ = (r13 + 0x0C09AB48u); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AB44 braf Rn */
}

void blk_f_0C09AB00(sh3_t *c)
{
	LOCALS;
	goto L_0C09AB00;
L_0C099AE4: BLKS(0x0C099AE4u);
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 3);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C099BF2: BLKS(0x0C099BF2u);
	r1 = 0xC0A8AE0u; UPD(0x0C099BF4u, 1);  /* 0C099BF2 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C099AE4u, 3); goto L_0C099AE4; }  /* 0C099BF4 bra */
L_0C09AB00: BLKS(0x0C09AB00u);
	r8 = 0xB4u; UPD(0x0C09AB02u, 1);  /* 0C09AB00 mov.w @(disp,pc),Rn */
	IF(0x0C09AB02u); MACL = r12 * r8;  /* 0C09AB02 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09AB06u, 3);  /* 0C09AB04 mov.l @(disp,pc),Rn */
	IF(0x0C09AB06u); r8 = MACL;  /* 0C09AB06 sts macl,Rn */
	r9 = 0x88u; UPD(0x0C09AB0Au, 2);  /* 0C09AB08 mov.w @(disp,pc),Rn */
	r8 += r2;  /* 0C09AB0A add Rm,Rn */
	r9 += r8;  /* 0C09AB0C add Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r9); UPD(0x0C09AB10u, 3);  /* 0C09AB0E mov.w @Rm,Rn */
	IF(0x0C09AB10u); T = (s32)r10 >= 0;  /* 0C09AB10 cmp/pz Rn */
	if (!T) { UPD(0x0C09AB50u, 4); goto L_0C09AB50; }  /* 0C09AB12 bf */
L_0C09AB14: BLKS(0x0C09AB14u);
	r0 = R32(r8 + 0x8u); UPD(0x0C09AB16u, 1);  /* 0C09AB14 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C09AB16 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C09AB1Au, 2);  /* 0C09AB18 mov.l Rm,@(disp,Rn) */
	r10 = 0xC1C7270u; UPD(0x0C09AB1Cu, 1);  /* 0C09AB1A mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C09AB1C add Rm,Rn */
	r11 = 0xFFFFFF60u; UPD(0x0C09AB20u, 2);  /* 0C09AB1E mov.w @(disp,pc),Rn */
	r0 += r10;  /* 0C09AB20 add Rm,Rn */
	IF(0x0C09AB22u); r4 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C09AB24u, 2);  /* 0C09AB22 mov.w @(r0,Rm),Rn */
	r5 = 0xC0A8B10u; UPD(0x0C09AB26u, 1);  /* 0C09AB24 mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C09AB28u, 1);  /* 0C09AB26 mov.l Rm,@(disp,Rn) */
	r13 = 0xC0C2360u; UPD(0x0C09AB2Au, 1);  /* 0C09AB28 mov.l @(disp,pc),Rn */
	IF(0x0C09AB2Au); { u32 t_ = r5; PR = 0x0C09AB2Eu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C09AB2Eu); }  /* 0C09AB2A jsr @Rn */
L_0C09AB2E: BLKS(0x0C09AB2Eu);
	r3 = 0x86u; UPD(0x0C09AB30u, 1);  /* 0C09AB2E mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09AB30 mov Rm,Rn */
	r7 = 0x100u; UPD(0x0C09AB34u, 2);  /* 0C09AB32 mov.w @(disp,pc),Rn */
	IF(0x0C09AB34u); { u32 t_ = r13; PR = 0x0C09AB38u; IF(0x0C09AB36u); W16(r0 + r3, r7); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 2); CALLD(t_, 0x0C09AB38u); }  /* 0C09AB34 jsr @Rn */
L_0C09AB38: BLKS(0x0C09AB38u);
	r0 &= 0x1u;  /* 0C09AB38 and #imm,r0 */
	r6 = 0xC1C726Cu; UPD(0x0C09AB3Cu, 2);  /* 0C09AB3A mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C09AB3C add Rm,Rn */
	IF(0x0C09AB3Eu); r12 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C09AB40u, 2);  /* 0C09AB3E mov.w @(r0,Rm),Rn */
	W16(r9, r12); UPD(0x0C09AB42u, 1);  /* 0C09AB40 mov.w Rm,@Rn */
	r13 = 0xFFFFEBCCu; UPD(0x0C09AB44u, 1);  /* 0C09AB42 mov.w @(disp,pc),Rn */
	IF(0x0C09AB44u); { u32 tv_ = (r13 + 0x0C09AB48u); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AB44 braf Rn */
L_0C09AB50: BLKS(0x0C09AB50u);
	r6 = R32(r8 + 0xCu); UPD(0x0C09AB52u, 1);  /* 0C09AB50 mov.l @(disp,Rm),Rn */
	r6 += 0xFFFFFFFFu;  /* 0C09AB52 add #imm,Rn */
	{ W32(r8 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C099BF2u, 4); goto L_0C099BF2; }  /* 0C09AB54 bra */
}

void blk_f_0C09AB80(sh3_t *c)
{
	LOCALS;
	goto L_0C09AB80;
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099AE4: BLKS(0x0C099AE4u);
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 3);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C099BF2: BLKS(0x0C099BF2u);
	r1 = 0xC0A8AE0u; UPD(0x0C099BF4u, 1);  /* 0C099BF2 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C099AE4u, 3); goto L_0C099AE4; }  /* 0C099BF4 bra */
L_0C09A066: BLKS(0x0C09A066u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C09A066 bra */
L_0C09A734: BLKS(0x0C09A734u);
	r3 += r8;  /* 0C09A734 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C09A738u, 2);  /* 0C09A736 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09A738 add #imm,Rn */
	W8(r3, r0); UPD(0x0C09A73Cu, 2);  /* 0C09A73A mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09A73C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09A73E tst Rm,Rn */
	if (T) { UPD(0x0C09A74Au, 5); goto L_0C09A74A; }  /* 0C09A740 bt */
L_0C09A742: BLKS(0x0C09A742u);
	r13 = 0xFFFFEFCCu; UPD(0x0C09A744u, 1);  /* 0C09A742 mov.w @(disp,pc),Rn */
	IF(0x0C09A744u); { u32 tv_ = (r13 + 0x0C09A748u); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09A744 braf Rn */
L_0C09A74A: BLKS(0x0C09A74Au);
	r0 = R32(r8 + 0xCu); UPD(0x0C09A74Cu, 1);  /* 0C09A74A mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C09A74C cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09A770u, 4); goto L_0C09A770; } goto L_0C09A752; }  /* 0C09A74E bt/s */
L_0C09A752: BLKS(0x0C09A752u);
	T = (s32)r0 > (s32)r2;  /* 0C09A752 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09A760u, 5); goto L_0C09A760; }  /* 0C09A754 bf */
L_0C09A756: BLKS(0x0C09A756u);
	r0 += 0xFFFFFFFFu;  /* 0C09A756 add #imm,Rn */
	UPD(0x0C09A758u, 1);
L_0C09A758: BLKS(0x0C09A758u);
	{ W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C099BF2u, 3); goto L_0C099BF2; }  /* 0C09A758 bra */
L_0C09A760: BLKS(0x0C09A760u);
	{ r0 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09A758u, 3); goto L_0C09A758; }  /* 0C09A760 bra */
L_0C09A770: BLKS(0x0C09A770u);
	r4 = R32(r8 + 0x8u); UPD(0x0C09A772u, 1);  /* 0C09A770 mov.l @(disp,Rm),Rn */
	r6 = 0xFFFFFFFFu;  /* 0C09A772 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09A776u, 2);  /* 0C09A774 mov.w @(disp,pc),Rn */
	r4 += 0xFFFFFFFFu;  /* 0C09A776 add #imm,Rn */
	IF(0x0C09A778u); W16(r0 + r8, r6); UPD(0x0C09A77Au, 2);  /* 0C09A778 mov.w Rm,@(r0,Rn) */
	r1 = 0x17u;  /* 0C09A77A mov #imm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C09A77Eu, 2);  /* 0C09A77C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r1); UPD(0x0C09A780u, 1);  /* 0C09A77E mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A8B10u; UPD(0x0C09A782u, 1);  /* 0C09A780 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C099AE4u, 3); goto L_0C099AE4; }  /* 0C09A782 bra */
L_0C09A86E: BLKS(0x0C09A86Eu);
	r0 = 0xC0BA480u; UPD(0x0C09A870u, 1);  /* 0C09A86E mov.l @(disp,pc),Rn */
	r5 = r13;  /* 0C09A870 mov Rm,Rn */
	r7 = r10;  /* 0C09A872 mov Rm,Rn */
	IF(0x0C09A874u); { u32 t_ = r0; PR = 0x0C09A878u; IF(0x0C09A876u); ; /* slot nop */ UPD(t_, 4); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C09A878u); }  /* 0C09A874 jsr @Rn */
L_0C09A878: BLKS(0x0C09A878u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C09A066u, 3); goto L_0C09A066; }  /* 0C09A878 bra */
L_0C09AB80: BLKS(0x0C09AB80u);
	r13 = 0xC0A8BF0u; UPD(0x0C09AB82u, 1);  /* 0C09AB80 mov.l @(disp,pc),Rn */
	IF(0x0C09AB82u); { u32 t_ = r13; PR = 0x0C09AB86u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C09AB86u); }  /* 0C09AB82 jsr @Rn */
L_0C09AB86: BLKS(0x0C09AB86u);
	IF(0x0C09AB86u); T = (s32)r0 >= 0;  /* 0C09AB86 cmp/pz Rn */
	if (!T) { UPD(0x0C09AC5Cu, 4); goto L_0C09AC5C; }  /* 0C09AB88 bf */
L_0C09AB8A: BLKS(0x0C09AB8Au);
	r9 = 0xB4u; UPD(0x0C09AB8Cu, 1);  /* 0C09AB8A mov.w @(disp,pc),Rn */
	IF(0x0C09AB8Cu); MACL = r12 * r9;  /* 0C09AB8C mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C09AB90u, 3);  /* 0C09AB8E mov.l @(disp,pc),Rn */
	IF(0x0C09AB90u); r8 = MACL;  /* 0C09AB90 sts macl,Rn */
	IF(0x0C09AB92u); MACL = r0 * r9;  /* 0C09AB92 mul.l Rm,Rn */
	r8 += r6;  /* 0C09AB94 add Rm,Rn */
	r2 = 0xA8u; UPD(0x0C09AB98u, 5);  /* 0C09AB96 mov.w @(disp,pc),Rn */
	IF(0x0C09AB98u); r9 = MACL;  /* 0C09AB98 sts macl,Rn */
	r9 += r6;  /* 0C09AB9A add Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C09AB9Eu, 3);  /* 0C09AB9C mov.l @(disp,Rm),Rn */
	r7 = r8;  /* 0C09AB9E mov Rm,Rn */
	r0 = R32(r8 + 0x2Cu); UPD(0x0C09ABA2u, 2);  /* 0C09ABA0 mov.l @(disp,Rm),Rn */
	r7 += r2;  /* 0C09ABA2 add Rm,Rn */
	r4 += r0;  /* 0C09ABA4 add Rm,Rn */
	r2 += r9;  /* 0C09ABA6 add Rm,Rn */
	r10 = 0xAFu; UPD(0x0C09ABAAu, 4);  /* 0C09ABA8 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C09ABAA add #imm,Rn */
	r0 = r8;  /* 0C09ABAC mov Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C09ABB0u, 3);  /* 0C09ABAE mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C09ABB0 add #imm,Rn */
	r13 = R32(r9 + 0x28u); UPD(0x0C09ABB4u, 2);  /* 0C09ABB2 mov.l @(disp,Rm),Rn */
	r3 = R32(r8 + 0x30u); UPD(0x0C09ABB6u, 1);  /* 0C09ABB4 mov.l @(disp,Rm),Rn */
	IF(0x0C09ABB6u); r5 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09ABB8u, 1);  /* 0C09ABB6 mov.b @(r0,Rm),Rn */
	r13 += r3;  /* 0C09ABB8 add Rm,Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C09ABBCu, 2);  /* 0C09ABBA mov.l Rm,@(disp,Rn) */
	r3 = r9;  /* 0C09ABBC mov Rm,Rn */
	r4 = R32(r8); UPD(0x0C09ABC0u, 2);  /* 0C09ABBE mov.l @Rm,Rn */
	r11 += r5;  /* 0C09ABC0 add Rm,Rn */
	r0 = R32(r9); UPD(0x0C09ABC4u, 2);  /* 0C09ABC2 mov.l @Rm,Rn */
	r6 = 0xFCFFFEFFu; UPD(0x0C09ABC6u, 1);  /* 0C09ABC4 mov.l @(disp,pc),Rn */
	r1 = 0x3000100u; UPD(0x0C09ABC8u, 1);  /* 0C09ABC6 mov.l @(disp,pc),Rn */
	r4 &= r6;  /* 0C09ABC8 and Rm,Rn */
	r2 = 0x98u; UPD(0x0C09ABCCu, 2);  /* 0C09ABCA mov.w @(disp,pc),Rn */
	r0 &= r1;  /* 0C09ABCC and Rm,Rn */
	r3 += r2;  /* 0C09ABCE add Rm,Rn */
	r4 |= r0;  /* 0C09ABD0 or Rm,Rn */
	r3 += 0x2u;  /* 0C09ABD2 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C09ABD6u, 5);  /* 0C09ABD4 mov.b @Rm,Rn */
	W32(r8 + 0x28u, r13); UPD(0x0C09ABD8u, 1);  /* 0C09ABD6 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x3u;  /* 0C09ABD8 cmp/eq #imm,r0 */
	W8(r7, r11); UPD(0x0C09ABDCu, 2);  /* 0C09ABDA mov.b Rm,@Rn */
	{ u32 c_ = T; W32(r8, r4); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09ABE4u, 3); goto L_0C09ABE4; } UPD(0x0C09ABE0u, 1); goto L_0C09ABE0; }  /* 0C09ABDC bt/s */
L_0C09ABE0: BLKS(0x0C09ABE0u);
	{ r3 = r2; /* slot mov Rm,Rn */ UPD(0x0C09A734u, 3); goto L_0C09A734; }  /* 0C09ABE0 bra */
L_0C09ABE4: BLKS(0x0C09ABE4u);
	r13 = 0xC069BF0u; UPD(0x0C09ABE6u, 1);  /* 0C09ABE4 mov.l @(disp,pc),Rn */
	r10 = 0xC068F00u; UPD(0x0C09ABE8u, 1);  /* 0C09ABE6 mov.l @(disp,pc),Rn */
	IF(0x0C09ABE8u); { u32 t_ = r13; PR = 0x0C09ABECu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C09ABECu); }  /* 0C09ABE8 jsr @Rn */
L_0C09ABEC: BLKS(0x0C09ABECu);
	r4 = r12;  /* 0C09ABEC mov Rm,Rn */
	IF(0x0C09ABEEu); { u32 t_ = r10; PR = 0x0C09ABF2u; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C09ABF2u); }  /* 0C09ABEE jsr @Rn */
L_0C09ABF2: BLKS(0x0C09ABF2u);
	r10 = 0x86u; UPD(0x0C09ABF4u, 1);  /* 0C09ABF2 mov.w @(disp,pc),Rn */
	r4 = r12;  /* 0C09ABF4 mov Rm,Rn */
	r10 += r8;  /* 0C09ABF6 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C09ABFAu, 3);  /* 0C09ABF8 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C09ABFA add #imm,Rn */
	r2 = 0xC0A8AE0u; UPD(0x0C09ABFEu, 2);  /* 0C09ABFC mov.l @(disp,pc),Rn */
	IF(0x0C09ABFEu); r0 >>= 2;  /* 0C09ABFE shlr2 Rn */
	IF(0x0C09AC00u); r0 >>= 2;  /* 0C09AC00 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C09AC02 and #imm,r0 */
	IF(0x0C09AC04u); { u32 t_ = r2; PR = 0x0C09AC08u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09AC08u); }  /* 0C09AC04 jsr @Rn */
L_0C09AC08: BLKS(0x0C09AC08u);
	r5 = 0xA6u; UPD(0x0C09AC0Au, 1);  /* 0C09AC08 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C09AC0A mov Rm,Rn */
	r4 = r12;  /* 0C09AC0C mov Rm,Rn */
	IF(0x0C09AC0Eu); r7 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C09AC10u, 3);  /* 0C09AC0E mov.b @(r0,Rm),Rn */
	r6 = 0x5u;  /* 0C09AC10 mov #imm,Rn */
	r11 = 0xC1C7288u; UPD(0x0C09AC14u, 2);  /* 0C09AC12 mov.l @(disp,pc),Rn */
	r12 = 0xC0BC1B0u; UPD(0x0C09AC16u, 1);  /* 0C09AC14 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C09AC16 mov Rm,Rn */
	IF(0x0C09AC18u); { u32 t_ = r12; PR = 0x0C09AC1Cu; IF(0x0C09AC1Au); r5 = (u32)(s32)(s8)R8(r0 + r7); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09AC1Cu); }  /* 0C09AC18 jsr @Rn */
L_0C09AC1C: BLKS(0x0C09AC1Cu);
	T = (r0 & r0) == 0;  /* 0C09AC1C tst Rm,Rn */
	if (T) { UPD(0x0C09ACB2u, 4); goto L_0C09ACB2; }  /* 0C09AC1E bt */
L_0C09AC20: BLKS(0x0C09AC20u);
	r10 = (u32)(s32)(s16)R16(r10); UPD(0x0C09AC22u, 1);  /* 0C09AC20 mov.w @Rm,Rn */
	r12 = 0xC069B20u; UPD(0x0C09AC24u, 1);  /* 0C09AC22 mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C09AC26u, 1);  /* 0C09AC24 mov.l @(disp,pc),Rn */
	r9 = 0xC069AF0u; UPD(0x0C09AC28u, 1);  /* 0C09AC26 mov.l @(disp,pc),Rn */
	IF(0x0C09AC28u); { u32 t_ = r12; PR = 0x0C09AC2Cu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09AC2Cu); }  /* 0C09AC28 jsr @Rn */
L_0C09AC2C: BLKS(0x0C09AC2Cu);
	r13 = R32(r8 + 0x24u); UPD(0x0C09AC2Eu, 1);  /* 0C09AC2C mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C09AC2E mov Rm,Rn */
	r5 = 0xCCCCCu; UPD(0x0C09AC32u, 2);  /* 0C09AC30 mov.l @(disp,pc),Rn */
	IF(0x0C09AC32u); { u32 t_ = r9; PR = 0x0C09AC36u; r13 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C09AC36u); }  /* 0C09AC32 jsr @Rn */
L_0C09AC36: BLKS(0x0C09AC36u);
	r6 = R32(r8 + 0x28u); UPD(0x0C09AC38u, 1);  /* 0C09AC36 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09AC38 add #imm,Rn */
	r8 = 0x30000u; UPD(0x0C09AC3Cu, 2);  /* 0C09AC3A mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09AC3C add Rm,Rn */
	W32(r15, r8); UPD(0x0C09AC40u, 2);  /* 0C09AC3E mov.l Rm,@Rn */
	{ r4 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C09A86Eu, 3); goto L_0C09A86E; }  /* 0C09AC40 bra */
L_0C09AC5C: BLKS(0x0C09AC5Cu);
	r1 = 0xFFFFEE7Eu; UPD(0x0C09AC5Eu, 1);  /* 0C09AC5C mov.w @(disp,pc),Rn */
	IF(0x0C09AC5Eu); { u32 tv_ = (r1 + 0x0C09AC62u); u32 t_ = PHYS(tv_); IF(0x0C09AC60u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AC5E braf Rn */
L_0C09ACB2: BLKS(0x0C09ACB2u);
	r13 = 0xFFFFEA5Cu; UPD(0x0C09ACB4u, 1);  /* 0C09ACB2 mov.w @(disp,pc),Rn */
	IF(0x0C09ACB4u); { u32 tv_ = (r13 + 0x0C09ACB8u); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09ACB4 braf Rn */
}

void blk_f_0C09AC50(sh3_t *c)
{
	LOCALS;
L_0C09AC50: BLKS(0x0C09AC50u);
	r11 = 0xC0A8BF0u; UPD(0x0C09AC52u, 1);  /* 0C09AC50 mov.l @(disp,pc),Rn */
	IF(0x0C09AC52u); { u32 t_ = r11; PR = 0x0C09AC56u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C09AC56u); }  /* 0C09AC52 jsr @Rn */
L_0C09AC56: BLKS(0x0C09AC56u);
	IF(0x0C09AC56u); T = (s32)r0 >= 0;  /* 0C09AC56 cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09AC64u, 4); goto L_0C09AC64; } goto L_0C09AC5C; }  /* 0C09AC58 bt/s */
L_0C09AC5C: BLKS(0x0C09AC5Cu);
	r1 = 0xFFFFEE7Eu; UPD(0x0C09AC5Eu, 2);  /* 0C09AC5C mov.w @(disp,pc),Rn */
	IF(0x0C09AC5Eu); { u32 tv_ = (r1 + 0x0C09AC62u); u32 t_ = PHYS(tv_); IF(0x0C09AC60u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AC5E braf Rn */
L_0C09AC64: BLKS(0x0C09AC64u);
	r8 = 0xB4u; UPD(0x0C09AC66u, 1);  /* 0C09AC64 mov.w @(disp,pc),Rn */
	IF(0x0C09AC66u); MACL = r12 * r8;  /* 0C09AC66 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09AC6Au, 3);  /* 0C09AC68 mov.l @(disp,pc),Rn */
	IF(0x0C09AC6Au); r0 = MACL;  /* 0C09AC6A sts macl,Rn */
	IF(0x0C09AC6Cu); MACL = r10 * r8;  /* 0C09AC6C mul.l Rm,Rn */
	r0 += r7;  /* 0C09AC6E add Rm,Rn */
	r1 = R32(r0 + 0x2Cu); UPD(0x0C09AC72u, 5);  /* 0C09AC70 mov.l @(disp,Rm),Rn */
	IF(0x0C09AC72u); r8 = MACL;  /* 0C09AC72 sts macl,Rn */
	r8 += r7;  /* 0C09AC74 add Rm,Rn */
	r13 = R32(r8 + 0x24u); UPD(0x0C09AC78u, 3);  /* 0C09AC76 mov.l @(disp,Rm),Rn */
	r9 = r0;  /* 0C09AC78 mov Rm,Rn */
	r13 += r1;  /* 0C09AC7A add Rm,Rn */
	r5 = R32(r0 + 0x30u); UPD(0x0C09AC7Eu, 3);  /* 0C09AC7C mov.l @(disp,Rm),Rn */
	r11 = R32(r8 + 0x28u); UPD(0x0C09AC80u, 1);  /* 0C09AC7E mov.l @(disp,Rm),Rn */
	r2 = 0xA8u; UPD(0x0C09AC82u, 1);  /* 0C09AC80 mov.w @(disp,pc),Rn */
	r11 += r5;  /* 0C09AC82 add Rm,Rn */
	W32(r0 + 0x24u, r13); UPD(0x0C09AC86u, 2);  /* 0C09AC84 mov.l Rm,@(disp,Rn) */
	r9 += r2;  /* 0C09AC86 add Rm,Rn */
	r5 = R32(r0); UPD(0x0C09AC8Au, 2);  /* 0C09AC88 mov.l @Rm,Rn */
	r2 += r8;  /* 0C09AC8A add Rm,Rn */
	r13 = R32(r8); UPD(0x0C09AC8Eu, 2);  /* 0C09AC8C mov.l @Rm,Rn */
	r2 += 0x1u;  /* 0C09AC8E add #imm,Rn */
	r7 = 0xFCFFFEFFu; UPD(0x0C09AC92u, 2);  /* 0C09AC90 mov.l @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C09AC92 add #imm,Rn */
	r1 = 0x3000100u; UPD(0x0C09AC96u, 2);  /* 0C09AC94 mov.l @(disp,pc),Rn */
	r5 &= r7;  /* 0C09AC96 and Rm,Rn */
	r6 = 0xAFu; UPD(0x0C09AC9Au, 2);  /* 0C09AC98 mov.w @(disp,pc),Rn */
	r13 &= r1;  /* 0C09AC9A and Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C09AC9Eu, 2);  /* 0C09AC9C mov.b @Rm,Rn */
	r5 |= r13;  /* 0C09AC9E or Rm,Rn */
	IF(0x0C09ACA0u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09ACA2u, 2);  /* 0C09ACA0 mov.b @(r0,Rm),Rn */
	r2 = R32(r0 + 0xCu); UPD(0x0C09ACA4u, 1);  /* 0C09ACA2 mov.l @(disp,Rm),Rn */
	r3 += r4;  /* 0C09ACA4 add Rm,Rn */
	W32(r0 + 0x28u, r11); UPD(0x0C09ACA8u, 2);  /* 0C09ACA6 mov.l Rm,@(disp,Rn) */
	W32(r0, r5); UPD(0x0C09ACAAu, 1);  /* 0C09ACA8 mov.l Rm,@Rn */
	r0 = 0x5u;  /* 0C09ACAA mov #imm,Rn */
	T = r2 > r0;  /* 0C09ACAC cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r9, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09ACBAu, 5); goto L_0C09ACBA; } UPD(0x0C09ACB2u, 1); goto L_0C09ACB2; }  /* 0C09ACAE bf/s */
L_0C09ACB2: BLKS(0x0C09ACB2u);
	r13 = 0xFFFFEA5Cu; UPD(0x0C09ACB4u, 1);  /* 0C09ACB2 mov.w @(disp,pc),Rn */
	IF(0x0C09ACB4u); { u32 tv_ = (r13 + 0x0C09ACB8u); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09ACB4 braf Rn */
L_0C09ACBA: BLKS(0x0C09ACBAu);
	r0 = 0xC09AD08u;  /* 0C09ACBA mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09ACBC add Rm,Rn */
	IF(0x0C09ACBEu); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09ACC0u, 3);  /* 0C09ACBE mov.w @(r0,Rm),Rn */
	IF(0x0C09ACC0u); { u32 tv_ = (r9 + 0x0C09ACC4u); u32 t_ = PHYS(tv_); IF(0x0C09ACC2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09ACC0 braf Rn */
}

void blk_f_0C09AD20(sh3_t *c)
{
	LOCALS;
	goto L_0C09AD20;
L_0C099AE6: BLKS(0x0C099AE6u);
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 2);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C099D00: BLKS(0x0C099D00u);
	r1 = 0xC0C2110u; UPD(0x0C099D02u, 1);  /* 0C099D00 mov.l @(disp,pc),Rn */
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099AE6u, 3); goto L_0C099AE6; }  /* 0C099D02 bra */
L_0C09A5CC: BLKS(0x0C09A5CCu);
	{ r4 = 0x74u; /* slot mov #imm,Rn */ UPD(0x0C099D00u, 3); goto L_0C099D00; }  /* 0C09A5CC bra */
L_0C09AD20: BLKS(0x0C09AD20u);
	r2 = 0xB4u; UPD(0x0C09AD22u, 1);  /* 0C09AD20 mov.w @(disp,pc),Rn */
	IF(0x0C09AD22u); MACL = r10 * r2;  /* 0C09AD22 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09AD26u, 3);  /* 0C09AD24 mov.l @(disp,pc),Rn */
	IF(0x0C09AD26u); r0 = MACL;  /* 0C09AD26 sts macl,Rn */
	r10 = 0x9Au; UPD(0x0C09AD2Au, 2);  /* 0C09AD28 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C09AD2A add Rm,Rn */
	IF(0x0C09AD2Cu); r0 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09AD2Eu, 2);  /* 0C09AD2C mov.b @(r0,Rm),Rn */
	T = r0 == 0x2u;  /* 0C09AD2E cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C09AD8Eu, 4); goto L_0C09AD8E; }  /* 0C09AD30 bf */
L_0C09AD32: BLKS(0x0C09AD32u);
	IF(0x0C09AD32u); MACL = r12 * r2;  /* 0C09AD32 mul.l Rm,Rn */
	r0 = 0x88u; UPD(0x0C09AD36u, 3);  /* 0C09AD34 mov.w @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C09AD36 mov #imm,Rn */
	IF(0x0C09AD38u); r11 = MACL;  /* 0C09AD38 sts macl,Rn */
	r11 += r3;  /* 0C09AD3A add Rm,Rn */
	r4 = R32(r11 + 0xCu); UPD(0x0C09AD3Eu, 4);  /* 0C09AD3C mov.l @(disp,Rm),Rn */
	r3 = 0xC0A8AE0u; UPD(0x0C09AD40u, 1);  /* 0C09AD3E mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C09AD40 add #imm,Rn */
	W32(r11 + 0xCu, r4); UPD(0x0C09AD44u, 2);  /* 0C09AD42 mov.l Rm,@(disp,Rn) */
	IF(0x0C09AD44u); W16(r0 + r11, r6); UPD(0x0C09AD46u, 1);  /* 0C09AD44 mov.w Rm,@(r0,Rn) */
	IF(0x0C09AD46u); { u32 t_ = r3; PR = 0x0C09AD4Au; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09AD4Au); }  /* 0C09AD46 jsr @Rn */
L_0C09AD4A: BLKS(0x0C09AD4Au);
	r12 = R32(r11); UPD(0x0C09AD4Cu, 1);  /* 0C09AD4A mov.l @Rm,Rn */
	r0 = 0xFFFFBFFFu; UPD(0x0C09AD4Eu, 1);  /* 0C09AD4C mov.w @(disp,pc),Rn */
	r12 &= r0;  /* 0C09AD4E and Rm,Rn */
	{ W32(r11, r12); /* slot mov.l Rm,@Rn */ UPD(0x0C09A5CCu, 4); goto L_0C09A5CC; }  /* 0C09AD50 bra */
L_0C09AD8E: BLKS(0x0C09AD8Eu);
	r13 = 0xFFFFE980u; UPD(0x0C09AD90u, 1);  /* 0C09AD8E mov.w @(disp,pc),Rn */
	IF(0x0C09AD90u); { u32 tv_ = (r13 + 0x0C09AD94u); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD90 braf Rn */
}

void blk_f_0C09AD60(sh3_t *c)
{
	LOCALS;
	goto L_0C09AD60;
L_0C099AE4: BLKS(0x0C099AE4u);
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 3);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C099BF2: BLKS(0x0C099BF2u);
	r1 = 0xC0A8AE0u; UPD(0x0C099BF4u, 1);  /* 0C099BF2 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C099AE4u, 3); goto L_0C099AE4; }  /* 0C099BF4 bra */
L_0C09AB52: BLKS(0x0C09AB52u);
	r6 += 0xFFFFFFFFu;  /* 0C09AB52 add #imm,Rn */
	{ W32(r8 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C099BF2u, 4); goto L_0C099BF2; }  /* 0C09AB54 bra */
L_0C09AD60: BLKS(0x0C09AD60u);
	r8 = 0xB4u; UPD(0x0C09AD62u, 1);  /* 0C09AD60 mov.w @(disp,pc),Rn */
	IF(0x0C09AD62u); MACL = r12 * r8;  /* 0C09AD62 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C09AD66u, 3);  /* 0C09AD64 mov.l @(disp,pc),Rn */
	IF(0x0C09AD66u); r8 = MACL;  /* 0C09AD66 sts macl,Rn */
	r8 += r0;  /* 0C09AD68 add Rm,Rn */
	r0 = 0x88u; UPD(0x0C09AD6Cu, 3);  /* 0C09AD6A mov.w @(disp,pc),Rn */
	IF(0x0C09AD6Cu); r11 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09AD6Eu, 1);  /* 0C09AD6C mov.w @(r0,Rm),Rn */
	IF(0x0C09AD6Eu); T = (s32)r11 > 0;  /* 0C09AD6E cmp/pl Rn */
	{ u32 c_ = T; r3 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09AD78u, 4); goto L_0C09AD78; } goto L_0C09AD74; }  /* 0C09AD70 bt/s */
L_0C09AD74: BLKS(0x0C09AD74u);
	{ r6 = R32(r8 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C09AB52u, 4); goto L_0C09AB52; }  /* 0C09AD74 bra */
L_0C09AD78: BLKS(0x0C09AD78u);
	r4 = R32(r8 + 0x8u); UPD(0x0C09AD7Au, 1);  /* 0C09AD78 mov.l @(disp,Rm),Rn */
	r4 += 0x1u;  /* 0C09AD7A add #imm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C09AD7Eu, 2);  /* 0C09AD7C mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C09AD7E mov Rm,Rn */
	r12 = 0xC0A8B10u; UPD(0x0C09AD82u, 2);  /* 0C09AD80 mov.l @(disp,pc),Rn */
	IF(0x0C09AD82u); { u32 t_ = r12; PR = 0x0C09AD86u; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C09AD86u); }  /* 0C09AD82 jsr @Rn */
L_0C09AD86: BLKS(0x0C09AD86u);
	r2 = 0x86u; UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09AD88 mov Rm,Rn */
	r1 = 0x100u; UPD(0x0C09AD8Cu, 2);  /* 0C09AD8A mov.w @(disp,pc),Rn */
	IF(0x0C09AD8Cu); W16(r0 + r2, r1); UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.w Rm,@(r0,Rn) */
	r13 = 0xFFFFE980u; UPD(0x0C09AD90u, 1);  /* 0C09AD8E mov.w @(disp,pc),Rn */
	IF(0x0C09AD90u); { u32 tv_ = (r13 + 0x0C09AD94u); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD90 braf Rn */
}

void blk_f_0C09ADA0(sh3_t *c)
{
	LOCALS;
	goto L_0C09ADA0;
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C099AE4: BLKS(0x0C099AE4u);
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 3);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C099BF2: BLKS(0x0C099BF2u);
	r1 = 0xC0A8AE0u; UPD(0x0C099BF4u, 1);  /* 0C099BF2 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C099AE4u, 3); goto L_0C099AE4; }  /* 0C099BF4 bra */
L_0C09A066: BLKS(0x0C09A066u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C09A066 bra */
L_0C09A754: BLKS(0x0C09A754u);
	if (!T) { UPD(0x0C09A760u, 3); goto L_0C09A760; }  /* 0C09A754 bf */
L_0C09A756: BLKS(0x0C09A756u);
	r0 += 0xFFFFFFFFu;  /* 0C09A756 add #imm,Rn */
	UPD(0x0C09A758u, 1);
L_0C09A758: BLKS(0x0C09A758u);
	{ W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C099BF2u, 3); goto L_0C099BF2; }  /* 0C09A758 bra */
L_0C09A760: BLKS(0x0C09A760u);
	{ r0 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09A758u, 3); goto L_0C09A758; }  /* 0C09A760 bra */
L_0C09A77E: BLKS(0x0C09A77Eu);
	W32(r8 + 0xCu, r1); UPD(0x0C09A780u, 1);  /* 0C09A77E mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A8B10u; UPD(0x0C09A782u, 1);  /* 0C09A780 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C099AE4u, 3); goto L_0C099AE4; }  /* 0C09A782 bra */
L_0C09A84E: BLKS(0x0C09A84Eu);
	r12 = 0xC069B20u; UPD(0x0C09A850u, 1);  /* 0C09A84E mov.l @(disp,pc),Rn */
	r5 = 0x80000u; UPD(0x0C09A852u, 1);  /* 0C09A850 mov.l @(disp,pc),Rn */
	IF(0x0C09A852u); { u32 t_ = r12; PR = 0x0C09A856u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09A856u); }  /* 0C09A852 jsr @Rn */
L_0C09A856: BLKS(0x0C09A856u);
	r9 = 0xC069AF0u; UPD(0x0C09A858u, 1);  /* 0C09A856 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C09A858 mov Rm,Rn */
	r13 = R32(r8 + 0x24u); UPD(0x0C09A85Cu, 2);  /* 0C09A85A mov.l @(disp,Rm),Rn */
	r5 = 0x66666u; UPD(0x0C09A85Eu, 1);  /* 0C09A85C mov.l @(disp,pc),Rn */
	IF(0x0C09A85Eu); { u32 t_ = r9; PR = 0x0C09A862u; r13 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09A862u); }  /* 0C09A85E jsr @Rn */
L_0C09A862: BLKS(0x0C09A862u);
	r6 = R32(r8 + 0x28u); UPD(0x0C09A864u, 1);  /* 0C09A862 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09A864 add #imm,Rn */
	r8 = 0x20000u; UPD(0x0C09A868u, 2);  /* 0C09A866 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09A868 add Rm,Rn */
	W32(r15, r8); UPD(0x0C09A86Cu, 2);  /* 0C09A86A mov.l Rm,@Rn */
	r4 = 0x0u;  /* 0C09A86C mov #imm,Rn */
	r0 = 0xC0BA480u; UPD(0x0C09A870u, 2);  /* 0C09A86E mov.l @(disp,pc),Rn */
	r5 = r13;  /* 0C09A870 mov Rm,Rn */
	r7 = r10;  /* 0C09A872 mov Rm,Rn */
	IF(0x0C09A874u); { u32 t_ = r0; PR = 0x0C09A878u; IF(0x0C09A876u); ; /* slot nop */ UPD(t_, 4); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C09A878u); }  /* 0C09A874 jsr @Rn */
L_0C09A878: BLKS(0x0C09A878u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C09A066u, 3); goto L_0C09A066; }  /* 0C09A878 bra */
L_0C09AD8E: BLKS(0x0C09AD8Eu);
	r13 = 0xFFFFE980u; UPD(0x0C09AD90u, 1);  /* 0C09AD8E mov.w @(disp,pc),Rn */
	IF(0x0C09AD90u); { u32 tv_ = (r13 + 0x0C09AD94u); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD90 braf Rn */
L_0C09ADA0: BLKS(0x0C09ADA0u);
	r13 = 0xC0A8BF0u; UPD(0x0C09ADA2u, 1);  /* 0C09ADA0 mov.l @(disp,pc),Rn */
	IF(0x0C09ADA2u); { u32 t_ = r13; PR = 0x0C09ADA6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C09ADA6u); }  /* 0C09ADA2 jsr @Rn */
L_0C09ADA6: BLKS(0x0C09ADA6u);
	IF(0x0C09ADA6u); T = (s32)r0 >= 0;  /* 0C09ADA6 cmp/pz Rn */
	if (T) { UPD(0x0C09ADB2u, 4); goto L_0C09ADB2; }  /* 0C09ADA8 bt */
L_0C09ADAA: BLKS(0x0C09ADAAu);
	r1 = 0xFFFFED30u; UPD(0x0C09ADACu, 1);  /* 0C09ADAA mov.w @(disp,pc),Rn */
	IF(0x0C09ADACu); { u32 tv_ = (r1 + 0x0C09ADB0u); u32 t_ = PHYS(tv_); IF(0x0C09ADAEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09ADAC braf Rn */
L_0C09ADB2: BLKS(0x0C09ADB2u);
	r9 = 0xB4u; UPD(0x0C09ADB4u, 1);  /* 0C09ADB2 mov.w @(disp,pc),Rn */
	IF(0x0C09ADB4u); MACL = r12 * r9;  /* 0C09ADB4 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C09ADB8u, 3);  /* 0C09ADB6 mov.l @(disp,pc),Rn */
	IF(0x0C09ADB8u); r8 = MACL;  /* 0C09ADB8 sts macl,Rn */
	IF(0x0C09ADBAu); MACL = r0 * r9;  /* 0C09ADBA mul.l Rm,Rn */
	r8 += r11;  /* 0C09ADBC add Rm,Rn */
	r10 = R32(r8 + 0x2Cu); UPD(0x0C09ADC0u, 5);  /* 0C09ADBE mov.l @(disp,Rm),Rn */
	IF(0x0C09ADC0u); r9 = MACL;  /* 0C09ADC0 sts macl,Rn */
	r9 += r11;  /* 0C09ADC2 add Rm,Rn */
	r7 = R32(r9 + 0x24u); UPD(0x0C09ADC6u, 3);  /* 0C09ADC4 mov.l @(disp,Rm),Rn */
	r11 = r8;  /* 0C09ADC6 mov Rm,Rn */
	r7 += r10;  /* 0C09ADC8 add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C09ADCCu, 3);  /* 0C09ADCA mov.w @(disp,pc),Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C09ADCEu, 1);  /* 0C09ADCC mov.l Rm,@(disp,Rn) */
	r11 += r0;  /* 0C09ADCE add Rm,Rn */
	r7 = R32(r8); UPD(0x0C09ADD2u, 2);  /* 0C09ADD0 mov.l @Rm,Rn */
	r0 += r9;  /* 0C09ADD2 add Rm,Rn */
	r2 = 0xFCFFFEFFu; UPD(0x0C09ADD6u, 2);  /* 0C09ADD4 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C09ADD6 add #imm,Rn */
	r13 = R32(r9 + 0x28u); UPD(0x0C09ADDAu, 2);  /* 0C09ADD8 mov.l @(disp,Rm),Rn */
	r7 &= r2;  /* 0C09ADDA and Rm,Rn */
	r5 = R32(r8 + 0x30u); UPD(0x0C09ADDEu, 2);  /* 0C09ADDC mov.l @(disp,Rm),Rn */
	r11 += 0x1u;  /* 0C09ADDE add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C09ADE2u, 2);  /* 0C09ADE0 mov.b @Rm,Rn */
	r13 += r5;  /* 0C09ADE2 add Rm,Rn */
	r6 = 0xAFu; UPD(0x0C09ADE6u, 2);  /* 0C09ADE4 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09ADE6 mov Rm,Rn */
	r2 = 0x98u; UPD(0x0C09ADEAu, 2);  /* 0C09ADE8 mov.w @(disp,pc),Rn */
	r5 = r9;  /* 0C09ADEA mov Rm,Rn */
	r10 = R32(r9); UPD(0x0C09ADEEu, 2);  /* 0C09ADEC mov.l @Rm,Rn */
	r5 += r2;  /* 0C09ADEE add Rm,Rn */
	r1 = 0x3000100u; UPD(0x0C09ADF2u, 2);  /* 0C09ADF0 mov.l @(disp,pc),Rn */
	r5 += 0x2u;  /* 0C09ADF2 add #imm,Rn */
	IF(0x0C09ADF4u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09ADF6u, 2);  /* 0C09ADF4 mov.b @(r0,Rm),Rn */
	r10 &= r1;  /* 0C09ADF6 and Rm,Rn */
	r3 += r4;  /* 0C09ADF8 add Rm,Rn */
	r7 |= r10;  /* 0C09ADFA or Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C09ADFEu, 4);  /* 0C09ADFC mov.b @Rm,Rn */
	W32(r8 + 0x28u, r13); UPD(0x0C09AE00u, 1);  /* 0C09ADFE mov.l Rm,@(disp,Rn) */
	T = r0 == 0x2u;  /* 0C09AE00 cmp/eq #imm,r0 */
	W8(r11, r3); UPD(0x0C09AE04u, 2);  /* 0C09AE02 mov.b Rm,@Rn */
	{ u32 c_ = T; W32(r8, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09AE40u, 3); goto L_0C09AE40; } UPD(0x0C09AE08u, 1); goto L_0C09AE08; }  /* 0C09AE04 bt/s */
L_0C09AE08: BLKS(0x0C09AE08u);
	r7 = r2;  /* 0C09AE08 mov Rm,Rn */
	r7 += r8;  /* 0C09AE0A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C09AE0Eu, 3);  /* 0C09AE0C mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09AE0E add #imm,Rn */
	W8(r7, r0); UPD(0x0C09AE12u, 2);  /* 0C09AE10 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09AE12 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09AE14 tst Rm,Rn */
	if (T) { UPD(0x0C09AD8Eu, 5); goto L_0C09AD8E; }  /* 0C09AE16 bt */
L_0C09AE18: BLKS(0x0C09AE18u);
	r0 = R32(r8 + 0xCu); UPD(0x0C09AE1Au, 1);  /* 0C09AE18 mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C09AE1A cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09AE24u, 4); goto L_0C09AE24; } goto L_0C09AE20; }  /* 0C09AE1C bt/s */
L_0C09AE20: BLKS(0x0C09AE20u);
	{ T = (s32)r0 > (s32)r2; /* slot cmp/gt Rm,Rn */ UPD(0x0C09A754u, 4); goto L_0C09A754; }  /* 0C09AE20 bra */
L_0C09AE24: BLKS(0x0C09AE24u);
	r0 = 0x88u; UPD(0x0C09AE26u, 1);  /* 0C09AE24 mov.w @(disp,pc),Rn */
	r3 = 0xFFFFFFFFu;  /* 0C09AE26 mov #imm,Rn */
	IF(0x0C09AE28u); W16(r0 + r8, r3); UPD(0x0C09AE2Au, 2);  /* 0C09AE28 mov.w Rm,@(r0,Rn) */
	r1 = 0x5u;  /* 0C09AE2A mov #imm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C09AE2Eu, 2);  /* 0C09AE2C mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C09AE2E add #imm,Rn */
	{ W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09A77Eu, 4); goto L_0C09A77E; }  /* 0C09AE30 bra */
L_0C09AE40: BLKS(0x0C09AE40u);
	r10 = 0xC069BF0u; UPD(0x0C09AE42u, 1);  /* 0C09AE40 mov.l @(disp,pc),Rn */
	r13 = 0xC068F00u; UPD(0x0C09AE44u, 1);  /* 0C09AE42 mov.l @(disp,pc),Rn */
	IF(0x0C09AE44u); { u32 t_ = r10; PR = 0x0C09AE48u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C09AE48u); }  /* 0C09AE44 jsr @Rn */
L_0C09AE48: BLKS(0x0C09AE48u);
	r10 = 0x86u; UPD(0x0C09AE4Au, 1);  /* 0C09AE48 mov.w @(disp,pc),Rn */
	r4 = r12;  /* 0C09AE4A mov Rm,Rn */
	r5 = 0x4u;  /* 0C09AE4C mov #imm,Rn */
	IF(0x0C09AE4Eu); { u32 t_ = r13; PR = 0x0C09AE52u; r10 += r8; /* slot add Rm,Rn */ UPD(t_, 4); CALLD(t_, 0x0C09AE52u); }  /* 0C09AE4E jsr @Rn */
L_0C09AE52: BLKS(0x0C09AE52u);
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C09AE54u, 1);  /* 0C09AE52 mov.w @Rm,Rn */
	r4 = r12;  /* 0C09AE54 mov Rm,Rn */
	r0 += 0x8u;  /* 0C09AE56 add #imm,Rn */
	r6 = 0xC0A8AE0u; UPD(0x0C09AE5Au, 3);  /* 0C09AE58 mov.l @(disp,pc),Rn */
	IF(0x0C09AE5Au); r0 >>= 2;  /* 0C09AE5A shlr2 Rn */
	IF(0x0C09AE5Cu); r0 >>= 2;  /* 0C09AE5C shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C09AE5E and #imm,r0 */
	IF(0x0C09AE60u); { u32 t_ = r6; PR = 0x0C09AE64u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09AE64u); }  /* 0C09AE60 jsr @Rn */
L_0C09AE64: BLKS(0x0C09AE64u);
	r4 = 0xA5u; UPD(0x0C09AE66u, 1);  /* 0C09AE64 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C09AE66 mov Rm,Rn */
	IF(0x0C09AE68u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C09AE6Au, 2);  /* 0C09AE68 mov.b @(r0,Rm),Rn */
	r6 = 0xAu;  /* 0C09AE6A mov #imm,Rn */
	r4 = r12;  /* 0C09AE6C mov Rm,Rn */
	r2 = 0xC1C728Cu; UPD(0x0C09AE70u, 3);  /* 0C09AE6E mov.l @(disp,pc),Rn */
	r12 = 0xC0BC1B0u; UPD(0x0C09AE72u, 1);  /* 0C09AE70 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C09AE72 mov Rm,Rn */
	IF(0x0C09AE74u); { u32 t_ = r12; PR = 0x0C09AE78u; IF(0x0C09AE76u); r5 = (u32)(s32)(s8)R8(r0 + r3); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09AE78u); }  /* 0C09AE74 jsr @Rn */
L_0C09AE78: BLKS(0x0C09AE78u);
	T = (r0 & r0) == 0;  /* 0C09AE78 tst Rm,Rn */
	if (!T) { UPD(0x0C09AE86u, 4); goto L_0C09AE86; }  /* 0C09AE7A bf */
L_0C09AE7C: BLKS(0x0C09AE7Cu);
	r14 += 0x8u;  /* 0C09AE7C add #imm,Rn */
	r13 = 0xFFFFE890u; UPD(0x0C09AE80u, 2);  /* 0C09AE7E mov.w @(disp,pc),Rn */
	IF(0x0C09AE80u); { u32 tv_ = (r13 + 0x0C09AE84u); u32 t_ = PHYS(tv_); IF(0x0C09AE82u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AE80 braf Rn */
L_0C09AE86: BLKS(0x0C09AE86u);
	r11 = 0xC062780u; UPD(0x0C09AE88u, 1);  /* 0C09AE86 mov.l @(disp,pc),Rn */
	IF(0x0C09AE88u); { u32 t_ = r11; PR = 0x0C09AE8Cu; r4 = 0xFu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09AE8Cu); }  /* 0C09AE88 jsr @Rn */
L_0C09AE8C: BLKS(0x0C09AE8Cu);
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C09AE8Eu, 1);  /* 0C09AE8C mov.w @Rm,Rn */
	r0 += r5;  /* 0C09AE8E add Rm,Rn */
	r0 += 0xFFFFFFF8u;  /* 0C09AE90 add #imm,Rn */
	{ r10 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(0x0C09A84Eu, 5); goto L_0C09A84E; }  /* 0C09AE92 bra */
}

void blk_f_0C09AEE0(sh3_t *c)
{
	LOCALS;
	goto L_0C09AEE0;
L_0C099712: BLKS(0x0C099712u);
	r14 += 0x8u;  /* 0C099712 add #imm,Rn */
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 3);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C09A394: BLKS(0x0C09A394u);
	IF(0x0C09A394u); { u32 t_ = r0; PR = 0x0C09A398u; IF(0x0C09A396u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C09A398u); }  /* 0C09A394 jsr @Rn */
L_0C09A398: BLKS(0x0C09A398u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099712u, 3); goto L_0C099712; }  /* 0C09A398 bra */
L_0C09AD8C: BLKS(0x0C09AD8Cu);
	IF(0x0C09AD8Cu); W16(r0 + r2, r1); UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.w Rm,@(r0,Rn) */
	r13 = 0xFFFFE980u; UPD(0x0C09AD90u, 1);  /* 0C09AD8E mov.w @(disp,pc),Rn */
	IF(0x0C09AD90u); { u32 tv_ = (r13 + 0x0C09AD94u); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD90 braf Rn */
L_0C09AEE0: BLKS(0x0C09AEE0u);
	r13 = 0xC0A8CA0u; UPD(0x0C09AEE2u, 1);  /* 0C09AEE0 mov.l @(disp,pc),Rn */
	IF(0x0C09AEE2u); { u32 t_ = r13; PR = 0x0C09AEE6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09AEE6u); }  /* 0C09AEE2 jsr @Rn */
L_0C09AEE6: BLKS(0x0C09AEE6u);
	IF(0x0C09AEE6u); T = (s32)r0 >= 0;  /* 0C09AEE6 cmp/pz Rn */
	if (!T) { UPD(0x0C09AEFEu, 4); goto L_0C09AEFE; }  /* 0C09AEE8 bf */
L_0C09AEEA: BLKS(0x0C09AEEAu);
	r8 = 0xC0A8BF0u; UPD(0x0C09AEECu, 1);  /* 0C09AEEA mov.l @(disp,pc),Rn */
	IF(0x0C09AEECu); { u32 t_ = r8; PR = 0x0C09AEF0u; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C09AEF0u); }  /* 0C09AEEC jsr @Rn */
L_0C09AEF0: BLKS(0x0C09AEF0u);
	IF(0x0C09AEF0u); T = (s32)r0 >= 0;  /* 0C09AEF0 cmp/pz Rn */
	if (!T) { UPD(0x0C09AEFEu, 4); goto L_0C09AEFE; }  /* 0C09AEF2 bf */
L_0C09AEF4: BLKS(0x0C09AEF4u);
	IF(0x0C09AEF4u); { u32 t_ = r8; PR = 0x0C09AEF8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C09AEF8u); }  /* 0C09AEF4 jsr @Rn */
L_0C09AEF8: BLKS(0x0C09AEF8u);
	IF(0x0C09AEF8u); T = (s32)r0 >= 0;  /* 0C09AEF8 cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09AF06u, 4); goto L_0C09AF06; } UPD(0x0C09AEFEu, 1); goto L_0C09AEFE; }  /* 0C09AEFA bt/s */
L_0C09AEFE: BLKS(0x0C09AEFEu);
	r1 = 0xFFFFEBDCu; UPD(0x0C09AF00u, 1);  /* 0C09AEFE mov.w @(disp,pc),Rn */
	IF(0x0C09AF00u); { u32 tv_ = (r1 + 0x0C09AF04u); u32 t_ = PHYS(tv_); IF(0x0C09AF02u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AF00 braf Rn */
L_0C09AF06: BLKS(0x0C09AF06u);
	r7 = 0xB4u; UPD(0x0C09AF08u, 1);  /* 0C09AF06 mov.w @(disp,pc),Rn */
	IF(0x0C09AF08u); MACL = r0 * r7;  /* 0C09AF08 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C09AF0Cu, 3);  /* 0C09AF0A mov.l @(disp,pc),Rn */
	IF(0x0C09AF0Cu); r3 = MACL;  /* 0C09AF0C sts macl,Rn */
	r3 += r6;  /* 0C09AF0E add Rm,Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C09AF12u, 3);  /* 0C09AF10 mov.l @(disp,Rm),Rn */
	T = r0 == 0x13u;  /* 0C09AF12 cmp/eq #imm,r0 */
	IF(0x0C09AF14u); r4 = T;  /* 0C09AF14 movt Rn */
	T = r0 == 0x2Cu;  /* 0C09AF16 cmp/eq #imm,r0 */
	IF(0x0C09AF18u); r5 = T;  /* 0C09AF18 movt Rn */
	r4 |= r5;  /* 0C09AF1A or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C09AF1C tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09AF20u); MACL = r12 * r7; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09AF26u, 10); goto L_0C09AF26; } goto L_0C09AF22; }  /* 0C09AF1E bf/s */
L_0C09AF22: BLKS(0x0C09AF22u);
	{ IF(0x0C09AF24u); r0 = MACL; /* slot sts macl,Rn */ UPD(0x0C09B130u, 5); goto L_0C09B130; }  /* 0C09AF22 bra */
L_0C09AF26: BLKS(0x0C09AF26u);
	r0 = R32(r3 + 0xCu); UPD(0x0C09AF28u, 1);  /* 0C09AF26 mov.l @(disp,Rm),Rn */
	r9 = 0xC1C7290u; UPD(0x0C09AF2Au, 1);  /* 0C09AF28 mov.l @(disp,pc),Rn */
	IF(0x0C09AF2Au); r0 <<= 2;  /* 0C09AF2A shll2 Rn */
	IF(0x0C09AF2Cu); r13 = R32(r0 + r9); UPD(0x0C09AF2Eu, 2);  /* 0C09AF2C mov.l @(r0,Rm),Rn */
	r8 = 0xC1C72D0u; UPD(0x0C09AF30u, 1);  /* 0C09AF2E mov.l @(disp,pc),Rn */
	r11 = R32(r3 + 0x30u); UPD(0x0C09AF32u, 1);  /* 0C09AF30 mov.l @(disp,Rm),Rn */
	IF(0x0C09AF32u); T = (s32)r11 >= 0;  /* 0C09AF32 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C09AF36u); r9 = R32(r0 + r8); /* slot mov.l @(r0,Rm),Rn */ if (c_) { UPD(0x0C09AF3Cu, 4); goto L_0C09AF3C; } UPD(0x0C09AF38u, 1); goto L_0C09AF38; }  /* 0C09AF34 bt/s */
L_0C09AF38: BLKS(0x0C09AF38u);
	{ r9 = 0u - r9; /* slot neg Rm,Rn */ UPD(0x0C09B120u, 3); goto L_0C09B120; }  /* 0C09AF38 bra */
L_0C09AF3C: BLKS(0x0C09AF3Cu);
	IF(0x0C09AF3Cu); MACL = r12 * r7;  /* 0C09AF3C mul.l Rm,Rn */
	UPD(0x0C09AF3Eu, 2);
L_0C09AF3E: BLKS(0x0C09AF3Eu);
	IF(0x0C09AF3Eu); r7 = MACL;  /* 0C09AF3E sts macl,Rn */
	r7 += r6;  /* 0C09AF40 add Rm,Rn */
	W32(r7 + 0x2Cu, r13); UPD(0x0C09AF44u, 3);  /* 0C09AF42 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x30u, r9); UPD(0x0C09AF46u, 1);  /* 0C09AF44 mov.l Rm,@(disp,Rn) */
L_0C09AF46: BLKS(0x0C09AF46u);
	r7 = 0xB4u; UPD(0x0C09AF48u, 1);  /* 0C09AF46 mov.w @(disp,pc),Rn */
	IF(0x0C09AF48u); MACL = r12 * r7;  /* 0C09AF48 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C09AF4Cu, 3);  /* 0C09AF4A mov.l @(disp,pc),Rn */
	IF(0x0C09AF4Cu); r11 = MACL;  /* 0C09AF4C sts macl,Rn */
	IF(0x0C09AF4Eu); MACL = r10 * r7;  /* 0C09AF4E mul.l Rm,Rn */
	r11 += r8;  /* 0C09AF50 add Rm,Rn */
	r2 = 0xC069B20u; UPD(0x0C09AF54u, 5);  /* 0C09AF52 mov.l @(disp,pc),Rn */
	IF(0x0C09AF54u); r5 = MACL;  /* 0C09AF54 sts macl,Rn */
	r5 += r8;  /* 0C09AF56 add Rm,Rn */
	r4 = R32(r5 + 0x24u); UPD(0x0C09AF5Au, 3);  /* 0C09AF58 mov.l @(disp,Rm),Rn */
	r3 = 0x86u; UPD(0x0C09AF5Cu, 1);  /* 0C09AF5A mov.w @(disp,pc),Rn */
	r13 += r4;  /* 0C09AF5C add Rm,Rn */
	r8 = 0x40000u; UPD(0x0C09AF60u, 2);  /* 0C09AF5E mov.l @(disp,pc),Rn */
	r3 += r11;  /* 0C09AF60 add Rm,Rn */
	W32(r14, r5); UPD(0x0C09AF64u, 2);  /* 0C09AF62 mov.l Rm,@Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C09AF66u, 1);  /* 0C09AF64 mov.w @Rm,Rn */
	r5 = r8;  /* 0C09AF66 mov Rm,Rn */
	IF(0x0C09AF68u); { u32 t_ = r2; PR = 0x0C09AF6Cu; W32(r14 + 0x4u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09AF6Cu); }  /* 0C09AF68 jsr @Rn */
L_0C09AF6C: BLKS(0x0C09AF6Cu);
	r6 = R32(r14); UPD(0x0C09AF6Eu, 1);  /* 0C09AF6C mov.l @Rm,Rn */
	r5 = r8;  /* 0C09AF6E mov Rm,Rn */
	r13 += r0;  /* 0C09AF70 add Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C09AF74u, 3);  /* 0C09AF72 mov.l @(disp,pc),Rn */
	r0 = R32(r6 + 0x28u); UPD(0x0C09AF76u, 1);  /* 0C09AF74 mov.l @(disp,Rm),Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C09AF78u, 1);  /* 0C09AF76 mov.l @(disp,Rm),Rn */
	r9 += r0;  /* 0C09AF78 add Rm,Rn */
	W32(r11 + 0x24u, r13); UPD(0x0C09AF7Cu, 2);  /* 0C09AF7A mov.l Rm,@(disp,Rn) */
	IF(0x0C09AF7Cu); { u32 t_ = r8; PR = 0x0C09AF80u; r4 = (u32)(s32)(s16)R16(r7); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09AF80u); }  /* 0C09AF7C jsr @Rn */
L_0C09AF80: BLKS(0x0C09AF80u);
	r5 = 0xA8u; UPD(0x0C09AF82u, 1);  /* 0C09AF80 mov.w @(disp,pc),Rn */
	r13 = r11;  /* 0C09AF82 mov Rm,Rn */
	r1 = R32(r14); UPD(0x0C09AF86u, 2);  /* 0C09AF84 mov.l @Rm,Rn */
	r13 += r5;  /* 0C09AF86 add Rm,Rn */
	r5 += r1;  /* 0C09AF88 add Rm,Rn */
	r9 += r0;  /* 0C09AF8A add Rm,Rn */
	r5 += 0x1u;  /* 0C09AF8C add #imm,Rn */
	r3 = 0xAFu; UPD(0x0C09AF90u, 5);  /* 0C09AF8E mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C09AF90 mov Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C09AF94u, 2);  /* 0C09AF92 mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C09AF94 add #imm,Rn */
	IF(0x0C09AF96u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09AF98u, 2);  /* 0C09AF96 mov.b @(r0,Rm),Rn */
	r6 = r4;  /* 0C09AF98 mov Rm,Rn */
	r6 += r2;  /* 0C09AF9A add Rm,Rn */
	r0 = r6 & 0xFF;  /* 0C09AF9C extu.b Rm,Rn */
	W32(r11 + 0x28u, r9); UPD(0x0C09AFA0u, 4);  /* 0C09AF9E mov.l Rm,@(disp,Rn) */
	T = r0 == 0x13u;  /* 0C09AFA0 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r13, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09AFAAu, 4); goto L_0C09AFAA; } UPD(0x0C09AFA6u, 1); goto L_0C09AFA6; }  /* 0C09AFA2 bf/s */
L_0C09AFA6: BLKS(0x0C09AFA6u);
	{ r9 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(0x0C09B110u, 3); goto L_0C09B110; }  /* 0C09AFA6 bra */
L_0C09AFAA: BLKS(0x0C09AFAAu);
	r3 = R32(r14); UPD(0x0C09AFACu, 1);  /* 0C09AFAA mov.l @Rm,Rn */
	r4 = r10;  /* 0C09AFAC mov Rm,Rn */
	r0 = R32(r11); UPD(0x0C09AFB0u, 2);  /* 0C09AFAE mov.l @Rm,Rn */
	r6 = R32(r3); UPD(0x0C09AFB2u, 1);  /* 0C09AFB0 mov.l @Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C09AFB4u, 1);  /* 0C09AFB2 mov.w @(disp,pc),Rn */
	r1 = 0x100u; UPD(0x0C09AFB6u, 1);  /* 0C09AFB4 mov.w @(disp,pc),Rn */
	r0 &= r2;  /* 0C09AFB6 and Rm,Rn */
	r8 = 0xC0A8CA0u; UPD(0x0C09AFBAu, 2);  /* 0C09AFB8 mov.l @(disp,pc),Rn */
	r6 &= r1;  /* 0C09AFBA and Rm,Rn */
	r0 |= r6;  /* 0C09AFBC or Rm,Rn */
	IF(0x0C09AFBEu); { u32 t_ = r8; PR = 0x0C09AFC2u; W32(r11, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09AFC2u); }  /* 0C09AFBE jsr @Rn */
L_0C09AFC2: BLKS(0x0C09AFC2u);
	IF(0x0C09AFC2u); T = (s32)r0 >= 0;  /* 0C09AFC2 cmp/pz Rn */
	if (!T) { UPD(0x0C09AFCEu, 4); goto L_0C09AFCE; }  /* 0C09AFC4 bf */
L_0C09AFC6: BLKS(0x0C09AFC6u);
	IF(0x0C09AFC6u); { u32 t_ = r8; PR = 0x0C09AFCAu; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C09AFCAu); }  /* 0C09AFC6 jsr @Rn */
L_0C09AFCA: BLKS(0x0C09AFCAu);
	IF(0x0C09AFCAu); T = (s32)r0 >= 0;  /* 0C09AFCA cmp/pz Rn */
	if (T) { UPD(0x0C09AFD2u, 4); goto L_0C09AFD2; }  /* 0C09AFCC bt */
L_0C09AFCE: BLKS(0x0C09AFCEu);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C09B100u, 3); goto L_0C09B100; }  /* 0C09AFCE bra */
L_0C09AFD2: BLKS(0x0C09AFD2u);
	r9 = 0x9Cu; UPD(0x0C09AFD4u, 1);  /* 0C09AFD2 mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C09AFD4 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C09AFD8u, 2);  /* 0C09AFD6 mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C09AFD8 tst Rm,Rn */
	if (T) { UPD(0x0C09AFE2u, 4); goto L_0C09AFE2; }  /* 0C09AFDA bt */
L_0C09AFDC: BLKS(0x0C09AFDCu);
	r2 = r9;  /* 0C09AFDC mov Rm,Rn */
	{ r2 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09B0B0u, 4); goto L_0C09B0B0; }  /* 0C09AFDE bra */
L_0C09AFE2: BLKS(0x0C09AFE2u);
	r5 = 0xB4u; UPD(0x0C09AFE4u, 1);  /* 0C09AFE2 mov.w @(disp,pc),Rn */
	IF(0x0C09AFE4u); MACL = r0 * r5;  /* 0C09AFE4 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C09AFE8u, 3);  /* 0C09AFE6 mov.l @(disp,pc),Rn */
	IF(0x0C09AFE8u); r0 = MACL;  /* 0C09AFE8 sts macl,Rn */
	r10 = 0x9Au; UPD(0x0C09AFECu, 2);  /* 0C09AFEA mov.w @(disp,pc),Rn */
	r0 += r4;  /* 0C09AFEC add Rm,Rn */
	IF(0x0C09AFEEu); r0 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09AFF0u, 2);  /* 0C09AFEE mov.b @(r0,Rm),Rn */
	T = r0 == 0x4u;  /* 0C09AFF0 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B030u, 4); goto L_0C09B030; }  /* 0C09AFF2 bt */
L_0C09AFF4: BLKS(0x0C09AFF4u);
	r0 = R32(r11 + 0xCu); UPD(0x0C09AFF6u, 1);  /* 0C09AFF4 mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C09AFF6 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B064u, 4); goto L_0C09B064; }  /* 0C09AFF8 bt */
L_0C09AFFA: BLKS(0x0C09AFFAu);
	r7 = 0x10u;  /* 0C09AFFA mov #imm,Rn */
	T = (s32)r0 > (s32)r7;  /* 0C09AFFC cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09B020u, 5); goto L_0C09B020; }  /* 0C09AFFE bf */
L_0C09B000: BLKS(0x0C09B000u);
	r0 += 0xFFFFFFFFu;  /* 0C09B000 add #imm,Rn */
	UPD(0x0C09B002u, 1);
L_0C09B002: BLKS(0x0C09B002u);
	r3 = 0xC0A8AE0u; UPD(0x0C09B004u, 1);  /* 0C09B002 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C09B004 mov Rm,Rn */
	IF(0x0C09B006u); { u32 t_ = r3; PR = 0x0C09B00Au; W32(r11 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09B00Au); }  /* 0C09B006 jsr @Rn */
L_0C09B00A: BLKS(0x0C09B00Au);
	r0 = 0xB4u; UPD(0x0C09B00Cu, 1);  /* 0C09B00A mov.w @(disp,pc),Rn */
	r9 = 0x4u;  /* 0C09B00C mov #imm,Rn */
	IF(0x0C09B00Eu); MACL = r12 * r0;  /* 0C09B00E mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C09B012u, 4);  /* 0C09B010 mov.l @(disp,pc),Rn */
	IF(0x0C09B012u); r0 = MACL;  /* 0C09B012 sts macl,Rn */
	r0 += r6;  /* 0C09B014 add Rm,Rn */
	r1 = R32(r0 + 0xCu); UPD(0x0C09B018u, 3);  /* 0C09B016 mov.l @(disp,Rm),Rn */
	r2 = 0x86u; UPD(0x0C09B01Au, 1);  /* 0C09B018 mov.w @(disp,pc),Rn */
	{ IF(0x0C09B01Cu); ARG0(0x419Du); { s32 s_ = (s32)r9; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); } /* slot shld Rm,Rn */ UPD(0x0C09AD8Cu, 3); goto L_0C09AD8C; }  /* 0C09B01A bra */
L_0C09B020: BLKS(0x0C09B020u);
	{ r0 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09B002u, 3); goto L_0C09B002; }  /* 0C09B020 bra */
L_0C09B030: BLKS(0x0C09B030u);
	r10 = 0xC069BF0u; UPD(0x0C09B032u, 1);  /* 0C09B030 mov.l @(disp,pc),Rn */
	r13 = 0xC068F00u; UPD(0x0C09B034u, 1);  /* 0C09B032 mov.l @(disp,pc),Rn */
	IF(0x0C09B034u); { u32 t_ = r10; PR = 0x0C09B038u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C09B038u); }  /* 0C09B034 jsr @Rn */
L_0C09B038: BLKS(0x0C09B038u);
	r4 = r12;  /* 0C09B038 mov Rm,Rn */
	IF(0x0C09B03Au); { u32 t_ = r13; PR = 0x0C09B03Eu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C09B03Eu); }  /* 0C09B03A jsr @Rn */
L_0C09B03E: BLKS(0x0C09B03Eu);
	r8 = R32(r14 + 0x4u); UPD(0x0C09B040u, 1);  /* 0C09B03E mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C09B042u, 1);  /* 0C09B040 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C09B042 add #imm,Rn */
	IF(0x0C09B044u); r0 >>= 2;  /* 0C09B044 shlr2 Rn */
	IF(0x0C09B046u); r0 >>= 2;  /* 0C09B046 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C09B048 and #imm,r0 */
	W32(r11 + 0xCu, r0); UPD(0x0C09B04Cu, 5);  /* 0C09B04A mov.l Rm,@(disp,Rn) */
	r11 = 0xC0A8AE0u; UPD(0x0C09B04Eu, 1);  /* 0C09B04C mov.l @(disp,pc),Rn */
	IF(0x0C09B04Eu); { u32 t_ = r11; PR = 0x0C09B052u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09B052u); }  /* 0C09B04E jsr @Rn */
L_0C09B052: BLKS(0x0C09B052u);
	r4 = r12;  /* 0C09B052 mov Rm,Rn */
	r12 = 0xC0BC1B0u; UPD(0x0C09B056u, 2);  /* 0C09B054 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C09B056 mov #imm,Rn */
	IF(0x0C09B058u); { u32 t_ = r12; PR = 0x0C09B05Cu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09B05Cu); }  /* 0C09B058 jsr @Rn */
L_0C09B05C: BLKS(0x0C09B05Cu);
	T = (r0 & r0) == 0;  /* 0C09B05C tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x8u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09B064u, 4); goto L_0C09B064; } goto L_0C09B062; }  /* 0C09B05E bt/s */
L_0C09B062: BLKS(0x0C09B062u);
	W8(r9, r1); UPD(0x0C09B064u, 2);  /* 0C09B062 mov.b Rm,@Rn */
L_0C09B064: BLKS(0x0C09B064u);
	r13 = 0xFFFFE6AAu; UPD(0x0C09B066u, 1);  /* 0C09B064 mov.w @(disp,pc),Rn */
	IF(0x0C09B066u); { u32 tv_ = (r13 + 0x0C09B06Au); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09B066 braf Rn */
L_0C09B0B0: BLKS(0x0C09B0B0u);
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C09B0B2u, 1);  /* 0C09B0B0 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C09B0B2 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C09B0B4 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C09B0B6 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09B064u, 6); goto L_0C09B064; } UPD(0x0C09B0BCu, 1); goto L_0C09B0BC; }  /* 0C09B0B8 bf/s */
L_0C09B0BC: BLKS(0x0C09B0BCu);
	r0 = r3;  /* 0C09B0BC mov Rm,Rn */
	r12 = 0x0u;  /* 0C09B0BE mov #imm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C09B0C0 add #imm,Rn */
	W8(r2, r12); UPD(0x0C09B0C4u, 4);  /* 0C09B0C2 mov.b Rm,@Rn */
	W8(r9, r0); UPD(0x0C09B0C6u, 1);  /* 0C09B0C4 mov.b Rm,@Rn */
	r6 = R32(r14 + 0x4u); UPD(0x0C09B0C8u, 1);  /* 0C09B0C6 mov.l @(disp,Rm),Rn */
	r7 = 0xC069B20u; UPD(0x0C09B0CAu, 1);  /* 0C09B0C8 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)R16(r6); UPD(0x0C09B0CCu, 1);  /* 0C09B0CA mov.w @Rm,Rn */
	r13 = 0x80000u; UPD(0x0C09B0CEu, 1);  /* 0C09B0CC mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C09B0CE mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C09B0D2u, 2);  /* 0C09B0D0 mov.l @(disp,pc),Rn */
	IF(0x0C09B0D2u); { u32 t_ = r7; PR = 0x0C09B0D6u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09B0D6u); }  /* 0C09B0D2 jsr @Rn */
L_0C09B0D6: BLKS(0x0C09B0D6u);
	r10 = R32(r11 + 0x24u); UPD(0x0C09B0D8u, 1);  /* 0C09B0D6 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C09B0D8 mov Rm,Rn */
	r10 += r0;  /* 0C09B0DA add Rm,Rn */
	IF(0x0C09B0DCu); { u32 t_ = r8; PR = 0x0C09B0E0u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLD(t_, 0x0C09B0E0u); }  /* 0C09B0DC jsr @Rn */
L_0C09B0E0: BLKS(0x0C09B0E0u);
	r6 = R32(r11 + 0x28u); UPD(0x0C09B0E2u, 1);  /* 0C09B0E0 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09B0E2 add #imm,Rn */
	r11 = 0x2C000u; UPD(0x0C09B0E6u, 2);  /* 0C09B0E4 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09B0E6 add Rm,Rn */
	W32(r15, r11); UPD(0x0C09B0EAu, 2);  /* 0C09B0E8 mov.l Rm,@Rn */
	r7 = r12;  /* 0C09B0EA mov Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C09B0EEu, 2);  /* 0C09B0EC mov.b @Rm,Rn */
	r4 = 0xC1C734Cu; UPD(0x0C09B0F0u, 1);  /* 0C09B0EE mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C09B0F0 extu.b Rm,Rn */
	IF(0x0C09B0F2u); r0 <<= 2;  /* 0C09B0F2 shll2 Rn */
	IF(0x0C09B0F4u); r2 = R32(r0 + r4); UPD(0x0C09B0F6u, 3);  /* 0C09B0F4 mov.l @(r0,Rm),Rn */
	r5 = r10;  /* 0C09B0F6 mov Rm,Rn */
	r0 = 0xC0BAF60u; UPD(0x0C09B0FAu, 2);  /* 0C09B0F8 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C09B0FA mov #imm,Rn */
	{ W32(r15 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09A394u, 4); goto L_0C09A394; }  /* 0C09B0FC bra */
L_0C09B100: BLKS(0x0C09B100u);
	r13 = 0xFFFFEE3Cu; UPD(0x0C09B102u, 1);  /* 0C09B100 mov.w @(disp,pc),Rn */
	IF(0x0C09B102u); { u32 tv_ = (r13 + 0x0C09B106u); u32 t_ = PHYS(tv_); IF(0x0C09B104u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09B102 braf Rn */
L_0C09B110: BLKS(0x0C09B110u);
	r13 = 0x13000000u; UPD(0x0C09B112u, 1);  /* 0C09B110 mov.l @(disp,pc),Rn */
	r9 |= r13;  /* 0C09B112 or Rm,Rn */
	{ W32(r11, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C09AFAAu, 4); goto L_0C09AFAA; }  /* 0C09B114 bra */
L_0C09B120: BLKS(0x0C09B120u);
	{ IF(0x0C09B122u); MACL = r12 * r7; /* slot mul.l Rm,Rn */ UPD(0x0C09AF3Eu, 4); goto L_0C09AF3E; }  /* 0C09B120 bra */
L_0C09B130: BLKS(0x0C09B130u);
	r0 += r6;  /* 0C09B130 add Rm,Rn */
	r13 = R32(r0 + 0x2Cu); UPD(0x0C09B134u, 2);  /* 0C09B132 mov.l @(disp,Rm),Rn */
	{ r9 = R32(r0 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C09AF46u, 3); goto L_0C09AF46; }  /* 0C09B134 bra */
}

void blk_f_0C09B140(sh3_t *c)
{
	LOCALS;
L_0C09B140: BLKS(0x0C09B140u);
	r8 = 0xC0A8BF0u; UPD(0x0C09B142u, 1);  /* 0C09B140 mov.l @(disp,pc),Rn */
	IF(0x0C09B142u); { u32 t_ = r8; PR = 0x0C09B146u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C09B146u); }  /* 0C09B142 jsr @Rn */
L_0C09B146: BLKS(0x0C09B146u);
	IF(0x0C09B146u); T = (s32)r0 >= 0;  /* 0C09B146 cmp/pz Rn */
	{ u32 c_ = !T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09B154u, 4); goto L_0C09B154; } goto L_0C09B14C; }  /* 0C09B148 bf/s */
L_0C09B14C: BLKS(0x0C09B14Cu);
	IF(0x0C09B14Cu); { u32 t_ = r8; PR = 0x0C09B150u; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C09B150u); }  /* 0C09B14C jsr @Rn */
L_0C09B150: BLKS(0x0C09B150u);
	IF(0x0C09B150u); T = (s32)r0 >= 0;  /* 0C09B150 cmp/pz Rn */
	if (T) { UPD(0x0C09B15Cu, 4); goto L_0C09B15C; }  /* 0C09B152 bt */
L_0C09B154: BLKS(0x0C09B154u);
	r1 = 0xFFFFE986u; UPD(0x0C09B156u, 1);  /* 0C09B154 mov.w @(disp,pc),Rn */
	IF(0x0C09B156u); { u32 tv_ = (r1 + 0x0C09B15Au); u32 t_ = PHYS(tv_); IF(0x0C09B158u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09B156 braf Rn */
L_0C09B15C: BLKS(0x0C09B15Cu);
	r9 = 0xB4u; UPD(0x0C09B15Eu, 1);  /* 0C09B15C mov.w @(disp,pc),Rn */
	IF(0x0C09B15Eu); MACL = r12 * r9;  /* 0C09B15E mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C09B162u, 3);  /* 0C09B160 mov.l @(disp,pc),Rn */
	IF(0x0C09B162u); r8 = MACL;  /* 0C09B162 sts macl,Rn */
	IF(0x0C09B164u); MACL = r10 * r9;  /* 0C09B164 mul.l Rm,Rn */
	r8 += r4;  /* 0C09B166 add Rm,Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C09B16Au, 5);  /* 0C09B168 mov.l @(disp,Rm),Rn */
	IF(0x0C09B16Au); r9 = MACL;  /* 0C09B16A sts macl,Rn */
	r9 += r4;  /* 0C09B16C add Rm,Rn */
	r0 = R32(r9 + 0x24u); UPD(0x0C09B170u, 3);  /* 0C09B16E mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C09B170 mov Rm,Rn */
	r7 = 0xA8u; UPD(0x0C09B174u, 2);  /* 0C09B172 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C09B174 add Rm,Rn */
	r6 = R32(r9 + 0x28u); UPD(0x0C09B178u, 2);  /* 0C09B176 mov.l @(disp,Rm),Rn */
	r4 += r7;  /* 0C09B178 add Rm,Rn */
	r10 = R32(r9); UPD(0x0C09B17Cu, 2);  /* 0C09B17A mov.l @Rm,Rn */
	r7 += r9;  /* 0C09B17C add Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C09B180u, 2);  /* 0C09B17E mov.l Rm,@(disp,Rn) */
	r7 += 0x1u;  /* 0C09B180 add #imm,Rn */
	r13 = 0xAFu; UPD(0x0C09B184u, 2);  /* 0C09B182 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09B184 mov Rm,Rn */
	r3 = R32(r8); UPD(0x0C09B188u, 2);  /* 0C09B186 mov.l @Rm,Rn */
	r4 += 0x1u;  /* 0C09B188 add #imm,Rn */
	r9 = 0x100u; UPD(0x0C09B18Cu, 2);  /* 0C09B18A mov.w @(disp,pc),Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C09B18Eu, 1);  /* 0C09B18C mov.w @(disp,pc),Rn */
	r10 &= r9;  /* 0C09B18E and Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C09B192u, 2);  /* 0C09B190 mov.b @Rm,Rn */
	r3 &= r2;  /* 0C09B192 and Rm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C09B196u, 2);  /* 0C09B194 mov.l @(disp,Rm),Rn */
	r3 |= r10;  /* 0C09B196 or Rm,Rn */
	IF(0x0C09B198u); r11 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C09B19Au, 2);  /* 0C09B198 mov.b @(r0,Rm),Rn */
	r6 += r1;  /* 0C09B19A add Rm,Rn */
	r5 += r11;  /* 0C09B19C add Rm,Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C09B1A0u, 3);  /* 0C09B19E mov.l Rm,@(disp,Rn) */
	T = (r3 & r9) == 0;  /* 0C09B1A0 tst Rm,Rn */
	W8(r4, r5); UPD(0x0C09B1A4u, 2);  /* 0C09B1A2 mov.b Rm,@Rn */
	{ u32 c_ = !T; W32(r8, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09B230u, 3); goto L_0C09B230; } UPD(0x0C09B1A8u, 1); goto L_0C09B1A8; }  /* 0C09B1A4 bf/s */
L_0C09B1A8: BLKS(0x0C09B1A8u);
	r10 = 0x86u; UPD(0x0C09B1AAu, 1);  /* 0C09B1A8 mov.w @(disp,pc),Rn */
	r4 = r12;  /* 0C09B1AA mov Rm,Rn */
	r10 += r8;  /* 0C09B1AC add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C09B1B0u, 3);  /* 0C09B1AE mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C09B1B0 add #imm,Rn */
	IF(0x0C09B1B2u); r0 >>= 2;  /* 0C09B1B2 shlr2 Rn */
	r5 = 0xC0A8AE0u; UPD(0x0C09B1B6u, 3);  /* 0C09B1B4 mov.l @(disp,pc),Rn */
	IF(0x0C09B1B6u); r0 >>= 2;  /* 0C09B1B6 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C09B1B8 and #imm,r0 */
	IF(0x0C09B1BAu); { u32 t_ = r5; PR = 0x0C09B1BEu; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09B1BEu); }  /* 0C09B1BA jsr @Rn */
L_0C09B1BE: BLKS(0x0C09B1BEu);
	r2 = R32(r8); UPD(0x0C09B1C0u, 1);  /* 0C09B1BE mov.l @Rm,Rn */
	T = (r2 & r9) == 0;  /* 0C09B1C0 tst Rm,Rn */
	if (T) { UPD(0x0C09B21Cu, 4); goto L_0C09B21C; }  /* 0C09B1C2 bt */
L_0C09B1C4: BLKS(0x0C09B1C4u);
	r4 = r12;  /* 0C09B1C4 mov Rm,Rn */
	r12 = 0xC0BC1B0u; UPD(0x0C09B1C8u, 2);  /* 0C09B1C6 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C09B1C8 mov #imm,Rn */
	IF(0x0C09B1CAu); { u32 t_ = r12; PR = 0x0C09B1CEu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09B1CEu); }  /* 0C09B1CA jsr @Rn */
L_0C09B1CE: BLKS(0x0C09B1CEu);
	T = (r0 & r0) == 0;  /* 0C09B1CE tst Rm,Rn */
	if (T) { UPD(0x0C09B21Cu, 4); goto L_0C09B21C; }  /* 0C09B1D0 bt */
L_0C09B1D2: BLKS(0x0C09B1D2u);
	r9 = 0x0u;  /* 0C09B1D2 mov #imm,Rn */
	r12 = 0x180000u; UPD(0x0C09B1D6u, 2);  /* 0C09B1D4 mov.l @(disp,pc),Rn */
	r11 = r10;  /* 0C09B1D6 mov Rm,Rn */
	UPD(0x0C09B1D8u, 1);
L_0C09B1D8: BLKS(0x0C09B1D8u);
	r3 = 0xC1C736Cu; UPD(0x0C09B1DAu, 1);  /* 0C09B1D8 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C09B1DA mov Rm,Rn */
	r0 += r0;  /* 0C09B1DC add Rm,Rn */
	IF(0x0C09B1DEu); r1 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C09B1E0u, 3);  /* 0C09B1DE mov.w @(r0,Rm),Rn */
	r5 = r12;  /* 0C09B1E0 mov Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r11); UPD(0x0C09B1E4u, 2);  /* 0C09B1E2 mov.w @Rm,Rn */
	r13 = 0xC069B20u; UPD(0x0C09B1E6u, 1);  /* 0C09B1E4 mov.l @(disp,pc),Rn */
	r6 += r1;  /* 0C09B1E6 add Rm,Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C09B1E8 exts.w Rm,Rn */
	IF(0x0C09B1EAu); { u32 t_ = r13; PR = 0x0C09B1EEu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09B1EEu); }  /* 0C09B1EA jsr @Rn */
L_0C09B1EE: BLKS(0x0C09B1EEu);
	r13 = R32(r8 + 0x24u); UPD(0x0C09B1F0u, 1);  /* 0C09B1EE mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C09B1F0 mov Rm,Rn */
	r13 += r0;  /* 0C09B1F2 add Rm,Rn */
	r0 = 0xC069AF0u; UPD(0x0C09B1F6u, 3);  /* 0C09B1F4 mov.l @(disp,pc),Rn */
	IF(0x0C09B1F6u); { u32 t_ = r0; PR = 0x0C09B1FAu; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09B1FAu); }  /* 0C09B1F6 jsr @Rn */
L_0C09B1FA: BLKS(0x0C09B1FAu);
	r6 = R32(r8 + 0x28u); UPD(0x0C09B1FCu, 1);  /* 0C09B1FA mov.l @(disp,Rm),Rn */
	r7 = r10;  /* 0C09B1FC mov Rm,Rn */
	r6 += r0;  /* 0C09B1FE add Rm,Rn */
	r10 = 0xC0BB1A0u; UPD(0x0C09B202u, 3);  /* 0C09B200 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09B202 add #imm,Rn */
	r0 = 0x2C000u; UPD(0x0C09B206u, 2);  /* 0C09B204 mov.l @(disp,pc),Rn */
	r5 = r13;  /* 0C09B206 mov Rm,Rn */
	W32(r15, r0); UPD(0x0C09B20Au, 2);  /* 0C09B208 mov.l Rm,@Rn */
	IF(0x0C09B20Au); { u32 t_ = r10; PR = 0x0C09B20Eu; r4 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BB1A0, 0x0C0BB1A0u, 0x0C09B20Eu); }  /* 0C09B20A jsr @Rn */
L_0C09B20E: BLKS(0x0C09B20Eu);
	r7 = r9;  /* 0C09B20E mov Rm,Rn */
	r7 += 0x1u;  /* 0C09B210 add #imm,Rn */
	r9 = (u32)(s32)(s16)r7;  /* 0C09B212 exts.w Rm,Rn */
	r13 = 0x3u;  /* 0C09B214 mov #imm,Rn */
	T = (s32)r9 > (s32)r13;  /* 0C09B216 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09B1D8u, 8); goto L_0C09B1D8; } UPD(0x0C09B21Cu, 1); goto L_0C09B21C; }  /* 0C09B218 bf/s */
L_0C09B21C: BLKS(0x0C09B21Cu);
	r13 = 0xFFFFE4F2u; UPD(0x0C09B21Eu, 1);  /* 0C09B21C mov.w @(disp,pc),Rn */
	IF(0x0C09B21Eu); { u32 tv_ = (r13 + 0x0C09B222u); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09B21E braf Rn */
L_0C09B230: BLKS(0x0C09B230u);
	r11 = 0xC069BF0u; UPD(0x0C09B232u, 1);  /* 0C09B230 mov.l @(disp,pc),Rn */
	r10 = 0xC068F00u; UPD(0x0C09B234u, 1);  /* 0C09B232 mov.l @(disp,pc),Rn */
	IF(0x0C09B234u); { u32 t_ = r11; PR = 0x0C09B238u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C09B238u); }  /* 0C09B234 jsr @Rn */
L_0C09B238: BLKS(0x0C09B238u);
	r4 = r12;  /* 0C09B238 mov Rm,Rn */
	IF(0x0C09B23Au); { u32 t_ = r10; PR = 0x0C09B23Eu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C09B23Eu); }  /* 0C09B23A jsr @Rn */
L_0C09B23E: BLKS(0x0C09B23Eu);
	{ IF(0x0C09B240u); ; /* slot nop */ UPD(0x0C09B1A8u, 3); goto L_0C09B1A8; }  /* 0C09B23E bra */
}


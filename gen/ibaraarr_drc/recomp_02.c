#include "recomp.h"
#include "recomp_funcs.h"

/* FUN_0c04e458 */
void f_0C04E458(sh3_t *c)
{
	LOCALS;
L_0C04E458: BLKS(0x0C04E458u);
	r1 = 0xC04E070u; UPD(0x0C04E45Au, 1);  /* 0C04E458 mov.l @(disp,pc),Rn */
	IF(0x0C04E45Au); { u32 t_ = PR; W32(r1, r4); /* slot mov.l Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C04E45A rts */
}

/* FUN_0c04e464 */
void f_0C04E464(sh3_t *c)
{
	LOCALS;
L_0C04E464: BLKS(0x0C04E464u);
	r1 = 0xC04E074u; UPD(0x0C04E466u, 1);  /* 0C04E464 mov.l @(disp,pc),Rn */
	IF(0x0C04E466u); { u32 t_ = PR; W32(r1, r4); /* slot mov.l Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C04E466 rts */
}

/* FUN_0c04e470 */
void f_0C04E470(sh3_t *c)
{
	LOCALS;
L_0C04E470: BLKS(0x0C04E470u);
	r1 = 0x7u; UPD(0x0C04E472u, 1);  /* 0C04E470 mov.l @(disp,pc),Rn */
	r4 &= r1;  /* 0C04E472 and Rm,Rn */
	r0 = 0x38u; UPD(0x0C04E476u, 2);  /* 0C04E474 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r4 * (u32)(u16)r0;  /* 0C04E476 mulu.w Rm,Rn */
	IF(0x0C04E478u); r4 = MACL;  /* 0C04E478 sts macl,Rn */
	r0 = 0xC04DEB0u; UPD(0x0C04E47Cu, 4);  /* 0C04E47A mov.l @(disp,pc),Rn */
	IF(0x0C04E47Cu); { u32 t_ = PR; r0 += r4; /* slot add Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04E47C rts */
}

/* FUN_0c04e49c */
void f_0C04E49C(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C04E4A4);
L_0C04E49C: BLKS(0x0C04E49Cu);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C04E49Eu, 1);  /* 0C04E49C mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04E4A0u, 1);  /* 0C04E49E mov.l Rm,@-Rn */
	r8 = 0x0u; UPD(0x0C04E4A2u, 1);  /* 0C04E4A0 mov.l @(disp,pc),Rn */
	r0 = 0xC04DEACu; UPD(0x0C04E4A4u, 1);  /* 0C04E4A2 mov.l @(disp,pc),Rn */
L_0C04E4A4: BLKS(0x0C04E4A4u);
	SPIN_SAVE(0C04E4A4);
	r1 = RS32(0C04E4A4, r0); UPD(0x0C04E4A6u, 1);  /* 0C04E4A4 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C04E4A6 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04E4AAu); ; /* slot nop */ if (c_) { SPIN_FFD(0C04E4A4, 5); UPD(0x0C04E4A4u, 4); goto L_0C04E4A4; } goto L_0C04E4AC; }  /* 0C04E4A8 bf/s */
L_0C04E4AC: BLKS(0x0C04E4ACu);
	r0 = 0xC04DEA8u; UPD(0x0C04E4AEu, 2);  /* 0C04E4AC mov.l @(disp,pc),Rn */
	r1 = 0x1u; UPD(0x0C04E4B0u, 1);  /* 0C04E4AE mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C04E4B2u, 1);  /* 0C04E4B0 mov.l Rm,@Rn */
	r0 = 0xC04C2A0u; UPD(0x0C04E4B4u, 1);  /* 0C04E4B2 mov.l @(disp,pc),Rn */
	r9 = 0xC04DEA0u; UPD(0x0C04E4B6u, 1);  /* 0C04E4B4 mov.l @(disp,pc),Rn */
	r3 = R32(r9 + 0x4u); UPD(0x0C04E4B8u, 1);  /* 0C04E4B6 mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C04E4B8 add Rm,Rn */
	r1 = 0x7u; UPD(0x0C04E4BCu, 2);  /* 0C04E4BA mov.l @(disp,pc),Rn */
	r4 &= r1;  /* 0C04E4BC and Rm,Rn */
	r1 = 0x38u; UPD(0x0C04E4C0u, 2);  /* 0C04E4BE mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r4 * (u32)(u16)r1;  /* 0C04E4C0 mulu.w Rm,Rn */
	IF(0x0C04E4C2u); r2 = MACL;  /* 0C04E4C2 sts macl,Rn */
	W32(r0 + 0x0u, r2); UPD(0x0C04E4C6u, 4);  /* 0C04E4C4 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x10u, r8); UPD(0x0C04E4C8u, 1);  /* 0C04E4C6 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x14u, r7); UPD(0x0C04E4CAu, 1);  /* 0C04E4C8 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0xCu, r6); UPD(0x0C04E4CCu, 1);  /* 0C04E4CA mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x18u, r5); UPD(0x0C04E4CEu, 1);  /* 0C04E4CC mov.l Rm,@(disp,Rn) */
	r1 = 0x1Cu; UPD(0x0C04E4D0u, 1);  /* 0C04E4CE mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C04E4D0 add Rm,Rn */
	r2 = 0x1C00u; UPD(0x0C04E4D4u, 2);  /* 0C04E4D2 mov.l @(disp,pc),Rn */
	T = r3 == r2;  /* 0C04E4D4 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04E4D8u); ; /* slot nop */ if (c_) { UPD(0x0C04E4DCu, 4); goto L_0C04E4DC; } goto L_0C04E4DA; }  /* 0C04E4D6 bf/s */
L_0C04E4DA: BLKS(0x0C04E4DAu);
	r3 = 0x0u; UPD(0x0C04E4DCu, 2);  /* 0C04E4DA mov.l @(disp,pc),Rn */
L_0C04E4DC: BLKS(0x0C04E4DCu);
	W32(r9 + 0x4u, r3); UPD(0x0C04E4DEu, 1);  /* 0C04E4DC mov.l Rm,@(disp,Rn) */
	r0 = 0xC04DEA8u; UPD(0x0C04E4E0u, 1);  /* 0C04E4DE mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C04E4E2u, 1);  /* 0C04E4E0 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C04E4E4u, 1);  /* 0C04E4E2 mov.l Rm,@Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04E4E6u, 1);  /* 0C04E4E4 mov.l @Rm+,Rn */
	IF(0x0C04E4E6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04E4E6 rts */
}

/* FUN_0c04e5bc */
void f_0C04E5BC(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C04E5D2);
L_0C04E5BC: BLKS(0x0C04E5BCu);
	r0 = 0xC04E074u; UPD(0x0C04E5BEu, 1);  /* 0C04E5BC mov.l @(disp,pc),Rn */
	r0 = R32(r0); UPD(0x0C04E5C0u, 1);  /* 0C04E5BE mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04E5C0 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04E5C4u); ; /* slot nop */ if (c_) { UPD(0x0C04E5D0u, 4); goto L_0C04E5D0; } goto L_0C04E5C6; }  /* 0C04E5C2 bf/s */
L_0C04E5C6: BLKS(0x0C04E5C6u);
	IF(0x0C04E5C6u); { u32 t_ = PR; IF(0x0C04E5C8u); ; /* slot nop */ UPD(t_, 4); RET(t_); }  /* 0C04E5C6 rts */
L_0C04E5D0: BLKS(0x0C04E5D0u);
	r0 = 0xC04DEACu; UPD(0x0C04E5D2u, 1);  /* 0C04E5D0 mov.l @(disp,pc),Rn */
L_0C04E5D2: BLKS(0x0C04E5D2u);
	SPIN_SAVE(0C04E5D2);
	r1 = RS32(0C04E5D2, r0); UPD(0x0C04E5D4u, 1);  /* 0C04E5D2 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C04E5D4 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04E5D8u); ; /* slot nop */ if (c_) { SPIN_FFD(0C04E5D2, 5); UPD(0x0C04E5D2u, 4); goto L_0C04E5D2; } goto L_0C04E5DA; }  /* 0C04E5D6 bf/s */
L_0C04E5DA: BLKS(0x0C04E5DAu);
	r0 = 0xC04DEA8u; UPD(0x0C04E5DCu, 2);  /* 0C04E5DA mov.l @(disp,pc),Rn */
	r1 = 0x1u; UPD(0x0C04E5DEu, 1);  /* 0C04E5DC mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C04E5E0u, 1);  /* 0C04E5DE mov.l Rm,@Rn */
	r0 = 0xC04C2A0u; UPD(0x0C04E5E2u, 1);  /* 0C04E5E0 mov.l @(disp,pc),Rn */
	r7 = 0xC04DEA0u; UPD(0x0C04E5E4u, 1);  /* 0C04E5E2 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x4u); UPD(0x0C04E5E6u, 1);  /* 0C04E5E4 mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C04E5E6 add Rm,Rn */
	r1 = 0x7u; UPD(0x0C04E5EAu, 2);  /* 0C04E5E8 mov.l @(disp,pc),Rn */
	r4 &= r1;  /* 0C04E5EA and Rm,Rn */
	r1 = 0x38u; UPD(0x0C04E5EEu, 2);  /* 0C04E5EC mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r4 * (u32)(u16)r1;  /* 0C04E5EE mulu.w Rm,Rn */
	IF(0x0C04E5F0u); r2 = MACL;  /* 0C04E5F0 sts macl,Rn */
	W32(r0 + 0x0u, r2); UPD(0x0C04E5F4u, 4);  /* 0C04E5F2 mov.l Rm,@(disp,Rn) */
	r1 = 0x4u; UPD(0x0C04E5F6u, 1);  /* 0C04E5F4 mov.l @(disp,pc),Rn */
	W32(r0 + 0x10u, r1); UPD(0x0C04E5F8u, 1);  /* 0C04E5F6 mov.l Rm,@(disp,Rn) */
	r1 = 0x0u; UPD(0x0C04E5FAu, 1);  /* 0C04E5F8 mov.l @(disp,pc),Rn */
	W32(r0 + 0x14u, r1); UPD(0x0C04E5FCu, 1);  /* 0C04E5FA mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x4u, r5); UPD(0x0C04E5FEu, 1);  /* 0C04E5FC mov.l Rm,@(disp,Rn) */
	r6 += r5;  /* 0C04E5FE add Rm,Rn */
	W32(r0 + 0x8u, r6); UPD(0x0C04E602u, 2);  /* 0C04E600 mov.l Rm,@(disp,Rn) */
	r1 = 0x1Cu; UPD(0x0C04E604u, 1);  /* 0C04E602 mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C04E604 add Rm,Rn */
	r2 = 0x1C00u; UPD(0x0C04E608u, 2);  /* 0C04E606 mov.l @(disp,pc),Rn */
	T = r3 == r2;  /* 0C04E608 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04E60Cu); ; /* slot nop */ if (c_) { UPD(0x0C04E610u, 4); goto L_0C04E610; } goto L_0C04E60E; }  /* 0C04E60A bf/s */
L_0C04E60E: BLKS(0x0C04E60Eu);
	r3 = 0x0u; UPD(0x0C04E610u, 2);  /* 0C04E60E mov.l @(disp,pc),Rn */
L_0C04E610: BLKS(0x0C04E610u);
	W32(r7 + 0x4u, r3); UPD(0x0C04E612u, 1);  /* 0C04E610 mov.l Rm,@(disp,Rn) */
	r0 = 0xC04DEA8u; UPD(0x0C04E614u, 1);  /* 0C04E612 mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C04E616u, 1);  /* 0C04E614 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C04E618u, 1);  /* 0C04E616 mov.l Rm,@Rn */
	IF(0x0C04E618u); { u32 t_ = PR; IF(0x0C04E61Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04E618 rts */
}

/* FUN_0c04e648 */
void f_0C04E648(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C04E64A);
L_0C04E648: BLKS(0x0C04E648u);
	r0 = 0xC04DEACu; UPD(0x0C04E64Au, 1);  /* 0C04E648 mov.l @(disp,pc),Rn */
L_0C04E64A: BLKS(0x0C04E64Au);
	SPIN_SAVE(0C04E64A);
	r1 = RS32(0C04E64A, r0); UPD(0x0C04E64Cu, 1);  /* 0C04E64A mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C04E64C tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04E650u); ; /* slot nop */ if (c_) { SPIN_FFD(0C04E64A, 5); UPD(0x0C04E64Au, 4); goto L_0C04E64A; } goto L_0C04E652; }  /* 0C04E64E bf/s */
L_0C04E652: BLKS(0x0C04E652u);
	r0 = 0xC04DEA8u; UPD(0x0C04E654u, 2);  /* 0C04E652 mov.l @(disp,pc),Rn */
	r1 = 0x1u; UPD(0x0C04E656u, 1);  /* 0C04E654 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C04E658u, 1);  /* 0C04E656 mov.l Rm,@Rn */
	r0 = 0xC04C2A0u; UPD(0x0C04E65Au, 1);  /* 0C04E658 mov.l @(disp,pc),Rn */
	r7 = 0xC04DEA0u; UPD(0x0C04E65Cu, 1);  /* 0C04E65A mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x4u); UPD(0x0C04E65Eu, 1);  /* 0C04E65C mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C04E65E add Rm,Rn */
	r1 = 0x7u; UPD(0x0C04E662u, 2);  /* 0C04E660 mov.l @(disp,pc),Rn */
	r4 &= r1;  /* 0C04E662 and Rm,Rn */
	r1 = 0x38u; UPD(0x0C04E666u, 2);  /* 0C04E664 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r4 * (u32)(u16)r1;  /* 0C04E666 mulu.w Rm,Rn */
	IF(0x0C04E668u); r2 = MACL;  /* 0C04E668 sts macl,Rn */
	W32(r0 + 0x0u, r2); UPD(0x0C04E66Cu, 4);  /* 0C04E66A mov.l Rm,@(disp,Rn) */
	r1 = 0x6u; UPD(0x0C04E66Eu, 1);  /* 0C04E66C mov.l @(disp,pc),Rn */
	W32(r0 + 0x10u, r1); UPD(0x0C04E670u, 1);  /* 0C04E66E mov.l Rm,@(disp,Rn) */
	r1 = 0x1Cu; UPD(0x0C04E672u, 1);  /* 0C04E670 mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C04E672 add Rm,Rn */
	r2 = 0x1C00u; UPD(0x0C04E676u, 2);  /* 0C04E674 mov.l @(disp,pc),Rn */
	T = r3 == r2;  /* 0C04E676 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04E67Au); ; /* slot nop */ if (c_) { UPD(0x0C04E67Eu, 4); goto L_0C04E67E; } goto L_0C04E67C; }  /* 0C04E678 bf/s */
L_0C04E67C: BLKS(0x0C04E67Cu);
	r3 = 0x0u; UPD(0x0C04E67Eu, 2);  /* 0C04E67C mov.l @(disp,pc),Rn */
L_0C04E67E: BLKS(0x0C04E67Eu);
	W32(r7 + 0x4u, r3); UPD(0x0C04E680u, 1);  /* 0C04E67E mov.l Rm,@(disp,Rn) */
	r0 = 0xC04DEA8u; UPD(0x0C04E682u, 1);  /* 0C04E680 mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C04E684u, 1);  /* 0C04E682 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C04E686u, 1);  /* 0C04E684 mov.l Rm,@Rn */
	IF(0x0C04E686u); { u32 t_ = PR; IF(0x0C04E688u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04E686 rts */
}

/* FUN_0c04e7e8 */
void f_0C04E7E8(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C04E7EA);
L_0C04E7E8: BLKS(0x0C04E7E8u);
	r0 = 0xC04DEACu; UPD(0x0C04E7EAu, 1);  /* 0C04E7E8 mov.l @(disp,pc),Rn */
L_0C04E7EA: BLKS(0x0C04E7EAu);
	SPIN_SAVE(0C04E7EA);
	r1 = RS32(0C04E7EA, r0); UPD(0x0C04E7ECu, 1);  /* 0C04E7EA mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C04E7EC tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04E7F0u); ; /* slot nop */ if (c_) { SPIN_FFD(0C04E7EA, 5); UPD(0x0C04E7EAu, 4); goto L_0C04E7EA; } goto L_0C04E7F2; }  /* 0C04E7EE bf/s */
L_0C04E7F2: BLKS(0x0C04E7F2u);
	r0 = 0xC04DEA8u; UPD(0x0C04E7F4u, 2);  /* 0C04E7F2 mov.l @(disp,pc),Rn */
	r1 = 0x1u; UPD(0x0C04E7F6u, 1);  /* 0C04E7F4 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C04E7F8u, 1);  /* 0C04E7F6 mov.l Rm,@Rn */
	r0 = 0xC04C2A0u; UPD(0x0C04E7FAu, 1);  /* 0C04E7F8 mov.l @(disp,pc),Rn */
	r7 = 0xC04DEA0u; UPD(0x0C04E7FCu, 1);  /* 0C04E7FA mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x4u); UPD(0x0C04E7FEu, 1);  /* 0C04E7FC mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C04E7FE add Rm,Rn */
	r1 = 0x7u; UPD(0x0C04E802u, 2);  /* 0C04E800 mov.l @(disp,pc),Rn */
	r4 &= r1;  /* 0C04E802 and Rm,Rn */
	r1 = 0x38u; UPD(0x0C04E806u, 2);  /* 0C04E804 mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r4 * (u32)(u16)r1;  /* 0C04E806 mulu.w Rm,Rn */
	IF(0x0C04E808u); r2 = MACL;  /* 0C04E808 sts macl,Rn */
	W32(r0 + 0x0u, r2); UPD(0x0C04E80Cu, 4);  /* 0C04E80A mov.l Rm,@(disp,Rn) */
	r1 = 0x5u; UPD(0x0C04E80Eu, 1);  /* 0C04E80C mov.l @(disp,pc),Rn */
	W32(r0 + 0x10u, r1); UPD(0x0C04E810u, 1);  /* 0C04E80E mov.l Rm,@(disp,Rn) */
	W32(r0 + 0xCu, r5); UPD(0x0C04E812u, 1);  /* 0C04E810 mov.l Rm,@(disp,Rn) */
	r1 = 0x1Cu; UPD(0x0C04E814u, 1);  /* 0C04E812 mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C04E814 add Rm,Rn */
	r2 = 0x1C00u; UPD(0x0C04E818u, 2);  /* 0C04E816 mov.l @(disp,pc),Rn */
	T = r3 == r2;  /* 0C04E818 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04E81Cu); ; /* slot nop */ if (c_) { UPD(0x0C04E820u, 4); goto L_0C04E820; } goto L_0C04E81E; }  /* 0C04E81A bf/s */
L_0C04E81E: BLKS(0x0C04E81Eu);
	r3 = 0x0u; UPD(0x0C04E820u, 2);  /* 0C04E81E mov.l @(disp,pc),Rn */
L_0C04E820: BLKS(0x0C04E820u);
	W32(r7 + 0x4u, r3); UPD(0x0C04E822u, 1);  /* 0C04E820 mov.l Rm,@(disp,Rn) */
	r0 = 0xC04DEA8u; UPD(0x0C04E824u, 1);  /* 0C04E822 mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C04E826u, 1);  /* 0C04E824 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C04E828u, 1);  /* 0C04E826 mov.l Rm,@Rn */
	IF(0x0C04E828u); { u32 t_ = PR; IF(0x0C04E82Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04E828 rts */
}

void f_0C04E894(sh3_t *c)
{
	LOCALS;
L_0C04E894: BLKS(0x0C04E894u);
	W8(r9 + 0x0u, r0); UPD(0x0C04E896u, 1);  /* 0C04E894 mov.b r0,@(disp,Rn) */
	{ W8(c->gbr + 0xD0u, r0); /* slot mov.b r0,@(disp,gbr) */ UPD(0x0C04E9FAu, 3); goto L_0C04E9FA; }  /* 0C04E896 bra */
L_0C04E9FA: BLKS(0x0C04E9FAu);
	r0 = r2;  /* 0C04E9FA mov Rm,Rn */
	r0 += 0x4u;  /* 0C04E9FC add #imm,Rn */
	r1 = 0xFFFFFFFFu; UPD(0x0C04EA00u, 3);  /* 0C04E9FE mov.l @(disp,pc),Rn */
	IF(0x0C04EA00u); { u32 t_ = r7; PR = 0x0C04EA04u; IF(0x0C04EA02u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04EA04u); }  /* 0C04EA00 jsr @Rn */
L_0C04EA04: BLKS(0x0C04EA04u);
	r0 = r2;  /* 0C04EA04 mov Rm,Rn */
	r0 += 0x5u;  /* 0C04EA06 add #imm,Rn */
	r1 = 0xFFFFFFFFu; UPD(0x0C04EA0Au, 3);  /* 0C04EA08 mov.l @(disp,pc),Rn */
	IF(0x0C04EA0Au); { u32 t_ = r7; PR = 0x0C04EA0Eu; IF(0x0C04EA0Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04EA0Eu); }  /* 0C04EA0A jsr @Rn */
L_0C04EA0E: BLKS(0x0C04EA0Eu);
	r0 = r2;  /* 0C04EA0E mov Rm,Rn */
	r0 += 0x1u;  /* 0C04EA10 add #imm,Rn */
	r1 = 0x0u; UPD(0x0C04EA14u, 3);  /* 0C04EA12 mov.l @(disp,pc),Rn */
	IF(0x0C04EA14u); { u32 t_ = r7; PR = 0x0C04EA18u; IF(0x0C04EA16u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04EA18u); }  /* 0C04EA14 jsr @Rn */
L_0C04EA18: BLKS(0x0C04EA18u);
	{ u32 v_ = R32(r15); r15 += 4; r7 = v_; } UPD(0x0C04EA1Au, 1);  /* 0C04EA18 mov.l @Rm+,Rn */
	IF(0x0C04EA1Au); PR = R32(r15); r15 += 4; UPD(0x0C04EA1Cu, 1);  /* 0C04EA1A lds.l @Rn+,pr */
	IF(0x0C04EA1Cu); { u32 t_ = PR; IF(0x0C04EA1Eu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04EA1C rts */
}

/* FUN_0c04e8a4 */
void f_0C04E8A4(sh3_t *c)
{
	LOCALS;
L_0C04E8A4: BLKS(0x0C04E8A4u);
	IF(0x0C04E8A4u); r15 -= 4; W32(r15, PR); UPD(0x0C04E8A6u, 1);  /* 0C04E8A4 sts.l pr,@-Rn */
	r7 = 0xC04E8E0u; UPD(0x0C04E8A8u, 1);  /* 0C04E8A6 mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C04E8AAu, 1);  /* 0C04E8A8 mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C04E8ACu, 1);  /* 0C04E8AA mov.l @(disp,pc),Rn */
	IF(0x0C04E8ACu); { u32 t_ = r7; PR = 0x0C04E8B0u; IF(0x0C04E8AEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04E8B0u); }  /* 0C04E8AC jsr @Rn */
L_0C04E8B0: BLKS(0x0C04E8B0u);
	r0 = 0x1u; UPD(0x0C04E8B2u, 1);  /* 0C04E8B0 mov.l @(disp,pc),Rn */
	r1 = 0x40u; UPD(0x0C04E8B4u, 1);  /* 0C04E8B2 mov.l @(disp,pc),Rn */
	IF(0x0C04E8B4u); { u32 t_ = r7; PR = 0x0C04E8B8u; IF(0x0C04E8B6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04E8B8u); }  /* 0C04E8B4 jsr @Rn */
L_0C04E8B8: BLKS(0x0C04E8B8u);
	r0 = 0x2u; UPD(0x0C04E8BAu, 1);  /* 0C04E8B8 mov.l @(disp,pc),Rn */
	r1 = 0x30u; UPD(0x0C04E8BCu, 1);  /* 0C04E8BA mov.l @(disp,pc),Rn */
	IF(0x0C04E8BCu); { u32 t_ = r7; PR = 0x0C04E8C0u; IF(0x0C04E8BEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04E8C0u); }  /* 0C04E8BC jsr @Rn */
L_0C04E8C0: BLKS(0x0C04E8C0u);
	IF(0x0C04E8C0u); PR = R32(r15); r15 += 4; UPD(0x0C04E8C2u, 1);  /* 0C04E8C0 lds.l @Rn+,pr */
	IF(0x0C04E8C2u); { u32 t_ = PR; IF(0x0C04E8C4u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04E8C2 rts */
}

/* FUN_0c04e8e0 */
void f_0C04E8E0(sh3_t *c)
{
	LOCALS;
L_0C04E8E0: BLKS(0x0C04E8E0u);
	{ u32 v_ = r2; r15 -= 4; W32(r15, v_); } UPD(0x0C04E8E2u, 1);  /* 0C04E8E0 mov.l Rm,@-Rn */
	{ u32 v_ = r3; r15 -= 4; W32(r15, v_); } UPD(0x0C04E8E4u, 1);  /* 0C04E8E2 mov.l Rm,@-Rn */
	r2 = 0xB0400000u; UPD(0x0C04E8E6u, 1);  /* 0C04E8E4 mov.l @(disp,pc),Rn */
	r3 = 0xB0400001u; UPD(0x0C04E8E8u, 1);  /* 0C04E8E6 mov.l @(disp,pc),Rn */
	W8(r2, r0); UPD(0x0C04E8EAu, 1);  /* 0C04E8E8 mov.b Rm,@Rn */
	W8(r3, r1); UPD(0x0C04E8ECu, 1);  /* 0C04E8EA mov.b Rm,@Rn */
	{ u32 v_ = R32(r15); r15 += 4; r3 = v_; } UPD(0x0C04E8EEu, 1);  /* 0C04E8EC mov.l @Rm+,Rn */
	IF(0x0C04E8EEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r2 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04E8EE rts */
}

/* FUN_0c04e8fc */
void f_0C04E8FC(sh3_t *c)
{
	LOCALS;
L_0C04E8FC: BLKS(0x0C04E8FCu);
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C04E8FEu, 1);  /* 0C04E8FC mov.l Rm,@-Rn */
	IF(0x0C04E8FEu); r15 -= 4; W32(r15, PR); UPD(0x0C04E900u, 1);  /* 0C04E8FE sts.l pr,@-Rn */
	r13 = 0xC04E8E0u; UPD(0x0C04E902u, 1);  /* 0C04E900 mov.l @(disp,pc),Rn */
	r0 = 0xC04E894u; UPD(0x0C04E904u, 1);  /* 0C04E902 mov.l @(disp,pc),Rn */
	IF(0x0C04E904u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C04E906u, 1);  /* 0C04E904 mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C04E906 mov Rm,Rn */
	IF(0x0C04E908u); { u32 t_ = r13; PR = 0x0C04E90Cu; r1 = r5; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04E90Cu); }  /* 0C04E908 jsr @Rn */
L_0C04E90C: BLKS(0x0C04E90Cu);
	r0 = r2;  /* 0C04E90C mov Rm,Rn */
	r0 += 0x2u;  /* 0C04E90E add #imm,Rn */
	r1 = 0x0u; UPD(0x0C04E912u, 3);  /* 0C04E910 mov.l @(disp,pc),Rn */
	IF(0x0C04E912u); { u32 t_ = r13; PR = 0x0C04E916u; IF(0x0C04E914u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04E916u); }  /* 0C04E912 jsr @Rn */
L_0C04E916: BLKS(0x0C04E916u);
	r0 = r2;  /* 0C04E916 mov Rm,Rn */
	r0 += 0x3u;  /* 0C04E918 add #imm,Rn */
	IF(0x0C04E91Au); { u32 t_ = r13; PR = 0x0C04E91Eu; IF(0x0C04E91Cu); ; /* slot nop */ UPD(t_, 4); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04E91Eu); }  /* 0C04E91A jsr @Rn */
L_0C04E91E: BLKS(0x0C04E91Eu);
	r0 = r2;  /* 0C04E91E mov Rm,Rn */
	r0 += 0x4u;  /* 0C04E920 add #imm,Rn */
	IF(0x0C04E922u); { u32 t_ = r13; PR = 0x0C04E926u; r1 = r4; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04E926u); }  /* 0C04E922 jsr @Rn */
L_0C04E926: BLKS(0x0C04E926u);
	r0 = r2;  /* 0C04E926 mov Rm,Rn */
	r0 += 0x5u;  /* 0C04E928 add #imm,Rn */
	IF(0x0C04E92Au); { u32 t_ = r13; PR = 0x0C04E92Eu; r1 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04E92Eu); }  /* 0C04E92A jsr @Rn */
L_0C04E92E: BLKS(0x0C04E92Eu);
	r0 = r2;  /* 0C04E92E mov Rm,Rn */
	r0 += 0x6u;  /* 0C04E930 add #imm,Rn */
	IF(0x0C04E932u); { u32 t_ = r13; PR = 0x0C04E936u; r1 = r4; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04E936u); }  /* 0C04E932 jsr @Rn */
L_0C04E936: BLKS(0x0C04E936u);
	r0 = r2;  /* 0C04E936 mov Rm,Rn */
	r0 += 0x7u;  /* 0C04E938 add #imm,Rn */
	r1 = 0x1u; UPD(0x0C04E93Cu, 3);  /* 0C04E93A mov.l @(disp,pc),Rn */
	IF(0x0C04E93Cu); { u32 t_ = r13; PR = 0x0C04E940u; IF(0x0C04E93Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04E940u); }  /* 0C04E93C jsr @Rn */
L_0C04E940: BLKS(0x0C04E940u);
	r0 = r2;  /* 0C04E940 mov Rm,Rn */
	r0 += 0x1u;  /* 0C04E942 add #imm,Rn */
	r1 = 0x2u; UPD(0x0C04E946u, 3);  /* 0C04E944 mov.l @(disp,pc),Rn */
	T = (r7 & r7) == 0;  /* 0C04E946 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C04E94Au); ; /* slot nop */ if (c_) { UPD(0x0C04E950u, 4); goto L_0C04E950; } goto L_0C04E94C; }  /* 0C04E948 bt/s */
L_0C04E94C: BLKS(0x0C04E94Cu);
	r2 = 0x1u; UPD(0x0C04E94Eu, 2);  /* 0C04E94C mov.l @(disp,pc),Rn */
	r1 |= r2;  /* 0C04E94E or Rm,Rn */
	UPD(0x0C04E950u, 1);
L_0C04E950: BLKS(0x0C04E950u);
	IF(0x0C04E950u); { u32 t_ = r13; PR = 0x0C04E954u; IF(0x0C04E952u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04E954u); }  /* 0C04E950 jsr @Rn */
L_0C04E954: BLKS(0x0C04E954u);
	IF(0x0C04E954u); PR = R32(r15); r15 += 4; UPD(0x0C04E956u, 1);  /* 0C04E954 lds.l @Rn+,pr */
	IF(0x0C04E956u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r13 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04E956 rts */
}

/* FUN_0c04e9e8 */
void f_0C04E9E8(sh3_t *c)
{
	LOCALS;
L_0C04E9E8: BLKS(0x0C04E9E8u);
	IF(0x0C04E9E8u); r15 -= 4; W32(r15, PR); UPD(0x0C04E9EAu, 1);  /* 0C04E9E8 sts.l pr,@-Rn */
	{ u32 v_ = r7; r15 -= 4; W32(r15, v_); } UPD(0x0C04E9ECu, 1);  /* 0C04E9EA mov.l Rm,@-Rn */
	r7 = 0xC04E8E0u; UPD(0x0C04E9EEu, 1);  /* 0C04E9EC mov.l @(disp,pc),Rn */
	r0 = 0x7u; UPD(0x0C04E9F0u, 1);  /* 0C04E9EE mov.l @(disp,pc),Rn */
	r4 &= r0;  /* 0C04E9F0 and Rm,Rn */
	r0 = 0xC04E894u; UPD(0x0C04E9F4u, 2);  /* 0C04E9F2 mov.l @(disp,pc),Rn */
	IF(0x0C04E9F4u); r0 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C04E9F6u, 1);  /* 0C04E9F4 mov.b @(r0,Rm),Rn */
	r2 = r0;  /* 0C04E9F6 mov Rm,Rn */
	r0 += 0x1u;  /* 0C04E9F8 add #imm,Rn */
	r0 = r2;  /* 0C04E9FA mov Rm,Rn */
	r0 += 0x4u;  /* 0C04E9FC add #imm,Rn */
	r1 = 0xFFFFFFFFu; UPD(0x0C04EA00u, 5);  /* 0C04E9FE mov.l @(disp,pc),Rn */
	IF(0x0C04EA00u); { u32 t_ = r7; PR = 0x0C04EA04u; IF(0x0C04EA02u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04EA04u); }  /* 0C04EA00 jsr @Rn */
L_0C04EA04: BLKS(0x0C04EA04u);
	r0 = r2;  /* 0C04EA04 mov Rm,Rn */
	r0 += 0x5u;  /* 0C04EA06 add #imm,Rn */
	r1 = 0xFFFFFFFFu; UPD(0x0C04EA0Au, 3);  /* 0C04EA08 mov.l @(disp,pc),Rn */
	IF(0x0C04EA0Au); { u32 t_ = r7; PR = 0x0C04EA0Eu; IF(0x0C04EA0Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04EA0Eu); }  /* 0C04EA0A jsr @Rn */
L_0C04EA0E: BLKS(0x0C04EA0Eu);
	r0 = r2;  /* 0C04EA0E mov Rm,Rn */
	r0 += 0x1u;  /* 0C04EA10 add #imm,Rn */
	r1 = 0x0u; UPD(0x0C04EA14u, 3);  /* 0C04EA12 mov.l @(disp,pc),Rn */
	IF(0x0C04EA14u); { u32 t_ = r7; PR = 0x0C04EA18u; IF(0x0C04EA16u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04EA18u); }  /* 0C04EA14 jsr @Rn */
L_0C04EA18: BLKS(0x0C04EA18u);
	{ u32 v_ = R32(r15); r15 += 4; r7 = v_; } UPD(0x0C04EA1Au, 1);  /* 0C04EA18 mov.l @Rm+,Rn */
	IF(0x0C04EA1Au); PR = R32(r15); r15 += 4; UPD(0x0C04EA1Cu, 1);  /* 0C04EA1A lds.l @Rn+,pr */
	IF(0x0C04EA1Cu); { u32 t_ = PR; IF(0x0C04EA1Eu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04EA1C rts */
}

/* FUN_0c04ea34 */
void f_0C04EA34(sh3_t *c)
{
	LOCALS;
L_0C04EA34: BLKS(0x0C04EA34u);
	IF(0x0C04EA34u); r15 -= 4; W32(r15, PR); UPD(0x0C04EA36u, 1);  /* 0C04EA34 sts.l pr,@-Rn */
	r7 = 0xC04E8E0u; UPD(0x0C04EA38u, 1);  /* 0C04EA36 mov.l @(disp,pc),Rn */
	r0 = 0x7u; UPD(0x0C04EA3Au, 1);  /* 0C04EA38 mov.l @(disp,pc),Rn */
	r4 &= r0;  /* 0C04EA3A and Rm,Rn */
	r0 = 0xC04E89Cu; UPD(0x0C04EA3Eu, 2);  /* 0C04EA3C mov.l @(disp,pc),Rn */
	IF(0x0C04EA3Eu); r0 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C04EA40u, 1);  /* 0C04EA3E mov.b @(r0,Rm),Rn */
	r0 += 0x1u;  /* 0C04EA40 add #imm,Rn */
	r1 = r6;  /* 0C04EA42 mov Rm,Rn */
	IF(0x0C04EA44u); { u32 t_ = r7; PR = 0x0C04EA48u; IF(0x0C04EA46u); ; /* slot nop */ UPD(t_, 4); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04EA48u); }  /* 0C04EA44 jsr @Rn */
L_0C04EA48: BLKS(0x0C04EA48u);
	IF(0x0C04EA48u); PR = R32(r15); r15 += 4; UPD(0x0C04EA4Au, 1);  /* 0C04EA48 lds.l @Rn+,pr */
	IF(0x0C04EA4Au); { u32 t_ = PR; IF(0x0C04EA4Cu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04EA4A rts */
}

/* FUN_0c04ea5c */
void f_0C04EA5C(sh3_t *c)
{
	LOCALS;
L_0C04EA5C: BLKS(0x0C04EA5Cu);
	IF(0x0C04EA5Cu); r15 -= 4; W32(r15, PR); UPD(0x0C04EA5Eu, 1);  /* 0C04EA5C sts.l pr,@-Rn */
	{ u32 v_ = r7; r15 -= 4; W32(r15, v_); } UPD(0x0C04EA60u, 1);  /* 0C04EA5E mov.l Rm,@-Rn */
	r7 = 0xC04E8E0u; UPD(0x0C04EA62u, 1);  /* 0C04EA60 mov.l @(disp,pc),Rn */
	r0 = 0x7u; UPD(0x0C04EA64u, 1);  /* 0C04EA62 mov.l @(disp,pc),Rn */
	r4 &= r0;  /* 0C04EA64 and Rm,Rn */
	r0 = 0xC04E89Cu; UPD(0x0C04EA68u, 2);  /* 0C04EA66 mov.l @(disp,pc),Rn */
	IF(0x0C04EA68u); r0 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C04EA6Au, 1);  /* 0C04EA68 mov.b @(r0,Rm),Rn */
	r1 = r5;  /* 0C04EA6A mov Rm,Rn */
	IF(0x0C04EA6Cu); { u32 t_ = r7; PR = 0x0C04EA70u; IF(0x0C04EA6Eu); ; /* slot nop */ UPD(t_, 3); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04EA70u); }  /* 0C04EA6C jsr @Rn */
L_0C04EA70: BLKS(0x0C04EA70u);
	r0 += 0x1u;  /* 0C04EA70 add #imm,Rn */
	r1 = r6;  /* 0C04EA72 mov Rm,Rn */
	IF(0x0C04EA74u); { u32 t_ = r7; PR = 0x0C04EA78u; IF(0x0C04EA76u); ; /* slot nop */ UPD(t_, 4); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04EA78u); }  /* 0C04EA74 jsr @Rn */
L_0C04EA78: BLKS(0x0C04EA78u);
	r0 += 0x1u;  /* 0C04EA78 add #imm,Rn */
	r1 = 0x8u; UPD(0x0C04EA7Cu, 2);  /* 0C04EA7A mov.l @(disp,pc),Rn */
	IF(0x0C04EA7Cu); { u32 t_ = r7; PR = 0x0C04EA80u; IF(0x0C04EA7Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04EA80u); }  /* 0C04EA7C jsr @Rn */
L_0C04EA80: BLKS(0x0C04EA80u);
	r0 += 0x1u;  /* 0C04EA80 add #imm,Rn */
	r1 = 0x2u; UPD(0x0C04EA84u, 2);  /* 0C04EA82 mov.l @(disp,pc),Rn */
	IF(0x0C04EA84u); { u32 t_ = r7; PR = 0x0C04EA88u; IF(0x0C04EA86u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04EA88u); }  /* 0C04EA84 jsr @Rn */
L_0C04EA88: BLKS(0x0C04EA88u);
	{ u32 v_ = R32(r15); r15 += 4; r7 = v_; } UPD(0x0C04EA8Au, 1);  /* 0C04EA88 mov.l @Rm+,Rn */
	IF(0x0C04EA8Au); PR = R32(r15); r15 += 4; UPD(0x0C04EA8Cu, 1);  /* 0C04EA8A lds.l @Rn+,pr */
	IF(0x0C04EA8Cu); { u32 t_ = PR; IF(0x0C04EA8Eu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04EA8C rts */
}

/* FUN_0c04eaa4 */
void f_0C04EAA4(sh3_t *c)
{
	LOCALS;
L_0C04EAA4: BLKS(0x0C04EAA4u);
	IF(0x0C04EAA4u); r15 -= 4; W32(r15, PR); UPD(0x0C04EAA6u, 1);  /* 0C04EAA4 sts.l pr,@-Rn */
	{ u32 v_ = r7; r15 -= 4; W32(r15, v_); } UPD(0x0C04EAA8u, 1);  /* 0C04EAA6 mov.l Rm,@-Rn */
	r7 = 0xC04E8E0u; UPD(0x0C04EAAAu, 1);  /* 0C04EAA8 mov.l @(disp,pc),Rn */
	r0 = 0x7u; UPD(0x0C04EAACu, 1);  /* 0C04EAAA mov.l @(disp,pc),Rn */
	r4 &= r0;  /* 0C04EAAC and Rm,Rn */
	r0 = 0xC04E89Cu; UPD(0x0C04EAB0u, 2);  /* 0C04EAAE mov.l @(disp,pc),Rn */
	IF(0x0C04EAB0u); r0 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C04EAB2u, 1);  /* 0C04EAB0 mov.b @(r0,Rm),Rn */
	r1 = r5;  /* 0C04EAB2 mov Rm,Rn */
	IF(0x0C04EAB4u); { u32 t_ = r7; PR = 0x0C04EAB8u; IF(0x0C04EAB6u); ; /* slot nop */ UPD(t_, 3); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04EAB8u); }  /* 0C04EAB4 jsr @Rn */
L_0C04EAB8: BLKS(0x0C04EAB8u);
	r0 += 0x1u;  /* 0C04EAB8 add #imm,Rn */
	r1 = r6;  /* 0C04EABA mov Rm,Rn */
	IF(0x0C04EABCu); { u32 t_ = r7; PR = 0x0C04EAC0u; IF(0x0C04EABEu); ; /* slot nop */ UPD(t_, 4); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04EAC0u); }  /* 0C04EABC jsr @Rn */
L_0C04EAC0: BLKS(0x0C04EAC0u);
	r0 += 0x1u;  /* 0C04EAC0 add #imm,Rn */
	r1 = 0x8u; UPD(0x0C04EAC4u, 2);  /* 0C04EAC2 mov.l @(disp,pc),Rn */
	IF(0x0C04EAC4u); { u32 t_ = r7; PR = 0x0C04EAC8u; IF(0x0C04EAC6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04EAC8u); }  /* 0C04EAC4 jsr @Rn */
L_0C04EAC8: BLKS(0x0C04EAC8u);
	r0 += 0x1u;  /* 0C04EAC8 add #imm,Rn */
	r1 = 0x3u; UPD(0x0C04EACCu, 2);  /* 0C04EACA mov.l @(disp,pc),Rn */
	IF(0x0C04EACCu); { u32 t_ = r7; PR = 0x0C04EAD0u; IF(0x0C04EACEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04EAD0u); }  /* 0C04EACC jsr @Rn */
L_0C04EAD0: BLKS(0x0C04EAD0u);
	{ u32 v_ = R32(r15); r15 += 4; r7 = v_; } UPD(0x0C04EAD2u, 1);  /* 0C04EAD0 mov.l @Rm+,Rn */
	IF(0x0C04EAD2u); PR = R32(r15); r15 += 4; UPD(0x0C04EAD4u, 1);  /* 0C04EAD2 lds.l @Rn+,pr */
	IF(0x0C04EAD4u); { u32 t_ = PR; IF(0x0C04EAD6u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04EAD4 rts */
}

/* FUN_0c04eaec */
void f_0C04EAEC(sh3_t *c)
{
	LOCALS;
L_0C04EAEC: BLKS(0x0C04EAECu);
	IF(0x0C04EAECu); r15 -= 4; W32(r15, PR); UPD(0x0C04EAEEu, 1);  /* 0C04EAEC sts.l pr,@-Rn */
	{ u32 v_ = r7; r15 -= 4; W32(r15, v_); } UPD(0x0C04EAF0u, 1);  /* 0C04EAEE mov.l Rm,@-Rn */
	r7 = 0xC04E8E0u; UPD(0x0C04EAF2u, 1);  /* 0C04EAF0 mov.l @(disp,pc),Rn */
	r0 = 0x7u; UPD(0x0C04EAF4u, 1);  /* 0C04EAF2 mov.l @(disp,pc),Rn */
	r4 &= r0;  /* 0C04EAF4 and Rm,Rn */
	r0 = 0xC04E89Cu; UPD(0x0C04EAF8u, 2);  /* 0C04EAF6 mov.l @(disp,pc),Rn */
	IF(0x0C04EAF8u); r0 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C04EAFAu, 1);  /* 0C04EAF8 mov.b @(r0,Rm),Rn */
	r0 += 0x1u;  /* 0C04EAFA add #imm,Rn */
	r1 = 0x0u; UPD(0x0C04EAFEu, 2);  /* 0C04EAFC mov.l @(disp,pc),Rn */
	IF(0x0C04EAFEu); { u32 t_ = r7; PR = 0x0C04EB02u; IF(0x0C04EB00u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04EB02u); }  /* 0C04EAFE jsr @Rn */
L_0C04EB02: BLKS(0x0C04EB02u);
	r0 += 0x2u;  /* 0C04EB02 add #imm,Rn */
	r1 = 0x0u; UPD(0x0C04EB06u, 2);  /* 0C04EB04 mov.l @(disp,pc),Rn */
	IF(0x0C04EB06u); { u32 t_ = r7; PR = 0x0C04EB0Au; { u32 v_ = R32(r15); r15 += 4; r7 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 2); CALLP(t_, f_0C04E8E0, 0x0C04E8E0u, 0x0C04EB0Au); }  /* 0C04EB06 jsr @Rn */
L_0C04EB0A: BLKS(0x0C04EB0Au);
	IF(0x0C04EB0Au); PR = R32(r15); r15 += 4; UPD(0x0C04EB0Cu, 1);  /* 0C04EB0A lds.l @Rn+,pr */
	IF(0x0C04EB0Cu); { u32 t_ = PR; IF(0x0C04EB0Eu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04EB0C rts */
}

/* workram_entry */
void f_0C04EB20(sh3_t *c)
{
	LOCALS;
L_0C04EB20: BLKS(0x0C04EB20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C04EB22u, 1);  /* 0C04EB20 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C04EB24u, 1);  /* 0C04EB22 mov.l Rm,@-Rn */
	r2 = 0xC049F54u; UPD(0x0C04EB26u, 1);  /* 0C04EB24 mov.l @(disp,pc),Rn */
	IF(0x0C04EB26u); r15 -= 4; W32(r15, PR); UPD(0x0C04EB28u, 1);  /* 0C04EB26 sts.l pr,@-Rn */
	r8 = 0xC04A1A8u; UPD(0x0C04EB2Au, 1);  /* 0C04EB28 mov.l @(disp,pc),Rn */
	IF(0x0C04EB2Au); { u32 t_ = r2; PR = 0x0C04EB2Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C049F54, 0x0C049F54u, 0x0C04EB2Eu); }  /* 0C04EB2A jsr @Rn */
L_0C04EB2E: BLKS(0x0C04EB2Eu);
	IF(0x0C04EB2Eu); { u32 t_ = r8; PR = 0x0C04EB32u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04A1A8, 0x0C04A1A8u, 0x0C04EB32u); }  /* 0C04EB2E jsr @Rn */
L_0C04EB32: BLKS(0x0C04EB32u);
	IF(0x0C04EB32u); { u32 t_ = r8; PR = 0x0C04EB36u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04A1A8, 0x0C04A1A8u, 0x0C04EB36u); }  /* 0C04EB32 jsr @Rn */
L_0C04EB36: BLKS(0x0C04EB36u);
	r0 = 0xC04A0BCu; UPD(0x0C04EB38u, 1);  /* 0C04EB36 mov.l @(disp,pc),Rn */
	r8 = 0xC0B0200u; UPD(0x0C04EB3Au, 1);  /* 0C04EB38 mov.l @(disp,pc),Rn */
	IF(0x0C04EB3Au); { u32 t_ = r0; PR = 0x0C04EB3Eu; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04A0BC, 0x0C04A0BCu, 0x0C04EB3Eu); }  /* 0C04EB3A jsr @Rn */
L_0C04EB3E: BLKS(0x0C04EB3Eu);
	r7 = 0xC04B5E4u; UPD(0x0C04EB40u, 1);  /* 0C04EB3E mov.l @(disp,pc),Rn */
	IF(0x0C04EB40u); { u32 t_ = r7; PR = 0x0C04EB44u; IF(0x0C04EB42u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04B5E4, 0x0C04B5E4u, 0x0C04EB44u); }  /* 0C04EB40 jsr @Rn */
L_0C04EB44: BLKS(0x0C04EB44u);
	IF(0x0C04EB44u); { u32 t_ = r8; PR = 0x0C04EB48u; IF(0x0C04EB46u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B0200, 0x0C0B0200u, 0x0C04EB48u); }  /* 0C04EB44 jsr @Rn */
L_0C04EB48: BLKS(0x0C04EB48u);
	r5 = 0xC04BCA8u; UPD(0x0C04EB4Au, 1);  /* 0C04EB48 mov.l @(disp,pc),Rn */
	IF(0x0C04EB4Au); { u32 t_ = r5; PR = 0x0C04EB4Eu; IF(0x0C04EB4Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04BCA8, 0x0C04BCA8u, 0x0C04EB4Eu); }  /* 0C04EB4A jsr @Rn */
L_0C04EB4E: BLKS(0x0C04EB4Eu);
	r6 = 0xC04A098u; UPD(0x0C04EB50u, 1);  /* 0C04EB4E mov.l @(disp,pc),Rn */
	r4 = 0xC0503F0u; UPD(0x0C04EB52u, 1);  /* 0C04EB50 mov.l @(disp,pc),Rn */
	IF(0x0C04EB52u); { u32 t_ = r6; PR = 0x0C04EB56u; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04A098, 0x0C04A098u, 0x0C04EB56u); }  /* 0C04EB52 jsr @Rn */
L_0C04EB56: BLKS(0x0C04EB56u);
	r4 = 0xC04E38Cu; UPD(0x0C04EB58u, 1);  /* 0C04EB56 mov.l @(disp,pc),Rn */
	IF(0x0C04EB58u); { u32 t_ = r4; PR = 0x0C04EB5Cu; IF(0x0C04EB5Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E38C, 0x0C04E38Cu, 0x0C04EB5Cu); }  /* 0C04EB58 jsr @Rn */
L_0C04EB5C: BLKS(0x0C04EB5Cu);
	r3 = 0xC04E458u; UPD(0x0C04EB5Eu, 1);  /* 0C04EB5C mov.l @(disp,pc),Rn */
	r4 = 0xC0B1540u; UPD(0x0C04EB60u, 1);  /* 0C04EB5E mov.l @(disp,pc),Rn */
	IF(0x0C04EB60u); { u32 t_ = r3; PR = 0x0C04EB64u; IF(0x0C04EB62u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E458, 0x0C04E458u, 0x0C04EB64u); }  /* 0C04EB60 jsr @Rn */
L_0C04EB64: BLKS(0x0C04EB64u);
	r2 = 0xC04E464u; UPD(0x0C04EB66u, 1);  /* 0C04EB64 mov.l @(disp,pc),Rn */
	r4 = 0xC0B1940u; UPD(0x0C04EB68u, 1);  /* 0C04EB66 mov.l @(disp,pc),Rn */
	IF(0x0C04EB68u); { u32 t_ = r2; PR = 0x0C04EB6Cu; IF(0x0C04EB6Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04E464, 0x0C04E464u, 0x0C04EB6Cu); }  /* 0C04EB68 jsr @Rn */
L_0C04EB6C: BLKS(0x0C04EB6Cu);
	r0 = 0xC21F5CCu; UPD(0x0C04EB6Eu, 1);  /* 0C04EB6C mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C04EB6E mov #imm,Rn */
	W32(r0, r1); UPD(0x0C04EB72u, 2);  /* 0C04EB70 mov.l Rm,@Rn */
	r0 = 0xC04EBC0u; UPD(0x0C04EB74u, 1);  /* 0C04EB72 mov.l @(disp,pc),Rn */
	IF(0x0C04EB74u); { u32 t_ = r0; PR = 0x0C04EB78u; IF(0x0C04EB76u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04EBC0, 0x0C04EBC0u, 0x0C04EB78u); }  /* 0C04EB74 jsr @Rn */
L_0C04EB78: BLKS(0x0C04EB78u);
	r0 = 0x0u;  /* 0C04EB78 mov #imm,Rn */
	r15 = r14;  /* 0C04EB7A mov Rm,Rn */
	IF(0x0C04EB7Cu); PR = R32(r15); r15 += 4; UPD(0x0C04EB7Eu, 3);  /* 0C04EB7C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C04EB80u, 1);  /* 0C04EB7E mov.l @Rm+,Rn */
	IF(0x0C04EB80u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04EB80 rts */
}

/* game_main */
void f_0C04EBC0(sh3_t *c)
{
	LOCALS;
L_0C04EBC0: BLKS(0x0C04EBC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C04EBC2u, 1);  /* 0C04EBC0 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C04EBC2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04EBC6u, 2);  /* 0C04EBC4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C04EBC8u, 1);  /* 0C04EBC6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C04EBCAu, 1);  /* 0C04EBC8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C04EBCCu, 1);  /* 0C04EBCA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C04EBCEu, 1);  /* 0C04EBCC mov.l Rm,@-Rn */
	r12 = 0xC04A0BCu; UPD(0x0C04EBD0u, 1);  /* 0C04EBCE mov.l @(disp,pc),Rn */
	IF(0x0C04EBD0u); r15 -= 4; W32(r15, PR); UPD(0x0C04EBD2u, 1);  /* 0C04EBD0 sts.l pr,@-Rn */
	IF(0x0C04EBD2u); { u32 t_ = r12; PR = 0x0C04EBD6u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04A0BC, 0x0C04A0BCu, 0x0C04EBD6u); }  /* 0C04EBD2 jsr @Rn */
L_0C04EBD6: BLKS(0x0C04EBD6u);
	r4 = 0xC21CCE0u; UPD(0x0C04EBD8u, 1);  /* 0C04EBD6 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C04EBD8 mov #imm,Rn */
	W8(r4, r1); UPD(0x0C04EBDCu, 2);  /* 0C04EBDA mov.b Rm,@Rn */
	r3 = 0xC286724u; UPD(0x0C04EBDEu, 1);  /* 0C04EBDC mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C04EBDE mov #imm,Rn */
	W8(r3, r4); UPD(0x0C04EBE2u, 2);  /* 0C04EBE0 mov.b Rm,@Rn */
	r7 = 0xC21F5E1u; UPD(0x0C04EBE4u, 1);  /* 0C04EBE2 mov.l @(disp,pc),Rn */
	r3 = 0x1u;  /* 0C04EBE4 mov #imm,Rn */
	r0 = 0xC21E106u; UPD(0x0C04EBE8u, 2);  /* 0C04EBE6 mov.l @(disp,pc),Rn */
	r10 = 0xC283540u; UPD(0x0C04EBEAu, 1);  /* 0C04EBE8 mov.l @(disp,pc),Rn */
	r9 = 0xC275DBCu; UPD(0x0C04EBECu, 1);  /* 0C04EBEA mov.l @(disp,pc),Rn */
	r8 = 0xC26C8CCu; UPD(0x0C04EBEEu, 1);  /* 0C04EBEC mov.l @(disp,pc),Rn */
	r6 = 0xC220C3Cu; UPD(0x0C04EBF0u, 1);  /* 0C04EBEE mov.l @(disp,pc),Rn */
	W8(r7, r4); UPD(0x0C04EBF2u, 1);  /* 0C04EBF0 mov.b Rm,@Rn */
	W8(r10, r4); UPD(0x0C04EBF4u, 1);  /* 0C04EBF2 mov.b Rm,@Rn */
	W8(r9, r4); UPD(0x0C04EBF6u, 1);  /* 0C04EBF4 mov.b Rm,@Rn */
	W8(r8, r4); UPD(0x0C04EBF8u, 1);  /* 0C04EBF6 mov.b Rm,@Rn */
	W8(r6, r3); UPD(0x0C04EBFAu, 1);  /* 0C04EBF8 mov.b Rm,@Rn */
	W8(r0, r3); UPD(0x0C04EBFCu, 1);  /* 0C04EBFA mov.b Rm,@Rn */
	r5 = 0xB8000050u; UPD(0x0C04EBFEu, 1);  /* 0C04EBFC mov.l @(disp,pc),Rn */
	r2 = 0xC28626Cu; UPD(0x0C04EC00u, 1);  /* 0C04EBFE mov.l @(disp,pc),Rn */
	r0 = R32(r5); UPD(0x0C04EC02u, 1);  /* 0C04EC00 mov.l @Rm,Rn */
	r11 = 0xC3929AEu; UPD(0x0C04EC04u, 1);  /* 0C04EC02 mov.l @(disp,pc),Rn */
	W32(r2, r0); UPD(0x0C04EC06u, 1);  /* 0C04EC04 mov.l Rm,@Rn */
	r7 = 0xC21F7F9u; UPD(0x0C04EC08u, 1);  /* 0C04EC06 mov.l @(disp,pc),Rn */
	r0 &= 0x2u;  /* 0C04EC08 and #imm,r0 */
	W16(r11, r4); UPD(0x0C04EC0Cu, 2);  /* 0C04EC0A mov.w Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C04EC0C tst Rm,Rn */
	{ u32 c_ = T; W8(r7, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C04EC2Au, 4); goto L_0C04EC2A; } UPD(0x0C04EC12u, 1); goto L_0C04EC12; }  /* 0C04EC0E bt/s */
L_0C04EC12: BLKS(0x0C04EC12u);
	r6 = 0xA4000126u; UPD(0x0C04EC14u, 1);  /* 0C04EC12 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C04EC16u, 1);  /* 0C04EC14 mov.b @Rm,Rn */
	r6 += 0xEu;  /* 0C04EC16 add #imm,Rn */
	T = (r0 & 0x30u) == 0;  /* 0C04EC18 tst #imm,r0 */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C04EC1Cu, 3);  /* 0C04EC1A mov.b @Rm,Rn */
	IF(0x0C04EC1Cu); r5 = T;  /* 0C04EC1C movt Rn */
	T = (r0 & 0x30u) == 0;  /* 0C04EC1E tst #imm,r0 */
	IF(0x0C04EC20u); r2 = T;  /* 0C04EC20 movt Rn */
	r5 |= r2;  /* 0C04EC22 or Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C04EC24 tst Rm,Rn */
	if (T) { UPD(0x0C04EC2Au, 8); goto L_0C04EC2A; }  /* 0C04EC26 bt */
L_0C04EC28: BLKS(0x0C04EC28u);
	W8(r7, r3); UPD(0x0C04EC2Au, 1);  /* 0C04EC28 mov.b Rm,@Rn */
L_0C04EC2A: BLKS(0x0C04EC2Au);
	r5 = 0xB8000000u; UPD(0x0C04EC2Cu, 1);  /* 0C04EC2A mov.l @(disp,pc),Rn */
	r11 = 0xC0AFE40u; UPD(0x0C04EC2Eu, 1);  /* 0C04EC2C mov.l @(disp,pc),Rn */
	r3 = 0xC2864A4u; UPD(0x0C04EC30u, 1);  /* 0C04EC2E mov.l @(disp,pc),Rn */
	r12 = R32(r5); UPD(0x0C04EC32u, 1);  /* 0C04EC30 mov.l @Rm,Rn */
	IF(0x0C04EC32u); { u32 t_ = r11; PR = 0x0C04EC36u; W32(r3, r12); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C04EC36u); }  /* 0C04EC32 jsr @Rn */
L_0C04EC36: BLKS(0x0C04EC36u);
	r7 = 0xC275DD1u; UPD(0x0C04EC38u, 1);  /* 0C04EC36 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C04EC38 mov #imm,Rn */
	W8(r7, r3); UPD(0x0C04EC3Cu, 2);  /* 0C04EC3A mov.b Rm,@Rn */
	r7 = 0xC275DCCu; UPD(0x0C04EC3Eu, 1);  /* 0C04EC3C mov.l @(disp,pc),Rn */
	r11 = 0x12345678u; UPD(0x0C04EC40u, 1);  /* 0C04EC3E mov.l @(disp,pc),Rn */
	r10 = R32(r7); UPD(0x0C04EC42u, 1);  /* 0C04EC40 mov.l @Rm,Rn */
	r4 = 0xC21F7F9u; UPD(0x0C04EC44u, 1);  /* 0C04EC42 mov.l @(disp,pc),Rn */
	T = r10 == r11;  /* 0C04EC44 cmp/eq Rm,Rn */
	r10 = 0xFFFFFFFFu;  /* 0C04EC46 mov #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r4); UPD(0x0C04EC4Au, 3);  /* 0C04EC48 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r10, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C04EC4A negc Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C04EC4C tst Rm,Rn */
	IF(0x0C04EC4Eu); r8 = T;  /* 0C04EC4E movt Rn */
	r0 |= r8;  /* 0C04EC50 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04EC52 tst Rm,Rn */
	if (!T) { UPD(0x0C04EC5Au, 8); goto L_0C04EC5A; }  /* 0C04EC54 bf */
L_0C04EC56: BLKS(0x0C04EC56u);
	{ IF(0x0C04EC58u); ; /* slot nop */ UPD(0x0C04EDA0u, 3); goto L_0C04EDA0; }  /* 0C04EC56 bra */
L_0C04EC5A: BLKS(0x0C04EC5Au);
	W32(r7, r11); UPD(0x0C04EC5Cu, 1);  /* 0C04EC5A mov.l Rm,@Rn */
	r1 = 0x0u;  /* 0C04EC5C mov #imm,Rn */
	r5 = 0xC220C5Cu; UPD(0x0C04EC60u, 2);  /* 0C04EC5E mov.l @(disp,pc),Rn */
	r7 = 0xC286752u; UPD(0x0C04EC62u, 1);  /* 0C04EC60 mov.l @(disp,pc),Rn */
	r6 = 0xC220C34u; UPD(0x0C04EC64u, 1);  /* 0C04EC62 mov.l @(disp,pc),Rn */
	r0 = 0xC286298u; UPD(0x0C04EC66u, 1);  /* 0C04EC64 mov.l @(disp,pc),Rn */
	W8(r5, r3); UPD(0x0C04EC68u, 1);  /* 0C04EC66 mov.b Rm,@Rn */
	W8(r7, r3); UPD(0x0C04EC6Au, 1);  /* 0C04EC68 mov.b Rm,@Rn */
	W8(r6, r3); UPD(0x0C04EC6Cu, 1);  /* 0C04EC6A mov.b Rm,@Rn */
	W32(r0, r1); UPD(0x0C04EC6Eu, 1);  /* 0C04EC6C mov.l Rm,@Rn */
	r9 = (u32)(s32)(s8)R8(r7); UPD(0x0C04EC70u, 1);  /* 0C04EC6E mov.b @Rm,Rn */
L_0C04EC70: BLKS(0x0C04EC70u);
	r8 = 0x3u;  /* 0C04EC70 mov #imm,Rn */
	T = r9 > r8;  /* 0C04EC72 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C04EC78u, 5); goto L_0C04EC78; }  /* 0C04EC74 bf */
L_0C04EC76: BLKS(0x0C04EC76u);
	W8(r7, r3); UPD(0x0C04EC78u, 1);  /* 0C04EC76 mov.b Rm,@Rn */
L_0C04EC78: BLKS(0x0C04EC78u);
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C04EC7Au, 1);  /* 0C04EC78 mov.b @Rm,Rn */
	r4 = 0x6u;  /* 0C04EC7A mov #imm,Rn */
	T = r7 > r4;  /* 0C04EC7C cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C04EC82u, 5); goto L_0C04EC82; }  /* 0C04EC7E bf */
L_0C04EC80: BLKS(0x0C04EC80u);
	W8(r6, r3); UPD(0x0C04EC82u, 1);  /* 0C04EC80 mov.b Rm,@Rn */
L_0C04EC82: BLKS(0x0C04EC82u);
	r12 = (u32)(s32)(s8)R8(r5); UPD(0x0C04EC84u, 1);  /* 0C04EC82 mov.b @Rm,Rn */
	r6 = 0x8u;  /* 0C04EC84 mov #imm,Rn */
	T = r12 > r6;  /* 0C04EC86 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C04EC8Cu, 5); goto L_0C04EC8C; }  /* 0C04EC88 bf */
L_0C04EC8A: BLKS(0x0C04EC8Au);
	W8(r5, r3); UPD(0x0C04EC8Cu, 1);  /* 0C04EC8A mov.b Rm,@Rn */
L_0C04EC8C: BLKS(0x0C04EC8Cu);
	r5 = 0xC04F8C0u; UPD(0x0C04EC8Eu, 1);  /* 0C04EC8C mov.l @(disp,pc),Rn */
	r9 = 0xC0576E0u; UPD(0x0C04EC90u, 1);  /* 0C04EC8E mov.l @(disp,pc),Rn */
	IF(0x0C04EC90u); { u32 t_ = r5; PR = 0x0C04EC94u; IF(0x0C04EC92u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F8C0, 0x0C04F8C0u, 0x0C04EC94u); }  /* 0C04EC90 jsr @Rn */
L_0C04EC94: BLKS(0x0C04EC94u);
	r8 = 0xC0AFA10u; UPD(0x0C04EC96u, 1);  /* 0C04EC94 mov.l @(disp,pc),Rn */
	IF(0x0C04EC96u); { u32 t_ = r9; PR = 0x0C04EC9Au; IF(0x0C04EC98u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0576E0, 0x0C0576E0u, 0x0C04EC9Au); }  /* 0C04EC96 jsr @Rn */
L_0C04EC9A: BLKS(0x0C04EC9Au);
	r12 = 0xC04EF80u; UPD(0x0C04EC9Cu, 1);  /* 0C04EC9A mov.l @(disp,pc),Rn */
	IF(0x0C04EC9Cu); { u32 t_ = r8; PR = 0x0C04ECA0u; IF(0x0C04EC9Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFA10, 0x0C0AFA10u, 0x0C04ECA0u); }  /* 0C04EC9C jsr @Rn */
L_0C04ECA0: BLKS(0x0C04ECA0u);
	r2 = 0xC27DDA4u; UPD(0x0C04ECA2u, 1);  /* 0C04ECA0 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C04ECA2 mov #imm,Rn */
	IF(0x0C04ECA4u); { u32 t_ = r12; PR = 0x0C04ECA8u; W32(r2, r8); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C04EF80, 0x0C04EF80u, 0x0C04ECA8u); }  /* 0C04ECA4 jsr @Rn */
L_0C04ECA8: BLKS(0x0C04ECA8u);
	r6 = 0xC04F4B0u; UPD(0x0C04ECAAu, 1);  /* 0C04ECA8 mov.l @(disp,pc),Rn */
	r9 = 0xC220C40u; UPD(0x0C04ECACu, 1);  /* 0C04ECAA mov.l @(disp,pc),Rn */
	IF(0x0C04ECACu); { u32 t_ = r6; PR = 0x0C04ECB0u; IF(0x0C04ECAEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F4B0, 0x0C04F4B0u, 0x0C04ECB0u); }  /* 0C04ECAC jsr @Rn */
L_0C04ECB0: BLKS(0x0C04ECB0u);
	r4 = 0xC0502E0u; UPD(0x0C04ECB2u, 1);  /* 0C04ECB0 mov.l @(disp,pc),Rn */
	r12 = 0xC220C60u; UPD(0x0C04ECB4u, 1);  /* 0C04ECB2 mov.l @(disp,pc),Rn */
	IF(0x0C04ECB4u); { u32 t_ = r4; PR = 0x0C04ECB8u; IF(0x0C04ECB6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0502E0, 0x0C0502E0u, 0x0C04ECB8u); }  /* 0C04ECB4 jsr @Rn */
L_0C04ECB8: BLKS(0x0C04ECB8u);
	r3 = 0xC28627Cu; UPD(0x0C04ECBAu, 1);  /* 0C04ECB8 mov.l @(disp,pc),Rn */
	r0 = 0xC392D70u; UPD(0x0C04ECBCu, 1);  /* 0C04ECBA mov.l @(disp,pc),Rn */
	r5 = 0xC285998u; UPD(0x0C04ECBEu, 1);  /* 0C04ECBC mov.l @(disp,pc),Rn */
	W32(r3, r8); UPD(0x0C04ECC0u, 1);  /* 0C04ECBE mov.l Rm,@Rn */
	r7 = 0xC21F7ECu; UPD(0x0C04ECC2u, 1);  /* 0C04ECC0 mov.l @(disp,pc),Rn */
	W32(r9, r8); UPD(0x0C04ECC4u, 1);  /* 0C04ECC2 mov.l Rm,@Rn */
	W32(r0, r8); UPD(0x0C04ECC6u, 1);  /* 0C04ECC4 mov.l Rm,@Rn */
	W32(r5, r8); UPD(0x0C04ECC8u, 1);  /* 0C04ECC6 mov.l Rm,@Rn */
	r3 = 0xC26C8C8u; UPD(0x0C04ECCAu, 1);  /* 0C04ECC8 mov.l @(disp,pc),Rn */
	r5 = 0x60u;  /* 0C04ECCA mov #imm,Rn */
	W32(r7, r8); UPD(0x0C04ECCEu, 2);  /* 0C04ECCC mov.l Rm,@Rn */
	r9 = 0xC21CA08u; UPD(0x0C04ECD0u, 1);  /* 0C04ECCE mov.l @(disp,pc),Rn */
	r7 = 0x20u;  /* 0C04ECD0 mov #imm,Rn */
	r2 = 0xC392DD4u; UPD(0x0C04ECD4u, 2);  /* 0C04ECD2 mov.l @(disp,pc),Rn */
	r6 = 0xC392DFCu; UPD(0x0C04ECD6u, 1);  /* 0C04ECD4 mov.l @(disp,pc),Rn */
	r4 = 0xC21CC30u; UPD(0x0C04ECD8u, 1);  /* 0C04ECD6 mov.l @(disp,pc),Rn */
	r0 = 0xC392AF8u; UPD(0x0C04ECDAu, 1);  /* 0C04ECD8 mov.l @(disp,pc),Rn */
	W32(r3, r5); UPD(0x0C04ECDCu, 1);  /* 0C04ECDA mov.l Rm,@Rn */
	W32(r9, r5); UPD(0x0C04ECDEu, 1);  /* 0C04ECDC mov.l Rm,@Rn */
	W32(r4, r7); UPD(0x0C04ECE0u, 1);  /* 0C04ECDE mov.l Rm,@Rn */
	r9 = 0x1u;  /* 0C04ECE0 mov #imm,Rn */
	W32(r0, r7); UPD(0x0C04ECE4u, 2);  /* 0C04ECE2 mov.l Rm,@Rn */
	W32(r2, r8); UPD(0x0C04ECE6u, 1);  /* 0C04ECE4 mov.l Rm,@Rn */
	W32(r12, r8); UPD(0x0C04ECE8u, 1);  /* 0C04ECE6 mov.l Rm,@Rn */
	W32(r6, r8); UPD(0x0C04ECEAu, 1);  /* 0C04ECE8 mov.l Rm,@Rn */
	r5 = 0xC04F930u; UPD(0x0C04ECECu, 1);  /* 0C04ECEA mov.l @(disp,pc),Rn */
	r2 = 0xC286290u; UPD(0x0C04ECEEu, 1);  /* 0C04ECEC mov.l @(disp,pc),Rn */
	r1 = 0x20000000u; UPD(0x0C04ECF0u, 1);  /* 0C04ECEE mov.l @(disp,pc),Rn */
	r6 = 0xC2175D8u; UPD(0x0C04ECF2u, 1);  /* 0C04ECF0 mov.l @(disp,pc),Rn */
	r7 = 0xC283C98u; UPD(0x0C04ECF4u, 1);  /* 0C04ECF2 mov.l @(disp,pc),Rn */
	r0 = 0xC392DC8u; UPD(0x0C04ECF6u, 1);  /* 0C04ECF4 mov.l @(disp,pc),Rn */
	r4 = 0x808080u; UPD(0x0C04ECF8u, 1);  /* 0C04ECF6 mov.l @(disp,pc),Rn */
	r12 = 0x10000000u; UPD(0x0C04ECFAu, 1);  /* 0C04ECF8 mov.l @(disp,pc),Rn */
	W32(r2, r9); UPD(0x0C04ECFCu, 1);  /* 0C04ECFA mov.l Rm,@Rn */
	W32(r0, r1); UPD(0x0C04ECFEu, 1);  /* 0C04ECFC mov.l Rm,@Rn */
	W32(r6, r12); UPD(0x0C04ED00u, 1);  /* 0C04ECFE mov.l Rm,@Rn */
	IF(0x0C04ED00u); { u32 t_ = r5; PR = 0x0C04ED04u; W32(r7, r4); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C04ED04u); }  /* 0C04ED00 jsr @Rn */
L_0C04ED04: BLKS(0x0C04ED04u);
	r3 = 0xC04A0BCu; UPD(0x0C04ED06u, 1);  /* 0C04ED04 mov.l @(disp,pc),Rn */
	r12 = 0xC053AD0u; UPD(0x0C04ED08u, 1);  /* 0C04ED06 mov.l @(disp,pc),Rn */
	IF(0x0C04ED08u); { u32 t_ = r3; PR = 0x0C04ED0Cu; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04A0BC, 0x0C04A0BCu, 0x0C04ED0Cu); }  /* 0C04ED08 jsr @Rn */
L_0C04ED0C: BLKS(0x0C04ED0Cu);
	IF(0x0C04ED0Cu); { u32 t_ = r12; PR = 0x0C04ED10u; IF(0x0C04ED0Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C053AD0, 0x0C053AD0u, 0x0C04ED10u); }  /* 0C04ED0C jsr @Rn */
L_0C04ED10: BLKS(0x0C04ED10u);
	r4 = 0xC3929B8u; UPD(0x0C04ED12u, 1);  /* 0C04ED10 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C04ED12 mov #imm,Rn */
	r7 = 0xC04A08Cu; UPD(0x0C04ED16u, 2);  /* 0C04ED14 mov.l @(disp,pc),Rn */
	W8(r4, r9); UPD(0x0C04ED18u, 1);  /* 0C04ED16 mov.b Rm,@Rn */
	r6 = 0xC26C8CCu; UPD(0x0C04ED1Au, 1);  /* 0C04ED18 mov.l @(disp,pc),Rn */
	r12 = 0xC058670u; UPD(0x0C04ED1Cu, 1);  /* 0C04ED1A mov.l @(disp,pc),Rn */
	r4 = 0xC050420u; UPD(0x0C04ED1Eu, 1);  /* 0C04ED1C mov.l @(disp,pc),Rn */
	IF(0x0C04ED1Eu); { u32 t_ = r7; PR = 0x0C04ED22u; W8(r6, r9); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C04A08C, 0x0C04A08Cu, 0x0C04ED22u); }  /* 0C04ED1E jsr @Rn */
L_0C04ED22: BLKS(0x0C04ED22u);
	IF(0x0C04ED22u); { u32 t_ = r12; PR = 0x0C04ED26u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058670, 0x0C058670u, 0x0C04ED26u); }  /* 0C04ED22 jsr @Rn */
L_0C04ED26: BLKS(0x0C04ED26u);
	r12 = 0xC060A90u; UPD(0x0C04ED28u, 1);  /* 0C04ED26 mov.l @(disp,pc),Rn */
	IF(0x0C04ED28u); { u32 t_ = r12; PR = 0x0C04ED2Cu; IF(0x0C04ED2Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C060A90, 0x0C060A90u, 0x0C04ED2Cu); }  /* 0C04ED28 jsr @Rn */
L_0C04ED2C: BLKS(0x0C04ED2Cu);
	r12 = 0xC283748u; UPD(0x0C04ED2Eu, 1);  /* 0C04ED2C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C04ED30u, 1);  /* 0C04ED2E mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04ED30 tst Rm,Rn */
	{ u32 t_ = 0u - r10, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C04ED32 negc Rm,Rn */
	r10 = 0xC286720u; UPD(0x0C04ED36u, 3);  /* 0C04ED34 mov.l @(disp,pc),Rn */
	r2 = R32(r10); UPD(0x0C04ED38u, 1);  /* 0C04ED36 mov.l @Rm,Rn */
	T = r2 == r11;  /* 0C04ED38 cmp/eq Rm,Rn */
	IF(0x0C04ED3Au); r3 = T;  /* 0C04ED3A movt Rn */
	T = (r5 & r3) == 0;  /* 0C04ED3C tst Rm,Rn */
	if (T) { UPD(0x0C04ED48u, 6); goto L_0C04ED48; }  /* 0C04ED3E bt */
L_0C04ED40: BLKS(0x0C04ED40u);
	r0 = 0xC056F30u; UPD(0x0C04ED42u, 1);  /* 0C04ED40 mov.l @(disp,pc),Rn */
	IF(0x0C04ED42u); { u32 t_ = r0; PR = 0x0C04ED46u; IF(0x0C04ED44u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C056F30, 0x0C056F30u, 0x0C04ED46u); }  /* 0C04ED42 jsr @Rn */
L_0C04ED46: BLKS(0x0C04ED46u);
	W32(r10, r8); UPD(0x0C04ED48u, 1);  /* 0C04ED46 mov.l Rm,@Rn */
L_0C04ED48: BLKS(0x0C04ED48u);
	r10 = 0xC28626Cu; UPD(0x0C04ED4Au, 1);  /* 0C04ED48 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C04ED4Cu, 1);  /* 0C04ED4A mov.l @Rm,Rn */
	r10 = 0xC21CA28u; UPD(0x0C04ED4Eu, 1);  /* 0C04ED4C mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C04ED4E and #imm,r0 */
	r7 = R32(r10); UPD(0x0C04ED52u, 2);  /* 0C04ED50 mov.l @Rm,Rn */
	T = r7 == r11;  /* 0C04ED52 cmp/eq Rm,Rn */
	IF(0x0C04ED54u); r11 = T;  /* 0C04ED54 movt Rn */
	r0 |= r11;  /* 0C04ED56 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04ED58 tst Rm,Rn */
	if (T) { UPD(0x0C04ED64u, 7); goto L_0C04ED64; }  /* 0C04ED5A bt */
L_0C04ED5C: BLKS(0x0C04ED5Cu);
	r11 = 0xC050E50u; UPD(0x0C04ED5Eu, 1);  /* 0C04ED5C mov.l @(disp,pc),Rn */
	IF(0x0C04ED5Eu); { u32 t_ = r11; PR = 0x0C04ED62u; IF(0x0C04ED60u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050E50, 0x0C050E50u, 0x0C04ED62u); }  /* 0C04ED5E jsr @Rn */
L_0C04ED62: BLKS(0x0C04ED62u);
	W32(r10, r8); UPD(0x0C04ED64u, 1);  /* 0C04ED62 mov.l Rm,@Rn */
L_0C04ED64: BLKS(0x0C04ED64u);
	r11 = 0xC053FC0u; UPD(0x0C04ED66u, 1);  /* 0C04ED64 mov.l @(disp,pc),Rn */
	r10 = 0xC0570C0u; UPD(0x0C04ED68u, 1);  /* 0C04ED66 mov.l @(disp,pc),Rn */
	IF(0x0C04ED68u); { u32 t_ = r11; PR = 0x0C04ED6Cu; IF(0x0C04ED6Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C053FC0, 0x0C053FC0u, 0x0C04ED6Cu); }  /* 0C04ED68 jsr @Rn */
L_0C04ED6C: BLKS(0x0C04ED6Cu);
	W8(r12, r8); UPD(0x0C04ED6Eu, 1);  /* 0C04ED6C mov.b Rm,@Rn */
	r6 = 0xC21F5E1u; UPD(0x0C04ED70u, 1);  /* 0C04ED6E mov.l @(disp,pc),Rn */
	r4 = 0xC283540u; UPD(0x0C04ED72u, 1);  /* 0C04ED70 mov.l @(disp,pc),Rn */
	r3 = 0xC275DBCu; UPD(0x0C04ED74u, 1);  /* 0C04ED72 mov.l @(disp,pc),Rn */
	r8 = 0xC0572D0u; UPD(0x0C04ED76u, 1);  /* 0C04ED74 mov.l @(disp,pc),Rn */
	r12 = 0xC06C630u; UPD(0x0C04ED78u, 1);  /* 0C04ED76 mov.l @(disp,pc),Rn */
	W8(r6, r9); UPD(0x0C04ED7Au, 1);  /* 0C04ED78 mov.b Rm,@Rn */
	W8(r4, r9); UPD(0x0C04ED7Cu, 1);  /* 0C04ED7A mov.b Rm,@Rn */
	IF(0x0C04ED7Cu); { u32 t_ = r10; PR = 0x0C04ED80u; W8(r3, r9); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0570C0, 0x0C0570C0u, 0x0C04ED80u); }  /* 0C04ED7C jsr @Rn */
L_0C04ED80: BLKS(0x0C04ED80u);
	IF(0x0C04ED80u); { u32 t_ = r8; PR = 0x0C04ED84u; IF(0x0C04ED82u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0572D0, 0x0C0572D0u, 0x0C04ED84u); }  /* 0C04ED80 jsr @Rn */
L_0C04ED84: BLKS(0x0C04ED84u);
	IF(0x0C04ED84u); { u32 t_ = r12; PR = 0x0C04ED88u; IF(0x0C04ED86u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C06C630, 0x0C06C630u, 0x0C04ED88u); }  /* 0C04ED84 jsr @Rn */
L_0C04ED88: BLKS(0x0C04ED88u);
	r0 = 0xC21CCE0u; UPD(0x0C04ED8Au, 1);  /* 0C04ED88 mov.l @(disp,pc),Rn */
	r8 = 0xC04EEC0u; UPD(0x0C04ED8Cu, 1);  /* 0C04ED8A mov.l @(disp,pc),Rn */
	W8(r0, r9); UPD(0x0C04ED8Eu, 1);  /* 0C04ED8C mov.b Rm,@Rn */
	IF(0x0C04ED8Eu); ;  /* 0C04ED8E nop */
	UPD(0x0C04ED90u, 1);
L_0C04ED90: BLKS(0x0C04ED90u);
	IF(0x0C04ED90u); { u32 t_ = r8; PR = 0x0C04ED94u; IF(0x0C04ED92u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04EEC0, 0x0C04EEC0u, 0x0C04ED94u); }  /* 0C04ED90 jsr @Rn */
L_0C04ED94: BLKS(0x0C04ED94u);
	{ IF(0x0C04ED96u); ; /* slot nop */ UPD(0x0C04ED90u, 3); goto L_0C04ED90; }  /* 0C04ED94 bra */
L_0C04EDA0: BLKS(0x0C04EDA0u);
	r5 = 0xC220C5Cu; UPD(0x0C04EDA2u, 1);  /* 0C04EDA0 mov.l @(disp,pc),Rn */
	r7 = 0xC286752u; UPD(0x0C04EDA4u, 1);  /* 0C04EDA2 mov.l @(disp,pc),Rn */
	r6 = 0xC220C34u; UPD(0x0C04EDA6u, 1);  /* 0C04EDA4 mov.l @(disp,pc),Rn */
	{ r9 = (u32)(s32)(s8)R8(r7); /* slot mov.b @Rm,Rn */ UPD(0x0C04EC70u, 3); goto L_0C04EC70; }  /* 0C04EDA6 bra */
}

/* FUN_0c04eec0 */
void f_0C04EEC0(sh3_t *c)
{
	LOCALS;
L_0C04EEC0: BLKS(0x0C04EEC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C04EEC2u, 1);  /* 0C04EEC0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C04EEC4u, 1);  /* 0C04EEC2 mov.l Rm,@-Rn */
	r8 = 0xC05A0D0u; UPD(0x0C04EEC6u, 1);  /* 0C04EEC4 mov.l @(disp,pc),Rn */
	IF(0x0C04EEC6u); r15 -= 4; W32(r15, PR); UPD(0x0C04EEC8u, 1);  /* 0C04EEC6 sts.l pr,@-Rn */
	IF(0x0C04EEC8u); { u32 t_ = r8; PR = 0x0C04EECCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C05A0D0, 0x0C05A0D0u, 0x0C04EECCu); }  /* 0C04EEC8 jsr @Rn */
L_0C04EECC: BLKS(0x0C04EECCu);
	r2 = 0xC283C50u; UPD(0x0C04EECEu, 1);  /* 0C04EECC mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C04EECE mov #imm,Rn */
	W32(r2 + 0x34u, r4); UPD(0x0C04EED2u, 2);  /* 0C04EED0 mov.l Rm,@(disp,Rn) */
	r6 = 0x5u;  /* 0C04EED2 mov #imm,Rn */
	r8 = 0xC2839D0u; UPD(0x0C04EED6u, 2);  /* 0C04EED4 mov.l @(disp,pc),Rn */
	r0 = 0xC21CA16u; UPD(0x0C04EED8u, 1);  /* 0C04EED6 mov.l @(disp,pc),Rn */
	W32(r8 + 0x34u, r4); UPD(0x0C04EEDAu, 1);  /* 0C04EED8 mov.l Rm,@(disp,Rn) */
	r3 = 0xC21F7F9u; UPD(0x0C04EEDCu, 1);  /* 0C04EEDA mov.l @(disp,pc),Rn */
	W8(r0, r4); UPD(0x0C04EEDEu, 1);  /* 0C04EEDC mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C04EEE0u, 1);  /* 0C04EEDE mov.b @Rm,Rn */
	r2 = 0xC160448u; UPD(0x0C04EEE2u, 1);  /* 0C04EEE0 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C04EEE2 and #imm,r0 */
	IF(0x0C04EEE4u); r0 <<= 2;  /* 0C04EEE4 shll2 Rn */
	r0 += r2;  /* 0C04EEE6 add Rm,Rn */
	r0 += 0x2u;  /* 0C04EEE8 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r0); UPD(0x0C04EEECu, 5);  /* 0C04EEEA mov.w @Rm,Rn */
	r7 = 0xC28599Cu; UPD(0x0C04EEEEu, 1);  /* 0C04EEEC mov.l @(disp,pc),Rn */
	r5 = 0xC2852E0u; UPD(0x0C04EEF0u, 1);  /* 0C04EEEE mov.l @(disp,pc),Rn */
	r0 = 0xC220C36u; UPD(0x0C04EEF2u, 1);  /* 0C04EEF0 mov.l @(disp,pc),Rn */
	r8 = 0xC0AFCA0u; UPD(0x0C04EEF4u, 1);  /* 0C04EEF2 mov.l @(disp,pc),Rn */
	W8(r7, r4); UPD(0x0C04EEF6u, 1);  /* 0C04EEF4 mov.b Rm,@Rn */
	W8(r5, r6); UPD(0x0C04EEF8u, 1);  /* 0C04EEF6 mov.b Rm,@Rn */
	W16(r0, r1); UPD(0x0C04EEFAu, 1);  /* 0C04EEF8 mov.w Rm,@Rn */
	IF(0x0C04EEFAu); ;  /* 0C04EEFA nop */
	UPD(0x0C04EEFCu, 1);
L_0C04EEFC: BLKS(0x0C04EEFCu);
	IF(0x0C04EEFCu); { u32 t_ = r8; PR = 0x0C04EF00u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFCA0, 0x0C0AFCA0u, 0x0C04EF00u); }  /* 0C04EEFC jsr @Rn */
L_0C04EF00: BLKS(0x0C04EF00u);
	r0 = 0xC059CE0u; UPD(0x0C04EF02u, 1);  /* 0C04EF00 mov.l @(disp,pc),Rn */
	IF(0x0C04EF02u); { u32 t_ = r0; PR = 0x0C04EF06u; IF(0x0C04EF04u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C059CE0, 0x0C059CE0u, 0x0C04EF06u); }  /* 0C04EF02 jsr @Rn */
L_0C04EF06: BLKS(0x0C04EF06u);
	r0 = 0xC7C4CACu; UPD(0x0C04EF08u, 1);  /* 0C04EF06 mov.l @(disp,pc),Rn */
	IF(0x0C04EF08u); { u32 t_ = r0; PR = 0x0C04EF0Cu; IF(0x0C04EF0Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C7C4CAC, 0x0C7C4CACu, 0x0C04EF0Cu); }  /* 0C04EF08 jsr @Rn */
L_0C04EF0C: BLKS(0x0C04EF0Cu);
	r0 = 0xC0588C0u; UPD(0x0C04EF0Eu, 1);  /* 0C04EF0C mov.l @(disp,pc),Rn */
	IF(0x0C04EF0Eu); { u32 t_ = r0; PR = 0x0C04EF12u; IF(0x0C04EF10u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0588C0, 0x0C0588C0u, 0x0C04EF12u); }  /* 0C04EF0E jsr @Rn */
L_0C04EF12: BLKS(0x0C04EF12u);
	r0 = 0xC05A6D0u; UPD(0x0C04EF14u, 1);  /* 0C04EF12 mov.l @(disp,pc),Rn */
	IF(0x0C04EF14u); { u32 t_ = r0; PR = 0x0C04EF18u; IF(0x0C04EF16u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05A6D0, 0x0C05A6D0u, 0x0C04EF18u); }  /* 0C04EF14 jsr @Rn */
L_0C04EF18: BLKS(0x0C04EF18u);
	r0 = 0xC21F7F0u; UPD(0x0C04EF1Au, 1);  /* 0C04EF18 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C04EF1Cu, 1);  /* 0C04EF1A mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C04EF1C tst Rm,Rn */
	if (T) { UPD(0x0C04EF26u, 4); goto L_0C04EF26; }  /* 0C04EF1E bt */
L_0C04EF20: BLKS(0x0C04EF20u);
	r0 = 0xC05A280u; UPD(0x0C04EF22u, 1);  /* 0C04EF20 mov.l @(disp,pc),Rn */
	IF(0x0C04EF22u); { u32 t_ = r0; PR = 0x0C04EF26u; IF(0x0C04EF24u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05A280, 0x0C05A280u, 0x0C04EF26u); }  /* 0C04EF22 jsr @Rn */
L_0C04EF26: BLKS(0x0C04EF26u);
	r0 = 0xC059060u; UPD(0x0C04EF28u, 1);  /* 0C04EF26 mov.l @(disp,pc),Rn */
	IF(0x0C04EF28u); { u32 t_ = r0; PR = 0x0C04EF2Cu; IF(0x0C04EF2Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C059060, 0x0C059060u, 0x0C04EF2Cu); }  /* 0C04EF28 jsr @Rn */
L_0C04EF2C: BLKS(0x0C04EF2Cu);
	{ IF(0x0C04EF2Eu); ; /* slot nop */ UPD(0x0C04EEFCu, 3); goto L_0C04EEFC; }  /* 0C04EF2C bra */
}

/* FUN_0c04ef80 */
void f_0C04EF80(sh3_t *c)
{
	LOCALS;
L_0C04EF80: BLKS(0x0C04EF80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C04EF82u, 1);  /* 0C04EF80 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C04EF82 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04EF86u, 2);  /* 0C04EF84 mov.l Rm,@-Rn */
	r2 = 0x0u;  /* 0C04EF86 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C04EF8Au, 2);  /* 0C04EF88 mov.l Rm,@-Rn */
	r3 = 0x1u;  /* 0C04EF8A mov #imm,Rn */
	r9 = 0xC26C878u; UPD(0x0C04EF8Eu, 2);  /* 0C04EF8C mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C04EF8E mov Rm,Rn */
	r8 = 0xC220C50u; UPD(0x0C04EF92u, 2);  /* 0C04EF90 mov.l @(disp,pc),Rn */
	r4 = 0xC392E00u; UPD(0x0C04EF94u, 1);  /* 0C04EF92 mov.l @(disp,pc),Rn */
	r5 = 0xC286278u; UPD(0x0C04EF96u, 1);  /* 0C04EF94 mov.l @(disp,pc),Rn */
	r6 = 0xC2852C0u; UPD(0x0C04EF98u, 1);  /* 0C04EF96 mov.l @(disp,pc),Rn */
	r7 = 0xC27DC54u; UPD(0x0C04EF9Au, 1);  /* 0C04EF98 mov.l @(disp,pc),Rn */
	r1 = r0;  /* 0C04EF9A mov Rm,Rn */
	UPD(0x0C04EF9Cu, 1);
L_0C04EF9C: BLKS(0x0C04EF9Cu);
	r1 += r8;  /* 0C04EF9C add Rm,Rn */
	W8(r1, r2); UPD(0x0C04EFA0u, 2);  /* 0C04EF9E mov.b Rm,@Rn */
	r1 = r0;  /* 0C04EFA0 mov Rm,Rn */
	r1 += r6;  /* 0C04EFA2 add Rm,Rn */
	W8(r1, r2); UPD(0x0C04EFA6u, 3);  /* 0C04EFA4 mov.b Rm,@Rn */
	r1 = r0;  /* 0C04EFA6 mov Rm,Rn */
	r1 += r7;  /* 0C04EFA8 add Rm,Rn */
	W8(r1, r2); UPD(0x0C04EFACu, 3);  /* 0C04EFAA mov.b Rm,@Rn */
	IF(0x0C04EFACu); W8(r0 + r9, r2); UPD(0x0C04EFAEu, 1);  /* 0C04EFAC mov.b Rm,@(r0,Rn) */
	r1 = r0;  /* 0C04EFAE mov Rm,Rn */
	IF(0x0C04EFB0u); W8(r0 + r4, r2); UPD(0x0C04EFB2u, 2);  /* 0C04EFB0 mov.b Rm,@(r0,Rn) */
	r1 += 0x1u;  /* 0C04EFB2 add #imm,Rn */
	IF(0x0C04EFB4u); W8(r0 + r5, r2); UPD(0x0C04EFB6u, 2);  /* 0C04EFB4 mov.b Rm,@(r0,Rn) */
	r0 = (u32)(s32)(s8)r1;  /* 0C04EFB6 exts.b Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C04EFB8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04EF9Cu, 5); goto L_0C04EF9C; } goto L_0C04EFBE; }  /* 0C04EFBA bf/s */
L_0C04EFBE: BLKS(0x0C04EFBEu);
	r0 = 0xC21F589u; UPD(0x0C04EFC0u, 2);  /* 0C04EFBE mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C04EFC0 mov #imm,Rn */
	W8(r0, r3); UPD(0x0C04EFC4u, 2);  /* 0C04EFC2 mov.b Rm,@Rn */
	r1 = 0xCu;  /* 0C04EFC4 mov #imm,Rn */
	r0 = 0xC21F89Cu; UPD(0x0C04EFC8u, 2);  /* 0C04EFC6 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C04EFCAu, 1);  /* 0C04EFC8 mov.l Rm,@Rn */
	r15 = r14;  /* 0C04EFCA mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C04EFCEu, 2);  /* 0C04EFCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04EFD0u, 1);  /* 0C04EFCE mov.l @Rm+,Rn */
	IF(0x0C04EFD0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04EFD0 rts */
}

/* FUN_0c04f000 */
void f_0C04F000(sh3_t *c)
{
	LOCALS;
L_0C04F000: BLKS(0x0C04F000u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C04F002u, 1);  /* 0C04F000 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04F004u, 1);  /* 0C04F002 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C04F006u, 1);  /* 0C04F004 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C04F008u, 1);  /* 0C04F006 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C04F00Au, 1);  /* 0C04F008 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C04F00Cu, 1);  /* 0C04F00A mov.l Rm,@-Rn */
	r2 = 0xC21F5E1u; UPD(0x0C04F00Eu, 1);  /* 0C04F00C mov.l @(disp,pc),Rn */
	IF(0x0C04F00Eu); r15 -= 4; W32(r15, PR); UPD(0x0C04F010u, 1);  /* 0C04F00E sts.l pr,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C04F012u, 1);  /* 0C04F010 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04F012 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04F01Cu, 4); goto L_0C04F01C; } goto L_0C04F018; }  /* 0C04F014 bf/s */
L_0C04F018: BLKS(0x0C04F018u);
	{ IF(0x0C04F01Au); ; /* slot nop */ UPD(0x0C04F11Cu, 4); goto L_0C04F11C; }  /* 0C04F018 bra */
L_0C04F01C: BLKS(0x0C04F01Cu);
	r8 = 0xA4000124u; UPD(0x0C04F01Eu, 1);  /* 0C04F01C mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C04F020u, 1);  /* 0C04F01E mov.b @Rm,Rn */
	r8 += 0x6u;  /* 0C04F020 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C04F024u, 2);  /* 0C04F022 mov.b @Rm,Rn */
	r5 = ~r1;  /* 0C04F024 not Rm,Rn */
	r4 = 0xC220C20u; UPD(0x0C04F028u, 2);  /* 0C04F026 mov.l @(disp,pc),Rn */
	r0 = ~r6;  /* 0C04F028 not Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C04F02Cu, 2);  /* 0C04F02A mov.b @Rm,Rn */
	r0 &= 0x2u;  /* 0C04F02C and #imm,r0 */
	r5 |= r0;  /* 0C04F02E or Rm,Rn */
	W8(r4, r5); UPD(0x0C04F032u, 3);  /* 0C04F030 mov.b Rm,@Rn */
	r7 ^= r5;  /* 0C04F032 xor Rm,Rn */
	r3 = 0xC393028u; UPD(0x0C04F036u, 2);  /* 0C04F034 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C04F036 add #imm,Rn */
	r7 &= r5;  /* 0C04F038 and Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C04F03Cu, 3);  /* 0C04F03A mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04F03C tst Rm,Rn */
	{ u32 c_ = T; W8(r4, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C04F068u, 4); goto L_0C04F068; } UPD(0x0C04F042u, 1); goto L_0C04F042; }  /* 0C04F03E bt/s */
L_0C04F042: BLKS(0x0C04F042u);
	r9 = 0x1u;  /* 0C04F042 mov #imm,Rn */
	r7 &= r9;  /* 0C04F044 and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C04F046 tst Rm,Rn */
	if (T) { UPD(0x0C04F068u, 6); goto L_0C04F068; }  /* 0C04F048 bt */
L_0C04F04A: BLKS(0x0C04F04Au);
	r2 = 0xC26C878u; UPD(0x0C04F04Cu, 1);  /* 0C04F04A mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C04F04Eu, 1);  /* 0C04F04C mov.b @Rm,Rn */
	T = r0 == 0x9u;  /* 0C04F04E cmp/eq #imm,r0 */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04F068u, 4); goto L_0C04F068; } goto L_0C04F054; }  /* 0C04F050 bt/s */
L_0C04F054: BLKS(0x0C04F054u);
	r10 = 0xC0AFAE0u; UPD(0x0C04F056u, 2);  /* 0C04F054 mov.l @(disp,pc),Rn */
	r7 = 0xC21F589u; UPD(0x0C04F058u, 1);  /* 0C04F056 mov.l @(disp,pc),Rn */
	r12 += 0x1u;  /* 0C04F058 add #imm,Rn */
	r11 = 0x1u;  /* 0C04F05A mov #imm,Rn */
	W8(r2, r12); UPD(0x0C04F05Eu, 3);  /* 0C04F05C mov.b Rm,@Rn */
	r4 = 0x5Bu;  /* 0C04F05E mov #imm,Rn */
	W8(r7, r11); UPD(0x0C04F062u, 2);  /* 0C04F060 mov.b Rm,@Rn */
	IF(0x0C04F062u); { u32 t_ = r10; PR = 0x0C04F066u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFAE0, 0x0C0AFAE0u, 0x0C04F066u); }  /* 0C04F062 jsr @Rn */
L_0C04F066: BLKS(0x0C04F066u);
	IF(0x0C04F066u); ;  /* 0C04F066 nop */
	UPD(0x0C04F068u, 1);
L_0C04F068: BLKS(0x0C04F068u);
	r3 = 0xC286508u; UPD(0x0C04F06Au, 1);  /* 0C04F068 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C04F06A mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C04F06Eu, 2);  /* 0C04F06C mov.b @Rm,Rn */
	r2 = r0 & 0xFF;  /* 0C04F06E extu.b Rm,Rn */
	T = (s32)r8 >= (s32)r2;  /* 0C04F070 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C04F11Cu, 5); goto L_0C04F11C; }  /* 0C04F072 bt */
L_0C04F074: BLKS(0x0C04F074u);
	r12 = 0xC392E00u; UPD(0x0C04F076u, 1);  /* 0C04F074 mov.l @(disp,pc),Rn */
	IF(0x0C04F076u); ;  /* 0C04F076 nop */
	UPD(0x0C04F078u, 1);
L_0C04F078: BLKS(0x0C04F078u);
	r5 = 0xC2852E4u; UPD(0x0C04F07Au, 1);  /* 0C04F078 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C04F07A mov Rm,Rn */
	r6 = 0xC392D6Cu; UPD(0x0C04F07Eu, 2);  /* 0C04F07C mov.l @(disp,pc),Rn */
	IF(0x0C04F07Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C04F080u, 1);  /* 0C04F07E mov.b @(r0,Rm),Rn */
	r0 = r6;  /* 0C04F080 mov Rm,Rn */
	r4 = 0xC27DC48u; UPD(0x0C04F084u, 2);  /* 0C04F082 mov.l @(disp,pc),Rn */
	IF(0x0C04F084u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C04F086u, 1);  /* 0C04F084 mov.b @(r0,Rm),Rn */
	r0 = r4;  /* 0C04F086 mov Rm,Rn */
	IF(0x0C04F088u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C04F08Au, 2);  /* 0C04F088 mov.b @(r0,Rm),Rn */
	r0 = r12;  /* 0C04F08A mov Rm,Rn */
	IF(0x0C04F08Cu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C04F08Eu, 2);  /* 0C04F08C mov.b @(r0,Rm),Rn */
	r4 = r3 & 0xFF;  /* 0C04F08E extu.b Rm,Rn */
	r0 = r4;  /* 0C04F090 mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C04F092 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r7 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C04F09Cu, 6); goto L_0C04F09C; } goto L_0C04F098; }  /* 0C04F094 bf/s */
L_0C04F098: BLKS(0x0C04F098u);
	{ IF(0x0C04F09Au); ; /* slot nop */ UPD(0x0C04F290u, 4); goto L_0C04F290; }  /* 0C04F098 bra */
L_0C04F09C: BLKS(0x0C04F09Cu);
	T = (s32)r4 > (s32)r7;  /* 0C04F09C cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = (r4 & r4) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C04F0A6u, 4); goto L_0C04F0A6; } goto L_0C04F0A2; }  /* 0C04F09E bf/s */
L_0C04F0A2: BLKS(0x0C04F0A2u);
	{ r0 = r4; /* slot mov Rm,Rn */ UPD(0x0C04F250u, 4); goto L_0C04F250; }  /* 0C04F0A2 bra */
L_0C04F0A6: BLKS(0x0C04F0A6u);
	if (!T) { UPD(0x0C04F0ACu, 3); goto L_0C04F0AC; }  /* 0C04F0A6 bf */
L_0C04F0A8: BLKS(0x0C04F0A8u);
	{ IF(0x0C04F0AAu); ; /* slot nop */ UPD(0x0C04F230u, 3); goto L_0C04F230; }  /* 0C04F0A8 bra */
L_0C04F0AC: BLKS(0x0C04F0ACu);
	r4 = 0xC2852C0u; UPD(0x0C04F0AEu, 1);  /* 0C04F0AC mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C04F0AE mov Rm,Rn */
	IF(0x0C04F0B0u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C04F0B2u, 2);  /* 0C04F0B0 mov.b @(r0,Rm),Rn */
	r0 = r7 & 0xFF;  /* 0C04F0B2 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C04F0B4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r6 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C04F0BEu, 5); goto L_0C04F0BE; } goto L_0C04F0BA; }  /* 0C04F0B6 bf/s */
L_0C04F0BA: BLKS(0x0C04F0BAu);
	{ IF(0x0C04F0BCu); ; /* slot nop */ UPD(0x0C04F1F0u, 4); goto L_0C04F1F0; }  /* 0C04F0BA bra */
L_0C04F0BE: BLKS(0x0C04F0BEu);
	T = (s32)r0 > (s32)r6;  /* 0C04F0BE cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C04F0C8u, 4); goto L_0C04F0C8; } goto L_0C04F0C4; }  /* 0C04F0C0 bf/s */
L_0C04F0C4: BLKS(0x0C04F0C4u);
	{ IF(0x0C04F0C6u); ; /* slot nop */ UPD(0x0C04F1C0u, 4); goto L_0C04F1C0; }  /* 0C04F0C4 bra */
L_0C04F0C8: BLKS(0x0C04F0C8u);
	T = (r0 & r0) == 0;  /* 0C04F0C8 tst Rm,Rn */
	if (T) { UPD(0x0C04F190u, 4); goto L_0C04F190; }  /* 0C04F0CA bt */
L_0C04F0CC: BLKS(0x0C04F0CCu);
	r10 = 0xC26C878u; UPD(0x0C04F0CEu, 1);  /* 0C04F0CC mov.l @(disp,pc),Rn */
	r3 = 0xFFFFFFFFu;  /* 0C04F0CE mov #imm,Rn */
	r0 = r10;  /* 0C04F0D0 mov Rm,Rn */
	IF(0x0C04F0D2u); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C04F0D4u, 3);  /* 0C04F0D2 mov.b @(r0,Rm),Rn */
	r11 = 0xC393028u; UPD(0x0C04F0D6u, 1);  /* 0C04F0D4 mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C04F0D6 mov Rm,Rn */
	T = r0 == 0x9u;  /* 0C04F0D8 cmp/eq #imm,r0 */
	r0 = r11;  /* 0C04F0DA mov Rm,Rn */
	IF(0x0C04F0DCu); r1 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C04F0DEu, 4);  /* 0C04F0DC mov.b @(r0,Rm),Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C04F0DE negc Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C04F0E0 tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C04F0E2 negc Rm,Rn */
	T = (r7 & r0) == 0;  /* 0C04F0E4 tst Rm,Rn */
	if (T) { UPD(0x0C04F170u, 7); goto L_0C04F170; }  /* 0C04F0E6 bt */
L_0C04F0E8: BLKS(0x0C04F0E8u);
	r0 = r5;  /* 0C04F0E8 mov Rm,Rn */
	r4 = 0xC21F89Cu; UPD(0x0C04F0ECu, 2);  /* 0C04F0EA mov.l @(disp,pc),Rn */
	r2 = 0xC16045Cu; UPD(0x0C04F0EEu, 1);  /* 0C04F0EC mov.l @(disp,pc),Rn */
	IF(0x0C04F0EEu); r0 <<= 2;  /* 0C04F0EE shll2 Rn */
	IF(0x0C04F0F0u); r3 = R32(r0 + r2); UPD(0x0C04F0F2u, 2);  /* 0C04F0F0 mov.l @(r0,Rm),Rn */
	r7 = R32(r4); UPD(0x0C04F0F4u, 1);  /* 0C04F0F2 mov.l @Rm,Rn */
	r7 |= r3;  /* 0C04F0F4 or Rm,Rn */
	W32(r4, r7); UPD(0x0C04F0F8u, 2);  /* 0C04F0F6 mov.l Rm,@Rn */
	r4 = 0xC220C50u; UPD(0x0C04F0FAu, 1);  /* 0C04F0F8 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C04F0FA mov Rm,Rn */
	IF(0x0C04F0FCu); r7 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C04F0FEu, 2);  /* 0C04F0FC mov.b @(r0,Rm),Rn */
	r2 = 0xC392AE4u; UPD(0x0C04F100u, 1);  /* 0C04F0FE mov.l @(disp,pc),Rn */
	r1 = r7 & 0xFF;  /* 0C04F100 extu.b Rm,Rn */
	r0 = r2;  /* 0C04F102 mov Rm,Rn */
	IF(0x0C04F104u); r3 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C04F106u, 3);  /* 0C04F104 mov.b @(r0,Rm),Rn */
	r0 = r3 & 0xFF;  /* 0C04F106 extu.b Rm,Rn */
	T = r1 >= r0;  /* 0C04F108 cmp/hs Rm,Rn */
	if (T) { UPD(0x0C04F130u, 5); goto L_0C04F130; }  /* 0C04F10A bt */
L_0C04F10C: BLKS(0x0C04F10Cu);
	r6 = 0xC286508u; UPD(0x0C04F10Eu, 1);  /* 0C04F10C mov.l @(disp,pc),Rn */
	r11 = r8;  /* 0C04F10E mov Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r6); UPD(0x0C04F112u, 2);  /* 0C04F110 mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C04F112 add #imm,Rn */
	r8 = (u32)(s32)(s8)r11;  /* 0C04F114 exts.b Rm,Rn */
	r9 = r10 & 0xFF;  /* 0C04F116 extu.b Rm,Rn */
	T = (s32)r8 >= (s32)r9;  /* 0C04F118 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C04F078u, 7); goto L_0C04F078; }  /* 0C04F11A bf */
L_0C04F11C: BLKS(0x0C04F11Cu);
	r15 = r14;  /* 0C04F11C mov Rm,Rn */
	IF(0x0C04F11Eu); PR = R32(r15); r15 += 4; UPD(0x0C04F120u, 2);  /* 0C04F11E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C04F122u, 1);  /* 0C04F120 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C04F124u, 1);  /* 0C04F122 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C04F126u, 1);  /* 0C04F124 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C04F128u, 1);  /* 0C04F126 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04F12Au, 1);  /* 0C04F128 mov.l @Rm+,Rn */
	IF(0x0C04F12Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04F12A rts */
L_0C04F130: BLKS(0x0C04F130u);
	r2 = r7;  /* 0C04F130 mov Rm,Rn */
	r2 -= r3;  /* 0C04F132 sub Rm,Rn */
	r0 = r4;  /* 0C04F134 mov Rm,Rn */
	IF(0x0C04F136u); W8(r0 + r5, r2); UPD(0x0C04F138u, 4);  /* 0C04F136 mov.b Rm,@(r0,Rn) */
	r7 = 0xC286750u; UPD(0x0C04F13Au, 1);  /* 0C04F138 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C04F13A mov Rm,Rn */
	IF(0x0C04F13Cu); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C04F13Eu, 2);  /* 0C04F13C mov.b @(r0,Rm),Rn */
	r0 = r10;  /* 0C04F13E mov Rm,Rn */
	r4 += r6;  /* 0C04F140 add Rm,Rn */
	IF(0x0C04F142u); W8(r0 + r9, r4); UPD(0x0C04F144u, 3);  /* 0C04F142 mov.b Rm,@(r0,Rn) */
	r5 = 0x7u;  /* 0C04F144 mov #imm,Rn */
	r0 = 0xC0AFAE0u; UPD(0x0C04F148u, 2);  /* 0C04F146 mov.l @(disp,pc),Rn */
	IF(0x0C04F148u); { u32 t_ = r0; PR = 0x0C04F14Cu; r4 = 0x5Bu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFAE0, 0x0C0AFAE0u, 0x0C04F14Cu); }  /* 0C04F148 jsr @Rn */
L_0C04F14C: BLKS(0x0C04F14Cu);
	r0 = r10;  /* 0C04F14C mov Rm,Rn */
	IF(0x0C04F14Eu); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C04F150u, 2);  /* 0C04F14E mov.b @(r0,Rm),Rn */
	r3 = 0x9u;  /* 0C04F150 mov #imm,Rn */
	r5 = r2 & 0xFF;  /* 0C04F152 extu.b Rm,Rn */
	T = r5 > r3;  /* 0C04F154 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C04F15Cu, 6); goto L_0C04F15C; }  /* 0C04F156 bf */
L_0C04F158: BLKS(0x0C04F158u);
	IF(0x0C04F158u); W8(r0 + r9, r3); UPD(0x0C04F15Au, 1);  /* 0C04F158 mov.b Rm,@(r0,Rn) */
	r2 = 0x9u;  /* 0C04F15A mov #imm,Rn */
	UPD(0x0C04F15Cu, 1);
L_0C04F15C: BLKS(0x0C04F15Cu);
	r0 = r11;  /* 0C04F15C mov Rm,Rn */
	IF(0x0C04F15Eu); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C04F160u, 2);  /* 0C04F15E mov.b @(r0,Rm),Rn */
	r10 = r2 & 0xFF;  /* 0C04F160 extu.b Rm,Rn */
	r9 = r6 & 0xFF;  /* 0C04F162 extu.b Rm,Rn */
	T = r10 >= r9;  /* 0C04F164 cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C04F10Cu, 6); goto L_0C04F10C; }  /* 0C04F166 bf */
L_0C04F168: BLKS(0x0C04F168u);
	r0 = 0x1u;  /* 0C04F168 mov #imm,Rn */
	r11 = 0xC21F589u; UPD(0x0C04F16Cu, 2);  /* 0C04F16A mov.l @(disp,pc),Rn */
	{ W8(r11, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C04F10Cu, 3); goto L_0C04F10C; }  /* 0C04F16C bra */
L_0C04F170: BLKS(0x0C04F170u);
	IF(0x0C04F170u); r5 <<= 2;  /* 0C04F170 shll2 Rn */
	r2 = 0xC16045Cu; UPD(0x0C04F174u, 2);  /* 0C04F172 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C04F174 mov Rm,Rn */
	r4 = 0xC21F89Cu; UPD(0x0C04F178u, 2);  /* 0C04F176 mov.l @(disp,pc),Rn */
	IF(0x0C04F178u); r7 = R32(r0 + r2); UPD(0x0C04F17Au, 1);  /* 0C04F178 mov.l @(r0,Rm),Rn */
	r5 = 0xFFu; UPD(0x0C04F17Cu, 1);  /* 0C04F17A mov.w @(disp,pc),Rn */
	r3 = R32(r4); UPD(0x0C04F17Eu, 1);  /* 0C04F17C mov.l @Rm,Rn */
	r5 -= r7;  /* 0C04F17E sub Rm,Rn */
	r3 &= r5;  /* 0C04F180 and Rm,Rn */
	{ W32(r4, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C04F10Cu, 5); goto L_0C04F10C; }  /* 0C04F182 bra */
L_0C04F190: BLKS(0x0C04F190u);
	r11 = 0xC286278u; UPD(0x0C04F192u, 1);  /* 0C04F190 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C04F192 mov Rm,Rn */
	IF(0x0C04F194u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C04F196u, 2);  /* 0C04F194 mov.b @(r0,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C04F196 tst Rm,Rn */
	{ u32 c_ = T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04F0CCu, 4); goto L_0C04F0CC; } goto L_0C04F19C; }  /* 0C04F198 bt/s */
L_0C04F19C: BLKS(0x0C04F19Cu);
	r11 = 0xC160454u; UPD(0x0C04F19Eu, 2);  /* 0C04F19C mov.l @(disp,pc),Rn */
	IF(0x0C04F19Eu); r0 <<= 2;  /* 0C04F19E shll2 Rn */
	IF(0x0C04F1A0u); r2 = R32(r0 + r11); UPD(0x0C04F1A2u, 2);  /* 0C04F1A0 mov.l @(r0,Rm),Rn */
	r3 = r7;  /* 0C04F1A2 mov Rm,Rn */
	r6 = 0xC21F89Cu; UPD(0x0C04F1A6u, 2);  /* 0C04F1A4 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C04F1A6 mov Rm,Rn */
	r3 += 0x1u;  /* 0C04F1A8 add #imm,Rn */
	r10 = R32(r6); UPD(0x0C04F1ACu, 3);  /* 0C04F1AA mov.l @Rm,Rn */
	r7 = 0x3Cu;  /* 0C04F1AC mov #imm,Rn */
	IF(0x0C04F1AEu); W8(r0 + r8, r3); UPD(0x0C04F1B0u, 2);  /* 0C04F1AE mov.b Rm,@(r0,Rn) */
	r10 |= r2;  /* 0C04F1B0 or Rm,Rn */
	r4 = 0xC275568u; UPD(0x0C04F1B4u, 2);  /* 0C04F1B2 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C04F1B4 mov Rm,Rn */
	W32(r6, r10); UPD(0x0C04F1B8u, 2);  /* 0C04F1B6 mov.l Rm,@Rn */
	IF(0x0C04F1B8u); W8(r0 + r8, r7); UPD(0x0C04F1BAu, 1);  /* 0C04F1B8 mov.b Rm,@(r0,Rn) */
L_0C04F1BA: BLKS(0x0C04F1BAu);
	{ IF(0x0C04F1BCu); ; /* slot nop */ UPD(0x0C04F0CCu, 3); goto L_0C04F0CC; }  /* 0C04F1BA bra */
L_0C04F1C0: BLKS(0x0C04F1C0u);
	if (!T) { UPD(0x0C04F1BAu, 3); goto L_0C04F1BA; }  /* 0C04F1C0 bf */
L_0C04F1C2: BLKS(0x0C04F1C2u);
	r1 = 0xC275568u; UPD(0x0C04F1C4u, 1);  /* 0C04F1C2 mov.l @(disp,pc),Rn */
	r0 = r1;  /* 0C04F1C4 mov Rm,Rn */
	IF(0x0C04F1C6u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C04F1C8u, 2);  /* 0C04F1C6 mov.b @(r0,Rm),Rn */
	r7 += 0xFFFFFFFFu;  /* 0C04F1C8 add #imm,Rn */
	r3 = r7 & 0xFF;  /* 0C04F1CA extu.b Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C04F1CC tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04F1D0u); W8(r0 + r8, r7); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C04F1BAu, 6); goto L_0C04F1BA; } UPD(0x0C04F1D2u, 1); goto L_0C04F1D2; }  /* 0C04F1CE bf/s */
L_0C04F1D2: BLKS(0x0C04F1D2u);
	r11 = 0xC286278u; UPD(0x0C04F1D4u, 1);  /* 0C04F1D2 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C04F1D4 mov Rm,Rn */
	IF(0x0C04F1D6u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C04F1D8u, 2);  /* 0C04F1D6 mov.b @(r0,Rm),Rn */
	r6 += 0xFFFFFFFFu;  /* 0C04F1D8 add #imm,Rn */
	IF(0x0C04F1DAu); W8(r0 + r8, r6); UPD(0x0C04F1DCu, 2);  /* 0C04F1DA mov.b Rm,@(r0,Rn) */
	r0 = r4;  /* 0C04F1DC mov Rm,Rn */
	IF(0x0C04F1DEu); W8(r0 + r8, r3); UPD(0x0C04F1E0u, 2);  /* 0C04F1DE mov.b Rm,@(r0,Rn) */
	r4 = 0xC27DC54u; UPD(0x0C04F1E2u, 1);  /* 0C04F1E0 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C04F1E2 mov Rm,Rn */
	IF(0x0C04F1E4u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C04F1E6u, 2);  /* 0C04F1E4 mov.b @(r0,Rm),Rn */
	r1 += 0x1u;  /* 0C04F1E6 add #imm,Rn */
	UPD(0x0C04F1E8u, 1);
L_0C04F1E8: BLKS(0x0C04F1E8u);
	IF(0x0C04F1E8u); W8(r0 + r8, r1); UPD(0x0C04F1EAu, 1);  /* 0C04F1E8 mov.b Rm,@(r0,Rn) */
L_0C04F1EA: BLKS(0x0C04F1EAu);
	{ IF(0x0C04F1ECu); ; /* slot nop */ UPD(0x0C04F0CCu, 3); goto L_0C04F0CC; }  /* 0C04F1EA bra */
L_0C04F1F0: BLKS(0x0C04F1F0u);
	r6 = 0xC275568u; UPD(0x0C04F1F2u, 1);  /* 0C04F1F0 mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C04F1F2 mov Rm,Rn */
	IF(0x0C04F1F4u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C04F1F6u, 2);  /* 0C04F1F4 mov.b @(r0,Rm),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C04F1F6 add #imm,Rn */
	IF(0x0C04F1F8u); W8(r0 + r8, r3); UPD(0x0C04F1FAu, 2);  /* 0C04F1F8 mov.b Rm,@(r0,Rn) */
	r0 = r3 & 0xFF;  /* 0C04F1FA extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04F1FC tst Rm,Rn */
	{ u32 c_ = !T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04F1EAu, 5); goto L_0C04F1EA; } goto L_0C04F202; }  /* 0C04F1FE bf/s */
L_0C04F202: BLKS(0x0C04F202u);
	r10 = 0xC160454u; UPD(0x0C04F204u, 2);  /* 0C04F202 mov.l @(disp,pc),Rn */
	IF(0x0C04F204u); r0 <<= 2;  /* 0C04F204 shll2 Rn */
	IF(0x0C04F206u); r2 = R32(r0 + r10); UPD(0x0C04F208u, 2);  /* 0C04F206 mov.l @(r0,Rm),Rn */
	r1 = 0x3Cu;  /* 0C04F208 mov #imm,Rn */
	r11 = 0xC21F89Cu; UPD(0x0C04F20Cu, 2);  /* 0C04F20A mov.l @(disp,pc),Rn */
	r10 = r7;  /* 0C04F20C mov Rm,Rn */
	r3 = 0xFFu; UPD(0x0C04F210u, 2);  /* 0C04F20E mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C04F210 add #imm,Rn */
	r0 = R32(r11); UPD(0x0C04F214u, 2);  /* 0C04F212 mov.l @Rm,Rn */
	r3 -= r2;  /* 0C04F214 sub Rm,Rn */
	r0 &= r3;  /* 0C04F216 and Rm,Rn */
	W32(r11, r0); UPD(0x0C04F21Au, 3);  /* 0C04F218 mov.l Rm,@Rn */
	r0 = r4;  /* 0C04F21A mov Rm,Rn */
	IF(0x0C04F21Cu); W8(r0 + r8, r10); UPD(0x0C04F21Eu, 2);  /* 0C04F21C mov.b Rm,@(r0,Rn) */
	{ r0 = r6; /* slot mov Rm,Rn */ UPD(0x0C04F1E8u, 3); goto L_0C04F1E8; }  /* 0C04F21E bra */
L_0C04F230: BLKS(0x0C04F230u);
	r0 = 0xC220C20u; UPD(0x0C04F232u, 1);  /* 0C04F230 mov.l @(disp,pc),Rn */
	r2 = 0xC160450u; UPD(0x0C04F234u, 1);  /* 0C04F232 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)R8(r0); UPD(0x0C04F236u, 1);  /* 0C04F234 mov.b @Rm,Rn */
	r0 = r2;  /* 0C04F236 mov Rm,Rn */
	IF(0x0C04F238u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C04F23Au, 2);  /* 0C04F238 mov.b @(r0,Rm),Rn */
	T = (r11 & r10) == 0;  /* 0C04F23A tst Rm,Rn */
	{ u32 c_ = T; r4 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04F24Cu, 4); goto L_0C04F24C; } goto L_0C04F240; }  /* 0C04F23C bt/s */
L_0C04F240: BLKS(0x0C04F240u);
	r0 = r12;  /* 0C04F240 mov Rm,Rn */
	r4 += 0x1u;  /* 0C04F242 add #imm,Rn */
	IF(0x0C04F244u); W8(r0 + r8, r4); UPD(0x0C04F246u, 4);  /* 0C04F244 mov.b Rm,@(r0,Rn) */
	r3 = 0xC395084u; UPD(0x0C04F248u, 1);  /* 0C04F246 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C04F248 mov Rm,Rn */
	IF(0x0C04F24Au); W8(r0 + r8, r7); UPD(0x0C04F24Cu, 2);  /* 0C04F24A mov.b Rm,@(r0,Rn) */
L_0C04F24C: BLKS(0x0C04F24Cu);
	{ IF(0x0C04F24Eu); ; /* slot nop */ UPD(0x0C04F0ACu, 3); goto L_0C04F0AC; }  /* 0C04F24C bra */
L_0C04F250: BLKS(0x0C04F250u);
	T = r0 == 0x2u;  /* 0C04F250 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r10 = 0x7u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C04F24Cu, 4); goto L_0C04F24C; } goto L_0C04F256; }  /* 0C04F252 bf/s */
L_0C04F256: BLKS(0x0C04F256u);
	r2 = 0xC395084u; UPD(0x0C04F258u, 2);  /* 0C04F256 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C04F258 mov Rm,Rn */
	IF(0x0C04F25Au); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C04F25Cu, 2);  /* 0C04F25A mov.b @(r0,Rm),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C04F25C add #imm,Rn */
	r11 = r3 & 0xFF;  /* 0C04F25E extu.b Rm,Rn */
	T = r11 > r10;  /* 0C04F260 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C04F284u, 6); goto L_0C04F284; }  /* 0C04F262 bt */
L_0C04F264: BLKS(0x0C04F264u);
	r1 = 0xC286278u; UPD(0x0C04F266u, 1);  /* 0C04F264 mov.l @(disp,pc),Rn */
	r0 = r1;  /* 0C04F266 mov Rm,Rn */
	IF(0x0C04F268u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C04F26Au, 2);  /* 0C04F268 mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C04F26A add #imm,Rn */
	IF(0x0C04F26Cu); W8(r0 + r6, r4); UPD(0x0C04F26Eu, 2);  /* 0C04F26C mov.b Rm,@(r0,Rn) */
	r7 = 0xC26C878u; UPD(0x0C04F270u, 1);  /* 0C04F26E mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C04F270 mov Rm,Rn */
	IF(0x0C04F272u); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C04F274u, 2);  /* 0C04F272 mov.b @(r0,Rm),Rn */
	r0 = r6;  /* 0C04F274 mov Rm,Rn */
	T = r0 == 0x9u;  /* 0C04F276 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C04F284u, 5); goto L_0C04F284; }  /* 0C04F278 bt */
L_0C04F27A: BLKS(0x0C04F27Au);
	r11 = 0xC220C50u; UPD(0x0C04F27Cu, 1);  /* 0C04F27A mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C04F27C mov Rm,Rn */
	IF(0x0C04F27Eu); r10 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C04F280u, 2);  /* 0C04F27E mov.b @(r0,Rm),Rn */
	r10 += 0x1u;  /* 0C04F280 add #imm,Rn */
	IF(0x0C04F282u); W8(r0 + r5, r10); UPD(0x0C04F284u, 2);  /* 0C04F282 mov.b Rm,@(r0,Rn) */
L_0C04F284: BLKS(0x0C04F284u);
	r2 = 0xC392E00u; UPD(0x0C04F286u, 1);  /* 0C04F284 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C04F286 mov #imm,Rn */
	r0 = r2;  /* 0C04F288 mov Rm,Rn */
	IF(0x0C04F28Au); W8(r0 + r8, r3); UPD(0x0C04F28Cu, 3);  /* 0C04F28A mov.b Rm,@(r0,Rn) */
L_0C04F28C: BLKS(0x0C04F28Cu);
	{ IF(0x0C04F28Eu); ; /* slot nop */ UPD(0x0C04F0ACu, 3); goto L_0C04F0AC; }  /* 0C04F28C bra */
L_0C04F290: BLKS(0x0C04F290u);
	r10 = 0xC160450u; UPD(0x0C04F292u, 1);  /* 0C04F290 mov.l @(disp,pc),Rn */
	r11 = 0xC220C20u; UPD(0x0C04F294u, 1);  /* 0C04F292 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C04F294 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r11); UPD(0x0C04F298u, 2);  /* 0C04F296 mov.b @Rm,Rn */
	IF(0x0C04F298u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C04F29Au, 1);  /* 0C04F298 mov.b @(r0,Rm),Rn */
	T = (r6 & r7) == 0;  /* 0C04F29A tst Rm,Rn */
	{ u32 c_ = T; r0 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04F2C0u, 4); goto L_0C04F2C0; } goto L_0C04F2A0; }  /* 0C04F29C bt/s */
L_0C04F2A0: BLKS(0x0C04F2A0u);
	r2 = 0xC395084u; UPD(0x0C04F2A2u, 2);  /* 0C04F2A0 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C04F2A2 mov Rm,Rn */
	IF(0x0C04F2A4u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C04F2A6u, 2);  /* 0C04F2A4 mov.b @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C04F2A6 add #imm,Rn */
	IF(0x0C04F2A8u); W8(r0 + r8, r3); UPD(0x0C04F2AAu, 2);  /* 0C04F2A8 mov.b Rm,@(r0,Rn) */
	r1 = r3 & 0xFF;  /* 0C04F2AA extu.b Rm,Rn */
	r0 = 0xFu;  /* 0C04F2AC mov #imm,Rn */
	T = r1 > r0;  /* 0C04F2AE cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C04F28Cu, 6); goto L_0C04F28C; }  /* 0C04F2B0 bf */
L_0C04F2B2: BLKS(0x0C04F2B2u);
	r7 = 0xC283748u; UPD(0x0C04F2B4u, 1);  /* 0C04F2B2 mov.l @(disp,pc),Rn */
	{ W8(r7, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C04F0ACu, 3); goto L_0C04F0AC; }  /* 0C04F2B4 bra */
L_0C04F2C0: BLKS(0x0C04F2C0u);
	r4 = r3;  /* 0C04F2C0 mov Rm,Rn */
	r4 += 0x1u;  /* 0C04F2C2 add #imm,Rn */
	{ IF(0x0C04F2C6u); W8(r0 + r8, r4); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C04F0ACu, 5); goto L_0C04F0AC; }  /* 0C04F2C4 bra */
}

/* FUN_0c04f330 */
void f_0C04F330(sh3_t *c)
{
	LOCALS;
L_0C04F330: BLKS(0x0C04F330u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C04F332u, 1);  /* 0C04F330 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04F334u, 1);  /* 0C04F332 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C04F336u, 1);  /* 0C04F334 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C04F338u, 1);  /* 0C04F336 mov.l Rm,@-Rn */
	r2 = 0xC286724u; UPD(0x0C04F33Au, 1);  /* 0C04F338 mov.l @(disp,pc),Rn */
	IF(0x0C04F33Au); r15 -= 4; W32(r15, PR); UPD(0x0C04F33Cu, 1);  /* 0C04F33A sts.l pr,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C04F33Eu, 1);  /* 0C04F33C mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04F33E tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04F34Au, 4); goto L_0C04F34A; } goto L_0C04F344; }  /* 0C04F340 bt/s */
L_0C04F344: BLKS(0x0C04F344u);
	r0 = 0xC21E106u; UPD(0x0C04F346u, 2);  /* 0C04F344 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C04F346 mov #imm,Rn */
	W8(r0, r1); UPD(0x0C04F34Au, 2);  /* 0C04F348 mov.b Rm,@Rn */
L_0C04F34A: BLKS(0x0C04F34Au);
	r4 = 0xC0B0640u; UPD(0x0C04F34Cu, 1);  /* 0C04F34A mov.l @(disp,pc),Rn */
	IF(0x0C04F34Cu); { u32 t_ = r4; PR = 0x0C04F350u; IF(0x0C04F34Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B0640, 0x0C0B0640u, 0x0C04F350u); }  /* 0C04F34C jsr @Rn */
L_0C04F350: BLKS(0x0C04F350u);
	r2 = 0xC283C94u; UPD(0x0C04F352u, 1);  /* 0C04F350 mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C04F354u, 1);  /* 0C04F352 mov.l @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C04F354 tst Rm,Rn */
	{ u32 c_ = T; r8 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04F366u, 4); goto L_0C04F366; } goto L_0C04F35A; }  /* 0C04F356 bt/s */
L_0C04F35A: BLKS(0x0C04F35Au);
	r9 = 0xC04A0A4u; UPD(0x0C04F35Cu, 2);  /* 0C04F35A mov.l @(disp,pc),Rn */
L_0C04F35C: BLKS(0x0C04F35Cu);
	IF(0x0C04F35Cu); { u32 t_ = r9; PR = 0x0C04F360u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04A0A4, 0x0C04A0A4u, 0x0C04F360u); }  /* 0C04F35C jsr @Rn */
L_0C04F360: BLKS(0x0C04F360u);
	r5 = R32(r8); UPD(0x0C04F362u, 1);  /* 0C04F360 mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C04F362 tst Rm,Rn */
	if (!T) { UPD(0x0C04F35Cu, 4); goto L_0C04F35C; }  /* 0C04F364 bf */
L_0C04F366: BLKS(0x0C04F366u);
	r10 = 0xC28674Cu; UPD(0x0C04F368u, 1);  /* 0C04F366 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C04F36Au, 1);  /* 0C04F368 mov.w @Rm,Rn */
	r9 = 0xC286298u; UPD(0x0C04F36Cu, 1);  /* 0C04F36A mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C04F36C add #imm,Rn */
	W16(r10, r3); UPD(0x0C04F370u, 2);  /* 0C04F36E mov.w Rm,@Rn */
	r2 = R32(r9); UPD(0x0C04F372u, 1);  /* 0C04F370 mov.l @Rm,Rn */
	r10 = 0x0u;  /* 0C04F372 mov #imm,Rn */
	r7 = 0xC04F550u; UPD(0x0C04F376u, 2);  /* 0C04F374 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C04F376 add #imm,Rn */
	r0 = 0xC3929AEu; UPD(0x0C04F37Au, 2);  /* 0C04F378 mov.l @(disp,pc),Rn */
	r8 = 0xC220C3Cu; UPD(0x0C04F37Cu, 1);  /* 0C04F37A mov.l @(disp,pc),Rn */
	W32(r9, r2); UPD(0x0C04F37Eu, 1);  /* 0C04F37C mov.l Rm,@Rn */
	W16(r0, r10); UPD(0x0C04F380u, 1);  /* 0C04F37E mov.w Rm,@Rn */
	IF(0x0C04F380u); { u32 t_ = r7; PR = 0x0C04F384u; W8(r8, r10); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C04F550, 0x0C04F550u, 0x0C04F384u); }  /* 0C04F380 jsr @Rn */
L_0C04F384: BLKS(0x0C04F384u);
	r7 = 0xC392DE0u; UPD(0x0C04F386u, 1);  /* 0C04F384 mov.l @(disp,pc),Rn */
	r6 = 0xC220C38u; UPD(0x0C04F388u, 1);  /* 0C04F386 mov.l @(disp,pc),Rn */
	r2 = R32(r7); UPD(0x0C04F38Au, 1);  /* 0C04F388 mov.l @Rm,Rn */
	r3 = R32(r6); UPD(0x0C04F38Cu, 1);  /* 0C04F38A mov.l @Rm,Rn */
	T = (s32)r2 > (s32)r3;  /* 0C04F38C cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = (s32)r2 >= (s32)r3; /* slot cmp/ge Rm,Rn */ if (c_) { UPD(0x0C04F39Cu, 4); goto L_0C04F39C; } goto L_0C04F392; }  /* 0C04F38E bf/s */
L_0C04F392: BLKS(0x0C04F392u);
	r4 = r2;  /* 0C04F392 mov Rm,Rn */
	r4 += 0xFFFFFFFFu;  /* 0C04F394 add #imm,Rn */
	W32(r7, r4); UPD(0x0C04F398u, 4);  /* 0C04F396 mov.l Rm,@Rn */
	r2 = r4;  /* 0C04F398 mov Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C04F39A cmp/ge Rm,Rn */
	UPD(0x0C04F39Cu, 2);
L_0C04F39C: BLKS(0x0C04F39Cu);
	{ u32 c_ = T; r2 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C04F3A2u, 3); goto L_0C04F3A2; } goto L_0C04F3A0; }  /* 0C04F39C bt/s */
L_0C04F3A0: BLKS(0x0C04F3A0u);
	W32(r7, r2); UPD(0x0C04F3A2u, 2);  /* 0C04F3A0 mov.l Rm,@Rn */
L_0C04F3A2: BLKS(0x0C04F3A2u);
	r0 = 0xC04A1A8u; UPD(0x0C04F3A4u, 1);  /* 0C04F3A2 mov.l @(disp,pc),Rn */
	r4 = 0x5u;  /* 0C04F3A4 mov #imm,Rn */
	r8 = 0xC39307Cu; UPD(0x0C04F3A8u, 2);  /* 0C04F3A6 mov.l @(disp,pc),Rn */
	IF(0x0C04F3A8u); { u32 t_ = r0; PR = 0x0C04F3ACu; r9 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04A1A8, 0x0C04A1A8u, 0x0C04F3ACu); }  /* 0C04F3A8 jsr @Rn */
L_0C04F3AC: BLKS(0x0C04F3ACu);
	W32(r8, r0); UPD(0x0C04F3AEu, 1);  /* 0C04F3AC mov.l Rm,@Rn */
	r0 -= r9;  /* 0C04F3AE sub Rm,Rn */
	r8 = 0xC275DBCu; UPD(0x0C04F3B2u, 2);  /* 0C04F3B0 mov.l @(disp,pc),Rn */
	r9 = 0xC392B00u; UPD(0x0C04F3B4u, 1);  /* 0C04F3B2 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C04F3B6u, 1);  /* 0C04F3B4 mov.b @Rm,Rn */
	W32(r9, r0); UPD(0x0C04F3B8u, 1);  /* 0C04F3B6 mov.l Rm,@Rn */
	T = (r7 & r7) == 0;  /* 0C04F3B8 tst Rm,Rn */
	r6 = 0xC220C20u; UPD(0x0C04F3BCu, 2);  /* 0C04F3BA mov.l @(disp,pc),Rn */
	r8 = 0xFFFFFFFFu;  /* 0C04F3BC mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C04F3C0u, 2);  /* 0C04F3BE mov.b @Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C04F3C0 negc Rm,Rn */
	IF(0x0C04F3C2u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C04F3C2 shar Rn */
	r0 &= 0x1u;  /* 0C04F3C4 and #imm,r0 */
	r5 &= r0;  /* 0C04F3C6 and Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C04F3C8 tst Rm,Rn */
	if (!T) { UPD(0x0C04F420u, 8); goto L_0C04F420; }  /* 0C04F3CA bf */
L_0C04F3CC: BLKS(0x0C04F3CCu);
	r2 = 0xC283540u; UPD(0x0C04F3CEu, 1);  /* 0C04F3CC mov.l @(disp,pc),Rn */
	r7 = 0xC283748u; UPD(0x0C04F3D0u, 1);  /* 0C04F3CE mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C04F3D2u, 1);  /* 0C04F3D0 mov.b @Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C04F3D4u, 1);  /* 0C04F3D2 mov.b @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C04F3D4 tst Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C04F3D6 negc Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C04F3D8 tst Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C04F3DA negc Rm,Rn */
	T = (r5 & r4) == 0;  /* 0C04F3DC tst Rm,Rn */
	if (!T) { UPD(0x0C04F410u, 8); goto L_0C04F410; }  /* 0C04F3DE bf */
L_0C04F3E0: BLKS(0x0C04F3E0u);
	r7 = 0xC28626Cu; UPD(0x0C04F3E2u, 1);  /* 0C04F3E0 mov.l @(disp,pc),Rn */
	r6 = 0xB8000050u; UPD(0x0C04F3E4u, 1);  /* 0C04F3E2 mov.l @(disp,pc),Rn */
	r5 = R32(r7); UPD(0x0C04F3E6u, 1);  /* 0C04F3E4 mov.l @Rm,Rn */
	r4 = R32(r6); UPD(0x0C04F3E8u, 1);  /* 0C04F3E6 mov.l @Rm,Rn */
	T = r5 == r4;  /* 0C04F3E8 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C04F3F2u, 4); goto L_0C04F3F2; }  /* 0C04F3EA bt */
L_0C04F3EC: BLKS(0x0C04F3ECu);
	r9 = 0xC04F4A0u; UPD(0x0C04F3EEu, 1);  /* 0C04F3EC mov.l @(disp,pc),Rn */
	IF(0x0C04F3EEu); { u32 t_ = r9; PR = 0x0C04F3F2u; IF(0x0C04F3F0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F4A0, 0x0C04F4A0u, 0x0C04F3F2u); }  /* 0C04F3EE jsr @Rn */
L_0C04F3F2: BLKS(0x0C04F3F2u);
	r8 = 0xC286724u; UPD(0x0C04F3F4u, 1);  /* 0C04F3F2 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C04F3F6u, 1);  /* 0C04F3F4 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C04F3F6 tst Rm,Rn */
	if (!T) { UPD(0x0C04F3FEu, 4); goto L_0C04F3FE; }  /* 0C04F3F8 bf */
L_0C04F3FA: BLKS(0x0C04F3FAu);
	r0 = 0xC21E106u; UPD(0x0C04F3FCu, 1);  /* 0C04F3FA mov.l @(disp,pc),Rn */
	W8(r0, r10); UPD(0x0C04F3FEu, 1);  /* 0C04F3FC mov.b Rm,@Rn */
L_0C04F3FE: BLKS(0x0C04F3FEu);
	r4 = 0xC286500u; UPD(0x0C04F400u, 1);  /* 0C04F3FE mov.l @(disp,pc),Rn */
	r3 = 0xC04BF60u; UPD(0x0C04F402u, 1);  /* 0C04F400 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C04F402 mov Rm,Rn */
	IF(0x0C04F404u); PR = R32(r15); r15 += 4; UPD(0x0C04F406u, 2);  /* 0C04F404 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C04F408u, 1);  /* 0C04F406 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C04F40Au, 1);  /* 0C04F408 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04F40Cu, 1);  /* 0C04F40A mov.l @Rm+,Rn */
	IF(0x0C04F40Cu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C04BF60u: TAIL(f_0C04BF60); default: JUMPD(tv_); } }  /* 0C04F40C jmp @Rn */
L_0C04F410: BLKS(0x0C04F410u);
	r8 = 0xC04F4A0u; UPD(0x0C04F412u, 1);  /* 0C04F410 mov.l @(disp,pc),Rn */
	r3 = 0x12345678u; UPD(0x0C04F414u, 1);  /* 0C04F412 mov.l @(disp,pc),Rn */
	r0 = 0xC286720u; UPD(0x0C04F416u, 1);  /* 0C04F414 mov.l @(disp,pc),Rn */
	IF(0x0C04F416u); { u32 t_ = r8; PR = 0x0C04F41Au; W32(r0, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C04F4A0, 0x0C04F4A0u, 0x0C04F41Au); }  /* 0C04F416 jsr @Rn */
L_0C04F41A: BLKS(0x0C04F41Au);
	{ IF(0x0C04F41Cu); ; /* slot nop */ UPD(0x0C04F3E0u, 3); goto L_0C04F3E0; }  /* 0C04F41A bra */
L_0C04F420: BLKS(0x0C04F420u);
	r2 = 0xC04F4A0u; UPD(0x0C04F422u, 1);  /* 0C04F420 mov.l @(disp,pc),Rn */
	r3 = 0x12345678u; UPD(0x0C04F424u, 1);  /* 0C04F422 mov.l @(disp,pc),Rn */
	r0 = 0xC21CA28u; UPD(0x0C04F426u, 1);  /* 0C04F424 mov.l @(disp,pc),Rn */
	IF(0x0C04F426u); { u32 t_ = r2; PR = 0x0C04F42Au; W32(r0, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C04F4A0, 0x0C04F4A0u, 0x0C04F42Au); }  /* 0C04F426 jsr @Rn */
L_0C04F42A: BLKS(0x0C04F42Au);
	{ IF(0x0C04F42Cu); ; /* slot nop */ UPD(0x0C04F3CCu, 3); goto L_0C04F3CC; }  /* 0C04F42A bra */
}

/* FUN_0c04f4a0 */
void f_0C04F4A0(sh3_t *c)
{
	LOCALS;
L_0C04F4A0: BLKS(0x0C04F4A0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C04F4A2u, 1);  /* 0C04F4A0 mov.l Rm,@-Rn */
	r0 = 0xC04EBC0u; UPD(0x0C04F4A4u, 1);  /* 0C04F4A2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C04F4A4 mov Rm,Rn */
	r15 = r14;  /* 0C04F4A6 mov Rm,Rn */
	IF(0x0C04F4A8u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C04EBC0u: TAIL(f_0C04EBC0); default: JUMPD(tv_); } }  /* 0C04F4A8 jmp @Rn */
}

/* FUN_0c04f4b0 */
void f_0C04F4B0(sh3_t *c)
{
	LOCALS;
L_0C04F4B0: BLKS(0x0C04F4B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C04F4B2u, 1);  /* 0C04F4B0 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C04F4B2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04F4B6u, 2);  /* 0C04F4B4 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C04F4B6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C04F4BAu, 2);  /* 0C04F4B8 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C04F4BCu, 1);  /* 0C04F4BA mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C04F4BEu, 1);  /* 0C04F4BC mov.l Rm,@-Rn */
	r11 = 0x3Fu;  /* 0C04F4BE mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C04F4C2u, 2);  /* 0C04F4C0 mov.l Rm,@-Rn */
	r12 = 0x0u;  /* 0C04F4C2 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C04F4C6u, 2);  /* 0C04F4C4 mov.l Rm,@-Rn */
	r13 = 0x2u;  /* 0C04F4C6 mov #imm,Rn */
	r14 = r15;  /* 0C04F4C8 mov Rm,Rn */
	UPD(0x0C04F4CAu, 2);
L_0C04F4CA: BLKS(0x0C04F4CAu);
	r10 = 0xC21F5EAu; UPD(0x0C04F4CCu, 1);  /* 0C04F4CA mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C04F4CC mov #imm,Rn */
	r9 = 0xC2177F8u; UPD(0x0C04F4D0u, 2);  /* 0C04F4CE mov.l @(disp,pc),Rn */
	r10 += r12;  /* 0C04F4D0 add Rm,Rn */
	r8 = 0xC27DDF4u; UPD(0x0C04F4D4u, 2);  /* 0C04F4D2 mov.l @(disp,pc),Rn */
	r9 += r12;  /* 0C04F4D4 add Rm,Rn */
	r4 = 0xC2862A2u; UPD(0x0C04F4D8u, 2);  /* 0C04F4D6 mov.l @(disp,pc),Rn */
	r8 += r12;  /* 0C04F4D8 add Rm,Rn */
	r4 += r12;  /* 0C04F4DA add Rm,Rn */
	UPD(0x0C04F4DCu, 2);
L_0C04F4DC: BLKS(0x0C04F4DCu);
	r7 = r10;  /* 0C04F4DC mov Rm,Rn */
	r3 = r9;  /* 0C04F4DE mov Rm,Rn */
	r2 = r8;  /* 0C04F4E0 mov Rm,Rn */
	r1 = r4;  /* 0C04F4E2 mov Rm,Rn */
	r7 += r6;  /* 0C04F4E4 add Rm,Rn */
	r3 += r6;  /* 0C04F4E6 add Rm,Rn */
	r2 += r6;  /* 0C04F4E8 add Rm,Rn */
	r1 += r6;  /* 0C04F4EA add Rm,Rn */
	r6 += 0x1u;  /* 0C04F4EC add #imm,Rn */
	W8(r1, r5); UPD(0x0C04F4F0u, 10);  /* 0C04F4EE mov.b Rm,@Rn */
	T = (s32)r6 > (s32)r11;  /* 0C04F4F0 cmp/gt Rm,Rn */
	W8(r2, r5); UPD(0x0C04F4F4u, 2);  /* 0C04F4F2 mov.b Rm,@Rn */
	W8(r3, r5); UPD(0x0C04F4F6u, 1);  /* 0C04F4F4 mov.b Rm,@Rn */
	{ u32 c_ = !T; W8(r7, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C04F4DCu, 3); goto L_0C04F4DC; } UPD(0x0C04F4FAu, 1); goto L_0C04F4FA; }  /* 0C04F4F6 bf/s */
L_0C04F4FA: BLKS(0x0C04F4FAu);
	r2 = 0x80u; UPD(0x0C04F4FCu, 1);  /* 0C04F4FA mov.w @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C04F4FC add #imm,Rn */
	T = (s32)r0 > (s32)r13;  /* 0C04F4FE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 += r2; /* slot add Rm,Rn */ if (c_) { UPD(0x0C04F4CAu, 5); goto L_0C04F4CA; } goto L_0C04F504; }  /* 0C04F500 bf/s */
L_0C04F504: BLKS(0x0C04F504u);
	r7 = 0x545Fu; UPD(0x0C04F506u, 2);  /* 0C04F504 mov.w @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C04F506 mov #imm,Rn */
	r3 = 0xC386804u; UPD(0x0C04F50Au, 2);  /* 0C04F508 mov.l @(disp,pc),Rn */
	r2 = 0xC152C10u; UPD(0x0C04F50Cu, 1);  /* 0C04F50A mov.l @(disp,pc),Rn */
L_0C04F50C: BLKS(0x0C04F50Cu);
	IF(0x0C04F50Cu); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C04F50Eu, 1);  /* 0C04F50C mov.b @(r0,Rm),Rn */
	IF(0x0C04F50Eu); W8(r0 + r3, r4); UPD(0x0C04F510u, 1);  /* 0C04F50E mov.b Rm,@(r0,Rn) */
	r0 += 0x1u;  /* 0C04F510 add #imm,Rn */
	T = (s32)r0 > (s32)r7;  /* 0C04F512 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C04F50Cu, 5); goto L_0C04F50C; }  /* 0C04F514 bf */
L_0C04F516: BLKS(0x0C04F516u);
	r15 = r14;  /* 0C04F516 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C04F51Au, 2);  /* 0C04F518 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C04F51Cu, 1);  /* 0C04F51A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C04F51Eu, 1);  /* 0C04F51C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C04F520u, 1);  /* 0C04F51E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C04F522u, 1);  /* 0C04F520 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04F524u, 1);  /* 0C04F522 mov.l @Rm+,Rn */
	IF(0x0C04F524u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04F524 rts */
}

/* FUN_0c04f550 */
void f_0C04F550(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C04F634);
L_0C04F550: BLKS(0x0C04F550u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C04F552u, 1);  /* 0C04F550 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04F554u, 1);  /* 0C04F552 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C04F556u, 1);  /* 0C04F554 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C04F558u, 1);  /* 0C04F556 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C04F55Au, 1);  /* 0C04F558 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C04F55Cu, 1);  /* 0C04F55A mov.l Rm,@-Rn */
	r2 = 0xC26C8CCu; UPD(0x0C04F55Eu, 1);  /* 0C04F55C mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C04F560u, 1);  /* 0C04F55E mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C04F562u, 1);  /* 0C04F560 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04F562 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04F56Cu, 4); goto L_0C04F56C; } goto L_0C04F568; }  /* 0C04F564 bf/s */
L_0C04F568: BLKS(0x0C04F568u);
	{ IF(0x0C04F56Au); ; /* slot nop */ UPD(0x0C04F6CEu, 4); goto L_0C04F6CE; }  /* 0C04F568 bra */
L_0C04F56C: BLKS(0x0C04F56Cu);
	r7 = 0x81u; UPD(0x0C04F56Eu, 1);  /* 0C04F56C mov.w @(disp,pc),Rn */
	r2 = 0x3Eu;  /* 0C04F56E mov #imm,Rn */
	r3 = 0x80u; UPD(0x0C04F572u, 2);  /* 0C04F570 mov.w @(disp,pc),Rn */
	r8 = 0xC21F5EAu; UPD(0x0C04F574u, 1);  /* 0C04F572 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C04F574 mov Rm,Rn */
	UPD(0x0C04F576u, 1);
L_0C04F576: BLKS(0x0C04F576u);
	r0 += r8;  /* 0C04F576 add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r0); UPD(0x0C04F57Au, 2);  /* 0C04F578 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C04F57A add #imm,Rn */
	W8(r0, r13); UPD(0x0C04F57Eu, 2);  /* 0C04F57C mov.b Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C04F57E add #imm,Rn */
	IF(0x0C04F580u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C04F582u, 2);  /* 0C04F580 mov.b @(r0,Rm),Rn */
	IF(0x0C04F582u); W8(r0 + r7, r4); UPD(0x0C04F584u, 1);  /* 0C04F582 mov.b Rm,@(r0,Rn) */
	r4 = 0xC2177F8u; UPD(0x0C04F586u, 1);  /* 0C04F584 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C04F586 mov Rm,Rn */
	r0 += r4;  /* 0C04F588 add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r0); UPD(0x0C04F58Cu, 3);  /* 0C04F58A mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C04F58C add #imm,Rn */
	W8(r0, r12); UPD(0x0C04F590u, 2);  /* 0C04F58E mov.b Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C04F590 add #imm,Rn */
	IF(0x0C04F592u); r11 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C04F594u, 2);  /* 0C04F592 mov.b @(r0,Rm),Rn */
	IF(0x0C04F594u); W8(r0 + r7, r11); UPD(0x0C04F596u, 1);  /* 0C04F594 mov.b Rm,@(r0,Rn) */
	r0 = 0xC27DDF4u; UPD(0x0C04F598u, 1);  /* 0C04F596 mov.l @(disp,pc),Rn */
	r0 += r2;  /* 0C04F598 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C04F59Cu, 2);  /* 0C04F59A mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C04F59C add #imm,Rn */
	W8(r0, r10); UPD(0x0C04F5A0u, 2);  /* 0C04F59E mov.b Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C04F5A0 add #imm,Rn */
	IF(0x0C04F5A2u); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C04F5A4u, 2);  /* 0C04F5A2 mov.b @(r0,Rm),Rn */
	IF(0x0C04F5A4u); W8(r0 + r7, r9); UPD(0x0C04F5A6u, 1);  /* 0C04F5A4 mov.b Rm,@(r0,Rn) */
	r0 = 0xC2862A2u; UPD(0x0C04F5A8u, 1);  /* 0C04F5A6 mov.l @(disp,pc),Rn */
	r0 += r2;  /* 0C04F5A8 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r0); UPD(0x0C04F5ACu, 2);  /* 0C04F5AA mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C04F5AC add #imm,Rn */
	W8(r0, r6); UPD(0x0C04F5B0u, 2);  /* 0C04F5AE mov.b Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C04F5B0 add #imm,Rn */
	IF(0x0C04F5B2u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C04F5B4u, 2);  /* 0C04F5B2 mov.b @(r0,Rm),Rn */
	IF(0x0C04F5B4u); W8(r0 + r7, r5); UPD(0x0C04F5B6u, 1);  /* 0C04F5B4 mov.b Rm,@(r0,Rn) */
	r0 = r2;  /* 0C04F5B6 mov Rm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C04F5B8 add #imm,Rn */
	r2 = (u32)(s32)(s8)r0;  /* 0C04F5BA exts.b Rm,Rn */
	IF(0x0C04F5BCu); T = (s32)r2 >= 0;  /* 0C04F5BC cmp/pz Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04F576u, 7); goto L_0C04F576; } goto L_0C04F5C2; }  /* 0C04F5BE bt/s */
L_0C04F5C2: BLKS(0x0C04F5C2u);
	r9 = 0xA4000124u; UPD(0x0C04F5C4u, 2);  /* 0C04F5C2 mov.l @(disp,pc),Rn */
	r2 = 0x10u;  /* 0C04F5C4 mov #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C04F5C8u, 2);  /* 0C04F5C6 mov.b @Rm,Rn */
	r5 = 0x20u;  /* 0C04F5C8 mov #imm,Rn */
	r10 = 0xA4000126u; UPD(0x0C04F5CCu, 2);  /* 0C04F5CA mov.l @(disp,pc),Rn */
	r12 = ~r7;  /* 0C04F5CC not Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C04F5D0u, 2);  /* 0C04F5CE mov.b @Rm,Rn */
	r2 &= r12;  /* 0C04F5D0 and Rm,Rn */
	r0 &= 0x7Fu;  /* 0C04F5D2 and #imm,r0 */
	r7 = 0x7Fu;  /* 0C04F5D4 mov #imm,Rn */
	IF(0x0C04F5D6u); r2 <<= 2;  /* 0C04F5D6 shll2 Rn */
	r7 ^= r0;  /* 0C04F5D8 xor Rm,Rn */
	r2 += r2;  /* 0C04F5DA add Rm,Rn */
	r7 |= r2;  /* 0C04F5DC or Rm,Rn */
	W8(r8, r7); UPD(0x0C04F5E0u, 8);  /* 0C04F5DE mov.b Rm,@Rn */
	r5 &= r12;  /* 0C04F5E0 and Rm,Rn */
	r13 = 0xA4000134u; UPD(0x0C04F5E4u, 2);  /* 0C04F5E2 mov.l @(disp,pc),Rn */
	IF(0x0C04F5E4u); r5 <<= 2;  /* 0C04F5E4 shll2 Rn */
	r0 = (u32)(s32)(s8)R8(r13); UPD(0x0C04F5E8u, 2);  /* 0C04F5E6 mov.b @Rm,Rn */
	r10 = r7;  /* 0C04F5E8 mov Rm,Rn */
	r0 &= 0x7Fu;  /* 0C04F5EA and #imm,r0 */
	r13 = 0x7Fu;  /* 0C04F5EC mov #imm,Rn */
	r13 ^= r0;  /* 0C04F5EE xor Rm,Rn */
	r13 |= r5;  /* 0C04F5F0 or Rm,Rn */
	r5 = r8;  /* 0C04F5F2 mov Rm,Rn */
	r5 += 0x1u; UPD(0x0C04F5F6u, 7);  /* 0C04F5F4 add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r5); UPD(0x0C04F5F8u, 1);  /* 0C04F5F6 mov.b @Rm,Rn */
	r6 = r7;  /* 0C04F5F8 mov Rm,Rn */
	r10 ^= r11;  /* 0C04F5FA xor Rm,Rn */
	r9 = 0x80u; UPD(0x0C04F5FEu, 3);  /* 0C04F5FC mov.w @(disp,pc),Rn */
	r6 &= r10;  /* 0C04F5FE and Rm,Rn */
	r0 = r8;  /* 0C04F600 mov Rm,Rn */
	IF(0x0C04F602u); W8(r0 + r9, r6); UPD(0x0C04F604u, 3);  /* 0C04F602 mov.b Rm,@(r0,Rn) */
	r12 = r13;  /* 0C04F604 mov Rm,Rn */
	W8(r4, r13); UPD(0x0C04F608u, 2);  /* 0C04F606 mov.b Rm,@Rn */
	r6 = r4;  /* 0C04F608 mov Rm,Rn */
	r6 += 0x1u;  /* 0C04F60A add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C04F60Eu, 3);  /* 0C04F60C mov.b @Rm,Rn */
	r3 = r13;  /* 0C04F60E mov Rm,Rn */
	r12 ^= r0;  /* 0C04F610 xor Rm,Rn */
	r3 &= r12;  /* 0C04F612 and Rm,Rn */
	r0 = r4;  /* 0C04F614 mov Rm,Rn */
	IF(0x0C04F616u); W8(r0 + r9, r3); UPD(0x0C04F618u, 5);  /* 0C04F616 mov.b Rm,@(r0,Rn) */
	r2 = ~r7;  /* 0C04F618 not Rm,Rn */
	r11 = 0x180u; UPD(0x0C04F61Cu, 2);  /* 0C04F61A mov.w @(disp,pc),Rn */
	r2 &= r10;  /* 0C04F61C and Rm,Rn */
	r0 = r8;  /* 0C04F61E mov Rm,Rn */
	IF(0x0C04F620u); W8(r0 + r11, r2); UPD(0x0C04F622u, 3);  /* 0C04F620 mov.b Rm,@(r0,Rn) */
	r1 = ~r13;  /* 0C04F622 not Rm,Rn */
	r1 &= r12;  /* 0C04F624 and Rm,Rn */
	r0 = r4;  /* 0C04F626 mov Rm,Rn */
	IF(0x0C04F628u); W8(r0 + r11, r1); UPD(0x0C04F62Au, 4);  /* 0C04F628 mov.b Rm,@(r0,Rn) */
	r10 = 0xFFFFFFFFu;  /* 0C04F62A mov #imm,Rn */
	r3 = 0xFFFFFFFFu;  /* 0C04F62C mov #imm,Rn */
	r2 = 0x0u;  /* 0C04F62E mov #imm,Rn */
	r7 = 0x1Fu;  /* 0C04F630 mov #imm,Rn */
	IF(0x0C04F632u); ;  /* 0C04F632 nop */
	UPD(0x0C04F634u, 5);
L_0C04F634: BLKS(0x0C04F634u);
	SPIN_SAVE(0C04F634);
	r8 = r2;  /* 0C04F634 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)RS8(0C04F634, r5); r5 += 1; r0 = v_; } UPD(0x0C04F638u, 2);  /* 0C04F636 mov.b @Rm+,Rn */
	r8 += 0x1u;  /* 0C04F638 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)RS8(0C04F634, r6); r6 += 1; r4 = v_; } UPD(0x0C04F63Cu, 2);  /* 0C04F63A mov.b @Rm+,Rn */
	r2 = (u32)(s32)(s8)r8;  /* 0C04F63C exts.b Rm,Rn */
	r3 &= r0;  /* 0C04F63E and Rm,Rn */
	T = (s32)r2 > (s32)r7;  /* 0C04F640 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 &= r4; /* slot and Rm,Rn */ if (c_) { SPIN_FFD(0C04F634, 10); UPD(0x0C04F634u, 6); goto L_0C04F634; } goto L_0C04F646; }  /* 0C04F642 bf/s */
L_0C04F646: BLKS(0x0C04F646u);
	r9 = 0xC21F5EAu; UPD(0x0C04F648u, 2);  /* 0C04F646 mov.l @(disp,pc),Rn */
	r5 = r3;  /* 0C04F648 mov Rm,Rn */
	r0 = 0x80u; UPD(0x0C04F64Cu, 2);  /* 0C04F64A mov.w @(disp,pc),Rn */
	IF(0x0C04F64Cu); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C04F64Eu, 1);  /* 0C04F64C mov.b @(r0,Rm),Rn */
	r7 = 0x100u; UPD(0x0C04F650u, 1);  /* 0C04F64E mov.w @(disp,pc),Rn */
	r5 |= r6;  /* 0C04F650 or Rm,Rn */
	r0 = r9;  /* 0C04F652 mov Rm,Rn */
	IF(0x0C04F654u); W8(r0 + r7, r5); UPD(0x0C04F656u, 3);  /* 0C04F654 mov.b Rm,@(r0,Rn) */
	r12 = r6;  /* 0C04F656 mov Rm,Rn */
	r11 = 0xC2177F8u; UPD(0x0C04F65Au, 2);  /* 0C04F658 mov.l @(disp,pc),Rn */
	r1 = r6;  /* 0C04F65A mov Rm,Rn */
	r0 = 0x80u; UPD(0x0C04F65Eu, 2);  /* 0C04F65C mov.w @(disp,pc),Rn */
	IF(0x0C04F65Eu); r8 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C04F660u, 1);  /* 0C04F65E mov.b @(r0,Rm),Rn */
	r0 = r11;  /* 0C04F660 mov Rm,Rn */
	r10 |= r8;  /* 0C04F662 or Rm,Rn */
	IF(0x0C04F664u); W8(r0 + r7, r10); UPD(0x0C04F666u, 3);  /* 0C04F664 mov.b Rm,@(r0,Rn) */
	r12 |= r8;  /* 0C04F666 or Rm,Rn */
	r2 = 0xC27DDF4u; UPD(0x0C04F66Au, 2);  /* 0C04F668 mov.l @(disp,pc),Rn */
	r1 &= r8;  /* 0C04F66A and Rm,Rn */
	r0 = 0x80u; UPD(0x0C04F66Eu, 2);  /* 0C04F66C mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C04F670u, 1);  /* 0C04F66E mov.b @Rm,Rn */
	IF(0x0C04F670u); W8(r0 + r2, r12); UPD(0x0C04F672u, 1);  /* 0C04F670 mov.b Rm,@(r0,Rn) */
	r13 = r3;  /* 0C04F672 mov Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C04F676u, 2);  /* 0C04F674 mov.b @Rm,Rn */
	r12 = r5;  /* 0C04F676 mov Rm,Rn */
	r0 = r2;  /* 0C04F678 mov Rm,Rn */
	r13 |= r4;  /* 0C04F67A or Rm,Rn */
	r12 |= r10;  /* 0C04F67C or Rm,Rn */
	IF(0x0C04F67Eu); W8(r0 + r7, r12); UPD(0x0C04F680u, 5);  /* 0C04F67E mov.b Rm,@(r0,Rn) */
	W8(r2, r13); UPD(0x0C04F682u, 1);  /* 0C04F680 mov.b Rm,@Rn */
	r0 = r3;  /* 0C04F682 mov Rm,Rn */
	r2 = 0xC2862A2u; UPD(0x0C04F686u, 2);  /* 0C04F684 mov.l @(disp,pc),Rn */
	r0 &= r4;  /* 0C04F686 and Rm,Rn */
	W8(r2, r0); UPD(0x0C04F68Au, 2);  /* 0C04F688 mov.b Rm,@Rn */
	r0 = 0x80u; UPD(0x0C04F68Cu, 1);  /* 0C04F68A mov.w @(disp,pc),Rn */
	IF(0x0C04F68Cu); W8(r0 + r2, r1); UPD(0x0C04F68Eu, 1);  /* 0C04F68C mov.b Rm,@(r0,Rn) */
	r1 = r5;  /* 0C04F68E mov Rm,Rn */
	r0 = r2;  /* 0C04F690 mov Rm,Rn */
	r1 &= r10;  /* 0C04F692 and Rm,Rn */
	IF(0x0C04F694u); W8(r0 + r7, r1); UPD(0x0C04F696u, 4);  /* 0C04F694 mov.b Rm,@(r0,Rn) */
	r0 = 0xC2839E2u; UPD(0x0C04F698u, 1);  /* 0C04F696 mov.l @(disp,pc),Rn */
	r7 = 0xC2839E0u; UPD(0x0C04F69Au, 1);  /* 0C04F698 mov.l @(disp,pc),Rn */
	W8(r0, r5); UPD(0x0C04F69Cu, 1);  /* 0C04F69A mov.b Rm,@Rn */
	r2 = 0xC2839E1u; UPD(0x0C04F69Eu, 1);  /* 0C04F69C mov.l @(disp,pc),Rn */
	W8(r7, r3); UPD(0x0C04F6A0u, 1);  /* 0C04F69E mov.b Rm,@Rn */
	W8(r2, r6); UPD(0x0C04F6A2u, 1);  /* 0C04F6A0 mov.b Rm,@Rn */
	r0 = 0x180u; UPD(0x0C04F6A4u, 1);  /* 0C04F6A2 mov.w @(disp,pc),Rn */
	IF(0x0C04F6A4u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C04F6A6u, 1);  /* 0C04F6A4 mov.b @(r0,Rm),Rn */
	r7 = 0xC283C60u; UPD(0x0C04F6A8u, 1);  /* 0C04F6A6 mov.l @(disp,pc),Rn */
	r9 = 0xC2839E3u; UPD(0x0C04F6AAu, 1);  /* 0C04F6A8 mov.l @(disp,pc),Rn */
	r2 = 0xC283C61u; UPD(0x0C04F6ACu, 1);  /* 0C04F6AA mov.l @(disp,pc),Rn */
	r5 = 0xC283C62u; UPD(0x0C04F6AEu, 1);  /* 0C04F6AC mov.l @(disp,pc),Rn */
	W8(r9, r3); UPD(0x0C04F6B0u, 1);  /* 0C04F6AE mov.b Rm,@Rn */
	W8(r7, r4); UPD(0x0C04F6B2u, 1);  /* 0C04F6B0 mov.b Rm,@Rn */
	W8(r2, r8); UPD(0x0C04F6B4u, 1);  /* 0C04F6B2 mov.b Rm,@Rn */
	W8(r5, r10); UPD(0x0C04F6B6u, 1);  /* 0C04F6B4 mov.b Rm,@Rn */
	IF(0x0C04F6B6u); r1 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C04F6B8u, 1);  /* 0C04F6B6 mov.b @(r0,Rm),Rn */
	r11 = 0xC283C63u; UPD(0x0C04F6BAu, 1);  /* 0C04F6B8 mov.l @(disp,pc),Rn */
	r6 = 0xC21F7F9u; UPD(0x0C04F6BCu, 1);  /* 0C04F6BA mov.l @(disp,pc),Rn */
	W8(r11, r1); UPD(0x0C04F6BEu, 1);  /* 0C04F6BC mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C04F6C0u, 1);  /* 0C04F6BE mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C04F6C0 tst Rm,Rn */
	if (T) { UPD(0x0C04F6CEu, 4); goto L_0C04F6CE; }  /* 0C04F6C2 bt */
L_0C04F6C4: BLKS(0x0C04F6C4u);
	r10 = 0x70u;  /* 0C04F6C4 mov #imm,Rn */
	r12 &= r10;  /* 0C04F6C6 and Rm,Rn */
	r0 = r12;  /* 0C04F6C8 mov Rm,Rn */
	T = r0 == 0x70u;  /* 0C04F6CA cmp/eq #imm,r0 */
	if (T) { UPD(0x0C04F6E0u, 7); goto L_0C04F6E0; }  /* 0C04F6CC bt */
L_0C04F6CE: BLKS(0x0C04F6CEu);
	r15 = r14;  /* 0C04F6CE mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C04F6D2u, 2);  /* 0C04F6D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C04F6D4u, 1);  /* 0C04F6D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C04F6D6u, 1);  /* 0C04F6D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C04F6D8u, 1);  /* 0C04F6D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C04F6DAu, 1);  /* 0C04F6D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04F6DCu, 1);  /* 0C04F6DA mov.l @Rm+,Rn */
	IF(0x0C04F6DCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04F6DC rts */
L_0C04F6E0: BLKS(0x0C04F6E0u);
	IF(0x0C04F6E0u); T = (s32)r13 >= 0;  /* 0C04F6E0 cmp/pz Rn */
	{ u32 c_ = T; r8 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C04F6F2u, 4); goto L_0C04F6F2; } goto L_0C04F6E6; }  /* 0C04F6E2 bt/s */
L_0C04F6E6: BLKS(0x0C04F6E6u);
	r6 = 0xC21F5CCu; UPD(0x0C04F6E8u, 2);  /* 0C04F6E6 mov.l @(disp,pc),Rn */
	r4 = 0xC392D60u; UPD(0x0C04F6EAu, 1);  /* 0C04F6E8 mov.l @(disp,pc),Rn */
	r13 = 0xC392D7Cu; UPD(0x0C04F6ECu, 1);  /* 0C04F6EA mov.l @(disp,pc),Rn */
	W32(r6, r8); UPD(0x0C04F6EEu, 1);  /* 0C04F6EC mov.l Rm,@Rn */
	W32(r4, r8); UPD(0x0C04F6F0u, 1);  /* 0C04F6EE mov.l Rm,@Rn */
	W32(r13, r8); UPD(0x0C04F6F2u, 1);  /* 0C04F6F0 mov.l Rm,@Rn */
L_0C04F6F2: BLKS(0x0C04F6F2u);
	r11 = 0xC26C8CCu; UPD(0x0C04F6F4u, 1);  /* 0C04F6F2 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C04F6F4 mov #imm,Rn */
	W8(r11, r9); UPD(0x0C04F6F8u, 2);  /* 0C04F6F6 mov.b Rm,@Rn */
	r5 = 0xC04A128u; UPD(0x0C04F6FAu, 1);  /* 0C04F6F8 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C04F6FA mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C04F6FEu, 2);  /* 0C04F6FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C04F700u, 1);  /* 0C04F6FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C04F702u, 1);  /* 0C04F700 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C04F704u, 1);  /* 0C04F702 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C04F706u, 1);  /* 0C04F704 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04F708u, 1);  /* 0C04F706 mov.l @Rm+,Rn */
	IF(0x0C04F708u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C04A128u: TAIL(f_0C04A128); default: JUMPD(tv_); } }  /* 0C04F708 jmp @Rn */
}

/* FUN_0c04f770 */
void f_0C04F770(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C04F7C4);
L_0C04F770: BLKS(0x0C04F770u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C04F772u, 1);  /* 0C04F770 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r5;  /* 0C04F772 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04F776u, 2);  /* 0C04F774 mov.l Rm,@-Rn */
	r6 = (u32)(s32)(s16)r4;  /* 0C04F776 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C04F77Au, 2);  /* 0C04F778 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C04F77Cu, 1);  /* 0C04F77A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C04F77Eu, 1);  /* 0C04F77C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C04F780u, 1);  /* 0C04F77E mov.l Rm,@-Rn */
	r7 = 0xC21CCF4u; UPD(0x0C04F782u, 1);  /* 0C04F780 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C04F784u, 1);  /* 0C04F782 mov.l Rm,@-Rn */
	r5 = 0xC21F7FCu; UPD(0x0C04F786u, 1);  /* 0C04F784 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C04F786 add #imm,Rn */
	r0 = R32(r5); UPD(0x0C04F78Au, 2);  /* 0C04F788 mov.l @Rm,Rn */
	r14 = r15;  /* 0C04F78A mov Rm,Rn */
	r12 = R32(r7); UPD(0x0C04F78Eu, 2);  /* 0C04F78C mov.l @Rm,Rn */
	r4 = 0xC283CA8u; UPD(0x0C04F790u, 1);  /* 0C04F78E mov.l @(disp,pc),Rn */
	r12 -= r0;  /* 0C04F790 sub Rm,Rn */
	r3 = 0xC21F5D4u; UPD(0x0C04F794u, 2);  /* 0C04F792 mov.l @(disp,pc),Rn */
	IF(0x0C04F794u); r12 <<= 16;  /* 0C04F794 shll16 Rn */
	r9 = 0xC392AF4u; UPD(0x0C04F798u, 2);  /* 0C04F796 mov.l @(disp,pc),Rn */
	W32(r14, r6); UPD(0x0C04F79Au, 1);  /* 0C04F798 mov.l Rm,@Rn */
	r0 = R32(r4); UPD(0x0C04F79Cu, 1);  /* 0C04F79A mov.l @Rm,Rn */
	r2 = R32(r3); UPD(0x0C04F79Eu, 1);  /* 0C04F79C mov.l @Rm,Rn */
	r6 = R32(r9); UPD(0x0C04F7A0u, 1);  /* 0C04F79E mov.l @Rm,Rn */
	r0 -= r2;  /* 0C04F7A0 sub Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C04F7A4u, 2);  /* 0C04F7A2 mov.l Rm,@(disp,Rn) */
	r9 = 0x0u;  /* 0C04F7A4 mov #imm,Rn */
	r12 |= r0;  /* 0C04F7A6 or Rm,Rn */
	UPD(0x0C04F7A8u, 2);
L_0C04F7A8: BLKS(0x0C04F7A8u);
	r11 = 0xC27DC58u; UPD(0x0C04F7AAu, 1);  /* 0C04F7A8 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C04F7AA mov Rm,Rn */
	IF(0x0C04F7ACu); r10 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C04F7AEu, 2);  /* 0C04F7AC mov.b @(r0,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C04F7AE tst Rm,Rn */
	{ u32 c_ = !T; r2 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04F7D6u, 4); goto L_0C04F7D6; } goto L_0C04F7B4; }  /* 0C04F7B0 bf/s */
L_0C04F7B4: BLKS(0x0C04F7B4u);
	r4 = 0x7u;  /* 0C04F7B4 mov #imm,Rn */
	IF(0x0C04F7B6u); ARG0(0x424Du); { s32 s_ = (s32)r4; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C04F7B6 shld Rm,Rn */
	r13 = 0xC21E10Au; UPD(0x0C04F7BAu, 4);  /* 0C04F7B8 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C04F7BA mov #imm,Rn */
	r3 = 0x0u;  /* 0C04F7BC mov #imm,Rn */
	r7 = 0x1Fu;  /* 0C04F7BE mov #imm,Rn */
	r2 += r13;  /* 0C04F7C0 add Rm,Rn */
	IF(0x0C04F7C2u); ;  /* 0C04F7C2 nop */
	UPD(0x0C04F7C4u, 5);
L_0C04F7C4: BLKS(0x0C04F7C4u);
	SPIN_SAVE(0C04F7C4);
	r5 = (u32)(s32)(s16)RS16(0C04F7C4, r2); UPD(0x0C04F7C6u, 1);  /* 0C04F7C4 mov.w @Rm,Rn */
	r0 = r3;  /* 0C04F7C6 mov Rm,Rn */
	r0 += 0x1u;  /* 0C04F7C8 add #imm,Rn */
	r5 |= r8;  /* 0C04F7CA or Rm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C04F7CC exts.w Rm,Rn */
	r2 += 0x4u;  /* 0C04F7CE add #imm,Rn */
	T = (s32)r3 > (s32)r7;  /* 0C04F7D0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 = (u32)(s32)(s16)r5; /* slot exts.w Rm,Rn */ if (c_) { SPIN_FFD(0C04F7C4, 10); UPD(0x0C04F7C4u, 9); goto L_0C04F7C4; } UPD(0x0C04F7D6u, 1); goto L_0C04F7D6; }  /* 0C04F7D2 bf/s */
L_0C04F7D6: BLKS(0x0C04F7D6u);
	r7 = 0xC27DC58u; UPD(0x0C04F7D8u, 1);  /* 0C04F7D6 mov.l @(disp,pc),Rn */
	r2 = 0x3FFu; UPD(0x0C04F7DAu, 1);  /* 0C04F7D8 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C04F7DA mov Rm,Rn */
	IF(0x0C04F7DCu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C04F7DEu, 2);  /* 0C04F7DC mov.b @(r0,Rm),Rn */
	r2 &= r8;  /* 0C04F7DE and Rm,Rn */
	r3 |= r2;  /* 0C04F7E0 or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C04F7E2 tst Rm,Rn */
	{ u32 c_ = T; r11 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04F864u, 6); goto L_0C04F864; } goto L_0C04F7E8; }  /* 0C04F7E4 bt/s */
L_0C04F7E8: BLKS(0x0C04F7E8u);
	r11 = R32(r14); UPD(0x0C04F7EAu, 2);  /* 0C04F7E8 mov.l @Rm,Rn */
	r5 = r9;  /* 0C04F7EA mov Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C04F7EEu, 2);  /* 0C04F7EC mov.l @(disp,Rm),Rn */
	r1 = 0x7u;  /* 0C04F7EE mov #imm,Rn */
	IF(0x0C04F7F0u); r11 <<= 16;  /* 0C04F7F0 shll16 Rn */
	IF(0x0C04F7F2u); ARG0(0x451Du); { s32 s_ = (s32)r1; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C04F7F2 shld Rm,Rn */
	r0 = 0xC21E108u; UPD(0x0C04F7F6u, 4);  /* 0C04F7F4 mov.l @(disp,pc),Rn */
	r11 |= r4;  /* 0C04F7F6 or Rm,Rn */
	r13 = 0xC283644u; UPD(0x0C04F7FAu, 2);  /* 0C04F7F8 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C04F7FA mov #imm,Rn */
	r3 = 0x0u;  /* 0C04F7FC mov #imm,Rn */
	r4 = r12;  /* 0C04F7FE mov Rm,Rn */
	r5 += r0;  /* 0C04F800 add Rm,Rn */
	IF(0x0C04F802u); ;  /* 0C04F802 nop */
	UPD(0x0C04F804u, 5);
L_0C04F804: BLKS(0x0C04F804u);
	{ u32 v_ = R32(r5); r5 += 4; r7 = v_; } UPD(0x0C04F806u, 1);  /* 0C04F804 mov.l @Rm+,Rn */
	r0 = 0x3FFu; UPD(0x0C04F808u, 1);  /* 0C04F806 mov.w @(disp,pc),Rn */
	r0 &= r7;  /* 0C04F808 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04F80A tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x20u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C04F84Eu, 5); goto L_0C04F84E; } goto L_0C04F810; }  /* 0C04F80C bt/s */
L_0C04F810: BLKS(0x0C04F810u);
	{ u32 c_ = T; IF(0x0C04F812u); r0 >>= 2; /* slot shlr2 Rn */ if (c_) { UPD(0x0C04F84Eu, 4); goto L_0C04F84E; } goto L_0C04F814; }  /* 0C04F810 bt/s */
L_0C04F814: BLKS(0x0C04F814u);
	r1 = 0xC392E08u; UPD(0x0C04F816u, 2);  /* 0C04F814 mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C04F818u, 1);  /* 0C04F816 mov.l @Rm,Rn */
	W32(r6, r2); UPD(0x0C04F81Au, 1);  /* 0C04F818 mov.l Rm,@Rn */
	r1 = 0xF8u; UPD(0x0C04F81Cu, 1);  /* 0C04F81A mov.w @(disp,pc),Rn */
	r2 = ~r0;  /* 0C04F81C not Rm,Rn */
	r2 &= r1;  /* 0C04F81E and Rm,Rn */
	r0 = R32(r13); UPD(0x0C04F822u, 3);  /* 0C04F820 mov.l @Rm,Rn */
	r1 = r7;  /* 0C04F822 mov Rm,Rn */
	IF(0x0C04F824u); r2 <<= 16;  /* 0C04F824 shll16 Rn */
	IF(0x0C04F826u); r1 <<= 2;  /* 0C04F826 shll2 Rn */
	r0 += r2;  /* 0C04F828 add Rm,Rn */
	r1 += r1;  /* 0C04F82A add Rm,Rn */
	r2 = r1 & 0xFF;  /* 0C04F82C extu.b Rm,Rn */
	r0 += r2;  /* 0C04F82E add Rm,Rn */
	r6 += 0x4u;  /* 0C04F830 add #imm,Rn */
	W32(r6, r0); UPD(0x0C04F834u, 9);  /* 0C04F832 mov.l Rm,@Rn */
	r2 = r10;  /* 0C04F834 mov Rm,Rn */
	r6 += 0x4u;  /* 0C04F836 add #imm,Rn */
	W32(r6, r4); UPD(0x0C04F83Au, 3);  /* 0C04F838 mov.l Rm,@Rn */
	r2 += 0x1u;  /* 0C04F83A add #imm,Rn */
	r6 += 0x4u;  /* 0C04F83C add #imm,Rn */
	r0 = 0xFCFCFC00u; UPD(0x0C04F840u, 3);  /* 0C04F83E mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s8)r2;  /* 0C04F840 exts.b Rm,Rn */
	W32(r6, r11); UPD(0x0C04F844u, 2);  /* 0C04F842 mov.l Rm,@Rn */
	r7 &= r0;  /* 0C04F844 and Rm,Rn */
	r6 += 0x4u;  /* 0C04F846 add #imm,Rn */
	IF(0x0C04F848u); r7 >>= 8;  /* 0C04F848 shlr8 Rn */
	W32(r6, r7); UPD(0x0C04F84Cu, 4);  /* 0C04F84A mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C04F84C add #imm,Rn */
	UPD(0x0C04F84Eu, 1);
L_0C04F84E: BLKS(0x0C04F84Eu);
	r2 = 0xC27DC58u; UPD(0x0C04F850u, 1);  /* 0C04F84E mov.l @(disp,pc),Rn */
	r7 = 0x1Fu;  /* 0C04F850 mov #imm,Rn */
	r0 = r2;  /* 0C04F852 mov Rm,Rn */
	IF(0x0C04F854u); W8(r0 + r9, r10); UPD(0x0C04F856u, 3);  /* 0C04F854 mov.b Rm,@(r0,Rn) */
	r0 = r3;  /* 0C04F856 mov Rm,Rn */
	r0 += 0x1u;  /* 0C04F858 add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C04F85A exts.w Rm,Rn */
	T = (s32)r3 > (s32)r7;  /* 0C04F85C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C04F804u, 7); goto L_0C04F804; } goto L_0C04F862; }  /* 0C04F85E bf/s */
L_0C04F862: BLKS(0x0C04F862u);
	r11 = r9;  /* 0C04F862 mov Rm,Rn */
	UPD(0x0C04F864u, 2);
L_0C04F864: BLKS(0x0C04F864u);
	r9 = 0x80000u; UPD(0x0C04F866u, 1);  /* 0C04F864 mov.l @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C04F866 add #imm,Rn */
	r12 += r9;  /* 0C04F868 add Rm,Rn */
	r9 = (u32)(s32)(s16)r11;  /* 0C04F86A exts.w Rm,Rn */
	r10 = 0x28u;  /* 0C04F86C mov #imm,Rn */
	T = (s32)r9 > (s32)r10;  /* 0C04F86E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C04F7A8u, 8); goto L_0C04F7A8; }  /* 0C04F870 bf */
L_0C04F872: BLKS(0x0C04F872u);
	r14 += 0x8u;  /* 0C04F872 add #imm,Rn */
	r8 = 0xC392AF4u; UPD(0x0C04F876u, 2);  /* 0C04F874 mov.l @(disp,pc),Rn */
	W32(r8, r6); UPD(0x0C04F878u, 1);  /* 0C04F876 mov.l Rm,@Rn */
	r15 = r14;  /* 0C04F878 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C04F87Cu, 2);  /* 0C04F87A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C04F87Eu, 1);  /* 0C04F87C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C04F880u, 1);  /* 0C04F87E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C04F882u, 1);  /* 0C04F880 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C04F884u, 1);  /* 0C04F882 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04F886u, 1);  /* 0C04F884 mov.l @Rm+,Rn */
	IF(0x0C04F886u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04F886 rts */
}

/* FUN_0c04f8c0 */
void f_0C04F8C0(sh3_t *c)
{
	LOCALS;
L_0C04F8C0: BLKS(0x0C04F8C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C04F8C2u, 1);  /* 0C04F8C0 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C04F8C2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04F8C6u, 2);  /* 0C04F8C4 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C04F8C8u, 1);  /* 0C04F8C6 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C04F8C8 mov #imm,Rn */
	r8 = 0xC04A160u; UPD(0x0C04F8CCu, 2);  /* 0C04F8CA mov.l @(disp,pc),Rn */
	IF(0x0C04F8CCu); r15 -= 4; W32(r15, PR); UPD(0x0C04F8CEu, 1);  /* 0C04F8CC sts.l pr,@-Rn */
	r6 = 0xC21CA1Cu; UPD(0x0C04F8D0u, 1);  /* 0C04F8CE mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C04F8D0 mov Rm,Rn */
	r5 = 0xC283C94u; UPD(0x0C04F8D4u, 2);  /* 0C04F8D2 mov.l @(disp,pc),Rn */
	W8(r6, r1); UPD(0x0C04F8D6u, 1);  /* 0C04F8D4 mov.b Rm,@Rn */
	IF(0x0C04F8D6u); { u32 t_ = r8; PR = 0x0C04F8DAu; W32(r5, r9); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C04A160, 0x0C04A160u, 0x0C04F8DAu); }  /* 0C04F8D6 jsr @Rn */
L_0C04F8DA: BLKS(0x0C04F8DAu);
	r4 = 0xC21CA10u; UPD(0x0C04F8DCu, 1);  /* 0C04F8DA mov.l @(disp,pc),Rn */
	r3 = 0xC392D58u; UPD(0x0C04F8DEu, 1);  /* 0C04F8DC mov.l @(disp,pc),Rn */
	r8 = 0xC049F38u; UPD(0x0C04F8E0u, 1);  /* 0C04F8DE mov.l @(disp,pc),Rn */
	W32(r4, r0); UPD(0x0C04F8E2u, 1);  /* 0C04F8E0 mov.l Rm,@Rn */
	W32(r3, r9); UPD(0x0C04F8E4u, 1);  /* 0C04F8E2 mov.l Rm,@Rn */
	IF(0x0C04F8E4u); { u32 t_ = r8; PR = 0x0C04F8E8u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C049F38, 0x0C049F38u, 0x0C04F8E8u); }  /* 0C04F8E4 jsr @Rn */
L_0C04F8E8: BLKS(0x0C04F8E8u);
	r9 = r0;  /* 0C04F8E8 mov Rm,Rn */
	r0 = 0xC392D68u; UPD(0x0C04F8ECu, 2);  /* 0C04F8EA mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C04F8EC mov #imm,Rn */
	IF(0x0C04F8EEu); { u32 t_ = r8; PR = 0x0C04F8F2u; W32(r0, r9); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C049F38, 0x0C049F38u, 0x0C04F8F2u); }  /* 0C04F8EE jsr @Rn */
L_0C04F8F2: BLKS(0x0C04F8F2u);
	r2 = 0xC393040u; UPD(0x0C04F8F4u, 1);  /* 0C04F8F2 mov.l @(disp,pc),Rn */
	W32(r2, r0); UPD(0x0C04F8F6u, 1);  /* 0C04F8F4 mov.l Rm,@Rn */
	r2 = 0xF0000000u; UPD(0x0C04F8F8u, 1);  /* 0C04F8F6 mov.l @(disp,pc),Rn */
	W32(r0, r2); UPD(0x0C04F8FAu, 1);  /* 0C04F8F8 mov.l Rm,@Rn */
	W32(r9, r2); UPD(0x0C04F8FCu, 1);  /* 0C04F8FA mov.l Rm,@Rn */
	r15 = r14;  /* 0C04F8FC mov Rm,Rn */
	IF(0x0C04F8FEu); PR = R32(r15); r15 += 4; UPD(0x0C04F900u, 2);  /* 0C04F8FE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C04F902u, 1);  /* 0C04F900 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04F904u, 1);  /* 0C04F902 mov.l @Rm+,Rn */
	IF(0x0C04F904u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04F904 rts */
}

/* display_list_setup */
void f_0C04F930(sh3_t *c)
{
	LOCALS;
L_0C04F930: BLKS(0x0C04F930u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C04F932u, 1);  /* 0C04F930 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C04F932 mov #imm,Rn */
	r0 = 0xC283C94u; UPD(0x0C04F936u, 2);  /* 0C04F934 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C04F938u, 1);  /* 0C04F936 mov.l Rm,@Rn */
	r3 = 0xC392DD8u; UPD(0x0C04F93Au, 1);  /* 0C04F938 mov.l @(disp,pc),Rn */
	r2 = 0xC393040u; UPD(0x0C04F93Cu, 1);  /* 0C04F93A mov.l @(disp,pc),Rn */
	r0 = R32(r3); UPD(0x0C04F93Eu, 1);  /* 0C04F93C mov.l @Rm,Rn */
	r1 = R32(r2); UPD(0x0C04F940u, 1);  /* 0C04F93E mov.l @Rm,Rn */
	T = r0 == r1;  /* 0C04F940 cmp/eq Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04F9A0u, 4); goto L_0C04F9A0; } goto L_0C04F946; }  /* 0C04F942 bt/s */
L_0C04F946: BLKS(0x0C04F946u);
	W32(r3, r1); UPD(0x0C04F948u, 2);  /* 0C04F946 mov.l Rm,@Rn */
	r2 = 0x20u;  /* 0C04F948 mov #imm,Rn */
	r0 = 0x1A0u; UPD(0x0C04F94Cu, 2);  /* 0C04F94A mov.w @(disp,pc),Rn */
	r7 = 0xC392AF8u; UPD(0x0C04F94Eu, 1);  /* 0C04F94C mov.l @(disp,pc),Rn */
	r3 = 0xC21CCF4u; UPD(0x0C04F950u, 1);  /* 0C04F94E mov.l @(disp,pc),Rn */
	W32(r7, r0); UPD(0x0C04F952u, 1);  /* 0C04F950 mov.l Rm,@Rn */
L_0C04F952: BLKS(0x0C04F952u);
	r4 = 0xC21CC30u; UPD(0x0C04F954u, 1);  /* 0C04F952 mov.l @(disp,pc),Rn */
	W32(r3, r2); UPD(0x0C04F956u, 1);  /* 0C04F954 mov.l Rm,@Rn */
	W32(r4, r2); UPD(0x0C04F958u, 1);  /* 0C04F956 mov.l Rm,@Rn */
	r6 = 0x88u; UPD(0x0C04F95Au, 1);  /* 0C04F958 mov.w @(disp,pc),Rn */
	r5 = R32(r3); UPD(0x0C04F95Cu, 1);  /* 0C04F95A mov.l @Rm,Rn */
	r2 = 0xC21CA08u; UPD(0x0C04F95Eu, 1);  /* 0C04F95C mov.l @(disp,pc),Rn */
	IF(0x0C04F95Eu); r5 <<= 16;  /* 0C04F95E shll16 Rn */
	r7 = 0xC283CA8u; UPD(0x0C04F962u, 2);  /* 0C04F960 mov.l @(disp,pc),Rn */
	r5 |= r6;  /* 0C04F962 or Rm,Rn */
	W32(r2, r6); UPD(0x0C04F966u, 2);  /* 0C04F964 mov.l Rm,@Rn */
	W32(r7, r6); UPD(0x0C04F968u, 1);  /* 0C04F966 mov.l Rm,@Rn */
	r0 = 0xC26C8C8u; UPD(0x0C04F96Au, 1);  /* 0C04F968 mov.l @(disp,pc),Rn */
	r3 = 0xC283CB4u; UPD(0x0C04F96Cu, 1);  /* 0C04F96A mov.l @(disp,pc),Rn */
	r4 = 0xC392DD8u; UPD(0x0C04F96Eu, 1);  /* 0C04F96C mov.l @(disp,pc),Rn */
	W32(r0, r6); UPD(0x0C04F970u, 1);  /* 0C04F96E mov.l Rm,@Rn */
	W32(r3, r5); UPD(0x0C04F972u, 1);  /* 0C04F970 mov.l Rm,@Rn */
	r7 = R32(r4); UPD(0x0C04F974u, 1);  /* 0C04F972 mov.l @Rm,Rn */
	r2 = 0xC0000001u; UPD(0x0C04F976u, 1);  /* 0C04F974 mov.l @(disp,pc),Rn */
	r4 = r7;  /* 0C04F976 mov Rm,Rn */
	W32(r7, r2); UPD(0x0C04F97Au, 2);  /* 0C04F978 mov.l Rm,@Rn */
	r0 = 0xF0000000u; UPD(0x0C04F97Cu, 1);  /* 0C04F97A mov.l @(disp,pc),Rn */
	r7 += 0x4u;  /* 0C04F97C add #imm,Rn */
	W32(r7, r0); UPD(0x0C04F980u, 2);  /* 0C04F97E mov.l Rm,@Rn */
	r5 = 0xC21CA10u; UPD(0x0C04F982u, 1);  /* 0C04F980 mov.l @(disp,pc),Rn */
	r3 = R32(r5); UPD(0x0C04F984u, 1);  /* 0C04F982 mov.l @Rm,Rn */
	IF(0x0C04F984u); r3 <<= 2;  /* 0C04F984 shll2 Rn */
	r6 = 0xC392AF4u; UPD(0x0C04F988u, 2);  /* 0C04F986 mov.l @(disp,pc),Rn */
	r4 += r3;  /* 0C04F988 add Rm,Rn */
	r2 = 0xC28374Cu; UPD(0x0C04F98Cu, 2);  /* 0C04F98A mov.l @(disp,pc),Rn */
	r4 += 0xFFFFFFF0u;  /* 0C04F98C add #imm,Rn */
	W32(r6, r7); UPD(0x0C04F990u, 2);  /* 0C04F98E mov.l Rm,@Rn */
	W32(r2, r4); UPD(0x0C04F992u, 1);  /* 0C04F990 mov.l Rm,@Rn */
	r15 = r14;  /* 0C04F992 mov Rm,Rn */
	IF(0x0C04F994u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C04F994 rts */
L_0C04F9A0: BLKS(0x0C04F9A0u);
	r6 = 0xC392D68u; UPD(0x0C04F9A2u, 1);  /* 0C04F9A0 mov.l @(disp,pc),Rn */
	r4 = 0x20u;  /* 0C04F9A2 mov #imm,Rn */
	r5 = R32(r6); UPD(0x0C04F9A6u, 2);  /* 0C04F9A4 mov.l @Rm,Rn */
	W32(r3, r5); UPD(0x0C04F9A8u, 1);  /* 0C04F9A6 mov.l Rm,@Rn */
	r3 = 0xC392AF8u; UPD(0x0C04F9AAu, 1);  /* 0C04F9A8 mov.l @(disp,pc),Rn */
	W32(r3, r4); UPD(0x0C04F9ACu, 1);  /* 0C04F9AA mov.l Rm,@Rn */
	r2 = 0x1A0u; UPD(0x0C04F9AEu, 1);  /* 0C04F9AC mov.w @(disp,pc),Rn */
	r3 = 0xC21CCF4u; UPD(0x0C04F9B0u, 1);  /* 0C04F9AE mov.l @(disp,pc),Rn */
	{ IF(0x0C04F9B2u); ; /* slot nop */ UPD(0x0C04F952u, 3); goto L_0C04F952; }  /* 0C04F9B0 bra */
}

/* FUN_0c04fa00 */
void f_0C04FA00(sh3_t *c)
{
	LOCALS;
L_0C04FA00: BLKS(0x0C04FA00u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C04FA02u, 1);  /* 0C04FA00 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04FA04u, 1);  /* 0C04FA02 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C04FA06u, 1);  /* 0C04FA04 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C04FA08u, 1);  /* 0C04FA06 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C04FA0Au, 1);  /* 0C04FA08 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C04FA0Cu, 1);  /* 0C04FA0A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C04FA0Eu, 1);  /* 0C04FA0C mov.l Rm,@-Rn */
	r2 = 0xC3929B8u; UPD(0x0C04FA10u, 1);  /* 0C04FA0E mov.l @(disp,pc),Rn */
	IF(0x0C04FA10u); r15 -= 4; W32(r15, PR); UPD(0x0C04FA12u, 1);  /* 0C04FA10 sts.l pr,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C04FA14u, 1);  /* 0C04FA12 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04FA14 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04FA36u, 4); goto L_0C04FA36; } goto L_0C04FA1A; }  /* 0C04FA16 bt/s */
L_0C04FA1A: BLKS(0x0C04FA1Au);
	r3 = 0xC275DD0u; UPD(0x0C04FA1Cu, 2);  /* 0C04FA1A mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C04FA1Eu, 1);  /* 0C04FA1C mov.b @Rm,Rn */
	T = r0 == 0x1u;  /* 0C04FA1E cmp/eq #imm,r0 */
	{ u32 c_ = !T; r4 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C04FA28u, 4); goto L_0C04FA28; } goto L_0C04FA24; }  /* 0C04FA20 bf/s */
L_0C04FA24: BLKS(0x0C04FA24u);
	{ IF(0x0C04FA26u); ; /* slot nop */ UPD(0x0C04FDB0u, 4); goto L_0C04FDB0; }  /* 0C04FA24 bra */
L_0C04FA28: BLKS(0x0C04FA28u);
	T = (s32)r0 > (s32)r4;  /* 0C04FA28 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C04FA32u, 4); goto L_0C04FA32; } goto L_0C04FA2E; }  /* 0C04FA2A bf/s */
L_0C04FA2E: BLKS(0x0C04FA2Eu);
	{ IF(0x0C04FA30u); ; /* slot nop */ UPD(0x0C04FD30u, 4); goto L_0C04FD30; }  /* 0C04FA2E bra */
L_0C04FA32: BLKS(0x0C04FA32u);
	T = (r0 & r0) == 0;  /* 0C04FA32 tst Rm,Rn */
	if (T) { UPD(0x0C04FA50u, 4); goto L_0C04FA50; }  /* 0C04FA34 bt */
L_0C04FA36: BLKS(0x0C04FA36u);
	r15 = r14;  /* 0C04FA36 mov Rm,Rn */
	IF(0x0C04FA38u); PR = R32(r15); r15 += 4; UPD(0x0C04FA3Au, 2);  /* 0C04FA38 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C04FA3Cu, 1);  /* 0C04FA3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C04FA3Eu, 1);  /* 0C04FA3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C04FA40u, 1);  /* 0C04FA3E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C04FA42u, 1);  /* 0C04FA40 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C04FA44u, 1);  /* 0C04FA42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04FA46u, 1);  /* 0C04FA44 mov.l @Rm+,Rn */
	IF(0x0C04FA46u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04FA46 rts */
L_0C04FA50: BLKS(0x0C04FA50u);
	r5 = 0xC2179F8u; UPD(0x0C04FA52u, 1);  /* 0C04FA50 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C04FA54u, 1);  /* 0C04FA52 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C04FA54 tst Rm,Rn */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C04FAB0u, 4); goto L_0C04FAB0; } goto L_0C04FA5A; }  /* 0C04FA56 bt/s */
L_0C04FA5A: BLKS(0x0C04FA5Au);
	r8 = 0xC286068u; UPD(0x0C04FA5Cu, 2);  /* 0C04FA5A mov.l @(disp,pc),Rn */
	r4 = 0x3FFu; UPD(0x0C04FA5Eu, 1);  /* 0C04FA5C mov.w @(disp,pc),Rn */
	r9 = 0xC38BC64u; UPD(0x0C04FA60u, 1);  /* 0C04FA5E mov.l @(disp,pc),Rn */
	r5 = 0xFFu; UPD(0x0C04FA62u, 1);  /* 0C04FA60 mov.w @(disp,pc),Rn */
	r6 = 0x3FFFu; UPD(0x0C04FA64u, 1);  /* 0C04FA62 mov.w @(disp,pc),Rn */
L_0C04FA64: BLKS(0x0C04FA64u);
	r2 = r7;  /* 0C04FA64 mov Rm,Rn */
	r2 += r2;  /* 0C04FA66 add Rm,Rn */
	r3 = r2;  /* 0C04FA68 mov Rm,Rn */
	r3 += r8;  /* 0C04FA6A add Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r3); UPD(0x0C04FA6Eu, 5);  /* 0C04FA6C mov.w @Rm,Rn */
	r10 &= r6;  /* 0C04FA6E and Rm,Rn */
	T = (s32)r10 > (s32)r4;  /* 0C04FA70 cmp/gt Rm,Rn */
	{ u32 c_ = T; r12 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04FA9Cu, 5); goto L_0C04FA9C; } goto L_0C04FA76; }  /* 0C04FA72 bt/s */
L_0C04FA76: BLKS(0x0C04FA76u);
	r0 = 0xFFFF8400u; UPD(0x0C04FA78u, 2);  /* 0C04FA76 mov.w @(disp,pc),Rn */
	W16(r3, r0); UPD(0x0C04FA7Au, 1);  /* 0C04FA78 mov.w Rm,@Rn */
	r11 = 0xC2175F4u; UPD(0x0C04FA7Cu, 1);  /* 0C04FA7A mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C04FA7C mov Rm,Rn */
	IF(0x0C04FA7Eu); r10 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C04FA80u, 2);  /* 0C04FA7E mov.w @(r0,Rm),Rn */
	r3 = 0xFu;  /* 0C04FA80 mov #imm,Rn */
	r2 = 0xC223068u; UPD(0x0C04FA84u, 2);  /* 0C04FA82 mov.l @(disp,pc),Rn */
	r13 = r10;  /* 0C04FA84 mov Rm,Rn */
	IF(0x0C04FA86u); r12 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C04FA88u, 2);  /* 0C04FA86 mov.w @(r0,Rm),Rn */
	IF(0x0C04FA88u); r13 <<= 2;  /* 0C04FA88 shll2 Rn */
	r13 += r13;  /* 0C04FA8A add Rm,Rn */
	r0 = r13 & 0xFF;  /* 0C04FA8C extu.b Rm,Rn */
	r12 &= r3;  /* 0C04FA8E and Rm,Rn */
	r0 += r0;  /* 0C04FA90 add Rm,Rn */
	r0 += r12;  /* 0C04FA92 add Rm,Rn */
	r11 = 0x400u; UPD(0x0C04FA96u, 7);  /* 0C04FA94 mov.w @(disp,pc),Rn */
	r0 += r0;  /* 0C04FA96 add Rm,Rn */
	IF(0x0C04FA98u); W16(r0 + r9, r11); UPD(0x0C04FA9Au, 2);  /* 0C04FA98 mov.w Rm,@(r0,Rn) */
	r12 = r7;  /* 0C04FA9A mov Rm,Rn */
	UPD(0x0C04FA9Cu, 1);
L_0C04FA9C: BLKS(0x0C04FA9Cu);
	r12 += 0x1u;  /* 0C04FA9C add #imm,Rn */
	r7 = (u32)(s32)(s16)r12;  /* 0C04FA9E exts.w Rm,Rn */
	T = (s32)r7 > (s32)r5;  /* 0C04FAA0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C04FA64u, 6); goto L_0C04FA64; } goto L_0C04FAA6; }  /* 0C04FAA2 bf/s */
L_0C04FAA6: BLKS(0x0C04FAA6u);
	r1 = 0xC2179F8u; UPD(0x0C04FAA8u, 2);  /* 0C04FAA6 mov.l @(disp,pc),Rn */
L_0C04FAA8: BLKS(0x0C04FAA8u);
	{ W8(r1, r2); /* slot mov.b Rm,@Rn */ UPD(0x0C04FA36u, 3); goto L_0C04FA36; }  /* 0C04FAA8 bra */
L_0C04FAB0: BLKS(0x0C04FAB0u);
	r11 = 0xC04A1A8u; UPD(0x0C04FAB2u, 1);  /* 0C04FAB0 mov.l @(disp,pc),Rn */
	r10 = 0xC3929C0u; UPD(0x0C04FAB4u, 1);  /* 0C04FAB2 mov.l @(disp,pc),Rn */
	IF(0x0C04FAB4u); { u32 t_ = r11; PR = 0x0C04FAB8u; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04A1A8, 0x0C04A1A8u, 0x0C04FAB8u); }  /* 0C04FAB4 jsr @Rn */
L_0C04FAB8: BLKS(0x0C04FAB8u);
	r3 = 0xC286068u; UPD(0x0C04FABAu, 1);  /* 0C04FAB8 mov.l @(disp,pc),Rn */
	r4 = R32(r10); UPD(0x0C04FABCu, 1);  /* 0C04FABA mov.l @Rm,Rn */
	r13 = 0xC286268u; UPD(0x0C04FABEu, 1);  /* 0C04FABC mov.l @(disp,pc),Rn */
	r0 -= r4;  /* 0C04FABE sub Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r3); UPD(0x0C04FAC2u, 2);  /* 0C04FAC0 mov.w @Rm,Rn */
	r2 = 0x400u; UPD(0x0C04FAC4u, 1);  /* 0C04FAC2 mov.w @(disp,pc),Rn */
	r9 = r6 & 0xFFFF;  /* 0C04FAC4 extu.w Rm,Rn */
	T = r9 > r2;  /* 0C04FAC6 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r13, r0); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C04FB1Au, 5); goto L_0C04FB1A; } UPD(0x0C04FACCu, 1); goto L_0C04FACC; }  /* 0C04FAC8 bf/s */
L_0C04FACC: BLKS(0x0C04FACCu);
	r8 = 0xFEu; UPD(0x0C04FACEu, 1);  /* 0C04FACC mov.w @(disp,pc),Rn */
	r4 = r3;  /* 0C04FACE mov Rm,Rn */
	r6 = 0xC2175F4u; UPD(0x0C04FAD2u, 2);  /* 0C04FAD0 mov.l @(disp,pc),Rn */
	r10 = r3;  /* 0C04FAD2 mov Rm,Rn */
	r5 = 0xC223068u; UPD(0x0C04FAD6u, 2);  /* 0C04FAD4 mov.l @(disp,pc),Rn */
	r12 = r2;  /* 0C04FAD6 mov Rm,Rn */
	r11 = 0xC286266u; UPD(0x0C04FADAu, 2);  /* 0C04FAD8 mov.l @(disp,pc),Rn */
	r9 = r2;  /* 0C04FADA mov Rm,Rn */
	r7 = 0xC2173D8u; UPD(0x0C04FADEu, 2);  /* 0C04FADC mov.l @(disp,pc),Rn */
L_0C04FADE: BLKS(0x0C04FADEu);
	r13 = 0x0u;  /* 0C04FADE mov #imm,Rn */
	UPD(0x0C04FAE0u, 1);
L_0C04FAE0: BLKS(0x0C04FAE0u);
	r0 = r13;  /* 0C04FAE0 mov Rm,Rn */
	r0 += r0;  /* 0C04FAE2 add Rm,Rn */
	r3 = r0;  /* 0C04FAE4 mov Rm,Rn */
	r3 += r4;  /* 0C04FAE6 add Rm,Rn */
	r3 += 0x2u;  /* 0C04FAE8 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C04FAECu, 6);  /* 0C04FAEA mov.w @Rm,Rn */
	r13 += 0x1u;  /* 0C04FAEC add #imm,Rn */
	{ u32 v_ = r1; r3 -= 2; W16(r3, v_); } UPD(0x0C04FAF0u, 2);  /* 0C04FAEE mov.w Rm,@-Rn */
	T = r13 > r8;  /* 0C04FAF0 cmp/hi Rm,Rn */
	r3 = r0;  /* 0C04FAF2 mov Rm,Rn */
	r3 += r6;  /* 0C04FAF4 add Rm,Rn */
	r3 += 0x2u;  /* 0C04FAF6 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C04FAFAu, 5);  /* 0C04FAF8 mov.w @Rm,Rn */
	{ u32 v_ = r1; r3 -= 2; W16(r3, v_); } UPD(0x0C04FAFCu, 1);  /* 0C04FAFA mov.w Rm,@-Rn */
	r3 = r0;  /* 0C04FAFC mov Rm,Rn */
	r3 += r5;  /* 0C04FAFE add Rm,Rn */
	r3 += 0x2u;  /* 0C04FB00 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C04FB04u, 4);  /* 0C04FB02 mov.w @Rm,Rn */
	r0 += r7;  /* 0C04FB04 add Rm,Rn */
	{ u32 v_ = r1; r3 -= 2; W16(r3, v_); } UPD(0x0C04FB08u, 2);  /* 0C04FB06 mov.w Rm,@-Rn */
	r0 += 0x2u;  /* 0C04FB08 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C04FB0Cu, 2);  /* 0C04FB0A mov.w @Rm,Rn */
	{ u32 c_ = !T; { u32 v_ = r3; r0 -= 2; W16(r0, v_); } /* slot mov.w Rm,@-Rn */ if (c_) { UPD(0x0C04FAE0u, 3); goto L_0C04FAE0; } UPD(0x0C04FB10u, 1); goto L_0C04FB10; }  /* 0C04FB0C bf/s */
L_0C04FB10: BLKS(0x0C04FB10u);
	r13 = (u32)(s32)(s16)R16(r10); UPD(0x0C04FB12u, 1);  /* 0C04FB10 mov.w @Rm,Rn */
	r2 = r13 & 0xFFFF;  /* 0C04FB12 extu.w Rm,Rn */
	T = r2 > r9;  /* 0C04FB14 cmp/hi Rm,Rn */
	{ u32 c_ = T; W16(r11, r12); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C04FADEu, 5); goto L_0C04FADE; } UPD(0x0C04FB1Au, 1); goto L_0C04FB1A; }  /* 0C04FB16 bt/s */
L_0C04FB1A: BLKS(0x0C04FB1Au);
	r3 = 0xC21CA2Cu; UPD(0x0C04FB1Cu, 1);  /* 0C04FB1A mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)R16(r3); UPD(0x0C04FB1Eu, 1);  /* 0C04FB1C mov.w @Rm,Rn */
	r2 = 0x400u; UPD(0x0C04FB20u, 1);  /* 0C04FB1E mov.w @(disp,pc),Rn */
	r12 = r8 & 0xFFFF;  /* 0C04FB20 extu.w Rm,Rn */
	T = r12 > r2;  /* 0C04FB22 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C04FB74u, 5); goto L_0C04FB74; }  /* 0C04FB24 bf */
L_0C04FB26: BLKS(0x0C04FB26u);
	r4 = r3;  /* 0C04FB26 mov Rm,Rn */
	r8 = 0xFEu; UPD(0x0C04FB2Au, 2);  /* 0C04FB28 mov.w @(disp,pc),Rn */
	r6 = 0xC283CB8u; UPD(0x0C04FB2Cu, 1);  /* 0C04FB2A mov.l @(disp,pc),Rn */
	r10 = r3;  /* 0C04FB2C mov Rm,Rn */
	r5 = 0xC22466Eu; UPD(0x0C04FB30u, 2);  /* 0C04FB2E mov.l @(disp,pc),Rn */
	r12 = r2;  /* 0C04FB30 mov Rm,Rn */
	r11 = 0xC21CC2Au; UPD(0x0C04FB34u, 2);  /* 0C04FB32 mov.l @(disp,pc),Rn */
	r9 = r2;  /* 0C04FB34 mov Rm,Rn */
	r7 = 0xC392E26u; UPD(0x0C04FB38u, 2);  /* 0C04FB36 mov.l @(disp,pc),Rn */
L_0C04FB38: BLKS(0x0C04FB38u);
	r13 = 0x0u;  /* 0C04FB38 mov #imm,Rn */
	UPD(0x0C04FB3Au, 1);
L_0C04FB3A: BLKS(0x0C04FB3Au);
	r0 = r13;  /* 0C04FB3A mov Rm,Rn */
	r0 += r0;  /* 0C04FB3C add Rm,Rn */
	r3 = r0;  /* 0C04FB3E mov Rm,Rn */
	r3 += r4;  /* 0C04FB40 add Rm,Rn */
	r3 += 0x2u;  /* 0C04FB42 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C04FB46u, 6);  /* 0C04FB44 mov.w @Rm,Rn */
	r13 += 0x1u;  /* 0C04FB46 add #imm,Rn */
	{ u32 v_ = r1; r3 -= 2; W16(r3, v_); } UPD(0x0C04FB4Au, 2);  /* 0C04FB48 mov.w Rm,@-Rn */
	T = r13 > r8;  /* 0C04FB4A cmp/hi Rm,Rn */
	r3 = r0;  /* 0C04FB4C mov Rm,Rn */
	r3 += r6;  /* 0C04FB4E add Rm,Rn */
	r3 += 0x2u;  /* 0C04FB50 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C04FB54u, 5);  /* 0C04FB52 mov.w @Rm,Rn */
	{ u32 v_ = r1; r3 -= 2; W16(r3, v_); } UPD(0x0C04FB56u, 1);  /* 0C04FB54 mov.w Rm,@-Rn */
	r3 = r0;  /* 0C04FB56 mov Rm,Rn */
	r3 += r5;  /* 0C04FB58 add Rm,Rn */
	r3 += 0x2u;  /* 0C04FB5A add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C04FB5Eu, 4);  /* 0C04FB5C mov.w @Rm,Rn */
	r0 += r7;  /* 0C04FB5E add Rm,Rn */
	{ u32 v_ = r1; r3 -= 2; W16(r3, v_); } UPD(0x0C04FB62u, 2);  /* 0C04FB60 mov.w Rm,@-Rn */
	r0 += 0x2u;  /* 0C04FB62 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C04FB66u, 2);  /* 0C04FB64 mov.w @Rm,Rn */
	{ u32 c_ = !T; { u32 v_ = r3; r0 -= 2; W16(r0, v_); } /* slot mov.w Rm,@-Rn */ if (c_) { UPD(0x0C04FB3Au, 3); goto L_0C04FB3A; } UPD(0x0C04FB6Au, 1); goto L_0C04FB6A; }  /* 0C04FB66 bf/s */
L_0C04FB6A: BLKS(0x0C04FB6Au);
	r13 = (u32)(s32)(s16)R16(r10); UPD(0x0C04FB6Cu, 1);  /* 0C04FB6A mov.w @Rm,Rn */
	r2 = r13 & 0xFFFF;  /* 0C04FB6C extu.w Rm,Rn */
	T = r2 > r9;  /* 0C04FB6E cmp/hi Rm,Rn */
	{ u32 c_ = T; W16(r11, r12); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C04FB38u, 5); goto L_0C04FB38; } UPD(0x0C04FB74u, 1); goto L_0C04FB74; }  /* 0C04FB70 bt/s */
L_0C04FB74: BLKS(0x0C04FB74u);
	r5 = 0xC21CA2Cu; UPD(0x0C04FB76u, 1);  /* 0C04FB74 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r5); UPD(0x0C04FB78u, 1);  /* 0C04FB76 mov.w @Rm,Rn */
	r7 = 0x400u; UPD(0x0C04FB7Au, 1);  /* 0C04FB78 mov.w @(disp,pc),Rn */
	r3 = r2 & 0xFFFF;  /* 0C04FB7A extu.w Rm,Rn */
	T = r3 == r7;  /* 0C04FB7C cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C04FB84u, 5); goto L_0C04FB84; }  /* 0C04FB7E bf */
L_0C04FB80: BLKS(0x0C04FB80u);
	{ IF(0x0C04FB82u); ; /* slot nop */ UPD(0x0C04FC90u, 3); goto L_0C04FC90; }  /* 0C04FB80 bra */
L_0C04FB84: BLKS(0x0C04FB84u);
	r3 = 0xC283CB8u; UPD(0x0C04FB86u, 1);  /* 0C04FB84 mov.l @(disp,pc),Rn */
	r12 = 0xC22466Eu; UPD(0x0C04FB88u, 1);  /* 0C04FB86 mov.l @(disp,pc),Rn */
	r4 = 0xC392E26u; UPD(0x0C04FB8Au, 1);  /* 0C04FB88 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C04FB8Cu, 1);  /* 0C04FB8A mov.w @Rm,Rn */
	r8 = 0xC21CC38u; UPD(0x0C04FB8Eu, 1);  /* 0C04FB8C mov.l @(disp,pc),Rn */
	r3 = 0x7u;  /* 0C04FB8E mov #imm,Rn */
	r13 = 0xC284EB8u; UPD(0x0C04FB92u, 2);  /* 0C04FB90 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r12); UPD(0x0C04FB94u, 1);  /* 0C04FB92 mov.w @Rm,Rn */
	r10 = 0xC392DD0u; UPD(0x0C04FB96u, 1);  /* 0C04FB94 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r4); UPD(0x0C04FB98u, 1);  /* 0C04FB96 mov.w @Rm,Rn */
	r9 = 0xC392E10u; UPD(0x0C04FB9Au, 1);  /* 0C04FB98 mov.l @(disp,pc),Rn */
	W16(r8, r0); UPD(0x0C04FB9Cu, 1);  /* 0C04FB9A mov.w Rm,@Rn */
	r7 = 0xC393070u; UPD(0x0C04FB9Eu, 1);  /* 0C04FB9C mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C04FB9E mov #imm,Rn */
	W16(r13, r2); UPD(0x0C04FBA2u, 2);  /* 0C04FBA0 mov.w Rm,@Rn */
	W16(r10, r11); UPD(0x0C04FBA4u, 1);  /* 0C04FBA2 mov.w Rm,@Rn */
	W16(r9, r6); UPD(0x0C04FBA6u, 1);  /* 0C04FBA4 mov.w Rm,@Rn */
L_0C04FBA6: BLKS(0x0C04FBA6u);
	IF(0x0C04FBA6u); r5 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C04FBA8u, 1);  /* 0C04FBA6 mov.b @(r0,Rm),Rn */
	r2 = r5 & 0xFF;  /* 0C04FBA8 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C04FBAA tst Rm,Rn */
	if (T) { UPD(0x0C04FC40u, 5); goto L_0C04FC40; }  /* 0C04FBAC bt */
L_0C04FBAE: BLKS(0x0C04FBAEu);
	r2 = r0;  /* 0C04FBAE mov Rm,Rn */
	r2 += 0x1u;  /* 0C04FBB0 add #imm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C04FBB2 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C04FBB4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C04FBA6u, 7); goto L_0C04FBA6; }  /* 0C04FBB6 bf */
L_0C04FBB8: BLKS(0x0C04FBB8u);
	r1 = 0x1u;  /* 0C04FBB8 mov #imm,Rn */
	UPD(0x0C04FBBAu, 1);
L_0C04FBBA: BLKS(0x0C04FBBAu);
	r7 = (u32)(s32)(s16)r1;  /* 0C04FBBA exts.w Rm,Rn */
	r1 = 0xC21CA2Cu; UPD(0x0C04FBBEu, 2);  /* 0C04FBBC mov.l @(disp,pc),Rn */
	T = (r7 & r7) == 0;  /* 0C04FBBE tst Rm,Rn */
	if (!T) { UPD(0x0C04FBCAu, 4); goto L_0C04FBCA; }  /* 0C04FBC0 bf */
L_0C04FBC2: BLKS(0x0C04FBC2u);
	r4 = (u32)(s32)(s16)R16(r1); UPD(0x0C04FBC4u, 1);  /* 0C04FBC2 mov.w @Rm,Rn */
L_0C04FBC4: BLKS(0x0C04FBC4u);
	r8 = 0xFFFF8000u; UPD(0x0C04FBC6u, 1);  /* 0C04FBC4 mov.w @(disp,pc),Rn */
	r4 |= r8;  /* 0C04FBC6 or Rm,Rn */
	W16(r1, r4); UPD(0x0C04FBCAu, 2);  /* 0C04FBC8 mov.w Rm,@Rn */
L_0C04FBCA: BLKS(0x0C04FBCAu);
	{ IF(0x0C04FBCCu); ; /* slot nop */ UPD(0x0C04FA36u, 3); goto L_0C04FA36; }  /* 0C04FBCA bra */
L_0C04FC40: BLKS(0x0C04FC40u);
	r5 = 0x20014u; UPD(0x0C04FC42u, 1);  /* 0C04FC40 mov.l @(disp,pc),Rn */
	r11 = 0x1u;  /* 0C04FC42 mov #imm,Rn */
	r12 = 0xC283541u; UPD(0x0C04FC46u, 2);  /* 0C04FC44 mov.l @(disp,pc),Rn */
	IF(0x0C04FC46u); MACL = r0 * r5;  /* 0C04FC46 mul.l Rm,Rn */
	IF(0x0C04FC48u); W8(r0 + r7, r11); UPD(0x0C04FC4Au, 3);  /* 0C04FC48 mov.b Rm,@(r0,Rn) */
	r15 += 0xFFFFFFFCu;  /* 0C04FC4A add #imm,Rn */
	W8(r12, r0); UPD(0x0C04FC4Eu, 2);  /* 0C04FC4C mov.b Rm,@Rn */
	IF(0x0C04FC4Eu); r5 = MACL;  /* 0C04FC4E sts macl,Rn */
	r0 = 0xC392AFCu; UPD(0x0C04FC52u, 2);  /* 0C04FC50 mov.l @(disp,pc),Rn */
	r3 = 0xC275DD0u; UPD(0x0C04FC54u, 1);  /* 0C04FC52 mov.l @(disp,pc),Rn */
	W8(r0, r2); UPD(0x0C04FC56u, 1);  /* 0C04FC54 mov.b Rm,@Rn */
	r7 = 0xC286754u; UPD(0x0C04FC58u, 1);  /* 0C04FC56 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C04FC5Au, 1);  /* 0C04FC58 mov.b @Rm,Rn */
	r5 += r7;  /* 0C04FC5A add Rm,Rn */
	r8 = 0xC2864FCu; UPD(0x0C04FC5Eu, 2);  /* 0C04FC5C mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C04FC5E add #imm,Rn */
	r4 = 0xC284EB8u; UPD(0x0C04FC62u, 2);  /* 0C04FC60 mov.l @(disp,pc),Rn */
	r7 = 0x1u;  /* 0C04FC62 mov #imm,Rn */
	r6 = 0xC286277u; UPD(0x0C04FC66u, 2);  /* 0C04FC64 mov.l @(disp,pc),Rn */
	r10 = 0xC2177F4u; UPD(0x0C04FC68u, 1);  /* 0C04FC66 mov.l @(disp,pc),Rn */
	W32(r8, r5); UPD(0x0C04FC6Au, 1);  /* 0C04FC68 mov.l Rm,@Rn */
	r13 = (u32)(s32)(s16)R16(r4); UPD(0x0C04FC6Cu, 1);  /* 0C04FC6A mov.w @Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r6); UPD(0x0C04FC6Eu, 1);  /* 0C04FC6C mov.b @Rm,Rn */
	r4 = r13 & 0xFFFF;  /* 0C04FC6E extu.w Rm,Rn */
	W8(r3, r2); UPD(0x0C04FC72u, 2);  /* 0C04FC70 mov.b Rm,@Rn */
	W8(r10, r11); UPD(0x0C04FC74u, 1);  /* 0C04FC72 mov.b Rm,@Rn */
	r8 = 0xC0B0930u; UPD(0x0C04FC76u, 1);  /* 0C04FC74 mov.l @(disp,pc),Rn */
	W32(r15, r7); UPD(0x0C04FC78u, 1);  /* 0C04FC76 mov.l Rm,@Rn */
	r7 = 0xC050DA0u; UPD(0x0C04FC7Au, 1);  /* 0C04FC78 mov.l @(disp,pc),Rn */
	IF(0x0C04FC7Au); { u32 t_ = r8; PR = 0x0C04FC7Eu; r6 = r9 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0B0930, 0x0C0B0930u, 0x0C04FC7Eu); }  /* 0C04FC7A jsr @Rn */
L_0C04FC7E: BLKS(0x0C04FC7Eu);
	r15 += 0x4u;  /* 0C04FC7E add #imm,Rn */
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C04FBBAu, 4); goto L_0C04FBBA; }  /* 0C04FC80 bra */
L_0C04FC90: BLKS(0x0C04FC90u);
	r12 = 0xC286068u; UPD(0x0C04FC92u, 1);  /* 0C04FC90 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r12); UPD(0x0C04FC94u, 1);  /* 0C04FC92 mov.w @Rm,Rn */
	r6 = r2 & 0xFFFF;  /* 0C04FC94 extu.w Rm,Rn */
	T = r6 == r3;  /* 0C04FC96 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C04FBCAu, 5); goto L_0C04FBCA; }  /* 0C04FC98 bt */
L_0C04FC9A: BLKS(0x0C04FC9Au);
	r11 = 0xC284EB8u; UPD(0x0C04FC9Cu, 1);  /* 0C04FC9A mov.l @(disp,pc),Rn */
	r10 = 0xC2175F4u; UPD(0x0C04FC9Eu, 1);  /* 0C04FC9C mov.l @(disp,pc),Rn */
	W16(r11, r2); UPD(0x0C04FCA0u, 1);  /* 0C04FC9E mov.w Rm,@Rn */
	r7 = 0xC21CC38u; UPD(0x0C04FCA2u, 1);  /* 0C04FCA0 mov.l @(disp,pc),Rn */
	r3 = 0xC223068u; UPD(0x0C04FCA4u, 1);  /* 0C04FCA2 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C04FCA6u, 1);  /* 0C04FCA4 mov.w @Rm,Rn */
	r2 = 0xC2173D8u; UPD(0x0C04FCA8u, 1);  /* 0C04FCA6 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C04FCAAu, 1);  /* 0C04FCA8 mov.w @Rm,Rn */
	W16(r7, r9); UPD(0x0C04FCACu, 1);  /* 0C04FCAA mov.w Rm,@Rn */
	r3 = 0x7u;  /* 0C04FCAC mov #imm,Rn */
	r13 = 0xC392DD0u; UPD(0x0C04FCB0u, 2);  /* 0C04FCAE mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)R16(r2); UPD(0x0C04FCB2u, 1);  /* 0C04FCB0 mov.w @Rm,Rn */
	r4 = 0xC392E10u; UPD(0x0C04FCB4u, 1);  /* 0C04FCB2 mov.l @(disp,pc),Rn */
	W16(r13, r0); UPD(0x0C04FCB6u, 1);  /* 0C04FCB4 mov.w Rm,@Rn */
	r7 = 0xC393070u; UPD(0x0C04FCB8u, 1);  /* 0C04FCB6 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C04FCB8 mov #imm,Rn */
	W16(r4, r8); UPD(0x0C04FCBCu, 2);  /* 0C04FCBA mov.w Rm,@Rn */
L_0C04FCBC: BLKS(0x0C04FCBCu);
	IF(0x0C04FCBCu); r5 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C04FCBEu, 1);  /* 0C04FCBC mov.b @(r0,Rm),Rn */
	r2 = r5 & 0xFF;  /* 0C04FCBE extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C04FCC0 tst Rm,Rn */
	{ u32 c_ = T; r6 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04FCE0u, 5); goto L_0C04FCE0; } goto L_0C04FCC6; }  /* 0C04FCC2 bt/s */
L_0C04FCC6: BLKS(0x0C04FCC6u);
	r6 += 0x1u;  /* 0C04FCC6 add #imm,Rn */
	r0 = (u32)(s32)(s16)r6;  /* 0C04FCC8 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C04FCCA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C04FCBCu, 7); goto L_0C04FCBC; } UPD(0x0C04FCD0u, 1); goto L_0C04FCD0; }  /* 0C04FCCC bf/s */
L_0C04FCD0: BLKS(0x0C04FCD0u);
	r12 = (u32)(s32)(s16)r1;  /* 0C04FCD0 exts.w Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C04FCD2 tst Rm,Rn */
	if (!T) { UPD(0x0C04FD50u, 5); goto L_0C04FD50; }  /* 0C04FCD4 bf */
L_0C04FCD6: BLKS(0x0C04FCD6u);
	r1 = 0xC286068u; UPD(0x0C04FCD8u, 1);  /* 0C04FCD6 mov.l @(disp,pc),Rn */
	{ r4 = (u32)(s32)(s16)R16(r1); /* slot mov.w @Rm,Rn */ UPD(0x0C04FBC4u, 3); goto L_0C04FBC4; }  /* 0C04FCD8 bra */
L_0C04FCE0: BLKS(0x0C04FCE0u);
	r5 = 0x20014u; UPD(0x0C04FCE2u, 1);  /* 0C04FCE0 mov.l @(disp,pc),Rn */
	r13 = 0x1u;  /* 0C04FCE2 mov #imm,Rn */
	r9 = 0xC283541u; UPD(0x0C04FCE6u, 2);  /* 0C04FCE4 mov.l @(disp,pc),Rn */
	IF(0x0C04FCE6u); MACL = r0 * r5;  /* 0C04FCE6 mul.l Rm,Rn */
	IF(0x0C04FCE8u); W8(r0 + r7, r13); UPD(0x0C04FCEAu, 3);  /* 0C04FCE8 mov.b Rm,@(r0,Rn) */
	r15 += 0xFFFFFFFCu;  /* 0C04FCEA add #imm,Rn */
	W8(r9, r0); UPD(0x0C04FCEEu, 2);  /* 0C04FCEC mov.b Rm,@Rn */
	IF(0x0C04FCEEu); r5 = MACL;  /* 0C04FCEE sts macl,Rn */
	r0 = 0xC275DD0u; UPD(0x0C04FCF2u, 2);  /* 0C04FCF0 mov.l @(disp,pc),Rn */
	r11 = 0xC286754u; UPD(0x0C04FCF4u, 1);  /* 0C04FCF2 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C04FCF6u, 1);  /* 0C04FCF4 mov.b @Rm,Rn */
	r5 += r11;  /* 0C04FCF6 add Rm,Rn */
	r10 = 0xC2864FCu; UPD(0x0C04FCFAu, 2);  /* 0C04FCF8 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C04FCFA add #imm,Rn */
	r7 = 0xC392AFCu; UPD(0x0C04FCFEu, 2);  /* 0C04FCFC mov.l @(disp,pc),Rn */
	r4 = 0xC284EB8u; UPD(0x0C04FD00u, 1);  /* 0C04FCFE mov.l @(disp,pc),Rn */
	r6 = 0xC286277u; UPD(0x0C04FD02u, 1);  /* 0C04FD00 mov.l @(disp,pc),Rn */
	r8 = 0xC2177F4u; UPD(0x0C04FD04u, 1);  /* 0C04FD02 mov.l @(disp,pc),Rn */
	W32(r10, r5); UPD(0x0C04FD06u, 1);  /* 0C04FD04 mov.l Rm,@Rn */
	W8(r7, r2); UPD(0x0C04FD08u, 1);  /* 0C04FD06 mov.b Rm,@Rn */
	r10 = 0x1u;  /* 0C04FD08 mov #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r4); UPD(0x0C04FD0Cu, 2);  /* 0C04FD0A mov.w @Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r6); UPD(0x0C04FD0Eu, 1);  /* 0C04FD0C mov.b @Rm,Rn */
	r4 = r12 & 0xFFFF;  /* 0C04FD0E extu.w Rm,Rn */
	W8(r0, r3); UPD(0x0C04FD12u, 2);  /* 0C04FD10 mov.b Rm,@Rn */
	r6 = r11 & 0xFF;  /* 0C04FD12 extu.b Rm,Rn */
	W8(r8, r13); UPD(0x0C04FD16u, 2);  /* 0C04FD14 mov.b Rm,@Rn */
	r9 = 0xC0B0930u; UPD(0x0C04FD18u, 1);  /* 0C04FD16 mov.l @(disp,pc),Rn */
	r7 = 0xC050DA0u; UPD(0x0C04FD1Au, 1);  /* 0C04FD18 mov.l @(disp,pc),Rn */
	IF(0x0C04FD1Au); { u32 t_ = r9; PR = 0x0C04FD1Eu; W32(r15, r10); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0B0930, 0x0C0B0930u, 0x0C04FD1Eu); }  /* 0C04FD1A jsr @Rn */
L_0C04FD1E: BLKS(0x0C04FD1Eu);
	r15 += 0x4u;  /* 0C04FD1E add #imm,Rn */
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C04FCD0u, 4); goto L_0C04FCD0; }  /* 0C04FD20 bra */
L_0C04FD30: BLKS(0x0C04FD30u);
	if (!T) { UPD(0x0C04FD50u, 3); goto L_0C04FD50; }  /* 0C04FD30 bf */
L_0C04FD32: BLKS(0x0C04FD32u);
	r13 = 0x0u;  /* 0C04FD32 mov #imm,Rn */
	r2 = 0xC2852C8u; UPD(0x0C04FD36u, 2);  /* 0C04FD34 mov.l @(disp,pc),Rn */
	r4 = 0x400u; UPD(0x0C04FD38u, 1);  /* 0C04FD36 mov.w @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C04FD38 mov #imm,Rn */
	r3 = r2;  /* 0C04FD3A mov Rm,Rn */
	UPD(0x0C04FD3Cu, 2);
L_0C04FD3C: BLKS(0x0C04FD3Cu);
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r9 = v_; } UPD(0x0C04FD3Eu, 1);  /* 0C04FD3C mov.w @Rm+,Rn */
	r7 = r13;  /* 0C04FD3E mov Rm,Rn */
	r6 = r9 & 0xFFFF;  /* 0C04FD40 extu.w Rm,Rn */
	T = r6 == r4;  /* 0C04FD42 cmp/eq Rm,Rn */
	{ u32 c_ = T; r7 += r7; /* slot add Rm,Rn */ if (c_) { UPD(0x0C04FD60u, 6); goto L_0C04FD60; } goto L_0C04FD48; }  /* 0C04FD44 bt/s */
L_0C04FD48: BLKS(0x0C04FD48u);
	r13 += 0x1u;  /* 0C04FD48 add #imm,Rn */
	T = r13 > r5;  /* 0C04FD4A cmp/hi Rm,Rn */
	{ u32 c_ = !T; r2 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C04FD3Cu, 6); goto L_0C04FD3C; } UPD(0x0C04FD50u, 1); goto L_0C04FD50; }  /* 0C04FD4C bf/s */
L_0C04FD50: BLKS(0x0C04FD50u);
	{ IF(0x0C04FD52u); ; /* slot nop */ UPD(0x0C04FA36u, 3); goto L_0C04FA36; }  /* 0C04FD50 bra */
L_0C04FD60: BLKS(0x0C04FD60u);
	r9 = 0xC284EB8u; UPD(0x0C04FD62u, 1);  /* 0C04FD60 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C04FD64u, 1);  /* 0C04FD62 mov.w @Rm,Rn */
	W16(r2, r0); UPD(0x0C04FD66u, 1);  /* 0C04FD64 mov.w Rm,@Rn */
	r8 = 0xC21CC38u; UPD(0x0C04FD68u, 1);  /* 0C04FD66 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C04FD68 mov Rm,Rn */
	r5 = 0xC392DD0u; UPD(0x0C04FD6Cu, 2);  /* 0C04FD6A mov.l @(disp,pc),Rn */
	r2 = 0xC392E10u; UPD(0x0C04FD6Eu, 1);  /* 0C04FD6C mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C04FD70u, 1);  /* 0C04FD6E mov.w @Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r5); UPD(0x0C04FD72u, 1);  /* 0C04FD70 mov.w @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r2); UPD(0x0C04FD74u, 1);  /* 0C04FD72 mov.w @Rm,Rn */
	r12 = 0xC392DECu; UPD(0x0C04FD76u, 1);  /* 0C04FD74 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C04FD76 mov #imm,Rn */
	r10 = 0xC21F884u; UPD(0x0C04FD7Au, 2);  /* 0C04FD78 mov.l @(disp,pc),Rn */
	r3 = 0xC3929D0u; UPD(0x0C04FD7Cu, 1);  /* 0C04FD7A mov.l @(disp,pc),Rn */
	IF(0x0C04FD7Cu); W16(r0 + r12, r4); UPD(0x0C04FD7Eu, 1);  /* 0C04FD7C mov.w Rm,@(r0,Rn) */
	IF(0x0C04FD7Eu); W16(r0 + r10, r11); UPD(0x0C04FD80u, 1);  /* 0C04FD7E mov.w Rm,@(r0,Rn) */
	IF(0x0C04FD80u); W16(r0 + r3, r7); UPD(0x0C04FD82u, 1);  /* 0C04FD80 mov.w Rm,@(r0,Rn) */
	r0 = 0xC283541u; UPD(0x0C04FD84u, 1);  /* 0C04FD82 mov.l @(disp,pc),Rn */
	r8 = 0xC26C8BCu; UPD(0x0C04FD86u, 1);  /* 0C04FD84 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C04FD88u, 1);  /* 0C04FD86 mov.b @Rm,Rn */
	r12 = 0xC2864FCu; UPD(0x0C04FD8Au, 1);  /* 0C04FD88 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C04FD8A mov Rm,Rn */
	IF(0x0C04FD8Cu); W8(r0 + r13, r4); UPD(0x0C04FD8Eu, 2);  /* 0C04FD8C mov.b Rm,@(r0,Rn) */
	r11 = R32(r12); UPD(0x0C04FD90u, 1);  /* 0C04FD8E mov.l @Rm,Rn */
	r0 = r13;  /* 0C04FD90 mov Rm,Rn */
	r5 = 0xC275548u; UPD(0x0C04FD94u, 2);  /* 0C04FD92 mov.l @(disp,pc),Rn */
	IF(0x0C04FD94u); r0 <<= 2;  /* 0C04FD94 shll2 Rn */
	r11 += 0x10u;  /* 0C04FD96 add #imm,Rn */
	IF(0x0C04FD98u); W32(r0 + r5, r11); UPD(0x0C04FD9Au, 3);  /* 0C04FD98 mov.l Rm,@(r0,Rn) */
	r11 += 0xFFFFFFF0u;  /* 0C04FD9A add #imm,Rn */
	r7 = R32(r11 + 0xCu); UPD(0x0C04FD9Eu, 2);  /* 0C04FD9C mov.l @(disp,Rm),Rn */
	r10 = 0xFF00FFu; UPD(0x0C04FDA0u, 1);  /* 0C04FD9E mov.l @(disp,pc),Rn */
	r3 = 0xC2852E8u; UPD(0x0C04FDA2u, 1);  /* 0C04FDA0 mov.l @(disp,pc),Rn */
	r7 &= r10;  /* 0C04FDA2 and Rm,Rn */
	r1 = 0xC275DD0u; UPD(0x0C04FDA6u, 2);  /* 0C04FDA4 mov.l @(disp,pc),Rn */
	IF(0x0C04FDA6u); W32(r0 + r3, r7); UPD(0x0C04FDA8u, 1);  /* 0C04FDA6 mov.l Rm,@(r0,Rn) */
	{ W16(r9, r6); /* slot mov.w Rm,@Rn */ UPD(0x0C04FAA8u, 3); goto L_0C04FAA8; }  /* 0C04FDA8 bra */
L_0C04FDB0: BLKS(0x0C04FDB0u);
	r2 = 0xC392AFCu; UPD(0x0C04FDB2u, 1);  /* 0C04FDB0 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C04FDB4u, 1);  /* 0C04FDB2 mov.b @Rm,Rn */
	r13 = 0xFFu; UPD(0x0C04FDB6u, 1);  /* 0C04FDB4 mov.w @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C04FDB6 add #imm,Rn */
	r1 = r0 & 0xFF;  /* 0C04FDB8 extu.b Rm,Rn */
	T = r1 == r13;  /* 0C04FDBA cmp/eq Rm,Rn */
	{ u32 c_ = !T; W8(r2, r0); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C04FD50u, 6); goto L_0C04FD50; } UPD(0x0C04FDC0u, 1); goto L_0C04FDC0; }  /* 0C04FDBC bf/s */
L_0C04FDC0: BLKS(0x0C04FDC0u);
	r1 = 0xC283748u; UPD(0x0C04FDC2u, 1);  /* 0C04FDC0 mov.l @(disp,pc),Rn */
	{ r2 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C04FAA8u, 3); goto L_0C04FAA8; }  /* 0C04FDC2 bra */
}

/* FUN_0c04fe40 */
void f_0C04FE40(sh3_t *c)
{
	LOCALS;
L_0C04FE40: BLKS(0x0C04FE40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C04FE42u, 1);  /* 0C04FE40 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C04FE44u, 1);  /* 0C04FE42 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C04FE46u, 1);  /* 0C04FE44 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C04FE48u, 1);  /* 0C04FE46 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C04FE4Au, 1);  /* 0C04FE48 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C04FE4Cu, 1);  /* 0C04FE4A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C04FE4Eu, 1);  /* 0C04FE4C mov.l Rm,@-Rn */
	r2 = 0xC21CA14u; UPD(0x0C04FE50u, 1);  /* 0C04FE4E mov.l @(disp,pc),Rn */
	IF(0x0C04FE50u); r15 -= 4; W32(r15, PR); UPD(0x0C04FE52u, 1);  /* 0C04FE50 sts.l pr,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C04FE54u, 1);  /* 0C04FE52 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C04FE54 add #imm,Rn */
	T = r0 == 0x1u;  /* 0C04FE56 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04FE60u, 5); goto L_0C04FE60; } goto L_0C04FE5C; }  /* 0C04FE58 bf/s */
L_0C04FE5C: BLKS(0x0C04FE5Cu);
	{ IF(0x0C04FE5Eu); ; /* slot nop */ UPD(0x0C050190u, 4); goto L_0C050190; }  /* 0C04FE5C bra */
L_0C04FE60: BLKS(0x0C04FE60u);
	r2 = 0x1u;  /* 0C04FE60 mov #imm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C04FE62 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C04FE6Cu, 5); goto L_0C04FE6C; } goto L_0C04FE68; }  /* 0C04FE64 bf/s */
L_0C04FE68: BLKS(0x0C04FE68u);
	{ IF(0x0C04FE6Au); ; /* slot nop */ UPD(0x0C0500D0u, 4); goto L_0C0500D0; }  /* 0C04FE68 bra */
L_0C04FE6C: BLKS(0x0C04FE6Cu);
	r8 = 0xC2852C8u; UPD(0x0C04FE6Eu, 1);  /* 0C04FE6C mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C04FE6E tst Rm,Rn */
	if (T) { UPD(0x0C04FE90u, 4); goto L_0C04FE90; }  /* 0C04FE70 bt */
L_0C04FE72: BLKS(0x0C04FE72u);
	r14 += 0x8u;  /* 0C04FE72 add #imm,Rn */
	UPD(0x0C04FE74u, 1);
L_0C04FE74: BLKS(0x0C04FE74u);
	r15 = r14;  /* 0C04FE74 mov Rm,Rn */
	IF(0x0C04FE76u); PR = R32(r15); r15 += 4; UPD(0x0C04FE78u, 2);  /* 0C04FE76 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C04FE7Au, 1);  /* 0C04FE78 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C04FE7Cu, 1);  /* 0C04FE7A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C04FE7Eu, 1);  /* 0C04FE7C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C04FE80u, 1);  /* 0C04FE7E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C04FE82u, 1);  /* 0C04FE80 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C04FE84u, 1);  /* 0C04FE82 mov.l @Rm+,Rn */
	IF(0x0C04FE84u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04FE84 rts */
L_0C04FE90: BLKS(0x0C04FE90u);
	r2 = (u32)(s32)(s16)R16(r8); UPD(0x0C04FE92u, 1);  /* 0C04FE90 mov.w @Rm,Rn */
	r8 = 0x400u; UPD(0x0C04FE94u, 1);  /* 0C04FE92 mov.w @(disp,pc),Rn */
	T = r2 == r8;  /* 0C04FE94 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C04FE72u, 4); goto L_0C04FE72; }  /* 0C04FE96 bt */
L_0C04FE98: BLKS(0x0C04FE98u);
	r4 = 0x0u;  /* 0C04FE98 mov #imm,Rn */
	r0 = 0xC21F884u; UPD(0x0C04FE9Cu, 2);  /* 0C04FE9A mov.l @(disp,pc),Rn */
	r3 = 0xC392DECu; UPD(0x0C04FE9Eu, 1);  /* 0C04FE9C mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)R16(r0); UPD(0x0C04FEA0u, 1);  /* 0C04FE9E mov.w @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C04FEA2u, 1);  /* 0C04FEA0 mov.w @Rm,Rn */
	r11 = r13 & 0xFFFF;  /* 0C04FEA2 extu.w Rm,Rn */
	r0 = r7 & 0xFFFF;  /* 0C04FEA4 extu.w Rm,Rn */
	IF(0x0C04FEA6u); r0 <<= 2;  /* 0C04FEA6 shll2 Rn */
	IF(0x0C04FEA8u); r0 <<= 2;  /* 0C04FEA8 shll2 Rn */
	r10 = 0x4000u; UPD(0x0C04FEACu, 5);  /* 0C04FEAA mov.w @(disp,pc),Rn */
	r0 += r11;  /* 0C04FEAC add Rm,Rn */
	r9 = 0xC38BC64u; UPD(0x0C04FEB0u, 2);  /* 0C04FEAE mov.l @(disp,pc),Rn */
	r2 |= r10;  /* 0C04FEB0 or Rm,Rn */
	r0 += r0;  /* 0C04FEB2 add Rm,Rn */
	r12 = 0xC21CA14u; UPD(0x0C04FEB6u, 3);  /* 0C04FEB4 mov.l @(disp,pc),Rn */
	IF(0x0C04FEB6u); W16(r0 + r9, r2); UPD(0x0C04FEB8u, 1);  /* 0C04FEB6 mov.w Rm,@(r0,Rn) */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C04FEBAu, 1);  /* 0C04FEB8 mov.b @Rm,Rn */
	r6 = 0xC285314u; UPD(0x0C04FEBCu, 1);  /* 0C04FEBA mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C04FEBC add #imm,Rn */
	W16(r6, r4); UPD(0x0C04FEC0u, 2);  /* 0C04FEBE mov.w Rm,@Rn */
	W8(r12, r2); UPD(0x0C04FEC2u, 1);  /* 0C04FEC0 mov.b Rm,@Rn */
L_0C04FEC2: BLKS(0x0C04FEC2u);
	r12 = 0xC275548u; UPD(0x0C04FEC4u, 1);  /* 0C04FEC2 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C04FEC4 mov #imm,Rn */
	r8 = 0xC3929D0u; UPD(0x0C04FEC8u, 2);  /* 0C04FEC6 mov.l @(disp,pc),Rn */
	r5 = 0xC392AF4u; UPD(0x0C04FECAu, 1);  /* 0C04FEC8 mov.l @(disp,pc),Rn */
	r11 = R32(r12); UPD(0x0C04FECCu, 1);  /* 0C04FECA mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C04FECEu, 1);  /* 0C04FECC mov.w @Rm,Rn */
	r10 = R32(r5); UPD(0x0C04FED0u, 1);  /* 0C04FECE mov.l @Rm,Rn */
	W32(r14, r1); UPD(0x0C04FED2u, 1);  /* 0C04FED0 mov.l Rm,@Rn */
	IF(0x0C04FED2u); ;  /* 0C04FED2 nop */
	UPD(0x0C04FED4u, 1);
L_0C04FED4: BLKS(0x0C04FED4u);
	r12 = (u32)(s32)(s16)R16(r6); UPD(0x0C04FED6u, 1);  /* 0C04FED4 mov.w @Rm,Rn */
	r4 = 0x3u;  /* 0C04FED6 mov #imm,Rn */
	r8 = r12 & 0xFFFF;  /* 0C04FED8 extu.w Rm,Rn */
	r12 = 0xC2852E8u; UPD(0x0C04FEDCu, 3);  /* 0C04FEDA mov.l @(disp,pc),Rn */
	r1 = 0xFFFFu; UPD(0x0C04FEDEu, 1);  /* 0C04FEDC mov.l @(disp,pc),Rn */
	r9 = R32(r12); UPD(0x0C04FEE0u, 1);  /* 0C04FEDE mov.l @Rm,Rn */
	r9 &= r1;  /* 0C04FEE0 and Rm,Rn */
	r9 += 0x1u;  /* 0C04FEE2 add #imm,Rn */
	T = r9 > r8;  /* 0C04FEE4 cmp/hi Rm,Rn */
	IF(0x0C04FEE6u); r9 = T;  /* 0C04FEE6 movt Rn */
	r0 = R32(r14); UPD(0x0C04FEEAu, 5);  /* 0C04FEE8 mov.l @Rm,Rn */
	IF(0x0C04FEEAu); T = (s32)r13 > 0;  /* 0C04FEEA cmp/pl Rn */
	IF(0x0C04FEECu); r7 = T;  /* 0C04FEEC movt Rn */
	T = (s32)r4 >= (s32)r0;  /* 0C04FEEE cmp/ge Rm,Rn */
	r0 = 0xC04A1A8u; UPD(0x0C04FEF2u, 4);  /* 0C04FEF0 mov.l @(disp,pc),Rn */
	IF(0x0C04FEF2u); r8 = T;  /* 0C04FEF2 movt Rn */
	r9 &= r7;  /* 0C04FEF4 and Rm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C04FEF8u, 3);  /* 0C04FEF6 mov.l Rm,@(disp,Rn) */
	IF(0x0C04FEF8u); { u32 t_ = r0; PR = 0x0C04FEFCu; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04A1A8, 0x0C04A1A8u, 0x0C04FEFCu); }  /* 0C04FEF8 jsr @Rn */
L_0C04FEFC: BLKS(0x0C04FEFCu);
	r2 = 0xC3929C0u; UPD(0x0C04FEFEu, 1);  /* 0C04FEFC mov.l @(disp,pc),Rn */
	r5 = 0x11u;  /* 0C04FEFE mov #imm,Rn */
	r3 = R32(r2); UPD(0x0C04FF02u, 2);  /* 0C04FF00 mov.l @Rm,Rn */
	r0 -= r3;  /* 0C04FF02 sub Rm,Rn */
	T = (s32)r5 >= (s32)r0;  /* 0C04FF04 cmp/ge Rm,Rn */
	IF(0x0C04FF06u); r6 = T;  /* 0C04FF06 movt Rn */
	r8 |= r6;  /* 0C04FF08 or Rm,Rn */
	r9 &= r8;  /* 0C04FF0A and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C04FF0C tst Rm,Rn */
	{ u32 c_ = !T; r6 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C04FF16u, 9); goto L_0C04FF16; } UPD(0x0C04FF12u, 1); goto L_0C04FF12; }  /* 0C04FF0E bf/s */
L_0C04FF12: BLKS(0x0C04FF12u);
	{ IF(0x0C04FF14u); ; /* slot nop */ UPD(0x0C050050u, 3); goto L_0C050050; }  /* 0C04FF12 bra */
L_0C04FF16: BLKS(0x0C04FF16u);
	r5 = 0xC285314u; UPD(0x0C04FF18u, 1);  /* 0C04FF16 mov.l @(disp,pc),Rn */
	r12 += 0x2u;  /* 0C04FF18 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r12); UPD(0x0C04FF1Cu, 2);  /* 0C04FF1A mov.w @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r5); UPD(0x0C04FF1Eu, 1);  /* 0C04FF1C mov.w @Rm,Rn */
	r4 = 0xC392E12u; UPD(0x0C04FF20u, 1);  /* 0C04FF1E mov.l @(disp,pc),Rn */
	r0 -= r1;  /* 0C04FF20 sub Rm,Rn */
	r7 = 0xC392D76u; UPD(0x0C04FF24u, 2);  /* 0C04FF22 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C04FF24 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C04FF28u, 2);  /* 0C04FF26 mov.w @Rm,Rn */
	r2 = r0 & 0xFFFF;  /* 0C04FF28 extu.w Rm,Rn */
	r9 = r3 & 0xFFFF;  /* 0C04FF2A extu.w Rm,Rn */
	T = r2 > r9;  /* 0C04FF2C cmp/hi Rm,Rn */
	{ u32 c_ = !T; W16(r7, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C04FF34u, 6); goto L_0C04FF34; } UPD(0x0C04FF32u, 1); goto L_0C04FF32; }  /* 0C04FF2E bf/s */
L_0C04FF32: BLKS(0x0C04FF32u);
	W16(r7, r3); UPD(0x0C04FF34u, 1);  /* 0C04FF32 mov.w Rm,@Rn */
L_0C04FF34: BLKS(0x0C04FF34u);
	r2 = (u32)(s32)(s16)R16(r7); UPD(0x0C04FF36u, 1);  /* 0C04FF34 mov.w @Rm,Rn */
	r3 = r2 & 0xFFFF;  /* 0C04FF36 extu.w Rm,Rn */
	T = (s32)r3 > (s32)r13;  /* 0C04FF38 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C04FF42u, 5); goto L_0C04FF42; }  /* 0C04FF3A bt */
L_0C04FF3C: BLKS(0x0C04FF3Cu);
	r7 = r13;  /* 0C04FF3C mov Rm,Rn */
	{ r7 -= r2; /* slot sub Rm,Rn */ UPD(0x0C050040u, 4); goto L_0C050040; }  /* 0C04FF3E bra */
L_0C04FF42: BLKS(0x0C04FF42u);
	W16(r7, r13); UPD(0x0C04FF44u, 1);  /* 0C04FF42 mov.w Rm,@Rn */
	r13 = 0x0u;  /* 0C04FF44 mov #imm,Rn */
	UPD(0x0C04FF46u, 1);
L_0C04FF46: BLKS(0x0C04FF46u);
	r4 = 0x20000000u; UPD(0x0C04FF48u, 1);  /* 0C04FF46 mov.l @(disp,pc),Rn */
	r1 = 0x18u;  /* 0C04FF48 mov #imm,Rn */
	r9 = 0xC21F884u; UPD(0x0C04FF4Cu, 2);  /* 0C04FF4A mov.l @(disp,pc),Rn */
	r2 = 0xC392DECu; UPD(0x0C04FF4Eu, 1);  /* 0C04FF4C mov.l @(disp,pc),Rn */
	W32(r10, r4); UPD(0x0C04FF50u, 1);  /* 0C04FF4E mov.l Rm,@Rn */
	r12 = (u32)(s32)(s16)R16(r9); UPD(0x0C04FF52u, 1);  /* 0C04FF50 mov.w @Rm,Rn */
	r10 += 0x4u;  /* 0C04FF52 add #imm,Rn */
	r0 = 0x99999999u; UPD(0x0C04FF56u, 2);  /* 0C04FF54 mov.l @(disp,pc),Rn */
	r3 = r12 & 0xFFFF;  /* 0C04FF56 extu.w Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C04FF5Au, 2);  /* 0C04FF58 mov.w @Rm,Rn */
	IF(0x0C04FF5Au); r3 <<= 8;  /* 0C04FF5A shll8 Rn */
	r8 = (u32)(s32)(s16)R16(r6); UPD(0x0C04FF5Eu, 2);  /* 0C04FF5C mov.w @Rm,Rn */
	IF(0x0C04FF5Eu); ARG0(0x451Du); { s32 s_ = (s32)r1; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C04FF5E shld Rm,Rn */
	W32(r10, r0); UPD(0x0C04FF62u, 2);  /* 0C04FF60 mov.l Rm,@Rn */
	r7 = r8 & 0xFFFF;  /* 0C04FF62 extu.w Rm,Rn */
	r3 += r7;  /* 0C04FF64 add Rm,Rn */
	r5 |= r3;  /* 0C04FF66 or Rm,Rn */
	r10 += 0x4u;  /* 0C04FF68 add #imm,Rn */
	r2 = 0xC392D76u; UPD(0x0C04FF6Cu, 5);  /* 0C04FF6A mov.l @(disp,pc),Rn */
	W32(r10, r5); UPD(0x0C04FF6Eu, 1);  /* 0C04FF6C mov.l Rm,@Rn */
	r4 = 0xC2852E8u; UPD(0x0C04FF70u, 1);  /* 0C04FF6E mov.l @(disp,pc),Rn */
	r10 += 0x4u;  /* 0C04FF70 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r2); UPD(0x0C04FF74u, 2);  /* 0C04FF72 mov.w @Rm,Rn */
	r5 = 0x0u;  /* 0C04FF74 mov #imm,Rn */
	r12 = R32(r4); UPD(0x0C04FF78u, 2);  /* 0C04FF76 mov.l @Rm,Rn */
	r8 = r9 & 0xFFFF;  /* 0C04FF78 extu.w Rm,Rn */
	r0 = 0xFFFF0000u; UPD(0x0C04FF7Cu, 2);  /* 0C04FF7A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFFFu;  /* 0C04FF7C add #imm,Rn */
	r12 &= r0;  /* 0C04FF7E and Rm,Rn */
	r12 |= r8;  /* 0C04FF80 or Rm,Rn */
	W32(r10, r12); UPD(0x0C04FF84u, 4);  /* 0C04FF82 mov.l Rm,@Rn */
	r8 += 0x1u;  /* 0C04FF84 add #imm,Rn */
	r10 += 0x4u;  /* 0C04FF86 add #imm,Rn */
	r3 = r8;  /* 0C04FF88 mov Rm,Rn */
	IF(0x0C04FF8Au); ;  /* 0C04FF8A nop */
	UPD(0x0C04FF8Cu, 4);
L_0C04FF8C: BLKS(0x0C04FF8Cu);
	r0 = 0xC2852E8u; UPD(0x0C04FF8Eu, 1);  /* 0C04FF8C mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C04FF90u, 1);  /* 0C04FF8E mov.l @Rm,Rn */
	IF(0x0C04FF90u); r2 >>= 16;  /* 0C04FF90 shlr16 Rn */
	r9 = r2;  /* 0C04FF92 mov Rm,Rn */
	r9 += 0x1u;  /* 0C04FF94 add #imm,Rn */
	IF(0x0C04FF96u); MACL = r3 * r9;  /* 0C04FF96 mul.l Rm,Rn */
	IF(0x0C04FF98u); r12 = MACL;  /* 0C04FF98 sts macl,Rn */
	IF(0x0C04FF9Au); r12 >>= 2;  /* 0C04FF9A shlr2 Rn */
	IF(0x0C04FF9Cu); T = r12 & 1; r12 >>= 1;  /* 0C04FF9C shlr Rn */
	IF(0x0C04FF9Eu); r12 >>= 2;  /* 0C04FF9E shlr2 Rn */
	T = r5 >= r12;  /* 0C04FFA0 cmp/hs Rm,Rn */
	if (T) { UPD(0x0C050010u, 13); goto L_0C050010; }  /* 0C04FFA2 bt */
L_0C04FFA4: BLKS(0x0C04FFA4u);
	{ u32 v_ = R32(r11); r11 += 4; r8 = v_; } UPD(0x0C04FFA6u, 1);  /* 0C04FFA4 mov.l @Rm+,Rn */
	r5 += 0x1u;  /* 0C04FFA6 add #imm,Rn */
	W32(r10, r8); UPD(0x0C04FFAAu, 2);  /* 0C04FFA8 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r7 = v_; } UPD(0x0C04FFACu, 1);  /* 0C04FFAA mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C04FFAC add #imm,Rn */
	W32(r10, r7); UPD(0x0C04FFB0u, 2);  /* 0C04FFAE mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r4 = v_; } UPD(0x0C04FFB2u, 1);  /* 0C04FFB0 mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C04FFB2 add #imm,Rn */
	W32(r10, r4); UPD(0x0C04FFB6u, 2);  /* 0C04FFB4 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r0 = v_; } UPD(0x0C04FFB8u, 1);  /* 0C04FFB6 mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C04FFB8 add #imm,Rn */
	W32(r10, r0); UPD(0x0C04FFBCu, 2);  /* 0C04FFBA mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r2 = v_; } UPD(0x0C04FFBEu, 1);  /* 0C04FFBC mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C04FFBE add #imm,Rn */
	W32(r10, r2); UPD(0x0C04FFC2u, 2);  /* 0C04FFC0 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r9 = v_; } UPD(0x0C04FFC4u, 1);  /* 0C04FFC2 mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C04FFC4 add #imm,Rn */
	W32(r10, r9); UPD(0x0C04FFC8u, 2);  /* 0C04FFC6 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r12 = v_; } UPD(0x0C04FFCAu, 1);  /* 0C04FFC8 mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C04FFCA add #imm,Rn */
	W32(r10, r12); UPD(0x0C04FFCEu, 2);  /* 0C04FFCC mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r8 = v_; } UPD(0x0C04FFD0u, 1);  /* 0C04FFCE mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C04FFD0 add #imm,Rn */
	W32(r10, r8); UPD(0x0C04FFD4u, 2);  /* 0C04FFD2 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r7 = v_; } UPD(0x0C04FFD6u, 1);  /* 0C04FFD4 mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C04FFD6 add #imm,Rn */
	W32(r10, r7); UPD(0x0C04FFDAu, 2);  /* 0C04FFD8 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r4 = v_; } UPD(0x0C04FFDCu, 1);  /* 0C04FFDA mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C04FFDC add #imm,Rn */
	W32(r10, r4); UPD(0x0C04FFE0u, 2);  /* 0C04FFDE mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r0 = v_; } UPD(0x0C04FFE2u, 1);  /* 0C04FFE0 mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C04FFE2 add #imm,Rn */
	W32(r10, r0); UPD(0x0C04FFE6u, 2);  /* 0C04FFE4 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r2 = v_; } UPD(0x0C04FFE8u, 1);  /* 0C04FFE6 mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C04FFE8 add #imm,Rn */
	W32(r10, r2); UPD(0x0C04FFECu, 2);  /* 0C04FFEA mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r9 = v_; } UPD(0x0C04FFEEu, 1);  /* 0C04FFEC mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C04FFEE add #imm,Rn */
	W32(r10, r9); UPD(0x0C04FFF2u, 2);  /* 0C04FFF0 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r12 = v_; } UPD(0x0C04FFF4u, 1);  /* 0C04FFF2 mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C04FFF4 add #imm,Rn */
	W32(r10, r12); UPD(0x0C04FFF8u, 2);  /* 0C04FFF6 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r8 = v_; } UPD(0x0C04FFFAu, 1);  /* 0C04FFF8 mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C04FFFA add #imm,Rn */
	W32(r10, r8); UPD(0x0C04FFFEu, 2);  /* 0C04FFFC mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r7 = v_; } UPD(0x0C050000u, 1);  /* 0C04FFFE mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C050000 add #imm,Rn */
	W32(r10, r7); UPD(0x0C050004u, 2);  /* 0C050002 mov.l Rm,@Rn */
	{ r10 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C04FF8Cu, 3); goto L_0C04FF8C; }  /* 0C050004 bra */
L_0C050010: BLKS(0x0C050010u);
	r9 = 0xC392D76u; UPD(0x0C050012u, 1);  /* 0C050010 mov.l @(disp,pc),Rn */
	r2 += r2;  /* 0C050012 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C050016u, 2);  /* 0C050014 mov.w @Rm,Rn */
	r2 += 0x2u;  /* 0C050016 add #imm,Rn */
	r12 = r4 & 0xFFFF;  /* 0C050018 extu.w Rm,Rn */
	IF(0x0C05001Au); MACL = r2 * r12;  /* 0C05001A mul.l Rm,Rn */
	r7 = 0xC275548u; UPD(0x0C05001Eu, 5);  /* 0C05001C mov.l @(disp,pc),Rn */
	r3 = R32(r14); UPD(0x0C050020u, 1);  /* 0C05001E mov.l @Rm,Rn */
	IF(0x0C050020u); r1 = MACL;  /* 0C050020 sts macl,Rn */
	r8 = R32(r7); UPD(0x0C050024u, 2);  /* 0C050022 mov.l @Rm,Rn */
	r3 += 0x1u;  /* 0C050024 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C050028u, 2);  /* 0C050026 mov.w @Rm,Rn */
	r8 += r1;  /* 0C050028 add Rm,Rn */
	r2 += r4;  /* 0C05002A add Rm,Rn */
	r5 = (u32)(s32)(s16)r3;  /* 0C05002C exts.w Rm,Rn */
	W32(r7, r8); UPD(0x0C050030u, 4);  /* 0C05002E mov.l Rm,@Rn */
	W16(r6, r2); UPD(0x0C050032u, 1);  /* 0C050030 mov.w Rm,@Rn */
	{ W32(r14, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C04FED4u, 3); goto L_0C04FED4; }  /* 0C050032 bra */
L_0C050040: BLKS(0x0C050040u);
	{ r13 = (u32)(s32)(s16)r7; /* slot exts.w Rm,Rn */ UPD(0x0C04FF46u, 3); goto L_0C04FF46; }  /* 0C050040 bra */
L_0C050050: BLKS(0x0C050050u);
	r2 = 0xF0000000u; UPD(0x0C050052u, 1);  /* 0C050050 mov.l @(disp,pc),Rn */
	r3 = 0xC392AF4u; UPD(0x0C050054u, 1);  /* 0C050052 mov.l @(disp,pc),Rn */
	W32(r10, r2); UPD(0x0C050056u, 1);  /* 0C050054 mov.l Rm,@Rn */
	W32(r3, r10); UPD(0x0C050058u, 1);  /* 0C050056 mov.l Rm,@Rn */
	r13 = 0xFFFFu; UPD(0x0C05005Au, 1);  /* 0C050058 mov.l @(disp,pc),Rn */
	r10 = R32(r12); UPD(0x0C05005Cu, 1);  /* 0C05005A mov.l @Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C05005Eu, 1);  /* 0C05005C mov.w @Rm,Rn */
	r10 &= r13;  /* 0C05005E and Rm,Rn */
	r11 = r5 & 0xFFFF;  /* 0C050060 extu.w Rm,Rn */
	r10 += 0x1u;  /* 0C050062 add #imm,Rn */
	T = r11 >= r10;  /* 0C050064 cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C050070u, 7); goto L_0C050070; }  /* 0C050066 bf */
L_0C050068: BLKS(0x0C050068u);
	r6 = 0xC21CA14u; UPD(0x0C05006Au, 1);  /* 0C050068 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C05006Cu, 1);  /* 0C05006A mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C05006C add #imm,Rn */
	W8(r6, r0); UPD(0x0C050070u, 2);  /* 0C05006E mov.b Rm,@Rn */
L_0C050070: BLKS(0x0C050070u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C04FE74u, 3); goto L_0C04FE74; }  /* 0C050070 bra */
L_0C0500D0: BLKS(0x0C0500D0u);
	if (!T) { UPD(0x0C050070u, 3); goto L_0C050070; }  /* 0C0500D0 bf */
L_0C0500D2: BLKS(0x0C0500D2u);
	r1 = 0x4u;  /* 0C0500D2 mov #imm,Rn */
	r8 = 0xC2852C8u; UPD(0x0C0500D6u, 2);  /* 0C0500D4 mov.l @(disp,pc),Rn */
	r12 = 0xC392DECu; UPD(0x0C0500D8u, 1);  /* 0C0500D6 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)R16(r8); UPD(0x0C0500DAu, 1);  /* 0C0500D8 mov.w @Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r12); UPD(0x0C0500DCu, 1);  /* 0C0500DA mov.w @Rm,Rn */
	r10 = r9;  /* 0C0500DC mov Rm,Rn */
	r4 = 0xC21F884u; UPD(0x0C0500E0u, 2);  /* 0C0500DE mov.l @(disp,pc),Rn */
	r9 = r6 & 0xFFFF;  /* 0C0500E0 extu.w Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C0500E4u, 2);  /* 0C0500E2 mov.w @Rm,Rn */
	IF(0x0C0500E4u); ARG0(0x491Du); { s32 s_ = (s32)r1; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C0500E4 shld Rm,Rn */
	r11 = r0 & 0xFFFF;  /* 0C0500E6 extu.w Rm,Rn */
	r3 = 0x3FFFu; UPD(0x0C0500EAu, 3);  /* 0C0500E8 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C0500EA mov Rm,Rn */
	r0 += r11;  /* 0C0500EC add Rm,Rn */
	r13 = 0xC38BC64u; UPD(0x0C0500F0u, 3);  /* 0C0500EE mov.l @(disp,pc),Rn */
	r10 &= r3;  /* 0C0500F0 and Rm,Rn */
	r0 += r0;  /* 0C0500F2 add Rm,Rn */
	IF(0x0C0500F4u); W16(r0 + r13, r10); UPD(0x0C0500F6u, 3);  /* 0C0500F4 mov.w Rm,@(r0,Rn) */
	r12 += 0x1u;  /* 0C0500F6 add #imm,Rn */
	r7 = 0xC284EC0u; UPD(0x0C0500FAu, 2);  /* 0C0500F8 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0500FA add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r12); UPD(0x0C0500FEu, 2);  /* 0C0500FC mov.b @Rm,Rn */
	r0 = r7;  /* 0C0500FE mov Rm,Rn */
	IF(0x0C050100u); W8(r0 + r10, r5); UPD(0x0C050102u, 2);  /* 0C050100 mov.b Rm,@(r0,Rn) */
	r12 = 0x14u;  /* 0C050102 mov #imm,Rn */
	r2 = 0xC220C64u; UPD(0x0C050106u, 2);  /* 0C050104 mov.l @(disp,pc),Rn */
	IF(0x0C050106u); ARG0(0x49CDu); { s32 s_ = (s32)r12; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C050106 shld Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r4); UPD(0x0C05010Au, 2);  /* 0C050108 mov.b @Rm,Rn */
	r0 = r2;  /* 0C05010A mov Rm,Rn */
	IF(0x0C05010Cu); W8(r0 + r10, r13); UPD(0x0C05010Eu, 2);  /* 0C05010C mov.b Rm,@(r0,Rn) */
	IF(0x0C05010Eu); r11 <<= 8;  /* 0C05010E shll8 Rn */
	IF(0x0C050110u); r10 <<= 2;  /* 0C050110 shll2 Rn */
	r7 = 0xC283EB8u; UPD(0x0C050114u, 3);  /* 0C050112 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C050114 mov Rm,Rn */
	r9 |= r11;  /* 0C050116 or Rm,Rn */
	r6 = 0xC26C8BCu; UPD(0x0C05011Au, 3);  /* 0C050118 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C05011A mov #imm,Rn */
	IF(0x0C05011Cu); W32(r0 + r7, r9); UPD(0x0C05011Eu, 2);  /* 0C05011C mov.l Rm,@(r0,Rn) */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C050120u, 1);  /* 0C05011E mov.b @Rm,Rn */
	r5 = 0xC393070u; UPD(0x0C050122u, 1);  /* 0C050120 mov.l @(disp,pc),Rn */
	r3 = r0 & 0xFF;  /* 0C050122 extu.b Rm,Rn */
	r0 = r5;  /* 0C050124 mov Rm,Rn */
	IF(0x0C050126u); W8(r0 + r3, r4); UPD(0x0C050128u, 3);  /* 0C050126 mov.b Rm,@(r0,Rn) */
	r5 = 0x0u;  /* 0C050128 mov #imm,Rn */
	r4 = 0xC275548u; UPD(0x0C05012Cu, 2);  /* 0C05012A mov.l @(disp,pc),Rn */
	r6 = r8;  /* 0C05012C mov Rm,Rn */
	UPD(0x0C05012Eu, 1);
L_0C05012E: BLKS(0x0C05012Eu);
	r12 = r5;  /* 0C05012E mov Rm,Rn */
	r12 += r12;  /* 0C050130 add Rm,Rn */
	r11 = 0xC21F884u; UPD(0x0C050134u, 3);  /* 0C050132 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C050134 mov Rm,Rn */
	r13 = 0xC392DECu; UPD(0x0C050138u, 2);  /* 0C050136 mov.l @(disp,pc),Rn */
	r0 += r6;  /* 0C050138 add Rm,Rn */
	r11 += r12;  /* 0C05013A add Rm,Rn */
	r0 += 0x2u;  /* 0C05013C add #imm,Rn */
	r11 += 0x2u;  /* 0C05013E add #imm,Rn */
	r13 += r12;  /* 0C050140 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C050144u, 6);  /* 0C050142 mov.w @Rm,Rn */
	r13 += 0x2u;  /* 0C050144 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r11); UPD(0x0C050148u, 2);  /* 0C050146 mov.w @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r13); UPD(0x0C05014Au, 1);  /* 0C050148 mov.w @Rm,Rn */
	{ u32 v_ = r3; r0 -= 2; W16(r0, v_); } UPD(0x0C05014Cu, 1);  /* 0C05014A mov.w Rm,@-Rn */
	{ u32 v_ = r7; r11 -= 2; W16(r11, v_); } UPD(0x0C05014Eu, 1);  /* 0C05014C mov.w Rm,@-Rn */
	r0 = r5;  /* 0C05014E mov Rm,Rn */
	r9 = 0xC26C8BCu; UPD(0x0C050152u, 2);  /* 0C050150 mov.l @(disp,pc),Rn */
	IF(0x0C050152u); r0 <<= 2;  /* 0C050152 shll2 Rn */
	{ u32 v_ = r1; r13 -= 2; W16(r13, v_); } UPD(0x0C050156u, 2);  /* 0C050154 mov.w Rm,@-Rn */
	r9 += r5;  /* 0C050156 add Rm,Rn */
	r11 = 0xC3929D0u; UPD(0x0C05015Au, 2);  /* 0C050158 mov.l @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C05015A add #imm,Rn */
	r13 = 0xC2852E8u; UPD(0x0C05015Eu, 2);  /* 0C05015C mov.l @(disp,pc),Rn */
	r3 = r0;  /* 0C05015E mov Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C050162u, 2);  /* 0C050160 mov.b @Rm,Rn */
	r11 += r12;  /* 0C050162 add Rm,Rn */
	r3 += r4;  /* 0C050164 add Rm,Rn */
	r13 += r0;  /* 0C050166 add Rm,Rn */
	r11 += 0x2u;  /* 0C050168 add #imm,Rn */
	{ u32 v_ = r10; r9 -= 1; W8(r9, v_); } UPD(0x0C05016Cu, 5);  /* 0C05016A mov.b Rm,@-Rn */
	r5 += 0x1u;  /* 0C05016C add #imm,Rn */
	r2 = R32(r3 + 0x4u); UPD(0x0C050170u, 2);  /* 0C05016E mov.l @(disp,Rm),Rn */
	r10 = 0x6u;  /* 0C050170 mov #imm,Rn */
	r1 = R32(r13 + 0x4u); UPD(0x0C050174u, 2);  /* 0C050172 mov.l @(disp,Rm),Rn */
	T = r5 > r10;  /* 0C050174 cmp/hi Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r11); UPD(0x0C050178u, 2);  /* 0C050176 mov.w @Rm,Rn */
	W32(r3, r2); UPD(0x0C05017Au, 1);  /* 0C050178 mov.l Rm,@Rn */
	W32(r13, r1); UPD(0x0C05017Cu, 1);  /* 0C05017A mov.l Rm,@Rn */
	{ u32 c_ = !T; { u32 v_ = r7; r11 -= 2; W16(r11, v_); } /* slot mov.w Rm,@-Rn */ if (c_) { UPD(0x0C05012Eu, 3); goto L_0C05012E; } UPD(0x0C050180u, 1); goto L_0C050180; }  /* 0C05017C bf/s */
L_0C050180: BLKS(0x0C050180u);
	r5 = 0x400u; UPD(0x0C050182u, 1);  /* 0C050180 mov.w @(disp,pc),Rn */
	r6 = 0xC2852D6u; UPD(0x0C050184u, 1);  /* 0C050182 mov.l @(disp,pc),Rn */
	r4 = 0xC21CA14u; UPD(0x0C050186u, 1);  /* 0C050184 mov.l @(disp,pc),Rn */
	W16(r6, r5); UPD(0x0C050188u, 1);  /* 0C050186 mov.w Rm,@Rn */
	{ W8(r4, r5); /* slot mov.b Rm,@Rn */ UPD(0x0C04FE90u, 3); goto L_0C04FE90; }  /* 0C050188 bra */
L_0C050190: BLKS(0x0C050190u);
	r6 = 0xC285314u; UPD(0x0C050192u, 1);  /* 0C050190 mov.l @(disp,pc),Rn */
	{ IF(0x0C050194u); ; /* slot nop */ UPD(0x0C04FEC2u, 3); goto L_0C04FEC2; }  /* 0C050192 bra */
}

/* FUN_0c0501e0 */
void f_0C0501E0(sh3_t *c)
{
	LOCALS;
L_0C0501E0: BLKS(0x0C0501E0u);
	r3 = 0xC283C94u; UPD(0x0C0501E2u, 1);  /* 0C0501E0 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0501E4u, 1);  /* 0C0501E2 mov.l Rm,@-Rn */
	r2 = R32(r3); UPD(0x0C0501E6u, 1);  /* 0C0501E4 mov.l @Rm,Rn */
	r0 = 0x19671010u; UPD(0x0C0501E8u, 1);  /* 0C0501E6 mov.l @(disp,pc),Rn */
	T = r2 == r0;  /* 0C0501E8 cmp/eq Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C050210u, 4); goto L_0C050210; } goto L_0C0501EE; }  /* 0C0501EA bt/s */
L_0C0501EE: BLKS(0x0C0501EEu);
	T = (r2 & r2) == 0;  /* 0C0501EE tst Rm,Rn */
	if (T) { UPD(0x0C0501FEu, 5); goto L_0C0501FE; }  /* 0C0501F0 bt */
L_0C0501F2: BLKS(0x0C0501F2u);
	r4 = 0x0u;  /* 0C0501F2 mov #imm,Rn */
	r0 = 0xC21CA1Cu; UPD(0x0C0501F6u, 2);  /* 0C0501F4 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0501F8u, 1);  /* 0C0501F6 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C0501F8 add #imm,Rn */
	W32(r3, r4); UPD(0x0C0501FCu, 2);  /* 0C0501FA mov.l Rm,@Rn */
	W8(r0, r2); UPD(0x0C0501FEu, 1);  /* 0C0501FC mov.b Rm,@Rn */
L_0C0501FE: BLKS(0x0C0501FEu);
	r15 = r14;  /* 0C0501FE mov Rm,Rn */
	IF(0x0C050200u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C050200 rts */
L_0C050210: BLKS(0x0C050210u);
	r0 = 0xC392AF4u; UPD(0x0C050212u, 1);  /* 0C050210 mov.l @(disp,pc),Rn */
	r7 = R32(r0); UPD(0x0C050214u, 1);  /* 0C050212 mov.l @Rm,Rn */
	r5 = 0xF0000000u; UPD(0x0C050216u, 1);  /* 0C050214 mov.l @(disp,pc),Rn */
	r6 = R32(r7); UPD(0x0C050218u, 1);  /* 0C050216 mov.l @Rm,Rn */
	T = r6 == r5;  /* 0C050218 cmp/eq Rm,Rn */
	{ u32 c_ = T; r2 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C050230u, 4); goto L_0C050230; } goto L_0C05021E; }  /* 0C05021A bt/s */
L_0C05021E: BLKS(0x0C05021Eu);
	r4 = 0xC283748u; UPD(0x0C050220u, 2);  /* 0C05021E mov.l @(disp,pc),Rn */
	W8(r4, r2); UPD(0x0C050222u, 1);  /* 0C050220 mov.b Rm,@Rn */
	r6 = 0x0u;  /* 0C050222 mov #imm,Rn */
	UPD(0x0C050224u, 1);
L_0C050224: BLKS(0x0C050224u);
	{ W32(r3, r6); /* slot mov.l Rm,@Rn */ UPD(0x0C0501FEu, 3); goto L_0C0501FE; }  /* 0C050224 bra */
L_0C050230: BLKS(0x0C050230u);
	r5 = 0xB8000010u; UPD(0x0C050232u, 1);  /* 0C050230 mov.l @(disp,pc),Rn */
	r0 = R32(r5); UPD(0x0C050234u, 1);  /* 0C050232 mov.l @Rm,Rn */
	r0 &= 0x10u;  /* 0C050234 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C050236 tst Rm,Rn */
	if (T) { UPD(0x0C0501FEu, 5); goto L_0C0501FE; }  /* 0C050238 bt */
L_0C05023A: BLKS(0x0C05023Au);
	r1 = 0x1u;  /* 0C05023A mov #imm,Rn */
	r2 = 0xC392AF8u; UPD(0x0C05023Eu, 2);  /* 0C05023C mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C050240u, 1);  /* 0C05023E mov.l @Rm,Rn */
	r4 = 0xB8000014u; UPD(0x0C050242u, 1);  /* 0C050240 mov.l @(disp,pc),Rn */
	r0 = 0xC21CA08u; UPD(0x0C050244u, 1);  /* 0C050242 mov.l @(disp,pc),Rn */
	W32(r4, r5); UPD(0x0C050246u, 1);  /* 0C050244 mov.l Rm,@Rn */
	r6 = 0xB8000018u; UPD(0x0C050248u, 1);  /* 0C050246 mov.l @(disp,pc),Rn */
	r7 = R32(r0); UPD(0x0C05024Au, 1);  /* 0C050248 mov.l @Rm,Rn */
	r2 = 0xC21F898u; UPD(0x0C05024Cu, 1);  /* 0C05024A mov.l @(disp,pc),Rn */
	W32(r6, r7); UPD(0x0C05024Eu, 1);  /* 0C05024C mov.l Rm,@Rn */
	r4 = 0xB8000038u; UPD(0x0C050250u, 1);  /* 0C05024E mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C050252u, 1);  /* 0C050250 mov.l @Rm,Rn */
	r0 = 0xC2175E4u; UPD(0x0C050254u, 1);  /* 0C050252 mov.l @(disp,pc),Rn */
	W32(r4, r5); UPD(0x0C050256u, 1);  /* 0C050254 mov.l Rm,@Rn */
	r6 = 0xB800003Cu; UPD(0x0C050258u, 1);  /* 0C050256 mov.l @(disp,pc),Rn */
	r7 = R32(r0); UPD(0x0C05025Au, 1);  /* 0C050258 mov.l @Rm,Rn */
	r2 = 0xC286290u; UPD(0x0C05025Cu, 1);  /* 0C05025A mov.l @(disp,pc),Rn */
	W32(r6, r7); UPD(0x0C05025Eu, 1);  /* 0C05025C mov.l Rm,@Rn */
	r4 = 0xB8000048u; UPD(0x0C050260u, 1);  /* 0C05025E mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C050262u, 1);  /* 0C050260 mov.l @Rm,Rn */
	r0 = 0xC21CC30u; UPD(0x0C050264u, 1);  /* 0C050262 mov.l @(disp,pc),Rn */
	W32(r4, r5); UPD(0x0C050266u, 1);  /* 0C050264 mov.l Rm,@Rn */
	r6 = 0xB8000040u; UPD(0x0C050268u, 1);  /* 0C050266 mov.l @(disp,pc),Rn */
	r7 = R32(r0); UPD(0x0C05026Au, 1);  /* 0C050268 mov.l @Rm,Rn */
	r2 = 0xC26C8C8u; UPD(0x0C05026Cu, 1);  /* 0C05026A mov.l @(disp,pc),Rn */
	W32(r6, r7); UPD(0x0C05026Eu, 1);  /* 0C05026C mov.l Rm,@Rn */
	r4 = 0xB8000044u; UPD(0x0C050270u, 1);  /* 0C05026E mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C050272u, 1);  /* 0C050270 mov.l @Rm,Rn */
	r0 = 0xC392DD8u; UPD(0x0C050274u, 1);  /* 0C050272 mov.l @(disp,pc),Rn */
	W32(r4, r5); UPD(0x0C050276u, 1);  /* 0C050274 mov.l Rm,@Rn */
	r6 = 0xB8000008u; UPD(0x0C050278u, 1);  /* 0C050276 mov.l @(disp,pc),Rn */
	r7 = R32(r0); UPD(0x0C05027Au, 1);  /* 0C050278 mov.l @Rm,Rn */
	W32(r6, r7); UPD(0x0C05027Cu, 1);  /* 0C05027A mov.l Rm,@Rn */
	r6 += 0xFFFFFFFCu;  /* 0C05027C add #imm,Rn */
	W32(r6, r1); UPD(0x0C050280u, 2);  /* 0C05027E mov.l Rm,@Rn */
	{ r6 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C050224u, 3); goto L_0C050224; }  /* 0C050280 bra */
}

/* FUN_0c0502e0 */
void f_0C0502E0(sh3_t *c)
{
	LOCALS;
L_0C0502E0: BLKS(0x0C0502E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0502E2u, 1);  /* 0C0502E0 mov.l Rm,@-Rn */
	r5 = 0x5u;  /* 0C0502E2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0502E6u, 2);  /* 0C0502E4 mov.l Rm,@-Rn */
	r4 = 0x3u;  /* 0C0502E6 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0502EAu, 2);  /* 0C0502E8 mov.l Rm,@-Rn */
	r1 = 0x22u;  /* 0C0502EA mov #imm,Rn */
	IF(0x0C0502ECu); r15 -= 4; W32(r15, PR); UPD(0x0C0502EEu, 2);  /* 0C0502EC sts.l pr,@-Rn */
	r9 = 0x0u;  /* 0C0502EE mov #imm,Rn */
	r3 = 0xC27DDAEu; UPD(0x0C0502F2u, 2);  /* 0C0502F0 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0502F2 mov Rm,Rn */
	W8(r3, r5); UPD(0x0C0502F6u, 2);  /* 0C0502F4 mov.b Rm,@Rn */
	r3 += 0xFFFFFFFAu;  /* 0C0502F6 add #imm,Rn */
	r3 += 0x5u;  /* 0C0502F8 add #imm,Rn */
	W8(r3, r4); UPD(0x0C0502FCu, 3);  /* 0C0502FA mov.b Rm,@Rn */
	{ u32 v_ = r1; r3 -= 1; W8(r3, v_); } UPD(0x0C0502FEu, 1);  /* 0C0502FC mov.b Rm,@-Rn */
	r3 += 0xFFFFFFFCu;  /* 0C0502FE add #imm,Rn */
	W8(r3, r9); UPD(0x0C050302u, 2);  /* 0C050300 mov.b Rm,@Rn */
	r0 = r3;  /* 0C050302 mov Rm,Rn */
	r8 = 0xC04BF60u; UPD(0x0C050306u, 2);  /* 0C050304 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C050306 add #imm,Rn */
	r0 += 0x2u;  /* 0C050308 add #imm,Rn */
	W8(r3, r9); UPD(0x0C05030Cu, 3);  /* 0C05030A mov.b Rm,@Rn */
	r4 = 0xC286500u; UPD(0x0C05030Eu, 1);  /* 0C05030C mov.l @(disp,pc),Rn */
	IF(0x0C05030Eu); { u32 t_ = r8; PR = 0x0C050312u; W8(r0, r9); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C04BF60, 0x0C04BF60u, 0x0C050312u); }  /* 0C05030E jsr @Rn */
L_0C050312: BLKS(0x0C050312u);
	r7 = 0xC1604A4u; UPD(0x0C050314u, 1);  /* 0C050312 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C050314 mov #imm,Rn */
	r6 = 0x9u;  /* 0C050316 mov #imm,Rn */
	r4 = 0xFFFFFFFCu;  /* 0C050318 mov #imm,Rn */
	r5 = 0x5u;  /* 0C05031A mov #imm,Rn */
	UPD(0x0C05031Cu, 4);
L_0C05031C: BLKS(0x0C05031Cu);
	{ u32 v_ = R32(r7); r7 += 4; r0 = v_; } UPD(0x0C05031Eu, 1);  /* 0C05031C mov.l @Rm+,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C050320u, 1);  /* 0C05031E mov.b @Rm,Rn */
	r0 = r2;  /* 0C050320 mov Rm,Rn */
	r0 &= 0xFu;  /* 0C050322 and #imm,r0 */
	T = (s32)r0 > (s32)r6;  /* 0C050324 cmp/gt Rm,Rn */
	r0 = 0xF0u; UPD(0x0C050328u, 4);  /* 0C050326 mov.w @(disp,pc),Rn */
	IF(0x0C050328u); r8 = T;  /* 0C050328 movt Rn */
	r2 &= r0;  /* 0C05032A and Rm,Rn */
	IF(0x0C05032Cu); ARG0(0x424Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C05032C shad Rm,Rn */
	T = (s32)r2 > (s32)r6;  /* 0C05032E cmp/gt Rm,Rn */
	IF(0x0C050330u); r2 = T;  /* 0C050330 movt Rn */
	r8 |= r2;  /* 0C050332 or Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C050334 tst Rm,Rn */
	if (T) { UPD(0x0C05033Au, 10); goto L_0C05033A; }  /* 0C050336 bt */
L_0C050338: BLKS(0x0C050338u);
	r9 = 0x1u;  /* 0C050338 mov #imm,Rn */
	UPD(0x0C05033Au, 1);
L_0C05033A: BLKS(0x0C05033Au);
	r8 = r3;  /* 0C05033A mov Rm,Rn */
	r8 += 0x1u;  /* 0C05033C add #imm,Rn */
	r3 = (u32)(s32)(s8)r8;  /* 0C05033E exts.b Rm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C050340 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C05031Cu, 7); goto L_0C05031C; }  /* 0C050342 bf */
L_0C050344: BLKS(0x0C050344u);
	r6 = 0x11u;  /* 0C050344 mov #imm,Rn */
	r8 = 0xC286505u; UPD(0x0C050348u, 2);  /* 0C050346 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C05034Au, 1);  /* 0C050348 mov.b @Rm,Rn */
	r3 = r0;  /* 0C05034A mov Rm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C05034C add #imm,Rn */
	r7 = r3 & 0xFF;  /* 0C05034E extu.b Rm,Rn */
	T = r7 > r6;  /* 0C050350 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFFBu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C050358u, 7); goto L_0C050358; } goto L_0C050356; }  /* 0C050352 bf/s */
L_0C050356: BLKS(0x0C050356u);
	r9 = 0x1u;  /* 0C050356 mov #imm,Rn */
	UPD(0x0C050358u, 2);
L_0C050358: BLKS(0x0C050358u);
	r8 += 0x4u;  /* 0C050358 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C05035Cu, 2);  /* 0C05035A mov.b @Rm,Rn */
	r0 = r0 & 0xFF;  /* 0C05035C extu.b Rm,Rn */
	r3 = 0xC1604BCu; UPD(0x0C050360u, 2);  /* 0C05035E mov.l @(disp,pc),Rn */
	r6 = r1 & 0xFF;  /* 0C050360 extu.b Rm,Rn */
	IF(0x0C050362u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C050364u, 2);  /* 0C050362 mov.b @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C050364 tst Rm,Rn */
	IF(0x0C050366u); r4 = T;  /* 0C050366 movt Rn */
	r0 = r7 & 0xFF;  /* 0C050368 extu.b Rm,Rn */
	T = r6 > r0;  /* 0C05036A cmp/hi Rm,Rn */
	IF(0x0C05036Cu); r5 = T;  /* 0C05036C movt Rn */
	r4 |= r5;  /* 0C05036E or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C050370 tst Rm,Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFFCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C050378u, 10); goto L_0C050378; } goto L_0C050376; }  /* 0C050372 bt/s */
L_0C050376: BLKS(0x0C050376u);
	r9 = 0x1u;  /* 0C050376 mov #imm,Rn */
	UPD(0x0C050378u, 2);
L_0C050378: BLKS(0x0C050378u);
	r8 += 0x2u;  /* 0C050378 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C05037Cu, 2);  /* 0C05037A mov.b @Rm,Rn */
	r4 = 0x23u;  /* 0C05037C mov #imm,Rn */
	T = r5 > r4;  /* 0C05037E cmp/hi Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C050386u, 5); goto L_0C050386; } goto L_0C050384; }  /* 0C050380 bf/s */
L_0C050384: BLKS(0x0C050384u);
	r9 = 0x1u;  /* 0C050384 mov #imm,Rn */
	UPD(0x0C050386u, 2);
L_0C050386: BLKS(0x0C050386u);
	r8 += 0x1u;  /* 0C050386 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C05038Au, 2);  /* 0C050388 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C05038A extu.b Rm,Rn */
	r2 = 0x59u;  /* 0C05038C mov #imm,Rn */
	T = r0 > r2;  /* 0C05038E cmp/hi Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C050396u, 6); goto L_0C050396; } goto L_0C050394; }  /* 0C050390 bf/s */
L_0C050394: BLKS(0x0C050394u);
	r9 = 0x1u;  /* 0C050394 mov #imm,Rn */
	UPD(0x0C050396u, 2);
L_0C050396: BLKS(0x0C050396u);
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C050398u, 1);  /* 0C050396 mov.b @Rm,Rn */
	r6 = r7 & 0xFF;  /* 0C050398 extu.b Rm,Rn */
	T = r6 > r2;  /* 0C05039A cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0503A0u, 5); goto L_0C0503A0; }  /* 0C05039C bf */
L_0C05039E: BLKS(0x0C05039Eu);
	r9 = 0x1u;  /* 0C05039E mov #imm,Rn */
	UPD(0x0C0503A0u, 1);
L_0C0503A0: BLKS(0x0C0503A0u);
	T = (r9 & r9) == 0;  /* 0C0503A0 tst Rm,Rn */
	if (!T) { UPD(0x0C0503B0u, 4); goto L_0C0503B0; }  /* 0C0503A2 bf */
L_0C0503A4: BLKS(0x0C0503A4u);
	r15 = r14;  /* 0C0503A4 mov Rm,Rn */
	IF(0x0C0503A6u); PR = R32(r15); r15 += 4; UPD(0x0C0503A8u, 2);  /* 0C0503A6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0503AAu, 1);  /* 0C0503A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0503ACu, 1);  /* 0C0503AA mov.l @Rm+,Rn */
	IF(0x0C0503ACu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0503AC rts */
L_0C0503B0: BLKS(0x0C0503B0u);
	r9 = 0xC0AFEB0u; UPD(0x0C0503B2u, 1);  /* 0C0503B0 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0503B2 mov Rm,Rn */
	r5 = 0xC27DDA8u; UPD(0x0C0503B6u, 2);  /* 0C0503B4 mov.l @(disp,pc),Rn */
	IF(0x0C0503B6u); { u32 t_ = r9; PR = 0x0C0503BAu; r6 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFEB0, 0x0C0AFEB0u, 0x0C0503BAu); }  /* 0C0503B6 jsr @Rn */
L_0C0503BA: BLKS(0x0C0503BAu);
	r3 = 0xC04C0D8u; UPD(0x0C0503BCu, 1);  /* 0C0503BA mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0503BC mov Rm,Rn */
	r15 = r14;  /* 0C0503BE mov Rm,Rn */
	IF(0x0C0503C0u); PR = R32(r15); r15 += 4; UPD(0x0C0503C2u, 3);  /* 0C0503C0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0503C4u, 1);  /* 0C0503C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0503C6u, 1);  /* 0C0503C4 mov.l @Rm+,Rn */
	IF(0x0C0503C6u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C04C0D8u: TAIL(f_0C04C0D8); default: JUMPD(tv_); } }  /* 0C0503C6 jmp @Rn */
}

void f_0C0503F0(sh3_t *c)
{
	LOCALS;
L_0C0503F0: BLKS(0x0C0503F0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0503F2u, 1);  /* 0C0503F0 mov.l Rm,@-Rn */
	r4 = 0x5u;  /* 0C0503F2 mov #imm,Rn */
	r0 = 0xC04A1A8u; UPD(0x0C0503F6u, 2);  /* 0C0503F4 mov.l @(disp,pc),Rn */
	IF(0x0C0503F6u); r15 -= 4; W32(r15, PR); UPD(0x0C0503F8u, 1);  /* 0C0503F6 sts.l pr,@-Rn */
	IF(0x0C0503F8u); { u32 t_ = r0; PR = 0x0C0503FCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04A1A8, 0x0C04A1A8u, 0x0C0503FCu); }  /* 0C0503F8 jsr @Rn */
L_0C0503FC: BLKS(0x0C0503FCu);
	r3 = 0xC160440u; UPD(0x0C0503FEu, 1);  /* 0C0503FC mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C050400u, 1);  /* 0C0503FE mov.l @Rm,Rn */
	r0 -= r2;  /* 0C050400 sub Rm,Rn */
	r2 = 0xC160444u; UPD(0x0C050404u, 2);  /* 0C050402 mov.l @(disp,pc),Rn */
	W32(r2, r0); UPD(0x0C050406u, 1);  /* 0C050404 mov.l Rm,@Rn */
	r15 = r14;  /* 0C050406 mov Rm,Rn */
	IF(0x0C050408u); PR = R32(r15); r15 += 4; UPD(0x0C05040Au, 2);  /* 0C050408 lds.l @Rn+,pr */
	IF(0x0C05040Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05040A rts */
}

void f_0C050420(sh3_t *c)
{
	LOCALS;
L_0C050420: BLKS(0x0C050420u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C050422u, 1);  /* 0C050420 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C050424u, 1);  /* 0C050422 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C050426u, 1);  /* 0C050424 mov.l Rm,@-Rn */
	r7 = 0xC392DE0u; UPD(0x0C050428u, 1);  /* 0C050426 mov.l @(disp,pc),Rn */
	IF(0x0C050428u); r15 -= 4; W32(r15, PR); UPD(0x0C05042Au, 1);  /* 0C050428 sts.l pr,@-Rn */
	r6 = 0xB8000030u; UPD(0x0C05042Cu, 1);  /* 0C05042A mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C05042C mov Rm,Rn */
	r8 = R32(r7); UPD(0x0C050430u, 2);  /* 0C05042E mov.l @Rm,Rn */
	r2 = 0xC26CAD8u; UPD(0x0C050432u, 1);  /* 0C050430 mov.l @(disp,pc),Rn */
	W32(r6, r8); UPD(0x0C050434u, 1);  /* 0C050432 mov.l Rm,@Rn */
	r4 = 0xB8000034u; UPD(0x0C050436u, 1);  /* 0C050434 mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C050438u, 1);  /* 0C050436 mov.l @Rm,Rn */
	r3 = 0xC21F89Cu; UPD(0x0C05043Au, 1);  /* 0C050438 mov.l @(disp,pc),Rn */
	W32(r4, r5); UPD(0x0C05043Cu, 1);  /* 0C05043A mov.l Rm,@Rn */
	r7 = 0xC0501E0u; UPD(0x0C05043Eu, 1);  /* 0C05043C mov.l @(disp,pc),Rn */
	r0 = R32(r3); UPD(0x0C050440u, 1);  /* 0C05043E mov.l @Rm,Rn */
	r9 = 0xB8000028u; UPD(0x0C050442u, 1);  /* 0C050440 mov.l @(disp,pc),Rn */
	r8 = 0xC0AF850u; UPD(0x0C050444u, 1);  /* 0C050442 mov.l @(disp,pc),Rn */
	W32(r9, r0); UPD(0x0C050446u, 1);  /* 0C050444 mov.l Rm,@Rn */
	IF(0x0C050446u); { u32 t_ = r7; PR = 0x0C05044Au; IF(0x0C050448u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0501E0, 0x0C0501E0u, 0x0C05044Au); }  /* 0C050446 jsr @Rn */
L_0C05044A: BLKS(0x0C05044Au);
	IF(0x0C05044Au); { u32 t_ = r8; PR = 0x0C05044Eu; IF(0x0C05044Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AF850, 0x0C0AF850u, 0x0C05044Eu); }  /* 0C05044A jsr @Rn */
L_0C05044E: BLKS(0x0C05044Eu);
	r3 = 0xC392964u; UPD(0x0C050450u, 1);  /* 0C05044E mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C050450 mov #imm,Rn */
	r2 = R32(r3); UPD(0x0C050454u, 2);  /* 0C050452 mov.l @Rm,Rn */
	r0 = 0xC04F000u; UPD(0x0C050456u, 1);  /* 0C050454 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C050456 add #imm,Rn */
	r6 = 0xC220C3Cu; UPD(0x0C05045Au, 2);  /* 0C050458 mov.l @(disp,pc),Rn */
	r4 = 0xC21E106u; UPD(0x0C05045Cu, 1);  /* 0C05045A mov.l @(disp,pc),Rn */
	W32(r3, r2); UPD(0x0C05045Eu, 1);  /* 0C05045C mov.l Rm,@Rn */
	W8(r4, r5); UPD(0x0C050460u, 1);  /* 0C05045E mov.b Rm,@Rn */
	IF(0x0C050460u); { u32 t_ = r0; PR = 0x0C050464u; W8(r6, r5); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C04F000, 0x0C04F000u, 0x0C050464u); }  /* 0C050460 jsr @Rn */
L_0C050464: BLKS(0x0C050464u);
	r0 = 0xC04A1A8u; UPD(0x0C050466u, 1);  /* 0C050464 mov.l @(disp,pc),Rn */
	r4 = 0x5u;  /* 0C050466 mov #imm,Rn */
	r8 = 0xC3929C0u; UPD(0x0C05046Au, 2);  /* 0C050468 mov.l @(disp,pc),Rn */
	IF(0x0C05046Au); { u32 t_ = r0; PR = 0x0C05046Eu; r9 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04A1A8, 0x0C04A1A8u, 0x0C05046Eu); }  /* 0C05046A jsr @Rn */
L_0C05046E: BLKS(0x0C05046Eu);
	W32(r8, r0); UPD(0x0C050470u, 1);  /* 0C05046E mov.l Rm,@Rn */
	r2 = 0xC286510u; UPD(0x0C050472u, 1);  /* 0C050470 mov.l @(disp,pc),Rn */
	r0 -= r9;  /* 0C050472 sub Rm,Rn */
	W32(r2, r0); UPD(0x0C050476u, 2);  /* 0C050474 mov.l Rm,@Rn */
	r15 = r14;  /* 0C050476 mov Rm,Rn */
	IF(0x0C050478u); PR = R32(r15); r15 += 4; UPD(0x0C05047Au, 2);  /* 0C050478 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05047Cu, 1);  /* 0C05047A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05047Eu, 1);  /* 0C05047C mov.l @Rm+,Rn */
	IF(0x0C05047Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05047E rts */
}

/* FUN_0c050560 */
void f_0C050560(sh3_t *c)
{
	LOCALS;
L_0C050560: BLKS(0x0C050560u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C050562u, 1);  /* 0C050560 mov.l Rm,@-Rn */
	r4 = 0x5u;  /* 0C050562 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C050566u, 2);  /* 0C050564 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C050568u, 1);  /* 0C050566 mov.l Rm,@-Rn */
	r0 = 0xC04A1A8u; UPD(0x0C05056Au, 1);  /* 0C050568 mov.l @(disp,pc),Rn */
	IF(0x0C05056Au); r15 -= 4; W32(r15, PR); UPD(0x0C05056Cu, 1);  /* 0C05056A sts.l pr,@-Rn */
	r8 = 0xC21CA18u; UPD(0x0C05056Eu, 1);  /* 0C05056C mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C05056E mov Rm,Rn */
	IF(0x0C050570u); { u32 t_ = r0; PR = 0x0C050574u; r9 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04A1A8, 0x0C04A1A8u, 0x0C050574u); }  /* 0C050570 jsr @Rn */
L_0C050574: BLKS(0x0C050574u);
	W32(r8, r0); UPD(0x0C050576u, 1);  /* 0C050574 mov.l Rm,@Rn */
	r0 -= r9;  /* 0C050576 sub Rm,Rn */
	r15 = r14;  /* 0C050578 mov Rm,Rn */
	IF(0x0C05057Au); PR = R32(r15); r15 += 4; UPD(0x0C05057Cu, 3);  /* 0C05057A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05057Eu, 1);  /* 0C05057C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C050580u, 1);  /* 0C05057E mov.l @Rm+,Rn */
	IF(0x0C050580u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C050580 rts */
}

/* FUN_0c050590 */
void f_0C050590(sh3_t *c)
{
	LOCALS;
L_0C050590: BLKS(0x0C050590u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C050592u, 1);  /* 0C050590 mov.l Rm,@-Rn */
	r4 = 0x5u;  /* 0C050592 mov #imm,Rn */
	r0 = 0xC04A1A8u; UPD(0x0C050596u, 2);  /* 0C050594 mov.l @(disp,pc),Rn */
	IF(0x0C050596u); r15 -= 4; W32(r15, PR); UPD(0x0C050598u, 1);  /* 0C050596 sts.l pr,@-Rn */
	IF(0x0C050598u); { u32 t_ = r0; PR = 0x0C05059Cu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04A1A8, 0x0C04A1A8u, 0x0C05059Cu); }  /* 0C050598 jsr @Rn */
L_0C05059C: BLKS(0x0C05059Cu);
	r3 = 0xC3929C0u; UPD(0x0C05059Eu, 1);  /* 0C05059C mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C0505A0u, 1);  /* 0C05059E mov.l @Rm,Rn */
	r0 -= r2;  /* 0C0505A0 sub Rm,Rn */
	r15 = r14;  /* 0C0505A2 mov Rm,Rn */
	IF(0x0C0505A4u); PR = R32(r15); r15 += 4; UPD(0x0C0505A6u, 3);  /* 0C0505A4 lds.l @Rn+,pr */
	IF(0x0C0505A6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0505A6 rts */
}

/* FUN_0c0505f0 */
void f_0C0505F0(sh3_t *c)
{
	LOCALS;
L_0C0505F0: BLKS(0x0C0505F0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0505F2u, 1);  /* 0C0505F0 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C0505F2 mov #imm,Rn */
	r0 = 0xC21E108u; UPD(0x0C0505F6u, 2);  /* 0C0505F4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0505F6 mov Rm,Rn */
	r7 = 0x0u;  /* 0C0505F8 mov #imm,Rn */
	r3 = 0x1Fu;  /* 0C0505FA mov #imm,Rn */
	r6 = 0x0u;  /* 0C0505FC mov #imm,Rn */
	r4 = 0x28u;  /* 0C0505FE mov #imm,Rn */
	UPD(0x0C050600u, 5);
L_0C050600: BLKS(0x0C050600u);
	r2 = r6;  /* 0C050600 mov Rm,Rn */
	IF(0x0C050602u); r2 <<= 2;  /* 0C050602 shll2 Rn */
	r1 = 0x0u;  /* 0C050604 mov #imm,Rn */
	r2 += r0;  /* 0C050606 add Rm,Rn */
	UPD(0x0C050608u, 4);
L_0C050608: BLKS(0x0C050608u);
	W32(r2, r7); UPD(0x0C05060Au, 1);  /* 0C050608 mov.l Rm,@Rn */
	r1 += 0x1u;  /* 0C05060A add #imm,Rn */
	r1 = (u32)(s32)(s8)r1;  /* 0C05060C exts.b Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C05060E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C050608u, 6); goto L_0C050608; } goto L_0C050614; }  /* 0C050610 bf/s */
L_0C050614: BLKS(0x0C050614u);
	r2 = r5;  /* 0C050614 mov Rm,Rn */
	r2 += 0x1u;  /* 0C050616 add #imm,Rn */
	r5 = (u32)(s32)(s8)r2;  /* 0C050618 exts.b Rm,Rn */
	T = (s32)r5 > (s32)r4;  /* 0C05061A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += 0x20u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C050600u, 8); goto L_0C050600; } goto L_0C050620; }  /* 0C05061C bf/s */
L_0C050620: BLKS(0x0C050620u);
	r5 = 0xC21F7FCu; UPD(0x0C050622u, 2);  /* 0C050620 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C050622 mov #imm,Rn */
	r3 = 0xC21F5D4u; UPD(0x0C050626u, 2);  /* 0C050624 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C050626 mov #imm,Rn */
	r1 = 0x11000000u; UPD(0x0C05062Au, 2);  /* 0C050628 mov.l @(disp,pc),Rn */
	r0 = 0xC392E08u; UPD(0x0C05062Cu, 1);  /* 0C05062A mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C05062Eu, 1);  /* 0C05062C mov.l Rm,@Rn */
	W32(r3, r4); UPD(0x0C050630u, 1);  /* 0C05062E mov.l Rm,@Rn */
	W32(r0, r1); UPD(0x0C050632u, 1);  /* 0C050630 mov.l Rm,@Rn */
	r15 = r14;  /* 0C050632 mov Rm,Rn */
	IF(0x0C050634u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C050634 rts */
}

/* FUN_0c050650 */
void f_0C050650(sh3_t *c)
{
	LOCALS;
L_0C050650: BLKS(0x0C050650u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C050652u, 1);  /* 0C050650 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C050652 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C050656u, 2);  /* 0C050654 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C050658u, 1);  /* 0C050656 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05065Au, 1);  /* 0C050658 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05065Cu, 1);  /* 0C05065A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05065Eu, 1);  /* 0C05065C mov.l Rm,@-Rn */
	r0 = 0xC392AF4u; UPD(0x0C050660u, 1);  /* 0C05065E mov.l @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C050660 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C050664u, 2);  /* 0C050662 mov.l Rm,@-Rn */
	r3 = R32(r0); UPD(0x0C050666u, 1);  /* 0C050664 mov.l @Rm,Rn */
	r14 = r15;  /* 0C050666 mov Rm,Rn */
	r12 = 0x10000000u; UPD(0x0C05066Au, 2);  /* 0C050668 mov.l @(disp,pc),Rn */
	r11 = 0xC283644u; UPD(0x0C05066Cu, 1);  /* 0C05066A mov.l @(disp,pc),Rn */
	r10 = 0xC283CA8u; UPD(0x0C05066Eu, 1);  /* 0C05066C mov.l @(disp,pc),Rn */
	r9 = 0xF80008u; UPD(0x0C050670u, 1);  /* 0C05066E mov.l @(disp,pc),Rn */
	r8 = 0xC21CCF4u; UPD(0x0C050672u, 1);  /* 0C050670 mov.l @(disp,pc),Rn */
	r0 = 0x70007u; UPD(0x0C050674u, 1);  /* 0C050672 mov.l @(disp,pc),Rn */
L_0C050674: BLKS(0x0C050674u);
	r6 = 0x0u;  /* 0C050674 mov #imm,Rn */
	r7 = 0x0u;  /* 0C050676 mov #imm,Rn */
	UPD(0x0C050678u, 2);
L_0C050678: BLKS(0x0C050678u);
	W32(r3, r12); UPD(0x0C05067Au, 1);  /* 0C050678 mov.l Rm,@Rn */
	r6 += 0x1u;  /* 0C05067A add #imm,Rn */
	r2 = R32(r11); UPD(0x0C05067Eu, 2);  /* 0C05067C mov.l @Rm,Rn */
	r3 += 0x4u;  /* 0C05067E add #imm,Rn */
	r2 |= r9;  /* 0C050680 or Rm,Rn */
	W32(r3, r2); UPD(0x0C050684u, 3);  /* 0C050682 mov.l Rm,@Rn */
	r2 = R32(r8); UPD(0x0C050686u, 1);  /* 0C050684 mov.l @Rm,Rn */
	r3 += 0x4u;  /* 0C050686 add #imm,Rn */
	r1 = R32(r10); UPD(0x0C05068Au, 2);  /* 0C050688 mov.l @Rm,Rn */
	r2 += r5;  /* 0C05068A add Rm,Rn */
	r1 += r7;  /* 0C05068C add Rm,Rn */
	IF(0x0C05068Eu); r2 <<= 16;  /* 0C05068E shll16 Rn */
	r2 |= r1;  /* 0C050690 or Rm,Rn */
	W32(r3, r2); UPD(0x0C050694u, 5);  /* 0C050692 mov.l Rm,@Rn */
	r7 += 0x8u;  /* 0C050694 add #imm,Rn */
	r3 += 0x4u;  /* 0C050696 add #imm,Rn */
	W32(r3, r0); UPD(0x0C05069Au, 3);  /* 0C050698 mov.l Rm,@Rn */
	r2 = 0x1Du;  /* 0C05069A mov #imm,Rn */
	r3 += 0x4u;  /* 0C05069C add #imm,Rn */
	W32(r3, r4); UPD(0x0C0506A0u, 3);  /* 0C05069E mov.l Rm,@Rn */
	T = (s32)r6 > (s32)r2;  /* 0C0506A0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C050678u, 4); goto L_0C050678; } goto L_0C0506A6; }  /* 0C0506A2 bf/s */
L_0C0506A6: BLKS(0x0C0506A6u);
	r13 += 0x1u;  /* 0C0506A6 add #imm,Rn */
	r6 = 0x27u;  /* 0C0506A8 mov #imm,Rn */
	T = (s32)r13 > (s32)r6;  /* 0C0506AA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r5 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C050674u, 7); goto L_0C050674; } goto L_0C0506B0; }  /* 0C0506AC bf/s */
L_0C0506B0: BLKS(0x0C0506B0u);
	r0 = 0xC392AF4u; UPD(0x0C0506B2u, 2);  /* 0C0506B0 mov.l @(disp,pc),Rn */
	W32(r0, r3); UPD(0x0C0506B4u, 1);  /* 0C0506B2 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0506B4 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0506B8u, 2);  /* 0C0506B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0506BAu, 1);  /* 0C0506B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0506BCu, 1);  /* 0C0506BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0506BEu, 1);  /* 0C0506BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0506C0u, 1);  /* 0C0506BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0506C2u, 1);  /* 0C0506C0 mov.l @Rm+,Rn */
	IF(0x0C0506C2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0506C2 rts */
}

/* FUN_0c050840 */
void f_0C050840(sh3_t *c)
{
	LOCALS;
L_0C050840: BLKS(0x0C050840u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C050842u, 1);  /* 0C050840 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C050844u, 1);  /* 0C050842 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C050844 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C050848u, 2);  /* 0C050846 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05084Au, 1);  /* 0C050848 mov.l Rm,@-Rn */
	r11 = 0xC283C94u; UPD(0x0C05084Cu, 1);  /* 0C05084A mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05084Eu, 1);  /* 0C05084C mov.l Rm,@-Rn */
	W32(r11, r8); UPD(0x0C050850u, 1);  /* 0C05084E mov.l Rm,@Rn */
	IF(0x0C050850u); r15 -= 4; W32(r15, PR); UPD(0x0C050852u, 1);  /* 0C050850 sts.l pr,@-Rn */
	r8 = 0xC392AF4u; UPD(0x0C050854u, 1);  /* 0C050852 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C050854 mov Rm,Rn */
	r9 = 0xC392DD8u; UPD(0x0C050858u, 2);  /* 0C050856 mov.l @(disp,pc),Rn */
	r7 = R32(r8); UPD(0x0C05085Au, 1);  /* 0C050858 mov.l @Rm,Rn */
	r3 = R32(r9); UPD(0x0C05085Cu, 1);  /* 0C05085A mov.l @Rm,Rn */
	r0 = 0x66666667u; UPD(0x0C05085Eu, 1);  /* 0C05085C mov.l @(disp,pc),Rn */
	r7 -= r3;  /* 0C05085E sub Rm,Rn */
	{ s64 r_ = (s64)(s32)r7 * (s64)(s32)r0; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C050860 dmuls.l Rm,Rn */
	r5 = 0xC04FA00u; UPD(0x0C050864u, 4);  /* 0C050862 mov.l @(disp,pc),Rn */
	IF(0x0C050864u); r6 = MACH;  /* 0C050864 sts mach,Rn */
	IF(0x0C050866u); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C050866 shar Rn */
	IF(0x0C050868u); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C050868 shar Rn */
	IF(0x0C05086Au); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C05086A shar Rn */
	IF(0x0C05086Cu); T = r7 >> 31; r7 <<= 1;  /* 0C05086C shll Rn */
	{ u32 a_ = r7, t_ = a_ - r7, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r7 = r_; }  /* 0C05086E subc Rm,Rn */
	r10 = 0xC28672Cu; UPD(0x0C050872u, 7);  /* 0C050870 mov.l @(disp,pc),Rn */
	r6 -= r7;  /* 0C050872 sub Rm,Rn */
	IF(0x0C050874u); { u32 t_ = r5; PR = 0x0C050878u; W32(r10, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C04FA00, 0x0C04FA00u, 0x0C050878u); }  /* 0C050874 jsr @Rn */
L_0C050878: BLKS(0x0C050878u);
	r2 = 0xC04FE40u; UPD(0x0C05087Au, 1);  /* 0C050878 mov.l @(disp,pc),Rn */
	IF(0x0C05087Au); { u32 t_ = r2; PR = 0x0C05087Eu; IF(0x0C05087Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04FE40, 0x0C04FE40u, 0x0C05087Eu); }  /* 0C05087A jsr @Rn */
L_0C05087E: BLKS(0x0C05087Eu);
	r2 = R32(r8); UPD(0x0C050880u, 1);  /* 0C05087E mov.l @Rm,Rn */
	r4 = 0xF0000000u; UPD(0x0C050882u, 1);  /* 0C050880 mov.l @(disp,pc),Rn */
	r3 = R32(r9); UPD(0x0C050884u, 1);  /* 0C050882 mov.l @Rm,Rn */
	W32(r2, r4); UPD(0x0C050886u, 1);  /* 0C050884 mov.l Rm,@Rn */
	r0 = 0xC21CC2Cu; UPD(0x0C050888u, 1);  /* 0C050886 mov.l @(disp,pc),Rn */
	r2 -= r3;  /* 0C050888 sub Rm,Rn */
	W32(r0, r2); UPD(0x0C05088Cu, 2);  /* 0C05088A mov.l Rm,@Rn */
	r3 = 0xC27DDA4u; UPD(0x0C05088Eu, 1);  /* 0C05088C mov.l @(disp,pc),Rn */
	r10 = R32(r10); UPD(0x0C050890u, 1);  /* 0C05088E mov.l @Rm,Rn */
	r0 = R32(r3); UPD(0x0C050892u, 1);  /* 0C050890 mov.l @Rm,Rn */
	T = (s32)r10 > (s32)r0;  /* 0C050892 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C050898u, 4); goto L_0C050898; }  /* 0C050894 bf */
L_0C050896: BLKS(0x0C050896u);
	W32(r3, r10); UPD(0x0C050898u, 1);  /* 0C050896 mov.l Rm,@Rn */
L_0C050898: BLKS(0x0C050898u);
	r3 = 0xC392D58u; UPD(0x0C05089Au, 1);  /* 0C050898 mov.l @(disp,pc),Rn */
	r9 = R32(r3); UPD(0x0C05089Cu, 1);  /* 0C05089A mov.l @Rm,Rn */
	T = (s32)r2 > (s32)r9;  /* 0C05089C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0508A2u, 4); goto L_0C0508A2; }  /* 0C05089E bf */
L_0C0508A0: BLKS(0x0C0508A0u);
	W32(r3, r2); UPD(0x0C0508A2u, 1);  /* 0C0508A0 mov.l Rm,@Rn */
L_0C0508A2: BLKS(0x0C0508A2u);
	r10 = 0x19671010u; UPD(0x0C0508A4u, 1);  /* 0C0508A2 mov.l @(disp,pc),Rn */
	W32(r11, r10); UPD(0x0C0508A6u, 1);  /* 0C0508A4 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0508A6 mov Rm,Rn */
	IF(0x0C0508A8u); PR = R32(r15); r15 += 4; UPD(0x0C0508AAu, 2);  /* 0C0508A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0508ACu, 1);  /* 0C0508AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0508AEu, 1);  /* 0C0508AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0508B0u, 1);  /* 0C0508AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0508B2u, 1);  /* 0C0508B0 mov.l @Rm+,Rn */
	IF(0x0C0508B2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0508B2 rts */
}

/* FUN_0c0508f0 */
void f_0C0508F0(sh3_t *c)
{
	LOCALS;
L_0C0508F0: BLKS(0x0C0508F0u);
	r0 = 0x5u;  /* 0C0508F0 mov #imm,Rn */
	IF(0x0C0508F2u); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0508F2 shld Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0508F6u, 3);  /* 0C0508F4 mov.l Rm,@-Rn */
	r6 += r5;  /* 0C0508F6 add Rm,Rn */
	r0 = 0xC21E124u; UPD(0x0C0508FAu, 2);  /* 0C0508F8 mov.l @(disp,pc),Rn */
	IF(0x0C0508FAu); r6 <<= 2;  /* 0C0508FA shll2 Rn */
	r3 = 0xC160464u; UPD(0x0C0508FEu, 2);  /* 0C0508FC mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0508FE mov Rm,Rn */
	r2 = 0x7u;  /* 0C050900 mov #imm,Rn */
	r6 += r0;  /* 0C050902 add Rm,Rn */
	UPD(0x0C050904u, 3);
L_0C050904: BLKS(0x0C050904u);
	r0 = 0xFu;  /* 0C050904 mov #imm,Rn */
	r0 &= r4;  /* 0C050906 and Rm,Rn */
	IF(0x0C050908u); r0 <<= 2;  /* 0C050908 shll2 Rn */
	IF(0x0C05090Au); r5 = R32(r0 + r3); UPD(0x0C05090Cu, 4);  /* 0C05090A mov.l @(r0,Rm),Rn */
	IF(0x0C05090Cu); r4 >>= 2;  /* 0C05090C shlr2 Rn */
	W32(r6, r5); UPD(0x0C050910u, 2);  /* 0C05090E mov.l Rm,@Rn */
	r2 += 0xFFFFFFFFu;  /* 0C050910 add #imm,Rn */
	r6 += 0xFFFFFFFCu;  /* 0C050912 add #imm,Rn */
	IF(0x0C050914u); T = (s32)r2 >= 0;  /* 0C050914 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C050918u); r4 >>= 2; /* slot shlr2 Rn */ if (c_) { UPD(0x0C050904u, 6); goto L_0C050904; } goto L_0C05091A; }  /* 0C050916 bt/s */
L_0C05091A: BLKS(0x0C05091Au);
	r15 = r14;  /* 0C05091A mov Rm,Rn */
	IF(0x0C05091Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C05091C rts */
}


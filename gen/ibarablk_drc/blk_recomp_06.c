#include "recomp.h"
#include "blk_recomp_funcs.h"

/* FUN_0c06d3c0 */
void blk_f_0C06D3C0(sh3_t *c)
{
	LOCALS;
L_0C06D3C0: BLKS(0x0C06D3C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06D3C2u, 1);  /* 0C06D3C0 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C06D3C2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06D3C6u, 2);  /* 0C06D3C4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06D3C8u, 1);  /* 0C06D3C6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06D3CAu, 1);  /* 0C06D3C8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06D3CCu, 1);  /* 0C06D3CA mov.l Rm,@-Rn */
	r11 = 0x1Fu;  /* 0C06D3CC mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06D3D0u, 2);  /* 0C06D3CE mov.l Rm,@-Rn */
	r12 = 0x0u;  /* 0C06D3D0 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D3D4u, 2);  /* 0C06D3D2 mov.l Rm,@-Rn */
	r13 = 0x0u;  /* 0C06D3D4 mov #imm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C06D3D6 add #imm,Rn */
	r14 = r15;  /* 0C06D3D8 mov Rm,Rn */
	W32(r14, r0); UPD(0x0C06D3DCu, 4);  /* 0C06D3DA mov.l Rm,@Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C06D3DEu, 1);  /* 0C06D3DC mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r0); UPD(0x0C06D3E0u, 1);  /* 0C06D3DE mov.l Rm,@(disp,Rn) */
L_0C06D3E0: BLKS(0x0C06D3E0u);
	r2 = 0xC2A6D9Cu; UPD(0x0C06D3E2u, 1);  /* 0C06D3E0 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C06D3E2 mov #imm,Rn */
	r0 = R32(r14 + 0x8u); UPD(0x0C06D3E6u, 2);  /* 0C06D3E4 mov.l @(disp,Rm),Rn */
	r2 += r0;  /* 0C06D3E6 add Rm,Rn */
	UPD(0x0C06D3E8u, 1);
L_0C06D3E8: BLKS(0x0C06D3E8u);
	r2 += 0x2Eu;  /* 0C06D3E8 add #imm,Rn */
	W16(r2, r13); UPD(0x0C06D3ECu, 2);  /* 0C06D3EA mov.w Rm,@Rn */
	r3 = r6;  /* 0C06D3EC mov Rm,Rn */
	r2 += 0xFFFFFFD2u;  /* 0C06D3EE add #imm,Rn */
	W32(r2, r12); UPD(0x0C06D3F2u, 3);  /* 0C06D3F0 mov.l Rm,@Rn */
	r3 += 0x1u;  /* 0C06D3F2 add #imm,Rn */
	r6 = (u32)(s32)(s16)r3;  /* 0C06D3F4 exts.w Rm,Rn */
	T = (s32)r6 > (s32)r11;  /* 0C06D3F6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x34u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06D3E8u, 6); goto L_0C06D3E8; } goto L_0C06D3FC; }  /* 0C06D3F8 bf/s */
L_0C06D3FC: BLKS(0x0C06D3FCu);
	r10 = R32(r14 + 0x4u); UPD(0x0C06D3FEu, 2);  /* 0C06D3FC mov.l @(disp,Rm),Rn */
	r8 = 0x0u;  /* 0C06D3FE mov #imm,Rn */
	r9 = 0x0u;  /* 0C06D400 mov #imm,Rn */
	r0 = 0x0u;  /* 0C06D402 mov #imm,Rn */
	r4 = 0x0u;  /* 0C06D404 mov #imm,Rn */
	r5 = 0xFu;  /* 0C06D406 mov #imm,Rn */
	UPD(0x0C06D408u, 5);
L_0C06D408: BLKS(0x0C06D408u);
	r1 = 0xC2380D0u; UPD(0x0C06D40Au, 1);  /* 0C06D408 mov.l @(disp,pc),Rn */
	r2 = r10;  /* 0C06D40A mov Rm,Rn */
	r2 += r9;  /* 0C06D40C add Rm,Rn */
	r3 = r1;  /* 0C06D40E mov Rm,Rn */
	r7 = r2;  /* 0C06D410 mov Rm,Rn */
	r3 += 0x2Eu;  /* 0C06D412 add #imm,Rn */
	r6 = 0x0u;  /* 0C06D414 mov #imm,Rn */
	r7 += r1;  /* 0C06D416 add Rm,Rn */
	r3 += r2;  /* 0C06D418 add Rm,Rn */
	IF(0x0C06D41Au); ;  /* 0C06D41A nop */
	UPD(0x0C06D41Cu, 9);
L_0C06D41C: BLKS(0x0C06D41Cu);
	r2 = r6;  /* 0C06D41C mov Rm,Rn */
	W16(r3, r0); UPD(0x0C06D420u, 2);  /* 0C06D41E mov.w Rm,@Rn */
	r2 += 0x1u;  /* 0C06D420 add #imm,Rn */
	W32(r7, r4); UPD(0x0C06D424u, 2);  /* 0C06D422 mov.l Rm,@Rn */
	r6 = (u32)(s32)(s16)r2;  /* 0C06D424 exts.w Rm,Rn */
	r3 += 0x34u;  /* 0C06D426 add #imm,Rn */
	T = (s32)r6 > (s32)r5;  /* 0C06D428 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x34u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06D41Cu, 6); goto L_0C06D41C; } goto L_0C06D42E; }  /* 0C06D42A bf/s */
L_0C06D42E: BLKS(0x0C06D42Eu);
	r7 = r8;  /* 0C06D42E mov Rm,Rn */
	r7 += 0x1u;  /* 0C06D430 add #imm,Rn */
	r1 = 0x340u; UPD(0x0C06D434u, 4);  /* 0C06D432 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C06D434 exts.w Rm,Rn */
	r6 = 0x2u;  /* 0C06D436 mov #imm,Rn */
	T = (s32)r8 > (s32)r6;  /* 0C06D438 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += r1; /* slot add Rm,Rn */ if (c_) { UPD(0x0C06D408u, 6); goto L_0C06D408; } goto L_0C06D43E; }  /* 0C06D43A bf/s */
L_0C06D43E: BLKS(0x0C06D43Eu);
	r8 = R32(r14); UPD(0x0C06D440u, 2);  /* 0C06D43E mov.l @Rm,Rn */
	r4 = 0x1u;  /* 0C06D440 mov #imm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C06D444u, 2);  /* 0C06D442 mov.l @(disp,Rm),Rn */
	r8 += 0x1u;  /* 0C06D444 add #imm,Rn */
	r9 = R32(r14 + 0x8u); UPD(0x0C06D448u, 2);  /* 0C06D446 mov.l @(disp,Rm),Rn */
	r5 = (u32)(s32)(s16)r8;  /* 0C06D448 exts.w Rm,Rn */
	r3 = 0x9C0u; UPD(0x0C06D44Cu, 2);  /* 0C06D44A mov.w @(disp,pc),Rn */
	T = (s32)r5 > (s32)r4;  /* 0C06D44C cmp/gt Rm,Rn */
	r10 = 0x680u; UPD(0x0C06D450u, 2);  /* 0C06D44E mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C06D450 add Rm,Rn */
	r9 += r10;  /* 0C06D452 add Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C06D456u, 3);  /* 0C06D454 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r9); UPD(0x0C06D458u, 1);  /* 0C06D456 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r14, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06D3E0u, 3); goto L_0C06D3E0; } UPD(0x0C06D45Cu, 1); goto L_0C06D45C; }  /* 0C06D458 bf/s */
L_0C06D45C: BLKS(0x0C06D45Cu);
	r14 += 0xCu;  /* 0C06D45C add #imm,Rn */
	r15 = r14;  /* 0C06D45E mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06D462u, 3);  /* 0C06D460 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06D464u, 1);  /* 0C06D462 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06D466u, 1);  /* 0C06D464 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06D468u, 1);  /* 0C06D466 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06D46Au, 1);  /* 0C06D468 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06D46Cu, 1);  /* 0C06D46A mov.l @Rm+,Rn */
	IF(0x0C06D46Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06D46C rts */
}

/* FUN_0c06d480 */
void blk_f_0C06D480(sh3_t *c)
{
	LOCALS;
L_0C06D480: BLKS(0x0C06D480u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D482u, 1);  /* 0C06D480 mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C06D482 mov #imm,Rn */
	r0 = 0xC2974C8u; UPD(0x0C06D486u, 2);  /* 0C06D484 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06D486 mov Rm,Rn */
	r7 = 0x0u;  /* 0C06D488 mov #imm,Rn */
	r4 = 0x0u;  /* 0C06D48A mov #imm,Rn */
	r5 = 0x0u;  /* 0C06D48C mov #imm,Rn */
	r6 = 0x2u;  /* 0C06D48E mov #imm,Rn */
	UPD(0x0C06D490u, 5);
L_0C06D490: BLKS(0x0C06D490u);
	r2 = r7;  /* 0C06D490 mov Rm,Rn */
	r1 = 0x0u;  /* 0C06D492 mov #imm,Rn */
	r2 += r0;  /* 0C06D494 add Rm,Rn */
	UPD(0x0C06D496u, 3);
L_0C06D496: BLKS(0x0C06D496u);
	r2 += 0x28u;  /* 0C06D496 add #imm,Rn */
	W16(r2, r4); UPD(0x0C06D49Au, 2);  /* 0C06D498 mov.w Rm,@Rn */
	r1 += 0x1u;  /* 0C06D49A add #imm,Rn */
	r2 += 0xFFFFFFD8u;  /* 0C06D49C add #imm,Rn */
	W32(r2, r5); UPD(0x0C06D4A0u, 3);  /* 0C06D49E mov.l Rm,@Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C06D4A0 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r6;  /* 0C06D4A2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x30u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06D496u, 5); goto L_0C06D496; } goto L_0C06D4A8; }  /* 0C06D4A4 bf/s */
L_0C06D4A8: BLKS(0x0C06D4A8u);
	r1 = r3;  /* 0C06D4A8 mov Rm,Rn */
	r3 = 0x90u; UPD(0x0C06D4ACu, 3);  /* 0C06D4AA mov.w @(disp,pc),Rn */
	r1 += 0x1u;  /* 0C06D4AC add #imm,Rn */
	r7 += r3;  /* 0C06D4AE add Rm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C06D4B0 exts.w Rm,Rn */
	r2 = 0x1u;  /* 0C06D4B2 mov #imm,Rn */
	T = (s32)r3 > (s32)r2;  /* 0C06D4B4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06D490u, 8); goto L_0C06D490; }  /* 0C06D4B6 bf */
L_0C06D4B8: BLKS(0x0C06D4B8u);
	r15 = r14;  /* 0C06D4B8 mov Rm,Rn */
	IF(0x0C06D4BAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06D4BA rts */
}

/* FUN_0c06d4d0 */
void blk_f_0C06D4D0(sh3_t *c)
{
	LOCALS;
L_0C06D4D0: BLKS(0x0C06D4D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D4D2u, 1);  /* 0C06D4D0 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C06D4D2 mov #imm,Rn */
	r0 = 0xC229004u; UPD(0x0C06D4D6u, 2);  /* 0C06D4D4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06D4D6 mov Rm,Rn */
	r4 = 0x0u;  /* 0C06D4D8 mov #imm,Rn */
	r6 = 0x0u;  /* 0C06D4DA mov #imm,Rn */
	r7 = 0x0u;  /* 0C06D4DC mov #imm,Rn */
	r3 = 0x7Fu;  /* 0C06D4DE mov #imm,Rn */
	UPD(0x0C06D4E0u, 5);
L_0C06D4E0: BLKS(0x0C06D4E0u);
	r2 = r4;  /* 0C06D4E0 mov Rm,Rn */
	r1 = 0x0u;  /* 0C06D4E2 mov #imm,Rn */
	r2 += r0;  /* 0C06D4E4 add Rm,Rn */
	IF(0x0C06D4E6u); ;  /* 0C06D4E6 nop */
	UPD(0x0C06D4E8u, 4);
L_0C06D4E8: BLKS(0x0C06D4E8u);
	r2 += 0x46u;  /* 0C06D4E8 add #imm,Rn */
	W16(r2, r6); UPD(0x0C06D4ECu, 2);  /* 0C06D4EA mov.w Rm,@Rn */
	r1 += 0x1u;  /* 0C06D4EC add #imm,Rn */
	r2 += 0xFFFFFFBAu;  /* 0C06D4EE add #imm,Rn */
	W32(r2, r7); UPD(0x0C06D4F2u, 3);  /* 0C06D4F0 mov.l Rm,@Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C06D4F2 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C06D4F4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x50u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06D4E8u, 5); goto L_0C06D4E8; } goto L_0C06D4FA; }  /* 0C06D4F6 bf/s */
L_0C06D4FA: BLKS(0x0C06D4FAu);
	r1 = r5;  /* 0C06D4FA mov Rm,Rn */
	r5 = 0x2800u; UPD(0x0C06D4FEu, 3);  /* 0C06D4FC mov.w @(disp,pc),Rn */
	r1 += 0x1u;  /* 0C06D4FE add #imm,Rn */
	r4 += r5;  /* 0C06D500 add Rm,Rn */
	r5 = (u32)(s32)(s16)r1;  /* 0C06D502 exts.w Rm,Rn */
	r2 = 0x1u;  /* 0C06D504 mov #imm,Rn */
	T = (s32)r5 > (s32)r2;  /* 0C06D506 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06D4E0u, 8); goto L_0C06D4E0; }  /* 0C06D508 bf */
L_0C06D50A: BLKS(0x0C06D50Au);
	r15 = r14;  /* 0C06D50A mov Rm,Rn */
	IF(0x0C06D50Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06D50C rts */
}

/* FUN_0c06d520 */
void blk_f_0C06D520(sh3_t *c)
{
	LOCALS;
L_0C06D520: BLKS(0x0C06D520u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D522u, 1);  /* 0C06D520 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C06D522 mov #imm,Rn */
	r7 = 0xB4u; UPD(0x0C06D526u, 2);  /* 0C06D524 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C06D526 mov Rm,Rn */
	r6 = 0xC286616u; UPD(0x0C06D52Au, 2);  /* 0C06D528 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C06D52A mov #imm,Rn */
	r3 = 0xC286578u; UPD(0x0C06D52Eu, 2);  /* 0C06D52C mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C06D52E mov #imm,Rn */
	r2 = 0xC286613u; UPD(0x0C06D532u, 2);  /* 0C06D530 mov.l @(disp,pc),Rn */
	IF(0x0C06D532u); ;  /* 0C06D532 nop */
	UPD(0x0C06D534u, 1);
L_0C06D534: BLKS(0x0C06D534u);
	r1 = r5;  /* 0C06D534 mov Rm,Rn */
	r1 += 0x1u;  /* 0C06D536 add #imm,Rn */
	r5 = (u32)(s32)(s16)r1;  /* 0C06D538 exts.w Rm,Rn */
	W8(r2, r4); UPD(0x0C06D53Cu, 4);  /* 0C06D53A mov.b Rm,@Rn */
	W8(r6, r4); UPD(0x0C06D53Eu, 1);  /* 0C06D53C mov.b Rm,@Rn */
	r2 += r7;  /* 0C06D53E add Rm,Rn */
	W32(r3, r0); UPD(0x0C06D542u, 2);  /* 0C06D540 mov.l Rm,@Rn */
	r6 += r7;  /* 0C06D542 add Rm,Rn */
	r1 = 0xBFu; UPD(0x0C06D546u, 2);  /* 0C06D544 mov.w @(disp,pc),Rn */
	T = (s32)r5 > (s32)r1;  /* 0C06D546 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += r7; /* slot add Rm,Rn */ if (c_) { UPD(0x0C06D534u, 4); goto L_0C06D534; } goto L_0C06D54C; }  /* 0C06D548 bf/s */
L_0C06D54C: BLKS(0x0C06D54Cu);
	r15 = r14;  /* 0C06D54C mov Rm,Rn */
	IF(0x0C06D54Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C06D54E rts */
}

/* FUN_0c06d570 */
void blk_f_0C06D570(sh3_t *c)
{
	LOCALS;
L_0C06D570: BLKS(0x0C06D570u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D572u, 1);  /* 0C06D570 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C06D572 mov #imm,Rn */
	r3 = 0xFFu; UPD(0x0C06D576u, 2);  /* 0C06D574 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C06D576 mov Rm,Rn */
	r2 = 0xC297B40u; UPD(0x0C06D57Au, 2);  /* 0C06D578 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C06D57A mov #imm,Rn */
	UPD(0x0C06D57Cu, 1);
L_0C06D57C: BLKS(0x0C06D57Cu);
	W32(r2, r7); UPD(0x0C06D57Eu, 1);  /* 0C06D57C mov.l Rm,@Rn */
	r1 += 0x1u;  /* 0C06D57E add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C06D580 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C06D582 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06D57Cu, 6); goto L_0C06D57C; } goto L_0C06D588; }  /* 0C06D584 bf/s */
L_0C06D588: BLKS(0x0C06D588u);
	r15 = r14;  /* 0C06D588 mov Rm,Rn */
	IF(0x0C06D58Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C06D58A rts */
}

/* FUN_0c06d5a0 */
void blk_f_0C06D5A0(sh3_t *c)
{
	LOCALS;
L_0C06D5A0: BLKS(0x0C06D5A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06D5A2u, 1);  /* 0C06D5A0 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C06D5A2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06D5A6u, 2);  /* 0C06D5A4 mov.l Rm,@-Rn */
	r2 = 0x3u;  /* 0C06D5A6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06D5AAu, 2);  /* 0C06D5A8 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06D5ACu, 1);  /* 0C06D5AA mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06D5AEu, 1);  /* 0C06D5AC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06D5B0u, 1);  /* 0C06D5AE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D5B2u, 1);  /* 0C06D5B0 mov.l Rm,@-Rn */
	r7 = 0xC28ED84u; UPD(0x0C06D5B4u, 1);  /* 0C06D5B2 mov.l @(disp,pc),Rn */
	IF(0x0C06D5B4u); r15 -= 4; W32(r15, PR); UPD(0x0C06D5B6u, 1);  /* 0C06D5B4 sts.l pr,@-Rn */
	r3 = 0xC174104u; UPD(0x0C06D5B8u, 1);  /* 0C06D5B6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06D5B8 mov Rm,Rn */
	UPD(0x0C06D5BAu, 1);
L_0C06D5BA: BLKS(0x0C06D5BAu);
	IF(0x0C06D5BAu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06D5BCu, 1);  /* 0C06D5BA mov.b @(r0,Rm),Rn */
	IF(0x0C06D5BCu); W8(r0 + r7, r4); UPD(0x0C06D5BEu, 1);  /* 0C06D5BC mov.b Rm,@(r0,Rn) */
	r4 = r0;  /* 0C06D5BE mov Rm,Rn */
	r4 += 0x1u;  /* 0C06D5C0 add #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C06D5C2 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C06D5C4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06D5BAu, 7); goto L_0C06D5BA; }  /* 0C06D5C6 bf */
L_0C06D5C8: BLKS(0x0C06D5C8u);
	r11 = 0xC297490u; UPD(0x0C06D5CAu, 1);  /* 0C06D5C8 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C06D5CCu, 1);  /* 0C06D5CA mov.b @Rm,Rn */
	r2 = r10 & 0xFF;  /* 0C06D5CC extu.b Rm,Rn */
	r10 = 0x16Cu; UPD(0x0C06D5D0u, 2);  /* 0C06D5CE mov.w @(disp,pc),Rn */
	IF(0x0C06D5D0u); MACL = r2 * r10;  /* 0C06D5D0 mul.l Rm,Rn */
	r12 = 0xC2ABAACu; UPD(0x0C06D5D4u, 3);  /* 0C06D5D2 mov.l @(disp,pc),Rn */
	IF(0x0C06D5D4u); r5 = MACL;  /* 0C06D5D4 sts macl,Rn */
	r5 += r12;  /* 0C06D5D6 add Rm,Rn */
	r5 += 0xBu;  /* 0C06D5D8 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C06D5DCu, 4);  /* 0C06D5DA mov.b @Rm,Rn */
	r9 = 0xC28ED84u; UPD(0x0C06D5DEu, 1);  /* 0C06D5DC mov.l @(disp,pc),Rn */
	r5 += 0x4u;  /* 0C06D5DE add #imm,Rn */
	W8(r9, r6); UPD(0x0C06D5E2u, 2);  /* 0C06D5E0 mov.b Rm,@Rn */
	r1 = r9;  /* 0C06D5E2 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C06D5E6u, 2);  /* 0C06D5E4 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C06D5E6 add #imm,Rn */
	W8(r1, r3); UPD(0x0C06D5EAu, 2);  /* 0C06D5E8 mov.b Rm,@Rn */
	r5 += 0x4u;  /* 0C06D5EA add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C06D5EEu, 2);  /* 0C06D5EC mov.b @Rm,Rn */
	r4 = r9;  /* 0C06D5EE mov Rm,Rn */
	r4 += 0x2u;  /* 0C06D5F0 add #imm,Rn */
	r13 = 0xC0626E0u; UPD(0x0C06D5F4u, 3);  /* 0C06D5F2 mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C06D5F4 mov #imm,Rn */
	W8(r4, r0); UPD(0x0C06D5F8u, 2);  /* 0C06D5F6 mov.b Rm,@Rn */
	r4 = 0xC0C4FA8u; UPD(0x0C06D5FAu, 1);  /* 0C06D5F8 mov.l @(disp,pc),Rn */
	r7 = 0x40C04000u; UPD(0x0C06D5FCu, 1);  /* 0C06D5FA mov.l @(disp,pc),Rn */
	IF(0x0C06D5FCu); { u32 t_ = r13; PR = 0x0C06D600u; r6 = 0xBu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06D600u); }  /* 0C06D5FC jsr @Rn */
L_0C06D600: BLKS(0x0C06D600u);
	r4 = r9;  /* 0C06D600 mov Rm,Rn */
	r5 = 0x27u;  /* 0C06D602 mov #imm,Rn */
	r7 = 0xC040C000u; UPD(0x0C06D606u, 3);  /* 0C06D604 mov.l @(disp,pc),Rn */
	IF(0x0C06D606u); { u32 t_ = r13; PR = 0x0C06D60Au; r6 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06D60Au); }  /* 0C06D606 jsr @Rn */
L_0C06D60A: BLKS(0x0C06D60Au);
	r9 = (u32)(s32)(s8)R8(r11); UPD(0x0C06D60Cu, 1);  /* 0C06D60A mov.b @Rm,Rn */
	r8 = r9 & 0xFF;  /* 0C06D60C extu.b Rm,Rn */
	IF(0x0C06D60Eu); MACL = r8 * r10;  /* 0C06D60E mul.l Rm,Rn */
	r13 = 0xC2460A8u; UPD(0x0C06D612u, 4);  /* 0C06D610 mov.l @(disp,pc),Rn */
	IF(0x0C06D612u); r6 = MACL;  /* 0C06D612 sts macl,Rn */
	r6 += r12;  /* 0C06D614 add Rm,Rn */
	r7 = R32(r6); UPD(0x0C06D618u, 3);  /* 0C06D616 mov.l @Rm,Rn */
	W32(r13, r7); UPD(0x0C06D61Au, 1);  /* 0C06D618 mov.l Rm,@Rn */
	r6 += 0x18u;  /* 0C06D61A add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r6); UPD(0x0C06D61Eu, 2);  /* 0C06D61C mov.b @Rm,Rn */
	r5 = 0xC1740FCu; UPD(0x0C06D620u, 1);  /* 0C06D61E mov.l @(disp,pc),Rn */
	r0 = r1 & 0xFF;  /* 0C06D620 extu.b Rm,Rn */
	IF(0x0C06D622u); r0 <<= 2;  /* 0C06D622 shll2 Rn */
	IF(0x0C06D624u); r3 = R32(r0 + r5); UPD(0x0C06D626u, 3);  /* 0C06D624 mov.l @(r0,Rm),Rn */
	r2 = 0xC22E015u; UPD(0x0C06D628u, 1);  /* 0C06D626 mov.l @(disp,pc),Rn */
	r11 = 0xC2B07B8u; UPD(0x0C06D62Au, 1);  /* 0C06D628 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06D62Cu, 1);  /* 0C06D62A mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06D62C tst Rm,Rn */
	{ u32 c_ = T; W32(r11, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06D650u, 4); goto L_0C06D650; } UPD(0x0C06D632u, 1); goto L_0C06D632; }  /* 0C06D62E bt/s */
L_0C06D632: BLKS(0x0C06D632u);
	r15 = r14;  /* 0C06D632 mov Rm,Rn */
	IF(0x0C06D634u); PR = R32(r15); r15 += 4; UPD(0x0C06D636u, 2);  /* 0C06D634 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06D638u, 1);  /* 0C06D636 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06D63Au, 1);  /* 0C06D638 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06D63Cu, 1);  /* 0C06D63A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06D63Eu, 1);  /* 0C06D63C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06D640u, 1);  /* 0C06D63E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06D642u, 1);  /* 0C06D640 mov.l @Rm+,Rn */
	IF(0x0C06D642u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06D642 rts */
L_0C06D650: BLKS(0x0C06D650u);
	r5 = 0xC29D454u; UPD(0x0C06D652u, 1);  /* 0C06D650 mov.l @(disp,pc),Rn */
	r12 = 0xC06E0E0u; UPD(0x0C06D654u, 1);  /* 0C06D652 mov.l @(disp,pc),Rn */
	r9 = 0xC1740C7u; UPD(0x0C06D656u, 1);  /* 0C06D654 mov.l @(disp,pc),Rn */
	r4 = R32(r5 + 0x14u); UPD(0x0C06D658u, 1);  /* 0C06D656 mov.l @(disp,Rm),Rn */
	r8 = 0x80808000u; UPD(0x0C06D65Au, 1);  /* 0C06D658 mov.l @(disp,pc),Rn */
	r5 = 0x26u;  /* 0C06D65A mov #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C06D65Eu, 2);  /* 0C06D65C mov.b @Rm,Rn */
	IF(0x0C06D65Eu); { u32 t_ = r12; PR = 0x0C06D662u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06E0E0, 0x0C06E0E0u, 0x0C06D662u); }  /* 0C06D65E jsr @Rn */
L_0C06D662: BLKS(0x0C06D662u);
	r7 = 0xC29D6D4u; UPD(0x0C06D664u, 1);  /* 0C06D662 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFFDu;  /* 0C06D664 add #imm,Rn */
	r9 += 0x7u;  /* 0C06D666 add #imm,Rn */
	r4 = R32(r7 + 0x34u); UPD(0x0C06D66Au, 3);  /* 0C06D668 mov.l @(disp,Rm),Rn */
	r5 = 0x26u;  /* 0C06D66A mov #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C06D66Eu, 2);  /* 0C06D66C mov.b @Rm,Rn */
	r7 = r8;  /* 0C06D66E mov Rm,Rn */
	IF(0x0C06D670u); { u32 t_ = r12; PR = 0x0C06D674u; r9 += 0x4u; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C06E0E0, 0x0C06E0E0u, 0x0C06D674u); }  /* 0C06D670 jsr @Rn */
L_0C06D674: BLKS(0x0C06D674u);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C06D676u, 1);  /* 0C06D674 mov.b @Rm,Rn */
	r5 = 0x26u;  /* 0C06D676 mov #imm,Rn */
	r4 = R32(r13); UPD(0x0C06D67Au, 2);  /* 0C06D678 mov.l @Rm,Rn */
	r0 = r12;  /* 0C06D67A mov Rm,Rn */
	r7 = R32(r11); UPD(0x0C06D67Eu, 2);  /* 0C06D67C mov.l @Rm,Rn */
	r15 = r14;  /* 0C06D67E mov Rm,Rn */
	IF(0x0C06D680u); PR = R32(r15); r15 += 4; UPD(0x0C06D682u, 2);  /* 0C06D680 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06D684u, 1);  /* 0C06D682 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06D686u, 1);  /* 0C06D684 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06D688u, 1);  /* 0C06D686 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06D68Au, 1);  /* 0C06D688 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06D68Cu, 1);  /* 0C06D68A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06D68Eu, 1);  /* 0C06D68C mov.l @Rm+,Rn */
	IF(0x0C06D68Eu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06E0E0u: TAIL(blk_f_0C06E0E0); default: JUMPD(tv_); } }  /* 0C06D68E jmp @Rn */
}

/* FUN_0c06d6e0 */
void blk_f_0C06D6E0(sh3_t *c)
{
	LOCALS;
L_0C06D6E0: BLKS(0x0C06D6E0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D6E2u, 1);  /* 0C06D6E0 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C06D6E2 mov #imm,Rn */
	r0 = 0xC3C4164u; UPD(0x0C06D6E6u, 2);  /* 0C06D6E4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06D6E6 mov Rm,Rn */
	W8(r0, r4); UPD(0x0C06D6EAu, 2);  /* 0C06D6E8 mov.b Rm,@Rn */
	r6 = 0xFFFFFFu; UPD(0x0C06D6ECu, 1);  /* 0C06D6EA mov.l @(disp,pc),Rn */
	r7 = 0xC3CA6FCu; UPD(0x0C06D6EEu, 1);  /* 0C06D6EC mov.l @(disp,pc),Rn */
	r3 = 0xC237C0Cu; UPD(0x0C06D6F0u, 1);  /* 0C06D6EE mov.l @(disp,pc),Rn */
	r5 = 0xC297A3Cu; UPD(0x0C06D6F2u, 1);  /* 0C06D6F0 mov.l @(disp,pc),Rn */
	r2 = 0xC3C86D4u; UPD(0x0C06D6F4u, 1);  /* 0C06D6F2 mov.l @(disp,pc),Rn */
	r0 = 0xC3C4165u; UPD(0x0C06D6F6u, 1);  /* 0C06D6F4 mov.l @(disp,pc),Rn */
	W32(r7, r4); UPD(0x0C06D6F8u, 1);  /* 0C06D6F6 mov.l Rm,@Rn */
	W32(r3, r6); UPD(0x0C06D6FAu, 1);  /* 0C06D6F8 mov.l Rm,@Rn */
	W32(r5, r6); UPD(0x0C06D6FCu, 1);  /* 0C06D6FA mov.l Rm,@Rn */
	W32(r2, r4); UPD(0x0C06D6FEu, 1);  /* 0C06D6FC mov.l Rm,@Rn */
	W8(r0, r4); UPD(0x0C06D700u, 1);  /* 0C06D6FE mov.b Rm,@Rn */
	r15 = r14;  /* 0C06D700 mov Rm,Rn */
	IF(0x0C06D702u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06D702 rts */
}

/* FUN_0c06d730 */
void blk_f_0C06D730(sh3_t *c)
{
	LOCALS;
L_0C06D730: BLKS(0x0C06D730u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06D732u, 1);  /* 0C06D730 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06D734u, 1);  /* 0C06D732 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06D736u, 1);  /* 0C06D734 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06D738u, 1);  /* 0C06D736 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06D73Au, 1);  /* 0C06D738 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D73Cu, 1);  /* 0C06D73A mov.l Rm,@-Rn */
	r8 = 0xC061FA0u; UPD(0x0C06D73Eu, 1);  /* 0C06D73C mov.l @(disp,pc),Rn */
	IF(0x0C06D73Eu); r15 -= 4; W32(r15, PR); UPD(0x0C06D740u, 1);  /* 0C06D73E sts.l pr,@-Rn */
	IF(0x0C06D740u); { u32 t_ = r8; PR = 0x0C06D744u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C061FA0, 0x0C061FA0u, 0x0C06D744u); }  /* 0C06D740 jsr @Rn */
L_0C06D744: BLKS(0x0C06D744u);
	r2 = 0xC238029u; UPD(0x0C06D746u, 1);  /* 0C06D744 mov.l @(disp,pc),Rn */
	r10 = r0;  /* 0C06D746 mov Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06D74Au, 2);  /* 0C06D748 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06D74A tst Rm,Rn */
	if (T) { UPD(0x0C06D7E0u, 4); goto L_0C06D7E0; }  /* 0C06D74C bt */
L_0C06D74E: BLKS(0x0C06D74Eu);
	r8 = 0x0u;  /* 0C06D74E mov #imm,Rn */
	r12 = 0xC174194u; UPD(0x0C06D752u, 2);  /* 0C06D750 mov.l @(disp,pc),Rn */
	r11 = 0xC0624D0u; UPD(0x0C06D754u, 1);  /* 0C06D752 mov.l @(disp,pc),Rn */
L_0C06D754: BLKS(0x0C06D754u);
	r4 = 0xC3C4168u; UPD(0x0C06D756u, 1);  /* 0C06D754 mov.l @(disp,pc),Rn */
	r9 = 0xFFFFFFFFu;  /* 0C06D756 mov #imm,Rn */
	r3 = R32(r4); UPD(0x0C06D75Au, 2);  /* 0C06D758 mov.l @Rm,Rn */
	T = (s32)r8 > (s32)r3;  /* 0C06D75A cmp/gt Rm,Rn */
	IF(0x0C06D75Cu); r0 = T;  /* 0C06D75C movt Rn */
	T = (r0 & r0) == 0;  /* 0C06D75E tst Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C06D760 negc Rm,Rn */
	IF(0x0C06D762u); r0 <<= 2;  /* 0C06D762 shll2 Rn */
	T = (s32)r8 > (s32)r10;  /* 0C06D764 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C06D768u); r4 = R32(r0 + r12); /* slot mov.l @(r0,Rm),Rn */ if (c_) { UPD(0x0C06D76Cu, 9); goto L_0C06D76C; } UPD(0x0C06D76Au, 1); goto L_0C06D76A; }  /* 0C06D766 bf/s */
L_0C06D76A: BLKS(0x0C06D76Au);
	r4 += 0x4u;  /* 0C06D76A add #imm,Rn */
	UPD(0x0C06D76Cu, 1);
L_0C06D76C: BLKS(0x0C06D76Cu);
	r8 += 0x4u;  /* 0C06D76C add #imm,Rn */
	r6 = r8;  /* 0C06D76E mov Rm,Rn */
	r5 = 0x0u;  /* 0C06D770 mov #imm,Rn */
	IF(0x0C06D772u); { u32 t_ = r11; PR = 0x0C06D776u; r4 = R32(r4); /* slot mov.l @Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C06D776u); }  /* 0C06D772 jsr @Rn */
L_0C06D776: BLKS(0x0C06D776u);
	r6 = r8;  /* 0C06D776 mov Rm,Rn */
	r6 += 0xFFFFFFFDu;  /* 0C06D778 add #imm,Rn */
	r8 = (u32)(s32)(s16)r6;  /* 0C06D77A exts.w Rm,Rn */
	r5 = 0x18u;  /* 0C06D77C mov #imm,Rn */
	T = (s32)r8 > (s32)r5;  /* 0C06D77E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06D754u, 8); goto L_0C06D754; }  /* 0C06D780 bf */
L_0C06D782: BLKS(0x0C06D782u);
	r10 = 0xC2B016Cu; UPD(0x0C06D784u, 1);  /* 0C06D782 mov.l @(disp,pc),Rn */
	r5 = 0xC22E04Cu; UPD(0x0C06D786u, 1);  /* 0C06D784 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C06D788u, 1);  /* 0C06D786 mov.w @Rm,Rn */
	r11 = 0x400u; UPD(0x0C06D78Au, 1);  /* 0C06D788 mov.w @(disp,pc),Rn */
	r6 = r7 & 0xFFFF;  /* 0C06D78A extu.w Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C06D78Eu, 2);  /* 0C06D78C mov.w @Rm,Rn */
	T = r6 == r11;  /* 0C06D78E cmp/eq Rm,Rn */
	r8 = 0xC2A6D4Cu; UPD(0x0C06D792u, 2);  /* 0C06D790 mov.l @(disp,pc),Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C06D792 negc Rm,Rn */
	r3 = r4 & 0xFFFF;  /* 0C06D794 extu.w Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r8); UPD(0x0C06D798u, 3);  /* 0C06D796 mov.w @Rm,Rn */
	T = r3 == r11;  /* 0C06D798 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C06D79A negc Rm,Rn */
	r12 = r2 & 0xFFFF;  /* 0C06D79C extu.w Rm,Rn */
	T = r12 == r11;  /* 0C06D79E cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r10 = r_; }  /* 0C06D7A0 negc Rm,Rn */
	r7 |= r0;  /* 0C06D7A2 or Rm,Rn */
	r7 |= r10;  /* 0C06D7A4 or Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C06D7A6 tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06D7D0u, 11); goto L_0C06D7D0; } goto L_0C06D7AC; }  /* 0C06D7A8 bt/s */
L_0C06D7AC: BLKS(0x0C06D7ACu);
	r4 = 0xC17419Cu; UPD(0x0C06D7AEu, 2);  /* 0C06D7AC mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C06D7AE mov #imm,Rn */
	r7 = 0xC0404000u; UPD(0x0C06D7B2u, 2);  /* 0C06D7B0 mov.l @(disp,pc),Rn */
	r6 = 0x3u;  /* 0C06D7B2 mov #imm,Rn */
	UPD(0x0C06D7B4u, 1);
L_0C06D7B4: BLKS(0x0C06D7B4u);
	r2 = 0xC0626E0u; UPD(0x0C06D7B6u, 1);  /* 0C06D7B4 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C06D7B6 mov Rm,Rn */
	IF(0x0C06D7B8u); PR = R32(r15); r15 += 4; UPD(0x0C06D7BAu, 2);  /* 0C06D7B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06D7BCu, 1);  /* 0C06D7BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06D7BEu, 1);  /* 0C06D7BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06D7C0u, 1);  /* 0C06D7BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06D7C2u, 1);  /* 0C06D7C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06D7C4u, 1);  /* 0C06D7C2 mov.l @Rm+,Rn */
	IF(0x0C06D7C4u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0626E0u: TAIL(blk_f_0C0626E0); default: JUMPD(tv_); } }  /* 0C06D7C4 jmp @Rn */
L_0C06D7D0: BLKS(0x0C06D7D0u);
	r4 = 0xC174180u; UPD(0x0C06D7D2u, 1);  /* 0C06D7D0 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C06D7D4u, 1);  /* 0C06D7D2 mov.l @(disp,pc),Rn */
	{ r6 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C06D7B4u, 3); goto L_0C06D7B4; }  /* 0C06D7D4 bra */
L_0C06D7E0: BLKS(0x0C06D7E0u);
	r15 = r14;  /* 0C06D7E0 mov Rm,Rn */
	IF(0x0C06D7E2u); PR = R32(r15); r15 += 4; UPD(0x0C06D7E4u, 2);  /* 0C06D7E2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06D7E6u, 1);  /* 0C06D7E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06D7E8u, 1);  /* 0C06D7E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06D7EAu, 1);  /* 0C06D7E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06D7ECu, 1);  /* 0C06D7EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06D7EEu, 1);  /* 0C06D7EC mov.l @Rm+,Rn */
	IF(0x0C06D7EEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06D7EE rts */
}

/* FUN_0c06d830 */
void blk_f_0C06D830(sh3_t *c)
{
	LOCALS;
L_0C06D830: BLKS(0x0C06D830u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06D832u, 1);  /* 0C06D830 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06D834u, 1);  /* 0C06D832 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D836u, 1);  /* 0C06D834 mov.l Rm,@-Rn */
	r2 = 0xC238029u; UPD(0x0C06D838u, 1);  /* 0C06D836 mov.l @(disp,pc),Rn */
	IF(0x0C06D838u); r15 -= 4; W32(r15, PR); UPD(0x0C06D83Au, 1);  /* 0C06D838 sts.l pr,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06D83Cu, 1);  /* 0C06D83A mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06D83C tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06D87Eu, 4); goto L_0C06D87E; } goto L_0C06D842; }  /* 0C06D83E bt/s */
L_0C06D842: BLKS(0x0C06D842u);
	r7 = 0xC2B039Cu; UPD(0x0C06D844u, 2);  /* 0C06D842 mov.l @(disp,pc),Rn */
	r4 = 0xFFFFFFFFu;  /* 0C06D844 mov #imm,Rn */
	r0 = R32(r7); UPD(0x0C06D848u, 2);  /* 0C06D846 mov.l @Rm,Rn */
	r6 = 0xC22E024u; UPD(0x0C06D84Au, 1);  /* 0C06D848 mov.l @(disp,pc),Rn */
	IF(0x0C06D84Au); r0 >>= 2;  /* 0C06D84A shlr2 Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C06D84Eu, 2);  /* 0C06D84C mov.b @Rm,Rn */
	IF(0x0C06D84Eu); T = r0 & 1; r0 >>= 1;  /* 0C06D84E shlr Rn */
	IF(0x0C06D850u); r0 >>= 2;  /* 0C06D850 shlr2 Rn */
	T = (r5 & r5) == 0;  /* 0C06D852 tst Rm,Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C06D854 negc Rm,Rn */
	r0 &= 0x1u;  /* 0C06D856 and #imm,r0 */
	r0 |= r3;  /* 0C06D858 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06D85A tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x27u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06D8C0u, 10); goto L_0C06D8C0; } goto L_0C06D860; }  /* 0C06D85C bt/s */
L_0C06D860: BLKS(0x0C06D860u);
	r8 = 0xC0626E0u; UPD(0x0C06D862u, 2);  /* 0C06D860 mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C06D862 mov #imm,Rn */
	r4 = 0xC28ED84u; UPD(0x0C06D866u, 2);  /* 0C06D864 mov.l @(disp,pc),Rn */
	r7 = 0xC040C000u; UPD(0x0C06D868u, 1);  /* 0C06D866 mov.l @(disp,pc),Rn */
	IF(0x0C06D868u); { u32 t_ = r8; PR = 0x0C06D86Cu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06D86Cu); }  /* 0C06D868 jsr @Rn */
L_0C06D86C: BLKS(0x0C06D86Cu);
	r2 = 0xC1740CFu; UPD(0x0C06D86Eu, 1);  /* 0C06D86C mov.l @(disp,pc),Rn */
	r5 = 0x26u;  /* 0C06D86E mov #imm,Rn */
	r9 = 0xC2460A8u; UPD(0x0C06D872u, 2);  /* 0C06D870 mov.l @(disp,pc),Rn */
	r8 = 0xC2B07B8u; UPD(0x0C06D874u, 1);  /* 0C06D872 mov.l @(disp,pc),Rn */
	r0 = 0xC06E0E0u; UPD(0x0C06D876u, 1);  /* 0C06D874 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C06D878u, 1);  /* 0C06D876 mov.b @Rm,Rn */
	r4 = R32(r9); UPD(0x0C06D87Au, 1);  /* 0C06D878 mov.l @Rm,Rn */
	IF(0x0C06D87Au); { u32 t_ = r0; PR = 0x0C06D87Eu; r7 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06E0E0, 0x0C06E0E0u, 0x0C06D87Eu); }  /* 0C06D87A jsr @Rn */
L_0C06D87E: BLKS(0x0C06D87Eu);
	r6 = 0xC238029u; UPD(0x0C06D880u, 1);  /* 0C06D87E mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r6); UPD(0x0C06D882u, 1);  /* 0C06D880 mov.b @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06D882 tst Rm,Rn */
	if (!T) { UPD(0x0C06D8B0u, 4); goto L_0C06D8B0; }  /* 0C06D884 bf */
L_0C06D886: BLKS(0x0C06D886u);
	r3 = 0xC239490u; UPD(0x0C06D888u, 1);  /* 0C06D886 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C06D88Au, 1);  /* 0C06D888 mov.b @Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C06D88A tst Rm,Rn */
	IF(0x0C06D88Cu); r0 = T;  /* 0C06D88C movt Rn */
	r2 = 0xC1741A0u; UPD(0x0C06D890u, 3);  /* 0C06D88E mov.l @(disp,pc),Rn */
	r0 ^= 0x1u;  /* 0C06D890 xor #imm,r0 */
	IF(0x0C06D892u); r0 <<= 2;  /* 0C06D892 shll2 Rn */
	IF(0x0C06D894u); r9 = R32(r0 + r2); UPD(0x0C06D896u, 3);  /* 0C06D894 mov.l @(r0,Rm),Rn */
	r0 = 0xC3C8470u; UPD(0x0C06D898u, 1);  /* 0C06D896 mov.l @(disp,pc),Rn */
	W32(r0, r9); UPD(0x0C06D89Au, 1);  /* 0C06D898 mov.l Rm,@Rn */
	r15 = r14;  /* 0C06D89A mov Rm,Rn */
	IF(0x0C06D89Cu); PR = R32(r15); r15 += 4; UPD(0x0C06D89Eu, 2);  /* 0C06D89C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06D8A0u, 1);  /* 0C06D89E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06D8A2u, 1);  /* 0C06D8A0 mov.l @Rm+,Rn */
	IF(0x0C06D8A2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06D8A2 rts */
L_0C06D8B0: BLKS(0x0C06D8B0u);
	r7 = 0xC06D730u; UPD(0x0C06D8B2u, 1);  /* 0C06D8B0 mov.l @(disp,pc),Rn */
	IF(0x0C06D8B2u); { u32 t_ = r7; PR = 0x0C06D8B6u; IF(0x0C06D8B4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D730, 0x0C06D730u, 0x0C06D8B6u); }  /* 0C06D8B2 jsr @Rn */
L_0C06D8B6: BLKS(0x0C06D8B6u);
	{ IF(0x0C06D8B8u); ; /* slot nop */ UPD(0x0C06D886u, 3); goto L_0C06D886; }  /* 0C06D8B6 bra */
L_0C06D8C0: BLKS(0x0C06D8C0u);
	r9 = 0xC0626E0u; UPD(0x0C06D8C2u, 1);  /* 0C06D8C0 mov.l @(disp,pc),Rn */
	r8 = 0xC0C04000u; UPD(0x0C06D8C4u, 1);  /* 0C06D8C2 mov.l @(disp,pc),Rn */
	r6 = 0xAu;  /* 0C06D8C4 mov #imm,Rn */
	r4 = 0xC174208u; UPD(0x0C06D8C8u, 2);  /* 0C06D8C6 mov.l @(disp,pc),Rn */
	IF(0x0C06D8C8u); { u32 t_ = r9; PR = 0x0C06D8CCu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06D8CCu); }  /* 0C06D8C8 jsr @Rn */
L_0C06D8CC: BLKS(0x0C06D8CCu);
	r5 = 0xC297A3Cu; UPD(0x0C06D8CEu, 1);  /* 0C06D8CC mov.l @(disp,pc),Rn */
	r6 = 0xCu;  /* 0C06D8CE mov #imm,Rn */
	r0 = 0xC062300u; UPD(0x0C06D8D2u, 2);  /* 0C06D8D0 mov.l @(disp,pc),Rn */
	r4 = R32(r5); UPD(0x0C06D8D4u, 1);  /* 0C06D8D2 mov.l @Rm,Rn */
	IF(0x0C06D8D4u); { u32 t_ = r0; PR = 0x0C06D8D8u; r5 = 0x27u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062300, 0x0C062300u, 0x0C06D8D8u); }  /* 0C06D8D4 jsr @Rn */
L_0C06D8D8: BLKS(0x0C06D8D8u);
	r3 = 0xC3C86D4u; UPD(0x0C06D8DAu, 1);  /* 0C06D8D8 mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C06D8DA mov #imm,Rn */
	r0 = 0xC062490u; UPD(0x0C06D8DEu, 2);  /* 0C06D8DC mov.l @(disp,pc),Rn */
	r6 = 0xBu;  /* 0C06D8DE mov #imm,Rn */
	IF(0x0C06D8E0u); { u32 t_ = r0; PR = 0x0C06D8E4u; r4 = R32(r3); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06D8E4u); }  /* 0C06D8E0 jsr @Rn */
L_0C06D8E4: BLKS(0x0C06D8E4u);
	r4 = 0xC17420Cu; UPD(0x0C06D8E6u, 1);  /* 0C06D8E4 mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C06D8E6 mov #imm,Rn */
	r6 = 0xDu;  /* 0C06D8E8 mov #imm,Rn */
	IF(0x0C06D8EAu); { u32 t_ = r9; PR = 0x0C06D8EEu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06D8EEu); }  /* 0C06D8EA jsr @Rn */
L_0C06D8EE: BLKS(0x0C06D8EEu);
	{ IF(0x0C06D8F0u); ; /* slot nop */ UPD(0x0C06D87Eu, 3); goto L_0C06D87E; }  /* 0C06D8EE bra */
}

/* FUN_0c06d950 */
void blk_f_0C06D950(sh3_t *c)
{
	LOCALS;
L_0C06D950: BLKS(0x0C06D950u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06D952u, 1);  /* 0C06D950 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06D954u, 1);  /* 0C06D952 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06D956u, 1);  /* 0C06D954 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06D958u, 1);  /* 0C06D956 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06D95Au, 1);  /* 0C06D958 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06D95Cu, 1);  /* 0C06D95A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D95Eu, 1);  /* 0C06D95C mov.l Rm,@-Rn */
	r2 = 0xC3C86ACu; UPD(0x0C06D960u, 1);  /* 0C06D95E mov.l @(disp,pc),Rn */
	IF(0x0C06D960u); r15 -= 4; W32(r15, PR); UPD(0x0C06D962u, 1);  /* 0C06D960 sts.l pr,@-Rn */
	r0 = R32(r2); UPD(0x0C06D964u, 1);  /* 0C06D962 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06D964 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06D96Eu, 4); goto L_0C06D96E; } goto L_0C06D96A; }  /* 0C06D966 bf/s */
L_0C06D96A: BLKS(0x0C06D96Au);
	{ r5 = 0x26u; /* slot mov #imm,Rn */ UPD(0x0C06DB50u, 4); goto L_0C06DB50; }  /* 0C06D96A bra */
L_0C06D96E: BLKS(0x0C06D96Eu);
	r8 = 0xC062000u; UPD(0x0C06D970u, 1);  /* 0C06D96E mov.l @(disp,pc),Rn */
	r13 = 0x40C04000u; UPD(0x0C06D972u, 1);  /* 0C06D970 mov.l @(disp,pc),Rn */
	IF(0x0C06D972u); { u32 t_ = r8; PR = 0x0C06D976u; r11 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C06D976u); }  /* 0C06D972 jsr @Rn */
L_0C06D976: BLKS(0x0C06D976u);
	r12 = 0x0u;  /* 0C06D976 mov #imm,Rn */
	UPD(0x0C06D978u, 1);
L_0C06D978: BLKS(0x0C06D978u);
	r3 = 0xC29D1D8u; UPD(0x0C06D97Au, 1);  /* 0C06D978 mov.l @(disp,pc),Rn */
	r3 += r12;  /* 0C06D97A add Rm,Rn */
	r0 = R32(r3); UPD(0x0C06D97Eu, 2);  /* 0C06D97C mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06D97E tst Rm,Rn */
	if (!T) { UPD(0x0C06DA28u, 4); goto L_0C06DA28; }  /* 0C06D980 bf */
L_0C06D982: BLKS(0x0C06D982u);
	r9 = 0xC297488u; UPD(0x0C06D984u, 1);  /* 0C06D982 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06D984 mov Rm,Rn */
	IF(0x0C06D986u); r8 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06D988u, 2);  /* 0C06D986 mov.b @(r0,Rm),Rn */
	r7 = 0xC3CA6F8u; UPD(0x0C06D98Au, 1);  /* 0C06D988 mov.l @(disp,pc),Rn */
	r0 = 0x28Au; UPD(0x0C06D98Cu, 1);  /* 0C06D98A mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C06D98Eu, 1);  /* 0C06D98C mov.b @Rm,Rn */
	IF(0x0C06D98Eu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06D990u, 1);  /* 0C06D98E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C06D990 extu.b Rm,Rn */
	r7 = r6 & 0xFF;  /* 0C06D992 extu.b Rm,Rn */
	T = r7 > r4;  /* 0C06D994 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r0 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06D99Eu, 6); goto L_0C06D99E; } goto L_0C06D99A; }  /* 0C06D996 bf/s */
L_0C06D99A: BLKS(0x0C06D99Au);
	{ IF(0x0C06D99Cu); ; /* slot nop */ UPD(0x0C06DAE0u, 4); goto L_0C06DAE0; }  /* 0C06D99A bra */
L_0C06D99E: BLKS(0x0C06D99Eu);
	IF(0x0C06D99Eu); r1 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C06D9A0u, 1);  /* 0C06D99E mov.w @(r0,Rm),Rn */
	r3 = 0x100u; UPD(0x0C06D9A2u, 1);  /* 0C06D9A0 mov.w @(disp,pc),Rn */
	r9 = 0xC3C8690u; UPD(0x0C06D9A4u, 1);  /* 0C06D9A2 mov.l @(disp,pc),Rn */
	T = (r1 & r3) == 0;  /* 0C06D9A4 tst Rm,Rn */
	{ u32 c_ = T; T = (r7 & r7) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C06D9E4u, 4); goto L_0C06D9E4; } goto L_0C06D9AA; }  /* 0C06D9A6 bt/s */
L_0C06D9AA: BLKS(0x0C06D9AAu);
	if (T) { UPD(0x0C06D9B0u, 4); goto L_0C06D9B0; }  /* 0C06D9AA bt */
L_0C06D9AC: BLKS(0x0C06D9ACu);
	{ IF(0x0C06D9AEu); ; /* slot nop */ UPD(0x0C06DAD0u, 3); goto L_0C06DAD0; }  /* 0C06D9AC bra */
L_0C06D9B0: BLKS(0x0C06D9B0u);
	r2 = 0xC2860B0u; UPD(0x0C06D9B2u, 1);  /* 0C06D9B0 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C06D9B2 mov Rm,Rn */
	IF(0x0C06D9B4u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06D9B6u, 2);  /* 0C06D9B4 mov.b @(r0,Rm),Rn */
	r0 = r9;  /* 0C06D9B6 mov Rm,Rn */
	IF(0x0C06D9B8u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06D9BAu, 2);  /* 0C06D9B8 mov.b @(r0,Rm),Rn */
	r0 = r5 & 0xFF;  /* 0C06D9BA extu.b Rm,Rn */
	r10 = r4 & 0xFF;  /* 0C06D9BC extu.b Rm,Rn */
	T = r0 >= r10;  /* 0C06D9BE cmp/hs Rm,Rn */
	{ u32 c_ = T; T = (r7 & r7) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C06D9DAu, 6); goto L_0C06D9DA; } UPD(0x0C06D9C4u, 1); goto L_0C06D9C4; }  /* 0C06D9C0 bt/s */
L_0C06D9C4: BLKS(0x0C06D9C4u);
	{ u32 c_ = T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06D9D4u, 3); goto L_0C06D9D4; } goto L_0C06D9C8; }  /* 0C06D9C4 bt/s */
L_0C06D9C8: BLKS(0x0C06D9C8u);
	r7 = 0xC2860B0u; UPD(0x0C06D9CAu, 2);  /* 0C06D9C8 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C06D9CA mov Rm,Rn */
	IF(0x0C06D9CCu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06D9CEu, 2);  /* 0C06D9CC mov.b @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C06D9CE tst Rm,Rn */
	{ u32 c_ = !T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06D9DAu, 4); goto L_0C06D9DA; } UPD(0x0C06D9D4u, 1); goto L_0C06D9D4; }  /* 0C06D9D0 bf/s */
L_0C06D9D4: BLKS(0x0C06D9D4u);
	IF(0x0C06D9D4u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06D9D6u, 1);  /* 0C06D9D4 mov.b @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C06D9D6 tst Rm,Rn */
	if (!T) { UPD(0x0C06D9E4u, 4); goto L_0C06D9E4; }  /* 0C06D9D8 bf */
L_0C06D9DA: BLKS(0x0C06D9DAu);
	r0 = 0xC29D194u; UPD(0x0C06D9DCu, 1);  /* 0C06D9DA mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C06D9DEu, 1);  /* 0C06D9DC mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C06D9DE tst Rm,Rn */
	if (T) { UPD(0x0C06DAB0u, 4); goto L_0C06DAB0; }  /* 0C06D9E0 bt */
L_0C06D9E2: BLKS(0x0C06D9E2u);
	IF(0x0C06D9E2u); ;  /* 0C06D9E2 nop */
	UPD(0x0C06D9E4u, 1);
L_0C06D9E4: BLKS(0x0C06D9E4u);
	r6 = 0xC2B039Cu; UPD(0x0C06D9E6u, 1);  /* 0C06D9E4 mov.l @(disp,pc),Rn */
	r0 = R32(r6); UPD(0x0C06D9E8u, 1);  /* 0C06D9E6 mov.l @Rm,Rn */
	IF(0x0C06D9E8u); r0 >>= 2;  /* 0C06D9E8 shlr2 Rn */
	IF(0x0C06D9EAu); T = r0 & 1; r0 >>= 1;  /* 0C06D9EA shlr Rn */
	IF(0x0C06D9ECu); r0 >>= 2;  /* 0C06D9EC shlr2 Rn */
	r0 &= 0x1u;  /* 0C06D9EE and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06D9F0 tst Rm,Rn */
	{ u32 c_ = T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06DA70u, 8); goto L_0C06DA70; } goto L_0C06D9F6; }  /* 0C06D9F2 bt/s */
L_0C06D9F6: BLKS(0x0C06D9F6u);
	r10 = 0xC2860B0u; UPD(0x0C06D9F8u, 2);  /* 0C06D9F6 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C06D9F8 mov Rm,Rn */
	IF(0x0C06D9FAu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06D9FCu, 2);  /* 0C06D9FA mov.b @(r0,Rm),Rn */
	r0 = r9;  /* 0C06D9FC mov Rm,Rn */
	IF(0x0C06D9FEu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DA00u, 2);  /* 0C06D9FE mov.b @(r0,Rm),Rn */
	r9 = r3 & 0xFF;  /* 0C06DA00 extu.b Rm,Rn */
	r8 = r7 & 0xFF;  /* 0C06DA02 extu.b Rm,Rn */
	T = r9 >= r8;  /* 0C06DA04 cmp/hs Rm,Rn */
	{ u32 c_ = !T; r5 = 0x11u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06DA50u, 6); goto L_0C06DA50; } goto L_0C06DA0A; }  /* 0C06DA06 bf/s */
L_0C06DA0A: BLKS(0x0C06DA0Au);
	r9 = 0xC1744E4u; UPD(0x0C06DA0Cu, 2);  /* 0C06DA0A mov.l @(disp,pc),Rn */
	r7 = r13;  /* 0C06DA0C mov Rm,Rn */
	r8 = 0xC0626E0u; UPD(0x0C06DA10u, 2);  /* 0C06DA0E mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06DA10 mov Rm,Rn */
	IF(0x0C06DA12u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06DA14u, 2);  /* 0C06DA12 mov.b @(r0,Rm),Rn */
	r4 = 0xC174094u; UPD(0x0C06DA16u, 1);  /* 0C06DA14 mov.l @(disp,pc),Rn */
	IF(0x0C06DA16u); { u32 t_ = r8; PR = 0x0C06DA1Au; r5 = 0x11u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06DA1Au); }  /* 0C06DA16 jsr @Rn */
L_0C06DA1A: BLKS(0x0C06DA1Au);
	r2 = 0xC0626E0u; UPD(0x0C06DA1Cu, 1);  /* 0C06DA1A mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06DA1C mov Rm,Rn */
	IF(0x0C06DA1Eu); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06DA20u, 2);  /* 0C06DA1E mov.b @(r0,Rm),Rn */
	r5 = 0x10u;  /* 0C06DA20 mov #imm,Rn */
	r4 = 0xC174494u; UPD(0x0C06DA24u, 2);  /* 0C06DA22 mov.l @(disp,pc),Rn */
	IF(0x0C06DA24u); { u32 t_ = r2; PR = 0x0C06DA28u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06DA28u); }  /* 0C06DA24 jsr @Rn */
L_0C06DA28: BLKS(0x0C06DA28u);
	r3 = r11;  /* 0C06DA28 mov Rm,Rn */
	UPD(0x0C06DA2Au, 1);
L_0C06DA2A: BLKS(0x0C06DA2Au);
	r11 = 0x2A0u; UPD(0x0C06DA2Cu, 1);  /* 0C06DA2A mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C06DA2C add #imm,Rn */
	r12 += r11;  /* 0C06DA2E add Rm,Rn */
	r11 = (u32)(s32)(s16)r3;  /* 0C06DA30 exts.w Rm,Rn */
	r7 = 0x1u;  /* 0C06DA32 mov #imm,Rn */
	T = (s32)r11 > (s32)r7;  /* 0C06DA34 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06D978u, 8); goto L_0C06D978; }  /* 0C06DA36 bf */
L_0C06DA38: BLKS(0x0C06DA38u);
	r15 = r14;  /* 0C06DA38 mov Rm,Rn */
	IF(0x0C06DA3Au); PR = R32(r15); r15 += 4; UPD(0x0C06DA3Cu, 2);  /* 0C06DA3A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06DA3Eu, 1);  /* 0C06DA3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06DA40u, 1);  /* 0C06DA3E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06DA42u, 1);  /* 0C06DA40 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06DA44u, 1);  /* 0C06DA42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06DA46u, 1);  /* 0C06DA44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06DA48u, 1);  /* 0C06DA46 mov.l @Rm+,Rn */
	IF(0x0C06DA48u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06DA48 rts */
L_0C06DA50: BLKS(0x0C06DA50u);
	r8 = 0xC1744E4u; UPD(0x0C06DA52u, 1);  /* 0C06DA50 mov.l @(disp,pc),Rn */
	r10 = 0xC0626E0u; UPD(0x0C06DA54u, 1);  /* 0C06DA52 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06DA54 mov Rm,Rn */
	r9 = 0xC040C000u; UPD(0x0C06DA58u, 2);  /* 0C06DA56 mov.l @(disp,pc),Rn */
	IF(0x0C06DA58u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06DA5Au, 1);  /* 0C06DA58 mov.b @(r0,Rm),Rn */
	r4 = 0xC1740B8u; UPD(0x0C06DA5Cu, 1);  /* 0C06DA5A mov.l @(disp,pc),Rn */
	IF(0x0C06DA5Cu); { u32 t_ = r10; PR = 0x0C06DA60u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06DA60u); }  /* 0C06DA5C jsr @Rn */
L_0C06DA60: BLKS(0x0C06DA60u);
	r0 = r8;  /* 0C06DA60 mov Rm,Rn */
	IF(0x0C06DA62u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06DA64u, 2);  /* 0C06DA62 mov.b @(r0,Rm),Rn */
	r5 = 0x10u;  /* 0C06DA64 mov #imm,Rn */
	r4 = 0xC1740ACu; UPD(0x0C06DA68u, 2);  /* 0C06DA66 mov.l @(disp,pc),Rn */
	IF(0x0C06DA68u); { u32 t_ = r10; PR = 0x0C06DA6Cu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06DA6Cu); }  /* 0C06DA68 jsr @Rn */
L_0C06DA6C: BLKS(0x0C06DA6Cu);
	{ r3 = r11; /* slot mov Rm,Rn */ UPD(0x0C06DA2Au, 3); goto L_0C06DA2A; }  /* 0C06DA6C bra */
L_0C06DA70: BLKS(0x0C06DA70u);
	IF(0x0C06DA70u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DA72u, 1);  /* 0C06DA70 mov.b @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C06DA72 tst Rm,Rn */
	if (!T) { UPD(0x0C06DA90u, 4); goto L_0C06DA90; }  /* 0C06DA74 bf */
L_0C06DA76: BLKS(0x0C06DA76u);
	r5 = 0xC1744E4u; UPD(0x0C06DA78u, 1);  /* 0C06DA76 mov.l @(disp,pc),Rn */
	r10 = 0xC0626E0u; UPD(0x0C06DA7Au, 1);  /* 0C06DA78 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C06DA7A mov Rm,Rn */
	IF(0x0C06DA7Cu); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06DA7Eu, 2);  /* 0C06DA7C mov.b @(r0,Rm),Rn */
	r4 = 0xC173F34u; UPD(0x0C06DA80u, 1);  /* 0C06DA7E mov.l @(disp,pc),Rn */
	r7 = 0xC0C04000u; UPD(0x0C06DA82u, 1);  /* 0C06DA80 mov.l @(disp,pc),Rn */
	IF(0x0C06DA82u); { u32 t_ = r10; PR = 0x0C06DA86u; r5 = 0x11u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06DA86u); }  /* 0C06DA82 jsr @Rn */
L_0C06DA86: BLKS(0x0C06DA86u);
	{ r3 = r11; /* slot mov Rm,Rn */ UPD(0x0C06DA2Au, 3); goto L_0C06DA2A; }  /* 0C06DA86 bra */
L_0C06DA90: BLKS(0x0C06DA90u);
	r6 = 0xC1744E4u; UPD(0x0C06DA92u, 1);  /* 0C06DA90 mov.l @(disp,pc),Rn */
	r4 = 0x11u;  /* 0C06DA92 mov #imm,Rn */
	r0 = r6;  /* 0C06DA94 mov Rm,Rn */
	IF(0x0C06DA96u); r1 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06DA98u, 3);  /* 0C06DA96 mov.b @(r0,Rm),Rn */
	r0 = 0xC06FC20u; UPD(0x0C06DA9Au, 1);  /* 0C06DA98 mov.l @(disp,pc),Rn */
	r1 += 0xFFFFFFF7u;  /* 0C06DA9A add #imm,Rn */
	IF(0x0C06DA9Cu); { u32 t_ = r0; PR = 0x0C06DAA0u; r5 = (u32)(s32)(s8)r1; /* slot exts.b Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C06FC20, 0x0C06FC20u, 0x0C06DAA0u); }  /* 0C06DA9C jsr @Rn */
L_0C06DAA0: BLKS(0x0C06DAA0u);
	{ r3 = r11; /* slot mov Rm,Rn */ UPD(0x0C06DA2Au, 3); goto L_0C06DA2A; }  /* 0C06DAA0 bra */
L_0C06DAB0: BLKS(0x0C06DAB0u);
	r2 = 0xC06CFF0u; UPD(0x0C06DAB2u, 1);  /* 0C06DAB0 mov.l @(disp,pc),Rn */
	IF(0x0C06DAB2u); { u32 t_ = r2; PR = 0x0C06DAB6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06CFF0, 0x0C06CFF0u, 0x0C06DAB6u); }  /* 0C06DAB2 jsr @Rn */
L_0C06DAB6: BLKS(0x0C06DAB6u);
	r4 = 0xC239494u; UPD(0x0C06DAB8u, 1);  /* 0C06DAB6 mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C06DAB8 mov #imm,Rn */
	r5 = R32(r4); UPD(0x0C06DABCu, 2);  /* 0C06DABA mov.l @Rm,Rn */
	IF(0x0C06DABCu); ARG0(0x41BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C06DABC shld Rm,Rn */
	r5 |= r1;  /* 0C06DABE or Rm,Rn */
	{ W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C06D9E4u, 5); goto L_0C06D9E4; }  /* 0C06DAC0 bra */
L_0C06DAD0: BLKS(0x0C06DAD0u);
	r9 = 0xC3C8690u; UPD(0x0C06DAD2u, 1);  /* 0C06DAD0 mov.l @(disp,pc),Rn */
	{ T = (r7 & r7) == 0; /* slot tst Rm,Rn */ UPD(0x0C06D9C4u, 3); goto L_0C06D9C4; }  /* 0C06DAD2 bra */
L_0C06DAE0: BLKS(0x0C06DAE0u);
	r9 = 0xC3C8690u; UPD(0x0C06DAE2u, 1);  /* 0C06DAE0 mov.l @(disp,pc),Rn */
	{ IF(0x0C06DAE4u); ; /* slot nop */ UPD(0x0C06D9E4u, 3); goto L_0C06D9E4; }  /* 0C06DAE2 bra */
L_0C06DB50: BLKS(0x0C06DB50u);
	r12 = 0xC06E0E0u; UPD(0x0C06DB52u, 1);  /* 0C06DB50 mov.l @(disp,pc),Rn */
	r2 = 0xC2460A8u; UPD(0x0C06DB54u, 1);  /* 0C06DB52 mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C06DB54 mov #imm,Rn */
	r9 = 0xC1740CFu; UPD(0x0C06DB58u, 2);  /* 0C06DB56 mov.l @(disp,pc),Rn */
	r13 = 0xC2B07B8u; UPD(0x0C06DB5Au, 1);  /* 0C06DB58 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C06DB5Cu, 1);  /* 0C06DB5A mov.b @Rm,Rn */
	r4 = R32(r2); UPD(0x0C06DB5Eu, 1);  /* 0C06DB5C mov.l @Rm,Rn */
	IF(0x0C06DB5Eu); { u32 t_ = r12; PR = 0x0C06DB62u; r7 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06E0E0, 0x0C06E0E0u, 0x0C06DB62u); }  /* 0C06DB5E jsr @Rn */
L_0C06DB62: BLKS(0x0C06DB62u);
	IF(0x0C06DB62u); ;  /* 0C06DB62 nop */
	UPD(0x0C06DB64u, 1);
L_0C06DB64: BLKS(0x0C06DB64u);
	r10 = 0xC2A6D68u; UPD(0x0C06DB66u, 1);  /* 0C06DB64 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C06DB66 mov Rm,Rn */
	r8 = 0xC297488u; UPD(0x0C06DB6Au, 2);  /* 0C06DB68 mov.l @(disp,pc),Rn */
	IF(0x0C06DB6Au); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06DB6Cu, 1);  /* 0C06DB6A mov.b @(r0,Rm),Rn */
	r0 = r8;  /* 0C06DB6C mov Rm,Rn */
	IF(0x0C06DB6Eu); r8 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06DB70u, 2);  /* 0C06DB6E mov.b @(r0,Rm),Rn */
	r0 = 0x2A0u; UPD(0x0C06DB72u, 1);  /* 0C06DB70 mov.w @(disp,pc),Rn */
	IF(0x0C06DB72u); MACL = r11 * r0;  /* 0C06DB72 mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C06DB76u, 3);  /* 0C06DB74 mov.l @(disp,pc),Rn */
	IF(0x0C06DB76u); r3 = MACL;  /* 0C06DB76 sts macl,Rn */
	r3 += r5;  /* 0C06DB78 add Rm,Rn */
	r4 = R32(r3); UPD(0x0C06DB7Cu, 3);  /* 0C06DB7A mov.l @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06DB7C tst Rm,Rn */
	if (!T) { UPD(0x0C06DB84u, 4); goto L_0C06DB84; }  /* 0C06DB7E bf */
L_0C06DB80: BLKS(0x0C06DB80u);
	{ IF(0x0C06DB82u); ; /* slot nop */ UPD(0x0C06DF00u, 3); goto L_0C06DF00; }  /* 0C06DB80 bra */
L_0C06DB84: BLKS(0x0C06DB84u);
	r7 = 0xC22E015u; UPD(0x0C06DB86u, 1);  /* 0C06DB84 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C06DB88u, 1);  /* 0C06DB86 mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C06DB88 tst Rm,Rn */
	{ u32 c_ = !T; T = (r11 & r11) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C06DBD2u, 4); goto L_0C06DBD2; } goto L_0C06DB8E; }  /* 0C06DB8A bf/s */
L_0C06DB8E: BLKS(0x0C06DB8Eu);
	{ u32 c_ = T; r5 = 0x27u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06DB96u, 4); goto L_0C06DB96; } goto L_0C06DB92; }  /* 0C06DB8E bt/s */
L_0C06DB92: BLKS(0x0C06DB92u);
	{ IF(0x0C06DB94u); ; /* slot nop */ UPD(0x0C06DE60u, 4); goto L_0C06DE60; }  /* 0C06DB92 bra */
L_0C06DB96: BLKS(0x0C06DB96u);
	r9 = 0xC0626E0u; UPD(0x0C06DB98u, 1);  /* 0C06DB96 mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C06DB98 mov #imm,Rn */
	r4 = 0xC1744ACu; UPD(0x0C06DB9Cu, 2);  /* 0C06DB9A mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C06DB9C mov #imm,Rn */
	r7 = 0xC0404000u; UPD(0x0C06DBA0u, 2);  /* 0C06DB9E mov.l @(disp,pc),Rn */
L_0C06DBA0: BLKS(0x0C06DBA0u);
	IF(0x0C06DBA0u); { u32 t_ = r9; PR = 0x0C06DBA4u; IF(0x0C06DBA2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06DBA4u); }  /* 0C06DBA0 jsr @Rn */
L_0C06DBA4: BLKS(0x0C06DBA4u);
	r5 = 0xC1744E0u; UPD(0x0C06DBA6u, 1);  /* 0C06DBA4 mov.l @(disp,pc),Rn */
	r12 = 0x80808000u; UPD(0x0C06DBA8u, 1);  /* 0C06DBA6 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C06DBA8 mov Rm,Rn */
	r4 = 0xC1740A0u; UPD(0x0C06DBACu, 2);  /* 0C06DBAA mov.l @(disp,pc),Rn */
	r5 = 0x26u;  /* 0C06DBAC mov #imm,Rn */
	IF(0x0C06DBAEu); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06DBB0u, 2);  /* 0C06DBAE mov.b @(r0,Rm),Rn */
	IF(0x0C06DBB0u); { u32 t_ = r9; PR = 0x0C06DBB4u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06DBB4u); }  /* 0C06DBB0 jsr @Rn */
L_0C06DBB4: BLKS(0x0C06DBB4u);
	r4 = 0x2A0u; UPD(0x0C06DBB6u, 1);  /* 0C06DBB4 mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C06DBB6 mov Rm,Rn */
	r2 = 0xC1740C7u; UPD(0x0C06DBBAu, 2);  /* 0C06DBB8 mov.l @(disp,pc),Rn */
	IF(0x0C06DBBAu); MACL = r11 * r4;  /* 0C06DBBA mul.l Rm,Rn */
	IF(0x0C06DBBCu); r0 <<= 2;  /* 0C06DBBC shll2 Rn */
	IF(0x0C06DBBEu); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C06DBC0u, 4);  /* 0C06DBBE mov.b @(r0,Rm),Rn */
	IF(0x0C06DBC0u); r9 = MACL;  /* 0C06DBC0 sts macl,Rn */
	r13 = 0xC29D1D8u; UPD(0x0C06DBC4u, 2);  /* 0C06DBC2 mov.l @(disp,pc),Rn */
	r5 = 0x26u;  /* 0C06DBC4 mov #imm,Rn */
	r3 = 0xC06E0E0u; UPD(0x0C06DBC8u, 2);  /* 0C06DBC6 mov.l @(disp,pc),Rn */
	r13 += r9;  /* 0C06DBC8 add Rm,Rn */
	r0 = 0x290u; UPD(0x0C06DBCCu, 2);  /* 0C06DBCA mov.w @(disp,pc),Rn */
	r7 = r12;  /* 0C06DBCC mov Rm,Rn */
	IF(0x0C06DBCEu); { u32 t_ = r3; PR = 0x0C06DBD2u; IF(0x0C06DBD0u); r4 = R32(r0 + r13); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C06E0E0, 0x0C06E0E0u, 0x0C06DBD2u); }  /* 0C06DBCE jsr @Rn */
L_0C06DBD2: BLKS(0x0C06DBD2u);
	r6 = 0xC070730u; UPD(0x0C06DBD4u, 1);  /* 0C06DBD2 mov.l @(disp,pc),Rn */
	r8 = 0xC22E015u; UPD(0x0C06DBD6u, 1);  /* 0C06DBD4 mov.l @(disp,pc),Rn */
	IF(0x0C06DBD6u); { u32 t_ = r6; PR = 0x0C06DBDAu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C070730, 0x0C070730u, 0x0C06DBDAu); }  /* 0C06DBD6 jsr @Rn */
L_0C06DBDA: BLKS(0x0C06DBDAu);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C06DBDCu, 1);  /* 0C06DBDA mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06DBDC tst Rm,Rn */
	if (!T) { UPD(0x0C06DBE4u, 4); goto L_0C06DBE4; }  /* 0C06DBDE bf */
L_0C06DBE0: BLKS(0x0C06DBE0u);
	{ IF(0x0C06DBE2u); ; /* slot nop */ UPD(0x0C06DE50u, 3); goto L_0C06DE50; }  /* 0C06DBE0 bra */
L_0C06DBE4: BLKS(0x0C06DBE4u);
	r2 = 0xC22E015u; UPD(0x0C06DBE6u, 1);  /* 0C06DBE4 mov.l @(disp,pc),Rn */
	r4 = 0x2A0u; UPD(0x0C06DBE8u, 1);  /* 0C06DBE6 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06DBEAu, 1);  /* 0C06DBE8 mov.b @Rm,Rn */
	IF(0x0C06DBEAu); MACL = r11 * r4;  /* 0C06DBEA mul.l Rm,Rn */
	r2 = r0 & 0xFF;  /* 0C06DBEC extu.b Rm,Rn */
	r3 = 0xC29D1D8u; UPD(0x0C06DBF0u, 4);  /* 0C06DBEE mov.l @(disp,pc),Rn */
	IF(0x0C06DBF0u); r0 = MACL;  /* 0C06DBF0 sts macl,Rn */
	IF(0x0C06DBF2u); r7 = R32(r0 + r3); UPD(0x0C06DBF4u, 2);  /* 0C06DBF2 mov.l @(r0,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C06DBF4 tst Rm,Rn */
	{ u32 c_ = T; T = (r2 & r2) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C06DBFEu, 4); goto L_0C06DBFE; } goto L_0C06DBFA; }  /* 0C06DBF6 bt/s */
L_0C06DBFA: BLKS(0x0C06DBFAu);
	{ u32 c_ = T; r0 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06DCCEu, 4); goto L_0C06DCCE; } UPD(0x0C06DBFEu, 1); goto L_0C06DBFE; }  /* 0C06DBFA bt/s */
L_0C06DBFE: BLKS(0x0C06DBFEu);
	r2 = 0x2A0u; UPD(0x0C06DC00u, 1);  /* 0C06DBFE mov.w @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C06DC00 mov #imm,Rn */
	IF(0x0C06DC02u); MACL = r11 * r2;  /* 0C06DC02 mul.l Rm,Rn */
	r4 = 0xC29D1D8u; UPD(0x0C06DC06u, 4);  /* 0C06DC04 mov.l @(disp,pc),Rn */
	IF(0x0C06DC06u); r0 = MACL;  /* 0C06DC06 sts macl,Rn */
	r8 = 0xC29D194u; UPD(0x0C06DC0Au, 2);  /* 0C06DC08 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C06DC0A add Rm,Rn */
	r0 = 0x28Au; UPD(0x0C06DC0Eu, 2);  /* 0C06DC0C mov.w @(disp,pc),Rn */
	r7 = 0xC3CA6F8u; UPD(0x0C06DC10u, 1);  /* 0C06DC0E mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C06DC12u, 1);  /* 0C06DC10 mov.b @Rm,Rn */
	IF(0x0C06DC12u); r9 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C06DC14u, 1);  /* 0C06DC12 mov.b @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C06DC14 tst Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C06DC18u, 2);  /* 0C06DC16 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r8 = r_; }  /* 0C06DC18 negc Rm,Rn */
	r13 = r9 & 0xFF;  /* 0C06DC1A extu.b Rm,Rn */
	r12 = r5 & 0xFF;  /* 0C06DC1C extu.b Rm,Rn */
	T = r13 > r12;  /* 0C06DC1E cmp/hi Rm,Rn */
	IF(0x0C06DC20u); r6 = T;  /* 0C06DC20 movt Rn */
	r8 |= r6;  /* 0C06DC22 or Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C06DC24 tst Rm,Rn */
	if (T) { UPD(0x0C06DC2Eu, 10); goto L_0C06DC2E; }  /* 0C06DC26 bt */
L_0C06DC28: BLKS(0x0C06DC28u);
	r5 = 0x27u;  /* 0C06DC28 mov #imm,Rn */
	{ IF(0x0C06DC2Cu); ; /* slot nop */ UPD(0x0C06DE30u, 4); goto L_0C06DE30; }  /* 0C06DC2A bra */
L_0C06DC2E: BLKS(0x0C06DC2Eu);
	r12 = 0xC2B039Cu; UPD(0x0C06DC30u, 1);  /* 0C06DC2E mov.l @(disp,pc),Rn */
	r6 = 0x3u;  /* 0C06DC30 mov #imm,Rn */
	r2 = R32(r12); UPD(0x0C06DC34u, 2);  /* 0C06DC32 mov.l @Rm,Rn */
	IF(0x0C06DC34u); r2 >>= 2;  /* 0C06DC34 shlr2 Rn */
	IF(0x0C06DC36u); r2 >>= 2;  /* 0C06DC36 shlr2 Rn */
	IF(0x0C06DC38u); r2 >>= 2;  /* 0C06DC38 shlr2 Rn */
	r2 &= r6;  /* 0C06DC3A and Rm,Rn */
	T = r2 > r6;  /* 0C06DC3C cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06DCCEu, 8); goto L_0C06DCCE; } goto L_0C06DC42; }  /* 0C06DC3E bt/s */
L_0C06DC42: BLKS(0x0C06DC42u);
	r0 = 0xC06DCA0u;  /* 0C06DC42 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C06DC44 add Rm,Rn */
	IF(0x0C06DC46u); r13 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06DC48u, 4);  /* 0C06DC46 mov.w @(r0,Rm),Rn */
	IF(0x0C06DC48u); { u32 tv_ = (r13 + 0x0C06DC4Cu); u32 t_ = PHYS(tv_); IF(0x0C06DC4Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C06DCB0u: goto L_0C06DCB0; case 0x0C06DDF0u: goto L_0C06DDF0; case 0x0C06DE00u: goto L_0C06DE00; case 0x0C06DE10u: goto L_0C06DE10; default: JUMPD(tv_); } }  /* 0C06DC48 braf Rn */
L_0C06DCB0: BLKS(0x0C06DCB0u);
	r5 = 0xC3C542Au; UPD(0x0C06DCB2u, 1);  /* 0C06DCB0 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C06DCB4u, 1);  /* 0C06DCB2 mov.b @Rm,Rn */
	T = r0 == 0x2u;  /* 0C06DCB4 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C06DCBCu, 4); goto L_0C06DCBC; }  /* 0C06DCB6 bf */
L_0C06DCB8: BLKS(0x0C06DCB8u);
	{ IF(0x0C06DCBAu); ; /* slot nop */ UPD(0x0C06DDF0u, 3); goto L_0C06DDF0; }  /* 0C06DCB8 bra */
L_0C06DCBC: BLKS(0x0C06DCBCu);
	r9 = 0xC1744E0u; UPD(0x0C06DCBEu, 1);  /* 0C06DCBC mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C06DCBE mov Rm,Rn */
	r0 = r9;  /* 0C06DCC0 mov Rm,Rn */
	IF(0x0C06DCC2u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06DCC4u, 3);  /* 0C06DCC2 mov.b @(r0,Rm),Rn */
	r5 = 0x27u;  /* 0C06DCC4 mov #imm,Rn */
	r1 = 0xC06FDC0u; UPD(0x0C06DCC8u, 2);  /* 0C06DCC6 mov.l @(disp,pc),Rn */
L_0C06DCC8: BLKS(0x0C06DCC8u);
	IF(0x0C06DCC8u); { u32 t_ = r1; PR = 0x0C06DCCCu; IF(0x0C06DCCAu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C06DCCCu); }  /* 0C06DCC8 jsr @Rn */
L_0C06DCCC: BLKS(0x0C06DCCCu);
	r0 = r11;  /* 0C06DCCC mov Rm,Rn */
	UPD(0x0C06DCCEu, 1);
L_0C06DCCE: BLKS(0x0C06DCCEu);
	r0 += 0x1u;  /* 0C06DCCE add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C06DCD0 exts.w Rm,Rn */
	r8 = 0x1u;  /* 0C06DCD2 mov #imm,Rn */
	T = (s32)r11 > (s32)r8;  /* 0C06DCD4 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C06DCDCu, 7); goto L_0C06DCDC; }  /* 0C06DCD6 bt */
L_0C06DCD8: BLKS(0x0C06DCD8u);
	{ IF(0x0C06DCDAu); ; /* slot nop */ UPD(0x0C06DB64u, 3); goto L_0C06DB64; }  /* 0C06DCD8 bra */
L_0C06DCDC: BLKS(0x0C06DCDCu);
	r9 = 0xC2B1A50u; UPD(0x0C06DCDEu, 1);  /* 0C06DCDC mov.l @(disp,pc),Rn */
	r2 = R32(r9); UPD(0x0C06DCE0u, 1);  /* 0C06DCDE mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C06DCE0 tst Rm,Rn */
	if (T) { UPD(0x0C06DD20u, 4); goto L_0C06DD20; }  /* 0C06DCE2 bt */
L_0C06DCE4: BLKS(0x0C06DCE4u);
	r2 += 0xFFFFFFFFu;  /* 0C06DCE4 add #imm,Rn */
	W32(r9, r2); UPD(0x0C06DCE8u, 2);  /* 0C06DCE6 mov.l Rm,@Rn */
L_0C06DCE8: BLKS(0x0C06DCE8u);
	r2 = 0xC239474u; UPD(0x0C06DCEAu, 1);  /* 0C06DCE8 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C06DCECu, 1);  /* 0C06DCEA mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C06DCEC tst Rm,Rn */
	if (!T) { UPD(0x0C06DCF4u, 4); goto L_0C06DCF4; }  /* 0C06DCEE bf */
L_0C06DCF0: BLKS(0x0C06DCF0u);
	{ IF(0x0C06DCF2u); ; /* slot nop */ UPD(0x0C06DA38u, 3); goto L_0C06DA38; }  /* 0C06DCF0 bra */
L_0C06DCF4: BLKS(0x0C06DCF4u);
	r1 += 0xFFFFFFFFu;  /* 0C06DCF4 add #imm,Rn */
	r5 = r1 & 0xFF;  /* 0C06DCF6 extu.b Rm,Rn */
	W8(r2, r1); UPD(0x0C06DCFAu, 3);  /* 0C06DCF8 mov.b Rm,@Rn */
	T = (r5 & r5) == 0;  /* 0C06DCFA tst Rm,Rn */
	{ u32 c_ = T; r4 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06DD04u, 4); goto L_0C06DD04; } goto L_0C06DD00; }  /* 0C06DCFC bt/s */
L_0C06DD00: BLKS(0x0C06DD00u);
	r2 = 0xC3CA6F4u; UPD(0x0C06DD02u, 2);  /* 0C06DD00 mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C06DD04u, 1);  /* 0C06DD02 mov.l @Rm,Rn */
L_0C06DD04: BLKS(0x0C06DD04u);
	r3 = 0xC0C22B0u; UPD(0x0C06DD06u, 1);  /* 0C06DD04 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C06DD06 mov #imm,Rn */
	r6 = 0x1u;  /* 0C06DD08 mov #imm,Rn */
	r15 = r14;  /* 0C06DD0A mov Rm,Rn */
	IF(0x0C06DD0Cu); PR = R32(r15); r15 += 4; UPD(0x0C06DD0Eu, 4);  /* 0C06DD0C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06DD10u, 1);  /* 0C06DD0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06DD12u, 1);  /* 0C06DD10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06DD14u, 1);  /* 0C06DD12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06DD16u, 1);  /* 0C06DD14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06DD18u, 1);  /* 0C06DD16 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06DD1Au, 1);  /* 0C06DD18 mov.l @Rm+,Rn */
	IF(0x0C06DD1Au); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C22B0u: TAIL(blk_f_0C0C22B0); default: JUMPD(tv_); } }  /* 0C06DD1A jmp @Rn */
L_0C06DD20: BLKS(0x0C06DD20u);
	r10 = 0xC3C8474u; UPD(0x0C06DD22u, 1);  /* 0C06DD20 mov.l @(disp,pc),Rn */
	r3 = R32(r10); UPD(0x0C06DD24u, 1);  /* 0C06DD22 mov.l @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06DD24 tst Rm,Rn */
	if (T) { UPD(0x0C06DDC0u, 4); goto L_0C06DDC0; }  /* 0C06DD26 bt */
L_0C06DD28: BLKS(0x0C06DD28u);
	r7 = 0xC234BA9u; UPD(0x0C06DD2Au, 1);  /* 0C06DD28 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)R8(r7); UPD(0x0C06DD2Cu, 1);  /* 0C06DD2A mov.b @Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C06DD2C tst Rm,Rn */
	if (T) { UPD(0x0C06DD38u, 4); goto L_0C06DD38; }  /* 0C06DD2E bt */
L_0C06DD30: BLKS(0x0C06DD30u);
	W8(r7, r2); UPD(0x0C06DD32u, 1);  /* 0C06DD30 mov.b Rm,@Rn */
	r6 = 0x4B0u; UPD(0x0C06DD34u, 1);  /* 0C06DD32 mov.w @(disp,pc),Rn */
	r3 = r6;  /* 0C06DD34 mov Rm,Rn */
	W32(r10, r6); UPD(0x0C06DD38u, 2);  /* 0C06DD36 mov.l Rm,@Rn */
L_0C06DD38: BLKS(0x0C06DD38u);
	r2 = r3;  /* 0C06DD38 mov Rm,Rn */
	IF(0x0C06DD3Au); r2 -= 1; T = r2 == 0;  /* 0C06DD3A dt Rn */
	{ u32 c_ = T; W32(r10, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06DD70u, 5); goto L_0C06DD70; } UPD(0x0C06DD40u, 1); goto L_0C06DD40; }  /* 0C06DD3C bt/s */
L_0C06DD40: BLKS(0x0C06DD40u);
	r5 = 0xC297838u; UPD(0x0C06DD42u, 1);  /* 0C06DD40 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r5); UPD(0x0C06DD44u, 1);  /* 0C06DD42 mov.w @Rm,Rn */
	r9 = 0xB4u; UPD(0x0C06DD46u, 1);  /* 0C06DD44 mov.w @(disp,pc),Rn */
	IF(0x0C06DD46u); r0 >>= 2;  /* 0C06DD46 shlr2 Rn */
	T = (s32)r2 > (s32)r9;  /* 0C06DD48 cmp/gt Rm,Rn */
	IF(0x0C06DD4Au); r0 >>= 2;  /* 0C06DD4A shlr2 Rn */
	IF(0x0C06DD4Cu); r8 = T;  /* 0C06DD4C movt Rn */
	r0 &= 0x1u;  /* 0C06DD4E and #imm,r0 */
	r0 &= r8;  /* 0C06DD50 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06DD52 tst Rm,Rn */
	if (T) { UPD(0x0C06DD5Au, 10); goto L_0C06DD5A; }  /* 0C06DD54 bt */
L_0C06DD56: BLKS(0x0C06DD56u);
	r3 += 0xFFFFFFC3u;  /* 0C06DD56 add #imm,Rn */
	W32(r10, r3); UPD(0x0C06DD5Au, 2);  /* 0C06DD58 mov.l Rm,@Rn */
L_0C06DD5A: BLKS(0x0C06DD5Au);
	r7 = 0xC070360u; UPD(0x0C06DD5Cu, 1);  /* 0C06DD5A mov.l @(disp,pc),Rn */
	r4 = 0x14u;  /* 0C06DD5C mov #imm,Rn */
	IF(0x0C06DD5Eu); { u32 t_ = r7; PR = 0x0C06DD62u; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C070360, 0x0C070360u, 0x0C06DD62u); }  /* 0C06DD5E jsr @Rn */
L_0C06DD62: BLKS(0x0C06DD62u);
	r3 = 0xC070160u; UPD(0x0C06DD64u, 1);  /* 0C06DD62 mov.l @(disp,pc),Rn */
	r5 = 0x8u;  /* 0C06DD64 mov #imm,Rn */
	r4 = R32(r10); UPD(0x0C06DD68u, 2);  /* 0C06DD66 mov.l @Rm,Rn */
	IF(0x0C06DD68u); { u32 t_ = r3; PR = 0x0C06DD6Cu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C070160, 0x0C070160u, 0x0C06DD6Cu); }  /* 0C06DD68 jsr @Rn */
L_0C06DD6C: BLKS(0x0C06DD6Cu);
	{ IF(0x0C06DD6Eu); ; /* slot nop */ UPD(0x0C06DCE8u, 3); goto L_0C06DCE8; }  /* 0C06DD6C bra */
L_0C06DD70: BLKS(0x0C06DD70u);
	r2 = 0xC0702E0u; UPD(0x0C06DD72u, 1);  /* 0C06DD70 mov.l @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C06DD72 mov #imm,Rn */
	IF(0x0C06DD74u); { u32 t_ = r2; PR = 0x0C06DD78u; r5 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0702E0, 0x0C0702E0u, 0x0C06DD78u); }  /* 0C06DD74 jsr @Rn */
L_0C06DD78: BLKS(0x0C06DD78u);
	r12 = 0xC062560u; UPD(0x0C06DD7Au, 1);  /* 0C06DD78 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06DD7A add #imm,Rn */
	r13 = 0x1Cu;  /* 0C06DD7C mov #imm,Rn */
	r5 = 0x12u;  /* 0C06DD7E mov #imm,Rn */
	r6 = 0x1u;  /* 0C06DD80 mov #imm,Rn */
	W32(r15, r13); UPD(0x0C06DD84u, 5);  /* 0C06DD82 mov.l Rm,@Rn */
	r4 = 0xC1744E8u; UPD(0x0C06DD86u, 1);  /* 0C06DD84 mov.l @(disp,pc),Rn */
	IF(0x0C06DD86u); { u32 t_ = r12; PR = 0x0C06DD8Au; r7 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062560, 0x0C062560u, 0x0C06DD8Au); }  /* 0C06DD86 jsr @Rn */
L_0C06DD8A: BLKS(0x0C06DD8Au);
	r7 = 0x1E0u; UPD(0x0C06DD8Cu, 1);  /* 0C06DD8A mov.w @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C06DD8C add #imm,Rn */
	W32(r9, r7); UPD(0x0C06DD90u, 2);  /* 0C06DD8E mov.l Rm,@Rn */
	r3 = 0xC29D194u; UPD(0x0C06DD92u, 1);  /* 0C06DD90 mov.l @(disp,pc),Rn */
	r9 = 0xC0C2110u; UPD(0x0C06DD94u, 1);  /* 0C06DD92 mov.l @(disp,pc),Rn */
	r4 = 0x81u; UPD(0x0C06DD96u, 1);  /* 0C06DD94 mov.w @(disp,pc),Rn */
	IF(0x0C06DD96u); { u32 t_ = r9; PR = 0x0C06DD9Au; W8(r3, r8); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C06DD9Au); }  /* 0C06DD96 jsr @Rn */
L_0C06DD9A: BLKS(0x0C06DD9Au);
	r8 = 0xC3C43B8u; UPD(0x0C06DD9Cu, 1);  /* 0C06DD9A mov.l @(disp,pc),Rn */
	r4 = 0xC0u; UPD(0x0C06DD9Eu, 1);  /* 0C06DD9C mov.w @(disp,pc),Rn */
	IF(0x0C06DD9Eu); { u32 t_ = r9; PR = 0x0C06DDA2u; IF(0x0C06DDA0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C06DDA2u); }  /* 0C06DD9E jsr @Rn */
L_0C06DDA2: BLKS(0x0C06DDA2u);
	r10 = (u32)(s32)(s8)R8(r8); UPD(0x0C06DDA4u, 1);  /* 0C06DDA2 mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C06DDA4 tst Rm,Rn */
	if (T) { UPD(0x0C06DCE8u, 4); goto L_0C06DCE8; }  /* 0C06DDA6 bt */
L_0C06DDA8: BLKS(0x0C06DDA8u);
	r11 = 0xC0C21A0u; UPD(0x0C06DDAAu, 1);  /* 0C06DDA8 mov.l @(disp,pc),Rn */
	IF(0x0C06DDAAu); { u32 t_ = r11; PR = 0x0C06DDAEu; r4 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C21A0, 0x0C0C21A0u, 0x0C06DDAEu); }  /* 0C06DDAA jsr @Rn */
L_0C06DDAE: BLKS(0x0C06DDAEu);
	{ IF(0x0C06DDB0u); ; /* slot nop */ UPD(0x0C06DCE8u, 3); goto L_0C06DCE8; }  /* 0C06DDAE bra */
L_0C06DDC0: BLKS(0x0C06DDC0u);
	r7 = 0xC29D1D8u; UPD(0x0C06DDC2u, 1);  /* 0C06DDC0 mov.l @(disp,pc),Rn */
	r12 = 0xC29D454u; UPD(0x0C06DDC4u, 1);  /* 0C06DDC2 mov.l @(disp,pc),Rn */
	r3 = R32(r7); UPD(0x0C06DDC6u, 1);  /* 0C06DDC4 mov.l @Rm,Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C06DDC8u, 1);  /* 0C06DDC6 mov.l @(disp,Rm),Rn */
	r3 |= r4;  /* 0C06DDC8 or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06DDCA tst Rm,Rn */
	if (!T) { UPD(0x0C06DDAEu, 5); goto L_0C06DDAE; }  /* 0C06DDCC bf */
L_0C06DDCE: BLKS(0x0C06DDCEu);
	r2 = 0xC22E044u; UPD(0x0C06DDD0u, 1);  /* 0C06DDCE mov.l @(disp,pc),Rn */
	r5 = 0x2A0u; UPD(0x0C06DDD2u, 1);  /* 0C06DDD0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C06DDD4u, 1);  /* 0C06DDD2 mov.w @Rm,Rn */
	IF(0x0C06DDD4u); MACL = r4 * r5;  /* 0C06DDD4 mul.l Rm,Rn */
	r0 = 0x28Au; UPD(0x0C06DDD8u, 3);  /* 0C06DDD6 mov.w @(disp,pc),Rn */
	IF(0x0C06DDD8u); r6 = MACL;  /* 0C06DDD8 sts macl,Rn */
	r7 += r6;  /* 0C06DDDA add Rm,Rn */
	IF(0x0C06DDDCu); r13 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C06DDDEu, 3);  /* 0C06DDDC mov.b @(r0,Rm),Rn */
	r11 = 0xC3CA6F8u; UPD(0x0C06DDE0u, 1);  /* 0C06DDDE mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C06DDE2u, 1);  /* 0C06DDE0 mov.b @Rm,Rn */
	T = r0 >= r13;  /* 0C06DDE2 cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C06DD78u, 4); goto L_0C06DD78; }  /* 0C06DDE4 bf */
L_0C06DDE6: BLKS(0x0C06DDE6u);
	r6 = 0x4B0u; UPD(0x0C06DDE8u, 1);  /* 0C06DDE6 mov.w @(disp,pc),Rn */
	r0 = 0xC234BA9u; UPD(0x0C06DDEAu, 1);  /* 0C06DDE8 mov.l @(disp,pc),Rn */
	W32(r10, r6); UPD(0x0C06DDECu, 1);  /* 0C06DDEA mov.l Rm,@Rn */
	{ W8(r0, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C06DCE8u, 3); goto L_0C06DCE8; }  /* 0C06DDEC bra */
L_0C06DDF0: BLKS(0x0C06DDF0u);
	r10 = 0xC1744E0u; UPD(0x0C06DDF2u, 1);  /* 0C06DDF0 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)r11;  /* 0C06DDF2 exts.b Rm,Rn */
	r0 = r10;  /* 0C06DDF4 mov Rm,Rn */
	IF(0x0C06DDF6u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06DDF8u, 3);  /* 0C06DDF6 mov.b @(r0,Rm),Rn */
	r1 = 0xC06FFC0u; UPD(0x0C06DDFAu, 1);  /* 0C06DDF8 mov.l @(disp,pc),Rn */
	{ r5 = 0x27u; /* slot mov #imm,Rn */ UPD(0x0C06DCC8u, 3); goto L_0C06DCC8; }  /* 0C06DDFA bra */
L_0C06DE00: BLKS(0x0C06DE00u);
	r4 = 0xC1744E0u; UPD(0x0C06DE02u, 1);  /* 0C06DE00 mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C06DE02 mov #imm,Rn */
	r0 = r4;  /* 0C06DE04 mov Rm,Rn */
	IF(0x0C06DE06u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06DE08u, 3);  /* 0C06DE06 mov.b @(r0,Rm),Rn */
	r1 = 0xC06FC90u; UPD(0x0C06DE0Au, 1);  /* 0C06DE08 mov.l @(disp,pc),Rn */
	{ r4 = r10; /* slot mov Rm,Rn */ UPD(0x0C06DCC8u, 3); goto L_0C06DCC8; }  /* 0C06DE0A bra */
L_0C06DE10: BLKS(0x0C06DE10u);
	r7 = 0xC3C542Au; UPD(0x0C06DE12u, 1);  /* 0C06DE10 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C06DE14u, 1);  /* 0C06DE12 mov.b @Rm,Rn */
	T = r0 == 0x2u;  /* 0C06DE14 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C06DE00u, 4); goto L_0C06DE00; }  /* 0C06DE16 bt */
L_0C06DE18: BLKS(0x0C06DE18u);
	r4 = (u32)(s32)(s8)r11;  /* 0C06DE18 exts.b Rm,Rn */
	r2 = 0xC1744E0u; UPD(0x0C06DE1Cu, 2);  /* 0C06DE1A mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C06DE1C mov Rm,Rn */
	r1 = 0xC06FEB0u; UPD(0x0C06DE20u, 2);  /* 0C06DE1E mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C06DE20 mov #imm,Rn */
	{ IF(0x0C06DE24u); r6 = (u32)(s32)(s8)R8(r0 + r11); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C06DCC8u, 4); goto L_0C06DCC8; }  /* 0C06DE22 bra */
L_0C06DE30: BLKS(0x0C06DE30u);
	r10 = 0xC1744E0u; UPD(0x0C06DE32u, 1);  /* 0C06DE30 mov.l @(disp,pc),Rn */
	r12 = 0xC0626E0u; UPD(0x0C06DE34u, 1);  /* 0C06DE32 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C06DE34 mov Rm,Rn */
	r13 = 0x80808000u; UPD(0x0C06DE38u, 2);  /* 0C06DE36 mov.l @(disp,pc),Rn */
	IF(0x0C06DE38u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06DE3Au, 1);  /* 0C06DE38 mov.b @(r0,Rm),Rn */
	r4 = 0xC174088u; UPD(0x0C06DE3Cu, 1);  /* 0C06DE3A mov.l @(disp,pc),Rn */
	IF(0x0C06DE3Cu); { u32 t_ = r12; PR = 0x0C06DE40u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06DE40u); }  /* 0C06DE3C jsr @Rn */
L_0C06DE40: BLKS(0x0C06DE40u);
	r0 = r10;  /* 0C06DE40 mov Rm,Rn */
	IF(0x0C06DE42u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06DE44u, 2);  /* 0C06DE42 mov.b @(r0,Rm),Rn */
	r5 = 0x26u;  /* 0C06DE44 mov #imm,Rn */
	r4 = 0xC1740A0u; UPD(0x0C06DE48u, 2);  /* 0C06DE46 mov.l @(disp,pc),Rn */
	IF(0x0C06DE48u); { u32 t_ = r12; PR = 0x0C06DE4Cu; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06DE4Cu); }  /* 0C06DE48 jsr @Rn */
L_0C06DE4C: BLKS(0x0C06DE4Cu);
	{ r0 = r11; /* slot mov Rm,Rn */ UPD(0x0C06DCCEu, 3); goto L_0C06DCCE; }  /* 0C06DE4C bra */
L_0C06DE50: BLKS(0x0C06DE50u);
	r7 = 0xC070650u; UPD(0x0C06DE52u, 1);  /* 0C06DE50 mov.l @(disp,pc),Rn */
	IF(0x0C06DE52u); { u32 t_ = r7; PR = 0x0C06DE56u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C070650, 0x0C070650u, 0x0C06DE56u); }  /* 0C06DE52 jsr @Rn */
L_0C06DE56: BLKS(0x0C06DE56u);
	{ IF(0x0C06DE58u); ; /* slot nop */ UPD(0x0C06DBE4u, 3); goto L_0C06DBE4; }  /* 0C06DE56 bra */
L_0C06DE60: BLKS(0x0C06DE60u);
	r9 = 0xC0626E0u; UPD(0x0C06DE62u, 1);  /* 0C06DE60 mov.l @(disp,pc),Rn */
	r4 = 0xC1744B8u; UPD(0x0C06DE64u, 1);  /* 0C06DE62 mov.l @(disp,pc),Rn */
	r7 = 0x4040C000u; UPD(0x0C06DE66u, 1);  /* 0C06DE64 mov.l @(disp,pc),Rn */
	{ r6 = 0x14u; /* slot mov #imm,Rn */ UPD(0x0C06DBA0u, 3); goto L_0C06DBA0; }  /* 0C06DE66 bra */
L_0C06DF00: BLKS(0x0C06DF00u);
	r0 = 0x28Au; UPD(0x0C06DF02u, 1);  /* 0C06DF00 mov.w @(disp,pc),Rn */
	r2 = 0xC3CA6F8u; UPD(0x0C06DF04u, 1);  /* 0C06DF02 mov.l @(disp,pc),Rn */
	IF(0x0C06DF04u); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06DF06u, 1);  /* 0C06DF04 mov.b @(r0,Rm),Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C06DF08u, 1);  /* 0C06DF06 mov.b @Rm,Rn */
	r7 = r9 & 0xFF;  /* 0C06DF08 extu.b Rm,Rn */
	r12 = r13 & 0xFF;  /* 0C06DF0A extu.b Rm,Rn */
	T = r7 > r12;  /* 0C06DF0C cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06DE56u, 6); goto L_0C06DE56; } goto L_0C06DF12; }  /* 0C06DF0E bt/s */
L_0C06DF12: BLKS(0x0C06DF12u);
	IF(0x0C06DF12u); r1 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C06DF14u, 2);  /* 0C06DF12 mov.w @(r0,Rm),Rn */
	r3 = 0x100u; UPD(0x0C06DF16u, 1);  /* 0C06DF14 mov.w @(disp,pc),Rn */
	T = (r1 & r3) == 0;  /* 0C06DF16 tst Rm,Rn */
	{ u32 c_ = T; T = (r7 & r7) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C06DE56u, 4); goto L_0C06DE56; } goto L_0C06DF1C; }  /* 0C06DF18 bt/s */
L_0C06DF1C: BLKS(0x0C06DF1Cu);
	if (!T) { UPD(0x0C06DF34u, 4); goto L_0C06DF34; }  /* 0C06DF1C bf */
L_0C06DF1E: BLKS(0x0C06DF1Eu);
	r9 = 0xC2860B0u; UPD(0x0C06DF20u, 1);  /* 0C06DF1E mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06DF20 mov Rm,Rn */
	IF(0x0C06DF22u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DF24u, 2);  /* 0C06DF22 mov.b @(r0,Rm),Rn */
	r13 = 0xC3C8690u; UPD(0x0C06DF26u, 1);  /* 0C06DF24 mov.l @(disp,pc),Rn */
	r5 = r12 & 0xFF;  /* 0C06DF26 extu.b Rm,Rn */
	r0 = r13;  /* 0C06DF28 mov Rm,Rn */
	IF(0x0C06DF2Au); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DF2Cu, 3);  /* 0C06DF2A mov.b @(r0,Rm),Rn */
	r4 = r6 & 0xFF;  /* 0C06DF2C extu.b Rm,Rn */
	T = r5 >= r4;  /* 0C06DF2E cmp/hs Rm,Rn */
	{ u32 c_ = T; T = (r7 & r7) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C06DF4Au, 5); goto L_0C06DF4A; } UPD(0x0C06DF34u, 1); goto L_0C06DF34; }  /* 0C06DF30 bt/s */
L_0C06DF34: BLKS(0x0C06DF34u);
	if (T) { UPD(0x0C06DF40u, 3); goto L_0C06DF40; }  /* 0C06DF34 bt */
L_0C06DF36: BLKS(0x0C06DF36u);
	r2 = 0xC2860B0u; UPD(0x0C06DF38u, 1);  /* 0C06DF36 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C06DF38 mov Rm,Rn */
	IF(0x0C06DF3Au); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DF3Cu, 2);  /* 0C06DF3A mov.b @(r0,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C06DF3C tst Rm,Rn */
	if (!T) { UPD(0x0C06DF4Au, 4); goto L_0C06DF4A; }  /* 0C06DF3E bf */
L_0C06DF40: BLKS(0x0C06DF40u);
	r4 = 0xC3C8690u; UPD(0x0C06DF42u, 1);  /* 0C06DF40 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C06DF42 mov Rm,Rn */
	IF(0x0C06DF44u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DF46u, 2);  /* 0C06DF44 mov.b @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C06DF46 tst Rm,Rn */
	if (!T) { UPD(0x0C06DF76u, 4); goto L_0C06DF76; }  /* 0C06DF48 bf */
L_0C06DF4A: BLKS(0x0C06DF4Au);
	r8 = 0xC29D194u; UPD(0x0C06DF4Cu, 1);  /* 0C06DF4A mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C06DF4Eu, 1);  /* 0C06DF4C mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06DF4E tst Rm,Rn */
	if (!T) { UPD(0x0C06DF76u, 4); goto L_0C06DF76; }  /* 0C06DF50 bf */
L_0C06DF52: BLKS(0x0C06DF52u);
	r9 = 0xC06CFF0u; UPD(0x0C06DF54u, 1);  /* 0C06DF52 mov.l @(disp,pc),Rn */
	r13 = 0xC0624D0u; UPD(0x0C06DF56u, 1);  /* 0C06DF54 mov.l @(disp,pc),Rn */
	IF(0x0C06DF56u); { u32 t_ = r9; PR = 0x0C06DF5Au; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06CFF0, 0x0C06CFF0u, 0x0C06DF5Au); }  /* 0C06DF56 jsr @Rn */
L_0C06DF5A: BLKS(0x0C06DF5Au);
	r5 = 0xC1744E0u; UPD(0x0C06DF5Cu, 1);  /* 0C06DF5A mov.l @(disp,pc),Rn */
	r12 = 0xC070390u; UPD(0x0C06DF5Eu, 1);  /* 0C06DF5C mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C06DF5E mov Rm,Rn */
	r4 = 0xC174008u; UPD(0x0C06DF62u, 2);  /* 0C06DF60 mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C06DF62 mov #imm,Rn */
	IF(0x0C06DF64u); { u32 t_ = r13; PR = 0x0C06DF68u; IF(0x0C06DF66u); r6 = (u32)(s32)(s8)R8(r0 + r11); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C06DF68u); }  /* 0C06DF64 jsr @Rn */
L_0C06DF68: BLKS(0x0C06DF68u);
	r4 = 0x14u;  /* 0C06DF68 mov #imm,Rn */
	IF(0x0C06DF6Au); { u32 t_ = r12; PR = 0x0C06DF6Eu; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C070390, 0x0C070390u, 0x0C06DF6Eu); }  /* 0C06DF6A jsr @Rn */
L_0C06DF6E: BLKS(0x0C06DF6Eu);
	r6 = 0xC0702E0u; UPD(0x0C06DF70u, 1);  /* 0C06DF6E mov.l @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C06DF70 mov #imm,Rn */
	IF(0x0C06DF72u); { u32 t_ = r6; PR = 0x0C06DF76u; r5 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0702E0, 0x0C0702E0u, 0x0C06DF76u); }  /* 0C06DF72 jsr @Rn */
L_0C06DF76: BLKS(0x0C06DF76u);
	{ IF(0x0C06DF78u); ; /* slot nop */ UPD(0x0C06DBE4u, 3); goto L_0C06DBE4; }  /* 0C06DF76 bra */
}

/* FUN_0c06dfb0 */
void blk_f_0C06DFB0(sh3_t *c)
{
	LOCALS;
L_0C06DFB0: BLKS(0x0C06DFB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06DFB2u, 1);  /* 0C06DFB0 mov.l Rm,@-Rn */
	r3 = 0xFFFFFFFFu;  /* 0C06DFB2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06DFB6u, 2);  /* 0C06DFB4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06DFB8u, 1);  /* 0C06DFB6 mov.l Rm,@-Rn */
	r9 = 0x5u;  /* 0C06DFB8 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06DFBCu, 2);  /* 0C06DFBA mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06DFBEu, 1);  /* 0C06DFBC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06DFC0u, 1);  /* 0C06DFBE mov.l Rm,@-Rn */
	r4 = 0xC238029u; UPD(0x0C06DFC2u, 1);  /* 0C06DFC0 mov.l @(disp,pc),Rn */
	IF(0x0C06DFC2u); r15 -= 4; W32(r15, PR); UPD(0x0C06DFC4u, 1);  /* 0C06DFC2 sts.l pr,@-Rn */
	r11 = 0xC239483u; UPD(0x0C06DFC6u, 1);  /* 0C06DFC4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06DFC6 mov Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r4); UPD(0x0C06DFCAu, 2);  /* 0C06DFC8 mov.b @Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C06DFCCu, 1);  /* 0C06DFCA mov.b @Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C06DFCC tst Rm,Rn */
	r6 = 0xC22E015u; UPD(0x0C06DFD0u, 2);  /* 0C06DFCE mov.l @(disp,pc),Rn */
	IF(0x0C06DFD0u); r5 = T;  /* 0C06DFD0 movt Rn */
	r8 = r10 & 0xFF;  /* 0C06DFD2 extu.b Rm,Rn */
	T = r9 >= r8;  /* 0C06DFD4 cmp/hs Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C06DFD8u, 4);  /* 0C06DFD6 mov.b @Rm,Rn */
	IF(0x0C06DFD8u); r7 = T;  /* 0C06DFD8 movt Rn */
	r1 = 0xC2B1A50u; UPD(0x0C06DFDCu, 2);  /* 0C06DFDA mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C06DFDC tst Rm,Rn */
	r0 = R32(r1); UPD(0x0C06DFE0u, 2);  /* 0C06DFDE mov.l @Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C06DFE0 negc Rm,Rn */
	r5 &= r7;  /* 0C06DFE2 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06DFE4 tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C06DFE6 negc Rm,Rn */
	r4 |= r5;  /* 0C06DFE8 or Rm,Rn */
	r0 |= r4;  /* 0C06DFEA or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06DFEC tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06E05Cu, 10); goto L_0C06E05C; } goto L_0C06DFF2; }  /* 0C06DFEE bf/s */
L_0C06DFF2: BLKS(0x0C06DFF2u);
	r11 = 0xC29D1D8u; UPD(0x0C06DFF4u, 2);  /* 0C06DFF2 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C06DFF4 mov #imm,Rn */
	r12 = 0xC22E024u; UPD(0x0C06DFF8u, 2);  /* 0C06DFF6 mov.l @(disp,pc),Rn */
	r10 = 0xFFFFFFF8u;  /* 0C06DFF8 mov #imm,Rn */
	r8 = 0x0u;  /* 0C06DFFA mov #imm,Rn */
	UPD(0x0C06DFFCu, 2);
L_0C06DFFC: BLKS(0x0C06DFFCu);
	r2 = r8;  /* 0C06DFFC mov Rm,Rn */
	r2 += r11;  /* 0C06DFFE add Rm,Rn */
	r0 = R32(r2); UPD(0x0C06E002u, 3);  /* 0C06E000 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06E002 tst Rm,Rn */
	{ u32 c_ = T; r5 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06E02Eu, 4); goto L_0C06E02E; } goto L_0C06E008; }  /* 0C06E004 bt/s */
L_0C06E008: BLKS(0x0C06E008u);
	r6 = 0x24Cu; UPD(0x0C06E00Au, 2);  /* 0C06E008 mov.w @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C06E00A mov #imm,Rn */
	r6 += r2;  /* 0C06E00C add Rm,Rn */
	r6 += 0x2u;  /* 0C06E00E add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r6); UPD(0x0C06E012u, 4);  /* 0C06E010 mov.w @Rm,Rn */
	r6 += 0xFFFFFFFEu;  /* 0C06E012 add #imm,Rn */
	r5 = r3;  /* 0C06E014 mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r6); UPD(0x0C06E018u, 3);  /* 0C06E016 mov.w @Rm,Rn */
	IF(0x0C06E018u); ARG0(0x45ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C06E018 shad Rm,Rn */
	IF(0x0C06E01Au); ARG0(0x40ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C06E01A shad Rm,Rn */
	r5 ^= r1;  /* 0C06E01C xor Rm,Rn */
	r0 &= r5;  /* 0C06E01E and Rm,Rn */
	r0 &= 0x1u;  /* 0C06E020 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06E022 tst Rm,Rn */
	if (!T) { UPD(0x0C06E090u, 9); goto L_0C06E090; }  /* 0C06E024 bf */
L_0C06E026: BLKS(0x0C06E026u);
	r2 = 0x100u; UPD(0x0C06E028u, 1);  /* 0C06E026 mov.w @(disp,pc),Rn */
	T = (r3 & r2) == 0;  /* 0C06E028 tst Rm,Rn */
	if (!T) { UPD(0x0C06E070u, 4); goto L_0C06E070; }  /* 0C06E02A bf */
L_0C06E02C: BLKS(0x0C06E02Cu);
	r5 = r9;  /* 0C06E02C mov Rm,Rn */
	UPD(0x0C06E02Eu, 1);
L_0C06E02E: BLKS(0x0C06E02Eu);
	r9 = 0x2A0u; UPD(0x0C06E030u, 1);  /* 0C06E02E mov.w @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C06E030 add #imm,Rn */
	r8 += r9;  /* 0C06E032 add Rm,Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C06E034 exts.w Rm,Rn */
	r0 = 0x1u;  /* 0C06E036 mov #imm,Rn */
	T = (s32)r9 > (s32)r0;  /* 0C06E038 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 = 0xFFFFFFFAu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06DFFCu, 8); goto L_0C06DFFC; } goto L_0C06E03E; }  /* 0C06E03A bf/s */
L_0C06E03E: BLKS(0x0C06E03Eu);
	r7 = 0xC2B039Cu; UPD(0x0C06E040u, 2);  /* 0C06E03E mov.l @(disp,pc),Rn */
	r10 = 0xC22E024u; UPD(0x0C06E042u, 1);  /* 0C06E040 mov.l @(disp,pc),Rn */
	r5 = 0x15u;  /* 0C06E042 mov #imm,Rn */
	r0 = R32(r7); UPD(0x0C06E046u, 2);  /* 0C06E044 mov.l @Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r10); UPD(0x0C06E048u, 1);  /* 0C06E046 mov.b @Rm,Rn */
	IF(0x0C06E048u); ARG0(0x406Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C06E048 shad Rm,Rn */
	r8 = 0xC0624D0u; UPD(0x0C06E04Cu, 2);  /* 0C06E04A mov.l @(disp,pc),Rn */
	r0 &= r12;  /* 0C06E04C and Rm,Rn */
	r0 &= 0x1u;  /* 0C06E04E and #imm,r0 */
	r11 = 0xC174898u; UPD(0x0C06E052u, 3);  /* 0C06E050 mov.l @(disp,pc),Rn */
	IF(0x0C06E052u); r0 <<= 2;  /* 0C06E052 shll2 Rn */
	IF(0x0C06E054u); r4 = R32(r0 + r11); UPD(0x0C06E056u, 2);  /* 0C06E054 mov.l @(r0,Rm),Rn */
	IF(0x0C06E056u); { u32 t_ = r8; PR = 0x0C06E05Au; r6 = 0xDu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C06E05Au); }  /* 0C06E056 jsr @Rn */
L_0C06E05A: BLKS(0x0C06E05Au);
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C06E05Cu, 1);  /* 0C06E05A mov.b @Rm,Rn */
L_0C06E05C: BLKS(0x0C06E05Cu);
	r15 = r14;  /* 0C06E05C mov Rm,Rn */
	IF(0x0C06E05Eu); PR = R32(r15); r15 += 4; UPD(0x0C06E060u, 2);  /* 0C06E05E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06E062u, 1);  /* 0C06E060 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06E064u, 1);  /* 0C06E062 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06E066u, 1);  /* 0C06E064 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06E068u, 1);  /* 0C06E066 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06E06Au, 1);  /* 0C06E068 mov.l @Rm+,Rn */
	IF(0x0C06E06Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06E06A rts */
L_0C06E070: BLKS(0x0C06E070u);
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C06E072u, 1);  /* 0C06E070 mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06E072 tst Rm,Rn */
	IF(0x0C06E074u); r4 = T;  /* 0C06E074 movt Rn */
	r0 = 0xC0C2160u; UPD(0x0C06E078u, 3);  /* 0C06E076 mov.l @(disp,pc),Rn */
	W8(r12, r4); UPD(0x0C06E07Au, 1);  /* 0C06E078 mov.b Rm,@Rn */
	IF(0x0C06E07Au); { u32 t_ = r0; PR = 0x0C06E07Eu; r4 = 0x5Fu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2160, 0x0C0C2160u, 0x0C06E07Eu); }  /* 0C06E07A jsr @Rn */
L_0C06E07E: BLKS(0x0C06E07Eu);
	{ r5 = r9; /* slot mov Rm,Rn */ UPD(0x0C06E02Eu, 3); goto L_0C06E02E; }  /* 0C06E07E bra */
L_0C06E090: BLKS(0x0C06E090u);
	r2 = 0xC3C86ECu; UPD(0x0C06E092u, 1);  /* 0C06E090 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C06E094u, 1);  /* 0C06E092 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C06E094 add #imm,Rn */
	r0 = r7 & 0xFF;  /* 0C06E096 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C06E098 cmp/eq #imm,r0 */
	W8(r2, r7); UPD(0x0C06E09Cu, 4);  /* 0C06E09A mov.b Rm,@Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06E05Cu, 3); goto L_0C06E05C; } goto L_0C06E0A0; }  /* 0C06E09C bf/s */
L_0C06E0A0: BLKS(0x0C06E0A0u);
	r3 = 0x0u;  /* 0C06E0A0 mov #imm,Rn */
	W8(r2, r3); UPD(0x0C06E0A4u, 3);  /* 0C06E0A2 mov.b Rm,@Rn */
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C06E05Cu, 3); goto L_0C06E05C; }  /* 0C06E0A4 bra */
}

/* FUN_0c06e0e0 */
void blk_f_0C06E0E0(sh3_t *c)
{
	LOCALS;
L_0C06E0E0: BLKS(0x0C06E0E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06E0E2u, 1);  /* 0C06E0E0 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s8)r5;  /* 0C06E0E2 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06E0E6u, 2);  /* 0C06E0E4 mov.l Rm,@-Rn */
	r5 = 0xAu;  /* 0C06E0E6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06E0EAu, 2);  /* 0C06E0E8 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06E0ECu, 1);  /* 0C06E0EA mov.l Rm,@-Rn */
	r10 = 0x7u;  /* 0C06E0EC mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06E0F0u, 2);  /* 0C06E0EE mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06E0F2u, 1);  /* 0C06E0F0 mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r6;  /* 0C06E0F2 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06E0F6u, 2);  /* 0C06E0F4 mov.l Rm,@-Rn */
	r13 = r7;  /* 0C06E0F6 mov Rm,Rn */
	IF(0x0C06E0F8u); r15 -= 4; W32(r15, PR); UPD(0x0C06E0FAu, 2);  /* 0C06E0F8 sts.l pr,@-Rn */
	r3 = 0xC0C2310u; UPD(0x0C06E0FCu, 1);  /* 0C06E0FA mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06E0FC add #imm,Rn */
	r14 = r15;  /* 0C06E0FE mov Rm,Rn */
	IF(0x0C06E100u); { u32 t_ = r3; PR = 0x0C06E104u; W32(r14, r1); /* slot mov.l Rm,@Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C06E104u); }  /* 0C06E100 jsr @Rn */
L_0C06E104: BLKS(0x0C06E104u);
	r7 = R32(r14); UPD(0x0C06E106u, 1);  /* 0C06E104 mov.l @Rm,Rn */
	r11 = r0;  /* 0C06E106 mov Rm,Rn */
	r0 = 0x5u;  /* 0C06E108 mov #imm,Rn */
	IF(0x0C06E10Au); ARG0(0x470Du); { s32 s_ = (s32)r0; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C06E10A shld Rm,Rn */
	r4 = 0xC1748A0u; UPD(0x0C06E10Eu, 4);  /* 0C06E10C mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C06E10E mov Rm,Rn */
	W32(r14, r7); UPD(0x0C06E112u, 2);  /* 0C06E110 mov.l Rm,@Rn */
	r0 = r4;  /* 0C06E112 mov Rm,Rn */
	r3 = 0xC233728u; UPD(0x0C06E116u, 2);  /* 0C06E114 mov.l @(disp,pc),Rn */
	r2 += r12;  /* 0C06E116 add Rm,Rn */
	IF(0x0C06E118u); r5 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C06E11Au, 2);  /* 0C06E118 mov.b @(r0,Rm),Rn */
	IF(0x0C06E11Au); r2 <<= 2;  /* 0C06E11A shll2 Rn */
	r3 += r2;  /* 0C06E11C add Rm,Rn */
	r5 |= r13;  /* 0C06E11E or Rm,Rn */
	r9 = r2;  /* 0C06E120 mov Rm,Rn */
	r8 = r3;  /* 0C06E122 mov Rm,Rn */
	W32(r3 + 0x20u, r5); UPD(0x0C06E126u, 6);  /* 0C06E124 mov.l Rm,@(disp,Rn) */
	r9 += 0x1Cu;  /* 0C06E126 add #imm,Rn */
	r8 += 0x1Cu;  /* 0C06E128 add #imm,Rn */
	IF(0x0C06E12Au); ;  /* 0C06E12A nop */
	UPD(0x0C06E12Cu, 3);
L_0C06E12C: BLKS(0x0C06E12Cu);
	r4 = r11;  /* 0C06E12C mov Rm,Rn */
	r11 = 0xC0C2310u; UPD(0x0C06E130u, 2);  /* 0C06E12E mov.l @(disp,pc),Rn */
	IF(0x0C06E130u); { u32 t_ = r11; PR = 0x0C06E134u; r5 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C06E134u); }  /* 0C06E130 jsr @Rn */
L_0C06E134: BLKS(0x0C06E134u);
	T = (r0 & r0) == 0;  /* 0C06E134 tst Rm,Rn */
	{ u32 c_ = !T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06E1A0u, 4); goto L_0C06E1A0; } goto L_0C06E13A; }  /* 0C06E136 bf/s */
L_0C06E13A: BLKS(0x0C06E13Au);
	r6 = 0xC1748ACu; UPD(0x0C06E13Cu, 2);  /* 0C06E13A mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C06E13C mov Rm,Rn */
	IF(0x0C06E13Eu); r5 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C06E140u, 2);  /* 0C06E13E mov.b @(r0,Rm),Rn */
	r5 |= r13;  /* 0C06E140 or Rm,Rn */
	W32(r8, r5); UPD(0x0C06E144u, 2);  /* 0C06E142 mov.l Rm,@Rn */
L_0C06E144: BLKS(0x0C06E144u);
	r2 = 0xC1740C4u; UPD(0x0C06E146u, 1);  /* 0C06E144 mov.l @(disp,pc),Rn */
	r0 = R32(r2 + 0x8u); UPD(0x0C06E148u, 1);  /* 0C06E146 mov.l @(disp,Rm),Rn */
	T = r12 == r0;  /* 0C06E148 cmp/eq Rm,Rn */
	{ u32 c_ = T; r5 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06E190u, 4); goto L_0C06E190; } goto L_0C06E14E; }  /* 0C06E14A bt/s */
L_0C06E14E: BLKS(0x0C06E14Eu);
	r6 = r10;  /* 0C06E14E mov Rm,Rn */
	UPD(0x0C06E150u, 2);
L_0C06E150: BLKS(0x0C06E150u);
	r6 += 0xFFFFFFFFu;  /* 0C06E150 add #imm,Rn */
	r10 = (u32)(s32)(s8)r6;  /* 0C06E152 exts.b Rm,Rn */
	r9 += 0xFFFFFFFCu;  /* 0C06E154 add #imm,Rn */
	IF(0x0C06E156u); T = (s32)r10 > 0;  /* 0C06E156 cmp/pl Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFFCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06E12Cu, 7); goto L_0C06E12C; } UPD(0x0C06E15Cu, 1); goto L_0C06E15C; }  /* 0C06E158 bt/s */
L_0C06E15C: BLKS(0x0C06E15Cu);
	r4 = 0xC1748ACu; UPD(0x0C06E15Eu, 1);  /* 0C06E15C mov.l @(disp,pc),Rn */
	r12 += r10;  /* 0C06E15E add Rm,Rn */
	r7 = R32(r14); UPD(0x0C06E162u, 2);  /* 0C06E160 mov.l @Rm,Rn */
	r0 = r4;  /* 0C06E162 mov Rm,Rn */
	IF(0x0C06E164u); r8 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06E166u, 2);  /* 0C06E164 mov.b @(r0,Rm),Rn */
	r12 += r7;  /* 0C06E166 add Rm,Rn */
	IF(0x0C06E168u); r12 <<= 2;  /* 0C06E168 shll2 Rn */
	r10 = 0xC233728u; UPD(0x0C06E16Cu, 3);  /* 0C06E16A mov.l @(disp,pc),Rn */
	r8 |= r13;  /* 0C06E16C or Rm,Rn */
	r0 = r12;  /* 0C06E16E mov Rm,Rn */
	IF(0x0C06E170u); W32(r0 + r10, r8); UPD(0x0C06E172u, 3);  /* 0C06E170 mov.l Rm,@(r0,Rn) */
	r14 += 0x4u;  /* 0C06E172 add #imm,Rn */
	r15 = r14;  /* 0C06E174 mov Rm,Rn */
	IF(0x0C06E176u); PR = R32(r15); r15 += 4; UPD(0x0C06E178u, 3);  /* 0C06E176 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06E17Au, 1);  /* 0C06E178 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06E17Cu, 1);  /* 0C06E17A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06E17Eu, 1);  /* 0C06E17C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06E180u, 1);  /* 0C06E17E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06E182u, 1);  /* 0C06E180 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06E184u, 1);  /* 0C06E182 mov.l @Rm+,Rn */
	IF(0x0C06E184u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06E184 rts */
L_0C06E190: BLKS(0x0C06E190u);
	T = (s32)r10 > (s32)r5;  /* 0C06E190 cmp/gt Rm,Rn */
	{ u32 c_ = T; r6 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06E150u, 4); goto L_0C06E150; } goto L_0C06E196; }  /* 0C06E192 bt/s */
L_0C06E196: BLKS(0x0C06E196u);
	r9 = r10;  /* 0C06E196 mov Rm,Rn */
	r9 += 0xFFFFFFFFu;  /* 0C06E198 add #imm,Rn */
	{ r10 = (u32)(s32)(s8)r9; /* slot exts.b Rm,Rn */ UPD(0x0C06E15Cu, 6); goto L_0C06E15C; }  /* 0C06E19A bra */
L_0C06E1A0: BLKS(0x0C06E1A0u);
	r3 = 0xC1748A0u; UPD(0x0C06E1A2u, 1);  /* 0C06E1A0 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C06E1A2 mov Rm,Rn */
	IF(0x0C06E1A4u); r7 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C06E1A6u, 2);  /* 0C06E1A4 mov.b @(r0,Rm),Rn */
	r4 = 0xC233728u; UPD(0x0C06E1A8u, 1);  /* 0C06E1A6 mov.l @(disp,pc),Rn */
	r7 |= r13;  /* 0C06E1A8 or Rm,Rn */
	r0 = r9;  /* 0C06E1AA mov Rm,Rn */
	{ IF(0x0C06E1AEu); W32(r0 + r4, r7); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C06E144u, 5); goto L_0C06E144; }  /* 0C06E1AC bra */
}

/* FUN_0c06e1d0 */
void blk_f_0C06E1D0(sh3_t *c)
{
	LOCALS;
L_0C06E1D0: BLKS(0x0C06E1D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06E1D2u, 1);  /* 0C06E1D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06E1D4u, 1);  /* 0C06E1D2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06E1D6u, 1);  /* 0C06E1D4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06E1D8u, 1);  /* 0C06E1D6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06E1DAu, 1);  /* 0C06E1D8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06E1DCu, 1);  /* 0C06E1DA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06E1DEu, 1);  /* 0C06E1DC mov.l Rm,@-Rn */
	r0 = 0xC2380B2u; UPD(0x0C06E1E0u, 1);  /* 0C06E1DE mov.l @(disp,pc),Rn */
	IF(0x0C06E1E0u); r15 -= 4; W32(r15, PR); UPD(0x0C06E1E2u, 1);  /* 0C06E1E0 sts.l pr,@-Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C06E1E4u, 1);  /* 0C06E1E2 mov.w @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C06E1E4 add #imm,Rn */
	r0 = r2;  /* 0C06E1E6 mov Rm,Rn */
	r14 = r15;  /* 0C06E1E8 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C06E1EA and #imm,r0 */
	W32(r14, r0); UPD(0x0C06E1EEu, 5);  /* 0C06E1EC mov.l Rm,@Rn */
	r0 = 0x0u;  /* 0C06E1EE mov #imm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C06E1F2u, 2);  /* 0C06E1F0 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r0); UPD(0x0C06E1F4u, 1);  /* 0C06E1F2 mov.l Rm,@(disp,Rn) */
L_0C06E1F4: BLKS(0x0C06E1F4u);
	r3 = 0x680u; UPD(0x0C06E1F6u, 1);  /* 0C06E1F4 mov.w @(disp,pc),Rn */
	r6 = R32(r14); UPD(0x0C06E1F8u, 1);  /* 0C06E1F6 mov.l @Rm,Rn */
	IF(0x0C06E1F8u); MACL = r6 * r3;  /* 0C06E1F8 mul.l Rm,Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C06E1FCu, 3);  /* 0C06E1FA mov.l @(disp,Rm),Rn */
	r7 = 0xC2A6D9Cu; UPD(0x0C06E1FEu, 1);  /* 0C06E1FC mov.l @(disp,pc),Rn */
	IF(0x0C06E1FEu); r3 = MACL;  /* 0C06E1FE sts macl,Rn */
	r3 += r5;  /* 0C06E200 add Rm,Rn */
	r3 += r7;  /* 0C06E202 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C06E206u, 4);  /* 0C06E204 mov.l @Rm,Rn */
	r4 = 0x8000000u; UPD(0x0C06E208u, 1);  /* 0C06E206 mov.l @(disp,pc),Rn */
	T = (r1 & r4) == 0;  /* 0C06E208 tst Rm,Rn */
	if (T) { UPD(0x0C06E308u, 4); goto L_0C06E308; }  /* 0C06E20A bt */
L_0C06E20C: BLKS(0x0C06E20Cu);
	r0 = R32(r3 + 0x4u); UPD(0x0C06E20Eu, 1);  /* 0C06E20C mov.l @(disp,Rm),Rn */
	r4 = 0x3u;  /* 0C06E20E mov #imm,Rn */
	IF(0x0C06E210u); ARG0(0x404Du); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06E210 shld Rm,Rn */
	r2 = 0xC17E1B0u; UPD(0x0C06E214u, 3);  /* 0C06E212 mov.l @(disp,pc),Rn */
	r1 = 0x4u;  /* 0C06E214 mov #imm,Rn */
	IF(0x0C06E216u); r13 = R32(r0 + r2); UPD(0x0C06E218u, 2);  /* 0C06E216 mov.l @(r0,Rm),Rn */
	r12 = 0x3u;  /* 0C06E218 mov #imm,Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C06E21Cu, 2);  /* 0C06E21A mov.l @(disp,Rm),Rn */
	r10 = R32(r3 + 0xCu); UPD(0x0C06E21Eu, 1);  /* 0C06E21C mov.l @(disp,Rm),Rn */
	IF(0x0C06E21Eu); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06E21E shld Rm,Rn */
	IF(0x0C06E220u); ARG0(0x4ACDu); { s32 s_ = (s32)r12; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = 0; else r10 >>= ((~s_ & 31) + 1); }  /* 0C06E220 shld Rm,Rn */
	IF(0x0C06E222u); r11 = R32(r0 + r13); UPD(0x0C06E224u, 3);  /* 0C06E222 mov.l @(r0,Rm),Rn */
	r10 += r11;  /* 0C06E224 add Rm,Rn */
	r4 = R32(r10 + 0x4u); UPD(0x0C06E228u, 2);  /* 0C06E226 mov.l @(disp,Rm),Rn */
	r9 = 0xC3C5450u; UPD(0x0C06E22Au, 1);  /* 0C06E228 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r4); r4 += 4; r8 = v_; } UPD(0x0C06E22Cu, 1);  /* 0C06E22A mov.l @Rm+,Rn */
	T = (r8 & r8) == 0;  /* 0C06E22C tst Rm,Rn */
	{ u32 c_ = T; W32(r9, r8); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06E308u, 4); goto L_0C06E308; } UPD(0x0C06E232u, 1); goto L_0C06E232; }  /* 0C06E22E bt/s */
L_0C06E232: BLKS(0x0C06E232u);
	r0 = r7;  /* 0C06E232 mov Rm,Rn */
	UPD(0x0C06E234u, 1);
L_0C06E234: BLKS(0x0C06E234u);
	r13 = R32(r14); UPD(0x0C06E236u, 1);  /* 0C06E234 mov.l @Rm,Rn */
	r12 = 0x680u; UPD(0x0C06E238u, 1);  /* 0C06E236 mov.w @(disp,pc),Rn */
	IF(0x0C06E238u); MACL = r13 * r12;  /* 0C06E238 mul.l Rm,Rn */
	{ u32 v_ = R32(r4); r4 += 4; r1 = v_; } UPD(0x0C06E23Cu, 3);  /* 0C06E23A mov.l @Rm+,Rn */
	r7 = 0xC2A6D48u; UPD(0x0C06E23Eu, 1);  /* 0C06E23C mov.l @(disp,pc),Rn */
	IF(0x0C06E23Eu); r6 = MACL;  /* 0C06E23E sts macl,Rn */
	r11 = R32(r14 + 0xCu); UPD(0x0C06E242u, 2);  /* 0C06E240 mov.l @(disp,Rm),Rn */
	W32(r7, r1); UPD(0x0C06E244u, 1);  /* 0C06E242 mov.l Rm,@Rn */
	r6 += r11;  /* 0C06E244 add Rm,Rn */
	r6 += r0;  /* 0C06E246 add Rm,Rn */
	{ u32 v_ = R32(r4); r4 += 4; r10 = v_; } UPD(0x0C06E24Au, 3);  /* 0C06E248 mov.l @Rm+,Rn */
	r9 = R32(r6 + 0x10u); UPD(0x0C06E24Cu, 1);  /* 0C06E24A mov.l @(disp,Rm),Rn */
	r8 = 0xC2B1A40u; UPD(0x0C06E24Eu, 1);  /* 0C06E24C mov.l @(disp,pc),Rn */
	r9 += r10;  /* 0C06E24E add Rm,Rn */
	W32(r8, r9); UPD(0x0C06E252u, 2);  /* 0C06E250 mov.l Rm,@Rn */
	r5 = R32(r6 + 0x14u); UPD(0x0C06E254u, 1);  /* 0C06E252 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r4); r4 += 4; r3 = v_; } UPD(0x0C06E256u, 1);  /* 0C06E254 mov.l @Rm+,Rn */
	r7 = 0xC2975F4u; UPD(0x0C06E258u, 1);  /* 0C06E256 mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C06E258 add Rm,Rn */
	r13 = 0xBFu; UPD(0x0C06E25Cu, 2);  /* 0C06E25A mov.w @(disp,pc),Rn */
	r11 = 0x864Cu; UPD(0x0C06E25Eu, 1);  /* 0C06E25C mov.l @(disp,pc),Rn */
	W32(r7, r5); UPD(0x0C06E260u, 1);  /* 0C06E25E mov.l Rm,@Rn */
L_0C06E260: BLKS(0x0C06E260u);
	r7 = 0xC286578u; UPD(0x0C06E262u, 1);  /* 0C06E260 mov.l @(disp,pc),Rn */
	r7 += r11;  /* 0C06E262 add Rm,Rn */
	r3 = R32(r7); UPD(0x0C06E266u, 2);  /* 0C06E264 mov.l @Rm,Rn */
	r5 = 0x2000000u; UPD(0x0C06E268u, 1);  /* 0C06E266 mov.l @(disp,pc),Rn */
	T = (r3 & r5) == 0;  /* 0C06E268 tst Rm,Rn */
	{ u32 c_ = T; r3 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06E2F2u, 4); goto L_0C06E2F2; } goto L_0C06E26E; }  /* 0C06E26A bt/s */
L_0C06E26E: BLKS(0x0C06E26Eu);
	r12 = 0xA8u; UPD(0x0C06E270u, 2);  /* 0C06E26E mov.w @(disp,pc),Rn */
	r12 += r7;  /* 0C06E270 add Rm,Rn */
	r2 = r12;  /* 0C06E272 mov Rm,Rn */
	r2 += 0x3u;  /* 0C06E274 add #imm,Rn */
	r12 += 0x1u;  /* 0C06E276 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r12); UPD(0x0C06E27Au, 5);  /* 0C06E278 mov.b @Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C06E27Cu, 1);  /* 0C06E27A mov.b @Rm,Rn */
	r8 = r10 & 0xFF;  /* 0C06E27C extu.b Rm,Rn */
	r6 = r9 & 0xFF;  /* 0C06E27E extu.b Rm,Rn */
	T = r8 >= r6;  /* 0C06E280 cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C06E2F2u, 6); goto L_0C06E2F2; }  /* 0C06E282 bf */
L_0C06E284: BLKS(0x0C06E284u);
	r3 = R32(r7 + 0x1Cu); UPD(0x0C06E286u, 1);  /* 0C06E284 mov.l @(disp,Rm),Rn */
	r6 = 0xC28EDB8u; UPD(0x0C06E288u, 1);  /* 0C06E286 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r3); r3 += 4; r5 = v_; } UPD(0x0C06E28Au, 1);  /* 0C06E288 mov.l @Rm+,Rn */
	T = (r5 & r5) == 0;  /* 0C06E28A tst Rm,Rn */
	{ u32 c_ = T; W32(r6, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06E2F0u, 4); goto L_0C06E2F0; } UPD(0x0C06E290u, 1); goto L_0C06E290; }  /* 0C06E28C bt/s */
L_0C06E290: BLKS(0x0C06E290u);
	r9 = r7;  /* 0C06E290 mov Rm,Rn */
	IF(0x0C06E292u); ;  /* 0C06E292 nop */
	UPD(0x0C06E294u, 2);
L_0C06E294: BLKS(0x0C06E294u);
	{ u32 v_ = R32(r3); r3 += 4; r5 = v_; } UPD(0x0C06E296u, 1);  /* 0C06E294 mov.l @Rm+,Rn */
	r8 = 0xC297484u; UPD(0x0C06E298u, 1);  /* 0C06E296 mov.l @(disp,pc),Rn */
	W32(r8, r5); UPD(0x0C06E29Au, 1);  /* 0C06E298 mov.l Rm,@Rn */
	{ u32 v_ = R32(r3); r3 += 4; r6 = v_; } UPD(0x0C06E29Cu, 1);  /* 0C06E29A mov.l @Rm+,Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C06E29Eu, 1);  /* 0C06E29C mov.l @(disp,Rm),Rn */
	r12 = 0xC3B1B00u; UPD(0x0C06E2A0u, 1);  /* 0C06E29E mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C06E2A0 add Rm,Rn */
	W32(r12, r8); UPD(0x0C06E2A4u, 2);  /* 0C06E2A2 mov.l Rm,@Rn */
	r6 = R32(r9 + 0x28u); UPD(0x0C06E2A6u, 1);  /* 0C06E2A4 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r3); r3 += 4; r2 = v_; } UPD(0x0C06E2A8u, 1);  /* 0C06E2A6 mov.l @Rm+,Rn */
	r7 = 0xC3C4024u; UPD(0x0C06E2AAu, 1);  /* 0C06E2A8 mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C06E2AA add Rm,Rn */
	W32(r7, r6); UPD(0x0C06E2AEu, 2);  /* 0C06E2AC mov.l Rm,@Rn */
	r10 = 0xC2B1A40u; UPD(0x0C06E2B0u, 1);  /* 0C06E2AE mov.l @(disp,pc),Rn */
	r7 = R32(r10); UPD(0x0C06E2B2u, 1);  /* 0C06E2B0 mov.l @Rm,Rn */
	r7 -= r8;  /* 0C06E2B2 sub Rm,Rn */
	IF(0x0C06E2B4u); T = (s32)r7 >= 0;  /* 0C06E2B4 cmp/pz Rn */
	if (T) { UPD(0x0C06E2BAu, 5); goto L_0C06E2BA; }  /* 0C06E2B6 bt */
L_0C06E2B8: BLKS(0x0C06E2B8u);
	r7 = 0u - r7;  /* 0C06E2B8 neg Rm,Rn */
	UPD(0x0C06E2BAu, 1);
L_0C06E2BA: BLKS(0x0C06E2BAu);
	r12 = 0xC28EDB8u; UPD(0x0C06E2BCu, 1);  /* 0C06E2BA mov.l @(disp,pc),Rn */
	r10 = 0xFFFFFFFu; UPD(0x0C06E2BEu, 1);  /* 0C06E2BC mov.l @(disp,pc),Rn */
	r8 = R32(r12); UPD(0x0C06E2C0u, 1);  /* 0C06E2BE mov.l @Rm,Rn */
	r2 = 0xC3C5450u; UPD(0x0C06E2C2u, 1);  /* 0C06E2C0 mov.l @(disp,pc),Rn */
	r8 &= r10;  /* 0C06E2C2 and Rm,Rn */
	r10 = R32(r2); UPD(0x0C06E2C6u, 2);  /* 0C06E2C4 mov.l @Rm,Rn */
	r10 += r8;  /* 0C06E2C6 add Rm,Rn */
	T = (s32)r7 >= (s32)r10;  /* 0C06E2C8 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C06E2E4u, 5); goto L_0C06E2E4; }  /* 0C06E2CA bt */
L_0C06E2CC: BLKS(0x0C06E2CCu);
	r7 = 0xC2975F4u; UPD(0x0C06E2CEu, 1);  /* 0C06E2CC mov.l @(disp,pc),Rn */
	r2 = R32(r7); UPD(0x0C06E2D0u, 1);  /* 0C06E2CE mov.l @Rm,Rn */
	r2 -= r6;  /* 0C06E2D0 sub Rm,Rn */
	IF(0x0C06E2D2u); T = (s32)r2 >= 0;  /* 0C06E2D2 cmp/pz Rn */
	if (T) { UPD(0x0C06E2D8u, 5); goto L_0C06E2D8; }  /* 0C06E2D4 bt */
L_0C06E2D6: BLKS(0x0C06E2D6u);
	r2 = 0u - r2;  /* 0C06E2D6 neg Rm,Rn */
	UPD(0x0C06E2D8u, 1);
L_0C06E2D8: BLKS(0x0C06E2D8u);
	r8 = 0xC2A6D48u; UPD(0x0C06E2DAu, 1);  /* 0C06E2D8 mov.l @(disp,pc),Rn */
	r6 = R32(r8); UPD(0x0C06E2DCu, 1);  /* 0C06E2DA mov.l @Rm,Rn */
	r6 += r5;  /* 0C06E2DC add Rm,Rn */
	T = (s32)r2 >= (s32)r6;  /* 0C06E2DE cmp/ge Rm,Rn */
	{ u32 c_ = !T; r7 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C06E380u, 5); goto L_0C06E380; } UPD(0x0C06E2E4u, 1); goto L_0C06E2E4; }  /* 0C06E2E0 bf/s */
L_0C06E2E4: BLKS(0x0C06E2E4u);
	{ u32 v_ = R32(r3); r3 += 4; r5 = v_; } UPD(0x0C06E2E6u, 1);  /* 0C06E2E4 mov.l @Rm+,Rn */
	r12 = 0xC28EDB8u; UPD(0x0C06E2E8u, 1);  /* 0C06E2E6 mov.l @(disp,pc),Rn */
	T = (r5 & r5) == 0;  /* 0C06E2E8 tst Rm,Rn */
	{ u32 c_ = !T; W32(r12, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06E294u, 4); goto L_0C06E294; } UPD(0x0C06E2EEu, 1); goto L_0C06E2EE; }  /* 0C06E2EA bf/s */
L_0C06E2EE: BLKS(0x0C06E2EEu);
	IF(0x0C06E2EEu); ;  /* 0C06E2EE nop */
	UPD(0x0C06E2F0u, 1);
L_0C06E2F0: BLKS(0x0C06E2F0u);
	r3 = r13;  /* 0C06E2F0 mov Rm,Rn */
	UPD(0x0C06E2F2u, 1);
L_0C06E2F2: BLKS(0x0C06E2F2u);
	r13 = 0xFFFFFF4Cu; UPD(0x0C06E2F4u, 1);  /* 0C06E2F2 mov.w @(disp,pc),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C06E2F4 add #imm,Rn */
	r11 += r13;  /* 0C06E2F6 add Rm,Rn */
	r13 = (u32)(s32)(s16)r3;  /* 0C06E2F8 exts.w Rm,Rn */
	IF(0x0C06E2FAu); T = (s32)r13 >= 0;  /* 0C06E2FA cmp/pz Rn */
	if (T) { UPD(0x0C06E260u, 7); goto L_0C06E260; }  /* 0C06E2FC bt */
L_0C06E2FE: BLKS(0x0C06E2FEu);
	{ u32 v_ = R32(r4); r4 += 4; r11 = v_; } UPD(0x0C06E300u, 1);  /* 0C06E2FE mov.l @Rm+,Rn */
	r9 = 0xC3C5450u; UPD(0x0C06E302u, 1);  /* 0C06E300 mov.l @(disp,pc),Rn */
	T = (r11 & r11) == 0;  /* 0C06E302 tst Rm,Rn */
	{ u32 c_ = !T; W32(r9, r11); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06E234u, 4); goto L_0C06E234; } UPD(0x0C06E308u, 1); goto L_0C06E308; }  /* 0C06E304 bf/s */
L_0C06E308: BLKS(0x0C06E308u);
	r7 = R32(r14 + 0x4u); UPD(0x0C06E30Au, 1);  /* 0C06E308 mov.l @(disp,Rm),Rn */
L_0C06E30A: BLKS(0x0C06E30Au);
	r4 = 0x1Fu;  /* 0C06E30A mov #imm,Rn */
	UPD(0x0C06E30Cu, 1);
L_0C06E30C: BLKS(0x0C06E30Cu);
	r7 += 0x1u;  /* 0C06E30C add #imm,Rn */
	r0 = (u32)(s32)(s16)r7;  /* 0C06E30E exts.w Rm,Rn */
	r6 = R32(r14 + 0xCu); UPD(0x0C06E312u, 3);  /* 0C06E310 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C06E314u, 1);  /* 0C06E312 mov.l Rm,@(disp,Rn) */
	r6 += 0x34u;  /* 0C06E314 add #imm,Rn */
	r8 = R32(r14 + 0x4u); UPD(0x0C06E318u, 2);  /* 0C06E316 mov.l @(disp,Rm),Rn */
	T = (s32)r8 > (s32)r4;  /* 0C06E318 cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06E322u, 4); goto L_0C06E322; } UPD(0x0C06E31Eu, 1); goto L_0C06E31E; }  /* 0C06E31A bt/s */
L_0C06E31E: BLKS(0x0C06E31Eu);
	{ IF(0x0C06E320u); ; /* slot nop */ UPD(0x0C06E1F4u, 3); goto L_0C06E1F4; }  /* 0C06E31E bra */
L_0C06E322: BLKS(0x0C06E322u);
	r14 += 0x14u;  /* 0C06E322 add #imm,Rn */
	r15 = r14;  /* 0C06E324 mov Rm,Rn */
	IF(0x0C06E326u); PR = R32(r15); r15 += 4; UPD(0x0C06E328u, 3);  /* 0C06E326 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06E32Au, 1);  /* 0C06E328 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06E32Cu, 1);  /* 0C06E32A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06E32Eu, 1);  /* 0C06E32C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06E330u, 1);  /* 0C06E32E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06E332u, 1);  /* 0C06E330 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06E334u, 1);  /* 0C06E332 mov.l @Rm+,Rn */
	IF(0x0C06E334u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06E334 rts */
L_0C06E380: BLKS(0x0C06E380u);
	r15 += 0xFFFFFFF8u;  /* 0C06E380 add #imm,Rn */
	r10 = 0x680u; UPD(0x0C06E384u, 2);  /* 0C06E382 mov.w @(disp,pc),Rn */
	IF(0x0C06E384u); MACL = r7 * r10;  /* 0C06E384 mul.l Rm,Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C06E388u, 3);  /* 0C06E386 mov.l @(disp,Rm),Rn */
	IF(0x0C06E388u); r10 = MACL;  /* 0C06E388 sts macl,Rn */
	r3 = 0xC2A6D9Cu; UPD(0x0C06E38Cu, 2);  /* 0C06E38A mov.l @(disp,pc),Rn */
	r10 += r5;  /* 0C06E38C add Rm,Rn */
	r10 += r3;  /* 0C06E38E add Rm,Rn */
	r4 = r10;  /* 0C06E390 mov Rm,Rn */
	r4 += 0x2Cu;  /* 0C06E392 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C06E396u, 5);  /* 0C06E394 mov.w @Rm,Rn */
	r7 = 0x8u;  /* 0C06E396 mov #imm,Rn */
	r2 = 0x1C0u; UPD(0x0C06E39Au, 2);  /* 0C06E398 mov.w @(disp,pc),Rn */
	r6 = r0 & 0xFFFF;  /* 0C06E39A extu.w Rm,Rn */
	r8 = 0xC0BD5B0u; UPD(0x0C06E39Eu, 2);  /* 0C06E39C mov.l @(disp,pc),Rn */
	W32(r15, r6); UPD(0x0C06E3A0u, 1);  /* 0C06E39E mov.l Rm,@Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C06E3A2u, 1);  /* 0C06E3A0 mov.l Rm,@(disp,Rn) */
	r6 = 0x14u;  /* 0C06E3A2 mov #imm,Rn */
	W32(r14 + 0x8u, r4); UPD(0x0C06E3A6u, 2);  /* 0C06E3A4 mov.l Rm,@(disp,Rn) */
	r5 = R32(r10 + 0x14u); UPD(0x0C06E3A8u, 1);  /* 0C06E3A6 mov.l @(disp,Rm),Rn */
	IF(0x0C06E3A8u); { u32 t_ = r8; PR = 0x0C06E3ACu; r4 = R32(r10 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD5B0, 0x0C0BD5B0u, 0x0C06E3ACu); }  /* 0C06E3A8 jsr @Rn */
L_0C06E3AC: BLKS(0x0C06E3ACu);
	r7 = 0x2A0u; UPD(0x0C06E3AEu, 1);  /* 0C06E3AC mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C06E3B0u, 1);  /* 0C06E3AE mov.l @Rm,Rn */
	IF(0x0C06E3B0u); MACL = r1 * r7;  /* 0C06E3B0 mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C06E3B4u, 3);  /* 0C06E3B2 mov.l @(disp,pc),Rn */
	r3 = 0x290u; UPD(0x0C06E3B6u, 1);  /* 0C06E3B4 mov.w @(disp,pc),Rn */
	IF(0x0C06E3B6u); r0 = MACL;  /* 0C06E3B6 sts macl,Rn */
	r0 += r5;  /* 0C06E3B8 add Rm,Rn */
	r0 += r3;  /* 0C06E3BA add Rm,Rn */
	r4 = R32(r0); UPD(0x0C06E3BEu, 4);  /* 0C06E3BC mov.l @Rm,Rn */
	r4 += 0xAu;  /* 0C06E3BE add #imm,Rn */
	W32(r0, r4); UPD(0x0C06E3C2u, 2);  /* 0C06E3C0 mov.l Rm,@Rn */
	r3 = 0x800000u; UPD(0x0C06E3C4u, 1);  /* 0C06E3C2 mov.l @(disp,pc),Rn */
	r2 = R32(r10); UPD(0x0C06E3C6u, 1);  /* 0C06E3C4 mov.l @Rm,Rn */
	r3 &= r2;  /* 0C06E3C6 and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06E3C8 tst Rm,Rn */
	{ u32 c_ = T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06E460u, 5); goto L_0C06E460; } UPD(0x0C06E3CEu, 1); goto L_0C06E3CE; }  /* 0C06E3CA bt/s */
L_0C06E3CE: BLKS(0x0C06E3CEu);
	r3 = 0xC28EDB8u; UPD(0x0C06E3D0u, 1);  /* 0C06E3CE mov.l @(disp,pc),Rn */
	r9 = 0x20000000u; UPD(0x0C06E3D2u, 1);  /* 0C06E3D0 mov.l @(disp,pc),Rn */
	r0 = R32(r3); UPD(0x0C06E3D4u, 1);  /* 0C06E3D2 mov.l @Rm,Rn */
	T = (r0 & r9) == 0;  /* 0C06E3D4 tst Rm,Rn */
	{ u32 c_ = !T; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C06E30Au, 4); goto L_0C06E30A; } UPD(0x0C06E3DAu, 1); goto L_0C06E3DA; }  /* 0C06E3D6 bf/s */
L_0C06E3DA: BLKS(0x0C06E3DAu);
	r9 = 0xC286578u; UPD(0x0C06E3DCu, 1);  /* 0C06E3DA mov.l @(disp,pc),Rn */
	r9 += r11;  /* 0C06E3DC add Rm,Rn */
	r5 = R32(r9); UPD(0x0C06E3E0u, 2);  /* 0C06E3DE mov.l @Rm,Rn */
	r11 = 0x20020000u; UPD(0x0C06E3E2u, 1);  /* 0C06E3E0 mov.l @(disp,pc),Rn */
	T = (r5 & r11) == 0;  /* 0C06E3E2 tst Rm,Rn */
	{ u32 c_ = !T; r4 = 0x1Fu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06E30Cu, 4); goto L_0C06E30C; } goto L_0C06E3E8; }  /* 0C06E3E4 bf/s */
L_0C06E3E8: BLKS(0x0C06E3E8u);
	r12 = R32(r14); UPD(0x0C06E3EAu, 2);  /* 0C06E3E8 mov.l @Rm,Rn */
	r5 = r13;  /* 0C06E3EA mov Rm,Rn */
	r8 = 0x680u; UPD(0x0C06E3EEu, 2);  /* 0C06E3EC mov.w @(disp,pc),Rn */
	r4 = r12;  /* 0C06E3EE mov Rm,Rn */
	IF(0x0C06E3F0u); MACL = r12 * r8;  /* 0C06E3F0 mul.l Rm,Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C06E3F4u, 4);  /* 0C06E3F2 mov.l @(disp,Rm),Rn */
	IF(0x0C06E3F4u); r8 = MACL;  /* 0C06E3F4 sts macl,Rn */
	r7 = 0xC2A6D9Cu; UPD(0x0C06E3F8u, 2);  /* 0C06E3F6 mov.l @(disp,pc),Rn */
	r8 += r2;  /* 0C06E3F8 add Rm,Rn */
	r13 = 0xC0A8E90u; UPD(0x0C06E3FCu, 2);  /* 0C06E3FA mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C06E3FC add Rm,Rn */
	r6 = R32(r8); UPD(0x0C06E400u, 2);  /* 0C06E3FE mov.l @Rm,Rn */
	IF(0x0C06E400u); { u32 t_ = r13; PR = 0x0C06E404u; r7 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8E90, 0x0C0A8E90u, 0x0C06E404u); }  /* 0C06E400 jsr @Rn */
L_0C06E404: BLKS(0x0C06E404u);
	T = (r0 & r0) == 0;  /* 0C06E404 tst Rm,Rn */
	if (T) { UPD(0x0C06E42Au, 4); goto L_0C06E42A; }  /* 0C06E406 bt */
L_0C06E408: BLKS(0x0C06E408u);
	r1 = R32(r8); UPD(0x0C06E40Au, 1);  /* 0C06E408 mov.l @Rm,Rn */
	r6 = 0x800000u; UPD(0x0C06E40Cu, 1);  /* 0C06E40A mov.l @(disp,pc),Rn */
	T = (r1 & r6) == 0;  /* 0C06E40C tst Rm,Rn */
	if (!T) { UPD(0x0C06E430u, 4); goto L_0C06E430; }  /* 0C06E40E bf */
L_0C06E410: BLKS(0x0C06E410u);
	r9 += 0x40u;  /* 0C06E410 add #imm,Rn */
	r5 = 0x2A0u; UPD(0x0C06E414u, 2);  /* 0C06E412 mov.w @(disp,pc),Rn */
	r13 = R32(r14); UPD(0x0C06E416u, 1);  /* 0C06E414 mov.l @Rm,Rn */
	IF(0x0C06E416u); MACL = r13 * r5;  /* 0C06E416 mul.l Rm,Rn */
	r11 = 0xC29D1D8u; UPD(0x0C06E41Au, 3);  /* 0C06E418 mov.l @(disp,pc),Rn */
	IF(0x0C06E41Au); r10 = MACL;  /* 0C06E41A sts macl,Rn */
	r3 = 0x290u; UPD(0x0C06E41Eu, 2);  /* 0C06E41C mov.w @(disp,pc),Rn */
	r10 += r11;  /* 0C06E41E add Rm,Rn */
	r10 += r3;  /* 0C06E420 add Rm,Rn */
	r4 = R32(r10); UPD(0x0C06E424u, 3);  /* 0C06E422 mov.l @Rm,Rn */
	r0 = R32(r9); UPD(0x0C06E426u, 1);  /* 0C06E424 mov.l @Rm,Rn */
	r4 += r0;  /* 0C06E426 add Rm,Rn */
	W32(r10, r4); UPD(0x0C06E42Au, 2);  /* 0C06E428 mov.l Rm,@Rn */
L_0C06E42A: BLKS(0x0C06E42Au);
	{ r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C06E30Au, 3); goto L_0C06E30A; }  /* 0C06E42A bra */
L_0C06E430: BLKS(0x0C06E430u);
	r1 = R32(r14); UPD(0x0C06E432u, 1);  /* 0C06E430 mov.l @Rm,Rn */
	r7 = r9;  /* 0C06E432 mov Rm,Rn */
	r10 = 0x2A0u; UPD(0x0C06E436u, 2);  /* 0C06E434 mov.w @(disp,pc),Rn */
	r9 += 0x40u;  /* 0C06E436 add #imm,Rn */
	IF(0x0C06E438u); MACL = r1 * r10;  /* 0C06E438 mul.l Rm,Rn */
	r6 = 0xC29D1D8u; UPD(0x0C06E43Cu, 4);  /* 0C06E43A mov.l @(disp,pc),Rn */
	r7 += 0x44u;  /* 0C06E43C add #imm,Rn */
	r8 = 0xC06A360u; UPD(0x0C06E440u, 2);  /* 0C06E43E mov.l @(disp,pc),Rn */
	IF(0x0C06E440u); r12 = MACL;  /* 0C06E440 sts macl,Rn */
	r2 = 0x290u; UPD(0x0C06E444u, 2);  /* 0C06E442 mov.w @(disp,pc),Rn */
	r12 += r6;  /* 0C06E444 add Rm,Rn */
	r4 = R32(r9); UPD(0x0C06E448u, 2);  /* 0C06E446 mov.l @Rm,Rn */
	r12 += r2;  /* 0C06E448 add Rm,Rn */
	IF(0x0C06E44Au); { u32 t_ = r8; PR = 0x0C06E44Eu; r5 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C06A360, 0x0C06A360u, 0x0C06E44Eu); }  /* 0C06E44A jsr @Rn */
L_0C06E44E: BLKS(0x0C06E44Eu);
	r9 = R32(r12); UPD(0x0C06E450u, 1);  /* 0C06E44E mov.l @Rm,Rn */
	r9 += r0;  /* 0C06E450 add Rm,Rn */
	{ W32(r12, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C06E308u, 4); goto L_0C06E308; }  /* 0C06E452 bra */
L_0C06E460: BLKS(0x0C06E460u);
	r8 = R32(r10 + 0x8u); UPD(0x0C06E462u, 1);  /* 0C06E460 mov.l @(disp,Rm),Rn */
	r0 = 0xC1748F4u; UPD(0x0C06E464u, 1);  /* 0C06E462 mov.l @(disp,pc),Rn */
	IF(0x0C06E464u); r8 <<= 2;  /* 0C06E464 shll2 Rn */
	r8 += r0;  /* 0C06E466 add Rm,Rn */
	r4 = 0xF7FFFFFFu; UPD(0x0C06E46Au, 3);  /* 0C06E468 mov.l @(disp,pc),Rn */
	r0 = 0xC062780u; UPD(0x0C06E46Cu, 1);  /* 0C06E46A mov.l @(disp,pc),Rn */
	r2 &= r4;  /* 0C06E46C and Rm,Rn */
	W32(r10, r2); UPD(0x0C06E470u, 2);  /* 0C06E46E mov.l Rm,@Rn */
	r4 = 0x4u;  /* 0C06E470 mov #imm,Rn */
	W32(r10 + 0x4u, r3); UPD(0x0C06E474u, 2);  /* 0C06E472 mov.l Rm,@(disp,Rn) */
	IF(0x0C06E474u); { u32 t_ = r0; PR = 0x0C06E478u; W32(r14 + 0x10u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C06E478u); }  /* 0C06E474 jsr @Rn */
L_0C06E478: BLKS(0x0C06E478u);
	r6 = R32(r8); UPD(0x0C06E47Au, 1);  /* 0C06E478 mov.l @Rm,Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C06E47Cu, 1);  /* 0C06E47A mov.l @(disp,Rm),Rn */
	r6 += r0;  /* 0C06E47C add Rm,Rn */
	W32(r10 + 0x8u, r6); UPD(0x0C06E480u, 2);  /* 0C06E47E mov.l Rm,@(disp,Rn) */
	W32(r10 + 0xCu, r1); UPD(0x0C06E482u, 1);  /* 0C06E480 mov.l Rm,@(disp,Rn) */
	r10 += 0x30u;  /* 0C06E482 add #imm,Rn */
	W8(r10, r1); UPD(0x0C06E486u, 2);  /* 0C06E484 mov.b Rm,@Rn */
	r8 = R32(r9); UPD(0x0C06E488u, 1);  /* 0C06E486 mov.l @Rm,Rn */
	r2 = R32(r12); UPD(0x0C06E48Au, 1);  /* 0C06E488 mov.l @Rm,Rn */
	r9 = 0x20000000u; UPD(0x0C06E48Cu, 1);  /* 0C06E48A mov.l @(disp,pc),Rn */
	r8 |= r2;  /* 0C06E48C or Rm,Rn */
	T = (r8 & r9) == 0;  /* 0C06E48E tst Rm,Rn */
	{ u32 c_ = !T; r10 += 0xFFFFFFD0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06E4E0u, 5); goto L_0C06E4E0; } goto L_0C06E494; }  /* 0C06E490 bf/s */
L_0C06E494: BLKS(0x0C06E494u);
	r3 = R32(r14 + 0x8u); UPD(0x0C06E496u, 2);  /* 0C06E494 mov.l @(disp,Rm),Rn */
	r9 = R32(r10 + 0x20u); UPD(0x0C06E498u, 1);  /* 0C06E496 mov.l @(disp,Rm),Rn */
	r12 = (u32)(s32)(s16)R16(r3); UPD(0x0C06E49Au, 1);  /* 0C06E498 mov.w @Rm,Rn */
	IF(0x0C06E49Au); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C06E49A shar Rn */
	r1 = 0xC17491Cu; UPD(0x0C06E49Eu, 2);  /* 0C06E49C mov.l @(disp,pc),Rn */
	IF(0x0C06E49Eu); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C06E49E shar Rn */
	UPD(0x0C06E4A0u, 1);
L_0C06E4A0: BLKS(0x0C06E4A0u);
	r0 = R32(r14); UPD(0x0C06E4A2u, 1);  /* 0C06E4A0 mov.l @Rm,Rn */
	r10 = 0xC0C2020u; UPD(0x0C06E4A4u, 1);  /* 0C06E4A2 mov.l @(disp,pc),Rn */
	IF(0x0C06E4A4u); r4 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C06E4A6u, 1);  /* 0C06E4A4 mov.b @(r0,Rm),Rn */
	r5 = r4 & 0xFF;  /* 0C06E4A6 extu.b Rm,Rn */
	IF(0x0C06E4A8u); { u32 t_ = r10; PR = 0x0C06E4ACu; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2020, 0x0C0C2020u, 0x0C06E4ACu); }  /* 0C06E4A8 jsr @Rn */
L_0C06E4AC: BLKS(0x0C06E4ACu);
	r6 = 0x680u; UPD(0x0C06E4AEu, 1);  /* 0C06E4AC mov.w @(disp,pc),Rn */
	r4 = r12;  /* 0C06E4AE mov Rm,Rn */
	r1 = R32(r14); UPD(0x0C06E4B2u, 2);  /* 0C06E4B0 mov.l @Rm,Rn */
	r5 = r9;  /* 0C06E4B2 mov Rm,Rn */
	IF(0x0C06E4B4u); MACL = r1 * r6;  /* 0C06E4B4 mul.l Rm,Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C06E4B8u, 4);  /* 0C06E4B6 mov.l @(disp,Rm),Rn */
	r8 = 0xC069B20u; UPD(0x0C06E4BAu, 1);  /* 0C06E4B8 mov.l @(disp,pc),Rn */
	IF(0x0C06E4BAu); r10 = MACL;  /* 0C06E4BA sts macl,Rn */
	r7 = 0xC2A6D9Cu; UPD(0x0C06E4BEu, 2);  /* 0C06E4BC mov.l @(disp,pc),Rn */
	r10 += r2;  /* 0C06E4BE add Rm,Rn */
	IF(0x0C06E4C0u); { u32 t_ = r8; PR = 0x0C06E4C4u; r10 += r7; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C06E4C4u); }  /* 0C06E4C0 jsr @Rn */
L_0C06E4C4: BLKS(0x0C06E4C4u);
	r4 = r12;  /* 0C06E4C4 mov Rm,Rn */
	r12 = 0xC069AF0u; UPD(0x0C06E4C8u, 2);  /* 0C06E4C6 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C06E4C8 mov Rm,Rn */
	IF(0x0C06E4CAu); { u32 t_ = r12; PR = 0x0C06E4CEu; W32(r10 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C06E4CEu); }  /* 0C06E4CA jsr @Rn */
L_0C06E4CE: BLKS(0x0C06E4CEu);
	{ W32(r10 + 0x1Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06E3CEu, 3); goto L_0C06E3CE; }  /* 0C06E4CE bra */
L_0C06E4E0: BLKS(0x0C06E4E0u);
	r9 = R32(r10 + 0x20u); UPD(0x0C06E4E2u, 1);  /* 0C06E4E0 mov.l @(disp,Rm),Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C06E4E4u, 1);  /* 0C06E4E2 mov.l @(disp,Rm),Rn */
	IF(0x0C06E4E4u); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C06E4E4 shar Rn */
	r1 = 0xC174920u; UPD(0x0C06E4E8u, 2);  /* 0C06E4E6 mov.l @(disp,pc),Rn */
	IF(0x0C06E4E8u); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C06E4E8 shar Rn */
	r12 = (u32)(s32)(s16)R16(r5); UPD(0x0C06E4ECu, 2);  /* 0C06E4EA mov.w @Rm,Rn */
	{ IF(0x0C06E4EEu); T = r9 & 1; r9 = (u32)((s32)r9 >> 1); /* slot shar Rn */ UPD(0x0C06E4A0u, 3); goto L_0C06E4A0; }  /* 0C06E4EC bra */
}

/* FUN_0c06e540 */
void blk_f_0C06E540(sh3_t *c)
{
	LOCALS;
L_0C06E540: BLKS(0x0C06E540u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06E542u, 1);  /* 0C06E540 mov.l Rm,@-Rn */
	r1 = 0x1u;  /* 0C06E542 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06E546u, 2);  /* 0C06E544 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06E548u, 1);  /* 0C06E546 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06E54Au, 1);  /* 0C06E548 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06E54Cu, 1);  /* 0C06E54A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06E54Eu, 1);  /* 0C06E54C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06E550u, 1);  /* 0C06E54E mov.l Rm,@-Rn */
	r2 = 0xC2380B2u; UPD(0x0C06E552u, 1);  /* 0C06E550 mov.l @(disp,pc),Rn */
	IF(0x0C06E552u); r15 -= 4; W32(r15, PR); UPD(0x0C06E554u, 1);  /* 0C06E552 sts.l pr,@-Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C06E556u, 1);  /* 0C06E554 mov.w @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C06E556 add #imm,Rn */
	r12 = r0;  /* 0C06E558 mov Rm,Rn */
	r14 = r15;  /* 0C06E55A mov Rm,Rn */
	r0 = 0x0u;  /* 0C06E55C mov #imm,Rn */
	r12 += 0x1u;  /* 0C06E55E add #imm,Rn */
	W32(r14, r0); UPD(0x0C06E562u, 6);  /* 0C06E560 mov.l Rm,@Rn */
	r12 &= r1;  /* 0C06E562 and Rm,Rn */
	W32(r14 + 0x10u, r0); UPD(0x0C06E566u, 2);  /* 0C06E564 mov.l Rm,@(disp,Rn) */
	r3 = 0x0u;  /* 0C06E566 mov #imm,Rn */
	UPD(0x0C06E568u, 1);
L_0C06E568: BLKS(0x0C06E568u);
	W32(r14 + 0x4u, r3); UPD(0x0C06E56Au, 1);  /* 0C06E568 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r3); UPD(0x0C06E56Cu, 1);  /* 0C06E56A mov.l Rm,@(disp,Rn) */
L_0C06E56C: BLKS(0x0C06E56Cu);
	r8 = 0x9C0u; UPD(0x0C06E56Eu, 1);  /* 0C06E56C mov.w @(disp,pc),Rn */
	IF(0x0C06E56Eu); MACL = r12 * r8;  /* 0C06E56E mul.l Rm,Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C06E572u, 3);  /* 0C06E570 mov.l @(disp,Rm),Rn */
	IF(0x0C06E572u); r3 = MACL;  /* 0C06E572 sts macl,Rn */
	r7 = R32(r14 + 0xCu); UPD(0x0C06E576u, 2);  /* 0C06E574 mov.l @(disp,Rm),Rn */
	r6 += r3;  /* 0C06E576 add Rm,Rn */
	r0 = 0xC2380D0u; UPD(0x0C06E57Au, 2);  /* 0C06E578 mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C06E57A add Rm,Rn */
	IF(0x0C06E57Cu); r5 = R32(r0 + r6); UPD(0x0C06E57Eu, 2);  /* 0C06E57C mov.l @(r0,Rm),Rn */
	r4 = 0x8000000u; UPD(0x0C06E580u, 1);  /* 0C06E57E mov.l @(disp,pc),Rn */
	T = (r5 & r4) == 0;  /* 0C06E580 tst Rm,Rn */
	if (T) { UPD(0x0C06E67Cu, 4); goto L_0C06E67C; }  /* 0C06E582 bt */
L_0C06E584: BLKS(0x0C06E584u);
	r9 = R32(r14 + 0xCu); UPD(0x0C06E586u, 1);  /* 0C06E584 mov.l @(disp,Rm),Rn */
	r5 = r0;  /* 0C06E586 mov Rm,Rn */
	r8 = R32(r14 + 0x10u); UPD(0x0C06E58Au, 2);  /* 0C06E588 mov.l @(disp,Rm),Rn */
	r3 += r9;  /* 0C06E58A add Rm,Rn */
	r3 += r8;  /* 0C06E58C add Rm,Rn */
	r5 += r3;  /* 0C06E58E add Rm,Rn */
	r0 = R32(r5 + 0x4u); UPD(0x0C06E592u, 4);  /* 0C06E590 mov.l @(disp,Rm),Rn */
	r11 = 0x3u;  /* 0C06E592 mov #imm,Rn */
	IF(0x0C06E594u); ARG0(0x40BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06E594 shld Rm,Rn */
	r7 = 0xC17E1B0u; UPD(0x0C06E598u, 3);  /* 0C06E596 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C06E598 mov #imm,Rn */
	IF(0x0C06E59Au); r1 = R32(r0 + r7); UPD(0x0C06E59Cu, 2);  /* 0C06E59A mov.l @(r0,Rm),Rn */
	r4 = 0x3u;  /* 0C06E59C mov #imm,Rn */
	r0 = R32(r5 + 0x8u); UPD(0x0C06E5A0u, 2);  /* 0C06E59E mov.l @(disp,Rm),Rn */
	r13 = R32(r5 + 0xCu); UPD(0x0C06E5A2u, 1);  /* 0C06E5A0 mov.l @(disp,Rm),Rn */
	IF(0x0C06E5A2u); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06E5A2 shld Rm,Rn */
	IF(0x0C06E5A4u); ARG0(0x4D4Du); { s32 s_ = (s32)r4; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C06E5A4 shld Rm,Rn */
	IF(0x0C06E5A6u); r2 = R32(r0 + r1); UPD(0x0C06E5A8u, 3);  /* 0C06E5A6 mov.l @(r0,Rm),Rn */
	r13 += r2;  /* 0C06E5A8 add Rm,Rn */
	r11 = R32(r13 + 0x4u); UPD(0x0C06E5ACu, 2);  /* 0C06E5AA mov.l @(disp,Rm),Rn */
	r10 = 0xC3C5450u; UPD(0x0C06E5AEu, 1);  /* 0C06E5AC mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r11); r11 += 4; r9 = v_; } UPD(0x0C06E5B0u, 1);  /* 0C06E5AE mov.l @Rm+,Rn */
	T = (r9 & r9) == 0;  /* 0C06E5B0 tst Rm,Rn */
	{ u32 c_ = T; W32(r10, r9); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06E67Cu, 4); goto L_0C06E67C; } UPD(0x0C06E5B6u, 1); goto L_0C06E5B6; }  /* 0C06E5B2 bt/s */
L_0C06E5B6: BLKS(0x0C06E5B6u);
	r13 = 0xC2380D0u; UPD(0x0C06E5B8u, 1);  /* 0C06E5B6 mov.l @(disp,pc),Rn */
	r13 += r3;  /* 0C06E5B8 add Rm,Rn */
	UPD(0x0C06E5BAu, 1);
L_0C06E5BA: BLKS(0x0C06E5BAu);
	{ u32 v_ = R32(r11); r11 += 4; r1 = v_; } UPD(0x0C06E5BCu, 1);  /* 0C06E5BA mov.l @Rm+,Rn */
	r6 = 0xC2A6D48u; UPD(0x0C06E5BEu, 1);  /* 0C06E5BC mov.l @(disp,pc),Rn */
	W32(r6, r1); UPD(0x0C06E5C0u, 1);  /* 0C06E5BE mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r2 = v_; } UPD(0x0C06E5C2u, 1);  /* 0C06E5C0 mov.l @Rm+,Rn */
	r5 = R32(r13 + 0x10u); UPD(0x0C06E5C4u, 1);  /* 0C06E5C2 mov.l @(disp,Rm),Rn */
	r4 = 0xC2B1A40u; UPD(0x0C06E5C6u, 1);  /* 0C06E5C4 mov.l @(disp,pc),Rn */
	r5 += r2;  /* 0C06E5C6 add Rm,Rn */
	W32(r4, r5); UPD(0x0C06E5CAu, 2);  /* 0C06E5C8 mov.l Rm,@Rn */
	r3 = R32(r13 + 0x14u); UPD(0x0C06E5CCu, 1);  /* 0C06E5CA mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r11); r11 += 4; r10 = v_; } UPD(0x0C06E5CEu, 1);  /* 0C06E5CC mov.l @Rm+,Rn */
	r0 = 0xC2975F4u; UPD(0x0C06E5D0u, 1);  /* 0C06E5CE mov.l @(disp,pc),Rn */
	r3 += r10;  /* 0C06E5D0 add Rm,Rn */
	W32(r0, r3); UPD(0x0C06E5D4u, 2);  /* 0C06E5D2 mov.l Rm,@Rn */
	r9 = 0xBFu; UPD(0x0C06E5D6u, 1);  /* 0C06E5D4 mov.w @(disp,pc),Rn */
	r0 = 0x864Cu; UPD(0x0C06E5D8u, 1);  /* 0C06E5D6 mov.l @(disp,pc),Rn */
L_0C06E5D8: BLKS(0x0C06E5D8u);
	r4 = 0xC286578u; UPD(0x0C06E5DAu, 1);  /* 0C06E5D8 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C06E5DA add Rm,Rn */
	r8 = R32(r4); UPD(0x0C06E5DEu, 2);  /* 0C06E5DC mov.l @Rm,Rn */
	r7 = 0x2000000u; UPD(0x0C06E5E0u, 1);  /* 0C06E5DE mov.l @(disp,pc),Rn */
	T = (r8 & r7) == 0;  /* 0C06E5E0 tst Rm,Rn */
	if (T) { UPD(0x0C06E664u, 4); goto L_0C06E664; }  /* 0C06E5E2 bt */
L_0C06E5E4: BLKS(0x0C06E5E4u);
	r7 = 0xA8u; UPD(0x0C06E5E6u, 1);  /* 0C06E5E4 mov.w @(disp,pc),Rn */
	r7 += r4;  /* 0C06E5E6 add Rm,Rn */
	r2 = r7;  /* 0C06E5E8 mov Rm,Rn */
	r2 += 0x3u;  /* 0C06E5EA add #imm,Rn */
	r7 += 0x1u;  /* 0C06E5EC add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C06E5F0u, 5);  /* 0C06E5EE mov.b @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C06E5F2u, 1);  /* 0C06E5F0 mov.b @Rm,Rn */
	r10 = r6 & 0xFF;  /* 0C06E5F2 extu.b Rm,Rn */
	r3 = r5 & 0xFF;  /* 0C06E5F4 extu.b Rm,Rn */
	T = r10 >= r3;  /* 0C06E5F6 cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C06E664u, 6); goto L_0C06E664; }  /* 0C06E5F8 bf */
L_0C06E5FA: BLKS(0x0C06E5FAu);
	r3 = R32(r4 + 0x1Cu); UPD(0x0C06E5FCu, 1);  /* 0C06E5FA mov.l @(disp,Rm),Rn */
	r10 = 0xC28EDB8u; UPD(0x0C06E5FEu, 1);  /* 0C06E5FC mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r3); r3 += 4; r8 = v_; } UPD(0x0C06E600u, 1);  /* 0C06E5FE mov.l @Rm+,Rn */
	T = (r8 & r8) == 0;  /* 0C06E600 tst Rm,Rn */
	{ u32 c_ = T; W32(r10, r8); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06E664u, 4); goto L_0C06E664; } UPD(0x0C06E606u, 1); goto L_0C06E606; }  /* 0C06E602 bt/s */
L_0C06E606: BLKS(0x0C06E606u);
	r8 = r4;  /* 0C06E606 mov Rm,Rn */
	r4 += 0x44u;  /* 0C06E608 add #imm,Rn */
	W32(r14 + 0x8u, r4); UPD(0x0C06E60Cu, 3);  /* 0C06E60A mov.l Rm,@(disp,Rn) */
L_0C06E60C: BLKS(0x0C06E60Cu);
	{ u32 v_ = R32(r3); r3 += 4; r5 = v_; } UPD(0x0C06E60Eu, 1);  /* 0C06E60C mov.l @Rm+,Rn */
	r10 = 0xC297484u; UPD(0x0C06E610u, 1);  /* 0C06E60E mov.l @(disp,pc),Rn */
	W32(r10, r5); UPD(0x0C06E612u, 1);  /* 0C06E610 mov.l Rm,@Rn */
	{ u32 v_ = R32(r3); r3 += 4; r2 = v_; } UPD(0x0C06E614u, 1);  /* 0C06E612 mov.l @Rm+,Rn */
	r10 = R32(r8 + 0x24u); UPD(0x0C06E616u, 1);  /* 0C06E614 mov.l @(disp,Rm),Rn */
	r6 = 0xC3B1B00u; UPD(0x0C06E618u, 1);  /* 0C06E616 mov.l @(disp,pc),Rn */
	r10 += r2;  /* 0C06E618 add Rm,Rn */
	W32(r6, r10); UPD(0x0C06E61Cu, 2);  /* 0C06E61A mov.l Rm,@Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C06E61Eu, 1);  /* 0C06E61C mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r3); r3 += 4; r4 = v_; } UPD(0x0C06E620u, 1);  /* 0C06E61E mov.l @Rm+,Rn */
	r7 = 0xC3C4024u; UPD(0x0C06E622u, 1);  /* 0C06E620 mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C06E622 add Rm,Rn */
	W32(r7, r6); UPD(0x0C06E626u, 2);  /* 0C06E624 mov.l Rm,@Rn */
	r2 = 0xC2B1A40u; UPD(0x0C06E628u, 1);  /* 0C06E626 mov.l @(disp,pc),Rn */
	r7 = R32(r2); UPD(0x0C06E62Au, 1);  /* 0C06E628 mov.l @Rm,Rn */
	r7 -= r10;  /* 0C06E62A sub Rm,Rn */
	IF(0x0C06E62Cu); T = (s32)r7 >= 0;  /* 0C06E62C cmp/pz Rn */
	if (T) { UPD(0x0C06E632u, 5); goto L_0C06E632; }  /* 0C06E62E bt */
L_0C06E630: BLKS(0x0C06E630u);
	r7 = 0u - r7;  /* 0C06E630 neg Rm,Rn */
	UPD(0x0C06E632u, 1);
L_0C06E632: BLKS(0x0C06E632u);
	r10 = 0xC28EDB8u; UPD(0x0C06E634u, 1);  /* 0C06E632 mov.l @(disp,pc),Rn */
	r1 = 0xC3C5450u; UPD(0x0C06E636u, 1);  /* 0C06E634 mov.l @(disp,pc),Rn */
	r4 = R32(r10); UPD(0x0C06E638u, 1);  /* 0C06E636 mov.l @Rm,Rn */
	r2 = 0xFFFFFFFu; UPD(0x0C06E63Au, 1);  /* 0C06E638 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C06E63Cu, 1);  /* 0C06E63A mov.l @Rm,Rn */
	r2 &= r4;  /* 0C06E63C and Rm,Rn */
	r1 += r2;  /* 0C06E63E add Rm,Rn */
	T = (s32)r7 >= (s32)r1;  /* 0C06E640 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C06E65Au, 6); goto L_0C06E65A; }  /* 0C06E642 bt */
L_0C06E644: BLKS(0x0C06E644u);
	r7 = 0xC2975F4u; UPD(0x0C06E646u, 1);  /* 0C06E644 mov.l @(disp,pc),Rn */
	r2 = R32(r7); UPD(0x0C06E648u, 1);  /* 0C06E646 mov.l @Rm,Rn */
	r2 -= r6;  /* 0C06E648 sub Rm,Rn */
	IF(0x0C06E64Au); T = (s32)r2 >= 0;  /* 0C06E64A cmp/pz Rn */
	if (T) { UPD(0x0C06E650u, 5); goto L_0C06E650; }  /* 0C06E64C bt */
L_0C06E64E: BLKS(0x0C06E64Eu);
	r2 = 0u - r2;  /* 0C06E64E neg Rm,Rn */
	UPD(0x0C06E650u, 1);
L_0C06E650: BLKS(0x0C06E650u);
	r7 = 0xC2A6D48u; UPD(0x0C06E652u, 1);  /* 0C06E650 mov.l @(disp,pc),Rn */
	r6 = R32(r7); UPD(0x0C06E654u, 1);  /* 0C06E652 mov.l @Rm,Rn */
	r6 += r5;  /* 0C06E654 add Rm,Rn */
	T = (s32)r2 >= (s32)r6;  /* 0C06E656 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C06E720u, 5); goto L_0C06E720; }  /* 0C06E658 bf */
L_0C06E65A: BLKS(0x0C06E65Au);
	{ u32 v_ = R32(r3); r3 += 4; r5 = v_; } UPD(0x0C06E65Cu, 1);  /* 0C06E65A mov.l @Rm+,Rn */
	r10 = 0xC28EDB8u; UPD(0x0C06E65Eu, 1);  /* 0C06E65C mov.l @(disp,pc),Rn */
	T = (r5 & r5) == 0;  /* 0C06E65E tst Rm,Rn */
	{ u32 c_ = !T; W32(r10, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06E60Cu, 4); goto L_0C06E60C; } UPD(0x0C06E664u, 1); goto L_0C06E664; }  /* 0C06E660 bf/s */
L_0C06E664: BLKS(0x0C06E664u);
	r4 = r9;  /* 0C06E664 mov Rm,Rn */
	r9 = 0xFFFFFF4Cu; UPD(0x0C06E668u, 2);  /* 0C06E666 mov.w @(disp,pc),Rn */
	r4 += 0xFFFFFFFFu;  /* 0C06E668 add #imm,Rn */
	r0 += r9;  /* 0C06E66A add Rm,Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C06E66C exts.w Rm,Rn */
	IF(0x0C06E66Eu); T = (s32)r9 >= 0;  /* 0C06E66E cmp/pz Rn */
	if (T) { UPD(0x0C06E5D8u, 7); goto L_0C06E5D8; }  /* 0C06E670 bt */
L_0C06E672: BLKS(0x0C06E672u);
	{ u32 v_ = R32(r11); r11 += 4; r7 = v_; } UPD(0x0C06E674u, 1);  /* 0C06E672 mov.l @Rm+,Rn */
	r2 = 0xC3C5450u; UPD(0x0C06E676u, 1);  /* 0C06E674 mov.l @(disp,pc),Rn */
	T = (r7 & r7) == 0;  /* 0C06E676 tst Rm,Rn */
	{ u32 c_ = !T; W32(r2, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06E5BAu, 4); goto L_0C06E5BA; } UPD(0x0C06E67Cu, 1); goto L_0C06E67C; }  /* 0C06E678 bf/s */
L_0C06E67C: BLKS(0x0C06E67Cu);
	r0 = R32(r14 + 0x4u); UPD(0x0C06E67Eu, 1);  /* 0C06E67C mov.l @(disp,Rm),Rn */
L_0C06E67E: BLKS(0x0C06E67Eu);
	r11 = 0xFu;  /* 0C06E67E mov #imm,Rn */
	r0 += 0x1u;  /* 0C06E680 add #imm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C06E682 exts.w Rm,Rn */
	r6 = R32(r14 + 0xCu); UPD(0x0C06E686u, 4);  /* 0C06E684 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r13); UPD(0x0C06E688u, 1);  /* 0C06E686 mov.l Rm,@(disp,Rn) */
	r6 += 0x34u;  /* 0C06E688 add #imm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C06E68Cu, 2);  /* 0C06E68A mov.l @(disp,Rm),Rn */
	T = (s32)r1 > (s32)r11;  /* 0C06E68C cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06E696u, 4); goto L_0C06E696; } UPD(0x0C06E692u, 1); goto L_0C06E692; }  /* 0C06E68E bt/s */
L_0C06E692: BLKS(0x0C06E692u);
	{ IF(0x0C06E694u); ; /* slot nop */ UPD(0x0C06E56Cu, 3); goto L_0C06E56C; }  /* 0C06E692 bra */
L_0C06E696: BLKS(0x0C06E696u);
	r10 = R32(r14); UPD(0x0C06E698u, 1);  /* 0C06E696 mov.l @Rm,Rn */
	r8 = 0x2u;  /* 0C06E698 mov #imm,Rn */
	r10 += 0x1u;  /* 0C06E69A add #imm,Rn */
	r5 = (u32)(s32)(s16)r10;  /* 0C06E69C exts.w Rm,Rn */
	r4 = R32(r14 + 0x10u); UPD(0x0C06E6A0u, 4);  /* 0C06E69E mov.l @(disp,Rm),Rn */
	r9 = 0x340u; UPD(0x0C06E6A2u, 1);  /* 0C06E6A0 mov.w @(disp,pc),Rn */
	W32(r14, r5); UPD(0x0C06E6A4u, 1);  /* 0C06E6A2 mov.l Rm,@Rn */
	r4 += r9;  /* 0C06E6A4 add Rm,Rn */
	r3 = R32(r14); UPD(0x0C06E6A8u, 2);  /* 0C06E6A6 mov.l @Rm,Rn */
	T = (s32)r3 > (s32)r8;  /* 0C06E6A8 cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0x10u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06E6B2u, 4); goto L_0C06E6B2; } UPD(0x0C06E6AEu, 1); goto L_0C06E6AE; }  /* 0C06E6AA bt/s */
L_0C06E6AE: BLKS(0x0C06E6AEu);
	{ r3 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C06E568u, 3); goto L_0C06E568; }  /* 0C06E6AE bra */
L_0C06E6B2: BLKS(0x0C06E6B2u);
	r14 += 0x14u;  /* 0C06E6B2 add #imm,Rn */
	r15 = r14;  /* 0C06E6B4 mov Rm,Rn */
	IF(0x0C06E6B6u); PR = R32(r15); r15 += 4; UPD(0x0C06E6B8u, 3);  /* 0C06E6B6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06E6BAu, 1);  /* 0C06E6B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06E6BCu, 1);  /* 0C06E6BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06E6BEu, 1);  /* 0C06E6BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06E6C0u, 1);  /* 0C06E6BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06E6C2u, 1);  /* 0C06E6C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06E6C4u, 1);  /* 0C06E6C2 mov.l @Rm+,Rn */
	IF(0x0C06E6C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06E6C4 rts */
L_0C06E720: BLKS(0x0C06E720u);
	r11 = 0x2A0u; UPD(0x0C06E722u, 1);  /* 0C06E720 mov.w @(disp,pc),Rn */
	IF(0x0C06E722u); MACL = r12 * r11;  /* 0C06E722 mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C06E726u, 3);  /* 0C06E724 mov.l @(disp,pc),Rn */
	IF(0x0C06E726u); r11 = MACL;  /* 0C06E726 sts macl,Rn */
	r3 = 0x290u; UPD(0x0C06E72Au, 2);  /* 0C06E728 mov.w @(disp,pc),Rn */
	r11 += r5;  /* 0C06E72A add Rm,Rn */
	r11 += r3;  /* 0C06E72C add Rm,Rn */
	r6 = R32(r11); UPD(0x0C06E730u, 3);  /* 0C06E72E mov.l @Rm,Rn */
	r6 += 0xAu;  /* 0C06E730 add #imm,Rn */
	W32(r11, r6); UPD(0x0C06E734u, 2);  /* 0C06E732 mov.l Rm,@Rn */
	r0 = 0xC076CB0u; UPD(0x0C06E736u, 1);  /* 0C06E734 mov.l @(disp,pc),Rn */
	r7 = R32(r8); UPD(0x0C06E738u, 1);  /* 0C06E736 mov.l @Rm,Rn */
	r13 = 0x9C0u; UPD(0x0C06E73Au, 1);  /* 0C06E738 mov.w @(disp,pc),Rn */
	r7 |= r4;  /* 0C06E73A or Rm,Rn */
	r4 = r12;  /* 0C06E73C mov Rm,Rn */
	r5 = R32(r14); UPD(0x0C06E740u, 3);  /* 0C06E73E mov.l @Rm,Rn */
	IF(0x0C06E740u); { u32 t_ = r0; PR = 0x0C06E744u; r6 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C076CB0, 0x0C076CB0u, 0x0C06E744u); }  /* 0C06E740 jsr @Rn */
L_0C06E744: BLKS(0x0C06E744u);
	IF(0x0C06E744u); MACL = r12 * r13;  /* 0C06E744 mul.l Rm,Rn */
	r6 = R32(r14 + 0xCu); UPD(0x0C06E748u, 3);  /* 0C06E746 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06E748 add #imm,Rn */
	r7 = R32(r14 + 0x10u); UPD(0x0C06E74Cu, 2);  /* 0C06E74A mov.l @(disp,Rm),Rn */
	IF(0x0C06E74Cu); r13 = MACL;  /* 0C06E74C sts macl,Rn */
	r2 = 0xC2380D0u; UPD(0x0C06E750u, 2);  /* 0C06E74E mov.l @(disp,pc),Rn */
	r6 += r13;  /* 0C06E750 add Rm,Rn */
	r6 += r7;  /* 0C06E752 add Rm,Rn */
	r6 += r2;  /* 0C06E754 add Rm,Rn */
	r6 += 0x2Cu;  /* 0C06E756 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r6); UPD(0x0C06E75Au, 5);  /* 0C06E758 mov.w @Rm,Rn */
	r7 = 0x8u;  /* 0C06E75A mov #imm,Rn */
	r3 = 0x1C0u; UPD(0x0C06E75Eu, 2);  /* 0C06E75C mov.w @(disp,pc),Rn */
	r5 = r4 & 0xFFFF;  /* 0C06E75E extu.w Rm,Rn */
	W32(r15, r5); UPD(0x0C06E762u, 2);  /* 0C06E760 mov.l Rm,@Rn */
	r6 += 0xFFFFFFD4u;  /* 0C06E762 add #imm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C06E766u, 2);  /* 0C06E764 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD5B0u; UPD(0x0C06E768u, 1);  /* 0C06E766 mov.l @(disp,pc),Rn */
	r4 = R32(r6 + 0x10u); UPD(0x0C06E76Au, 1);  /* 0C06E768 mov.l @(disp,Rm),Rn */
	r5 = R32(r6 + 0x14u); UPD(0x0C06E76Cu, 1);  /* 0C06E76A mov.l @(disp,Rm),Rn */
	IF(0x0C06E76Cu); { u32 t_ = r0; PR = 0x0C06E770u; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD5B0, 0x0C0BD5B0u, 0x0C06E770u); }  /* 0C06E76C jsr @Rn */
L_0C06E770: BLKS(0x0C06E770u);
	r1 = R32(r10); UPD(0x0C06E772u, 1);  /* 0C06E770 mov.l @Rm,Rn */
	r0 = 0x20000000u; UPD(0x0C06E774u, 1);  /* 0C06E772 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C06E774 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06E7B2u, 4); goto L_0C06E7B2; } goto L_0C06E77A; }  /* 0C06E776 bf/s */
L_0C06E77A: BLKS(0x0C06E77Au);
	r1 = R32(r8); UPD(0x0C06E77Cu, 2);  /* 0C06E77A mov.l @Rm,Rn */
	r10 = 0x20020000u; UPD(0x0C06E77Eu, 1);  /* 0C06E77C mov.l @(disp,pc),Rn */
	T = (r1 & r10) == 0;  /* 0C06E77E tst Rm,Rn */
	if (!T) { UPD(0x0C06E7B2u, 4); goto L_0C06E7B2; }  /* 0C06E780 bf */
L_0C06E782: BLKS(0x0C06E782u);
	r2 = R32(r14 + 0x10u); UPD(0x0C06E784u, 1);  /* 0C06E782 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C06E784 mov Rm,Rn */
	r7 = R32(r14 + 0xCu); UPD(0x0C06E788u, 2);  /* 0C06E786 mov.l @(disp,Rm),Rn */
	r10 = r13;  /* 0C06E788 mov Rm,Rn */
	r10 += r2;  /* 0C06E78A add Rm,Rn */
	r4 = 0xC2380D0u; UPD(0x0C06E78Eu, 3);  /* 0C06E78C mov.l @(disp,pc),Rn */
	r10 += r7;  /* 0C06E78E add Rm,Rn */
	r9 = 0xC0A8E90u; UPD(0x0C06E792u, 2);  /* 0C06E790 mov.l @(disp,pc),Rn */
	r10 += r4;  /* 0C06E792 add Rm,Rn */
	r4 = r12;  /* 0C06E794 mov Rm,Rn */
	r6 = R32(r10); UPD(0x0C06E798u, 3);  /* 0C06E796 mov.l @Rm,Rn */
	IF(0x0C06E798u); { u32 t_ = r9; PR = 0x0C06E79Cu; r7 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8E90, 0x0C0A8E90u, 0x0C06E79Cu); }  /* 0C06E798 jsr @Rn */
L_0C06E79C: BLKS(0x0C06E79Cu);
	T = (r0 & r0) == 0;  /* 0C06E79C tst Rm,Rn */
	if (T) { UPD(0x0C06E7B2u, 4); goto L_0C06E7B2; }  /* 0C06E79E bt */
L_0C06E7A0: BLKS(0x0C06E7A0u);
	r0 = R32(r10); UPD(0x0C06E7A2u, 1);  /* 0C06E7A0 mov.l @Rm,Rn */
	r13 = 0x800000u; UPD(0x0C06E7A4u, 1);  /* 0C06E7A2 mov.l @(disp,pc),Rn */
	T = (r0 & r13) == 0;  /* 0C06E7A4 tst Rm,Rn */
	if (!T) { UPD(0x0C06E7C0u, 4); goto L_0C06E7C0; }  /* 0C06E7A6 bf */
L_0C06E7A8: BLKS(0x0C06E7A8u);
	r8 += 0x40u;  /* 0C06E7A8 add #imm,Rn */
	r1 = R32(r11); UPD(0x0C06E7ACu, 2);  /* 0C06E7AA mov.l @Rm,Rn */
	r6 = R32(r8); UPD(0x0C06E7AEu, 1);  /* 0C06E7AC mov.l @Rm,Rn */
	r1 += r6;  /* 0C06E7AE add Rm,Rn */
	UPD(0x0C06E7B0u, 1);
L_0C06E7B0: BLKS(0x0C06E7B0u);
	W32(r11, r1); UPD(0x0C06E7B2u, 1);  /* 0C06E7B0 mov.l Rm,@Rn */
L_0C06E7B2: BLKS(0x0C06E7B2u);
	{ r0 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C06E67Eu, 3); goto L_0C06E67E; }  /* 0C06E7B2 bra */
L_0C06E7C0: BLKS(0x0C06E7C0u);
	r8 += 0x40u;  /* 0C06E7C0 add #imm,Rn */
	r4 = R32(r8); UPD(0x0C06E7C4u, 2);  /* 0C06E7C2 mov.l @Rm,Rn */
	r8 = 0xC06A360u; UPD(0x0C06E7C6u, 1);  /* 0C06E7C4 mov.l @(disp,pc),Rn */
	r3 = R32(r14 + 0x8u); UPD(0x0C06E7C8u, 1);  /* 0C06E7C6 mov.l @(disp,Rm),Rn */
	IF(0x0C06E7C8u); { u32 t_ = r8; PR = 0x0C06E7CCu; r5 = R32(r3); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06A360, 0x0C06A360u, 0x0C06E7CCu); }  /* 0C06E7C8 jsr @Rn */
L_0C06E7CC: BLKS(0x0C06E7CCu);
	r1 = R32(r11); UPD(0x0C06E7CEu, 1);  /* 0C06E7CC mov.l @Rm,Rn */
	{ r1 += r0; /* slot add Rm,Rn */ UPD(0x0C06E7B0u, 3); goto L_0C06E7B0; }  /* 0C06E7CE bra */
}

/* FUN_0c06e810 */
void blk_f_0C06E810(sh3_t *c)
{
	LOCALS;
L_0C06E810: BLKS(0x0C06E810u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06E812u, 1);  /* 0C06E810 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06E814u, 1);  /* 0C06E812 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06E816u, 1);  /* 0C06E814 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06E818u, 1);  /* 0C06E816 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06E81Au, 1);  /* 0C06E818 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06E81Cu, 1);  /* 0C06E81A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06E81Eu, 1);  /* 0C06E81C mov.l Rm,@-Rn */
	r0 = 0xC2380B2u; UPD(0x0C06E820u, 1);  /* 0C06E81E mov.l @(disp,pc),Rn */
	IF(0x0C06E820u); r15 -= 4; W32(r15, PR); UPD(0x0C06E822u, 1);  /* 0C06E820 sts.l pr,@-Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C06E824u, 1);  /* 0C06E822 mov.w @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C06E824 add #imm,Rn */
	r0 = r2;  /* 0C06E826 mov Rm,Rn */
	r14 = r15;  /* 0C06E828 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C06E82A and #imm,r0 */
	W32(r14, r0); UPD(0x0C06E82Eu, 5);  /* 0C06E82C mov.l Rm,@Rn */
	r0 = 0x0u;  /* 0C06E82E mov #imm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C06E832u, 2);  /* 0C06E830 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r0); UPD(0x0C06E834u, 1);  /* 0C06E832 mov.l Rm,@(disp,Rn) */
L_0C06E834: BLKS(0x0C06E834u);
	r3 = 0x2800u; UPD(0x0C06E836u, 1);  /* 0C06E834 mov.w @(disp,pc),Rn */
	r7 = R32(r14); UPD(0x0C06E838u, 1);  /* 0C06E836 mov.l @Rm,Rn */
	IF(0x0C06E838u); MACL = r7 * r3;  /* 0C06E838 mul.l Rm,Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C06E83Cu, 3);  /* 0C06E83A mov.l @(disp,Rm),Rn */
	r5 = 0xC229004u; UPD(0x0C06E83Eu, 1);  /* 0C06E83C mov.l @(disp,pc),Rn */
	IF(0x0C06E83Eu); r3 = MACL;  /* 0C06E83E sts macl,Rn */
	r3 += r6;  /* 0C06E840 add Rm,Rn */
	r3 += r5;  /* 0C06E842 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C06E846u, 4);  /* 0C06E844 mov.l @Rm,Rn */
	r4 = 0x8000000u; UPD(0x0C06E848u, 1);  /* 0C06E846 mov.l @(disp,pc),Rn */
	T = (r1 & r4) == 0;  /* 0C06E848 tst Rm,Rn */
	{ u32 c_ = T; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C06E8CEu, 4); goto L_0C06E8CE; } UPD(0x0C06E84Eu, 1); goto L_0C06E84E; }  /* 0C06E84A bt/s */
L_0C06E84E: BLKS(0x0C06E84Eu);
	r11 = R32(r3 + 0x1Cu); UPD(0x0C06E850u, 1);  /* 0C06E84E mov.l @(disp,Rm),Rn */
	r10 = r11;  /* 0C06E850 mov Rm,Rn */
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C06E854u, 2);  /* 0C06E852 mov.l @Rm+,Rn */
	r9 = 0xC23371Cu; UPD(0x0C06E856u, 1);  /* 0C06E854 mov.l @(disp,pc),Rn */
	T = (r8 & r8) == 0;  /* 0C06E856 tst Rm,Rn */
	W32(r14 + 0x8u, r10); UPD(0x0C06E85Au, 2);  /* 0C06E858 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r9, r8); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06E8CCu, 3); goto L_0C06E8CC; } UPD(0x0C06E85Eu, 1); goto L_0C06E85E; }  /* 0C06E85A bt/s */
L_0C06E85E: BLKS(0x0C06E85Eu);
	r13 = R32(r14 + 0x8u); UPD(0x0C06E860u, 1);  /* 0C06E85E mov.l @(disp,Rm),Rn */
	r10 = R32(r14); UPD(0x0C06E862u, 1);  /* 0C06E860 mov.l @Rm,Rn */
	r9 = 0x2800u; UPD(0x0C06E864u, 1);  /* 0C06E862 mov.w @(disp,pc),Rn */
	{ u32 v_ = R32(r13); r13 += 4; r12 = v_; } UPD(0x0C06E866u, 1);  /* 0C06E864 mov.l @Rm+,Rn */
	IF(0x0C06E866u); MACL = r10 * r9;  /* 0C06E866 mul.l Rm,Rn */
	W32(r14 + 0x8u, r13); UPD(0x0C06E86Au, 3);  /* 0C06E868 mov.l Rm,@(disp,Rn) */
	r11 = 0xC2ABAA8u; UPD(0x0C06E86Cu, 1);  /* 0C06E86A mov.l @(disp,pc),Rn */
	IF(0x0C06E86Cu); r13 = MACL;  /* 0C06E86C sts macl,Rn */
	r8 = R32(r14 + 0x10u); UPD(0x0C06E870u, 2);  /* 0C06E86E mov.l @(disp,Rm),Rn */
	r1 = 0xC229004u; UPD(0x0C06E872u, 1);  /* 0C06E870 mov.l @(disp,pc),Rn */
	r13 += r8;  /* 0C06E872 add Rm,Rn */
	W32(r11, r12); UPD(0x0C06E876u, 2);  /* 0C06E874 mov.l Rm,@Rn */
	r13 += r1;  /* 0C06E876 add Rm,Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C06E87Au, 2);  /* 0C06E878 mov.l @(disp,Rm),Rn */
	r3 = R32(r13 + 0x24u); UPD(0x0C06E87Cu, 1);  /* 0C06E87A mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r5); r5 += 4; r7 = v_; } UPD(0x0C06E87Eu, 1);  /* 0C06E87C mov.l @Rm+,Rn */
	r6 = 0xC239488u; UPD(0x0C06E880u, 1);  /* 0C06E87E mov.l @(disp,pc),Rn */
	r3 += r7;  /* 0C06E880 add Rm,Rn */
	W32(r6, r3); UPD(0x0C06E884u, 2);  /* 0C06E882 mov.l Rm,@Rn */
	r4 = R32(r13 + 0x28u); UPD(0x0C06E886u, 1);  /* 0C06E884 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r5); r5 += 4; r2 = v_; } UPD(0x0C06E888u, 1);  /* 0C06E886 mov.l @Rm+,Rn */
	r0 = 0xC23948Cu; UPD(0x0C06E88Au, 1);  /* 0C06E888 mov.l @(disp,pc),Rn */
	r4 += r2;  /* 0C06E88A add Rm,Rn */
	W32(r0, r4); UPD(0x0C06E88Eu, 2);  /* 0C06E88C mov.l Rm,@Rn */
	r0 = R32(r13); UPD(0x0C06E890u, 1);  /* 0C06E88E mov.l @Rm,Rn */
	IF(0x0C06E890u); r0 >>= 8;  /* 0C06E890 shlr8 Rn */
	r0 += r0;  /* 0C06E892 add Rm,Rn */
	IF(0x0C06E894u); r0 >>= 8;  /* 0C06E894 shlr8 Rn */
	r12 = 0xC174924u; UPD(0x0C06E898u, 4);  /* 0C06E896 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C06E898 and #imm,r0 */
	IF(0x0C06E89Au); r0 <<= 2;  /* 0C06E89A shll2 Rn */
	IF(0x0C06E89Cu); r13 = R32(r0 + r12); UPD(0x0C06E89Eu, 3);  /* 0C06E89C mov.l @(r0,Rm),Rn */
	r11 = 0xBFu; UPD(0x0C06E8A0u, 1);  /* 0C06E89E mov.w @(disp,pc),Rn */
	r12 = 0x864Cu; UPD(0x0C06E8A2u, 1);  /* 0C06E8A0 mov.l @(disp,pc),Rn */
	W32(r14 + 0x8u, r5); UPD(0x0C06E8A4u, 1);  /* 0C06E8A2 mov.l Rm,@(disp,Rn) */
L_0C06E8A4: BLKS(0x0C06E8A4u);
	r7 = 0xC286578u; UPD(0x0C06E8A6u, 1);  /* 0C06E8A4 mov.l @(disp,pc),Rn */
	r7 += r12;  /* 0C06E8A6 add Rm,Rn */
	r0 = R32(r7); UPD(0x0C06E8AAu, 2);  /* 0C06E8A8 mov.l @Rm,Rn */
	r0 &= r13;  /* 0C06E8AA and Rm,Rn */
	T = r0 == r13;  /* 0C06E8AC cmp/eq Rm,Rn */
	if (T) { UPD(0x0C06E930u, 5); goto L_0C06E930; }  /* 0C06E8AE bt */
L_0C06E8B0: BLKS(0x0C06E8B0u);
	r8 = r11;  /* 0C06E8B0 mov Rm,Rn */
	UPD(0x0C06E8B2u, 1);
L_0C06E8B2: BLKS(0x0C06E8B2u);
	r11 = 0xFFFFFF4Cu; UPD(0x0C06E8B4u, 1);  /* 0C06E8B2 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFFFu;  /* 0C06E8B4 add #imm,Rn */
	r12 += r11;  /* 0C06E8B6 add Rm,Rn */
	r11 = (u32)(s32)(s16)r8;  /* 0C06E8B8 exts.w Rm,Rn */
	IF(0x0C06E8BAu); T = (s32)r11 >= 0;  /* 0C06E8BA cmp/pz Rn */
	{ u32 c_ = T; r9 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C06E8A4u, 7); goto L_0C06E8A4; } UPD(0x0C06E8C0u, 1); goto L_0C06E8C0; }  /* 0C06E8BC bt/s */
L_0C06E8C0: BLKS(0x0C06E8C0u);
	r13 = 0xC23371Cu; UPD(0x0C06E8C2u, 1);  /* 0C06E8C0 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r9); r9 += 4; r12 = v_; } UPD(0x0C06E8C4u, 1);  /* 0C06E8C2 mov.l @Rm+,Rn */
	W32(r14 + 0x8u, r9); UPD(0x0C06E8C6u, 1);  /* 0C06E8C4 mov.l Rm,@(disp,Rn) */
	T = (r12 & r12) == 0;  /* 0C06E8C6 tst Rm,Rn */
	{ u32 c_ = !T; W32(r13, r12); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06E85Eu, 4); goto L_0C06E85E; } UPD(0x0C06E8CCu, 1); goto L_0C06E8CC; }  /* 0C06E8C8 bf/s */
L_0C06E8CC: BLKS(0x0C06E8CCu);
	r7 = R32(r14 + 0x4u); UPD(0x0C06E8CEu, 1);  /* 0C06E8CC mov.l @(disp,Rm),Rn */
L_0C06E8CE: BLKS(0x0C06E8CEu);
	r4 = 0x7Fu;  /* 0C06E8CE mov #imm,Rn */
	r7 += 0x1u;  /* 0C06E8D0 add #imm,Rn */
	r5 = (u32)(s32)(s16)r7;  /* 0C06E8D2 exts.w Rm,Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C06E8D6u, 4);  /* 0C06E8D4 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C06E8D8u, 1);  /* 0C06E8D6 mov.l Rm,@(disp,Rn) */
	r0 += 0x50u;  /* 0C06E8D8 add #imm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C06E8DCu, 2);  /* 0C06E8DA mov.l @(disp,Rm),Rn */
	T = (s32)r1 > (s32)r4;  /* 0C06E8DC cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06E834u, 4); goto L_0C06E834; } UPD(0x0C06E8E2u, 1); goto L_0C06E8E2; }  /* 0C06E8DE bf/s */
L_0C06E8E2: BLKS(0x0C06E8E2u);
	r14 += 0x14u;  /* 0C06E8E2 add #imm,Rn */
	r15 = r14;  /* 0C06E8E4 mov Rm,Rn */
	IF(0x0C06E8E6u); PR = R32(r15); r15 += 4; UPD(0x0C06E8E8u, 3);  /* 0C06E8E6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06E8EAu, 1);  /* 0C06E8E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06E8ECu, 1);  /* 0C06E8EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06E8EEu, 1);  /* 0C06E8EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06E8F0u, 1);  /* 0C06E8EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06E8F2u, 1);  /* 0C06E8F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06E8F4u, 1);  /* 0C06E8F2 mov.l @Rm+,Rn */
	IF(0x0C06E8F4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06E8F4 rts */
L_0C06E930: BLKS(0x0C06E930u);
	r3 = 0xA8u; UPD(0x0C06E932u, 1);  /* 0C06E930 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C06E932 add Rm,Rn */
	r2 = r3;  /* 0C06E934 mov Rm,Rn */
	r2 += 0x3u;  /* 0C06E936 add #imm,Rn */
	r3 += 0x1u;  /* 0C06E938 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C06E93Cu, 5);  /* 0C06E93A mov.b @Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C06E93Eu, 1);  /* 0C06E93C mov.b @Rm,Rn */
	r5 = r8 & 0xFF;  /* 0C06E93E extu.b Rm,Rn */
	r4 = r6 & 0xFF;  /* 0C06E940 extu.b Rm,Rn */
	T = r5 >= r4;  /* 0C06E942 cmp/hs Rm,Rn */
	{ u32 c_ = !T; r8 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06E8B2u, 6); goto L_0C06E8B2; } goto L_0C06E948; }  /* 0C06E944 bf/s */
L_0C06E948: BLKS(0x0C06E948u);
	r8 = R32(r7 + 0x1Cu); UPD(0x0C06E94Au, 2);  /* 0C06E948 mov.l @(disp,Rm),Rn */
	r10 = 0xC28EDB8u; UPD(0x0C06E94Cu, 1);  /* 0C06E94A mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r9 = v_; } UPD(0x0C06E94Eu, 1);  /* 0C06E94C mov.l @Rm+,Rn */
	T = (r9 & r9) == 0;  /* 0C06E94E tst Rm,Rn */
	{ u32 c_ = T; W32(r10, r9); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06E8B0u, 4); goto L_0C06E8B0; } UPD(0x0C06E954u, 1); goto L_0C06E954; }  /* 0C06E950 bt/s */
L_0C06E954: BLKS(0x0C06E954u);
	r9 = r7;  /* 0C06E954 mov Rm,Rn */
	r7 += 0x44u;  /* 0C06E956 add #imm,Rn */
	W32(r14 + 0xCu, r7); UPD(0x0C06E95Au, 3);  /* 0C06E958 mov.l Rm,@(disp,Rn) */
	IF(0x0C06E95Au); ;  /* 0C06E95A nop */
	UPD(0x0C06E95Cu, 1);
L_0C06E95C: BLKS(0x0C06E95Cu);
	{ u32 v_ = R32(r8); r8 += 4; r6 = v_; } UPD(0x0C06E95Eu, 1);  /* 0C06E95C mov.l @Rm+,Rn */
	r7 = 0xC297484u; UPD(0x0C06E960u, 1);  /* 0C06E95E mov.l @(disp,pc),Rn */
	W32(r7, r6); UPD(0x0C06E962u, 1);  /* 0C06E960 mov.l Rm,@Rn */
	{ u32 v_ = R32(r8); r8 += 4; r10 = v_; } UPD(0x0C06E964u, 1);  /* 0C06E962 mov.l @Rm+,Rn */
	r0 = R32(r9 + 0x24u); UPD(0x0C06E966u, 1);  /* 0C06E964 mov.l @(disp,Rm),Rn */
	r3 = 0xC3B1B00u; UPD(0x0C06E968u, 1);  /* 0C06E966 mov.l @(disp,pc),Rn */
	r0 += r10;  /* 0C06E968 add Rm,Rn */
	W32(r3, r0); UPD(0x0C06E96Cu, 2);  /* 0C06E96A mov.l Rm,@Rn */
	r4 = 0xC239488u; UPD(0x0C06E96Eu, 1);  /* 0C06E96C mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C06E970u, 1);  /* 0C06E96E mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r2 = v_; } UPD(0x0C06E972u, 1);  /* 0C06E970 mov.l @Rm+,Rn */
	r5 = 0xC3C4024u; UPD(0x0C06E974u, 1);  /* 0C06E972 mov.l @(disp,pc),Rn */
	r7 += r2;  /* 0C06E974 add Rm,Rn */
	r3 = R32(r4); UPD(0x0C06E978u, 2);  /* 0C06E976 mov.l @Rm,Rn */
	r3 -= r0;  /* 0C06E978 sub Rm,Rn */
	IF(0x0C06E97Au); T = (s32)r3 >= 0;  /* 0C06E97A cmp/pz Rn */
	{ u32 c_ = !T; W32(r5, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06EA70u, 5); goto L_0C06EA70; } UPD(0x0C06E980u, 1); goto L_0C06E980; }  /* 0C06E97C bf/s */
L_0C06E980: BLKS(0x0C06E980u);
	r10 = 0xC28EDB8u; UPD(0x0C06E982u, 1);  /* 0C06E980 mov.l @(disp,pc),Rn */
	r2 = 0xC23371Cu; UPD(0x0C06E984u, 1);  /* 0C06E982 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C06E986u, 1);  /* 0C06E984 mov.l @Rm,Rn */
	r5 = 0xFFFFFFFu; UPD(0x0C06E988u, 1);  /* 0C06E986 mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C06E98Au, 1);  /* 0C06E988 mov.l @Rm,Rn */
	r5 &= r0;  /* 0C06E98A and Rm,Rn */
	r4 += r5;  /* 0C06E98C add Rm,Rn */
	T = (s32)r3 >= (s32)r4;  /* 0C06E98E cmp/ge Rm,Rn */
	if (T) { UPD(0x0C06EA0Eu, 6); goto L_0C06EA0E; }  /* 0C06E990 bt */
L_0C06E992: BLKS(0x0C06E992u);
	r3 = 0xC23948Cu; UPD(0x0C06E994u, 1);  /* 0C06E992 mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C06E996u, 1);  /* 0C06E994 mov.l @Rm,Rn */
	r2 -= r7;  /* 0C06E996 sub Rm,Rn */
	IF(0x0C06E998u); T = (s32)r2 >= 0;  /* 0C06E998 cmp/pz Rn */
	if (!T) { UPD(0x0C06EA60u, 5); goto L_0C06EA60; }  /* 0C06E99A bf */
L_0C06E99C: BLKS(0x0C06E99Cu);
	r4 = 0xC2ABAA8u; UPD(0x0C06E99Eu, 1);  /* 0C06E99C mov.l @(disp,pc),Rn */
	r7 = R32(r4); UPD(0x0C06E9A0u, 1);  /* 0C06E99E mov.l @Rm,Rn */
	r7 += r6;  /* 0C06E9A0 add Rm,Rn */
	T = (s32)r2 >= (s32)r7;  /* 0C06E9A2 cmp/ge Rm,Rn */
	{ u32 c_ = T; r2 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C06EA0Eu, 5); goto L_0C06EA0E; } UPD(0x0C06E9A8u, 1); goto L_0C06E9A8; }  /* 0C06E9A4 bt/s */
L_0C06E9A8: BLKS(0x0C06E9A8u);
	r10 = 0x2800u; UPD(0x0C06E9AAu, 1);  /* 0C06E9A8 mov.w @(disp,pc),Rn */
	IF(0x0C06E9AAu); MACL = r2 * r10;  /* 0C06E9AA mul.l Rm,Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C06E9AEu, 3);  /* 0C06E9AC mov.l @(disp,Rm),Rn */
	r6 = 0xC229004u; UPD(0x0C06E9B0u, 1);  /* 0C06E9AE mov.l @(disp,pc),Rn */
	IF(0x0C06E9B0u); r10 = MACL;  /* 0C06E9B0 sts macl,Rn */
	r10 += r1;  /* 0C06E9B2 add Rm,Rn */
	r10 += r6;  /* 0C06E9B4 add Rm,Rn */
	r6 = R32(r10); UPD(0x0C06E9B8u, 4);  /* 0C06E9B6 mov.l @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C06E9BAu, 1);  /* 0C06E9B8 mov.l @(disp,pc),Rn */
	T = (r6 & r5) == 0;  /* 0C06E9BA tst Rm,Rn */
	if (!T) { UPD(0x0C06E9D2u, 4); goto L_0C06E9D2; }  /* 0C06E9BC bf */
L_0C06E9BE: BLKS(0x0C06E9BEu);
	r4 = 0x2A0u; UPD(0x0C06E9C0u, 1);  /* 0C06E9BE mov.w @(disp,pc),Rn */
	IF(0x0C06E9C0u); MACL = r2 * r4;  /* 0C06E9C0 mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C06E9C4u, 3);  /* 0C06E9C2 mov.l @(disp,pc),Rn */
	IF(0x0C06E9C4u); r3 = MACL;  /* 0C06E9C4 sts macl,Rn */
	r3 += r5;  /* 0C06E9C6 add Rm,Rn */
	r4 += 0xFFFFFFF0u;  /* 0C06E9C8 add #imm,Rn */
	r3 += r4;  /* 0C06E9CA add Rm,Rn */
	r2 = R32(r3); UPD(0x0C06E9CEu, 5);  /* 0C06E9CC mov.l @Rm,Rn */
	r2 += 0xAu;  /* 0C06E9CE add #imm,Rn */
	W32(r3, r2); UPD(0x0C06E9D2u, 2);  /* 0C06E9D0 mov.l Rm,@Rn */
L_0C06E9D2: BLKS(0x0C06E9D2u);
	r3 = R32(r9); UPD(0x0C06E9D4u, 1);  /* 0C06E9D2 mov.l @Rm,Rn */
	r7 = 0x20000000u; UPD(0x0C06E9D6u, 1);  /* 0C06E9D4 mov.l @(disp,pc),Rn */
	T = (r3 & r7) == 0;  /* 0C06E9D6 tst Rm,Rn */
	{ u32 c_ = !T; r0 |= r3; /* slot or Rm,Rn */ if (c_) { UPD(0x0C06EA04u, 4); goto L_0C06EA04; } goto L_0C06E9DC; }  /* 0C06E9D8 bf/s */
L_0C06E9DC: BLKS(0x0C06E9DCu);
	r9 += 0x3Cu;  /* 0C06E9DC add #imm,Rn */
	r3 &= r6;  /* 0C06E9DE and Rm,Rn */
	r2 = 0xFFFFFFE3u;  /* 0C06E9E0 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C06E9E4u, 5);  /* 0C06E9E2 mov.w @Rm,Rn */
	IF(0x0C06E9E4u); r3 >>= 8;  /* 0C06E9E4 shlr8 Rn */
	IF(0x0C06E9E6u); ARG0(0x402Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C06E9E6 shad Rm,Rn */
	r3 += r3;  /* 0C06E9E8 add Rm,Rn */
	r5 = 0xFu;  /* 0C06E9EA mov #imm,Rn */
	T = (s32)r5 >= (s32)r4;  /* 0C06E9EC cmp/ge Rm,Rn */
	IF(0x0C06E9EEu); r3 >>= 8;  /* 0C06E9EE shlr8 Rn */
	r7 = 0x1u;  /* 0C06E9F0 mov #imm,Rn */
	IF(0x0C06E9F2u); r2 = T;  /* 0C06E9F2 movt Rn */
	r0 ^= 0x1u;  /* 0C06E9F4 xor #imm,r0 */
	r3 &= r7;  /* 0C06E9F6 and Rm,Rn */
	r0 &= 0x1u;  /* 0C06E9F8 and #imm,r0 */
	r3 &= r2;  /* 0C06E9FA and Rm,Rn */
	r0 |= r3;  /* 0C06E9FC or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06E9FE tst Rm,Rn */
	{ u32 c_ = !T; r9 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06EA20u, 17); goto L_0C06EA20; } UPD(0x0C06EA04u, 1); goto L_0C06EA04; }  /* 0C06EA00 bf/s */
L_0C06EA04: BLKS(0x0C06EA04u);
	r10 = 0xC07B910u; UPD(0x0C06EA06u, 1);  /* 0C06EA04 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C06EA06 mov Rm,Rn */
	r4 = R32(r14); UPD(0x0C06EA0Au, 2);  /* 0C06EA08 mov.l @Rm,Rn */
	IF(0x0C06EA0Au); { u32 t_ = r10; PR = 0x0C06EA0Eu; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07B910, 0x0C07B910u, 0x0C06EA0Eu); }  /* 0C06EA0A jsr @Rn */
L_0C06EA0E: BLKS(0x0C06EA0Eu);
	{ u32 v_ = R32(r8); r8 += 4; r6 = v_; } UPD(0x0C06EA10u, 1);  /* 0C06EA0E mov.l @Rm+,Rn */
	r3 = 0xC28EDB8u; UPD(0x0C06EA12u, 1);  /* 0C06EA10 mov.l @(disp,pc),Rn */
	T = (r6 & r6) == 0;  /* 0C06EA12 tst Rm,Rn */
	{ u32 c_ = !T; W32(r3, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06E95Cu, 4); goto L_0C06E95C; } UPD(0x0C06EA18u, 1); goto L_0C06EA18; }  /* 0C06EA14 bf/s */
L_0C06EA18: BLKS(0x0C06EA18u);
	{ r8 = r11; /* slot mov Rm,Rn */ UPD(0x0C06E8B2u, 3); goto L_0C06E8B2; }  /* 0C06EA18 bra */
L_0C06EA20: BLKS(0x0C06EA20u);
	r0 = 0xC0A8E90u; UPD(0x0C06EA22u, 1);  /* 0C06EA20 mov.l @(disp,pc),Rn */
	r10 += 0x38u;  /* 0C06EA22 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C06EA26u, 2);  /* 0C06EA24 mov.w @Rm,Rn */
	r5 = r11;  /* 0C06EA26 mov Rm,Rn */
	IF(0x0C06EA28u); { u32 t_ = r0; PR = 0x0C06EA2Cu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8E90, 0x0C0A8E90u, 0x0C06EA2Cu); }  /* 0C06EA28 jsr @Rn */
L_0C06EA2C: BLKS(0x0C06EA2Cu);
	T = (r0 & r0) == 0;  /* 0C06EA2C tst Rm,Rn */
	{ u32 c_ = T; r10 += 0xFFFFFFC8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06EA04u, 4); goto L_0C06EA04; } goto L_0C06EA32; }  /* 0C06EA2E bt/s */
L_0C06EA32: BLKS(0x0C06EA32u);
	r6 = R32(r10); UPD(0x0C06EA34u, 2);  /* 0C06EA32 mov.l @Rm,Rn */
	r0 = 0x8000u; UPD(0x0C06EA36u, 1);  /* 0C06EA34 mov.l @(disp,pc),Rn */
	T = (r6 & r0) == 0;  /* 0C06EA36 tst Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C06EA04u, 4); goto L_0C06EA04; } UPD(0x0C06EA3Cu, 1); goto L_0C06EA3C; }  /* 0C06EA38 bf/s */
L_0C06EA3C: BLKS(0x0C06EA3Cu);
	r2 = 0x2A0u; UPD(0x0C06EA3Eu, 1);  /* 0C06EA3C mov.w @(disp,pc),Rn */
	IF(0x0C06EA3Eu); MACL = r0 * r2;  /* 0C06EA3E mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C06EA42u, 3);  /* 0C06EA40 mov.l @(disp,pc),Rn */
	IF(0x0C06EA42u); r10 = MACL;  /* 0C06EA42 sts macl,Rn */
	r5 = 0x290u; UPD(0x0C06EA46u, 2);  /* 0C06EA44 mov.w @(disp,pc),Rn */
	r10 += r7;  /* 0C06EA46 add Rm,Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C06EA4Au, 2);  /* 0C06EA48 mov.l @(disp,Rm),Rn */
	r10 += r5;  /* 0C06EA4A add Rm,Rn */
	r3 = R32(r10); UPD(0x0C06EA4Eu, 2);  /* 0C06EA4C mov.l @Rm,Rn */
	r1 = R32(r4); UPD(0x0C06EA50u, 1);  /* 0C06EA4E mov.l @Rm,Rn */
	r3 += r1;  /* 0C06EA50 add Rm,Rn */
	{ W32(r10, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C06EA04u, 4); goto L_0C06EA04; }  /* 0C06EA52 bra */
L_0C06EA60: BLKS(0x0C06EA60u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C06E99Cu, 3); goto L_0C06E99C; }  /* 0C06EA60 bra */
L_0C06EA70: BLKS(0x0C06EA70u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C06E980u, 3); goto L_0C06E980; }  /* 0C06EA70 bra */
}

/* FUN_0c06eac0 */
void blk_f_0C06EAC0(sh3_t *c)
{
	LOCALS;
L_0C06EAC0: BLKS(0x0C06EAC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06EAC2u, 1);  /* 0C06EAC0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06EAC4u, 1);  /* 0C06EAC2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06EAC6u, 1);  /* 0C06EAC4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06EAC8u, 1);  /* 0C06EAC6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06EACAu, 1);  /* 0C06EAC8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06EACCu, 1);  /* 0C06EACA mov.l Rm,@-Rn */
	r12 = 0x0u;  /* 0C06EACC mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06EAD0u, 2);  /* 0C06EACE mov.l Rm,@-Rn */
	r13 = 0x0u;  /* 0C06EAD0 mov #imm,Rn */
	IF(0x0C06EAD2u); r15 -= 4; W32(r15, PR); UPD(0x0C06EAD4u, 2);  /* 0C06EAD2 sts.l pr,@-Rn */
	r2 = 0xC2380B2u; UPD(0x0C06EAD6u, 1);  /* 0C06EAD4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06EAD6 mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C06EADAu, 2);  /* 0C06EAD8 mov.w @Rm,Rn */
	r10 = r0;  /* 0C06EADA mov Rm,Rn */
	r10 += 0x1u;  /* 0C06EADC add #imm,Rn */
	r0 = 0x1u;  /* 0C06EADE mov #imm,Rn */
	r10 &= r0;  /* 0C06EAE0 and Rm,Rn */
	UPD(0x0C06EAE2u, 4);
L_0C06EAE2: BLKS(0x0C06EAE2u);
	r3 = 0x2800u; UPD(0x0C06EAE4u, 1);  /* 0C06EAE2 mov.w @(disp,pc),Rn */
	IF(0x0C06EAE4u); MACL = r10 * r3;  /* 0C06EAE4 mul.l Rm,Rn */
	r5 = 0xC229004u; UPD(0x0C06EAE8u, 3);  /* 0C06EAE6 mov.l @(disp,pc),Rn */
	IF(0x0C06EAE8u); r3 = MACL;  /* 0C06EAE8 sts macl,Rn */
	r3 += r12;  /* 0C06EAEA add Rm,Rn */
	r3 += r5;  /* 0C06EAEC add Rm,Rn */
	r1 = R32(r3); UPD(0x0C06EAF0u, 4);  /* 0C06EAEE mov.l @Rm,Rn */
	r4 = 0x4000000u; UPD(0x0C06EAF2u, 1);  /* 0C06EAF0 mov.l @(disp,pc),Rn */
	T = (r1 & r4) == 0;  /* 0C06EAF2 tst Rm,Rn */
	{ u32 c_ = T; r4 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06EBB6u, 4); goto L_0C06EBB6; } goto L_0C06EAF8; }  /* 0C06EAF4 bt/s */
L_0C06EAF8: BLKS(0x0C06EAF8u);
	r11 = R32(r3 + 0x1Cu); UPD(0x0C06EAFAu, 2);  /* 0C06EAF8 mov.l @(disp,Rm),Rn */
	r7 = 0xC23371Cu; UPD(0x0C06EAFCu, 1);  /* 0C06EAFA mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r11); r11 += 4; r6 = v_; } UPD(0x0C06EAFEu, 1);  /* 0C06EAFC mov.l @Rm+,Rn */
	T = (r6 & r6) == 0;  /* 0C06EAFE tst Rm,Rn */
	{ u32 c_ = T; W32(r7, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06EBB4u, 4); goto L_0C06EBB4; } UPD(0x0C06EB04u, 1); goto L_0C06EB04; }  /* 0C06EB00 bt/s */
L_0C06EB04: BLKS(0x0C06EB04u);
	r1 = 0x2800u; UPD(0x0C06EB06u, 1);  /* 0C06EB04 mov.w @(disp,pc),Rn */
	IF(0x0C06EB06u); MACL = r10 * r1;  /* 0C06EB06 mul.l Rm,Rn */
	{ u32 v_ = R32(r11); r11 += 4; r8 = v_; } UPD(0x0C06EB0Au, 3);  /* 0C06EB08 mov.l @Rm+,Rn */
	r7 = 0xC2ABAA8u; UPD(0x0C06EB0Cu, 1);  /* 0C06EB0A mov.l @(disp,pc),Rn */
	IF(0x0C06EB0Cu); r4 = MACL;  /* 0C06EB0C sts macl,Rn */
	r6 = 0xC229004u; UPD(0x0C06EB10u, 2);  /* 0C06EB0E mov.l @(disp,pc),Rn */
	r4 += r12;  /* 0C06EB10 add Rm,Rn */
	W32(r7, r8); UPD(0x0C06EB14u, 2);  /* 0C06EB12 mov.l Rm,@Rn */
	r4 += r6;  /* 0C06EB14 add Rm,Rn */
	{ u32 v_ = R32(r11); r11 += 4; r2 = v_; } UPD(0x0C06EB18u, 2);  /* 0C06EB16 mov.l @Rm+,Rn */
	r3 = R32(r4 + 0x24u); UPD(0x0C06EB1Au, 1);  /* 0C06EB18 mov.l @(disp,Rm),Rn */
	r5 = 0xC239488u; UPD(0x0C06EB1Cu, 1);  /* 0C06EB1A mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C06EB1C add Rm,Rn */
	W32(r5, r3); UPD(0x0C06EB20u, 2);  /* 0C06EB1E mov.l Rm,@Rn */
	r9 = R32(r4 + 0x28u); UPD(0x0C06EB22u, 1);  /* 0C06EB20 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r11); r11 += 4; r0 = v_; } UPD(0x0C06EB24u, 1);  /* 0C06EB22 mov.l @Rm+,Rn */
	r8 = 0xC23948Cu; UPD(0x0C06EB26u, 1);  /* 0C06EB24 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C06EB26 add Rm,Rn */
	W32(r8, r9); UPD(0x0C06EB2Au, 2);  /* 0C06EB28 mov.l Rm,@Rn */
	r8 = 0xFFu; UPD(0x0C06EB2Cu, 1);  /* 0C06EB2A mov.w @(disp,pc),Rn */
	r9 = 0x53ACu; UPD(0x0C06EB2Eu, 1);  /* 0C06EB2C mov.w @(disp,pc),Rn */
	IF(0x0C06EB2Eu); ;  /* 0C06EB2E nop */
	UPD(0x0C06EB30u, 1);
L_0C06EB30: BLKS(0x0C06EB30u);
	r3 = 0xC297B40u; UPD(0x0C06EB32u, 1);  /* 0C06EB30 mov.l @(disp,pc),Rn */
	r3 += r9;  /* 0C06EB32 add Rm,Rn */
	r4 = R32(r3); UPD(0x0C06EB36u, 2);  /* 0C06EB34 mov.l @Rm,Rn */
	r0 = 0x1000000u; UPD(0x0C06EB38u, 1);  /* 0C06EB36 mov.l @(disp,pc),Rn */
	T = (r4 & r0) == 0;  /* 0C06EB38 tst Rm,Rn */
	{ u32 c_ = T; r7 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06EBA0u, 4); goto L_0C06EBA0; } goto L_0C06EB3E; }  /* 0C06EB3A bt/s */
L_0C06EB3E: BLKS(0x0C06EB3Eu);
	r7 = R32(r3 + 0x20u); UPD(0x0C06EB40u, 2);  /* 0C06EB3E mov.l @(disp,Rm),Rn */
	r2 = 0xC28F658u; UPD(0x0C06EB42u, 1);  /* 0C06EB40 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r7); r7 += 4; r5 = v_; } UPD(0x0C06EB44u, 1);  /* 0C06EB42 mov.l @Rm+,Rn */
	T = (r5 & r5) == 0;  /* 0C06EB44 tst Rm,Rn */
	{ u32 c_ = T; W32(r2, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06EB9Eu, 4); goto L_0C06EB9E; } UPD(0x0C06EB4Au, 1); goto L_0C06EB4A; }  /* 0C06EB46 bt/s */
L_0C06EB4A: BLKS(0x0C06EB4Au);
	r4 = r3;  /* 0C06EB4A mov Rm,Rn */
	UPD(0x0C06EB4Cu, 1);
L_0C06EB4C: BLKS(0x0C06EB4Cu);
	{ u32 v_ = R32(r7); r7 += 4; r5 = v_; } UPD(0x0C06EB4Eu, 1);  /* 0C06EB4C mov.l @Rm+,Rn */
	r0 = 0xC3B1B08u; UPD(0x0C06EB50u, 1);  /* 0C06EB4E mov.l @(disp,pc),Rn */
	W32(r0, r5); UPD(0x0C06EB52u, 1);  /* 0C06EB50 mov.l Rm,@Rn */
	{ u32 v_ = R32(r7); r7 += 4; r3 = v_; } UPD(0x0C06EB54u, 1);  /* 0C06EB52 mov.l @Rm+,Rn */
	r0 = R32(r4 + 0x28u); UPD(0x0C06EB56u, 1);  /* 0C06EB54 mov.l @(disp,Rm),Rn */
	r6 = 0xC2B1A30u; UPD(0x0C06EB58u, 1);  /* 0C06EB56 mov.l @(disp,pc),Rn */
	r0 += r3;  /* 0C06EB58 add Rm,Rn */
	W32(r6, r0); UPD(0x0C06EB5Cu, 2);  /* 0C06EB5A mov.l Rm,@Rn */
	{ u32 v_ = R32(r7); r7 += 4; r2 = v_; } UPD(0x0C06EB5Eu, 1);  /* 0C06EB5C mov.l @Rm+,Rn */
	r6 = R32(r4 + 0x2Cu); UPD(0x0C06EB60u, 1);  /* 0C06EB5E mov.l @(disp,Rm),Rn */
	r3 = 0xC28EDB4u; UPD(0x0C06EB62u, 1);  /* 0C06EB60 mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C06EB62 add Rm,Rn */
	W32(r3, r6); UPD(0x0C06EB66u, 2);  /* 0C06EB64 mov.l Rm,@Rn */
	r2 = 0xC239488u; UPD(0x0C06EB68u, 1);  /* 0C06EB66 mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C06EB6Au, 1);  /* 0C06EB68 mov.l @Rm,Rn */
	r3 -= r0;  /* 0C06EB6A sub Rm,Rn */
	IF(0x0C06EB6Cu); T = (s32)r3 >= 0;  /* 0C06EB6C cmp/pz Rn */
	if (T) { UPD(0x0C06EB72u, 5); goto L_0C06EB72; }  /* 0C06EB6E bt */
L_0C06EB70: BLKS(0x0C06EB70u);
	r3 = 0u - r3;  /* 0C06EB70 neg Rm,Rn */
	UPD(0x0C06EB72u, 1);
L_0C06EB72: BLKS(0x0C06EB72u);
	r2 = 0xC23371Cu; UPD(0x0C06EB74u, 1);  /* 0C06EB72 mov.l @(disp,pc),Rn */
	r1 = 0xC28F658u; UPD(0x0C06EB76u, 1);  /* 0C06EB74 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C06EB78u, 1);  /* 0C06EB76 mov.l @Rm,Rn */
	r2 = R32(r1); UPD(0x0C06EB7Au, 1);  /* 0C06EB78 mov.l @Rm,Rn */
	r0 += r2;  /* 0C06EB7A add Rm,Rn */
	T = (s32)r3 >= (s32)r0;  /* 0C06EB7C cmp/ge Rm,Rn */
	if (T) { UPD(0x0C06EB94u, 5); goto L_0C06EB94; }  /* 0C06EB7E bt */
L_0C06EB80: BLKS(0x0C06EB80u);
	r3 = 0xC23948Cu; UPD(0x0C06EB82u, 1);  /* 0C06EB80 mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C06EB84u, 1);  /* 0C06EB82 mov.l @Rm,Rn */
	r2 -= r6;  /* 0C06EB84 sub Rm,Rn */
	IF(0x0C06EB86u); T = (s32)r2 >= 0;  /* 0C06EB86 cmp/pz Rn */
	if (!T) { UPD(0x0C06EC70u, 5); goto L_0C06EC70; }  /* 0C06EB88 bf */
L_0C06EB8A: BLKS(0x0C06EB8Au);
	r0 = 0xC2ABAA8u; UPD(0x0C06EB8Cu, 1);  /* 0C06EB8A mov.l @(disp,pc),Rn */
	r6 = R32(r0); UPD(0x0C06EB8Eu, 1);  /* 0C06EB8C mov.l @Rm,Rn */
	r6 += r5;  /* 0C06EB8E add Rm,Rn */
	T = (s32)r2 >= (s32)r6;  /* 0C06EB90 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C06EBE0u, 5); goto L_0C06EBE0; }  /* 0C06EB92 bf */
L_0C06EB94: BLKS(0x0C06EB94u);
	{ u32 v_ = R32(r7); r7 += 4; r0 = v_; } UPD(0x0C06EB96u, 1);  /* 0C06EB94 mov.l @Rm+,Rn */
	r5 = 0xC28F658u; UPD(0x0C06EB98u, 1);  /* 0C06EB96 mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C06EB98 tst Rm,Rn */
	{ u32 c_ = !T; W32(r5, r0); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06EB4Cu, 4); goto L_0C06EB4C; } UPD(0x0C06EB9Eu, 1); goto L_0C06EB9E; }  /* 0C06EB9A bf/s */
L_0C06EB9E: BLKS(0x0C06EB9Eu);
	r7 = r8;  /* 0C06EB9E mov Rm,Rn */
	UPD(0x0C06EBA0u, 1);
L_0C06EBA0: BLKS(0x0C06EBA0u);
	r7 += 0xFFFFFFFFu;  /* 0C06EBA0 add #imm,Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C06EBA2 exts.w Rm,Rn */
	IF(0x0C06EBA4u); T = (s32)r8 >= 0;  /* 0C06EBA4 cmp/pz Rn */
	{ u32 c_ = T; r9 += 0xFFFFFFACu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06EB30u, 6); goto L_0C06EB30; } goto L_0C06EBAA; }  /* 0C06EBA6 bt/s */
L_0C06EBAA: BLKS(0x0C06EBAAu);
	{ u32 v_ = R32(r11); r11 += 4; r9 = v_; } UPD(0x0C06EBACu, 2);  /* 0C06EBAA mov.l @Rm+,Rn */
	r8 = 0xC23371Cu; UPD(0x0C06EBAEu, 1);  /* 0C06EBAC mov.l @(disp,pc),Rn */
	T = (r9 & r9) == 0;  /* 0C06EBAE tst Rm,Rn */
	{ u32 c_ = !T; W32(r8, r9); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06EB04u, 4); goto L_0C06EB04; } UPD(0x0C06EBB4u, 1); goto L_0C06EBB4; }  /* 0C06EBB0 bf/s */
L_0C06EBB4: BLKS(0x0C06EBB4u);
	r4 = r13;  /* 0C06EBB4 mov Rm,Rn */
	UPD(0x0C06EBB6u, 1);
L_0C06EBB6: BLKS(0x0C06EBB6u);
	r4 += 0x1u;  /* 0C06EBB6 add #imm,Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C06EBB8 exts.w Rm,Rn */
	r11 = 0x7Fu;  /* 0C06EBBA mov #imm,Rn */
	T = (s32)r13 > (s32)r11;  /* 0C06EBBC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 += 0x50u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06EAE2u, 7); goto L_0C06EAE2; } goto L_0C06EBC2; }  /* 0C06EBBE bf/s */
L_0C06EBC2: BLKS(0x0C06EBC2u);
	r15 = r14;  /* 0C06EBC2 mov Rm,Rn */
	IF(0x0C06EBC4u); PR = R32(r15); r15 += 4; UPD(0x0C06EBC6u, 3);  /* 0C06EBC4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06EBC8u, 1);  /* 0C06EBC6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06EBCAu, 1);  /* 0C06EBC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06EBCCu, 1);  /* 0C06EBCA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06EBCEu, 1);  /* 0C06EBCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06EBD0u, 1);  /* 0C06EBCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06EBD2u, 1);  /* 0C06EBD0 mov.l @Rm+,Rn */
	IF(0x0C06EBD2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06EBD2 rts */
L_0C06EBE0: BLKS(0x0C06EBE0u);
	r2 = 0x2800u; UPD(0x0C06EBE2u, 1);  /* 0C06EBE0 mov.w @(disp,pc),Rn */
	IF(0x0C06EBE2u); MACL = r10 * r2;  /* 0C06EBE2 mul.l Rm,Rn */
	r5 = 0xC229004u; UPD(0x0C06EBE6u, 3);  /* 0C06EBE4 mov.l @(disp,pc),Rn */
	IF(0x0C06EBE6u); r6 = MACL;  /* 0C06EBE6 sts macl,Rn */
	r6 += r12;  /* 0C06EBE8 add Rm,Rn */
	r6 += r5;  /* 0C06EBEA add Rm,Rn */
	r1 = R32(r6); UPD(0x0C06EBEEu, 4);  /* 0C06EBEC mov.l @Rm,Rn */
	r7 = 0x8000u; UPD(0x0C06EBF0u, 1);  /* 0C06EBEE mov.l @(disp,pc),Rn */
	T = (r1 & r7) == 0;  /* 0C06EBF0 tst Rm,Rn */
	{ u32 c_ = !T; r7 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06EC14u, 4); goto L_0C06EC14; } goto L_0C06EBF6; }  /* 0C06EBF2 bf/s */
L_0C06EBF6: BLKS(0x0C06EBF6u);
	r5 = 0x2A0u; UPD(0x0C06EBF8u, 2);  /* 0C06EBF6 mov.w @(disp,pc),Rn */
	IF(0x0C06EBF8u); MACL = r10 * r5;  /* 0C06EBF8 mul.l Rm,Rn */
	r1 = 0xC29D1D8u; UPD(0x0C06EBFCu, 3);  /* 0C06EBFA mov.l @(disp,pc),Rn */
	IF(0x0C06EBFCu); r0 = MACL;  /* 0C06EBFC sts macl,Rn */
	r5 += 0xFFFFFFF0u;  /* 0C06EBFE add #imm,Rn */
	r0 += r1;  /* 0C06EC00 add Rm,Rn */
	r0 += r5;  /* 0C06EC02 add Rm,Rn */
	r5 = R32(r4 + 0x8u); UPD(0x0C06EC06u, 5);  /* 0C06EC04 mov.l @(disp,Rm),Rn */
	r3 = R32(r4 + 0x14u); UPD(0x0C06EC08u, 1);  /* 0C06EC06 mov.l @(disp,Rm),Rn */
	IF(0x0C06EC08u); ARG0(0x457Du); { s32 s_ = (s32)r7; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C06EC08 shld Rm,Rn */
	r5 += r3;  /* 0C06EC0A add Rm,Rn */
	r4 = R32(r0); UPD(0x0C06EC0Eu, 3);  /* 0C06EC0C mov.l @Rm,Rn */
	r3 = R32(r5 + 0x8u); UPD(0x0C06EC10u, 1);  /* 0C06EC0E mov.l @(disp,Rm),Rn */
	r4 += r3;  /* 0C06EC10 add Rm,Rn */
	W32(r0, r4); UPD(0x0C06EC14u, 2);  /* 0C06EC12 mov.l Rm,@Rn */
L_0C06EC14: BLKS(0x0C06EC14u);
	r0 = R32(r6 + 0x4u); UPD(0x0C06EC16u, 1);  /* 0C06EC14 mov.l @(disp,Rm),Rn */
	r4 = 0x1u;  /* 0C06EC16 mov #imm,Rn */
	r3 = r0;  /* 0C06EC18 mov Rm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C06EC1A add #imm,Rn */
	T = r3 > r4;  /* 0C06EC1C cmp/hi Rm,Rn */
	{ u32 c_ = T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C06EC50u, 7); goto L_0C06EC50; } goto L_0C06EC22; }  /* 0C06EC1E bt/s */
L_0C06EC22: BLKS(0x0C06EC22u);
	r0 = R32(r6 + 0x8u); UPD(0x0C06EC24u, 2);  /* 0C06EC22 mov.l @(disp,Rm),Rn */
	T = r0 == 0x1u;  /* 0C06EC24 cmp/eq #imm,r0 */
	{ u32 c_ = T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C06EC40u, 4); goto L_0C06EC40; } goto L_0C06EC2A; }  /* 0C06EC26 bt/s */
L_0C06EC2A: BLKS(0x0C06EC2Au);
	if (T) { UPD(0x0C06EB9Eu, 4); goto L_0C06EB9E; }  /* 0C06EC2A bt */
L_0C06EC2C: BLKS(0x0C06EC2Cu);
	r4 = r10;  /* 0C06EC2C mov Rm,Rn */
	r5 = r8;  /* 0C06EC2E mov Rm,Rn */
	r6 = 0x0u;  /* 0C06EC30 mov #imm,Rn */
	UPD(0x0C06EC32u, 3);
L_0C06EC32: BLKS(0x0C06EC32u);
	r0 = 0xC0BC240u; UPD(0x0C06EC34u, 1);  /* 0C06EC32 mov.l @(disp,pc),Rn */
	IF(0x0C06EC34u); { u32 t_ = r0; PR = 0x0C06EC38u; IF(0x0C06EC36u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC240, 0x0C0BC240u, 0x0C06EC38u); }  /* 0C06EC34 jsr @Rn */
L_0C06EC38: BLKS(0x0C06EC38u);
	{ r7 = r8; /* slot mov Rm,Rn */ UPD(0x0C06EBA0u, 3); goto L_0C06EBA0; }  /* 0C06EC38 bra */
L_0C06EC40: BLKS(0x0C06EC40u);
	r4 = r10;  /* 0C06EC40 mov Rm,Rn */
	r5 = r8;  /* 0C06EC42 mov Rm,Rn */
	{ r6 = 0x2u; /* slot mov #imm,Rn */ UPD(0x0C06EC32u, 5); goto L_0C06EC32; }  /* 0C06EC44 bra */
L_0C06EC50: BLKS(0x0C06EC50u);
	{ u32 c_ = T; T = r0 == 0x9u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C06EC2Cu, 3); goto L_0C06EC2C; } goto L_0C06EC54; }  /* 0C06EC50 bt/s */
L_0C06EC54: BLKS(0x0C06EC54u);
	{ u32 c_ = T; T = r0 == 0xAu; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C06EC2Cu, 4); goto L_0C06EC2C; } goto L_0C06EC58; }  /* 0C06EC54 bt/s */
L_0C06EC58: BLKS(0x0C06EC58u);
	{ u32 c_ = T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06EC2Cu, 4); goto L_0C06EC2C; } goto L_0C06EC5C; }  /* 0C06EC58 bt/s */
L_0C06EC5C: BLKS(0x0C06EC5Cu);
	r6 = 0xC239484u; UPD(0x0C06EC5Eu, 2);  /* 0C06EC5C mov.l @(disp,pc),Rn */
	W32(r6, r2); UPD(0x0C06EC60u, 1);  /* 0C06EC5E mov.l Rm,@Rn */
	r4 = r10;  /* 0C06EC60 mov Rm,Rn */
	r5 = r8;  /* 0C06EC62 mov Rm,Rn */
	{ r6 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C06EC32u, 5); goto L_0C06EC32; }  /* 0C06EC64 bra */
L_0C06EC70: BLKS(0x0C06EC70u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C06EB8Au, 3); goto L_0C06EB8A; }  /* 0C06EC70 bra */
}

/* FUN_0c06ecd0 */
void blk_f_0C06ECD0(sh3_t *c)
{
	LOCALS;
L_0C06ECD0: BLKS(0x0C06ECD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06ECD2u, 1);  /* 0C06ECD0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06ECD4u, 1);  /* 0C06ECD2 mov.l Rm,@-Rn */
	r8 = 0x1u;  /* 0C06ECD4 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06ECD8u, 2);  /* 0C06ECD6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06ECDAu, 1);  /* 0C06ECD8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06ECDCu, 1);  /* 0C06ECDA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06ECDEu, 1);  /* 0C06ECDC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06ECE0u, 1);  /* 0C06ECDE mov.l Rm,@-Rn */
	r4 = 0xC2380B2u; UPD(0x0C06ECE2u, 1);  /* 0C06ECE0 mov.l @(disp,pc),Rn */
	IF(0x0C06ECE2u); r15 -= 4; W32(r15, PR); UPD(0x0C06ECE4u, 1);  /* 0C06ECE2 sts.l pr,@-Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C06ECE6u, 1);  /* 0C06ECE4 mov.w @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C06ECE6 add #imm,Rn */
	r2 = 0x2A0u; UPD(0x0C06ECEAu, 2);  /* 0C06ECE8 mov.w @(disp,pc),Rn */
	r8 &= r3;  /* 0C06ECEA and Rm,Rn */
	IF(0x0C06ECECu); MACL = r8 * r2;  /* 0C06ECEC mul.l Rm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C06ECF0u, 4);  /* 0C06ECEE mov.l @(disp,pc),Rn */
	IF(0x0C06ECF0u); r3 = MACL;  /* 0C06ECF0 sts macl,Rn */
	r3 += r0;  /* 0C06ECF2 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C06ECF6u, 3);  /* 0C06ECF4 mov.l @Rm,Rn */
	r0 = 0x8000000u; UPD(0x0C06ECF8u, 1);  /* 0C06ECF6 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C06ECF8 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06ED30u, 4); goto L_0C06ED30; } goto L_0C06ECFE; }  /* 0C06ECFA bt/s */
L_0C06ECFE: BLKS(0x0C06ECFEu);
	r5 = R32(r3 + 0x4u); UPD(0x0C06ED00u, 2);  /* 0C06ECFE mov.l @(disp,Rm),Rn */
	r2 = 0x3u;  /* 0C06ED00 mov #imm,Rn */
	r0 = 0xC17E12Cu; UPD(0x0C06ED04u, 2);  /* 0C06ED02 mov.l @(disp,pc),Rn */
	IF(0x0C06ED04u); ARG0(0x452Du); { s32 s_ = (s32)r2; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C06ED04 shld Rm,Rn */
	IF(0x0C06ED06u); r4 = R32(r0 + r5); UPD(0x0C06ED08u, 2);  /* 0C06ED06 mov.l @(r0,Rm),Rn */
	r1 = 0x4u;  /* 0C06ED08 mov #imm,Rn */
	W32(r14, r4); UPD(0x0C06ED0Cu, 2);  /* 0C06ED0A mov.l Rm,@Rn */
	r11 = 0x3u;  /* 0C06ED0C mov #imm,Rn */
	r13 = R32(r3 + 0x8u); UPD(0x0C06ED10u, 2);  /* 0C06ED0E mov.l @(disp,Rm),Rn */
	r0 = R32(r14); UPD(0x0C06ED12u, 1);  /* 0C06ED10 mov.l @Rm,Rn */
	IF(0x0C06ED12u); ARG0(0x4D1Du); { s32 s_ = (s32)r1; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C06ED12 shld Rm,Rn */
	IF(0x0C06ED14u); r12 = R32(r0 + r13); UPD(0x0C06ED16u, 2);  /* 0C06ED14 mov.l @(r0,Rm),Rn */
	r7 = R32(r3 + 0xCu); UPD(0x0C06ED18u, 1);  /* 0C06ED16 mov.l @(disp,Rm),Rn */
	W32(r14, r12); UPD(0x0C06ED1Au, 1);  /* 0C06ED18 mov.l Rm,@Rn */
	IF(0x0C06ED1Au); ARG0(0x47BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C06ED1A shld Rm,Rn */
	r10 = R32(r14); UPD(0x0C06ED1Eu, 2);  /* 0C06ED1C mov.l @Rm,Rn */
	r7 += r10;  /* 0C06ED1E add Rm,Rn */
	r9 = R32(r7 + 0x4u); UPD(0x0C06ED22u, 2);  /* 0C06ED20 mov.l @(disp,Rm),Rn */
	r6 = r9;  /* 0C06ED22 mov Rm,Rn */
	{ u32 v_ = R32(r6); r6 += 4; r5 = v_; } UPD(0x0C06ED26u, 2);  /* 0C06ED24 mov.l @Rm+,Rn */
	r7 = 0xC2B0800u; UPD(0x0C06ED28u, 1);  /* 0C06ED26 mov.l @(disp,pc),Rn */
	T = (r5 & r5) == 0;  /* 0C06ED28 tst Rm,Rn */
	W32(r14, r6); UPD(0x0C06ED2Cu, 2);  /* 0C06ED2A mov.l Rm,@Rn */
	{ u32 c_ = !T; W32(r7, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06ED34u, 3); goto L_0C06ED34; } UPD(0x0C06ED30u, 1); goto L_0C06ED30; }  /* 0C06ED2C bf/s */
L_0C06ED30: BLKS(0x0C06ED30u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C06EE4Eu, 3); goto L_0C06EE4E; }  /* 0C06ED30 bra */
L_0C06ED34: BLKS(0x0C06ED34u);
	r6 = R32(r14); UPD(0x0C06ED36u, 1);  /* 0C06ED34 mov.l @Rm,Rn */
L_0C06ED36: BLKS(0x0C06ED36u);
	r2 = 0x2A0u; UPD(0x0C06ED38u, 1);  /* 0C06ED36 mov.w @(disp,pc),Rn */
	{ u32 v_ = R32(r6); r6 += 4; r3 = v_; } UPD(0x0C06ED3Au, 1);  /* 0C06ED38 mov.l @Rm+,Rn */
	IF(0x0C06ED3Au); MACL = r8 * r2;  /* 0C06ED3A mul.l Rm,Rn */
	W32(r14, r6); UPD(0x0C06ED3Eu, 3);  /* 0C06ED3C mov.l Rm,@Rn */
	r0 = 0xC23DEA0u; UPD(0x0C06ED40u, 1);  /* 0C06ED3E mov.l @(disp,pc),Rn */
	IF(0x0C06ED40u); r12 = MACL;  /* 0C06ED40 sts macl,Rn */
	r1 = 0xC29D1D8u; UPD(0x0C06ED44u, 2);  /* 0C06ED42 mov.l @(disp,pc),Rn */
	W32(r0, r3); UPD(0x0C06ED46u, 1);  /* 0C06ED44 mov.l Rm,@Rn */
	r12 += r1;  /* 0C06ED46 add Rm,Rn */
	r11 = R32(r14); UPD(0x0C06ED4Au, 2);  /* 0C06ED48 mov.l @Rm,Rn */
	r4 = R32(r12 + 0x10u); UPD(0x0C06ED4Cu, 1);  /* 0C06ED4A mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r11); r11 += 4; r5 = v_; } UPD(0x0C06ED4Eu, 1);  /* 0C06ED4C mov.l @Rm+,Rn */
	r13 = 0xC286314u; UPD(0x0C06ED50u, 1);  /* 0C06ED4E mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C06ED50 add Rm,Rn */
	W32(r13, r4); UPD(0x0C06ED54u, 2);  /* 0C06ED52 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r10 = v_; } UPD(0x0C06ED56u, 1);  /* 0C06ED54 mov.l @Rm+,Rn */
	r9 = R32(r12 + 0x14u); UPD(0x0C06ED58u, 1);  /* 0C06ED56 mov.l @(disp,Rm),Rn */
	r6 = 0xC28F600u; UPD(0x0C06ED5Au, 1);  /* 0C06ED58 mov.l @(disp,pc),Rn */
	r9 += r10;  /* 0C06ED5A add Rm,Rn */
	r3 = R32(r7); UPD(0x0C06ED5Eu, 2);  /* 0C06ED5C mov.l @Rm,Rn */
	r0 = 0x20000000u; UPD(0x0C06ED60u, 1);  /* 0C06ED5E mov.l @(disp,pc),Rn */
	W32(r14, r11); UPD(0x0C06ED62u, 1);  /* 0C06ED60 mov.l Rm,@Rn */
	T = (r3 & r0) == 0;  /* 0C06ED62 tst Rm,Rn */
	{ u32 c_ = !T; W32(r6, r9); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06EE3Au, 4); goto L_0C06EE3A; } UPD(0x0C06ED68u, 1); goto L_0C06ED68; }  /* 0C06ED64 bf/s */
L_0C06ED68: BLKS(0x0C06ED68u);
	r12 = 0xBFu; UPD(0x0C06ED6Au, 1);  /* 0C06ED68 mov.w @(disp,pc),Rn */
	r13 = 0x864Cu; UPD(0x0C06ED6Cu, 1);  /* 0C06ED6A mov.l @(disp,pc),Rn */
L_0C06ED6C: BLKS(0x0C06ED6Cu);
	r7 = 0xC286578u; UPD(0x0C06ED6Eu, 1);  /* 0C06ED6C mov.l @(disp,pc),Rn */
	r7 += r13;  /* 0C06ED6E add Rm,Rn */
	r10 = R32(r7); UPD(0x0C06ED72u, 2);  /* 0C06ED70 mov.l @Rm,Rn */
	r9 = 0x10000000u; UPD(0x0C06ED74u, 1);  /* 0C06ED72 mov.l @(disp,pc),Rn */
	T = (r10 & r9) == 0;  /* 0C06ED74 tst Rm,Rn */
	{ u32 c_ = T; r9 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06EE2Eu, 4); goto L_0C06EE2E; } goto L_0C06ED7A; }  /* 0C06ED76 bt/s */
L_0C06ED7A: BLKS(0x0C06ED7Au);
	r3 = 0xA8u; UPD(0x0C06ED7Cu, 2);  /* 0C06ED7A mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C06ED7C add Rm,Rn */
	r2 = r3;  /* 0C06ED7E mov Rm,Rn */
	r2 += 0x3u;  /* 0C06ED80 add #imm,Rn */
	r3 += 0x1u;  /* 0C06ED82 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C06ED86u, 5);  /* 0C06ED84 mov.b @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C06ED88u, 1);  /* 0C06ED86 mov.b @Rm,Rn */
	r4 = r0 & 0xFF;  /* 0C06ED88 extu.b Rm,Rn */
	r11 = r5 & 0xFF;  /* 0C06ED8A extu.b Rm,Rn */
	T = r4 >= r11;  /* 0C06ED8C cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C06EE2Eu, 6); goto L_0C06EE2E; }  /* 0C06ED8E bf */
L_0C06ED90: BLKS(0x0C06ED90u);
	r9 = R32(r7 + 0x1Cu); UPD(0x0C06ED92u, 1);  /* 0C06ED90 mov.l @(disp,Rm),Rn */
	r10 = 0xC28EDB8u; UPD(0x0C06ED94u, 1);  /* 0C06ED92 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r9); r9 += 4; r6 = v_; } UPD(0x0C06ED96u, 1);  /* 0C06ED94 mov.l @Rm+,Rn */
	T = (r6 & r6) == 0;  /* 0C06ED96 tst Rm,Rn */
	{ u32 c_ = T; W32(r10, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06EE2Cu, 4); goto L_0C06EE2C; } UPD(0x0C06ED9Cu, 1); goto L_0C06ED9C; }  /* 0C06ED98 bt/s */
L_0C06ED9C: BLKS(0x0C06ED9Cu);
	r10 = r7;  /* 0C06ED9C mov Rm,Rn */
	r7 += 0x44u;  /* 0C06ED9E add #imm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C06EDA2u, 3);  /* 0C06EDA0 mov.l Rm,@(disp,Rn) */
	IF(0x0C06EDA2u); ;  /* 0C06EDA2 nop */
	UPD(0x0C06EDA4u, 1);
L_0C06EDA4: BLKS(0x0C06EDA4u);
	{ u32 v_ = R32(r9); r9 += 4; r4 = v_; } UPD(0x0C06EDA6u, 1);  /* 0C06EDA4 mov.l @Rm+,Rn */
	r7 = 0xC297484u; UPD(0x0C06EDA8u, 1);  /* 0C06EDA6 mov.l @(disp,pc),Rn */
	W32(r7, r4); UPD(0x0C06EDAAu, 1);  /* 0C06EDA8 mov.l Rm,@Rn */
	{ u32 v_ = R32(r9); r9 += 4; r6 = v_; } UPD(0x0C06EDACu, 1);  /* 0C06EDAA mov.l @Rm+,Rn */
	r11 = R32(r10 + 0x24u); UPD(0x0C06EDAEu, 1);  /* 0C06EDAC mov.l @(disp,Rm),Rn */
	r3 = 0xC3B1B00u; UPD(0x0C06EDB0u, 1);  /* 0C06EDAE mov.l @(disp,pc),Rn */
	r11 += r6;  /* 0C06EDB0 add Rm,Rn */
	W32(r3, r11); UPD(0x0C06EDB4u, 2);  /* 0C06EDB2 mov.l Rm,@Rn */
	r5 = 0xC286314u; UPD(0x0C06EDB6u, 1);  /* 0C06EDB4 mov.l @(disp,pc),Rn */
	r6 = R32(r10 + 0x28u); UPD(0x0C06EDB8u, 1);  /* 0C06EDB6 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r9); r9 += 4; r2 = v_; } UPD(0x0C06EDBAu, 1);  /* 0C06EDB8 mov.l @Rm+,Rn */
	r0 = 0xC3C4024u; UPD(0x0C06EDBCu, 1);  /* 0C06EDBA mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C06EDBC add Rm,Rn */
	r7 = R32(r5); UPD(0x0C06EDC0u, 2);  /* 0C06EDBE mov.l @Rm,Rn */
	r7 -= r11;  /* 0C06EDC0 sub Rm,Rn */
	IF(0x0C06EDC2u); T = (s32)r7 >= 0;  /* 0C06EDC2 cmp/pz Rn */
	{ u32 c_ = T; W32(r0, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06EDCCu, 5); goto L_0C06EDCC; } UPD(0x0C06EDC8u, 1); goto L_0C06EDC8; }  /* 0C06EDC4 bt/s */
L_0C06EDC8: BLKS(0x0C06EDC8u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C06EF30u, 3); goto L_0C06EF30; }  /* 0C06EDC8 bra */
L_0C06EDCC: BLKS(0x0C06EDCCu);
	r2 = 0xC2B0800u; UPD(0x0C06EDCEu, 1);  /* 0C06EDCC mov.l @(disp,pc),Rn */
	r1 = 0xC28EDB8u; UPD(0x0C06EDD0u, 1);  /* 0C06EDCE mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C06EDD2u, 1);  /* 0C06EDD0 mov.l @Rm,Rn */
	r0 = 0xFFFFFFFu; UPD(0x0C06EDD4u, 1);  /* 0C06EDD2 mov.l @(disp,pc),Rn */
	r11 = r5;  /* 0C06EDD4 mov Rm,Rn */
	r2 = R32(r1); UPD(0x0C06EDD8u, 2);  /* 0C06EDD6 mov.l @Rm,Rn */
	r11 &= r0;  /* 0C06EDD8 and Rm,Rn */
	r0 &= r2;  /* 0C06EDDA and Rm,Rn */
	r11 += r0;  /* 0C06EDDC add Rm,Rn */
	T = (s32)r7 >= (s32)r11;  /* 0C06EDDE cmp/ge Rm,Rn */
	if (T) { UPD(0x0C06EE20u, 7); goto L_0C06EE20; }  /* 0C06EDE0 bt */
L_0C06EDE2: BLKS(0x0C06EDE2u);
	r7 = 0xC28F600u; UPD(0x0C06EDE4u, 1);  /* 0C06EDE2 mov.l @(disp,pc),Rn */
	r3 = R32(r7); UPD(0x0C06EDE6u, 1);  /* 0C06EDE4 mov.l @Rm,Rn */
	r3 -= r6;  /* 0C06EDE6 sub Rm,Rn */
	IF(0x0C06EDE8u); T = (s32)r3 >= 0;  /* 0C06EDE8 cmp/pz Rn */
	if (T) { UPD(0x0C06EDEEu, 5); goto L_0C06EDEE; }  /* 0C06EDEA bt */
L_0C06EDEC: BLKS(0x0C06EDECu);
	r3 = 0u - r3;  /* 0C06EDEC neg Rm,Rn */
	UPD(0x0C06EDEEu, 1);
L_0C06EDEE: BLKS(0x0C06EDEEu);
	r11 = 0xC23DEA0u; UPD(0x0C06EDF0u, 1);  /* 0C06EDEE mov.l @(disp,pc),Rn */
	r6 = R32(r11); UPD(0x0C06EDF2u, 1);  /* 0C06EDF0 mov.l @Rm,Rn */
	r6 += r4;  /* 0C06EDF2 add Rm,Rn */
	T = (s32)r3 >= (s32)r6;  /* 0C06EDF4 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C06EE20u, 5); goto L_0C06EE20; }  /* 0C06EDF6 bt */
L_0C06EDF8: BLKS(0x0C06EDF8u);
	r3 = 0x20000000u; UPD(0x0C06EDFAu, 1);  /* 0C06EDF8 mov.l @(disp,pc),Rn */
	T = (r5 & r3) == 0;  /* 0C06EDFA tst Rm,Rn */
	{ u32 c_ = T; r4 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06EE04u, 4); goto L_0C06EE04; } goto L_0C06EE00; }  /* 0C06EDFC bt/s */
L_0C06EE00: BLKS(0x0C06EE00u);
	{ IF(0x0C06EE02u); ; /* slot nop */ UPD(0x0C06EF20u, 4); goto L_0C06EF20; }  /* 0C06EE00 bra */
L_0C06EE04: BLKS(0x0C06EE04u);
	r4 = R32(r10); UPD(0x0C06EE06u, 1);  /* 0C06EE04 mov.l @Rm,Rn */
	r4 |= r2;  /* 0C06EE06 or Rm,Rn */
	T = (r4 & r3) == 0;  /* 0C06EE08 tst Rm,Rn */
	{ u32 c_ = T; r4 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06EEE0u, 5); goto L_0C06EEE0; } UPD(0x0C06EE0Eu, 1); goto L_0C06EE0E; }  /* 0C06EE0A bt/s */
L_0C06EE0E: BLKS(0x0C06EE0Eu);
	r5 = 0x2A0u; UPD(0x0C06EE10u, 1);  /* 0C06EE0E mov.w @(disp,pc),Rn */
	IF(0x0C06EE10u); MACL = r8 * r5;  /* 0C06EE10 mul.l Rm,Rn */
	r3 = 0xC29D1D8u; UPD(0x0C06EE14u, 3);  /* 0C06EE12 mov.l @(disp,pc),Rn */
	IF(0x0C06EE14u); r0 = MACL;  /* 0C06EE14 sts macl,Rn */
	r0 += r3;  /* 0C06EE16 add Rm,Rn */
	r5 += 0xFFFFFFE8u;  /* 0C06EE18 add #imm,Rn */
	IF(0x0C06EE1Au); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C06EE1Cu, 4);  /* 0C06EE1A mov.b @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C06EE1C tst Rm,Rn */
	if (T) { UPD(0x0C06EE70u, 4); goto L_0C06EE70; }  /* 0C06EE1E bt */
L_0C06EE20: BLKS(0x0C06EE20u);
	{ u32 v_ = R32(r9); r9 += 4; r11 = v_; } UPD(0x0C06EE22u, 1);  /* 0C06EE20 mov.l @Rm+,Rn */
L_0C06EE22: BLKS(0x0C06EE22u);
	r2 = 0xC28EDB8u; UPD(0x0C06EE24u, 1);  /* 0C06EE22 mov.l @(disp,pc),Rn */
	T = (r11 & r11) == 0;  /* 0C06EE24 tst Rm,Rn */
	{ u32 c_ = !T; W32(r2, r11); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06EDA4u, 4); goto L_0C06EDA4; } UPD(0x0C06EE2Au, 1); goto L_0C06EE2A; }  /* 0C06EE26 bf/s */
L_0C06EE2A: BLKS(0x0C06EE2Au);
	IF(0x0C06EE2Au); ;  /* 0C06EE2A nop */
	UPD(0x0C06EE2Cu, 1);
L_0C06EE2C: BLKS(0x0C06EE2Cu);
	r9 = r12;  /* 0C06EE2C mov Rm,Rn */
	UPD(0x0C06EE2Eu, 1);
L_0C06EE2E: BLKS(0x0C06EE2Eu);
	r12 = 0xFFFFFF4Cu; UPD(0x0C06EE30u, 1);  /* 0C06EE2E mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFFFFu;  /* 0C06EE30 add #imm,Rn */
	r13 += r12;  /* 0C06EE32 add Rm,Rn */
	r12 = (u32)(s32)(s16)r9;  /* 0C06EE34 exts.w Rm,Rn */
	IF(0x0C06EE36u); T = (s32)r12 >= 0;  /* 0C06EE36 cmp/pz Rn */
	if (T) { UPD(0x0C06ED6Cu, 7); goto L_0C06ED6C; }  /* 0C06EE38 bt */
L_0C06EE3A: BLKS(0x0C06EE3Au);
	r10 = R32(r14); UPD(0x0C06EE3Cu, 1);  /* 0C06EE3A mov.l @Rm,Rn */
	r7 = 0xC2B0800u; UPD(0x0C06EE3Eu, 1);  /* 0C06EE3C mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r13 = v_; } UPD(0x0C06EE40u, 1);  /* 0C06EE3E mov.l @Rm+,Rn */
	W32(r14, r10); UPD(0x0C06EE42u, 1);  /* 0C06EE40 mov.l Rm,@Rn */
	T = (r13 & r13) == 0;  /* 0C06EE42 tst Rm,Rn */
	{ u32 c_ = T; W32(r7, r13); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06EE4Cu, 4); goto L_0C06EE4C; } UPD(0x0C06EE48u, 1); goto L_0C06EE48; }  /* 0C06EE44 bt/s */
L_0C06EE48: BLKS(0x0C06EE48u);
	{ r6 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C06ED36u, 3); goto L_0C06ED36; }  /* 0C06EE48 bra */
L_0C06EE4C: BLKS(0x0C06EE4Cu);
	r14 += 0xCu;  /* 0C06EE4C add #imm,Rn */
	UPD(0x0C06EE4Eu, 1);
L_0C06EE4E: BLKS(0x0C06EE4Eu);
	r15 = r14;  /* 0C06EE4E mov Rm,Rn */
	IF(0x0C06EE50u); PR = R32(r15); r15 += 4; UPD(0x0C06EE52u, 2);  /* 0C06EE50 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06EE54u, 1);  /* 0C06EE52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06EE56u, 1);  /* 0C06EE54 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06EE58u, 1);  /* 0C06EE56 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06EE5Au, 1);  /* 0C06EE58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06EE5Cu, 1);  /* 0C06EE5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06EE5Eu, 1);  /* 0C06EE5C mov.l @Rm+,Rn */
	IF(0x0C06EE5Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06EE5E rts */
L_0C06EE70: BLKS(0x0C06EE70u);
	r7 = 0xC077190u; UPD(0x0C06EE72u, 1);  /* 0C06EE70 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C06EE72 mov Rm,Rn */
	r14 += 0xCu;  /* 0C06EE74 add #imm,Rn */
	r15 = r14;  /* 0C06EE76 mov Rm,Rn */
	IF(0x0C06EE78u); PR = R32(r15); r15 += 4; UPD(0x0C06EE7Au, 4);  /* 0C06EE78 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06EE7Cu, 1);  /* 0C06EE7A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06EE7Eu, 1);  /* 0C06EE7C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06EE80u, 1);  /* 0C06EE7E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06EE82u, 1);  /* 0C06EE80 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06EE84u, 1);  /* 0C06EE82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06EE86u, 1);  /* 0C06EE84 mov.l @Rm+,Rn */
	IF(0x0C06EE86u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C077190u: TAIL(blk_f_0C077190); default: JUMPD(tv_); } }  /* 0C06EE86 jmp @Rn */
L_0C06EEE0: BLKS(0x0C06EEE0u);
	r3 = 0x2A0u; UPD(0x0C06EEE2u, 1);  /* 0C06EEE0 mov.w @(disp,pc),Rn */
	IF(0x0C06EEE2u); MACL = r8 * r3;  /* 0C06EEE2 mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C06EEE6u, 3);  /* 0C06EEE4 mov.l @(disp,pc),Rn */
	r7 = 0x1u;  /* 0C06EEE6 mov #imm,Rn */
	r0 = 0xC0A8E90u; UPD(0x0C06EEEAu, 2);  /* 0C06EEE8 mov.l @(disp,pc),Rn */
	IF(0x0C06EEEAu); r11 = MACL;  /* 0C06EEEA sts macl,Rn */
	r11 += r5;  /* 0C06EEEC add Rm,Rn */
	r5 = r12;  /* 0C06EEEE mov Rm,Rn */
	IF(0x0C06EEF0u); { u32 t_ = r0; PR = 0x0C06EEF4u; r6 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0A8E90, 0x0C0A8E90u, 0x0C06EEF4u); }  /* 0C06EEF0 jsr @Rn */
L_0C06EEF4: BLKS(0x0C06EEF4u);
	T = (r0 & r0) == 0;  /* 0C06EEF4 tst Rm,Rn */
	if (T) { UPD(0x0C06EE0Eu, 4); goto L_0C06EE0E; }  /* 0C06EEF6 bt */
L_0C06EEF8: BLKS(0x0C06EEF8u);
	r6 = r10;  /* 0C06EEF8 mov Rm,Rn */
	r0 = 0x290u; UPD(0x0C06EEFCu, 2);  /* 0C06EEFA mov.w @(disp,pc),Rn */
	r0 += r11;  /* 0C06EEFC add Rm,Rn */
	r11 = 0xC06A340u; UPD(0x0C06EF00u, 2);  /* 0C06EEFE mov.l @(disp,pc),Rn */
	r6 += 0x40u;  /* 0C06EF00 add #imm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C06EF04u, 2);  /* 0C06EF02 mov.l @(disp,Rm),Rn */
	r4 = R32(r6); UPD(0x0C06EF06u, 1);  /* 0C06EF04 mov.l @Rm,Rn */
	r5 = R32(r1); UPD(0x0C06EF08u, 1);  /* 0C06EF06 mov.l @Rm,Rn */
	IF(0x0C06EF08u); { u32 t_ = r11; PR = 0x0C06EF0Cu; W32(r14 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C06A340, 0x0C06A340u, 0x0C06EF0Cu); }  /* 0C06EF08 jsr @Rn */
L_0C06EF0C: BLKS(0x0C06EF0Cu);
	r7 = R32(r14 + 0x8u); UPD(0x0C06EF0Eu, 1);  /* 0C06EF0C mov.l @(disp,Rm),Rn */
	r2 = R32(r7); UPD(0x0C06EF10u, 1);  /* 0C06EF0E mov.l @Rm,Rn */
	r2 += r0;  /* 0C06EF10 add Rm,Rn */
	{ W32(r7, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C06EE0Eu, 4); goto L_0C06EE0E; }  /* 0C06EF12 bra */
L_0C06EF20: BLKS(0x0C06EF20u);
	r11 = 0xC0C20A0u; UPD(0x0C06EF22u, 1);  /* 0C06EF20 mov.l @(disp,pc),Rn */
	IF(0x0C06EF22u); { u32 t_ = r11; PR = 0x0C06EF26u; r5 = 0x59u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C06EF26u); }  /* 0C06EF22 jsr @Rn */
L_0C06EF26: BLKS(0x0C06EF26u);
	{ { u32 v_ = R32(r9); r9 += 4; r11 = v_; } /* slot mov.l @Rm+,Rn */ UPD(0x0C06EE22u, 3); goto L_0C06EE22; }  /* 0C06EF26 bra */
L_0C06EF30: BLKS(0x0C06EF30u);
	{ IF(0x0C06EF32u); ; /* slot nop */ UPD(0x0C06EDCCu, 3); goto L_0C06EDCC; }  /* 0C06EF30 bra */
}

/* FUN_0c06ef50 */
void blk_f_0C06EF50(sh3_t *c)
{
	LOCALS;
L_0C06EF50: BLKS(0x0C06EF50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06EF52u, 1);  /* 0C06EF50 mov.l Rm,@-Rn */
	r3 = 0x1u;  /* 0C06EF52 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06EF56u, 2);  /* 0C06EF54 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06EF58u, 1);  /* 0C06EF56 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06EF5Au, 1);  /* 0C06EF58 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06EF5Cu, 1);  /* 0C06EF5A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06EF5Eu, 1);  /* 0C06EF5C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06EF60u, 1);  /* 0C06EF5E mov.l Rm,@-Rn */
	r5 = 0xC2380B2u; UPD(0x0C06EF62u, 1);  /* 0C06EF60 mov.l @(disp,pc),Rn */
	IF(0x0C06EF62u); r15 -= 4; W32(r15, PR); UPD(0x0C06EF64u, 1);  /* 0C06EF62 sts.l pr,@-Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C06EF66u, 1);  /* 0C06EF64 mov.w @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06EF66 add #imm,Rn */
	r12 = r4;  /* 0C06EF68 mov Rm,Rn */
	r12 += 0x1u;  /* 0C06EF6A add #imm,Rn */
	r2 = 0x2A0u; UPD(0x0C06EF6Eu, 4);  /* 0C06EF6C mov.w @(disp,pc),Rn */
	r12 &= r3;  /* 0C06EF6E and Rm,Rn */
	IF(0x0C06EF70u); MACL = r12 * r2;  /* 0C06EF70 mul.l Rm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C06EF74u, 4);  /* 0C06EF72 mov.l @(disp,pc),Rn */
	IF(0x0C06EF74u); r3 = MACL;  /* 0C06EF74 sts macl,Rn */
	r3 += r0;  /* 0C06EF76 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C06EF7Au, 3);  /* 0C06EF78 mov.l @Rm,Rn */
	r0 = 0x4000000u; UPD(0x0C06EF7Cu, 1);  /* 0C06EF7A mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C06EF7C tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06EFB6u, 4); goto L_0C06EFB6; } goto L_0C06EF82; }  /* 0C06EF7E bt/s */
L_0C06EF82: BLKS(0x0C06EF82u);
	r5 = R32(r3 + 0x4u); UPD(0x0C06EF84u, 2);  /* 0C06EF82 mov.l @(disp,Rm),Rn */
	r6 = 0x3u;  /* 0C06EF84 mov #imm,Rn */
	r2 = 0xC17E12Cu; UPD(0x0C06EF88u, 2);  /* 0C06EF86 mov.l @(disp,pc),Rn */
	IF(0x0C06EF88u); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C06EF88 shld Rm,Rn */
	r0 = r2;  /* 0C06EF8A mov Rm,Rn */
	IF(0x0C06EF8Cu); r1 = R32(r0 + r5); UPD(0x0C06EF8Eu, 3);  /* 0C06EF8C mov.l @(r0,Rm),Rn */
	r11 = 0x3u;  /* 0C06EF8E mov #imm,Rn */
	r4 = R32(r3 + 0x8u); UPD(0x0C06EF92u, 2);  /* 0C06EF90 mov.l @(disp,Rm),Rn */
	r0 = 0x4u;  /* 0C06EF92 mov #imm,Rn */
	W32(r14, r1); UPD(0x0C06EF96u, 2);  /* 0C06EF94 mov.l Rm,@Rn */
	IF(0x0C06EF96u); ARG0(0x440Du); { s32 s_ = (s32)r0; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C06EF96 shld Rm,Rn */
	r0 = R32(r14); UPD(0x0C06EF9Au, 2);  /* 0C06EF98 mov.l @Rm,Rn */
	IF(0x0C06EF9Au); r13 = R32(r0 + r4); UPD(0x0C06EF9Cu, 1);  /* 0C06EF9A mov.l @(r0,Rm),Rn */
	r9 = R32(r3 + 0xCu); UPD(0x0C06EF9Eu, 1);  /* 0C06EF9C mov.l @(disp,Rm),Rn */
	W32(r14, r13); UPD(0x0C06EFA0u, 1);  /* 0C06EF9E mov.l Rm,@Rn */
	IF(0x0C06EFA0u); ARG0(0x49BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C06EFA0 shld Rm,Rn */
	r10 = R32(r14); UPD(0x0C06EFA4u, 2);  /* 0C06EFA2 mov.l @Rm,Rn */
	r9 += r10;  /* 0C06EFA4 add Rm,Rn */
	r8 = R32(r9 + 0x4u); UPD(0x0C06EFA8u, 2);  /* 0C06EFA6 mov.l @(disp,Rm),Rn */
	r7 = r8;  /* 0C06EFA8 mov Rm,Rn */
	{ u32 v_ = R32(r7); r7 += 4; r6 = v_; } UPD(0x0C06EFACu, 2);  /* 0C06EFAA mov.l @Rm+,Rn */
	r5 = 0xC2B0800u; UPD(0x0C06EFAEu, 1);  /* 0C06EFAC mov.l @(disp,pc),Rn */
	T = (r6 & r6) == 0;  /* 0C06EFAE tst Rm,Rn */
	W32(r14, r7); UPD(0x0C06EFB2u, 2);  /* 0C06EFB0 mov.l Rm,@Rn */
	{ u32 c_ = !T; W32(r5, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06EFBAu, 3); goto L_0C06EFBA; } UPD(0x0C06EFB6u, 1); goto L_0C06EFB6; }  /* 0C06EFB2 bf/s */
L_0C06EFB6: BLKS(0x0C06EFB6u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C06F1B8u, 3); goto L_0C06F1B8; }  /* 0C06EFB6 bra */
L_0C06EFBA: BLKS(0x0C06EFBAu);
	r3 = 0x2A0u; UPD(0x0C06EFBCu, 1);  /* 0C06EFBA mov.w @(disp,pc),Rn */
	r11 = R32(r14); UPD(0x0C06EFBEu, 1);  /* 0C06EFBC mov.l @Rm,Rn */
	IF(0x0C06EFBEu); MACL = r12 * r3;  /* 0C06EFBE mul.l Rm,Rn */
	{ u32 v_ = R32(r11); r11 += 4; r6 = v_; } UPD(0x0C06EFC2u, 3);  /* 0C06EFC0 mov.l @Rm+,Rn */
	r1 = 0xC23DEA0u; UPD(0x0C06EFC4u, 1);  /* 0C06EFC2 mov.l @(disp,pc),Rn */
	IF(0x0C06EFC4u); r3 = MACL;  /* 0C06EFC4 sts macl,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C06EFC8u, 2);  /* 0C06EFC6 mov.l @(disp,pc),Rn */
	W32(r1, r6); UPD(0x0C06EFCAu, 1);  /* 0C06EFC8 mov.l Rm,@Rn */
	r3 += r2;  /* 0C06EFCA add Rm,Rn */
	{ u32 v_ = R32(r11); r11 += 4; r0 = v_; } UPD(0x0C06EFCEu, 2);  /* 0C06EFCC mov.l @Rm+,Rn */
	r4 = R32(r3 + 0x10u); UPD(0x0C06EFD0u, 1);  /* 0C06EFCE mov.l @(disp,Rm),Rn */
	r13 = 0xC286314u; UPD(0x0C06EFD2u, 1);  /* 0C06EFD0 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C06EFD2 add Rm,Rn */
	W32(r13, r4); UPD(0x0C06EFD6u, 2);  /* 0C06EFD4 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r10 = v_; } UPD(0x0C06EFD8u, 1);  /* 0C06EFD6 mov.l @Rm+,Rn */
	r9 = R32(r3 + 0x14u); UPD(0x0C06EFDAu, 1);  /* 0C06EFD8 mov.l @(disp,Rm),Rn */
	r7 = 0xC28F600u; UPD(0x0C06EFDCu, 1);  /* 0C06EFDA mov.l @(disp,pc),Rn */
	r9 += r10;  /* 0C06EFDC add Rm,Rn */
	W32(r7, r9); UPD(0x0C06EFE0u, 2);  /* 0C06EFDE mov.l Rm,@Rn */
	r8 = 0x20000000u; UPD(0x0C06EFE2u, 1);  /* 0C06EFE0 mov.l @(disp,pc),Rn */
	r7 = R32(r5); UPD(0x0C06EFE4u, 1);  /* 0C06EFE2 mov.l @Rm,Rn */
	T = (r7 & r8) == 0;  /* 0C06EFE4 tst Rm,Rn */
	{ u32 c_ = T; W32(r14, r11); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06F02Eu, 4); goto L_0C06F02E; } UPD(0x0C06EFEAu, 1); goto L_0C06EFEA; }  /* 0C06EFE6 bt/s */
L_0C06EFEA: BLKS(0x0C06EFEAu);
	r0 = 0x270u; UPD(0x0C06EFECu, 1);  /* 0C06EFEA mov.w @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C06EFEC mov #imm,Rn */
	IF(0x0C06EFEEu); r8 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06EFF0u, 2);  /* 0C06EFEE mov.b @(r0,Rm),Rn */
	r2 = r8 & 0xFF;  /* 0C06EFF0 extu.b Rm,Rn */
	T = r2 > r5;  /* 0C06EFF2 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C06F000u, 5); goto L_0C06F000; }  /* 0C06EFF4 bf */
L_0C06EFF6: BLKS(0x0C06EFF6u);
	r0 = r3;  /* 0C06EFF6 mov Rm,Rn */
	r10 = 0x289u; UPD(0x0C06EFFAu, 2);  /* 0C06EFF8 mov.w @(disp,pc),Rn */
	IF(0x0C06EFFAu); r9 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C06EFFCu, 1);  /* 0C06EFFA mov.b @(r0,Rm),Rn */
	T = (r9 & r9) == 0;  /* 0C06EFFC tst Rm,Rn */
	if (!T) { UPD(0x0C06F004u, 4); goto L_0C06F004; }  /* 0C06EFFE bf */
L_0C06F000: BLKS(0x0C06F000u);
	{ r11 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C06F130u, 3); goto L_0C06F130; }  /* 0C06F000 bra */
L_0C06F004: BLKS(0x0C06F004u);
	IF(0x0C06F004u); T = (s32)r2 > 0;  /* 0C06F004 cmp/pl Rn */
	{ u32 c_ = T; r3 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F00Eu, 4); goto L_0C06F00E; } goto L_0C06F00A; }  /* 0C06F006 bt/s */
L_0C06F00A: BLKS(0x0C06F00Au);
	{ r3 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C06F220u, 4); goto L_0C06F220; }  /* 0C06F00A bra */
L_0C06F00E: BLKS(0x0C06F00Eu);
	r2 = 0xC297A3Cu; UPD(0x0C06F010u, 1);  /* 0C06F00E mov.l @(disp,pc),Rn */
	r0 = 0x1000000u; UPD(0x0C06F012u, 1);  /* 0C06F010 mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C06F014u, 1);  /* 0C06F012 mov.l @Rm,Rn */
	r0 -= r5;  /* 0C06F014 sub Rm,Rn */
	IF(0x0C06F016u); r0 >>= 2;  /* 0C06F016 shlr2 Rn */
	IF(0x0C06F018u); T = r0 & 1; r0 >>= 1;  /* 0C06F018 shlr Rn */
	IF(0x0C06F01Au); MACL = r0 * r3;  /* 0C06F01A mul.l Rm,Rn */
	r4 = 0xC2B0800u; UPD(0x0C06F01Eu, 6);  /* 0C06F01C mov.l @(disp,pc),Rn */
	IF(0x0C06F01Eu); r13 = MACL;  /* 0C06F01E sts macl,Rn */
	IF(0x0C06F020u); r13 >>= 2;  /* 0C06F020 shlr2 Rn */
	IF(0x0C06F022u); T = r13 & 1; r13 >>= 1;  /* 0C06F022 shlr Rn */
	r11 = 0xC23DEA0u; UPD(0x0C06F026u, 4);  /* 0C06F024 mov.l @(disp,pc),Rn */
	r7 += r13;  /* 0C06F026 add Rm,Rn */
	r6 += r13;  /* 0C06F028 add Rm,Rn */
	W32(r4, r7); UPD(0x0C06F02Cu, 3);  /* 0C06F02A mov.l Rm,@Rn */
	W32(r11, r6); UPD(0x0C06F02Eu, 1);  /* 0C06F02C mov.l Rm,@Rn */
L_0C06F02E: BLKS(0x0C06F02Eu);
	r11 = 0xFFu; UPD(0x0C06F030u, 1);  /* 0C06F02E mov.w @(disp,pc),Rn */
	r13 = 0x53ACu; UPD(0x0C06F032u, 1);  /* 0C06F030 mov.w @(disp,pc),Rn */
	IF(0x0C06F032u); ;  /* 0C06F032 nop */
	UPD(0x0C06F034u, 1);
L_0C06F034: BLKS(0x0C06F034u);
	r3 = 0xC297B40u; UPD(0x0C06F036u, 1);  /* 0C06F034 mov.l @(disp,pc),Rn */
	r3 += r13;  /* 0C06F036 add Rm,Rn */
	r7 = R32(r3); UPD(0x0C06F03Au, 2);  /* 0C06F038 mov.l @Rm,Rn */
	r6 = 0x10000000u; UPD(0x0C06F03Cu, 1);  /* 0C06F03A mov.l @(disp,pc),Rn */
	T = (r7 & r6) == 0;  /* 0C06F03C tst Rm,Rn */
	{ u32 c_ = T; r8 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F124u, 4); goto L_0C06F124; } goto L_0C06F042; }  /* 0C06F03E bt/s */
L_0C06F042: BLKS(0x0C06F042u);
	r8 = R32(r3 + 0x20u); UPD(0x0C06F044u, 2);  /* 0C06F042 mov.l @(disp,Rm),Rn */
	r2 = 0xC28F658u; UPD(0x0C06F046u, 1);  /* 0C06F044 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r9 = v_; } UPD(0x0C06F048u, 1);  /* 0C06F046 mov.l @Rm+,Rn */
	T = (r9 & r9) == 0;  /* 0C06F048 tst Rm,Rn */
	{ u32 c_ = T; W32(r2, r9); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06F122u, 4); goto L_0C06F122; } UPD(0x0C06F04Eu, 1); goto L_0C06F04E; }  /* 0C06F04A bt/s */
L_0C06F04E: BLKS(0x0C06F04Eu);
	r9 = r3;  /* 0C06F04E mov Rm,Rn */
	r3 += 0x44u;  /* 0C06F050 add #imm,Rn */
	r10 = 0x10000u; UPD(0x0C06F054u, 3);  /* 0C06F052 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r3); UPD(0x0C06F056u, 1);  /* 0C06F054 mov.l Rm,@(disp,Rn) */
	IF(0x0C06F056u); ;  /* 0C06F056 nop */
	UPD(0x0C06F058u, 1);
L_0C06F058: BLKS(0x0C06F058u);
	r4 = 0xC3B1B08u; UPD(0x0C06F05Au, 1);  /* 0C06F058 mov.l @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C06F05A add #imm,Rn */
	W32(r2, r10); UPD(0x0C06F05Eu, 2);  /* 0C06F05C mov.l Rm,@Rn */
	W32(r4, r10); UPD(0x0C06F060u, 1);  /* 0C06F05E mov.l Rm,@Rn */
	{ u32 v_ = R32(r8); r8 += 4; r0 = v_; } UPD(0x0C06F062u, 1);  /* 0C06F060 mov.l @Rm+,Rn */
	r4 = R32(r9 + 0x28u); UPD(0x0C06F064u, 1);  /* 0C06F062 mov.l @(disp,Rm),Rn */
	r5 = 0xC2B1A30u; UPD(0x0C06F066u, 1);  /* 0C06F064 mov.l @(disp,pc),Rn */
	r0 += r4;  /* 0C06F066 add Rm,Rn */
	W32(r5, r0); UPD(0x0C06F06Au, 2);  /* 0C06F068 mov.l Rm,@Rn */
	r2 = 0xC286314u; UPD(0x0C06F06Cu, 1);  /* 0C06F06A mov.l @(disp,pc),Rn */
	r5 = R32(r9 + 0x2Cu); UPD(0x0C06F06Eu, 1);  /* 0C06F06C mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C06F070u, 1);  /* 0C06F06E mov.l @Rm+,Rn */
	r6 = 0xC28EDB4u; UPD(0x0C06F072u, 1);  /* 0C06F070 mov.l @(disp,pc),Rn */
	r7 += r5;  /* 0C06F072 add Rm,Rn */
	r3 = R32(r2); UPD(0x0C06F076u, 2);  /* 0C06F074 mov.l @Rm,Rn */
	r3 -= r0;  /* 0C06F076 sub Rm,Rn */
	IF(0x0C06F078u); T = (s32)r3 >= 0;  /* 0C06F078 cmp/pz Rn */
	{ u32 c_ = T; W32(r6, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06F082u, 5); goto L_0C06F082; } UPD(0x0C06F07Eu, 1); goto L_0C06F07E; }  /* 0C06F07A bt/s */
L_0C06F07E: BLKS(0x0C06F07Eu);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C06F210u, 3); goto L_0C06F210; }  /* 0C06F07E bra */
L_0C06F082: BLKS(0x0C06F082u);
	r2 = 0xC2B0800u; UPD(0x0C06F084u, 1);  /* 0C06F082 mov.l @(disp,pc),Rn */
	r0 = 0xFFFFFFFu; UPD(0x0C06F086u, 1);  /* 0C06F084 mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C06F088u, 1);  /* 0C06F086 mov.l @Rm,Rn */
	r0 &= r6;  /* 0C06F088 and Rm,Rn */
	r0 += r10;  /* 0C06F08A add Rm,Rn */
	T = (s32)r3 >= (s32)r0;  /* 0C06F08C cmp/ge Rm,Rn */
	if (T) { UPD(0x0C06F118u, 6); goto L_0C06F118; }  /* 0C06F08E bt */
L_0C06F090: BLKS(0x0C06F090u);
	r3 = 0xC28F600u; UPD(0x0C06F092u, 1);  /* 0C06F090 mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C06F094u, 1);  /* 0C06F092 mov.l @Rm,Rn */
	r2 -= r7;  /* 0C06F094 sub Rm,Rn */
	IF(0x0C06F096u); T = (s32)r2 >= 0;  /* 0C06F096 cmp/pz Rn */
	if (T) { UPD(0x0C06F09Cu, 5); goto L_0C06F09C; }  /* 0C06F098 bt */
L_0C06F09A: BLKS(0x0C06F09Au);
	r2 = 0u - r2;  /* 0C06F09A neg Rm,Rn */
	UPD(0x0C06F09Cu, 1);
L_0C06F09C: BLKS(0x0C06F09Cu);
	r0 = 0xC23DEA0u; UPD(0x0C06F09Eu, 1);  /* 0C06F09C mov.l @(disp,pc),Rn */
	r7 = R32(r0); UPD(0x0C06F0A0u, 1);  /* 0C06F09E mov.l @Rm,Rn */
	r7 += r10;  /* 0C06F0A0 add Rm,Rn */
	T = (s32)r2 >= (s32)r7;  /* 0C06F0A2 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C06F118u, 5); goto L_0C06F118; }  /* 0C06F0A4 bt */
L_0C06F0A6: BLKS(0x0C06F0A6u);
	r2 = 0x20000000u; UPD(0x0C06F0A8u, 1);  /* 0C06F0A6 mov.l @(disp,pc),Rn */
	T = (r6 & r2) == 0;  /* 0C06F0A8 tst Rm,Rn */
	{ u32 c_ = !T; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C06F0B2u, 4); goto L_0C06F0B2; } UPD(0x0C06F0AEu, 1); goto L_0C06F0AE; }  /* 0C06F0AA bf/s */
L_0C06F0AE: BLKS(0x0C06F0AEu);
	{ r5 = r11; /* slot mov Rm,Rn */ UPD(0x0C06F1D0u, 3); goto L_0C06F1D0; }  /* 0C06F0AE bra */
L_0C06F0B2: BLKS(0x0C06F0B2u);
	r0 = (u32)(s32)(s16)R16(r7); UPD(0x0C06F0B4u, 1);  /* 0C06F0B2 mov.w @Rm,Rn */
	r7 = r0 & 0xFFFF;  /* 0C06F0B4 extu.w Rm,Rn */
	r0 = 0xC0C0210u; UPD(0x0C06F0B8u, 2);  /* 0C06F0B6 mov.l @(disp,pc),Rn */
	IF(0x0C06F0B8u); { u32 t_ = r0; PR = 0x0C06F0BCu; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0210, 0x0C0C0210u, 0x0C06F0BCu); }  /* 0C06F0B8 jsr @Rn */
L_0C06F0BC: BLKS(0x0C06F0BCu);
	r3 = 0x2A0u; UPD(0x0C06F0BEu, 1);  /* 0C06F0BC mov.w @(disp,pc),Rn */
	IF(0x0C06F0BEu); MACL = r12 * r3;  /* 0C06F0BE mul.l Rm,Rn */
	r4 = 0xC29D1D8u; UPD(0x0C06F0C2u, 3);  /* 0C06F0C0 mov.l @(disp,pc),Rn */
	r0 = 0x290u; UPD(0x0C06F0C4u, 1);  /* 0C06F0C2 mov.w @(disp,pc),Rn */
	IF(0x0C06F0C4u); r7 = MACL;  /* 0C06F0C4 sts macl,Rn */
	r7 += r4;  /* 0C06F0C6 add Rm,Rn */
	IF(0x0C06F0C8u); r2 = R32(r0 + r7); UPD(0x0C06F0CAu, 3);  /* 0C06F0C8 mov.l @(r0,Rm),Rn */
	r2 += 0xAu;  /* 0C06F0CA add #imm,Rn */
	IF(0x0C06F0CCu); W32(r0 + r7, r2); UPD(0x0C06F0CEu, 2);  /* 0C06F0CC mov.l Rm,@(r0,Rn) */
	r5 = 0xC297A3Cu; UPD(0x0C06F0D0u, 1);  /* 0C06F0CE mov.l @(disp,pc),Rn */
	r6 = R32(r5); UPD(0x0C06F0D2u, 1);  /* 0C06F0D0 mov.l @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C06F0D2 tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0xFFFFFFF6u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06F0DCu, 4); goto L_0C06F0DC; } goto L_0C06F0D8; }  /* 0C06F0D4 bf/s */
L_0C06F0D8: BLKS(0x0C06F0D8u);
	r2 += 0x6Eu;  /* 0C06F0D8 add #imm,Rn */
	IF(0x0C06F0DAu); W32(r0 + r7, r2); UPD(0x0C06F0DCu, 3);  /* 0C06F0DA mov.l Rm,@(r0,Rn) */
L_0C06F0DC: BLKS(0x0C06F0DCu);
	r0 = 0x274u; UPD(0x0C06F0DEu, 1);  /* 0C06F0DC mov.w @(disp,pc),Rn */
	r1 = 0x8000u; UPD(0x0C06F0E0u, 1);  /* 0C06F0DE mov.l @(disp,pc),Rn */
	IF(0x0C06F0E0u); r5 = R32(r0 + r7); UPD(0x0C06F0E2u, 1);  /* 0C06F0E0 mov.l @(r0,Rm),Rn */
	r2 = 0x280u; UPD(0x0C06F0E4u, 1);  /* 0C06F0E2 mov.w @(disp,pc),Rn */
	r5 |= r1;  /* 0C06F0E4 or Rm,Rn */
	IF(0x0C06F0E6u); W32(r0 + r7, r5); UPD(0x0C06F0E8u, 2);  /* 0C06F0E6 mov.l Rm,@(r0,Rn) */
	r2 += r7;  /* 0C06F0E8 add Rm,Rn */
	r0 = R32(r2); UPD(0x0C06F0ECu, 2);  /* 0C06F0EA mov.l @Rm,Rn */
	r6 = 0x9C3Bu; UPD(0x0C06F0EEu, 1);  /* 0C06F0EC mov.l @(disp,pc),Rn */
	T = (s32)r0 > (s32)r6;  /* 0C06F0EE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C06F0F6u, 4); goto L_0C06F0F6; }  /* 0C06F0F0 bt */
L_0C06F0F2: BLKS(0x0C06F0F2u);
	r0 += 0x1u;  /* 0C06F0F2 add #imm,Rn */
	W32(r2, r0); UPD(0x0C06F0F6u, 2);  /* 0C06F0F4 mov.l Rm,@Rn */
L_0C06F0F6: BLKS(0x0C06F0F6u);
	r0 &= 0x3u;  /* 0C06F0F6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06F0F8 tst Rm,Rn */
	if (!T) { UPD(0x0C06F10Eu, 5); goto L_0C06F10E; }  /* 0C06F0FA bf */
L_0C06F0FC: BLKS(0x0C06F0FCu);
	r0 = 0x284u; UPD(0x0C06F0FEu, 1);  /* 0C06F0FC mov.w @(disp,pc),Rn */
	r3 = 0x80u; UPD(0x0C06F100u, 1);  /* 0C06F0FE mov.w @(disp,pc),Rn */
	IF(0x0C06F100u); W16(r0 + r7, r3); UPD(0x0C06F102u, 1);  /* 0C06F100 mov.w Rm,@(r0,Rn) */
	r4 = R32(r7 + 0x10u); UPD(0x0C06F104u, 1);  /* 0C06F102 mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFF4u;  /* 0C06F104 add #imm,Rn */
	IF(0x0C06F106u); W32(r0 + r7, r4); UPD(0x0C06F108u, 2);  /* 0C06F106 mov.l Rm,@(r0,Rn) */
	r2 = R32(r7 + 0x14u); UPD(0x0C06F10Au, 1);  /* 0C06F108 mov.l @(disp,Rm),Rn */
	r0 += 0x4u;  /* 0C06F10A add #imm,Rn */
	IF(0x0C06F10Cu); W32(r0 + r7, r2); UPD(0x0C06F10Eu, 2);  /* 0C06F10C mov.l Rm,@(r0,Rn) */
L_0C06F10E: BLKS(0x0C06F10Eu);
	r0 = 0xC0C20A0u; UPD(0x0C06F110u, 1);  /* 0C06F10E mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C06F110 mov Rm,Rn */
	IF(0x0C06F112u); { u32 t_ = r0; PR = 0x0C06F116u; r5 = 0x59u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C06F116u); }  /* 0C06F112 jsr @Rn */
L_0C06F116: BLKS(0x0C06F116u);
	IF(0x0C06F116u); ;  /* 0C06F116 nop */
	UPD(0x0C06F118u, 1);
L_0C06F118: BLKS(0x0C06F118u);
	{ u32 v_ = R32(r8); r8 += 4; r4 = v_; } UPD(0x0C06F11Au, 1);  /* 0C06F118 mov.l @Rm+,Rn */
	r2 = 0xC28F658u; UPD(0x0C06F11Cu, 1);  /* 0C06F11A mov.l @(disp,pc),Rn */
	T = (r4 & r4) == 0;  /* 0C06F11C tst Rm,Rn */
	{ u32 c_ = !T; W32(r2, r4); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06F058u, 4); goto L_0C06F058; } UPD(0x0C06F122u, 1); goto L_0C06F122; }  /* 0C06F11E bf/s */
L_0C06F122: BLKS(0x0C06F122u);
	r8 = r11;  /* 0C06F122 mov Rm,Rn */
	UPD(0x0C06F124u, 1);
L_0C06F124: BLKS(0x0C06F124u);
	r8 += 0xFFFFFFFFu;  /* 0C06F124 add #imm,Rn */
	r11 = (u32)(s32)(s16)r8;  /* 0C06F126 exts.w Rm,Rn */
	IF(0x0C06F128u); T = (s32)r11 >= 0;  /* 0C06F128 cmp/pz Rn */
	{ u32 c_ = T; r13 += 0xFFFFFFACu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06F034u, 6); goto L_0C06F034; } goto L_0C06F12E; }  /* 0C06F12A bt/s */
L_0C06F12E: BLKS(0x0C06F12Eu);
	r11 = R32(r14); UPD(0x0C06F130u, 2);  /* 0C06F12E mov.l @Rm,Rn */
L_0C06F130: BLKS(0x0C06F130u);
	r5 = 0xC2B0800u; UPD(0x0C06F132u, 1);  /* 0C06F130 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r11); r11 += 4; r10 = v_; } UPD(0x0C06F134u, 1);  /* 0C06F132 mov.l @Rm+,Rn */
	W32(r14, r11); UPD(0x0C06F136u, 1);  /* 0C06F134 mov.l Rm,@Rn */
	T = (r10 & r10) == 0;  /* 0C06F136 tst Rm,Rn */
	{ W32(r5, r10); /* slot mov.l Rm,@Rn */ UPD(0x0C06F1B0u, 4); goto L_0C06F1B0; }  /* 0C06F138 bra */
L_0C06F1B0: BLKS(0x0C06F1B0u);
	if (T) { UPD(0x0C06F1B6u, 3); goto L_0C06F1B6; }  /* 0C06F1B0 bt */
L_0C06F1B2: BLKS(0x0C06F1B2u);
	{ IF(0x0C06F1B4u); ; /* slot nop */ UPD(0x0C06EFBAu, 3); goto L_0C06EFBA; }  /* 0C06F1B2 bra */
L_0C06F1B6: BLKS(0x0C06F1B6u);
	r14 += 0x8u;  /* 0C06F1B6 add #imm,Rn */
	UPD(0x0C06F1B8u, 1);
L_0C06F1B8: BLKS(0x0C06F1B8u);
	r15 = r14;  /* 0C06F1B8 mov Rm,Rn */
	IF(0x0C06F1BAu); PR = R32(r15); r15 += 4; UPD(0x0C06F1BCu, 2);  /* 0C06F1BA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06F1BEu, 1);  /* 0C06F1BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06F1C0u, 1);  /* 0C06F1BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06F1C2u, 1);  /* 0C06F1C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06F1C4u, 1);  /* 0C06F1C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06F1C6u, 1);  /* 0C06F1C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06F1C8u, 1);  /* 0C06F1C6 mov.l @Rm+,Rn */
	IF(0x0C06F1C8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06F1C8 rts */
L_0C06F1D0: BLKS(0x0C06F1D0u);
	r0 = 0xC0BC240u; UPD(0x0C06F1D2u, 1);  /* 0C06F1D0 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C06F1D2 mov #imm,Rn */
	IF(0x0C06F1D4u); { u32 t_ = r0; PR = 0x0C06F1D8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC240, 0x0C0BC240u, 0x0C06F1D8u); }  /* 0C06F1D4 jsr @Rn */
L_0C06F1D8: BLKS(0x0C06F1D8u);
	r6 = 0x2A0u; UPD(0x0C06F1DAu, 1);  /* 0C06F1D8 mov.w @(disp,pc),Rn */
	IF(0x0C06F1DAu); MACL = r12 * r6;  /* 0C06F1DA mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C06F1DEu, 3);  /* 0C06F1DC mov.l @(disp,pc),Rn */
	IF(0x0C06F1DEu); r0 = MACL;  /* 0C06F1DE sts macl,Rn */
	r0 += r5;  /* 0C06F1E0 add Rm,Rn */
	r6 += 0xFFFFFFE8u;  /* 0C06F1E2 add #imm,Rn */
	IF(0x0C06F1E4u); r7 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C06F1E6u, 4);  /* 0C06F1E4 mov.b @(r0,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C06F1E6 tst Rm,Rn */
	{ u32 c_ = !T; r4 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F118u, 4); goto L_0C06F118; } goto L_0C06F1EC; }  /* 0C06F1E8 bf/s */
L_0C06F1EC: BLKS(0x0C06F1ECu);
	r0 = 0xC077190u; UPD(0x0C06F1EEu, 2);  /* 0C06F1EC mov.l @(disp,pc),Rn */
	r14 += 0x8u;  /* 0C06F1EE add #imm,Rn */
	r15 = r14;  /* 0C06F1F0 mov Rm,Rn */
	IF(0x0C06F1F2u); PR = R32(r15); r15 += 4; UPD(0x0C06F1F4u, 3);  /* 0C06F1F2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06F1F6u, 1);  /* 0C06F1F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06F1F8u, 1);  /* 0C06F1F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06F1FAu, 1);  /* 0C06F1F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06F1FCu, 1);  /* 0C06F1FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06F1FEu, 1);  /* 0C06F1FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06F200u, 1);  /* 0C06F1FE mov.l @Rm+,Rn */
	IF(0x0C06F200u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C077190u: TAIL(blk_f_0C077190); default: JUMPD(tv_); } }  /* 0C06F200 jmp @Rn */
L_0C06F210: BLKS(0x0C06F210u);
	{ IF(0x0C06F212u); ; /* slot nop */ UPD(0x0C06F082u, 3); goto L_0C06F082; }  /* 0C06F210 bra */
L_0C06F220: BLKS(0x0C06F220u);
	{ IF(0x0C06F222u); ; /* slot nop */ UPD(0x0C06F00Eu, 3); goto L_0C06F00E; }  /* 0C06F220 bra */
}

/* FUN_0c06f240 */
void blk_f_0C06F240(sh3_t *c)
{
	LOCALS;
L_0C06F240: BLKS(0x0C06F240u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06F242u, 1);  /* 0C06F240 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06F244u, 1);  /* 0C06F242 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06F246u, 1);  /* 0C06F244 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06F248u, 1);  /* 0C06F246 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06F24Au, 1);  /* 0C06F248 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06F24Cu, 1);  /* 0C06F24A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06F24Eu, 1);  /* 0C06F24C mov.l Rm,@-Rn */
	r13 = 0x1u;  /* 0C06F24E mov #imm,Rn */
	IF(0x0C06F250u); r15 -= 4; W32(r15, PR); UPD(0x0C06F252u, 2);  /* 0C06F250 sts.l pr,@-Rn */
	r4 = 0xC2380B2u; UPD(0x0C06F254u, 1);  /* 0C06F252 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C06F256u, 1);  /* 0C06F254 mov.w @Rm,Rn */
	r2 = 0x2A0u; UPD(0x0C06F258u, 1);  /* 0C06F256 mov.w @(disp,pc),Rn */
	r13 &= r3;  /* 0C06F258 and Rm,Rn */
	IF(0x0C06F25Au); MACL = r13 * r2;  /* 0C06F25A mul.l Rm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C06F25Eu, 4);  /* 0C06F25C mov.l @(disp,pc),Rn */
	IF(0x0C06F25Eu); r3 = MACL;  /* 0C06F25E sts macl,Rn */
	r3 += r0;  /* 0C06F260 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C06F264u, 3);  /* 0C06F262 mov.l @Rm,Rn */
	r0 = 0x10000000u; UPD(0x0C06F266u, 1);  /* 0C06F264 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C06F266 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F344u, 4); goto L_0C06F344; } goto L_0C06F26C; }  /* 0C06F268 bt/s */
L_0C06F26C: BLKS(0x0C06F26Cu);
	r0 = R32(r3 + 0x4u); UPD(0x0C06F26Eu, 2);  /* 0C06F26C mov.l @(disp,Rm),Rn */
	r10 = 0x3u;  /* 0C06F26E mov #imm,Rn */
	IF(0x0C06F270u); ARG0(0x40ADu); { s32 s_ = (s32)r10; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06F270 shld Rm,Rn */
	r2 = 0xC17E12Cu; UPD(0x0C06F274u, 3);  /* 0C06F272 mov.l @(disp,pc),Rn */
	r1 = 0x4u;  /* 0C06F274 mov #imm,Rn */
	IF(0x0C06F276u); r12 = R32(r0 + r2); UPD(0x0C06F278u, 2);  /* 0C06F276 mov.l @(r0,Rm),Rn */
	r11 = 0x3u;  /* 0C06F278 mov #imm,Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C06F27Cu, 2);  /* 0C06F27A mov.l @(disp,Rm),Rn */
	r8 = R32(r3 + 0xCu); UPD(0x0C06F27Eu, 1);  /* 0C06F27C mov.l @(disp,Rm),Rn */
	IF(0x0C06F27Eu); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06F27E shld Rm,Rn */
	IF(0x0C06F280u); ARG0(0x48BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C06F280 shld Rm,Rn */
	IF(0x0C06F282u); r9 = R32(r0 + r12); UPD(0x0C06F284u, 3);  /* 0C06F282 mov.l @(r0,Rm),Rn */
	r8 += r9;  /* 0C06F284 add Rm,Rn */
	r10 = R32(r8 + 0x4u); UPD(0x0C06F288u, 2);  /* 0C06F286 mov.l @(disp,Rm),Rn */
	r7 = 0xFFFFFFFu; UPD(0x0C06F28Au, 1);  /* 0C06F288 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r5 = v_; } UPD(0x0C06F28Cu, 1);  /* 0C06F28A mov.l @Rm+,Rn */
	r6 = 0xC2B0800u; UPD(0x0C06F28Eu, 1);  /* 0C06F28C mov.l @(disp,pc),Rn */
	r5 &= r7;  /* 0C06F28E and Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C06F290 tst Rm,Rn */
	{ u32 c_ = T; W32(r6, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06F344u, 5); goto L_0C06F344; } UPD(0x0C06F296u, 1); goto L_0C06F296; }  /* 0C06F292 bt/s */
L_0C06F296: BLKS(0x0C06F296u);
	r11 = 0xC286108u; UPD(0x0C06F298u, 1);  /* 0C06F296 mov.l @(disp,pc),Rn */
	r12 = r3;  /* 0C06F298 mov Rm,Rn */
	UPD(0x0C06F29Au, 1);
L_0C06F29A: BLKS(0x0C06F29Au);
	{ u32 v_ = R32(r10); r10 += 4; r9 = v_; } UPD(0x0C06F29Cu, 1);  /* 0C06F29A mov.l @Rm+,Rn */
	r8 = 0xC23DEA0u; UPD(0x0C06F29Eu, 1);  /* 0C06F29C mov.l @(disp,pc),Rn */
	W32(r8, r9); UPD(0x0C06F2A0u, 1);  /* 0C06F29E mov.l Rm,@Rn */
	{ u32 v_ = R32(r10); r10 += 4; r7 = v_; } UPD(0x0C06F2A2u, 1);  /* 0C06F2A0 mov.l @Rm+,Rn */
	r8 = 0x0u;  /* 0C06F2A2 mov #imm,Rn */
	r6 = R32(r12 + 0x10u); UPD(0x0C06F2A6u, 2);  /* 0C06F2A4 mov.l @(disp,Rm),Rn */
	r9 = 0x0u;  /* 0C06F2A6 mov #imm,Rn */
	r5 = 0xC286314u; UPD(0x0C06F2AAu, 2);  /* 0C06F2A8 mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C06F2AA add Rm,Rn */
	W32(r5, r6); UPD(0x0C06F2AEu, 2);  /* 0C06F2AC mov.l Rm,@Rn */
	r3 = R32(r12 + 0x14u); UPD(0x0C06F2B0u, 1);  /* 0C06F2AE mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r4 = v_; } UPD(0x0C06F2B2u, 1);  /* 0C06F2B0 mov.l @Rm+,Rn */
	r0 = 0xC28F600u; UPD(0x0C06F2B4u, 1);  /* 0C06F2B2 mov.l @(disp,pc),Rn */
	r3 += r4;  /* 0C06F2B4 add Rm,Rn */
	W32(r0, r3); UPD(0x0C06F2B8u, 2);  /* 0C06F2B6 mov.l Rm,@Rn */
L_0C06F2B8: BLKS(0x0C06F2B8u);
	r7 = 0xC3BC7CCu; UPD(0x0C06F2BAu, 1);  /* 0C06F2B8 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C06F2BA add Rm,Rn */
	r1 = R32(r7); UPD(0x0C06F2BEu, 2);  /* 0C06F2BC mov.l @Rm,Rn */
	r0 = 0x10000000u; UPD(0x0C06F2C0u, 1);  /* 0C06F2BE mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C06F2C0 tst Rm,Rn */
	{ u32 c_ = T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F32Au, 4); goto L_0C06F32A; } goto L_0C06F2C6; }  /* 0C06F2C2 bt/s */
L_0C06F2C6: BLKS(0x0C06F2C6u);
	r3 = R32(r7 + 0x1Cu); UPD(0x0C06F2C8u, 2);  /* 0C06F2C6 mov.l @(disp,Rm),Rn */
	r2 = 0xC2B0388u; UPD(0x0C06F2CAu, 1);  /* 0C06F2C8 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r3); r3 += 4; r4 = v_; } UPD(0x0C06F2CCu, 1);  /* 0C06F2CA mov.l @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C06F2CC tst Rm,Rn */
	{ u32 c_ = T; W32(r2, r4); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06F328u, 4); goto L_0C06F328; } UPD(0x0C06F2D2u, 1); goto L_0C06F2D2; }  /* 0C06F2CE bt/s */
L_0C06F2D2: BLKS(0x0C06F2D2u);
	r0 = 0xC2B07ACu; UPD(0x0C06F2D4u, 1);  /* 0C06F2D2 mov.l @(disp,pc),Rn */
	r4 = r7;  /* 0C06F2D4 mov Rm,Rn */
	IF(0x0C06F2D6u); ;  /* 0C06F2D6 nop */
	UPD(0x0C06F2D8u, 2);
L_0C06F2D8: BLKS(0x0C06F2D8u);
	{ u32 v_ = R32(r3); r3 += 4; r5 = v_; } UPD(0x0C06F2DAu, 1);  /* 0C06F2D8 mov.l @Rm+,Rn */
	r2 = 0xC3C86D8u; UPD(0x0C06F2DCu, 1);  /* 0C06F2DA mov.l @(disp,pc),Rn */
	W32(r2, r5); UPD(0x0C06F2DEu, 1);  /* 0C06F2DC mov.l Rm,@Rn */
	{ u32 v_ = R32(r3); r3 += 4; r6 = v_; } UPD(0x0C06F2E0u, 1);  /* 0C06F2DE mov.l @Rm+,Rn */
	r2 = R32(r4 + 0x28u); UPD(0x0C06F2E2u, 1);  /* 0C06F2E0 mov.l @(disp,Rm),Rn */
	r2 += r6;  /* 0C06F2E2 add Rm,Rn */
	W32(r0, r2); UPD(0x0C06F2E6u, 2);  /* 0C06F2E4 mov.l Rm,@Rn */
	{ u32 v_ = R32(r3); r3 += 4; r7 = v_; } UPD(0x0C06F2E8u, 1);  /* 0C06F2E6 mov.l @Rm+,Rn */
	r6 = R32(r4 + 0x2Cu); UPD(0x0C06F2EAu, 1);  /* 0C06F2E8 mov.l @(disp,Rm),Rn */
	r1 = 0xC286314u; UPD(0x0C06F2ECu, 1);  /* 0C06F2EA mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C06F2EC add Rm,Rn */
	r7 = R32(r1); UPD(0x0C06F2F0u, 2);  /* 0C06F2EE mov.l @Rm,Rn */
	r7 -= r2;  /* 0C06F2F0 sub Rm,Rn */
	IF(0x0C06F2F2u); T = (s32)r7 >= 0;  /* 0C06F2F2 cmp/pz Rn */
	{ u32 c_ = !T; W32(r11, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06F380u, 5); goto L_0C06F380; } UPD(0x0C06F2F8u, 1); goto L_0C06F2F8; }  /* 0C06F2F4 bf/s */
L_0C06F2F8: BLKS(0x0C06F2F8u);
	r1 = 0xC2B0800u; UPD(0x0C06F2FAu, 1);  /* 0C06F2F8 mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C06F2FCu, 1);  /* 0C06F2FA mov.l @Rm,Rn */
	r1 = 0xFFFFFFFu; UPD(0x0C06F2FEu, 1);  /* 0C06F2FC mov.l @(disp,pc),Rn */
	r2 &= r1;  /* 0C06F2FE and Rm,Rn */
	r1 = 0xC2B0388u; UPD(0x0C06F302u, 2);  /* 0C06F300 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C06F304u, 1);  /* 0C06F302 mov.l @Rm,Rn */
	r2 += r1;  /* 0C06F304 add Rm,Rn */
	T = (s32)r7 >= (s32)r2;  /* 0C06F306 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C06F31Eu, 5); goto L_0C06F31E; }  /* 0C06F308 bt */
L_0C06F30A: BLKS(0x0C06F30Au);
	r7 = 0xC28F600u; UPD(0x0C06F30Cu, 1);  /* 0C06F30A mov.l @(disp,pc),Rn */
	r2 = R32(r7); UPD(0x0C06F30Eu, 1);  /* 0C06F30C mov.l @Rm,Rn */
	r2 -= r6;  /* 0C06F30E sub Rm,Rn */
	IF(0x0C06F310u); T = (s32)r2 >= 0;  /* 0C06F310 cmp/pz Rn */
	if (!T) { UPD(0x0C06F370u, 5); goto L_0C06F370; }  /* 0C06F312 bf */
L_0C06F314: BLKS(0x0C06F314u);
	r7 = 0xC23DEA0u; UPD(0x0C06F316u, 1);  /* 0C06F314 mov.l @(disp,pc),Rn */
	r6 = R32(r7); UPD(0x0C06F318u, 1);  /* 0C06F316 mov.l @Rm,Rn */
	r6 += r5;  /* 0C06F318 add Rm,Rn */
	T = (s32)r2 >= (s32)r6;  /* 0C06F31A cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C06F360u, 5); goto L_0C06F360; }  /* 0C06F31C bf */
L_0C06F31E: BLKS(0x0C06F31Eu);
	{ u32 v_ = R32(r3); r3 += 4; r5 = v_; } UPD(0x0C06F320u, 1);  /* 0C06F31E mov.l @Rm+,Rn */
	r2 = 0xC2B0388u; UPD(0x0C06F322u, 1);  /* 0C06F320 mov.l @(disp,pc),Rn */
	T = (r5 & r5) == 0;  /* 0C06F322 tst Rm,Rn */
	{ u32 c_ = !T; W32(r2, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06F2D8u, 4); goto L_0C06F2D8; } UPD(0x0C06F328u, 1); goto L_0C06F328; }  /* 0C06F324 bf/s */
L_0C06F328: BLKS(0x0C06F328u);
	r0 = r8;  /* 0C06F328 mov Rm,Rn */
	UPD(0x0C06F32Au, 1);
L_0C06F32A: BLKS(0x0C06F32Au);
	r0 += 0x1u;  /* 0C06F32A add #imm,Rn */
	r3 = 0x13Fu; UPD(0x0C06F32Eu, 2);  /* 0C06F32C mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C06F32E exts.w Rm,Rn */
	T = (s32)r8 > (s32)r3;  /* 0C06F330 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x60u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06F2B8u, 5); goto L_0C06F2B8; } goto L_0C06F336; }  /* 0C06F332 bf/s */
L_0C06F336: BLKS(0x0C06F336u);
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C06F338u, 2);  /* 0C06F336 mov.l @Rm+,Rn */
	r1 = 0xFFFFFFFu; UPD(0x0C06F33Au, 1);  /* 0C06F338 mov.l @(disp,pc),Rn */
	r9 = 0xC2B0800u; UPD(0x0C06F33Cu, 1);  /* 0C06F33A mov.l @(disp,pc),Rn */
	r8 &= r1;  /* 0C06F33C and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C06F33E tst Rm,Rn */
	{ u32 c_ = !T; W32(r9, r8); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06F29Au, 5); goto L_0C06F29A; } UPD(0x0C06F344u, 1); goto L_0C06F344; }  /* 0C06F340 bf/s */
L_0C06F344: BLKS(0x0C06F344u);
	r15 = r14;  /* 0C06F344 mov Rm,Rn */
	IF(0x0C06F346u); PR = R32(r15); r15 += 4; UPD(0x0C06F348u, 2);  /* 0C06F346 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06F34Au, 1);  /* 0C06F348 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06F34Cu, 1);  /* 0C06F34A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06F34Eu, 1);  /* 0C06F34C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06F350u, 1);  /* 0C06F34E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06F352u, 1);  /* 0C06F350 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06F354u, 1);  /* 0C06F352 mov.l @Rm+,Rn */
	IF(0x0C06F354u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06F354 rts */
L_0C06F360: BLKS(0x0C06F360u);
	r0 = 0xC07E160u; UPD(0x0C06F362u, 1);  /* 0C06F360 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C06F362 mov Rm,Rn */
	IF(0x0C06F364u); { u32 t_ = r0; PR = 0x0C06F368u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C07E160, 0x0C07E160u, 0x0C06F368u); }  /* 0C06F364 jsr @Rn */
L_0C06F368: BLKS(0x0C06F368u);
	{ r0 = r8; /* slot mov Rm,Rn */ UPD(0x0C06F32Au, 3); goto L_0C06F32A; }  /* 0C06F368 bra */
L_0C06F370: BLKS(0x0C06F370u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C06F314u, 3); goto L_0C06F314; }  /* 0C06F370 bra */
L_0C06F380: BLKS(0x0C06F380u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C06F2F8u, 3); goto L_0C06F2F8; }  /* 0C06F380 bra */
}

/* FUN_0c06f3d0 */
void blk_f_0C06F3D0(sh3_t *c)
{
	LOCALS;
L_0C06F3D0: BLKS(0x0C06F3D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06F3D2u, 1);  /* 0C06F3D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06F3D4u, 1);  /* 0C06F3D2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06F3D6u, 1);  /* 0C06F3D4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06F3D8u, 1);  /* 0C06F3D6 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06F3DAu, 1);  /* 0C06F3D8 mov.l Rm,@-Rn */
	r10 = 0xC17E12Cu; UPD(0x0C06F3DCu, 1);  /* 0C06F3DA mov.l @(disp,pc),Rn */
	IF(0x0C06F3DCu); r15 -= 4; W32(r15, PR); UPD(0x0C06F3DEu, 1);  /* 0C06F3DC sts.l pr,@-Rn */
	{ u32 v_ = R32(r10); r10 += 4; r0 = v_; } UPD(0x0C06F3E0u, 1);  /* 0C06F3DE mov.l @Rm+,Rn */
	T = (r0 & r0) == 0;  /* 0C06F3E0 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F408u, 4); goto L_0C06F408; } goto L_0C06F3E6; }  /* 0C06F3E2 bt/s */
L_0C06F3E6: BLKS(0x0C06F3E6u);
	IF(0x0C06F3E6u); ;  /* 0C06F3E6 nop */
	UPD(0x0C06F3E8u, 2);
L_0C06F3E8: BLKS(0x0C06F3E8u);
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C06F3EAu, 1);  /* 0C06F3E8 mov.l @Rm+,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F3ECu, 1);  /* 0C06F3EA mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06F3EC tst Rm,Rn */
	if (T) { UPD(0x0C06F402u, 4); goto L_0C06F402; }  /* 0C06F3EE bt */
L_0C06F3F0: BLKS(0x0C06F3F0u);
	r9 = 0xC069F40u; UPD(0x0C06F3F2u, 1);  /* 0C06F3F0 mov.l @(disp,pc),Rn */
	IF(0x0C06F3F2u); ;  /* 0C06F3F2 nop */
	UPD(0x0C06F3F4u, 1);
L_0C06F3F4: BLKS(0x0C06F3F4u);
	r4 = (u32)(s32)(s16)r4;  /* 0C06F3F4 exts.w Rm,Rn */
	r5 = 0x100u; UPD(0x0C06F3F8u, 2);  /* 0C06F3F6 mov.w @(disp,pc),Rn */
	IF(0x0C06F3F8u); { u32 t_ = r9; PR = 0x0C06F3FCu; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069F40, 0x0C069F40u, 0x0C06F3FCu); }  /* 0C06F3F8 jsr @Rn */
L_0C06F3FC: BLKS(0x0C06F3FCu);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F3FEu, 1);  /* 0C06F3FC mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06F3FE tst Rm,Rn */
	if (!T) { UPD(0x0C06F3F4u, 4); goto L_0C06F3F4; }  /* 0C06F400 bf */
L_0C06F402: BLKS(0x0C06F402u);
	{ u32 v_ = R32(r10); r10 += 4; r0 = v_; } UPD(0x0C06F404u, 1);  /* 0C06F402 mov.l @Rm+,Rn */
	T = (r0 & r0) == 0;  /* 0C06F404 tst Rm,Rn */
	if (!T) { UPD(0x0C06F3E8u, 4); goto L_0C06F3E8; }  /* 0C06F406 bf */
L_0C06F408: BLKS(0x0C06F408u);
	r10 = 0xC182688u; UPD(0x0C06F40Au, 1);  /* 0C06F408 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r2 = v_; } UPD(0x0C06F40Cu, 1);  /* 0C06F40A mov.l @Rm+,Rn */
	T = (r2 & r2) == 0;  /* 0C06F40C tst Rm,Rn */
	if (T) { UPD(0x0C06F430u, 4); goto L_0C06F430; }  /* 0C06F40E bt */
L_0C06F410: BLKS(0x0C06F410u);
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C06F412u, 1);  /* 0C06F410 mov.l @Rm+,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F414u, 1);  /* 0C06F412 mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06F414 tst Rm,Rn */
	{ u32 c_ = T; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C06F42Au, 4); goto L_0C06F42A; } goto L_0C06F41A; }  /* 0C06F416 bt/s */
L_0C06F41A: BLKS(0x0C06F41Au);
	r9 = 0xC069F40u; UPD(0x0C06F41Cu, 2);  /* 0C06F41A mov.l @(disp,pc),Rn */
L_0C06F41C: BLKS(0x0C06F41Cu);
	r5 = 0x100u; UPD(0x0C06F41Eu, 1);  /* 0C06F41C mov.w @(disp,pc),Rn */
	IF(0x0C06F41Eu); { u32 t_ = r9; PR = 0x0C06F422u; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069F40, 0x0C069F40u, 0x0C06F422u); }  /* 0C06F41E jsr @Rn */
L_0C06F422: BLKS(0x0C06F422u);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F424u, 1);  /* 0C06F422 mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06F424 tst Rm,Rn */
	{ u32 c_ = !T; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C06F41Cu, 4); goto L_0C06F41C; } UPD(0x0C06F42Au, 1); goto L_0C06F42A; }  /* 0C06F426 bf/s */
L_0C06F42A: BLKS(0x0C06F42Au);
	{ u32 v_ = R32(r10); r10 += 4; r3 = v_; } UPD(0x0C06F42Cu, 1);  /* 0C06F42A mov.l @Rm+,Rn */
	T = (r3 & r3) == 0;  /* 0C06F42C tst Rm,Rn */
	if (!T) { UPD(0x0C06F410u, 4); goto L_0C06F410; }  /* 0C06F42E bf */
L_0C06F430: BLKS(0x0C06F430u);
	r10 = 0xC17E1B0u; UPD(0x0C06F432u, 1);  /* 0C06F430 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r4 = v_; } UPD(0x0C06F434u, 1);  /* 0C06F432 mov.l @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C06F434 tst Rm,Rn */
	if (T) { UPD(0x0C06F458u, 4); goto L_0C06F458; }  /* 0C06F436 bt */
L_0C06F438: BLKS(0x0C06F438u);
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C06F43Au, 1);  /* 0C06F438 mov.l @Rm+,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F43Cu, 1);  /* 0C06F43A mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06F43C tst Rm,Rn */
	if (T) { UPD(0x0C06F452u, 4); goto L_0C06F452; }  /* 0C06F43E bt */
L_0C06F440: BLKS(0x0C06F440u);
	r9 = 0xC069F40u; UPD(0x0C06F442u, 1);  /* 0C06F440 mov.l @(disp,pc),Rn */
	IF(0x0C06F442u); ;  /* 0C06F442 nop */
	UPD(0x0C06F444u, 1);
L_0C06F444: BLKS(0x0C06F444u);
	r4 = (u32)(s32)(s16)r4;  /* 0C06F444 exts.w Rm,Rn */
	r5 = 0x100u; UPD(0x0C06F448u, 2);  /* 0C06F446 mov.w @(disp,pc),Rn */
	IF(0x0C06F448u); { u32 t_ = r9; PR = 0x0C06F44Cu; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069F40, 0x0C069F40u, 0x0C06F44Cu); }  /* 0C06F448 jsr @Rn */
L_0C06F44C: BLKS(0x0C06F44Cu);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F44Eu, 1);  /* 0C06F44C mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06F44E tst Rm,Rn */
	if (!T) { UPD(0x0C06F444u, 4); goto L_0C06F444; }  /* 0C06F450 bf */
L_0C06F452: BLKS(0x0C06F452u);
	{ u32 v_ = R32(r10); r10 += 4; r5 = v_; } UPD(0x0C06F454u, 1);  /* 0C06F452 mov.l @Rm+,Rn */
	T = (r5 & r5) == 0;  /* 0C06F454 tst Rm,Rn */
	if (!T) { UPD(0x0C06F438u, 4); goto L_0C06F438; }  /* 0C06F456 bf */
L_0C06F458: BLKS(0x0C06F458u);
	r10 = 0xC1866E4u; UPD(0x0C06F45Au, 1);  /* 0C06F458 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r6 = v_; } UPD(0x0C06F45Cu, 1);  /* 0C06F45A mov.l @Rm+,Rn */
	T = (r6 & r6) == 0;  /* 0C06F45C tst Rm,Rn */
	if (T) { UPD(0x0C06F480u, 4); goto L_0C06F480; }  /* 0C06F45E bt */
L_0C06F460: BLKS(0x0C06F460u);
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C06F462u, 1);  /* 0C06F460 mov.l @Rm+,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F464u, 1);  /* 0C06F462 mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06F464 tst Rm,Rn */
	if (T) { UPD(0x0C06F47Au, 4); goto L_0C06F47A; }  /* 0C06F466 bt */
L_0C06F468: BLKS(0x0C06F468u);
	r9 = 0xC069F40u; UPD(0x0C06F46Au, 1);  /* 0C06F468 mov.l @(disp,pc),Rn */
	IF(0x0C06F46Au); ;  /* 0C06F46A nop */
	UPD(0x0C06F46Cu, 1);
L_0C06F46C: BLKS(0x0C06F46Cu);
	r4 = (u32)(s32)(s16)r4;  /* 0C06F46C exts.w Rm,Rn */
	r5 = 0x100u; UPD(0x0C06F470u, 2);  /* 0C06F46E mov.w @(disp,pc),Rn */
	IF(0x0C06F470u); { u32 t_ = r9; PR = 0x0C06F474u; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069F40, 0x0C069F40u, 0x0C06F474u); }  /* 0C06F470 jsr @Rn */
L_0C06F474: BLKS(0x0C06F474u);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F476u, 1);  /* 0C06F474 mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06F476 tst Rm,Rn */
	if (!T) { UPD(0x0C06F46Cu, 4); goto L_0C06F46C; }  /* 0C06F478 bf */
L_0C06F47A: BLKS(0x0C06F47Au);
	{ u32 v_ = R32(r10); r10 += 4; r7 = v_; } UPD(0x0C06F47Cu, 1);  /* 0C06F47A mov.l @Rm+,Rn */
	T = (r7 & r7) == 0;  /* 0C06F47C tst Rm,Rn */
	if (!T) { UPD(0x0C06F460u, 4); goto L_0C06F460; }  /* 0C06F47E bf */
L_0C06F480: BLKS(0x0C06F480u);
	r10 = 0xC189B20u; UPD(0x0C06F482u, 1);  /* 0C06F480 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C06F484u, 1);  /* 0C06F482 mov.l @Rm+,Rn */
	T = (r8 & r8) == 0;  /* 0C06F484 tst Rm,Rn */
	if (T) { UPD(0x0C06F4A8u, 4); goto L_0C06F4A8; }  /* 0C06F486 bt */
L_0C06F488: BLKS(0x0C06F488u);
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C06F48Au, 1);  /* 0C06F488 mov.l @Rm+,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F48Cu, 1);  /* 0C06F48A mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06F48C tst Rm,Rn */
	if (T) { UPD(0x0C06F4A2u, 4); goto L_0C06F4A2; }  /* 0C06F48E bt */
L_0C06F490: BLKS(0x0C06F490u);
	r9 = 0xC069F40u; UPD(0x0C06F492u, 1);  /* 0C06F490 mov.l @(disp,pc),Rn */
	IF(0x0C06F492u); ;  /* 0C06F492 nop */
	UPD(0x0C06F494u, 1);
L_0C06F494: BLKS(0x0C06F494u);
	r4 = (u32)(s32)(s16)r4;  /* 0C06F494 exts.w Rm,Rn */
	r5 = 0x100u; UPD(0x0C06F498u, 2);  /* 0C06F496 mov.w @(disp,pc),Rn */
	IF(0x0C06F498u); { u32 t_ = r9; PR = 0x0C06F49Cu; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069F40, 0x0C069F40u, 0x0C06F49Cu); }  /* 0C06F498 jsr @Rn */
L_0C06F49C: BLKS(0x0C06F49Cu);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F49Eu, 1);  /* 0C06F49C mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06F49E tst Rm,Rn */
	if (!T) { UPD(0x0C06F494u, 4); goto L_0C06F494; }  /* 0C06F4A0 bf */
L_0C06F4A2: BLKS(0x0C06F4A2u);
	{ u32 v_ = R32(r10); r10 += 4; r9 = v_; } UPD(0x0C06F4A4u, 1);  /* 0C06F4A2 mov.l @Rm+,Rn */
	T = (r9 & r9) == 0;  /* 0C06F4A4 tst Rm,Rn */
	if (!T) { UPD(0x0C06F488u, 4); goto L_0C06F488; }  /* 0C06F4A6 bf */
L_0C06F4A8: BLKS(0x0C06F4A8u);
	r10 = 0xC1F7E08u; UPD(0x0C06F4AAu, 1);  /* 0C06F4A8 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r11 = v_; } UPD(0x0C06F4ACu, 1);  /* 0C06F4AA mov.l @Rm+,Rn */
	T = (r11 & r11) == 0;  /* 0C06F4AC tst Rm,Rn */
	if (T) { UPD(0x0C06F4D0u, 4); goto L_0C06F4D0; }  /* 0C06F4AE bt */
L_0C06F4B0: BLKS(0x0C06F4B0u);
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C06F4B2u, 1);  /* 0C06F4B0 mov.l @Rm+,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F4B4u, 1);  /* 0C06F4B2 mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06F4B4 tst Rm,Rn */
	if (T) { UPD(0x0C06F4CAu, 4); goto L_0C06F4CA; }  /* 0C06F4B6 bt */
L_0C06F4B8: BLKS(0x0C06F4B8u);
	r9 = 0xC069F40u; UPD(0x0C06F4BAu, 1);  /* 0C06F4B8 mov.l @(disp,pc),Rn */
	IF(0x0C06F4BAu); ;  /* 0C06F4BA nop */
	UPD(0x0C06F4BCu, 1);
L_0C06F4BC: BLKS(0x0C06F4BCu);
	r4 = (u32)(s32)(s16)r4;  /* 0C06F4BC exts.w Rm,Rn */
	r5 = 0x100u; UPD(0x0C06F4C0u, 2);  /* 0C06F4BE mov.w @(disp,pc),Rn */
	IF(0x0C06F4C0u); { u32 t_ = r9; PR = 0x0C06F4C4u; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069F40, 0x0C069F40u, 0x0C06F4C4u); }  /* 0C06F4C0 jsr @Rn */
L_0C06F4C4: BLKS(0x0C06F4C4u);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F4C6u, 1);  /* 0C06F4C4 mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06F4C6 tst Rm,Rn */
	if (!T) { UPD(0x0C06F4BCu, 4); goto L_0C06F4BC; }  /* 0C06F4C8 bf */
L_0C06F4CA: BLKS(0x0C06F4CAu);
	{ u32 v_ = R32(r10); r10 += 4; r0 = v_; } UPD(0x0C06F4CCu, 1);  /* 0C06F4CA mov.l @Rm+,Rn */
	T = (r0 & r0) == 0;  /* 0C06F4CC tst Rm,Rn */
	if (!T) { UPD(0x0C06F4B0u, 4); goto L_0C06F4B0; }  /* 0C06F4CE bf */
L_0C06F4D0: BLKS(0x0C06F4D0u);
	r10 = 0xC1FFD24u; UPD(0x0C06F4D2u, 1);  /* 0C06F4D0 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r10); r10 += 4; r2 = v_; } UPD(0x0C06F4D4u, 1);  /* 0C06F4D2 mov.l @Rm+,Rn */
	T = (r2 & r2) == 0;  /* 0C06F4D4 tst Rm,Rn */
	if (T) { UPD(0x0C06F4F8u, 4); goto L_0C06F4F8; }  /* 0C06F4D6 bt */
L_0C06F4D8: BLKS(0x0C06F4D8u);
	{ u32 v_ = R32(r10); r10 += 4; r8 = v_; } UPD(0x0C06F4DAu, 1);  /* 0C06F4D8 mov.l @Rm+,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F4DCu, 1);  /* 0C06F4DA mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06F4DC tst Rm,Rn */
	{ u32 c_ = T; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C06F4F2u, 4); goto L_0C06F4F2; } goto L_0C06F4E2; }  /* 0C06F4DE bt/s */
L_0C06F4E2: BLKS(0x0C06F4E2u);
	r9 = 0xC069F40u; UPD(0x0C06F4E4u, 2);  /* 0C06F4E2 mov.l @(disp,pc),Rn */
L_0C06F4E4: BLKS(0x0C06F4E4u);
	r5 = 0x100u; UPD(0x0C06F4E6u, 1);  /* 0C06F4E4 mov.w @(disp,pc),Rn */
	IF(0x0C06F4E6u); { u32 t_ = r9; PR = 0x0C06F4EAu; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069F40, 0x0C069F40u, 0x0C06F4EAu); }  /* 0C06F4E6 jsr @Rn */
L_0C06F4EA: BLKS(0x0C06F4EAu);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F4ECu, 1);  /* 0C06F4EA mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06F4EC tst Rm,Rn */
	{ u32 c_ = !T; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C06F4E4u, 4); goto L_0C06F4E4; } UPD(0x0C06F4F2u, 1); goto L_0C06F4F2; }  /* 0C06F4EE bf/s */
L_0C06F4F2: BLKS(0x0C06F4F2u);
	{ u32 v_ = R32(r10); r10 += 4; r3 = v_; } UPD(0x0C06F4F4u, 1);  /* 0C06F4F2 mov.l @Rm+,Rn */
	T = (r3 & r3) == 0;  /* 0C06F4F4 tst Rm,Rn */
	if (!T) { UPD(0x0C06F4D8u, 4); goto L_0C06F4D8; }  /* 0C06F4F6 bf */
L_0C06F4F8: BLKS(0x0C06F4F8u);
	r10 = 0xC17492Cu; UPD(0x0C06F4FAu, 1);  /* 0C06F4F8 mov.l @(disp,pc),Rn */
	r4 = 0x400u; UPD(0x0C06F4FCu, 1);  /* 0C06F4FA mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C06F4FEu, 1);  /* 0C06F4FC mov.w @Rm,Rn */
	r11 = 0xC1DD458u; UPD(0x0C06F500u, 1);  /* 0C06F4FE mov.l @(disp,pc),Rn */
	T = r4 == r2;  /* 0C06F500 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C06F530u, 4); goto L_0C06F530; }  /* 0C06F502 bt */
L_0C06F504: BLKS(0x0C06F504u);
	r5 = (u32)(s32)(s16)r2;  /* 0C06F504 exts.w Rm,Rn */
	IF(0x0C06F506u); r5 <<= 2;  /* 0C06F506 shll2 Rn */
	r5 += r5;  /* 0C06F508 add Rm,Rn */
	r5 += r11;  /* 0C06F50A add Rm,Rn */
	r8 = R32(r5 + 0x4u); UPD(0x0C06F50Eu, 5);  /* 0C06F50C mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F510u, 1);  /* 0C06F50E mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06F510 tst Rm,Rn */
	{ u32 c_ = T; r10 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06F528u, 4); goto L_0C06F528; } goto L_0C06F516; }  /* 0C06F512 bt/s */
L_0C06F516: BLKS(0x0C06F516u);
	r9 = 0xC069F40u; UPD(0x0C06F518u, 2);  /* 0C06F516 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C06F518 exts.w Rm,Rn */
	UPD(0x0C06F51Au, 1);
L_0C06F51A: BLKS(0x0C06F51Au);
	r5 = 0x100u; UPD(0x0C06F51Cu, 1);  /* 0C06F51A mov.w @(disp,pc),Rn */
	IF(0x0C06F51Cu); { u32 t_ = r9; PR = 0x0C06F520u; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069F40, 0x0C069F40u, 0x0C06F520u); }  /* 0C06F51C jsr @Rn */
L_0C06F520: BLKS(0x0C06F520u);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F522u, 1);  /* 0C06F520 mov.w @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06F522 tst Rm,Rn */
	{ u32 c_ = !T; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C06F51Au, 4); goto L_0C06F51A; } UPD(0x0C06F528u, 1); goto L_0C06F528; }  /* 0C06F524 bf/s */
L_0C06F528: BLKS(0x0C06F528u);
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C06F52Au, 1);  /* 0C06F528 mov.w @Rm,Rn */
	r7 = 0x400u; UPD(0x0C06F52Cu, 1);  /* 0C06F52A mov.w @(disp,pc),Rn */
	T = r7 == r2;  /* 0C06F52C cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C06F504u, 4); goto L_0C06F504; }  /* 0C06F52E bf */
L_0C06F530: BLKS(0x0C06F530u);
	r10 = 0xC069F40u; UPD(0x0C06F532u, 1);  /* 0C06F530 mov.l @(disp,pc),Rn */
	r9 = 0x100u; UPD(0x0C06F534u, 1);  /* 0C06F532 mov.w @(disp,pc),Rn */
	r4 = 0x369u; UPD(0x0C06F536u, 1);  /* 0C06F534 mov.w @(disp,pc),Rn */
	IF(0x0C06F536u); { u32 t_ = r10; PR = 0x0C06F53Au; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069F40, 0x0C069F40u, 0x0C06F53Au); }  /* 0C06F536 jsr @Rn */
L_0C06F53A: BLKS(0x0C06F53Au);
	r4 = 0x36Eu; UPD(0x0C06F53Cu, 1);  /* 0C06F53A mov.w @(disp,pc),Rn */
	IF(0x0C06F53Cu); { u32 t_ = r10; PR = 0x0C06F540u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069F40, 0x0C069F40u, 0x0C06F540u); }  /* 0C06F53C jsr @Rn */
L_0C06F540: BLKS(0x0C06F540u);
	r4 = 0x36Fu; UPD(0x0C06F542u, 1);  /* 0C06F540 mov.w @(disp,pc),Rn */
	IF(0x0C06F542u); { u32 t_ = r10; PR = 0x0C06F546u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069F40, 0x0C069F40u, 0x0C06F546u); }  /* 0C06F542 jsr @Rn */
L_0C06F546: BLKS(0x0C06F546u);
	r4 = 0x370u; UPD(0x0C06F548u, 1);  /* 0C06F546 mov.w @(disp,pc),Rn */
	IF(0x0C06F548u); { u32 t_ = r10; PR = 0x0C06F54Cu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069F40, 0x0C069F40u, 0x0C06F54Cu); }  /* 0C06F548 jsr @Rn */
L_0C06F54C: BLKS(0x0C06F54Cu);
	r4 = 0x371u; UPD(0x0C06F54Eu, 1);  /* 0C06F54C mov.w @(disp,pc),Rn */
	r5 = r9;  /* 0C06F54E mov Rm,Rn */
	r0 = r10;  /* 0C06F550 mov Rm,Rn */
	r15 = r14;  /* 0C06F552 mov Rm,Rn */
	IF(0x0C06F554u); PR = R32(r15); r15 += 4; UPD(0x0C06F556u, 4);  /* 0C06F554 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06F558u, 1);  /* 0C06F556 mov.l @Rm+,Rn */
	{ { u32 v_ = R32(r15); r15 += 4; r11 = v_; } /* slot mov.l @Rm+,Rn */ UPD(0x0C06F5A0u, 3); goto L_0C06F5A0; }  /* 0C06F558 bra */
L_0C06F5A0: BLKS(0x0C06F5A0u);
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06F5A2u, 1);  /* 0C06F5A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06F5A4u, 1);  /* 0C06F5A2 mov.l @Rm+,Rn */
	IF(0x0C06F5A4u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C069F40u: TAIL(blk_f_0C069F40); default: JUMPD(tv_); } }  /* 0C06F5A4 jmp @Rn */
}

/* FUN_0c06f5b0 */
void blk_f_0C06F5B0(sh3_t *c)
{
	LOCALS;
L_0C06F5B0: BLKS(0x0C06F5B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06F5B2u, 1);  /* 0C06F5B0 mov.l Rm,@-Rn */
	r5 = 0x24u;  /* 0C06F5B2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06F5B6u, 2);  /* 0C06F5B4 mov.l Rm,@-Rn */
	r6 = 0x1u;  /* 0C06F5B6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06F5BAu, 2);  /* 0C06F5B8 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06F5BCu, 1);  /* 0C06F5BA mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C06F5BC mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06F5C0u, 2);  /* 0C06F5BE mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06F5C2u, 1);  /* 0C06F5C0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06F5C4u, 1);  /* 0C06F5C2 mov.l Rm,@-Rn */
	r13 = 0x0u;  /* 0C06F5C4 mov #imm,Rn */
	r9 = 0xC0626E0u; UPD(0x0C06F5C8u, 2);  /* 0C06F5C6 mov.l @(disp,pc),Rn */
	IF(0x0C06F5C8u); r15 -= 4; W32(r15, PR); UPD(0x0C06F5CAu, 1);  /* 0C06F5C8 sts.l pr,@-Rn */
	r4 = 0xC17495Cu; UPD(0x0C06F5CCu, 1);  /* 0C06F5CA mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C06F5CEu, 1);  /* 0C06F5CC mov.l @(disp,pc),Rn */
	IF(0x0C06F5CEu); { u32 t_ = r9; PR = 0x0C06F5D2u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06F5D2u); }  /* 0C06F5CE jsr @Rn */
L_0C06F5D2: BLKS(0x0C06F5D2u);
	r4 = 0xC1749B4u; UPD(0x0C06F5D4u, 1);  /* 0C06F5D2 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C06F5D4 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C06F5D8u, 2);  /* 0C06F5D6 mov.l @(disp,pc),Rn */
	IF(0x0C06F5D8u); { u32 t_ = r9; PR = 0x0C06F5DCu; r6 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06F5DCu); }  /* 0C06F5D8 jsr @Rn */
L_0C06F5DC: BLKS(0x0C06F5DCu);
	r0 = r13;  /* 0C06F5DC mov Rm,Rn */
	r0 &= 0x3u;  /* 0C06F5DE and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06F5E0 tst Rm,Rn */
	{ u32 c_ = !T; r9 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F5EAu, 6); goto L_0C06F5EA; } goto L_0C06F5E6; }  /* 0C06F5E2 bf/s */
L_0C06F5E6: BLKS(0x0C06F5E6u);
	{ r9 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C06FBD0u, 4); goto L_0C06FBD0; }  /* 0C06F5E6 bra */
L_0C06F5EA: BLKS(0x0C06F5EAu);
	r9 = r13;  /* 0C06F5EA mov Rm,Rn */
	r9 += 0x4u;  /* 0C06F5EC add #imm,Rn */
	UPD(0x0C06F5EEu, 2);
L_0C06F5EE: BLKS(0x0C06F5EEu);
	r11 = 0xC0626E0u; UPD(0x0C06F5F0u, 1);  /* 0C06F5EE mov.l @(disp,pc),Rn */
	r8 = r10;  /* 0C06F5F0 mov Rm,Rn */
	r12 = 0x0u;  /* 0C06F5F2 mov #imm,Rn */
	r8 += r8;  /* 0C06F5F4 add Rm,Rn */
	IF(0x0C06F5F6u); ;  /* 0C06F5F6 nop */
	UPD(0x0C06F5F8u, 4);
L_0C06F5F8: BLKS(0x0C06F5F8u);
	r2 = 0xC3BC3CCu; UPD(0x0C06F5FAu, 1);  /* 0C06F5F8 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06F5FA mov Rm,Rn */
	IF(0x0C06F5FCu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06F5FEu, 2);  /* 0C06F5FC mov.w @(r0,Rm),Rn */
	r0 = 0x400u; UPD(0x0C06F600u, 1);  /* 0C06F5FE mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)r3;  /* 0C06F600 exts.w Rm,Rn */
	T = r2 == r0;  /* 0C06F602 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C06F60Cu, 5); goto L_0C06F60C; }  /* 0C06F604 bf */
L_0C06F606: BLKS(0x0C06F606u);
	r6 = r12;  /* 0C06F606 mov Rm,Rn */
	{ r6 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C06FBC0u, 4); goto L_0C06FBC0; }  /* 0C06F608 bra */
L_0C06F60C: BLKS(0x0C06F60Cu);
	r4 = 0x401u; UPD(0x0C06F60Eu, 1);  /* 0C06F60C mov.w @(disp,pc),Rn */
	T = r2 == r4;  /* 0C06F60E cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C06F612u); T = (s32)r2 >= 0; /* slot cmp/pz Rn */ if (c_) { UPD(0x0C06F618u, 4); goto L_0C06F618; } goto L_0C06F614; }  /* 0C06F610 bf/s */
L_0C06F614: BLKS(0x0C06F614u);
	{ r6 = r12; /* slot mov Rm,Rn */ UPD(0x0C06FBB0u, 4); goto L_0C06FBB0; }  /* 0C06F614 bra */
L_0C06F618: BLKS(0x0C06F618u);
	{ u32 c_ = T; r6 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F620u, 3); goto L_0C06F620; } goto L_0C06F61C; }  /* 0C06F618 bt/s */
L_0C06F61C: BLKS(0x0C06F61Cu);
	{ r6 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C06FBA0u, 4); goto L_0C06FBA0; }  /* 0C06F61C bra */
L_0C06F620: BLKS(0x0C06F620u);
	r5 = 0x4000u; UPD(0x0C06F622u, 1);  /* 0C06F620 mov.w @(disp,pc),Rn */
	T = (r3 & r5) == 0;  /* 0C06F622 tst Rm,Rn */
	{ u32 c_ = !T; r6 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F62Cu, 4); goto L_0C06F62C; } goto L_0C06F628; }  /* 0C06F624 bf/s */
L_0C06F628: BLKS(0x0C06F628u);
	{ r6 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C06FB90u, 4); goto L_0C06FB90; }  /* 0C06F628 bra */
L_0C06F62C: BLKS(0x0C06F62Cu);
	r6 = r12;  /* 0C06F62C mov Rm,Rn */
	r4 = 0xC1749DCu; UPD(0x0C06F630u, 2);  /* 0C06F62E mov.l @(disp,pc),Rn */
	r6 += 0x3u;  /* 0C06F630 add #imm,Rn */
	r7 = 0x40C04000u; UPD(0x0C06F634u, 2);  /* 0C06F632 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C06F634 mov Rm,Rn */
	UPD(0x0C06F636u, 1);
L_0C06F636: BLKS(0x0C06F636u);
	r0 = 0xC0626E0u; UPD(0x0C06F638u, 1);  /* 0C06F636 mov.l @(disp,pc),Rn */
	IF(0x0C06F638u); { u32 t_ = r0; PR = 0x0C06F63Cu; IF(0x0C06F63Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06F63Cu); }  /* 0C06F638 jsr @Rn */
L_0C06F63C: BLKS(0x0C06F63Cu);
	r7 = r12;  /* 0C06F63C mov Rm,Rn */
	UPD(0x0C06F63Eu, 1);
L_0C06F63E: BLKS(0x0C06F63Eu);
	r7 += 0x1u;  /* 0C06F63E add #imm,Rn */
	r12 = (u32)(s32)(s16)r7;  /* 0C06F640 exts.w Rm,Rn */
	r6 = 0xFu;  /* 0C06F642 mov #imm,Rn */
	T = (s32)r12 > (s32)r6;  /* 0C06F644 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06F5F8u, 7); goto L_0C06F5F8; } goto L_0C06F64A; }  /* 0C06F646 bf/s */
L_0C06F64A: BLKS(0x0C06F64Au);
	r11 = r13;  /* 0C06F64A mov Rm,Rn */
	r11 += 0x1u;  /* 0C06F64C add #imm,Rn */
	r13 = (u32)(s32)(s16)r11;  /* 0C06F64E exts.w Rm,Rn */
	r9 = 0x1Fu;  /* 0C06F650 mov #imm,Rn */
	T = (s32)r13 > (s32)r9;  /* 0C06F652 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06F5DCu, 9); goto L_0C06F5DC; } goto L_0C06F658; }  /* 0C06F654 bf/s */
L_0C06F658: BLKS(0x0C06F658u);
	r12 = 0xC238029u; UPD(0x0C06F65Au, 2);  /* 0C06F658 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s8)R8(r12); UPD(0x0C06F65Cu, 1);  /* 0C06F65A mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C06F65C tst Rm,Rn */
	if (T) { UPD(0x0C06F6C0u, 4); goto L_0C06F6C0; }  /* 0C06F65E bt */
L_0C06F660: BLKS(0x0C06F660u);
	r13 = 0xC2B039Cu; UPD(0x0C06F662u, 1);  /* 0C06F660 mov.l @(disp,pc),Rn */
	r0 = R32(r13); UPD(0x0C06F664u, 1);  /* 0C06F662 mov.l @Rm,Rn */
	r0 &= 0x4u;  /* 0C06F664 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06F666 tst Rm,Rn */
	if (T) { UPD(0x0C06F66Eu, 5); goto L_0C06F66E; }  /* 0C06F668 bt */
L_0C06F66A: BLKS(0x0C06F66Au);
	{ IF(0x0C06F66Cu); ; /* slot nop */ UPD(0x0C06FB70u, 3); goto L_0C06FB70; }  /* 0C06F66A bra */
L_0C06F66E: BLKS(0x0C06F66Eu);
	r3 = 0xC297838u; UPD(0x0C06F670u, 1);  /* 0C06F66E mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C06F672u, 1);  /* 0C06F670 mov.w @Rm,Rn */
	r0 = r1;  /* 0C06F672 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C06F674 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06F676 tst Rm,Rn */
	{ u32 c_ = T; r0 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F688u, 6); goto L_0C06F688; } goto L_0C06F67C; }  /* 0C06F678 bt/s */
L_0C06F67C: BLKS(0x0C06F67Cu);
	r4 = 0xC3C402Cu; UPD(0x0C06F67Eu, 2);  /* 0C06F67C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C06F680u, 1);  /* 0C06F67E mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C06F680 add #imm,Rn */
	r0 &= 0x1Fu;  /* 0C06F682 and #imm,r0 */
	W8(r4, r0); UPD(0x0C06F686u, 3);  /* 0C06F684 mov.b Rm,@Rn */
	r0 = r1;  /* 0C06F686 mov Rm,Rn */
	UPD(0x0C06F688u, 1);
L_0C06F688: BLKS(0x0C06F688u);
	r0 &= 0x2u;  /* 0C06F688 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06F68A tst Rm,Rn */
	{ u32 c_ = T; r0 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F69Cu, 5); goto L_0C06F69C; } goto L_0C06F690; }  /* 0C06F68C bt/s */
L_0C06F690: BLKS(0x0C06F690u);
	r5 = 0xC3C402Cu; UPD(0x0C06F692u, 2);  /* 0C06F690 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C06F694u, 1);  /* 0C06F692 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C06F694 add #imm,Rn */
	r0 &= 0x1Fu;  /* 0C06F696 and #imm,r0 */
	W8(r5, r0); UPD(0x0C06F69Au, 3);  /* 0C06F698 mov.b Rm,@Rn */
	r0 = r1;  /* 0C06F69A mov Rm,Rn */
	UPD(0x0C06F69Cu, 1);
L_0C06F69C: BLKS(0x0C06F69Cu);
	r0 &= 0x8u;  /* 0C06F69C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06F69E tst Rm,Rn */
	{ u32 c_ = T; r0 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F6B0u, 5); goto L_0C06F6B0; } goto L_0C06F6A4; }  /* 0C06F6A0 bt/s */
L_0C06F6A4: BLKS(0x0C06F6A4u);
	r6 = 0xC239458u; UPD(0x0C06F6A6u, 2);  /* 0C06F6A4 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C06F6A8u, 1);  /* 0C06F6A6 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C06F6A8 add #imm,Rn */
	r0 &= 0xFu;  /* 0C06F6AA and #imm,r0 */
	W8(r6, r0); UPD(0x0C06F6AEu, 3);  /* 0C06F6AC mov.b Rm,@Rn */
	r0 = r1;  /* 0C06F6AE mov Rm,Rn */
	UPD(0x0C06F6B0u, 1);
L_0C06F6B0: BLKS(0x0C06F6B0u);
	r0 &= 0x4u;  /* 0C06F6B0 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06F6B2 tst Rm,Rn */
	if (T) { UPD(0x0C06F6C0u, 5); goto L_0C06F6C0; }  /* 0C06F6B4 bt */
L_0C06F6B6: BLKS(0x0C06F6B6u);
	r7 = 0xC239458u; UPD(0x0C06F6B8u, 1);  /* 0C06F6B6 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C06F6BAu, 1);  /* 0C06F6B8 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C06F6BA add #imm,Rn */
	r0 &= 0xFu;  /* 0C06F6BC and #imm,r0 */
	W8(r7, r0); UPD(0x0C06F6C0u, 3);  /* 0C06F6BE mov.b Rm,@Rn */
L_0C06F6C0: BLKS(0x0C06F6C0u);
	r10 = 0xC0626E0u; UPD(0x0C06F6C2u, 1);  /* 0C06F6C0 mov.l @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C06F6C2 mov #imm,Rn */
	r12 = 0xC0404000u; UPD(0x0C06F6C6u, 2);  /* 0C06F6C4 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C06F6C6 mov #imm,Rn */
	r4 = 0xC174960u; UPD(0x0C06F6CAu, 2);  /* 0C06F6C8 mov.l @(disp,pc),Rn */
	r11 = 0xC069D00u; UPD(0x0C06F6CCu, 1);  /* 0C06F6CA mov.l @(disp,pc),Rn */
	IF(0x0C06F6CCu); { u32 t_ = r10; PR = 0x0C06F6D0u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06F6D0u); }  /* 0C06F6CC jsr @Rn */
L_0C06F6D0: BLKS(0x0C06F6D0u);
	r13 = 0xC0623C0u; UPD(0x0C06F6D2u, 1);  /* 0C06F6D0 mov.l @(disp,pc),Rn */
	r7 = r12;  /* 0C06F6D2 mov Rm,Rn */
	r4 = 0xC174968u; UPD(0x0C06F6D6u, 2);  /* 0C06F6D4 mov.l @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C06F6D6 mov #imm,Rn */
	IF(0x0C06F6D8u); { u32 t_ = r10; PR = 0x0C06F6DCu; r6 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06F6DCu); }  /* 0C06F6D8 jsr @Rn */
L_0C06F6DC: BLKS(0x0C06F6DCu);
	IF(0x0C06F6DCu); { u32 t_ = r11; PR = 0x0C06F6E0u; IF(0x0C06F6DEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C069D00, 0x0C069D00u, 0x0C06F6E0u); }  /* 0C06F6DC jsr @Rn */
L_0C06F6E0: BLKS(0x0C06F6E0u);
	r4 = r0;  /* 0C06F6E0 mov Rm,Rn */
	r5 = 0x24u;  /* 0C06F6E2 mov #imm,Rn */
	IF(0x0C06F6E4u); { u32 t_ = r13; PR = 0x0C06F6E8u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C06F6E8u); }  /* 0C06F6E4 jsr @Rn */
L_0C06F6E8: BLKS(0x0C06F6E8u);
	r4 = 0x200u; UPD(0x0C06F6EAu, 1);  /* 0C06F6E8 mov.w @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C06F6EA mov #imm,Rn */
	r11 = 0x4040C000u; UPD(0x0C06F6EEu, 2);  /* 0C06F6EC mov.l @(disp,pc),Rn */
	IF(0x0C06F6EEu); { u32 t_ = r13; PR = 0x0C06F6F2u; r6 = 0xFu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C06F6F2u); }  /* 0C06F6EE jsr @Rn */
L_0C06F6F2: BLKS(0x0C06F6F2u);
	r4 = 0xC17496Cu; UPD(0x0C06F6F4u, 1);  /* 0C06F6F2 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C06F6F4 mov Rm,Rn */
	r5 = 0x24u;  /* 0C06F6F6 mov #imm,Rn */
	IF(0x0C06F6F8u); { u32 t_ = r10; PR = 0x0C06F6FCu; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06F6FCu); }  /* 0C06F6F8 jsr @Rn */
L_0C06F6FC: BLKS(0x0C06F6FCu);
	r7 = r11;  /* 0C06F6FC mov Rm,Rn */
	r4 = 0xC174970u; UPD(0x0C06F700u, 2);  /* 0C06F6FE mov.l @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C06F700 mov #imm,Rn */
	IF(0x0C06F702u); { u32 t_ = r10; PR = 0x0C06F706u; r6 = 0x19u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06F706u); }  /* 0C06F702 jsr @Rn */
L_0C06F706: BLKS(0x0C06F706u);
	r0 = 0xC2B1A34u; UPD(0x0C06F708u, 1);  /* 0C06F706 mov.l @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C06F708 mov #imm,Rn */
	r4 = R32(r0); UPD(0x0C06F70Cu, 2);  /* 0C06F70A mov.l @Rm,Rn */
	r8 = 0xC2975E8u; UPD(0x0C06F70Eu, 1);  /* 0C06F70C mov.l @(disp,pc),Rn */
	IF(0x0C06F70Eu); { u32 t_ = r13; PR = 0x0C06F712u; r6 = 0x15u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C06F712u); }  /* 0C06F70E jsr @Rn */
L_0C06F712: BLKS(0x0C06F712u);
	r12 = 0xC062300u; UPD(0x0C06F714u, 1);  /* 0C06F712 mov.l @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C06F714 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C06F718u, 2);  /* 0C06F716 mov.l @Rm,Rn */
	r9 = 0xC22E24Cu; UPD(0x0C06F71Au, 1);  /* 0C06F718 mov.l @(disp,pc),Rn */
	IF(0x0C06F71Au); { u32 t_ = r13; PR = 0x0C06F71Eu; r6 = 0x1Au; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C06F71Eu); }  /* 0C06F71A jsr @Rn */
L_0C06F71E: BLKS(0x0C06F71Eu);
	r4 = R32(r9); UPD(0x0C06F720u, 1);  /* 0C06F71E mov.l @Rm,Rn */
	r5 = 0x23u;  /* 0C06F720 mov #imm,Rn */
	IF(0x0C06F722u); { u32 t_ = r12; PR = 0x0C06F726u; r6 = 0x16u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062300, 0x0C062300u, 0x0C06F726u); }  /* 0C06F722 jsr @Rn */
L_0C06F726: BLKS(0x0C06F726u);
	r7 = 0xC3C43C0u; UPD(0x0C06F728u, 1);  /* 0C06F726 mov.l @(disp,pc),Rn */
	r5 = 0x22u;  /* 0C06F728 mov #imm,Rn */
	r4 = R32(r7); UPD(0x0C06F72Cu, 2);  /* 0C06F72A mov.l @Rm,Rn */
	IF(0x0C06F72Cu); { u32 t_ = r12; PR = 0x0C06F730u; r6 = 0x16u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062300, 0x0C062300u, 0x0C06F730u); }  /* 0C06F72C jsr @Rn */
L_0C06F730: BLKS(0x0C06F730u);
	r4 = 0xC174974u; UPD(0x0C06F732u, 1);  /* 0C06F730 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C06F732 mov Rm,Rn */
	r5 = 0x21u;  /* 0C06F734 mov #imm,Rn */
	IF(0x0C06F736u); { u32 t_ = r10; PR = 0x0C06F73Au; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06F73Au); }  /* 0C06F736 jsr @Rn */
L_0C06F73A: BLKS(0x0C06F73Au);
	r4 = 0xC17497Cu; UPD(0x0C06F73Cu, 1);  /* 0C06F73A mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C06F73C mov Rm,Rn */
	r5 = 0x20u;  /* 0C06F73E mov #imm,Rn */
	IF(0x0C06F740u); { u32 t_ = r10; PR = 0x0C06F744u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06F744u); }  /* 0C06F740 jsr @Rn */
L_0C06F744: BLKS(0x0C06F744u);
	r4 = 0xC174984u; UPD(0x0C06F746u, 1);  /* 0C06F744 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C06F746 mov Rm,Rn */
	r5 = 0x1Fu;  /* 0C06F748 mov #imm,Rn */
	IF(0x0C06F74Au); { u32 t_ = r10; PR = 0x0C06F74Eu; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06F74Eu); }  /* 0C06F74A jsr @Rn */
L_0C06F74E: BLKS(0x0C06F74Eu);
	r4 = 0xC17498Cu; UPD(0x0C06F750u, 1);  /* 0C06F74E mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C06F750 mov Rm,Rn */
	r5 = 0x1Eu;  /* 0C06F752 mov #imm,Rn */
	IF(0x0C06F754u); { u32 t_ = r10; PR = 0x0C06F758u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06F758u); }  /* 0C06F754 jsr @Rn */
L_0C06F758: BLKS(0x0C06F758u);
	r7 = r11;  /* 0C06F758 mov Rm,Rn */
	r4 = 0xC1749D4u; UPD(0x0C06F75Cu, 2);  /* 0C06F75A mov.l @(disp,pc),Rn */
	r5 = 0x1Du;  /* 0C06F75C mov #imm,Rn */
	IF(0x0C06F75Eu); { u32 t_ = r10; PR = 0x0C06F762u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06F762u); }  /* 0C06F75E jsr @Rn */
L_0C06F762: BLKS(0x0C06F762u);
	r6 = 0xC28F610u; UPD(0x0C06F764u, 1);  /* 0C06F762 mov.l @(disp,pc),Rn */
	r5 = 0x21u;  /* 0C06F764 mov #imm,Rn */
	r9 = 0xC062490u; UPD(0x0C06F768u, 2);  /* 0C06F766 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r6); UPD(0x0C06F76Au, 1);  /* 0C06F768 mov.b @Rm,Rn */
	IF(0x0C06F76Au); { u32 t_ = r9; PR = 0x0C06F76Eu; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06F76Eu); }  /* 0C06F76A jsr @Rn */
L_0C06F76E: BLKS(0x0C06F76Eu);
	r5 = 0xC22E014u; UPD(0x0C06F770u, 1);  /* 0C06F76E mov.l @(disp,pc),Rn */
	r6 = 0x1Bu;  /* 0C06F770 mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C06F774u, 2);  /* 0C06F772 mov.b @Rm,Rn */
	IF(0x0C06F774u); { u32 t_ = r9; PR = 0x0C06F778u; r5 = 0x21u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06F778u); }  /* 0C06F774 jsr @Rn */
L_0C06F778: BLKS(0x0C06F778u);
	r4 = 0xC2B037Bu; UPD(0x0C06F77Au, 1);  /* 0C06F778 mov.l @(disp,pc),Rn */
	r5 = 0x20u;  /* 0C06F77A mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C06F77Eu, 2);  /* 0C06F77C mov.b @Rm,Rn */
	r6 = 0x18u;  /* 0C06F77E mov #imm,Rn */
	IF(0x0C06F780u); { u32 t_ = r9; PR = 0x0C06F784u; r4 = r3 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06F784u); }  /* 0C06F780 jsr @Rn */
L_0C06F784: BLKS(0x0C06F784u);
	r2 = 0xC2B036Cu; UPD(0x0C06F786u, 1);  /* 0C06F784 mov.l @(disp,pc),Rn */
	r5 = 0x20u;  /* 0C06F786 mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06F78Au, 2);  /* 0C06F788 mov.b @Rm,Rn */
	r6 = 0x1Bu;  /* 0C06F78A mov #imm,Rn */
	r8 = 0xC2A6D98u; UPD(0x0C06F78Eu, 2);  /* 0C06F78C mov.l @(disp,pc),Rn */
	IF(0x0C06F78Eu); { u32 t_ = r9; PR = 0x0C06F792u; r4 = r0 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06F792u); }  /* 0C06F78E jsr @Rn */
L_0C06F792: BLKS(0x0C06F792u);
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F794u, 1);  /* 0C06F792 mov.w @Rm,Rn */
	r5 = 0x1Fu;  /* 0C06F794 mov #imm,Rn */
	r12 = 0xC3C53DEu; UPD(0x0C06F798u, 2);  /* 0C06F796 mov.l @(disp,pc),Rn */
	r4 = r13 & 0xFFFF;  /* 0C06F798 extu.w Rm,Rn */
	IF(0x0C06F79Au); { u32 t_ = r9; PR = 0x0C06F79Eu; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06F79Eu); }  /* 0C06F79A jsr @Rn */
L_0C06F79E: BLKS(0x0C06F79Eu);
	r11 = (u32)(s32)(s16)R16(r12); UPD(0x0C06F7A0u, 1);  /* 0C06F79E mov.w @Rm,Rn */
	r5 = 0x1Eu;  /* 0C06F7A0 mov #imm,Rn */
	r4 = r11 & 0xFFFF;  /* 0C06F7A2 extu.w Rm,Rn */
	{ r6 = 0x18u; /* slot mov #imm,Rn */ UPD(0x0C06F850u, 5); goto L_0C06F850; }  /* 0C06F7A4 bra */
L_0C06F850: BLKS(0x0C06F850u);
	IF(0x0C06F850u); { u32 t_ = r9; PR = 0x0C06F854u; r8 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06F854u); }  /* 0C06F850 jsr @Rn */
L_0C06F854: BLKS(0x0C06F854u);
	r9 = 0xC1749E0u; UPD(0x0C06F856u, 1);  /* 0C06F854 mov.l @(disp,pc),Rn */
	IF(0x0C06F856u); ;  /* 0C06F856 nop */
	UPD(0x0C06F858u, 1);
L_0C06F858: BLKS(0x0C06F858u);
	r5 = 0xC3C86DCu; UPD(0x0C06F85Au, 1);  /* 0C06F858 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C06F85A mov Rm,Rn */
	IF(0x0C06F85Cu); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06F85Eu, 2);  /* 0C06F85C mov.b @(r0,Rm),Rn */
	r5 = 0x1Du;  /* 0C06F85E mov #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C06F860 extu.b Rm,Rn */
	r13 = 0xC1749E8u; UPD(0x0C06F864u, 3);  /* 0C06F862 mov.l @(disp,pc),Rn */
	IF(0x0C06F864u); r0 <<= 2;  /* 0C06F864 shll2 Rn */
	r8 += 0x16u;  /* 0C06F866 add #imm,Rn */
	r6 = r8;  /* 0C06F868 mov Rm,Rn */
	IF(0x0C06F86Au); r4 = R32(r0 + r9); UPD(0x0C06F86Cu, 4);  /* 0C06F86A mov.l @(r0,Rm),Rn */
	IF(0x0C06F86Cu); { u32 t_ = r10; PR = 0x0C06F870u; IF(0x0C06F86Eu); r7 = R32(r0 + r13); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06F870u); }  /* 0C06F86C jsr @Rn */
L_0C06F870: BLKS(0x0C06F870u);
	r3 = r8;  /* 0C06F870 mov Rm,Rn */
	r3 += 0xFFFFFFEBu;  /* 0C06F872 add #imm,Rn */
	r8 = (u32)(s32)(s16)r3;  /* 0C06F874 exts.w Rm,Rn */
	r2 = 0x7u;  /* 0C06F876 mov #imm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C06F878 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r5 = 0x1Cu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06F858u, 8); goto L_0C06F858; } goto L_0C06F87E; }  /* 0C06F87A bf/s */
L_0C06F87E: BLKS(0x0C06F87Eu);
	r11 = 0xC29E93Cu; UPD(0x0C06F880u, 2);  /* 0C06F87E mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r11); UPD(0x0C06F882u, 1);  /* 0C06F880 mov.w @Rm,Rn */
	r6 = 0x13u;  /* 0C06F882 mov #imm,Rn */
	r11 = 0xC0623C0u; UPD(0x0C06F886u, 2);  /* 0C06F884 mov.l @(disp,pc),Rn */
	r8 = 0xC22E258u; UPD(0x0C06F888u, 1);  /* 0C06F886 mov.l @(disp,pc),Rn */
	IF(0x0C06F888u); { u32 t_ = r11; PR = 0x0C06F88Cu; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C06F88Cu); }  /* 0C06F888 jsr @Rn */
L_0C06F88C: BLKS(0x0C06F88Cu);
	r10 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F88Eu, 1);  /* 0C06F88C mov.w @Rm,Rn */
	r5 = 0x1Cu;  /* 0C06F88E mov #imm,Rn */
	r4 = r10 & 0xFFFF;  /* 0C06F890 extu.w Rm,Rn */
	r10 = 0xC062490u; UPD(0x0C06F894u, 3);  /* 0C06F892 mov.l @(disp,pc),Rn */
	r12 = 0xC0626E0u; UPD(0x0C06F896u, 1);  /* 0C06F894 mov.l @(disp,pc),Rn */
	IF(0x0C06F896u); { u32 t_ = r10; PR = 0x0C06F89Au; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06F89Au); }  /* 0C06F896 jsr @Rn */
L_0C06F89A: BLKS(0x0C06F89Au);
	r7 = 0xC3C5438u; UPD(0x0C06F89Cu, 1);  /* 0C06F89A mov.l @(disp,pc),Rn */
	r5 = 0x1Cu;  /* 0C06F89C mov #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C06F8A0u, 2);  /* 0C06F89E mov.w @Rm,Rn */
	r13 = 0x0u;  /* 0C06F8A0 mov #imm,Rn */
	r4 = r6 & 0xFFFF;  /* 0C06F8A2 extu.w Rm,Rn */
	r9 = 0x4040C000u; UPD(0x0C06F8A6u, 3);  /* 0C06F8A4 mov.l @(disp,pc),Rn */
	IF(0x0C06F8A6u); { u32 t_ = r10; PR = 0x0C06F8AAu; r6 = 0x1Bu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06F8AAu); }  /* 0C06F8A6 jsr @Rn */
L_0C06F8AA: BLKS(0x0C06F8AAu);
	r4 = 0xC174994u; UPD(0x0C06F8ACu, 1);  /* 0C06F8AA mov.l @(disp,pc),Rn */
	r5 = 0x1Bu;  /* 0C06F8AC mov #imm,Rn */
	r6 = 0x13u;  /* 0C06F8AE mov #imm,Rn */
	IF(0x0C06F8B0u); { u32 t_ = r12; PR = 0x0C06F8B4u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06F8B4u); }  /* 0C06F8B0 jsr @Rn */
L_0C06F8B4: BLKS(0x0C06F8B4u);
	r4 = 0xC1749A0u; UPD(0x0C06F8B6u, 1);  /* 0C06F8B4 mov.l @(disp,pc),Rn */
	r5 = 0x13u;  /* 0C06F8B6 mov #imm,Rn */
	r6 = 0x13u;  /* 0C06F8B8 mov #imm,Rn */
	IF(0x0C06F8BAu); { u32 t_ = r12; PR = 0x0C06F8BEu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06F8BEu); }  /* 0C06F8BA jsr @Rn */
L_0C06F8BE: BLKS(0x0C06F8BEu);
	r12 = 0x0u;  /* 0C06F8BE mov #imm,Rn */
	UPD(0x0C06F8C0u, 1);
L_0C06F8C0: BLKS(0x0C06F8C0u);
	r2 = 0x100u; UPD(0x0C06F8C2u, 1);  /* 0C06F8C0 mov.w @(disp,pc),Rn */
	T = r12 == r2;  /* 0C06F8C2 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r5 = 0u - r13; /* slot neg Rm,Rn */ if (c_) { UPD(0x0C06F8CCu, 4); goto L_0C06F8CC; } goto L_0C06F8C8; }  /* 0C06F8C4 bf/s */
L_0C06F8C8: BLKS(0x0C06F8C8u);
	{ r5 += 0x1Au; /* slot add #imm,Rn */ UPD(0x0C06FB60u, 4); goto L_0C06FB60; }  /* 0C06F8C8 bra */
L_0C06F8CC: BLKS(0x0C06F8CCu);
	r9 = r12;  /* 0C06F8CC mov Rm,Rn */
	r4 = 0xC2B016Cu; UPD(0x0C06F8D0u, 2);  /* 0C06F8CE mov.l @(disp,pc),Rn */
	r9 += r9;  /* 0C06F8D0 add Rm,Rn */
	r0 = r9;  /* 0C06F8D2 mov Rm,Rn */
	IF(0x0C06F8D4u); r6 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C06F8D6u, 3);  /* 0C06F8D4 mov.w @(r0,Rm),Rn */
	r5 = 0x400u; UPD(0x0C06F8D8u, 1);  /* 0C06F8D6 mov.w @(disp,pc),Rn */
	r4 = r6 & 0xFFFF;  /* 0C06F8D8 extu.w Rm,Rn */
	T = r4 == r5;  /* 0C06F8DA cmp/eq Rm,Rn */
	{ u32 c_ = T; r8 = 0u - r13; /* slot neg Rm,Rn */ if (c_) { UPD(0x0C06F918u, 5); goto L_0C06F918; } goto L_0C06F8E0; }  /* 0C06F8DC bt/s */
L_0C06F8E0: BLKS(0x0C06F8E0u);
	r8 += 0x1Au;  /* 0C06F8E0 add #imm,Rn */
	r5 = r8;  /* 0C06F8E2 mov Rm,Rn */
	IF(0x0C06F8E4u); { u32 t_ = r11; PR = 0x0C06F8E8u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C06F8E8u); }  /* 0C06F8E4 jsr @Rn */
L_0C06F8E8: BLKS(0x0C06F8E8u);
	r4 = 0xC2289F4u; UPD(0x0C06F8EAu, 1);  /* 0C06F8E8 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06F8EA mov Rm,Rn */
	IF(0x0C06F8ECu); r7 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C06F8EEu, 2);  /* 0C06F8EC mov.w @(r0,Rm),Rn */
	r5 = r8;  /* 0C06F8EE mov Rm,Rn */
	r4 = r7 & 0xFFFF;  /* 0C06F8F0 extu.w Rm,Rn */
	IF(0x0C06F8F2u); { u32 t_ = r10; PR = 0x0C06F8F6u; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06F8F6u); }  /* 0C06F8F2 jsr @Rn */
L_0C06F8F6: BLKS(0x0C06F8F6u);
	r6 = 0xC23C8A0u; UPD(0x0C06F8F8u, 1);  /* 0C06F8F6 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06F8F8 mov Rm,Rn */
	IF(0x0C06F8FAu); r5 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C06F8FCu, 2);  /* 0C06F8FA mov.w @(r0,Rm),Rn */
	r4 = r5 & 0xFFFF;  /* 0C06F8FC extu.w Rm,Rn */
	r5 = r8;  /* 0C06F8FE mov Rm,Rn */
	IF(0x0C06F900u); { u32 t_ = r10; PR = 0x0C06F904u; r6 = 0x1Au; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06F904u); }  /* 0C06F900 jsr @Rn */
L_0C06F904: BLKS(0x0C06F904u);
	r3 = 0xC2287D8u; UPD(0x0C06F906u, 1);  /* 0C06F904 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06F906 mov Rm,Rn */
	IF(0x0C06F908u); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C06F90Au, 2);  /* 0C06F908 mov.w @(r0,Rm),Rn */
	r5 = r8;  /* 0C06F90A mov Rm,Rn */
	r4 = r2 & 0xFFFF;  /* 0C06F90C extu.w Rm,Rn */
	IF(0x0C06F90Eu); { u32 t_ = r10; PR = 0x0C06F912u; r6 = 0x1Cu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06F912u); }  /* 0C06F90E jsr @Rn */
L_0C06F912: BLKS(0x0C06F912u);
	r7 = r13;  /* 0C06F912 mov Rm,Rn */
	r7 += 0x1u;  /* 0C06F914 add #imm,Rn */
	r13 = (u32)(s32)(s16)r7;  /* 0C06F916 exts.w Rm,Rn */
	UPD(0x0C06F918u, 3);
L_0C06F918: BLKS(0x0C06F918u);
	r8 = r12;  /* 0C06F918 mov Rm,Rn */
	r8 += 0x1u;  /* 0C06F91A add #imm,Rn */
	r12 = (u32)(s32)(s16)r8;  /* 0C06F91C exts.w Rm,Rn */
	UPD(0x0C06F91Eu, 3);
L_0C06F91E: BLKS(0x0C06F91Eu);
	r0 = 0x6u;  /* 0C06F91E mov #imm,Rn */
	T = (s32)r13 > (s32)r0;  /* 0C06F920 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06F8C0u, 5); goto L_0C06F8C0; }  /* 0C06F922 bf */
L_0C06F924: BLKS(0x0C06F924u);
	r13 = 0x0u;  /* 0C06F924 mov #imm,Rn */
	r10 = 0xC062490u; UPD(0x0C06F928u, 2);  /* 0C06F926 mov.l @(disp,pc),Rn */
	r11 = 0xC0623C0u; UPD(0x0C06F92Au, 1);  /* 0C06F928 mov.l @(disp,pc),Rn */
	r12 = r13;  /* 0C06F92A mov Rm,Rn */
	UPD(0x0C06F92Cu, 1);
L_0C06F92C: BLKS(0x0C06F92Cu);
	r9 = 0x100u; UPD(0x0C06F92Eu, 1);  /* 0C06F92C mov.w @(disp,pc),Rn */
	T = r12 == r9;  /* 0C06F92E cmp/eq Rm,Rn */
	{ u32 c_ = !T; r5 = 0u - r13; /* slot neg Rm,Rn */ if (c_) { UPD(0x0C06F938u, 4); goto L_0C06F938; } goto L_0C06F934; }  /* 0C06F930 bf/s */
L_0C06F934: BLKS(0x0C06F934u);
	{ r5 += 0x12u; /* slot add #imm,Rn */ UPD(0x0C06FB50u, 4); goto L_0C06FB50; }  /* 0C06F934 bra */
L_0C06F938: BLKS(0x0C06F938u);
	r9 = r12;  /* 0C06F938 mov Rm,Rn */
	r9 += r9;  /* 0C06F93A add Rm,Rn */
	r7 = 0xC22E04Cu; UPD(0x0C06F93Eu, 3);  /* 0C06F93C mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06F93E mov Rm,Rn */
	IF(0x0C06F940u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C06F942u, 2);  /* 0C06F940 mov.w @(r0,Rm),Rn */
	r5 = 0x400u; UPD(0x0C06F944u, 1);  /* 0C06F942 mov.w @(disp,pc),Rn */
	r4 = r6 & 0xFFFF;  /* 0C06F944 extu.w Rm,Rn */
	T = r4 == r5;  /* 0C06F946 cmp/eq Rm,Rn */
	{ u32 c_ = T; r8 = 0u - r13; /* slot neg Rm,Rn */ if (c_) { UPD(0x0C06F984u, 5); goto L_0C06F984; } goto L_0C06F94C; }  /* 0C06F948 bt/s */
L_0C06F94C: BLKS(0x0C06F94Cu);
	r8 += 0x12u;  /* 0C06F94C add #imm,Rn */
	r5 = r8;  /* 0C06F94E mov Rm,Rn */
	IF(0x0C06F950u); { u32 t_ = r11; PR = 0x0C06F954u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C06F954u); }  /* 0C06F950 jsr @Rn */
L_0C06F954: BLKS(0x0C06F954u);
	r7 = 0xC29D73Cu; UPD(0x0C06F956u, 1);  /* 0C06F954 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06F956 mov Rm,Rn */
	IF(0x0C06F958u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C06F95Au, 2);  /* 0C06F958 mov.w @(r0,Rm),Rn */
	r5 = r8;  /* 0C06F95A mov Rm,Rn */
	r4 = r6 & 0xFFFF;  /* 0C06F95C extu.w Rm,Rn */
	IF(0x0C06F95Eu); { u32 t_ = r10; PR = 0x0C06F962u; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06F962u); }  /* 0C06F95E jsr @Rn */
L_0C06F962: BLKS(0x0C06F962u);
	r5 = 0xC23DEA6u; UPD(0x0C06F964u, 1);  /* 0C06F962 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06F964 mov Rm,Rn */
	IF(0x0C06F966u); r3 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C06F968u, 2);  /* 0C06F966 mov.w @(r0,Rm),Rn */
	r6 = 0x1Au;  /* 0C06F968 mov #imm,Rn */
	r4 = r3 & 0xFFFF;  /* 0C06F96A extu.w Rm,Rn */
	IF(0x0C06F96Cu); { u32 t_ = r10; PR = 0x0C06F970u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06F970u); }  /* 0C06F96C jsr @Rn */
L_0C06F970: BLKS(0x0C06F970u);
	r2 = 0xC3C848Eu; UPD(0x0C06F972u, 1);  /* 0C06F970 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06F972 mov Rm,Rn */
	IF(0x0C06F974u); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06F976u, 2);  /* 0C06F974 mov.w @(r0,Rm),Rn */
	r5 = r8;  /* 0C06F976 mov Rm,Rn */
	r4 = r9 & 0xFFFF;  /* 0C06F978 extu.w Rm,Rn */
	IF(0x0C06F97Au); { u32 t_ = r10; PR = 0x0C06F97Eu; r6 = 0x1Cu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06F97Eu); }  /* 0C06F97A jsr @Rn */
L_0C06F97E: BLKS(0x0C06F97Eu);
	r4 = r13;  /* 0C06F97E mov Rm,Rn */
	r4 += 0x1u;  /* 0C06F980 add #imm,Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C06F982 exts.w Rm,Rn */
	UPD(0x0C06F984u, 3);
L_0C06F984: BLKS(0x0C06F984u);
	r8 = r12;  /* 0C06F984 mov Rm,Rn */
	r8 += 0x1u;  /* 0C06F986 add #imm,Rn */
	r12 = (u32)(s32)(s16)r8;  /* 0C06F988 exts.w Rm,Rn */
	UPD(0x0C06F98Au, 3);
L_0C06F98A: BLKS(0x0C06F98Au);
	r0 = 0x6u;  /* 0C06F98A mov #imm,Rn */
	T = (s32)r13 > (s32)r0;  /* 0C06F98C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06F92Cu, 5); goto L_0C06F92C; }  /* 0C06F98E bf */
L_0C06F990: BLKS(0x0C06F990u);
	r13 = 0x0u;  /* 0C06F990 mov #imm,Rn */
	r12 = 0xC0626E0u; UPD(0x0C06F994u, 2);  /* 0C06F992 mov.l @(disp,pc),Rn */
	r10 = 0xC062490u; UPD(0x0C06F996u, 1);  /* 0C06F994 mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C06F996 mov #imm,Rn */
	r11 = 0xC0623C0u; UPD(0x0C06F99Au, 2);  /* 0C06F998 mov.l @(disp,pc),Rn */
	r4 = 0xC1749ACu; UPD(0x0C06F99Cu, 1);  /* 0C06F99A mov.l @(disp,pc),Rn */
	r7 = 0x4040C000u; UPD(0x0C06F99Eu, 1);  /* 0C06F99C mov.l @(disp,pc),Rn */
	IF(0x0C06F99Eu); { u32 t_ = r12; PR = 0x0C06F9A2u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06F9A2u); }  /* 0C06F99E jsr @Rn */
L_0C06F9A2: BLKS(0x0C06F9A2u);
	r12 = r13;  /* 0C06F9A2 mov Rm,Rn */
	UPD(0x0C06F9A4u, 1);
L_0C06F9A4: BLKS(0x0C06F9A4u);
	r4 = 0x100u; UPD(0x0C06F9A6u, 1);  /* 0C06F9A4 mov.w @(disp,pc),Rn */
	T = r12 == r4;  /* 0C06F9A6 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r9 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F9B0u, 4); goto L_0C06F9B0; } goto L_0C06F9AC; }  /* 0C06F9A8 bf/s */
L_0C06F9AC: BLKS(0x0C06F9ACu);
	{ r5 = 0u - r13; /* slot neg Rm,Rn */ UPD(0x0C06FB30u, 4); goto L_0C06FB30; }  /* 0C06F9AC bra */
L_0C06F9B0: BLKS(0x0C06F9B0u);
	r9 = r13;  /* 0C06F9B0 mov Rm,Rn */
	r9 += r9;  /* 0C06F9B2 add Rm,Rn */
	r6 = 0xC2A6D4Cu; UPD(0x0C06F9B6u, 3);  /* 0C06F9B4 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06F9B6 mov Rm,Rn */
	IF(0x0C06F9B8u); r5 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C06F9BAu, 2);  /* 0C06F9B8 mov.w @(r0,Rm),Rn */
	r3 = 0x400u; UPD(0x0C06F9BCu, 1);  /* 0C06F9BA mov.w @(disp,pc),Rn */
	r4 = r5 & 0xFFFF;  /* 0C06F9BC extu.w Rm,Rn */
	T = r4 == r3;  /* 0C06F9BE cmp/eq Rm,Rn */
	{ u32 c_ = T; r8 = 0u - r13; /* slot neg Rm,Rn */ if (c_) { UPD(0x0C06F9FCu, 5); goto L_0C06F9FC; } goto L_0C06F9C4; }  /* 0C06F9C0 bt/s */
L_0C06F9C4: BLKS(0x0C06F9C4u);
	r8 += 0x9u;  /* 0C06F9C4 add #imm,Rn */
	r5 = r8;  /* 0C06F9C6 mov Rm,Rn */
	IF(0x0C06F9C8u); { u32 t_ = r11; PR = 0x0C06F9CCu; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C06F9CCu); }  /* 0C06F9C8 jsr @Rn */
L_0C06F9CC: BLKS(0x0C06F9CCu);
	r6 = 0xC3C5454u; UPD(0x0C06F9CEu, 1);  /* 0C06F9CC mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06F9CE mov Rm,Rn */
	IF(0x0C06F9D0u); r5 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C06F9D2u, 2);  /* 0C06F9D0 mov.w @(r0,Rm),Rn */
	r4 = r5 & 0xFFFF;  /* 0C06F9D2 extu.w Rm,Rn */
	r5 = r8;  /* 0C06F9D4 mov Rm,Rn */
	IF(0x0C06F9D6u); { u32 t_ = r10; PR = 0x0C06F9DAu; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06F9DAu); }  /* 0C06F9D6 jsr @Rn */
L_0C06F9DA: BLKS(0x0C06F9DAu);
	r3 = 0xC2380B4u; UPD(0x0C06F9DCu, 1);  /* 0C06F9DA mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06F9DC mov Rm,Rn */
	IF(0x0C06F9DEu); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C06F9E0u, 2);  /* 0C06F9DE mov.w @(r0,Rm),Rn */
	r5 = r8;  /* 0C06F9E0 mov Rm,Rn */
	r4 = r2 & 0xFFFF;  /* 0C06F9E2 extu.w Rm,Rn */
	IF(0x0C06F9E4u); { u32 t_ = r10; PR = 0x0C06F9E8u; r6 = 0x1Au; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06F9E8u); }  /* 0C06F9E4 jsr @Rn */
L_0C06F9E8: BLKS(0x0C06F9E8u);
	r4 = 0xC3C4038u; UPD(0x0C06F9EAu, 1);  /* 0C06F9E8 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06F9EA mov Rm,Rn */
	IF(0x0C06F9ECu); r9 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C06F9EEu, 2);  /* 0C06F9EC mov.w @(r0,Rm),Rn */
	r5 = r8;  /* 0C06F9EE mov Rm,Rn */
	r4 = r9 & 0xFFFF;  /* 0C06F9F0 extu.w Rm,Rn */
	IF(0x0C06F9F2u); { u32 t_ = r10; PR = 0x0C06F9F6u; r6 = 0x1Cu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06F9F6u); }  /* 0C06F9F2 jsr @Rn */
L_0C06F9F6: BLKS(0x0C06F9F6u);
	r7 = r13;  /* 0C06F9F6 mov Rm,Rn */
	r7 += 0x1u;  /* 0C06F9F8 add #imm,Rn */
	r13 = (u32)(s32)(s16)r7;  /* 0C06F9FA exts.w Rm,Rn */
	UPD(0x0C06F9FCu, 3);
L_0C06F9FC: BLKS(0x0C06F9FCu);
	r8 = r12;  /* 0C06F9FC mov Rm,Rn */
	r8 += 0x1u;  /* 0C06F9FE add #imm,Rn */
	r12 = (u32)(s32)(s16)r8;  /* 0C06FA00 exts.w Rm,Rn */
	r0 = 0x7u;  /* 0C06FA02 mov #imm,Rn */
	UPD(0x0C06FA04u, 4);
L_0C06FA04: BLKS(0x0C06FA04u);
	T = (s32)r13 > (s32)r0;  /* 0C06FA04 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r5 = 0x5u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06F9A4u, 4); goto L_0C06F9A4; } goto L_0C06FA0A; }  /* 0C06FA06 bf/s */
L_0C06FA0A: BLKS(0x0C06FA0Au);
	r13 = 0xC0626E0u; UPD(0x0C06FA0Cu, 2);  /* 0C06FA0A mov.l @(disp,pc),Rn */
	r10 = 0xC0404000u; UPD(0x0C06FA0Eu, 1);  /* 0C06FA0C mov.l @(disp,pc),Rn */
	r6 = 0x13u;  /* 0C06FA0E mov #imm,Rn */
	r4 = 0xC17495Cu; UPD(0x0C06FA12u, 2);  /* 0C06FA10 mov.l @(disp,pc),Rn */
	IF(0x0C06FA12u); { u32 t_ = r13; PR = 0x0C06FA16u; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06FA16u); }  /* 0C06FA12 jsr @Rn */
L_0C06FA16: BLKS(0x0C06FA16u);
	r4 = 0xC1749C8u; UPD(0x0C06FA18u, 1);  /* 0C06FA16 mov.l @(disp,pc),Rn */
	r7 = r10;  /* 0C06FA18 mov Rm,Rn */
	r5 = 0x4u;  /* 0C06FA1A mov #imm,Rn */
	IF(0x0C06FA1Cu); { u32 t_ = r13; PR = 0x0C06FA20u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06FA20u); }  /* 0C06FA1C jsr @Rn */
L_0C06FA20: BLKS(0x0C06FA20u);
	r7 = r10;  /* 0C06FA20 mov Rm,Rn */
	r4 = 0xC1749D0u; UPD(0x0C06FA24u, 2);  /* 0C06FA22 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C06FA24 mov #imm,Rn */
	IF(0x0C06FA26u); { u32 t_ = r13; PR = 0x0C06FA2Au; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06FA2Au); }  /* 0C06FA26 jsr @Rn */
L_0C06FA2A: BLKS(0x0C06FA2Au);
	r2 = 0xC3C402Cu; UPD(0x0C06FA2Cu, 1);  /* 0C06FA2A mov.l @(disp,pc),Rn */
	r1 = 0x4u;  /* 0C06FA2C mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06FA30u, 2);  /* 0C06FA2E mov.b @Rm,Rn */
	r6 = 0x18u;  /* 0C06FA30 mov #imm,Rn */
	r5 = 0xC239458u; UPD(0x0C06FA34u, 2);  /* 0C06FA32 mov.l @(disp,pc),Rn */
	IF(0x0C06FA34u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06FA34 shld Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C06FA38u, 2);  /* 0C06FA36 mov.b @Rm,Rn */
	r4 = 0xC3BC3CCu; UPD(0x0C06FA3Au, 1);  /* 0C06FA38 mov.l @(disp,pc),Rn */
	r0 += r3;  /* 0C06FA3A add Rm,Rn */
	r0 += r0;  /* 0C06FA3C add Rm,Rn */
	r8 = 0xC0623C0u; UPD(0x0C06FA40u, 3);  /* 0C06FA3E mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C06FA40 mov #imm,Rn */
	IF(0x0C06FA42u); r10 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C06FA44u, 2);  /* 0C06FA42 mov.w @(r0,Rm),Rn */
	r11 = 0xC062490u; UPD(0x0C06FA46u, 1);  /* 0C06FA44 mov.l @(disp,pc),Rn */
	r9 = 0xC2A6944u; UPD(0x0C06FA48u, 1);  /* 0C06FA46 mov.l @(disp,pc),Rn */
	IF(0x0C06FA48u); { u32 t_ = r8; PR = 0x0C06FA4Cu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C06FA4Cu); }  /* 0C06FA48 jsr @Rn */
L_0C06FA4C: BLKS(0x0C06FA4Cu);
	r0 = r9;  /* 0C06FA4C mov Rm,Rn */
	r12 = 0xC23949Cu; UPD(0x0C06FA50u, 2);  /* 0C06FA4E mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C06FA50 mov #imm,Rn */
	IF(0x0C06FA52u); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C06FA54u, 2);  /* 0C06FA52 mov.b @(r0,Rm),Rn */
	IF(0x0C06FA54u); { u32 t_ = r11; PR = 0x0C06FA58u; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06FA58u); }  /* 0C06FA54 jsr @Rn */
L_0C06FA58: BLKS(0x0C06FA58u);
	r0 = r12;  /* 0C06FA58 mov Rm,Rn */
	IF(0x0C06FA5Au); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C06FA5Cu, 2);  /* 0C06FA5A mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C06FA5C mov #imm,Rn */
	r6 = 0x1Bu;  /* 0C06FA5E mov #imm,Rn */
	IF(0x0C06FA60u); { u32 t_ = r11; PR = 0x0C06FA64u; IF(0x0C06FA62u); r10 <<= 2; /* slot shll2 Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06FA64u); }  /* 0C06FA60 jsr @Rn */
L_0C06FA64: BLKS(0x0C06FA64u);
	r13 = 0xC29D93Cu; UPD(0x0C06FA66u, 1);  /* 0C06FA64 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C06FA66 mov Rm,Rn */
	IF(0x0C06FA68u); r4 = R32(r0 + r13); UPD(0x0C06FA6Au, 2);  /* 0C06FA68 mov.l @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C06FA6A mov #imm,Rn */
	r7 = 0xC062300u; UPD(0x0C06FA6Eu, 2);  /* 0C06FA6C mov.l @(disp,pc),Rn */
	r6 = 0x15u;  /* 0C06FA6E mov #imm,Rn */
	r15 = r14;  /* 0C06FA70 mov Rm,Rn */
	IF(0x0C06FA72u); PR = R32(r15); r15 += 4; UPD(0x0C06FA74u, 3);  /* 0C06FA72 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06FA76u, 1);  /* 0C06FA74 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06FA78u, 1);  /* 0C06FA76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06FA7Au, 1);  /* 0C06FA78 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06FA7Cu, 1);  /* 0C06FA7A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06FA7Eu, 1);  /* 0C06FA7C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06FA80u, 1);  /* 0C06FA7E mov.l @Rm+,Rn */
	{ { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(0x0C06FB20u, 3); goto L_0C06FB20; }  /* 0C06FA80 bra */
L_0C06FB20: BLKS(0x0C06FB20u);
	IF(0x0C06FB20u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); IF(0x0C06FB22u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C062300u: TAIL(blk_f_0C062300); default: JUMPD(tv_); } }  /* 0C06FB20 jmp @Rn */
L_0C06FB30: BLKS(0x0C06FB30u);
	r2 = 0xC0624D0u; UPD(0x0C06FB32u, 1);  /* 0C06FB30 mov.l @(disp,pc),Rn */
	r4 = 0xC174008u; UPD(0x0C06FB34u, 1);  /* 0C06FB32 mov.l @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C06FB34 add #imm,Rn */
	r5 += 0x9u;  /* 0C06FB36 add #imm,Rn */
	r6 = 0x13u;  /* 0C06FB38 mov #imm,Rn */
	IF(0x0C06FB3Au); { u32 t_ = r2; PR = 0x0C06FB3Eu; r13 = (u32)(s32)(s16)r9; /* slot exts.w Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C06FB3Eu); }  /* 0C06FB3A jsr @Rn */
L_0C06FB3E: BLKS(0x0C06FB3Eu);
	{ r0 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C06FA04u, 3); goto L_0C06FA04; }  /* 0C06FB3E bra */
L_0C06FB50: BLKS(0x0C06FB50u);
	r3 = 0xC0624D0u; UPD(0x0C06FB52u, 1);  /* 0C06FB50 mov.l @(disp,pc),Rn */
	r4 = 0xC174008u; UPD(0x0C06FB54u, 1);  /* 0C06FB52 mov.l @(disp,pc),Rn */
	IF(0x0C06FB54u); { u32 t_ = r3; PR = 0x0C06FB58u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C06FB58u); }  /* 0C06FB54 jsr @Rn */
L_0C06FB58: BLKS(0x0C06FB58u);
	r2 = r13;  /* 0C06FB58 mov Rm,Rn */
	r2 += 0x1u;  /* 0C06FB5A add #imm,Rn */
	{ r13 = (u32)(s32)(s16)r2; /* slot exts.w Rm,Rn */ UPD(0x0C06F98Au, 5); goto L_0C06F98A; }  /* 0C06FB5C bra */
L_0C06FB60: BLKS(0x0C06FB60u);
	r9 = 0xC0624D0u; UPD(0x0C06FB62u, 1);  /* 0C06FB60 mov.l @(disp,pc),Rn */
	r4 = 0xC174008u; UPD(0x0C06FB64u, 1);  /* 0C06FB62 mov.l @(disp,pc),Rn */
	IF(0x0C06FB64u); { u32 t_ = r9; PR = 0x0C06FB68u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C06FB68u); }  /* 0C06FB64 jsr @Rn */
L_0C06FB68: BLKS(0x0C06FB68u);
	r3 = r13;  /* 0C06FB68 mov Rm,Rn */
	r3 += 0x1u;  /* 0C06FB6A add #imm,Rn */
	{ r13 = (u32)(s32)(s16)r3; /* slot exts.w Rm,Rn */ UPD(0x0C06F91Eu, 5); goto L_0C06F91E; }  /* 0C06FB6C bra */
L_0C06FB70: BLKS(0x0C06FB70u);
	r2 = 0xC3C402Cu; UPD(0x0C06FB72u, 1);  /* 0C06FB70 mov.l @(disp,pc),Rn */
	r0 = 0xC239458u; UPD(0x0C06FB74u, 1);  /* 0C06FB72 mov.l @(disp,pc),Rn */
	r8 = 0xC0624D0u; UPD(0x0C06FB76u, 1);  /* 0C06FB74 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C06FB78u, 1);  /* 0C06FB76 mov.b @Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r0); UPD(0x0C06FB7Au, 1);  /* 0C06FB78 mov.b @Rm,Rn */
	r5 += 0x4u;  /* 0C06FB7A add #imm,Rn */
	r4 = 0xC174168u; UPD(0x0C06FB7Eu, 2);  /* 0C06FB7C mov.l @(disp,pc),Rn */
	IF(0x0C06FB7Eu); { u32 t_ = r8; PR = 0x0C06FB82u; r6 += 0x3u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C06FB82u); }  /* 0C06FB7E jsr @Rn */
L_0C06FB82: BLKS(0x0C06FB82u);
	{ IF(0x0C06FB84u); ; /* slot nop */ UPD(0x0C06F66Eu, 3); goto L_0C06F66E; }  /* 0C06FB82 bra */
L_0C06FB90: BLKS(0x0C06FB90u);
	r4 = 0xC1749DCu; UPD(0x0C06FB92u, 1);  /* 0C06FB90 mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C06FB94u, 1);  /* 0C06FB92 mov.l @(disp,pc),Rn */
	{ r5 = r9; /* slot mov Rm,Rn */ UPD(0x0C06F636u, 3); goto L_0C06F636; }  /* 0C06FB94 bra */
L_0C06FBA0: BLKS(0x0C06FBA0u);
	r4 = 0xC1749DCu; UPD(0x0C06FBA2u, 1);  /* 0C06FBA0 mov.l @(disp,pc),Rn */
	r7 = 0x4040C000u; UPD(0x0C06FBA4u, 1);  /* 0C06FBA2 mov.l @(disp,pc),Rn */
	IF(0x0C06FBA4u); { u32 t_ = r11; PR = 0x0C06FBA8u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06FBA8u); }  /* 0C06FBA4 jsr @Rn */
L_0C06FBA8: BLKS(0x0C06FBA8u);
	{ r7 = r12; /* slot mov Rm,Rn */ UPD(0x0C06F63Eu, 3); goto L_0C06F63E; }  /* 0C06FBA8 bra */
L_0C06FBB0: BLKS(0x0C06FBB0u);
	r1 = 0xC0626E0u; UPD(0x0C06FBB2u, 1);  /* 0C06FBB0 mov.l @(disp,pc),Rn */
	r4 = 0xC1749DCu; UPD(0x0C06FBB4u, 1);  /* 0C06FBB2 mov.l @(disp,pc),Rn */
	r6 += 0x3u;  /* 0C06FBB4 add #imm,Rn */
	r7 = 0xC0C04000u; UPD(0x0C06FBB8u, 2);  /* 0C06FBB6 mov.l @(disp,pc),Rn */
	IF(0x0C06FBB8u); { u32 t_ = r1; PR = 0x0C06FBBCu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06FBBCu); }  /* 0C06FBB8 jsr @Rn */
L_0C06FBBC: BLKS(0x0C06FBBCu);
	{ r7 = r12; /* slot mov Rm,Rn */ UPD(0x0C06F63Eu, 3); goto L_0C06F63E; }  /* 0C06FBBC bra */
L_0C06FBC0: BLKS(0x0C06FBC0u);
	r3 = 0xC0626E0u; UPD(0x0C06FBC2u, 1);  /* 0C06FBC0 mov.l @(disp,pc),Rn */
	r4 = 0xC1749D8u; UPD(0x0C06FBC4u, 1);  /* 0C06FBC2 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C06FBC6u, 1);  /* 0C06FBC4 mov.l @(disp,pc),Rn */
	IF(0x0C06FBC6u); { u32 t_ = r3; PR = 0x0C06FBCAu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06FBCAu); }  /* 0C06FBC6 jsr @Rn */
L_0C06FBCA: BLKS(0x0C06FBCAu);
	{ r7 = r12; /* slot mov Rm,Rn */ UPD(0x0C06F63Eu, 3); goto L_0C06F63E; }  /* 0C06FBCA bra */
L_0C06FBD0: BLKS(0x0C06FBD0u);
	r8 = 0xC062490u; UPD(0x0C06FBD2u, 1);  /* 0C06FBD0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C06FBD2 mov Rm,Rn */
	r5 = r9;  /* 0C06FBD4 mov Rm,Rn */
	IF(0x0C06FBD6u); { u32 t_ = r8; PR = 0x0C06FBDAu; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06FBDAu); }  /* 0C06FBD6 jsr @Rn */
L_0C06FBDA: BLKS(0x0C06FBDAu);
	{ IF(0x0C06FBDCu); ; /* slot nop */ UPD(0x0C06F5EEu, 3); goto L_0C06F5EE; }  /* 0C06FBDA bra */
}

/* FUN_0c06fc20 */
void blk_f_0C06FC20(sh3_t *c)
{
	LOCALS;
L_0C06FC20: BLKS(0x0C06FC20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06FC22u, 1);  /* 0C06FC20 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s8)r5;  /* 0C06FC22 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06FC26u, 2);  /* 0C06FC24 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06FC28u, 1);  /* 0C06FC26 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r4;  /* 0C06FC28 exts.b Rm,Rn */
	IF(0x0C06FC2Au); r15 -= 4; W32(r15, PR); UPD(0x0C06FC2Cu, 2);  /* 0C06FC2A sts.l pr,@-Rn */
	r0 = 0xC3C542Au; UPD(0x0C06FC2Eu, 1);  /* 0C06FC2C mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C06FC30u, 1);  /* 0C06FC2E mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C06FC30 extu.b Rm,Rn */
	r2 = 0x2u;  /* 0C06FC32 mov #imm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C06FC34 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06FC70u, 6); goto L_0C06FC70; } goto L_0C06FC3A; }  /* 0C06FC36 bf/s */
L_0C06FC3A: BLKS(0x0C06FC3Au);
	T = r0 == 0x3u;  /* 0C06FC3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C06FC50u, 5); goto L_0C06FC50; }  /* 0C06FC3C bt */
L_0C06FC3E: BLKS(0x0C06FC3Eu);
	r15 = r14;  /* 0C06FC3E mov Rm,Rn */
	IF(0x0C06FC40u); PR = R32(r15); r15 += 4; UPD(0x0C06FC42u, 2);  /* 0C06FC40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06FC44u, 1);  /* 0C06FC42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06FC46u, 1);  /* 0C06FC44 mov.l @Rm+,Rn */
	IF(0x0C06FC46u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06FC46 rts */
L_0C06FC50: BLKS(0x0C06FC50u);
	r8 = 0xC06FC90u; UPD(0x0C06FC52u, 1);  /* 0C06FC50 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C06FC52 mov #imm,Rn */
	r5 = r9;  /* 0C06FC54 mov Rm,Rn */
	IF(0x0C06FC56u); { u32 t_ = r8; PR = 0x0C06FC5Au; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C06FC90, 0x0C06FC90u, 0x0C06FC5Au); }  /* 0C06FC56 jsr @Rn */
L_0C06FC5A: BLKS(0x0C06FC5Au);
	r4 = 0x1u;  /* 0C06FC5A mov #imm,Rn */
	r5 = r9;  /* 0C06FC5C mov Rm,Rn */
	r6 = 0x13u;  /* 0C06FC5E mov #imm,Rn */
	r1 = r8;  /* 0C06FC60 mov Rm,Rn */
	UPD(0x0C06FC62u, 4);
L_0C06FC62: BLKS(0x0C06FC62u);
	r15 = r14;  /* 0C06FC62 mov Rm,Rn */
	IF(0x0C06FC64u); PR = R32(r15); r15 += 4; UPD(0x0C06FC66u, 2);  /* 0C06FC64 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06FC68u, 1);  /* 0C06FC66 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06FC6Au, 1);  /* 0C06FC68 mov.l @Rm+,Rn */
	IF(0x0C06FC6Au); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06FC90u: TAIL(blk_f_0C06FC90); default: JUMPD(tv_); } }  /* 0C06FC6A jmp @Rn */
L_0C06FC70: BLKS(0x0C06FC70u);
	r5 += 0x9u;  /* 0C06FC70 add #imm,Rn */
	r6 = (u32)(s32)(s8)r5;  /* 0C06FC72 exts.b Rm,Rn */
	r1 = 0xC06FC90u; UPD(0x0C06FC76u, 3);  /* 0C06FC74 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C06FC76 mov #imm,Rn */
	{ r5 = r9; /* slot mov Rm,Rn */ UPD(0x0C06FC62u, 4); goto L_0C06FC62; }  /* 0C06FC78 bra */
}

/* FUN_0c06fc90 */
void blk_f_0C06FC90(sh3_t *c)
{
	LOCALS;
L_0C06FC90: BLKS(0x0C06FC90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06FC92u, 1);  /* 0C06FC90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06FC94u, 1);  /* 0C06FC92 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06FC96u, 1);  /* 0C06FC94 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06FC98u, 1);  /* 0C06FC96 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r5;  /* 0C06FC98 exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06FC9Cu, 2);  /* 0C06FC9A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r6;  /* 0C06FC9C exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06FCA0u, 2);  /* 0C06FC9E mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r4;  /* 0C06FCA0 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06FCA4u, 2);  /* 0C06FCA2 mov.l Rm,@-Rn */
	r2 = 0xC3C8690u; UPD(0x0C06FCA6u, 1);  /* 0C06FCA4 mov.l @(disp,pc),Rn */
	IF(0x0C06FCA6u); r15 -= 4; W32(r15, PR); UPD(0x0C06FCA8u, 1);  /* 0C06FCA6 sts.l pr,@-Rn */
	r0 = r2;  /* 0C06FCA8 mov Rm,Rn */
	IF(0x0C06FCAAu); r2 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C06FCACu, 2);  /* 0C06FCAA mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C06FCAC tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06FD70u, 4); goto L_0C06FD70; } goto L_0C06FCB2; }  /* 0C06FCAE bt/s */
L_0C06FCB2: BLKS(0x0C06FCB2u);
	r13 = 0xC297488u; UPD(0x0C06FCB4u, 2);  /* 0C06FCB2 mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C06FCB4 mov Rm,Rn */
	IF(0x0C06FCB6u); r7 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C06FCB8u, 2);  /* 0C06FCB6 mov.b @(r0,Rm),Rn */
	r6 = 0xC2860B0u; UPD(0x0C06FCBAu, 1);  /* 0C06FCB8 mov.l @(disp,pc),Rn */
	r0 = r7 & 0xFF;  /* 0C06FCBA extu.b Rm,Rn */
	IF(0x0C06FCBCu); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C06FCBEu, 2);  /* 0C06FCBC mov.b @(r0,Rm),Rn */
	r5 = 0xC173F40u; UPD(0x0C06FCC0u, 1);  /* 0C06FCBE mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFF;  /* 0C06FCC0 extu.b Rm,Rn */
	IF(0x0C06FCC2u); r0 <<= 2;  /* 0C06FCC2 shll2 Rn */
	r8 = 0xC0626E0u; UPD(0x0C06FCC6u, 3);  /* 0C06FCC4 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C06FCC6 mov Rm,Rn */
	IF(0x0C06FCC8u); r4 = R32(r0 + r5); UPD(0x0C06FCCAu, 2);  /* 0C06FCC8 mov.l @(r0,Rm),Rn */
	r13 = 0xC0C04000u; UPD(0x0C06FCCCu, 1);  /* 0C06FCCA mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C06FCCC mov Rm,Rn */
	IF(0x0C06FCCEu); { u32 t_ = r8; PR = 0x0C06FCD2u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06FCD2u); }  /* 0C06FCCE jsr @Rn */
L_0C06FCD2: BLKS(0x0C06FCD2u);
	r3 = 0xC3C542Au; UPD(0x0C06FCD4u, 1);  /* 0C06FCD2 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C06FCD6u, 1);  /* 0C06FCD4 mov.b @Rm,Rn */
	T = r0 == 0x2u;  /* 0C06FCD6 cmp/eq #imm,r0 */
	{ u32 c_ = T; r6 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06FD50u, 4); goto L_0C06FD50; } goto L_0C06FCDC; }  /* 0C06FCD8 bt/s */
L_0C06FCDC: BLKS(0x0C06FCDCu);
	r0 = 0xC3C414Cu; UPD(0x0C06FCDEu, 2);  /* 0C06FCDC mov.l @(disp,pc),Rn */
	IF(0x0C06FCDEu); r9 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C06FCE0u, 1);  /* 0C06FCDE mov.b @(r0,Rm),Rn */
	r0 = 0x1u;  /* 0C06FCE0 mov #imm,Rn */
	T = r9 > r0;  /* 0C06FCE2 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C06FD10u, 5); goto L_0C06FD10; }  /* 0C06FCE4 bt */
L_0C06FCE6: BLKS(0x0C06FCE6u);
	r10 += 0xFFFFFFFFu;  /* 0C06FCE6 add #imm,Rn */
	r4 = 0xC1749F0u; UPD(0x0C06FCEAu, 2);  /* 0C06FCE8 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C06FCEA mov Rm,Rn */
	UPD(0x0C06FCECu, 1);
L_0C06FCEC: BLKS(0x0C06FCECu);
	r1 = 0xC0626E0u; UPD(0x0C06FCEEu, 1);  /* 0C06FCEC mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C06FCEE mov Rm,Rn */
	r7 = r13;  /* 0C06FCF0 mov Rm,Rn */
	UPD(0x0C06FCF2u, 2);
L_0C06FCF2: BLKS(0x0C06FCF2u);
	r15 = r14;  /* 0C06FCF2 mov Rm,Rn */
	IF(0x0C06FCF4u); PR = R32(r15); r15 += 4; UPD(0x0C06FCF6u, 2);  /* 0C06FCF4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06FCF8u, 1);  /* 0C06FCF6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06FCFAu, 1);  /* 0C06FCF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06FCFCu, 1);  /* 0C06FCFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06FCFEu, 1);  /* 0C06FCFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06FD00u, 1);  /* 0C06FCFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06FD02u, 1);  /* 0C06FD00 mov.l @Rm+,Rn */
	IF(0x0C06FD02u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0626E0u: TAIL(blk_f_0C0626E0); default: JUMPD(tv_); } }  /* 0C06FD02 jmp @Rn */
L_0C06FD10: BLKS(0x0C06FD10u);
	r9 = 0xC0626E0u; UPD(0x0C06FD12u, 1);  /* 0C06FD10 mov.l @(disp,pc),Rn */
	r8 = r10;  /* 0C06FD12 mov Rm,Rn */
	r8 += 0xFFFFFFFFu;  /* 0C06FD14 add #imm,Rn */
	r4 = 0xC1749FCu; UPD(0x0C06FD18u, 3);  /* 0C06FD16 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C06FD18 mov Rm,Rn */
	IF(0x0C06FD1Au); { u32 t_ = r9; PR = 0x0C06FD1Eu; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06FD1Eu); }  /* 0C06FD1A jsr @Rn */
L_0C06FD1E: BLKS(0x0C06FD1Eu);
	r4 = 0xC239480u; UPD(0x0C06FD20u, 1);  /* 0C06FD1E mov.l @(disp,pc),Rn */
	r11 += 0x8u;  /* 0C06FD20 add #imm,Rn */
	r0 = r4;  /* 0C06FD22 mov Rm,Rn */
	IF(0x0C06FD24u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C06FD26u, 3);  /* 0C06FD24 mov.b @(r0,Rm),Rn */
	r6 = r11;  /* 0C06FD26 mov Rm,Rn */
	r3 = 0xC0626E0u; UPD(0x0C06FD2Au, 2);  /* 0C06FD28 mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C06FD2A extu.b Rm,Rn */
	r10 = 0xC174060u; UPD(0x0C06FD2Eu, 2);  /* 0C06FD2C mov.l @(disp,pc),Rn */
	IF(0x0C06FD2Eu); r0 <<= 2;  /* 0C06FD2E shll2 Rn */
	IF(0x0C06FD30u); r4 = R32(r0 + r10); UPD(0x0C06FD32u, 2);  /* 0C06FD30 mov.l @(r0,Rm),Rn */
	r5 = r8;  /* 0C06FD32 mov Rm,Rn */
	IF(0x0C06FD34u); { u32 t_ = r3; PR = 0x0C06FD38u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06FD38u); }  /* 0C06FD34 jsr @Rn */
L_0C06FD38: BLKS(0x0C06FD38u);
	r0 = 0xC3C414Cu; UPD(0x0C06FD3Au, 1);  /* 0C06FD38 mov.l @(disp,pc),Rn */
	r11 += 0x2u;  /* 0C06FD3A add #imm,Rn */
	IF(0x0C06FD3Cu); r2 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C06FD3Eu, 2);  /* 0C06FD3C mov.b @(r0,Rm),Rn */
	r5 = r8;  /* 0C06FD3E mov Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C06FD40 extu.b Rm,Rn */
	IF(0x0C06FD42u); r0 <<= 2;  /* 0C06FD42 shll2 Rn */
	{ IF(0x0C06FD46u); r4 = R32(r0 + r10); /* slot mov.l @(r0,Rm),Rn */ UPD(0x0C06FCECu, 6); goto L_0C06FCEC; }  /* 0C06FD44 bra */
L_0C06FD50: BLKS(0x0C06FD50u);
	r10 += 0xFFFFFFFFu;  /* 0C06FD50 add #imm,Rn */
	r4 = 0xC1749F0u; UPD(0x0C06FD54u, 2);  /* 0C06FD52 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C06FD54 mov Rm,Rn */
	r1 = 0xC0626E0u; UPD(0x0C06FD58u, 2);  /* 0C06FD56 mov.l @(disp,pc),Rn */
	r7 = r13;  /* 0C06FD58 mov Rm,Rn */
	r15 = r14;  /* 0C06FD5A mov Rm,Rn */
	IF(0x0C06FD5Cu); PR = R32(r15); r15 += 4; UPD(0x0C06FD5Eu, 3);  /* 0C06FD5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06FD60u, 1);  /* 0C06FD5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06FD62u, 1);  /* 0C06FD60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06FD64u, 1);  /* 0C06FD62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06FD66u, 1);  /* 0C06FD64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06FD68u, 1);  /* 0C06FD66 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06FD6Au, 1);  /* 0C06FD68 mov.l @Rm+,Rn */
	IF(0x0C06FD6Au); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0626E0u: TAIL(blk_f_0C0626E0); default: JUMPD(tv_); } }  /* 0C06FD6A jmp @Rn */
L_0C06FD70: BLKS(0x0C06FD70u);
	r12 = 0xC0626E0u; UPD(0x0C06FD72u, 1);  /* 0C06FD70 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C06FD72 mov Rm,Rn */
	r9 = 0xC0C04000u; UPD(0x0C06FD76u, 2);  /* 0C06FD74 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C06FD76 mov Rm,Rn */
	r4 = 0xC173F34u; UPD(0x0C06FD7Au, 2);  /* 0C06FD78 mov.l @(disp,pc),Rn */
	IF(0x0C06FD7Au); { u32 t_ = r12; PR = 0x0C06FD7Eu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06FD7Eu); }  /* 0C06FD7A jsr @Rn */
L_0C06FD7E: BLKS(0x0C06FD7Eu);
	r10 += 0xFFFFFFFFu;  /* 0C06FD7E add #imm,Rn */
	r4 = 0xC1749F0u; UPD(0x0C06FD82u, 2);  /* 0C06FD80 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C06FD82 mov Rm,Rn */
	r6 = r11;  /* 0C06FD84 mov Rm,Rn */
	r7 = r9;  /* 0C06FD86 mov Rm,Rn */
	{ r1 = r12; /* slot mov Rm,Rn */ UPD(0x0C06FCF2u, 6); goto L_0C06FCF2; }  /* 0C06FD88 bra */
}

/* FUN_0c06fdc0 */
void blk_f_0C06FDC0(sh3_t *c)
{
	LOCALS;
L_0C06FDC0: BLKS(0x0C06FDC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06FDC2u, 1);  /* 0C06FDC0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06FDC4u, 1);  /* 0C06FDC2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06FDC6u, 1);  /* 0C06FDC4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06FDC8u, 1);  /* 0C06FDC6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C06FDC8 exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06FDCCu, 2);  /* 0C06FDCA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r5;  /* 0C06FDCC exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06FDD0u, 2);  /* 0C06FDCE mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r6;  /* 0C06FDD0 exts.b Rm,Rn */
	IF(0x0C06FDD2u); r15 -= 4; W32(r15, PR); UPD(0x0C06FDD4u, 2);  /* 0C06FDD2 sts.l pr,@-Rn */
	r0 = 0xC174A08u; UPD(0x0C06FDD6u, 1);  /* 0C06FDD4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFD8u;  /* 0C06FDD6 add #imm,Rn */
	r14 = r15;  /* 0C06FDD8 mov Rm,Rn */
	r2 = 0xC174A14u; UPD(0x0C06FDDCu, 3);  /* 0C06FDDA mov.l @(disp,pc),Rn */
	W32(r14, r0); UPD(0x0C06FDDEu, 1);  /* 0C06FDDC mov.l Rm,@Rn */
	W32(r14 + 0x4u, r2); UPD(0x0C06FDE0u, 1);  /* 0C06FDDE mov.l Rm,@(disp,Rn) */
	r0 = 0xC174A74u; UPD(0x0C06FDE2u, 1);  /* 0C06FDE0 mov.l @(disp,pc),Rn */
	r2 = 0xC3C8690u; UPD(0x0C06FDE4u, 1);  /* 0C06FDE2 mov.l @(disp,pc),Rn */
	W32(r14 + 0x24u, r0); UPD(0x0C06FDE6u, 1);  /* 0C06FDE4 mov.l Rm,@(disp,Rn) */
	r9 = 0xC174A20u; UPD(0x0C06FDE8u, 1);  /* 0C06FDE6 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C06FDE8 mov Rm,Rn */
	r8 = 0xC174A2Cu; UPD(0x0C06FDECu, 2);  /* 0C06FDEA mov.l @(disp,pc),Rn */
	r7 = 0xC174A38u; UPD(0x0C06FDEEu, 1);  /* 0C06FDEC mov.l @(disp,pc),Rn */
	r6 = 0xC174A44u; UPD(0x0C06FDF0u, 1);  /* 0C06FDEE mov.l @(disp,pc),Rn */
	r5 = 0xC174A50u; UPD(0x0C06FDF2u, 1);  /* 0C06FDF0 mov.l @(disp,pc),Rn */
	r4 = 0xC174A5Cu; UPD(0x0C06FDF4u, 1);  /* 0C06FDF2 mov.l @(disp,pc),Rn */
	r3 = 0xC174A68u; UPD(0x0C06FDF6u, 1);  /* 0C06FDF4 mov.l @(disp,pc),Rn */
	IF(0x0C06FDF6u); r2 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C06FDF8u, 1);  /* 0C06FDF6 mov.b @(r0,Rm),Rn */
	W32(r14 + 0x8u, r9); UPD(0x0C06FDFAu, 1);  /* 0C06FDF8 mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C06FDFA tst Rm,Rn */
	W32(r14 + 0xCu, r8); UPD(0x0C06FDFEu, 2);  /* 0C06FDFC mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r7); UPD(0x0C06FE00u, 1);  /* 0C06FDFE mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x14u, r6); UPD(0x0C06FE02u, 1);  /* 0C06FE00 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x18u, r5); UPD(0x0C06FE04u, 1);  /* 0C06FE02 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x1Cu, r4); UPD(0x0C06FE06u, 1);  /* 0C06FE04 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r14 + 0x20u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06FE30u, 3); goto L_0C06FE30; } UPD(0x0C06FE0Au, 1); goto L_0C06FE0A; }  /* 0C06FE06 bf/s */
L_0C06FE0A: BLKS(0x0C06FE0Au);
	r10 = 0xC0626E0u; UPD(0x0C06FE0Cu, 1);  /* 0C06FE0A mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C06FE0C mov Rm,Rn */
	r4 = 0xC173F34u; UPD(0x0C06FE10u, 2);  /* 0C06FE0E mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C06FE12u, 1);  /* 0C06FE10 mov.l @(disp,pc),Rn */
	IF(0x0C06FE12u); { u32 t_ = r10; PR = 0x0C06FE16u; r6 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06FE16u); }  /* 0C06FE12 jsr @Rn */
L_0C06FE16: BLKS(0x0C06FE16u);
	r14 += 0x28u;  /* 0C06FE16 add #imm,Rn */
	UPD(0x0C06FE18u, 1);
L_0C06FE18: BLKS(0x0C06FE18u);
	r15 = r14;  /* 0C06FE18 mov Rm,Rn */
	IF(0x0C06FE1Au); PR = R32(r15); r15 += 4; UPD(0x0C06FE1Cu, 2);  /* 0C06FE1A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06FE1Eu, 1);  /* 0C06FE1C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06FE20u, 1);  /* 0C06FE1E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06FE22u, 1);  /* 0C06FE20 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06FE24u, 1);  /* 0C06FE22 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06FE26u, 1);  /* 0C06FE24 mov.l @Rm+,Rn */
	IF(0x0C06FE26u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06FE26 rts */
L_0C06FE30: BLKS(0x0C06FE30u);
	r6 = 0xC3C414Cu; UPD(0x0C06FE32u, 1);  /* 0C06FE30 mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C06FE32 mov Rm,Rn */
	IF(0x0C06FE34u); r5 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C06FE36u, 2);  /* 0C06FE34 mov.b @(r0,Rm),Rn */
	r6 = r12;  /* 0C06FE36 mov Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C06FE38 extu.b Rm,Rn */
	r9 = 0xC0626E0u; UPD(0x0C06FE3Cu, 3);  /* 0C06FE3A mov.l @(disp,pc),Rn */
	IF(0x0C06FE3Cu); r0 <<= 2;  /* 0C06FE3C shll2 Rn */
	r8 = 0x80808000u; UPD(0x0C06FE40u, 2);  /* 0C06FE3E mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C06FE40 mov Rm,Rn */
	IF(0x0C06FE42u); r4 = R32(r0 + r14); UPD(0x0C06FE44u, 2);  /* 0C06FE42 mov.l @(r0,Rm),Rn */
	IF(0x0C06FE44u); { u32 t_ = r9; PR = 0x0C06FE48u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06FE48u); }  /* 0C06FE44 jsr @Rn */
L_0C06FE48: BLKS(0x0C06FE48u);
	r4 = 0xC2B1A58u; UPD(0x0C06FE4Au, 1);  /* 0C06FE48 mov.l @(disp,pc),Rn */
	r11 += 0xFFFFFFFFu;  /* 0C06FE4A add #imm,Rn */
	r0 = r4;  /* 0C06FE4C mov Rm,Rn */
	IF(0x0C06FE4Eu); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C06FE50u, 3);  /* 0C06FE4E mov.b @(r0,Rm),Rn */
	r5 = r11;  /* 0C06FE50 mov Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C06FE52 extu.b Rm,Rn */
	r3 = 0xC173FE0u; UPD(0x0C06FE56u, 3);  /* 0C06FE54 mov.l @(disp,pc),Rn */
	IF(0x0C06FE56u); r0 <<= 2;  /* 0C06FE56 shll2 Rn */
	IF(0x0C06FE58u); r4 = R32(r0 + r3); UPD(0x0C06FE5Au, 2);  /* 0C06FE58 mov.l @(r0,Rm),Rn */
	r6 = r12;  /* 0C06FE5A mov Rm,Rn */
	IF(0x0C06FE5Cu); { u32 t_ = r9; PR = 0x0C06FE60u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06FE60u); }  /* 0C06FE5C jsr @Rn */
L_0C06FE60: BLKS(0x0C06FE60u);
	{ r14 += 0x28u; /* slot add #imm,Rn */ UPD(0x0C06FE18u, 3); goto L_0C06FE18; }  /* 0C06FE60 bra */
}

/* FUN_0c06feb0 */
void blk_f_0C06FEB0(sh3_t *c)
{
	LOCALS;
L_0C06FEB0: BLKS(0x0C06FEB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06FEB2u, 1);  /* 0C06FEB0 mov.l Rm,@-Rn */
	r3 = (u32)(s32)(s8)r4;  /* 0C06FEB2 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06FEB6u, 2);  /* 0C06FEB4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06FEB8u, 1);  /* 0C06FEB6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06FEBAu, 1);  /* 0C06FEB8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r5;  /* 0C06FEBA exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06FEBEu, 2);  /* 0C06FEBC mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r6;  /* 0C06FEBE exts.b Rm,Rn */
	r4 = 0xC2A6D68u; UPD(0x0C06FEC2u, 2);  /* 0C06FEC0 mov.l @(disp,pc),Rn */
	IF(0x0C06FEC2u); r15 -= 4; W32(r15, PR); UPD(0x0C06FEC4u, 1);  /* 0C06FEC2 sts.l pr,@-Rn */
	r0 = r4;  /* 0C06FEC4 mov Rm,Rn */
	IF(0x0C06FEC6u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06FEC8u, 2);  /* 0C06FEC6 mov.b @(r0,Rm),Rn */
	r2 = 0xC3C8690u; UPD(0x0C06FECAu, 1);  /* 0C06FEC8 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C06FECA mov Rm,Rn */
	IF(0x0C06FECCu); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C06FECEu, 2);  /* 0C06FECC mov.b @(r0,Rm),Rn */
	r7 = r4 & 0xFF;  /* 0C06FECE extu.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C06FED0 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06FF70u, 5); goto L_0C06FF70; } goto L_0C06FED6; }  /* 0C06FED2 bt/s */
L_0C06FED6: BLKS(0x0C06FED6u);
	r8 = 0x2A0u; UPD(0x0C06FED8u, 2);  /* 0C06FED6 mov.w @(disp,pc),Rn */
	r5 = 0xFFFFFFFFu;  /* 0C06FED8 mov #imm,Rn */
	IF(0x0C06FEDAu); MACL = r3 * r8;  /* 0C06FEDA mul.l Rm,Rn */
	r6 = 0xC29D1D8u; UPD(0x0C06FEDEu, 4);  /* 0C06FEDC mov.l @(disp,pc),Rn */
	IF(0x0C06FEDEu); r0 = MACL;  /* 0C06FEDE sts macl,Rn */
	r6 += r0;  /* 0C06FEE0 add Rm,Rn */
	r0 = 0x28Au; UPD(0x0C06FEE4u, 3);  /* 0C06FEE2 mov.w @(disp,pc),Rn */
	r4 = 0xC22E015u; UPD(0x0C06FEE6u, 1);  /* 0C06FEE4 mov.l @(disp,pc),Rn */
	IF(0x0C06FEE6u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C06FEE8u, 1);  /* 0C06FEE6 mov.b @(r0,Rm),Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C06FEEAu, 1);  /* 0C06FEE8 mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06FEEA tst Rm,Rn */
	r8 = 0xC2ABAA0u; UPD(0x0C06FEEEu, 2);  /* 0C06FEEC mov.l @(disp,pc),Rn */
	IF(0x0C06FEEEu); r0 = T;  /* 0C06FEEE movt Rn */
	T = (r2 & r2) == 0;  /* 0C06FEF0 tst Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C06FEF4u, 3);  /* 0C06FEF2 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C06FEF4 negc Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C06FEF6 tst Rm,Rn */
	IF(0x0C06FEF8u); r3 = T;  /* 0C06FEF8 movt Rn */
	r0 |= r9;  /* 0C06FEFA or Rm,Rn */
	r0 |= r3;  /* 0C06FEFC or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06FEFE tst Rm,Rn */
	{ u32 c_ = T; r5 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06FF40u, 9); goto L_0C06FF40; } goto L_0C06FF04; }  /* 0C06FF00 bt/s */
L_0C06FF04: BLKS(0x0C06FF04u);
	IF(0x0C06FF04u); r7 <<= 2;  /* 0C06FF04 shll2 Rn */
	r5 = 0xC173FE0u; UPD(0x0C06FF08u, 3);  /* 0C06FF06 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C06FF08 mov Rm,Rn */
	r9 = 0xC0626E0u; UPD(0x0C06FF0Cu, 2);  /* 0C06FF0A mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C06FF0C mov Rm,Rn */
	IF(0x0C06FF0Eu); r4 = R32(r0 + r5); UPD(0x0C06FF10u, 2);  /* 0C06FF0E mov.l @(r0,Rm),Rn */
	r8 = 0xC040C000u; UPD(0x0C06FF12u, 1);  /* 0C06FF10 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C06FF12 mov Rm,Rn */
	IF(0x0C06FF14u); { u32 t_ = r9; PR = 0x0C06FF18u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06FF18u); }  /* 0C06FF14 jsr @Rn */
L_0C06FF18: BLKS(0x0C06FF18u);
	r4 = 0xC174494u; UPD(0x0C06FF1Au, 1);  /* 0C06FF18 mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFFFu;  /* 0C06FF1A add #imm,Rn */
	r5 = r10;  /* 0C06FF1C mov Rm,Rn */
	r6 = r11;  /* 0C06FF1E mov Rm,Rn */
	r7 = r8;  /* 0C06FF20 mov Rm,Rn */
	r1 = r9;  /* 0C06FF22 mov Rm,Rn */
	UPD(0x0C06FF24u, 5);
L_0C06FF24: BLKS(0x0C06FF24u);
	r15 = r14;  /* 0C06FF24 mov Rm,Rn */
	IF(0x0C06FF26u); PR = R32(r15); r15 += 4; UPD(0x0C06FF28u, 2);  /* 0C06FF26 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06FF2Au, 1);  /* 0C06FF28 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06FF2Cu, 1);  /* 0C06FF2A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06FF2Eu, 1);  /* 0C06FF2C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06FF30u, 1);  /* 0C06FF2E mov.l @Rm+,Rn */
	IF(0x0C06FF30u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0626E0u: TAIL(blk_f_0C0626E0); default: JUMPD(tv_); } }  /* 0C06FF30 jmp @Rn */
L_0C06FF40: BLKS(0x0C06FF40u);
	r9 = 0xC0626E0u; UPD(0x0C06FF42u, 1);  /* 0C06FF40 mov.l @(disp,pc),Rn */
	r8 = 0xC040C000u; UPD(0x0C06FF44u, 1);  /* 0C06FF42 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C06FF44 mov Rm,Rn */
	r4 = 0xC173F74u; UPD(0x0C06FF48u, 2);  /* 0C06FF46 mov.l @(disp,pc),Rn */
	IF(0x0C06FF48u); { u32 t_ = r9; PR = 0x0C06FF4Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06FF4Cu); }  /* 0C06FF48 jsr @Rn */
L_0C06FF4C: BLKS(0x0C06FF4Cu);
	r10 += 0xFFFFFFFFu;  /* 0C06FF4C add #imm,Rn */
	r4 = 0xC1744A0u; UPD(0x0C06FF50u, 2);  /* 0C06FF4E mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C06FF50 mov Rm,Rn */
	r6 = r11;  /* 0C06FF52 mov Rm,Rn */
	r7 = r8;  /* 0C06FF54 mov Rm,Rn */
	r1 = r9;  /* 0C06FF56 mov Rm,Rn */
	r15 = r14;  /* 0C06FF58 mov Rm,Rn */
	IF(0x0C06FF5Au); PR = R32(r15); r15 += 4; UPD(0x0C06FF5Cu, 6);  /* 0C06FF5A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06FF5Eu, 1);  /* 0C06FF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06FF60u, 1);  /* 0C06FF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06FF62u, 1);  /* 0C06FF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06FF64u, 1);  /* 0C06FF62 mov.l @Rm+,Rn */
	IF(0x0C06FF64u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0626E0u: TAIL(blk_f_0C0626E0); default: JUMPD(tv_); } }  /* 0C06FF64 jmp @Rn */
L_0C06FF70: BLKS(0x0C06FF70u);
	r4 = 0xC173F34u; UPD(0x0C06FF72u, 1);  /* 0C06FF70 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C06FF72 mov Rm,Rn */
	r7 = 0x80808000u; UPD(0x0C06FF76u, 2);  /* 0C06FF74 mov.l @(disp,pc),Rn */
	r1 = 0xC0626E0u; UPD(0x0C06FF78u, 1);  /* 0C06FF76 mov.l @(disp,pc),Rn */
	{ r6 = r11; /* slot mov Rm,Rn */ UPD(0x0C06FF24u, 3); goto L_0C06FF24; }  /* 0C06FF78 bra */
}

/* FUN_0c06ffc0 */
void blk_f_0C06FFC0(sh3_t *c)
{
	LOCALS;
L_0C06FFC0: BLKS(0x0C06FFC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06FFC2u, 1);  /* 0C06FFC0 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C06FFC2 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06FFC6u, 2);  /* 0C06FFC4 mov.l Rm,@-Rn */
	r8 = 0xFFFFFFFFu;  /* 0C06FFC6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06FFCAu, 2);  /* 0C06FFC8 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06FFCCu, 1);  /* 0C06FFCA mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r5;  /* 0C06FFCC exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06FFD0u, 2);  /* 0C06FFCE mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r6;  /* 0C06FFD0 exts.b Rm,Rn */
	r5 = 0x2A0u; UPD(0x0C06FFD4u, 2);  /* 0C06FFD2 mov.w @(disp,pc),Rn */
	IF(0x0C06FFD4u); r15 -= 4; W32(r15, PR); UPD(0x0C06FFD6u, 1);  /* 0C06FFD4 sts.l pr,@-Rn */
	IF(0x0C06FFD6u); MACL = r0 * r5;  /* 0C06FFD6 mul.l Rm,Rn */
	r6 = 0xC297488u; UPD(0x0C06FFDAu, 3);  /* 0C06FFD8 mov.l @(disp,pc),Rn */
	IF(0x0C06FFDAu); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C06FFDCu, 1);  /* 0C06FFDA mov.b @(r0,Rm),Rn */
	r7 = 0xC29D1D8u; UPD(0x0C06FFDEu, 1);  /* 0C06FFDC mov.l @(disp,pc),Rn */
	IF(0x0C06FFDEu); r0 = MACL;  /* 0C06FFDE sts macl,Rn */
	r7 += r0;  /* 0C06FFE0 add Rm,Rn */
	r0 = 0x28Au; UPD(0x0C06FFE4u, 3);  /* 0C06FFE2 mov.w @(disp,pc),Rn */
	IF(0x0C06FFE4u); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C06FFE6u, 1);  /* 0C06FFE4 mov.b @(r0,Rm),Rn */
	r2 = 0xC22E015u; UPD(0x0C06FFE8u, 1);  /* 0C06FFE6 mov.l @(disp,pc),Rn */
	r7 = r4 & 0xFF;  /* 0C06FFE8 extu.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C06FFEA tst Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C06FFEEu, 3);  /* 0C06FFEC mov.b @Rm,Rn */
	IF(0x0C06FFEEu); r0 = T;  /* 0C06FFEE movt Rn */
	r5 = 0xC2ABAA0u; UPD(0x0C06FFF2u, 2);  /* 0C06FFF0 mov.l @(disp,pc),Rn */
	T = (r9 & r9) == 0;  /* 0C06FFF2 tst Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C06FFF6u, 2);  /* 0C06FFF4 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C06FFF6 negc Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06FFF8 tst Rm,Rn */
	IF(0x0C06FFFAu); r2 = T;  /* 0C06FFFA movt Rn */
	r0 |= r6;  /* 0C06FFFC or Rm,Rn */
	r0 |= r2;  /* 0C06FFFE or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C070000 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C070080u, 9); goto L_0C070080; } goto L_0C070006; }  /* 0C070002 bt/s */
L_0C070006: BLKS(0x0C070006u);
	r7 = 0xC2860B0u; UPD(0x0C070008u, 2);  /* 0C070006 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C070008 mov Rm,Rn */
	IF(0x0C07000Au); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07000Cu, 2);  /* 0C07000A mov.b @(r0,Rm),Rn */
	r2 = 0xC3C8690u; UPD(0x0C07000Eu, 1);  /* 0C07000C mov.l @(disp,pc),Rn */
	r8 = r4 & 0xFF;  /* 0C07000E extu.b Rm,Rn */
	r0 = r2;  /* 0C070010 mov Rm,Rn */
	IF(0x0C070012u); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C070014u, 3);  /* 0C070012 mov.b @(r0,Rm),Rn */
	r3 = r9 & 0xFF;  /* 0C070014 extu.b Rm,Rn */
	T = r8 >= r3;  /* 0C070016 cmp/hs Rm,Rn */
	{ u32 c_ = !T; r5 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C070050u, 5); goto L_0C070050; } goto L_0C07001C; }  /* 0C070018 bf/s */
L_0C07001C: BLKS(0x0C07001Cu);
	r9 = 0xC0626E0u; UPD(0x0C07001Eu, 2);  /* 0C07001C mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C07001E mov Rm,Rn */
	r8 = 0x40C04000u; UPD(0x0C070022u, 2);  /* 0C070020 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C070022 mov Rm,Rn */
	r4 = 0xC174094u; UPD(0x0C070026u, 2);  /* 0C070024 mov.l @(disp,pc),Rn */
	IF(0x0C070026u); { u32 t_ = r9; PR = 0x0C07002Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C07002Au); }  /* 0C070026 jsr @Rn */
L_0C07002A: BLKS(0x0C07002Au);
	r4 = 0xC174494u; UPD(0x0C07002Cu, 1);  /* 0C07002A mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFFFu;  /* 0C07002C add #imm,Rn */
	UPD(0x0C07002Eu, 1);
L_0C07002E: BLKS(0x0C07002Eu);
	r5 = r10;  /* 0C07002E mov Rm,Rn */
	r6 = r11;  /* 0C070030 mov Rm,Rn */
	r7 = r8;  /* 0C070032 mov Rm,Rn */
	r1 = r9;  /* 0C070034 mov Rm,Rn */
	UPD(0x0C070036u, 4);
L_0C070036: BLKS(0x0C070036u);
	r15 = r14;  /* 0C070036 mov Rm,Rn */
	IF(0x0C070038u); PR = R32(r15); r15 += 4; UPD(0x0C07003Au, 2);  /* 0C070038 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07003Cu, 1);  /* 0C07003A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07003Eu, 1);  /* 0C07003C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C070040u, 1);  /* 0C07003E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070042u, 1);  /* 0C070040 mov.l @Rm+,Rn */
	IF(0x0C070042u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0626E0u: TAIL(blk_f_0C0626E0); default: JUMPD(tv_); } }  /* 0C070042 jmp @Rn */
L_0C070050: BLKS(0x0C070050u);
	r9 = 0xC0626E0u; UPD(0x0C070052u, 1);  /* 0C070050 mov.l @(disp,pc),Rn */
	r8 = 0xC040C000u; UPD(0x0C070054u, 1);  /* 0C070052 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C070054 mov Rm,Rn */
	r4 = 0xC1740B8u; UPD(0x0C070058u, 2);  /* 0C070056 mov.l @(disp,pc),Rn */
	IF(0x0C070058u); { u32 t_ = r9; PR = 0x0C07005Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C07005Cu); }  /* 0C070058 jsr @Rn */
L_0C07005C: BLKS(0x0C07005Cu);
	r10 += 0xFFFFFFFFu;  /* 0C07005C add #imm,Rn */
	r4 = 0xC1740ACu; UPD(0x0C070060u, 2);  /* 0C07005E mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C070060 mov Rm,Rn */
	r6 = r11;  /* 0C070062 mov Rm,Rn */
	r7 = r8;  /* 0C070064 mov Rm,Rn */
	r1 = r9;  /* 0C070066 mov Rm,Rn */
	r15 = r14;  /* 0C070068 mov Rm,Rn */
	IF(0x0C07006Au); PR = R32(r15); r15 += 4; UPD(0x0C07006Cu, 6);  /* 0C07006A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07006Eu, 1);  /* 0C07006C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C070070u, 1);  /* 0C07006E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C070072u, 1);  /* 0C070070 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070074u, 1);  /* 0C070072 mov.l @Rm+,Rn */
	IF(0x0C070074u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0626E0u: TAIL(blk_f_0C0626E0); default: JUMPD(tv_); } }  /* 0C070074 jmp @Rn */
L_0C070080: BLKS(0x0C070080u);
	r6 = 0xC3CA6F8u; UPD(0x0C070082u, 1);  /* 0C070080 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C070084u, 1);  /* 0C070082 mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C070084 extu.b Rm,Rn */
	T = r0 > r7;  /* 0C070086 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r5 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0700F0u, 5); goto L_0C0700F0; } goto L_0C07008C; }  /* 0C070088 bf/s */
L_0C07008C: BLKS(0x0C07008Cu);
	r5 = 0xC2860B0u; UPD(0x0C07008Eu, 2);  /* 0C07008C mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C07008E mov Rm,Rn */
	IF(0x0C070090u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C070092u, 2);  /* 0C070090 mov.b @(r0,Rm),Rn */
	r2 = 0xC3C8690u; UPD(0x0C070094u, 1);  /* 0C070092 mov.l @(disp,pc),Rn */
	r8 = r7 & 0xFF;  /* 0C070094 extu.b Rm,Rn */
	r0 = r2;  /* 0C070096 mov Rm,Rn */
	IF(0x0C070098u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07009Au, 3);  /* 0C070098 mov.b @(r0,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C07009A extu.b Rm,Rn */
	T = r8 >= r3;  /* 0C07009C cmp/hs Rm,Rn */
	{ u32 c_ = !T; r6 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0700C0u, 5); goto L_0C0700C0; } goto L_0C0700A2; }  /* 0C07009E bf/s */
L_0C0700A2: BLKS(0x0C0700A2u);
	r9 = 0xC0626E0u; UPD(0x0C0700A4u, 2);  /* 0C0700A2 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C0700A4 mov Rm,Rn */
	r8 = 0xC0C04000u; UPD(0x0C0700A8u, 2);  /* 0C0700A6 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C0700A8 mov Rm,Rn */
	r4 = 0xC174094u; UPD(0x0C0700ACu, 2);  /* 0C0700AA mov.l @(disp,pc),Rn */
	IF(0x0C0700ACu); { u32 t_ = r9; PR = 0x0C0700B0u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0700B0u); }  /* 0C0700AC jsr @Rn */
L_0C0700B0: BLKS(0x0C0700B0u);
	r4 = 0xC1744A0u; UPD(0x0C0700B2u, 1);  /* 0C0700B0 mov.l @(disp,pc),Rn */
	{ r10 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C07002Eu, 3); goto L_0C07002E; }  /* 0C0700B2 bra */
L_0C0700C0: BLKS(0x0C0700C0u);
	r9 = 0xC0626E0u; UPD(0x0C0700C2u, 1);  /* 0C0700C0 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C0700C2 mov Rm,Rn */
	r8 = 0xC040C000u; UPD(0x0C0700C6u, 2);  /* 0C0700C4 mov.l @(disp,pc),Rn */
	r4 = 0xC1740B8u; UPD(0x0C0700C8u, 1);  /* 0C0700C6 mov.l @(disp,pc),Rn */
	IF(0x0C0700C8u); { u32 t_ = r9; PR = 0x0C0700CCu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0700CCu); }  /* 0C0700C8 jsr @Rn */
L_0C0700CC: BLKS(0x0C0700CCu);
	r10 += 0xFFFFFFFFu;  /* 0C0700CC add #imm,Rn */
	r4 = 0xC1740ACu; UPD(0x0C0700D0u, 2);  /* 0C0700CE mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C0700D0 mov Rm,Rn */
	r6 = r11;  /* 0C0700D2 mov Rm,Rn */
	IF(0x0C0700D4u); { u32 t_ = r9; PR = 0x0C0700D8u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0700D8u); }  /* 0C0700D4 jsr @Rn */
L_0C0700D8: BLKS(0x0C0700D8u);
	r15 = r14;  /* 0C0700D8 mov Rm,Rn */
	IF(0x0C0700DAu); PR = R32(r15); r15 += 4; UPD(0x0C0700DCu, 2);  /* 0C0700DA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0700DEu, 1);  /* 0C0700DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0700E0u, 1);  /* 0C0700DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0700E2u, 1);  /* 0C0700E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0700E4u, 1);  /* 0C0700E2 mov.l @Rm+,Rn */
	IF(0x0C0700E4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0700E4 rts */
L_0C0700F0: BLKS(0x0C0700F0u);
	r9 = 0xC0626E0u; UPD(0x0C0700F2u, 1);  /* 0C0700F0 mov.l @(disp,pc),Rn */
	r4 = 0xC174088u; UPD(0x0C0700F4u, 1);  /* 0C0700F2 mov.l @(disp,pc),Rn */
	r7 = 0xC0C04000u; UPD(0x0C0700F6u, 1);  /* 0C0700F4 mov.l @(disp,pc),Rn */
	IF(0x0C0700F6u); { u32 t_ = r9; PR = 0x0C0700FAu; r6 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0700FAu); }  /* 0C0700F6 jsr @Rn */
L_0C0700FA: BLKS(0x0C0700FAu);
	r10 += 0xFFFFFFFFu;  /* 0C0700FA add #imm,Rn */
	r4 = 0xC1740A0u; UPD(0x0C0700FEu, 2);  /* 0C0700FC mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C0700FE mov Rm,Rn */
	r7 = 0x80808000u; UPD(0x0C070102u, 2);  /* 0C070100 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C070102 mov Rm,Rn */
	{ r1 = r9; /* slot mov Rm,Rn */ UPD(0x0C070036u, 4); goto L_0C070036; }  /* 0C070104 bra */
}

/* FUN_0c070160 */
void blk_f_0C070160(sh3_t *c)
{
	LOCALS;
L_0C070160: BLKS(0x0C070160u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C070162u, 1);  /* 0C070160 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s8)r5;  /* 0C070162 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C070166u, 2);  /* 0C070164 mov.l Rm,@-Rn */
	r6 = (u32)(s32)(s8)r6;  /* 0C070166 exts.b Rm,Rn */
	IF(0x0C070168u); r15 -= 4; W32(r15, PR); UPD(0x0C07016Au, 2);  /* 0C070168 sts.l pr,@-Rn */
	r0 = 0xC174BF8u; UPD(0x0C07016Cu, 1);  /* 0C07016A mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFD8u;  /* 0C07016C add #imm,Rn */
	r14 = r15;  /* 0C07016E mov Rm,Rn */
	W32(r14 + 0x10u, r0); UPD(0x0C070172u, 3);  /* 0C070170 mov.l Rm,@(disp,Rn) */
	r8 = 0xC174BB8u; UPD(0x0C070174u, 1);  /* 0C070172 mov.l @(disp,pc),Rn */
	r7 = 0xC174BC8u; UPD(0x0C070176u, 1);  /* 0C070174 mov.l @(disp,pc),Rn */
	r3 = 0xC174BD8u; UPD(0x0C070178u, 1);  /* 0C070176 mov.l @(disp,pc),Rn */
	r2 = 0xC174BE8u; UPD(0x0C07017Au, 1);  /* 0C070178 mov.l @(disp,pc),Rn */
	r0 = 0xC174C48u; UPD(0x0C07017Cu, 1);  /* 0C07017A mov.l @(disp,pc),Rn */
	W32(r14, r8); UPD(0x0C07017Eu, 1);  /* 0C07017C mov.l Rm,@Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C070180u, 1);  /* 0C07017E mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r3); UPD(0x0C070182u, 1);  /* 0C070180 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r2); UPD(0x0C070184u, 1);  /* 0C070182 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x24u, r0); UPD(0x0C070186u, 1);  /* 0C070184 mov.l Rm,@(disp,Rn) */
	r8 = 0xC174C08u; UPD(0x0C070188u, 1);  /* 0C070186 mov.l @(disp,pc),Rn */
	r7 = 0xC174C18u; UPD(0x0C07018Au, 1);  /* 0C070188 mov.l @(disp,pc),Rn */
	r3 = 0xC174C28u; UPD(0x0C07018Cu, 1);  /* 0C07018A mov.l @(disp,pc),Rn */
	r2 = 0xC174C38u; UPD(0x0C07018Eu, 1);  /* 0C07018C mov.l @(disp,pc),Rn */
	r0 = 0x4AEu; UPD(0x0C070190u, 1);  /* 0C07018E mov.w @(disp,pc),Rn */
	W32(r14 + 0x14u, r8); UPD(0x0C070192u, 1);  /* 0C070190 mov.l Rm,@(disp,Rn) */
	T = (s32)r4 > (s32)r0;  /* 0C070192 cmp/gt Rm,Rn */
	W32(r14 + 0x18u, r7); UPD(0x0C070196u, 2);  /* 0C070194 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x1Cu, r3); UPD(0x0C070198u, 1);  /* 0C070196 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r14 + 0x20u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C070280u, 3); goto L_0C070280; } UPD(0x0C07019Cu, 1); goto L_0C07019C; }  /* 0C070198 bf/s */
L_0C07019C: BLKS(0x0C07019Cu);
	r8 = 0xC174C58u; UPD(0x0C07019Eu, 1);  /* 0C07019C mov.l @(disp,pc),Rn */
	r0 = 0x3u;  /* 0C07019E mov #imm,Rn */
	W8(r8, r0); UPD(0x0C0701A2u, 2);  /* 0C0701A0 mov.b Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C0701A4u, 1);  /* 0C0701A2 mov.b @Rm,Rn */
L_0C0701A4: BLKS(0x0C0701A4u);
	r3 = 0x3u;  /* 0C0701A4 mov #imm,Rn */
	T = r2 > r3;  /* 0C0701A6 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0701ECu, 5); goto L_0C0701EC; }  /* 0C0701A8 bt */
L_0C0701AA: BLKS(0x0C0701AAu);
	r0 = 0xC0701B4u;  /* 0C0701AA mova @(disp,pc),r0 */
	IF(0x0C0701ACu); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0701AEu, 2);  /* 0C0701AC mov.b @(r0,Rm),Rn */
	r7 = r7 & 0xFF;  /* 0C0701AE extu.b Rm,Rn */
	IF(0x0C0701B0u); { u32 tv_ = (r7 + 0x0C0701B4u); u32 t_ = PHYS(tv_); IF(0x0C0701B2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C070270u: goto L_0C070270; default: JUMPD(tv_); } }  /* 0C0701B0 braf Rn */
L_0C0701EC: BLKS(0x0C0701ECu);
	r14 += 0x28u;  /* 0C0701EC add #imm,Rn */
	r15 = r14;  /* 0C0701EE mov Rm,Rn */
	IF(0x0C0701F0u); PR = R32(r15); r15 += 4; UPD(0x0C0701F2u, 3);  /* 0C0701F0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0701F4u, 1);  /* 0C0701F2 mov.l @Rm+,Rn */
	IF(0x0C0701F4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0701F4 rts */
L_0C070212: BLKS(0x0C070212u);
	{ W8(r8, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C0701ECu, 3); goto L_0C0701EC; }  /* 0C070212 bra */
L_0C070270: BLKS(0x0C070270u);
	r0 = 0xC0702E0u; UPD(0x0C070272u, 1);  /* 0C070270 mov.l @(disp,pc),Rn */
	r4 = r5;  /* 0C070272 mov Rm,Rn */
	IF(0x0C070274u); { u32 t_ = r0; PR = 0x0C070278u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0702E0, 0x0C0702E0u, 0x0C070278u); }  /* 0C070274 jsr @Rn */
L_0C070278: BLKS(0x0C070278u);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C070212u, 3); goto L_0C070212; }  /* 0C070278 bra */
L_0C070280: BLKS(0x0C070280u);
	r8 = 0xC174C58u; UPD(0x0C070282u, 1);  /* 0C070280 mov.l @(disp,pc),Rn */
	{ r2 = (u32)(s32)(s8)R8(r8); /* slot mov.b @Rm,Rn */ UPD(0x0C0701A4u, 3); goto L_0C0701A4; }  /* 0C070282 bra */
}

void blk_f_0C0701C0(sh3_t *c)
{
	LOCALS;
L_0C0701C0: BLKS(0x0C0701C0u);
	r0 = 0xC0C2310u; UPD(0x0C0701C2u, 1);  /* 0C0701C0 mov.l @(disp,pc),Rn */
	IF(0x0C0701C2u); { u32 t_ = r0; PR = 0x0C0701C6u; r5 = 0x78u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C0701C6u); }  /* 0C0701C2 jsr @Rn */
L_0C0701C6: BLKS(0x0C0701C6u);
	r1 = r0;  /* 0C0701C6 mov Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C0701CAu, 2);  /* 0C0701C8 mov.b @Rm,Rn */
	r0 = 0xC2074F8u; UPD(0x0C0701CCu, 1);  /* 0C0701CA mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0701CC add #imm,Rn */
	W8(r0, r1); UPD(0x0C0701D0u, 2);  /* 0C0701CE mov.b Rm,@Rn */
	W8(r8, r4); UPD(0x0C0701D2u, 1);  /* 0C0701D0 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)r1;  /* 0C0701D2 exts.b Rm,Rn */
	r2 = 0xC174B90u; UPD(0x0C0701D6u, 2);  /* 0C0701D4 mov.l @(disp,pc),Rn */
	IF(0x0C0701D6u); r0 <<= 2;  /* 0C0701D6 shll2 Rn */
	r8 = 0xC0C2110u; UPD(0x0C0701DAu, 2);  /* 0C0701D8 mov.l @(disp,pc),Rn */
	r4 = 0x5Cu;  /* 0C0701DA mov #imm,Rn */
	IF(0x0C0701DCu); r6 = R32(r0 + r2); UPD(0x0C0701DEu, 2);  /* 0C0701DC mov.l @(r0,Rm),Rn */
	r5 = 0xC2074FCu; UPD(0x0C0701E0u, 1);  /* 0C0701DE mov.l @(disp,pc),Rn */
	IF(0x0C0701E0u); { u32 t_ = r8; PR = 0x0C0701E4u; W32(r5, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0701E4u); }  /* 0C0701E0 jsr @Rn */
L_0C0701E4: BLKS(0x0C0701E4u);
	r4 = 0x97u; UPD(0x0C0701E6u, 1);  /* 0C0701E4 mov.w @(disp,pc),Rn */
	IF(0x0C0701E6u); { u32 t_ = r8; PR = 0x0C0701EAu; IF(0x0C0701E8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0701EAu); }  /* 0C0701E6 jsr @Rn */
L_0C0701EA: BLKS(0x0C0701EAu);
	IF(0x0C0701EAu); ;  /* 0C0701EA nop */
	r14 += 0x28u;  /* 0C0701EC add #imm,Rn */
	r15 = r14;  /* 0C0701EE mov Rm,Rn */
	IF(0x0C0701F0u); PR = R32(r15); r15 += 4; UPD(0x0C0701F2u, 4);  /* 0C0701F0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0701F4u, 1);  /* 0C0701F2 mov.l @Rm+,Rn */
	IF(0x0C0701F4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0701F4 rts */
}

void blk_f_0C070200(sh3_t *c)
{
	LOCALS;
	goto L_0C070200;
L_0C0701EC: BLKS(0x0C0701ECu);
	r14 += 0x28u;  /* 0C0701EC add #imm,Rn */
	r15 = r14;  /* 0C0701EE mov Rm,Rn */
	IF(0x0C0701F0u); PR = R32(r15); r15 += 4; UPD(0x0C0701F2u, 3);  /* 0C0701F0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0701F4u, 1);  /* 0C0701F2 mov.l @Rm+,Rn */
	IF(0x0C0701F4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0701F4 rts */
L_0C070200: BLKS(0x0C070200u);
	r7 = 0xC2074FCu; UPD(0x0C070202u, 1);  /* 0C070200 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C070202 mov #imm,Rn */
	r2 = R32(r7); UPD(0x0C070206u, 2);  /* 0C070204 mov.l @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C070208u, 1);  /* 0C070206 mov.b @Rm,Rn */
	r3 = r0 & 0xFF;  /* 0C070208 extu.b Rm,Rn */
	T = r3 > r4;  /* 0C07020A cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C070220u, 5); goto L_0C070220; }  /* 0C07020C bf */
L_0C07020E: BLKS(0x0C07020Eu);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C070210u, 1);  /* 0C07020E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C070210 add #imm,Rn */
	{ W8(r8, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C0701ECu, 4); goto L_0C0701EC; }  /* 0C070212 bra */
L_0C070220: BLKS(0x0C070220u);
	r2 += 0x1u;  /* 0C070220 add #imm,Rn */
	W32(r7, r2); UPD(0x0C070224u, 2);  /* 0C070222 mov.l Rm,@Rn */
	r3 += r3;  /* 0C070224 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r4 = v_; } UPD(0x0C070228u, 2);  /* 0C070226 mov.b @Rm+,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C070228 add #imm,Rn */
	r8 = 0xC2074F8u; UPD(0x0C07022Cu, 2);  /* 0C07022A mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C07022C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C070230u, 2);  /* 0C07022E mov.b @Rm,Rn */
	r3 = r4 & 0xFF;  /* 0C070230 extu.b Rm,Rn */
	W32(r7, r2); UPD(0x0C070234u, 2);  /* 0C070232 mov.l Rm,@Rn */
	IF(0x0C070234u); r0 <<= 2;  /* 0C070234 shll2 Rn */
	r7 = 0x2u;  /* 0C070236 mov #imm,Rn */
	r8 = 0xC062560u; UPD(0x0C07023Au, 3);  /* 0C070238 mov.l @(disp,pc),Rn */
	r3 += r3;  /* 0C07023A add Rm,Rn */
	W32(r15, r7); UPD(0x0C07023Eu, 2);  /* 0C07023C mov.l Rm,@Rn */
	r6 += r3;  /* 0C07023E add Rm,Rn */
	IF(0x0C070240u); r4 = R32(r0 + r14); UPD(0x0C070242u, 2);  /* 0C070240 mov.l @(r0,Rm),Rn */
	IF(0x0C070242u); { u32 t_ = r8; PR = 0x0C070246u; r7 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062560, 0x0C062560u, 0x0C070246u); }  /* 0C070242 jsr @Rn */
L_0C070246: BLKS(0x0C070246u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0701ECu, 3); goto L_0C0701EC; }  /* 0C070246 bra */
}

void blk_f_0C070250(sh3_t *c)
{
	LOCALS;
	goto L_0C070250;
L_0C0701EC: BLKS(0x0C0701ECu);
	r14 += 0x28u;  /* 0C0701EC add #imm,Rn */
	UPD(0x0C0701EEu, 1);
L_0C0701EE: BLKS(0x0C0701EEu);
	r15 = r14;  /* 0C0701EE mov Rm,Rn */
	IF(0x0C0701F0u); PR = R32(r15); r15 += 4; UPD(0x0C0701F2u, 2);  /* 0C0701F0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0701F4u, 1);  /* 0C0701F2 mov.l @Rm+,Rn */
	IF(0x0C0701F4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0701F4 rts */
L_0C07020E: BLKS(0x0C07020Eu);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C070210u, 1);  /* 0C07020E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C070210 add #imm,Rn */
	{ W8(r8, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C0701ECu, 4); goto L_0C0701EC; }  /* 0C070212 bra */
L_0C070250: BLKS(0x0C070250u);
	r0 = 0xC0C2310u; UPD(0x0C070252u, 1);  /* 0C070250 mov.l @(disp,pc),Rn */
	IF(0x0C070252u); { u32 t_ = r0; PR = 0x0C070256u; r5 = 0x78u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C070256u); }  /* 0C070252 jsr @Rn */
L_0C070256: BLKS(0x0C070256u);
	r2 = 0xC2074F8u; UPD(0x0C070258u, 1);  /* 0C070256 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C07025Au, 1);  /* 0C070258 mov.b @Rm,Rn */
	T = r6 == r0;  /* 0C07025A cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C07020Eu, 4); goto L_0C07020E; }  /* 0C07025C bf */
L_0C07025E: BLKS(0x0C07025Eu);
	r14 += 0x28u;  /* 0C07025E add #imm,Rn */
	{ IF(0x0C070262u); ; /* slot nop */ UPD(0x0C0701EEu, 4); goto L_0C0701EE; }  /* 0C070260 bra */
}

/* FUN_0c0702e0 */
void blk_f_0C0702E0(sh3_t *c)
{
	LOCALS;
L_0C0702E0: BLKS(0x0C0702E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0702E2u, 1);  /* 0C0702E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0702E4u, 1);  /* 0C0702E2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r4;  /* 0C0702E4 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0702E8u, 2);  /* 0C0702E6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r5;  /* 0C0702E8 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0702ECu, 2);  /* 0C0702EA mov.l Rm,@-Rn */
	r5 = r8;  /* 0C0702EC mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0702F0u, 2);  /* 0C0702EE mov.l Rm,@-Rn */
	r6 = r9;  /* 0C0702F0 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0702F4u, 2);  /* 0C0702F2 mov.l Rm,@-Rn */
	r8 += 0x2u;  /* 0C0702F4 add #imm,Rn */
	r12 = 0xC062720u; UPD(0x0C0702F8u, 2);  /* 0C0702F6 mov.l @(disp,pc),Rn */
	IF(0x0C0702F8u); r15 -= 4; W32(r15, PR); UPD(0x0C0702FAu, 1);  /* 0C0702F8 sts.l pr,@-Rn */
	r10 = 0xC174C5Cu; UPD(0x0C0702FCu, 1);  /* 0C0702FA mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0702FC mov Rm,Rn */
	r11 = 0x80808000u; UPD(0x0C070300u, 2);  /* 0C0702FE mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C070300 mov Rm,Rn */
	IF(0x0C070302u); { u32 t_ = r12; PR = 0x0C070306u; r7 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062720, 0x0C062720u, 0x0C070306u); }  /* 0C070302 jsr @Rn */
L_0C070306: BLKS(0x0C070306u);
	r5 = r8;  /* 0C070306 mov Rm,Rn */
	r4 = r10;  /* 0C070308 mov Rm,Rn */
	r6 = r9;  /* 0C07030A mov Rm,Rn */
	r7 = r11;  /* 0C07030C mov Rm,Rn */
	IF(0x0C07030Eu); { u32 t_ = r12; PR = 0x0C070312u; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 6); CALLP(t_, blk_f_0C062720, 0x0C062720u, 0x0C070312u); }  /* 0C07030E jsr @Rn */
L_0C070312: BLKS(0x0C070312u);
	r5 = r8;  /* 0C070312 mov Rm,Rn */
	r4 = r10;  /* 0C070314 mov Rm,Rn */
	r6 = r9;  /* 0C070316 mov Rm,Rn */
	r7 = r11;  /* 0C070318 mov Rm,Rn */
	IF(0x0C07031Au); { u32 t_ = r12; PR = 0x0C07031Eu; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 6); CALLP(t_, blk_f_0C062720, 0x0C062720u, 0x0C07031Eu); }  /* 0C07031A jsr @Rn */
L_0C07031E: BLKS(0x0C07031Eu);
	r5 = r8;  /* 0C07031E mov Rm,Rn */
	r4 = r10;  /* 0C070320 mov Rm,Rn */
	r6 = r9;  /* 0C070322 mov Rm,Rn */
	r7 = r11;  /* 0C070324 mov Rm,Rn */
	IF(0x0C070326u); { u32 t_ = r12; PR = 0x0C07032Au; r8 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 6); CALLP(t_, blk_f_0C062720, 0x0C062720u, 0x0C07032Au); }  /* 0C070326 jsr @Rn */
L_0C07032A: BLKS(0x0C07032Au);
	r4 = r10;  /* 0C07032A mov Rm,Rn */
	r5 = r8;  /* 0C07032C mov Rm,Rn */
	r6 = r9;  /* 0C07032E mov Rm,Rn */
	r7 = r11;  /* 0C070330 mov Rm,Rn */
	r0 = r12;  /* 0C070332 mov Rm,Rn */
	r15 = r14;  /* 0C070334 mov Rm,Rn */
	IF(0x0C070336u); PR = R32(r15); r15 += 4; UPD(0x0C070338u, 7);  /* 0C070336 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07033Au, 1);  /* 0C070338 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07033Cu, 1);  /* 0C07033A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07033Eu, 1);  /* 0C07033C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C070340u, 1);  /* 0C07033E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070342u, 1);  /* 0C070340 mov.l @Rm+,Rn */
	IF(0x0C070342u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C062720u: TAIL(blk_f_0C062720); default: JUMPD(tv_); } }  /* 0C070342 jmp @Rn */
}

/* FUN_0c070360 */
void blk_f_0C070360(sh3_t *c)
{
	LOCALS;
L_0C070360: BLKS(0x0C070360u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C070362u, 1);  /* 0C070360 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C070362 exts.b Rm,Rn */
	IF(0x0C070364u); r15 -= 4; W32(r15, PR); UPD(0x0C070366u, 2);  /* 0C070364 sts.l pr,@-Rn */
	r6 = (u32)(s32)(s8)r5;  /* 0C070366 exts.b Rm,Rn */
	r5 = r0;  /* 0C070368 mov Rm,Rn */
	r14 = r15;  /* 0C07036A mov Rm,Rn */
	r0 = 0xC062560u; UPD(0x0C07036Eu, 4);  /* 0C07036C mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07036E add #imm,Rn */
	r3 = 0x1Au;  /* 0C070370 mov #imm,Rn */
	W32(r15, r3); UPD(0x0C070374u, 3);  /* 0C070372 mov.l Rm,@Rn */
	r4 = 0xC174C64u; UPD(0x0C070376u, 1);  /* 0C070374 mov.l @(disp,pc),Rn */
	IF(0x0C070376u); { u32 t_ = r0; PR = 0x0C07037Au; r7 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062560, 0x0C062560u, 0x0C07037Au); }  /* 0C070376 jsr @Rn */
L_0C07037A: BLKS(0x0C07037Au);
	r15 = r14;  /* 0C07037A mov Rm,Rn */
	IF(0x0C07037Cu); PR = R32(r15); r15 += 4; UPD(0x0C07037Eu, 2);  /* 0C07037C lds.l @Rn+,pr */
	IF(0x0C07037Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07037E rts */
}

/* FUN_0c070390 */
void blk_f_0C070390(sh3_t *c)
{
	LOCALS;
L_0C070390: BLKS(0x0C070390u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C070392u, 1);  /* 0C070390 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C070392 exts.b Rm,Rn */
	IF(0x0C070394u); r15 -= 4; W32(r15, PR); UPD(0x0C070396u, 2);  /* 0C070394 sts.l pr,@-Rn */
	r6 = (u32)(s32)(s8)r5;  /* 0C070396 exts.b Rm,Rn */
	r5 = r0;  /* 0C070398 mov Rm,Rn */
	r14 = r15;  /* 0C07039A mov Rm,Rn */
	r0 = 0xC062560u; UPD(0x0C07039Eu, 4);  /* 0C07039C mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07039E add #imm,Rn */
	r3 = 0x1Au;  /* 0C0703A0 mov #imm,Rn */
	W32(r15, r3); UPD(0x0C0703A4u, 3);  /* 0C0703A2 mov.l Rm,@Rn */
	r4 = 0xC174E04u; UPD(0x0C0703A6u, 1);  /* 0C0703A4 mov.l @(disp,pc),Rn */
	IF(0x0C0703A6u); { u32 t_ = r0; PR = 0x0C0703AAu; r7 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062560, 0x0C062560u, 0x0C0703AAu); }  /* 0C0703A6 jsr @Rn */
L_0C0703AA: BLKS(0x0C0703AAu);
	r15 = r14;  /* 0C0703AA mov Rm,Rn */
	IF(0x0C0703ACu); PR = R32(r15); r15 += 4; UPD(0x0C0703AEu, 2);  /* 0C0703AC lds.l @Rn+,pr */
	IF(0x0C0703AEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0703AE rts */
}

/* FUN_0c0703c0 */
void blk_f_0C0703C0(sh3_t *c)
{
	LOCALS;
L_0C0703C0: BLKS(0x0C0703C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0703C2u, 1);  /* 0C0703C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0703C4u, 1);  /* 0C0703C2 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0703C6u, 1);  /* 0C0703C4 mov.l Rm,@-Rn */
	r2 = 0xC3C86ACu; UPD(0x0C0703C8u, 1);  /* 0C0703C6 mov.l @(disp,pc),Rn */
	IF(0x0C0703C8u); r15 -= 4; W32(r15, PR); UPD(0x0C0703CAu, 1);  /* 0C0703C8 sts.l pr,@-Rn */
	r0 = R32(r2); UPD(0x0C0703CCu, 1);  /* 0C0703CA mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0703CC tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0703D6u, 4); goto L_0C0703D6; } goto L_0C0703D2; }  /* 0C0703CE bt/s */
L_0C0703D2: BLKS(0x0C0703D2u);
	{ IF(0x0C0703D4u); ; /* slot nop */ UPD(0x0C07053Eu, 4); goto L_0C07053E; }  /* 0C0703D2 bra */
L_0C0703D6: BLKS(0x0C0703D6u);
	r3 = 0xC3CC308u; UPD(0x0C0703D8u, 1);  /* 0C0703D6 mov.l @(disp,pc),Rn */
	r0 = R32(r3); UPD(0x0C0703DAu, 1);  /* 0C0703D8 mov.l @Rm,Rn */
	r4 = 0x124u; UPD(0x0C0703DCu, 1);  /* 0C0703DA mov.w @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C0703DC tst Rm,Rn */
	if (T) { UPD(0x0C0703E2u, 4); goto L_0C0703E2; }  /* 0C0703DE bt */
L_0C0703E0: BLKS(0x0C0703E0u);
	r4 += 0xFFFFFFF0u;  /* 0C0703E0 add #imm,Rn */
	UPD(0x0C0703E2u, 1);
L_0C0703E2: BLKS(0x0C0703E2u);
	r6 = 0xC22E024u; UPD(0x0C0703E4u, 1);  /* 0C0703E2 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0703E6u, 1);  /* 0C0703E4 mov.b @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0703E6 tst Rm,Rn */
	if (!T) { UPD(0x0C0703FAu, 4); goto L_0C0703FA; }  /* 0C0703E8 bf */
L_0C0703EA: BLKS(0x0C0703EAu);
	r8 = 0xC29D194u; UPD(0x0C0703ECu, 1);  /* 0C0703EA mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C0703EEu, 1);  /* 0C0703EC mov.b @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0703EE tst Rm,Rn */
	if (!T) { UPD(0x0C0703FAu, 4); goto L_0C0703FA; }  /* 0C0703F0 bf */
L_0C0703F2: BLKS(0x0C0703F2u);
	r2 = 0xC3C8474u; UPD(0x0C0703F4u, 1);  /* 0C0703F2 mov.l @(disp,pc),Rn */
	r9 = R32(r2); UPD(0x0C0703F6u, 1);  /* 0C0703F4 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0703F6 tst Rm,Rn */
	if (T) { UPD(0x0C0703FEu, 4); goto L_0C0703FE; }  /* 0C0703F8 bt */
L_0C0703FA: BLKS(0x0C0703FAu);
	{ IF(0x0C0703FCu); ; /* slot nop */ UPD(0x0C070620u, 3); goto L_0C070620; }  /* 0C0703FA bra */
L_0C0703FE: BLKS(0x0C0703FEu);
	r5 = 0xC3CC30Cu; UPD(0x0C070400u, 1);  /* 0C0703FE mov.l @(disp,pc),Rn */
	r1 = R32(r5); UPD(0x0C070402u, 1);  /* 0C070400 mov.l @Rm,Rn */
	T = (s32)r1 >= (s32)r4;  /* 0C070402 cmp/ge Rm,Rn */
	{ u32 c_ = T; T = (s32)r1 > (s32)r4; /* slot cmp/gt Rm,Rn */ if (c_) { UPD(0x0C07040Eu, 4); goto L_0C07040E; } goto L_0C070408; }  /* 0C070404 bt/s */
L_0C070408: BLKS(0x0C070408u);
	r1 += 0x1u;  /* 0C070408 add #imm,Rn */
	W32(r5, r1); UPD(0x0C07040Cu, 3);  /* 0C07040A mov.l Rm,@Rn */
	T = (s32)r1 > (s32)r4;  /* 0C07040C cmp/gt Rm,Rn */
	UPD(0x0C07040Eu, 1);
L_0C07040E: BLKS(0x0C07040Eu);
	if (!T) { UPD(0x0C070414u, 3); goto L_0C070414; }  /* 0C07040E bf */
L_0C070410: BLKS(0x0C070410u);
	r1 += 0xFFFFFFFFu;  /* 0C070410 add #imm,Rn */
	W32(r5, r1); UPD(0x0C070414u, 2);  /* 0C070412 mov.l Rm,@Rn */
L_0C070414: BLKS(0x0C070414u);
	r8 = R32(r5); UPD(0x0C070416u, 1);  /* 0C070414 mov.l @Rm,Rn */
L_0C070416: BLKS(0x0C070416u);
	r0 = 0x50u;  /* 0C070416 mov #imm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C07041Au, 2);  /* 0C070418 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C07041A mov #imm,Rn */
	r4 = 0x0u;  /* 0C07041C mov #imm,Rn */
	r6 = 0x0u;  /* 0C07041E mov #imm,Rn */
	UPD(0x0C070420u, 3);
L_0C070420: BLKS(0x0C070420u);
	r3 = r6;  /* 0C070420 mov Rm,Rn */
	r3 += r5;  /* 0C070422 add Rm,Rn */
	r7 = R32(r3); UPD(0x0C070426u, 3);  /* 0C070424 mov.l @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C070426 tst Rm,Rn */
	if (T) { UPD(0x0C070484u, 4); goto L_0C070484; }  /* 0C070428 bt */
L_0C07042A: BLKS(0x0C07042Au);
	r1 = R32(r3 + 0x14u); UPD(0x0C07042Cu, 1);  /* 0C07042A mov.l @(disp,Rm),Rn */
	r2 = 0xC3C4048u; UPD(0x0C07042Eu, 1);  /* 0C07042C mov.l @(disp,pc),Rn */
	r7 = R32(r2); UPD(0x0C070430u, 1);  /* 0C07042E mov.l @Rm,Rn */
	r2 = 0xFFFF0000u; UPD(0x0C070432u, 1);  /* 0C070430 mov.l @(disp,pc),Rn */
	r7 &= r2;  /* 0C070432 and Rm,Rn */
	r1 -= r7;  /* 0C070434 sub Rm,Rn */
	IF(0x0C070436u); r1 >>= 16;  /* 0C070436 shlr16 Rn */
	r7 = r0;  /* 0C070438 mov Rm,Rn */
	r7 -= r1;  /* 0C07043A sub Rm,Rn */
	r7 += 0x28u;  /* 0C07043C add #imm,Rn */
	IF(0x0C07043Eu); T = (s32)r7 >= 0;  /* 0C07043E cmp/pz Rn */
	if (T) { UPD(0x0C070448u, 10); goto L_0C070448; }  /* 0C070440 bt */
L_0C070442: BLKS(0x0C070442u);
	r7 = 0u - r7;  /* 0C070442 neg Rm,Rn */
	{ r1 = R32(r3 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C07044Au, 4); goto L_0C07044A; }  /* 0C070444 bra */
L_0C070448: BLKS(0x0C070448u);
	r1 = R32(r3 + 0x10u); UPD(0x0C07044Au, 1);  /* 0C070448 mov.l @(disp,Rm),Rn */
L_0C07044A: BLKS(0x0C07044Au);
	r2 = (r1 >> 16) | (r1 << 16);  /* 0C07044A swap.w Rm,Rn */
	r3 = (u32)(s32)(s16)r2;  /* 0C07044C exts.w Rm,Rn */
	r2 = r8;  /* 0C07044E mov Rm,Rn */
	r2 -= r3;  /* 0C070450 sub Rm,Rn */
	r2 += 0x8u;  /* 0C070452 add #imm,Rn */
	IF(0x0C070454u); T = (s32)r2 >= 0;  /* 0C070454 cmp/pz Rn */
	if (T) { UPD(0x0C07045Eu, 9); goto L_0C07045E; }  /* 0C070456 bt */
L_0C070458: BLKS(0x0C070458u);
	r2 = 0u - r2;  /* 0C070458 neg Rm,Rn */
	{ r3 = 0x3Fu; /* slot mov #imm,Rn */ UPD(0x0C070460u, 4); goto L_0C070460; }  /* 0C07045A bra */
L_0C07045E: BLKS(0x0C07045Eu);
	r3 = 0x3Fu;  /* 0C07045E mov #imm,Rn */
	UPD(0x0C070460u, 1);
L_0C070460: BLKS(0x0C070460u);
	T = (s32)r7 > (s32)r3;  /* 0C070460 cmp/gt Rm,Rn */
	{ u32 c_ = T; r3 = 0xFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C070484u, 4); goto L_0C070484; } goto L_0C070466; }  /* 0C070462 bt/s */
L_0C070466: BLKS(0x0C070466u);
	T = (s32)r2 > (s32)r3;  /* 0C070466 cmp/gt Rm,Rn */
	{ u32 c_ = T; r7 += 0xFFFFFFD0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C070484u, 5); goto L_0C070484; } goto L_0C07046C; }  /* 0C070468 bt/s */
L_0C07046C: BLKS(0x0C07046Cu);
	IF(0x0C07046Cu); T = (s32)r7 >= 0;  /* 0C07046C cmp/pz Rn */
	if (T) { UPD(0x0C070476u, 5); goto L_0C070476; }  /* 0C07046E bt */
L_0C070470: BLKS(0x0C070470u);
	r7 = 0x0u;  /* 0C070470 mov #imm,Rn */
	{ r1 = r7; /* slot mov Rm,Rn */ UPD(0x0C070478u, 4); goto L_0C070478; }  /* 0C070472 bra */
L_0C070476: BLKS(0x0C070476u);
	r1 = r7;  /* 0C070476 mov Rm,Rn */
	UPD(0x0C070478u, 1);
L_0C070478: BLKS(0x0C070478u);
	r1 += r2;  /* 0C070478 add Rm,Rn */
	r7 = 0x3u;  /* 0C07047A mov #imm,Rn */
	IF(0x0C07047Cu); ARG0(0x417Du); { s32 s_ = (s32)r7; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C07047C shld Rm,Rn */
	T = (s32)r9 >= (s32)r1;  /* 0C07047E cmp/ge Rm,Rn */
	if (T) { UPD(0x0C070484u, 7); goto L_0C070484; }  /* 0C070480 bt */
L_0C070482: BLKS(0x0C070482u);
	r9 = r1;  /* 0C070482 mov Rm,Rn */
	UPD(0x0C070484u, 1);
L_0C070484: BLKS(0x0C070484u);
	r3 = 0x2A0u; UPD(0x0C070486u, 1);  /* 0C070484 mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C070486 add #imm,Rn */
	r2 = 0x1u;  /* 0C070488 mov #imm,Rn */
	T = (s32)r4 > (s32)r2;  /* 0C07048A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += r3; /* slot add Rm,Rn */ if (c_) { UPD(0x0C070420u, 6); goto L_0C070420; } goto L_0C070490; }  /* 0C07048C bf/s */
L_0C070490: BLKS(0x0C070490u);
	T = (r9 & r9) == 0;  /* 0C070490 tst Rm,Rn */
	if (T) { UPD(0x0C0704A6u, 5); goto L_0C0704A6; }  /* 0C070492 bt */
L_0C070494: BLKS(0x0C070494u);
	r1 = 0xFFu; UPD(0x0C070496u, 1);  /* 0C070494 mov.w @(disp,pc),Rn */
	T = (s32)r9 > (s32)r1;  /* 0C070496 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07049Cu, 4); goto L_0C07049C; }  /* 0C070498 bf */
L_0C07049A: BLKS(0x0C07049Au);
	r9 = r1;  /* 0C07049A mov Rm,Rn */
	UPD(0x0C07049Cu, 1);
L_0C07049C: BLKS(0x0C07049Cu);
	r0 = r9;  /* 0C07049C mov Rm,Rn */
	IF(0x0C07049Eu); r0 <<= 8;  /* 0C07049E shll8 Rn */
	r4 = 0x2040000u; UPD(0x0C0704A2u, 3);  /* 0C0704A0 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C0704A2 add Rm,Rn */
	r9 |= r4;  /* 0C0704A4 or Rm,Rn */
	UPD(0x0C0704A6u, 2);
L_0C0704A6: BLKS(0x0C0704A6u);
	r6 = 0xC297A3Cu; UPD(0x0C0704A8u, 1);  /* 0C0704A6 mov.l @(disp,pc),Rn */
	r5 = R32(r6); UPD(0x0C0704AAu, 1);  /* 0C0704A8 mov.l @Rm,Rn */
	r7 = 0x808080u; UPD(0x0C0704ACu, 1);  /* 0C0704AA mov.l @(disp,pc),Rn */
	T = (r5 & r5) == 0;  /* 0C0704AC tst Rm,Rn */
	if (!T) { UPD(0x0C0704BCu, 4); goto L_0C0704BC; }  /* 0C0704AE bf */
L_0C0704B0: BLKS(0x0C0704B0u);
	r2 = 0xC2B039Cu; UPD(0x0C0704B2u, 1);  /* 0C0704B0 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0704B4u, 1);  /* 0C0704B2 mov.l @Rm,Rn */
	r0 &= 0x2u;  /* 0C0704B4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0704B6 tst Rm,Rn */
	if (T) { UPD(0x0C0704BCu, 5); goto L_0C0704BC; }  /* 0C0704B8 bt */
L_0C0704BA: BLKS(0x0C0704BAu);
	r7 = 0xFFFFFFu; UPD(0x0C0704BCu, 1);  /* 0C0704BA mov.l @(disp,pc),Rn */
L_0C0704BC: BLKS(0x0C0704BCu);
	r4 = 0xC174FC0u; UPD(0x0C0704BEu, 1);  /* 0C0704BC mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0704BE mov #imm,Rn */
	r6 = R32(r4); UPD(0x0C0704C2u, 2);  /* 0C0704C0 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0704C2 add #imm,Rn */
	r5 = 0xC2289E8u; UPD(0x0C0704C6u, 2);  /* 0C0704C4 mov.l @(disp,pc),Rn */
	r0 = 0xC3C4048u; UPD(0x0C0704C8u, 1);  /* 0C0704C6 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C0704CAu, 1);  /* 0C0704C8 mov.l Rm,@Rn */
	r1 = 0xC174FA4u; UPD(0x0C0704CCu, 1);  /* 0C0704CA mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C0704CC mov Rm,Rn */
	r3 = 0xC3C86B0u; UPD(0x0C0704D0u, 2);  /* 0C0704CE mov.l @(disp,pc),Rn */
	IF(0x0C0704D0u); r5 <<= 16;  /* 0C0704D0 shll16 Rn */
	r6 = R32(r0); UPD(0x0C0704D4u, 2);  /* 0C0704D2 mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C0704D4 add #imm,Rn */
	W32(r3, r1); UPD(0x0C0704D8u, 2);  /* 0C0704D6 mov.l Rm,@Rn */
	r0 = 0xC073B10u; UPD(0x0C0704DAu, 1);  /* 0C0704D8 mov.l @(disp,pc),Rn */
	r3 = 0x500000u; UPD(0x0C0704DCu, 1);  /* 0C0704DA mov.l @(disp,pc),Rn */
	r4 = 0x10000000u; UPD(0x0C0704DEu, 1);  /* 0C0704DC mov.l @(disp,pc),Rn */
	r6 += r3;  /* 0C0704DE add Rm,Rn */
	r4 |= r9;  /* 0C0704E0 or Rm,Rn */
	IF(0x0C0704E2u); { u32 t_ = r0; PR = 0x0C0704E6u; W32(r15, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C0704E6u); }  /* 0C0704E2 jsr @Rn */
L_0C0704E6: BLKS(0x0C0704E6u);
	r3 = 0xC297A3Cu; UPD(0x0C0704E8u, 1);  /* 0C0704E6 mov.l @(disp,pc),Rn */
	r4 = 0x46u;  /* 0C0704E8 mov #imm,Rn */
	r7 = R32(r3); UPD(0x0C0704ECu, 2);  /* 0C0704EA mov.l @Rm,Rn */
	r3 = 0xFFFFFFu; UPD(0x0C0704EEu, 1);  /* 0C0704EC mov.l @(disp,pc),Rn */
	r3 -= r7;  /* 0C0704EE sub Rm,Rn */
	IF(0x0C0704F0u); r3 >>= 8;  /* 0C0704F0 shlr8 Rn */
	IF(0x0C0704F2u); MACL = r3 * r4;  /* 0C0704F2 mul.l Rm,Rn */
	IF(0x0C0704F4u); r2 = MACL;  /* 0C0704F4 sts macl,Rn */
	IF(0x0C0704F6u); T = (s32)r2 >= 0;  /* 0C0704F6 cmp/pz Rn */
	{ u32 c_ = T; r5 = (r2 >> 16) | (r2 << 16); /* slot swap.w Rm,Rn */ if (c_) { UPD(0x0C070502u, 9); goto L_0C070502; } goto L_0C0704FC; }  /* 0C0704F8 bt/s */
L_0C0704FC: BLKS(0x0C0704FCu);
	{ IF(0x0C0704FEu); ; /* slot nop */ UPD(0x0C070610u, 4); goto L_0C070610; }  /* 0C0704FC bra */
L_0C070500: BLKS(0x0C070500u);
	r5 = (r2 >> 16) | (r2 << 16);  /* 0C070500 swap.w Rm,Rn */
	UPD(0x0C070502u, 1);
L_0C070502: BLKS(0x0C070502u);
	r0 = (u32)(s32)(s16)r5;  /* 0C070502 exts.w Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C070504 tst Rm,Rn */
	{ u32 c_ = T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C070514u, 5); goto L_0C070514; } goto L_0C07050A; }  /* 0C070506 bt/s */
L_0C07050A: BLKS(0x0C07050Au);
	T = r0 == 0x46u;  /* 0C07050A cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C070514u, 5); goto L_0C070514; }  /* 0C07050C bf */
L_0C07050E: BLKS(0x0C07050Eu);
	r0 = 0x45u;  /* 0C07050E mov #imm,Rn */
	{ r7 = 0xFFFFFFF8u; /* slot mov #imm,Rn */ UPD(0x0C070516u, 4); goto L_0C070516; }  /* 0C070510 bra */
L_0C070514: BLKS(0x0C070514u);
	r7 = 0xFFFFFFF8u;  /* 0C070514 mov #imm,Rn */
	UPD(0x0C070516u, 1);
L_0C070516: BLKS(0x0C070516u);
	r2 = r3;  /* 0C070516 mov Rm,Rn */
	IF(0x0C070518u); ARG0(0x427Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C070518 shad Rm,Rn */
	r7 = 0xFFFFFF01u; UPD(0x0C07051Cu, 3);  /* 0C07051A mov.w @(disp,pc),Rn */
	r2 += r2;  /* 0C07051C add Rm,Rn */
	r7 += r2;  /* 0C07051E add Rm,Rn */
	IF(0x0C070520u); T = (s32)r7 >= 0;  /* 0C070520 cmp/pz Rn */
	if (!T) { UPD(0x0C070600u, 6); goto L_0C070600; }  /* 0C070522 bf */
L_0C070524: BLKS(0x0C070524u);
	r6 = 0xFFu; UPD(0x0C070526u, 1);  /* 0C070524 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C070526 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C070532u, 4); goto L_0C070532; } goto L_0C07052C; }  /* 0C070528 bf/s */
L_0C07052C: BLKS(0x0C07052Cu);
	r4 = 0x1FEu; UPD(0x0C07052Eu, 2);  /* 0C07052C mov.w @(disp,pc),Rn */
	r4 -= r2;  /* 0C07052E sub Rm,Rn */
	r3 = r4;  /* 0C070530 mov Rm,Rn */
	UPD(0x0C070532u, 2);
L_0C070532: BLKS(0x0C070532u);
	r1 = r6;  /* 0C070532 mov Rm,Rn */
	r1 -= r2;  /* 0C070534 sub Rm,Rn */
	IF(0x0C070536u); T = (s32)r1 >= 0;  /* 0C070536 cmp/pz Rn */
	if (!T) { UPD(0x0C0705F0u, 6); goto L_0C0705F0; }  /* 0C070538 bf */
L_0C07053A: BLKS(0x0C07053Au);
	T = (r0 & r0) == 0;  /* 0C07053A tst Rm,Rn */
	if (!T) { UPD(0x0C0705B0u, 4); goto L_0C0705B0; }  /* 0C07053C bf */
L_0C07053E: BLKS(0x0C07053Eu);
	r15 = r14;  /* 0C07053E mov Rm,Rn */
	IF(0x0C070540u); PR = R32(r15); r15 += 4; UPD(0x0C070542u, 2);  /* 0C070540 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C070544u, 1);  /* 0C070542 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070546u, 1);  /* 0C070544 mov.l @Rm+,Rn */
	IF(0x0C070546u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C070546 rts */
L_0C0705B0: BLKS(0x0C0705B0u);
	r2 = 0x700u; UPD(0x0C0705B2u, 1);  /* 0C0705B0 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0705B2 add #imm,Rn */
	r4 = 0xC174FBCu; UPD(0x0C0705B6u, 2);  /* 0C0705B4 mov.l @(disp,pc),Rn */
	r0 |= r2;  /* 0C0705B6 or Rm,Rn */
	W16(r4, r0); UPD(0x0C0705BAu, 2);  /* 0C0705B8 mov.w Rm,@Rn */
	IF(0x0C0705BAu); r3 <<= 8;  /* 0C0705BA shll8 Rn */
	r5 = 0xC174FC0u; UPD(0x0C0705BEu, 2);  /* 0C0705BC mov.l @(disp,pc),Rn */
	IF(0x0C0705BEu); r7 <<= 16;  /* 0C0705BE shll16 Rn */
	r0 = R32(r5 + 0x4u); UPD(0x0C0705C2u, 2);  /* 0C0705C0 mov.l @(disp,Rm),Rn */
	r7 |= r3;  /* 0C0705C2 or Rm,Rn */
	r6 = 0xC2289E8u; UPD(0x0C0705C6u, 2);  /* 0C0705C4 mov.l @(disp,pc),Rn */
	IF(0x0C0705C6u); r8 <<= 16;  /* 0C0705C6 shll16 Rn */
	W32(r6, r0); UPD(0x0C0705CAu, 2);  /* 0C0705C8 mov.l Rm,@Rn */
	r5 = r8;  /* 0C0705CA mov Rm,Rn */
	r3 = 0xC3C4048u; UPD(0x0C0705CEu, 2);  /* 0C0705CC mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0705CE add #imm,Rn */
	r4 = 0x10000000u; UPD(0x0C0705D2u, 2);  /* 0C0705D0 mov.l @(disp,pc),Rn */
	r7 |= r1;  /* 0C0705D2 or Rm,Rn */
	r6 = R32(r3); UPD(0x0C0705D6u, 2);  /* 0C0705D4 mov.l @Rm,Rn */
	r4 |= r9;  /* 0C0705D6 or Rm,Rn */
	r8 = 0xC073B10u; UPD(0x0C0705DAu, 2);  /* 0C0705D8 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0705DA mov #imm,Rn */
	r2 = 0x550000u; UPD(0x0C0705DEu, 2);  /* 0C0705DC mov.l @(disp,pc),Rn */
	W32(r15, r9); UPD(0x0C0705E0u, 1);  /* 0C0705DE mov.l Rm,@Rn */
	IF(0x0C0705E0u); { u32 t_ = r8; PR = 0x0C0705E4u; r6 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C0705E4u); }  /* 0C0705E0 jsr @Rn */
L_0C0705E4: BLKS(0x0C0705E4u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07053Eu, 3); goto L_0C07053E; }  /* 0C0705E4 bra */
L_0C0705F0: BLKS(0x0C0705F0u);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C07053Au, 3); goto L_0C07053A; }  /* 0C0705F0 bra */
L_0C070600: BLKS(0x0C070600u);
	{ r7 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C070524u, 3); goto L_0C070524; }  /* 0C070600 bra */
L_0C070610: BLKS(0x0C070610u);
	r0 = 0xFFFFu; UPD(0x0C070612u, 1);  /* 0C070610 mov.l @(disp,pc),Rn */
	{ r2 += r0; /* slot add Rm,Rn */ UPD(0x0C070500u, 3); goto L_0C070500; }  /* 0C070612 bra */
L_0C070620: BLKS(0x0C070620u);
	r5 = 0xC3CC30Cu; UPD(0x0C070622u, 1);  /* 0C070620 mov.l @(disp,pc),Rn */
	{ r8 = R32(r5); /* slot mov.l @Rm,Rn */ UPD(0x0C070416u, 3); goto L_0C070416; }  /* 0C070622 bra */
}

/* FUN_0c070650 */
void blk_f_0C070650(sh3_t *c)
{
	LOCALS;
L_0C070650: BLKS(0x0C070650u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C070652u, 1);  /* 0C070650 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C070654u, 1);  /* 0C070652 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C070656u, 1);  /* 0C070654 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C070658u, 1);  /* 0C070656 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07065Au, 1);  /* 0C070658 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07065A exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07065Eu, 2);  /* 0C07065C mov.l Rm,@-Rn */
	r8 = 0x2A0u; UPD(0x0C070660u, 1);  /* 0C07065E mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C070662u, 1);  /* 0C070660 mov.l Rm,@-Rn */
	MACL = (u32)((s32)(s16)r11 * (s32)(s16)r8);  /* 0C070662 muls.w Rm,Rn */
	IF(0x0C070664u); r15 -= 4; W32(r15, PR); UPD(0x0C070666u, 3);  /* 0C070664 sts.l pr,@-Rn */
	IF(0x0C070666u); r5 = MACL;  /* 0C070666 sts macl,Rn */
	r1 = 0xC173E08u; UPD(0x0C07066Au, 2);  /* 0C070668 mov.l @(disp,pc),Rn */
	r6 = 0xC3C86B0u; UPD(0x0C07066Cu, 1);  /* 0C07066A mov.l @(disp,pc),Rn */
	r7 = 0xC29D1D8u; UPD(0x0C07066Eu, 1);  /* 0C07066C mov.l @(disp,pc),Rn */
	W32(r6, r1); UPD(0x0C070670u, 1);  /* 0C07066E mov.l Rm,@Rn */
	r5 += r7;  /* 0C070670 add Rm,Rn */
	r0 = R32(r5 + 0x4u); UPD(0x0C070674u, 2);  /* 0C070672 mov.l @(disp,Rm),Rn */
	r2 = 0xC174FF0u; UPD(0x0C070676u, 1);  /* 0C070674 mov.l @(disp,pc),Rn */
	r0 &= 0xCu;  /* 0C070676 and #imm,r0 */
	IF(0x0C070678u); r3 = R32(r0 + r2); UPD(0x0C07067Au, 2);  /* 0C070678 mov.l @(r0,Rm),Rn */
	r0 = 0xC2289E8u; UPD(0x0C07067Cu, 1);  /* 0C07067A mov.l @(disp,pc),Rn */
	W32(r0, r3); UPD(0x0C07067Eu, 1);  /* 0C07067C mov.l Rm,@Rn */
	r0 = 0x25Au; UPD(0x0C070680u, 1);  /* 0C07067E mov.w @(disp,pc),Rn */
	IF(0x0C070680u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C070682u, 1);  /* 0C070680 mov.b @(r0,Rm),Rn */
	r0 = 0x5u;  /* 0C070682 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C070684 extu.b Rm,Rn */
	T = (s32)r2 > (s32)r0;  /* 0C070686 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07068Eu, 6); goto L_0C07068E; } goto L_0C07068C; }  /* 0C070688 bf/s */
L_0C07068C: BLKS(0x0C07068Cu);
	r2 = 0x2u;  /* 0C07068C mov #imm,Rn */
	UPD(0x0C07068Eu, 2);
L_0C07068E: BLKS(0x0C07068Eu);
	T = (r2 & r2) == 0;  /* 0C07068E tst Rm,Rn */
	if (T) { UPD(0x0C0706C6u, 4); goto L_0C0706C6; }  /* 0C070690 bt */
L_0C070692: BLKS(0x0C070692u);
	r10 = 0x0u;  /* 0C070692 mov #imm,Rn */
	r12 = 0xC073B10u; UPD(0x0C070696u, 2);  /* 0C070694 mov.l @(disp,pc),Rn */
	r13 = r12;  /* 0C070696 mov Rm,Rn */
	r9 = 0x0u;  /* 0C070698 mov #imm,Rn */
	r8 = r2;  /* 0C07069A mov Rm,Rn */
	UPD(0x0C07069Cu, 3);
L_0C07069C: BLKS(0x0C07069Cu);
	T = (r11 & r11) == 0;  /* 0C07069C tst Rm,Rn */
	{ u32 c_ = !T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0706E0u, 4); goto L_0C0706E0; } goto L_0C0706A2; }  /* 0C07069E bf/s */
L_0C0706A2: BLKS(0x0C0706A2u);
	r0 = 0xC3C4048u; UPD(0x0C0706A4u, 2);  /* 0C0706A2 mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C0706A4 mov Rm,Rn */
	r3 = 0xC3CC30Cu; UPD(0x0C0706A8u, 2);  /* 0C0706A6 mov.l @(disp,pc),Rn */
	IF(0x0C0706A8u); r6 <<= 16;  /* 0C0706A8 shll16 Rn */
	r4 = R32(r0); UPD(0x0C0706ACu, 2);  /* 0C0706AA mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0706AC add #imm,Rn */
	r5 = R32(r3); UPD(0x0C0706B0u, 2);  /* 0C0706AE mov.l @Rm,Rn */
	r6 += r4;  /* 0C0706B0 add Rm,Rn */
	W32(r15, r11); UPD(0x0C0706B4u, 2);  /* 0C0706B2 mov.l Rm,@Rn */
	r4 = 0x10000000u; UPD(0x0C0706B6u, 1);  /* 0C0706B4 mov.l @(disp,pc),Rn */
	r7 = 0x808080u; UPD(0x0C0706B8u, 1);  /* 0C0706B6 mov.l @(disp,pc),Rn */
	IF(0x0C0706B8u); { u32 t_ = r13; PR = 0x0C0706BCu; IF(0x0C0706BAu); r5 <<= 16; /* slot shll16 Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C0706BCu); }  /* 0C0706B8 jsr @Rn */
L_0C0706BC: BLKS(0x0C0706BCu);
	r15 += 0x4u;  /* 0C0706BC add #imm,Rn */
	UPD(0x0C0706BEu, 1);
L_0C0706BE: BLKS(0x0C0706BEu);
	r10 += 0x10u;  /* 0C0706BE add #imm,Rn */
	IF(0x0C0706C0u); r8 -= 1; T = r8 == 0;  /* 0C0706C0 dt Rn */
	{ u32 c_ = !T; r9 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07069Cu, 5); goto L_0C07069C; } UPD(0x0C0706C6u, 1); goto L_0C0706C6; }  /* 0C0706C2 bf/s */
L_0C0706C6: BLKS(0x0C0706C6u);
	r15 = r14;  /* 0C0706C6 mov Rm,Rn */
	IF(0x0C0706C8u); PR = R32(r15); r15 += 4; UPD(0x0C0706CAu, 2);  /* 0C0706C8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0706CCu, 1);  /* 0C0706CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0706CEu, 1);  /* 0C0706CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0706D0u, 1);  /* 0C0706CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0706D2u, 1);  /* 0C0706D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0706D4u, 1);  /* 0C0706D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0706D6u, 1);  /* 0C0706D4 mov.l @Rm+,Rn */
	IF(0x0C0706D6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0706D6 rts */
L_0C0706E0: BLKS(0x0C0706E0u);
	r6 = 0xC3CC30Cu; UPD(0x0C0706E2u, 1);  /* 0C0706E0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0706E2 add #imm,Rn */
	r5 = R32(r6); UPD(0x0C0706E6u, 2);  /* 0C0706E4 mov.l @Rm,Rn */
	r4 = 0xC3C4048u; UPD(0x0C0706E8u, 1);  /* 0C0706E6 mov.l @(disp,pc),Rn */
	IF(0x0C0706E8u); r5 <<= 16;  /* 0C0706E8 shll16 Rn */
	r6 = 0xE0u; UPD(0x0C0706ECu, 2);  /* 0C0706EA mov.w @(disp,pc),Rn */
	r7 = R32(r4); UPD(0x0C0706EEu, 1);  /* 0C0706EC mov.l @Rm,Rn */
	r6 -= r10;  /* 0C0706EE sub Rm,Rn */
	IF(0x0C0706F0u); r6 <<= 16;  /* 0C0706F0 shll16 Rn */
	r6 += r7;  /* 0C0706F2 add Rm,Rn */
	r4 = 0x10000000u; UPD(0x0C0706F6u, 4);  /* 0C0706F4 mov.l @(disp,pc),Rn */
	r7 = 0x808080u; UPD(0x0C0706F8u, 1);  /* 0C0706F6 mov.l @(disp,pc),Rn */
	IF(0x0C0706F8u); { u32 t_ = r12; PR = 0x0C0706FCu; W32(r15, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C0706FCu); }  /* 0C0706F8 jsr @Rn */
L_0C0706FC: BLKS(0x0C0706FCu);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0706BEu, 3); goto L_0C0706BE; }  /* 0C0706FC bra */
}

/* FUN_0c070730 */
void blk_f_0C070730(sh3_t *c)
{
	LOCALS;
L_0C070730: BLKS(0x0C070730u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C070732u, 1);  /* 0C070730 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C070734u, 1);  /* 0C070732 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C070736u, 1);  /* 0C070734 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C070738u, 1);  /* 0C070736 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07073Au, 1);  /* 0C070738 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07073Cu, 1);  /* 0C07073A mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C07073C exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C070740u, 2);  /* 0C07073E mov.l Rm,@-Rn */
	r13 = 0x8u;  /* 0C070740 mov #imm,Rn */
	r0 = 0x2A0u; UPD(0x0C070744u, 2);  /* 0C070742 mov.w @(disp,pc),Rn */
	T = (r12 & r12) == 0;  /* 0C070744 tst Rm,Rn */
	IF(0x0C070746u); r15 -= 4; W32(r15, PR); UPD(0x0C070748u, 2);  /* 0C070746 sts.l pr,@-Rn */
	MACL = (u32)((s32)(s16)r12 * (s32)(s16)r0);  /* 0C070748 muls.w Rm,Rn */
	r1 = 0xC29D1D8u; UPD(0x0C07074Cu, 3);  /* 0C07074A mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07074C add #imm,Rn */
	IF(0x0C07074Eu); r2 = MACL;  /* 0C07074E sts macl,Rn */
	r14 = r15;  /* 0C070750 mov Rm,Rn */
	r2 += r1;  /* 0C070752 add Rm,Rn */
	{ u32 c_ = T; W32(r14, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C07075Au, 7); goto L_0C07075A; } UPD(0x0C070758u, 1); goto L_0C070758; }  /* 0C070754 bt/s */
L_0C070758: BLKS(0x0C070758u);
	r13 = 0xACu; UPD(0x0C07075Au, 1);  /* 0C070758 mov.w @(disp,pc),Rn */
L_0C07075A: BLKS(0x0C07075Au);
	r11 = 0xFFu; UPD(0x0C07075Cu, 1);  /* 0C07075A mov.w @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C07075C mov #imm,Rn */
	r8 = 0x0u;  /* 0C07075E mov #imm,Rn */
	r5 = r1;  /* 0C070760 mov Rm,Rn */
	r6 = 0x0u;  /* 0C070762 mov #imm,Rn */
	UPD(0x0C070764u, 4);
L_0C070764: BLKS(0x0C070764u);
	r3 = r6;  /* 0C070764 mov Rm,Rn */
	r3 += r5;  /* 0C070766 add Rm,Rn */
	r2 = R32(r3); UPD(0x0C07076Au, 3);  /* 0C070768 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07076A tst Rm,Rn */
	if (T) { UPD(0x0C0707D4u, 4); goto L_0C0707D4; }  /* 0C07076C bt */
L_0C07076E: BLKS(0x0C07076Eu);
	r9 = R32(r3 + 0x14u); UPD(0x0C070770u, 1);  /* 0C07076E mov.l @(disp,Rm),Rn */
	r0 = 0xC3C4048u; UPD(0x0C070772u, 1);  /* 0C070770 mov.l @(disp,pc),Rn */
	r10 = 0xFFFF0000u; UPD(0x0C070774u, 1);  /* 0C070772 mov.l @(disp,pc),Rn */
	r7 = R32(r0); UPD(0x0C070776u, 1);  /* 0C070774 mov.l @Rm,Rn */
	r7 &= r10;  /* 0C070776 and Rm,Rn */
	r9 -= r7;  /* 0C070778 sub Rm,Rn */
	IF(0x0C07077Au); r9 >>= 16;  /* 0C07077A shlr16 Rn */
	r7 = r13;  /* 0C07077C mov Rm,Rn */
	r7 -= r9;  /* 0C07077E sub Rm,Rn */
	r7 += 0x28u;  /* 0C070780 add #imm,Rn */
	IF(0x0C070782u); T = (s32)r7 >= 0;  /* 0C070782 cmp/pz Rn */
	if (T) { UPD(0x0C07078Cu, 10); goto L_0C07078C; }  /* 0C070784 bt */
L_0C070786: BLKS(0x0C070786u);
	r7 = 0u - r7;  /* 0C070786 neg Rm,Rn */
	{ r9 = R32(r3 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C07078Eu, 4); goto L_0C07078E; }  /* 0C070788 bra */
L_0C07078C: BLKS(0x0C07078Cu);
	r9 = R32(r3 + 0x10u); UPD(0x0C07078Eu, 1);  /* 0C07078C mov.l @(disp,Rm),Rn */
L_0C07078E: BLKS(0x0C07078Eu);
	r2 = (r9 >> 16) | (r9 << 16);  /* 0C07078E swap.w Rm,Rn */
	r3 = (u32)(s32)(s16)r2;  /* 0C070790 exts.w Rm,Rn */
	r2 = r4;  /* 0C070792 mov Rm,Rn */
	r2 -= r3;  /* 0C070794 sub Rm,Rn */
	r2 += 0x10u;  /* 0C070796 add #imm,Rn */
	IF(0x0C070798u); T = (s32)r2 >= 0;  /* 0C070798 cmp/pz Rn */
	if (T) { UPD(0x0C0707A2u, 9); goto L_0C0707A2; }  /* 0C07079A bt */
L_0C07079C: BLKS(0x0C07079Cu);
	r2 = 0u - r2;  /* 0C07079C neg Rm,Rn */
	{ r10 = 0x2Fu; /* slot mov #imm,Rn */ UPD(0x0C0707A4u, 4); goto L_0C0707A4; }  /* 0C07079E bra */
L_0C0707A2: BLKS(0x0C0707A2u);
	r10 = 0x2Fu;  /* 0C0707A2 mov #imm,Rn */
	UPD(0x0C0707A4u, 1);
L_0C0707A4: BLKS(0x0C0707A4u);
	T = (s32)r7 > (s32)r10;  /* 0C0707A4 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x1Fu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0707D4u, 4); goto L_0C0707D4; } goto L_0C0707AA; }  /* 0C0707A6 bt/s */
L_0C0707AA: BLKS(0x0C0707AAu);
	T = (s32)r2 > (s32)r0;  /* 0C0707AA cmp/gt Rm,Rn */
	{ u32 c_ = T; r7 += 0xFFFFFFE0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0707D4u, 5); goto L_0C0707D4; } goto L_0C0707B0; }  /* 0C0707AC bt/s */
L_0C0707B0: BLKS(0x0C0707B0u);
	IF(0x0C0707B0u); T = (s32)r7 >= 0;  /* 0C0707B0 cmp/pz Rn */
	if (T) { UPD(0x0C0707BAu, 5); goto L_0C0707BA; }  /* 0C0707B2 bt */
L_0C0707B4: BLKS(0x0C0707B4u);
	r7 = 0x0u;  /* 0C0707B4 mov #imm,Rn */
	{ r2 += 0xFFFFFFF0u; /* slot add #imm,Rn */ UPD(0x0C0707BCu, 4); goto L_0C0707BC; }  /* 0C0707B6 bra */
L_0C0707BA: BLKS(0x0C0707BAu);
	r2 += 0xFFFFFFF0u;  /* 0C0707BA add #imm,Rn */
	UPD(0x0C0707BCu, 1);
L_0C0707BC: BLKS(0x0C0707BCu);
	IF(0x0C0707BCu); T = (s32)r2 >= 0;  /* 0C0707BC cmp/pz Rn */
	if (T) { UPD(0x0C0707C6u, 4); goto L_0C0707C6; }  /* 0C0707BE bt */
L_0C0707C0: BLKS(0x0C0707C0u);
	r2 = 0x0u;  /* 0C0707C0 mov #imm,Rn */
	{ r1 = r7; /* slot mov Rm,Rn */ UPD(0x0C0707C8u, 4); goto L_0C0707C8; }  /* 0C0707C2 bra */
L_0C0707C6: BLKS(0x0C0707C6u);
	r1 = r7;  /* 0C0707C6 mov Rm,Rn */
	UPD(0x0C0707C8u, 1);
L_0C0707C8: BLKS(0x0C0707C8u);
	r1 += r2;  /* 0C0707C8 add Rm,Rn */
	r7 = 0x3u;  /* 0C0707CA mov #imm,Rn */
	IF(0x0C0707CCu); ARG0(0x417Du); { s32 s_ = (s32)r7; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0707CC shld Rm,Rn */
	T = (s32)r11 > (s32)r1;  /* 0C0707CE cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0707D4u, 7); goto L_0C0707D4; }  /* 0C0707D0 bf */
L_0C0707D2: BLKS(0x0C0707D2u);
	r11 = r1;  /* 0C0707D2 mov Rm,Rn */
	UPD(0x0C0707D4u, 1);
L_0C0707D4: BLKS(0x0C0707D4u);
	r2 = 0x2A0u; UPD(0x0C0707D6u, 1);  /* 0C0707D4 mov.w @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C0707D6 add #imm,Rn */
	r3 = 0x1u;  /* 0C0707D8 mov #imm,Rn */
	T = (s32)r8 > (s32)r3;  /* 0C0707DA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += r2; /* slot add Rm,Rn */ if (c_) { UPD(0x0C070764u, 6); goto L_0C070764; } goto L_0C0707E0; }  /* 0C0707DC bf/s */
L_0C0707E0: BLKS(0x0C0707E0u);
	r4 = 0x7Fu;  /* 0C0707E0 mov #imm,Rn */
	T = (s32)r11 > (s32)r4;  /* 0C0707E2 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0707E8u, 6); goto L_0C0707E8; }  /* 0C0707E4 bt */
L_0C0707E6: BLKS(0x0C0707E6u);
	r11 = 0x80u; UPD(0x0C0707E8u, 1);  /* 0C0707E6 mov.w @(disp,pc),Rn */
L_0C0707E8: BLKS(0x0C0707E8u);
	r1 = 0xFFu; UPD(0x0C0707EAu, 1);  /* 0C0707E8 mov.w @(disp,pc),Rn */
	T = (s32)r11 > (s32)r1;  /* 0C0707EA cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0707F0u, 4); goto L_0C0707F0; }  /* 0C0707EC bf */
L_0C0707EE: BLKS(0x0C0707EEu);
	r11 = r1;  /* 0C0707EE mov Rm,Rn */
	UPD(0x0C0707F0u, 1);
L_0C0707F0: BLKS(0x0C0707F0u);
	r0 = 0xC175014u; UPD(0x0C0707F2u, 1);  /* 0C0707F0 mov.l @(disp,pc),Rn */
	r3 = r11;  /* 0C0707F2 mov Rm,Rn */
	r10 = R32(r0); UPD(0x0C0707F6u, 2);  /* 0C0707F4 mov.l @Rm,Rn */
	IF(0x0C0707F6u); r3 <<= 8;  /* 0C0707F6 shll8 Rn */
	r8 = 0xC2289E8u; UPD(0x0C0707FAu, 2);  /* 0C0707F8 mov.l @(disp,pc),Rn */
	r11 += r3;  /* 0C0707FA add Rm,Rn */
	r1 = 0xC173E08u; UPD(0x0C0707FEu, 2);  /* 0C0707FC mov.l @(disp,pc),Rn */
	r7 = 0xC3C86B0u; UPD(0x0C070800u, 1);  /* 0C0707FE mov.l @(disp,pc),Rn */
	W32(r8, r10); UPD(0x0C070802u, 1);  /* 0C070800 mov.l Rm,@Rn */
	W32(r7, r1); UPD(0x0C070804u, 1);  /* 0C070802 mov.l Rm,@Rn */
	r8 = 0x0u;  /* 0C070804 mov #imm,Rn */
	r9 = 0x25Du; UPD(0x0C070808u, 2);  /* 0C070806 mov.w @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C07080Au, 1);  /* 0C070808 mov.l @Rm,Rn */
	r13 = 0x2040000u; UPD(0x0C07080Cu, 1);  /* 0C07080A mov.l @(disp,pc),Rn */
	IF(0x0C07080Cu); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07080Eu, 1);  /* 0C07080C mov.b @(r0,Rm),Rn */
	r11 |= r13;  /* 0C07080E or Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C070810 extu.b Rm,Rn */
	T = (s32)r8 >= (s32)r5;  /* 0C070812 cmp/ge Rm,Rn */
	{ u32 c_ = T; r13 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C070854u, 6); goto L_0C070854; } goto L_0C070818; }  /* 0C070814 bt/s */
L_0C070818: BLKS(0x0C070818u);
	r10 = 0x0u;  /* 0C070818 mov #imm,Rn */
	r9 = 0x0u;  /* 0C07081A mov #imm,Rn */
	UPD(0x0C07081Cu, 3);
L_0C07081C: BLKS(0x0C07081Cu);
	T = (r12 & r12) == 0;  /* 0C07081C tst Rm,Rn */
	{ u32 c_ = T; r6 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C070826u, 4); goto L_0C070826; } goto L_0C070822; }  /* 0C07081E bt/s */
L_0C070822: BLKS(0x0C070822u);
	{ r7 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C070970u, 4); goto L_0C070970; }  /* 0C070822 bra */
L_0C070826: BLKS(0x0C070826u);
	r5 = 0xC3C4048u; UPD(0x0C070828u, 1);  /* 0C070826 mov.l @(disp,pc),Rn */
	r4 = R32(r5); UPD(0x0C07082Au, 1);  /* 0C070828 mov.l @Rm,Rn */
	IF(0x0C07082Au); r6 <<= 16;  /* 0C07082A shll16 Rn */
	r6 += r4;  /* 0C07082C add Rm,Rn */
	r2 = 0xC073B10u; UPD(0x0C070830u, 3);  /* 0C07082E mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C070830 add #imm,Rn */
	r4 = 0x10000000u; UPD(0x0C070834u, 2);  /* 0C070832 mov.l @(disp,pc),Rn */
	W32(r15, r12); UPD(0x0C070836u, 1);  /* 0C070834 mov.l Rm,@Rn */
	r5 = 0x200000u; UPD(0x0C070838u, 1);  /* 0C070836 mov.l @(disp,pc),Rn */
	r7 = 0x808080u; UPD(0x0C07083Au, 1);  /* 0C070838 mov.l @(disp,pc),Rn */
	IF(0x0C07083Au); { u32 t_ = r2; PR = 0x0C07083Eu; r4 |= r11; /* slot or Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C07083Eu); }  /* 0C07083A jsr @Rn */
L_0C07083E: BLKS(0x0C07083Eu);
	r5 = 0x25Du; UPD(0x0C070840u, 1);  /* 0C07083E mov.w @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C070840 add #imm,Rn */
	r0 = R32(r14); UPD(0x0C070844u, 2);  /* 0C070842 mov.l @Rm,Rn */
	r15 += 0x4u;  /* 0C070844 add #imm,Rn */
	IF(0x0C070846u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C070848u, 2);  /* 0C070846 mov.b @(r0,Rm),Rn */
	r13 += 0x8u;  /* 0C070848 add #imm,Rn */
	r6 = r4 & 0xFF;  /* 0C07084A extu.b Rm,Rn */
	r10 += 0x8u;  /* 0C07084C add #imm,Rn */
	T = (s32)r8 >= (s32)r6;  /* 0C07084E cmp/ge Rm,Rn */
	{ u32 c_ = !T; r9 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07081Cu, 7); goto L_0C07081C; } UPD(0x0C070854u, 1); goto L_0C070854; }  /* 0C070850 bf/s */
L_0C070854: BLKS(0x0C070854u);
	r3 = 0xC175014u; UPD(0x0C070856u, 1);  /* 0C070854 mov.l @(disp,pc),Rn */
	r8 = 0xC2289E8u; UPD(0x0C070858u, 1);  /* 0C070856 mov.l @(disp,pc),Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C07085Au, 1);  /* 0C070858 mov.l @(disp,Rm),Rn */
	W32(r8, r0); UPD(0x0C07085Cu, 1);  /* 0C07085A mov.l Rm,@Rn */
	r7 = 0x25Eu; UPD(0x0C07085Eu, 1);  /* 0C07085C mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C07085E mov #imm,Rn */
	r0 = R32(r14); UPD(0x0C070862u, 2);  /* 0C070860 mov.l @Rm,Rn */
	IF(0x0C070862u); r10 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C070864u, 1);  /* 0C070862 mov.b @(r0,Rm),Rn */
	r9 = r10 & 0xFF;  /* 0C070864 extu.b Rm,Rn */
	T = (s32)r8 >= (s32)r9;  /* 0C070866 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0708C8u, 5); goto L_0C0708C8; }  /* 0C070868 bt */
L_0C07086A: BLKS(0x0C07086Au);
	r9 = 0x10000000u; UPD(0x0C07086Cu, 1);  /* 0C07086A mov.l @(disp,pc),Rn */
	r10 = r9;  /* 0C07086C mov Rm,Rn */
	IF(0x0C07086Eu); ;  /* 0C07086E nop */
	UPD(0x0C070870u, 2);
L_0C070870: BLKS(0x0C070870u);
	T = (r12 & r12) == 0;  /* 0C070870 tst Rm,Rn */
	{ u32 c_ = !T; r6 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C070920u, 4); goto L_0C070920; } goto L_0C070876; }  /* 0C070872 bf/s */
L_0C070876: BLKS(0x0C070876u);
	r2 = 0x66666667u; UPD(0x0C070878u, 2);  /* 0C070876 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C070878 mov Rm,Rn */
	{ s64 r_ = (s64)(s32)r8 * (s64)(s32)r2; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C07087A dmuls.l Rm,Rn */
	r6 = 0x14u;  /* 0C07087C mov #imm,Rn */
	r4 = 0xC3C4048u; UPD(0x0C070880u, 5);  /* 0C07087E mov.l @(disp,pc),Rn */
	IF(0x0C070880u); r0 = MACH;  /* 0C070880 sts mach,Rn */
	IF(0x0C070882u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C070882 shar Rn */
	IF(0x0C070884u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C070884 shar Rn */
	IF(0x0C070886u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C070886 shar Rn */
	IF(0x0C070888u); T = r5 >> 31; r5 <<= 1;  /* 0C070888 shll Rn */
	{ u32 a_ = r5, t_ = a_ - r5, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r5 = r_; }  /* 0C07088A subc Rm,Rn */
	r0 -= r5;  /* 0C07088C sub Rm,Rn */
	IF(0x0C07088Eu); MACL = r0 * r6;  /* 0C07088E mul.l Rm,Rn */
	r5 = r0;  /* 0C070890 mov Rm,Rn */
	r3 = 0x3u;  /* 0C070892 mov #imm,Rn */
	IF(0x0C070894u); r7 = MACL;  /* 0C070894 sts macl,Rn */
	r6 = r8;  /* 0C070896 mov Rm,Rn */
	r6 -= r7;  /* 0C070898 sub Rm,Rn */
	r2 = R32(r4); UPD(0x0C07089Cu, 15);  /* 0C07089A mov.l @Rm,Rn */
	IF(0x0C07089Cu); ARG0(0x453Du); { s32 s_ = (s32)r3; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C07089C shld Rm,Rn */
	IF(0x0C07089Eu); r6 <<= 2;  /* 0C07089E shll2 Rn */
	r1 = 0xC073B10u; UPD(0x0C0708A2u, 3);  /* 0C0708A0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0708A2 add #imm,Rn */
	r6 += r13;  /* 0C0708A4 add Rm,Rn */
	r4 = r11;  /* 0C0708A6 mov Rm,Rn */
	r5 += 0x18u;  /* 0C0708A8 add #imm,Rn */
	IF(0x0C0708AAu); r6 <<= 16;  /* 0C0708AA shll16 Rn */
	W32(r15, r12); UPD(0x0C0708AEu, 6);  /* 0C0708AC mov.l Rm,@Rn */
	IF(0x0C0708AEu); r5 <<= 16;  /* 0C0708AE shll16 Rn */
	r7 = 0x808080u; UPD(0x0C0708B2u, 2);  /* 0C0708B0 mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0708B2 add Rm,Rn */
	IF(0x0C0708B4u); { u32 t_ = r1; PR = 0x0C0708B8u; r4 |= r10; /* slot or Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C0708B8u); }  /* 0C0708B4 jsr @Rn */
L_0C0708B8: BLKS(0x0C0708B8u);
	r2 = 0x25Eu; UPD(0x0C0708BAu, 1);  /* 0C0708B8 mov.w @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C0708BA add #imm,Rn */
	r0 = R32(r14); UPD(0x0C0708BEu, 2);  /* 0C0708BC mov.l @Rm,Rn */
	IF(0x0C0708BEu); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0708C0u, 1);  /* 0C0708BE mov.b @(r0,Rm),Rn */
	r3 = r7 & 0xFF;  /* 0C0708C0 extu.b Rm,Rn */
	T = (s32)r8 >= (s32)r3;  /* 0C0708C2 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C070870u, 5); goto L_0C070870; } UPD(0x0C0708C8u, 1); goto L_0C0708C8; }  /* 0C0708C4 bf/s */
L_0C0708C8: BLKS(0x0C0708C8u);
	r14 += 0x4u;  /* 0C0708C8 add #imm,Rn */
	r15 = r14;  /* 0C0708CA mov Rm,Rn */
	IF(0x0C0708CCu); PR = R32(r15); r15 += 4; UPD(0x0C0708CEu, 3);  /* 0C0708CC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0708D0u, 1);  /* 0C0708CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0708D2u, 1);  /* 0C0708D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0708D4u, 1);  /* 0C0708D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0708D6u, 1);  /* 0C0708D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0708D8u, 1);  /* 0C0708D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0708DAu, 1);  /* 0C0708D8 mov.l @Rm+,Rn */
	IF(0x0C0708DAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0708DA rts */
L_0C070920: BLKS(0x0C070920u);
	r5 = 0x66666667u; UPD(0x0C070922u, 1);  /* 0C070920 mov.l @(disp,pc),Rn */
	{ s64 r_ = (s64)(s32)r8 * (s64)(s32)r5; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C070922 dmuls.l Rm,Rn */
	r2 = 0x14u;  /* 0C070924 mov #imm,Rn */
	r7 = r8;  /* 0C070926 mov Rm,Rn */
	IF(0x0C070928u); r4 = MACH;  /* 0C070928 sts mach,Rn */
	IF(0x0C07092Au); T = r4 & 1; r4 = (u32)((s32)r4 >> 1);  /* 0C07092A shar Rn */
	IF(0x0C07092Cu); T = r4 & 1; r4 = (u32)((s32)r4 >> 1);  /* 0C07092C shar Rn */
	IF(0x0C07092Eu); T = r4 & 1; r4 = (u32)((s32)r4 >> 1);  /* 0C07092E shar Rn */
	IF(0x0C070930u); T = r6 >> 31; r6 <<= 1;  /* 0C070930 shll Rn */
	{ u32 a_ = r6, t_ = a_ - r6, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r6 = r_; }  /* 0C070932 subc Rm,Rn */
	r4 -= r6;  /* 0C070934 sub Rm,Rn */
	IF(0x0C070936u); MACL = r4 * r2;  /* 0C070936 mul.l Rm,Rn */
	r5 = r4;  /* 0C070938 mov Rm,Rn */
	r3 = 0xC3C4048u; UPD(0x0C07093Cu, 15);  /* 0C07093A mov.l @(disp,pc),Rn */
	IF(0x0C07093Cu); r0 = MACL;  /* 0C07093C sts macl,Rn */
	r7 -= r0;  /* 0C07093E sub Rm,Rn */
	r4 = r7;  /* 0C070940 mov Rm,Rn */
	IF(0x0C070942u); r4 <<= 2;  /* 0C070942 shll2 Rn */
	r6 = 0u - r13;  /* 0C070944 neg Rm,Rn */
	r7 = R32(r3); UPD(0x0C070948u, 6);  /* 0C070946 mov.l @Rm,Rn */
	r6 -= r4;  /* 0C070948 sub Rm,Rn */
	r2 = 0xECu; UPD(0x0C07094Cu, 2);  /* 0C07094A mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C07094C mov #imm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07094E add #imm,Rn */
	r1 = 0x3u;  /* 0C070950 mov #imm,Rn */
	IF(0x0C070952u); ARG0(0x451Du); { s32 s_ = (s32)r1; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C070952 shld Rm,Rn */
	r6 += r2;  /* 0C070954 add Rm,Rn */
	W32(r15, r4); UPD(0x0C070958u, 6);  /* 0C070956 mov.l Rm,@Rn */
	IF(0x0C070958u); r6 <<= 16;  /* 0C070958 shll16 Rn */
	r0 = 0xC073B10u; UPD(0x0C07095Cu, 2);  /* 0C07095A mov.l @(disp,pc),Rn */
	r5 += 0x18u;  /* 0C07095C add #imm,Rn */
	r6 += r7;  /* 0C07095E add Rm,Rn */
	r4 = r11;  /* 0C070960 mov Rm,Rn */
	IF(0x0C070962u); r5 <<= 16;  /* 0C070962 shll16 Rn */
	r7 = 0x808080u; UPD(0x0C070966u, 5);  /* 0C070964 mov.l @(disp,pc),Rn */
	IF(0x0C070966u); { u32 t_ = r0; PR = 0x0C07096Au; r4 |= r9; /* slot or Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C07096Au); }  /* 0C070966 jsr @Rn */
L_0C07096A: BLKS(0x0C07096Au);
	{ IF(0x0C07096Cu); ; /* slot nop */ UPD(0x0C0708B8u, 3); goto L_0C0708B8; }  /* 0C07096A bra */
L_0C070970: BLKS(0x0C070970u);
	r2 = 0xC3C4048u; UPD(0x0C070972u, 1);  /* 0C070970 mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C070974u, 1);  /* 0C070972 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C070974 add #imm,Rn */
	r6 = 0xE8u; UPD(0x0C070978u, 2);  /* 0C070976 mov.w @(disp,pc),Rn */
	r0 = 0xC073B10u; UPD(0x0C07097Au, 1);  /* 0C070978 mov.l @(disp,pc),Rn */
	r6 -= r10;  /* 0C07097A sub Rm,Rn */
	W32(r15, r7); UPD(0x0C07097Eu, 2);  /* 0C07097C mov.l Rm,@Rn */
	IF(0x0C07097Eu); r6 <<= 16;  /* 0C07097E shll16 Rn */
	r4 = 0x10000000u; UPD(0x0C070982u, 2);  /* 0C070980 mov.l @(disp,pc),Rn */
	r6 += r3;  /* 0C070982 add Rm,Rn */
	r5 = 0x200000u; UPD(0x0C070986u, 2);  /* 0C070984 mov.l @(disp,pc),Rn */
	r7 = 0x808080u; UPD(0x0C070988u, 1);  /* 0C070986 mov.l @(disp,pc),Rn */
	IF(0x0C070988u); { u32 t_ = r0; PR = 0x0C07098Cu; r4 |= r11; /* slot or Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C07098Cu); }  /* 0C070988 jsr @Rn */
L_0C07098C: BLKS(0x0C07098Cu);
	{ IF(0x0C07098Eu); ; /* slot nop */ UPD(0x0C07083Eu, 3); goto L_0C07083E; }  /* 0C07098C bra */
}

/* FUN_0c0709b0 */
void blk_f_0C0709B0(sh3_t *c)
{
	LOCALS;
L_0C0709B0: BLKS(0x0C0709B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0709B2u, 1);  /* 0C0709B0 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0709B2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0709B6u, 2);  /* 0C0709B4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0709B8u, 1);  /* 0C0709B6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0709BAu, 1);  /* 0C0709B8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0709BCu, 1);  /* 0C0709BA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0709BEu, 1);  /* 0C0709BC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0709C0u, 1);  /* 0C0709BE mov.l Rm,@-Rn */
	r2 = 0xC3CC308u; UPD(0x0C0709C2u, 1);  /* 0C0709C0 mov.l @(disp,pc),Rn */
	IF(0x0C0709C2u); r15 -= 4; W32(r15, PR); UPD(0x0C0709C4u, 1);  /* 0C0709C2 sts.l pr,@-Rn */
	r3 = 0xC175064u; UPD(0x0C0709C6u, 1);  /* 0C0709C4 mov.l @(disp,pc),Rn */
	W32(r2, r0); UPD(0x0C0709C8u, 1);  /* 0C0709C6 mov.l Rm,@Rn */
	r0 = R32(r3); UPD(0x0C0709CAu, 1);  /* 0C0709C8 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0709CA tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0709D4u, 4); goto L_0C0709D4; } goto L_0C0709D0; }  /* 0C0709CC bf/s */
L_0C0709D0: BLKS(0x0C0709D0u);
	{ IF(0x0C0709D2u); ; /* slot nop */ UPD(0x0C070C00u, 4); goto L_0C070C00; }  /* 0C0709D0 bra */
L_0C0709D4: BLKS(0x0C0709D4u);
	r5 = 0x1u;  /* 0C0709D4 mov #imm,Rn */
	W32(r2, r5); UPD(0x0C0709D8u, 2);  /* 0C0709D6 mov.l Rm,@Rn */
	r4 = 0xC22E024u; UPD(0x0C0709DAu, 1);  /* 0C0709D8 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C0709DCu, 1);  /* 0C0709DA mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0709DC tst Rm,Rn */
	if (!T) { UPD(0x0C070A20u, 4); goto L_0C070A20; }  /* 0C0709DE bf */
L_0C0709E0: BLKS(0x0C0709E0u);
	r7 = 0xC29D194u; UPD(0x0C0709E2u, 1);  /* 0C0709E0 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0709E4u, 1);  /* 0C0709E2 mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0709E4 tst Rm,Rn */
	if (!T) { UPD(0x0C070A20u, 4); goto L_0C070A20; }  /* 0C0709E6 bf */
L_0C0709E8: BLKS(0x0C0709E8u);
	r9 = 0xC3C8474u; UPD(0x0C0709EAu, 1);  /* 0C0709E8 mov.l @(disp,pc),Rn */
	r8 = R32(r9); UPD(0x0C0709ECu, 1);  /* 0C0709EA mov.l @Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0709EC tst Rm,Rn */
	if (!T) { UPD(0x0C070A20u, 4); goto L_0C070A20; }  /* 0C0709EE bf */
L_0C0709F0: BLKS(0x0C0709F0u);
	r3 = 0xC175068u; UPD(0x0C0709F2u, 1);  /* 0C0709F0 mov.l @(disp,pc),Rn */
	r10 = 0xC3CC310u; UPD(0x0C0709F4u, 1);  /* 0C0709F2 mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C0709F6u, 1);  /* 0C0709F4 mov.l @Rm,Rn */
	r1 = R32(r10); UPD(0x0C0709F8u, 1);  /* 0C0709F6 mov.l @Rm,Rn */
	T = (s32)r2 >= (s32)r1;  /* 0C0709F8 cmp/ge Rm,Rn */
	{ u32 c_ = T; T = (s32)r2 > (s32)r1; /* slot cmp/gt Rm,Rn */ if (c_) { UPD(0x0C070A04u, 4); goto L_0C070A04; } goto L_0C0709FE; }  /* 0C0709FA bt/s */
L_0C0709FE: BLKS(0x0C0709FEu);
	W32(r3, r1); UPD(0x0C070A00u, 2);  /* 0C0709FE mov.l Rm,@Rn */
	r2 = r1;  /* 0C070A00 mov Rm,Rn */
	T = (s32)r2 > (s32)r1;  /* 0C070A02 cmp/gt Rm,Rn */
	UPD(0x0C070A04u, 2);
L_0C070A04: BLKS(0x0C070A04u);
	{ u32 c_ = !T; r11 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C070A20u, 3); goto L_0C070A20; } goto L_0C070A08; }  /* 0C070A04 bf/s */
L_0C070A08: BLKS(0x0C070A08u);
	r11 -= r1;  /* 0C070A08 sub Rm,Rn */
	IF(0x0C070A0Au); T = (s32)r11 >= 0;  /* 0C070A0A cmp/pz Rn */
	{ u32 c_ = T; r1 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C070A14u, 6); goto L_0C070A14; } goto L_0C070A10; }  /* 0C070A0C bt/s */
L_0C070A10: BLKS(0x0C070A10u);
	{ r1 += 0x7u; /* slot add #imm,Rn */ UPD(0x0C070D90u, 4); goto L_0C070D90; }  /* 0C070A10 bra */
L_0C070A14: BLKS(0x0C070A14u);
	IF(0x0C070A14u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C070A14 shar Rn */
	UPD(0x0C070A16u, 1);
L_0C070A16: BLKS(0x0C070A16u);
	IF(0x0C070A16u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C070A16 shar Rn */
	IF(0x0C070A18u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C070A18 shar Rn */
	r2 -= r1;  /* 0C070A1A sub Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C070A1C add #imm,Rn */
	W32(r3, r2); UPD(0x0C070A20u, 5);  /* 0C070A1E mov.l Rm,@Rn */
L_0C070A20: BLKS(0x0C070A20u);
	r8 = 0xC175064u; UPD(0x0C070A22u, 1);  /* 0C070A20 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C070A24u, 1);  /* 0C070A22 mov.l @Rm,Rn */
	T = r0 == 0x1u;  /* 0C070A24 cmp/eq #imm,r0 */
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C070A30u, 4); goto L_0C070A30; } goto L_0C070A2A; }  /* 0C070A26 bf/s */
L_0C070A2A: BLKS(0x0C070A2Au);
	{ r2 = 0x2u; /* slot mov #imm,Rn */ UPD(0x0C070D70u, 4); goto L_0C070D70; }  /* 0C070A2A bra */
L_0C070A2E: BLKS(0x0C070A2Eu);
	T = r0 == 0x2u;  /* 0C070A2E cmp/eq #imm,r0 */
	UPD(0x0C070A30u, 1);
L_0C070A30: BLKS(0x0C070A30u);
	if (!T) { UPD(0x0C070A36u, 3); goto L_0C070A36; }  /* 0C070A30 bf */
L_0C070A32: BLKS(0x0C070A32u);
	{ IF(0x0C070A34u); ; /* slot nop */ UPD(0x0C070D30u, 3); goto L_0C070D30; }  /* 0C070A32 bra */
L_0C070A36: BLKS(0x0C070A36u);
	r2 = 0xC175064u; UPD(0x0C070A38u, 1);  /* 0C070A36 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C070A3Au, 1);  /* 0C070A38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C070A3A cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C070A42u, 4); goto L_0C070A42; }  /* 0C070A3C bf */
L_0C070A3E: BLKS(0x0C070A3Eu);
	{ IF(0x0C070A40u); ; /* slot nop */ UPD(0x0C070D10u, 3); goto L_0C070D10; }  /* 0C070A3E bra */
L_0C070A42: BLKS(0x0C070A42u);
	r2 = 0xC175064u; UPD(0x0C070A44u, 1);  /* 0C070A42 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C070A46u, 1);  /* 0C070A44 mov.l @Rm,Rn */
	T = r0 == 0x4u;  /* 0C070A46 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C070A4Eu, 4); goto L_0C070A4E; }  /* 0C070A48 bf */
L_0C070A4A: BLKS(0x0C070A4Au);
	{ IF(0x0C070A4Cu); ; /* slot nop */ UPD(0x0C070C40u, 3); goto L_0C070C40; }  /* 0C070A4A bra */
L_0C070A4E: BLKS(0x0C070A4Eu);
	r8 = 0xC207500u; UPD(0x0C070A50u, 1);  /* 0C070A4E mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C070A50 add #imm,Rn */
	r12 = R32(r8); UPD(0x0C070A54u, 2);  /* 0C070A52 mov.l @Rm,Rn */
	r9 = r12;  /* 0C070A54 mov Rm,Rn */
	IF(0x0C070A56u); T = r9 >> 31; r9 = (r9 << 1) | T;  /* 0C070A56 rotl Rn */
	r13 = 0xC175050u; UPD(0x0C070A5Au, 3);  /* 0C070A58 mov.l @(disp,pc),Rn */
	IF(0x0C070A5Au); r6 = T;  /* 0C070A5A movt Rn */
	r10 = R32(r13); UPD(0x0C070A5Eu, 2);  /* 0C070A5C mov.l @Rm,Rn */
	r12 += r6;  /* 0C070A5E add Rm,Rn */
	r11 = 0xC2289E8u; UPD(0x0C070A62u, 2);  /* 0C070A60 mov.l @(disp,pc),Rn */
	IF(0x0C070A62u); T = r12 & 1; r12 = (u32)((s32)r12 >> 1);  /* 0C070A62 shar Rn */
	r8 = 0xC3C4048u; UPD(0x0C070A66u, 2);  /* 0C070A64 mov.l @(disp,pc),Rn */
	r6 = 0u - r12;  /* 0C070A66 neg Rm,Rn */
	W32(r11, r10); UPD(0x0C070A6Au, 2);  /* 0C070A68 mov.l Rm,@Rn */
	r6 += 0x6Fu;  /* 0C070A6A add #imm,Rn */
	r1 = 0xC174FA4u; UPD(0x0C070A6Eu, 2);  /* 0C070A6C mov.l @(disp,pc),Rn */
	IF(0x0C070A6Eu); r6 <<= 16;  /* 0C070A6E shll16 Rn */
	r3 = 0xC3C86B0u; UPD(0x0C070A72u, 2);  /* 0C070A70 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C070A72 mov #imm,Rn */
	r7 = R32(r8); UPD(0x0C070A76u, 2);  /* 0C070A74 mov.l @Rm,Rn */
	r0 = 0xC073B10u; UPD(0x0C070A78u, 1);  /* 0C070A76 mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C070A78 add Rm,Rn */
	W32(r3, r1); UPD(0x0C070A7Cu, 2);  /* 0C070A7A mov.l Rm,@Rn */
	r12 = 0x808080u; UPD(0x0C070A7Eu, 1);  /* 0C070A7C mov.l @(disp,pc),Rn */
	r10 = 0x10000000u; UPD(0x0C070A80u, 1);  /* 0C070A7E mov.l @(disp,pc),Rn */
	r7 = r12;  /* 0C070A80 mov Rm,Rn */
	r11 = 0x12C0000u; UPD(0x0C070A84u, 2);  /* 0C070A82 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C070A84 mov Rm,Rn */
	W32(r15, r9); UPD(0x0C070A88u, 2);  /* 0C070A86 mov.l Rm,@Rn */
	IF(0x0C070A88u); { u32 t_ = r0; PR = 0x0C070A8Cu; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C070A8Cu); }  /* 0C070A88 jsr @Rn */
L_0C070A8C: BLKS(0x0C070A8Cu);
	r1 = 0xC207500u; UPD(0x0C070A8Eu, 1);  /* 0C070A8C mov.l @(disp,pc),Rn */
	r7 = r12;  /* 0C070A8E mov Rm,Rn */
	r5 = 0xC175050u; UPD(0x0C070A92u, 2);  /* 0C070A90 mov.l @(disp,pc),Rn */
	r12 = 0x2Cu;  /* 0C070A92 mov #imm,Rn */
	r6 = R32(r1); UPD(0x0C070A96u, 2);  /* 0C070A94 mov.l @Rm,Rn */
	r2 = R32(r5 + 0x4u); UPD(0x0C070A98u, 1);  /* 0C070A96 mov.l @(disp,Rm),Rn */
	r3 = r6;  /* 0C070A98 mov Rm,Rn */
	r4 = 0xC2289E8u; UPD(0x0C070A9Cu, 2);  /* 0C070A9A mov.l @(disp,pc),Rn */
	IF(0x0C070A9Cu); T = r3 >> 31; r3 = (r3 << 1) | T;  /* 0C070A9C rotl Rn */
	W32(r4, r2); UPD(0x0C070AA0u, 2);  /* 0C070A9E mov.l Rm,@Rn */
	IF(0x0C070AA0u); r13 = T;  /* 0C070AA0 movt Rn */
	r0 = R32(r8); UPD(0x0C070AA4u, 2);  /* 0C070AA2 mov.l @Rm,Rn */
	r13 += r6;  /* 0C070AA4 add Rm,Rn */
	W32(r15, r9); UPD(0x0C070AA8u, 2);  /* 0C070AA6 mov.l Rm,@Rn */
	IF(0x0C070AA8u); T = r13 & 1; r13 = (u32)((s32)r13 >> 1);  /* 0C070AA8 shar Rn */
	r9 = 0xC073B10u; UPD(0x0C070AACu, 2);  /* 0C070AAA mov.l @(disp,pc),Rn */
	r6 -= r13;  /* 0C070AAC sub Rm,Rn */
	r6 += 0x78u;  /* 0C070AAE add #imm,Rn */
	IF(0x0C070AB0u); r6 <<= 16;  /* 0C070AB0 shll16 Rn */
	r6 += r0;  /* 0C070AB2 add Rm,Rn */
	r4 = r10;  /* 0C070AB4 mov Rm,Rn */
	IF(0x0C070AB6u); { u32 t_ = r9; PR = 0x0C070ABAu; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 7); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C070ABAu); }  /* 0C070AB6 jsr @Rn */
L_0C070ABA: BLKS(0x0C070ABAu);
	r7 = 0xC207500u; UPD(0x0C070ABCu, 1);  /* 0C070ABA mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C070ABC mov #imm,Rn */
	r6 = R32(r7); UPD(0x0C070AC0u, 2);  /* 0C070ABE mov.l @Rm,Rn */
	T = (s32)r9 >= (s32)r6;  /* 0C070AC0 cmp/ge Rm,Rn */
	{ u32 c_ = T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C070B54u, 4); goto L_0C070B54; } goto L_0C070AC6; }  /* 0C070AC2 bt/s */
L_0C070AC6: BLKS(0x0C070AC6u);
	r11 = 0xC073B10u; UPD(0x0C070AC8u, 2);  /* 0C070AC6 mov.l @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C070AC8 mov #imm,Rn */
	IF(0x0C070ACAu); ;  /* 0C070ACA nop */
	UPD(0x0C070ACCu, 2);
L_0C070ACC: BLKS(0x0C070ACCu);
	r4 = 0xC207500u; UPD(0x0C070ACEu, 1);  /* 0C070ACC mov.l @(disp,pc),Rn */
	r10 = r9;  /* 0C070ACE mov Rm,Rn */
	r2 = R32(r4); UPD(0x0C070AD2u, 2);  /* 0C070AD0 mov.l @Rm,Rn */
	r10 += 0x2Cu;  /* 0C070AD2 add #imm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C070AD4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C070ADCu, 5); goto L_0C070ADC; }  /* 0C070AD6 bf */
L_0C070AD8: BLKS(0x0C070AD8u);
	r12 = r2;  /* 0C070AD8 mov Rm,Rn */
	r12 -= r9;  /* 0C070ADA sub Rm,Rn */
	UPD(0x0C070ADCu, 2);
L_0C070ADC: BLKS(0x0C070ADCu);
	r1 = 0xC175050u; UPD(0x0C070ADEu, 1);  /* 0C070ADC mov.l @(disp,pc),Rn */
	r3 = r2;  /* 0C070ADE mov Rm,Rn */
	r0 = R32(r1 + 0x8u); UPD(0x0C070AE2u, 2);  /* 0C070AE0 mov.l @(disp,Rm),Rn */
	IF(0x0C070AE2u); T = r3 >> 31; r3 = (r3 << 1) | T;  /* 0C070AE2 rotl Rn */
	r8 = 0xC2289E8u; UPD(0x0C070AE6u, 2);  /* 0C070AE4 mov.l @(disp,pc),Rn */
	IF(0x0C070AE6u); r6 = T;  /* 0C070AE6 movt Rn */
	W32(r8, r0); UPD(0x0C070AEAu, 2);  /* 0C070AE8 mov.l Rm,@Rn */
	r2 += r6;  /* 0C070AEA add Rm,Rn */
	r8 = r12;  /* 0C070AEC mov Rm,Rn */
	r5 = 0xF00u; UPD(0x0C070AF0u, 3);  /* 0C070AEE mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFFFu;  /* 0C070AF0 add #imm,Rn */
	r4 = 0xC175036u; UPD(0x0C070AF4u, 2);  /* 0C070AF2 mov.l @(disp,pc),Rn */
	IF(0x0C070AF4u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C070AF4 shar Rn */
	r5 |= r8;  /* 0C070AF6 or Rm,Rn */
	r1 = 0xC3C4048u; UPD(0x0C070AFAu, 3);  /* 0C070AF8 mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C070AFA mov Rm,Rn */
	W16(r4, r5); UPD(0x0C070AFEu, 2);  /* 0C070AFC mov.w Rm,@Rn */
	r6 -= r2;  /* 0C070AFE sub Rm,Rn */
	r0 = R32(r1); UPD(0x0C070B02u, 2);  /* 0C070B00 mov.l @Rm,Rn */
	r6 += 0x78u;  /* 0C070B02 add #imm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C070B04 add #imm,Rn */
	r4 = 0x10000000u; UPD(0x0C070B08u, 3);  /* 0C070B06 mov.l @(disp,pc),Rn */
	IF(0x0C070B08u); r6 <<= 16;  /* 0C070B08 shll16 Rn */
	r6 += r0;  /* 0C070B0A add Rm,Rn */
	r5 = 0x12C0000u; UPD(0x0C070B0Eu, 3);  /* 0C070B0C mov.l @(disp,pc),Rn */
	r7 = 0x808080u; UPD(0x0C070B10u, 1);  /* 0C070B0E mov.l @(disp,pc),Rn */
	IF(0x0C070B10u); { u32 t_ = r11; PR = 0x0C070B14u; W32(r15, r13); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C070B14u); }  /* 0C070B10 jsr @Rn */
L_0C070B14: BLKS(0x0C070B14u);
	r4 = 0x500u; UPD(0x0C070B16u, 1);  /* 0C070B14 mov.w @(disp,pc),Rn */
	r3 = 0xC175040u; UPD(0x0C070B18u, 1);  /* 0C070B16 mov.l @(disp,pc),Rn */
	r8 |= r4;  /* 0C070B18 or Rm,Rn */
	r1 = 0xC207500u; UPD(0x0C070B1Cu, 2);  /* 0C070B1A mov.l @(disp,pc),Rn */
	W16(r3, r8); UPD(0x0C070B1Eu, 1);  /* 0C070B1C mov.w Rm,@Rn */
	r6 = R32(r1); UPD(0x0C070B20u, 1);  /* 0C070B1E mov.l @Rm,Rn */
	r7 = 0xC175050u; UPD(0x0C070B22u, 1);  /* 0C070B20 mov.l @(disp,pc),Rn */
	r8 = r6;  /* 0C070B22 mov Rm,Rn */
	r2 = R32(r7 + 0xCu); UPD(0x0C070B26u, 2);  /* 0C070B24 mov.l @(disp,Rm),Rn */
	IF(0x0C070B26u); T = r8 >> 31; r8 = (r8 << 1) | T;  /* 0C070B26 rotl Rn */
	IF(0x0C070B28u); r7 = T;  /* 0C070B28 movt Rn */
	r5 = 0xC2289E8u; UPD(0x0C070B2Cu, 3);  /* 0C070B2A mov.l @(disp,pc),Rn */
	r7 += r6;  /* 0C070B2C add Rm,Rn */
	IF(0x0C070B2Eu); T = r7 & 1; r7 = (u32)((s32)r7 >> 1);  /* 0C070B2E shar Rn */
	r0 = 0xC3C4048u; UPD(0x0C070B32u, 3);  /* 0C070B30 mov.l @(disp,pc),Rn */
	r9 -= r7;  /* 0C070B32 sub Rm,Rn */
	W32(r5, r2); UPD(0x0C070B36u, 2);  /* 0C070B34 mov.l Rm,@Rn */
	r9 += 0x78u;  /* 0C070B36 add #imm,Rn */
	r6 = R32(r0); UPD(0x0C070B3Au, 2);  /* 0C070B38 mov.l @Rm,Rn */
	IF(0x0C070B3Au); r9 <<= 16;  /* 0C070B3A shll16 Rn */
	r5 = 0x1270000u; UPD(0x0C070B3Eu, 2);  /* 0C070B3C mov.l @(disp,pc),Rn */
	r6 += r9;  /* 0C070B3E add Rm,Rn */
	W32(r15, r13); UPD(0x0C070B42u, 2);  /* 0C070B40 mov.l Rm,@Rn */
	r4 = 0x12048080u; UPD(0x0C070B44u, 1);  /* 0C070B42 mov.l @(disp,pc),Rn */
	r7 = 0x808080u; UPD(0x0C070B46u, 1);  /* 0C070B44 mov.l @(disp,pc),Rn */
	IF(0x0C070B46u); { u32 t_ = r11; PR = 0x0C070B4Au; r9 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C070B4Au); }  /* 0C070B46 jsr @Rn */
L_0C070B4A: BLKS(0x0C070B4Au);
	r5 = 0xC207500u; UPD(0x0C070B4Cu, 1);  /* 0C070B4A mov.l @(disp,pc),Rn */
	r2 = R32(r5); UPD(0x0C070B4Eu, 1);  /* 0C070B4C mov.l @Rm,Rn */
	T = (s32)r10 >= (s32)r2;  /* 0C070B4E cmp/ge Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C070ACCu, 4); goto L_0C070ACC; } UPD(0x0C070B54u, 1); goto L_0C070B54; }  /* 0C070B50 bf/s */
L_0C070B54: BLKS(0x0C070B54u);
	r10 = 0xC175050u; UPD(0x0C070B56u, 1);  /* 0C070B54 mov.l @(disp,pc),Rn */
	r12 = 0xC175068u; UPD(0x0C070B58u, 1);  /* 0C070B56 mov.l @(disp,pc),Rn */
	r11 = R32(r10 + 0x10u); UPD(0x0C070B5Au, 1);  /* 0C070B58 mov.l @(disp,Rm),Rn */
	r9 = 0xC2289E8u; UPD(0x0C070B5Cu, 1);  /* 0C070B5A mov.l @(disp,pc),Rn */
	r8 = R32(r12); UPD(0x0C070B5Eu, 1);  /* 0C070B5C mov.l @Rm,Rn */
	IF(0x0C070B5Eu); T = (s32)r8 > 0;  /* 0C070B5E cmp/pl Rn */
	{ u32 c_ = !T; W32(r9, r11); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C070C00u, 4); goto L_0C070C00; } UPD(0x0C070B64u, 1); goto L_0C070B64; }  /* 0C070B60 bf/s */
L_0C070B64: BLKS(0x0C070B64u);
	r3 = 0xC207500u; UPD(0x0C070B66u, 1);  /* 0C070B64 mov.l @(disp,pc),Rn */
	r6 = R32(r3); UPD(0x0C070B68u, 1);  /* 0C070B66 mov.l @Rm,Rn */
	r7 = 0xC3CA700u; UPD(0x0C070B6Au, 1);  /* 0C070B68 mov.l @(disp,pc),Rn */
	IF(0x0C070B6Au); MACL = r8 * r6;  /* 0C070B6A mul.l Rm,Rn */
	r13 = 0xC0C2494u; UPD(0x0C070B6Eu, 3);  /* 0C070B6C mov.l @(disp,pc),Rn */
	r2 = R32(r7); UPD(0x0C070B70u, 1);  /* 0C070B6E mov.l @Rm,Rn */
	IF(0x0C070B70u); r4 = MACL;  /* 0C070B70 sts macl,Rn */
	IF(0x0C070B72u); { u32 t_ = r13; PR = 0x0C070B76u; r5 = r2; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2494, 0x0C0C2494u, 0x0C070B76u); }  /* 0C070B72 jsr @Rn */
L_0C070B76: BLKS(0x0C070B76u);
	r4 = r8;  /* 0C070B76 mov Rm,Rn */
	IF(0x0C070B78u); r4 <<= 8;  /* 0C070B78 shll8 Rn */
	r10 = r0;  /* 0C070B7A mov Rm,Rn */
	IF(0x0C070B7Cu); { u32 t_ = r13; PR = 0x0C070B80u; r4 -= r8; /* slot sub Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0C2494, 0x0C0C2494u, 0x0C070B80u); }  /* 0C070B7C jsr @Rn */
L_0C070B80: BLKS(0x0C070B80u);
	T = (r10 & r10) == 0;  /* 0C070B80 tst Rm,Rn */
	if (!T) { UPD(0x0C070B86u, 4); goto L_0C070B86; }  /* 0C070B82 bf */
L_0C070B84: BLKS(0x0C070B84u);
	r10 = 0x1u;  /* 0C070B84 mov #imm,Rn */
	UPD(0x0C070B86u, 1);
L_0C070B86: BLKS(0x0C070B86u);
	r4 = 0xFFu; UPD(0x0C070B88u, 1);  /* 0C070B86 mov.w @(disp,pc),Rn */
	r0 += r0;  /* 0C070B88 add Rm,Rn */
	r7 = r4;  /* 0C070B8A mov Rm,Rn */
	r7 -= r0;  /* 0C070B8C sub Rm,Rn */
	IF(0x0C070B8Eu); T = (s32)r7 >= 0;  /* 0C070B8E cmp/pz Rn */
	if (!T) { UPD(0x0C070C30u, 7); goto L_0C070C30; }  /* 0C070B90 bf */
L_0C070B92: BLKS(0x0C070B92u);
	T = (s32)r0 > (s32)r4;  /* 0C070B92 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C070B9Au, 4); goto L_0C070B9A; } goto L_0C070B98; }  /* 0C070B94 bf/s */
L_0C070B98: BLKS(0x0C070B98u);
	r1 = r4;  /* 0C070B98 mov Rm,Rn */
	UPD(0x0C070B9Au, 2);
L_0C070B9A: BLKS(0x0C070B9Au);
	r0 -= r4;  /* 0C070B9A sub Rm,Rn */
	IF(0x0C070B9Cu); T = (s32)r0 >= 0;  /* 0C070B9C cmp/pz Rn */
	{ u32 c_ = !T; r4 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C070C20u, 5); goto L_0C070C20; } UPD(0x0C070BA2u, 1); goto L_0C070BA2; }  /* 0C070B9E bf/s */
L_0C070BA2: BLKS(0x0C070BA2u);
	r11 = r7;  /* 0C070BA2 mov Rm,Rn */
	IF(0x0C070BA4u); r11 <<= 16;  /* 0C070BA4 shll16 Rn */
	IF(0x0C070BA6u); r1 <<= 8;  /* 0C070BA6 shll8 Rn */
	r11 |= r1;  /* 0C070BA8 or Rm,Rn */
	r9 = 0x0u;  /* 0C070BAA mov #imm,Rn */
	r12 = 0x2Cu;  /* 0C070BAC mov #imm,Rn */
	T = (s32)r9 >= (s32)r10;  /* 0C070BAE cmp/ge Rm,Rn */
	{ u32 c_ = T; r11 |= r4; /* slot or Rm,Rn */ if (c_) { UPD(0x0C070C00u, 10); goto L_0C070C00; } goto L_0C070BB4; }  /* 0C070BB0 bt/s */
L_0C070BB4: BLKS(0x0C070BB4u);
	r13 = 0xC073B10u; UPD(0x0C070BB6u, 2);  /* 0C070BB4 mov.l @(disp,pc),Rn */
	IF(0x0C070BB6u); ;  /* 0C070BB6 nop */
	UPD(0x0C070BB8u, 1);
L_0C070BB8: BLKS(0x0C070BB8u);
	r8 = r9;  /* 0C070BB8 mov Rm,Rn */
	r8 += 0x2Cu;  /* 0C070BBA add #imm,Rn */
	T = (s32)r8 > (s32)r10;  /* 0C070BBC cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C070BC4u, 6); goto L_0C070BC4; }  /* 0C070BBE bf */
L_0C070BC0: BLKS(0x0C070BC0u);
	r12 = r10;  /* 0C070BC0 mov Rm,Rn */
	r12 -= r9;  /* 0C070BC2 sub Rm,Rn */
	UPD(0x0C070BC4u, 2);
L_0C070BC4: BLKS(0x0C070BC4u);
	r2 = 0xC207500u; UPD(0x0C070BC6u, 1);  /* 0C070BC4 mov.l @(disp,pc),Rn */
	r3 = r12;  /* 0C070BC6 mov Rm,Rn */
	r0 = R32(r2); UPD(0x0C070BCAu, 2);  /* 0C070BC8 mov.l @Rm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C070BCA add #imm,Rn */
	r4 = 0x500u; UPD(0x0C070BCEu, 2);  /* 0C070BCC mov.w @(disp,pc),Rn */
	r7 = r0;  /* 0C070BCE mov Rm,Rn */
	r6 = 0xC17504Au; UPD(0x0C070BD2u, 2);  /* 0C070BD0 mov.l @(disp,pc),Rn */
	IF(0x0C070BD2u); T = r7 >> 31; r7 = (r7 << 1) | T;  /* 0C070BD2 rotl Rn */
	r3 |= r4;  /* 0C070BD4 or Rm,Rn */
	IF(0x0C070BD6u); r1 = T;  /* 0C070BD6 movt Rn */
	W16(r6, r3); UPD(0x0C070BDAu, 4);  /* 0C070BD8 mov.w Rm,@Rn */
	r0 += r1;  /* 0C070BDA add Rm,Rn */
	r5 = 0xC3C4048u; UPD(0x0C070BDEu, 2);  /* 0C070BDC mov.l @(disp,pc),Rn */
	IF(0x0C070BDEu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C070BDE shar Rn */
	r6 = R32(r5); UPD(0x0C070BE2u, 2);  /* 0C070BE0 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C070BE2 add #imm,Rn */
	r9 -= r0;  /* 0C070BE4 sub Rm,Rn */
	r4 = 0x0u;  /* 0C070BE6 mov #imm,Rn */
	W32(r15, r4); UPD(0x0C070BEAu, 4);  /* 0C070BE8 mov.l Rm,@Rn */
	r9 += 0x78u;  /* 0C070BEA add #imm,Rn */
	IF(0x0C070BECu); r9 <<= 16;  /* 0C070BEC shll16 Rn */
	r6 += r9;  /* 0C070BEE add Rm,Rn */
	r4 = 0x10000000u; UPD(0x0C070BF2u, 4);  /* 0C070BF0 mov.l @(disp,pc),Rn */
	r5 = 0x1270000u; UPD(0x0C070BF4u, 1);  /* 0C070BF2 mov.l @(disp,pc),Rn */
	IF(0x0C070BF4u); { u32 t_ = r13; PR = 0x0C070BF8u; r7 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C070BF8u); }  /* 0C070BF4 jsr @Rn */
L_0C070BF8: BLKS(0x0C070BF8u);
	r15 += 0x4u;  /* 0C070BF8 add #imm,Rn */
	T = (s32)r8 >= (s32)r10;  /* 0C070BFA cmp/ge Rm,Rn */
	{ u32 c_ = !T; r9 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C070BB8u, 5); goto L_0C070BB8; } UPD(0x0C070C00u, 1); goto L_0C070C00; }  /* 0C070BFC bf/s */
L_0C070C00: BLKS(0x0C070C00u);
	r15 = r14;  /* 0C070C00 mov Rm,Rn */
	IF(0x0C070C02u); PR = R32(r15); r15 += 4; UPD(0x0C070C04u, 2);  /* 0C070C02 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C070C06u, 1);  /* 0C070C04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C070C08u, 1);  /* 0C070C06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C070C0Au, 1);  /* 0C070C08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C070C0Cu, 1);  /* 0C070C0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C070C0Eu, 1);  /* 0C070C0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070C10u, 1);  /* 0C070C0E mov.l @Rm+,Rn */
	IF(0x0C070C10u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C070C10 rts */
L_0C070C20: BLKS(0x0C070C20u);
	{ r4 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C070BA2u, 3); goto L_0C070BA2; }  /* 0C070C20 bra */
L_0C070C30: BLKS(0x0C070C30u);
	{ r7 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C070B92u, 3); goto L_0C070B92; }  /* 0C070C30 bra */
L_0C070C40: BLKS(0x0C070C40u);
	r6 = 0xC22E024u; UPD(0x0C070C42u, 1);  /* 0C070C40 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C070C44u, 1);  /* 0C070C42 mov.b @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C070C44 tst Rm,Rn */
	if (!T) { UPD(0x0C070C60u, 4); goto L_0C070C60; }  /* 0C070C46 bf */
L_0C070C48: BLKS(0x0C070C48u);
	r8 = 0xC29D194u; UPD(0x0C070C4Au, 1);  /* 0C070C48 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C070C4Cu, 1);  /* 0C070C4A mov.b @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C070C4C tst Rm,Rn */
	if (!T) { UPD(0x0C070C60u, 4); goto L_0C070C60; }  /* 0C070C4E bf */
L_0C070C50: BLKS(0x0C070C50u);
	r10 = 0xC3C8474u; UPD(0x0C070C52u, 1);  /* 0C070C50 mov.l @(disp,pc),Rn */
	r9 = R32(r10); UPD(0x0C070C54u, 1);  /* 0C070C52 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C070C54 tst Rm,Rn */
	if (!T) { UPD(0x0C070C60u, 4); goto L_0C070C60; }  /* 0C070C56 bf */
L_0C070C58: BLKS(0x0C070C58u);
	r11 = 0xC207500u; UPD(0x0C070C5Au, 1);  /* 0C070C58 mov.l @(disp,pc),Rn */
	r12 = R32(r11); UPD(0x0C070C5Cu, 1);  /* 0C070C5A mov.l @Rm,Rn */
	r12 += 0xFFFFFFFEu;  /* 0C070C5C add #imm,Rn */
	W32(r11, r12); UPD(0x0C070C60u, 2);  /* 0C070C5E mov.l Rm,@Rn */
L_0C070C60: BLKS(0x0C070C60u);
	r1 = 0xC207500u; UPD(0x0C070C62u, 1);  /* 0C070C60 mov.l @(disp,pc),Rn */
	r13 = R32(r1); UPD(0x0C070C64u, 1);  /* 0C070C62 mov.l @Rm,Rn */
	IF(0x0C070C64u); T = (s32)r13 > 0;  /* 0C070C64 cmp/pl Rn */
	{ u32 c_ = !T; r4 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C070C6Eu, 4); goto L_0C070C6E; } goto L_0C070C6A; }  /* 0C070C66 bf/s */
L_0C070C6A: BLKS(0x0C070C6Au);
	{ IF(0x0C070C6Cu); ; /* slot nop */ UPD(0x0C070A4Eu, 4); goto L_0C070A4E; }  /* 0C070C6A bra */
L_0C070C6E: BLKS(0x0C070C6Eu);
	r8 = 0xC062000u; UPD(0x0C070C70u, 1);  /* 0C070C6E mov.l @(disp,pc),Rn */
	r5 = 0xC207500u; UPD(0x0C070C72u, 1);  /* 0C070C70 mov.l @(disp,pc),Rn */
	r2 = 0xC175064u; UPD(0x0C070C74u, 1);  /* 0C070C72 mov.l @(disp,pc),Rn */
	r3 = 0xC3CC308u; UPD(0x0C070C76u, 1);  /* 0C070C74 mov.l @(disp,pc),Rn */
	W32(r5, r4); UPD(0x0C070C78u, 1);  /* 0C070C76 mov.l Rm,@Rn */
	W32(r2, r4); UPD(0x0C070C7Au, 1);  /* 0C070C78 mov.l Rm,@Rn */
	IF(0x0C070C7Au); { u32 t_ = r8; PR = 0x0C070C7Eu; W32(r3, r4); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C070C7Eu); }  /* 0C070C7A jsr @Rn */
L_0C070C7E: BLKS(0x0C070C7Eu);
	r0 = 0xC06D5A0u; UPD(0x0C070C80u, 1);  /* 0C070C7E mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C070C80 mov Rm,Rn */
	IF(0x0C070C82u); PR = R32(r15); r15 += 4; UPD(0x0C070C84u, 2);  /* 0C070C82 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C070C86u, 1);  /* 0C070C84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C070C88u, 1);  /* 0C070C86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C070C8Au, 1);  /* 0C070C88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C070C8Cu, 1);  /* 0C070C8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C070C8Eu, 1);  /* 0C070C8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070C90u, 1);  /* 0C070C8E mov.l @Rm+,Rn */
	IF(0x0C070C90u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06D5A0u: TAIL(blk_f_0C06D5A0); default: JUMPD(tv_); } }  /* 0C070C90 jmp @Rn */
L_0C070D10: BLKS(0x0C070D10u);
	r3 = 0xC3CC310u; UPD(0x0C070D12u, 1);  /* 0C070D10 mov.l @(disp,pc),Rn */
	r0 = R32(r3); UPD(0x0C070D14u, 1);  /* 0C070D12 mov.l @Rm,Rn */
	IF(0x0C070D14u); T = (s32)r0 > 0;  /* 0C070D14 cmp/pl Rn */
	{ u32 c_ = T; r4 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C070D20u, 4); goto L_0C070D20; } goto L_0C070D1A; }  /* 0C070D16 bt/s */
L_0C070D1A: BLKS(0x0C070D1Au);
	W32(r3, r4); UPD(0x0C070D1Cu, 2);  /* 0C070D1A mov.l Rm,@Rn */
	r3 = 0x4u;  /* 0C070D1C mov #imm,Rn */
	W32(r2, r3); UPD(0x0C070D20u, 2);  /* 0C070D1E mov.l Rm,@Rn */
L_0C070D20: BLKS(0x0C070D20u);
	{ IF(0x0C070D22u); ; /* slot nop */ UPD(0x0C070A42u, 3); goto L_0C070A42; }  /* 0C070D20 bra */
L_0C070D30: BLKS(0x0C070D30u);
	r5 = 0xC22E024u; UPD(0x0C070D32u, 1);  /* 0C070D30 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C070D34u, 1);  /* 0C070D32 mov.b @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C070D34 tst Rm,Rn */
	if (!T) { UPD(0x0C070D50u, 4); goto L_0C070D50; }  /* 0C070D36 bf */
L_0C070D38: BLKS(0x0C070D38u);
	r7 = 0xC29D194u; UPD(0x0C070D3Au, 1);  /* 0C070D38 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C070D3Cu, 1);  /* 0C070D3A mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C070D3C tst Rm,Rn */
	if (!T) { UPD(0x0C070D50u, 4); goto L_0C070D50; }  /* 0C070D3E bf */
L_0C070D40: BLKS(0x0C070D40u);
	r9 = 0xC3C8474u; UPD(0x0C070D42u, 1);  /* 0C070D40 mov.l @(disp,pc),Rn */
	r8 = R32(r9); UPD(0x0C070D44u, 1);  /* 0C070D42 mov.l @Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C070D44 tst Rm,Rn */
	if (!T) { UPD(0x0C070D50u, 4); goto L_0C070D50; }  /* 0C070D46 bf */
L_0C070D48: BLKS(0x0C070D48u);
	r10 = 0xC207500u; UPD(0x0C070D4Au, 1);  /* 0C070D48 mov.l @(disp,pc),Rn */
	r11 = R32(r10); UPD(0x0C070D4Cu, 1);  /* 0C070D4A mov.l @Rm,Rn */
	r11 += 0x1u;  /* 0C070D4C add #imm,Rn */
	W32(r10, r11); UPD(0x0C070D50u, 2);  /* 0C070D4E mov.l Rm,@Rn */
L_0C070D50: BLKS(0x0C070D50u);
	r7 = 0xC207500u; UPD(0x0C070D52u, 1);  /* 0C070D50 mov.l @(disp,pc),Rn */
	r1 = 0xDDu; UPD(0x0C070D54u, 1);  /* 0C070D52 mov.w @(disp,pc),Rn */
	r12 = R32(r7); UPD(0x0C070D56u, 1);  /* 0C070D54 mov.l @Rm,Rn */
	T = (s32)r12 > (s32)r1;  /* 0C070D56 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C070D64u, 4); goto L_0C070D64; } goto L_0C070D5C; }  /* 0C070D58 bf/s */
L_0C070D5C: BLKS(0x0C070D5Cu);
	W32(r7, r1); UPD(0x0C070D5Eu, 2);  /* 0C070D5C mov.l Rm,@Rn */
	r13 = 0xC175064u; UPD(0x0C070D60u, 1);  /* 0C070D5E mov.l @(disp,pc),Rn */
	r1 = 0x3u;  /* 0C070D60 mov #imm,Rn */
	W32(r13, r1); UPD(0x0C070D64u, 2);  /* 0C070D62 mov.l Rm,@Rn */
L_0C070D64: BLKS(0x0C070D64u);
	{ IF(0x0C070D66u); ; /* slot nop */ UPD(0x0C070A36u, 3); goto L_0C070A36; }  /* 0C070D64 bra */
L_0C070D70: BLKS(0x0C070D70u);
	r13 = 0xC062000u; UPD(0x0C070D72u, 1);  /* 0C070D70 mov.l @(disp,pc),Rn */
	r3 = 0xC207500u; UPD(0x0C070D74u, 1);  /* 0C070D72 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C070D74 mov #imm,Rn */
	r12 = 0xC06D5A0u; UPD(0x0C070D78u, 2);  /* 0C070D76 mov.l @(disp,pc),Rn */
	W32(r8, r2); UPD(0x0C070D7Au, 1);  /* 0C070D78 mov.l Rm,@Rn */
	IF(0x0C070D7Au); { u32 t_ = r13; PR = 0x0C070D7Eu; W32(r3, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C070D7Eu); }  /* 0C070D7A jsr @Rn */
L_0C070D7E: BLKS(0x0C070D7Eu);
	IF(0x0C070D7Eu); { u32 t_ = r12; PR = 0x0C070D82u; IF(0x0C070D80u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D5A0, 0x0C06D5A0u, 0x0C070D82u); }  /* 0C070D7E jsr @Rn */
L_0C070D82: BLKS(0x0C070D82u);
	{ r0 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C070A2Eu, 3); goto L_0C070A2E; }  /* 0C070D82 bra */
L_0C070D90: BLKS(0x0C070D90u);
	{ IF(0x0C070D92u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1); /* slot shar Rn */ UPD(0x0C070A16u, 3); goto L_0C070A16; }  /* 0C070D90 bra */
}

/* FUN_0c070dc0 */
void blk_f_0C070DC0(sh3_t *c)
{
	LOCALS;
L_0C070DC0: BLKS(0x0C070DC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C070DC2u, 1);  /* 0C070DC0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C070DC4u, 1);  /* 0C070DC2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C070DC6u, 1);  /* 0C070DC4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C070DC8u, 1);  /* 0C070DC6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C070DCAu, 1);  /* 0C070DC8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C070DCCu, 1);  /* 0C070DCA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C070DCEu, 1);  /* 0C070DCC mov.l Rm,@-Rn */
	r2 = 0xC3C86ACu; UPD(0x0C070DD0u, 1);  /* 0C070DCE mov.l @(disp,pc),Rn */
	IF(0x0C070DD0u); r15 -= 4; W32(r15, PR); UPD(0x0C070DD2u, 1);  /* 0C070DD0 sts.l pr,@-Rn */
	r0 = R32(r2); UPD(0x0C070DD4u, 1);  /* 0C070DD2 mov.l @Rm,Rn */
	r15 += 0xFFFFFFE8u;  /* 0C070DD4 add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C070DD6 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C070DE0u, 5); goto L_0C070DE0; } goto L_0C070DDC; }  /* 0C070DD8 bt/s */
L_0C070DDC: BLKS(0x0C070DDCu);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C070FB2u, 4); goto L_0C070FB2; }  /* 0C070DDC bra */
L_0C070DE0: BLKS(0x0C070DE0u);
	r1 = 0xFFu; UPD(0x0C070DE2u, 1);  /* 0C070DE0 mov.w @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C070DE2 mov #imm,Rn */
	r6 = 0xC29D1D8u; UPD(0x0C070DE6u, 2);  /* 0C070DE4 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C070DE6 mov #imm,Rn */
	r7 = 0x2A0u; UPD(0x0C070DEAu, 2);  /* 0C070DE8 mov.w @(disp,pc),Rn */
	r5 = 0x1Fu;  /* 0C070DEA mov #imm,Rn */
	W32(r14, r1); UPD(0x0C070DEEu, 2);  /* 0C070DEC mov.l Rm,@Rn */
	IF(0x0C070DEEu); ;  /* 0C070DEE nop */
	UPD(0x0C070DF0u, 1);
L_0C070DF0: BLKS(0x0C070DF0u);
	r2 = r3;  /* 0C070DF0 mov Rm,Rn */
	r2 += r6;  /* 0C070DF2 add Rm,Rn */
	r0 = R32(r2); UPD(0x0C070DF6u, 3);  /* 0C070DF4 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C070DF6 tst Rm,Rn */
	if (T) { UPD(0x0C070E20u, 4); goto L_0C070E20; }  /* 0C070DF8 bt */
L_0C070DFA: BLKS(0x0C070DFAu);
	r9 = R32(r2 + 0x10u); UPD(0x0C070DFCu, 1);  /* 0C070DFA mov.l @(disp,Rm),Rn */
	r8 = (r9 >> 16) | (r9 << 16);  /* 0C070DFC swap.w Rm,Rn */
	r4 = (u32)(s32)(s16)r8;  /* 0C070DFE exts.w Rm,Rn */
	r1 = 0u - r4;  /* 0C070E00 neg Rm,Rn */
	r1 += 0xCu;  /* 0C070E02 add #imm,Rn */
	IF(0x0C070E04u); T = (s32)r1 >= 0;  /* 0C070E04 cmp/pz Rn */
	if (T) { UPD(0x0C070E0Eu, 8); goto L_0C070E0E; }  /* 0C070E06 bt */
L_0C070E08: BLKS(0x0C070E08u);
	r1 = 0u - r1;  /* 0C070E08 neg Rm,Rn */
	{ T = (s32)r1 > (s32)r5; /* slot cmp/gt Rm,Rn */ UPD(0x0C070E10u, 4); goto L_0C070E10; }  /* 0C070E0A bra */
L_0C070E0E: BLKS(0x0C070E0Eu);
	T = (s32)r1 > (s32)r5;  /* 0C070E0E cmp/gt Rm,Rn */
	UPD(0x0C070E10u, 1);
L_0C070E10: BLKS(0x0C070E10u);
	{ u32 c_ = T; r11 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C070E20u, 3); goto L_0C070E20; } goto L_0C070E14; }  /* 0C070E10 bt/s */
L_0C070E14: BLKS(0x0C070E14u);
	IF(0x0C070E14u); ARG0(0x41BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C070E14 shld Rm,Rn */
	r10 = R32(r14); UPD(0x0C070E18u, 3);  /* 0C070E16 mov.l @Rm,Rn */
	T = (s32)r10 > (s32)r1;  /* 0C070E18 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C070E20u, 4); goto L_0C070E20; }  /* 0C070E1A bf */
L_0C070E1C: BLKS(0x0C070E1Cu);
	W32(r14, r1); UPD(0x0C070E1Eu, 1);  /* 0C070E1C mov.l Rm,@Rn */
	IF(0x0C070E1Eu); ;  /* 0C070E1E nop */
	UPD(0x0C070E20u, 1);
L_0C070E20: BLKS(0x0C070E20u);
	r13 += 0x1u;  /* 0C070E20 add #imm,Rn */
	r12 = 0x1u;  /* 0C070E22 mov #imm,Rn */
	T = (s32)r13 > (s32)r12;  /* 0C070E24 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += r7; /* slot add Rm,Rn */ if (c_) { UPD(0x0C070DF0u, 6); goto L_0C070DF0; } goto L_0C070E2A; }  /* 0C070E26 bf/s */
L_0C070E2A: BLKS(0x0C070E2Au);
	r5 = R32(r14); UPD(0x0C070E2Cu, 2);  /* 0C070E2A mov.l @Rm,Rn */
	r3 = 0x5Fu;  /* 0C070E2C mov #imm,Rn */
	T = (s32)r5 > (s32)r3;  /* 0C070E2E cmp/gt Rm,Rn */
	{ u32 c_ = T; r6 = 0x60u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C070E36u, 5); goto L_0C070E36; } goto L_0C070E34; }  /* 0C070E30 bt/s */
L_0C070E34: BLKS(0x0C070E34u);
	W32(r14, r6); UPD(0x0C070E36u, 2);  /* 0C070E34 mov.l Rm,@Rn */
L_0C070E36: BLKS(0x0C070E36u);
	r1 = 0xFFu; UPD(0x0C070E38u, 1);  /* 0C070E36 mov.w @(disp,pc),Rn */
	r7 = R32(r14); UPD(0x0C070E3Au, 1);  /* 0C070E38 mov.l @Rm,Rn */
	T = (s32)r7 > (s32)r1;  /* 0C070E3A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C070E40u, 4); goto L_0C070E40; }  /* 0C070E3C bf */
L_0C070E3E: BLKS(0x0C070E3Eu);
	W32(r14, r1); UPD(0x0C070E40u, 1);  /* 0C070E3E mov.l Rm,@Rn */
L_0C070E40: BLKS(0x0C070E40u);
	r11 = 0xC1750F0u; UPD(0x0C070E42u, 1);  /* 0C070E40 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C070E42 add #imm,Rn */
	r10 = R32(r11); UPD(0x0C070E46u, 2);  /* 0C070E44 mov.l @Rm,Rn */
	r4 = 0x0u;  /* 0C070E46 mov #imm,Rn */
	r8 = 0xC2289E8u; UPD(0x0C070E4Au, 2);  /* 0C070E48 mov.l @(disp,pc),Rn */
	r6 = R32(r14); UPD(0x0C070E4Cu, 1);  /* 0C070E4A mov.l @Rm,Rn */
	r3 = 0xC174FA4u; UPD(0x0C070E4Eu, 1);  /* 0C070E4C mov.l @(disp,pc),Rn */
	IF(0x0C070E4Eu); r6 <<= 8;  /* 0C070E4E shll8 Rn */
	r12 = 0xC3C86B0u; UPD(0x0C070E52u, 2);  /* 0C070E50 mov.l @(disp,pc),Rn */
	r9 = R32(r14); UPD(0x0C070E54u, 1);  /* 0C070E52 mov.l @Rm,Rn */
	W32(r8, r10); UPD(0x0C070E56u, 1);  /* 0C070E54 mov.l Rm,@Rn */
	r9 += r6;  /* 0C070E56 add Rm,Rn */
	r5 = 0x2040000u; UPD(0x0C070E5Au, 2);  /* 0C070E58 mov.l @(disp,pc),Rn */
	W32(r12, r3); UPD(0x0C070E5Cu, 1);  /* 0C070E5A mov.l Rm,@Rn */
	r9 |= r5;  /* 0C070E5C or Rm,Rn */
	r8 = 0x10000000u; UPD(0x0C070E60u, 2);  /* 0C070E5E mov.l @(disp,pc),Rn */
	r1 = 0xC073B10u; UPD(0x0C070E62u, 1);  /* 0C070E60 mov.l @(disp,pc),Rn */
	r8 |= r9;  /* 0C070E62 or Rm,Rn */
	W32(r15, r4); UPD(0x0C070E66u, 2);  /* 0C070E64 mov.l Rm,@Rn */
	r0 = 0xC3C4048u; UPD(0x0C070E68u, 1);  /* 0C070E66 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C070E68 mov Rm,Rn */
	r6 = R32(r0); UPD(0x0C070E6Cu, 2);  /* 0C070E6A mov.l @Rm,Rn */
	r5 = 0xC0000u; UPD(0x0C070E6Eu, 1);  /* 0C070E6C mov.l @(disp,pc),Rn */
	r7 = 0x808080u; UPD(0x0C070E70u, 1);  /* 0C070E6E mov.l @(disp,pc),Rn */
	IF(0x0C070E70u); { u32 t_ = r1; PR = 0x0C070E74u; W32(r14, r9); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C070E74u); }  /* 0C070E70 jsr @Rn */
L_0C070E74: BLKS(0x0C070E74u);
	r2 = 0xC2B039Cu; UPD(0x0C070E76u, 1);  /* 0C070E74 mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C070E76 add #imm,Rn */
	r13 = R32(r2); UPD(0x0C070E7Au, 2);  /* 0C070E78 mov.l @Rm,Rn */
	IF(0x0C070E7Au); T = r13 & 1; r13 = (u32)((s32)r13 >> 1);  /* 0C070E7A shar Rn */
	r0 = r13;  /* 0C070E7C mov Rm,Rn */
	r0 &= 0xFu;  /* 0C070E7E and #imm,r0 */
	r0 += 0xFFFFFFF8u;  /* 0C070E80 add #imm,Rn */
	IF(0x0C070E82u); T = (s32)r0 >= 0;  /* 0C070E82 cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C070E8Cu, 8); goto L_0C070E8C; } UPD(0x0C070E88u, 1); goto L_0C070E88; }  /* 0C070E84 bt/s */
L_0C070E88: BLKS(0x0C070E88u);
	{ r7 = 0u - r0; /* slot neg Rm,Rn */ UPD(0x0C0710E0u, 3); goto L_0C0710E0; }  /* 0C070E88 bra */
L_0C070E8C: BLKS(0x0C070E8Cu);
	r13 = R32(r14 + 0x4u); UPD(0x0C070E8Eu, 1);  /* 0C070E8C mov.l @(disp,Rm),Rn */
	r1 = 0x7u;  /* 0C070E8E mov #imm,Rn */
	T = (s32)r13 > (s32)r1;  /* 0C070E90 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C070E96u, 5); goto L_0C070E96; }  /* 0C070E92 bf */
L_0C070E94: BLKS(0x0C070E94u);
	W32(r14 + 0x4u, r1); UPD(0x0C070E96u, 1);  /* 0C070E94 mov.l Rm,@(disp,Rn) */
L_0C070E96: BLKS(0x0C070E96u);
	r2 = 0x20000u; UPD(0x0C070E98u, 1);  /* 0C070E96 mov.l @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C070E98 mov #imm,Rn */
	W32(r14 + 0x8u, r8); UPD(0x0C070E9Cu, 2);  /* 0C070E9A mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r2); UPD(0x0C070E9Eu, 1);  /* 0C070E9C mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r13); UPD(0x0C070EA0u, 1);  /* 0C070E9E mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x14u, r2); UPD(0x0C070EA2u, 1);  /* 0C070EA0 mov.l Rm,@(disp,Rn) */
	IF(0x0C070EA2u); ;  /* 0C070EA2 nop */
	UPD(0x0C070EA4u, 1);
L_0C070EA4: BLKS(0x0C070EA4u);
	r2 = 0xC186870u; UPD(0x0C070EA6u, 1);  /* 0C070EA4 mov.l @(disp,pc),Rn */
	r11 = r13;  /* 0C070EA6 mov Rm,Rn */
	IF(0x0C070EA8u); r11 <<= 2;  /* 0C070EA8 shll2 Rn */
	r2 += r11;  /* 0C070EAA add Rm,Rn */
	r0 = R32(r2); UPD(0x0C070EAEu, 4);  /* 0C070EAC mov.l @Rm,Rn */
	r9 = 0xC22E028u; UPD(0x0C070EB0u, 1);  /* 0C070EAE mov.l @(disp,pc),Rn */
	IF(0x0C070EB0u); r0 <<= 2;  /* 0C070EB0 shll2 Rn */
	IF(0x0C070EB2u); r4 = R32(r0 + r9); UPD(0x0C070EB4u, 2);  /* 0C070EB2 mov.l @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C070EB4 tst Rm,Rn */
	{ u32 c_ = !T; r6 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C070EBEu, 4); goto L_0C070EBE; } UPD(0x0C070EBAu, 1); goto L_0C070EBA; }  /* 0C070EB6 bf/s */
L_0C070EBA: BLKS(0x0C070EBAu);
	{ r15 += 0xFFFFFFFCu; /* slot add #imm,Rn */ UPD(0x0C0710B0u, 3); goto L_0C0710B0; }  /* 0C070EBA bra */
L_0C070EBE: BLKS(0x0C070EBEu);
	r7 = 0x14u;  /* 0C070EBE mov #imm,Rn */
	IF(0x0C070EC0u); ARG0(0x467Du); { s32 s_ = (s32)r7; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C070EC0 shld Rm,Rn */
	r12 = R32(r14 + 0x4u); UPD(0x0C070EC4u, 3);  /* 0C070EC2 mov.l @(disp,Rm),Rn */
	r3 = 0x9u;  /* 0C070EC4 mov #imm,Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C070EC8u, 2);  /* 0C070EC6 mov.l @(disp,Rm),Rn */
	r1 = 0x4u;  /* 0C070EC8 mov #imm,Rn */
	IF(0x0C070ECAu); ARG0(0x4C3Du); { s32 s_ = (s32)r3; if (s_ >= 0) r12 <<= (s_ & 31); else if ((s_ & 31) == 0) r12 = 0; else r12 >>= ((~s_ & 31) + 1); }  /* 0C070ECA shld Rm,Rn */
	IF(0x0C070ECCu); ARG0(0x471Du); { s32 s_ = (s32)r1; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C070ECC shld Rm,Rn */
	r10 = 0x606060u; UPD(0x0C070ED0u, 4);  /* 0C070ECE mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C070ED0 mov #imm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C070ED4u, 2);  /* 0C070ED2 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C070ED4 mov #imm,Rn */
	r4 = 0x26Cu; UPD(0x0C070ED8u, 2);  /* 0C070ED6 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C070ED8 mov Rm,Rn */
	r6 |= r12;  /* 0C070EDA or Rm,Rn */
	r7 |= r12;  /* 0C070EDC or Rm,Rn */
	r3 = 0x0u;  /* 0C070EDE mov #imm,Rn */
	UPD(0x0C070EE0u, 4);
L_0C070EE0: BLKS(0x0C070EE0u);
	r2 = r3;  /* 0C070EE0 mov Rm,Rn */
	r2 += r5;  /* 0C070EE2 add Rm,Rn */
	r12 = R32(r2); UPD(0x0C070EE6u, 3);  /* 0C070EE4 mov.l @Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C070EE6 tst Rm,Rn */
	{ u32 c_ = T; r2 += r4; /* slot add Rm,Rn */ if (c_) { UPD(0x0C070EFCu, 4); goto L_0C070EFC; } goto L_0C070EEC; }  /* 0C070EE8 bt/s */
L_0C070EEC: BLKS(0x0C070EECu);
	r2 += 0x3u;  /* 0C070EEC add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C070EF0u, 3);  /* 0C070EEE mov.b @Rm,Rn */
	r12 = R32(r0); UPD(0x0C070EF2u, 1);  /* 0C070EF0 mov.l @Rm,Rn */
	T = r1 == r12;  /* 0C070EF2 cmp/eq Rm,Rn */
	{ u32 c_ = !T; T = (r8 & r8) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C070EFCu, 4); goto L_0C070EFC; } goto L_0C070EF8; }  /* 0C070EF4 bf/s */
L_0C070EF8: BLKS(0x0C070EF8u);
	{ IF(0x0C070EFAu); ; /* slot nop */ UPD(0x0C071090u, 4); goto L_0C071090; }  /* 0C070EF8 bra */
L_0C070EFC: BLKS(0x0C070EFCu);
	r12 = 0x2A0u; UPD(0x0C070EFEu, 1);  /* 0C070EFC mov.w @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C070EFE add #imm,Rn */
	r2 = 0x1u;  /* 0C070F00 mov #imm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C070F02 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += r12; /* slot add Rm,Rn */ if (c_) { UPD(0x0C070EE0u, 6); goto L_0C070EE0; } goto L_0C070F08; }  /* 0C070F04 bf/s */
L_0C070F08: BLKS(0x0C070F08u);
	T = (r9 & r9) == 0;  /* 0C070F08 tst Rm,Rn */
	if (T) { UPD(0x0C070F12u, 5); goto L_0C070F12; }  /* 0C070F0A bt */
L_0C070F0C: BLKS(0x0C070F0Cu);
	r15 += 0xFFFFFFFCu;  /* 0C070F0C add #imm,Rn */
	{ r5 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C071060u, 4); goto L_0C071060; }  /* 0C070F0E bra */
L_0C070F12: BLKS(0x0C070F12u);
	r1 = 0xC1750F0u; UPD(0x0C070F14u, 1);  /* 0C070F12 mov.l @(disp,pc),Rn */
	r9 += 0xAu;  /* 0C070F14 add #imm,Rn */
	r12 = R32(r1 + 0x4u); UPD(0x0C070F18u, 2);  /* 0C070F16 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C070F18 add #imm,Rn */
	r6 = 0xC2289E8u; UPD(0x0C070F1Cu, 2);  /* 0C070F1A mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C070F1C mov Rm,Rn */
	W32(r6, r12); UPD(0x0C070F20u, 2);  /* 0C070F1E mov.l Rm,@Rn */
	IF(0x0C070F20u); r5 <<= 16;  /* 0C070F20 shll16 Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C070F24u, 2);  /* 0C070F22 mov.l @(disp,Rm),Rn */
	r9 += 0xFFFFFFFEu;  /* 0C070F24 add #imm,Rn */
	r7 = 0xC3C4048u; UPD(0x0C070F28u, 2);  /* 0C070F26 mov.l @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C070F28 add #imm,Rn */
	r8 = R32(r7); UPD(0x0C070F2Cu, 2);  /* 0C070F2A mov.l @Rm,Rn */
	IF(0x0C070F2Cu); r6 <<= 16;  /* 0C070F2C shll16 Rn */
	r3 = 0xC073B10u; UPD(0x0C070F30u, 2);  /* 0C070F2E mov.l @(disp,pc),Rn */
	r6 += r8;  /* 0C070F30 add Rm,Rn */
	r8 = 0x0u;  /* 0C070F32 mov #imm,Rn */
	r4 = R32(r14 + 0x8u); UPD(0x0C070F36u, 3);  /* 0C070F34 mov.l @(disp,Rm),Rn */
	r7 = r10;  /* 0C070F36 mov Rm,Rn */
	IF(0x0C070F38u); { u32 t_ = r3; PR = 0x0C070F3Cu; W32(r15, r8); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C070F3Cu); }  /* 0C070F38 jsr @Rn */
L_0C070F3C: BLKS(0x0C070F3Cu);
	r4 = 0xC1750F0u; UPD(0x0C070F3Eu, 1);  /* 0C070F3C mov.l @(disp,pc),Rn */
	IF(0x0C070F3Eu); r9 <<= 16;  /* 0C070F3E shll16 Rn */
	r4 += r11;  /* 0C070F40 add Rm,Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C070F44u, 3);  /* 0C070F42 mov.l @(disp,Rm),Rn */
	r1 = 0xC3C4048u; UPD(0x0C070F46u, 1);  /* 0C070F44 mov.l @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C070F46 add #imm,Rn */
	r5 = R32(r4 + 0x10u); UPD(0x0C070F4Au, 2);  /* 0C070F48 mov.l @(disp,Rm),Rn */
	IF(0x0C070F4Au); r6 <<= 16;  /* 0C070F4A shll16 Rn */
	r0 = 0xC2289E8u; UPD(0x0C070F4Eu, 2);  /* 0C070F4C mov.l @(disp,pc),Rn */
	r12 = R32(r1); UPD(0x0C070F50u, 1);  /* 0C070F4E mov.l @Rm,Rn */
	W32(r0, r5); UPD(0x0C070F52u, 1);  /* 0C070F50 mov.l Rm,@Rn */
	r6 += r12;  /* 0C070F52 add Rm,Rn */
	r10 = 0xC073B10u; UPD(0x0C070F56u, 2);  /* 0C070F54 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C070F56 mov Rm,Rn */
	W32(r15, r8); UPD(0x0C070F5Au, 2);  /* 0C070F58 mov.l Rm,@Rn */
	r9 = 0x0u;  /* 0C070F5A mov #imm,Rn */
	r12 = 0xC29D1D8u; UPD(0x0C070F5Eu, 2);  /* 0C070F5C mov.l @(disp,pc),Rn */
	r7 = 0x808080u; UPD(0x0C070F60u, 1);  /* 0C070F5E mov.l @(disp,pc),Rn */
	IF(0x0C070F60u); { u32 t_ = r10; PR = 0x0C070F64u; r4 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C070F64u); }  /* 0C070F60 jsr @Rn */
L_0C070F64: BLKS(0x0C070F64u);
	r15 += 0x4u;  /* 0C070F64 add #imm,Rn */
	r10 = 0x0u;  /* 0C070F66 mov #imm,Rn */
	UPD(0x0C070F68u, 2);
L_0C070F68: BLKS(0x0C070F68u);
	r2 = r9;  /* 0C070F68 mov Rm,Rn */
	r2 += r12;  /* 0C070F6A add Rm,Rn */
	r0 = R32(r2); UPD(0x0C070F6Eu, 3);  /* 0C070F6C mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C070F6E tst Rm,Rn */
	if (T) { UPD(0x0C070F82u, 4); goto L_0C070F82; }  /* 0C070F70 bt */
L_0C070F72: BLKS(0x0C070F72u);
	r0 = 0x26Fu; UPD(0x0C070F74u, 1);  /* 0C070F72 mov.w @(disp,pc),Rn */
	IF(0x0C070F74u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C070F76u, 1);  /* 0C070F74 mov.b @(r0,Rm),Rn */
	r3 = 0xC186870u; UPD(0x0C070F78u, 1);  /* 0C070F76 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C070F78 mov Rm,Rn */
	IF(0x0C070F7Au); r5 = R32(r0 + r3); UPD(0x0C070F7Cu, 2);  /* 0C070F7A mov.l @(r0,Rm),Rn */
	T = r4 == r5;  /* 0C070F7C cmp/eq Rm,Rn */
	{ u32 c_ = T; r7 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C071030u, 4); goto L_0C071030; } UPD(0x0C070F82u, 1); goto L_0C070F82; }  /* 0C070F7E bt/s */
L_0C070F82: BLKS(0x0C070F82u);
	r0 = 0x2A0u; UPD(0x0C070F84u, 1);  /* 0C070F82 mov.w @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C070F84 add #imm,Rn */
	r2 = 0x1u;  /* 0C070F86 mov #imm,Rn */
	r10 += 0x11u;  /* 0C070F88 add #imm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C070F8A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += r0; /* slot add Rm,Rn */ if (c_) { UPD(0x0C070F68u, 7); goto L_0C070F68; } UPD(0x0C070F90u, 1); goto L_0C070F90; }  /* 0C070F8C bf/s */
L_0C070F90: BLKS(0x0C070F90u);
	r11 = 0x220000u; UPD(0x0C070F92u, 1);  /* 0C070F90 mov.l @(disp,pc),Rn */
	r13 += 0x1u;  /* 0C070F92 add #imm,Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C070F96u, 2);  /* 0C070F94 mov.l @(disp,Rm),Rn */
	r3 = 0x6u;  /* 0C070F96 mov #imm,Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C070F9Au, 2);  /* 0C070F98 mov.l @(disp,Rm),Rn */
	r2 += r11;  /* 0C070F9A add Rm,Rn */
	r7 = R32(r14 + 0x14u); UPD(0x0C070F9Eu, 2);  /* 0C070F9C mov.l @(disp,Rm),Rn */
	r1 += 0x22u;  /* 0C070F9E add #imm,Rn */
	r7 += r11;  /* 0C070FA0 add Rm,Rn */
	W32(r14 + 0xCu, r2); UPD(0x0C070FA4u, 3);  /* 0C070FA2 mov.l Rm,@(disp,Rn) */
	T = (s32)r13 > (s32)r3;  /* 0C070FA4 cmp/gt Rm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C070FA8u, 2);  /* 0C070FA6 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r14 + 0x14u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C070FB0u, 3); goto L_0C070FB0; } UPD(0x0C070FACu, 1); goto L_0C070FAC; }  /* 0C070FA8 bt/s */
L_0C070FAC: BLKS(0x0C070FACu);
	{ IF(0x0C070FAEu); ; /* slot nop */ UPD(0x0C070EA4u, 3); goto L_0C070EA4; }  /* 0C070FAC bra */
L_0C070FB0: BLKS(0x0C070FB0u);
	r14 += 0x18u;  /* 0C070FB0 add #imm,Rn */
	UPD(0x0C070FB2u, 1);
L_0C070FB2: BLKS(0x0C070FB2u);
	{ r15 = r14; /* slot mov Rm,Rn */ UPD(0x0C071010u, 3); goto L_0C071010; }  /* 0C070FB2 bra */
L_0C071010: BLKS(0x0C071010u);
	IF(0x0C071010u); PR = R32(r15); r15 += 4; UPD(0x0C071012u, 1);  /* 0C071010 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C071014u, 1);  /* 0C071012 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C071016u, 1);  /* 0C071014 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C071018u, 1);  /* 0C071016 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07101Au, 1);  /* 0C071018 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07101Cu, 1);  /* 0C07101A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07101Eu, 1);  /* 0C07101C mov.l @Rm+,Rn */
	IF(0x0C07101Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07101E rts */
L_0C071030: BLKS(0x0C071030u);
	r1 = 0xC1750F0u; UPD(0x0C071032u, 1);  /* 0C071030 mov.l @(disp,pc),Rn */
	IF(0x0C071032u); r7 <<= 2;  /* 0C071032 shll2 Rn */
	r7 += r1;  /* 0C071034 add Rm,Rn */
	r3 = R32(r7 + 0x8u); UPD(0x0C071038u, 3);  /* 0C071036 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C071038 add #imm,Rn */
	r6 = 0xC2289E8u; UPD(0x0C07103Cu, 2);  /* 0C07103A mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C07103C mov #imm,Rn */
	W32(r6, r3); UPD(0x0C071040u, 2);  /* 0C07103E mov.l Rm,@Rn */
	r4 = 0xC3C4048u; UPD(0x0C071042u, 1);  /* 0C071040 mov.l @(disp,pc),Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C071044u, 1);  /* 0C071042 mov.l @(disp,Rm),Rn */
	r5 = R32(r4); UPD(0x0C071046u, 1);  /* 0C071044 mov.l @Rm,Rn */
	r6 += r10;  /* 0C071046 add Rm,Rn */
	r4 = R32(r14); UPD(0x0C07104Au, 2);  /* 0C071048 mov.l @Rm,Rn */
	IF(0x0C07104Au); r6 <<= 16;  /* 0C07104A shll16 Rn */
	r7 = 0x10000000u; UPD(0x0C07104Eu, 2);  /* 0C07104C mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C07104E add Rm,Rn */
	r2 = 0xC073B10u; UPD(0x0C071052u, 2);  /* 0C071050 mov.l @(disp,pc),Rn */
	r4 |= r7;  /* 0C071052 or Rm,Rn */
	r5 = 0x100000u; UPD(0x0C071056u, 2);  /* 0C071054 mov.l @(disp,pc),Rn */
	r7 = 0x808080u; UPD(0x0C071058u, 1);  /* 0C071056 mov.l @(disp,pc),Rn */
	IF(0x0C071058u); { u32 t_ = r2; PR = 0x0C07105Cu; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C07105Cu); }  /* 0C071058 jsr @Rn */
L_0C07105C: BLKS(0x0C07105Cu);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C070F82u, 3); goto L_0C070F82; }  /* 0C07105C bra */
L_0C071060: BLKS(0x0C071060u);
	r2 = 0xC1750F0u; UPD(0x0C071062u, 1);  /* 0C071060 mov.l @(disp,pc),Rn */
	r7 = R32(r2 + 0x30u); UPD(0x0C071064u, 1);  /* 0C071062 mov.l @(disp,Rm),Rn */
	r6 = 0xC2289E8u; UPD(0x0C071066u, 1);  /* 0C071064 mov.l @(disp,pc),Rn */
	r3 = 0xC3C4048u; UPD(0x0C071068u, 1);  /* 0C071066 mov.l @(disp,pc),Rn */
	W32(r6, r7); UPD(0x0C07106Au, 1);  /* 0C071068 mov.l Rm,@Rn */
	r4 = R32(r14 + 0x14u); UPD(0x0C07106Cu, 1);  /* 0C07106A mov.l @(disp,Rm),Rn */
	r6 = R32(r3); UPD(0x0C07106Eu, 1);  /* 0C07106C mov.l @Rm,Rn */
	r0 = 0xC073B10u; UPD(0x0C071070u, 1);  /* 0C07106E mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C071070 add Rm,Rn */
	W32(r15, r5); UPD(0x0C071074u, 2);  /* 0C071072 mov.l Rm,@Rn */
	r4 = R32(r14); UPD(0x0C071076u, 1);  /* 0C071074 mov.l @Rm,Rn */
	r8 = 0x10000000u; UPD(0x0C071078u, 1);  /* 0C071076 mov.l @(disp,pc),Rn */
	r5 = 0xA0000u; UPD(0x0C07107Au, 1);  /* 0C071078 mov.l @(disp,pc),Rn */
	r7 = 0x808080u; UPD(0x0C07107Cu, 1);  /* 0C07107A mov.l @(disp,pc),Rn */
	IF(0x0C07107Cu); { u32 t_ = r0; PR = 0x0C071080u; r4 |= r8; /* slot or Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C071080u); }  /* 0C07107C jsr @Rn */
L_0C071080: BLKS(0x0C071080u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C070F12u, 3); goto L_0C070F12; }  /* 0C071080 bra */
L_0C071090: BLKS(0x0C071090u);
	if (!T) { UPD(0x0C0710A0u, 3); goto L_0C0710A0; }  /* 0C071090 bf */
L_0C071092: BLKS(0x0C071092u);
	r10 += r6;  /* 0C071092 add Rm,Rn */
	UPD(0x0C071094u, 1);
L_0C071094: BLKS(0x0C071094u);
	{ r9 = 0x2u; /* slot mov #imm,Rn */ UPD(0x0C070EFCu, 3); goto L_0C070EFC; }  /* 0C071094 bra */
L_0C0710A0: BLKS(0x0C0710A0u);
	{ r10 += r7; /* slot add Rm,Rn */ UPD(0x0C071094u, 3); goto L_0C071094; }  /* 0C0710A0 bra */
L_0C0710B0: BLKS(0x0C0710B0u);
	r6 = 0xC1750F0u; UPD(0x0C0710B2u, 1);  /* 0C0710B0 mov.l @(disp,pc),Rn */
	r4 = R32(r6 + 0x2Cu); UPD(0x0C0710B4u, 1);  /* 0C0710B2 mov.l @(disp,Rm),Rn */
	r10 = 0x0u;  /* 0C0710B4 mov #imm,Rn */
	r5 = 0xC2289E8u; UPD(0x0C0710B8u, 2);  /* 0C0710B6 mov.l @(disp,pc),Rn */
	r12 = 0xC3C4048u; UPD(0x0C0710BAu, 1);  /* 0C0710B8 mov.l @(disp,pc),Rn */
	W32(r5, r4); UPD(0x0C0710BCu, 1);  /* 0C0710BA mov.l Rm,@Rn */
	r6 = R32(r12); UPD(0x0C0710BEu, 1);  /* 0C0710BC mov.l @Rm,Rn */
	r11 = 0xC073B10u; UPD(0x0C0710C0u, 1);  /* 0C0710BE mov.l @(disp,pc),Rn */
	r8 = R32(r14 + 0xCu); UPD(0x0C0710C2u, 1);  /* 0C0710C0 mov.l @(disp,Rm),Rn */
	r4 = R32(r14); UPD(0x0C0710C4u, 1);  /* 0C0710C2 mov.l @Rm,Rn */
	r6 += r8;  /* 0C0710C4 add Rm,Rn */
	r9 = 0x10000000u; UPD(0x0C0710C8u, 2);  /* 0C0710C6 mov.l @(disp,pc),Rn */
	W32(r15, r10); UPD(0x0C0710CAu, 1);  /* 0C0710C8 mov.l Rm,@Rn */
	r5 = 0xA0000u; UPD(0x0C0710CCu, 1);  /* 0C0710CA mov.l @(disp,pc),Rn */
	r7 = 0x808080u; UPD(0x0C0710CEu, 1);  /* 0C0710CC mov.l @(disp,pc),Rn */
	IF(0x0C0710CEu); { u32 t_ = r11; PR = 0x0C0710D2u; r4 |= r9; /* slot or Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C0710D2u); }  /* 0C0710CE jsr @Rn */
L_0C0710D2: BLKS(0x0C0710D2u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C070F90u, 3); goto L_0C070F90; }  /* 0C0710D2 bra */
L_0C0710E0: BLKS(0x0C0710E0u);
	{ W32(r14 + 0x4u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C070E8Cu, 3); goto L_0C070E8C; }  /* 0C0710E0 bra */
}

/* FUN_0c071110 */
void blk_f_0C071110(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C07118C);
L_0C071110: BLKS(0x0C071110u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C071112u, 1);  /* 0C071110 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C071112 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C071116u, 2);  /* 0C071114 mov.l Rm,@-Rn */
	r0 = 0x2u;  /* 0C071116 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07111Au, 2);  /* 0C071118 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07111Cu, 1);  /* 0C07111A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07111Eu, 1);  /* 0C07111C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C071120u, 1);  /* 0C07111E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C071122u, 1);  /* 0C071120 mov.l Rm,@-Rn */
	IF(0x0C071122u); r15 -= 4; W32(r15, PR); UPD(0x0C071124u, 1);  /* 0C071122 sts.l pr,@-Rn */
	r15 += 0xFFFFFFDCu;  /* 0C071124 add #imm,Rn */
	r14 = r15;  /* 0C071126 mov Rm,Rn */
	W32(r14, r1); UPD(0x0C07112Au, 3);  /* 0C071128 mov.l Rm,@Rn */
	r6 = 0x2A0u; UPD(0x0C07112Cu, 1);  /* 0C07112A mov.w @(disp,pc),Rn */
	IF(0x0C07112Cu); r7 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C07112Eu, 1);  /* 0C07112C mov.w @(r0,Rm),Rn */
	MACL = (u32)((s32)(s16)r7 * (s32)(s16)r6);  /* 0C07112E muls.w Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C071132u, 3);  /* 0C071130 mov.l @(disp,pc),Rn */
	IF(0x0C071132u); r13 = MACL;  /* 0C071132 sts macl,Rn */
	IF(0x0C071134u); MACL = r1 * r6;  /* 0C071134 mul.l Rm,Rn */
	r2 = 0xC22E024u; UPD(0x0C071138u, 4);  /* 0C071136 mov.l @(disp,pc),Rn */
	IF(0x0C071138u); r0 = MACL;  /* 0C071138 sts macl,Rn */
	r0 += r5;  /* 0C07113A add Rm,Rn */
	r3 = R32(r0 + 0x4u); UPD(0x0C07113Eu, 3);  /* 0C07113C mov.l @(disp,Rm),Rn */
	IF(0x0C07113Eu); r3 >>= 2;  /* 0C07113E shlr2 Rn */
	r0 = r3;  /* 0C071140 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C071142 and #imm,r0 */
	W32(r14 + 0x8u, r0); UPD(0x0C071146u, 4);  /* 0C071144 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C071148u, 1);  /* 0C071146 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C071148 tst Rm,Rn */
	{ u32 c_ = !T; r13 += r5; /* slot add Rm,Rn */ if (c_) { UPD(0x0C07116Eu, 4); goto L_0C07116E; } goto L_0C07114E; }  /* 0C07114A bf/s */
L_0C07114E: BLKS(0x0C07114Eu);
	r2 = 0x23Cu; UPD(0x0C071150u, 2);  /* 0C07114E mov.w @(disp,pc),Rn */
	r2 += r13;  /* 0C071150 add Rm,Rn */
	r1 = R32(r2 + 0x38u); UPD(0x0C071154u, 2);  /* 0C071152 mov.l @(disp,Rm),Rn */
	r3 = 0x8000u; UPD(0x0C071156u, 1);  /* 0C071154 mov.l @(disp,pc),Rn */
	r3 &= r1;  /* 0C071156 and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C071158 tst Rm,Rn */
	if (T) { UPD(0x0C071162u, 5); goto L_0C071162; }  /* 0C07115A bt */
L_0C07115C: BLKS(0x0C07115Cu);
	r4 = r1 & 0xFF;  /* 0C07115C extu.b Rm,Rn */
	{ r4 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C071540u, 4); goto L_0C071540; }  /* 0C07115E bra */
L_0C071162: BLKS(0x0C071162u);
	r1 += 0xFFFFFFFEu;  /* 0C071162 add #imm,Rn */
	IF(0x0C071164u); T = (s32)r1 >= 0;  /* 0C071164 cmp/pz Rn */
	{ u32 c_ = T; W32(r2 + 0x38u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07116Eu, 5); goto L_0C07116E; } UPD(0x0C07116Au, 1); goto L_0C07116A; }  /* 0C071166 bt/s */
L_0C07116A: BLKS(0x0C07116Au);
	{ W32(r2 + 0x38u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C071530u, 3); goto L_0C071530; }  /* 0C07116A bra */
L_0C07116E: BLKS(0x0C07116Eu);
	r0 = 0x280u; UPD(0x0C071170u, 1);  /* 0C07116E mov.w @(disp,pc),Rn */
	IF(0x0C071170u); r8 = R32(r0 + r13); UPD(0x0C071172u, 1);  /* 0C071170 mov.l @(r0,Rm),Rn */
	IF(0x0C071172u); T = r8 & 1; r8 = (u32)((s32)r8 >> 1);  /* 0C071172 shar Rn */
	IF(0x0C071174u); T = r8 & 1; r8 = (u32)((s32)r8 >> 1);  /* 0C071174 shar Rn */
	T = (r8 & r8) == 0;  /* 0C071176 tst Rm,Rn */
	{ u32 c_ = !T; r10 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C071180u, 6); goto L_0C071180; } goto L_0C07117C; }  /* 0C071178 bf/s */
L_0C07117C: BLKS(0x0C07117Cu);
	{ IF(0x0C07117Eu); ; /* slot nop */ UPD(0x0C0712F2u, 4); goto L_0C0712F2; }  /* 0C07117C bra */
L_0C071180: BLKS(0x0C071180u);
	r9 = 0x3E7u; UPD(0x0C071182u, 1);  /* 0C071180 mov.w @(disp,pc),Rn */
	T = (s32)r8 > (s32)r9;  /* 0C071182 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r11 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07118Au, 4); goto L_0C07118A; } goto L_0C071188; }  /* 0C071184 bf/s */
L_0C071188: BLKS(0x0C071188u);
	r11 = 0x1u;  /* 0C071188 mov #imm,Rn */
	UPD(0x0C07118Au, 2);
L_0C07118A: BLKS(0x0C07118Au);
	r7 = 0x66666667u; UPD(0x0C07118Cu, 1);  /* 0C07118A mov.l @(disp,pc),Rn */
L_0C07118C: BLKS(0x0C07118Cu);
	SPIN_SAVE(0C07118C);
	{ s64 r_ = (s64)(s32)r8 * (s64)(s32)r7; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C07118C dmuls.l Rm,Rn */
	r12 = r8;  /* 0C07118E mov Rm,Rn */
	IF(0x0C071190u); r2 = MACH;  /* 0C071190 sts mach,Rn */
	IF(0x0C071192u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C071192 shar Rn */
	IF(0x0C071194u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C071194 shar Rn */
	IF(0x0C071196u); T = r12 >> 31; r12 <<= 1;  /* 0C071196 shll Rn */
	{ u32 a_ = r12, t_ = a_ - r12, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r12 = r_; }  /* 0C071198 subc Rm,Rn */
	r8 = r2;  /* 0C07119A mov Rm,Rn */
	r8 -= r12;  /* 0C07119C sub Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C07119E tst Rm,Rn */
	{ u32 c_ = !T; r10 += 0x1u; /* slot add #imm,Rn */ if (c_) { SPIN_FFD(0C07118C, 14); UPD(0x0C07118Cu, 14); goto L_0C07118C; } goto L_0C0711A4; }  /* 0C0711A0 bf/s */
L_0C0711A4: BLKS(0x0C0711A4u);
	r0 = 0x280u; UPD(0x0C0711A6u, 2);  /* 0C0711A4 mov.w @(disp,pc),Rn */
	IF(0x0C0711A6u); r8 = R32(r0 + r13); UPD(0x0C0711A8u, 1);  /* 0C0711A6 mov.l @(r0,Rm),Rn */
	r0 += 0x4u;  /* 0C0711A8 add #imm,Rn */
	IF(0x0C0711AAu); r2 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C0711ACu, 2);  /* 0C0711AA mov.w @(r0,Rm),Rn */
	IF(0x0C0711ACu); T = r8 & 1; r8 = (u32)((s32)r8 >> 1);  /* 0C0711AC shar Rn */
	r5 = 0xC173E08u; UPD(0x0C0711B0u, 2);  /* 0C0711AE mov.l @(disp,pc),Rn */
	r12 = r2;  /* 0C0711B0 mov Rm,Rn */
	r3 = 0xC3C86B0u; UPD(0x0C0711B4u, 2);  /* 0C0711B2 mov.l @(disp,pc),Rn */
	IF(0x0C0711B4u); T = r8 & 1; r8 = (u32)((s32)r8 >> 1);  /* 0C0711B4 shar Rn */
	r1 = 0xC0u; UPD(0x0C0711B8u, 2);  /* 0C0711B6 mov.w @(disp,pc),Rn */
	r12 += r12;  /* 0C0711B8 add Rm,Rn */
	T = (s32)r12 > (s32)r1;  /* 0C0711BA cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r3, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0711C2u, 5); goto L_0C0711C2; } UPD(0x0C0711C0u, 1); goto L_0C0711C0; }  /* 0C0711BC bf/s */
L_0C0711C0: BLKS(0x0C0711C0u);
	r12 = r1;  /* 0C0711C0 mov Rm,Rn */
	UPD(0x0C0711C2u, 1);
L_0C0711C2: BLKS(0x0C0711C2u);
	r1 = 0xFFFFu; UPD(0x0C0711C4u, 1);  /* 0C0711C2 mov.l @(disp,pc),Rn */
	T = (s32)r12 > (s32)r1;  /* 0C0711C4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0711CAu, 4); goto L_0C0711CA; }  /* 0C0711C6 bf */
L_0C0711C8: BLKS(0x0C0711C8u);
	r12 = r1;  /* 0C0711C8 mov Rm,Rn */
	UPD(0x0C0711CAu, 1);
L_0C0711CA: BLKS(0x0C0711CAu);
	r4 = r12;  /* 0C0711CA mov Rm,Rn */
	r6 = 0x30F060u; UPD(0x0C0711CEu, 2);  /* 0C0711CC mov.l @(disp,pc),Rn */
	IF(0x0C0711CEu); r4 <<= 8;  /* 0C0711CE shll8 Rn */
	r7 = 0x2040000u; UPD(0x0C0711D2u, 2);  /* 0C0711D0 mov.l @(disp,pc),Rn */
	r12 += r4;  /* 0C0711D2 add Rm,Rn */
	r0 = 0x77u;  /* 0C0711D4 mov #imm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0711D8u, 3);  /* 0C0711D6 mov.l Rm,@(disp,Rn) */
	T = (s32)r2 > (s32)r0;  /* 0C0711D8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 |= r7; /* slot or Rm,Rn */ if (c_) { UPD(0x0C0711ECu, 4); goto L_0C0711EC; } goto L_0C0711DE; }  /* 0C0711DA bf/s */
L_0C0711DE: BLKS(0x0C0711DEu);
	r9 = 0xC2B039Cu; UPD(0x0C0711E0u, 2);  /* 0C0711DE mov.l @(disp,pc),Rn */
	r0 = R32(r9); UPD(0x0C0711E2u, 1);  /* 0C0711E0 mov.l @Rm,Rn */
	r0 &= 0x1u;  /* 0C0711E2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0711E4 tst Rm,Rn */
	if (T) { UPD(0x0C0711ECu, 5); goto L_0C0711EC; }  /* 0C0711E6 bt */
L_0C0711E8: BLKS(0x0C0711E8u);
	r1 = 0xFFFFFFu; UPD(0x0C0711EAu, 1);  /* 0C0711E8 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0711ECu, 1);  /* 0C0711EA mov.l Rm,@(disp,Rn) */
L_0C0711EC: BLKS(0x0C0711ECu);
	r2 = 0x23Cu; UPD(0x0C0711EEu, 1);  /* 0C0711EC mov.w @(disp,pc),Rn */
	r5 = r11;  /* 0C0711EE mov Rm,Rn */
	r3 = r11;  /* 0C0711F0 mov Rm,Rn */
	r5 += 0x13u;  /* 0C0711F2 add #imm,Rn */
	r3 += 0x12u;  /* 0C0711F4 add #imm,Rn */
	r2 += r13;  /* 0C0711F6 add Rm,Rn */
	W32(r14 + 0x20u, r5); UPD(0x0C0711FAu, 6);  /* 0C0711F8 mov.l Rm,@(disp,Rn) */
	r9 = 0x5u;  /* 0C0711FA mov #imm,Rn */
	W32(r14 + 0x1Cu, r3); UPD(0x0C0711FEu, 2);  /* 0C0711FC mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r2); UPD(0x0C071200u, 1);  /* 0C0711FE mov.l Rm,@(disp,Rn) */
L_0C071200: BLKS(0x0C071200u);
	r0 = 0xC0C2310u; UPD(0x0C071202u, 1);  /* 0C071200 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C071202 mov Rm,Rn */
	IF(0x0C071204u); { u32 t_ = r0; PR = 0x0C071208u; r5 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C071208u); }  /* 0C071204 jsr @Rn */
L_0C071208: BLKS(0x0C071208u);
	r6 = r0;  /* 0C071208 mov Rm,Rn */
	r8 = r0;  /* 0C07120A mov Rm,Rn */
	r0 = r9;  /* 0C07120C mov Rm,Rn */
	T = r0 == 0x5u;  /* 0C07120E cmp/eq #imm,r0 */
	{ u32 c_ = T; r3 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07121Eu, 7); goto L_0C07121E; } goto L_0C071214; }  /* 0C071210 bt/s */
L_0C071214: BLKS(0x0C071214u);
	T = (r1 & r1) == 0;  /* 0C071214 tst Rm,Rn */
	{ u32 c_ = !T; T = (r11 & r11) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C071220u, 5); goto L_0C071220; } goto L_0C07121A; }  /* 0C071216 bf/s */
L_0C07121A: BLKS(0x0C07121Au);
	T = (r6 & r6) == 0;  /* 0C07121A tst Rm,Rn */
	if (T) { UPD(0x0C071282u, 5); goto L_0C071282; }  /* 0C07121C bt */
L_0C07121E: BLKS(0x0C07121Eu);
	T = (r11 & r11) == 0;  /* 0C07121E tst Rm,Rn */
	UPD(0x0C071220u, 1);
L_0C071220: BLKS(0x0C071220u);
	{ u32 c_ = !T; r0 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C071228u, 3); goto L_0C071228; } goto L_0C071224; }  /* 0C071220 bf/s */
L_0C071224: BLKS(0x0C071224u);
	{ IF(0x0C071226u); r0 <<= 2; /* slot shll2 Rn */ UPD(0x0C071520u, 4); goto L_0C071520; }  /* 0C071224 bra */
L_0C071228: BLKS(0x0C071228u);
	r0 = r3;  /* 0C071228 mov Rm,Rn */
	r4 = 0xC175418u; UPD(0x0C07122Cu, 2);  /* 0C07122A mov.l @(disp,pc),Rn */
	IF(0x0C07122Cu); r0 <<= 2;  /* 0C07122C shll2 Rn */
	IF(0x0C07122Eu); r7 = R32(r0 + r4); UPD(0x0C071230u, 2);  /* 0C07122E mov.l @(r0,Rm),Rn */
	r0 = 0xC2289E8u; UPD(0x0C071232u, 1);  /* 0C071230 mov.l @(disp,pc),Rn */
	W32(r0, r7); UPD(0x0C071234u, 1);  /* 0C071232 mov.l Rm,@Rn */
L_0C071234: BLKS(0x0C071234u);
	r0 = 0x284u; UPD(0x0C071236u, 1);  /* 0C071234 mov.w @(disp,pc),Rn */
	r5 = 0xEu;  /* 0C071236 mov #imm,Rn */
	IF(0x0C071238u); r1 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C07123Au, 2);  /* 0C071238 mov.w @(r0,Rm),Rn */
	r7 = r9;  /* 0C07123A mov Rm,Rn */
	r4 = 0x80u; UPD(0x0C07123Eu, 2);  /* 0C07123C mov.w @(disp,pc),Rn */
	r2 = 0x28u;  /* 0C07123E mov #imm,Rn */
	r4 -= r1;  /* 0C071240 sub Rm,Rn */
	IF(0x0C071242u); ARG0(0x445Du); { s32 s_ = (s32)r5; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C071242 shld Rm,Rn */
	r3 = R32(r14 + 0xCu); UPD(0x0C071246u, 4);  /* 0C071244 mov.l @(disp,Rm),Rn */
	IF(0x0C071246u); MACL = r11 * r2;  /* 0C071246 mul.l Rm,Rn */
	r5 = R32(r3 + 0x3Cu); UPD(0x0C07124Au, 3);  /* 0C071248 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07124A add #imm,Rn */
	r0 = 0x200000u; UPD(0x0C07124Eu, 2);  /* 0C07124C mov.l @(disp,pc),Rn */
	r5 += r4;  /* 0C07124E add Rm,Rn */
	r6 = R32(r14 + 0x20u); UPD(0x0C071252u, 2);  /* 0C071250 mov.l @(disp,Rm),Rn */
	r5 += r0;  /* 0C071252 add Rm,Rn */
	IF(0x0C071254u); ARG0(0x476Du); { s32 s_ = (s32)r6; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C071254 shld Rm,Rn */
	r0 = 0x27Cu; UPD(0x0C071258u, 3);  /* 0C071256 mov.w @(disp,pc),Rn */
	r3 = r10;  /* 0C071258 mov Rm,Rn */
	r1 = R32(r14 + 0x1Cu); UPD(0x0C07125Cu, 2);  /* 0C07125A mov.l @(disp,Rm),Rn */
	IF(0x0C07125Cu); r4 = MACL;  /* 0C07125C sts macl,Rn */
	IF(0x0C07125Eu); r6 = R32(r0 + r13); UPD(0x0C071260u, 2);  /* 0C07125E mov.l @(r0,Rm),Rn */
	IF(0x0C071260u); ARG0(0x431Du); { s32 s_ = (s32)r1; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C071260 shld Rm,Rn */
	r6 += r7;  /* 0C071262 add Rm,Rn */
	r4 += 0x28u;  /* 0C071264 add #imm,Rn */
	r6 += r3;  /* 0C071266 add Rm,Rn */
	IF(0x0C071268u); r4 <<= 16;  /* 0C071268 shll16 Rn */
	r6 -= r4;  /* 0C07126A sub Rm,Rn */
	r7 = 0x0u;  /* 0C07126C mov #imm,Rn */
	r0 = 0xC073B10u; UPD(0x0C071270u, 8);  /* 0C07126E mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFFFu;  /* 0C071270 add #imm,Rn */
	W32(r15, r7); UPD(0x0C071274u, 2);  /* 0C071272 mov.l Rm,@Rn */
	r4 = 0x10000000u; UPD(0x0C071276u, 1);  /* 0C071274 mov.l @(disp,pc),Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C071278u, 1);  /* 0C071276 mov.l @(disp,Rm),Rn */
	IF(0x0C071278u); { u32 t_ = r0; PR = 0x0C07127Cu; r4 |= r12; /* slot or Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C07127Cu); }  /* 0C071278 jsr @Rn */
L_0C07127C: BLKS(0x0C07127Cu);
	IF(0x0C07127Cu); T = (s32)r9 > 0;  /* 0C07127C cmp/pl Rn */
	{ u32 c_ = T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C071200u, 4); goto L_0C071200; } UPD(0x0C071282u, 1); goto L_0C071282; }  /* 0C07127E bt/s */
L_0C071282: BLKS(0x0C071282u);
	r1 = 0xC175418u; UPD(0x0C071284u, 1);  /* 0C071282 mov.l @(disp,pc),Rn */
	T = (r11 & r11) == 0;  /* 0C071284 tst Rm,Rn */
	if (!T) { UPD(0x0C07128Au, 4); goto L_0C07128A; }  /* 0C071286 bf */
L_0C071288: BLKS(0x0C071288u);
	r1 = 0xC1754B4u; UPD(0x0C07128Au, 1);  /* 0C071288 mov.l @(disp,pc),Rn */
L_0C07128A: BLKS(0x0C07128Au);
	r4 = R32(r1 + 0x28u); UPD(0x0C07128Cu, 1);  /* 0C07128A mov.l @(disp,Rm),Rn */
	r0 = 0xEu;  /* 0C07128C mov #imm,Rn */
	r8 = 0xC2289E8u; UPD(0x0C071290u, 2);  /* 0C07128E mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C071290 add #imm,Rn */
	W32(r8, r4); UPD(0x0C071294u, 2);  /* 0C071292 mov.l Rm,@Rn */
	r8 = 0x284u; UPD(0x0C071296u, 1);  /* 0C071294 mov.w @(disp,pc),Rn */
	r8 += r13;  /* 0C071296 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r8); UPD(0x0C07129Au, 2);  /* 0C071298 mov.w @Rm,Rn */
	r7 = 0x80u; UPD(0x0C07129Cu, 1);  /* 0C07129A mov.w @(disp,pc),Rn */
	r7 -= r5;  /* 0C07129C sub Rm,Rn */
	IF(0x0C07129Eu); ARG0(0x470Du); { s32 s_ = (s32)r0; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C07129E shld Rm,Rn */
	r4 = 0x10000000u; UPD(0x0C0712A2u, 3);  /* 0C0712A0 mov.l @(disp,pc),Rn */
	r0 = 0x278u; UPD(0x0C0712A4u, 1);  /* 0C0712A2 mov.w @(disp,pc),Rn */
	r4 |= r12;  /* 0C0712A4 or Rm,Rn */
	IF(0x0C0712A6u); r5 = R32(r0 + r13); UPD(0x0C0712A8u, 2);  /* 0C0712A6 mov.l @(r0,Rm),Rn */
	r12 = 0x200000u; UPD(0x0C0712AAu, 1);  /* 0C0712A8 mov.l @(disp,pc),Rn */
	r5 += r7;  /* 0C0712AA add Rm,Rn */
	r6 = R32(r14 + 0x20u); UPD(0x0C0712AEu, 2);  /* 0C0712AC mov.l @(disp,Rm),Rn */
	r5 += r12;  /* 0C0712AE add Rm,Rn */
	r12 = 0x27Cu; UPD(0x0C0712B2u, 2);  /* 0C0712B0 mov.w @(disp,pc),Rn */
	IF(0x0C0712B2u); ARG0(0x496Du); { s32 s_ = (s32)r6; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C0712B2 shld Rm,Rn */
	r7 = 0x28u;  /* 0C0712B4 mov #imm,Rn */
	r12 += r13;  /* 0C0712B6 add Rm,Rn */
	IF(0x0C0712B8u); MACL = r11 * r7;  /* 0C0712B8 mul.l Rm,Rn */
	r6 = R32(r12 + 0x0u); UPD(0x0C0712BCu, 6);  /* 0C0712BA mov.l @(disp,Rm),Rn */
	r3 = R32(r14 + 0x1Cu); UPD(0x0C0712BEu, 1);  /* 0C0712BC mov.l @(disp,Rm),Rn */
	r6 += r9;  /* 0C0712BE add Rm,Rn */
	IF(0x0C0712C0u); ARG0(0x4A3Du); { s32 s_ = (s32)r3; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = 0; else r10 >>= ((~s_ & 31) + 1); }  /* 0C0712C0 shld Rm,Rn */
	IF(0x0C0712C2u); r9 = MACL;  /* 0C0712C2 sts macl,Rn */
	r9 += 0x28u;  /* 0C0712C4 add #imm,Rn */
	r6 += r10;  /* 0C0712C6 add Rm,Rn */
	IF(0x0C0712C8u); r9 <<= 16;  /* 0C0712C8 shll16 Rn */
	r2 = 0xC073B10u; UPD(0x0C0712CCu, 7);  /* 0C0712CA mov.l @(disp,pc),Rn */
	r6 -= r9;  /* 0C0712CC sub Rm,Rn */
	r9 = 0x0u;  /* 0C0712CE mov #imm,Rn */
	r11 = 0xC22E024u; UPD(0x0C0712D2u, 3);  /* 0C0712D0 mov.l @(disp,pc),Rn */
	W32(r15, r9); UPD(0x0C0712D4u, 1);  /* 0C0712D2 mov.l Rm,@Rn */
	IF(0x0C0712D4u); { u32 t_ = r2; PR = 0x0C0712D8u; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C0712D8u); }  /* 0C0712D4 jsr @Rn */
L_0C0712D8: BLKS(0x0C0712D8u);
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C0712DAu, 1);  /* 0C0712D8 mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0712DA tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0712E6u, 4); goto L_0C0712E6; } goto L_0C0712E0; }  /* 0C0712DC bf/s */
L_0C0712E0: BLKS(0x0C0712E0u);
	r10 = (u32)(s32)(s16)R16(r8); UPD(0x0C0712E2u, 2);  /* 0C0712E0 mov.w @Rm,Rn */
	r10 += 0xFFFFFFFFu;  /* 0C0712E2 add #imm,Rn */
	W16(r8, r10); UPD(0x0C0712E6u, 2);  /* 0C0712E4 mov.w Rm,@Rn */
L_0C0712E6: BLKS(0x0C0712E6u);
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C0712E8u, 1);  /* 0C0712E6 mov.w @Rm,Rn */
	IF(0x0C0712E8u); T = (s32)r11 > 0;  /* 0C0712E8 cmp/pl Rn */
	if (T) { UPD(0x0C0712F2u, 4); goto L_0C0712F2; }  /* 0C0712EA bt */
L_0C0712EC: BLKS(0x0C0712ECu);
	W16(r8, r9); UPD(0x0C0712EEu, 1);  /* 0C0712EC mov.w Rm,@Rn */
	{ IF(0x0C0712F0u); ; /* slot nop */ UPD(0x0C071510u, 3); goto L_0C071510; }  /* 0C0712EE bra */
L_0C0712F2: BLKS(0x0C0712F2u);
	r9 = 0x270u; UPD(0x0C0712F4u, 1);  /* 0C0712F2 mov.w @(disp,pc),Rn */
	{ r9 += r13; /* slot add Rm,Rn */ UPD(0x0C071360u, 3); goto L_0C071360; }  /* 0C0712F4 bra */
L_0C071360: BLKS(0x0C071360u);
	W32(r14 + 0x10u, r9); UPD(0x0C071362u, 1);  /* 0C071360 mov.l Rm,@(disp,Rn) */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C071364u, 1);  /* 0C071362 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C071364 tst Rm,Rn */
	if (!T) { UPD(0x0C071380u, 4); goto L_0C071380; }  /* 0C071366 bf */
L_0C071368: BLKS(0x0C071368u);
	r14 += 0x24u;  /* 0C071368 add #imm,Rn */
	UPD(0x0C07136Au, 1);
L_0C07136A: BLKS(0x0C07136Au);
	r15 = r14;  /* 0C07136A mov Rm,Rn */
	IF(0x0C07136Cu); PR = R32(r15); r15 += 4; UPD(0x0C07136Eu, 2);  /* 0C07136C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C071370u, 1);  /* 0C07136E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C071372u, 1);  /* 0C071370 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C071374u, 1);  /* 0C071372 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C071376u, 1);  /* 0C071374 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C071378u, 1);  /* 0C071376 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07137Au, 1);  /* 0C071378 mov.l @Rm+,Rn */
	IF(0x0C07137Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07137A rts */
L_0C071380: BLKS(0x0C071380u);
	r5 = R32(r14); UPD(0x0C071382u, 1);  /* 0C071380 mov.l @Rm,Rn */
	r0 = 0x3u;  /* 0C071382 mov #imm,Rn */
	IF(0x0C071384u); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C071384 shld Rm,Rn */
	r4 = 0xC2B039Cu; UPD(0x0C071388u, 3);  /* 0C071386 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C071388 add #imm,Rn */
	r0 = R32(r4); UPD(0x0C07138Cu, 2);  /* 0C07138A mov.l @Rm,Rn */
	IF(0x0C07138Cu); r0 >>= 2;  /* 0C07138C shlr2 Rn */
	r0 &= 0x7u;  /* 0C07138E and #imm,r0 */
	r5 |= r0;  /* 0C071390 or Rm,Rn */
	IF(0x0C071392u); r5 <<= 2;  /* 0C071392 shll2 Rn */
	r6 = 0xC1751C8u; UPD(0x0C071396u, 5);  /* 0C071394 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C071396 mov Rm,Rn */
	IF(0x0C071398u); r7 = R32(r0 + r6); UPD(0x0C07139Au, 2);  /* 0C071398 mov.l @(r0,Rm),Rn */
	r8 = 0xC2289E8u; UPD(0x0C07139Cu, 1);  /* 0C07139A mov.l @(disp,pc),Rn */
	W32(r8, r7); UPD(0x0C07139Eu, 1);  /* 0C07139C mov.l Rm,@Rn */
	r12 = R32(r14 + 0x8u); UPD(0x0C0713A0u, 1);  /* 0C07139E mov.l @(disp,Rm),Rn */
	r8 = 0xC1754E0u; UPD(0x0C0713A2u, 1);  /* 0C0713A0 mov.l @(disp,pc),Rn */
	IF(0x0C0713A2u); r12 <<= 2;  /* 0C0713A2 shll2 Rn */
	r1 = 0xC174FA4u; UPD(0x0C0713A6u, 2);  /* 0C0713A4 mov.l @(disp,pc),Rn */
	r8 += r12;  /* 0C0713A6 add Rm,Rn */
	r3 = 0xC3C86B0u; UPD(0x0C0713AAu, 2);  /* 0C0713A8 mov.l @(disp,pc),Rn */
	r11 = R32(r8); UPD(0x0C0713ACu, 1);  /* 0C0713AA mov.l @Rm,Rn */
	W32(r3, r1); UPD(0x0C0713AEu, 1);  /* 0C0713AC mov.l Rm,@Rn */
	r10 = R32(r11 + 0xCu); UPD(0x0C0713B0u, 1);  /* 0C0713AE mov.l @(disp,Rm),Rn */
	r6 = R32(r13 + 0x14u); UPD(0x0C0713B2u, 1);  /* 0C0713B0 mov.l @(disp,Rm),Rn */
	r9 = R32(r11 + 0x8u); UPD(0x0C0713B4u, 1);  /* 0C0713B2 mov.l @(disp,Rm),Rn */
	r6 += r10;  /* 0C0713B4 add Rm,Rn */
	r5 = R32(r13 + 0x10u); UPD(0x0C0713B8u, 2);  /* 0C0713B6 mov.l @(disp,Rm),Rn */
	r10 = 0xC073B10u; UPD(0x0C0713BAu, 1);  /* 0C0713B8 mov.l @(disp,pc),Rn */
	r5 += r9;  /* 0C0713BA add Rm,Rn */
	r11 = 0x808080u; UPD(0x0C0713BEu, 2);  /* 0C0713BC mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0713BE mov #imm,Rn */
	W32(r14 + 0x14u, r12); UPD(0x0C0713C2u, 2);  /* 0C0713C0 mov.l Rm,@(disp,Rn) */
	r7 = r11;  /* 0C0713C2 mov Rm,Rn */
	r4 = 0x1217FF00u; UPD(0x0C0713C6u, 2);  /* 0C0713C4 mov.l @(disp,pc),Rn */
	IF(0x0C0713C6u); { u32 t_ = r10; PR = 0x0C0713CAu; W32(r15, r9); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C0713CAu); }  /* 0C0713C6 jsr @Rn */
L_0C0713CA: BLKS(0x0C0713CAu);
	r3 = R32(r14 + 0x10u); UPD(0x0C0713CCu, 1);  /* 0C0713CA mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0713CEu, 1);  /* 0C0713CC mov.b @Rm,Rn */
	r5 = 0x808u; UPD(0x0C0713D0u, 1);  /* 0C0713CE mov.w @(disp,pc),Rn */
	r4 = r2 & 0xFF;  /* 0C0713D0 extu.b Rm,Rn */
	IF(0x0C0713D2u); MACL = r4 * r5;  /* 0C0713D2 mul.l Rm,Rn */
	r7 = R32(r8); UPD(0x0C0713D6u, 4);  /* 0C0713D4 mov.l @Rm,Rn */
	r5 = R32(r13 + 0x10u); UPD(0x0C0713D8u, 1);  /* 0C0713D6 mov.l @(disp,Rm),Rn */
	IF(0x0C0713D8u); r1 = MACL;  /* 0C0713D8 sts macl,Rn */
	r6 = R32(r7 + 0x8u); UPD(0x0C0713DCu, 2);  /* 0C0713DA mov.l @(disp,Rm),Rn */
	r4 = 0x2040000u; UPD(0x0C0713DEu, 1);  /* 0C0713DC mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C0713DE add Rm,Rn */
	r12 = R32(r7 + 0xCu); UPD(0x0C0713E2u, 2);  /* 0C0713E0 mov.l @(disp,Rm),Rn */
	r4 |= r1;  /* 0C0713E2 or Rm,Rn */
	r0 = 0x10000000u; UPD(0x0C0713E6u, 2);  /* 0C0713E4 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C0713E6 mov Rm,Rn */
	r6 = R32(r13 + 0x14u); UPD(0x0C0713EAu, 2);  /* 0C0713E8 mov.l @(disp,Rm),Rn */
	r4 |= r0;  /* 0C0713EA or Rm,Rn */
	W32(r15, r9); UPD(0x0C0713EEu, 2);  /* 0C0713EC mov.l Rm,@Rn */
	IF(0x0C0713EEu); { u32 t_ = r10; PR = 0x0C0713F2u; r6 += r12; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C0713F2u); }  /* 0C0713EE jsr @Rn */
L_0C0713F2: BLKS(0x0C0713F2u);
	r0 = 0x289u; UPD(0x0C0713F4u, 1);  /* 0C0713F2 mov.w @(disp,pc),Rn */
	IF(0x0C0713F4u); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0713F6u, 1);  /* 0C0713F4 mov.b @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C0713F6 tst Rm,Rn */
	{ u32 c_ = T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C071368u, 4); goto L_0C071368; } goto L_0C0713FC; }  /* 0C0713F8 bt/s */
L_0C0713FC: BLKS(0x0C0713FCu);
	r10 = 0xC297A3Cu; UPD(0x0C0713FEu, 2);  /* 0C0713FC mov.l @(disp,pc),Rn */
	r5 = 0xFFFFFFu; UPD(0x0C071400u, 1);  /* 0C0713FE mov.l @(disp,pc),Rn */
	r2 = R32(r10); UPD(0x0C071402u, 1);  /* 0C071400 mov.l @Rm,Rn */
	r5 -= r2;  /* 0C071402 sub Rm,Rn */
	r2 = r5;  /* 0C071404 mov Rm,Rn */
	IF(0x0C071406u); r2 >>= 16;  /* 0C071406 shlr16 Rn */
	r7 = 0xFFFFFF01u; UPD(0x0C07140Au, 4);  /* 0C071408 mov.w @(disp,pc),Rn */
	r2 += r2;  /* 0C07140A add Rm,Rn */
	r7 += r2;  /* 0C07140C add Rm,Rn */
	IF(0x0C07140Eu); T = (s32)r7 >= 0;  /* 0C07140E cmp/pz Rn */
	if (!T) { UPD(0x0C071500u, 6); goto L_0C071500; }  /* 0C071410 bf */
L_0C071412: BLKS(0x0C071412u);
	r6 = 0xFFu; UPD(0x0C071414u, 1);  /* 0C071412 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C071414 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C071420u, 4); goto L_0C071420; } goto L_0C07141A; }  /* 0C071416 bf/s */
L_0C07141A: BLKS(0x0C07141Au);
	r11 = 0x1FEu; UPD(0x0C07141Cu, 2);  /* 0C07141A mov.w @(disp,pc),Rn */
	r11 -= r2;  /* 0C07141C sub Rm,Rn */
	r3 = r11;  /* 0C07141E mov Rm,Rn */
	UPD(0x0C071420u, 2);
L_0C071420: BLKS(0x0C071420u);
	r10 = r6;  /* 0C071420 mov Rm,Rn */
	r10 -= r2;  /* 0C071422 sub Rm,Rn */
	IF(0x0C071424u); T = (s32)r10 >= 0;  /* 0C071424 cmp/pz Rn */
	if (!T) { UPD(0x0C0714F0u, 6); goto L_0C0714F0; }  /* 0C071426 bf */
L_0C071428: BLKS(0x0C071428u);
	r0 = 0x274u; UPD(0x0C07142Au, 1);  /* 0C071428 mov.w @(disp,pc),Rn */
	IF(0x0C07142Au); r5 >>= 16;  /* 0C07142A shlr16 Rn */
	r4 = R32(r14 + 0x10u); UPD(0x0C07142Eu, 2);  /* 0C07142C mov.l @(disp,Rm),Rn */
	IF(0x0C07142Eu); r5 >>= 2;  /* 0C07142E shlr2 Rn */
	IF(0x0C071430u); r2 = R32(r0 + r13); UPD(0x0C071432u, 2);  /* 0C071430 mov.l @(r0,Rm),Rn */
	IF(0x0C071432u); r5 >>= 2;  /* 0C071432 shlr2 Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C071436u, 2);  /* 0C071434 mov.b @Rm,Rn */
	r12 = r2;  /* 0C071436 mov Rm,Rn */
	r8 = r6 & 0xFF;  /* 0C071438 extu.b Rm,Rn */
	r0 = 0x2070000u; UPD(0x0C07143Cu, 3);  /* 0C07143A mov.l @(disp,pc),Rn */
	IF(0x0C07143Cu); r12 <<= 8;  /* 0C07143C shll8 Rn */
	IF(0x0C07143Eu); MACL = r5 * r8;  /* 0C07143E mul.l Rm,Rn */
	r12 += r2;  /* 0C071440 add Rm,Rn */
	r12 |= r0;  /* 0C071442 or Rm,Rn */
	IF(0x0C071444u); r0 = MACL;  /* 0C071444 sts macl,Rn */
	IF(0x0C071446u); r0 >>= 2;  /* 0C071446 shlr2 Rn */
	IF(0x0C071448u); T = r0 & 1; r0 >>= 1;  /* 0C071448 shlr Rn */
	r9 = 0xFu;  /* 0C07144A mov #imm,Rn */
	T = (s32)r0 > (s32)r9;  /* 0C07144C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C071452u, 13); goto L_0C071452; }  /* 0C07144E bf */
L_0C071450: BLKS(0x0C071450u);
	r0 = 0xFu;  /* 0C071450 mov #imm,Rn */
	UPD(0x0C071452u, 1);
L_0C071452: BLKS(0x0C071452u);
	r11 = r0;  /* 0C071452 mov Rm,Rn */
	IF(0x0C071454u); r11 <<= 2;  /* 0C071454 shll2 Rn */
	W32(r14 + 0x18u, r11); UPD(0x0C071458u, 3);  /* 0C071456 mov.l Rm,@(disp,Rn) */
	r5 = 0x3u;  /* 0C071458 mov #imm,Rn */
	r11 = r0;  /* 0C07145A mov Rm,Rn */
	r8 = r7;  /* 0C07145C mov Rm,Rn */
	IF(0x0C07145Eu); r8 <<= 16;  /* 0C07145E shll16 Rn */
	IF(0x0C071460u); r3 <<= 8;  /* 0C071460 shll8 Rn */
	IF(0x0C071462u); ARG0(0x4B5Du); { s32 s_ = (s32)r5; if (s_ >= 0) r11 <<= (s_ & 31); else if ((s_ & 31) == 0) r11 = 0; else r11 >>= ((~s_ & 31) + 1); }  /* 0C071462 shld Rm,Rn */
	r9 = 0x0u;  /* 0C071464 mov #imm,Rn */
	r8 |= r3;  /* 0C071466 or Rm,Rn */
	UPD(0x0C071468u, 8);
L_0C071468: BLKS(0x0C071468u);
	r0 = R32(r14 + 0x18u); UPD(0x0C07146Au, 1);  /* 0C071468 mov.l @(disp,Rm),Rn */
	T = (r9 & r9) == 0;  /* 0C07146A tst Rm,Rn */
	r0 |= r9;  /* 0C07146C or Rm,Rn */
	r3 = 0xC1752A8u; UPD(0x0C071470u, 3);  /* 0C07146E mov.l @(disp,pc),Rn */
	IF(0x0C071470u); r0 <<= 2;  /* 0C071470 shll2 Rn */
	IF(0x0C071472u); r2 = R32(r0 + r3); UPD(0x0C071474u, 2);  /* 0C071472 mov.l @(r0,Rm),Rn */
	r7 = 0xC2289E8u; UPD(0x0C071476u, 1);  /* 0C071474 mov.l @(disp,pc),Rn */
	{ u32 c_ = T; W32(r7, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0714E0u, 3); goto L_0C0714E0; } UPD(0x0C07147Au, 1); goto L_0C07147A; }  /* 0C071476 bt/s */
L_0C07147A: BLKS(0x0C07147Au);
	r0 = r9;  /* 0C07147A mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C07147C cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0714E0u, 5); goto L_0C0714E0; }  /* 0C07147E bt */
L_0C071480: BLKS(0x0C071480u);
	r2 += 0x2u;  /* 0C071480 add #imm,Rn */
	r0 = 0xC2B039Cu; UPD(0x0C071484u, 2);  /* 0C071482 mov.l @(disp,pc),Rn */
	r4 = R32(r0); UPD(0x0C071486u, 1);  /* 0C071484 mov.l @Rm,Rn */
	IF(0x0C071486u); r4 >>= 2;  /* 0C071486 shlr2 Rn */
	r1 = ~r4;  /* 0C071488 not Rm,Rn */
	UPD(0x0C07148Au, 2);
L_0C07148A: BLKS(0x0C07148Au);
	r4 = 0x7u;  /* 0C07148A mov #imm,Rn */
	r1 &= r4;  /* 0C07148C and Rm,Rn */
	r0 = 0xC1754E8u; UPD(0x0C071490u, 3);  /* 0C07148E mov.l @(disp,pc),Rn */
	r1 |= r11;  /* 0C071490 or Rm,Rn */
	r1 += r1;  /* 0C071492 add Rm,Rn */
	IF(0x0C071494u); r7 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C071496u, 3);  /* 0C071494 mov.w @(r0,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C071496 add #imm,Rn */
	r0 = R32(r14 + 0x14u); UPD(0x0C07149Au, 2);  /* 0C071498 mov.l @(disp,Rm),Rn */
	r9 += 0x1u;  /* 0C07149A add #imm,Rn */
	r5 = 0xC1754E0u; UPD(0x0C07149Eu, 2);  /* 0C07149C mov.l @(disp,pc),Rn */
	W16(r2, r7); UPD(0x0C0714A0u, 1);  /* 0C07149E mov.w Rm,@Rn */
	IF(0x0C0714A0u); r3 = R32(r0 + r5); UPD(0x0C0714A2u, 1);  /* 0C0714A0 mov.l @(r0,Rm),Rn */
	r7 = 0x0u;  /* 0C0714A2 mov #imm,Rn */
	r2 = R32(r3); UPD(0x0C0714A6u, 2);  /* 0C0714A4 mov.l @Rm,Rn */
	r5 = R32(r13 + 0x10u); UPD(0x0C0714A8u, 1);  /* 0C0714A6 mov.l @(disp,Rm),Rn */
	IF(0x0C0714A8u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C0714A8 shar Rn */
	r6 = R32(r3 + 0x8u); UPD(0x0C0714ACu, 2);  /* 0C0714AA mov.l @(disp,Rm),Rn */
	r5 += r2;  /* 0C0714AC add Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C0714B0u, 2);  /* 0C0714AE mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C0714B0 add Rm,Rn */
	r6 = R32(r13 + 0x14u); UPD(0x0C0714B4u, 2);  /* 0C0714B2 mov.l @(disp,Rm),Rn */
	IF(0x0C0714B4u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0714B4 shar Rn */
	r4 = R32(r3 + 0xCu); UPD(0x0C0714B8u, 2);  /* 0C0714B6 mov.l @(disp,Rm),Rn */
	r6 += r0;  /* 0C0714B8 add Rm,Rn */
	W32(r15, r7); UPD(0x0C0714BCu, 2);  /* 0C0714BA mov.l Rm,@Rn */
	r6 += r4;  /* 0C0714BC add Rm,Rn */
	r3 = 0xC073B10u; UPD(0x0C0714C0u, 2);  /* 0C0714BE mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C0714C0 mov Rm,Rn */
	r4 = 0x10000000u; UPD(0x0C0714C4u, 2);  /* 0C0714C2 mov.l @(disp,pc),Rn */
	r7 |= r10;  /* 0C0714C4 or Rm,Rn */
	IF(0x0C0714C6u); { u32 t_ = r3; PR = 0x0C0714CAu; r4 |= r12; /* slot or Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C0714CAu); }  /* 0C0714C6 jsr @Rn */
L_0C0714CA: BLKS(0x0C0714CAu);
	r2 = 0x3u;  /* 0C0714CA mov #imm,Rn */
	T = (s32)r9 > (s32)r2;  /* 0C0714CC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C071468u, 5); goto L_0C071468; } goto L_0C0714D2; }  /* 0C0714CE bf/s */
L_0C0714D2: BLKS(0x0C0714D2u);
	{ r14 += 0x24u; /* slot add #imm,Rn */ UPD(0x0C07136Au, 4); goto L_0C07136A; }  /* 0C0714D2 bra */
L_0C0714E0: BLKS(0x0C0714E0u);
	r6 = 0xC2B039Cu; UPD(0x0C0714E2u, 1);  /* 0C0714E0 mov.l @(disp,pc),Rn */
	r2 += 0x2u;  /* 0C0714E2 add #imm,Rn */
	r1 = R32(r6); UPD(0x0C0714E6u, 2);  /* 0C0714E4 mov.l @Rm,Rn */
	{ IF(0x0C0714E8u); r1 >>= 2; /* slot shlr2 Rn */ UPD(0x0C07148Au, 3); goto L_0C07148A; }  /* 0C0714E6 bra */
L_0C0714F0: BLKS(0x0C0714F0u);
	{ r10 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C071428u, 3); goto L_0C071428; }  /* 0C0714F0 bra */
L_0C071500: BLKS(0x0C071500u);
	{ r7 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C071412u, 3); goto L_0C071412; }  /* 0C071500 bra */
L_0C071510: BLKS(0x0C071510u);
	r0 = 0x286u; UPD(0x0C071512u, 1);  /* 0C071510 mov.w @(disp,pc),Rn */
	IF(0x0C071512u); W8(r0 + r13, r9); UPD(0x0C071514u, 1);  /* 0C071512 mov.b Rm,@(r0,Rn) */
	{ W32(r12 + 0x4u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0712F2u, 3); goto L_0C0712F2; }  /* 0C071514 bra */
L_0C071520: BLKS(0x0C071520u);
	r5 = 0xC1754B4u; UPD(0x0C071522u, 1);  /* 0C071520 mov.l @(disp,pc),Rn */
	IF(0x0C071522u); r3 = R32(r0 + r5); UPD(0x0C071524u, 1);  /* 0C071522 mov.l @(r0,Rm),Rn */
	r2 = 0xC2289E8u; UPD(0x0C071526u, 1);  /* 0C071524 mov.l @(disp,pc),Rn */
	{ W32(r2, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C071234u, 3); goto L_0C071234; }  /* 0C071526 bra */
L_0C071530: BLKS(0x0C071530u);
	{ IF(0x0C071532u); ; /* slot nop */ UPD(0x0C07116Eu, 3); goto L_0C07116E; }  /* 0C071530 bra */
L_0C071540: BLKS(0x0C071540u);
	r3 = 0xC0u; UPD(0x0C071542u, 1);  /* 0C071540 mov.w @(disp,pc),Rn */
	T = (s32)r4 > (s32)r3;  /* 0C071542 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r2 + 0x38u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C071530u, 4); goto L_0C071530; } UPD(0x0C071548u, 1); goto L_0C071548; }  /* 0C071544 bf/s */
L_0C071548: BLKS(0x0C071548u);
	{ W32(r2 + 0x38u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C071530u, 3); goto L_0C071530; }  /* 0C071548 bra */
}

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


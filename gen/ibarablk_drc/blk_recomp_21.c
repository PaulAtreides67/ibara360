#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C0AF2B0(sh3_t *c)
{
	LOCALS;
L_0C0AF2B0: BLKS(0x0C0AF2B0u);
	r6 = 0xB4u; UPD(0x0C0AF2B2u, 1);  /* 0C0AF2B0 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0AF2B2 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF2B6u, 2);  /* 0C0AF2B4 mov.l Rm,@-Rn */
	IF(0x0C0AF2B6u); MACL = r1 * r6;  /* 0C0AF2B6 mul.l Rm,Rn */
	r4 = 0xC2B1A3Cu; UPD(0x0C0AF2BAu, 3);  /* 0C0AF2B8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF2BA mov Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AF2BEu, 2);  /* 0C0AF2BC mov.l @Rm,Rn */
	IF(0x0C0AF2BEu); r2 = MACL;  /* 0C0AF2BE sts macl,Rn */
	r0 = 0xC286578u; UPD(0x0C0AF2C2u, 2);  /* 0C0AF2C0 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r3 = v_; } UPD(0x0C0AF2C4u, 1);  /* 0C0AF2C2 mov.w @Rm+,Rn */
	r2 += r0;  /* 0C0AF2C4 add Rm,Rn */
	r0 = 0x94u; UPD(0x0C0AF2C8u, 2);  /* 0C0AF2C6 mov.w @(disp,pc),Rn */
	IF(0x0C0AF2C8u); r3 <<= 8;  /* 0C0AF2C8 shll8 Rn */
	IF(0x0C0AF2CAu); W32(r0 + r2, r3); UPD(0x0C0AF2CCu, 2);  /* 0C0AF2CA mov.l Rm,@(r0,Rn) */
	r0 += 0xFFFFFFF8u;  /* 0C0AF2CC add #imm,Rn */
	IF(0x0C0AF2CEu); W32(r0 + r2, r3); UPD(0x0C0AF2D0u, 2);  /* 0C0AF2CE mov.l Rm,@(r0,Rn) */
	W32(r4, r5); UPD(0x0C0AF2D2u, 1);  /* 0C0AF2D0 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF2D2 mov #imm,Rn */
	r15 = r14;  /* 0C0AF2D4 mov Rm,Rn */
	IF(0x0C0AF2D6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF2D6 rts */
}

void blk_f_0C0AF2F0(sh3_t *c)
{
	LOCALS;
L_0C0AF2F0: BLKS(0x0C0AF2F0u);
	r2 = 0xB4u; UPD(0x0C0AF2F2u, 1);  /* 0C0AF2F0 mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C0AF2F2 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF2F6u, 2);  /* 0C0AF2F4 mov.l Rm,@-Rn */
	IF(0x0C0AF2F6u); MACL = r3 * r2;  /* 0C0AF2F6 mul.l Rm,Rn */
	r4 = 0xC2B1A3Cu; UPD(0x0C0AF2FAu, 3);  /* 0C0AF2F8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF2FA mov Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AF2FEu, 2);  /* 0C0AF2FC mov.l @Rm,Rn */
	IF(0x0C0AF2FEu); r0 = MACL;  /* 0C0AF2FE sts macl,Rn */
	r6 = 0xC286578u; UPD(0x0C0AF302u, 2);  /* 0C0AF300 mov.l @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C0AF302 add #imm,Rn */
	r6 += r0;  /* 0C0AF304 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r1 = v_; } UPD(0x0C0AF308u, 3);  /* 0C0AF306 mov.b @Rm+,Rn */
	r0 = 0xAAu; UPD(0x0C0AF30Au, 1);  /* 0C0AF308 mov.w @(disp,pc),Rn */
	IF(0x0C0AF30Au); W8(r0 + r6, r1); UPD(0x0C0AF30Cu, 1);  /* 0C0AF30A mov.b Rm,@(r0,Rn) */
	W32(r4, r5); UPD(0x0C0AF30Eu, 1);  /* 0C0AF30C mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF30E mov #imm,Rn */
	r15 = r14;  /* 0C0AF310 mov Rm,Rn */
	IF(0x0C0AF312u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF312 rts */
}

void blk_f_0C0AF330(sh3_t *c)
{
	LOCALS;
L_0C0AF330: BLKS(0x0C0AF330u);
	r3 = 0xB4u; UPD(0x0C0AF332u, 1);  /* 0C0AF330 mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)r4;  /* 0C0AF332 exts.w Rm,Rn */
	IF(0x0C0AF334u); MACL = r6 * r3;  /* 0C0AF334 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0AF338u, 4);  /* 0C0AF336 mov.l @(disp,pc),Rn */
	IF(0x0C0AF338u); r5 = MACL;  /* 0C0AF338 sts macl,Rn */
	r0 = 0xA8u; UPD(0x0C0AF33Cu, 2);  /* 0C0AF33A mov.w @(disp,pc),Rn */
	r5 += r2;  /* 0C0AF33C add Rm,Rn */
	r5 += r0;  /* 0C0AF33E add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF342u, 3);  /* 0C0AF340 mov.l Rm,@-Rn */
	r5 += 0x2u;  /* 0C0AF342 add #imm,Rn */
	r0 = 0xC2B1A3Cu; UPD(0x0C0AF346u, 2);  /* 0C0AF344 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF346 mov Rm,Rn */
	r4 = R32(r0); UPD(0x0C0AF34Au, 2);  /* 0C0AF348 mov.l @Rm,Rn */
	r4 += 0x1u;  /* 0C0AF34A add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r1 = v_; } UPD(0x0C0AF34Eu, 2);  /* 0C0AF34C mov.b @Rm+,Rn */
	W8(r5, r1); UPD(0x0C0AF350u, 1);  /* 0C0AF34E mov.b Rm,@Rn */
	{ u32 v_ = r1; r5 -= 1; W8(r5, v_); } UPD(0x0C0AF352u, 1);  /* 0C0AF350 mov.b Rm,@-Rn */
	W32(r0, r4); UPD(0x0C0AF354u, 1);  /* 0C0AF352 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF354 mov #imm,Rn */
	r15 = r14;  /* 0C0AF356 mov Rm,Rn */
	IF(0x0C0AF358u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF358 rts */
}

void blk_f_0C0AF370(sh3_t *c)
{
	LOCALS;
L_0C0AF370: BLKS(0x0C0AF370u);
	r6 = (u32)(s32)(s16)r4;  /* 0C0AF370 exts.w Rm,Rn */
	r0 = 0xB4u; UPD(0x0C0AF374u, 2);  /* 0C0AF372 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF376u, 1);  /* 0C0AF374 mov.l Rm,@-Rn */
	IF(0x0C0AF376u); MACL = r6 * r0;  /* 0C0AF376 mul.l Rm,Rn */
	r4 = 0xC2B1A3Cu; UPD(0x0C0AF37Au, 3);  /* 0C0AF378 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF37A mov Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AF37Eu, 2);  /* 0C0AF37C mov.l @Rm,Rn */
	IF(0x0C0AF37Eu); r0 = MACL;  /* 0C0AF37E sts macl,Rn */
	r3 = 0xC286578u; UPD(0x0C0AF382u, 2);  /* 0C0AF380 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AF384u, 1);  /* 0C0AF382 mov.w @Rm+,Rn */
	r0 += r3;  /* 0C0AF384 add Rm,Rn */
	r2 = 0x8Au; UPD(0x0C0AF388u, 2);  /* 0C0AF386 mov.w @(disp,pc),Rn */
	IF(0x0C0AF388u); W16(r0 + r2, r1); UPD(0x0C0AF38Au, 1);  /* 0C0AF388 mov.w Rm,@(r0,Rn) */
	r2 += 0xFFFFFFFCu;  /* 0C0AF38A add #imm,Rn */
	IF(0x0C0AF38Cu); W16(r0 + r2, r1); UPD(0x0C0AF38Eu, 2);  /* 0C0AF38C mov.w Rm,@(r0,Rn) */
	W32(r4, r5); UPD(0x0C0AF390u, 1);  /* 0C0AF38E mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF390 mov #imm,Rn */
	r15 = r14;  /* 0C0AF392 mov Rm,Rn */
	IF(0x0C0AF394u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF394 rts */
}

void blk_f_0C0AF3B0(sh3_t *c)
{
	LOCALS;
L_0C0AF3B0: BLKS(0x0C0AF3B0u);
	r0 = (u32)(s32)(s16)r4;  /* 0C0AF3B0 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF3B4u, 2);  /* 0C0AF3B2 mov.l Rm,@-Rn */
	r4 = 0xC2B1A3Cu; UPD(0x0C0AF3B6u, 1);  /* 0C0AF3B4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF3B6 mov Rm,Rn */
	r3 = 0xB4u; UPD(0x0C0AF3BAu, 2);  /* 0C0AF3B8 mov.w @(disp,pc),Rn */
	r7 = R32(r4); UPD(0x0C0AF3BCu, 1);  /* 0C0AF3BA mov.l @Rm,Rn */
	IF(0x0C0AF3BCu); MACL = r0 * r3;  /* 0C0AF3BC mul.l Rm,Rn */
	r7 += 0x1u;  /* 0C0AF3BE add #imm,Rn */
	r2 = 0xC286578u; UPD(0x0C0AF3C2u, 4);  /* 0C0AF3C0 mov.l @(disp,pc),Rn */
	IF(0x0C0AF3C2u); r6 = MACL;  /* 0C0AF3C2 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r7); r7 += 1; r5 = v_; } UPD(0x0C0AF3C6u, 2);  /* 0C0AF3C4 mov.b @Rm+,Rn */
	r6 += r2;  /* 0C0AF3C6 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AF3CAu, 2);  /* 0C0AF3C8 mov.w @(disp,pc),Rn */
	r1 = r5 & 0xFF;  /* 0C0AF3CA extu.b Rm,Rn */
	IF(0x0C0AF3CCu); W8(r0 + r6, r5); UPD(0x0C0AF3CEu, 2);  /* 0C0AF3CC mov.b Rm,@(r0,Rn) */
	r0 = 0x4Cu;  /* 0C0AF3CE mov #imm,Rn */
	IF(0x0C0AF3D0u); MACL = r1 * r0;  /* 0C0AF3D0 mul.l Rm,Rn */
	W32(r4, r7); UPD(0x0C0AF3D4u, 4);  /* 0C0AF3D2 mov.l Rm,@Rn */
	r0 = 0xC28635Au; UPD(0x0C0AF3D6u, 1);  /* 0C0AF3D4 mov.l @(disp,pc),Rn */
	IF(0x0C0AF3D6u); r3 = MACL;  /* 0C0AF3D6 sts macl,Rn */
	r4 = 0xA8u; UPD(0x0C0AF3DAu, 2);  /* 0C0AF3D8 mov.w @(disp,pc),Rn */
	IF(0x0C0AF3DAu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF3DCu, 1);  /* 0C0AF3DA mov.b @(r0,Rm),Rn */
	r4 += r6;  /* 0C0AF3DC add Rm,Rn */
	r4 += 0x2u;  /* 0C0AF3DE add #imm,Rn */
	W8(r4, r2); UPD(0x0C0AF3E2u, 3);  /* 0C0AF3E0 mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF3E2 mov #imm,Rn */
	{ u32 v_ = r2; r4 -= 1; W8(r4, v_); } UPD(0x0C0AF3E6u, 2);  /* 0C0AF3E4 mov.b Rm,@-Rn */
	r15 = r14;  /* 0C0AF3E6 mov Rm,Rn */
	IF(0x0C0AF3E8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AF3E8 rts */
}

void blk_f_0C0AF400(sh3_t *c)
{
	LOCALS;
L_0C0AF400: BLKS(0x0C0AF400u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF402u, 1);  /* 0C0AF400 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0AF402 exts.w Rm,Rn */
	r3 = 0xC2B1A3Cu; UPD(0x0C0AF406u, 2);  /* 0C0AF404 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF406 mov Rm,Rn */
	r6 = R32(r3); UPD(0x0C0AF40Au, 2);  /* 0C0AF408 mov.l @Rm,Rn */
	r2 = 0xB4u; UPD(0x0C0AF40Cu, 1);  /* 0C0AF40A mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r5 = v_; } UPD(0x0C0AF40Eu, 1);  /* 0C0AF40C mov.w @Rm+,Rn */
	IF(0x0C0AF40Eu); MACL = r4 * r2;  /* 0C0AF40E mul.l Rm,Rn */
	W32(r3, r6); UPD(0x0C0AF412u, 3);  /* 0C0AF410 mov.l Rm,@Rn */
	r0 = 0xC286578u; UPD(0x0C0AF414u, 1);  /* 0C0AF412 mov.l @(disp,pc),Rn */
	IF(0x0C0AF414u); r3 = MACL;  /* 0C0AF414 sts macl,Rn */
	r3 += r0;  /* 0C0AF416 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AF41Au, 3);  /* 0C0AF418 mov.w @(disp,pc),Rn */
	IF(0x0C0AF41Au); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF41Cu, 1);  /* 0C0AF41A mov.b @(r0,Rm),Rn */
	r0 = R32(r3); UPD(0x0C0AF41Eu, 1);  /* 0C0AF41C mov.l @Rm,Rn */
	r0 &= 0x10u;  /* 0C0AF41E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0AF420 tst Rm,Rn */
	{ u32 c_ = T; r6 = R32(r3 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0AF444u, 5); goto L_0C0AF444; } UPD(0x0C0AF426u, 1); goto L_0C0AF426; }  /* 0C0AF422 bt/s */
L_0C0AF426: BLKS(0x0C0AF426u);
	r0 = 0x4Cu;  /* 0C0AF426 mov #imm,Rn */
	IF(0x0C0AF428u); MACL = r7 * r0;  /* 0C0AF428 mul.l Rm,Rn */
	r2 = 0xC286318u; UPD(0x0C0AF42Cu, 4);  /* 0C0AF42A mov.l @(disp,pc),Rn */
	IF(0x0C0AF42Cu); r7 = MACL;  /* 0C0AF42C sts macl,Rn */
	r3 = 0xC23945Cu; UPD(0x0C0AF430u, 2);  /* 0C0AF42E mov.l @(disp,pc),Rn */
	r2 += r7;  /* 0C0AF430 add Rm,Rn */
	r7 = R32(r2 + 0x10u); UPD(0x0C0AF434u, 2);  /* 0C0AF432 mov.l @(disp,Rm),Rn */
	r0 = R32(r3); UPD(0x0C0AF436u, 1);  /* 0C0AF434 mov.l @Rm,Rn */
	IF(0x0C0AF436u); MACL = r0 * r7;  /* 0C0AF436 mul.l Rm,Rn */
	IF(0x0C0AF438u); r2 = MACL;  /* 0C0AF438 sts macl,Rn */
	IF(0x0C0AF43Au); T = (s32)r2 >= 0;  /* 0C0AF43A cmp/pz Rn */
	if (!T) { UPD(0x0C0AF4A0u, 7); goto L_0C0AF4A0; }  /* 0C0AF43C bf */
L_0C0AF43E: BLKS(0x0C0AF43Eu);
	r7 = (r2 >> 16) | (r2 << 16);  /* 0C0AF43E swap.w Rm,Rn */
	r2 = (u32)(s32)(s16)r7;  /* 0C0AF440 exts.w Rm,Rn */
	r6 -= r2;  /* 0C0AF442 sub Rm,Rn */
	UPD(0x0C0AF444u, 3);
L_0C0AF444: BLKS(0x0C0AF444u);
	r0 = 0xB4u; UPD(0x0C0AF446u, 1);  /* 0C0AF444 mov.w @(disp,pc),Rn */
	IF(0x0C0AF446u); MACL = r4 * r0;  /* 0C0AF446 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0AF44Au, 3);  /* 0C0AF448 mov.l @(disp,pc),Rn */
	IF(0x0C0AF44Au); r2 = MACL;  /* 0C0AF44A sts macl,Rn */
	r7 += r2;  /* 0C0AF44C add Rm,Rn */
	r3 = R32(r7 + 0x24u); UPD(0x0C0AF450u, 3);  /* 0C0AF44E mov.l @(disp,Rm),Rn */
	r2 = r5;  /* 0C0AF450 mov Rm,Rn */
	r0 = (r3 >> 16) | (r3 << 16);  /* 0C0AF452 swap.w Rm,Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C0AF454 exts.w Rm,Rn */
	r2 -= r4;  /* 0C0AF456 sub Rm,Rn */
	IF(0x0C0AF458u); T = (s32)r2 >= 0;  /* 0C0AF458 cmp/pz Rn */
	if (!T) { UPD(0x0C0AF490u, 8); goto L_0C0AF490; }  /* 0C0AF45A bf */
L_0C0AF45C: BLKS(0x0C0AF45Cu);
	r5 = (r6 >> 16) | (r6 << 16);  /* 0C0AF45C swap.w Rm,Rn */
	r1 = (u32)(s32)(s16)r5;  /* 0C0AF45E exts.w Rm,Rn */
	IF(0x0C0AF460u); T = (s32)r1 >= 0;  /* 0C0AF460 cmp/pz Rn */
	if (!T) { UPD(0x0C0AF480u, 6); goto L_0C0AF480; }  /* 0C0AF462 bf */
L_0C0AF464: BLKS(0x0C0AF464u);
	r1 += r1;  /* 0C0AF464 add Rm,Rn */
	T = (s32)r2 > (s32)r1;  /* 0C0AF466 cmp/gt Rm,Rn */
	IF(0x0C0AF468u); r6 = T;  /* 0C0AF468 movt Rn */
	T = (r6 & r6) == 0;  /* 0C0AF46A tst Rm,Rn */
	IF(0x0C0AF46Cu); r0 = T;  /* 0C0AF46C movt Rn */
	r15 = r14;  /* 0C0AF46E mov Rm,Rn */
	IF(0x0C0AF470u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 9); RET(t_); }  /* 0C0AF470 rts */
L_0C0AF480: BLKS(0x0C0AF480u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0AF464u, 3); goto L_0C0AF464; }  /* 0C0AF480 bra */
L_0C0AF490: BLKS(0x0C0AF490u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AF45Cu, 3); goto L_0C0AF45C; }  /* 0C0AF490 bra */
L_0C0AF4A0: BLKS(0x0C0AF4A0u);
	r3 = 0xFFFFu; UPD(0x0C0AF4A2u, 1);  /* 0C0AF4A0 mov.l @(disp,pc),Rn */
	{ r2 += r3; /* slot add Rm,Rn */ UPD(0x0C0AF43Eu, 3); goto L_0C0AF43E; }  /* 0C0AF4A2 bra */
}

void blk_f_0C0AF4C0(sh3_t *c)
{
	LOCALS;
L_0C0AF4C0: BLKS(0x0C0AF4C0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF4C2u, 1);  /* 0C0AF4C0 mov.l Rm,@-Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C0AF4C2 exts.w Rm,Rn */
	r0 = 0xC2B1A3Cu; UPD(0x0C0AF4C6u, 2);  /* 0C0AF4C4 mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C0AF4C8u, 1);  /* 0C0AF4C6 mov.l @Rm,Rn */
	r7 = 0xB4u; UPD(0x0C0AF4CAu, 1);  /* 0C0AF4C8 mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r6 = v_; } UPD(0x0C0AF4CCu, 1);  /* 0C0AF4CA mov.w @Rm+,Rn */
	IF(0x0C0AF4CCu); MACL = r3 * r7;  /* 0C0AF4CC mul.l Rm,Rn */
	W32(r0, r2); UPD(0x0C0AF4D0u, 3);  /* 0C0AF4CE mov.l Rm,@Rn */
	r5 = 0xC286578u; UPD(0x0C0AF4D2u, 1);  /* 0C0AF4D0 mov.l @(disp,pc),Rn */
	IF(0x0C0AF4D2u); r2 = MACL;  /* 0C0AF4D2 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0AF4D6u, 2);  /* 0C0AF4D4 mov.w @(disp,pc),Rn */
	r2 += r5;  /* 0C0AF4D6 add Rm,Rn */
	IF(0x0C0AF4D8u); r1 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0AF4DAu, 2);  /* 0C0AF4D8 mov.b @(r0,Rm),Rn */
	r0 = 0x4Cu;  /* 0C0AF4DA mov #imm,Rn */
	IF(0x0C0AF4DCu); MACL = r1 * r0;  /* 0C0AF4DC mul.l Rm,Rn */
	r4 = 0xC286318u; UPD(0x0C0AF4E0u, 4);  /* 0C0AF4DE mov.l @(disp,pc),Rn */
	IF(0x0C0AF4E0u); r3 = MACL;  /* 0C0AF4E0 sts macl,Rn */
	r4 += r3;  /* 0C0AF4E2 add Rm,Rn */
	r0 = R32(r2 + 0x24u); UPD(0x0C0AF4E6u, 3);  /* 0C0AF4E4 mov.l @(disp,Rm),Rn */
	r1 = R32(r4 + 0x8u); UPD(0x0C0AF4E8u, 1);  /* 0C0AF4E6 mov.l @(disp,Rm),Rn */
	r5 = R32(r2 + 0x2Cu); UPD(0x0C0AF4EAu, 1);  /* 0C0AF4E8 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C0AF4EA add Rm,Rn */
	r2 = (r0 >> 16) | (r0 << 16);  /* 0C0AF4EC swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0AF4EE exts.w Rm,Rn */
	r6 -= r0;  /* 0C0AF4F0 sub Rm,Rn */
	IF(0x0C0AF4F2u); T = (s32)r6 >= 0;  /* 0C0AF4F2 cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AF520u, 8); goto L_0C0AF520; } UPD(0x0C0AF4F8u, 1); goto L_0C0AF4F8; }  /* 0C0AF4F4 bf/s */
L_0C0AF4F8: BLKS(0x0C0AF4F8u);
	r4 = (r5 >> 16) | (r5 << 16);  /* 0C0AF4F8 swap.w Rm,Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0AF4FA exts.w Rm,Rn */
	IF(0x0C0AF4FCu); T = (s32)r1 >= 0;  /* 0C0AF4FC cmp/pz Rn */
	if (!T) { UPD(0x0C0AF510u, 6); goto L_0C0AF510; }  /* 0C0AF4FE bf */
L_0C0AF500: BLKS(0x0C0AF500u);
	r1 += r1;  /* 0C0AF500 add Rm,Rn */
	T = (s32)r6 > (s32)r1;  /* 0C0AF502 cmp/gt Rm,Rn */
	IF(0x0C0AF504u); r6 = T;  /* 0C0AF504 movt Rn */
	T = (r6 & r6) == 0;  /* 0C0AF506 tst Rm,Rn */
	IF(0x0C0AF508u); r0 = T;  /* 0C0AF508 movt Rn */
	r15 = r14;  /* 0C0AF50A mov Rm,Rn */
	IF(0x0C0AF50Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 9); RET(t_); }  /* 0C0AF50C rts */
L_0C0AF510: BLKS(0x0C0AF510u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0AF500u, 3); goto L_0C0AF500; }  /* 0C0AF510 bra */
L_0C0AF520: BLKS(0x0C0AF520u);
	{ r6 = 0u - r6; /* slot neg Rm,Rn */ UPD(0x0C0AF4F8u, 3); goto L_0C0AF4F8; }  /* 0C0AF520 bra */
}

void blk_f_0C0AF540(sh3_t *c)
{
	LOCALS;
L_0C0AF540: BLKS(0x0C0AF540u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF542u, 1);  /* 0C0AF540 mov.l Rm,@-Rn */
	r0 = 0xC2B1A3Cu; UPD(0x0C0AF544u, 1);  /* 0C0AF542 mov.l @(disp,pc),Rn */
	IF(0x0C0AF544u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF546u, 1);  /* 0C0AF544 sts.l pr,@-Rn */
	r2 = R32(r0); UPD(0x0C0AF548u, 1);  /* 0C0AF546 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r4 = v_; } UPD(0x0C0AF54Au, 1);  /* 0C0AF548 mov.w @Rm+,Rn */
	W32(r0, r2); UPD(0x0C0AF54Cu, 1);  /* 0C0AF54A mov.l Rm,@Rn */
	r0 = 0xC0C2110u; UPD(0x0C0AF54Eu, 1);  /* 0C0AF54C mov.l @(disp,pc),Rn */
	IF(0x0C0AF54Eu); { u32 t_ = r0; PR = 0x0C0AF552u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0AF552u); }  /* 0C0AF54E jsr @Rn */
L_0C0AF552: BLKS(0x0C0AF552u);
	r0 = 0x1u;  /* 0C0AF552 mov #imm,Rn */
	r15 = r14;  /* 0C0AF554 mov Rm,Rn */
	IF(0x0C0AF556u); PR = R32(r15); r15 += 4; UPD(0x0C0AF558u, 3);  /* 0C0AF556 lds.l @Rn+,pr */
	IF(0x0C0AF558u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF558 rts */
}

void blk_f_0C0AF570(sh3_t *c)
{
	LOCALS;
L_0C0AF570: BLKS(0x0C0AF570u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF572u, 1);  /* 0C0AF570 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C0AF572 exts.w Rm,Rn */
	r6 = 0xC2B1A3Cu; UPD(0x0C0AF576u, 2);  /* 0C0AF574 mov.l @(disp,pc),Rn */
	r2 = 0xB4u; UPD(0x0C0AF578u, 1);  /* 0C0AF576 mov.w @(disp,pc),Rn */
	r7 = R32(r6); UPD(0x0C0AF57Au, 1);  /* 0C0AF578 mov.l @Rm,Rn */
	IF(0x0C0AF57Au); MACL = r5 * r2;  /* 0C0AF57A mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0AF57Eu, 3);  /* 0C0AF57C mov.w @Rm+,Rn */
	r3 = 0xC286578u; UPD(0x0C0AF580u, 1);  /* 0C0AF57E mov.l @(disp,pc),Rn */
	IF(0x0C0AF580u); r2 = MACL;  /* 0C0AF580 sts macl,Rn */
	W32(r6, r7); UPD(0x0C0AF584u, 2);  /* 0C0AF582 mov.l Rm,@Rn */
	r2 += r3;  /* 0C0AF584 add Rm,Rn */
	r7 = R32(r2 + 0x28u); UPD(0x0C0AF588u, 2);  /* 0C0AF586 mov.l @(disp,Rm),Rn */
	IF(0x0C0AF588u); r0 <<= 16;  /* 0C0AF588 shll16 Rn */
	r7 -= r0;  /* 0C0AF58A sub Rm,Rn */
	IF(0x0C0AF58Cu); T = (s32)r7 >= 0;  /* 0C0AF58C cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AF5C0u, 6); goto L_0C0AF5C0; } UPD(0x0C0AF592u, 1); goto L_0C0AF592; }  /* 0C0AF58E bf/s */
L_0C0AF592: BLKS(0x0C0AF592u);
	r2 = R32(r2 + 0x30u); UPD(0x0C0AF594u, 1);  /* 0C0AF592 mov.l @(disp,Rm),Rn */
	IF(0x0C0AF594u); T = (s32)r2 >= 0;  /* 0C0AF594 cmp/pz Rn */
	if (!T) { UPD(0x0C0AF5B0u, 4); goto L_0C0AF5B0; }  /* 0C0AF596 bf */
L_0C0AF598: BLKS(0x0C0AF598u);
	r4 = 0x20000u; UPD(0x0C0AF59Au, 1);  /* 0C0AF598 mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0AF59A add Rm,Rn */
	T = (s32)r7 >= (s32)r2;  /* 0C0AF59C cmp/ge Rm,Rn */
	IF(0x0C0AF59Eu); r0 = T;  /* 0C0AF59E movt Rn */
	T = (r0 & r0) == 0;  /* 0C0AF5A0 tst Rm,Rn */
	IF(0x0C0AF5A2u); r0 = T;  /* 0C0AF5A2 movt Rn */
	r15 = r14;  /* 0C0AF5A4 mov Rm,Rn */
	IF(0x0C0AF5A6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 9); RET(t_); }  /* 0C0AF5A6 rts */
L_0C0AF5B0: BLKS(0x0C0AF5B0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AF598u, 3); goto L_0C0AF598; }  /* 0C0AF5B0 bra */
L_0C0AF5C0: BLKS(0x0C0AF5C0u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0AF592u, 3); goto L_0C0AF592; }  /* 0C0AF5C0 bra */
}

void blk_f_0C0AF5E0(sh3_t *c)
{
	LOCALS;
L_0C0AF5E0: BLKS(0x0C0AF5E0u);
	r5 = 0xB4u; UPD(0x0C0AF5E2u, 1);  /* 0C0AF5E0 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0AF5E2 exts.w Rm,Rn */
	IF(0x0C0AF5E4u); MACL = r1 * r5;  /* 0C0AF5E4 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0AF5E8u, 4);  /* 0C0AF5E6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF5EAu, 1);  /* 0C0AF5E8 mov.l Rm,@-Rn */
	IF(0x0C0AF5EAu); r6 = MACL;  /* 0C0AF5EA sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0AF5EEu, 2);  /* 0C0AF5EC mov.w @(disp,pc),Rn */
	r6 += r3;  /* 0C0AF5EE add Rm,Rn */
	IF(0x0C0AF5F0u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0AF5F2u, 2);  /* 0C0AF5F0 mov.b @(r0,Rm),Rn */
	r0 = 0xC2B1A3Cu; UPD(0x0C0AF5F4u, 1);  /* 0C0AF5F2 mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C0AF5F6u, 1);  /* 0C0AF5F4 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r3 = v_; } UPD(0x0C0AF5F8u, 1);  /* 0C0AF5F6 mov.w @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r5 = v_; } UPD(0x0C0AF5FAu, 1);  /* 0C0AF5F8 mov.w @Rm+,Rn */
	W32(r0, r2); UPD(0x0C0AF5FCu, 1);  /* 0C0AF5FA mov.l Rm,@Rn */
	r0 = 0x180u; UPD(0x0C0AF5FEu, 1);  /* 0C0AF5FC mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r0;  /* 0C0AF5FE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AF6B0u, 4); goto L_0C0AF6B0; } goto L_0C0AF604; }  /* 0C0AF600 bf/s */
L_0C0AF604: BLKS(0x0C0AF604u);
	r2 = 0x4Cu;  /* 0C0AF604 mov #imm,Rn */
	IF(0x0C0AF606u); MACL = r4 * r2;  /* 0C0AF606 mul.l Rm,Rn */
	r0 = 0xC286318u; UPD(0x0C0AF60Au, 5);  /* 0C0AF608 mov.l @(disp,pc),Rn */
	IF(0x0C0AF60Au); r7 = MACL;  /* 0C0AF60A sts macl,Rn */
	r7 += r0;  /* 0C0AF60C add Rm,Rn */
	r2 = R32(r7 + 0x8u); UPD(0x0C0AF610u, 3);  /* 0C0AF60E mov.l @(disp,Rm),Rn */
	r7 = (r2 >> 16) | (r2 << 16);  /* 0C0AF610 swap.w Rm,Rn */
	r2 = (u32)(s32)(s16)r7;  /* 0C0AF612 exts.w Rm,Rn */
	r3 -= r2;  /* 0C0AF614 sub Rm,Rn */
	r3 = (u32)(s32)(s16)r3;  /* 0C0AF616 exts.w Rm,Rn */
	r7 = R32(r6 + 0x24u); UPD(0x0C0AF61Au, 5);  /* 0C0AF618 mov.l @(disp,Rm),Rn */
L_0C0AF61A: BLKS(0x0C0AF61Au);
	IF(0x0C0AF61Au); r3 <<= 16;  /* 0C0AF61A shll16 Rn */
	r7 -= r3;  /* 0C0AF61C sub Rm,Rn */
	IF(0x0C0AF61Eu); T = (s32)r7 >= 0;  /* 0C0AF61E cmp/pz Rn */
	if (!T) { UPD(0x0C0AF6A0u, 6); goto L_0C0AF6A0; }  /* 0C0AF620 bf */
L_0C0AF622: BLKS(0x0C0AF622u);
	r2 = R32(r6 + 0x2Cu); UPD(0x0C0AF624u, 1);  /* 0C0AF622 mov.l @(disp,Rm),Rn */
	IF(0x0C0AF624u); T = (s32)r2 >= 0;  /* 0C0AF624 cmp/pz Rn */
	if (!T) { UPD(0x0C0AF690u, 4); goto L_0C0AF690; }  /* 0C0AF626 bf */
L_0C0AF628: BLKS(0x0C0AF628u);
	r3 = 0x4Cu;  /* 0C0AF628 mov #imm,Rn */
	IF(0x0C0AF62Au); MACL = r4 * r3;  /* 0C0AF62A mul.l Rm,Rn */
	IF(0x0C0AF62Cu); r4 = MACL;  /* 0C0AF62C sts macl,Rn */
	r0 += r4;  /* 0C0AF62E add Rm,Rn */
	r1 = R32(r0 + 0x10u); UPD(0x0C0AF632u, 6);  /* 0C0AF630 mov.l @(disp,Rm),Rn */
	IF(0x0C0AF632u); T = (s32)r1 >= 0;  /* 0C0AF632 cmp/pz Rn */
	if (!T) { UPD(0x0C0AF680u, 4); goto L_0C0AF680; }  /* 0C0AF634 bf */
L_0C0AF636: BLKS(0x0C0AF636u);
	r3 = 0x20000u; UPD(0x0C0AF638u, 1);  /* 0C0AF636 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C0AF638 add Rm,Rn */
	r2 += r3;  /* 0C0AF63A add Rm,Rn */
	T = (s32)r7 >= (s32)r2;  /* 0C0AF63C cmp/ge Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AF65Au, 6); goto L_0C0AF65A; } goto L_0C0AF642; }  /* 0C0AF63E bf/s */
L_0C0AF642: BLKS(0x0C0AF642u);
	r2 = R32(r6 + 0x28u); UPD(0x0C0AF644u, 2);  /* 0C0AF642 mov.l @(disp,Rm),Rn */
	IF(0x0C0AF644u); r5 <<= 16;  /* 0C0AF644 shll16 Rn */
	r2 -= r5;  /* 0C0AF646 sub Rm,Rn */
	IF(0x0C0AF648u); T = (s32)r2 >= 0;  /* 0C0AF648 cmp/pz Rn */
	if (!T) { UPD(0x0C0AF670u, 6); goto L_0C0AF670; }  /* 0C0AF64A bf */
L_0C0AF64C: BLKS(0x0C0AF64Cu);
	r1 = R32(r6 + 0x30u); UPD(0x0C0AF64Eu, 1);  /* 0C0AF64C mov.l @(disp,Rm),Rn */
	IF(0x0C0AF64Eu); T = (s32)r1 >= 0;  /* 0C0AF64E cmp/pz Rn */
	if (!T) { UPD(0x0C0AF660u, 4); goto L_0C0AF660; }  /* 0C0AF650 bf */
L_0C0AF652: BLKS(0x0C0AF652u);
	r1 += r3;  /* 0C0AF652 add Rm,Rn */
	T = (s32)r2 >= (s32)r1;  /* 0C0AF654 cmp/ge Rm,Rn */
	IF(0x0C0AF656u); r0 = T;  /* 0C0AF656 movt Rn */
	r0 ^= 0x1u;  /* 0C0AF658 xor #imm,r0 */
	UPD(0x0C0AF65Au, 4);
L_0C0AF65A: BLKS(0x0C0AF65Au);
	r15 = r14;  /* 0C0AF65A mov Rm,Rn */
	IF(0x0C0AF65Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AF65C rts */
L_0C0AF660: BLKS(0x0C0AF660u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0AF652u, 3); goto L_0C0AF652; }  /* 0C0AF660 bra */
L_0C0AF670: BLKS(0x0C0AF670u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AF64Cu, 3); goto L_0C0AF64C; }  /* 0C0AF670 bra */
L_0C0AF680: BLKS(0x0C0AF680u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0AF636u, 3); goto L_0C0AF636; }  /* 0C0AF680 bra */
L_0C0AF690: BLKS(0x0C0AF690u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AF628u, 3); goto L_0C0AF628; }  /* 0C0AF690 bra */
L_0C0AF6A0: BLKS(0x0C0AF6A0u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0AF622u, 3); goto L_0C0AF622; }  /* 0C0AF6A0 bra */
L_0C0AF6B0: BLKS(0x0C0AF6B0u);
	r0 = 0xC286318u; UPD(0x0C0AF6B2u, 1);  /* 0C0AF6B0 mov.l @(disp,pc),Rn */
	{ r7 = R32(r6 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AF61Au, 3); goto L_0C0AF61A; }  /* 0C0AF6B2 bra */
}

void blk_f_0C0AF6D0(sh3_t *c)
{
	LOCALS;
L_0C0AF6D0: BLKS(0x0C0AF6D0u);
	r7 = 0xB4u; UPD(0x0C0AF6D2u, 1);  /* 0C0AF6D0 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0AF6D2 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF6D6u, 2);  /* 0C0AF6D4 mov.l Rm,@-Rn */
	IF(0x0C0AF6D6u); MACL = r1 * r7;  /* 0C0AF6D6 mul.l Rm,Rn */
	r4 = 0xC2B1A3Cu; UPD(0x0C0AF6DAu, 3);  /* 0C0AF6D8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF6DA mov Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AF6DEu, 2);  /* 0C0AF6DC mov.l @Rm,Rn */
	IF(0x0C0AF6DEu); r2 = MACL;  /* 0C0AF6DE sts macl,Rn */
	r0 = 0xC286578u; UPD(0x0C0AF6E2u, 2);  /* 0C0AF6E0 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r6 = v_; } UPD(0x0C0AF6E4u, 1);  /* 0C0AF6E2 mov.w @Rm+,Rn */
	r2 += r0;  /* 0C0AF6E4 add Rm,Rn */
	r0 = 0x94u; UPD(0x0C0AF6E8u, 2);  /* 0C0AF6E6 mov.w @(disp,pc),Rn */
	IF(0x0C0AF6E8u); r6 <<= 8;  /* 0C0AF6E8 shll8 Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r3 = v_; } UPD(0x0C0AF6ECu, 2);  /* 0C0AF6EA mov.w @Rm+,Rn */
	IF(0x0C0AF6ECu); W32(r0 + r2, r6); UPD(0x0C0AF6EEu, 1);  /* 0C0AF6EC mov.l Rm,@(r0,Rn) */
	IF(0x0C0AF6EEu); r3 <<= 8;  /* 0C0AF6EE shll8 Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0AF6F0 add #imm,Rn */
	IF(0x0C0AF6F2u); W32(r0 + r2, r3); UPD(0x0C0AF6F4u, 3);  /* 0C0AF6F2 mov.l Rm,@(r0,Rn) */
	W32(r4, r5); UPD(0x0C0AF6F6u, 1);  /* 0C0AF6F4 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF6F6 mov #imm,Rn */
	r15 = r14;  /* 0C0AF6F8 mov Rm,Rn */
	IF(0x0C0AF6FAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF6FA rts */
}

void blk_f_0C0AF710(sh3_t *c)
{
	LOCALS;
L_0C0AF710: BLKS(0x0C0AF710u);
	r2 = 0xB4u; UPD(0x0C0AF712u, 1);  /* 0C0AF710 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C0AF712 exts.w Rm,Rn */
	IF(0x0C0AF714u); MACL = r5 * r2;  /* 0C0AF714 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AF718u, 4);  /* 0C0AF716 mov.l @(disp,pc),Rn */
	IF(0x0C0AF718u); r3 = MACL;  /* 0C0AF718 sts macl,Rn */
	r3 += r0;  /* 0C0AF71A add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF71Eu, 3);  /* 0C0AF71C mov.l Rm,@-Rn */
	r0 = 0x8Cu; UPD(0x0C0AF720u, 1);  /* 0C0AF71E mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF720 mov Rm,Rn */
	IF(0x0C0AF722u); r1 = R32(r0 + r3); UPD(0x0C0AF724u, 2);  /* 0C0AF722 mov.l @(r0,Rm),Rn */
	r0 += 0x8u;  /* 0C0AF724 add #imm,Rn */
	IF(0x0C0AF726u); r4 = R32(r0 + r3); UPD(0x0C0AF728u, 2);  /* 0C0AF726 mov.l @(r0,Rm),Rn */
	T = r1 == r4;  /* 0C0AF728 cmp/eq Rm,Rn */
	IF(0x0C0AF72Au); r0 = T;  /* 0C0AF72A movt Rn */
	r15 = r14;  /* 0C0AF72C mov Rm,Rn */
	IF(0x0C0AF72Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C0AF72E rts */
}

void blk_f_0C0AF740(sh3_t *c)
{
	LOCALS;
L_0C0AF740: BLKS(0x0C0AF740u);
	r0 = 0xB4u; UPD(0x0C0AF742u, 1);  /* 0C0AF740 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0AF742 exts.w Rm,Rn */
	IF(0x0C0AF744u); MACL = r1 * r0;  /* 0C0AF744 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0AF748u, 4);  /* 0C0AF746 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF74Au, 1);  /* 0C0AF748 mov.l Rm,@-Rn */
	IF(0x0C0AF74Au); r0 = MACL;  /* 0C0AF74A sts macl,Rn */
	r2 = 0x86u; UPD(0x0C0AF74Eu, 2);  /* 0C0AF74C mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C0AF74E add Rm,Rn */
	IF(0x0C0AF750u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0AF752u, 2);  /* 0C0AF750 mov.w @(r0,Rm),Rn */
	r14 = r15;  /* 0C0AF752 mov Rm,Rn */
	r2 += 0x4u;  /* 0C0AF754 add #imm,Rn */
	IF(0x0C0AF756u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0AF758u, 3);  /* 0C0AF756 mov.w @(r0,Rm),Rn */
	T = r4 == r3;  /* 0C0AF758 cmp/eq Rm,Rn */
	IF(0x0C0AF75Au); r0 = T;  /* 0C0AF75A movt Rn */
	r15 = r14;  /* 0C0AF75C mov Rm,Rn */
	IF(0x0C0AF75Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C0AF75E rts */
}

void blk_f_0C0AF770(sh3_t *c)
{
	LOCALS;
L_0C0AF770: BLKS(0x0C0AF770u);
	r6 = 0xB4u; UPD(0x0C0AF772u, 1);  /* 0C0AF770 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r4;  /* 0C0AF772 exts.w Rm,Rn */
	IF(0x0C0AF774u); MACL = r7 * r6;  /* 0C0AF774 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0AF778u, 4);  /* 0C0AF776 mov.l @(disp,pc),Rn */
	IF(0x0C0AF778u); r5 = MACL;  /* 0C0AF778 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C0AF77Cu, 2);  /* 0C0AF77A mov.w @(disp,pc),Rn */
	r5 += r2;  /* 0C0AF77C add Rm,Rn */
	r5 += r0;  /* 0C0AF77E add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF782u, 3);  /* 0C0AF780 mov.l Rm,@-Rn */
	r5 += 0x2u;  /* 0C0AF782 add #imm,Rn */
	r0 = 0xC2B1A3Cu; UPD(0x0C0AF786u, 2);  /* 0C0AF784 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF786 mov Rm,Rn */
	r4 = R32(r0); UPD(0x0C0AF78Au, 2);  /* 0C0AF788 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r3 = v_; } UPD(0x0C0AF78Cu, 1);  /* 0C0AF78A mov.w @Rm+,Rn */
	W16(r5, r3); UPD(0x0C0AF78Eu, 1);  /* 0C0AF78C mov.w Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r1 = v_; } UPD(0x0C0AF790u, 1);  /* 0C0AF78E mov.w @Rm+,Rn */
	W32(r0, r4); UPD(0x0C0AF792u, 1);  /* 0C0AF790 mov.l Rm,@Rn */
	{ u32 v_ = r1; r5 -= 2; W16(r5, v_); } UPD(0x0C0AF794u, 1);  /* 0C0AF792 mov.w Rm,@-Rn */
	r0 = 0x1u;  /* 0C0AF794 mov #imm,Rn */
	r15 = r14;  /* 0C0AF796 mov Rm,Rn */
	IF(0x0C0AF798u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF798 rts */
}

void blk_f_0C0AF7B0(sh3_t *c)
{
	LOCALS;
L_0C0AF7B0: BLKS(0x0C0AF7B0u);
	r0 = 0xB4u; UPD(0x0C0AF7B2u, 1);  /* 0C0AF7B0 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0AF7B2 exts.w Rm,Rn */
	IF(0x0C0AF7B4u); MACL = r1 * r0;  /* 0C0AF7B4 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0AF7B8u, 4);  /* 0C0AF7B6 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0AF7B8 mov #imm,Rn */
	IF(0x0C0AF7BAu); r0 = MACL;  /* 0C0AF7BA sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF7BEu, 3);  /* 0C0AF7BC mov.l Rm,@-Rn */
	IF(0x0C0AF7BEu); W32(r0 + r3, r2); UPD(0x0C0AF7C0u, 1);  /* 0C0AF7BE mov.l Rm,@(r0,Rn) */
	r14 = r15;  /* 0C0AF7C0 mov Rm,Rn */
	r0 = 0x0u;  /* 0C0AF7C2 mov #imm,Rn */
	r15 = r14;  /* 0C0AF7C4 mov Rm,Rn */
	IF(0x0C0AF7C6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C0AF7C6 rts */
}

void blk_f_0C0AF7D0(sh3_t *c)
{
	LOCALS;
L_0C0AF7D0: BLKS(0x0C0AF7D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF7D2u, 1);  /* 0C0AF7D0 mov.l Rm,@-Rn */
	r0 = 0xC3C4165u; UPD(0x0C0AF7D4u, 1);  /* 0C0AF7D2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF7D4 mov Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AF7D8u, 2);  /* 0C0AF7D6 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C0AF7D8 add #imm,Rn */
	W8(r0, r2); UPD(0x0C0AF7DCu, 2);  /* 0C0AF7DA mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF7DC mov #imm,Rn */
	r15 = r14;  /* 0C0AF7DE mov Rm,Rn */
	IF(0x0C0AF7E0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF7E0 rts */
}

void blk_f_0C0AF7F0(sh3_t *c)
{
	LOCALS;
L_0C0AF7F0: BLKS(0x0C0AF7F0u);
	r0 = 0xB4u; UPD(0x0C0AF7F2u, 1);  /* 0C0AF7F0 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C0AF7F2 exts.w Rm,Rn */
	IF(0x0C0AF7F4u); MACL = r5 * r0;  /* 0C0AF7F4 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0AF7F8u, 4);  /* 0C0AF7F6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF7FAu, 1);  /* 0C0AF7F8 mov.l Rm,@-Rn */
	IF(0x0C0AF7FAu); r0 = MACL;  /* 0C0AF7FA sts macl,Rn */
	r0 += r2;  /* 0C0AF7FC add Rm,Rn */
	r3 = R32(r0); UPD(0x0C0AF800u, 3);  /* 0C0AF7FE mov.l @Rm,Rn */
	r14 = r15;  /* 0C0AF800 mov Rm,Rn */
	r1 = 0x100u; UPD(0x0C0AF804u, 2);  /* 0C0AF802 mov.w @(disp,pc),Rn */
	r3 |= r1;  /* 0C0AF804 or Rm,Rn */
	W32(r0, r3); UPD(0x0C0AF808u, 2);  /* 0C0AF806 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF808 mov #imm,Rn */
	r15 = r14;  /* 0C0AF80A mov Rm,Rn */
	IF(0x0C0AF80Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF80C rts */
}

void blk_f_0C0AF820(sh3_t *c)
{
	LOCALS;
L_0C0AF820: BLKS(0x0C0AF820u);
	r0 = 0xB4u; UPD(0x0C0AF822u, 1);  /* 0C0AF820 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C0AF822 exts.w Rm,Rn */
	IF(0x0C0AF824u); MACL = r5 * r0;  /* 0C0AF824 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0AF828u, 4);  /* 0C0AF826 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF82Au, 1);  /* 0C0AF828 mov.l Rm,@-Rn */
	IF(0x0C0AF82Au); r0 = MACL;  /* 0C0AF82A sts macl,Rn */
	r0 += r2;  /* 0C0AF82C add Rm,Rn */
	r3 = R32(r0); UPD(0x0C0AF830u, 3);  /* 0C0AF82E mov.l @Rm,Rn */
	r14 = r15;  /* 0C0AF830 mov Rm,Rn */
	r1 = 0xFFFFFEFFu; UPD(0x0C0AF834u, 2);  /* 0C0AF832 mov.w @(disp,pc),Rn */
	r3 &= r1;  /* 0C0AF834 and Rm,Rn */
	W32(r0, r3); UPD(0x0C0AF838u, 2);  /* 0C0AF836 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF838 mov #imm,Rn */
	r15 = r14;  /* 0C0AF83A mov Rm,Rn */
	IF(0x0C0AF83Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF83C rts */
}

void blk_f_0C0AF850(sh3_t *c)
{
	LOCALS;
L_0C0AF850: BLKS(0x0C0AF850u);
	r2 = (u32)(s32)(s16)r4;  /* 0C0AF850 exts.w Rm,Rn */
	r0 = 0xB4u; UPD(0x0C0AF854u, 2);  /* 0C0AF852 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF856u, 1);  /* 0C0AF854 mov.l Rm,@-Rn */
	IF(0x0C0AF856u); MACL = r2 * r0;  /* 0C0AF856 mul.l Rm,Rn */
	r4 = 0xC2B1A3Cu; UPD(0x0C0AF85Au, 3);  /* 0C0AF858 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF85A mov Rm,Rn */
	r3 = R32(r4); UPD(0x0C0AF85Eu, 2);  /* 0C0AF85C mov.l @Rm,Rn */
	IF(0x0C0AF85Eu); r1 = MACL;  /* 0C0AF85E sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r5 = v_; } UPD(0x0C0AF862u, 2);  /* 0C0AF860 mov.w @Rm+,Rn */
	r0 = 0xC2865CCu; UPD(0x0C0AF864u, 1);  /* 0C0AF862 mov.l @(disp,pc),Rn */
	IF(0x0C0AF864u); W16(r0 + r1, r5); UPD(0x0C0AF866u, 1);  /* 0C0AF864 mov.w Rm,@(r0,Rn) */
	W32(r4, r3); UPD(0x0C0AF868u, 1);  /* 0C0AF866 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF868 mov #imm,Rn */
	r15 = r14;  /* 0C0AF86A mov Rm,Rn */
	IF(0x0C0AF86Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF86C rts */
}

void blk_f_0C0AF880(sh3_t *c)
{
	LOCALS;
L_0C0AF880: BLKS(0x0C0AF880u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF882u, 1);  /* 0C0AF880 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0AF882 exts.w Rm,Rn */
	r0 = 0xC072220u; UPD(0x0C0AF886u, 2);  /* 0C0AF884 mov.l @(disp,pc),Rn */
	IF(0x0C0AF886u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF888u, 1);  /* 0C0AF886 sts.l pr,@-Rn */
	IF(0x0C0AF888u); { u32 t_ = r0; PR = 0x0C0AF88Cu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C072220, 0x0C072220u, 0x0C0AF88Cu); }  /* 0C0AF888 jsr @Rn */
L_0C0AF88C: BLKS(0x0C0AF88Cu);
	r0 = (u32)(s32)(s16)r0;  /* 0C0AF88C exts.w Rm,Rn */
	r15 = r14;  /* 0C0AF88E mov Rm,Rn */
	IF(0x0C0AF890u); PR = R32(r15); r15 += 4; UPD(0x0C0AF892u, 3);  /* 0C0AF890 lds.l @Rn+,pr */
	IF(0x0C0AF892u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF892 rts */
}

void blk_f_0C0AF8A0(sh3_t *c)
{
	LOCALS;
L_0C0AF8A0: BLKS(0x0C0AF8A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF8A2u, 1);  /* 0C0AF8A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF8A4u, 1);  /* 0C0AF8A2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF8A6u, 1);  /* 0C0AF8A4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF8A8u, 1);  /* 0C0AF8A6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF8AAu, 1);  /* 0C0AF8A8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0AF8AA exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF8AEu, 2);  /* 0C0AF8AC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF8B0u, 1);  /* 0C0AF8AE mov.l Rm,@-Rn */
	r8 = 0xC2B1A3Cu; UPD(0x0C0AF8B2u, 1);  /* 0C0AF8B0 mov.l @(disp,pc),Rn */
	IF(0x0C0AF8B2u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF8B4u, 1);  /* 0C0AF8B2 sts.l pr,@-Rn */
	r13 = R32(r8); UPD(0x0C0AF8B6u, 1);  /* 0C0AF8B4 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AF8B6 add #imm,Rn */
	r9 = 0xC0C2360u; UPD(0x0C0AF8BAu, 2);  /* 0C0AF8B8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF8BA mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r4 = v_; } UPD(0x0C0AF8BEu, 2);  /* 0C0AF8BC mov.w @Rm+,Rn */
	W32(r14, r4); UPD(0x0C0AF8C0u, 1);  /* 0C0AF8BE mov.l Rm,@Rn */
	IF(0x0C0AF8C0u); { u32 t_ = r9; PR = 0x0C0AF8C4u; W32(r8, r13); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AF8C4u); }  /* 0C0AF8C0 jsr @Rn */
L_0C0AF8C4: BLKS(0x0C0AF8C4u);
	r2 = R32(r8); UPD(0x0C0AF8C6u, 1);  /* 0C0AF8C4 mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0AF8C6 exts.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r12 = v_; } UPD(0x0C0AF8CAu, 2);  /* 0C0AF8C8 mov.w @Rm+,Rn */
	IF(0x0C0AF8CAu); { u32 t_ = r9; PR = 0x0C0AF8CEu; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AF8CEu); }  /* 0C0AF8CA jsr @Rn */
L_0C0AF8CE: BLKS(0x0C0AF8CEu);
	IF(0x0C0AF8CEu); MACL = r12 * r0;  /* 0C0AF8CE mul.l Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0AF8D2u, 3);  /* 0C0AF8D0 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0AF8D2 mov Rm,Rn */
	IF(0x0C0AF8D4u); r12 = MACL;  /* 0C0AF8D4 sts macl,Rn */
	IF(0x0C0AF8D6u); MACL = r11 * r9;  /* 0C0AF8D6 mul.l Rm,Rn */
	r7 = R32(r8); UPD(0x0C0AF8DAu, 5);  /* 0C0AF8D8 mov.l @Rm,Rn */
	r12 += r12;  /* 0C0AF8DA add Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0AF8DEu, 2);  /* 0C0AF8DC mov.l @(disp,pc),Rn */
	IF(0x0C0AF8DEu); r9 = MACL;  /* 0C0AF8DE sts macl,Rn */
	r9 += r11;  /* 0C0AF8E0 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0AF8E4u, 3);  /* 0C0AF8E2 mov.w @Rm+,Rn */
	r5 = r12;  /* 0C0AF8E4 mov Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C0AF8E8u, 2);  /* 0C0AF8E6 mov.l @(disp,pc),Rn */
	IF(0x0C0AF8E8u); r0 <<= 16;  /* 0C0AF8E8 shll16 Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C0AF8ECu, 2);  /* 0C0AF8EA mov.l @(disp,Rm),Rn */
	W32(r8, r7); UPD(0x0C0AF8EEu, 1);  /* 0C0AF8EC mov.l Rm,@Rn */
	IF(0x0C0AF8EEu); { u32 t_ = r10; PR = 0x0C0AF8F2u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0AF8F2u); }  /* 0C0AF8EE jsr @Rn */
L_0C0AF8F2: BLKS(0x0C0AF8F2u);
	r6 = R32(r8); UPD(0x0C0AF8F4u, 1);  /* 0C0AF8F2 mov.l @Rm,Rn */
	r11 += r0;  /* 0C0AF8F4 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r1 = v_; } UPD(0x0C0AF8F8u, 2);  /* 0C0AF8F6 mov.w @Rm+,Rn */
	r4 = r13;  /* 0C0AF8F8 mov Rm,Rn */
	W32(r8, r6); UPD(0x0C0AF8FCu, 2);  /* 0C0AF8FA mov.l Rm,@Rn */
	IF(0x0C0AF8FCu); r1 <<= 16;  /* 0C0AF8FC shll16 Rn */
	r8 = 0xC069AF0u; UPD(0x0C0AF900u, 2);  /* 0C0AF8FE mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0AF900 mov Rm,Rn */
	r10 = R32(r9 + 0x28u); UPD(0x0C0AF904u, 2);  /* 0C0AF902 mov.l @(disp,Rm),Rn */
	IF(0x0C0AF904u); { u32 t_ = r8; PR = 0x0C0AF908u; r10 += r1; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0AF908u); }  /* 0C0AF904 jsr @Rn */
L_0C0AF908: BLKS(0x0C0AF908u);
	r10 += r0;  /* 0C0AF908 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AF90Cu, 2);  /* 0C0AF90A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AF90C add #imm,Rn */
	IF(0x0C0AF90Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AF910u, 2);  /* 0C0AF90E mov.b @(r0,Rm),Rn */
	r6 = r11;  /* 0C0AF910 mov Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0AF912 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0AF916u, 3);  /* 0C0AF914 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0AF916 mov Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0AF91Au, 2);  /* 0C0AF918 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C0AF91A mov Rm,Rn */
	IF(0x0C0AF91Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF91Eu, 2);  /* 0C0AF91C mov.b @(r0,Rm),Rn */
	r8 = 0xC0BD6F0u; UPD(0x0C0AF920u, 1);  /* 0C0AF91E mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0AF920 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AF924u, 2);  /* 0C0AF922 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14); UPD(0x0C0AF926u, 1);  /* 0C0AF924 mov.l @Rm,Rn */
	IF(0x0C0AF926u); { u32 t_ = r8; PR = 0x0C0AF92Au; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0AF92Au); }  /* 0C0AF926 jsr @Rn */
L_0C0AF92A: BLKS(0x0C0AF92Au);
	r0 = 0x1u;  /* 0C0AF92A mov #imm,Rn */
	r14 += 0x4u;  /* 0C0AF92C add #imm,Rn */
	r15 = r14;  /* 0C0AF92E mov Rm,Rn */
	IF(0x0C0AF930u); PR = R32(r15); r15 += 4; UPD(0x0C0AF932u, 4);  /* 0C0AF930 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF934u, 1);  /* 0C0AF932 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AF936u, 1);  /* 0C0AF934 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AF938u, 1);  /* 0C0AF936 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF93Au, 1);  /* 0C0AF938 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF93Cu, 1);  /* 0C0AF93A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF93Eu, 1);  /* 0C0AF93C mov.l @Rm+,Rn */
	IF(0x0C0AF93Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF93E rts */
}

void blk_f_0C0AF960(sh3_t *c)
{
	LOCALS;
L_0C0AF960: BLKS(0x0C0AF960u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF962u, 1);  /* 0C0AF960 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF964u, 1);  /* 0C0AF962 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF966u, 1);  /* 0C0AF964 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF968u, 1);  /* 0C0AF966 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF96Au, 1);  /* 0C0AF968 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0AF96A exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF96Eu, 2);  /* 0C0AF96C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF970u, 1);  /* 0C0AF96E mov.l Rm,@-Rn */
	r8 = 0xC2B1A3Cu; UPD(0x0C0AF972u, 1);  /* 0C0AF970 mov.l @(disp,pc),Rn */
	IF(0x0C0AF972u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF974u, 1);  /* 0C0AF972 sts.l pr,@-Rn */
	r13 = R32(r8); UPD(0x0C0AF976u, 1);  /* 0C0AF974 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AF976 add #imm,Rn */
	r9 = 0xC0C2360u; UPD(0x0C0AF97Au, 2);  /* 0C0AF978 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF97A mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r4 = v_; } UPD(0x0C0AF97Eu, 2);  /* 0C0AF97C mov.w @Rm+,Rn */
	W32(r14, r4); UPD(0x0C0AF980u, 1);  /* 0C0AF97E mov.l Rm,@Rn */
	IF(0x0C0AF980u); { u32 t_ = r9; PR = 0x0C0AF984u; W32(r8, r13); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AF984u); }  /* 0C0AF980 jsr @Rn */
L_0C0AF984: BLKS(0x0C0AF984u);
	r2 = R32(r8); UPD(0x0C0AF986u, 1);  /* 0C0AF984 mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0AF986 exts.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r12 = v_; } UPD(0x0C0AF98Au, 2);  /* 0C0AF988 mov.w @Rm+,Rn */
	IF(0x0C0AF98Au); { u32 t_ = r9; PR = 0x0C0AF98Eu; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AF98Eu); }  /* 0C0AF98A jsr @Rn */
L_0C0AF98E: BLKS(0x0C0AF98Eu);
	IF(0x0C0AF98Eu); MACL = r12 * r0;  /* 0C0AF98E mul.l Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0AF992u, 3);  /* 0C0AF990 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0AF992 mov Rm,Rn */
	IF(0x0C0AF994u); r12 = MACL;  /* 0C0AF994 sts macl,Rn */
	IF(0x0C0AF996u); MACL = r11 * r9;  /* 0C0AF996 mul.l Rm,Rn */
	r7 = R32(r8); UPD(0x0C0AF99Au, 5);  /* 0C0AF998 mov.l @Rm,Rn */
	r12 += r12;  /* 0C0AF99A add Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0AF99Eu, 2);  /* 0C0AF99C mov.l @(disp,pc),Rn */
	IF(0x0C0AF99Eu); r9 = MACL;  /* 0C0AF99E sts macl,Rn */
	r9 += r11;  /* 0C0AF9A0 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0AF9A4u, 3);  /* 0C0AF9A2 mov.w @Rm+,Rn */
	r5 = r12;  /* 0C0AF9A4 mov Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C0AF9A8u, 2);  /* 0C0AF9A6 mov.l @(disp,pc),Rn */
	IF(0x0C0AF9A8u); r0 <<= 16;  /* 0C0AF9A8 shll16 Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C0AF9ACu, 2);  /* 0C0AF9AA mov.l @(disp,Rm),Rn */
	W32(r8, r7); UPD(0x0C0AF9AEu, 1);  /* 0C0AF9AC mov.l Rm,@Rn */
	IF(0x0C0AF9AEu); { u32 t_ = r10; PR = 0x0C0AF9B2u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0AF9B2u); }  /* 0C0AF9AE jsr @Rn */
L_0C0AF9B2: BLKS(0x0C0AF9B2u);
	r6 = R32(r8); UPD(0x0C0AF9B4u, 1);  /* 0C0AF9B2 mov.l @Rm,Rn */
	r11 += r0;  /* 0C0AF9B4 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r1 = v_; } UPD(0x0C0AF9B8u, 2);  /* 0C0AF9B6 mov.w @Rm+,Rn */
	r4 = r13;  /* 0C0AF9B8 mov Rm,Rn */
	W32(r8, r6); UPD(0x0C0AF9BCu, 2);  /* 0C0AF9BA mov.l Rm,@Rn */
	IF(0x0C0AF9BCu); r1 <<= 16;  /* 0C0AF9BC shll16 Rn */
	r8 = 0xC069AF0u; UPD(0x0C0AF9C0u, 2);  /* 0C0AF9BE mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0AF9C0 mov Rm,Rn */
	r10 = R32(r9 + 0x28u); UPD(0x0C0AF9C4u, 2);  /* 0C0AF9C2 mov.l @(disp,Rm),Rn */
	IF(0x0C0AF9C4u); { u32 t_ = r8; PR = 0x0C0AF9C8u; r10 += r1; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0AF9C8u); }  /* 0C0AF9C4 jsr @Rn */
L_0C0AF9C8: BLKS(0x0C0AF9C8u);
	r10 += r0;  /* 0C0AF9C8 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AF9CCu, 2);  /* 0C0AF9CA mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AF9CC add #imm,Rn */
	IF(0x0C0AF9CEu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AF9D0u, 2);  /* 0C0AF9CE mov.b @(r0,Rm),Rn */
	r6 = r11;  /* 0C0AF9D0 mov Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0AF9D2 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0AF9D6u, 3);  /* 0C0AF9D4 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0AF9D6 mov Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0AF9DAu, 2);  /* 0C0AF9D8 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C0AF9DA mov Rm,Rn */
	IF(0x0C0AF9DCu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF9DEu, 2);  /* 0C0AF9DC mov.b @(r0,Rm),Rn */
	r8 = 0xC0BECB0u; UPD(0x0C0AF9E0u, 1);  /* 0C0AF9DE mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0AF9E0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AF9E4u, 2);  /* 0C0AF9E2 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14); UPD(0x0C0AF9E6u, 1);  /* 0C0AF9E4 mov.l @Rm,Rn */
	IF(0x0C0AF9E6u); { u32 t_ = r8; PR = 0x0C0AF9EAu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C0AF9EAu); }  /* 0C0AF9E6 jsr @Rn */
L_0C0AF9EA: BLKS(0x0C0AF9EAu);
	r0 = 0x1u;  /* 0C0AF9EA mov #imm,Rn */
	r14 += 0x4u;  /* 0C0AF9EC add #imm,Rn */
	r15 = r14;  /* 0C0AF9EE mov Rm,Rn */
	IF(0x0C0AF9F0u); PR = R32(r15); r15 += 4; UPD(0x0C0AF9F2u, 4);  /* 0C0AF9F0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF9F4u, 1);  /* 0C0AF9F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AF9F6u, 1);  /* 0C0AF9F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AF9F8u, 1);  /* 0C0AF9F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF9FAu, 1);  /* 0C0AF9F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF9FCu, 1);  /* 0C0AF9FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF9FEu, 1);  /* 0C0AF9FC mov.l @Rm+,Rn */
	IF(0x0C0AF9FEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF9FE rts */
}

void blk_f_0C0AFA20(sh3_t *c)
{
	LOCALS;
L_0C0AFA20: BLKS(0x0C0AFA20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA22u, 1);  /* 0C0AFA20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA24u, 1);  /* 0C0AFA22 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA26u, 1);  /* 0C0AFA24 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA28u, 1);  /* 0C0AFA26 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA2Au, 1);  /* 0C0AFA28 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0AFA2A exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA2Eu, 2);  /* 0C0AFA2C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA30u, 1);  /* 0C0AFA2E mov.l Rm,@-Rn */
	r8 = 0xC2B1A3Cu; UPD(0x0C0AFA32u, 1);  /* 0C0AFA30 mov.l @(disp,pc),Rn */
	IF(0x0C0AFA32u); r15 -= 4; W32(r15, PR); UPD(0x0C0AFA34u, 1);  /* 0C0AFA32 sts.l pr,@-Rn */
	r13 = R32(r8); UPD(0x0C0AFA36u, 1);  /* 0C0AFA34 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AFA36 add #imm,Rn */
	r9 = 0xC0C2360u; UPD(0x0C0AFA3Au, 2);  /* 0C0AFA38 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AFA3A mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r4 = v_; } UPD(0x0C0AFA3Eu, 2);  /* 0C0AFA3C mov.w @Rm+,Rn */
	W32(r14, r4); UPD(0x0C0AFA40u, 1);  /* 0C0AFA3E mov.l Rm,@Rn */
	IF(0x0C0AFA40u); { u32 t_ = r9; PR = 0x0C0AFA44u; W32(r8, r13); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AFA44u); }  /* 0C0AFA40 jsr @Rn */
L_0C0AFA44: BLKS(0x0C0AFA44u);
	r2 = R32(r8); UPD(0x0C0AFA46u, 1);  /* 0C0AFA44 mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0AFA46 exts.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r12 = v_; } UPD(0x0C0AFA4Au, 2);  /* 0C0AFA48 mov.w @Rm+,Rn */
	IF(0x0C0AFA4Au); { u32 t_ = r9; PR = 0x0C0AFA4Eu; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AFA4Eu); }  /* 0C0AFA4A jsr @Rn */
L_0C0AFA4E: BLKS(0x0C0AFA4Eu);
	IF(0x0C0AFA4Eu); MACL = r12 * r0;  /* 0C0AFA4E mul.l Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0AFA52u, 3);  /* 0C0AFA50 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0AFA52 mov Rm,Rn */
	IF(0x0C0AFA54u); r12 = MACL;  /* 0C0AFA54 sts macl,Rn */
	IF(0x0C0AFA56u); MACL = r11 * r9;  /* 0C0AFA56 mul.l Rm,Rn */
	r7 = R32(r8); UPD(0x0C0AFA5Au, 5);  /* 0C0AFA58 mov.l @Rm,Rn */
	r12 += r12;  /* 0C0AFA5A add Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0AFA5Eu, 2);  /* 0C0AFA5C mov.l @(disp,pc),Rn */
	IF(0x0C0AFA5Eu); r9 = MACL;  /* 0C0AFA5E sts macl,Rn */
	r9 += r11;  /* 0C0AFA60 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0AFA64u, 3);  /* 0C0AFA62 mov.w @Rm+,Rn */
	r5 = r12;  /* 0C0AFA64 mov Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C0AFA68u, 2);  /* 0C0AFA66 mov.l @(disp,pc),Rn */
	IF(0x0C0AFA68u); r0 <<= 16;  /* 0C0AFA68 shll16 Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C0AFA6Cu, 2);  /* 0C0AFA6A mov.l @(disp,Rm),Rn */
	W32(r8, r7); UPD(0x0C0AFA6Eu, 1);  /* 0C0AFA6C mov.l Rm,@Rn */
	IF(0x0C0AFA6Eu); { u32 t_ = r10; PR = 0x0C0AFA72u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0AFA72u); }  /* 0C0AFA6E jsr @Rn */
L_0C0AFA72: BLKS(0x0C0AFA72u);
	r6 = R32(r8); UPD(0x0C0AFA74u, 1);  /* 0C0AFA72 mov.l @Rm,Rn */
	r11 += r0;  /* 0C0AFA74 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r1 = v_; } UPD(0x0C0AFA78u, 2);  /* 0C0AFA76 mov.w @Rm+,Rn */
	r4 = r13;  /* 0C0AFA78 mov Rm,Rn */
	W32(r8, r6); UPD(0x0C0AFA7Cu, 2);  /* 0C0AFA7A mov.l Rm,@Rn */
	IF(0x0C0AFA7Cu); r1 <<= 16;  /* 0C0AFA7C shll16 Rn */
	r8 = 0xC069AF0u; UPD(0x0C0AFA80u, 2);  /* 0C0AFA7E mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0AFA80 mov Rm,Rn */
	r10 = R32(r9 + 0x28u); UPD(0x0C0AFA84u, 2);  /* 0C0AFA82 mov.l @(disp,Rm),Rn */
	IF(0x0C0AFA84u); { u32 t_ = r8; PR = 0x0C0AFA88u; r10 += r1; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0AFA88u); }  /* 0C0AFA84 jsr @Rn */
L_0C0AFA88: BLKS(0x0C0AFA88u);
	r10 += r0;  /* 0C0AFA88 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AFA8Cu, 2);  /* 0C0AFA8A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AFA8C add #imm,Rn */
	IF(0x0C0AFA8Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AFA90u, 2);  /* 0C0AFA8E mov.b @(r0,Rm),Rn */
	r6 = r11;  /* 0C0AFA90 mov Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0AFA92 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0AFA96u, 3);  /* 0C0AFA94 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0AFA96 mov Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0AFA9Au, 2);  /* 0C0AFA98 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C0AFA9A mov Rm,Rn */
	IF(0x0C0AFA9Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AFA9Eu, 2);  /* 0C0AFA9C mov.b @(r0,Rm),Rn */
	r8 = 0xC0BFE70u; UPD(0x0C0AFAA0u, 1);  /* 0C0AFA9E mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0AFAA0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AFAA4u, 2);  /* 0C0AFAA2 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14); UPD(0x0C0AFAA6u, 1);  /* 0C0AFAA4 mov.l @Rm,Rn */
	IF(0x0C0AFAA6u); { u32 t_ = r8; PR = 0x0C0AFAAAu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BFE70, 0x0C0BFE70u, 0x0C0AFAAAu); }  /* 0C0AFAA6 jsr @Rn */
L_0C0AFAAA: BLKS(0x0C0AFAAAu);
	r0 = 0x1u;  /* 0C0AFAAA mov #imm,Rn */
	r14 += 0x4u;  /* 0C0AFAAC add #imm,Rn */
	r15 = r14;  /* 0C0AFAAE mov Rm,Rn */
	IF(0x0C0AFAB0u); PR = R32(r15); r15 += 4; UPD(0x0C0AFAB2u, 4);  /* 0C0AFAB0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFAB4u, 1);  /* 0C0AFAB2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AFAB6u, 1);  /* 0C0AFAB4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AFAB8u, 1);  /* 0C0AFAB6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AFABAu, 1);  /* 0C0AFAB8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AFABCu, 1);  /* 0C0AFABA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AFABEu, 1);  /* 0C0AFABC mov.l @Rm+,Rn */
	IF(0x0C0AFABEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AFABE rts */
}

void blk_f_0C0AFAE0(sh3_t *c)
{
	LOCALS;
L_0C0AFAE0: BLKS(0x0C0AFAE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFAE2u, 1);  /* 0C0AFAE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFAE4u, 1);  /* 0C0AFAE2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFAE6u, 1);  /* 0C0AFAE4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFAE8u, 1);  /* 0C0AFAE6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFAEAu, 1);  /* 0C0AFAE8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0AFAEA exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFAEEu, 2);  /* 0C0AFAEC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFAF0u, 1);  /* 0C0AFAEE mov.l Rm,@-Rn */
	r8 = 0xC2B1A3Cu; UPD(0x0C0AFAF2u, 1);  /* 0C0AFAF0 mov.l @(disp,pc),Rn */
	IF(0x0C0AFAF2u); r15 -= 4; W32(r15, PR); UPD(0x0C0AFAF4u, 1);  /* 0C0AFAF2 sts.l pr,@-Rn */
	r13 = R32(r8); UPD(0x0C0AFAF6u, 1);  /* 0C0AFAF4 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AFAF6 add #imm,Rn */
	r9 = 0xC0C2360u; UPD(0x0C0AFAFAu, 2);  /* 0C0AFAF8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AFAFA mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r4 = v_; } UPD(0x0C0AFAFEu, 2);  /* 0C0AFAFC mov.w @Rm+,Rn */
	W32(r14, r4); UPD(0x0C0AFB00u, 1);  /* 0C0AFAFE mov.l Rm,@Rn */
	IF(0x0C0AFB00u); { u32 t_ = r9; PR = 0x0C0AFB04u; W32(r8, r13); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AFB04u); }  /* 0C0AFB00 jsr @Rn */
L_0C0AFB04: BLKS(0x0C0AFB04u);
	r2 = R32(r8); UPD(0x0C0AFB06u, 1);  /* 0C0AFB04 mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0AFB06 exts.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r12 = v_; } UPD(0x0C0AFB0Au, 2);  /* 0C0AFB08 mov.w @Rm+,Rn */
	IF(0x0C0AFB0Au); { u32 t_ = r9; PR = 0x0C0AFB0Eu; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AFB0Eu); }  /* 0C0AFB0A jsr @Rn */
L_0C0AFB0E: BLKS(0x0C0AFB0Eu);
	IF(0x0C0AFB0Eu); MACL = r12 * r0;  /* 0C0AFB0E mul.l Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0AFB12u, 3);  /* 0C0AFB10 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0AFB12 mov Rm,Rn */
	IF(0x0C0AFB14u); r12 = MACL;  /* 0C0AFB14 sts macl,Rn */
	IF(0x0C0AFB16u); MACL = r11 * r9;  /* 0C0AFB16 mul.l Rm,Rn */
	r7 = R32(r8); UPD(0x0C0AFB1Au, 5);  /* 0C0AFB18 mov.l @Rm,Rn */
	r12 += r12;  /* 0C0AFB1A add Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0AFB1Eu, 2);  /* 0C0AFB1C mov.l @(disp,pc),Rn */
	IF(0x0C0AFB1Eu); r9 = MACL;  /* 0C0AFB1E sts macl,Rn */
	r9 += r11;  /* 0C0AFB20 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0AFB24u, 3);  /* 0C0AFB22 mov.w @Rm+,Rn */
	r5 = r12;  /* 0C0AFB24 mov Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C0AFB28u, 2);  /* 0C0AFB26 mov.l @(disp,pc),Rn */
	IF(0x0C0AFB28u); r0 <<= 16;  /* 0C0AFB28 shll16 Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C0AFB2Cu, 2);  /* 0C0AFB2A mov.l @(disp,Rm),Rn */
	W32(r8, r7); UPD(0x0C0AFB2Eu, 1);  /* 0C0AFB2C mov.l Rm,@Rn */
	IF(0x0C0AFB2Eu); { u32 t_ = r10; PR = 0x0C0AFB32u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0AFB32u); }  /* 0C0AFB2E jsr @Rn */
L_0C0AFB32: BLKS(0x0C0AFB32u);
	r6 = R32(r8); UPD(0x0C0AFB34u, 1);  /* 0C0AFB32 mov.l @Rm,Rn */
	r11 += r0;  /* 0C0AFB34 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r1 = v_; } UPD(0x0C0AFB38u, 2);  /* 0C0AFB36 mov.w @Rm+,Rn */
	r4 = r13;  /* 0C0AFB38 mov Rm,Rn */
	W32(r8, r6); UPD(0x0C0AFB3Cu, 2);  /* 0C0AFB3A mov.l Rm,@Rn */
	IF(0x0C0AFB3Cu); r1 <<= 16;  /* 0C0AFB3C shll16 Rn */
	r8 = 0xC069AF0u; UPD(0x0C0AFB40u, 2);  /* 0C0AFB3E mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0AFB40 mov Rm,Rn */
	r10 = R32(r9 + 0x28u); UPD(0x0C0AFB44u, 2);  /* 0C0AFB42 mov.l @(disp,Rm),Rn */
	IF(0x0C0AFB44u); { u32 t_ = r8; PR = 0x0C0AFB48u; r10 += r1; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0AFB48u); }  /* 0C0AFB44 jsr @Rn */
L_0C0AFB48: BLKS(0x0C0AFB48u);
	r10 += r0;  /* 0C0AFB48 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AFB4Cu, 2);  /* 0C0AFB4A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AFB4C add #imm,Rn */
	IF(0x0C0AFB4Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AFB50u, 2);  /* 0C0AFB4E mov.b @(r0,Rm),Rn */
	r6 = r11;  /* 0C0AFB50 mov Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0AFB52 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0AFB56u, 3);  /* 0C0AFB54 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0AFB56 mov Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0AFB5Au, 2);  /* 0C0AFB58 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C0AFB5A mov Rm,Rn */
	IF(0x0C0AFB5Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AFB5Eu, 2);  /* 0C0AFB5C mov.b @(r0,Rm),Rn */
	r8 = 0xC0C0030u; UPD(0x0C0AFB60u, 1);  /* 0C0AFB5E mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0AFB60 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AFB64u, 2);  /* 0C0AFB62 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14); UPD(0x0C0AFB66u, 1);  /* 0C0AFB64 mov.l @Rm,Rn */
	IF(0x0C0AFB66u); { u32 t_ = r8; PR = 0x0C0AFB6Au; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0030, 0x0C0C0030u, 0x0C0AFB6Au); }  /* 0C0AFB66 jsr @Rn */
L_0C0AFB6A: BLKS(0x0C0AFB6Au);
	r0 = 0x1u;  /* 0C0AFB6A mov #imm,Rn */
	r14 += 0x4u;  /* 0C0AFB6C add #imm,Rn */
	r15 = r14;  /* 0C0AFB6E mov Rm,Rn */
	IF(0x0C0AFB70u); PR = R32(r15); r15 += 4; UPD(0x0C0AFB72u, 4);  /* 0C0AFB70 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFB74u, 1);  /* 0C0AFB72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AFB76u, 1);  /* 0C0AFB74 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AFB78u, 1);  /* 0C0AFB76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AFB7Au, 1);  /* 0C0AFB78 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AFB7Cu, 1);  /* 0C0AFB7A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AFB7Eu, 1);  /* 0C0AFB7C mov.l @Rm+,Rn */
	IF(0x0C0AFB7Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AFB7E rts */
}

void blk_f_0C0AFBA0(sh3_t *c)
{
	LOCALS;
L_0C0AFBA0: BLKS(0x0C0AFBA0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFBA2u, 1);  /* 0C0AFBA0 mov.l Rm,@-Rn */
	r2 = (u32)(s32)(s16)r4;  /* 0C0AFBA2 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFBA6u, 2);  /* 0C0AFBA4 mov.l Rm,@-Rn */
	r0 = 0xC2B1A3Cu; UPD(0x0C0AFBA8u, 1);  /* 0C0AFBA6 mov.l @(disp,pc),Rn */
	IF(0x0C0AFBA8u); r15 -= 4; W32(r15, PR); UPD(0x0C0AFBAAu, 1);  /* 0C0AFBA8 sts.l pr,@-Rn */
	r3 = 0xB4u; UPD(0x0C0AFBACu, 1);  /* 0C0AFBAA mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0AFBAC mov Rm,Rn */
	r7 = R32(r0); UPD(0x0C0AFBB0u, 2);  /* 0C0AFBAE mov.l @Rm,Rn */
	IF(0x0C0AFBB0u); MACL = r2 * r3;  /* 0C0AFBB0 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r8 = v_; } UPD(0x0C0AFBB4u, 3);  /* 0C0AFBB2 mov.w @Rm+,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AFBB4 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r6 = v_; } UPD(0x0C0AFBB8u, 2);  /* 0C0AFBB6 mov.w @Rm+,Rn */
	IF(0x0C0AFBB8u); r3 = MACL;  /* 0C0AFBB8 sts macl,Rn */
	r5 = 0xC286578u; UPD(0x0C0AFBBCu, 2);  /* 0C0AFBBA mov.l @(disp,pc),Rn */
	IF(0x0C0AFBBCu); r6 <<= 16;  /* 0C0AFBBC shll16 Rn */
	r3 += r5;  /* 0C0AFBBE add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r4 = v_; } UPD(0x0C0AFBC2u, 3);  /* 0C0AFBC0 mov.w @Rm+,Rn */
	r5 = R32(r3 + 0x24u); UPD(0x0C0AFBC4u, 1);  /* 0C0AFBC2 mov.l @(disp,Rm),Rn */
	IF(0x0C0AFBC4u); r4 <<= 16;  /* 0C0AFBC4 shll16 Rn */
	W32(r0, r7); UPD(0x0C0AFBC8u, 2);  /* 0C0AFBC6 mov.l Rm,@Rn */
	r5 += r6;  /* 0C0AFBC8 add Rm,Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C0AFBCCu, 2);  /* 0C0AFBCA mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C0AFBCEu, 1);  /* 0C0AFBCC mov.w @(disp,pc),Rn */
	r6 += r4;  /* 0C0AFBCE add Rm,Rn */
	IF(0x0C0AFBD0u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AFBD2u, 2);  /* 0C0AFBD0 mov.b @(r0,Rm),Rn */
	r4 = 0xA9u; UPD(0x0C0AFBD4u, 1);  /* 0C0AFBD2 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C0AFBD4 mov Rm,Rn */
	IF(0x0C0AFBD6u); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0AFBD8u, 2);  /* 0C0AFBD6 mov.b @(r0,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C0AFBD8 extu.b Rm,Rn */
	r4 = r8;  /* 0C0AFBDA mov Rm,Rn */
	r8 = 0xC07DF30u; UPD(0x0C0AFBDEu, 3);  /* 0C0AFBDC mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0AFBDE extu.b Rm,Rn */
	IF(0x0C0AFBE0u); { u32 t_ = r8; PR = 0x0C0AFBE4u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C0AFBE4u); }  /* 0C0AFBE0 jsr @Rn */
L_0C0AFBE4: BLKS(0x0C0AFBE4u);
	r0 = 0x1u;  /* 0C0AFBE4 mov #imm,Rn */
	r15 = r14;  /* 0C0AFBE6 mov Rm,Rn */
	IF(0x0C0AFBE8u); PR = R32(r15); r15 += 4; UPD(0x0C0AFBEAu, 3);  /* 0C0AFBE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFBECu, 1);  /* 0C0AFBEA mov.l @Rm+,Rn */
	IF(0x0C0AFBECu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AFBEC rts */
}

void blk_f_0C0AFC10(sh3_t *c)
{
	LOCALS;
L_0C0AFC10: BLKS(0x0C0AFC10u);
	r0 = 0xB4u; UPD(0x0C0AFC12u, 1);  /* 0C0AFC10 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0AFC12 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFC16u, 2);  /* 0C0AFC14 mov.l Rm,@-Rn */
	IF(0x0C0AFC16u); MACL = r4 * r0;  /* 0C0AFC16 mul.l Rm,Rn */
	r6 = 0xC2B1A3Cu; UPD(0x0C0AFC1Au, 3);  /* 0C0AFC18 mov.l @(disp,pc),Rn */
	r3 = 0x2Du;  /* 0C0AFC1A mov #imm,Rn */
	r7 = R32(r6); UPD(0x0C0AFC1Eu, 2);  /* 0C0AFC1C mov.l @Rm,Rn */
	IF(0x0C0AFC1Eu); r0 = MACL;  /* 0C0AFC1E sts macl,Rn */
	r5 = 0xC286578u; UPD(0x0C0AFC22u, 2);  /* 0C0AFC20 mov.l @(disp,pc),Rn */
	IF(0x0C0AFC22u); MACL = r4 * r3;  /* 0C0AFC22 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r2 = v_; } UPD(0x0C0AFC26u, 3);  /* 0C0AFC24 mov.w @Rm+,Rn */
	r0 += r5;  /* 0C0AFC26 add Rm,Rn */
	r0 += 0x56u;  /* 0C0AFC28 add #imm,Rn */
	W16(r0, r2); UPD(0x0C0AFC2Cu, 3);  /* 0C0AFC2A mov.w Rm,@Rn */
	IF(0x0C0AFC2Cu); r3 = MACL;  /* 0C0AFC2C sts macl,Rn */
	W32(r6, r7); UPD(0x0C0AFC30u, 2);  /* 0C0AFC2E mov.l Rm,@Rn */
	r0 += 0x2u;  /* 0C0AFC30 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AFC34u, 2);  /* 0C0AFC32 mov.b @Rm,Rn */
	r14 = r15;  /* 0C0AFC34 mov Rm,Rn */
	r6 = r2 & 0xFF;  /* 0C0AFC36 extu.b Rm,Rn */
	r3 += r6;  /* 0C0AFC38 add Rm,Rn */
	IF(0x0C0AFC3Au); r3 <<= 2;  /* 0C0AFC3A shll2 Rn */
	r3 += r5;  /* 0C0AFC3C add Rm,Rn */
	r2 += 0x1u;  /* 0C0AFC3E add #imm,Rn */
	r3 += 0x5Cu;  /* 0C0AFC40 add #imm,Rn */
	W8(r0, r2); UPD(0x0C0AFC44u, 8);  /* 0C0AFC42 mov.b Rm,@Rn */
	W32(r3, r7); UPD(0x0C0AFC46u, 1);  /* 0C0AFC44 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0AFC46 mov #imm,Rn */
	r15 = r14;  /* 0C0AFC48 mov Rm,Rn */
	IF(0x0C0AFC4Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AFC4A rts */
}

void blk_f_0C0AFC60(sh3_t *c)
{
	LOCALS;
L_0C0AFC60: BLKS(0x0C0AFC60u);
	r0 = 0xB4u; UPD(0x0C0AFC62u, 1);  /* 0C0AFC60 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0AFC62 exts.w Rm,Rn */
	IF(0x0C0AFC64u); MACL = r4 * r0;  /* 0C0AFC64 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0AFC68u, 4);  /* 0C0AFC66 mov.l @(disp,pc),Rn */
	IF(0x0C0AFC68u); r3 = MACL;  /* 0C0AFC68 sts macl,Rn */
	r3 += r7;  /* 0C0AFC6A add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFC6Eu, 3);  /* 0C0AFC6C mov.l Rm,@-Rn */
	r2 = r3;  /* 0C0AFC6E mov Rm,Rn */
	r2 += 0x56u;  /* 0C0AFC70 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AFC74u, 3);  /* 0C0AFC72 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0AFC74 mov Rm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0AFC76 add #imm,Rn */
	r0 = r5 & 0xFFFF;  /* 0C0AFC78 extu.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AFC7A tst Rm,Rn */
	{ u32 c_ = !T; W16(r2, r5); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0AFC90u, 7); goto L_0C0AFC90; } UPD(0x0C0AFC80u, 1); goto L_0C0AFC80; }  /* 0C0AFC7C bf/s */
L_0C0AFC80: BLKS(0x0C0AFC80u);
	r2 += 0x2u;  /* 0C0AFC80 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AFC84u, 2);  /* 0C0AFC82 mov.b @Rm,Rn */
	r0 = 0x1u;  /* 0C0AFC84 mov #imm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C0AFC86 add #imm,Rn */
	W8(r2, r3); UPD(0x0C0AFC8Au, 3);  /* 0C0AFC88 mov.b Rm,@Rn */
L_0C0AFC8A: BLKS(0x0C0AFC8Au);
	r15 = r14;  /* 0C0AFC8A mov Rm,Rn */
	IF(0x0C0AFC8Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AFC8C rts */
L_0C0AFC90: BLKS(0x0C0AFC90u);
	r5 = 0x2Du;  /* 0C0AFC90 mov #imm,Rn */
	r3 += 0x58u;  /* 0C0AFC92 add #imm,Rn */
	IF(0x0C0AFC94u); MACL = r4 * r5;  /* 0C0AFC94 mul.l Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AFC98u, 5);  /* 0C0AFC96 mov.b @Rm,Rn */
	r0 = 0x0u;  /* 0C0AFC98 mov #imm,Rn */
	r6 = r1 & 0xFF;  /* 0C0AFC9A extu.b Rm,Rn */
	IF(0x0C0AFC9Cu); r4 = MACL;  /* 0C0AFC9C sts macl,Rn */
	r4 += r6;  /* 0C0AFC9E add Rm,Rn */
	IF(0x0C0AFCA0u); r4 <<= 2;  /* 0C0AFCA0 shll2 Rn */
	r4 += r7;  /* 0C0AFCA2 add Rm,Rn */
	r4 += 0x58u;  /* 0C0AFCA4 add #imm,Rn */
	r2 = R32(r4); UPD(0x0C0AFCA8u, 8);  /* 0C0AFCA6 mov.l @Rm,Rn */
	r3 += 0xFFFFFFF4u;  /* 0C0AFCA8 add #imm,Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C0AFC8Au, 4); goto L_0C0AFC8A; }  /* 0C0AFCAA bra */
}

/* FUN_0c0afcc0 */
void blk_f_0C0AFCC0(sh3_t *c)
{
	LOCALS;
L_0C0AFCC0: BLKS(0x0C0AFCC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFCC2u, 1);  /* 0C0AFCC0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFCC4u, 1);  /* 0C0AFCC2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFCC6u, 1);  /* 0C0AFCC4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFCC8u, 1);  /* 0C0AFCC6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFCCAu, 1);  /* 0C0AFCC8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFCCCu, 1);  /* 0C0AFCCA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFCCEu, 1);  /* 0C0AFCCC mov.l Rm,@-Rn */
	r9 = 0xC2460ACu; UPD(0x0C0AFCD0u, 1);  /* 0C0AFCCE mov.l @(disp,pc),Rn */
	IF(0x0C0AFCD0u); r15 -= 4; W32(r15, PR); UPD(0x0C0AFCD2u, 1);  /* 0C0AFCD0 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C0AFCD4u, 1);  /* 0C0AFCD2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C0AFCD4 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C0AFCD8u, 2);  /* 0C0AFCD6 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0AFCD8 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0AFCDCu, 2);  /* 0C0AFCDA mov.l @(disp,pc),Rn */
	IF(0x0C0AFCDCu); { u32 t_ = r8; PR = 0x0C0AFCE0u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0AFCE0u); }  /* 0C0AFCDC jsr @Rn */
L_0C0AFCE0: BLKS(0x0C0AFCE0u);
	T = (r0 & r0) == 0;  /* 0C0AFCE0 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AFD00u, 4); goto L_0C0AFD00; } UPD(0x0C0AFCE6u, 1); goto L_0C0AFCE6; }  /* 0C0AFCE2 bf/s */
L_0C0AFCE6: BLKS(0x0C0AFCE6u);
	r14 += 0xCu;  /* 0C0AFCE6 add #imm,Rn */
	r15 = r14;  /* 0C0AFCE8 mov Rm,Rn */
	IF(0x0C0AFCEAu); PR = R32(r15); r15 += 4; UPD(0x0C0AFCECu, 3);  /* 0C0AFCEA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFCEEu, 1);  /* 0C0AFCEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AFCF0u, 1);  /* 0C0AFCEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AFCF2u, 1);  /* 0C0AFCF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AFCF4u, 1);  /* 0C0AFCF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AFCF6u, 1);  /* 0C0AFCF4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AFCF8u, 1);  /* 0C0AFCF6 mov.l @Rm+,Rn */
	IF(0x0C0AFCF8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AFCF8 rts */
L_0C0AFD00: BLKS(0x0C0AFD00u);
	r8 = 0xC071740u; UPD(0x0C0AFD02u, 1);  /* 0C0AFD00 mov.l @(disp,pc),Rn */
	IF(0x0C0AFD02u); { u32 t_ = r8; PR = 0x0C0AFD06u; r4 = 0x44u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0AFD06u); }  /* 0C0AFD02 jsr @Rn */
L_0C0AFD06: BLKS(0x0C0AFD06u);
	T = (r0 & r0) == 0;  /* 0C0AFD06 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AFCE6u, 4); goto L_0C0AFCE6; } goto L_0C0AFD0C; }  /* 0C0AFD08 bt/s */
L_0C0AFD0C: BLKS(0x0C0AFD0Cu);
	r5 = 0xC28EDFCu; UPD(0x0C0AFD0Eu, 2);  /* 0C0AFD0C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C0AFD10u, 1);  /* 0C0AFD0E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r10 = v_; } UPD(0x0C0AFD12u, 1);  /* 0C0AFD10 mov.w @Rm+,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C0AFD14u, 1);  /* 0C0AFD12 mov.w @Rm,Rn */
	IF(0x0C0AFD14u); MACL = r10 * r8;  /* 0C0AFD14 mul.l Rm,Rn */
	W32(r14 + 0x8u, r5); UPD(0x0C0AFD18u, 3);  /* 0C0AFD16 mov.l Rm,@(disp,Rn) */
	r9 = r0 & 0xFFFF;  /* 0C0AFD18 extu.w Rm,Rn */
	r6 = 0xC2B1811u; UPD(0x0C0AFD1Cu, 2);  /* 0C0AFD1A mov.l @(disp,pc),Rn */
	IF(0x0C0AFD1Cu); r8 = MACL;  /* 0C0AFD1C sts macl,Rn */
	r13 = 0xC2B03A2u; UPD(0x0C0AFD20u, 2);  /* 0C0AFD1E mov.l @(disp,pc),Rn */
	r4 = 0xC286578u; UPD(0x0C0AFD22u, 1);  /* 0C0AFD20 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C0AFD24u, 1);  /* 0C0AFD22 mov.b @Rm,Rn */
	r8 += r4;  /* 0C0AFD24 add Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r13); UPD(0x0C0AFD28u, 2);  /* 0C0AFD26 mov.w @Rm,Rn */
	r4 = r10;  /* 0C0AFD28 mov Rm,Rn */
	r0 = 0x8Au; UPD(0x0C0AFD2Cu, 2);  /* 0C0AFD2A mov.w @(disp,pc),Rn */
	r13 = 0x3u;  /* 0C0AFD2C mov #imm,Rn */
	IF(0x0C0AFD2Eu); W16(r0 + r8, r12); UPD(0x0C0AFD30u, 2);  /* 0C0AFD2E mov.w Rm,@(r0,Rn) */
	r13 += r14;  /* 0C0AFD30 add Rm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0AFD32 add #imm,Rn */
	IF(0x0C0AFD34u); W16(r0 + r8, r12); UPD(0x0C0AFD36u, 3);  /* 0C0AFD34 mov.w Rm,@(r0,Rn) */
	r11 = 0xC0A8A30u; UPD(0x0C0AFD38u, 1);  /* 0C0AFD36 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0AFD38 mov #imm,Rn */
	r2 = 0xC0008014u; UPD(0x0C0AFD3Cu, 2);  /* 0C0AFD3A mov.l @(disp,pc),Rn */
	W32(r14, r3); UPD(0x0C0AFD3Eu, 1);  /* 0C0AFD3C mov.l Rm,@Rn */
	W32(r8, r2); UPD(0x0C0AFD40u, 1);  /* 0C0AFD3E mov.l Rm,@Rn */
	W32(r8 + 0x4u, r9); UPD(0x0C0AFD42u, 1);  /* 0C0AFD40 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r12); UPD(0x0C0AFD44u, 1);  /* 0C0AFD42 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AFD44u); { u32 t_ = r11; PR = 0x0C0AFD48u; W32(r8 + 0x8u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AFD48u); }  /* 0C0AFD44 jsr @Rn */
L_0C0AFD48: BLKS(0x0C0AFD48u);
	r1 = R32(r14); UPD(0x0C0AFD4Au, 1);  /* 0C0AFD48 mov.l @Rm,Rn */
	r5 = 0x4Cu;  /* 0C0AFD4A mov #imm,Rn */
	IF(0x0C0AFD4Cu); MACL = r1 * r5;  /* 0C0AFD4C mul.l Rm,Rn */
	r7 = 0xC237C08u; UPD(0x0C0AFD50u, 4);  /* 0C0AFD4E mov.l @(disp,pc),Rn */
	r6 = 0xC286318u; UPD(0x0C0AFD52u, 1);  /* 0C0AFD50 mov.l @(disp,pc),Rn */
	IF(0x0C0AFD52u); r11 = MACL;  /* 0C0AFD52 sts macl,Rn */
	r11 += r6;  /* 0C0AFD54 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r7); UPD(0x0C0AFD58u, 3);  /* 0C0AFD56 mov.w @Rm,Rn */
	r3 = R32(r11 + 0x8u); UPD(0x0C0AFD5Au, 1);  /* 0C0AFD58 mov.l @(disp,Rm),Rn */
	IF(0x0C0AFD5Au); r4 <<= 16;  /* 0C0AFD5A shll16 Rn */
	r2 = 0xC3C43C6u; UPD(0x0C0AFD5Eu, 2);  /* 0C0AFD5C mov.l @(disp,pc),Rn */
	r4 -= r3;  /* 0C0AFD5E sub Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AFD62u, 2);  /* 0C0AFD60 mov.w @Rm,Rn */
	r11 += 0x42u;  /* 0C0AFD62 add #imm,Rn */
	r9 = 0xC0A9AE0u; UPD(0x0C0AFD66u, 2);  /* 0C0AFD64 mov.l @(disp,pc),Rn */
	IF(0x0C0AFD66u); r0 <<= 16;  /* 0C0AFD66 shll16 Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C0AFD6Au, 2);  /* 0C0AFD68 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C0AFD6Cu, 1);  /* 0C0AFD6A mov.l Rm,@(disp,Rn) */
	IF(0x0C0AFD6Cu); { u32 t_ = r9; PR = 0x0C0AFD70u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AFD70u); }  /* 0C0AFD6C jsr @Rn */
L_0C0AFD70: BLKS(0x0C0AFD70u);
	r9 = (u32)(s32)(s8)R8(r13); UPD(0x0C0AFD72u, 1);  /* 0C0AFD70 mov.b @Rm,Rn */
	r4 = r10;  /* 0C0AFD72 mov Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AFD76u, 2);  /* 0C0AFD74 mov.w @(disp,pc),Rn */
	r13 = r8;  /* 0C0AFD76 mov Rm,Rn */
	IF(0x0C0AFD78u); W8(r0 + r8, r9); UPD(0x0C0AFD7Au, 2);  /* 0C0AFD78 mov.b Rm,@(r0,Rn) */
	r9 = 0xACu; UPD(0x0C0AFD7Cu, 1);  /* 0C0AFD7A mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AFD7C add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C0AFD80u, 2);  /* 0C0AFD7E mov.b @Rm,Rn */
	r9 += r8;  /* 0C0AFD80 add Rm,Rn */
	r7 = r5;  /* 0C0AFD82 mov Rm,Rn */
	r7 += 0x1u;  /* 0C0AFD84 add #imm,Rn */
	r9 += 0x1u;  /* 0C0AFD86 add #imm,Rn */
	r10 = 0xC0A9D30u; UPD(0x0C0AFD8Au, 5);  /* 0C0AFD88 mov.l @(disp,pc),Rn */
	IF(0x0C0AFD8Au); W8(r0 + r8, r7); UPD(0x0C0AFD8Cu, 1);  /* 0C0AFD8A mov.b Rm,@(r0,Rn) */
	W8(r9, r5); UPD(0x0C0AFD8Eu, 1);  /* 0C0AFD8C mov.b Rm,@Rn */
	r6 = 0xC297460u; UPD(0x0C0AFD90u, 1);  /* 0C0AFD8E mov.l @(disp,pc),Rn */
	IF(0x0C0AFD90u); { u32 t_ = r10; PR = 0x0C0AFD94u; r5 = R32(r6); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C0AFD94u); }  /* 0C0AFD90 jsr @Rn */
L_0C0AFD94: BLKS(0x0C0AFD94u);
	r2 = 0xA0u; UPD(0x0C0AFD96u, 1);  /* 0C0AFD94 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C0AFD96 add Rm,Rn */
	r2 += 0x2u;  /* 0C0AFD98 add #imm,Rn */
	W8(r2, r12); UPD(0x0C0AFD9Cu, 3);  /* 0C0AFD9A mov.b Rm,@Rn */
	r1 = 0x8Cu; UPD(0x0C0AFD9Eu, 1);  /* 0C0AFD9C mov.w @(disp,pc),Rn */
	r4 = 0x94u; UPD(0x0C0AFDA0u, 1);  /* 0C0AFD9E mov.w @(disp,pc),Rn */
	r1 += r8;  /* 0C0AFDA0 add Rm,Rn */
	r0 = 0x90u; UPD(0x0C0AFDA4u, 2);  /* 0C0AFDA2 mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C0AFDA4 add Rm,Rn */
	{ u32 v_ = r12; r2 -= 1; W8(r2, v_); } UPD(0x0C0AFDA8u, 2);  /* 0C0AFDA6 mov.b Rm,@-Rn */
	r3 = 0x505050u; UPD(0x0C0AFDAAu, 1);  /* 0C0AFDA8 mov.l @(disp,pc),Rn */
	IF(0x0C0AFDAAu); W32(r0 + r8, r12); UPD(0x0C0AFDACu, 1);  /* 0C0AFDAA mov.l Rm,@(r0,Rn) */
	W32(r4, r12); UPD(0x0C0AFDAEu, 1);  /* 0C0AFDAC mov.l Rm,@Rn */
	W32(r1, r12); UPD(0x0C0AFDB0u, 1);  /* 0C0AFDAE mov.l Rm,@Rn */
	W32(r8 + 0x30u, r12); UPD(0x0C0AFDB2u, 1);  /* 0C0AFDB0 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r12); UPD(0x0C0AFDB4u, 1);  /* 0C0AFDB2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r3); UPD(0x0C0AFDB6u, 1);  /* 0C0AFDB4 mov.l Rm,@(disp,Rn) */
	r12 = 0x0u;  /* 0C0AFDB6 mov #imm,Rn */
	W32(r14 + 0x4u, r9); UPD(0x0C0AFDBAu, 2);  /* 0C0AFDB8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AFDBAu); ;  /* 0C0AFDBA nop */
	UPD(0x0C0AFDBCu, 1);
L_0C0AFDBC: BLKS(0x0C0AFDBCu);
	r6 = R32(r14 + 0x8u); UPD(0x0C0AFDBEu, 1);  /* 0C0AFDBC mov.l @(disp,Rm),Rn */
	r8 = 0x1Cu;  /* 0C0AFDBE mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r10 = v_; } UPD(0x0C0AFDC2u, 2);  /* 0C0AFDC0 mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C0AFDC4u, 1);  /* 0C0AFDC2 mov.w @(disp,pc),Rn */
	IF(0x0C0AFDC4u); MACL = r10 * r9;  /* 0C0AFDC4 mul.l Rm,Rn */
	r0 = 0xC1E428Cu; UPD(0x0C0AFDC8u, 3);  /* 0C0AFDC6 mov.l @(disp,pc),Rn */
	IF(0x0C0AFDC8u); r9 = MACL;  /* 0C0AFDC8 sts macl,Rn */
	IF(0x0C0AFDCAu); MACL = r12 * r8;  /* 0C0AFDCA mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0AFDCEu, 4);  /* 0C0AFDCC mov.l @(disp,pc),Rn */
	IF(0x0C0AFDCEu); r8 = MACL;  /* 0C0AFDCE sts macl,Rn */
	r8 += r0;  /* 0C0AFDD0 add Rm,Rn */
	r8 += 0x4u;  /* 0C0AFDD2 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r2 = v_; } UPD(0x0C0AFDD6u, 4);  /* 0C0AFDD4 mov.w @Rm+,Rn */
	r9 += r11;  /* 0C0AFDD6 add Rm,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C0AFDDAu, 2);  /* 0C0AFDD8 mov.l @(disp,pc),Rn */
	r2 += r2;  /* 0C0AFDDA add Rm,Rn */
	IF(0x0C0AFDDCu); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0AFDDEu, 2);  /* 0C0AFDDC mov.w @(r0,Rm),Rn */
	r11 = r9;  /* 0C0AFDDE mov Rm,Rn */
	r11 += 0x7Cu;  /* 0C0AFDE0 add #imm,Rn */
	W16(r11, r7); UPD(0x0C0AFDE4u, 3);  /* 0C0AFDE2 mov.w Rm,@Rn */
	r9 += 0x7Eu;  /* 0C0AFDE4 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C0AFDE8u, 2);  /* 0C0AFDE6 mov.w @Rm,Rn */
	r4 += r4;  /* 0C0AFDE8 add Rm,Rn */
	IF(0x0C0AFDEAu); r3 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C0AFDECu, 2);  /* 0C0AFDEA mov.w @(r0,Rm),Rn */
	r8 += 0xFFFFFFFAu;  /* 0C0AFDEC add #imm,Rn */
	W32(r14 + 0x8u, r6); UPD(0x0C0AFDF0u, 2);  /* 0C0AFDEE mov.l Rm,@(disp,Rn) */
	r4 = 0x0u;  /* 0C0AFDF0 mov #imm,Rn */
	W16(r9, r3); UPD(0x0C0AFDF4u, 2);  /* 0C0AFDF2 mov.w Rm,@Rn */
	r6 = 0xC2460ACu; UPD(0x0C0AFDF6u, 1);  /* 0C0AFDF4 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFF82u;  /* 0C0AFDF6 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0AFDFAu, 2);  /* 0C0AFDF8 mov.w @Rm,Rn */
	r0 = r2 & 0xFFFF;  /* 0C0AFDFA extu.w Rm,Rn */
	W32(r9 + 0x4u, r0); UPD(0x0C0AFDFEu, 2);  /* 0C0AFDFC mov.l Rm,@(disp,Rn) */
	r5 = R32(r8); UPD(0x0C0AFE00u, 1);  /* 0C0AFDFE mov.l @Rm,Rn */
	r1 = 0xC0000000u; UPD(0x0C0AFE02u, 1);  /* 0C0AFE00 mov.l @(disp,pc),Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0AFE04u, 1);  /* 0C0AFE02 mov.l @(disp,pc),Rn */
	r5 |= r1;  /* 0C0AFE04 or Rm,Rn */
	r7 = R32(r8 + 0x8u); UPD(0x0C0AFE08u, 2);  /* 0C0AFE06 mov.l @(disp,Rm),Rn */
	W32(r9 + 0xCu, r4); UPD(0x0C0AFE0Au, 1);  /* 0C0AFE08 mov.l Rm,@(disp,Rn) */
	W32(r9, r5); UPD(0x0C0AFE0Cu, 1);  /* 0C0AFE0A mov.l Rm,@Rn */
	r4 = r10;  /* 0C0AFE0C mov Rm,Rn */
	IF(0x0C0AFE0Eu); { u32 t_ = r0; PR = 0x0C0AFE12u; W32(r9 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AFE12u); }  /* 0C0AFE0E jsr @Rn */
L_0C0AFE12: BLKS(0x0C0AFE12u);
	r5 = 0x86u; UPD(0x0C0AFE14u, 1);  /* 0C0AFE12 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C0AFE14 mov Rm,Rn */
	r3 = 0x4000u; UPD(0x0C0AFE18u, 2);  /* 0C0AFE16 mov.w @(disp,pc),Rn */
	IF(0x0C0AFE18u); W16(r0 + r5, r3); UPD(0x0C0AFE1Au, 1);  /* 0C0AFE18 mov.w Rm,@(r0,Rn) */
	r0 = R32(r8 + 0xCu); UPD(0x0C0AFE1Cu, 1);  /* 0C0AFE1A mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x10u); UPD(0x0C0AFE1Eu, 1);  /* 0C0AFE1C mov.l @(disp,Rm),Rn */
	W32(r9 + 0x2Cu, r0); UPD(0x0C0AFE20u, 1);  /* 0C0AFE1E mov.l Rm,@(disp,Rn) */
	r8 += 0x14u;  /* 0C0AFE20 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C0AFE24u, 2);  /* 0C0AFE22 mov.w @Rm+,Rn */
	r6 = R32(r13 + 0x24u); UPD(0x0C0AFE26u, 1);  /* 0C0AFE24 mov.l @(disp,Rm),Rn */
	r2 = R32(r13 + 0x28u); UPD(0x0C0AFE28u, 1);  /* 0C0AFE26 mov.l @(disp,Rm),Rn */
	r0 = 0x88u; UPD(0x0C0AFE2Au, 1);  /* 0C0AFE28 mov.w @(disp,pc),Rn */
	W32(r9 + 0x24u, r6); UPD(0x0C0AFE2Cu, 1);  /* 0C0AFE2A mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r2); UPD(0x0C0AFE2Eu, 1);  /* 0C0AFE2C mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x30u, r7); UPD(0x0C0AFE30u, 1);  /* 0C0AFE2E mov.l Rm,@(disp,Rn) */
	IF(0x0C0AFE30u); W16(r0 + r9, r4); UPD(0x0C0AFE32u, 1);  /* 0C0AFE30 mov.w Rm,@(r0,Rn) */
	r5 = 0xA0u; UPD(0x0C0AFE34u, 1);  /* 0C0AFE32 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C0AFE34 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r3 = v_; } UPD(0x0C0AFE38u, 2);  /* 0C0AFE36 mov.b @Rm+,Rn */
	r5 += r9;  /* 0C0AFE38 add Rm,Rn */
	r5 += 0x1u;  /* 0C0AFE3A add #imm,Rn */
	W8(r5, r3); UPD(0x0C0AFE3Eu, 3);  /* 0C0AFE3C mov.b Rm,@Rn */
	r10 = 0xC0A9AE0u; UPD(0x0C0AFE40u, 1);  /* 0C0AFE3E mov.l @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C0AFE40 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r1 = v_; } UPD(0x0C0AFE44u, 2);  /* 0C0AFE42 mov.b @Rm+,Rn */
	IF(0x0C0AFE44u); { u32 t_ = r10; PR = 0x0C0AFE48u; W8(r5, r1); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AFE48u); }  /* 0C0AFE44 jsr @Rn */
L_0C0AFE48: BLKS(0x0C0AFE48u);
	r0 = 0xB0u; UPD(0x0C0AFE4Au, 1);  /* 0C0AFE48 mov.w @(disp,pc),Rn */
	r5 = r9;  /* 0C0AFE4A mov Rm,Rn */
	IF(0x0C0AFE4Cu); r6 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0AFE4Eu, 2);  /* 0C0AFE4C mov.b @(r0,Rm),Rn */
	r1 = 0x0u;  /* 0C0AFE4E mov #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r11); UPD(0x0C0AFE52u, 2);  /* 0C0AFE50 mov.w @Rm,Rn */
	IF(0x0C0AFE52u); W8(r0 + r9, r6); UPD(0x0C0AFE54u, 1);  /* 0C0AFE52 mov.b Rm,@(r0,Rn) */
	r11 = 0xB4u; UPD(0x0C0AFE56u, 1);  /* 0C0AFE54 mov.w @(disp,pc),Rn */
	r0 = r2 & 0xFFFF;  /* 0C0AFE56 extu.w Rm,Rn */
	IF(0x0C0AFE58u); MACL = r0 * r11;  /* 0C0AFE58 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0AFE5Cu, 4);  /* 0C0AFE5A mov.l @(disp,pc),Rn */
	r4 = 0xA8u; UPD(0x0C0AFE5Eu, 1);  /* 0C0AFE5C mov.w @(disp,pc),Rn */
	IF(0x0C0AFE5Eu); r10 = MACL;  /* 0C0AFE5E sts macl,Rn */
	r10 += r7;  /* 0C0AFE60 add Rm,Rn */
	r10 += r4;  /* 0C0AFE62 add Rm,Rn */
	r10 += 0x1u;  /* 0C0AFE64 add #imm,Rn */
	r0 = 0xACu; UPD(0x0C0AFE68u, 5);  /* 0C0AFE66 mov.w @(disp,pc),Rn */
	r5 += r4;  /* 0C0AFE68 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C0AFE6Cu, 2);  /* 0C0AFE6A mov.b @Rm,Rn */
	r0 += r9;  /* 0C0AFE6C add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C0AFE70u, 2);  /* 0C0AFE6E mov.b @Rm,Rn */
	r0 += 0x3u;  /* 0C0AFE70 add #imm,Rn */
	r5 += 0x1u;  /* 0C0AFE72 add #imm,Rn */
	r3 += r6;  /* 0C0AFE74 add Rm,Rn */
	W8(r0, r6); UPD(0x0C0AFE78u, 4);  /* 0C0AFE76 mov.b Rm,@Rn */
	r7 = r12;  /* 0C0AFE78 mov Rm,Rn */
	W8(r5, r3); UPD(0x0C0AFE7Cu, 2);  /* 0C0AFE7A mov.b Rm,@Rn */
	r0 += 0xFFFFFFFEu;  /* 0C0AFE7C add #imm,Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0AFE80u, 2);  /* 0C0AFE7E mov.l @(disp,Rm),Rn */
	r7 += 0x1u;  /* 0C0AFE80 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AFE84u, 2);  /* 0C0AFE82 mov.b @Rm,Rn */
	r12 = (u32)(s32)(s16)r7;  /* 0C0AFE84 exts.w Rm,Rn */
	W8(r0, r4); UPD(0x0C0AFE88u, 2);  /* 0C0AFE86 mov.b Rm,@Rn */
	r10 = 0x42u;  /* 0C0AFE88 mov #imm,Rn */
	r11 = R32(r13 + 0x38u); UPD(0x0C0AFE8Cu, 2);  /* 0C0AFE8A mov.l @(disp,Rm),Rn */
	T = (s32)r12 > (s32)r10;  /* 0C0AFE8C cmp/gt Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C0AFE90u, 2);  /* 0C0AFE8E mov.w @(disp,pc),Rn */
	W32(r9 + 0x38u, r11); UPD(0x0C0AFE92u, 1);  /* 0C0AFE90 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AFE92u); W32(r0 + r9, r1); UPD(0x0C0AFE94u, 1);  /* 0C0AFE92 mov.l Rm,@(r0,Rn) */
	r9 += 0x50u;  /* 0C0AFE94 add #imm,Rn */
	{ u32 c_ = !T; W32(r9, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0AFDBCu, 4); goto L_0C0AFDBC; } UPD(0x0C0AFE9Au, 1); goto L_0C0AFE9A; }  /* 0C0AFE96 bf/s */
L_0C0AFE9A: BLKS(0x0C0AFE9Au);
	r3 = 0xC3C4164u; UPD(0x0C0AFE9Cu, 1);  /* 0C0AFE9A mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0AFE9C mov #imm,Rn */
	r10 = 0xC3C4165u; UPD(0x0C0AFEA0u, 2);  /* 0C0AFE9E mov.l @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C0AFEA0 mov #imm,Rn */
	r13 = 0x340u; UPD(0x0C0AFEA4u, 2);  /* 0C0AFEA2 mov.w @(disp,pc),Rn */
	r12 = 0xC207574u; UPD(0x0C0AFEA6u, 1);  /* 0C0AFEA4 mov.l @(disp,pc),Rn */
	W8(r3, r5); UPD(0x0C0AFEA8u, 1);  /* 0C0AFEA6 mov.b Rm,@Rn */
	W8(r10, r5); UPD(0x0C0AFEAAu, 1);  /* 0C0AFEA8 mov.b Rm,@Rn */
	{ W32(r12, r13); /* slot mov.l Rm,@Rn */ UPD(0x0C0AFCE6u, 3); goto L_0C0AFCE6; }  /* 0C0AFEAA bra */
}

void blk_f_0C0AFF20(sh3_t *c)
{
	LOCALS;
L_0C0AFF20: BLKS(0x0C0AFF20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFF22u, 1);  /* 0C0AFF20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFF24u, 1);  /* 0C0AFF22 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFF26u, 1);  /* 0C0AFF24 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0AFF28u, 1);  /* 0C0AFF26 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0AFF28 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFF2Cu, 2);  /* 0C0AFF2A mov.l Rm,@-Rn */
	IF(0x0C0AFF2Cu); MACL = r10 * r3;  /* 0C0AFF2C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFF30u, 3);  /* 0C0AFF2E mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0AFF32u, 1);  /* 0C0AFF30 mov.l @(disp,pc),Rn */
	IF(0x0C0AFF32u); r2 = MACL;  /* 0C0AFF32 sts macl,Rn */
	IF(0x0C0AFF34u); r15 -= 4; W32(r15, PR); UPD(0x0C0AFF36u, 2);  /* 0C0AFF34 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0AFF36 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0AFF3Au, 2);  /* 0C0AFF38 mov.l @(disp,Rm),Rn */
	r0 = 0x4Eu;  /* 0C0AFF3A mov #imm,Rn */
	T = r2 > r0;  /* 0C0AFF3C cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AFF46u, 5); goto L_0C0AFF46; } goto L_0C0AFF42; }  /* 0C0AFF3E bf/s */
L_0C0AFF42: BLKS(0x0C0AFF42u);
	{ IF(0x0C0AFF44u); ; /* slot nop */ UPD(0x0C0B0570u, 4); goto L_0C0B0570; }  /* 0C0AFF42 bra */
L_0C0AFF46: BLKS(0x0C0AFF46u);
	r0 = 0xC0AFF58u;  /* 0C0AFF46 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0AFF48 add Rm,Rn */
	IF(0x0C0AFF4Au); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0AFF4Cu, 3);  /* 0C0AFF4A mov.w @(r0,Rm),Rn */
	IF(0x0C0AFF4Cu); { u32 tv_ = (r4 + 0x0C0AFF50u); u32 t_ = PHYS(tv_); IF(0x0C0AFF4Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B0000u: goto L_0C0B0000; case 0x0C0B0080u: goto L_0C0B0080; case 0x0C0B00C0u: goto L_0C0B00C0; case 0x0C0B0120u: goto L_0C0B0120; case 0x0C0B0140u: goto L_0C0B0140; case 0x0C0B0170u: goto L_0C0B0170; case 0x0C0B01E0u: goto L_0C0B01E0; case 0x0C0B0240u: goto L_0C0B0240; case 0x0C0B0290u: goto L_0C0B0290; case 0x0C0B0300u: goto L_0C0B0300; case 0x0C0B0330u: goto L_0C0B0330; case 0x0C0B03C0u: goto L_0C0B03C0; case 0x0C0B0400u: goto L_0C0B0400; case 0x0C0B0420u: goto L_0C0B0420; case 0x0C0B0450u: goto L_0C0B0450; case 0x0C0B04B0u: goto L_0C0B04B0; case 0x0C0B04E0u: goto L_0C0B04E0; case 0x0C0B0570u: goto L_0C0B0570; case 0x0C0B05B0u: goto L_0C0B05B0; case 0x0C0B05B6u: goto L_0C0B05B6; case 0x0C0B05E0u: goto L_0C0B05E0; case 0x0C0B0610u: goto L_0C0B0610; case 0x0C0B0640u: goto L_0C0B0640; case 0x0C0B0670u: goto L_0C0B0670; case 0x0C0B06A0u: goto L_0C0B06A0; default: JUMPD(tv_); } }  /* 0C0AFF4C braf Rn */
L_0C0B0000: BLKS(0x0C0B0000u);
	r11 = 0xC072A90u; UPD(0x0C0B0002u, 1);  /* 0C0B0000 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0B0002 mov #imm,Rn */
	r9 = 0xC0A9D90u; UPD(0x0C0B0006u, 2);  /* 0C0B0004 mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C0B0008u, 1);  /* 0C0B0006 mov.w @(disp,pc),Rn */
	IF(0x0C0B0008u); { u32 t_ = r11; PR = 0x0C0B000Cu; r5 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C072A90, 0x0C072A90u, 0x0C0B000Cu); }  /* 0C0B0008 jsr @Rn */
L_0C0B000C: BLKS(0x0C0B000Cu);
	r5 = 0xC1E49E0u; UPD(0x0C0B000Eu, 1);  /* 0C0B000C mov.l @(disp,pc),Rn */
	IF(0x0C0B000Eu); { u32 t_ = r9; PR = 0x0C0B0012u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D90, 0x0C0A9D90u, 0x0C0B0012u); }  /* 0C0B000E jsr @Rn */
L_0C0B0012: BLKS(0x0C0B0012u);
	IF(0x0C0B0012u); MACL = r10 * r8;  /* 0C0B0012 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B0016u, 3);  /* 0C0B0014 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0B0016 mov #imm,Rn */
	IF(0x0C0B0018u); r7 = MACL;  /* 0C0B0018 sts macl,Rn */
	r0 = 0x8Cu; UPD(0x0C0B001Cu, 3);  /* 0C0B001A mov.w @(disp,pc),Rn */
	r5 += r7;  /* 0C0B001C add Rm,Rn */
	IF(0x0C0B001Eu); W32(r0 + r5, r6); UPD(0x0C0B0020u, 2);  /* 0C0B001E mov.l Rm,@(r0,Rn) */
L_0C0B0020: BLKS(0x0C0B0020u);
	r4 = 0xB4u; UPD(0x0C0B0022u, 1);  /* 0C0B0020 mov.w @(disp,pc),Rn */
	IF(0x0C0B0022u); MACL = r10 * r4;  /* 0C0B0022 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B0026u, 3);  /* 0C0B0024 mov.l @(disp,pc),Rn */
	IF(0x0C0B0026u); r4 = MACL;  /* 0C0B0026 sts macl,Rn */
	r4 += r3;  /* 0C0B0028 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C0B002Cu, 3);  /* 0C0B002A mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0B002C tst Rm,Rn */
	if (!T) { UPD(0x0C0B0042u, 4); goto L_0C0B0042; }  /* 0C0B002E bf */
L_0C0B0030: BLKS(0x0C0B0030u);
	r4 += 0x40u;  /* 0C0B0030 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C0B0034u, 2);  /* 0C0B0032 mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C0B0036u, 1);  /* 0C0B0034 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C0B0036 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B0042u, 4); goto L_0C0B0042; }  /* 0C0B0038 bt */
L_0C0B003A: BLKS(0x0C0B003Au);
	r7 = 0xC175064u; UPD(0x0C0B003Cu, 1);  /* 0C0B003A mov.l @(disp,pc),Rn */
	r0 = R32(r7); UPD(0x0C0B003Eu, 1);  /* 0C0B003C mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B003E cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0B0060u, 4); goto L_0C0B0060; }  /* 0C0B0040 bt */
L_0C0B0042: BLKS(0x0C0B0042u);
	r15 = r14;  /* 0C0B0042 mov Rm,Rn */
	IF(0x0C0B0044u); PR = R32(r15); r15 += 4; UPD(0x0C0B0046u, 2);  /* 0C0B0044 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0048u, 1);  /* 0C0B0046 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B004Au, 1);  /* 0C0B0048 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B004Cu, 1);  /* 0C0B004A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B004Eu, 1);  /* 0C0B004C mov.l @Rm+,Rn */
	IF(0x0C0B004Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B004E rts */
L_0C0B0060: BLKS(0x0C0B0060u);
	r11 = 0x4u;  /* 0C0B0060 mov #imm,Rn */
	IF(0x0C0B0062u); ARG0(0x44BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0B0062 shld Rm,Rn */
	r9 = 0x40000u; UPD(0x0C0B0066u, 3);  /* 0C0B0064 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C0B0068u, 1);  /* 0C0B0066 mov.l @(disp,pc),Rn */
	r4 += r9;  /* 0C0B0068 add Rm,Rn */
	r15 = r14;  /* 0C0B006A mov Rm,Rn */
	IF(0x0C0B006Cu); PR = R32(r15); r15 += 4; UPD(0x0C0B006Eu, 3);  /* 0C0B006C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0070u, 1);  /* 0C0B006E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0072u, 1);  /* 0C0B0070 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0074u, 1);  /* 0C0B0072 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0076u, 1);  /* 0C0B0074 mov.l @Rm+,Rn */
	IF(0x0C0B0076u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C0B0076 jmp @Rn */
L_0C0B0080: BLKS(0x0C0B0080u);
	r8 = 0xC0A8B50u; UPD(0x0C0B0082u, 1);  /* 0C0B0080 mov.l @(disp,pc),Rn */
	IF(0x0C0B0082u); { u32 t_ = r8; PR = 0x0C0B0086u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B0086u); }  /* 0C0B0082 jsr @Rn */
L_0C0B0086: BLKS(0x0C0B0086u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B0086 exts.w Rm,Rn */
	IF(0x0C0B0088u); T = (s32)r4 >= 0;  /* 0C0B0088 cmp/pz Rn */
	if (!T) { UPD(0x0C0B00AAu, 5); goto L_0C0B00AA; }  /* 0C0B008A bf */
L_0C0B008C: BLKS(0x0C0B008Cu);
	r5 = 0xB4u; UPD(0x0C0B008Eu, 1);  /* 0C0B008C mov.w @(disp,pc),Rn */
	IF(0x0C0B008Eu); MACL = r4 * r5;  /* 0C0B008E mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B0092u, 3);  /* 0C0B0090 mov.l @(disp,pc),Rn */
	IF(0x0C0B0092u); r4 = MACL;  /* 0C0B0092 sts macl,Rn */
	r0 = 0xA7u; UPD(0x0C0B0096u, 2);  /* 0C0B0094 mov.w @(disp,pc),Rn */
	IF(0x0C0B0096u); MACL = r10 * r5;  /* 0C0B0096 mul.l Rm,Rn */
	r4 += r2;  /* 0C0B0098 add Rm,Rn */
	r4 += r0;  /* 0C0B009A add Rm,Rn */
	IF(0x0C0B009Cu); r0 = MACL;  /* 0C0B009C sts macl,Rn */
	r0 += r2;  /* 0C0B009E add Rm,Rn */
	r5 += 0xFFFFFFEDu;  /* 0C0B00A0 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C0B00A4u, 8);  /* 0C0B00A2 mov.b @Rm,Rn */
	IF(0x0C0B00A4u); r1 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0B00A6u, 1);  /* 0C0B00A4 mov.b @(r0,Rm),Rn */
	r3 |= r1;  /* 0C0B00A6 or Rm,Rn */
	W8(r4, r3); UPD(0x0C0B00AAu, 2);  /* 0C0B00A8 mov.b Rm,@Rn */
L_0C0B00AA: BLKS(0x0C0B00AAu);
	r9 = 0xC0AEE60u; UPD(0x0C0B00ACu, 1);  /* 0C0B00AA mov.l @(disp,pc),Rn */
	IF(0x0C0B00ACu); { u32 t_ = r9; PR = 0x0C0B00B0u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0AEE60, 0x0C0AEE60u, 0x0C0B00B0u); }  /* 0C0B00AC jsr @Rn */
L_0C0B00B0: BLKS(0x0C0B00B0u);
	{ IF(0x0C0B00B2u); ; /* slot nop */ UPD(0x0C0B0020u, 3); goto L_0C0B0020; }  /* 0C0B00B0 bra */
L_0C0B00C0: BLKS(0x0C0B00C0u);
	r11 = 0xC0A8B50u; UPD(0x0C0B00C2u, 1);  /* 0C0B00C0 mov.l @(disp,pc),Rn */
	IF(0x0C0B00C2u); { u32 t_ = r11; PR = 0x0C0B00C6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B00C6u); }  /* 0C0B00C2 jsr @Rn */
L_0C0B00C6: BLKS(0x0C0B00C6u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B00C6 exts.w Rm,Rn */
	IF(0x0C0B00C8u); T = (s32)r4 >= 0;  /* 0C0B00C8 cmp/pz Rn */
	if (!T) { UPD(0x0C0B00EAu, 5); goto L_0C0B00EA; }  /* 0C0B00CA bf */
L_0C0B00CC: BLKS(0x0C0B00CCu);
	r2 = 0xB4u; UPD(0x0C0B00CEu, 1);  /* 0C0B00CC mov.w @(disp,pc),Rn */
	IF(0x0C0B00CEu); MACL = r4 * r2;  /* 0C0B00CE mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B00D2u, 3);  /* 0C0B00D0 mov.l @(disp,pc),Rn */
	IF(0x0C0B00D2u); r3 = MACL;  /* 0C0B00D2 sts macl,Rn */
	r1 = 0xA5u; UPD(0x0C0B00D6u, 2);  /* 0C0B00D4 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C0B00D6 add Rm,Rn */
	UPD(0x0C0B00D8u, 1);
L_0C0B00D8: BLKS(0x0C0B00D8u);
	IF(0x0C0B00D8u); MACL = r10 * r2;  /* 0C0B00D8 mul.l Rm,Rn */
	r3 += r1;  /* 0C0B00DA add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C0B00DEu, 4);  /* 0C0B00DC mov.b @Rm,Rn */
	IF(0x0C0B00DEu); r0 = MACL;  /* 0C0B00DE sts macl,Rn */
	r0 += r7;  /* 0C0B00E0 add Rm,Rn */
	r2 += 0xFFFFFFEDu;  /* 0C0B00E2 add #imm,Rn */
	IF(0x0C0B00E4u); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0B00E6u, 4);  /* 0C0B00E4 mov.b @(r0,Rm),Rn */
	r6 |= r7;  /* 0C0B00E6 or Rm,Rn */
	W8(r3, r6); UPD(0x0C0B00EAu, 2);  /* 0C0B00E8 mov.b Rm,@Rn */
L_0C0B00EA: BLKS(0x0C0B00EAu);
	r9 = 0xB4u; UPD(0x0C0B00ECu, 1);  /* 0C0B00EA mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B00EC add #imm,Rn */
	IF(0x0C0B00EEu); MACL = r10 * r9;  /* 0C0B00EE mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B00F2u, 4);  /* 0C0B00F0 mov.l @(disp,pc),Rn */
	IF(0x0C0B00F2u); r8 = MACL;  /* 0C0B00F2 sts macl,Rn */
	r8 += r0;  /* 0C0B00F4 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B00F8u, 3);  /* 0C0B00F6 mov.w @(disp,pc),Rn */
	IF(0x0C0B00F8u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B00FAu, 1);  /* 0C0B00F8 mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C0B00FA extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0B00FEu, 2);  /* 0C0B00FC mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B00FE add #imm,Rn */
	IF(0x0C0B0100u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0102u, 2);  /* 0C0B0100 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0B0102 mov #imm,Rn */
	r4 = r3 & 0xFF;  /* 0C0B0104 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0B0108u, 3);  /* 0C0B0106 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B010Au, 1);  /* 0C0B0108 mov.l @Rm,Rn */
L_0C0B010A: BLKS(0x0C0B010Au);
	r6 = R32(r8 + 0x24u); UPD(0x0C0B010Cu, 1);  /* 0C0B010A mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0B010Eu, 1);  /* 0C0B010C mov.l @(disp,Rm),Rn */
	r0 = 0xC0BECB0u; UPD(0x0C0B0110u, 1);  /* 0C0B010E mov.l @(disp,pc),Rn */
L_0C0B0110: BLKS(0x0C0B0110u);
	IF(0x0C0B0110u); { u32 t_ = r0; PR = 0x0C0B0114u; IF(0x0C0B0112u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0B0114u); }  /* 0C0B0110 jsr @Rn */
L_0C0B0114: BLKS(0x0C0B0114u);
	r6 = 0x0u;  /* 0C0B0114 mov #imm,Rn */
	W32(r8, r6); UPD(0x0C0B0118u, 2);  /* 0C0B0116 mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B0020u, 3); goto L_0C0B0020; }  /* 0C0B0118 bra */
L_0C0B0120: BLKS(0x0C0B0120u);
	r8 = 0xC0A8B50u; UPD(0x0C0B0122u, 1);  /* 0C0B0120 mov.l @(disp,pc),Rn */
	IF(0x0C0B0122u); { u32 t_ = r8; PR = 0x0C0B0126u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B0126u); }  /* 0C0B0122 jsr @Rn */
L_0C0B0126: BLKS(0x0C0B0126u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B0126 exts.w Rm,Rn */
	IF(0x0C0B0128u); T = (s32)r4 >= 0;  /* 0C0B0128 cmp/pz Rn */
	if (!T) { UPD(0x0C0B00EAu, 5); goto L_0C0B00EA; }  /* 0C0B012A bf */
L_0C0B012C: BLKS(0x0C0B012Cu);
	r2 = 0xB4u; UPD(0x0C0B012Eu, 1);  /* 0C0B012C mov.w @(disp,pc),Rn */
	IF(0x0C0B012Eu); MACL = r4 * r2;  /* 0C0B012E mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B0132u, 3);  /* 0C0B0130 mov.l @(disp,pc),Rn */
	r1 = 0xA6u; UPD(0x0C0B0134u, 1);  /* 0C0B0132 mov.w @(disp,pc),Rn */
	IF(0x0C0B0134u); r3 = MACL;  /* 0C0B0134 sts macl,Rn */
	{ r3 += r7; /* slot add Rm,Rn */ UPD(0x0C0B00D8u, 4); goto L_0C0B00D8; }  /* 0C0B0136 bra */
L_0C0B0140: BLKS(0x0C0B0140u);
	r8 = 0xB4u; UPD(0x0C0B0142u, 1);  /* 0C0B0140 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0142 add #imm,Rn */
	IF(0x0C0B0144u); MACL = r10 * r8;  /* 0C0B0144 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B0148u, 4);  /* 0C0B0146 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C0B0148 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0B014Cu, 2);  /* 0C0B014A mov.w @(disp,pc),Rn */
	IF(0x0C0B014Cu); r8 = MACL;  /* 0C0B014C sts macl,Rn */
	r8 += r3;  /* 0C0B014E add Rm,Rn */
	IF(0x0C0B0150u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0152u, 3);  /* 0C0B0150 mov.b @(r0,Rm),Rn */
	r7 = r4 & 0xFF;  /* 0C0B0152 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0B0156u, 2);  /* 0C0B0154 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0156 add #imm,Rn */
	IF(0x0C0B0158u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B015Au, 2);  /* 0C0B0158 mov.b @(r0,Rm),Rn */
	r11 = r6 & 0xFF;  /* 0C0B015A extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C0B015Eu, 2);  /* 0C0B015C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B010Au, 3); goto L_0C0B010A; }  /* 0C0B015E bra */
L_0C0B0170: BLKS(0x0C0B0170u);
	r6 = 0xB4u; UPD(0x0C0B0172u, 1);  /* 0C0B0170 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0172 add #imm,Rn */
	IF(0x0C0B0174u); MACL = r10 * r6;  /* 0C0B0174 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B0178u, 4);  /* 0C0B0176 mov.l @(disp,pc),Rn */
	IF(0x0C0B0178u); r8 = MACL;  /* 0C0B0178 sts macl,Rn */
	r8 += r0;  /* 0C0B017A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B017Eu, 3);  /* 0C0B017C mov.w @(disp,pc),Rn */
	IF(0x0C0B017Eu); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0180u, 1);  /* 0C0B017E mov.b @(r0,Rm),Rn */
	r9 = r11 & 0xFF;  /* 0C0B0180 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C0B0184u, 2);  /* 0C0B0182 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0184 add #imm,Rn */
	IF(0x0C0B0186u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0188u, 2);  /* 0C0B0186 mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C0B0188 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0B018Cu, 2);  /* 0C0B018A mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B018Eu, 1);  /* 0C0B018C mov.l @Rm,Rn */
	r5 = 0x3u;  /* 0C0B018E mov #imm,Rn */
	UPD(0x0C0B0190u, 1);
L_0C0B0190: BLKS(0x0C0B0190u);
	r6 = R32(r8 + 0x24u); UPD(0x0C0B0192u, 1);  /* 0C0B0190 mov.l @(disp,Rm),Rn */
L_0C0B0192: BLKS(0x0C0B0192u);
	r0 = 0xC0BFE70u; UPD(0x0C0B0194u, 1);  /* 0C0B0192 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0B0110u, 3); goto L_0C0B0110; }  /* 0C0B0194 bra */
L_0C0B01E0: BLKS(0x0C0B01E0u);
	r8 = 0xC0A8B50u; UPD(0x0C0B01E2u, 1);  /* 0C0B01E0 mov.l @(disp,pc),Rn */
	IF(0x0C0B01E2u); { u32 t_ = r8; PR = 0x0C0B01E6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B01E6u); }  /* 0C0B01E2 jsr @Rn */
L_0C0B01E6: BLKS(0x0C0B01E6u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B01E6 exts.w Rm,Rn */
	IF(0x0C0B01E8u); T = (s32)r4 >= 0;  /* 0C0B01E8 cmp/pz Rn */
	if (!T) { UPD(0x0C0B01FEu, 5); goto L_0C0B01FE; }  /* 0C0B01EA bf */
L_0C0B01EC: BLKS(0x0C0B01ECu);
	r5 = 0xB4u; UPD(0x0C0B01EEu, 1);  /* 0C0B01EC mov.w @(disp,pc),Rn */
	IF(0x0C0B01EEu); MACL = r4 * r5;  /* 0C0B01EE mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B01F2u, 3);  /* 0C0B01F0 mov.l @(disp,pc),Rn */
	IF(0x0C0B01F2u); r7 = MACL;  /* 0C0B01F2 sts macl,Rn */
	r7 += r3;  /* 0C0B01F4 add Rm,Rn */
	r4 = R32(r7); UPD(0x0C0B01F8u, 3);  /* 0C0B01F6 mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C0B01FAu, 1);  /* 0C0B01F8 mov.w @(disp,pc),Rn */
	r4 |= r1;  /* 0C0B01FA or Rm,Rn */
	W32(r7, r4); UPD(0x0C0B01FEu, 2);  /* 0C0B01FC mov.l Rm,@Rn */
L_0C0B01FE: BLKS(0x0C0B01FEu);
	r8 = 0xB4u; UPD(0x0C0B0200u, 1);  /* 0C0B01FE mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0200 add #imm,Rn */
	IF(0x0C0B0202u); MACL = r10 * r8;  /* 0C0B0202 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B0206u, 4);  /* 0C0B0204 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C0B0206 mov #imm,Rn */
	IF(0x0C0B0208u); r8 = MACL;  /* 0C0B0208 sts macl,Rn */
	r8 += r0;  /* 0C0B020A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B020Eu, 4);  /* 0C0B020C mov.w @(disp,pc),Rn */
	IF(0x0C0B020Eu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0210u, 1);  /* 0C0B020E mov.b @(r0,Rm),Rn */
	r11 = r6 & 0xFF;  /* 0C0B0210 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C0B0214u, 2);  /* 0C0B0212 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0214 add #imm,Rn */
	IF(0x0C0B0216u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0218u, 2);  /* 0C0B0216 mov.b @(r0,Rm),Rn */
	r2 = r9 & 0xFF;  /* 0C0B0218 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0B021Cu, 2);  /* 0C0B021A mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B021Eu, 1);  /* 0C0B021C mov.l @Rm,Rn */
L_0C0B021E: BLKS(0x0C0B021Eu);
	r9 = 0xC0BD6F0u; UPD(0x0C0B0220u, 1);  /* 0C0B021E mov.l @(disp,pc),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0B0222u, 1);  /* 0C0B0220 mov.l @(disp,Rm),Rn */
	IF(0x0C0B0222u); { u32 t_ = r9; PR = 0x0C0B0226u; r6 = R32(r8 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0B0226u); }  /* 0C0B0222 jsr @Rn */
L_0C0B0226: BLKS(0x0C0B0226u);
	r7 = 0x0u;  /* 0C0B0226 mov #imm,Rn */
	W32(r8, r7); UPD(0x0C0B022Au, 2);  /* 0C0B0228 mov.l Rm,@Rn */
	r15 += 0x8u;  /* 0C0B022A add #imm,Rn */
	UPD(0x0C0B022Cu, 1);
L_0C0B022C: BLKS(0x0C0B022Cu);
	r3 = 0xC0C21F0u; UPD(0x0C0B022Eu, 1);  /* 0C0B022C mov.l @(disp,pc),Rn */
	IF(0x0C0B022Eu); { u32 t_ = r3; PR = 0x0C0B0232u; IF(0x0C0B0230u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C21F0, 0x0C0C21F0u, 0x0C0B0232u); }  /* 0C0B022E jsr @Rn */
L_0C0B0232: BLKS(0x0C0B0232u);
	r6 = 0xC2B07FCu; UPD(0x0C0B0234u, 1);  /* 0C0B0232 mov.l @(disp,pc),Rn */
	r4 = 0x10u;  /* 0C0B0234 mov #imm,Rn */
	{ W32(r6, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C0B0020u, 4); goto L_0C0B0020; }  /* 0C0B0236 bra */
L_0C0B0240: BLKS(0x0C0B0240u);
	r9 = 0xC0A8B50u; UPD(0x0C0B0242u, 1);  /* 0C0B0240 mov.l @(disp,pc),Rn */
	IF(0x0C0B0242u); { u32 t_ = r9; PR = 0x0C0B0246u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B0246u); }  /* 0C0B0242 jsr @Rn */
L_0C0B0246: BLKS(0x0C0B0246u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B0246 exts.w Rm,Rn */
	IF(0x0C0B0248u); T = (s32)r4 >= 0;  /* 0C0B0248 cmp/pz Rn */
	if (!T) { UPD(0x0C0B025Eu, 5); goto L_0C0B025E; }  /* 0C0B024A bf */
L_0C0B024C: BLKS(0x0C0B024Cu);
	r5 = 0xB4u; UPD(0x0C0B024Eu, 1);  /* 0C0B024C mov.w @(disp,pc),Rn */
	IF(0x0C0B024Eu); MACL = r4 * r5;  /* 0C0B024E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B0252u, 3);  /* 0C0B0250 mov.l @(disp,pc),Rn */
	IF(0x0C0B0252u); r7 = MACL;  /* 0C0B0252 sts macl,Rn */
	r7 += r3;  /* 0C0B0254 add Rm,Rn */
	r4 = R32(r7); UPD(0x0C0B0258u, 3);  /* 0C0B0256 mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C0B025Au, 1);  /* 0C0B0258 mov.w @(disp,pc),Rn */
	r4 |= r1;  /* 0C0B025A or Rm,Rn */
	W32(r7, r4); UPD(0x0C0B025Eu, 2);  /* 0C0B025C mov.l Rm,@Rn */
L_0C0B025E: BLKS(0x0C0B025Eu);
	r8 = 0xB4u; UPD(0x0C0B0260u, 1);  /* 0C0B025E mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0260 add #imm,Rn */
	IF(0x0C0B0262u); MACL = r10 * r8;  /* 0C0B0262 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B0266u, 4);  /* 0C0B0264 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C0B0266 mov #imm,Rn */
	IF(0x0C0B0268u); r8 = MACL;  /* 0C0B0268 sts macl,Rn */
	r8 += r0;  /* 0C0B026A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B026Eu, 4);  /* 0C0B026C mov.w @(disp,pc),Rn */
	IF(0x0C0B026Eu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0270u, 1);  /* 0C0B026E mov.b @(r0,Rm),Rn */
	r6 = r9 & 0xFF;  /* 0C0B0270 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0B0274u, 2);  /* 0C0B0272 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0274 add #imm,Rn */
	IF(0x0C0B0276u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0278u, 2);  /* 0C0B0276 mov.b @(r0,Rm),Rn */
	r2 = r11 & 0xFF;  /* 0C0B0278 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0B027Cu, 2);  /* 0C0B027A mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B027Eu, 1);  /* 0C0B027C mov.l @Rm,Rn */
L_0C0B027E: BLKS(0x0C0B027Eu);
	r6 = R32(r8 + 0x24u); UPD(0x0C0B0280u, 1);  /* 0C0B027E mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C0B0282u, 1);  /* 0C0B0280 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0B0110u, 3); goto L_0C0B0110; }  /* 0C0B0282 bra */
L_0C0B0290: BLKS(0x0C0B0290u);
	r8 = 0xC0A8CA0u; UPD(0x0C0B0292u, 1);  /* 0C0B0290 mov.l @(disp,pc),Rn */
	IF(0x0C0B0292u); { u32 t_ = r8; PR = 0x0C0B0296u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B0296u); }  /* 0C0B0292 jsr @Rn */
L_0C0B0296: BLKS(0x0C0B0296u);
	IF(0x0C0B0296u); T = (s32)r0 >= 0;  /* 0C0B0296 cmp/pz Rn */
	if (!T) { UPD(0x0C0B02DEu, 4); goto L_0C0B02DE; }  /* 0C0B0298 bf */
L_0C0B029A: BLKS(0x0C0B029Au);
	r15 += 0xFFFFFFF8u;  /* 0C0B029A add #imm,Rn */
	r8 = 0xB4u; UPD(0x0C0B029Eu, 2);  /* 0C0B029C mov.w @(disp,pc),Rn */
	IF(0x0C0B029Eu); MACL = r10 * r8;  /* 0C0B029E mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0B02A2u, 3);  /* 0C0B02A0 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0B02A2 mov #imm,Rn */
	IF(0x0C0B02A4u); r0 = MACL;  /* 0C0B02A4 sts macl,Rn */
	r0 += r1;  /* 0C0B02A6 add Rm,Rn */
	r0 += 0x7Eu;  /* 0C0B02A8 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r0); UPD(0x0C0B02ACu, 5);  /* 0C0B02AA mov.w @Rm,Rn */
	IF(0x0C0B02ACu); MACL = r11 * r8;  /* 0C0B02AC mul.l Rm,Rn */
	r7 = 0xA9u; UPD(0x0C0B02B0u, 3);  /* 0C0B02AE mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C0B02B0 add #imm,Rn */
	IF(0x0C0B02B2u); r5 = MACL;  /* 0C0B02B2 sts macl,Rn */
	r5 += r1;  /* 0C0B02B4 add Rm,Rn */
	r8 += 0xFFFFFFF2u;  /* 0C0B02B6 add #imm,Rn */
	r5 += r8;  /* 0C0B02B8 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C0B02BCu, 6);  /* 0C0B02BA mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0B02BC add #imm,Rn */
	W8(r5, r6); UPD(0x0C0B02C0u, 2);  /* 0C0B02BE mov.b Rm,@Rn */
	IF(0x0C0B02C0u); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0B02C2u, 1);  /* 0C0B02C0 mov.b @(r0,Rm),Rn */
	r2 = 0x20000u; UPD(0x0C0B02C4u, 1);  /* 0C0B02C2 mov.l @(disp,pc),Rn */
	r7 = r4 & 0xFF;  /* 0C0B02C4 extu.b Rm,Rn */
	r9 = 0xC07CD80u; UPD(0x0C0B02C8u, 2);  /* 0C0B02C6 mov.l @(disp,pc),Rn */
	r4 = 0xCu;  /* 0C0B02C8 mov #imm,Rn */
	W32(r15, r2); UPD(0x0C0B02CCu, 2);  /* 0C0B02CA mov.l Rm,@Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B02CEu, 1);  /* 0C0B02CC mov.l Rm,@(disp,Rn) */
	r11 = 0xC175064u; UPD(0x0C0B02D0u, 1);  /* 0C0B02CE mov.l @(disp,pc),Rn */
	r5 = R32(r0 + 0x24u); UPD(0x0C0B02D2u, 1);  /* 0C0B02D0 mov.l @(disp,Rm),Rn */
	IF(0x0C0B02D2u); { u32 t_ = r9; PR = 0x0C0B02D6u; r6 = R32(r0 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C0B02D6u); }  /* 0C0B02D2 jsr @Rn */
L_0C0B02D6: BLKS(0x0C0B02D6u);
	r0 = R32(r11); UPD(0x0C0B02D8u, 1);  /* 0C0B02D6 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B02D8 cmp/eq #imm,r0 */
	{ u32 c_ = T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B02F0u, 4); goto L_0C0B02F0; } UPD(0x0C0B02DEu, 1); goto L_0C0B02DE; }  /* 0C0B02DA bt/s */
L_0C0B02DE: BLKS(0x0C0B02DEu);
	r5 = 0xC1E4C14u; UPD(0x0C0B02E0u, 1);  /* 0C0B02DE mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0B02E0 mov Rm,Rn */
	UPD(0x0C0B02E2u, 1);
L_0C0B02E2: BLKS(0x0C0B02E2u);
	r9 = 0xC0A9D90u; UPD(0x0C0B02E4u, 1);  /* 0C0B02E2 mov.l @(disp,pc),Rn */
	IF(0x0C0B02E4u); { u32 t_ = r9; PR = 0x0C0B02E8u; IF(0x0C0B02E6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D90, 0x0C0A9D90u, 0x0C0B02E8u); }  /* 0C0B02E4 jsr @Rn */
L_0C0B02E8: BLKS(0x0C0B02E8u);
	{ IF(0x0C0B02EAu); ; /* slot nop */ UPD(0x0C0B0020u, 3); goto L_0C0B0020; }  /* 0C0B02E8 bra */
L_0C0B02F0: BLKS(0x0C0B02F0u);
	r0 = 0xC071C90u; UPD(0x0C0B02F2u, 1);  /* 0C0B02F0 mov.l @(disp,pc),Rn */
	r4 = 0x100000u; UPD(0x0C0B02F4u, 1);  /* 0C0B02F2 mov.l @(disp,pc),Rn */
	IF(0x0C0B02F4u); { u32 t_ = r0; PR = 0x0C0B02F8u; IF(0x0C0B02F6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C0B02F8u); }  /* 0C0B02F4 jsr @Rn */
L_0C0B02F8: BLKS(0x0C0B02F8u);
	{ IF(0x0C0B02FAu); ; /* slot nop */ UPD(0x0C0B02DEu, 3); goto L_0C0B02DE; }  /* 0C0B02F8 bra */
L_0C0B0300: BLKS(0x0C0B0300u);
	r6 = 0xB4u; UPD(0x0C0B0302u, 1);  /* 0C0B0300 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0302 add #imm,Rn */
	IF(0x0C0B0304u); MACL = r10 * r6;  /* 0C0B0304 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B0308u, 4);  /* 0C0B0306 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0B030Au, 1);  /* 0C0B0308 mov.w @(disp,pc),Rn */
	IF(0x0C0B030Au); r8 = MACL;  /* 0C0B030A sts macl,Rn */
	r8 += r5;  /* 0C0B030C add Rm,Rn */
	IF(0x0C0B030Eu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0310u, 3);  /* 0C0B030E mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0B0310 mov #imm,Rn */
	r4 = r7 & 0xFF;  /* 0C0B0312 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B0316u, 3);  /* 0C0B0314 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0316 add #imm,Rn */
	IF(0x0C0B0318u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B031Au, 2);  /* 0C0B0318 mov.b @(r0,Rm),Rn */
	r3 = r2 & 0xFF;  /* 0C0B031A extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B031Eu, 2);  /* 0C0B031C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B027Eu, 3); goto L_0C0B027E; }  /* 0C0B031E bra */
L_0C0B0330: BLKS(0x0C0B0330u);
	r8 = 0xC0A8CA0u; UPD(0x0C0B0332u, 1);  /* 0C0B0330 mov.l @(disp,pc),Rn */
	IF(0x0C0B0332u); { u32 t_ = r8; PR = 0x0C0B0336u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B0336u); }  /* 0C0B0332 jsr @Rn */
L_0C0B0336: BLKS(0x0C0B0336u);
	IF(0x0C0B0336u); T = (s32)r0 >= 0;  /* 0C0B0336 cmp/pz Rn */
	if (!T) { UPD(0x0C0B035Eu, 4); goto L_0C0B035E; }  /* 0C0B0338 bf */
L_0C0B033A: BLKS(0x0C0B033Au);
	r7 = 0xB4u; UPD(0x0C0B033Cu, 1);  /* 0C0B033A mov.w @(disp,pc),Rn */
	IF(0x0C0B033Cu); MACL = r10 * r7;  /* 0C0B033C mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B0340u, 3);  /* 0C0B033E mov.l @(disp,pc),Rn */
	IF(0x0C0B0340u); r0 = MACL;  /* 0C0B0340 sts macl,Rn */
	r0 += r5;  /* 0C0B0342 add Rm,Rn */
	r0 += 0x7Eu;  /* 0C0B0344 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C0B0348u, 4);  /* 0C0B0346 mov.w @Rm,Rn */
	IF(0x0C0B0348u); MACL = r2 * r7;  /* 0C0B0348 mul.l Rm,Rn */
	r3 = 0xA1u; UPD(0x0C0B034Cu, 3);  /* 0C0B034A mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C0B034C add #imm,Rn */
	IF(0x0C0B034Eu); r11 = MACL;  /* 0C0B034E sts macl,Rn */
	r11 += r5;  /* 0C0B0350 add Rm,Rn */
	r7 += 0xFFFFFFF1u;  /* 0C0B0352 add #imm,Rn */
	r11 += r7;  /* 0C0B0354 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B0358u, 6);  /* 0C0B0356 mov.b @Rm,Rn */
	IF(0x0C0B0358u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B035Au, 1);  /* 0C0B0358 mov.b @(r0,Rm),Rn */
	r9 |= r1;  /* 0C0B035A or Rm,Rn */
	W8(r11, r9); UPD(0x0C0B035Eu, 2);  /* 0C0B035C mov.b Rm,@Rn */
L_0C0B035E: BLKS(0x0C0B035Eu);
	r8 = 0xB4u; UPD(0x0C0B0360u, 1);  /* 0C0B035E mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0360 add #imm,Rn */
	IF(0x0C0B0362u); MACL = r10 * r8;  /* 0C0B0362 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B0366u, 4);  /* 0C0B0364 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0B0366 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0B036Au, 2);  /* 0C0B0368 mov.w @(disp,pc),Rn */
	IF(0x0C0B036Au); r8 = MACL;  /* 0C0B036A sts macl,Rn */
	r8 += r9;  /* 0C0B036C add Rm,Rn */
	IF(0x0C0B036Eu); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0370u, 3);  /* 0C0B036E mov.b @(r0,Rm),Rn */
	r6 = r11 & 0xFF;  /* 0C0B0370 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0B0374u, 2);  /* 0C0B0372 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0374 add #imm,Rn */
	IF(0x0C0B0376u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0378u, 2);  /* 0C0B0376 mov.b @(r0,Rm),Rn */
	r0 = r4 & 0xFF;  /* 0C0B0378 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0B037Cu, 2);  /* 0C0B037A mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B0190u, 3); goto L_0C0B0190; }  /* 0C0B037C bra */
L_0C0B03C0: BLKS(0x0C0B03C0u);
	r11 = 0xC0A8B50u; UPD(0x0C0B03C2u, 1);  /* 0C0B03C0 mov.l @(disp,pc),Rn */
	IF(0x0C0B03C2u); { u32 t_ = r11; PR = 0x0C0B03C6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B03C6u); }  /* 0C0B03C2 jsr @Rn */
L_0C0B03C6: BLKS(0x0C0B03C6u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B03C6 exts.w Rm,Rn */
	IF(0x0C0B03C8u); T = (s32)r4 >= 0;  /* 0C0B03C8 cmp/pz Rn */
	if (!T) { UPD(0x0C0B03DEu, 5); goto L_0C0B03DE; }  /* 0C0B03CA bf */
L_0C0B03CC: BLKS(0x0C0B03CCu);
	r2 = 0xB4u; UPD(0x0C0B03CEu, 1);  /* 0C0B03CC mov.w @(disp,pc),Rn */
	IF(0x0C0B03CEu); MACL = r4 * r2;  /* 0C0B03CE mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B03D2u, 3);  /* 0C0B03D0 mov.l @(disp,pc),Rn */
	IF(0x0C0B03D2u); r7 = MACL;  /* 0C0B03D2 sts macl,Rn */
	r7 += r5;  /* 0C0B03D4 add Rm,Rn */
	r3 = R32(r7); UPD(0x0C0B03D8u, 3);  /* 0C0B03D6 mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C0B03DAu, 1);  /* 0C0B03D8 mov.w @(disp,pc),Rn */
	r3 |= r1;  /* 0C0B03DA or Rm,Rn */
	W32(r7, r3); UPD(0x0C0B03DEu, 2);  /* 0C0B03DC mov.l Rm,@Rn */
L_0C0B03DE: BLKS(0x0C0B03DEu);
	r8 = 0xB4u; UPD(0x0C0B03E0u, 1);  /* 0C0B03DE mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B03E0 add #imm,Rn */
	IF(0x0C0B03E2u); MACL = r10 * r8;  /* 0C0B03E2 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0B03E6u, 4);  /* 0C0B03E4 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C0B03E6 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0B03EAu, 2);  /* 0C0B03E8 mov.w @(disp,pc),Rn */
	IF(0x0C0B03EAu); r8 = MACL;  /* 0C0B03EA sts macl,Rn */
	r8 += r11;  /* 0C0B03EC add Rm,Rn */
	IF(0x0C0B03EEu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B03F0u, 3);  /* 0C0B03EE mov.b @(r0,Rm),Rn */
	r6 = r9 & 0xFF;  /* 0C0B03F0 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0B03F4u, 2);  /* 0C0B03F2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B03F4 add #imm,Rn */
	IF(0x0C0B03F6u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B03F8u, 2);  /* 0C0B03F6 mov.b @(r0,Rm),Rn */
	r0 = r4 & 0xFF;  /* 0C0B03F8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0B03FCu, 2);  /* 0C0B03FA mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B021Eu, 3); goto L_0C0B021E; }  /* 0C0B03FC bra */
L_0C0B0400: BLKS(0x0C0B0400u);
	r8 = 0xC0A8B50u; UPD(0x0C0B0402u, 1);  /* 0C0B0400 mov.l @(disp,pc),Rn */
	IF(0x0C0B0402u); { u32 t_ = r8; PR = 0x0C0B0406u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B0406u); }  /* 0C0B0402 jsr @Rn */
L_0C0B0406: BLKS(0x0C0B0406u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B0406 exts.w Rm,Rn */
	IF(0x0C0B0408u); T = (s32)r4 >= 0;  /* 0C0B0408 cmp/pz Rn */
	if (!T) { UPD(0x0C0B0420u, 5); goto L_0C0B0420; }  /* 0C0B040A bf */
L_0C0B040C: BLKS(0x0C0B040Cu);
	r5 = 0xB4u; UPD(0x0C0B040Eu, 1);  /* 0C0B040C mov.w @(disp,pc),Rn */
	IF(0x0C0B040Eu); MACL = r4 * r5;  /* 0C0B040E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B0412u, 3);  /* 0C0B0410 mov.l @(disp,pc),Rn */
	IF(0x0C0B0412u); r6 = MACL;  /* 0C0B0412 sts macl,Rn */
	r6 += r3;  /* 0C0B0414 add Rm,Rn */
	r11 = R32(r6 + 0xCu); UPD(0x0C0B0418u, 3);  /* 0C0B0416 mov.l @(disp,Rm),Rn */
	r9 = 0xC0A8AE0u; UPD(0x0C0B041Au, 1);  /* 0C0B0418 mov.l @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C0B041A add #imm,Rn */
	IF(0x0C0B041Cu); { u32 t_ = r9; PR = 0x0C0B0420u; W32(r6 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B0420u); }  /* 0C0B041C jsr @Rn */
L_0C0B0420: BLKS(0x0C0B0420u);
	r8 = 0xB4u; UPD(0x0C0B0422u, 1);  /* 0C0B0420 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0422 add #imm,Rn */
	IF(0x0C0B0424u); MACL = r10 * r8;  /* 0C0B0424 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B0428u, 4);  /* 0C0B0426 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C0B0428 mov #imm,Rn */
	IF(0x0C0B042Au); r8 = MACL;  /* 0C0B042A sts macl,Rn */
	r8 += r0;  /* 0C0B042C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B0430u, 4);  /* 0C0B042E mov.w @(disp,pc),Rn */
	IF(0x0C0B0430u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0432u, 1);  /* 0C0B0430 mov.b @(r0,Rm),Rn */
	r2 = r11 & 0xFF;  /* 0C0B0432 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0B0436u, 2);  /* 0C0B0434 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0436 add #imm,Rn */
	IF(0x0C0B0438u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B043Au, 2);  /* 0C0B0438 mov.b @(r0,Rm),Rn */
	r7 = r9 & 0xFF;  /* 0C0B043A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0B043Eu, 2);  /* 0C0B043C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B010Au, 3); goto L_0C0B010A; }  /* 0C0B043E bra */
L_0C0B0450: BLKS(0x0C0B0450u);
	r8 = 0xC0A8B50u; UPD(0x0C0B0452u, 1);  /* 0C0B0450 mov.l @(disp,pc),Rn */
	IF(0x0C0B0452u); { u32 t_ = r8; PR = 0x0C0B0456u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B0456u); }  /* 0C0B0452 jsr @Rn */
L_0C0B0456: BLKS(0x0C0B0456u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B0456 exts.w Rm,Rn */
	IF(0x0C0B0458u); T = (s32)r4 >= 0;  /* 0C0B0458 cmp/pz Rn */
	if (!T) { UPD(0x0C0B0474u, 5); goto L_0C0B0474; }  /* 0C0B045A bf */
L_0C0B045C: BLKS(0x0C0B045Cu);
	r11 = 0xB4u; UPD(0x0C0B045Eu, 1);  /* 0C0B045C mov.w @(disp,pc),Rn */
	IF(0x0C0B045Eu); MACL = r4 * r11;  /* 0C0B045E mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B0462u, 3);  /* 0C0B0460 mov.l @(disp,pc),Rn */
	IF(0x0C0B0462u); r0 = MACL;  /* 0C0B0462 sts macl,Rn */
	r7 = 0xA5u; UPD(0x0C0B0466u, 2);  /* 0C0B0464 mov.w @(disp,pc),Rn */
	r0 += r6;  /* 0C0B0466 add Rm,Rn */
	r0 += r7;  /* 0C0B0468 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0B046Cu, 3);  /* 0C0B046A mov.b @Rm,Rn */
	r9 = 0xC0A8AE0u; UPD(0x0C0B046Eu, 1);  /* 0C0B046C mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0B046E add #imm,Rn */
	IF(0x0C0B0470u); { u32 t_ = r9; PR = 0x0C0B0474u; W8(r0, r2); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0B0474u); }  /* 0C0B0470 jsr @Rn */
L_0C0B0474: BLKS(0x0C0B0474u);
	r8 = 0xB4u; UPD(0x0C0B0476u, 1);  /* 0C0B0474 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0476 add #imm,Rn */
	IF(0x0C0B0478u); MACL = r10 * r8;  /* 0C0B0478 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B047Cu, 4);  /* 0C0B047A mov.l @(disp,pc),Rn */
	IF(0x0C0B047Cu); r8 = MACL;  /* 0C0B047C sts macl,Rn */
	r8 += r2;  /* 0C0B047E add Rm,Rn */
	r11 = R32(r8 + 0x8u); UPD(0x0C0B0482u, 3);  /* 0C0B0480 mov.l @(disp,Rm),Rn */
	r0 = 0xC1E4C34u; UPD(0x0C0B0484u, 1);  /* 0C0B0482 mov.l @(disp,pc),Rn */
	IF(0x0C0B0484u); r11 <<= 2;  /* 0C0B0484 shll2 Rn */
	r11 += r0;  /* 0C0B0486 add Rm,Rn */
	r0 = 0xFFFFFF30u; UPD(0x0C0B048Au, 3);  /* 0C0B0488 mov.w @(disp,pc),Rn */
	IF(0x0C0B048Au); r7 = R32(r0 + r11); UPD(0x0C0B048Cu, 1);  /* 0C0B048A mov.l @(r0,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C0B048Eu, 1);  /* 0C0B048C mov.w @(disp,pc),Rn */
	IF(0x0C0B048Eu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0490u, 1);  /* 0C0B048E mov.b @(r0,Rm),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0B0492u, 1);  /* 0C0B0490 mov.l @(disp,Rm),Rn */
	r5 = r9 & 0xFF;  /* 0C0B0492 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0B0496u, 2);  /* 0C0B0494 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0496 add #imm,Rn */
	IF(0x0C0B0498u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B049Au, 2);  /* 0C0B0498 mov.b @(r0,Rm),Rn */
	r6 += r7;  /* 0C0B049A add Rm,Rn */
	r4 = r3 & 0xFF;  /* 0C0B049C extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0B04A0u, 3);  /* 0C0B049E mov.l Rm,@(disp,Rn) */
	r5 = 0x4u;  /* 0C0B04A0 mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B0192u, 4); goto L_0C0B0192; }  /* 0C0B04A2 bra */
L_0C0B04B0: BLKS(0x0C0B04B0u);
	r9 = 0xC0A8B50u; UPD(0x0C0B04B2u, 1);  /* 0C0B04B0 mov.l @(disp,pc),Rn */
	IF(0x0C0B04B2u); { u32 t_ = r9; PR = 0x0C0B04B6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B04B6u); }  /* 0C0B04B2 jsr @Rn */
L_0C0B04B6: BLKS(0x0C0B04B6u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B04B6 exts.w Rm,Rn */
	IF(0x0C0B04B8u); T = (s32)r4 >= 0;  /* 0C0B04B8 cmp/pz Rn */
	if (!T) { UPD(0x0C0B0420u, 5); goto L_0C0B0420; }  /* 0C0B04BA bf */
L_0C0B04BC: BLKS(0x0C0B04BCu);
	r7 = 0xB4u; UPD(0x0C0B04BEu, 1);  /* 0C0B04BC mov.w @(disp,pc),Rn */
	IF(0x0C0B04BEu); MACL = r4 * r7;  /* 0C0B04BE mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B04C2u, 3);  /* 0C0B04C0 mov.l @(disp,pc),Rn */
	IF(0x0C0B04C2u); r6 = MACL;  /* 0C0B04C2 sts macl,Rn */
	r3 = 0xA5u; UPD(0x0C0B04C6u, 2);  /* 0C0B04C4 mov.w @(disp,pc),Rn */
	r6 += r5;  /* 0C0B04C6 add Rm,Rn */
	r6 += r3;  /* 0C0B04C8 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B04CCu, 3);  /* 0C0B04CA mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0B04CC add #imm,Rn */
	{ W8(r6, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C0B0420u, 4); goto L_0C0B0420; }  /* 0C0B04CE bra */
L_0C0B04E0: BLKS(0x0C0B04E0u);
	r11 = 0xC0A8B50u; UPD(0x0C0B04E2u, 1);  /* 0C0B04E0 mov.l @(disp,pc),Rn */
	IF(0x0C0B04E2u); { u32 t_ = r11; PR = 0x0C0B04E6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B04E6u); }  /* 0C0B04E2 jsr @Rn */
L_0C0B04E6: BLKS(0x0C0B04E6u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B04E6 exts.w Rm,Rn */
	IF(0x0C0B04E8u); T = (s32)r4 >= 0;  /* 0C0B04E8 cmp/pz Rn */
	if (!T) { UPD(0x0C0B0526u, 5); goto L_0C0B0526; }  /* 0C0B04EA bf */
L_0C0B04EC: BLKS(0x0C0B04ECu);
	r3 = 0xB4u; UPD(0x0C0B04EEu, 1);  /* 0C0B04EC mov.w @(disp,pc),Rn */
	IF(0x0C0B04EEu); MACL = r10 * r3;  /* 0C0B04EE mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B04F2u, 3);  /* 0C0B04F0 mov.l @(disp,pc),Rn */
	IF(0x0C0B04F2u); r0 = MACL;  /* 0C0B04F2 sts macl,Rn */
	r0 += r7;  /* 0C0B04F4 add Rm,Rn */
	r5 = R32(r0 + 0xCu); UPD(0x0C0B04F8u, 3);  /* 0C0B04F6 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C0B04F8 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C0B04FCu); MACL = r4 * r3; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C0B050Cu, 5); goto L_0C0B050C; } goto L_0C0B04FE; }  /* 0C0B04FA bt/s */
L_0C0B04FE: BLKS(0x0C0B04FEu);
	r6 = 0xA5u; UPD(0x0C0B0500u, 3);  /* 0C0B04FE mov.w @(disp,pc),Rn */
	IF(0x0C0B0500u); r4 = MACL;  /* 0C0B0500 sts macl,Rn */
	r4 += r7;  /* 0C0B0502 add Rm,Rn */
	r4 += r6;  /* 0C0B0504 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C0B0508u, 4);  /* 0C0B0506 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C0B0508 add #imm,Rn */
	W8(r4, r2); UPD(0x0C0B050Cu, 2);  /* 0C0B050A mov.b Rm,@Rn */
L_0C0B050C: BLKS(0x0C0B050Cu);
	r0 += 0x7Eu;  /* 0C0B050C add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r0); UPD(0x0C0B0510u, 2);  /* 0C0B050E mov.w @Rm,Rn */
	IF(0x0C0B0510u); MACL = r11 * r3;  /* 0C0B0510 mul.l Rm,Rn */
	r9 = 0xA7u; UPD(0x0C0B0514u, 3);  /* 0C0B0512 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C0B0514 add #imm,Rn */
	IF(0x0C0B0516u); r8 = MACL;  /* 0C0B0516 sts macl,Rn */
	r8 += r7;  /* 0C0B0518 add Rm,Rn */
	r7 = 0xA2u; UPD(0x0C0B051Cu, 4);  /* 0C0B051A mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C0B051C add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C0B0520u, 2);  /* 0C0B051E mov.b @Rm,Rn */
	IF(0x0C0B0520u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0B0522u, 1);  /* 0C0B0520 mov.b @(r0,Rm),Rn */
	r3 |= r1;  /* 0C0B0522 or Rm,Rn */
	W8(r8, r3); UPD(0x0C0B0526u, 2);  /* 0C0B0524 mov.b Rm,@Rn */
L_0C0B0526: BLKS(0x0C0B0526u);
	r0 = 0xB4u; UPD(0x0C0B0528u, 1);  /* 0C0B0526 mov.w @(disp,pc),Rn */
	IF(0x0C0B0528u); MACL = r10 * r0;  /* 0C0B0528 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0B052Cu, 3);  /* 0C0B052A mov.l @(disp,pc),Rn */
	IF(0x0C0B052Cu); r0 = MACL;  /* 0C0B052C sts macl,Rn */
	r0 += r4;  /* 0C0B052E add Rm,Rn */
	r8 = R32(r0 + 0x1Cu); UPD(0x0C0B0532u, 3);  /* 0C0B0530 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r5 = v_; } UPD(0x0C0B0534u, 1);  /* 0C0B0532 mov.l @Rm+,Rn */
	T = (r5 & r5) == 0;  /* 0C0B0534 tst Rm,Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B0570u, 4); goto L_0C0B0570; } goto L_0C0B053A; }  /* 0C0B0536 bt/s */
L_0C0B053A: BLKS(0x0C0B053Au);
	r11 = 0xA9u; UPD(0x0C0B053Cu, 2);  /* 0C0B053A mov.w @(disp,pc),Rn */
	r11 += r0;  /* 0C0B053C add Rm,Rn */
	IF(0x0C0B053Eu); ;  /* 0C0B053E nop */
	UPD(0x0C0B0540u, 2);
L_0C0B0540: BLKS(0x0C0B0540u);
	r8 += 0x4u;  /* 0C0B0540 add #imm,Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C0B0544u, 2);  /* 0C0B0542 mov.l @Rm+,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0544 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0B0548u, 2);  /* 0C0B0546 mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C0B0548 add Rm,Rn */
	{ u32 v_ = R32(r8); r8 += 4; r0 = v_; } UPD(0x0C0B054Cu, 2);  /* 0C0B054A mov.l @Rm+,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0B054Eu, 1);  /* 0C0B054C mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C0B054E add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B0552u, 2);  /* 0C0B0550 mov.w @(disp,pc),Rn */
	IF(0x0C0B0552u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B0554u, 1);  /* 0C0B0552 mov.b @(r0,Rm),Rn */
	r4 = r2 & 0xFF;  /* 0C0B0554 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B0558u, 2);  /* 0C0B0556 mov.l Rm,@Rn */
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C0B055Au, 1);  /* 0C0B0558 mov.b @Rm,Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C0B055Cu, 1);  /* 0C0B055A mov.l @(disp,pc),Rn */
	r3 = r5 & 0xFF;  /* 0C0B055C extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B0560u, 2);  /* 0C0B055E mov.l Rm,@(disp,Rn) */
	r5 = 0x4u;  /* 0C0B0560 mov #imm,Rn */
	IF(0x0C0B0562u); { u32 t_ = r0; PR = 0x0C0B0566u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0B0566u); }  /* 0C0B0562 jsr @Rn */
L_0C0B0566: BLKS(0x0C0B0566u);
	{ u32 v_ = R32(r8); r8 += 4; r2 = v_; } UPD(0x0C0B0568u, 1);  /* 0C0B0566 mov.l @Rm+,Rn */
	T = (r2 & r2) == 0;  /* 0C0B0568 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B0540u, 4); goto L_0C0B0540; } goto L_0C0B056E; }  /* 0C0B056A bf/s */
L_0C0B056E: BLKS(0x0C0B056Eu);
	IF(0x0C0B056Eu); ;  /* 0C0B056E nop */
	UPD(0x0C0B0570u, 2);
L_0C0B0570: BLKS(0x0C0B0570u);
	r9 = 0xB4u; UPD(0x0C0B0572u, 1);  /* 0C0B0570 mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C0B0572 mov #imm,Rn */
	IF(0x0C0B0574u); MACL = r10 * r9;  /* 0C0B0574 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B0578u, 4);  /* 0C0B0576 mov.l @(disp,pc),Rn */
	IF(0x0C0B0578u); r0 = MACL;  /* 0C0B0578 sts macl,Rn */
	{ IF(0x0C0B057Cu); W32(r0 + r6, r8); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0B0020u, 4); goto L_0C0B0020; }  /* 0C0B057A bra */
L_0C0B05B0: BLKS(0x0C0B05B0u);
	r11 = 0xC0A8B50u; UPD(0x0C0B05B2u, 1);  /* 0C0B05B0 mov.l @(disp,pc),Rn */
	IF(0x0C0B05B2u); { u32 t_ = r11; PR = 0x0C0B05B6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B05B6u); }  /* 0C0B05B2 jsr @Rn */
L_0C0B05B6: BLKS(0x0C0B05B6u);
	r7 = 0xB4u; UPD(0x0C0B05B8u, 1);  /* 0C0B05B6 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B05B8 add #imm,Rn */
	IF(0x0C0B05BAu); MACL = r10 * r7;  /* 0C0B05BA mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B05BEu, 4);  /* 0C0B05BC mov.l @(disp,pc),Rn */
	IF(0x0C0B05BEu); r8 = MACL;  /* 0C0B05BE sts macl,Rn */
	r8 += r0;  /* 0C0B05C0 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B05C4u, 3);  /* 0C0B05C2 mov.w @(disp,pc),Rn */
	IF(0x0C0B05C4u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B05C6u, 1);  /* 0C0B05C4 mov.b @(r0,Rm),Rn */
	r4 = r2 & 0xFF;  /* 0C0B05C6 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B05CAu, 2);  /* 0C0B05C8 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B05CA add #imm,Rn */
	IF(0x0C0B05CCu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B05CEu, 2);  /* 0C0B05CC mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C0B05CE extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B05D2u, 2);  /* 0C0B05D0 mov.l Rm,@(disp,Rn) */
	r5 = 0x2u;  /* 0C0B05D2 mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B010Au, 4); goto L_0C0B010A; }  /* 0C0B05D4 bra */
L_0C0B05E0: BLKS(0x0C0B05E0u);
	r11 = 0xC0A8B50u; UPD(0x0C0B05E2u, 1);  /* 0C0B05E0 mov.l @(disp,pc),Rn */
	IF(0x0C0B05E2u); { u32 t_ = r11; PR = 0x0C0B05E6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0B05E6u); }  /* 0C0B05E2 jsr @Rn */
L_0C0B05E6: BLKS(0x0C0B05E6u);
	r4 = (u32)(s32)(s16)r0;  /* 0C0B05E6 exts.w Rm,Rn */
	IF(0x0C0B05E8u); T = (s32)r4 >= 0;  /* 0C0B05E8 cmp/pz Rn */
	if (!T) { UPD(0x0C0B05FEu, 5); goto L_0C0B05FE; }  /* 0C0B05EA bf */
L_0C0B05EC: BLKS(0x0C0B05ECu);
	r9 = 0xB4u; UPD(0x0C0B05EEu, 1);  /* 0C0B05EC mov.w @(disp,pc),Rn */
	IF(0x0C0B05EEu); MACL = r4 * r9;  /* 0C0B05EE mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0B05F2u, 3);  /* 0C0B05F0 mov.l @(disp,pc),Rn */
	IF(0x0C0B05F2u); r0 = MACL;  /* 0C0B05F2 sts macl,Rn */
	r0 += r2;  /* 0C0B05F4 add Rm,Rn */
	r8 = R32(r0); UPD(0x0C0B05F8u, 3);  /* 0C0B05F6 mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C0B05FAu, 1);  /* 0C0B05F8 mov.w @(disp,pc),Rn */
	r8 |= r1;  /* 0C0B05FA or Rm,Rn */
	W32(r0, r8); UPD(0x0C0B05FEu, 2);  /* 0C0B05FC mov.l Rm,@Rn */
L_0C0B05FE: BLKS(0x0C0B05FEu);
	r11 = 0xC0AF0E0u; UPD(0x0C0B0600u, 1);  /* 0C0B05FE mov.l @(disp,pc),Rn */
	IF(0x0C0B0600u); { u32 t_ = r11; PR = 0x0C0B0604u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0AF0E0, 0x0C0AF0E0u, 0x0C0B0604u); }  /* 0C0B0600 jsr @Rn */
L_0C0B0604: BLKS(0x0C0B0604u);
	{ IF(0x0C0B0606u); ; /* slot nop */ UPD(0x0C0B022Cu, 3); goto L_0C0B022C; }  /* 0C0B0604 bra */
L_0C0B0610: BLKS(0x0C0B0610u);
	r8 = 0xB4u; UPD(0x0C0B0612u, 1);  /* 0C0B0610 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0612 add #imm,Rn */
	IF(0x0C0B0614u); MACL = r10 * r8;  /* 0C0B0614 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0B0618u, 4);  /* 0C0B0616 mov.l @(disp,pc),Rn */
	IF(0x0C0B0618u); r8 = MACL;  /* 0C0B0618 sts macl,Rn */
	r8 += r0;  /* 0C0B061A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B061Eu, 3);  /* 0C0B061C mov.w @(disp,pc),Rn */
	IF(0x0C0B061Eu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0620u, 1);  /* 0C0B061E mov.b @(r0,Rm),Rn */
	r2 = r9 & 0xFF;  /* 0C0B0620 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0B0624u, 2);  /* 0C0B0622 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0624 add #imm,Rn */
	IF(0x0C0B0626u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0628u, 2);  /* 0C0B0626 mov.b @(r0,Rm),Rn */
	r5 = r7 & 0xFF;  /* 0C0B0628 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0B062Cu, 2);  /* 0C0B062A mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0B062Eu, 1);  /* 0C0B062C mov.l @Rm,Rn */
	{ r5 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C0B027Eu, 3); goto L_0C0B027E; }  /* 0C0B062E bra */
L_0C0B0640: BLKS(0x0C0B0640u);
	r5 = 0xB4u; UPD(0x0C0B0642u, 1);  /* 0C0B0640 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0642 add #imm,Rn */
	IF(0x0C0B0644u); MACL = r10 * r5;  /* 0C0B0644 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B0648u, 4);  /* 0C0B0646 mov.l @(disp,pc),Rn */
	IF(0x0C0B0648u); r9 = MACL;  /* 0C0B0648 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0B064Cu, 2);  /* 0C0B064A mov.w @(disp,pc),Rn */
	r9 += r3;  /* 0C0B064C add Rm,Rn */
	IF(0x0C0B064Eu); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B0650u, 2);  /* 0C0B064E mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C0B0650 mov #imm,Rn */
	r6 = r4 & 0xFF;  /* 0C0B0652 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0B0656u, 3);  /* 0C0B0654 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0656 add #imm,Rn */
	IF(0x0C0B0658u); r11 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B065Au, 2);  /* 0C0B0658 mov.b @(r0,Rm),Rn */
	r8 = 0xC0BD6F0u; UPD(0x0C0B065Cu, 1);  /* 0C0B065A mov.l @(disp,pc),Rn */
	r0 = r11 & 0xFF;  /* 0C0B065C extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0B0660u, 2);  /* 0C0B065E mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C0B0662u, 1);  /* 0C0B0660 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0B0664u, 1);  /* 0C0B0662 mov.l @(disp,Rm),Rn */
	IF(0x0C0B0664u); { u32 t_ = r8; PR = 0x0C0B0668u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0B0668u); }  /* 0C0B0664 jsr @Rn */
L_0C0B0668: BLKS(0x0C0B0668u);
	r2 = 0x0u;  /* 0C0B0668 mov #imm,Rn */
	W32(r9, r2); UPD(0x0C0B066Cu, 2);  /* 0C0B066A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B0420u, 3); goto L_0C0B0420; }  /* 0C0B066C bra */
L_0C0B0670: BLKS(0x0C0B0670u);
	r7 = 0xB4u; UPD(0x0C0B0672u, 1);  /* 0C0B0670 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B0672 add #imm,Rn */
	IF(0x0C0B0674u); MACL = r10 * r7;  /* 0C0B0674 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0B0678u, 4);  /* 0C0B0676 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0B067Au, 1);  /* 0C0B0678 mov.w @(disp,pc),Rn */
	IF(0x0C0B067Au); r8 = MACL;  /* 0C0B067A sts macl,Rn */
	r8 += r5;  /* 0C0B067C add Rm,Rn */
	IF(0x0C0B067Eu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B0680u, 3);  /* 0C0B067E mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0B0680 mov #imm,Rn */
	r4 = r3 & 0xFF;  /* 0C0B0682 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0B0686u, 3);  /* 0C0B0684 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0B0686 add #imm,Rn */
	IF(0x0C0B0688u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0B068Au, 2);  /* 0C0B0688 mov.b @(r0,Rm),Rn */
	r11 = r6 & 0xFF;  /* 0C0B068A extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C0B068Eu, 2);  /* 0C0B068C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0B027Eu, 3); goto L_0C0B027E; }  /* 0C0B068E bra */
L_0C0B06A0: BLKS(0x0C0B06A0u);
	r11 = 0xC0A8CA0u; UPD(0x0C0B06A2u, 1);  /* 0C0B06A0 mov.l @(disp,pc),Rn */
	IF(0x0C0B06A2u); { u32 t_ = r11; PR = 0x0C0B06A6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0B06A6u); }  /* 0C0B06A2 jsr @Rn */
L_0C0B06A6: BLKS(0x0C0B06A6u);
	IF(0x0C0B06A6u); T = (s32)r0 >= 0;  /* 0C0B06A6 cmp/pz Rn */
	if (!T) { UPD(0x0C0B06F2u, 4); goto L_0C0B06F2; }  /* 0C0B06A8 bf */
L_0C0B06AA: BLKS(0x0C0B06AAu);
	r15 += 0xFFFFFFF8u;  /* 0C0B06AA add #imm,Rn */
	r7 = 0xB4u; UPD(0x0C0B06AEu, 2);  /* 0C0B06AC mov.w @(disp,pc),Rn */
	IF(0x0C0B06AEu); MACL = r10 * r7;  /* 0C0B06AE mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B06B2u, 3);  /* 0C0B06B0 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0B06B2 mov #imm,Rn */
	IF(0x0C0B06B4u); r0 = MACL;  /* 0C0B06B4 sts macl,Rn */
	r0 += r9;  /* 0C0B06B6 add Rm,Rn */
	r0 += 0x7Eu;  /* 0C0B06B8 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C0B06BCu, 5);  /* 0C0B06BA mov.w @Rm,Rn */
	IF(0x0C0B06BCu); MACL = r3 * r7;  /* 0C0B06BC mul.l Rm,Rn */
	r11 = 0xA1u; UPD(0x0C0B06C0u, 3);  /* 0C0B06BE mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C0B06C0 add #imm,Rn */
	IF(0x0C0B06C2u); r6 = MACL;  /* 0C0B06C2 sts macl,Rn */
	r6 += r9;  /* 0C0B06C4 add Rm,Rn */
	r7 += 0xFFFFFFF1u;  /* 0C0B06C6 add #imm,Rn */
	r6 += r7;  /* 0C0B06C8 add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B06CCu, 6);  /* 0C0B06CA mov.b @Rm,Rn */
	IF(0x0C0B06CCu); r1 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0B06CEu, 1);  /* 0C0B06CC mov.b @(r0,Rm),Rn */
	r2 = 0xA9u; UPD(0x0C0B06D0u, 1);  /* 0C0B06CE mov.w @(disp,pc),Rn */
	r8 |= r1;  /* 0C0B06D0 or Rm,Rn */
	IF(0x0C0B06D2u); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0B06D4u, 2);  /* 0C0B06D2 mov.b @(r0,Rm),Rn */
	W8(r6, r8); UPD(0x0C0B06D6u, 1);  /* 0C0B06D4 mov.b Rm,@Rn */
	r7 = r5 & 0xFF;  /* 0C0B06D6 extu.b Rm,Rn */
	r3 = 0x20000u; UPD(0x0C0B06DAu, 2);  /* 0C0B06D8 mov.l @(disp,pc),Rn */
	r9 = 0xC07CD80u; UPD(0x0C0B06DCu, 1);  /* 0C0B06DA mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0B06DEu, 1);  /* 0C0B06DC mov.l Rm,@(disp,Rn) */
	W32(r15, r3); UPD(0x0C0B06E0u, 1);  /* 0C0B06DE mov.l Rm,@Rn */
	r4 = 0x9u;  /* 0C0B06E0 mov #imm,Rn */
	r5 = R32(r0 + 0x24u); UPD(0x0C0B06E4u, 2);  /* 0C0B06E2 mov.l @(disp,Rm),Rn */
	IF(0x0C0B06E4u); { u32 t_ = r9; PR = 0x0C0B06E8u; r6 = R32(r0 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C0B06E8u); }  /* 0C0B06E4 jsr @Rn */
L_0C0B06E8: BLKS(0x0C0B06E8u);
	r7 = 0xC175064u; UPD(0x0C0B06EAu, 1);  /* 0C0B06E8 mov.l @(disp,pc),Rn */
	r0 = R32(r7); UPD(0x0C0B06ECu, 1);  /* 0C0B06EA mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C0B06EC cmp/eq #imm,r0 */
	{ u32 c_ = T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B0710u, 4); goto L_0C0B0710; } UPD(0x0C0B06F2u, 1); goto L_0C0B06F2; }  /* 0C0B06EE bt/s */
L_0C0B06F2: BLKS(0x0C0B06F2u);
	r6 = 0xB4u; UPD(0x0C0B06F4u, 1);  /* 0C0B06F2 mov.w @(disp,pc),Rn */
	IF(0x0C0B06F4u); MACL = r10 * r6;  /* 0C0B06F4 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0B06F8u, 3);  /* 0C0B06F6 mov.l @(disp,pc),Rn */
	IF(0x0C0B06F8u); r5 = MACL;  /* 0C0B06F8 sts macl,Rn */
	r4 += r5;  /* 0C0B06FA add Rm,Rn */
	r0 = R32(r4 + 0xCu); UPD(0x0C0B06FEu, 3);  /* 0C0B06FC mov.l @(disp,Rm),Rn */
	r2 = 0xC1E4BCCu; UPD(0x0C0B0700u, 1);  /* 0C0B06FE mov.l @(disp,pc),Rn */
	IF(0x0C0B0700u); r0 <<= 2;  /* 0C0B0700 shll2 Rn */
	IF(0x0C0B0702u); r5 = R32(r0 + r2); UPD(0x0C0B0704u, 2);  /* 0C0B0702 mov.l @(r0,Rm),Rn */
	{ r4 = r10; /* slot mov Rm,Rn */ UPD(0x0C0B02E2u, 3); goto L_0C0B02E2; }  /* 0C0B0704 bra */
L_0C0B0710: BLKS(0x0C0B0710u);
	r0 = 0xC071C90u; UPD(0x0C0B0712u, 1);  /* 0C0B0710 mov.l @(disp,pc),Rn */
	r4 = 0x100000u; UPD(0x0C0B0714u, 1);  /* 0C0B0712 mov.l @(disp,pc),Rn */
	IF(0x0C0B0714u); { u32 t_ = r0; PR = 0x0C0B0718u; IF(0x0C0B0716u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C0B0718u); }  /* 0C0B0714 jsr @Rn */
L_0C0B0718: BLKS(0x0C0B0718u);
	{ IF(0x0C0B071Au); ; /* slot nop */ UPD(0x0C0B06F2u, 3); goto L_0C0B06F2; }  /* 0C0B0718 bra */
}

void blk_f_0C0B0760(sh3_t *c)
{
	LOCALS;
L_0C0B0760: BLKS(0x0C0B0760u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0762u, 1);  /* 0C0B0760 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0B0762 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0766u, 2);  /* 0C0B0764 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0768u, 1);  /* 0C0B0766 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0B076Au, 1);  /* 0C0B0768 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0B076Cu, 1);  /* 0C0B076A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0B076Eu, 1);  /* 0C0B076C mov.l Rm,@-Rn */
	r1 = 0xB4u; UPD(0x0C0B0770u, 1);  /* 0C0B076E mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0772u, 1);  /* 0C0B0770 mov.l Rm,@-Rn */
	IF(0x0C0B0772u); MACL = r4 * r1;  /* 0C0B0772 mul.l Rm,Rn */
	IF(0x0C0B0774u); r15 -= 4; W32(r15, PR); UPD(0x0C0B0776u, 3);  /* 0C0B0774 sts.l pr,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0B0778u, 1);  /* 0C0B0776 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C0B0778 add #imm,Rn */
	r14 = r15;  /* 0C0B077A mov Rm,Rn */
	IF(0x0C0B077Cu); r3 = MACL;  /* 0C0B077C sts macl,Rn */
	r8 = 0x9Cu; UPD(0x0C0B0780u, 4);  /* 0C0B077E mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C0B0780 add Rm,Rn */
	W32(r14, r4); UPD(0x0C0B0784u, 2);  /* 0C0B0782 mov.l Rm,@Rn */
	r8 += r3;  /* 0C0B0784 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C0B0788u, 2);  /* 0C0B0786 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0B0788 tst Rm,Rn */
	{ u32 c_ = !T; r2 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B0792u, 4); goto L_0C0B0792; } goto L_0C0B078E; }  /* 0C0B078A bf/s */
L_0C0B078E: BLKS(0x0C0B078Eu);
	{ r5 = 0x5Au; /* slot mov #imm,Rn */ UPD(0x0C0B08D0u, 4); goto L_0C0B08D0; }  /* 0C0B078E bra */
L_0C0B0792: BLKS(0x0C0B0792u);
	r2 += 0x1u;  /* 0C0B0792 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B0796u, 2);  /* 0C0B0794 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0B0796 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0B0798 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C0B079A cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B07C0u, 6); goto L_0C0B07C0; } UPD(0x0C0B07A0u, 1); goto L_0C0B07A0; }  /* 0C0B079C bt/s */
L_0C0B07A0: BLKS(0x0C0B07A0u);
	r14 += 0xCu;  /* 0C0B07A0 add #imm,Rn */
	UPD(0x0C0B07A2u, 1);
L_0C0B07A2: BLKS(0x0C0B07A2u);
	r15 = r14;  /* 0C0B07A2 mov Rm,Rn */
	IF(0x0C0B07A4u); PR = R32(r15); r15 += 4; UPD(0x0C0B07A6u, 2);  /* 0C0B07A4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B07A8u, 1);  /* 0C0B07A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B07AAu, 1);  /* 0C0B07A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B07ACu, 1);  /* 0C0B07AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B07AEu, 1);  /* 0C0B07AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B07B0u, 1);  /* 0C0B07AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B07B2u, 1);  /* 0C0B07B0 mov.l @Rm+,Rn */
	IF(0x0C0B07B2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B07B2 rts */
L_0C0B07C0: BLKS(0x0C0B07C0u);
	r6 = 0x0u;  /* 0C0B07C0 mov #imm,Rn */
	W8(r2, r6); UPD(0x0C0B07C4u, 2);  /* 0C0B07C2 mov.b Rm,@Rn */
	r5 = 0x0u;  /* 0C0B07C4 mov #imm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0B07C8u, 2);  /* 0C0B07C6 mov.l Rm,@(disp,Rn) */
	r13 = r3;  /* 0C0B07C8 mov Rm,Rn */
	IF(0x0C0B07CAu); ;  /* 0C0B07CA nop */
	UPD(0x0C0B07CCu, 2);
L_0C0B07CC: BLKS(0x0C0B07CCu);
	r0 = 0xB4u; UPD(0x0C0B07CEu, 1);  /* 0C0B07CC mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0B07D0u, 1);  /* 0C0B07CE mov.l @Rm,Rn */
	IF(0x0C0B07D0u); MACL = r1 * r0;  /* 0C0B07D0 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0B07D4u, 3);  /* 0C0B07D2 mov.l @(disp,pc),Rn */
	r12 = 0x86u; UPD(0x0C0B07D6u, 1);  /* 0C0B07D4 mov.w @(disp,pc),Rn */
	IF(0x0C0B07D6u); r0 = MACL;  /* 0C0B07D6 sts macl,Rn */
	r0 += r9;  /* 0C0B07D8 add Rm,Rn */
	r11 = R32(r14 + 0x4u); UPD(0x0C0B07DCu, 3);  /* 0C0B07DA mov.l @(disp,Rm),Rn */
	IF(0x0C0B07DCu); r7 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C0B07DEu, 1);  /* 0C0B07DC mov.w @(r0,Rm),Rn */
	r11 += r11;  /* 0C0B07DE add Rm,Rn */
	r10 = 0xC1E4C3Cu; UPD(0x0C0B07E2u, 2);  /* 0C0B07E0 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C0B07E2 mov Rm,Rn */
	IF(0x0C0B07E4u); r8 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C0B07E6u, 2);  /* 0C0B07E4 mov.w @(r0,Rm),Rn */
	r3 = R32(r14 + 0x4u); UPD(0x0C0B07E8u, 1);  /* 0C0B07E6 mov.l @(disp,Rm),Rn */
	r7 += r8;  /* 0C0B07E8 add Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0B07EA tst Rm,Rn */
	{ u32 c_ = !T; r12 = (u32)(s32)(s16)r7; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0B08C0u, 5); goto L_0C0B08C0; } goto L_0C0B07F0; }  /* 0C0B07EC bf/s */
L_0C0B07F0: BLKS(0x0C0B07F0u);
	r1 = r12;  /* 0C0B07F0 mov Rm,Rn */
	r1 += 0xFFFFFFDEu;  /* 0C0B07F2 add #imm,Rn */
	UPD(0x0C0B07F4u, 3);
L_0C0B07F4: BLKS(0x0C0B07F4u);
	r6 = 0x1FFu; UPD(0x0C0B07F6u, 1);  /* 0C0B07F4 mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r1;  /* 0C0B07F6 exts.w Rm,Rn */
	r11 = 0xC069B20u; UPD(0x0C0B07FAu, 2);  /* 0C0B07F8 mov.l @(disp,pc),Rn */
	r12 &= r6;  /* 0C0B07FA and Rm,Rn */
	r5 = 0x1A0000u; UPD(0x0C0B07FEu, 2);  /* 0C0B07FC mov.l @(disp,pc),Rn */
	IF(0x0C0B07FEu); { u32 t_ = r11; PR = 0x0C0B0802u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B0802u); }  /* 0C0B07FE jsr @Rn */
L_0C0B0802: BLKS(0x0C0B0802u);
	r11 = R32(r14 + 0x4u); UPD(0x0C0B0804u, 1);  /* 0C0B0802 mov.l @(disp,Rm),Rn */
	r9 = r0;  /* 0C0B0804 mov Rm,Rn */
	r2 = 0xC069AF0u; UPD(0x0C0B0808u, 2);  /* 0C0B0806 mov.l @(disp,pc),Rn */
	IF(0x0C0B0808u); r11 <<= 2;  /* 0C0B0808 shll2 Rn */
	r4 = 0xC1E4C40u; UPD(0x0C0B080Cu, 2);  /* 0C0B080A mov.l @(disp,pc),Rn */
	r11 += r4;  /* 0C0B080C add Rm,Rn */
	r4 = r12;  /* 0C0B080E mov Rm,Rn */
	IF(0x0C0B0810u); { u32 t_ = r2; PR = 0x0C0B0814u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B0814u); }  /* 0C0B0810 jsr @Rn */
L_0C0B0814: BLKS(0x0C0B0814u);
	r9 -= r0;  /* 0C0B0814 sub Rm,Rn */
	r8 = 0x66666667u; UPD(0x0C0B0818u, 2);  /* 0C0B0816 mov.l @(disp,pc),Rn */
	IF(0x0C0B0818u); r9 <<= 2;  /* 0C0B0818 shll2 Rn */
	{ s64 r_ = (s64)(s32)r9 * (s64)(s32)r8; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0B081A dmuls.l Rm,Rn */
	r7 = 0xB4u; UPD(0x0C0B081Eu, 4);  /* 0C0B081C mov.w @(disp,pc),Rn */
	r4 = r12;  /* 0C0B081E mov Rm,Rn */
	IF(0x0C0B0820u); r1 = MACH;  /* 0C0B0820 sts mach,Rn */
	r10 = R32(r14); UPD(0x0C0B0824u, 3);  /* 0C0B0822 mov.l @Rm,Rn */
	IF(0x0C0B0824u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0B0824 shar Rn */
	IF(0x0C0B0826u); T = r9 >> 31; r9 <<= 1;  /* 0C0B0826 shll Rn */
	IF(0x0C0B0828u); MACL = r10 * r7;  /* 0C0B0828 mul.l Rm,Rn */
	{ u32 a_ = r9, t_ = a_ - r9, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r9 = r_; }  /* 0C0B082A subc Rm,Rn */
	r1 -= r9;  /* 0C0B082C sub Rm,Rn */
	IF(0x0C0B082Eu); r5 = MACL;  /* 0C0B082E sts macl,Rn */
	r3 = 0xC069AF0u; UPD(0x0C0B0832u, 8);  /* 0C0B0830 mov.l @(disp,pc),Rn */
	r9 = R32(r13 + 0x24u); UPD(0x0C0B0834u, 1);  /* 0C0B0832 mov.l @(disp,Rm),Rn */
	r0 = 0xFFFC0000u; UPD(0x0C0B0836u, 1);  /* 0C0B0834 mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C0B0836 add Rm,Rn */
	W32(r14 + 0x8u, r5); UPD(0x0C0B083Au, 2);  /* 0C0B0838 mov.l Rm,@(disp,Rn) */
	r5 = 0x1A0000u; UPD(0x0C0B083Cu, 1);  /* 0C0B083A mov.l @(disp,pc),Rn */
	IF(0x0C0B083Cu); { u32 t_ = r3; PR = 0x0C0B0840u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B0840u); }  /* 0C0B083C jsr @Rn */
L_0C0B0840: BLKS(0x0C0B0840u);
	r6 = 0xC069B20u; UPD(0x0C0B0842u, 1);  /* 0C0B0840 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C0B0842 mov Rm,Rn */
	r4 = r12;  /* 0C0B0844 mov Rm,Rn */
	IF(0x0C0B0846u); { u32 t_ = r6; PR = 0x0C0B084Au; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B084Au); }  /* 0C0B0846 jsr @Rn */
L_0C0B084A: BLKS(0x0C0B084Au);
	r10 = R32(r13 + 0x28u); UPD(0x0C0B084Cu, 1);  /* 0C0B084A mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C0B084C add Rm,Rn */
	r10 += r8;  /* 0C0B084E add Rm,Rn */
	r4 = 0xA9u; UPD(0x0C0B0852u, 3);  /* 0C0B0850 mov.w @(disp,pc),Rn */
	r0 = r13;  /* 0C0B0852 mov Rm,Rn */
	r8 = 0xC0BC0B0u; UPD(0x0C0B0856u, 2);  /* 0C0B0854 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C0B0856 mov Rm,Rn */
	IF(0x0C0B0858u); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0B085Au, 2);  /* 0C0B0858 mov.b @(r0,Rm),Rn */
	r4 = r9;  /* 0C0B085A mov Rm,Rn */
	IF(0x0C0B085Cu); { u32 t_ = r8; PR = 0x0C0B0860u; r6 = r2 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC0B0, 0x0C0BC0B0u, 0x0C0B0860u); }  /* 0C0B085C jsr @Rn */
L_0C0B0860: BLKS(0x0C0B0860u);
	T = (r0 & r0) == 0;  /* 0C0B0860 tst Rm,Rn */
	{ u32 c_ = !T; r7 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B08A0u, 4); goto L_0C0B08A0; } UPD(0x0C0B0866u, 1); goto L_0C0B0866; }  /* 0C0B0862 bf/s */
L_0C0B0866: BLKS(0x0C0B0866u);
	r9 = R32(r14 + 0x4u); UPD(0x0C0B0868u, 1);  /* 0C0B0866 mov.l @(disp,Rm),Rn */
	r7 = 0x1u;  /* 0C0B0868 mov #imm,Rn */
	r9 += 0x1u;  /* 0C0B086A add #imm,Rn */
	r0 = (u32)(s32)(s16)r9;  /* 0C0B086C exts.w Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0B0870u, 4);  /* 0C0B086E mov.l Rm,@(disp,Rn) */
	r10 = R32(r14 + 0x4u); UPD(0x0C0B0872u, 1);  /* 0C0B0870 mov.l @(disp,Rm),Rn */
	T = (s32)r10 > (s32)r7;  /* 0C0B0872 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0B07CCu, 4); goto L_0C0B07CC; } UPD(0x0C0B0878u, 1); goto L_0C0B0878; }  /* 0C0B0874 bf/s */
L_0C0B0878: BLKS(0x0C0B0878u);
	r4 = 0xC286578u; UPD(0x0C0B087Au, 1);  /* 0C0B0878 mov.l @(disp,pc),Rn */
	r2 = 0x9Cu; UPD(0x0C0B087Cu, 1);  /* 0C0B087A mov.w @(disp,pc),Rn */
	r4 += r1;  /* 0C0B087C add Rm,Rn */
	r4 += r2;  /* 0C0B087E add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r4); UPD(0x0C0B0882u, 3);  /* 0C0B0880 mov.b @Rm,Rn */
	r8 += 0xFFFFFFFFu;  /* 0C0B0882 add #imm,Rn */
	r13 = r8 & 0xFF;  /* 0C0B0884 extu.b Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C0B0886 tst Rm,Rn */
	{ u32 c_ = !T; W8(r4, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0B07A0u, 6); goto L_0C0B07A0; } UPD(0x0C0B088Cu, 1); goto L_0C0B088C; }  /* 0C0B0888 bf/s */
L_0C0B088C: BLKS(0x0C0B088Cu);
	r11 = 0xC069B90u; UPD(0x0C0B088Eu, 1);  /* 0C0B088C mov.l @(disp,pc),Rn */
	IF(0x0C0B088Eu); { u32 t_ = r11; PR = 0x0C0B0892u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C0B0892u); }  /* 0C0B088E jsr @Rn */
L_0C0B0892: BLKS(0x0C0B0892u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C0B07A2u, 3); goto L_0C0B07A2; }  /* 0C0B0892 bra */
L_0C0B08A0: BLKS(0x0C0B08A0u);
	r5 = 0x28000u; UPD(0x0C0B08A2u, 1);  /* 0C0B08A0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0B08A2 add #imm,Rn */
	r3 = 0xC189D4Cu; UPD(0x0C0B08A6u, 2);  /* 0C0B08A4 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0B08A6 mov #imm,Rn */
	r12 = 0xC0BA610u; UPD(0x0C0B08AAu, 2);  /* 0C0B08A8 mov.l @(disp,pc),Rn */
	r6 = r10;  /* 0C0B08AA mov Rm,Rn */
	W32(r15, r5); UPD(0x0C0B08AEu, 2);  /* 0C0B08AC mov.l Rm,@Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B08B0u, 1);  /* 0C0B08AE mov.l Rm,@(disp,Rn) */
	IF(0x0C0B08B0u); { u32 t_ = r12; PR = 0x0C0B08B4u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA610, 0x0C0BA610u, 0x0C0B08B4u); }  /* 0C0B08B0 jsr @Rn */
L_0C0B08B4: BLKS(0x0C0B08B4u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0B0866u, 3); goto L_0C0B0866; }  /* 0C0B08B4 bra */
L_0C0B08C0: BLKS(0x0C0B08C0u);
	r1 = r12;  /* 0C0B08C0 mov Rm,Rn */
	{ r1 += 0x22u; /* slot add #imm,Rn */ UPD(0x0C0B07F4u, 4); goto L_0C0B07F4; }  /* 0C0B08C2 bra */
L_0C0B08D0: BLKS(0x0C0B08D0u);
	r9 = 0xC0BC1B0u; UPD(0x0C0B08D2u, 1);  /* 0C0B08D0 mov.l @(disp,pc),Rn */
	IF(0x0C0B08D2u); { u32 t_ = r9; PR = 0x0C0B08D6u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0B08D6u); }  /* 0C0B08D2 jsr @Rn */
L_0C0B08D6: BLKS(0x0C0B08D6u);
	T = (r0 & r0) == 0;  /* 0C0B08D6 tst Rm,Rn */
	if (T) { UPD(0x0C0B0892u, 4); goto L_0C0B0892; }  /* 0C0B08D8 bt */
L_0C0B08DA: BLKS(0x0C0B08DAu);
	r2 = 0x8u;  /* 0C0B08DA mov #imm,Rn */
	{ W8(r8, r2); /* slot mov.b Rm,@Rn */ UPD(0x0C0B07A0u, 4); goto L_0C0B07A0; }  /* 0C0B08DC bra */
}

void blk_f_0C0B0930(sh3_t *c)
{
	LOCALS;
L_0C0B0930: BLKS(0x0C0B0930u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0932u, 1);  /* 0C0B0930 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0934u, 1);  /* 0C0B0932 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0936u, 1);  /* 0C0B0934 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0938u, 1);  /* 0C0B0936 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0B093Au, 1);  /* 0C0B0938 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0B093Cu, 1);  /* 0C0B093A mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0B093C exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0940u, 2);  /* 0C0B093E mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C0B0940 exts.w Rm,Rn */
	IF(0x0C0B0942u); r15 -= 4; W32(r15, PR); UPD(0x0C0B0944u, 2);  /* 0C0B0942 sts.l pr,@-Rn */
	r7 = 0xB4u; UPD(0x0C0B0946u, 1);  /* 0C0B0944 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0B0946 add #imm,Rn */
	r14 = r15;  /* 0C0B0948 mov Rm,Rn */
	W32(r14, r6); UPD(0x0C0B094Cu, 3);  /* 0C0B094A mov.l Rm,@Rn */
	IF(0x0C0B094Cu); MACL = r12 * r7;  /* 0C0B094C mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B0950u, 3);  /* 0C0B094E mov.l @(disp,pc),Rn */
	IF(0x0C0B0950u); r9 = MACL;  /* 0C0B0950 sts macl,Rn */
	r9 += r6;  /* 0C0B0952 add Rm,Rn */
	r5 = 0x8Cu; UPD(0x0C0B0956u, 3);  /* 0C0B0954 mov.w @(disp,pc),Rn */
	r11 = r9;  /* 0C0B0956 mov Rm,Rn */
	r11 += r5;  /* 0C0B0958 add Rm,Rn */
	r2 = R32(r11); UPD(0x0C0B095Cu, 3);  /* 0C0B095A mov.l @Rm,Rn */
	IF(0x0C0B095Cu); T = (s32)r2 > 0;  /* 0C0B095C cmp/pl Rn */
	{ u32 c_ = !T; IF(0x0C0B0960u); T = (s32)r2 >= 0; /* slot cmp/pz Rn */ if (c_) { UPD(0x0C0B096Cu, 4); goto L_0C0B096C; } goto L_0C0B0962; }  /* 0C0B095E bf/s */
L_0C0B0962: BLKS(0x0C0B0962u);
	r0 = 0xFFFFC000u; UPD(0x0C0B0964u, 2);  /* 0C0B0962 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C0B0964 add Rm,Rn */
	W32(r11, r0); UPD(0x0C0B0968u, 2);  /* 0C0B0966 mov.l Rm,@Rn */
	r2 = r0;  /* 0C0B0968 mov Rm,Rn */
	IF(0x0C0B096Au); T = (s32)r2 >= 0;  /* 0C0B096A cmp/pz Rn */
	UPD(0x0C0B096Cu, 2);
L_0C0B096C: BLKS(0x0C0B096Cu);
	if (T) { UPD(0x0C0B0972u, 3); goto L_0C0B0972; }  /* 0C0B096C bt */
L_0C0B096E: BLKS(0x0C0B096Eu);
	{ IF(0x0C0B0970u); ; /* slot nop */ UPD(0x0C0B0A80u, 3); goto L_0C0B0A80; }  /* 0C0B096E bra */
L_0C0B0972: BLKS(0x0C0B0972u);
	r4 = R32(r9); UPD(0x0C0B0974u, 1);  /* 0C0B0972 mov.l @Rm,Rn */
	IF(0x0C0B0974u); MACL = r13 * r7;  /* 0C0B0974 mul.l Rm,Rn */
	r8 = 0xECFFFEFFu; UPD(0x0C0B0978u, 3);  /* 0C0B0976 mov.l @(disp,pc),Rn */
	r10 = r5;  /* 0C0B0978 mov Rm,Rn */
	r4 &= r8;  /* 0C0B097A and Rm,Rn */
	W32(r9, r4); UPD(0x0C0B097Eu, 3);  /* 0C0B097C mov.l Rm,@Rn */
	IF(0x0C0B097Eu); r8 = MACL;  /* 0C0B097E sts macl,Rn */
	r8 += r6;  /* 0C0B0980 add Rm,Rn */
	r6 = R32(r8); UPD(0x0C0B0984u, 3);  /* 0C0B0982 mov.l @Rm,Rn */
	r10 += r8;  /* 0C0B0984 add Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C0B0988u, 2);  /* 0C0B0986 mov.l @(disp,pc),Rn */
	r3 = R32(r8 + 0x38u); UPD(0x0C0B098Au, 1);  /* 0C0B0988 mov.l @(disp,Rm),Rn */
	r6 &= r1;  /* 0C0B098A and Rm,Rn */
	r4 |= r6;  /* 0C0B098C or Rm,Rn */
	r2 = R32(r10); UPD(0x0C0B0990u, 3);  /* 0C0B098E mov.l @Rm,Rn */
	W32(r9, r4); UPD(0x0C0B0992u, 1);  /* 0C0B0990 mov.l Rm,@Rn */
	T = (r2 & r2) == 0;  /* 0C0B0992 tst Rm,Rn */
	{ u32 c_ = !T; W32(r9 + 0x38u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B0A00u, 4); goto L_0C0B0A00; } UPD(0x0C0B0998u, 1); goto L_0C0B0998; }  /* 0C0B0994 bf/s */
L_0C0B0998: BLKS(0x0C0B0998u);
	r2 = 0xB4u; UPD(0x0C0B099Au, 1);  /* 0C0B0998 mov.w @(disp,pc),Rn */
	r9 = 0xFFFFFFFAu;  /* 0C0B099A mov #imm,Rn */
	IF(0x0C0B099Cu); MACL = r12 * r2;  /* 0C0B099C mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B09A0u, 4);  /* 0C0B099E mov.l @(disp,pc),Rn */
	IF(0x0C0B09A0u); r11 = MACL;  /* 0C0B09A0 sts macl,Rn */
	IF(0x0C0B09A2u); MACL = r13 * r2;  /* 0C0B09A2 mul.l Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C0B09A6u, 4);  /* 0C0B09A4 mov.w @(disp,pc),Rn */
	r11 += r7;  /* 0C0B09A6 add Rm,Rn */
	IF(0x0C0B09A8u); r10 = R32(r0 + r11); UPD(0x0C0B09AAu, 2);  /* 0C0B09A8 mov.l @(r0,Rm),Rn */
	IF(0x0C0B09AAu); r13 = MACL;  /* 0C0B09AA sts macl,Rn */
	r13 += r7;  /* 0C0B09AC add Rm,Rn */
	r3 = 0x86u; UPD(0x0C0B09B0u, 3);  /* 0C0B09AE mov.w @(disp,pc),Rn */
	r0 = r13;  /* 0C0B09B0 mov Rm,Rn */
	IF(0x0C0B09B2u); r7 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0B09B4u, 2);  /* 0C0B09B2 mov.w @(r0,Rm),Rn */
	IF(0x0C0B09B4u); ARG0(0x479Cu); { s32 s_ = (s32)r9; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C0B09B4 shad Rm,Rn */
	r8 = R32(r13 + 0x24u); UPD(0x0C0B09B8u, 2);  /* 0C0B09B6 mov.l @(disp,Rm),Rn */
	r7 += 0x1Eu;  /* 0C0B09B8 add #imm,Rn */
	r4 = R32(r13 + 0x28u); UPD(0x0C0B09BCu, 2);  /* 0C0B09BA mov.l @(disp,Rm),Rn */
	r0 = 0x7Fu;  /* 0C0B09BC mov #imm,Rn */
	IF(0x0C0B09BEu); r7 >>= 2;  /* 0C0B09BE shlr2 Rn */
	r7 &= r0;  /* 0C0B09C0 and Rm,Rn */
	r13 += 0x50u;  /* 0C0B09C2 add #imm,Rn */
	r6 = R32(r11 + 0x2Cu); UPD(0x0C0B09C6u, 5);  /* 0C0B09C4 mov.l @(disp,Rm),Rn */
	r5 = R32(r11 + 0x30u); UPD(0x0C0B09C8u, 1);  /* 0C0B09C6 mov.l @(disp,Rm),Rn */
	r8 += r6;  /* 0C0B09C8 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r13); UPD(0x0C0B09CCu, 2);  /* 0C0B09CA mov.w @Rm,Rn */
	r4 += r5;  /* 0C0B09CC add Rm,Rn */
	r2 = R32(r14); UPD(0x0C0B09D0u, 2);  /* 0C0B09CE mov.l @Rm,Rn */
	IF(0x0C0B09D0u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0B09D0 shar Rn */
	r8 += r10;  /* 0C0B09D2 add Rm,Rn */
	W32(r11 + 0x28u, r4); UPD(0x0C0B09D6u, 3);  /* 0C0B09D4 mov.l Rm,@(disp,Rn) */
	r7 += r2;  /* 0C0B09D6 add Rm,Rn */
	r0 &= 0x7u;  /* 0C0B09D8 and #imm,r0 */
	W32(r11 + 0x24u, r8); UPD(0x0C0B09DCu, 3);  /* 0C0B09DA mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C0B09DC mov Rm,Rn */
	W32(r11 + 0x8u, r7); UPD(0x0C0B09E0u, 2);  /* 0C0B09DE mov.l Rm,@(disp,Rn) */
	r14 += 0x4u;  /* 0C0B09E0 add #imm,Rn */
	W32(r11 + 0xCu, r0); UPD(0x0C0B09E4u, 2);  /* 0C0B09E2 mov.l Rm,@(disp,Rn) */
	r6 = 0xC0A8B10u; UPD(0x0C0B09E6u, 1);  /* 0C0B09E4 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0B09E6 mov Rm,Rn */
	IF(0x0C0B09E8u); PR = R32(r15); r15 += 4; UPD(0x0C0B09EAu, 2);  /* 0C0B09E8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B09ECu, 1);  /* 0C0B09EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B09EEu, 1);  /* 0C0B09EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B09F0u, 1);  /* 0C0B09EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B09F2u, 1);  /* 0C0B09F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B09F4u, 1);  /* 0C0B09F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B09F6u, 1);  /* 0C0B09F4 mov.l @Rm+,Rn */
	IF(0x0C0B09F6u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8B10u: TAIL(blk_f_0C0A8B10); default: JUMPD(tv_); } }  /* 0C0B09F6 jmp @Rn */
L_0C0B0A00: BLKS(0x0C0B0A00u);
	r0 = 0xC0C2360u; UPD(0x0C0B0A02u, 1);  /* 0C0B0A00 mov.l @(disp,pc),Rn */
	IF(0x0C0B0A02u); { u32 t_ = r0; PR = 0x0C0B0A06u; IF(0x0C0B0A04u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0B0A06u); }  /* 0C0B0A02 jsr @Rn */
L_0C0B0A06: BLKS(0x0C0B0A06u);
	r5 = 0x7FFu; UPD(0x0C0B0A08u, 1);  /* 0C0B0A06 mov.w @(disp,pc),Rn */
	T = (s32)r0 > (s32)r5;  /* 0C0B0A08 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B0A60u, 4); goto L_0C0B0A60; }  /* 0C0B0A0A bf */
L_0C0B0A0C: BLKS(0x0C0B0A0Cu);
	r0 = 0x86u; UPD(0x0C0B0A0Eu, 1);  /* 0C0B0A0C mov.w @(disp,pc),Rn */
	r2 = 0xFFFFFFFAu;  /* 0C0B0A0E mov #imm,Rn */
	IF(0x0C0B0A10u); r11 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0B0A12u, 2);  /* 0C0B0A10 mov.w @(r0,Rm),Rn */
	r0 = R32(r10); UPD(0x0C0B0A14u, 1);  /* 0C0B0A12 mov.l @Rm,Rn */
	IF(0x0C0B0A14u); T = (s32)r0 > 0;  /* 0C0B0A14 cmp/pl Rn */
	{ u32 c_ = !T; IF(0x0C0B0A18u); ARG0(0x4B2Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r11 <<= (s_ & 31); else if ((s_ & 31) == 0) r11 = (u32)((s32)r11 >> 31); else r11 = (u32)((s32)r11 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ if (c_) { UPD(0x0C0B0A20u, 4); goto L_0C0B0A20; } goto L_0C0B0A1A; }  /* 0C0B0A16 bf/s */
L_0C0B0A1A: BLKS(0x0C0B0A1Au);
	r10 = 0x100u; UPD(0x0C0B0A1Cu, 2);  /* 0C0B0A1A mov.w @(disp,pc),Rn */
	r10 += r11;  /* 0C0B0A1C add Rm,Rn */
	r11 = (u32)(s32)(s16)r10;  /* 0C0B0A1E exts.w Rm,Rn */
	UPD(0x0C0B0A20u, 2);
L_0C0B0A20: BLKS(0x0C0B0A20u);
	r10 = 0xC069B20u; UPD(0x0C0B0A22u, 1);  /* 0C0B0A20 mov.l @(disp,pc),Rn */
	r5 = 0x99999u; UPD(0x0C0B0A24u, 1);  /* 0C0B0A22 mov.l @(disp,pc),Rn */
	IF(0x0C0B0A24u); { u32 t_ = r10; PR = 0x0C0B0A28u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0B0A28u); }  /* 0C0B0A24 jsr @Rn */
L_0C0B0A28: BLKS(0x0C0B0A28u);
	r8 = 0xC069AF0u; UPD(0x0C0B0A2Au, 1);  /* 0C0B0A28 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0B0A2A mov Rm,Rn */
	r10 = R32(r9 + 0x24u); UPD(0x0C0B0A2Eu, 2);  /* 0C0B0A2C mov.l @(disp,Rm),Rn */
	r5 = 0xC0000u; UPD(0x0C0B0A30u, 1);  /* 0C0B0A2E mov.l @(disp,pc),Rn */
	IF(0x0C0B0A30u); { u32 t_ = r8; PR = 0x0C0B0A34u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B0A34u); }  /* 0C0B0A30 jsr @Rn */
L_0C0B0A34: BLKS(0x0C0B0A34u);
	r6 = R32(r9 + 0x28u); UPD(0x0C0B0A36u, 1);  /* 0C0B0A34 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0B0A36 add #imm,Rn */
	r6 += r0;  /* 0C0B0A38 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B0A3Cu, 3);  /* 0C0B0A3A mov.w @(disp,pc),Rn */
	r3 = 0x3u;  /* 0C0B0A3C mov #imm,Rn */
	IF(0x0C0B0A3Eu); r1 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B0A40u, 2);  /* 0C0B0A3E mov.b @(r0,Rm),Rn */
	r5 = 0xA9u; UPD(0x0C0B0A42u, 1);  /* 0C0B0A40 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C0B0A42 mov Rm,Rn */
	IF(0x0C0B0A44u); r8 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0B0A46u, 2);  /* 0C0B0A44 mov.b @(r0,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C0B0A46 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0B0A4Au, 2);  /* 0C0B0A48 mov.l Rm,@(disp,Rn) */
	r4 = r8 & 0xFF;  /* 0C0B0A4A extu.b Rm,Rn */
	r3 += 0x7Du;  /* 0C0B0A4C add #imm,Rn */
	W32(r15, r4); UPD(0x0C0B0A50u, 3);  /* 0C0B0A4E mov.l Rm,@Rn */
	W32(r15 + 0x8u, r11); UPD(0x0C0B0A52u, 1);  /* 0C0B0A50 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r3); UPD(0x0C0B0A54u, 1);  /* 0C0B0A52 mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C0B0A56u, 1);  /* 0C0B0A54 mov.l @Rm,Rn */
	r9 = 0xC0BCE80u; UPD(0x0C0B0A58u, 1);  /* 0C0B0A56 mov.l @(disp,pc),Rn */
	IF(0x0C0B0A58u); { u32 t_ = r9; PR = 0x0C0B0A5Cu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCE80, 0x0C0BCE80u, 0x0C0B0A5Cu); }  /* 0C0B0A58 jsr @Rn */
L_0C0B0A5C: BLKS(0x0C0B0A5Cu);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0B0998u, 3); goto L_0C0B0998; }  /* 0C0B0A5C bra */
L_0C0B0A60: BLKS(0x0C0B0A60u);
	r0 = 0xC062780u; UPD(0x0C0B0A62u, 1);  /* 0C0B0A60 mov.l @(disp,pc),Rn */
	IF(0x0C0B0A62u); { u32 t_ = r0; PR = 0x0C0B0A66u; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0B0A66u); }  /* 0C0B0A62 jsr @Rn */
L_0C0B0A66: BLKS(0x0C0B0A66u);
	r7 = R32(r11); UPD(0x0C0B0A68u, 1);  /* 0C0B0A66 mov.l @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0B0A68 add #imm,Rn */
	IF(0x0C0B0A6Au); r0 <<= 16;  /* 0C0B0A6A shll16 Rn */
	r7 += r0;  /* 0C0B0A6C add Rm,Rn */
	{ W32(r11, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C0B0A0Cu, 6); goto L_0C0B0A0C; }  /* 0C0B0A6E bra */
L_0C0B0A80: BLKS(0x0C0B0A80u);
	r0 = 0x4000u; UPD(0x0C0B0A82u, 1);  /* 0C0B0A80 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C0B0A82 add Rm,Rn */
	{ W32(r11, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C0B0972u, 4); goto L_0C0B0972; }  /* 0C0B0A84 bra */
}

void blk_f_0C0B0AD0(sh3_t *c)
{
	LOCALS;
L_0C0B0AD0: BLKS(0x0C0B0AD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0AD2u, 1);  /* 0C0B0AD0 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0B0AD2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0AD6u, 2);  /* 0C0B0AD4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0AD8u, 1);  /* 0C0B0AD6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0ADAu, 1);  /* 0C0B0AD8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0ADCu, 1);  /* 0C0B0ADA mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0B0ADEu, 1);  /* 0C0B0ADC mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0AE0u, 1);  /* 0C0B0ADE mov.l Rm,@-Rn */
	IF(0x0C0B0AE0u); MACL = r1 * r3;  /* 0C0B0AE0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0AE4u, 3);  /* 0C0B0AE2 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0B0AE6u, 1);  /* 0C0B0AE4 mov.l @(disp,pc),Rn */
	IF(0x0C0B0AE6u); r2 = MACL;  /* 0C0B0AE6 sts macl,Rn */
	IF(0x0C0B0AE8u); r15 -= 4; W32(r15, PR); UPD(0x0C0B0AEAu, 2);  /* 0C0B0AE8 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0B0AEA add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0B0AEEu, 2);  /* 0C0B0AEC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFBCu;  /* 0C0B0AEE add #imm,Rn */
	r14 = r15;  /* 0C0B0AF0 mov Rm,Rn */
	r0 = 0x4Eu;  /* 0C0B0AF2 mov #imm,Rn */
	T = r2 > r0;  /* 0C0B0AF4 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W32(r14, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0B0AFEu, 7); goto L_0C0B0AFE; } UPD(0x0C0B0AFAu, 1); goto L_0C0B0AFA; }  /* 0C0B0AF6 bf/s */
L_0C0B0AFA: BLKS(0x0C0B0AFAu);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0AFA bra */
L_0C0B0AFE: BLKS(0x0C0B0AFEu);
	r0 = 0xC0B0B10u;  /* 0C0B0AFE mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B0B00 add Rm,Rn */
	IF(0x0C0B0B02u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B0B04u, 3);  /* 0C0B0B02 mov.w @(r0,Rm),Rn */
	IF(0x0C0B0B04u); { u32 tv_ = (r4 + 0x0C0B0B08u); u32 t_ = PHYS(tv_); IF(0x0C0B0B06u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0B04 braf Rn */
L_0C0B0BFE: BLKS(0x0C0B0BFEu);
	r15 = r14;  /* 0C0B0BFE mov Rm,Rn */
	IF(0x0C0B0C00u); PR = R32(r15); r15 += 4; UPD(0x0C0B0C02u, 2);  /* 0C0B0C00 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0C04u, 1);  /* 0C0B0C02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0C06u, 1);  /* 0C0B0C04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0C08u, 1);  /* 0C0B0C06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0C0Au, 1);  /* 0C0B0C08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0C0Cu, 1);  /* 0C0B0C0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0C0Eu, 1);  /* 0C0B0C0C mov.l @Rm+,Rn */
	IF(0x0C0B0C0Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B0C0E rts */
}

void blk_f_0C0B0BB0(sh3_t *c)
{
	LOCALS;
L_0C0B0BB0: BLKS(0x0C0B0BB0u);
	r8 = 0xB4u; UPD(0x0C0B0BB2u, 1);  /* 0C0B0BB0 mov.w @(disp,pc),Rn */
	r9 = R32(r14); UPD(0x0C0B0BB4u, 1);  /* 0C0B0BB2 mov.l @Rm,Rn */
	IF(0x0C0B0BB4u); MACL = r9 * r8;  /* 0C0B0BB4 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B0BB8u, 3);  /* 0C0B0BB6 mov.l @(disp,pc),Rn */
	IF(0x0C0B0BB8u); r8 = MACL;  /* 0C0B0BB8 sts macl,Rn */
	r8 += r7;  /* 0C0B0BBA add Rm,Rn */
	r8 += 0x3Cu;  /* 0C0B0BBC add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r8); UPD(0x0C0B0BC0u, 4);  /* 0C0B0BBE mov.w @Rm,Rn */
	r6 = 0xC3CC310u; UPD(0x0C0B0BC2u, 1);  /* 0C0B0BC0 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFC4u;  /* 0C0B0BC2 add #imm,Rn */
	T = (r5 & r5) == 0;  /* 0C0B0BC4 tst Rm,Rn */
	{ u32 c_ = !T; W32(r6, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0B0BCEu, 5); goto L_0C0B0BCE; } UPD(0x0C0B0BCAu, 1); goto L_0C0B0BCA; }  /* 0C0B0BC6 bf/s */
L_0C0B0BCA: BLKS(0x0C0B0BCAu);
	{ r13 = 0x10u; /* slot mov #imm,Rn */ UPD(0x0C0B0EB0u, 3); goto L_0C0B0EB0; }  /* 0C0B0BCA bra */
L_0C0B0BCE: BLKS(0x0C0B0BCEu);
	r7 = 0xB4u; UPD(0x0C0B0BD0u, 1);  /* 0C0B0BCE mov.w @(disp,pc),Rn */
	r9 = R32(r14); UPD(0x0C0B0BD2u, 1);  /* 0C0B0BD0 mov.l @Rm,Rn */
	IF(0x0C0B0BD2u); MACL = r9 * r7;  /* 0C0B0BD2 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B0BD6u, 3);  /* 0C0B0BD4 mov.l @(disp,pc),Rn */
	IF(0x0C0B0BD6u); r3 = MACL;  /* 0C0B0BD6 sts macl,Rn */
	r3 += r6;  /* 0C0B0BD8 add Rm,Rn */
	r5 = R32(r3 + 0x24u); UPD(0x0C0B0BDCu, 3);  /* 0C0B0BDA mov.l @(disp,Rm),Rn */
	r4 = 0xFF800000u; UPD(0x0C0B0BDEu, 1);  /* 0C0B0BDC mov.l @(disp,pc),Rn */
	T = (s32)r5 >= (s32)r4;  /* 0C0B0BDE cmp/ge Rm,Rn */
	{ u32 c_ = T; r13 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B0C20u, 4); goto L_0C0B0C20; } goto L_0C0B0BE4; }  /* 0C0B0BE0 bt/s */
L_0C0B0BE4: BLKS(0x0C0B0BE4u);
	W32(r3, r13); UPD(0x0C0B0BE6u, 2);  /* 0C0B0BE4 mov.l Rm,@Rn */
	r11 = 0x4u;  /* 0C0B0BE6 mov #imm,Rn */
	r3 = 0xC3C4165u; UPD(0x0C0B0BEAu, 2);  /* 0C0B0BE8 mov.l @(disp,pc),Rn */
	r12 = 0xC3C4164u; UPD(0x0C0B0BECu, 1);  /* 0C0B0BEA mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0B0BEEu, 1);  /* 0C0B0BEC mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C0B0BF0u, 1);  /* 0C0B0BEE mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C0B0BF0 add #imm,Rn */
	r10 = 0xC175064u; UPD(0x0C0B0BF4u, 2);  /* 0C0B0BF2 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C0B0BF4 add #imm,Rn */
	W8(r3, r2); UPD(0x0C0B0BF8u, 2);  /* 0C0B0BF6 mov.b Rm,@Rn */
	W8(r12, r0); UPD(0x0C0B0BFAu, 1);  /* 0C0B0BF8 mov.b Rm,@Rn */
	W32(r10, r11); UPD(0x0C0B0BFCu, 1);  /* 0C0B0BFA mov.l Rm,@Rn */
L_0C0B0BFC: BLKS(0x0C0B0BFCu);
	r14 += 0x44u;  /* 0C0B0BFC add #imm,Rn */
	UPD(0x0C0B0BFEu, 1);
L_0C0B0BFE: BLKS(0x0C0B0BFEu);
	r15 = r14;  /* 0C0B0BFE mov Rm,Rn */
	IF(0x0C0B0C00u); PR = R32(r15); r15 += 4; UPD(0x0C0B0C02u, 2);  /* 0C0B0C00 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0C04u, 1);  /* 0C0B0C02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0C06u, 1);  /* 0C0B0C04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0C08u, 1);  /* 0C0B0C06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0C0Au, 1);  /* 0C0B0C08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0C0Cu, 1);  /* 0C0B0C0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0C0Eu, 1);  /* 0C0B0C0C mov.l @Rm+,Rn */
	IF(0x0C0B0C0Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B0C0E rts */
L_0C0B0C20: BLKS(0x0C0B0C20u);
	r5 = 0xA7u; UPD(0x0C0B0C22u, 1);  /* 0C0B0C20 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C0B0C22 mov Rm,Rn */
	IF(0x0C0B0C24u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0B0C26u, 2);  /* 0C0B0C24 mov.b @(r0,Rm),Rn */
	r0 = r4;  /* 0C0B0C26 mov Rm,Rn */
	T = (r0 & 0x26u) == 0;  /* 0C0B0C28 tst #imm,r0 */
	IF(0x0C0B0C2Au); r2 = T;  /* 0C0B0C2A movt Rn */
	T = (r0 & 0x62u) == 0;  /* 0C0B0C2C tst #imm,r0 */
	IF(0x0C0B0C2Eu); r8 = T;  /* 0C0B0C2E movt Rn */
	r2 |= r8;  /* 0C0B0C30 or Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0B0C32 tst Rm,Rn */
	if (T) { UPD(0x0C0B0C3Au, 10); goto L_0C0B0C3A; }  /* 0C0B0C34 bt */
L_0C0B0C36: BLKS(0x0C0B0C36u);
	{ IF(0x0C0B0C38u); ; /* slot nop */ UPD(0x0C0B0EA0u, 3); goto L_0C0B0EA0; }  /* 0C0B0C36 bra */
L_0C0B0C3A: BLKS(0x0C0B0C3Au);
	r0 = 0x8Cu; UPD(0x0C0B0C3Cu, 1);  /* 0C0B0C3A mov.w @(disp,pc),Rn */
	IF(0x0C0B0C3Cu); W32(r0 + r3, r2); UPD(0x0C0B0C3Eu, 1);  /* 0C0B0C3C mov.l Rm,@(r0,Rn) */
L_0C0B0C3E: BLKS(0x0C0B0C3Eu);
	r7 = 0xB4u; UPD(0x0C0B0C40u, 1);  /* 0C0B0C3E mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0B0C42u, 1);  /* 0C0B0C40 mov.l @Rm,Rn */
	IF(0x0C0B0C42u); MACL = r1 * r7;  /* 0C0B0C42 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0B0C46u, 3);  /* 0C0B0C44 mov.l @(disp,pc),Rn */
	IF(0x0C0B0C46u); r3 = MACL;  /* 0C0B0C46 sts macl,Rn */
	r3 += r6;  /* 0C0B0C48 add Rm,Rn */
	r6 = 0x9Fu; UPD(0x0C0B0C4Cu, 3);  /* 0C0B0C4A mov.w @(disp,pc),Rn */
	r6 += r3;  /* 0C0B0C4C add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B0C50u, 2);  /* 0C0B0C4E mov.b @Rm,Rn */
	r7 = r5 & 0xFF;  /* 0C0B0C50 extu.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0B0C52 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B0C5Cu, 5); goto L_0C0B0C5C; } goto L_0C0B0C58; }  /* 0C0B0C54 bf/s */
L_0C0B0C58: BLKS(0x0C0B0C58u);
	{ IF(0x0C0B0C5Au); ; /* slot nop */ UPD(0x0C0B0E10u, 4); goto L_0C0B0E10; }  /* 0C0B0C58 bra */
L_0C0B0C5C: BLKS(0x0C0B0C5Cu);
	T = r0 == 0x1u;  /* 0C0B0C5C cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B0BFCu, 4); goto L_0C0B0BFC; }  /* 0C0B0C5E bf */
L_0C0B0C60: BLKS(0x0C0B0C60u);
	r8 = 0xAu;  /* 0C0B0C60 mov #imm,Rn */
	r0 = 0xA0u; UPD(0x0C0B0C64u, 2);  /* 0C0B0C62 mov.w @(disp,pc),Rn */
	IF(0x0C0B0C64u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0B0C66u, 1);  /* 0C0B0C64 mov.b @(r0,Rm),Rn */
	r2 = r7 & 0xFF;  /* 0C0B0C66 extu.b Rm,Rn */
	T = r2 > r8;  /* 0C0B0C68 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B0BFCu, 5); goto L_0C0B0BFC; }  /* 0C0B0C6A bt */
L_0C0B0C6C: BLKS(0x0C0B0C6Cu);
	r0 = 0xC0B0C98u;  /* 0C0B0C6C mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B0C6E add Rm,Rn */
	IF(0x0C0B0C70u); r11 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B0C72u, 3);  /* 0C0B0C70 mov.w @(r0,Rm),Rn */
	IF(0x0C0B0C72u); { u32 tv_ = (r11 + 0x0C0B0C76u); u32 t_ = PHYS(tv_); IF(0x0C0B0C74u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0C72 braf Rn */
L_0C0B0DFE: BLKS(0x0C0B0DFEu);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0DFE bra */
L_0C0B0E10: BLKS(0x0C0B0E10u);
	r8 = 0xA0u; UPD(0x0C0B0E12u, 1);  /* 0C0B0E10 mov.w @(disp,pc),Rn */
	r8 += r3;  /* 0C0B0E12 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C0B0E16u, 2);  /* 0C0B0E14 mov.b @Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C0B0E16 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C0B0E18 cmp/eq #imm,r0 */
	{ u32 c_ = T; r11 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B0E70u, 5); goto L_0C0B0E70; } goto L_0C0B0E1E; }  /* 0C0B0E1A bt/s */
L_0C0B0E1E: BLKS(0x0C0B0E1Eu);
	T = (s32)r0 > (s32)r11;  /* 0C0B0E1E cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0B0E40u, 5); goto L_0C0B0E40; } goto L_0C0B0E24; }  /* 0C0B0E20 bt/s */
L_0C0B0E24: BLKS(0x0C0B0E24u);
	T = (r0 & r0) == 0;  /* 0C0B0E24 tst Rm,Rn */
	if (!T) { UPD(0x0C0B0DFEu, 5); goto L_0C0B0DFE; }  /* 0C0B0E26 bf */
L_0C0B0E28: BLKS(0x0C0B0E28u);
	r0 = R32(r3); UPD(0x0C0B0E2Au, 1);  /* 0C0B0E28 mov.l @Rm,Rn */
	r12 = 0x100u; UPD(0x0C0B0E2Cu, 1);  /* 0C0B0E2A mov.w @(disp,pc),Rn */
	T = (r0 & r12) == 0;  /* 0C0B0E2C tst Rm,Rn */
	if (T) { UPD(0x0C0B0DFEu, 4); goto L_0C0B0DFE; }  /* 0C0B0E2E bt */
L_0C0B0E30: BLKS(0x0C0B0E30u);
	r1 = r4;  /* 0C0B0E30 mov Rm,Rn */
	r1 += 0x1u;  /* 0C0B0E32 add #imm,Rn */
	W8(r8, r1); UPD(0x0C0B0E36u, 3);  /* 0C0B0E34 mov.b Rm,@Rn */
L_0C0B0E36: BLKS(0x0C0B0E36u);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0E36 bra */
L_0C0B0E40: BLKS(0x0C0B0E40u);
	if (!T) { UPD(0x0C0B0E36u, 3); goto L_0C0B0E36; }  /* 0C0B0E40 bf */
L_0C0B0E42: BLKS(0x0C0B0E42u);
	r4 = R32(r3); UPD(0x0C0B0E44u, 1);  /* 0C0B0E42 mov.l @Rm,Rn */
	r2 = r5;  /* 0C0B0E44 mov Rm,Rn */
	r1 = 0xDFFFFFFFu; UPD(0x0C0B0E48u, 2);  /* 0C0B0E46 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0B0E48 add #imm,Rn */
	r4 &= r1;  /* 0C0B0E4A and Rm,Rn */
	W32(r3, r4); UPD(0x0C0B0E4Eu, 3);  /* 0C0B0E4C mov.l Rm,@Rn */
	W8(r6, r2); UPD(0x0C0B0E50u, 1);  /* 0C0B0E4E mov.b Rm,@Rn */
	W8(r8, r7); UPD(0x0C0B0E52u, 1);  /* 0C0B0E50 mov.b Rm,@Rn */
L_0C0B0E52: BLKS(0x0C0B0E52u);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0E52 bra */
L_0C0B0E70: BLKS(0x0C0B0E70u);
	r5 = R32(r3 + 0x38u); UPD(0x0C0B0E72u, 1);  /* 0C0B0E70 mov.l @(disp,Rm),Rn */
	r9 = 0x10101u; UPD(0x0C0B0E74u, 1);  /* 0C0B0E72 mov.l @(disp,pc),Rn */
	r13 = 0x808080u; UPD(0x0C0B0E76u, 1);  /* 0C0B0E74 mov.l @(disp,pc),Rn */
	r5 += r9;  /* 0C0B0E76 add Rm,Rn */
	T = r5 == r13;  /* 0C0B0E78 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r3 + 0x38u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0B0E52u, 5); goto L_0C0B0E52; } UPD(0x0C0B0E7Eu, 1); goto L_0C0B0E7E; }  /* 0C0B0E7A bf/s */
L_0C0B0E7E: BLKS(0x0C0B0E7Eu);
	r10 = R32(r3); UPD(0x0C0B0E80u, 1);  /* 0C0B0E7E mov.l @Rm,Rn */
	r6 = 0x23000000u; UPD(0x0C0B0E82u, 1);  /* 0C0B0E80 mov.l @(disp,pc),Rn */
	r10 |= r6;  /* 0C0B0E82 or Rm,Rn */
	W32(r3, r10); UPD(0x0C0B0E86u, 2);  /* 0C0B0E84 mov.l Rm,@Rn */
	r3 = r8;  /* 0C0B0E86 mov Rm,Rn */
	r3 += 0x1u;  /* 0C0B0E88 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0B0E8Cu, 3);  /* 0C0B0E8A mov.b @Rm,Rn */
	r0 |= 0x3u;  /* 0C0B0E8C or #imm,r0 */
	{ W8(r3, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0B0E30u, 4); goto L_0C0B0E30; }  /* 0C0B0E8E bra */
L_0C0B0EA0: BLKS(0x0C0B0EA0u);
	r10 = 0xC0A9CB0u; UPD(0x0C0B0EA2u, 1);  /* 0C0B0EA0 mov.l @(disp,pc),Rn */
	IF(0x0C0B0EA2u); { u32 t_ = r10; PR = 0x0C0B0EA6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C0B0EA6u); }  /* 0C0B0EA2 jsr @Rn */
L_0C0B0EA6: BLKS(0x0C0B0EA6u);
	r9 = 0xC0A9B40u; UPD(0x0C0B0EA8u, 1);  /* 0C0B0EA6 mov.l @(disp,pc),Rn */
	IF(0x0C0B0EA8u); { u32 t_ = r9; PR = 0x0C0B0EACu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9B40, 0x0C0A9B40u, 0x0C0B0EACu); }  /* 0C0B0EA8 jsr @Rn */
L_0C0B0EAC: BLKS(0x0C0B0EACu);
	{ IF(0x0C0B0EAEu); ; /* slot nop */ UPD(0x0C0B0C3Eu, 3); goto L_0C0B0C3E; }  /* 0C0B0EAC bra */
L_0C0B0EB0: BLKS(0x0C0B0EB0u);
	r11 = 0xC0A9CB0u; UPD(0x0C0B0EB2u, 1);  /* 0C0B0EB0 mov.l @(disp,pc),Rn */
	r12 = 0xC2B07FCu; UPD(0x0C0B0EB4u, 1);  /* 0C0B0EB2 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0B0EB6u, 1);  /* 0C0B0EB4 mov.l @Rm,Rn */
	IF(0x0C0B0EB6u); { u32 t_ = r11; PR = 0x0C0B0EBAu; W32(r12, r13); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C0B0EBAu); }  /* 0C0B0EB6 jsr @Rn */
L_0C0B0EBA: BLKS(0x0C0B0EBAu);
	r10 = R32(r8); UPD(0x0C0B0EBCu, 1);  /* 0C0B0EBA mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0B0EBC tst Rm,Rn */
	if (!T) { UPD(0x0C0B0E52u, 4); goto L_0C0B0E52; }  /* 0C0B0EBE bf */
L_0C0B0EC0: BLKS(0x0C0B0EC0u);
	r12 = 0x0u;  /* 0C0B0EC0 mov #imm,Rn */
	r10 = 0xC069B20u; UPD(0x0C0B0EC4u, 2);  /* 0C0B0EC2 mov.l @(disp,pc),Rn */
	r11 = 0xC0BEE10u; UPD(0x0C0B0EC6u, 1);  /* 0C0B0EC4 mov.l @(disp,pc),Rn */
	r9 = r8;  /* 0C0B0EC6 mov Rm,Rn */
	UPD(0x0C0B0EC8u, 1);
L_0C0B0EC8: BLKS(0x0C0B0EC8u);
	r8 = 0xC0C2360u; UPD(0x0C0B0ECAu, 1);  /* 0C0B0EC8 mov.l @(disp,pc),Rn */
	r13 = 0xC062780u; UPD(0x0C0B0ECCu, 1);  /* 0C0B0ECA mov.l @(disp,pc),Rn */
	IF(0x0C0B0ECCu); { u32 t_ = r8; PR = 0x0C0B0ED0u; IF(0x0C0B0ECEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0B0ED0u); }  /* 0C0B0ECC jsr @Rn */
L_0C0B0ED0: BLKS(0x0C0B0ED0u);
	r1 = (u32)(s32)(s16)r0;  /* 0C0B0ED0 exts.w Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0B0ED4u, 2);  /* 0C0B0ED2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0B0ED4u); { u32 t_ = r13; PR = 0x0C0B0ED8u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0B0ED8u); }  /* 0C0B0ED4 jsr @Rn */
L_0C0B0ED8: BLKS(0x0C0B0ED8u);
	r8 = r0;  /* 0C0B0ED8 mov Rm,Rn */
	IF(0x0C0B0EDAu); r8 <<= 16;  /* 0C0B0EDA shll16 Rn */
	r5 = r8;  /* 0C0B0EDC mov Rm,Rn */
	IF(0x0C0B0EDEu); { u32 t_ = r10; PR = 0x0C0B0EE2u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLD(t_, 0x0C0B0EE2u); }  /* 0C0B0EDE jsr @Rn */
L_0C0B0EE2: BLKS(0x0C0B0EE2u);
	r5 = r8;  /* 0C0B0EE2 mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C0B0EE6u, 2);  /* 0C0B0EE4 mov.l @(disp,pc),Rn */
	r13 = R32(r9 + 0x24u); UPD(0x0C0B0EE8u, 1);  /* 0C0B0EE6 mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0B0EEAu, 1);  /* 0C0B0EE8 mov.l @(disp,Rm),Rn */
	IF(0x0C0B0EEAu); { u32 t_ = r8; PR = 0x0C0B0EEEu; r13 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0B0EEEu); }  /* 0C0B0EEA jsr @Rn */
L_0C0B0EEE: BLKS(0x0C0B0EEEu);
	r6 = R32(r9 + 0x28u); UPD(0x0C0B0EF0u, 1);  /* 0C0B0EEE mov.l @(disp,Rm),Rn */
	r4 = 0x14u;  /* 0C0B0EF0 mov #imm,Rn */
	r6 += r0;  /* 0C0B0EF2 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0B0EF6u, 3);  /* 0C0B0EF4 mov.w @(disp,pc),Rn */
	r5 = r13;  /* 0C0B0EF6 mov Rm,Rn */
	IF(0x0C0B0EF8u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0B0EFAu, 2);  /* 0C0B0EF8 mov.b @(r0,Rm),Rn */
	IF(0x0C0B0EFAu); { u32 t_ = r11; PR = 0x0C0B0EFEu; r7 = r3 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0B0EFEu); }  /* 0C0B0EFA jsr @Rn */
L_0C0B0EFE: BLKS(0x0C0B0EFEu);
	r2 = r12;  /* 0C0B0EFE mov Rm,Rn */
	r2 += 0x1u;  /* 0C0B0F00 add #imm,Rn */
	r12 = (u32)(s32)(s16)r2;  /* 0C0B0F02 exts.w Rm,Rn */
	r0 = 0xFu;  /* 0C0B0F04 mov #imm,Rn */
	T = (s32)r12 > (s32)r0;  /* 0C0B0F06 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B0EC8u, 8); goto L_0C0B0EC8; }  /* 0C0B0F08 bf */
L_0C0B0F0A: BLKS(0x0C0B0F0Au);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0F0A bra */
}

void blk_f_0C0B0BFC(sh3_t *c)
{
	LOCALS;
L_0C0B0BFC: BLKS(0x0C0B0BFCu);
	r14 += 0x44u;  /* 0C0B0BFC add #imm,Rn */
	r15 = r14;  /* 0C0B0BFE mov Rm,Rn */
	IF(0x0C0B0C00u); PR = R32(r15); r15 += 4; UPD(0x0C0B0C02u, 3);  /* 0C0B0C00 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0C04u, 1);  /* 0C0B0C02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0C06u, 1);  /* 0C0B0C04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0C08u, 1);  /* 0C0B0C06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0C0Au, 1);  /* 0C0B0C08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0C0Cu, 1);  /* 0C0B0C0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0C0Eu, 1);  /* 0C0B0C0C mov.l @Rm+,Rn */
	IF(0x0C0B0C0Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B0C0E rts */
}

void blk_f_0C0B0BFE(sh3_t *c)
{
	LOCALS;
L_0C0B0BFE: BLKS(0x0C0B0BFEu);
	r15 = r14;  /* 0C0B0BFE mov Rm,Rn */
	IF(0x0C0B0C00u); PR = R32(r15); r15 += 4; UPD(0x0C0B0C02u, 2);  /* 0C0B0C00 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0C04u, 1);  /* 0C0B0C02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0C06u, 1);  /* 0C0B0C04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0C08u, 1);  /* 0C0B0C06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0C0Au, 1);  /* 0C0B0C08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0C0Cu, 1);  /* 0C0B0C0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0C0Eu, 1);  /* 0C0B0C0C mov.l @Rm+,Rn */
	IF(0x0C0B0C0Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B0C0E rts */
}

void blk_f_0C0B0CB0(sh3_t *c)
{
	LOCALS;
	goto L_0C0B0CB0;
L_0C0B0BFE: BLKS(0x0C0B0BFEu);
	r15 = r14;  /* 0C0B0BFE mov Rm,Rn */
	IF(0x0C0B0C00u); PR = R32(r15); r15 += 4; UPD(0x0C0B0C02u, 2);  /* 0C0B0C00 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0C04u, 1);  /* 0C0B0C02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0C06u, 1);  /* 0C0B0C04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0C08u, 1);  /* 0C0B0C06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0C0Au, 1);  /* 0C0B0C08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0C0Cu, 1);  /* 0C0B0C0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0C0Eu, 1);  /* 0C0B0C0C mov.l @Rm+,Rn */
	IF(0x0C0B0C0Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B0C0E rts */
L_0C0B0CB0: BLKS(0x0C0B0CB0u);
	r6 = R32(r14); UPD(0x0C0B0CB2u, 1);  /* 0C0B0CB0 mov.l @Rm,Rn */
	r13 = 0xFFFFFF80u;  /* 0C0B0CB2 mov #imm,Rn */
	r10 = 0xB4u; UPD(0x0C0B0CB6u, 2);  /* 0C0B0CB4 mov.w @(disp,pc),Rn */
	IF(0x0C0B0CB6u); MACL = r6 * r10;  /* 0C0B0CB6 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0B0CBAu, 3);  /* 0C0B0CB8 mov.l @(disp,pc),Rn */
	IF(0x0C0B0CBAu); r2 = MACL;  /* 0C0B0CBA sts macl,Rn */
	r9 = 0xA0u; UPD(0x0C0B0CBEu, 2);  /* 0C0B0CBC mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0B0CBE add Rm,Rn */
	r2 += r9;  /* 0C0B0CC0 add Rm,Rn */
	r12 = r2;  /* 0C0B0CC2 mov Rm,Rn */
	r12 += 0x1u;  /* 0C0B0CC4 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r12); UPD(0x0C0B0CC8u, 5);  /* 0C0B0CC6 mov.b @Rm,Rn */
	r5 |= r13;  /* 0C0B0CC8 or Rm,Rn */
	W8(r12, r5); UPD(0x0C0B0CCCu, 2);  /* 0C0B0CCA mov.b Rm,@Rn */
	r12 += 0x1u;  /* 0C0B0CCC add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C0B0CD0u, 2);  /* 0C0B0CCE mov.b @Rm,Rn */
	r0 |= r13;  /* 0C0B0CD0 or Rm,Rn */
	W8(r12, r0); UPD(0x0C0B0CD4u, 2);  /* 0C0B0CD2 mov.b Rm,@Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B0CD6u, 1);  /* 0C0B0CD4 mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C0B0CD6 add #imm,Rn */
	W8(r2, r13); UPD(0x0C0B0CDAu, 2);  /* 0C0B0CD8 mov.b Rm,@Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0CDA bra */
}

void blk_f_0C0B0CE0(sh3_t *c)
{
	LOCALS;
	goto L_0C0B0CE0;
L_0C0B0BFE: BLKS(0x0C0B0BFEu);
	r15 = r14;  /* 0C0B0BFE mov Rm,Rn */
	IF(0x0C0B0C00u); PR = R32(r15); r15 += 4; UPD(0x0C0B0C02u, 2);  /* 0C0B0C00 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0C04u, 1);  /* 0C0B0C02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0C06u, 1);  /* 0C0B0C04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0C08u, 1);  /* 0C0B0C06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0C0Au, 1);  /* 0C0B0C08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0C0Cu, 1);  /* 0C0B0C0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0C0Eu, 1);  /* 0C0B0C0C mov.l @Rm+,Rn */
	IF(0x0C0B0C0Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B0C0E rts */
L_0C0B0CD8: BLKS(0x0C0B0CD8u);
	W8(r2, r13); UPD(0x0C0B0CDAu, 1);  /* 0C0B0CD8 mov.b Rm,@Rn */
L_0C0B0CDA: BLKS(0x0C0B0CDAu);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0CDA bra */
L_0C0B0CE0: BLKS(0x0C0B0CE0u);
	r2 = 0xB4u; UPD(0x0C0B0CE2u, 1);  /* 0C0B0CE0 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0B0CE4u, 1);  /* 0C0B0CE2 mov.l @Rm,Rn */
	IF(0x0C0B0CE4u); MACL = r1 * r2;  /* 0C0B0CE4 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0B0CE8u, 3);  /* 0C0B0CE6 mov.l @(disp,pc),Rn */
	IF(0x0C0B0CE8u); r2 = MACL;  /* 0C0B0CE8 sts macl,Rn */
	r8 = 0xA0u; UPD(0x0C0B0CECu, 2);  /* 0C0B0CEA mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C0B0CEC add Rm,Rn */
	r2 += r8;  /* 0C0B0CEE add Rm,Rn */
	r2 += 0x2u;  /* 0C0B0CF0 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B0CF4u, 4);  /* 0C0B0CF2 mov.b @Rm,Rn */
	r2 += 0xFFFFFFFEu;  /* 0C0B0CF4 add #imm,Rn */
	IF(0x0C0B0CF6u); T = (s32)r4 >= 0;  /* 0C0B0CF6 cmp/pz Rn */
	if (!T) { UPD(0x0C0B0CDAu, 5); goto L_0C0B0CDA; }  /* 0C0B0CF8 bf */
L_0C0B0CFA: BLKS(0x0C0B0CFAu);
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B0CFCu, 1);  /* 0C0B0CFA mov.b @Rm,Rn */
	{ r13 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0B0CD8u, 3); goto L_0C0B0CD8; }  /* 0C0B0CFC bra */
}

void blk_f_0C0B0D00(sh3_t *c)
{
	LOCALS;
	goto L_0C0B0D00;
L_0C0B0BFE: BLKS(0x0C0B0BFEu);
	r15 = r14;  /* 0C0B0BFE mov Rm,Rn */
	IF(0x0C0B0C00u); PR = R32(r15); r15 += 4; UPD(0x0C0B0C02u, 2);  /* 0C0B0C00 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0C04u, 1);  /* 0C0B0C02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0C06u, 1);  /* 0C0B0C04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0C08u, 1);  /* 0C0B0C06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0C0Au, 1);  /* 0C0B0C08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0C0Cu, 1);  /* 0C0B0C0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0C0Eu, 1);  /* 0C0B0C0C mov.l @Rm+,Rn */
	IF(0x0C0B0C0Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B0C0E rts */
L_0C0B0D00: BLKS(0x0C0B0D00u);
	r1 = R32(r14); UPD(0x0C0B0D02u, 1);  /* 0C0B0D00 mov.l @Rm,Rn */
	r8 = 0xFFFFFF80u;  /* 0C0B0D02 mov #imm,Rn */
	r3 = 0xB4u; UPD(0x0C0B0D06u, 2);  /* 0C0B0D04 mov.w @(disp,pc),Rn */
	IF(0x0C0B0D06u); MACL = r1 * r3;  /* 0C0B0D06 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0B0D0Au, 3);  /* 0C0B0D08 mov.l @(disp,pc),Rn */
	IF(0x0C0B0D0Au); r3 = MACL;  /* 0C0B0D0A sts macl,Rn */
	r2 = 0xA0u; UPD(0x0C0B0D0Eu, 2);  /* 0C0B0D0C mov.w @(disp,pc),Rn */
	r3 += r11;  /* 0C0B0D0E add Rm,Rn */
	r3 += r2;  /* 0C0B0D10 add Rm,Rn */
	r7 = r3;  /* 0C0B0D12 mov Rm,Rn */
	r6 = r3;  /* 0C0B0D14 mov Rm,Rn */
	r7 += 0x1u;  /* 0C0B0D16 add #imm,Rn */
	r6 += 0x2u;  /* 0C0B0D18 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B0D1Cu, 7);  /* 0C0B0D1A mov.b @Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r6); UPD(0x0C0B0D1Eu, 1);  /* 0C0B0D1C mov.b @Rm,Rn */
	r0 &= 0x7Fu;  /* 0C0B0D1E and #imm,r0 */
	r4 |= r8;  /* 0C0B0D20 or Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0B0D24u, 3);  /* 0C0B0D22 mov.b @Rm,Rn */
	W8(r7, r0); UPD(0x0C0B0D26u, 1);  /* 0C0B0D24 mov.b Rm,@Rn */
	r1 += 0x1u;  /* 0C0B0D26 add #imm,Rn */
	W8(r6, r4); UPD(0x0C0B0D2Au, 2);  /* 0C0B0D28 mov.b Rm,@Rn */
	W8(r3, r1); UPD(0x0C0B0D2Cu, 1);  /* 0C0B0D2A mov.b Rm,@Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0D2C bra */
}

void blk_f_0C0B0D2A(sh3_t *c)
{
	LOCALS;
	goto L_0C0B0D2A;
L_0C0B0BFE: BLKS(0x0C0B0BFEu);
	r15 = r14;  /* 0C0B0BFE mov Rm,Rn */
	IF(0x0C0B0C00u); PR = R32(r15); r15 += 4; UPD(0x0C0B0C02u, 2);  /* 0C0B0C00 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0C04u, 1);  /* 0C0B0C02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0C06u, 1);  /* 0C0B0C04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0C08u, 1);  /* 0C0B0C06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0C0Au, 1);  /* 0C0B0C08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0C0Cu, 1);  /* 0C0B0C0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0C0Eu, 1);  /* 0C0B0C0C mov.l @Rm+,Rn */
	IF(0x0C0B0C0Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B0C0E rts */
L_0C0B0D2A: BLKS(0x0C0B0D2Au);
	W8(r3, r1); UPD(0x0C0B0D2Cu, 1);  /* 0C0B0D2A mov.b Rm,@Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0D2C bra */
}

void blk_f_0C0B0D30(sh3_t *c)
{
	LOCALS;
	goto L_0C0B0D30;
L_0C0B0BFE: BLKS(0x0C0B0BFEu);
	r15 = r14;  /* 0C0B0BFE mov Rm,Rn */
	IF(0x0C0B0C00u); PR = R32(r15); r15 += 4; UPD(0x0C0B0C02u, 2);  /* 0C0B0C00 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0C04u, 1);  /* 0C0B0C02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0B0C06u, 1);  /* 0C0B0C04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0B0C08u, 1);  /* 0C0B0C06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B0C0Au, 1);  /* 0C0B0C08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B0C0Cu, 1);  /* 0C0B0C0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B0C0Eu, 1);  /* 0C0B0C0C mov.l @Rm+,Rn */
	IF(0x0C0B0C0Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B0C0E rts */
L_0C0B0CD4: BLKS(0x0C0B0CD4u);
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B0CD6u, 1);  /* 0C0B0CD4 mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C0B0CD6 add #imm,Rn */
	W8(r2, r13); UPD(0x0C0B0CDAu, 2);  /* 0C0B0CD8 mov.b Rm,@Rn */
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0CDA bra */
L_0C0B0D2C: BLKS(0x0C0B0D2Cu);
	{ r14 += 0x44u; /* slot add #imm,Rn */ UPD(0x0C0B0BFEu, 3); goto L_0C0B0BFE; }  /* 0C0B0D2C bra */
L_0C0B0D30: BLKS(0x0C0B0D30u);
	r0 = 0xB4u; UPD(0x0C0B0D32u, 1);  /* 0C0B0D30 mov.w @(disp,pc),Rn */
	r5 = R32(r14); UPD(0x0C0B0D34u, 1);  /* 0C0B0D32 mov.l @Rm,Rn */
	IF(0x0C0B0D34u); MACL = r5 * r0;  /* 0C0B0D34 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C0B0D38u, 3);  /* 0C0B0D36 mov.l @(disp,pc),Rn */
	IF(0x0C0B0D38u); r2 = MACL;  /* 0C0B0D38 sts macl,Rn */
	r12 = 0xA0u; UPD(0x0C0B0D3Cu, 2);  /* 0C0B0D3A mov.w @(disp,pc),Rn */
	r2 += r13;  /* 0C0B0D3C add Rm,Rn */
	r2 += r12;  /* 0C0B0D3E add Rm,Rn */
	r7 = r2;  /* 0C0B0D40 mov Rm,Rn */
	r7 += 0x2u;  /* 0C0B0D42 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C0B0D46u, 5);  /* 0C0B0D44 mov.b @Rm,Rn */
	IF(0x0C0B0D46u); T = (s32)r3 >= 0;  /* 0C0B0D46 cmp/pz Rn */
	if (!T) { UPD(0x0C0B0D2Cu, 4); goto L_0C0B0D2C; }  /* 0C0B0D48 bf */
L_0C0B0D4A: BLKS(0x0C0B0D4Au);
	r9 = r2;  /* 0C0B0D4A mov Rm,Rn */
	r9 += 0x1u;  /* 0C0B0D4C add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0B0D50u, 3);  /* 0C0B0D4E mov.b @Rm,Rn */
	r0 |= 0x40u;  /* 0C0B0D50 or #imm,r0 */
	W8(r9, r0); UPD(0x0C0B0D54u, 2);  /* 0C0B0D52 mov.b Rm,@Rn */
	r0 = r3;  /* 0C0B0D54 mov Rm,Rn */
	r0 |= 0x40u;  /* 0C0B0D56 or #imm,r0 */
	{ W8(r7, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0B0CD4u, 5); goto L_0C0B0CD4; }  /* 0C0B0D58 bra */
}


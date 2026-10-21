#include "recomp.h"
#include "recomp_funcs.h"

void f_0C0AF2C0(sh3_t *c)
{
	LOCALS;
L_0C0AF2C0: BLKS(0x0C0AF2C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF2C2u, 1);  /* 0C0AF2C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF2C4u, 1);  /* 0C0AF2C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF2C6u, 1);  /* 0C0AF2C4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF2C8u, 1);  /* 0C0AF2C6 mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C0AF2C8 mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF2CCu, 2);  /* 0C0AF2CA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0AF2CC exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF2D0u, 2);  /* 0C0AF2CE mov.l Rm,@-Rn */
	r4 = r11;  /* 0C0AF2D0 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF2D4u, 2);  /* 0C0AF2D2 mov.l Rm,@-Rn */
	r0 = 0xC0AEA10u; UPD(0x0C0AF2D6u, 1);  /* 0C0AF2D4 mov.l @(disp,pc),Rn */
	IF(0x0C0AF2D6u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF2D8u, 1);  /* 0C0AF2D6 sts.l pr,@-Rn */
	IF(0x0C0AF2D8u); { u32 t_ = r0; PR = 0x0C0AF2DCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AEA10, 0x0C0AEA10u, 0x0C0AF2DCu); }  /* 0C0AF2D8 jsr @Rn */
L_0C0AF2DC: BLKS(0x0C0AF2DCu);
	r0 = 0xC286298u; UPD(0x0C0AF2DEu, 1);  /* 0C0AF2DC mov.l @(disp,pc),Rn */
	r13 = 0xC223268u; UPD(0x0C0AF2E0u, 1);  /* 0C0AF2DE mov.l @(disp,pc),Rn */
	r9 = R32(r0); UPD(0x0C0AF2E2u, 1);  /* 0C0AF2E0 mov.l @Rm,Rn */
	IF(0x0C0AF2E2u); ;  /* 0C0AF2E2 nop */
	UPD(0x0C0AF2E4u, 1);
L_0C0AF2E4: BLKS(0x0C0AF2E4u);
	r1 = 0x140u; UPD(0x0C0AF2E6u, 1);  /* 0C0AF2E4 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0AF2E6 mov #imm,Rn */
	IF(0x0C0AF2E8u); MACL = r11 * r1;  /* 0C0AF2E8 mul.l Rm,Rn */
	r0 = 0xC21CCF8u; UPD(0x0C0AF2ECu, 4);  /* 0C0AF2EA mov.l @(disp,pc),Rn */
	r12 = 0x4Cu;  /* 0C0AF2EC mov #imm,Rn */
	IF(0x0C0AF2EEu); r8 = MACL;  /* 0C0AF2EE sts macl,Rn */
	r8 += r10;  /* 0C0AF2F0 add Rm,Rn */
	r8 += r8;  /* 0C0AF2F2 add Rm,Rn */
	IF(0x0C0AF2F4u); W16(r0 + r8, r3); UPD(0x0C0AF2F6u, 5);  /* 0C0AF2F4 mov.w Rm,@(r0,Rn) */
	IF(0x0C0AF2F6u); MACL = r11 * r12;  /* 0C0AF2F6 mul.l Rm,Rn */
	r2 = 0xC286298u; UPD(0x0C0AF2FAu, 3);  /* 0C0AF2F8 mov.l @(disp,pc),Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0AF2FCu, 1);  /* 0C0AF2FA mov.l @(disp,pc),Rn */
	IF(0x0C0AF2FCu); r12 = MACL;  /* 0C0AF2FC sts macl,Rn */
	r7 = 0xC058060u; UPD(0x0C0AF300u, 2);  /* 0C0AF2FE mov.l @(disp,pc),Rn */
	r0 += r12;  /* 0C0AF300 add Rm,Rn */
	r4 = R32(r2); UPD(0x0C0AF304u, 2);  /* 0C0AF302 mov.l @Rm,Rn */
	r0 += 0x48u;  /* 0C0AF304 add #imm,Rn */
	r4 += r10;  /* 0C0AF306 add Rm,Rn */
	IF(0x0C0AF308u); { u32 t_ = r7; PR = 0x0C0AF30Cu; r5 = R32(r0); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0AF30Cu); }  /* 0C0AF308 jsr @Rn */
L_0C0AF30C: BLKS(0x0C0AF30Cu);
	r6 = 0x10000u; UPD(0x0C0AF30Eu, 1);  /* 0C0AF30C mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C0AF30E add Rm,Rn */
	r9 += r6;  /* 0C0AF310 add Rm,Rn */
	r5 = r9;  /* 0C0AF312 mov Rm,Rn */
	r3 = r10;  /* 0C0AF314 mov Rm,Rn */
	IF(0x0C0AF316u); r5 >>= 16;  /* 0C0AF316 shlr16 Rn */
	r4 = r5 & 0xFF;  /* 0C0AF318 extu.b Rm,Rn */
	r0 = r8;  /* 0C0AF31A mov Rm,Rn */
	r3 += 0x1u;  /* 0C0AF31C add #imm,Rn */
	r2 = 0xEFu; UPD(0x0C0AF320u, 9);  /* 0C0AF31E mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r3;  /* 0C0AF320 exts.w Rm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C0AF322 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0AF326u); W16(r0 + r13, r4); /* slot mov.w Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0AF2E4u, 5); goto L_0C0AF2E4; } UPD(0x0C0AF328u, 1); goto L_0C0AF328; }  /* 0C0AF324 bf/s */
L_0C0AF328: BLKS(0x0C0AF328u);
	r3 = 0xC26CB28u; UPD(0x0C0AF32Au, 1);  /* 0C0AF328 mov.l @(disp,pc),Rn */
	r3 += r12;  /* 0C0AF32A add Rm,Rn */
	r2 = R32(r3); UPD(0x0C0AF32Eu, 2);  /* 0C0AF32C mov.l @Rm,Rn */
	r8 = 0x8000u; UPD(0x0C0AF330u, 1);  /* 0C0AF32E mov.l @(disp,pc),Rn */
	T = r2 == r8;  /* 0C0AF330 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0AF33Au, 4); goto L_0C0AF33A; }  /* 0C0AF332 bt */
L_0C0AF334: BLKS(0x0C0AF334u);
	r9 = 0x80u; UPD(0x0C0AF336u, 1);  /* 0C0AF334 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C0AF336 add Rm,Rn */
	W32(r3, r2); UPD(0x0C0AF33Au, 2);  /* 0C0AF338 mov.l Rm,@Rn */
L_0C0AF33A: BLKS(0x0C0AF33Au);
	r15 = r14;  /* 0C0AF33A mov Rm,Rn */
	IF(0x0C0AF33Cu); PR = R32(r15); r15 += 4; UPD(0x0C0AF33Eu, 2);  /* 0C0AF33C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF340u, 1);  /* 0C0AF33E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AF342u, 1);  /* 0C0AF340 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AF344u, 1);  /* 0C0AF342 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF346u, 1);  /* 0C0AF344 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF348u, 1);  /* 0C0AF346 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF34Au, 1);  /* 0C0AF348 mov.l @Rm+,Rn */
	IF(0x0C0AF34Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF34A rts */
}

void f_0C0AF380(sh3_t *c)
{
	LOCALS;
L_0C0AF380: BLKS(0x0C0AF380u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF382u, 1);  /* 0C0AF380 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF384u, 1);  /* 0C0AF382 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF386u, 1);  /* 0C0AF384 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF388u, 1);  /* 0C0AF386 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0AF388 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF38Cu, 2);  /* 0C0AF38A mov.l Rm,@-Rn */
	r4 = r10;  /* 0C0AF38C mov Rm,Rn */
	r6 = 0xC0AE310u; UPD(0x0C0AF390u, 2);  /* 0C0AF38E mov.l @(disp,pc),Rn */
	IF(0x0C0AF390u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF392u, 1);  /* 0C0AF390 sts.l pr,@-Rn */
	IF(0x0C0AF392u); { u32 t_ = r6; PR = 0x0C0AF396u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AE310, 0x0C0AE310u, 0x0C0AF396u); }  /* 0C0AF392 jsr @Rn */
L_0C0AF396: BLKS(0x0C0AF396u);
	r5 = 0x4Cu;  /* 0C0AF396 mov #imm,Rn */
	IF(0x0C0AF398u); MACL = r10 * r5;  /* 0C0AF398 mul.l Rm,Rn */
	r9 = 0xC26CAE0u; UPD(0x0C0AF39Cu, 4);  /* 0C0AF39A mov.l @(disp,pc),Rn */
	IF(0x0C0AF39Cu); r5 = MACL;  /* 0C0AF39C sts macl,Rn */
	r5 += r9;  /* 0C0AF39E add Rm,Rn */
	r9 = R32(r5); UPD(0x0C0AF3A2u, 3);  /* 0C0AF3A0 mov.l @Rm,Rn */
	r5 += 0x3Cu;  /* 0C0AF3A2 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r2 = v_; } UPD(0x0C0AF3A6u, 2);  /* 0C0AF3A4 mov.b @Rm+,Rn */
	r7 = 0xC392AF4u; UPD(0x0C0AF3A8u, 1);  /* 0C0AF3A6 mov.l @(disp,pc),Rn */
	r3 = r2 & 0xFF;  /* 0C0AF3A8 extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r0 = v_; } UPD(0x0C0AF3ACu, 2);  /* 0C0AF3AA mov.b @Rm+,Rn */
	IF(0x0C0AF3ACu); r3 <<= 16;  /* 0C0AF3AC shll16 Rn */
	r4 = 0x2000000u; UPD(0x0C0AF3B0u, 2);  /* 0C0AF3AE mov.l @(disp,pc),Rn */
	r11 = r0 & 0xFF;  /* 0C0AF3B0 extu.b Rm,Rn */
	r6 = R32(r7); UPD(0x0C0AF3B4u, 2);  /* 0C0AF3B2 mov.l @Rm,Rn */
	r9 &= r4;  /* 0C0AF3B4 and Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r7 = v_; } UPD(0x0C0AF3B8u, 2);  /* 0C0AF3B6 mov.b @Rm+,Rn */
	r9 |= r3;  /* 0C0AF3B8 or Rm,Rn */
	IF(0x0C0AF3BAu); r11 <<= 8;  /* 0C0AF3BA shll8 Rn */
	r0 = 0xC392D5Cu; UPD(0x0C0AF3BEu, 3);  /* 0C0AF3BC mov.l @(disp,pc),Rn */
	r9 |= r11;  /* 0C0AF3BE or Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r3 = v_; } UPD(0x0C0AF3C2u, 2);  /* 0C0AF3C0 mov.b @Rm+,Rn */
	r4 = r7 & 0xFF;  /* 0C0AF3C2 extu.b Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AF3C6u, 2);  /* 0C0AF3C4 mov.b @Rm,Rn */
	r7 = r3 & 0xFF;  /* 0C0AF3C6 extu.b Rm,Rn */
	r9 |= r4;  /* 0C0AF3C8 or Rm,Rn */
	r4 = r11 & 0xFF;  /* 0C0AF3CA extu.b Rm,Rn */
	r3 = 0xC283CB2u; UPD(0x0C0AF3CEu, 4);  /* 0C0AF3CC mov.l @(disp,pc),Rn */
	IF(0x0C0AF3CEu); MACL = r7 * r4;  /* 0C0AF3CE mul.l Rm,Rn */
	r2 = 0x11000000u; UPD(0x0C0AF3D2u, 3);  /* 0C0AF3D0 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r1 = v_; } UPD(0x0C0AF3D4u, 1);  /* 0C0AF3D2 mov.b @Rm+,Rn */
	r9 |= r2;  /* 0C0AF3D4 or Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AF3D8u, 2);  /* 0C0AF3D6 mov.b @Rm,Rn */
	r11 = r1 & 0xFF;  /* 0C0AF3D8 extu.b Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0AF3DA extu.b Rm,Rn */
	IF(0x0C0AF3DCu); r2 = MACL;  /* 0C0AF3DC sts macl,Rn */
	IF(0x0C0AF3DEu); MACL = r11 * r7;  /* 0C0AF3DE mul.l Rm,Rn */
	r0 = 0xC392B09u; UPD(0x0C0AF3E2u, 6);  /* 0C0AF3E0 mov.l @(disp,pc),Rn */
	r2 += r2;  /* 0C0AF3E2 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r5); UPD(0x0C0AF3E6u, 2);  /* 0C0AF3E4 mov.b @Rm,Rn */
	IF(0x0C0AF3E6u); r3 = MACL;  /* 0C0AF3E6 sts macl,Rn */
	r11 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AF3EAu, 2);  /* 0C0AF3E8 mov.b @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0AF3EA extu.b Rm,Rn */
	r5 = r11 & 0xFF;  /* 0C0AF3EC extu.b Rm,Rn */
	IF(0x0C0AF3EEu); MACL = r7 * r5;  /* 0C0AF3EE mul.l Rm,Rn */
	IF(0x0C0AF3F0u); r2 >>= 8;  /* 0C0AF3F0 shlr8 Rn */
	r3 += r3;  /* 0C0AF3F2 add Rm,Rn */
	r4 = r2 & 0xFF;  /* 0C0AF3F4 extu.b Rm,Rn */
	IF(0x0C0AF3F6u); r3 >>= 8;  /* 0C0AF3F6 shlr8 Rn */
	r2 = r3 & 0xFF;  /* 0C0AF3F8 extu.b Rm,Rn */
	IF(0x0C0AF3FAu); r3 = MACL;  /* 0C0AF3FA sts macl,Rn */
	r1 = 0xFFFFFFF9u;  /* 0C0AF3FC mov #imm,Rn */
	IF(0x0C0AF3FEu); ARG0(0x431Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C0AF3FE shad Rm,Rn */
	IF(0x0C0AF400u); r4 <<= 16;  /* 0C0AF400 shll16 Rn */
	IF(0x0C0AF402u); r2 <<= 8;  /* 0C0AF402 shll8 Rn */
	r0 = r3 & 0xFF;  /* 0C0AF404 extu.b Rm,Rn */
	r4 += r2;  /* 0C0AF406 add Rm,Rn */
	r4 += r0;  /* 0C0AF408 add Rm,Rn */
	r0 = 0x140u; UPD(0x0C0AF40Cu, 18);  /* 0C0AF40A mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0AF40C mov #imm,Rn */
	IF(0x0C0AF40Eu); MACL = r10 * r0;  /* 0C0AF40E mul.l Rm,Rn */
	r11 = 0xC21CCF8u; UPD(0x0C0AF412u, 4);  /* 0C0AF410 mov.l @(disp,pc),Rn */
	r10 = 0xC223268u; UPD(0x0C0AF414u, 1);  /* 0C0AF412 mov.l @(disp,pc),Rn */
	IF(0x0C0AF414u); r0 = MACL; UPD(0x0C0AF416u, 1);  /* 0C0AF414 sts macl,Rn */
	r8 = 0xC21CCF4u; UPD(0x0C0AF418u, 1);  /* 0C0AF416 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0AF418 add Rm,Rn */
	IF(0x0C0AF41Au); ;  /* 0C0AF41A nop */
	UPD(0x0C0AF41Cu, 2);
L_0C0AF41C: BLKS(0x0C0AF41Cu);
	IF(0x0C0AF41Cu); r7 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C0AF41Eu, 1);  /* 0C0AF41C mov.w @(r0,Rm),Rn */
	r1 = 0xFFE0u; UPD(0x0C0AF420u, 1);  /* 0C0AF41E mov.l @(disp,pc),Rn */
	r3 = 0x3E0u; UPD(0x0C0AF422u, 1);  /* 0C0AF420 mov.w @(disp,pc),Rn */
	r1 &= r7;  /* 0C0AF422 and Rm,Rn */
	r1 += r3;  /* 0C0AF424 add Rm,Rn */
	IF(0x0C0AF426u); r2 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C0AF428u, 3);  /* 0C0AF426 mov.w @(r0,Rm),Rn */
	IF(0x0C0AF428u); r1 <<= 16;  /* 0C0AF428 shll16 Rn */
	r3 = 0x88u; UPD(0x0C0AF42Cu, 2);  /* 0C0AF42A mov.w @(disp,pc),Rn */
	r0 += 0x2u;  /* 0C0AF42C add #imm,Rn */
	W32(r6, r9); UPD(0x0C0AF430u, 2);  /* 0C0AF42E mov.l Rm,@Rn */
	r2 += r3;  /* 0C0AF430 add Rm,Rn */
	r6 += 0x4u;  /* 0C0AF432 add #imm,Rn */
	r1 |= r2;  /* 0C0AF434 or Rm,Rn */
	W32(r6, r1); UPD(0x0C0AF438u, 4);  /* 0C0AF436 mov.l Rm,@Rn */
	r3 = R32(r8); UPD(0x0C0AF43Au, 1);  /* 0C0AF438 mov.l @Rm,Rn */
	r6 += 0x4u;  /* 0C0AF43A add #imm,Rn */
	r3 -= r7;  /* 0C0AF43C sub Rm,Rn */
	r7 = 0xC283CA8u; UPD(0x0C0AF440u, 3);  /* 0C0AF43E mov.l @(disp,pc),Rn */
	IF(0x0C0AF440u); r3 <<= 16;  /* 0C0AF440 shll16 Rn */
	r2 = R32(r7); UPD(0x0C0AF444u, 2);  /* 0C0AF442 mov.l @Rm,Rn */
	r2 += r5;  /* 0C0AF444 add Rm,Rn */
	r3 |= r2;  /* 0C0AF446 or Rm,Rn */
	W32(r6, r3); UPD(0x0C0AF44Au, 3);  /* 0C0AF448 mov.l Rm,@Rn */
	r2 = r5;  /* 0C0AF44A mov Rm,Rn */
	r7 = 0x1600000u; UPD(0x0C0AF44Eu, 2);  /* 0C0AF44C mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C0AF44E add #imm,Rn */
	W32(r6, r7); UPD(0x0C0AF452u, 2);  /* 0C0AF450 mov.l Rm,@Rn */
	r2 += 0x1u;  /* 0C0AF452 add #imm,Rn */
	r6 += 0x4u;  /* 0C0AF454 add #imm,Rn */
	W32(r6, r4); UPD(0x0C0AF458u, 3);  /* 0C0AF456 mov.l Rm,@Rn */
	r5 = (u32)(s32)(s16)r2;  /* 0C0AF458 exts.w Rm,Rn */
	r3 = 0xEFu; UPD(0x0C0AF45Cu, 2);  /* 0C0AF45A mov.w @(disp,pc),Rn */
	T = (s32)r5 > (s32)r3;  /* 0C0AF45C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AF41Cu, 4); goto L_0C0AF41C; } goto L_0C0AF462; }  /* 0C0AF45E bf/s */
L_0C0AF462: BLKS(0x0C0AF462u);
	r10 = 0xC0000001u; UPD(0x0C0AF464u, 2);  /* 0C0AF462 mov.l @(disp,pc),Rn */
	W32(r6, r10); UPD(0x0C0AF466u, 1);  /* 0C0AF464 mov.l Rm,@Rn */
	r8 = 0xC392AF4u; UPD(0x0C0AF468u, 1);  /* 0C0AF466 mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C0AF468 add #imm,Rn */
	W32(r8, r6); UPD(0x0C0AF46Cu, 2);  /* 0C0AF46A mov.l Rm,@Rn */
	r15 = r14;  /* 0C0AF46C mov Rm,Rn */
	IF(0x0C0AF46Eu); PR = R32(r15); r15 += 4; UPD(0x0C0AF470u, 2);  /* 0C0AF46E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF472u, 1);  /* 0C0AF470 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF474u, 1);  /* 0C0AF472 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF476u, 1);  /* 0C0AF474 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF478u, 1);  /* 0C0AF476 mov.l @Rm+,Rn */
	IF(0x0C0AF478u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF478 rts */
}

void f_0C0AF4C0(sh3_t *c)
{
	LOCALS;
L_0C0AF4C0: BLKS(0x0C0AF4C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF4C2u, 1);  /* 0C0AF4C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF4C4u, 1);  /* 0C0AF4C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF4C6u, 1);  /* 0C0AF4C4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AF4C6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF4CAu, 2);  /* 0C0AF4C8 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0AF4CA mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF4CEu, 2);  /* 0C0AF4CC mov.l Rm,@-Rn */
	r7 = 0xC0AE8F0u; UPD(0x0C0AF4D0u, 1);  /* 0C0AF4CE mov.l @(disp,pc),Rn */
	IF(0x0C0AF4D0u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF4D2u, 1);  /* 0C0AF4D0 sts.l pr,@-Rn */
	IF(0x0C0AF4D2u); { u32 t_ = r7; PR = 0x0C0AF4D6u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AE8F0, 0x0C0AE8F0u, 0x0C0AF4D6u); }  /* 0C0AF4D2 jsr @Rn */
L_0C0AF4D6: BLKS(0x0C0AF4D6u);
	r6 = 0x4Cu;  /* 0C0AF4D6 mov #imm,Rn */
	IF(0x0C0AF4D8u); MACL = r9 * r6;  /* 0C0AF4D8 mul.l Rm,Rn */
	r4 = 0xC26CAE0u; UPD(0x0C0AF4DCu, 4);  /* 0C0AF4DA mov.l @(disp,pc),Rn */
	IF(0x0C0AF4DCu); r6 = MACL;  /* 0C0AF4DC sts macl,Rn */
	r6 += r4;  /* 0C0AF4DE add Rm,Rn */
	r4 = R32(r6); UPD(0x0C0AF4E2u, 3);  /* 0C0AF4E0 mov.l @Rm,Rn */
	r6 += 0x3Cu;  /* 0C0AF4E2 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r5 = v_; } UPD(0x0C0AF4E6u, 2);  /* 0C0AF4E4 mov.b @Rm+,Rn */
	r10 = 0xC392AF4u; UPD(0x0C0AF4E8u, 1);  /* 0C0AF4E6 mov.l @(disp,pc),Rn */
	r2 = r5 & 0xFF;  /* 0C0AF4E8 extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r0 = v_; } UPD(0x0C0AF4ECu, 2);  /* 0C0AF4EA mov.b @Rm+,Rn */
	IF(0x0C0AF4ECu); r2 <<= 16;  /* 0C0AF4EC shll16 Rn */
	r3 = 0x2000000u; UPD(0x0C0AF4F0u, 2);  /* 0C0AF4EE mov.l @(disp,pc),Rn */
	r7 = R32(r10); UPD(0x0C0AF4F2u, 1);  /* 0C0AF4F0 mov.l @Rm,Rn */
	r4 &= r3;  /* 0C0AF4F2 and Rm,Rn */
	r10 = r0 & 0xFF;  /* 0C0AF4F4 extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r3 = v_; } UPD(0x0C0AF4F8u, 3);  /* 0C0AF4F6 mov.b @Rm+,Rn */
	r4 |= r2;  /* 0C0AF4F8 or Rm,Rn */
	IF(0x0C0AF4FAu); r10 <<= 8;  /* 0C0AF4FA shll8 Rn */
	r0 = 0xC392D5Cu; UPD(0x0C0AF4FEu, 3);  /* 0C0AF4FC mov.l @(disp,pc),Rn */
	r4 |= r10;  /* 0C0AF4FE or Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r1 = v_; } UPD(0x0C0AF502u, 2);  /* 0C0AF500 mov.b @Rm+,Rn */
	r5 = r3 & 0xFF;  /* 0C0AF502 extu.b Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AF506u, 2);  /* 0C0AF504 mov.b @Rm,Rn */
	r4 |= r5;  /* 0C0AF506 or Rm,Rn */
	r3 = r1 & 0xFF;  /* 0C0AF508 extu.b Rm,Rn */
	r5 = r10 & 0xFF;  /* 0C0AF50A extu.b Rm,Rn */
	r0 = 0xC283CB2u; UPD(0x0C0AF50Eu, 4);  /* 0C0AF50C mov.l @(disp,pc),Rn */
	IF(0x0C0AF50Eu); MACL = r3 * r5;  /* 0C0AF50E mul.l Rm,Rn */
	r2 = 0x11000000u; UPD(0x0C0AF512u, 3);  /* 0C0AF510 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r1 = v_; } UPD(0x0C0AF514u, 1);  /* 0C0AF512 mov.b @Rm+,Rn */
	r4 |= r2;  /* 0C0AF514 or Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AF518u, 2);  /* 0C0AF516 mov.b @Rm,Rn */
	r3 = r1 & 0xFF;  /* 0C0AF518 extu.b Rm,Rn */
	r0 = r10 & 0xFF;  /* 0C0AF51A extu.b Rm,Rn */
	IF(0x0C0AF51Cu); r2 = MACL;  /* 0C0AF51C sts macl,Rn */
	IF(0x0C0AF51Eu); MACL = r3 * r0;  /* 0C0AF51E mul.l Rm,Rn */
	r2 += r2;  /* 0C0AF520 add Rm,Rn */
	IF(0x0C0AF522u); r2 >>= 8;  /* 0C0AF522 shlr8 Rn */
	IF(0x0C0AF524u); r10 = MACL;  /* 0C0AF524 sts macl,Rn */
	r3 = 0xC392B09u; UPD(0x0C0AF528u, 9);  /* 0C0AF526 mov.l @(disp,pc),Rn */
	r10 += r10;  /* 0C0AF528 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r6); UPD(0x0C0AF52Cu, 2);  /* 0C0AF52A mov.b @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C0AF52C extu.b Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AF530u, 2);  /* 0C0AF52E mov.b @Rm,Rn */
	IF(0x0C0AF530u); r10 >>= 8;  /* 0C0AF530 shlr8 Rn */
	r2 = r10 & 0xFF;  /* 0C0AF532 extu.b Rm,Rn */
	r10 = r1 & 0xFF;  /* 0C0AF534 extu.b Rm,Rn */
	r6 = r0 & 0xFF;  /* 0C0AF536 extu.b Rm,Rn */
	IF(0x0C0AF538u); MACL = r10 * r6;  /* 0C0AF538 mul.l Rm,Rn */
	r11 = 0x140u; UPD(0x0C0AF53Cu, 7);  /* 0C0AF53A mov.w @(disp,pc),Rn */
	r1 = 0xFFFFFFF9u;  /* 0C0AF53C mov #imm,Rn */
	IF(0x0C0AF53Eu); r3 = MACL;  /* 0C0AF53E sts macl,Rn */
	IF(0x0C0AF540u); MACL = r9 * r11;  /* 0C0AF540 mul.l Rm,Rn */
	IF(0x0C0AF542u); ARG0(0x431Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C0AF542 shad Rm,Rn */
	IF(0x0C0AF544u); r5 <<= 16;  /* 0C0AF544 shll16 Rn */
	IF(0x0C0AF546u); r2 <<= 8;  /* 0C0AF546 shll8 Rn */
	r10 = 0xC21CCF8u; UPD(0x0C0AF54Au, 8);  /* 0C0AF548 mov.l @(disp,pc),Rn */
	r5 += r2;  /* 0C0AF54A add Rm,Rn */
	r9 = 0xC21CCF4u; UPD(0x0C0AF54Eu, 2);  /* 0C0AF54C mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C0AF54E extu.b Rm,Rn */
	r5 += r0;  /* 0C0AF550 add Rm,Rn */
	r6 = 0x0u;  /* 0C0AF552 mov #imm,Rn */
	IF(0x0C0AF554u); r8 = MACL; UPD(0x0C0AF556u, 4);  /* 0C0AF554 sts macl,Rn */
	IF(0x0C0AF556u); ;  /* 0C0AF556 nop */
	UPD(0x0C0AF558u, 1);
L_0C0AF558: BLKS(0x0C0AF558u);
	r0 = r6;  /* 0C0AF558 mov Rm,Rn */
	r0 &= 0x3Fu;  /* 0C0AF55A and #imm,r0 */
	r0 += r8;  /* 0C0AF55C add Rm,Rn */
	r0 += r0;  /* 0C0AF55E add Rm,Rn */
	IF(0x0C0AF560u); r3 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C0AF562u, 5);  /* 0C0AF560 mov.w @(r0,Rm),Rn */
	r0 = 0xFFE0u; UPD(0x0C0AF564u, 1);  /* 0C0AF562 mov.l @(disp,pc),Rn */
	r2 = 0x3E0u; UPD(0x0C0AF566u, 1);  /* 0C0AF564 mov.w @(disp,pc),Rn */
	r0 &= r3;  /* 0C0AF566 and Rm,Rn */
	r0 += r2;  /* 0C0AF568 add Rm,Rn */
	r2 = 0x88u; UPD(0x0C0AF56Cu, 3);  /* 0C0AF56A mov.w @(disp,pc),Rn */
	IF(0x0C0AF56Cu); r0 <<= 16;  /* 0C0AF56C shll16 Rn */
	W32(r7, r4); UPD(0x0C0AF570u, 2);  /* 0C0AF56E mov.l Rm,@Rn */
	r2 += r6;  /* 0C0AF570 add Rm,Rn */
	r0 |= r2;  /* 0C0AF572 or Rm,Rn */
	r7 += 0x4u;  /* 0C0AF574 add #imm,Rn */
	W32(r7, r0); UPD(0x0C0AF578u, 4);  /* 0C0AF576 mov.l Rm,@Rn */
	r0 = r3;  /* 0C0AF578 mov Rm,Rn */
	r2 = R32(r9); UPD(0x0C0AF57Cu, 2);  /* 0C0AF57A mov.l @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0AF57C and #imm,r0 */
	r1 = 0xC283CA8u; UPD(0x0C0AF580u, 2);  /* 0C0AF57E mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C0AF580 sub Rm,Rn */
	r0 = R32(r1); UPD(0x0C0AF584u, 2);  /* 0C0AF582 mov.l @Rm,Rn */
	IF(0x0C0AF584u); r2 <<= 16;  /* 0C0AF584 shll16 Rn */
	r0 += r6;  /* 0C0AF586 add Rm,Rn */
	r2 |= r0;  /* 0C0AF588 or Rm,Rn */
	r7 += 0x4u;  /* 0C0AF58A add #imm,Rn */
	W32(r7, r2); UPD(0x0C0AF58Eu, 5);  /* 0C0AF58C mov.l Rm,@Rn */
	r0 = 0x1Cu;  /* 0C0AF58E mov #imm,Rn */
	r2 = 0x143u; UPD(0x0C0AF592u, 2);  /* 0C0AF590 mov.w @(disp,pc),Rn */
	r3 &= r0;  /* 0C0AF592 and Rm,Rn */
	r3 += r2;  /* 0C0AF594 add Rm,Rn */
	r7 += 0x4u;  /* 0C0AF596 add #imm,Rn */
	IF(0x0C0AF598u); r3 <<= 16;  /* 0C0AF598 shll16 Rn */
	W32(r7, r3); UPD(0x0C0AF59Cu, 5);  /* 0C0AF59A mov.l Rm,@Rn */
	r0 = r6;  /* 0C0AF59C mov Rm,Rn */
	r7 += 0x4u;  /* 0C0AF59E add #imm,Rn */
	W32(r7, r5); UPD(0x0C0AF5A2u, 3);  /* 0C0AF5A0 mov.l Rm,@Rn */
	r0 += 0x1u;  /* 0C0AF5A2 add #imm,Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C0AF5A4 exts.w Rm,Rn */
	T = (s32)r6 >= (s32)r11;  /* 0C0AF5A6 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AF558u, 6); goto L_0C0AF558; } goto L_0C0AF5AC; }  /* 0C0AF5A8 bf/s */
L_0C0AF5AC: BLKS(0x0C0AF5ACu);
	r8 = 0xC392AF4u; UPD(0x0C0AF5AEu, 2);  /* 0C0AF5AC mov.l @(disp,pc),Rn */
	W32(r8, r7); UPD(0x0C0AF5B0u, 1);  /* 0C0AF5AE mov.l Rm,@Rn */
	r15 = r14;  /* 0C0AF5B0 mov Rm,Rn */
	IF(0x0C0AF5B2u); PR = R32(r15); r15 += 4; UPD(0x0C0AF5B4u, 2);  /* 0C0AF5B2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF5B6u, 1);  /* 0C0AF5B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF5B8u, 1);  /* 0C0AF5B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF5BAu, 1);  /* 0C0AF5B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF5BCu, 1);  /* 0C0AF5BA mov.l @Rm+,Rn */
	IF(0x0C0AF5BCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF5BC rts */
}

/* FUN_0c0af600 */
void f_0C0AF600(sh3_t *c)
{
	LOCALS;
L_0C0AF600: BLKS(0x0C0AF600u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF602u, 1);  /* 0C0AF600 mov.l Rm,@-Rn */
	r7 = 0x0u;  /* 0C0AF602 mov #imm,Rn */
	r5 = 0xC26CAE0u; UPD(0x0C0AF606u, 2);  /* 0C0AF604 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF606 mov Rm,Rn */
	r4 = 0xC2864B8u; UPD(0x0C0AF60Au, 2);  /* 0C0AF608 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0AF60A mov #imm,Rn */
	r6 = 0x7u;  /* 0C0AF60C mov #imm,Rn */
	IF(0x0C0AF60Eu); ;  /* 0C0AF60E nop */
	UPD(0x0C0AF610u, 3);
L_0C0AF610: BLKS(0x0C0AF610u);
	r2 = r3;  /* 0C0AF610 mov Rm,Rn */
	r2 += r5;  /* 0C0AF612 add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0AF616u, 3);  /* 0C0AF614 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AF616 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x42u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AF62Eu, 4); goto L_0C0AF62E; } goto L_0C0AF61C; }  /* 0C0AF618 bt/s */
L_0C0AF61C: BLKS(0x0C0AF61Cu);
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AF61Eu, 2);  /* 0C0AF61C mov.b @Rm,Rn */
	r1 = 0x1Fu;  /* 0C0AF61E mov #imm,Rn */
	r1 &= r0;  /* 0C0AF620 and Rm,Rn */
	r1 += r1;  /* 0C0AF622 add Rm,Rn */
	r0 = r1;  /* 0C0AF624 mov Rm,Rn */
	r0 += r4;  /* 0C0AF626 add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C0AF62Au, 6);  /* 0C0AF628 mov.w @Rm,Rn */
	r2 += 0x1u;  /* 0C0AF62A add #imm,Rn */
	W16(r0, r2); UPD(0x0C0AF62Eu, 2);  /* 0C0AF62C mov.w Rm,@Rn */
L_0C0AF62E: BLKS(0x0C0AF62Eu);
	r2 = r7;  /* 0C0AF62E mov Rm,Rn */
	r2 += 0x1u;  /* 0C0AF630 add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C0AF632 exts.w Rm,Rn */
	T = (s32)r7 > (s32)r6;  /* 0C0AF634 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AF610u, 7); goto L_0C0AF610; } goto L_0C0AF63A; }  /* 0C0AF636 bf/s */
L_0C0AF63A: BLKS(0x0C0AF63Au);
	r15 = r14;  /* 0C0AF63A mov Rm,Rn */
	IF(0x0C0AF63Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF63C rts */
}

/* FUN_0c0af650 */
void f_0C0AF650(sh3_t *c)
{
	LOCALS;
L_0C0AF650: BLKS(0x0C0AF650u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF652u, 1);  /* 0C0AF650 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF654u, 1);  /* 0C0AF652 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0AF654 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF658u, 2);  /* 0C0AF656 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0AF658 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF65Cu, 2);  /* 0C0AF65A mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C0AF65C exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF660u, 2);  /* 0C0AF65E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF662u, 1);  /* 0C0AF660 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF664u, 1);  /* 0C0AF662 mov.l Rm,@-Rn */
	r11 = 0xC26CAE0u; UPD(0x0C0AF666u, 1);  /* 0C0AF664 mov.l @(disp,pc),Rn */
	IF(0x0C0AF666u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF668u, 1);  /* 0C0AF666 sts.l pr,@-Rn */
	r13 = 0xC21CA10u; UPD(0x0C0AF66Au, 1);  /* 0C0AF668 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF66A mov Rm,Rn */
	r12 = 0xC1F5200u; UPD(0x0C0AF66Eu, 2);  /* 0C0AF66C mov.l @(disp,pc),Rn */
	IF(0x0C0AF66Eu); ;  /* 0C0AF66E nop */
	UPD(0x0C0AF670u, 1);
L_0C0AF670: BLKS(0x0C0AF670u);
	r3 = r9;  /* 0C0AF670 mov Rm,Rn */
	r3 += r11;  /* 0C0AF672 add Rm,Rn */
	r0 = R32(r3); UPD(0x0C0AF676u, 3);  /* 0C0AF674 mov.l @Rm,Rn */
	r3 += 0x42u;  /* 0C0AF676 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AF67Au, 2);  /* 0C0AF678 mov.b @Rm,Rn */
	IF(0x0C0AF67Au); r0 >>= 16;  /* 0C0AF67A shlr16 Rn */
	r2 = r4 & 0xFF;  /* 0C0AF67C extu.b Rm,Rn */
	IF(0x0C0AF67Eu); r0 <<= 2;  /* 0C0AF67E shll2 Rn */
	T = r2 == r10;  /* 0C0AF680 cmp/eq Rm,Rn */
	IF(0x0C0AF682u); r0 >>= 16;  /* 0C0AF682 shlr16 Rn */
	IF(0x0C0AF684u); r2 = T;  /* 0C0AF684 movt Rn */
	r0 &= 0x1u;  /* 0C0AF686 and #imm,r0 */
	r0 &= r2;  /* 0C0AF688 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AF68A tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFBEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AF6B2u, 12); goto L_0C0AF6B2; } goto L_0C0AF690; }  /* 0C0AF68C bt/s */
L_0C0AF690: BLKS(0x0C0AF690u);
	r2 = 0xC392AF4u; UPD(0x0C0AF692u, 2);  /* 0C0AF690 mov.l @(disp,pc),Rn */
	r4 = 0xC392DD8u; UPD(0x0C0AF694u, 1);  /* 0C0AF692 mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C0AF696u, 1);  /* 0C0AF694 mov.l @Rm,Rn */
	r7 = R32(r4); UPD(0x0C0AF698u, 1);  /* 0C0AF696 mov.l @Rm,Rn */
	r6 -= r7;  /* 0C0AF698 sub Rm,Rn */
	IF(0x0C0AF69Au); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C0AF69A shar Rn */
	r5 = R32(r13); UPD(0x0C0AF69Eu, 3);  /* 0C0AF69C mov.l @Rm,Rn */
	IF(0x0C0AF69Eu); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C0AF69E shar Rn */
	r0 = 0x2803u; UPD(0x0C0AF6A2u, 2);  /* 0C0AF6A0 mov.w @(disp,pc),Rn */
	r5 -= r6;  /* 0C0AF6A2 sub Rm,Rn */
	T = (s32)r5 > (s32)r0;  /* 0C0AF6A4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AF6C0u, 5); goto L_0C0AF6C0; }  /* 0C0AF6A6 bf */
L_0C0AF6A8: BLKS(0x0C0AF6A8u);
	r0 = R32(r3 + 0x4u); UPD(0x0C0AF6AAu, 1);  /* 0C0AF6A8 mov.l @(disp,Rm),Rn */
	IF(0x0C0AF6AAu); r0 <<= 2;  /* 0C0AF6AA shll2 Rn */
	IF(0x0C0AF6ACu); r3 = R32(r0 + r12); UPD(0x0C0AF6AEu, 2);  /* 0C0AF6AC mov.l @(r0,Rm),Rn */
	IF(0x0C0AF6AEu); { u32 t_ = r3; PR = 0x0C0AF6B2u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0AF6B2u); }  /* 0C0AF6AE jsr @Rn */
L_0C0AF6B2: BLKS(0x0C0AF6B2u);
	r5 = r8;  /* 0C0AF6B2 mov Rm,Rn */
	r5 += 0x1u;  /* 0C0AF6B4 add #imm,Rn */
	r8 = (u32)(s32)(s16)r5;  /* 0C0AF6B6 exts.w Rm,Rn */
	r0 = 0x7u;  /* 0C0AF6B8 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C0AF6BA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AF670u, 8); goto L_0C0AF670; } UPD(0x0C0AF6C0u, 1); goto L_0C0AF6C0; }  /* 0C0AF6BC bf/s */
L_0C0AF6C0: BLKS(0x0C0AF6C0u);
	r15 = r14;  /* 0C0AF6C0 mov Rm,Rn */
	IF(0x0C0AF6C2u); PR = R32(r15); r15 += 4; UPD(0x0C0AF6C4u, 2);  /* 0C0AF6C2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF6C6u, 1);  /* 0C0AF6C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AF6C8u, 1);  /* 0C0AF6C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AF6CAu, 1);  /* 0C0AF6C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF6CCu, 1);  /* 0C0AF6CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF6CEu, 1);  /* 0C0AF6CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF6D0u, 1);  /* 0C0AF6CE mov.l @Rm+,Rn */
	IF(0x0C0AF6D0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF6D0 rts */
}

/* FUN_0c0af770 */
void f_0C0AF770(sh3_t *c)
{
	LOCALS;
L_0C0AF770: BLKS(0x0C0AF770u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF772u, 1);  /* 0C0AF770 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF774u, 1);  /* 0C0AF772 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0AF774 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF778u, 2);  /* 0C0AF776 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0AF778 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF77Cu, 2);  /* 0C0AF77A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF77Eu, 1);  /* 0C0AF77C mov.l Rm,@-Rn */
	r10 = 0xC26CAE0u; UPD(0x0C0AF780u, 1);  /* 0C0AF77E mov.l @(disp,pc),Rn */
	IF(0x0C0AF780u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF782u, 1);  /* 0C0AF780 sts.l pr,@-Rn */
	r11 = 0xC057F60u; UPD(0x0C0AF784u, 1);  /* 0C0AF782 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF784 mov Rm,Rn */
	IF(0x0C0AF786u); ;  /* 0C0AF786 nop */
	UPD(0x0C0AF788u, 2);
L_0C0AF788: BLKS(0x0C0AF788u);
	r2 = r9;  /* 0C0AF788 mov Rm,Rn */
	r2 += r10;  /* 0C0AF78A add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0AF78Eu, 3);  /* 0C0AF78C mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AF78E tst Rm,Rn */
	if (!T) { UPD(0x0C0AF7B0u, 4); goto L_0C0AF7B0; }  /* 0C0AF790 bf */
L_0C0AF792: BLKS(0x0C0AF792u);
	r2 = r8;  /* 0C0AF792 mov Rm,Rn */
	UPD(0x0C0AF794u, 1);
L_0C0AF794: BLKS(0x0C0AF794u);
	r2 += 0x1u;  /* 0C0AF794 add #imm,Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C0AF796 exts.w Rm,Rn */
	r0 = 0x7u;  /* 0C0AF798 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C0AF79A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AF788u, 7); goto L_0C0AF788; } goto L_0C0AF7A0; }  /* 0C0AF79C bf/s */
L_0C0AF7A0: BLKS(0x0C0AF7A0u);
	r15 = r14;  /* 0C0AF7A0 mov Rm,Rn */
	IF(0x0C0AF7A2u); PR = R32(r15); r15 += 4; UPD(0x0C0AF7A4u, 3);  /* 0C0AF7A2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF7A6u, 1);  /* 0C0AF7A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF7A8u, 1);  /* 0C0AF7A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF7AAu, 1);  /* 0C0AF7A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF7ACu, 1);  /* 0C0AF7AA mov.l @Rm+,Rn */
	IF(0x0C0AF7ACu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF7AC rts */
L_0C0AF7B0: BLKS(0x0C0AF7B0u);
	r4 = r8;  /* 0C0AF7B0 mov Rm,Rn */
	r4 += 0x8u;  /* 0C0AF7B2 add #imm,Rn */
	IF(0x0C0AF7B4u); { u32 t_ = r11; PR = 0x0C0AF7B8u; r5 = R32(r2 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C057F60, 0x0C057F60u, 0x0C0AF7B8u); }  /* 0C0AF7B4 jsr @Rn */
L_0C0AF7B8: BLKS(0x0C0AF7B8u);
	{ r2 = r8; /* slot mov Rm,Rn */ UPD(0x0C0AF794u, 3); goto L_0C0AF794; }  /* 0C0AF7B8 bra */
}

/* FUN_0c0af7d0 */
void f_0C0AF7D0(sh3_t *c)
{
	LOCALS;
L_0C0AF7D0: BLKS(0x0C0AF7D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF7D2u, 1);  /* 0C0AF7D0 mov.l Rm,@-Rn */
	r7 = r4 & 0xFF;  /* 0C0AF7D2 extu.b Rm,Rn */
	r6 = 0xFFu; UPD(0x0C0AF7D6u, 2);  /* 0C0AF7D4 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF7D6 mov Rm,Rn */
	r3 = 0xC3929B0u; UPD(0x0C0AF7DAu, 2);  /* 0C0AF7D8 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0AF7DA mov #imm,Rn */
	r0 = 0x3u;  /* 0C0AF7DC mov #imm,Rn */
	r2 = 0x7u;  /* 0C0AF7DE mov #imm,Rn */
	UPD(0x0C0AF7E0u, 3);
L_0C0AF7E0: BLKS(0x0C0AF7E0u);
	IF(0x0C0AF7E0u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF7E2u, 1);  /* 0C0AF7E0 mov.b @(r0,Rm),Rn */
	r4 = r1 & 0xFF;  /* 0C0AF7E2 extu.b Rm,Rn */
	T = r4 == r7;  /* 0C0AF7E4 cmp/eq Rm,Rn */
	{ u32 c_ = T; r4 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AF830u, 5); goto L_0C0AF830; } goto L_0C0AF7EA; }  /* 0C0AF7E6 bt/s */
L_0C0AF7EA: BLKS(0x0C0AF7EAu);
	r4 += 0x1u;  /* 0C0AF7EA add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0AF7EC extu.b Rm,Rn */
	T = r0 > r2;  /* 0C0AF7EE cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0AF7E0u, 7); goto L_0C0AF7E0; }  /* 0C0AF7F0 bf */
L_0C0AF7F2: BLKS(0x0C0AF7F2u);
	r0 = 0x3u;  /* 0C0AF7F2 mov #imm,Rn */
	r3 = 0xC3929C8u; UPD(0x0C0AF7F6u, 2);  /* 0C0AF7F4 mov.l @(disp,pc),Rn */
	r2 = 0x7u;  /* 0C0AF7F6 mov #imm,Rn */
	UPD(0x0C0AF7F8u, 1);
L_0C0AF7F8: BLKS(0x0C0AF7F8u);
	IF(0x0C0AF7F8u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF7FAu, 1);  /* 0C0AF7F8 mov.b @(r0,Rm),Rn */
	r1 = r4 & 0xFF;  /* 0C0AF7FA extu.b Rm,Rn */
	T = r1 >= r6;  /* 0C0AF7FC cmp/hs Rm,Rn */
	{ u32 c_ = T; r4 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AF808u, 5); goto L_0C0AF808; } goto L_0C0AF802; }  /* 0C0AF7FE bt/s */
L_0C0AF802: BLKS(0x0C0AF802u);
	r6 = r1;  /* 0C0AF802 mov Rm,Rn */
	r5 = r0;  /* 0C0AF804 mov Rm,Rn */
	r4 = r0;  /* 0C0AF806 mov Rm,Rn */
	UPD(0x0C0AF808u, 4);
L_0C0AF808: BLKS(0x0C0AF808u);
	r4 += 0x1u;  /* 0C0AF808 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0AF80A extu.b Rm,Rn */
	T = r0 > r2;  /* 0C0AF80C cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0AF7F8u, 6); goto L_0C0AF7F8; }  /* 0C0AF80E bf */
L_0C0AF810: BLKS(0x0C0AF810u);
	r3 = 0xC3929C8u; UPD(0x0C0AF812u, 1);  /* 0C0AF810 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C0AF812 mov Rm,Rn */
	IF(0x0C0AF814u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0AF816u, 2);  /* 0C0AF814 mov.b @(r0,Rm),Rn */
	r2 = 0xC283648u; UPD(0x0C0AF818u, 1);  /* 0C0AF816 mov.l @(disp,pc),Rn */
	r3 = r4 & 0xFF;  /* 0C0AF818 extu.b Rm,Rn */
	r0 = r2;  /* 0C0AF81A mov Rm,Rn */
	IF(0x0C0AF81Cu); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0AF81Eu, 3);  /* 0C0AF81C mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C0AF81E extu.b Rm,Rn */
	T = r3 > r0;  /* 0C0AF820 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r0 = (u32)(s32)(s8)r5; /* slot exts.b Rm,Rn */ if (c_) { UPD(0x0C0AF828u, 5); goto L_0C0AF828; } goto L_0C0AF826; }  /* 0C0AF822 bf/s */
L_0C0AF826: BLKS(0x0C0AF826u);
	r0 = 0x0u;  /* 0C0AF826 mov #imm,Rn */
	UPD(0x0C0AF828u, 2);
L_0C0AF828: BLKS(0x0C0AF828u);
	r15 = r14;  /* 0C0AF828 mov Rm,Rn */
	IF(0x0C0AF82Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AF82A rts */
L_0C0AF830: BLKS(0x0C0AF830u);
	{ r0 = (u32)(s32)(s8)r0; /* slot exts.b Rm,Rn */ UPD(0x0C0AF828u, 3); goto L_0C0AF828; }  /* 0C0AF830 bra */
}

/* FUN_0c0af850 */
void f_0C0AF850(sh3_t *c)
{
	LOCALS;
L_0C0AF850: BLKS(0x0C0AF850u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF852u, 1);  /* 0C0AF850 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF854u, 1);  /* 0C0AF852 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF856u, 1);  /* 0C0AF854 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF858u, 1);  /* 0C0AF856 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF85Au, 1);  /* 0C0AF858 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF85Cu, 1);  /* 0C0AF85A mov.l Rm,@-Rn */
	r0 = 0xC21F5CCu; UPD(0x0C0AF85Eu, 1);  /* 0C0AF85C mov.l @(disp,pc),Rn */
	IF(0x0C0AF85Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0AF860u, 1);  /* 0C0AF85E sts.l pr,@-Rn */
	r3 = R32(r0); UPD(0x0C0AF862u, 1);  /* 0C0AF860 mov.l @Rm,Rn */
	r0 = 0x98765432u; UPD(0x0C0AF864u, 1);  /* 0C0AF862 mov.l @(disp,pc),Rn */
	T = r3 == r0;  /* 0C0AF864 cmp/eq Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AF880u, 4); goto L_0C0AF880; } UPD(0x0C0AF86Au, 1); goto L_0C0AF86A; }  /* 0C0AF866 bt/s */
L_0C0AF86A: BLKS(0x0C0AF86Au);
	r15 = r14;  /* 0C0AF86A mov Rm,Rn */
	IF(0x0C0AF86Cu); PR = R32(r15); r15 += 4; UPD(0x0C0AF86Eu, 2);  /* 0C0AF86C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF870u, 1);  /* 0C0AF86E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AF872u, 1);  /* 0C0AF870 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF874u, 1);  /* 0C0AF872 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF876u, 1);  /* 0C0AF874 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF878u, 1);  /* 0C0AF876 mov.l @Rm+,Rn */
	IF(0x0C0AF878u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF878 rts */
L_0C0AF880: BLKS(0x0C0AF880u);
	r11 = 0xC04E470u; UPD(0x0C0AF882u, 1);  /* 0C0AF880 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C0AF882 mov #imm,Rn */
	r10 = 0xC3929B0u; UPD(0x0C0AF886u, 2);  /* 0C0AF884 mov.l @(disp,pc),Rn */
	r9 = 0xC27DC24u; UPD(0x0C0AF888u, 1);  /* 0C0AF886 mov.l @(disp,pc),Rn */
L_0C0AF888: BLKS(0x0C0AF888u);
	IF(0x0C0AF888u); { u32 t_ = r11; PR = 0x0C0AF88Cu; r4 = r8 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04E470, 0x0C04E470u, 0x0C0AF88Cu); }  /* 0C0AF888 jsr @Rn */
L_0C0AF88C: BLKS(0x0C0AF88Cu);
	r2 = R32(r0); UPD(0x0C0AF88Eu, 1);  /* 0C0AF88C mov.l @Rm,Rn */
	W32(r9, r2); UPD(0x0C0AF890u, 1);  /* 0C0AF88E mov.l Rm,@Rn */
	r0 += 0x7u;  /* 0C0AF890 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AF894u, 2);  /* 0C0AF892 mov.b @Rm,Rn */
	r9 += 0x4u;  /* 0C0AF894 add #imm,Rn */
	r0 = r10;  /* 0C0AF896 mov Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AF898 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0AF89Cu); W8(r0 + r8, r4); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0AF8A4u, 6); goto L_0C0AF8A4; } UPD(0x0C0AF89Eu, 1); goto L_0C0AF89E; }  /* 0C0AF89A bf/s */
L_0C0AF89E: BLKS(0x0C0AF89Eu);
	r5 = 0xC3929C8u; UPD(0x0C0AF8A0u, 1);  /* 0C0AF89E mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0AF8A0 mov Rm,Rn */
	IF(0x0C0AF8A2u); W8(r0 + r8, r2); UPD(0x0C0AF8A4u, 2);  /* 0C0AF8A2 mov.b Rm,@(r0,Rn) */
L_0C0AF8A4: BLKS(0x0C0AF8A4u);
	r6 = r8;  /* 0C0AF8A4 mov Rm,Rn */
	r6 += 0x1u;  /* 0C0AF8A6 add #imm,Rn */
	r8 = (u32)(s32)(s16)r6;  /* 0C0AF8A8 exts.w Rm,Rn */
	r2 = 0x7u;  /* 0C0AF8AA mov #imm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C0AF8AC cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AF888u, 8); goto L_0C0AF888; }  /* 0C0AF8AE bf */
L_0C0AF8B0: BLKS(0x0C0AF8B0u);
	r8 = 0x0u;  /* 0C0AF8B0 mov #imm,Rn */
	IF(0x0C0AF8B2u); ;  /* 0C0AF8B2 nop */
	UPD(0x0C0AF8B4u, 2);
L_0C0AF8B4: BLKS(0x0C0AF8B4u);
	r2 = 0xC283544u; UPD(0x0C0AF8B6u, 1);  /* 0C0AF8B4 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C0AF8B6 mov Rm,Rn */
	IF(0x0C0AF8B8u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF8BAu, 2);  /* 0C0AF8B8 mov.b @(r0,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0AF8BA tst Rm,Rn */
	{ u32 c_ = T; r2 += r8; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0AF8C4u, 4); goto L_0C0AF8C4; } goto L_0C0AF8C0; }  /* 0C0AF8BC bt/s */
L_0C0AF8C0: BLKS(0x0C0AF8C0u);
	r1 += 0xFFFFFFFFu;  /* 0C0AF8C0 add #imm,Rn */
	W8(r2, r1); UPD(0x0C0AF8C4u, 3);  /* 0C0AF8C2 mov.b Rm,@Rn */
L_0C0AF8C4: BLKS(0x0C0AF8C4u);
	r9 = 0xC275444u; UPD(0x0C0AF8C6u, 1);  /* 0C0AF8C4 mov.l @(disp,pc),Rn */
	r7 = 0x7u;  /* 0C0AF8C6 mov #imm,Rn */
	r0 = r9;  /* 0C0AF8C8 mov Rm,Rn */
	IF(0x0C0AF8CAu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF8CCu, 3);  /* 0C0AF8CA mov.b @(r0,Rm),Rn */
	T = r9 > r7;  /* 0C0AF8CC cmp/hi Rm,Rn */
	{ u32 c_ = !T; r1 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AF8D6u, 4); goto L_0C0AF8D6; } goto L_0C0AF8D2; }  /* 0C0AF8CE bf/s */
L_0C0AF8D2: BLKS(0x0C0AF8D2u);
	{ IF(0x0C0AF8D4u); ; /* slot nop */ UPD(0x0C0AF9D0u, 4); goto L_0C0AF9D0; }  /* 0C0AF8D2 bra */
L_0C0AF8D6: BLKS(0x0C0AF8D6u);
	r0 = 0xC0AF900u;  /* 0C0AF8D6 mova @(disp,pc),r0 */
	IF(0x0C0AF8D8u); r10 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C0AF8DAu, 2);  /* 0C0AF8D8 mov.b @(r0,Rm),Rn */
	r10 = r10 & 0xFF;  /* 0C0AF8DA extu.b Rm,Rn */
	IF(0x0C0AF8DCu); { u32 tv_ = (r10 + 0x0C0AF8E0u); u32 t_ = PHYS(tv_); IF(0x0C0AF8DEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0AF910u: goto L_0C0AF910; case 0x0C0AF93Au: goto L_0C0AF93A; case 0x0C0AF980u: goto L_0C0AF980; default: JUMPD(tv_); } }  /* 0C0AF8DC braf Rn */
L_0C0AF910: BLKS(0x0C0AF910u);
	r12 = 0xC283544u; UPD(0x0C0AF912u, 1);  /* 0C0AF910 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0AF912 mov Rm,Rn */
	IF(0x0C0AF914u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF916u, 2);  /* 0C0AF914 mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C0AF916 tst Rm,Rn */
	r11 = 0xC3929C8u; UPD(0x0C0AF91Au, 2);  /* 0C0AF918 mov.l @(disp,pc),Rn */
	IF(0x0C0AF91Au); r4 = T;  /* 0C0AF91A movt Rn */
	r0 = r11;  /* 0C0AF91C mov Rm,Rn */
	IF(0x0C0AF91Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AF920u, 3);  /* 0C0AF91E mov.b @(r0,Rm),Rn */
	r10 = 0xC283648u; UPD(0x0C0AF922u, 1);  /* 0C0AF920 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C0AF922 mov Rm,Rn */
	IF(0x0C0AF924u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF926u, 2);  /* 0C0AF924 mov.b @(r0,Rm),Rn */
	T = r2 >= r5;  /* 0C0AF926 cmp/hs Rm,Rn */
	IF(0x0C0AF928u); r3 = T;  /* 0C0AF928 movt Rn */
	r4 &= r3;  /* 0C0AF92A and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0AF92C tst Rm,Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AF950u, 7); goto L_0C0AF950; } UPD(0x0C0AF932u, 1); goto L_0C0AF932; }  /* 0C0AF92E bf/s */
L_0C0AF932: BLKS(0x0C0AF932u);
	r10 = 0xC275444u; UPD(0x0C0AF934u, 1);  /* 0C0AF932 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0AF934 mov #imm,Rn */
	r0 = r10;  /* 0C0AF936 mov Rm,Rn */
	IF(0x0C0AF938u); W8(r0 + r8, r9); UPD(0x0C0AF93Au, 3);  /* 0C0AF938 mov.b Rm,@(r0,Rn) */
L_0C0AF93A: BLKS(0x0C0AF93Au);
	r9 = r8;  /* 0C0AF93A mov Rm,Rn */
	r9 += 0x1u;  /* 0C0AF93C add #imm,Rn */
	r12 = 0xFFu; UPD(0x0C0AF940u, 3);  /* 0C0AF93E mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r9;  /* 0C0AF940 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r12;  /* 0C0AF942 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AF8B4u, 5); goto L_0C0AF8B4; }  /* 0C0AF944 bf */
L_0C0AF946: BLKS(0x0C0AF946u);
	{ IF(0x0C0AF948u); ; /* slot nop */ UPD(0x0C0AF86Au, 3); goto L_0C0AF86A; }  /* 0C0AF946 bra */
L_0C0AF950: BLKS(0x0C0AF950u);
	r4 = 0xC275444u; UPD(0x0C0AF952u, 1);  /* 0C0AF950 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C0AF952 mov Rm,Rn */
	IF(0x0C0AF954u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF956u, 2);  /* 0C0AF954 mov.b @(r0,Rm),Rn */
	r3 = 0xC3929E4u; UPD(0x0C0AF958u, 1);  /* 0C0AF956 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C0AF958 extu.b Rm,Rn */
	r0 = r3;  /* 0C0AF95A mov Rm,Rn */
	IF(0x0C0AF95Cu); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF95Eu, 3);  /* 0C0AF95C mov.b @(r0,Rm),Rn */
	r5 = r8 & 0xFF;  /* 0C0AF95E extu.b Rm,Rn */
	r0 = 0xC04E49Cu; UPD(0x0C0AF962u, 2);  /* 0C0AF960 mov.l @(disp,pc),Rn */
	IF(0x0C0AF962u); { u32 t_ = r0; PR = 0x0C0AF966u; r6 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04E49C, 0x0C04E49Cu, 0x0C0AF966u); }  /* 0C0AF962 jsr @Rn */
L_0C0AF966: BLKS(0x0C0AF966u);
	r7 = 0xC285F58u; UPD(0x0C0AF968u, 1);  /* 0C0AF966 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0AF968 mov Rm,Rn */
	IF(0x0C0AF96Au); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF96Cu, 2);  /* 0C0AF96A mov.b @(r0,Rm),Rn */
	r0 = r12;  /* 0C0AF96C mov Rm,Rn */
	IF(0x0C0AF96Eu); W8(r0 + r8, r6); UPD(0x0C0AF970u, 2);  /* 0C0AF96E mov.b Rm,@(r0,Rn) */
	r0 = r10;  /* 0C0AF970 mov Rm,Rn */
	IF(0x0C0AF972u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF974u, 2);  /* 0C0AF972 mov.b @(r0,Rm),Rn */
	r0 = r11;  /* 0C0AF974 mov Rm,Rn */
	{ IF(0x0C0AF978u); W8(r0 + r9, r12); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0AF932u, 4); goto L_0C0AF932; }  /* 0C0AF976 bra */
L_0C0AF980: BLKS(0x0C0AF980u);
	r12 = 0xC275444u; UPD(0x0C0AF982u, 1);  /* 0C0AF980 mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C0AF982 mov #imm,Rn */
	r0 = r12;  /* 0C0AF984 mov Rm,Rn */
	IF(0x0C0AF986u); W8(r0 + r8, r11); UPD(0x0C0AF988u, 3);  /* 0C0AF986 mov.b Rm,@(r0,Rn) */
	r11 = 0xC283544u; UPD(0x0C0AF98Au, 1);  /* 0C0AF988 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C0AF98A mov Rm,Rn */
	IF(0x0C0AF98Cu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF98Eu, 2);  /* 0C0AF98C mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0AF98E tst Rm,Rn */
	{ u32 c_ = !T; r10 = r8 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C0AF93Au, 4); goto L_0C0AF93A; } goto L_0C0AF994; }  /* 0C0AF990 bf/s */
L_0C0AF994: BLKS(0x0C0AF994u);
	r9 = 0xC0AF7D0u; UPD(0x0C0AF996u, 2);  /* 0C0AF994 mov.l @(disp,pc),Rn */
	IF(0x0C0AF996u); { u32 t_ = r9; PR = 0x0C0AF99Au; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AF7D0, 0x0C0AF7D0u, 0x0C0AF99Au); }  /* 0C0AF996 jsr @Rn */
L_0C0AF99A: BLKS(0x0C0AF99Au);
	T = (r0 & r0) == 0;  /* 0C0AF99A tst Rm,Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AF93Au, 4); goto L_0C0AF93A; } goto L_0C0AF9A0; }  /* 0C0AF99C bt/s */
L_0C0AF9A0: BLKS(0x0C0AF9A0u);
	r2 = 0xC3929E4u; UPD(0x0C0AF9A2u, 2);  /* 0C0AF9A0 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFF;  /* 0C0AF9A2 extu.b Rm,Rn */
	r0 = r2;  /* 0C0AF9A4 mov Rm,Rn */
	IF(0x0C0AF9A6u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF9A8u, 3);  /* 0C0AF9A6 mov.b @(r0,Rm),Rn */
	r5 = r10;  /* 0C0AF9A8 mov Rm,Rn */
	r0 = 0xC04E49Cu; UPD(0x0C0AF9ACu, 2);  /* 0C0AF9AA mov.l @(disp,pc),Rn */
	r6 = r1 & 0xFF;  /* 0C0AF9AC extu.b Rm,Rn */
	IF(0x0C0AF9AEu); { u32 t_ = r0; PR = 0x0C0AF9B2u; r7 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04E49C, 0x0C04E49Cu, 0x0C0AF9B2u); }  /* 0C0AF9AE jsr @Rn */
L_0C0AF9B2: BLKS(0x0C0AF9B2u);
	r4 = 0xC285F58u; UPD(0x0C0AF9B4u, 1);  /* 0C0AF9B2 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C0AF9B4 mov Rm,Rn */
	IF(0x0C0AF9B6u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF9B8u, 2);  /* 0C0AF9B6 mov.b @(r0,Rm),Rn */
	r0 = r11;  /* 0C0AF9B8 mov Rm,Rn */
	IF(0x0C0AF9BAu); W8(r0 + r8, r5); UPD(0x0C0AF9BCu, 2);  /* 0C0AF9BA mov.b Rm,@(r0,Rn) */
	r3 = 0xC283648u; UPD(0x0C0AF9BEu, 1);  /* 0C0AF9BC mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C0AF9BE mov Rm,Rn */
	IF(0x0C0AF9C0u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF9C2u, 2);  /* 0C0AF9C0 mov.b @(r0,Rm),Rn */
	r7 = 0xC3929C8u; UPD(0x0C0AF9C4u, 1);  /* 0C0AF9C2 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0AF9C4 mov Rm,Rn */
	{ IF(0x0C0AF9C8u); W8(r0 + r9, r6); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0AF93Au, 4); goto L_0C0AF93A; }  /* 0C0AF9C6 bra */
L_0C0AF9D0: BLKS(0x0C0AF9D0u);
	r11 = 0xC21F7F8u; UPD(0x0C0AF9D2u, 1);  /* 0C0AF9D0 mov.l @(disp,pc),Rn */
	r10 = 0xC21CCEDu; UPD(0x0C0AF9D4u, 1);  /* 0C0AF9D2 mov.l @(disp,pc),Rn */
	W8(r11, r9); UPD(0x0C0AF9D6u, 1);  /* 0C0AF9D4 mov.b Rm,@Rn */
	{ W8(r10, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C0AF93Au, 3); goto L_0C0AF93A; }  /* 0C0AF9D6 bra */
}

/* FUN_0c0afa10 */
void f_0C0AFA10(sh3_t *c)
{
	LOCALS;
L_0C0AFA10: BLKS(0x0C0AFA10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA12u, 1);  /* 0C0AFA10 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0AFA12 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA16u, 2);  /* 0C0AFA14 mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C0AFA16 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA1Au, 2);  /* 0C0AFA18 mov.l Rm,@-Rn */
	r2 = 0x7u;  /* 0C0AFA1A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA1Eu, 2);  /* 0C0AFA1C mov.l Rm,@-Rn */
	r7 = 0xC3929C8u; UPD(0x0C0AFA20u, 1);  /* 0C0AFA1E mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA22u, 1);  /* 0C0AFA20 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C0AFA22 mov Rm,Rn */
	r4 = r0;  /* 0C0AFA24 mov Rm,Rn */
	UPD(0x0C0AFA26u, 2);
L_0C0AFA26: BLKS(0x0C0AFA26u);
	IF(0x0C0AFA26u); W8(r0 + r7, r3); UPD(0x0C0AFA28u, 1);  /* 0C0AFA26 mov.b Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C0AFA28 add #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C0AFA2A exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C0AFA2C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AFA26u, 6); goto L_0C0AFA26; } goto L_0C0AFA32; }  /* 0C0AFA2E bf/s */
L_0C0AFA32: BLKS(0x0C0AFA32u);
	r8 = 0xC21F5CCu; UPD(0x0C0AFA34u, 2);  /* 0C0AFA32 mov.l @(disp,pc),Rn */
	r2 = 0xFFFFFFFFu;  /* 0C0AFA34 mov #imm,Rn */
	r7 = R32(r8); UPD(0x0C0AFA38u, 2);  /* 0C0AFA36 mov.l @Rm,Rn */
	r6 = 0x98765432u; UPD(0x0C0AFA3Au, 1);  /* 0C0AFA38 mov.l @(disp,pc),Rn */
	r5 = 0xC21F7F9u; UPD(0x0C0AFA3Cu, 1);  /* 0C0AFA3A mov.l @(disp,pc),Rn */
	T = r7 == r6;  /* 0C0AFA3C cmp/eq Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C0AFA40u, 2);  /* 0C0AFA3E mov.b @Rm,Rn */
	IF(0x0C0AFA40u); r3 = T;  /* 0C0AFA40 movt Rn */
	T = (r4 & r4) == 0;  /* 0C0AFA42 tst Rm,Rn */
	{ u32 t_ = 0u - r2, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0AFA44 negc Rm,Rn */
	r0 &= r3;  /* 0C0AFA46 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AFA48 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AFA8Eu, 8); goto L_0C0AFA8E; } goto L_0C0AFA4E; }  /* 0C0AFA4A bf/s */
L_0C0AFA4E: BLKS(0x0C0AFA4Eu);
	r11 = 0xC285F58u; UPD(0x0C0AFA50u, 2);  /* 0C0AFA4E mov.l @(disp,pc),Rn */
	r10 = 0xC1F5220u; UPD(0x0C0AFA52u, 1);  /* 0C0AFA50 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0AFA52 mov #imm,Rn */
	r9 = 0xC283648u; UPD(0x0C0AFA56u, 2);  /* 0C0AFA54 mov.l @(disp,pc),Rn */
	r8 = 0xC1F5320u; UPD(0x0C0AFA58u, 1);  /* 0C0AFA56 mov.l @(disp,pc),Rn */
	r4 = 0xC3929E4u; UPD(0x0C0AFA5Au, 1);  /* 0C0AFA58 mov.l @(disp,pc),Rn */
	r5 = 0xC283544u; UPD(0x0C0AFA5Cu, 1);  /* 0C0AFA5A mov.l @(disp,pc),Rn */
	r6 = 0xC1F5420u; UPD(0x0C0AFA5Eu, 1);  /* 0C0AFA5C mov.l @(disp,pc),Rn */
	r7 = 0xC275444u; UPD(0x0C0AFA60u, 1);  /* 0C0AFA5E mov.l @(disp,pc),Rn */
	r3 = 0xFFu; UPD(0x0C0AFA62u, 1);  /* 0C0AFA60 mov.w @(disp,pc),Rn */
	IF(0x0C0AFA62u); ;  /* 0C0AFA62 nop */
	UPD(0x0C0AFA64u, 1);
L_0C0AFA64: BLKS(0x0C0AFA64u);
	IF(0x0C0AFA64u); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0AFA66u, 1);  /* 0C0AFA64 mov.b @(r0,Rm),Rn */
	IF(0x0C0AFA66u); W8(r0 + r11, r1); UPD(0x0C0AFA68u, 1);  /* 0C0AFA66 mov.b Rm,@(r0,Rn) */
	IF(0x0C0AFA68u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AFA6Au, 1);  /* 0C0AFA68 mov.b @(r0,Rm),Rn */
	IF(0x0C0AFA6Au); W8(r0 + r9, r1); UPD(0x0C0AFA6Cu, 1);  /* 0C0AFA6A mov.b Rm,@(r0,Rn) */
	IF(0x0C0AFA6Cu); r1 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0AFA6Eu, 1);  /* 0C0AFA6C mov.b @(r0,Rm),Rn */
	IF(0x0C0AFA6Eu); W8(r0 + r4, r1); UPD(0x0C0AFA70u, 1);  /* 0C0AFA6E mov.b Rm,@(r0,Rn) */
	IF(0x0C0AFA70u); W8(r0 + r5, r2); UPD(0x0C0AFA72u, 1);  /* 0C0AFA70 mov.b Rm,@(r0,Rn) */
	r1 = r0;  /* 0C0AFA72 mov Rm,Rn */
	IF(0x0C0AFA74u); W8(r0 + r7, r2); UPD(0x0C0AFA76u, 2);  /* 0C0AFA74 mov.b Rm,@(r0,Rn) */
	r1 += 0x1u;  /* 0C0AFA76 add #imm,Rn */
	r0 = (u32)(s32)(s16)r1;  /* 0C0AFA78 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C0AFA7A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AFA64u, 6); goto L_0C0AFA64; }  /* 0C0AFA7C bf */
L_0C0AFA7E: BLKS(0x0C0AFA7Eu);
	r11 = 0x0u;  /* 0C0AFA7E mov #imm,Rn */
	r0 = 0xC21CCEDu; UPD(0x0C0AFA82u, 2);  /* 0C0AFA80 mov.l @(disp,pc),Rn */
	r10 = 0xC21F7F8u; UPD(0x0C0AFA84u, 1);  /* 0C0AFA82 mov.l @(disp,pc),Rn */
	r1 = 0x98765432u; UPD(0x0C0AFA86u, 1);  /* 0C0AFA84 mov.l @(disp,pc),Rn */
	r9 = 0xC21F5CCu; UPD(0x0C0AFA88u, 1);  /* 0C0AFA86 mov.l @(disp,pc),Rn */
	W8(r0, r11); UPD(0x0C0AFA8Au, 1);  /* 0C0AFA88 mov.b Rm,@Rn */
	W8(r10, r11); UPD(0x0C0AFA8Cu, 1);  /* 0C0AFA8A mov.b Rm,@Rn */
	W32(r9, r1); UPD(0x0C0AFA8Eu, 1);  /* 0C0AFA8C mov.l Rm,@Rn */
L_0C0AFA8E: BLKS(0x0C0AFA8Eu);
	r15 = r14;  /* 0C0AFA8E mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFA92u, 2);  /* 0C0AFA90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AFA94u, 1);  /* 0C0AFA92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AFA96u, 1);  /* 0C0AFA94 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AFA98u, 1);  /* 0C0AFA96 mov.l @Rm+,Rn */
	IF(0x0C0AFA98u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AFA98 rts */
}

/* FUN_0c0afae0 */
void f_0C0AFAE0(sh3_t *c)
{
	LOCALS;
L_0C0AFAE0: BLKS(0x0C0AFAE0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFAE2u, 1);  /* 0C0AFAE0 mov.l Rm,@-Rn */
	r0 = r4 & 0xFF;  /* 0C0AFAE2 extu.b Rm,Rn */
	r3 = 0xC392E24u; UPD(0x0C0AFAE6u, 2);  /* 0C0AFAE4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AFAE6 mov Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AFAEAu, 2);  /* 0C0AFAE8 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AFAEA tst Rm,Rn */
	{ u32 c_ = T; r4 = (u32)(s32)(s8)r5; /* slot exts.b Rm,Rn */ if (c_) { UPD(0x0C0AFAF8u, 4); goto L_0C0AFAF8; } goto L_0C0AFAF0; }  /* 0C0AFAEC bt/s */
L_0C0AFAF0: BLKS(0x0C0AFAF0u);
	T = (r0 & r0) == 0;  /* 0C0AFAF0 tst Rm,Rn */
	if (T) { UPD(0x0C0AFB00u, 5); goto L_0C0AFB00; }  /* 0C0AFAF2 bt */
L_0C0AFAF4: BLKS(0x0C0AFAF4u);
	r2 = 0xC275444u; UPD(0x0C0AFAF6u, 1);  /* 0C0AFAF4 mov.l @(disp,pc),Rn */
	IF(0x0C0AFAF6u); W8(r0 + r2, r4); UPD(0x0C0AFAF8u, 1);  /* 0C0AFAF6 mov.b Rm,@(r0,Rn) */
L_0C0AFAF8: BLKS(0x0C0AFAF8u);
	r15 = r14;  /* 0C0AFAF8 mov Rm,Rn */
	IF(0x0C0AFAFAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AFAFA rts */
L_0C0AFB00: BLKS(0x0C0AFB00u);
	r0 = 0xC04E648u; UPD(0x0C0AFB02u, 1);  /* 0C0AFB00 mov.l @(disp,pc),Rn */
	r4 = r4 & 0xFF;  /* 0C0AFB02 extu.b Rm,Rn */
	r15 = r14;  /* 0C0AFB04 mov Rm,Rn */
	IF(0x0C0AFB06u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C04E648u: TAIL(f_0C04E648); default: JUMPD(tv_); } }  /* 0C0AFB06 jmp @Rn */
}

/* FUN_0c0afb20 */
void f_0C0AFB20(sh3_t *c)
{
	LOCALS;
L_0C0AFB20: BLKS(0x0C0AFB20u);
	r0 = (u32)(s32)(s16)r4;  /* 0C0AFB20 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFB24u, 2);  /* 0C0AFB22 mov.l Rm,@-Rn */
	r3 = r5 & 0xFF;  /* 0C0AFB24 extu.b Rm,Rn */
	r4 = 0xC392E24u; UPD(0x0C0AFB28u, 2);  /* 0C0AFB26 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AFB2Au, 1);  /* 0C0AFB28 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AFB2A tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AFB5Cu, 4); goto L_0C0AFB5C; } goto L_0C0AFB30; }  /* 0C0AFB2C bt/s */
L_0C0AFB30: BLKS(0x0C0AFB30u);
	r5 = 0xC21CA15u; UPD(0x0C0AFB32u, 2);  /* 0C0AFB30 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0AFB32 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C0AFB36u, 2);  /* 0C0AFB34 mov.b @Rm,Rn */
	r4 = 0xC26C8C4u; UPD(0x0C0AFB38u, 1);  /* 0C0AFB36 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C0AFB38 tst Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AFB3Cu, 2);  /* 0C0AFB3A mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C0AFB3C negc Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0AFB3E tst Rm,Rn */
	IF(0x0C0AFB40u); r5 = T;  /* 0C0AFB40 movt Rn */
	T = (r6 & r5) == 0;  /* 0C0AFB42 tst Rm,Rn */
	if (!T) { UPD(0x0C0AFB5Cu, 7); goto L_0C0AFB5C; }  /* 0C0AFB44 bf */
L_0C0AFB46: BLKS(0x0C0AFB46u);
	T = (r3 & r3) == 0;  /* 0C0AFB46 tst Rm,Rn */
	{ u32 c_ = T; r7 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AFB70u, 4); goto L_0C0AFB70; } goto L_0C0AFB4C; }  /* 0C0AFB48 bt/s */
L_0C0AFB4C: BLKS(0x0C0AFB4Cu);
	T = r0 > r7;  /* 0C0AFB4C cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0AFB5Cu, 5); goto L_0C0AFB5C; }  /* 0C0AFB4E bt */
L_0C0AFB50: BLKS(0x0C0AFB50u);
	r5 = 0xC1F60D0u; UPD(0x0C0AFB52u, 1);  /* 0C0AFB50 mov.l @(disp,pc),Rn */
	r2 = 0xC275444u; UPD(0x0C0AFB54u, 1);  /* 0C0AFB52 mov.l @(disp,pc),Rn */
	IF(0x0C0AFB54u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0AFB56u, 1);  /* 0C0AFB54 mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C0AFB56 mov Rm,Rn */
	IF(0x0C0AFB58u); W8(r0 + r3, r4); UPD(0x0C0AFB5Au, 2);  /* 0C0AFB58 mov.b Rm,@(r0,Rn) */
	IF(0x0C0AFB5Au); ;  /* 0C0AFB5A nop */
	UPD(0x0C0AFB5Cu, 1);
L_0C0AFB5C: BLKS(0x0C0AFB5Cu);
	r15 = r14;  /* 0C0AFB5C mov Rm,Rn */
	IF(0x0C0AFB5Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AFB5E rts */
L_0C0AFB70: BLKS(0x0C0AFB70u);
	r6 = 0xC1F60D0u; UPD(0x0C0AFB72u, 1);  /* 0C0AFB70 mov.l @(disp,pc),Rn */
	IF(0x0C0AFB72u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0AFB74u, 1);  /* 0C0AFB72 mov.b @(r0,Rm),Rn */
	r0 = 0xC04E648u; UPD(0x0C0AFB76u, 1);  /* 0C0AFB74 mov.l @(disp,pc),Rn */
	r4 = r3 & 0xFF;  /* 0C0AFB76 extu.b Rm,Rn */
	r15 = r14;  /* 0C0AFB78 mov Rm,Rn */
	IF(0x0C0AFB7Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C04E648u: TAIL(f_0C04E648); default: JUMPD(tv_); } }  /* 0C0AFB7A jmp @Rn */
}

/* FUN_0c0afba0 */
void f_0C0AFBA0(sh3_t *c)
{
	LOCALS;
L_0C0AFBA0: BLKS(0x0C0AFBA0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFBA2u, 1);  /* 0C0AFBA0 mov.l Rm,@-Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C0AFBA2 exts.w Rm,Rn */
	r2 = 0xC392E24u; UPD(0x0C0AFBA6u, 2);  /* 0C0AFBA4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AFBA6 mov Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AFBAAu, 2);  /* 0C0AFBA8 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AFBAA tst Rm,Rn */
	{ u32 c_ = T; r7 = r5 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C0AFBE8u, 4); goto L_0C0AFBE8; } goto L_0C0AFBB0; }  /* 0C0AFBAC bt/s */
L_0C0AFBB0: BLKS(0x0C0AFBB0u);
	r0 = 0xC21CA15u; UPD(0x0C0AFBB2u, 2);  /* 0C0AFBB0 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0AFBB2 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AFBB6u, 2);  /* 0C0AFBB4 mov.b @Rm,Rn */
	r6 = 0xC26C8C4u; UPD(0x0C0AFBB8u, 1);  /* 0C0AFBB6 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C0AFBB8 tst Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0AFBBCu, 2);  /* 0C0AFBBA mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C0AFBBC negc Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0AFBBE tst Rm,Rn */
	IF(0x0C0AFBC0u); r0 = T;  /* 0C0AFBC0 movt Rn */
	T = (r4 & r0) == 0;  /* 0C0AFBC2 tst Rm,Rn */
	if (!T) { UPD(0x0C0AFBE8u, 7); goto L_0C0AFBE8; }  /* 0C0AFBC4 bf */
L_0C0AFBC6: BLKS(0x0C0AFBC6u);
	r2 = 0xC1F60D8u; UPD(0x0C0AFBC8u, 1);  /* 0C0AFBC6 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C0AFBC8 mov Rm,Rn */
	IF(0x0C0AFBCAu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AFBCCu, 2);  /* 0C0AFBCA mov.b @(r0,Rm),Rn */
	r6 = 0x280u; UPD(0x0C0AFBCEu, 1);  /* 0C0AFBCC mov.w @(disp,pc),Rn */
	IF(0x0C0AFBCEu); MACL = r2 * r6;  /* 0C0AFBCE mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C0AFBD2u, 3);  /* 0C0AFBD0 mov.l @(disp,pc),Rn */
	IF(0x0C0AFBD2u); r0 = MACL;  /* 0C0AFBD2 sts macl,Rn */
	IF(0x0C0AFBD4u); r4 = R32(r0 + r5); UPD(0x0C0AFBD6u, 2);  /* 0C0AFBD4 mov.l @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C0AFBD6 tst Rm,Rn */
	if (!T) { UPD(0x0C0AFBDCu, 4); goto L_0C0AFBDC; }  /* 0C0AFBD8 bf */
L_0C0AFBDA: BLKS(0x0C0AFBDAu);
	r3 = r2;  /* 0C0AFBDA mov Rm,Rn */
	UPD(0x0C0AFBDCu, 1);
L_0C0AFBDC: BLKS(0x0C0AFBDCu);
	r5 = 0xC1F60D4u; UPD(0x0C0AFBDEu, 1);  /* 0C0AFBDC mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0AFBDE mov Rm,Rn */
	IF(0x0C0AFBE0u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AFBE2u, 2);  /* 0C0AFBE0 mov.b @(r0,Rm),Rn */
	r3 = 0xC275444u; UPD(0x0C0AFBE4u, 1);  /* 0C0AFBE2 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C0AFBE4 mov Rm,Rn */
	IF(0x0C0AFBE6u); W8(r0 + r7, r4); UPD(0x0C0AFBE8u, 2);  /* 0C0AFBE6 mov.b Rm,@(r0,Rn) */
L_0C0AFBE8: BLKS(0x0C0AFBE8u);
	r15 = r14;  /* 0C0AFBE8 mov Rm,Rn */
	IF(0x0C0AFBEAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AFBEA rts */
}

/* FUN_0c0afc10 */
void f_0C0AFC10(sh3_t *c)
{
	LOCALS;
L_0C0AFC10: BLKS(0x0C0AFC10u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFC12u, 1);  /* 0C0AFC10 mov.l Rm,@-Rn */
	r0 = r4 & 0xFF;  /* 0C0AFC12 extu.b Rm,Rn */
	r3 = 0xC392E24u; UPD(0x0C0AFC16u, 2);  /* 0C0AFC14 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AFC18u, 1);  /* 0C0AFC16 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AFC18 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AFC40u, 4); goto L_0C0AFC40; } goto L_0C0AFC1E; }  /* 0C0AFC1A bt/s */
L_0C0AFC1E: BLKS(0x0C0AFC1Eu);
	r3 = 0xC21CA15u; UPD(0x0C0AFC20u, 2);  /* 0C0AFC1E mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0AFC20 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AFC24u, 2);  /* 0C0AFC22 mov.b @Rm,Rn */
	r7 = 0xC26C8C4u; UPD(0x0C0AFC26u, 1);  /* 0C0AFC24 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C0AFC26 tst Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0AFC2Au, 2);  /* 0C0AFC28 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C0AFC2A negc Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0AFC2C tst Rm,Rn */
	IF(0x0C0AFC2Eu); r4 = T;  /* 0C0AFC2E movt Rn */
	T = (r5 & r4) == 0;  /* 0C0AFC30 tst Rm,Rn */
	{ u32 c_ = !T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C0AFC40u, 7); goto L_0C0AFC40; } goto L_0C0AFC36; }  /* 0C0AFC32 bf/s */
L_0C0AFC36: BLKS(0x0C0AFC36u);
	{ u32 c_ = T; r5 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AFC40u, 4); goto L_0C0AFC40; } goto L_0C0AFC3A; }  /* 0C0AFC36 bt/s */
L_0C0AFC3A: BLKS(0x0C0AFC3Au);
	r4 = 0xC275444u; UPD(0x0C0AFC3Cu, 2);  /* 0C0AFC3A mov.l @(disp,pc),Rn */
	IF(0x0C0AFC3Cu); W8(r0 + r4, r5); UPD(0x0C0AFC3Eu, 1);  /* 0C0AFC3C mov.b Rm,@(r0,Rn) */
	IF(0x0C0AFC3Eu); ;  /* 0C0AFC3E nop */
	UPD(0x0C0AFC40u, 1);
L_0C0AFC40: BLKS(0x0C0AFC40u);
	r15 = r14;  /* 0C0AFC40 mov Rm,Rn */
	IF(0x0C0AFC42u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AFC42 rts */
}

/* FUN_0c0afc60 */
void f_0C0AFC60(sh3_t *c)
{
	LOCALS;
L_0C0AFC60: BLKS(0x0C0AFC60u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFC62u, 1);  /* 0C0AFC60 mov.l Rm,@-Rn */
	r0 = r4 & 0xFF;  /* 0C0AFC62 extu.b Rm,Rn */
	r3 = 0xC392E24u; UPD(0x0C0AFC66u, 2);  /* 0C0AFC64 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AFC68u, 1);  /* 0C0AFC66 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AFC68 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AFC78u, 4); goto L_0C0AFC78; } goto L_0C0AFC6E; }  /* 0C0AFC6A bt/s */
L_0C0AFC6E: BLKS(0x0C0AFC6Eu);
	T = (r0 & r0) == 0;  /* 0C0AFC6E tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x7u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AFC80u, 5); goto L_0C0AFC80; } goto L_0C0AFC74; }  /* 0C0AFC70 bt/s */
L_0C0AFC74: BLKS(0x0C0AFC74u);
	r4 = 0xC275444u; UPD(0x0C0AFC76u, 2);  /* 0C0AFC74 mov.l @(disp,pc),Rn */
	IF(0x0C0AFC76u); W8(r0 + r4, r1); UPD(0x0C0AFC78u, 1);  /* 0C0AFC76 mov.b Rm,@(r0,Rn) */
L_0C0AFC78: BLKS(0x0C0AFC78u);
	r15 = r14;  /* 0C0AFC78 mov Rm,Rn */
	IF(0x0C0AFC7Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AFC7A rts */
L_0C0AFC80: BLKS(0x0C0AFC80u);
	r0 = 0xC04E648u; UPD(0x0C0AFC82u, 1);  /* 0C0AFC80 mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C0AFC82 mov #imm,Rn */
	r15 = r14;  /* 0C0AFC84 mov Rm,Rn */
	IF(0x0C0AFC86u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C04E648u: TAIL(f_0C04E648); default: JUMPD(tv_); } }  /* 0C0AFC86 jmp @Rn */
}

/* FUN_0c0afca0 */
void f_0C0AFCA0(sh3_t *c)
{
	LOCALS;
L_0C0AFCA0: BLKS(0x0C0AFCA0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFCA2u, 1);  /* 0C0AFCA0 mov.l Rm,@-Rn */
	r2 = (u32)(s32)(s8)r4;  /* 0C0AFCA2 exts.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AFCA4 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AFCC0u, 5); goto L_0C0AFCC0; } goto L_0C0AFCAA; }  /* 0C0AFCA6 bf/s */
L_0C0AFCAA: BLKS(0x0C0AFCAAu);
	r0 = 0xC04E648u; UPD(0x0C0AFCACu, 2);  /* 0C0AFCAA mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0AFCAC mov #imm,Rn */
	r15 = r14;  /* 0C0AFCAE mov Rm,Rn */
	IF(0x0C0AFCB0u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C04E648u: TAIL(f_0C04E648); default: JUMPD(tv_); } }  /* 0C0AFCB0 jmp @Rn */
L_0C0AFCC0: BLKS(0x0C0AFCC0u);
	r5 = 0x3u;  /* 0C0AFCC0 mov #imm,Rn */
	IF(0x0C0AFCC2u); ARG0(0x425Du); { s32 s_ = (s32)r5; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C0AFCC2 shld Rm,Rn */
	r4 = 0xC1F5520u; UPD(0x0C0AFCC6u, 3);  /* 0C0AFCC4 mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0AFCC6 add Rm,Rn */
	r3 = r2;  /* 0C0AFCC8 mov Rm,Rn */
	r3 += 0xFFFFFFFCu;  /* 0C0AFCCA add #imm,Rn */
	r2 += 0xFFFFFFF8u;  /* 0C0AFCCC add #imm,Rn */
	r5 = R32(r2); UPD(0x0C0AFCD0u, 5);  /* 0C0AFCCE mov.l @Rm,Rn */
	r4 = 0x0u;  /* 0C0AFCD0 mov #imm,Rn */
	r6 = R32(r3); UPD(0x0C0AFCD4u, 2);  /* 0C0AFCD2 mov.l @Rm,Rn */
	r0 = 0xC04E5BCu; UPD(0x0C0AFCD6u, 1);  /* 0C0AFCD4 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0AFCD6 mov Rm,Rn */
	IF(0x0C0AFCD8u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C04E5BCu: TAIL(f_0C04E5BC); default: JUMPD(tv_); } }  /* 0C0AFCD8 jmp @Rn */
}

/* FUN_0c0afcf0 */
void f_0C0AFCF0(sh3_t *c)
{
	LOCALS;
L_0C0AFCF0: BLKS(0x0C0AFCF0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFCF2u, 1);  /* 0C0AFCF0 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0AFCF2 mov #imm,Rn */
	r0 = 0xC050D70u; UPD(0x0C0AFCF6u, 2);  /* 0C0AFCF4 mov.l @(disp,pc),Rn */
	IF(0x0C0AFCF6u); r15 -= 4; W32(r15, PR); UPD(0x0C0AFCF8u, 1);  /* 0C0AFCF6 sts.l pr,@-Rn */
	IF(0x0C0AFCF8u); { u32 t_ = r0; PR = 0x0C0AFCFCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AFCFCu); }  /* 0C0AFCF8 jsr @Rn */
L_0C0AFCFC: BLKS(0x0C0AFCFCu);
	r4 = 0xC1F60DCu; UPD(0x0C0AFCFEu, 1);  /* 0C0AFCFC mov.l @(disp,pc),Rn */
	IF(0x0C0AFCFEu); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0AFD00u, 1);  /* 0C0AFCFE mov.b @(r0,Rm),Rn */
	r3 = 0xC392E24u; UPD(0x0C0AFD02u, 1);  /* 0C0AFD00 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0AFD02 extu.b Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AFD06u, 2);  /* 0C0AFD04 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AFD06 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AFD2Cu, 4); goto L_0C0AFD2C; } goto L_0C0AFD0C; }  /* 0C0AFD08 bt/s */
L_0C0AFD0C: BLKS(0x0C0AFD0Cu);
	r4 = 0xC21CA15u; UPD(0x0C0AFD0Eu, 2);  /* 0C0AFD0C mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AFD10u, 1);  /* 0C0AFD0E mov.b @Rm,Rn */
	r3 = 0xC26C8C4u; UPD(0x0C0AFD12u, 1);  /* 0C0AFD10 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C0AFD12 tst Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AFD16u, 2);  /* 0C0AFD14 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C0AFD16 negc Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0AFD18 tst Rm,Rn */
	IF(0x0C0AFD1Au); r5 = T;  /* 0C0AFD1A movt Rn */
	T = (r6 & r5) == 0;  /* 0C0AFD1C tst Rm,Rn */
	{ u32 c_ = !T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C0AFD2Cu, 7); goto L_0C0AFD2C; } goto L_0C0AFD22; }  /* 0C0AFD1E bf/s */
L_0C0AFD22: BLKS(0x0C0AFD22u);
	{ u32 c_ = T; r6 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AFD2Cu, 4); goto L_0C0AFD2C; } goto L_0C0AFD26; }  /* 0C0AFD22 bt/s */
L_0C0AFD26: BLKS(0x0C0AFD26u);
	r5 = 0xC275444u; UPD(0x0C0AFD28u, 2);  /* 0C0AFD26 mov.l @(disp,pc),Rn */
	IF(0x0C0AFD28u); W8(r0 + r5, r6); UPD(0x0C0AFD2Au, 1);  /* 0C0AFD28 mov.b Rm,@(r0,Rn) */
	IF(0x0C0AFD2Au); ;  /* 0C0AFD2A nop */
	UPD(0x0C0AFD2Cu, 1);
L_0C0AFD2C: BLKS(0x0C0AFD2Cu);
	r15 = r14;  /* 0C0AFD2C mov Rm,Rn */
	IF(0x0C0AFD2Eu); PR = R32(r15); r15 += 4; UPD(0x0C0AFD30u, 2);  /* 0C0AFD2E lds.l @Rn+,pr */
	IF(0x0C0AFD30u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AFD30 rts */
}

/* FUN_0c0afd50 */
void f_0C0AFD50(sh3_t *c)
{
	LOCALS;
L_0C0AFD50: BLKS(0x0C0AFD50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFD52u, 1);  /* 0C0AFD50 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFD54u, 1);  /* 0C0AFD52 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r5;  /* 0C0AFD54 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFD58u, 2);  /* 0C0AFD56 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r6;  /* 0C0AFD58 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFD5Cu, 2);  /* 0C0AFD5A mov.l Rm,@-Rn */
	r5 = r8;  /* 0C0AFD5C mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFD60u, 2);  /* 0C0AFD5E mov.l Rm,@-Rn */
	r6 = r9;  /* 0C0AFD60 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFD64u, 2);  /* 0C0AFD62 mov.l Rm,@-Rn */
	r12 = r4 & 0xFF;  /* 0C0AFD64 extu.b Rm,Rn */
	r11 = 0xC050CD0u; UPD(0x0C0AFD68u, 2);  /* 0C0AFD66 mov.l @(disp,pc),Rn */
	IF(0x0C0AFD68u); r12 <<= 2;  /* 0C0AFD68 shll2 Rn */
	IF(0x0C0AFD6Au); r15 -= 4; W32(r15, PR); UPD(0x0C0AFD6Cu, 2);  /* 0C0AFD6A sts.l pr,@-Rn */
	r10 = 0x80808000u; UPD(0x0C0AFD6Eu, 1);  /* 0C0AFD6C mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AFD6E mov Rm,Rn */
	r4 = 0xC1F5598u; UPD(0x0C0AFD72u, 2);  /* 0C0AFD70 mov.l @(disp,pc),Rn */
	IF(0x0C0AFD72u); { u32 t_ = r11; PR = 0x0C0AFD76u; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0AFD76u); }  /* 0C0AFD72 jsr @Rn */
L_0C0AFD76: BLKS(0x0C0AFD76u);
	r2 = 0xC1F5CD0u; UPD(0x0C0AFD78u, 1);  /* 0C0AFD76 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0AFD78 mov Rm,Rn */
	IF(0x0C0AFD7Au); r4 = R32(r0 + r2); UPD(0x0C0AFD7Cu, 2);  /* 0C0AFD7A mov.l @(r0,Rm),Rn */
	r5 = r8;  /* 0C0AFD7C mov Rm,Rn */
	r6 = r9;  /* 0C0AFD7E mov Rm,Rn */
	r7 = r10;  /* 0C0AFD80 mov Rm,Rn */
	r0 = r11;  /* 0C0AFD82 mov Rm,Rn */
	r15 = r14;  /* 0C0AFD84 mov Rm,Rn */
	IF(0x0C0AFD86u); PR = R32(r15); r15 += 4; UPD(0x0C0AFD88u, 6);  /* 0C0AFD86 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFD8Au, 1);  /* 0C0AFD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AFD8Cu, 1);  /* 0C0AFD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AFD8Eu, 1);  /* 0C0AFD8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AFD90u, 1);  /* 0C0AFD8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AFD92u, 1);  /* 0C0AFD90 mov.l @Rm+,Rn */
	IF(0x0C0AFD92u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C0AFD92 jmp @Rn */
}

/* FUN_0c0afdb0 */
void f_0C0AFDB0(sh3_t *c)
{
	LOCALS;
L_0C0AFDB0: BLKS(0x0C0AFDB0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFDB2u, 1);  /* 0C0AFDB0 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C0AFDB2 exts.b Rm,Rn */
	r2 = 0xC1F5CD0u; UPD(0x0C0AFDB6u, 2);  /* 0C0AFDB4 mov.l @(disp,pc),Rn */
	IF(0x0C0AFDB6u); r0 <<= 2;  /* 0C0AFDB6 shll2 Rn */
	IF(0x0C0AFDB8u); r4 = R32(r0 + r2); UPD(0x0C0AFDBAu, 2);  /* 0C0AFDB8 mov.l @(r0,Rm),Rn */
	r14 = r15;  /* 0C0AFDBA mov Rm,Rn */
	r7 = 0xC040C000u; UPD(0x0C0AFDBEu, 2);  /* 0C0AFDBC mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)r5;  /* 0C0AFDBE exts.b Rm,Rn */
	r0 = 0xC050CD0u; UPD(0x0C0AFDC2u, 2);  /* 0C0AFDC0 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)r6;  /* 0C0AFDC2 exts.b Rm,Rn */
	r15 = r14;  /* 0C0AFDC4 mov Rm,Rn */
	IF(0x0C0AFDC6u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C0AFDC6 jmp @Rn */
}

/* divmod10 */
void f_0C0AFDF0(sh3_t *c)
{
	LOCALS;
L_0C0AFDF0: BLKS(0x0C0AFDF0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFDF2u, 1);  /* 0C0AFDF0 mov.l Rm,@-Rn */
	IF(0x0C0AFDF2u); r15 -= 4; W32(r15, PR); UPD(0x0C0AFDF4u, 1);  /* 0C0AFDF2 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0AFDF4 add #imm,Rn */
	r14 = r15;  /* 0C0AFDF6 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0AFDFAu, 3);  /* 0C0AFDF8 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0AFDFCu, 1);  /* 0C0AFDFA mov.l Rm,@(disp,Rn) */
	r7 = 0xC0AFF74u; UPD(0x0C0AFDFEu, 1);  /* 0C0AFDFC mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0AFE00u, 1);  /* 0C0AFDFE mov.l @Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0AFE02u, 1);  /* 0C0AFE00 mov.l @(disp,Rm),Rn */
	IF(0x0C0AFE02u); { u32 t_ = r7; PR = 0x0C0AFE06u; IF(0x0C0AFE04u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFF74, 0x0C0AFF74u, 0x0C0AFE06u); }  /* 0C0AFE02 jsr @Rn */
L_0C0AFE06: BLKS(0x0C0AFE06u);
	W32(r14 + 0x8u, r0); UPD(0x0C0AFE08u, 1);  /* 0C0AFE06 mov.l Rm,@(disp,Rn) */
	r6 = R32(r14); UPD(0x0C0AFE0Au, 1);  /* 0C0AFE08 mov.l @Rm,Rn */
	r7 = 0xC0AFF74u; UPD(0x0C0AFE0Cu, 1);  /* 0C0AFE0A mov.l @(disp,pc),Rn */
	r4 = r6;  /* 0C0AFE0C mov Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0AFE10u, 2);  /* 0C0AFE0E mov.l @(disp,Rm),Rn */
	IF(0x0C0AFE10u); { u32 t_ = r7; PR = 0x0C0AFE14u; IF(0x0C0AFE12u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFF74, 0x0C0AFF74u, 0x0C0AFE14u); }  /* 0C0AFE10 jsr @Rn */
L_0C0AFE14: BLKS(0x0C0AFE14u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0AFE16u, 1);  /* 0C0AFE14 mov.l @(disp,Rm),Rn */
	IF(0x0C0AFE16u); MACL = r0 * r1;  /* 0C0AFE16 mul.l Rm,Rn */
	IF(0x0C0AFE18u); r1 = MACL;  /* 0C0AFE18 sts macl,Rn */
	r6 -= r1;  /* 0C0AFE1A sub Rm,Rn */
	r1 = r6;  /* 0C0AFE1C mov Rm,Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0AFE20u, 6);  /* 0C0AFE1E mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x8u); UPD(0x0C0AFE22u, 1);  /* 0C0AFE20 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0AFE24u, 1);  /* 0C0AFE22 mov.l @(disp,Rm),Rn */
	r0 = r1;  /* 0C0AFE24 mov Rm,Rn */
	r1 = r2;  /* 0C0AFE26 mov Rm,Rn */
	r14 += 0x10u;  /* 0C0AFE28 add #imm,Rn */
	r15 = r14;  /* 0C0AFE2A mov Rm,Rn */
	IF(0x0C0AFE2Cu); PR = R32(r15); r15 += 4; UPD(0x0C0AFE2Eu, 5);  /* 0C0AFE2C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFE30u, 1);  /* 0C0AFE2E mov.l @Rm+,Rn */
	IF(0x0C0AFE30u); { u32 t_ = PR; IF(0x0C0AFE32u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0AFE30 rts */
}

/* FUN_0c0afe40 */
void f_0C0AFE40(sh3_t *c)
{
	LOCALS;
L_0C0AFE40: BLKS(0x0C0AFE40u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFE42u, 1);  /* 0C0AFE40 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AFE42 add #imm,Rn */
	r14 = r15;  /* 0C0AFE44 mov Rm,Rn */
	r3 = 0xC1F6178u; UPD(0x0C0AFE48u, 3);  /* 0C0AFE46 mov.l @(disp,pc),Rn */
	r1 = 0xC1F6178u; UPD(0x0C0AFE4Au, 1);  /* 0C0AFE48 mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C0AFE4Cu, 1);  /* 0C0AFE4A mov.l @Rm,Rn */
	r1 = 0x41C64E6Du; UPD(0x0C0AFE4Eu, 1);  /* 0C0AFE4C mov.l @(disp,pc),Rn */
	IF(0x0C0AFE4Eu); MACL = r2 * r1;  /* 0C0AFE4E mul.l Rm,Rn */
	IF(0x0C0AFE50u); r2 = MACL;  /* 0C0AFE50 sts macl,Rn */
	r1 = 0x3039u; UPD(0x0C0AFE54u, 4);  /* 0C0AFE52 mov.w @(disp,pc),Rn */
	r1 += r2;  /* 0C0AFE54 add Rm,Rn */
	W32(r3, r1); UPD(0x0C0AFE58u, 2);  /* 0C0AFE56 mov.l Rm,@Rn */
	r1 = 0xC1F6178u; UPD(0x0C0AFE5Au, 1);  /* 0C0AFE58 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0AFE5Cu, 1);  /* 0C0AFE5A mov.l @Rm,Rn */
	r1 += 0x1u;  /* 0C0AFE5C add #imm,Rn */
	W32(r14, r1); UPD(0x0C0AFE60u, 2);  /* 0C0AFE5E mov.l Rm,@Rn */
	r2 = R32(r14); UPD(0x0C0AFE62u, 1);  /* 0C0AFE60 mov.l @Rm,Rn */
	r1 = (r2 >> 16) | (r2 << 16);  /* 0C0AFE62 swap.w Rm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C0AFE64 exts.w Rm,Rn */
	W32(r14, r1); UPD(0x0C0AFE68u, 3);  /* 0C0AFE66 mov.l Rm,@Rn */
	r1 = 0x7FFFu; UPD(0x0C0AFE6Au, 1);  /* 0C0AFE68 mov.w @(disp,pc),Rn */
	r2 = R32(r14); UPD(0x0C0AFE6Cu, 1);  /* 0C0AFE6A mov.l @Rm,Rn */
	r2 &= r1;  /* 0C0AFE6C and Rm,Rn */
	W32(r14, r2); UPD(0x0C0AFE70u, 2);  /* 0C0AFE6E mov.l Rm,@Rn */
	r0 = R32(r14); UPD(0x0C0AFE72u, 1);  /* 0C0AFE70 mov.l @Rm,Rn */
	r14 += 0x4u;  /* 0C0AFE72 add #imm,Rn */
	r15 = r14;  /* 0C0AFE74 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFE78u, 3);  /* 0C0AFE76 mov.l @Rm+,Rn */
	IF(0x0C0AFE78u); { u32 t_ = PR; IF(0x0C0AFE7Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0AFE78 rts */
}

/* FUN_0c0afe90 */
void f_0C0AFE90(sh3_t *c)
{
	LOCALS;
L_0C0AFE90: BLKS(0x0C0AFE90u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFE92u, 1);  /* 0C0AFE90 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AFE92 add #imm,Rn */
	r14 = r15;  /* 0C0AFE94 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0AFE98u, 3);  /* 0C0AFE96 mov.l Rm,@Rn */
	r2 = 0xC1F6178u; UPD(0x0C0AFE9Au, 1);  /* 0C0AFE98 mov.l @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0AFE9Cu, 1);  /* 0C0AFE9A mov.l @Rm,Rn */
	W32(r2, r1); UPD(0x0C0AFE9Eu, 1);  /* 0C0AFE9C mov.l Rm,@Rn */
	r14 += 0x4u;  /* 0C0AFE9E add #imm,Rn */
	r15 = r14;  /* 0C0AFEA0 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFEA4u, 3);  /* 0C0AFEA2 mov.l @Rm+,Rn */
	IF(0x0C0AFEA4u); { u32 t_ = PR; IF(0x0C0AFEA6u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0AFEA4 rts */
}

/* memcpy */
void f_0C0AFEB0(sh3_t *c)
{
	LOCALS;
L_0C0AFEB0: BLKS(0x0C0AFEB0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFEB2u, 1);  /* 0C0AFEB0 mov.l Rm,@-Rn */
	IF(0x0C0AFEB2u); r15 -= 4; W32(r15, PR); UPD(0x0C0AFEB4u, 1);  /* 0C0AFEB2 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF4u;  /* 0C0AFEB4 add #imm,Rn */
	r14 = r15;  /* 0C0AFEB6 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0AFEBAu, 3);  /* 0C0AFEB8 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0AFEBCu, 1);  /* 0C0AFEBA mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r6); UPD(0x0C0AFEBEu, 1);  /* 0C0AFEBC mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x4u); UPD(0x0C0AFEC0u, 1);  /* 0C0AFEBE mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C0AFEC2u, 1);  /* 0C0AFEC0 mov.l @(disp,Rm),Rn */
	r4 = r1;  /* 0C0AFEC2 mov Rm,Rn */
	r5 = R32(r14); UPD(0x0C0AFEC6u, 2);  /* 0C0AFEC4 mov.l @Rm,Rn */
	r6 = r2;  /* 0C0AFEC6 mov Rm,Rn */
	r1 = 0xC0B00C0u; UPD(0x0C0AFECAu, 2);  /* 0C0AFEC8 mov.l @(disp,pc),Rn */
	IF(0x0C0AFECAu); { u32 t_ = r1; PR = 0x0C0AFECEu; IF(0x0C0AFECCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B00C0, 0x0C0B00C0u, 0x0C0AFECEu); }  /* 0C0AFECA jsr @Rn */
L_0C0AFECE: BLKS(0x0C0AFECEu);
	r14 += 0xCu;  /* 0C0AFECE add #imm,Rn */
	r15 = r14;  /* 0C0AFED0 mov Rm,Rn */
	IF(0x0C0AFED2u); PR = R32(r15); r15 += 4; UPD(0x0C0AFED4u, 3);  /* 0C0AFED2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFED6u, 1);  /* 0C0AFED4 mov.l @Rm+,Rn */
	IF(0x0C0AFED6u); { u32 t_ = PR; IF(0x0C0AFED8u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0AFED6 rts */
}

/* sdiv32 */
void f_0C0AFF74(sh3_t *c)
{
	LOCALS;
	goto L_0C0AFF74;
L_0C0AFF6E: BLKS(0x0C0AFF6Eu);
	IF(0x0C0AFF6Eu); rt_illegal(c, 0x0C0AFF6Eu);  /* 0C0AFF6E illegal 0FF0 */
L_0C0AFF74: BLKS(0x0C0AFF74u);
	T = (r5 & r5) == 0;  /* 0C0AFF74 tst Rm,Rn */
	if (T) { UPD(0x0C0AFF6Eu, 4); goto L_0C0AFF6E; }  /* 0C0AFF76 bt */
L_0C0AFF78: BLKS(0x0C0AFF78u);
	r1 = r4;  /* 0C0AFF78 mov Rm,Rn */
	r0 = r5;  /* 0C0AFF7A mov Rm,Rn */
	r2 ^= r2;  /* 0C0AFF7C xor Rm,Rn */
	{ u32 q_ = r1 >> 31, m_ = r2 >> 31; c->sr = (c->sr & ~(SR_Q | SR_M)) | (q_ ? SR_Q : 0) | (m_ ? SR_M : 0); T = q_ ^ m_; }  /* 0C0AFF7E div0s Rm,Rn */
	{ u32 a_ = r3, t_ = a_ - r3, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r3 = r_; }  /* 0C0AFF80 subc Rm,Rn */
	{ u32 a_ = r1, t_ = a_ - r2, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r1 = r_; }  /* 0C0AFF82 subc Rm,Rn */
	{ u32 q_ = r3 >> 31, m_ = r0 >> 31; c->sr = (c->sr & ~(SR_Q | SR_M)) | (q_ ? SR_Q : 0) | (m_ ? SR_M : 0); T = q_ ^ m_; }  /* 0C0AFF84 div0s Rm,Rn */
	IF(0x0C0AFF86u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFF86 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFF88 div1 Rm,Rn */
	IF(0x0C0AFF8Au); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFF8A rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFF8C div1 Rm,Rn */
	IF(0x0C0AFF8Eu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFF8E rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFF90 div1 Rm,Rn */
	IF(0x0C0AFF92u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFF92 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFF94 div1 Rm,Rn */
	IF(0x0C0AFF96u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFF96 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFF98 div1 Rm,Rn */
	IF(0x0C0AFF9Au); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFF9A rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFF9C div1 Rm,Rn */
	IF(0x0C0AFF9Eu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFF9E rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFA0 div1 Rm,Rn */
	IF(0x0C0AFFA2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFA2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFA4 div1 Rm,Rn */
	IF(0x0C0AFFA6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFA6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFA8 div1 Rm,Rn */
	IF(0x0C0AFFAAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFAA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFAC div1 Rm,Rn */
	IF(0x0C0AFFAEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFAE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFB0 div1 Rm,Rn */
	IF(0x0C0AFFB2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFB2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFB4 div1 Rm,Rn */
	IF(0x0C0AFFB6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFB6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFB8 div1 Rm,Rn */
	IF(0x0C0AFFBAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFBA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFBC div1 Rm,Rn */
	IF(0x0C0AFFBEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFBE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFC0 div1 Rm,Rn */
	IF(0x0C0AFFC2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFC2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFC4 div1 Rm,Rn */
	IF(0x0C0AFFC6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFC6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFC8 div1 Rm,Rn */
	IF(0x0C0AFFCAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFCA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFCC div1 Rm,Rn */
	IF(0x0C0AFFCEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFCE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFD0 div1 Rm,Rn */
	IF(0x0C0AFFD2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFD2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFD4 div1 Rm,Rn */
	IF(0x0C0AFFD6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFD6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFD8 div1 Rm,Rn */
	IF(0x0C0AFFDAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFDA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFDC div1 Rm,Rn */
	IF(0x0C0AFFDEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFDE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFE0 div1 Rm,Rn */
	IF(0x0C0AFFE2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFE2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFE4 div1 Rm,Rn */
	IF(0x0C0AFFE6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFE6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFE8 div1 Rm,Rn */
	IF(0x0C0AFFEAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFEA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFEC div1 Rm,Rn */
	IF(0x0C0AFFEEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFEE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFF0 div1 Rm,Rn */
	IF(0x0C0AFFF2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; } UPD(0x0C0AFFF4u, 62);  /* 0C0AFFF2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFF4 div1 Rm,Rn */
	IF(0x0C0AFFF6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFF6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFF8 div1 Rm,Rn */
	IF(0x0C0AFFFAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFFA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFFC div1 Rm,Rn */
	IF(0x0C0AFFFEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFFE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0B0000 div1 Rm,Rn */
	IF(0x0C0B0002u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0B0002 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0B0004 div1 Rm,Rn */
	IF(0x0C0B0006u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0B0006 rotcl Rn */
	{ u32 a_ = r1, t_ = a_ + r2, r_ = t_ + T; T = (a_ > t_) | (t_ > r_); r1 = r_; }  /* 0C0B0008 addc Rm,Rn */
	IF(0x0C0B000Au); { u32 t_ = PR; r0 = r1; /* slot mov Rm,Rn */ UPD(t_, 14); RET(t_); }  /* 0C0B000A rts */
}

/* copy_long16 */
void f_0C0B000E(sh3_t *c)
{
	LOCALS;
L_0C0B000E: BLKS(0x0C0B000Eu);
	r0 = R32(r5 + 0x3Cu); UPD(0x0C0B0010u, 1);  /* 0C0B000E mov.l @(disp,Rm),Rn */
	W32(r4 + 0x3Cu, r0); UPD(0x0C0B0012u, 1);  /* 0C0B0010 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x38u); UPD(0x0C0B0014u, 1);  /* 0C0B0012 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x38u, r0); UPD(0x0C0B0016u, 1);  /* 0C0B0014 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x34u); UPD(0x0C0B0018u, 1);  /* 0C0B0016 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x34u, r0); UPD(0x0C0B001Au, 1);  /* 0C0B0018 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x30u); UPD(0x0C0B001Cu, 1);  /* 0C0B001A mov.l @(disp,Rm),Rn */
	W32(r4 + 0x30u, r0); UPD(0x0C0B001Eu, 1);  /* 0C0B001C mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x2Cu); UPD(0x0C0B0020u, 1);  /* 0C0B001E mov.l @(disp,Rm),Rn */
	W32(r4 + 0x2Cu, r0); UPD(0x0C0B0022u, 1);  /* 0C0B0020 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x28u); UPD(0x0C0B0024u, 1);  /* 0C0B0022 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x28u, r0); UPD(0x0C0B0026u, 1);  /* 0C0B0024 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x24u); UPD(0x0C0B0028u, 1);  /* 0C0B0026 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x24u, r0); UPD(0x0C0B002Au, 1);  /* 0C0B0028 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x20u); UPD(0x0C0B002Cu, 1);  /* 0C0B002A mov.l @(disp,Rm),Rn */
	W32(r4 + 0x20u, r0); UPD(0x0C0B002Eu, 1);  /* 0C0B002C mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x1Cu); UPD(0x0C0B0030u, 1);  /* 0C0B002E mov.l @(disp,Rm),Rn */
	W32(r4 + 0x1Cu, r0); UPD(0x0C0B0032u, 1);  /* 0C0B0030 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x18u); UPD(0x0C0B0034u, 1);  /* 0C0B0032 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x18u, r0); UPD(0x0C0B0036u, 1);  /* 0C0B0034 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x14u); UPD(0x0C0B0038u, 1);  /* 0C0B0036 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x14u, r0); UPD(0x0C0B003Au, 1);  /* 0C0B0038 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x10u); UPD(0x0C0B003Cu, 1);  /* 0C0B003A mov.l @(disp,Rm),Rn */
	W32(r4 + 0x10u, r0); UPD(0x0C0B003Eu, 1);  /* 0C0B003C mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0xCu); UPD(0x0C0B0040u, 1);  /* 0C0B003E mov.l @(disp,Rm),Rn */
	W32(r4 + 0xCu, r0); UPD(0x0C0B0042u, 1);  /* 0C0B0040 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x8u); UPD(0x0C0B0044u, 1);  /* 0C0B0042 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x8u, r0); UPD(0x0C0B0046u, 1);  /* 0C0B0044 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x4u); UPD(0x0C0B0048u, 1);  /* 0C0B0046 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x4u, r0); UPD(0x0C0B004Au, 1);  /* 0C0B0048 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x0u); UPD(0x0C0B004Cu, 1);  /* 0C0B004A mov.l @(disp,Rm),Rn */
	W32(r4 + 0x0u, r0); UPD(0x0C0B004Eu, 1);  /* 0C0B004C mov.l Rm,@(disp,Rn) */
	r6 += 0xFFFFFFF0u;  /* 0C0B004E add #imm,Rn */
	IF(0x0C0B0050u); T = (s32)r6 > 0;  /* 0C0B0050 cmp/pl Rn */
	if (T) { UPD(0x0C0B0060u, 5); goto L_0C0B0060; }  /* 0C0B0052 bt */
L_0C0B0054: BLKS(0x0C0B0054u);
	r5 += 0x40u;  /* 0C0B0054 add #imm,Rn */
	r0 = 0xC0B00B0u;  /* 0C0B0056 mova @(disp,pc),r0 */
	IF(0x0C0B0058u); r6 <<= 2;  /* 0C0B0058 shll2 Rn */
	r0 += r6;  /* 0C0B005A add Rm,Rn */
	IF(0x0C0B005Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r4 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 6); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B005C jmp @Rn */
L_0C0B0060: BLKS(0x0C0B0060u);
	r5 += 0x40u;  /* 0C0B0060 add #imm,Rn */
	{ r4 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C0B000Eu, 4); goto L_0C0B000E; }  /* 0C0B0062 bra */
}

void f_0C0B0080(sh3_t *c)
{
	LOCALS;
L_0C0B0080: BLKS(0x0C0B0080u);
	r0 = R32(r5 + 0x2Cu); UPD(0x0C0B0082u, 1);  /* 0C0B0080 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x2Cu, r0); UPD(0x0C0B0084u, 1);  /* 0C0B0082 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x28u); UPD(0x0C0B0086u, 1);  /* 0C0B0084 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x28u, r0); UPD(0x0C0B0088u, 1);  /* 0C0B0086 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x24u); UPD(0x0C0B008Au, 1);  /* 0C0B0088 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x24u, r0); UPD(0x0C0B008Cu, 1);  /* 0C0B008A mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x20u); UPD(0x0C0B008Eu, 1);  /* 0C0B008C mov.l @(disp,Rm),Rn */
	W32(r4 + 0x20u, r0); UPD(0x0C0B0090u, 1);  /* 0C0B008E mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x1Cu); UPD(0x0C0B0092u, 1);  /* 0C0B0090 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x1Cu, r0); UPD(0x0C0B0094u, 1);  /* 0C0B0092 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x18u); UPD(0x0C0B0096u, 1);  /* 0C0B0094 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x18u, r0); UPD(0x0C0B0098u, 1);  /* 0C0B0096 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x14u); UPD(0x0C0B009Au, 1);  /* 0C0B0098 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x14u, r0); UPD(0x0C0B009Cu, 1);  /* 0C0B009A mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x10u); UPD(0x0C0B009Eu, 1);  /* 0C0B009C mov.l @(disp,Rm),Rn */
	W32(r4 + 0x10u, r0); UPD(0x0C0B00A0u, 1);  /* 0C0B009E mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0xCu); UPD(0x0C0B00A2u, 1);  /* 0C0B00A0 mov.l @(disp,Rm),Rn */
	W32(r4 + 0xCu, r0); UPD(0x0C0B00A4u, 1);  /* 0C0B00A2 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x8u); UPD(0x0C0B00A6u, 1);  /* 0C0B00A4 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x8u, r0); UPD(0x0C0B00A8u, 1);  /* 0C0B00A6 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x4u); UPD(0x0C0B00AAu, 1);  /* 0C0B00A8 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x4u, r0); UPD(0x0C0B00ACu, 1);  /* 0C0B00AA mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x0u); UPD(0x0C0B00AEu, 1);  /* 0C0B00AC mov.l @(disp,Rm),Rn */
	W32(r4 + 0x0u, r0); UPD(0x0C0B00B0u, 1);  /* 0C0B00AE mov.l Rm,@(disp,Rn) */
	IF(0x0C0B00B0u); { u32 t_ = PR; r0 |= r0; /* slot or Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B00B0 rts */
}

/* bcopy */
void f_0C0B00C0(sh3_t *c)
{
	LOCALS;
L_0C0B00C0: BLKS(0x0C0B00C0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B00C2u, 1);  /* 0C0B00C0 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFE8u;  /* 0C0B00C2 add #imm,Rn */
	r14 = r15;  /* 0C0B00C4 mov Rm,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C0B00C8u, 3);  /* 0C0B00C6 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r5); UPD(0x0C0B00CAu, 1);  /* 0C0B00C8 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r6); UPD(0x0C0B00CCu, 1);  /* 0C0B00CA mov.l Rm,@(disp,Rn) */
	r0 = R32(r14 + 0xCu); UPD(0x0C0B00CEu, 1);  /* 0C0B00CC mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0B00CE tst Rm,Rn */
	if (!T) { UPD(0x0C0B00E0u, 4); goto L_0C0B00E0; }  /* 0C0B00D0 bf */
L_0C0B00D2: BLKS(0x0C0B00D2u);
	r1 = R32(r14 + 0x8u); UPD(0x0C0B00D4u, 1);  /* 0C0B00D2 mov.l @(disp,Rm),Rn */
	W32(r14, r1); UPD(0x0C0B00D6u, 1);  /* 0C0B00D4 mov.l Rm,@Rn */
	{ IF(0x0C0B00D8u); ; /* slot nop */ UPD(0x0C0B01F0u, 3); goto L_0C0B01F0; }  /* 0C0B00D6 bra */
L_0C0B00E0: BLKS(0x0C0B00E0u);
	r2 = R32(r14 + 0x8u); UPD(0x0C0B00E2u, 1);  /* 0C0B00E0 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x10u, r2); UPD(0x0C0B00E4u, 1);  /* 0C0B00E2 mov.l Rm,@(disp,Rn) */
	r0 = R32(r14 + 0x4u); UPD(0x0C0B00E6u, 1);  /* 0C0B00E4 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0B00E8u, 1);  /* 0C0B00E6 mov.l @(disp,Rm),Rn */
	r0 -= r1;  /* 0C0B00E8 sub Rm,Rn */
	r0 &= 0x3u;  /* 0C0B00EA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B00EC tst Rm,Rn */
	if (T) { UPD(0x0C0B0130u, 6); goto L_0C0B0130; }  /* 0C0B00EE bt */
L_0C0B00F0: BLKS(0x0C0B00F0u);
	r2 = R32(r14 + 0xCu); UPD(0x0C0B00F2u, 1);  /* 0C0B00F0 mov.l @(disp,Rm),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0B00F2 add #imm,Rn */
	W32(r14 + 0xCu, r2); UPD(0x0C0B00F6u, 2);  /* 0C0B00F4 mov.l Rm,@(disp,Rn) */
	r0 = R32(r14 + 0xCu); UPD(0x0C0B00F8u, 1);  /* 0C0B00F6 mov.l @(disp,Rm),Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C0B00F8 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B0100u, 4); goto L_0C0B0100; }  /* 0C0B00FA bf */
L_0C0B00FC: BLKS(0x0C0B00FCu);
	{ IF(0x0C0B00FEu); ; /* slot nop */ UPD(0x0C0B0120u, 3); goto L_0C0B0120; }  /* 0C0B00FC bra */
L_0C0B0100: BLKS(0x0C0B0100u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0B0102u, 1);  /* 0C0B0100 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0B0104u, 1);  /* 0C0B0102 mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B0106u, 1);  /* 0C0B0104 mov.b @Rm,Rn */
	W8(r1, r2); UPD(0x0C0B0108u, 1);  /* 0C0B0106 mov.b Rm,@Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B010Au, 1);  /* 0C0B0108 mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C0B010A add #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0B010Eu, 2);  /* 0C0B010C mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x10u); UPD(0x0C0B0110u, 1);  /* 0C0B010E mov.l @(disp,Rm),Rn */
	r2 += 0x1u;  /* 0C0B0110 add #imm,Rn */
	W32(r14 + 0x10u, r2); UPD(0x0C0B0114u, 2);  /* 0C0B0112 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0B0116u); ; /* slot nop */ UPD(0x0C0B00F0u, 3); goto L_0C0B00F0; }  /* 0C0B0114 bra */
L_0C0B0120: BLKS(0x0C0B0120u);
	r0 = R32(r14 + 0x8u); UPD(0x0C0B0122u, 1);  /* 0C0B0120 mov.l @(disp,Rm),Rn */
	W32(r14, r0); UPD(0x0C0B0124u, 1);  /* 0C0B0122 mov.l Rm,@Rn */
	{ IF(0x0C0B0126u); ; /* slot nop */ UPD(0x0C0B01F0u, 3); goto L_0C0B01F0; }  /* 0C0B0124 bra */
L_0C0B0130: BLKS(0x0C0B0130u);
	r0 = R32(r14 + 0x10u); UPD(0x0C0B0132u, 1);  /* 0C0B0130 mov.l @(disp,Rm),Rn */
	r0 &= 0x1u;  /* 0C0B0132 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B0134 tst Rm,Rn */
	if (T) { UPD(0x0C0B0152u, 5); goto L_0C0B0152; }  /* 0C0B0136 bt */
L_0C0B0138: BLKS(0x0C0B0138u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0B013Au, 1);  /* 0C0B0138 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0B013Cu, 1);  /* 0C0B013A mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B013Eu, 1);  /* 0C0B013C mov.b @Rm,Rn */
	W8(r1, r2); UPD(0x0C0B0140u, 1);  /* 0C0B013E mov.b Rm,@Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B0142u, 1);  /* 0C0B0140 mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C0B0142 add #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0B0146u, 2);  /* 0C0B0144 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x10u); UPD(0x0C0B0148u, 1);  /* 0C0B0146 mov.l @(disp,Rm),Rn */
	r2 += 0x1u;  /* 0C0B0148 add #imm,Rn */
	W32(r14 + 0x10u, r2); UPD(0x0C0B014Cu, 2);  /* 0C0B014A mov.l Rm,@(disp,Rn) */
	r0 = R32(r14 + 0xCu); UPD(0x0C0B014Eu, 1);  /* 0C0B014C mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0B014E add #imm,Rn */
	W32(r14 + 0xCu, r0); UPD(0x0C0B0152u, 2);  /* 0C0B0150 mov.l Rm,@(disp,Rn) */
L_0C0B0152: BLKS(0x0C0B0152u);
	r1 = 0x1u;  /* 0C0B0152 mov #imm,Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0B0156u, 2);  /* 0C0B0154 mov.l @(disp,Rm),Rn */
	T = r2 > r1;  /* 0C0B0156 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B017Cu, 4); goto L_0C0B017C; }  /* 0C0B0158 bf */
L_0C0B015A: BLKS(0x0C0B015Au);
	r0 = R32(r14 + 0x10u); UPD(0x0C0B015Cu, 1);  /* 0C0B015A mov.l @(disp,Rm),Rn */
	r0 &= 0x2u;  /* 0C0B015C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B015E tst Rm,Rn */
	if (T) { UPD(0x0C0B017Cu, 5); goto L_0C0B017C; }  /* 0C0B0160 bt */
L_0C0B0162: BLKS(0x0C0B0162u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0B0164u, 1);  /* 0C0B0162 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0B0166u, 1);  /* 0C0B0164 mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s16)R16(r2); UPD(0x0C0B0168u, 1);  /* 0C0B0166 mov.w @Rm,Rn */
	W16(r1, r2); UPD(0x0C0B016Au, 1);  /* 0C0B0168 mov.w Rm,@Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C0B016Cu, 1);  /* 0C0B016A mov.l @(disp,Rm),Rn */
	r0 += 0x2u;  /* 0C0B016C add #imm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0B0170u, 2);  /* 0C0B016E mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x10u); UPD(0x0C0B0172u, 1);  /* 0C0B0170 mov.l @(disp,Rm),Rn */
	r1 += 0x2u;  /* 0C0B0172 add #imm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0B0176u, 2);  /* 0C0B0174 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0xCu); UPD(0x0C0B0178u, 1);  /* 0C0B0176 mov.l @(disp,Rm),Rn */
	r2 += 0xFFFFFFFEu;  /* 0C0B0178 add #imm,Rn */
	W32(r14 + 0xCu, r2); UPD(0x0C0B017Cu, 2);  /* 0C0B017A mov.l Rm,@(disp,Rn) */
L_0C0B017C: BLKS(0x0C0B017Cu);
	r0 = R32(r14 + 0xCu); UPD(0x0C0B017Eu, 1);  /* 0C0B017C mov.l @(disp,Rm),Rn */
	IF(0x0C0B017Eu); r0 >>= 2;  /* 0C0B017E shlr2 Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C0B0182u, 2);  /* 0C0B0180 mov.l Rm,@(disp,Rn) */
L_0C0B0182: BLKS(0x0C0B0182u);
	r1 = R32(r14 + 0x14u); UPD(0x0C0B0184u, 1);  /* 0C0B0182 mov.l @(disp,Rm),Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0B0184 add #imm,Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0B0188u, 2);  /* 0C0B0186 mov.l Rm,@(disp,Rn) */
	r0 = R32(r14 + 0x14u); UPD(0x0C0B018Au, 1);  /* 0C0B0188 mov.l @(disp,Rm),Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C0B018A cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B01A0u, 4); goto L_0C0B01A0; }  /* 0C0B018C bf */
L_0C0B018E: BLKS(0x0C0B018Eu);
	{ IF(0x0C0B0190u); ; /* slot nop */ UPD(0x0C0B01C0u, 3); goto L_0C0B01C0; }  /* 0C0B018E bra */
L_0C0B01A0: BLKS(0x0C0B01A0u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0B01A2u, 1);  /* 0C0B01A0 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0B01A4u, 1);  /* 0C0B01A2 mov.l @(disp,Rm),Rn */
	r2 = R32(r2); UPD(0x0C0B01A6u, 1);  /* 0C0B01A4 mov.l @Rm,Rn */
	W32(r1, r2); UPD(0x0C0B01A8u, 1);  /* 0C0B01A6 mov.l Rm,@Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B01AAu, 1);  /* 0C0B01A8 mov.l @(disp,Rm),Rn */
	r1 += 0x4u;  /* 0C0B01AA add #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0B01AEu, 2);  /* 0C0B01AC mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x10u); UPD(0x0C0B01B0u, 1);  /* 0C0B01AE mov.l @(disp,Rm),Rn */
	r2 += 0x4u;  /* 0C0B01B0 add #imm,Rn */
	W32(r14 + 0x10u, r2); UPD(0x0C0B01B4u, 2);  /* 0C0B01B2 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0B01B6u); ; /* slot nop */ UPD(0x0C0B0182u, 3); goto L_0C0B0182; }  /* 0C0B01B4 bra */
L_0C0B01C0: BLKS(0x0C0B01C0u);
	r0 = R32(r14 + 0xCu); UPD(0x0C0B01C2u, 1);  /* 0C0B01C0 mov.l @(disp,Rm),Rn */
	r0 &= 0x2u;  /* 0C0B01C2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B01C4 tst Rm,Rn */
	if (T) { UPD(0x0C0B01DCu, 5); goto L_0C0B01DC; }  /* 0C0B01C6 bt */
L_0C0B01C8: BLKS(0x0C0B01C8u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0B01CAu, 1);  /* 0C0B01C8 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0B01CCu, 1);  /* 0C0B01CA mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s16)R16(r2); UPD(0x0C0B01CEu, 1);  /* 0C0B01CC mov.w @Rm,Rn */
	W16(r1, r2); UPD(0x0C0B01D0u, 1);  /* 0C0B01CE mov.w Rm,@Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C0B01D2u, 1);  /* 0C0B01D0 mov.l @(disp,Rm),Rn */
	r0 += 0x2u;  /* 0C0B01D2 add #imm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0B01D6u, 2);  /* 0C0B01D4 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x10u); UPD(0x0C0B01D8u, 1);  /* 0C0B01D6 mov.l @(disp,Rm),Rn */
	r1 += 0x2u;  /* 0C0B01D8 add #imm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0B01DCu, 2);  /* 0C0B01DA mov.l Rm,@(disp,Rn) */
L_0C0B01DC: BLKS(0x0C0B01DCu);
	r0 = R32(r14 + 0xCu); UPD(0x0C0B01DEu, 1);  /* 0C0B01DC mov.l @(disp,Rm),Rn */
	r0 &= 0x1u;  /* 0C0B01DE and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B01E0 tst Rm,Rn */
	if (T) { UPD(0x0C0B01ECu, 5); goto L_0C0B01EC; }  /* 0C0B01E2 bt */
L_0C0B01E4: BLKS(0x0C0B01E4u);
	r2 = R32(r14 + 0x4u); UPD(0x0C0B01E6u, 1);  /* 0C0B01E4 mov.l @(disp,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0B01E8u, 1);  /* 0C0B01E6 mov.b @Rm,Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0B01EAu, 1);  /* 0C0B01E8 mov.l @(disp,Rm),Rn */
	W8(r0, r1); UPD(0x0C0B01ECu, 1);  /* 0C0B01EA mov.b Rm,@Rn */
L_0C0B01EC: BLKS(0x0C0B01ECu);
	r1 = R32(r14 + 0x8u); UPD(0x0C0B01EEu, 1);  /* 0C0B01EC mov.l @(disp,Rm),Rn */
	W32(r14, r1); UPD(0x0C0B01F0u, 1);  /* 0C0B01EE mov.l Rm,@Rn */
L_0C0B01F0: BLKS(0x0C0B01F0u);
	r0 = R32(r14); UPD(0x0C0B01F2u, 1);  /* 0C0B01F0 mov.l @Rm,Rn */
	r14 += 0x18u;  /* 0C0B01F2 add #imm,Rn */
	r15 = r14;  /* 0C0B01F4 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B01F8u, 3);  /* 0C0B01F6 mov.l @Rm+,Rn */
	IF(0x0C0B01F8u); { u32 t_ = PR; IF(0x0C0B01FAu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0B01F8 rts */
}

/* subsys_init_0b0200 */
void f_0C0B0200(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C0B0256);
L_0C0B0200: BLKS(0x0C0B0200u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0202u, 1);  /* 0C0B0200 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0204u, 1);  /* 0C0B0202 mov.l Rm,@-Rn */
	IF(0x0C0B0204u); r15 -= 4; W32(r15, PR); UPD(0x0C0B0206u, 1);  /* 0C0B0204 sts.l pr,@-Rn */
	r15 += 0xFFFFFFC8u;  /* 0C0B0206 add #imm,Rn */
	r14 = r15;  /* 0C0B0208 mov Rm,Rn */
	r1 = 0x0u;  /* 0C0B020A mov #imm,Rn */
	W32(r14, r1); UPD(0x0C0B020Eu, 4);  /* 0C0B020C mov.l Rm,@Rn */
	r1 = 0xC21717Cu; UPD(0x0C0B0210u, 1);  /* 0C0B020E mov.l @(disp,pc),Rn */
	r4 = r1;  /* 0C0B0210 mov Rm,Rn */
	r5 = 0x0u;  /* 0C0B0212 mov #imm,Rn */
	r6 = 0x14u;  /* 0C0B0214 mov #imm,Rn */
	r1 = 0xC04A750u; UPD(0x0C0B0218u, 4);  /* 0C0B0216 mov.l @(disp,pc),Rn */
	IF(0x0C0B0218u); { u32 t_ = r1; PR = 0x0C0B021Cu; IF(0x0C0B021Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A750, 0x0C04A750u, 0x0C0B021Cu); }  /* 0C0B0218 jsr @Rn */
L_0C0B021C: BLKS(0x0C0B021Cu);
	r2 = 0xC1F60E4u; UPD(0x0C0B021Eu, 1);  /* 0C0B021C mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B021E mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0B0222u, 2);  /* 0C0B0220 mov.l Rm,@Rn */
	r2 = 0xC1F60E8u; UPD(0x0C0B0224u, 1);  /* 0C0B0222 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B0224 mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0B0228u, 2);  /* 0C0B0226 mov.l Rm,@Rn */
	r2 = 0xC1F60ECu; UPD(0x0C0B022Au, 1);  /* 0C0B0228 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B022A mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0B022Eu, 2);  /* 0C0B022C mov.l Rm,@Rn */
	r1 = 0xC217190u; UPD(0x0C0B0230u, 1);  /* 0C0B022E mov.l @(disp,pc),Rn */
	r2 = 0x240u; UPD(0x0C0B0232u, 1);  /* 0C0B0230 mov.w @(disp,pc),Rn */
	r4 = r1;  /* 0C0B0232 mov Rm,Rn */
	r5 = 0x0u;  /* 0C0B0234 mov #imm,Rn */
	r6 = r2;  /* 0C0B0236 mov Rm,Rn */
	r1 = 0xC04A750u; UPD(0x0C0B023Au, 4);  /* 0C0B0238 mov.l @(disp,pc),Rn */
	IF(0x0C0B023Au); { u32 t_ = r1; PR = 0x0C0B023Eu; IF(0x0C0B023Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A750, 0x0C04A750u, 0x0C0B023Eu); }  /* 0C0B023A jsr @Rn */
L_0C0B023E: BLKS(0x0C0B023Eu);
	r2 = 0xC2173D0u; UPD(0x0C0B0240u, 1);  /* 0C0B023E mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B0240 mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0B0244u, 2);  /* 0C0B0242 mov.l Rm,@Rn */
	r2 = 0xC2173D4u; UPD(0x0C0B0246u, 1);  /* 0C0B0244 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B0246 mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0B024Au, 2);  /* 0C0B0248 mov.l Rm,@Rn */
	r2 = 0xB0C00003u; UPD(0x0C0B024Cu, 1);  /* 0C0B024A mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C0B024C mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B0250u, 2);  /* 0C0B024E mov.b Rm,@Rn */
	r2 = 0xB0000001u; UPD(0x0C0B0252u, 1);  /* 0C0B0250 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0B0252 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B0256u, 2);  /* 0C0B0254 mov.b Rm,@Rn */
L_0C0B0256: BLKS(0x0C0B0256u);
	SPIN_SAVE(0C0B0256);
	r1 = 0xA4000128u; UPD(0x0C0B0258u, 1);  /* 0C0B0256 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)RS8(0C0B0256, r1); UPD(0x0C0B025Au, 1);  /* 0C0B0258 mov.b @Rm,Rn */
	r0 &= 0x20u;  /* 0C0B025A and #imm,r0 */
	r1 = r0 & 0xFF;  /* 0C0B025C extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0B025E tst Rm,Rn */
	if (T) { SPIN_FFD(0C0B0256, 8); UPD(0x0C0B0256u, 6); goto L_0C0B0256; }  /* 0C0B0260 bt */
L_0C0B0262: BLKS(0x0C0B0262u);
	r2 = 0xB0C00003u; UPD(0x0C0B0264u, 1);  /* 0C0B0262 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B0264 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B0268u, 2);  /* 0C0B0266 mov.b Rm,@Rn */
	r2 = 0xB0C00003u; UPD(0x0C0B026Au, 1);  /* 0C0B0268 mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C0B026A mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B026Eu, 2);  /* 0C0B026C mov.b Rm,@Rn */
	r2 = 0xB0000001u; UPD(0x0C0B0270u, 1);  /* 0C0B026E mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFF90u;  /* 0C0B0270 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B0274u, 2);  /* 0C0B0272 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0B0276u, 1);  /* 0C0B0274 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B0276 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B027Au, 2);  /* 0C0B0278 mov.b Rm,@Rn */
	r2 = r14;  /* 0C0B027A mov Rm,Rn */
	r2 += 0x4u;  /* 0C0B027C add #imm,Rn */
	r1 = 0xB0000000u; UPD(0x0C0B0280u, 3);  /* 0C0B027E mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B0282u, 1);  /* 0C0B0280 mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0B0284u, 1);  /* 0C0B0282 mov.b Rm,@Rn */
	r1 = r14;  /* 0C0B0284 mov Rm,Rn */
	r1 += 0x4u;  /* 0C0B0286 add #imm,Rn */
	r2 = r1;  /* 0C0B0288 mov Rm,Rn */
	r2 += 0x1u;  /* 0C0B028A add #imm,Rn */
	r1 = 0xB0000000u; UPD(0x0C0B028Eu, 5);  /* 0C0B028C mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B0290u, 1);  /* 0C0B028E mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0B0292u, 1);  /* 0C0B0290 mov.b Rm,@Rn */
	r2 = 0xB0C00003u; UPD(0x0C0B0294u, 1);  /* 0C0B0292 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B0294 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B0298u, 2);  /* 0C0B0296 mov.b Rm,@Rn */
	r1 = r14;  /* 0C0B0298 mov Rm,Rn */
	r1 += 0x4u;  /* 0C0B029A add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B029Eu, 3);  /* 0C0B029C mov.b @Rm,Rn */
	r2 = r1 & 0xFF;  /* 0C0B029E extu.b Rm,Rn */
	r1 = 0x98u; UPD(0x0C0B02A2u, 2);  /* 0C0B02A0 mov.w @(disp,pc),Rn */
	T = r2 == r1;  /* 0C0B02A2 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C0B02CCu, 4); goto L_0C0B02CC; }  /* 0C0B02A4 bf */
L_0C0B02A6: BLKS(0x0C0B02A6u);
	r1 = r14;  /* 0C0B02A6 mov Rm,Rn */
	r1 += 0x4u;  /* 0C0B02A8 add #imm,Rn */
	r1 += 0x1u;  /* 0C0B02AA add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B02AEu, 4);  /* 0C0B02AC mov.b @Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C0B02AE extu.b Rm,Rn */
	T = r0 == 0x76u;  /* 0C0B02B0 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B02CCu, 5); goto L_0C0B02CC; }  /* 0C0B02B2 bf */
L_0C0B02B4: BLKS(0x0C0B02B4u);
	r2 = 0xC21717Cu; UPD(0x0C0B02B6u, 1);  /* 0C0B02B4 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B02B6 mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0B02BAu, 2);  /* 0C0B02B8 mov.l Rm,@Rn */
	r2 = 0xC21717Cu; UPD(0x0C0B02BCu, 1);  /* 0C0B02BA mov.l @(disp,pc),Rn */
	r1 = 0x1000u; UPD(0x0C0B02BEu, 1);  /* 0C0B02BC mov.w @(disp,pc),Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C0B02C0u, 1);  /* 0C0B02BE mov.l Rm,@(disp,Rn) */
	r2 = 0xC21717Cu; UPD(0x0C0B02C2u, 1);  /* 0C0B02C0 mov.l @(disp,pc),Rn */
	r1 = 0x210u; UPD(0x0C0B02C4u, 1);  /* 0C0B02C2 mov.w @(disp,pc),Rn */
	W32(r2 + 0x8u, r1); UPD(0x0C0B02C6u, 1);  /* 0C0B02C4 mov.l Rm,@(disp,Rn) */
	r2 = 0xC21717Cu; UPD(0x0C0B02C8u, 1);  /* 0C0B02C6 mov.l @(disp,pc),Rn */
	r1 = 0x20u;  /* 0C0B02C8 mov #imm,Rn */
	W32(r2 + 0xCu, r1); UPD(0x0C0B02CCu, 2);  /* 0C0B02CA mov.l Rm,@(disp,Rn) */
L_0C0B02CC: BLKS(0x0C0B02CCu);
	r1 = r14;  /* 0C0B02CC mov Rm,Rn */
	r1 += 0x4u;  /* 0C0B02CE add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B02D2u, 3);  /* 0C0B02D0 mov.b @Rm,Rn */
	r2 = r1 & 0xFF;  /* 0C0B02D2 extu.b Rm,Rn */
	r1 = 0x98u; UPD(0x0C0B02D6u, 2);  /* 0C0B02D4 mov.w @(disp,pc),Rn */
	T = r2 == r1;  /* 0C0B02D6 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C0B0300u, 4); goto L_0C0B0300; }  /* 0C0B02D8 bf */
L_0C0B02DA: BLKS(0x0C0B02DAu);
	r1 = r14;  /* 0C0B02DA mov Rm,Rn */
	r1 += 0x4u;  /* 0C0B02DC add #imm,Rn */
	r1 += 0x1u;  /* 0C0B02DE add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B02E2u, 4);  /* 0C0B02E0 mov.b @Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C0B02E2 extu.b Rm,Rn */
	T = r0 == 0x79u;  /* 0C0B02E4 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B0300u, 5); goto L_0C0B0300; }  /* 0C0B02E6 bf */
L_0C0B02E8: BLKS(0x0C0B02E8u);
	r2 = 0xC21717Cu; UPD(0x0C0B02EAu, 1);  /* 0C0B02E8 mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C0B02EA mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0B02EEu, 2);  /* 0C0B02EC mov.l Rm,@Rn */
	r2 = 0xC21717Cu; UPD(0x0C0B02F0u, 1);  /* 0C0B02EE mov.l @(disp,pc),Rn */
	r1 = 0x2000u; UPD(0x0C0B02F2u, 1);  /* 0C0B02F0 mov.w @(disp,pc),Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C0B02F4u, 1);  /* 0C0B02F2 mov.l Rm,@(disp,Rn) */
	r2 = 0xC21717Cu; UPD(0x0C0B02F6u, 1);  /* 0C0B02F4 mov.l @(disp,pc),Rn */
	r1 = 0x210u; UPD(0x0C0B02F8u, 1);  /* 0C0B02F6 mov.w @(disp,pc),Rn */
	W32(r2 + 0x8u, r1); UPD(0x0C0B02FAu, 1);  /* 0C0B02F8 mov.l Rm,@(disp,Rn) */
	r2 = 0xC21717Cu; UPD(0x0C0B02FCu, 1);  /* 0C0B02FA mov.l @(disp,pc),Rn */
	r1 = 0x20u;  /* 0C0B02FC mov #imm,Rn */
	W32(r2 + 0xCu, r1); UPD(0x0C0B0300u, 2);  /* 0C0B02FE mov.l Rm,@(disp,Rn) */
L_0C0B0300: BLKS(0x0C0B0300u);
	r1 = r14;  /* 0C0B0300 mov Rm,Rn */
	r1 += 0x4u;  /* 0C0B0302 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B0306u, 3);  /* 0C0B0304 mov.b @Rm,Rn */
	r2 = r1 & 0xFF;  /* 0C0B0306 extu.b Rm,Rn */
	r1 = 0xECu; UPD(0x0C0B030Au, 2);  /* 0C0B0308 mov.w @(disp,pc),Rn */
	T = r2 == r1;  /* 0C0B030A cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C0B0336u, 4); goto L_0C0B0336; }  /* 0C0B030C bf */
L_0C0B030E: BLKS(0x0C0B030Eu);
	r1 = r14;  /* 0C0B030E mov Rm,Rn */
	r1 += 0x4u;  /* 0C0B0310 add #imm,Rn */
	r1 += 0x1u;  /* 0C0B0312 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B0316u, 4);  /* 0C0B0314 mov.b @Rm,Rn */
	r2 = r1 & 0xFF;  /* 0C0B0316 extu.b Rm,Rn */
	r1 = 0xF1u; UPD(0x0C0B031Au, 2);  /* 0C0B0318 mov.w @(disp,pc),Rn */
	T = r2 == r1;  /* 0C0B031A cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C0B0336u, 4); goto L_0C0B0336; }  /* 0C0B031C bf */
L_0C0B031E: BLKS(0x0C0B031Eu);
	r2 = 0xC21717Cu; UPD(0x0C0B0320u, 1);  /* 0C0B031E mov.l @(disp,pc),Rn */
	r1 = 0x2u;  /* 0C0B0320 mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0B0324u, 2);  /* 0C0B0322 mov.l Rm,@Rn */
	r2 = 0xC21717Cu; UPD(0x0C0B0326u, 1);  /* 0C0B0324 mov.l @(disp,pc),Rn */
	r1 = 0x400u; UPD(0x0C0B0328u, 1);  /* 0C0B0326 mov.w @(disp,pc),Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C0B032Au, 1);  /* 0C0B0328 mov.l Rm,@(disp,Rn) */
	r2 = 0xC21717Cu; UPD(0x0C0B032Cu, 1);  /* 0C0B032A mov.l @(disp,pc),Rn */
	r1 = 0x840u; UPD(0x0C0B032Eu, 1);  /* 0C0B032C mov.w @(disp,pc),Rn */
	W32(r2 + 0x8u, r1); UPD(0x0C0B0330u, 1);  /* 0C0B032E mov.l Rm,@(disp,Rn) */
	r2 = 0xC21717Cu; UPD(0x0C0B0332u, 1);  /* 0C0B0330 mov.l @(disp,pc),Rn */
	r1 = 0x40u;  /* 0C0B0332 mov #imm,Rn */
	W32(r2 + 0xCu, r1); UPD(0x0C0B0336u, 2);  /* 0C0B0334 mov.l Rm,@(disp,Rn) */
L_0C0B0336: BLKS(0x0C0B0336u);
	r7 = 0xC21717Cu; UPD(0x0C0B0338u, 1);  /* 0C0B0336 mov.l @(disp,pc),Rn */
	r1 = 0xC21717Cu; UPD(0x0C0B033Au, 1);  /* 0C0B0338 mov.l @(disp,pc),Rn */
	r2 = 0xC21717Cu; UPD(0x0C0B033Cu, 1);  /* 0C0B033A mov.l @(disp,pc),Rn */
	r3 = R32(r1 + 0x8u); UPD(0x0C0B033Eu, 1);  /* 0C0B033C mov.l @(disp,Rm),Rn */
	r1 = R32(r2 + 0xCu); UPD(0x0C0B0340u, 1);  /* 0C0B033E mov.l @(disp,Rm),Rn */
	IF(0x0C0B0340u); MACL = r3 * r1;  /* 0C0B0340 mul.l Rm,Rn */
	IF(0x0C0B0342u); r1 = MACL;  /* 0C0B0342 sts macl,Rn */
	W32(r7 + 0x10u, r1); UPD(0x0C0B0346u, 4);  /* 0C0B0344 mov.l Rm,@(disp,Rn) */
	r1 = 0xC21717Cu; UPD(0x0C0B0348u, 1);  /* 0C0B0346 mov.l @(disp,pc),Rn */
	r1 = R32(r1 + 0x4u); UPD(0x0C0B034Au, 1);  /* 0C0B0348 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0B034A tst Rm,Rn */
	if (!T) { UPD(0x0C0B03A0u, 4); goto L_0C0B03A0; }  /* 0C0B034C bf */
L_0C0B034E: BLKS(0x0C0B034Eu);
	r1 = 0x0u;  /* 0C0B034E mov #imm,Rn */
	W32(r14, r1); UPD(0x0C0B0352u, 2);  /* 0C0B0350 mov.l Rm,@Rn */
	{ IF(0x0C0B0354u); ; /* slot nop */ UPD(0x0C0B05E4u, 3); goto L_0C0B05E4; }  /* 0C0B0352 bra */
L_0C0B03A0: BLKS(0x0C0B03A0u);
	r1 = 0xC21717Cu; UPD(0x0C0B03A2u, 1);  /* 0C0B03A0 mov.l @(disp,pc),Rn */
	r1 = R32(r1 + 0x4u); UPD(0x0C0B03A4u, 1);  /* 0C0B03A2 mov.l @(disp,Rm),Rn */
	r1 += 0x7u;  /* 0C0B03A4 add #imm,Rn */
	W32(r14 + 0x24u, r1); UPD(0x0C0B03A8u, 2);  /* 0C0B03A6 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x24u); UPD(0x0C0B03AAu, 1);  /* 0C0B03A8 mov.l @(disp,Rm),Rn */
	IF(0x0C0B03AAu); T = (s32)r1 >= 0;  /* 0C0B03AA cmp/pz Rn */
	if (T) { UPD(0x0C0B03B4u, 4); goto L_0C0B03B4; }  /* 0C0B03AC bt */
L_0C0B03AE: BLKS(0x0C0B03AEu);
	r2 = R32(r14 + 0x24u); UPD(0x0C0B03B0u, 1);  /* 0C0B03AE mov.l @(disp,Rm),Rn */
	r2 += 0x7u;  /* 0C0B03B0 add #imm,Rn */
	W32(r14 + 0x24u, r2); UPD(0x0C0B03B4u, 2);  /* 0C0B03B2 mov.l Rm,@(disp,Rn) */
L_0C0B03B4: BLKS(0x0C0B03B4u);
	r1 = R32(r14 + 0x24u); UPD(0x0C0B03B6u, 1);  /* 0C0B03B4 mov.l @(disp,Rm),Rn */
	IF(0x0C0B03B6u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0B03B6 shar Rn */
	IF(0x0C0B03B8u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0B03B8 shar Rn */
	IF(0x0C0B03BAu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0B03BA shar Rn */
	r4 = r1;  /* 0C0B03BC mov Rm,Rn */
	r5 = 0x1u;  /* 0C0B03BE mov #imm,Rn */
	r1 = 0xC04A4D4u; UPD(0x0C0B03C2u, 6);  /* 0C0B03C0 mov.l @(disp,pc),Rn */
	IF(0x0C0B03C2u); { u32 t_ = r1; PR = 0x0C0B03C6u; IF(0x0C0B03C4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A4D4, 0x0C04A4D4u, 0x0C0B03C6u); }  /* 0C0B03C2 jsr @Rn */
L_0C0B03C6: BLKS(0x0C0B03C6u);
	r1 = 0xC1F60E4u; UPD(0x0C0B03C8u, 1);  /* 0C0B03C6 mov.l @(disp,pc),Rn */
	W32(r1, r0); UPD(0x0C0B03CAu, 1);  /* 0C0B03C8 mov.l Rm,@Rn */
	r1 = 0xC1F60E4u; UPD(0x0C0B03CCu, 1);  /* 0C0B03CA mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0B03CEu, 1);  /* 0C0B03CC mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0B03CE tst Rm,Rn */
	if (!T) { UPD(0x0C0B03E0u, 4); goto L_0C0B03E0; }  /* 0C0B03D0 bf */
L_0C0B03D2: BLKS(0x0C0B03D2u);
	r1 = 0x0u;  /* 0C0B03D2 mov #imm,Rn */
	W32(r14, r1); UPD(0x0C0B03D6u, 2);  /* 0C0B03D4 mov.l Rm,@Rn */
	{ IF(0x0C0B03D8u); ; /* slot nop */ UPD(0x0C0B05E4u, 3); goto L_0C0B05E4; }  /* 0C0B03D6 bra */
L_0C0B03E0: BLKS(0x0C0B03E0u);
	r1 = 0xC0B0E00u; UPD(0x0C0B03E2u, 1);  /* 0C0B03E0 mov.l @(disp,pc),Rn */
	IF(0x0C0B03E2u); { u32 t_ = r1; PR = 0x0C0B03E6u; IF(0x0C0B03E4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B0E00, 0x0C0B0E00u, 0x0C0B03E6u); }  /* 0C0B03E2 jsr @Rn */
L_0C0B03E6: BLKS(0x0C0B03E6u);
	r1 = 0xC1F617Cu; UPD(0x0C0B03E8u, 1);  /* 0C0B03E6 mov.l @(disp,pc),Rn */
	r4 = r1;  /* 0C0B03E8 mov Rm,Rn */
	r5 = 0x0u;  /* 0C0B03EA mov #imm,Rn */
	r1 = 0xC0B10D0u; UPD(0x0C0B03EEu, 3);  /* 0C0B03EC mov.l @(disp,pc),Rn */
	IF(0x0C0B03EEu); { u32 t_ = r1; PR = 0x0C0B03F2u; IF(0x0C0B03F0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B10D0, 0x0C0B10D0u, 0x0C0B03F2u); }  /* 0C0B03EE jsr @Rn */
L_0C0B03F2: BLKS(0x0C0B03F2u);
	T = (r0 & r0) == 0;  /* 0C0B03F2 tst Rm,Rn */
	if (!T) { UPD(0x0C0B0400u, 4); goto L_0C0B0400; }  /* 0C0B03F4 bf */
L_0C0B03F6: BLKS(0x0C0B03F6u);
	r1 = 0x0u;  /* 0C0B03F6 mov #imm,Rn */
	W32(r14, r1); UPD(0x0C0B03FAu, 2);  /* 0C0B03F8 mov.l Rm,@Rn */
	{ IF(0x0C0B03FCu); ; /* slot nop */ UPD(0x0C0B05E4u, 3); goto L_0C0B05E4; }  /* 0C0B03FA bra */
L_0C0B0400: BLKS(0x0C0B0400u);
	r1 = 0xC21717Cu; UPD(0x0C0B0402u, 1);  /* 0C0B0400 mov.l @(disp,pc),Rn */
	r1 = R32(r1 + 0x10u); UPD(0x0C0B0404u, 1);  /* 0C0B0402 mov.l @(disp,Rm),Rn */
	r2 = 0x3u;  /* 0C0B0404 mov #imm,Rn */
	IF(0x0C0B0406u); ARG0(0x412Du); { s32 s_ = (s32)r2; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0B0406 shld Rm,Rn */
	r1 += 0xFFFFFFC7u;  /* 0C0B0408 add #imm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0B040Cu, 4);  /* 0C0B040A mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x8u); UPD(0x0C0B040Eu, 1);  /* 0C0B040C mov.l @(disp,Rm),Rn */
	W32(r14 + 0x28u, r1); UPD(0x0C0B0410u, 1);  /* 0C0B040E mov.l Rm,@(disp,Rn) */
	r2 = 0xC21717Cu; UPD(0x0C0B0412u, 1);  /* 0C0B0410 mov.l @(disp,pc),Rn */
	r1 = R32(r2 + 0x4u); UPD(0x0C0B0414u, 1);  /* 0C0B0412 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x28u); UPD(0x0C0B0416u, 1);  /* 0C0B0414 mov.l @(disp,Rm),Rn */
	T = (s32)r2 > (s32)r1;  /* 0C0B0416 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B0420u, 4); goto L_0C0B0420; }  /* 0C0B0418 bf */
L_0C0B041A: BLKS(0x0C0B041Au);
	r1 = 0xC21717Cu; UPD(0x0C0B041Cu, 1);  /* 0C0B041A mov.l @(disp,pc),Rn */
	r1 = R32(r1 + 0x4u); UPD(0x0C0B041Eu, 1);  /* 0C0B041C mov.l @(disp,Rm),Rn */
	W32(r14 + 0x28u, r1); UPD(0x0C0B0420u, 1);  /* 0C0B041E mov.l Rm,@(disp,Rn) */
L_0C0B0420: BLKS(0x0C0B0420u);
	r2 = R32(r14 + 0x28u); UPD(0x0C0B0422u, 1);  /* 0C0B0420 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x8u, r2); UPD(0x0C0B0424u, 1);  /* 0C0B0422 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x8u); UPD(0x0C0B0426u, 1);  /* 0C0B0424 mov.l @(disp,Rm),Rn */
	r1 += 0x7u;  /* 0C0B0426 add #imm,Rn */
	W32(r14 + 0x2Cu, r1); UPD(0x0C0B042Au, 2);  /* 0C0B0428 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x2Cu); UPD(0x0C0B042Cu, 1);  /* 0C0B042A mov.l @(disp,Rm),Rn */
	IF(0x0C0B042Cu); T = (s32)r1 >= 0;  /* 0C0B042C cmp/pz Rn */
	if (T) { UPD(0x0C0B0436u, 4); goto L_0C0B0436; }  /* 0C0B042E bt */
L_0C0B0430: BLKS(0x0C0B0430u);
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0B0432u, 1);  /* 0C0B0430 mov.l @(disp,Rm),Rn */
	r2 += 0x7u;  /* 0C0B0432 add #imm,Rn */
	W32(r14 + 0x2Cu, r2); UPD(0x0C0B0436u, 2);  /* 0C0B0434 mov.l Rm,@(disp,Rn) */
L_0C0B0436: BLKS(0x0C0B0436u);
	r1 = R32(r14 + 0x2Cu); UPD(0x0C0B0438u, 1);  /* 0C0B0436 mov.l @(disp,Rm),Rn */
	IF(0x0C0B0438u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0B0438 shar Rn */
	IF(0x0C0B043Au); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0B043A shar Rn */
	IF(0x0C0B043Cu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0B043C shar Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0B0440u, 4);  /* 0C0B043E mov.l Rm,@(disp,Rn) */
	r1 = 0xC1F60E4u; UPD(0x0C0B0442u, 1);  /* 0C0B0440 mov.l @(disp,pc),Rn */
	r2 = 0xC1F6184u; UPD(0x0C0B0444u, 1);  /* 0C0B0442 mov.l @(disp,pc),Rn */
	r3 = R32(r14 + 0x8u); UPD(0x0C0B0446u, 1);  /* 0C0B0444 mov.l @(disp,Rm),Rn */
	r4 = R32(r1); UPD(0x0C0B0448u, 1);  /* 0C0B0446 mov.l @Rm,Rn */
	r5 = r2;  /* 0C0B0448 mov Rm,Rn */
	r6 = r3;  /* 0C0B044A mov Rm,Rn */
	r1 = 0xC04A75Cu; UPD(0x0C0B044Eu, 3);  /* 0C0B044C mov.l @(disp,pc),Rn */
	IF(0x0C0B044Eu); { u32 t_ = r1; PR = 0x0C0B0452u; IF(0x0C0B0450u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A75C, 0x0C04A75Cu, 0x0C0B0452u); }  /* 0C0B044E jsr @Rn */
L_0C0B0452: BLKS(0x0C0B0452u);
	r1 = 0xC1F617Cu; UPD(0x0C0B0454u, 1);  /* 0C0B0452 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0B0456u, 1);  /* 0C0B0454 mov.l @Rm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0B0458u, 1);  /* 0C0B0456 mov.l Rm,@(disp,Rn) */
	r2 = 0xC1F60E8u; UPD(0x0C0B045Au, 1);  /* 0C0B0458 mov.l @(disp,pc),Rn */
	r1 = 0xC1F6180u; UPD(0x0C0B045Cu, 1);  /* 0C0B045A mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0B045Eu, 1);  /* 0C0B045C mov.l @Rm,Rn */
	W32(r2, r1); UPD(0x0C0B0460u, 1);  /* 0C0B045E mov.l Rm,@Rn */
	r1 = 0xC1F60E8u; UPD(0x0C0B0462u, 1);  /* 0C0B0460 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0B0464u, 1);  /* 0C0B0462 mov.l @Rm,Rn */
	r2 = 0x4u;  /* 0C0B0464 mov #imm,Rn */
	IF(0x0C0B0466u); ARG0(0x412Du); { s32 s_ = (s32)r2; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0B0466 shld Rm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0B046Au, 3);  /* 0C0B0468 mov.l Rm,@(disp,Rn) */
	r8 = 0xC1F60ECu; UPD(0x0C0B046Cu, 1);  /* 0C0B046A mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C0B046Eu, 1);  /* 0C0B046C mov.l @(disp,Rm),Rn */
	r4 = r1;  /* 0C0B046E mov Rm,Rn */
	r5 = 0x1u;  /* 0C0B0470 mov #imm,Rn */
	r1 = 0xC04A4D4u; UPD(0x0C0B0474u, 3);  /* 0C0B0472 mov.l @(disp,pc),Rn */
	IF(0x0C0B0474u); { u32 t_ = r1; PR = 0x0C0B0478u; IF(0x0C0B0476u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A4D4, 0x0C04A4D4u, 0x0C0B0478u); }  /* 0C0B0474 jsr @Rn */
L_0C0B0478: BLKS(0x0C0B0478u);
	W32(r8, r0); UPD(0x0C0B047Au, 1);  /* 0C0B0478 mov.l Rm,@Rn */
	r1 = 0xC1F60ECu; UPD(0x0C0B047Cu, 1);  /* 0C0B047A mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0B047Eu, 1);  /* 0C0B047C mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0B047E tst Rm,Rn */
	if (!T) { UPD(0x0C0B0490u, 4); goto L_0C0B0490; }  /* 0C0B0480 bf */
L_0C0B0482: BLKS(0x0C0B0482u);
	r1 = 0x0u;  /* 0C0B0482 mov #imm,Rn */
	W32(r14, r1); UPD(0x0C0B0486u, 2);  /* 0C0B0484 mov.l Rm,@Rn */
	{ IF(0x0C0B0488u); ; /* slot nop */ UPD(0x0C0B05E4u, 3); goto L_0C0B05E4; }  /* 0C0B0486 bra */
L_0C0B0490: BLKS(0x0C0B0490u);
	r1 = 0xC1F60ECu; UPD(0x0C0B0492u, 1);  /* 0C0B0490 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0B0494u, 1);  /* 0C0B0492 mov.l @Rm,Rn */
	W32(r14 + 0x18u, r1); UPD(0x0C0B0496u, 1);  /* 0C0B0494 mov.l Rm,@(disp,Rn) */
	r1 = 0xC21717Cu; UPD(0x0C0B0498u, 1);  /* 0C0B0496 mov.l @(disp,pc),Rn */
	r2 = R32(r1 + 0xCu); UPD(0x0C0B049Au, 1);  /* 0C0B0498 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0B049Cu, 1);  /* 0C0B049A mov.l @(disp,Rm),Rn */
	r2 -= r1;  /* 0C0B049C sub Rm,Rn */
	r1 = r2;  /* 0C0B049E mov Rm,Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0B04A2u, 3);  /* 0C0B04A0 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x14u); UPD(0x0C0B04A4u, 1);  /* 0C0B04A2 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0B04A4 tst Rm,Rn */
	if (!T) { UPD(0x0C0B04B0u, 4); goto L_0C0B04B0; }  /* 0C0B04A6 bf */
L_0C0B04A8: BLKS(0x0C0B04A8u);
	{ IF(0x0C0B04AAu); ; /* slot nop */ UPD(0x0C0B04A8u, 3); goto L_0C0B04A8; }  /* 0C0B04A8 bra */
L_0C0B04B0: BLKS(0x0C0B04B0u);
	r1 = 0xC21717Cu; UPD(0x0C0B04B2u, 1);  /* 0C0B04B0 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x14u); UPD(0x0C0B04B4u, 1);  /* 0C0B04B2 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x8u); UPD(0x0C0B04B6u, 1);  /* 0C0B04B4 mov.l @(disp,Rm),Rn */
	IF(0x0C0B04B6u); MACL = r2 * r1;  /* 0C0B04B6 mul.l Rm,Rn */
	IF(0x0C0B04B8u); r1 = MACL;  /* 0C0B04B8 sts macl,Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0B04BCu, 4);  /* 0C0B04BA mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x14u); UPD(0x0C0B04BEu, 1);  /* 0C0B04BC mov.l @(disp,Rm),Rn */
	W32(r14 + 0x30u, r1); UPD(0x0C0B04C0u, 1);  /* 0C0B04BE mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x10u); UPD(0x0C0B04C2u, 1);  /* 0C0B04C0 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x30u); UPD(0x0C0B04C4u, 1);  /* 0C0B04C2 mov.l @(disp,Rm),Rn */
	T = (s32)r2 > (s32)r1;  /* 0C0B04C4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B04CCu, 4); goto L_0C0B04CC; }  /* 0C0B04C6 bf */
L_0C0B04C8: BLKS(0x0C0B04C8u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0B04CAu, 1);  /* 0C0B04C8 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x30u, r1); UPD(0x0C0B04CCu, 1);  /* 0C0B04CA mov.l Rm,@(disp,Rn) */
L_0C0B04CC: BLKS(0x0C0B04CCu);
	r2 = R32(r14 + 0x30u); UPD(0x0C0B04CEu, 1);  /* 0C0B04CC mov.l @(disp,Rm),Rn */
	W32(r14 + 0x14u, r2); UPD(0x0C0B04D0u, 1);  /* 0C0B04CE mov.l Rm,@(disp,Rn) */
	r3 = R32(r14 + 0x18u); UPD(0x0C0B04D2u, 1);  /* 0C0B04D0 mov.l @(disp,Rm),Rn */
	r1 = 0xC21717Cu; UPD(0x0C0B04D4u, 1);  /* 0C0B04D2 mov.l @(disp,pc),Rn */
	r2 = R32(r1 + 0x8u); UPD(0x0C0B04D6u, 1);  /* 0C0B04D4 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0B04D8u, 1);  /* 0C0B04D6 mov.l @(disp,Rm),Rn */
	IF(0x0C0B04D8u); MACL = r2 * r1;  /* 0C0B04D8 mul.l Rm,Rn */
	IF(0x0C0B04DAu); r2 = MACL;  /* 0C0B04DA sts macl,Rn */
	r1 = 0xC1F617Cu; UPD(0x0C0B04DEu, 4);  /* 0C0B04DC mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C0B04DE add Rm,Rn */
	r2 = R32(r14 + 0x14u); UPD(0x0C0B04E2u, 2);  /* 0C0B04E0 mov.l @(disp,Rm),Rn */
	r4 = r3;  /* 0C0B04E2 mov Rm,Rn */
	r5 = r1;  /* 0C0B04E4 mov Rm,Rn */
	r6 = r2;  /* 0C0B04E6 mov Rm,Rn */
	r1 = 0xC04A75Cu; UPD(0x0C0B04EAu, 4);  /* 0C0B04E8 mov.l @(disp,pc),Rn */
	IF(0x0C0B04EAu); { u32 t_ = r1; PR = 0x0C0B04EEu; IF(0x0C0B04ECu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A75C, 0x0C04A75Cu, 0x0C0B04EEu); }  /* 0C0B04EA jsr @Rn */
L_0C0B04EE: BLKS(0x0C0B04EEu);
	r2 = R32(r14 + 0x10u); UPD(0x0C0B04F0u, 1);  /* 0C0B04EE mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x14u); UPD(0x0C0B04F2u, 1);  /* 0C0B04F0 mov.l @(disp,Rm),Rn */
	r2 -= r1;  /* 0C0B04F2 sub Rm,Rn */
	r1 = r2;  /* 0C0B04F4 mov Rm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0B04F8u, 3);  /* 0C0B04F6 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x14u); UPD(0x0C0B04FAu, 1);  /* 0C0B04F8 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x20u, r1); UPD(0x0C0B04FCu, 1);  /* 0C0B04FA mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C0B04FC mov #imm,Rn */
	W32(r14 + 0x1Cu, r1); UPD(0x0C0B0500u, 2);  /* 0C0B04FE mov.l Rm,@(disp,Rn) */
L_0C0B0500: BLKS(0x0C0B0500u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0B0502u, 1);  /* 0C0B0500 mov.l @(disp,Rm),Rn */
	IF(0x0C0B0502u); T = (s32)r1 > 0;  /* 0C0B0502 cmp/pl Rn */
	if (T) { UPD(0x0C0B0510u, 4); goto L_0C0B0510; }  /* 0C0B0504 bt */
L_0C0B0506: BLKS(0x0C0B0506u);
	{ IF(0x0C0B0508u); ; /* slot nop */ UPD(0x0C0B05A0u, 3); goto L_0C0B05A0; }  /* 0C0B0506 bra */
L_0C0B0510: BLKS(0x0C0B0510u);
	r1 = r14;  /* 0C0B0510 mov Rm,Rn */
	r1 += 0x1Cu;  /* 0C0B0512 add #imm,Rn */
	r4 = r1;  /* 0C0B0514 mov Rm,Rn */
	r1 = 0xC0B1480u; UPD(0x0C0B0518u, 4);  /* 0C0B0516 mov.l @(disp,pc),Rn */
	IF(0x0C0B0518u); { u32 t_ = r1; PR = 0x0C0B051Cu; IF(0x0C0B051Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B1480, 0x0C0B1480u, 0x0C0B051Cu); }  /* 0C0B0518 jsr @Rn */
L_0C0B051C: BLKS(0x0C0B051Cu);
	T = (r0 & r0) == 0;  /* 0C0B051C tst Rm,Rn */
	if (!T) { UPD(0x0C0B0530u, 4); goto L_0C0B0530; }  /* 0C0B051E bf */
L_0C0B0520: BLKS(0x0C0B0520u);
	{ IF(0x0C0B0522u); ; /* slot nop */ UPD(0x0C0B05A0u, 3); goto L_0C0B05A0; }  /* 0C0B0520 bra */
L_0C0B0530: BLKS(0x0C0B0530u);
	r1 = 0xC0B0E00u; UPD(0x0C0B0532u, 1);  /* 0C0B0530 mov.l @(disp,pc),Rn */
	IF(0x0C0B0532u); { u32 t_ = r1; PR = 0x0C0B0536u; IF(0x0C0B0534u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B0E00, 0x0C0B0E00u, 0x0C0B0536u); }  /* 0C0B0532 jsr @Rn */
L_0C0B0536: BLKS(0x0C0B0536u);
	r1 = 0xC1F617Cu; UPD(0x0C0B0538u, 1);  /* 0C0B0536 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x1Cu); UPD(0x0C0B053Au, 1);  /* 0C0B0538 mov.l @(disp,Rm),Rn */
	r4 = r1;  /* 0C0B053A mov Rm,Rn */
	r5 = r2;  /* 0C0B053C mov Rm,Rn */
	r1 = 0xC0B10D0u; UPD(0x0C0B0540u, 3);  /* 0C0B053E mov.l @(disp,pc),Rn */
	IF(0x0C0B0540u); { u32 t_ = r1; PR = 0x0C0B0544u; IF(0x0C0B0542u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B10D0, 0x0C0B10D0u, 0x0C0B0544u); }  /* 0C0B0540 jsr @Rn */
L_0C0B0544: BLKS(0x0C0B0544u);
	T = (r0 & r0) == 0;  /* 0C0B0544 tst Rm,Rn */
	if (!T) { UPD(0x0C0B0550u, 4); goto L_0C0B0550; }  /* 0C0B0546 bf */
L_0C0B0548: BLKS(0x0C0B0548u);
	{ IF(0x0C0B054Au); ; /* slot nop */ UPD(0x0C0B05A0u, 3); goto L_0C0B05A0; }  /* 0C0B0548 bra */
L_0C0B0550: BLKS(0x0C0B0550u);
	r1 = 0xC21717Cu; UPD(0x0C0B0552u, 1);  /* 0C0B0550 mov.l @(disp,pc),Rn */
	r1 = R32(r1 + 0x10u); UPD(0x0C0B0554u, 1);  /* 0C0B0552 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0B0556u, 1);  /* 0C0B0554 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x14u); UPD(0x0C0B0558u, 1);  /* 0C0B0556 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x34u, r1); UPD(0x0C0B055Au, 1);  /* 0C0B0558 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x10u); UPD(0x0C0B055Cu, 1);  /* 0C0B055A mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x34u); UPD(0x0C0B055Eu, 1);  /* 0C0B055C mov.l @(disp,Rm),Rn */
	T = (s32)r2 > (s32)r1;  /* 0C0B055E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B0566u, 4); goto L_0C0B0566; }  /* 0C0B0560 bf */
L_0C0B0562: BLKS(0x0C0B0562u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0B0564u, 1);  /* 0C0B0562 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x34u, r1); UPD(0x0C0B0566u, 1);  /* 0C0B0564 mov.l Rm,@(disp,Rn) */
L_0C0B0566: BLKS(0x0C0B0566u);
	r2 = R32(r14 + 0x34u); UPD(0x0C0B0568u, 1);  /* 0C0B0566 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x14u, r2); UPD(0x0C0B056Au, 1);  /* 0C0B0568 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x18u); UPD(0x0C0B056Cu, 1);  /* 0C0B056A mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x20u); UPD(0x0C0B056Eu, 1);  /* 0C0B056C mov.l @(disp,Rm),Rn */
	r1 += r2;  /* 0C0B056E add Rm,Rn */
	r2 = 0xC1F617Cu; UPD(0x0C0B0572u, 2);  /* 0C0B0570 mov.l @(disp,pc),Rn */
	r3 = R32(r14 + 0x14u); UPD(0x0C0B0574u, 1);  /* 0C0B0572 mov.l @(disp,Rm),Rn */
	r4 = r1;  /* 0C0B0574 mov Rm,Rn */
	r5 = r2;  /* 0C0B0576 mov Rm,Rn */
	r6 = r3;  /* 0C0B0578 mov Rm,Rn */
	r1 = 0xC04A75Cu; UPD(0x0C0B057Cu, 4);  /* 0C0B057A mov.l @(disp,pc),Rn */
	IF(0x0C0B057Cu); { u32 t_ = r1; PR = 0x0C0B0580u; IF(0x0C0B057Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A75C, 0x0C04A75Cu, 0x0C0B0580u); }  /* 0C0B057C jsr @Rn */
L_0C0B0580: BLKS(0x0C0B0580u);
	r2 = R32(r14 + 0x10u); UPD(0x0C0B0582u, 1);  /* 0C0B0580 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x14u); UPD(0x0C0B0584u, 1);  /* 0C0B0582 mov.l @(disp,Rm),Rn */
	r2 -= r1;  /* 0C0B0584 sub Rm,Rn */
	r1 = r2;  /* 0C0B0586 mov Rm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0B058Au, 3);  /* 0C0B0588 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x20u); UPD(0x0C0B058Cu, 1);  /* 0C0B058A mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x14u); UPD(0x0C0B058Eu, 1);  /* 0C0B058C mov.l @(disp,Rm),Rn */
	r1 += r2;  /* 0C0B058E add Rm,Rn */
	W32(r14 + 0x20u, r1); UPD(0x0C0B0592u, 2);  /* 0C0B0590 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0B0594u); ; /* slot nop */ UPD(0x0C0B0500u, 3); goto L_0C0B0500; }  /* 0C0B0592 bra */
L_0C0B05A0: BLKS(0x0C0B05A0u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0B05A2u, 1);  /* 0C0B05A0 mov.l @(disp,Rm),Rn */
	IF(0x0C0B05A2u); T = (s32)r1 > 0;  /* 0C0B05A2 cmp/pl Rn */
	if (!T) { UPD(0x0C0B05E0u, 4); goto L_0C0B05E0; }  /* 0C0B05A4 bf */
L_0C0B05A6: BLKS(0x0C0B05A6u);
	r1 = 0x0u;  /* 0C0B05A6 mov #imm,Rn */
	W32(r14, r1); UPD(0x0C0B05AAu, 2);  /* 0C0B05A8 mov.l Rm,@Rn */
	{ IF(0x0C0B05ACu); ; /* slot nop */ UPD(0x0C0B05E4u, 3); goto L_0C0B05E4; }  /* 0C0B05AA bra */
L_0C0B05E0: BLKS(0x0C0B05E0u);
	r1 = 0x1u;  /* 0C0B05E0 mov #imm,Rn */
	W32(r14, r1); UPD(0x0C0B05E4u, 2);  /* 0C0B05E2 mov.l Rm,@Rn */
L_0C0B05E4: BLKS(0x0C0B05E4u);
	r1 = R32(r14); UPD(0x0C0B05E6u, 1);  /* 0C0B05E4 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0B05E6 tst Rm,Rn */
	if (!T) { UPD(0x0C0B061Au, 4); goto L_0C0B061A; }  /* 0C0B05E8 bf */
L_0C0B05EA: BLKS(0x0C0B05EAu);
	r1 = 0xC1F60E4u; UPD(0x0C0B05ECu, 1);  /* 0C0B05EA mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0B05EEu, 1);  /* 0C0B05EC mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0B05EE tst Rm,Rn */
	if (T) { UPD(0x0C0B0602u, 4); goto L_0C0B0602; }  /* 0C0B05F0 bt */
L_0C0B05F2: BLKS(0x0C0B05F2u);
	r1 = 0xC1F60E4u; UPD(0x0C0B05F4u, 1);  /* 0C0B05F2 mov.l @(disp,pc),Rn */
	r4 = R32(r1); UPD(0x0C0B05F6u, 1);  /* 0C0B05F4 mov.l @Rm,Rn */
	r1 = 0xC04A554u; UPD(0x0C0B05F8u, 1);  /* 0C0B05F6 mov.l @(disp,pc),Rn */
	IF(0x0C0B05F8u); { u32 t_ = r1; PR = 0x0C0B05FCu; IF(0x0C0B05FAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A554, 0x0C04A554u, 0x0C0B05FCu); }  /* 0C0B05F8 jsr @Rn */
L_0C0B05FC: BLKS(0x0C0B05FCu);
	r2 = 0xC1F60E4u; UPD(0x0C0B05FEu, 1);  /* 0C0B05FC mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B05FE mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0B0602u, 2);  /* 0C0B0600 mov.l Rm,@Rn */
L_0C0B0602: BLKS(0x0C0B0602u);
	r1 = 0xC1F60ECu; UPD(0x0C0B0604u, 1);  /* 0C0B0602 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0B0606u, 1);  /* 0C0B0604 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0B0606 tst Rm,Rn */
	if (T) { UPD(0x0C0B061Au, 4); goto L_0C0B061A; }  /* 0C0B0608 bt */
L_0C0B060A: BLKS(0x0C0B060Au);
	r1 = 0xC1F60ECu; UPD(0x0C0B060Cu, 1);  /* 0C0B060A mov.l @(disp,pc),Rn */
	r4 = R32(r1); UPD(0x0C0B060Eu, 1);  /* 0C0B060C mov.l @Rm,Rn */
	r1 = 0xC04A554u; UPD(0x0C0B0610u, 1);  /* 0C0B060E mov.l @(disp,pc),Rn */
	IF(0x0C0B0610u); { u32 t_ = r1; PR = 0x0C0B0614u; IF(0x0C0B0612u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A554, 0x0C04A554u, 0x0C0B0614u); }  /* 0C0B0610 jsr @Rn */
L_0C0B0614: BLKS(0x0C0B0614u);
	r2 = 0xC1F60ECu; UPD(0x0C0B0616u, 1);  /* 0C0B0614 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B0616 mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0B061Au, 2);  /* 0C0B0618 mov.l Rm,@Rn */
L_0C0B061A: BLKS(0x0C0B061Au);
	r1 = R32(r14); UPD(0x0C0B061Cu, 1);  /* 0C0B061A mov.l @Rm,Rn */
	r0 = r1;  /* 0C0B061C mov Rm,Rn */
	r14 += 0x38u;  /* 0C0B061E add #imm,Rn */
	r15 = r14;  /* 0C0B0620 mov Rm,Rn */
	IF(0x0C0B0622u); PR = R32(r15); r15 += 4; UPD(0x0C0B0624u, 4);  /* 0C0B0622 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0626u, 1);  /* 0C0B0624 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C0B0628u, 1);  /* 0C0B0626 mov.l @Rm+,Rn */
	IF(0x0C0B0628u); { u32 t_ = PR; IF(0x0C0B062Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0B0628 rts */
}

/* FUN_0c0b0640 */
void f_0C0B0640(sh3_t *c)
{
	LOCALS;
L_0C0B0640: BLKS(0x0C0B0640u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0642u, 1);  /* 0C0B0640 mov.l Rm,@-Rn */
	IF(0x0C0B0642u); r15 -= 4; W32(r15, PR); UPD(0x0C0B0644u, 1);  /* 0C0B0642 sts.l pr,@-Rn */
	r15 += 0xFFFFFFC4u;  /* 0C0B0644 add #imm,Rn */
	r14 = r15;  /* 0C0B0646 mov Rm,Rn */
	r1 = 0xC0B0DC0u; UPD(0x0C0B064Au, 3);  /* 0C0B0648 mov.l @(disp,pc),Rn */
	IF(0x0C0B064Au); { u32 t_ = r1; PR = 0x0C0B064Eu; IF(0x0C0B064Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B0DC0, 0x0C0B0DC0u, 0x0C0B064Eu); }  /* 0C0B064A jsr @Rn */
L_0C0B064E: BLKS(0x0C0B064Eu);
	W32(r14, r0); UPD(0x0C0B0650u, 1);  /* 0C0B064E mov.l Rm,@Rn */
	r1 = 0xC2173D0u; UPD(0x0C0B0652u, 1);  /* 0C0B0650 mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C0B0654u, 1);  /* 0C0B0652 mov.l @Rm,Rn */
	r1 = 0x24u;  /* 0C0B0654 mov #imm,Rn */
	IF(0x0C0B0656u); MACL = r2 * r1;  /* 0C0B0656 mul.l Rm,Rn */
	IF(0x0C0B0658u); r2 = MACL;  /* 0C0B0658 sts macl,Rn */
	r1 = 0xC217190u; UPD(0x0C0B065Cu, 5);  /* 0C0B065A mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C0B065C add Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0B0660u, 2);  /* 0C0B065E mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C0B0660 mov #imm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0B0664u, 2);  /* 0C0B0662 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B0666u, 1);  /* 0C0B0664 mov.l @(disp,Rm),Rn */
	r1 = R32(r1); UPD(0x0C0B0668u, 1);  /* 0C0B0666 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0B0668 tst Rm,Rn */
	if (!T) { UPD(0x0C0B06B0u, 4); goto L_0C0B06B0; }  /* 0C0B066A bf */
L_0C0B066C: BLKS(0x0C0B066Cu);
	r1 = 0xC2173D0u; UPD(0x0C0B066Eu, 1);  /* 0C0B066C mov.l @(disp,pc),Rn */
	r2 = 0xC2173D4u; UPD(0x0C0B0670u, 1);  /* 0C0B066E mov.l @(disp,pc),Rn */
	r3 = R32(r1); UPD(0x0C0B0672u, 1);  /* 0C0B0670 mov.l @Rm,Rn */
	r1 = R32(r2); UPD(0x0C0B0674u, 1);  /* 0C0B0672 mov.l @Rm,Rn */
	T = r3 == r1;  /* 0C0B0674 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0B06A6u, 4); goto L_0C0B06A6; }  /* 0C0B0676 bt */
L_0C0B0678: BLKS(0x0C0B0678u);
	r1 = 0xC2173D0u; UPD(0x0C0B067Au, 1);  /* 0C0B0678 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0B067Cu, 1);  /* 0C0B067A mov.l @Rm,Rn */
	r1 += 0x1u;  /* 0C0B067C add #imm,Rn */
	W32(r14 + 0x24u, r1); UPD(0x0C0B0680u, 2);  /* 0C0B067E mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x24u); UPD(0x0C0B0682u, 1);  /* 0C0B0680 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x28u, r1); UPD(0x0C0B0684u, 1);  /* 0C0B0682 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x28u); UPD(0x0C0B0686u, 1);  /* 0C0B0684 mov.l @(disp,Rm),Rn */
	IF(0x0C0B0686u); T = (s32)r2 >= 0;  /* 0C0B0686 cmp/pz Rn */
	if (T) { UPD(0x0C0B0690u, 4); goto L_0C0B0690; }  /* 0C0B0688 bt */
L_0C0B068A: BLKS(0x0C0B068Au);
	r1 = R32(r14 + 0x28u); UPD(0x0C0B068Cu, 1);  /* 0C0B068A mov.l @(disp,Rm),Rn */
	r1 += 0xFu;  /* 0C0B068C add #imm,Rn */
	W32(r14 + 0x28u, r1); UPD(0x0C0B0690u, 2);  /* 0C0B068E mov.l Rm,@(disp,Rn) */
L_0C0B0690: BLKS(0x0C0B0690u);
	r1 = 0xFFFFFFFCu;  /* 0C0B0690 mov #imm,Rn */
	r2 = R32(r14 + 0x28u); UPD(0x0C0B0694u, 2);  /* 0C0B0692 mov.l @(disp,Rm),Rn */
	IF(0x0C0B0694u); ARG0(0x421Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0B0694 shad Rm,Rn */
	r1 = r2;  /* 0C0B0696 mov Rm,Rn */
	r2 = 0x4u;  /* 0C0B0698 mov #imm,Rn */
	IF(0x0C0B069Au); ARG0(0x412Du); { s32 s_ = (s32)r2; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0B069A shld Rm,Rn */
	r2 = R32(r14 + 0x24u); UPD(0x0C0B069Eu, 5);  /* 0C0B069C mov.l @(disp,Rm),Rn */
	r2 -= r1;  /* 0C0B069E sub Rm,Rn */
	r1 = r2;  /* 0C0B06A0 mov Rm,Rn */
	r2 = 0xC2173D0u; UPD(0x0C0B06A4u, 3);  /* 0C0B06A2 mov.l @(disp,pc),Rn */
	W32(r2, r1); UPD(0x0C0B06A6u, 1);  /* 0C0B06A4 mov.l Rm,@Rn */
L_0C0B06A6: BLKS(0x0C0B06A6u);
	r1 = 0x0u;  /* 0C0B06A6 mov #imm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0B06AAu, 2);  /* 0C0B06A8 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0B06ACu); ; /* slot nop */ UPD(0x0C0B0874u, 3); goto L_0C0B0874; }  /* 0C0B06AA bra */
L_0C0B06B0: BLKS(0x0C0B06B0u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0B06B2u, 1);  /* 0C0B06B0 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x14u); UPD(0x0C0B06B4u, 1);  /* 0C0B06B2 mov.l @(disp,Rm),Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0B06B6u, 1);  /* 0C0B06B4 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B06B8u, 1);  /* 0C0B06B6 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x18u); UPD(0x0C0B06BAu, 1);  /* 0C0B06B8 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x1Cu, r1); UPD(0x0C0B06BCu, 1);  /* 0C0B06BA mov.l Rm,@(disp,Rn) */
L_0C0B06BC: BLKS(0x0C0B06BCu);
	r1 = R32(r14 + 0x1Cu); UPD(0x0C0B06BEu, 1);  /* 0C0B06BC mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0B06BE tst Rm,Rn */
	if (!T) { UPD(0x0C0B06D0u, 4); goto L_0C0B06D0; }  /* 0C0B06C0 bf */
L_0C0B06C2: BLKS(0x0C0B06C2u);
	{ IF(0x0C0B06C4u); ; /* slot nop */ UPD(0x0C0B0800u, 3); goto L_0C0B0800; }  /* 0C0B06C2 bra */
L_0C0B06D0: BLKS(0x0C0B06D0u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0B06D2u, 1);  /* 0C0B06D0 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0xCu); UPD(0x0C0B06D4u, 1);  /* 0C0B06D2 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0B06D4 tst Rm,Rn */
	if (!T) { UPD(0x0C0B06E0u, 4); goto L_0C0B06E0; }  /* 0C0B06D6 bf */
L_0C0B06D8: BLKS(0x0C0B06D8u);
	{ IF(0x0C0B06DAu); ; /* slot nop */ UPD(0x0C0B0800u, 3); goto L_0C0B0800; }  /* 0C0B06D8 bra */
L_0C0B06E0: BLKS(0x0C0B06E0u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0B06E2u, 1);  /* 0C0B06E0 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x8u); UPD(0x0C0B06E4u, 1);  /* 0C0B06E2 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0B06E6u, 1);  /* 0C0B06E4 mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C0B06E6 mov #imm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0B06EAu, 2);  /* 0C0B06E8 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x14u); UPD(0x0C0B06ECu, 1);  /* 0C0B06EA mov.l @(disp,Rm),Rn */
	W32(r14 + 0x18u, r1); UPD(0x0C0B06EEu, 1);  /* 0C0B06EC mov.l Rm,@(disp,Rn) */
L_0C0B06EE: BLKS(0x0C0B06EEu);
	r1 = R32(r14 + 0x18u); UPD(0x0C0B06F0u, 1);  /* 0C0B06EE mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0B06F0 tst Rm,Rn */
	if (!T) { UPD(0x0C0B0700u, 4); goto L_0C0B0700; }  /* 0C0B06F2 bf */
L_0C0B06F4: BLKS(0x0C0B06F4u);
	{ IF(0x0C0B06F6u); ; /* slot nop */ UPD(0x0C0B0740u, 3); goto L_0C0B0740; }  /* 0C0B06F4 bra */
L_0C0B0700: BLKS(0x0C0B0700u);
	r1 = 0xC21717Cu; UPD(0x0C0B0702u, 1);  /* 0C0B0700 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x18u); UPD(0x0C0B0704u, 1);  /* 0C0B0702 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x8u); UPD(0x0C0B0706u, 1);  /* 0C0B0704 mov.l @(disp,Rm),Rn */
	r2 -= r1;  /* 0C0B0706 sub Rm,Rn */
	r1 = r2;  /* 0C0B0708 mov Rm,Rn */
	W32(r14 + 0x18u, r1); UPD(0x0C0B070Cu, 3);  /* 0C0B070A mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x18u); UPD(0x0C0B070Eu, 1);  /* 0C0B070C mov.l @(disp,Rm),Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0B0710u, 1);  /* 0C0B070E mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x18u); UPD(0x0C0B0712u, 1);  /* 0C0B0710 mov.l @(disp,Rm),Rn */
	IF(0x0C0B0712u); T = (s32)r1 >= 0;  /* 0C0B0712 cmp/pz Rn */
	if (T) { UPD(0x0C0B0730u, 4); goto L_0C0B0730; }  /* 0C0B0714 bt */
L_0C0B0716: BLKS(0x0C0B0716u);
	r1 = 0xC21717Cu; UPD(0x0C0B0718u, 1);  /* 0C0B0716 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x14u); UPD(0x0C0B071Au, 1);  /* 0C0B0718 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x8u); UPD(0x0C0B071Cu, 1);  /* 0C0B071A mov.l @(disp,Rm),Rn */
	r1 += r2;  /* 0C0B071C add Rm,Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0B0720u, 2);  /* 0C0B071E mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0B0722u); ; /* slot nop */ UPD(0x0C0B0740u, 3); goto L_0C0B0740; }  /* 0C0B0720 bra */
L_0C0B0730: BLKS(0x0C0B0730u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0B0732u, 1);  /* 0C0B0730 mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C0B0732 add #imm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0B0736u, 2);  /* 0C0B0734 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0B0738u); ; /* slot nop */ UPD(0x0C0B06EEu, 3); goto L_0C0B06EE; }  /* 0C0B0736 bra */
L_0C0B0740: BLKS(0x0C0B0740u);
	r1 = 0xC21717Cu; UPD(0x0C0B0742u, 1);  /* 0C0B0740 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C0B0744u, 1);  /* 0C0B0742 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0xCu); UPD(0x0C0B0746u, 1);  /* 0C0B0744 mov.l @(disp,Rm),Rn */
	T = r2 >= r1;  /* 0C0B0746 cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C0B0774u, 4); goto L_0C0B0774; }  /* 0C0B0748 bf */
L_0C0B074A: BLKS(0x0C0B074Au);
	r1 = R32(r14 + 0x4u); UPD(0x0C0B074Cu, 1);  /* 0C0B074A mov.l @(disp,Rm),Rn */
	r1 += 0x4u;  /* 0C0B074C add #imm,Rn */
	r4 = r1;  /* 0C0B074E mov Rm,Rn */
	r1 = 0xC0B1480u; UPD(0x0C0B0752u, 3);  /* 0C0B0750 mov.l @(disp,pc),Rn */
	IF(0x0C0B0752u); { u32 t_ = r1; PR = 0x0C0B0756u; IF(0x0C0B0754u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B1480, 0x0C0B1480u, 0x0C0B0756u); }  /* 0C0B0752 jsr @Rn */
L_0C0B0756: BLKS(0x0C0B0756u);
	T = (r0 & r0) == 0;  /* 0C0B0756 tst Rm,Rn */
	if (!T) { UPD(0x0C0B0760u, 4); goto L_0C0B0760; }  /* 0C0B0758 bf */
L_0C0B075A: BLKS(0x0C0B075Au);
	{ IF(0x0C0B075Cu); ; /* slot nop */ UPD(0x0C0B075Au, 3); goto L_0C0B075A; }  /* 0C0B075A bra */
L_0C0B0760: BLKS(0x0C0B0760u);
	r7 = R32(r14 + 0x4u); UPD(0x0C0B0762u, 1);  /* 0C0B0760 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B0764u, 1);  /* 0C0B0762 mov.l @(disp,Rm),Rn */
	r2 = 0xC21717Cu; UPD(0x0C0B0766u, 1);  /* 0C0B0764 mov.l @(disp,pc),Rn */
	r3 = R32(r1 + 0x8u); UPD(0x0C0B0768u, 1);  /* 0C0B0766 mov.l @(disp,Rm),Rn */
	r1 = R32(r2 + 0x10u); UPD(0x0C0B076Au, 1);  /* 0C0B0768 mov.l @(disp,Rm),Rn */
	r3 -= r1;  /* 0C0B076A sub Rm,Rn */
	r1 = r3;  /* 0C0B076C mov Rm,Rn */
	W32(r7 + 0x8u, r1); UPD(0x0C0B0770u, 3);  /* 0C0B076E mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C0B0770 mov #imm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0B0774u, 2);  /* 0C0B0772 mov.l Rm,@(disp,Rn) */
L_0C0B0774: BLKS(0x0C0B0774u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0B0776u, 1);  /* 0C0B0774 mov.l @(disp,Rm),Rn */
	r2 = 0xC21717Cu; UPD(0x0C0B0778u, 1);  /* 0C0B0776 mov.l @(disp,pc),Rn */
	r3 = R32(r1 + 0x4u); UPD(0x0C0B077Au, 1);  /* 0C0B0778 mov.l @(disp,Rm),Rn */
	r1 = R32(r2 + 0xCu); UPD(0x0C0B077Cu, 1);  /* 0C0B077A mov.l @(disp,Rm),Rn */
	IF(0x0C0B077Cu); MACL = r3 * r1;  /* 0C0B077C mul.l Rm,Rn */
	IF(0x0C0B077Eu); r2 = MACL;  /* 0C0B077E sts macl,Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C0B0782u, 4);  /* 0C0B0780 mov.l @(disp,Rm),Rn */
	r1 += r2;  /* 0C0B0782 add Rm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0B0786u, 2);  /* 0C0B0784 mov.l Rm,@(disp,Rn) */
	r1 = 0xC21717Cu; UPD(0x0C0B0788u, 1);  /* 0C0B0786 mov.l @(disp,pc),Rn */
	r2 = R32(r1 + 0x8u); UPD(0x0C0B078Au, 1);  /* 0C0B0788 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x14u); UPD(0x0C0B078Cu, 1);  /* 0C0B078A mov.l @(disp,Rm),Rn */
	r2 -= r1;  /* 0C0B078C sub Rm,Rn */
	r1 = r2;  /* 0C0B078E mov Rm,Rn */
	W32(r14 + 0x20u, r1); UPD(0x0C0B0792u, 3);  /* 0C0B0790 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B0794u, 1);  /* 0C0B0792 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x30u, r1); UPD(0x0C0B0796u, 1);  /* 0C0B0794 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x20u); UPD(0x0C0B0798u, 1);  /* 0C0B0796 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x2Cu, r2); UPD(0x0C0B079Au, 1);  /* 0C0B0798 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x30u); UPD(0x0C0B079Cu, 1);  /* 0C0B079A mov.l @(disp,Rm),Rn */
	r1 = R32(r2 + 0xCu); UPD(0x0C0B079Eu, 1);  /* 0C0B079C mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0B07A0u, 1);  /* 0C0B079E mov.l @(disp,Rm),Rn */
	T = r2 > r1;  /* 0C0B07A0 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B07AAu, 4); goto L_0C0B07AA; }  /* 0C0B07A2 bf */
L_0C0B07A4: BLKS(0x0C0B07A4u);
	r1 = R32(r14 + 0x30u); UPD(0x0C0B07A6u, 1);  /* 0C0B07A4 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0xCu); UPD(0x0C0B07A8u, 1);  /* 0C0B07A6 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x2Cu, r1); UPD(0x0C0B07AAu, 1);  /* 0C0B07A8 mov.l Rm,@(disp,Rn) */
L_0C0B07AA: BLKS(0x0C0B07AAu);
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0B07ACu, 1);  /* 0C0B07AA mov.l @(disp,Rm),Rn */
	W32(r14 + 0x20u, r2); UPD(0x0C0B07AEu, 1);  /* 0C0B07AC mov.l Rm,@(disp,Rn) */
L_0C0B07AE: BLKS(0x0C0B07AEu);
	r1 = R32(r14 + 0xCu); UPD(0x0C0B07B0u, 1);  /* 0C0B07AE mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C0B07B2u, 1);  /* 0C0B07B0 mov.l @(disp,Rm),Rn */
	r3 = R32(r14 + 0x14u); UPD(0x0C0B07B4u, 1);  /* 0C0B07B2 mov.l @(disp,Rm),Rn */
	r7 = R32(r14 + 0x20u); UPD(0x0C0B07B6u, 1);  /* 0C0B07B4 mov.l @(disp,Rm),Rn */
	r4 = r1;  /* 0C0B07B6 mov Rm,Rn */
	r5 = r2;  /* 0C0B07B8 mov Rm,Rn */
	r6 = r3;  /* 0C0B07BA mov Rm,Rn */
	r1 = 0xC0B0F00u; UPD(0x0C0B07BEu, 4);  /* 0C0B07BC mov.l @(disp,pc),Rn */
	IF(0x0C0B07BEu); { u32 t_ = r1; PR = 0x0C0B07C2u; IF(0x0C0B07C0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B0F00, 0x0C0B0F00u, 0x0C0B07C2u); }  /* 0C0B07BE jsr @Rn */
L_0C0B07C2: BLKS(0x0C0B07C2u);
	T = (r0 & r0) == 0;  /* 0C0B07C2 tst Rm,Rn */
	if (T) { UPD(0x0C0B07AEu, 4); goto L_0C0B07AE; }  /* 0C0B07C4 bt */
L_0C0B07C6: BLKS(0x0C0B07C6u);
	r3 = R32(r14 + 0x4u); UPD(0x0C0B07C8u, 1);  /* 0C0B07C6 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B07CAu, 1);  /* 0C0B07C8 mov.l @(disp,Rm),Rn */
	r2 = R32(r1 + 0x8u); UPD(0x0C0B07CCu, 1);  /* 0C0B07CA mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x20u); UPD(0x0C0B07CEu, 1);  /* 0C0B07CC mov.l @(disp,Rm),Rn */
	r1 += r2;  /* 0C0B07CE add Rm,Rn */
	W32(r3 + 0x8u, r1); UPD(0x0C0B07D2u, 2);  /* 0C0B07D0 mov.l Rm,@(disp,Rn) */
	r3 = R32(r14 + 0x4u); UPD(0x0C0B07D4u, 1);  /* 0C0B07D2 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B07D6u, 1);  /* 0C0B07D4 mov.l @(disp,Rm),Rn */
	r2 = R32(r1 + 0xCu); UPD(0x0C0B07D8u, 1);  /* 0C0B07D6 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x20u); UPD(0x0C0B07DAu, 1);  /* 0C0B07D8 mov.l @(disp,Rm),Rn */
	r2 -= r1;  /* 0C0B07DA sub Rm,Rn */
	r1 = r2;  /* 0C0B07DC mov Rm,Rn */
	W32(r3 + 0xCu, r1); UPD(0x0C0B07E0u, 3);  /* 0C0B07DE mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0xCu); UPD(0x0C0B07E2u, 1);  /* 0C0B07E0 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x20u); UPD(0x0C0B07E4u, 1);  /* 0C0B07E2 mov.l @(disp,Rm),Rn */
	r1 += r2;  /* 0C0B07E4 add Rm,Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0B07E8u, 2);  /* 0C0B07E6 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x1Cu); UPD(0x0C0B07EAu, 1);  /* 0C0B07E8 mov.l @(disp,Rm),Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0B07EA add #imm,Rn */
	W32(r14 + 0x1Cu, r1); UPD(0x0C0B07EEu, 2);  /* 0C0B07EC mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0B07F0u); ; /* slot nop */ UPD(0x0C0B06BCu, 3); goto L_0C0B06BC; }  /* 0C0B07EE bra */
L_0C0B0800: BLKS(0x0C0B0800u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0B0802u, 1);  /* 0C0B0800 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0xCu); UPD(0x0C0B0804u, 1);  /* 0C0B0802 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0B0804 tst Rm,Rn */
	IF(0x0C0B0806u); r1 = T;  /* 0C0B0806 movt Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0B080Au, 3);  /* 0C0B0808 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x8u); UPD(0x0C0B080Cu, 1);  /* 0C0B080A mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0B080C tst Rm,Rn */
	if (!T) { UPD(0x0C0B0840u, 4); goto L_0C0B0840; }  /* 0C0B080E bf */
L_0C0B0810: BLKS(0x0C0B0810u);
	r2 = R32(r14 + 0x4u); UPD(0x0C0B0812u, 1);  /* 0C0B0810 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0xCu); UPD(0x0C0B0814u, 1);  /* 0C0B0812 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x14u, r1); UPD(0x0C0B0816u, 1);  /* 0C0B0814 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0B0818u); ; /* slot nop */ UPD(0x0C0B0874u, 3); goto L_0C0B0874; }  /* 0C0B0816 bra */
L_0C0B0840: BLKS(0x0C0B0840u);
	r2 = R32(r14 + 0x4u); UPD(0x0C0B0842u, 1);  /* 0C0B0840 mov.l @(disp,Rm),Rn */
	r1 = 0x0u;  /* 0C0B0842 mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0B0846u, 2);  /* 0C0B0844 mov.l Rm,@Rn */
	r1 = 0xC2173D0u; UPD(0x0C0B0848u, 1);  /* 0C0B0846 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0B084Au, 1);  /* 0C0B0848 mov.l @Rm,Rn */
	r1 += 0x1u;  /* 0C0B084A add #imm,Rn */
	W32(r14 + 0x34u, r1); UPD(0x0C0B084Eu, 2);  /* 0C0B084C mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x34u); UPD(0x0C0B0850u, 1);  /* 0C0B084E mov.l @(disp,Rm),Rn */
	W32(r14 + 0x38u, r1); UPD(0x0C0B0852u, 1);  /* 0C0B0850 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x38u); UPD(0x0C0B0854u, 1);  /* 0C0B0852 mov.l @(disp,Rm),Rn */
	IF(0x0C0B0854u); T = (s32)r2 >= 0;  /* 0C0B0854 cmp/pz Rn */
	if (T) { UPD(0x0C0B085Eu, 4); goto L_0C0B085E; }  /* 0C0B0856 bt */
L_0C0B0858: BLKS(0x0C0B0858u);
	r1 = R32(r14 + 0x38u); UPD(0x0C0B085Au, 1);  /* 0C0B0858 mov.l @(disp,Rm),Rn */
	r1 += 0xFu;  /* 0C0B085A add #imm,Rn */
	W32(r14 + 0x38u, r1); UPD(0x0C0B085Eu, 2);  /* 0C0B085C mov.l Rm,@(disp,Rn) */
L_0C0B085E: BLKS(0x0C0B085Eu);
	r1 = 0xFFFFFFFCu;  /* 0C0B085E mov #imm,Rn */
	r2 = R32(r14 + 0x38u); UPD(0x0C0B0862u, 2);  /* 0C0B0860 mov.l @(disp,Rm),Rn */
	IF(0x0C0B0862u); ARG0(0x421Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0B0862 shad Rm,Rn */
	r1 = r2;  /* 0C0B0864 mov Rm,Rn */
	r2 = 0x4u;  /* 0C0B0866 mov #imm,Rn */
	IF(0x0C0B0868u); ARG0(0x412Du); { s32 s_ = (s32)r2; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0B0868 shld Rm,Rn */
	r2 = R32(r14 + 0x34u); UPD(0x0C0B086Cu, 5);  /* 0C0B086A mov.l @(disp,Rm),Rn */
	r2 -= r1;  /* 0C0B086C sub Rm,Rn */
	r1 = r2;  /* 0C0B086E mov Rm,Rn */
	r2 = 0xC2173D0u; UPD(0x0C0B0872u, 3);  /* 0C0B0870 mov.l @(disp,pc),Rn */
	W32(r2, r1); UPD(0x0C0B0874u, 1);  /* 0C0B0872 mov.l Rm,@Rn */
L_0C0B0874: BLKS(0x0C0B0874u);
	r4 = R32(r14); UPD(0x0C0B0876u, 1);  /* 0C0B0874 mov.l @Rm,Rn */
	r1 = 0xC0B0DE0u; UPD(0x0C0B0878u, 1);  /* 0C0B0876 mov.l @(disp,pc),Rn */
	IF(0x0C0B0878u); { u32 t_ = r1; PR = 0x0C0B087Cu; IF(0x0C0B087Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B0DE0, 0x0C0B0DE0u, 0x0C0B087Cu); }  /* 0C0B0878 jsr @Rn */
L_0C0B087C: BLKS(0x0C0B087Cu);
	r1 = R32(r14 + 0x8u); UPD(0x0C0B087Eu, 1);  /* 0C0B087C mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0B087E tst Rm,Rn */
	if (T) { UPD(0x0C0B0898u, 4); goto L_0C0B0898; }  /* 0C0B0880 bt */
L_0C0B0882: BLKS(0x0C0B0882u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0B0884u, 1);  /* 0C0B0882 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x1Cu); UPD(0x0C0B0886u, 1);  /* 0C0B0884 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0B0886 tst Rm,Rn */
	if (T) { UPD(0x0C0B0898u, 4); goto L_0C0B0898; }  /* 0C0B0888 bt */
L_0C0B088A: BLKS(0x0C0B088Au);
	r2 = R32(r14 + 0x4u); UPD(0x0C0B088Cu, 1);  /* 0C0B088A mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B088Eu, 1);  /* 0C0B088C mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x20u); UPD(0x0C0B0890u, 1);  /* 0C0B088E mov.l @(disp,Rm),Rn */
	r2 = R32(r2 + 0x1Cu); UPD(0x0C0B0892u, 1);  /* 0C0B0890 mov.l @(disp,Rm),Rn */
	r4 = r1;  /* 0C0B0892 mov Rm,Rn */
	IF(0x0C0B0894u); { u32 t_ = r2; PR = 0x0C0B0898u; IF(0x0C0B0896u); ; /* slot nop */ UPD(t_, 3); CALLD(t_, 0x0C0B0898u); }  /* 0C0B0894 jsr @Rn */
L_0C0B0898: BLKS(0x0C0B0898u);
	r14 += 0x3Cu;  /* 0C0B0898 add #imm,Rn */
	r15 = r14;  /* 0C0B089A mov Rm,Rn */
	IF(0x0C0B089Cu); PR = R32(r15); r15 += 4; UPD(0x0C0B089Eu, 3);  /* 0C0B089C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B08A0u, 1);  /* 0C0B089E mov.l @Rm+,Rn */
	IF(0x0C0B08A0u); { u32 t_ = PR; IF(0x0C0B08A2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0B08A0 rts */
}

/* FUN_0c0b0930 */
void f_0C0B0930(sh3_t *c)
{
	LOCALS;
L_0C0B0930: BLKS(0x0C0B0930u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0932u, 1);  /* 0C0B0930 mov.l Rm,@-Rn */
	IF(0x0C0B0932u); r15 -= 4; W32(r15, PR); UPD(0x0C0B0934u, 1);  /* 0C0B0932 sts.l pr,@-Rn */
	r15 += 0xFFFFFFDCu;  /* 0C0B0934 add #imm,Rn */
	r14 = r15;  /* 0C0B0936 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0B093Au, 3);  /* 0C0B0938 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0B093Cu, 1);  /* 0C0B093A mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r6); UPD(0x0C0B093Eu, 1);  /* 0C0B093C mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r7); UPD(0x0C0B0940u, 1);  /* 0C0B093E mov.l Rm,@(disp,Rn) */
	r1 = 0xC0B0DC0u; UPD(0x0C0B0942u, 1);  /* 0C0B0940 mov.l @(disp,pc),Rn */
	IF(0x0C0B0942u); { u32 t_ = r1; PR = 0x0C0B0946u; IF(0x0C0B0944u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B0DC0, 0x0C0B0DC0u, 0x0C0B0946u); }  /* 0C0B0942 jsr @Rn */
L_0C0B0946: BLKS(0x0C0B0946u);
	W32(r14 + 0x10u, r0); UPD(0x0C0B0948u, 1);  /* 0C0B0946 mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C0B0948 mov #imm,Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0B094Cu, 2);  /* 0C0B094A mov.l Rm,@(disp,Rn) */
	r1 = 0xC1F60E8u; UPD(0x0C0B094Eu, 1);  /* 0C0B094C mov.l @(disp,pc),Rn */
	r2 = R32(r14); UPD(0x0C0B0950u, 1);  /* 0C0B094E mov.l @Rm,Rn */
	r1 = R32(r1); UPD(0x0C0B0952u, 1);  /* 0C0B0950 mov.l @Rm,Rn */
	T = r2 >= r1;  /* 0C0B0952 cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C0B0960u, 4); goto L_0C0B0960; }  /* 0C0B0954 bf */
L_0C0B0956: BLKS(0x0C0B0956u);
	r1 = 0x0u;  /* 0C0B0956 mov #imm,Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0B095Au, 2);  /* 0C0B0958 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0B095Cu); ; /* slot nop */ UPD(0x0C0B09FAu, 3); goto L_0C0B09FA; }  /* 0C0B095A bra */
L_0C0B0960: BLKS(0x0C0B0960u);
	r1 = 0xC2173D4u; UPD(0x0C0B0962u, 1);  /* 0C0B0960 mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C0B0964u, 1);  /* 0C0B0962 mov.l @Rm,Rn */
	r1 = 0x24u;  /* 0C0B0964 mov #imm,Rn */
	IF(0x0C0B0966u); MACL = r2 * r1;  /* 0C0B0966 mul.l Rm,Rn */
	IF(0x0C0B0968u); r2 = MACL;  /* 0C0B0968 sts macl,Rn */
	r1 = 0xC217190u; UPD(0x0C0B096Cu, 5);  /* 0C0B096A mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C0B096C add Rm,Rn */
	W32(r14 + 0x18u, r1); UPD(0x0C0B0970u, 2);  /* 0C0B096E mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x18u); UPD(0x0C0B0972u, 1);  /* 0C0B0970 mov.l @(disp,Rm),Rn */
	r1 = R32(r1); UPD(0x0C0B0974u, 1);  /* 0C0B0972 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0B0974 tst Rm,Rn */
	if (T) { UPD(0x0C0B0980u, 4); goto L_0C0B0980; }  /* 0C0B0976 bt */
L_0C0B0978: BLKS(0x0C0B0978u);
	r1 = 0x0u;  /* 0C0B0978 mov #imm,Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0B097Cu, 2);  /* 0C0B097A mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0B097Eu); ; /* slot nop */ UPD(0x0C0B09FAu, 3); goto L_0C0B09FA; }  /* 0C0B097C bra */
L_0C0B0980: BLKS(0x0C0B0980u);
	r1 = R32(r14 + 0x18u); UPD(0x0C0B0982u, 1);  /* 0C0B0980 mov.l @(disp,Rm),Rn */
	r3 = r1;  /* 0C0B0982 mov Rm,Rn */
	r3 += 0x4u;  /* 0C0B0984 add #imm,Rn */
	r1 = R32(r14); UPD(0x0C0B0988u, 3);  /* 0C0B0986 mov.l @Rm,Rn */
	r2 = r1;  /* 0C0B0988 mov Rm,Rn */
	r7 = 0x4u;  /* 0C0B098A mov #imm,Rn */
	IF(0x0C0B098Cu); ARG0(0x427Du); { s32 s_ = (s32)r7; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C0B098C shld Rm,Rn */
	r1 = 0xC1F60ECu; UPD(0x0C0B0990u, 4);  /* 0C0B098E mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0B0992u, 1);  /* 0C0B0990 mov.l @Rm,Rn */
	r2 += r1;  /* 0C0B0992 add Rm,Rn */
	r1 = R32(r2); UPD(0x0C0B0996u, 2);  /* 0C0B0994 mov.l @Rm,Rn */
	W32(r3, r1); UPD(0x0C0B0998u, 1);  /* 0C0B0996 mov.l Rm,@Rn */
	r1 = R32(r2 + 0x4u); UPD(0x0C0B099Au, 1);  /* 0C0B0998 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x4u, r1); UPD(0x0C0B099Cu, 1);  /* 0C0B099A mov.l Rm,@(disp,Rn) */
	r1 = R32(r2 + 0x8u); UPD(0x0C0B099Eu, 1);  /* 0C0B099C mov.l @(disp,Rm),Rn */
	W32(r3 + 0x8u, r1); UPD(0x0C0B09A0u, 1);  /* 0C0B099E mov.l Rm,@(disp,Rn) */
	r1 = R32(r2 + 0xCu); UPD(0x0C0B09A2u, 1);  /* 0C0B09A0 mov.l @(disp,Rm),Rn */
	W32(r3 + 0xCu, r1); UPD(0x0C0B09A4u, 1);  /* 0C0B09A2 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x18u); UPD(0x0C0B09A6u, 1);  /* 0C0B09A4 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B09A8u, 1);  /* 0C0B09A6 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x14u, r1); UPD(0x0C0B09AAu, 1);  /* 0C0B09A8 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x18u); UPD(0x0C0B09ACu, 1);  /* 0C0B09AA mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0B09AEu, 1);  /* 0C0B09AC mov.l @(disp,Rm),Rn */
	W32(r2 + 0x18u, r1); UPD(0x0C0B09B0u, 1);  /* 0C0B09AE mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x18u); UPD(0x0C0B09B2u, 1);  /* 0C0B09B0 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0xCu); UPD(0x0C0B09B4u, 1);  /* 0C0B09B2 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x1Cu, r1); UPD(0x0C0B09B6u, 1);  /* 0C0B09B4 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x18u); UPD(0x0C0B09B8u, 1);  /* 0C0B09B6 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x2Cu); UPD(0x0C0B09BAu, 1);  /* 0C0B09B8 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x20u, r1); UPD(0x0C0B09BCu, 1);  /* 0C0B09BA mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x18u); UPD(0x0C0B09BEu, 1);  /* 0C0B09BC mov.l @(disp,Rm),Rn */
	r1 = 0x1u;  /* 0C0B09BE mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0B09C2u, 2);  /* 0C0B09C0 mov.l Rm,@Rn */
	r1 = 0xC2173D4u; UPD(0x0C0B09C4u, 1);  /* 0C0B09C2 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0B09C6u, 1);  /* 0C0B09C4 mov.l @Rm,Rn */
	r1 += 0x1u;  /* 0C0B09C6 add #imm,Rn */
	W32(r14 + 0x1Cu, r1); UPD(0x0C0B09CAu, 2);  /* 0C0B09C8 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x1Cu); UPD(0x0C0B09CCu, 1);  /* 0C0B09CA mov.l @(disp,Rm),Rn */
	W32(r14 + 0x20u, r1); UPD(0x0C0B09CEu, 1);  /* 0C0B09CC mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x20u); UPD(0x0C0B09D0u, 1);  /* 0C0B09CE mov.l @(disp,Rm),Rn */
	IF(0x0C0B09D0u); T = (s32)r2 >= 0;  /* 0C0B09D0 cmp/pz Rn */
	if (T) { UPD(0x0C0B09DAu, 4); goto L_0C0B09DA; }  /* 0C0B09D2 bt */
L_0C0B09D4: BLKS(0x0C0B09D4u);
	r7 = R32(r14 + 0x20u); UPD(0x0C0B09D6u, 1);  /* 0C0B09D4 mov.l @(disp,Rm),Rn */
	r7 += 0xFu;  /* 0C0B09D6 add #imm,Rn */
	W32(r14 + 0x20u, r7); UPD(0x0C0B09DAu, 2);  /* 0C0B09D8 mov.l Rm,@(disp,Rn) */
L_0C0B09DA: BLKS(0x0C0B09DAu);
	r1 = 0xFFFFFFFCu;  /* 0C0B09DA mov #imm,Rn */
	r2 = R32(r14 + 0x20u); UPD(0x0C0B09DEu, 2);  /* 0C0B09DC mov.l @(disp,Rm),Rn */
	IF(0x0C0B09DEu); ARG0(0x421Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0B09DE shad Rm,Rn */
	r1 = r2;  /* 0C0B09E0 mov Rm,Rn */
	r7 = 0x4u;  /* 0C0B09E2 mov #imm,Rn */
	IF(0x0C0B09E4u); ARG0(0x417Du); { s32 s_ = (s32)r7; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0B09E4 shld Rm,Rn */
	r2 = R32(r14 + 0x1Cu); UPD(0x0C0B09E8u, 5);  /* 0C0B09E6 mov.l @(disp,Rm),Rn */
	r2 -= r1;  /* 0C0B09E8 sub Rm,Rn */
	r1 = r2;  /* 0C0B09EA mov Rm,Rn */
	r7 = 0xC2173D4u; UPD(0x0C0B09EEu, 3);  /* 0C0B09EC mov.l @(disp,pc),Rn */
	W32(r7, r1); UPD(0x0C0B09F0u, 1);  /* 0C0B09EE mov.l Rm,@Rn */
	r1 = 0xC0B0E00u; UPD(0x0C0B09F2u, 1);  /* 0C0B09F0 mov.l @(disp,pc),Rn */
	IF(0x0C0B09F2u); { u32 t_ = r1; PR = 0x0C0B09F6u; IF(0x0C0B09F4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B0E00, 0x0C0B0E00u, 0x0C0B09F6u); }  /* 0C0B09F2 jsr @Rn */
L_0C0B09F6: BLKS(0x0C0B09F6u);
	r1 = R32(r14 + 0x18u); UPD(0x0C0B09F8u, 1);  /* 0C0B09F6 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0B09FAu, 1);  /* 0C0B09F8 mov.l Rm,@(disp,Rn) */
L_0C0B09FA: BLKS(0x0C0B09FAu);
	r1 = R32(r14 + 0x10u); UPD(0x0C0B09FCu, 1);  /* 0C0B09FA mov.l @(disp,Rm),Rn */
	r4 = r1;  /* 0C0B09FC mov Rm,Rn */
	r1 = 0xC0B0DE0u; UPD(0x0C0B0A00u, 2);  /* 0C0B09FE mov.l @(disp,pc),Rn */
	IF(0x0C0B0A00u); { u32 t_ = r1; PR = 0x0C0B0A04u; IF(0x0C0B0A02u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B0DE0, 0x0C0B0DE0u, 0x0C0B0A04u); }  /* 0C0B0A00 jsr @Rn */
L_0C0B0A04: BLKS(0x0C0B0A04u);
	r1 = R32(r14 + 0x14u); UPD(0x0C0B0A06u, 1);  /* 0C0B0A04 mov.l @(disp,Rm),Rn */
	r0 = r1;  /* 0C0B0A06 mov Rm,Rn */
	r14 += 0x24u;  /* 0C0B0A08 add #imm,Rn */
	r15 = r14;  /* 0C0B0A0A mov Rm,Rn */
	IF(0x0C0B0A0Cu); PR = R32(r15); r15 += 4; UPD(0x0C0B0A0Eu, 4);  /* 0C0B0A0C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0A10u, 1);  /* 0C0B0A0E mov.l @Rm+,Rn */
	IF(0x0C0B0A10u); { u32 t_ = PR; IF(0x0C0B0A12u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0B0A10 rts */
}

void f_0C0B0A30(sh3_t *c)
{
	LOCALS;
L_0C0B0A30: BLKS(0x0C0B0A30u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0A32u, 1);  /* 0C0B0A30 mov.l Rm,@-Rn */
	IF(0x0C0B0A32u); r15 -= 4; W32(r15, PR); UPD(0x0C0B0A34u, 1);  /* 0C0B0A32 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0B0A34 add #imm,Rn */
	r14 = r15;  /* 0C0B0A36 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0B0A3Au, 3);  /* 0C0B0A38 mov.l Rm,@Rn */
	r1 = 0xC0B0DC0u; UPD(0x0C0B0A3Cu, 1);  /* 0C0B0A3A mov.l @(disp,pc),Rn */
	IF(0x0C0B0A3Cu); { u32 t_ = r1; PR = 0x0C0B0A40u; IF(0x0C0B0A3Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B0DC0, 0x0C0B0DC0u, 0x0C0B0A40u); }  /* 0C0B0A3C jsr @Rn */
L_0C0B0A40: BLKS(0x0C0B0A40u);
	W32(r14 + 0x4u, r0); UPD(0x0C0B0A42u, 1);  /* 0C0B0A40 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14); UPD(0x0C0B0A44u, 1);  /* 0C0B0A42 mov.l @Rm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0B0A46u, 1);  /* 0C0B0A44 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x8u); UPD(0x0C0B0A48u, 1);  /* 0C0B0A46 mov.l @(disp,Rm),Rn */
	r1 = R32(r1); UPD(0x0C0B0A4Au, 1);  /* 0C0B0A48 mov.l @Rm,Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0B0A4Cu, 1);  /* 0C0B0A4A mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B0A4Eu, 1);  /* 0C0B0A4C mov.l @(disp,Rm),Rn */
	r4 = r1;  /* 0C0B0A4E mov Rm,Rn */
	r1 = 0xC0B0DE0u; UPD(0x0C0B0A52u, 2);  /* 0C0B0A50 mov.l @(disp,pc),Rn */
	IF(0x0C0B0A52u); { u32 t_ = r1; PR = 0x0C0B0A56u; IF(0x0C0B0A54u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B0DE0, 0x0C0B0DE0u, 0x0C0B0A56u); }  /* 0C0B0A52 jsr @Rn */
L_0C0B0A56: BLKS(0x0C0B0A56u);
	r1 = R32(r14 + 0xCu); UPD(0x0C0B0A58u, 1);  /* 0C0B0A56 mov.l @(disp,Rm),Rn */
	r0 = r1;  /* 0C0B0A58 mov Rm,Rn */
	r14 += 0x10u;  /* 0C0B0A5A add #imm,Rn */
	r15 = r14;  /* 0C0B0A5C mov Rm,Rn */
	IF(0x0C0B0A5Eu); PR = R32(r15); r15 += 4; UPD(0x0C0B0A60u, 4);  /* 0C0B0A5E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0A62u, 1);  /* 0C0B0A60 mov.l @Rm+,Rn */
	IF(0x0C0B0A62u); { u32 t_ = PR; IF(0x0C0B0A64u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0B0A62 rts */
}

/* FUN_0c0b0dc0 */
void f_0C0B0DC0(sh3_t *c)
{
	LOCALS;
L_0C0B0DC0: BLKS(0x0C0B0DC0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0DC2u, 1);  /* 0C0B0DC0 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C0B0DC2 mov Rm,Rn */
	IF(0x0C0B0DC4u); r0 = ((c->sr & ~1u) | T);  /* 0C0B0DC4 stc sr,Rn */
	r1 = 0xC04AD2Cu; UPD(0x0C0B0DC8u, 3);  /* 0C0B0DC6 mov.l @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C0B0DC8 mov #imm,Rn */
	W32(r1, r2); UPD(0x0C0B0DCCu, 2);  /* 0C0B0DCA mov.l Rm,@Rn */
	r15 = r14;  /* 0C0B0DCC mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0DD0u, 2);  /* 0C0B0DCE mov.l @Rm+,Rn */
	IF(0x0C0B0DD0u); { u32 t_ = PR; IF(0x0C0B0DD2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0B0DD0 rts */
}

/* FUN_0c0b0de0 */
void f_0C0B0DE0(sh3_t *c)
{
	LOCALS;
L_0C0B0DE0: BLKS(0x0C0B0DE0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0DE2u, 1);  /* 0C0B0DE0 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0B0DE2 add #imm,Rn */
	r14 = r15;  /* 0C0B0DE4 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0B0DE8u, 3);  /* 0C0B0DE6 mov.l Rm,@Rn */
	IF(0x0C0B0DE8u); ARG0(0x440Eu); SET_SR(r4); UPDI(0x0C0B0DEAu);  /* 0C0B0DE8 ldc Rn,sr */
L_0C0B0DEA: BLKS(0x0C0B0DEAu);
	r2 = 0xC04AD2Cu; UPD(0x0C0B0DECu, 1);  /* 0C0B0DEA mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B0DEC mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0B0DF0u, 2);  /* 0C0B0DEE mov.l Rm,@Rn */
	r14 += 0x4u;  /* 0C0B0DF0 add #imm,Rn */
	r15 = r14;  /* 0C0B0DF2 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0DF6u, 3);  /* 0C0B0DF4 mov.l @Rm+,Rn */
	IF(0x0C0B0DF6u); { u32 t_ = PR; IF(0x0C0B0DF8u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0B0DF6 rts */
}

/* FUN_0c0b0e00 */
void f_0C0B0E00(sh3_t *c)
{
	LOCALS;
L_0C0B0E00: BLKS(0x0C0B0E00u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0E02u, 1);  /* 0C0B0E00 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C0B0E02 mov Rm,Rn */
	r2 = 0xA0000000u; UPD(0x0C0B0E06u, 2);  /* 0C0B0E04 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C0B0E06 mov Rm,Rn */
	IF(0x0C0B0E08u); { u32 tv_ = (r2 + 0x0C0B0E0Cu); u32 t_ = PHYS(tv_); r3 = 0xFFFFFFECu; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B0E08 braf Rn */
}

void f_0C0B0E0C(sh3_t *c)
{
	LOCALS;
L_0C0B0E0C: BLKS(0x0C0B0E0Cu);
	r1 = 0xF0000000u; UPD(0x0C0B0E0Eu, 1);  /* 0C0B0E0C mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C0B0E0E mov #imm,Rn */
	r2 = 0x400u; UPD(0x0C0B0E12u, 2);  /* 0C0B0E10 mov.l @(disp,pc),Rn */
L_0C0B0E12: BLKS(0x0C0B0E12u);
	W32(r1, r0); UPD(0x0C0B0E14u, 1);  /* 0C0B0E12 mov.l Rm,@Rn */
	IF(0x0C0B0E14u); r2 -= 1; T = r2 == 0;  /* 0C0B0E14 dt Rn */
	{ u32 c_ = !T; r1 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0B0E12u, 4); goto L_0C0B0E12; } goto L_0C0B0E1A; }  /* 0C0B0E16 bf/s */
L_0C0B0E1A: BLKS(0x0C0B0E1Au);
	r0 = R32(r3); UPD(0x0C0B0E1Cu, 2);  /* 0C0B0E1A mov.l @Rm,Rn */
	r0 |= 0x8u;  /* 0C0B0E1C or #imm,r0 */
	W32(r3, r0); UPD(0x0C0B0E20u, 2);  /* 0C0B0E1E mov.l Rm,@Rn */
	{ IF(0x0C0B0E22u); ; /* slot nop */ UPD(0x0C0B0E30u, 3); goto L_0C0B0E30; }  /* 0C0B0E20 bra */
L_0C0B0E30: BLKS(0x0C0B0E30u);
	r15 = r14;  /* 0C0B0E30 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0E34u, 2);  /* 0C0B0E32 mov.l @Rm+,Rn */
	IF(0x0C0B0E34u); { u32 t_ = PR; IF(0x0C0B0E36u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0B0E34 rts */
}

/* dma_start */
void f_0C0B0E40(sh3_t *c)
{
	LOCALS;
L_0C0B0E40: BLKS(0x0C0B0E40u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0E42u, 1);  /* 0C0B0E40 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0B0E42 add #imm,Rn */
	r14 = r15;  /* 0C0B0E44 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0B0E48u, 3);  /* 0C0B0E46 mov.l Rm,@Rn */
	r1 = 0x1u;  /* 0C0B0E48 mov #imm,Rn */
	r2 = 0xA4000060u; UPD(0x0C0B0E4Cu, 2);  /* 0C0B0E4A mov.l @(disp,pc),Rn */
	r7 = r4;  /* 0C0B0E4C mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0B0E50u, 2);  /* 0C0B0E4E mov.w @Rm,Rn */
	W16(r2, r1); UPD(0x0C0B0E52u, 1);  /* 0C0B0E50 mov.w Rm,@Rn */
	r0 = R32(r7 + 0x0u); UPD(0x0C0B0E54u, 1);  /* 0C0B0E52 mov.l @(disp,Rm),Rn */
	r6 = 0xA4000020u; UPD(0x0C0B0E56u, 1);  /* 0C0B0E54 mov.l @(disp,pc),Rn */
	IF(0x0C0B0E56u); r0 <<= 2;  /* 0C0B0E56 shll2 Rn */
	r1 = R32(r7 + 0x4u); UPD(0x0C0B0E5Au, 2);  /* 0C0B0E58 mov.l @(disp,Rm),Rn */
	IF(0x0C0B0E5Au); r0 <<= 2;  /* 0C0B0E5A shll2 Rn */
	r2 = R32(r7 + 0x8u); UPD(0x0C0B0E5Eu, 2);  /* 0C0B0E5C mov.l @(disp,Rm),Rn */
	r6 += r0;  /* 0C0B0E5E add Rm,Rn */
	r3 = R32(r7 + 0xCu); UPD(0x0C0B0E62u, 2);  /* 0C0B0E60 mov.l @(disp,Rm),Rn */
	r0 = R32(r6 + 0xCu); UPD(0x0C0B0E64u, 1);  /* 0C0B0E62 mov.l @(disp,Rm),Rn */
	T = (r0 & 0x1u) == 0;  /* 0C0B0E64 tst #imm,r0 */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B0EA8u, 4); goto L_0C0B0EA8; } goto L_0C0B0E6A; }  /* 0C0B0E66 bf/s */
L_0C0B0E6A: BLKS(0x0C0B0E6Au);
	W32(r6 + 0x0u, r1); UPD(0x0C0B0E6Cu, 2);  /* 0C0B0E6A mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x4u, r2); UPD(0x0C0B0E6Eu, 1);  /* 0C0B0E6C mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x8u, r3); UPD(0x0C0B0E70u, 1);  /* 0C0B0E6E mov.l Rm,@(disp,Rn) */
	r0 = R32(r7 + 0x10u); UPD(0x0C0B0E72u, 1);  /* 0C0B0E70 mov.l @(disp,Rm),Rn */
	r1 = R32(r7 + 0x14u); UPD(0x0C0B0E74u, 1);  /* 0C0B0E72 mov.l @(disp,Rm),Rn */
	r2 = R32(r7 + 0x18u); UPD(0x0C0B0E76u, 1);  /* 0C0B0E74 mov.l @(disp,Rm),Rn */
	r3 = R32(r7 + 0x1Cu); UPD(0x0C0B0E78u, 1);  /* 0C0B0E76 mov.l @(disp,Rm),Rn */
	r4 = R32(r7 + 0x20u); UPD(0x0C0B0E7Au, 1);  /* 0C0B0E78 mov.l @(disp,Rm),Rn */
	IF(0x0C0B0E7Au); r1 <<= 16;  /* 0C0B0E7A shll16 Rn */
	IF(0x0C0B0E7Cu); r0 <<= 8;  /* 0C0B0E7C shll8 Rn */
	IF(0x0C0B0E7Eu); r1 >>= 2;  /* 0C0B0E7E shlr2 Rn */
	IF(0x0C0B0E80u); r0 <<= 2;  /* 0C0B0E80 shll2 Rn */
	IF(0x0C0B0E82u); r2 <<= 2;  /* 0C0B0E82 shll2 Rn */
	IF(0x0C0B0E84u); r0 <<= 2;  /* 0C0B0E84 shll2 Rn */
	IF(0x0C0B0E86u); r2 <<= 2;  /* 0C0B0E86 shll2 Rn */
	IF(0x0C0B0E88u); r3 <<= 2;  /* 0C0B0E88 shll2 Rn */
	IF(0x0C0B0E8Au); T = r2 >> 31; r2 <<= 1;  /* 0C0B0E8A shll Rn */
	r0 |= r1;  /* 0C0B0E8C or Rm,Rn */
	IF(0x0C0B0E8Eu); T = r3 >> 31; r3 <<= 1;  /* 0C0B0E8E shll Rn */
	r0 |= r2;  /* 0C0B0E90 or Rm,Rn */
	IF(0x0C0B0E92u); r4 <<= 8;  /* 0C0B0E92 shll8 Rn */
	r0 |= r3;  /* 0C0B0E94 or Rm,Rn */
	r0 |= r4;  /* 0C0B0E96 or Rm,Rn */
	r0 |= 0x1u;  /* 0C0B0E98 or #imm,r0 */
	{ W32(r6 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B0EA8u, 19); goto L_0C0B0EA8; }  /* 0C0B0E9A bra */
L_0C0B0EA8: BLKS(0x0C0B0EA8u);
	r14 += 0x4u;  /* 0C0B0EA8 add #imm,Rn */
	r15 = r14;  /* 0C0B0EAA mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0EAEu, 3);  /* 0C0B0EAC mov.l @Rm+,Rn */
	IF(0x0C0B0EAEu); { u32 t_ = PR; IF(0x0C0B0EB0u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0B0EAE rts */
}

/* dma_busy */
void f_0C0B0EC0(sh3_t *c)
{
	LOCALS;
L_0C0B0EC0: BLKS(0x0C0B0EC0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0EC2u, 1);  /* 0C0B0EC0 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0B0EC2 add #imm,Rn */
	r14 = r15;  /* 0C0B0EC4 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0B0EC8u, 3);  /* 0C0B0EC6 mov.l Rm,@Rn */
	r2 = 0xA400002Cu; UPD(0x0C0B0ECAu, 1);  /* 0C0B0EC8 mov.l @(disp,pc),Rn */
	IF(0x0C0B0ECAu); r4 <<= 2;  /* 0C0B0ECA shll2 Rn */
	IF(0x0C0B0ECCu); r4 <<= 2;  /* 0C0B0ECC shll2 Rn */
	r2 += r4;  /* 0C0B0ECE add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0B0ED2u, 4);  /* 0C0B0ED0 mov.l @Rm,Rn */
	r1 = 0xFFFFFFFCu;  /* 0C0B0ED2 mov #imm,Rn */
	T = (r0 & 0x2u) == 0;  /* 0C0B0ED4 tst #imm,r0 */
	r1 &= r0;  /* 0C0B0ED6 and Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B0EE8u, 6); goto L_0C0B0EE8; } goto L_0C0B0EDC; }  /* 0C0B0ED8 bt/s */
L_0C0B0EDC: BLKS(0x0C0B0EDCu);
	W32(r2, r1); UPD(0x0C0B0EDEu, 2);  /* 0C0B0EDC mov.l Rm,@Rn */
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0B0EE8u, 3); goto L_0C0B0EE8; }  /* 0C0B0EDE bra */
L_0C0B0EE8: BLKS(0x0C0B0EE8u);
	r14 += 0x4u;  /* 0C0B0EE8 add #imm,Rn */
	r15 = r14;  /* 0C0B0EEA mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B0EEEu, 3);  /* 0C0B0EEC mov.l @Rm+,Rn */
	IF(0x0C0B0EEEu); { u32 t_ = PR; IF(0x0C0B0EF0u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0B0EEE rts */
}

/* nand_read */
void f_0C0B0F00(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C0B1048);
L_0C0B0F00: BLKS(0x0C0B0F00u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B0F02u, 1);  /* 0C0B0F00 mov.l Rm,@-Rn */
	IF(0x0C0B0F02u); r15 -= 4; W32(r15, PR); UPD(0x0C0B0F04u, 1);  /* 0C0B0F02 sts.l pr,@-Rn */
	r15 += 0xFFFFFFB8u;  /* 0C0B0F04 add #imm,Rn */
	r14 = r15;  /* 0C0B0F06 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0B0F0Au, 3);  /* 0C0B0F08 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0B0F0Cu, 1);  /* 0C0B0F0A mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r6); UPD(0x0C0B0F0Eu, 1);  /* 0C0B0F0C mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r7); UPD(0x0C0B0F10u, 1);  /* 0C0B0F0E mov.l Rm,@(disp,Rn) */
	r2 = 0xB0C00003u; UPD(0x0C0B0F12u, 1);  /* 0C0B0F10 mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C0B0F12 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B0F16u, 2);  /* 0C0B0F14 mov.b Rm,@Rn */
	r1 = 0xC21717Cu; UPD(0x0C0B0F18u, 1);  /* 0C0B0F16 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0B0F1Au, 1);  /* 0C0B0F18 mov.l @Rm,Rn */
	r0 = 0x40u;  /* 0C0B0F1A mov #imm,Rn */
	r0 += r14;  /* 0C0B0F1C add Rm,Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C0B0F20u, 3);  /* 0C0B0F1E mov.l Rm,@(disp,Rn) */
	r1 = 0x1u;  /* 0C0B0F20 mov #imm,Rn */
	r2 = 0x40u;  /* 0C0B0F22 mov #imm,Rn */
	r2 += r14;  /* 0C0B0F24 add Rm,Rn */
	r2 = R32(r2 + 0x4u); UPD(0x0C0B0F28u, 4);  /* 0C0B0F26 mov.l @(disp,Rm),Rn */
	T = r2 > r1;  /* 0C0B0F28 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B0F36u, 4); goto L_0C0B0F36; }  /* 0C0B0F2A bf */
L_0C0B0F2C: BLKS(0x0C0B0F2Cu);
	r0 = 0x40u;  /* 0C0B0F2C mov #imm,Rn */
	r0 += r14;  /* 0C0B0F2E add Rm,Rn */
	r0 = R32(r0 + 0x4u); UPD(0x0C0B0F32u, 3);  /* 0C0B0F30 mov.l @(disp,Rm),Rn */
	T = r0 == 0x2u;  /* 0C0B0F32 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0B0FC0u, 4); goto L_0C0B0FC0; }  /* 0C0B0F34 bt */
L_0C0B0F36: BLKS(0x0C0B0F36u);
	r2 = R32(r14 + 0x8u); UPD(0x0C0B0F38u, 1);  /* 0C0B0F36 mov.l @(disp,Rm),Rn */
	r1 = 0xFFu; UPD(0x0C0B0F3Au, 1);  /* 0C0B0F38 mov.w @(disp,pc),Rn */
	T = r2 > r1;  /* 0C0B0F3A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B0F50u, 4); goto L_0C0B0F50; }  /* 0C0B0F3C bt */
L_0C0B0F3E: BLKS(0x0C0B0F3Eu);
	r2 = r14;  /* 0C0B0F3E mov Rm,Rn */
	r2 += 0x40u;  /* 0C0B0F40 add #imm,Rn */
	r1 = 0x0u;  /* 0C0B0F42 mov #imm,Rn */
	W32(r2 + 0x0u, r1); UPD(0x0C0B0F46u, 4);  /* 0C0B0F44 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0B0F48u); ; /* slot nop */ UPD(0x0C0B0F78u, 3); goto L_0C0B0F78; }  /* 0C0B0F46 bra */
L_0C0B0F50: BLKS(0x0C0B0F50u);
	r2 = R32(r14 + 0x8u); UPD(0x0C0B0F52u, 1);  /* 0C0B0F50 mov.l @(disp,Rm),Rn */
	r1 = 0x1FFu; UPD(0x0C0B0F54u, 1);  /* 0C0B0F52 mov.w @(disp,pc),Rn */
	T = r2 > r1;  /* 0C0B0F54 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0B0F70u, 4); goto L_0C0B0F70; }  /* 0C0B0F56 bt */
L_0C0B0F58: BLKS(0x0C0B0F58u);
	r2 = r14;  /* 0C0B0F58 mov Rm,Rn */
	r2 += 0x40u;  /* 0C0B0F5A add #imm,Rn */
	r1 = 0x1u;  /* 0C0B0F5C mov #imm,Rn */
	W32(r2 + 0x0u, r1); UPD(0x0C0B0F60u, 4);  /* 0C0B0F5E mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0B0F62u); ; /* slot nop */ UPD(0x0C0B0F78u, 3); goto L_0C0B0F78; }  /* 0C0B0F60 bra */
L_0C0B0F70: BLKS(0x0C0B0F70u);
	r2 = r14;  /* 0C0B0F70 mov Rm,Rn */
	r2 += 0x40u;  /* 0C0B0F72 add #imm,Rn */
	r1 = 0x50u;  /* 0C0B0F74 mov #imm,Rn */
	W32(r2 + 0x0u, r1); UPD(0x0C0B0F78u, 4);  /* 0C0B0F76 mov.l Rm,@(disp,Rn) */
L_0C0B0F78: BLKS(0x0C0B0F78u);
	r2 = 0xB0000001u; UPD(0x0C0B0F7Au, 1);  /* 0C0B0F78 mov.l @(disp,pc),Rn */
	r1 = r14;  /* 0C0B0F7A mov Rm,Rn */
	r1 += 0x40u;  /* 0C0B0F7C add #imm,Rn */
	r1 += 0x3u;  /* 0C0B0F7E add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B0F82u, 4);  /* 0C0B0F80 mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0B0F84u, 1);  /* 0C0B0F82 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0B0F86u, 1);  /* 0C0B0F84 mov.l @(disp,pc),Rn */
	r1 = r14;  /* 0C0B0F86 mov Rm,Rn */
	r1 += 0xBu;  /* 0C0B0F88 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B0F8Cu, 3);  /* 0C0B0F8A mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0B0F8Eu, 1);  /* 0C0B0F8C mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0B0F90u, 1);  /* 0C0B0F8E mov.l @(disp,pc),Rn */
	r1 = r14;  /* 0C0B0F90 mov Rm,Rn */
	r1 += 0x7u;  /* 0C0B0F92 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B0F96u, 3);  /* 0C0B0F94 mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0B0F98u, 1);  /* 0C0B0F96 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0B0F9Au, 1);  /* 0C0B0F98 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B0F9Cu, 1);  /* 0C0B0F9A mov.l @(disp,Rm),Rn */
	IF(0x0C0B0F9Cu); r1 >>= 8;  /* 0C0B0F9C shlr8 Rn */
	W8(r2, r1); UPD(0x0C0B0FA0u, 2);  /* 0C0B0F9E mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0B0FA2u, 1);  /* 0C0B0FA0 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B0FA4u, 1);  /* 0C0B0FA2 mov.l @(disp,Rm),Rn */
	IF(0x0C0B0FA4u); r1 >>= 16;  /* 0C0B0FA4 shlr16 Rn */
	W8(r2, r1); UPD(0x0C0B0FA8u, 2);  /* 0C0B0FA6 mov.b Rm,@Rn */
	{ IF(0x0C0B0FAAu); ; /* slot nop */ UPD(0x0C0B0FF0u, 3); goto L_0C0B0FF0; }  /* 0C0B0FA8 bra */
L_0C0B0FC0: BLKS(0x0C0B0FC0u);
	r2 = 0xB0000001u; UPD(0x0C0B0FC2u, 1);  /* 0C0B0FC0 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B0FC2 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B0FC6u, 2);  /* 0C0B0FC4 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0B0FC8u, 1);  /* 0C0B0FC6 mov.l @(disp,pc),Rn */
	r1 = r14;  /* 0C0B0FC8 mov Rm,Rn */
	r1 += 0xBu;  /* 0C0B0FCA add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B0FCEu, 3);  /* 0C0B0FCC mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0B0FD0u, 1);  /* 0C0B0FCE mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0B0FD2u, 1);  /* 0C0B0FD0 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0B0FD4u, 1);  /* 0C0B0FD2 mov.l @(disp,Rm),Rn */
	IF(0x0C0B0FD4u); r1 >>= 8;  /* 0C0B0FD4 shlr8 Rn */
	W8(r2, r1); UPD(0x0C0B0FD8u, 2);  /* 0C0B0FD6 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0B0FDAu, 1);  /* 0C0B0FD8 mov.l @(disp,pc),Rn */
	r1 = r14;  /* 0C0B0FDA mov Rm,Rn */
	r1 += 0x7u;  /* 0C0B0FDC add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B0FE0u, 3);  /* 0C0B0FDE mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0B0FE2u, 1);  /* 0C0B0FE0 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0B0FE4u, 1);  /* 0C0B0FE2 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B0FE6u, 1);  /* 0C0B0FE4 mov.l @(disp,Rm),Rn */
	IF(0x0C0B0FE6u); r1 >>= 8;  /* 0C0B0FE6 shlr8 Rn */
	W8(r2, r1); UPD(0x0C0B0FEAu, 2);  /* 0C0B0FE8 mov.b Rm,@Rn */
	r2 = 0xB0000001u; UPD(0x0C0B0FECu, 1);  /* 0C0B0FEA mov.l @(disp,pc),Rn */
	r1 = 0x30u;  /* 0C0B0FEC mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B0FF0u, 2);  /* 0C0B0FEE mov.b Rm,@Rn */
L_0C0B0FF0: BLKS(0x0C0B0FF0u);
	r1 = r14;  /* 0C0B0FF0 mov Rm,Rn */
	r1 += 0x1Cu;  /* 0C0B0FF2 add #imm,Rn */
	r4 = r1;  /* 0C0B0FF4 mov Rm,Rn */
	r5 = 0x0u;  /* 0C0B0FF6 mov #imm,Rn */
	r6 = 0x24u;  /* 0C0B0FF8 mov #imm,Rn */
	r1 = 0xC04A750u; UPD(0x0C0B0FFCu, 6);  /* 0C0B0FFA mov.l @(disp,pc),Rn */
	IF(0x0C0B0FFCu); { u32 t_ = r1; PR = 0x0C0B1000u; IF(0x0C0B0FFEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A750, 0x0C04A750u, 0x0C0B1000u); }  /* 0C0B0FFC jsr @Rn */
L_0C0B1000: BLKS(0x0C0B1000u);
	r2 = r14;  /* 0C0B1000 mov Rm,Rn */
	r2 += 0x1Cu;  /* 0C0B1002 add #imm,Rn */
	r1 = 0x0u;  /* 0C0B1004 mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0B1008u, 4);  /* 0C0B1006 mov.l Rm,@Rn */
	r2 = r14;  /* 0C0B1008 mov Rm,Rn */
	r2 += 0x1Cu;  /* 0C0B100A add #imm,Rn */
	r1 = 0xB0000000u; UPD(0x0C0B100Eu, 3);  /* 0C0B100C mov.l @(disp,pc),Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C0B1010u, 1);  /* 0C0B100E mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0B1010 mov Rm,Rn */
	r2 += 0x1Cu;  /* 0C0B1012 add #imm,Rn */
	r1 = R32(r14); UPD(0x0C0B1016u, 3);  /* 0C0B1014 mov.l @Rm,Rn */
	W32(r2 + 0x8u, r1); UPD(0x0C0B1018u, 1);  /* 0C0B1016 mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0B1018 mov Rm,Rn */
	r2 += 0x1Cu;  /* 0C0B101A add #imm,Rn */
	r1 = R32(r14 + 0xCu); UPD(0x0C0B101Eu, 3);  /* 0C0B101C mov.l @(disp,Rm),Rn */
	W32(r2 + 0xCu, r1); UPD(0x0C0B1020u, 1);  /* 0C0B101E mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0B1020 mov Rm,Rn */
	r2 += 0x1Cu;  /* 0C0B1022 add #imm,Rn */
	r1 = 0x0u;  /* 0C0B1024 mov #imm,Rn */
	W32(r2 + 0x10u, r1); UPD(0x0C0B1028u, 4);  /* 0C0B1026 mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0B1028 mov Rm,Rn */
	r2 += 0x1Cu;  /* 0C0B102A add #imm,Rn */
	r1 = 0x1u;  /* 0C0B102C mov #imm,Rn */
	W32(r2 + 0x14u, r1); UPD(0x0C0B1030u, 4);  /* 0C0B102E mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0B1030 mov Rm,Rn */
	r2 += 0x1Cu;  /* 0C0B1032 add #imm,Rn */
	r1 = 0x1u;  /* 0C0B1034 mov #imm,Rn */
	W32(r2 + 0x18u, r1); UPD(0x0C0B1038u, 4);  /* 0C0B1036 mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0B1038 mov Rm,Rn */
	r2 += 0x1Cu;  /* 0C0B103A add #imm,Rn */
	r1 = 0x0u;  /* 0C0B103C mov #imm,Rn */
	W32(r2 + 0x1Cu, r1); UPD(0x0C0B1040u, 4);  /* 0C0B103E mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0B1040 mov Rm,Rn */
	r2 += 0x1Cu;  /* 0C0B1042 add #imm,Rn */
	r1 = 0x4u;  /* 0C0B1044 mov #imm,Rn */
	W32(r2 + 0x20u, r1); UPD(0x0C0B1048u, 4);  /* 0C0B1046 mov.l Rm,@(disp,Rn) */
L_0C0B1048: BLKS(0x0C0B1048u);
	SPIN_SAVE(0C0B1048);
	r1 = 0xA4000128u; UPD(0x0C0B104Au, 1);  /* 0C0B1048 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)RS8(0C0B1048, r1); UPD(0x0C0B104Cu, 1);  /* 0C0B104A mov.b @Rm,Rn */
	r0 &= 0x20u;  /* 0C0B104C and #imm,r0 */
	r1 = r0 & 0xFF;  /* 0C0B104E extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0B1050 tst Rm,Rn */
	if (T) { SPIN_FFD(0C0B1048, 8); UPD(0x0C0B1048u, 6); goto L_0C0B1048; }  /* 0C0B1052 bt */
L_0C0B1054: BLKS(0x0C0B1054u);
	IF(0x0C0B1054u); ;  /* 0C0B1054 nop */
	UPD(0x0C0B1056u, 1);
L_0C0B1056: BLKS(0x0C0B1056u);
	r1 = r14;  /* 0C0B1056 mov Rm,Rn */
	r1 += 0x1Cu;  /* 0C0B1058 add #imm,Rn */
	r4 = r1;  /* 0C0B105A mov Rm,Rn */
	r1 = 0xC0B0E40u; UPD(0x0C0B105Eu, 4);  /* 0C0B105C mov.l @(disp,pc),Rn */
	IF(0x0C0B105Eu); { u32 t_ = r1; PR = 0x0C0B1062u; IF(0x0C0B1060u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B0E40, 0x0C0B0E40u, 0x0C0B1062u); }  /* 0C0B105E jsr @Rn */
L_0C0B1062: BLKS(0x0C0B1062u);
	T = (r0 & r0) == 0;  /* 0C0B1062 tst Rm,Rn */
	if (T) { UPD(0x0C0B1056u, 4); goto L_0C0B1056; }  /* 0C0B1064 bt */
L_0C0B1066: BLKS(0x0C0B1066u);
	IF(0x0C0B1066u); ;  /* 0C0B1066 nop */
	UPD(0x0C0B1068u, 1);
L_0C0B1068: BLKS(0x0C0B1068u);
	r4 = 0x0u;  /* 0C0B1068 mov #imm,Rn */
	r1 = 0xC0B0EC0u; UPD(0x0C0B106Cu, 2);  /* 0C0B106A mov.l @(disp,pc),Rn */
	IF(0x0C0B106Cu); { u32 t_ = r1; PR = 0x0C0B1070u; IF(0x0C0B106Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B0EC0, 0x0C0B0EC0u, 0x0C0B1070u); }  /* 0C0B106C jsr @Rn */
L_0C0B1070: BLKS(0x0C0B1070u);
	T = (r0 & r0) == 0;  /* 0C0B1070 tst Rm,Rn */
	if (!T) { UPD(0x0C0B1068u, 4); goto L_0C0B1068; }  /* 0C0B1072 bf */
L_0C0B1074: BLKS(0x0C0B1074u);
	r2 = 0xB0C00003u; UPD(0x0C0B1076u, 1);  /* 0C0B1074 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B1076 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B107Au, 2);  /* 0C0B1078 mov.b Rm,@Rn */
	r2 = 0xB0C00003u; UPD(0x0C0B107Cu, 1);  /* 0C0B107A mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C0B107C mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B1080u, 2);  /* 0C0B107E mov.b Rm,@Rn */
	r2 = 0xB0000001u; UPD(0x0C0B1082u, 1);  /* 0C0B1080 mov.l @(disp,pc),Rn */
	r1 = 0x70u;  /* 0C0B1082 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B1086u, 2);  /* 0C0B1084 mov.b Rm,@Rn */
	r1 = 0xB0000000u; UPD(0x0C0B1088u, 1);  /* 0C0B1086 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B108Au, 1);  /* 0C0B1088 mov.b @Rm,Rn */
	r1 = r1 & 0xFF;  /* 0C0B108A extu.b Rm,Rn */
	W32(r14 + 0x18u, r1); UPD(0x0C0B108Eu, 2);  /* 0C0B108C mov.l Rm,@(disp,Rn) */
	r2 = 0xB0C00003u; UPD(0x0C0B1090u, 1);  /* 0C0B108E mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B1090 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B1094u, 2);  /* 0C0B1092 mov.b Rm,@Rn */
	r0 = R32(r14 + 0x18u); UPD(0x0C0B1096u, 1);  /* 0C0B1094 mov.l @(disp,Rm),Rn */
	r0 ^= 0x1u;  /* 0C0B1096 xor #imm,r0 */
	r0 &= 0x1u;  /* 0C0B1098 and #imm,r0 */
	r14 += 0x48u;  /* 0C0B109A add #imm,Rn */
	r15 = r14;  /* 0C0B109C mov Rm,Rn */
	IF(0x0C0B109Eu); PR = R32(r15); r15 += 4; UPD(0x0C0B10A0u, 5);  /* 0C0B109E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B10A2u, 1);  /* 0C0B10A0 mov.l @Rm+,Rn */
	IF(0x0C0B10A2u); { u32 t_ = PR; IF(0x0C0B10A4u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0B10A2 rts */
}

/* FUN_0c0b10d0 */
void f_0C0B10D0(sh3_t *c)
{
	LOCALS;
L_0C0B10D0: BLKS(0x0C0B10D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B10D2u, 1);  /* 0C0B10D0 mov.l Rm,@-Rn */
	IF(0x0C0B10D2u); r15 -= 4; W32(r15, PR); UPD(0x0C0B10D4u, 1);  /* 0C0B10D2 sts.l pr,@-Rn */
	r15 += 0xFFFFFFECu;  /* 0C0B10D4 add #imm,Rn */
	r14 = r15;  /* 0C0B10D6 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0B10DAu, 3);  /* 0C0B10D8 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0B10DCu, 1);  /* 0C0B10DA mov.l Rm,@(disp,Rn) */
	r1 = 0xC21717Cu; UPD(0x0C0B10DEu, 1);  /* 0C0B10DC mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0B10E0u, 1);  /* 0C0B10DE mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0xCu); UPD(0x0C0B10E2u, 1);  /* 0C0B10E0 mov.l @(disp,Rm),Rn */
	IF(0x0C0B10E2u); MACL = r2 * r1;  /* 0C0B10E2 mul.l Rm,Rn */
	IF(0x0C0B10E4u); r1 = MACL;  /* 0C0B10E4 sts macl,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0B10E8u, 4);  /* 0C0B10E6 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14); UPD(0x0C0B10EAu, 1);  /* 0C0B10E8 mov.l @Rm,Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0B10ECu, 1);  /* 0C0B10EA mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C0B10EC mov #imm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0B10F0u, 2);  /* 0C0B10EE mov.l Rm,@(disp,Rn) */
L_0C0B10F0: BLKS(0x0C0B10F0u);
	r1 = 0xC21717Cu; UPD(0x0C0B10F2u, 1);  /* 0C0B10F0 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C0B10F4u, 1);  /* 0C0B10F2 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0xCu); UPD(0x0C0B10F6u, 1);  /* 0C0B10F4 mov.l @(disp,Rm),Rn */
	T = (s32)r2 >= (s32)r1;  /* 0C0B10F6 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C0B1100u, 4); goto L_0C0B1100; }  /* 0C0B10F8 bf */
L_0C0B10FA: BLKS(0x0C0B10FAu);
	{ IF(0x0C0B10FCu); ; /* slot nop */ UPD(0x0C0B1140u, 3); goto L_0C0B1140; }  /* 0C0B10FA bra */
L_0C0B1100: BLKS(0x0C0B1100u);
	r2 = R32(r14 + 0xCu); UPD(0x0C0B1102u, 1);  /* 0C0B1100 mov.l @(disp,Rm),Rn */
	r3 = R32(r14 + 0x8u); UPD(0x0C0B1104u, 1);  /* 0C0B1102 mov.l @(disp,Rm),Rn */
	r1 = 0xC21717Cu; UPD(0x0C0B1106u, 1);  /* 0C0B1104 mov.l @(disp,pc),Rn */
	r1 = R32(r1 + 0x8u); UPD(0x0C0B1108u, 1);  /* 0C0B1106 mov.l @(disp,Rm),Rn */
	r4 = r2;  /* 0C0B1108 mov Rm,Rn */
	r5 = r3;  /* 0C0B110A mov Rm,Rn */
	r6 = 0x0u;  /* 0C0B110C mov #imm,Rn */
	r7 = r1;  /* 0C0B110E mov Rm,Rn */
	r1 = 0xC0B0F00u; UPD(0x0C0B1112u, 5);  /* 0C0B1110 mov.l @(disp,pc),Rn */
	IF(0x0C0B1112u); { u32 t_ = r1; PR = 0x0C0B1116u; IF(0x0C0B1114u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B0F00, 0x0C0B0F00u, 0x0C0B1116u); }  /* 0C0B1112 jsr @Rn */
L_0C0B1116: BLKS(0x0C0B1116u);
	T = (r0 & r0) == 0;  /* 0C0B1116 tst Rm,Rn */
	if (!T) { UPD(0x0C0B1120u, 4); goto L_0C0B1120; }  /* 0C0B1118 bf */
L_0C0B111A: BLKS(0x0C0B111Au);
	{ IF(0x0C0B111Cu); ; /* slot nop */ UPD(0x0C0B1140u, 3); goto L_0C0B1140; }  /* 0C0B111A bra */
L_0C0B1120: BLKS(0x0C0B1120u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0B1122u, 1);  /* 0C0B1120 mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C0B1122 add #imm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0B1126u, 2);  /* 0C0B1124 mov.l Rm,@(disp,Rn) */
	r1 = 0xC21717Cu; UPD(0x0C0B1128u, 1);  /* 0C0B1126 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0B112Au, 1);  /* 0C0B1128 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x8u); UPD(0x0C0B112Cu, 1);  /* 0C0B112A mov.l @(disp,Rm),Rn */
	r1 += r2;  /* 0C0B112C add Rm,Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0B1130u, 2);  /* 0C0B112E mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x8u); UPD(0x0C0B1132u, 1);  /* 0C0B1130 mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C0B1132 add #imm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0B1136u, 2);  /* 0C0B1134 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0B1138u); ; /* slot nop */ UPD(0x0C0B10F0u, 3); goto L_0C0B10F0; }  /* 0C0B1136 bra */
L_0C0B1140: BLKS(0x0C0B1140u);
	r1 = 0xC21717Cu; UPD(0x0C0B1142u, 1);  /* 0C0B1140 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C0B1144u, 1);  /* 0C0B1142 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0xCu); UPD(0x0C0B1146u, 1);  /* 0C0B1144 mov.l @(disp,Rm),Rn */
	T = (s32)r2 >= (s32)r1;  /* 0C0B1146 cmp/ge Rm,Rn */
	IF(0x0C0B1148u); r1 = T;  /* 0C0B1148 movt Rn */
	r0 = r1;  /* 0C0B114A mov Rm,Rn */
	r14 += 0x14u;  /* 0C0B114C add #imm,Rn */
	r15 = r14;  /* 0C0B114E mov Rm,Rn */
	IF(0x0C0B1150u); PR = R32(r15); r15 += 4; UPD(0x0C0B1152u, 6);  /* 0C0B1150 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B1154u, 1);  /* 0C0B1152 mov.l @Rm+,Rn */
	IF(0x0C0B1154u); { u32 t_ = PR; IF(0x0C0B1156u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0B1154 rts */
}

void f_0C0B1160(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C0B124C);
L_0C0B1160: BLKS(0x0C0B1160u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B1162u, 1);  /* 0C0B1160 mov.l Rm,@-Rn */
	IF(0x0C0B1162u); r15 -= 4; W32(r15, PR); UPD(0x0C0B1164u, 1);  /* 0C0B1162 sts.l pr,@-Rn */
	r15 += 0xFFFFFFC4u;  /* 0C0B1164 add #imm,Rn */
	r14 = r15;  /* 0C0B1166 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0B116Au, 3);  /* 0C0B1168 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0B116Cu, 1);  /* 0C0B116A mov.l Rm,@(disp,Rn) */
	r2 = 0xB0C00003u; UPD(0x0C0B116Eu, 1);  /* 0C0B116C mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C0B116E mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B1172u, 2);  /* 0C0B1170 mov.b Rm,@Rn */
	r2 = 0xB0000001u; UPD(0x0C0B1174u, 1);  /* 0C0B1172 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFF80u;  /* 0C0B1174 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B1178u, 2);  /* 0C0B1176 mov.b Rm,@Rn */
	r1 = 0xC21717Cu; UPD(0x0C0B117Au, 1);  /* 0C0B1178 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0B117Cu, 1);  /* 0C0B117A mov.l @Rm,Rn */
	W32(r14 + 0x38u, r1); UPD(0x0C0B117Eu, 1);  /* 0C0B117C mov.l Rm,@(disp,Rn) */
	r1 = 0x1u;  /* 0C0B117E mov #imm,Rn */
	r0 = R32(r14 + 0x38u); UPD(0x0C0B1182u, 2);  /* 0C0B1180 mov.l @(disp,Rm),Rn */
	T = r0 > r1;  /* 0C0B1182 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B118Cu, 4); goto L_0C0B118C; }  /* 0C0B1184 bf */
L_0C0B1186: BLKS(0x0C0B1186u);
	r0 = R32(r14 + 0x38u); UPD(0x0C0B1188u, 1);  /* 0C0B1186 mov.l @(disp,Rm),Rn */
	T = r0 == 0x2u;  /* 0C0B1188 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0B11B0u, 4); goto L_0C0B11B0; }  /* 0C0B118A bt */
L_0C0B118C: BLKS(0x0C0B118Cu);
	r2 = 0xB0000002u; UPD(0x0C0B118Eu, 1);  /* 0C0B118C mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B118E mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B1192u, 2);  /* 0C0B1190 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0B1194u, 1);  /* 0C0B1192 mov.l @(disp,pc),Rn */
	r1 = r14;  /* 0C0B1194 mov Rm,Rn */
	r1 += 0x7u;  /* 0C0B1196 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B119Au, 3);  /* 0C0B1198 mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0B119Cu, 1);  /* 0C0B119A mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0B119Eu, 1);  /* 0C0B119C mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B11A0u, 1);  /* 0C0B119E mov.l @(disp,Rm),Rn */
	IF(0x0C0B11A0u); r1 >>= 8;  /* 0C0B11A0 shlr8 Rn */
	W8(r2, r1); UPD(0x0C0B11A4u, 2);  /* 0C0B11A2 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0B11A6u, 1);  /* 0C0B11A4 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B11A8u, 1);  /* 0C0B11A6 mov.l @(disp,Rm),Rn */
	IF(0x0C0B11A8u); r1 >>= 16;  /* 0C0B11A8 shlr16 Rn */
	W8(r2, r1); UPD(0x0C0B11ACu, 2);  /* 0C0B11AA mov.b Rm,@Rn */
	{ IF(0x0C0B11AEu); ; /* slot nop */ UPD(0x0C0B11CEu, 3); goto L_0C0B11CE; }  /* 0C0B11AC bra */
L_0C0B11B0: BLKS(0x0C0B11B0u);
	r2 = 0xB0000002u; UPD(0x0C0B11B2u, 1);  /* 0C0B11B0 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B11B2 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B11B6u, 2);  /* 0C0B11B4 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0B11B8u, 1);  /* 0C0B11B6 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B11B8 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B11BCu, 2);  /* 0C0B11BA mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0B11BEu, 1);  /* 0C0B11BC mov.l @(disp,pc),Rn */
	r1 = r14;  /* 0C0B11BE mov Rm,Rn */
	r1 += 0x7u;  /* 0C0B11C0 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B11C4u, 3);  /* 0C0B11C2 mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0B11C6u, 1);  /* 0C0B11C4 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0B11C8u, 1);  /* 0C0B11C6 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B11CAu, 1);  /* 0C0B11C8 mov.l @(disp,Rm),Rn */
	IF(0x0C0B11CAu); r1 >>= 8;  /* 0C0B11CA shlr8 Rn */
	W8(r2, r1); UPD(0x0C0B11CEu, 2);  /* 0C0B11CC mov.b Rm,@Rn */
L_0C0B11CE: BLKS(0x0C0B11CEu);
	r1 = r14;  /* 0C0B11CE mov Rm,Rn */
	r1 += 0x14u;  /* 0C0B11D0 add #imm,Rn */
	r4 = r1;  /* 0C0B11D2 mov Rm,Rn */
	r5 = 0x0u;  /* 0C0B11D4 mov #imm,Rn */
	r6 = 0x24u;  /* 0C0B11D6 mov #imm,Rn */
	r1 = 0xC04A750u; UPD(0x0C0B11DAu, 6);  /* 0C0B11D8 mov.l @(disp,pc),Rn */
	IF(0x0C0B11DAu); { u32 t_ = r1; PR = 0x0C0B11DEu; IF(0x0C0B11DCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A750, 0x0C04A750u, 0x0C0B11DEu); }  /* 0C0B11DA jsr @Rn */
L_0C0B11DE: BLKS(0x0C0B11DEu);
	r2 = r14;  /* 0C0B11DE mov Rm,Rn */
	r2 += 0x14u;  /* 0C0B11E0 add #imm,Rn */
	r1 = 0x0u;  /* 0C0B11E2 mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0B11E6u, 4);  /* 0C0B11E4 mov.l Rm,@Rn */
	r2 = r14;  /* 0C0B11E6 mov Rm,Rn */
	r2 += 0x14u;  /* 0C0B11E8 add #imm,Rn */
	r1 = R32(r14); UPD(0x0C0B11ECu, 3);  /* 0C0B11EA mov.l @Rm,Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C0B11EEu, 1);  /* 0C0B11EC mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0B11EE mov Rm,Rn */
	r2 += 0x14u;  /* 0C0B11F0 add #imm,Rn */
	r1 = 0xB0000000u; UPD(0x0C0B11F4u, 3);  /* 0C0B11F2 mov.l @(disp,pc),Rn */
	W32(r2 + 0x8u, r1); UPD(0x0C0B11F6u, 1);  /* 0C0B11F4 mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0B11F6 mov Rm,Rn */
	r2 += 0x14u;  /* 0C0B11F8 add #imm,Rn */
	r1 = 0xC21717Cu; UPD(0x0C0B11FCu, 3);  /* 0C0B11FA mov.l @(disp,pc),Rn */
	r1 = R32(r1 + 0x8u); UPD(0x0C0B11FEu, 1);  /* 0C0B11FC mov.l @(disp,Rm),Rn */
	W32(r2 + 0xCu, r1); UPD(0x0C0B1200u, 1);  /* 0C0B11FE mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0B1200 mov Rm,Rn */
	r2 += 0x14u;  /* 0C0B1202 add #imm,Rn */
	r1 = 0x1u;  /* 0C0B1204 mov #imm,Rn */
	W32(r2 + 0x10u, r1); UPD(0x0C0B1208u, 4);  /* 0C0B1206 mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0B1208 mov Rm,Rn */
	r2 += 0x14u;  /* 0C0B120A add #imm,Rn */
	r1 = 0x0u;  /* 0C0B120C mov #imm,Rn */
	W32(r2 + 0x14u, r1); UPD(0x0C0B1210u, 4);  /* 0C0B120E mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0B1210 mov Rm,Rn */
	r2 += 0x14u;  /* 0C0B1212 add #imm,Rn */
	r1 = 0x1u;  /* 0C0B1214 mov #imm,Rn */
	W32(r2 + 0x18u, r1); UPD(0x0C0B1218u, 4);  /* 0C0B1216 mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0B1218 mov Rm,Rn */
	r2 += 0x14u;  /* 0C0B121A add #imm,Rn */
	r1 = 0x0u;  /* 0C0B121C mov #imm,Rn */
	W32(r2 + 0x1Cu, r1); UPD(0x0C0B1220u, 4);  /* 0C0B121E mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0B1220 mov Rm,Rn */
	r2 += 0x14u;  /* 0C0B1222 add #imm,Rn */
	r1 = 0x4u;  /* 0C0B1224 mov #imm,Rn */
	W32(r2 + 0x20u, r1); UPD(0x0C0B1228u, 4);  /* 0C0B1226 mov.l Rm,@(disp,Rn) */
L_0C0B1228: BLKS(0x0C0B1228u);
	r1 = r14;  /* 0C0B1228 mov Rm,Rn */
	r1 += 0x14u;  /* 0C0B122A add #imm,Rn */
	r4 = r1;  /* 0C0B122C mov Rm,Rn */
	r1 = 0xC0B0E40u; UPD(0x0C0B1230u, 4);  /* 0C0B122E mov.l @(disp,pc),Rn */
	IF(0x0C0B1230u); { u32 t_ = r1; PR = 0x0C0B1234u; IF(0x0C0B1232u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B0E40, 0x0C0B0E40u, 0x0C0B1234u); }  /* 0C0B1230 jsr @Rn */
L_0C0B1234: BLKS(0x0C0B1234u);
	T = (r0 & r0) == 0;  /* 0C0B1234 tst Rm,Rn */
	if (T) { UPD(0x0C0B1228u, 4); goto L_0C0B1228; }  /* 0C0B1236 bt */
L_0C0B1238: BLKS(0x0C0B1238u);
	IF(0x0C0B1238u); ;  /* 0C0B1238 nop */
	UPD(0x0C0B123Au, 1);
L_0C0B123A: BLKS(0x0C0B123Au);
	r4 = 0x0u;  /* 0C0B123A mov #imm,Rn */
	r1 = 0xC0B0EC0u; UPD(0x0C0B123Eu, 2);  /* 0C0B123C mov.l @(disp,pc),Rn */
	IF(0x0C0B123Eu); { u32 t_ = r1; PR = 0x0C0B1242u; IF(0x0C0B1240u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B0EC0, 0x0C0B0EC0u, 0x0C0B1242u); }  /* 0C0B123E jsr @Rn */
L_0C0B1242: BLKS(0x0C0B1242u);
	T = (r0 & r0) == 0;  /* 0C0B1242 tst Rm,Rn */
	if (!T) { UPD(0x0C0B123Au, 4); goto L_0C0B123A; }  /* 0C0B1244 bf */
L_0C0B1246: BLKS(0x0C0B1246u);
	r2 = 0xB0000001u; UPD(0x0C0B1248u, 1);  /* 0C0B1246 mov.l @(disp,pc),Rn */
	r1 = 0x10u;  /* 0C0B1248 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B124Cu, 2);  /* 0C0B124A mov.b Rm,@Rn */
L_0C0B124C: BLKS(0x0C0B124Cu);
	SPIN_SAVE(0C0B124C);
	r1 = 0xA4000128u; UPD(0x0C0B124Eu, 1);  /* 0C0B124C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)RS8(0C0B124C, r1); UPD(0x0C0B1250u, 1);  /* 0C0B124E mov.b @Rm,Rn */
	r0 &= 0x20u;  /* 0C0B1250 and #imm,r0 */
	r1 = r0 & 0xFF;  /* 0C0B1252 extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0B1254 tst Rm,Rn */
	if (T) { SPIN_FFD(0C0B124C, 8); UPD(0x0C0B124Cu, 6); goto L_0C0B124C; }  /* 0C0B1256 bt */
L_0C0B1258: BLKS(0x0C0B1258u);
	r2 = 0xB0C00003u; UPD(0x0C0B125Au, 1);  /* 0C0B1258 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B125A mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B125Eu, 2);  /* 0C0B125C mov.b Rm,@Rn */
	r2 = 0xB0C00003u; UPD(0x0C0B1260u, 1);  /* 0C0B125E mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C0B1260 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B1264u, 2);  /* 0C0B1262 mov.b Rm,@Rn */
	r2 = 0xB0000001u; UPD(0x0C0B1266u, 1);  /* 0C0B1264 mov.l @(disp,pc),Rn */
	r1 = 0x70u;  /* 0C0B1266 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B126Au, 2);  /* 0C0B1268 mov.b Rm,@Rn */
	r1 = 0xB0000000u; UPD(0x0C0B126Cu, 1);  /* 0C0B126A mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B126Eu, 1);  /* 0C0B126C mov.b @Rm,Rn */
	r1 = r1 & 0xFF;  /* 0C0B126E extu.b Rm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0B1272u, 2);  /* 0C0B1270 mov.l Rm,@(disp,Rn) */
	r2 = 0xB0C00003u; UPD(0x0C0B1274u, 1);  /* 0C0B1272 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B1274 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B1278u, 2);  /* 0C0B1276 mov.b Rm,@Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0B127Au, 1);  /* 0C0B1278 mov.l @(disp,Rm),Rn */
	r0 ^= 0x1u;  /* 0C0B127A xor #imm,r0 */
	r0 &= 0x1u;  /* 0C0B127C and #imm,r0 */
	r14 += 0x3Cu;  /* 0C0B127E add #imm,Rn */
	r15 = r14;  /* 0C0B1280 mov Rm,Rn */
	IF(0x0C0B1282u); PR = R32(r15); r15 += 4; UPD(0x0C0B1284u, 5);  /* 0C0B1282 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B1286u, 1);  /* 0C0B1284 mov.l @Rm+,Rn */
	IF(0x0C0B1286u); { u32 t_ = PR; IF(0x0C0B1288u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0B1286 rts */
}

void f_0C0B1340(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C0B13B8);
L_0C0B1340: BLKS(0x0C0B1340u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B1342u, 1);  /* 0C0B1340 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0B1342 add #imm,Rn */
	r14 = r15;  /* 0C0B1344 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0B1348u, 3);  /* 0C0B1346 mov.l Rm,@Rn */
	r1 = 0xC21717Cu; UPD(0x0C0B134Au, 1);  /* 0C0B1348 mov.l @(disp,pc),Rn */
	r2 = R32(r14); UPD(0x0C0B134Cu, 1);  /* 0C0B134A mov.l @Rm,Rn */
	r1 = R32(r1 + 0xCu); UPD(0x0C0B134Eu, 1);  /* 0C0B134C mov.l @(disp,Rm),Rn */
	IF(0x0C0B134Eu); MACL = r2 * r1;  /* 0C0B134E mul.l Rm,Rn */
	IF(0x0C0B1350u); r1 = MACL;  /* 0C0B1350 sts macl,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0B1354u, 4);  /* 0C0B1352 mov.l Rm,@(disp,Rn) */
	r2 = 0xB0C00003u; UPD(0x0C0B1356u, 1);  /* 0C0B1354 mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C0B1356 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B135Au, 2);  /* 0C0B1358 mov.b Rm,@Rn */
	r2 = 0xB0000001u; UPD(0x0C0B135Cu, 1);  /* 0C0B135A mov.l @(disp,pc),Rn */
	r1 = 0x60u;  /* 0C0B135C mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B1360u, 2);  /* 0C0B135E mov.b Rm,@Rn */
	r1 = 0xC21717Cu; UPD(0x0C0B1362u, 1);  /* 0C0B1360 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0B1364u, 1);  /* 0C0B1362 mov.l @Rm,Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0B1366u, 1);  /* 0C0B1364 mov.l Rm,@(disp,Rn) */
	r1 = 0x1u;  /* 0C0B1366 mov #imm,Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C0B136Au, 2);  /* 0C0B1368 mov.l @(disp,Rm),Rn */
	T = r0 > r1;  /* 0C0B136A cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0B1374u, 4); goto L_0C0B1374; }  /* 0C0B136C bf */
L_0C0B136E: BLKS(0x0C0B136Eu);
	r0 = R32(r14 + 0xCu); UPD(0x0C0B1370u, 1);  /* 0C0B136E mov.l @(disp,Rm),Rn */
	T = r0 == 0x2u;  /* 0C0B1370 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0B13A0u, 4); goto L_0C0B13A0; }  /* 0C0B1372 bt */
L_0C0B1374: BLKS(0x0C0B1374u);
	r2 = 0xB0000002u; UPD(0x0C0B1376u, 1);  /* 0C0B1374 mov.l @(disp,pc),Rn */
	r1 = r14;  /* 0C0B1376 mov Rm,Rn */
	r1 += 0x7u;  /* 0C0B1378 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B137Cu, 3);  /* 0C0B137A mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0B137Eu, 1);  /* 0C0B137C mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0B1380u, 1);  /* 0C0B137E mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B1382u, 1);  /* 0C0B1380 mov.l @(disp,Rm),Rn */
	IF(0x0C0B1382u); r1 >>= 8;  /* 0C0B1382 shlr8 Rn */
	W8(r2, r1); UPD(0x0C0B1386u, 2);  /* 0C0B1384 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0B1388u, 1);  /* 0C0B1386 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B138Au, 1);  /* 0C0B1388 mov.l @(disp,Rm),Rn */
	IF(0x0C0B138Au); r1 >>= 16;  /* 0C0B138A shlr16 Rn */
	W8(r2, r1); UPD(0x0C0B138Eu, 2);  /* 0C0B138C mov.b Rm,@Rn */
	{ IF(0x0C0B1390u); ; /* slot nop */ UPD(0x0C0B13B2u, 3); goto L_0C0B13B2; }  /* 0C0B138E bra */
L_0C0B13A0: BLKS(0x0C0B13A0u);
	r2 = 0xB0000002u; UPD(0x0C0B13A2u, 1);  /* 0C0B13A0 mov.l @(disp,pc),Rn */
	r1 = r14;  /* 0C0B13A2 mov Rm,Rn */
	r1 += 0x7u;  /* 0C0B13A4 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B13A8u, 3);  /* 0C0B13A6 mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0B13AAu, 1);  /* 0C0B13A8 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0B13ACu, 1);  /* 0C0B13AA mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B13AEu, 1);  /* 0C0B13AC mov.l @(disp,Rm),Rn */
	IF(0x0C0B13AEu); r1 >>= 8;  /* 0C0B13AE shlr8 Rn */
	W8(r2, r1); UPD(0x0C0B13B2u, 2);  /* 0C0B13B0 mov.b Rm,@Rn */
L_0C0B13B2: BLKS(0x0C0B13B2u);
	r2 = 0xB0000001u; UPD(0x0C0B13B4u, 1);  /* 0C0B13B2 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFD0u;  /* 0C0B13B4 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B13B8u, 2);  /* 0C0B13B6 mov.b Rm,@Rn */
L_0C0B13B8: BLKS(0x0C0B13B8u);
	SPIN_SAVE(0C0B13B8);
	r1 = 0xA4000128u; UPD(0x0C0B13BAu, 1);  /* 0C0B13B8 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)RS8(0C0B13B8, r1); UPD(0x0C0B13BCu, 1);  /* 0C0B13BA mov.b @Rm,Rn */
	r0 &= 0x20u;  /* 0C0B13BC and #imm,r0 */
	r1 = r0 & 0xFF;  /* 0C0B13BE extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0B13C0 tst Rm,Rn */
	if (T) { SPIN_FFD(0C0B13B8, 8); UPD(0x0C0B13B8u, 6); goto L_0C0B13B8; }  /* 0C0B13C2 bt */
L_0C0B13C4: BLKS(0x0C0B13C4u);
	r2 = 0xB0C00003u; UPD(0x0C0B13C6u, 1);  /* 0C0B13C4 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B13C6 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B13CAu, 2);  /* 0C0B13C8 mov.b Rm,@Rn */
	r2 = 0xB0C00003u; UPD(0x0C0B13CCu, 1);  /* 0C0B13CA mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C0B13CC mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B13D0u, 2);  /* 0C0B13CE mov.b Rm,@Rn */
	r2 = 0xB0000001u; UPD(0x0C0B13D2u, 1);  /* 0C0B13D0 mov.l @(disp,pc),Rn */
	r1 = 0x70u;  /* 0C0B13D2 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B13D6u, 2);  /* 0C0B13D4 mov.b Rm,@Rn */
	r1 = 0xB0000000u; UPD(0x0C0B13D8u, 1);  /* 0C0B13D6 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B13DAu, 1);  /* 0C0B13D8 mov.b @Rm,Rn */
	r1 = r1 & 0xFF;  /* 0C0B13DA extu.b Rm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0B13DEu, 2);  /* 0C0B13DC mov.l Rm,@(disp,Rn) */
	r2 = 0xB0C00003u; UPD(0x0C0B13E0u, 1);  /* 0C0B13DE mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0B13E0 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0B13E4u, 2);  /* 0C0B13E2 mov.b Rm,@Rn */
	r0 = R32(r14 + 0x8u); UPD(0x0C0B13E6u, 1);  /* 0C0B13E4 mov.l @(disp,Rm),Rn */
	r0 ^= 0x1u;  /* 0C0B13E6 xor #imm,r0 */
	r0 &= 0x1u;  /* 0C0B13E8 and #imm,r0 */
	r14 += 0x10u;  /* 0C0B13EA add #imm,Rn */
	r15 = r14;  /* 0C0B13EC mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B13F0u, 5);  /* 0C0B13EE mov.l @Rm+,Rn */
	IF(0x0C0B13F0u); { u32 t_ = PR; IF(0x0C0B13F2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0B13F0 rts */
}


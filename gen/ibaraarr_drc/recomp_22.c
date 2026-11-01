#include "recomp.h"
#include "recomp_funcs.h"

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

void f_0C0A38E0(sh3_t *c)
{
	LOCALS;
L_0C0A38E0: BLKS(0x0C0A38E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A38E2u, 1);  /* 0C0A38E0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A38E4u, 1);  /* 0C0A38E2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A38E4 exts.w Rm,Rn */
	r3 = 0xC0A1530u; UPD(0x0C0A38E8u, 2);  /* 0C0A38E6 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0A38E8 mov Rm,Rn */
	IF(0x0C0A38EAu); r15 -= 4; W32(r15, PR); UPD(0x0C0A38ECu, 2);  /* 0C0A38EA sts.l pr,@-Rn */
	IF(0x0C0A38ECu); { u32 t_ = r3; PR = 0x0C0A38F0u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A38F0u); }  /* 0C0A38EC jsr @Rn */
L_0C0A38F0: BLKS(0x0C0A38F0u);
	r4 = 0xB4u; UPD(0x0C0A38F2u, 1);  /* 0C0A38F0 mov.w @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C0A38F2 mov #imm,Rn */
	IF(0x0C0A38F4u); MACL = r8 * r4;  /* 0C0A38F4 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0A38F8u, 4);  /* 0C0A38F6 mov.l @(disp,pc),Rn */
	IF(0x0C0A38F8u); r0 = MACL;  /* 0C0A38F8 sts macl,Rn */
	r3 += r0;  /* 0C0A38FA add Rm,Rn */
	r0 = 0xA5u; UPD(0x0C0A38FEu, 3);  /* 0C0A38FC mov.w @(disp,pc),Rn */
	IF(0x0C0A38FEu); W8(r0 + r3, r2); UPD(0x0C0A3900u, 1);  /* 0C0A38FE mov.b Rm,@(r0,Rn) */
	r15 = r14;  /* 0C0A3900 mov Rm,Rn */
	IF(0x0C0A3902u); PR = R32(r15); r15 += 4; UPD(0x0C0A3904u, 2);  /* 0C0A3902 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A3906u, 1);  /* 0C0A3904 mov.l @Rm+,Rn */
	IF(0x0C0A3906u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A3906 rts */
}

void f_0C0A39C0(sh3_t *c)
{
	LOCALS;
L_0C0A39C0: BLKS(0x0C0A39C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A39C2u, 1);  /* 0C0A39C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A39C4u, 1);  /* 0C0A39C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A39C6u, 1);  /* 0C0A39C4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A39C8u, 1);  /* 0C0A39C6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A39CAu, 1);  /* 0C0A39C8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A39CCu, 1);  /* 0C0A39CA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A39CEu, 1);  /* 0C0A39CC mov.l Rm,@-Rn */
	r10 = 0xC22C874u; UPD(0x0C0A39D0u, 1);  /* 0C0A39CE mov.l @(disp,pc),Rn */
	IF(0x0C0A39D0u); r15 -= 4; W32(r15, PR); UPD(0x0C0A39D2u, 1);  /* 0C0A39D0 sts.l pr,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C0A39D4u, 1);  /* 0C0A39D2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A39D4 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A39D8u, 2);  /* 0C0A39D6 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0A39D8 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0A39DCu, 2);  /* 0C0A39DA mov.l @(disp,pc),Rn */
	IF(0x0C0A39DCu); { u32 t_ = r8; PR = 0x0C0A39E0u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C0A39E0u); }  /* 0C0A39DC jsr @Rn */
L_0C0A39E0: BLKS(0x0C0A39E0u);
	T = (r0 & r0) == 0;  /* 0C0A39E0 tst Rm,Rn */
	if (!T) { UPD(0x0C0A3A00u, 4); goto L_0C0A3A00; }  /* 0C0A39E2 bf */
L_0C0A39E4: BLKS(0x0C0A39E4u);
	r0 = 0x1u;  /* 0C0A39E4 mov #imm,Rn */
	r14 += 0x4u;  /* 0C0A39E6 add #imm,Rn */
	r15 = r14;  /* 0C0A39E8 mov Rm,Rn */
	IF(0x0C0A39EAu); PR = R32(r15); r15 += 4; UPD(0x0C0A39ECu, 4);  /* 0C0A39EA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A39EEu, 1);  /* 0C0A39EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A39F0u, 1);  /* 0C0A39EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A39F2u, 1);  /* 0C0A39F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A39F4u, 1);  /* 0C0A39F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A39F6u, 1);  /* 0C0A39F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A39F8u, 1);  /* 0C0A39F6 mov.l @Rm+,Rn */
	IF(0x0C0A39F8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A39F8 rts */
L_0C0A3A00: BLKS(0x0C0A3A00u);
	r8 = 0xC0606C0u; UPD(0x0C0A3A02u, 1);  /* 0C0A3A00 mov.l @(disp,pc),Rn */
	IF(0x0C0A3A02u); { u32 t_ = r8; PR = 0x0C0A3A06u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0A3A06u); }  /* 0C0A3A02 jsr @Rn */
L_0C0A3A06: BLKS(0x0C0A3A06u);
	T = (r0 & r0) == 0;  /* 0C0A3A06 tst Rm,Rn */
	if (T) { UPD(0x0C0A39E4u, 4); goto L_0C0A39E4; }  /* 0C0A3A08 bt */
L_0C0A3A0A: BLKS(0x0C0A3A0Au);
	r4 = 0x0u;  /* 0C0A3A0A mov #imm,Rn */
	r8 = 0xC2755BCu; UPD(0x0C0A3A0Eu, 2);  /* 0C0A3A0C mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r12 = v_; } UPD(0x0C0A3A10u, 1);  /* 0C0A3A0E mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C0A3A12u, 1);  /* 0C0A3A10 mov.w @(disp,pc),Rn */
	IF(0x0C0A3A12u); MACL = r12 * r9;  /* 0C0A3A12 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C0A3A16u, 3);  /* 0C0A3A14 mov.l @(disp,pc),Rn */
	IF(0x0C0A3A16u); r9 = MACL;  /* 0C0A3A16 sts macl,Rn */
	r9 += r1;  /* 0C0A3A18 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A3A1Cu, 3);  /* 0C0A3A1A mov.w @Rm,Rn */
	r3 = 0xC0A02D0u; UPD(0x0C0A3A1Eu, 1);  /* 0C0A3A1C mov.l @(disp,pc),Rn */
	r2 = r5 & 0xFFFF;  /* 0C0A3A1E extu.w Rm,Rn */
	r6 = 0xD3000104u; UPD(0x0C0A3A22u, 2);  /* 0C0A3A20 mov.l @(disp,pc),Rn */
	W32(r9 + 0xCu, r4); UPD(0x0C0A3A24u, 1);  /* 0C0A3A22 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x8u, r4); UPD(0x0C0A3A26u, 1);  /* 0C0A3A24 mov.l Rm,@(disp,Rn) */
	W32(r9, r6); UPD(0x0C0A3A28u, 1);  /* 0C0A3A26 mov.l Rm,@Rn */
	r4 = r12;  /* 0C0A3A28 mov Rm,Rn */
	IF(0x0C0A3A2Au); { u32 t_ = r3; PR = 0x0C0A3A2Eu; W32(r9 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A3A2Eu); }  /* 0C0A3A2A jsr @Rn */
L_0C0A3A2E: BLKS(0x0C0A3A2Eu);
	r11 = 0xC061380u; UPD(0x0C0A3A30u, 1);  /* 0C0A3A2E mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0A3A30 mov Rm,Rn */
	r0 = 0x1700000u; UPD(0x0C0A3A34u, 2);  /* 0C0A3A32 mov.l @(disp,pc),Rn */
	IF(0x0C0A3A34u); { u32 t_ = r11; PR = 0x0C0A3A38u; W32(r9 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C061380, 0x0C061380u, 0x0C0A3A38u); }  /* 0C0A3A34 jsr @Rn */
L_0C0A3A38: BLKS(0x0C0A3A38u);
	r7 = 0xC0A1530u; UPD(0x0C0A3A3Au, 1);  /* 0C0A3A38 mov.l @(disp,pc),Rn */
	r13 = 0x100u; UPD(0x0C0A3A3Cu, 1);  /* 0C0A3A3A mov.w @(disp,pc),Rn */
	IF(0x0C0A3A3Cu); { u32 t_ = r7; PR = 0x0C0A3A40u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A3A40u); }  /* 0C0A3A3C jsr @Rn */
L_0C0A3A40: BLKS(0x0C0A3A40u);
	r0 = 0x8Au; UPD(0x0C0A3A42u, 1);  /* 0C0A3A40 mov.w @(disp,pc),Rn */
	r11 = 0x14u;  /* 0C0A3A42 mov #imm,Rn */
	IF(0x0C0A3A44u); W16(r0 + r9, r13); UPD(0x0C0A3A46u, 2);  /* 0C0A3A44 mov.w Rm,@(r0,Rn) */
	r4 = 0x20u;  /* 0C0A3A46 mov #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0A3A48 add #imm,Rn */
	IF(0x0C0A3A4Au); W16(r0 + r9, r13); UPD(0x0C0A3A4Cu, 3);  /* 0C0A3A4A mov.w Rm,@(r0,Rn) */
	r3 = 0x0u;  /* 0C0A3A4C mov #imm,Rn */
	r10 = 0x28000u; UPD(0x0C0A3A50u, 2);  /* 0C0A3A4E mov.l @(disp,pc),Rn */
	r0 += 0x6u;  /* 0C0A3A50 add #imm,Rn */
	IF(0x0C0A3A52u); W32(r0 + r9, r10); UPD(0x0C0A3A54u, 2);  /* 0C0A3A52 mov.l Rm,@(r0,Rn) */
	r13 = r9;  /* 0C0A3A54 mov Rm,Rn */
	r6 = 0xACu; UPD(0x0C0A3A58u, 2);  /* 0C0A3A56 mov.w @(disp,pc),Rn */
	r10 = 0xA8u; UPD(0x0C0A3A5Au, 1);  /* 0C0A3A58 mov.w @(disp,pc),Rn */
	r6 += r9;  /* 0C0A3A5A add Rm,Rn */
	r6 += 0x1u;  /* 0C0A3A5C add #imm,Rn */
	W32(r14, r6); UPD(0x0C0A3A60u, 3);  /* 0C0A3A5E mov.l Rm,@Rn */
	r13 += r10;  /* 0C0A3A60 add Rm,Rn */
	r13 += 0x1u;  /* 0C0A3A62 add #imm,Rn */
	W8(r6, r11); UPD(0x0C0A3A66u, 3);  /* 0C0A3A64 mov.b Rm,@Rn */
	W8(r13, r11); UPD(0x0C0A3A68u, 1);  /* 0C0A3A66 mov.b Rm,@Rn */
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C0A3A6Au, 1);  /* 0C0A3A68 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0A3A6Cu, 1);  /* 0C0A3A6A mov.w @(disp,pc),Rn */
	IF(0x0C0A3A6Cu); MACL = r11 * r8;  /* 0C0A3A6C mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C0A3A70u, 3);  /* 0C0A3A6E mov.l @(disp,pc),Rn */
	IF(0x0C0A3A70u); r8 = MACL;  /* 0C0A3A70 sts macl,Rn */
	r8 += r1;  /* 0C0A3A72 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C0A3A74 add #imm,Rn */
	W16(r8, r12); UPD(0x0C0A3A78u, 4);  /* 0C0A3A76 mov.w Rm,@Rn */
	r0 = 0xC0A02D0u; UPD(0x0C0A3A7Au, 1);  /* 0C0A3A78 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C0A3A7A add #imm,Rn */
	r5 = 0xC0000000u; UPD(0x0C0A3A7Eu, 2);  /* 0C0A3A7C mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C0A3A7E add Rm,Rn */
	r2 = R32(r9 + 0x4u); UPD(0x0C0A3A82u, 2);  /* 0C0A3A80 mov.l @(disp,Rm),Rn */
	r10 += 0x1u;  /* 0C0A3A82 add #imm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C0A3A86u, 2);  /* 0C0A3A84 mov.l Rm,@(disp,Rn) */
	W32(r8, r5); UPD(0x0C0A3A88u, 1);  /* 0C0A3A86 mov.l Rm,@Rn */
	r4 = r11;  /* 0C0A3A88 mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0A3A8Cu, 2);  /* 0C0A3A8A mov.l Rm,@(disp,Rn) */
	IF(0x0C0A3A8Cu); { u32 t_ = r0; PR = 0x0C0A3A90u; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A3A90u); }  /* 0C0A3A8C jsr @Rn */
L_0C0A3A90: BLKS(0x0C0A3A90u);
	r6 = 0xC0A1530u; UPD(0x0C0A3A92u, 1);  /* 0C0A3A90 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0A3A92 mov Rm,Rn */
	r12 = R32(r9 + 0x24u); UPD(0x0C0A3A96u, 2);  /* 0C0A3A94 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0A3A98u, 1);  /* 0C0A3A96 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C0A3A9Au, 1);  /* 0C0A3A98 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A3A9Au); { u32 t_ = r6; PR = 0x0C0A3A9Eu; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A3A9Eu); }  /* 0C0A3A9A jsr @Rn */
L_0C0A3A9E: BLKS(0x0C0A3A9Eu);
	r0 = 0xB0u; UPD(0x0C0A3AA0u, 1);  /* 0C0A3A9E mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C0A3AA2u, 1);  /* 0C0A3AA0 mov.b @Rm,Rn */
	IF(0x0C0A3AA2u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A3AA4u, 1);  /* 0C0A3AA2 mov.b @(r0,Rm),Rn */
	W8(r10, r2); UPD(0x0C0A3AA6u, 1);  /* 0C0A3AA4 mov.b Rm,@Rn */
	IF(0x0C0A3AA6u); W8(r0 + r8, r5); UPD(0x0C0A3AA8u, 1);  /* 0C0A3AA6 mov.b Rm,@(r0,Rn) */
	r4 = 0xACu; UPD(0x0C0A3AAAu, 1);  /* 0C0A3AA8 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0A3AACu, 1);  /* 0C0A3AAA mov.l @Rm,Rn */
	r8 += r4;  /* 0C0A3AAC add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C0A3AB0u, 2);  /* 0C0A3AAE mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0A3AB0 add #imm,Rn */
	{ W8(r8, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C0A39E4u, 4); goto L_0C0A39E4; }  /* 0C0A3AB2 bra */
}

void f_0C0A3B00(sh3_t *c)
{
	LOCALS;
L_0C0A3B00: BLKS(0x0C0A3B00u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3B02u, 1);  /* 0C0A3B00 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3B04u, 1);  /* 0C0A3B02 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3B06u, 1);  /* 0C0A3B04 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3B08u, 1);  /* 0C0A3B06 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3B0Au, 1);  /* 0C0A3B08 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3B0Cu, 1);  /* 0C0A3B0A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3B0Eu, 1);  /* 0C0A3B0C mov.l Rm,@-Rn */
	r10 = 0xC22C874u; UPD(0x0C0A3B10u, 1);  /* 0C0A3B0E mov.l @(disp,pc),Rn */
	IF(0x0C0A3B10u); r15 -= 4; W32(r15, PR); UPD(0x0C0A3B12u, 1);  /* 0C0A3B10 sts.l pr,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C0A3B14u, 1);  /* 0C0A3B12 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A3B14 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A3B18u, 2);  /* 0C0A3B16 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0A3B18 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0A3B1Cu, 2);  /* 0C0A3B1A mov.l @(disp,pc),Rn */
	IF(0x0C0A3B1Cu); { u32 t_ = r8; PR = 0x0C0A3B20u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C0A3B20u); }  /* 0C0A3B1C jsr @Rn */
L_0C0A3B20: BLKS(0x0C0A3B20u);
	T = (r0 & r0) == 0;  /* 0C0A3B20 tst Rm,Rn */
	if (!T) { UPD(0x0C0A3B40u, 4); goto L_0C0A3B40; }  /* 0C0A3B22 bf */
L_0C0A3B24: BLKS(0x0C0A3B24u);
	r0 = 0x1u;  /* 0C0A3B24 mov #imm,Rn */
	r14 += 0x4u;  /* 0C0A3B26 add #imm,Rn */
	r15 = r14;  /* 0C0A3B28 mov Rm,Rn */
	IF(0x0C0A3B2Au); PR = R32(r15); r15 += 4; UPD(0x0C0A3B2Cu, 4);  /* 0C0A3B2A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A3B2Eu, 1);  /* 0C0A3B2C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A3B30u, 1);  /* 0C0A3B2E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A3B32u, 1);  /* 0C0A3B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A3B34u, 1);  /* 0C0A3B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A3B36u, 1);  /* 0C0A3B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A3B38u, 1);  /* 0C0A3B36 mov.l @Rm+,Rn */
	IF(0x0C0A3B38u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A3B38 rts */
L_0C0A3B40: BLKS(0x0C0A3B40u);
	r8 = 0xC0606C0u; UPD(0x0C0A3B42u, 1);  /* 0C0A3B40 mov.l @(disp,pc),Rn */
	IF(0x0C0A3B42u); { u32 t_ = r8; PR = 0x0C0A3B46u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0A3B46u); }  /* 0C0A3B42 jsr @Rn */
L_0C0A3B46: BLKS(0x0C0A3B46u);
	T = (r0 & r0) == 0;  /* 0C0A3B46 tst Rm,Rn */
	if (T) { UPD(0x0C0A3B24u, 4); goto L_0C0A3B24; }  /* 0C0A3B48 bt */
L_0C0A3B4A: BLKS(0x0C0A3B4Au);
	r4 = 0x0u;  /* 0C0A3B4A mov #imm,Rn */
	r8 = 0xC2755BCu; UPD(0x0C0A3B4Eu, 2);  /* 0C0A3B4C mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r12 = v_; } UPD(0x0C0A3B50u, 1);  /* 0C0A3B4E mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C0A3B52u, 1);  /* 0C0A3B50 mov.w @(disp,pc),Rn */
	IF(0x0C0A3B52u); MACL = r12 * r9;  /* 0C0A3B52 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C0A3B56u, 3);  /* 0C0A3B54 mov.l @(disp,pc),Rn */
	IF(0x0C0A3B56u); r9 = MACL;  /* 0C0A3B56 sts macl,Rn */
	r9 += r1;  /* 0C0A3B58 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A3B5Cu, 3);  /* 0C0A3B5A mov.w @Rm,Rn */
	r3 = 0xC0A02D0u; UPD(0x0C0A3B5Eu, 1);  /* 0C0A3B5C mov.l @(disp,pc),Rn */
	r2 = r5 & 0xFFFF;  /* 0C0A3B5E extu.w Rm,Rn */
	r6 = 0xD3000104u; UPD(0x0C0A3B62u, 2);  /* 0C0A3B60 mov.l @(disp,pc),Rn */
	W32(r9 + 0xCu, r4); UPD(0x0C0A3B64u, 1);  /* 0C0A3B62 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x8u, r4); UPD(0x0C0A3B66u, 1);  /* 0C0A3B64 mov.l Rm,@(disp,Rn) */
	W32(r9, r6); UPD(0x0C0A3B68u, 1);  /* 0C0A3B66 mov.l Rm,@Rn */
	r4 = r12;  /* 0C0A3B68 mov Rm,Rn */
	IF(0x0C0A3B6Au); { u32 t_ = r3; PR = 0x0C0A3B6Eu; W32(r9 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A3B6Eu); }  /* 0C0A3B6A jsr @Rn */
L_0C0A3B6E: BLKS(0x0C0A3B6Eu);
	r11 = 0xC061380u; UPD(0x0C0A3B70u, 1);  /* 0C0A3B6E mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0A3B70 mov Rm,Rn */
	r0 = 0x1700000u; UPD(0x0C0A3B74u, 2);  /* 0C0A3B72 mov.l @(disp,pc),Rn */
	IF(0x0C0A3B74u); { u32 t_ = r11; PR = 0x0C0A3B78u; W32(r9 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C061380, 0x0C061380u, 0x0C0A3B78u); }  /* 0C0A3B74 jsr @Rn */
L_0C0A3B78: BLKS(0x0C0A3B78u);
	r7 = 0xC0A1530u; UPD(0x0C0A3B7Au, 1);  /* 0C0A3B78 mov.l @(disp,pc),Rn */
	r13 = 0x100u; UPD(0x0C0A3B7Cu, 1);  /* 0C0A3B7A mov.w @(disp,pc),Rn */
	IF(0x0C0A3B7Cu); { u32 t_ = r7; PR = 0x0C0A3B80u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A3B80u); }  /* 0C0A3B7C jsr @Rn */
L_0C0A3B80: BLKS(0x0C0A3B80u);
	r0 = 0x8Au; UPD(0x0C0A3B82u, 1);  /* 0C0A3B80 mov.w @(disp,pc),Rn */
	r11 = 0x14u;  /* 0C0A3B82 mov #imm,Rn */
	IF(0x0C0A3B84u); W16(r0 + r9, r13); UPD(0x0C0A3B86u, 2);  /* 0C0A3B84 mov.w Rm,@(r0,Rn) */
	r4 = 0x20u;  /* 0C0A3B86 mov #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0A3B88 add #imm,Rn */
	IF(0x0C0A3B8Au); W16(r0 + r9, r13); UPD(0x0C0A3B8Cu, 3);  /* 0C0A3B8A mov.w Rm,@(r0,Rn) */
	r3 = 0x0u;  /* 0C0A3B8C mov #imm,Rn */
	r10 = 0x10000u; UPD(0x0C0A3B90u, 2);  /* 0C0A3B8E mov.l @(disp,pc),Rn */
	r0 += 0x6u;  /* 0C0A3B90 add #imm,Rn */
	IF(0x0C0A3B92u); W32(r0 + r9, r10); UPD(0x0C0A3B94u, 2);  /* 0C0A3B92 mov.l Rm,@(r0,Rn) */
	r13 = r9;  /* 0C0A3B94 mov Rm,Rn */
	r6 = 0xACu; UPD(0x0C0A3B98u, 2);  /* 0C0A3B96 mov.w @(disp,pc),Rn */
	r10 = 0xA8u; UPD(0x0C0A3B9Au, 1);  /* 0C0A3B98 mov.w @(disp,pc),Rn */
	r6 += r9;  /* 0C0A3B9A add Rm,Rn */
	r6 += 0x1u;  /* 0C0A3B9C add #imm,Rn */
	W32(r14, r6); UPD(0x0C0A3BA0u, 3);  /* 0C0A3B9E mov.l Rm,@Rn */
	r13 += r10;  /* 0C0A3BA0 add Rm,Rn */
	r13 += 0x1u;  /* 0C0A3BA2 add #imm,Rn */
	W8(r6, r11); UPD(0x0C0A3BA6u, 3);  /* 0C0A3BA4 mov.b Rm,@Rn */
	W8(r13, r11); UPD(0x0C0A3BA8u, 1);  /* 0C0A3BA6 mov.b Rm,@Rn */
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C0A3BAAu, 1);  /* 0C0A3BA8 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0A3BACu, 1);  /* 0C0A3BAA mov.w @(disp,pc),Rn */
	IF(0x0C0A3BACu); MACL = r11 * r8;  /* 0C0A3BAC mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C0A3BB0u, 3);  /* 0C0A3BAE mov.l @(disp,pc),Rn */
	IF(0x0C0A3BB0u); r8 = MACL;  /* 0C0A3BB0 sts macl,Rn */
	r8 += r1;  /* 0C0A3BB2 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C0A3BB4 add #imm,Rn */
	W16(r8, r12); UPD(0x0C0A3BB8u, 4);  /* 0C0A3BB6 mov.w Rm,@Rn */
	r0 = 0xC0A02D0u; UPD(0x0C0A3BBAu, 1);  /* 0C0A3BB8 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C0A3BBA add #imm,Rn */
	r5 = 0xC0000000u; UPD(0x0C0A3BBEu, 2);  /* 0C0A3BBC mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C0A3BBE add Rm,Rn */
	r2 = R32(r9 + 0x4u); UPD(0x0C0A3BC2u, 2);  /* 0C0A3BC0 mov.l @(disp,Rm),Rn */
	r10 += 0x1u;  /* 0C0A3BC2 add #imm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C0A3BC6u, 2);  /* 0C0A3BC4 mov.l Rm,@(disp,Rn) */
	W32(r8, r5); UPD(0x0C0A3BC8u, 1);  /* 0C0A3BC6 mov.l Rm,@Rn */
	r4 = r11;  /* 0C0A3BC8 mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0A3BCCu, 2);  /* 0C0A3BCA mov.l Rm,@(disp,Rn) */
	IF(0x0C0A3BCCu); { u32 t_ = r0; PR = 0x0C0A3BD0u; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A3BD0u); }  /* 0C0A3BCC jsr @Rn */
L_0C0A3BD0: BLKS(0x0C0A3BD0u);
	r6 = 0xC0A1530u; UPD(0x0C0A3BD2u, 1);  /* 0C0A3BD0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0A3BD2 mov Rm,Rn */
	r12 = R32(r9 + 0x24u); UPD(0x0C0A3BD6u, 2);  /* 0C0A3BD4 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0A3BD8u, 1);  /* 0C0A3BD6 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C0A3BDAu, 1);  /* 0C0A3BD8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A3BDAu); { u32 t_ = r6; PR = 0x0C0A3BDEu; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A3BDEu); }  /* 0C0A3BDA jsr @Rn */
L_0C0A3BDE: BLKS(0x0C0A3BDEu);
	r0 = 0xB0u; UPD(0x0C0A3BE0u, 1);  /* 0C0A3BDE mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C0A3BE2u, 1);  /* 0C0A3BE0 mov.b @Rm,Rn */
	IF(0x0C0A3BE2u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A3BE4u, 1);  /* 0C0A3BE2 mov.b @(r0,Rm),Rn */
	W8(r10, r2); UPD(0x0C0A3BE6u, 1);  /* 0C0A3BE4 mov.b Rm,@Rn */
	IF(0x0C0A3BE6u); W8(r0 + r8, r5); UPD(0x0C0A3BE8u, 1);  /* 0C0A3BE6 mov.b Rm,@(r0,Rn) */
	r4 = 0xACu; UPD(0x0C0A3BEAu, 1);  /* 0C0A3BE8 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0A3BECu, 1);  /* 0C0A3BEA mov.l @Rm,Rn */
	r8 += r4;  /* 0C0A3BEC add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C0A3BF0u, 2);  /* 0C0A3BEE mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0A3BF0 add #imm,Rn */
	{ W8(r8, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C0A3B24u, 4); goto L_0C0A3B24; }  /* 0C0A3BF2 bra */
}

void f_0C0A3C40(sh3_t *c)
{
	LOCALS;
L_0C0A3C40: BLKS(0x0C0A3C40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3C42u, 1);  /* 0C0A3C40 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3C44u, 1);  /* 0C0A3C42 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3C46u, 1);  /* 0C0A3C44 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3C48u, 1);  /* 0C0A3C46 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3C4Au, 1);  /* 0C0A3C48 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3C4Cu, 1);  /* 0C0A3C4A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3C4Eu, 1);  /* 0C0A3C4C mov.l Rm,@-Rn */
	r10 = 0xC22C874u; UPD(0x0C0A3C50u, 1);  /* 0C0A3C4E mov.l @(disp,pc),Rn */
	IF(0x0C0A3C50u); r15 -= 4; W32(r15, PR); UPD(0x0C0A3C52u, 1);  /* 0C0A3C50 sts.l pr,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C0A3C54u, 1);  /* 0C0A3C52 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A3C54 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A3C58u, 2);  /* 0C0A3C56 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0A3C58 mov Rm,Rn */
	r11 = 0x8000u; UPD(0x0C0A3C5Cu, 2);  /* 0C0A3C5A mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C0A3C5C extu.w Rm,Rn */
	IF(0x0C0A3C5Eu); { u32 t_ = r8; PR = 0x0C0A3C62u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C0A3C62u); }  /* 0C0A3C5E jsr @Rn */
L_0C0A3C62: BLKS(0x0C0A3C62u);
	T = (r0 & r0) == 0;  /* 0C0A3C62 tst Rm,Rn */
	if (!T) { UPD(0x0C0A3C80u, 4); goto L_0C0A3C80; }  /* 0C0A3C64 bf */
L_0C0A3C66: BLKS(0x0C0A3C66u);
	r0 = 0x1u;  /* 0C0A3C66 mov #imm,Rn */
	r14 += 0x4u;  /* 0C0A3C68 add #imm,Rn */
	r15 = r14;  /* 0C0A3C6A mov Rm,Rn */
	IF(0x0C0A3C6Cu); PR = R32(r15); r15 += 4; UPD(0x0C0A3C6Eu, 4);  /* 0C0A3C6C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A3C70u, 1);  /* 0C0A3C6E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A3C72u, 1);  /* 0C0A3C70 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A3C74u, 1);  /* 0C0A3C72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A3C76u, 1);  /* 0C0A3C74 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A3C78u, 1);  /* 0C0A3C76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A3C7Au, 1);  /* 0C0A3C78 mov.l @Rm+,Rn */
	IF(0x0C0A3C7Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A3C7A rts */
L_0C0A3C80: BLKS(0x0C0A3C80u);
	r8 = 0xC0606C0u; UPD(0x0C0A3C82u, 1);  /* 0C0A3C80 mov.l @(disp,pc),Rn */
	IF(0x0C0A3C82u); { u32 t_ = r8; PR = 0x0C0A3C86u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0A3C86u); }  /* 0C0A3C82 jsr @Rn */
L_0C0A3C86: BLKS(0x0C0A3C86u);
	T = (r0 & r0) == 0;  /* 0C0A3C86 tst Rm,Rn */
	if (T) { UPD(0x0C0A3C66u, 4); goto L_0C0A3C66; }  /* 0C0A3C88 bt */
L_0C0A3C8A: BLKS(0x0C0A3C8Au);
	r3 = 0x0u;  /* 0C0A3C8A mov #imm,Rn */
	r8 = 0xC2755BCu; UPD(0x0C0A3C8Eu, 2);  /* 0C0A3C8C mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r12 = v_; } UPD(0x0C0A3C90u, 1);  /* 0C0A3C8E mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C0A3C92u, 1);  /* 0C0A3C90 mov.w @(disp,pc),Rn */
	IF(0x0C0A3C92u); MACL = r12 * r9;  /* 0C0A3C92 mul.l Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A3C96u, 3);  /* 0C0A3C94 mov.w @Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C0A3C98u, 1);  /* 0C0A3C96 mov.l @(disp,pc),Rn */
	IF(0x0C0A3C98u); r9 = MACL;  /* 0C0A3C98 sts macl,Rn */
	r9 += r1;  /* 0C0A3C9A add Rm,Rn */
	r4 = r2 & 0xFFFF;  /* 0C0A3C9C extu.w Rm,Rn */
	r0 = 0xC0A02D0u; UPD(0x0C0A3CA0u, 4);  /* 0C0A3C9E mov.l @(disp,pc),Rn */
	r5 = 0xD3000104u; UPD(0x0C0A3CA2u, 1);  /* 0C0A3CA0 mov.l @(disp,pc),Rn */
	W32(r9 + 0x4u, r4); UPD(0x0C0A3CA4u, 1);  /* 0C0A3CA2 mov.l Rm,@(disp,Rn) */
	W32(r9, r5); UPD(0x0C0A3CA6u, 1);  /* 0C0A3CA4 mov.l Rm,@Rn */
	r4 = r12;  /* 0C0A3CA6 mov Rm,Rn */
	W32(r9 + 0xCu, r3); UPD(0x0C0A3CAAu, 2);  /* 0C0A3CA8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A3CAAu); { u32 t_ = r0; PR = 0x0C0A3CAEu; W32(r9 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A3CAEu); }  /* 0C0A3CAA jsr @Rn */
L_0C0A3CAE: BLKS(0x0C0A3CAEu);
	r10 = 0xC061380u; UPD(0x0C0A3CB0u, 1);  /* 0C0A3CAE mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0A3CB0 mov Rm,Rn */
	r7 = 0x1700000u; UPD(0x0C0A3CB4u, 2);  /* 0C0A3CB2 mov.l @(disp,pc),Rn */
	r13 = 0xC0A1530u; UPD(0x0C0A3CB6u, 1);  /* 0C0A3CB4 mov.l @(disp,pc),Rn */
	IF(0x0C0A3CB6u); { u32 t_ = r10; PR = 0x0C0A3CBAu; W32(r9 + 0x24u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C061380, 0x0C061380u, 0x0C0A3CBAu); }  /* 0C0A3CB6 jsr @Rn */
L_0C0A3CBA: BLKS(0x0C0A3CBAu);
	IF(0x0C0A3CBAu); { u32 t_ = r13; PR = 0x0C0A3CBEu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A3CBEu); }  /* 0C0A3CBA jsr @Rn */
L_0C0A3CBE: BLKS(0x0C0A3CBEu);
	r10 = 0x100u; UPD(0x0C0A3CC0u, 1);  /* 0C0A3CBE mov.w @(disp,pc),Rn */
	r13 = r9;  /* 0C0A3CC0 mov Rm,Rn */
	r0 = 0x8Au; UPD(0x0C0A3CC4u, 2);  /* 0C0A3CC2 mov.w @(disp,pc),Rn */
	r4 = 0x20u;  /* 0C0A3CC4 mov #imm,Rn */
	IF(0x0C0A3CC6u); W16(r0 + r9, r10); UPD(0x0C0A3CC8u, 2);  /* 0C0A3CC6 mov.w Rm,@(r0,Rn) */
	r3 = 0x0u;  /* 0C0A3CC8 mov #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0A3CCA add #imm,Rn */
	IF(0x0C0A3CCCu); W16(r0 + r9, r10); UPD(0x0C0A3CCEu, 3);  /* 0C0A3CCC mov.w Rm,@(r0,Rn) */
	r6 = 0xACu; UPD(0x0C0A3CD0u, 1);  /* 0C0A3CCE mov.w @(disp,pc),Rn */
	r0 += 0x6u;  /* 0C0A3CD0 add #imm,Rn */
	r10 = 0xA8u; UPD(0x0C0A3CD4u, 2);  /* 0C0A3CD2 mov.w @(disp,pc),Rn */
	r6 += r9;  /* 0C0A3CD4 add Rm,Rn */
	r6 += 0x1u;  /* 0C0A3CD6 add #imm,Rn */
	IF(0x0C0A3CD8u); W32(r0 + r9, r11); UPD(0x0C0A3CDAu, 3);  /* 0C0A3CD8 mov.l Rm,@(r0,Rn) */
	r13 += r10;  /* 0C0A3CDA add Rm,Rn */
	W32(r14, r6); UPD(0x0C0A3CDEu, 2);  /* 0C0A3CDC mov.l Rm,@Rn */
	r11 = 0x14u;  /* 0C0A3CDE mov #imm,Rn */
	r13 += 0x1u;  /* 0C0A3CE0 add #imm,Rn */
	W8(r6, r11); UPD(0x0C0A3CE4u, 3);  /* 0C0A3CE2 mov.b Rm,@Rn */
	W8(r13, r11); UPD(0x0C0A3CE6u, 1);  /* 0C0A3CE4 mov.b Rm,@Rn */
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C0A3CE8u, 1);  /* 0C0A3CE6 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0A3CEAu, 1);  /* 0C0A3CE8 mov.w @(disp,pc),Rn */
	IF(0x0C0A3CEAu); MACL = r11 * r8;  /* 0C0A3CEA mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C0A3CEEu, 3);  /* 0C0A3CEC mov.l @(disp,pc),Rn */
	IF(0x0C0A3CEEu); r8 = MACL;  /* 0C0A3CEE sts macl,Rn */
	r8 += r1;  /* 0C0A3CF0 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C0A3CF2 add #imm,Rn */
	W16(r8, r12); UPD(0x0C0A3CF6u, 4);  /* 0C0A3CF4 mov.w Rm,@Rn */
	r0 = 0xC0A02D0u; UPD(0x0C0A3CF8u, 1);  /* 0C0A3CF6 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C0A3CF8 add #imm,Rn */
	r5 = 0xC0000000u; UPD(0x0C0A3CFCu, 2);  /* 0C0A3CFA mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C0A3CFC add Rm,Rn */
	r2 = R32(r9 + 0x4u); UPD(0x0C0A3D00u, 2);  /* 0C0A3CFE mov.l @(disp,Rm),Rn */
	r10 += 0x1u;  /* 0C0A3D00 add #imm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C0A3D04u, 2);  /* 0C0A3D02 mov.l Rm,@(disp,Rn) */
	W32(r8, r5); UPD(0x0C0A3D06u, 1);  /* 0C0A3D04 mov.l Rm,@Rn */
	r4 = r11;  /* 0C0A3D06 mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0A3D0Au, 2);  /* 0C0A3D08 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A3D0Au); { u32 t_ = r0; PR = 0x0C0A3D0Eu; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A3D0Eu); }  /* 0C0A3D0A jsr @Rn */
L_0C0A3D0E: BLKS(0x0C0A3D0Eu);
	r6 = 0xC0A1530u; UPD(0x0C0A3D10u, 1);  /* 0C0A3D0E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0A3D10 mov Rm,Rn */
	r12 = R32(r9 + 0x24u); UPD(0x0C0A3D14u, 2);  /* 0C0A3D12 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0A3D16u, 1);  /* 0C0A3D14 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C0A3D18u, 1);  /* 0C0A3D16 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A3D18u); { u32 t_ = r6; PR = 0x0C0A3D1Cu; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A3D1Cu); }  /* 0C0A3D18 jsr @Rn */
L_0C0A3D1C: BLKS(0x0C0A3D1Cu);
	r0 = 0xB0u; UPD(0x0C0A3D1Eu, 1);  /* 0C0A3D1C mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C0A3D20u, 1);  /* 0C0A3D1E mov.b @Rm,Rn */
	IF(0x0C0A3D20u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A3D22u, 1);  /* 0C0A3D20 mov.b @(r0,Rm),Rn */
	W8(r10, r2); UPD(0x0C0A3D24u, 1);  /* 0C0A3D22 mov.b Rm,@Rn */
	IF(0x0C0A3D24u); W8(r0 + r8, r5); UPD(0x0C0A3D26u, 1);  /* 0C0A3D24 mov.b Rm,@(r0,Rn) */
	r4 = 0xACu; UPD(0x0C0A3D28u, 1);  /* 0C0A3D26 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0A3D2Au, 1);  /* 0C0A3D28 mov.l @Rm,Rn */
	r8 += r4;  /* 0C0A3D2A add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C0A3D2Eu, 2);  /* 0C0A3D2C mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0A3D2E add #imm,Rn */
	{ W8(r8, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C0A3C66u, 4); goto L_0C0A3C66; }  /* 0C0A3D30 bra */
}

void f_0C0A3E80(sh3_t *c)
{
	LOCALS;
L_0C0A3E80: BLKS(0x0C0A3E80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3E82u, 1);  /* 0C0A3E80 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3E84u, 1);  /* 0C0A3E82 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3E86u, 1);  /* 0C0A3E84 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A3E88u, 1);  /* 0C0A3E86 mov.l Rm,@-Rn */
	r10 = 0xC22C874u; UPD(0x0C0A3E8Au, 1);  /* 0C0A3E88 mov.l @(disp,pc),Rn */
	IF(0x0C0A3E8Au); r15 -= 4; W32(r15, PR); UPD(0x0C0A3E8Cu, 1);  /* 0C0A3E8A sts.l pr,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C0A3E8Eu, 1);  /* 0C0A3E8C mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A3E8E mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A3E92u, 2);  /* 0C0A3E90 mov.w @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0A3E94u, 1);  /* 0C0A3E92 mov.l @(disp,pc),Rn */
	IF(0x0C0A3E94u); { u32 t_ = r8; PR = 0x0C0A3E98u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C0A3E98u); }  /* 0C0A3E94 jsr @Rn */
L_0C0A3E98: BLKS(0x0C0A3E98u);
	T = (r0 & r0) == 0;  /* 0C0A3E98 tst Rm,Rn */
	if (!T) { UPD(0x0C0A3EB0u, 4); goto L_0C0A3EB0; }  /* 0C0A3E9A bf */
L_0C0A3E9C: BLKS(0x0C0A3E9Cu);
	r0 = 0x1u;  /* 0C0A3E9C mov #imm,Rn */
	r15 = r14;  /* 0C0A3E9E mov Rm,Rn */
	IF(0x0C0A3EA0u); PR = R32(r15); r15 += 4; UPD(0x0C0A3EA2u, 3);  /* 0C0A3EA0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A3EA4u, 1);  /* 0C0A3EA2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A3EA6u, 1);  /* 0C0A3EA4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A3EA8u, 1);  /* 0C0A3EA6 mov.l @Rm+,Rn */
	IF(0x0C0A3EA8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A3EA8 rts */
L_0C0A3EB0: BLKS(0x0C0A3EB0u);
	r8 = 0xC0606C0u; UPD(0x0C0A3EB2u, 1);  /* 0C0A3EB0 mov.l @(disp,pc),Rn */
	IF(0x0C0A3EB2u); { u32 t_ = r8; PR = 0x0C0A3EB6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0A3EB6u); }  /* 0C0A3EB2 jsr @Rn */
L_0C0A3EB6: BLKS(0x0C0A3EB6u);
	T = (r0 & r0) == 0;  /* 0C0A3EB6 tst Rm,Rn */
	if (T) { UPD(0x0C0A3E9Cu, 4); goto L_0C0A3E9C; }  /* 0C0A3EB8 bt */
L_0C0A3EBA: BLKS(0x0C0A3EBAu);
	r0 = 0x0u;  /* 0C0A3EBA mov #imm,Rn */
	r6 = 0xC2755BCu; UPD(0x0C0A3EBEu, 2);  /* 0C0A3EBC mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A3EC0u, 1);  /* 0C0A3EBE mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0A3EC2u, 1);  /* 0C0A3EC0 mov.w @(disp,pc),Rn */
	IF(0x0C0A3EC2u); MACL = r9 * r8;  /* 0C0A3EC2 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0A3EC6u, 3);  /* 0C0A3EC4 mov.l @(disp,pc),Rn */
	IF(0x0C0A3EC6u); r8 = MACL;  /* 0C0A3EC6 sts macl,Rn */
	r4 = 0xD3000104u; UPD(0x0C0A3ECAu, 2);  /* 0C0A3EC8 mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C0A3ECA add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A3ECEu, 2);  /* 0C0A3ECC mov.w @Rm,Rn */
	r7 = 0xC0A02D0u; UPD(0x0C0A3ED0u, 1);  /* 0C0A3ECE mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFFFF;  /* 0C0A3ED0 extu.w Rm,Rn */
	W32(r8, r4); UPD(0x0C0A3ED4u, 2);  /* 0C0A3ED2 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0A3ED6u, 1);  /* 0C0A3ED4 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0A3ED6 mov Rm,Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C0A3EDAu, 2);  /* 0C0A3ED8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A3EDAu); { u32 t_ = r7; PR = 0x0C0A3EDEu; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A3EDEu); }  /* 0C0A3EDA jsr @Rn */
L_0C0A3EDE: BLKS(0x0C0A3EDEu);
	r10 = 0xC061380u; UPD(0x0C0A3EE0u, 1);  /* 0C0A3EDE mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0A3EE0 mov Rm,Rn */
	r6 = 0x1600000u; UPD(0x0C0A3EE4u, 2);  /* 0C0A3EE2 mov.l @(disp,pc),Rn */
	IF(0x0C0A3EE4u); { u32 t_ = r10; PR = 0x0C0A3EE8u; W32(r8 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C061380, 0x0C061380u, 0x0C0A3EE8u); }  /* 0C0A3EE4 jsr @Rn */
L_0C0A3EE8: BLKS(0x0C0A3EE8u);
	r5 = 0xC0A1530u; UPD(0x0C0A3EEAu, 1);  /* 0C0A3EE8 mov.l @(disp,pc),Rn */
	IF(0x0C0A3EEAu); { u32 t_ = r5; PR = 0x0C0A3EEEu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A3EEEu); }  /* 0C0A3EEA jsr @Rn */
L_0C0A3EEE: BLKS(0x0C0A3EEEu);
	r0 = 0x86u; UPD(0x0C0A3EF0u, 1);  /* 0C0A3EEE mov.w @(disp,pc),Rn */
	r2 = 0x14u;  /* 0C0A3EF0 mov #imm,Rn */
	r4 = 0x100u; UPD(0x0C0A3EF4u, 2);  /* 0C0A3EF2 mov.w @(disp,pc),Rn */
	IF(0x0C0A3EF4u); W16(r0 + r8, r4); UPD(0x0C0A3EF6u, 1);  /* 0C0A3EF4 mov.w Rm,@(r0,Rn) */
	r3 = 0x30000u; UPD(0x0C0A3EF8u, 1);  /* 0C0A3EF6 mov.l @(disp,pc),Rn */
	r0 += 0x6u;  /* 0C0A3EF8 add #imm,Rn */
	IF(0x0C0A3EFAu); W32(r0 + r8, r3); UPD(0x0C0A3EFCu, 2);  /* 0C0A3EFA mov.l Rm,@(r0,Rn) */
	r0 += 0x21u;  /* 0C0A3EFC add #imm,Rn */
	IF(0x0C0A3EFEu); W8(r0 + r8, r2); UPD(0x0C0A3F00u, 2);  /* 0C0A3EFE mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0A3F00 add #imm,Rn */
	{ IF(0x0C0A3F04u); W8(r0 + r8, r2); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0A3E9Cu, 4); goto L_0C0A3E9C; }  /* 0C0A3F02 bra */
}

void f_0C0A4030(sh3_t *c)
{
	LOCALS;
L_0C0A4030: BLKS(0x0C0A4030u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4032u, 1);  /* 0C0A4030 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4034u, 1);  /* 0C0A4032 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4036u, 1);  /* 0C0A4034 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4038u, 1);  /* 0C0A4036 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A403Au, 1);  /* 0C0A4038 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0A403A exts.w Rm,Rn */
	r5 = 0xC07A980u; UPD(0x0C0A403Eu, 2);  /* 0C0A403C mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0A403E mov Rm,Rn */
	IF(0x0C0A4040u); r15 -= 4; W32(r15, PR); UPD(0x0C0A4042u, 2);  /* 0C0A4040 sts.l pr,@-Rn */
	IF(0x0C0A4042u); { u32 t_ = r5; PR = 0x0C0A4046u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C07A980, 0x0C07A980u, 0x0C0A4046u); }  /* 0C0A4042 jsr @Rn */
L_0C0A4046: BLKS(0x0C0A4046u);
	r3 = 0xB4u; UPD(0x0C0A4048u, 1);  /* 0C0A4046 mov.w @(disp,pc),Rn */
	IF(0x0C0A4048u); MACL = r11 * r3;  /* 0C0A4048 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A404Cu, 3);  /* 0C0A404A mov.l @(disp,pc),Rn */
	IF(0x0C0A404Cu); r9 = MACL;  /* 0C0A404C sts macl,Rn */
	r9 += r0;  /* 0C0A404E add Rm,Rn */
	r8 = 0x8Cu; UPD(0x0C0A4052u, 3);  /* 0C0A4050 mov.w @(disp,pc),Rn */
	r10 = 0x86u; UPD(0x0C0A4054u, 1);  /* 0C0A4052 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C0A4054 add Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C0A4058u, 2);  /* 0C0A4056 mov.l @(disp,pc),Rn */
	r10 += r9;  /* 0C0A4058 add Rm,Rn */
	r5 = R32(r8); UPD(0x0C0A405Cu, 2);  /* 0C0A405A mov.l @Rm,Rn */
	IF(0x0C0A405Cu); { u32 t_ = r0; PR = 0x0C0A4060u; r4 = (u32)(s32)(s16)R16(r10); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A4060u); }  /* 0C0A405C jsr @Rn */
L_0C0A4060: BLKS(0x0C0A4060u);
	r5 = R32(r8); UPD(0x0C0A4062u, 1);  /* 0C0A4060 mov.l @Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C0A4064u, 1);  /* 0C0A4062 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A4066u, 1);  /* 0C0A4064 mov.w @Rm,Rn */
	IF(0x0C0A4066u); { u32 t_ = r8; PR = 0x0C0A406Au; W32(r9 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A406Au); }  /* 0C0A4066 jsr @Rn */
L_0C0A406A: BLKS(0x0C0A406Au);
	r4 = R32(r9 + 0x24u); UPD(0x0C0A406Cu, 1);  /* 0C0A406A mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0A406Eu, 1);  /* 0C0A406C mov.l @(disp,Rm),Rn */
	r2 = R32(r9 + 0x2Cu); UPD(0x0C0A4070u, 1);  /* 0C0A406E mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C0A4070 add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C0A4074u, 2);  /* 0C0A4072 mov.l @(disp,pc),Rn */
	r4 += r2;  /* 0C0A4074 add Rm,Rn */
	r3 += r4;  /* 0C0A4076 add Rm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C0A407Au, 3);  /* 0C0A4078 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A407Au); T = (s32)r3 >= 0;  /* 0C0A407A cmp/pz Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C0A407Eu, 2);  /* 0C0A407C mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r9 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A4160u, 3); goto L_0C0A4160; } UPD(0x0C0A4082u, 1); goto L_0C0A4082; }  /* 0C0A407E bf/s */
L_0C0A4082: BLKS(0x0C0A4082u);
	r4 = 0xD00000u; UPD(0x0C0A4084u, 1);  /* 0C0A4082 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r4;  /* 0C0A4084 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0A409Eu, 4); goto L_0C0A409E; }  /* 0C0A4086 bt */
L_0C0A4088: BLKS(0x0C0A4088u);
	r2 = 0xC3929E0u; UPD(0x0C0A408Au, 1);  /* 0C0A4088 mov.l @(disp,pc),Rn */
	r8 = R32(r2); UPD(0x0C0A408Cu, 1);  /* 0C0A408A mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0A408Eu, 1);  /* 0C0A408C mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C0A408E mov Rm,Rn */
	r2 -= r8;  /* 0C0A4090 sub Rm,Rn */
	r2 += r6;  /* 0C0A4092 add Rm,Rn */
	IF(0x0C0A4094u); T = (s32)r2 >= 0;  /* 0C0A4094 cmp/pz Rn */
	if (!T) { UPD(0x0C0A4150u, 7); goto L_0C0A4150; }  /* 0C0A4096 bf */
L_0C0A4098: BLKS(0x0C0A4098u);
	r7 = 0xA80000u; UPD(0x0C0A409Au, 1);  /* 0C0A4098 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C0A409A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A4130u, 4); goto L_0C0A4130; }  /* 0C0A409C bf */
L_0C0A409E: BLKS(0x0C0A409Eu);
	r10 = 0x0u;  /* 0C0A409E mov #imm,Rn */
	W32(r9, r10); UPD(0x0C0A40A2u, 2);  /* 0C0A40A0 mov.l Rm,@Rn */
	r1 = 0x1u;  /* 0C0A40A2 mov #imm,Rn */
	UPD(0x0C0A40A4u, 1);
L_0C0A40A4: BLKS(0x0C0A40A4u);
	r0 = (u32)(s32)(s16)r1;  /* 0C0A40A4 exts.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A40A6 tst Rm,Rn */
	if (T) { UPD(0x0C0A40C0u, 5); goto L_0C0A40C0; }  /* 0C0A40A8 bt */
L_0C0A40AA: BLKS(0x0C0A40AAu);
	r15 = r14;  /* 0C0A40AA mov Rm,Rn */
	IF(0x0C0A40ACu); PR = R32(r15); r15 += 4; UPD(0x0C0A40AEu, 2);  /* 0C0A40AC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A40B0u, 1);  /* 0C0A40AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A40B2u, 1);  /* 0C0A40B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A40B4u, 1);  /* 0C0A40B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A40B6u, 1);  /* 0C0A40B4 mov.l @Rm+,Rn */
	IF(0x0C0A40B6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A40B6 rts */
L_0C0A40C0: BLKS(0x0C0A40C0u);
	r8 = 0xC0A9E40u; UPD(0x0C0A40C2u, 1);  /* 0C0A40C0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0A40C2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C0A40C4 mov #imm,Rn */
	IF(0x0C0A40C6u); { u32 t_ = r8; PR = 0x0C0A40CAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0A40CAu); }  /* 0C0A40C6 jsr @Rn */
L_0C0A40CA: BLKS(0x0C0A40CAu);
	T = (r0 & r0) == 0;  /* 0C0A40CA tst Rm,Rn */
	if (T) { UPD(0x0C0A40AAu, 4); goto L_0C0A40AA; }  /* 0C0A40CC bt */
L_0C0A40CE: BLKS(0x0C0A40CEu);
	r7 = 0xB4u; UPD(0x0C0A40D0u, 1);  /* 0C0A40CE mov.w @(disp,pc),Rn */
	IF(0x0C0A40D0u); MACL = r11 * r7;  /* 0C0A40D0 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0A40D4u, 3);  /* 0C0A40D2 mov.l @(disp,pc),Rn */
	IF(0x0C0A40D4u); r8 = MACL;  /* 0C0A40D4 sts macl,Rn */
	r8 += r2;  /* 0C0A40D6 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C0A40DAu, 3);  /* 0C0A40D8 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0A40DA mov Rm,Rn */
	IF(0x0C0A40DCu); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0A40DEu, 2);  /* 0C0A40DC mov.b @(r0,Rm),Rn */
	r10 = 0xC0A9BB0u; UPD(0x0C0A40E0u, 1);  /* 0C0A40DE mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C0A40E0 extu.b Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0A40E4u, 2);  /* 0C0A40E2 mov.l @(disp,Rm),Rn */
	IF(0x0C0A40E4u); { u32 t_ = r10; PR = 0x0C0A40E8u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0A40E8u); }  /* 0C0A40E4 jsr @Rn */
L_0C0A40E8: BLKS(0x0C0A40E8u);
	T = (r0 & r0) == 0;  /* 0C0A40E8 tst Rm,Rn */
	if (T) { UPD(0x0C0A40AAu, 4); goto L_0C0A40AA; }  /* 0C0A40EA bt */
L_0C0A40EC: BLKS(0x0C0A40ECu);
	r4 = r11;  /* 0C0A40EC mov Rm,Rn */
	r11 = 0xC058090u; UPD(0x0C0A40F0u, 2);  /* 0C0A40EE mov.l @(disp,pc),Rn */
	r10 = 0xC057390u; UPD(0x0C0A40F2u, 1);  /* 0C0A40F0 mov.l @(disp,pc),Rn */
	IF(0x0C0A40F2u); { u32 t_ = r11; PR = 0x0C0A40F6u; IF(0x0C0A40F4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C0A40F6u); }  /* 0C0A40F2 jsr @Rn */
L_0C0A40F6: BLKS(0x0C0A40F6u);
	r4 = 0x280u; UPD(0x0C0A40F8u, 1);  /* 0C0A40F6 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C0A40F8 exts.w Rm,Rn */
	IF(0x0C0A40FAu); MACL = r1 * r4;  /* 0C0A40FA mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C0A40FEu, 4);  /* 0C0A40FC mov.l @(disp,pc),Rn */
	IF(0x0C0A40FEu); r0 = MACL;  /* 0C0A40FE sts macl,Rn */
	r0 += r5;  /* 0C0A4100 add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0A4104u, 3);  /* 0C0A4102 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0A4106u, 1);  /* 0C0A4104 mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C0A4108u, 1);  /* 0C0A4106 mov.l @(disp,Rm),Rn */
	IF(0x0C0A4108u); { u32 t_ = r10; PR = 0x0C0A410Cu; r7 = R32(r0 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C0A410Cu); }  /* 0C0A4108 jsr @Rn */
L_0C0A410C: BLKS(0x0C0A410Cu);
	r3 = 0x28000u; UPD(0x0C0A410Eu, 1);  /* 0C0A410C mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A410E add #imm,Rn */
	r11 = 0xC7C17D0u; UPD(0x0C0A4112u, 2);  /* 0C0A4110 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r0;  /* 0C0A4112 exts.w Rm,Rn */
	W32(r15, r3); UPD(0x0C0A4116u, 2);  /* 0C0A4114 mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C0A4116 mov #imm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A411Au, 2);  /* 0C0A4118 mov.l @(disp,Rm),Rn */
	r7 = r9;  /* 0C0A411A mov Rm,Rn */
	IF(0x0C0A411Cu); { u32 t_ = r11; PR = 0x0C0A4120u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C7C17D0, 0x0C7C17D0u, 0x0C0A4120u); }  /* 0C0A411C jsr @Rn */
L_0C0A4120: BLKS(0x0C0A4120u);
	{ IF(0x0C0A4122u); ; /* slot nop */ UPD(0x0C0A40AAu, 3); goto L_0C0A40AA; }  /* 0C0A4120 bra */
L_0C0A4130: BLKS(0x0C0A4130u);
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A4132u, 1);  /* 0C0A4130 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C0A4132 add #imm,Rn */
	IF(0x0C0A4134u); r0 >>= 2;  /* 0C0A4134 shlr2 Rn */
	IF(0x0C0A4136u); r0 >>= 2;  /* 0C0A4136 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C0A4138 and #imm,r0 */
	W32(r9 + 0x8u, r0); UPD(0x0C0A413Cu, 5);  /* 0C0A413A mov.l Rm,@(disp,Rn) */
	r0 = R32(r9 + 0xCu); UPD(0x0C0A413Eu, 1);  /* 0C0A413C mov.l @(disp,Rm),Rn */
	r5 = 0xC18DDC4u; UPD(0x0C0A4140u, 1);  /* 0C0A413E mov.l @(disp,pc),Rn */
	IF(0x0C0A4140u); r0 <<= 2;  /* 0C0A4140 shll2 Rn */
	IF(0x0C0A4142u); r3 = R32(r0 + r5); UPD(0x0C0A4144u, 2);  /* 0C0A4142 mov.l @(r0,Rm),Rn */
	W32(r9 + 0xCu, r3); UPD(0x0C0A4146u, 1);  /* 0C0A4144 mov.l Rm,@(disp,Rn) */
	r9 = 0xC0A03B0u; UPD(0x0C0A4148u, 1);  /* 0C0A4146 mov.l @(disp,pc),Rn */
	IF(0x0C0A4148u); { u32 t_ = r9; PR = 0x0C0A414Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C0A414Cu); }  /* 0C0A4148 jsr @Rn */
L_0C0A414C: BLKS(0x0C0A414Cu);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A40A4u, 3); goto L_0C0A40A4; }  /* 0C0A414C bra */
L_0C0A4150: BLKS(0x0C0A4150u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A4098u, 3); goto L_0C0A4098; }  /* 0C0A4150 bra */
L_0C0A4160: BLKS(0x0C0A4160u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C0A4082u, 3); goto L_0C0A4082; }  /* 0C0A4160 bra */
}

void f_0C0A4210(sh3_t *c)
{
	LOCALS;
L_0C0A4210: BLKS(0x0C0A4210u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4212u, 1);  /* 0C0A4210 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A4212 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4216u, 2);  /* 0C0A4214 mov.l Rm,@-Rn */
	r5 = 0xB4u; UPD(0x0C0A4218u, 1);  /* 0C0A4216 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A421Au, 1);  /* 0C0A4218 mov.l Rm,@-Rn */
	IF(0x0C0A421Au); MACL = r1 * r5;  /* 0C0A421A mul.l Rm,Rn */
	IF(0x0C0A421Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0A421Eu, 3);  /* 0C0A421C sts.l pr,@-Rn */
	r9 = 0xC0AFE40u; UPD(0x0C0A4220u, 1);  /* 0C0A421E mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A4220 mov Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4224u, 2);  /* 0C0A4222 mov.l @(disp,pc),Rn */
	IF(0x0C0A4224u); r8 = MACL;  /* 0C0A4224 sts macl,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A4226 add #imm,Rn */
	IF(0x0C0A4228u); { u32 t_ = r9; PR = 0x0C0A422Cu; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A422Cu); }  /* 0C0A4228 jsr @Rn */
L_0C0A422C: BLKS(0x0C0A422Cu);
	r3 = 0x28000u; UPD(0x0C0A422Eu, 1);  /* 0C0A422C mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0A422E mov #imm,Rn */
	r2 = 0xC177C74u; UPD(0x0C0A4232u, 2);  /* 0C0A4230 mov.l @(disp,pc),Rn */
	r7 = r0;  /* 0C0A4232 mov Rm,Rn */
	r9 = 0xC7C1710u; UPD(0x0C0A4236u, 2);  /* 0C0A4234 mov.l @(disp,pc),Rn */
	W32(r15, r3); UPD(0x0C0A4238u, 1);  /* 0C0A4236 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0A423Au, 1);  /* 0C0A4238 mov.l Rm,@(disp,Rn) */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A423Cu, 1);  /* 0C0A423A mov.l @(disp,Rm),Rn */
	IF(0x0C0A423Cu); { u32 t_ = r9; PR = 0x0C0A4240u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1710, 0x0C7C1710u, 0x0C0A4240u); }  /* 0C0A423C jsr @Rn */
L_0C0A4240: BLKS(0x0C0A4240u);
	r0 = 0x14u;  /* 0C0A4240 mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A4244u, 2);  /* 0C0A4242 mov.l Rm,@(disp,Rn) */
	r9 = 0x0u;  /* 0C0A4244 mov #imm,Rn */
	r0 = 0xC0ADDE0u; UPD(0x0C0A4248u, 2);  /* 0C0A4246 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0A4248 mov #imm,Rn */
	W32(r15, r9); UPD(0x0C0A424Cu, 2);  /* 0C0A424A mov.l Rm,@Rn */
	r4 = R32(r8); UPD(0x0C0A424Eu, 1);  /* 0C0A424C mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A4250u, 1);  /* 0C0A424E mov.l @(disp,Rm),Rn */
	IF(0x0C0A4250u); { u32 t_ = r0; PR = 0x0C0A4254u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ADDE0, 0x0C0ADDE0u, 0x0C0A4254u); }  /* 0C0A4250 jsr @Rn */
L_0C0A4254: BLKS(0x0C0A4254u);
	W32(r8, r9); UPD(0x0C0A4256u, 1);  /* 0C0A4254 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A4256 mov Rm,Rn */
	IF(0x0C0A4258u); PR = R32(r15); r15 += 4; UPD(0x0C0A425Au, 2);  /* 0C0A4258 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A425Cu, 1);  /* 0C0A425A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A425Eu, 1);  /* 0C0A425C mov.l @Rm+,Rn */
	IF(0x0C0A425Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A425E rts */
}

void f_0C0A4280(sh3_t *c)
{
	LOCALS;
L_0C0A4280: BLKS(0x0C0A4280u);
	r3 = 0xB4u; UPD(0x0C0A4282u, 1);  /* 0C0A4280 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A4282 exts.w Rm,Rn */
	IF(0x0C0A4284u); MACL = r4 * r3;  /* 0C0A4284 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4288u, 4);  /* 0C0A4286 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A428Au, 1);  /* 0C0A4288 mov.l Rm,@-Rn */
	IF(0x0C0A428Au); r3 = MACL;  /* 0C0A428A sts macl,Rn */
	r3 += r0;  /* 0C0A428C add Rm,Rn */
	r0 = R32(r3 + 0x24u); UPD(0x0C0A4290u, 3);  /* 0C0A428E mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0A4290 mov Rm,Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C0A4294u, 2);  /* 0C0A4292 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x2Cu); UPD(0x0C0A4296u, 1);  /* 0C0A4294 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C0A4298u, 1);  /* 0C0A4296 mov.l @(disp,Rm),Rn */
	r0 += r5;  /* 0C0A4298 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0A429Cu, 2);  /* 0C0A429A mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0A429C add Rm,Rn */
	r7 += r0;  /* 0C0A429E add Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C0A42A2u, 3);  /* 0C0A42A0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A42A2u); T = (s32)r7 >= 0;  /* 0C0A42A2 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A4300u, 4); goto L_0C0A4300; } UPD(0x0C0A42A8u, 1); goto L_0C0A42A8; }  /* 0C0A42A4 bf/s */
L_0C0A42A8: BLKS(0x0C0A42A8u);
	r2 = 0xA80000u; UPD(0x0C0A42AAu, 1);  /* 0C0A42A8 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r2;  /* 0C0A42AA cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0A42C4u, 4); goto L_0C0A42C4; }  /* 0C0A42AC bt */
L_0C0A42AE: BLKS(0x0C0A42AEu);
	r2 = r6;  /* 0C0A42AE mov Rm,Rn */
	r5 = 0xC3929E0u; UPD(0x0C0A42B2u, 2);  /* 0C0A42B0 mov.l @(disp,pc),Rn */
	r7 = R32(r5); UPD(0x0C0A42B4u, 1);  /* 0C0A42B2 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0A42B6u, 1);  /* 0C0A42B4 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0A42B6 sub Rm,Rn */
	r2 += r6;  /* 0C0A42B8 add Rm,Rn */
	IF(0x0C0A42BAu); T = (s32)r2 >= 0;  /* 0C0A42BA cmp/pz Rn */
	if (!T) { UPD(0x0C0A42F0u, 6); goto L_0C0A42F0; }  /* 0C0A42BC bf */
L_0C0A42BE: BLKS(0x0C0A42BEu);
	r0 = 0x800000u; UPD(0x0C0A42C0u, 1);  /* 0C0A42BE mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0A42C0 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A42D0u, 4); goto L_0C0A42D0; }  /* 0C0A42C2 bf */
L_0C0A42C4: BLKS(0x0C0A42C4u);
	r4 = 0x0u;  /* 0C0A42C4 mov #imm,Rn */
	W32(r3, r4); UPD(0x0C0A42C8u, 2);  /* 0C0A42C6 mov.l Rm,@Rn */
L_0C0A42C8: BLKS(0x0C0A42C8u);
	r15 = r14;  /* 0C0A42C8 mov Rm,Rn */
	IF(0x0C0A42CAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A42CA rts */
L_0C0A42D0: BLKS(0x0C0A42D0u);
	r2 = 0x99u; UPD(0x0C0A42D2u, 1);  /* 0C0A42D0 mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0A42D2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A42D6u, 2);  /* 0C0A42D4 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0A42D6 add #imm,Rn */
	W8(r2, r0); UPD(0x0C0A42DAu, 2);  /* 0C0A42D8 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C0A42DA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A42DC tst Rm,Rn */
	if (T) { UPD(0x0C0A42C8u, 5); goto L_0C0A42C8; }  /* 0C0A42DE bt */
L_0C0A42E0: BLKS(0x0C0A42E0u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0A42E2u, 1);  /* 0C0A42E0 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0A42E2 add #imm,Rn */
	r0 &= 0x3u;  /* 0C0A42E4 and #imm,r0 */
	W32(r3 + 0xCu, r0); UPD(0x0C0A42E8u, 3);  /* 0C0A42E6 mov.l Rm,@(disp,Rn) */
	r3 = 0xC0A0380u; UPD(0x0C0A42EAu, 1);  /* 0C0A42E8 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0A42EA mov Rm,Rn */
	IF(0x0C0A42ECu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C0A42EC jmp @Rn */
L_0C0A42F0: BLKS(0x0C0A42F0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A42BEu, 3); goto L_0C0A42BE; }  /* 0C0A42F0 bra */
L_0C0A4300: BLKS(0x0C0A4300u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0A42A8u, 3); goto L_0C0A42A8; }  /* 0C0A4300 bra */
}

void f_0C0A4400(sh3_t *c)
{
	LOCALS;
L_0C0A4400: BLKS(0x0C0A4400u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4402u, 1);  /* 0C0A4400 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4404u, 1);  /* 0C0A4402 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4406u, 1);  /* 0C0A4404 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4408u, 1);  /* 0C0A4406 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A440Au, 1);  /* 0C0A4408 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A440Cu, 1);  /* 0C0A440A mov.l Rm,@-Rn */
	r8 = 0xC050D70u; UPD(0x0C0A440Eu, 1);  /* 0C0A440C mov.l @(disp,pc),Rn */
	IF(0x0C0A440Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0A4410u, 1);  /* 0C0A440E sts.l pr,@-Rn */
	r4 = 0xB0u; UPD(0x0C0A4412u, 1);  /* 0C0A4410 mov.w @(disp,pc),Rn */
	IF(0x0C0A4412u); { u32 t_ = r8; PR = 0x0C0A4416u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4416u); }  /* 0C0A4412 jsr @Rn */
L_0C0A4416: BLKS(0x0C0A4416u);
	r2 = 0xC3929E0u; UPD(0x0C0A4418u, 1);  /* 0C0A4416 mov.l @(disp,pc),Rn */
	r0 += 0x20u;  /* 0C0A4418 add #imm,Rn */
	r8 = 0xC0606C0u; UPD(0x0C0A441Cu, 2);  /* 0C0A441A mov.l @(disp,pc),Rn */
	IF(0x0C0A441Cu); r0 <<= 16;  /* 0C0A441C shll16 Rn */
	r10 = R32(r2); UPD(0x0C0A4420u, 2);  /* 0C0A441E mov.l @Rm,Rn */
	r4 = 0x1u;  /* 0C0A4420 mov #imm,Rn */
	r11 = 0x100u; UPD(0x0C0A4424u, 2);  /* 0C0A4422 mov.w @(disp,pc),Rn */
	IF(0x0C0A4424u); { u32 t_ = r8; PR = 0x0C0A4428u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0A4428u); }  /* 0C0A4424 jsr @Rn */
L_0C0A4428: BLKS(0x0C0A4428u);
	r12 = 0x20000u; UPD(0x0C0A442Au, 1);  /* 0C0A4428 mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C0A442A tst Rm,Rn */
	if (!T) { UPD(0x0C0A4450u, 4); goto L_0C0A4450; }  /* 0C0A442C bf */
L_0C0A442E: BLKS(0x0C0A442Eu);
	r0 = 0x1u;  /* 0C0A442E mov #imm,Rn */
	r15 = r14;  /* 0C0A4430 mov Rm,Rn */
	IF(0x0C0A4432u); PR = R32(r15); r15 += 4; UPD(0x0C0A4434u, 3);  /* 0C0A4432 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4436u, 1);  /* 0C0A4434 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A4438u, 1);  /* 0C0A4436 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A443Au, 1);  /* 0C0A4438 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A443Cu, 1);  /* 0C0A443A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A443Eu, 1);  /* 0C0A443C mov.l @Rm+,Rn */
	IF(0x0C0A443Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A443E rts */
L_0C0A4450: BLKS(0x0C0A4450u);
	r5 = 0xC2755BCu; UPD(0x0C0A4452u, 1);  /* 0C0A4450 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0A4452 mov #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r5); UPD(0x0C0A4456u, 2);  /* 0C0A4454 mov.w @Rm,Rn */
	r2 = 0x2Bu;  /* 0C0A4456 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C0A445Au, 2);  /* 0C0A4458 mov.w @(disp,pc),Rn */
	r7 = 0x10u;  /* 0C0A445A mov #imm,Rn */
	IF(0x0C0A445Cu); MACL = r9 * r8;  /* 0C0A445C mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4460u, 4);  /* 0C0A445E mov.l @(disp,pc),Rn */
	IF(0x0C0A4460u); r8 = MACL;  /* 0C0A4460 sts macl,Rn */
	r8 += r0;  /* 0C0A4462 add Rm,Rn */
	r6 = 0xC0A02D0u; UPD(0x0C0A4466u, 3);  /* 0C0A4464 mov.l @(disp,pc),Rn */
	r3 = 0xD3000000u; UPD(0x0C0A4468u, 1);  /* 0C0A4466 mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C0A446Au, 1);  /* 0C0A4468 mov.l Rm,@(disp,Rn) */
	W32(r8, r3); UPD(0x0C0A446Cu, 1);  /* 0C0A446A mov.l Rm,@Rn */
	r4 = r9;  /* 0C0A446C mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0A4470u, 2);  /* 0C0A446E mov.l Rm,@(disp,Rn) */
	IF(0x0C0A4470u); { u32 t_ = r6; PR = 0x0C0A4474u; W32(r8 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A4474u); }  /* 0C0A4470 jsr @Rn */
L_0C0A4474: BLKS(0x0C0A4474u);
	r5 = 0xC0A1530u; UPD(0x0C0A4476u, 1);  /* 0C0A4474 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0A4476 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0A447Au, 2);  /* 0C0A4478 mov.l @(disp,pc),Rn */
	IF(0x0C0A447Au); { u32 t_ = r5; PR = 0x0C0A447Eu; IF(0x0C0A447Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A447Eu); }  /* 0C0A447A jsr @Rn */
L_0C0A447E: BLKS(0x0C0A447Eu);
	r0 = 0x1500000u; UPD(0x0C0A4480u, 1);  /* 0C0A447E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0A4480 mov Rm,Rn */
	W32(r8 + 0x28u, r10); UPD(0x0C0A4484u, 2);  /* 0C0A4482 mov.l Rm,@(disp,Rn) */
	r5 = r12;  /* 0C0A4484 mov Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0A4488u, 2);  /* 0C0A4486 mov.l Rm,@(disp,Rn) */
	r10 = 0xC058060u; UPD(0x0C0A448Au, 1);  /* 0C0A4488 mov.l @(disp,pc),Rn */
	r0 = 0x86u; UPD(0x0C0A448Cu, 1);  /* 0C0A448A mov.w @(disp,pc),Rn */
	IF(0x0C0A448Cu); { u32 t_ = r10; PR = 0x0C0A4490u; IF(0x0C0A448Eu); W16(r0 + r8, r11); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A4490u); }  /* 0C0A448C jsr @Rn */
L_0C0A4490: BLKS(0x0C0A4490u);
	W32(r8 + 0x2Cu, r0); UPD(0x0C0A4492u, 1);  /* 0C0A4490 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C0A4492 mov Rm,Rn */
	IF(0x0C0A4494u); { u32 t_ = r9; PR = 0x0C0A4498u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A4498u); }  /* 0C0A4494 jsr @Rn */
L_0C0A4498: BLKS(0x0C0A4498u);
	W32(r8 + 0x30u, r0); UPD(0x0C0A449Au, 1);  /* 0C0A4498 mov.l Rm,@(disp,Rn) */
	r3 = 0x14u;  /* 0C0A449A mov #imm,Rn */
	r0 = 0xADu; UPD(0x0C0A449Eu, 2);  /* 0C0A449C mov.w @(disp,pc),Rn */
	IF(0x0C0A449Eu); W8(r0 + r8, r3); UPD(0x0C0A44A0u, 1);  /* 0C0A449E mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0A44A0 add #imm,Rn */
	{ IF(0x0C0A44A4u); W8(r0 + r8, r3); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0A442Eu, 4); goto L_0C0A442E; }  /* 0C0A44A2 bra */
}

void f_0C0A44E0(sh3_t *c)
{
	LOCALS;
L_0C0A44E0: BLKS(0x0C0A44E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A44E2u, 1);  /* 0C0A44E0 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A44E2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A44E6u, 2);  /* 0C0A44E4 mov.l Rm,@-Rn */
	r5 = 0xB4u; UPD(0x0C0A44E8u, 1);  /* 0C0A44E6 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A44EAu, 1);  /* 0C0A44E8 mov.l Rm,@-Rn */
	IF(0x0C0A44EAu); MACL = r1 * r5;  /* 0C0A44EA mul.l Rm,Rn */
	IF(0x0C0A44ECu); r15 -= 4; W32(r15, PR); UPD(0x0C0A44EEu, 3);  /* 0C0A44EC sts.l pr,@-Rn */
	r9 = 0xC0AFE40u; UPD(0x0C0A44F0u, 1);  /* 0C0A44EE mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A44F0 mov Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A44F4u, 2);  /* 0C0A44F2 mov.l @(disp,pc),Rn */
	IF(0x0C0A44F4u); r8 = MACL;  /* 0C0A44F4 sts macl,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A44F6 add #imm,Rn */
	IF(0x0C0A44F8u); { u32 t_ = r9; PR = 0x0C0A44FCu; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A44FCu); }  /* 0C0A44F8 jsr @Rn */
L_0C0A44FC: BLKS(0x0C0A44FCu);
	r3 = 0x28000u; UPD(0x0C0A44FEu, 1);  /* 0C0A44FC mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0A44FE mov #imm,Rn */
	r2 = 0xC177C74u; UPD(0x0C0A4502u, 2);  /* 0C0A4500 mov.l @(disp,pc),Rn */
	r7 = r0;  /* 0C0A4502 mov Rm,Rn */
	r9 = 0xC7C14F4u; UPD(0x0C0A4506u, 2);  /* 0C0A4504 mov.l @(disp,pc),Rn */
	W32(r15, r3); UPD(0x0C0A4508u, 1);  /* 0C0A4506 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0A450Au, 1);  /* 0C0A4508 mov.l Rm,@(disp,Rn) */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A450Cu, 1);  /* 0C0A450A mov.l @(disp,Rm),Rn */
	IF(0x0C0A450Cu); { u32 t_ = r9; PR = 0x0C0A4510u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C14F4, 0x0C7C14F4u, 0x0C0A4510u); }  /* 0C0A450C jsr @Rn */
L_0C0A4510: BLKS(0x0C0A4510u);
	r0 = 0x14u;  /* 0C0A4510 mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A4514u, 2);  /* 0C0A4512 mov.l Rm,@(disp,Rn) */
	r9 = 0x0u;  /* 0C0A4514 mov #imm,Rn */
	r0 = 0xC0ADDE0u; UPD(0x0C0A4518u, 2);  /* 0C0A4516 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0A4518 mov #imm,Rn */
	W32(r15, r9); UPD(0x0C0A451Cu, 2);  /* 0C0A451A mov.l Rm,@Rn */
	r4 = R32(r8); UPD(0x0C0A451Eu, 1);  /* 0C0A451C mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A4520u, 1);  /* 0C0A451E mov.l @(disp,Rm),Rn */
	IF(0x0C0A4520u); { u32 t_ = r0; PR = 0x0C0A4524u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ADDE0, 0x0C0ADDE0u, 0x0C0A4524u); }  /* 0C0A4520 jsr @Rn */
L_0C0A4524: BLKS(0x0C0A4524u);
	r0 = 0xC0AFC10u; UPD(0x0C0A4526u, 1);  /* 0C0A4524 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0A4526 add #imm,Rn */
	IF(0x0C0A4528u); { u32 t_ = r0; PR = 0x0C0A452Cu; r4 = 0x71u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0A452Cu); }  /* 0C0A4528 jsr @Rn */
L_0C0A452C: BLKS(0x0C0A452Cu);
	W32(r8, r9); UPD(0x0C0A452Eu, 1);  /* 0C0A452C mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A452E mov Rm,Rn */
	IF(0x0C0A4530u); PR = R32(r15); r15 += 4; UPD(0x0C0A4532u, 2);  /* 0C0A4530 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4534u, 1);  /* 0C0A4532 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A4536u, 1);  /* 0C0A4534 mov.l @Rm+,Rn */
	IF(0x0C0A4536u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A4536 rts */
}

void f_0C0A4560(sh3_t *c)
{
	LOCALS;
L_0C0A4560: BLKS(0x0C0A4560u);
	r3 = 0xB4u; UPD(0x0C0A4562u, 1);  /* 0C0A4560 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A4562 exts.w Rm,Rn */
	IF(0x0C0A4564u); MACL = r4 * r3;  /* 0C0A4564 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4568u, 4);  /* 0C0A4566 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A456Au, 1);  /* 0C0A4568 mov.l Rm,@-Rn */
	IF(0x0C0A456Au); r3 = MACL;  /* 0C0A456A sts macl,Rn */
	r3 += r0;  /* 0C0A456C add Rm,Rn */
	r0 = R32(r3 + 0x24u); UPD(0x0C0A4570u, 3);  /* 0C0A456E mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0A4570 mov Rm,Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C0A4574u, 2);  /* 0C0A4572 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x2Cu); UPD(0x0C0A4576u, 1);  /* 0C0A4574 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C0A4578u, 1);  /* 0C0A4576 mov.l @(disp,Rm),Rn */
	r0 += r5;  /* 0C0A4578 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0A457Cu, 2);  /* 0C0A457A mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0A457C add Rm,Rn */
	r7 += r0;  /* 0C0A457E add Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C0A4582u, 3);  /* 0C0A4580 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A4582u); T = (s32)r7 >= 0;  /* 0C0A4582 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A45E0u, 4); goto L_0C0A45E0; } UPD(0x0C0A4588u, 1); goto L_0C0A4588; }  /* 0C0A4584 bf/s */
L_0C0A4588: BLKS(0x0C0A4588u);
	r2 = 0xB80000u; UPD(0x0C0A458Au, 1);  /* 0C0A4588 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r2;  /* 0C0A458A cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0A45A4u, 4); goto L_0C0A45A4; }  /* 0C0A458C bt */
L_0C0A458E: BLKS(0x0C0A458Eu);
	r2 = r6;  /* 0C0A458E mov Rm,Rn */
	r5 = 0xC3929E0u; UPD(0x0C0A4592u, 2);  /* 0C0A4590 mov.l @(disp,pc),Rn */
	r7 = R32(r5); UPD(0x0C0A4594u, 1);  /* 0C0A4592 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0A4596u, 1);  /* 0C0A4594 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0A4596 sub Rm,Rn */
	r2 += r6;  /* 0C0A4598 add Rm,Rn */
	IF(0x0C0A459Au); T = (s32)r2 >= 0;  /* 0C0A459A cmp/pz Rn */
	if (!T) { UPD(0x0C0A45D0u, 6); goto L_0C0A45D0; }  /* 0C0A459C bf */
L_0C0A459E: BLKS(0x0C0A459Eu);
	r0 = 0x900000u; UPD(0x0C0A45A0u, 1);  /* 0C0A459E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0A45A0 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A45B0u, 4); goto L_0C0A45B0; }  /* 0C0A45A2 bf */
L_0C0A45A4: BLKS(0x0C0A45A4u);
	r4 = 0x0u;  /* 0C0A45A4 mov #imm,Rn */
	W32(r3, r4); UPD(0x0C0A45A8u, 2);  /* 0C0A45A6 mov.l Rm,@Rn */
L_0C0A45A8: BLKS(0x0C0A45A8u);
	r15 = r14;  /* 0C0A45A8 mov Rm,Rn */
	IF(0x0C0A45AAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A45AA rts */
L_0C0A45B0: BLKS(0x0C0A45B0u);
	r2 = 0x99u; UPD(0x0C0A45B2u, 1);  /* 0C0A45B0 mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0A45B2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A45B6u, 2);  /* 0C0A45B4 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0A45B6 add #imm,Rn */
	W8(r2, r0); UPD(0x0C0A45BAu, 2);  /* 0C0A45B8 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C0A45BA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A45BC tst Rm,Rn */
	if (T) { UPD(0x0C0A45A8u, 5); goto L_0C0A45A8; }  /* 0C0A45BE bt */
L_0C0A45C0: BLKS(0x0C0A45C0u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0A45C2u, 1);  /* 0C0A45C0 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0A45C2 add #imm,Rn */
	r0 &= 0x3u;  /* 0C0A45C4 and #imm,r0 */
	W32(r3 + 0xCu, r0); UPD(0x0C0A45C8u, 3);  /* 0C0A45C6 mov.l Rm,@(disp,Rn) */
	r3 = 0xC0A0380u; UPD(0x0C0A45CAu, 1);  /* 0C0A45C8 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0A45CA mov Rm,Rn */
	IF(0x0C0A45CCu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C0A45CC jmp @Rn */
L_0C0A45D0: BLKS(0x0C0A45D0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A459Eu, 3); goto L_0C0A459E; }  /* 0C0A45D0 bra */
L_0C0A45E0: BLKS(0x0C0A45E0u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0A4588u, 3); goto L_0C0A4588; }  /* 0C0A45E0 bra */
}

void f_0C0A4610(sh3_t *c)
{
	LOCALS;
L_0C0A4610: BLKS(0x0C0A4610u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4612u, 1);  /* 0C0A4610 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C0A4614u, 1);  /* 0C0A4612 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A4614 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4618u, 2);  /* 0C0A4616 mov.l Rm,@-Rn */
	IF(0x0C0A4618u); MACL = r8 * r0;  /* 0C0A4618 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A461Cu, 3);  /* 0C0A461A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A461Eu, 1);  /* 0C0A461C mov.l Rm,@-Rn */
	IF(0x0C0A461Eu); r9 = MACL;  /* 0C0A461E sts macl,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4622u, 2);  /* 0C0A4620 mov.l @(disp,pc),Rn */
	IF(0x0C0A4622u); r15 -= 4; W32(r15, PR); UPD(0x0C0A4624u, 1);  /* 0C0A4622 sts.l pr,@-Rn */
	r9 += r0;  /* 0C0A4624 add Rm,Rn */
	r10 = R32(r9 + 0x8u); UPD(0x0C0A4628u, 2);  /* 0C0A4626 mov.l @(disp,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C0A4628 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A4660u, 4); goto L_0C0A4660; } goto L_0C0A462E; }  /* 0C0A462A bf/s */
L_0C0A462E: BLKS(0x0C0A462Eu);
	r1 = 0xFDFFFFFFu; UPD(0x0C0A4630u, 2);  /* 0C0A462E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0A4632u, 1);  /* 0C0A4630 mov.l @Rm,Rn */
	r0 = 0xC050D70u; UPD(0x0C0A4634u, 1);  /* 0C0A4632 mov.l @(disp,pc),Rn */
	r4 &= r1;  /* 0C0A4634 and Rm,Rn */
	W32(r9, r4); UPD(0x0C0A4638u, 2);  /* 0C0A4636 mov.l Rm,@Rn */
	IF(0x0C0A4638u); { u32 t_ = r0; PR = 0x0C0A463Cu; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A463Cu); }  /* 0C0A4638 jsr @Rn */
L_0C0A463C: BLKS(0x0C0A463Cu);
	r5 = 0xC0A03B0u; UPD(0x0C0A463Eu, 1);  /* 0C0A463C mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C0A463E add #imm,Rn */
	W32(r9 + 0x8u, r0); UPD(0x0C0A4642u, 2);  /* 0C0A4640 mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C0A4642 mov Rm,Rn */
	IF(0x0C0A4644u); { u32 t_ = r5; PR = 0x0C0A4648u; W32(r9 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C0A4648u); }  /* 0C0A4644 jsr @Rn */
L_0C0A4648: BLKS(0x0C0A4648u);
	r3 = 0xC0A1530u; UPD(0x0C0A464Au, 1);  /* 0C0A4648 mov.l @(disp,pc),Rn */
	IF(0x0C0A464Au); { u32 t_ = r3; PR = 0x0C0A464Eu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A464Eu); }  /* 0C0A464A jsr @Rn */
L_0C0A464E: BLKS(0x0C0A464Eu);
	r2 = 0x207C0C0u; UPD(0x0C0A4650u, 1);  /* 0C0A464E mov.l @(disp,pc),Rn */
	W32(r9 + 0x34u, r2); UPD(0x0C0A4652u, 1);  /* 0C0A4650 mov.l Rm,@(disp,Rn) */
L_0C0A4652: BLKS(0x0C0A4652u);
	r15 = r14;  /* 0C0A4652 mov Rm,Rn */
	IF(0x0C0A4654u); PR = R32(r15); r15 += 4; UPD(0x0C0A4656u, 2);  /* 0C0A4654 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4658u, 1);  /* 0C0A4656 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A465Au, 1);  /* 0C0A4658 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A465Cu, 1);  /* 0C0A465A mov.l @Rm+,Rn */
	IF(0x0C0A465Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A465C rts */
L_0C0A4660: BLKS(0x0C0A4660u);
	r15 += 0xFFFFFFF8u;  /* 0C0A4660 add #imm,Rn */
	r10 = 0x0u;  /* 0C0A4662 mov #imm,Rn */
	r6 = 0x14u;  /* 0C0A4664 mov #imm,Rn */
	r8 = 0xC0ADDE0u; UPD(0x0C0A4668u, 4);  /* 0C0A4666 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0A4668 mov #imm,Rn */
	W32(r15, r10); UPD(0x0C0A466Cu, 2);  /* 0C0A466A mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0A466Eu, 1);  /* 0C0A466C mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C0A4670u, 1);  /* 0C0A466E mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0A4672u, 1);  /* 0C0A4670 mov.l @(disp,Rm),Rn */
	IF(0x0C0A4672u); { u32 t_ = r8; PR = 0x0C0A4676u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ADDE0, 0x0C0ADDE0u, 0x0C0A4676u); }  /* 0C0A4672 jsr @Rn */
L_0C0A4676: BLKS(0x0C0A4676u);
	W32(r9, r10); UPD(0x0C0A4678u, 1);  /* 0C0A4676 mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0A4652u, 3); goto L_0C0A4652; }  /* 0C0A4678 bra */
}

void f_0C0A4AF0(sh3_t *c)
{
	LOCALS;
L_0C0A4AF0: BLKS(0x0C0A4AF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4AF2u, 1);  /* 0C0A4AF0 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0A4AF4u, 1);  /* 0C0A4AF2 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A4AF4 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4AF8u, 2);  /* 0C0A4AF6 mov.l Rm,@-Rn */
	IF(0x0C0A4AF8u); MACL = r8 * r3;  /* 0C0A4AF8 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4AFCu, 3);  /* 0C0A4AFA mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4AFEu, 1);  /* 0C0A4AFC mov.l @(disp,pc),Rn */
	IF(0x0C0A4AFEu); r2 = MACL;  /* 0C0A4AFE sts macl,Rn */
	IF(0x0C0A4B00u); r15 -= 4; W32(r15, PR); UPD(0x0C0A4B02u, 2);  /* 0C0A4B00 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0A4B02 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0A4B06u, 2);  /* 0C0A4B04 mov.l @(disp,Rm),Rn */
	r0 = 0x5u;  /* 0C0A4B06 mov #imm,Rn */
	T = r2 > r0;  /* 0C0A4B08 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A4BA8u, 5); goto L_0C0A4BA8; } goto L_0C0A4B0E; }  /* 0C0A4B0A bt/s */
L_0C0A4B0E: BLKS(0x0C0A4B0Eu);
	r0 = 0xC0A4B20u;  /* 0C0A4B0E mova @(disp,pc),r0 */
	IF(0x0C0A4B10u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0A4B12u, 3);  /* 0C0A4B10 mov.b @(r0,Rm),Rn */
	r4 = r4 & 0xFF;  /* 0C0A4B12 extu.b Rm,Rn */
	IF(0x0C0A4B14u); { u32 tv_ = (r4 + 0x0C0A4B18u); u32 t_ = PHYS(tv_); IF(0x0C0A4B16u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0A4B30u: goto L_0C0A4B30; case 0x0C0A4B40u: goto L_0C0A4B40; case 0x0C0A4B60u: goto L_0C0A4B60; case 0x0C0A4BC0u: goto L_0C0A4BC0; case 0x0C0A4BF0u: goto L_0C0A4BF0; default: JUMPD(tv_); } }  /* 0C0A4B14 braf Rn */
L_0C0A4B30: BLKS(0x0C0A4B30u);
	r5 = 0xC0A14C0u; UPD(0x0C0A4B32u, 1);  /* 0C0A4B30 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0A4B32 mov Rm,Rn */
	r15 = r14;  /* 0C0A4B34 mov Rm,Rn */
	IF(0x0C0A4B36u); PR = R32(r15); r15 += 4; UPD(0x0C0A4B38u, 3);  /* 0C0A4B36 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4B3Au, 1);  /* 0C0A4B38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A4B3Cu, 1);  /* 0C0A4B3A mov.l @Rm+,Rn */
	IF(0x0C0A4B3Cu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A14C0u: TAIL(f_0C0A14C0); default: JUMPD(tv_); } }  /* 0C0A4B3C jmp @Rn */
L_0C0A4B40: BLKS(0x0C0A4B40u);
	r5 = 0xC194D74u; UPD(0x0C0A4B42u, 1);  /* 0C0A4B40 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0A4B42 mov Rm,Rn */
	r6 = 0xC0A17E0u; UPD(0x0C0A4B46u, 2);  /* 0C0A4B44 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0A4B46 mov Rm,Rn */
	IF(0x0C0A4B48u); PR = R32(r15); r15 += 4; UPD(0x0C0A4B4Au, 2);  /* 0C0A4B48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4B4Cu, 1);  /* 0C0A4B4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A4B4Eu, 1);  /* 0C0A4B4C mov.l @Rm+,Rn */
	IF(0x0C0A4B4Eu); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A17E0u: TAIL(f_0C0A17E0); default: JUMPD(tv_); } }  /* 0C0A4B4E jmp @Rn */
L_0C0A4B60: BLKS(0x0C0A4B60u);
	r9 = 0xB4u; UPD(0x0C0A4B62u, 1);  /* 0C0A4B60 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A4B62 add #imm,Rn */
	IF(0x0C0A4B64u); MACL = r8 * r9;  /* 0C0A4B64 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4B68u, 4);  /* 0C0A4B66 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0A4B68 mov #imm,Rn */
	IF(0x0C0A4B6Au); r9 = MACL;  /* 0C0A4B6A sts macl,Rn */
	r9 += r0;  /* 0C0A4B6C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A4B70u, 4);  /* 0C0A4B6E mov.w @(disp,pc),Rn */
	IF(0x0C0A4B70u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A4B72u, 1);  /* 0C0A4B70 mov.b @(r0,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C0A4B72 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0A4B76u, 2);  /* 0C0A4B74 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A4B76 add #imm,Rn */
	IF(0x0C0A4B78u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A4B7Au, 2);  /* 0C0A4B78 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0A4B7A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A4B7Eu, 2);  /* 0C0A4B7C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C0A4B80u, 1);  /* 0C0A4B7E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0A4B82u, 1);  /* 0C0A4B80 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0A4B84u, 1);  /* 0C0A4B82 mov.l @(disp,Rm),Rn */
	IF(0x0C0A4B84u); { u32 t_ = r0; PR = 0x0C0A4B88u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C0A4B88u); }  /* 0C0A4B84 jsr @Rn */
L_0C0A4B88: BLKS(0x0C0A4B88u);
	r4 = r8;  /* 0C0A4B88 mov Rm,Rn */
	r8 = 0xC0A05D0u; UPD(0x0C0A4B8Cu, 2);  /* 0C0A4B8A mov.l @(disp,pc),Rn */
	IF(0x0C0A4B8Cu); { u32 t_ = r8; PR = 0x0C0A4B90u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C0A4B90u); }  /* 0C0A4B8C jsr @Rn */
L_0C0A4B90: BLKS(0x0C0A4B90u);
	IF(0x0C0A4B90u); T = (s32)r0 >= 0;  /* 0C0A4B90 cmp/pz Rn */
	if (!T) { UPD(0x0C0A4BA4u, 4); goto L_0C0A4BA4; }  /* 0C0A4B92 bf */
L_0C0A4B94: BLKS(0x0C0A4B94u);
	r4 = 0x2u;  /* 0C0A4B94 mov #imm,Rn */
	r5 = 0xFFFE0000u; UPD(0x0C0A4B98u, 2);  /* 0C0A4B96 mov.l @(disp,pc),Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C0A4B9Au, 1);  /* 0C0A4B98 mov.l @(disp,Rm),Rn */
	r6 += r5;  /* 0C0A4B9A add Rm,Rn */
	r5 = r0;  /* 0C0A4B9C mov Rm,Rn */
	UPD(0x0C0A4B9Eu, 2);
L_0C0A4B9E: BLKS(0x0C0A4B9Eu);
	r8 = 0xC06CD90u; UPD(0x0C0A4BA0u, 1);  /* 0C0A4B9E mov.l @(disp,pc),Rn */
	IF(0x0C0A4BA0u); { u32 t_ = r8; PR = 0x0C0A4BA4u; r7 = R32(r9 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CD90, 0x0C06CD90u, 0x0C0A4BA4u); }  /* 0C0A4BA0 jsr @Rn */
L_0C0A4BA4: BLKS(0x0C0A4BA4u);
	r5 = 0x0u;  /* 0C0A4BA4 mov #imm,Rn */
	W32(r9, r5); UPD(0x0C0A4BA8u, 2);  /* 0C0A4BA6 mov.l Rm,@Rn */
L_0C0A4BA8: BLKS(0x0C0A4BA8u);
	r15 = r14;  /* 0C0A4BA8 mov Rm,Rn */
	IF(0x0C0A4BAAu); PR = R32(r15); r15 += 4; UPD(0x0C0A4BACu, 2);  /* 0C0A4BAA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4BAEu, 1);  /* 0C0A4BAC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A4BB0u, 1);  /* 0C0A4BAE mov.l @Rm+,Rn */
	IF(0x0C0A4BB0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A4BB0 rts */
L_0C0A4BC0: BLKS(0x0C0A4BC0u);
	r6 = 0xB4u; UPD(0x0C0A4BC2u, 1);  /* 0C0A4BC0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A4BC2 add #imm,Rn */
	IF(0x0C0A4BC4u); MACL = r8 * r6;  /* 0C0A4BC4 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0A4BC8u, 4);  /* 0C0A4BC6 mov.l @(disp,pc),Rn */
	IF(0x0C0A4BC8u); r9 = MACL;  /* 0C0A4BC8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A4BCCu, 2);  /* 0C0A4BCA mov.w @(disp,pc),Rn */
	r9 += r5;  /* 0C0A4BCC add Rm,Rn */
	IF(0x0C0A4BCEu); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A4BD0u, 2);  /* 0C0A4BCE mov.b @(r0,Rm),Rn */
	r5 = 0x7u;  /* 0C0A4BD0 mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C0A4BD2 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0A4BD6u, 3);  /* 0C0A4BD4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A4BD6 add #imm,Rn */
	IF(0x0C0A4BD8u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A4BDAu, 2);  /* 0C0A4BD8 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C0A4BDA extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A4BDEu, 2);  /* 0C0A4BDC mov.l Rm,@(disp,Rn) */
	r8 = 0xC0AB240u; UPD(0x0C0A4BE0u, 1);  /* 0C0A4BDE mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0A4BE2u, 1);  /* 0C0A4BE0 mov.l @(disp,Rm),Rn */
	r4 = R32(r9); UPD(0x0C0A4BE4u, 1);  /* 0C0A4BE2 mov.l @Rm,Rn */
	IF(0x0C0A4BE4u); { u32 t_ = r8; PR = 0x0C0A4BE8u; r6 = R32(r9 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0A4BE8u); }  /* 0C0A4BE4 jsr @Rn */
L_0C0A4BE8: BLKS(0x0C0A4BE8u);
	r7 = 0x0u;  /* 0C0A4BE8 mov #imm,Rn */
	W32(r9, r7); UPD(0x0C0A4BECu, 2);  /* 0C0A4BEA mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0A4BA8u, 3); goto L_0C0A4BA8; }  /* 0C0A4BEC bra */
L_0C0A4BF0: BLKS(0x0C0A4BF0u);
	r0 = 0xB4u; UPD(0x0C0A4BF2u, 1);  /* 0C0A4BF0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A4BF2 add #imm,Rn */
	IF(0x0C0A4BF4u); MACL = r8 * r0;  /* 0C0A4BF4 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C0A4BF8u, 4);  /* 0C0A4BF6 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0A4BF8 mov #imm,Rn */
	IF(0x0C0A4BFAu); r9 = MACL;  /* 0C0A4BFA sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A4BFEu, 3);  /* 0C0A4BFC mov.w @(disp,pc),Rn */
	r9 += r4;  /* 0C0A4BFE add Rm,Rn */
	IF(0x0C0A4C00u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A4C02u, 2);  /* 0C0A4C00 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C0A4C02 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A4C06u, 2);  /* 0C0A4C04 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A4C06 add #imm,Rn */
	IF(0x0C0A4C08u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A4C0Au, 2);  /* 0C0A4C08 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A4C0A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0A4C0Eu, 2);  /* 0C0A4C0C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C0A4C10u, 1);  /* 0C0A4C0E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0A4C12u, 1);  /* 0C0A4C10 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0A4C14u, 1);  /* 0C0A4C12 mov.l @(disp,Rm),Rn */
	IF(0x0C0A4C14u); { u32 t_ = r0; PR = 0x0C0A4C18u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C0A4C18u); }  /* 0C0A4C14 jsr @Rn */
L_0C0A4C18: BLKS(0x0C0A4C18u);
	r4 = r8;  /* 0C0A4C18 mov Rm,Rn */
	r8 = 0xC0A05D0u; UPD(0x0C0A4C1Cu, 2);  /* 0C0A4C1A mov.l @(disp,pc),Rn */
	IF(0x0C0A4C1Cu); { u32 t_ = r8; PR = 0x0C0A4C20u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C0A4C20u); }  /* 0C0A4C1C jsr @Rn */
L_0C0A4C20: BLKS(0x0C0A4C20u);
	IF(0x0C0A4C20u); T = (s32)r0 >= 0;  /* 0C0A4C20 cmp/pz Rn */
	if (!T) { UPD(0x0C0A4BA4u, 4); goto L_0C0A4BA4; }  /* 0C0A4C22 bf */
L_0C0A4C24: BLKS(0x0C0A4C24u);
	r6 = R32(r9 + 0x2Cu); UPD(0x0C0A4C26u, 1);  /* 0C0A4C24 mov.l @(disp,Rm),Rn */
	r4 = 0x2u;  /* 0C0A4C26 mov #imm,Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C0A4B9Eu, 4); goto L_0C0A4B9E; }  /* 0C0A4C28 bra */
}

void f_0C0A4D30(sh3_t *c)
{
	LOCALS;
L_0C0A4D30: BLKS(0x0C0A4D30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4D32u, 1);  /* 0C0A4D30 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4D34u, 1);  /* 0C0A4D32 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4D36u, 1);  /* 0C0A4D34 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0A4D36 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4D3Au, 2);  /* 0C0A4D38 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0A4D3A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4D3Eu, 2);  /* 0C0A4D3C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4D40u, 1);  /* 0C0A4D3E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4D42u, 1);  /* 0C0A4D40 mov.l Rm,@-Rn */
	r2 = 0xC0A17E0u; UPD(0x0C0A4D44u, 1);  /* 0C0A4D42 mov.l @(disp,pc),Rn */
	IF(0x0C0A4D44u); r15 -= 4; W32(r15, PR); UPD(0x0C0A4D46u, 1);  /* 0C0A4D44 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A4D46 add #imm,Rn */
	r5 = 0xC1D98F8u; UPD(0x0C0A4D4Au, 2);  /* 0C0A4D48 mov.l @(disp,pc),Rn */
	IF(0x0C0A4D4Au); { u32 t_ = r2; PR = 0x0C0A4D4Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A17E0, 0x0C0A17E0u, 0x0C0A4D4Eu); }  /* 0C0A4D4A jsr @Rn */
L_0C0A4D4E: BLKS(0x0C0A4D4Eu);
	r4 = 0xB4u; UPD(0x0C0A4D50u, 1);  /* 0C0A4D4E mov.w @(disp,pc),Rn */
	IF(0x0C0A4D50u); MACL = r9 * r4;  /* 0C0A4D50 mul.l Rm,Rn */
	IF(0x0C0A4D52u); r0 = MACL;  /* 0C0A4D52 sts macl,Rn */
	W32(r14, r0); UPD(0x0C0A4D56u, 4);  /* 0C0A4D54 mov.l Rm,@Rn */
	IF(0x0C0A4D56u); r3 = MACL;  /* 0C0A4D56 sts macl,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4D5Au, 2);  /* 0C0A4D58 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0A4D5A add Rm,Rn */
	r11 = R32(r3 + 0x1Cu); UPD(0x0C0A4D5Eu, 2);  /* 0C0A4D5C mov.l @(disp,Rm),Rn */
	r2 = R32(r11); UPD(0x0C0A4D60u, 1);  /* 0C0A4D5E mov.l @Rm,Rn */
	IF(0x0C0A4D60u); T = (s32)r2 >= 0;  /* 0C0A4D60 cmp/pz Rn */
	if (!T) { UPD(0x0C0A4DF0u, 4); goto L_0C0A4DF0; }  /* 0C0A4D62 bf */
L_0C0A4D64: BLKS(0x0C0A4D64u);
	r6 = (r2 >> 16) | (r2 << 16);  /* 0C0A4D64 swap.w Rm,Rn */
	r2 = R32(r11 + 0x4u); UPD(0x0C0A4D68u, 2);  /* 0C0A4D66 mov.l @(disp,Rm),Rn */
	IF(0x0C0A4D68u); T = (s32)r2 >= 0;  /* 0C0A4D68 cmp/pz Rn */
	{ u32 c_ = !T; r13 = (u32)(s32)(s16)r6; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0A4DE0u, 4); goto L_0C0A4DE0; } UPD(0x0C0A4D6Eu, 1); goto L_0C0A4D6E; }  /* 0C0A4D6A bf/s */
L_0C0A4D6E: BLKS(0x0C0A4D6Eu);
	r8 = 0xC050D70u; UPD(0x0C0A4D70u, 1);  /* 0C0A4D6E mov.l @(disp,pc),Rn */
	r0 = (r2 >> 16) | (r2 << 16);  /* 0C0A4D70 swap.w Rm,Rn */
	r10 = 0x98u; UPD(0x0C0A4D74u, 2);  /* 0C0A4D72 mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0A4D74 exts.w Rm,Rn */
	IF(0x0C0A4D76u); { u32 t_ = r8; PR = 0x0C0A4D7Au; r10 += r3; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4D7Au); }  /* 0C0A4D76 jsr @Rn */
L_0C0A4D7A: BLKS(0x0C0A4D7Au);
	r0 += 0x3Cu;  /* 0C0A4D7A add #imm,Rn */
	W8(r10, r0); UPD(0x0C0A4D7Eu, 2);  /* 0C0A4D7C mov.b Rm,@Rn */
	r4 = r13;  /* 0C0A4D7E mov Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C0A4D82u, 2);  /* 0C0A4D80 mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C0A4D82 add Rm,Rn */
	r3 = R32(r14); UPD(0x0C0A4D86u, 2);  /* 0C0A4D84 mov.l @Rm,Rn */
	r9 = r12;  /* 0C0A4D86 mov Rm,Rn */
	r8 += 0x5Cu;  /* 0C0A4D88 add #imm,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C0A4D8Cu, 3);  /* 0C0A4D8A mov.l Rm,@(disp,Rn) */
	r10 = 0x0u;  /* 0C0A4D8C mov #imm,Rn */
	r9 += r9;  /* 0C0A4D8E add Rm,Rn */
	r8 += r3;  /* 0C0A4D90 add Rm,Rn */
	IF(0x0C0A4D92u); ;  /* 0C0A4D92 nop */
	UPD(0x0C0A4D94u, 4);
L_0C0A4D94: BLKS(0x0C0A4D94u);
	r2 = 0xC050D70u; UPD(0x0C0A4D96u, 1);  /* 0C0A4D94 mov.l @(disp,pc),Rn */
	IF(0x0C0A4D96u); { u32 t_ = r2; PR = 0x0C0A4D9Au; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4D9Au); }  /* 0C0A4D96 jsr @Rn */
L_0C0A4D9A: BLKS(0x0C0A4D9Au);
	r3 = R32(r11 + 0x8u); UPD(0x0C0A4D9Cu, 1);  /* 0C0A4D9A mov.l @(disp,Rm),Rn */
	r0 -= r13;  /* 0C0A4D9C sub Rm,Rn */
	r7 = 0xC050D70u; UPD(0x0C0A4DA0u, 2);  /* 0C0A4D9E mov.l @(disp,pc),Rn */
	IF(0x0C0A4DA0u); r0 <<= 16;  /* 0C0A4DA0 shll16 Rn */
	r3 += r0;  /* 0C0A4DA2 add Rm,Rn */
	W32(r8, r3); UPD(0x0C0A4DA6u, 3);  /* 0C0A4DA4 mov.l Rm,@Rn */
	IF(0x0C0A4DA6u); { u32 t_ = r7; PR = 0x0C0A4DAAu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4DAAu); }  /* 0C0A4DA6 jsr @Rn */
L_0C0A4DAA: BLKS(0x0C0A4DAAu);
	r6 = R32(r11 + 0xCu); UPD(0x0C0A4DACu, 1);  /* 0C0A4DAA mov.l @(disp,Rm),Rn */
	r0 -= r12;  /* 0C0A4DAC sub Rm,Rn */
	IF(0x0C0A4DAEu); r0 <<= 16;  /* 0C0A4DAE shll16 Rn */
	r5 = r10;  /* 0C0A4DB0 mov Rm,Rn */
	r6 += r0;  /* 0C0A4DB2 add Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C0A4DB6u, 5);  /* 0C0A4DB4 mov.l Rm,@(disp,Rn) */
	r5 += 0x1u;  /* 0C0A4DB6 add #imm,Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C0A4DB8 exts.w Rm,Rn */
	r2 = 0x2u;  /* 0C0A4DBA mov #imm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C0A4DBC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A4D94u, 7); goto L_0C0A4D94; } goto L_0C0A4DC2; }  /* 0C0A4DBE bf/s */
L_0C0A4DC2: BLKS(0x0C0A4DC2u);
	r14 += 0x8u;  /* 0C0A4DC2 add #imm,Rn */
	r15 = r14;  /* 0C0A4DC4 mov Rm,Rn */
	IF(0x0C0A4DC6u); PR = R32(r15); r15 += 4; UPD(0x0C0A4DC8u, 4);  /* 0C0A4DC6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4DCAu, 1);  /* 0C0A4DC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A4DCCu, 1);  /* 0C0A4DCA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A4DCEu, 1);  /* 0C0A4DCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A4DD0u, 1);  /* 0C0A4DCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A4DD2u, 1);  /* 0C0A4DD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A4DD4u, 1);  /* 0C0A4DD2 mov.l @Rm+,Rn */
	IF(0x0C0A4DD4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A4DD4 rts */
L_0C0A4DE0: BLKS(0x0C0A4DE0u);
	r7 = 0xFFFFu; UPD(0x0C0A4DE2u, 1);  /* 0C0A4DE0 mov.l @(disp,pc),Rn */
	{ r2 += r7; /* slot add Rm,Rn */ UPD(0x0C0A4D6Eu, 3); goto L_0C0A4D6E; }  /* 0C0A4DE2 bra */
L_0C0A4DF0: BLKS(0x0C0A4DF0u);
	r5 = 0xFFFFu; UPD(0x0C0A4DF2u, 1);  /* 0C0A4DF0 mov.l @(disp,pc),Rn */
	{ r2 += r5; /* slot add Rm,Rn */ UPD(0x0C0A4D64u, 3); goto L_0C0A4D64; }  /* 0C0A4DF2 bra */
}

void f_0C0A4E10(sh3_t *c)
{
	LOCALS;
L_0C0A4E10: BLKS(0x0C0A4E10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4E12u, 1);  /* 0C0A4E10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4E14u, 1);  /* 0C0A4E12 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4E16u, 1);  /* 0C0A4E14 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0A4E16 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4E1Au, 2);  /* 0C0A4E18 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0A4E1A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4E1Eu, 2);  /* 0C0A4E1C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4E20u, 1);  /* 0C0A4E1E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4E22u, 1);  /* 0C0A4E20 mov.l Rm,@-Rn */
	r2 = 0xC0A17E0u; UPD(0x0C0A4E24u, 1);  /* 0C0A4E22 mov.l @(disp,pc),Rn */
	IF(0x0C0A4E24u); r15 -= 4; W32(r15, PR); UPD(0x0C0A4E26u, 1);  /* 0C0A4E24 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A4E26 add #imm,Rn */
	r5 = 0xC1D9904u; UPD(0x0C0A4E2Au, 2);  /* 0C0A4E28 mov.l @(disp,pc),Rn */
	IF(0x0C0A4E2Au); { u32 t_ = r2; PR = 0x0C0A4E2Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A17E0, 0x0C0A17E0u, 0x0C0A4E2Eu); }  /* 0C0A4E2A jsr @Rn */
L_0C0A4E2E: BLKS(0x0C0A4E2Eu);
	r4 = 0xB4u; UPD(0x0C0A4E30u, 1);  /* 0C0A4E2E mov.w @(disp,pc),Rn */
	IF(0x0C0A4E30u); MACL = r9 * r4;  /* 0C0A4E30 mul.l Rm,Rn */
	IF(0x0C0A4E32u); r0 = MACL;  /* 0C0A4E32 sts macl,Rn */
	W32(r14, r0); UPD(0x0C0A4E36u, 4);  /* 0C0A4E34 mov.l Rm,@Rn */
	IF(0x0C0A4E36u); r3 = MACL;  /* 0C0A4E36 sts macl,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4E3Au, 2);  /* 0C0A4E38 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0A4E3A add Rm,Rn */
	r11 = R32(r3 + 0x1Cu); UPD(0x0C0A4E3Eu, 2);  /* 0C0A4E3C mov.l @(disp,Rm),Rn */
	r2 = R32(r11); UPD(0x0C0A4E40u, 1);  /* 0C0A4E3E mov.l @Rm,Rn */
	IF(0x0C0A4E40u); T = (s32)r2 >= 0;  /* 0C0A4E40 cmp/pz Rn */
	if (!T) { UPD(0x0C0A4ED0u, 4); goto L_0C0A4ED0; }  /* 0C0A4E42 bf */
L_0C0A4E44: BLKS(0x0C0A4E44u);
	r6 = (r2 >> 16) | (r2 << 16);  /* 0C0A4E44 swap.w Rm,Rn */
	r2 = R32(r11 + 0x4u); UPD(0x0C0A4E48u, 2);  /* 0C0A4E46 mov.l @(disp,Rm),Rn */
	IF(0x0C0A4E48u); T = (s32)r2 >= 0;  /* 0C0A4E48 cmp/pz Rn */
	{ u32 c_ = !T; r13 = (u32)(s32)(s16)r6; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0A4EC0u, 4); goto L_0C0A4EC0; } UPD(0x0C0A4E4Eu, 1); goto L_0C0A4E4E; }  /* 0C0A4E4A bf/s */
L_0C0A4E4E: BLKS(0x0C0A4E4Eu);
	r8 = 0xC050D70u; UPD(0x0C0A4E50u, 1);  /* 0C0A4E4E mov.l @(disp,pc),Rn */
	r0 = (r2 >> 16) | (r2 << 16);  /* 0C0A4E50 swap.w Rm,Rn */
	r10 = 0x98u; UPD(0x0C0A4E54u, 2);  /* 0C0A4E52 mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0A4E54 exts.w Rm,Rn */
	IF(0x0C0A4E56u); { u32 t_ = r8; PR = 0x0C0A4E5Au; r10 += r3; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4E5Au); }  /* 0C0A4E56 jsr @Rn */
L_0C0A4E5A: BLKS(0x0C0A4E5Au);
	r0 += 0x3Cu;  /* 0C0A4E5A add #imm,Rn */
	W8(r10, r0); UPD(0x0C0A4E5Eu, 2);  /* 0C0A4E5C mov.b Rm,@Rn */
	r4 = r13;  /* 0C0A4E5E mov Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C0A4E62u, 2);  /* 0C0A4E60 mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C0A4E62 add Rm,Rn */
	r3 = R32(r14); UPD(0x0C0A4E66u, 2);  /* 0C0A4E64 mov.l @Rm,Rn */
	r9 = r12;  /* 0C0A4E66 mov Rm,Rn */
	r8 += 0x5Cu;  /* 0C0A4E68 add #imm,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C0A4E6Cu, 3);  /* 0C0A4E6A mov.l Rm,@(disp,Rn) */
	r10 = 0x0u;  /* 0C0A4E6C mov #imm,Rn */
	r9 += r9;  /* 0C0A4E6E add Rm,Rn */
	r8 += r3;  /* 0C0A4E70 add Rm,Rn */
	IF(0x0C0A4E72u); ;  /* 0C0A4E72 nop */
	UPD(0x0C0A4E74u, 4);
L_0C0A4E74: BLKS(0x0C0A4E74u);
	r2 = 0xC050D70u; UPD(0x0C0A4E76u, 1);  /* 0C0A4E74 mov.l @(disp,pc),Rn */
	IF(0x0C0A4E76u); { u32 t_ = r2; PR = 0x0C0A4E7Au; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4E7Au); }  /* 0C0A4E76 jsr @Rn */
L_0C0A4E7A: BLKS(0x0C0A4E7Au);
	r3 = R32(r11 + 0x8u); UPD(0x0C0A4E7Cu, 1);  /* 0C0A4E7A mov.l @(disp,Rm),Rn */
	r0 -= r13;  /* 0C0A4E7C sub Rm,Rn */
	r7 = 0xC050D70u; UPD(0x0C0A4E80u, 2);  /* 0C0A4E7E mov.l @(disp,pc),Rn */
	IF(0x0C0A4E80u); r0 <<= 16;  /* 0C0A4E80 shll16 Rn */
	r3 += r0;  /* 0C0A4E82 add Rm,Rn */
	W32(r8, r3); UPD(0x0C0A4E86u, 3);  /* 0C0A4E84 mov.l Rm,@Rn */
	IF(0x0C0A4E86u); { u32 t_ = r7; PR = 0x0C0A4E8Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4E8Au); }  /* 0C0A4E86 jsr @Rn */
L_0C0A4E8A: BLKS(0x0C0A4E8Au);
	r6 = R32(r11 + 0xCu); UPD(0x0C0A4E8Cu, 1);  /* 0C0A4E8A mov.l @(disp,Rm),Rn */
	r0 -= r12;  /* 0C0A4E8C sub Rm,Rn */
	IF(0x0C0A4E8Eu); r0 <<= 16;  /* 0C0A4E8E shll16 Rn */
	r5 = r10;  /* 0C0A4E90 mov Rm,Rn */
	r6 += r0;  /* 0C0A4E92 add Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C0A4E96u, 5);  /* 0C0A4E94 mov.l Rm,@(disp,Rn) */
	r5 += 0x1u;  /* 0C0A4E96 add #imm,Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C0A4E98 exts.w Rm,Rn */
	r2 = 0x2u;  /* 0C0A4E9A mov #imm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C0A4E9C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A4E74u, 7); goto L_0C0A4E74; } goto L_0C0A4EA2; }  /* 0C0A4E9E bf/s */
L_0C0A4EA2: BLKS(0x0C0A4EA2u);
	r14 += 0x8u;  /* 0C0A4EA2 add #imm,Rn */
	r15 = r14;  /* 0C0A4EA4 mov Rm,Rn */
	IF(0x0C0A4EA6u); PR = R32(r15); r15 += 4; UPD(0x0C0A4EA8u, 4);  /* 0C0A4EA6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4EAAu, 1);  /* 0C0A4EA8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A4EACu, 1);  /* 0C0A4EAA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A4EAEu, 1);  /* 0C0A4EAC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A4EB0u, 1);  /* 0C0A4EAE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A4EB2u, 1);  /* 0C0A4EB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A4EB4u, 1);  /* 0C0A4EB2 mov.l @Rm+,Rn */
	IF(0x0C0A4EB4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A4EB4 rts */
L_0C0A4EC0: BLKS(0x0C0A4EC0u);
	r7 = 0xFFFFu; UPD(0x0C0A4EC2u, 1);  /* 0C0A4EC0 mov.l @(disp,pc),Rn */
	{ r2 += r7; /* slot add Rm,Rn */ UPD(0x0C0A4E4Eu, 3); goto L_0C0A4E4E; }  /* 0C0A4EC2 bra */
L_0C0A4ED0: BLKS(0x0C0A4ED0u);
	r5 = 0xFFFFu; UPD(0x0C0A4ED2u, 1);  /* 0C0A4ED0 mov.l @(disp,pc),Rn */
	{ r2 += r5; /* slot add Rm,Rn */ UPD(0x0C0A4E44u, 3); goto L_0C0A4E44; }  /* 0C0A4ED2 bra */
}

void f_0C0A4EF0(sh3_t *c)
{
	LOCALS;
L_0C0A4EF0: BLKS(0x0C0A4EF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4EF2u, 1);  /* 0C0A4EF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4EF4u, 1);  /* 0C0A4EF2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4EF6u, 1);  /* 0C0A4EF4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0A4EF6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4EFAu, 2);  /* 0C0A4EF8 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0A4EFA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4EFEu, 2);  /* 0C0A4EFC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4F00u, 1);  /* 0C0A4EFE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4F02u, 1);  /* 0C0A4F00 mov.l Rm,@-Rn */
	r2 = 0xC0A17E0u; UPD(0x0C0A4F04u, 1);  /* 0C0A4F02 mov.l @(disp,pc),Rn */
	IF(0x0C0A4F04u); r15 -= 4; W32(r15, PR); UPD(0x0C0A4F06u, 1);  /* 0C0A4F04 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A4F06 add #imm,Rn */
	r5 = 0xC1D99CEu; UPD(0x0C0A4F0Au, 2);  /* 0C0A4F08 mov.l @(disp,pc),Rn */
	IF(0x0C0A4F0Au); { u32 t_ = r2; PR = 0x0C0A4F0Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A17E0, 0x0C0A17E0u, 0x0C0A4F0Eu); }  /* 0C0A4F0A jsr @Rn */
L_0C0A4F0E: BLKS(0x0C0A4F0Eu);
	r4 = 0xB4u; UPD(0x0C0A4F10u, 1);  /* 0C0A4F0E mov.w @(disp,pc),Rn */
	IF(0x0C0A4F10u); MACL = r9 * r4;  /* 0C0A4F10 mul.l Rm,Rn */
	IF(0x0C0A4F12u); r0 = MACL;  /* 0C0A4F12 sts macl,Rn */
	W32(r14, r0); UPD(0x0C0A4F16u, 4);  /* 0C0A4F14 mov.l Rm,@Rn */
	IF(0x0C0A4F16u); r3 = MACL;  /* 0C0A4F16 sts macl,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A4F1Au, 2);  /* 0C0A4F18 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0A4F1A add Rm,Rn */
	r11 = R32(r3 + 0x1Cu); UPD(0x0C0A4F1Eu, 2);  /* 0C0A4F1C mov.l @(disp,Rm),Rn */
	r2 = R32(r11); UPD(0x0C0A4F20u, 1);  /* 0C0A4F1E mov.l @Rm,Rn */
	IF(0x0C0A4F20u); T = (s32)r2 >= 0;  /* 0C0A4F20 cmp/pz Rn */
	if (!T) { UPD(0x0C0A4FB0u, 4); goto L_0C0A4FB0; }  /* 0C0A4F22 bf */
L_0C0A4F24: BLKS(0x0C0A4F24u);
	r6 = (r2 >> 16) | (r2 << 16);  /* 0C0A4F24 swap.w Rm,Rn */
	r2 = R32(r11 + 0x4u); UPD(0x0C0A4F28u, 2);  /* 0C0A4F26 mov.l @(disp,Rm),Rn */
	IF(0x0C0A4F28u); T = (s32)r2 >= 0;  /* 0C0A4F28 cmp/pz Rn */
	{ u32 c_ = !T; r13 = (u32)(s32)(s16)r6; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0A4FA0u, 4); goto L_0C0A4FA0; } UPD(0x0C0A4F2Eu, 1); goto L_0C0A4F2E; }  /* 0C0A4F2A bf/s */
L_0C0A4F2E: BLKS(0x0C0A4F2Eu);
	r8 = 0xC050D70u; UPD(0x0C0A4F30u, 1);  /* 0C0A4F2E mov.l @(disp,pc),Rn */
	r0 = (r2 >> 16) | (r2 << 16);  /* 0C0A4F30 swap.w Rm,Rn */
	r10 = 0x98u; UPD(0x0C0A4F34u, 2);  /* 0C0A4F32 mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0A4F34 exts.w Rm,Rn */
	IF(0x0C0A4F36u); { u32 t_ = r8; PR = 0x0C0A4F3Au; r10 += r3; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4F3Au); }  /* 0C0A4F36 jsr @Rn */
L_0C0A4F3A: BLKS(0x0C0A4F3Au);
	r0 += 0x3Cu;  /* 0C0A4F3A add #imm,Rn */
	W8(r10, r0); UPD(0x0C0A4F3Eu, 2);  /* 0C0A4F3C mov.b Rm,@Rn */
	r4 = r13;  /* 0C0A4F3E mov Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C0A4F42u, 2);  /* 0C0A4F40 mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C0A4F42 add Rm,Rn */
	r3 = R32(r14); UPD(0x0C0A4F46u, 2);  /* 0C0A4F44 mov.l @Rm,Rn */
	r9 = r12;  /* 0C0A4F46 mov Rm,Rn */
	r8 += 0x5Cu;  /* 0C0A4F48 add #imm,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C0A4F4Cu, 3);  /* 0C0A4F4A mov.l Rm,@(disp,Rn) */
	r10 = 0x0u;  /* 0C0A4F4C mov #imm,Rn */
	r9 += r9;  /* 0C0A4F4E add Rm,Rn */
	r8 += r3;  /* 0C0A4F50 add Rm,Rn */
	IF(0x0C0A4F52u); ;  /* 0C0A4F52 nop */
	UPD(0x0C0A4F54u, 4);
L_0C0A4F54: BLKS(0x0C0A4F54u);
	r2 = 0xC050D70u; UPD(0x0C0A4F56u, 1);  /* 0C0A4F54 mov.l @(disp,pc),Rn */
	IF(0x0C0A4F56u); { u32 t_ = r2; PR = 0x0C0A4F5Au; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4F5Au); }  /* 0C0A4F56 jsr @Rn */
L_0C0A4F5A: BLKS(0x0C0A4F5Au);
	r3 = R32(r11 + 0x8u); UPD(0x0C0A4F5Cu, 1);  /* 0C0A4F5A mov.l @(disp,Rm),Rn */
	r0 -= r13;  /* 0C0A4F5C sub Rm,Rn */
	r7 = 0xC050D70u; UPD(0x0C0A4F60u, 2);  /* 0C0A4F5E mov.l @(disp,pc),Rn */
	IF(0x0C0A4F60u); r0 <<= 16;  /* 0C0A4F60 shll16 Rn */
	r3 += r0;  /* 0C0A4F62 add Rm,Rn */
	W32(r8, r3); UPD(0x0C0A4F66u, 3);  /* 0C0A4F64 mov.l Rm,@Rn */
	IF(0x0C0A4F66u); { u32 t_ = r7; PR = 0x0C0A4F6Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A4F6Au); }  /* 0C0A4F66 jsr @Rn */
L_0C0A4F6A: BLKS(0x0C0A4F6Au);
	r6 = R32(r11 + 0xCu); UPD(0x0C0A4F6Cu, 1);  /* 0C0A4F6A mov.l @(disp,Rm),Rn */
	r0 -= r12;  /* 0C0A4F6C sub Rm,Rn */
	IF(0x0C0A4F6Eu); r0 <<= 16;  /* 0C0A4F6E shll16 Rn */
	r5 = r10;  /* 0C0A4F70 mov Rm,Rn */
	r6 += r0;  /* 0C0A4F72 add Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C0A4F76u, 5);  /* 0C0A4F74 mov.l Rm,@(disp,Rn) */
	r5 += 0x1u;  /* 0C0A4F76 add #imm,Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C0A4F78 exts.w Rm,Rn */
	r2 = 0x2u;  /* 0C0A4F7A mov #imm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C0A4F7C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A4F54u, 7); goto L_0C0A4F54; } goto L_0C0A4F82; }  /* 0C0A4F7E bf/s */
L_0C0A4F82: BLKS(0x0C0A4F82u);
	r14 += 0x8u;  /* 0C0A4F82 add #imm,Rn */
	r15 = r14;  /* 0C0A4F84 mov Rm,Rn */
	IF(0x0C0A4F86u); PR = R32(r15); r15 += 4; UPD(0x0C0A4F88u, 4);  /* 0C0A4F86 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4F8Au, 1);  /* 0C0A4F88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A4F8Cu, 1);  /* 0C0A4F8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A4F8Eu, 1);  /* 0C0A4F8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A4F90u, 1);  /* 0C0A4F8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A4F92u, 1);  /* 0C0A4F90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A4F94u, 1);  /* 0C0A4F92 mov.l @Rm+,Rn */
	IF(0x0C0A4F94u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A4F94 rts */
L_0C0A4FA0: BLKS(0x0C0A4FA0u);
	r7 = 0xFFFFu; UPD(0x0C0A4FA2u, 1);  /* 0C0A4FA0 mov.l @(disp,pc),Rn */
	{ r2 += r7; /* slot add Rm,Rn */ UPD(0x0C0A4F2Eu, 3); goto L_0C0A4F2E; }  /* 0C0A4FA2 bra */
L_0C0A4FB0: BLKS(0x0C0A4FB0u);
	r5 = 0xFFFFu; UPD(0x0C0A4FB2u, 1);  /* 0C0A4FB0 mov.l @(disp,pc),Rn */
	{ r2 += r5; /* slot add Rm,Rn */ UPD(0x0C0A4F24u, 3); goto L_0C0A4F24; }  /* 0C0A4FB2 bra */
}

void f_0C0A4FD0(sh3_t *c)
{
	LOCALS;
L_0C0A4FD0: BLKS(0x0C0A4FD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4FD2u, 1);  /* 0C0A4FD0 mov.l Rm,@-Rn */
	r4 = 0x1u;  /* 0C0A4FD2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4FD6u, 2);  /* 0C0A4FD4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4FD8u, 1);  /* 0C0A4FD6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4FDAu, 1);  /* 0C0A4FD8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4FDCu, 1);  /* 0C0A4FDA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A4FDEu, 1);  /* 0C0A4FDC mov.l Rm,@-Rn */
	r8 = 0xC0606C0u; UPD(0x0C0A4FE0u, 1);  /* 0C0A4FDE mov.l @(disp,pc),Rn */
	IF(0x0C0A4FE0u); r15 -= 4; W32(r15, PR); UPD(0x0C0A4FE2u, 1);  /* 0C0A4FE0 sts.l pr,@-Rn */
	r0 = 0xC286509u; UPD(0x0C0A4FE4u, 1);  /* 0C0A4FE2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A4FE4 mov Rm,Rn */
	IF(0x0C0A4FE6u); { u32 t_ = r8; PR = 0x0C0A4FEAu; r12 = (u32)(s32)(s8)R8(r0); /* slot mov.b @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0A4FEAu); }  /* 0C0A4FE6 jsr @Rn */
L_0C0A4FEA: BLKS(0x0C0A4FEAu);
	T = (r0 & r0) == 0;  /* 0C0A4FEA tst Rm,Rn */
	if (!T) { UPD(0x0C0A5010u, 4); goto L_0C0A5010; }  /* 0C0A4FEC bf */
L_0C0A4FEE: BLKS(0x0C0A4FEEu);
	r0 = 0x1u;  /* 0C0A4FEE mov #imm,Rn */
	r15 = r14;  /* 0C0A4FF0 mov Rm,Rn */
	IF(0x0C0A4FF2u); PR = R32(r15); r15 += 4; UPD(0x0C0A4FF4u, 3);  /* 0C0A4FF2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A4FF6u, 1);  /* 0C0A4FF4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A4FF8u, 1);  /* 0C0A4FF6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A4FFAu, 1);  /* 0C0A4FF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A4FFCu, 1);  /* 0C0A4FFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A4FFEu, 1);  /* 0C0A4FFC mov.l @Rm+,Rn */
	IF(0x0C0A4FFEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A4FFE rts */
L_0C0A5010: BLKS(0x0C0A5010u);
	r10 = 0xC2755BCu; UPD(0x0C0A5012u, 1);  /* 0C0A5010 mov.l @(disp,pc),Rn */
	r4 = 0xFFFFFFFAu;  /* 0C0A5012 mov #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A5016u, 2);  /* 0C0A5014 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0A5018u, 1);  /* 0C0A5016 mov.w @(disp,pc),Rn */
	IF(0x0C0A5018u); MACL = r11 * r8;  /* 0C0A5018 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A501Cu, 3);  /* 0C0A501A mov.l @(disp,pc),Rn */
	IF(0x0C0A501Cu); r8 = MACL;  /* 0C0A501C sts macl,Rn */
	r6 = 0xC28629Eu; UPD(0x0C0A5020u, 2);  /* 0C0A501E mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C0A5020 add Rm,Rn */
	r9 = 0xC22C874u; UPD(0x0C0A5024u, 2);  /* 0C0A5022 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A5026u, 1);  /* 0C0A5024 mov.w @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C0A5028u, 1);  /* 0C0A5026 mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C0A502Au, 1);  /* 0C0A5028 mov.w @(disp,pc),Rn */
	r2 = r7 & 0xFFFF;  /* 0C0A502A extu.w Rm,Rn */
	IF(0x0C0A502Cu); W16(r0 + r8, r10); UPD(0x0C0A502Eu, 2);  /* 0C0A502C mov.w Rm,@(r0,Rn) */
	r9 = 0x4Cu;  /* 0C0A502E mov #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0A5030 add #imm,Rn */
	IF(0x0C0A5032u); W16(r0 + r8, r10); UPD(0x0C0A5034u, 3);  /* 0C0A5032 mov.w Rm,@(r0,Rn) */
	IF(0x0C0A5034u); ARG0(0x4A4Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = (u32)((s32)r10 >> 31); else r10 = (u32)((s32)r10 >> ((~s_ & 31) + 1)); }  /* 0C0A5034 shad Rm,Rn */
	r3 = 0x1FFu; UPD(0x0C0A5038u, 2);  /* 0C0A5036 mov.w @(disp,pc),Rn */
	r10 += 0x40u;  /* 0C0A5038 add #imm,Rn */
	r10 &= r3;  /* 0C0A503A and Rm,Rn */
	IF(0x0C0A503Cu); ARG0(0x4A4Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = (u32)((s32)r10 >> 31); else r10 = (u32)((s32)r10 >> ((~s_ & 31) + 1)); }  /* 0C0A503C shad Rm,Rn */
	r0 = 0xC0A02D0u; UPD(0x0C0A5040u, 4);  /* 0C0A503E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0A5040 mov Rm,Rn */
	W32(r8 + 0x8u, r10); UPD(0x0C0A5044u, 2);  /* 0C0A5042 mov.l Rm,@(disp,Rn) */
	r5 = 0xC3000114u; UPD(0x0C0A5046u, 1);  /* 0C0A5044 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0A5046 mov #imm,Rn */
	W32(r8, r5); UPD(0x0C0A504Au, 2);  /* 0C0A5048 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0A504Cu, 1);  /* 0C0A504A mov.l Rm,@(disp,Rn) */
	IF(0x0C0A504Cu); { u32 t_ = r0; PR = 0x0C0A5050u; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A5050u); }  /* 0C0A504C jsr @Rn */
L_0C0A5050: BLKS(0x0C0A5050u);
	IF(0x0C0A5050u); MACL = r12 * r9;  /* 0C0A5050 mul.l Rm,Rn */
	r3 = 0xC392D5Eu; UPD(0x0C0A5054u, 3);  /* 0C0A5052 mov.l @(disp,pc),Rn */
	r7 = 0xC26CAE0u; UPD(0x0C0A5056u, 1);  /* 0C0A5054 mov.l @(disp,pc),Rn */
	IF(0x0C0A5056u); r9 = MACL;  /* 0C0A5056 sts macl,Rn */
	r5 = 0xC21F5E2u; UPD(0x0C0A505Au, 2);  /* 0C0A5058 mov.l @(disp,pc),Rn */
	r9 += r7;  /* 0C0A505A add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A505Eu, 2);  /* 0C0A505C mov.w @Rm,Rn */
	r2 = R32(r9 + 0x8u); UPD(0x0C0A5060u, 1);  /* 0C0A505E mov.l @(disp,Rm),Rn */
	IF(0x0C0A5060u); r4 <<= 16;  /* 0C0A5060 shll16 Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C0A5064u, 2);  /* 0C0A5062 mov.w @Rm,Rn */
	r9 += 0x42u;  /* 0C0A5064 add #imm,Rn */
	r0 = 0xC0A1530u; UPD(0x0C0A5068u, 2);  /* 0C0A5066 mov.l @(disp,pc),Rn */
	IF(0x0C0A5068u); r6 <<= 16;  /* 0C0A5068 shll16 Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C0A506Cu, 2);  /* 0C0A506A mov.l Rm,@(disp,Rn) */
	r6 -= r2;  /* 0C0A506C sub Rm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C0A5070u, 2);  /* 0C0A506E mov.l Rm,@(disp,Rn) */
	IF(0x0C0A5070u); { u32 t_ = r0; PR = 0x0C0A5074u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A5074u); }  /* 0C0A5070 jsr @Rn */
L_0C0A5074: BLKS(0x0C0A5074u);
	r0 = 0xB0u; UPD(0x0C0A5076u, 1);  /* 0C0A5074 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C0A5076 mov Rm,Rn */
	IF(0x0C0A5078u); W8(r0 + r8, r12); UPD(0x0C0A507Au, 2);  /* 0C0A5078 mov.b Rm,@(r0,Rn) */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A507Cu, 1);  /* 0C0A507A mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0A507C add #imm,Rn */
	IF(0x0C0A507Eu); W8(r0 + r8, r5); UPD(0x0C0A5080u, 2);  /* 0C0A507E mov.b Rm,@(r0,Rn) */
	r6 = 0xC0A1780u; UPD(0x0C0A5082u, 1);  /* 0C0A5080 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0A5082 add #imm,Rn */
	IF(0x0C0A5084u); W8(r0 + r8, r5); UPD(0x0C0A5086u, 2);  /* 0C0A5084 mov.b Rm,@(r0,Rn) */
	r7 = 0xC27DC20u; UPD(0x0C0A5088u, 1);  /* 0C0A5086 mov.l @(disp,pc),Rn */
	IF(0x0C0A5088u); { u32 t_ = r6; PR = 0x0C0A508Cu; r5 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C0A508Cu); }  /* 0C0A5088 jsr @Rn */
L_0C0A508C: BLKS(0x0C0A508Cu);
	r4 = 0x8Cu; UPD(0x0C0A508Eu, 1);  /* 0C0A508C mov.w @(disp,pc),Rn */
	r3 = 0x94u; UPD(0x0C0A5090u, 1);  /* 0C0A508E mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C0A5090 add Rm,Rn */
	r2 = 0x90u; UPD(0x0C0A5094u, 2);  /* 0C0A5092 mov.w @(disp,pc),Rn */
	r3 += r8;  /* 0C0A5094 add Rm,Rn */
	r8 += r2;  /* 0C0A5096 add Rm,Rn */
	W32(r8, r10); UPD(0x0C0A509Au, 3);  /* 0C0A5098 mov.l Rm,@Rn */
	W32(r3, r10); UPD(0x0C0A509Cu, 1);  /* 0C0A509A mov.l Rm,@Rn */
	{ W32(r4, r10); /* slot mov.l Rm,@Rn */ UPD(0x0C0A4FEEu, 3); goto L_0C0A4FEE; }  /* 0C0A509C bra */
}

void f_0C0A50F0(sh3_t *c)
{
	LOCALS;
L_0C0A50F0: BLKS(0x0C0A50F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A50F2u, 1);  /* 0C0A50F0 mov.l Rm,@-Rn */
	r7 = 0x4Cu;  /* 0C0A50F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A50F6u, 2);  /* 0C0A50F4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A50F8u, 1);  /* 0C0A50F6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A50FAu, 1);  /* 0C0A50F8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A50FCu, 1);  /* 0C0A50FA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A50FEu, 1);  /* 0C0A50FC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5100u, 1);  /* 0C0A50FE mov.l Rm,@-Rn */
	r4 = 0xC392D64u; UPD(0x0C0A5102u, 1);  /* 0C0A5100 mov.l @(disp,pc),Rn */
	IF(0x0C0A5102u); r15 -= 4; W32(r15, PR); UPD(0x0C0A5104u, 1);  /* 0C0A5102 sts.l pr,@-Rn */
	r9 = 0xC286509u; UPD(0x0C0A5106u, 1);  /* 0C0A5104 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A5106 mov Rm,Rn */
	r5 = R32(r4); UPD(0x0C0A510Au, 2);  /* 0C0A5108 mov.l @Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r9); UPD(0x0C0A510Cu, 1);  /* 0C0A510A mov.b @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A510Eu, 1);  /* 0C0A510C mov.w @Rm+,Rn */
	IF(0x0C0A510Eu); MACL = r12 * r7;  /* 0C0A510E mul.l Rm,Rn */
	r8 = 0xC286274u; UPD(0x0C0A5112u, 3);  /* 0C0A5110 mov.l @(disp,pc),Rn */
	r6 = 0xC26CAE0u; UPD(0x0C0A5114u, 1);  /* 0C0A5112 mov.l @(disp,pc),Rn */
	IF(0x0C0A5114u); r11 = MACL;  /* 0C0A5114 sts macl,Rn */
	W16(r8, r1); UPD(0x0C0A5118u, 2);  /* 0C0A5116 mov.w Rm,@Rn */
	r11 += r6;  /* 0C0A5118 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A511Cu, 2);  /* 0C0A511A mov.w @Rm+,Rn */
	r3 = R32(r11 + 0x38u); UPD(0x0C0A511Eu, 1);  /* 0C0A511C mov.l @(disp,Rm),Rn */
	IF(0x0C0A511Eu); r0 <<= 2;  /* 0C0A511E shll2 Rn */
	IF(0x0C0A5120u); r2 = R32(r0 + r3); UPD(0x0C0A5122u, 2);  /* 0C0A5120 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A5124u, 1);  /* 0C0A5122 mov.w @Rm+,Rn */
	r8 = 0xC0606C0u; UPD(0x0C0A5126u, 1);  /* 0C0A5124 mov.l @(disp,pc),Rn */
	W32(r4, r5); UPD(0x0C0A5128u, 1);  /* 0C0A5126 mov.l Rm,@Rn */
	r13 = 0xC27DC20u; UPD(0x0C0A512Au, 1);  /* 0C0A5128 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0A512A mov #imm,Rn */
	r9 = 0xC28629Eu; UPD(0x0C0A512Eu, 2);  /* 0C0A512C mov.l @(disp,pc),Rn */
	W32(r13, r2); UPD(0x0C0A5130u, 1);  /* 0C0A512E mov.l Rm,@Rn */
	IF(0x0C0A5130u); { u32 t_ = r8; PR = 0x0C0A5134u; W16(r9, r0); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0A5134u); }  /* 0C0A5130 jsr @Rn */
L_0C0A5134: BLKS(0x0C0A5134u);
	T = (r0 & r0) == 0;  /* 0C0A5134 tst Rm,Rn */
	if (!T) { UPD(0x0C0A5150u, 4); goto L_0C0A5150; }  /* 0C0A5136 bf */
L_0C0A5138: BLKS(0x0C0A5138u);
	r0 = 0x1u;  /* 0C0A5138 mov #imm,Rn */
	r15 = r14;  /* 0C0A513A mov Rm,Rn */
	IF(0x0C0A513Cu); PR = R32(r15); r15 += 4; UPD(0x0C0A513Eu, 3);  /* 0C0A513C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A5140u, 1);  /* 0C0A513E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A5142u, 1);  /* 0C0A5140 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A5144u, 1);  /* 0C0A5142 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A5146u, 1);  /* 0C0A5144 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A5148u, 1);  /* 0C0A5146 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A514Au, 1);  /* 0C0A5148 mov.l @Rm+,Rn */
	IF(0x0C0A514Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A514A rts */
L_0C0A5150: BLKS(0x0C0A5150u);
	r5 = 0xC2755BCu; UPD(0x0C0A5152u, 1);  /* 0C0A5150 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFAu;  /* 0C0A5152 mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r5); UPD(0x0C0A5156u, 2);  /* 0C0A5154 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0A5158u, 1);  /* 0C0A5156 mov.w @(disp,pc),Rn */
	r3 = 0xC22C874u; UPD(0x0C0A515Au, 1);  /* 0C0A5158 mov.l @(disp,pc),Rn */
	IF(0x0C0A515Au); MACL = r10 * r8;  /* 0C0A515A mul.l Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A515Eu, 3);  /* 0C0A515C mov.w @Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0A5160u, 1);  /* 0C0A515E mov.l @(disp,pc),Rn */
	IF(0x0C0A5160u); r8 = MACL;  /* 0C0A5160 sts macl,Rn */
	r8 += r7;  /* 0C0A5162 add Rm,Rn */
	r0 = r2 & 0xFFFF;  /* 0C0A5164 extu.w Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C0A5168u, 4);  /* 0C0A5166 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0A516Au, 1);  /* 0C0A5168 mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C0A516Cu, 1);  /* 0C0A516A mov.w @(disp,pc),Rn */
	IF(0x0C0A516Cu); W16(r0 + r8, r4); UPD(0x0C0A516Eu, 1);  /* 0C0A516C mov.w Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0A516E add #imm,Rn */
	IF(0x0C0A5170u); W16(r0 + r8, r4); UPD(0x0C0A5172u, 2);  /* 0C0A5170 mov.w Rm,@(r0,Rn) */
	IF(0x0C0A5172u); ARG0(0x441Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0A5172 shad Rm,Rn */
	r9 = 0x1FFu; UPD(0x0C0A5176u, 2);  /* 0C0A5174 mov.w @(disp,pc),Rn */
	r4 += 0x40u;  /* 0C0A5176 add #imm,Rn */
	r4 &= r9;  /* 0C0A5178 and Rm,Rn */
	IF(0x0C0A517Au); ARG0(0x441Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0A517A shad Rm,Rn */
	r5 = 0xC0A02D0u; UPD(0x0C0A517Eu, 4);  /* 0C0A517C mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0A517E mov #imm,Rn */
	r6 = 0xC3000114u; UPD(0x0C0A5182u, 2);  /* 0C0A5180 mov.l @(disp,pc),Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C0A5184u, 1);  /* 0C0A5182 mov.l Rm,@(disp,Rn) */
	W32(r8, r6); UPD(0x0C0A5186u, 1);  /* 0C0A5184 mov.l Rm,@Rn */
	r4 = r10;  /* 0C0A5186 mov Rm,Rn */
	IF(0x0C0A5188u); { u32 t_ = r5; PR = 0x0C0A518Cu; W32(r8 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0A518Cu); }  /* 0C0A5188 jsr @Rn */
L_0C0A518C: BLKS(0x0C0A518Cu);
	r7 = 0xC21F5E2u; UPD(0x0C0A518Eu, 1);  /* 0C0A518C mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0A518E mov Rm,Rn */
	r2 = 0xC392D5Eu; UPD(0x0C0A5192u, 2);  /* 0C0A5190 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C0A5194u, 1);  /* 0C0A5192 mov.w @Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0A5196u, 1);  /* 0C0A5194 mov.w @Rm,Rn */
	IF(0x0C0A5196u); r3 <<= 16;  /* 0C0A5196 shll16 Rn */
	r6 = R32(r11 + 0x8u); UPD(0x0C0A519Au, 2);  /* 0C0A5198 mov.l @(disp,Rm),Rn */
	IF(0x0C0A519Au); r0 <<= 16;  /* 0C0A519A shll16 Rn */
	r5 = 0xC0A1530u; UPD(0x0C0A519Eu, 2);  /* 0C0A519C mov.l @(disp,pc),Rn */
	r3 -= r6;  /* 0C0A519E sub Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C0A51A2u, 2);  /* 0C0A51A0 mov.l Rm,@(disp,Rn) */
	r11 += 0x42u;  /* 0C0A51A2 add #imm,Rn */
	IF(0x0C0A51A4u); { u32 t_ = r5; PR = 0x0C0A51A8u; W32(r8 + 0x24u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0A51A8u); }  /* 0C0A51A4 jsr @Rn */
L_0C0A51A8: BLKS(0x0C0A51A8u);
	r0 = 0xB0u; UPD(0x0C0A51AAu, 1);  /* 0C0A51A8 mov.w @(disp,pc),Rn */
	IF(0x0C0A51AAu); W8(r0 + r8, r12); UPD(0x0C0A51ACu, 1);  /* 0C0A51AA mov.b Rm,@(r0,Rn) */
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C0A51AEu, 1);  /* 0C0A51AC mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0A51AE add #imm,Rn */
	IF(0x0C0A51B0u); W8(r0 + r8, r4); UPD(0x0C0A51B2u, 2);  /* 0C0A51B0 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0A51B2 add #imm,Rn */
	IF(0x0C0A51B4u); W8(r0 + r8, r4); UPD(0x0C0A51B6u, 2);  /* 0C0A51B4 mov.b Rm,@(r0,Rn) */
	r5 = R32(r13); UPD(0x0C0A51B8u, 1);  /* 0C0A51B6 mov.l @Rm,Rn */
	r4 = r10;  /* 0C0A51B8 mov Rm,Rn */
	r13 = 0xC0A1780u; UPD(0x0C0A51BCu, 2);  /* 0C0A51BA mov.l @(disp,pc),Rn */
	r10 = 0x8Cu; UPD(0x0C0A51BEu, 1);  /* 0C0A51BC mov.w @(disp,pc),Rn */
	IF(0x0C0A51BEu); { u32 t_ = r13; PR = 0x0C0A51C2u; r10 += r8; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C0A51C2u); }  /* 0C0A51BE jsr @Rn */
L_0C0A51C2: BLKS(0x0C0A51C2u);
	r11 = 0x94u; UPD(0x0C0A51C4u, 1);  /* 0C0A51C2 mov.w @(disp,pc),Rn */
	r12 = 0x90u; UPD(0x0C0A51C6u, 1);  /* 0C0A51C4 mov.w @(disp,pc),Rn */
	r11 += r8;  /* 0C0A51C6 add Rm,Rn */
	r8 += r12;  /* 0C0A51C8 add Rm,Rn */
	W32(r8, r9); UPD(0x0C0A51CCu, 3);  /* 0C0A51CA mov.l Rm,@Rn */
	W32(r11, r9); UPD(0x0C0A51CEu, 1);  /* 0C0A51CC mov.l Rm,@Rn */
	{ W32(r10, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C0A5138u, 3); goto L_0C0A5138; }  /* 0C0A51CE bra */
}

void f_0C0A5220(sh3_t *c)
{
	LOCALS;
L_0C0A5220: BLKS(0x0C0A5220u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5222u, 1);  /* 0C0A5220 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5224u, 1);  /* 0C0A5222 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A5224 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5228u, 2);  /* 0C0A5226 mov.l Rm,@-Rn */
	r9 = 0xC0AFE40u; UPD(0x0C0A522Au, 1);  /* 0C0A5228 mov.l @(disp,pc),Rn */
	IF(0x0C0A522Au); r15 -= 4; W32(r15, PR); UPD(0x0C0A522Cu, 1);  /* 0C0A522A sts.l pr,@-Rn */
	IF(0x0C0A522Cu); { u32 t_ = r9; PR = 0x0C0A5230u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A5230u); }  /* 0C0A522C jsr @Rn */
L_0C0A5230: BLKS(0x0C0A5230u);
	r0 &= 0x3u;  /* 0C0A5230 and #imm,r0 */
	T = r0 == 0x2u;  /* 0C0A5232 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A5310u, 5); goto L_0C0A5310; } goto L_0C0A5238; }  /* 0C0A5234 bt/s */
L_0C0A5238: BLKS(0x0C0A5238u);
	T = (s32)r0 > (s32)r2;  /* 0C0A5238 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0A52E0u, 5); goto L_0C0A52E0; } goto L_0C0A523E; }  /* 0C0A523A bt/s */
L_0C0A523E: BLKS(0x0C0A523Eu);
	T = r0 == 0x1u;  /* 0C0A523E cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0A52B0u, 5); goto L_0C0A52B0; }  /* 0C0A5240 bt */
L_0C0A5242: BLKS(0x0C0A5242u);
	r7 = 0xB4u; UPD(0x0C0A5244u, 1);  /* 0C0A5242 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A5244 add #imm,Rn */
	IF(0x0C0A5246u); MACL = r8 * r7;  /* 0C0A5246 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A524Au, 4);  /* 0C0A5248 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A524Cu, 1);  /* 0C0A524A mov.w @(disp,pc),Rn */
	IF(0x0C0A524Cu); r3 = MACL;  /* 0C0A524C sts macl,Rn */
	r3 += r9;  /* 0C0A524E add Rm,Rn */
	IF(0x0C0A5250u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A5252u, 3);  /* 0C0A5250 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A5252 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0A5256u, 2);  /* 0C0A5254 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A5256 add #imm,Rn */
	IF(0x0C0A5258u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A525Au, 2);  /* 0C0A5258 mov.b @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C0A525A mov #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0A525C extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A5260u, 3);  /* 0C0A525E mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C0A5262u, 1);  /* 0C0A5260 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A5264u, 1);  /* 0C0A5262 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A5266u, 1);  /* 0C0A5264 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0A5268u, 1);  /* 0C0A5266 mov.l @(disp,Rm),Rn */
L_0C0A5268: BLKS(0x0C0A5268u);
	IF(0x0C0A5268u); { u32 t_ = r0; PR = 0x0C0A526Cu; IF(0x0C0A526Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A526Cu); }  /* 0C0A5268 jsr @Rn */
L_0C0A526C: BLKS(0x0C0A526Cu);
	r6 = 0xB4u; UPD(0x0C0A526Eu, 1);  /* 0C0A526C mov.w @(disp,pc),Rn */
	IF(0x0C0A526Eu); MACL = r8 * r6;  /* 0C0A526E mul.l Rm,Rn */
	IF(0x0C0A5270u); r8 = MACL;  /* 0C0A5270 sts macl,Rn */
	r8 += r9;  /* 0C0A5272 add Rm,Rn */
	r1 = R32(r8); UPD(0x0C0A5276u, 5);  /* 0C0A5274 mov.l @Rm,Rn */
	r9 = 0x4000000u; UPD(0x0C0A5278u, 1);  /* 0C0A5276 mov.l @(disp,pc),Rn */
	T = (r1 & r9) == 0;  /* 0C0A5278 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0A5290u, 4); goto L_0C0A5290; } goto L_0C0A527E; }  /* 0C0A527A bf/s */
L_0C0A527E: BLKS(0x0C0A527Eu);
	r0 = 0x0u;  /* 0C0A527E mov #imm,Rn */
	UPD(0x0C0A5280u, 2);
L_0C0A5280: BLKS(0x0C0A5280u);
	W32(r8, r0); UPD(0x0C0A5282u, 1);  /* 0C0A5280 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A5282 mov Rm,Rn */
	IF(0x0C0A5284u); PR = R32(r15); r15 += 4; UPD(0x0C0A5286u, 2);  /* 0C0A5284 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A5288u, 1);  /* 0C0A5286 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A528Au, 1);  /* 0C0A5288 mov.l @Rm+,Rn */
	IF(0x0C0A528Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A528A rts */
L_0C0A5290: BLKS(0x0C0A5290u);
	r0 = 0xB0u; UPD(0x0C0A5292u, 1);  /* 0C0A5290 mov.w @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0A5292 mov #imm,Rn */
	r9 = 0xC06CE70u; UPD(0x0C0A5296u, 2);  /* 0C0A5294 mov.l @(disp,pc),Rn */
	IF(0x0C0A5296u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A5298u, 1);  /* 0C0A5296 mov.b @(r0,Rm),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A529Au, 1);  /* 0C0A5298 mov.l @(disp,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C0A529A extu.b Rm,Rn */
	IF(0x0C0A529Cu); { u32 t_ = r9; PR = 0x0C0A52A0u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C0A52A0u); }  /* 0C0A529C jsr @Rn */
L_0C0A52A0: BLKS(0x0C0A52A0u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A5280u, 3); goto L_0C0A5280; }  /* 0C0A52A0 bra */
L_0C0A52B0: BLKS(0x0C0A52B0u);
	r0 = 0xB4u; UPD(0x0C0A52B2u, 1);  /* 0C0A52B0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A52B2 add #imm,Rn */
	IF(0x0C0A52B4u); MACL = r8 * r0;  /* 0C0A52B4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A52B8u, 4);  /* 0C0A52B6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A52BAu, 1);  /* 0C0A52B8 mov.w @(disp,pc),Rn */
	IF(0x0C0A52BAu); r3 = MACL;  /* 0C0A52BA sts macl,Rn */
	r3 += r9;  /* 0C0A52BC add Rm,Rn */
	IF(0x0C0A52BEu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A52C0u, 3);  /* 0C0A52BE mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A52C0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0A52C4u, 2);  /* 0C0A52C2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A52C4 add #imm,Rn */
	IF(0x0C0A52C6u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A52C8u, 2);  /* 0C0A52C6 mov.b @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C0A52C8 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A52CA extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0A52CEu, 3);  /* 0C0A52CC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C0A52D0u, 1);  /* 0C0A52CE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A52D2u, 1);  /* 0C0A52D0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A52D4u, 1);  /* 0C0A52D2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A5268u, 3); goto L_0C0A5268; }  /* 0C0A52D4 bra */
L_0C0A52E0: BLKS(0x0C0A52E0u);
	if (!T) { UPD(0x0C0A5242u, 3); goto L_0C0A5242; }  /* 0C0A52E0 bf */
L_0C0A52E2: BLKS(0x0C0A52E2u);
	r15 += 0xFFFFFFF8u;  /* 0C0A52E2 add #imm,Rn */
	r5 = 0xB4u; UPD(0x0C0A52E6u, 2);  /* 0C0A52E4 mov.w @(disp,pc),Rn */
	IF(0x0C0A52E6u); MACL = r8 * r5;  /* 0C0A52E6 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A52EAu, 3);  /* 0C0A52E8 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A52ECu, 1);  /* 0C0A52EA mov.w @(disp,pc),Rn */
	IF(0x0C0A52ECu); r3 = MACL;  /* 0C0A52EC sts macl,Rn */
	r3 += r9;  /* 0C0A52EE add Rm,Rn */
	IF(0x0C0A52F0u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A52F2u, 3);  /* 0C0A52F0 mov.b @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C0A52F2 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A52F4 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A52F8u, 3);  /* 0C0A52F6 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A52F8 add #imm,Rn */
	IF(0x0C0A52FAu); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A52FCu, 2);  /* 0C0A52FA mov.b @(r0,Rm),Rn */
	r0 = r7 & 0xFF;  /* 0C0A52FC extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A5300u, 2);  /* 0C0A52FE mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0A5302u, 1);  /* 0C0A5300 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A5304u, 1);  /* 0C0A5302 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A5306u, 1);  /* 0C0A5304 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A5268u, 3); goto L_0C0A5268; }  /* 0C0A5306 bra */
L_0C0A5310: BLKS(0x0C0A5310u);
	r6 = 0xB4u; UPD(0x0C0A5312u, 1);  /* 0C0A5310 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A5312 add #imm,Rn */
	IF(0x0C0A5314u); MACL = r8 * r6;  /* 0C0A5314 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A5318u, 4);  /* 0C0A5316 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A531Au, 1);  /* 0C0A5318 mov.w @(disp,pc),Rn */
	IF(0x0C0A531Au); r3 = MACL;  /* 0C0A531A sts macl,Rn */
	r3 += r9;  /* 0C0A531C add Rm,Rn */
	IF(0x0C0A531Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A5320u, 3);  /* 0C0A531E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A5320 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A5324u, 2);  /* 0C0A5322 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A5324 add #imm,Rn */
	IF(0x0C0A5326u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A5328u, 2);  /* 0C0A5326 mov.b @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C0A5328 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A532A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A532Eu, 3);  /* 0C0A532C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C0A5330u, 1);  /* 0C0A532E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A5332u, 1);  /* 0C0A5330 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A5334u, 1);  /* 0C0A5332 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A5268u, 3); goto L_0C0A5268; }  /* 0C0A5334 bra */
}

void f_0C0A5360(sh3_t *c)
{
	LOCALS;
L_0C0A5360: BLKS(0x0C0A5360u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5362u, 1);  /* 0C0A5360 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5364u, 1);  /* 0C0A5362 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5366u, 1);  /* 0C0A5364 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0A5366 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A536Au, 2);  /* 0C0A5368 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0A536A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A536Eu, 2);  /* 0C0A536C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5370u, 1);  /* 0C0A536E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5372u, 1);  /* 0C0A5370 mov.l Rm,@-Rn */
	r11 = 0xC058130u; UPD(0x0C0A5374u, 1);  /* 0C0A5372 mov.l @(disp,pc),Rn */
	IF(0x0C0A5374u); r15 -= 4; W32(r15, PR); UPD(0x0C0A5376u, 1);  /* 0C0A5374 sts.l pr,@-Rn */
	r10 = 0xC057430u; UPD(0x0C0A5378u, 1);  /* 0C0A5376 mov.l @(disp,pc),Rn */
	IF(0x0C0A5378u); { u32 t_ = r11; PR = 0x0C0A537Cu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C0A537Cu); }  /* 0C0A5378 jsr @Rn */
L_0C0A537C: BLKS(0x0C0A537Cu);
	r5 = 0x2u;  /* 0C0A537C mov #imm,Rn */
	IF(0x0C0A537Eu); { u32 t_ = r10; PR = 0x0C0A5382u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C0A5382u); }  /* 0C0A537E jsr @Rn */
L_0C0A5382: BLKS(0x0C0A5382u);
	r4 = 0xB4u; UPD(0x0C0A5384u, 1);  /* 0C0A5382 mov.w @(disp,pc),Rn */
	r2 = 0x8u;  /* 0C0A5384 mov #imm,Rn */
	IF(0x0C0A5386u); MACL = r9 * r4;  /* 0C0A5386 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0A538Au, 4);  /* 0C0A5388 mov.l @(disp,pc),Rn */
	IF(0x0C0A538Au); r13 = MACL;  /* 0C0A538A sts macl,Rn */
	r10 = 0x86u; UPD(0x0C0A538Eu, 2);  /* 0C0A538C mov.w @(disp,pc),Rn */
	r13 += r3;  /* 0C0A538E add Rm,Rn */
	r10 += r13;  /* 0C0A5390 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A5394u, 3);  /* 0C0A5392 mov.w @Rm,Rn */
	r4 = r9;  /* 0C0A5394 mov Rm,Rn */
	r0 += 0x8u;  /* 0C0A5396 add #imm,Rn */
	IF(0x0C0A5398u); r0 >>= 2;  /* 0C0A5398 shlr2 Rn */
	IF(0x0C0A539Au); r0 >>= 2;  /* 0C0A539A shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C0A539C and #imm,r0 */
	W32(r13 + 0xCu, r0); UPD(0x0C0A53A0u, 6);  /* 0C0A539E mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A03B0u; UPD(0x0C0A53A2u, 1);  /* 0C0A53A0 mov.l @(disp,pc),Rn */
	r8 = 0xC0A9E40u; UPD(0x0C0A53A4u, 1);  /* 0C0A53A2 mov.l @(disp,pc),Rn */
	IF(0x0C0A53A4u); { u32 t_ = r0; PR = 0x0C0A53A8u; W32(r13 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C0A53A8u); }  /* 0C0A53A4 jsr @Rn */
L_0C0A53A8: BLKS(0x0C0A53A8u);
	r4 = r9;  /* 0C0A53A8 mov Rm,Rn */
	r5 = 0x3Cu;  /* 0C0A53AA mov #imm,Rn */
	IF(0x0C0A53ACu); { u32 t_ = r8; PR = 0x0C0A53B0u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0A53B0u); }  /* 0C0A53AC jsr @Rn */
L_0C0A53B0: BLKS(0x0C0A53B0u);
	T = (r0 & r0) == 0;  /* 0C0A53B0 tst Rm,Rn */
	if (!T) { UPD(0x0C0A53D0u, 4); goto L_0C0A53D0; }  /* 0C0A53B2 bf */
L_0C0A53B4: BLKS(0x0C0A53B4u);
	r15 = r14;  /* 0C0A53B4 mov Rm,Rn */
	IF(0x0C0A53B6u); PR = R32(r15); r15 += 4; UPD(0x0C0A53B8u, 2);  /* 0C0A53B6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A53BAu, 1);  /* 0C0A53B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A53BCu, 1);  /* 0C0A53BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A53BEu, 1);  /* 0C0A53BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A53C0u, 1);  /* 0C0A53BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A53C2u, 1);  /* 0C0A53C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A53C4u, 1);  /* 0C0A53C2 mov.l @Rm+,Rn */
	IF(0x0C0A53C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A53C4 rts */
L_0C0A53D0: BLKS(0x0C0A53D0u);
	r6 = 0xA9u; UPD(0x0C0A53D2u, 1);  /* 0C0A53D0 mov.w @(disp,pc),Rn */
	r0 = r13;  /* 0C0A53D2 mov Rm,Rn */
	IF(0x0C0A53D4u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0A53D6u, 2);  /* 0C0A53D4 mov.b @(r0,Rm),Rn */
	r8 = 0xC0A9BB0u; UPD(0x0C0A53D8u, 1);  /* 0C0A53D6 mov.l @(disp,pc),Rn */
	r6 = r5 & 0xFF;  /* 0C0A53D8 extu.b Rm,Rn */
	r4 = R32(r13 + 0x24u); UPD(0x0C0A53DCu, 2);  /* 0C0A53DA mov.l @(disp,Rm),Rn */
	IF(0x0C0A53DCu); { u32 t_ = r8; PR = 0x0C0A53E0u; r5 = R32(r13 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0A53E0u); }  /* 0C0A53DC jsr @Rn */
L_0C0A53E0: BLKS(0x0C0A53E0u);
	T = (r0 & r0) == 0;  /* 0C0A53E0 tst Rm,Rn */
	if (T) { UPD(0x0C0A53B4u, 4); goto L_0C0A53B4; }  /* 0C0A53E2 bt */
L_0C0A53E4: BLKS(0x0C0A53E4u);
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C0A53E6u, 1);  /* 0C0A53E4 mov.w @Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C0A53E8u, 1);  /* 0C0A53E6 mov.l @(disp,pc),Rn */
	r11 = 0xC058030u; UPD(0x0C0A53EAu, 1);  /* 0C0A53E8 mov.l @(disp,pc),Rn */
	r5 = 0xE0000u; UPD(0x0C0A53ECu, 1);  /* 0C0A53EA mov.l @(disp,pc),Rn */
	IF(0x0C0A53ECu); { u32 t_ = r10; PR = 0x0C0A53F0u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A53F0u); }  /* 0C0A53EC jsr @Rn */
L_0C0A53F0: BLKS(0x0C0A53F0u);
	r8 = r0;  /* 0C0A53F0 mov Rm,Rn */
	r5 = 0x20000u; UPD(0x0C0A53F4u, 2);  /* 0C0A53F2 mov.l @(disp,pc),Rn */
	IF(0x0C0A53F4u); { u32 t_ = r11; PR = 0x0C0A53F8u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A53F8u); }  /* 0C0A53F4 jsr @Rn */
L_0C0A53F8: BLKS(0x0C0A53F8u);
	r3 = 0x66666667u; UPD(0x0C0A53FAu, 1);  /* 0C0A53F8 mov.l @(disp,pc),Rn */
	r8 -= r0;  /* 0C0A53FA sub Rm,Rn */
	IF(0x0C0A53FCu); r8 <<= 2;  /* 0C0A53FC shll2 Rn */
	{ s64 r_ = (s64)(s32)r8 * (s64)(s32)r3; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0A53FE dmuls.l Rm,Rn */
	r10 = R32(r13 + 0x24u); UPD(0x0C0A5402u, 5);  /* 0C0A5400 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0A5402 mov Rm,Rn */
	IF(0x0C0A5404u); r2 = MACH;  /* 0C0A5404 sts mach,Rn */
	IF(0x0C0A5406u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C0A5406 shar Rn */
	IF(0x0C0A5408u); T = r8 >> 31; r8 <<= 1;  /* 0C0A5408 shll Rn */
	{ u32 a_ = r8, t_ = a_ - r8, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r8 = r_; }  /* 0C0A540A subc Rm,Rn */
	r2 -= r8;  /* 0C0A540C sub Rm,Rn */
	r0 = 0x60000u; UPD(0x0C0A5410u, 7);  /* 0C0A540E mov.l @(disp,pc),Rn */
	r10 += r2;  /* 0C0A5410 add Rm,Rn */
	r5 = 0xE0000u; UPD(0x0C0A5414u, 2);  /* 0C0A5412 mov.l @(disp,pc),Rn */
	IF(0x0C0A5414u); { u32 t_ = r11; PR = 0x0C0A5418u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A5418u); }  /* 0C0A5414 jsr @Rn */
L_0C0A5418: BLKS(0x0C0A5418u);
	r11 = R32(r13 + 0x28u); UPD(0x0C0A541Au, 1);  /* 0C0A5418 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0A541A mov Rm,Rn */
	r13 = 0xC058060u; UPD(0x0C0A541Eu, 2);  /* 0C0A541C mov.l @(disp,pc),Rn */
	r5 = 0x20000u; UPD(0x0C0A5420u, 1);  /* 0C0A541E mov.l @(disp,pc),Rn */
	IF(0x0C0A5420u); { u32 t_ = r13; PR = 0x0C0A5424u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A5424u); }  /* 0C0A5420 jsr @Rn */
L_0C0A5424: BLKS(0x0C0A5424u);
	r7 = 0x20000u; UPD(0x0C0A5426u, 1);  /* 0C0A5424 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A5426 add #imm,Rn */
	r12 = 0xC061D80u; UPD(0x0C0A542Au, 2);  /* 0C0A5428 mov.l @(disp,pc),Rn */
	r11 += r0;  /* 0C0A542A add Rm,Rn */
	W32(r15, r7); UPD(0x0C0A542Eu, 2);  /* 0C0A542C mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C0A542E mov #imm,Rn */
	r5 = r10;  /* 0C0A5430 mov Rm,Rn */
	r6 = r11;  /* 0C0A5432 mov Rm,Rn */
	IF(0x0C0A5434u); { u32 t_ = r12; PR = 0x0C0A5438u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C061D80, 0x0C061D80u, 0x0C0A5438u); }  /* 0C0A5434 jsr @Rn */
L_0C0A5438: BLKS(0x0C0A5438u);
	{ IF(0x0C0A543Au); ; /* slot nop */ UPD(0x0C0A53B4u, 3); goto L_0C0A53B4; }  /* 0C0A5438 bra */
}

void f_0C0A5480(sh3_t *c)
{
	LOCALS;
L_0C0A5480: BLKS(0x0C0A5480u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5482u, 1);  /* 0C0A5480 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C0A5482 mov Rm,Rn */
	r15 = r14;  /* 0C0A5484 mov Rm,Rn */
	IF(0x0C0A5486u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A5486 rts */
}

void f_0C0A5490(sh3_t *c)
{
	LOCALS;
L_0C0A5490: BLKS(0x0C0A5490u);
	r2 = 0xB4u; UPD(0x0C0A5492u, 1);  /* 0C0A5490 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A5492 exts.w Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5496u, 2);  /* 0C0A5494 mov.l Rm,@-Rn */
	IF(0x0C0A5496u); MACL = r4 * r2;  /* 0C0A5496 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A549Au, 3);  /* 0C0A5498 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A549Cu, 1);  /* 0C0A549A mov.l @(disp,pc),Rn */
	IF(0x0C0A549Cu); r8 = MACL;  /* 0C0A549C sts macl,Rn */
	IF(0x0C0A549Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0A54A0u, 2);  /* 0C0A549E sts.l pr,@-Rn */
	r8 += r0;  /* 0C0A54A0 add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C0A54A4u, 2);  /* 0C0A54A2 mov.l @(disp,Rm),Rn */
	r2 = 0x20u;  /* 0C0A54A4 mov #imm,Rn */
	T = (s32)r0 >= (s32)r2;  /* 0C0A54A6 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A54B6u, 5); goto L_0C0A54B6; } goto L_0C0A54AC; }  /* 0C0A54A8 bf/s */
L_0C0A54AC: BLKS(0x0C0A54ACu);
	r3 = 0x21u;  /* 0C0A54AC mov #imm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C0A54AE cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x22u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0A5500u, 6); goto L_0C0A5500; } goto L_0C0A54B4; }  /* 0C0A54B0 bf/s */
L_0C0A54B4: BLKS(0x0C0A54B4u);
	if (T) { UPD(0x0C0A54D0u, 4); goto L_0C0A54D0; }  /* 0C0A54B4 bt */
L_0C0A54B6: BLKS(0x0C0A54B6u);
	r5 = 0xC0A1300u; UPD(0x0C0A54B8u, 1);  /* 0C0A54B6 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0A54B8 mov Rm,Rn */
	IF(0x0C0A54BAu); PR = R32(r15); r15 += 4; UPD(0x0C0A54BCu, 2);  /* 0C0A54BA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A54BEu, 1);  /* 0C0A54BC mov.l @Rm+,Rn */
	IF(0x0C0A54BEu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A1300u: TAIL(f_0C0A1300); default: JUMPD(tv_); } }  /* 0C0A54BE jmp @Rn */
L_0C0A54D0: BLKS(0x0C0A54D0u);
	r0 = 0xB0u; UPD(0x0C0A54D2u, 1);  /* 0C0A54D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A54D2 add #imm,Rn */
	IF(0x0C0A54D4u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A54D6u, 2);  /* 0C0A54D4 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A54D6 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0A54DAu, 2);  /* 0C0A54D8 mov.l Rm,@Rn */
	r0 = r8;  /* 0C0A54DA mov Rm,Rn */
	r4 = 0xA9u; UPD(0x0C0A54DEu, 2);  /* 0C0A54DC mov.w @(disp,pc),Rn */
	IF(0x0C0A54DEu); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0A54E0u, 1);  /* 0C0A54DE mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C0A54E0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0A54E4u, 2);  /* 0C0A54E2 mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C0A54E4 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0A54E8u, 2);  /* 0C0A54E6 mov.l @Rm,Rn */
L_0C0A54E8: BLKS(0x0C0A54E8u);
	r0 = 0xC0AB240u; UPD(0x0C0A54EAu, 1);  /* 0C0A54E8 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0A54ECu, 1);  /* 0C0A54EA mov.l @(disp,Rm),Rn */
	IF(0x0C0A54ECu); { u32 t_ = r0; PR = 0x0C0A54F0u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0A54F0u); }  /* 0C0A54EC jsr @Rn */
L_0C0A54F0: BLKS(0x0C0A54F0u);
	r0 = 0x0u;  /* 0C0A54F0 mov #imm,Rn */
	W32(r8, r0); UPD(0x0C0A54F4u, 2);  /* 0C0A54F2 mov.l Rm,@Rn */
	r15 += 0x8u;  /* 0C0A54F4 add #imm,Rn */
	r15 = r14;  /* 0C0A54F6 mov Rm,Rn */
	IF(0x0C0A54F8u); PR = R32(r15); r15 += 4; UPD(0x0C0A54FAu, 3);  /* 0C0A54F8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A54FCu, 1);  /* 0C0A54FA mov.l @Rm+,Rn */
	IF(0x0C0A54FCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A54FC rts */
L_0C0A5500: BLKS(0x0C0A5500u);
	r0 = 0xB0u; UPD(0x0C0A5502u, 1);  /* 0C0A5500 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A5502 add #imm,Rn */
	IF(0x0C0A5504u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A5506u, 2);  /* 0C0A5504 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A5506 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A5508 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0A550Cu, 3);  /* 0C0A550A mov.l Rm,@Rn */
	r7 = 0xA9u; UPD(0x0C0A550Eu, 1);  /* 0C0A550C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0A550E mov Rm,Rn */
	IF(0x0C0A5510u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0A5512u, 2);  /* 0C0A5510 mov.b @(r0,Rm),Rn */
	r4 = r6 & 0xFF;  /* 0C0A5512 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0A5516u, 2);  /* 0C0A5514 mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0A54E8u, 3); goto L_0C0A54E8; }  /* 0C0A5516 bra */
}

void f_0C0A5530(sh3_t *c)
{
	LOCALS;
L_0C0A5530: BLKS(0x0C0A5530u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5532u, 1);  /* 0C0A5530 mov.l Rm,@-Rn */
	r5 = 0x4Cu;  /* 0C0A5532 mov #imm,Rn */
	IF(0x0C0A5534u); r15 -= 4; W32(r15, PR); UPD(0x0C0A5536u, 2);  /* 0C0A5534 sts.l pr,@-Rn */
	r2 = 0xC286509u; UPD(0x0C0A5538u, 1);  /* 0C0A5536 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A5538 mov Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A553Cu, 2);  /* 0C0A553A mov.b @Rm,Rn */
	IF(0x0C0A553Cu); MACL = r0 * r5;  /* 0C0A553C mul.l Rm,Rn */
	r4 = 0xC26CAE0u; UPD(0x0C0A5540u, 3);  /* 0C0A553E mov.l @(disp,pc),Rn */
	IF(0x0C0A5540u); r7 = MACL;  /* 0C0A5540 sts macl,Rn */
	r4 += r7;  /* 0C0A5542 add Rm,Rn */
	r3 = R32(r4 + 0x38u); UPD(0x0C0A5546u, 3);  /* 0C0A5544 mov.l @(disp,Rm),Rn */
	r4 = 0xC392D64u; UPD(0x0C0A5548u, 1);  /* 0C0A5546 mov.l @(disp,pc),Rn */
	r5 = R32(r4); UPD(0x0C0A554Au, 1);  /* 0C0A5548 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A554Cu, 1);  /* 0C0A554A mov.w @Rm+,Rn */
	IF(0x0C0A554Cu); r0 <<= 2;  /* 0C0A554C shll2 Rn */
	IF(0x0C0A554Eu); r6 = R32(r0 + r3); UPD(0x0C0A5550u, 2);  /* 0C0A554E mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A5552u, 1);  /* 0C0A5550 mov.w @Rm+,Rn */
	r0 = 0xC28629Eu; UPD(0x0C0A5554u, 1);  /* 0C0A5552 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0A5556u, 1);  /* 0C0A5554 mov.w Rm,@Rn */
	r2 = 0xC27DC20u; UPD(0x0C0A5558u, 1);  /* 0C0A5556 mov.l @(disp,pc),Rn */
	r0 = 0xC07F630u; UPD(0x0C0A555Au, 1);  /* 0C0A5558 mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0A555Cu, 1);  /* 0C0A555A mov.l Rm,@Rn */
	IF(0x0C0A555Cu); { u32 t_ = r0; PR = 0x0C0A5560u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C07F630, 0x0C07F630u, 0x0C0A5560u); }  /* 0C0A555C jsr @Rn */
L_0C0A5560: BLKS(0x0C0A5560u);
	r15 = r14;  /* 0C0A5560 mov Rm,Rn */
	IF(0x0C0A5562u); PR = R32(r15); r15 += 4; UPD(0x0C0A5564u, 2);  /* 0C0A5562 lds.l @Rn+,pr */
	IF(0x0C0A5564u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A5564 rts */
}

void f_0C0A5740(sh3_t *c)
{
	LOCALS;
L_0C0A5740: BLKS(0x0C0A5740u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A5742u, 1);  /* 0C0A5740 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0A5742 mov #imm,Rn */
	IF(0x0C0A5744u); r15 -= 4; W32(r15, PR); UPD(0x0C0A5746u, 2);  /* 0C0A5744 sts.l pr,@-Rn */
	r4 = 0xC286509u; UPD(0x0C0A5748u, 1);  /* 0C0A5746 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A5748 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0A574Cu, 2);  /* 0C0A574A mov.b @Rm,Rn */
	r4 = 0xC392D64u; UPD(0x0C0A574Eu, 1);  /* 0C0A574C mov.l @(disp,pc),Rn */
	IF(0x0C0A574Eu); MACL = r6 * r2;  /* 0C0A574E mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0A5752u, 3);  /* 0C0A5750 mov.l @Rm,Rn */
	r7 = 0xC286274u; UPD(0x0C0A5754u, 1);  /* 0C0A5752 mov.l @(disp,pc),Rn */
	IF(0x0C0A5754u); r3 = MACL;  /* 0C0A5754 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A5758u, 2);  /* 0C0A5756 mov.w @Rm+,Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0A575Au, 1);  /* 0C0A5758 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0A575Cu, 1);  /* 0C0A575A mov.w Rm,@Rn */
	r0 += r3;  /* 0C0A575C add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0A5760u, 2);  /* 0C0A575E mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A5762u, 1);  /* 0C0A5760 mov.w @Rm+,Rn */
	IF(0x0C0A5762u); r0 <<= 2;  /* 0C0A5762 shll2 Rn */
	IF(0x0C0A5764u); r6 = R32(r0 + r7); UPD(0x0C0A5766u, 2);  /* 0C0A5764 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A5768u, 1);  /* 0C0A5766 mov.w @Rm+,Rn */
	r0 = 0xC28629Eu; UPD(0x0C0A576Au, 1);  /* 0C0A5768 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0A576Cu, 1);  /* 0C0A576A mov.w Rm,@Rn */
	r2 = 0xC27DC20u; UPD(0x0C0A576Eu, 1);  /* 0C0A576C mov.l @(disp,pc),Rn */
	r0 = 0xC082750u; UPD(0x0C0A5770u, 1);  /* 0C0A576E mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0A5772u, 1);  /* 0C0A5770 mov.l Rm,@Rn */
	IF(0x0C0A5772u); { u32 t_ = r0; PR = 0x0C0A5776u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C082750, 0x0C082750u, 0x0C0A5776u); }  /* 0C0A5772 jsr @Rn */
L_0C0A5776: BLKS(0x0C0A5776u);
	r15 = r14;  /* 0C0A5776 mov Rm,Rn */
	IF(0x0C0A5778u); PR = R32(r15); r15 += 4; UPD(0x0C0A577Au, 2);  /* 0C0A5778 lds.l @Rn+,pr */
	IF(0x0C0A577Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A577A rts */
}

void f_0C0A59E0(sh3_t *c)
{
	LOCALS;
L_0C0A59E0: BLKS(0x0C0A59E0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A59E2u, 1);  /* 0C0A59E0 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0A59E2 mov #imm,Rn */
	IF(0x0C0A59E4u); r15 -= 4; W32(r15, PR); UPD(0x0C0A59E6u, 2);  /* 0C0A59E4 sts.l pr,@-Rn */
	r4 = 0xC286509u; UPD(0x0C0A59E8u, 1);  /* 0C0A59E6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A59E8 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0A59ECu, 2);  /* 0C0A59EA mov.b @Rm,Rn */
	r4 = 0xC392D64u; UPD(0x0C0A59EEu, 1);  /* 0C0A59EC mov.l @(disp,pc),Rn */
	IF(0x0C0A59EEu); MACL = r6 * r2;  /* 0C0A59EE mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0A59F2u, 3);  /* 0C0A59F0 mov.l @Rm,Rn */
	r7 = 0xC286274u; UPD(0x0C0A59F4u, 1);  /* 0C0A59F2 mov.l @(disp,pc),Rn */
	IF(0x0C0A59F4u); r3 = MACL;  /* 0C0A59F4 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A59F8u, 2);  /* 0C0A59F6 mov.w @Rm+,Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0A59FAu, 1);  /* 0C0A59F8 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0A59FCu, 1);  /* 0C0A59FA mov.w Rm,@Rn */
	r0 += r3;  /* 0C0A59FC add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0A5A00u, 2);  /* 0C0A59FE mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0A5A02u, 1);  /* 0C0A5A00 mov.w @Rm+,Rn */
	IF(0x0C0A5A02u); r0 <<= 2;  /* 0C0A5A02 shll2 Rn */
	IF(0x0C0A5A04u); r6 = R32(r0 + r7); UPD(0x0C0A5A06u, 2);  /* 0C0A5A04 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0A5A08u, 1);  /* 0C0A5A06 mov.w @Rm+,Rn */
	r0 = 0xC28629Eu; UPD(0x0C0A5A0Au, 1);  /* 0C0A5A08 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0A5A0Cu, 1);  /* 0C0A5A0A mov.w Rm,@Rn */
	r2 = 0xC27DC20u; UPD(0x0C0A5A0Eu, 1);  /* 0C0A5A0C mov.l @(disp,pc),Rn */
	r0 = 0xC083C40u; UPD(0x0C0A5A10u, 1);  /* 0C0A5A0E mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0A5A12u, 1);  /* 0C0A5A10 mov.l Rm,@Rn */
	IF(0x0C0A5A12u); { u32 t_ = r0; PR = 0x0C0A5A16u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C083C40, 0x0C083C40u, 0x0C0A5A16u); }  /* 0C0A5A12 jsr @Rn */
L_0C0A5A16: BLKS(0x0C0A5A16u);
	r15 = r14;  /* 0C0A5A16 mov Rm,Rn */
	IF(0x0C0A5A18u); PR = R32(r15); r15 += 4; UPD(0x0C0A5A1Au, 2);  /* 0C0A5A18 lds.l @Rn+,pr */
	IF(0x0C0A5A1Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A5A1A rts */
}


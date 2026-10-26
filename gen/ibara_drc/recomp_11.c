#include "recomp.h"
#include "recomp_funcs.h"

void f_0C06D290(sh3_t *c)
{
	LOCALS;
L_0C06D290: BLKS(0x0C06D290u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06D292u, 1);  /* 0C06D290 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06D294u, 1);  /* 0C06D292 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06D296u, 1);  /* 0C06D294 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06D298u, 1);  /* 0C06D296 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C06D298 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D29Cu, 2);  /* 0C06D29A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C06D29C exts.w Rm,Rn */
	r8 = 0xC060350u; UPD(0x0C06D2A0u, 2);  /* 0C06D29E mov.l @(disp,pc),Rn */
	IF(0x0C06D2A0u); r15 -= 4; W32(r15, PR); UPD(0x0C06D2A2u, 1);  /* 0C06D2A0 sts.l pr,@-Rn */
	r4 = 0x80000u; UPD(0x0C06D2A4u, 1);  /* 0C06D2A2 mov.l @(disp,pc),Rn */
	IF(0x0C06D2A4u); { u32 t_ = r8; PR = 0x0C06D2A8u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C06D2A8u); }  /* 0C06D2A4 jsr @Rn */
L_0C06D2A8: BLKS(0x0C06D2A8u);
	r2 = 0x280u; UPD(0x0C06D2AAu, 1);  /* 0C06D2A8 mov.w @(disp,pc),Rn */
	r3 = 0x4u;  /* 0C06D2AA mov #imm,Rn */
	IF(0x0C06D2ACu); MACL = r11 * r2;  /* 0C06D2AC mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C06D2B0u, 4);  /* 0C06D2AE mov.l @(disp,pc),Rn */
	IF(0x0C06D2B0u); r9 = MACL;  /* 0C06D2B0 sts macl,Rn */
	r9 += r0;  /* 0C06D2B2 add Rm,Rn */
	r0 = 0x253u; UPD(0x0C06D2B6u, 3);  /* 0C06D2B4 mov.w @(disp,pc),Rn */
	IF(0x0C06D2B6u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06D2B8u, 1);  /* 0C06D2B6 mov.b @(r0,Rm),Rn */
	T = r2 > r3;  /* 0C06D2B8 cmp/hi Rm,Rn */
	{ u32 c_ = T; r4 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06D330u, 4); goto L_0C06D330; } goto L_0C06D2BE; }  /* 0C06D2BA bt/s */
L_0C06D2BE: BLKS(0x0C06D2BEu);
	r8 = 0x54u;  /* 0C06D2BE mov #imm,Rn */
	IF(0x0C06D2C0u); MACL = r10 * r8;  /* 0C06D2C0 mul.l Rm,Rn */
	r3 = r2;  /* 0C06D2C2 mov Rm,Rn */
	r7 = 0xC38C064u; UPD(0x0C06D2C6u, 6);  /* 0C06D2C4 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C06D2C6 add #imm,Rn */
	IF(0x0C06D2C8u); W8(r0 + r9, r3); UPD(0x0C06D2CAu, 2);  /* 0C06D2C8 mov.b Rm,@(r0,Rn) */
	IF(0x0C06D2CAu); r8 = MACL;  /* 0C06D2CA sts macl,Rn */
	r8 += r7;  /* 0C06D2CC add Rm,Rn */
	r6 = R32(r8); UPD(0x0C06D2D0u, 3);  /* 0C06D2CE mov.l @Rm,Rn */
	r4 = 0x2u;  /* 0C06D2D0 mov #imm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C06D2D4u, 2);  /* 0C06D2D2 mov.l @(disp,pc),Rn */
	r5 = 0x8u;  /* 0C06D2D4 mov #imm,Rn */
	r2 = 0xC06ACA0u; UPD(0x0C06D2D8u, 2);  /* 0C06D2D6 mov.l @(disp,pc),Rn */
	r6 &= r1;  /* 0C06D2D8 and Rm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C06D2DCu, 2);  /* 0C06D2DA mov.l Rm,@(disp,Rn) */
	r3 = 0x0u;  /* 0C06D2DC mov #imm,Rn */
	W32(r8, r6); UPD(0x0C06D2E0u, 2);  /* 0C06D2DE mov.l Rm,@Rn */
	r4 = r10;  /* 0C06D2E0 mov Rm,Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C06D2E4u, 2);  /* 0C06D2E2 mov.l Rm,@(disp,Rn) */
	r10 = 0x14u;  /* 0C06D2E4 mov #imm,Rn */
	IF(0x0C06D2E6u); { u32 t_ = r2; PR = 0x0C06D2EAu; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C06ACA0, 0x0C06ACA0u, 0x0C06D2EAu); }  /* 0C06D2E6 jsr @Rn */
L_0C06D2EA: BLKS(0x0C06D2EAu);
	r8 += 0x4Fu;  /* 0C06D2EA add #imm,Rn */
	r0 = 0x3Cu;  /* 0C06D2EC mov #imm,Rn */
	W8(r8, r0); UPD(0x0C06D2F0u, 3);  /* 0C06D2EE mov.b Rm,@Rn */
	r8 += 0xFFFFFFF5u;  /* 0C06D2F0 add #imm,Rn */
	W8(r8, r10); UPD(0x0C06D2F4u, 2);  /* 0C06D2F2 mov.b Rm,@Rn */
	r7 = 0x4FFFFu; UPD(0x0C06D2F6u, 1);  /* 0C06D2F4 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06D2F6 add #imm,Rn */
	r6 = 0x808080u; UPD(0x0C06D2FAu, 2);  /* 0C06D2F8 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r7); UPD(0x0C06D2FCu, 1);  /* 0C06D2FA mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r6); UPD(0x0C06D2FEu, 1);  /* 0C06D2FC mov.l Rm,@(disp,Rn) */
	r5 = 0x180000u; UPD(0x0C06D300u, 1);  /* 0C06D2FE mov.l @(disp,pc),Rn */
	r4 = R32(r9 + 0x10u); UPD(0x0C06D302u, 1);  /* 0C06D300 mov.l @(disp,Rm),Rn */
	r4 += r5;  /* 0C06D302 add Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C06D306u, 2);  /* 0C06D304 mov.l Rm,@(disp,Rn) */
	r5 = 0x62u;  /* 0C06D306 mov #imm,Rn */
	r3 = R32(r9 + 0x14u); UPD(0x0C06D30Au, 2);  /* 0C06D308 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C06D30A mov Rm,Rn */
	r1 = 0x100000u; UPD(0x0C06D30Eu, 2);  /* 0C06D30C mov.l @(disp,pc),Rn */
	r9 = 0xC0AFBA0u; UPD(0x0C06D310u, 1);  /* 0C06D30E mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C06D310 add Rm,Rn */
	IF(0x0C06D312u); { u32 t_ = r9; PR = 0x0C06D316u; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C06D316u); }  /* 0C06D312 jsr @Rn */
L_0C06D316: BLKS(0x0C06D316u);
	r5 = 0x9Bu; UPD(0x0C06D318u, 1);  /* 0C06D316 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C06D318 mov Rm,Rn */
	r1 = 0xC0AFB20u; UPD(0x0C06D31Cu, 2);  /* 0C06D31A mov.l @(disp,pc),Rn */
L_0C06D31C: BLKS(0x0C06D31Cu);
	r15 = r14;  /* 0C06D31C mov Rm,Rn */
	IF(0x0C06D31Eu); PR = R32(r15); r15 += 4; UPD(0x0C06D320u, 2);  /* 0C06D31E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06D322u, 1);  /* 0C06D320 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06D324u, 1);  /* 0C06D322 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06D326u, 1);  /* 0C06D324 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06D328u, 1);  /* 0C06D326 mov.l @Rm+,Rn */
	IF(0x0C06D328u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06C2B0u: TAIL(f_0C06C2B0); case 0x0C0AFB20u: TAIL(f_0C0AFB20); default: JUMPD(tv_); } }  /* 0C06D328 jmp @Rn */
L_0C06D330: BLKS(0x0C06D330u);
	r1 = 0xC06C2B0u; UPD(0x0C06D332u, 1);  /* 0C06D330 mov.l @(disp,pc),Rn */
	{ r5 = r10; /* slot mov Rm,Rn */ UPD(0x0C06D31Cu, 3); goto L_0C06D31C; }  /* 0C06D332 bra */
}

void f_0C06D370(sh3_t *c)
{
	LOCALS;
L_0C06D370: BLKS(0x0C06D370u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06D372u, 1);  /* 0C06D370 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06D374u, 1);  /* 0C06D372 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r5;  /* 0C06D374 exts.w Rm,Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C06D376 exts.w Rm,Rn */
	r4 = 0x54u;  /* 0C06D378 mov #imm,Rn */
	IF(0x0C06D37Au); MACL = r8 * r4;  /* 0C06D37A mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D37Eu, 6);  /* 0C06D37C mov.l Rm,@-Rn */
	r3 = 0xC38C064u; UPD(0x0C06D380u, 1);  /* 0C06D37E mov.l @(disp,pc),Rn */
	IF(0x0C06D380u); r0 = MACL;  /* 0C06D380 sts macl,Rn */
	IF(0x0C06D382u); r15 -= 4; W32(r15, PR); UPD(0x0C06D384u, 2);  /* 0C06D382 sts.l pr,@-Rn */
	r3 += r0;  /* 0C06D384 add Rm,Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C06D388u, 2);  /* 0C06D386 mov.l @(disp,Rm),Rn */
	r2 = 0xC1778FCu; UPD(0x0C06D38Au, 1);  /* 0C06D388 mov.l @(disp,pc),Rn */
	IF(0x0C06D38Au); r0 <<= 2;  /* 0C06D38A shll2 Rn */
	IF(0x0C06D38Cu); r4 = R32(r0 + r2); UPD(0x0C06D38Eu, 2);  /* 0C06D38C mov.l @(r0,Rm),Rn */
	r0 = 0xC060350u; UPD(0x0C06D390u, 1);  /* 0C06D38E mov.l @(disp,pc),Rn */
	IF(0x0C06D390u); { u32 t_ = r0; PR = 0x0C06D394u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C06D394u); }  /* 0C06D390 jsr @Rn */
L_0C06D394: BLKS(0x0C06D394u);
	r0 = 0xC06C2B0u; UPD(0x0C06D396u, 1);  /* 0C06D394 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C06D396 mov Rm,Rn */
	r5 = r8;  /* 0C06D398 mov Rm,Rn */
	r15 = r14;  /* 0C06D39A mov Rm,Rn */
	IF(0x0C06D39Cu); PR = R32(r15); r15 += 4; UPD(0x0C06D39Eu, 4);  /* 0C06D39C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06D3A0u, 1);  /* 0C06D39E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06D3A2u, 1);  /* 0C06D3A0 mov.l @Rm+,Rn */
	IF(0x0C06D3A2u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06C2B0u: TAIL(f_0C06C2B0); default: JUMPD(tv_); } }  /* 0C06D3A2 jmp @Rn */
}

void f_0C06D3C0(sh3_t *c)
{
	LOCALS;
L_0C06D3C0: BLKS(0x0C06D3C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06D3C2u, 1);  /* 0C06D3C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06D3C4u, 1);  /* 0C06D3C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06D3C6u, 1);  /* 0C06D3C4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06D3C8u, 1);  /* 0C06D3C6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C06D3C8 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D3CCu, 2);  /* 0C06D3CA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C06D3CC exts.w Rm,Rn */
	r8 = 0xC060350u; UPD(0x0C06D3D0u, 2);  /* 0C06D3CE mov.l @(disp,pc),Rn */
	IF(0x0C06D3D0u); r15 -= 4; W32(r15, PR); UPD(0x0C06D3D2u, 1);  /* 0C06D3D0 sts.l pr,@-Rn */
	r4 = 0x20000u; UPD(0x0C06D3D4u, 1);  /* 0C06D3D2 mov.l @(disp,pc),Rn */
	IF(0x0C06D3D4u); { u32 t_ = r8; PR = 0x0C06D3D8u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C06D3D8u); }  /* 0C06D3D4 jsr @Rn */
L_0C06D3D8: BLKS(0x0C06D3D8u);
	r0 = 0x280u; UPD(0x0C06D3DAu, 1);  /* 0C06D3D8 mov.w @(disp,pc),Rn */
	IF(0x0C06D3DAu); MACL = r11 * r0;  /* 0C06D3DA mul.l Rm,Rn */
	r3 = 0x254u; UPD(0x0C06D3DEu, 3);  /* 0C06D3DC mov.w @(disp,pc),Rn */
	r0 = 0xC283794u; UPD(0x0C06D3E0u, 1);  /* 0C06D3DE mov.l @(disp,pc),Rn */
	IF(0x0C06D3E0u); r9 = MACL;  /* 0C06D3E0 sts macl,Rn */
	r9 += r0;  /* 0C06D3E2 add Rm,Rn */
	r3 += r9;  /* 0C06D3E4 add Rm,Rn */
	r2 = r3;  /* 0C06D3E6 mov Rm,Rn */
	r2 += 0x2u;  /* 0C06D3E8 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06D3ECu, 6);  /* 0C06D3EA mov.b @Rm,Rn */
	T = r0 == 0x4u;  /* 0C06D3EC cmp/eq #imm,r0 */
	{ u32 c_ = T; r7 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06D470u, 4); goto L_0C06D470; } goto L_0C06D3F2; }  /* 0C06D3EE bt/s */
L_0C06D3F2: BLKS(0x0C06D3F2u);
	r7 += 0x1u;  /* 0C06D3F2 add #imm,Rn */
	r8 = 0x54u;  /* 0C06D3F4 mov #imm,Rn */
	W8(r2, r7); UPD(0x0C06D3F8u, 4);  /* 0C06D3F6 mov.b Rm,@Rn */
	IF(0x0C06D3F8u); MACL = r10 * r8;  /* 0C06D3F8 mul.l Rm,Rn */
	r2 = 0xC38C064u; UPD(0x0C06D3FCu, 3);  /* 0C06D3FA mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C06D3FC mov #imm,Rn */
	IF(0x0C06D3FEu); r8 = MACL;  /* 0C06D3FE sts macl,Rn */
	r8 += r2;  /* 0C06D400 add Rm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C06D404u, 4);  /* 0C06D402 mov.l Rm,@(disp,Rn) */
	r5 = 0x8u;  /* 0C06D404 mov #imm,Rn */
	r6 = R32(r8); UPD(0x0C06D408u, 2);  /* 0C06D406 mov.l @Rm,Rn */
	r4 = r10;  /* 0C06D408 mov Rm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C06D40Cu, 2);  /* 0C06D40A mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C06D40C mov #imm,Rn */
	r10 = 0xC06ACA0u; UPD(0x0C06D410u, 2);  /* 0C06D40E mov.l @(disp,pc),Rn */
	r6 &= r1;  /* 0C06D410 and Rm,Rn */
	W32(r8, r6); UPD(0x0C06D414u, 2);  /* 0C06D412 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C06D416u, 1);  /* 0C06D414 mov.l Rm,@(disp,Rn) */
	IF(0x0C06D416u); { u32 t_ = r10; PR = 0x0C06D41Au; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C06ACA0, 0x0C06ACA0u, 0x0C06D41Au); }  /* 0C06D416 jsr @Rn */
L_0C06D41A: BLKS(0x0C06D41Au);
	r8 += 0x4Fu;  /* 0C06D41A add #imm,Rn */
	r0 = 0x3Cu;  /* 0C06D41C mov #imm,Rn */
	W8(r8, r0); UPD(0x0C06D420u, 3);  /* 0C06D41E mov.b Rm,@Rn */
	r7 = 0x14u;  /* 0C06D420 mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C06D422 add #imm,Rn */
	W8(r8, r7); UPD(0x0C06D426u, 3);  /* 0C06D424 mov.b Rm,@Rn */
	r6 = 0x4FFFFu; UPD(0x0C06D428u, 1);  /* 0C06D426 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06D428 add #imm,Rn */
	r2 = 0x808080u; UPD(0x0C06D42Cu, 2);  /* 0C06D42A mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r6); UPD(0x0C06D42Eu, 1);  /* 0C06D42C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r2); UPD(0x0C06D430u, 1);  /* 0C06D42E mov.l Rm,@(disp,Rn) */
	r5 = 0x180000u; UPD(0x0C06D432u, 1);  /* 0C06D430 mov.l @(disp,pc),Rn */
	r4 = R32(r9 + 0x10u); UPD(0x0C06D434u, 1);  /* 0C06D432 mov.l @(disp,Rm),Rn */
	r4 += r5;  /* 0C06D434 add Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C06D438u, 2);  /* 0C06D436 mov.l Rm,@(disp,Rn) */
	r3 = R32(r9 + 0x14u); UPD(0x0C06D43Au, 1);  /* 0C06D438 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C06D43A mov Rm,Rn */
	r1 = 0x100000u; UPD(0x0C06D43Eu, 2);  /* 0C06D43C mov.l @(disp,pc),Rn */
	r10 = 0xC06A560u; UPD(0x0C06D440u, 1);  /* 0C06D43E mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C06D440 add Rm,Rn */
	r9 = 0xC0AFBA0u; UPD(0x0C06D444u, 2);  /* 0C06D442 mov.l @(disp,pc),Rn */
	IF(0x0C06D444u); { u32 t_ = r10; PR = 0x0C06D448u; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C06A560, 0x0C06A560u, 0x0C06D448u); }  /* 0C06D444 jsr @Rn */
L_0C06D448: BLKS(0x0C06D448u);
	r4 = r11;  /* 0C06D448 mov Rm,Rn */
	IF(0x0C06D44Au); { u32 t_ = r9; PR = 0x0C06D44Eu; r5 = 0x61u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C06D44Eu); }  /* 0C06D44A jsr @Rn */
L_0C06D44E: BLKS(0x0C06D44Eu);
	r5 = 0x9Au; UPD(0x0C06D450u, 1);  /* 0C06D44E mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C06D450 mov Rm,Rn */
	r1 = 0xC0AFB20u; UPD(0x0C06D454u, 2);  /* 0C06D452 mov.l @(disp,pc),Rn */
L_0C06D454: BLKS(0x0C06D454u);
	r15 = r14;  /* 0C06D454 mov Rm,Rn */
	IF(0x0C06D456u); PR = R32(r15); r15 += 4; UPD(0x0C06D458u, 2);  /* 0C06D456 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06D45Au, 1);  /* 0C06D458 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06D45Cu, 1);  /* 0C06D45A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06D45Eu, 1);  /* 0C06D45C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06D460u, 1);  /* 0C06D45E mov.l @Rm+,Rn */
	IF(0x0C06D460u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06C2B0u: TAIL(f_0C06C2B0); case 0x0C0AFB20u: TAIL(f_0C0AFB20); default: JUMPD(tv_); } }  /* 0C06D460 jmp @Rn */
L_0C06D470: BLKS(0x0C06D470u);
	r3 += 0x3u;  /* 0C06D470 add #imm,Rn */
	r9 = 0x28u;  /* 0C06D472 mov #imm,Rn */
	r1 = 0xC06C2B0u; UPD(0x0C06D476u, 3);  /* 0C06D474 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06D476 mov Rm,Rn */
	W8(r3, r9); UPD(0x0C06D47Au, 2);  /* 0C06D478 mov.b Rm,@Rn */
	{ r5 = r10; /* slot mov Rm,Rn */ UPD(0x0C06D454u, 3); goto L_0C06D454; }  /* 0C06D47A bra */
}

void f_0C06D4C0(sh3_t *c)
{
	LOCALS;
L_0C06D4C0: BLKS(0x0C06D4C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06D4C2u, 1);  /* 0C06D4C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06D4C4u, 1);  /* 0C06D4C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06D4C6u, 1);  /* 0C06D4C4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06D4C8u, 1);  /* 0C06D4C6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C06D4C8 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D4CCu, 2);  /* 0C06D4CA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C06D4CC exts.w Rm,Rn */
	r8 = 0xC060350u; UPD(0x0C06D4D0u, 2);  /* 0C06D4CE mov.l @(disp,pc),Rn */
	IF(0x0C06D4D0u); r15 -= 4; W32(r15, PR); UPD(0x0C06D4D2u, 1);  /* 0C06D4D0 sts.l pr,@-Rn */
	r4 = 0x2000u; UPD(0x0C06D4D4u, 1);  /* 0C06D4D2 mov.w @(disp,pc),Rn */
	IF(0x0C06D4D4u); { u32 t_ = r8; PR = 0x0C06D4D8u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C06D4D8u); }  /* 0C06D4D4 jsr @Rn */
L_0C06D4D8: BLKS(0x0C06D4D8u);
	r2 = 0x280u; UPD(0x0C06D4DAu, 1);  /* 0C06D4D8 mov.w @(disp,pc),Rn */
	IF(0x0C06D4DAu); MACL = r10 * r2;  /* 0C06D4DA mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C06D4DEu, 3);  /* 0C06D4DC mov.l @(disp,pc),Rn */
	IF(0x0C06D4DEu); r9 = MACL;  /* 0C06D4DE sts macl,Rn */
	r3 = 0x254u; UPD(0x0C06D4E2u, 2);  /* 0C06D4E0 mov.w @(disp,pc),Rn */
	r9 += r0;  /* 0C06D4E2 add Rm,Rn */
	r3 += r9;  /* 0C06D4E4 add Rm,Rn */
	r7 = r3;  /* 0C06D4E6 mov Rm,Rn */
	r7 += 0x3u;  /* 0C06D4E8 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C06D4ECu, 5);  /* 0C06D4EA mov.b @Rm,Rn */
	r0 = 0x26u;  /* 0C06D4EC mov #imm,Rn */
	T = r2 > r0;  /* 0C06D4EE cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C06D590u, 5); goto L_0C06D590; }  /* 0C06D4F0 bf */
L_0C06D4F2: BLKS(0x0C06D4F2u);
	r2 = r3;  /* 0C06D4F2 mov Rm,Rn */
	r2 += 0x2u;  /* 0C06D4F4 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06D4F8u, 3);  /* 0C06D4F6 mov.b @Rm,Rn */
	T = r0 == 0x4u;  /* 0C06D4F8 cmp/eq #imm,r0 */
	{ u32 c_ = T; r6 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06D580u, 4); goto L_0C06D580; } goto L_0C06D4FE; }  /* 0C06D4FA bt/s */
L_0C06D4FE: BLKS(0x0C06D4FEu);
	r6 += 0x1u;  /* 0C06D4FE add #imm,Rn */
	r8 = 0x54u;  /* 0C06D500 mov #imm,Rn */
	W8(r2, r6); UPD(0x0C06D504u, 4);  /* 0C06D502 mov.b Rm,@Rn */
	IF(0x0C06D504u); MACL = r11 * r8;  /* 0C06D504 mul.l Rm,Rn */
	r5 = 0x0u;  /* 0C06D506 mov #imm,Rn */
	r2 = 0xC38C064u; UPD(0x0C06D50Au, 4);  /* 0C06D508 mov.l @(disp,pc),Rn */
	IF(0x0C06D50Au); r8 = MACL;  /* 0C06D50A sts macl,Rn */
	W8(r7, r5); UPD(0x0C06D50Eu, 2);  /* 0C06D50C mov.b Rm,@Rn */
	r8 += r2;  /* 0C06D50E add Rm,Rn */
	r4 = R32(r8); UPD(0x0C06D512u, 2);  /* 0C06D510 mov.l @Rm,Rn */
	r3 = 0x8u;  /* 0C06D512 mov #imm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C06D516u, 2);  /* 0C06D514 mov.l @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C06D516 mov #imm,Rn */
	r4 &= r1;  /* 0C06D518 and Rm,Rn */
	W32(r8, r4); UPD(0x0C06D51Cu, 3);  /* 0C06D51A mov.l Rm,@Rn */
	r7 = 0x0u;  /* 0C06D51C mov #imm,Rn */
	r4 = r11;  /* 0C06D51E mov Rm,Rn */
	r11 = 0xC06ACA0u; UPD(0x0C06D522u, 3);  /* 0C06D520 mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C06D524u, 1);  /* 0C06D522 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r0); UPD(0x0C06D526u, 1);  /* 0C06D524 mov.l Rm,@(disp,Rn) */
	IF(0x0C06D526u); { u32 t_ = r11; PR = 0x0C06D52Au; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C06ACA0, 0x0C06ACA0u, 0x0C06D52Au); }  /* 0C06D526 jsr @Rn */
L_0C06D52A: BLKS(0x0C06D52Au);
	r6 = 0x3Cu;  /* 0C06D52A mov #imm,Rn */
	r8 += 0x4Fu;  /* 0C06D52C add #imm,Rn */
	W8(r8, r6); UPD(0x0C06D530u, 3);  /* 0C06D52E mov.b Rm,@Rn */
	r5 = 0x14u;  /* 0C06D530 mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C06D532 add #imm,Rn */
	W8(r8, r5); UPD(0x0C06D536u, 3);  /* 0C06D534 mov.b Rm,@Rn */
	r2 = 0x808080u; UPD(0x0C06D538u, 1);  /* 0C06D536 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06D538 add #imm,Rn */
	r4 = 0x4FFFFu; UPD(0x0C06D53Cu, 2);  /* 0C06D53A mov.l @(disp,pc),Rn */
	W32(r8 + 0x3Cu, r2); UPD(0x0C06D53Eu, 1);  /* 0C06D53C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r4); UPD(0x0C06D540u, 1);  /* 0C06D53E mov.l Rm,@(disp,Rn) */
	r3 = 0x180000u; UPD(0x0C06D542u, 1);  /* 0C06D540 mov.l @(disp,pc),Rn */
	r0 = R32(r9 + 0x10u); UPD(0x0C06D544u, 1);  /* 0C06D542 mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C06D544 add Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C06D548u, 2);  /* 0C06D546 mov.l Rm,@(disp,Rn) */
	r1 = 0x100000u; UPD(0x0C06D54Au, 1);  /* 0C06D548 mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x14u); UPD(0x0C06D54Cu, 1);  /* 0C06D54A mov.l @(disp,Rm),Rn */
	r7 += r1;  /* 0C06D54C add Rm,Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C06D550u, 2);  /* 0C06D54E mov.l Rm,@(disp,Rn) */
	r8 = 0xC06A560u; UPD(0x0C06D552u, 1);  /* 0C06D550 mov.l @(disp,pc),Rn */
	r11 = 0xC0AFBA0u; UPD(0x0C06D554u, 1);  /* 0C06D552 mov.l @(disp,pc),Rn */
	IF(0x0C06D554u); { u32 t_ = r8; PR = 0x0C06D558u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06A560, 0x0C06A560u, 0x0C06D558u); }  /* 0C06D554 jsr @Rn */
L_0C06D558: BLKS(0x0C06D558u);
	r4 = r10;  /* 0C06D558 mov Rm,Rn */
	IF(0x0C06D55Au); { u32 t_ = r11; PR = 0x0C06D55Eu; r5 = 0x61u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C06D55Eu); }  /* 0C06D55A jsr @Rn */
L_0C06D55E: BLKS(0x0C06D55Eu);
	r5 = 0x9Au; UPD(0x0C06D560u, 1);  /* 0C06D55E mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C06D560 mov Rm,Rn */
	r1 = 0xC0AFB20u; UPD(0x0C06D564u, 2);  /* 0C06D562 mov.l @(disp,pc),Rn */
L_0C06D564: BLKS(0x0C06D564u);
	r15 = r14;  /* 0C06D564 mov Rm,Rn */
	IF(0x0C06D566u); PR = R32(r15); r15 += 4; UPD(0x0C06D568u, 2);  /* 0C06D566 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06D56Au, 1);  /* 0C06D568 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06D56Cu, 1);  /* 0C06D56A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06D56Eu, 1);  /* 0C06D56C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06D570u, 1);  /* 0C06D56E mov.l @Rm+,Rn */
	IF(0x0C06D570u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06C2B0u: TAIL(f_0C06C2B0); case 0x0C0AFB20u: TAIL(f_0C0AFB20); default: JUMPD(tv_); } }  /* 0C06D570 jmp @Rn */
L_0C06D580: BLKS(0x0C06D580u);
	r9 = 0x28u;  /* 0C06D580 mov #imm,Rn */
	r1 = 0xC06C2B0u; UPD(0x0C06D584u, 2);  /* 0C06D582 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C06D584 mov Rm,Rn */
	W8(r7, r9); UPD(0x0C06D588u, 2);  /* 0C06D586 mov.b Rm,@Rn */
	{ r5 = r11; /* slot mov Rm,Rn */ UPD(0x0C06D564u, 3); goto L_0C06D564; }  /* 0C06D588 bra */
L_0C06D590: BLKS(0x0C06D590u);
	r9 = 0xC0AFBA0u; UPD(0x0C06D592u, 1);  /* 0C06D590 mov.l @(disp,pc),Rn */
	r6 = r2;  /* 0C06D592 mov Rm,Rn */
	r6 += 0x1u;  /* 0C06D594 add #imm,Rn */
	r4 = r10;  /* 0C06D596 mov Rm,Rn */
	W8(r7, r6); UPD(0x0C06D59Au, 4);  /* 0C06D598 mov.b Rm,@Rn */
	IF(0x0C06D59Au); { u32 t_ = r9; PR = 0x0C06D59Eu; r5 = 0x60u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C06D59Eu); }  /* 0C06D59A jsr @Rn */
L_0C06D59E: BLKS(0x0C06D59Eu);
	r5 = 0x54u;  /* 0C06D59E mov #imm,Rn */
	IF(0x0C06D5A0u); MACL = r11 * r5;  /* 0C06D5A0 mul.l Rm,Rn */
	r3 = 0xC38C064u; UPD(0x0C06D5A4u, 4);  /* 0C06D5A2 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C06D5A4 mov #imm,Rn */
	IF(0x0C06D5A6u); r0 = MACL;  /* 0C06D5A6 sts macl,Rn */
	IF(0x0C06D5A8u); W32(r0 + r3, r4); UPD(0x0C06D5AAu, 3);  /* 0C06D5A8 mov.l Rm,@(r0,Rn) */
	r15 = r14;  /* 0C06D5AA mov Rm,Rn */
	IF(0x0C06D5ACu); PR = R32(r15); r15 += 4; UPD(0x0C06D5AEu, 2);  /* 0C06D5AC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06D5B0u, 1);  /* 0C06D5AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06D5B2u, 1);  /* 0C06D5B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06D5B4u, 1);  /* 0C06D5B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06D5B6u, 1);  /* 0C06D5B4 mov.l @Rm+,Rn */
	IF(0x0C06D5B6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06D5B6 rts */
}

void f_0C06D790(sh3_t *c)
{
	LOCALS;
L_0C06D790: BLKS(0x0C06D790u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06D792u, 1);  /* 0C06D790 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06D794u, 1);  /* 0C06D792 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06D796u, 1);  /* 0C06D794 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06D798u, 1);  /* 0C06D796 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06D79Au, 1);  /* 0C06D798 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06D79Cu, 1);  /* 0C06D79A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D79Eu, 1);  /* 0C06D79C mov.l Rm,@-Rn */
	r4 = 0xC2859A0u; UPD(0x0C06D7A0u, 1);  /* 0C06D79E mov.l @(disp,pc),Rn */
	IF(0x0C06D7A0u); r15 -= 4; W32(r15, PR); UPD(0x0C06D7A2u, 1);  /* 0C06D7A0 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C06D7A4u, 1);  /* 0C06D7A2 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C06D7A4 add #imm,Rn */
	r8 = 0xC283CA0u; UPD(0x0C06D7A8u, 2);  /* 0C06D7A6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06D7A8 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C06D7ACu, 2);  /* 0C06D7AA mov.w @Rm+,Rn */
	r7 = R32(r8); UPD(0x0C06D7AEu, 1);  /* 0C06D7AC mov.l @Rm,Rn */
	IF(0x0C06D7AEu); r0 <<= 2;  /* 0C06D7AE shll2 Rn */
	IF(0x0C06D7B0u); r6 = R32(r0 + r7); UPD(0x0C06D7B2u, 2);  /* 0C06D7B0 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r2 = v_; } UPD(0x0C06D7B4u, 1);  /* 0C06D7B2 mov.w @Rm+,Rn */
	r5 = 0xC27DC20u; UPD(0x0C06D7B6u, 1);  /* 0C06D7B4 mov.l @(disp,pc),Rn */
	r9 = 0xC22C874u; UPD(0x0C06D7B8u, 1);  /* 0C06D7B6 mov.l @(disp,pc),Rn */
	r8 = 0xC057A50u; UPD(0x0C06D7BAu, 1);  /* 0C06D7B8 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C06D7BCu, 1);  /* 0C06D7BA mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C06D7BEu, 1);  /* 0C06D7BC mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C06D7C0u, 1);  /* 0C06D7BE mov.w @Rm,Rn */
	r11 = 0xC28629Eu; UPD(0x0C06D7C2u, 1);  /* 0C06D7C0 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C06D7C2 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C06D7C6u, 2);  /* 0C06D7C4 mov.l @(disp,pc),Rn */
	IF(0x0C06D7C6u); { u32 t_ = r8; PR = 0x0C06D7CAu; W16(r11, r2); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C06D7CAu); }  /* 0C06D7C6 jsr @Rn */
L_0C06D7CA: BLKS(0x0C06D7CAu);
	T = (r0 & r0) == 0;  /* 0C06D7CA tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06D7F0u, 4); goto L_0C06D7F0; } UPD(0x0C06D7D0u, 1); goto L_0C06D7D0; }  /* 0C06D7CC bf/s */
L_0C06D7D0: BLKS(0x0C06D7D0u);
	r14 += 0xCu;  /* 0C06D7D0 add #imm,Rn */
	UPD(0x0C06D7D2u, 1);
L_0C06D7D2: BLKS(0x0C06D7D2u);
	r15 = r14;  /* 0C06D7D2 mov Rm,Rn */
	IF(0x0C06D7D4u); PR = R32(r15); r15 += 4; UPD(0x0C06D7D6u, 2);  /* 0C06D7D4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06D7D8u, 1);  /* 0C06D7D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06D7DAu, 1);  /* 0C06D7D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06D7DCu, 1);  /* 0C06D7DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06D7DEu, 1);  /* 0C06D7DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06D7E0u, 1);  /* 0C06D7DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06D7E2u, 1);  /* 0C06D7E0 mov.l @Rm+,Rn */
	IF(0x0C06D7E2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06D7E2 rts */
L_0C06D7F0: BLKS(0x0C06D7F0u);
	r10 = 0xC0606C0u; UPD(0x0C06D7F2u, 1);  /* 0C06D7F0 mov.l @(disp,pc),Rn */
	IF(0x0C06D7F2u); { u32 t_ = r10; PR = 0x0C06D7F6u; r4 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C06D7F6u); }  /* 0C06D7F2 jsr @Rn */
L_0C06D7F6: BLKS(0x0C06D7F6u);
	T = (r0 & r0) == 0;  /* 0C06D7F6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06D7D0u, 4); goto L_0C06D7D0; } goto L_0C06D7FC; }  /* 0C06D7F8 bt/s */
L_0C06D7FC: BLKS(0x0C06D7FCu);
	r12 = 0xC2755BCu; UPD(0x0C06D7FEu, 2);  /* 0C06D7FC mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C06D800u, 1);  /* 0C06D7FE mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C06D802u, 1);  /* 0C06D800 mov.w @Rm+,Rn */
	IF(0x0C06D802u); MACL = r10 * r8;  /* 0C06D802 mul.l Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C06D806u, 3);  /* 0C06D804 mov.w @Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C06D808u, 1);  /* 0C06D806 mov.l @(disp,pc),Rn */
	IF(0x0C06D808u); r8 = MACL;  /* 0C06D808 sts macl,Rn */
	r8 += r4;  /* 0C06D80A add Rm,Rn */
	r0 = r3 & 0xFFFF;  /* 0C06D80C extu.w Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C06D810u, 4);  /* 0C06D80E mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C06D810 mov Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r11); UPD(0x0C06D814u, 2);  /* 0C06D812 mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C06D816u, 1);  /* 0C06D814 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C06D816 mov #imm,Rn */
	r7 = 0xC0A02D0u; UPD(0x0C06D81Au, 2);  /* 0C06D818 mov.l @(disp,pc),Rn */
	IF(0x0C06D81Au); W16(r0 + r8, r13); UPD(0x0C06D81Cu, 1);  /* 0C06D81A mov.w Rm,@(r0,Rn) */
	r6 = 0xD3000104u; UPD(0x0C06D81Eu, 1);  /* 0C06D81C mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C06D81E add #imm,Rn */
	W32(r8, r6); UPD(0x0C06D822u, 2);  /* 0C06D820 mov.l Rm,@Rn */
	IF(0x0C06D822u); W16(r0 + r8, r13); UPD(0x0C06D824u, 1);  /* 0C06D822 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0xCu, r11); UPD(0x0C06D826u, 1);  /* 0C06D824 mov.l Rm,@(disp,Rn) */
	IF(0x0C06D826u); { u32 t_ = r7; PR = 0x0C06D82Au; W32(r8 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C06D82Au); }  /* 0C06D826 jsr @Rn */
L_0C06D82A: BLKS(0x0C06D82Au);
	r9 = 0xC061380u; UPD(0x0C06D82Cu, 1);  /* 0C06D82A mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C06D82C mov Rm,Rn */
	r5 = 0x1600000u; UPD(0x0C06D830u, 2);  /* 0C06D82E mov.l @(disp,pc),Rn */
	IF(0x0C06D830u); { u32 t_ = r9; PR = 0x0C06D834u; W32(r8 + 0x24u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C061380, 0x0C061380u, 0x0C06D834u); }  /* 0C06D830 jsr @Rn */
L_0C06D834: BLKS(0x0C06D834u);
	r2 = 0xC0A1530u; UPD(0x0C06D836u, 1);  /* 0C06D834 mov.l @(disp,pc),Rn */
	r9 = 0x8Cu; UPD(0x0C06D838u, 1);  /* 0C06D836 mov.w @(disp,pc),Rn */
	IF(0x0C06D838u); { u32 t_ = r2; PR = 0x0C06D83Cu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C06D83Cu); }  /* 0C06D838 jsr @Rn */
L_0C06D83C: BLKS(0x0C06D83Cu);
	r0 = 0xADu; UPD(0x0C06D83Eu, 1);  /* 0C06D83C mov.w @(disp,pc),Rn */
	r4 = 0x13u;  /* 0C06D83E mov #imm,Rn */
	r3 = 0xA8u; UPD(0x0C06D842u, 2);  /* 0C06D840 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C06D842 add Rm,Rn */
	IF(0x0C06D844u); W8(r0 + r8, r4); UPD(0x0C06D846u, 2);  /* 0C06D844 mov.b Rm,@(r0,Rn) */
	r3 += r8;  /* 0C06D846 add Rm,Rn */
	r3 += 0x1u;  /* 0C06D848 add #imm,Rn */
	r0 = 0xC0A1780u; UPD(0x0C06D84Cu, 3);  /* 0C06D84A mov.l @(disp,pc),Rn */
	W8(r3, r4); UPD(0x0C06D84Eu, 1);  /* 0C06D84C mov.b Rm,@Rn */
	r6 = 0xC27DC20u; UPD(0x0C06D850u, 1);  /* 0C06D84E mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C06D850 mov Rm,Rn */
	r5 = R32(r6); UPD(0x0C06D854u, 2);  /* 0C06D852 mov.l @Rm,Rn */
	IF(0x0C06D854u); { u32 t_ = r0; PR = 0x0C06D858u; W32(r14 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C06D858u); }  /* 0C06D854 jsr @Rn */
L_0C06D858: BLKS(0x0C06D858u);
	r13 = 0x94u; UPD(0x0C06D85Au, 1);  /* 0C06D858 mov.w @(disp,pc),Rn */
	r0 = 0x90u; UPD(0x0C06D85Cu, 1);  /* 0C06D85A mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C06D85C add Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C06D860u, 2);  /* 0C06D85E mov.l @(disp,Rm),Rn */
	W32(r13, r11); UPD(0x0C06D862u, 1);  /* 0C06D860 mov.l Rm,@Rn */
	IF(0x0C06D862u); W32(r0 + r8, r11); UPD(0x0C06D864u, 1);  /* 0C06D862 mov.l Rm,@(r0,Rn) */
	r13 = r8;  /* 0C06D864 mov Rm,Rn */
	W32(r9, r11); UPD(0x0C06D868u, 2);  /* 0C06D866 mov.l Rm,@Rn */
	W32(r8 + 0x30u, r11); UPD(0x0C06D86Au, 1);  /* 0C06D868 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r11); UPD(0x0C06D86Cu, 1);  /* 0C06D86A mov.l Rm,@(disp,Rn) */
	W32(r14, r11); UPD(0x0C06D86Eu, 1);  /* 0C06D86C mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C06D870u, 1);  /* 0C06D86E mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C06D870 mov #imm,Rn */
	IF(0x0C06D872u); ;  /* 0C06D872 nop */
	UPD(0x0C06D874u, 2);
L_0C06D874: BLKS(0x0C06D874u);
	r9 = 0xC1794A8u; UPD(0x0C06D876u, 1);  /* 0C06D874 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C06D878u, 1);  /* 0C06D876 mov.w @Rm+,Rn */
	r9 += r11;  /* 0C06D878 add Rm,Rn */
	r8 = 0xB4u; UPD(0x0C06D87Cu, 2);  /* 0C06D87A mov.w @(disp,pc),Rn */
	r9 += 0x4u;  /* 0C06D87C add #imm,Rn */
	IF(0x0C06D87Eu); MACL = r10 * r8;  /* 0C06D87E mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C06D882u, 4);  /* 0C06D880 mov.w @Rm,Rn */
	r11 += 0x14u;  /* 0C06D882 add #imm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C06D886u, 2);  /* 0C06D884 mov.l @(disp,pc),Rn */
	IF(0x0C06D886u); r8 = MACL;  /* 0C06D886 sts macl,Rn */
	r0 = 0xC2755BCu; UPD(0x0C06D88Au, 2);  /* 0C06D888 mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C06D88A add Rm,Rn */
	IF(0x0C06D88Cu); r7 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C06D88Eu, 2);  /* 0C06D88C mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C06D88E add Rm,Rn */
	r8 += 0x7Cu;  /* 0C06D890 add #imm,Rn */
	W16(r8, r7); UPD(0x0C06D894u, 3);  /* 0C06D892 mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C06D894 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C06D898u, 2);  /* 0C06D896 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C06D898 add #imm,Rn */
	W16(r8, r5); UPD(0x0C06D89Cu, 2);  /* 0C06D89A mov.w Rm,@Rn */
	r7 = 0x0u;  /* 0C06D89C mov #imm,Rn */
	r3 = 0xC22C874u; UPD(0x0C06D8A0u, 2);  /* 0C06D89E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C06D8A0 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C06D8A4u, 2);  /* 0C06D8A2 mov.w @Rm,Rn */
	r2 = R32(r9); UPD(0x0C06D8A6u, 1);  /* 0C06D8A4 mov.l @Rm,Rn */
	r6 = r4 & 0xFFFF;  /* 0C06D8A6 extu.w Rm,Rn */
	W32(r8, r2); UPD(0x0C06D8AAu, 2);  /* 0C06D8A8 mov.l Rm,@Rn */
	r4 = r10;  /* 0C06D8AA mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C06D8AEu, 2);  /* 0C06D8AC mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A02D0u; UPD(0x0C06D8B0u, 1);  /* 0C06D8AE mov.l @(disp,pc),Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C06D8B2u, 1);  /* 0C06D8B0 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C06D8B4u, 1);  /* 0C06D8B2 mov.l Rm,@(disp,Rn) */
	IF(0x0C06D8B4u); { u32 t_ = r5; PR = 0x0C06D8B8u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C06D8B8u); }  /* 0C06D8B4 jsr @Rn */
L_0C06D8B8: BLKS(0x0C06D8B8u);
	r2 = 0xC28629Eu; UPD(0x0C06D8BAu, 1);  /* 0C06D8B8 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06D8BA mov Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C06D8BEu, 2);  /* 0C06D8BC mov.w @Rm,Rn */
	IF(0x0C06D8BEu); r3 >>= 2;  /* 0C06D8BE shlr2 Rn */
	r4 = 0x86u; UPD(0x0C06D8C2u, 2);  /* 0C06D8C0 mov.w @(disp,pc),Rn */
	IF(0x0C06D8C2u); r3 >>= 2;  /* 0C06D8C2 shlr2 Rn */
	IF(0x0C06D8C4u); r3 >>= 2;  /* 0C06D8C4 shlr2 Rn */
	IF(0x0C06D8C6u); W16(r0 + r4, r3); UPD(0x0C06D8C8u, 3);  /* 0C06D8C6 mov.w Rm,@(r0,Rn) */
	r6 = R32(r13 + 0x24u); UPD(0x0C06D8CAu, 1);  /* 0C06D8C8 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C06D8CA mov Rm,Rn */
	r0 = R32(r13 + 0x28u); UPD(0x0C06D8CEu, 2);  /* 0C06D8CC mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C06D8D0u, 1);  /* 0C06D8CE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C06D8D2u, 1);  /* 0C06D8D0 mov.l Rm,@(disp,Rn) */
	r7 = R32(r9 + 0xCu); UPD(0x0C06D8D4u, 1);  /* 0C06D8D2 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C06D8D6u, 1);  /* 0C06D8D4 mov.l Rm,@(disp,Rn) */
	r5 = R32(r9 + 0x10u); UPD(0x0C06D8D8u, 1);  /* 0C06D8D6 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A1530u; UPD(0x0C06D8DAu, 1);  /* 0C06D8D8 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r5); UPD(0x0C06D8DCu, 1);  /* 0C06D8DA mov.l Rm,@(disp,Rn) */
	r2 = 0xFFFA0000u; UPD(0x0C06D8DEu, 1);  /* 0C06D8DC mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C06D8DE add #imm,Rn */
	IF(0x0C06D8E0u); { u32 t_ = r10; PR = 0x0C06D8E4u; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C06D8E4u); }  /* 0C06D8E0 jsr @Rn */
L_0C06D8E4: BLKS(0x0C06D8E4u);
	r0 = 0xB0u; UPD(0x0C06D8E6u, 1);  /* 0C06D8E4 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C06D8E6 add #imm,Rn */
	IF(0x0C06D8E8u); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C06D8EAu, 2);  /* 0C06D8E8 mov.b @(r0,Rm),Rn */
	r10 = 0x12u;  /* 0C06D8EA mov #imm,Rn */
	IF(0x0C06D8ECu); W8(r0 + r8, r3); UPD(0x0C06D8EEu, 2);  /* 0C06D8EC mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C06D8F0u, 1);  /* 0C06D8EE mov.w @(disp,pc),Rn */
	r7 = 0xACu; UPD(0x0C06D8F2u, 1);  /* 0C06D8F0 mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C06D8F2 add Rm,Rn */
	r8 += r7;  /* 0C06D8F4 add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C06D8F8u, 3);  /* 0C06D8F6 mov.l @(disp,Rm),Rn */
	r7 += r13;  /* 0C06D8F8 add Rm,Rn */
	r7 += 0x1u;  /* 0C06D8FA add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C06D8FEu, 3);  /* 0C06D8FC mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C06D8FE add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C06D902u, 2);  /* 0C06D900 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C06D902 add #imm,Rn */
	W8(r0, r6); UPD(0x0C06D906u, 2);  /* 0C06D904 mov.b Rm,@Rn */
	W8(r8, r5); UPD(0x0C06D908u, 1);  /* 0C06D906 mov.b Rm,@Rn */
	r9 = R32(r14); UPD(0x0C06D90Au, 1);  /* 0C06D908 mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C06D90A add #imm,Rn */
	r2 = (u32)(s32)(s16)r9;  /* 0C06D90C exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C06D910u, 3);  /* 0C06D90E mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C06D912u, 1);  /* 0C06D910 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r10;  /* 0C06D912 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06D874u, 4); goto L_0C06D874; } goto L_0C06D918; }  /* 0C06D914 bf/s */
L_0C06D918: BLKS(0x0C06D918u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C06D7D2u, 4); goto L_0C06D7D2; }  /* 0C06D918 bra */
}

void f_0C06D980(sh3_t *c)
{
	LOCALS;
L_0C06D980: BLKS(0x0C06D980u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06D982u, 1);  /* 0C06D980 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06D984u, 1);  /* 0C06D982 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06D986u, 1);  /* 0C06D984 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06D988u, 1);  /* 0C06D986 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C06D988 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06D98Cu, 2);  /* 0C06D98A mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C06D98Eu, 1);  /* 0C06D98C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06D990u, 1);  /* 0C06D98E mov.l Rm,@-Rn */
	IF(0x0C06D990u); MACL = r10 * r3;  /* 0C06D990 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D994u, 3);  /* 0C06D992 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C06D996u, 1);  /* 0C06D994 mov.l @(disp,pc),Rn */
	IF(0x0C06D996u); r2 = MACL;  /* 0C06D996 sts macl,Rn */
	IF(0x0C06D998u); r15 -= 4; W32(r15, PR); UPD(0x0C06D99Au, 2);  /* 0C06D998 sts.l pr,@-Rn */
	r0 += r2;  /* 0C06D99A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C06D99Eu, 2);  /* 0C06D99C mov.l @(disp,Rm),Rn */
	r0 = 0xBu;  /* 0C06D99E mov #imm,Rn */
	T = r2 > r0;  /* 0C06D9A0 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06D9AAu, 5); goto L_0C06D9AA; } goto L_0C06D9A6; }  /* 0C06D9A2 bf/s */
L_0C06D9A6: BLKS(0x0C06D9A6u);
	{ IF(0x0C06D9A8u); ; /* slot nop */ UPD(0x0C06DA94u, 4); goto L_0C06DA94; }  /* 0C06D9A6 bra */
L_0C06D9AA: BLKS(0x0C06D9AAu);
	r0 = 0xC06D9BCu;  /* 0C06D9AA mova @(disp,pc),r0 */
	r2 += r2;  /* 0C06D9AC add Rm,Rn */
	IF(0x0C06D9AEu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06D9B0u, 3);  /* 0C06D9AE mov.w @(r0,Rm),Rn */
	IF(0x0C06D9B0u); { u32 tv_ = (r4 + 0x0C06D9B4u); u32 t_ = PHYS(tv_); IF(0x0C06D9B2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C06D9E0u: goto L_0C06D9E0; case 0x0C06DA30u: goto L_0C06DA30; case 0x0C06DAE0u: goto L_0C06DAE0; case 0x0C06DB10u: goto L_0C06DB10; case 0x0C06DB40u: goto L_0C06DB40; case 0x0C06DBA0u: goto L_0C06DBA0; case 0x0C06DC20u: goto L_0C06DC20; case 0x0C06DC50u: goto L_0C06DC50; default: JUMPD(tv_); } }  /* 0C06D9B0 braf Rn */
L_0C06D9E0: BLKS(0x0C06D9E0u);
	r8 = 0xB4u; UPD(0x0C06D9E2u, 1);  /* 0C06D9E0 mov.w @(disp,pc),Rn */
	IF(0x0C06D9E2u); MACL = r10 * r8;  /* 0C06D9E2 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C06D9E6u, 3);  /* 0C06D9E4 mov.l @(disp,pc),Rn */
	IF(0x0C06D9E6u); r2 = MACL;  /* 0C06D9E6 sts macl,Rn */
	r2 += r7;  /* 0C06D9E8 add Rm,Rn */
	r6 = 0xA5u; UPD(0x0C06D9ECu, 3);  /* 0C06D9EA mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C06D9EC mov Rm,Rn */
	IF(0x0C06D9EEu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C06D9F0u, 2);  /* 0C06D9EE mov.b @(r0,Rm),Rn */
	r0 = r5;  /* 0C06D9F0 mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C06D9F2 cmp/eq #imm,r0 */
	{ u32 c_ = T; r11 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06DA10u, 5); goto L_0C06DA10; } UPD(0x0C06D9F8u, 1); goto L_0C06D9F8; }  /* 0C06D9F4 bt/s */
L_0C06D9F8: BLKS(0x0C06D9F8u);
	r0 = 0xC0A14C0u; UPD(0x0C06D9FAu, 1);  /* 0C06D9F8 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C06D9FA mov Rm,Rn */
	r15 = r14;  /* 0C06D9FC mov Rm,Rn */
	IF(0x0C06D9FEu); PR = R32(r15); r15 += 4; UPD(0x0C06DA00u, 3);  /* 0C06D9FE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06DA02u, 1);  /* 0C06DA00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06DA04u, 1);  /* 0C06DA02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06DA06u, 1);  /* 0C06DA04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06DA08u, 1);  /* 0C06DA06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06DA0Au, 1);  /* 0C06DA08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06DA0Cu, 1);  /* 0C06DA0A mov.l @Rm+,Rn */
	IF(0x0C06DA0Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A14C0u: TAIL(f_0C0A14C0); default: JUMPD(tv_); } }  /* 0C06DA0C jmp @Rn */
L_0C06DA10: BLKS(0x0C06DA10u);
	r5 = R32(r2 + 0x24u); UPD(0x0C06DA12u, 1);  /* 0C06DA10 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06DA12 add #imm,Rn */
	r12 = 0x20000u; UPD(0x0C06DA16u, 2);  /* 0C06DA14 mov.l @(disp,pc),Rn */
	r9 = 0xC06CC20u; UPD(0x0C06DA18u, 1);  /* 0C06DA16 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C06DA18 mov #imm,Rn */
	W32(r15, r12); UPD(0x0C06DA1Cu, 2);  /* 0C06DA1A mov.l Rm,@Rn */
	r7 = 0x14u;  /* 0C06DA1C mov #imm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C06DA20u, 2);  /* 0C06DA1E mov.l Rm,@(disp,Rn) */
	r13 = 0x200000u; UPD(0x0C06DA22u, 1);  /* 0C06DA20 mov.l @(disp,pc),Rn */
	r6 = R32(r2 + 0x28u); UPD(0x0C06DA24u, 1);  /* 0C06DA22 mov.l @(disp,Rm),Rn */
	IF(0x0C06DA24u); { u32 t_ = r9; PR = 0x0C06DA28u; r5 += r13; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C06DA28u); }  /* 0C06DA24 jsr @Rn */
L_0C06DA28: BLKS(0x0C06DA28u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C06D9F8u, 3); goto L_0C06D9F8; }  /* 0C06DA28 bra */
L_0C06DA30: BLKS(0x0C06DA30u);
	r11 = 0xB4u; UPD(0x0C06DA32u, 1);  /* 0C06DA30 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06DA32 add #imm,Rn */
	IF(0x0C06DA34u); MACL = r10 * r11;  /* 0C06DA34 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C06DA38u, 4);  /* 0C06DA36 mov.l @(disp,pc),Rn */
	IF(0x0C06DA38u); r8 = MACL;  /* 0C06DA38 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C06DA3Cu, 2);  /* 0C06DA3A mov.w @(disp,pc),Rn */
	r8 += r13;  /* 0C06DA3C add Rm,Rn */
	IF(0x0C06DA3Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DA40u, 2);  /* 0C06DA3E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C06DA40 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C06DA44u, 2);  /* 0C06DA42 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06DA44 add #imm,Rn */
	IF(0x0C06DA46u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DA48u, 2);  /* 0C06DA46 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C06DA48 mov #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C06DA4A extu.b Rm,Rn */
	r9 = 0xC0AB240u; UPD(0x0C06DA4Eu, 3);  /* 0C06DA4C mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C06DA50u, 1);  /* 0C06DA4E mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C06DA52u, 1);  /* 0C06DA50 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C06DA54u, 1);  /* 0C06DA52 mov.l @(disp,Rm),Rn */
	IF(0x0C06DA54u); { u32 t_ = r9; PR = 0x0C06DA58u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C06DA58u); }  /* 0C06DA54 jsr @Rn */
L_0C06DA58: BLKS(0x0C06DA58u);
	r9 = 0xC0A0540u; UPD(0x0C06DA5Au, 1);  /* 0C06DA58 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C06DA5A add #imm,Rn */
	IF(0x0C06DA5Cu); { u32 t_ = r9; PR = 0x0C06DA60u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06DA60u); }  /* 0C06DA5C jsr @Rn */
L_0C06DA60: BLKS(0x0C06DA60u);
	IF(0x0C06DA60u); T = (s32)r0 >= 0;  /* 0C06DA60 cmp/pz Rn */
	if (!T) { UPD(0x0C06DAD0u, 4); goto L_0C06DAD0; }  /* 0C06DA62 bf */
L_0C06DA64: BLKS(0x0C06DA64u);
	r7 = r8;  /* 0C06DA64 mov Rm,Rn */
	r9 = 0xA4u; UPD(0x0C06DA68u, 2);  /* 0C06DA66 mov.w @(disp,pc),Rn */
	r7 += r9;  /* 0C06DA68 add Rm,Rn */
	r7 += 0x1u;  /* 0C06DA6A add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C06DA6Eu, 3);  /* 0C06DA6C mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C06DA6E tst Rm,Rn */
	if (!T) { UPD(0x0C06DAB0u, 4); goto L_0C06DAB0; }  /* 0C06DA70 bf */
L_0C06DA72: BLKS(0x0C06DA72u);
	IF(0x0C06DA72u); MACL = r12 * r11;  /* 0C06DA72 mul.l Rm,Rn */
	r4 = r10;  /* 0C06DA74 mov Rm,Rn */
	r10 = 0x4000u; UPD(0x0C06DA78u, 4);  /* 0C06DA76 mov.w @(disp,pc),Rn */
	IF(0x0C06DA78u); r3 = MACL;  /* 0C06DA78 sts macl,Rn */
	r3 += r13;  /* 0C06DA7A add Rm,Rn */
	r3 += r9;  /* 0C06DA7C add Rm,Rn */
	r3 += 0x1u;  /* 0C06DA7E add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r3); UPD(0x0C06DA82u, 5);  /* 0C06DA80 mov.b @Rm,Rn */
	r12 = 0x1u;  /* 0C06DA82 mov #imm,Rn */
	r11 = 0xC0A0380u; UPD(0x0C06DA86u, 2);  /* 0C06DA84 mov.l @(disp,pc),Rn */
	r13 += 0x1u;  /* 0C06DA86 add #imm,Rn */
	W8(r3, r13); UPD(0x0C06DA8Au, 2);  /* 0C06DA88 mov.b Rm,@Rn */
	IF(0x0C06DA8Au); { u32 t_ = r11; PR = 0x0C06DA8Eu; W32(r8 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C06DA8Eu); }  /* 0C06DA8A jsr @Rn */
L_0C06DA8E: BLKS(0x0C06DA8Eu);
	r1 = R32(r8); UPD(0x0C06DA90u, 1);  /* 0C06DA8E mov.l @Rm,Rn */
	r1 |= r10;  /* 0C06DA90 or Rm,Rn */
	UPD(0x0C06DA92u, 1);
L_0C06DA92: BLKS(0x0C06DA92u);
	W32(r8, r1); UPD(0x0C06DA94u, 1);  /* 0C06DA92 mov.l Rm,@Rn */
L_0C06DA94: BLKS(0x0C06DA94u);
	r15 = r14;  /* 0C06DA94 mov Rm,Rn */
	IF(0x0C06DA96u); PR = R32(r15); r15 += 4; UPD(0x0C06DA98u, 2);  /* 0C06DA96 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06DA9Au, 1);  /* 0C06DA98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06DA9Cu, 1);  /* 0C06DA9A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06DA9Eu, 1);  /* 0C06DA9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06DAA0u, 1);  /* 0C06DA9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06DAA2u, 1);  /* 0C06DAA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06DAA4u, 1);  /* 0C06DAA2 mov.l @Rm+,Rn */
	IF(0x0C06DAA4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06DAA4 rts */
L_0C06DAB0: BLKS(0x0C06DAB0u);
	r15 += 0xFFFFFFF8u;  /* 0C06DAB0 add #imm,Rn */
	r0 = 0x0u;  /* 0C06DAB2 mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C06DAB6u, 3);  /* 0C06DAB4 mov.l Rm,@(disp,Rn) */
	r4 = 0x3u;  /* 0C06DAB6 mov #imm,Rn */
	r2 = 0x20000u; UPD(0x0C06DABAu, 2);  /* 0C06DAB8 mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C06DABA mov #imm,Rn */
	r0 = 0xC06CC20u; UPD(0x0C06DABEu, 2);  /* 0C06DABC mov.l @(disp,pc),Rn */
	W32(r15, r2); UPD(0x0C06DAC0u, 1);  /* 0C06DABE mov.l Rm,@Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C06DAC2u, 1);  /* 0C06DAC0 mov.l @(disp,Rm),Rn */
	IF(0x0C06DAC2u); { u32 t_ = r0; PR = 0x0C06DAC6u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C06DAC6u); }  /* 0C06DAC2 jsr @Rn */
L_0C06DAC6: BLKS(0x0C06DAC6u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C06DA72u, 3); goto L_0C06DA72; }  /* 0C06DAC6 bra */
L_0C06DAD0: BLKS(0x0C06DAD0u);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C06DA92u, 3); goto L_0C06DA92; }  /* 0C06DAD0 bra */
L_0C06DAE0: BLKS(0x0C06DAE0u);
	r8 = 0xB4u; UPD(0x0C06DAE2u, 1);  /* 0C06DAE0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06DAE2 add #imm,Rn */
	IF(0x0C06DAE4u); MACL = r10 * r8;  /* 0C06DAE4 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C06DAE8u, 4);  /* 0C06DAE6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C06DAEAu, 1);  /* 0C06DAE8 mov.w @(disp,pc),Rn */
	IF(0x0C06DAEAu); r8 = MACL;  /* 0C06DAEA sts macl,Rn */
	r8 += r7;  /* 0C06DAEC add Rm,Rn */
	IF(0x0C06DAEEu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DAF0u, 3);  /* 0C06DAEE mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C06DAF0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C06DAF4u, 2);  /* 0C06DAF2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06DAF4 add #imm,Rn */
	IF(0x0C06DAF6u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DAF8u, 2);  /* 0C06DAF6 mov.b @(r0,Rm),Rn */
	r5 = 0x1u;  /* 0C06DAF8 mov #imm,Rn */
	r9 = r4 & 0xFF;  /* 0C06DAFA extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C06DAFEu, 3);  /* 0C06DAFC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C06DB00u, 1);  /* 0C06DAFE mov.l @Rm,Rn */
L_0C06DB00: BLKS(0x0C06DB00u);
	r6 = R32(r8 + 0x24u); UPD(0x0C06DB02u, 1);  /* 0C06DB00 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C06DB04u, 1);  /* 0C06DB02 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AC800u; UPD(0x0C06DB06u, 1);  /* 0C06DB04 mov.l @(disp,pc),Rn */
L_0C06DB06: BLKS(0x0C06DB06u);
	IF(0x0C06DB06u); { u32 t_ = r0; PR = 0x0C06DB0Au; r13 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C06DB0Au); }  /* 0C06DB06 jsr @Rn */
L_0C06DB0A: BLKS(0x0C06DB0Au);
	W32(r8, r13); UPD(0x0C06DB0Cu, 1);  /* 0C06DB0A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C06DA94u, 3); goto L_0C06DA94; }  /* 0C06DB0C bra */
L_0C06DB10: BLKS(0x0C06DB10u);
	r3 = 0xB4u; UPD(0x0C06DB12u, 1);  /* 0C06DB10 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06DB12 add #imm,Rn */
	IF(0x0C06DB14u); MACL = r10 * r3;  /* 0C06DB14 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C06DB18u, 4);  /* 0C06DB16 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C06DB18 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C06DB1Cu, 2);  /* 0C06DB1A mov.w @(disp,pc),Rn */
	IF(0x0C06DB1Cu); r8 = MACL;  /* 0C06DB1C sts macl,Rn */
	r8 += r12;  /* 0C06DB1E add Rm,Rn */
	IF(0x0C06DB20u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DB22u, 3);  /* 0C06DB20 mov.b @(r0,Rm),Rn */
	r10 = r11 & 0xFF;  /* 0C06DB22 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C06DB26u, 2);  /* 0C06DB24 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06DB26 add #imm,Rn */
	IF(0x0C06DB28u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DB2Au, 2);  /* 0C06DB28 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C06DB2A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C06DB2Eu, 2);  /* 0C06DB2C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C06DB00u, 3); goto L_0C06DB00; }  /* 0C06DB2E bra */
L_0C06DB40: BLKS(0x0C06DB40u);
	r7 = 0xB4u; UPD(0x0C06DB42u, 1);  /* 0C06DB40 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06DB42 add #imm,Rn */
	IF(0x0C06DB44u); MACL = r10 * r7;  /* 0C06DB44 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C06DB48u, 4);  /* 0C06DB46 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C06DB4Au, 1);  /* 0C06DB48 mov.w @(disp,pc),Rn */
	IF(0x0C06DB4Au); r8 = MACL;  /* 0C06DB4A sts macl,Rn */
	r8 += r6;  /* 0C06DB4C add Rm,Rn */
	IF(0x0C06DB4Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DB50u, 3);  /* 0C06DB4E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C06DB50 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C06DB54u, 2);  /* 0C06DB52 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06DB54 add #imm,Rn */
	IF(0x0C06DB56u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DB58u, 2);  /* 0C06DB56 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C06DB58 mov #imm,Rn */
	r13 = r9 & 0xFF;  /* 0C06DB5A extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C06DB5Eu, 3);  /* 0C06DB5C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C06DB60u, 1);  /* 0C06DB5E mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C06DB62u, 1);  /* 0C06DB60 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C06DB64u, 1);  /* 0C06DB62 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C06DB06u, 3); goto L_0C06DB06; }  /* 0C06DB64 bra */
L_0C06DBA0: BLKS(0x0C06DBA0u);
	r8 = 0xB4u; UPD(0x0C06DBA2u, 1);  /* 0C06DBA0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06DBA2 add #imm,Rn */
	IF(0x0C06DBA4u); MACL = r10 * r8;  /* 0C06DBA4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C06DBA8u, 4);  /* 0C06DBA6 mov.l @(disp,pc),Rn */
	IF(0x0C06DBA8u); r11 = MACL;  /* 0C06DBA8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C06DBACu, 2);  /* 0C06DBAA mov.w @(disp,pc),Rn */
	r11 += r9;  /* 0C06DBAC add Rm,Rn */
	IF(0x0C06DBAEu); r5 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06DBB0u, 2);  /* 0C06DBAE mov.b @(r0,Rm),Rn */
	r13 = r5 & 0xFF;  /* 0C06DBB0 extu.b Rm,Rn */
	W32(r15, r13); UPD(0x0C06DBB4u, 2);  /* 0C06DBB2 mov.l Rm,@Rn */
	r5 = 0x4u;  /* 0C06DBB4 mov #imm,Rn */
	r13 = 0xA9u; UPD(0x0C06DBB8u, 2);  /* 0C06DBB6 mov.w @(disp,pc),Rn */
	r13 += r11;  /* 0C06DBB8 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r13); UPD(0x0C06DBBCu, 2);  /* 0C06DBBA mov.b @Rm,Rn */
	r3 = r4 & 0xFF;  /* 0C06DBBC extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C06DBC0u, 2);  /* 0C06DBBE mov.l Rm,@(disp,Rn) */
	r12 = 0xC0AB240u; UPD(0x0C06DBC2u, 1);  /* 0C06DBC0 mov.l @(disp,pc),Rn */
	r4 = R32(r11); UPD(0x0C06DBC4u, 1);  /* 0C06DBC2 mov.l @Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C06DBC6u, 1);  /* 0C06DBC4 mov.l @(disp,Rm),Rn */
	IF(0x0C06DBC6u); { u32 t_ = r12; PR = 0x0C06DBCAu; r7 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C06DBCAu); }  /* 0C06DBC6 jsr @Rn */
L_0C06DBCA: BLKS(0x0C06DBCAu);
	r4 = r10;  /* 0C06DBCA mov Rm,Rn */
	r10 = 0xC0A0540u; UPD(0x0C06DBCEu, 2);  /* 0C06DBCC mov.l @(disp,pc),Rn */
	IF(0x0C06DBCEu); { u32 t_ = r10; PR = 0x0C06DBD2u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06DBD2u); }  /* 0C06DBCE jsr @Rn */
L_0C06DBD2: BLKS(0x0C06DBD2u);
	r1 = r0;  /* 0C06DBD2 mov Rm,Rn */
	IF(0x0C06DBD4u); MACL = r1 * r8;  /* 0C06DBD4 mul.l Rm,Rn */
	r12 = ~r0;  /* 0C06DBD6 not Rm,Rn */
	IF(0x0C06DBD8u); T = r12 >> 31; r12 = (r12 << 1) | T;  /* 0C06DBD8 rotl Rn */
	IF(0x0C06DBDAu); r10 = MACL;  /* 0C06DBDA sts macl,Rn */
	r10 += r9;  /* 0C06DBDC add Rm,Rn */
	r2 = R32(r10 + 0xCu); UPD(0x0C06DBE0u, 8);  /* 0C06DBDE mov.l @(disp,Rm),Rn */
	IF(0x0C06DBE0u); r0 = T;  /* 0C06DBE0 movt Rn */
	T = (r2 & r2) == 0;  /* 0C06DBE2 tst Rm,Rn */
	IF(0x0C06DBE4u); r8 = T;  /* 0C06DBE4 movt Rn */
	r0 &= r8;  /* 0C06DBE6 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06DBE8 tst Rm,Rn */
	if (!T) { UPD(0x0C06DC00u, 8); goto L_0C06DC00; }  /* 0C06DBEA bf */
L_0C06DBEC: BLKS(0x0C06DBECu);
	r7 = 0x0u;  /* 0C06DBEC mov #imm,Rn */
	{ W32(r11, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C06DA94u, 4); goto L_0C06DA94; }  /* 0C06DBEE bra */
L_0C06DC00: BLKS(0x0C06DC00u);
	r8 = (u32)(s32)(s8)R8(r13); UPD(0x0C06DC02u, 1);  /* 0C06DC00 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06DC02 add #imm,Rn */
	r0 = 0x20000u; UPD(0x0C06DC06u, 2);  /* 0C06DC04 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C06DC06 mov #imm,Rn */
	r9 = 0xC06CC20u; UPD(0x0C06DC0Au, 2);  /* 0C06DC08 mov.l @(disp,pc),Rn */
	r7 = r8 & 0xFF;  /* 0C06DC0A extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C06DC0Eu, 2);  /* 0C06DC0C mov.l Rm,@Rn */
	r4 = 0xDu;  /* 0C06DC0E mov #imm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C06DC12u, 2);  /* 0C06DC10 mov.l Rm,@(disp,Rn) */
	r5 = R32(r11 + 0x24u); UPD(0x0C06DC14u, 1);  /* 0C06DC12 mov.l @(disp,Rm),Rn */
	IF(0x0C06DC14u); { u32 t_ = r9; PR = 0x0C06DC18u; r6 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C06DC18u); }  /* 0C06DC14 jsr @Rn */
L_0C06DC18: BLKS(0x0C06DC18u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C06DBECu, 3); goto L_0C06DBEC; }  /* 0C06DC18 bra */
L_0C06DC20: BLKS(0x0C06DC20u);
	r4 = 0xB4u; UPD(0x0C06DC22u, 1);  /* 0C06DC20 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06DC22 add #imm,Rn */
	IF(0x0C06DC24u); MACL = r10 * r4;  /* 0C06DC24 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C06DC28u, 4);  /* 0C06DC26 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C06DC28 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C06DC2Cu, 2);  /* 0C06DC2A mov.w @(disp,pc),Rn */
	IF(0x0C06DC2Cu); r8 = MACL;  /* 0C06DC2C sts macl,Rn */
	r8 += r3;  /* 0C06DC2E add Rm,Rn */
	IF(0x0C06DC30u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DC32u, 3);  /* 0C06DC30 mov.b @(r0,Rm),Rn */
	r10 = r12 & 0xFF;  /* 0C06DC32 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C06DC36u, 2);  /* 0C06DC34 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06DC36 add #imm,Rn */
	IF(0x0C06DC38u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DC3Au, 2);  /* 0C06DC38 mov.b @(r0,Rm),Rn */
	r11 = r2 & 0xFF;  /* 0C06DC3A extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C06DC3Eu, 2);  /* 0C06DC3C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C06DB00u, 3); goto L_0C06DB00; }  /* 0C06DC3E bra */
L_0C06DC50: BLKS(0x0C06DC50u);
	r9 = 0xB4u; UPD(0x0C06DC52u, 1);  /* 0C06DC50 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06DC52 add #imm,Rn */
	IF(0x0C06DC54u); MACL = r10 * r9;  /* 0C06DC54 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C06DC58u, 4);  /* 0C06DC56 mov.l @(disp,pc),Rn */
	IF(0x0C06DC58u); r8 = MACL;  /* 0C06DC58 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C06DC5Cu, 2);  /* 0C06DC5A mov.w @(disp,pc),Rn */
	r8 += r11;  /* 0C06DC5C add Rm,Rn */
	IF(0x0C06DC5Eu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DC60u, 2);  /* 0C06DC5E mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C06DC60 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C06DC64u, 2);  /* 0C06DC62 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06DC64 add #imm,Rn */
	IF(0x0C06DC66u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DC68u, 2);  /* 0C06DC66 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C06DC68 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C06DC6Cu, 2);  /* 0C06DC6A mov.l Rm,@(disp,Rn) */
	r12 = 0xC0AC800u; UPD(0x0C06DC6Eu, 1);  /* 0C06DC6C mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C06DC6E mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C06DC72u, 2);  /* 0C06DC70 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C06DC74u, 1);  /* 0C06DC72 mov.l @(disp,Rm),Rn */
	IF(0x0C06DC74u); { u32 t_ = r12; PR = 0x0C06DC78u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C06DC78u); }  /* 0C06DC74 jsr @Rn */
L_0C06DC78: BLKS(0x0C06DC78u);
	r4 = r10;  /* 0C06DC78 mov Rm,Rn */
	r10 = 0xC0A0540u; UPD(0x0C06DC7Cu, 2);  /* 0C06DC7A mov.l @(disp,pc),Rn */
	IF(0x0C06DC7Cu); { u32 t_ = r10; PR = 0x0C06DC80u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06DC80u); }  /* 0C06DC7C jsr @Rn */
L_0C06DC80: BLKS(0x0C06DC80u);
	IF(0x0C06DC80u); T = (s32)r0 >= 0;  /* 0C06DC80 cmp/pz Rn */
	if (!T) { UPD(0x0C06DC94u, 4); goto L_0C06DC94; }  /* 0C06DC82 bf */
L_0C06DC84: BLKS(0x0C06DC84u);
	IF(0x0C06DC84u); MACL = r0 * r9;  /* 0C06DC84 mul.l Rm,Rn */
	IF(0x0C06DC86u); r9 = MACL;  /* 0C06DC86 sts macl,Rn */
	r9 += r11;  /* 0C06DC88 add Rm,Rn */
	r11 = 0xA5u; UPD(0x0C06DC8Cu, 5);  /* 0C06DC8A mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C06DC8C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C06DC90u, 2);  /* 0C06DC8E mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C06DC90 add #imm,Rn */
	W8(r9, r0); UPD(0x0C06DC94u, 2);  /* 0C06DC92 mov.b Rm,@Rn */
L_0C06DC94: BLKS(0x0C06DC94u);
	{ IF(0x0C06DC96u); ; /* slot nop */ UPD(0x0C06DAD0u, 3); goto L_0C06DAD0; }  /* 0C06DC94 bra */
}

void f_0C06DCC0(sh3_t *c)
{
	LOCALS;
	goto L_0C06DCC0;
L_0C06D980: BLKS(0x0C06D980u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06D982u, 1);  /* 0C06D980 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06D984u, 1);  /* 0C06D982 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06D986u, 1);  /* 0C06D984 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06D988u, 1);  /* 0C06D986 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C06D988 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06D98Cu, 2);  /* 0C06D98A mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C06D98Eu, 1);  /* 0C06D98C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06D990u, 1);  /* 0C06D98E mov.l Rm,@-Rn */
	IF(0x0C06D990u); MACL = r10 * r3;  /* 0C06D990 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D994u, 3);  /* 0C06D992 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C06D996u, 1);  /* 0C06D994 mov.l @(disp,pc),Rn */
	IF(0x0C06D996u); r2 = MACL;  /* 0C06D996 sts macl,Rn */
	IF(0x0C06D998u); r15 -= 4; W32(r15, PR); UPD(0x0C06D99Au, 2);  /* 0C06D998 sts.l pr,@-Rn */
	r0 += r2;  /* 0C06D99A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C06D99Eu, 2);  /* 0C06D99C mov.l @(disp,Rm),Rn */
	r0 = 0xBu;  /* 0C06D99E mov #imm,Rn */
	T = r2 > r0;  /* 0C06D9A0 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06D9AAu, 5); goto L_0C06D9AA; } goto L_0C06D9A6; }  /* 0C06D9A2 bf/s */
L_0C06D9A6: BLKS(0x0C06D9A6u);
	{ IF(0x0C06D9A8u); ; /* slot nop */ UPD(0x0C06DA94u, 4); goto L_0C06DA94; }  /* 0C06D9A6 bra */
L_0C06D9AA: BLKS(0x0C06D9AAu);
	r0 = 0xC06D9BCu;  /* 0C06D9AA mova @(disp,pc),r0 */
	r2 += r2;  /* 0C06D9AC add Rm,Rn */
	IF(0x0C06D9AEu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06D9B0u, 3);  /* 0C06D9AE mov.w @(r0,Rm),Rn */
	IF(0x0C06D9B0u); { u32 tv_ = (r4 + 0x0C06D9B4u); u32 t_ = PHYS(tv_); IF(0x0C06D9B2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C06D9E0u: goto L_0C06D9E0; case 0x0C06DA30u: goto L_0C06DA30; case 0x0C06DAE0u: goto L_0C06DAE0; case 0x0C06DB10u: goto L_0C06DB10; case 0x0C06DB40u: goto L_0C06DB40; case 0x0C06DBA0u: goto L_0C06DBA0; case 0x0C06DC20u: goto L_0C06DC20; case 0x0C06DC50u: goto L_0C06DC50; default: JUMPD(tv_); } }  /* 0C06D9B0 braf Rn */
L_0C06D9E0: BLKS(0x0C06D9E0u);
	r8 = 0xB4u; UPD(0x0C06D9E2u, 1);  /* 0C06D9E0 mov.w @(disp,pc),Rn */
	IF(0x0C06D9E2u); MACL = r10 * r8;  /* 0C06D9E2 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C06D9E6u, 3);  /* 0C06D9E4 mov.l @(disp,pc),Rn */
	IF(0x0C06D9E6u); r2 = MACL;  /* 0C06D9E6 sts macl,Rn */
	r2 += r7;  /* 0C06D9E8 add Rm,Rn */
	r6 = 0xA5u; UPD(0x0C06D9ECu, 3);  /* 0C06D9EA mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C06D9EC mov Rm,Rn */
	IF(0x0C06D9EEu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C06D9F0u, 2);  /* 0C06D9EE mov.b @(r0,Rm),Rn */
	r0 = r5;  /* 0C06D9F0 mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C06D9F2 cmp/eq #imm,r0 */
	{ u32 c_ = T; r11 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06DA10u, 5); goto L_0C06DA10; } UPD(0x0C06D9F8u, 1); goto L_0C06D9F8; }  /* 0C06D9F4 bt/s */
L_0C06D9F8: BLKS(0x0C06D9F8u);
	r0 = 0xC0A14C0u; UPD(0x0C06D9FAu, 1);  /* 0C06D9F8 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C06D9FA mov Rm,Rn */
	r15 = r14;  /* 0C06D9FC mov Rm,Rn */
	IF(0x0C06D9FEu); PR = R32(r15); r15 += 4; UPD(0x0C06DA00u, 3);  /* 0C06D9FE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06DA02u, 1);  /* 0C06DA00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06DA04u, 1);  /* 0C06DA02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06DA06u, 1);  /* 0C06DA04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06DA08u, 1);  /* 0C06DA06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06DA0Au, 1);  /* 0C06DA08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06DA0Cu, 1);  /* 0C06DA0A mov.l @Rm+,Rn */
	IF(0x0C06DA0Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A14C0u: TAIL(f_0C0A14C0); default: JUMPD(tv_); } }  /* 0C06DA0C jmp @Rn */
L_0C06DA10: BLKS(0x0C06DA10u);
	r5 = R32(r2 + 0x24u); UPD(0x0C06DA12u, 1);  /* 0C06DA10 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06DA12 add #imm,Rn */
	r12 = 0x20000u; UPD(0x0C06DA16u, 2);  /* 0C06DA14 mov.l @(disp,pc),Rn */
	r9 = 0xC06CC20u; UPD(0x0C06DA18u, 1);  /* 0C06DA16 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C06DA18 mov #imm,Rn */
	W32(r15, r12); UPD(0x0C06DA1Cu, 2);  /* 0C06DA1A mov.l Rm,@Rn */
	r7 = 0x14u;  /* 0C06DA1C mov #imm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C06DA20u, 2);  /* 0C06DA1E mov.l Rm,@(disp,Rn) */
	r13 = 0x200000u; UPD(0x0C06DA22u, 1);  /* 0C06DA20 mov.l @(disp,pc),Rn */
	r6 = R32(r2 + 0x28u); UPD(0x0C06DA24u, 1);  /* 0C06DA22 mov.l @(disp,Rm),Rn */
	IF(0x0C06DA24u); { u32 t_ = r9; PR = 0x0C06DA28u; r5 += r13; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C06DA28u); }  /* 0C06DA24 jsr @Rn */
L_0C06DA28: BLKS(0x0C06DA28u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C06D9F8u, 3); goto L_0C06D9F8; }  /* 0C06DA28 bra */
L_0C06DA30: BLKS(0x0C06DA30u);
	r11 = 0xB4u; UPD(0x0C06DA32u, 1);  /* 0C06DA30 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06DA32 add #imm,Rn */
	IF(0x0C06DA34u); MACL = r10 * r11;  /* 0C06DA34 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C06DA38u, 4);  /* 0C06DA36 mov.l @(disp,pc),Rn */
	IF(0x0C06DA38u); r8 = MACL;  /* 0C06DA38 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C06DA3Cu, 2);  /* 0C06DA3A mov.w @(disp,pc),Rn */
	r8 += r13;  /* 0C06DA3C add Rm,Rn */
	IF(0x0C06DA3Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DA40u, 2);  /* 0C06DA3E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C06DA40 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C06DA44u, 2);  /* 0C06DA42 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06DA44 add #imm,Rn */
	IF(0x0C06DA46u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DA48u, 2);  /* 0C06DA46 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C06DA48 mov #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C06DA4A extu.b Rm,Rn */
	r9 = 0xC0AB240u; UPD(0x0C06DA4Eu, 3);  /* 0C06DA4C mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C06DA50u, 1);  /* 0C06DA4E mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C06DA52u, 1);  /* 0C06DA50 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C06DA54u, 1);  /* 0C06DA52 mov.l @(disp,Rm),Rn */
	IF(0x0C06DA54u); { u32 t_ = r9; PR = 0x0C06DA58u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C06DA58u); }  /* 0C06DA54 jsr @Rn */
L_0C06DA58: BLKS(0x0C06DA58u);
	r9 = 0xC0A0540u; UPD(0x0C06DA5Au, 1);  /* 0C06DA58 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C06DA5A add #imm,Rn */
	IF(0x0C06DA5Cu); { u32 t_ = r9; PR = 0x0C06DA60u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06DA60u); }  /* 0C06DA5C jsr @Rn */
L_0C06DA60: BLKS(0x0C06DA60u);
	IF(0x0C06DA60u); T = (s32)r0 >= 0;  /* 0C06DA60 cmp/pz Rn */
	if (!T) { UPD(0x0C06DAD0u, 4); goto L_0C06DAD0; }  /* 0C06DA62 bf */
L_0C06DA64: BLKS(0x0C06DA64u);
	r7 = r8;  /* 0C06DA64 mov Rm,Rn */
	r9 = 0xA4u; UPD(0x0C06DA68u, 2);  /* 0C06DA66 mov.w @(disp,pc),Rn */
	r7 += r9;  /* 0C06DA68 add Rm,Rn */
	r7 += 0x1u;  /* 0C06DA6A add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C06DA6Eu, 3);  /* 0C06DA6C mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C06DA6E tst Rm,Rn */
	if (!T) { UPD(0x0C06DAB0u, 4); goto L_0C06DAB0; }  /* 0C06DA70 bf */
L_0C06DA72: BLKS(0x0C06DA72u);
	IF(0x0C06DA72u); MACL = r12 * r11;  /* 0C06DA72 mul.l Rm,Rn */
	r4 = r10;  /* 0C06DA74 mov Rm,Rn */
	r10 = 0x4000u; UPD(0x0C06DA78u, 4);  /* 0C06DA76 mov.w @(disp,pc),Rn */
	IF(0x0C06DA78u); r3 = MACL;  /* 0C06DA78 sts macl,Rn */
	r3 += r13;  /* 0C06DA7A add Rm,Rn */
	r3 += r9;  /* 0C06DA7C add Rm,Rn */
	r3 += 0x1u;  /* 0C06DA7E add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r3); UPD(0x0C06DA82u, 5);  /* 0C06DA80 mov.b @Rm,Rn */
	r12 = 0x1u;  /* 0C06DA82 mov #imm,Rn */
	r11 = 0xC0A0380u; UPD(0x0C06DA86u, 2);  /* 0C06DA84 mov.l @(disp,pc),Rn */
	r13 += 0x1u;  /* 0C06DA86 add #imm,Rn */
	W8(r3, r13); UPD(0x0C06DA8Au, 2);  /* 0C06DA88 mov.b Rm,@Rn */
	IF(0x0C06DA8Au); { u32 t_ = r11; PR = 0x0C06DA8Eu; W32(r8 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C06DA8Eu); }  /* 0C06DA8A jsr @Rn */
L_0C06DA8E: BLKS(0x0C06DA8Eu);
	r1 = R32(r8); UPD(0x0C06DA90u, 1);  /* 0C06DA8E mov.l @Rm,Rn */
	r1 |= r10;  /* 0C06DA90 or Rm,Rn */
	UPD(0x0C06DA92u, 1);
L_0C06DA92: BLKS(0x0C06DA92u);
	W32(r8, r1); UPD(0x0C06DA94u, 1);  /* 0C06DA92 mov.l Rm,@Rn */
L_0C06DA94: BLKS(0x0C06DA94u);
	r15 = r14;  /* 0C06DA94 mov Rm,Rn */
	IF(0x0C06DA96u); PR = R32(r15); r15 += 4; UPD(0x0C06DA98u, 2);  /* 0C06DA96 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06DA9Au, 1);  /* 0C06DA98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06DA9Cu, 1);  /* 0C06DA9A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06DA9Eu, 1);  /* 0C06DA9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06DAA0u, 1);  /* 0C06DA9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06DAA2u, 1);  /* 0C06DAA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06DAA4u, 1);  /* 0C06DAA2 mov.l @Rm+,Rn */
	IF(0x0C06DAA4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06DAA4 rts */
L_0C06DAB0: BLKS(0x0C06DAB0u);
	r15 += 0xFFFFFFF8u;  /* 0C06DAB0 add #imm,Rn */
	r0 = 0x0u;  /* 0C06DAB2 mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C06DAB6u, 3);  /* 0C06DAB4 mov.l Rm,@(disp,Rn) */
	r4 = 0x3u;  /* 0C06DAB6 mov #imm,Rn */
	r2 = 0x20000u; UPD(0x0C06DABAu, 2);  /* 0C06DAB8 mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C06DABA mov #imm,Rn */
	r0 = 0xC06CC20u; UPD(0x0C06DABEu, 2);  /* 0C06DABC mov.l @(disp,pc),Rn */
	W32(r15, r2); UPD(0x0C06DAC0u, 1);  /* 0C06DABE mov.l Rm,@Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C06DAC2u, 1);  /* 0C06DAC0 mov.l @(disp,Rm),Rn */
	IF(0x0C06DAC2u); { u32 t_ = r0; PR = 0x0C06DAC6u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C06DAC6u); }  /* 0C06DAC2 jsr @Rn */
L_0C06DAC6: BLKS(0x0C06DAC6u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C06DA72u, 3); goto L_0C06DA72; }  /* 0C06DAC6 bra */
L_0C06DAD0: BLKS(0x0C06DAD0u);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C06DA92u, 3); goto L_0C06DA92; }  /* 0C06DAD0 bra */
L_0C06DAE0: BLKS(0x0C06DAE0u);
	r8 = 0xB4u; UPD(0x0C06DAE2u, 1);  /* 0C06DAE0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06DAE2 add #imm,Rn */
	IF(0x0C06DAE4u); MACL = r10 * r8;  /* 0C06DAE4 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C06DAE8u, 4);  /* 0C06DAE6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C06DAEAu, 1);  /* 0C06DAE8 mov.w @(disp,pc),Rn */
	IF(0x0C06DAEAu); r8 = MACL;  /* 0C06DAEA sts macl,Rn */
	r8 += r7;  /* 0C06DAEC add Rm,Rn */
	IF(0x0C06DAEEu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DAF0u, 3);  /* 0C06DAEE mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C06DAF0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C06DAF4u, 2);  /* 0C06DAF2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06DAF4 add #imm,Rn */
	IF(0x0C06DAF6u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DAF8u, 2);  /* 0C06DAF6 mov.b @(r0,Rm),Rn */
	r5 = 0x1u;  /* 0C06DAF8 mov #imm,Rn */
	r9 = r4 & 0xFF;  /* 0C06DAFA extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C06DAFEu, 3);  /* 0C06DAFC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C06DB00u, 1);  /* 0C06DAFE mov.l @Rm,Rn */
L_0C06DB00: BLKS(0x0C06DB00u);
	r6 = R32(r8 + 0x24u); UPD(0x0C06DB02u, 1);  /* 0C06DB00 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C06DB04u, 1);  /* 0C06DB02 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AC800u; UPD(0x0C06DB06u, 1);  /* 0C06DB04 mov.l @(disp,pc),Rn */
L_0C06DB06: BLKS(0x0C06DB06u);
	IF(0x0C06DB06u); { u32 t_ = r0; PR = 0x0C06DB0Au; r13 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C06DB0Au); }  /* 0C06DB06 jsr @Rn */
L_0C06DB0A: BLKS(0x0C06DB0Au);
	W32(r8, r13); UPD(0x0C06DB0Cu, 1);  /* 0C06DB0A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C06DA94u, 3); goto L_0C06DA94; }  /* 0C06DB0C bra */
L_0C06DB10: BLKS(0x0C06DB10u);
	r3 = 0xB4u; UPD(0x0C06DB12u, 1);  /* 0C06DB10 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06DB12 add #imm,Rn */
	IF(0x0C06DB14u); MACL = r10 * r3;  /* 0C06DB14 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C06DB18u, 4);  /* 0C06DB16 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C06DB18 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C06DB1Cu, 2);  /* 0C06DB1A mov.w @(disp,pc),Rn */
	IF(0x0C06DB1Cu); r8 = MACL;  /* 0C06DB1C sts macl,Rn */
	r8 += r12;  /* 0C06DB1E add Rm,Rn */
	IF(0x0C06DB20u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DB22u, 3);  /* 0C06DB20 mov.b @(r0,Rm),Rn */
	r10 = r11 & 0xFF;  /* 0C06DB22 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C06DB26u, 2);  /* 0C06DB24 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06DB26 add #imm,Rn */
	IF(0x0C06DB28u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DB2Au, 2);  /* 0C06DB28 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C06DB2A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C06DB2Eu, 2);  /* 0C06DB2C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C06DB00u, 3); goto L_0C06DB00; }  /* 0C06DB2E bra */
L_0C06DB40: BLKS(0x0C06DB40u);
	r7 = 0xB4u; UPD(0x0C06DB42u, 1);  /* 0C06DB40 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06DB42 add #imm,Rn */
	IF(0x0C06DB44u); MACL = r10 * r7;  /* 0C06DB44 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C06DB48u, 4);  /* 0C06DB46 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C06DB4Au, 1);  /* 0C06DB48 mov.w @(disp,pc),Rn */
	IF(0x0C06DB4Au); r8 = MACL;  /* 0C06DB4A sts macl,Rn */
	r8 += r6;  /* 0C06DB4C add Rm,Rn */
	IF(0x0C06DB4Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DB50u, 3);  /* 0C06DB4E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C06DB50 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C06DB54u, 2);  /* 0C06DB52 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06DB54 add #imm,Rn */
	IF(0x0C06DB56u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DB58u, 2);  /* 0C06DB56 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C06DB58 mov #imm,Rn */
	r13 = r9 & 0xFF;  /* 0C06DB5A extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C06DB5Eu, 3);  /* 0C06DB5C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C06DB60u, 1);  /* 0C06DB5E mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C06DB62u, 1);  /* 0C06DB60 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C06DB64u, 1);  /* 0C06DB62 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C06DB06u, 3); goto L_0C06DB06; }  /* 0C06DB64 bra */
L_0C06DBA0: BLKS(0x0C06DBA0u);
	r8 = 0xB4u; UPD(0x0C06DBA2u, 1);  /* 0C06DBA0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06DBA2 add #imm,Rn */
	IF(0x0C06DBA4u); MACL = r10 * r8;  /* 0C06DBA4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C06DBA8u, 4);  /* 0C06DBA6 mov.l @(disp,pc),Rn */
	IF(0x0C06DBA8u); r11 = MACL;  /* 0C06DBA8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C06DBACu, 2);  /* 0C06DBAA mov.w @(disp,pc),Rn */
	r11 += r9;  /* 0C06DBAC add Rm,Rn */
	IF(0x0C06DBAEu); r5 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06DBB0u, 2);  /* 0C06DBAE mov.b @(r0,Rm),Rn */
	r13 = r5 & 0xFF;  /* 0C06DBB0 extu.b Rm,Rn */
	W32(r15, r13); UPD(0x0C06DBB4u, 2);  /* 0C06DBB2 mov.l Rm,@Rn */
	r5 = 0x4u;  /* 0C06DBB4 mov #imm,Rn */
	r13 = 0xA9u; UPD(0x0C06DBB8u, 2);  /* 0C06DBB6 mov.w @(disp,pc),Rn */
	r13 += r11;  /* 0C06DBB8 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r13); UPD(0x0C06DBBCu, 2);  /* 0C06DBBA mov.b @Rm,Rn */
	r3 = r4 & 0xFF;  /* 0C06DBBC extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C06DBC0u, 2);  /* 0C06DBBE mov.l Rm,@(disp,Rn) */
	r12 = 0xC0AB240u; UPD(0x0C06DBC2u, 1);  /* 0C06DBC0 mov.l @(disp,pc),Rn */
	r4 = R32(r11); UPD(0x0C06DBC4u, 1);  /* 0C06DBC2 mov.l @Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C06DBC6u, 1);  /* 0C06DBC4 mov.l @(disp,Rm),Rn */
	IF(0x0C06DBC6u); { u32 t_ = r12; PR = 0x0C06DBCAu; r7 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C06DBCAu); }  /* 0C06DBC6 jsr @Rn */
L_0C06DBCA: BLKS(0x0C06DBCAu);
	r4 = r10;  /* 0C06DBCA mov Rm,Rn */
	r10 = 0xC0A0540u; UPD(0x0C06DBCEu, 2);  /* 0C06DBCC mov.l @(disp,pc),Rn */
	IF(0x0C06DBCEu); { u32 t_ = r10; PR = 0x0C06DBD2u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06DBD2u); }  /* 0C06DBCE jsr @Rn */
L_0C06DBD2: BLKS(0x0C06DBD2u);
	r1 = r0;  /* 0C06DBD2 mov Rm,Rn */
	IF(0x0C06DBD4u); MACL = r1 * r8;  /* 0C06DBD4 mul.l Rm,Rn */
	r12 = ~r0;  /* 0C06DBD6 not Rm,Rn */
	IF(0x0C06DBD8u); T = r12 >> 31; r12 = (r12 << 1) | T;  /* 0C06DBD8 rotl Rn */
	IF(0x0C06DBDAu); r10 = MACL;  /* 0C06DBDA sts macl,Rn */
	r10 += r9;  /* 0C06DBDC add Rm,Rn */
	r2 = R32(r10 + 0xCu); UPD(0x0C06DBE0u, 8);  /* 0C06DBDE mov.l @(disp,Rm),Rn */
	IF(0x0C06DBE0u); r0 = T;  /* 0C06DBE0 movt Rn */
	T = (r2 & r2) == 0;  /* 0C06DBE2 tst Rm,Rn */
	IF(0x0C06DBE4u); r8 = T;  /* 0C06DBE4 movt Rn */
	r0 &= r8;  /* 0C06DBE6 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06DBE8 tst Rm,Rn */
	if (!T) { UPD(0x0C06DC00u, 8); goto L_0C06DC00; }  /* 0C06DBEA bf */
L_0C06DBEC: BLKS(0x0C06DBECu);
	r7 = 0x0u;  /* 0C06DBEC mov #imm,Rn */
	{ W32(r11, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C06DA94u, 4); goto L_0C06DA94; }  /* 0C06DBEE bra */
L_0C06DC00: BLKS(0x0C06DC00u);
	r8 = (u32)(s32)(s8)R8(r13); UPD(0x0C06DC02u, 1);  /* 0C06DC00 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06DC02 add #imm,Rn */
	r0 = 0x20000u; UPD(0x0C06DC06u, 2);  /* 0C06DC04 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C06DC06 mov #imm,Rn */
	r9 = 0xC06CC20u; UPD(0x0C06DC0Au, 2);  /* 0C06DC08 mov.l @(disp,pc),Rn */
	r7 = r8 & 0xFF;  /* 0C06DC0A extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C06DC0Eu, 2);  /* 0C06DC0C mov.l Rm,@Rn */
	r4 = 0xDu;  /* 0C06DC0E mov #imm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C06DC12u, 2);  /* 0C06DC10 mov.l Rm,@(disp,Rn) */
	r5 = R32(r11 + 0x24u); UPD(0x0C06DC14u, 1);  /* 0C06DC12 mov.l @(disp,Rm),Rn */
	IF(0x0C06DC14u); { u32 t_ = r9; PR = 0x0C06DC18u; r6 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C06DC18u); }  /* 0C06DC14 jsr @Rn */
L_0C06DC18: BLKS(0x0C06DC18u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C06DBECu, 3); goto L_0C06DBEC; }  /* 0C06DC18 bra */
L_0C06DC20: BLKS(0x0C06DC20u);
	r4 = 0xB4u; UPD(0x0C06DC22u, 1);  /* 0C06DC20 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06DC22 add #imm,Rn */
	IF(0x0C06DC24u); MACL = r10 * r4;  /* 0C06DC24 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C06DC28u, 4);  /* 0C06DC26 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C06DC28 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C06DC2Cu, 2);  /* 0C06DC2A mov.w @(disp,pc),Rn */
	IF(0x0C06DC2Cu); r8 = MACL;  /* 0C06DC2C sts macl,Rn */
	r8 += r3;  /* 0C06DC2E add Rm,Rn */
	IF(0x0C06DC30u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DC32u, 3);  /* 0C06DC30 mov.b @(r0,Rm),Rn */
	r10 = r12 & 0xFF;  /* 0C06DC32 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C06DC36u, 2);  /* 0C06DC34 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06DC36 add #imm,Rn */
	IF(0x0C06DC38u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DC3Au, 2);  /* 0C06DC38 mov.b @(r0,Rm),Rn */
	r11 = r2 & 0xFF;  /* 0C06DC3A extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C06DC3Eu, 2);  /* 0C06DC3C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C06DB00u, 3); goto L_0C06DB00; }  /* 0C06DC3E bra */
L_0C06DC50: BLKS(0x0C06DC50u);
	r9 = 0xB4u; UPD(0x0C06DC52u, 1);  /* 0C06DC50 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06DC52 add #imm,Rn */
	IF(0x0C06DC54u); MACL = r10 * r9;  /* 0C06DC54 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C06DC58u, 4);  /* 0C06DC56 mov.l @(disp,pc),Rn */
	IF(0x0C06DC58u); r8 = MACL;  /* 0C06DC58 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C06DC5Cu, 2);  /* 0C06DC5A mov.w @(disp,pc),Rn */
	r8 += r11;  /* 0C06DC5C add Rm,Rn */
	IF(0x0C06DC5Eu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DC60u, 2);  /* 0C06DC5E mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C06DC60 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C06DC64u, 2);  /* 0C06DC62 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06DC64 add #imm,Rn */
	IF(0x0C06DC66u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DC68u, 2);  /* 0C06DC66 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C06DC68 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C06DC6Cu, 2);  /* 0C06DC6A mov.l Rm,@(disp,Rn) */
	r12 = 0xC0AC800u; UPD(0x0C06DC6Eu, 1);  /* 0C06DC6C mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C06DC6E mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C06DC72u, 2);  /* 0C06DC70 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C06DC74u, 1);  /* 0C06DC72 mov.l @(disp,Rm),Rn */
	IF(0x0C06DC74u); { u32 t_ = r12; PR = 0x0C06DC78u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C06DC78u); }  /* 0C06DC74 jsr @Rn */
L_0C06DC78: BLKS(0x0C06DC78u);
	r4 = r10;  /* 0C06DC78 mov Rm,Rn */
	r10 = 0xC0A0540u; UPD(0x0C06DC7Cu, 2);  /* 0C06DC7A mov.l @(disp,pc),Rn */
	IF(0x0C06DC7Cu); { u32 t_ = r10; PR = 0x0C06DC80u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06DC80u); }  /* 0C06DC7C jsr @Rn */
L_0C06DC80: BLKS(0x0C06DC80u);
	IF(0x0C06DC80u); T = (s32)r0 >= 0;  /* 0C06DC80 cmp/pz Rn */
	if (!T) { UPD(0x0C06DC94u, 4); goto L_0C06DC94; }  /* 0C06DC82 bf */
L_0C06DC84: BLKS(0x0C06DC84u);
	IF(0x0C06DC84u); MACL = r0 * r9;  /* 0C06DC84 mul.l Rm,Rn */
	IF(0x0C06DC86u); r9 = MACL;  /* 0C06DC86 sts macl,Rn */
	r9 += r11;  /* 0C06DC88 add Rm,Rn */
	r11 = 0xA5u; UPD(0x0C06DC8Cu, 5);  /* 0C06DC8A mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C06DC8C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C06DC90u, 2);  /* 0C06DC8E mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C06DC90 add #imm,Rn */
	W8(r9, r0); UPD(0x0C06DC94u, 2);  /* 0C06DC92 mov.b Rm,@Rn */
L_0C06DC94: BLKS(0x0C06DC94u);
	{ IF(0x0C06DC96u); ; /* slot nop */ UPD(0x0C06DAD0u, 3); goto L_0C06DAD0; }  /* 0C06DC94 bra */
L_0C06DCC0: BLKS(0x0C06DCC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06DCC2u, 1);  /* 0C06DCC0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06DCC4u, 1);  /* 0C06DCC2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06DCC6u, 1);  /* 0C06DCC4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06DCC8u, 1);  /* 0C06DCC6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06DCCAu, 1);  /* 0C06DCC8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C06DCCA exts.w Rm,Rn */
	r3 = 0xB4u; UPD(0x0C06DCCEu, 2);  /* 0C06DCCC mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06DCD0u, 1);  /* 0C06DCCE mov.l Rm,@-Rn */
	IF(0x0C06DCD0u); MACL = r11 * r3;  /* 0C06DCD0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06DCD4u, 3);  /* 0C06DCD2 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C06DCD6u, 1);  /* 0C06DCD4 mov.l @(disp,pc),Rn */
	IF(0x0C06DCD6u); r2 = MACL;  /* 0C06DCD6 sts macl,Rn */
	IF(0x0C06DCD8u); r15 -= 4; W32(r15, PR); UPD(0x0C06DCDAu, 2);  /* 0C06DCD8 sts.l pr,@-Rn */
	r0 += r2;  /* 0C06DCDA add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C06DCDEu, 2);  /* 0C06DCDC mov.l @(disp,Rm),Rn */
	r0 = 0xBu;  /* 0C06DCDE mov #imm,Rn */
	T = r2 > r0;  /* 0C06DCE0 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06DD38u, 5); goto L_0C06DD38; } goto L_0C06DCE6; }  /* 0C06DCE2 bt/s */
L_0C06DCE6: BLKS(0x0C06DCE6u);
	r0 = 0xC06DCF8u;  /* 0C06DCE6 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C06DCE8 add Rm,Rn */
	IF(0x0C06DCEAu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06DCECu, 4);  /* 0C06DCEA mov.w @(r0,Rm),Rn */
	IF(0x0C06DCECu); { u32 tv_ = (r4 + 0x0C06DCF0u); u32 t_ = PHYS(tv_); IF(0x0C06DCEEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C06DD10u: goto L_0C06DD10; case 0x0C06DDB0u: goto L_0C06DDB0; case 0x0C06DE00u: goto L_0C06DE00; case 0x0C06DE80u: goto L_0C06DE80; case 0x0C06DF40u: goto L_0C06DF40; case 0x0C06DFC0u: goto L_0C06DFC0; case 0x0C06E0B0u: goto L_0C06E0B0; case 0x0C06E160u: goto L_0C06E160; default: JUMPD(tv_); } }  /* 0C06DCEC braf Rn */
L_0C06DD10: BLKS(0x0C06DD10u);
	r8 = 0xC0A1700u; UPD(0x0C06DD12u, 1);  /* 0C06DD10 mov.l @(disp,pc),Rn */
	IF(0x0C06DD12u); { u32 t_ = r8; PR = 0x0C06DD16u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C06DD16u); }  /* 0C06DD12 jsr @Rn */
L_0C06DD16: BLKS(0x0C06DD16u);
	r7 = 0xC0A1590u; UPD(0x0C06DD18u, 1);  /* 0C06DD16 mov.l @(disp,pc),Rn */
	IF(0x0C06DD18u); { u32 t_ = r7; PR = 0x0C06DD1Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1590, 0x0C0A1590u, 0x0C06DD1Cu); }  /* 0C06DD18 jsr @Rn */
L_0C06DD1C: BLKS(0x0C06DD1Cu);
	r6 = 0xB4u; UPD(0x0C06DD1Eu, 1);  /* 0C06DD1C mov.w @(disp,pc),Rn */
	IF(0x0C06DD1Eu); MACL = r11 * r6;  /* 0C06DD1E mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C06DD22u, 3);  /* 0C06DD20 mov.l @(disp,pc),Rn */
	IF(0x0C06DD22u); r2 = MACL;  /* 0C06DD22 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C06DD26u, 2);  /* 0C06DD24 mov.w @(disp,pc),Rn */
	r2 += r5;  /* 0C06DD26 add Rm,Rn */
	r3 += r2;  /* 0C06DD28 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C06DD2Cu, 3);  /* 0C06DD2A mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C06DD2C add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C06DD2E extu.b Rm,Rn */
	T = r0 == 0xCu;  /* 0C06DD30 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06DD50u, 6); goto L_0C06DD50; } UPD(0x0C06DD36u, 1); goto L_0C06DD36; }  /* 0C06DD32 bt/s */
L_0C06DD36: BLKS(0x0C06DD36u);
	IF(0x0C06DD36u); ;  /* 0C06DD36 nop */
	UPD(0x0C06DD38u, 1);
L_0C06DD38: BLKS(0x0C06DD38u);
	r15 = r14;  /* 0C06DD38 mov Rm,Rn */
	IF(0x0C06DD3Au); PR = R32(r15); r15 += 4; UPD(0x0C06DD3Cu, 2);  /* 0C06DD3A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06DD3Eu, 1);  /* 0C06DD3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06DD40u, 1);  /* 0C06DD3E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06DD42u, 1);  /* 0C06DD40 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06DD44u, 1);  /* 0C06DD42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06DD46u, 1);  /* 0C06DD44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06DD48u, 1);  /* 0C06DD46 mov.l @Rm+,Rn */
	IF(0x0C06DD48u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06DD48 rts */
L_0C06DD50: BLKS(0x0C06DD50u);
	r9 = 0x0u;  /* 0C06DD50 mov #imm,Rn */
	W8(r3, r9); UPD(0x0C06DD54u, 2);  /* 0C06DD52 mov.b Rm,@Rn */
	r8 = r2;  /* 0C06DD54 mov Rm,Rn */
	r11 = 0xC17963Cu; UPD(0x0C06DD58u, 2);  /* 0C06DD56 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C06DD58 mov #imm,Rn */
	r10 = 0xC0ACA40u; UPD(0x0C06DD5Cu, 2);  /* 0C06DD5A mov.l @(disp,pc),Rn */
L_0C06DD5C: BLKS(0x0C06DD5Cu);
	r0 = r9;  /* 0C06DD5C mov Rm,Rn */
	r5 = 0xC179624u; UPD(0x0C06DD60u, 2);  /* 0C06DD5E mov.l @(disp,pc),Rn */
	IF(0x0C06DD60u); r0 <<= 2;  /* 0C06DD60 shll2 Rn */
	IF(0x0C06DD62u); r7 = R32(r0 + r5); UPD(0x0C06DD64u, 2);  /* 0C06DD62 mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C06DD64 add #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C06DD68u, 2);  /* 0C06DD66 mov.l @(disp,Rm),Rn */
	r0 = r9;  /* 0C06DD68 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C06DD6A and #imm,r0 */
	IF(0x0C06DD6Cu); r0 <<= 2;  /* 0C06DD6C shll2 Rn */
	r6 += r7;  /* 0C06DD6E add Rm,Rn */
	IF(0x0C06DD70u); r3 = R32(r0 + r11); UPD(0x0C06DD72u, 5);  /* 0C06DD70 mov.l @(r0,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C06DD74u, 1);  /* 0C06DD72 mov.l @(disp,Rm),Rn */
	r4 = 0xC179644u; UPD(0x0C06DD76u, 1);  /* 0C06DD74 mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C06DD76 add Rm,Rn */
	IF(0x0C06DD78u); r3 = R32(r0 + r4); UPD(0x0C06DD7Au, 2);  /* 0C06DD78 mov.l @(r0,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C06DD7Cu, 1);  /* 0C06DD7A mov.w @(disp,pc),Rn */
	IF(0x0C06DD7Cu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DD7Eu, 1);  /* 0C06DD7C mov.b @(r0,Rm),Rn */
	r13 = r2 & 0xFF;  /* 0C06DD7E extu.b Rm,Rn */
	W32(r15, r13); UPD(0x0C06DD82u, 2);  /* 0C06DD80 mov.l Rm,@Rn */
	r0 = r8;  /* 0C06DD82 mov Rm,Rn */
	r12 = 0xA9u; UPD(0x0C06DD86u, 2);  /* 0C06DD84 mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C06DD86 mov #imm,Rn */
	IF(0x0C06DD88u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C06DD8Au, 2);  /* 0C06DD88 mov.b @(r0,Rm),Rn */
	r13 = r9;  /* 0C06DD8A mov Rm,Rn */
	r0 = 0x808080u; UPD(0x0C06DD8Eu, 2);  /* 0C06DD8C mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C06DD8E extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C06DD92u, 2);  /* 0C06DD90 mov.l Rm,@(disp,Rn) */
	r13 += 0x1u;  /* 0C06DD92 add #imm,Rn */
	W32(r15 + 0x8u, r2); UPD(0x0C06DD96u, 2);  /* 0C06DD94 mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C06DD96 mov #imm,Rn */
	W32(r15 + 0xCu, r3); UPD(0x0C06DD9Au, 2);  /* 0C06DD98 mov.l Rm,@(disp,Rn) */
	r9 = (u32)(s32)(s16)r13;  /* 0C06DD9A exts.w Rm,Rn */
	W32(r15 + 0x10u, r0); UPD(0x0C06DD9Eu, 2);  /* 0C06DD9C mov.l Rm,@(disp,Rn) */
	r12 = 0x5u;  /* 0C06DD9E mov #imm,Rn */
	IF(0x0C06DDA0u); { u32 t_ = r10; PR = 0x0C06DDA4u; r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C06DDA4u); }  /* 0C06DDA0 jsr @Rn */
L_0C06DDA4: BLKS(0x0C06DDA4u);
	T = (s32)r9 > (s32)r12;  /* 0C06DDA4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06DD5Cu, 4); goto L_0C06DD5C; } goto L_0C06DDAA; }  /* 0C06DDA6 bf/s */
L_0C06DDAA: BLKS(0x0C06DDAAu);
	{ IF(0x0C06DDACu); ; /* slot nop */ UPD(0x0C06DD38u, 4); goto L_0C06DD38; }  /* 0C06DDAA bra */
L_0C06DDB0: BLKS(0x0C06DDB0u);
	r10 = 0xC0A0540u; UPD(0x0C06DDB2u, 1);  /* 0C06DDB0 mov.l @(disp,pc),Rn */
	IF(0x0C06DDB2u); { u32 t_ = r10; PR = 0x0C06DDB6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06DDB6u); }  /* 0C06DDB2 jsr @Rn */
L_0C06DDB6: BLKS(0x0C06DDB6u);
	IF(0x0C06DDB6u); T = (s32)r0 >= 0;  /* 0C06DDB6 cmp/pz Rn */
	if (!T) { UPD(0x0C06DDE0u, 4); goto L_0C06DDE0; }  /* 0C06DDB8 bf */
L_0C06DDBA: BLKS(0x0C06DDBAu);
	r13 = 0xB4u; UPD(0x0C06DDBCu, 1);  /* 0C06DDBA mov.w @(disp,pc),Rn */
	IF(0x0C06DDBCu); MACL = r11 * r13;  /* 0C06DDBC mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C06DDC0u, 3);  /* 0C06DDBE mov.l @(disp,pc),Rn */
	IF(0x0C06DDC0u); r11 = MACL;  /* 0C06DDC0 sts macl,Rn */
	IF(0x0C06DDC2u); MACL = r0 * r13;  /* 0C06DDC2 mul.l Rm,Rn */
	r11 += r12;  /* 0C06DDC4 add Rm,Rn */
	r1 = R32(r11 + 0x30u); UPD(0x0C06DDC8u, 5);  /* 0C06DDC6 mov.l @(disp,Rm),Rn */
	IF(0x0C06DDC8u); r8 = MACL;  /* 0C06DDC8 sts macl,Rn */
	r8 += r12;  /* 0C06DDCA add Rm,Rn */
	r9 = R32(r8 + 0x24u); UPD(0x0C06DDCEu, 3);  /* 0C06DDCC mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C06DDD0u, 1);  /* 0C06DDCE mov.l @(disp,Rm),Rn */
	r0 = R32(r11 + 0x2Cu); UPD(0x0C06DDD2u, 1);  /* 0C06DDD0 mov.l @(disp,Rm),Rn */
	r6 += r1;  /* 0C06DDD2 add Rm,Rn */
	r9 += r0;  /* 0C06DDD4 add Rm,Rn */
	W32(r11 + 0x24u, r9); UPD(0x0C06DDD8u, 3);  /* 0C06DDD6 mov.l Rm,@(disp,Rn) */
	{ W32(r11 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06DD38u, 3); goto L_0C06DD38; }  /* 0C06DDD8 bra */
L_0C06DDE0: BLKS(0x0C06DDE0u);
	r1 = 0xC06D980u; UPD(0x0C06DDE2u, 1);  /* 0C06DDE0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06DDE2 mov Rm,Rn */
	UPD(0x0C06DDE4u, 1);
L_0C06DDE4: BLKS(0x0C06DDE4u);
	r15 = r14;  /* 0C06DDE4 mov Rm,Rn */
	IF(0x0C06DDE6u); PR = R32(r15); r15 += 4; UPD(0x0C06DDE8u, 2);  /* 0C06DDE6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06DDEAu, 1);  /* 0C06DDE8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06DDECu, 1);  /* 0C06DDEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06DDEEu, 1);  /* 0C06DDEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06DDF0u, 1);  /* 0C06DDEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06DDF2u, 1);  /* 0C06DDF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06DDF4u, 1);  /* 0C06DDF2 mov.l @Rm+,Rn */
	IF(0x0C06DDF4u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06D980u: goto L_0C06D980; case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C06DDF4 jmp @Rn */
L_0C06DE00: BLKS(0x0C06DE00u);
	r10 = 0xC0A0540u; UPD(0x0C06DE02u, 1);  /* 0C06DE00 mov.l @(disp,pc),Rn */
	IF(0x0C06DE02u); { u32 t_ = r10; PR = 0x0C06DE06u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06DE06u); }  /* 0C06DE02 jsr @Rn */
L_0C06DE06: BLKS(0x0C06DE06u);
	IF(0x0C06DE06u); T = (s32)r0 >= 0;  /* 0C06DE06 cmp/pz Rn */
	if (!T) { UPD(0x0C06DDE0u, 4); goto L_0C06DDE0; }  /* 0C06DE08 bf */
L_0C06DE0A: BLKS(0x0C06DE0Au);
	r2 = 0xB4u; UPD(0x0C06DE0Cu, 1);  /* 0C06DE0A mov.w @(disp,pc),Rn */
	IF(0x0C06DE0Cu); MACL = r0 * r2;  /* 0C06DE0C mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C06DE10u, 3);  /* 0C06DE0E mov.l @(disp,pc),Rn */
	IF(0x0C06DE10u); r7 = MACL;  /* 0C06DE10 sts macl,Rn */
	r7 += r6;  /* 0C06DE12 add Rm,Rn */
	r4 = R32(r7 + 0xCu); UPD(0x0C06DE16u, 3);  /* 0C06DE14 mov.l @(disp,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C06DE16 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C06DE1Au); MACL = r11 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C06DDE0u, 5); goto L_0C06DDE0; } goto L_0C06DE1C; }  /* 0C06DE18 bf/s */
L_0C06DE1C: BLKS(0x0C06DE1Cu);
	r3 = R32(r7 + 0x28u); UPD(0x0C06DE1Eu, 3);  /* 0C06DE1C mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C06DE1E mov Rm,Rn */
	IF(0x0C06DE20u); r5 = MACL;  /* 0C06DE20 sts macl,Rn */
	r5 += r6;  /* 0C06DE22 add Rm,Rn */
	r6 = R32(r7 + 0x24u); UPD(0x0C06DE26u, 4);  /* 0C06DE24 mov.l @(disp,Rm),Rn */
	r0 = R32(r5 + 0xCu); UPD(0x0C06DE28u, 1);  /* 0C06DE26 mov.l @(disp,Rm),Rn */
	r1 = R32(r5 + 0x2Cu); UPD(0x0C06DE2Au, 1);  /* 0C06DE28 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C06DE2A add #imm,Rn */
	r7 = R32(r5 + 0x30u); UPD(0x0C06DE2Eu, 2);  /* 0C06DE2C mov.l @(disp,Rm),Rn */
	r6 += r1;  /* 0C06DE2E add Rm,Rn */
	r3 += r7;  /* 0C06DE30 add Rm,Rn */
	r0 &= 0x7u;  /* 0C06DE32 and #imm,r0 */
	W32(r5 + 0x24u, r6); UPD(0x0C06DE36u, 4);  /* 0C06DE34 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x28u, r3); UPD(0x0C06DE38u, 1);  /* 0C06DE36 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A0380u; UPD(0x0C06DE3Au, 1);  /* 0C06DE38 mov.l @(disp,pc),Rn */
	{ W32(r5 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06DDE4u, 3); goto L_0C06DDE4; }  /* 0C06DE3A bra */
L_0C06DE80: BLKS(0x0C06DE80u);
	r8 = 0xC0A0540u; UPD(0x0C06DE82u, 1);  /* 0C06DE80 mov.l @(disp,pc),Rn */
	IF(0x0C06DE82u); { u32 t_ = r8; PR = 0x0C06DE86u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06DE86u); }  /* 0C06DE82 jsr @Rn */
L_0C06DE86: BLKS(0x0C06DE86u);
	IF(0x0C06DE86u); T = (s32)r0 >= 0;  /* 0C06DE86 cmp/pz Rn */
	if (!T) { UPD(0x0C06DDE0u, 4); goto L_0C06DDE0; }  /* 0C06DE88 bf */
L_0C06DE8A: BLKS(0x0C06DE8Au);
	r9 = 0xB4u; UPD(0x0C06DE8Cu, 1);  /* 0C06DE8A mov.w @(disp,pc),Rn */
	IF(0x0C06DE8Cu); MACL = r11 * r9;  /* 0C06DE8C mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C06DE90u, 3);  /* 0C06DE8E mov.l @(disp,pc),Rn */
	IF(0x0C06DE90u); r10 = MACL;  /* 0C06DE90 sts macl,Rn */
	r10 += r2;  /* 0C06DE92 add Rm,Rn */
	IF(0x0C06DE94u); MACL = r0 * r9;  /* 0C06DE94 mul.l Rm,Rn */
	r13 = R32(r10); UPD(0x0C06DE98u, 5);  /* 0C06DE96 mov.l @Rm,Rn */
	r8 = 0xFFFFFEFFu; UPD(0x0C06DE9Au, 1);  /* 0C06DE98 mov.w @(disp,pc),Rn */
	r9 += 0x4Cu;  /* 0C06DE9A add #imm,Rn */
	r13 &= r8;  /* 0C06DE9C and Rm,Rn */
	IF(0x0C06DE9Eu); r8 = MACL;  /* 0C06DE9E sts macl,Rn */
	r8 += r2;  /* 0C06DEA0 add Rm,Rn */
	r6 = R32(r8); UPD(0x0C06DEA4u, 5);  /* 0C06DEA2 mov.l @Rm,Rn */
	r6 &= r9;  /* 0C06DEA4 and Rm,Rn */
	r13 |= r6;  /* 0C06DEA6 or Rm,Rn */
	W32(r10, r13); UPD(0x0C06DEAAu, 3);  /* 0C06DEA8 mov.l Rm,@Rn */
	r5 = 0x84u; UPD(0x0C06DEACu, 1);  /* 0C06DEAA mov.w @(disp,pc),Rn */
	r13 = r10;  /* 0C06DEAC mov Rm,Rn */
	r13 += r5;  /* 0C06DEAE add Rm,Rn */
	r5 += r8;  /* 0C06DEB0 add Rm,Rn */
	r7 = 0xC058060u; UPD(0x0C06DEB4u, 4);  /* 0C06DEB2 mov.l @(disp,pc),Rn */
	r5 += 0x2u;  /* 0C06DEB4 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r5); UPD(0x0C06DEB8u, 2);  /* 0C06DEB6 mov.w @Rm,Rn */
	r13 += 0x2u;  /* 0C06DEB8 add #imm,Rn */
	r9 = 0xE0000u; UPD(0x0C06DEBCu, 2);  /* 0C06DEBA mov.l @(disp,pc),Rn */
	r12 = r0;  /* 0C06DEBC mov Rm,Rn */
	r5 = r9;  /* 0C06DEBE mov Rm,Rn */
	r4 = r0;  /* 0C06DEC0 mov Rm,Rn */
	IF(0x0C06DEC2u); { u32 t_ = r7; PR = 0x0C06DEC6u; W16(r13, r0); /* slot mov.w Rm,@Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06DEC6u); }  /* 0C06DEC2 jsr @Rn */
L_0C06DEC6: BLKS(0x0C06DEC6u);
	r4 = R32(r8 + 0x24u); UPD(0x0C06DEC8u, 1);  /* 0C06DEC6 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C06DEC8 mov Rm,Rn */
	r4 += r0;  /* 0C06DECA add Rm,Rn */
	r3 = 0xC058030u; UPD(0x0C06DECEu, 3);  /* 0C06DECC mov.l @(disp,pc),Rn */
	W32(r10 + 0x24u, r4); UPD(0x0C06DED0u, 1);  /* 0C06DECE mov.l Rm,@(disp,Rn) */
	IF(0x0C06DED0u); { u32 t_ = r3; PR = 0x0C06DED4u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06DED4u); }  /* 0C06DED0 jsr @Rn */
L_0C06DED4: BLKS(0x0C06DED4u);
	r4 = r11;  /* 0C06DED4 mov Rm,Rn */
	r12 = R32(r8 + 0x28u); UPD(0x0C06DED8u, 2);  /* 0C06DED6 mov.l @(disp,Rm),Rn */
	r11 = 0xC0A0380u; UPD(0x0C06DEDAu, 1);  /* 0C06DED8 mov.l @(disp,pc),Rn */
	r12 += r0;  /* 0C06DEDA add Rm,Rn */
	r9 = R32(r8 + 0xCu); UPD(0x0C06DEDEu, 2);  /* 0C06DEDC mov.l @(disp,Rm),Rn */
	W32(r10 + 0x28u, r12); UPD(0x0C06DEE0u, 1);  /* 0C06DEDE mov.l Rm,@(disp,Rn) */
	IF(0x0C06DEE0u); { u32 t_ = r11; PR = 0x0C06DEE4u; W32(r10 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C06DEE4u); }  /* 0C06DEE0 jsr @Rn */
L_0C06DEE4: BLKS(0x0C06DEE4u);
	r0 = 0x9Au; UPD(0x0C06DEE6u, 1);  /* 0C06DEE4 mov.w @(disp,pc),Rn */
	IF(0x0C06DEE6u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06DEE8u, 1);  /* 0C06DEE6 mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C06DEE8 tst Rm,Rn */
	if (T) { UPD(0x0C06DF30u, 4); goto L_0C06DF30; }  /* 0C06DEEA bt */
L_0C06DEEC: BLKS(0x0C06DEECu);
	r12 = 0x0u;  /* 0C06DEEC mov #imm,Rn */
	IF(0x0C06DEEEu); W8(r0 + r8, r12); UPD(0x0C06DEF0u, 2);  /* 0C06DEEE mov.b Rm,@(r0,Rn) */
	r11 = 0xC0A9BB0u; UPD(0x0C06DEF2u, 1);  /* 0C06DEF0 mov.l @(disp,pc),Rn */
	r0 += 0xFu;  /* 0C06DEF2 add #imm,Rn */
	IF(0x0C06DEF4u); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C06DEF6u, 2);  /* 0C06DEF4 mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C06DEF8u, 1);  /* 0C06DEF6 mov.l @(disp,Rm),Rn */
	r6 = r1 & 0xFF;  /* 0C06DEF8 extu.b Rm,Rn */
	IF(0x0C06DEFAu); { u32 t_ = r11; PR = 0x0C06DEFEu; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C06DEFEu); }  /* 0C06DEFA jsr @Rn */
L_0C06DEFE: BLKS(0x0C06DEFEu);
	T = (r0 & r0) == 0;  /* 0C06DEFE tst Rm,Rn */
	if (T) { UPD(0x0C06DF30u, 4); goto L_0C06DF30; }  /* 0C06DF00 bt */
L_0C06DF02: BLKS(0x0C06DF02u);
	r11 = (u32)(s32)(s16)R16(r13); UPD(0x0C06DF04u, 1);  /* 0C06DF02 mov.w @Rm,Rn */
	r6 = 0xC058060u; UPD(0x0C06DF06u, 1);  /* 0C06DF04 mov.l @(disp,pc),Rn */
	r9 = 0xA0000u; UPD(0x0C06DF08u, 1);  /* 0C06DF06 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06DF08 mov Rm,Rn */
	IF(0x0C06DF0Au); { u32 t_ = r6; PR = 0x0C06DF0Eu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06DF0Eu); }  /* 0C06DF0A jsr @Rn */
L_0C06DF0E: BLKS(0x0C06DF0Eu);
	r7 = 0xC058030u; UPD(0x0C06DF10u, 1);  /* 0C06DF0E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06DF10 mov Rm,Rn */
	r13 = R32(r10 + 0x24u); UPD(0x0C06DF14u, 2);  /* 0C06DF12 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C06DF14 mov Rm,Rn */
	IF(0x0C06DF16u); { u32 t_ = r7; PR = 0x0C06DF1Au; r13 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06DF1Au); }  /* 0C06DF16 jsr @Rn */
L_0C06DF1A: BLKS(0x0C06DF1Au);
	r6 = R32(r10 + 0x28u); UPD(0x0C06DF1Cu, 1);  /* 0C06DF1A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06DF1C add #imm,Rn */
	r3 = 0x20000u; UPD(0x0C06DF20u, 2);  /* 0C06DF1E mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C06DF20 add Rm,Rn */
	r10 = 0xC0A81B0u; UPD(0x0C06DF24u, 2);  /* 0C06DF22 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C06DF24 mov #imm,Rn */
	W32(r15, r3); UPD(0x0C06DF28u, 2);  /* 0C06DF26 mov.l Rm,@Rn */
	r5 = r13;  /* 0C06DF28 mov Rm,Rn */
	IF(0x0C06DF2Au); { u32 t_ = r10; PR = 0x0C06DF2Eu; r7 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C06DF2Eu); }  /* 0C06DF2A jsr @Rn */
L_0C06DF2E: BLKS(0x0C06DF2Eu);
	r15 += 0x4u;  /* 0C06DF2E add #imm,Rn */
	UPD(0x0C06DF30u, 1);
L_0C06DF30: BLKS(0x0C06DF30u);
	{ IF(0x0C06DF32u); ; /* slot nop */ UPD(0x0C06DD38u, 3); goto L_0C06DD38; }  /* 0C06DF30 bra */
L_0C06DF40: BLKS(0x0C06DF40u);
	r8 = 0xC0A0540u; UPD(0x0C06DF42u, 1);  /* 0C06DF40 mov.l @(disp,pc),Rn */
	IF(0x0C06DF42u); { u32 t_ = r8; PR = 0x0C06DF46u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06DF46u); }  /* 0C06DF42 jsr @Rn */
L_0C06DF46: BLKS(0x0C06DF46u);
	IF(0x0C06DF46u); T = (s32)r0 >= 0;  /* 0C06DF46 cmp/pz Rn */
	if (!T) { UPD(0x0C06DFDCu, 4); goto L_0C06DFDC; }  /* 0C06DF48 bf */
L_0C06DF4A: BLKS(0x0C06DF4Au);
	r9 = 0xB4u; UPD(0x0C06DF4Cu, 1);  /* 0C06DF4A mov.w @(disp,pc),Rn */
	IF(0x0C06DF4Cu); MACL = r11 * r9;  /* 0C06DF4C mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C06DF50u, 3);  /* 0C06DF4E mov.l @(disp,pc),Rn */
	IF(0x0C06DF50u); r13 = MACL;  /* 0C06DF50 sts macl,Rn */
	r13 += r2;  /* 0C06DF52 add Rm,Rn */
	IF(0x0C06DF54u); MACL = r0 * r9;  /* 0C06DF54 mul.l Rm,Rn */
	r5 = R32(r13); UPD(0x0C06DF58u, 5);  /* 0C06DF56 mov.l @Rm,Rn */
	r6 = r13;  /* 0C06DF58 mov Rm,Rn */
	r8 = 0xFFFFFEFFu; UPD(0x0C06DF5Cu, 2);  /* 0C06DF5A mov.w @(disp,pc),Rn */
	r9 += 0x4Cu;  /* 0C06DF5C add #imm,Rn */
	r5 &= r8;  /* 0C06DF5E and Rm,Rn */
	IF(0x0C06DF60u); r8 = MACL;  /* 0C06DF60 sts macl,Rn */
	r8 += r2;  /* 0C06DF62 add Rm,Rn */
	r4 = 0x84u; UPD(0x0C06DF66u, 5);  /* 0C06DF64 mov.w @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C06DF68u, 1);  /* 0C06DF66 mov.l @Rm,Rn */
	r6 += r4;  /* 0C06DF68 add Rm,Rn */
	r0 &= r9;  /* 0C06DF6A and Rm,Rn */
	r4 += r8;  /* 0C06DF6C add Rm,Rn */
	r5 |= r0;  /* 0C06DF6E or Rm,Rn */
	r4 += 0x2u;  /* 0C06DF70 add #imm,Rn */
	r12 = 0xC058060u; UPD(0x0C06DF74u, 6);  /* 0C06DF72 mov.l @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C06DF74 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r4); UPD(0x0C06DF78u, 2);  /* 0C06DF76 mov.w @Rm,Rn */
	W32(r13, r5); UPD(0x0C06DF7Au, 1);  /* 0C06DF78 mov.l Rm,@Rn */
	r10 = r7;  /* 0C06DF7A mov Rm,Rn */
	r9 = 0xE0000u; UPD(0x0C06DF7Eu, 2);  /* 0C06DF7C mov.l @(disp,pc),Rn */
	r4 = r7;  /* 0C06DF7E mov Rm,Rn */
	W16(r6, r7); UPD(0x0C06DF82u, 2);  /* 0C06DF80 mov.w Rm,@Rn */
	IF(0x0C06DF82u); { u32 t_ = r12; PR = 0x0C06DF86u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06DF86u); }  /* 0C06DF82 jsr @Rn */
L_0C06DF86: BLKS(0x0C06DF86u);
	r5 = r9;  /* 0C06DF86 mov Rm,Rn */
	r3 = R32(r8 + 0x24u); UPD(0x0C06DF8Au, 2);  /* 0C06DF88 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C06DF8A mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C06DF8Eu, 2);  /* 0C06DF8C mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C06DF8E add Rm,Rn */
	IF(0x0C06DF90u); { u32 t_ = r9; PR = 0x0C06DF94u; W32(r13 + 0x24u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06DF94u); }  /* 0C06DF90 jsr @Rn */
L_0C06DF94: BLKS(0x0C06DF94u);
	r10 = R32(r8 + 0x28u); UPD(0x0C06DF96u, 1);  /* 0C06DF94 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C06DF96 mov Rm,Rn */
	r2 = 0xC0A0380u; UPD(0x0C06DF9Au, 2);  /* 0C06DF98 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C06DF9A add Rm,Rn */
	r12 = R32(r8 + 0xCu); UPD(0x0C06DF9Eu, 2);  /* 0C06DF9C mov.l @(disp,Rm),Rn */
	W32(r13 + 0x28u, r10); UPD(0x0C06DFA0u, 1);  /* 0C06DF9E mov.l Rm,@(disp,Rn) */
	IF(0x0C06DFA0u); { u32 t_ = r2; PR = 0x0C06DFA4u; W32(r13 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C06DFA4u); }  /* 0C06DFA0 jsr @Rn */
L_0C06DFA4: BLKS(0x0C06DFA4u);
	r4 = 0x98u; UPD(0x0C06DFA6u, 1);  /* 0C06DFA4 mov.w @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C06DFA6 mov #imm,Rn */
	r13 += r4;  /* 0C06DFA8 add Rm,Rn */
	r4 += r8;  /* 0C06DFAA add Rm,Rn */
	r4 += 0x2u;  /* 0C06DFAC add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C06DFB0u, 5);  /* 0C06DFAE mov.b @Rm,Rn */
	r13 += 0x2u;  /* 0C06DFB0 add #imm,Rn */
	W8(r13, r5); UPD(0x0C06DFB4u, 2);  /* 0C06DFB2 mov.b Rm,@Rn */
	W8(r4, r0); UPD(0x0C06DFB6u, 1);  /* 0C06DFB4 mov.b Rm,@Rn */
L_0C06DFB6: BLKS(0x0C06DFB6u);
	{ IF(0x0C06DFB8u); ; /* slot nop */ UPD(0x0C06DD38u, 3); goto L_0C06DD38; }  /* 0C06DFB6 bra */
L_0C06DFC0: BLKS(0x0C06DFC0u);
	r13 = 0xC0A0540u; UPD(0x0C06DFC2u, 1);  /* 0C06DFC0 mov.l @(disp,pc),Rn */
	IF(0x0C06DFC2u); { u32 t_ = r13; PR = 0x0C06DFC6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06DFC6u); }  /* 0C06DFC2 jsr @Rn */
L_0C06DFC6: BLKS(0x0C06DFC6u);
	IF(0x0C06DFC6u); T = (s32)r0 >= 0;  /* 0C06DFC6 cmp/pz Rn */
	if (!T) { UPD(0x0C06DFDCu, 4); goto L_0C06DFDC; }  /* 0C06DFC8 bf */
L_0C06DFCA: BLKS(0x0C06DFCAu);
	r1 = 0xB4u; UPD(0x0C06DFCCu, 1);  /* 0C06DFCA mov.w @(disp,pc),Rn */
	IF(0x0C06DFCCu); MACL = r0 * r1;  /* 0C06DFCC mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C06DFD0u, 3);  /* 0C06DFCE mov.l @(disp,pc),Rn */
	IF(0x0C06DFD0u); r3 = MACL;  /* 0C06DFD0 sts macl,Rn */
	r3 += r2;  /* 0C06DFD2 add Rm,Rn */
	r7 = R32(r3 + 0xCu); UPD(0x0C06DFD6u, 3);  /* 0C06DFD4 mov.l @(disp,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C06DFD6 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C06DFDAu); MACL = r11 * r1; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C06DFE0u, 5); goto L_0C06DFE0; } UPD(0x0C06DFDCu, 2); goto L_0C06DFDC; }  /* 0C06DFD8 bt/s */
L_0C06DFDC: BLKS(0x0C06DFDCu);
	{ IF(0x0C06DFDEu); ; /* slot nop */ UPD(0x0C06DDE0u, 3); goto L_0C06DDE0; }  /* 0C06DFDC bra */
L_0C06DFE0: BLKS(0x0C06DFE0u);
	r9 = 0x9Cu; UPD(0x0C06DFE2u, 1);  /* 0C06DFE0 mov.w @(disp,pc),Rn */
	IF(0x0C06DFE2u); r8 = MACL;  /* 0C06DFE2 sts macl,Rn */
	r8 += r2;  /* 0C06DFE4 add Rm,Rn */
	r12 = R32(r3 + 0x24u); UPD(0x0C06DFE8u, 3);  /* 0C06DFE6 mov.l @(disp,Rm),Rn */
	r9 += r8;  /* 0C06DFE8 add Rm,Rn */
	r10 = R32(r3 + 0x28u); UPD(0x0C06DFECu, 2);  /* 0C06DFEA mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x2Cu); UPD(0x0C06DFEEu, 1);  /* 0C06DFEC mov.l @(disp,Rm),Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C06DFF0u, 1);  /* 0C06DFEE mov.l @(disp,Rm),Rn */
	r12 += r6;  /* 0C06DFF0 add Rm,Rn */
	r10 += r1;  /* 0C06DFF2 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C06DFF6u, 3);  /* 0C06DFF4 mov.b @Rm,Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C06DFF8u, 1);  /* 0C06DFF6 mov.l Rm,@(disp,Rn) */
	T = (r3 & r3) == 0;  /* 0C06DFF8 tst Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x28u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06E070u, 4); goto L_0C06E070; } UPD(0x0C06DFFEu, 1); goto L_0C06DFFE; }  /* 0C06DFFA bt/s */
L_0C06DFFE: BLKS(0x0C06DFFEu);
	r2 = 0x98u; UPD(0x0C06E000u, 1);  /* 0C06DFFE mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C06E000 add Rm,Rn */
	r1 = r2;  /* 0C06E002 mov Rm,Rn */
	r1 += 0x1u;  /* 0C06E004 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r1); UPD(0x0C06E008u, 4);  /* 0C06E006 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C06E008 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C06E00A extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C06E00C cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r1, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06DFB6u, 6); goto L_0C06DFB6; } UPD(0x0C06E012u, 1); goto L_0C06E012; }  /* 0C06E00E bf/s */
L_0C06E012: BLKS(0x0C06E012u);
	r2 += 0x2u;  /* 0C06E012 add #imm,Rn */
	r12 = 0x1u;  /* 0C06E014 mov #imm,Rn */
	W8(r2, r12); UPD(0x0C06E018u, 3);  /* 0C06E016 mov.b Rm,@Rn */
	r2 = r3;  /* 0C06E018 mov Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C06E01A add #imm,Rn */
	W8(r9, r2); UPD(0x0C06E01Eu, 3);  /* 0C06E01C mov.b Rm,@Rn */
	r9 = r2 & 0xFF;  /* 0C06E01E extu.b Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C06E020 tst Rm,Rn */
	{ u32 c_ = !T; W8(r1, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06DFB6u, 5); goto L_0C06DFB6; } UPD(0x0C06E026u, 1); goto L_0C06E026; }  /* 0C06E022 bf/s */
L_0C06E026: BLKS(0x0C06E026u);
	r1 = 0xC0580D0u; UPD(0x0C06E028u, 1);  /* 0C06E026 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C06DDE4u, 3); goto L_0C06DDE4; }  /* 0C06E028 bra */
L_0C06E070: BLKS(0x0C06E070u);
	r10 = 0xC058130u; UPD(0x0C06E072u, 1);  /* 0C06E070 mov.l @(disp,pc),Rn */
	r13 = 0xC057430u; UPD(0x0C06E074u, 1);  /* 0C06E072 mov.l @(disp,pc),Rn */
	IF(0x0C06E074u); { u32 t_ = r10; PR = 0x0C06E078u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C06E078u); }  /* 0C06E074 jsr @Rn */
L_0C06E078: BLKS(0x0C06E078u);
	r4 = r11;  /* 0C06E078 mov Rm,Rn */
	IF(0x0C06E07Au); { u32 t_ = r13; PR = 0x0C06E07Eu; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C06E07Eu); }  /* 0C06E07A jsr @Rn */
L_0C06E07E: BLKS(0x0C06E07Eu);
	r5 = 0x86u; UPD(0x0C06E080u, 1);  /* 0C06E07E mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C06E080 mov Rm,Rn */
	IF(0x0C06E082u); r7 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C06E084u, 2);  /* 0C06E082 mov.w @(r0,Rm),Rn */
	r4 = 0x1Fu;  /* 0C06E084 mov #imm,Rn */
	r7 += 0x8u;  /* 0C06E086 add #imm,Rn */
	r3 = 0xC0A0380u; UPD(0x0C06E08Au, 3);  /* 0C06E088 mov.l @(disp,pc),Rn */
	IF(0x0C06E08Au); r7 >>= 2;  /* 0C06E08A shlr2 Rn */
	IF(0x0C06E08Cu); r7 >>= 2;  /* 0C06E08C shlr2 Rn */
	r7 &= r4;  /* 0C06E08E and Rm,Rn */
	r4 = r11;  /* 0C06E090 mov Rm,Rn */
	IF(0x0C06E092u); { u32 t_ = r3; PR = 0x0C06E096u; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 6); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C06E096u); }  /* 0C06E092 jsr @Rn */
L_0C06E096: BLKS(0x0C06E096u);
	r4 = r11;  /* 0C06E096 mov Rm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C06E09Au, 2);  /* 0C06E098 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C06E09A mov #imm,Rn */
	IF(0x0C06E09Cu); { u32 t_ = r11; PR = 0x0C06E0A0u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C06E0A0u); }  /* 0C06E09C jsr @Rn */
L_0C06E0A0: BLKS(0x0C06E0A0u);
	T = (r0 & r0) == 0;  /* 0C06E0A0 tst Rm,Rn */
	if (T) { UPD(0x0C06E0A8u, 4); goto L_0C06E0A8; }  /* 0C06E0A2 bt */
L_0C06E0A4: BLKS(0x0C06E0A4u);
	r0 = 0x8u;  /* 0C06E0A4 mov #imm,Rn */
	W8(r9, r0); UPD(0x0C06E0A8u, 2);  /* 0C06E0A6 mov.b Rm,@Rn */
L_0C06E0A8: BLKS(0x0C06E0A8u);
	{ IF(0x0C06E0AAu); ; /* slot nop */ UPD(0x0C06DD38u, 3); goto L_0C06DD38; }  /* 0C06E0A8 bra */
L_0C06E0B0: BLKS(0x0C06E0B0u);
	r13 = 0xC0A0540u; UPD(0x0C06E0B2u, 1);  /* 0C06E0B0 mov.l @(disp,pc),Rn */
	IF(0x0C06E0B2u); { u32 t_ = r13; PR = 0x0C06E0B6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06E0B6u); }  /* 0C06E0B2 jsr @Rn */
L_0C06E0B6: BLKS(0x0C06E0B6u);
	IF(0x0C06E0B6u); T = (s32)r0 >= 0;  /* 0C06E0B6 cmp/pz Rn */
	if (!T) { UPD(0x0C06E17Cu, 4); goto L_0C06E17C; }  /* 0C06E0B8 bf */
L_0C06E0BA: BLKS(0x0C06E0BAu);
	r2 = 0xB4u; UPD(0x0C06E0BCu, 1);  /* 0C06E0BA mov.w @(disp,pc),Rn */
	IF(0x0C06E0BCu); MACL = r0 * r2;  /* 0C06E0BC mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C06E0C0u, 3);  /* 0C06E0BE mov.l @(disp,pc),Rn */
	IF(0x0C06E0C0u); r3 = MACL;  /* 0C06E0C0 sts macl,Rn */
	r3 += r7;  /* 0C06E0C2 add Rm,Rn */
	r6 = R32(r3 + 0xCu); UPD(0x0C06E0C6u, 3);  /* 0C06E0C4 mov.l @(disp,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C06E0C6 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C06E0CAu); MACL = r11 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C06E17Cu, 5); goto L_0C06E17C; } goto L_0C06E0CC; }  /* 0C06E0C8 bf/s */
L_0C06E0CC: BLKS(0x0C06E0CCu);
	r4 = R32(r3 + 0x24u); UPD(0x0C06E0CEu, 3);  /* 0C06E0CC mov.l @(disp,Rm),Rn */
	IF(0x0C06E0CEu); r10 = MACL;  /* 0C06E0CE sts macl,Rn */
	r10 += r7;  /* 0C06E0D0 add Rm,Rn */
	r5 = R32(r10 + 0x2Cu); UPD(0x0C06E0D4u, 3);  /* 0C06E0D2 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C06E0D6u, 1);  /* 0C06E0D4 mov.l @(disp,Rm),Rn */
	r4 += r5;  /* 0C06E0D6 add Rm,Rn */
	r1 = R32(r10 + 0x30u); UPD(0x0C06E0DAu, 2);  /* 0C06E0D8 mov.l @(disp,Rm),Rn */
	r12 = 0xC058130u; UPD(0x0C06E0DCu, 1);  /* 0C06E0DA mov.l @(disp,pc),Rn */
	r7 += r1;  /* 0C06E0DC add Rm,Rn */
	W32(r10 + 0x24u, r4); UPD(0x0C06E0E0u, 2);  /* 0C06E0DE mov.l Rm,@(disp,Rn) */
	r8 = 0xC057430u; UPD(0x0C06E0E2u, 1);  /* 0C06E0E0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06E0E2 mov Rm,Rn */
	IF(0x0C06E0E4u); { u32 t_ = r12; PR = 0x0C06E0E8u; W32(r10 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C06E0E8u); }  /* 0C06E0E4 jsr @Rn */
L_0C06E0E8: BLKS(0x0C06E0E8u);
	r5 = 0x2u;  /* 0C06E0E8 mov #imm,Rn */
	IF(0x0C06E0EAu); { u32 t_ = r8; PR = 0x0C06E0EEu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C06E0EEu); }  /* 0C06E0EA jsr @Rn */
L_0C06E0EE: BLKS(0x0C06E0EEu);
	r8 = 0x86u; UPD(0x0C06E0F0u, 1);  /* 0C06E0EE mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C06E0F0 mov Rm,Rn */
	r8 += r10;  /* 0C06E0F2 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C06E0F6u, 3);  /* 0C06E0F4 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C06E0F6 add #imm,Rn */
	r3 = 0xC0A0380u; UPD(0x0C06E0FAu, 2);  /* 0C06E0F8 mov.l @(disp,pc),Rn */
	IF(0x0C06E0FAu); r0 >>= 2;  /* 0C06E0FA shlr2 Rn */
	IF(0x0C06E0FCu); r0 >>= 2;  /* 0C06E0FC shlr2 Rn */
	r9 = 0xC0A9E40u; UPD(0x0C06E100u, 3);  /* 0C06E0FE mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C06E100 and #imm,r0 */
	IF(0x0C06E102u); { u32 t_ = r3; PR = 0x0C06E106u; W32(r10 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C06E106u); }  /* 0C06E102 jsr @Rn */
L_0C06E106: BLKS(0x0C06E106u);
	r4 = r11;  /* 0C06E106 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C06E108 mov #imm,Rn */
	IF(0x0C06E10Au); { u32 t_ = r9; PR = 0x0C06E10Eu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C06E10Eu); }  /* 0C06E10A jsr @Rn */
L_0C06E10E: BLKS(0x0C06E10Eu);
	T = (r0 & r0) == 0;  /* 0C06E10E tst Rm,Rn */
	if (T) { UPD(0x0C06E0A8u, 4); goto L_0C06E0A8; }  /* 0C06E110 bt */
L_0C06E112: BLKS(0x0C06E112u);
	r0 = r10;  /* 0C06E112 mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C06E116u, 2);  /* 0C06E114 mov.w @(disp,pc),Rn */
	r13 = 0xC0A9BB0u; UPD(0x0C06E118u, 1);  /* 0C06E116 mov.l @(disp,pc),Rn */
	IF(0x0C06E118u); r2 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C06E11Au, 1);  /* 0C06E118 mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C06E11Cu, 1);  /* 0C06E11A mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C06E11C extu.b Rm,Rn */
	IF(0x0C06E11Eu); { u32 t_ = r13; PR = 0x0C06E122u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C06E122u); }  /* 0C06E11E jsr @Rn */
L_0C06E122: BLKS(0x0C06E122u);
	T = (r0 & r0) == 0;  /* 0C06E122 tst Rm,Rn */
	if (T) { UPD(0x0C06E0A8u, 4); goto L_0C06E0A8; }  /* 0C06E124 bt */
L_0C06E126: BLKS(0x0C06E126u);
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C06E128u, 1);  /* 0C06E126 mov.w @Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C06E12Au, 1);  /* 0C06E128 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C06E12A mov Rm,Rn */
	r9 = 0x80000u; UPD(0x0C06E12Eu, 2);  /* 0C06E12C mov.l @(disp,pc),Rn */
	IF(0x0C06E12Eu); { u32 t_ = r8; PR = 0x0C06E132u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06E132u); }  /* 0C06E12E jsr @Rn */
L_0C06E132: BLKS(0x0C06E132u);
	r5 = r9;  /* 0C06E132 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C06E136u, 2);  /* 0C06E134 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C06E136 mov Rm,Rn */
	r12 = R32(r10 + 0x24u); UPD(0x0C06E13Au, 2);  /* 0C06E138 mov.l @(disp,Rm),Rn */
	IF(0x0C06E13Au); { u32 t_ = r9; PR = 0x0C06E13Eu; r12 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06E13Eu); }  /* 0C06E13A jsr @Rn */
L_0C06E13E: BLKS(0x0C06E13Eu);
	r6 = R32(r10 + 0x28u); UPD(0x0C06E140u, 1);  /* 0C06E13E mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06E140 add #imm,Rn */
	r6 += r0;  /* 0C06E142 add Rm,Rn */
	r0 = 0x20000u; UPD(0x0C06E146u, 3);  /* 0C06E144 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C06E146 mov #imm,Rn */
	r10 = 0xC0A81B0u; UPD(0x0C06E14Au, 2);  /* 0C06E148 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C06E14A mov Rm,Rn */
	W32(r15, r0); UPD(0x0C06E14Eu, 2);  /* 0C06E14C mov.l Rm,@Rn */
	IF(0x0C06E14Eu); { u32 t_ = r10; PR = 0x0C06E152u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C06E152u); }  /* 0C06E14E jsr @Rn */
L_0C06E152: BLKS(0x0C06E152u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C06E026u, 3); goto L_0C06E026; }  /* 0C06E152 bra */
L_0C06E160: BLKS(0x0C06E160u);
	r10 = 0xC0A0540u; UPD(0x0C06E162u, 1);  /* 0C06E160 mov.l @(disp,pc),Rn */
	IF(0x0C06E162u); { u32 t_ = r10; PR = 0x0C06E166u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06E166u); }  /* 0C06E162 jsr @Rn */
L_0C06E166: BLKS(0x0C06E166u);
	IF(0x0C06E166u); T = (s32)r0 >= 0;  /* 0C06E166 cmp/pz Rn */
	if (!T) { UPD(0x0C06E17Cu, 4); goto L_0C06E17C; }  /* 0C06E168 bf */
L_0C06E16A: BLKS(0x0C06E16Au);
	r2 = 0xB4u; UPD(0x0C06E16Cu, 1);  /* 0C06E16A mov.w @(disp,pc),Rn */
	IF(0x0C06E16Cu); MACL = r0 * r2;  /* 0C06E16C mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C06E170u, 3);  /* 0C06E16E mov.l @(disp,pc),Rn */
	IF(0x0C06E170u); r7 = MACL;  /* 0C06E170 sts macl,Rn */
	r7 += r6;  /* 0C06E172 add Rm,Rn */
	r3 = R32(r7 + 0xCu); UPD(0x0C06E176u, 3);  /* 0C06E174 mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C06E176 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C06E17Au); MACL = r11 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C06E180u, 5); goto L_0C06E180; } UPD(0x0C06E17Cu, 2); goto L_0C06E17C; }  /* 0C06E178 bt/s */
L_0C06E17C: BLKS(0x0C06E17Cu);
	{ IF(0x0C06E17Eu); ; /* slot nop */ UPD(0x0C06DDE0u, 3); goto L_0C06DDE0; }  /* 0C06E17C bra */
L_0C06E180: BLKS(0x0C06E180u);
	r5 = R32(r7 + 0x24u); UPD(0x0C06E182u, 1);  /* 0C06E180 mov.l @(disp,Rm),Rn */
	r4 = R32(r7 + 0x28u); UPD(0x0C06E184u, 1);  /* 0C06E182 mov.l @(disp,Rm),Rn */
	IF(0x0C06E184u); r11 = MACL;  /* 0C06E184 sts macl,Rn */
	r11 += r6;  /* 0C06E186 add Rm,Rn */
	r1 = R32(r11 + 0x2Cu); UPD(0x0C06E18Au, 3);  /* 0C06E188 mov.l @(disp,Rm),Rn */
	r7 = R32(r11 + 0x30u); UPD(0x0C06E18Cu, 1);  /* 0C06E18A mov.l @(disp,Rm),Rn */
	r5 += r1;  /* 0C06E18C add Rm,Rn */
	r4 += r7;  /* 0C06E18E add Rm,Rn */
	W32(r11 + 0x24u, r5); UPD(0x0C06E192u, 3);  /* 0C06E190 mov.l Rm,@(disp,Rn) */
	{ W32(r11 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06DD38u, 3); goto L_0C06DD38; }  /* 0C06E192 bra */
}

void f_0C06E1D0(sh3_t *c)
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
	r4 = 0xC2859A0u; UPD(0x0C06E1E0u, 1);  /* 0C06E1DE mov.l @(disp,pc),Rn */
	IF(0x0C06E1E0u); r15 -= 4; W32(r15, PR); UPD(0x0C06E1E2u, 1);  /* 0C06E1E0 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C06E1E4u, 1);  /* 0C06E1E2 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C06E1E4 add #imm,Rn */
	r8 = 0xC283CA0u; UPD(0x0C06E1E8u, 2);  /* 0C06E1E6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06E1E8 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C06E1ECu, 2);  /* 0C06E1EA mov.w @Rm+,Rn */
	r7 = R32(r8); UPD(0x0C06E1EEu, 1);  /* 0C06E1EC mov.l @Rm,Rn */
	IF(0x0C06E1EEu); r0 <<= 2;  /* 0C06E1EE shll2 Rn */
	IF(0x0C06E1F0u); r6 = R32(r0 + r7); UPD(0x0C06E1F2u, 2);  /* 0C06E1F0 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r2 = v_; } UPD(0x0C06E1F4u, 1);  /* 0C06E1F2 mov.w @Rm+,Rn */
	r5 = 0xC27DC20u; UPD(0x0C06E1F6u, 1);  /* 0C06E1F4 mov.l @(disp,pc),Rn */
	r9 = 0xC22C874u; UPD(0x0C06E1F8u, 1);  /* 0C06E1F6 mov.l @(disp,pc),Rn */
	r8 = 0xC057A50u; UPD(0x0C06E1FAu, 1);  /* 0C06E1F8 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C06E1FCu, 1);  /* 0C06E1FA mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C06E1FEu, 1);  /* 0C06E1FC mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C06E200u, 1);  /* 0C06E1FE mov.w @Rm,Rn */
	r11 = 0xC28629Eu; UPD(0x0C06E202u, 1);  /* 0C06E200 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C06E202 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C06E206u, 2);  /* 0C06E204 mov.l @(disp,pc),Rn */
	IF(0x0C06E206u); { u32 t_ = r8; PR = 0x0C06E20Au; W16(r11, r2); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C06E20Au); }  /* 0C06E206 jsr @Rn */
L_0C06E20A: BLKS(0x0C06E20Au);
	T = (r0 & r0) == 0;  /* 0C06E20A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06E230u, 4); goto L_0C06E230; } UPD(0x0C06E210u, 1); goto L_0C06E210; }  /* 0C06E20C bf/s */
L_0C06E210: BLKS(0x0C06E210u);
	r14 += 0xCu;  /* 0C06E210 add #imm,Rn */
	UPD(0x0C06E212u, 1);
L_0C06E212: BLKS(0x0C06E212u);
	r15 = r14;  /* 0C06E212 mov Rm,Rn */
	IF(0x0C06E214u); PR = R32(r15); r15 += 4; UPD(0x0C06E216u, 2);  /* 0C06E214 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06E218u, 1);  /* 0C06E216 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06E21Au, 1);  /* 0C06E218 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06E21Cu, 1);  /* 0C06E21A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06E21Eu, 1);  /* 0C06E21C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06E220u, 1);  /* 0C06E21E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06E222u, 1);  /* 0C06E220 mov.l @Rm+,Rn */
	IF(0x0C06E222u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06E222 rts */
L_0C06E230: BLKS(0x0C06E230u);
	r10 = 0xC0606C0u; UPD(0x0C06E232u, 1);  /* 0C06E230 mov.l @(disp,pc),Rn */
	IF(0x0C06E232u); { u32 t_ = r10; PR = 0x0C06E236u; r4 = 0xDu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C06E236u); }  /* 0C06E232 jsr @Rn */
L_0C06E236: BLKS(0x0C06E236u);
	T = (r0 & r0) == 0;  /* 0C06E236 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06E210u, 4); goto L_0C06E210; } goto L_0C06E23C; }  /* 0C06E238 bt/s */
L_0C06E23C: BLKS(0x0C06E23Cu);
	r12 = 0xC2755BCu; UPD(0x0C06E23Eu, 2);  /* 0C06E23C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C06E240u, 1);  /* 0C06E23E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C06E242u, 1);  /* 0C06E240 mov.w @Rm+,Rn */
	IF(0x0C06E242u); MACL = r10 * r8;  /* 0C06E242 mul.l Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C06E246u, 3);  /* 0C06E244 mov.w @Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C06E248u, 1);  /* 0C06E246 mov.l @(disp,pc),Rn */
	IF(0x0C06E248u); r8 = MACL;  /* 0C06E248 sts macl,Rn */
	r8 += r4;  /* 0C06E24A add Rm,Rn */
	r0 = r3 & 0xFFFF;  /* 0C06E24C extu.w Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C06E250u, 4);  /* 0C06E24E mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C06E250 mov Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r11); UPD(0x0C06E254u, 2);  /* 0C06E252 mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C06E256u, 1);  /* 0C06E254 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C06E256 mov #imm,Rn */
	r7 = 0xC0A02D0u; UPD(0x0C06E25Au, 2);  /* 0C06E258 mov.l @(disp,pc),Rn */
	IF(0x0C06E25Au); W16(r0 + r8, r13); UPD(0x0C06E25Cu, 1);  /* 0C06E25A mov.w Rm,@(r0,Rn) */
	r6 = 0xD3000104u; UPD(0x0C06E25Eu, 1);  /* 0C06E25C mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C06E25E add #imm,Rn */
	W32(r8, r6); UPD(0x0C06E262u, 2);  /* 0C06E260 mov.l Rm,@Rn */
	IF(0x0C06E262u); W16(r0 + r8, r13); UPD(0x0C06E264u, 1);  /* 0C06E262 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0xCu, r11); UPD(0x0C06E266u, 1);  /* 0C06E264 mov.l Rm,@(disp,Rn) */
	IF(0x0C06E266u); { u32 t_ = r7; PR = 0x0C06E26Au; W32(r8 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C06E26Au); }  /* 0C06E266 jsr @Rn */
L_0C06E26A: BLKS(0x0C06E26Au);
	r9 = 0xC061380u; UPD(0x0C06E26Cu, 1);  /* 0C06E26A mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C06E26C mov Rm,Rn */
	r5 = 0x1600000u; UPD(0x0C06E270u, 2);  /* 0C06E26E mov.l @(disp,pc),Rn */
	IF(0x0C06E270u); { u32 t_ = r9; PR = 0x0C06E274u; W32(r8 + 0x24u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C061380, 0x0C061380u, 0x0C06E274u); }  /* 0C06E270 jsr @Rn */
L_0C06E274: BLKS(0x0C06E274u);
	r2 = 0xC0A1530u; UPD(0x0C06E276u, 1);  /* 0C06E274 mov.l @(disp,pc),Rn */
	r9 = 0x8Cu; UPD(0x0C06E278u, 1);  /* 0C06E276 mov.w @(disp,pc),Rn */
	IF(0x0C06E278u); { u32 t_ = r2; PR = 0x0C06E27Cu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C06E27Cu); }  /* 0C06E278 jsr @Rn */
L_0C06E27C: BLKS(0x0C06E27Cu);
	r0 = 0xADu; UPD(0x0C06E27Eu, 1);  /* 0C06E27C mov.w @(disp,pc),Rn */
	r4 = 0x13u;  /* 0C06E27E mov #imm,Rn */
	r3 = 0xA8u; UPD(0x0C06E282u, 2);  /* 0C06E280 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C06E282 add Rm,Rn */
	IF(0x0C06E284u); W8(r0 + r8, r4); UPD(0x0C06E286u, 2);  /* 0C06E284 mov.b Rm,@(r0,Rn) */
	r3 += r8;  /* 0C06E286 add Rm,Rn */
	r3 += 0x1u;  /* 0C06E288 add #imm,Rn */
	r0 = 0xC0A1780u; UPD(0x0C06E28Cu, 3);  /* 0C06E28A mov.l @(disp,pc),Rn */
	W8(r3, r4); UPD(0x0C06E28Eu, 1);  /* 0C06E28C mov.b Rm,@Rn */
	r6 = 0xC27DC20u; UPD(0x0C06E290u, 1);  /* 0C06E28E mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C06E290 mov Rm,Rn */
	r5 = R32(r6); UPD(0x0C06E294u, 2);  /* 0C06E292 mov.l @Rm,Rn */
	IF(0x0C06E294u); { u32 t_ = r0; PR = 0x0C06E298u; W32(r14 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C06E298u); }  /* 0C06E294 jsr @Rn */
L_0C06E298: BLKS(0x0C06E298u);
	r13 = 0x94u; UPD(0x0C06E29Au, 1);  /* 0C06E298 mov.w @(disp,pc),Rn */
	r0 = 0x90u; UPD(0x0C06E29Cu, 1);  /* 0C06E29A mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C06E29C add Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C06E2A0u, 2);  /* 0C06E29E mov.l @(disp,Rm),Rn */
	W32(r13, r11); UPD(0x0C06E2A2u, 1);  /* 0C06E2A0 mov.l Rm,@Rn */
	IF(0x0C06E2A2u); W32(r0 + r8, r11); UPD(0x0C06E2A4u, 1);  /* 0C06E2A2 mov.l Rm,@(r0,Rn) */
	r13 = r8;  /* 0C06E2A4 mov Rm,Rn */
	W32(r9, r11); UPD(0x0C06E2A8u, 2);  /* 0C06E2A6 mov.l Rm,@Rn */
	W32(r8 + 0x30u, r11); UPD(0x0C06E2AAu, 1);  /* 0C06E2A8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r11); UPD(0x0C06E2ACu, 1);  /* 0C06E2AA mov.l Rm,@(disp,Rn) */
	W32(r14, r11); UPD(0x0C06E2AEu, 1);  /* 0C06E2AC mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C06E2B0u, 1);  /* 0C06E2AE mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C06E2B0 mov #imm,Rn */
	IF(0x0C06E2B2u); ;  /* 0C06E2B2 nop */
	UPD(0x0C06E2B4u, 2);
L_0C06E2B4: BLKS(0x0C06E2B4u);
	r9 = 0xC179FBCu; UPD(0x0C06E2B6u, 1);  /* 0C06E2B4 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C06E2B8u, 1);  /* 0C06E2B6 mov.w @Rm+,Rn */
	r9 += r11;  /* 0C06E2B8 add Rm,Rn */
	r8 = 0xB4u; UPD(0x0C06E2BCu, 2);  /* 0C06E2BA mov.w @(disp,pc),Rn */
	r9 += 0x4u;  /* 0C06E2BC add #imm,Rn */
	IF(0x0C06E2BEu); MACL = r10 * r8;  /* 0C06E2BE mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C06E2C2u, 4);  /* 0C06E2C0 mov.w @Rm,Rn */
	r11 += 0x14u;  /* 0C06E2C2 add #imm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C06E2C6u, 2);  /* 0C06E2C4 mov.l @(disp,pc),Rn */
	IF(0x0C06E2C6u); r8 = MACL;  /* 0C06E2C6 sts macl,Rn */
	r0 = 0xC2755BCu; UPD(0x0C06E2CAu, 2);  /* 0C06E2C8 mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C06E2CA add Rm,Rn */
	IF(0x0C06E2CCu); r7 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C06E2CEu, 2);  /* 0C06E2CC mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C06E2CE add Rm,Rn */
	r8 += 0x7Cu;  /* 0C06E2D0 add #imm,Rn */
	W16(r8, r7); UPD(0x0C06E2D4u, 3);  /* 0C06E2D2 mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C06E2D4 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C06E2D8u, 2);  /* 0C06E2D6 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C06E2D8 add #imm,Rn */
	W16(r8, r5); UPD(0x0C06E2DCu, 2);  /* 0C06E2DA mov.w Rm,@Rn */
	r7 = 0x0u;  /* 0C06E2DC mov #imm,Rn */
	r3 = 0xC22C874u; UPD(0x0C06E2E0u, 2);  /* 0C06E2DE mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C06E2E0 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C06E2E4u, 2);  /* 0C06E2E2 mov.w @Rm,Rn */
	r2 = R32(r9); UPD(0x0C06E2E6u, 1);  /* 0C06E2E4 mov.l @Rm,Rn */
	r6 = r4 & 0xFFFF;  /* 0C06E2E6 extu.w Rm,Rn */
	W32(r8, r2); UPD(0x0C06E2EAu, 2);  /* 0C06E2E8 mov.l Rm,@Rn */
	r4 = r10;  /* 0C06E2EA mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C06E2EEu, 2);  /* 0C06E2EC mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A02D0u; UPD(0x0C06E2F0u, 1);  /* 0C06E2EE mov.l @(disp,pc),Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C06E2F2u, 1);  /* 0C06E2F0 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C06E2F4u, 1);  /* 0C06E2F2 mov.l Rm,@(disp,Rn) */
	IF(0x0C06E2F4u); { u32 t_ = r5; PR = 0x0C06E2F8u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C06E2F8u); }  /* 0C06E2F4 jsr @Rn */
L_0C06E2F8: BLKS(0x0C06E2F8u);
	r2 = 0xC28629Eu; UPD(0x0C06E2FAu, 1);  /* 0C06E2F8 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06E2FA mov Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C06E2FEu, 2);  /* 0C06E2FC mov.w @Rm,Rn */
	IF(0x0C06E2FEu); r3 >>= 2;  /* 0C06E2FE shlr2 Rn */
	r4 = 0x86u; UPD(0x0C06E302u, 2);  /* 0C06E300 mov.w @(disp,pc),Rn */
	IF(0x0C06E302u); r3 >>= 2;  /* 0C06E302 shlr2 Rn */
	IF(0x0C06E304u); r3 >>= 2;  /* 0C06E304 shlr2 Rn */
	IF(0x0C06E306u); W16(r0 + r4, r3); UPD(0x0C06E308u, 3);  /* 0C06E306 mov.w Rm,@(r0,Rn) */
	r6 = R32(r13 + 0x24u); UPD(0x0C06E30Au, 1);  /* 0C06E308 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C06E30A mov Rm,Rn */
	r0 = R32(r13 + 0x28u); UPD(0x0C06E30Eu, 2);  /* 0C06E30C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C06E310u, 1);  /* 0C06E30E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C06E312u, 1);  /* 0C06E310 mov.l Rm,@(disp,Rn) */
	r7 = R32(r9 + 0xCu); UPD(0x0C06E314u, 1);  /* 0C06E312 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C06E316u, 1);  /* 0C06E314 mov.l Rm,@(disp,Rn) */
	r5 = R32(r9 + 0x10u); UPD(0x0C06E318u, 1);  /* 0C06E316 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A1530u; UPD(0x0C06E31Au, 1);  /* 0C06E318 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r5); UPD(0x0C06E31Cu, 1);  /* 0C06E31A mov.l Rm,@(disp,Rn) */
	r2 = 0xFFFA0000u; UPD(0x0C06E31Eu, 1);  /* 0C06E31C mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C06E31E add #imm,Rn */
	IF(0x0C06E320u); { u32 t_ = r10; PR = 0x0C06E324u; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C06E324u); }  /* 0C06E320 jsr @Rn */
L_0C06E324: BLKS(0x0C06E324u);
	r0 = 0xB0u; UPD(0x0C06E326u, 1);  /* 0C06E324 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C06E326 add #imm,Rn */
	IF(0x0C06E328u); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C06E32Au, 2);  /* 0C06E328 mov.b @(r0,Rm),Rn */
	r10 = 0xBu;  /* 0C06E32A mov #imm,Rn */
	IF(0x0C06E32Cu); W8(r0 + r8, r3); UPD(0x0C06E32Eu, 2);  /* 0C06E32C mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C06E330u, 1);  /* 0C06E32E mov.w @(disp,pc),Rn */
	r7 = 0xACu; UPD(0x0C06E332u, 1);  /* 0C06E330 mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C06E332 add Rm,Rn */
	r8 += r7;  /* 0C06E334 add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C06E338u, 3);  /* 0C06E336 mov.l @(disp,Rm),Rn */
	r7 += r13;  /* 0C06E338 add Rm,Rn */
	r7 += 0x1u;  /* 0C06E33A add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C06E33Eu, 3);  /* 0C06E33C mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C06E33E add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C06E342u, 2);  /* 0C06E340 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C06E342 add #imm,Rn */
	W8(r0, r6); UPD(0x0C06E346u, 2);  /* 0C06E344 mov.b Rm,@Rn */
	W8(r8, r5); UPD(0x0C06E348u, 1);  /* 0C06E346 mov.b Rm,@Rn */
	r9 = R32(r14); UPD(0x0C06E34Au, 1);  /* 0C06E348 mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C06E34A add #imm,Rn */
	r2 = (u32)(s32)(s16)r9;  /* 0C06E34C exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C06E350u, 3);  /* 0C06E34E mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C06E352u, 1);  /* 0C06E350 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r10;  /* 0C06E352 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06E2B4u, 4); goto L_0C06E2B4; } goto L_0C06E358; }  /* 0C06E354 bf/s */
L_0C06E358: BLKS(0x0C06E358u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C06E212u, 4); goto L_0C06E212; }  /* 0C06E358 bra */
}

void f_0C06E3C0(sh3_t *c)
{
	LOCALS;
L_0C06E3C0: BLKS(0x0C06E3C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06E3C2u, 1);  /* 0C06E3C0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C06E3C2 exts.w Rm,Rn */
	r3 = 0xB4u; UPD(0x0C06E3C6u, 2);  /* 0C06E3C4 mov.w @(disp,pc),Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06E3C8u, 1);  /* 0C06E3C6 mov.l Rm,@-Rn */
	IF(0x0C06E3C8u); MACL = r4 * r3;  /* 0C06E3C8 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06E3CCu, 3);  /* 0C06E3CA mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C06E3CEu, 1);  /* 0C06E3CC mov.l @(disp,pc),Rn */
	IF(0x0C06E3CEu); r2 = MACL;  /* 0C06E3CE sts macl,Rn */
	IF(0x0C06E3D0u); r15 -= 4; W32(r15, PR); UPD(0x0C06E3D2u, 2);  /* 0C06E3D0 sts.l pr,@-Rn */
	r0 += r2;  /* 0C06E3D2 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C06E3D6u, 2);  /* 0C06E3D4 mov.l @(disp,Rm),Rn */
	r0 = 0x7u;  /* 0C06E3D6 mov #imm,Rn */
	T = r2 > r0;  /* 0C06E3D8 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06E450u, 5); goto L_0C06E450; } goto L_0C06E3DE; }  /* 0C06E3DA bt/s */
L_0C06E3DE: BLKS(0x0C06E3DEu);
	r0 = 0xC06E3F0u;  /* 0C06E3DE mova @(disp,pc),r0 */
	r2 += r2;  /* 0C06E3E0 add Rm,Rn */
	IF(0x0C06E3E2u); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06E3E4u, 4);  /* 0C06E3E2 mov.w @(r0,Rm),Rn */
	IF(0x0C06E3E4u); { u32 tv_ = (r5 + 0x0C06E3E8u); u32 t_ = PHYS(tv_); IF(0x0C06E3E6u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C06E400u: goto L_0C06E400; case 0x0C06E410u: goto L_0C06E410; case 0x0C06E460u: goto L_0C06E460; case 0x0C06E490u: goto L_0C06E490; case 0x0C06E4C0u: goto L_0C06E4C0; case 0x0C06E4F0u: goto L_0C06E4F0; case 0x0C06E520u: goto L_0C06E520; default: JUMPD(tv_); } }  /* 0C06E3E4 braf Rn */
L_0C06E400: BLKS(0x0C06E400u);
	r6 = 0xC0A14C0u; UPD(0x0C06E402u, 1);  /* 0C06E400 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C06E402 mov Rm,Rn */
	IF(0x0C06E404u); PR = R32(r15); r15 += 4; UPD(0x0C06E406u, 2);  /* 0C06E404 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06E408u, 1);  /* 0C06E406 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06E40Au, 1);  /* 0C06E408 mov.l @Rm+,Rn */
	IF(0x0C06E40Au); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A14C0u: TAIL(f_0C0A14C0); default: JUMPD(tv_); } }  /* 0C06E40A jmp @Rn */
L_0C06E410: BLKS(0x0C06E410u);
	r8 = 0xB4u; UPD(0x0C06E412u, 1);  /* 0C06E410 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06E412 add #imm,Rn */
	IF(0x0C06E414u); MACL = r4 * r8;  /* 0C06E414 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C06E418u, 4);  /* 0C06E416 mov.l @(disp,pc),Rn */
	IF(0x0C06E418u); r8 = MACL;  /* 0C06E418 sts macl,Rn */
	r8 += r0;  /* 0C06E41A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C06E41Eu, 3);  /* 0C06E41C mov.w @(disp,pc),Rn */
	IF(0x0C06E41Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E420u, 1);  /* 0C06E41E mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C06E420 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C06E424u, 2);  /* 0C06E422 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06E424 add #imm,Rn */
	IF(0x0C06E426u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E428u, 2);  /* 0C06E426 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C06E428 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C06E42A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C06E42Eu, 3);  /* 0C06E42C mov.l Rm,@(disp,Rn) */
	r9 = 0xC0AB240u; UPD(0x0C06E430u, 1);  /* 0C06E42E mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C06E432u, 1);  /* 0C06E430 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C06E434u, 1);  /* 0C06E432 mov.l @(disp,Rm),Rn */
	IF(0x0C06E434u); { u32 t_ = r9; PR = 0x0C06E438u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C06E438u); }  /* 0C06E434 jsr @Rn */
L_0C06E438: BLKS(0x0C06E438u);
	r4 = 0x20000u; UPD(0x0C06E43Au, 1);  /* 0C06E438 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C06E43A mov #imm,Rn */
	r0 = 0xC06CC20u; UPD(0x0C06E43Eu, 2);  /* 0C06E43C mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C06E43E mov #imm,Rn */
	W32(r15, r4); UPD(0x0C06E442u, 2);  /* 0C06E440 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C06E444u, 1);  /* 0C06E442 mov.l Rm,@(disp,Rn) */
	r4 = 0x3u;  /* 0C06E444 mov #imm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C06E448u, 2);  /* 0C06E446 mov.l @(disp,Rm),Rn */
	IF(0x0C06E448u); { u32 t_ = r0; PR = 0x0C06E44Cu; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C06E44Cu); }  /* 0C06E448 jsr @Rn */
L_0C06E44C: BLKS(0x0C06E44Cu);
	W32(r8, r9); UPD(0x0C06E44Eu, 1);  /* 0C06E44C mov.l Rm,@Rn */
L_0C06E44E: BLKS(0x0C06E44Eu);
	r15 += 0x8u;  /* 0C06E44E add #imm,Rn */
	UPD(0x0C06E450u, 1);
L_0C06E450: BLKS(0x0C06E450u);
	r15 = r14;  /* 0C06E450 mov Rm,Rn */
	IF(0x0C06E452u); PR = R32(r15); r15 += 4; UPD(0x0C06E454u, 2);  /* 0C06E452 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06E456u, 1);  /* 0C06E454 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06E458u, 1);  /* 0C06E456 mov.l @Rm+,Rn */
	IF(0x0C06E458u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06E458 rts */
L_0C06E460: BLKS(0x0C06E460u);
	r3 = 0xB4u; UPD(0x0C06E462u, 1);  /* 0C06E460 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06E462 add #imm,Rn */
	IF(0x0C06E464u); MACL = r4 * r3;  /* 0C06E464 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C06E468u, 4);  /* 0C06E466 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C06E468 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C06E46Cu, 2);  /* 0C06E46A mov.w @(disp,pc),Rn */
	IF(0x0C06E46Cu); r8 = MACL;  /* 0C06E46C sts macl,Rn */
	r8 += r2;  /* 0C06E46E add Rm,Rn */
	IF(0x0C06E470u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E472u, 3);  /* 0C06E470 mov.b @(r0,Rm),Rn */
	r9 = r7 & 0xFF;  /* 0C06E472 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C06E476u, 2);  /* 0C06E474 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06E476 add #imm,Rn */
	IF(0x0C06E478u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E47Au, 2);  /* 0C06E478 mov.b @(r0,Rm),Rn */
	r6 = r4 & 0xFF;  /* 0C06E47A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C06E47Eu, 2);  /* 0C06E47C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C06E480u, 1);  /* 0C06E47E mov.l @Rm,Rn */
L_0C06E480: BLKS(0x0C06E480u);
	r6 = R32(r8 + 0x24u); UPD(0x0C06E482u, 1);  /* 0C06E480 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C06E484u, 1);  /* 0C06E482 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AC800u; UPD(0x0C06E486u, 1);  /* 0C06E484 mov.l @(disp,pc),Rn */
L_0C06E486: BLKS(0x0C06E486u);
	IF(0x0C06E486u); { u32 t_ = r0; PR = 0x0C06E48Au; IF(0x0C06E488u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C06E48Au); }  /* 0C06E486 jsr @Rn */
L_0C06E48A: BLKS(0x0C06E48Au);
	r3 = 0x0u;  /* 0C06E48A mov #imm,Rn */
	{ W32(r8, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C06E44Eu, 4); goto L_0C06E44E; }  /* 0C06E48C bra */
L_0C06E490: BLKS(0x0C06E490u);
	r8 = 0xB4u; UPD(0x0C06E492u, 1);  /* 0C06E490 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06E492 add #imm,Rn */
	IF(0x0C06E494u); MACL = r4 * r8;  /* 0C06E494 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C06E498u, 4);  /* 0C06E496 mov.l @(disp,pc),Rn */
	IF(0x0C06E498u); r8 = MACL;  /* 0C06E498 sts macl,Rn */
	r8 += r0;  /* 0C06E49A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C06E49Eu, 3);  /* 0C06E49C mov.w @(disp,pc),Rn */
	IF(0x0C06E49Eu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E4A0u, 1);  /* 0C06E49E mov.b @(r0,Rm),Rn */
	r4 = r9 & 0xFF;  /* 0C06E4A0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C06E4A4u, 2);  /* 0C06E4A2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06E4A4 add #imm,Rn */
	IF(0x0C06E4A6u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E4A8u, 2);  /* 0C06E4A6 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C06E4A8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C06E4ACu, 2);  /* 0C06E4AA mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C06E4AEu, 1);  /* 0C06E4AC mov.l @Rm,Rn */
	{ r5 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C06E480u, 3); goto L_0C06E480; }  /* 0C06E4AE bra */
L_0C06E4C0: BLKS(0x0C06E4C0u);
	r9 = 0xB4u; UPD(0x0C06E4C2u, 1);  /* 0C06E4C0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06E4C2 add #imm,Rn */
	IF(0x0C06E4C4u); MACL = r4 * r9;  /* 0C06E4C4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C06E4C8u, 4);  /* 0C06E4C6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C06E4CAu, 1);  /* 0C06E4C8 mov.w @(disp,pc),Rn */
	IF(0x0C06E4CAu); r8 = MACL;  /* 0C06E4CA sts macl,Rn */
	r8 += r6;  /* 0C06E4CC add Rm,Rn */
	IF(0x0C06E4CEu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E4D0u, 3);  /* 0C06E4CE mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C06E4D0 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C06E4D4u, 2);  /* 0C06E4D2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06E4D4 add #imm,Rn */
	IF(0x0C06E4D6u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E4D8u, 2);  /* 0C06E4D6 mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C06E4D8 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C06E4DA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C06E4DEu, 3);  /* 0C06E4DC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C06E4E0u, 1);  /* 0C06E4DE mov.l @Rm,Rn */
L_0C06E4E0: BLKS(0x0C06E4E0u);
	r6 = R32(r8 + 0x24u); UPD(0x0C06E4E2u, 1);  /* 0C06E4E0 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C06E4E4u, 1);  /* 0C06E4E2 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C06E486u, 3); goto L_0C06E486; }  /* 0C06E4E4 bra */
L_0C06E4F0: BLKS(0x0C06E4F0u);
	r8 = 0xB4u; UPD(0x0C06E4F2u, 1);  /* 0C06E4F0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06E4F2 add #imm,Rn */
	IF(0x0C06E4F4u); MACL = r4 * r8;  /* 0C06E4F4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C06E4F8u, 4);  /* 0C06E4F6 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C06E4F8 mov #imm,Rn */
	IF(0x0C06E4FAu); r8 = MACL;  /* 0C06E4FA sts macl,Rn */
	r8 += r0;  /* 0C06E4FC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C06E500u, 4);  /* 0C06E4FE mov.w @(disp,pc),Rn */
	IF(0x0C06E500u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E502u, 1);  /* 0C06E500 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C06E502 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C06E506u, 2);  /* 0C06E504 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06E506 add #imm,Rn */
	IF(0x0C06E508u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E50Au, 2);  /* 0C06E508 mov.b @(r0,Rm),Rn */
	r4 = r7 & 0xFF;  /* 0C06E50A extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C06E50Eu, 2);  /* 0C06E50C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C06E4E0u, 3); goto L_0C06E4E0; }  /* 0C06E50E bra */
L_0C06E520: BLKS(0x0C06E520u);
	r2 = 0xB4u; UPD(0x0C06E522u, 1);  /* 0C06E520 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06E522 add #imm,Rn */
	IF(0x0C06E524u); MACL = r4 * r2;  /* 0C06E524 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C06E528u, 4);  /* 0C06E526 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C06E52Au, 1);  /* 0C06E528 mov.w @(disp,pc),Rn */
	IF(0x0C06E52Au); r8 = MACL;  /* 0C06E52A sts macl,Rn */
	r8 += r7;  /* 0C06E52C add Rm,Rn */
	IF(0x0C06E52Eu); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E530u, 3);  /* 0C06E52E mov.b @(r0,Rm),Rn */
	r9 = r4 & 0xFF;  /* 0C06E530 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C06E534u, 2);  /* 0C06E532 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06E534 add #imm,Rn */
	IF(0x0C06E536u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E538u, 2);  /* 0C06E536 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C06E538 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C06E53Cu, 2);  /* 0C06E53A mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C06E53Eu, 1);  /* 0C06E53C mov.l @Rm,Rn */
	{ r5 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C06E480u, 3); goto L_0C06E480; }  /* 0C06E53E bra */
}

void f_0C06E560(sh3_t *c)
{
	LOCALS;
	goto L_0C06E560;
L_0C06E3C0: BLKS(0x0C06E3C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06E3C2u, 1);  /* 0C06E3C0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C06E3C2 exts.w Rm,Rn */
	r3 = 0xB4u; UPD(0x0C06E3C6u, 2);  /* 0C06E3C4 mov.w @(disp,pc),Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06E3C8u, 1);  /* 0C06E3C6 mov.l Rm,@-Rn */
	IF(0x0C06E3C8u); MACL = r4 * r3;  /* 0C06E3C8 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06E3CCu, 3);  /* 0C06E3CA mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C06E3CEu, 1);  /* 0C06E3CC mov.l @(disp,pc),Rn */
	IF(0x0C06E3CEu); r2 = MACL;  /* 0C06E3CE sts macl,Rn */
	IF(0x0C06E3D0u); r15 -= 4; W32(r15, PR); UPD(0x0C06E3D2u, 2);  /* 0C06E3D0 sts.l pr,@-Rn */
	r0 += r2;  /* 0C06E3D2 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C06E3D6u, 2);  /* 0C06E3D4 mov.l @(disp,Rm),Rn */
	r0 = 0x7u;  /* 0C06E3D6 mov #imm,Rn */
	T = r2 > r0;  /* 0C06E3D8 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06E450u, 5); goto L_0C06E450; } goto L_0C06E3DE; }  /* 0C06E3DA bt/s */
L_0C06E3DE: BLKS(0x0C06E3DEu);
	r0 = 0xC06E3F0u;  /* 0C06E3DE mova @(disp,pc),r0 */
	r2 += r2;  /* 0C06E3E0 add Rm,Rn */
	IF(0x0C06E3E2u); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06E3E4u, 4);  /* 0C06E3E2 mov.w @(r0,Rm),Rn */
	IF(0x0C06E3E4u); { u32 tv_ = (r5 + 0x0C06E3E8u); u32 t_ = PHYS(tv_); IF(0x0C06E3E6u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C06E400u: goto L_0C06E400; case 0x0C06E410u: goto L_0C06E410; case 0x0C06E460u: goto L_0C06E460; case 0x0C06E490u: goto L_0C06E490; case 0x0C06E4C0u: goto L_0C06E4C0; case 0x0C06E4F0u: goto L_0C06E4F0; case 0x0C06E520u: goto L_0C06E520; default: JUMPD(tv_); } }  /* 0C06E3E4 braf Rn */
L_0C06E400: BLKS(0x0C06E400u);
	r6 = 0xC0A14C0u; UPD(0x0C06E402u, 1);  /* 0C06E400 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C06E402 mov Rm,Rn */
	IF(0x0C06E404u); PR = R32(r15); r15 += 4; UPD(0x0C06E406u, 2);  /* 0C06E404 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06E408u, 1);  /* 0C06E406 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06E40Au, 1);  /* 0C06E408 mov.l @Rm+,Rn */
	IF(0x0C06E40Au); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A14C0u: TAIL(f_0C0A14C0); default: JUMPD(tv_); } }  /* 0C06E40A jmp @Rn */
L_0C06E410: BLKS(0x0C06E410u);
	r8 = 0xB4u; UPD(0x0C06E412u, 1);  /* 0C06E410 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06E412 add #imm,Rn */
	IF(0x0C06E414u); MACL = r4 * r8;  /* 0C06E414 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C06E418u, 4);  /* 0C06E416 mov.l @(disp,pc),Rn */
	IF(0x0C06E418u); r8 = MACL;  /* 0C06E418 sts macl,Rn */
	r8 += r0;  /* 0C06E41A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C06E41Eu, 3);  /* 0C06E41C mov.w @(disp,pc),Rn */
	IF(0x0C06E41Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E420u, 1);  /* 0C06E41E mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C06E420 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C06E424u, 2);  /* 0C06E422 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06E424 add #imm,Rn */
	IF(0x0C06E426u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E428u, 2);  /* 0C06E426 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C06E428 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C06E42A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C06E42Eu, 3);  /* 0C06E42C mov.l Rm,@(disp,Rn) */
	r9 = 0xC0AB240u; UPD(0x0C06E430u, 1);  /* 0C06E42E mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C06E432u, 1);  /* 0C06E430 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C06E434u, 1);  /* 0C06E432 mov.l @(disp,Rm),Rn */
	IF(0x0C06E434u); { u32 t_ = r9; PR = 0x0C06E438u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C06E438u); }  /* 0C06E434 jsr @Rn */
L_0C06E438: BLKS(0x0C06E438u);
	r4 = 0x20000u; UPD(0x0C06E43Au, 1);  /* 0C06E438 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C06E43A mov #imm,Rn */
	r0 = 0xC06CC20u; UPD(0x0C06E43Eu, 2);  /* 0C06E43C mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C06E43E mov #imm,Rn */
	W32(r15, r4); UPD(0x0C06E442u, 2);  /* 0C06E440 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C06E444u, 1);  /* 0C06E442 mov.l Rm,@(disp,Rn) */
	r4 = 0x3u;  /* 0C06E444 mov #imm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C06E448u, 2);  /* 0C06E446 mov.l @(disp,Rm),Rn */
	IF(0x0C06E448u); { u32 t_ = r0; PR = 0x0C06E44Cu; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C06E44Cu); }  /* 0C06E448 jsr @Rn */
L_0C06E44C: BLKS(0x0C06E44Cu);
	W32(r8, r9); UPD(0x0C06E44Eu, 1);  /* 0C06E44C mov.l Rm,@Rn */
L_0C06E44E: BLKS(0x0C06E44Eu);
	r15 += 0x8u;  /* 0C06E44E add #imm,Rn */
	UPD(0x0C06E450u, 1);
L_0C06E450: BLKS(0x0C06E450u);
	r15 = r14;  /* 0C06E450 mov Rm,Rn */
	IF(0x0C06E452u); PR = R32(r15); r15 += 4; UPD(0x0C06E454u, 2);  /* 0C06E452 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06E456u, 1);  /* 0C06E454 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06E458u, 1);  /* 0C06E456 mov.l @Rm+,Rn */
	IF(0x0C06E458u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06E458 rts */
L_0C06E460: BLKS(0x0C06E460u);
	r3 = 0xB4u; UPD(0x0C06E462u, 1);  /* 0C06E460 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06E462 add #imm,Rn */
	IF(0x0C06E464u); MACL = r4 * r3;  /* 0C06E464 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C06E468u, 4);  /* 0C06E466 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C06E468 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C06E46Cu, 2);  /* 0C06E46A mov.w @(disp,pc),Rn */
	IF(0x0C06E46Cu); r8 = MACL;  /* 0C06E46C sts macl,Rn */
	r8 += r2;  /* 0C06E46E add Rm,Rn */
	IF(0x0C06E470u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E472u, 3);  /* 0C06E470 mov.b @(r0,Rm),Rn */
	r9 = r7 & 0xFF;  /* 0C06E472 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C06E476u, 2);  /* 0C06E474 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06E476 add #imm,Rn */
	IF(0x0C06E478u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E47Au, 2);  /* 0C06E478 mov.b @(r0,Rm),Rn */
	r6 = r4 & 0xFF;  /* 0C06E47A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C06E47Eu, 2);  /* 0C06E47C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C06E480u, 1);  /* 0C06E47E mov.l @Rm,Rn */
L_0C06E480: BLKS(0x0C06E480u);
	r6 = R32(r8 + 0x24u); UPD(0x0C06E482u, 1);  /* 0C06E480 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C06E484u, 1);  /* 0C06E482 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AC800u; UPD(0x0C06E486u, 1);  /* 0C06E484 mov.l @(disp,pc),Rn */
L_0C06E486: BLKS(0x0C06E486u);
	IF(0x0C06E486u); { u32 t_ = r0; PR = 0x0C06E48Au; IF(0x0C06E488u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C06E48Au); }  /* 0C06E486 jsr @Rn */
L_0C06E48A: BLKS(0x0C06E48Au);
	r3 = 0x0u;  /* 0C06E48A mov #imm,Rn */
	{ W32(r8, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C06E44Eu, 4); goto L_0C06E44E; }  /* 0C06E48C bra */
L_0C06E490: BLKS(0x0C06E490u);
	r8 = 0xB4u; UPD(0x0C06E492u, 1);  /* 0C06E490 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06E492 add #imm,Rn */
	IF(0x0C06E494u); MACL = r4 * r8;  /* 0C06E494 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C06E498u, 4);  /* 0C06E496 mov.l @(disp,pc),Rn */
	IF(0x0C06E498u); r8 = MACL;  /* 0C06E498 sts macl,Rn */
	r8 += r0;  /* 0C06E49A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C06E49Eu, 3);  /* 0C06E49C mov.w @(disp,pc),Rn */
	IF(0x0C06E49Eu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E4A0u, 1);  /* 0C06E49E mov.b @(r0,Rm),Rn */
	r4 = r9 & 0xFF;  /* 0C06E4A0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C06E4A4u, 2);  /* 0C06E4A2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06E4A4 add #imm,Rn */
	IF(0x0C06E4A6u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E4A8u, 2);  /* 0C06E4A6 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C06E4A8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C06E4ACu, 2);  /* 0C06E4AA mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C06E4AEu, 1);  /* 0C06E4AC mov.l @Rm,Rn */
	{ r5 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C06E480u, 3); goto L_0C06E480; }  /* 0C06E4AE bra */
L_0C06E4C0: BLKS(0x0C06E4C0u);
	r9 = 0xB4u; UPD(0x0C06E4C2u, 1);  /* 0C06E4C0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06E4C2 add #imm,Rn */
	IF(0x0C06E4C4u); MACL = r4 * r9;  /* 0C06E4C4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C06E4C8u, 4);  /* 0C06E4C6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C06E4CAu, 1);  /* 0C06E4C8 mov.w @(disp,pc),Rn */
	IF(0x0C06E4CAu); r8 = MACL;  /* 0C06E4CA sts macl,Rn */
	r8 += r6;  /* 0C06E4CC add Rm,Rn */
	IF(0x0C06E4CEu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E4D0u, 3);  /* 0C06E4CE mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C06E4D0 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C06E4D4u, 2);  /* 0C06E4D2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06E4D4 add #imm,Rn */
	IF(0x0C06E4D6u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E4D8u, 2);  /* 0C06E4D6 mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C06E4D8 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C06E4DA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C06E4DEu, 3);  /* 0C06E4DC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C06E4E0u, 1);  /* 0C06E4DE mov.l @Rm,Rn */
L_0C06E4E0: BLKS(0x0C06E4E0u);
	r6 = R32(r8 + 0x24u); UPD(0x0C06E4E2u, 1);  /* 0C06E4E0 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C06E4E4u, 1);  /* 0C06E4E2 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C06E486u, 3); goto L_0C06E486; }  /* 0C06E4E4 bra */
L_0C06E4F0: BLKS(0x0C06E4F0u);
	r8 = 0xB4u; UPD(0x0C06E4F2u, 1);  /* 0C06E4F0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06E4F2 add #imm,Rn */
	IF(0x0C06E4F4u); MACL = r4 * r8;  /* 0C06E4F4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C06E4F8u, 4);  /* 0C06E4F6 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C06E4F8 mov #imm,Rn */
	IF(0x0C06E4FAu); r8 = MACL;  /* 0C06E4FA sts macl,Rn */
	r8 += r0;  /* 0C06E4FC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C06E500u, 4);  /* 0C06E4FE mov.w @(disp,pc),Rn */
	IF(0x0C06E500u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E502u, 1);  /* 0C06E500 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C06E502 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C06E506u, 2);  /* 0C06E504 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06E506 add #imm,Rn */
	IF(0x0C06E508u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E50Au, 2);  /* 0C06E508 mov.b @(r0,Rm),Rn */
	r4 = r7 & 0xFF;  /* 0C06E50A extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C06E50Eu, 2);  /* 0C06E50C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C06E4E0u, 3); goto L_0C06E4E0; }  /* 0C06E50E bra */
L_0C06E520: BLKS(0x0C06E520u);
	r2 = 0xB4u; UPD(0x0C06E522u, 1);  /* 0C06E520 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06E522 add #imm,Rn */
	IF(0x0C06E524u); MACL = r4 * r2;  /* 0C06E524 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C06E528u, 4);  /* 0C06E526 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C06E52Au, 1);  /* 0C06E528 mov.w @(disp,pc),Rn */
	IF(0x0C06E52Au); r8 = MACL;  /* 0C06E52A sts macl,Rn */
	r8 += r7;  /* 0C06E52C add Rm,Rn */
	IF(0x0C06E52Eu); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E530u, 3);  /* 0C06E52E mov.b @(r0,Rm),Rn */
	r9 = r4 & 0xFF;  /* 0C06E530 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C06E534u, 2);  /* 0C06E532 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06E534 add #imm,Rn */
	IF(0x0C06E536u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06E538u, 2);  /* 0C06E536 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C06E538 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C06E53Cu, 2);  /* 0C06E53A mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C06E53Eu, 1);  /* 0C06E53C mov.l @Rm,Rn */
	{ r5 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C06E480u, 3); goto L_0C06E480; }  /* 0C06E53E bra */
L_0C06E560: BLKS(0x0C06E560u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06E562u, 1);  /* 0C06E560 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06E564u, 1);  /* 0C06E562 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06E566u, 1);  /* 0C06E564 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06E568u, 1);  /* 0C06E566 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06E56Au, 1);  /* 0C06E568 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C06E56A exts.w Rm,Rn */
	r3 = 0xB4u; UPD(0x0C06E56Eu, 2);  /* 0C06E56C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06E570u, 1);  /* 0C06E56E mov.l Rm,@-Rn */
	IF(0x0C06E570u); MACL = r11 * r3;  /* 0C06E570 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06E574u, 3);  /* 0C06E572 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C06E576u, 1);  /* 0C06E574 mov.l @(disp,pc),Rn */
	IF(0x0C06E576u); r2 = MACL;  /* 0C06E576 sts macl,Rn */
	IF(0x0C06E578u); r15 -= 4; W32(r15, PR); UPD(0x0C06E57Au, 2);  /* 0C06E578 sts.l pr,@-Rn */
	r0 += r2;  /* 0C06E57A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C06E57Eu, 2);  /* 0C06E57C mov.l @(disp,Rm),Rn */
	r0 = 0x7u;  /* 0C06E57E mov #imm,Rn */
	T = r2 > r0;  /* 0C06E580 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06E600u, 5); goto L_0C06E600; } goto L_0C06E586; }  /* 0C06E582 bt/s */
L_0C06E586: BLKS(0x0C06E586u);
	r0 = 0xC06E598u;  /* 0C06E586 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C06E588 add Rm,Rn */
	IF(0x0C06E58Au); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06E58Cu, 4);  /* 0C06E58A mov.w @(r0,Rm),Rn */
	IF(0x0C06E58Cu); { u32 tv_ = (r4 + 0x0C06E590u); u32 t_ = PHYS(tv_); IF(0x0C06E58Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C06E5B0u: goto L_0C06E5B0; case 0x0C06E5D0u: goto L_0C06E5D0; case 0x0C06E630u: goto L_0C06E630; case 0x0C06E670u: goto L_0C06E670; case 0x0C06E6C0u: goto L_0C06E6C0; case 0x0C06E760u: goto L_0C06E760; case 0x0C06E820u: goto L_0C06E820; default: JUMPD(tv_); } }  /* 0C06E58C braf Rn */
L_0C06E5B0: BLKS(0x0C06E5B0u);
	r8 = 0xC0A1700u; UPD(0x0C06E5B2u, 1);  /* 0C06E5B0 mov.l @(disp,pc),Rn */
	IF(0x0C06E5B2u); { u32 t_ = r8; PR = 0x0C06E5B6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C06E5B6u); }  /* 0C06E5B2 jsr @Rn */
L_0C06E5B6: BLKS(0x0C06E5B6u);
	r1 = 0xC0A1590u; UPD(0x0C06E5B8u, 1);  /* 0C06E5B6 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06E5B8 mov Rm,Rn */
	UPD(0x0C06E5BAu, 1);
L_0C06E5BA: BLKS(0x0C06E5BAu);
	r15 = r14;  /* 0C06E5BA mov Rm,Rn */
	IF(0x0C06E5BCu); PR = R32(r15); r15 += 4; UPD(0x0C06E5BEu, 2);  /* 0C06E5BC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06E5C0u, 1);  /* 0C06E5BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06E5C2u, 1);  /* 0C06E5C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06E5C4u, 1);  /* 0C06E5C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06E5C6u, 1);  /* 0C06E5C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06E5C8u, 1);  /* 0C06E5C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06E5CAu, 1);  /* 0C06E5C8 mov.l @Rm+,Rn */
	IF(0x0C06E5CAu); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06E3C0u: goto L_0C06E3C0; case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C06E5CA jmp @Rn */
L_0C06E5D0: BLKS(0x0C06E5D0u);
	r9 = 0xC0A0540u; UPD(0x0C06E5D2u, 1);  /* 0C06E5D0 mov.l @(disp,pc),Rn */
	IF(0x0C06E5D2u); { u32 t_ = r9; PR = 0x0C06E5D6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06E5D6u); }  /* 0C06E5D2 jsr @Rn */
L_0C06E5D6: BLKS(0x0C06E5D6u);
	IF(0x0C06E5D6u); T = (s32)r0 >= 0;  /* 0C06E5D6 cmp/pz Rn */
	if (!T) { UPD(0x0C06E620u, 4); goto L_0C06E620; }  /* 0C06E5D8 bf */
L_0C06E5DA: BLKS(0x0C06E5DAu);
	r2 = 0xB4u; UPD(0x0C06E5DCu, 1);  /* 0C06E5DA mov.w @(disp,pc),Rn */
	IF(0x0C06E5DCu); MACL = r0 * r2;  /* 0C06E5DC mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C06E5E0u, 3);  /* 0C06E5DE mov.l @(disp,pc),Rn */
	IF(0x0C06E5E0u); r7 = MACL;  /* 0C06E5E0 sts macl,Rn */
	r7 += r6;  /* 0C06E5E2 add Rm,Rn */
	r5 = R32(r7 + 0xCu); UPD(0x0C06E5E6u, 3);  /* 0C06E5E4 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C06E5E6 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C06E5EAu); MACL = r11 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C06E620u, 5); goto L_0C06E620; } goto L_0C06E5EC; }  /* 0C06E5E8 bf/s */
L_0C06E5EC: BLKS(0x0C06E5ECu);
	IF(0x0C06E5ECu); r10 = MACL;  /* 0C06E5EC sts macl,Rn */
	r10 += r6;  /* 0C06E5EE add Rm,Rn */
	r11 = R32(r7 + 0x24u); UPD(0x0C06E5F2u, 5);  /* 0C06E5F0 mov.l @(disp,Rm),Rn */
	r6 = R32(r7 + 0x28u); UPD(0x0C06E5F4u, 1);  /* 0C06E5F2 mov.l @(disp,Rm),Rn */
	r12 = R32(r10 + 0x2Cu); UPD(0x0C06E5F6u, 1);  /* 0C06E5F4 mov.l @(disp,Rm),Rn */
	r1 = R32(r10 + 0x30u); UPD(0x0C06E5F8u, 1);  /* 0C06E5F6 mov.l @(disp,Rm),Rn */
	r11 += r12;  /* 0C06E5F8 add Rm,Rn */
	r6 += r1;  /* 0C06E5FA add Rm,Rn */
	W32(r10 + 0x24u, r11); UPD(0x0C06E5FEu, 3);  /* 0C06E5FC mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x28u, r6); UPD(0x0C06E600u, 1);  /* 0C06E5FE mov.l Rm,@(disp,Rn) */
L_0C06E600: BLKS(0x0C06E600u);
	r15 = r14;  /* 0C06E600 mov Rm,Rn */
	IF(0x0C06E602u); PR = R32(r15); r15 += 4; UPD(0x0C06E604u, 2);  /* 0C06E602 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06E606u, 1);  /* 0C06E604 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06E608u, 1);  /* 0C06E606 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06E60Au, 1);  /* 0C06E608 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06E60Cu, 1);  /* 0C06E60A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06E60Eu, 1);  /* 0C06E60C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06E610u, 1);  /* 0C06E60E mov.l @Rm+,Rn */
	IF(0x0C06E610u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06E610 rts */
L_0C06E620: BLKS(0x0C06E620u);
	r1 = 0xC06E3C0u; UPD(0x0C06E622u, 1);  /* 0C06E620 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C06E5BAu, 3); goto L_0C06E5BA; }  /* 0C06E622 bra */
L_0C06E630: BLKS(0x0C06E630u);
	r13 = 0xC0A0540u; UPD(0x0C06E632u, 1);  /* 0C06E630 mov.l @(disp,pc),Rn */
	IF(0x0C06E632u); { u32 t_ = r13; PR = 0x0C06E636u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06E636u); }  /* 0C06E632 jsr @Rn */
L_0C06E636: BLKS(0x0C06E636u);
	IF(0x0C06E636u); T = (s32)r0 >= 0;  /* 0C06E636 cmp/pz Rn */
	if (!T) { UPD(0x0C06E620u, 4); goto L_0C06E620; }  /* 0C06E638 bf */
L_0C06E63A: BLKS(0x0C06E63Au);
	r2 = 0xB4u; UPD(0x0C06E63Cu, 1);  /* 0C06E63A mov.w @(disp,pc),Rn */
	IF(0x0C06E63Cu); MACL = r0 * r2;  /* 0C06E63C mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C06E640u, 3);  /* 0C06E63E mov.l @(disp,pc),Rn */
	IF(0x0C06E640u); r7 = MACL;  /* 0C06E640 sts macl,Rn */
	r7 += r6;  /* 0C06E642 add Rm,Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C06E646u, 3);  /* 0C06E644 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C06E646 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C06E64Au); MACL = r11 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C06E620u, 5); goto L_0C06E620; } goto L_0C06E64C; }  /* 0C06E648 bf/s */
L_0C06E64C: BLKS(0x0C06E64Cu);
	r8 = R32(r7 + 0x24u); UPD(0x0C06E64Eu, 3);  /* 0C06E64C mov.l @(disp,Rm),Rn */
	IF(0x0C06E64Eu); r4 = MACL;  /* 0C06E64E sts macl,Rn */
	r4 += r6;  /* 0C06E650 add Rm,Rn */
	r3 = R32(r7 + 0x28u); UPD(0x0C06E654u, 3);  /* 0C06E652 mov.l @(disp,Rm),Rn */
	r0 = R32(r4 + 0xCu); UPD(0x0C06E656u, 1);  /* 0C06E654 mov.l @(disp,Rm),Rn */
	r9 = R32(r4 + 0x2Cu); UPD(0x0C06E658u, 1);  /* 0C06E656 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C06E658 add #imm,Rn */
	r7 = R32(r4 + 0x30u); UPD(0x0C06E65Cu, 2);  /* 0C06E65A mov.l @(disp,Rm),Rn */
	r8 += r9;  /* 0C06E65C add Rm,Rn */
	r3 += r7;  /* 0C06E65E add Rm,Rn */
	r0 &= 0x7u;  /* 0C06E660 and #imm,r0 */
	W32(r4 + 0x24u, r8); UPD(0x0C06E664u, 4);  /* 0C06E662 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x28u, r3); UPD(0x0C06E666u, 1);  /* 0C06E664 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0xCu, r0); UPD(0x0C06E668u, 1);  /* 0C06E666 mov.l Rm,@(disp,Rn) */
L_0C06E668: BLKS(0x0C06E668u);
	r1 = 0xC0A0380u; UPD(0x0C06E66Au, 1);  /* 0C06E668 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C06E5BAu, 3); goto L_0C06E5BA; }  /* 0C06E66A bra */
L_0C06E670: BLKS(0x0C06E670u);
	r10 = 0xC0A0540u; UPD(0x0C06E672u, 1);  /* 0C06E670 mov.l @(disp,pc),Rn */
	IF(0x0C06E672u); { u32 t_ = r10; PR = 0x0C06E676u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06E676u); }  /* 0C06E672 jsr @Rn */
L_0C06E676: BLKS(0x0C06E676u);
	IF(0x0C06E676u); T = (s32)r0 >= 0;  /* 0C06E676 cmp/pz Rn */
	if (!T) { UPD(0x0C06E620u, 4); goto L_0C06E620; }  /* 0C06E678 bf */
L_0C06E67A: BLKS(0x0C06E67Au);
	r10 = 0xB4u; UPD(0x0C06E67Cu, 1);  /* 0C06E67A mov.w @(disp,pc),Rn */
	IF(0x0C06E67Cu); MACL = r11 * r10;  /* 0C06E67C mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C06E680u, 3);  /* 0C06E67E mov.l @(disp,pc),Rn */
	IF(0x0C06E680u); r12 = MACL;  /* 0C06E680 sts macl,Rn */
	IF(0x0C06E682u); MACL = r0 * r10;  /* 0C06E682 mul.l Rm,Rn */
	r12 += r9;  /* 0C06E684 add Rm,Rn */
	r7 = R32(r12 + 0x2Cu); UPD(0x0C06E688u, 5);  /* 0C06E686 mov.l @(disp,Rm),Rn */
	IF(0x0C06E688u); r4 = MACL;  /* 0C06E688 sts macl,Rn */
	r4 += r9;  /* 0C06E68A add Rm,Rn */
	r3 = R32(r4 + 0x24u); UPD(0x0C06E68Eu, 3);  /* 0C06E68C mov.l @(disp,Rm),Rn */
	r0 = R32(r4 + 0x28u); UPD(0x0C06E690u, 1);  /* 0C06E68E mov.l @(disp,Rm),Rn */
	r3 += r7;  /* 0C06E690 add Rm,Rn */
	r1 = R32(r12 + 0x30u); UPD(0x0C06E694u, 2);  /* 0C06E692 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C06E694 mov Rm,Rn */
	r8 = 0xC058130u; UPD(0x0C06E698u, 2);  /* 0C06E696 mov.l @(disp,pc),Rn */
	r0 += r1;  /* 0C06E698 add Rm,Rn */
	r13 = 0xC057430u; UPD(0x0C06E69Cu, 2);  /* 0C06E69A mov.l @(disp,pc),Rn */
	W32(r12 + 0x24u, r3); UPD(0x0C06E69Eu, 1);  /* 0C06E69C mov.l Rm,@(disp,Rn) */
	IF(0x0C06E69Eu); { u32 t_ = r8; PR = 0x0C06E6A2u; W32(r12 + 0x28u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C06E6A2u); }  /* 0C06E69E jsr @Rn */
L_0C06E6A2: BLKS(0x0C06E6A2u);
	r5 = 0x2u;  /* 0C06E6A2 mov #imm,Rn */
	IF(0x0C06E6A4u); { u32 t_ = r13; PR = 0x0C06E6A8u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C06E6A8u); }  /* 0C06E6A4 jsr @Rn */
L_0C06E6A8: BLKS(0x0C06E6A8u);
	r2 = 0x86u; UPD(0x0C06E6AAu, 1);  /* 0C06E6A8 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C06E6AA mov Rm,Rn */
	IF(0x0C06E6ACu); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06E6AEu, 2);  /* 0C06E6AC mov.w @(r0,Rm),Rn */
	r6 = 0x1Fu;  /* 0C06E6AE mov #imm,Rn */
	r5 += 0x8u;  /* 0C06E6B0 add #imm,Rn */
	IF(0x0C06E6B2u); r5 >>= 2;  /* 0C06E6B2 shlr2 Rn */
	IF(0x0C06E6B4u); r5 >>= 2;  /* 0C06E6B4 shlr2 Rn */
	r5 &= r6;  /* 0C06E6B6 and Rm,Rn */
	{ W32(r12 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06E668u, 8); goto L_0C06E668; }  /* 0C06E6B8 bra */
L_0C06E6C0: BLKS(0x0C06E6C0u);
	r12 = 0xC0A0540u; UPD(0x0C06E6C2u, 1);  /* 0C06E6C0 mov.l @(disp,pc),Rn */
	IF(0x0C06E6C2u); { u32 t_ = r12; PR = 0x0C06E6C6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06E6C6u); }  /* 0C06E6C2 jsr @Rn */
L_0C06E6C6: BLKS(0x0C06E6C6u);
	IF(0x0C06E6C6u); T = (s32)r0 >= 0;  /* 0C06E6C6 cmp/pz Rn */
	if (!T) { UPD(0x0C06E620u, 4); goto L_0C06E620; }  /* 0C06E6C8 bf */
L_0C06E6CA: BLKS(0x0C06E6CAu);
	r6 = 0xB4u; UPD(0x0C06E6CCu, 1);  /* 0C06E6CA mov.w @(disp,pc),Rn */
	IF(0x0C06E6CCu); MACL = r11 * r6;  /* 0C06E6CC mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C06E6D0u, 3);  /* 0C06E6CE mov.l @(disp,pc),Rn */
	IF(0x0C06E6D0u); r13 = MACL;  /* 0C06E6D0 sts macl,Rn */
	r13 += r8;  /* 0C06E6D2 add Rm,Rn */
	IF(0x0C06E6D4u); MACL = r0 * r6;  /* 0C06E6D4 mul.l Rm,Rn */
	r5 = R32(r13); UPD(0x0C06E6D8u, 5);  /* 0C06E6D6 mov.l @Rm,Rn */
	r4 = r13;  /* 0C06E6D8 mov Rm,Rn */
	r9 = 0xFFFFFEFFu; UPD(0x0C06E6DCu, 2);  /* 0C06E6DA mov.w @(disp,pc),Rn */
	r6 += 0x4Cu;  /* 0C06E6DC add #imm,Rn */
	r5 &= r9;  /* 0C06E6DE and Rm,Rn */
	r3 = 0x84u; UPD(0x0C06E6E2u, 3);  /* 0C06E6E0 mov.w @(disp,pc),Rn */
	IF(0x0C06E6E2u); r9 = MACL;  /* 0C06E6E2 sts macl,Rn */
	r9 += r8;  /* 0C06E6E4 add Rm,Rn */
	r4 += r3;  /* 0C06E6E6 add Rm,Rn */
	r7 = R32(r9); UPD(0x0C06E6EAu, 4);  /* 0C06E6E8 mov.l @Rm,Rn */
	r3 += r9;  /* 0C06E6EA add Rm,Rn */
	r3 += 0x2u;  /* 0C06E6EC add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C06E6F0u, 3);  /* 0C06E6EE mov.w @Rm,Rn */
	r7 &= r6;  /* 0C06E6F0 and Rm,Rn */
	r5 |= r7;  /* 0C06E6F2 or Rm,Rn */
	r4 += 0x2u;  /* 0C06E6F4 add #imm,Rn */
	r12 = 0xC058060u; UPD(0x0C06E6F8u, 4);  /* 0C06E6F6 mov.l @(disp,pc),Rn */
	r10 = r0;  /* 0C06E6F8 mov Rm,Rn */
	r8 = 0xE0000u; UPD(0x0C06E6FCu, 2);  /* 0C06E6FA mov.l @(disp,pc),Rn */
	W32(r13, r5); UPD(0x0C06E6FEu, 1);  /* 0C06E6FC mov.l Rm,@Rn */
	W16(r4, r0); UPD(0x0C06E700u, 1);  /* 0C06E6FE mov.w Rm,@Rn */
	r5 = r8;  /* 0C06E700 mov Rm,Rn */
	IF(0x0C06E702u); { u32 t_ = r12; PR = 0x0C06E706u; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06E706u); }  /* 0C06E702 jsr @Rn */
L_0C06E706: BLKS(0x0C06E706u);
	r5 = r8;  /* 0C06E706 mov Rm,Rn */
	r2 = R32(r9 + 0x24u); UPD(0x0C06E70Au, 2);  /* 0C06E708 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C06E70A mov Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C06E70Eu, 2);  /* 0C06E70C mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C06E70E add Rm,Rn */
	IF(0x0C06E710u); { u32 t_ = r8; PR = 0x0C06E714u; W32(r13 + 0x24u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06E714u); }  /* 0C06E710 jsr @Rn */
L_0C06E714: BLKS(0x0C06E714u);
	r6 = R32(r9 + 0x28u); UPD(0x0C06E716u, 1);  /* 0C06E714 mov.l @(disp,Rm),Rn */
	r5 = R32(r9 + 0xCu); UPD(0x0C06E718u, 1);  /* 0C06E716 mov.l @(disp,Rm),Rn */
	r6 += r0;  /* 0C06E718 add Rm,Rn */
	W32(r13 + 0x28u, r6); UPD(0x0C06E71Cu, 2);  /* 0C06E71A mov.l Rm,@(disp,Rn) */
	{ W32(r13 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06E668u, 3); goto L_0C06E668; }  /* 0C06E71C bra */
L_0C06E760: BLKS(0x0C06E760u);
	r13 = 0xC0A0540u; UPD(0x0C06E762u, 1);  /* 0C06E760 mov.l @(disp,pc),Rn */
	IF(0x0C06E762u); { u32 t_ = r13; PR = 0x0C06E766u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06E766u); }  /* 0C06E762 jsr @Rn */
L_0C06E766: BLKS(0x0C06E766u);
	IF(0x0C06E766u); T = (s32)r0 >= 0;  /* 0C06E766 cmp/pz Rn */
	if (!T) { UPD(0x0C06E83Cu, 4); goto L_0C06E83C; }  /* 0C06E768 bf */
L_0C06E76A: BLKS(0x0C06E76Au);
	r12 = 0xB4u; UPD(0x0C06E76Cu, 1);  /* 0C06E76A mov.w @(disp,pc),Rn */
	IF(0x0C06E76Cu); MACL = r11 * r12;  /* 0C06E76C mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C06E770u, 3);  /* 0C06E76E mov.l @(disp,pc),Rn */
	IF(0x0C06E770u); r9 = MACL;  /* 0C06E770 sts macl,Rn */
	r9 += r2;  /* 0C06E772 add Rm,Rn */
	IF(0x0C06E774u); MACL = r0 * r12;  /* 0C06E774 mul.l Rm,Rn */
	r10 = R32(r9); UPD(0x0C06E778u, 5);  /* 0C06E776 mov.l @Rm,Rn */
	r8 = 0xFFFFFEFFu; UPD(0x0C06E77Au, 1);  /* 0C06E778 mov.w @(disp,pc),Rn */
	r12 += 0x4Cu;  /* 0C06E77A add #imm,Rn */
	r10 &= r8;  /* 0C06E77C and Rm,Rn */
	IF(0x0C06E77Eu); r8 = MACL;  /* 0C06E77E sts macl,Rn */
	r8 += r2;  /* 0C06E780 add Rm,Rn */
	r13 = R32(r8); UPD(0x0C06E784u, 5);  /* 0C06E782 mov.l @Rm,Rn */
	r13 &= r12;  /* 0C06E784 and Rm,Rn */
	r10 |= r13;  /* 0C06E786 or Rm,Rn */
	W32(r9, r10); UPD(0x0C06E78Au, 3);  /* 0C06E788 mov.l Rm,@Rn */
	r6 = 0x84u; UPD(0x0C06E78Cu, 1);  /* 0C06E78A mov.w @(disp,pc),Rn */
	r10 = r9;  /* 0C06E78C mov Rm,Rn */
	r10 += r6;  /* 0C06E78E add Rm,Rn */
	r6 += r8;  /* 0C06E790 add Rm,Rn */
	r6 += 0x2u;  /* 0C06E792 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C06E796u, 5);  /* 0C06E794 mov.w @Rm,Rn */
	r10 += 0x2u;  /* 0C06E796 add #imm,Rn */
	r7 = 0xC058060u; UPD(0x0C06E79Au, 2);  /* 0C06E798 mov.l @(disp,pc),Rn */
	r12 = r5;  /* 0C06E79A mov Rm,Rn */
	W16(r10, r5); UPD(0x0C06E79Eu, 2);  /* 0C06E79C mov.w Rm,@Rn */
	r4 = r5;  /* 0C06E79E mov Rm,Rn */
	r13 = 0x80000u; UPD(0x0C06E7A2u, 2);  /* 0C06E7A0 mov.l @(disp,pc),Rn */
	IF(0x0C06E7A2u); { u32 t_ = r7; PR = 0x0C06E7A6u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06E7A6u); }  /* 0C06E7A2 jsr @Rn */
L_0C06E7A6: BLKS(0x0C06E7A6u);
	r3 = R32(r8 + 0x24u); UPD(0x0C06E7A8u, 1);  /* 0C06E7A6 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C06E7A8 mov Rm,Rn */
	r1 = 0xC058030u; UPD(0x0C06E7ACu, 2);  /* 0C06E7AA mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C06E7AC add Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C06E7B0u, 2);  /* 0C06E7AE mov.l Rm,@(disp,Rn) */
	IF(0x0C06E7B0u); { u32 t_ = r1; PR = 0x0C06E7B4u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06E7B4u); }  /* 0C06E7B0 jsr @Rn */
L_0C06E7B4: BLKS(0x0C06E7B4u);
	r4 = R32(r8 + 0x28u); UPD(0x0C06E7B6u, 1);  /* 0C06E7B4 mov.l @(disp,Rm),Rn */
	r2 = 0xC0A0380u; UPD(0x0C06E7B8u, 1);  /* 0C06E7B6 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C06E7B8 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C06E7BCu, 2);  /* 0C06E7BA mov.l @(disp,Rm),Rn */
	W32(r9 + 0x28u, r4); UPD(0x0C06E7BEu, 1);  /* 0C06E7BC mov.l Rm,@(disp,Rn) */
	r12 = 0xC0A9E40u; UPD(0x0C06E7C0u, 1);  /* 0C06E7BE mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06E7C0 mov Rm,Rn */
	IF(0x0C06E7C2u); { u32 t_ = r2; PR = 0x0C06E7C6u; W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C06E7C6u); }  /* 0C06E7C2 jsr @Rn */
L_0C06E7C6: BLKS(0x0C06E7C6u);
	r4 = r11;  /* 0C06E7C6 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C06E7C8 mov #imm,Rn */
	IF(0x0C06E7CAu); { u32 t_ = r12; PR = 0x0C06E7CEu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C06E7CEu); }  /* 0C06E7CA jsr @Rn */
L_0C06E7CE: BLKS(0x0C06E7CEu);
	T = (r0 & r0) == 0;  /* 0C06E7CE tst Rm,Rn */
	if (T) { UPD(0x0C06E8A8u, 4); goto L_0C06E8A8; }  /* 0C06E7D0 bt */
L_0C06E7D2: BLKS(0x0C06E7D2u);
	r0 = 0xA9u; UPD(0x0C06E7D4u, 1);  /* 0C06E7D2 mov.w @(disp,pc),Rn */
	r12 = 0xC0A9BB0u; UPD(0x0C06E7D6u, 1);  /* 0C06E7D4 mov.l @(disp,pc),Rn */
	IF(0x0C06E7D6u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06E7D8u, 1);  /* 0C06E7D6 mov.b @(r0,Rm),Rn */
	r6 = r4 & 0xFF;  /* 0C06E7D8 extu.b Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C06E7DCu, 2);  /* 0C06E7DA mov.l @(disp,Rm),Rn */
	IF(0x0C06E7DCu); { u32 t_ = r12; PR = 0x0C06E7E0u; r5 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C06E7E0u); }  /* 0C06E7DC jsr @Rn */
L_0C06E7E0: BLKS(0x0C06E7E0u);
	T = (r0 & r0) == 0;  /* 0C06E7E0 tst Rm,Rn */
	if (T) { UPD(0x0C06E8A8u, 4); goto L_0C06E8A8; }  /* 0C06E7E2 bt */
L_0C06E7E4: BLKS(0x0C06E7E4u);
	r5 = r13;  /* 0C06E7E4 mov Rm,Rn */
	r3 = 0xC058060u; UPD(0x0C06E7E8u, 2);  /* 0C06E7E6 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)R16(r10); UPD(0x0C06E7EAu, 1);  /* 0C06E7E8 mov.w @Rm,Rn */
	IF(0x0C06E7EAu); { u32 t_ = r3; PR = 0x0C06E7EEu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06E7EEu); }  /* 0C06E7EA jsr @Rn */
L_0C06E7EE: BLKS(0x0C06E7EEu);
	r12 = R32(r9 + 0x24u); UPD(0x0C06E7F0u, 1);  /* 0C06E7EE mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C06E7F0 mov Rm,Rn */
	r12 += r0;  /* 0C06E7F2 add Rm,Rn */
	r1 = 0xC058030u; UPD(0x0C06E7F6u, 3);  /* 0C06E7F4 mov.l @(disp,pc),Rn */
	r5 = r13;  /* 0C06E7F6 mov Rm,Rn */
	r0 = 0x20000u; UPD(0x0C06E7FAu, 2);  /* 0C06E7F8 mov.l @(disp,pc),Rn */
	IF(0x0C06E7FAu); { u32 t_ = r1; PR = 0x0C06E7FEu; r12 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06E7FEu); }  /* 0C06E7FA jsr @Rn */
L_0C06E7FE: BLKS(0x0C06E7FEu);
	r6 = R32(r9 + 0x28u); UPD(0x0C06E800u, 1);  /* 0C06E7FE mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06E800 add #imm,Rn */
	r9 = 0x30000u; UPD(0x0C06E804u, 2);  /* 0C06E802 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C06E804 add Rm,Rn */
	W32(r15, r9); UPD(0x0C06E808u, 2);  /* 0C06E806 mov.l Rm,@Rn */
	r4 = 0x7u;  /* 0C06E808 mov #imm,Rn */
	r0 = 0xC0A8A50u; UPD(0x0C06E80Cu, 2);  /* 0C06E80A mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C06E80C mov Rm,Rn */
	r7 = r8;  /* 0C06E80E mov Rm,Rn */
	UPD(0x0C06E810u, 2);
L_0C06E810: BLKS(0x0C06E810u);
	IF(0x0C06E810u); { u32 t_ = r0; PR = 0x0C06E814u; IF(0x0C06E812u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C06E814u); }  /* 0C06E810 jsr @Rn */
L_0C06E814: BLKS(0x0C06E814u);
	r1 = 0xC0580D0u; UPD(0x0C06E816u, 1);  /* 0C06E814 mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C06E816 add #imm,Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C06E5BAu, 4); goto L_0C06E5BA; }  /* 0C06E818 bra */
L_0C06E820: BLKS(0x0C06E820u);
	r10 = 0xC0A0540u; UPD(0x0C06E822u, 1);  /* 0C06E820 mov.l @(disp,pc),Rn */
	IF(0x0C06E822u); { u32 t_ = r10; PR = 0x0C06E826u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06E826u); }  /* 0C06E822 jsr @Rn */
L_0C06E826: BLKS(0x0C06E826u);
	IF(0x0C06E826u); T = (s32)r0 >= 0;  /* 0C06E826 cmp/pz Rn */
	if (!T) { UPD(0x0C06E83Cu, 4); goto L_0C06E83C; }  /* 0C06E828 bf */
L_0C06E82A: BLKS(0x0C06E82Au);
	r2 = 0xB4u; UPD(0x0C06E82Cu, 1);  /* 0C06E82A mov.w @(disp,pc),Rn */
	IF(0x0C06E82Cu); MACL = r0 * r2;  /* 0C06E82C mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C06E830u, 3);  /* 0C06E82E mov.l @(disp,pc),Rn */
	IF(0x0C06E830u); r7 = MACL;  /* 0C06E830 sts macl,Rn */
	r7 += r3;  /* 0C06E832 add Rm,Rn */
	r5 = R32(r7 + 0xCu); UPD(0x0C06E836u, 3);  /* 0C06E834 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C06E836 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C06E83Au); MACL = r11 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C06E840u, 5); goto L_0C06E840; } UPD(0x0C06E83Cu, 2); goto L_0C06E83C; }  /* 0C06E838 bt/s */
L_0C06E83C: BLKS(0x0C06E83Cu);
	{ IF(0x0C06E83Eu); ; /* slot nop */ UPD(0x0C06E620u, 3); goto L_0C06E620; }  /* 0C06E83C bra */
L_0C06E840: BLKS(0x0C06E840u);
	r5 = 0x100u; UPD(0x0C06E842u, 1);  /* 0C06E840 mov.w @(disp,pc),Rn */
	IF(0x0C06E842u); r9 = MACL;  /* 0C06E842 sts macl,Rn */
	r9 += r3;  /* 0C06E844 add Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C06E848u, 3);  /* 0C06E846 mov.w @(disp,pc),Rn */
	r3 = R32(r7); UPD(0x0C06E84Au, 1);  /* 0C06E848 mov.l @Rm,Rn */
	r10 = R32(r9); UPD(0x0C06E84Cu, 1);  /* 0C06E84A mov.l @Rm,Rn */
	r3 &= r5;  /* 0C06E84C and Rm,Rn */
	r0 = R32(r7 + 0x24u); UPD(0x0C06E850u, 2);  /* 0C06E84E mov.l @(disp,Rm),Rn */
	r10 &= r2;  /* 0C06E850 and Rm,Rn */
	r1 = R32(r9 + 0x2Cu); UPD(0x0C06E854u, 2);  /* 0C06E852 mov.l @(disp,Rm),Rn */
	r10 |= r3;  /* 0C06E854 or Rm,Rn */
	r6 = R32(r7 + 0x28u); UPD(0x0C06E858u, 2);  /* 0C06E856 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C06E858 add Rm,Rn */
	r4 = R32(r9 + 0x30u); UPD(0x0C06E85Cu, 2);  /* 0C06E85A mov.l @(disp,Rm),Rn */
	r12 = 0xC058130u; UPD(0x0C06E85Eu, 1);  /* 0C06E85C mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C06E85E add Rm,Rn */
	r8 = 0xC057430u; UPD(0x0C06E862u, 2);  /* 0C06E860 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06E862 mov Rm,Rn */
	W32(r9 + 0x28u, r6); UPD(0x0C06E866u, 2);  /* 0C06E864 mov.l Rm,@(disp,Rn) */
	W32(r9, r10); UPD(0x0C06E868u, 1);  /* 0C06E866 mov.l Rm,@Rn */
	IF(0x0C06E868u); { u32 t_ = r12; PR = 0x0C06E86Cu; W32(r9 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C06E86Cu); }  /* 0C06E868 jsr @Rn */
L_0C06E86C: BLKS(0x0C06E86Cu);
	r5 = 0x2u;  /* 0C06E86C mov #imm,Rn */
	IF(0x0C06E86Eu); { u32 t_ = r8; PR = 0x0C06E872u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C06E872u); }  /* 0C06E86E jsr @Rn */
L_0C06E872: BLKS(0x0C06E872u);
	r8 = 0x86u; UPD(0x0C06E874u, 1);  /* 0C06E872 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C06E874 mov Rm,Rn */
	r8 += r9;  /* 0C06E876 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C06E87Au, 3);  /* 0C06E878 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C06E87A add #imm,Rn */
	r7 = 0xC0A0380u; UPD(0x0C06E87Eu, 2);  /* 0C06E87C mov.l @(disp,pc),Rn */
	IF(0x0C06E87Eu); r0 >>= 2;  /* 0C06E87E shlr2 Rn */
	IF(0x0C06E880u); r0 >>= 2;  /* 0C06E880 shlr2 Rn */
	r13 = 0xC0A9E40u; UPD(0x0C06E884u, 3);  /* 0C06E882 mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C06E884 and #imm,r0 */
	IF(0x0C06E886u); { u32 t_ = r7; PR = 0x0C06E88Au; W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C06E88Au); }  /* 0C06E886 jsr @Rn */
L_0C06E88A: BLKS(0x0C06E88Au);
	r4 = r11;  /* 0C06E88A mov Rm,Rn */
	r5 = 0x5Au;  /* 0C06E88C mov #imm,Rn */
	IF(0x0C06E88Eu); { u32 t_ = r13; PR = 0x0C06E892u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C06E892u); }  /* 0C06E88E jsr @Rn */
L_0C06E892: BLKS(0x0C06E892u);
	T = (r0 & r0) == 0;  /* 0C06E892 tst Rm,Rn */
	if (T) { UPD(0x0C06E8A8u, 4); goto L_0C06E8A8; }  /* 0C06E894 bt */
L_0C06E896: BLKS(0x0C06E896u);
	r4 = R32(r9 + 0x24u); UPD(0x0C06E898u, 1);  /* 0C06E896 mov.l @(disp,Rm),Rn */
	r0 = 0xA9u; UPD(0x0C06E89Au, 1);  /* 0C06E898 mov.w @(disp,pc),Rn */
	r13 = 0xC0A9BB0u; UPD(0x0C06E89Cu, 1);  /* 0C06E89A mov.l @(disp,pc),Rn */
	IF(0x0C06E89Cu); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06E89Eu, 1);  /* 0C06E89C mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C06E89E extu.b Rm,Rn */
	IF(0x0C06E8A0u); { u32 t_ = r13; PR = 0x0C06E8A4u; r5 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C06E8A4u); }  /* 0C06E8A0 jsr @Rn */
L_0C06E8A4: BLKS(0x0C06E8A4u);
	T = (r0 & r0) == 0;  /* 0C06E8A4 tst Rm,Rn */
	if (!T) { UPD(0x0C06E8ACu, 4); goto L_0C06E8AC; }  /* 0C06E8A6 bf */
L_0C06E8A8: BLKS(0x0C06E8A8u);
	{ IF(0x0C06E8AAu); ; /* slot nop */ UPD(0x0C06E600u, 3); goto L_0C06E600; }  /* 0C06E8A8 bra */
L_0C06E8AC: BLKS(0x0C06E8ACu);
	r13 = 0xC050D70u; UPD(0x0C06E8AEu, 1);  /* 0C06E8AC mov.l @(disp,pc),Rn */
	r12 = 0xC058060u; UPD(0x0C06E8B0u, 1);  /* 0C06E8AE mov.l @(disp,pc),Rn */
	IF(0x0C06E8B0u); { u32 t_ = r13; PR = 0x0C06E8B4u; r4 = 0xFu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C06E8B4u); }  /* 0C06E8B0 jsr @Rn */
L_0C06E8B4: BLKS(0x0C06E8B4u);
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C06E8B6u, 1);  /* 0C06E8B4 mov.w @Rm,Rn */
	r0 += r6;  /* 0C06E8B6 add Rm,Rn */
	r0 += 0xFFFFFFF8u;  /* 0C06E8B8 add #imm,Rn */
	r10 = 0x80000u; UPD(0x0C06E8BCu, 3);  /* 0C06E8BA mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C06E8BC exts.w Rm,Rn */
	r4 = r13;  /* 0C06E8BE mov Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C06E8C2u, 3);  /* 0C06E8C0 mov.l @(disp,pc),Rn */
	IF(0x0C06E8C2u); { u32 t_ = r12; PR = 0x0C06E8C6u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06E8C6u); }  /* 0C06E8C2 jsr @Rn */
L_0C06E8C6: BLKS(0x0C06E8C6u);
	r12 = R32(r9 + 0x24u); UPD(0x0C06E8C8u, 1);  /* 0C06E8C6 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C06E8C8 mov Rm,Rn */
	r12 += r0;  /* 0C06E8CA add Rm,Rn */
	IF(0x0C06E8CCu); { u32 t_ = r8; PR = 0x0C06E8D0u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06E8D0u); }  /* 0C06E8CC jsr @Rn */
L_0C06E8D0: BLKS(0x0C06E8D0u);
	r6 = R32(r9 + 0x28u); UPD(0x0C06E8D2u, 1);  /* 0C06E8D0 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06E8D2 add #imm,Rn */
	r6 += r0;  /* 0C06E8D4 add Rm,Rn */
	r9 = 0x20000u; UPD(0x0C06E8D8u, 3);  /* 0C06E8D6 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C06E8D8 mov #imm,Rn */
	r0 = 0xC0A81B0u; UPD(0x0C06E8DCu, 2);  /* 0C06E8DA mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C06E8DC mov Rm,Rn */
	W32(r15, r9); UPD(0x0C06E8E0u, 2);  /* 0C06E8DE mov.l Rm,@Rn */
	{ r7 = r13; /* slot mov Rm,Rn */ UPD(0x0C06E810u, 3); goto L_0C06E810; }  /* 0C06E8E0 bra */
}

void f_0C06E930(sh3_t *c)
{
	LOCALS;
L_0C06E930: BLKS(0x0C06E930u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06E932u, 1);  /* 0C06E930 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06E934u, 1);  /* 0C06E932 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06E936u, 1);  /* 0C06E934 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06E938u, 1);  /* 0C06E936 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06E93Au, 1);  /* 0C06E938 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06E93Cu, 1);  /* 0C06E93A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06E93Eu, 1);  /* 0C06E93C mov.l Rm,@-Rn */
	r4 = 0xC2859A0u; UPD(0x0C06E940u, 1);  /* 0C06E93E mov.l @(disp,pc),Rn */
	IF(0x0C06E940u); r15 -= 4; W32(r15, PR); UPD(0x0C06E942u, 1);  /* 0C06E940 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C06E944u, 1);  /* 0C06E942 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C06E944 add #imm,Rn */
	r8 = 0xC283CA0u; UPD(0x0C06E948u, 2);  /* 0C06E946 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06E948 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C06E94Cu, 2);  /* 0C06E94A mov.w @Rm+,Rn */
	r7 = R32(r8); UPD(0x0C06E94Eu, 1);  /* 0C06E94C mov.l @Rm,Rn */
	IF(0x0C06E94Eu); r0 <<= 2;  /* 0C06E94E shll2 Rn */
	IF(0x0C06E950u); r6 = R32(r0 + r7); UPD(0x0C06E952u, 2);  /* 0C06E950 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r2 = v_; } UPD(0x0C06E954u, 1);  /* 0C06E952 mov.w @Rm+,Rn */
	r5 = 0xC27DC20u; UPD(0x0C06E956u, 1);  /* 0C06E954 mov.l @(disp,pc),Rn */
	r9 = 0xC22C874u; UPD(0x0C06E958u, 1);  /* 0C06E956 mov.l @(disp,pc),Rn */
	r8 = 0xC057A50u; UPD(0x0C06E95Au, 1);  /* 0C06E958 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C06E95Cu, 1);  /* 0C06E95A mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C06E95Eu, 1);  /* 0C06E95C mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C06E960u, 1);  /* 0C06E95E mov.w @Rm,Rn */
	r11 = 0xC28629Eu; UPD(0x0C06E962u, 1);  /* 0C06E960 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C06E962 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C06E966u, 2);  /* 0C06E964 mov.l @(disp,pc),Rn */
	IF(0x0C06E966u); { u32 t_ = r8; PR = 0x0C06E96Au; W16(r11, r2); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C06E96Au); }  /* 0C06E966 jsr @Rn */
L_0C06E96A: BLKS(0x0C06E96Au);
	T = (r0 & r0) == 0;  /* 0C06E96A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06E990u, 4); goto L_0C06E990; } UPD(0x0C06E970u, 1); goto L_0C06E970; }  /* 0C06E96C bf/s */
L_0C06E970: BLKS(0x0C06E970u);
	r14 += 0xCu;  /* 0C06E970 add #imm,Rn */
	UPD(0x0C06E972u, 1);
L_0C06E972: BLKS(0x0C06E972u);
	r15 = r14;  /* 0C06E972 mov Rm,Rn */
	IF(0x0C06E974u); PR = R32(r15); r15 += 4; UPD(0x0C06E976u, 2);  /* 0C06E974 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06E978u, 1);  /* 0C06E976 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06E97Au, 1);  /* 0C06E978 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06E97Cu, 1);  /* 0C06E97A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06E97Eu, 1);  /* 0C06E97C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06E980u, 1);  /* 0C06E97E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06E982u, 1);  /* 0C06E980 mov.l @Rm+,Rn */
	IF(0x0C06E982u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06E982 rts */
L_0C06E990: BLKS(0x0C06E990u);
	r10 = 0xC0606C0u; UPD(0x0C06E992u, 1);  /* 0C06E990 mov.l @(disp,pc),Rn */
	IF(0x0C06E992u); { u32 t_ = r10; PR = 0x0C06E996u; r4 = 0xBu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C06E996u); }  /* 0C06E992 jsr @Rn */
L_0C06E996: BLKS(0x0C06E996u);
	T = (r0 & r0) == 0;  /* 0C06E996 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06E970u, 4); goto L_0C06E970; } goto L_0C06E99C; }  /* 0C06E998 bt/s */
L_0C06E99C: BLKS(0x0C06E99Cu);
	r12 = 0xC2755BCu; UPD(0x0C06E99Eu, 2);  /* 0C06E99C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C06E9A0u, 1);  /* 0C06E99E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C06E9A2u, 1);  /* 0C06E9A0 mov.w @Rm+,Rn */
	IF(0x0C06E9A2u); MACL = r10 * r8;  /* 0C06E9A2 mul.l Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C06E9A6u, 3);  /* 0C06E9A4 mov.w @Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C06E9A8u, 1);  /* 0C06E9A6 mov.l @(disp,pc),Rn */
	IF(0x0C06E9A8u); r8 = MACL;  /* 0C06E9A8 sts macl,Rn */
	r8 += r4;  /* 0C06E9AA add Rm,Rn */
	r0 = r3 & 0xFFFF;  /* 0C06E9AC extu.w Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C06E9B0u, 4);  /* 0C06E9AE mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C06E9B0 mov Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r11); UPD(0x0C06E9B4u, 2);  /* 0C06E9B2 mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C06E9B6u, 1);  /* 0C06E9B4 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C06E9B6 mov #imm,Rn */
	r7 = 0xC0A02D0u; UPD(0x0C06E9BAu, 2);  /* 0C06E9B8 mov.l @(disp,pc),Rn */
	IF(0x0C06E9BAu); W16(r0 + r8, r13); UPD(0x0C06E9BCu, 1);  /* 0C06E9BA mov.w Rm,@(r0,Rn) */
	r6 = 0xD3000104u; UPD(0x0C06E9BEu, 1);  /* 0C06E9BC mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C06E9BE add #imm,Rn */
	W32(r8, r6); UPD(0x0C06E9C2u, 2);  /* 0C06E9C0 mov.l Rm,@Rn */
	IF(0x0C06E9C2u); W16(r0 + r8, r13); UPD(0x0C06E9C4u, 1);  /* 0C06E9C2 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0xCu, r11); UPD(0x0C06E9C6u, 1);  /* 0C06E9C4 mov.l Rm,@(disp,Rn) */
	IF(0x0C06E9C6u); { u32 t_ = r7; PR = 0x0C06E9CAu; W32(r8 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C06E9CAu); }  /* 0C06E9C6 jsr @Rn */
L_0C06E9CA: BLKS(0x0C06E9CAu);
	r9 = 0xC061380u; UPD(0x0C06E9CCu, 1);  /* 0C06E9CA mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C06E9CC mov Rm,Rn */
	r5 = 0x1600000u; UPD(0x0C06E9D0u, 2);  /* 0C06E9CE mov.l @(disp,pc),Rn */
	IF(0x0C06E9D0u); { u32 t_ = r9; PR = 0x0C06E9D4u; W32(r8 + 0x24u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C061380, 0x0C061380u, 0x0C06E9D4u); }  /* 0C06E9D0 jsr @Rn */
L_0C06E9D4: BLKS(0x0C06E9D4u);
	r2 = 0xC0A1530u; UPD(0x0C06E9D6u, 1);  /* 0C06E9D4 mov.l @(disp,pc),Rn */
	r9 = 0x8Cu; UPD(0x0C06E9D8u, 1);  /* 0C06E9D6 mov.w @(disp,pc),Rn */
	IF(0x0C06E9D8u); { u32 t_ = r2; PR = 0x0C06E9DCu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C06E9DCu); }  /* 0C06E9D8 jsr @Rn */
L_0C06E9DC: BLKS(0x0C06E9DCu);
	r0 = 0xADu; UPD(0x0C06E9DEu, 1);  /* 0C06E9DC mov.w @(disp,pc),Rn */
	r4 = 0x13u;  /* 0C06E9DE mov #imm,Rn */
	r3 = 0xA8u; UPD(0x0C06E9E2u, 2);  /* 0C06E9E0 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C06E9E2 add Rm,Rn */
	IF(0x0C06E9E4u); W8(r0 + r8, r4); UPD(0x0C06E9E6u, 2);  /* 0C06E9E4 mov.b Rm,@(r0,Rn) */
	r3 += r8;  /* 0C06E9E6 add Rm,Rn */
	r3 += 0x1u;  /* 0C06E9E8 add #imm,Rn */
	r0 = 0xC0A1780u; UPD(0x0C06E9ECu, 3);  /* 0C06E9EA mov.l @(disp,pc),Rn */
	W8(r3, r4); UPD(0x0C06E9EEu, 1);  /* 0C06E9EC mov.b Rm,@Rn */
	r6 = 0xC27DC20u; UPD(0x0C06E9F0u, 1);  /* 0C06E9EE mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C06E9F0 mov Rm,Rn */
	r5 = R32(r6); UPD(0x0C06E9F4u, 2);  /* 0C06E9F2 mov.l @Rm,Rn */
	IF(0x0C06E9F4u); { u32 t_ = r0; PR = 0x0C06E9F8u; W32(r14 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C06E9F8u); }  /* 0C06E9F4 jsr @Rn */
L_0C06E9F8: BLKS(0x0C06E9F8u);
	r13 = 0x94u; UPD(0x0C06E9FAu, 1);  /* 0C06E9F8 mov.w @(disp,pc),Rn */
	r0 = 0x90u; UPD(0x0C06E9FCu, 1);  /* 0C06E9FA mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C06E9FC add Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C06EA00u, 2);  /* 0C06E9FE mov.l @(disp,Rm),Rn */
	W32(r13, r11); UPD(0x0C06EA02u, 1);  /* 0C06EA00 mov.l Rm,@Rn */
	IF(0x0C06EA02u); W32(r0 + r8, r11); UPD(0x0C06EA04u, 1);  /* 0C06EA02 mov.l Rm,@(r0,Rn) */
	r13 = r8;  /* 0C06EA04 mov Rm,Rn */
	W32(r9, r11); UPD(0x0C06EA08u, 2);  /* 0C06EA06 mov.l Rm,@Rn */
	W32(r8 + 0x30u, r11); UPD(0x0C06EA0Au, 1);  /* 0C06EA08 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r11); UPD(0x0C06EA0Cu, 1);  /* 0C06EA0A mov.l Rm,@(disp,Rn) */
	W32(r14, r11); UPD(0x0C06EA0Eu, 1);  /* 0C06EA0C mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C06EA10u, 1);  /* 0C06EA0E mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C06EA10 mov #imm,Rn */
	IF(0x0C06EA12u); ;  /* 0C06EA12 nop */
	UPD(0x0C06EA14u, 2);
L_0C06EA14: BLKS(0x0C06EA14u);
	r9 = 0xC17A630u; UPD(0x0C06EA16u, 1);  /* 0C06EA14 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C06EA18u, 1);  /* 0C06EA16 mov.w @Rm+,Rn */
	r9 += r11;  /* 0C06EA18 add Rm,Rn */
	r8 = 0xB4u; UPD(0x0C06EA1Cu, 2);  /* 0C06EA1A mov.w @(disp,pc),Rn */
	r9 += 0x4u;  /* 0C06EA1C add #imm,Rn */
	IF(0x0C06EA1Eu); MACL = r10 * r8;  /* 0C06EA1E mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C06EA22u, 4);  /* 0C06EA20 mov.w @Rm,Rn */
	r11 += 0x14u;  /* 0C06EA22 add #imm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C06EA26u, 2);  /* 0C06EA24 mov.l @(disp,pc),Rn */
	IF(0x0C06EA26u); r8 = MACL;  /* 0C06EA26 sts macl,Rn */
	r0 = 0xC2755BCu; UPD(0x0C06EA2Au, 2);  /* 0C06EA28 mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C06EA2A add Rm,Rn */
	IF(0x0C06EA2Cu); r7 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C06EA2Eu, 2);  /* 0C06EA2C mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C06EA2E add Rm,Rn */
	r8 += 0x7Cu;  /* 0C06EA30 add #imm,Rn */
	W16(r8, r7); UPD(0x0C06EA34u, 3);  /* 0C06EA32 mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C06EA34 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C06EA38u, 2);  /* 0C06EA36 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C06EA38 add #imm,Rn */
	W16(r8, r5); UPD(0x0C06EA3Cu, 2);  /* 0C06EA3A mov.w Rm,@Rn */
	r7 = 0x0u;  /* 0C06EA3C mov #imm,Rn */
	r3 = 0xC22C874u; UPD(0x0C06EA40u, 2);  /* 0C06EA3E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C06EA40 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C06EA44u, 2);  /* 0C06EA42 mov.w @Rm,Rn */
	r2 = R32(r9); UPD(0x0C06EA46u, 1);  /* 0C06EA44 mov.l @Rm,Rn */
	r6 = r4 & 0xFFFF;  /* 0C06EA46 extu.w Rm,Rn */
	W32(r8, r2); UPD(0x0C06EA4Au, 2);  /* 0C06EA48 mov.l Rm,@Rn */
	r4 = r10;  /* 0C06EA4A mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C06EA4Eu, 2);  /* 0C06EA4C mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A02D0u; UPD(0x0C06EA50u, 1);  /* 0C06EA4E mov.l @(disp,pc),Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C06EA52u, 1);  /* 0C06EA50 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C06EA54u, 1);  /* 0C06EA52 mov.l Rm,@(disp,Rn) */
	IF(0x0C06EA54u); { u32 t_ = r5; PR = 0x0C06EA58u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C06EA58u); }  /* 0C06EA54 jsr @Rn */
L_0C06EA58: BLKS(0x0C06EA58u);
	r2 = 0xC28629Eu; UPD(0x0C06EA5Au, 1);  /* 0C06EA58 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06EA5A mov Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C06EA5Eu, 2);  /* 0C06EA5C mov.w @Rm,Rn */
	IF(0x0C06EA5Eu); r3 >>= 2;  /* 0C06EA5E shlr2 Rn */
	r4 = 0x86u; UPD(0x0C06EA62u, 2);  /* 0C06EA60 mov.w @(disp,pc),Rn */
	IF(0x0C06EA62u); r3 >>= 2;  /* 0C06EA62 shlr2 Rn */
	IF(0x0C06EA64u); r3 >>= 2;  /* 0C06EA64 shlr2 Rn */
	IF(0x0C06EA66u); W16(r0 + r4, r3); UPD(0x0C06EA68u, 3);  /* 0C06EA66 mov.w Rm,@(r0,Rn) */
	r6 = R32(r13 + 0x24u); UPD(0x0C06EA6Au, 1);  /* 0C06EA68 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C06EA6A mov Rm,Rn */
	r0 = R32(r13 + 0x28u); UPD(0x0C06EA6Eu, 2);  /* 0C06EA6C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C06EA70u, 1);  /* 0C06EA6E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C06EA72u, 1);  /* 0C06EA70 mov.l Rm,@(disp,Rn) */
	r7 = R32(r9 + 0xCu); UPD(0x0C06EA74u, 1);  /* 0C06EA72 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C06EA76u, 1);  /* 0C06EA74 mov.l Rm,@(disp,Rn) */
	r5 = R32(r9 + 0x10u); UPD(0x0C06EA78u, 1);  /* 0C06EA76 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A1530u; UPD(0x0C06EA7Au, 1);  /* 0C06EA78 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r5); UPD(0x0C06EA7Cu, 1);  /* 0C06EA7A mov.l Rm,@(disp,Rn) */
	r2 = 0xFFFA0000u; UPD(0x0C06EA7Eu, 1);  /* 0C06EA7C mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C06EA7E add #imm,Rn */
	IF(0x0C06EA80u); { u32 t_ = r10; PR = 0x0C06EA84u; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C06EA84u); }  /* 0C06EA80 jsr @Rn */
L_0C06EA84: BLKS(0x0C06EA84u);
	r0 = 0xB0u; UPD(0x0C06EA86u, 1);  /* 0C06EA84 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C06EA86 add #imm,Rn */
	IF(0x0C06EA88u); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C06EA8Au, 2);  /* 0C06EA88 mov.b @(r0,Rm),Rn */
	r10 = 0x9u;  /* 0C06EA8A mov #imm,Rn */
	IF(0x0C06EA8Cu); W8(r0 + r8, r3); UPD(0x0C06EA8Eu, 2);  /* 0C06EA8C mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C06EA90u, 1);  /* 0C06EA8E mov.w @(disp,pc),Rn */
	r7 = 0xACu; UPD(0x0C06EA92u, 1);  /* 0C06EA90 mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C06EA92 add Rm,Rn */
	r8 += r7;  /* 0C06EA94 add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C06EA98u, 3);  /* 0C06EA96 mov.l @(disp,Rm),Rn */
	r7 += r13;  /* 0C06EA98 add Rm,Rn */
	r7 += 0x1u;  /* 0C06EA9A add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C06EA9Eu, 3);  /* 0C06EA9C mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C06EA9E add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C06EAA2u, 2);  /* 0C06EAA0 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C06EAA2 add #imm,Rn */
	W8(r0, r6); UPD(0x0C06EAA6u, 2);  /* 0C06EAA4 mov.b Rm,@Rn */
	W8(r8, r5); UPD(0x0C06EAA8u, 1);  /* 0C06EAA6 mov.b Rm,@Rn */
	r9 = R32(r14); UPD(0x0C06EAAAu, 1);  /* 0C06EAA8 mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C06EAAA add #imm,Rn */
	r2 = (u32)(s32)(s16)r9;  /* 0C06EAAC exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C06EAB0u, 3);  /* 0C06EAAE mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C06EAB2u, 1);  /* 0C06EAB0 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r10;  /* 0C06EAB2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06EA14u, 4); goto L_0C06EA14; } goto L_0C06EAB8; }  /* 0C06EAB4 bf/s */
L_0C06EAB8: BLKS(0x0C06EAB8u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C06E972u, 4); goto L_0C06E972; }  /* 0C06EAB8 bra */
}

void f_0C06EB20(sh3_t *c)
{
	LOCALS;
L_0C06EB20: BLKS(0x0C06EB20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06EB22u, 1);  /* 0C06EB20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06EB24u, 1);  /* 0C06EB22 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C06EB24 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06EB28u, 2);  /* 0C06EB26 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06EB2Au, 1);  /* 0C06EB28 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06EB2Cu, 1);  /* 0C06EB2A mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C06EB2Eu, 1);  /* 0C06EB2C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06EB30u, 1);  /* 0C06EB2E mov.l Rm,@-Rn */
	IF(0x0C06EB30u); MACL = r8 * r3;  /* 0C06EB30 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06EB34u, 3);  /* 0C06EB32 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C06EB36u, 1);  /* 0C06EB34 mov.l @(disp,pc),Rn */
	IF(0x0C06EB36u); r2 = MACL;  /* 0C06EB36 sts macl,Rn */
	IF(0x0C06EB38u); r15 -= 4; W32(r15, PR); UPD(0x0C06EB3Au, 2);  /* 0C06EB38 sts.l pr,@-Rn */
	r0 += r2;  /* 0C06EB3A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C06EB3Eu, 2);  /* 0C06EB3C mov.l @(disp,Rm),Rn */
	r0 = 0x8u;  /* 0C06EB3E mov #imm,Rn */
	T = r2 > r0;  /* 0C06EB40 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06EBCCu, 5); goto L_0C06EBCC; } goto L_0C06EB46; }  /* 0C06EB42 bt/s */
L_0C06EB46: BLKS(0x0C06EB46u);
	r0 = 0xC06EB58u;  /* 0C06EB46 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C06EB48 add Rm,Rn */
	IF(0x0C06EB4Au); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06EB4Cu, 4);  /* 0C06EB4A mov.w @(r0,Rm),Rn */
	IF(0x0C06EB4Cu); { u32 tv_ = (r4 + 0x0C06EB50u); u32 t_ = PHYS(tv_); IF(0x0C06EB4Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C06EB4C braf Rn */
L_0C06EBCC: BLKS(0x0C06EBCCu);
	r15 = r14;  /* 0C06EBCC mov Rm,Rn */
	IF(0x0C06EBCEu); PR = R32(r15); r15 += 4; UPD(0x0C06EBD0u, 2);  /* 0C06EBCE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06EBD2u, 1);  /* 0C06EBD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06EBD4u, 1);  /* 0C06EBD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06EBD6u, 1);  /* 0C06EBD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06EBD8u, 1);  /* 0C06EBD6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06EBDAu, 1);  /* 0C06EBD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06EBDCu, 1);  /* 0C06EBDA mov.l @Rm+,Rn */
	IF(0x0C06EBDCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06EBDC rts */
}

void f_0C06EB70(sh3_t *c)
{
	LOCALS;
L_0C06EB70: BLKS(0x0C06EB70u);
	r9 = 0xB4u; UPD(0x0C06EB72u, 1);  /* 0C06EB70 mov.w @(disp,pc),Rn */
	IF(0x0C06EB72u); MACL = r8 * r9;  /* 0C06EB72 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C06EB76u, 3);  /* 0C06EB74 mov.l @(disp,pc),Rn */
	IF(0x0C06EB76u); r2 = MACL;  /* 0C06EB76 sts macl,Rn */
	r2 += r7;  /* 0C06EB78 add Rm,Rn */
	r6 = 0xA6u; UPD(0x0C06EB7Cu, 3);  /* 0C06EB7A mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C06EB7C mov Rm,Rn */
	IF(0x0C06EB7Eu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C06EB80u, 2);  /* 0C06EB7E mov.b @(r0,Rm),Rn */
	r0 = r5;  /* 0C06EB80 mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C06EB82 cmp/eq #imm,r0 */
	{ u32 c_ = T; r11 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06EBA0u, 5); goto L_0C06EBA0; } UPD(0x0C06EB88u, 1); goto L_0C06EB88; }  /* 0C06EB84 bt/s */
L_0C06EB88: BLKS(0x0C06EB88u);
	r0 = 0xC0A14C0u; UPD(0x0C06EB8Au, 1);  /* 0C06EB88 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C06EB8A mov Rm,Rn */
	r15 = r14;  /* 0C06EB8C mov Rm,Rn */
	IF(0x0C06EB8Eu); PR = R32(r15); r15 += 4; UPD(0x0C06EB90u, 3);  /* 0C06EB8E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06EB92u, 1);  /* 0C06EB90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06EB94u, 1);  /* 0C06EB92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06EB96u, 1);  /* 0C06EB94 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06EB98u, 1);  /* 0C06EB96 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06EB9Au, 1);  /* 0C06EB98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06EB9Cu, 1);  /* 0C06EB9A mov.l @Rm+,Rn */
	IF(0x0C06EB9Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A14C0u: TAIL(f_0C0A14C0); default: JUMPD(tv_); } }  /* 0C06EB9C jmp @Rn */
L_0C06EBA0: BLKS(0x0C06EBA0u);
	r5 = R32(r2 + 0x24u); UPD(0x0C06EBA2u, 1);  /* 0C06EBA0 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06EBA2 add #imm,Rn */
	r12 = 0x20000u; UPD(0x0C06EBA6u, 2);  /* 0C06EBA4 mov.l @(disp,pc),Rn */
	r10 = 0xC06CC20u; UPD(0x0C06EBA8u, 1);  /* 0C06EBA6 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C06EBA8 mov #imm,Rn */
	W32(r15, r12); UPD(0x0C06EBACu, 2);  /* 0C06EBAA mov.l Rm,@Rn */
	r7 = 0x14u;  /* 0C06EBAC mov #imm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C06EBB0u, 2);  /* 0C06EBAE mov.l Rm,@(disp,Rn) */
	r13 = 0x200000u; UPD(0x0C06EBB2u, 1);  /* 0C06EBB0 mov.l @(disp,pc),Rn */
	r6 = R32(r2 + 0x28u); UPD(0x0C06EBB4u, 1);  /* 0C06EBB2 mov.l @(disp,Rm),Rn */
	IF(0x0C06EBB4u); { u32 t_ = r10; PR = 0x0C06EBB8u; r5 += r13; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C06EBB8u); }  /* 0C06EBB4 jsr @Rn */
L_0C06EBB8: BLKS(0x0C06EBB8u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C06EB88u, 3); goto L_0C06EB88; }  /* 0C06EBB8 bra */
}

void f_0C06EBC0(sh3_t *c)
{
	LOCALS;
L_0C06EBC0: BLKS(0x0C06EBC0u);
	r11 = 0xB4u; UPD(0x0C06EBC2u, 1);  /* 0C06EBC0 mov.w @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C06EBC2 mov #imm,Rn */
	IF(0x0C06EBC4u); MACL = r8 * r11;  /* 0C06EBC4 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C06EBC8u, 4);  /* 0C06EBC6 mov.l @(disp,pc),Rn */
	IF(0x0C06EBC8u); r0 = MACL;  /* 0C06EBC8 sts macl,Rn */
	IF(0x0C06EBCAu); W32(r0 + r8, r12); UPD(0x0C06EBCCu, 2);  /* 0C06EBCA mov.l Rm,@(r0,Rn) */
	r15 = r14;  /* 0C06EBCC mov Rm,Rn */
	IF(0x0C06EBCEu); PR = R32(r15); r15 += 4; UPD(0x0C06EBD0u, 2);  /* 0C06EBCE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06EBD2u, 1);  /* 0C06EBD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06EBD4u, 1);  /* 0C06EBD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06EBD6u, 1);  /* 0C06EBD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06EBD8u, 1);  /* 0C06EBD6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06EBDAu, 1);  /* 0C06EBD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06EBDCu, 1);  /* 0C06EBDA mov.l @Rm+,Rn */
	IF(0x0C06EBDCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06EBDC rts */
}

void f_0C06EBE0(sh3_t *c)
{
	LOCALS;
	goto L_0C06EBE0;
L_0C06EBCC: BLKS(0x0C06EBCCu);
	r15 = r14;  /* 0C06EBCC mov Rm,Rn */
	IF(0x0C06EBCEu); PR = R32(r15); r15 += 4; UPD(0x0C06EBD0u, 2);  /* 0C06EBCE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06EBD2u, 1);  /* 0C06EBD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06EBD4u, 1);  /* 0C06EBD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06EBD6u, 1);  /* 0C06EBD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06EBD8u, 1);  /* 0C06EBD6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06EBDAu, 1);  /* 0C06EBD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06EBDCu, 1);  /* 0C06EBDA mov.l @Rm+,Rn */
	IF(0x0C06EBDCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06EBDC rts */
L_0C06EBE0: BLKS(0x0C06EBE0u);
	r10 = 0xB4u; UPD(0x0C06EBE2u, 1);  /* 0C06EBE0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06EBE2 add #imm,Rn */
	IF(0x0C06EBE4u); MACL = r8 * r10;  /* 0C06EBE4 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C06EBE8u, 4);  /* 0C06EBE6 mov.l @(disp,pc),Rn */
	IF(0x0C06EBE8u); r9 = MACL;  /* 0C06EBE8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C06EBECu, 2);  /* 0C06EBEA mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C06EBEC add Rm,Rn */
	IF(0x0C06EBEEu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06EBF0u, 2);  /* 0C06EBEE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C06EBF0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C06EBF4u, 2);  /* 0C06EBF2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06EBF4 add #imm,Rn */
	IF(0x0C06EBF6u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06EBF8u, 2);  /* 0C06EBF6 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C06EBF8 mov #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C06EBFA extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C06EBFEu, 3);  /* 0C06EBFC mov.l Rm,@(disp,Rn) */
	r12 = 0xC0AB240u; UPD(0x0C06EC00u, 1);  /* 0C06EBFE mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C06EC02u, 1);  /* 0C06EC00 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C06EC04u, 1);  /* 0C06EC02 mov.l @(disp,Rm),Rn */
	IF(0x0C06EC04u); { u32 t_ = r12; PR = 0x0C06EC08u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C06EC08u); }  /* 0C06EC04 jsr @Rn */
L_0C06EC08: BLKS(0x0C06EC08u);
	r4 = r8;  /* 0C06EC08 mov Rm,Rn */
	r8 = 0xC0A0540u; UPD(0x0C06EC0Cu, 2);  /* 0C06EC0A mov.l @(disp,pc),Rn */
	IF(0x0C06EC0Cu); { u32 t_ = r8; PR = 0x0C06EC10u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06EC10u); }  /* 0C06EC0C jsr @Rn */
L_0C06EC10: BLKS(0x0C06EC10u);
	IF(0x0C06EC10u); T = (s32)r0 >= 0;  /* 0C06EC10 cmp/pz Rn */
	{ u32 c_ = !T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06EC3Eu, 4); goto L_0C06EC3E; } goto L_0C06EC16; }  /* 0C06EC12 bf/s */
L_0C06EC16: BLKS(0x0C06EC16u);
	r12 = 0x20000u; UPD(0x0C06EC18u, 2);  /* 0C06EC16 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06EC18 add #imm,Rn */
	r0 = 0x0u;  /* 0C06EC1A mov #imm,Rn */
	r8 = 0xC06CC20u; UPD(0x0C06EC1Eu, 3);  /* 0C06EC1C mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C06EC1E mov #imm,Rn */
	W32(r15, r12); UPD(0x0C06EC22u, 2);  /* 0C06EC20 mov.l Rm,@Rn */
	r4 = 0x3u;  /* 0C06EC22 mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C06EC26u, 2);  /* 0C06EC24 mov.l Rm,@(disp,Rn) */
	r6 = R32(r9 + 0x28u); UPD(0x0C06EC28u, 1);  /* 0C06EC26 mov.l @(disp,Rm),Rn */
	IF(0x0C06EC28u); { u32 t_ = r8; PR = 0x0C06EC2Cu; r5 = R32(r9 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C06EC2Cu); }  /* 0C06EC28 jsr @Rn */
L_0C06EC2C: BLKS(0x0C06EC2Cu);
	IF(0x0C06EC2Cu); MACL = r13 * r10;  /* 0C06EC2C mul.l Rm,Rn */
	r15 += 0x8u;  /* 0C06EC2E add #imm,Rn */
	IF(0x0C06EC30u); r6 = MACL;  /* 0C06EC30 sts macl,Rn */
	r10 = 0xA6u; UPD(0x0C06EC34u, 5);  /* 0C06EC32 mov.w @(disp,pc),Rn */
	r6 += r11;  /* 0C06EC34 add Rm,Rn */
	r6 += r10;  /* 0C06EC36 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C06EC3Au, 3);  /* 0C06EC38 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C06EC3A add #imm,Rn */
	W8(r6, r7); UPD(0x0C06EC3Eu, 2);  /* 0C06EC3C mov.b Rm,@Rn */
L_0C06EC3E: BLKS(0x0C06EC3Eu);
	r11 = 0x0u;  /* 0C06EC3E mov #imm,Rn */
	{ W32(r9, r11); /* slot mov.l Rm,@Rn */ UPD(0x0C06EBCCu, 4); goto L_0C06EBCC; }  /* 0C06EC40 bra */
}

void f_0C06EC50(sh3_t *c)
{
	LOCALS;
	goto L_0C06EC50;
L_0C06EBCC: BLKS(0x0C06EBCCu);
	r15 = r14;  /* 0C06EBCC mov Rm,Rn */
	IF(0x0C06EBCEu); PR = R32(r15); r15 += 4; UPD(0x0C06EBD0u, 2);  /* 0C06EBCE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06EBD2u, 1);  /* 0C06EBD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06EBD4u, 1);  /* 0C06EBD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06EBD6u, 1);  /* 0C06EBD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06EBD8u, 1);  /* 0C06EBD6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06EBDAu, 1);  /* 0C06EBD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06EBDCu, 1);  /* 0C06EBDA mov.l @Rm+,Rn */
	IF(0x0C06EBDCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06EBDC rts */
L_0C06EC50: BLKS(0x0C06EC50u);
	r5 = 0xB4u; UPD(0x0C06EC52u, 1);  /* 0C06EC50 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06EC52 add #imm,Rn */
	IF(0x0C06EC54u); MACL = r8 * r5;  /* 0C06EC54 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C06EC58u, 4);  /* 0C06EC56 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C06EC5Au, 1);  /* 0C06EC58 mov.w @(disp,pc),Rn */
	IF(0x0C06EC5Au); r8 = MACL;  /* 0C06EC5A sts macl,Rn */
	r8 += r4;  /* 0C06EC5C add Rm,Rn */
	IF(0x0C06EC5Eu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06EC60u, 3);  /* 0C06EC5E mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C06EC60 mov #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C06EC62 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C06EC66u, 3);  /* 0C06EC64 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06EC66 add #imm,Rn */
	IF(0x0C06EC68u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06EC6Au, 2);  /* 0C06EC68 mov.b @(r0,Rm),Rn */
	r9 = r13 & 0xFF;  /* 0C06EC6A extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C06EC6Eu, 2);  /* 0C06EC6C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C06EC70u, 1);  /* 0C06EC6E mov.l @Rm,Rn */
	r9 = 0xC0AC800u; UPD(0x0C06EC72u, 1);  /* 0C06EC70 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C06EC74u, 1);  /* 0C06EC72 mov.l @(disp,Rm),Rn */
	IF(0x0C06EC74u); { u32 t_ = r9; PR = 0x0C06EC78u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C06EC78u); }  /* 0C06EC74 jsr @Rn */
L_0C06EC78: BLKS(0x0C06EC78u);
	r1 = 0x0u;  /* 0C06EC78 mov #imm,Rn */
	W32(r8, r1); UPD(0x0C06EC7Cu, 2);  /* 0C06EC7A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C06EBCCu, 3); goto L_0C06EBCC; }  /* 0C06EC7C bra */
}

void f_0C06EC80(sh3_t *c)
{
	LOCALS;
	goto L_0C06EC80;
L_0C06EBC0: BLKS(0x0C06EBC0u);
	r11 = 0xB4u; UPD(0x0C06EBC2u, 1);  /* 0C06EBC0 mov.w @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C06EBC2 mov #imm,Rn */
	IF(0x0C06EBC4u); MACL = r8 * r11;  /* 0C06EBC4 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C06EBC8u, 4);  /* 0C06EBC6 mov.l @(disp,pc),Rn */
	IF(0x0C06EBC8u); r0 = MACL;  /* 0C06EBC8 sts macl,Rn */
	IF(0x0C06EBCAu); W32(r0 + r8, r12); UPD(0x0C06EBCCu, 2);  /* 0C06EBCA mov.l Rm,@(r0,Rn) */
L_0C06EBCC: BLKS(0x0C06EBCCu);
	r15 = r14;  /* 0C06EBCC mov Rm,Rn */
	IF(0x0C06EBCEu); PR = R32(r15); r15 += 4; UPD(0x0C06EBD0u, 2);  /* 0C06EBCE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06EBD2u, 1);  /* 0C06EBD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06EBD4u, 1);  /* 0C06EBD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06EBD6u, 1);  /* 0C06EBD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06EBD8u, 1);  /* 0C06EBD6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06EBDAu, 1);  /* 0C06EBD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06EBDCu, 1);  /* 0C06EBDA mov.l @Rm+,Rn */
	IF(0x0C06EBDCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06EBDC rts */
L_0C06EC7C: BLKS(0x0C06EC7Cu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C06EBCCu, 3); goto L_0C06EBCC; }  /* 0C06EC7C bra */
L_0C06EC80: BLKS(0x0C06EC80u);
	r9 = 0xC0A0540u; UPD(0x0C06EC82u, 1);  /* 0C06EC80 mov.l @(disp,pc),Rn */
	IF(0x0C06EC82u); { u32 t_ = r9; PR = 0x0C06EC86u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06EC86u); }  /* 0C06EC82 jsr @Rn */
L_0C06EC86: BLKS(0x0C06EC86u);
	IF(0x0C06EC86u); T = (s32)r0 >= 0;  /* 0C06EC86 cmp/pz Rn */
	{ u32 c_ = !T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06EBC0u, 4); goto L_0C06EBC0; } goto L_0C06EC8C; }  /* 0C06EC88 bf/s */
L_0C06EC8C: BLKS(0x0C06EC8Cu);
	IF(0x0C06EC8Cu); { u32 t_ = r9; PR = 0x0C06EC90u; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C06EC90u); }  /* 0C06EC8C jsr @Rn */
L_0C06EC90: BLKS(0x0C06EC90u);
	IF(0x0C06EC90u); T = (s32)r0 >= 0;  /* 0C06EC90 cmp/pz Rn */
	if (!T) { UPD(0x0C06EBC0u, 4); goto L_0C06EBC0; }  /* 0C06EC92 bf */
L_0C06EC94: BLKS(0x0C06EC94u);
	r15 += 0xFFFFFFF8u;  /* 0C06EC94 add #imm,Rn */
	r11 = 0xB4u; UPD(0x0C06EC98u, 2);  /* 0C06EC96 mov.w @(disp,pc),Rn */
	IF(0x0C06EC98u); MACL = r0 * r11;  /* 0C06EC98 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C06EC9Cu, 3);  /* 0C06EC9A mov.l @(disp,pc),Rn */
	r2 = 0xA5u; UPD(0x0C06EC9Eu, 1);  /* 0C06EC9C mov.w @(disp,pc),Rn */
	IF(0x0C06EC9Eu); r10 = MACL;  /* 0C06EC9E sts macl,Rn */
	r10 += r12;  /* 0C06ECA0 add Rm,Rn */
	r10 += r2;  /* 0C06ECA2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C06ECA6u, 4);  /* 0C06ECA4 mov.b @Rm,Rn */
	IF(0x0C06ECA6u); MACL = r8 * r11;  /* 0C06ECA6 mul.l Rm,Rn */
	r0 += 0x1u;  /* 0C06ECA8 add #imm,Rn */
	W8(r10, r0); UPD(0x0C06ECACu, 4);  /* 0C06ECAA mov.b Rm,@Rn */
	IF(0x0C06ECACu); r8 = MACL;  /* 0C06ECAC sts macl,Rn */
	r10 = 0xB0u; UPD(0x0C06ECB0u, 2);  /* 0C06ECAE mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C06ECB0 add Rm,Rn */
	r10 += r8;  /* 0C06ECB2 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C06ECB6u, 3);  /* 0C06ECB4 mov.b @Rm,Rn */
	r9 = r7 & 0xFF;  /* 0C06ECB6 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C06ECBAu, 2);  /* 0C06ECB8 mov.l Rm,@Rn */
	r9 = 0xA9u; UPD(0x0C06ECBCu, 1);  /* 0C06ECBA mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C06ECBC add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C06ECC0u, 2);  /* 0C06ECBE mov.b @Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C06ECC0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C06ECC4u, 2);  /* 0C06ECC2 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C06ECC6u, 1);  /* 0C06ECC4 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C06ECC6 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C06ECCAu, 2);  /* 0C06ECC8 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C06ECCCu, 1);  /* 0C06ECCA mov.l @(disp,Rm),Rn */
	IF(0x0C06ECCCu); { u32 t_ = r0; PR = 0x0C06ECD0u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C06ECD0u); }  /* 0C06ECCC jsr @Rn */
L_0C06ECD0: BLKS(0x0C06ECD0u);
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C06ECD2u, 1);  /* 0C06ECD0 mov.b @Rm,Rn */
	r5 = 0x2u;  /* 0C06ECD2 mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C06ECD4 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C06ECD8u, 3);  /* 0C06ECD6 mov.l Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C06ECDAu, 1);  /* 0C06ECD8 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C06ECDA extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C06ECDEu, 2);  /* 0C06ECDC mov.l Rm,@(disp,Rn) */
	r10 = 0xC0AC800u; UPD(0x0C06ECE0u, 1);  /* 0C06ECDE mov.l @(disp,pc),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C06ECE2u, 1);  /* 0C06ECE0 mov.l @(disp,Rm),Rn */
	r4 = R32(r8); UPD(0x0C06ECE4u, 1);  /* 0C06ECE2 mov.l @Rm,Rn */
	IF(0x0C06ECE4u); { u32 t_ = r10; PR = 0x0C06ECE8u; r6 = R32(r8 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C06ECE8u); }  /* 0C06ECE4 jsr @Rn */
L_0C06ECE8: BLKS(0x0C06ECE8u);
	r7 = 0x20000u; UPD(0x0C06ECEAu, 1);  /* 0C06ECE8 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C06ECEA mov #imm,Rn */
	r9 = 0xC06CC20u; UPD(0x0C06ECEEu, 2);  /* 0C06ECEC mov.l @(disp,pc),Rn */
	r4 = 0xAu;  /* 0C06ECEE mov #imm,Rn */
	W32(r15, r7); UPD(0x0C06ECF2u, 2);  /* 0C06ECF0 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C06ECF4u, 1);  /* 0C06ECF2 mov.l Rm,@(disp,Rn) */
	r7 = 0x14u;  /* 0C06ECF4 mov #imm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C06ECF8u, 2);  /* 0C06ECF6 mov.l @(disp,Rm),Rn */
	IF(0x0C06ECF8u); { u32 t_ = r9; PR = 0x0C06ECFCu; r5 = R32(r8 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C06ECFCu); }  /* 0C06ECF8 jsr @Rn */
L_0C06ECFC: BLKS(0x0C06ECFCu);
	IF(0x0C06ECFCu); MACL = r13 * r11;  /* 0C06ECFC mul.l Rm,Rn */
	IF(0x0C06ECFEu); r6 = MACL;  /* 0C06ECFE sts macl,Rn */
	r6 += r12;  /* 0C06ED00 add Rm,Rn */
	W32(r6, r10); UPD(0x0C06ED04u, 5);  /* 0C06ED02 mov.l Rm,@Rn */
	{ W32(r8, r10); /* slot mov.l Rm,@Rn */ UPD(0x0C06EC7Cu, 3); goto L_0C06EC7C; }  /* 0C06ED04 bra */
}

void f_0C06ED40(sh3_t *c)
{
	LOCALS;
	goto L_0C06ED40;
L_0C06EBC0: BLKS(0x0C06EBC0u);
	r11 = 0xB4u; UPD(0x0C06EBC2u, 1);  /* 0C06EBC0 mov.w @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C06EBC2 mov #imm,Rn */
	IF(0x0C06EBC4u); MACL = r8 * r11;  /* 0C06EBC4 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C06EBC8u, 4);  /* 0C06EBC6 mov.l @(disp,pc),Rn */
	IF(0x0C06EBC8u); r0 = MACL;  /* 0C06EBC8 sts macl,Rn */
	IF(0x0C06EBCAu); W32(r0 + r8, r12); UPD(0x0C06EBCCu, 2);  /* 0C06EBCA mov.l Rm,@(r0,Rn) */
L_0C06EBCC: BLKS(0x0C06EBCCu);
	r15 = r14;  /* 0C06EBCC mov Rm,Rn */
	IF(0x0C06EBCEu); PR = R32(r15); r15 += 4; UPD(0x0C06EBD0u, 2);  /* 0C06EBCE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06EBD2u, 1);  /* 0C06EBD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06EBD4u, 1);  /* 0C06EBD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06EBD6u, 1);  /* 0C06EBD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06EBD8u, 1);  /* 0C06EBD6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06EBDAu, 1);  /* 0C06EBD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06EBDCu, 1);  /* 0C06EBDA mov.l @Rm+,Rn */
	IF(0x0C06EBDCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06EBDC rts */
L_0C06EC7A: BLKS(0x0C06EC7Au);
	W32(r8, r1); UPD(0x0C06EC7Cu, 1);  /* 0C06EC7A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C06EBCCu, 3); goto L_0C06EBCC; }  /* 0C06EC7C bra */
L_0C06ED40: BLKS(0x0C06ED40u);
	r9 = 0xC0A0540u; UPD(0x0C06ED42u, 1);  /* 0C06ED40 mov.l @(disp,pc),Rn */
	IF(0x0C06ED42u); { u32 t_ = r9; PR = 0x0C06ED46u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06ED46u); }  /* 0C06ED42 jsr @Rn */
L_0C06ED46: BLKS(0x0C06ED46u);
	IF(0x0C06ED46u); T = (s32)r0 >= 0;  /* 0C06ED46 cmp/pz Rn */
	{ u32 c_ = !T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06ED54u, 4); goto L_0C06ED54; } goto L_0C06ED4C; }  /* 0C06ED48 bf/s */
L_0C06ED4C: BLKS(0x0C06ED4Cu);
	IF(0x0C06ED4Cu); { u32 t_ = r9; PR = 0x0C06ED50u; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C06ED50u); }  /* 0C06ED4C jsr @Rn */
L_0C06ED50: BLKS(0x0C06ED50u);
	IF(0x0C06ED50u); T = (s32)r0 >= 0;  /* 0C06ED50 cmp/pz Rn */
	if (T) { UPD(0x0C06ED58u, 4); goto L_0C06ED58; }  /* 0C06ED52 bt */
L_0C06ED54: BLKS(0x0C06ED54u);
	{ IF(0x0C06ED56u); ; /* slot nop */ UPD(0x0C06EBC0u, 3); goto L_0C06EBC0; }  /* 0C06ED54 bra */
L_0C06ED58: BLKS(0x0C06ED58u);
	r11 = 0xB4u; UPD(0x0C06ED5Au, 1);  /* 0C06ED58 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06ED5A add #imm,Rn */
	IF(0x0C06ED5Cu); MACL = r8 * r11;  /* 0C06ED5C mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C06ED60u, 4);  /* 0C06ED5E mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C06ED60 mov #imm,Rn */
	IF(0x0C06ED62u); r8 = MACL;  /* 0C06ED62 sts macl,Rn */
	r10 = 0xB0u; UPD(0x0C06ED66u, 3);  /* 0C06ED64 mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C06ED66 add Rm,Rn */
	r10 += r8;  /* 0C06ED68 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r10); UPD(0x0C06ED6Cu, 3);  /* 0C06ED6A mov.b @Rm,Rn */
	r2 = r9 & 0xFF;  /* 0C06ED6C extu.b Rm,Rn */
	r9 = 0xA9u; UPD(0x0C06ED70u, 2);  /* 0C06ED6E mov.w @(disp,pc),Rn */
	W32(r15, r2); UPD(0x0C06ED72u, 1);  /* 0C06ED70 mov.l Rm,@Rn */
	r9 += r8;  /* 0C06ED72 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C06ED76u, 2);  /* 0C06ED74 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C06ED76 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C06ED7Au, 2);  /* 0C06ED78 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C06ED7Cu, 1);  /* 0C06ED7A mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C06ED7Eu, 1);  /* 0C06ED7C mov.l @(disp,Rm),Rn */
	r4 = R32(r8); UPD(0x0C06ED80u, 1);  /* 0C06ED7E mov.l @Rm,Rn */
	IF(0x0C06ED80u); { u32 t_ = r0; PR = 0x0C06ED84u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C06ED84u); }  /* 0C06ED80 jsr @Rn */
L_0C06ED84: BLKS(0x0C06ED84u);
	r6 = (u32)(s32)(s8)R8(r10); UPD(0x0C06ED86u, 1);  /* 0C06ED84 mov.b @Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C06ED86 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C06ED8Au, 2);  /* 0C06ED88 mov.l Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C06ED8Cu, 1);  /* 0C06ED8A mov.b @Rm,Rn */
	r5 = 0x2u;  /* 0C06ED8C mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C06ED8E extu.b Rm,Rn */
	r9 = 0xC0AC800u; UPD(0x0C06ED92u, 3);  /* 0C06ED90 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C06ED94u, 1);  /* 0C06ED92 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C06ED96u, 1);  /* 0C06ED94 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C06ED98u, 1);  /* 0C06ED96 mov.l @(disp,Rm),Rn */
	IF(0x0C06ED98u); { u32 t_ = r9; PR = 0x0C06ED9Cu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C06ED9Cu); }  /* 0C06ED98 jsr @Rn */
L_0C06ED9C: BLKS(0x0C06ED9Cu);
	IF(0x0C06ED9Cu); MACL = r13 * r11;  /* 0C06ED9C mul.l Rm,Rn */
	r1 = 0x0u;  /* 0C06ED9E mov #imm,Rn */
	IF(0x0C06EDA0u); r0 = MACL;  /* 0C06EDA0 sts macl,Rn */
	{ IF(0x0C06EDA4u); W32(r0 + r12, r1); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C06EC7Au, 7); goto L_0C06EC7A; }  /* 0C06EDA2 bra */
}

void f_0C06EDB0(sh3_t *c)
{
	LOCALS;
	goto L_0C06EDB0;
L_0C06EBCC: BLKS(0x0C06EBCCu);
	r15 = r14;  /* 0C06EBCC mov Rm,Rn */
	IF(0x0C06EBCEu); PR = R32(r15); r15 += 4; UPD(0x0C06EBD0u, 2);  /* 0C06EBCE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06EBD2u, 1);  /* 0C06EBD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06EBD4u, 1);  /* 0C06EBD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06EBD6u, 1);  /* 0C06EBD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06EBD8u, 1);  /* 0C06EBD6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06EBDAu, 1);  /* 0C06EBD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06EBDCu, 1);  /* 0C06EBDA mov.l @Rm+,Rn */
	IF(0x0C06EBDCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06EBDC rts */
L_0C06EC70: BLKS(0x0C06EC70u);
	r9 = 0xC0AC800u; UPD(0x0C06EC72u, 1);  /* 0C06EC70 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C06EC74u, 1);  /* 0C06EC72 mov.l @(disp,Rm),Rn */
	IF(0x0C06EC74u); { u32 t_ = r9; PR = 0x0C06EC78u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C06EC78u); }  /* 0C06EC74 jsr @Rn */
L_0C06EC78: BLKS(0x0C06EC78u);
	r1 = 0x0u;  /* 0C06EC78 mov #imm,Rn */
	W32(r8, r1); UPD(0x0C06EC7Cu, 2);  /* 0C06EC7A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C06EBCCu, 3); goto L_0C06EBCC; }  /* 0C06EC7C bra */
L_0C06EDB0: BLKS(0x0C06EDB0u);
	r4 = 0xB4u; UPD(0x0C06EDB2u, 1);  /* 0C06EDB0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06EDB2 add #imm,Rn */
	IF(0x0C06EDB4u); MACL = r8 * r4;  /* 0C06EDB4 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C06EDB8u, 4);  /* 0C06EDB6 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C06EDB8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C06EDBCu, 2);  /* 0C06EDBA mov.w @(disp,pc),Rn */
	IF(0x0C06EDBCu); r8 = MACL;  /* 0C06EDBC sts macl,Rn */
	r8 += r3;  /* 0C06EDBE add Rm,Rn */
	IF(0x0C06EDC0u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06EDC2u, 3);  /* 0C06EDC0 mov.b @(r0,Rm),Rn */
	r12 = r11 & 0xFF;  /* 0C06EDC2 extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C06EDC6u, 2);  /* 0C06EDC4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C06EDC6 add #imm,Rn */
	IF(0x0C06EDC8u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06EDCAu, 2);  /* 0C06EDC8 mov.b @(r0,Rm),Rn */
	r13 = r10 & 0xFF;  /* 0C06EDCA extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C06EDCEu, 2);  /* 0C06EDCC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C06EC70u, 3); goto L_0C06EC70; }  /* 0C06EDCE bra */
}

void f_0C06EDF0(sh3_t *c)
{
	LOCALS;
	goto L_0C06EDF0;
L_0C06EB20: BLKS(0x0C06EB20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06EB22u, 1);  /* 0C06EB20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06EB24u, 1);  /* 0C06EB22 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C06EB24 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06EB28u, 2);  /* 0C06EB26 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06EB2Au, 1);  /* 0C06EB28 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06EB2Cu, 1);  /* 0C06EB2A mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C06EB2Eu, 1);  /* 0C06EB2C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06EB30u, 1);  /* 0C06EB2E mov.l Rm,@-Rn */
	IF(0x0C06EB30u); MACL = r8 * r3;  /* 0C06EB30 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06EB34u, 3);  /* 0C06EB32 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C06EB36u, 1);  /* 0C06EB34 mov.l @(disp,pc),Rn */
	IF(0x0C06EB36u); r2 = MACL;  /* 0C06EB36 sts macl,Rn */
	IF(0x0C06EB38u); r15 -= 4; W32(r15, PR); UPD(0x0C06EB3Au, 2);  /* 0C06EB38 sts.l pr,@-Rn */
	r0 += r2;  /* 0C06EB3A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C06EB3Eu, 2);  /* 0C06EB3C mov.l @(disp,Rm),Rn */
	r0 = 0x8u;  /* 0C06EB3E mov #imm,Rn */
	T = r2 > r0;  /* 0C06EB40 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06EBCCu, 5); goto L_0C06EBCC; } goto L_0C06EB46; }  /* 0C06EB42 bt/s */
L_0C06EB46: BLKS(0x0C06EB46u);
	r0 = 0xC06EB58u;  /* 0C06EB46 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C06EB48 add Rm,Rn */
	IF(0x0C06EB4Au); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06EB4Cu, 4);  /* 0C06EB4A mov.w @(r0,Rm),Rn */
	IF(0x0C06EB4Cu); { u32 tv_ = (r4 + 0x0C06EB50u); u32 t_ = PHYS(tv_); IF(0x0C06EB4Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C06EB4C braf Rn */
L_0C06EBCC: BLKS(0x0C06EBCCu);
	r15 = r14;  /* 0C06EBCC mov Rm,Rn */
	IF(0x0C06EBCEu); PR = R32(r15); r15 += 4; UPD(0x0C06EBD0u, 2);  /* 0C06EBCE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06EBD2u, 1);  /* 0C06EBD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06EBD4u, 1);  /* 0C06EBD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06EBD6u, 1);  /* 0C06EBD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06EBD8u, 1);  /* 0C06EBD6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06EBDAu, 1);  /* 0C06EBD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06EBDCu, 1);  /* 0C06EBDA mov.l @Rm+,Rn */
	IF(0x0C06EBDCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06EBDC rts */
L_0C06EDF0: BLKS(0x0C06EDF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06EDF2u, 1);  /* 0C06EDF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06EDF4u, 1);  /* 0C06EDF2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06EDF6u, 1);  /* 0C06EDF4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C06EDF6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06EDFAu, 2);  /* 0C06EDF8 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C06EDFCu, 1);  /* 0C06EDFA mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06EDFEu, 1);  /* 0C06EDFC mov.l Rm,@-Rn */
	IF(0x0C06EDFEu); MACL = r9 * r3;  /* 0C06EDFE mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06EE02u, 3);  /* 0C06EE00 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C06EE04u, 1);  /* 0C06EE02 mov.l @(disp,pc),Rn */
	IF(0x0C06EE04u); r2 = MACL;  /* 0C06EE04 sts macl,Rn */
	IF(0x0C06EE06u); r15 -= 4; W32(r15, PR); UPD(0x0C06EE08u, 2);  /* 0C06EE06 sts.l pr,@-Rn */
	r0 += r2;  /* 0C06EE08 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C06EE0Cu, 2);  /* 0C06EE0A mov.l @(disp,Rm),Rn */
	r0 = 0x8u;  /* 0C06EE0C mov #imm,Rn */
	T = r2 > r0;  /* 0C06EE0E cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06EE68u, 5); goto L_0C06EE68; } goto L_0C06EE14; }  /* 0C06EE10 bt/s */
L_0C06EE14: BLKS(0x0C06EE14u);
	r0 = 0xC06EE24u;  /* 0C06EE14 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C06EE16 add Rm,Rn */
	IF(0x0C06EE18u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06EE1Au, 4);  /* 0C06EE18 mov.w @(r0,Rm),Rn */
	IF(0x0C06EE1Au); { u32 tv_ = (r4 + 0x0C06EE1Eu); u32 t_ = PHYS(tv_); IF(0x0C06EE1Cu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C06EE40u: goto L_0C06EE40; case 0x0C06EEF0u: goto L_0C06EEF0; case 0x0C06EFE0u: goto L_0C06EFE0; case 0x0C06F070u: goto L_0C06F070; case 0x0C06F0B0u: goto L_0C06F0B0; case 0x0C06F210u: goto L_0C06F210; case 0x0C06F350u: goto L_0C06F350; default: JUMPD(tv_); } }  /* 0C06EE1A braf Rn */
L_0C06EE40: BLKS(0x0C06EE40u);
	r8 = 0xC0A1700u; UPD(0x0C06EE42u, 1);  /* 0C06EE40 mov.l @(disp,pc),Rn */
	IF(0x0C06EE42u); { u32 t_ = r8; PR = 0x0C06EE46u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C06EE46u); }  /* 0C06EE42 jsr @Rn */
L_0C06EE46: BLKS(0x0C06EE46u);
	r7 = 0xC0A1590u; UPD(0x0C06EE48u, 1);  /* 0C06EE46 mov.l @(disp,pc),Rn */
	IF(0x0C06EE48u); { u32 t_ = r7; PR = 0x0C06EE4Cu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1590, 0x0C0A1590u, 0x0C06EE4Cu); }  /* 0C06EE48 jsr @Rn */
L_0C06EE4C: BLKS(0x0C06EE4Cu);
	r6 = 0xB4u; UPD(0x0C06EE4Eu, 1);  /* 0C06EE4C mov.w @(disp,pc),Rn */
	IF(0x0C06EE4Eu); MACL = r9 * r6;  /* 0C06EE4E mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C06EE52u, 3);  /* 0C06EE50 mov.l @(disp,pc),Rn */
	IF(0x0C06EE52u); r2 = MACL;  /* 0C06EE52 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C06EE56u, 2);  /* 0C06EE54 mov.w @(disp,pc),Rn */
	r2 += r5;  /* 0C06EE56 add Rm,Rn */
	r3 += r2;  /* 0C06EE58 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C06EE5Cu, 3);  /* 0C06EE5A mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C06EE5C add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C06EE5E extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C06EE60 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06EE80u, 6); goto L_0C06EE80; } UPD(0x0C06EE66u, 1); goto L_0C06EE66; }  /* 0C06EE62 bt/s */
L_0C06EE66: BLKS(0x0C06EE66u);
	IF(0x0C06EE66u); ;  /* 0C06EE66 nop */
	UPD(0x0C06EE68u, 1);
L_0C06EE68: BLKS(0x0C06EE68u);
	r15 = r14;  /* 0C06EE68 mov Rm,Rn */
	IF(0x0C06EE6Au); PR = R32(r15); r15 += 4; UPD(0x0C06EE6Cu, 2);  /* 0C06EE6A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06EE6Eu, 1);  /* 0C06EE6C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06EE70u, 1);  /* 0C06EE6E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06EE72u, 1);  /* 0C06EE70 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06EE74u, 1);  /* 0C06EE72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06EE76u, 1);  /* 0C06EE74 mov.l @Rm+,Rn */
	IF(0x0C06EE76u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06EE76 rts */
L_0C06EE80: BLKS(0x0C06EE80u);
	r9 = 0x0u;  /* 0C06EE80 mov #imm,Rn */
	W8(r3, r9); UPD(0x0C06EE84u, 2);  /* 0C06EE82 mov.b Rm,@Rn */
	r8 = r2;  /* 0C06EE84 mov Rm,Rn */
	r11 = 0xC17A6F8u; UPD(0x0C06EE88u, 2);  /* 0C06EE86 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C06EE88 mov #imm,Rn */
	r10 = 0xC0ACA40u; UPD(0x0C06EE8Cu, 2);  /* 0C06EE8A mov.l @(disp,pc),Rn */
L_0C06EE8C: BLKS(0x0C06EE8Cu);
	r1 = r9;  /* 0C06EE8C mov Rm,Rn */
	IF(0x0C06EE8Eu); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C06EE8E rotl Rn */
	IF(0x0C06EE90u); r0 = T;  /* 0C06EE90 movt Rn */
	r0 += r9;  /* 0C06EE92 add Rm,Rn */
	IF(0x0C06EE94u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06EE94 shar Rn */
	IF(0x0C06EE96u); r0 <<= 2;  /* 0C06EE96 shll2 Rn */
	IF(0x0C06EE98u); r7 = R32(r0 + r11); UPD(0x0C06EE9Au, 7);  /* 0C06EE98 mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C06EE9A add #imm,Rn */
	r0 = r9;  /* 0C06EE9C mov Rm,Rn */
	r5 = 0xC17A704u; UPD(0x0C06EEA0u, 3);  /* 0C06EE9E mov.l @(disp,pc),Rn */
	IF(0x0C06EEA0u); r0 <<= 2;  /* 0C06EEA0 shll2 Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C06EEA4u, 2);  /* 0C06EEA2 mov.l @(disp,Rm),Rn */
	IF(0x0C06EEA4u); r3 = R32(r0 + r5); UPD(0x0C06EEA6u, 1);  /* 0C06EEA4 mov.l @(r0,Rm),Rn */
	r6 += r7;  /* 0C06EEA6 add Rm,Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C06EEAAu, 2);  /* 0C06EEA8 mov.l @(disp,Rm),Rn */
	r0 = r9;  /* 0C06EEAA mov Rm,Rn */
	r4 = 0xC17A71Cu; UPD(0x0C06EEAEu, 2);  /* 0C06EEAC mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C06EEAE and #imm,r0 */
	r7 += r3;  /* 0C06EEB0 add Rm,Rn */
	IF(0x0C06EEB2u); r0 <<= 2;  /* 0C06EEB2 shll2 Rn */
	IF(0x0C06EEB4u); r3 = R32(r0 + r4); UPD(0x0C06EEB6u, 4);  /* 0C06EEB4 mov.l @(r0,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C06EEB8u, 1);  /* 0C06EEB6 mov.w @(disp,pc),Rn */
	IF(0x0C06EEB8u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06EEBAu, 1);  /* 0C06EEB8 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C06EEBA extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C06EEBEu, 2);  /* 0C06EEBC mov.l Rm,@Rn */
	r12 = 0xA9u; UPD(0x0C06EEC0u, 1);  /* 0C06EEBE mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C06EEC0 mov Rm,Rn */
	IF(0x0C06EEC2u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C06EEC4u, 2);  /* 0C06EEC2 mov.b @(r0,Rm),Rn */
	r2 = 0xFFFF4000u; UPD(0x0C06EEC6u, 1);  /* 0C06EEC4 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C06EEC6 extu.b Rm,Rn */
	r4 += 0xFFFFFFFFu;  /* 0C06EEC8 add #imm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C06EECCu, 3);  /* 0C06EECA mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C06EECC mov #imm,Rn */
	W32(r15 + 0x8u, r2); UPD(0x0C06EED0u, 2);  /* 0C06EECE mov.l Rm,@(disp,Rn) */
	r12 = 0x5u;  /* 0C06EED0 mov #imm,Rn */
	W32(r15 + 0xCu, r3); UPD(0x0C06EED4u, 2);  /* 0C06EED2 mov.l Rm,@(disp,Rn) */
	IF(0x0C06EED4u); { u32 t_ = r10; PR = 0x0C06EED8u; r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C06EED8u); }  /* 0C06EED4 jsr @Rn */
L_0C06EED8: BLKS(0x0C06EED8u);
	r0 = r9;  /* 0C06EED8 mov Rm,Rn */
	r0 += 0x1u;  /* 0C06EEDA add #imm,Rn */
	r9 = (u32)(s32)(s16)r0;  /* 0C06EEDC exts.w Rm,Rn */
	T = (s32)r9 > (s32)r12;  /* 0C06EEDE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06EE8Cu, 7); goto L_0C06EE8C; } goto L_0C06EEE4; }  /* 0C06EEE0 bf/s */
L_0C06EEE4: BLKS(0x0C06EEE4u);
	{ IF(0x0C06EEE6u); ; /* slot nop */ UPD(0x0C06EE68u, 4); goto L_0C06EE68; }  /* 0C06EEE4 bra */
L_0C06EEF0: BLKS(0x0C06EEF0u);
	r10 = 0xC0A0540u; UPD(0x0C06EEF2u, 1);  /* 0C06EEF0 mov.l @(disp,pc),Rn */
	IF(0x0C06EEF2u); { u32 t_ = r10; PR = 0x0C06EEF6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06EEF6u); }  /* 0C06EEF2 jsr @Rn */
L_0C06EEF6: BLKS(0x0C06EEF6u);
	IF(0x0C06EEF6u); T = (s32)r0 >= 0;  /* 0C06EEF6 cmp/pz Rn */
	if (!T) { UPD(0x0C06EFC0u, 4); goto L_0C06EFC0; }  /* 0C06EEF8 bf */
L_0C06EEFA: BLKS(0x0C06EEFAu);
	r12 = 0xB4u; UPD(0x0C06EEFCu, 1);  /* 0C06EEFA mov.w @(disp,pc),Rn */
	IF(0x0C06EEFCu); MACL = r9 * r12;  /* 0C06EEFC mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C06EF00u, 3);  /* 0C06EEFE mov.l @(disp,pc),Rn */
	IF(0x0C06EF00u); r6 = MACL;  /* 0C06EF00 sts macl,Rn */
	IF(0x0C06EF02u); MACL = r0 * r12;  /* 0C06EF02 mul.l Rm,Rn */
	r6 += r8;  /* 0C06EF04 add Rm,Rn */
	r4 = R32(r6); UPD(0x0C06EF08u, 5);  /* 0C06EF06 mov.l @Rm,Rn */
	IF(0x0C06EF08u); r12 = MACL;  /* 0C06EF08 sts macl,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C06EF0Cu, 2);  /* 0C06EF0A mov.w @(disp,pc),Rn */
	r12 += r8;  /* 0C06EF0C add Rm,Rn */
	r4 &= r2;  /* 0C06EF0E and Rm,Rn */
	r10 = R32(r12 + 0x24u); UPD(0x0C06EF12u, 3);  /* 0C06EF10 mov.l @(disp,Rm),Rn */
	r8 = r6;  /* 0C06EF12 mov Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C06EF16u, 2);  /* 0C06EF14 mov.l @(disp,Rm),Rn */
	r3 = R32(r12); UPD(0x0C06EF18u, 1);  /* 0C06EF16 mov.l @Rm,Rn */
	r0 = 0xA4u; UPD(0x0C06EF1Au, 1);  /* 0C06EF18 mov.w @(disp,pc),Rn */
	r11 = R32(r6 + 0x2Cu); UPD(0x0C06EF1Cu, 1);  /* 0C06EF1A mov.l @(disp,Rm),Rn */
	r12 += r0;  /* 0C06EF1C add Rm,Rn */
	r2 = 0x99u; UPD(0x0C06EF20u, 2);  /* 0C06EF1E mov.w @(disp,pc),Rn */
	r10 += r11;  /* 0C06EF20 add Rm,Rn */
	r2 += r6;  /* 0C06EF22 add Rm,Rn */
	r5 = 0x100u; UPD(0x0C06EF26u, 3);  /* 0C06EF24 mov.w @(disp,pc),Rn */
	r12 += 0x1u;  /* 0C06EF26 add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C06EF2Au, 2);  /* 0C06EF28 mov.b @Rm,Rn */
	r8 += r0;  /* 0C06EF2A add Rm,Rn */
	r1 = R32(r6 + 0x30u); UPD(0x0C06EF2Eu, 2);  /* 0C06EF2C mov.l @(disp,Rm),Rn */
	r3 &= r5;  /* 0C06EF2E and Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r12); UPD(0x0C06EF32u, 2);  /* 0C06EF30 mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C06EF32 add #imm,Rn */
	r7 += r1;  /* 0C06EF34 add Rm,Rn */
	r4 |= r3;  /* 0C06EF36 or Rm,Rn */
	r8 += 0x1u;  /* 0C06EF38 add #imm,Rn */
	r0 = r11 & 0xFF;  /* 0C06EF3A extu.b Rm,Rn */
	W32(r6 + 0x24u, r10); UPD(0x0C06EF3Eu, 6);  /* 0C06EF3C mov.l Rm,@(disp,Rn) */
	T = r0 == 0xCu;  /* 0C06EF3E cmp/eq #imm,r0 */
	W32(r6 + 0x28u, r7); UPD(0x0C06EF42u, 2);  /* 0C06EF40 mov.l Rm,@(disp,Rn) */
	W32(r6, r4); UPD(0x0C06EF44u, 1);  /* 0C06EF42 mov.l Rm,@Rn */
	W8(r8, r9); UPD(0x0C06EF46u, 1);  /* 0C06EF44 mov.b Rm,@Rn */
	{ u32 c_ = !T; W8(r2, r11); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06EE68u, 3); goto L_0C06EE68; } UPD(0x0C06EF4Au, 1); goto L_0C06EF4A; }  /* 0C06EF46 bf/s */
L_0C06EF4A: BLKS(0x0C06EF4Au);
	r9 = 0x0u;  /* 0C06EF4A mov #imm,Rn */
	W8(r2, r9); UPD(0x0C06EF4Eu, 2);  /* 0C06EF4C mov.b Rm,@Rn */
	r8 = r6;  /* 0C06EF4E mov Rm,Rn */
	r11 = 0xC17A724u; UPD(0x0C06EF52u, 2);  /* 0C06EF50 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C06EF52 mov #imm,Rn */
	r10 = 0xC0ACA40u; UPD(0x0C06EF56u, 2);  /* 0C06EF54 mov.l @(disp,pc),Rn */
	IF(0x0C06EF56u); ;  /* 0C06EF56 nop */
	UPD(0x0C06EF58u, 1);
L_0C06EF58: BLKS(0x0C06EF58u);
	r1 = r9;  /* 0C06EF58 mov Rm,Rn */
	IF(0x0C06EF5Au); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C06EF5A rotl Rn */
	IF(0x0C06EF5Cu); r0 = T;  /* 0C06EF5C movt Rn */
	r0 += r9;  /* 0C06EF5E add Rm,Rn */
	IF(0x0C06EF60u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06EF60 shar Rn */
	IF(0x0C06EF62u); r0 <<= 2;  /* 0C06EF62 shll2 Rn */
	IF(0x0C06EF64u); r7 = R32(r0 + r11); UPD(0x0C06EF66u, 7);  /* 0C06EF64 mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C06EF66 add #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C06EF6Au, 2);  /* 0C06EF68 mov.l @(disp,Rm),Rn */
	r0 = r9;  /* 0C06EF6A mov Rm,Rn */
	r12 = 0xC17A734u; UPD(0x0C06EF6Eu, 2);  /* 0C06EF6C mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C06EF6E and #imm,r0 */
	r6 += r7;  /* 0C06EF70 add Rm,Rn */
	IF(0x0C06EF72u); r0 <<= 2;  /* 0C06EF72 shll2 Rn */
	IF(0x0C06EF74u); r3 = R32(r0 + r12); UPD(0x0C06EF76u, 4);  /* 0C06EF74 mov.l @(r0,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C06EF78u, 1);  /* 0C06EF76 mov.l @(disp,Rm),Rn */
	r2 = 0xC17A73Cu; UPD(0x0C06EF7Au, 1);  /* 0C06EF78 mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C06EF7A add Rm,Rn */
	IF(0x0C06EF7Cu); r3 = R32(r0 + r2); UPD(0x0C06EF7Eu, 2);  /* 0C06EF7C mov.l @(r0,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C06EF80u, 1);  /* 0C06EF7E mov.w @(disp,pc),Rn */
	IF(0x0C06EF80u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06EF82u, 1);  /* 0C06EF80 mov.b @(r0,Rm),Rn */
	r0 = r5 & 0xFF;  /* 0C06EF82 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C06EF86u, 2);  /* 0C06EF84 mov.l Rm,@Rn */
	r4 = 0xA9u; UPD(0x0C06EF88u, 1);  /* 0C06EF86 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C06EF88 mov Rm,Rn */
	IF(0x0C06EF8Au); r12 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C06EF8Cu, 2);  /* 0C06EF8A mov.b @(r0,Rm),Rn */
	r5 = 0x4000u; UPD(0x0C06EF8Eu, 1);  /* 0C06EF8C mov.w @(disp,pc),Rn */
	r2 = r12 & 0xFF;  /* 0C06EF8E extu.b Rm,Rn */
	r4 = 0x808080u; UPD(0x0C06EF92u, 2);  /* 0C06EF90 mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C06EF94u, 1);  /* 0C06EF92 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r2); UPD(0x0C06EF96u, 1);  /* 0C06EF94 mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C06EF96 mov #imm,Rn */
	W32(r15 + 0xCu, r3); UPD(0x0C06EF9Au, 2);  /* 0C06EF98 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r4); UPD(0x0C06EF9Cu, 1);  /* 0C06EF9A mov.l Rm,@(disp,Rn) */
	IF(0x0C06EF9Cu); { u32 t_ = r10; PR = 0x0C06EFA0u; r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C06EFA0u); }  /* 0C06EF9C jsr @Rn */
L_0C06EFA0: BLKS(0x0C06EFA0u);
	r0 = r9;  /* 0C06EFA0 mov Rm,Rn */
	r0 += 0x1u;  /* 0C06EFA2 add #imm,Rn */
	r9 = (u32)(s32)(s16)r0;  /* 0C06EFA4 exts.w Rm,Rn */
	r6 = 0x7u;  /* 0C06EFA6 mov #imm,Rn */
	T = (s32)r9 > (s32)r6;  /* 0C06EFA8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06EF58u, 8); goto L_0C06EF58; } goto L_0C06EFAE; }  /* 0C06EFAA bf/s */
L_0C06EFAE: BLKS(0x0C06EFAEu);
	{ IF(0x0C06EFB0u); ; /* slot nop */ UPD(0x0C06EE68u, 4); goto L_0C06EE68; }  /* 0C06EFAE bra */
L_0C06EFC0: BLKS(0x0C06EFC0u);
	r1 = 0xC06EB20u; UPD(0x0C06EFC2u, 1);  /* 0C06EFC0 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C06EFC2 mov Rm,Rn */
	UPD(0x0C06EFC4u, 1);
L_0C06EFC4: BLKS(0x0C06EFC4u);
	r15 = r14;  /* 0C06EFC4 mov Rm,Rn */
	IF(0x0C06EFC6u); PR = R32(r15); r15 += 4; UPD(0x0C06EFC8u, 2);  /* 0C06EFC6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06EFCAu, 1);  /* 0C06EFC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06EFCCu, 1);  /* 0C06EFCA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06EFCEu, 1);  /* 0C06EFCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06EFD0u, 1);  /* 0C06EFCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06EFD2u, 1);  /* 0C06EFD0 mov.l @Rm+,Rn */
	IF(0x0C06EFD2u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06EB20u: goto L_0C06EB20; case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C06EFD2 jmp @Rn */
L_0C06EFE0: BLKS(0x0C06EFE0u);
	r10 = 0xC0A0540u; UPD(0x0C06EFE2u, 1);  /* 0C06EFE0 mov.l @(disp,pc),Rn */
	IF(0x0C06EFE2u); { u32 t_ = r10; PR = 0x0C06EFE6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06EFE6u); }  /* 0C06EFE2 jsr @Rn */
L_0C06EFE6: BLKS(0x0C06EFE6u);
	IF(0x0C06EFE6u); T = (s32)r0 >= 0;  /* 0C06EFE6 cmp/pz Rn */
	if (!T) { UPD(0x0C06EFC0u, 4); goto L_0C06EFC0; }  /* 0C06EFE8 bf */
L_0C06EFEA: BLKS(0x0C06EFEAu);
	r2 = 0xB4u; UPD(0x0C06EFECu, 1);  /* 0C06EFEA mov.w @(disp,pc),Rn */
	IF(0x0C06EFECu); MACL = r9 * r2;  /* 0C06EFEC mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C06EFF0u, 3);  /* 0C06EFEE mov.l @(disp,pc),Rn */
	IF(0x0C06EFF0u); r11 = MACL;  /* 0C06EFF0 sts macl,Rn */
	IF(0x0C06EFF2u); MACL = r0 * r2;  /* 0C06EFF2 mul.l Rm,Rn */
	r11 += r10;  /* 0C06EFF4 add Rm,Rn */
	r8 = R32(r11); UPD(0x0C06EFF8u, 5);  /* 0C06EFF6 mov.l @Rm,Rn */
	IF(0x0C06EFF8u); r4 = MACL;  /* 0C06EFF8 sts macl,Rn */
	r4 += r10;  /* 0C06EFFA add Rm,Rn */
	r9 = R32(r4); UPD(0x0C06EFFEu, 3);  /* 0C06EFFC mov.l @Rm,Rn */
	r0 = 0xFFFFFEFFu; UPD(0x0C06F000u, 1);  /* 0C06EFFE mov.w @(disp,pc),Rn */
	r6 = 0x100u; UPD(0x0C06F002u, 1);  /* 0C06F000 mov.w @(disp,pc),Rn */
	r8 &= r0;  /* 0C06F002 and Rm,Rn */
	r12 = R32(r4 + 0x24u); UPD(0x0C06F006u, 2);  /* 0C06F004 mov.l @(disp,Rm),Rn */
	r9 &= r6;  /* 0C06F006 and Rm,Rn */
	r5 = R32(r4 + 0x28u); UPD(0x0C06F00Au, 2);  /* 0C06F008 mov.l @(disp,Rm),Rn */
	r8 |= r9;  /* 0C06F00A or Rm,Rn */
	r7 = R32(r11 + 0x2Cu); UPD(0x0C06F00Eu, 2);  /* 0C06F00C mov.l @(disp,Rm),Rn */
	r3 = R32(r11 + 0x30u); UPD(0x0C06F010u, 1);  /* 0C06F00E mov.l @(disp,Rm),Rn */
	r12 += r7;  /* 0C06F010 add Rm,Rn */
	r5 += r3;  /* 0C06F012 add Rm,Rn */
	W32(r11 + 0x24u, r12); UPD(0x0C06F016u, 3);  /* 0C06F014 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r5); UPD(0x0C06F018u, 1);  /* 0C06F016 mov.l Rm,@(disp,Rn) */
	{ W32(r11, r8); /* slot mov.l Rm,@Rn */ UPD(0x0C06EE68u, 3); goto L_0C06EE68; }  /* 0C06F018 bra */
L_0C06F070: BLKS(0x0C06F070u);
	r11 = 0xC0A0540u; UPD(0x0C06F072u, 1);  /* 0C06F070 mov.l @(disp,pc),Rn */
	IF(0x0C06F072u); { u32 t_ = r11; PR = 0x0C06F076u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06F076u); }  /* 0C06F072 jsr @Rn */
L_0C06F076: BLKS(0x0C06F076u);
	IF(0x0C06F076u); T = (s32)r0 >= 0;  /* 0C06F076 cmp/pz Rn */
	if (!T) { UPD(0x0C06EFC0u, 4); goto L_0C06EFC0; }  /* 0C06F078 bf */
L_0C06F07A: BLKS(0x0C06F07Au);
	r2 = 0xB4u; UPD(0x0C06F07Cu, 1);  /* 0C06F07A mov.w @(disp,pc),Rn */
	IF(0x0C06F07Cu); MACL = r0 * r2;  /* 0C06F07C mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C06F080u, 3);  /* 0C06F07E mov.l @(disp,pc),Rn */
	IF(0x0C06F080u); r7 = MACL;  /* 0C06F080 sts macl,Rn */
	r7 += r6;  /* 0C06F082 add Rm,Rn */
	r8 = R32(r7 + 0xCu); UPD(0x0C06F086u, 3);  /* 0C06F084 mov.l @(disp,Rm),Rn */
	T = (r8 & r8) == 0;  /* 0C06F086 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C06F08Au); MACL = r9 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C06EFC0u, 5); goto L_0C06EFC0; } goto L_0C06F08C; }  /* 0C06F088 bf/s */
L_0C06F08C: BLKS(0x0C06F08Cu);
	r0 = R32(r7 + 0x24u); UPD(0x0C06F08Eu, 3);  /* 0C06F08C mov.l @(disp,Rm),Rn */
	IF(0x0C06F08Eu); r4 = MACL;  /* 0C06F08E sts macl,Rn */
	r4 += r6;  /* 0C06F090 add Rm,Rn */
	r5 = R32(r4 + 0x2Cu); UPD(0x0C06F094u, 3);  /* 0C06F092 mov.l @(disp,Rm),Rn */
	r0 += r5;  /* 0C06F094 add Rm,Rn */
	W32(r4 + 0x24u, r0); UPD(0x0C06F098u, 2);  /* 0C06F096 mov.l Rm,@(disp,Rn) */
	r0 = R32(r4 + 0xCu); UPD(0x0C06F09Au, 1);  /* 0C06F098 mov.l @(disp,Rm),Rn */
	r6 = R32(r7 + 0x28u); UPD(0x0C06F09Cu, 1);  /* 0C06F09A mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C06F09C add #imm,Rn */
	r1 = R32(r4 + 0x30u); UPD(0x0C06F0A0u, 2);  /* 0C06F09E mov.l @(disp,Rm),Rn */
	r0 &= 0x7u;  /* 0C06F0A0 and #imm,r0 */
	r6 += r1;  /* 0C06F0A2 add Rm,Rn */
	W32(r4 + 0x28u, r6); UPD(0x0C06F0A6u, 3);  /* 0C06F0A4 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0xCu, r0); UPD(0x0C06F0A8u, 1);  /* 0C06F0A6 mov.l Rm,@(disp,Rn) */
L_0C06F0A8: BLKS(0x0C06F0A8u);
	r1 = 0xC0A0380u; UPD(0x0C06F0AAu, 1);  /* 0C06F0A8 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C06EFC4u, 3); goto L_0C06EFC4; }  /* 0C06F0AA bra */
L_0C06F0B0: BLKS(0x0C06F0B0u);
	r12 = 0xC0A0540u; UPD(0x0C06F0B2u, 1);  /* 0C06F0B0 mov.l @(disp,pc),Rn */
	IF(0x0C06F0B2u); { u32 t_ = r12; PR = 0x0C06F0B6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06F0B6u); }  /* 0C06F0B2 jsr @Rn */
L_0C06F0B6: BLKS(0x0C06F0B6u);
	IF(0x0C06F0B6u); T = (s32)r0 >= 0;  /* 0C06F0B6 cmp/pz Rn */
	if (T) { UPD(0x0C06F0BEu, 4); goto L_0C06F0BE; }  /* 0C06F0B8 bt */
L_0C06F0BA: BLKS(0x0C06F0BAu);
	{ IF(0x0C06F0BCu); ; /* slot nop */ UPD(0x0C06EFC0u, 3); goto L_0C06EFC0; }  /* 0C06F0BA bra */
L_0C06F0BE: BLKS(0x0C06F0BEu);
	r2 = 0xB4u; UPD(0x0C06F0C0u, 1);  /* 0C06F0BE mov.w @(disp,pc),Rn */
	IF(0x0C06F0C0u); MACL = r9 * r2;  /* 0C06F0C0 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C06F0C4u, 3);  /* 0C06F0C2 mov.l @(disp,pc),Rn */
	IF(0x0C06F0C4u); r8 = MACL;  /* 0C06F0C4 sts macl,Rn */
	IF(0x0C06F0C6u); MACL = r0 * r2;  /* 0C06F0C6 mul.l Rm,Rn */
	r8 += r5;  /* 0C06F0C8 add Rm,Rn */
	r1 = R32(r8 + 0x2Cu); UPD(0x0C06F0CCu, 5);  /* 0C06F0CA mov.l @(disp,Rm),Rn */
	IF(0x0C06F0CCu); r6 = MACL;  /* 0C06F0CC sts macl,Rn */
	r6 += r5;  /* 0C06F0CE add Rm,Rn */
	r0 = R32(r6 + 0x24u); UPD(0x0C06F0D2u, 3);  /* 0C06F0D0 mov.l @(disp,Rm),Rn */
	r7 = R32(r6 + 0x28u); UPD(0x0C06F0D4u, 1);  /* 0C06F0D2 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C06F0D4 add Rm,Rn */
	r4 = R32(r8 + 0x30u); UPD(0x0C06F0D8u, 2);  /* 0C06F0D6 mov.l @(disp,Rm),Rn */
	r11 = 0xC058130u; UPD(0x0C06F0DAu, 1);  /* 0C06F0D8 mov.l @(disp,pc),Rn */
	r7 += r4;  /* 0C06F0DA add Rm,Rn */
	r10 = 0xC057430u; UPD(0x0C06F0DEu, 2);  /* 0C06F0DC mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C06F0DE mov Rm,Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C06F0E2u, 2);  /* 0C06F0E0 mov.l Rm,@(disp,Rn) */
	IF(0x0C06F0E2u); { u32 t_ = r11; PR = 0x0C06F0E6u; W32(r8 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C06F0E6u); }  /* 0C06F0E2 jsr @Rn */
L_0C06F0E6: BLKS(0x0C06F0E6u);
	r4 = r9;  /* 0C06F0E6 mov Rm,Rn */
	IF(0x0C06F0E8u); { u32 t_ = r10; PR = 0x0C06F0ECu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C06F0ECu); }  /* 0C06F0E8 jsr @Rn */
L_0C06F0EC: BLKS(0x0C06F0ECu);
	r10 = 0x86u; UPD(0x0C06F0EEu, 1);  /* 0C06F0EC mov.w @(disp,pc),Rn */
	r3 = 0x5Fu;  /* 0C06F0EE mov #imm,Rn */
	r10 += r8;  /* 0C06F0F0 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C06F0F4u, 3);  /* 0C06F0F2 mov.w @Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C06F0F4 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C06F0FEu, 4); goto L_0C06F0FE; }  /* 0C06F0F6 bt */
L_0C06F0F8: BLKS(0x0C06F0F8u);
	r12 = 0x60u;  /* 0C06F0F8 mov #imm,Rn */
	W16(r10, r12); UPD(0x0C06F0FCu, 2);  /* 0C06F0FA mov.w Rm,@Rn */
	r0 = 0x60u;  /* 0C06F0FC mov #imm,Rn */
	UPD(0x0C06F0FEu, 1);
L_0C06F0FE: BLKS(0x0C06F0FEu);
	r3 = 0x1A0u; UPD(0x0C06F100u, 1);  /* 0C06F0FE mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C06F100 exts.w Rm,Rn */
	r2 = (u32)(s32)(s16)r3;  /* 0C06F102 exts.w Rm,Rn */
	T = (s32)r11 > (s32)r2;  /* 0C06F104 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C06F110u, 6); goto L_0C06F110; } goto L_0C06F10A; }  /* 0C06F106 bf/s */
L_0C06F10A: BLKS(0x0C06F10Au);
	W16(r10, r2); UPD(0x0C06F10Cu, 2);  /* 0C06F10A mov.w Rm,@Rn */
	r0 = r3;  /* 0C06F10C mov Rm,Rn */
	r0 = (u32)(s32)(s16)r0;  /* 0C06F10E exts.w Rm,Rn */
	UPD(0x0C06F110u, 2);
L_0C06F110: BLKS(0x0C06F110u);
	r0 += 0x8u;  /* 0C06F110 add #imm,Rn */
	IF(0x0C06F112u); r0 >>= 2;  /* 0C06F112 shlr2 Rn */
	r7 = 0xC0A0380u; UPD(0x0C06F116u, 3);  /* 0C06F114 mov.l @(disp,pc),Rn */
	IF(0x0C06F116u); r0 >>= 2;  /* 0C06F116 shlr2 Rn */
	r11 = 0x9Cu; UPD(0x0C06F11Au, 2);  /* 0C06F118 mov.w @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C06F11A and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C06F11Eu, 2);  /* 0C06F11C mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C06F11E mov Rm,Rn */
	IF(0x0C06F120u); { u32 t_ = r7; PR = 0x0C06F124u; r11 += r8; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C06F124u); }  /* 0C06F120 jsr @Rn */
L_0C06F124: BLKS(0x0C06F124u);
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C06F126u, 1);  /* 0C06F124 mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06F126 tst Rm,Rn */
	if (T) { UPD(0x0C06F190u, 4); goto L_0C06F190; }  /* 0C06F128 bt */
L_0C06F12A: BLKS(0x0C06F12Au);
	r2 = 0x99u; UPD(0x0C06F12Cu, 1);  /* 0C06F12A mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C06F12C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C06F130u, 2);  /* 0C06F12E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C06F130 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C06F132 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C06F134 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06F1B6u, 6); goto L_0C06F1B6; } UPD(0x0C06F13Au, 1); goto L_0C06F13A; }  /* 0C06F136 bf/s */
L_0C06F13A: BLKS(0x0C06F13Au);
	r12 = (u32)(s32)(s16)R16(r10); UPD(0x0C06F13Cu, 1);  /* 0C06F13A mov.w @Rm,Rn */
	r4 = 0x0u;  /* 0C06F13C mov #imm,Rn */
	r10 = 0xC058060u; UPD(0x0C06F140u, 2);  /* 0C06F13E mov.l @(disp,pc),Rn */
	W8(r2, r4); UPD(0x0C06F142u, 1);  /* 0C06F140 mov.b Rm,@Rn */
	r5 = 0x119999u; UPD(0x0C06F144u, 1);  /* 0C06F142 mov.l @(disp,pc),Rn */
	IF(0x0C06F144u); { u32 t_ = r10; PR = 0x0C06F148u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06F148u); }  /* 0C06F144 jsr @Rn */
L_0C06F148: BLKS(0x0C06F148u);
	r10 = R32(r8 + 0x24u); UPD(0x0C06F14Au, 1);  /* 0C06F148 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C06F14A mov Rm,Rn */
	r10 += r0;  /* 0C06F14C add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C06F150u, 3);  /* 0C06F14E mov.l @(disp,pc),Rn */
	r7 = 0x10000u; UPD(0x0C06F152u, 1);  /* 0C06F150 mov.l @(disp,pc),Rn */
	r5 = 0x160000u; UPD(0x0C06F154u, 1);  /* 0C06F152 mov.l @(disp,pc),Rn */
	IF(0x0C06F154u); { u32 t_ = r0; PR = 0x0C06F158u; r10 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06F158u); }  /* 0C06F154 jsr @Rn */
L_0C06F158: BLKS(0x0C06F158u);
	r8 = R32(r8 + 0x28u); UPD(0x0C06F15Au, 1);  /* 0C06F158 mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C06F15A add Rm,Rn */
	r0 = 0xC050D70u; UPD(0x0C06F15Eu, 2);  /* 0C06F15C mov.l @(disp,pc),Rn */
	IF(0x0C06F15Eu); { u32 t_ = r0; PR = 0x0C06F162u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C06F162u); }  /* 0C06F15E jsr @Rn */
L_0C06F162: BLKS(0x0C06F162u);
	r0 += r12;  /* 0C06F162 add Rm,Rn */
	r12 = 0xC0A8A50u; UPD(0x0C06F166u, 2);  /* 0C06F164 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06F166 add #imm,Rn */
	r3 = 0x30000u; UPD(0x0C06F16Au, 2);  /* 0C06F168 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C06F16A exts.w Rm,Rn */
	W32(r15, r3); UPD(0x0C06F16Eu, 2);  /* 0C06F16C mov.l Rm,@Rn */
	r5 = r10;  /* 0C06F16E mov Rm,Rn */
	r4 = 0x7u;  /* 0C06F170 mov #imm,Rn */
	r6 = r8;  /* 0C06F172 mov Rm,Rn */
	IF(0x0C06F174u); { u32 t_ = r12; PR = 0x0C06F178u; r7 = r2; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C0A8A50, 0x0C0A8A50u, 0x0C06F178u); }  /* 0C06F174 jsr @Rn */
L_0C06F178: BLKS(0x0C06F178u);
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C06F17Au, 1);  /* 0C06F178 mov.b @Rm,Rn */
	r15 += 0x4u;  /* 0C06F17A add #imm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C06F17C add #imm,Rn */
	r0 = r5 & 0xFF;  /* 0C06F17E extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06F180 tst Rm,Rn */
	{ u32 c_ = !T; W8(r11, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06F1B6u, 7); goto L_0C06F1B6; } UPD(0x0C06F186u, 1); goto L_0C06F186; }  /* 0C06F182 bf/s */
L_0C06F186: BLKS(0x0C06F186u);
	r1 = 0xC0580D0u; UPD(0x0C06F188u, 1);  /* 0C06F186 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C06EFC4u, 3); goto L_0C06EFC4; }  /* 0C06F188 bra */
L_0C06F190: BLKS(0x0C06F190u);
	r4 = r9;  /* 0C06F190 mov Rm,Rn */
	r9 = 0xC0A9E40u; UPD(0x0C06F194u, 2);  /* 0C06F192 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C06F194 mov #imm,Rn */
	IF(0x0C06F196u); { u32 t_ = r9; PR = 0x0C06F19Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C06F19Au); }  /* 0C06F196 jsr @Rn */
L_0C06F19A: BLKS(0x0C06F19Au);
	T = (r0 & r0) == 0;  /* 0C06F19A tst Rm,Rn */
	if (T) { UPD(0x0C06F1B6u, 4); goto L_0C06F1B6; }  /* 0C06F19C bt */
L_0C06F19E: BLKS(0x0C06F19Eu);
	r0 = r8;  /* 0C06F19E mov Rm,Rn */
	r4 = 0xA9u; UPD(0x0C06F1A2u, 2);  /* 0C06F1A0 mov.w @(disp,pc),Rn */
	IF(0x0C06F1A2u); r10 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C06F1A4u, 1);  /* 0C06F1A2 mov.b @(r0,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C06F1A6u, 1);  /* 0C06F1A4 mov.l @(disp,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C06F1A8u, 1);  /* 0C06F1A6 mov.l @(disp,Rm),Rn */
	r8 = 0xC0A9BB0u; UPD(0x0C06F1AAu, 1);  /* 0C06F1A8 mov.l @(disp,pc),Rn */
	IF(0x0C06F1AAu); { u32 t_ = r8; PR = 0x0C06F1AEu; r6 = r10 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C06F1AEu); }  /* 0C06F1AA jsr @Rn */
L_0C06F1AE: BLKS(0x0C06F1AEu);
	T = (r0 & r0) == 0;  /* 0C06F1AE tst Rm,Rn */
	if (T) { UPD(0x0C06F1B6u, 4); goto L_0C06F1B6; }  /* 0C06F1B0 bt */
L_0C06F1B2: BLKS(0x0C06F1B2u);
	r6 = 0x10u;  /* 0C06F1B2 mov #imm,Rn */
	W8(r11, r6); UPD(0x0C06F1B6u, 2);  /* 0C06F1B4 mov.b Rm,@Rn */
L_0C06F1B6: BLKS(0x0C06F1B6u);
	{ IF(0x0C06F1B8u); ; /* slot nop */ UPD(0x0C06EE68u, 3); goto L_0C06EE68; }  /* 0C06F1B6 bra */
L_0C06F210: BLKS(0x0C06F210u);
	r11 = 0xC0A0540u; UPD(0x0C06F212u, 1);  /* 0C06F210 mov.l @(disp,pc),Rn */
	IF(0x0C06F212u); { u32 t_ = r11; PR = 0x0C06F216u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06F216u); }  /* 0C06F212 jsr @Rn */
L_0C06F216: BLKS(0x0C06F216u);
	IF(0x0C06F216u); T = (s32)r0 >= 0;  /* 0C06F216 cmp/pz Rn */
	if (T) { UPD(0x0C06F21Eu, 4); goto L_0C06F21E; }  /* 0C06F218 bt */
L_0C06F21A: BLKS(0x0C06F21Au);
	{ IF(0x0C06F21Cu); ; /* slot nop */ UPD(0x0C06EFC0u, 3); goto L_0C06EFC0; }  /* 0C06F21A bra */
L_0C06F21E: BLKS(0x0C06F21Eu);
	r2 = 0xB4u; UPD(0x0C06F220u, 1);  /* 0C06F21E mov.w @(disp,pc),Rn */
	IF(0x0C06F220u); MACL = r9 * r2;  /* 0C06F220 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C06F224u, 3);  /* 0C06F222 mov.l @(disp,pc),Rn */
	IF(0x0C06F224u); r3 = MACL;  /* 0C06F224 sts macl,Rn */
	IF(0x0C06F226u); MACL = r0 * r2;  /* 0C06F226 mul.l Rm,Rn */
	r3 += r8;  /* 0C06F228 add Rm,Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C06F22Cu, 5);  /* 0C06F22A mov.l @(disp,Rm),Rn */
	IF(0x0C06F22Cu); r0 = MACL;  /* 0C06F22C sts macl,Rn */
	r0 += r8;  /* 0C06F22E add Rm,Rn */
	r4 = R32(r0 + 0x24u); UPD(0x0C06F232u, 3);  /* 0C06F230 mov.l @(disp,Rm),Rn */
	r7 = R32(r0 + 0x28u); UPD(0x0C06F234u, 1);  /* 0C06F232 mov.l @(disp,Rm),Rn */
	r4 += r6;  /* 0C06F234 add Rm,Rn */
	r1 = R32(r3 + 0x30u); UPD(0x0C06F238u, 2);  /* 0C06F236 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0xCu); UPD(0x0C06F23Au, 1);  /* 0C06F238 mov.l @(disp,Rm),Rn */
	r7 += r1;  /* 0C06F23A add Rm,Rn */
	W32(r3 + 0x24u, r4); UPD(0x0C06F23Eu, 2);  /* 0C06F23C mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C06F23E tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06F300u, 4); goto L_0C06F300; } UPD(0x0C06F244u, 1); goto L_0C06F244; }  /* 0C06F240 bt/s */
L_0C06F244: BLKS(0x0C06F244u);
	IF(0x0C06F244u); T = (s32)r2 >= 0;  /* 0C06F244 cmp/pz Rn */
	{ u32 c_ = !T; r2 += 0xFFFFFFF5u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06F2D0u, 4); goto L_0C06F2D0; } goto L_0C06F24A; }  /* 0C06F246 bf/s */
L_0C06F24A: BLKS(0x0C06F24Au);
	r0 = 0x3u;  /* 0C06F24A mov #imm,Rn */
	T = r2 > r0;  /* 0C06F24C cmp/hi Rm,Rn */
	{ u32 c_ = T; r4 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F2D0u, 6); goto L_0C06F2D0; } goto L_0C06F252; }  /* 0C06F24E bt/s */
L_0C06F252: BLKS(0x0C06F252u);
	r10 = 0xB4u; UPD(0x0C06F254u, 2);  /* 0C06F252 mov.w @(disp,pc),Rn */
	IF(0x0C06F254u); MACL = r9 * r10;  /* 0C06F254 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C06F258u, 3);  /* 0C06F256 mov.l @(disp,pc),Rn */
	IF(0x0C06F258u); r10 = MACL;  /* 0C06F258 sts macl,Rn */
	r10 += r7;  /* 0C06F25A add Rm,Rn */
	r0 = R32(r10 + 0xCu); UPD(0x0C06F25Eu, 3);  /* 0C06F25C mov.l @(disp,Rm),Rn */
	r11 = 0xC17A718u; UPD(0x0C06F260u, 1);  /* 0C06F25E mov.l @(disp,pc),Rn */
	IF(0x0C06F260u); r0 <<= 2;  /* 0C06F260 shll2 Rn */
	r5 = 0xC0A0380u; UPD(0x0C06F264u, 2);  /* 0C06F262 mov.l @(disp,pc),Rn */
	IF(0x0C06F264u); r12 = R32(r0 + r11); UPD(0x0C06F266u, 1);  /* 0C06F264 mov.l @(r0,Rm),Rn */
	r8 = 0xC0A9E40u; UPD(0x0C06F268u, 1);  /* 0C06F266 mov.l @(disp,pc),Rn */
	IF(0x0C06F268u); { u32 t_ = r5; PR = 0x0C06F26Cu; W32(r10 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C06F26Cu); }  /* 0C06F268 jsr @Rn */
L_0C06F26C: BLKS(0x0C06F26Cu);
	r4 = r9;  /* 0C06F26C mov Rm,Rn */
	r5 = 0x2Du;  /* 0C06F26E mov #imm,Rn */
	IF(0x0C06F270u); { u32 t_ = r8; PR = 0x0C06F274u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C06F274u); }  /* 0C06F270 jsr @Rn */
L_0C06F274: BLKS(0x0C06F274u);
	T = (r0 & r0) == 0;  /* 0C06F274 tst Rm,Rn */
	if (T) { UPD(0x0C06F1B6u, 4); goto L_0C06F1B6; }  /* 0C06F276 bt */
L_0C06F278: BLKS(0x0C06F278u);
	r4 = r9;  /* 0C06F278 mov Rm,Rn */
	r11 = 0xC058090u; UPD(0x0C06F27Cu, 2);  /* 0C06F27A mov.l @(disp,pc),Rn */
	r9 = 0xC057390u; UPD(0x0C06F27Eu, 1);  /* 0C06F27C mov.l @(disp,pc),Rn */
	IF(0x0C06F27Eu); { u32 t_ = r11; PR = 0x0C06F282u; IF(0x0C06F280u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C06F282u); }  /* 0C06F27E jsr @Rn */
L_0C06F282: BLKS(0x0C06F282u);
	r7 = 0x280u; UPD(0x0C06F284u, 1);  /* 0C06F282 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C06F284 exts.w Rm,Rn */
	IF(0x0C06F286u); MACL = r1 * r7;  /* 0C06F286 mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C06F28Au, 4);  /* 0C06F288 mov.l @(disp,pc),Rn */
	IF(0x0C06F28Au); r0 = MACL;  /* 0C06F28A sts macl,Rn */
	r0 += r5;  /* 0C06F28C add Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C06F290u, 3);  /* 0C06F28E mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C06F292u, 1);  /* 0C06F290 mov.l @(disp,Rm),Rn */
	r7 = R32(r0 + 0x14u); UPD(0x0C06F294u, 1);  /* 0C06F292 mov.l @(disp,Rm),Rn */
	IF(0x0C06F294u); { u32 t_ = r9; PR = 0x0C06F298u; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C06F298u); }  /* 0C06F294 jsr @Rn */
L_0C06F298: BLKS(0x0C06F298u);
	r8 = 0xC050D70u; UPD(0x0C06F29Au, 1);  /* 0C06F298 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06F29A add #imm,Rn */
	r12 = R32(r10 + 0x24u); UPD(0x0C06F29Eu, 2);  /* 0C06F29C mov.l @(disp,Rm),Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C06F29E exts.w Rm,Rn */
	r2 = 0x60000u; UPD(0x0C06F2A2u, 2);  /* 0C06F2A0 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C06F2A2 mov #imm,Rn */
	r3 = 0x30000u; UPD(0x0C06F2A6u, 2);  /* 0C06F2A4 mov.l @(disp,pc),Rn */
	r12 += r2;  /* 0C06F2A6 add Rm,Rn */
	IF(0x0C06F2A8u); { u32 t_ = r8; PR = 0x0C06F2ACu; W32(r15, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C06F2ACu); }  /* 0C06F2A8 jsr @Rn */
L_0C06F2AC: BLKS(0x0C06F2ACu);
	r6 = 0xC17A754u; UPD(0x0C06F2AEu, 1);  /* 0C06F2AC mov.l @(disp,pc),Rn */
	IF(0x0C06F2AEu); r0 <<= 2;  /* 0C06F2AE shll2 Rn */
	IF(0x0C06F2B0u); r4 = R32(r0 + r6); UPD(0x0C06F2B2u, 2);  /* 0C06F2B0 mov.l @(r0,Rm),Rn */
	r5 = r12;  /* 0C06F2B2 mov Rm,Rn */
	r9 = 0xC0A8690u; UPD(0x0C06F2B6u, 2);  /* 0C06F2B4 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C06F2B6 mov Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C06F2BAu, 2);  /* 0C06F2B8 mov.l Rm,@(disp,Rn) */
	r4 = 0x3u;  /* 0C06F2BA mov #imm,Rn */
	IF(0x0C06F2BCu); { u32 t_ = r9; PR = 0x0C06F2C0u; r6 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A8690, 0x0C0A8690u, 0x0C06F2C0u); }  /* 0C06F2BC jsr @Rn */
L_0C06F2C0: BLKS(0x0C06F2C0u);
	r15 += 0x8u;  /* 0C06F2C0 add #imm,Rn */
	UPD(0x0C06F2C2u, 1);
L_0C06F2C2: BLKS(0x0C06F2C2u);
	{ IF(0x0C06F2C4u); ; /* slot nop */ UPD(0x0C06EE68u, 3); goto L_0C06EE68; }  /* 0C06F2C2 bra */
L_0C06F2D0: BLKS(0x0C06F2D0u);
	r3 = 0xB4u; UPD(0x0C06F2D2u, 1);  /* 0C06F2D0 mov.w @(disp,pc),Rn */
	r11 = 0x3u;  /* 0C06F2D2 mov #imm,Rn */
	IF(0x0C06F2D4u); MACL = r9 * r3;  /* 0C06F2D4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C06F2D8u, 4);  /* 0C06F2D6 mov.l @(disp,pc),Rn */
	IF(0x0C06F2D8u); r3 = MACL;  /* 0C06F2D8 sts macl,Rn */
	r8 = 0x99u; UPD(0x0C06F2DCu, 2);  /* 0C06F2DA mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C06F2DC add Rm,Rn */
	r8 += r3;  /* 0C06F2DE add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C06F2E2u, 3);  /* 0C06F2E0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C06F2E2 add #imm,Rn */
	r7 = r4 & 0xFF;  /* 0C06F2E4 extu.b Rm,Rn */
	T = r7 > r11;  /* 0C06F2E6 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r8, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06F2C2u, 6); goto L_0C06F2C2; } UPD(0x0C06F2ECu, 1); goto L_0C06F2EC; }  /* 0C06F2E8 bf/s */
L_0C06F2EC: BLKS(0x0C06F2ECu);
	r0 = R32(r3 + 0xCu); UPD(0x0C06F2EEu, 1);  /* 0C06F2EC mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C06F2EE mov Rm,Rn */
	r2 = 0xC0A0380u; UPD(0x0C06F2F2u, 2);  /* 0C06F2F0 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C06F2F2 add #imm,Rn */
	W32(r3 + 0xCu, r0); UPD(0x0C06F2F6u, 2);  /* 0C06F2F4 mov.l Rm,@(disp,Rn) */
	IF(0x0C06F2F6u); { u32 t_ = r2; PR = 0x0C06F2FAu; r9 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C06F2FAu); }  /* 0C06F2F6 jsr @Rn */
L_0C06F2FA: BLKS(0x0C06F2FAu);
	W8(r8, r9); UPD(0x0C06F2FCu, 1);  /* 0C06F2FA mov.b Rm,@Rn */
L_0C06F2FC: BLKS(0x0C06F2FCu);
	{ IF(0x0C06F2FEu); ; /* slot nop */ UPD(0x0C06EE68u, 3); goto L_0C06EE68; }  /* 0C06F2FC bra */
L_0C06F300: BLKS(0x0C06F300u);
	r5 = 0xA5u; UPD(0x0C06F302u, 1);  /* 0C06F300 mov.w @(disp,pc),Rn */
	IF(0x0C06F302u); r10 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C06F304u, 1);  /* 0C06F302 mov.b @(r0,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C06F304 tst Rm,Rn */
	if (T) { UPD(0x0C06F2FCu, 4); goto L_0C06F2FC; }  /* 0C06F306 bt */
L_0C06F308: BLKS(0x0C06F308u);
	r12 = 0x1u;  /* 0C06F308 mov #imm,Rn */
	{ W32(r3 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06F0A8u, 4); goto L_0C06F0A8; }  /* 0C06F30A bra */
L_0C06F350: BLKS(0x0C06F350u);
	r11 = 0xC0A0540u; UPD(0x0C06F352u, 1);  /* 0C06F350 mov.l @(disp,pc),Rn */
	IF(0x0C06F352u); { u32 t_ = r11; PR = 0x0C06F356u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C06F356u); }  /* 0C06F352 jsr @Rn */
L_0C06F356: BLKS(0x0C06F356u);
	IF(0x0C06F356u); T = (s32)r0 >= 0;  /* 0C06F356 cmp/pz Rn */
	if (T) { UPD(0x0C06F35Eu, 4); goto L_0C06F35E; }  /* 0C06F358 bt */
L_0C06F35A: BLKS(0x0C06F35Au);
	{ IF(0x0C06F35Cu); ; /* slot nop */ UPD(0x0C06EFC0u, 3); goto L_0C06EFC0; }  /* 0C06F35A bra */
L_0C06F35E: BLKS(0x0C06F35Eu);
	r2 = 0xB4u; UPD(0x0C06F360u, 1);  /* 0C06F35E mov.w @(disp,pc),Rn */
	IF(0x0C06F360u); MACL = r9 * r2;  /* 0C06F360 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C06F364u, 3);  /* 0C06F362 mov.l @(disp,pc),Rn */
	IF(0x0C06F364u); r11 = MACL;  /* 0C06F364 sts macl,Rn */
	IF(0x0C06F366u); MACL = r0 * r2;  /* 0C06F366 mul.l Rm,Rn */
	r11 += r4;  /* 0C06F368 add Rm,Rn */
	r7 = R32(r11 + 0x2Cu); UPD(0x0C06F36Cu, 5);  /* 0C06F36A mov.l @(disp,Rm),Rn */
	IF(0x0C06F36Cu); r5 = MACL;  /* 0C06F36C sts macl,Rn */
	r5 += r4;  /* 0C06F36E add Rm,Rn */
	r1 = R32(r11 + 0x30u); UPD(0x0C06F372u, 3);  /* 0C06F370 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C06F372 mov Rm,Rn */
	r3 = R32(r5 + 0x24u); UPD(0x0C06F376u, 2);  /* 0C06F374 mov.l @(disp,Rm),Rn */
	r0 = R32(r5 + 0x28u); UPD(0x0C06F378u, 1);  /* 0C06F376 mov.l @(disp,Rm),Rn */
	r3 += r7;  /* 0C06F378 add Rm,Rn */
	r10 = 0xC058130u; UPD(0x0C06F37Cu, 2);  /* 0C06F37A mov.l @(disp,pc),Rn */
	r0 += r1;  /* 0C06F37C add Rm,Rn */
	r8 = 0xC057430u; UPD(0x0C06F380u, 2);  /* 0C06F37E mov.l @(disp,pc),Rn */
	W32(r11 + 0x24u, r3); UPD(0x0C06F382u, 1);  /* 0C06F380 mov.l Rm,@(disp,Rn) */
	IF(0x0C06F382u); { u32 t_ = r10; PR = 0x0C06F386u; W32(r11 + 0x28u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C06F386u); }  /* 0C06F382 jsr @Rn */
L_0C06F386: BLKS(0x0C06F386u);
	r5 = 0x2u;  /* 0C06F386 mov #imm,Rn */
	IF(0x0C06F388u); { u32 t_ = r8; PR = 0x0C06F38Cu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C06F38Cu); }  /* 0C06F388 jsr @Rn */
L_0C06F38C: BLKS(0x0C06F38Cu);
	r8 = 0x86u; UPD(0x0C06F38Eu, 1);  /* 0C06F38C mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C06F38E mov Rm,Rn */
	r8 += r11;  /* 0C06F390 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F394u, 3);  /* 0C06F392 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C06F394 add #imm,Rn */
	r6 = 0xC0A0380u; UPD(0x0C06F398u, 2);  /* 0C06F396 mov.l @(disp,pc),Rn */
	IF(0x0C06F398u); r0 >>= 2;  /* 0C06F398 shlr2 Rn */
	IF(0x0C06F39Au); r0 >>= 2;  /* 0C06F39A shlr2 Rn */
	r12 = 0xC0A9E40u; UPD(0x0C06F39Eu, 3);  /* 0C06F39C mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C06F39E and #imm,r0 */
	IF(0x0C06F3A0u); { u32 t_ = r6; PR = 0x0C06F3A4u; W32(r11 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C06F3A4u); }  /* 0C06F3A0 jsr @Rn */
L_0C06F3A4: BLKS(0x0C06F3A4u);
	r4 = r9;  /* 0C06F3A4 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C06F3A6 mov #imm,Rn */
	IF(0x0C06F3A8u); { u32 t_ = r12; PR = 0x0C06F3ACu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C06F3ACu); }  /* 0C06F3A8 jsr @Rn */
L_0C06F3AC: BLKS(0x0C06F3ACu);
	T = (r0 & r0) == 0;  /* 0C06F3AC tst Rm,Rn */
	if (T) { UPD(0x0C06F2FCu, 4); goto L_0C06F2FC; }  /* 0C06F3AE bt */
L_0C06F3B0: BLKS(0x0C06F3B0u);
	r0 = r11;  /* 0C06F3B0 mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C06F3B4u, 2);  /* 0C06F3B2 mov.w @(disp,pc),Rn */
	r12 = 0xC0A9BB0u; UPD(0x0C06F3B6u, 1);  /* 0C06F3B4 mov.l @(disp,pc),Rn */
	IF(0x0C06F3B6u); r10 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C06F3B8u, 1);  /* 0C06F3B6 mov.b @(r0,Rm),Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C06F3BAu, 1);  /* 0C06F3B8 mov.l @(disp,Rm),Rn */
	r6 = r10 & 0xFF;  /* 0C06F3BA extu.b Rm,Rn */
	IF(0x0C06F3BCu); { u32 t_ = r12; PR = 0x0C06F3C0u; r5 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C06F3C0u); }  /* 0C06F3BC jsr @Rn */
L_0C06F3C0: BLKS(0x0C06F3C0u);
	T = (r0 & r0) == 0;  /* 0C06F3C0 tst Rm,Rn */
	if (T) { UPD(0x0C06F2FCu, 4); goto L_0C06F2FC; }  /* 0C06F3C2 bt */
L_0C06F3C4: BLKS(0x0C06F3C4u);
	r12 = 0xC050D70u; UPD(0x0C06F3C6u, 1);  /* 0C06F3C4 mov.l @(disp,pc),Rn */
	r10 = 0xC058060u; UPD(0x0C06F3C8u, 1);  /* 0C06F3C6 mov.l @(disp,pc),Rn */
	IF(0x0C06F3C8u); { u32 t_ = r12; PR = 0x0C06F3CCu; r4 = 0xFu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C06F3CCu); }  /* 0C06F3C8 jsr @Rn */
L_0C06F3CC: BLKS(0x0C06F3CCu);
	r5 = (u32)(s32)(s16)R16(r8); UPD(0x0C06F3CEu, 1);  /* 0C06F3CC mov.w @Rm,Rn */
	r0 += r5;  /* 0C06F3CE add Rm,Rn */
	r8 = 0x80000u; UPD(0x0C06F3D2u, 2);  /* 0C06F3D0 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFF8u;  /* 0C06F3D2 add #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C06F3D4 exts.w Rm,Rn */
	r5 = r8;  /* 0C06F3D6 mov Rm,Rn */
	IF(0x0C06F3D8u); { u32 t_ = r10; PR = 0x0C06F3DCu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06F3DCu); }  /* 0C06F3D8 jsr @Rn */
L_0C06F3DC: BLKS(0x0C06F3DCu);
	r5 = r8;  /* 0C06F3DC mov Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C06F3E0u, 2);  /* 0C06F3DE mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C06F3E0 mov Rm,Rn */
	r10 = R32(r11 + 0x24u); UPD(0x0C06F3E4u, 2);  /* 0C06F3E2 mov.l @(disp,Rm),Rn */
	IF(0x0C06F3E4u); { u32 t_ = r8; PR = 0x0C06F3E8u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06F3E8u); }  /* 0C06F3E4 jsr @Rn */
L_0C06F3E8: BLKS(0x0C06F3E8u);
	r6 = R32(r11 + 0x28u); UPD(0x0C06F3EAu, 1);  /* 0C06F3E8 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06F3EA add #imm,Rn */
	r8 = 0x20000u; UPD(0x0C06F3EEu, 2);  /* 0C06F3EC mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C06F3EE add Rm,Rn */
	r11 = 0xC0A81B0u; UPD(0x0C06F3F2u, 2);  /* 0C06F3F0 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C06F3F2 mov #imm,Rn */
	W32(r15, r8); UPD(0x0C06F3F6u, 2);  /* 0C06F3F4 mov.l Rm,@Rn */
	r5 = r10;  /* 0C06F3F6 mov Rm,Rn */
	IF(0x0C06F3F8u); { u32 t_ = r11; PR = 0x0C06F3FCu; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C06F3FCu); }  /* 0C06F3F8 jsr @Rn */
L_0C06F3FC: BLKS(0x0C06F3FCu);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C06F186u, 3); goto L_0C06F186; }  /* 0C06F3FC bra */
}

void f_0C06F440(sh3_t *c)
{
	LOCALS;
L_0C06F440: BLKS(0x0C06F440u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06F442u, 1);  /* 0C06F440 mov.l Rm,@-Rn */
	r4 = 0x3u;  /* 0C06F442 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06F446u, 2);  /* 0C06F444 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06F448u, 1);  /* 0C06F446 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06F44Au, 1);  /* 0C06F448 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06F44Cu, 1);  /* 0C06F44A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06F44Eu, 1);  /* 0C06F44C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06F450u, 1);  /* 0C06F44E mov.l Rm,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C06F452u, 1);  /* 0C06F450 mov.l @(disp,pc),Rn */
	IF(0x0C06F452u); r15 -= 4; W32(r15, PR); UPD(0x0C06F454u, 1);  /* 0C06F452 sts.l pr,@-Rn */
	r5 = 0x8000u; UPD(0x0C06F456u, 1);  /* 0C06F454 mov.l @(disp,pc),Rn */
	IF(0x0C06F456u); { u32 t_ = r8; PR = 0x0C06F45Au; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C06F45Au); }  /* 0C06F456 jsr @Rn */
L_0C06F45A: BLKS(0x0C06F45Au);
	T = (r0 & r0) == 0;  /* 0C06F45A tst Rm,Rn */
	r10 = 0xC2755BCu; UPD(0x0C06F45Eu, 2);  /* 0C06F45C mov.l @(disp,pc),Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06F480u, 3); goto L_0C06F480; } UPD(0x0C06F462u, 1); goto L_0C06F462; }  /* 0C06F45E bf/s */
L_0C06F462: BLKS(0x0C06F462u);
	r15 = r14;  /* 0C06F462 mov Rm,Rn */
	IF(0x0C06F464u); PR = R32(r15); r15 += 4; UPD(0x0C06F466u, 2);  /* 0C06F464 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06F468u, 1);  /* 0C06F466 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06F46Au, 1);  /* 0C06F468 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06F46Cu, 1);  /* 0C06F46A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06F46Eu, 1);  /* 0C06F46C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06F470u, 1);  /* 0C06F46E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06F472u, 1);  /* 0C06F470 mov.l @Rm+,Rn */
	IF(0x0C06F472u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06F472 rts */
L_0C06F480: BLKS(0x0C06F480u);
	r8 = 0xC0606C0u; UPD(0x0C06F482u, 1);  /* 0C06F480 mov.l @(disp,pc),Rn */
	r9 = 0xC17AC40u; UPD(0x0C06F484u, 1);  /* 0C06F482 mov.l @(disp,pc),Rn */
	IF(0x0C06F484u); { u32 t_ = r8; PR = 0x0C06F488u; r4 = 0xDu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C06F488u); }  /* 0C06F484 jsr @Rn */
L_0C06F488: BLKS(0x0C06F488u);
	T = (r0 & r0) == 0;  /* 0C06F488 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06F462u, 4); goto L_0C06F462; } goto L_0C06F48E; }  /* 0C06F48A bt/s */
L_0C06F48E: BLKS(0x0C06F48Eu);
	r11 = 0x0u;  /* 0C06F48E mov #imm,Rn */
	UPD(0x0C06F490u, 2);
L_0C06F490: BLKS(0x0C06F490u);
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r4 = v_; } UPD(0x0C06F492u, 1);  /* 0C06F490 mov.w @Rm+,Rn */
	r3 = 0x0u;  /* 0C06F492 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C06F496u, 2);  /* 0C06F494 mov.w @(disp,pc),Rn */
	IF(0x0C06F496u); MACL = r4 * r8;  /* 0C06F496 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C06F49Au, 3);  /* 0C06F498 mov.l @(disp,pc),Rn */
	r6 = 0xC0000000u; UPD(0x0C06F49Cu, 1);  /* 0C06F49A mov.l @(disp,pc),Rn */
	IF(0x0C06F49Cu); r8 = MACL;  /* 0C06F49C sts macl,Rn */
	r8 += r7;  /* 0C06F49E add Rm,Rn */
	W32(r8, r6); UPD(0x0C06F4A2u, 3);  /* 0C06F4A0 mov.l Rm,@Rn */
	r12 = (u32)(s32)(s16)R16(r10); UPD(0x0C06F4A4u, 1);  /* 0C06F4A2 mov.w @Rm,Rn */
	r8 += 0x7Cu;  /* 0C06F4A4 add #imm,Rn */
	W16(r8, r12); UPD(0x0C06F4A8u, 2);  /* 0C06F4A6 mov.w Rm,@Rn */
	r8 += 0xFFFFFF84u;  /* 0C06F4A8 add #imm,Rn */
	r12 = 0x3u;  /* 0C06F4AA mov #imm,Rn */
	W32(r8 + 0x4u, r12); UPD(0x0C06F4AEu, 3);  /* 0C06F4AC mov.l Rm,@(disp,Rn) */
	r2 = 0xC0A02D0u; UPD(0x0C06F4B0u, 1);  /* 0C06F4AE mov.l @(disp,pc),Rn */
	r5 = R32(r9); UPD(0x0C06F4B2u, 1);  /* 0C06F4B0 mov.l @Rm,Rn */
	W32(r8 + 0xCu, r3); UPD(0x0C06F4B4u, 1);  /* 0C06F4B2 mov.l Rm,@(disp,Rn) */
	IF(0x0C06F4B4u); { u32 t_ = r2; PR = 0x0C06F4B8u; W32(r8 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C06F4B8u); }  /* 0C06F4B4 jsr @Rn */
L_0C06F4B8: BLKS(0x0C06F4B8u);
	r0 = R32(r9 + 0x4u); UPD(0x0C06F4BAu, 1);  /* 0C06F4B8 mov.l @(disp,Rm),Rn */
	r5 = r8;  /* 0C06F4BA mov Rm,Rn */
	W32(r8 + 0x2Cu, r0); UPD(0x0C06F4BEu, 2);  /* 0C06F4BC mov.l Rm,@(disp,Rn) */
	r2 = r11;  /* 0C06F4BE mov Rm,Rn */
	r6 = R32(r9 + 0x8u); UPD(0x0C06F4C2u, 2);  /* 0C06F4C0 mov.l @(disp,Rm),Rn */
	r1 = 0x4u;  /* 0C06F4C2 mov #imm,Rn */
	W32(r8 + 0x30u, r6); UPD(0x0C06F4C6u, 2);  /* 0C06F4C4 mov.l Rm,@(disp,Rn) */
	r4 = 0x0u;  /* 0C06F4C6 mov #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C06F4CAu, 2);  /* 0C06F4C8 mov.l Rm,@(disp,Rn) */
	r2 += 0x1u;  /* 0C06F4CA add #imm,Rn */
	r13 = 0xC3929E0u; UPD(0x0C06F4CEu, 2);  /* 0C06F4CC mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r2;  /* 0C06F4CE exts.w Rm,Rn */
	r7 = R32(r13); UPD(0x0C06F4D2u, 2);  /* 0C06F4D0 mov.l @Rm,Rn */
	r0 = 0xBu;  /* 0C06F4D2 mov #imm,Rn */
	r13 = 0xA8u; UPD(0x0C06F4D6u, 2);  /* 0C06F4D4 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C06F4D6 add Rm,Rn */
	r5 += r13;  /* 0C06F4D8 add Rm,Rn */
	r3 = 0x808080u; UPD(0x0C06F4DCu, 3);  /* 0C06F4DA mov.l @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C06F4DC add #imm,Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C06F4E0u, 2);  /* 0C06F4DE mov.l Rm,@(disp,Rn) */
	r9 += 0xCu;  /* 0C06F4E0 add #imm,Rn */
	W8(r5, r1); UPD(0x0C06F4E4u, 2);  /* 0C06F4E2 mov.b Rm,@Rn */
	T = (s32)r11 > (s32)r0;  /* 0C06F4E4 cmp/gt Rm,Rn */
	W32(r8 + 0x34u, r4); UPD(0x0C06F4E8u, 2);  /* 0C06F4E6 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r8 + 0x38u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06F490u, 3); goto L_0C06F490; } UPD(0x0C06F4ECu, 1); goto L_0C06F4EC; }  /* 0C06F4E8 bf/s */
L_0C06F4EC: BLKS(0x0C06F4ECu);
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C06F4EEu, 1);  /* 0C06F4EC mov.w @Rm,Rn */
	r11 = 0x0u;  /* 0C06F4EE mov #imm,Rn */
	r10 = 0xB4u; UPD(0x0C06F4F2u, 2);  /* 0C06F4F0 mov.w @(disp,pc),Rn */
	IF(0x0C06F4F2u); MACL = r4 * r10;  /* 0C06F4F2 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C06F4F6u, 3);  /* 0C06F4F4 mov.l @(disp,pc),Rn */
	IF(0x0C06F4F6u); r10 = MACL;  /* 0C06F4F6 sts macl,Rn */
	r9 = 0xC0000000u; UPD(0x0C06F4FAu, 2);  /* 0C06F4F8 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C06F4FA add Rm,Rn */
	W32(r10, r9); UPD(0x0C06F4FEu, 2);  /* 0C06F4FC mov.l Rm,@Rn */
	W32(r10 + 0x4u, r12); UPD(0x0C06F500u, 1);  /* 0C06F4FE mov.l Rm,@(disp,Rn) */
	r8 = 0xC27DC50u; UPD(0x0C06F502u, 1);  /* 0C06F500 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C06F504u, 1);  /* 0C06F502 mov.b @Rm,Rn */
	r0 &= 0x3u;  /* 0C06F504 and #imm,r0 */
	W32(r10 + 0x8u, r0); UPD(0x0C06F508u, 2);  /* 0C06F506 mov.l Rm,@(disp,Rn) */
	r6 = 0xC275DD1u; UPD(0x0C06F50Au, 1);  /* 0C06F508 mov.l @(disp,pc),Rn */
	r7 = 0xC286276u; UPD(0x0C06F50Cu, 1);  /* 0C06F50A mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s8)R8(r6); UPD(0x0C06F50Eu, 1);  /* 0C06F50C mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C06F510u, 1);  /* 0C06F50E mov.b @Rm,Rn */
	r5 = r12 & 0xFF;  /* 0C06F510 extu.b Rm,Rn */
	r5 += r5;  /* 0C06F512 add Rm,Rn */
	r0 &= 0x1u;  /* 0C06F514 and #imm,r0 */
	r3 = 0xC0A02D0u; UPD(0x0C06F518u, 4);  /* 0C06F516 mov.l @(disp,pc),Rn */
	r0 |= r5;  /* 0C06F518 or Rm,Rn */
	IF(0x0C06F51Au); { u32 t_ = r3; PR = 0x0C06F51Eu; W32(r10 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C06F51Eu); }  /* 0C06F51A jsr @Rn */
L_0C06F51E: BLKS(0x0C06F51Eu);
	r0 = 0x2000000u; UPD(0x0C06F520u, 1);  /* 0C06F51E mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C06F520 mov Rm,Rn */
	r2 = 0x1300000u; UPD(0x0C06F524u, 2);  /* 0C06F522 mov.l @(disp,pc),Rn */
	r4 += r10;  /* 0C06F524 add Rm,Rn */
	r9 = 0x808080u; UPD(0x0C06F528u, 2);  /* 0C06F526 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C06F528 add #imm,Rn */
	W32(r10 + 0x28u, r0); UPD(0x0C06F52Cu, 2);  /* 0C06F52A mov.l Rm,@(disp,Rn) */
	r1 = 0x17u;  /* 0C06F52C mov #imm,Rn */
	W32(r10 + 0x24u, r2); UPD(0x0C06F530u, 2);  /* 0C06F52E mov.l Rm,@(disp,Rn) */
	r0 = 0x1u;  /* 0C06F530 mov #imm,Rn */
	W8(r4, r1); UPD(0x0C06F534u, 2);  /* 0C06F532 mov.b Rm,@Rn */
	W32(r10 + 0x34u, r11); UPD(0x0C06F536u, 1);  /* 0C06F534 mov.l Rm,@(disp,Rn) */
	{ W32(r10 + 0x38u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06F462u, 3); goto L_0C06F462; }  /* 0C06F536 bra */
}

void f_0C06F580(sh3_t *c)
{
	LOCALS;
L_0C06F580: BLKS(0x0C06F580u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06F582u, 1);  /* 0C06F580 mov.l Rm,@-Rn */
	r4 = 0x3u;  /* 0C06F582 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06F586u, 2);  /* 0C06F584 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06F588u, 1);  /* 0C06F586 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06F58Au, 1);  /* 0C06F588 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06F58Cu, 1);  /* 0C06F58A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06F58Eu, 1);  /* 0C06F58C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06F590u, 1);  /* 0C06F58E mov.l Rm,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C06F592u, 1);  /* 0C06F590 mov.l @(disp,pc),Rn */
	IF(0x0C06F592u); r15 -= 4; W32(r15, PR); UPD(0x0C06F594u, 1);  /* 0C06F592 sts.l pr,@-Rn */
	r5 = 0x8000u; UPD(0x0C06F596u, 1);  /* 0C06F594 mov.l @(disp,pc),Rn */
	IF(0x0C06F596u); { u32 t_ = r8; PR = 0x0C06F59Au; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C06F59Au); }  /* 0C06F596 jsr @Rn */
L_0C06F59A: BLKS(0x0C06F59Au);
	T = (r0 & r0) == 0;  /* 0C06F59A tst Rm,Rn */
	r11 = 0xC2755BCu; UPD(0x0C06F59Eu, 2);  /* 0C06F59C mov.l @(disp,pc),Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06F5C0u, 3); goto L_0C06F5C0; } UPD(0x0C06F5A2u, 1); goto L_0C06F5A2; }  /* 0C06F59E bf/s */
L_0C06F5A2: BLKS(0x0C06F5A2u);
	r15 = r14;  /* 0C06F5A2 mov Rm,Rn */
	IF(0x0C06F5A4u); PR = R32(r15); r15 += 4; UPD(0x0C06F5A6u, 2);  /* 0C06F5A4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06F5A8u, 1);  /* 0C06F5A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06F5AAu, 1);  /* 0C06F5A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06F5ACu, 1);  /* 0C06F5AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06F5AEu, 1);  /* 0C06F5AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06F5B0u, 1);  /* 0C06F5AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06F5B2u, 1);  /* 0C06F5B0 mov.l @Rm+,Rn */
	IF(0x0C06F5B2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06F5B2 rts */
L_0C06F5C0: BLKS(0x0C06F5C0u);
	r8 = 0xC0606C0u; UPD(0x0C06F5C2u, 1);  /* 0C06F5C0 mov.l @(disp,pc),Rn */
	r9 = 0xC17ACD0u; UPD(0x0C06F5C4u, 1);  /* 0C06F5C2 mov.l @(disp,pc),Rn */
	IF(0x0C06F5C4u); { u32 t_ = r8; PR = 0x0C06F5C8u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C06F5C8u); }  /* 0C06F5C4 jsr @Rn */
L_0C06F5C8: BLKS(0x0C06F5C8u);
	T = (r0 & r0) == 0;  /* 0C06F5C8 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06F5A2u, 4); goto L_0C06F5A2; } goto L_0C06F5CE; }  /* 0C06F5CA bt/s */
L_0C06F5CE: BLKS(0x0C06F5CEu);
	r13 = 0xB4u; UPD(0x0C06F5D0u, 2);  /* 0C06F5CE mov.w @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C06F5D0 mov #imm,Rn */
	r10 = 0x0u;  /* 0C06F5D2 mov #imm,Rn */
	UPD(0x0C06F5D4u, 2);
L_0C06F5D4: BLKS(0x0C06F5D4u);
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r4 = v_; } UPD(0x0C06F5D6u, 1);  /* 0C06F5D4 mov.w @Rm+,Rn */
	r3 = 0x3u;  /* 0C06F5D6 mov #imm,Rn */
	IF(0x0C06F5D8u); MACL = r4 * r13;  /* 0C06F5D8 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C06F5DCu, 4);  /* 0C06F5DA mov.l @(disp,pc),Rn */
	r6 = 0xC0000000u; UPD(0x0C06F5DEu, 1);  /* 0C06F5DC mov.l @(disp,pc),Rn */
	IF(0x0C06F5DEu); r8 = MACL;  /* 0C06F5DE sts macl,Rn */
	r8 += r7;  /* 0C06F5E0 add Rm,Rn */
	W32(r8, r6); UPD(0x0C06F5E4u, 3);  /* 0C06F5E2 mov.l Rm,@Rn */
	r5 = (u32)(s32)(s16)R16(r11); UPD(0x0C06F5E6u, 1);  /* 0C06F5E4 mov.w @Rm,Rn */
	r8 += 0x7Cu;  /* 0C06F5E6 add #imm,Rn */
	W16(r8, r5); UPD(0x0C06F5EAu, 2);  /* 0C06F5E8 mov.w Rm,@Rn */
	r8 += 0xFFFFFF84u;  /* 0C06F5EA add #imm,Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C06F5EEu, 2);  /* 0C06F5EC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A02D0u; UPD(0x0C06F5F0u, 1);  /* 0C06F5EE mov.l @(disp,pc),Rn */
	r2 = R32(r9); UPD(0x0C06F5F2u, 1);  /* 0C06F5F0 mov.l @Rm,Rn */
	W32(r8 + 0xCu, r10); UPD(0x0C06F5F4u, 1);  /* 0C06F5F2 mov.l Rm,@(disp,Rn) */
	IF(0x0C06F5F4u); { u32 t_ = r0; PR = 0x0C06F5F8u; W32(r8 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C06F5F8u); }  /* 0C06F5F4 jsr @Rn */
L_0C06F5F8: BLKS(0x0C06F5F8u);
	r7 = R32(r9 + 0x4u); UPD(0x0C06F5FAu, 1);  /* 0C06F5F8 mov.l @(disp,Rm),Rn */
	r3 = 0x4u;  /* 0C06F5FA mov #imm,Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C06F5FEu, 2);  /* 0C06F5FC mov.l Rm,@(disp,Rn) */
	r2 = r12;  /* 0C06F5FE mov Rm,Rn */
	r4 = R32(r9 + 0x8u); UPD(0x0C06F602u, 2);  /* 0C06F600 mov.l @(disp,Rm),Rn */
	r2 += 0x1u;  /* 0C06F602 add #imm,Rn */
	W32(r8 + 0x30u, r4); UPD(0x0C06F606u, 2);  /* 0C06F604 mov.l Rm,@(disp,Rn) */
	r12 = (u32)(s32)(s16)r2;  /* 0C06F606 exts.w Rm,Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C06F60Au, 2);  /* 0C06F608 mov.l Rm,@(disp,Rn) */
	r9 += 0xCu;  /* 0C06F60A add #imm,Rn */
	r6 = 0xC3929E0u; UPD(0x0C06F60Eu, 2);  /* 0C06F60C mov.l @(disp,pc),Rn */
	r0 = 0xA9u; UPD(0x0C06F610u, 1);  /* 0C06F60E mov.w @(disp,pc),Rn */
	r5 = R32(r6); UPD(0x0C06F612u, 1);  /* 0C06F610 mov.l @Rm,Rn */
	IF(0x0C06F612u); W8(r0 + r8, r3); UPD(0x0C06F614u, 1);  /* 0C06F612 mov.b Rm,@(r0,Rn) */
	r4 += r5;  /* 0C06F614 add Rm,Rn */
	r0 = 0x1u;  /* 0C06F616 mov #imm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C06F61Au, 3);  /* 0C06F618 mov.l Rm,@(disp,Rn) */
	T = (s32)r12 > (s32)r0;  /* 0C06F61A cmp/gt Rm,Rn */
	W32(r8 + 0x34u, r10); UPD(0x0C06F61Eu, 2);  /* 0C06F61C mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r8 + 0x38u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06F5D4u, 3); goto L_0C06F5D4; } UPD(0x0C06F622u, 1); goto L_0C06F622; }  /* 0C06F61E bf/s */
L_0C06F622: BLKS(0x0C06F622u);
	{ IF(0x0C06F624u); ; /* slot nop */ UPD(0x0C06F5A2u, 3); goto L_0C06F5A2; }  /* 0C06F622 bra */
}

void f_0C06F650(sh3_t *c)
{
	LOCALS;
L_0C06F650: BLKS(0x0C06F650u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06F652u, 1);  /* 0C06F650 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C06F652 exts.w Rm,Rn */
	r2 = 0xB4u; UPD(0x0C06F656u, 2);  /* 0C06F654 mov.w @(disp,pc),Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06F658u, 1);  /* 0C06F656 mov.l Rm,@-Rn */
	IF(0x0C06F658u); MACL = r4 * r2;  /* 0C06F658 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06F65Cu, 3);  /* 0C06F65A mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C06F65Eu, 1);  /* 0C06F65C mov.l @(disp,pc),Rn */
	IF(0x0C06F65Eu); r2 = MACL;  /* 0C06F65E sts macl,Rn */
	IF(0x0C06F660u); r15 -= 4; W32(r15, PR); UPD(0x0C06F662u, 2);  /* 0C06F660 sts.l pr,@-Rn */
	r2 += r0;  /* 0C06F662 add Rm,Rn */
	r3 = R32(r2 + 0x8u); UPD(0x0C06F666u, 2);  /* 0C06F664 mov.l @(disp,Rm),Rn */
	r0 = 0x17u;  /* 0C06F666 mov #imm,Rn */
	T = r3 > r0;  /* 0C06F668 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F6F0u, 5); goto L_0C06F6F0; } goto L_0C06F66E; }  /* 0C06F66A bt/s */
L_0C06F66E: BLKS(0x0C06F66Eu);
	r0 = 0xC06F67Cu;  /* 0C06F66E mova @(disp,pc),r0 */
	IF(0x0C06F670u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06F672u, 3);  /* 0C06F670 mov.b @(r0,Rm),Rn */
	IF(0x0C06F672u); { u32 tv_ = (r5 + 0x0C06F676u); u32 t_ = PHYS(tv_); IF(0x0C06F674u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C06F6A0u: goto L_0C06F6A0; case 0x0C06F6D0u: goto L_0C06F6D0; default: JUMPD(tv_); } }  /* 0C06F672 braf Rn */
L_0C06F6A0: BLKS(0x0C06F6A0u);
	r6 = 0xB4u; UPD(0x0C06F6A2u, 1);  /* 0C06F6A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06F6A2 add #imm,Rn */
	IF(0x0C06F6A4u); MACL = r4 * r6;  /* 0C06F6A4 mul.l Rm,Rn */
	r9 = 0x0u;  /* 0C06F6A6 mov #imm,Rn */
	r3 = 0x14u;  /* 0C06F6A8 mov #imm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C06F6ACu, 6);  /* 0C06F6AA mov.l @(disp,pc),Rn */
	IF(0x0C06F6ACu); r8 = MACL;  /* 0C06F6AC sts macl,Rn */
	W32(r15, r9); UPD(0x0C06F6B0u, 2);  /* 0C06F6AE mov.l Rm,@Rn */
	r8 += r4;  /* 0C06F6B0 add Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C06F6B4u, 2);  /* 0C06F6B2 mov.l Rm,@(disp,Rn) */
	r5 = 0x1u;  /* 0C06F6B4 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C06F6B8u, 2);  /* 0C06F6B6 mov.l @Rm,Rn */
L_0C06F6B8: BLKS(0x0C06F6B8u);
	r0 = 0xC0ADDE0u; UPD(0x0C06F6BAu, 1);  /* 0C06F6B8 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C06F6BCu, 1);  /* 0C06F6BA mov.l @(disp,Rm),Rn */
	IF(0x0C06F6BCu); { u32 t_ = r0; PR = 0x0C06F6C0u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ADDE0, 0x0C0ADDE0u, 0x0C06F6C0u); }  /* 0C06F6BC jsr @Rn */
L_0C06F6C0: BLKS(0x0C06F6C0u);
	W32(r8, r9); UPD(0x0C06F6C2u, 1);  /* 0C06F6C0 mov.l Rm,@Rn */
	r15 += 0x8u;  /* 0C06F6C2 add #imm,Rn */
	UPD(0x0C06F6C4u, 1);
L_0C06F6C4: BLKS(0x0C06F6C4u);
	r15 = r14;  /* 0C06F6C4 mov Rm,Rn */
	IF(0x0C06F6C6u); PR = R32(r15); r15 += 4; UPD(0x0C06F6C8u, 2);  /* 0C06F6C6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06F6CAu, 1);  /* 0C06F6C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06F6CCu, 1);  /* 0C06F6CA mov.l @Rm+,Rn */
	IF(0x0C06F6CCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06F6CC rts */
L_0C06F6D0: BLKS(0x0C06F6D0u);
	r8 = 0xB4u; UPD(0x0C06F6D2u, 1);  /* 0C06F6D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06F6D2 add #imm,Rn */
	IF(0x0C06F6D4u); MACL = r4 * r8;  /* 0C06F6D4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C06F6D8u, 4);  /* 0C06F6D6 mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C06F6D8 mov #imm,Rn */
	IF(0x0C06F6DAu); r8 = MACL;  /* 0C06F6DA sts macl,Rn */
	r8 += r9;  /* 0C06F6DC add Rm,Rn */
	r9 = 0x0u;  /* 0C06F6DE mov #imm,Rn */
	W32(r15, r9); UPD(0x0C06F6E2u, 5);  /* 0C06F6E0 mov.l Rm,@Rn */
	r5 = 0x3u;  /* 0C06F6E2 mov #imm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C06F6E6u, 2);  /* 0C06F6E4 mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C06F6B8u, 3); goto L_0C06F6B8; }  /* 0C06F6E6 bra */
L_0C06F6F0: BLKS(0x0C06F6F0u);
	r0 = 0x0u;  /* 0C06F6F0 mov #imm,Rn */
	{ W32(r2, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C06F6C4u, 4); goto L_0C06F6C4; }  /* 0C06F6F2 bra */
}

void f_0C06F700(sh3_t *c)
{
	LOCALS;
L_0C06F700: BLKS(0x0C06F700u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06F702u, 1);  /* 0C06F700 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06F704u, 1);  /* 0C06F702 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C06F706u, 1);  /* 0C06F704 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C06F706 exts.w Rm,Rn */
	IF(0x0C06F708u); MACL = r9 * r2;  /* 0C06F708 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06F70Cu, 4);  /* 0C06F70A mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C06F70Eu, 1);  /* 0C06F70C mov.l @(disp,pc),Rn */
	IF(0x0C06F70Eu); r8 = MACL;  /* 0C06F70E sts macl,Rn */
	IF(0x0C06F710u); r15 -= 4; W32(r15, PR); UPD(0x0C06F712u, 2);  /* 0C06F710 sts.l pr,@-Rn */
	r8 += r0;  /* 0C06F712 add Rm,Rn */
	r7 = R32(r8 + 0x8u); UPD(0x0C06F716u, 2);  /* 0C06F714 mov.l @(disp,Rm),Rn */
	r0 = 0x3u;  /* 0C06F716 mov #imm,Rn */
	r1 = r7;  /* 0C06F718 mov Rm,Rn */
	r1 += 0xFFFFFFE8u;  /* 0C06F71A add #imm,Rn */
	T = r1 > r0;  /* 0C06F71C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F770u, 7); goto L_0C06F770; } goto L_0C06F722; }  /* 0C06F71E bt/s */
L_0C06F722: BLKS(0x0C06F722u);
	r4 = 0x99u; UPD(0x0C06F724u, 2);  /* 0C06F722 mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C06F724 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C06F728u, 2);  /* 0C06F726 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C06F728 add #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C06F72A extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C06F72C cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r4, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06F740u, 6); goto L_0C06F740; } UPD(0x0C06F732u, 1); goto L_0C06F732; }  /* 0C06F72E bt/s */
L_0C06F732: BLKS(0x0C06F732u);
	r15 = r14;  /* 0C06F732 mov Rm,Rn */
	IF(0x0C06F734u); PR = R32(r15); r15 += 4; UPD(0x0C06F736u, 2);  /* 0C06F734 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06F738u, 1);  /* 0C06F736 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06F73Au, 1);  /* 0C06F738 mov.l @Rm+,Rn */
	IF(0x0C06F73Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06F73A rts */
L_0C06F740: BLKS(0x0C06F740u);
	r3 = 0xA0u; UPD(0x0C06F742u, 1);  /* 0C06F740 mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C06F742 mov Rm,Rn */
	r3 += r8;  /* 0C06F744 add Rm,Rn */
	r3 += 0x1u;  /* 0C06F746 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r3); r3 += 1; r1 = v_; } UPD(0x0C06F74Au, 4);  /* 0C06F748 mov.b @Rm+,Rn */
	r0 = 0xC0A03B0u; UPD(0x0C06F74Cu, 1);  /* 0C06F74A mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C06F74Eu, 1);  /* 0C06F74C mov.b @Rm,Rn */
	W32(r8 + 0x8u, r1); UPD(0x0C06F750u, 1);  /* 0C06F74E mov.l Rm,@(disp,Rn) */
	IF(0x0C06F750u); { u32 t_ = r0; PR = 0x0C06F754u; W32(r8 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C06F754u); }  /* 0C06F750 jsr @Rn */
L_0C06F754: BLKS(0x0C06F754u);
	r7 = 0xC0A1530u; UPD(0x0C06F756u, 1);  /* 0C06F754 mov.l @(disp,pc),Rn */
	IF(0x0C06F756u); { u32 t_ = r7; PR = 0x0C06F75Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C06F75Au); }  /* 0C06F756 jsr @Rn */
L_0C06F75A: BLKS(0x0C06F75Au);
	r6 = 0x0u;  /* 0C06F75A mov #imm,Rn */
	r1 = R32(r8); UPD(0x0C06F75Eu, 2);  /* 0C06F75C mov.l @Rm,Rn */
	r5 = 0x13000000u; UPD(0x0C06F760u, 1);  /* 0C06F75E mov.l @(disp,pc),Rn */
	W32(r8 + 0x34u, r6); UPD(0x0C06F762u, 1);  /* 0C06F760 mov.l Rm,@(disp,Rn) */
	r1 |= r5;  /* 0C06F762 or Rm,Rn */
	UPD(0x0C06F764u, 1);
L_0C06F764: BLKS(0x0C06F764u);
	{ W32(r8, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C06F732u, 3); goto L_0C06F732; }  /* 0C06F764 bra */
L_0C06F770: BLKS(0x0C06F770u);
	r4 = R32(r8 + 0x24u); UPD(0x0C06F772u, 1);  /* 0C06F770 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x2Cu); UPD(0x0C06F774u, 1);  /* 0C06F772 mov.l @(disp,Rm),Rn */
	r3 = 0xFF600000u; UPD(0x0C06F776u, 1);  /* 0C06F774 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C06F776 add Rm,Rn */
	r3 += r4;  /* 0C06F778 add Rm,Rn */
	IF(0x0C06F77Au); T = (s32)r3 >= 0;  /* 0C06F77A cmp/pz Rn */
	{ u32 c_ = !T; W32(r8 + 0x24u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06F7F0u, 6); goto L_0C06F7F0; } UPD(0x0C06F780u, 1); goto L_0C06F780; }  /* 0C06F77C bf/s */
L_0C06F780: BLKS(0x0C06F780u);
	r6 = 0xA80000u; UPD(0x0C06F782u, 1);  /* 0C06F780 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r6;  /* 0C06F782 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06F764u, 4); goto L_0C06F764; } goto L_0C06F788; }  /* 0C06F784 bt/s */
L_0C06F788: BLKS(0x0C06F788u);
	r2 = R32(r8 + 0x28u); UPD(0x0C06F78Au, 2);  /* 0C06F788 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x30u); UPD(0x0C06F78Cu, 1);  /* 0C06F78A mov.l @(disp,Rm),Rn */
	r2 += r5;  /* 0C06F78C add Rm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C06F790u, 2);  /* 0C06F78E mov.l Rm,@(disp,Rn) */
	r4 = 0xC3929E0u; UPD(0x0C06F792u, 1);  /* 0C06F790 mov.l @(disp,pc),Rn */
	r3 = R32(r4); UPD(0x0C06F794u, 1);  /* 0C06F792 mov.l @Rm,Rn */
	r0 = 0xFF880000u; UPD(0x0C06F796u, 1);  /* 0C06F794 mov.l @(disp,pc),Rn */
	r2 -= r3;  /* 0C06F796 sub Rm,Rn */
	r2 += r0;  /* 0C06F798 add Rm,Rn */
	IF(0x0C06F79Au); T = (s32)r2 >= 0;  /* 0C06F79A cmp/pz Rn */
	if (!T) { UPD(0x0C06F7E0u, 6); goto L_0C06F7E0; }  /* 0C06F79C bf */
L_0C06F79E: BLKS(0x0C06F79Eu);
	r6 = 0x800000u; UPD(0x0C06F7A0u, 1);  /* 0C06F79E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C06F7A0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06F7B0u, 4); goto L_0C06F7B0; } goto L_0C06F7A6; }  /* 0C06F7A2 bf/s */
L_0C06F7A6: BLKS(0x0C06F7A6u);
	{ W32(r8, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C06F732u, 4); goto L_0C06F732; }  /* 0C06F7A6 bra */
L_0C06F7B0: BLKS(0x0C06F7B0u);
	r2 = 0x99u; UPD(0x0C06F7B2u, 1);  /* 0C06F7B0 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C06F7B2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06F7B6u, 2);  /* 0C06F7B4 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C06F7B6 add #imm,Rn */
	W8(r2, r0); UPD(0x0C06F7BAu, 2);  /* 0C06F7B8 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C06F7BA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06F7BC tst Rm,Rn */
	if (!T) { UPD(0x0C06F732u, 5); goto L_0C06F732; }  /* 0C06F7BE bf */
L_0C06F7C0: BLKS(0x0C06F7C0u);
	IF(0x0C06F7C0u); r7 <<= 2;  /* 0C06F7C0 shll2 Rn */
	r3 = 0xC17D034u; UPD(0x0C06F7C4u, 2);  /* 0C06F7C2 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C06F7C4 mov Rm,Rn */
	IF(0x0C06F7C6u); r7 = R32(r0 + r3); UPD(0x0C06F7C8u, 2);  /* 0C06F7C6 mov.l @(r0,Rm),Rn */
	W32(r8 + 0x8u, r7); UPD(0x0C06F7CAu, 1);  /* 0C06F7C8 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0A03B0u; UPD(0x0C06F7CCu, 1);  /* 0C06F7CA mov.l @(disp,pc),Rn */
	IF(0x0C06F7CCu); { u32 t_ = r8; PR = 0x0C06F7D0u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C06F7D0u); }  /* 0C06F7CC jsr @Rn */
L_0C06F7D0: BLKS(0x0C06F7D0u);
	{ IF(0x0C06F7D2u); ; /* slot nop */ UPD(0x0C06F732u, 3); goto L_0C06F732; }  /* 0C06F7D0 bra */
L_0C06F7E0: BLKS(0x0C06F7E0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C06F79Eu, 3); goto L_0C06F79E; }  /* 0C06F7E0 bra */
L_0C06F7F0: BLKS(0x0C06F7F0u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C06F780u, 3); goto L_0C06F780; }  /* 0C06F7F0 bra */
}

void f_0C06F830(sh3_t *c)
{
	LOCALS;
L_0C06F830: BLKS(0x0C06F830u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06F832u, 1);  /* 0C06F830 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C06F832 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06F836u, 2);  /* 0C06F834 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06F838u, 1);  /* 0C06F836 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06F83Au, 1);  /* 0C06F838 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06F83Cu, 1);  /* 0C06F83A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C06F83C exts.w Rm,Rn */
	r8 = 0xC0A0670u; UPD(0x0C06F840u, 2);  /* 0C06F83E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06F840 mov Rm,Rn */
	IF(0x0C06F842u); r15 -= 4; W32(r15, PR); UPD(0x0C06F844u, 2);  /* 0C06F842 sts.l pr,@-Rn */
	IF(0x0C06F844u); { u32 t_ = r8; PR = 0x0C06F848u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C06F848u); }  /* 0C06F844 jsr @Rn */
L_0C06F848: BLKS(0x0C06F848u);
	T = (r0 & r0) == 0;  /* 0C06F848 tst Rm,Rn */
	if (T) { UPD(0x0C06F870u, 4); goto L_0C06F870; }  /* 0C06F84A bt */
L_0C06F84C: BLKS(0x0C06F84Cu);
	r2 = 0xB4u; UPD(0x0C06F84Eu, 1);  /* 0C06F84C mov.w @(disp,pc),Rn */
	IF(0x0C06F84Eu); MACL = r11 * r2;  /* 0C06F84E mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C06F852u, 3);  /* 0C06F850 mov.l @(disp,pc),Rn */
	IF(0x0C06F852u); r10 = MACL;  /* 0C06F852 sts macl,Rn */
	r8 = 0x9Cu; UPD(0x0C06F856u, 2);  /* 0C06F854 mov.w @(disp,pc),Rn */
	r10 += r0;  /* 0C06F856 add Rm,Rn */
	r8 += r10;  /* 0C06F858 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C06F85Cu, 3);  /* 0C06F85A mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06F85C tst Rm,Rn */
	{ u32 c_ = T; r2 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F8D0u, 4); goto L_0C06F8D0; } goto L_0C06F862; }  /* 0C06F85E bt/s */
L_0C06F862: BLKS(0x0C06F862u);
	r2 += 0x1u;  /* 0C06F862 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C06F866u, 3);  /* 0C06F864 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C06F866 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C06F868 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C06F86A cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06F880u, 6); goto L_0C06F880; } UPD(0x0C06F870u, 1); goto L_0C06F870; }  /* 0C06F86C bt/s */
L_0C06F870: BLKS(0x0C06F870u);
	r15 = r14;  /* 0C06F870 mov Rm,Rn */
	IF(0x0C06F872u); PR = R32(r15); r15 += 4; UPD(0x0C06F874u, 2);  /* 0C06F872 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06F876u, 1);  /* 0C06F874 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06F878u, 1);  /* 0C06F876 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06F87Au, 1);  /* 0C06F878 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06F87Cu, 1);  /* 0C06F87A mov.l @Rm+,Rn */
	IF(0x0C06F87Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06F87C rts */
L_0C06F880: BLKS(0x0C06F880u);
	r0 = r3;  /* 0C06F880 mov Rm,Rn */
	r4 = 0x0u;  /* 0C06F882 mov #imm,Rn */
	W8(r2, r4); UPD(0x0C06F886u, 3);  /* 0C06F884 mov.b Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C06F886 add #imm,Rn */
	W8(r8, r0); UPD(0x0C06F88Au, 2);  /* 0C06F888 mov.b Rm,@Rn */
	r2 = 0x86u; UPD(0x0C06F88Cu, 1);  /* 0C06F88A mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C06F88C mov Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C06F890u, 2);  /* 0C06F88E mov.l @(disp,pc),Rn */
	IF(0x0C06F890u); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06F892u, 1);  /* 0C06F890 mov.w @(r0,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C06F894u, 1);  /* 0C06F892 mov.l @(disp,pc),Rn */
	IF(0x0C06F894u); { u32 t_ = r8; PR = 0x0C06F898u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06F898u); }  /* 0C06F894 jsr @Rn */
L_0C06F898: BLKS(0x0C06F898u);
	r8 = R32(r10 + 0x24u); UPD(0x0C06F89Au, 1);  /* 0C06F898 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C06F89A mov Rm,Rn */
	r8 += r0;  /* 0C06F89C add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C06F8A0u, 3);  /* 0C06F89E mov.l @(disp,pc),Rn */
	r6 = 0x10000u; UPD(0x0C06F8A2u, 1);  /* 0C06F8A0 mov.l @(disp,pc),Rn */
	r5 = 0xA0000u; UPD(0x0C06F8A4u, 1);  /* 0C06F8A2 mov.l @(disp,pc),Rn */
	IF(0x0C06F8A4u); { u32 t_ = r0; PR = 0x0C06F8A8u; r8 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06F8A8u); }  /* 0C06F8A4 jsr @Rn */
L_0C06F8A8: BLKS(0x0C06F8A8u);
	r6 = R32(r10 + 0x28u); UPD(0x0C06F8AAu, 1);  /* 0C06F8A8 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06F8AA add #imm,Rn */
	r7 = 0x30000u; UPD(0x0C06F8AEu, 2);  /* 0C06F8AC mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C06F8AE mov Rm,Rn */
	W32(r15, r7); UPD(0x0C06F8B2u, 2);  /* 0C06F8B0 mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C06F8B2 mov #imm,Rn */
	r7 = r9;  /* 0C06F8B4 mov Rm,Rn */
	r9 = 0xC0A8510u; UPD(0x0C06F8B8u, 3);  /* 0C06F8B6 mov.l @(disp,pc),Rn */
	r8 = 0xC0580D0u; UPD(0x0C06F8BAu, 1);  /* 0C06F8B8 mov.l @(disp,pc),Rn */
	IF(0x0C06F8BAu); { u32 t_ = r9; PR = 0x0C06F8BEu; r6 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8510, 0x0C0A8510u, 0x0C06F8BEu); }  /* 0C06F8BA jsr @Rn */
L_0C06F8BE: BLKS(0x0C06F8BEu);
	r15 += 0x4u;  /* 0C06F8BE add #imm,Rn */
	IF(0x0C06F8C0u); { u32 t_ = r8; PR = 0x0C06F8C4u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C06F8C4u); }  /* 0C06F8C0 jsr @Rn */
L_0C06F8C4: BLKS(0x0C06F8C4u);
	{ IF(0x0C06F8C6u); ; /* slot nop */ UPD(0x0C06F870u, 3); goto L_0C06F870; }  /* 0C06F8C4 bra */
L_0C06F8D0: BLKS(0x0C06F8D0u);
	r9 = 0xC0A9E40u; UPD(0x0C06F8D2u, 1);  /* 0C06F8D0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06F8D2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C06F8D4 mov #imm,Rn */
	IF(0x0C06F8D6u); { u32 t_ = r9; PR = 0x0C06F8DAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C06F8DAu); }  /* 0C06F8D6 jsr @Rn */
L_0C06F8DA: BLKS(0x0C06F8DAu);
	T = (r0 & r0) == 0;  /* 0C06F8DA tst Rm,Rn */
	if (T) { UPD(0x0C06F870u, 4); goto L_0C06F870; }  /* 0C06F8DC bt */
L_0C06F8DE: BLKS(0x0C06F8DEu);
	r0 = r10;  /* 0C06F8DE mov Rm,Rn */
	r4 = 0xA9u; UPD(0x0C06F8E2u, 2);  /* 0C06F8E0 mov.w @(disp,pc),Rn */
	IF(0x0C06F8E2u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C06F8E4u, 1);  /* 0C06F8E2 mov.b @(r0,Rm),Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C06F8E6u, 1);  /* 0C06F8E4 mov.l @(disp,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C06F8E8u, 1);  /* 0C06F8E6 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A9BB0u; UPD(0x0C06F8EAu, 1);  /* 0C06F8E8 mov.l @(disp,pc),Rn */
	IF(0x0C06F8EAu); { u32 t_ = r10; PR = 0x0C06F8EEu; r6 = r3 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C06F8EEu); }  /* 0C06F8EA jsr @Rn */
L_0C06F8EE: BLKS(0x0C06F8EEu);
	T = (r0 & r0) == 0;  /* 0C06F8EE tst Rm,Rn */
	if (T) { UPD(0x0C06F870u, 4); goto L_0C06F870; }  /* 0C06F8F0 bt */
L_0C06F8F2: BLKS(0x0C06F8F2u);
	r5 = 0x3u;  /* 0C06F8F2 mov #imm,Rn */
	{ W8(r8, r5); /* slot mov.b Rm,@Rn */ UPD(0x0C06F870u, 4); goto L_0C06F870; }  /* 0C06F8F4 bra */
}

/* FUN_0c06f930 */
void f_0C06F930(sh3_t *c)
{
	LOCALS;
L_0C06F930: BLKS(0x0C06F930u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06F932u, 1);  /* 0C06F930 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C06F932 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06F936u, 2);  /* 0C06F934 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06F938u, 1);  /* 0C06F936 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06F93Au, 1);  /* 0C06F938 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06F93Cu, 1);  /* 0C06F93A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06F93Eu, 1);  /* 0C06F93C mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C06F93E exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06F942u, 2);  /* 0C06F940 mov.l Rm,@-Rn */
	r4 = r12;  /* 0C06F942 mov Rm,Rn */
	IF(0x0C06F944u); r15 -= 4; W32(r15, PR); UPD(0x0C06F946u, 2);  /* 0C06F944 sts.l pr,@-Rn */
	r8 = 0xC0A0670u; UPD(0x0C06F948u, 1);  /* 0C06F946 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06F948 add #imm,Rn */
	IF(0x0C06F94Au); { u32 t_ = r8; PR = 0x0C06F94Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C06F94Eu); }  /* 0C06F94A jsr @Rn */
L_0C06F94E: BLKS(0x0C06F94Eu);
	T = (r0 & r0) == 0;  /* 0C06F94E tst Rm,Rn */
	if (!T) { UPD(0x0C06F970u, 4); goto L_0C06F970; }  /* 0C06F950 bf */
L_0C06F952: BLKS(0x0C06F952u);
	r14 += 0x4u;  /* 0C06F952 add #imm,Rn */
	r15 = r14;  /* 0C06F954 mov Rm,Rn */
	IF(0x0C06F956u); PR = R32(r15); r15 += 4; UPD(0x0C06F958u, 3);  /* 0C06F956 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06F95Au, 1);  /* 0C06F958 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06F95Cu, 1);  /* 0C06F95A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06F95Eu, 1);  /* 0C06F95C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06F960u, 1);  /* 0C06F95E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06F962u, 1);  /* 0C06F960 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06F964u, 1);  /* 0C06F962 mov.l @Rm+,Rn */
	IF(0x0C06F964u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06F964 rts */
L_0C06F970: BLKS(0x0C06F970u);
	r8 = 0xC0A9E40u; UPD(0x0C06F972u, 1);  /* 0C06F970 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C06F972 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C06F974 mov #imm,Rn */
	IF(0x0C06F976u); { u32 t_ = r8; PR = 0x0C06F97Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C06F97Au); }  /* 0C06F976 jsr @Rn */
L_0C06F97A: BLKS(0x0C06F97Au);
	T = (r0 & r0) == 0;  /* 0C06F97A tst Rm,Rn */
	if (T) { UPD(0x0C06F952u, 4); goto L_0C06F952; }  /* 0C06F97C bt */
L_0C06F97E: BLKS(0x0C06F97Eu);
	r4 = 0xB4u; UPD(0x0C06F980u, 1);  /* 0C06F97E mov.w @(disp,pc),Rn */
	IF(0x0C06F980u); MACL = r12 * r4;  /* 0C06F980 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C06F984u, 3);  /* 0C06F982 mov.l @(disp,pc),Rn */
	IF(0x0C06F984u); r8 = MACL;  /* 0C06F984 sts macl,Rn */
	r8 += r0;  /* 0C06F986 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C06F98Au, 3);  /* 0C06F988 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C06F98A mov Rm,Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C06F98Eu, 2);  /* 0C06F98C mov.l @(disp,pc),Rn */
	IF(0x0C06F98Eu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06F990u, 1);  /* 0C06F98E mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C06F992u, 1);  /* 0C06F990 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C06F992 extu.b Rm,Rn */
	IF(0x0C06F994u); { u32 t_ = r9; PR = 0x0C06F998u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C06F998u); }  /* 0C06F994 jsr @Rn */
L_0C06F998: BLKS(0x0C06F998u);
	T = (r0 & r0) == 0;  /* 0C06F998 tst Rm,Rn */
	if (T) { UPD(0x0C06F952u, 4); goto L_0C06F952; }  /* 0C06F99A bt */
L_0C06F99C: BLKS(0x0C06F99Cu);
	r0 = r8;  /* 0C06F99C mov Rm,Rn */
	r5 = 0x86u; UPD(0x0C06F9A0u, 2);  /* 0C06F99E mov.w @(disp,pc),Rn */
	IF(0x0C06F9A0u); r11 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C06F9A2u, 1);  /* 0C06F9A0 mov.w @(r0,Rm),Rn */
	r13 = 0x0u;  /* 0C06F9A2 mov #imm,Rn */
	W32(r14, r8); UPD(0x0C06F9A6u, 2);  /* 0C06F9A4 mov.l Rm,@Rn */
	IF(0x0C06F9A6u); ;  /* 0C06F9A6 nop */
	UPD(0x0C06F9A8u, 1);
L_0C06F9A8: BLKS(0x0C06F9A8u);
	r7 = 0xC058060u; UPD(0x0C06F9AAu, 1);  /* 0C06F9A8 mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C06F9ACu, 1);  /* 0C06F9AA mov.l @(disp,pc),Rn */
	IF(0x0C06F9ACu); { u32 t_ = r7; PR = 0x0C06F9B0u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06F9B0u); }  /* 0C06F9AC jsr @Rn */
L_0C06F9B0: BLKS(0x0C06F9B0u);
	r6 = 0xC17F0ACu; UPD(0x0C06F9B2u, 1);  /* 0C06F9B0 mov.l @(disp,pc),Rn */
	r10 = r13;  /* 0C06F9B2 mov Rm,Rn */
	r1 = 0xC058030u; UPD(0x0C06F9B6u, 2);  /* 0C06F9B4 mov.l @(disp,pc),Rn */
	IF(0x0C06F9B6u); r10 <<= 2;  /* 0C06F9B6 shll2 Rn */
	r10 += r6;  /* 0C06F9B8 add Rm,Rn */
	r9 = r0;  /* 0C06F9BA mov Rm,Rn */
	r4 = r11;  /* 0C06F9BC mov Rm,Rn */
	IF(0x0C06F9BEu); { u32 t_ = r1; PR = 0x0C06F9C2u; r5 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 6); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06F9C2u); }  /* 0C06F9BE jsr @Rn */
L_0C06F9C2: BLKS(0x0C06F9C2u);
	r9 -= r0;  /* 0C06F9C2 sub Rm,Rn */
	r1 = r9;  /* 0C06F9C4 mov Rm,Rn */
	r1 += r1;  /* 0C06F9C6 add Rm,Rn */
	r1 += r9;  /* 0C06F9C8 add Rm,Rn */
	IF(0x0C06F9CAu); T = (s32)r1 >= 0;  /* 0C06F9CA cmp/pz Rn */
	if (!T) { UPD(0x0C06FA30u, 8); goto L_0C06FA30; }  /* 0C06F9CC bf */
L_0C06F9CE: BLKS(0x0C06F9CEu);
	r5 = R32(r14); UPD(0x0C06F9D0u, 1);  /* 0C06F9CE mov.l @Rm,Rn */
	IF(0x0C06F9D0u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C06F9D0 shar Rn */
	r9 = R32(r5 + 0x24u); UPD(0x0C06F9D4u, 2);  /* 0C06F9D2 mov.l @(disp,Rm),Rn */
	IF(0x0C06F9D4u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C06F9D4 shar Rn */
	r7 = 0xC058030u; UPD(0x0C06F9D8u, 2);  /* 0C06F9D6 mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C06F9D8 add Rm,Rn */
	r0 = 0x10000u; UPD(0x0C06F9DCu, 2);  /* 0C06F9DA mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06F9DC mov Rm,Rn */
	r5 = 0x100000u; UPD(0x0C06F9E0u, 2);  /* 0C06F9DE mov.l @(disp,pc),Rn */
	IF(0x0C06F9E0u); { u32 t_ = r7; PR = 0x0C06F9E4u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06F9E4u); }  /* 0C06F9E0 jsr @Rn */
L_0C06F9E4: BLKS(0x0C06F9E4u);
	r4 = R32(r14); UPD(0x0C06F9E6u, 1);  /* 0C06F9E4 mov.l @Rm,Rn */
	r6 = 0xC058060u; UPD(0x0C06F9E8u, 1);  /* 0C06F9E6 mov.l @(disp,pc),Rn */
	r8 = R32(r4 + 0x28u); UPD(0x0C06F9EAu, 1);  /* 0C06F9E8 mov.l @(disp,Rm),Rn */
	r5 = R32(r10); UPD(0x0C06F9ECu, 1);  /* 0C06F9EA mov.l @Rm,Rn */
	r8 += r0;  /* 0C06F9EC add Rm,Rn */
	IF(0x0C06F9EEu); { u32 t_ = r6; PR = 0x0C06F9F2u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06F9F2u); }  /* 0C06F9EE jsr @Rn */
L_0C06F9F2: BLKS(0x0C06F9F2u);
	r8 += r0;  /* 0C06F9F2 add Rm,Rn */
	r2 = 0x28000u; UPD(0x0C06F9F6u, 2);  /* 0C06F9F4 mov.l @(disp,pc),Rn */
	r6 = r8;  /* 0C06F9F6 mov Rm,Rn */
	r3 = 0xC0A81B0u; UPD(0x0C06F9FAu, 2);  /* 0C06F9F8 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06F9FA add #imm,Rn */
	r8 = r13;  /* 0C06F9FC mov Rm,Rn */
	W32(r15, r2); UPD(0x0C06FA00u, 3);  /* 0C06F9FE mov.l Rm,@Rn */
	r8 += 0x1u;  /* 0C06FA00 add #imm,Rn */
	r4 = 0x0u;  /* 0C06FA02 mov #imm,Rn */
	r5 = r9;  /* 0C06FA04 mov Rm,Rn */
	r7 = r11;  /* 0C06FA06 mov Rm,Rn */
	IF(0x0C06FA08u); { u32 t_ = r3; PR = 0x0C06FA0Cu; r13 = (u32)(s32)(s16)r8; /* slot exts.w Rm,Rn */ UPD(t_, 6); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C06FA0Cu); }  /* 0C06FA08 jsr @Rn */
L_0C06FA0C: BLKS(0x0C06FA0Cu);
	r10 = 0x1u;  /* 0C06FA0C mov #imm,Rn */
	T = (s32)r13 > (s32)r10;  /* 0C06FA0E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06F9A8u, 5); goto L_0C06F9A8; } goto L_0C06FA14; }  /* 0C06FA10 bf/s */
L_0C06FA14: BLKS(0x0C06FA14u);
	r3 = 0xC0580D0u; UPD(0x0C06FA16u, 2);  /* 0C06FA14 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C06FA16 mov Rm,Rn */
	r14 += 0x4u;  /* 0C06FA18 add #imm,Rn */
	r15 = r14;  /* 0C06FA1A mov Rm,Rn */
	IF(0x0C06FA1Cu); PR = R32(r15); r15 += 4; UPD(0x0C06FA1Eu, 4);  /* 0C06FA1C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06FA20u, 1);  /* 0C06FA1E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06FA22u, 1);  /* 0C06FA20 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06FA24u, 1);  /* 0C06FA22 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06FA26u, 1);  /* 0C06FA24 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06FA28u, 1);  /* 0C06FA26 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06FA2Au, 1);  /* 0C06FA28 mov.l @Rm+,Rn */
	IF(0x0C06FA2Au); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0580D0u: TAIL(f_0C0580D0); default: JUMPD(tv_); } }  /* 0C06FA2A jmp @Rn */
L_0C06FA30: BLKS(0x0C06FA30u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C06F9CEu, 3); goto L_0C06F9CE; }  /* 0C06FA30 bra */
}

void f_0C06FA70(sh3_t *c)
{
	LOCALS;
L_0C06FA70: BLKS(0x0C06FA70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06FA72u, 1);  /* 0C06FA70 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C06FA72 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06FA76u, 2);  /* 0C06FA74 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06FA78u, 1);  /* 0C06FA76 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06FA7Au, 1);  /* 0C06FA78 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06FA7Cu, 1);  /* 0C06FA7A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06FA7Eu, 1);  /* 0C06FA7C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06FA80u, 1);  /* 0C06FA7E mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C06FA80 exts.w Rm,Rn */
	IF(0x0C06FA82u); r15 -= 4; W32(r15, PR); UPD(0x0C06FA84u, 2);  /* 0C06FA82 sts.l pr,@-Rn */
	r4 = r13;  /* 0C06FA84 mov Rm,Rn */
	r8 = 0xC0A0670u; UPD(0x0C06FA88u, 2);  /* 0C06FA86 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06FA88 add #imm,Rn */
	IF(0x0C06FA8Au); { u32 t_ = r8; PR = 0x0C06FA8Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C06FA8Eu); }  /* 0C06FA8A jsr @Rn */
L_0C06FA8E: BLKS(0x0C06FA8Eu);
	T = (r0 & r0) == 0;  /* 0C06FA8E tst Rm,Rn */
	if (!T) { UPD(0x0C06FAB0u, 4); goto L_0C06FAB0; }  /* 0C06FA90 bf */
L_0C06FA92: BLKS(0x0C06FA92u);
	r14 += 0x8u;  /* 0C06FA92 add #imm,Rn */
	r15 = r14;  /* 0C06FA94 mov Rm,Rn */
	IF(0x0C06FA96u); PR = R32(r15); r15 += 4; UPD(0x0C06FA98u, 3);  /* 0C06FA96 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06FA9Au, 1);  /* 0C06FA98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06FA9Cu, 1);  /* 0C06FA9A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06FA9Eu, 1);  /* 0C06FA9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06FAA0u, 1);  /* 0C06FA9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06FAA2u, 1);  /* 0C06FAA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06FAA4u, 1);  /* 0C06FAA2 mov.l @Rm+,Rn */
	IF(0x0C06FAA4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06FAA4 rts */
L_0C06FAB0: BLKS(0x0C06FAB0u);
	r8 = 0xC0A9E40u; UPD(0x0C06FAB2u, 1);  /* 0C06FAB0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C06FAB2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C06FAB4 mov #imm,Rn */
	IF(0x0C06FAB6u); { u32 t_ = r8; PR = 0x0C06FABAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C06FABAu); }  /* 0C06FAB6 jsr @Rn */
L_0C06FABA: BLKS(0x0C06FABAu);
	T = (r0 & r0) == 0;  /* 0C06FABA tst Rm,Rn */
	if (T) { UPD(0x0C06FA92u, 4); goto L_0C06FA92; }  /* 0C06FABC bt */
L_0C06FABE: BLKS(0x0C06FABEu);
	r4 = 0xB4u; UPD(0x0C06FAC0u, 1);  /* 0C06FABE mov.w @(disp,pc),Rn */
	IF(0x0C06FAC0u); MACL = r13 * r4;  /* 0C06FAC0 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C06FAC4u, 3);  /* 0C06FAC2 mov.l @(disp,pc),Rn */
	IF(0x0C06FAC4u); r8 = MACL;  /* 0C06FAC4 sts macl,Rn */
	r8 += r0;  /* 0C06FAC6 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C06FACAu, 3);  /* 0C06FAC8 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C06FACA mov Rm,Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C06FACEu, 2);  /* 0C06FACC mov.l @(disp,pc),Rn */
	IF(0x0C06FACEu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06FAD0u, 1);  /* 0C06FACE mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C06FAD2u, 1);  /* 0C06FAD0 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C06FAD2 extu.b Rm,Rn */
	IF(0x0C06FAD4u); { u32 t_ = r9; PR = 0x0C06FAD8u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C06FAD8u); }  /* 0C06FAD4 jsr @Rn */
L_0C06FAD8: BLKS(0x0C06FAD8u);
	T = (r0 & r0) == 0;  /* 0C06FAD8 tst Rm,Rn */
	if (T) { UPD(0x0C06FA92u, 4); goto L_0C06FA92; }  /* 0C06FADA bt */
L_0C06FADC: BLKS(0x0C06FADCu);
	r5 = 0x0u;  /* 0C06FADC mov #imm,Rn */
	W32(r14, r5); UPD(0x0C06FAE0u, 2);  /* 0C06FADE mov.l Rm,@Rn */
	W32(r14 + 0x4u, r8); UPD(0x0C06FAE2u, 1);  /* 0C06FAE0 mov.l Rm,@(disp,Rn) */
	IF(0x0C06FAE2u); ;  /* 0C06FAE2 nop */
	UPD(0x0C06FAE4u, 1);
L_0C06FAE4: BLKS(0x0C06FAE4u);
	r0 = R32(r14 + 0x4u); UPD(0x0C06FAE6u, 1);  /* 0C06FAE4 mov.l @(disp,Rm),Rn */
	r12 = 0x86u; UPD(0x0C06FAE8u, 1);  /* 0C06FAE6 mov.w @(disp,pc),Rn */
	r9 = R32(r14); UPD(0x0C06FAEAu, 1);  /* 0C06FAE8 mov.l @Rm,Rn */
	IF(0x0C06FAEAu); r7 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C06FAECu, 1);  /* 0C06FAEA mov.w @(r0,Rm),Rn */
	IF(0x0C06FAECu); r9 <<= 2;  /* 0C06FAEC shll2 Rn */
	r11 = 0xC17F0D6u; UPD(0x0C06FAF0u, 2);  /* 0C06FAEE mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06FAF0 mov Rm,Rn */
	IF(0x0C06FAF2u); r10 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C06FAF4u, 2);  /* 0C06FAF2 mov.w @(r0,Rm),Rn */
	r6 = 0xC058060u; UPD(0x0C06FAF6u, 1);  /* 0C06FAF4 mov.l @(disp,pc),Rn */
	r7 += r10;  /* 0C06FAF6 add Rm,Rn */
	r11 = 0xC17F0B4u; UPD(0x0C06FAFAu, 2);  /* 0C06FAF8 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C06FAFA exts.w Rm,Rn */
	r11 += r9;  /* 0C06FAFC add Rm,Rn */
	r4 = r10;  /* 0C06FAFE mov Rm,Rn */
	IF(0x0C06FB00u); { u32 t_ = r6; PR = 0x0C06FB04u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06FB04u); }  /* 0C06FB00 jsr @Rn */
L_0C06FB04: BLKS(0x0C06FB04u);
	r1 = 0xC058030u; UPD(0x0C06FB06u, 1);  /* 0C06FB04 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C06FB06 mov Rm,Rn */
	r12 = 0xC17F0C4u; UPD(0x0C06FB0Au, 2);  /* 0C06FB08 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C06FB0A mov Rm,Rn */
	r12 += r9;  /* 0C06FB0C add Rm,Rn */
	IF(0x0C06FB0Eu); { u32 t_ = r1; PR = 0x0C06FB12u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06FB12u); }  /* 0C06FB0E jsr @Rn */
L_0C06FB12: BLKS(0x0C06FB12u);
	r8 -= r0;  /* 0C06FB12 sub Rm,Rn */
	r1 = r8;  /* 0C06FB14 mov Rm,Rn */
	r1 += r1;  /* 0C06FB16 add Rm,Rn */
	r1 += r8;  /* 0C06FB18 add Rm,Rn */
	IF(0x0C06FB1Au); T = (s32)r1 >= 0;  /* 0C06FB1A cmp/pz Rn */
	if (!T) { UPD(0x0C06FB90u, 8); goto L_0C06FB90; }  /* 0C06FB1C bf */
L_0C06FB1E: BLKS(0x0C06FB1Eu);
	r9 = R32(r14 + 0x4u); UPD(0x0C06FB20u, 1);  /* 0C06FB1E mov.l @(disp,Rm),Rn */
	IF(0x0C06FB20u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C06FB20 shar Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C06FB24u, 2);  /* 0C06FB22 mov.l @(disp,Rm),Rn */
	IF(0x0C06FB24u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C06FB24 shar Rn */
	r7 = 0xC058030u; UPD(0x0C06FB28u, 2);  /* 0C06FB26 mov.l @(disp,pc),Rn */
	r8 += r1;  /* 0C06FB28 add Rm,Rn */
	r5 = 0x10000u; UPD(0x0C06FB2Cu, 2);  /* 0C06FB2A mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C06FB2C mov Rm,Rn */
	r8 += r5;  /* 0C06FB2E add Rm,Rn */
	IF(0x0C06FB30u); { u32 t_ = r7; PR = 0x0C06FB34u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06FB34u); }  /* 0C06FB30 jsr @Rn */
L_0C06FB34: BLKS(0x0C06FB34u);
	r4 = R32(r14 + 0x4u); UPD(0x0C06FB36u, 1);  /* 0C06FB34 mov.l @(disp,Rm),Rn */
	r6 = 0xC058060u; UPD(0x0C06FB38u, 1);  /* 0C06FB36 mov.l @(disp,pc),Rn */
	r11 = R32(r4 + 0x28u); UPD(0x0C06FB3Au, 1);  /* 0C06FB38 mov.l @(disp,Rm),Rn */
	r5 = R32(r12); UPD(0x0C06FB3Cu, 1);  /* 0C06FB3A mov.l @Rm,Rn */
	r4 = r10;  /* 0C06FB3C mov Rm,Rn */
	IF(0x0C06FB3Eu); { u32 t_ = r6; PR = 0x0C06FB42u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06FB42u); }  /* 0C06FB3E jsr @Rn */
L_0C06FB42: BLKS(0x0C06FB42u);
	r7 = r10;  /* 0C06FB42 mov Rm,Rn */
	r11 += r0;  /* 0C06FB44 add Rm,Rn */
	r10 = 0xC0A8510u; UPD(0x0C06FB48u, 3);  /* 0C06FB46 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06FB48 add #imm,Rn */
	r0 = 0x28000u; UPD(0x0C06FB4Cu, 2);  /* 0C06FB4A mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C06FB4C mov Rm,Rn */
	W32(r15, r0); UPD(0x0C06FB50u, 2);  /* 0C06FB4E mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C06FB50 mov #imm,Rn */
	IF(0x0C06FB52u); { u32 t_ = r10; PR = 0x0C06FB56u; r6 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A8510, 0x0C0A8510u, 0x0C06FB56u); }  /* 0C06FB52 jsr @Rn */
L_0C06FB56: BLKS(0x0C06FB56u);
	r3 = R32(r14); UPD(0x0C06FB58u, 1);  /* 0C06FB56 mov.l @Rm,Rn */
	r8 = 0x3u;  /* 0C06FB58 mov #imm,Rn */
	r3 += 0x1u;  /* 0C06FB5A add #imm,Rn */
	r2 = (u32)(s32)(s16)r3;  /* 0C06FB5C exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C06FB60u, 4);  /* 0C06FB5E mov.l Rm,@Rn */
	r9 = R32(r14); UPD(0x0C06FB62u, 1);  /* 0C06FB60 mov.l @Rm,Rn */
	T = (s32)r9 > (s32)r8;  /* 0C06FB62 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06FAE4u, 4); goto L_0C06FAE4; } goto L_0C06FB68; }  /* 0C06FB64 bf/s */
L_0C06FB68: BLKS(0x0C06FB68u);
	r2 = 0xC0580D0u; UPD(0x0C06FB6Au, 2);  /* 0C06FB68 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C06FB6A mov Rm,Rn */
	r14 += 0x8u;  /* 0C06FB6C add #imm,Rn */
	r15 = r14;  /* 0C06FB6E mov Rm,Rn */
	IF(0x0C06FB70u); PR = R32(r15); r15 += 4; UPD(0x0C06FB72u, 4);  /* 0C06FB70 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06FB74u, 1);  /* 0C06FB72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06FB76u, 1);  /* 0C06FB74 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06FB78u, 1);  /* 0C06FB76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06FB7Au, 1);  /* 0C06FB78 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06FB7Cu, 1);  /* 0C06FB7A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06FB7Eu, 1);  /* 0C06FB7C mov.l @Rm+,Rn */
	IF(0x0C06FB7Eu); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0580D0u: TAIL(f_0C0580D0); default: JUMPD(tv_); } }  /* 0C06FB7E jmp @Rn */
L_0C06FB90: BLKS(0x0C06FB90u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C06FB1Eu, 3); goto L_0C06FB1E; }  /* 0C06FB90 bra */
}

void f_0C06FBD0(sh3_t *c)
{
	LOCALS;
L_0C06FBD0: BLKS(0x0C06FBD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBD2u, 1);  /* 0C06FBD0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C06FBD2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBD6u, 2);  /* 0C06FBD4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBD8u, 1);  /* 0C06FBD6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBDAu, 1);  /* 0C06FBD8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBDCu, 1);  /* 0C06FBDA mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C06FBDEu, 1);  /* 0C06FBDC mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C06FBDE exts.w Rm,Rn */
	IF(0x0C06FBE0u); MACL = r12 * r0;  /* 0C06FBE0 mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBE4u, 4);  /* 0C06FBE2 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C06FBE6u, 1);  /* 0C06FBE4 mov.l @(disp,pc),Rn */
	IF(0x0C06FBE6u); r10 = MACL;  /* 0C06FBE6 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBEAu, 2);  /* 0C06FBE8 mov.l Rm,@-Rn */
	r10 += r0;  /* 0C06FBEA add Rm,Rn */
	r11 = 0x9Cu; UPD(0x0C06FBEEu, 2);  /* 0C06FBEC mov.w @(disp,pc),Rn */
	IF(0x0C06FBEEu); r15 -= 4; W32(r15, PR); UPD(0x0C06FBF0u, 1);  /* 0C06FBEE sts.l pr,@-Rn */
	r11 += r10;  /* 0C06FBF0 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C06FBF4u, 2);  /* 0C06FBF2 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06FBF4 add #imm,Rn */
	T = (r3 & r3) == 0;  /* 0C06FBF6 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06FCD0u, 5); goto L_0C06FCD0; } goto L_0C06FBFC; }  /* 0C06FBF8 bt/s */
L_0C06FBFC: BLKS(0x0C06FBFCu);
	r2 = r11;  /* 0C06FBFC mov Rm,Rn */
	r2 += 0x1u;  /* 0C06FBFE add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C06FC02u, 4);  /* 0C06FC00 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C06FC02 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C06FC04 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C06FC06 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06FC30u, 6); goto L_0C06FC30; } UPD(0x0C06FC0Cu, 1); goto L_0C06FC0C; }  /* 0C06FC08 bt/s */
L_0C06FC0C: BLKS(0x0C06FC0Cu);
	r14 += 0x8u;  /* 0C06FC0C add #imm,Rn */
	UPD(0x0C06FC0Eu, 1);
L_0C06FC0E: BLKS(0x0C06FC0Eu);
	r15 = r14;  /* 0C06FC0E mov Rm,Rn */
	IF(0x0C06FC10u); PR = R32(r15); r15 += 4; UPD(0x0C06FC12u, 2);  /* 0C06FC10 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06FC14u, 1);  /* 0C06FC12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06FC16u, 1);  /* 0C06FC14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06FC18u, 1);  /* 0C06FC16 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06FC1Au, 1);  /* 0C06FC18 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06FC1Cu, 1);  /* 0C06FC1A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06FC1Eu, 1);  /* 0C06FC1C mov.l @Rm+,Rn */
	IF(0x0C06FC1Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06FC1E rts */
L_0C06FC30: BLKS(0x0C06FC30u);
	r13 = r3;  /* 0C06FC30 mov Rm,Rn */
	r13 += 0xFFFFFFFFu;  /* 0C06FC32 add #imm,Rn */
	W8(r11, r13); UPD(0x0C06FC36u, 3);  /* 0C06FC34 mov.b Rm,@Rn */
	r9 = 0x0u;  /* 0C06FC36 mov #imm,Rn */
	r5 = 0x86u; UPD(0x0C06FC3Au, 2);  /* 0C06FC38 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C06FC3A mov Rm,Rn */
	W8(r2, r9); UPD(0x0C06FC3Eu, 2);  /* 0C06FC3C mov.b Rm,@Rn */
	IF(0x0C06FC3Eu); r13 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C06FC40u, 1);  /* 0C06FC3E mov.w @(r0,Rm),Rn */
	r9 = 0x3u;  /* 0C06FC40 mov #imm,Rn */
	r9 &= r3;  /* 0C06FC42 and Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C06FC46u, 3);  /* 0C06FC44 mov.l @(disp,pc),Rn */
	IF(0x0C06FC46u); r9 <<= 2;  /* 0C06FC46 shll2 Rn */
	r0 = 0xC17F0E4u; UPD(0x0C06FC4Au, 2);  /* 0C06FC48 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C06FC4A mov Rm,Rn */
	r0 += r9;  /* 0C06FC4C add Rm,Rn */
	r5 = R32(r0); UPD(0x0C06FC50u, 3);  /* 0C06FC4E mov.l @Rm,Rn */
	IF(0x0C06FC50u); { u32 t_ = r8; PR = 0x0C06FC54u; W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06FC54u); }  /* 0C06FC50 jsr @Rn */
L_0C06FC54: BLKS(0x0C06FC54u);
	r7 = 0xC17F0F4u; UPD(0x0C06FC56u, 1);  /* 0C06FC54 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C06FC56 mov Rm,Rn */
	r6 = 0xC058030u; UPD(0x0C06FC5Au, 2);  /* 0C06FC58 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C06FC5A add Rm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C06FC5Eu, 2);  /* 0C06FC5C mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C06FC5E mov Rm,Rn */
	IF(0x0C06FC60u); { u32 t_ = r6; PR = 0x0C06FC64u; r5 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06FC64u); }  /* 0C06FC60 jsr @Rn */
L_0C06FC64: BLKS(0x0C06FC64u);
	r8 -= r0;  /* 0C06FC64 sub Rm,Rn */
	r1 = r8;  /* 0C06FC66 mov Rm,Rn */
	r1 += r1;  /* 0C06FC68 add Rm,Rn */
	r1 += r8;  /* 0C06FC6A add Rm,Rn */
	IF(0x0C06FC6Cu); T = (s32)r1 >= 0;  /* 0C06FC6C cmp/pz Rn */
	if (!T) { UPD(0x0C06FCC0u, 8); goto L_0C06FCC0; }  /* 0C06FC6E bf */
L_0C06FC70: BLKS(0x0C06FC70u);
	r9 = R32(r10 + 0x24u); UPD(0x0C06FC72u, 1);  /* 0C06FC70 mov.l @(disp,Rm),Rn */
	IF(0x0C06FC72u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C06FC72 shar Rn */
	IF(0x0C06FC74u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C06FC74 shar Rn */
	r6 = 0xC058030u; UPD(0x0C06FC78u, 3);  /* 0C06FC76 mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C06FC78 add Rm,Rn */
	r4 = 0x10000u; UPD(0x0C06FC7Cu, 2);  /* 0C06FC7A mov.l @(disp,pc),Rn */
	r7 = R32(r14); UPD(0x0C06FC7Eu, 1);  /* 0C06FC7C mov.l @Rm,Rn */
	r9 += r4;  /* 0C06FC7E add Rm,Rn */
	r5 = R32(r7); UPD(0x0C06FC82u, 2);  /* 0C06FC80 mov.l @Rm,Rn */
	IF(0x0C06FC82u); { u32 t_ = r6; PR = 0x0C06FC86u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06FC86u); }  /* 0C06FC82 jsr @Rn */
L_0C06FC86: BLKS(0x0C06FC86u);
	r3 = 0xC058060u; UPD(0x0C06FC88u, 1);  /* 0C06FC86 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C06FC88 mov Rm,Rn */
	r8 = R32(r10 + 0x28u); UPD(0x0C06FC8Cu, 2);  /* 0C06FC8A mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C06FC8Eu, 1);  /* 0C06FC8C mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C06FC8E add Rm,Rn */
	IF(0x0C06FC90u); { u32 t_ = r3; PR = 0x0C06FC94u; r5 = R32(r1); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06FC94u); }  /* 0C06FC90 jsr @Rn */
L_0C06FC94: BLKS(0x0C06FC94u);
	r8 += r0;  /* 0C06FC94 add Rm,Rn */
	r6 = r8;  /* 0C06FC96 mov Rm,Rn */
	r8 = 0xC0A81B0u; UPD(0x0C06FC9Au, 3);  /* 0C06FC98 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06FC9A add #imm,Rn */
	r2 = 0x30000u; UPD(0x0C06FC9Eu, 2);  /* 0C06FC9C mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C06FC9E mov #imm,Rn */
	W32(r15, r2); UPD(0x0C06FCA2u, 2);  /* 0C06FCA0 mov.l Rm,@Rn */
	r5 = r9;  /* 0C06FCA2 mov Rm,Rn */
	IF(0x0C06FCA4u); { u32 t_ = r8; PR = 0x0C06FCA8u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C06FCA8u); }  /* 0C06FCA4 jsr @Rn */
L_0C06FCA8: BLKS(0x0C06FCA8u);
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C06FCAAu, 1);  /* 0C06FCA8 mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C06FCAA tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06FC0Cu, 4); goto L_0C06FC0C; } goto L_0C06FCB0; }  /* 0C06FCAC bf/s */
L_0C06FCB0: BLKS(0x0C06FCB0u);
	r11 = 0xC0580D0u; UPD(0x0C06FCB2u, 2);  /* 0C06FCB0 mov.l @(disp,pc),Rn */
	IF(0x0C06FCB2u); { u32 t_ = r11; PR = 0x0C06FCB6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C06FCB6u); }  /* 0C06FCB2 jsr @Rn */
L_0C06FCB6: BLKS(0x0C06FCB6u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C06FC0Eu, 3); goto L_0C06FC0E; }  /* 0C06FCB6 bra */
L_0C06FCC0: BLKS(0x0C06FCC0u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C06FC70u, 3); goto L_0C06FC70; }  /* 0C06FCC0 bra */
L_0C06FCD0: BLKS(0x0C06FCD0u);
	r8 = 0xC0A0670u; UPD(0x0C06FCD2u, 1);  /* 0C06FCD0 mov.l @(disp,pc),Rn */
	IF(0x0C06FCD2u); { u32 t_ = r8; PR = 0x0C06FCD6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C06FCD6u); }  /* 0C06FCD2 jsr @Rn */
L_0C06FCD6: BLKS(0x0C06FCD6u);
	T = (r0 & r0) == 0;  /* 0C06FCD6 tst Rm,Rn */
	if (T) { UPD(0x0C06FC0Cu, 4); goto L_0C06FC0C; }  /* 0C06FCD8 bt */
L_0C06FCDA: BLKS(0x0C06FCDAu);
	r4 = r12;  /* 0C06FCDA mov Rm,Rn */
	r9 = 0xC0A9E40u; UPD(0x0C06FCDEu, 2);  /* 0C06FCDC mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C06FCDE mov #imm,Rn */
	IF(0x0C06FCE0u); { u32 t_ = r9; PR = 0x0C06FCE4u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C06FCE4u); }  /* 0C06FCE0 jsr @Rn */
L_0C06FCE4: BLKS(0x0C06FCE4u);
	T = (r0 & r0) == 0;  /* 0C06FCE4 tst Rm,Rn */
	if (T) { UPD(0x0C06FC0Cu, 4); goto L_0C06FC0C; }  /* 0C06FCE6 bt */
L_0C06FCE8: BLKS(0x0C06FCE8u);
	r4 = R32(r10 + 0x24u); UPD(0x0C06FCEAu, 1);  /* 0C06FCE8 mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C06FCEA mov Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C06FCEEu, 2);  /* 0C06FCEC mov.l @(disp,Rm),Rn */
	r3 = 0xA9u; UPD(0x0C06FCF0u, 1);  /* 0C06FCEE mov.w @(disp,pc),Rn */
	r10 = 0xC0A9BB0u; UPD(0x0C06FCF2u, 1);  /* 0C06FCF0 mov.l @(disp,pc),Rn */
	IF(0x0C06FCF2u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06FCF4u, 1);  /* 0C06FCF2 mov.b @(r0,Rm),Rn */
	IF(0x0C06FCF4u); { u32 t_ = r10; PR = 0x0C06FCF8u; r6 = r2 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C06FCF8u); }  /* 0C06FCF4 jsr @Rn */
L_0C06FCF8: BLKS(0x0C06FCF8u);
	T = (r0 & r0) == 0;  /* 0C06FCF8 tst Rm,Rn */
	if (T) { UPD(0x0C06FCB6u, 4); goto L_0C06FCB6; }  /* 0C06FCFA bt */
L_0C06FCFC: BLKS(0x0C06FCFCu);
	r4 = 0x8u;  /* 0C06FCFC mov #imm,Rn */
	{ W8(r11, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C06FC0Cu, 4); goto L_0C06FC0C; }  /* 0C06FCFE bra */
}

/* FUN_0c06fd40 */
void f_0C06FD40(sh3_t *c)
{
	LOCALS;
L_0C06FD40: BLKS(0x0C06FD40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06FD42u, 1);  /* 0C06FD40 mov.l Rm,@-Rn */
	r4 = 0x2u;  /* 0C06FD42 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06FD46u, 2);  /* 0C06FD44 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06FD48u, 1);  /* 0C06FD46 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06FD4Au, 1);  /* 0C06FD48 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06FD4Cu, 1);  /* 0C06FD4A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06FD4Eu, 1);  /* 0C06FD4C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06FD50u, 1);  /* 0C06FD4E mov.l Rm,@-Rn */
	r2 = 0xC286509u; UPD(0x0C06FD52u, 1);  /* 0C06FD50 mov.l @(disp,pc),Rn */
	IF(0x0C06FD52u); r15 -= 4; W32(r15, PR); UPD(0x0C06FD54u, 1);  /* 0C06FD52 sts.l pr,@-Rn */
	r8 = 0xC0606C0u; UPD(0x0C06FD56u, 1);  /* 0C06FD54 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C06FD56 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06FD5Au, 2);  /* 0C06FD58 mov.b @Rm,Rn */
	r14 = r15;  /* 0C06FD5A mov Rm,Rn */
	IF(0x0C06FD5Cu); { u32 t_ = r8; PR = 0x0C06FD60u; W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C06FD60u); }  /* 0C06FD5C jsr @Rn */
L_0C06FD60: BLKS(0x0C06FD60u);
	T = (r0 & r0) == 0;  /* 0C06FD60 tst Rm,Rn */
	if (!T) { UPD(0x0C06FD80u, 4); goto L_0C06FD80; }  /* 0C06FD62 bf */
L_0C06FD64: BLKS(0x0C06FD64u);
	r0 = 0x1u;  /* 0C06FD64 mov #imm,Rn */
	r14 += 0xCu;  /* 0C06FD66 add #imm,Rn */
	r15 = r14;  /* 0C06FD68 mov Rm,Rn */
	IF(0x0C06FD6Au); PR = R32(r15); r15 += 4; UPD(0x0C06FD6Cu, 4);  /* 0C06FD6A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06FD6Eu, 1);  /* 0C06FD6C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06FD70u, 1);  /* 0C06FD6E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06FD72u, 1);  /* 0C06FD70 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06FD74u, 1);  /* 0C06FD72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06FD76u, 1);  /* 0C06FD74 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06FD78u, 1);  /* 0C06FD76 mov.l @Rm+,Rn */
	IF(0x0C06FD78u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06FD78 rts */
L_0C06FD80: BLKS(0x0C06FD80u);
	r10 = 0xC2755BCu; UPD(0x0C06FD82u, 1);  /* 0C06FD80 mov.l @(disp,pc),Rn */
	r13 = 0xB4u; UPD(0x0C06FD84u, 1);  /* 0C06FD82 mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r9 = v_; } UPD(0x0C06FD86u, 1);  /* 0C06FD84 mov.w @Rm+,Rn */
	r8 = 0xC22C874u; UPD(0x0C06FD88u, 1);  /* 0C06FD86 mov.l @(disp,pc),Rn */
	IF(0x0C06FD88u); MACL = r9 * r13;  /* 0C06FD88 mul.l Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C06FD8Cu, 3);  /* 0C06FD8A mov.w @Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C06FD8Eu, 1);  /* 0C06FD8C mov.l @(disp,pc),Rn */
	IF(0x0C06FD8Eu); r13 = MACL;  /* 0C06FD8E sts macl,Rn */
	r13 += r5;  /* 0C06FD90 add Rm,Rn */
	r1 = 0xC28629Eu; UPD(0x0C06FD94u, 3);  /* 0C06FD92 mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFFFF;  /* 0C06FD94 extu.w Rm,Rn */
	W32(r13 + 0x4u, r0); UPD(0x0C06FD98u, 2);  /* 0C06FD96 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C06FD98 mov Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r1); UPD(0x0C06FD9Cu, 2);  /* 0C06FD9A mov.w @Rm,Rn */
	r0 = r13;  /* 0C06FD9C mov Rm,Rn */
	r3 = 0x8Au; UPD(0x0C06FDA0u, 2);  /* 0C06FD9E mov.w @(disp,pc),Rn */
	r8 = 0x4Cu;  /* 0C06FDA0 mov #imm,Rn */
	IF(0x0C06FDA2u); W16(r0 + r3, r12); UPD(0x0C06FDA4u, 2);  /* 0C06FDA2 mov.w Rm,@(r0,Rn) */
	r7 = 0x84u; UPD(0x0C06FDA6u, 1);  /* 0C06FDA4 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C06FDA6 mov Rm,Rn */
	r7 += r13;  /* 0C06FDA8 add Rm,Rn */
	r7 += 0x2u;  /* 0C06FDAA add #imm,Rn */
	r0 += 0x8u;  /* 0C06FDAC add #imm,Rn */
	W16(r7, r12); UPD(0x0C06FDB0u, 5);  /* 0C06FDAE mov.w Rm,@Rn */
	IF(0x0C06FDB0u); r0 >>= 2;  /* 0C06FDB0 shlr2 Rn */
	r6 = 0xC0A02D0u; UPD(0x0C06FDB4u, 2);  /* 0C06FDB2 mov.l @(disp,pc),Rn */
	IF(0x0C06FDB4u); r0 >>= 2;  /* 0C06FDB4 shlr2 Rn */
	r2 = 0xC0000014u; UPD(0x0C06FDB8u, 2);  /* 0C06FDB6 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C06FDB8 mov #imm,Rn */
	r0 &= 0x1Fu;  /* 0C06FDBA and #imm,r0 */
	W32(r13, r2); UPD(0x0C06FDBEu, 3);  /* 0C06FDBC mov.l Rm,@Rn */
	W32(r13 + 0x8u, r0); UPD(0x0C06FDC0u, 1);  /* 0C06FDBE mov.l Rm,@(disp,Rn) */
	IF(0x0C06FDC0u); { u32 t_ = r6; PR = 0x0C06FDC4u; W32(r13 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C06FDC4u); }  /* 0C06FDC0 jsr @Rn */
L_0C06FDC4: BLKS(0x0C06FDC4u);
	r5 = R32(r14); UPD(0x0C06FDC6u, 1);  /* 0C06FDC4 mov.l @Rm,Rn */
	IF(0x0C06FDC6u); MACL = r5 * r8;  /* 0C06FDC6 mul.l Rm,Rn */
	r11 = 0xC21F5E2u; UPD(0x0C06FDCAu, 3);  /* 0C06FDC8 mov.l @(disp,pc),Rn */
	r4 = 0xC26CAE0u; UPD(0x0C06FDCCu, 1);  /* 0C06FDCA mov.l @(disp,pc),Rn */
	IF(0x0C06FDCCu); r8 = MACL;  /* 0C06FDCC sts macl,Rn */
	r3 = 0xC392D5Eu; UPD(0x0C06FDD0u, 2);  /* 0C06FDCE mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C06FDD0 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r11); UPD(0x0C06FDD4u, 2);  /* 0C06FDD2 mov.w @Rm,Rn */
	r4 = r9;  /* 0C06FDD4 mov Rm,Rn */
	r2 = R32(r8 + 0x8u); UPD(0x0C06FDD8u, 2);  /* 0C06FDD6 mov.l @(disp,Rm),Rn */
	IF(0x0C06FDD8u); r0 <<= 16;  /* 0C06FDD8 shll16 Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C06FDDCu, 2);  /* 0C06FDDA mov.w @Rm,Rn */
	r0 -= r2;  /* 0C06FDDC sub Rm,Rn */
	r6 = 0xC0A1530u; UPD(0x0C06FDE0u, 2);  /* 0C06FDDE mov.l @(disp,pc),Rn */
	IF(0x0C06FDE0u); r7 <<= 16;  /* 0C06FDE0 shll16 Rn */
	W32(r13 + 0x24u, r0); UPD(0x0C06FDE4u, 2);  /* 0C06FDE2 mov.l Rm,@(disp,Rn) */
	r8 += 0x42u;  /* 0C06FDE4 add #imm,Rn */
	r11 = 0xB0u; UPD(0x0C06FDE8u, 2);  /* 0C06FDE6 mov.w @(disp,pc),Rn */
	IF(0x0C06FDE8u); { u32 t_ = r6; PR = 0x0C06FDECu; W32(r13 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C06FDECu); }  /* 0C06FDE8 jsr @Rn */
L_0C06FDEC: BLKS(0x0C06FDECu);
	r11 += r13;  /* 0C06FDEC add Rm,Rn */
	r0 = 0x3u;  /* 0C06FDEE mov #imm,Rn */
	W32(r14 + 0x4u, r11); UPD(0x0C06FDF2u, 3);  /* 0C06FDF0 mov.l Rm,@(disp,Rn) */
	IF(0x0C06FDF2u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C06FDF4u, 1);  /* 0C06FDF2 mov.b @(r0,Rm),Rn */
	r5 = 0xACu; UPD(0x0C06FDF6u, 1);  /* 0C06FDF4 mov.w @(disp,pc),Rn */
	W8(r11, r1); UPD(0x0C06FDF8u, 1);  /* 0C06FDF6 mov.b Rm,@Rn */
	r5 += r13;  /* 0C06FDF8 add Rm,Rn */
	r5 += 0x1u;  /* 0C06FDFA add #imm,Rn */
	W32(r14 + 0x8u, r5); UPD(0x0C06FDFEu, 3);  /* 0C06FDFC mov.l Rm,@(disp,Rn) */
	r11 = 0xA8u; UPD(0x0C06FE00u, 1);  /* 0C06FDFE mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C06FE02u, 1);  /* 0C06FE00 mov.b @Rm,Rn */
	r11 += r13;  /* 0C06FE02 add Rm,Rn */
	r0 = 0xC0A1780u; UPD(0x0C06FE06u, 2);  /* 0C06FE04 mov.l @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C06FE06 add #imm,Rn */
	W8(r5, r4); UPD(0x0C06FE0Au, 2);  /* 0C06FE08 mov.b Rm,@Rn */
	W8(r11, r4); UPD(0x0C06FE0Cu, 1);  /* 0C06FE0A mov.b Rm,@Rn */
	r2 = 0xC27DC20u; UPD(0x0C06FE0Eu, 1);  /* 0C06FE0C mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C06FE0E mov Rm,Rn */
	IF(0x0C06FE10u); { u32 t_ = r0; PR = 0x0C06FE14u; r5 = R32(r2); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C06FE14u); }  /* 0C06FE10 jsr @Rn */
L_0C06FE14: BLKS(0x0C06FE14u);
	r0 = 0x90u; UPD(0x0C06FE16u, 1);  /* 0C06FE14 mov.w @(disp,pc),Rn */
	IF(0x0C06FE16u); W32(r0 + r13, r12); UPD(0x0C06FE18u, 1);  /* 0C06FE16 mov.l Rm,@(r0,Rn) */
	r10 = (u32)(s32)(s16)R16(r10); UPD(0x0C06FE1Au, 1);  /* 0C06FE18 mov.w @Rm,Rn */
	r0 += 0x24u;  /* 0C06FE1A add #imm,Rn */
	r8 = 0x8Cu; UPD(0x0C06FE1Eu, 2);  /* 0C06FE1C mov.w @(disp,pc),Rn */
	IF(0x0C06FE1Eu); MACL = r10 * r0;  /* 0C06FE1E mul.l Rm,Rn */
	r8 += r13;  /* 0C06FE20 add Rm,Rn */
	W32(r8, r12); UPD(0x0C06FE24u, 4);  /* 0C06FE22 mov.l Rm,@Rn */
	r7 = 0xC26CD40u; UPD(0x0C06FE26u, 1);  /* 0C06FE24 mov.l @(disp,pc),Rn */
	IF(0x0C06FE26u); r8 = MACL;  /* 0C06FE26 sts macl,Rn */
	r8 += r7;  /* 0C06FE28 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C06FE2A add #imm,Rn */
	W16(r8, r9); UPD(0x0C06FE2Eu, 4);  /* 0C06FE2C mov.w Rm,@Rn */
	r3 = 0x94u; UPD(0x0C06FE30u, 1);  /* 0C06FE2E mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C06FE30 add #imm,Rn */
	r1 = 0xC22C874u; UPD(0x0C06FE34u, 2);  /* 0C06FE32 mov.l @(disp,pc),Rn */
	r3 += r13;  /* 0C06FE34 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r1); UPD(0x0C06FE38u, 2);  /* 0C06FE36 mov.w @Rm,Rn */
	r9 = 0xC286274u; UPD(0x0C06FE3Au, 1);  /* 0C06FE38 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFFFF;  /* 0C06FE3A extu.w Rm,Rn */
	W32(r3, r12); UPD(0x0C06FE3Eu, 2);  /* 0C06FE3C mov.l Rm,@Rn */
	r6 = 0xC3000010u; UPD(0x0C06FE40u, 1);  /* 0C06FE3E mov.l @(disp,pc),Rn */
	r3 = 0x8u;  /* 0C06FE40 mov #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C06FE44u, 2);  /* 0C06FE42 mov.w @Rm,Rn */
	W32(r8, r6); UPD(0x0C06FE46u, 1);  /* 0C06FE44 mov.l Rm,@Rn */
	T = r0 > r3;  /* 0C06FE46 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x4u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06FEC0u, 4); goto L_0C06FEC0; } UPD(0x0C06FE4Cu, 1); goto L_0C06FE4C; }  /* 0C06FE48 bt/s */
L_0C06FE4C: BLKS(0x0C06FE4Cu);
	r1 = 0xC28629Eu; UPD(0x0C06FE4Eu, 1);  /* 0C06FE4C mov.l @(disp,pc),Rn */
	r3 = r0 & 0xFFFF;  /* 0C06FE4E extu.w Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r1); UPD(0x0C06FE52u, 2);  /* 0C06FE50 mov.w @Rm,Rn */
	r3 += 0x20u;  /* 0C06FE52 add #imm,Rn */
	r4 = 0x84u; UPD(0x0C06FE56u, 2);  /* 0C06FE54 mov.w @(disp,pc),Rn */
	IF(0x0C06FE56u); r2 >>= 2;  /* 0C06FE56 shlr2 Rn */
	r4 += r8;  /* 0C06FE58 add Rm,Rn */
	IF(0x0C06FE5Au); r2 >>= 2;  /* 0C06FE5A shlr2 Rn */
	IF(0x0C06FE5Cu); r2 >>= 2;  /* 0C06FE5C shlr2 Rn */
	r7 = 0xC0A02D0u; UPD(0x0C06FE60u, 5);  /* 0C06FE5E mov.l @(disp,pc),Rn */
	r4 += 0x2u;  /* 0C06FE60 add #imm,Rn */
	W16(r4, r2); UPD(0x0C06FE64u, 2);  /* 0C06FE62 mov.w Rm,@Rn */
	W32(r8 + 0x8u, r3); UPD(0x0C06FE66u, 1);  /* 0C06FE64 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C06FE66 mov Rm,Rn */
	IF(0x0C06FE68u); { u32 t_ = r7; PR = 0x0C06FE6Cu; W32(r8 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C06FE6Cu); }  /* 0C06FE68 jsr @Rn */
L_0C06FE6C: BLKS(0x0C06FE6Cu);
	r6 = 0xC0A1530u; UPD(0x0C06FE6Eu, 1);  /* 0C06FE6C mov.l @(disp,pc),Rn */
	IF(0x0C06FE6Eu); { u32 t_ = r6; PR = 0x0C06FE72u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C06FE72u); }  /* 0C06FE6E jsr @Rn */
L_0C06FE72: BLKS(0x0C06FE72u);
	r10 = R32(r13 + 0x24u); UPD(0x0C06FE74u, 1);  /* 0C06FE72 mov.l @(disp,Rm),Rn */
	r0 = R32(r13 + 0x28u); UPD(0x0C06FE76u, 1);  /* 0C06FE74 mov.l @(disp,Rm),Rn */
	r13 = (u32)(s32)(s16)R16(r9); UPD(0x0C06FE78u, 1);  /* 0C06FE76 mov.w @Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C06FE7Au, 1);  /* 0C06FE78 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x24u, r10); UPD(0x0C06FE7Cu, 1);  /* 0C06FE7A mov.l Rm,@(disp,Rn) */
	r0 = r13 & 0xFFFF;  /* 0C06FE7C extu.w Rm,Rn */
	r5 = 0xC17F104u; UPD(0x0C06FE80u, 2);  /* 0C06FE7E mov.l @(disp,pc),Rn */
	IF(0x0C06FE80u); r0 <<= 2;  /* 0C06FE80 shll2 Rn */
	IF(0x0C06FE82u); r2 = R32(r0 + r5); UPD(0x0C06FE84u, 2);  /* 0C06FE82 mov.l @(r0,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C06FE86u, 1);  /* 0C06FE84 mov.l @(disp,Rm),Rn */
	r7 = 0xA8u; UPD(0x0C06FE88u, 1);  /* 0C06FE86 mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C06FE8Au, 1);  /* 0C06FE88 mov.b @Rm,Rn */
	r7 += r8;  /* 0C06FE8A add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C06FE8Eu, 2);  /* 0C06FE8C mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C06FE8E add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C06FE92u, 2);  /* 0C06FE90 mov.w @(disp,pc),Rn */
	W8(r7, r3); UPD(0x0C06FE94u, 1);  /* 0C06FE92 mov.b Rm,@Rn */
	IF(0x0C06FE94u); W8(r0 + r8, r4); UPD(0x0C06FE96u, 1);  /* 0C06FE94 mov.b Rm,@(r0,Rn) */
	r9 = 0x9Cu; UPD(0x0C06FE98u, 1);  /* 0C06FE96 mov.w @(disp,pc),Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C06FE9Au, 1);  /* 0C06FE98 mov.l @(disp,Rm),Rn */
	r9 += r8;  /* 0C06FE9A add Rm,Rn */
	r10 = 0xACu; UPD(0x0C06FE9Eu, 2);  /* 0C06FE9C mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C06FE9E add #imm,Rn */
	r10 += r8;  /* 0C06FEA0 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r6); UPD(0x0C06FEA4u, 3);  /* 0C06FEA2 mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C06FEA4 add #imm,Rn */
	W8(r9, r12); UPD(0x0C06FEA8u, 2);  /* 0C06FEA6 mov.b Rm,@Rn */
	W32(r8 + 0x2Cu, r2); UPD(0x0C06FEAAu, 1);  /* 0C06FEA8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r12); UPD(0x0C06FEACu, 1);  /* 0C06FEAA mov.l Rm,@(disp,Rn) */
	W8(r10, r11); UPD(0x0C06FEAEu, 1);  /* 0C06FEAC mov.b Rm,@Rn */
	{ { u32 v_ = r12; r9 -= 1; W8(r9, v_); } /* slot mov.b Rm,@-Rn */ UPD(0x0C06FD64u, 3); goto L_0C06FD64; }  /* 0C06FEAE bra */
L_0C06FEC0: BLKS(0x0C06FEC0u);
	r0 = 0xC050D70u; UPD(0x0C06FEC2u, 1);  /* 0C06FEC0 mov.l @(disp,pc),Rn */
	IF(0x0C06FEC2u); { u32 t_ = r0; PR = 0x0C06FEC6u; r4 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C06FEC6u); }  /* 0C06FEC2 jsr @Rn */
L_0C06FEC6: BLKS(0x0C06FEC6u);
	{ W16(r9, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C06FE4Cu, 3); goto L_0C06FE4C; }  /* 0C06FEC6 bra */
}

void f_0C06FF30(sh3_t *c)
{
	LOCALS;
	goto L_0C06FF30;
L_0C06F830: BLKS(0x0C06F830u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06F832u, 1);  /* 0C06F830 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C06F832 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06F836u, 2);  /* 0C06F834 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06F838u, 1);  /* 0C06F836 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06F83Au, 1);  /* 0C06F838 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06F83Cu, 1);  /* 0C06F83A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C06F83C exts.w Rm,Rn */
	r8 = 0xC0A0670u; UPD(0x0C06F840u, 2);  /* 0C06F83E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06F840 mov Rm,Rn */
	IF(0x0C06F842u); r15 -= 4; W32(r15, PR); UPD(0x0C06F844u, 2);  /* 0C06F842 sts.l pr,@-Rn */
	IF(0x0C06F844u); { u32 t_ = r8; PR = 0x0C06F848u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C06F848u); }  /* 0C06F844 jsr @Rn */
L_0C06F848: BLKS(0x0C06F848u);
	T = (r0 & r0) == 0;  /* 0C06F848 tst Rm,Rn */
	if (T) { UPD(0x0C06F870u, 4); goto L_0C06F870; }  /* 0C06F84A bt */
L_0C06F84C: BLKS(0x0C06F84Cu);
	r2 = 0xB4u; UPD(0x0C06F84Eu, 1);  /* 0C06F84C mov.w @(disp,pc),Rn */
	IF(0x0C06F84Eu); MACL = r11 * r2;  /* 0C06F84E mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C06F852u, 3);  /* 0C06F850 mov.l @(disp,pc),Rn */
	IF(0x0C06F852u); r10 = MACL;  /* 0C06F852 sts macl,Rn */
	r8 = 0x9Cu; UPD(0x0C06F856u, 2);  /* 0C06F854 mov.w @(disp,pc),Rn */
	r10 += r0;  /* 0C06F856 add Rm,Rn */
	r8 += r10;  /* 0C06F858 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C06F85Cu, 3);  /* 0C06F85A mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06F85C tst Rm,Rn */
	{ u32 c_ = T; r2 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06F8D0u, 4); goto L_0C06F8D0; } goto L_0C06F862; }  /* 0C06F85E bt/s */
L_0C06F862: BLKS(0x0C06F862u);
	r2 += 0x1u;  /* 0C06F862 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C06F866u, 3);  /* 0C06F864 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C06F866 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C06F868 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C06F86A cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06F880u, 6); goto L_0C06F880; } UPD(0x0C06F870u, 1); goto L_0C06F870; }  /* 0C06F86C bt/s */
L_0C06F870: BLKS(0x0C06F870u);
	r15 = r14;  /* 0C06F870 mov Rm,Rn */
	IF(0x0C06F872u); PR = R32(r15); r15 += 4; UPD(0x0C06F874u, 2);  /* 0C06F872 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06F876u, 1);  /* 0C06F874 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06F878u, 1);  /* 0C06F876 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06F87Au, 1);  /* 0C06F878 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06F87Cu, 1);  /* 0C06F87A mov.l @Rm+,Rn */
	IF(0x0C06F87Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06F87C rts */
L_0C06F880: BLKS(0x0C06F880u);
	r0 = r3;  /* 0C06F880 mov Rm,Rn */
	r4 = 0x0u;  /* 0C06F882 mov #imm,Rn */
	W8(r2, r4); UPD(0x0C06F886u, 3);  /* 0C06F884 mov.b Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C06F886 add #imm,Rn */
	W8(r8, r0); UPD(0x0C06F88Au, 2);  /* 0C06F888 mov.b Rm,@Rn */
	r2 = 0x86u; UPD(0x0C06F88Cu, 1);  /* 0C06F88A mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C06F88C mov Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C06F890u, 2);  /* 0C06F88E mov.l @(disp,pc),Rn */
	IF(0x0C06F890u); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06F892u, 1);  /* 0C06F890 mov.w @(r0,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C06F894u, 1);  /* 0C06F892 mov.l @(disp,pc),Rn */
	IF(0x0C06F894u); { u32 t_ = r8; PR = 0x0C06F898u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06F898u); }  /* 0C06F894 jsr @Rn */
L_0C06F898: BLKS(0x0C06F898u);
	r8 = R32(r10 + 0x24u); UPD(0x0C06F89Au, 1);  /* 0C06F898 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C06F89A mov Rm,Rn */
	r8 += r0;  /* 0C06F89C add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C06F8A0u, 3);  /* 0C06F89E mov.l @(disp,pc),Rn */
	r6 = 0x10000u; UPD(0x0C06F8A2u, 1);  /* 0C06F8A0 mov.l @(disp,pc),Rn */
	r5 = 0xA0000u; UPD(0x0C06F8A4u, 1);  /* 0C06F8A2 mov.l @(disp,pc),Rn */
	IF(0x0C06F8A4u); { u32 t_ = r0; PR = 0x0C06F8A8u; r8 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06F8A8u); }  /* 0C06F8A4 jsr @Rn */
L_0C06F8A8: BLKS(0x0C06F8A8u);
	r6 = R32(r10 + 0x28u); UPD(0x0C06F8AAu, 1);  /* 0C06F8A8 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06F8AA add #imm,Rn */
	r7 = 0x30000u; UPD(0x0C06F8AEu, 2);  /* 0C06F8AC mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C06F8AE mov Rm,Rn */
	W32(r15, r7); UPD(0x0C06F8B2u, 2);  /* 0C06F8B0 mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C06F8B2 mov #imm,Rn */
	r7 = r9;  /* 0C06F8B4 mov Rm,Rn */
	r9 = 0xC0A8510u; UPD(0x0C06F8B8u, 3);  /* 0C06F8B6 mov.l @(disp,pc),Rn */
	r8 = 0xC0580D0u; UPD(0x0C06F8BAu, 1);  /* 0C06F8B8 mov.l @(disp,pc),Rn */
	IF(0x0C06F8BAu); { u32 t_ = r9; PR = 0x0C06F8BEu; r6 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8510, 0x0C0A8510u, 0x0C06F8BEu); }  /* 0C06F8BA jsr @Rn */
L_0C06F8BE: BLKS(0x0C06F8BEu);
	r15 += 0x4u;  /* 0C06F8BE add #imm,Rn */
	IF(0x0C06F8C0u); { u32 t_ = r8; PR = 0x0C06F8C4u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C06F8C4u); }  /* 0C06F8C0 jsr @Rn */
L_0C06F8C4: BLKS(0x0C06F8C4u);
	{ IF(0x0C06F8C6u); ; /* slot nop */ UPD(0x0C06F870u, 3); goto L_0C06F870; }  /* 0C06F8C4 bra */
L_0C06F8D0: BLKS(0x0C06F8D0u);
	r9 = 0xC0A9E40u; UPD(0x0C06F8D2u, 1);  /* 0C06F8D0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06F8D2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C06F8D4 mov #imm,Rn */
	IF(0x0C06F8D6u); { u32 t_ = r9; PR = 0x0C06F8DAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C06F8DAu); }  /* 0C06F8D6 jsr @Rn */
L_0C06F8DA: BLKS(0x0C06F8DAu);
	T = (r0 & r0) == 0;  /* 0C06F8DA tst Rm,Rn */
	if (T) { UPD(0x0C06F870u, 4); goto L_0C06F870; }  /* 0C06F8DC bt */
L_0C06F8DE: BLKS(0x0C06F8DEu);
	r0 = r10;  /* 0C06F8DE mov Rm,Rn */
	r4 = 0xA9u; UPD(0x0C06F8E2u, 2);  /* 0C06F8E0 mov.w @(disp,pc),Rn */
	IF(0x0C06F8E2u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C06F8E4u, 1);  /* 0C06F8E2 mov.b @(r0,Rm),Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C06F8E6u, 1);  /* 0C06F8E4 mov.l @(disp,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C06F8E8u, 1);  /* 0C06F8E6 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A9BB0u; UPD(0x0C06F8EAu, 1);  /* 0C06F8E8 mov.l @(disp,pc),Rn */
	IF(0x0C06F8EAu); { u32 t_ = r10; PR = 0x0C06F8EEu; r6 = r3 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C06F8EEu); }  /* 0C06F8EA jsr @Rn */
L_0C06F8EE: BLKS(0x0C06F8EEu);
	T = (r0 & r0) == 0;  /* 0C06F8EE tst Rm,Rn */
	if (T) { UPD(0x0C06F870u, 4); goto L_0C06F870; }  /* 0C06F8F0 bt */
L_0C06F8F2: BLKS(0x0C06F8F2u);
	r5 = 0x3u;  /* 0C06F8F2 mov #imm,Rn */
	{ W8(r8, r5); /* slot mov.b Rm,@Rn */ UPD(0x0C06F870u, 4); goto L_0C06F870; }  /* 0C06F8F4 bra */
L_0C06FBD0: BLKS(0x0C06FBD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBD2u, 1);  /* 0C06FBD0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C06FBD2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBD6u, 2);  /* 0C06FBD4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBD8u, 1);  /* 0C06FBD6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBDAu, 1);  /* 0C06FBD8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBDCu, 1);  /* 0C06FBDA mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C06FBDEu, 1);  /* 0C06FBDC mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C06FBDE exts.w Rm,Rn */
	IF(0x0C06FBE0u); MACL = r12 * r0;  /* 0C06FBE0 mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBE4u, 4);  /* 0C06FBE2 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C06FBE6u, 1);  /* 0C06FBE4 mov.l @(disp,pc),Rn */
	IF(0x0C06FBE6u); r10 = MACL;  /* 0C06FBE6 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06FBEAu, 2);  /* 0C06FBE8 mov.l Rm,@-Rn */
	r10 += r0;  /* 0C06FBEA add Rm,Rn */
	r11 = 0x9Cu; UPD(0x0C06FBEEu, 2);  /* 0C06FBEC mov.w @(disp,pc),Rn */
	IF(0x0C06FBEEu); r15 -= 4; W32(r15, PR); UPD(0x0C06FBF0u, 1);  /* 0C06FBEE sts.l pr,@-Rn */
	r11 += r10;  /* 0C06FBF0 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C06FBF4u, 2);  /* 0C06FBF2 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06FBF4 add #imm,Rn */
	T = (r3 & r3) == 0;  /* 0C06FBF6 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06FCD0u, 5); goto L_0C06FCD0; } goto L_0C06FBFC; }  /* 0C06FBF8 bt/s */
L_0C06FBFC: BLKS(0x0C06FBFCu);
	r2 = r11;  /* 0C06FBFC mov Rm,Rn */
	r2 += 0x1u;  /* 0C06FBFE add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C06FC02u, 4);  /* 0C06FC00 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C06FC02 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C06FC04 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C06FC06 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06FC30u, 6); goto L_0C06FC30; } UPD(0x0C06FC0Cu, 1); goto L_0C06FC0C; }  /* 0C06FC08 bt/s */
L_0C06FC0C: BLKS(0x0C06FC0Cu);
	r14 += 0x8u;  /* 0C06FC0C add #imm,Rn */
	UPD(0x0C06FC0Eu, 1);
L_0C06FC0E: BLKS(0x0C06FC0Eu);
	r15 = r14;  /* 0C06FC0E mov Rm,Rn */
	IF(0x0C06FC10u); PR = R32(r15); r15 += 4; UPD(0x0C06FC12u, 2);  /* 0C06FC10 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06FC14u, 1);  /* 0C06FC12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06FC16u, 1);  /* 0C06FC14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06FC18u, 1);  /* 0C06FC16 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06FC1Au, 1);  /* 0C06FC18 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06FC1Cu, 1);  /* 0C06FC1A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06FC1Eu, 1);  /* 0C06FC1C mov.l @Rm+,Rn */
	IF(0x0C06FC1Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06FC1E rts */
L_0C06FC30: BLKS(0x0C06FC30u);
	r13 = r3;  /* 0C06FC30 mov Rm,Rn */
	r13 += 0xFFFFFFFFu;  /* 0C06FC32 add #imm,Rn */
	W8(r11, r13); UPD(0x0C06FC36u, 3);  /* 0C06FC34 mov.b Rm,@Rn */
	r9 = 0x0u;  /* 0C06FC36 mov #imm,Rn */
	r5 = 0x86u; UPD(0x0C06FC3Au, 2);  /* 0C06FC38 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C06FC3A mov Rm,Rn */
	W8(r2, r9); UPD(0x0C06FC3Eu, 2);  /* 0C06FC3C mov.b Rm,@Rn */
	IF(0x0C06FC3Eu); r13 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C06FC40u, 1);  /* 0C06FC3E mov.w @(r0,Rm),Rn */
	r9 = 0x3u;  /* 0C06FC40 mov #imm,Rn */
	r9 &= r3;  /* 0C06FC42 and Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C06FC46u, 3);  /* 0C06FC44 mov.l @(disp,pc),Rn */
	IF(0x0C06FC46u); r9 <<= 2;  /* 0C06FC46 shll2 Rn */
	r0 = 0xC17F0E4u; UPD(0x0C06FC4Au, 2);  /* 0C06FC48 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C06FC4A mov Rm,Rn */
	r0 += r9;  /* 0C06FC4C add Rm,Rn */
	r5 = R32(r0); UPD(0x0C06FC50u, 3);  /* 0C06FC4E mov.l @Rm,Rn */
	IF(0x0C06FC50u); { u32 t_ = r8; PR = 0x0C06FC54u; W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06FC54u); }  /* 0C06FC50 jsr @Rn */
L_0C06FC54: BLKS(0x0C06FC54u);
	r7 = 0xC17F0F4u; UPD(0x0C06FC56u, 1);  /* 0C06FC54 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C06FC56 mov Rm,Rn */
	r6 = 0xC058030u; UPD(0x0C06FC5Au, 2);  /* 0C06FC58 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C06FC5A add Rm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C06FC5Eu, 2);  /* 0C06FC5C mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C06FC5E mov Rm,Rn */
	IF(0x0C06FC60u); { u32 t_ = r6; PR = 0x0C06FC64u; r5 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06FC64u); }  /* 0C06FC60 jsr @Rn */
L_0C06FC64: BLKS(0x0C06FC64u);
	r8 -= r0;  /* 0C06FC64 sub Rm,Rn */
	r1 = r8;  /* 0C06FC66 mov Rm,Rn */
	r1 += r1;  /* 0C06FC68 add Rm,Rn */
	r1 += r8;  /* 0C06FC6A add Rm,Rn */
	IF(0x0C06FC6Cu); T = (s32)r1 >= 0;  /* 0C06FC6C cmp/pz Rn */
	if (!T) { UPD(0x0C06FCC0u, 8); goto L_0C06FCC0; }  /* 0C06FC6E bf */
L_0C06FC70: BLKS(0x0C06FC70u);
	r9 = R32(r10 + 0x24u); UPD(0x0C06FC72u, 1);  /* 0C06FC70 mov.l @(disp,Rm),Rn */
	IF(0x0C06FC72u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C06FC72 shar Rn */
	IF(0x0C06FC74u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C06FC74 shar Rn */
	r6 = 0xC058030u; UPD(0x0C06FC78u, 3);  /* 0C06FC76 mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C06FC78 add Rm,Rn */
	r4 = 0x10000u; UPD(0x0C06FC7Cu, 2);  /* 0C06FC7A mov.l @(disp,pc),Rn */
	r7 = R32(r14); UPD(0x0C06FC7Eu, 1);  /* 0C06FC7C mov.l @Rm,Rn */
	r9 += r4;  /* 0C06FC7E add Rm,Rn */
	r5 = R32(r7); UPD(0x0C06FC82u, 2);  /* 0C06FC80 mov.l @Rm,Rn */
	IF(0x0C06FC82u); { u32 t_ = r6; PR = 0x0C06FC86u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06FC86u); }  /* 0C06FC82 jsr @Rn */
L_0C06FC86: BLKS(0x0C06FC86u);
	r3 = 0xC058060u; UPD(0x0C06FC88u, 1);  /* 0C06FC86 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C06FC88 mov Rm,Rn */
	r8 = R32(r10 + 0x28u); UPD(0x0C06FC8Cu, 2);  /* 0C06FC8A mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C06FC8Eu, 1);  /* 0C06FC8C mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C06FC8E add Rm,Rn */
	IF(0x0C06FC90u); { u32 t_ = r3; PR = 0x0C06FC94u; r5 = R32(r1); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C06FC94u); }  /* 0C06FC90 jsr @Rn */
L_0C06FC94: BLKS(0x0C06FC94u);
	r8 += r0;  /* 0C06FC94 add Rm,Rn */
	r6 = r8;  /* 0C06FC96 mov Rm,Rn */
	r8 = 0xC0A81B0u; UPD(0x0C06FC9Au, 3);  /* 0C06FC98 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06FC9A add #imm,Rn */
	r2 = 0x30000u; UPD(0x0C06FC9Eu, 2);  /* 0C06FC9C mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C06FC9E mov #imm,Rn */
	W32(r15, r2); UPD(0x0C06FCA2u, 2);  /* 0C06FCA0 mov.l Rm,@Rn */
	r5 = r9;  /* 0C06FCA2 mov Rm,Rn */
	IF(0x0C06FCA4u); { u32 t_ = r8; PR = 0x0C06FCA8u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C06FCA8u); }  /* 0C06FCA4 jsr @Rn */
L_0C06FCA8: BLKS(0x0C06FCA8u);
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C06FCAAu, 1);  /* 0C06FCA8 mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C06FCAA tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06FC0Cu, 4); goto L_0C06FC0C; } goto L_0C06FCB0; }  /* 0C06FCAC bf/s */
L_0C06FCB0: BLKS(0x0C06FCB0u);
	r11 = 0xC0580D0u; UPD(0x0C06FCB2u, 2);  /* 0C06FCB0 mov.l @(disp,pc),Rn */
	IF(0x0C06FCB2u); { u32 t_ = r11; PR = 0x0C06FCB6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C06FCB6u); }  /* 0C06FCB2 jsr @Rn */
L_0C06FCB6: BLKS(0x0C06FCB6u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C06FC0Eu, 3); goto L_0C06FC0E; }  /* 0C06FCB6 bra */
L_0C06FCC0: BLKS(0x0C06FCC0u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C06FC70u, 3); goto L_0C06FC70; }  /* 0C06FCC0 bra */
L_0C06FCD0: BLKS(0x0C06FCD0u);
	r8 = 0xC0A0670u; UPD(0x0C06FCD2u, 1);  /* 0C06FCD0 mov.l @(disp,pc),Rn */
	IF(0x0C06FCD2u); { u32 t_ = r8; PR = 0x0C06FCD6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C06FCD6u); }  /* 0C06FCD2 jsr @Rn */
L_0C06FCD6: BLKS(0x0C06FCD6u);
	T = (r0 & r0) == 0;  /* 0C06FCD6 tst Rm,Rn */
	if (T) { UPD(0x0C06FC0Cu, 4); goto L_0C06FC0C; }  /* 0C06FCD8 bt */
L_0C06FCDA: BLKS(0x0C06FCDAu);
	r4 = r12;  /* 0C06FCDA mov Rm,Rn */
	r9 = 0xC0A9E40u; UPD(0x0C06FCDEu, 2);  /* 0C06FCDC mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C06FCDE mov #imm,Rn */
	IF(0x0C06FCE0u); { u32 t_ = r9; PR = 0x0C06FCE4u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C06FCE4u); }  /* 0C06FCE0 jsr @Rn */
L_0C06FCE4: BLKS(0x0C06FCE4u);
	T = (r0 & r0) == 0;  /* 0C06FCE4 tst Rm,Rn */
	if (T) { UPD(0x0C06FC0Cu, 4); goto L_0C06FC0C; }  /* 0C06FCE6 bt */
L_0C06FCE8: BLKS(0x0C06FCE8u);
	r4 = R32(r10 + 0x24u); UPD(0x0C06FCEAu, 1);  /* 0C06FCE8 mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C06FCEA mov Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C06FCEEu, 2);  /* 0C06FCEC mov.l @(disp,Rm),Rn */
	r3 = 0xA9u; UPD(0x0C06FCF0u, 1);  /* 0C06FCEE mov.w @(disp,pc),Rn */
	r10 = 0xC0A9BB0u; UPD(0x0C06FCF2u, 1);  /* 0C06FCF0 mov.l @(disp,pc),Rn */
	IF(0x0C06FCF2u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06FCF4u, 1);  /* 0C06FCF2 mov.b @(r0,Rm),Rn */
	IF(0x0C06FCF4u); { u32 t_ = r10; PR = 0x0C06FCF8u; r6 = r2 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C06FCF8u); }  /* 0C06FCF4 jsr @Rn */
L_0C06FCF8: BLKS(0x0C06FCF8u);
	T = (r0 & r0) == 0;  /* 0C06FCF8 tst Rm,Rn */
	if (T) { UPD(0x0C06FCB6u, 4); goto L_0C06FCB6; }  /* 0C06FCFA bt */
L_0C06FCFC: BLKS(0x0C06FCFCu);
	r4 = 0x8u;  /* 0C06FCFC mov #imm,Rn */
	{ W8(r11, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C06FC0Cu, 4); goto L_0C06FC0C; }  /* 0C06FCFE bra */
L_0C06FF30: BLKS(0x0C06FF30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06FF32u, 1);  /* 0C06FF30 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06FF34u, 1);  /* 0C06FF32 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06FF36u, 1);  /* 0C06FF34 mov.l Rm,@-Rn */
	r9 = 0x8u;  /* 0C06FF36 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06FF3Au, 2);  /* 0C06FF38 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06FF3Cu, 1);  /* 0C06FF3A mov.l Rm,@-Rn */
	r10 = 0xB4u; UPD(0x0C06FF3Eu, 1);  /* 0C06FF3C mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C06FF3E exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06FF42u, 2);  /* 0C06FF40 mov.l Rm,@-Rn */
	IF(0x0C06FF42u); MACL = r12 * r10;  /* 0C06FF42 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06FF46u, 3);  /* 0C06FF44 mov.l Rm,@-Rn */
	r11 = 0xC26CD40u; UPD(0x0C06FF48u, 1);  /* 0C06FF46 mov.l @(disp,pc),Rn */
	IF(0x0C06FF48u); r8 = MACL;  /* 0C06FF48 sts macl,Rn */
	IF(0x0C06FF4Au); r15 -= 4; W32(r15, PR); UPD(0x0C06FF4Cu, 2);  /* 0C06FF4A sts.l pr,@-Rn */
	r8 += r11;  /* 0C06FF4C add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C06FF50u, 2);  /* 0C06FF4E mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFE0u;  /* 0C06FF50 add #imm,Rn */
	T = r0 > r9;  /* 0C06FF52 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06FF5Cu, 5); goto L_0C06FF5C; } goto L_0C06FF58; }  /* 0C06FF54 bf/s */
L_0C06FF58: BLKS(0x0C06FF58u);
	{ IF(0x0C06FF5Au); ; /* slot nop */ UPD(0x0C070420u, 4); goto L_0C070420; }  /* 0C06FF58 bra */
L_0C06FF5C: BLKS(0x0C06FF5Cu);
	r13 = 0xC0A03F0u; UPD(0x0C06FF5Eu, 1);  /* 0C06FF5C mov.l @(disp,pc),Rn */
	IF(0x0C06FF5Eu); { u32 t_ = r13; PR = 0x0C06FF62u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C06FF62u); }  /* 0C06FF5E jsr @Rn */
L_0C06FF62: BLKS(0x0C06FF62u);
	IF(0x0C06FF62u); T = (s32)r0 >= 0;  /* 0C06FF62 cmp/pz Rn */
	{ u32 c_ = T; r3 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06FF6Cu, 4); goto L_0C06FF6C; } goto L_0C06FF68; }  /* 0C06FF64 bt/s */
L_0C06FF68: BLKS(0x0C06FF68u);
	{ r6 = R32(r8 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0702B0u, 4); goto L_0C0702B0; }  /* 0C06FF68 bra */
L_0C06FF6C: BLKS(0x0C06FF6Cu);
	IF(0x0C06FF6Cu); MACL = r0 * r10;  /* 0C06FF6C mul.l Rm,Rn */
	r4 = R32(r8 + 0x8u); UPD(0x0C06FF70u, 3);  /* 0C06FF6E mov.l @(disp,Rm),Rn */
	IF(0x0C06FF70u); r0 = MACL;  /* 0C06FF70 sts macl,Rn */
	r0 += r11;  /* 0C06FF72 add Rm,Rn */
	r5 = R32(r0 + 0x24u); UPD(0x0C06FF76u, 3);  /* 0C06FF74 mov.l @(disp,Rm),Rn */
	r4 += 0xFFFFFFE0u;  /* 0C06FF76 add #imm,Rn */
	r2 = R32(r0 + 0x28u); UPD(0x0C06FF7Au, 2);  /* 0C06FF78 mov.l @(disp,Rm),Rn */
	T = r4 > r9;  /* 0C06FF7A cmp/hi Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C06FF7Eu, 2);  /* 0C06FF7C mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r8 + 0x28u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06FFDCu, 3); goto L_0C06FFDC; } UPD(0x0C06FF82u, 1); goto L_0C06FF82; }  /* 0C06FF7E bt/s */
L_0C06FF82: BLKS(0x0C06FF82u);
	r0 = 0xC06FF98u;  /* 0C06FF82 mova @(disp,pc),r0 */
	r4 += r4;  /* 0C06FF84 add Rm,Rn */
	IF(0x0C06FF86u); r6 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C06FF88u, 3);  /* 0C06FF86 mov.w @(r0,Rm),Rn */
	IF(0x0C06FF88u); { u32 tv_ = (r6 + 0x0C06FF8Cu); u32 t_ = PHYS(tv_); IF(0x0C06FF8Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C06FFB0u: goto L_0C06FFB0; case 0x0C06FFD0u: goto L_0C06FFD0; case 0x0C070070u: goto L_0C070070; case 0x0C0700E0u: goto L_0C0700E0; case 0x0C070150u: goto L_0C070150; case 0x0C0701A0u: goto L_0C0701A0; case 0x0C070210u: goto L_0C070210; case 0x0C070220u: goto L_0C070220; case 0x0C070230u: goto L_0C070230; default: JUMPD(tv_); } }  /* 0C06FF88 braf Rn */
L_0C06FFB0: BLKS(0x0C06FFB0u);
	r1 = 0xC06F930u; UPD(0x0C06FFB2u, 1);  /* 0C06FFB0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C06FFB2 mov Rm,Rn */
	r5 = r3;  /* 0C06FFB4 mov Rm,Rn */
	UPD(0x0C06FFB6u, 2);
L_0C06FFB6: BLKS(0x0C06FFB6u);
	r15 = r14;  /* 0C06FFB6 mov Rm,Rn */
	IF(0x0C06FFB8u); PR = R32(r15); r15 += 4; UPD(0x0C06FFBAu, 2);  /* 0C06FFB8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06FFBCu, 1);  /* 0C06FFBA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06FFBEu, 1);  /* 0C06FFBC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06FFC0u, 1);  /* 0C06FFBE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06FFC2u, 1);  /* 0C06FFC0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06FFC4u, 1);  /* 0C06FFC2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06FFC6u, 1);  /* 0C06FFC4 mov.l @Rm+,Rn */
	IF(0x0C06FFC6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06F830u: goto L_0C06F830; case 0x0C06FBD0u: goto L_0C06FBD0; default: JUMPD(tv_); } }  /* 0C06FFC6 jmp @Rn */
L_0C06FFD0: BLKS(0x0C06FFD0u);
	r10 = 0xC0A0670u; UPD(0x0C06FFD2u, 1);  /* 0C06FFD0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C06FFD2 mov Rm,Rn */
	IF(0x0C06FFD4u); { u32 t_ = r10; PR = 0x0C06FFD8u; r5 = r3; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C06FFD8u); }  /* 0C06FFD4 jsr @Rn */
L_0C06FFD8: BLKS(0x0C06FFD8u);
	T = (r0 & r0) == 0;  /* 0C06FFD8 tst Rm,Rn */
	if (!T) { UPD(0x0C06FFF0u, 4); goto L_0C06FFF0; }  /* 0C06FFDA bf */
L_0C06FFDC: BLKS(0x0C06FFDCu);
	r15 = r14;  /* 0C06FFDC mov Rm,Rn */
	IF(0x0C06FFDEu); PR = R32(r15); r15 += 4; UPD(0x0C06FFE0u, 2);  /* 0C06FFDE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06FFE2u, 1);  /* 0C06FFE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06FFE4u, 1);  /* 0C06FFE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06FFE6u, 1);  /* 0C06FFE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06FFE8u, 1);  /* 0C06FFE6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06FFEAu, 1);  /* 0C06FFE8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06FFECu, 1);  /* 0C06FFEA mov.l @Rm+,Rn */
	IF(0x0C06FFECu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06FFEC rts */
L_0C06FFF0: BLKS(0x0C06FFF0u);
	r11 = 0xC0A9E40u; UPD(0x0C06FFF2u, 1);  /* 0C06FFF0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C06FFF2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C06FFF4 mov #imm,Rn */
	IF(0x0C06FFF6u); { u32 t_ = r11; PR = 0x0C06FFFAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C06FFFAu); }  /* 0C06FFF6 jsr @Rn */
L_0C06FFFA: BLKS(0x0C06FFFAu);
	T = (r0 & r0) == 0;  /* 0C06FFFA tst Rm,Rn */
	if (T) { UPD(0x0C06FFDCu, 4); goto L_0C06FFDC; }  /* 0C06FFFC bt */
L_0C06FFFE: BLKS(0x0C06FFFEu);
	r9 = 0xB4u; UPD(0x0C070000u, 1);  /* 0C06FFFE mov.w @(disp,pc),Rn */
	IF(0x0C070000u); MACL = r12 * r9;  /* 0C070000 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C070004u, 3);  /* 0C070002 mov.l @(disp,pc),Rn */
	IF(0x0C070004u); r10 = MACL;  /* 0C070004 sts macl,Rn */
	r10 += r4;  /* 0C070006 add Rm,Rn */
	r8 = 0xA9u; UPD(0x0C07000Au, 3);  /* 0C070008 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C07000A mov Rm,Rn */
	r13 = 0xC0A9BB0u; UPD(0x0C07000Eu, 2);  /* 0C07000C mov.l @(disp,pc),Rn */
	IF(0x0C07000Eu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C070010u, 1);  /* 0C07000E mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C070012u, 1);  /* 0C070010 mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C070012 extu.b Rm,Rn */
	IF(0x0C070014u); { u32 t_ = r13; PR = 0x0C070018u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C070018u); }  /* 0C070014 jsr @Rn */
L_0C070018: BLKS(0x0C070018u);
	T = (r0 & r0) == 0;  /* 0C070018 tst Rm,Rn */
	if (T) { UPD(0x0C06FFDCu, 4); goto L_0C06FFDC; }  /* 0C07001A bt */
L_0C07001C: BLKS(0x0C07001Cu);
	r0 = r10;  /* 0C07001C mov Rm,Rn */
	r5 = 0x86u; UPD(0x0C070020u, 2);  /* 0C07001E mov.w @(disp,pc),Rn */
	r13 = 0xC058060u; UPD(0x0C070022u, 1);  /* 0C070020 mov.l @(disp,pc),Rn */
	IF(0x0C070022u); r9 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C070024u, 1);  /* 0C070022 mov.w @(r0,Rm),Rn */
	r5 = 0x100000u; UPD(0x0C070026u, 1);  /* 0C070024 mov.l @(disp,pc),Rn */
	IF(0x0C070026u); { u32 t_ = r13; PR = 0x0C07002Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07002Au); }  /* 0C070026 jsr @Rn */
L_0C07002A: BLKS(0x0C07002Au);
	r8 = R32(r10 + 0x24u); UPD(0x0C07002Cu, 1);  /* 0C07002A mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C07002C mov Rm,Rn */
	r11 = 0xC058030u; UPD(0x0C070030u, 2);  /* 0C07002E mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C070030 add Rm,Rn */
	r2 = 0x20000u; UPD(0x0C070034u, 2);  /* 0C070032 mov.l @(disp,pc),Rn */
	r5 = 0x140000u; UPD(0x0C070036u, 1);  /* 0C070034 mov.l @(disp,pc),Rn */
	IF(0x0C070036u); { u32 t_ = r11; PR = 0x0C07003Au; r8 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07003Au); }  /* 0C070036 jsr @Rn */
L_0C07003A: BLKS(0x0C07003Au);
	r6 = R32(r10 + 0x28u); UPD(0x0C07003Cu, 1);  /* 0C07003A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07003C add #imm,Rn */
	r3 = 0x30000u; UPD(0x0C070040u, 2);  /* 0C07003E mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C070040 add Rm,Rn */
	W32(r15, r3); UPD(0x0C070044u, 2);  /* 0C070042 mov.l Rm,@Rn */
	r4 = 0x3u;  /* 0C070044 mov #imm,Rn */
	UPD(0x0C070046u, 1);
L_0C070046: BLKS(0x0C070046u);
	r0 = 0xC0A8A50u; UPD(0x0C070048u, 1);  /* 0C070046 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C070048 mov Rm,Rn */
	r7 = r9;  /* 0C07004A mov Rm,Rn */
	UPD(0x0C07004Cu, 2);
L_0C07004C: BLKS(0x0C07004Cu);
	IF(0x0C07004Cu); { u32 t_ = r0; PR = 0x0C070050u; IF(0x0C07004Eu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C070050u); }  /* 0C07004C jsr @Rn */
L_0C070050: BLKS(0x0C070050u);
	r1 = 0xC0580D0u; UPD(0x0C070052u, 1);  /* 0C070050 mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C070052 add #imm,Rn */
	r4 = r12;  /* 0C070054 mov Rm,Rn */
	IF(0x0C070056u); ;  /* 0C070056 nop */
	UPD(0x0C070058u, 3);
L_0C070058: BLKS(0x0C070058u);
	r15 = r14;  /* 0C070058 mov Rm,Rn */
	IF(0x0C07005Au); PR = R32(r15); r15 += 4; UPD(0x0C07005Cu, 2);  /* 0C07005A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07005Eu, 1);  /* 0C07005C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C070060u, 1);  /* 0C07005E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C070062u, 1);  /* 0C070060 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C070064u, 1);  /* 0C070062 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C070066u, 1);  /* 0C070064 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070068u, 1);  /* 0C070066 mov.l @Rm+,Rn */
	IF(0x0C070068u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A03B0u: TAIL(f_0C0A03B0); case 0x0C0A0940u: TAIL(f_0C0A0940); default: JUMPD(tv_); } }  /* 0C070068 jmp @Rn */
L_0C070070: BLKS(0x0C070070u);
	r10 = 0xC0A0670u; UPD(0x0C070072u, 1);  /* 0C070070 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C070072 mov Rm,Rn */
	IF(0x0C070074u); { u32 t_ = r10; PR = 0x0C070078u; r5 = r3; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C070078u); }  /* 0C070074 jsr @Rn */
L_0C070078: BLKS(0x0C070078u);
	T = (r0 & r0) == 0;  /* 0C070078 tst Rm,Rn */
	if (T) { UPD(0x0C06FFDCu, 4); goto L_0C06FFDC; }  /* 0C07007A bt */
L_0C07007C: BLKS(0x0C07007Cu);
	r4 = r12;  /* 0C07007C mov Rm,Rn */
	r8 = 0xC0A9E40u; UPD(0x0C070080u, 2);  /* 0C07007E mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C070080 mov #imm,Rn */
	IF(0x0C070082u); { u32 t_ = r8; PR = 0x0C070086u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C070086u); }  /* 0C070082 jsr @Rn */
L_0C070086: BLKS(0x0C070086u);
	T = (r0 & r0) == 0;  /* 0C070086 tst Rm,Rn */
	if (T) { UPD(0x0C06FFDCu, 4); goto L_0C06FFDC; }  /* 0C070088 bt */
L_0C07008A: BLKS(0x0C07008Au);
	r4 = 0xB4u; UPD(0x0C07008Cu, 1);  /* 0C07008A mov.w @(disp,pc),Rn */
	IF(0x0C07008Cu); MACL = r12 * r4;  /* 0C07008C mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C070090u, 3);  /* 0C07008E mov.l @(disp,pc),Rn */
	IF(0x0C070090u); r10 = MACL;  /* 0C070090 sts macl,Rn */
	r10 += r0;  /* 0C070092 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C070096u, 3);  /* 0C070094 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C070096 mov Rm,Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C07009Au, 2);  /* 0C070098 mov.l @(disp,pc),Rn */
	IF(0x0C07009Au); r7 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07009Cu, 1);  /* 0C07009A mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C07009Eu, 1);  /* 0C07009C mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C07009E extu.b Rm,Rn */
	IF(0x0C0700A0u); { u32 t_ = r9; PR = 0x0C0700A4u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0700A4u); }  /* 0C0700A0 jsr @Rn */
L_0C0700A4: BLKS(0x0C0700A4u);
	T = (r0 & r0) == 0;  /* 0C0700A4 tst Rm,Rn */
	if (T) { UPD(0x0C06FFDCu, 4); goto L_0C06FFDC; }  /* 0C0700A6 bt */
L_0C0700A8: BLKS(0x0C0700A8u);
	r0 = r10;  /* 0C0700A8 mov Rm,Rn */
	r5 = 0x86u; UPD(0x0C0700ACu, 2);  /* 0C0700AA mov.w @(disp,pc),Rn */
	r13 = 0xC058060u; UPD(0x0C0700AEu, 1);  /* 0C0700AC mov.l @(disp,pc),Rn */
	IF(0x0C0700AEu); r9 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C0700B0u, 1);  /* 0C0700AE mov.w @(r0,Rm),Rn */
	r5 = 0x100000u; UPD(0x0C0700B2u, 1);  /* 0C0700B0 mov.l @(disp,pc),Rn */
	IF(0x0C0700B2u); { u32 t_ = r13; PR = 0x0C0700B6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0700B6u); }  /* 0C0700B2 jsr @Rn */
L_0C0700B6: BLKS(0x0C0700B6u);
	r8 = R32(r10 + 0x24u); UPD(0x0C0700B8u, 1);  /* 0C0700B6 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0700B8 mov Rm,Rn */
	r11 = 0xC058030u; UPD(0x0C0700BCu, 2);  /* 0C0700BA mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C0700BC add Rm,Rn */
	r2 = 0x10000u; UPD(0x0C0700C0u, 2);  /* 0C0700BE mov.l @(disp,pc),Rn */
	r5 = 0x140000u; UPD(0x0C0700C2u, 1);  /* 0C0700C0 mov.l @(disp,pc),Rn */
	IF(0x0C0700C2u); { u32 t_ = r11; PR = 0x0C0700C6u; r8 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0700C6u); }  /* 0C0700C2 jsr @Rn */
L_0C0700C6: BLKS(0x0C0700C6u);
	r6 = R32(r10 + 0x28u); UPD(0x0C0700C8u, 1);  /* 0C0700C6 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0700C8 add #imm,Rn */
	r3 = 0x30000u; UPD(0x0C0700CCu, 2);  /* 0C0700CA mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0700CC add Rm,Rn */
	W32(r15, r3); UPD(0x0C0700D0u, 2);  /* 0C0700CE mov.l Rm,@Rn */
	{ r4 = 0x2u; /* slot mov #imm,Rn */ UPD(0x0C070046u, 3); goto L_0C070046; }  /* 0C0700D0 bra */
L_0C0700E0: BLKS(0x0C0700E0u);
	r10 = 0xC0A0670u; UPD(0x0C0700E2u, 1);  /* 0C0700E0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0700E2 mov Rm,Rn */
	IF(0x0C0700E4u); { u32 t_ = r10; PR = 0x0C0700E8u; r5 = r3; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C0700E8u); }  /* 0C0700E4 jsr @Rn */
L_0C0700E8: BLKS(0x0C0700E8u);
	T = (r0 & r0) == 0;  /* 0C0700E8 tst Rm,Rn */
	if (T) { UPD(0x0C0701BAu, 4); goto L_0C0701BA; }  /* 0C0700EA bt */
L_0C0700EC: BLKS(0x0C0700ECu);
	r4 = r12;  /* 0C0700EC mov Rm,Rn */
	r8 = 0xC0A9E40u; UPD(0x0C0700F0u, 2);  /* 0C0700EE mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C0700F0 mov #imm,Rn */
	IF(0x0C0700F2u); { u32 t_ = r8; PR = 0x0C0700F6u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0700F6u); }  /* 0C0700F2 jsr @Rn */
L_0C0700F6: BLKS(0x0C0700F6u);
	T = (r0 & r0) == 0;  /* 0C0700F6 tst Rm,Rn */
	if (T) { UPD(0x0C0701BAu, 4); goto L_0C0701BA; }  /* 0C0700F8 bt */
L_0C0700FA: BLKS(0x0C0700FAu);
	r4 = 0xB4u; UPD(0x0C0700FCu, 1);  /* 0C0700FA mov.w @(disp,pc),Rn */
	IF(0x0C0700FCu); MACL = r12 * r4;  /* 0C0700FC mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C070100u, 3);  /* 0C0700FE mov.l @(disp,pc),Rn */
	IF(0x0C070100u); r11 = MACL;  /* 0C070100 sts macl,Rn */
	r11 += r0;  /* 0C070102 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C070106u, 3);  /* 0C070104 mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C070106 mov Rm,Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C07010Au, 2);  /* 0C070108 mov.l @(disp,pc),Rn */
	IF(0x0C07010Au); r7 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07010Cu, 1);  /* 0C07010A mov.b @(r0,Rm),Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C07010Eu, 1);  /* 0C07010C mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C07010E extu.b Rm,Rn */
	IF(0x0C070110u); { u32 t_ = r9; PR = 0x0C070114u; r5 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C070114u); }  /* 0C070110 jsr @Rn */
L_0C070114: BLKS(0x0C070114u);
	T = (r0 & r0) == 0;  /* 0C070114 tst Rm,Rn */
	if (T) { UPD(0x0C0701BAu, 4); goto L_0C0701BA; }  /* 0C070116 bt */
L_0C070118: BLKS(0x0C070118u);
	r0 = r11;  /* 0C070118 mov Rm,Rn */
	r3 = 0x86u; UPD(0x0C07011Cu, 2);  /* 0C07011A mov.w @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C07011Eu, 1);  /* 0C07011C mov.l @(disp,pc),Rn */
	IF(0x0C07011Eu); r9 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C070120u, 1);  /* 0C07011E mov.w @(r0,Rm),Rn */
	r5 = 0xC0000u; UPD(0x0C070122u, 1);  /* 0C070120 mov.l @(disp,pc),Rn */
	r10 = 0xC058030u; UPD(0x0C070124u, 1);  /* 0C070122 mov.l @(disp,pc),Rn */
	IF(0x0C070124u); { u32 t_ = r8; PR = 0x0C070128u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C070128u); }  /* 0C070124 jsr @Rn */
L_0C070128: BLKS(0x0C070128u);
	r8 = R32(r11 + 0x24u); UPD(0x0C07012Au, 1);  /* 0C070128 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C07012A mov Rm,Rn */
	r5 = 0x100000u; UPD(0x0C07012Eu, 2);  /* 0C07012C mov.l @(disp,pc),Rn */
	IF(0x0C07012Eu); { u32 t_ = r10; PR = 0x0C070132u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C070132u); }  /* 0C07012E jsr @Rn */
L_0C070132: BLKS(0x0C070132u);
	r13 = 0x20000u; UPD(0x0C070134u, 1);  /* 0C070132 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C070134 add #imm,Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C070138u, 2);  /* 0C070136 mov.l @(disp,Rm),Rn */
	r8 += r13;  /* 0C070138 add Rm,Rn */
	W32(r15, r13); UPD(0x0C07013Cu, 2);  /* 0C07013A mov.l Rm,@Rn */
	r6 += r0;  /* 0C07013C add Rm,Rn */
	{ r4 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C070046u, 4); goto L_0C070046; }  /* 0C07013E bra */
L_0C070150: BLKS(0x0C070150u);
	r1 = 0xC06FA70u; UPD(0x0C070152u, 1);  /* 0C070150 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C070152 mov Rm,Rn */
	{ r5 = r3; /* slot mov Rm,Rn */ UPD(0x0C06FFB6u, 4); goto L_0C06FFB6; }  /* 0C070154 bra */
L_0C0701A0: BLKS(0x0C0701A0u);
	r11 = 0xC0A0670u; UPD(0x0C0701A2u, 1);  /* 0C0701A0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0701A2 mov Rm,Rn */
	IF(0x0C0701A4u); { u32 t_ = r11; PR = 0x0C0701A8u; r5 = r3; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C0701A8u); }  /* 0C0701A4 jsr @Rn */
L_0C0701A8: BLKS(0x0C0701A8u);
	T = (r0 & r0) == 0;  /* 0C0701A8 tst Rm,Rn */
	if (T) { UPD(0x0C0701BAu, 4); goto L_0C0701BA; }  /* 0C0701AA bt */
L_0C0701AC: BLKS(0x0C0701ACu);
	r4 = r12;  /* 0C0701AC mov Rm,Rn */
	r9 = 0xC0A9E40u; UPD(0x0C0701B0u, 2);  /* 0C0701AE mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C0701B0 mov #imm,Rn */
	IF(0x0C0701B2u); { u32 t_ = r9; PR = 0x0C0701B6u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0701B6u); }  /* 0C0701B2 jsr @Rn */
L_0C0701B6: BLKS(0x0C0701B6u);
	T = (r0 & r0) == 0;  /* 0C0701B6 tst Rm,Rn */
	if (!T) { UPD(0x0C0701BEu, 4); goto L_0C0701BE; }  /* 0C0701B8 bf */
L_0C0701BA: BLKS(0x0C0701BAu);
	{ IF(0x0C0701BCu); ; /* slot nop */ UPD(0x0C06FFDCu, 3); goto L_0C06FFDC; }  /* 0C0701BA bra */
L_0C0701BE: BLKS(0x0C0701BEu);
	r6 = 0xB4u; UPD(0x0C0701C0u, 1);  /* 0C0701BE mov.w @(disp,pc),Rn */
	IF(0x0C0701C0u); MACL = r12 * r6;  /* 0C0701C0 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0701C4u, 3);  /* 0C0701C2 mov.l @(disp,pc),Rn */
	IF(0x0C0701C4u); r10 = MACL;  /* 0C0701C4 sts macl,Rn */
	r10 += r7;  /* 0C0701C6 add Rm,Rn */
	r5 = 0xA9u; UPD(0x0C0701CAu, 3);  /* 0C0701C8 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C0701CA mov Rm,Rn */
	r13 = 0xC0A9BB0u; UPD(0x0C0701CEu, 2);  /* 0C0701CC mov.l @(disp,pc),Rn */
	IF(0x0C0701CEu); r2 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0701D0u, 1);  /* 0C0701CE mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C0701D2u, 1);  /* 0C0701D0 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C0701D2 extu.b Rm,Rn */
	IF(0x0C0701D4u); { u32 t_ = r13; PR = 0x0C0701D8u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0701D8u); }  /* 0C0701D4 jsr @Rn */
L_0C0701D8: BLKS(0x0C0701D8u);
	T = (r0 & r0) == 0;  /* 0C0701D8 tst Rm,Rn */
	if (T) { UPD(0x0C07029Eu, 4); goto L_0C07029E; }  /* 0C0701DA bt */
L_0C0701DC: BLKS(0x0C0701DCu);
	r0 = r10;  /* 0C0701DC mov Rm,Rn */
	r3 = 0x86u; UPD(0x0C0701E0u, 2);  /* 0C0701DE mov.w @(disp,pc),Rn */
	r13 = 0xC058060u; UPD(0x0C0701E2u, 1);  /* 0C0701E0 mov.l @(disp,pc),Rn */
	IF(0x0C0701E2u); r11 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0701E4u, 1);  /* 0C0701E2 mov.w @(r0,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C0701E6u, 1);  /* 0C0701E4 mov.l @(disp,pc),Rn */
	IF(0x0C0701E6u); { u32 t_ = r13; PR = 0x0C0701EAu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0701EAu); }  /* 0C0701E6 jsr @Rn */
L_0C0701EA: BLKS(0x0C0701EAu);
	r9 = R32(r10 + 0x24u); UPD(0x0C0701ECu, 1);  /* 0C0701EA mov.l @(disp,Rm),Rn */
	r4 = 0x10000u; UPD(0x0C0701EEu, 1);  /* 0C0701EC mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C0701EE add Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C0701F2u, 2);  /* 0C0701F0 mov.l @(disp,pc),Rn */
	r9 += r4;  /* 0C0701F2 add Rm,Rn */
	r5 = 0xA0000u; UPD(0x0C0701F6u, 2);  /* 0C0701F4 mov.l @(disp,pc),Rn */
	IF(0x0C0701F6u); { u32 t_ = r8; PR = 0x0C0701FAu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0701FAu); }  /* 0C0701F6 jsr @Rn */
L_0C0701FA: BLKS(0x0C0701FAu);
	r6 = R32(r10 + 0x28u); UPD(0x0C0701FCu, 1);  /* 0C0701FA mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0701FC add #imm,Rn */
	r6 += r0;  /* 0C0701FE add Rm,Rn */
	r0 = 0x28000u; UPD(0x0C070202u, 3);  /* 0C070200 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C070202 mov #imm,Rn */
	W32(r15, r0); UPD(0x0C070206u, 2);  /* 0C070204 mov.l Rm,@Rn */
	r5 = r9;  /* 0C070206 mov Rm,Rn */
	r0 = 0xC0A81B0u; UPD(0x0C07020Au, 2);  /* 0C070208 mov.l @(disp,pc),Rn */
	{ r7 = r11; /* slot mov Rm,Rn */ UPD(0x0C07004Cu, 3); goto L_0C07004C; }  /* 0C07020A bra */
L_0C070210: BLKS(0x0C070210u);
	r1 = 0xC06F830u; UPD(0x0C070212u, 1);  /* 0C070210 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C070212 mov Rm,Rn */
	{ r5 = r3; /* slot mov Rm,Rn */ UPD(0x0C06FFB6u, 4); goto L_0C06FFB6; }  /* 0C070214 bra */
L_0C070220: BLKS(0x0C070220u);
	r1 = 0xC06FBD0u; UPD(0x0C070222u, 1);  /* 0C070220 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C070222 mov Rm,Rn */
	{ r5 = r3; /* slot mov Rm,Rn */ UPD(0x0C06FFB6u, 4); goto L_0C06FFB6; }  /* 0C070224 bra */
L_0C070230: BLKS(0x0C070230u);
	r10 = 0xC0A0670u; UPD(0x0C070232u, 1);  /* 0C070230 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C070232 mov Rm,Rn */
	IF(0x0C070234u); { u32 t_ = r10; PR = 0x0C070238u; r5 = r3; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C070238u); }  /* 0C070234 jsr @Rn */
L_0C070238: BLKS(0x0C070238u);
	T = (r0 & r0) == 0;  /* 0C070238 tst Rm,Rn */
	if (T) { UPD(0x0C07029Eu, 4); goto L_0C07029E; }  /* 0C07023A bt */
L_0C07023C: BLKS(0x0C07023Cu);
	r4 = r12;  /* 0C07023C mov Rm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C070240u, 2);  /* 0C07023E mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C070240 mov #imm,Rn */
	IF(0x0C070242u); { u32 t_ = r11; PR = 0x0C070246u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C070246u); }  /* 0C070242 jsr @Rn */
L_0C070246: BLKS(0x0C070246u);
	T = (r0 & r0) == 0;  /* 0C070246 tst Rm,Rn */
	if (T) { UPD(0x0C07029Eu, 4); goto L_0C07029E; }  /* 0C070248 bt */
L_0C07024A: BLKS(0x0C07024Au);
	r6 = 0xB4u; UPD(0x0C07024Cu, 1);  /* 0C07024A mov.w @(disp,pc),Rn */
	IF(0x0C07024Cu); MACL = r12 * r6;  /* 0C07024C mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C070250u, 3);  /* 0C07024E mov.l @(disp,pc),Rn */
	IF(0x0C070250u); r10 = MACL;  /* 0C070250 sts macl,Rn */
	r10 += r7;  /* 0C070252 add Rm,Rn */
	r5 = 0xA9u; UPD(0x0C070256u, 3);  /* 0C070254 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C070256 mov Rm,Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C07025Au, 2);  /* 0C070258 mov.l @(disp,pc),Rn */
	IF(0x0C07025Au); r2 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C07025Cu, 1);  /* 0C07025A mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C07025Eu, 1);  /* 0C07025C mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C07025E extu.b Rm,Rn */
	IF(0x0C070260u); { u32 t_ = r9; PR = 0x0C070264u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C070264u); }  /* 0C070260 jsr @Rn */
L_0C070264: BLKS(0x0C070264u);
	T = (r0 & r0) == 0;  /* 0C070264 tst Rm,Rn */
	if (T) { UPD(0x0C07029Eu, 4); goto L_0C07029E; }  /* 0C070266 bt */
L_0C070268: BLKS(0x0C070268u);
	r0 = r10;  /* 0C070268 mov Rm,Rn */
	r4 = 0x86u; UPD(0x0C07026Cu, 2);  /* 0C07026A mov.w @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C07026Eu, 1);  /* 0C07026C mov.l @(disp,pc),Rn */
	IF(0x0C07026Eu); r13 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C070270u, 1);  /* 0C07026E mov.w @(r0,Rm),Rn */
	r5 = 0xF0000u; UPD(0x0C070272u, 1);  /* 0C070270 mov.l @(disp,pc),Rn */
	r9 = 0xC058030u; UPD(0x0C070274u, 1);  /* 0C070272 mov.l @(disp,pc),Rn */
	IF(0x0C070274u); { u32 t_ = r8; PR = 0x0C070278u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C070278u); }  /* 0C070274 jsr @Rn */
L_0C070278: BLKS(0x0C070278u);
	r11 = R32(r10 + 0x24u); UPD(0x0C07027Au, 1);  /* 0C070278 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C07027A mov Rm,Rn */
	r5 = 0x140000u; UPD(0x0C07027Eu, 2);  /* 0C07027C mov.l @(disp,pc),Rn */
	IF(0x0C07027Eu); { u32 t_ = r9; PR = 0x0C070282u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C070282u); }  /* 0C07027E jsr @Rn */
L_0C070282: BLKS(0x0C070282u);
	r6 = R32(r10 + 0x28u); UPD(0x0C070284u, 1);  /* 0C070282 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C070284 add #imm,Rn */
	r6 += r0;  /* 0C070286 add Rm,Rn */
	r8 = 0xC0A81B0u; UPD(0x0C07028Au, 3);  /* 0C070288 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C07028A mov #imm,Rn */
	r0 = 0x20000u; UPD(0x0C07028Eu, 2);  /* 0C07028C mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C07028E mov Rm,Rn */
	W32(r15, r0); UPD(0x0C070292u, 2);  /* 0C070290 mov.l Rm,@Rn */
	IF(0x0C070292u); { u32 t_ = r8; PR = 0x0C070296u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C070296u); }  /* 0C070292 jsr @Rn */
L_0C070296: BLKS(0x0C070296u);
	r4 = r12;  /* 0C070296 mov Rm,Rn */
	r12 = 0xC0580D0u; UPD(0x0C07029Au, 2);  /* 0C070298 mov.l @(disp,pc),Rn */
	IF(0x0C07029Au); { u32 t_ = r12; PR = 0x0C07029Eu; r15 += 0x4u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C07029Eu); }  /* 0C07029A jsr @Rn */
L_0C07029E: BLKS(0x0C07029Eu);
	{ IF(0x0C0702A0u); ; /* slot nop */ UPD(0x0C06FFDCu, 3); goto L_0C06FFDC; }  /* 0C07029E bra */
L_0C0702B0: BLKS(0x0C0702B0u);
	r6 += 0xFFFFFFE0u;  /* 0C0702B0 add #imm,Rn */
	T = r6 > r9;  /* 0C0702B2 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r4 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0702BCu, 5); goto L_0C0702BC; } goto L_0C0702B8; }  /* 0C0702B4 bf/s */
L_0C0702B8: BLKS(0x0C0702B8u);
	{ IF(0x0C0702BAu); ; /* slot nop */ UPD(0x0C070410u, 4); goto L_0C070410; }  /* 0C0702B8 bra */
L_0C0702BC: BLKS(0x0C0702BCu);
	IF(0x0C0702BCu); { u32 t_ = r13; PR = 0x0C0702C0u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0702C0u); }  /* 0C0702BC jsr @Rn */
L_0C0702C0: BLKS(0x0C0702C0u);
	IF(0x0C0702C0u); T = (s32)r0 >= 0;  /* 0C0702C0 cmp/pz Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0702CAu, 4); goto L_0C0702CA; } goto L_0C0702C6; }  /* 0C0702C2 bt/s */
L_0C0702C6: BLKS(0x0C0702C6u);
	{ r7 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C070400u, 4); goto L_0C070400; }  /* 0C0702C6 bra */
L_0C0702CA: BLKS(0x0C0702CAu);
	r10 = 0xC050D70u; UPD(0x0C0702CCu, 1);  /* 0C0702CA mov.l @(disp,pc),Rn */
	IF(0x0C0702CCu); { u32 t_ = r10; PR = 0x0C0702D0u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0702D0u); }  /* 0C0702CC jsr @Rn */
L_0C0702D0: BLKS(0x0C0702D0u);
	T = r0 == 0x2u;  /* 0C0702D0 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0702DAu, 4); goto L_0C0702DA; }  /* 0C0702D2 bf */
L_0C0702D4: BLKS(0x0C0702D4u);
	r15 += 0xFFFFFFF8u;  /* 0C0702D4 add #imm,Rn */
	{ IF(0x0C0702D8u); ; /* slot nop */ UPD(0x0C0703E0u, 4); goto L_0C0703E0; }  /* 0C0702D6 bra */
L_0C0702DA: BLKS(0x0C0702DAu);
	r11 = 0x2u;  /* 0C0702DA mov #imm,Rn */
	T = (s32)r0 > (s32)r11;  /* 0C0702DC cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0703B0u, 5); goto L_0C0703B0; } goto L_0C0702E2; }  /* 0C0702DE bt/s */
L_0C0702E2: BLKS(0x0C0702E2u);
	T = r0 == 0x1u;  /* 0C0702E2 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C070330u, 5); goto L_0C070330; }  /* 0C0702E4 bt */
L_0C0702E6: BLKS(0x0C0702E6u);
	r5 = 0xB4u; UPD(0x0C0702E8u, 1);  /* 0C0702E6 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0702E8 add #imm,Rn */
	IF(0x0C0702EAu); MACL = r12 * r5;  /* 0C0702EA mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0702EEu, 4);  /* 0C0702EC mov.l @(disp,pc),Rn */
	IF(0x0C0702EEu); r8 = MACL;  /* 0C0702EE sts macl,Rn */
	r8 += r0;  /* 0C0702F0 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0702F4u, 3);  /* 0C0702F2 mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0702F4 mov #imm,Rn */
	IF(0x0C0702F6u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0702F8u, 2);  /* 0C0702F6 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0702F8 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0702FCu, 2);  /* 0C0702FA mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0702FC add #imm,Rn */
	IF(0x0C0702FEu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C070300u, 2);  /* 0C0702FE mov.b @(r0,Rm),Rn */
	r13 = r3 & 0xFF;  /* 0C070300 extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C070304u, 2);  /* 0C070302 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C070306u, 1);  /* 0C070304 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C070308u, 1);  /* 0C070306 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07030Au, 1);  /* 0C070308 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C07030Cu, 1);  /* 0C07030A mov.l @(disp,Rm),Rn */
L_0C07030C: BLKS(0x0C07030Cu);
	IF(0x0C07030Cu); { u32 t_ = r0; PR = 0x0C070310u; IF(0x0C07030Eu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C070310u); }  /* 0C07030C jsr @Rn */
L_0C070310: BLKS(0x0C070310u);
	r4 = 0xB4u; UPD(0x0C070312u, 1);  /* 0C070310 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C070312 add #imm,Rn */
	IF(0x0C070314u); MACL = r9 * r4;  /* 0C070314 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C070318u, 4);  /* 0C070316 mov.l @(disp,pc),Rn */
	IF(0x0C070318u); r9 = MACL;  /* 0C070318 sts macl,Rn */
	r9 += r8;  /* 0C07031A add Rm,Rn */
	r3 = R32(r9); UPD(0x0C07031Eu, 3);  /* 0C07031C mov.l @Rm,Rn */
	IF(0x0C07031Eu); MACL = r12 * r4;  /* 0C07031E mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C070322u, 3);  /* 0C070320 mov.l @(disp,pc),Rn */
	r3 |= r1;  /* 0C070322 or Rm,Rn */
	W32(r9, r3); UPD(0x0C070326u, 2);  /* 0C070324 mov.l Rm,@Rn */
	IF(0x0C070326u); r0 = MACL;  /* 0C070326 sts macl,Rn */
	r12 = 0x0u;  /* 0C070328 mov #imm,Rn */
	{ IF(0x0C07032Cu); W32(r0 + r8, r12); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C06FFDCu, 5); goto L_0C06FFDC; }  /* 0C07032A bra */
L_0C070330: BLKS(0x0C070330u);
	r0 = 0xB0u; UPD(0x0C070332u, 1);  /* 0C070330 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C070332 add #imm,Rn */
	IF(0x0C070334u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C070336u, 2);  /* 0C070334 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C070336 mov #imm,Rn */
	r11 = r13 & 0xFF;  /* 0C070338 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C07033Cu, 3);  /* 0C07033A mov.l Rm,@Rn */
	r0 = r8;  /* 0C07033C mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C070340u, 2);  /* 0C07033E mov.w @(disp,pc),Rn */
	IF(0x0C070340u); r7 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C070342u, 1);  /* 0C070340 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C070342 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C070346u, 2);  /* 0C070344 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C070348u, 1);  /* 0C070346 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C07034Au, 1);  /* 0C070348 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07034Cu, 1);  /* 0C07034A mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C07030Cu, 3); goto L_0C07030C; }  /* 0C07034C bra */
L_0C0703B0: BLKS(0x0C0703B0u);
	if (!T) { UPD(0x0C0702E6u, 3); goto L_0C0702E6; }  /* 0C0703B0 bf */
L_0C0703B2: BLKS(0x0C0703B2u);
	r15 += 0xFFFFFFF8u;  /* 0C0703B2 add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0703B6u, 2);  /* 0C0703B4 mov.w @(disp,pc),Rn */
	IF(0x0C0703B6u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0703B8u, 1);  /* 0C0703B6 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0703B8 mov #imm,Rn */
	r11 = r13 & 0xFF;  /* 0C0703BA extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C0703BEu, 3);  /* 0C0703BC mov.l Rm,@Rn */
	r0 = r8;  /* 0C0703BE mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C0703C2u, 2);  /* 0C0703C0 mov.w @(disp,pc),Rn */
	IF(0x0C0703C2u); r7 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0703C4u, 1);  /* 0C0703C2 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0703C4 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0703C8u, 2);  /* 0C0703C6 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0703CAu, 1);  /* 0C0703C8 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0703CCu, 1);  /* 0C0703CA mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0703CEu, 1);  /* 0C0703CC mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C07030Cu, 3); goto L_0C07030C; }  /* 0C0703CE bra */
L_0C0703E0: BLKS(0x0C0703E0u);
	r0 = 0xB0u; UPD(0x0C0703E2u, 1);  /* 0C0703E0 mov.w @(disp,pc),Rn */
	IF(0x0C0703E2u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0703E4u, 1);  /* 0C0703E2 mov.b @(r0,Rm),Rn */
	r0 = r5 & 0xFF;  /* 0C0703E4 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0703E8u, 2);  /* 0C0703E6 mov.l Rm,@Rn */
	r5 = 0x2u;  /* 0C0703E8 mov #imm,Rn */
	r4 = 0xA9u; UPD(0x0C0703ECu, 2);  /* 0C0703EA mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0703EC mov Rm,Rn */
	IF(0x0C0703EEu); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0703F0u, 2);  /* 0C0703EE mov.b @(r0,Rm),Rn */
	r3 = r2 & 0xFF;  /* 0C0703F0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0703F4u, 2);  /* 0C0703F2 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C0703F6u, 1);  /* 0C0703F4 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0703F8u, 1);  /* 0C0703F6 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0703FAu, 1);  /* 0C0703F8 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C07030Cu, 3); goto L_0C07030C; }  /* 0C0703FA bra */
L_0C070400: BLKS(0x0C070400u);
	{ W32(r8, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C06FFDCu, 3); goto L_0C06FFDC; }  /* 0C070400 bra */
L_0C070410: BLKS(0x0C070410u);
	r1 = 0xC0A0940u; UPD(0x0C070412u, 1);  /* 0C070410 mov.l @(disp,pc),Rn */
	{ IF(0x0C070414u); ; /* slot nop */ UPD(0x0C070058u, 3); goto L_0C070058; }  /* 0C070412 bra */
L_0C070420: BLKS(0x0C070420u);
	r9 = 0xC0A1700u; UPD(0x0C070422u, 1);  /* 0C070420 mov.l @(disp,pc),Rn */
	IF(0x0C070422u); { u32 t_ = r9; PR = 0x0C070426u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C070426u); }  /* 0C070422 jsr @Rn */
L_0C070426: BLKS(0x0C070426u);
	r5 = 0xC0A1590u; UPD(0x0C070428u, 1);  /* 0C070426 mov.l @(disp,pc),Rn */
	IF(0x0C070428u); { u32 t_ = r5; PR = 0x0C07042Cu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1590, 0x0C0A1590u, 0x0C07042Cu); }  /* 0C070428 jsr @Rn */
L_0C07042C: BLKS(0x0C07042Cu);
	r4 = 0x86u; UPD(0x0C07042Eu, 1);  /* 0C07042C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07042E mov Rm,Rn */
	IF(0x0C070430u); r3 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C070432u, 2);  /* 0C070430 mov.w @(r0,Rm),Rn */
	r2 = 0x200u; UPD(0x0C070434u, 1);  /* 0C070432 mov.w @(disp,pc),Rn */
	r0 = 0x1Fu;  /* 0C070434 mov #imm,Rn */
	r3 += r2;  /* 0C070436 add Rm,Rn */
	IF(0x0C070438u); r3 >>= 8;  /* 0C070438 shlr8 Rn */
	IF(0x0C07043Au); r3 >>= 2;  /* 0C07043A shlr2 Rn */
	r3 &= r0;  /* 0C07043C and Rm,Rn */
	W32(r8 + 0x8u, r3); UPD(0x0C070440u, 6);  /* 0C07043E mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C070440 mov Rm,Rn */
	r8 += 0x50u;  /* 0C070442 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C070446u, 3);  /* 0C070444 mov.w @Rm,Rn */
	r8 += 0xFFFFFFB0u;  /* 0C070446 add #imm,Rn */
	r0 &= 0x3u;  /* 0C070448 and #imm,r0 */
	r1 = 0xC0A03B0u; UPD(0x0C07044Cu, 3);  /* 0C07044A mov.l @(disp,pc),Rn */
	{ W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C070058u, 3); goto L_0C070058; }  /* 0C07044C bra */
}

/* FUN_0c070470 */
void f_0C070470(sh3_t *c)
{
	LOCALS;
L_0C070470: BLKS(0x0C070470u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C070472u, 1);  /* 0C070470 mov.l Rm,@-Rn */
	r4 = 0x2u;  /* 0C070472 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C070476u, 2);  /* 0C070474 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C070478u, 1);  /* 0C070476 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07047Au, 1);  /* 0C070478 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07047Cu, 1);  /* 0C07047A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07047Eu, 1);  /* 0C07047C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C070480u, 1);  /* 0C07047E mov.l Rm,@-Rn */
	r2 = 0xC286509u; UPD(0x0C070482u, 1);  /* 0C070480 mov.l @(disp,pc),Rn */
	IF(0x0C070482u); r15 -= 4; W32(r15, PR); UPD(0x0C070484u, 1);  /* 0C070482 sts.l pr,@-Rn */
	r8 = 0xC0606C0u; UPD(0x0C070486u, 1);  /* 0C070484 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C070486 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C07048Au, 2);  /* 0C070488 mov.b @Rm,Rn */
	r14 = r15;  /* 0C07048A mov Rm,Rn */
	IF(0x0C07048Cu); { u32 t_ = r8; PR = 0x0C070490u; W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C070490u); }  /* 0C07048C jsr @Rn */
L_0C070490: BLKS(0x0C070490u);
	T = (r0 & r0) == 0;  /* 0C070490 tst Rm,Rn */
	if (!T) { UPD(0x0C0704B0u, 4); goto L_0C0704B0; }  /* 0C070492 bf */
L_0C070494: BLKS(0x0C070494u);
	r0 = 0x1u;  /* 0C070494 mov #imm,Rn */
	r14 += 0xCu;  /* 0C070496 add #imm,Rn */
	r15 = r14;  /* 0C070498 mov Rm,Rn */
	IF(0x0C07049Au); PR = R32(r15); r15 += 4; UPD(0x0C07049Cu, 4);  /* 0C07049A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07049Eu, 1);  /* 0C07049C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0704A0u, 1);  /* 0C07049E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0704A2u, 1);  /* 0C0704A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0704A4u, 1);  /* 0C0704A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0704A6u, 1);  /* 0C0704A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0704A8u, 1);  /* 0C0704A6 mov.l @Rm+,Rn */
	IF(0x0C0704A8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0704A8 rts */
L_0C0704B0: BLKS(0x0C0704B0u);
	r10 = 0xC2755BCu; UPD(0x0C0704B2u, 1);  /* 0C0704B0 mov.l @(disp,pc),Rn */
	r13 = 0xB4u; UPD(0x0C0704B4u, 1);  /* 0C0704B2 mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r9 = v_; } UPD(0x0C0704B6u, 1);  /* 0C0704B4 mov.w @Rm+,Rn */
	r8 = 0xC22C874u; UPD(0x0C0704B8u, 1);  /* 0C0704B6 mov.l @(disp,pc),Rn */
	IF(0x0C0704B8u); MACL = r9 * r13;  /* 0C0704B8 mul.l Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C0704BCu, 3);  /* 0C0704BA mov.w @Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0704BEu, 1);  /* 0C0704BC mov.l @(disp,pc),Rn */
	IF(0x0C0704BEu); r13 = MACL;  /* 0C0704BE sts macl,Rn */
	r13 += r5;  /* 0C0704C0 add Rm,Rn */
	r1 = 0xC28629Eu; UPD(0x0C0704C4u, 3);  /* 0C0704C2 mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFFFF;  /* 0C0704C4 extu.w Rm,Rn */
	W32(r13 + 0x4u, r0); UPD(0x0C0704C8u, 2);  /* 0C0704C6 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0704C8 mov Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r1); UPD(0x0C0704CCu, 2);  /* 0C0704CA mov.w @Rm,Rn */
	r0 = r13;  /* 0C0704CC mov Rm,Rn */
	r3 = 0x8Au; UPD(0x0C0704D0u, 2);  /* 0C0704CE mov.w @(disp,pc),Rn */
	r8 = 0x4Cu;  /* 0C0704D0 mov #imm,Rn */
	IF(0x0C0704D2u); W16(r0 + r3, r12); UPD(0x0C0704D4u, 2);  /* 0C0704D2 mov.w Rm,@(r0,Rn) */
	r7 = 0x84u; UPD(0x0C0704D6u, 1);  /* 0C0704D4 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C0704D6 mov Rm,Rn */
	r7 += r13;  /* 0C0704D8 add Rm,Rn */
	r7 += 0x2u;  /* 0C0704DA add #imm,Rn */
	r0 += 0x8u;  /* 0C0704DC add #imm,Rn */
	W16(r7, r12); UPD(0x0C0704E0u, 5);  /* 0C0704DE mov.w Rm,@Rn */
	IF(0x0C0704E0u); r0 >>= 2;  /* 0C0704E0 shlr2 Rn */
	r6 = 0xC0A02D0u; UPD(0x0C0704E4u, 2);  /* 0C0704E2 mov.l @(disp,pc),Rn */
	IF(0x0C0704E4u); r0 >>= 2;  /* 0C0704E4 shlr2 Rn */
	r2 = 0xC0000014u; UPD(0x0C0704E8u, 2);  /* 0C0704E6 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0704E8 mov #imm,Rn */
	r0 &= 0x1Fu;  /* 0C0704EA and #imm,r0 */
	W32(r13, r2); UPD(0x0C0704EEu, 3);  /* 0C0704EC mov.l Rm,@Rn */
	W32(r13 + 0x8u, r0); UPD(0x0C0704F0u, 1);  /* 0C0704EE mov.l Rm,@(disp,Rn) */
	IF(0x0C0704F0u); { u32 t_ = r6; PR = 0x0C0704F4u; W32(r13 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0704F4u); }  /* 0C0704F0 jsr @Rn */
L_0C0704F4: BLKS(0x0C0704F4u);
	r5 = R32(r14); UPD(0x0C0704F6u, 1);  /* 0C0704F4 mov.l @Rm,Rn */
	IF(0x0C0704F6u); MACL = r5 * r8;  /* 0C0704F6 mul.l Rm,Rn */
	r11 = 0xC21F5E2u; UPD(0x0C0704FAu, 3);  /* 0C0704F8 mov.l @(disp,pc),Rn */
	r4 = 0xC26CAE0u; UPD(0x0C0704FCu, 1);  /* 0C0704FA mov.l @(disp,pc),Rn */
	IF(0x0C0704FCu); r8 = MACL;  /* 0C0704FC sts macl,Rn */
	r3 = 0xC392D5Eu; UPD(0x0C070500u, 2);  /* 0C0704FE mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C070500 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r11); UPD(0x0C070504u, 2);  /* 0C070502 mov.w @Rm,Rn */
	r4 = r9;  /* 0C070504 mov Rm,Rn */
	r2 = R32(r8 + 0x8u); UPD(0x0C070508u, 2);  /* 0C070506 mov.l @(disp,Rm),Rn */
	IF(0x0C070508u); r0 <<= 16;  /* 0C070508 shll16 Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C07050Cu, 2);  /* 0C07050A mov.w @Rm,Rn */
	r0 -= r2;  /* 0C07050C sub Rm,Rn */
	r6 = 0xC0A1530u; UPD(0x0C070510u, 2);  /* 0C07050E mov.l @(disp,pc),Rn */
	IF(0x0C070510u); r7 <<= 16;  /* 0C070510 shll16 Rn */
	W32(r13 + 0x24u, r0); UPD(0x0C070514u, 2);  /* 0C070512 mov.l Rm,@(disp,Rn) */
	r8 += 0x42u;  /* 0C070514 add #imm,Rn */
	r11 = 0xB0u; UPD(0x0C070518u, 2);  /* 0C070516 mov.w @(disp,pc),Rn */
	IF(0x0C070518u); { u32 t_ = r6; PR = 0x0C07051Cu; W32(r13 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C07051Cu); }  /* 0C070518 jsr @Rn */
L_0C07051C: BLKS(0x0C07051Cu);
	r11 += r13;  /* 0C07051C add Rm,Rn */
	r0 = 0x3u;  /* 0C07051E mov #imm,Rn */
	W32(r14 + 0x4u, r11); UPD(0x0C070522u, 3);  /* 0C070520 mov.l Rm,@(disp,Rn) */
	IF(0x0C070522u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C070524u, 1);  /* 0C070522 mov.b @(r0,Rm),Rn */
	r5 = 0xACu; UPD(0x0C070526u, 1);  /* 0C070524 mov.w @(disp,pc),Rn */
	W8(r11, r1); UPD(0x0C070528u, 1);  /* 0C070526 mov.b Rm,@Rn */
	r5 += r13;  /* 0C070528 add Rm,Rn */
	r5 += 0x1u;  /* 0C07052A add #imm,Rn */
	W32(r14 + 0x8u, r5); UPD(0x0C07052Eu, 3);  /* 0C07052C mov.l Rm,@(disp,Rn) */
	r11 = 0xA8u; UPD(0x0C070530u, 1);  /* 0C07052E mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C070532u, 1);  /* 0C070530 mov.b @Rm,Rn */
	r11 += r13;  /* 0C070532 add Rm,Rn */
	r0 = 0xC0A1780u; UPD(0x0C070536u, 2);  /* 0C070534 mov.l @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C070536 add #imm,Rn */
	W8(r5, r4); UPD(0x0C07053Au, 2);  /* 0C070538 mov.b Rm,@Rn */
	W8(r11, r4); UPD(0x0C07053Cu, 1);  /* 0C07053A mov.b Rm,@Rn */
	r2 = 0xC27DC20u; UPD(0x0C07053Eu, 1);  /* 0C07053C mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C07053E mov Rm,Rn */
	IF(0x0C070540u); { u32 t_ = r0; PR = 0x0C070544u; r5 = R32(r2); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C070544u); }  /* 0C070540 jsr @Rn */
L_0C070544: BLKS(0x0C070544u);
	r0 = 0x90u; UPD(0x0C070546u, 1);  /* 0C070544 mov.w @(disp,pc),Rn */
	IF(0x0C070546u); W32(r0 + r13, r12); UPD(0x0C070548u, 1);  /* 0C070546 mov.l Rm,@(r0,Rn) */
	r10 = (u32)(s32)(s16)R16(r10); UPD(0x0C07054Au, 1);  /* 0C070548 mov.w @Rm,Rn */
	r0 += 0x24u;  /* 0C07054A add #imm,Rn */
	r8 = 0x8Cu; UPD(0x0C07054Eu, 2);  /* 0C07054C mov.w @(disp,pc),Rn */
	IF(0x0C07054Eu); MACL = r10 * r0;  /* 0C07054E mul.l Rm,Rn */
	r8 += r13;  /* 0C070550 add Rm,Rn */
	W32(r8, r12); UPD(0x0C070554u, 4);  /* 0C070552 mov.l Rm,@Rn */
	r7 = 0xC26CD40u; UPD(0x0C070556u, 1);  /* 0C070554 mov.l @(disp,pc),Rn */
	IF(0x0C070556u); r8 = MACL;  /* 0C070556 sts macl,Rn */
	r8 += r7;  /* 0C070558 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C07055A add #imm,Rn */
	W16(r8, r9); UPD(0x0C07055Eu, 4);  /* 0C07055C mov.w Rm,@Rn */
	r3 = 0x94u; UPD(0x0C070560u, 1);  /* 0C07055E mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C070560 add #imm,Rn */
	r1 = 0xC22C874u; UPD(0x0C070564u, 2);  /* 0C070562 mov.l @(disp,pc),Rn */
	r3 += r13;  /* 0C070564 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r1); UPD(0x0C070568u, 2);  /* 0C070566 mov.w @Rm,Rn */
	r9 = 0xC286274u; UPD(0x0C07056Au, 1);  /* 0C070568 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFFFF;  /* 0C07056A extu.w Rm,Rn */
	W32(r3, r12); UPD(0x0C07056Eu, 2);  /* 0C07056C mov.l Rm,@Rn */
	r6 = 0xC3000010u; UPD(0x0C070570u, 1);  /* 0C07056E mov.l @(disp,pc),Rn */
	r3 = 0x6u;  /* 0C070570 mov #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C070574u, 2);  /* 0C070572 mov.w @Rm,Rn */
	W32(r8, r6); UPD(0x0C070576u, 1);  /* 0C070574 mov.l Rm,@Rn */
	T = r0 > r3;  /* 0C070576 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x4u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0705F0u, 4); goto L_0C0705F0; } UPD(0x0C07057Cu, 1); goto L_0C07057C; }  /* 0C070578 bt/s */
L_0C07057C: BLKS(0x0C07057Cu);
	r1 = 0xC28629Eu; UPD(0x0C07057Eu, 1);  /* 0C07057C mov.l @(disp,pc),Rn */
	r3 = r0 & 0xFFFF;  /* 0C07057E extu.w Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r1); UPD(0x0C070582u, 2);  /* 0C070580 mov.w @Rm,Rn */
	r3 += 0x20u;  /* 0C070582 add #imm,Rn */
	r4 = 0x84u; UPD(0x0C070586u, 2);  /* 0C070584 mov.w @(disp,pc),Rn */
	IF(0x0C070586u); r2 >>= 2;  /* 0C070586 shlr2 Rn */
	r4 += r8;  /* 0C070588 add Rm,Rn */
	IF(0x0C07058Au); r2 >>= 2;  /* 0C07058A shlr2 Rn */
	IF(0x0C07058Cu); r2 >>= 2;  /* 0C07058C shlr2 Rn */
	r7 = 0xC0A02D0u; UPD(0x0C070590u, 5);  /* 0C07058E mov.l @(disp,pc),Rn */
	r4 += 0x2u;  /* 0C070590 add #imm,Rn */
	W16(r4, r2); UPD(0x0C070594u, 2);  /* 0C070592 mov.w Rm,@Rn */
	W32(r8 + 0x8u, r3); UPD(0x0C070596u, 1);  /* 0C070594 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C070596 mov Rm,Rn */
	IF(0x0C070598u); { u32 t_ = r7; PR = 0x0C07059Cu; W32(r8 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07059Cu); }  /* 0C070598 jsr @Rn */
L_0C07059C: BLKS(0x0C07059Cu);
	r6 = 0xC0A1530u; UPD(0x0C07059Eu, 1);  /* 0C07059C mov.l @(disp,pc),Rn */
	IF(0x0C07059Eu); { u32 t_ = r6; PR = 0x0C0705A2u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0705A2u); }  /* 0C07059E jsr @Rn */
L_0C0705A2: BLKS(0x0C0705A2u);
	r10 = R32(r13 + 0x24u); UPD(0x0C0705A4u, 1);  /* 0C0705A2 mov.l @(disp,Rm),Rn */
	r0 = R32(r13 + 0x28u); UPD(0x0C0705A6u, 1);  /* 0C0705A4 mov.l @(disp,Rm),Rn */
	r13 = (u32)(s32)(s16)R16(r9); UPD(0x0C0705A8u, 1);  /* 0C0705A6 mov.w @Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C0705AAu, 1);  /* 0C0705A8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x24u, r10); UPD(0x0C0705ACu, 1);  /* 0C0705AA mov.l Rm,@(disp,Rn) */
	r0 = r13 & 0xFFFF;  /* 0C0705AC extu.w Rm,Rn */
	r5 = 0xC181CA4u; UPD(0x0C0705B0u, 2);  /* 0C0705AE mov.l @(disp,pc),Rn */
	IF(0x0C0705B0u); r0 <<= 2;  /* 0C0705B0 shll2 Rn */
	IF(0x0C0705B2u); r2 = R32(r0 + r5); UPD(0x0C0705B4u, 2);  /* 0C0705B2 mov.l @(r0,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0705B6u, 1);  /* 0C0705B4 mov.l @(disp,Rm),Rn */
	r7 = 0xA8u; UPD(0x0C0705B8u, 1);  /* 0C0705B6 mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C0705BAu, 1);  /* 0C0705B8 mov.b @Rm,Rn */
	r7 += r8;  /* 0C0705BA add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C0705BEu, 2);  /* 0C0705BC mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C0705BE add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0705C2u, 2);  /* 0C0705C0 mov.w @(disp,pc),Rn */
	W8(r7, r3); UPD(0x0C0705C4u, 1);  /* 0C0705C2 mov.b Rm,@Rn */
	IF(0x0C0705C4u); W8(r0 + r8, r4); UPD(0x0C0705C6u, 1);  /* 0C0705C4 mov.b Rm,@(r0,Rn) */
	r9 = 0x9Cu; UPD(0x0C0705C8u, 1);  /* 0C0705C6 mov.w @(disp,pc),Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C0705CAu, 1);  /* 0C0705C8 mov.l @(disp,Rm),Rn */
	r9 += r8;  /* 0C0705CA add Rm,Rn */
	r10 = 0xACu; UPD(0x0C0705CEu, 2);  /* 0C0705CC mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C0705CE add #imm,Rn */
	r10 += r8;  /* 0C0705D0 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r6); UPD(0x0C0705D4u, 3);  /* 0C0705D2 mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C0705D4 add #imm,Rn */
	W8(r9, r12); UPD(0x0C0705D8u, 2);  /* 0C0705D6 mov.b Rm,@Rn */
	W32(r8 + 0x2Cu, r2); UPD(0x0C0705DAu, 1);  /* 0C0705D8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r12); UPD(0x0C0705DCu, 1);  /* 0C0705DA mov.l Rm,@(disp,Rn) */
	W8(r10, r11); UPD(0x0C0705DEu, 1);  /* 0C0705DC mov.b Rm,@Rn */
	{ { u32 v_ = r12; r9 -= 1; W8(r9, v_); } /* slot mov.b Rm,@-Rn */ UPD(0x0C070494u, 3); goto L_0C070494; }  /* 0C0705DE bra */
L_0C0705F0: BLKS(0x0C0705F0u);
	r0 = 0xC050D70u; UPD(0x0C0705F2u, 1);  /* 0C0705F0 mov.l @(disp,pc),Rn */
	IF(0x0C0705F2u); { u32 t_ = r0; PR = 0x0C0705F6u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0705F6u); }  /* 0C0705F2 jsr @Rn */
L_0C0705F6: BLKS(0x0C0705F6u);
	{ W16(r9, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C07057Cu, 3); goto L_0C07057C; }  /* 0C0705F6 bra */
}

void f_0C070660(sh3_t *c)
{
	LOCALS;
L_0C070660: BLKS(0x0C070660u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C070662u, 1);  /* 0C070660 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C070662 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C070666u, 2);  /* 0C070664 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C070668u, 1);  /* 0C070666 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07066Au, 1);  /* 0C070668 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07066A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07066Eu, 2);  /* 0C07066C mov.l Rm,@-Rn */
	r4 = r10;  /* 0C07066E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C070672u, 2);  /* 0C070670 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C070674u, 1);  /* 0C070672 mov.l Rm,@-Rn */
	r8 = 0xC0A0670u; UPD(0x0C070676u, 1);  /* 0C070674 mov.l @(disp,pc),Rn */
	IF(0x0C070676u); r15 -= 4; W32(r15, PR); UPD(0x0C070678u, 1);  /* 0C070676 sts.l pr,@-Rn */
	IF(0x0C070678u); { u32 t_ = r8; PR = 0x0C07067Cu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C07067Cu); }  /* 0C070678 jsr @Rn */
L_0C07067C: BLKS(0x0C07067Cu);
	T = (r0 & r0) == 0;  /* 0C07067C tst Rm,Rn */
	if (!T) { UPD(0x0C0706A0u, 4); goto L_0C0706A0; }  /* 0C07067E bf */
L_0C070680: BLKS(0x0C070680u);
	r15 = r14;  /* 0C070680 mov Rm,Rn */
	IF(0x0C070682u); PR = R32(r15); r15 += 4; UPD(0x0C070684u, 2);  /* 0C070682 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C070686u, 1);  /* 0C070684 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C070688u, 1);  /* 0C070686 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07068Au, 1);  /* 0C070688 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07068Cu, 1);  /* 0C07068A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07068Eu, 1);  /* 0C07068C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070690u, 1);  /* 0C07068E mov.l @Rm+,Rn */
	IF(0x0C070690u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C070690 rts */
L_0C0706A0: BLKS(0x0C0706A0u);
	r8 = 0xC0A9E40u; UPD(0x0C0706A2u, 1);  /* 0C0706A0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0706A2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C0706A4 mov #imm,Rn */
	IF(0x0C0706A6u); { u32 t_ = r8; PR = 0x0C0706AAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0706AAu); }  /* 0C0706A6 jsr @Rn */
L_0C0706AA: BLKS(0x0C0706AAu);
	T = (r0 & r0) == 0;  /* 0C0706AA tst Rm,Rn */
	if (T) { UPD(0x0C070680u, 4); goto L_0C070680; }  /* 0C0706AC bt */
L_0C0706AE: BLKS(0x0C0706AEu);
	r4 = 0xB4u; UPD(0x0C0706B0u, 1);  /* 0C0706AE mov.w @(disp,pc),Rn */
	IF(0x0C0706B0u); MACL = r10 * r4;  /* 0C0706B0 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0706B4u, 3);  /* 0C0706B2 mov.l @(disp,pc),Rn */
	IF(0x0C0706B4u); r8 = MACL;  /* 0C0706B4 sts macl,Rn */
	r8 += r0;  /* 0C0706B6 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0706BAu, 3);  /* 0C0706B8 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0706BA mov Rm,Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C0706BEu, 2);  /* 0C0706BC mov.l @(disp,pc),Rn */
	IF(0x0C0706BEu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0706C0u, 1);  /* 0C0706BE mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0706C2u, 1);  /* 0C0706C0 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C0706C2 extu.b Rm,Rn */
	IF(0x0C0706C4u); { u32 t_ = r9; PR = 0x0C0706C8u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0706C8u); }  /* 0C0706C4 jsr @Rn */
L_0C0706C8: BLKS(0x0C0706C8u);
	T = (r0 & r0) == 0;  /* 0C0706C8 tst Rm,Rn */
	if (T) { UPD(0x0C070680u, 4); goto L_0C070680; }  /* 0C0706CA bt */
L_0C0706CC: BLKS(0x0C0706CCu);
	r12 = 0x0u;  /* 0C0706CC mov #imm,Rn */
	r13 = 0x86u; UPD(0x0C0706D0u, 2);  /* 0C0706CE mov.w @(disp,pc),Rn */
	r11 = r8;  /* 0C0706D0 mov Rm,Rn */
	r13 += r8;  /* 0C0706D2 add Rm,Rn */
	UPD(0x0C0706D4u, 2);
L_0C0706D4: BLKS(0x0C0706D4u);
	r0 = r12;  /* 0C0706D4 mov Rm,Rn */
	r4 = 0xC181CC0u; UPD(0x0C0706D8u, 2);  /* 0C0706D6 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0706D8 add Rm,Rn */
	IF(0x0C0706DAu); r3 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C0706DCu, 2);  /* 0C0706DA mov.w @(r0,Rm),Rn */
	r2 = (u32)(s32)(s16)R16(r13); UPD(0x0C0706DEu, 1);  /* 0C0706DC mov.w @Rm,Rn */
	r9 = 0xC058060u; UPD(0x0C0706E0u, 1);  /* 0C0706DE mov.l @(disp,pc),Rn */
	r2 += r3;  /* 0C0706E0 add Rm,Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C0706E2 exts.w Rm,Rn */
	r5 = 0xF0000u; UPD(0x0C0706E6u, 3);  /* 0C0706E4 mov.l @(disp,pc),Rn */
	IF(0x0C0706E6u); { u32 t_ = r9; PR = 0x0C0706EAu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0706EAu); }  /* 0C0706E6 jsr @Rn */
L_0C0706EA: BLKS(0x0C0706EAu);
	r9 = R32(r11 + 0x24u); UPD(0x0C0706ECu, 1);  /* 0C0706EA mov.l @(disp,Rm),Rn */
	r9 += r0;  /* 0C0706EC add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C0706F0u, 2);  /* 0C0706EE mov.l @(disp,pc),Rn */
	r5 = 0x140000u; UPD(0x0C0706F2u, 1);  /* 0C0706F0 mov.l @(disp,pc),Rn */
	IF(0x0C0706F2u); { u32 t_ = r0; PR = 0x0C0706F6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0706F6u); }  /* 0C0706F2 jsr @Rn */
L_0C0706F6: BLKS(0x0C0706F6u);
	r6 = R32(r11 + 0x28u); UPD(0x0C0706F8u, 1);  /* 0C0706F6 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0706F8 add #imm,Rn */
	r7 = 0x28000u; UPD(0x0C0706FCu, 2);  /* 0C0706FA mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0706FC add Rm,Rn */
	W32(r15, r7); UPD(0x0C070700u, 2);  /* 0C0706FE mov.l Rm,@Rn */
	r5 = r9;  /* 0C070700 mov Rm,Rn */
	r7 = r8;  /* 0C070702 mov Rm,Rn */
	r8 = 0xC0A8A50u; UPD(0x0C070706u, 3);  /* 0C070704 mov.l @(disp,pc),Rn */
	IF(0x0C070706u); { u32 t_ = r8; PR = 0x0C07070Au; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8A50, 0x0C0A8A50u, 0x0C07070Au); }  /* 0C070706 jsr @Rn */
L_0C07070A: BLKS(0x0C07070Au);
	r6 = r12;  /* 0C07070A mov Rm,Rn */
	r6 += 0x1u;  /* 0C07070C add #imm,Rn */
	r12 = (u32)(s32)(s16)r6;  /* 0C07070E exts.w Rm,Rn */
	r5 = 0x2u;  /* 0C070710 mov #imm,Rn */
	T = (s32)r12 > (s32)r5;  /* 0C070712 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0706D4u, 8); goto L_0C0706D4; } goto L_0C070718; }  /* 0C070714 bf/s */
L_0C070718: BLKS(0x0C070718u);
	r0 = 0xC0580D0u; UPD(0x0C07071Au, 2);  /* 0C070718 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07071A mov Rm,Rn */
	r15 = r14;  /* 0C07071C mov Rm,Rn */
	IF(0x0C07071Eu); PR = R32(r15); r15 += 4; UPD(0x0C070720u, 3);  /* 0C07071E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C070722u, 1);  /* 0C070720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C070724u, 1);  /* 0C070722 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C070726u, 1);  /* 0C070724 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C070728u, 1);  /* 0C070726 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07072Au, 1);  /* 0C070728 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07072Cu, 1);  /* 0C07072A mov.l @Rm+,Rn */
	IF(0x0C07072Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0580D0u: TAIL(f_0C0580D0); default: JUMPD(tv_); } }  /* 0C07072C jmp @Rn */
}

void f_0C070770(sh3_t *c)
{
	LOCALS;
L_0C070770: BLKS(0x0C070770u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C070772u, 1);  /* 0C070770 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C070772 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C070776u, 2);  /* 0C070774 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C070778u, 1);  /* 0C070776 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07077Au, 1);  /* 0C070778 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07077A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07077Eu, 2);  /* 0C07077C mov.l Rm,@-Rn */
	r4 = r10;  /* 0C07077E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C070782u, 2);  /* 0C070780 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C070784u, 1);  /* 0C070782 mov.l Rm,@-Rn */
	r8 = 0xC0A0670u; UPD(0x0C070786u, 1);  /* 0C070784 mov.l @(disp,pc),Rn */
	IF(0x0C070786u); r15 -= 4; W32(r15, PR); UPD(0x0C070788u, 1);  /* 0C070786 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C070788 add #imm,Rn */
	IF(0x0C07078Au); { u32 t_ = r8; PR = 0x0C07078Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C07078Eu); }  /* 0C07078A jsr @Rn */
L_0C07078E: BLKS(0x0C07078Eu);
	T = (r0 & r0) == 0;  /* 0C07078E tst Rm,Rn */
	if (T) { UPD(0x0C0707D4u, 4); goto L_0C0707D4; }  /* 0C070790 bt */
L_0C070792: BLKS(0x0C070792u);
	r3 = 0xB4u; UPD(0x0C070794u, 1);  /* 0C070792 mov.w @(disp,pc),Rn */
	IF(0x0C070794u); MACL = r10 * r3;  /* 0C070794 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C070798u, 3);  /* 0C070796 mov.l @(disp,pc),Rn */
	IF(0x0C070798u); r8 = MACL;  /* 0C070798 sts macl,Rn */
	r9 = 0x9Cu; UPD(0x0C07079Cu, 2);  /* 0C07079A mov.w @(disp,pc),Rn */
	r8 += r2;  /* 0C07079C add Rm,Rn */
	r9 += r8;  /* 0C07079E add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0707A2u, 3);  /* 0C0707A0 mov.b @Rm,Rn */
	r2 = r0 & 0xFF;  /* 0C0707A2 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0707A4 tst Rm,Rn */
	{ u32 c_ = !T; r4 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0707AEu, 5); goto L_0C0707AE; } goto L_0C0707AA; }  /* 0C0707A6 bf/s */
L_0C0707AA: BLKS(0x0C0707AAu);
	{ r5 = 0x5Au; /* slot mov #imm,Rn */ UPD(0x0C0708B0u, 4); goto L_0C0708B0; }  /* 0C0707AA bra */
L_0C0707AE: BLKS(0x0C0707AEu);
	r4 = 0x8u;  /* 0C0707AE mov #imm,Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0707B0 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0707D4u, 5); goto L_0C0707D4; }  /* 0C0707B2 bt */
L_0C0707B4: BLKS(0x0C0707B4u);
	r11 = 0xB4u; UPD(0x0C0707B6u, 1);  /* 0C0707B4 mov.w @(disp,pc),Rn */
	IF(0x0C0707B6u); MACL = r10 * r11;  /* 0C0707B6 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0707BAu, 3);  /* 0C0707B8 mov.l @(disp,pc),Rn */
	IF(0x0C0707BAu); r11 = MACL;  /* 0C0707BA sts macl,Rn */
	r13 = 0x9Cu; UPD(0x0C0707BEu, 2);  /* 0C0707BC mov.w @(disp,pc),Rn */
	r11 += r9;  /* 0C0707BE add Rm,Rn */
	r13 += r11;  /* 0C0707C0 add Rm,Rn */
	r2 = r13;  /* 0C0707C2 mov Rm,Rn */
	r2 += 0x1u;  /* 0C0707C4 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0707C8u, 5);  /* 0C0707C6 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0707C8 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0707CA extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C0707CC cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0707F0u, 6); goto L_0C0707F0; } UPD(0x0C0707D2u, 1); goto L_0C0707D2; }  /* 0C0707CE bt/s */
L_0C0707D2: BLKS(0x0C0707D2u);
	IF(0x0C0707D2u); ;  /* 0C0707D2 nop */
	UPD(0x0C0707D4u, 1);
L_0C0707D4: BLKS(0x0C0707D4u);
	r14 += 0x8u;  /* 0C0707D4 add #imm,Rn */
	UPD(0x0C0707D6u, 1);
L_0C0707D6: BLKS(0x0C0707D6u);
	r15 = r14;  /* 0C0707D6 mov Rm,Rn */
	IF(0x0C0707D8u); PR = R32(r15); r15 += 4; UPD(0x0C0707DAu, 2);  /* 0C0707D8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0707DCu, 1);  /* 0C0707DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0707DEu, 1);  /* 0C0707DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0707E0u, 1);  /* 0C0707DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0707E2u, 1);  /* 0C0707E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0707E4u, 1);  /* 0C0707E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0707E6u, 1);  /* 0C0707E4 mov.l @Rm+,Rn */
	IF(0x0C0707E6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0707E6 rts */
L_0C0707F0: BLKS(0x0C0707F0u);
	r12 = (u32)(s32)(s8)R8(r13); UPD(0x0C0707F2u, 1);  /* 0C0707F0 mov.b @Rm,Rn */
	r0 = r11;  /* 0C0707F2 mov Rm,Rn */
	r9 = 0x86u; UPD(0x0C0707F6u, 2);  /* 0C0707F4 mov.w @(disp,pc),Rn */
	r5 = r12;  /* 0C0707F6 mov Rm,Rn */
	r1 = 0xFCu; UPD(0x0C0707FAu, 2);  /* 0C0707F8 mov.w @(disp,pc),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0707FA add #imm,Rn */
	IF(0x0C0707FCu); r12 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C0707FEu, 2);  /* 0C0707FC mov.w @(r0,Rm),Rn */
	r3 = 0x0u;  /* 0C0707FE mov #imm,Rn */
	W8(r2, r3); UPD(0x0C070802u, 2);  /* 0C070800 mov.b Rm,@Rn */
	r1 &= r5;  /* 0C070802 and Rm,Rn */
	W8(r13, r5); UPD(0x0C070806u, 2);  /* 0C070804 mov.b Rm,@Rn */
	r0 = r1;  /* 0C070806 mov Rm,Rn */
	r7 = 0xC181CE8u; UPD(0x0C07080Au, 2);  /* 0C070808 mov.l @(disp,pc),Rn */
	IF(0x0C07080Au); r6 = R32(r0 + r7); UPD(0x0C07080Cu, 1);  /* 0C07080A mov.l @(r0,Rm),Rn */
	r0 = 0x3u;  /* 0C07080C mov #imm,Rn */
	r5 &= r0;  /* 0C07080E and Rm,Rn */
	IF(0x0C070810u); r5 <<= 2;  /* 0C070810 shll2 Rn */
	r8 = 0xC181CF0u; UPD(0x0C070814u, 4);  /* 0C070812 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C070814 mov Rm,Rn */
	IF(0x0C070816u); r4 = R32(r0 + r8); UPD(0x0C070818u, 2);  /* 0C070816 mov.l @(r0,Rm),Rn */
	r3 = 0xC058060u; UPD(0x0C07081Au, 1);  /* 0C070818 mov.l @(disp,pc),Rn */
	W32(r14, r6); UPD(0x0C07081Cu, 1);  /* 0C07081A mov.l Rm,@Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C07081Eu, 1);  /* 0C07081C mov.l Rm,@(disp,Rn) */
	r5 = R32(r14); UPD(0x0C070820u, 1);  /* 0C07081E mov.l @Rm,Rn */
	IF(0x0C070820u); { u32 t_ = r3; PR = 0x0C070824u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C070824u); }  /* 0C070820 jsr @Rn */
L_0C070824: BLKS(0x0C070824u);
	r2 = 0xC058030u; UPD(0x0C070826u, 1);  /* 0C070824 mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C070826 mov Rm,Rn */
	r4 = r12;  /* 0C070828 mov Rm,Rn */
	IF(0x0C07082Au); { u32 t_ = r2; PR = 0x0C07082Eu; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07082Eu); }  /* 0C07082A jsr @Rn */
L_0C07082E: BLKS(0x0C07082Eu);
	r9 -= r0;  /* 0C07082E sub Rm,Rn */
	r1 = r9;  /* 0C070830 mov Rm,Rn */
	r1 += r1;  /* 0C070832 add Rm,Rn */
	r1 += r9;  /* 0C070834 add Rm,Rn */
	IF(0x0C070836u); T = (s32)r1 >= 0;  /* 0C070836 cmp/pz Rn */
	if (!T) { UPD(0x0C0708A0u, 8); goto L_0C0708A0; }  /* 0C070838 bf */
L_0C07083A: BLKS(0x0C07083Au);
	r9 = R32(r11 + 0x24u); UPD(0x0C07083Cu, 1);  /* 0C07083A mov.l @(disp,Rm),Rn */
	IF(0x0C07083Cu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C07083C shar Rn */
	r8 = 0xC058030u; UPD(0x0C070840u, 2);  /* 0C07083E mov.l @(disp,pc),Rn */
	IF(0x0C070840u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C070840 shar Rn */
	r0 = 0x10000u; UPD(0x0C070844u, 2);  /* 0C070842 mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C070844 add Rm,Rn */
	r9 += r0;  /* 0C070846 add Rm,Rn */
	r4 = r12;  /* 0C070848 mov Rm,Rn */
	IF(0x0C07084Au); { u32 t_ = r8; PR = 0x0C07084Eu; r5 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07084Eu); }  /* 0C07084A jsr @Rn */
L_0C07084E: BLKS(0x0C07084Eu);
	r3 = 0xC058060u; UPD(0x0C070850u, 1);  /* 0C07084E mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C070850 mov Rm,Rn */
	r8 = R32(r11 + 0x28u); UPD(0x0C070854u, 2);  /* 0C070852 mov.l @(disp,Rm),Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C070856u, 1);  /* 0C070854 mov.l @(disp,Rm),Rn */
	IF(0x0C070856u); { u32 t_ = r3; PR = 0x0C07085Au; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07085Au); }  /* 0C070856 jsr @Rn */
L_0C07085A: BLKS(0x0C07085Au);
	r1 = (u32)(s32)(s8)R8(r13); UPD(0x0C07085Cu, 1);  /* 0C07085A mov.b @Rm,Rn */
	r8 += r0;  /* 0C07085C add Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C07085E extu.b Rm,Rn */
	r7 = 0xC181CCAu; UPD(0x0C070862u, 3);  /* 0C070860 mov.l @(disp,pc),Rn */
	IF(0x0C070862u); r0 <<= 2;  /* 0C070862 shll2 Rn */
	IF(0x0C070864u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C070866u, 2);  /* 0C070864 mov.w @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C070866 add #imm,Rn */
	r5 = 0x30000u; UPD(0x0C07086Au, 2);  /* 0C070868 mov.l @(disp,pc),Rn */
	r6 += r12;  /* 0C07086A add Rm,Rn */
	r4 = 0x40000u; UPD(0x0C07086Eu, 2);  /* 0C07086C mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r6;  /* 0C07086E exts.w Rm,Rn */
	r13 = 0xC07C6B0u; UPD(0x0C070872u, 2);  /* 0C070870 mov.l @(disp,pc),Rn */
	r6 = 0x14u;  /* 0C070872 mov #imm,Rn */
	W32(r15, r5); UPD(0x0C070876u, 2);  /* 0C070874 mov.l Rm,@Rn */
	r7 = r11;  /* 0C070876 mov Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07087Au, 2);  /* 0C070878 mov.l Rm,@(disp,Rn) */
	r5 = r8;  /* 0C07087A mov Rm,Rn */
	IF(0x0C07087Cu); { u32 t_ = r13; PR = 0x0C070880u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C07C6B0, 0x0C07C6B0u, 0x0C070880u); }  /* 0C07087C jsr @Rn */
L_0C070880: BLKS(0x0C070880u);
	r2 = 0xC0580D0u; UPD(0x0C070882u, 1);  /* 0C070880 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C070882 add #imm,Rn */
	r4 = r10;  /* 0C070884 mov Rm,Rn */
	r14 += 0x8u;  /* 0C070886 add #imm,Rn */
	r15 = r14;  /* 0C070888 mov Rm,Rn */
	IF(0x0C07088Au); PR = R32(r15); r15 += 4; UPD(0x0C07088Cu, 5);  /* 0C07088A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07088Eu, 1);  /* 0C07088C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C070890u, 1);  /* 0C07088E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C070892u, 1);  /* 0C070890 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C070894u, 1);  /* 0C070892 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C070896u, 1);  /* 0C070894 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070898u, 1);  /* 0C070896 mov.l @Rm+,Rn */
	IF(0x0C070898u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0580D0u: TAIL(f_0C0580D0); default: JUMPD(tv_); } }  /* 0C070898 jmp @Rn */
L_0C0708A0: BLKS(0x0C0708A0u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C07083Au, 3); goto L_0C07083A; }  /* 0C0708A0 bra */
L_0C0708B0: BLKS(0x0C0708B0u);
	r10 = 0xC0A9E40u; UPD(0x0C0708B2u, 1);  /* 0C0708B0 mov.l @(disp,pc),Rn */
	IF(0x0C0708B2u); { u32 t_ = r10; PR = 0x0C0708B6u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0708B6u); }  /* 0C0708B2 jsr @Rn */
L_0C0708B6: BLKS(0x0C0708B6u);
	T = (r0 & r0) == 0;  /* 0C0708B6 tst Rm,Rn */
	if (T) { UPD(0x0C0708D4u, 4); goto L_0C0708D4; }  /* 0C0708B8 bt */
L_0C0708BA: BLKS(0x0C0708BAu);
	r0 = r8;  /* 0C0708BA mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C0708BEu, 2);  /* 0C0708BC mov.w @(disp,pc),Rn */
	IF(0x0C0708BEu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0708C0u, 1);  /* 0C0708BE mov.b @(r0,Rm),Rn */
	r6 = r5 & 0xFF;  /* 0C0708C0 extu.b Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0708C4u, 2);  /* 0C0708C2 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0708C6u, 1);  /* 0C0708C4 mov.l @(disp,Rm),Rn */
	r8 = 0xC0A9BB0u; UPD(0x0C0708C8u, 1);  /* 0C0708C6 mov.l @(disp,pc),Rn */
	IF(0x0C0708C8u); { u32 t_ = r8; PR = 0x0C0708CCu; IF(0x0C0708CAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0708CCu); }  /* 0C0708C8 jsr @Rn */
L_0C0708CC: BLKS(0x0C0708CCu);
	T = (r0 & r0) == 0;  /* 0C0708CC tst Rm,Rn */
	if (T) { UPD(0x0C0708D4u, 4); goto L_0C0708D4; }  /* 0C0708CE bt */
L_0C0708D0: BLKS(0x0C0708D0u);
	r7 = 0x8u;  /* 0C0708D0 mov #imm,Rn */
	W8(r9, r7); UPD(0x0C0708D4u, 2);  /* 0C0708D2 mov.b Rm,@Rn */
L_0C0708D4: BLKS(0x0C0708D4u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0707D6u, 3); goto L_0C0707D6; }  /* 0C0708D4 bra */
}

void f_0C070920(sh3_t *c)
{
	LOCALS;
L_0C070920: BLKS(0x0C070920u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C070922u, 1);  /* 0C070920 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C070922 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C070926u, 2);  /* 0C070924 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C070928u, 1);  /* 0C070926 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07092Au, 1);  /* 0C070928 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07092A exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07092Eu, 2);  /* 0C07092C mov.l Rm,@-Rn */
	r4 = r10;  /* 0C07092E mov Rm,Rn */
	r8 = 0xC0A0670u; UPD(0x0C070932u, 2);  /* 0C070930 mov.l @(disp,pc),Rn */
	IF(0x0C070932u); r15 -= 4; W32(r15, PR); UPD(0x0C070934u, 1);  /* 0C070932 sts.l pr,@-Rn */
	IF(0x0C070934u); { u32 t_ = r8; PR = 0x0C070938u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C070938u); }  /* 0C070934 jsr @Rn */
L_0C070938: BLKS(0x0C070938u);
	T = (r0 & r0) == 0;  /* 0C070938 tst Rm,Rn */
	if (T) { UPD(0x0C070978u, 4); goto L_0C070978; }  /* 0C07093A bt */
L_0C07093C: BLKS(0x0C07093Cu);
	r3 = 0xB4u; UPD(0x0C07093Eu, 1);  /* 0C07093C mov.w @(disp,pc),Rn */
	IF(0x0C07093Eu); MACL = r10 * r3;  /* 0C07093E mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C070942u, 3);  /* 0C070940 mov.l @(disp,pc),Rn */
	IF(0x0C070942u); r8 = MACL;  /* 0C070942 sts macl,Rn */
	r9 = 0x9Cu; UPD(0x0C070946u, 2);  /* 0C070944 mov.w @(disp,pc),Rn */
	r8 += r2;  /* 0C070946 add Rm,Rn */
	r9 += r8;  /* 0C070948 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C07094Cu, 3);  /* 0C07094A mov.b @Rm,Rn */
	r2 = r0 & 0xFF;  /* 0C07094C extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07094E tst Rm,Rn */
	{ u32 c_ = T; r4 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0709F0u, 5); goto L_0C0709F0; } goto L_0C070954; }  /* 0C070950 bt/s */
L_0C070954: BLKS(0x0C070954u);
	T = (s32)r2 > (s32)r4;  /* 0C070954 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C070978u, 5); goto L_0C070978; }  /* 0C070956 bt */
L_0C070958: BLKS(0x0C070958u);
	r11 = 0xB4u; UPD(0x0C07095Au, 1);  /* 0C070958 mov.w @(disp,pc),Rn */
	IF(0x0C07095Au); MACL = r10 * r11;  /* 0C07095A mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C07095Eu, 3);  /* 0C07095C mov.l @(disp,pc),Rn */
	IF(0x0C07095Eu); r11 = MACL;  /* 0C07095E sts macl,Rn */
	r3 = 0x9Cu; UPD(0x0C070962u, 2);  /* 0C070960 mov.w @(disp,pc),Rn */
	r11 += r9;  /* 0C070962 add Rm,Rn */
	r3 += r11;  /* 0C070964 add Rm,Rn */
	r2 = r3;  /* 0C070966 mov Rm,Rn */
	r2 += 0x1u;  /* 0C070968 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C07096Cu, 5);  /* 0C07096A mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C07096C add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C07096E extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C070970 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C070990u, 6); goto L_0C070990; } UPD(0x0C070976u, 1); goto L_0C070976; }  /* 0C070972 bt/s */
L_0C070976: BLKS(0x0C070976u);
	IF(0x0C070976u); ;  /* 0C070976 nop */
	UPD(0x0C070978u, 1);
L_0C070978: BLKS(0x0C070978u);
	r15 = r14;  /* 0C070978 mov Rm,Rn */
	IF(0x0C07097Au); PR = R32(r15); r15 += 4; UPD(0x0C07097Cu, 2);  /* 0C07097A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07097Eu, 1);  /* 0C07097C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C070980u, 1);  /* 0C07097E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C070982u, 1);  /* 0C070980 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070984u, 1);  /* 0C070982 mov.l @Rm+,Rn */
	IF(0x0C070984u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C070984 rts */
L_0C070990: BLKS(0x0C070990u);
	r5 = (u32)(s32)(s8)R8(r3); UPD(0x0C070992u, 1);  /* 0C070990 mov.b @Rm,Rn */
	r0 = r11;  /* 0C070992 mov Rm,Rn */
	r4 = 0x86u; UPD(0x0C070996u, 2);  /* 0C070994 mov.w @(disp,pc),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C070996 add #imm,Rn */
	r8 = 0xC058060u; UPD(0x0C07099Au, 2);  /* 0C070998 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C07099A mov #imm,Rn */
	IF(0x0C07099Cu); r9 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C07099Eu, 2);  /* 0C07099C mov.w @(r0,Rm),Rn */
	W8(r3, r5); UPD(0x0C0709A0u, 1);  /* 0C07099E mov.b Rm,@Rn */
	r4 = r9;  /* 0C0709A0 mov Rm,Rn */
	r5 = 0x90000u; UPD(0x0C0709A4u, 2);  /* 0C0709A2 mov.l @(disp,pc),Rn */
	IF(0x0C0709A4u); { u32 t_ = r8; PR = 0x0C0709A8u; W8(r2, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0709A8u); }  /* 0C0709A4 jsr @Rn */
L_0C0709A8: BLKS(0x0C0709A8u);
	r8 = R32(r11 + 0x24u); UPD(0x0C0709AAu, 1);  /* 0C0709A8 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0709AA mov Rm,Rn */
	r8 += r0;  /* 0C0709AC add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C0709B0u, 3);  /* 0C0709AE mov.l @(disp,pc),Rn */
	r3 = 0x10000u; UPD(0x0C0709B2u, 1);  /* 0C0709B0 mov.l @(disp,pc),Rn */
	r5 = 0xC0000u; UPD(0x0C0709B4u, 1);  /* 0C0709B2 mov.l @(disp,pc),Rn */
	IF(0x0C0709B4u); { u32 t_ = r0; PR = 0x0C0709B8u; r8 += r3; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0709B8u); }  /* 0C0709B4 jsr @Rn */
L_0C0709B8: BLKS(0x0C0709B8u);
	r5 = r8;  /* 0C0709B8 mov Rm,Rn */
	r8 = 0xC0A8510u; UPD(0x0C0709BCu, 2);  /* 0C0709BA mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0709BC add #imm,Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C0709C0u, 2);  /* 0C0709BE mov.l @(disp,Rm),Rn */
	r4 = 0x2u;  /* 0C0709C0 mov #imm,Rn */
	r2 = 0x30000u; UPD(0x0C0709C4u, 2);  /* 0C0709C2 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0709C4 add Rm,Rn */
	W32(r15, r2); UPD(0x0C0709C8u, 2);  /* 0C0709C6 mov.l Rm,@Rn */
	IF(0x0C0709C8u); { u32 t_ = r8; PR = 0x0C0709CCu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8510, 0x0C0A8510u, 0x0C0709CCu); }  /* 0C0709C8 jsr @Rn */
L_0C0709CC: BLKS(0x0C0709CCu);
	r0 = 0xC0580D0u; UPD(0x0C0709CEu, 1);  /* 0C0709CC mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C0709CE add #imm,Rn */
	r4 = r10;  /* 0C0709D0 mov Rm,Rn */
	r15 = r14;  /* 0C0709D2 mov Rm,Rn */
	IF(0x0C0709D4u); PR = R32(r15); r15 += 4; UPD(0x0C0709D6u, 4);  /* 0C0709D4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0709D8u, 1);  /* 0C0709D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0709DAu, 1);  /* 0C0709D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0709DCu, 1);  /* 0C0709DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0709DEu, 1);  /* 0C0709DC mov.l @Rm+,Rn */
	IF(0x0C0709DEu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0580D0u: TAIL(f_0C0580D0); default: JUMPD(tv_); } }  /* 0C0709DE jmp @Rn */
L_0C0709F0: BLKS(0x0C0709F0u);
	r4 = r10;  /* 0C0709F0 mov Rm,Rn */
	r10 = 0xC0A9E40u; UPD(0x0C0709F4u, 2);  /* 0C0709F2 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C0709F4 mov #imm,Rn */
	IF(0x0C0709F6u); { u32 t_ = r10; PR = 0x0C0709FAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0709FAu); }  /* 0C0709F6 jsr @Rn */
L_0C0709FA: BLKS(0x0C0709FAu);
	T = (r0 & r0) == 0;  /* 0C0709FA tst Rm,Rn */
	if (T) { UPD(0x0C070978u, 4); goto L_0C070978; }  /* 0C0709FC bt */
L_0C0709FE: BLKS(0x0C0709FEu);
	r0 = r8;  /* 0C0709FE mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C070A02u, 2);  /* 0C070A00 mov.w @(disp,pc),Rn */
	IF(0x0C070A02u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C070A04u, 1);  /* 0C070A02 mov.b @(r0,Rm),Rn */
	r6 = r5 & 0xFF;  /* 0C070A04 extu.b Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C070A08u, 2);  /* 0C070A06 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C070A0Au, 1);  /* 0C070A08 mov.l @(disp,Rm),Rn */
	r8 = 0xC0A9BB0u; UPD(0x0C070A0Cu, 1);  /* 0C070A0A mov.l @(disp,pc),Rn */
	IF(0x0C070A0Cu); { u32 t_ = r8; PR = 0x0C070A10u; IF(0x0C070A0Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C070A10u); }  /* 0C070A0C jsr @Rn */
L_0C070A10: BLKS(0x0C070A10u);
	T = (r0 & r0) == 0;  /* 0C070A10 tst Rm,Rn */
	if (T) { UPD(0x0C070978u, 4); goto L_0C070978; }  /* 0C070A12 bt */
L_0C070A14: BLKS(0x0C070A14u);
	r7 = 0x4u;  /* 0C070A14 mov #imm,Rn */
	{ W8(r9, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C070978u, 4); goto L_0C070978; }  /* 0C070A16 bra */
}

void f_0C070A60(sh3_t *c)
{
	LOCALS;
L_0C070A60: BLKS(0x0C070A60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C070A62u, 1);  /* 0C070A60 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C070A62 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C070A66u, 2);  /* 0C070A64 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C070A68u, 1);  /* 0C070A66 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C070A6Au, 1);  /* 0C070A68 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C070A6Cu, 1);  /* 0C070A6A mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C070A6Eu, 1);  /* 0C070A6C mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C070A6E exts.w Rm,Rn */
	IF(0x0C070A70u); MACL = r12 * r2;  /* 0C070A70 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C070A74u, 4);  /* 0C070A72 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C070A76u, 1);  /* 0C070A74 mov.l @(disp,pc),Rn */
	IF(0x0C070A76u); r10 = MACL;  /* 0C070A76 sts macl,Rn */
	r11 = 0x9Cu; UPD(0x0C070A7Au, 2);  /* 0C070A78 mov.w @(disp,pc),Rn */
	r10 += r0;  /* 0C070A7A add Rm,Rn */
	IF(0x0C070A7Cu); r15 -= 4; W32(r15, PR); UPD(0x0C070A7Eu, 2);  /* 0C070A7C sts.l pr,@-Rn */
	r11 += r10;  /* 0C070A7E add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C070A82u, 2);  /* 0C070A80 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C070A82 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C070B20u, 4); goto L_0C070B20; } goto L_0C070A88; }  /* 0C070A84 bt/s */
L_0C070A88: BLKS(0x0C070A88u);
	r2 = r11;  /* 0C070A88 mov Rm,Rn */
	r2 += 0x1u;  /* 0C070A8A add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C070A8Eu, 4);  /* 0C070A8C mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C070A8E add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C070A90 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C070A92 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C070AB0u, 6); goto L_0C070AB0; } UPD(0x0C070A98u, 1); goto L_0C070A98; }  /* 0C070A94 bt/s */
L_0C070A98: BLKS(0x0C070A98u);
	r15 = r14;  /* 0C070A98 mov Rm,Rn */
	IF(0x0C070A9Au); PR = R32(r15); r15 += 4; UPD(0x0C070A9Cu, 2);  /* 0C070A9A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C070A9Eu, 1);  /* 0C070A9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C070AA0u, 1);  /* 0C070A9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C070AA2u, 1);  /* 0C070AA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C070AA4u, 1);  /* 0C070AA2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070AA6u, 1);  /* 0C070AA4 mov.l @Rm+,Rn */
	IF(0x0C070AA6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C070AA6 rts */
L_0C070AB0: BLKS(0x0C070AB0u);
	r5 = 0xA9u; UPD(0x0C070AB2u, 1);  /* 0C070AB0 mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C070AB2 mov #imm,Rn */
	r0 = r10;  /* 0C070AB4 mov Rm,Rn */
	IF(0x0C070AB6u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C070AB8u, 3);  /* 0C070AB6 mov.b @(r0,Rm),Rn */
	W8(r2, r6); UPD(0x0C070ABAu, 1);  /* 0C070AB8 mov.b Rm,@Rn */
	r8 = 0xC0A9BB0u; UPD(0x0C070ABCu, 1);  /* 0C070ABA mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C070ABC extu.b Rm,Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C070AC0u, 2);  /* 0C070ABE mov.l @(disp,Rm),Rn */
	IF(0x0C070AC0u); { u32 t_ = r8; PR = 0x0C070AC4u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C070AC4u); }  /* 0C070AC0 jsr @Rn */
L_0C070AC4: BLKS(0x0C070AC4u);
	T = (r0 & r0) == 0;  /* 0C070AC4 tst Rm,Rn */
	if (!T) { UPD(0x0C070AD0u, 4); goto L_0C070AD0; }  /* 0C070AC6 bf */
L_0C070AC8: BLKS(0x0C070AC8u);
	W8(r11, r0); UPD(0x0C070ACAu, 1);  /* 0C070AC8 mov.b Rm,@Rn */
	{ IF(0x0C070ACCu); ; /* slot nop */ UPD(0x0C070A98u, 3); goto L_0C070A98; }  /* 0C070ACA bra */
L_0C070AD0: BLKS(0x0C070AD0u);
	r3 = 0x86u; UPD(0x0C070AD2u, 1);  /* 0C070AD0 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C070AD2 mov Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C070AD6u, 2);  /* 0C070AD4 mov.l @(disp,pc),Rn */
	IF(0x0C070AD6u); r9 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C070AD8u, 1);  /* 0C070AD6 mov.w @(r0,Rm),Rn */
	r5 = 0x120000u; UPD(0x0C070ADAu, 1);  /* 0C070AD8 mov.l @(disp,pc),Rn */
	IF(0x0C070ADAu); { u32 t_ = r8; PR = 0x0C070ADEu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C070ADEu); }  /* 0C070ADA jsr @Rn */
L_0C070ADE: BLKS(0x0C070ADEu);
	r8 = R32(r10 + 0x24u); UPD(0x0C070AE0u, 1);  /* 0C070ADE mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C070AE0 mov Rm,Rn */
	r8 += r0;  /* 0C070AE2 add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C070AE6u, 3);  /* 0C070AE4 mov.l @(disp,pc),Rn */
	r2 = 0x40000u; UPD(0x0C070AE8u, 1);  /* 0C070AE6 mov.l @(disp,pc),Rn */
	r5 = 0x180000u; UPD(0x0C070AEAu, 1);  /* 0C070AE8 mov.l @(disp,pc),Rn */
	IF(0x0C070AEAu); { u32 t_ = r0; PR = 0x0C070AEEu; r8 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C070AEEu); }  /* 0C070AEA jsr @Rn */
L_0C070AEE: BLKS(0x0C070AEEu);
	r6 = R32(r10 + 0x28u); UPD(0x0C070AF0u, 1);  /* 0C070AEE mov.l @(disp,Rm),Rn */
	r7 = r9;  /* 0C070AF0 mov Rm,Rn */
	r6 += r0;  /* 0C070AF2 add Rm,Rn */
	r9 = 0xC0A9460u; UPD(0x0C070AF6u, 3);  /* 0C070AF4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C070AF6 add #imm,Rn */
	r0 = 0x30000u; UPD(0x0C070AFAu, 2);  /* 0C070AF8 mov.l @(disp,pc),Rn */
	r4 = 0x40u;  /* 0C070AFA mov #imm,Rn */
	W32(r15, r0); UPD(0x0C070AFEu, 2);  /* 0C070AFC mov.l Rm,@Rn */
	IF(0x0C070AFEu); { u32 t_ = r9; PR = 0x0C070B02u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9460, 0x0C0A9460u, 0x0C070B02u); }  /* 0C070AFE jsr @Rn */
L_0C070B02: BLKS(0x0C070B02u);
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C070B04u, 1);  /* 0C070B02 mov.b @Rm,Rn */
	r15 += 0x4u;  /* 0C070B04 add #imm,Rn */
	r10 += 0xFFFFFFFFu;  /* 0C070B06 add #imm,Rn */
	r7 = r10 & 0xFF;  /* 0C070B08 extu.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C070B0A tst Rm,Rn */
	{ u32 c_ = !T; W8(r11, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C070A98u, 7); goto L_0C070A98; } UPD(0x0C070B10u, 1); goto L_0C070B10; }  /* 0C070B0C bf/s */
L_0C070B10: BLKS(0x0C070B10u);
	r11 = 0xC0580D0u; UPD(0x0C070B12u, 1);  /* 0C070B10 mov.l @(disp,pc),Rn */
	IF(0x0C070B12u); { u32 t_ = r11; PR = 0x0C070B16u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C070B16u); }  /* 0C070B12 jsr @Rn */
L_0C070B16: BLKS(0x0C070B16u);
	{ IF(0x0C070B18u); ; /* slot nop */ UPD(0x0C070A98u, 3); goto L_0C070A98; }  /* 0C070B16 bra */
L_0C070B20: BLKS(0x0C070B20u);
	r8 = 0xC0A0670u; UPD(0x0C070B22u, 1);  /* 0C070B20 mov.l @(disp,pc),Rn */
	IF(0x0C070B22u); { u32 t_ = r8; PR = 0x0C070B26u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C070B26u); }  /* 0C070B22 jsr @Rn */
L_0C070B26: BLKS(0x0C070B26u);
	T = (r0 & r0) == 0;  /* 0C070B26 tst Rm,Rn */
	if (T) { UPD(0x0C070A98u, 4); goto L_0C070A98; }  /* 0C070B28 bt */
L_0C070B2A: BLKS(0x0C070B2Au);
	r4 = r12;  /* 0C070B2A mov Rm,Rn */
	r9 = 0xC0A9E40u; UPD(0x0C070B2Eu, 2);  /* 0C070B2C mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C070B2E mov #imm,Rn */
	IF(0x0C070B30u); { u32 t_ = r9; PR = 0x0C070B34u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C070B34u); }  /* 0C070B30 jsr @Rn */
L_0C070B34: BLKS(0x0C070B34u);
	T = (r0 & r0) == 0;  /* 0C070B34 tst Rm,Rn */
	if (T) { UPD(0x0C070A98u, 4); goto L_0C070A98; }  /* 0C070B36 bt */
L_0C070B38: BLKS(0x0C070B38u);
	r3 = 0x3Cu;  /* 0C070B38 mov #imm,Rn */
	{ W8(r11, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C070A98u, 4); goto L_0C070A98; }  /* 0C070B3A bra */
}

void f_0C070B80(sh3_t *c)
{
	LOCALS;
L_0C070B80: BLKS(0x0C070B80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C070B82u, 1);  /* 0C070B80 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C070B84u, 1);  /* 0C070B82 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C070B86u, 1);  /* 0C070B84 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C070B88u, 1);  /* 0C070B86 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C070B88 exts.w Rm,Rn */
	r9 = 0xB4u; UPD(0x0C070B8Cu, 2);  /* 0C070B8A mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C070B8C exts.w Rm,Rn */
	IF(0x0C070B8Eu); MACL = r11 * r9;  /* 0C070B8E mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C070B92u, 4);  /* 0C070B90 mov.l Rm,@-Rn */
	IF(0x0C070B92u); r8 = MACL;  /* 0C070B92 sts macl,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C070B96u, 2);  /* 0C070B94 mov.l Rm,@-Rn */
	IF(0x0C070B96u); MACL = r10 * r9;  /* 0C070B96 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C070B9Au, 3);  /* 0C070B98 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C070B9Cu, 1);  /* 0C070B9A mov.l @(disp,pc),Rn */
	IF(0x0C070B9Cu); r4 = MACL;  /* 0C070B9C sts macl,Rn */
	IF(0x0C070B9Eu); r15 -= 4; W32(r15, PR); UPD(0x0C070BA0u, 2);  /* 0C070B9E sts.l pr,@-Rn */
	r8 += r0;  /* 0C070BA0 add Rm,Rn */
	r4 += r0;  /* 0C070BA2 add Rm,Rn */
	r6 = R32(r8); UPD(0x0C070BA6u, 3);  /* 0C070BA4 mov.l @Rm,Rn */
	r9 = r8;  /* 0C070BA6 mov Rm,Rn */
	r7 = R32(r4); UPD(0x0C070BAAu, 2);  /* 0C070BA8 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C070BAA add #imm,Rn */
	r0 = 0x100u; UPD(0x0C070BAEu, 2);  /* 0C070BAC mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C070BAE mov Rm,Rn */
	r5 = 0xA8u; UPD(0x0C070BB2u, 2);  /* 0C070BB0 mov.w @(disp,pc),Rn */
	r7 &= r0;  /* 0C070BB2 and Rm,Rn */
	r12 = 0xFFFFFEFFu; UPD(0x0C070BB6u, 2);  /* 0C070BB4 mov.w @(disp,pc),Rn */
	r9 += r5;  /* 0C070BB6 add Rm,Rn */
	r6 &= r12;  /* 0C070BB8 and Rm,Rn */
	r6 |= r7;  /* 0C070BBA or Rm,Rn */
	r5 += r4;  /* 0C070BBC add Rm,Rn */
	W32(r8, r6); UPD(0x0C070BC0u, 5);  /* 0C070BBE mov.l Rm,@Rn */
	r5 += 0x1u;  /* 0C070BC0 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C070BC4u, 2);  /* 0C070BC2 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C070BC4 add #imm,Rn */
	r2 = R32(r4); UPD(0x0C070BC8u, 2);  /* 0C070BC6 mov.l @Rm,Rn */
	T = (r2 & r0) == 0;  /* 0C070BC8 tst Rm,Rn */
	{ u32 c_ = T; W8(r9, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C070BD2u, 4); goto L_0C070BD2; } UPD(0x0C070BCEu, 1); goto L_0C070BCE; }  /* 0C070BCA bt/s */
L_0C070BCE: BLKS(0x0C070BCEu);
	{ IF(0x0C070BD0u); ; /* slot nop */ UPD(0x0C070CC0u, 3); goto L_0C070CC0; }  /* 0C070BCE bra */
L_0C070BD2: BLKS(0x0C070BD2u);
	r13 = 0x9Cu; UPD(0x0C070BD4u, 1);  /* 0C070BD2 mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C070BD4 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r13); UPD(0x0C070BD8u, 2);  /* 0C070BD6 mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C070BD8 tst Rm,Rn */
	{ u32 c_ = !T; r4 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C070C30u, 4); goto L_0C070C30; } goto L_0C070BDE; }  /* 0C070BDA bf/s */
L_0C070BDE: BLKS(0x0C070BDEu);
	r4 = r11;  /* 0C070BDE mov Rm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C070BE2u, 3);  /* 0C070BE0 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C070BE2 mov #imm,Rn */
	IF(0x0C070BE4u); { u32 t_ = r11; PR = 0x0C070BE8u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C070BE8u); }  /* 0C070BE4 jsr @Rn */
L_0C070BE8: BLKS(0x0C070BE8u);
	T = (r0 & r0) == 0;  /* 0C070BE8 tst Rm,Rn */
	if (!T) { UPD(0x0C070C10u, 4); goto L_0C070C10; }  /* 0C070BEA bf */
L_0C070BEC: BLKS(0x0C070BECu);
	r14 += 0x4u;  /* 0C070BEC add #imm,Rn */
	r15 = r14;  /* 0C070BEE mov Rm,Rn */
	IF(0x0C070BF0u); PR = R32(r15); r15 += 4; UPD(0x0C070BF2u, 3);  /* 0C070BF0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C070BF4u, 1);  /* 0C070BF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C070BF6u, 1);  /* 0C070BF4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C070BF8u, 1);  /* 0C070BF6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C070BFAu, 1);  /* 0C070BF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C070BFCu, 1);  /* 0C070BFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070BFEu, 1);  /* 0C070BFC mov.l @Rm+,Rn */
	IF(0x0C070BFEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C070BFE rts */
L_0C070C10: BLKS(0x0C070C10u);
	r4 = R32(r8 + 0x24u); UPD(0x0C070C12u, 1);  /* 0C070C10 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C070C14u, 1);  /* 0C070C12 mov.l @(disp,Rm),Rn */
	r8 = 0xC0A9BB0u; UPD(0x0C070C16u, 1);  /* 0C070C14 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C070C18u, 1);  /* 0C070C16 mov.b @Rm,Rn */
	IF(0x0C070C18u); { u32 t_ = r8; PR = 0x0C070C1Cu; r6 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C070C1Cu); }  /* 0C070C18 jsr @Rn */
L_0C070C1C: BLKS(0x0C070C1Cu);
	T = (r0 & r0) == 0;  /* 0C070C1C tst Rm,Rn */
	if (T) { UPD(0x0C070BECu, 4); goto L_0C070BEC; }  /* 0C070C1E bt */
L_0C070C20: BLKS(0x0C070C20u);
	r5 = 0x10u;  /* 0C070C20 mov #imm,Rn */
	{ W8(r13, r5); /* slot mov.b Rm,@Rn */ UPD(0x0C070BECu, 4); goto L_0C070BEC; }  /* 0C070C22 bra */
L_0C070C30: BLKS(0x0C070C30u);
	r10 = 0xC0A9E40u; UPD(0x0C070C32u, 1);  /* 0C070C30 mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C070C32 mov #imm,Rn */
	IF(0x0C070C34u); { u32 t_ = r10; PR = 0x0C070C38u; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C070C38u); }  /* 0C070C34 jsr @Rn */
L_0C070C38: BLKS(0x0C070C38u);
	T = (r0 & r0) == 0;  /* 0C070C38 tst Rm,Rn */
	if (T) { UPD(0x0C070BECu, 4); goto L_0C070BEC; }  /* 0C070C3A bt */
L_0C070C3C: BLKS(0x0C070C3Cu);
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C070C3Eu, 1);  /* 0C070C3C mov.b @Rm,Rn */
	r12 = 0x0u;  /* 0C070C3E mov #imm,Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C070C42u, 2);  /* 0C070C40 mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C070C42 extu.b Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C070C46u, 2);  /* 0C070C44 mov.l @(disp,Rm),Rn */
	r10 = r8;  /* 0C070C46 mov Rm,Rn */
	IF(0x0C070C48u); { u32 t_ = r9; PR = 0x0C070C4Cu; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C070C4Cu); }  /* 0C070C48 jsr @Rn */
L_0C070C4C: BLKS(0x0C070C4Cu);
	r6 = 0x86u; UPD(0x0C070C4Eu, 1);  /* 0C070C4C mov.w @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C070C4E tst Rm,Rn */
	r6 += r8;  /* 0C070C50 add Rm,Rn */
	{ u32 c_ = !T; W32(r14, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C070C60u, 5); goto L_0C070C60; } UPD(0x0C070C56u, 1); goto L_0C070C56; }  /* 0C070C52 bf/s */
L_0C070C56: BLKS(0x0C070C56u);
	{ W8(r13, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C070BECu, 3); goto L_0C070BEC; }  /* 0C070C56 bra */
L_0C070C60: BLKS(0x0C070C60u);
	r2 = R32(r14); UPD(0x0C070C62u, 1);  /* 0C070C60 mov.l @Rm,Rn */
	r0 = r12;  /* 0C070C62 mov Rm,Rn */
	r7 = 0xC181D00u; UPD(0x0C070C66u, 2);  /* 0C070C64 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C070C66 add Rm,Rn */
	r13 = 0xB4u; UPD(0x0C070C6Au, 2);  /* 0C070C68 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C070C6Cu, 1);  /* 0C070C6A mov.w @Rm,Rn */
	IF(0x0C070C6Cu); MACL = r11 * r13;  /* 0C070C6C mul.l Rm,Rn */
	IF(0x0C070C6Eu); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C070C70u, 3);  /* 0C070C6E mov.w @(r0,Rm),Rn */
	r9 = 0xC058060u; UPD(0x0C070C72u, 1);  /* 0C070C70 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C070C72 add Rm,Rn */
	r8 = (u32)(s32)(s16)r5;  /* 0C070C74 exts.w Rm,Rn */
	IF(0x0C070C76u); r13 = MACL;  /* 0C070C76 sts macl,Rn */
	r5 = 0x120000u; UPD(0x0C070C7Au, 4);  /* 0C070C78 mov.l @(disp,pc),Rn */
	IF(0x0C070C7Au); { u32 t_ = r9; PR = 0x0C070C7Eu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C070C7Eu); }  /* 0C070C7A jsr @Rn */
L_0C070C7E: BLKS(0x0C070C7Eu);
	r9 = R32(r10 + 0x24u); UPD(0x0C070C80u, 1);  /* 0C070C7E mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C070C80 mov Rm,Rn */
	r9 += r0;  /* 0C070C82 add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C070C86u, 3);  /* 0C070C84 mov.l @(disp,pc),Rn */
	r3 = 0x20000u; UPD(0x0C070C88u, 1);  /* 0C070C86 mov.l @(disp,pc),Rn */
	r5 = 0x140000u; UPD(0x0C070C8Au, 1);  /* 0C070C88 mov.l @(disp,pc),Rn */
	IF(0x0C070C8Au); { u32 t_ = r0; PR = 0x0C070C8Eu; r9 += r3; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C070C8Eu); }  /* 0C070C8A jsr @Rn */
L_0C070C8E: BLKS(0x0C070C8Eu);
	r6 = R32(r10 + 0x28u); UPD(0x0C070C90u, 1);  /* 0C070C8E mov.l @(disp,Rm),Rn */
	r7 = r8;  /* 0C070C90 mov Rm,Rn */
	r4 = 0x30000u; UPD(0x0C070C94u, 2);  /* 0C070C92 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C070C94 add #imm,Rn */
	r8 = 0xC0A81B0u; UPD(0x0C070C98u, 2);  /* 0C070C96 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C070C98 add Rm,Rn */
	W32(r15, r4); UPD(0x0C070C9Cu, 2);  /* 0C070C9A mov.l Rm,@Rn */
	r5 = r9;  /* 0C070C9C mov Rm,Rn */
	IF(0x0C070C9Eu); { u32 t_ = r8; PR = 0x0C070CA2u; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C070CA2u); }  /* 0C070C9E jsr @Rn */
L_0C070CA2: BLKS(0x0C070CA2u);
	r2 = r12;  /* 0C070CA2 mov Rm,Rn */
	r2 += 0x1u;  /* 0C070CA4 add #imm,Rn */
	r12 = (u32)(s32)(s16)r2;  /* 0C070CA6 exts.w Rm,Rn */
	r0 = 0x1u;  /* 0C070CA8 mov #imm,Rn */
	T = (s32)r12 > (s32)r0;  /* 0C070CAA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C070C60u, 8); goto L_0C070C60; } goto L_0C070CB0; }  /* 0C070CAC bf/s */
L_0C070CB0: BLKS(0x0C070CB0u);
	r12 = 0xC26CD40u; UPD(0x0C070CB2u, 2);  /* 0C070CB0 mov.l @(disp,pc),Rn */
	r10 = 0x9Cu; UPD(0x0C070CB4u, 1);  /* 0C070CB2 mov.w @(disp,pc),Rn */
	r12 += r13;  /* 0C070CB4 add Rm,Rn */
	r12 += r10;  /* 0C070CB6 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r12); UPD(0x0C070CBAu, 3);  /* 0C070CB8 mov.b @Rm,Rn */
	r11 += 0xFFFFFFFFu;  /* 0C070CBA add #imm,Rn */
	{ W8(r12, r11); /* slot mov.b Rm,@Rn */ UPD(0x0C070BECu, 4); goto L_0C070BEC; }  /* 0C070CBC bra */
L_0C070CC0: BLKS(0x0C070CC0u);
	r4 = 0x86u; UPD(0x0C070CC2u, 1);  /* 0C070CC0 mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C070CC2 add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r4); UPD(0x0C070CC6u, 2);  /* 0C070CC4 mov.w @Rm,Rn */
	r2 += 0x8u;  /* 0C070CC6 add #imm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C070CC8 exts.w Rm,Rn */
	r0 += 0x8u;  /* 0C070CCA add #imm,Rn */
	IF(0x0C070CCCu); r0 >>= 2;  /* 0C070CCC shlr2 Rn */
	r13 = 0xC0A0380u; UPD(0x0C070CD0u, 5);  /* 0C070CCE mov.l @(disp,pc),Rn */
	IF(0x0C070CD0u); r0 >>= 2;  /* 0C070CD0 shlr2 Rn */
	W16(r4, r2); UPD(0x0C070CD4u, 2);  /* 0C070CD2 mov.w Rm,@Rn */
	r0 &= 0x1Fu;  /* 0C070CD4 and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C070CD8u, 2);  /* 0C070CD6 mov.l Rm,@(disp,Rn) */
	IF(0x0C070CD8u); { u32 t_ = r13; PR = 0x0C070CDCu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C070CDCu); }  /* 0C070CD8 jsr @Rn */
L_0C070CDC: BLKS(0x0C070CDCu);
	{ IF(0x0C070CDEu); ; /* slot nop */ UPD(0x0C070BD2u, 3); goto L_0C070BD2; }  /* 0C070CDC bra */
}

void f_0C070D20(sh3_t *c)
{
	LOCALS;
L_0C070D20: BLKS(0x0C070D20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C070D22u, 1);  /* 0C070D20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C070D24u, 1);  /* 0C070D22 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C070D26u, 1);  /* 0C070D24 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C070D28u, 1);  /* 0C070D26 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C070D28 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C070D2Cu, 2);  /* 0C070D2A mov.l Rm,@-Rn */
	r9 = 0xB4u; UPD(0x0C070D2Eu, 1);  /* 0C070D2C mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C070D2E exts.w Rm,Rn */
	IF(0x0C070D30u); MACL = r12 * r9;  /* 0C070D30 mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C070D34u, 4);  /* 0C070D32 mov.l Rm,@-Rn */
	IF(0x0C070D34u); r8 = MACL;  /* 0C070D34 sts macl,Rn */
	IF(0x0C070D36u); MACL = r10 * r9;  /* 0C070D36 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C070D3Au, 4);  /* 0C070D38 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C070D3Cu, 1);  /* 0C070D3A mov.l @(disp,pc),Rn */
	IF(0x0C070D3Cu); r4 = MACL;  /* 0C070D3C sts macl,Rn */
	IF(0x0C070D3Eu); r15 -= 4; W32(r15, PR); UPD(0x0C070D40u, 2);  /* 0C070D3E sts.l pr,@-Rn */
	r8 += r0;  /* 0C070D40 add Rm,Rn */
	r4 += r0;  /* 0C070D42 add Rm,Rn */
	r6 = R32(r8); UPD(0x0C070D46u, 3);  /* 0C070D44 mov.l @Rm,Rn */
	r9 = r8;  /* 0C070D46 mov Rm,Rn */
	r7 = R32(r4); UPD(0x0C070D4Au, 2);  /* 0C070D48 mov.l @Rm,Rn */
	r14 = r15;  /* 0C070D4A mov Rm,Rn */
	r0 = 0x100u; UPD(0x0C070D4Eu, 2);  /* 0C070D4C mov.w @(disp,pc),Rn */
	r5 = 0xA8u; UPD(0x0C070D50u, 1);  /* 0C070D4E mov.w @(disp,pc),Rn */
	r7 &= r0;  /* 0C070D50 and Rm,Rn */
	r11 = 0xFFFFFEFFu; UPD(0x0C070D54u, 2);  /* 0C070D52 mov.w @(disp,pc),Rn */
	r9 += r5;  /* 0C070D54 add Rm,Rn */
	r6 &= r11;  /* 0C070D56 and Rm,Rn */
	r6 |= r7;  /* 0C070D58 or Rm,Rn */
	r5 += r4;  /* 0C070D5A add Rm,Rn */
	W32(r8, r6); UPD(0x0C070D5Eu, 5);  /* 0C070D5C mov.l Rm,@Rn */
	r5 += 0x1u;  /* 0C070D5E add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C070D62u, 2);  /* 0C070D60 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C070D62 add #imm,Rn */
	r2 = R32(r4); UPD(0x0C070D66u, 2);  /* 0C070D64 mov.l @Rm,Rn */
	T = (r2 & r0) == 0;  /* 0C070D66 tst Rm,Rn */
	{ u32 c_ = !T; W8(r9, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C070E10u, 4); goto L_0C070E10; } UPD(0x0C070D6Cu, 1); goto L_0C070D6C; }  /* 0C070D68 bf/s */
L_0C070D6C: BLKS(0x0C070D6Cu);
	r10 = 0xC0A9E40u; UPD(0x0C070D6Eu, 1);  /* 0C070D6C mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C070D6E mov Rm,Rn */
	r5 = 0x5Au;  /* 0C070D70 mov #imm,Rn */
	IF(0x0C070D72u); { u32 t_ = r10; PR = 0x0C070D76u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C070D76u); }  /* 0C070D72 jsr @Rn */
L_0C070D76: BLKS(0x0C070D76u);
	T = (r0 & r0) == 0;  /* 0C070D76 tst Rm,Rn */
	if (!T) { UPD(0x0C070D90u, 4); goto L_0C070D90; }  /* 0C070D78 bf */
L_0C070D7A: BLKS(0x0C070D7Au);
	r15 = r14;  /* 0C070D7A mov Rm,Rn */
	IF(0x0C070D7Cu); PR = R32(r15); r15 += 4; UPD(0x0C070D7Eu, 2);  /* 0C070D7C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C070D80u, 1);  /* 0C070D7E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C070D82u, 1);  /* 0C070D80 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C070D84u, 1);  /* 0C070D82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C070D86u, 1);  /* 0C070D84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C070D88u, 1);  /* 0C070D86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070D8Au, 1);  /* 0C070D88 mov.l @Rm+,Rn */
	IF(0x0C070D8Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C070D8A rts */
L_0C070D90: BLKS(0x0C070D90u);
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C070D92u, 1);  /* 0C070D90 mov.b @Rm,Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C070D94u, 1);  /* 0C070D92 mov.l @(disp,pc),Rn */
	r6 = r1 & 0xFF;  /* 0C070D94 extu.b Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C070D98u, 2);  /* 0C070D96 mov.l @(disp,Rm),Rn */
	IF(0x0C070D98u); { u32 t_ = r9; PR = 0x0C070D9Cu; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C070D9Cu); }  /* 0C070D98 jsr @Rn */
L_0C070D9C: BLKS(0x0C070D9Cu);
	T = (r0 & r0) == 0;  /* 0C070D9C tst Rm,Rn */
	if (T) { UPD(0x0C070D7Au, 4); goto L_0C070D7A; }  /* 0C070D9E bt */
L_0C070DA0: BLKS(0x0C070DA0u);
	r11 = 0x0u;  /* 0C070DA0 mov #imm,Rn */
	r13 = 0x86u; UPD(0x0C070DA4u, 2);  /* 0C070DA2 mov.w @(disp,pc),Rn */
	r10 = r8;  /* 0C070DA4 mov Rm,Rn */
	r13 += r8;  /* 0C070DA6 add Rm,Rn */
	UPD(0x0C070DA8u, 2);
L_0C070DA8: BLKS(0x0C070DA8u);
	r0 = r11;  /* 0C070DA8 mov Rm,Rn */
	r4 = 0xC181D04u; UPD(0x0C070DACu, 2);  /* 0C070DAA mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C070DAC add Rm,Rn */
	IF(0x0C070DAEu); r2 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C070DB0u, 2);  /* 0C070DAE mov.w @(r0,Rm),Rn */
	r7 = (u32)(s32)(s16)R16(r13); UPD(0x0C070DB2u, 1);  /* 0C070DB0 mov.w @Rm,Rn */
	r9 = 0xC058060u; UPD(0x0C070DB4u, 1);  /* 0C070DB2 mov.l @(disp,pc),Rn */
	r7 += r2;  /* 0C070DB4 add Rm,Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C070DB6 exts.w Rm,Rn */
	r5 = 0x80000u; UPD(0x0C070DBAu, 3);  /* 0C070DB8 mov.l @(disp,pc),Rn */
	IF(0x0C070DBAu); { u32 t_ = r9; PR = 0x0C070DBEu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C070DBEu); }  /* 0C070DBA jsr @Rn */
L_0C070DBE: BLKS(0x0C070DBEu);
	r9 = R32(r10 + 0x24u); UPD(0x0C070DC0u, 1);  /* 0C070DBE mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C070DC0 mov Rm,Rn */
	r9 += r0;  /* 0C070DC2 add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C070DC6u, 3);  /* 0C070DC4 mov.l @(disp,pc),Rn */
	r6 = 0x40000u; UPD(0x0C070DC8u, 1);  /* 0C070DC6 mov.l @(disp,pc),Rn */
	r5 = 0x80000u; UPD(0x0C070DCAu, 1);  /* 0C070DC8 mov.l @(disp,pc),Rn */
	IF(0x0C070DCAu); { u32 t_ = r0; PR = 0x0C070DCEu; r9 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C070DCEu); }  /* 0C070DCA jsr @Rn */
L_0C070DCE: BLKS(0x0C070DCEu);
	r6 = R32(r10 + 0x28u); UPD(0x0C070DD0u, 1);  /* 0C070DCE mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C070DD0 add #imm,Rn */
	r5 = 0x28000u; UPD(0x0C070DD4u, 2);  /* 0C070DD2 mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C070DD4 mov Rm,Rn */
	W32(r15, r5); UPD(0x0C070DD8u, 2);  /* 0C070DD6 mov.l Rm,@Rn */
	r6 += r0;  /* 0C070DD8 add Rm,Rn */
	r5 = r9;  /* 0C070DDA mov Rm,Rn */
	r9 = 0xC0A8510u; UPD(0x0C070DDEu, 3);  /* 0C070DDC mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C070DDE mov #imm,Rn */
	IF(0x0C070DE0u); { u32 t_ = r9; PR = 0x0C070DE4u; r8 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A8510, 0x0C0A8510u, 0x0C070DE4u); }  /* 0C070DE0 jsr @Rn */
L_0C070DE4: BLKS(0x0C070DE4u);
	r3 = r11;  /* 0C070DE4 mov Rm,Rn */
	r3 += 0x1u;  /* 0C070DE6 add #imm,Rn */
	r11 = (u32)(s32)(s16)r3;  /* 0C070DE8 exts.w Rm,Rn */
	T = (s32)r11 > (s32)r8;  /* 0C070DEA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C070DA8u, 7); goto L_0C070DA8; } goto L_0C070DF0; }  /* 0C070DEC bf/s */
L_0C070DF0: BLKS(0x0C070DF0u);
	r0 = 0xC0580D0u; UPD(0x0C070DF2u, 2);  /* 0C070DF0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C070DF2 mov Rm,Rn */
	r15 = r14;  /* 0C070DF4 mov Rm,Rn */
	IF(0x0C070DF6u); PR = R32(r15); r15 += 4; UPD(0x0C070DF8u, 3);  /* 0C070DF6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C070DFAu, 1);  /* 0C070DF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C070DFCu, 1);  /* 0C070DFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C070DFEu, 1);  /* 0C070DFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C070E00u, 1);  /* 0C070DFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C070E02u, 1);  /* 0C070E00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070E04u, 1);  /* 0C070E02 mov.l @Rm+,Rn */
	IF(0x0C070E04u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0580D0u: TAIL(f_0C0580D0); default: JUMPD(tv_); } }  /* 0C070E04 jmp @Rn */
L_0C070E10: BLKS(0x0C070E10u);
	r0 = R32(r8 + 0xCu); UPD(0x0C070E12u, 1);  /* 0C070E10 mov.l @(disp,Rm),Rn */
	r4 = 0xC181D10u; UPD(0x0C070E14u, 1);  /* 0C070E12 mov.l @(disp,pc),Rn */
	IF(0x0C070E14u); r0 <<= 2;  /* 0C070E14 shll2 Rn */
	r13 = 0xC0A0380u; UPD(0x0C070E18u, 2);  /* 0C070E16 mov.l @(disp,pc),Rn */
	IF(0x0C070E18u); r2 = R32(r0 + r4); UPD(0x0C070E1Au, 1);  /* 0C070E18 mov.l @(r0,Rm),Rn */
	r4 = r12;  /* 0C070E1A mov Rm,Rn */
	IF(0x0C070E1Cu); { u32 t_ = r13; PR = 0x0C070E20u; W32(r8 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C070E20u); }  /* 0C070E1C jsr @Rn */
L_0C070E20: BLKS(0x0C070E20u);
	{ IF(0x0C070E22u); ; /* slot nop */ UPD(0x0C070D6Cu, 3); goto L_0C070D6C; }  /* 0C070E20 bra */
}

void f_0C070E70(sh3_t *c)
{
	LOCALS;
	goto L_0C070E70;
L_0C070660: BLKS(0x0C070660u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C070662u, 1);  /* 0C070660 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C070662 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C070666u, 2);  /* 0C070664 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C070668u, 1);  /* 0C070666 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07066Au, 1);  /* 0C070668 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07066A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07066Eu, 2);  /* 0C07066C mov.l Rm,@-Rn */
	r4 = r10;  /* 0C07066E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C070672u, 2);  /* 0C070670 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C070674u, 1);  /* 0C070672 mov.l Rm,@-Rn */
	r8 = 0xC0A0670u; UPD(0x0C070676u, 1);  /* 0C070674 mov.l @(disp,pc),Rn */
	IF(0x0C070676u); r15 -= 4; W32(r15, PR); UPD(0x0C070678u, 1);  /* 0C070676 sts.l pr,@-Rn */
	IF(0x0C070678u); { u32 t_ = r8; PR = 0x0C07067Cu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C07067Cu); }  /* 0C070678 jsr @Rn */
L_0C07067C: BLKS(0x0C07067Cu);
	T = (r0 & r0) == 0;  /* 0C07067C tst Rm,Rn */
	if (!T) { UPD(0x0C0706A0u, 4); goto L_0C0706A0; }  /* 0C07067E bf */
L_0C070680: BLKS(0x0C070680u);
	r15 = r14;  /* 0C070680 mov Rm,Rn */
	IF(0x0C070682u); PR = R32(r15); r15 += 4; UPD(0x0C070684u, 2);  /* 0C070682 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C070686u, 1);  /* 0C070684 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C070688u, 1);  /* 0C070686 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07068Au, 1);  /* 0C070688 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07068Cu, 1);  /* 0C07068A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07068Eu, 1);  /* 0C07068C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070690u, 1);  /* 0C07068E mov.l @Rm+,Rn */
	IF(0x0C070690u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C070690 rts */
L_0C0706A0: BLKS(0x0C0706A0u);
	r8 = 0xC0A9E40u; UPD(0x0C0706A2u, 1);  /* 0C0706A0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0706A2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C0706A4 mov #imm,Rn */
	IF(0x0C0706A6u); { u32 t_ = r8; PR = 0x0C0706AAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0706AAu); }  /* 0C0706A6 jsr @Rn */
L_0C0706AA: BLKS(0x0C0706AAu);
	T = (r0 & r0) == 0;  /* 0C0706AA tst Rm,Rn */
	if (T) { UPD(0x0C070680u, 4); goto L_0C070680; }  /* 0C0706AC bt */
L_0C0706AE: BLKS(0x0C0706AEu);
	r4 = 0xB4u; UPD(0x0C0706B0u, 1);  /* 0C0706AE mov.w @(disp,pc),Rn */
	IF(0x0C0706B0u); MACL = r10 * r4;  /* 0C0706B0 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0706B4u, 3);  /* 0C0706B2 mov.l @(disp,pc),Rn */
	IF(0x0C0706B4u); r8 = MACL;  /* 0C0706B4 sts macl,Rn */
	r8 += r0;  /* 0C0706B6 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0706BAu, 3);  /* 0C0706B8 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0706BA mov Rm,Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C0706BEu, 2);  /* 0C0706BC mov.l @(disp,pc),Rn */
	IF(0x0C0706BEu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0706C0u, 1);  /* 0C0706BE mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0706C2u, 1);  /* 0C0706C0 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C0706C2 extu.b Rm,Rn */
	IF(0x0C0706C4u); { u32 t_ = r9; PR = 0x0C0706C8u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C0706C8u); }  /* 0C0706C4 jsr @Rn */
L_0C0706C8: BLKS(0x0C0706C8u);
	T = (r0 & r0) == 0;  /* 0C0706C8 tst Rm,Rn */
	if (T) { UPD(0x0C070680u, 4); goto L_0C070680; }  /* 0C0706CA bt */
L_0C0706CC: BLKS(0x0C0706CCu);
	r12 = 0x0u;  /* 0C0706CC mov #imm,Rn */
	r13 = 0x86u; UPD(0x0C0706D0u, 2);  /* 0C0706CE mov.w @(disp,pc),Rn */
	r11 = r8;  /* 0C0706D0 mov Rm,Rn */
	r13 += r8;  /* 0C0706D2 add Rm,Rn */
	UPD(0x0C0706D4u, 2);
L_0C0706D4: BLKS(0x0C0706D4u);
	r0 = r12;  /* 0C0706D4 mov Rm,Rn */
	r4 = 0xC181CC0u; UPD(0x0C0706D8u, 2);  /* 0C0706D6 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0706D8 add Rm,Rn */
	IF(0x0C0706DAu); r3 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C0706DCu, 2);  /* 0C0706DA mov.w @(r0,Rm),Rn */
	r2 = (u32)(s32)(s16)R16(r13); UPD(0x0C0706DEu, 1);  /* 0C0706DC mov.w @Rm,Rn */
	r9 = 0xC058060u; UPD(0x0C0706E0u, 1);  /* 0C0706DE mov.l @(disp,pc),Rn */
	r2 += r3;  /* 0C0706E0 add Rm,Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C0706E2 exts.w Rm,Rn */
	r5 = 0xF0000u; UPD(0x0C0706E6u, 3);  /* 0C0706E4 mov.l @(disp,pc),Rn */
	IF(0x0C0706E6u); { u32 t_ = r9; PR = 0x0C0706EAu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0706EAu); }  /* 0C0706E6 jsr @Rn */
L_0C0706EA: BLKS(0x0C0706EAu);
	r9 = R32(r11 + 0x24u); UPD(0x0C0706ECu, 1);  /* 0C0706EA mov.l @(disp,Rm),Rn */
	r9 += r0;  /* 0C0706EC add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C0706F0u, 2);  /* 0C0706EE mov.l @(disp,pc),Rn */
	r5 = 0x140000u; UPD(0x0C0706F2u, 1);  /* 0C0706F0 mov.l @(disp,pc),Rn */
	IF(0x0C0706F2u); { u32 t_ = r0; PR = 0x0C0706F6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0706F6u); }  /* 0C0706F2 jsr @Rn */
L_0C0706F6: BLKS(0x0C0706F6u);
	r6 = R32(r11 + 0x28u); UPD(0x0C0706F8u, 1);  /* 0C0706F6 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0706F8 add #imm,Rn */
	r7 = 0x28000u; UPD(0x0C0706FCu, 2);  /* 0C0706FA mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0706FC add Rm,Rn */
	W32(r15, r7); UPD(0x0C070700u, 2);  /* 0C0706FE mov.l Rm,@Rn */
	r5 = r9;  /* 0C070700 mov Rm,Rn */
	r7 = r8;  /* 0C070702 mov Rm,Rn */
	r8 = 0xC0A8A50u; UPD(0x0C070706u, 3);  /* 0C070704 mov.l @(disp,pc),Rn */
	IF(0x0C070706u); { u32 t_ = r8; PR = 0x0C07070Au; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8A50, 0x0C0A8A50u, 0x0C07070Au); }  /* 0C070706 jsr @Rn */
L_0C07070A: BLKS(0x0C07070Au);
	r6 = r12;  /* 0C07070A mov Rm,Rn */
	r6 += 0x1u;  /* 0C07070C add #imm,Rn */
	r12 = (u32)(s32)(s16)r6;  /* 0C07070E exts.w Rm,Rn */
	r5 = 0x2u;  /* 0C070710 mov #imm,Rn */
	T = (s32)r12 > (s32)r5;  /* 0C070712 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0706D4u, 8); goto L_0C0706D4; } goto L_0C070718; }  /* 0C070714 bf/s */
L_0C070718: BLKS(0x0C070718u);
	r0 = 0xC0580D0u; UPD(0x0C07071Au, 2);  /* 0C070718 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07071A mov Rm,Rn */
	r15 = r14;  /* 0C07071C mov Rm,Rn */
	IF(0x0C07071Eu); PR = R32(r15); r15 += 4; UPD(0x0C070720u, 3);  /* 0C07071E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C070722u, 1);  /* 0C070720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C070724u, 1);  /* 0C070722 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C070726u, 1);  /* 0C070724 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C070728u, 1);  /* 0C070726 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07072Au, 1);  /* 0C070728 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07072Cu, 1);  /* 0C07072A mov.l @Rm+,Rn */
	IF(0x0C07072Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0580D0u: TAIL(f_0C0580D0); default: JUMPD(tv_); } }  /* 0C07072C jmp @Rn */
L_0C070A60: BLKS(0x0C070A60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C070A62u, 1);  /* 0C070A60 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C070A62 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C070A66u, 2);  /* 0C070A64 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C070A68u, 1);  /* 0C070A66 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C070A6Au, 1);  /* 0C070A68 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C070A6Cu, 1);  /* 0C070A6A mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C070A6Eu, 1);  /* 0C070A6C mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C070A6E exts.w Rm,Rn */
	IF(0x0C070A70u); MACL = r12 * r2;  /* 0C070A70 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C070A74u, 4);  /* 0C070A72 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C070A76u, 1);  /* 0C070A74 mov.l @(disp,pc),Rn */
	IF(0x0C070A76u); r10 = MACL;  /* 0C070A76 sts macl,Rn */
	r11 = 0x9Cu; UPD(0x0C070A7Au, 2);  /* 0C070A78 mov.w @(disp,pc),Rn */
	r10 += r0;  /* 0C070A7A add Rm,Rn */
	IF(0x0C070A7Cu); r15 -= 4; W32(r15, PR); UPD(0x0C070A7Eu, 2);  /* 0C070A7C sts.l pr,@-Rn */
	r11 += r10;  /* 0C070A7E add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C070A82u, 2);  /* 0C070A80 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C070A82 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C070B20u, 4); goto L_0C070B20; } goto L_0C070A88; }  /* 0C070A84 bt/s */
L_0C070A88: BLKS(0x0C070A88u);
	r2 = r11;  /* 0C070A88 mov Rm,Rn */
	r2 += 0x1u;  /* 0C070A8A add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C070A8Eu, 4);  /* 0C070A8C mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C070A8E add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C070A90 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C070A92 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C070AB0u, 6); goto L_0C070AB0; } UPD(0x0C070A98u, 1); goto L_0C070A98; }  /* 0C070A94 bt/s */
L_0C070A98: BLKS(0x0C070A98u);
	r15 = r14;  /* 0C070A98 mov Rm,Rn */
	IF(0x0C070A9Au); PR = R32(r15); r15 += 4; UPD(0x0C070A9Cu, 2);  /* 0C070A9A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C070A9Eu, 1);  /* 0C070A9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C070AA0u, 1);  /* 0C070A9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C070AA2u, 1);  /* 0C070AA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C070AA4u, 1);  /* 0C070AA2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070AA6u, 1);  /* 0C070AA4 mov.l @Rm+,Rn */
	IF(0x0C070AA6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C070AA6 rts */
L_0C070AB0: BLKS(0x0C070AB0u);
	r5 = 0xA9u; UPD(0x0C070AB2u, 1);  /* 0C070AB0 mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C070AB2 mov #imm,Rn */
	r0 = r10;  /* 0C070AB4 mov Rm,Rn */
	IF(0x0C070AB6u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C070AB8u, 3);  /* 0C070AB6 mov.b @(r0,Rm),Rn */
	W8(r2, r6); UPD(0x0C070ABAu, 1);  /* 0C070AB8 mov.b Rm,@Rn */
	r8 = 0xC0A9BB0u; UPD(0x0C070ABCu, 1);  /* 0C070ABA mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C070ABC extu.b Rm,Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C070AC0u, 2);  /* 0C070ABE mov.l @(disp,Rm),Rn */
	IF(0x0C070AC0u); { u32 t_ = r8; PR = 0x0C070AC4u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C070AC4u); }  /* 0C070AC0 jsr @Rn */
L_0C070AC4: BLKS(0x0C070AC4u);
	T = (r0 & r0) == 0;  /* 0C070AC4 tst Rm,Rn */
	if (!T) { UPD(0x0C070AD0u, 4); goto L_0C070AD0; }  /* 0C070AC6 bf */
L_0C070AC8: BLKS(0x0C070AC8u);
	W8(r11, r0); UPD(0x0C070ACAu, 1);  /* 0C070AC8 mov.b Rm,@Rn */
	{ IF(0x0C070ACCu); ; /* slot nop */ UPD(0x0C070A98u, 3); goto L_0C070A98; }  /* 0C070ACA bra */
L_0C070AD0: BLKS(0x0C070AD0u);
	r3 = 0x86u; UPD(0x0C070AD2u, 1);  /* 0C070AD0 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C070AD2 mov Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C070AD6u, 2);  /* 0C070AD4 mov.l @(disp,pc),Rn */
	IF(0x0C070AD6u); r9 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C070AD8u, 1);  /* 0C070AD6 mov.w @(r0,Rm),Rn */
	r5 = 0x120000u; UPD(0x0C070ADAu, 1);  /* 0C070AD8 mov.l @(disp,pc),Rn */
	IF(0x0C070ADAu); { u32 t_ = r8; PR = 0x0C070ADEu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C070ADEu); }  /* 0C070ADA jsr @Rn */
L_0C070ADE: BLKS(0x0C070ADEu);
	r8 = R32(r10 + 0x24u); UPD(0x0C070AE0u, 1);  /* 0C070ADE mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C070AE0 mov Rm,Rn */
	r8 += r0;  /* 0C070AE2 add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C070AE6u, 3);  /* 0C070AE4 mov.l @(disp,pc),Rn */
	r2 = 0x40000u; UPD(0x0C070AE8u, 1);  /* 0C070AE6 mov.l @(disp,pc),Rn */
	r5 = 0x180000u; UPD(0x0C070AEAu, 1);  /* 0C070AE8 mov.l @(disp,pc),Rn */
	IF(0x0C070AEAu); { u32 t_ = r0; PR = 0x0C070AEEu; r8 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C070AEEu); }  /* 0C070AEA jsr @Rn */
L_0C070AEE: BLKS(0x0C070AEEu);
	r6 = R32(r10 + 0x28u); UPD(0x0C070AF0u, 1);  /* 0C070AEE mov.l @(disp,Rm),Rn */
	r7 = r9;  /* 0C070AF0 mov Rm,Rn */
	r6 += r0;  /* 0C070AF2 add Rm,Rn */
	r9 = 0xC0A9460u; UPD(0x0C070AF6u, 3);  /* 0C070AF4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C070AF6 add #imm,Rn */
	r0 = 0x30000u; UPD(0x0C070AFAu, 2);  /* 0C070AF8 mov.l @(disp,pc),Rn */
	r4 = 0x40u;  /* 0C070AFA mov #imm,Rn */
	W32(r15, r0); UPD(0x0C070AFEu, 2);  /* 0C070AFC mov.l Rm,@Rn */
	IF(0x0C070AFEu); { u32 t_ = r9; PR = 0x0C070B02u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9460, 0x0C0A9460u, 0x0C070B02u); }  /* 0C070AFE jsr @Rn */
L_0C070B02: BLKS(0x0C070B02u);
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C070B04u, 1);  /* 0C070B02 mov.b @Rm,Rn */
	r15 += 0x4u;  /* 0C070B04 add #imm,Rn */
	r10 += 0xFFFFFFFFu;  /* 0C070B06 add #imm,Rn */
	r7 = r10 & 0xFF;  /* 0C070B08 extu.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C070B0A tst Rm,Rn */
	{ u32 c_ = !T; W8(r11, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C070A98u, 7); goto L_0C070A98; } UPD(0x0C070B10u, 1); goto L_0C070B10; }  /* 0C070B0C bf/s */
L_0C070B10: BLKS(0x0C070B10u);
	r11 = 0xC0580D0u; UPD(0x0C070B12u, 1);  /* 0C070B10 mov.l @(disp,pc),Rn */
	IF(0x0C070B12u); { u32 t_ = r11; PR = 0x0C070B16u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C070B16u); }  /* 0C070B12 jsr @Rn */
L_0C070B16: BLKS(0x0C070B16u);
	{ IF(0x0C070B18u); ; /* slot nop */ UPD(0x0C070A98u, 3); goto L_0C070A98; }  /* 0C070B16 bra */
L_0C070B20: BLKS(0x0C070B20u);
	r8 = 0xC0A0670u; UPD(0x0C070B22u, 1);  /* 0C070B20 mov.l @(disp,pc),Rn */
	IF(0x0C070B22u); { u32 t_ = r8; PR = 0x0C070B26u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C070B26u); }  /* 0C070B22 jsr @Rn */
L_0C070B26: BLKS(0x0C070B26u);
	T = (r0 & r0) == 0;  /* 0C070B26 tst Rm,Rn */
	if (T) { UPD(0x0C070A98u, 4); goto L_0C070A98; }  /* 0C070B28 bt */
L_0C070B2A: BLKS(0x0C070B2Au);
	r4 = r12;  /* 0C070B2A mov Rm,Rn */
	r9 = 0xC0A9E40u; UPD(0x0C070B2Eu, 2);  /* 0C070B2C mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C070B2E mov #imm,Rn */
	IF(0x0C070B30u); { u32 t_ = r9; PR = 0x0C070B34u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C070B34u); }  /* 0C070B30 jsr @Rn */
L_0C070B34: BLKS(0x0C070B34u);
	T = (r0 & r0) == 0;  /* 0C070B34 tst Rm,Rn */
	if (T) { UPD(0x0C070A98u, 4); goto L_0C070A98; }  /* 0C070B36 bt */
L_0C070B38: BLKS(0x0C070B38u);
	r3 = 0x3Cu;  /* 0C070B38 mov #imm,Rn */
	{ W8(r11, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C070A98u, 4); goto L_0C070A98; }  /* 0C070B3A bra */
L_0C070E70: BLKS(0x0C070E70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C070E72u, 1);  /* 0C070E70 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C070E74u, 1);  /* 0C070E72 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C070E76u, 1);  /* 0C070E74 mov.l Rm,@-Rn */
	r9 = 0x6u;  /* 0C070E76 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C070E7Au, 2);  /* 0C070E78 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C070E7A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C070E7Eu, 2);  /* 0C070E7C mov.l Rm,@-Rn */
	r11 = 0xB4u; UPD(0x0C070E80u, 1);  /* 0C070E7E mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C070E82u, 1);  /* 0C070E80 mov.l Rm,@-Rn */
	IF(0x0C070E82u); MACL = r10 * r11;  /* 0C070E82 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C070E86u, 3);  /* 0C070E84 mov.l Rm,@-Rn */
	r12 = 0xC26CD40u; UPD(0x0C070E88u, 1);  /* 0C070E86 mov.l @(disp,pc),Rn */
	IF(0x0C070E88u); r8 = MACL;  /* 0C070E88 sts macl,Rn */
	IF(0x0C070E8Au); r15 -= 4; W32(r15, PR); UPD(0x0C070E8Cu, 2);  /* 0C070E8A sts.l pr,@-Rn */
	r8 += r12;  /* 0C070E8C add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C070E90u, 2);  /* 0C070E8E mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFE0u;  /* 0C070E90 add #imm,Rn */
	T = r0 > r9;  /* 0C070E92 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C070E9Cu, 5); goto L_0C070E9C; } goto L_0C070E98; }  /* 0C070E94 bf/s */
L_0C070E98: BLKS(0x0C070E98u);
	{ IF(0x0C070E9Au); ; /* slot nop */ UPD(0x0C071170u, 4); goto L_0C071170; }  /* 0C070E98 bra */
L_0C070E9C: BLKS(0x0C070E9Cu);
	r13 = 0xC0A03F0u; UPD(0x0C070E9Eu, 1);  /* 0C070E9C mov.l @(disp,pc),Rn */
	IF(0x0C070E9Eu); { u32 t_ = r13; PR = 0x0C070EA2u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C070EA2u); }  /* 0C070E9E jsr @Rn */
L_0C070EA2: BLKS(0x0C070EA2u);
	IF(0x0C070EA2u); T = (s32)r0 >= 0;  /* 0C070EA2 cmp/pz Rn */
	{ u32 c_ = T; r7 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C070EACu, 4); goto L_0C070EAC; } goto L_0C070EA8; }  /* 0C070EA4 bt/s */
L_0C070EA8: BLKS(0x0C070EA8u);
	{ r6 = R32(r8 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C071000u, 4); goto L_0C071000; }  /* 0C070EA8 bra */
L_0C070EAC: BLKS(0x0C070EACu);
	IF(0x0C070EACu); MACL = r0 * r11;  /* 0C070EAC mul.l Rm,Rn */
	r5 = R32(r8 + 0x30u); UPD(0x0C070EB0u, 3);  /* 0C070EAE mov.l @(disp,Rm),Rn */
	IF(0x0C070EB0u); r6 = MACL;  /* 0C070EB0 sts macl,Rn */
	r6 += r12;  /* 0C070EB2 add Rm,Rn */
	r11 = R32(r6 + 0x24u); UPD(0x0C070EB6u, 3);  /* 0C070EB4 mov.l @(disp,Rm),Rn */
	r0 = R32(r6 + 0x28u); UPD(0x0C070EB8u, 1);  /* 0C070EB6 mov.l @(disp,Rm),Rn */
	r12 = R32(r8 + 0x2Cu); UPD(0x0C070EBAu, 1);  /* 0C070EB8 mov.l @(disp,Rm),Rn */
	r0 += r5;  /* 0C070EBA add Rm,Rn */
	r4 = R32(r8 + 0x8u); UPD(0x0C070EBEu, 2);  /* 0C070EBC mov.l @(disp,Rm),Rn */
	r11 += r12;  /* 0C070EBE add Rm,Rn */
	r4 += 0xFFFFFFE0u;  /* 0C070EC0 add #imm,Rn */
	W32(r8 + 0x24u, r11); UPD(0x0C070EC4u, 3);  /* 0C070EC2 mov.l Rm,@(disp,Rn) */
	T = r4 > r9;  /* 0C070EC4 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x28u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C070F2Cu, 4); goto L_0C070F2C; } UPD(0x0C070ECAu, 1); goto L_0C070ECA; }  /* 0C070EC6 bt/s */
L_0C070ECA: BLKS(0x0C070ECAu);
	r0 = 0xC070EE0u;  /* 0C070ECA mova @(disp,pc),r0 */
	r4 += r4;  /* 0C070ECC add Rm,Rn */
	IF(0x0C070ECEu); r2 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C070ED0u, 3);  /* 0C070ECE mov.w @(r0,Rm),Rn */
	IF(0x0C070ED0u); { u32 tv_ = (r2 + 0x0C070ED4u); u32 t_ = PHYS(tv_); IF(0x0C070ED2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C070EF0u: goto L_0C070EF0; case 0x0C070F10u: goto L_0C070F10; case 0x0C070F20u: goto L_0C070F20; case 0x0C070FC0u: goto L_0C070FC0; case 0x0C070FD0u: goto L_0C070FD0; case 0x0C070FE0u: goto L_0C070FE0; case 0x0C070FF0u: goto L_0C070FF0; default: JUMPD(tv_); } }  /* 0C070ED0 braf Rn */
L_0C070EF0: BLKS(0x0C070EF0u);
	r1 = 0xC070770u; UPD(0x0C070EF2u, 1);  /* 0C070EF0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C070EF2 mov Rm,Rn */
	r5 = r7;  /* 0C070EF4 mov Rm,Rn */
	UPD(0x0C070EF6u, 2);
L_0C070EF6: BLKS(0x0C070EF6u);
	r15 = r14;  /* 0C070EF6 mov Rm,Rn */
	IF(0x0C070EF8u); PR = R32(r15); r15 += 4; UPD(0x0C070EFAu, 2);  /* 0C070EF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C070EFCu, 1);  /* 0C070EFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C070EFEu, 1);  /* 0C070EFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C070F00u, 1);  /* 0C070EFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C070F02u, 1);  /* 0C070F00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C070F04u, 1);  /* 0C070F02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070F06u, 1);  /* 0C070F04 mov.l @Rm+,Rn */
	IF(0x0C070F06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C070660u: goto L_0C070660; case 0x0C070A60u: goto L_0C070A60; default: JUMPD(tv_); } }  /* 0C070F06 jmp @Rn */
L_0C070F10: BLKS(0x0C070F10u);
	r1 = 0xC070660u; UPD(0x0C070F12u, 1);  /* 0C070F10 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C070F12 mov Rm,Rn */
	{ r5 = r7; /* slot mov Rm,Rn */ UPD(0x0C070EF6u, 4); goto L_0C070EF6; }  /* 0C070F14 bra */
L_0C070F20: BLKS(0x0C070F20u);
	r13 = 0xC0A0670u; UPD(0x0C070F22u, 1);  /* 0C070F20 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C070F22 mov Rm,Rn */
	IF(0x0C070F24u); { u32 t_ = r13; PR = 0x0C070F28u; r5 = r7; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0670, 0x0C0A0670u, 0x0C070F28u); }  /* 0C070F24 jsr @Rn */
L_0C070F28: BLKS(0x0C070F28u);
	T = (r0 & r0) == 0;  /* 0C070F28 tst Rm,Rn */
	if (!T) { UPD(0x0C070F40u, 4); goto L_0C070F40; }  /* 0C070F2A bf */
L_0C070F2C: BLKS(0x0C070F2Cu);
	r15 = r14;  /* 0C070F2C mov Rm,Rn */
	IF(0x0C070F2Eu); PR = R32(r15); r15 += 4; UPD(0x0C070F30u, 2);  /* 0C070F2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C070F32u, 1);  /* 0C070F30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C070F34u, 1);  /* 0C070F32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C070F36u, 1);  /* 0C070F34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C070F38u, 1);  /* 0C070F36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C070F3Au, 1);  /* 0C070F38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070F3Cu, 1);  /* 0C070F3A mov.l @Rm+,Rn */
	IF(0x0C070F3Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C070F3C rts */
L_0C070F40: BLKS(0x0C070F40u);
	r8 = 0xC0A9E40u; UPD(0x0C070F42u, 1);  /* 0C070F40 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C070F42 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C070F44 mov #imm,Rn */
	IF(0x0C070F46u); { u32 t_ = r8; PR = 0x0C070F4Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C070F4Au); }  /* 0C070F46 jsr @Rn */
L_0C070F4A: BLKS(0x0C070F4Au);
	T = (r0 & r0) == 0;  /* 0C070F4A tst Rm,Rn */
	if (T) { UPD(0x0C070F2Cu, 4); goto L_0C070F2C; }  /* 0C070F4C bt */
L_0C070F4E: BLKS(0x0C070F4Eu);
	r0 = 0xB4u; UPD(0x0C070F50u, 1);  /* 0C070F4E mov.w @(disp,pc),Rn */
	IF(0x0C070F50u); MACL = r10 * r0;  /* 0C070F50 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C070F54u, 3);  /* 0C070F52 mov.l @(disp,pc),Rn */
	IF(0x0C070F54u); r11 = MACL;  /* 0C070F54 sts macl,Rn */
	r11 += r3;  /* 0C070F56 add Rm,Rn */
	r4 = 0xA9u; UPD(0x0C070F5Au, 3);  /* 0C070F58 mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C070F5A mov Rm,Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C070F5Eu, 2);  /* 0C070F5C mov.l @(disp,pc),Rn */
	IF(0x0C070F5Eu); r7 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C070F60u, 1);  /* 0C070F5E mov.b @(r0,Rm),Rn */
	r5 = R32(r11 + 0x28u); UPD(0x0C070F62u, 1);  /* 0C070F60 mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C070F62 extu.b Rm,Rn */
	IF(0x0C070F64u); { u32 t_ = r9; PR = 0x0C070F68u; r4 = R32(r11 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C070F68u); }  /* 0C070F64 jsr @Rn */
L_0C070F68: BLKS(0x0C070F68u);
	T = (r0 & r0) == 0;  /* 0C070F68 tst Rm,Rn */
	if (T) { UPD(0x0C070F2Cu, 4); goto L_0C070F2C; }  /* 0C070F6A bt */
L_0C070F6C: BLKS(0x0C070F6Cu);
	r0 = r11;  /* 0C070F6C mov Rm,Rn */
	r2 = 0x86u; UPD(0x0C070F70u, 2);  /* 0C070F6E mov.w @(disp,pc),Rn */
	r9 = 0xC058060u; UPD(0x0C070F72u, 1);  /* 0C070F70 mov.l @(disp,pc),Rn */
	IF(0x0C070F72u); r12 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C070F74u, 1);  /* 0C070F72 mov.w @(r0,Rm),Rn */
	r5 = 0x138000u; UPD(0x0C070F76u, 1);  /* 0C070F74 mov.l @(disp,pc),Rn */
	IF(0x0C070F76u); { u32 t_ = r9; PR = 0x0C070F7Au; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C070F7Au); }  /* 0C070F76 jsr @Rn */
L_0C070F7A: BLKS(0x0C070F7Au);
	r13 = R32(r11 + 0x24u); UPD(0x0C070F7Cu, 1);  /* 0C070F7A mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C070F7C mov Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C070F80u, 2);  /* 0C070F7E mov.l @(disp,pc),Rn */
	r13 += r0;  /* 0C070F80 add Rm,Rn */
	r6 = 0x10000u; UPD(0x0C070F84u, 2);  /* 0C070F82 mov.l @(disp,pc),Rn */
	r5 = 0x1A0000u; UPD(0x0C070F86u, 1);  /* 0C070F84 mov.l @(disp,pc),Rn */
	IF(0x0C070F86u); { u32 t_ = r8; PR = 0x0C070F8Au; r13 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C070F8Au); }  /* 0C070F86 jsr @Rn */
L_0C070F8A: BLKS(0x0C070F8Au);
	r6 = R32(r11 + 0x28u); UPD(0x0C070F8Cu, 1);  /* 0C070F8A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C070F8C add #imm,Rn */
	r5 = 0x40000u; UPD(0x0C070F90u, 2);  /* 0C070F8E mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C070F90 mov #imm,Rn */
	r11 = 0xC0A8E70u; UPD(0x0C070F94u, 2);  /* 0C070F92 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C070F94 add Rm,Rn */
	W32(r15, r5); UPD(0x0C070F98u, 2);  /* 0C070F96 mov.l Rm,@Rn */
	r7 = r12;  /* 0C070F98 mov Rm,Rn */
	IF(0x0C070F9Au); { u32 t_ = r11; PR = 0x0C070F9Eu; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A8E70, 0x0C0A8E70u, 0x0C070F9Eu); }  /* 0C070F9A jsr @Rn */
L_0C070F9E: BLKS(0x0C070F9Eu);
	r1 = 0xC0580D0u; UPD(0x0C070FA0u, 1);  /* 0C070F9E mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C070FA0 add #imm,Rn */
	r4 = r10;  /* 0C070FA2 mov Rm,Rn */
	UPD(0x0C070FA4u, 2);
L_0C070FA4: BLKS(0x0C070FA4u);
	r15 = r14;  /* 0C070FA4 mov Rm,Rn */
	IF(0x0C070FA6u); PR = R32(r15); r15 += 4; UPD(0x0C070FA8u, 2);  /* 0C070FA6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C070FAAu, 1);  /* 0C070FA8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C070FACu, 1);  /* 0C070FAA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C070FAEu, 1);  /* 0C070FAC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C070FB0u, 1);  /* 0C070FAE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C070FB2u, 1);  /* 0C070FB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C070FB4u, 1);  /* 0C070FB2 mov.l @Rm+,Rn */
	IF(0x0C070FB4u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A03B0u: TAIL(f_0C0A03B0); case 0x0C0A0A10u: TAIL(f_0C0A0A10); default: JUMPD(tv_); } }  /* 0C070FB4 jmp @Rn */
L_0C070FC0: BLKS(0x0C070FC0u);
	r1 = 0xC070920u; UPD(0x0C070FC2u, 1);  /* 0C070FC0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C070FC2 mov Rm,Rn */
	{ r5 = r7; /* slot mov Rm,Rn */ UPD(0x0C070EF6u, 4); goto L_0C070EF6; }  /* 0C070FC4 bra */
L_0C070FD0: BLKS(0x0C070FD0u);
	r1 = 0xC070A60u; UPD(0x0C070FD2u, 1);  /* 0C070FD0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C070FD2 mov Rm,Rn */
	{ r5 = r7; /* slot mov Rm,Rn */ UPD(0x0C070EF6u, 4); goto L_0C070EF6; }  /* 0C070FD4 bra */
L_0C070FE0: BLKS(0x0C070FE0u);
	r1 = 0xC070B80u; UPD(0x0C070FE2u, 1);  /* 0C070FE0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C070FE2 mov Rm,Rn */
	{ r5 = r7; /* slot mov Rm,Rn */ UPD(0x0C070EF6u, 4); goto L_0C070EF6; }  /* 0C070FE4 bra */
L_0C070FF0: BLKS(0x0C070FF0u);
	r1 = 0xC070D20u; UPD(0x0C070FF2u, 1);  /* 0C070FF0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C070FF2 mov Rm,Rn */
	{ r5 = r7; /* slot mov Rm,Rn */ UPD(0x0C070EF6u, 4); goto L_0C070EF6; }  /* 0C070FF4 bra */
L_0C071000: BLKS(0x0C071000u);
	r6 += 0xFFFFFFE0u;  /* 0C071000 add #imm,Rn */
	T = r6 > r9;  /* 0C071002 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r4 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07100Cu, 5); goto L_0C07100C; } goto L_0C071008; }  /* 0C071004 bf/s */
L_0C071008: BLKS(0x0C071008u);
	{ IF(0x0C07100Au); ; /* slot nop */ UPD(0x0C071160u, 4); goto L_0C071160; }  /* 0C071008 bra */
L_0C07100C: BLKS(0x0C07100Cu);
	IF(0x0C07100Cu); { u32 t_ = r13; PR = 0x0C071010u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C071010u); }  /* 0C07100C jsr @Rn */
L_0C071010: BLKS(0x0C071010u);
	IF(0x0C071010u); T = (s32)r0 >= 0;  /* 0C071010 cmp/pz Rn */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0710F0u, 4); goto L_0C0710F0; } goto L_0C071016; }  /* 0C071012 bf/s */
L_0C071016: BLKS(0x0C071016u);
	r11 = 0xC050D70u; UPD(0x0C071018u, 2);  /* 0C071016 mov.l @(disp,pc),Rn */
	IF(0x0C071018u); { u32 t_ = r11; PR = 0x0C07101Cu; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C07101Cu); }  /* 0C071018 jsr @Rn */
L_0C07101C: BLKS(0x0C07101Cu);
	T = r0 == 0x2u;  /* 0C07101C cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0710D0u, 4); goto L_0C0710D0; }  /* 0C07101E bt */
L_0C071020: BLKS(0x0C071020u);
	r12 = 0x2u;  /* 0C071020 mov #imm,Rn */
	T = (s32)r0 > (s32)r12;  /* 0C071022 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0710A0u, 5); goto L_0C0710A0; } goto L_0C071028; }  /* 0C071024 bt/s */
L_0C071028: BLKS(0x0C071028u);
	T = r0 == 0x1u;  /* 0C071028 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C071080u, 5); goto L_0C071080; }  /* 0C07102A bt */
L_0C07102C: BLKS(0x0C07102Cu);
	r5 = 0xB4u; UPD(0x0C07102Eu, 1);  /* 0C07102C mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07102E add #imm,Rn */
	IF(0x0C071030u); MACL = r10 * r5;  /* 0C071030 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C071034u, 4);  /* 0C071032 mov.l @(disp,pc),Rn */
	IF(0x0C071034u); r8 = MACL;  /* 0C071034 sts macl,Rn */
	r8 += r0;  /* 0C071036 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07103Au, 3);  /* 0C071038 mov.w @(disp,pc),Rn */
	r5 = 0xCu;  /* 0C07103A mov #imm,Rn */
	IF(0x0C07103Cu); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07103Eu, 2);  /* 0C07103C mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C07103E extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C071042u, 2);  /* 0C071040 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C071042 add #imm,Rn */
	IF(0x0C071044u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C071046u, 2);  /* 0C071044 mov.b @(r0,Rm),Rn */
	r13 = r3 & 0xFF;  /* 0C071046 extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C07104Au, 2);  /* 0C071048 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C07104Cu, 1);  /* 0C07104A mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C07104Eu, 1);  /* 0C07104C mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C071050u, 1);  /* 0C07104E mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C071052u, 1);  /* 0C071050 mov.l @(disp,Rm),Rn */
L_0C071052: BLKS(0x0C071052u);
	IF(0x0C071052u); { u32 t_ = r0; PR = 0x0C071056u; IF(0x0C071054u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C071056u); }  /* 0C071052 jsr @Rn */
L_0C071056: BLKS(0x0C071056u);
	r4 = 0xB4u; UPD(0x0C071058u, 1);  /* 0C071056 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C071058 add #imm,Rn */
	IF(0x0C07105Au); MACL = r9 * r4;  /* 0C07105A mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C07105Eu, 4);  /* 0C07105C mov.l @(disp,pc),Rn */
	IF(0x0C07105Eu); r9 = MACL;  /* 0C07105E sts macl,Rn */
	r9 += r8;  /* 0C071060 add Rm,Rn */
	r3 = R32(r9); UPD(0x0C071064u, 3);  /* 0C071062 mov.l @Rm,Rn */
	IF(0x0C071064u); MACL = r10 * r4;  /* 0C071064 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C071068u, 3);  /* 0C071066 mov.l @(disp,pc),Rn */
	r3 |= r1;  /* 0C071068 or Rm,Rn */
	W32(r9, r3); UPD(0x0C07106Cu, 2);  /* 0C07106A mov.l Rm,@Rn */
	IF(0x0C07106Cu); r0 = MACL;  /* 0C07106C sts macl,Rn */
	r10 = 0x0u;  /* 0C07106E mov #imm,Rn */
	{ IF(0x0C071072u); W32(r0 + r8, r10); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C070F2Cu, 5); goto L_0C070F2C; }  /* 0C071070 bra */
L_0C071080: BLKS(0x0C071080u);
	r0 = 0xB0u; UPD(0x0C071082u, 1);  /* 0C071080 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C071082 add #imm,Rn */
	IF(0x0C071084u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C071086u, 2);  /* 0C071084 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C071086 mov #imm,Rn */
	r12 = r13 & 0xFF;  /* 0C071088 extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C07108Cu, 3);  /* 0C07108A mov.l Rm,@Rn */
	r0 = r8;  /* 0C07108C mov Rm,Rn */
	r11 = 0xA9u; UPD(0x0C071090u, 2);  /* 0C07108E mov.w @(disp,pc),Rn */
	IF(0x0C071090u); r7 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C071092u, 1);  /* 0C071090 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C071092 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C071096u, 2);  /* 0C071094 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C071098u, 1);  /* 0C071096 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C07109Au, 1);  /* 0C071098 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07109Cu, 1);  /* 0C07109A mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C071052u, 3); goto L_0C071052; }  /* 0C07109C bra */
L_0C0710A0: BLKS(0x0C0710A0u);
	if (!T) { UPD(0x0C07102Cu, 3); goto L_0C07102C; }  /* 0C0710A0 bf */
L_0C0710A2: BLKS(0x0C0710A2u);
	r15 += 0xFFFFFFF8u;  /* 0C0710A2 add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0710A6u, 2);  /* 0C0710A4 mov.w @(disp,pc),Rn */
	IF(0x0C0710A6u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0710A8u, 1);  /* 0C0710A6 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C0710A8 mov #imm,Rn */
	r12 = r13 & 0xFF;  /* 0C0710AA extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C0710AEu, 3);  /* 0C0710AC mov.l Rm,@Rn */
	r0 = r8;  /* 0C0710AE mov Rm,Rn */
	r11 = 0xA9u; UPD(0x0C0710B2u, 2);  /* 0C0710B0 mov.w @(disp,pc),Rn */
	IF(0x0C0710B2u); r7 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0710B4u, 1);  /* 0C0710B2 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0710B4 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0710B8u, 2);  /* 0C0710B6 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0710BAu, 1);  /* 0C0710B8 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0710BCu, 1);  /* 0C0710BA mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0710BEu, 1);  /* 0C0710BC mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C071052u, 3); goto L_0C071052; }  /* 0C0710BE bra */
L_0C0710D0: BLKS(0x0C0710D0u);
	r0 = 0xB0u; UPD(0x0C0710D2u, 1);  /* 0C0710D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0710D2 add #imm,Rn */
	IF(0x0C0710D4u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0710D6u, 2);  /* 0C0710D4 mov.b @(r0,Rm),Rn */
	r0 = r5 & 0xFF;  /* 0C0710D6 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0710DAu, 2);  /* 0C0710D8 mov.l Rm,@Rn */
	r5 = 0xCu;  /* 0C0710DA mov #imm,Rn */
	r4 = 0xA9u; UPD(0x0C0710DEu, 2);  /* 0C0710DC mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0710DE mov Rm,Rn */
	IF(0x0C0710E0u); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0710E2u, 2);  /* 0C0710E0 mov.b @(r0,Rm),Rn */
	r3 = r2 & 0xFF;  /* 0C0710E2 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0710E6u, 2);  /* 0C0710E4 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C0710E8u, 1);  /* 0C0710E6 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0710EAu, 1);  /* 0C0710E8 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0710ECu, 1);  /* 0C0710EA mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C071052u, 3); goto L_0C071052; }  /* 0C0710EC bra */
L_0C0710F0: BLKS(0x0C0710F0u);
	r7 = 0x0u;  /* 0C0710F0 mov #imm,Rn */
	{ W32(r8, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C070F2Cu, 4); goto L_0C070F2C; }  /* 0C0710F2 bra */
L_0C071160: BLKS(0x0C071160u);
	r1 = 0xC0A0A10u; UPD(0x0C071162u, 1);  /* 0C071160 mov.l @(disp,pc),Rn */
	{ IF(0x0C071164u); ; /* slot nop */ UPD(0x0C070FA4u, 3); goto L_0C070FA4; }  /* 0C071162 bra */
L_0C071170: BLKS(0x0C071170u);
	r9 = 0xC0A1700u; UPD(0x0C071172u, 1);  /* 0C071170 mov.l @(disp,pc),Rn */
	IF(0x0C071172u); { u32 t_ = r9; PR = 0x0C071176u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C071176u); }  /* 0C071172 jsr @Rn */
L_0C071176: BLKS(0x0C071176u);
	r5 = 0xC0A1590u; UPD(0x0C071178u, 1);  /* 0C071176 mov.l @(disp,pc),Rn */
	IF(0x0C071178u); { u32 t_ = r5; PR = 0x0C07117Cu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1590, 0x0C0A1590u, 0x0C07117Cu); }  /* 0C071178 jsr @Rn */
L_0C07117C: BLKS(0x0C07117Cu);
	r4 = 0x86u; UPD(0x0C07117Eu, 1);  /* 0C07117C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07117E mov Rm,Rn */
	IF(0x0C071180u); r3 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C071182u, 2);  /* 0C071180 mov.w @(r0,Rm),Rn */
	r2 = 0x200u; UPD(0x0C071184u, 1);  /* 0C071182 mov.w @(disp,pc),Rn */
	r0 = 0x1Fu;  /* 0C071184 mov #imm,Rn */
	r3 += r2;  /* 0C071186 add Rm,Rn */
	IF(0x0C071188u); r3 >>= 8;  /* 0C071188 shlr8 Rn */
	IF(0x0C07118Au); r3 >>= 2;  /* 0C07118A shlr2 Rn */
	r3 &= r0;  /* 0C07118C and Rm,Rn */
	W32(r8 + 0x8u, r3); UPD(0x0C071190u, 6);  /* 0C07118E mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C071190 mov Rm,Rn */
	r8 += 0x50u;  /* 0C071192 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C071196u, 3);  /* 0C071194 mov.w @Rm,Rn */
	r8 += 0xFFFFFFB0u;  /* 0C071196 add #imm,Rn */
	r0 &= 0x3u;  /* 0C071198 and #imm,r0 */
	r1 = 0xC0A03B0u; UPD(0x0C07119Cu, 3);  /* 0C07119A mov.l @(disp,pc),Rn */
	{ W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C070FA4u, 3); goto L_0C070FA4; }  /* 0C07119C bra */
}

/* FUN_0c0711c0 */
void f_0C0711C0(sh3_t *c)
{
	LOCALS;
L_0C0711C0: BLKS(0x0C0711C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0711C2u, 1);  /* 0C0711C0 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s16)r7;  /* 0C0711C2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0711C6u, 2);  /* 0C0711C4 mov.l Rm,@-Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C0711C6 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0711CAu, 2);  /* 0C0711C8 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r6;  /* 0C0711CA exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0711CEu, 2);  /* 0C0711CC mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0711D0u, 1);  /* 0C0711CE mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0711D2u, 1);  /* 0C0711D0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0711D4u, 1);  /* 0C0711D2 mov.l Rm,@-Rn */
	IF(0x0C0711D4u); r15 -= 4; W32(r15, PR); UPD(0x0C0711D6u, 1);  /* 0C0711D4 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE8u;  /* 0C0711D6 add #imm,Rn */
	r14 = r15;  /* 0C0711D8 mov Rm,Rn */
	r2 = R32(r14 + 0x38u); UPD(0x0C0711DCu, 3);  /* 0C0711DA mov.l @(disp,Rm),Rn */
	W32(r14 + 0xCu, r0); UPD(0x0C0711DEu, 1);  /* 0C0711DC mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)r2;  /* 0C0711DE exts.w Rm,Rn */
	r2 = 0x5u;  /* 0C0711E0 mov #imm,Rn */
	W32(r14, r4); UPD(0x0C0711E4u, 3);  /* 0C0711E2 mov.l Rm,@Rn */
	T = (s32)r0 > (s32)r2;  /* 0C0711E4 cmp/gt Rm,Rn */
	W32(r14 + 0x4u, r3); UPD(0x0C0711E8u, 2);  /* 0C0711E6 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r14 + 0x8u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0711F0u, 3); goto L_0C0711F0; } UPD(0x0C0711ECu, 1); goto L_0C0711EC; }  /* 0C0711E8 bf/s */
L_0C0711EC: BLKS(0x0C0711ECu);
	{ IF(0x0C0711EEu); ; /* slot nop */ UPD(0x0C071320u, 3); goto L_0C071320; }  /* 0C0711EC bra */
L_0C0711F0: BLKS(0x0C0711F0u);
	r5 = 0xB4u; UPD(0x0C0711F2u, 1);  /* 0C0711F0 mov.w @(disp,pc),Rn */
	IF(0x0C0711F2u); r0 <<= 2;  /* 0C0711F2 shll2 Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C0711F6u, 2);  /* 0C0711F4 mov.l @(disp,Rm),Rn */
	r13 = 0x0u;  /* 0C0711F6 mov #imm,Rn */
	IF(0x0C0711F8u); MACL = r7 * r5;  /* 0C0711F8 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0711FCu, 4);  /* 0C0711FA mov.l @(disp,pc),Rn */
	IF(0x0C0711FCu); r4 = MACL;  /* 0C0711FC sts macl,Rn */
	r4 += r9;  /* 0C0711FE add Rm,Rn */
	W32(r14 + 0x10u, r4); UPD(0x0C071202u, 3);  /* 0C071200 mov.l Rm,@(disp,Rn) */
	r5 += 0xFFFFFFF4u;  /* 0C071202 add #imm,Rn */
	r11 = 0xC1869C0u; UPD(0x0C071206u, 2);  /* 0C071204 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C071206 add Rm,Rn */
	r12 = R32(r14 + 0xCu); UPD(0x0C07120Au, 2);  /* 0C071208 mov.l @(disp,Rm),Rn */
	r4 += 0x1u;  /* 0C07120A add #imm,Rn */
	r6 = R32(r14); UPD(0x0C07120Eu, 2);  /* 0C07120C mov.l @Rm,Rn */
	r12 += r12;  /* 0C07120E add Rm,Rn */
	IF(0x0C071210u); r10 = R32(r0 + r11); UPD(0x0C071212u, 2);  /* 0C071210 mov.l @(r0,Rm),Rn */
	r12 += r6;  /* 0C071212 add Rm,Rn */
	W32(r14 + 0x14u, r4); UPD(0x0C071216u, 2);  /* 0C071214 mov.l Rm,@(disp,Rn) */
	IF(0x0C071216u); ;  /* 0C071216 nop */
	UPD(0x0C071218u, 1);
L_0C071218: BLKS(0x0C071218u);
	T = (r13 & r13) == 0;  /* 0C071218 tst Rm,Rn */
	{ u32 c_ = T; { u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r11 = v_; } /* slot mov.w @Rm+,Rn */ if (c_) { UPD(0x0C071310u, 4); goto L_0C071310; } UPD(0x0C07121Eu, 1); goto L_0C07121E; }  /* 0C07121A bt/s */
L_0C07121E: BLKS(0x0C07121Eu);
	r10 += 0x4u;  /* 0C07121E add #imm,Rn */
	r8 = (u32)(s32)(s16)R16(r10); UPD(0x0C071222u, 2);  /* 0C071220 mov.w @Rm,Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C071224u, 1);  /* 0C071222 mov.l @(disp,Rm),Rn */
	r10 += 0xFFFFFFFCu;  /* 0C071224 add #imm,Rn */
	r2 = 0xB4u; UPD(0x0C071228u, 2);  /* 0C071226 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C071228 add Rm,Rn */
	IF(0x0C07122Au); MACL = r11 * r2;  /* 0C07122A mul.l Rm,Rn */
	r0 = R32(r14); UPD(0x0C07122Eu, 4);  /* 0C07122C mov.l @Rm,Rn */
	r8 += r8;  /* 0C07122E add Rm,Rn */
	IF(0x0C071230u); r1 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C071232u, 2);  /* 0C071230 mov.w @(r0,Rm),Rn */
	IF(0x0C071232u); r2 = MACL;  /* 0C071232 sts macl,Rn */
	UPD(0x0C071234u, 1);
L_0C071234: BLKS(0x0C071234u);
	r8 = 0xB4u; UPD(0x0C071236u, 1);  /* 0C071234 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C071236 mov #imm,Rn */
	IF(0x0C071238u); MACL = r11 * r8;  /* 0C071238 mul.l Rm,Rn */
	r6 = R32(r14 + 0x4u); UPD(0x0C07123Cu, 4);  /* 0C07123A mov.l @(disp,Rm),Rn */
	r0 = 0xC26CDBCu; UPD(0x0C07123Eu, 1);  /* 0C07123C mov.l @(disp,pc),Rn */
	IF(0x0C07123Eu); r9 = MACL;  /* 0C07123E sts macl,Rn */
	IF(0x0C071240u); W16(r0 + r2, r1); UPD(0x0C071242u, 2);  /* 0C071240 mov.w Rm,@(r0,Rn) */
	IF(0x0C071242u); MACL = r6 * r8;  /* 0C071242 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C071246u, 3);  /* 0C071244 mov.l @(disp,pc),Rn */
	IF(0x0C071246u); r8 = MACL;  /* 0C071246 sts macl,Rn */
	r8 += r1;  /* 0C071248 add Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07124Cu, 3);  /* 0C07124A mov.l @(disp,pc),Rn */
	r7 = R32(r10); UPD(0x0C07124Eu, 1);  /* 0C07124C mov.l @Rm,Rn */
	r9 += r0;  /* 0C07124E add Rm,Rn */
	r5 = R32(r8 + 0x4u); UPD(0x0C071252u, 2);  /* 0C071250 mov.l @(disp,Rm),Rn */
	W32(r9, r7); UPD(0x0C071254u, 1);  /* 0C071252 mov.l Rm,@Rn */
	W32(r9 + 0x4u, r5); UPD(0x0C071256u, 1);  /* 0C071254 mov.l Rm,@(disp,Rn) */
	r4 = R32(r10 + 0x8u); UPD(0x0C071258u, 1);  /* 0C071256 mov.l @(disp,Rm),Rn */
	r2 = 0xC0A02D0u; UPD(0x0C07125Au, 1);  /* 0C071258 mov.l @(disp,pc),Rn */
	W32(r9 + 0x8u, r4); UPD(0x0C07125Cu, 1);  /* 0C07125A mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r3); UPD(0x0C07125Eu, 1);  /* 0C07125C mov.l Rm,@(disp,Rn) */
	IF(0x0C07125Eu); { u32 t_ = r2; PR = 0x0C071262u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C071262u); }  /* 0C07125E jsr @Rn */
L_0C071262: BLKS(0x0C071262u);
	r0 = 0xC0A1530u; UPD(0x0C071264u, 1);  /* 0C071262 mov.l @(disp,pc),Rn */
	IF(0x0C071264u); { u32 t_ = r0; PR = 0x0C071268u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C071268u); }  /* 0C071264 jsr @Rn */
L_0C071268: BLKS(0x0C071268u);
	r0 = 0x86u; UPD(0x0C07126Au, 1);  /* 0C071268 mov.w @(disp,pc),Rn */
	T = (r13 & r13) == 0;  /* 0C07126A tst Rm,Rn */
	r7 = 0x100u; UPD(0x0C07126Eu, 2);  /* 0C07126C mov.w @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C071270u, 1);  /* 0C07126E mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C071272u, 1);  /* 0C071270 mov.l @(disp,Rm),Rn */
	IF(0x0C071272u); W16(r0 + r9, r7); UPD(0x0C071274u, 1);  /* 0C071272 mov.w Rm,@(r0,Rn) */
	W32(r9 + 0x24u, r6); UPD(0x0C071276u, 1);  /* 0C071274 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r9 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C071300u, 3); goto L_0C071300; } UPD(0x0C07127Au, 1); goto L_0C07127A; }  /* 0C071276 bt/s */
L_0C07127A: BLKS(0x0C07127Au);
	r3 = R32(r10 + 0xCu); UPD(0x0C07127Cu, 1);  /* 0C07127A mov.l @(disp,Rm),Rn */
	W32(r9 + 0x2Cu, r3); UPD(0x0C07127Eu, 1);  /* 0C07127C mov.l Rm,@(disp,Rn) */
	r2 = R32(r10 + 0x10u); UPD(0x0C071280u, 1);  /* 0C07127E mov.l @(disp,Rm),Rn */
	W32(r9 + 0x30u, r2); UPD(0x0C071282u, 1);  /* 0C071280 mov.l Rm,@(disp,Rn) */
L_0C071282: BLKS(0x0C071282u);
	r8 = 0xB4u; UPD(0x0C071284u, 1);  /* 0C071282 mov.w @(disp,pc),Rn */
	r10 += 0x14u;  /* 0C071284 add #imm,Rn */
	IF(0x0C071286u); MACL = r11 * r8;  /* 0C071286 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C07128Au, 4);  /* 0C071288 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C07128A mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r7 = v_; } UPD(0x0C07128Eu, 2);  /* 0C07128C mov.w @Rm+,Rn */
	IF(0x0C07128Eu); r8 = MACL;  /* 0C07128E sts macl,Rn */
	r0 = 0x88u; UPD(0x0C071292u, 2);  /* 0C071290 mov.w @(disp,pc),Rn */
	r8 += r1;  /* 0C071292 add Rm,Rn */
	IF(0x0C071294u); W16(r0 + r8, r7); UPD(0x0C071296u, 2);  /* 0C071294 mov.w Rm,@(r0,Rn) */
	r9 = 0xA0u; UPD(0x0C071298u, 1);  /* 0C071296 mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r6 = v_; } UPD(0x0C07129Au, 1);  /* 0C071298 mov.b @Rm+,Rn */
	r9 += r8;  /* 0C07129A add Rm,Rn */
	r9 += 0x1u;  /* 0C07129C add #imm,Rn */
	W8(r9, r6); UPD(0x0C0712A0u, 3);  /* 0C07129E mov.b Rm,@Rn */
	r8 += 0x50u;  /* 0C0712A0 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r11 = v_; } UPD(0x0C0712A4u, 2);  /* 0C0712A2 mov.b @Rm+,Rn */
	r9 += 0x1u;  /* 0C0712A4 add #imm,Rn */
	W8(r9, r11); UPD(0x0C0712A8u, 2);  /* 0C0712A6 mov.b Rm,@Rn */
	r3 = 0xB0u; UPD(0x0C0712AAu, 1);  /* 0C0712A8 mov.w @(disp,pc),Rn */
	r11 = r13;  /* 0C0712AA mov Rm,Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0712AEu, 2);  /* 0C0712AC mov.l @(disp,Rm),Rn */
	r11 += 0x1u;  /* 0C0712AE add #imm,Rn */
	W32(r8, r5); UPD(0x0C0712B2u, 2);  /* 0C0712B0 mov.l Rm,@Rn */
	r13 = (u32)(s32)(s16)r11;  /* 0C0712B2 exts.w Rm,Rn */
	IF(0x0C0712B4u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0712B6u, 2);  /* 0C0712B4 mov.b @(r0,Rm),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0712B6 add #imm,Rn */
	r0 = r8;  /* 0C0712B8 mov Rm,Rn */
	IF(0x0C0712BAu); W8(r0 + r3, r4); UPD(0x0C0712BCu, 3);  /* 0C0712BA mov.b Rm,@(r0,Rn) */
	r9 = 0xAu;  /* 0C0712BC mov #imm,Rn */
	r2 = R32(r14 + 0x14u); UPD(0x0C0712C0u, 2);  /* 0C0712BE mov.l @(disp,Rm),Rn */
	r3 += 0xFFFFFFF8u;  /* 0C0712C0 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0712C4u, 2);  /* 0C0712C2 mov.b @Rm,Rn */
	r3 += r8;  /* 0C0712C4 add Rm,Rn */
	r3 += 0x1u;  /* 0C0712C6 add #imm,Rn */
	r0 += 0x1u;  /* 0C0712C8 add #imm,Rn */
	W8(r3, r0); UPD(0x0C0712CCu, 4);  /* 0C0712CA mov.b Rm,@Rn */
	T = (s32)r13 > (s32)r9;  /* 0C0712CC cmp/gt Rm,Rn */
	r7 = 0xACu; UPD(0x0C0712D0u, 2);  /* 0C0712CE mov.w @(disp,pc),Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C0712D2u, 1);  /* 0C0712D0 mov.l @(disp,Rm),Rn */
	r8 += r7;  /* 0C0712D2 add Rm,Rn */
	r7 += r1;  /* 0C0712D4 add Rm,Rn */
	r7 += 0x1u;  /* 0C0712D6 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0712DAu, 4);  /* 0C0712D8 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0712DA add #imm,Rn */
	{ u32 c_ = !T; W8(r8, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C071218u, 4); goto L_0C071218; } UPD(0x0C0712E0u, 1); goto L_0C0712E0; }  /* 0C0712DC bf/s */
L_0C0712E0: BLKS(0x0C0712E0u);
	r14 += 0x18u;  /* 0C0712E0 add #imm,Rn */
	r15 = r14;  /* 0C0712E2 mov Rm,Rn */
	IF(0x0C0712E4u); PR = R32(r15); r15 += 4; UPD(0x0C0712E6u, 3);  /* 0C0712E4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0712E8u, 1);  /* 0C0712E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0712EAu, 1);  /* 0C0712E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0712ECu, 1);  /* 0C0712EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0712EEu, 1);  /* 0C0712EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0712F0u, 1);  /* 0C0712EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0712F2u, 1);  /* 0C0712F0 mov.l @Rm+,Rn */
	IF(0x0C0712F2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0712F2 rts */
L_0C071300: BLKS(0x0C071300u);
	r5 = R32(r14 + 0x3Cu); UPD(0x0C071302u, 1);  /* 0C071300 mov.l @(disp,Rm),Rn */
	r0 = 0x40u;  /* 0C071302 mov #imm,Rn */
	W32(r9 + 0x2Cu, r5); UPD(0x0C071306u, 2);  /* 0C071304 mov.l Rm,@(disp,Rn) */
	IF(0x0C071306u); r4 = R32(r0 + r14); UPD(0x0C071308u, 1);  /* 0C071306 mov.l @(r0,Rm),Rn */
	{ W32(r9 + 0x30u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C071282u, 3); goto L_0C071282; }  /* 0C071308 bra */
L_0C071310: BLKS(0x0C071310u);
	r4 = 0xB4u; UPD(0x0C071312u, 1);  /* 0C071310 mov.w @(disp,pc),Rn */
	r3 = R32(r14 + 0x8u); UPD(0x0C071314u, 1);  /* 0C071312 mov.l @(disp,Rm),Rn */
	IF(0x0C071314u); MACL = r11 * r4;  /* 0C071314 mul.l Rm,Rn */
	r0 = R32(r14); UPD(0x0C071318u, 3);  /* 0C071316 mov.l @Rm,Rn */
	r3 += r3;  /* 0C071318 add Rm,Rn */
	IF(0x0C07131Au); r1 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C07131Cu, 2);  /* 0C07131A mov.w @(r0,Rm),Rn */
	{ IF(0x0C07131Eu); r2 = MACL; /* slot sts macl,Rn */ UPD(0x0C071234u, 3); goto L_0C071234; }  /* 0C07131C bra */
L_0C071320: BLKS(0x0C071320u);
	r8 = 0xC050D70u; UPD(0x0C071322u, 1);  /* 0C071320 mov.l @(disp,pc),Rn */
	IF(0x0C071322u); { u32 t_ = r8; PR = 0x0C071326u; r4 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C071326u); }  /* 0C071322 jsr @Rn */
L_0C071326: BLKS(0x0C071326u);
	{ r0 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(0x0C0711F0u, 3); goto L_0C0711F0; }  /* 0C071326 bra */
}

/* FUN_0c071350 */
void f_0C071350(sh3_t *c)
{
	LOCALS;
L_0C071350: BLKS(0x0C071350u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C071352u, 1);  /* 0C071350 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C071354u, 1);  /* 0C071352 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C071356u, 1);  /* 0C071354 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C071358u, 1);  /* 0C071356 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07135Au, 1);  /* 0C071358 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07135Cu, 1);  /* 0C07135A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07135Eu, 1);  /* 0C07135C mov.l Rm,@-Rn */
	r9 = 0xC22C874u; UPD(0x0C071360u, 1);  /* 0C07135E mov.l @(disp,pc),Rn */
	IF(0x0C071360u); r15 -= 4; W32(r15, PR); UPD(0x0C071362u, 1);  /* 0C071360 sts.l pr,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C071364u, 1);  /* 0C071362 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE4u;  /* 0C071364 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C071368u, 2);  /* 0C071366 mov.w @Rm,Rn */
	r14 = r15;  /* 0C071368 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C07136Cu, 2);  /* 0C07136A mov.l @(disp,pc),Rn */
	IF(0x0C07136Cu); { u32 t_ = r8; PR = 0x0C071370u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C071370u); }  /* 0C07136C jsr @Rn */
L_0C071370: BLKS(0x0C071370u);
	T = (r0 & r0) == 0;  /* 0C071370 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0713A0u, 4); goto L_0C0713A0; } UPD(0x0C071376u, 1); goto L_0C071376; }  /* 0C071372 bf/s */
L_0C071376: BLKS(0x0C071376u);
	r14 += 0x1Cu;  /* 0C071376 add #imm,Rn */
	r15 = r14;  /* 0C071378 mov Rm,Rn */
	IF(0x0C07137Au); PR = R32(r15); r15 += 4; UPD(0x0C07137Cu, 3);  /* 0C07137A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07137Eu, 1);  /* 0C07137C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C071380u, 1);  /* 0C07137E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C071382u, 1);  /* 0C071380 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C071384u, 1);  /* 0C071382 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C071386u, 1);  /* 0C071384 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C071388u, 1);  /* 0C071386 mov.l @Rm+,Rn */
	IF(0x0C071388u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C071388 rts */
L_0C0713A0: BLKS(0x0C0713A0u);
	r8 = 0xC0606C0u; UPD(0x0C0713A2u, 1);  /* 0C0713A0 mov.l @(disp,pc),Rn */
	IF(0x0C0713A2u); { u32 t_ = r8; PR = 0x0C0713A6u; r4 = 0x1Bu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0713A6u); }  /* 0C0713A2 jsr @Rn */
L_0C0713A6: BLKS(0x0C0713A6u);
	T = (r0 & r0) == 0;  /* 0C0713A6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C071376u, 4); goto L_0C071376; } goto L_0C0713AC; }  /* 0C0713A8 bt/s */
L_0C0713AC: BLKS(0x0C0713ACu);
	r12 = 0xC2755BCu; UPD(0x0C0713AEu, 2);  /* 0C0713AC mov.l @(disp,pc),Rn */
	r11 = 0xB4u; UPD(0x0C0713B0u, 1);  /* 0C0713AE mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r2 = v_; } UPD(0x0C0713B2u, 1);  /* 0C0713B0 mov.w @Rm+,Rn */
	IF(0x0C0713B2u); MACL = r2 * r11;  /* 0C0713B2 mul.l Rm,Rn */
	r5 = 0xC286509u; UPD(0x0C0713B6u, 3);  /* 0C0713B4 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0713B8u, 1);  /* 0C0713B6 mov.w @Rm,Rn */
	IF(0x0C0713B8u); r11 = MACL;  /* 0C0713B8 sts macl,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0713BCu, 2);  /* 0C0713BA mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFFFF;  /* 0C0713BC extu.w Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C0713C0u, 2);  /* 0C0713BE mov.b @Rm,Rn */
	r11 += r6;  /* 0C0713C0 add Rm,Rn */
	W32(r11 + 0x4u, r0); UPD(0x0C0713C4u, 2);  /* 0C0713C2 mov.l Rm,@(disp,Rn) */
	r8 = 0xC28629Eu; UPD(0x0C0713C6u, 1);  /* 0C0713C4 mov.l @(disp,pc),Rn */
	r0 = 0x8Au; UPD(0x0C0713C8u, 1);  /* 0C0713C6 mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C0713CAu, 1);  /* 0C0713C8 mov.w @Rm,Rn */
	IF(0x0C0713CAu); W16(r0 + r11, r13); UPD(0x0C0713CCu, 1);  /* 0C0713CA mov.w Rm,@(r0,Rn) */
	r8 = 0x7u;  /* 0C0713CC mov #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0713CE add #imm,Rn */
	IF(0x0C0713D0u); W16(r0 + r11, r13); UPD(0x0C0713D2u, 3);  /* 0C0713D0 mov.w Rm,@(r0,Rn) */
	r8 += r14;  /* 0C0713D2 add Rm,Rn */
	r9 = 0xC0A02D0u; UPD(0x0C0713D6u, 2);  /* 0C0713D4 mov.l @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C0713D6 mov #imm,Rn */
	W32(r14, r2); UPD(0x0C0713DAu, 2);  /* 0C0713D8 mov.l Rm,@Rn */
	r3 = 0x80000014u; UPD(0x0C0713DCu, 1);  /* 0C0713DA mov.l @(disp,pc),Rn */
	W32(r11 + 0xCu, r13); UPD(0x0C0713DEu, 1);  /* 0C0713DC mov.l Rm,@(disp,Rn) */
	W32(r11, r3); UPD(0x0C0713E0u, 1);  /* 0C0713DE mov.l Rm,@Rn */
	W32(r11 + 0x8u, r13); UPD(0x0C0713E2u, 1);  /* 0C0713E0 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x4u, r7); UPD(0x0C0713E4u, 1);  /* 0C0713E2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0713E4u); { u32 t_ = r9; PR = 0x0C0713E8u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0713E8u); }  /* 0C0713E4 jsr @Rn */
L_0C0713E8: BLKS(0x0C0713E8u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0713EAu, 1);  /* 0C0713E8 mov.l @(disp,Rm),Rn */
	r5 = 0x4Cu;  /* 0C0713EA mov #imm,Rn */
	r10 = 0xC21F5E2u; UPD(0x0C0713EEu, 2);  /* 0C0713EC mov.l @(disp,pc),Rn */
	IF(0x0C0713EEu); MACL = r1 * r5;  /* 0C0713EE mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r10); UPD(0x0C0713F2u, 3);  /* 0C0713F0 mov.w @Rm,Rn */
	r3 = 0xC392D5Eu; UPD(0x0C0713F4u, 1);  /* 0C0713F2 mov.l @(disp,pc),Rn */
	IF(0x0C0713F4u); r10 = MACL;  /* 0C0713F4 sts macl,Rn */
	r7 = 0xC26CAE0u; UPD(0x0C0713F8u, 2);  /* 0C0713F6 mov.l @(disp,pc),Rn */
	IF(0x0C0713F8u); r6 <<= 16;  /* 0C0713F8 shll16 Rn */
	r10 += r7;  /* 0C0713FA add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C0713FEu, 3);  /* 0C0713FC mov.w @Rm,Rn */
	r2 = R32(r10 + 0x8u); UPD(0x0C071400u, 1);  /* 0C0713FE mov.l @(disp,Rm),Rn */
	IF(0x0C071400u); r4 <<= 16;  /* 0C071400 shll16 Rn */
	r0 = 0xC0A1530u; UPD(0x0C071404u, 2);  /* 0C071402 mov.l @(disp,pc),Rn */
	r6 -= r2;  /* 0C071404 sub Rm,Rn */
	W32(r11 + 0x28u, r4); UPD(0x0C071408u, 2);  /* 0C071406 mov.l Rm,@(disp,Rn) */
	r10 += 0x42u;  /* 0C071408 add #imm,Rn */
	W32(r11 + 0x24u, r6); UPD(0x0C07140Cu, 2);  /* 0C07140A mov.l Rm,@(disp,Rn) */
	IF(0x0C07140Cu); { u32 t_ = r0; PR = 0x0C071410u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C071410u); }  /* 0C07140C jsr @Rn */
L_0C071410: BLKS(0x0C071410u);
	r9 = (u32)(s32)(s8)R8(r8); UPD(0x0C071412u, 1);  /* 0C071410 mov.b @Rm,Rn */
	r0 = 0xB0u; UPD(0x0C071414u, 1);  /* 0C071412 mov.w @(disp,pc),Rn */
	r6 = 0xA8u; UPD(0x0C071416u, 1);  /* 0C071414 mov.w @(disp,pc),Rn */
	IF(0x0C071416u); W8(r0 + r11, r9); UPD(0x0C071418u, 1);  /* 0C071416 mov.b Rm,@(r0,Rn) */
	r6 += r11;  /* 0C071418 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C07141Cu, 2);  /* 0C07141A mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C07141C add #imm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C07141E add #imm,Rn */
	IF(0x0C071420u); W8(r0 + r11, r5); UPD(0x0C071422u, 3);  /* 0C071420 mov.b Rm,@(r0,Rn) */
	W8(r6, r5); UPD(0x0C071424u, 1);  /* 0C071422 mov.b Rm,@Rn */
	r2 = 0xC0A1780u; UPD(0x0C071426u, 1);  /* 0C071424 mov.l @(disp,pc),Rn */
	r7 = 0xC27DC20u; UPD(0x0C071428u, 1);  /* 0C071426 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C07142Au, 1);  /* 0C071428 mov.l @Rm,Rn */
	r5 = R32(r7); UPD(0x0C07142Cu, 1);  /* 0C07142A mov.l @Rm,Rn */
	IF(0x0C07142Cu); { u32 t_ = r2; PR = 0x0C071430u; W32(r14 + 0x18u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C071430u); }  /* 0C07142C jsr @Rn */
L_0C071430: BLKS(0x0C071430u);
	r4 = 0x8Cu; UPD(0x0C071432u, 1);  /* 0C071430 mov.w @(disp,pc),Rn */
	r3 = 0x94u; UPD(0x0C071434u, 1);  /* 0C071432 mov.w @(disp,pc),Rn */
	r4 += r11;  /* 0C071434 add Rm,Rn */
	r0 = 0x90u; UPD(0x0C071438u, 2);  /* 0C071436 mov.w @(disp,pc),Rn */
	r3 += r11;  /* 0C071438 add Rm,Rn */
	IF(0x0C07143Au); W32(r0 + r11, r13); UPD(0x0C07143Cu, 2);  /* 0C07143A mov.l Rm,@(r0,Rn) */
	W32(r11 + 0x30u, r13); UPD(0x0C07143Eu, 1);  /* 0C07143C mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x2Cu, r13); UPD(0x0C071440u, 1);  /* 0C07143E mov.l Rm,@(disp,Rn) */
	W32(r3, r13); UPD(0x0C071442u, 1);  /* 0C071440 mov.l Rm,@Rn */
	W32(r4, r13); UPD(0x0C071444u, 1);  /* 0C071442 mov.l Rm,@Rn */
	W32(r14 + 0x8u, r13); UPD(0x0C071446u, 1);  /* 0C071444 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x18u); UPD(0x0C071448u, 1);  /* 0C071446 mov.l @(disp,Rm),Rn */
	r13 = r11;  /* 0C071448 mov Rm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C07144Cu, 2);  /* 0C07144A mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C07144C mov #imm,Rn */
	IF(0x0C07144Eu); ;  /* 0C07144E nop */
	UPD(0x0C071450u, 2);
L_0C071450: BLKS(0x0C071450u);
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C071452u, 1);  /* 0C071450 mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C071454u, 1);  /* 0C071452 mov.w @(disp,pc),Rn */
	IF(0x0C071454u); MACL = r10 * r9;  /* 0C071454 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C071458u, 3);  /* 0C071456 mov.l @(disp,pc),Rn */
	IF(0x0C071458u); r9 = MACL;  /* 0C071458 sts macl,Rn */
	r9 += r8;  /* 0C07145A add Rm,Rn */
	r8 = 0xC1869D8u; UPD(0x0C07145Eu, 3);  /* 0C07145C mov.l @(disp,pc),Rn */
	r9 += 0x7Cu;  /* 0C07145E add #imm,Rn */
	r8 += r11;  /* 0C071460 add Rm,Rn */
	r8 += 0x4u;  /* 0C071462 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r8); UPD(0x0C071466u, 4);  /* 0C071464 mov.w @Rm,Rn */
	r11 += 0x18u;  /* 0C071466 add #imm,Rn */
	r0 = 0xC2755BCu; UPD(0x0C07146Au, 2);  /* 0C071468 mov.l @(disp,pc),Rn */
	r2 += r2;  /* 0C07146A add Rm,Rn */
	IF(0x0C07146Cu); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07146Eu, 2);  /* 0C07146C mov.w @(r0,Rm),Rn */
	r8 += 0xFFFFFFFCu;  /* 0C07146E add #imm,Rn */
	W16(r9, r7); UPD(0x0C071472u, 2);  /* 0C071470 mov.w Rm,@Rn */
	r2 = 0x0u;  /* 0C071472 mov #imm,Rn */
	r4 = 0xC22C874u; UPD(0x0C071476u, 2);  /* 0C071474 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFF84u;  /* 0C071476 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C07147Au, 2);  /* 0C071478 mov.w @Rm,Rn */
	r6 = R32(r8); UPD(0x0C07147Cu, 1);  /* 0C07147A mov.l @Rm,Rn */
	r5 = r0 & 0xFFFF;  /* 0C07147C extu.w Rm,Rn */
	W32(r9, r6); UPD(0x0C071480u, 2);  /* 0C07147E mov.l Rm,@Rn */
	r4 = r10;  /* 0C071480 mov Rm,Rn */
	W32(r9 + 0x4u, r5); UPD(0x0C071484u, 2);  /* 0C071482 mov.l Rm,@(disp,Rn) */
	r7 = 0xC0A02D0u; UPD(0x0C071486u, 1);  /* 0C071484 mov.l @(disp,pc),Rn */
	r3 = R32(r8 + 0x8u); UPD(0x0C071488u, 1);  /* 0C071486 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x8u, r3); UPD(0x0C07148Au, 1);  /* 0C071488 mov.l Rm,@(disp,Rn) */
	IF(0x0C07148Au); { u32 t_ = r7; PR = 0x0C07148Eu; W32(r9 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07148Eu); }  /* 0C07148A jsr @Rn */
L_0C07148E: BLKS(0x0C07148Eu);
	r0 = R32(r13 + 0x24u); UPD(0x0C071490u, 1);  /* 0C07148E mov.l @(disp,Rm),Rn */
	r3 = R32(r13 + 0x28u); UPD(0x0C071492u, 1);  /* 0C071490 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x24u, r0); UPD(0x0C071494u, 1);  /* 0C071492 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r3); UPD(0x0C071496u, 1);  /* 0C071494 mov.l Rm,@(disp,Rn) */
	r2 = R32(r8 + 0xCu); UPD(0x0C071498u, 1);  /* 0C071496 mov.l @(disp,Rm),Rn */
	r4 = 0x84u; UPD(0x0C07149Au, 1);  /* 0C071498 mov.w @(disp,pc),Rn */
	W32(r9 + 0x2Cu, r2); UPD(0x0C07149Cu, 1);  /* 0C07149A mov.l Rm,@(disp,Rn) */
	r4 += r9;  /* 0C07149C add Rm,Rn */
	r1 = R32(r14); UPD(0x0C0714A0u, 2);  /* 0C07149E mov.l @Rm,Rn */
	r4 += 0x2u;  /* 0C0714A0 add #imm,Rn */
	r6 = 0x4000u; UPD(0x0C0714A4u, 2);  /* 0C0714A2 mov.w @(disp,pc),Rn */
	r0 = 0xB4u; UPD(0x0C0714A6u, 1);  /* 0C0714A4 mov.w @(disp,pc),Rn */
	r7 = R32(r8 + 0x10u); UPD(0x0C0714A8u, 1);  /* 0C0714A6 mov.l @(disp,Rm),Rn */
	IF(0x0C0714A8u); MACL = r1 * r0;  /* 0C0714A8 mul.l Rm,Rn */
	W16(r4, r6); UPD(0x0C0714ACu, 3);  /* 0C0714AA mov.w Rm,@Rn */
	r8 += 0x14u;  /* 0C0714AC add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r6 = v_; } UPD(0x0C0714B0u, 2);  /* 0C0714AE mov.w @Rm+,Rn */
	r0 += 0xFFFFFFD4u;  /* 0C0714B0 add #imm,Rn */
	IF(0x0C0714B2u); W16(r0 + r9, r6); UPD(0x0C0714B4u, 2);  /* 0C0714B2 mov.w Rm,@(r0,Rn) */
	IF(0x0C0714B4u); r5 = MACL;  /* 0C0714B4 sts macl,Rn */
	W32(r14 + 0xCu, r5); UPD(0x0C0714B8u, 2);  /* 0C0714B6 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x30u, r7); UPD(0x0C0714BAu, 1);  /* 0C0714B8 mov.l Rm,@(disp,Rn) */
	r0 = 0xA0u; UPD(0x0C0714BCu, 1);  /* 0C0714BA mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r4 = v_; } UPD(0x0C0714BEu, 1);  /* 0C0714BC mov.b @Rm+,Rn */
	r0 += r9;  /* 0C0714BE add Rm,Rn */
	r0 += 0x1u;  /* 0C0714C0 add #imm,Rn */
	W8(r0, r4); UPD(0x0C0714C4u, 3);  /* 0C0714C2 mov.b Rm,@Rn */
	r9 += 0x50u;  /* 0C0714C4 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0714C8u, 2);  /* 0C0714C6 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0714C8 add #imm,Rn */
	r5 = 0xC0A1530u; UPD(0x0C0714CCu, 2);  /* 0C0714CA mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0714CC mov Rm,Rn */
	r8 = 0xFFFA0000u; UPD(0x0C0714D0u, 2);  /* 0C0714CE mov.l @(disp,pc),Rn */
	r10 = 0xCu;  /* 0C0714D0 mov #imm,Rn */
	W8(r0, r1); UPD(0x0C0714D4u, 2);  /* 0C0714D2 mov.b Rm,@Rn */
	IF(0x0C0714D4u); { u32 t_ = r5; PR = 0x0C0714D8u; W32(r9, r8); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0714D8u); }  /* 0C0714D4 jsr @Rn */
L_0C0714D8: BLKS(0x0C0714D8u);
	r0 = 0xB0u; UPD(0x0C0714DAu, 1);  /* 0C0714D8 mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFFB0u;  /* 0C0714DA add #imm,Rn */
	IF(0x0C0714DCu); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0714DEu, 2);  /* 0C0714DC mov.b @(r0,Rm),Rn */
	IF(0x0C0714DEu); W8(r0 + r9, r3); UPD(0x0C0714E0u, 1);  /* 0C0714DE mov.b Rm,@(r0,Rn) */
	r6 = 0xA8u; UPD(0x0C0714E2u, 1);  /* 0C0714E0 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0714E2 add #imm,Rn */
	r4 = r0;  /* 0C0714E4 mov Rm,Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C0714E8u, 3);  /* 0C0714E6 mov.l @(disp,Rm),Rn */
	r6 += r9;  /* 0C0714E8 add Rm,Rn */
	r4 += r13;  /* 0C0714EA add Rm,Rn */
	r9 += r0;  /* 0C0714EC add Rm,Rn */
	r4 += 0x1u;  /* 0C0714EE add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C0714F2u, 5);  /* 0C0714F0 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C0714F2 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C0714F6u, 2);  /* 0C0714F4 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0714F6 add #imm,Rn */
	W8(r9, r0); UPD(0x0C0714FAu, 2);  /* 0C0714F8 mov.b Rm,@Rn */
	W8(r6, r7); UPD(0x0C0714FCu, 1);  /* 0C0714FA mov.b Rm,@Rn */
	r8 = R32(r14 + 0x8u); UPD(0x0C0714FEu, 1);  /* 0C0714FC mov.l @(disp,Rm),Rn */
	r8 += 0x1u;  /* 0C0714FE add #imm,Rn */
	r9 = (u32)(s32)(s16)r8;  /* 0C071500 exts.w Rm,Rn */
	W32(r14 + 0x8u, r9); UPD(0x0C071504u, 3);  /* 0C071502 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x8u); UPD(0x0C071506u, 1);  /* 0C071504 mov.l @(disp,Rm),Rn */
	T = (s32)r1 > (s32)r10;  /* 0C071506 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C071450u, 4); goto L_0C071450; }  /* 0C071508 bf */
L_0C07150A: BLKS(0x0C07150Au);
	r12 = 0x8u;  /* 0C07150A mov #imm,Rn */
	r11 = 0xC286274u; UPD(0x0C07150Eu, 2);  /* 0C07150C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r11); UPD(0x0C071510u, 1);  /* 0C07150E mov.w @Rm,Rn */
	r13 = r0 & 0xFF;  /* 0C071510 extu.b Rm,Rn */
	T = r13 > r12;  /* 0C071512 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07151Cu, 5); goto L_0C07151C; } goto L_0C071518; }  /* 0C071514 bf/s */
L_0C071518: BLKS(0x0C071518u);
	{ r4 = 0x9u; /* slot mov #imm,Rn */ UPD(0x0C0716E0u, 4); goto L_0C0716E0; }  /* 0C071518 bra */
L_0C07151C: BLKS(0x0C07151Cu);
	r0 = r0 & 0xFF;  /* 0C07151C extu.b Rm,Rn */
	r5 = 0x8u;  /* 0C07151E mov #imm,Rn */
	T = (s32)r0 > (s32)r5;  /* 0C071520 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C071528u, 6); goto L_0C071528; }  /* 0C071522 bf */
L_0C071524: BLKS(0x0C071524u);
	{ IF(0x0C071526u); ; /* slot nop */ UPD(0x0C0716D0u, 3); goto L_0C0716D0; }  /* 0C071524 bra */
L_0C071528: BLKS(0x0C071528u);
	r6 = 0xC2755D8u; UPD(0x0C07152Au, 1);  /* 0C071528 mov.l @(disp,pc),Rn */
	r0 += 0x3Fu;  /* 0C07152A add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r6); UPD(0x0C07152Eu, 2);  /* 0C07152C mov.w @Rm,Rn */
	r13 = 0x0u;  /* 0C07152E mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C071532u, 2);  /* 0C071530 mov.w @(disp,pc),Rn */
	IF(0x0C071532u); MACL = r12 * r8;  /* 0C071532 mul.l Rm,Rn */
	r5 = 0xC2755C6u; UPD(0x0C071536u, 3);  /* 0C071534 mov.l @(disp,pc),Rn */
	r4 = 0xC26CD40u; UPD(0x0C071538u, 1);  /* 0C071536 mov.l @(disp,pc),Rn */
	IF(0x0C071538u); r8 = MACL;  /* 0C071538 sts macl,Rn */
	r3 = (u32)(s32)(s16)R16(r5); UPD(0x0C07153Cu, 2);  /* 0C07153A mov.w @Rm,Rn */
	r8 += r4;  /* 0C07153C add Rm,Rn */
	r8 += 0x7Cu;  /* 0C07153E add #imm,Rn */
	W16(r8, r3); UPD(0x0C071542u, 3);  /* 0C071540 mov.w Rm,@Rn */
	r4 = r12;  /* 0C071542 mov Rm,Rn */
	r10 = 0xC3000010u; UPD(0x0C071546u, 2);  /* 0C071544 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C071546 add #imm,Rn */
	W32(r8, r10); UPD(0x0C07154Au, 2);  /* 0C071548 mov.l Rm,@Rn */
	r9 = 0xC26CD40u; UPD(0x0C07154Cu, 1);  /* 0C07154A mov.l @(disp,pc),Rn */
	r10 = R32(r14 + 0xCu); UPD(0x0C07154Eu, 1);  /* 0C07154C mov.l @(disp,Rm),Rn */
	r11 = 0xC0A02D0u; UPD(0x0C071550u, 1);  /* 0C07154E mov.l @(disp,pc),Rn */
	r10 += r9;  /* 0C071550 add Rm,Rn */
	r2 = R32(r10 + 0x4u); UPD(0x0C071554u, 2);  /* 0C071552 mov.l @(disp,Rm),Rn */
	r9 = r10;  /* 0C071554 mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C071558u, 2);  /* 0C071556 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r0); UPD(0x0C07155Au, 1);  /* 0C071558 mov.l Rm,@(disp,Rn) */
	IF(0x0C07155Au); { u32 t_ = r11; PR = 0x0C07155Eu; W32(r8 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07155Eu); }  /* 0C07155A jsr @Rn */
L_0C07155E: BLKS(0x0C07155Eu);
	r4 = 0xFFE70000u; UPD(0x0C071560u, 1);  /* 0C07155E mov.l @(disp,pc),Rn */
	r11 = r8;  /* 0C071560 mov Rm,Rn */
	r7 = 0x84u; UPD(0x0C071564u, 2);  /* 0C071562 mov.w @(disp,pc),Rn */
	r0 = R32(r10 + 0x24u); UPD(0x0C071566u, 1);  /* 0C071564 mov.l @(disp,Rm),Rn */
	r7 += r8;  /* 0C071566 add Rm,Rn */
	r3 = 0xC0A1530u; UPD(0x0C07156Au, 2);  /* 0C071568 mov.l @(disp,pc),Rn */
	r7 += 0x2u;  /* 0C07156A add #imm,Rn */
	r1 = 0x100u; UPD(0x0C07156Eu, 2);  /* 0C07156C mov.w @(disp,pc),Rn */
	r6 = R32(r10 + 0x28u); UPD(0x0C071570u, 1);  /* 0C07156E mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r4); UPD(0x0C071572u, 1);  /* 0C071570 mov.l Rm,@(disp,Rn) */
	r5 = 0xFFEE0000u; UPD(0x0C071574u, 1);  /* 0C071572 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C071574 mov Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C071578u, 2);  /* 0C071576 mov.l Rm,@(disp,Rn) */
	r12 = r10;  /* 0C071578 mov Rm,Rn */
	W16(r7, r1); UPD(0x0C07157Cu, 2);  /* 0C07157A mov.w Rm,@Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C07157Eu, 1);  /* 0C07157C mov.l Rm,@(disp,Rn) */
	IF(0x0C07157Eu); { u32 t_ = r3; PR = 0x0C071582u; W32(r8 + 0x30u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C071582u); }  /* 0C07157E jsr @Rn */
L_0C071582: BLKS(0x0C071582u);
	r0 = 0xB0u; UPD(0x0C071584u, 1);  /* 0C071582 mov.w @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C071584 mov #imm,Rn */
	r9 += r0;  /* 0C071586 add Rm,Rn */
	W32(r14 + 0x14u, r9); UPD(0x0C07158Au, 3);  /* 0C071588 mov.l Rm,@(disp,Rn) */
	r13 = (u32)(s32)(s8)R8(r9); UPD(0x0C07158Cu, 1);  /* 0C07158A mov.b @Rm,Rn */
	IF(0x0C07158Cu); W8(r0 + r8, r13); UPD(0x0C07158Eu, 1);  /* 0C07158C mov.b Rm,@(r0,Rn) */
	r13 = 0xA8u; UPD(0x0C071590u, 1);  /* 0C07158E mov.w @(disp,pc),Rn */
	r12 += r13;  /* 0C071590 add Rm,Rn */
	r12 += 0x1u;  /* 0C071592 add #imm,Rn */
	r11 += r13;  /* 0C071594 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C071598u, 4);  /* 0C071596 mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C071598 add #imm,Rn */
	{ W8(r11, r2); /* slot mov.b Rm,@Rn */ UPD(0x0C071610u, 4); goto L_0C071610; }  /* 0C07159A bra */
L_0C071610: BLKS(0x0C071610u);
	r7 = 0xACu; UPD(0x0C071612u, 1);  /* 0C071610 mov.w @(disp,pc),Rn */
	r11 = r7;  /* 0C071612 mov Rm,Rn */
	r11 += r10;  /* 0C071614 add Rm,Rn */
	r11 += 0x1u;  /* 0C071616 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C07161Au, 4);  /* 0C071618 mov.b @Rm,Rn */
	r8 += r7;  /* 0C07161A add Rm,Rn */
	r8 += 0x1u;  /* 0C07161C add #imm,Rn */
	W8(r8, r0); UPD(0x0C071620u, 3);  /* 0C07161E mov.b Rm,@Rn */
	r1 = 0xC286274u; UPD(0x0C071622u, 1);  /* 0C071620 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r1); UPD(0x0C071624u, 1);  /* 0C071622 mov.w @Rm,Rn */
	r0 = r6 & 0xFF;  /* 0C071624 extu.b Rm,Rn */
	T = (s32)r0 > (s32)r4;  /* 0C071626 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0716C0u, 5); goto L_0C0716C0; }  /* 0C071628 bt */
L_0C07162A: BLKS(0x0C07162Au);
	r6 = 0xC2755D8u; UPD(0x0C07162Cu, 1);  /* 0C07162A mov.l @(disp,pc),Rn */
	r0 += 0x3Fu;  /* 0C07162C add #imm,Rn */
	r6 += 0x2u;  /* 0C07162E add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r6); UPD(0x0C071632u, 3);  /* 0C071630 mov.w @Rm,Rn */
	r2 = 0x0u;  /* 0C071632 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C071636u, 2);  /* 0C071634 mov.w @(disp,pc),Rn */
	IF(0x0C071636u); MACL = r9 * r8;  /* 0C071636 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C07163Au, 3);  /* 0C071638 mov.l @(disp,pc),Rn */
	r4 = 0xC2755C6u; UPD(0x0C07163Cu, 1);  /* 0C07163A mov.l @(disp,pc),Rn */
	IF(0x0C07163Cu); r8 = MACL;  /* 0C07163C sts macl,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C071640u, 2);  /* 0C07163E mov.w @Rm,Rn */
	r8 += r1;  /* 0C071640 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C071642 add #imm,Rn */
	W16(r8, r3); UPD(0x0C071646u, 3);  /* 0C071644 mov.w Rm,@Rn */
	r4 = r9;  /* 0C071646 mov Rm,Rn */
	r6 = 0xC0A02D0u; UPD(0x0C07164Au, 2);  /* 0C071648 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C07164A add #imm,Rn */
	r7 = R32(r10 + 0x4u); UPD(0x0C07164Eu, 2);  /* 0C07164C mov.l @(disp,Rm),Rn */
	r5 = 0xC3000010u; UPD(0x0C071650u, 1);  /* 0C07164E mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C071652u, 1);  /* 0C071650 mov.l Rm,@(disp,Rn) */
	W32(r8, r5); UPD(0x0C071654u, 1);  /* 0C071652 mov.l Rm,@Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C071656u, 1);  /* 0C071654 mov.l Rm,@(disp,Rn) */
	IF(0x0C071656u); { u32 t_ = r6; PR = 0x0C07165Au; W32(r8 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07165Au); }  /* 0C071656 jsr @Rn */
L_0C07165A: BLKS(0x0C07165Au);
	r4 = 0x84u; UPD(0x0C07165Cu, 1);  /* 0C07165A mov.w @(disp,pc),Rn */
	r1 = 0x100u; UPD(0x0C07165Eu, 1);  /* 0C07165C mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C07165E add Rm,Rn */
	r4 += 0x2u;  /* 0C071660 add #imm,Rn */
	r2 = 0xC0A1530u; UPD(0x0C071664u, 3);  /* 0C071662 mov.l @(disp,pc),Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C071666u, 1);  /* 0C071664 mov.l @(disp,Rm),Rn */
	r3 = R32(r10 + 0x28u); UPD(0x0C071668u, 1);  /* 0C071666 mov.l @(disp,Rm),Rn */
	W16(r4, r1); UPD(0x0C07166Au, 1);  /* 0C071668 mov.w Rm,@Rn */
	r7 = 0xFFE70000u; UPD(0x0C07166Cu, 1);  /* 0C07166A mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C07166C mov Rm,Rn */
	r0 = 0x120000u; UPD(0x0C071670u, 2);  /* 0C07166E mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C071672u, 1);  /* 0C071670 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r3); UPD(0x0C071674u, 1);  /* 0C071672 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r7); UPD(0x0C071676u, 1);  /* 0C071674 mov.l Rm,@(disp,Rn) */
	IF(0x0C071676u); { u32 t_ = r2; PR = 0x0C07167Au; W32(r8 + 0x30u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C07167Au); }  /* 0C071676 jsr @Rn */
L_0C07167A: BLKS(0x0C07167Au);
	r9 = R32(r14 + 0x14u); UPD(0x0C07167Cu, 1);  /* 0C07167A mov.l @(disp,Rm),Rn */
	r5 = r13;  /* 0C07167C mov Rm,Rn */
	r10 = 0xACu; UPD(0x0C071680u, 2);  /* 0C07167E mov.w @(disp,pc),Rn */
	r5 += r8;  /* 0C071680 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r12); UPD(0x0C071684u, 2);  /* 0C071682 mov.b @Rm,Rn */
	r10 += r8;  /* 0C071684 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C071688u, 2);  /* 0C071686 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C071688 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C07168Cu, 2);  /* 0C07168A mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C07168C add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C071690u, 2);  /* 0C07168E mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C071690 add #imm,Rn */
	IF(0x0C071692u); W8(r0 + r8, r6); UPD(0x0C071694u, 2);  /* 0C071692 mov.b Rm,@(r0,Rn) */
	W8(r5, r4); UPD(0x0C071696u, 1);  /* 0C071694 mov.b Rm,@Rn */
	r0 = 0x0u;  /* 0C071696 mov #imm,Rn */
	W8(r10, r3); UPD(0x0C07169Au, 2);  /* 0C071698 mov.b Rm,@Rn */
	r6 = 0x5u;  /* 0C07169A mov #imm,Rn */
	r1 = 0xC286274u; UPD(0x0C07169Eu, 2);  /* 0C07169C mov.l @(disp,pc),Rn */
	r7 = 0x220000u; UPD(0x0C0716A0u, 1);  /* 0C07169E mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s8)R8(r1); UPD(0x0C0716A2u, 1);  /* 0C0716A0 mov.b @Rm,Rn */
	r12 = 0xC0711C0u; UPD(0x0C0716A4u, 1);  /* 0C0716A2 mov.l @(disp,pc),Rn */
	r11 = r13 & 0xFF;  /* 0C0716A4 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0716A8u, 2);  /* 0C0716A6 mov.l Rm,@(disp,Rn) */
	r4 = 0xC2755D8u; UPD(0x0C0716AAu, 1);  /* 0C0716A8 mov.l @(disp,pc),Rn */
	r7 = 0x10u;  /* 0C0716AA mov #imm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C0716AEu, 2);  /* 0C0716AC mov.l Rm,@(disp,Rn) */
	r4 += 0xFFFFFFE4u;  /* 0C0716AE add #imm,Rn */
	W32(r15, r11); UPD(0x0C0716B2u, 2);  /* 0C0716B0 mov.l Rm,@Rn */
	IF(0x0C0716B2u); { u32 t_ = r12; PR = 0x0C0716B6u; r5 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0711C0, 0x0C0711C0u, 0x0C0716B6u); }  /* 0C0716B2 jsr @Rn */
L_0C0716B6: BLKS(0x0C0716B6u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C071376u, 3); goto L_0C071376; }  /* 0C0716B6 bra */
L_0C0716C0: BLKS(0x0C0716C0u);
	r9 = 0xC050D70u; UPD(0x0C0716C2u, 1);  /* 0C0716C0 mov.l @(disp,pc),Rn */
	IF(0x0C0716C2u); { u32 t_ = r9; PR = 0x0C0716C6u; r4 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0716C6u); }  /* 0C0716C2 jsr @Rn */
L_0C0716C6: BLKS(0x0C0716C6u);
	{ r0 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(0x0C07162Au, 3); goto L_0C07162A; }  /* 0C0716C6 bra */
L_0C0716D0: BLKS(0x0C0716D0u);
	r12 = 0xC050D70u; UPD(0x0C0716D2u, 1);  /* 0C0716D0 mov.l @(disp,pc),Rn */
	IF(0x0C0716D2u); { u32 t_ = r12; PR = 0x0C0716D6u; r4 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0716D6u); }  /* 0C0716D2 jsr @Rn */
L_0C0716D6: BLKS(0x0C0716D6u);
	{ r0 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(0x0C071528u, 3); goto L_0C071528; }  /* 0C0716D6 bra */
L_0C0716E0: BLKS(0x0C0716E0u);
	r8 = 0xC050D70u; UPD(0x0C0716E2u, 1);  /* 0C0716E0 mov.l @(disp,pc),Rn */
	r3 = 0xFFFFFF00u; UPD(0x0C0716E4u, 1);  /* 0C0716E2 mov.w @(disp,pc),Rn */
	r10 = 0xC286274u; UPD(0x0C0716E6u, 1);  /* 0C0716E4 mov.l @(disp,pc),Rn */
	IF(0x0C0716E6u); { u32 t_ = r8; PR = 0x0C0716EAu; r9 &= r3; /* slot and Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0716EAu); }  /* 0C0716E6 jsr @Rn */
L_0C0716EA: BLKS(0x0C0716EAu);
	r0 |= r9;  /* 0C0716EA or Rm,Rn */
	{ W16(r10, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C07151Cu, 4); goto L_0C07151C; }  /* 0C0716EC bra */
}


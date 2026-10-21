#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C088F10(sh3_t *c)
{
	LOCALS;
L_0C088F10: BLKS(0x0C088F10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C088F12u, 1);  /* 0C088F10 mov.l Rm,@-Rn */
	r1 = 0x3u;  /* 0C088F12 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C088F16u, 2);  /* 0C088F14 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C088F18u, 1);  /* 0C088F16 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C088F1Au, 1);  /* 0C088F18 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C088F1Cu, 1);  /* 0C088F1A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C088F1Eu, 1);  /* 0C088F1C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C088F20u, 1);  /* 0C088F1E mov.l Rm,@-Rn */
	r4 = 0xC3C43CCu; UPD(0x0C088F22u, 1);  /* 0C088F20 mov.l @(disp,pc),Rn */
	IF(0x0C088F22u); r15 -= 4; W32(r15, PR); UPD(0x0C088F24u, 1);  /* 0C088F22 sts.l pr,@-Rn */
	r2 = R32(r4); UPD(0x0C088F26u, 1);  /* 0C088F24 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C088F26 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r8 = v_; } UPD(0x0C088F2Au, 2);  /* 0C088F28 mov.w @Rm+,Rn */
	r14 = r15;  /* 0C088F2A mov Rm,Rn */
	r0 = r8;  /* 0C088F2C mov Rm,Rn */
	r0 &= 0x3u;  /* 0C088F2E and #imm,r0 */
	W32(r14, r0); UPD(0x0C088F32u, 4);  /* 0C088F30 mov.l Rm,@Rn */
	r3 = r0;  /* 0C088F32 mov Rm,Rn */
	IF(0x0C088F34u); ARG0(0x431Du); { s32 s_ = (s32)r1; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C088F34 shld Rm,Rn */
	r0 = 0xC19C2E0u; UPD(0x0C088F38u, 3);  /* 0C088F36 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C088F38 add Rm,Rn */
	r10 = R32(r3 + 0x4u); UPD(0x0C088F3Cu, 2);  /* 0C088F3A mov.l @(disp,Rm),Rn */
	r9 = 0xC071740u; UPD(0x0C088F3Eu, 1);  /* 0C088F3C mov.l @(disp,pc),Rn */
	r3 += 0x2u;  /* 0C088F3E add #imm,Rn */
	W32(r4, r2); UPD(0x0C088F42u, 2);  /* 0C088F40 mov.l Rm,@Rn */
	IF(0x0C088F42u); { u32 t_ = r9; PR = 0x0C088F46u; r4 = (u32)(s32)(s16)R16(r3); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C088F46u); }  /* 0C088F42 jsr @Rn */
L_0C088F46: BLKS(0x0C088F46u);
	T = (r0 & r0) == 0;  /* 0C088F46 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C088F50u, 4); goto L_0C088F50; } goto L_0C088F4C; }  /* 0C088F48 bf/s */
L_0C088F4C: BLKS(0x0C088F4Cu);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C0890A6u, 4); goto L_0C0890A6; }  /* 0C088F4C bra */
L_0C088F50: BLKS(0x0C088F50u);
	r11 = 0xC28EDFCu; UPD(0x0C088F52u, 1);  /* 0C088F50 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFFEu;  /* 0C088F52 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C088F56u, 2);  /* 0C088F54 mov.w @Rm,Rn */
	r5 = 0x1u;  /* 0C088F56 mov #imm,Rn */
	r3 = 0xB4u; UPD(0x0C088F5Au, 2);  /* 0C088F58 mov.w @(disp,pc),Rn */
	T = r8 > r5;  /* 0C088F5A cmp/hi Rm,Rn */
	r2 = 0xC2B1811u; UPD(0x0C088F5Eu, 2);  /* 0C088F5C mov.l @(disp,pc),Rn */
	IF(0x0C088F5Eu); MACL = r4 * r3;  /* 0C088F5E mul.l Rm,Rn */
	r9 = 0xC2460ACu; UPD(0x0C088F62u, 3);  /* 0C088F60 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C088F64u, 1);  /* 0C088F62 mov.b @Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C088F66u, 1);  /* 0C088F64 mov.l @(disp,pc),Rn */
	IF(0x0C088F66u); r2 = MACL;  /* 0C088F66 sts macl,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C088F6Au, 2);  /* 0C088F68 mov.w @Rm,Rn */
	r2 += r13;  /* 0C088F6A add Rm,Rn */
	r12 = 0xC3000110u; UPD(0x0C088F6Eu, 2);  /* 0C088F6C mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFFFF;  /* 0C088F6E extu.w Rm,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C088F72u, 2);  /* 0C088F70 mov.l Rm,@(disp,Rn) */
	W32(r2, r12); UPD(0x0C088F74u, 1);  /* 0C088F72 mov.l Rm,@Rn */
	{ u32 c_ = T; W32(r2 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C088F7Cu, 3); goto L_0C088F7C; } UPD(0x0C088F78u, 1); goto L_0C088F78; }  /* 0C088F74 bt/s */
L_0C088F78: BLKS(0x0C088F78u);
	{ r5 = 0x8u; /* slot mov #imm,Rn */ UPD(0x0C0890C0u, 3); goto L_0C0890C0; }  /* 0C088F78 bra */
L_0C088F7C: BLKS(0x0C088F7Cu);
	r8 = 0x0u;  /* 0C088F7C mov #imm,Rn */
	W32(r2 + 0xCu, r8); UPD(0x0C088F80u, 2);  /* 0C088F7E mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x8u, r8); UPD(0x0C088F82u, 1);  /* 0C088F80 mov.l Rm,@(disp,Rn) */
L_0C088F82: BLKS(0x0C088F82u);
	r12 = 0xC0A8A30u; UPD(0x0C088F84u, 1);  /* 0C088F82 mov.l @(disp,pc),Rn */
	r13 = 0x4Cu;  /* 0C088F84 mov #imm,Rn */
	IF(0x0C088F86u); { u32 t_ = r12; PR = 0x0C088F8Au; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C088F8Au); }  /* 0C088F86 jsr @Rn */
L_0C088F8A: BLKS(0x0C088F8Au);
	r2 = R32(r14 + 0x4u); UPD(0x0C088F8Cu, 1);  /* 0C088F8A mov.l @(disp,Rm),Rn */
	r9 = 0xB4u; UPD(0x0C088F8Eu, 1);  /* 0C088F8C mov.w @(disp,pc),Rn */
	IF(0x0C088F8Eu); MACL = r2 * r9;  /* 0C088F8E mul.l Rm,Rn */
	r7 = 0xC286318u; UPD(0x0C088F92u, 3);  /* 0C088F90 mov.l @(disp,pc),Rn */
	IF(0x0C088F92u); r9 = MACL;  /* 0C088F92 sts macl,Rn */
	IF(0x0C088F94u); MACL = r11 * r13;  /* 0C088F94 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C088F98u, 4);  /* 0C088F96 mov.l @(disp,pc),Rn */
	r4 = 0xC237C08u; UPD(0x0C088F9Au, 1);  /* 0C088F98 mov.l @(disp,pc),Rn */
	IF(0x0C088F9Au); r12 = MACL;  /* 0C088F9A sts macl,Rn */
	r0 = 0xC3C43C6u; UPD(0x0C088F9Eu, 2);  /* 0C088F9C mov.l @(disp,pc),Rn */
	r9 += r3;  /* 0C088F9E add Rm,Rn */
	r12 += r7;  /* 0C088FA0 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r4); UPD(0x0C088FA4u, 3);  /* 0C088FA2 mov.w @Rm,Rn */
	r13 = 0x0u;  /* 0C088FA4 mov #imm,Rn */
	r6 = R32(r12 + 0x8u); UPD(0x0C088FA8u, 2);  /* 0C088FA6 mov.l @(disp,Rm),Rn */
	IF(0x0C088FA8u); r5 <<= 16;  /* 0C088FA8 shll16 Rn */
	r8 = (u32)(s32)(s16)R16(r0); UPD(0x0C088FACu, 2);  /* 0C088FAA mov.w @Rm,Rn */
	r5 -= r6;  /* 0C088FAC sub Rm,Rn */
	r3 = 0xC0A9AE0u; UPD(0x0C088FB0u, 2);  /* 0C088FAE mov.l @(disp,pc),Rn */
	IF(0x0C088FB0u); r8 <<= 16;  /* 0C088FB0 shll16 Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C088FB4u, 2);  /* 0C088FB2 mov.l @(disp,Rm),Rn */
	r12 += 0x42u;  /* 0C088FB4 add #imm,Rn */
	W32(r9 + 0x24u, r5); UPD(0x0C088FB8u, 2);  /* 0C088FB6 mov.l Rm,@(disp,Rn) */
	IF(0x0C088FB8u); { u32 t_ = r3; PR = 0x0C088FBCu; W32(r9 + 0x28u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C088FBCu); }  /* 0C088FB8 jsr @Rn */
L_0C088FBC: BLKS(0x0C088FBCu);
	r0 = 0xB0u; UPD(0x0C088FBEu, 1);  /* 0C088FBC mov.w @(disp,pc),Rn */
	r3 = r9;  /* 0C088FBE mov Rm,Rn */
	IF(0x0C088FC0u); W8(r0 + r9, r11); UPD(0x0C088FC2u, 2);  /* 0C088FC0 mov.b Rm,@(r0,Rn) */
	r4 = 0xADu; UPD(0x0C088FC4u, 1);  /* 0C088FC2 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C088FC4 mov Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C088FC8u, 2);  /* 0C088FC6 mov.b @Rm,Rn */
	r1 = 0xA8u; UPD(0x0C088FCAu, 1);  /* 0C088FC8 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C088FCA add #imm,Rn */
	IF(0x0C088FCCu); W8(r0 + r4, r13); UPD(0x0C088FCEu, 2);  /* 0C088FCC mov.b Rm,@(r0,Rn) */
	r3 += r1;  /* 0C088FCE add Rm,Rn */
	r0 = 0x9Cu; UPD(0x0C088FD2u, 2);  /* 0C088FD0 mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C088FD2 add #imm,Rn */
	IF(0x0C088FD4u); W8(r0 + r9, r13); UPD(0x0C088FD6u, 2);  /* 0C088FD4 mov.b Rm,@(r0,Rn) */
	r12 = 0x3u;  /* 0C088FD6 mov #imm,Rn */
	W8(r3, r2); UPD(0x0C088FDAu, 2);  /* 0C088FD8 mov.b Rm,@Rn */
	r13 = 0x0u;  /* 0C088FDA mov #imm,Rn */
	r0 = R32(r14); UPD(0x0C088FDEu, 2);  /* 0C088FDC mov.l @Rm,Rn */
	r7 = 0xC19C2E0u; UPD(0x0C088FE0u, 1);  /* 0C088FDE mov.l @(disp,pc),Rn */
	IF(0x0C088FE0u); ARG0(0x40CDu); { s32 s_ = (s32)r12; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C088FE0 shld Rm,Rn */
	IF(0x0C088FE2u); r6 = R32(r0 + r7); UPD(0x0C088FE4u, 2);  /* 0C088FE2 mov.l @(r0,Rm),Rn */
	r6 += 0xFFFFFFFFu;  /* 0C088FE4 add #imm,Rn */
	T = (s32)r13 >= (s32)r6;  /* 0C088FE6 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0890A2u, 5); goto L_0C0890A2; }  /* 0C088FE8 bt */
L_0C088FEA: BLKS(0x0C088FEAu);
	r11 = r9;  /* 0C088FEA mov Rm,Rn */
	r12 = 0xC28EDFCu; UPD(0x0C088FEEu, 2);  /* 0C088FEC mov.l @(disp,pc),Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C088FF0u, 1);  /* 0C088FEE mov.l Rm,@(disp,Rn) */
	r12 += 0x2u;  /* 0C088FF0 add #imm,Rn */
	IF(0x0C088FF2u); ;  /* 0C088FF2 nop */
	UPD(0x0C088FF4u, 2);
L_0C088FF4: BLKS(0x0C088FF4u);
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r9 = v_; } UPD(0x0C088FF6u, 1);  /* 0C088FF4 mov.w @Rm+,Rn */
	r10 += 0x4u;  /* 0C088FF6 add #imm,Rn */
	r8 = 0xB4u; UPD(0x0C088FFAu, 2);  /* 0C088FF8 mov.w @(disp,pc),Rn */
	IF(0x0C088FFAu); MACL = r9 * r8;  /* 0C088FFA mul.l Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C088FFEu, 3);  /* 0C088FFC mov.w @Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C089000u, 1);  /* 0C088FFE mov.l @(disp,pc),Rn */
	IF(0x0C089000u); r8 = MACL;  /* 0C089000 sts macl,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C089004u, 2);  /* 0C089002 mov.l @(disp,pc),Rn */
	r7 += r7;  /* 0C089004 add Rm,Rn */
	IF(0x0C089006u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C089008u, 2);  /* 0C089006 mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C089008 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C08900A add #imm,Rn */
	W16(r8, r6); UPD(0x0C08900Eu, 3);  /* 0C08900C mov.w Rm,@Rn */
	r0 = 0x6u;  /* 0C08900E mov #imm,Rn */
	IF(0x0C089010u); r5 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C089012u, 2);  /* 0C089010 mov.w @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C089012 add #imm,Rn */
	W16(r8, r5); UPD(0x0C089016u, 2);  /* 0C089014 mov.w Rm,@Rn */
	r10 += 0xFFFFFFFCu;  /* 0C089016 add #imm,Rn */
	r3 = 0xC2460ACu; UPD(0x0C08901Au, 2);  /* 0C089018 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C08901A add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C08901Eu, 2);  /* 0C08901C mov.w @Rm,Rn */
	r2 = R32(r10); UPD(0x0C089020u, 1);  /* 0C08901E mov.l @Rm,Rn */
	r7 = r4 & 0xFFFF;  /* 0C089020 extu.w Rm,Rn */
	W32(r8, r2); UPD(0x0C089024u, 2);  /* 0C089022 mov.l Rm,@Rn */
	r4 = r9;  /* 0C089024 mov Rm,Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C089028u, 2);  /* 0C089026 mov.l Rm,@(disp,Rn) */
	r0 = R32(r10 + 0x8u); UPD(0x0C08902Au, 1);  /* 0C089028 mov.l @(disp,Rm),Rn */
	r10 += 0x14u;  /* 0C08902A add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C08902Eu, 2);  /* 0C08902C mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C089030u, 1);  /* 0C08902E mov.w @Rm,Rn */
	r0 = r8;  /* 0C089030 mov Rm,Rn */
	r6 = 0x8Au; UPD(0x0C089034u, 2);  /* 0C089032 mov.w @(disp,pc),Rn */
	r10 += 0xFFFFFFECu;  /* 0C089034 add #imm,Rn */
	IF(0x0C089036u); W16(r0 + r6, r5); UPD(0x0C089038u, 2);  /* 0C089036 mov.w Rm,@(r0,Rn) */
	r6 += 0xFFFFFFFCu;  /* 0C089038 add #imm,Rn */
	IF(0x0C08903Au); W16(r0 + r6, r5); UPD(0x0C08903Cu, 2);  /* 0C08903A mov.w Rm,@(r0,Rn) */
	r0 = r5;  /* 0C08903C mov Rm,Rn */
	r0 += 0x8u;  /* 0C08903E add #imm,Rn */
	r2 = 0xC0A8A30u; UPD(0x0C089042u, 3);  /* 0C089040 mov.l @(disp,pc),Rn */
	IF(0x0C089042u); r0 >>= 2;  /* 0C089042 shlr2 Rn */
	IF(0x0C089044u); r0 >>= 2;  /* 0C089044 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C089046 and #imm,r0 */
	IF(0x0C089048u); { u32 t_ = r2; PR = 0x0C08904Cu; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08904Cu); }  /* 0C089048 jsr @Rn */
L_0C08904C: BLKS(0x0C08904Cu);
	r3 = R32(r11 + 0x24u); UPD(0x0C08904Eu, 1);  /* 0C08904C mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x28u); UPD(0x0C089050u, 1);  /* 0C08904E mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C089052u, 1);  /* 0C089050 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r4); UPD(0x0C089054u, 1);  /* 0C089052 mov.l Rm,@(disp,Rn) */
	r7 = R32(r10 + 0xCu); UPD(0x0C089056u, 1);  /* 0C089054 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C089056 mov Rm,Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C08905Au, 2);  /* 0C089058 mov.l Rm,@(disp,Rn) */
	r0 = R32(r10 + 0x10u); UPD(0x0C08905Cu, 1);  /* 0C08905A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C08905Eu, 1);  /* 0C08905C mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A9AE0u; UPD(0x0C089060u, 1);  /* 0C08905E mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C089060 add #imm,Rn */
	r6 = R32(r10 + 0x18u); UPD(0x0C089064u, 2);  /* 0C089062 mov.l @(disp,Rm),Rn */
	IF(0x0C089064u); { u32 t_ = r5; PR = 0x0C089068u; W32(r8, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C089068u); }  /* 0C089064 jsr @Rn */
L_0C089068: BLKS(0x0C089068u);
	r0 = 0xB0u; UPD(0x0C08906Au, 1);  /* 0C089068 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C08906A add #imm,Rn */
	IF(0x0C08906Cu); r2 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C08906Eu, 2);  /* 0C08906C mov.b @(r0,Rm),Rn */
	r7 = 0x0u;  /* 0C08906E mov #imm,Rn */
	IF(0x0C089070u); W8(r0 + r8, r2); UPD(0x0C089072u, 2);  /* 0C089070 mov.b Rm,@(r0,Rn) */
	r6 = 0x3u;  /* 0C089072 mov #imm,Rn */
	r9 = R32(r14 + 0x8u); UPD(0x0C089076u, 2);  /* 0C089074 mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C089076 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08907Au, 2);  /* 0C089078 mov.b @Rm,Rn */
	r1 = 0xADu; UPD(0x0C08907Cu, 1);  /* 0C08907A mov.w @(disp,pc),Rn */
	r3 += 0x5u;  /* 0C08907C add #imm,Rn */
	IF(0x0C08907Eu); W8(r0 + r1, r3); UPD(0x0C089080u, 2);  /* 0C08907E mov.b Rm,@(r0,Rn) */
	r0 = 0x8Cu; UPD(0x0C089082u, 1);  /* 0C089080 mov.w @(disp,pc),Rn */
	r4 = 0xA8u; UPD(0x0C089084u, 1);  /* 0C089082 mov.w @(disp,pc),Rn */
	IF(0x0C089084u); W32(r0 + r8, r7); UPD(0x0C089086u, 1);  /* 0C089084 mov.l Rm,@(r0,Rn) */
	r4 += r8;  /* 0C089086 add Rm,Rn */
	r0 = r13;  /* 0C089088 mov Rm,Rn */
	r4 += 0x1u;  /* 0C08908A add #imm,Rn */
	W8(r4, r3); UPD(0x0C08908Eu, 4);  /* 0C08908C mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C08908E add #imm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C089090 exts.w Rm,Rn */
	r0 = R32(r14); UPD(0x0C089094u, 3);  /* 0C089092 mov.l @Rm,Rn */
	r5 = 0xC19C2E0u; UPD(0x0C089096u, 1);  /* 0C089094 mov.l @(disp,pc),Rn */
	IF(0x0C089096u); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C089096 shld Rm,Rn */
	IF(0x0C089098u); r8 = R32(r0 + r5); UPD(0x0C08909Au, 2);  /* 0C089098 mov.l @(r0,Rm),Rn */
	r8 += 0xFFFFFFFFu;  /* 0C08909A add #imm,Rn */
	T = (s32)r13 >= (s32)r8;  /* 0C08909C cmp/ge Rm,Rn */
	{ u32 c_ = !T; r10 += 0x1Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C088FF4u, 5); goto L_0C088FF4; } UPD(0x0C0890A2u, 1); goto L_0C0890A2; }  /* 0C08909E bf/s */
L_0C0890A2: BLKS(0x0C0890A2u);
	r0 = 0x1u;  /* 0C0890A2 mov #imm,Rn */
	r14 += 0xCu;  /* 0C0890A4 add #imm,Rn */
	UPD(0x0C0890A6u, 2);
L_0C0890A6: BLKS(0x0C0890A6u);
	r15 = r14;  /* 0C0890A6 mov Rm,Rn */
	IF(0x0C0890A8u); PR = R32(r15); r15 += 4; UPD(0x0C0890AAu, 2);  /* 0C0890A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0890ACu, 1);  /* 0C0890AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0890AEu, 1);  /* 0C0890AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0890B0u, 1);  /* 0C0890AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0890B2u, 1);  /* 0C0890B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0890B4u, 1);  /* 0C0890B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0890B6u, 1);  /* 0C0890B4 mov.l @Rm+,Rn */
	IF(0x0C0890B6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0890B6 rts */
L_0C0890C0: BLKS(0x0C0890C0u);
	r0 = 0x3u;  /* 0C0890C0 mov #imm,Rn */
	W32(r2 + 0x8u, r5); UPD(0x0C0890C4u, 2);  /* 0C0890C2 mov.l Rm,@(disp,Rn) */
	{ W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C088F82u, 3); goto L_0C088F82; }  /* 0C0890C4 bra */
}

void blk_f_0C089110(sh3_t *c)
{
	LOCALS;
L_0C089110: BLKS(0x0C089110u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C089112u, 1);  /* 0C089110 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C089114u, 1);  /* 0C089112 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C089114 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C089118u, 2);  /* 0C089116 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08911Au, 1);  /* 0C089118 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C08911Cu, 1);  /* 0C08911A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08911Eu, 1);  /* 0C08911C mov.l Rm,@-Rn */
	IF(0x0C08911Eu); MACL = r8 * r2;  /* 0C08911E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C089122u, 3);  /* 0C089120 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C089124u, 1);  /* 0C089122 mov.l @(disp,pc),Rn */
	IF(0x0C089124u); r12 = MACL;  /* 0C089124 sts macl,Rn */
	IF(0x0C089126u); r15 -= 4; W32(r15, PR); UPD(0x0C089128u, 2);  /* 0C089126 sts.l pr,@-Rn */
	r12 += r0;  /* 0C089128 add Rm,Rn */
	r2 = R32(r12 + 0x8u); UPD(0x0C08912Cu, 2);  /* 0C08912A mov.l @(disp,Rm),Rn */
	r0 = 0x7u;  /* 0C08912C mov #imm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C08912E add #imm,Rn */
	T = r2 > r0;  /* 0C089130 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08913Au, 6); goto L_0C08913A; } goto L_0C089136; }  /* 0C089132 bf/s */
L_0C089136: BLKS(0x0C089136u);
	{ r10 = R32(r12 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C089300u, 4); goto L_0C089300; }  /* 0C089136 bra */
L_0C08913A: BLKS(0x0C08913Au);
	r0 = 0xC08914Cu;  /* 0C08913A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08913C add Rm,Rn */
	IF(0x0C08913Eu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C089140u, 3);  /* 0C08913E mov.w @(r0,Rm),Rn */
	IF(0x0C089140u); { u32 tv_ = (r3 + 0x0C089144u); u32 t_ = PHYS(tv_); IF(0x0C089142u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C089140 braf Rn */
L_0C0891B6: BLKS(0x0C0891B6u);
	r15 = r14;  /* 0C0891B6 mov Rm,Rn */
	IF(0x0C0891B8u); PR = R32(r15); r15 += 4; UPD(0x0C0891BAu, 2);  /* 0C0891B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0891BCu, 1);  /* 0C0891BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0891BEu, 1);  /* 0C0891BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0891C0u, 1);  /* 0C0891BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0891C2u, 1);  /* 0C0891C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0891C4u, 1);  /* 0C0891C2 mov.l @Rm+,Rn */
	IF(0x0C0891C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0891C4 rts */
L_0C089300: BLKS(0x0C089300u);
	r15 += 0xFFFFFFF8u;  /* 0C089300 add #imm,Rn */
	r7 = 0x80000u; UPD(0x0C089304u, 2);  /* 0C089302 mov.l @(disp,pc),Rn */
	r5 = 0xEu;  /* 0C089304 mov #imm,Rn */
	r10 += r7;  /* 0C089306 add Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08930Au, 3);  /* 0C089308 mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C08930A mov Rm,Rn */
	r9 = 0xFFC60000u; UPD(0x0C08930Eu, 2);  /* 0C08930C mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C08930E add Rm,Rn */
	r9 = 0xB0u; UPD(0x0C089312u, 2);  /* 0C089310 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C089312 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C089316u, 2);  /* 0C089314 mov.b @Rm,Rn */
	r8 = r2 & 0xFF;  /* 0C089316 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C08931Au, 2);  /* 0C089318 mov.l Rm,@Rn */
	r8 = 0xA9u; UPD(0x0C08931Cu, 1);  /* 0C08931A mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C08931C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C089320u, 2);  /* 0C08931E mov.b @Rm,Rn */
	r11 = r0 & 0xFF;  /* 0C089320 extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C089324u, 2);  /* 0C089322 mov.l Rm,@(disp,Rn) */
	r11 = 0xC0BD6F0u; UPD(0x0C089326u, 1);  /* 0C089324 mov.l @(disp,pc),Rn */
	IF(0x0C089326u); { u32 t_ = r11; PR = 0x0C08932Au; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08932Au); }  /* 0C089326 jsr @Rn */
L_0C08932A: BLKS(0x0C08932Au);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C08932Cu, 1);  /* 0C08932A mov.b @Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08932Eu, 1);  /* 0C08932C mov.l @(disp,Rm),Rn */
	r4 = r6 & 0xFF;  /* 0C08932E extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C089332u, 2);  /* 0C089330 mov.l Rm,@Rn */
	r6 = r10;  /* 0C089332 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C089336u, 2);  /* 0C089334 mov.b @Rm,Rn */
	r5 = 0xFFE30000u; UPD(0x0C089338u, 1);  /* 0C089336 mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFF;  /* 0C089338 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C08933Cu, 2);  /* 0C08933A mov.l Rm,@(disp,Rn) */
	r7 += r5;  /* 0C08933C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C089340u, 2);  /* 0C08933E mov.l @Rm,Rn */
	IF(0x0C089340u); { u32 t_ = r11; PR = 0x0C089344u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C089344u); }  /* 0C089340 jsr @Rn */
L_0C089344: BLKS(0x0C089344u);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C089346u, 1);  /* 0C089344 mov.b @Rm,Rn */
	r5 = r0 & 0xFF;  /* 0C089346 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C08934Au, 2);  /* 0C089348 mov.l Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C08934Cu, 1);  /* 0C08934A mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C08934C mov #imm,Rn */
	r7 = r6 & 0xFF;  /* 0C08934E extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C089352u, 3);  /* 0C089350 mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C089352 mov Rm,Rn */
	r4 = R32(r12); UPD(0x0C089356u, 2);  /* 0C089354 mov.l @Rm,Rn */
	IF(0x0C089356u); { u32 t_ = r11; PR = 0x0C08935Au; r7 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08935Au); }  /* 0C089356 jsr @Rn */
L_0C08935A: BLKS(0x0C08935Au);
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08935Cu, 1);  /* 0C08935A mov.b @Rm,Rn */
	r6 = r10;  /* 0C08935C mov Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C089360u, 2);  /* 0C08935E mov.l @(disp,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C089360 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C089364u, 2);  /* 0C089362 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C089366u, 1);  /* 0C089364 mov.b @Rm,Rn */
	r4 = 0x1D0000u; UPD(0x0C089368u, 1);  /* 0C089366 mov.l @(disp,pc),Rn */
	r5 = r0 & 0xFF;  /* 0C089368 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08936Cu, 2);  /* 0C08936A mov.l Rm,@(disp,Rn) */
	r7 += r4;  /* 0C08936C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C089370u, 2);  /* 0C08936E mov.l @Rm,Rn */
	IF(0x0C089370u); { u32 t_ = r11; PR = 0x0C089374u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C089374u); }  /* 0C089370 jsr @Rn */
L_0C089374: BLKS(0x0C089374u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C089376u, 1);  /* 0C089374 mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C089376 mov #imm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08937Au, 2);  /* 0C089378 mov.l @(disp,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C08937A extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C08937Eu, 2);  /* 0C08937C mov.l Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C089380u, 1);  /* 0C08937E mov.b @Rm,Rn */
	r6 = 0x3A0000u; UPD(0x0C089382u, 1);  /* 0C089380 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C089382 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C089386u, 2);  /* 0C089384 mov.l Rm,@(disp,Rn) */
	r7 += r6;  /* 0C089386 add Rm,Rn */
	r6 = r10;  /* 0C089388 mov Rm,Rn */
	IF(0x0C08938Au); { u32 t_ = r11; PR = 0x0C08938Eu; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08938Eu); }  /* 0C08938A jsr @Rn */
L_0C08938E: BLKS(0x0C08938Eu);
	r5 = 0xA5u; UPD(0x0C089390u, 1);  /* 0C08938E mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C089390 mov Rm,Rn */
	IF(0x0C089392u); r10 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C089394u, 2);  /* 0C089392 mov.b @(r0,Rm),Rn */
	r15 += 0x8u;  /* 0C089394 add #imm,Rn */
	r6 = 0xC19C300u; UPD(0x0C089398u, 2);  /* 0C089396 mov.l @(disp,pc),Rn */
	IF(0x0C089398u); r10 <<= 2;  /* 0C089398 shll2 Rn */
	r5 = R32(r12 + 0x24u); UPD(0x0C08939Cu, 2);  /* 0C08939A mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C08939C mov Rm,Rn */
	r7 = 0x40000u; UPD(0x0C0893A0u, 2);  /* 0C08939E mov.l @(disp,pc),Rn */
	r8 = 0xC07DF30u; UPD(0x0C0893A2u, 1);  /* 0C0893A0 mov.l @(disp,pc),Rn */
	r5 += r7;  /* 0C0893A2 add Rm,Rn */
	IF(0x0C0893A4u); r4 = R32(r0 + r6); UPD(0x0C0893A6u, 2);  /* 0C0893A4 mov.l @(r0,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C0893A8u, 1);  /* 0C0893A6 mov.b @Rm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C0893AAu, 1);  /* 0C0893A8 mov.l @(disp,Rm),Rn */
	IF(0x0C0893AAu); { u32 t_ = r8; PR = 0x0C0893AEu; r7 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C0893AEu); }  /* 0C0893AA jsr @Rn */
L_0C0893AE: BLKS(0x0C0893AEu);
	r4 = 0x0u;  /* 0C0893AE mov #imm,Rn */
	{ W32(r12, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C0891B6u, 4); goto L_0C0891B6; }  /* 0C0893B0 bra */
}

void blk_f_0C089160(sh3_t *c)
{
	LOCALS;
L_0C089160: BLKS(0x0C089160u);
	r10 = 0xB4u; UPD(0x0C089162u, 1);  /* 0C089160 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C089162 add #imm,Rn */
	IF(0x0C089164u); MACL = r8 * r10;  /* 0C089164 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C089168u, 4);  /* 0C089166 mov.l @(disp,pc),Rn */
	IF(0x0C089168u); r9 = MACL;  /* 0C089168 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C08916Cu, 2);  /* 0C08916A mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C08916C add Rm,Rn */
	IF(0x0C08916Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089170u, 2);  /* 0C08916E mov.b @(r0,Rm),Rn */
	r6 = r5 & 0xFF;  /* 0C089170 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C089174u, 2);  /* 0C089172 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C089174 add #imm,Rn */
	IF(0x0C089176u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089178u, 2);  /* 0C089176 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C089178 mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C08917A extu.b Rm,Rn */
	r12 = 0xC0BECB0u; UPD(0x0C08917Eu, 3);  /* 0C08917C mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C089180u, 1);  /* 0C08917E mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C089182u, 1);  /* 0C089180 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C089184u, 1);  /* 0C089182 mov.l @(disp,Rm),Rn */
	IF(0x0C089184u); { u32 t_ = r12; PR = 0x0C089188u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C089188u); }  /* 0C089184 jsr @Rn */
L_0C089188: BLKS(0x0C089188u);
	r12 = 0xC0A8B50u; UPD(0x0C08918Au, 1);  /* 0C089188 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C08918A mov Rm,Rn */
	IF(0x0C08918Cu); { u32 t_ = r12; PR = 0x0C089190u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C089190u); }  /* 0C08918C jsr @Rn */
L_0C089190: BLKS(0x0C089190u);
	IF(0x0C089190u); T = (s32)r0 >= 0;  /* 0C089190 cmp/pz Rn */
	{ u32 c_ = !T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0891B2u, 4); goto L_0C0891B2; } goto L_0C089196; }  /* 0C089192 bf/s */
L_0C089196: BLKS(0x0C089196u);
	r12 = 0xC07DE60u; UPD(0x0C089198u, 2);  /* 0C089196 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C089198 mov #imm,Rn */
	r5 = r0;  /* 0C08919A mov Rm,Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C08919Eu, 3);  /* 0C08919C mov.l @(disp,Rm),Rn */
	IF(0x0C08919Eu); { u32 t_ = r12; PR = 0x0C0891A2u; r7 = R32(r9 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DE60, 0x0C07DE60u, 0x0C0891A2u); }  /* 0C08919E jsr @Rn */
L_0C0891A2: BLKS(0x0C0891A2u);
	IF(0x0C0891A2u); MACL = r8 * r10;  /* 0C0891A2 mul.l Rm,Rn */
	r0 = 0xA5u; UPD(0x0C0891A6u, 3);  /* 0C0891A4 mov.w @(disp,pc),Rn */
	IF(0x0C0891A6u); r10 = MACL;  /* 0C0891A6 sts macl,Rn */
	r10 += r11;  /* 0C0891A8 add Rm,Rn */
	r10 += r0;  /* 0C0891AA add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r10); UPD(0x0C0891AEu, 4);  /* 0C0891AC mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C0891AE add #imm,Rn */
	W8(r10, r11); UPD(0x0C0891B2u, 2);  /* 0C0891B0 mov.b Rm,@Rn */
L_0C0891B2: BLKS(0x0C0891B2u);
	r4 = 0x0u;  /* 0C0891B2 mov #imm,Rn */
	W32(r9, r4); UPD(0x0C0891B6u, 2);  /* 0C0891B4 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0891B6 mov Rm,Rn */
	IF(0x0C0891B8u); PR = R32(r15); r15 += 4; UPD(0x0C0891BAu, 2);  /* 0C0891B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0891BCu, 1);  /* 0C0891BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0891BEu, 1);  /* 0C0891BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0891C0u, 1);  /* 0C0891BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0891C2u, 1);  /* 0C0891C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0891C4u, 1);  /* 0C0891C2 mov.l @Rm+,Rn */
	IF(0x0C0891C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0891C4 rts */
}

void blk_f_0C0891D0(sh3_t *c)
{
	LOCALS;
	goto L_0C0891D0;
L_0C0891B6: BLKS(0x0C0891B6u);
	r15 = r14;  /* 0C0891B6 mov Rm,Rn */
	IF(0x0C0891B8u); PR = R32(r15); r15 += 4; UPD(0x0C0891BAu, 2);  /* 0C0891B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0891BCu, 1);  /* 0C0891BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0891BEu, 1);  /* 0C0891BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0891C0u, 1);  /* 0C0891BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0891C2u, 1);  /* 0C0891C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0891C4u, 1);  /* 0C0891C2 mov.l @Rm+,Rn */
	IF(0x0C0891C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0891C4 rts */
L_0C0891D0: BLKS(0x0C0891D0u);
	r6 = 0xB4u; UPD(0x0C0891D2u, 1);  /* 0C0891D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0891D2 add #imm,Rn */
	IF(0x0C0891D4u); MACL = r8 * r6;  /* 0C0891D4 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0891D8u, 4);  /* 0C0891D6 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C0891D8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0891DCu, 2);  /* 0C0891DA mov.w @(disp,pc),Rn */
	IF(0x0C0891DCu); r8 = MACL;  /* 0C0891DC sts macl,Rn */
	r8 += r4;  /* 0C0891DE add Rm,Rn */
	IF(0x0C0891E0u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0891E2u, 3);  /* 0C0891E0 mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C0891E2 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0891E6u, 2);  /* 0C0891E4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0891E6 add #imm,Rn */
	IF(0x0C0891E8u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0891EAu, 2);  /* 0C0891E8 mov.b @(r0,Rm),Rn */
	r2 = r9 & 0xFF;  /* 0C0891EA extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0891EEu, 2);  /* 0C0891EC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0891F0u, 1);  /* 0C0891EE mov.l @Rm,Rn */
	r11 = 0xC0BD6F0u; UPD(0x0C0891F2u, 1);  /* 0C0891F0 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0891F2 mov #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0891F6u, 2);  /* 0C0891F4 mov.l @(disp,Rm),Rn */
	IF(0x0C0891F6u); { u32 t_ = r11; PR = 0x0C0891FAu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0891FAu); }  /* 0C0891F6 jsr @Rn */
L_0C0891FA: BLKS(0x0C0891FAu);
	W32(r8, r10); UPD(0x0C0891FCu, 1);  /* 0C0891FA mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0891B6u, 3); goto L_0C0891B6; }  /* 0C0891FC bra */
}

void blk_f_0C089200(sh3_t *c)
{
	LOCALS;
	goto L_0C089200;
L_0C0891B2: BLKS(0x0C0891B2u);
	r4 = 0x0u;  /* 0C0891B2 mov #imm,Rn */
	W32(r9, r4); UPD(0x0C0891B6u, 2);  /* 0C0891B4 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0891B6 mov Rm,Rn */
	IF(0x0C0891B8u); PR = R32(r15); r15 += 4; UPD(0x0C0891BAu, 2);  /* 0C0891B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0891BCu, 1);  /* 0C0891BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0891BEu, 1);  /* 0C0891BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0891C0u, 1);  /* 0C0891BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0891C2u, 1);  /* 0C0891C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0891C4u, 1);  /* 0C0891C2 mov.l @Rm+,Rn */
	IF(0x0C0891C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0891C4 rts */
L_0C089200: BLKS(0x0C089200u);
	r10 = 0xB4u; UPD(0x0C089202u, 1);  /* 0C089200 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C089202 add #imm,Rn */
	IF(0x0C089204u); MACL = r8 * r10;  /* 0C089204 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C089208u, 4);  /* 0C089206 mov.l @(disp,pc),Rn */
	IF(0x0C089208u); r9 = MACL;  /* 0C089208 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C08920Cu, 2);  /* 0C08920A mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C08920C add Rm,Rn */
	IF(0x0C08920Eu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089210u, 2);  /* 0C08920E mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C089210 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C089214u, 2);  /* 0C089212 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C089214 add #imm,Rn */
	IF(0x0C089216u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089218u, 2);  /* 0C089216 mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C089218 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08921Cu, 2);  /* 0C08921A mov.l Rm,@(disp,Rn) */
	r12 = 0xC0BECB0u; UPD(0x0C08921Eu, 1);  /* 0C08921C mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C08921E mov #imm,Rn */
	r4 = R32(r9); UPD(0x0C089222u, 2);  /* 0C089220 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C089224u, 1);  /* 0C089222 mov.l @(disp,Rm),Rn */
	IF(0x0C089224u); { u32 t_ = r12; PR = 0x0C089228u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C089228u); }  /* 0C089224 jsr @Rn */
L_0C089228: BLKS(0x0C089228u);
	r4 = r8;  /* 0C089228 mov Rm,Rn */
	r8 = 0xC0A8B50u; UPD(0x0C08922Cu, 2);  /* 0C08922A mov.l @(disp,pc),Rn */
	IF(0x0C08922Cu); { u32 t_ = r8; PR = 0x0C089230u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C089230u); }  /* 0C08922C jsr @Rn */
L_0C089230: BLKS(0x0C089230u);
	IF(0x0C089230u); T = (s32)r0 >= 0;  /* 0C089230 cmp/pz Rn */
	{ u32 c_ = !T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0891B2u, 4); goto L_0C0891B2; } goto L_0C089236; }  /* 0C089232 bf/s */
L_0C089236: BLKS(0x0C089236u);
	r12 = 0xC07DE60u; UPD(0x0C089238u, 2);  /* 0C089236 mov.l @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C089238 mov #imm,Rn */
	r5 = r0;  /* 0C08923A mov Rm,Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C08923Eu, 3);  /* 0C08923C mov.l @(disp,Rm),Rn */
	IF(0x0C08923Eu); { u32 t_ = r12; PR = 0x0C089242u; r7 = R32(r9 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DE60, 0x0C07DE60u, 0x0C089242u); }  /* 0C08923E jsr @Rn */
L_0C089242: BLKS(0x0C089242u);
	IF(0x0C089242u); MACL = r8 * r10;  /* 0C089242 mul.l Rm,Rn */
	r0 = 0xA5u; UPD(0x0C089246u, 3);  /* 0C089244 mov.w @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C089246 mov #imm,Rn */
	IF(0x0C089248u); r10 = MACL;  /* 0C089248 sts macl,Rn */
	r10 += r11;  /* 0C08924A add Rm,Rn */
	r11 = 0xC062780u; UPD(0x0C08924Eu, 4);  /* 0C08924C mov.l @(disp,pc),Rn */
	IF(0x0C08924Eu); { u32 t_ = r11; PR = 0x0C089252u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C089252u); }  /* 0C08924E jsr @Rn */
L_0C089252: BLKS(0x0C089252u);
	{ W8(r10, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0891B2u, 3); goto L_0C0891B2; }  /* 0C089252 bra */
}

void blk_f_0C089260(sh3_t *c)
{
	LOCALS;
	goto L_0C089260;
L_0C0891B6: BLKS(0x0C0891B6u);
	r15 = r14;  /* 0C0891B6 mov Rm,Rn */
	IF(0x0C0891B8u); PR = R32(r15); r15 += 4; UPD(0x0C0891BAu, 2);  /* 0C0891B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0891BCu, 1);  /* 0C0891BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0891BEu, 1);  /* 0C0891BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0891C0u, 1);  /* 0C0891BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0891C2u, 1);  /* 0C0891C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0891C4u, 1);  /* 0C0891C2 mov.l @Rm+,Rn */
	IF(0x0C0891C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0891C4 rts */
L_0C0891F0: BLKS(0x0C0891F0u);
	r11 = 0xC0BD6F0u; UPD(0x0C0891F2u, 1);  /* 0C0891F0 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0891F2 mov #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0891F6u, 2);  /* 0C0891F4 mov.l @(disp,Rm),Rn */
	IF(0x0C0891F6u); { u32 t_ = r11; PR = 0x0C0891FAu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0891FAu); }  /* 0C0891F6 jsr @Rn */
L_0C0891FA: BLKS(0x0C0891FAu);
	W32(r8, r10); UPD(0x0C0891FCu, 1);  /* 0C0891FA mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0891B6u, 3); goto L_0C0891B6; }  /* 0C0891FC bra */
L_0C089260: BLKS(0x0C089260u);
	r3 = 0xB4u; UPD(0x0C089262u, 1);  /* 0C089260 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C089262 add #imm,Rn */
	IF(0x0C089264u); MACL = r8 * r3;  /* 0C089264 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C089268u, 4);  /* 0C089266 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C08926Au, 1);  /* 0C089268 mov.w @(disp,pc),Rn */
	IF(0x0C08926Au); r8 = MACL;  /* 0C08926A sts macl,Rn */
	r8 += r7;  /* 0C08926C add Rm,Rn */
	IF(0x0C08926Eu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C089270u, 3);  /* 0C08926E mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C089270 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C089274u, 2);  /* 0C089272 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C089274 add #imm,Rn */
	IF(0x0C089276u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C089278u, 2);  /* 0C089276 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C089278 mov #imm,Rn */
	r9 = r6 & 0xFF;  /* 0C08927A extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C08927Eu, 3);  /* 0C08927C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0891F0u, 3); goto L_0C0891F0; }  /* 0C08927E bra */
}

void blk_f_0C089290(sh3_t *c)
{
	LOCALS;
	goto L_0C089290;
L_0C0891B6: BLKS(0x0C0891B6u);
	r15 = r14;  /* 0C0891B6 mov Rm,Rn */
	IF(0x0C0891B8u); PR = R32(r15); r15 += 4; UPD(0x0C0891BAu, 2);  /* 0C0891B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0891BCu, 1);  /* 0C0891BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0891BEu, 1);  /* 0C0891BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0891C0u, 1);  /* 0C0891BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0891C2u, 1);  /* 0C0891C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0891C4u, 1);  /* 0C0891C2 mov.l @Rm+,Rn */
	IF(0x0C0891C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0891C4 rts */
L_0C089290: BLKS(0x0C089290u);
	r3 = 0xB4u; UPD(0x0C089292u, 1);  /* 0C089290 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C089292 add #imm,Rn */
	IF(0x0C089294u); MACL = r8 * r3;  /* 0C089294 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C089298u, 4);  /* 0C089296 mov.l @(disp,pc),Rn */
	IF(0x0C089298u); r12 = MACL;  /* 0C089298 sts macl,Rn */
	r10 = 0xB0u; UPD(0x0C08929Cu, 2);  /* 0C08929A mov.w @(disp,pc),Rn */
	r12 += r7;  /* 0C08929C add Rm,Rn */
	r10 += r12;  /* 0C08929E add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C0892A2u, 3);  /* 0C0892A0 mov.b @Rm,Rn */
	r8 = 0x0u;  /* 0C0892A2 mov #imm,Rn */
	r5 = r2 & 0xFF;  /* 0C0892A4 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0892A8u, 3);  /* 0C0892A6 mov.l Rm,@Rn */
	r0 = 0xA9u; UPD(0x0C0892AAu, 1);  /* 0C0892A8 mov.w @(disp,pc),Rn */
	r5 = 0xCu;  /* 0C0892AA mov #imm,Rn */
	IF(0x0C0892ACu); r6 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0892AEu, 2);  /* 0C0892AC mov.b @(r0,Rm),Rn */
	r11 = 0xC0BD6F0u; UPD(0x0C0892B0u, 1);  /* 0C0892AE mov.l @(disp,pc),Rn */
	r4 = r6 & 0xFF;  /* 0C0892B0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0892B4u, 2);  /* 0C0892B2 mov.l Rm,@(disp,Rn) */
	r9 = 0xC07DF30u; UPD(0x0C0892B6u, 1);  /* 0C0892B4 mov.l @(disp,pc),Rn */
	r4 = R32(r12); UPD(0x0C0892B8u, 1);  /* 0C0892B6 mov.l @Rm,Rn */
	r6 = R32(r12 + 0x24u); UPD(0x0C0892BAu, 1);  /* 0C0892B8 mov.l @(disp,Rm),Rn */
	IF(0x0C0892BAu); { u32 t_ = r11; PR = 0x0C0892BEu; r7 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0892BEu); }  /* 0C0892BA jsr @Rn */
L_0C0892BE: BLKS(0x0C0892BEu);
	r5 = R32(r12 + 0x24u); UPD(0x0C0892C0u, 1);  /* 0C0892BE mov.l @(disp,Rm),Rn */
	r15 += 0x8u;  /* 0C0892C0 add #imm,Rn */
	r0 = 0x40000u; UPD(0x0C0892C4u, 2);  /* 0C0892C2 mov.l @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C0892C4 mov #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C0892C8u, 2);  /* 0C0892C6 mov.b @Rm,Rn */
	r5 += r0;  /* 0C0892C8 add Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0892CA extu.b Rm,Rn */
	IF(0x0C0892CCu); { u32 t_ = r9; PR = 0x0C0892D0u; r6 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLD(t_, 0x0C0892D0u); }  /* 0C0892CC jsr @Rn */
L_0C0892D0: BLKS(0x0C0892D0u);
	{ W32(r12, r8); /* slot mov.l Rm,@Rn */ UPD(0x0C0891B6u, 3); goto L_0C0891B6; }  /* 0C0892D0 bra */
}

void blk_f_0C0893E0(sh3_t *c)
{
	LOCALS;
	goto L_0C0893E0;
L_0C089110: BLKS(0x0C089110u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C089112u, 1);  /* 0C089110 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C089114u, 1);  /* 0C089112 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C089114 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C089118u, 2);  /* 0C089116 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08911Au, 1);  /* 0C089118 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C08911Cu, 1);  /* 0C08911A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08911Eu, 1);  /* 0C08911C mov.l Rm,@-Rn */
	IF(0x0C08911Eu); MACL = r8 * r2;  /* 0C08911E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C089122u, 3);  /* 0C089120 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C089124u, 1);  /* 0C089122 mov.l @(disp,pc),Rn */
	IF(0x0C089124u); r12 = MACL;  /* 0C089124 sts macl,Rn */
	IF(0x0C089126u); r15 -= 4; W32(r15, PR); UPD(0x0C089128u, 2);  /* 0C089126 sts.l pr,@-Rn */
	r12 += r0;  /* 0C089128 add Rm,Rn */
	r2 = R32(r12 + 0x8u); UPD(0x0C08912Cu, 2);  /* 0C08912A mov.l @(disp,Rm),Rn */
	r0 = 0x7u;  /* 0C08912C mov #imm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C08912E add #imm,Rn */
	T = r2 > r0;  /* 0C089130 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08913Au, 6); goto L_0C08913A; } goto L_0C089136; }  /* 0C089132 bf/s */
L_0C089136: BLKS(0x0C089136u);
	{ r10 = R32(r12 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C089300u, 4); goto L_0C089300; }  /* 0C089136 bra */
L_0C08913A: BLKS(0x0C08913Au);
	r0 = 0xC08914Cu;  /* 0C08913A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08913C add Rm,Rn */
	IF(0x0C08913Eu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C089140u, 3);  /* 0C08913E mov.w @(r0,Rm),Rn */
	IF(0x0C089140u); { u32 tv_ = (r3 + 0x0C089144u); u32 t_ = PHYS(tv_); IF(0x0C089142u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C089140 braf Rn */
L_0C0891B6: BLKS(0x0C0891B6u);
	r15 = r14;  /* 0C0891B6 mov Rm,Rn */
	IF(0x0C0891B8u); PR = R32(r15); r15 += 4; UPD(0x0C0891BAu, 2);  /* 0C0891B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0891BCu, 1);  /* 0C0891BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0891BEu, 1);  /* 0C0891BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0891C0u, 1);  /* 0C0891BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0891C2u, 1);  /* 0C0891C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0891C4u, 1);  /* 0C0891C2 mov.l @Rm+,Rn */
	IF(0x0C0891C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0891C4 rts */
L_0C089300: BLKS(0x0C089300u);
	r15 += 0xFFFFFFF8u;  /* 0C089300 add #imm,Rn */
	r7 = 0x80000u; UPD(0x0C089304u, 2);  /* 0C089302 mov.l @(disp,pc),Rn */
	r5 = 0xEu;  /* 0C089304 mov #imm,Rn */
	r10 += r7;  /* 0C089306 add Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08930Au, 3);  /* 0C089308 mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C08930A mov Rm,Rn */
	r9 = 0xFFC60000u; UPD(0x0C08930Eu, 2);  /* 0C08930C mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C08930E add Rm,Rn */
	r9 = 0xB0u; UPD(0x0C089312u, 2);  /* 0C089310 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C089312 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C089316u, 2);  /* 0C089314 mov.b @Rm,Rn */
	r8 = r2 & 0xFF;  /* 0C089316 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C08931Au, 2);  /* 0C089318 mov.l Rm,@Rn */
	r8 = 0xA9u; UPD(0x0C08931Cu, 1);  /* 0C08931A mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C08931C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C089320u, 2);  /* 0C08931E mov.b @Rm,Rn */
	r11 = r0 & 0xFF;  /* 0C089320 extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C089324u, 2);  /* 0C089322 mov.l Rm,@(disp,Rn) */
	r11 = 0xC0BD6F0u; UPD(0x0C089326u, 1);  /* 0C089324 mov.l @(disp,pc),Rn */
	IF(0x0C089326u); { u32 t_ = r11; PR = 0x0C08932Au; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08932Au); }  /* 0C089326 jsr @Rn */
L_0C08932A: BLKS(0x0C08932Au);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C08932Cu, 1);  /* 0C08932A mov.b @Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08932Eu, 1);  /* 0C08932C mov.l @(disp,Rm),Rn */
	r4 = r6 & 0xFF;  /* 0C08932E extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C089332u, 2);  /* 0C089330 mov.l Rm,@Rn */
	r6 = r10;  /* 0C089332 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C089336u, 2);  /* 0C089334 mov.b @Rm,Rn */
	r5 = 0xFFE30000u; UPD(0x0C089338u, 1);  /* 0C089336 mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFF;  /* 0C089338 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C08933Cu, 2);  /* 0C08933A mov.l Rm,@(disp,Rn) */
	r7 += r5;  /* 0C08933C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C089340u, 2);  /* 0C08933E mov.l @Rm,Rn */
	IF(0x0C089340u); { u32 t_ = r11; PR = 0x0C089344u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C089344u); }  /* 0C089340 jsr @Rn */
L_0C089344: BLKS(0x0C089344u);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C089346u, 1);  /* 0C089344 mov.b @Rm,Rn */
	r5 = r0 & 0xFF;  /* 0C089346 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C08934Au, 2);  /* 0C089348 mov.l Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C08934Cu, 1);  /* 0C08934A mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C08934C mov #imm,Rn */
	r7 = r6 & 0xFF;  /* 0C08934E extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C089352u, 3);  /* 0C089350 mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C089352 mov Rm,Rn */
	r4 = R32(r12); UPD(0x0C089356u, 2);  /* 0C089354 mov.l @Rm,Rn */
	IF(0x0C089356u); { u32 t_ = r11; PR = 0x0C08935Au; r7 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08935Au); }  /* 0C089356 jsr @Rn */
L_0C08935A: BLKS(0x0C08935Au);
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08935Cu, 1);  /* 0C08935A mov.b @Rm,Rn */
	r6 = r10;  /* 0C08935C mov Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C089360u, 2);  /* 0C08935E mov.l @(disp,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C089360 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C089364u, 2);  /* 0C089362 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C089366u, 1);  /* 0C089364 mov.b @Rm,Rn */
	r4 = 0x1D0000u; UPD(0x0C089368u, 1);  /* 0C089366 mov.l @(disp,pc),Rn */
	r5 = r0 & 0xFF;  /* 0C089368 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08936Cu, 2);  /* 0C08936A mov.l Rm,@(disp,Rn) */
	r7 += r4;  /* 0C08936C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C089370u, 2);  /* 0C08936E mov.l @Rm,Rn */
	IF(0x0C089370u); { u32 t_ = r11; PR = 0x0C089374u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C089374u); }  /* 0C089370 jsr @Rn */
L_0C089374: BLKS(0x0C089374u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C089376u, 1);  /* 0C089374 mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C089376 mov #imm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08937Au, 2);  /* 0C089378 mov.l @(disp,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C08937A extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C08937Eu, 2);  /* 0C08937C mov.l Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C089380u, 1);  /* 0C08937E mov.b @Rm,Rn */
	r6 = 0x3A0000u; UPD(0x0C089382u, 1);  /* 0C089380 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C089382 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C089386u, 2);  /* 0C089384 mov.l Rm,@(disp,Rn) */
	r7 += r6;  /* 0C089386 add Rm,Rn */
	r6 = r10;  /* 0C089388 mov Rm,Rn */
	IF(0x0C08938Au); { u32 t_ = r11; PR = 0x0C08938Eu; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08938Eu); }  /* 0C08938A jsr @Rn */
L_0C08938E: BLKS(0x0C08938Eu);
	r5 = 0xA5u; UPD(0x0C089390u, 1);  /* 0C08938E mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C089390 mov Rm,Rn */
	IF(0x0C089392u); r10 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C089394u, 2);  /* 0C089392 mov.b @(r0,Rm),Rn */
	r15 += 0x8u;  /* 0C089394 add #imm,Rn */
	r6 = 0xC19C300u; UPD(0x0C089398u, 2);  /* 0C089396 mov.l @(disp,pc),Rn */
	IF(0x0C089398u); r10 <<= 2;  /* 0C089398 shll2 Rn */
	r5 = R32(r12 + 0x24u); UPD(0x0C08939Cu, 2);  /* 0C08939A mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C08939C mov Rm,Rn */
	r7 = 0x40000u; UPD(0x0C0893A0u, 2);  /* 0C08939E mov.l @(disp,pc),Rn */
	r8 = 0xC07DF30u; UPD(0x0C0893A2u, 1);  /* 0C0893A0 mov.l @(disp,pc),Rn */
	r5 += r7;  /* 0C0893A2 add Rm,Rn */
	IF(0x0C0893A4u); r4 = R32(r0 + r6); UPD(0x0C0893A6u, 2);  /* 0C0893A4 mov.l @(r0,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C0893A8u, 1);  /* 0C0893A6 mov.b @Rm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C0893AAu, 1);  /* 0C0893A8 mov.l @(disp,Rm),Rn */
	IF(0x0C0893AAu); { u32 t_ = r8; PR = 0x0C0893AEu; r7 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C0893AEu); }  /* 0C0893AA jsr @Rn */
L_0C0893AE: BLKS(0x0C0893AEu);
	r4 = 0x0u;  /* 0C0893AE mov #imm,Rn */
	{ W32(r12, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C0891B6u, 4); goto L_0C0891B6; }  /* 0C0893B0 bra */
L_0C0893E0: BLKS(0x0C0893E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0893E2u, 1);  /* 0C0893E0 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0893E2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0893E6u, 2);  /* 0C0893E4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0893E8u, 1);  /* 0C0893E6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0893EAu, 1);  /* 0C0893E8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0893ECu, 1);  /* 0C0893EA mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0893EEu, 1);  /* 0C0893EC mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0893F0u, 1);  /* 0C0893EE mov.l Rm,@-Rn */
	IF(0x0C0893F0u); MACL = r1 * r3;  /* 0C0893F0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0893F4u, 3);  /* 0C0893F2 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0893F6u, 1);  /* 0C0893F4 mov.l @(disp,pc),Rn */
	IF(0x0C0893F6u); r2 = MACL;  /* 0C0893F6 sts macl,Rn */
	IF(0x0C0893F8u); r15 -= 4; W32(r15, PR); UPD(0x0C0893FAu, 2);  /* 0C0893F8 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0893FA add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0893FEu, 2);  /* 0C0893FC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0893FE add #imm,Rn */
	r14 = r15;  /* 0C089400 mov Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C089402 add #imm,Rn */
	r0 = 0x6u;  /* 0C089404 mov #imm,Rn */
	T = r2 > r0;  /* 0C089406 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W32(r14, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C089410u, 8); goto L_0C089410; } UPD(0x0C08940Cu, 1); goto L_0C08940C; }  /* 0C089408 bf/s */
L_0C08940C: BLKS(0x0C08940Cu);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C089506u, 3); goto L_0C089506; }  /* 0C08940C bra */
L_0C089410: BLKS(0x0C089410u);
	r0 = 0xC089420u;  /* 0C089410 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C089412 add Rm,Rn */
	IF(0x0C089414u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C089416u, 3);  /* 0C089414 mov.w @(r0,Rm),Rn */
	IF(0x0C089416u); { u32 tv_ = (r4 + 0x0C08941Au); u32 t_ = PHYS(tv_); IF(0x0C089418u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C089430u: goto L_0C089430; case 0x0C0895F0u: goto L_0C0895F0; case 0x0C0896B0u: goto L_0C0896B0; case 0x0C089880u: goto L_0C089880; case 0x0C089900u: goto L_0C089900; default: JUMPD(tv_); } }  /* 0C089416 braf Rn */
L_0C089430: BLKS(0x0C089430u);
	r8 = 0xC0A8CA0u; UPD(0x0C089432u, 1);  /* 0C089430 mov.l @(disp,pc),Rn */
	IF(0x0C089432u); { u32 t_ = r8; PR = 0x0C089436u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C089436u); }  /* 0C089432 jsr @Rn */
L_0C089436: BLKS(0x0C089436u);
	IF(0x0C089436u); T = (s32)r0 >= 0;  /* 0C089436 cmp/pz Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C089440u, 4); goto L_0C089440; } goto L_0C08943C; }  /* 0C089438 bt/s */
L_0C08943C: BLKS(0x0C08943Cu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C0895B2u, 4); goto L_0C0895B2; }  /* 0C08943C bra */
L_0C089440: BLKS(0x0C089440u);
	r7 = 0xB4u; UPD(0x0C089442u, 1);  /* 0C089440 mov.w @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C089444u, 1);  /* 0C089442 mov.l @Rm,Rn */
	IF(0x0C089444u); MACL = r0 * r7;  /* 0C089444 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C089448u, 3);  /* 0C089446 mov.l @(disp,pc),Rn */
	IF(0x0C089448u); r3 = MACL;  /* 0C089448 sts macl,Rn */
	IF(0x0C08944Au); MACL = r9 * r7;  /* 0C08944A mul.l Rm,Rn */
	r3 += r13;  /* 0C08944C add Rm,Rn */
	r6 = 0x9Fu; UPD(0x0C089450u, 5);  /* 0C08944E mov.w @(disp,pc),Rn */
	IF(0x0C089450u); r7 = MACL;  /* 0C089450 sts macl,Rn */
	r7 += r13;  /* 0C089452 add Rm,Rn */
	r11 = R32(r7 + 0x24u); UPD(0x0C089456u, 3);  /* 0C089454 mov.l @(disp,Rm),Rn */
	r0 = r3;  /* 0C089456 mov Rm,Rn */
	r9 = R32(r7 + 0x28u); UPD(0x0C08945Au, 2);  /* 0C089458 mov.l @(disp,Rm),Rn */
	r12 = R32(r3 + 0x2Cu); UPD(0x0C08945Cu, 1);  /* 0C08945A mov.l @(disp,Rm),Rn */
	r10 = R32(r3 + 0x30u); UPD(0x0C08945Eu, 1);  /* 0C08945C mov.l @(disp,Rm),Rn */
	r11 += r12;  /* 0C08945E add Rm,Rn */
	IF(0x0C089460u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C089462u, 2);  /* 0C089460 mov.b @(r0,Rm),Rn */
	r9 += r10;  /* 0C089462 add Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C089464 extu.b Rm,Rn */
	W32(r3 + 0x24u, r11); UPD(0x0C089468u, 3);  /* 0C089466 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C089468 tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x28u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C089520u, 4); goto L_0C089520; } UPD(0x0C08946Eu, 1); goto L_0C08946E; }  /* 0C08946A bt/s */
L_0C08946E: BLKS(0x0C08946Eu);
	T = r0 == 0x1u;  /* 0C08946E cmp/eq #imm,r0 */
	{ u32 c_ = T; r0 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0894B0u, 4); goto L_0C0894B0; } UPD(0x0C089474u, 1); goto L_0C089474; }  /* 0C089470 bt/s */
L_0C089474: BLKS(0x0C089474u);
	r2 = 0xB4u; UPD(0x0C089476u, 1);  /* 0C089474 mov.w @(disp,pc),Rn */
	r13 = 0x3Fu;  /* 0C089476 mov #imm,Rn */
	r0 = R32(r14); UPD(0x0C08947Au, 2);  /* 0C089478 mov.l @Rm,Rn */
	IF(0x0C08947Au); MACL = r0 * r2;  /* 0C08947A mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C08947Eu, 3);  /* 0C08947C mov.l @(disp,pc),Rn */
	IF(0x0C08947Eu); r2 = MACL;  /* 0C08947E sts macl,Rn */
	r2 += r8;  /* 0C089480 add Rm,Rn */
	r7 = 0x86u; UPD(0x0C089484u, 3);  /* 0C089482 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C089484 mov Rm,Rn */
	IF(0x0C089486u); r1 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C089488u, 2);  /* 0C089486 mov.w @(r0,Rm),Rn */
	r1 += 0x4u;  /* 0C089488 add #imm,Rn */
	IF(0x0C08948Au); r1 >>= 2;  /* 0C08948A shlr2 Rn */
	IF(0x0C08948Cu); T = r1 & 1; r1 >>= 1;  /* 0C08948C shlr Rn */
	r1 &= r13;  /* 0C08948E and Rm,Rn */
	UPD(0x0C089490u, 4);
L_0C089490: BLKS(0x0C089490u);
	W32(r2 + 0xCu, r1); UPD(0x0C089492u, 1);  /* 0C089490 mov.l Rm,@(disp,Rn) */
L_0C089492: BLKS(0x0C089492u);
	r4 = R32(r14); UPD(0x0C089494u, 1);  /* 0C089492 mov.l @Rm,Rn */
	r1 = 0xC0A8AE0u; UPD(0x0C089496u, 1);  /* 0C089494 mov.l @(disp,pc),Rn */
L_0C089496: BLKS(0x0C089496u);
	r14 += 0x4u;  /* 0C089496 add #imm,Rn */
	UPD(0x0C089498u, 1);
L_0C089498: BLKS(0x0C089498u);
	r15 = r14;  /* 0C089498 mov Rm,Rn */
	IF(0x0C08949Au); PR = R32(r15); r15 += 4; UPD(0x0C08949Cu, 2);  /* 0C08949A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08949Eu, 1);  /* 0C08949C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0894A0u, 1);  /* 0C08949E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0894A2u, 1);  /* 0C0894A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0894A4u, 1);  /* 0C0894A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0894A6u, 1);  /* 0C0894A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0894A8u, 1);  /* 0C0894A6 mov.l @Rm+,Rn */
	IF(0x0C0894A8u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C089110u: goto L_0C089110; case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C0894A8 jmp @Rn */
L_0C0894B0: BLKS(0x0C0894B0u);
	r11 = 0xA5u; UPD(0x0C0894B2u, 1);  /* 0C0894B0 mov.w @(disp,pc),Rn */
	IF(0x0C0894B2u); r2 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0894B4u, 1);  /* 0C0894B2 mov.b @(r0,Rm),Rn */
	r13 = 0x0u;  /* 0C0894B4 mov #imm,Rn */
	r5 = 0x88u; UPD(0x0C0894B8u, 2);  /* 0C0894B6 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0894B8 add #imm,Rn */
	r7 = 0x84u; UPD(0x0C0894BCu, 2);  /* 0C0894BA mov.w @(disp,pc),Rn */
	r5 += r3;  /* 0C0894BC add Rm,Rn */
	r4 = 0xFFu; UPD(0x0C0894C0u, 2);  /* 0C0894BE mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C0894C0 add Rm,Rn */
	IF(0x0C0894C2u); ;  /* 0C0894C2 nop */
	UPD(0x0C0894C4u, 2);
L_0C0894C4: BLKS(0x0C0894C4u);
	T = (s32)r13 >= (s32)r2;  /* 0C0894C4 cmp/ge Rm,Rn */
	{ u32 c_ = T; r6 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C089474u, 4); goto L_0C089474; } goto L_0C0894CA; }  /* 0C0894C6 bt/s */
L_0C0894CA: BLKS(0x0C0894CAu);
	r6 += 0x2u;  /* 0C0894CA add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r5); UPD(0x0C0894CEu, 3);  /* 0C0894CC mov.w @Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r6); UPD(0x0C0894D0u, 1);  /* 0C0894CE mov.w @Rm,Rn */
	r11 = r10;  /* 0C0894D0 mov Rm,Rn */
	r12 = 0x1FFu; UPD(0x0C0894D4u, 2);  /* 0C0894D2 mov.w @(disp,pc),Rn */
	r11 -= r3;  /* 0C0894D4 sub Rm,Rn */
	r11 &= r12;  /* 0C0894D6 and Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C0894D8 tst Rm,Rn */
	if (T) { UPD(0x0C089500u, 6); goto L_0C089500; }  /* 0C0894DA bt */
L_0C0894DC: BLKS(0x0C0894DCu);
	T = (s32)r11 > (s32)r4;  /* 0C0894DC cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0894F0u, 4); goto L_0C0894F0; } goto L_0C0894E2; }  /* 0C0894DE bt/s */
L_0C0894E2: BLKS(0x0C0894E2u);
	r1 = r3;  /* 0C0894E2 mov Rm,Rn */
	r1 += 0x1u;  /* 0C0894E4 add #imm,Rn */
	UPD(0x0C0894E6u, 3);
L_0C0894E6: BLKS(0x0C0894E6u);
	r3 = r13;  /* 0C0894E6 mov Rm,Rn */
	r3 += 0x1u;  /* 0C0894E8 add #imm,Rn */
	W16(r6, r1); UPD(0x0C0894ECu, 3);  /* 0C0894EA mov.w Rm,@Rn */
	{ r13 = (u32)(s32)(s16)r3; /* slot exts.w Rm,Rn */ UPD(0x0C0894C4u, 3); goto L_0C0894C4; }  /* 0C0894EC bra */
L_0C0894F0: BLKS(0x0C0894F0u);
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C0894E6u, 3); goto L_0C0894E6; }  /* 0C0894F0 bra */
L_0C089500: BLKS(0x0C089500u);
	r6 = 0x9Fu; UPD(0x0C089502u, 1);  /* 0C089500 mov.w @(disp,pc),Rn */
	IF(0x0C089502u); W8(r0 + r6, r11); UPD(0x0C089504u, 1);  /* 0C089502 mov.b Rm,@(r0,Rn) */
L_0C089504: BLKS(0x0C089504u);
	r14 += 0x4u;  /* 0C089504 add #imm,Rn */
	UPD(0x0C089506u, 1);
L_0C089506: BLKS(0x0C089506u);
	r15 = r14;  /* 0C089506 mov Rm,Rn */
	IF(0x0C089508u); PR = R32(r15); r15 += 4; UPD(0x0C08950Au, 2);  /* 0C089508 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08950Cu, 1);  /* 0C08950A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08950Eu, 1);  /* 0C08950C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C089510u, 1);  /* 0C08950E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C089512u, 1);  /* 0C089510 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C089514u, 1);  /* 0C089512 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C089516u, 1);  /* 0C089514 mov.l @Rm+,Rn */
	IF(0x0C089516u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C089516 rts */
L_0C089520: BLKS(0x0C089520u);
	r6 = 0x98u; UPD(0x0C089522u, 1);  /* 0C089520 mov.w @(disp,pc),Rn */
	r10 = 0x1Du;  /* 0C089522 mov #imm,Rn */
	r6 += r3;  /* 0C089524 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C089528u, 3);  /* 0C089526 mov.b @Rm,Rn */
	r0 = r3;  /* 0C089528 mov Rm,Rn */
	r2 += 0x1u;  /* 0C08952A add #imm,Rn */
	r5 = 0xA5u; UPD(0x0C08952Eu, 3);  /* 0C08952C mov.w @(disp,pc),Rn */
	r9 = r2 & 0xFF;  /* 0C08952E extu.b Rm,Rn */
	W8(r6, r2); UPD(0x0C089532u, 2);  /* 0C089530 mov.b Rm,@Rn */
	T = r10 >= r9;  /* 0C089532 cmp/hs Rm,Rn */
	IF(0x0C089534u); r8 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C089536u, 2);  /* 0C089534 mov.b @(r0,Rm),Rn */
	IF(0x0C089536u); r2 = T;  /* 0C089536 movt Rn */
	T = (r8 & r8) == 0;  /* 0C089538 tst Rm,Rn */
	IF(0x0C08953Au); r4 = T;  /* 0C08953A movt Rn */
	r2 &= r4;  /* 0C08953C and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C08953E tst Rm,Rn */
	if (!T) { UPD(0x0C089504u, 8); goto L_0C089504; }  /* 0C089540 bf */
L_0C089542: BLKS(0x0C089542u);
	W8(r6, r2); UPD(0x0C089544u, 1);  /* 0C089542 mov.b Rm,@Rn */
	r1 = R32(r7 + 0x24u); UPD(0x0C089546u, 1);  /* 0C089544 mov.l @(disp,Rm),Rn */
	r6 = 0x3FFFFFu; UPD(0x0C089548u, 1);  /* 0C089546 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r6;  /* 0C089548 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C089570u, 4); goto L_0C089570; }  /* 0C08954A bt */
L_0C08954C: BLKS(0x0C08954Cu);
	r11 = 0x88u; UPD(0x0C08954Eu, 1);  /* 0C08954C mov.w @(disp,pc),Rn */
	r11 += r3;  /* 0C08954E add Rm,Rn */
	r11 += 0x2u;  /* 0C089550 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r11); UPD(0x0C089554u, 3);  /* 0C089552 mov.w @Rm,Rn */
	{ u32 v_ = r3; r11 -= 2; W16(r11, v_); } UPD(0x0C089556u, 1);  /* 0C089554 mov.w Rm,@-Rn */
L_0C089556: BLKS(0x0C089556u);
	r1 = R32(r14); UPD(0x0C089558u, 1);  /* 0C089556 mov.l @Rm,Rn */
	r6 = 0xB4u; UPD(0x0C08955Au, 1);  /* 0C089558 mov.w @(disp,pc),Rn */
	IF(0x0C08955Au); MACL = r1 * r6;  /* 0C08955A mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C08955Eu, 3);  /* 0C08955C mov.l @(disp,pc),Rn */
	IF(0x0C08955Eu); r0 = MACL;  /* 0C08955E sts macl,Rn */
	r5 = 0x9Fu; UPD(0x0C089562u, 2);  /* 0C089560 mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C089562 add Rm,Rn */
	r0 += r5;  /* 0C089564 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C089568u, 3);  /* 0C089566 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C089568 add #imm,Rn */
	{ W8(r0, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C089474u, 4); goto L_0C089474; }  /* 0C08956A bra */
L_0C089570: BLKS(0x0C089570u);
	r9 = 0x88u; UPD(0x0C089572u, 1);  /* 0C089570 mov.w @(disp,pc),Rn */
	r9 += r3;  /* 0C089572 add Rm,Rn */
	r8 = r9;  /* 0C089574 mov Rm,Rn */
	r8 += 0x2u;  /* 0C089576 add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C08957Au, 4);  /* 0C089578 mov.w @Rm,Rn */
	r12 = 0x100u; UPD(0x0C08957Cu, 1);  /* 0C08957A mov.w @(disp,pc),Rn */
	T = r13 == r12;  /* 0C08957C cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0895A0u, 4); goto L_0C0895A0; }  /* 0C08957E bt */
L_0C089580: BLKS(0x0C089580u);
	r10 = 0xC062780u; UPD(0x0C089582u, 1);  /* 0C089580 mov.l @(disp,pc),Rn */
	r4 = 0xFFu; UPD(0x0C089584u, 1);  /* 0C089582 mov.w @(disp,pc),Rn */
	IF(0x0C089584u); { u32 t_ = r10; PR = 0x0C089588u; IF(0x0C089586u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C089588u); }  /* 0C089584 jsr @Rn */
L_0C089588: BLKS(0x0C089588u);
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C08958Au, 1);  /* 0C089588 mov.w @Rm,Rn */
	r0 += r7;  /* 0C08958A add Rm,Rn */
	r0 += 0xFFFFFF80u;  /* 0C08958C add #imm,Rn */
	{ W16(r9, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C089556u, 5); goto L_0C089556; }  /* 0C08958E bra */
L_0C0895A0: BLKS(0x0C0895A0u);
	r8 = 0xC062780u; UPD(0x0C0895A2u, 1);  /* 0C0895A0 mov.l @(disp,pc),Rn */
	r4 = 0x200u; UPD(0x0C0895A4u, 1);  /* 0C0895A2 mov.w @(disp,pc),Rn */
	IF(0x0C0895A4u); { u32 t_ = r8; PR = 0x0C0895A8u; IF(0x0C0895A6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0895A8u); }  /* 0C0895A4 jsr @Rn */
L_0C0895A8: BLKS(0x0C0895A8u);
	{ W16(r9, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C089556u, 3); goto L_0C089556; }  /* 0C0895A8 bra */
L_0C0895B0: BLKS(0x0C0895B0u);
	r4 = R32(r14); UPD(0x0C0895B2u, 1);  /* 0C0895B0 mov.l @Rm,Rn */
L_0C0895B2: BLKS(0x0C0895B2u);
	r1 = 0xC089110u; UPD(0x0C0895B4u, 1);  /* 0C0895B2 mov.l @(disp,pc),Rn */
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C089498u, 3); goto L_0C089498; }  /* 0C0895B4 bra */
L_0C0895F0: BLKS(0x0C0895F0u);
	r8 = 0xC0A8B50u; UPD(0x0C0895F2u, 1);  /* 0C0895F0 mov.l @(disp,pc),Rn */
	IF(0x0C0895F2u); { u32 t_ = r8; PR = 0x0C0895F6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0895F6u); }  /* 0C0895F2 jsr @Rn */
L_0C0895F6: BLKS(0x0C0895F6u);
	IF(0x0C0895F6u); T = (s32)r0 >= 0;  /* 0C0895F6 cmp/pz Rn */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0895B0u, 4); goto L_0C0895B0; } goto L_0C0895FC; }  /* 0C0895F8 bf/s */
L_0C0895FC: BLKS(0x0C0895FCu);
	r8 = R32(r14); UPD(0x0C0895FEu, 2);  /* 0C0895FC mov.l @Rm,Rn */
	r10 = 0xB4u; UPD(0x0C089600u, 1);  /* 0C0895FE mov.w @(disp,pc),Rn */
	IF(0x0C089600u); MACL = r8 * r10;  /* 0C089600 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C089604u, 3);  /* 0C089602 mov.l @(disp,pc),Rn */
	IF(0x0C089604u); r8 = MACL;  /* 0C089604 sts macl,Rn */
	IF(0x0C089606u); MACL = r0 * r10;  /* 0C089606 mul.l Rm,Rn */
	r8 += r6;  /* 0C089608 add Rm,Rn */
	r12 = 0x98u; UPD(0x0C08960Cu, 5);  /* 0C08960A mov.w @(disp,pc),Rn */
	IF(0x0C08960Cu); r10 = MACL;  /* 0C08960C sts macl,Rn */
	r11 = r8;  /* 0C08960E mov Rm,Rn */
	r10 += r6;  /* 0C089610 add Rm,Rn */
	r11 += r12;  /* 0C089612 add Rm,Rn */
	r5 = 0xA4u; UPD(0x0C089616u, 5);  /* 0C089614 mov.w @(disp,pc),Rn */
	r12 += r10;  /* 0C089616 add Rm,Rn */
	r2 = 0x84u; UPD(0x0C08961Au, 2);  /* 0C089618 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C08961A mov Rm,Rn */
	r12 += 0x2u;  /* 0C08961C add #imm,Rn */
	r0 += r5;  /* 0C08961E add Rm,Rn */
	r6 = r8;  /* 0C089620 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C089624u, 5);  /* 0C089622 mov.b @Rm,Rn */
	r5 += r8;  /* 0C089624 add Rm,Rn */
	r6 += r2;  /* 0C089626 add Rm,Rn */
	r11 += 0x2u;  /* 0C089628 add #imm,Rn */
	r5 += 0x1u;  /* 0C08962A add #imm,Rn */
	r2 += r10;  /* 0C08962C add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r5); UPD(0x0C089630u, 6);  /* 0C08962E mov.b @Rm,Rn */
	r2 += 0x2u;  /* 0C089630 add #imm,Rn */
	W8(r11, r3); UPD(0x0C089634u, 2);  /* 0C089632 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C089634 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r2); UPD(0x0C089638u, 2);  /* 0C089636 mov.w @Rm,Rn */
	r8 += 0x50u;  /* 0C089638 add #imm,Rn */
	r4 = 0x1FFu; UPD(0x0C08963Cu, 2);  /* 0C08963A mov.w @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C08963C add #imm,Rn */
	r12 = 0xC069B20u; UPD(0x0C089640u, 2);  /* 0C08963E mov.l @(disp,pc),Rn */
	r7 &= r4;  /* 0C089640 and Rm,Rn */
	r11 = R32(r8); UPD(0x0C089644u, 2);  /* 0C089642 mov.l @Rm,Rn */
	r4 = r7;  /* 0C089644 mov Rm,Rn */
	W8(r0, r13); UPD(0x0C089648u, 2);  /* 0C089646 mov.b Rm,@Rn */
	r5 = r11;  /* 0C089648 mov Rm,Rn */
	r13 = r7;  /* 0C08964A mov Rm,Rn */
	IF(0x0C08964Cu); { u32 t_ = r12; PR = 0x0C089650u; W16(r6, r7); /* slot mov.w Rm,@Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C089650u); }  /* 0C08964C jsr @Rn */
L_0C089650: BLKS(0x0C089650u);
	r3 = R32(r10 + 0x24u); UPD(0x0C089652u, 1);  /* 0C089650 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C089652 add #imm,Rn */
	r12 = 0xC069AF0u; UPD(0x0C089656u, 2);  /* 0C089654 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C089656 add Rm,Rn */
	r4 = r13;  /* 0C089658 mov Rm,Rn */
	r5 = r11;  /* 0C08965A mov Rm,Rn */
	IF(0x0C08965Cu); { u32 t_ = r12; PR = 0x0C089660u; W32(r8 + 0x24u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C089660u); }  /* 0C08965C jsr @Rn */
L_0C089660: BLKS(0x0C089660u);
	r5 = R32(r10 + 0x28u); UPD(0x0C089662u, 1);  /* 0C089660 mov.l @(disp,Rm),Rn */
	r13 += 0xFFFFFF80u;  /* 0C089662 add #imm,Rn */
	r5 += r0;  /* 0C089664 add Rm,Rn */
	r1 = 0x100u; UPD(0x0C089668u, 3);  /* 0C089666 mov.w @(disp,pc),Rn */
	r0 = r13 & 0xFFFF;  /* 0C089668 extu.w Rm,Rn */
	T = r0 > r1;  /* 0C08966A cmp/hi Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0896A0u, 5); goto L_0C0896A0; } UPD(0x0C089670u, 1); goto L_0C089670; }  /* 0C08966C bf/s */
L_0C089670: BLKS(0x0C089670u);
	r1 += 0xFFFFFFA8u;  /* 0C089670 add #imm,Rn */
	r10 += r1;  /* 0C089672 add Rm,Rn */
	r8 += r1;  /* 0C089674 add Rm,Rn */
	r10 += 0x1u;  /* 0C089676 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C08967Au, 5);  /* 0C089678 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C08967A add #imm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C08967C add #imm,Rn */
	UPD(0x0C08967Eu, 2);
L_0C08967E: BLKS(0x0C08967Eu);
	W8(r8, r1); UPD(0x0C089680u, 1);  /* 0C08967E mov.b Rm,@Rn */
	r0 = 0xB4u; UPD(0x0C089682u, 1);  /* 0C089680 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C089684u, 1);  /* 0C089682 mov.l @Rm,Rn */
	IF(0x0C089684u); MACL = r1 * r0;  /* 0C089684 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C089688u, 3);  /* 0C089686 mov.l @(disp,pc),Rn */
	IF(0x0C089688u); r4 = MACL;  /* 0C089688 sts macl,Rn */
	IF(0x0C08968Au); MACL = r9 * r0;  /* 0C08968A mul.l Rm,Rn */
	IF(0x0C08968Cu); r9 = MACL;  /* 0C08968C sts macl,Rn */
	r9 += r2;  /* 0C08968E add Rm,Rn */
	r1 = R32(r9 + 0xCu); UPD(0x0C089692u, 6);  /* 0C089690 mov.l @(disp,Rm),Rn */
	{ r2 += r4; /* slot add Rm,Rn */ UPD(0x0C089490u, 3); goto L_0C089490; }  /* 0C089692 bra */
L_0C0896A0: BLKS(0x0C0896A0u);
	r7 = 0xA8u; UPD(0x0C0896A2u, 1);  /* 0C0896A0 mov.w @(disp,pc),Rn */
	r10 += r7;  /* 0C0896A2 add Rm,Rn */
	r10 += 0x1u;  /* 0C0896A4 add #imm,Rn */
	r8 += r7;  /* 0C0896A6 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C0896AAu, 4);  /* 0C0896A8 mov.b @Rm,Rn */
	{ r8 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C08967Eu, 3); goto L_0C08967E; }  /* 0C0896AA bra */
L_0C0896B0: BLKS(0x0C0896B0u);
	r9 = 0xC0A8CA0u; UPD(0x0C0896B2u, 1);  /* 0C0896B0 mov.l @(disp,pc),Rn */
	IF(0x0C0896B2u); { u32 t_ = r9; PR = 0x0C0896B6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0896B6u); }  /* 0C0896B2 jsr @Rn */
L_0C0896B6: BLKS(0x0C0896B6u);
	IF(0x0C0896B6u); T = (s32)r0 >= 0;  /* 0C0896B6 cmp/pz Rn */
	{ u32 c_ = T; r5 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0896C0u, 4); goto L_0C0896C0; } goto L_0C0896BC; }  /* 0C0896B8 bt/s */
L_0C0896BC: BLKS(0x0C0896BCu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C0895B2u, 4); goto L_0C0895B2; }  /* 0C0896BC bra */
L_0C0896C0: BLKS(0x0C0896C0u);
	r10 = 0xB4u; UPD(0x0C0896C2u, 1);  /* 0C0896C0 mov.w @(disp,pc),Rn */
	IF(0x0C0896C2u); MACL = r0 * r10;  /* 0C0896C2 mul.l Rm,Rn */
	r8 = R32(r14); UPD(0x0C0896C6u, 3);  /* 0C0896C4 mov.l @Rm,Rn */
	IF(0x0C0896C6u); r11 = MACL;  /* 0C0896C6 sts macl,Rn */
	IF(0x0C0896C8u); MACL = r8 * r10;  /* 0C0896C8 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C0896CCu, 4);  /* 0C0896CA mov.l @(disp,pc),Rn */
	IF(0x0C0896CCu); r10 = MACL;  /* 0C0896CC sts macl,Rn */
	r10 += r13;  /* 0C0896CE add Rm,Rn */
	r4 = 0x9Au; UPD(0x0C0896D2u, 3);  /* 0C0896D0 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C0896D2 mov Rm,Rn */
	IF(0x0C0896D4u); W8(r0 + r4, r5); UPD(0x0C0896D6u, 2);  /* 0C0896D4 mov.b Rm,@(r0,Rn) */
	r11 += r13;  /* 0C0896D6 add Rm,Rn */
	r12 = R32(r11 + 0x24u); UPD(0x0C0896DAu, 2);  /* 0C0896D8 mov.l @(disp,Rm),Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C0896DCu, 1);  /* 0C0896DA mov.l @(disp,Rm),Rn */
	r3 = R32(r10 + 0x2Cu); UPD(0x0C0896DEu, 1);  /* 0C0896DC mov.l @(disp,Rm),Rn */
	r1 = R32(r10 + 0x30u); UPD(0x0C0896E0u, 1);  /* 0C0896DE mov.l @(disp,Rm),Rn */
	r12 += r3;  /* 0C0896E0 add Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C0896E4u, 2);  /* 0C0896E2 mov.w @(disp,pc),Rn */
	r6 += r1;  /* 0C0896E4 add Rm,Rn */
	IF(0x0C0896E6u); r5 = R32(r0 + r10); UPD(0x0C0896E8u, 2);  /* 0C0896E6 mov.l @(r0,Rm),Rn */
	W32(r10 + 0x24u, r12); UPD(0x0C0896EAu, 1);  /* 0C0896E8 mov.l Rm,@(disp,Rn) */
	T = (r5 & r5) == 0;  /* 0C0896EA tst Rm,Rn */
	{ u32 c_ = !T; W32(r10 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0896F4u, 4); goto L_0C0896F4; } UPD(0x0C0896F0u, 1); goto L_0C0896F0; }  /* 0C0896EC bf/s */
L_0C0896F0: BLKS(0x0C0896F0u);
	{ IF(0x0C0896F2u); ; /* slot nop */ UPD(0x0C089810u, 3); goto L_0C089810; }  /* 0C0896F0 bra */
L_0C0896F4: BLKS(0x0C0896F4u);
	r11 = 0x84u; UPD(0x0C0896F6u, 1);  /* 0C0896F4 mov.w @(disp,pc),Rn */
	r13 = r5;  /* 0C0896F6 mov Rm,Rn */
	r4 = 0xFFFFC000u; UPD(0x0C0896FAu, 2);  /* 0C0896F8 mov.w @(disp,pc),Rn */
	r11 += r10;  /* 0C0896FA add Rm,Rn */
	r4 += r5;  /* 0C0896FC add Rm,Rn */
	r6 = 0xC069B20u; UPD(0x0C089700u, 3);  /* 0C0896FE mov.l @(disp,pc),Rn */
	r11 += 0x2u;  /* 0C089700 add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r11); UPD(0x0C089704u, 2);  /* 0C089702 mov.w @Rm,Rn */
	IF(0x0C089704u); W32(r0 + r10, r4); UPD(0x0C089706u, 1);  /* 0C089704 mov.l Rm,@(r0,Rn) */
	IF(0x0C089706u); { u32 t_ = r6; PR = 0x0C08970Au; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08970Au); }  /* 0C089706 jsr @Rn */
L_0C08970A: BLKS(0x0C08970Au);
	r9 = R32(r10 + 0x24u); UPD(0x0C08970Cu, 1);  /* 0C08970A mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C08970C mov Rm,Rn */
	r2 = 0xC069AF0u; UPD(0x0C089710u, 2);  /* 0C08970E mov.l @(disp,pc),Rn */
	r9 -= r0;  /* 0C089710 sub Rm,Rn */
	r5 = r13;  /* 0C089712 mov Rm,Rn */
	IF(0x0C089714u); { u32 t_ = r2; PR = 0x0C089718u; W32(r10 + 0x24u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C089718u); }  /* 0C089714 jsr @Rn */
L_0C089718: BLKS(0x0C089718u);
	r7 = R32(r10 + 0x28u); UPD(0x0C08971Au, 1);  /* 0C089718 mov.l @(disp,Rm),Rn */
	r13 = 0x0u;  /* 0C08971A mov #imm,Rn */
	r7 -= r0;  /* 0C08971C sub Rm,Rn */
	W32(r10 + 0x28u, r7); UPD(0x0C089720u, 3);  /* 0C08971E mov.l Rm,@(disp,Rn) */
	r12 = r10;  /* 0C089720 mov Rm,Rn */
	IF(0x0C089722u); ;  /* 0C089722 nop */
	UPD(0x0C089724u, 2);
L_0C089724: BLKS(0x0C089724u);
	r2 = 0x86u; UPD(0x0C089726u, 1);  /* 0C089724 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C089726 mov Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C08972Au, 2);  /* 0C089728 mov.l @(disp,pc),Rn */
	r8 = r13;  /* 0C08972A mov Rm,Rn */
	IF(0x0C08972Cu); r11 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08972Eu, 2);  /* 0C08972C mov.w @(r0,Rm),Rn */
	IF(0x0C08972Eu); r8 <<= 2;  /* 0C08972E shll2 Rn */
	r5 = 0x50000u; UPD(0x0C089732u, 2);  /* 0C089730 mov.l @(disp,pc),Rn */
	IF(0x0C089732u); { u32 t_ = r10; PR = 0x0C089736u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C089736u); }  /* 0C089732 jsr @Rn */
L_0C089736: BLKS(0x0C089736u);
	r10 = R32(r12 + 0x24u); UPD(0x0C089738u, 1);  /* 0C089736 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C089738 mov Rm,Rn */
	r10 += r0;  /* 0C08973A add Rm,Rn */
	r0 = 0xC19C30Cu; UPD(0x0C08973Eu, 3);  /* 0C08973C mov.l @(disp,pc),Rn */
	r6 = 0xC069AF0u; UPD(0x0C089740u, 1);  /* 0C08973E mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C089740 add Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C089744u, 2);  /* 0C089742 mov.l @(disp,pc),Rn */
	IF(0x0C089744u); { u32 t_ = r6; PR = 0x0C089748u; r5 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C089748u); }  /* 0C089744 jsr @Rn */
L_0C089748: BLKS(0x0C089748u);
	r10 -= r0;  /* 0C089748 sub Rm,Rn */
	r5 = 0x50000u; UPD(0x0C08974Cu, 2);  /* 0C08974A mov.l @(disp,pc),Rn */
	IF(0x0C08974Cu); { u32 t_ = r9; PR = 0x0C089750u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C089750u); }  /* 0C08974C jsr @Rn */
L_0C089750: BLKS(0x0C089750u);
	r1 = 0xC069B20u; UPD(0x0C089752u, 1);  /* 0C089750 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C089752 mov Rm,Rn */
	r9 = R32(r12 + 0x28u); UPD(0x0C089756u, 2);  /* 0C089754 mov.l @(disp,Rm),Rn */
	r5 = R32(r8); UPD(0x0C089758u, 1);  /* 0C089756 mov.l @Rm,Rn */
	IF(0x0C089758u); { u32 t_ = r1; PR = 0x0C08975Cu; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08975Cu); }  /* 0C089758 jsr @Rn */
L_0C08975C: BLKS(0x0C08975Cu);
	r9 += r0;  /* 0C08975C add Rm,Rn */
	r7 = 0xC19C314u; UPD(0x0C089760u, 2);  /* 0C08975E mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C089760 mov Rm,Rn */
	r0 += r0;  /* 0C089762 add Rm,Rn */
	r8 = 0xC062780u; UPD(0x0C089766u, 3);  /* 0C089764 mov.l @(disp,pc),Rn */
	r4 = 0x1Fu;  /* 0C089766 mov #imm,Rn */
	IF(0x0C089768u); r3 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C08976Au, 2);  /* 0C089768 mov.w @(r0,Rm),Rn */
	IF(0x0C08976Au); { u32 t_ = r8; PR = 0x0C08976Eu; r11 += r3; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08976Eu); }  /* 0C08976A jsr @Rn */
L_0C08976E: BLKS(0x0C08976Eu);
	r0 += r11;  /* 0C08976E add Rm,Rn */
	r0 += 0xFFFFFFF0u;  /* 0C089770 add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C089772 exts.w Rm,Rn */
	r0 = 0xB0u; UPD(0x0C089776u, 4);  /* 0C089774 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C089776 add #imm,Rn */
	IF(0x0C089778u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C08977Au, 2);  /* 0C089778 mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C08977A extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C08977Eu, 2);  /* 0C08977C mov.l Rm,@Rn */
	r0 = r12;  /* 0C08977E mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C089782u, 2);  /* 0C089780 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C089782 mov Rm,Rn */
	IF(0x0C089784u); r2 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C089786u, 2);  /* 0C089784 mov.b @(r0,Rm),Rn */
	r8 = r2 & 0xFF;  /* 0C089786 extu.b Rm,Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C08978Au, 2);  /* 0C089788 mov.l Rm,@(disp,Rn) */
	r7 = 0xC069B20u; UPD(0x0C08978Cu, 1);  /* 0C08978A mov.l @(disp,pc),Rn */
	r8 = 0x20000u; UPD(0x0C08978Eu, 1);  /* 0C08978C mov.l @(disp,pc),Rn */
	IF(0x0C08978Eu); { u32 t_ = r7; PR = 0x0C089792u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C089792u); }  /* 0C08978E jsr @Rn */
L_0C089792: BLKS(0x0C089792u);
	r1 = 0xC069AF0u; UPD(0x0C089794u, 1);  /* 0C089792 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C089794 mov Rm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C089798u, 2);  /* 0C089796 mov.l Rm,@(disp,Rn) */
	IF(0x0C089798u); { u32 t_ = r1; PR = 0x0C08979Cu; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08979Cu); }  /* 0C089798 jsr @Rn */
L_0C08979C: BLKS(0x0C08979Cu);
	r3 = 0x808080u; UPD(0x0C08979Eu, 1);  /* 0C08979C mov.l @(disp,pc),Rn */
	r6 = r10;  /* 0C08979E mov Rm,Rn */
	r10 = 0xC0BEEF0u; UPD(0x0C0897A2u, 2);  /* 0C0897A0 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C0897A2 mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0897A6u, 2);  /* 0C0897A4 mov.l Rm,@(disp,Rn) */
	r7 = r9;  /* 0C0897A6 mov Rm,Rn */
	W32(r15 + 0x10u, r3); UPD(0x0C0897AAu, 2);  /* 0C0897A8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0897AAu); { u32 t_ = r10; PR = 0x0C0897AEu; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C0897AEu); }  /* 0C0897AA jsr @Rn */
L_0C0897AE: BLKS(0x0C0897AEu);
	r5 = r13;  /* 0C0897AE mov Rm,Rn */
	r5 += 0x1u;  /* 0C0897B0 add #imm,Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C0897B2 exts.w Rm,Rn */
	r0 = 0x1u;  /* 0C0897B4 mov #imm,Rn */
	T = (s32)r13 > (s32)r0;  /* 0C0897B6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C089724u, 8); goto L_0C089724; } UPD(0x0C0897BCu, 1); goto L_0C0897BC; }  /* 0C0897B8 bf/s */
L_0C0897BC: BLKS(0x0C0897BCu);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C089506u, 3); goto L_0C089506; }  /* 0C0897BC bra */
L_0C089810: BLKS(0x0C089810u);
	r10 = 0xC069BF0u; UPD(0x0C089812u, 1);  /* 0C089810 mov.l @(disp,pc),Rn */
	r9 = 0xC068F00u; UPD(0x0C089814u, 1);  /* 0C089812 mov.l @(disp,pc),Rn */
	IF(0x0C089814u); { u32 t_ = r10; PR = 0x0C089818u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C089818u); }  /* 0C089814 jsr @Rn */
L_0C089818: BLKS(0x0C089818u);
	r4 = R32(r14); UPD(0x0C08981Au, 1);  /* 0C089818 mov.l @Rm,Rn */
	IF(0x0C08981Au); { u32 t_ = r9; PR = 0x0C08981Eu; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08981Eu); }  /* 0C08981A jsr @Rn */
L_0C08981E: BLKS(0x0C08981Eu);
	r11 = R32(r14); UPD(0x0C089820u, 1);  /* 0C08981E mov.l @Rm,Rn */
	r5 = 0x1Fu;  /* 0C089820 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C089824u, 2);  /* 0C089822 mov.w @(disp,pc),Rn */
	IF(0x0C089824u); MACL = r11 * r8;  /* 0C089824 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C089828u, 3);  /* 0C089826 mov.l @(disp,pc),Rn */
	IF(0x0C089828u); r8 = MACL;  /* 0C089828 sts macl,Rn */
	r8 += r7;  /* 0C08982A add Rm,Rn */
	r3 = 0x86u; UPD(0x0C08982Eu, 3);  /* 0C08982C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08982E mov Rm,Rn */
	IF(0x0C089830u); r4 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C089832u, 2);  /* 0C089830 mov.w @(r0,Rm),Rn */
	r4 += 0x8u;  /* 0C089832 add #imm,Rn */
	IF(0x0C089834u); r4 >>= 2;  /* 0C089834 shlr2 Rn */
	IF(0x0C089836u); r4 >>= 2;  /* 0C089836 shlr2 Rn */
	r4 &= r5;  /* 0C089838 and Rm,Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C08983Cu, 5);  /* 0C08983A mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C08983Eu, 1);  /* 0C08983C mov.l Rm,@(disp,Rn) */
	r13 = 0xC0BC1B0u; UPD(0x0C089840u, 1);  /* 0C08983E mov.l @(disp,pc),Rn */
	IF(0x0C089840u); { u32 t_ = r12; PR = 0x0C089844u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C089844u); }  /* 0C089840 jsr @Rn */
L_0C089844: BLKS(0x0C089844u);
	r4 = R32(r14); UPD(0x0C089846u, 1);  /* 0C089844 mov.l @Rm,Rn */
	r5 = 0x5Au;  /* 0C089846 mov #imm,Rn */
	IF(0x0C089848u); { u32 t_ = r13; PR = 0x0C08984Cu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08984Cu); }  /* 0C089848 jsr @Rn */
L_0C08984C: BLKS(0x0C08984Cu);
	T = (r0 & r0) == 0;  /* 0C08984C tst Rm,Rn */
	if (T) { UPD(0x0C0897BCu, 4); goto L_0C0897BC; }  /* 0C08984E bt */
L_0C089850: BLKS(0x0C089850u);
	r0 = r8;  /* 0C089850 mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C089854u, 2);  /* 0C089852 mov.w @(disp,pc),Rn */
	r13 = 0xC0BBF10u; UPD(0x0C089856u, 1);  /* 0C089854 mov.l @(disp,pc),Rn */
	IF(0x0C089856u); r2 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C089858u, 1);  /* 0C089856 mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C08985Au, 1);  /* 0C089858 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C08985A extu.b Rm,Rn */
	IF(0x0C08985Cu); { u32 t_ = r13; PR = 0x0C089860u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C089860u); }  /* 0C08985C jsr @Rn */
L_0C089860: BLKS(0x0C089860u);
	T = (r0 & r0) == 0;  /* 0C089860 tst Rm,Rn */
	if (T) { UPD(0x0C0897BCu, 4); goto L_0C0897BC; }  /* 0C089862 bt */
L_0C089864: BLKS(0x0C089864u);
	r11 = 0x1u;  /* 0C089864 mov #imm,Rn */
	r0 = 0x8Cu; UPD(0x0C089868u, 2);  /* 0C089866 mov.w @(disp,pc),Rn */
	r4 = 0x60000u; UPD(0x0C08986Au, 1);  /* 0C089868 mov.l @(disp,pc),Rn */
	IF(0x0C08986Au); W32(r0 + r8, r4); UPD(0x0C08986Cu, 1);  /* 0C08986A mov.l Rm,@(r0,Rn) */
	r12 = 0x9Au; UPD(0x0C08986Eu, 1);  /* 0C08986C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08986E mov Rm,Rn */
	{ IF(0x0C089872u); W8(r0 + r12, r11); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C089504u, 4); goto L_0C089504; }  /* 0C089870 bra */
L_0C089880: BLKS(0x0C089880u);
	r13 = 0xC0A8B50u; UPD(0x0C089882u, 1);  /* 0C089880 mov.l @(disp,pc),Rn */
	IF(0x0C089882u); { u32 t_ = r13; PR = 0x0C089886u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C089886u); }  /* 0C089882 jsr @Rn */
L_0C089886: BLKS(0x0C089886u);
	IF(0x0C089886u); T = (s32)r0 >= 0;  /* 0C089886 cmp/pz Rn */
	{ u32 c_ = !T; r10 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C08990Au, 4); goto L_0C08990A; } UPD(0x0C08988Cu, 1); goto L_0C08988C; }  /* 0C089888 bf/s */
L_0C08988C: BLKS(0x0C08988Cu);
	r8 = 0xB4u; UPD(0x0C08988Eu, 1);  /* 0C08988C mov.w @(disp,pc),Rn */
	IF(0x0C08988Eu); MACL = r10 * r8;  /* 0C08988E mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C089892u, 3);  /* 0C089890 mov.l @(disp,pc),Rn */
	IF(0x0C089892u); r10 = MACL;  /* 0C089892 sts macl,Rn */
	IF(0x0C089894u); MACL = r0 * r8;  /* 0C089894 mul.l Rm,Rn */
	r10 += r1;  /* 0C089896 add Rm,Rn */
	r12 = 0x98u; UPD(0x0C08989Au, 5);  /* 0C089898 mov.w @(disp,pc),Rn */
	IF(0x0C08989Au); r8 = MACL;  /* 0C08989A sts macl,Rn */
	r11 = r10;  /* 0C08989C mov Rm,Rn */
	r8 += r1;  /* 0C08989E add Rm,Rn */
	r11 += r12;  /* 0C0898A0 add Rm,Rn */
	r12 += r8;  /* 0C0898A2 add Rm,Rn */
	r12 += 0x2u;  /* 0C0898A4 add #imm,Rn */
	r5 = 0xA4u; UPD(0x0C0898A8u, 7);  /* 0C0898A6 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C0898A8 mov Rm,Rn */
	r4 = 0x84u; UPD(0x0C0898ACu, 2);  /* 0C0898AA mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0898AC mov Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r12); UPD(0x0C0898B0u, 2);  /* 0C0898AE mov.b @Rm,Rn */
	r11 += 0x2u;  /* 0C0898B0 add #imm,Rn */
	r0 += r5;  /* 0C0898B2 add Rm,Rn */
	r7 += r4;  /* 0C0898B4 add Rm,Rn */
	W8(r11, r9); UPD(0x0C0898B8u, 4);  /* 0C0898B6 mov.b Rm,@Rn */
	r5 += r10;  /* 0C0898B8 add Rm,Rn */
	r4 += r8;  /* 0C0898BA add Rm,Rn */
	r5 += 0x1u;  /* 0C0898BC add #imm,Rn */
	r4 += 0x2u;  /* 0C0898BE add #imm,Rn */
	r10 += 0x50u;  /* 0C0898C0 add #imm,Rn */
	r13 = 0xC069B20u; UPD(0x0C0898C4u, 6);  /* 0C0898C2 mov.l @(disp,pc),Rn */
	r7 += 0x2u;  /* 0C0898C4 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C0898C8u, 2);  /* 0C0898C6 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0898C8 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r4); UPD(0x0C0898CCu, 2);  /* 0C0898CA mov.w @Rm,Rn */
	r9 = R32(r10); UPD(0x0C0898CEu, 1);  /* 0C0898CC mov.l @Rm,Rn */
	r12 = r6;  /* 0C0898CE mov Rm,Rn */
	W8(r0, r2); UPD(0x0C0898D2u, 2);  /* 0C0898D0 mov.b Rm,@Rn */
	r4 = r6;  /* 0C0898D2 mov Rm,Rn */
	W16(r7, r6); UPD(0x0C0898D6u, 2);  /* 0C0898D4 mov.w Rm,@Rn */
	IF(0x0C0898D6u); { u32 t_ = r13; PR = 0x0C0898DAu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0898DAu); }  /* 0C0898D6 jsr @Rn */
L_0C0898DA: BLKS(0x0C0898DAu);
	r3 = R32(r8 + 0x24u); UPD(0x0C0898DCu, 1);  /* 0C0898DA mov.l @(disp,Rm),Rn */
	r10 += 0xFFFFFFB0u;  /* 0C0898DC add #imm,Rn */
	r11 = 0xC069AF0u; UPD(0x0C0898E0u, 2);  /* 0C0898DE mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0898E0 add Rm,Rn */
	r5 = r9;  /* 0C0898E2 mov Rm,Rn */
	W32(r10 + 0x24u, r3); UPD(0x0C0898E6u, 3);  /* 0C0898E4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0898E6u); { u32 t_ = r11; PR = 0x0C0898EAu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0898EAu); }  /* 0C0898E6 jsr @Rn */
L_0C0898EA: BLKS(0x0C0898EAu);
	r5 = R32(r8 + 0x28u); UPD(0x0C0898ECu, 1);  /* 0C0898EA mov.l @(disp,Rm),Rn */
	r2 = R32(r8 + 0xCu); UPD(0x0C0898EEu, 1);  /* 0C0898EC mov.l @(disp,Rm),Rn */
	r5 += r0;  /* 0C0898EE add Rm,Rn */
	W32(r10 + 0x28u, r5); UPD(0x0C0898F2u, 2);  /* 0C0898F0 mov.l Rm,@(disp,Rn) */
	{ W32(r10 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C089492u, 3); goto L_0C089492; }  /* 0C0898F2 bra */
L_0C089900: BLKS(0x0C089900u);
	r13 = 0xC0A8B50u; UPD(0x0C089902u, 1);  /* 0C089900 mov.l @(disp,pc),Rn */
	IF(0x0C089902u); { u32 t_ = r13; PR = 0x0C089906u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C089906u); }  /* 0C089902 jsr @Rn */
L_0C089906: BLKS(0x0C089906u);
	IF(0x0C089906u); T = (s32)r0 >= 0;  /* 0C089906 cmp/pz Rn */
	if (T) { UPD(0x0C08990Eu, 4); goto L_0C08990E; }  /* 0C089908 bt */
L_0C08990A: BLKS(0x0C08990Au);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C0895B2u, 3); goto L_0C0895B2; }  /* 0C08990A bra */
L_0C08990E: BLKS(0x0C08990Eu);
	r10 = 0xB4u; UPD(0x0C089910u, 1);  /* 0C08990E mov.w @(disp,pc),Rn */
	IF(0x0C089910u); MACL = r0 * r10;  /* 0C089910 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C089914u, 3);  /* 0C089912 mov.l @(disp,pc),Rn */
	IF(0x0C089914u); r9 = MACL;  /* 0C089914 sts macl,Rn */
	r9 += r5;  /* 0C089916 add Rm,Rn */
	r13 = 0x86u; UPD(0x0C08991Au, 3);  /* 0C089918 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C08991A mov Rm,Rn */
	IF(0x0C08991Cu); r11 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C08991Eu, 2);  /* 0C08991C mov.w @(r0,Rm),Rn */
	r0 = R32(r14); UPD(0x0C089920u, 1);  /* 0C08991E mov.l @Rm,Rn */
	r4 = r11;  /* 0C089920 mov Rm,Rn */
	IF(0x0C089922u); MACL = r0 * r10;  /* 0C089922 mul.l Rm,Rn */
	r12 = 0xC069B20u; UPD(0x0C089926u, 4);  /* 0C089924 mov.l @(disp,pc),Rn */
	IF(0x0C089926u); r10 = MACL;  /* 0C089926 sts macl,Rn */
	r10 += r5;  /* 0C089928 add Rm,Rn */
	r10 += 0x50u;  /* 0C08992A add #imm,Rn */
	r8 = R32(r10); UPD(0x0C08992Eu, 4);  /* 0C08992C mov.l @Rm,Rn */
	IF(0x0C08992Eu); { u32 t_ = r12; PR = 0x0C089932u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C089932u); }  /* 0C08992E jsr @Rn */
L_0C089932: BLKS(0x0C089932u);
	r2 = R32(r9 + 0x24u); UPD(0x0C089934u, 1);  /* 0C089932 mov.l @(disp,Rm),Rn */
	r10 += 0xFFFFFFB0u;  /* 0C089934 add #imm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C089938u, 2);  /* 0C089936 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C089938 add Rm,Rn */
	W32(r10 + 0x24u, r2); UPD(0x0C08993Cu, 2);  /* 0C08993A mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C08993C mov Rm,Rn */
	IF(0x0C08993Eu); { u32 t_ = r13; PR = 0x0C089942u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C089942u); }  /* 0C08993E jsr @Rn */
L_0C089942: BLKS(0x0C089942u);
	r4 = R32(r9 + 0x28u); UPD(0x0C089944u, 1);  /* 0C089942 mov.l @(disp,Rm),Rn */
	r6 = 0xC0A8AE0u; UPD(0x0C089946u, 1);  /* 0C089944 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C089946 add Rm,Rn */
	W32(r10 + 0x28u, r4); UPD(0x0C08994Au, 2);  /* 0C089948 mov.l Rm,@(disp,Rn) */
	r7 = R32(r9 + 0xCu); UPD(0x0C08994Cu, 1);  /* 0C08994A mov.l @(disp,Rm),Rn */
	r12 = 0x9Au; UPD(0x0C08994Eu, 1);  /* 0C08994C mov.w @(disp,pc),Rn */
	W32(r10 + 0xCu, r7); UPD(0x0C089950u, 1);  /* 0C08994E mov.l Rm,@(disp,Rn) */
	r12 += r9;  /* 0C089950 add Rm,Rn */
	IF(0x0C089952u); { u32 t_ = r6; PR = 0x0C089956u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C089956u); }  /* 0C089952 jsr @Rn */
L_0C089956: BLKS(0x0C089956u);
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C089958u, 1);  /* 0C089956 mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C089958 tst Rm,Rn */
	if (!T) { UPD(0x0C089962u, 4); goto L_0C089962; }  /* 0C08995A bf */
L_0C08995C: BLKS(0x0C08995Cu);
	r14 += 0x4u;  /* 0C08995C add #imm,Rn */
	{ IF(0x0C089960u); ; /* slot nop */ UPD(0x0C089506u, 4); goto L_0C089506; }  /* 0C08995E bra */
L_0C089962: BLKS(0x0C089962u);
	r1 = 0xC069B20u; UPD(0x0C089964u, 1);  /* 0C089962 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C089964 add #imm,Rn */
	r9 = 0xC0000u; UPD(0x0C089968u, 2);  /* 0C089966 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C089968 mov Rm,Rn */
	IF(0x0C08996Au); { u32 t_ = r1; PR = 0x0C08996Eu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08996Eu); }  /* 0C08996A jsr @Rn */
L_0C08996E: BLKS(0x0C08996Eu);
	r8 = R32(r10 + 0x24u); UPD(0x0C089970u, 1);  /* 0C08996E mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C089970 mov Rm,Rn */
	r4 = r11;  /* 0C089972 mov Rm,Rn */
	r9 = 0xC0BB1A0u; UPD(0x0C089976u, 3);  /* 0C089974 mov.l @(disp,pc),Rn */
	IF(0x0C089976u); { u32 t_ = r13; PR = 0x0C08997Au; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08997Au); }  /* 0C089976 jsr @Rn */
L_0C08997A: BLKS(0x0C08997Au);
	r6 = R32(r10 + 0x28u); UPD(0x0C08997Cu, 1);  /* 0C08997A mov.l @(disp,Rm),Rn */
	r7 = r11;  /* 0C08997C mov Rm,Rn */
	r3 = 0x30000u; UPD(0x0C089980u, 2);  /* 0C08997E mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C089980 mov #imm,Rn */
	W32(r15, r3); UPD(0x0C089984u, 2);  /* 0C089982 mov.l Rm,@Rn */
	r6 += r0;  /* 0C089984 add Rm,Rn */
	r5 = r8;  /* 0C089986 mov Rm,Rn */
	IF(0x0C089988u); { u32 t_ = r9; PR = 0x0C08998Cu; r11 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BB1A0, 0x0C0BB1A0u, 0x0C08998Cu); }  /* 0C089988 jsr @Rn */
L_0C08998C: BLKS(0x0C08998Cu);
	W8(r12, r11); UPD(0x0C08998Eu, 1);  /* 0C08998C mov.b Rm,@Rn */
	r15 += 0x4u;  /* 0C08998E add #imm,Rn */
	r1 = 0xC069B90u; UPD(0x0C089992u, 2);  /* 0C089990 mov.l @(disp,pc),Rn */
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C089496u, 3); goto L_0C089496; }  /* 0C089992 bra */
}

void blk_f_0C0899E0(sh3_t *c)
{
	LOCALS;
L_0C0899E0: BLKS(0x0C0899E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0899E2u, 1);  /* 0C0899E0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0899E2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0899E6u, 2);  /* 0C0899E4 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0899E8u, 1);  /* 0C0899E6 mov.w @(disp,pc),Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0899EAu, 1);  /* 0C0899E8 mov.l Rm,@-Rn */
	IF(0x0C0899EAu); MACL = r4 * r2;  /* 0C0899EA mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0899EEu, 3);  /* 0C0899EC mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0899F0u, 1);  /* 0C0899EE mov.l @(disp,pc),Rn */
	IF(0x0C0899F0u); r8 = MACL;  /* 0C0899F0 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0899F4u, 2);  /* 0C0899F2 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C0899F4 add Rm,Rn */
	IF(0x0C0899F6u); r15 -= 4; W32(r15, PR); UPD(0x0C0899F8u, 2);  /* 0C0899F6 sts.l pr,@-Rn */
	r8 += 0x3Cu;  /* 0C0899F8 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C0899FCu, 2);  /* 0C0899FA mov.w @Rm,Rn */
	r14 = r15;  /* 0C0899FC mov Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0899FE tst Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C089A08u, 5); goto L_0C089A08; } goto L_0C089A04; }  /* 0C089A00 bf/s */
L_0C089A04: BLKS(0x0C089A04u);
	{ IF(0x0C089A06u); ; /* slot nop */ UPD(0x0C089E70u, 4); goto L_0C089E70; }  /* 0C089A04 bra */
L_0C089A08: BLKS(0x0C089A08u);
	r2 = R32(r8 + 0x8u); UPD(0x0C089A0Au, 1);  /* 0C089A08 mov.l @(disp,Rm),Rn */
	r6 = 0x8u;  /* 0C089A0A mov #imm,Rn */
	T = r2 > r6;  /* 0C089A0C cmp/hi Rm,Rn */
	if (T) { UPD(0x0C089A5Cu, 5); goto L_0C089A5C; }  /* 0C089A0E bt */
L_0C089A10: BLKS(0x0C089A10u);
	r0 = 0xC089A20u;  /* 0C089A10 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C089A12 add Rm,Rn */
	IF(0x0C089A14u); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C089A16u, 3);  /* 0C089A14 mov.w @(r0,Rm),Rn */
	IF(0x0C089A16u); { u32 tv_ = (r7 + 0x0C089A1Au); u32 t_ = PHYS(tv_); IF(0x0C089A18u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C089A40u: goto L_0C089A40; case 0x0C089A5Cu: goto L_0C089A5C; case 0x0C089AE0u: goto L_0C089AE0; case 0x0C089B60u: goto L_0C089B60; case 0x0C089C10u: goto L_0C089C10; case 0x0C089C80u: goto L_0C089C80; case 0x0C089CE0u: goto L_0C089CE0; case 0x0C089D50u: goto L_0C089D50; case 0x0C089E00u: goto L_0C089E00; default: JUMPD(tv_); } }  /* 0C089A16 braf Rn */
L_0C089A40: BLKS(0x0C089A40u);
	r11 = 0xB4u; UPD(0x0C089A42u, 1);  /* 0C089A40 mov.w @(disp,pc),Rn */
	IF(0x0C089A42u); MACL = r4 * r11;  /* 0C089A42 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C089A46u, 3);  /* 0C089A44 mov.l @(disp,pc),Rn */
	IF(0x0C089A46u); r2 = MACL;  /* 0C089A46 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C089A4Au, 2);  /* 0C089A48 mov.w @(disp,pc),Rn */
	r2 += r10;  /* 0C089A4A add Rm,Rn */
	r3 += r2;  /* 0C089A4C add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C089A50u, 3);  /* 0C089A4E mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C089A50 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C089A52 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C089A54 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r3, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C089A70u, 6); goto L_0C089A70; } UPD(0x0C089A5Au, 1); goto L_0C089A5A; }  /* 0C089A56 bt/s */
L_0C089A5A: BLKS(0x0C089A5Au);
	IF(0x0C089A5Au); ;  /* 0C089A5A nop */
	UPD(0x0C089A5Cu, 1);
L_0C089A5C: BLKS(0x0C089A5Cu);
	r15 = r14;  /* 0C089A5C mov Rm,Rn */
	IF(0x0C089A5Eu); PR = R32(r15); r15 += 4; UPD(0x0C089A60u, 2);  /* 0C089A5E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C089A62u, 1);  /* 0C089A60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C089A64u, 1);  /* 0C089A62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C089A66u, 1);  /* 0C089A64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C089A68u, 1);  /* 0C089A66 mov.l @Rm+,Rn */
	IF(0x0C089A68u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C089A68 rts */
L_0C089A70: BLKS(0x0C089A70u);
	r0 = 0x0u;  /* 0C089A70 mov #imm,Rn */
	r11 = 0xC19C52Cu; UPD(0x0C089A74u, 2);  /* 0C089A72 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C089A74 mov #imm,Rn */
	r10 = 0xC19C534u; UPD(0x0C089A78u, 2);  /* 0C089A76 mov.l @(disp,pc),Rn */
	r9 = r2;  /* 0C089A78 mov Rm,Rn */
	W8(r3, r0); UPD(0x0C089A7Cu, 2);  /* 0C089A7A mov.b Rm,@Rn */
L_0C089A7C: BLKS(0x0C089A7Cu);
	r0 = r8;  /* 0C089A7C mov Rm,Rn */
	r0 &= 0x1u;  /* 0C089A7E and #imm,r0 */
	IF(0x0C089A80u); r0 <<= 2;  /* 0C089A80 shll2 Rn */
	IF(0x0C089A82u); r7 = R32(r0 + r11); UPD(0x0C089A84u, 4);  /* 0C089A82 mov.l @(r0,Rm),Rn */
	r1 = r8;  /* 0C089A84 mov Rm,Rn */
	IF(0x0C089A86u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C089A86 rotl Rn */
	IF(0x0C089A88u); r0 = T;  /* 0C089A88 movt Rn */
	r0 += r8;  /* 0C089A8A add Rm,Rn */
	IF(0x0C089A8Cu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C089A8C shar Rn */
	IF(0x0C089A8Eu); r0 <<= 2;  /* 0C089A8E shll2 Rn */
	IF(0x0C089A90u); r3 = R32(r0 + r10); UPD(0x0C089A92u, 7);  /* 0C089A90 mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C089A92 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C089A96u, 2);  /* 0C089A94 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C089A98u, 1);  /* 0C089A96 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C089A98 add Rm,Rn */
	IF(0x0C089A9Au); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089A9Cu, 2);  /* 0C089A9A mov.b @(r0,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C089A9Eu, 1);  /* 0C089A9C mov.l @(disp,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C089A9E extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C089AA2u, 2);  /* 0C089AA0 mov.l Rm,@Rn */
	r7 += r3;  /* 0C089AA2 add Rm,Rn */
	r4 = 0xA9u; UPD(0x0C089AA6u, 2);  /* 0C089AA4 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C089AA6 mov Rm,Rn */
	IF(0x0C089AA8u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C089AAAu, 2);  /* 0C089AA8 mov.b @(r0,Rm),Rn */
	r0 = 0xC000u; UPD(0x0C089AACu, 1);  /* 0C089AAA mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFF;  /* 0C089AAC extu.b Rm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C089AB0u, 2);  /* 0C089AAE mov.l Rm,@(disp,Rn) */
	r5 = 0x6000u; UPD(0x0C089AB2u, 1);  /* 0C089AB0 mov.w @(disp,pc),Rn */
	r4 = 0x808080u; UPD(0x0C089AB4u, 1);  /* 0C089AB2 mov.l @(disp,pc),Rn */
	r0 = 0xC0BEEF0u; UPD(0x0C089AB6u, 1);  /* 0C089AB4 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C089AB8u, 1);  /* 0C089AB6 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r5); UPD(0x0C089ABAu, 1);  /* 0C089AB8 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r4); UPD(0x0C089ABCu, 1);  /* 0C089ABA mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C089ABC mov #imm,Rn */
	IF(0x0C089ABEu); { u32 t_ = r0; PR = 0x0C089AC2u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C089AC2u); }  /* 0C089ABE jsr @Rn */
L_0C089AC2: BLKS(0x0C089AC2u);
	r3 = r8;  /* 0C089AC2 mov Rm,Rn */
	r3 += 0x1u;  /* 0C089AC4 add #imm,Rn */
	r8 = (u32)(s32)(s16)r3;  /* 0C089AC6 exts.w Rm,Rn */
	r2 = 0x3u;  /* 0C089AC8 mov #imm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C089ACA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C089A7Cu, 8); goto L_0C089A7C; } goto L_0C089AD0; }  /* 0C089ACC bf/s */
L_0C089AD0: BLKS(0x0C089AD0u);
	{ IF(0x0C089AD2u); ; /* slot nop */ UPD(0x0C089A5Cu, 4); goto L_0C089A5C; }  /* 0C089AD0 bra */
L_0C089AE0: BLKS(0x0C089AE0u);
	r8 = 0xB4u; UPD(0x0C089AE2u, 1);  /* 0C089AE0 mov.w @(disp,pc),Rn */
	IF(0x0C089AE2u); MACL = r4 * r8;  /* 0C089AE2 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C089AE6u, 3);  /* 0C089AE4 mov.l @(disp,pc),Rn */
	IF(0x0C089AE6u); r2 = MACL;  /* 0C089AE6 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C089AEAu, 2);  /* 0C089AE8 mov.w @(disp,pc),Rn */
	r2 += r6;  /* 0C089AEA add Rm,Rn */
	r3 += r2;  /* 0C089AEC add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r3); UPD(0x0C089AF0u, 3);  /* 0C089AEE mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C089AF0 add #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C089AF2 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C089AF4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C089A5Cu, 6); goto L_0C089A5C; } UPD(0x0C089AFAu, 1); goto L_0C089AFA; }  /* 0C089AF6 bf/s */
L_0C089AFA: BLKS(0x0C089AFAu);
	r10 = 0x0u;  /* 0C089AFA mov #imm,Rn */
	W8(r3, r10); UPD(0x0C089AFEu, 2);  /* 0C089AFC mov.b Rm,@Rn */
	r8 = 0x0u;  /* 0C089AFE mov #imm,Rn */
	r11 = 0xC19C52Cu; UPD(0x0C089B02u, 2);  /* 0C089B00 mov.l @(disp,pc),Rn */
	r9 = r2;  /* 0C089B02 mov Rm,Rn */
	r10 = 0xC19C53Cu; UPD(0x0C089B06u, 2);  /* 0C089B04 mov.l @(disp,pc),Rn */
	IF(0x0C089B06u); ;  /* 0C089B06 nop */
	UPD(0x0C089B08u, 1);
L_0C089B08: BLKS(0x0C089B08u);
	r0 = r8;  /* 0C089B08 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C089B0A and #imm,r0 */
	IF(0x0C089B0Cu); r0 <<= 2;  /* 0C089B0C shll2 Rn */
	IF(0x0C089B0Eu); r7 = R32(r0 + r11); UPD(0x0C089B10u, 4);  /* 0C089B0E mov.l @(r0,Rm),Rn */
	r1 = r8;  /* 0C089B10 mov Rm,Rn */
	IF(0x0C089B12u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C089B12 rotl Rn */
	IF(0x0C089B14u); r0 = T;  /* 0C089B14 movt Rn */
	r0 += r8;  /* 0C089B16 add Rm,Rn */
	IF(0x0C089B18u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C089B18 shar Rn */
	IF(0x0C089B1Au); r0 <<= 2;  /* 0C089B1A shll2 Rn */
	IF(0x0C089B1Cu); r4 = R32(r0 + r10); UPD(0x0C089B1Eu, 7);  /* 0C089B1C mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C089B1E add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C089B22u, 2);  /* 0C089B20 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C089B24u, 1);  /* 0C089B22 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C089B24 add Rm,Rn */
	IF(0x0C089B26u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089B28u, 2);  /* 0C089B26 mov.b @(r0,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C089B2Au, 1);  /* 0C089B28 mov.l @(disp,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C089B2A extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C089B2Eu, 2);  /* 0C089B2C mov.l Rm,@Rn */
	r7 += r4;  /* 0C089B2E add Rm,Rn */
	r5 = 0xA9u; UPD(0x0C089B32u, 2);  /* 0C089B30 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C089B32 mov Rm,Rn */
	IF(0x0C089B34u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C089B36u, 2);  /* 0C089B34 mov.b @(r0,Rm),Rn */
	r0 = r4 & 0xFF;  /* 0C089B36 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C089B3Au, 2);  /* 0C089B38 mov.l Rm,@(disp,Rn) */
	r3 = 0xC000u; UPD(0x0C089B3Cu, 1);  /* 0C089B3A mov.l @(disp,pc),Rn */
	r2 = 0x6000u; UPD(0x0C089B3Eu, 1);  /* 0C089B3C mov.w @(disp,pc),Rn */
	r5 = 0x808080u; UPD(0x0C089B40u, 1);  /* 0C089B3E mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r3); UPD(0x0C089B42u, 1);  /* 0C089B40 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r5); UPD(0x0C089B44u, 1);  /* 0C089B42 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r2); UPD(0x0C089B46u, 1);  /* 0C089B44 mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C089B46 mov #imm,Rn */
	r0 = 0xC0BEEF0u; UPD(0x0C089B4Au, 2);  /* 0C089B48 mov.l @(disp,pc),Rn */
	IF(0x0C089B4Au); { u32 t_ = r0; PR = 0x0C089B4Eu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C089B4Eu); }  /* 0C089B4A jsr @Rn */
L_0C089B4E: BLKS(0x0C089B4Eu);
	r4 = r8;  /* 0C089B4E mov Rm,Rn */
	r4 += 0x1u;  /* 0C089B50 add #imm,Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C089B52 exts.w Rm,Rn */
	r0 = 0x3u;  /* 0C089B54 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C089B56 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C089B08u, 8); goto L_0C089B08; } UPD(0x0C089B5Cu, 1); goto L_0C089B5C; }  /* 0C089B58 bf/s */
L_0C089B5C: BLKS(0x0C089B5Cu);
	{ IF(0x0C089B5Eu); ; /* slot nop */ UPD(0x0C089A5Cu, 3); goto L_0C089A5C; }  /* 0C089B5C bra */
L_0C089B60: BLKS(0x0C089B60u);
	r6 = 0xB4u; UPD(0x0C089B62u, 1);  /* 0C089B60 mov.w @(disp,pc),Rn */
	IF(0x0C089B62u); MACL = r4 * r6;  /* 0C089B62 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C089B66u, 3);  /* 0C089B64 mov.l @(disp,pc),Rn */
	IF(0x0C089B66u); r2 = MACL;  /* 0C089B66 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C089B6Au, 2);  /* 0C089B68 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C089B6A add Rm,Rn */
	r3 += r2;  /* 0C089B6C add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r3); UPD(0x0C089B70u, 3);  /* 0C089B6E mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C089B70 add #imm,Rn */
	r0 = r11 & 0xFF;  /* 0C089B72 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C089B74 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r11); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C089B5Cu, 6); goto L_0C089B5C; } UPD(0x0C089B7Au, 1); goto L_0C089B7A; }  /* 0C089B76 bf/s */
L_0C089B7A: BLKS(0x0C089B7Au);
	r8 = 0x0u;  /* 0C089B7A mov #imm,Rn */
	W8(r3, r8); UPD(0x0C089B7Eu, 2);  /* 0C089B7C mov.b Rm,@Rn */
	r9 = r2;  /* 0C089B7E mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C089B82u, 2);  /* 0C089B80 mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C089B82 mov #imm,Rn */
	r10 += r2;  /* 0C089B84 add Rm,Rn */
	IF(0x0C089B86u); ;  /* 0C089B86 nop */
	UPD(0x0C089B88u, 3);
L_0C089B88: BLKS(0x0C089B88u);
	r0 = r8;  /* 0C089B88 mov Rm,Rn */
	r4 = 0xC19C544u; UPD(0x0C089B8Cu, 2);  /* 0C089B8A mov.l @(disp,pc),Rn */
	IF(0x0C089B8Cu); r0 <<= 2;  /* 0C089B8C shll2 Rn */
	IF(0x0C089B8Eu); r7 = R32(r0 + r4); UPD(0x0C089B90u, 2);  /* 0C089B8E mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C089B90 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C089B94u, 2);  /* 0C089B92 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C089B96u, 1);  /* 0C089B94 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C089B96 add Rm,Rn */
	IF(0x0C089B98u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089B9Au, 2);  /* 0C089B98 mov.b @(r0,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C089B9Cu, 1);  /* 0C089B9A mov.l @(disp,Rm),Rn */
	r11 = r2 & 0xFF;  /* 0C089B9C extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C089BA0u, 2);  /* 0C089B9E mov.l Rm,@Rn */
	r3 = 0xFFEC0000u; UPD(0x0C089BA2u, 1);  /* 0C089BA0 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C089BA4u, 1);  /* 0C089BA2 mov.b @Rm,Rn */
	r7 += r3;  /* 0C089BA4 add Rm,Rn */
	r4 = 0x8000u; UPD(0x0C089BA8u, 2);  /* 0C089BA6 mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C089BA8 extu.b Rm,Rn */
	r3 = 0x4000u; UPD(0x0C089BACu, 2);  /* 0C089BAA mov.w @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C089BAC mov #imm,Rn */
	r2 = 0x808080u; UPD(0x0C089BB0u, 2);  /* 0C089BAE mov.l @(disp,pc),Rn */
	r11 = 0xC0BEEF0u; UPD(0x0C089BB2u, 1);  /* 0C089BB0 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C089BB4u, 1);  /* 0C089BB2 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x8u, r4); UPD(0x0C089BB6u, 1);  /* 0C089BB4 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r3); UPD(0x0C089BB8u, 1);  /* 0C089BB6 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r2); UPD(0x0C089BBAu, 1);  /* 0C089BB8 mov.l Rm,@(disp,Rn) */
	IF(0x0C089BBAu); { u32 t_ = r11; PR = 0x0C089BBEu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C089BBEu); }  /* 0C089BBA jsr @Rn */
L_0C089BBE: BLKS(0x0C089BBEu);
	r5 = r8;  /* 0C089BBE mov Rm,Rn */
	r5 += 0x1u;  /* 0C089BC0 add #imm,Rn */
	r8 = (u32)(s32)(s16)r5;  /* 0C089BC2 exts.w Rm,Rn */
	r0 = 0x5u;  /* 0C089BC4 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C089BC6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C089B88u, 8); goto L_0C089B88; } UPD(0x0C089BCCu, 1); goto L_0C089BCC; }  /* 0C089BC8 bf/s */
L_0C089BCC: BLKS(0x0C089BCCu);
	{ IF(0x0C089BCEu); ; /* slot nop */ UPD(0x0C089A5Cu, 3); goto L_0C089A5C; }  /* 0C089BCC bra */
L_0C089C10: BLKS(0x0C089C10u);
	r6 = 0xB4u; UPD(0x0C089C12u, 1);  /* 0C089C10 mov.w @(disp,pc),Rn */
	IF(0x0C089C12u); MACL = r4 * r6;  /* 0C089C12 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C089C16u, 3);  /* 0C089C14 mov.l @(disp,pc),Rn */
	IF(0x0C089C16u); r2 = MACL;  /* 0C089C16 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C089C1Au, 2);  /* 0C089C18 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C089C1A add Rm,Rn */
	r3 += r2;  /* 0C089C1C add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r3); UPD(0x0C089C20u, 3);  /* 0C089C1E mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C089C20 add #imm,Rn */
	r0 = r10 & 0xFF;  /* 0C089C22 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C089C24 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C089BCCu, 6); goto L_0C089BCC; } UPD(0x0C089C2Au, 1); goto L_0C089C2A; }  /* 0C089C26 bf/s */
L_0C089C2A: BLKS(0x0C089C2Au);
	r8 = 0x0u;  /* 0C089C2A mov #imm,Rn */
	W8(r3, r8); UPD(0x0C089C2Eu, 2);  /* 0C089C2C mov.b Rm,@Rn */
	r9 = r2;  /* 0C089C2E mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C089C32u, 2);  /* 0C089C30 mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C089C32 mov #imm,Rn */
	r10 += r2;  /* 0C089C34 add Rm,Rn */
	IF(0x0C089C36u); ;  /* 0C089C36 nop */
	UPD(0x0C089C38u, 3);
L_0C089C38: BLKS(0x0C089C38u);
	r0 = r8;  /* 0C089C38 mov Rm,Rn */
	r4 = 0xC19C55Cu; UPD(0x0C089C3Cu, 2);  /* 0C089C3A mov.l @(disp,pc),Rn */
	IF(0x0C089C3Cu); r0 <<= 2;  /* 0C089C3C shll2 Rn */
	IF(0x0C089C3Eu); r7 = R32(r0 + r4); UPD(0x0C089C40u, 2);  /* 0C089C3E mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C089C40 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C089C44u, 2);  /* 0C089C42 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C089C46u, 1);  /* 0C089C44 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C089C46 add Rm,Rn */
	IF(0x0C089C48u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089C4Au, 2);  /* 0C089C48 mov.b @(r0,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C089C4Cu, 1);  /* 0C089C4A mov.l @(disp,Rm),Rn */
	r11 = r2 & 0xFF;  /* 0C089C4C extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C089C50u, 2);  /* 0C089C4E mov.l Rm,@Rn */
	r3 = 0xA0000u; UPD(0x0C089C52u, 1);  /* 0C089C50 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C089C54u, 1);  /* 0C089C52 mov.b @Rm,Rn */
	r7 += r3;  /* 0C089C54 add Rm,Rn */
	r4 = 0x8000u; UPD(0x0C089C58u, 2);  /* 0C089C56 mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C089C58 extu.b Rm,Rn */
	r3 = 0x4000u; UPD(0x0C089C5Cu, 2);  /* 0C089C5A mov.w @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C089C5C mov #imm,Rn */
	r2 = 0x808080u; UPD(0x0C089C60u, 2);  /* 0C089C5E mov.l @(disp,pc),Rn */
	r11 = 0xC0BEEF0u; UPD(0x0C089C62u, 1);  /* 0C089C60 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C089C64u, 1);  /* 0C089C62 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x8u, r4); UPD(0x0C089C66u, 1);  /* 0C089C64 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r3); UPD(0x0C089C68u, 1);  /* 0C089C66 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r2); UPD(0x0C089C6Au, 1);  /* 0C089C68 mov.l Rm,@(disp,Rn) */
	IF(0x0C089C6Au); { u32 t_ = r11; PR = 0x0C089C6Eu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C089C6Eu); }  /* 0C089C6A jsr @Rn */
L_0C089C6E: BLKS(0x0C089C6Eu);
	r5 = r8;  /* 0C089C6E mov Rm,Rn */
	r5 += 0x1u;  /* 0C089C70 add #imm,Rn */
	r8 = (u32)(s32)(s16)r5;  /* 0C089C72 exts.w Rm,Rn */
	r0 = 0x2u;  /* 0C089C74 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C089C76 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C089C38u, 8); goto L_0C089C38; } UPD(0x0C089C7Cu, 1); goto L_0C089C7C; }  /* 0C089C78 bf/s */
L_0C089C7C: BLKS(0x0C089C7Cu);
	{ IF(0x0C089C7Eu); ; /* slot nop */ UPD(0x0C089A5Cu, 3); goto L_0C089A5C; }  /* 0C089C7C bra */
L_0C089C80: BLKS(0x0C089C80u);
	r9 = 0xB4u; UPD(0x0C089C82u, 1);  /* 0C089C80 mov.w @(disp,pc),Rn */
	IF(0x0C089C82u); MACL = r4 * r9;  /* 0C089C82 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C089C86u, 3);  /* 0C089C84 mov.l @(disp,pc),Rn */
	IF(0x0C089C86u); r3 = MACL;  /* 0C089C86 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C089C8Au, 2);  /* 0C089C88 mov.w @(disp,pc),Rn */
	r3 += r10;  /* 0C089C8A add Rm,Rn */
	r2 += r3;  /* 0C089C8C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C089C90u, 3);  /* 0C089C8E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C089C90 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C089C92 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C089C94 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C089C7Cu, 6); goto L_0C089C7C; } UPD(0x0C089C9Au, 1); goto L_0C089C9A; }  /* 0C089C96 bf/s */
L_0C089C9A: BLKS(0x0C089C9Au);
	r6 = 0x0u;  /* 0C089C9A mov #imm,Rn */
	W8(r2, r6); UPD(0x0C089C9Eu, 2);  /* 0C089C9C mov.b Rm,@Rn */
	r15 += 0xFFFFFFECu;  /* 0C089C9E add #imm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C089CA2u, 2);  /* 0C089CA0 mov.l @(disp,Rm),Rn */
	r7 = 0x180000u; UPD(0x0C089CA4u, 1);  /* 0C089CA2 mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C089CA4 add Rm,Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C089CA8u, 2);  /* 0C089CA6 mov.l @(disp,Rm),Rn */
	r0 = 0x80000u; UPD(0x0C089CAAu, 1);  /* 0C089CA8 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C089CAA add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C089CAEu, 2);  /* 0C089CAC mov.w @(disp,pc),Rn */
	IF(0x0C089CAEu); r8 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C089CB0u, 1);  /* 0C089CAE mov.b @(r0,Rm),Rn */
	r9 = r8 & 0xFF;  /* 0C089CB0 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C089CB4u, 2);  /* 0C089CB2 mov.l Rm,@Rn */
	r0 = r3;  /* 0C089CB4 mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C089CB8u, 2);  /* 0C089CB6 mov.w @(disp,pc),Rn */
	IF(0x0C089CB8u); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C089CBAu, 1);  /* 0C089CB8 mov.b @(r0,Rm),Rn */
	r5 = 0x6000u; UPD(0x0C089CBCu, 1);  /* 0C089CBA mov.w @(disp,pc),Rn */
	r2 = r4 & 0xFF;  /* 0C089CBC extu.b Rm,Rn */
	r0 = 0x808080u; UPD(0x0C089CC0u, 2);  /* 0C089CBE mov.l @(disp,pc),Rn */
	r11 = 0xC000u; UPD(0x0C089CC2u, 1);  /* 0C089CC0 mov.l @(disp,pc),Rn */
	r8 = 0xC0BEEF0u; UPD(0x0C089CC4u, 1);  /* 0C089CC2 mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r5); UPD(0x0C089CC6u, 1);  /* 0C089CC4 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r2); UPD(0x0C089CC8u, 1);  /* 0C089CC6 mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C089CC8 mov #imm,Rn */
	W32(r15 + 0x8u, r11); UPD(0x0C089CCCu, 2);  /* 0C089CCA mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r0); UPD(0x0C089CCEu, 1);  /* 0C089CCC mov.l Rm,@(disp,Rn) */
	IF(0x0C089CCEu); { u32 t_ = r8; PR = 0x0C089CD2u; r4 = R32(r3); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C089CD2u); }  /* 0C089CCE jsr @Rn */
L_0C089CD2: BLKS(0x0C089CD2u);
	r15 += 0x14u;  /* 0C089CD2 add #imm,Rn */
	UPD(0x0C089CD4u, 1);
L_0C089CD4: BLKS(0x0C089CD4u);
	{ IF(0x0C089CD6u); ; /* slot nop */ UPD(0x0C089A5Cu, 3); goto L_0C089A5C; }  /* 0C089CD4 bra */
L_0C089CE0: BLKS(0x0C089CE0u);
	r5 = 0xB4u; UPD(0x0C089CE2u, 1);  /* 0C089CE0 mov.w @(disp,pc),Rn */
	IF(0x0C089CE2u); MACL = r4 * r5;  /* 0C089CE2 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C089CE6u, 3);  /* 0C089CE4 mov.l @(disp,pc),Rn */
	IF(0x0C089CE6u); r2 = MACL;  /* 0C089CE6 sts macl,Rn */
	r2 += r3;  /* 0C089CE8 add Rm,Rn */
	r3 = 0x99u; UPD(0x0C089CECu, 3);  /* 0C089CEA mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C089CEC add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C089CF0u, 2);  /* 0C089CEE mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C089CF0 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C089CF2 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C089CF4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C089CD4u, 6); goto L_0C089CD4; } UPD(0x0C089CFAu, 1); goto L_0C089CFA; }  /* 0C089CF6 bf/s */
L_0C089CFA: BLKS(0x0C089CFAu);
	r11 = 0x0u;  /* 0C089CFA mov #imm,Rn */
	r10 = 0xA9u; UPD(0x0C089CFEu, 2);  /* 0C089CFC mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C089CFE mov #imm,Rn */
	W8(r3, r11); UPD(0x0C089D02u, 2);  /* 0C089D00 mov.b Rm,@Rn */
	r9 = r2;  /* 0C089D02 mov Rm,Rn */
	r10 += r2;  /* 0C089D04 add Rm,Rn */
	IF(0x0C089D06u); ;  /* 0C089D06 nop */
	UPD(0x0C089D08u, 3);
L_0C089D08: BLKS(0x0C089D08u);
	r0 = r8;  /* 0C089D08 mov Rm,Rn */
	r2 = 0xC19C568u; UPD(0x0C089D0Cu, 2);  /* 0C089D0A mov.l @(disp,pc),Rn */
	IF(0x0C089D0Cu); r0 <<= 2;  /* 0C089D0C shll2 Rn */
	IF(0x0C089D0Eu); r5 = R32(r0 + r2); UPD(0x0C089D10u, 2);  /* 0C089D0E mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C089D10 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C089D14u, 2);  /* 0C089D12 mov.l @(disp,Rm),Rn */
	r7 = 0x1A0000u; UPD(0x0C089D16u, 1);  /* 0C089D14 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C089D18u, 1);  /* 0C089D16 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C089D18 add Rm,Rn */
	IF(0x0C089D1Au); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089D1Cu, 2);  /* 0C089D1A mov.b @(r0,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C089D1Eu, 1);  /* 0C089D1C mov.l @(disp,Rm),Rn */
	r11 = r3 & 0xFF;  /* 0C089D1E extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C089D22u, 2);  /* 0C089D20 mov.l Rm,@Rn */
	r7 += r5;  /* 0C089D22 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C089D26u, 2);  /* 0C089D24 mov.b @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C089D28u, 1);  /* 0C089D26 mov.l @(disp,pc),Rn */
	r2 = r4 & 0xFF;  /* 0C089D28 extu.b Rm,Rn */
	r3 = 0x4000u; UPD(0x0C089D2Cu, 2);  /* 0C089D2A mov.w @(disp,pc),Rn */
	r0 = 0x808080u; UPD(0x0C089D2Eu, 1);  /* 0C089D2C mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C089D30u, 1);  /* 0C089D2E mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x8u, r5); UPD(0x0C089D32u, 1);  /* 0C089D30 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r3); UPD(0x0C089D34u, 1);  /* 0C089D32 mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C089D34 mov #imm,Rn */
	W32(r15 + 0x10u, r0); UPD(0x0C089D38u, 2);  /* 0C089D36 mov.l Rm,@(disp,Rn) */
	r11 = 0xC0BEEF0u; UPD(0x0C089D3Au, 1);  /* 0C089D38 mov.l @(disp,pc),Rn */
	IF(0x0C089D3Au); { u32 t_ = r11; PR = 0x0C089D3Eu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C089D3Eu); }  /* 0C089D3A jsr @Rn */
L_0C089D3E: BLKS(0x0C089D3Eu);
	r4 = r8;  /* 0C089D3E mov Rm,Rn */
	r4 += 0x1u;  /* 0C089D40 add #imm,Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C089D42 exts.w Rm,Rn */
	r2 = 0x3u;  /* 0C089D44 mov #imm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C089D46 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C089D08u, 8); goto L_0C089D08; } UPD(0x0C089D4Cu, 1); goto L_0C089D4C; }  /* 0C089D48 bf/s */
L_0C089D4C: BLKS(0x0C089D4Cu);
	{ IF(0x0C089D4Eu); ; /* slot nop */ UPD(0x0C089A5Cu, 3); goto L_0C089A5C; }  /* 0C089D4C bra */
L_0C089D50: BLKS(0x0C089D50u);
	r8 = 0xB4u; UPD(0x0C089D52u, 1);  /* 0C089D50 mov.w @(disp,pc),Rn */
	IF(0x0C089D52u); MACL = r4 * r8;  /* 0C089D52 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C089D56u, 3);  /* 0C089D54 mov.l @(disp,pc),Rn */
	IF(0x0C089D56u); r2 = MACL;  /* 0C089D56 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C089D5Au, 2);  /* 0C089D58 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C089D5A add Rm,Rn */
	r3 += r2;  /* 0C089D5C add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r3); UPD(0x0C089D60u, 3);  /* 0C089D5E mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C089D60 add #imm,Rn */
	r0 = r10 & 0xFF;  /* 0C089D62 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C089D64 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C089D4Cu, 6); goto L_0C089D4C; } UPD(0x0C089D6Au, 1); goto L_0C089D6A; }  /* 0C089D66 bf/s */
L_0C089D6A: BLKS(0x0C089D6Au);
	r6 = 0x0u;  /* 0C089D6A mov #imm,Rn */
	r10 = 0xA9u; UPD(0x0C089D6Eu, 2);  /* 0C089D6C mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C089D6E mov #imm,Rn */
	W8(r3, r6); UPD(0x0C089D72u, 2);  /* 0C089D70 mov.b Rm,@Rn */
	r9 = r2;  /* 0C089D72 mov Rm,Rn */
	r10 += r2;  /* 0C089D74 add Rm,Rn */
	IF(0x0C089D76u); ;  /* 0C089D76 nop */
	UPD(0x0C089D78u, 3);
L_0C089D78: BLKS(0x0C089D78u);
	r0 = r8;  /* 0C089D78 mov Rm,Rn */
	r2 = 0xC19C578u; UPD(0x0C089D7Cu, 2);  /* 0C089D7A mov.l @(disp,pc),Rn */
	IF(0x0C089D7Cu); r0 <<= 2;  /* 0C089D7C shll2 Rn */
	IF(0x0C089D7Eu); r7 = R32(r0 + r2); UPD(0x0C089D80u, 2);  /* 0C089D7E mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C089D80 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C089D84u, 2);  /* 0C089D82 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C089D86u, 1);  /* 0C089D84 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C089D86 add Rm,Rn */
	IF(0x0C089D88u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089D8Au, 2);  /* 0C089D88 mov.b @(r0,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C089D8Cu, 1);  /* 0C089D8A mov.l @(disp,Rm),Rn */
	r11 = r3 & 0xFF;  /* 0C089D8C extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C089D90u, 2);  /* 0C089D8E mov.l Rm,@Rn */
	r5 = 0xE0000u; UPD(0x0C089D92u, 1);  /* 0C089D90 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C089D94u, 1);  /* 0C089D92 mov.b @Rm,Rn */
	r7 += r5;  /* 0C089D94 add Rm,Rn */
	r2 = 0xC000u; UPD(0x0C089D98u, 2);  /* 0C089D96 mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFF;  /* 0C089D98 extu.b Rm,Rn */
	r5 = 0x6000u; UPD(0x0C089D9Cu, 2);  /* 0C089D9A mov.w @(disp,pc),Rn */
	r3 = 0x808080u; UPD(0x0C089D9Eu, 1);  /* 0C089D9C mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r5); UPD(0x0C089DA0u, 1);  /* 0C089D9E mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r0); UPD(0x0C089DA2u, 1);  /* 0C089DA0 mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C089DA2 mov #imm,Rn */
	W32(r15 + 0x8u, r2); UPD(0x0C089DA6u, 2);  /* 0C089DA4 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r3); UPD(0x0C089DA8u, 1);  /* 0C089DA6 mov.l Rm,@(disp,Rn) */
	r11 = 0xC0BEEF0u; UPD(0x0C089DAAu, 1);  /* 0C089DA8 mov.l @(disp,pc),Rn */
	IF(0x0C089DAAu); { u32 t_ = r11; PR = 0x0C089DAEu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C089DAEu); }  /* 0C089DAA jsr @Rn */
L_0C089DAE: BLKS(0x0C089DAEu);
	r4 = r8;  /* 0C089DAE mov Rm,Rn */
	r4 += 0x1u;  /* 0C089DB0 add #imm,Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C089DB2 exts.w Rm,Rn */
	r0 = 0x2u;  /* 0C089DB4 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C089DB6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C089D78u, 8); goto L_0C089D78; } UPD(0x0C089DBCu, 1); goto L_0C089DBC; }  /* 0C089DB8 bf/s */
L_0C089DBC: BLKS(0x0C089DBCu);
	{ IF(0x0C089DBEu); ; /* slot nop */ UPD(0x0C089A5Cu, 3); goto L_0C089A5C; }  /* 0C089DBC bra */
L_0C089E00: BLKS(0x0C089E00u);
	r9 = 0xB4u; UPD(0x0C089E02u, 1);  /* 0C089E00 mov.w @(disp,pc),Rn */
	IF(0x0C089E02u); MACL = r4 * r9;  /* 0C089E02 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C089E06u, 3);  /* 0C089E04 mov.l @(disp,pc),Rn */
	IF(0x0C089E06u); r2 = MACL;  /* 0C089E06 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C089E0Au, 2);  /* 0C089E08 mov.w @(disp,pc),Rn */
	r2 += r10;  /* 0C089E0A add Rm,Rn */
	r3 += r2;  /* 0C089E0C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C089E10u, 3);  /* 0C089E0E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C089E10 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C089E12 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C089E14 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C089DBCu, 6); goto L_0C089DBC; } UPD(0x0C089E1Au, 1); goto L_0C089E1A; }  /* 0C089E16 bf/s */
L_0C089E1A: BLKS(0x0C089E1Au);
	r8 = 0x0u;  /* 0C089E1A mov #imm,Rn */
	W8(r3, r8); UPD(0x0C089E1Eu, 2);  /* 0C089E1C mov.b Rm,@Rn */
	r9 = r2;  /* 0C089E1E mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C089E22u, 2);  /* 0C089E20 mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C089E22 mov #imm,Rn */
	r10 += r2;  /* 0C089E24 add Rm,Rn */
	IF(0x0C089E26u); ;  /* 0C089E26 nop */
	UPD(0x0C089E28u, 3);
L_0C089E28: BLKS(0x0C089E28u);
	r0 = r8;  /* 0C089E28 mov Rm,Rn */
	r5 = 0xC19C584u; UPD(0x0C089E2Cu, 2);  /* 0C089E2A mov.l @(disp,pc),Rn */
	IF(0x0C089E2Cu); r0 <<= 2;  /* 0C089E2C shll2 Rn */
	IF(0x0C089E2Eu); r3 = R32(r0 + r5); UPD(0x0C089E30u, 2);  /* 0C089E2E mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C089E30 add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C089E34u, 2);  /* 0C089E32 mov.w @(disp,pc),Rn */
	IF(0x0C089E34u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089E36u, 1);  /* 0C089E34 mov.b @(r0,Rm),Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C089E38u, 1);  /* 0C089E36 mov.l @(disp,Rm),Rn */
	r11 = r4 & 0xFF;  /* 0C089E38 extu.b Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C089E3Cu, 2);  /* 0C089E3A mov.l @(disp,Rm),Rn */
	W32(r15, r11); UPD(0x0C089E3Eu, 1);  /* 0C089E3C mov.l Rm,@Rn */
	r7 += r3;  /* 0C089E3E add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C089E42u, 2);  /* 0C089E40 mov.b @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C089E44u, 1);  /* 0C089E42 mov.l @(disp,pc),Rn */
	r2 = r0 & 0xFF;  /* 0C089E44 extu.b Rm,Rn */
	r3 = 0x4000u; UPD(0x0C089E48u, 2);  /* 0C089E46 mov.w @(disp,pc),Rn */
	r4 = 0x808080u; UPD(0x0C089E4Au, 1);  /* 0C089E48 mov.l @(disp,pc),Rn */
	r11 = 0xC0BEEF0u; UPD(0x0C089E4Cu, 1);  /* 0C089E4A mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C089E4Eu, 1);  /* 0C089E4C mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r2); UPD(0x0C089E50u, 1);  /* 0C089E4E mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C089E50 mov #imm,Rn */
	W32(r15 + 0xCu, r3); UPD(0x0C089E54u, 2);  /* 0C089E52 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r4); UPD(0x0C089E56u, 1);  /* 0C089E54 mov.l Rm,@(disp,Rn) */
	IF(0x0C089E56u); { u32 t_ = r11; PR = 0x0C089E5Au; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C089E5Au); }  /* 0C089E56 jsr @Rn */
L_0C089E5A: BLKS(0x0C089E5Au);
	r0 = r8;  /* 0C089E5A mov Rm,Rn */
	r0 += 0x1u;  /* 0C089E5C add #imm,Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C089E5E exts.w Rm,Rn */
	r6 = 0x1u;  /* 0C089E60 mov #imm,Rn */
	T = (s32)r8 > (s32)r6;  /* 0C089E62 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C089E28u, 8); goto L_0C089E28; } UPD(0x0C089E68u, 1); goto L_0C089E68; }  /* 0C089E64 bf/s */
L_0C089E68: BLKS(0x0C089E68u);
	{ IF(0x0C089E6Au); ; /* slot nop */ UPD(0x0C089A5Cu, 3); goto L_0C089A5C; }  /* 0C089E68 bra */
L_0C089E70: BLKS(0x0C089E70u);
	r9 = 0xC0A9CB0u; UPD(0x0C089E72u, 1);  /* 0C089E70 mov.l @(disp,pc),Rn */
	IF(0x0C089E72u); { u32 t_ = r9; PR = 0x0C089E76u; IF(0x0C089E74u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C089E76u); }  /* 0C089E72 jsr @Rn */
L_0C089E76: BLKS(0x0C089E76u);
	r1 = R32(r8 + 0x8u); UPD(0x0C089E78u, 1);  /* 0C089E76 mov.l @(disp,Rm),Rn */
	r3 = 0x1u;  /* 0C089E78 mov #imm,Rn */
	T = r1 > r3;  /* 0C089E7A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C089E68u, 5); goto L_0C089E68; }  /* 0C089E7C bt */
L_0C089E7E: BLKS(0x0C089E7Eu);
	r5 = 0x10u;  /* 0C089E7E mov #imm,Rn */
	r4 = 0xC2B07FCu; UPD(0x0C089E82u, 2);  /* 0C089E80 mov.l @(disp,pc),Rn */
	{ W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C089A5Cu, 3); goto L_0C089A5C; }  /* 0C089E82 bra */
}

void blk_f_0C089EB0(sh3_t *c)
{
	LOCALS;
L_0C089EB0: BLKS(0x0C089EB0u);
	r3 = 0xB4u; UPD(0x0C089EB2u, 1);  /* 0C089EB0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C089EB2 exts.w Rm,Rn */
	IF(0x0C089EB4u); MACL = r4 * r3;  /* 0C089EB4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C089EB8u, 4);  /* 0C089EB6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C089EBAu, 1);  /* 0C089EB8 mov.l Rm,@-Rn */
	IF(0x0C089EBAu); r2 = MACL;  /* 0C089EBA sts macl,Rn */
	r0 += r2;  /* 0C089EBC add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C089EC0u, 3);  /* 0C089EBE mov.l @(disp,Rm),Rn */
	r0 = 0x8u;  /* 0C089EC0 mov #imm,Rn */
	T = r2 > r0;  /* 0C089EC2 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C089F90u, 5); goto L_0C089F90; } goto L_0C089EC8; }  /* 0C089EC4 bt/s */
L_0C089EC8: BLKS(0x0C089EC8u);
	r0 = 0xC089ED8u;  /* 0C089EC8 mova @(disp,pc),r0 */
	IF(0x0C089ECAu); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C089ECCu, 3);  /* 0C089ECA mov.b @(r0,Rm),Rn */
	r5 = r5 & 0xFF;  /* 0C089ECC extu.b Rm,Rn */
	IF(0x0C089ECEu); { u32 tv_ = (r5 + 0x0C089ED2u); u32 t_ = PHYS(tv_); IF(0x0C089ED0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C089EF0u: goto L_0C089EF0; case 0x0C089F20u: goto L_0C089F20; case 0x0C089F30u: goto L_0C089F30; case 0x0C089F40u: goto L_0C089F40; case 0x0C089F50u: goto L_0C089F50; case 0x0C089F70u: goto L_0C089F70; case 0x0C089F80u: goto L_0C089F80; default: JUMPD(tv_); } }  /* 0C089ECE braf Rn */
L_0C089EF0: BLKS(0x0C089EF0u);
	r7 = 0xB4u; UPD(0x0C089EF2u, 1);  /* 0C089EF0 mov.w @(disp,pc),Rn */
	IF(0x0C089EF2u); MACL = r4 * r7;  /* 0C089EF2 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C089EF6u, 3);  /* 0C089EF4 mov.l @(disp,pc),Rn */
	IF(0x0C089EF6u); r0 = MACL;  /* 0C089EF6 sts macl,Rn */
	IF(0x0C089EF8u); r0 = R32(r0 + r6); UPD(0x0C089EFAu, 2);  /* 0C089EF8 mov.l @(r0,Rm),Rn */
	IF(0x0C089EFAu); r0 >>= 16;  /* 0C089EFA shlr16 Rn */
	IF(0x0C089EFCu); r0 >>= 8;  /* 0C089EFC shlr8 Rn */
	IF(0x0C089EFEu); r0 >>= 2;  /* 0C089EFE shlr2 Rn */
	r0 &= 0x1u;  /* 0C089F00 and #imm,r0 */
	r5 = 0xC19C58Cu; UPD(0x0C089F04u, 5);  /* 0C089F02 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C089F04 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C089F0Cu, 4); goto L_0C089F0C; }  /* 0C089F06 bt */
L_0C089F08: BLKS(0x0C089F08u);
	r5 = 0xC19C66Eu; UPD(0x0C089F0Au, 1);  /* 0C089F08 mov.l @(disp,pc),Rn */
	IF(0x0C089F0Au); ;  /* 0C089F0A nop */
	UPD(0x0C089F0Cu, 1);
L_0C089F0C: BLKS(0x0C089F0Cu);
	r3 = 0xC0A9D90u; UPD(0x0C089F0Eu, 1);  /* 0C089F0C mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C089F0E mov Rm,Rn */
	IF(0x0C089F10u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A9D90u: TAIL(blk_f_0C0A9D90); default: JUMPD(tv_); } }  /* 0C089F10 jmp @Rn */
L_0C089F20: BLKS(0x0C089F20u);
	r5 = 0xC19C6D0u; UPD(0x0C089F22u, 1);  /* 0C089F20 mov.l @(disp,pc),Rn */
	{ IF(0x0C089F24u); ; /* slot nop */ UPD(0x0C089F0Cu, 3); goto L_0C089F0C; }  /* 0C089F22 bra */
L_0C089F30: BLKS(0x0C089F30u);
	r5 = 0xC19C6FCu; UPD(0x0C089F32u, 1);  /* 0C089F30 mov.l @(disp,pc),Rn */
	{ IF(0x0C089F34u); ; /* slot nop */ UPD(0x0C089F0Cu, 3); goto L_0C089F0C; }  /* 0C089F32 bra */
L_0C089F40: BLKS(0x0C089F40u);
	r5 = 0xC19C728u; UPD(0x0C089F42u, 1);  /* 0C089F40 mov.l @(disp,pc),Rn */
	{ IF(0x0C089F44u); ; /* slot nop */ UPD(0x0C089F0Cu, 3); goto L_0C089F0C; }  /* 0C089F42 bra */
L_0C089F50: BLKS(0x0C089F50u);
	r0 = 0xB4u; UPD(0x0C089F52u, 1);  /* 0C089F50 mov.w @(disp,pc),Rn */
	IF(0x0C089F52u); MACL = r4 * r0;  /* 0C089F52 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C089F56u, 3);  /* 0C089F54 mov.l @(disp,pc),Rn */
	IF(0x0C089F56u); r0 = MACL;  /* 0C089F56 sts macl,Rn */
	IF(0x0C089F58u); r0 = R32(r0 + r2); UPD(0x0C089F5Au, 2);  /* 0C089F58 mov.l @(r0,Rm),Rn */
	IF(0x0C089F5Au); r0 >>= 16;  /* 0C089F5A shlr16 Rn */
	IF(0x0C089F5Cu); r0 >>= 8;  /* 0C089F5C shlr8 Rn */
	IF(0x0C089F5Eu); r0 >>= 2;  /* 0C089F5E shlr2 Rn */
	r0 &= 0x1u;  /* 0C089F60 and #imm,r0 */
	r5 = 0xC19C79Eu; UPD(0x0C089F64u, 5);  /* 0C089F62 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C089F64 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C089F0Cu, 4); goto L_0C089F0C; }  /* 0C089F66 bt */
L_0C089F68: BLKS(0x0C089F68u);
	r5 = 0xC19C772u; UPD(0x0C089F6Au, 1);  /* 0C089F68 mov.l @(disp,pc),Rn */
	{ IF(0x0C089F6Cu); ; /* slot nop */ UPD(0x0C089F0Cu, 3); goto L_0C089F0C; }  /* 0C089F6A bra */
L_0C089F70: BLKS(0x0C089F70u);
	r5 = 0xC19C754u; UPD(0x0C089F72u, 1);  /* 0C089F70 mov.l @(disp,pc),Rn */
	{ IF(0x0C089F74u); ; /* slot nop */ UPD(0x0C089F0Cu, 3); goto L_0C089F0C; }  /* 0C089F72 bra */
L_0C089F80: BLKS(0x0C089F80u);
	r5 = 0xC19C7E2u; UPD(0x0C089F82u, 1);  /* 0C089F80 mov.l @(disp,pc),Rn */
	{ IF(0x0C089F84u); ; /* slot nop */ UPD(0x0C089F0Cu, 3); goto L_0C089F0C; }  /* 0C089F82 bra */
L_0C089F90: BLKS(0x0C089F90u);
	r15 = r14;  /* 0C089F90 mov Rm,Rn */
	IF(0x0C089F92u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C089F92 rts */
}

void blk_f_0C089FD0(sh3_t *c)
{
	LOCALS;
L_0C089FD0: BLKS(0x0C089FD0u);
	r3 = 0xB4u; UPD(0x0C089FD2u, 1);  /* 0C089FD0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C089FD2 exts.w Rm,Rn */
	IF(0x0C089FD4u); MACL = r4 * r3;  /* 0C089FD4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C089FD8u, 4);  /* 0C089FD6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C089FDAu, 1);  /* 0C089FD8 mov.l Rm,@-Rn */
	IF(0x0C089FDAu); r2 = MACL;  /* 0C089FDA sts macl,Rn */
	r0 += r2;  /* 0C089FDC add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C089FE0u, 3);  /* 0C089FDE mov.l @(disp,Rm),Rn */
	r0 = 0x3u;  /* 0C089FE0 mov #imm,Rn */
	T = r2 > r0;  /* 0C089FE2 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08A060u, 5); goto L_0C08A060; } goto L_0C089FE8; }  /* 0C089FE4 bt/s */
L_0C089FE8: BLKS(0x0C089FE8u);
	r0 = 0xC089FF0u;  /* 0C089FE8 mova @(disp,pc),r0 */
	IF(0x0C089FEAu); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C089FECu, 3);  /* 0C089FEA mov.b @(r0,Rm),Rn */
	IF(0x0C089FECu); { u32 tv_ = (r5 + 0x0C089FF0u); u32 t_ = PHYS(tv_); IF(0x0C089FEEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08A000u: goto L_0C08A000; case 0x0C08A010u: goto L_0C08A010; case 0x0C08A020u: goto L_0C08A020; case 0x0C08A040u: goto L_0C08A040; default: JUMPD(tv_); } }  /* 0C089FEC braf Rn */
L_0C08A000: BLKS(0x0C08A000u);
	r5 = 0xC19D6CCu; UPD(0x0C08A002u, 1);  /* 0C08A000 mov.l @(disp,pc),Rn */
L_0C08A002: BLKS(0x0C08A002u);
	r2 = 0xC0A9D90u; UPD(0x0C08A004u, 1);  /* 0C08A002 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08A004 mov Rm,Rn */
	IF(0x0C08A006u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A9D90u: TAIL(blk_f_0C0A9D90); default: JUMPD(tv_); } }  /* 0C08A006 jmp @Rn */
L_0C08A010: BLKS(0x0C08A010u);
	r5 = 0xC19D70Cu; UPD(0x0C08A012u, 1);  /* 0C08A010 mov.l @(disp,pc),Rn */
	{ IF(0x0C08A014u); ; /* slot nop */ UPD(0x0C08A002u, 3); goto L_0C08A002; }  /* 0C08A012 bra */
L_0C08A020: BLKS(0x0C08A020u);
	r0 = 0xB4u; UPD(0x0C08A022u, 1);  /* 0C08A020 mov.w @(disp,pc),Rn */
	IF(0x0C08A022u); MACL = r4 * r0;  /* 0C08A022 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C08A026u, 3);  /* 0C08A024 mov.l @(disp,pc),Rn */
	IF(0x0C08A026u); r0 = MACL;  /* 0C08A026 sts macl,Rn */
	IF(0x0C08A028u); r7 = R32(r0 + r2); UPD(0x0C08A02Au, 2);  /* 0C08A028 mov.l @(r0,Rm),Rn */
	r6 = 0x4000000u; UPD(0x0C08A02Cu, 1);  /* 0C08A02A mov.l @(disp,pc),Rn */
	r5 = 0xC19D74Cu; UPD(0x0C08A02Eu, 1);  /* 0C08A02C mov.l @(disp,pc),Rn */
	T = (r7 & r6) == 0;  /* 0C08A02E tst Rm,Rn */
	if (T) { UPD(0x0C08A002u, 4); goto L_0C08A002; }  /* 0C08A030 bt */
L_0C08A032: BLKS(0x0C08A032u);
	r5 = 0xC19D764u; UPD(0x0C08A034u, 1);  /* 0C08A032 mov.l @(disp,pc),Rn */
	{ IF(0x0C08A036u); ; /* slot nop */ UPD(0x0C08A002u, 3); goto L_0C08A002; }  /* 0C08A034 bra */
L_0C08A040: BLKS(0x0C08A040u);
	r7 = 0xB4u; UPD(0x0C08A042u, 1);  /* 0C08A040 mov.w @(disp,pc),Rn */
	IF(0x0C08A042u); MACL = r4 * r7;  /* 0C08A042 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08A046u, 3);  /* 0C08A044 mov.l @(disp,pc),Rn */
	IF(0x0C08A046u); r0 = MACL;  /* 0C08A046 sts macl,Rn */
	IF(0x0C08A048u); r5 = R32(r0 + r6); UPD(0x0C08A04Au, 2);  /* 0C08A048 mov.l @(r0,Rm),Rn */
	r3 = 0x4000000u; UPD(0x0C08A04Cu, 1);  /* 0C08A04A mov.l @(disp,pc),Rn */
	T = (r5 & r3) == 0;  /* 0C08A04C tst Rm,Rn */
	r5 = 0xC19D77Cu; UPD(0x0C08A050u, 2);  /* 0C08A04E mov.l @(disp,pc),Rn */
	if (T) { UPD(0x0C08A002u, 3); goto L_0C08A002; }  /* 0C08A050 bt */
L_0C08A052: BLKS(0x0C08A052u);
	r5 = 0xC19D794u; UPD(0x0C08A054u, 1);  /* 0C08A052 mov.l @(disp,pc),Rn */
	{ IF(0x0C08A056u); ; /* slot nop */ UPD(0x0C08A002u, 3); goto L_0C08A002; }  /* 0C08A054 bra */
L_0C08A060: BLKS(0x0C08A060u);
	r15 = r14;  /* 0C08A060 mov Rm,Rn */
	IF(0x0C08A062u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C08A062 rts */
}

void blk_f_0C08A090(sh3_t *c)
{
	LOCALS;
L_0C08A090: BLKS(0x0C08A090u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08A092u, 1);  /* 0C08A090 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08A094u, 1);  /* 0C08A092 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C08A094 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08A098u, 2);  /* 0C08A096 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08A09Au, 1);  /* 0C08A098 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C08A09Cu, 1);  /* 0C08A09A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08A09Eu, 1);  /* 0C08A09C mov.l Rm,@-Rn */
	IF(0x0C08A09Eu); MACL = r8 * r2;  /* 0C08A09E mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08A0A2u, 3);  /* 0C08A0A0 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08A0A4u, 1);  /* 0C08A0A2 mov.l @(disp,pc),Rn */
	IF(0x0C08A0A4u); r10 = MACL;  /* 0C08A0A4 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08A0A8u, 2);  /* 0C08A0A6 mov.l Rm,@-Rn */
	r10 += r0;  /* 0C08A0A8 add Rm,Rn */
	IF(0x0C08A0AAu); r15 -= 4; W32(r15, PR); UPD(0x0C08A0ACu, 2);  /* 0C08A0AA sts.l pr,@-Rn */
	r10 += 0x3Cu;  /* 0C08A0AC add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C08A0B0u, 2);  /* 0C08A0AE mov.w @Rm,Rn */
	r14 = r15;  /* 0C08A0B0 mov Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08A0B2 tst Rm,Rn */
	{ u32 c_ = !T; r10 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08A0BCu, 5); goto L_0C08A0BC; } goto L_0C08A0B8; }  /* 0C08A0B4 bf/s */
L_0C08A0B8: BLKS(0x0C08A0B8u);
	{ IF(0x0C08A0BAu); ; /* slot nop */ UPD(0x0C08A240u, 4); goto L_0C08A240; }  /* 0C08A0B8 bra */
L_0C08A0BC: BLKS(0x0C08A0BCu);
	r9 = 0xC0A9DE0u; UPD(0x0C08A0BEu, 1);  /* 0C08A0BC mov.l @(disp,pc),Rn */
	IF(0x0C08A0BEu); { u32 t_ = r9; PR = 0x0C08A0C2u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9DE0, 0x0C0A9DE0u, 0x0C08A0C2u); }  /* 0C08A0BE jsr @Rn */
L_0C08A0C2: BLKS(0x0C08A0C2u);
	T = (r0 & r0) == 0;  /* 0C08A0C2 tst Rm,Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08A160u, 4); goto L_0C08A160; } goto L_0C08A0C8; }  /* 0C08A0C4 bt/s */
L_0C08A0C8: BLKS(0x0C08A0C8u);
	r4 = 0x9Cu; UPD(0x0C08A0CAu, 2);  /* 0C08A0C8 mov.w @(disp,pc),Rn */
	r1 = 0xAu;  /* 0C08A0CA mov #imm,Rn */
	r4 += r10;  /* 0C08A0CC add Rm,Rn */
	W8(r4, r1); UPD(0x0C08A0D0u, 3);  /* 0C08A0CE mov.b Rm,@Rn */
	r3 = 0x3u;  /* 0C08A0D0 mov #imm,Rn */
	r4 += 0x1u;  /* 0C08A0D2 add #imm,Rn */
	r2 = R32(r10 + 0x8u); UPD(0x0C08A0D6u, 3);  /* 0C08A0D4 mov.l @(disp,Rm),Rn */
	T = r2 > r3;  /* 0C08A0D6 cmp/hi Rm,Rn */
	{ u32 c_ = T; W8(r4, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08A140u, 4); goto L_0C08A140; } UPD(0x0C08A0DCu, 1); goto L_0C08A0DC; }  /* 0C08A0D8 bt/s */
L_0C08A0DC: BLKS(0x0C08A0DCu);
	r0 = 0xC08A0E4u;  /* 0C08A0DC mova @(disp,pc),r0 */
	IF(0x0C08A0DEu); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08A0E0u, 2);  /* 0C08A0DE mov.b @(r0,Rm),Rn */
	IF(0x0C08A0E0u); { u32 tv_ = (r5 + 0x0C08A0E4u); u32 t_ = PHYS(tv_); IF(0x0C08A0E2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08A0F0u: goto L_0C08A0F0; case 0x0C08A110u: goto L_0C08A110; case 0x0C08A120u: goto L_0C08A120; case 0x0C08A130u: goto L_0C08A130; default: JUMPD(tv_); } }  /* 0C08A0E0 braf Rn */
L_0C08A0F0: BLKS(0x0C08A0F0u);
	r5 = 0xC19D962u; UPD(0x0C08A0F2u, 1);  /* 0C08A0F0 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C08A0F2 mov Rm,Rn */
	UPD(0x0C08A0F4u, 1);
L_0C08A0F4: BLKS(0x0C08A0F4u);
	r6 = 0xC0A9D90u; UPD(0x0C08A0F6u, 1);  /* 0C08A0F4 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08A0F6 mov Rm,Rn */
	IF(0x0C08A0F8u); PR = R32(r15); r15 += 4; UPD(0x0C08A0FAu, 2);  /* 0C08A0F8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A0FCu, 1);  /* 0C08A0FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08A0FEu, 1);  /* 0C08A0FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08A100u, 1);  /* 0C08A0FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08A102u, 1);  /* 0C08A100 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A104u, 1);  /* 0C08A102 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A106u, 1);  /* 0C08A104 mov.l @Rm+,Rn */
	IF(0x0C08A106u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9D90u: TAIL(blk_f_0C0A9D90); default: JUMPD(tv_); } }  /* 0C08A106 jmp @Rn */
L_0C08A110: BLKS(0x0C08A110u);
	r5 = 0xC19D9A8u; UPD(0x0C08A112u, 1);  /* 0C08A110 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C08A0F4u, 3); goto L_0C08A0F4; }  /* 0C08A112 bra */
L_0C08A120: BLKS(0x0C08A120u);
	r5 = 0xC19D9EEu; UPD(0x0C08A122u, 1);  /* 0C08A120 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C08A0F4u, 3); goto L_0C08A0F4; }  /* 0C08A122 bra */
L_0C08A130: BLKS(0x0C08A130u);
	r5 = 0xC19DA34u; UPD(0x0C08A132u, 1);  /* 0C08A130 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C08A0F4u, 3); goto L_0C08A0F4; }  /* 0C08A132 bra */
L_0C08A140: BLKS(0x0C08A140u);
	r15 = r14;  /* 0C08A140 mov Rm,Rn */
	IF(0x0C08A142u); PR = R32(r15); r15 += 4; UPD(0x0C08A144u, 2);  /* 0C08A142 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A146u, 1);  /* 0C08A144 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08A148u, 1);  /* 0C08A146 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08A14Au, 1);  /* 0C08A148 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08A14Cu, 1);  /* 0C08A14A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A14Eu, 1);  /* 0C08A14C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A150u, 1);  /* 0C08A14E mov.l @Rm+,Rn */
	IF(0x0C08A150u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08A150 rts */
L_0C08A160: BLKS(0x0C08A160u);
	r8 = 0x9Cu; UPD(0x0C08A162u, 1);  /* 0C08A160 mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C08A162 add Rm,Rn */
	r11 = r8;  /* 0C08A164 mov Rm,Rn */
	r11 += 0x3u;  /* 0C08A166 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r11); UPD(0x0C08A16Au, 4);  /* 0C08A168 mov.b @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C08A16A extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08A16C tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C08A1D0u, 5); goto L_0C08A1D0; } goto L_0C08A172; }  /* 0C08A16E bt/s */
L_0C08A172: BLKS(0x0C08A172u);
	if (!T) { UPD(0x0C08A140u, 4); goto L_0C08A140; }  /* 0C08A172 bf */
L_0C08A174: BLKS(0x0C08A174u);
	r5 = R32(r10 + 0x8u); UPD(0x0C08A176u, 1);  /* 0C08A174 mov.l @(disp,Rm),Rn */
	r6 = 0x3u;  /* 0C08A176 mov #imm,Rn */
	IF(0x0C08A178u); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C08A178 shld Rm,Rn */
	r13 = 0xC19D938u; UPD(0x0C08A17Cu, 3);  /* 0C08A17A mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C08A17C add #imm,Rn */
	r5 += r13;  /* 0C08A17E add Rm,Rn */
	r12 = R32(r5); UPD(0x0C08A182u, 3);  /* 0C08A180 mov.l @Rm,Rn */
	r13 = R32(r10 + 0x24u); UPD(0x0C08A184u, 1);  /* 0C08A182 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C08A186u, 1);  /* 0C08A184 mov.w @(disp,pc),Rn */
	r13 += r12;  /* 0C08A186 add Rm,Rn */
	IF(0x0C08A188u); r2 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C08A18Au, 2);  /* 0C08A188 mov.b @(r0,Rm),Rn */
	r4 = R32(r5 + 0x4u); UPD(0x0C08A18Cu, 1);  /* 0C08A18A mov.l @(disp,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C08A18C extu.b Rm,Rn */
	r12 = R32(r10 + 0x28u); UPD(0x0C08A190u, 2);  /* 0C08A18E mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C08A192u, 1);  /* 0C08A190 mov.l Rm,@Rn */
	r12 += r4;  /* 0C08A192 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C08A196u, 2);  /* 0C08A194 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C08A196 mov Rm,Rn */
	IF(0x0C08A198u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08A19Au, 2);  /* 0C08A198 mov.b @(r0,Rm),Rn */
	r0 = 0xC062780u; UPD(0x0C08A19Cu, 1);  /* 0C08A19A mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C08A19C extu.b Rm,Rn */
	r5 = 0x40000u; UPD(0x0C08A1A0u, 2);  /* 0C08A19E mov.l @(disp,pc),Rn */
	r4 = 0x8000u; UPD(0x0C08A1A2u, 1);  /* 0C08A1A0 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08A1A4u, 1);  /* 0C08A1A2 mov.l Rm,@(disp,Rn) */
	IF(0x0C08A1A4u); { u32 t_ = r0; PR = 0x0C08A1A8u; W32(r15 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08A1A8u); }  /* 0C08A1A4 jsr @Rn */
L_0C08A1A8: BLKS(0x0C08A1A8u);
	r4 = 0x808080u; UPD(0x0C08A1AAu, 1);  /* 0C08A1A8 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C08A1AA mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C08A1AEu, 2);  /* 0C08A1AC mov.l Rm,@(disp,Rn) */
	r6 = r13;  /* 0C08A1AE mov Rm,Rn */
	W32(r15 + 0x10u, r4); UPD(0x0C08A1B2u, 2);  /* 0C08A1B0 mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C08A1B4u, 1);  /* 0C08A1B2 mov.l @Rm,Rn */
	r10 = 0xC0BEEF0u; UPD(0x0C08A1B6u, 1);  /* 0C08A1B4 mov.l @(disp,pc),Rn */
	IF(0x0C08A1B6u); { u32 t_ = r10; PR = 0x0C08A1BAu; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C08A1BAu); }  /* 0C08A1B6 jsr @Rn */
L_0C08A1BA: BLKS(0x0C08A1BAu);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C08A1BCu, 1);  /* 0C08A1BA mov.b @Rm,Rn */
	r15 += 0x14u;  /* 0C08A1BC add #imm,Rn */
	r1 += 0x1u;  /* 0C08A1BE add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C08A1C0 extu.b Rm,Rn */
	T = r0 == 0x78u;  /* 0C08A1C2 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r8, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08A140u, 7); goto L_0C08A140; } UPD(0x0C08A1C8u, 1); goto L_0C08A1C8; }  /* 0C08A1C4 bf/s */
L_0C08A1C8: BLKS(0x0C08A1C8u);
	W8(r8, r9); UPD(0x0C08A1CAu, 1);  /* 0C08A1C8 mov.b Rm,@Rn */
	W8(r11, r9); UPD(0x0C08A1CCu, 1);  /* 0C08A1CA mov.b Rm,@Rn */
L_0C08A1CC: BLKS(0x0C08A1CCu);
	{ IF(0x0C08A1CEu); ; /* slot nop */ UPD(0x0C08A140u, 3); goto L_0C08A140; }  /* 0C08A1CC bra */
L_0C08A1D0: BLKS(0x0C08A1D0u);
	r1 = 0x99u; UPD(0x0C08A1D2u, 1);  /* 0C08A1D0 mov.w @(disp,pc),Rn */
	r1 += r10;  /* 0C08A1D2 add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r1); UPD(0x0C08A1D6u, 2);  /* 0C08A1D4 mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C08A1D6 add #imm,Rn */
	r0 = r12 & 0xFF;  /* 0C08A1D8 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C08A1DA cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r1, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08A140u, 6); goto L_0C08A140; } UPD(0x0C08A1E0u, 1); goto L_0C08A1E0; }  /* 0C08A1DC bf/s */
L_0C08A1E0: BLKS(0x0C08A1E0u);
	r3 = R32(r10 + 0x8u); UPD(0x0C08A1E2u, 1);  /* 0C08A1E0 mov.l @(disp,Rm),Rn */
	r2 = 0x3u;  /* 0C08A1E2 mov #imm,Rn */
	IF(0x0C08A1E4u); ARG0(0x432Du); { s32 s_ = (s32)r2; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C08A1E4 shld Rm,Rn */
	r13 = 0xC19D938u; UPD(0x0C08A1E8u, 3);  /* 0C08A1E6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C08A1E8 add #imm,Rn */
	W8(r1, r9); UPD(0x0C08A1ECu, 2);  /* 0C08A1EA mov.b Rm,@Rn */
	r3 += r13;  /* 0C08A1EC add Rm,Rn */
	r12 = R32(r3); UPD(0x0C08A1F0u, 2);  /* 0C08A1EE mov.l @Rm,Rn */
	r13 = R32(r10 + 0x24u); UPD(0x0C08A1F2u, 1);  /* 0C08A1F0 mov.l @(disp,Rm),Rn */
	r13 += r12;  /* 0C08A1F2 add Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C08A1F6u, 2);  /* 0C08A1F4 mov.l @(disp,Rm),Rn */
	r12 = R32(r10 + 0x28u); UPD(0x0C08A1F8u, 1);  /* 0C08A1F6 mov.l @(disp,Rm),Rn */
	r12 += r0;  /* 0C08A1F8 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08A1FCu, 2);  /* 0C08A1FA mov.w @(disp,pc),Rn */
	IF(0x0C08A1FCu); r7 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C08A1FEu, 1);  /* 0C08A1FC mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08A1FE extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C08A202u, 2);  /* 0C08A200 mov.l Rm,@Rn */
	r0 = r10;  /* 0C08A202 mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C08A206u, 2);  /* 0C08A204 mov.w @(disp,pc),Rn */
	IF(0x0C08A206u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C08A208u, 1);  /* 0C08A206 mov.b @(r0,Rm),Rn */
	r0 = 0xC062780u; UPD(0x0C08A20Au, 1);  /* 0C08A208 mov.l @(disp,pc),Rn */
	r3 = r4 & 0xFF;  /* 0C08A20A extu.b Rm,Rn */
	r2 = 0x10000u; UPD(0x0C08A20Eu, 2);  /* 0C08A20C mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C08A210u, 1);  /* 0C08A20E mov.l Rm,@(disp,Rn) */
	r4 = 0x8000u; UPD(0x0C08A212u, 1);  /* 0C08A210 mov.l @(disp,pc),Rn */
	IF(0x0C08A212u); { u32 t_ = r0; PR = 0x0C08A216u; W32(r15 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08A216u); }  /* 0C08A212 jsr @Rn */
L_0C08A216: BLKS(0x0C08A216u);
	W32(r15 + 0xCu, r0); UPD(0x0C08A218u, 1);  /* 0C08A216 mov.l Rm,@(disp,Rn) */
	r6 = r13;  /* 0C08A218 mov Rm,Rn */
	r0 = 0x808080u; UPD(0x0C08A21Cu, 2);  /* 0C08A21A mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C08A21C mov #imm,Rn */
	W32(r15 + 0x10u, r0); UPD(0x0C08A220u, 2);  /* 0C08A21E mov.l Rm,@(disp,Rn) */
	r7 = r12;  /* 0C08A220 mov Rm,Rn */
	r13 = 0xC0BEEF0u; UPD(0x0C08A224u, 2);  /* 0C08A222 mov.l @(disp,pc),Rn */
	IF(0x0C08A224u); { u32 t_ = r13; PR = 0x0C08A228u; r4 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C08A228u); }  /* 0C08A224 jsr @Rn */
L_0C08A228: BLKS(0x0C08A228u);
	r10 = (u32)(s32)(s8)R8(r8); UPD(0x0C08A22Au, 1);  /* 0C08A228 mov.b @Rm,Rn */
	r15 += 0x14u;  /* 0C08A22A add #imm,Rn */
	r10 += 0x1u;  /* 0C08A22C add #imm,Rn */
	r0 = r10 & 0xFF;  /* 0C08A22E extu.b Rm,Rn */
	T = r0 == 0x18u;  /* 0C08A230 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r8, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08A1CCu, 7); goto L_0C08A1CC; } UPD(0x0C08A236u, 1); goto L_0C08A236; }  /* 0C08A232 bf/s */
L_0C08A236: BLKS(0x0C08A236u);
	W8(r8, r9); UPD(0x0C08A238u, 1);  /* 0C08A236 mov.b Rm,@Rn */
	r8 = (u32)(s32)(s8)R8(r11); UPD(0x0C08A23Au, 1);  /* 0C08A238 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C08A23A add #imm,Rn */
	{ W8(r11, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C08A140u, 4); goto L_0C08A140; }  /* 0C08A23C bra */
L_0C08A240: BLKS(0x0C08A240u);
	r11 = 0xC0A9CB0u; UPD(0x0C08A242u, 1);  /* 0C08A240 mov.l @(disp,pc),Rn */
	IF(0x0C08A242u); { u32 t_ = r11; PR = 0x0C08A246u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C08A246u); }  /* 0C08A242 jsr @Rn */
L_0C08A246: BLKS(0x0C08A246u);
	r11 = 0x9Cu; UPD(0x0C08A248u, 1);  /* 0C08A246 mov.w @(disp,pc),Rn */
	r11 += r10;  /* 0C08A248 add Rm,Rn */
	r2 = r11;  /* 0C08A24A mov Rm,Rn */
	r2 += 0x1u;  /* 0C08A24C add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C08A250u, 4);  /* 0C08A24E mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C08A250 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08A2B0u, 4); goto L_0C08A2B0; } goto L_0C08A256; }  /* 0C08A252 bt/s */
L_0C08A256: BLKS(0x0C08A256u);
	W8(r2, r1); UPD(0x0C08A258u, 2);  /* 0C08A256 mov.b Rm,@Rn */
L_0C08A258: BLKS(0x0C08A258u);
	{ IF(0x0C08A25Au); ; /* slot nop */ UPD(0x0C08A140u, 3); goto L_0C08A140; }  /* 0C08A258 bra */
L_0C08A2B0: BLKS(0x0C08A2B0u);
	r9 = 0x99u; UPD(0x0C08A2B2u, 1);  /* 0C08A2B0 mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C08A2B2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C08A2B6u, 2);  /* 0C08A2B4 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C08A2B6 add #imm,Rn */
	W8(r9, r0); UPD(0x0C08A2BAu, 2);  /* 0C08A2B8 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C08A2BA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08A2BC tst Rm,Rn */
	if (!T) { UPD(0x0C08A258u, 5); goto L_0C08A258; }  /* 0C08A2BE bf */
L_0C08A2C0: BLKS(0x0C08A2C0u);
	r6 = R32(r10 + 0x28u); UPD(0x0C08A2C2u, 1);  /* 0C08A2C0 mov.l @(disp,Rm),Rn */
	r2 = 0xFFFFFFFAu;  /* 0C08A2C2 mov #imm,Rn */
	r5 = (r6 >> 16) | (r6 << 16);  /* 0C08A2C4 swap.w Rm,Rn */
	r4 = 0xFFFFFEA0u; UPD(0x0C08A2C8u, 3);  /* 0C08A2C6 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C08A2C8 exts.w Rm,Rn */
	r9 += r4;  /* 0C08A2CA add Rm,Rn */
	IF(0x0C08A2CCu); ARG0(0x492Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = (u32)((s32)r9 >> 31); else r9 = (u32)((s32)r9 >> ((~s_ & 31) + 1)); }  /* 0C08A2CC shad Rm,Rn */
	r13 = 0xC062780u; UPD(0x0C08A2D0u, 4);  /* 0C08A2CE mov.l @(disp,pc),Rn */
	r9 += r9;  /* 0C08A2D0 add Rm,Rn */
	r0 = 0xC19D958u; UPD(0x0C08A2D4u, 2);  /* 0C08A2D2 mov.l @(disp,pc),Rn */
	r4 = 0x40u;  /* 0C08A2D4 mov #imm,Rn */
	IF(0x0C08A2D6u); { u32 t_ = r13; PR = 0x0C08A2DAu; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08A2DAu); }  /* 0C08A2D6 jsr @Rn */
L_0C08A2DA: BLKS(0x0C08A2DAu);
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C08A2DCu, 1);  /* 0C08A2DA mov.w @Rm,Rn */
	r7 = r0;  /* 0C08A2DC mov Rm,Rn */
	r12 = 0xC069B20u; UPD(0x0C08A2E0u, 2);  /* 0C08A2DE mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C08A2E0 add Rm,Rn */
	r13 = 0x48000u; UPD(0x0C08A2E4u, 2);  /* 0C08A2E2 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C08A2E4 exts.w Rm,Rn */
	r4 = r8;  /* 0C08A2E6 mov Rm,Rn */
	IF(0x0C08A2E8u); { u32 t_ = r12; PR = 0x0C08A2ECu; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08A2ECu); }  /* 0C08A2E8 jsr @Rn */
L_0C08A2EC: BLKS(0x0C08A2ECu);
	r5 = r13;  /* 0C08A2EC mov Rm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C08A2F0u, 2);  /* 0C08A2EE mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C08A2F0 mov Rm,Rn */
	IF(0x0C08A2F2u); { u32 t_ = r13; PR = 0x0C08A2F6u; r12 = r0; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08A2F6u); }  /* 0C08A2F2 jsr @Rn */
L_0C08A2F6: BLKS(0x0C08A2F6u);
	r1 = R32(r10); UPD(0x0C08A2F8u, 1);  /* 0C08A2F6 mov.l @Rm,Rn */
	r8 = 0x4000000u; UPD(0x0C08A2FAu, 1);  /* 0C08A2F8 mov.l @(disp,pc),Rn */
	T = (r1 & r8) == 0;  /* 0C08A2FA tst Rm,Rn */
	{ u32 c_ = !T; r3 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08A310u, 4); goto L_0C08A310; } UPD(0x0C08A300u, 1); goto L_0C08A300; }  /* 0C08A2FC bf/s */
L_0C08A300: BLKS(0x0C08A300u);
	r12 = (u32)(s32)(s8)R8(r11); UPD(0x0C08A302u, 1);  /* 0C08A300 mov.b @Rm,Rn */
	r12 += 0xFFFFFFFFu;  /* 0C08A302 add #imm,Rn */
	r1 = r12 & 0xFF;  /* 0C08A304 extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C08A306 tst Rm,Rn */
	{ u32 c_ = !T; W8(r11, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08A258u, 6); goto L_0C08A258; } UPD(0x0C08A30Cu, 1); goto L_0C08A30C; }  /* 0C08A308 bf/s */
L_0C08A30C: BLKS(0x0C08A30Cu);
	{ W32(r10, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C08A140u, 3); goto L_0C08A140; }  /* 0C08A30C bra */
L_0C08A310: BLKS(0x0C08A310u);
	r7 = 0xA9u; UPD(0x0C08A312u, 1);  /* 0C08A310 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C08A312 mov Rm,Rn */
	IF(0x0C08A314u); r9 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C08A316u, 2);  /* 0C08A314 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08A316 add #imm,Rn */
	r8 = 0xC07CD80u; UPD(0x0C08A31Au, 2);  /* 0C08A318 mov.l @(disp,pc),Rn */
	r7 = r9 & 0xFF;  /* 0C08A31A extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C08A31Eu, 2);  /* 0C08A31C mov.l Rm,@Rn */
	r4 = 0x3u;  /* 0C08A31E mov #imm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C08A322u, 2);  /* 0C08A320 mov.l Rm,@(disp,Rn) */
	r5 = R32(r10 + 0x24u); UPD(0x0C08A324u, 1);  /* 0C08A322 mov.l @(disp,Rm),Rn */
	IF(0x0C08A324u); { u32 t_ = r8; PR = 0x0C08A328u; r6 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C08A328u); }  /* 0C08A324 jsr @Rn */
L_0C08A328: BLKS(0x0C08A328u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C08A300u, 3); goto L_0C08A300; }  /* 0C08A328 bra */
}

void blk_f_0C08A350(sh3_t *c)
{
	LOCALS;
L_0C08A350: BLKS(0x0C08A350u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08A352u, 1);  /* 0C08A350 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C08A352 exts.w Rm,Rn */
	r0 = 0xB4u; UPD(0x0C08A356u, 2);  /* 0C08A354 mov.w @(disp,pc),Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08A358u, 1);  /* 0C08A356 mov.l Rm,@-Rn */
	IF(0x0C08A358u); MACL = r4 * r0;  /* 0C08A358 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08A35Cu, 3);  /* 0C08A35A mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08A35Eu, 1);  /* 0C08A35C mov.l @(disp,pc),Rn */
	IF(0x0C08A35Eu); r8 = MACL;  /* 0C08A35E sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08A362u, 2);  /* 0C08A360 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C08A362 add Rm,Rn */
	r9 = 0x9Fu; UPD(0x0C08A366u, 2);  /* 0C08A364 mov.w @(disp,pc),Rn */
	IF(0x0C08A366u); r15 -= 4; W32(r15, PR); UPD(0x0C08A368u, 1);  /* 0C08A366 sts.l pr,@-Rn */
	r9 += r8;  /* 0C08A368 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08A36Cu, 2);  /* 0C08A36A mov.b @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C08A36C extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C08A36E cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08A3E0u, 5); goto L_0C08A3E0; } goto L_0C08A374; }  /* 0C08A370 bt/s */
L_0C08A374: BLKS(0x0C08A374u);
	r10 = 0x1u;  /* 0C08A374 mov #imm,Rn */
	T = (s32)r0 > (s32)r10;  /* 0C08A376 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C08A3C0u, 6); goto L_0C08A3C0; } goto L_0C08A37C; }  /* 0C08A378 bt/s */
L_0C08A37C: BLKS(0x0C08A37Cu);
	T = (r0 & r0) == 0;  /* 0C08A37C tst Rm,Rn */
	if (T) { UPD(0x0C08A390u, 5); goto L_0C08A390; }  /* 0C08A37E bt */
L_0C08A380: BLKS(0x0C08A380u);
	r15 = r14;  /* 0C08A380 mov Rm,Rn */
	IF(0x0C08A382u); PR = R32(r15); r15 += 4; UPD(0x0C08A384u, 2);  /* 0C08A382 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A386u, 1);  /* 0C08A384 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A388u, 1);  /* 0C08A386 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A38Au, 1);  /* 0C08A388 mov.l @Rm+,Rn */
	IF(0x0C08A38Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08A38A rts */
L_0C08A390: BLKS(0x0C08A390u);
	r0 = 0xC0A9CB0u; UPD(0x0C08A392u, 1);  /* 0C08A390 mov.l @(disp,pc),Rn */
	IF(0x0C08A392u); { u32 t_ = r0; PR = 0x0C08A396u; IF(0x0C08A394u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C08A396u); }  /* 0C08A392 jsr @Rn */
L_0C08A396: BLKS(0x0C08A396u);
	r1 = R32(r8); UPD(0x0C08A398u, 1);  /* 0C08A396 mov.l @Rm,Rn */
	r3 = 0x100u; UPD(0x0C08A39Au, 1);  /* 0C08A398 mov.w @(disp,pc),Rn */
	T = (r1 & r3) == 0;  /* 0C08A39A tst Rm,Rn */
	if (T) { UPD(0x0C08A380u, 4); goto L_0C08A380; }  /* 0C08A39C bt */
L_0C08A39E: BLKS(0x0C08A39Eu);
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C08A3A0u, 1);  /* 0C08A39E mov.b @Rm,Rn */
	r4 = 0x6Du;  /* 0C08A3A0 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C08A3A4u, 2);  /* 0C08A3A2 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C08A3A4 add #imm,Rn */
	IF(0x0C08A3A6u); W16(r0 + r8, r10); UPD(0x0C08A3A8u, 2);  /* 0C08A3A6 mov.w Rm,@(r0,Rn) */
	W8(r9, r2); UPD(0x0C08A3AAu, 1);  /* 0C08A3A8 mov.b Rm,@Rn */
L_0C08A3AA: BLKS(0x0C08A3AAu);
	r5 = 0xC0C2110u; UPD(0x0C08A3ACu, 1);  /* 0C08A3AA mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08A3AC mov Rm,Rn */
	IF(0x0C08A3AEu); PR = R32(r15); r15 += 4; UPD(0x0C08A3B0u, 2);  /* 0C08A3AE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A3B2u, 1);  /* 0C08A3B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A3B4u, 1);  /* 0C08A3B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A3B6u, 1);  /* 0C08A3B4 mov.l @Rm+,Rn */
	IF(0x0C08A3B6u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C2110u: TAIL(blk_f_0C0C2110); default: JUMPD(tv_); } }  /* 0C08A3B6 jmp @Rn */
L_0C08A3C0: BLKS(0x0C08A3C0u);
	if (!T) { UPD(0x0C08A380u, 3); goto L_0C08A380; }  /* 0C08A3C0 bf */
L_0C08A3C2: BLKS(0x0C08A3C2u);
	r10 = 0xC0A9CB0u; UPD(0x0C08A3C4u, 1);  /* 0C08A3C2 mov.l @(disp,pc),Rn */
	IF(0x0C08A3C4u); { u32 t_ = r10; PR = 0x0C08A3C8u; IF(0x0C08A3C6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C08A3C8u); }  /* 0C08A3C4 jsr @Rn */
L_0C08A3C8: BLKS(0x0C08A3C8u);
	r3 = R32(r8); UPD(0x0C08A3CAu, 1);  /* 0C08A3C8 mov.l @Rm,Rn */
	r7 = 0x100u; UPD(0x0C08A3CCu, 1);  /* 0C08A3CA mov.w @(disp,pc),Rn */
	T = (r3 & r7) == 0;  /* 0C08A3CC tst Rm,Rn */
	if (!T) { UPD(0x0C08A380u, 4); goto L_0C08A380; }  /* 0C08A3CE bf */
L_0C08A3D0: BLKS(0x0C08A3D0u);
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C08A3D2u, 1);  /* 0C08A3D0 mov.b @Rm,Rn */
	r4 = 0xFFFFFFFFu;  /* 0C08A3D2 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C08A3D6u, 2);  /* 0C08A3D4 mov.w @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C08A3D6 add #imm,Rn */
	IF(0x0C08A3D8u); W16(r0 + r8, r4); UPD(0x0C08A3DAu, 2);  /* 0C08A3D8 mov.w Rm,@(r0,Rn) */
	W8(r9, r2); UPD(0x0C08A3DCu, 1);  /* 0C08A3DA mov.b Rm,@Rn */
	{ r4 = 0x75u; /* slot mov #imm,Rn */ UPD(0x0C08A3AAu, 3); goto L_0C08A3AA; }  /* 0C08A3DC bra */
L_0C08A3E0: BLKS(0x0C08A3E0u);
	r7 = 0x88u; UPD(0x0C08A3E2u, 1);  /* 0C08A3E0 mov.w @(disp,pc),Rn */
	r10 = 0x11u;  /* 0C08A3E2 mov #imm,Rn */
	r7 += r8;  /* 0C08A3E4 add Rm,Rn */
	r2 = 0x99u; UPD(0x0C08A3E8u, 3);  /* 0C08A3E6 mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C08A3EAu, 1);  /* 0C08A3E8 mov.w @Rm,Rn */
	r2 += r8;  /* 0C08A3EA add Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C08A3EEu, 2);  /* 0C08A3EC mov.l @(disp,Rm),Rn */
	IF(0x0C08A3EEu); ARG0(0x46ADu); { s32 s_ = (s32)r10; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C08A3EE shld Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C08A3F2u, 2);  /* 0C08A3F0 mov.b @Rm,Rn */
	r5 -= r6;  /* 0C08A3F2 sub Rm,Rn */
	r4 += 0x1u;  /* 0C08A3F4 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C08A3F6 extu.b Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C08A3FAu, 4);  /* 0C08A3F8 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x20u;  /* 0C08A3FA cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08A380u, 4); goto L_0C08A380; } UPD(0x0C08A400u, 1); goto L_0C08A400; }  /* 0C08A3FC bf/s */
L_0C08A400: BLKS(0x0C08A400u);
	r7 += 0x1u;  /* 0C08A400 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r7); UPD(0x0C08A404u, 2);  /* 0C08A402 mov.b @Rm,Rn */
	r0 = 0x0u;  /* 0C08A404 mov #imm,Rn */
	r8 += r3;  /* 0C08A406 add Rm,Rn */
	W8(r2, r0); UPD(0x0C08A40Au, 3);  /* 0C08A408 mov.b Rm,@Rn */
	{ W8(r9, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C08A380u, 3); goto L_0C08A380; }  /* 0C08A40A bra */
}

void blk_f_0C08A430(sh3_t *c)
{
	LOCALS;
L_0C08A430: BLKS(0x0C08A430u);
	r3 = 0xB4u; UPD(0x0C08A432u, 1);  /* 0C08A430 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C08A432 exts.w Rm,Rn */
	IF(0x0C08A434u); MACL = r4 * r3;  /* 0C08A434 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08A438u, 4);  /* 0C08A436 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08A43Au, 1);  /* 0C08A438 mov.l Rm,@-Rn */
	IF(0x0C08A43Au); r2 = MACL;  /* 0C08A43A sts macl,Rn */
	r0 += r2;  /* 0C08A43C add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08A440u, 3);  /* 0C08A43E mov.l @(disp,Rm),Rn */
	r0 = 0x3u;  /* 0C08A440 mov #imm,Rn */
	T = r2 > r0;  /* 0C08A442 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08A4D0u, 5); goto L_0C08A4D0; } goto L_0C08A448; }  /* 0C08A444 bt/s */
L_0C08A448: BLKS(0x0C08A448u);
	r0 = 0xC08A450u;  /* 0C08A448 mova @(disp,pc),r0 */
	IF(0x0C08A44Au); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08A44Cu, 3);  /* 0C08A44A mov.b @(r0,Rm),Rn */
	IF(0x0C08A44Cu); { u32 tv_ = (r5 + 0x0C08A450u); u32 t_ = PHYS(tv_); IF(0x0C08A44Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08A460u: goto L_0C08A460; case 0x0C08A490u: goto L_0C08A490; case 0x0C08A4B0u: goto L_0C08A4B0; default: JUMPD(tv_); } }  /* 0C08A44C braf Rn */
L_0C08A460: BLKS(0x0C08A460u);
	r7 = 0xB4u; UPD(0x0C08A462u, 1);  /* 0C08A460 mov.w @(disp,pc),Rn */
	IF(0x0C08A462u); MACL = r4 * r7;  /* 0C08A462 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08A466u, 3);  /* 0C08A464 mov.l @(disp,pc),Rn */
	IF(0x0C08A466u); r0 = MACL;  /* 0C08A466 sts macl,Rn */
	IF(0x0C08A468u); r0 = R32(r0 + r6); UPD(0x0C08A46Au, 2);  /* 0C08A468 mov.l @(r0,Rm),Rn */
	IF(0x0C08A46Au); r0 >>= 16;  /* 0C08A46A shlr16 Rn */
	IF(0x0C08A46Cu); r0 >>= 8;  /* 0C08A46C shlr8 Rn */
	IF(0x0C08A46Eu); r0 >>= 2;  /* 0C08A46E shlr2 Rn */
	r0 &= 0x1u;  /* 0C08A470 and #imm,r0 */
	r5 = 0xC19E71Cu; UPD(0x0C08A474u, 5);  /* 0C08A472 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C08A474 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C08A480u, 4); goto L_0C08A480; }  /* 0C08A476 bt */
L_0C08A478: BLKS(0x0C08A478u);
	r6 = 0xC0A9D90u; UPD(0x0C08A47Au, 1);  /* 0C08A478 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08A47A mov Rm,Rn */
	IF(0x0C08A47Cu); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A9D90u: TAIL(blk_f_0C0A9D90); default: JUMPD(tv_); } }  /* 0C08A47C jmp @Rn */
L_0C08A480: BLKS(0x0C08A480u);
	r5 = 0xC19E764u; UPD(0x0C08A482u, 1);  /* 0C08A480 mov.l @(disp,pc),Rn */
	{ IF(0x0C08A484u); ; /* slot nop */ UPD(0x0C08A478u, 3); goto L_0C08A478; }  /* 0C08A482 bra */
L_0C08A490: BLKS(0x0C08A490u);
	r0 = 0xB4u; UPD(0x0C08A492u, 1);  /* 0C08A490 mov.w @(disp,pc),Rn */
	IF(0x0C08A492u); MACL = r4 * r0;  /* 0C08A492 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C08A496u, 3);  /* 0C08A494 mov.l @(disp,pc),Rn */
	IF(0x0C08A496u); r0 = MACL;  /* 0C08A496 sts macl,Rn */
	IF(0x0C08A498u); r0 = R32(r0 + r2); UPD(0x0C08A49Au, 2);  /* 0C08A498 mov.l @(r0,Rm),Rn */
	IF(0x0C08A49Au); r0 >>= 16;  /* 0C08A49A shlr16 Rn */
	IF(0x0C08A49Cu); r0 >>= 8;  /* 0C08A49C shlr8 Rn */
	IF(0x0C08A49Eu); r0 >>= 2;  /* 0C08A49E shlr2 Rn */
	r0 &= 0x1u;  /* 0C08A4A0 and #imm,r0 */
	r5 = 0xC19E7B4u; UPD(0x0C08A4A4u, 5);  /* 0C08A4A2 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C08A4A4 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C08A478u, 4); goto L_0C08A478; }  /* 0C08A4A6 bf */
L_0C08A4A8: BLKS(0x0C08A4A8u);
	r5 = 0xC19E80Au; UPD(0x0C08A4AAu, 1);  /* 0C08A4A8 mov.l @(disp,pc),Rn */
	{ IF(0x0C08A4ACu); ; /* slot nop */ UPD(0x0C08A478u, 3); goto L_0C08A478; }  /* 0C08A4AA bra */
L_0C08A4B0: BLKS(0x0C08A4B0u);
	r5 = 0xB4u; UPD(0x0C08A4B2u, 1);  /* 0C08A4B0 mov.w @(disp,pc),Rn */
	IF(0x0C08A4B2u); MACL = r4 * r5;  /* 0C08A4B2 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C08A4B6u, 3);  /* 0C08A4B4 mov.l @(disp,pc),Rn */
	IF(0x0C08A4B6u); r0 = MACL;  /* 0C08A4B6 sts macl,Rn */
	IF(0x0C08A4B8u); r0 = R32(r0 + r3); UPD(0x0C08A4BAu, 2);  /* 0C08A4B8 mov.l @(r0,Rm),Rn */
	IF(0x0C08A4BAu); r0 >>= 16;  /* 0C08A4BA shlr16 Rn */
	IF(0x0C08A4BCu); r0 >>= 8;  /* 0C08A4BC shlr8 Rn */
	IF(0x0C08A4BEu); r0 >>= 2;  /* 0C08A4BE shlr2 Rn */
	r0 &= 0x1u;  /* 0C08A4C0 and #imm,r0 */
	r5 = 0xC19E868u; UPD(0x0C08A4C4u, 5);  /* 0C08A4C2 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C08A4C4 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C08A478u, 4); goto L_0C08A478; }  /* 0C08A4C6 bf */
L_0C08A4C8: BLKS(0x0C08A4C8u);
	r5 = 0xC19E8BEu; UPD(0x0C08A4CAu, 1);  /* 0C08A4C8 mov.l @(disp,pc),Rn */
	{ IF(0x0C08A4CCu); ; /* slot nop */ UPD(0x0C08A478u, 3); goto L_0C08A478; }  /* 0C08A4CA bra */
L_0C08A4D0: BLKS(0x0C08A4D0u);
	r15 = r14;  /* 0C08A4D0 mov Rm,Rn */
	IF(0x0C08A4D2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C08A4D2 rts */
}

void blk_f_0C08A500(sh3_t *c)
{
	LOCALS;
L_0C08A500: BLKS(0x0C08A500u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08A502u, 1);  /* 0C08A500 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08A504u, 1);  /* 0C08A502 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08A506u, 1);  /* 0C08A504 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08A508u, 1);  /* 0C08A506 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08A50Au, 1);  /* 0C08A508 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08A50Cu, 1);  /* 0C08A50A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08A50Eu, 1);  /* 0C08A50C mov.l Rm,@-Rn */
	r13 = 0xC3C43CCu; UPD(0x0C08A510u, 1);  /* 0C08A50E mov.l @(disp,pc),Rn */
	IF(0x0C08A510u); r15 -= 4; W32(r15, PR); UPD(0x0C08A512u, 1);  /* 0C08A510 sts.l pr,@-Rn */
	r3 = R32(r13); UPD(0x0C08A514u, 1);  /* 0C08A512 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08A514 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r4 = v_; } UPD(0x0C08A518u, 2);  /* 0C08A516 mov.w @Rm+,Rn */
	r14 = r15;  /* 0C08A518 mov Rm,Rn */
	r1 = 0xC2B0378u; UPD(0x0C08A51Cu, 2);  /* 0C08A51A mov.l @(disp,pc),Rn */
	r9 = 0xC2460ACu; UPD(0x0C08A51Eu, 1);  /* 0C08A51C mov.l @(disp,pc),Rn */
	r8 = 0xC069510u; UPD(0x0C08A520u, 1);  /* 0C08A51E mov.l @(disp,pc),Rn */
	W16(r1, r4); UPD(0x0C08A522u, 1);  /* 0C08A520 mov.w Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C08A524u, 1);  /* 0C08A522 mov.w @Rm,Rn */
	W32(r13, r3); UPD(0x0C08A526u, 1);  /* 0C08A524 mov.l Rm,@Rn */
	r5 = 0x8000u; UPD(0x0C08A528u, 1);  /* 0C08A526 mov.l @(disp,pc),Rn */
	IF(0x0C08A528u); { u32 t_ = r8; PR = 0x0C08A52Cu; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C08A52Cu); }  /* 0C08A528 jsr @Rn */
L_0C08A52C: BLKS(0x0C08A52Cu);
	T = (r0 & r0) == 0;  /* 0C08A52C tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08A550u, 4); goto L_0C08A550; } UPD(0x0C08A532u, 1); goto L_0C08A532; }  /* 0C08A52E bf/s */
L_0C08A532: BLKS(0x0C08A532u);
	r14 += 0x8u;  /* 0C08A532 add #imm,Rn */
	r15 = r14;  /* 0C08A534 mov Rm,Rn */
	IF(0x0C08A536u); PR = R32(r15); r15 += 4; UPD(0x0C08A538u, 3);  /* 0C08A536 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A53Au, 1);  /* 0C08A538 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08A53Cu, 1);  /* 0C08A53A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08A53Eu, 1);  /* 0C08A53C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08A540u, 1);  /* 0C08A53E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A542u, 1);  /* 0C08A540 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A544u, 1);  /* 0C08A542 mov.l @Rm+,Rn */
	IF(0x0C08A544u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08A544 rts */
L_0C08A550: BLKS(0x0C08A550u);
	r8 = 0xC071740u; UPD(0x0C08A552u, 1);  /* 0C08A550 mov.l @(disp,pc),Rn */
	IF(0x0C08A552u); { u32 t_ = r8; PR = 0x0C08A556u; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08A556u); }  /* 0C08A552 jsr @Rn */
L_0C08A556: BLKS(0x0C08A556u);
	T = (r0 & r0) == 0;  /* 0C08A556 tst Rm,Rn */
	if (!T) { UPD(0x0C08A570u, 4); goto L_0C08A570; }  /* 0C08A558 bf */
L_0C08A55A: BLKS(0x0C08A55Au);
	r2 = R32(r13); UPD(0x0C08A55Cu, 1);  /* 0C08A55A mov.l @Rm,Rn */
	r2 += 0x2u;  /* 0C08A55C add #imm,Rn */
	W32(r13, r2); UPD(0x0C08A560u, 2);  /* 0C08A55E mov.l Rm,@Rn */
L_0C08A560: BLKS(0x0C08A560u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C08A532u, 3); goto L_0C08A532; }  /* 0C08A560 bra */
L_0C08A570: BLKS(0x0C08A570u);
	r12 = 0xC28EDFCu; UPD(0x0C08A572u, 1);  /* 0C08A570 mov.l @(disp,pc),Rn */
	r2 = 0x3u;  /* 0C08A572 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r11 = v_; } UPD(0x0C08A576u, 2);  /* 0C08A574 mov.w @Rm+,Rn */
	r8 = 0xB4u; UPD(0x0C08A578u, 1);  /* 0C08A576 mov.w @(disp,pc),Rn */
	IF(0x0C08A578u); MACL = r11 * r8;  /* 0C08A578 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08A57Cu, 3);  /* 0C08A57A mov.l @(disp,pc),Rn */
	r5 = 0xC2B0378u; UPD(0x0C08A57Eu, 1);  /* 0C08A57C mov.l @(disp,pc),Rn */
	IF(0x0C08A57Eu); r8 = MACL;  /* 0C08A57E sts macl,Rn */
	r8 += r0;  /* 0C08A580 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r5); UPD(0x0C08A584u, 3);  /* 0C08A582 mov.w @Rm,Rn */
	r4 = 0xC2B1811u; UPD(0x0C08A586u, 1);  /* 0C08A584 mov.l @(disp,pc),Rn */
	r0 &= 0x3u;  /* 0C08A586 and #imm,r0 */
	r10 = (u32)(s32)(s8)R8(r4); UPD(0x0C08A58Au, 2);  /* 0C08A588 mov.b @Rm,Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r2;  /* 0C08A58A mulu.w Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C08A58Eu, 3);  /* 0C08A58C mov.w @Rm,Rn */
	r4 = 0x0u;  /* 0C08A58E mov #imm,Rn */
	r0 = 0xC0A8A30u; UPD(0x0C08A592u, 2);  /* 0C08A590 mov.l @(disp,pc),Rn */
	IF(0x0C08A592u); r1 = MACL;  /* 0C08A592 sts macl,Rn */
	r3 = 0xC1000010u; UPD(0x0C08A596u, 2);  /* 0C08A594 mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFFFF;  /* 0C08A596 extu.w Rm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C08A59Au, 2);  /* 0C08A598 mov.l Rm,@(disp,Rn) */
	r9 = 0x4Cu;  /* 0C08A59A mov #imm,Rn */
	W32(r8 + 0x8u, r1); UPD(0x0C08A59Eu, 2);  /* 0C08A59C mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C08A59E mov Rm,Rn */
	W32(r8, r3); UPD(0x0C08A5A2u, 2);  /* 0C08A5A0 mov.l Rm,@Rn */
	IF(0x0C08A5A2u); { u32 t_ = r0; PR = 0x0C08A5A6u; W32(r8 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08A5A6u); }  /* 0C08A5A2 jsr @Rn */
L_0C08A5A6: BLKS(0x0C08A5A6u);
	IF(0x0C08A5A6u); MACL = r10 * r9;  /* 0C08A5A6 mul.l Rm,Rn */
	r7 = 0xC286318u; UPD(0x0C08A5AAu, 3);  /* 0C08A5A8 mov.l @(disp,pc),Rn */
	r2 = 0xC3C43C6u; UPD(0x0C08A5ACu, 1);  /* 0C08A5AA mov.l @(disp,pc),Rn */
	IF(0x0C08A5ACu); r9 = MACL;  /* 0C08A5AC sts macl,Rn */
	r3 = 0xC237C08u; UPD(0x0C08A5B0u, 2);  /* 0C08A5AE mov.l @(disp,pc),Rn */
	r9 += r7;  /* 0C08A5B0 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C08A5B4u, 2);  /* 0C08A5B2 mov.w @Rm,Rn */
	r6 = R32(r9 + 0x8u); UPD(0x0C08A5B6u, 1);  /* 0C08A5B4 mov.l @(disp,Rm),Rn */
	IF(0x0C08A5B6u); r4 <<= 16;  /* 0C08A5B6 shll16 Rn */
	r5 = (u32)(s32)(s16)R16(r3); UPD(0x0C08A5BAu, 2);  /* 0C08A5B8 mov.w @Rm,Rn */
	r9 += 0x42u;  /* 0C08A5BA add #imm,Rn */
	r0 = 0xC0A9AE0u; UPD(0x0C08A5BEu, 2);  /* 0C08A5BC mov.l @(disp,pc),Rn */
	IF(0x0C08A5BEu); r5 <<= 16;  /* 0C08A5BE shll16 Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C08A5C2u, 2);  /* 0C08A5C0 mov.l Rm,@(disp,Rn) */
	r5 -= r6;  /* 0C08A5C2 sub Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C08A5C6u, 2);  /* 0C08A5C4 mov.l Rm,@(disp,Rn) */
	IF(0x0C08A5C6u); { u32 t_ = r0; PR = 0x0C08A5CAu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08A5CAu); }  /* 0C08A5C6 jsr @Rn */
L_0C08A5CA: BLKS(0x0C08A5CAu);
	r0 = 0xB0u; UPD(0x0C08A5CCu, 1);  /* 0C08A5CA mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C08A5CC mov Rm,Rn */
	IF(0x0C08A5CEu); W8(r0 + r8, r10); UPD(0x0C08A5D0u, 2);  /* 0C08A5CE mov.b Rm,@(r0,Rn) */
	r10 = 0xA8u; UPD(0x0C08A5D2u, 1);  /* 0C08A5D0 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFDu;  /* 0C08A5D2 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08A5D6u, 2);  /* 0C08A5D4 mov.b @Rm,Rn */
	r10 += r8;  /* 0C08A5D6 add Rm,Rn */
	r3 += 0x2u;  /* 0C08A5D8 add #imm,Rn */
	r10 += 0x1u;  /* 0C08A5DA add #imm,Rn */
	IF(0x0C08A5DCu); W8(r0 + r8, r3); UPD(0x0C08A5DEu, 4);  /* 0C08A5DC mov.b Rm,@(r0,Rn) */
	r9 += 0xFFFFFFBEu;  /* 0C08A5DE add #imm,Rn */
	W8(r10, r3); UPD(0x0C08A5E2u, 2);  /* 0C08A5E0 mov.b Rm,@Rn */
	r8 += 0x50u;  /* 0C08A5E2 add #imm,Rn */
	r7 = R32(r9 + 0x38u); UPD(0x0C08A5E6u, 2);  /* 0C08A5E4 mov.l @(disp,Rm),Rn */
	r9 = R32(r13); UPD(0x0C08A5E8u, 1);  /* 0C08A5E6 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r9); r9 += 2; r0 = v_; } UPD(0x0C08A5EAu, 1);  /* 0C08A5E8 mov.w @Rm+,Rn */
	r6 = 0xC0A9D30u; UPD(0x0C08A5ECu, 1);  /* 0C08A5EA mov.l @(disp,pc),Rn */
	IF(0x0C08A5ECu); r0 <<= 2;  /* 0C08A5EC shll2 Rn */
	IF(0x0C08A5EEu); r5 = R32(r0 + r7); UPD(0x0C08A5F0u, 2);  /* 0C08A5EE mov.l @(r0,Rm),Rn */
	IF(0x0C08A5F0u); { u32 t_ = r6; PR = 0x0C08A5F4u; W32(r13, r9); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C08A5F4u); }  /* 0C08A5F0 jsr @Rn */
L_0C08A5F4: BLKS(0x0C08A5F4u);
	r5 = 0x0u;  /* 0C08A5F4 mov #imm,Rn */
	W32(r8, r5); UPD(0x0C08A5F8u, 2);  /* 0C08A5F6 mov.l Rm,@Rn */
	r13 = 0x0u;  /* 0C08A5F8 mov #imm,Rn */
	r8 += 0xFFFFFFB0u;  /* 0C08A5FA add #imm,Rn */
	W32(r14, r5); UPD(0x0C08A5FEu, 3);  /* 0C08A5FC mov.l Rm,@Rn */
	r11 = r8;  /* 0C08A5FE mov Rm,Rn */
	W32(r14 + 0x4u, r10); UPD(0x0C08A602u, 2);  /* 0C08A600 mov.l Rm,@(disp,Rn) */
	IF(0x0C08A602u); ;  /* 0C08A602 nop */
	UPD(0x0C08A604u, 1);
L_0C08A604: BLKS(0x0C08A604u);
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C08A606u, 1);  /* 0C08A604 mov.w @Rm+,Rn */
	r8 = 0xB4u; UPD(0x0C08A608u, 1);  /* 0C08A606 mov.w @(disp,pc),Rn */
	IF(0x0C08A608u); MACL = r10 * r8;  /* 0C08A608 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C08A60Cu, 3);  /* 0C08A60A mov.l @(disp,pc),Rn */
	IF(0x0C08A60Cu); r8 = MACL;  /* 0C08A60C sts macl,Rn */
	r8 += r9;  /* 0C08A60E add Rm,Rn */
	r9 = 0xC19E91Cu; UPD(0x0C08A612u, 3);  /* 0C08A610 mov.l @(disp,pc),Rn */
	r8 += 0x7Cu;  /* 0C08A612 add #imm,Rn */
	r9 += r13;  /* 0C08A614 add Rm,Rn */
	r9 += 0x4u;  /* 0C08A616 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r9); UPD(0x0C08A61Au, 4);  /* 0C08A618 mov.w @Rm,Rn */
	r13 += 0x14u;  /* 0C08A61A add #imm,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C08A61Eu, 2);  /* 0C08A61C mov.l @(disp,pc),Rn */
	r5 += r5;  /* 0C08A61E add Rm,Rn */
	IF(0x0C08A620u); r4 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C08A622u, 2);  /* 0C08A620 mov.w @(r0,Rm),Rn */
	r9 += 0xFFFFFFFCu;  /* 0C08A622 add #imm,Rn */
	W16(r8, r4); UPD(0x0C08A626u, 2);  /* 0C08A624 mov.w Rm,@Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C08A628u, 1);  /* 0C08A626 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C08A628 add #imm,Rn */
	r6 = R32(r9); UPD(0x0C08A62Cu, 2);  /* 0C08A62A mov.l @Rm,Rn */
	r4 = 0x0u;  /* 0C08A62C mov #imm,Rn */
	r7 = 0x81000000u; UPD(0x0C08A630u, 2);  /* 0C08A62E mov.l @(disp,pc),Rn */
	W16(r8, r3); UPD(0x0C08A632u, 1);  /* 0C08A630 mov.w Rm,@Rn */
	r6 |= r7;  /* 0C08A632 or Rm,Rn */
	r2 = R32(r11 + 0x4u); UPD(0x0C08A636u, 2);  /* 0C08A634 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFF82u;  /* 0C08A636 add #imm,Rn */
	W32(r8, r6); UPD(0x0C08A63Au, 2);  /* 0C08A638 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C08A63Cu, 1);  /* 0C08A63A mov.l Rm,@(disp,Rn) */
	r1 = R32(r9 + 0x8u); UPD(0x0C08A63Eu, 1);  /* 0C08A63C mov.l @(disp,Rm),Rn */
	r5 = R32(r11 + 0x8u); UPD(0x0C08A640u, 1);  /* 0C08A63E mov.l @(disp,Rm),Rn */
	r3 = 0xC0A8A30u; UPD(0x0C08A642u, 1);  /* 0C08A640 mov.l @(disp,pc),Rn */
	r5 += r1;  /* 0C08A642 add Rm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C08A646u, 2);  /* 0C08A644 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r5); UPD(0x0C08A648u, 1);  /* 0C08A646 mov.l Rm,@(disp,Rn) */
	IF(0x0C08A648u); { u32 t_ = r3; PR = 0x0C08A64Cu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08A64Cu); }  /* 0C08A648 jsr @Rn */
L_0C08A64C: BLKS(0x0C08A64Cu);
	r0 = 0xC0A9AE0u; UPD(0x0C08A64Eu, 1);  /* 0C08A64C mov.l @(disp,pc),Rn */
	IF(0x0C08A64Eu); { u32 t_ = r0; PR = 0x0C08A652u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08A652u); }  /* 0C08A64E jsr @Rn */
L_0C08A652: BLKS(0x0C08A652u);
	r7 = R32(r11 + 0x24u); UPD(0x0C08A654u, 1);  /* 0C08A652 mov.l @(disp,Rm),Rn */
	r5 = 0x0u;  /* 0C08A654 mov #imm,Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C08A658u, 2);  /* 0C08A656 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C08A65Au, 1);  /* 0C08A658 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r6); UPD(0x0C08A65Cu, 1);  /* 0C08A65A mov.l Rm,@(disp,Rn) */
	r0 = 0xB0u; UPD(0x0C08A65Eu, 1);  /* 0C08A65C mov.w @(disp,pc),Rn */
	r2 = R32(r9 + 0xCu); UPD(0x0C08A660u, 1);  /* 0C08A65E mov.l @(disp,Rm),Rn */
	IF(0x0C08A660u); r3 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C08A662u, 1);  /* 0C08A660 mov.b @(r0,Rm),Rn */
	r9 += 0x10u;  /* 0C08A662 add #imm,Rn */
	IF(0x0C08A664u); W8(r0 + r8, r3); UPD(0x0C08A666u, 2);  /* 0C08A664 mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C08A668u, 1);  /* 0C08A666 mov.w @(disp,pc),Rn */
	r10 = R32(r14 + 0x4u); UPD(0x0C08A66Au, 1);  /* 0C08A668 mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C08A66A add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C08A66Eu, 2);  /* 0C08A66C mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C08A66E add #imm,Rn */
	W8(r0, r4); UPD(0x0C08A672u, 2);  /* 0C08A670 mov.b Rm,@Rn */
	r10 = 0x1u;  /* 0C08A672 mov #imm,Rn */
	W32(r8 + 0x2Cu, r2); UPD(0x0C08A676u, 2);  /* 0C08A674 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r5); UPD(0x0C08A678u, 1);  /* 0C08A676 mov.l Rm,@(disp,Rn) */
	r7 = 0xACu; UPD(0x0C08A67Au, 1);  /* 0C08A678 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C08A67Cu, 1);  /* 0C08A67A mov.b @Rm,Rn */
	r8 += r7;  /* 0C08A67C add Rm,Rn */
	r8 += 0x3u;  /* 0C08A67E add #imm,Rn */
	r7 += r11;  /* 0C08A680 add Rm,Rn */
	W8(r8, r1); UPD(0x0C08A684u, 4);  /* 0C08A682 mov.b Rm,@Rn */
	r7 += 0x1u;  /* 0C08A684 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C08A688u, 2);  /* 0C08A686 mov.b @Rm,Rn */
	r8 += 0xFFFFFFFEu;  /* 0C08A688 add #imm,Rn */
	W8(r8, r6); UPD(0x0C08A68Cu, 2);  /* 0C08A68A mov.b Rm,@Rn */
	r5 = R32(r14); UPD(0x0C08A68Eu, 1);  /* 0C08A68C mov.l @Rm,Rn */
	r5 += 0x1u;  /* 0C08A68E add #imm,Rn */
	r2 = (u32)(s32)(s16)r5;  /* 0C08A690 exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C08A694u, 3);  /* 0C08A692 mov.l Rm,@Rn */
	r9 = R32(r14); UPD(0x0C08A696u, 1);  /* 0C08A694 mov.l @Rm,Rn */
	T = (s32)r9 > (s32)r10;  /* 0C08A696 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08A604u, 4); goto L_0C08A604; }  /* 0C08A698 bf */
L_0C08A69A: BLKS(0x0C08A69Au);
	{ IF(0x0C08A69Cu); ; /* slot nop */ UPD(0x0C08A560u, 3); goto L_0C08A560; }  /* 0C08A69A bra */
}

void blk_f_0C08A6F0(sh3_t *c)
{
	LOCALS;
L_0C08A6F0: BLKS(0x0C08A6F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08A6F2u, 1);  /* 0C08A6F0 mov.l Rm,@-Rn */
	r3 = 0xBu;  /* 0C08A6F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08A6F6u, 2);  /* 0C08A6F4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08A6F8u, 1);  /* 0C08A6F6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08A6FAu, 1);  /* 0C08A6F8 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C08A6FCu, 1);  /* 0C08A6FA mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C08A6FC exts.w Rm,Rn */
	IF(0x0C08A6FEu); MACL = r11 * r0;  /* 0C08A6FE mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08A702u, 4);  /* 0C08A700 mov.l Rm,@-Rn */
	r2 = 0xC286578u; UPD(0x0C08A704u, 1);  /* 0C08A702 mov.l @(disp,pc),Rn */
	IF(0x0C08A704u); r0 = MACL;  /* 0C08A704 sts macl,Rn */
	IF(0x0C08A706u); r15 -= 4; W32(r15, PR); UPD(0x0C08A708u, 2);  /* 0C08A706 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08A708 add Rm,Rn */
	r1 = R32(r0 + 0x8u); UPD(0x0C08A70Cu, 2);  /* 0C08A70A mov.l @(disp,Rm),Rn */
	T = r1 > r3;  /* 0C08A70C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08A75Au, 4); goto L_0C08A75A; } goto L_0C08A712; }  /* 0C08A70E bt/s */
L_0C08A712: BLKS(0x0C08A712u);
	r8 = R32(r0 + 0x1Cu); UPD(0x0C08A714u, 2);  /* 0C08A712 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r3 = v_; } UPD(0x0C08A716u, 1);  /* 0C08A714 mov.l @Rm+,Rn */
	T = (r3 & r3) == 0;  /* 0C08A716 tst Rm,Rn */
	if (T) { UPD(0x0C08A74Eu, 4); goto L_0C08A74E; }  /* 0C08A718 bt */
L_0C08A71A: BLKS(0x0C08A71Au);
	r9 = r0;  /* 0C08A71A mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C08A71Eu, 2);  /* 0C08A71C mov.w @(disp,pc),Rn */
	r10 += r0;  /* 0C08A71E add Rm,Rn */
	UPD(0x0C08A720u, 1);
L_0C08A720: BLKS(0x0C08A720u);
	r8 += 0x4u;  /* 0C08A720 add #imm,Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C08A724u, 2);  /* 0C08A722 mov.l @Rm+,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08A724 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C08A728u, 2);  /* 0C08A726 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C08A72Au, 1);  /* 0C08A728 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C08A72A add Rm,Rn */
	IF(0x0C08A72Cu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08A72Eu, 2);  /* 0C08A72C mov.b @(r0,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r4 = v_; } UPD(0x0C08A730u, 1);  /* 0C08A72E mov.l @Rm+,Rn */
	r0 = r3 & 0xFF;  /* 0C08A730 extu.b Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C08A734u, 2);  /* 0C08A732 mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C08A736u, 1);  /* 0C08A734 mov.l Rm,@Rn */
	r7 += r4;  /* 0C08A736 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C08A73Au, 2);  /* 0C08A738 mov.b @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C08A73A extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08A73Eu, 2);  /* 0C08A73C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C08A740u, 1);  /* 0C08A73E mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C08A740 mov #imm,Rn */
	IF(0x0C08A742u); { u32 t_ = r0; PR = 0x0C08A746u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08A746u); }  /* 0C08A742 jsr @Rn */
L_0C08A746: BLKS(0x0C08A746u);
	{ u32 v_ = R32(r8); r8 += 4; r4 = v_; } UPD(0x0C08A748u, 1);  /* 0C08A746 mov.l @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C08A748 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08A720u, 4); goto L_0C08A720; } UPD(0x0C08A74Eu, 1); goto L_0C08A74E; }  /* 0C08A74A bf/s */
L_0C08A74E: BLKS(0x0C08A74Eu);
	r9 = 0xB4u; UPD(0x0C08A750u, 1);  /* 0C08A74E mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C08A750 mov #imm,Rn */
	IF(0x0C08A752u); MACL = r11 * r9;  /* 0C08A752 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08A756u, 4);  /* 0C08A754 mov.l @(disp,pc),Rn */
	IF(0x0C08A756u); r0 = MACL;  /* 0C08A756 sts macl,Rn */
	IF(0x0C08A758u); W32(r0 + r6, r8); UPD(0x0C08A75Au, 2);  /* 0C08A758 mov.l Rm,@(r0,Rn) */
L_0C08A75A: BLKS(0x0C08A75Au);
	r15 = r14;  /* 0C08A75A mov Rm,Rn */
	IF(0x0C08A75Cu); PR = R32(r15); r15 += 4; UPD(0x0C08A75Eu, 2);  /* 0C08A75C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A760u, 1);  /* 0C08A75E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08A762u, 1);  /* 0C08A760 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A764u, 1);  /* 0C08A762 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A766u, 1);  /* 0C08A764 mov.l @Rm+,Rn */
	IF(0x0C08A766u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08A766 rts */
}

void blk_f_0C08A780(sh3_t *c)
{
	LOCALS;
	goto L_0C08A780;
L_0C08A6F0: BLKS(0x0C08A6F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08A6F2u, 1);  /* 0C08A6F0 mov.l Rm,@-Rn */
	r3 = 0xBu;  /* 0C08A6F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08A6F6u, 2);  /* 0C08A6F4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08A6F8u, 1);  /* 0C08A6F6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08A6FAu, 1);  /* 0C08A6F8 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C08A6FCu, 1);  /* 0C08A6FA mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C08A6FC exts.w Rm,Rn */
	IF(0x0C08A6FEu); MACL = r11 * r0;  /* 0C08A6FE mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08A702u, 4);  /* 0C08A700 mov.l Rm,@-Rn */
	r2 = 0xC286578u; UPD(0x0C08A704u, 1);  /* 0C08A702 mov.l @(disp,pc),Rn */
	IF(0x0C08A704u); r0 = MACL;  /* 0C08A704 sts macl,Rn */
	IF(0x0C08A706u); r15 -= 4; W32(r15, PR); UPD(0x0C08A708u, 2);  /* 0C08A706 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08A708 add Rm,Rn */
	r1 = R32(r0 + 0x8u); UPD(0x0C08A70Cu, 2);  /* 0C08A70A mov.l @(disp,Rm),Rn */
	T = r1 > r3;  /* 0C08A70C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08A75Au, 4); goto L_0C08A75A; } goto L_0C08A712; }  /* 0C08A70E bt/s */
L_0C08A712: BLKS(0x0C08A712u);
	r8 = R32(r0 + 0x1Cu); UPD(0x0C08A714u, 2);  /* 0C08A712 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r3 = v_; } UPD(0x0C08A716u, 1);  /* 0C08A714 mov.l @Rm+,Rn */
	T = (r3 & r3) == 0;  /* 0C08A716 tst Rm,Rn */
	if (T) { UPD(0x0C08A74Eu, 4); goto L_0C08A74E; }  /* 0C08A718 bt */
L_0C08A71A: BLKS(0x0C08A71Au);
	r9 = r0;  /* 0C08A71A mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C08A71Eu, 2);  /* 0C08A71C mov.w @(disp,pc),Rn */
	r10 += r0;  /* 0C08A71E add Rm,Rn */
	UPD(0x0C08A720u, 1);
L_0C08A720: BLKS(0x0C08A720u);
	r8 += 0x4u;  /* 0C08A720 add #imm,Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C08A724u, 2);  /* 0C08A722 mov.l @Rm+,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08A724 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C08A728u, 2);  /* 0C08A726 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C08A72Au, 1);  /* 0C08A728 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C08A72A add Rm,Rn */
	IF(0x0C08A72Cu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08A72Eu, 2);  /* 0C08A72C mov.b @(r0,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r4 = v_; } UPD(0x0C08A730u, 1);  /* 0C08A72E mov.l @Rm+,Rn */
	r0 = r3 & 0xFF;  /* 0C08A730 extu.b Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C08A734u, 2);  /* 0C08A732 mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C08A736u, 1);  /* 0C08A734 mov.l Rm,@Rn */
	r7 += r4;  /* 0C08A736 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C08A73Au, 2);  /* 0C08A738 mov.b @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C08A73A extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08A73Eu, 2);  /* 0C08A73C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C08A740u, 1);  /* 0C08A73E mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C08A740 mov #imm,Rn */
	IF(0x0C08A742u); { u32 t_ = r0; PR = 0x0C08A746u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08A746u); }  /* 0C08A742 jsr @Rn */
L_0C08A746: BLKS(0x0C08A746u);
	{ u32 v_ = R32(r8); r8 += 4; r4 = v_; } UPD(0x0C08A748u, 1);  /* 0C08A746 mov.l @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C08A748 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08A720u, 4); goto L_0C08A720; } UPD(0x0C08A74Eu, 1); goto L_0C08A74E; }  /* 0C08A74A bf/s */
L_0C08A74E: BLKS(0x0C08A74Eu);
	r9 = 0xB4u; UPD(0x0C08A750u, 1);  /* 0C08A74E mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C08A750 mov #imm,Rn */
	IF(0x0C08A752u); MACL = r11 * r9;  /* 0C08A752 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08A756u, 4);  /* 0C08A754 mov.l @(disp,pc),Rn */
	IF(0x0C08A756u); r0 = MACL;  /* 0C08A756 sts macl,Rn */
	IF(0x0C08A758u); W32(r0 + r6, r8); UPD(0x0C08A75Au, 2);  /* 0C08A758 mov.l Rm,@(r0,Rn) */
L_0C08A75A: BLKS(0x0C08A75Au);
	r15 = r14;  /* 0C08A75A mov Rm,Rn */
	IF(0x0C08A75Cu); PR = R32(r15); r15 += 4; UPD(0x0C08A75Eu, 2);  /* 0C08A75C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A760u, 1);  /* 0C08A75E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08A762u, 1);  /* 0C08A760 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A764u, 1);  /* 0C08A762 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A766u, 1);  /* 0C08A764 mov.l @Rm+,Rn */
	IF(0x0C08A766u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08A766 rts */
L_0C08A780: BLKS(0x0C08A780u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08A782u, 1);  /* 0C08A780 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08A784u, 1);  /* 0C08A782 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C08A784 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08A788u, 2);  /* 0C08A786 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C08A78Au, 1);  /* 0C08A788 mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08A78Cu, 1);  /* 0C08A78A mov.l Rm,@-Rn */
	IF(0x0C08A78Cu); MACL = r8 * r3;  /* 0C08A78C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08A790u, 3);  /* 0C08A78E mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08A792u, 1);  /* 0C08A790 mov.l @(disp,pc),Rn */
	IF(0x0C08A792u); r2 = MACL;  /* 0C08A792 sts macl,Rn */
	IF(0x0C08A794u); r15 -= 4; W32(r15, PR); UPD(0x0C08A796u, 2);  /* 0C08A794 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08A796 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08A79Au, 2);  /* 0C08A798 mov.l @(disp,Rm),Rn */
	r0 = 0xBu;  /* 0C08A79A mov #imm,Rn */
	T = r2 > r0;  /* 0C08A79C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08A7E4u, 5); goto L_0C08A7E4; } goto L_0C08A7A2; }  /* 0C08A79E bt/s */
L_0C08A7A2: BLKS(0x0C08A7A2u);
	r0 = 0xC08A7B4u;  /* 0C08A7A2 mova @(disp,pc),r0 */
	IF(0x0C08A7A4u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08A7A6u, 3);  /* 0C08A7A4 mov.b @(r0,Rm),Rn */
	r4 = r4 & 0xFF;  /* 0C08A7A6 extu.b Rm,Rn */
	IF(0x0C08A7A8u); { u32 tv_ = (r4 + 0x0C08A7ACu); u32 t_ = PHYS(tv_); IF(0x0C08A7AAu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C08A7C0u: goto L_0C08A7C0; case 0x0C08A880u: goto L_0C08A880; default: JUMPD(tv_); } }  /* 0C08A7A8 braf Rn */
L_0C08A7C0: BLKS(0x0C08A7C0u);
	r6 = 0xB4u; UPD(0x0C08A7C2u, 1);  /* 0C08A7C0 mov.w @(disp,pc),Rn */
	IF(0x0C08A7C2u); MACL = r8 * r6;  /* 0C08A7C2 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C08A7C6u, 3);  /* 0C08A7C4 mov.l @(disp,pc),Rn */
	IF(0x0C08A7C6u); r9 = MACL;  /* 0C08A7C6 sts macl,Rn */
	r10 = 0x9Fu; UPD(0x0C08A7CAu, 2);  /* 0C08A7C8 mov.w @(disp,pc),Rn */
	r9 += r5;  /* 0C08A7CA add Rm,Rn */
	r10 += r9;  /* 0C08A7CC add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C08A7D0u, 3);  /* 0C08A7CE mov.b @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C08A7D0 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C08A7D2 cmp/eq #imm,r0 */
	{ u32 c_ = T; r11 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08A840u, 5); goto L_0C08A840; } goto L_0C08A7D8; }  /* 0C08A7D4 bt/s */
L_0C08A7D8: BLKS(0x0C08A7D8u);
	T = (s32)r0 > (s32)r11;  /* 0C08A7D8 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C08A820u, 5); goto L_0C08A820; } goto L_0C08A7DE; }  /* 0C08A7DA bt/s */
L_0C08A7DE: BLKS(0x0C08A7DEu);
	T = (r0 & r0) == 0;  /* 0C08A7DE tst Rm,Rn */
	if (T) { UPD(0x0C08A800u, 5); goto L_0C08A800; }  /* 0C08A7E0 bt */
L_0C08A7E2: BLKS(0x0C08A7E2u);
	IF(0x0C08A7E2u); ;  /* 0C08A7E2 nop */
	UPD(0x0C08A7E4u, 1);
L_0C08A7E4: BLKS(0x0C08A7E4u);
	r15 = r14;  /* 0C08A7E4 mov Rm,Rn */
	IF(0x0C08A7E6u); PR = R32(r15); r15 += 4; UPD(0x0C08A7E8u, 2);  /* 0C08A7E6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A7EAu, 1);  /* 0C08A7E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08A7ECu, 1);  /* 0C08A7EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A7EEu, 1);  /* 0C08A7EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A7F0u, 1);  /* 0C08A7EE mov.l @Rm+,Rn */
	IF(0x0C08A7F0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08A7F0 rts */
L_0C08A800: BLKS(0x0C08A800u);
	r4 = r8;  /* 0C08A800 mov Rm,Rn */
	r8 = 0xC0A9CB0u; UPD(0x0C08A804u, 2);  /* 0C08A802 mov.l @(disp,pc),Rn */
	IF(0x0C08A804u); { u32 t_ = r8; PR = 0x0C08A808u; IF(0x0C08A806u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C08A808u); }  /* 0C08A804 jsr @Rn */
L_0C08A808: BLKS(0x0C08A808u);
	r1 = R32(r9); UPD(0x0C08A80Au, 1);  /* 0C08A808 mov.l @Rm,Rn */
	r7 = 0x100u; UPD(0x0C08A80Cu, 1);  /* 0C08A80A mov.w @(disp,pc),Rn */
	T = (r1 & r7) == 0;  /* 0C08A80C tst Rm,Rn */
	if (T) { UPD(0x0C08A7E4u, 4); goto L_0C08A7E4; }  /* 0C08A80E bt */
L_0C08A810: BLKS(0x0C08A810u);
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C08A812u, 1);  /* 0C08A810 mov.b @Rm,Rn */
	r0 = 0x88u; UPD(0x0C08A814u, 1);  /* 0C08A812 mov.w @(disp,pc),Rn */
	IF(0x0C08A814u); W16(r0 + r9, r11); UPD(0x0C08A816u, 1);  /* 0C08A814 mov.w Rm,@(r0,Rn) */
	r1 += 0x1u;  /* 0C08A816 add #imm,Rn */
	UPD(0x0C08A818u, 1);
L_0C08A818: BLKS(0x0C08A818u);
	{ W8(r10, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C08A7E4u, 3); goto L_0C08A7E4; }  /* 0C08A818 bra */
L_0C08A820: BLKS(0x0C08A820u);
	if (!T) { UPD(0x0C08A7E4u, 3); goto L_0C08A7E4; }  /* 0C08A820 bf */
L_0C08A822: BLKS(0x0C08A822u);
	r4 = r8;  /* 0C08A822 mov Rm,Rn */
	r8 = 0xC0A9CB0u; UPD(0x0C08A826u, 2);  /* 0C08A824 mov.l @(disp,pc),Rn */
	IF(0x0C08A826u); { u32 t_ = r8; PR = 0x0C08A82Au; IF(0x0C08A828u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C08A82Au); }  /* 0C08A826 jsr @Rn */
L_0C08A82A: BLKS(0x0C08A82Au);
	r7 = R32(r9); UPD(0x0C08A82Cu, 1);  /* 0C08A82A mov.l @Rm,Rn */
	r6 = 0x100u; UPD(0x0C08A82Eu, 1);  /* 0C08A82C mov.w @(disp,pc),Rn */
	T = (r7 & r6) == 0;  /* 0C08A82E tst Rm,Rn */
	if (!T) { UPD(0x0C08A7E4u, 4); goto L_0C08A7E4; }  /* 0C08A830 bf */
L_0C08A832: BLKS(0x0C08A832u);
	r11 = 0xFFFFFFFFu;  /* 0C08A832 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C08A836u, 2);  /* 0C08A834 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C08A838u, 1);  /* 0C08A836 mov.b @Rm,Rn */
	IF(0x0C08A838u); W16(r0 + r9, r11); UPD(0x0C08A83Au, 1);  /* 0C08A838 mov.w Rm,@(r0,Rn) */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C08A818u, 3); goto L_0C08A818; }  /* 0C08A83A bra */
L_0C08A840: BLKS(0x0C08A840u);
	r6 = 0x88u; UPD(0x0C08A842u, 1);  /* 0C08A840 mov.w @(disp,pc),Rn */
	r4 = 0xFu;  /* 0C08A842 mov #imm,Rn */
	r6 += r9;  /* 0C08A844 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r6); UPD(0x0C08A848u, 3);  /* 0C08A846 mov.w @Rm,Rn */
	r11 = r9;  /* 0C08A848 mov Rm,Rn */
	r2 = R32(r9 + 0x24u); UPD(0x0C08A84Cu, 2);  /* 0C08A84A mov.l @(disp,Rm),Rn */
	IF(0x0C08A84Cu); ARG0(0x434Du); { s32 s_ = (s32)r4; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C08A84C shld Rm,Rn */
	r2 += r3;  /* 0C08A84E add Rm,Rn */
	W32(r9 + 0x24u, r2); UPD(0x0C08A852u, 3);  /* 0C08A850 mov.l Rm,@(disp,Rn) */
	r11 += 0x50u;  /* 0C08A852 add #imm,Rn */
	r2 = 0x99u; UPD(0x0C08A856u, 2);  /* 0C08A854 mov.w @(disp,pc),Rn */
	r0 = R32(r11); UPD(0x0C08A858u, 1);  /* 0C08A856 mov.l @Rm,Rn */
	r2 += r9;  /* 0C08A858 add Rm,Rn */
	r0 += r3;  /* 0C08A85A add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C08A85Eu, 3);  /* 0C08A85C mov.b @Rm,Rn */
	W32(r11, r0); UPD(0x0C08A860u, 1);  /* 0C08A85E mov.l Rm,@Rn */
	r9 += 0x1u;  /* 0C08A860 add #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C08A862 extu.b Rm,Rn */
	T = r0 == 0x2Au;  /* 0C08A864 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08A7E4u, 6); goto L_0C08A7E4; } UPD(0x0C08A86Au, 1); goto L_0C08A86A; }  /* 0C08A866 bf/s */
L_0C08A86A: BLKS(0x0C08A86Au);
	r6 += 0x1u;  /* 0C08A86A add #imm,Rn */
	r5 = 0x0u;  /* 0C08A86C mov #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r6); UPD(0x0C08A870u, 3);  /* 0C08A86E mov.b @Rm,Rn */
	W8(r2, r5); UPD(0x0C08A872u, 1);  /* 0C08A870 mov.b Rm,@Rn */
	{ r1 += r7; /* slot add Rm,Rn */ UPD(0x0C08A818u, 3); goto L_0C08A818; }  /* 0C08A872 bra */
L_0C08A880: BLKS(0x0C08A880u);
	r10 = 0xC0A8B50u; UPD(0x0C08A882u, 1);  /* 0C08A880 mov.l @(disp,pc),Rn */
	IF(0x0C08A882u); { u32 t_ = r10; PR = 0x0C08A886u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C08A886u); }  /* 0C08A882 jsr @Rn */
L_0C08A886: BLKS(0x0C08A886u);
	IF(0x0C08A886u); T = (s32)r0 >= 0;  /* 0C08A886 cmp/pz Rn */
	if (!T) { UPD(0x0C08A8C0u, 4); goto L_0C08A8C0; }  /* 0C08A888 bf */
L_0C08A88A: BLKS(0x0C08A88Au);
	r2 = 0xB4u; UPD(0x0C08A88Cu, 1);  /* 0C08A88A mov.w @(disp,pc),Rn */
	IF(0x0C08A88Cu); MACL = r8 * r2;  /* 0C08A88C mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C08A890u, 3);  /* 0C08A88E mov.l @(disp,pc),Rn */
	IF(0x0C08A890u); r9 = MACL;  /* 0C08A890 sts macl,Rn */
	IF(0x0C08A892u); MACL = r0 * r2;  /* 0C08A892 mul.l Rm,Rn */
	r9 += r11;  /* 0C08A894 add Rm,Rn */
	r9 += 0x50u;  /* 0C08A896 add #imm,Rn */
	IF(0x0C08A898u); r5 = MACL;  /* 0C08A898 sts macl,Rn */
	r5 += r11;  /* 0C08A89A add Rm,Rn */
	r5 += 0x50u;  /* 0C08A89C add #imm,Rn */
	r7 = R32(r5); UPD(0x0C08A8A0u, 9);  /* 0C08A89E mov.l @Rm,Rn */
	W32(r9, r7); UPD(0x0C08A8A2u, 1);  /* 0C08A8A0 mov.l Rm,@Rn */
	r5 += 0xFFFFFFB0u;  /* 0C08A8A2 add #imm,Rn */
	r9 += 0xFFFFFFB0u;  /* 0C08A8A4 add #imm,Rn */
	r3 = R32(r5 + 0x24u); UPD(0x0C08A8A8u, 3);  /* 0C08A8A6 mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C08A8AAu, 1);  /* 0C08A8A8 mov.l @(disp,Rm),Rn */
	r4 = R32(r5 + 0x28u); UPD(0x0C08A8ACu, 1);  /* 0C08A8AA mov.l @(disp,Rm),Rn */
	r3 += r6;  /* 0C08A8AC add Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C08A8B0u, 2);  /* 0C08A8AE mov.l @(disp,Rm),Rn */
	r3 += r7;  /* 0C08A8B0 add Rm,Rn */
	r4 += r1;  /* 0C08A8B2 add Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C08A8B6u, 3);  /* 0C08A8B4 mov.l Rm,@(disp,Rn) */
	{ W32(r9 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08A7E4u, 3); goto L_0C08A7E4; }  /* 0C08A8B6 bra */
L_0C08A8C0: BLKS(0x0C08A8C0u);
	r0 = 0xC08A6F0u; UPD(0x0C08A8C2u, 1);  /* 0C08A8C0 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C08A8C2 mov Rm,Rn */
	r15 = r14;  /* 0C08A8C4 mov Rm,Rn */
	IF(0x0C08A8C6u); PR = R32(r15); r15 += 4; UPD(0x0C08A8C8u, 3);  /* 0C08A8C6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A8CAu, 1);  /* 0C08A8C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08A8CCu, 1);  /* 0C08A8CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A8CEu, 1);  /* 0C08A8CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A8D0u, 1);  /* 0C08A8CE mov.l @Rm+,Rn */
	IF(0x0C08A8D0u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C08A6F0u: goto L_0C08A6F0; default: JUMPD(tv_); } }  /* 0C08A8D0 jmp @Rn */
}

void blk_f_0C08A8F0(sh3_t *c)
{
	LOCALS;
L_0C08A8F0: BLKS(0x0C08A8F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08A8F2u, 1);  /* 0C08A8F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08A8F4u, 1);  /* 0C08A8F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08A8F6u, 1);  /* 0C08A8F4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08A8F8u, 1);  /* 0C08A8F6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08A8FAu, 1);  /* 0C08A8F8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08A8FCu, 1);  /* 0C08A8FA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08A8FEu, 1);  /* 0C08A8FC mov.l Rm,@-Rn */
	r9 = 0xC2460ACu; UPD(0x0C08A900u, 1);  /* 0C08A8FE mov.l @(disp,pc),Rn */
	IF(0x0C08A900u); r15 -= 4; W32(r15, PR); UPD(0x0C08A902u, 1);  /* 0C08A900 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C08A904u, 1);  /* 0C08A902 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C08A904 mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C08A908u, 2);  /* 0C08A906 mov.w @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C08A90Au, 1);  /* 0C08A908 mov.l @(disp,pc),Rn */
	IF(0x0C08A90Au); { u32 t_ = r8; PR = 0x0C08A90Eu; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C08A90Eu); }  /* 0C08A90A jsr @Rn */
L_0C08A90E: BLKS(0x0C08A90Eu);
	T = (r0 & r0) == 0;  /* 0C08A90E tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08A930u, 4); goto L_0C08A930; } UPD(0x0C08A914u, 1); goto L_0C08A914; }  /* 0C08A910 bf/s */
L_0C08A914: BLKS(0x0C08A914u);
	r15 = r14;  /* 0C08A914 mov Rm,Rn */
	IF(0x0C08A916u); PR = R32(r15); r15 += 4; UPD(0x0C08A918u, 2);  /* 0C08A916 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A91Au, 1);  /* 0C08A918 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08A91Cu, 1);  /* 0C08A91A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08A91Eu, 1);  /* 0C08A91C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08A920u, 1);  /* 0C08A91E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A922u, 1);  /* 0C08A920 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A924u, 1);  /* 0C08A922 mov.l @Rm+,Rn */
	IF(0x0C08A924u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08A924 rts */
L_0C08A930: BLKS(0x0C08A930u);
	r8 = 0xC071740u; UPD(0x0C08A932u, 1);  /* 0C08A930 mov.l @(disp,pc),Rn */
	IF(0x0C08A932u); { u32 t_ = r8; PR = 0x0C08A936u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08A936u); }  /* 0C08A932 jsr @Rn */
L_0C08A936: BLKS(0x0C08A936u);
	T = (r0 & r0) == 0;  /* 0C08A936 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08A914u, 4); goto L_0C08A914; } goto L_0C08A93C; }  /* 0C08A938 bt/s */
L_0C08A93C: BLKS(0x0C08A93Cu);
	r11 = 0xC28EDFCu; UPD(0x0C08A93Eu, 2);  /* 0C08A93C mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C08A93E mov #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r11); UPD(0x0C08A942u, 2);  /* 0C08A940 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C08A944u, 1);  /* 0C08A942 mov.w @(disp,pc),Rn */
	IF(0x0C08A944u); MACL = r13 * r8;  /* 0C08A944 mul.l Rm,Rn */
	r6 = 0xC2B1811u; UPD(0x0C08A948u, 3);  /* 0C08A946 mov.l @(disp,pc),Rn */
	r5 = 0xC286578u; UPD(0x0C08A94Au, 1);  /* 0C08A948 mov.l @(disp,pc),Rn */
	IF(0x0C08A94Au); r8 = MACL;  /* 0C08A94A sts macl,Rn */
	r11 = (u32)(s32)(s8)R8(r6); UPD(0x0C08A94Eu, 2);  /* 0C08A94C mov.b @Rm,Rn */
	r8 += r5;  /* 0C08A94E add Rm,Rn */
	r4 = 0xC1008110u; UPD(0x0C08A952u, 2);  /* 0C08A950 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C08A954u, 1);  /* 0C08A952 mov.w @Rm,Rn */
	r0 = 0xC0A8A30u; UPD(0x0C08A956u, 1);  /* 0C08A954 mov.l @(disp,pc),Rn */
	r12 = r3 & 0xFFFF;  /* 0C08A956 extu.w Rm,Rn */
	W32(r8, r4); UPD(0x0C08A95Au, 2);  /* 0C08A958 mov.l Rm,@Rn */
	r9 = 0x4Cu;  /* 0C08A95A mov #imm,Rn */
	W32(r8 + 0xCu, r2); UPD(0x0C08A95Eu, 2);  /* 0C08A95C mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C08A95E mov Rm,Rn */
	W32(r8 + 0x8u, r2); UPD(0x0C08A962u, 2);  /* 0C08A960 mov.l Rm,@(disp,Rn) */
	IF(0x0C08A962u); { u32 t_ = r0; PR = 0x0C08A966u; W32(r8 + 0x4u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08A966u); }  /* 0C08A962 jsr @Rn */
L_0C08A966: BLKS(0x0C08A966u);
	IF(0x0C08A966u); MACL = r11 * r9;  /* 0C08A966 mul.l Rm,Rn */
	r1 = 0xC286318u; UPD(0x0C08A96Au, 3);  /* 0C08A968 mov.l @(disp,pc),Rn */
	r5 = 0xC3C43C6u; UPD(0x0C08A96Cu, 1);  /* 0C08A96A mov.l @(disp,pc),Rn */
	IF(0x0C08A96Cu); r12 = MACL;  /* 0C08A96C sts macl,Rn */
	r10 = 0xC237C08u; UPD(0x0C08A970u, 2);  /* 0C08A96E mov.l @(disp,pc),Rn */
	r12 += r1;  /* 0C08A970 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C08A974u, 2);  /* 0C08A972 mov.w @Rm,Rn */
	r7 = R32(r12 + 0x8u); UPD(0x0C08A976u, 1);  /* 0C08A974 mov.l @(disp,Rm),Rn */
	IF(0x0C08A976u); r4 <<= 16;  /* 0C08A976 shll16 Rn */
	r6 = (u32)(s32)(s16)R16(r10); UPD(0x0C08A97Au, 2);  /* 0C08A978 mov.w @Rm,Rn */
	r12 += 0x42u;  /* 0C08A97A add #imm,Rn */
	r3 = 0xC0A9AE0u; UPD(0x0C08A97Eu, 2);  /* 0C08A97C mov.l @(disp,pc),Rn */
	IF(0x0C08A97Eu); r6 <<= 16;  /* 0C08A97E shll16 Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C08A982u, 2);  /* 0C08A980 mov.l Rm,@(disp,Rn) */
	r6 -= r7;  /* 0C08A982 sub Rm,Rn */
	r4 = r13;  /* 0C08A984 mov Rm,Rn */
	IF(0x0C08A986u); { u32 t_ = r3; PR = 0x0C08A98Au; W32(r8 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08A98Au); }  /* 0C08A986 jsr @Rn */
L_0C08A98A: BLKS(0x0C08A98Au);
	r0 = 0xB0u; UPD(0x0C08A98Cu, 1);  /* 0C08A98A mov.w @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C08A98C mov #imm,Rn */
	IF(0x0C08A98Eu); W8(r0 + r8, r11); UPD(0x0C08A990u, 2);  /* 0C08A98E mov.b Rm,@(r0,Rn) */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C08A992u, 1);  /* 0C08A990 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C08A992 add #imm,Rn */
	IF(0x0C08A994u); W8(r0 + r8, r2); UPD(0x0C08A996u, 2);  /* 0C08A994 mov.b Rm,@(r0,Rn) */
	r12 = r8;  /* 0C08A996 mov Rm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C08A998 add #imm,Rn */
	IF(0x0C08A99Au); W8(r0 + r8, r2); UPD(0x0C08A99Cu, 3);  /* 0C08A99A mov.b Rm,@(r0,Rn) */
L_0C08A99C: BLKS(0x0C08A99Cu);
	r6 = 0xC28EDFCu; UPD(0x0C08A99Eu, 1);  /* 0C08A99C mov.l @(disp,pc),Rn */
	r7 = r13;  /* 0C08A99E mov Rm,Rn */
	r7 += r7;  /* 0C08A9A0 add Rm,Rn */
	r7 += r6;  /* 0C08A9A2 add Rm,Rn */
	r7 += 0x2u;  /* 0C08A9A4 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r7); UPD(0x0C08A9A8u, 5);  /* 0C08A9A6 mov.w @Rm,Rn */
	r2 = 0x0u;  /* 0C08A9A8 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C08A9ACu, 2);  /* 0C08A9AA mov.w @(disp,pc),Rn */
	IF(0x0C08A9ACu); MACL = r9 * r8;  /* 0C08A9AC mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C08A9B0u, 3);  /* 0C08A9AE mov.l @(disp,pc),Rn */
	IF(0x0C08A9B0u); r8 = MACL;  /* 0C08A9B0 sts macl,Rn */
	r8 += r1;  /* 0C08A9B2 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C08A9B6u, 3);  /* 0C08A9B4 mov.w @Rm,Rn */
	r4 = r8;  /* 0C08A9B6 mov Rm,Rn */
	r8 += 0x7Eu;  /* 0C08A9B8 add #imm,Rn */
	W16(r8, r5); UPD(0x0C08A9BCu, 3);  /* 0C08A9BA mov.w Rm,@Rn */
	r4 += 0x7Cu;  /* 0C08A9BC add #imm,Rn */
	r10 = R32(r12 + 0x4u); UPD(0x0C08A9C0u, 2);  /* 0C08A9BE mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFF82u;  /* 0C08A9C0 add #imm,Rn */
	W32(r8 + 0x4u, r10); UPD(0x0C08A9C4u, 2);  /* 0C08A9C2 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A8A30u; UPD(0x0C08A9C6u, 1);  /* 0C08A9C4 mov.l @(disp,pc),Rn */
	r10 = r13;  /* 0C08A9C6 mov Rm,Rn */
	W16(r4, r5); UPD(0x0C08A9CAu, 2);  /* 0C08A9C8 mov.w Rm,@Rn */
	r10 += 0x1u;  /* 0C08A9CA add #imm,Rn */
	r3 = 0xC0000010u; UPD(0x0C08A9CEu, 2);  /* 0C08A9CC mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C08A9CE mov Rm,Rn */
	W32(r8, r3); UPD(0x0C08A9D2u, 2);  /* 0C08A9D0 mov.l Rm,@Rn */
	IF(0x0C08A9D2u); r13 <<= 2;  /* 0C08A9D2 shll2 Rn */
	W32(r8 + 0xCu, r2); UPD(0x0C08A9D6u, 2);  /* 0C08A9D4 mov.l Rm,@(disp,Rn) */
	IF(0x0C08A9D6u); { u32 t_ = r0; PR = 0x0C08A9DAu; W32(r8 + 0x8u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08A9DAu); }  /* 0C08A9D6 jsr @Rn */
L_0C08A9DA: BLKS(0x0C08A9DAu);
	r4 = r9;  /* 0C08A9DA mov Rm,Rn */
	r9 = 0xC0A9AE0u; UPD(0x0C08A9DEu, 2);  /* 0C08A9DC mov.l @(disp,pc),Rn */
	IF(0x0C08A9DEu); { u32 t_ = r9; PR = 0x0C08A9E2u; IF(0x0C08A9E0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08A9E2u); }  /* 0C08A9DE jsr @Rn */
L_0C08A9E2: BLKS(0x0C08A9E2u);
	r7 = R32(r12 + 0x24u); UPD(0x0C08A9E4u, 1);  /* 0C08A9E2 mov.l @(disp,Rm),Rn */
	r0 = r13;  /* 0C08A9E4 mov Rm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C08A9E8u, 2);  /* 0C08A9E6 mov.l @(disp,Rm),Rn */
	r2 = 0x4Cu;  /* 0C08A9E8 mov #imm,Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C08A9ECu, 2);  /* 0C08A9EA mov.l Rm,@(disp,Rn) */
	IF(0x0C08A9ECu); MACL = r11 * r2;  /* 0C08A9EC mul.l Rm,Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C08A9F0u, 3);  /* 0C08A9EE mov.l Rm,@(disp,Rn) */
	r7 = 0x2u;  /* 0C08A9F0 mov #imm,Rn */
	r5 = 0xC19E944u; UPD(0x0C08A9F4u, 2);  /* 0C08A9F2 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C08A9F4 add #imm,Rn */
	IF(0x0C08A9F6u); r4 = R32(r0 + r5); UPD(0x0C08A9F8u, 2);  /* 0C08A9F6 mov.l @(r0,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C08A9FAu, 1);  /* 0C08A9F8 mov.w @(disp,pc),Rn */
	W32(r8, r4); UPD(0x0C08A9FCu, 1);  /* 0C08A9FA mov.l Rm,@Rn */
	IF(0x0C08A9FCu); r3 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C08A9FEu, 1);  /* 0C08A9FC mov.b @(r0,Rm),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C08A9FE add #imm,Rn */
	IF(0x0C08AA00u); W8(r0 + r8, r3); UPD(0x0C08AA02u, 2);  /* 0C08AA00 mov.b Rm,@(r0,Rn) */
	r1 = 0xC286318u; UPD(0x0C08AA04u, 1);  /* 0C08AA02 mov.l @(disp,pc),Rn */
	IF(0x0C08AA04u); r0 = MACL;  /* 0C08AA04 sts macl,Rn */
	r0 += r1;  /* 0C08AA06 add Rm,Rn */
	r0 += 0x42u;  /* 0C08AA08 add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r0); UPD(0x0C08AA0Cu, 4);  /* 0C08AA0A mov.b @Rm,Rn */
	r13 = 0xADu; UPD(0x0C08AA0Eu, 1);  /* 0C08AA0C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08AA0E mov Rm,Rn */
	IF(0x0C08AA10u); W8(r0 + r13, r9); UPD(0x0C08AA12u, 2);  /* 0C08AA10 mov.b Rm,@(r0,Rn) */
	r13 += 0xFFFFFFFCu;  /* 0C08AA12 add #imm,Rn */
	IF(0x0C08AA14u); W8(r0 + r13, r9); UPD(0x0C08AA16u, 2);  /* 0C08AA14 mov.b Rm,@(r0,Rn) */
	r13 = (u32)(s32)(s16)r10;  /* 0C08AA16 exts.w Rm,Rn */
	T = (s32)r13 > (s32)r7;  /* 0C08AA18 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08A99Cu, 5); goto L_0C08A99C; } goto L_0C08AA1E; }  /* 0C08AA1A bf/s */
L_0C08AA1E: BLKS(0x0C08AA1Eu);
	{ IF(0x0C08AA20u); ; /* slot nop */ UPD(0x0C08A914u, 4); goto L_0C08A914; }  /* 0C08AA1E bra */
}

void blk_f_0C08AA70(sh3_t *c)
{
	LOCALS;
L_0C08AA70: BLKS(0x0C08AA70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08AA72u, 1);  /* 0C08AA70 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08AA74u, 1);  /* 0C08AA72 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08AA76u, 1);  /* 0C08AA74 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C08AA78u, 1);  /* 0C08AA76 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C08AA78 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08AA7Cu, 2);  /* 0C08AA7A mov.l Rm,@-Rn */
	IF(0x0C08AA7Cu); MACL = r10 * r3;  /* 0C08AA7C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08AA80u, 3);  /* 0C08AA7E mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08AA82u, 1);  /* 0C08AA80 mov.l @(disp,pc),Rn */
	IF(0x0C08AA82u); r2 = MACL;  /* 0C08AA82 sts macl,Rn */
	IF(0x0C08AA84u); r15 -= 4; W32(r15, PR); UPD(0x0C08AA86u, 2);  /* 0C08AA84 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08AA86 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08AA8Au, 2);  /* 0C08AA88 mov.l @(disp,Rm),Rn */
	r0 = 0x3u;  /* 0C08AA8A mov #imm,Rn */
	T = r2 > r0;  /* 0C08AA8C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08AAC8u, 5); goto L_0C08AAC8; } goto L_0C08AA92; }  /* 0C08AA8E bt/s */
L_0C08AA92: BLKS(0x0C08AA92u);
	r0 = 0xC08AAA4u;  /* 0C08AA92 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08AA94 add Rm,Rn */
	IF(0x0C08AA96u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08AA98u, 4);  /* 0C08AA96 mov.w @(r0,Rm),Rn */
	IF(0x0C08AA98u); { u32 tv_ = (r4 + 0x0C08AA9Cu); u32 t_ = PHYS(tv_); IF(0x0C08AA9Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08AA98 braf Rn */
L_0C08AAC8: BLKS(0x0C08AAC8u);
	r15 = r14;  /* 0C08AAC8 mov Rm,Rn */
	IF(0x0C08AACAu); PR = R32(r15); r15 += 4; UPD(0x0C08AACCu, 2);  /* 0C08AACA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08AACEu, 1);  /* 0C08AACC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08AAD0u, 1);  /* 0C08AACE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08AAD2u, 1);  /* 0C08AAD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08AAD4u, 1);  /* 0C08AAD2 mov.l @Rm+,Rn */
	IF(0x0C08AAD4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08AAD4 rts */
}

void blk_f_0C08AAB0(sh3_t *c)
{
	LOCALS;
L_0C08AAB0: BLKS(0x0C08AAB0u);
	r7 = 0xB4u; UPD(0x0C08AAB2u, 1);  /* 0C08AAB0 mov.w @(disp,pc),Rn */
	IF(0x0C08AAB2u); MACL = r10 * r7;  /* 0C08AAB2 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08AAB6u, 3);  /* 0C08AAB4 mov.l @(disp,pc),Rn */
	IF(0x0C08AAB6u); r11 = MACL;  /* 0C08AAB6 sts macl,Rn */
	r11 += r6;  /* 0C08AAB8 add Rm,Rn */
	r1 = R32(r11 + 0x24u); UPD(0x0C08AABCu, 3);  /* 0C08AABA mov.l @(disp,Rm),Rn */
	r5 = 0xFF800000u; UPD(0x0C08AABEu, 1);  /* 0C08AABC mov.l @(disp,pc),Rn */
	T = (s32)r1 >= (s32)r5;  /* 0C08AABE cmp/ge Rm,Rn */
	{ u32 c_ = T; r8 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08AAE0u, 4); goto L_0C08AAE0; } goto L_0C08AAC4; }  /* 0C08AAC0 bt/s */
L_0C08AAC4: BLKS(0x0C08AAC4u);
	W32(r11, r8); UPD(0x0C08AAC6u, 2);  /* 0C08AAC4 mov.l Rm,@Rn */
	IF(0x0C08AAC6u); ;  /* 0C08AAC6 nop */
	UPD(0x0C08AAC8u, 1);
L_0C08AAC8: BLKS(0x0C08AAC8u);
	r15 = r14;  /* 0C08AAC8 mov Rm,Rn */
	IF(0x0C08AACAu); PR = R32(r15); r15 += 4; UPD(0x0C08AACCu, 2);  /* 0C08AACA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08AACEu, 1);  /* 0C08AACC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08AAD0u, 1);  /* 0C08AACE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08AAD2u, 1);  /* 0C08AAD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08AAD4u, 1);  /* 0C08AAD2 mov.l @Rm+,Rn */
	IF(0x0C08AAD4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08AAD4 rts */
L_0C08AAE0: BLKS(0x0C08AAE0u);
	r8 = 0xC2B080Au; UPD(0x0C08AAE2u, 1);  /* 0C08AAE0 mov.l @(disp,pc),Rn */
	r9 = 0xAu;  /* 0C08AAE2 mov #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C08AAE6u, 2);  /* 0C08AAE4 mov.b @Rm,Rn */
	r4 = 0xFu;  /* 0C08AAE6 mov #imm,Rn */
	r0 = r7;  /* 0C08AAE8 mov Rm,Rn */
	r0 &= 0xF0u;  /* 0C08AAEA and #imm,r0 */
	IF(0x0C08AAECu); r0 >>= 2;  /* 0C08AAEC shlr2 Rn */
	IF(0x0C08AAEEu); r0 >>= 2;  /* 0C08AAEE shlr2 Rn */
	IF(0x0C08AAF0u); MACL = r0 * r9;  /* 0C08AAF0 mul.l Rm,Rn */
	r7 &= r4;  /* 0C08AAF2 and Rm,Rn */
	r5 = 0xCu;  /* 0C08AAF4 mov #imm,Rn */
	IF(0x0C08AAF6u); r0 = MACL;  /* 0C08AAF6 sts macl,Rn */
	r7 += r0;  /* 0C08AAF8 add Rm,Rn */
	r0 = 0xC0C2310u; UPD(0x0C08AAFCu, 12);  /* 0C08AAFA mov.l @(disp,pc),Rn */
	r4 = r7;  /* 0C08AAFC mov Rm,Rn */
	IF(0x0C08AAFEu); { u32 t_ = r0; PR = 0x0C08AB02u; r11 += 0x5Cu; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C08AB02u); }  /* 0C08AAFE jsr @Rn */
L_0C08AB02: BLKS(0x0C08AB02u);
	W32(r11, r1); UPD(0x0C08AB04u, 1);  /* 0C08AB02 mov.l Rm,@Rn */
	r8 += 0xFFFFFFFEu;  /* 0C08AB04 add #imm,Rn */
	r8 += 0x1u;  /* 0C08AB06 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C08AB0Au, 3);  /* 0C08AB08 mov.b @Rm,Rn */
	r6 = 0xFu;  /* 0C08AB0A mov #imm,Rn */
	r0 = r3;  /* 0C08AB0C mov Rm,Rn */
	r0 &= 0xF0u;  /* 0C08AB0E and #imm,r0 */
	IF(0x0C08AB10u); r0 >>= 2;  /* 0C08AB10 shlr2 Rn */
	IF(0x0C08AB12u); r0 >>= 2;  /* 0C08AB12 shlr2 Rn */
	IF(0x0C08AB14u); MACL = r0 * r9;  /* 0C08AB14 mul.l Rm,Rn */
	r3 &= r6;  /* 0C08AB16 and Rm,Rn */
	r11 += 0x4u;  /* 0C08AB18 add #imm,Rn */
	IF(0x0C08AB1Au); r1 = MACL;  /* 0C08AB1A sts macl,Rn */
	r3 += r1;  /* 0C08AB1C add Rm,Rn */
	W32(r11, r3); UPD(0x0C08AB20u, 12);  /* 0C08AB1E mov.l Rm,@Rn */
	r8 += 0xFFFFFFFFu;  /* 0C08AB20 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C08AB24u, 2);  /* 0C08AB22 mov.b @Rm,Rn */
	r2 = 0xFu;  /* 0C08AB24 mov #imm,Rn */
	r0 = r4;  /* 0C08AB26 mov Rm,Rn */
	r0 &= 0xF0u;  /* 0C08AB28 and #imm,r0 */
	IF(0x0C08AB2Au); r0 >>= 2;  /* 0C08AB2A shlr2 Rn */
	IF(0x0C08AB2Cu); r0 >>= 2;  /* 0C08AB2C shlr2 Rn */
	IF(0x0C08AB2Eu); MACL = r0 * r9;  /* 0C08AB2E mul.l Rm,Rn */
	r4 &= r2;  /* 0C08AB30 and Rm,Rn */
	r11 += 0x4u;  /* 0C08AB32 add #imm,Rn */
	IF(0x0C08AB34u); r5 = MACL;  /* 0C08AB34 sts macl,Rn */
	r4 += r5;  /* 0C08AB36 add Rm,Rn */
	W32(r11, r4); UPD(0x0C08AB3Au, 12);  /* 0C08AB38 mov.l Rm,@Rn */
	r11 += 0xFFFFFF9Cu;  /* 0C08AB3A add #imm,Rn */
	r0 = R32(r11 + 0x24u); UPD(0x0C08AB3Eu, 2);  /* 0C08AB3C mov.l @(disp,Rm),Rn */
	r9 = 0x3FFFFFu; UPD(0x0C08AB40u, 1);  /* 0C08AB3E mov.l @(disp,pc),Rn */
	T = (s32)r0 > (s32)r9;  /* 0C08AB40 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08AAC8u, 4); goto L_0C08AAC8; }  /* 0C08AB42 bf */
L_0C08AB44: BLKS(0x0C08AB44u);
	r0 = r11;  /* 0C08AB44 mov Rm,Rn */
	r5 = 0xA5u; UPD(0x0C08AB48u, 2);  /* 0C08AB46 mov.w @(disp,pc),Rn */
	IF(0x0C08AB48u); r8 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C08AB4Au, 1);  /* 0C08AB48 mov.b @(r0,Rm),Rn */
	r4 = r10;  /* 0C08AB4A mov Rm,Rn */
	r9 = 0xC19E950u; UPD(0x0C08AB4Eu, 2);  /* 0C08AB4C mov.l @(disp,pc),Rn */
	r10 = 0xC0BC1B0u; UPD(0x0C08AB50u, 1);  /* 0C08AB4E mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C08AB50 mov Rm,Rn */
	IF(0x0C08AB52u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08AB54u, 2);  /* 0C08AB52 mov.b @(r0,Rm),Rn */
	IF(0x0C08AB54u); { u32 t_ = r10; PR = 0x0C08AB58u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08AB58u); }  /* 0C08AB54 jsr @Rn */
L_0C08AB58: BLKS(0x0C08AB58u);
	T = (r0 & r0) == 0;  /* 0C08AB58 tst Rm,Rn */
	if (T) { UPD(0x0C08AAC8u, 4); goto L_0C08AAC8; }  /* 0C08AB5A bt */
L_0C08AB5C: BLKS(0x0C08AB5Cu);
	r0 = r11;  /* 0C08AB5C mov Rm,Rn */
	r7 = 0xA9u; UPD(0x0C08AB60u, 2);  /* 0C08AB5E mov.w @(disp,pc),Rn */
	IF(0x0C08AB60u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C08AB62u, 1);  /* 0C08AB60 mov.b @(r0,Rm),Rn */
	r9 = 0xC0C2360u; UPD(0x0C08AB64u, 1);  /* 0C08AB62 mov.l @(disp,pc),Rn */
	r6 += 0xFFFFFFFFu;  /* 0C08AB64 add #imm,Rn */
	IF(0x0C08AB66u); { u32 t_ = r9; PR = 0x0C08AB6Au; r10 = (u32)(s32)(s8)r6; /* slot exts.b Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C08AB6Au); }  /* 0C08AB66 jsr @Rn */
L_0C08AB6A: BLKS(0x0C08AB6Au);
	r3 = (u32)(s32)(s16)r0;  /* 0C08AB6A exts.w Rm,Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C08AB6Eu, 2);  /* 0C08AB6C mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C08AB6E mov Rm,Rn */
	r5 = R32(r11 + 0x28u); UPD(0x0C08AB72u, 2);  /* 0C08AB70 mov.l @(disp,Rm),Rn */
	r7 = r3;  /* 0C08AB72 mov Rm,Rn */
	r2 = 0xC098680u; UPD(0x0C08AB76u, 2);  /* 0C08AB74 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08AB76 mov Rm,Rn */
	IF(0x0C08AB78u); PR = R32(r15); r15 += 4; UPD(0x0C08AB7Au, 2);  /* 0C08AB78 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08AB7Cu, 1);  /* 0C08AB7A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08AB7Eu, 1);  /* 0C08AB7C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08AB80u, 1);  /* 0C08AB7E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08AB82u, 1);  /* 0C08AB80 mov.l @Rm+,Rn */
	IF(0x0C08AB82u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C098680u: TAIL(blk_f_0C098680); default: JUMPD(tv_); } }  /* 0C08AB82 jmp @Rn */
}

void blk_f_0C08AB90(sh3_t *c)
{
	LOCALS;
	goto L_0C08AB90;
L_0C08AAC8: BLKS(0x0C08AAC8u);
	r15 = r14;  /* 0C08AAC8 mov Rm,Rn */
	IF(0x0C08AACAu); PR = R32(r15); r15 += 4; UPD(0x0C08AACCu, 2);  /* 0C08AACA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08AACEu, 1);  /* 0C08AACC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08AAD0u, 1);  /* 0C08AACE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08AAD2u, 1);  /* 0C08AAD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08AAD4u, 1);  /* 0C08AAD2 mov.l @Rm+,Rn */
	IF(0x0C08AAD4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08AAD4 rts */
L_0C08AB90: BLKS(0x0C08AB90u);
	r11 = 0xC0A8CA0u; UPD(0x0C08AB92u, 1);  /* 0C08AB90 mov.l @(disp,pc),Rn */
	IF(0x0C08AB92u); { u32 t_ = r11; PR = 0x0C08AB96u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08AB96u); }  /* 0C08AB92 jsr @Rn */
L_0C08AB96: BLKS(0x0C08AB96u);
	IF(0x0C08AB96u); T = (s32)r0 >= 0;  /* 0C08AB96 cmp/pz Rn */
	if (!T) { UPD(0x0C08ABF0u, 4); goto L_0C08ABF0; }  /* 0C08AB98 bf */
L_0C08AB9A: BLKS(0x0C08AB9Au);
	r11 = 0xB4u; UPD(0x0C08AB9Cu, 1);  /* 0C08AB9A mov.w @(disp,pc),Rn */
	IF(0x0C08AB9Cu); MACL = r10 * r11;  /* 0C08AB9C mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08ABA0u, 3);  /* 0C08AB9E mov.l @(disp,pc),Rn */
	IF(0x0C08ABA0u); r4 = MACL;  /* 0C08ABA0 sts macl,Rn */
	IF(0x0C08ABA2u); MACL = r0 * r11;  /* 0C08ABA2 mul.l Rm,Rn */
	r2 = 0x2AAAAAABu; UPD(0x0C08ABA6u, 4);  /* 0C08ABA4 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C08ABA6 add Rm,Rn */
	IF(0x0C08ABA8u); r3 = MACL;  /* 0C08ABA8 sts macl,Rn */
	r3 += r7;  /* 0C08ABAA add Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C08ABAEu, 4);  /* 0C08ABAC mov.l @(disp,Rm),Rn */
	r9 = R32(r3 + 0x28u); UPD(0x0C08ABB0u, 1);  /* 0C08ABAE mov.l @(disp,Rm),Rn */
	r3 += 0x5Cu;  /* 0C08ABB0 add #imm,Rn */
	{ u32 v_ = R32(r3); r3 += 4; r1 = v_; } UPD(0x0C08ABB4u, 2);  /* 0C08ABB2 mov.l @Rm+,Rn */
	r5 = R32(r3); UPD(0x0C08ABB6u, 1);  /* 0C08ABB4 mov.l @Rm,Rn */
	r0 = r1;  /* 0C08ABB6 mov Rm,Rn */
	{ s64 r_ = (s64)(s32)r5 * (s64)(s32)r2; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C08ABB8 dmuls.l Rm,Rn */
	IF(0x0C08ABBAu); r0 <<= 2;  /* 0C08ABBA shll2 Rn */
	r0 += r1;  /* 0C08ABBC add Rm,Rn */
	IF(0x0C08ABBEu); r8 = MACH;  /* 0C08ABBE sts mach,Rn */
	IF(0x0C08ABC0u); T = r8 & 1; r8 = (u32)((s32)r8 >> 1);  /* 0C08ABC0 shar Rn */
	IF(0x0C08ABC2u); T = r5 >> 31; r5 <<= 1;  /* 0C08ABC2 shll Rn */
	{ u32 a_ = r5, t_ = a_ - r5, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r5 = r_; }  /* 0C08ABC4 subc Rm,Rn */
	r8 -= r5;  /* 0C08ABC6 sub Rm,Rn */
	r0 += r8;  /* 0C08ABC8 add Rm,Rn */
	W32(r4 + 0x24u, r6); UPD(0x0C08ABCCu, 12);  /* 0C08ABCA mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x28u, r9); UPD(0x0C08ABCEu, 1);  /* 0C08ABCC mov.l Rm,@(disp,Rn) */
	W32(r4 + 0xCu, r0); UPD(0x0C08ABD0u, 1);  /* 0C08ABCE mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A8AE0u; UPD(0x0C08ABD2u, 1);  /* 0C08ABD0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08ABD2 mov Rm,Rn */
	r15 = r14;  /* 0C08ABD4 mov Rm,Rn */
	IF(0x0C08ABD6u); PR = R32(r15); r15 += 4; UPD(0x0C08ABD8u, 3);  /* 0C08ABD6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08ABDAu, 1);  /* 0C08ABD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08ABDCu, 1);  /* 0C08ABDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08ABDEu, 1);  /* 0C08ABDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08ABE0u, 1);  /* 0C08ABDE mov.l @Rm+,Rn */
	IF(0x0C08ABE0u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C08ABE0 jmp @Rn */
L_0C08ABF0: BLKS(0x0C08ABF0u);
	r6 = 0xB4u; UPD(0x0C08ABF2u, 1);  /* 0C08ABF0 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C08ABF2 mov #imm,Rn */
	IF(0x0C08ABF4u); MACL = r10 * r6;  /* 0C08ABF4 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C08ABF8u, 4);  /* 0C08ABF6 mov.l @(disp,pc),Rn */
	IF(0x0C08ABF8u); r0 = MACL;  /* 0C08ABF8 sts macl,Rn */
	{ IF(0x0C08ABFCu); W32(r0 + r10, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C08AAC8u, 4); goto L_0C08AAC8; }  /* 0C08ABFA bra */
}

void blk_f_0C08AC00(sh3_t *c)
{
	LOCALS;
	goto L_0C08AC00;
L_0C08AAC8: BLKS(0x0C08AAC8u);
	r15 = r14;  /* 0C08AAC8 mov Rm,Rn */
	IF(0x0C08AACAu); PR = R32(r15); r15 += 4; UPD(0x0C08AACCu, 2);  /* 0C08AACA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08AACEu, 1);  /* 0C08AACC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08AAD0u, 1);  /* 0C08AACE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08AAD2u, 1);  /* 0C08AAD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08AAD4u, 1);  /* 0C08AAD2 mov.l @Rm+,Rn */
	IF(0x0C08AAD4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08AAD4 rts */
L_0C08ABD0: BLKS(0x0C08ABD0u);
	r5 = 0xC0A8AE0u; UPD(0x0C08ABD2u, 1);  /* 0C08ABD0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08ABD2 mov Rm,Rn */
	r15 = r14;  /* 0C08ABD4 mov Rm,Rn */
	IF(0x0C08ABD6u); PR = R32(r15); r15 += 4; UPD(0x0C08ABD8u, 3);  /* 0C08ABD6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08ABDAu, 1);  /* 0C08ABD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08ABDCu, 1);  /* 0C08ABDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08ABDEu, 1);  /* 0C08ABDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08ABE0u, 1);  /* 0C08ABDE mov.l @Rm+,Rn */
	IF(0x0C08ABE0u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C08ABE0 jmp @Rn */
L_0C08ABF0: BLKS(0x0C08ABF0u);
	r6 = 0xB4u; UPD(0x0C08ABF2u, 1);  /* 0C08ABF0 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C08ABF2 mov #imm,Rn */
	IF(0x0C08ABF4u); MACL = r10 * r6;  /* 0C08ABF4 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C08ABF8u, 4);  /* 0C08ABF6 mov.l @(disp,pc),Rn */
	IF(0x0C08ABF8u); r0 = MACL;  /* 0C08ABF8 sts macl,Rn */
	{ IF(0x0C08ABFCu); W32(r0 + r10, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C08AAC8u, 4); goto L_0C08AAC8; }  /* 0C08ABFA bra */
L_0C08AC00: BLKS(0x0C08AC00u);
	r8 = 0xC0A8CA0u; UPD(0x0C08AC02u, 1);  /* 0C08AC00 mov.l @(disp,pc),Rn */
	IF(0x0C08AC02u); { u32 t_ = r8; PR = 0x0C08AC06u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08AC06u); }  /* 0C08AC02 jsr @Rn */
L_0C08AC06: BLKS(0x0C08AC06u);
	IF(0x0C08AC06u); T = (s32)r0 >= 0;  /* 0C08AC06 cmp/pz Rn */
	if (!T) { UPD(0x0C08ABF0u, 4); goto L_0C08ABF0; }  /* 0C08AC08 bf */
L_0C08AC0A: BLKS(0x0C08AC0Au);
	r2 = 0xB4u; UPD(0x0C08AC0Cu, 1);  /* 0C08AC0A mov.w @(disp,pc),Rn */
	IF(0x0C08AC0Cu); MACL = r10 * r2;  /* 0C08AC0C mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C08AC10u, 3);  /* 0C08AC0E mov.l @(disp,pc),Rn */
	IF(0x0C08AC10u); r3 = MACL;  /* 0C08AC10 sts macl,Rn */
	IF(0x0C08AC12u); MACL = r0 * r2;  /* 0C08AC12 mul.l Rm,Rn */
	r3 += r5;  /* 0C08AC14 add Rm,Rn */
	IF(0x0C08AC16u); r1 = MACL;  /* 0C08AC16 sts macl,Rn */
	r1 += r5;  /* 0C08AC18 add Rm,Rn */
	r0 = R32(r1 + 0x24u); UPD(0x0C08AC1Cu, 7);  /* 0C08AC1A mov.l @(disp,Rm),Rn */
	r4 = R32(r1 + 0x28u); UPD(0x0C08AC1Eu, 1);  /* 0C08AC1C mov.l @(disp,Rm),Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C08AC20u, 1);  /* 0C08AC1E mov.l Rm,@(disp,Rn) */
	r1 += 0x60u;  /* 0C08AC20 add #imm,Rn */
	W32(r3 + 0x28u, r4); UPD(0x0C08AC24u, 2);  /* 0C08AC22 mov.l Rm,@(disp,Rn) */
	r0 = R32(r1); UPD(0x0C08AC26u, 1);  /* 0C08AC24 mov.l @Rm,Rn */
	{ W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08ABD0u, 3); goto L_0C08ABD0; }  /* 0C08AC26 bra */
}

void blk_f_0C08AC30(sh3_t *c)
{
	LOCALS;
	goto L_0C08AC30;
L_0C08AAC8: BLKS(0x0C08AAC8u);
	r15 = r14;  /* 0C08AAC8 mov Rm,Rn */
	IF(0x0C08AACAu); PR = R32(r15); r15 += 4; UPD(0x0C08AACCu, 2);  /* 0C08AACA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08AACEu, 1);  /* 0C08AACC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08AAD0u, 1);  /* 0C08AACE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08AAD2u, 1);  /* 0C08AAD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08AAD4u, 1);  /* 0C08AAD2 mov.l @Rm+,Rn */
	IF(0x0C08AAD4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08AAD4 rts */
L_0C08ABD0: BLKS(0x0C08ABD0u);
	r5 = 0xC0A8AE0u; UPD(0x0C08ABD2u, 1);  /* 0C08ABD0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08ABD2 mov Rm,Rn */
	r15 = r14;  /* 0C08ABD4 mov Rm,Rn */
	IF(0x0C08ABD6u); PR = R32(r15); r15 += 4; UPD(0x0C08ABD8u, 3);  /* 0C08ABD6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08ABDAu, 1);  /* 0C08ABD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08ABDCu, 1);  /* 0C08ABDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08ABDEu, 1);  /* 0C08ABDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08ABE0u, 1);  /* 0C08ABDE mov.l @Rm+,Rn */
	IF(0x0C08ABE0u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C08ABE0 jmp @Rn */
L_0C08ABF0: BLKS(0x0C08ABF0u);
	r6 = 0xB4u; UPD(0x0C08ABF2u, 1);  /* 0C08ABF0 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C08ABF2 mov #imm,Rn */
	IF(0x0C08ABF4u); MACL = r10 * r6;  /* 0C08ABF4 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C08ABF8u, 4);  /* 0C08ABF6 mov.l @(disp,pc),Rn */
	IF(0x0C08ABF8u); r0 = MACL;  /* 0C08ABF8 sts macl,Rn */
	{ IF(0x0C08ABFCu); W32(r0 + r10, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C08AAC8u, 4); goto L_0C08AAC8; }  /* 0C08ABFA bra */
L_0C08AC24: BLKS(0x0C08AC24u);
	r0 = R32(r1); UPD(0x0C08AC26u, 1);  /* 0C08AC24 mov.l @Rm,Rn */
	{ W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08ABD0u, 3); goto L_0C08ABD0; }  /* 0C08AC26 bra */
L_0C08AC30: BLKS(0x0C08AC30u);
	r9 = 0xC0A8CA0u; UPD(0x0C08AC32u, 1);  /* 0C08AC30 mov.l @(disp,pc),Rn */
	IF(0x0C08AC32u); { u32 t_ = r9; PR = 0x0C08AC36u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08AC36u); }  /* 0C08AC32 jsr @Rn */
L_0C08AC36: BLKS(0x0C08AC36u);
	IF(0x0C08AC36u); T = (s32)r0 >= 0;  /* 0C08AC36 cmp/pz Rn */
	if (!T) { UPD(0x0C08ABF0u, 4); goto L_0C08ABF0; }  /* 0C08AC38 bf */
L_0C08AC3A: BLKS(0x0C08AC3Au);
	r4 = 0xB4u; UPD(0x0C08AC3Cu, 1);  /* 0C08AC3A mov.w @(disp,pc),Rn */
	IF(0x0C08AC3Cu); MACL = r10 * r4;  /* 0C08AC3C mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C08AC40u, 3);  /* 0C08AC3E mov.l @(disp,pc),Rn */
	IF(0x0C08AC40u); r3 = MACL;  /* 0C08AC40 sts macl,Rn */
	IF(0x0C08AC42u); MACL = r0 * r4;  /* 0C08AC42 mul.l Rm,Rn */
	r3 += r8;  /* 0C08AC44 add Rm,Rn */
	IF(0x0C08AC46u); r1 = MACL;  /* 0C08AC46 sts macl,Rn */
	r1 += r8;  /* 0C08AC48 add Rm,Rn */
	r11 = R32(r1 + 0x24u); UPD(0x0C08AC4Cu, 7);  /* 0C08AC4A mov.l @(disp,Rm),Rn */
	r7 = R32(r1 + 0x28u); UPD(0x0C08AC4Eu, 1);  /* 0C08AC4C mov.l @(disp,Rm),Rn */
	W32(r3 + 0x24u, r11); UPD(0x0C08AC50u, 1);  /* 0C08AC4E mov.l Rm,@(disp,Rn) */
	r1 += 0x64u;  /* 0C08AC50 add #imm,Rn */
	{ W32(r3 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08AC24u, 4); goto L_0C08AC24; }  /* 0C08AC52 bra */
}

void blk_f_0C08AC90(sh3_t *c)
{
	LOCALS;
L_0C08AC90: BLKS(0x0C08AC90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08AC92u, 1);  /* 0C08AC90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08AC94u, 1);  /* 0C08AC92 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08AC96u, 1);  /* 0C08AC94 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08AC98u, 1);  /* 0C08AC96 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08AC9Au, 1);  /* 0C08AC98 mov.l Rm,@-Rn */
	r9 = 0xB4u; UPD(0x0C08AC9Cu, 1);  /* 0C08AC9A mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C08AC9C exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08ACA0u, 2);  /* 0C08AC9E mov.l Rm,@-Rn */
	IF(0x0C08ACA0u); MACL = r12 * r9;  /* 0C08ACA0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08ACA4u, 3);  /* 0C08ACA2 mov.l Rm,@-Rn */
	r10 = 0xC286578u; UPD(0x0C08ACA6u, 1);  /* 0C08ACA4 mov.l @(disp,pc),Rn */
	IF(0x0C08ACA6u); r8 = MACL;  /* 0C08ACA6 sts macl,Rn */
	IF(0x0C08ACA8u); r15 -= 4; W32(r15, PR); UPD(0x0C08ACAAu, 2);  /* 0C08ACA8 sts.l pr,@-Rn */
	r8 += r10;  /* 0C08ACAA add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C08ACAEu, 2);  /* 0C08ACAC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08ACAE add #imm,Rn */
	T = r0 == 0x20u;  /* 0C08ACB0 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08ACBAu, 5); goto L_0C08ACBA; } goto L_0C08ACB6; }  /* 0C08ACB2 bf/s */
L_0C08ACB6: BLKS(0x0C08ACB6u);
	{ IF(0x0C08ACB8u); ; /* slot nop */ UPD(0x0C08AF50u, 4); goto L_0C08AF50; }  /* 0C08ACB6 bra */
L_0C08ACBA: BLKS(0x0C08ACBAu);
	r2 = 0x99u; UPD(0x0C08ACBCu, 1);  /* 0C08ACBA mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C08ACBC add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C08ACC0u, 2);  /* 0C08ACBE mov.b @Rm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C08ACC0 cmp/eq #imm,r0 */
	{ u32 c_ = T; r3 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08AD44u, 4); goto L_0C08AD44; } goto L_0C08ACC6; }  /* 0C08ACC2 bt/s */
L_0C08ACC6: BLKS(0x0C08ACC6u);
	r9 = 0xC069BF0u; UPD(0x0C08ACC8u, 2);  /* 0C08ACC6 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C08ACC8 add #imm,Rn */
	W8(r2, r3); UPD(0x0C08ACCCu, 2);  /* 0C08ACCA mov.b Rm,@Rn */
	r13 = 0x9Eu; UPD(0x0C08ACCEu, 1);  /* 0C08ACCC mov.w @(disp,pc),Rn */
	IF(0x0C08ACCEu); { u32 t_ = r9; PR = 0x0C08ACD2u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08ACD2u); }  /* 0C08ACCE jsr @Rn */
L_0C08ACD2: BLKS(0x0C08ACD2u);
	r0 = r8;  /* 0C08ACD2 mov Rm,Rn */
	IF(0x0C08ACD4u); r11 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C08ACD6u, 2);  /* 0C08ACD4 mov.b @(r0,Rm),Rn */
	r6 = 0x2A0u; UPD(0x0C08ACD8u, 1);  /* 0C08ACD6 mov.w @(disp,pc),Rn */
	r7 = r11 & 0xFF;  /* 0C08ACD8 extu.b Rm,Rn */
	IF(0x0C08ACDAu); MACL = r7 * r6;  /* 0C08ACDA mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C08ACDEu, 4);  /* 0C08ACDC mov.l @(disp,pc),Rn */
	IF(0x0C08ACDEu); r10 = MACL;  /* 0C08ACDE sts macl,Rn */
	r10 += r5;  /* 0C08ACE0 add Rm,Rn */
	r9 = 0x8Au; UPD(0x0C08ACE4u, 3);  /* 0C08ACE2 mov.w @(disp,pc),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C08ACE6u, 1);  /* 0C08ACE4 mov.l @(disp,Rm),Rn */
	r9 += r8;  /* 0C08ACE6 add Rm,Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C08ACEAu, 2);  /* 0C08ACE8 mov.l @(disp,Rm),Rn */
	r8 = 0xC068E60u; UPD(0x0C08ACECu, 1);  /* 0C08ACEA mov.l @(disp,pc),Rn */
	r6 = R32(r10 + 0x10u); UPD(0x0C08ACEEu, 1);  /* 0C08ACEC mov.l @(disp,Rm),Rn */
	IF(0x0C08ACEEu); { u32 t_ = r8; PR = 0x0C08ACF2u; r7 = R32(r10 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C08ACF2u); }  /* 0C08ACEE jsr @Rn */
L_0C08ACF2: BLKS(0x0C08ACF2u);
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C08ACF4u, 1);  /* 0C08ACF2 mov.w @Rm,Rn */
	r4 = 0x1FFu; UPD(0x0C08ACF6u, 1);  /* 0C08ACF4 mov.w @(disp,pc),Rn */
	r2 = r3;  /* 0C08ACF6 mov Rm,Rn */
	r2 -= r0;  /* 0C08ACF8 sub Rm,Rn */
	r2 &= r4;  /* 0C08ACFA and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C08ACFC tst Rm,Rn */
	if (T) { UPD(0x0C08AD12u, 7); goto L_0C08AD12; }  /* 0C08ACFE bt */
L_0C08AD00: BLKS(0x0C08AD00u);
	r0 = 0x100u; UPD(0x0C08AD02u, 1);  /* 0C08AD00 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C08AD02 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08AD0Cu, 4); goto L_0C08AD0C; } goto L_0C08AD08; }  /* 0C08AD04 bt/s */
L_0C08AD08: BLKS(0x0C08AD08u);
	{ r1 += 0xFFFFFFFEu; /* slot add #imm,Rn */ UPD(0x0C08AD10u, 4); goto L_0C08AD10; }  /* 0C08AD08 bra */
L_0C08AD0C: BLKS(0x0C08AD0Cu);
	r1 = r3;  /* 0C08AD0C mov Rm,Rn */
	r1 += 0x2u;  /* 0C08AD0E add #imm,Rn */
	UPD(0x0C08AD10u, 2);
L_0C08AD10: BLKS(0x0C08AD10u);
	W16(r9, r1); UPD(0x0C08AD12u, 1);  /* 0C08AD10 mov.w Rm,@Rn */
L_0C08AD12: BLKS(0x0C08AD12u);
	r3 = 0xFFFFFF00u; UPD(0x0C08AD14u, 1);  /* 0C08AD12 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C08AD14 add Rm,Rn */
	IF(0x0C08AD16u); T = (s32)r3 >= 0;  /* 0C08AD16 cmp/pz Rn */
	if (T) { UPD(0x0C08AD1Cu, 5); goto L_0C08AD1C; }  /* 0C08AD18 bt */
L_0C08AD1A: BLKS(0x0C08AD1Au);
	r3 = 0u - r3;  /* 0C08AD1A neg Rm,Rn */
	UPD(0x0C08AD1Cu, 1);
L_0C08AD1C: BLKS(0x0C08AD1Cu);
	r1 = 0xF8u; UPD(0x0C08AD1Eu, 1);  /* 0C08AD1C mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r1;  /* 0C08AD1E cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08AD28u, 4); goto L_0C08AD28; } goto L_0C08AD24; }  /* 0C08AD20 bt/s */
L_0C08AD24: BLKS(0x0C08AD24u);
	{ IF(0x0C08AD26u); ; /* slot nop */ UPD(0x0C08AF30u, 4); goto L_0C08AF30; }  /* 0C08AD24 bra */
L_0C08AD28: BLKS(0x0C08AD28u);
	IF(0x0C08AD28u); MACL = r12 * r1;  /* 0C08AD28 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C08AD2Cu, 3);  /* 0C08AD2A mov.l @(disp,pc),Rn */
	r2 = 0x8Cu; UPD(0x0C08AD2Eu, 1);  /* 0C08AD2C mov.w @(disp,pc),Rn */
	IF(0x0C08AD2Eu); r3 = MACL;  /* 0C08AD2E sts macl,Rn */
	r3 += r8;  /* 0C08AD30 add Rm,Rn */
	r3 += r2;  /* 0C08AD32 add Rm,Rn */
	r2 = R32(r3); UPD(0x0C08AD36u, 4);  /* 0C08AD34 mov.l @Rm,Rn */
	r4 = 0x1BFFFu; UPD(0x0C08AD38u, 1);  /* 0C08AD36 mov.l @(disp,pc),Rn */
	r1 = 0x1000u; UPD(0x0C08AD3Au, 1);  /* 0C08AD38 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C08AD3A cmp/gt Rm,Rn */
	{ u32 c_ = T; r2 += r1; /* slot add Rm,Rn */ if (c_) { UPD(0x0C08AD44u, 4); goto L_0C08AD44; } goto L_0C08AD40; }  /* 0C08AD3C bt/s */
L_0C08AD40: BLKS(0x0C08AD40u);
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C08AF22u, 4); goto L_0C08AF22; }  /* 0C08AD40 bra */
L_0C08AD44: BLKS(0x0C08AD44u);
	r0 = 0xB4u; UPD(0x0C08AD46u, 1);  /* 0C08AD44 mov.w @(disp,pc),Rn */
	IF(0x0C08AD46u); MACL = r12 * r0;  /* 0C08AD46 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C08AD4Au, 3);  /* 0C08AD48 mov.l @(disp,pc),Rn */
	IF(0x0C08AD4Au); r10 = MACL;  /* 0C08AD4A sts macl,Rn */
	r11 = 0x8Cu; UPD(0x0C08AD4Eu, 2);  /* 0C08AD4C mov.w @(disp,pc),Rn */
	r10 += r3;  /* 0C08AD4E add Rm,Rn */
	r13 = 0xC069B20u; UPD(0x0C08AD52u, 2);  /* 0C08AD50 mov.l @(disp,pc),Rn */
	r11 += r10;  /* 0C08AD52 add Rm,Rn */
	r8 = 0x8Au; UPD(0x0C08AD56u, 2);  /* 0C08AD54 mov.w @(disp,pc),Rn */
	r5 = R32(r11); UPD(0x0C08AD58u, 1);  /* 0C08AD56 mov.l @Rm,Rn */
	r8 += r10;  /* 0C08AD58 add Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C08AD5Cu, 2);  /* 0C08AD5A mov.l @(disp,pc),Rn */
	IF(0x0C08AD5Cu); { u32 t_ = r13; PR = 0x0C08AD60u; r4 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08AD60u); }  /* 0C08AD5C jsr @Rn */
L_0C08AD60: BLKS(0x0C08AD60u);
	r5 = R32(r11); UPD(0x0C08AD62u, 1);  /* 0C08AD60 mov.l @Rm,Rn */
	W32(r10 + 0x2Cu, r0); UPD(0x0C08AD64u, 1);  /* 0C08AD62 mov.l Rm,@(disp,Rn) */
	IF(0x0C08AD64u); { u32 t_ = r9; PR = 0x0C08AD68u; r4 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08AD68u); }  /* 0C08AD64 jsr @Rn */
L_0C08AD68: BLKS(0x0C08AD68u);
	r11 = R32(r10 + 0x24u); UPD(0x0C08AD6Au, 1);  /* 0C08AD68 mov.l @(disp,Rm),Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C08AD6Cu, 1);  /* 0C08AD6A mov.l @(disp,Rm),Rn */
	r13 = R32(r10 + 0x2Cu); UPD(0x0C08AD6Eu, 1);  /* 0C08AD6C mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C08AD6E add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C08AD72u, 2);  /* 0C08AD70 mov.l @(disp,pc),Rn */
	r11 += r13;  /* 0C08AD72 add Rm,Rn */
	r3 += r11;  /* 0C08AD74 add Rm,Rn */
	W32(r10 + 0x30u, r0); UPD(0x0C08AD78u, 3);  /* 0C08AD76 mov.l Rm,@(disp,Rn) */
	IF(0x0C08AD78u); T = (s32)r3 >= 0;  /* 0C08AD78 cmp/pz Rn */
	W32(r10 + 0x24u, r11); UPD(0x0C08AD7Cu, 2);  /* 0C08AD7A mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r10 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08AD84u, 3); goto L_0C08AD84; } UPD(0x0C08AD80u, 1); goto L_0C08AD80; }  /* 0C08AD7C bt/s */
L_0C08AD80: BLKS(0x0C08AD80u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C08AF10u, 3); goto L_0C08AF10; }  /* 0C08AD80 bra */
L_0C08AD84: BLKS(0x0C08AD84u);
	r4 = 0xD00000u; UPD(0x0C08AD86u, 1);  /* 0C08AD84 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r4;  /* 0C08AD86 cmp/gt Rm,Rn */
	{ u32 c_ = T; r9 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08ADAAu, 4); goto L_0C08ADAA; } goto L_0C08AD8C; }  /* 0C08AD88 bt/s */
L_0C08AD8C: BLKS(0x0C08AD8Cu);
	r2 = 0xC3C4048u; UPD(0x0C08AD8Eu, 2);  /* 0C08AD8C mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C08AD90u, 1);  /* 0C08AD8E mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C08AD92u, 1);  /* 0C08AD90 mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C08AD92 mov Rm,Rn */
	r2 -= r6;  /* 0C08AD94 sub Rm,Rn */
	r2 += r5;  /* 0C08AD96 add Rm,Rn */
	IF(0x0C08AD98u); T = (s32)r2 >= 0;  /* 0C08AD98 cmp/pz Rn */
	if (T) { UPD(0x0C08AD9Eu, 7); goto L_0C08AD9E; }  /* 0C08AD9A bt */
L_0C08AD9C: BLKS(0x0C08AD9Cu);
	r2 = 0u - r2;  /* 0C08AD9C neg Rm,Rn */
	UPD(0x0C08AD9Eu, 1);
L_0C08AD9E: BLKS(0x0C08AD9Eu);
	r7 = 0xA80000u; UPD(0x0C08ADA0u, 1);  /* 0C08AD9E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C08ADA0 cmp/gt Rm,Rn */
	{ u32 c_ = T; r9 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08ADAAu, 4); goto L_0C08ADAA; } goto L_0C08ADA6; }  /* 0C08ADA2 bt/s */
L_0C08ADA6: BLKS(0x0C08ADA6u);
	{ IF(0x0C08ADA8u); ; /* slot nop */ UPD(0x0C08AED0u, 4); goto L_0C08AED0; }  /* 0C08ADA6 bra */
L_0C08ADAA: BLKS(0x0C08ADAAu);
	W32(r10, r9); UPD(0x0C08ADACu, 1);  /* 0C08ADAA mov.l Rm,@Rn */
	r1 = 0x1u;  /* 0C08ADAC mov #imm,Rn */
	UPD(0x0C08ADAEu, 1);
L_0C08ADAE: BLKS(0x0C08ADAEu);
	r0 = (u32)(s32)(s16)r1;  /* 0C08ADAE exts.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08ADB0 tst Rm,Rn */
	if (T) { UPD(0x0C08AE10u, 5); goto L_0C08AE10; }  /* 0C08ADB2 bt */
L_0C08ADB4: BLKS(0x0C08ADB4u);
	r14 += 0x8u;  /* 0C08ADB4 add #imm,Rn */
	r15 = r14;  /* 0C08ADB6 mov Rm,Rn */
	IF(0x0C08ADB8u); PR = R32(r15); r15 += 4; UPD(0x0C08ADBAu, 3);  /* 0C08ADB8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08ADBCu, 1);  /* 0C08ADBA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08ADBEu, 1);  /* 0C08ADBC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08ADC0u, 1);  /* 0C08ADBE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08ADC2u, 1);  /* 0C08ADC0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08ADC4u, 1);  /* 0C08ADC2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08ADC6u, 1);  /* 0C08ADC4 mov.l @Rm+,Rn */
	IF(0x0C08ADC6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08ADC6 rts */
L_0C08AE10: BLKS(0x0C08AE10u);
	r8 = 0xC0BC1B0u; UPD(0x0C08AE12u, 1);  /* 0C08AE10 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C08AE12 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08AE14 mov #imm,Rn */
	IF(0x0C08AE16u); { u32 t_ = r8; PR = 0x0C08AE1Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08AE1Au); }  /* 0C08AE16 jsr @Rn */
L_0C08AE1A: BLKS(0x0C08AE1Au);
	T = (r0 & r0) == 0;  /* 0C08AE1A tst Rm,Rn */
	if (T) { UPD(0x0C08ADB4u, 4); goto L_0C08ADB4; }  /* 0C08AE1C bt */
L_0C08AE1E: BLKS(0x0C08AE1Eu);
	r4 = 0xB4u; UPD(0x0C08AE20u, 1);  /* 0C08AE1E mov.w @(disp,pc),Rn */
	IF(0x0C08AE20u); MACL = r12 * r4;  /* 0C08AE20 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C08AE24u, 3);  /* 0C08AE22 mov.l @(disp,pc),Rn */
	IF(0x0C08AE24u); r8 = MACL;  /* 0C08AE24 sts macl,Rn */
	r8 += r3;  /* 0C08AE26 add Rm,Rn */
	r7 = 0xA9u; UPD(0x0C08AE2Au, 3);  /* 0C08AE28 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08AE2A mov Rm,Rn */
	r13 = 0xC0BBF10u; UPD(0x0C08AE2Eu, 2);  /* 0C08AE2C mov.l @(disp,pc),Rn */
	IF(0x0C08AE2Eu); r2 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C08AE30u, 1);  /* 0C08AE2E mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C08AE32u, 1);  /* 0C08AE30 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C08AE32 extu.b Rm,Rn */
	IF(0x0C08AE34u); { u32 t_ = r13; PR = 0x0C08AE38u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08AE38u); }  /* 0C08AE34 jsr @Rn */
L_0C08AE38: BLKS(0x0C08AE38u);
	T = (r0 & r0) == 0;  /* 0C08AE38 tst Rm,Rn */
	if (T) { UPD(0x0C08ADB4u, 4); goto L_0C08ADB4; }  /* 0C08AE3A bt */
L_0C08AE3C: BLKS(0x0C08AE3Cu);
	r9 = r8;  /* 0C08AE3C mov Rm,Rn */
	r11 = 0x86u; UPD(0x0C08AE40u, 2);  /* 0C08AE3E mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C08AE40 add Rm,Rn */
	W32(r14, r8); UPD(0x0C08AE44u, 2);  /* 0C08AE42 mov.l Rm,@Rn */
	r13 = 0x0u;  /* 0C08AE44 mov #imm,Rn */
	W32(r14 + 0x4u, r9); UPD(0x0C08AE48u, 2);  /* 0C08AE46 mov.l Rm,@(disp,Rn) */
L_0C08AE48: BLKS(0x0C08AE48u);
	r6 = R32(r14 + 0x4u); UPD(0x0C08AE4Au, 1);  /* 0C08AE48 mov.l @(disp,Rm),Rn */
	r0 = r13;  /* 0C08AE4A mov Rm,Rn */
	r5 = 0xC19F7F8u; UPD(0x0C08AE4Eu, 2);  /* 0C08AE4C mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C08AE4E add Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r6); UPD(0x0C08AE52u, 2);  /* 0C08AE50 mov.w @Rm,Rn */
	r10 = r13;  /* 0C08AE52 mov Rm,Rn */
	IF(0x0C08AE54u); r8 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C08AE56u, 2);  /* 0C08AE54 mov.w @(r0,Rm),Rn */
	IF(0x0C08AE56u); r10 <<= 2;  /* 0C08AE56 shll2 Rn */
	r9 = 0xC069B20u; UPD(0x0C08AE5Au, 2);  /* 0C08AE58 mov.l @(disp,pc),Rn */
	r11 += r8;  /* 0C08AE5A add Rm,Rn */
	r8 = (u32)(s32)(s16)r11;  /* 0C08AE5C exts.w Rm,Rn */
	r5 = 0x120000u; UPD(0x0C08AE60u, 3);  /* 0C08AE5E mov.l @(disp,pc),Rn */
	IF(0x0C08AE60u); { u32 t_ = r9; PR = 0x0C08AE64u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08AE64u); }  /* 0C08AE60 jsr @Rn */
L_0C08AE64: BLKS(0x0C08AE64u);
	r9 = 0xC069AF0u; UPD(0x0C08AE66u, 1);  /* 0C08AE64 mov.l @(disp,pc),Rn */
	r11 = r0;  /* 0C08AE66 mov Rm,Rn */
	r4 = 0xC19F808u; UPD(0x0C08AE6Au, 2);  /* 0C08AE68 mov.l @(disp,pc),Rn */
	r10 += r4;  /* 0C08AE6A add Rm,Rn */
	r5 = R32(r10); UPD(0x0C08AE6Eu, 2);  /* 0C08AE6C mov.l @Rm,Rn */
	IF(0x0C08AE6Eu); { u32 t_ = r9; PR = 0x0C08AE72u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08AE72u); }  /* 0C08AE6E jsr @Rn */
L_0C08AE72: BLKS(0x0C08AE72u);
	r3 = R32(r14); UPD(0x0C08AE74u, 1);  /* 0C08AE72 mov.l @Rm,Rn */
	r11 -= r0;  /* 0C08AE74 sub Rm,Rn */
	r7 = R32(r3 + 0x24u); UPD(0x0C08AE78u, 2);  /* 0C08AE76 mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C08AE78 mov Rm,Rn */
	r5 = 0x120000u; UPD(0x0C08AE7Cu, 2);  /* 0C08AE7A mov.l @(disp,pc),Rn */
	IF(0x0C08AE7Cu); { u32 t_ = r9; PR = 0x0C08AE80u; r11 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08AE80u); }  /* 0C08AE7C jsr @Rn */
L_0C08AE80: BLKS(0x0C08AE80u);
	r2 = R32(r14); UPD(0x0C08AE82u, 1);  /* 0C08AE80 mov.l @Rm,Rn */
	r4 = r8;  /* 0C08AE82 mov Rm,Rn */
	r1 = 0xC069B20u; UPD(0x0C08AE86u, 2);  /* 0C08AE84 mov.l @(disp,pc),Rn */
	r9 = R32(r2 + 0x28u); UPD(0x0C08AE88u, 1);  /* 0C08AE86 mov.l @(disp,Rm),Rn */
	r5 = R32(r10); UPD(0x0C08AE8Au, 1);  /* 0C08AE88 mov.l @Rm,Rn */
	IF(0x0C08AE8Au); { u32 t_ = r1; PR = 0x0C08AE8Eu; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08AE8Eu); }  /* 0C08AE8A jsr @Rn */
L_0C08AE8E: BLKS(0x0C08AE8Eu);
	r9 += r0;  /* 0C08AE8E add Rm,Rn */
	r10 = 0xC0BA480u; UPD(0x0C08AE92u, 2);  /* 0C08AE90 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08AE92 add #imm,Rn */
	r0 = 0x20000u; UPD(0x0C08AE96u, 2);  /* 0C08AE94 mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C08AE96 mov Rm,Rn */
	W32(r15, r0); UPD(0x0C08AE9Au, 2);  /* 0C08AE98 mov.l Rm,@Rn */
	r6 = r9;  /* 0C08AE9A mov Rm,Rn */
	r4 = 0x3u;  /* 0C08AE9C mov #imm,Rn */
	IF(0x0C08AE9Eu); { u32 t_ = r10; PR = 0x0C08AEA2u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C08AEA2u); }  /* 0C08AE9E jsr @Rn */
L_0C08AEA2: BLKS(0x0C08AEA2u);
	r6 = r13;  /* 0C08AEA2 mov Rm,Rn */
	r6 += 0x1u;  /* 0C08AEA4 add #imm,Rn */
	r13 = (u32)(s32)(s16)r6;  /* 0C08AEA6 exts.w Rm,Rn */
	r5 = 0x1u;  /* 0C08AEA8 mov #imm,Rn */
	T = (s32)r13 > (s32)r5;  /* 0C08AEAA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08AE48u, 8); goto L_0C08AE48; } goto L_0C08AEB0; }  /* 0C08AEAC bf/s */
L_0C08AEB0: BLKS(0x0C08AEB0u);
	r1 = 0xC069B90u; UPD(0x0C08AEB2u, 2);  /* 0C08AEB0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C08AEB2 mov Rm,Rn */
	UPD(0x0C08AEB4u, 1);
L_0C08AEB4: BLKS(0x0C08AEB4u);
	r14 += 0x8u;  /* 0C08AEB4 add #imm,Rn */
	r15 = r14;  /* 0C08AEB6 mov Rm,Rn */
	IF(0x0C08AEB8u); PR = R32(r15); r15 += 4; UPD(0x0C08AEBAu, 3);  /* 0C08AEB8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08AEBCu, 1);  /* 0C08AEBA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08AEBEu, 1);  /* 0C08AEBC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08AEC0u, 1);  /* 0C08AEBE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08AEC2u, 1);  /* 0C08AEC0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08AEC4u, 1);  /* 0C08AEC2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08AEC6u, 1);  /* 0C08AEC4 mov.l @Rm+,Rn */
	IF(0x0C08AEC6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C069B90u: TAIL(blk_f_0C069B90); case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C08AEC6 jmp @Rn */
L_0C08AED0: BLKS(0x0C08AED0u);
	r11 = 0xC069BF0u; UPD(0x0C08AED2u, 1);  /* 0C08AED0 mov.l @(disp,pc),Rn */
	r9 = 0xC068F00u; UPD(0x0C08AED4u, 1);  /* 0C08AED2 mov.l @(disp,pc),Rn */
	IF(0x0C08AED4u); { u32 t_ = r11; PR = 0x0C08AED8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08AED8u); }  /* 0C08AED4 jsr @Rn */
L_0C08AED8: BLKS(0x0C08AED8u);
	r4 = r12;  /* 0C08AED8 mov Rm,Rn */
	IF(0x0C08AEDAu); { u32 t_ = r9; PR = 0x0C08AEDEu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08AEDEu); }  /* 0C08AEDA jsr @Rn */
L_0C08AEDE: BLKS(0x0C08AEDEu);
	r4 = 0x86u; UPD(0x0C08AEE0u, 1);  /* 0C08AEDE mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C08AEE0 mov Rm,Rn */
	IF(0x0C08AEE2u); r13 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C08AEE4u, 2);  /* 0C08AEE2 mov.w @(r0,Rm),Rn */
	r3 = 0x1Fu;  /* 0C08AEE4 mov #imm,Rn */
	r8 = 0x9Du; UPD(0x0C08AEE8u, 2);  /* 0C08AEE6 mov.w @(disp,pc),Rn */
	r13 += 0x8u;  /* 0C08AEE8 add #imm,Rn */
	IF(0x0C08AEEAu); r13 >>= 2;  /* 0C08AEEA shlr2 Rn */
	IF(0x0C08AEECu); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08AEEEu, 3);  /* 0C08AEEC mov.b @(r0,Rm),Rn */
	IF(0x0C08AEEEu); r13 >>= 2;  /* 0C08AEEE shlr2 Rn */
	r13 &= r3;  /* 0C08AEF0 and Rm,Rn */
	r0 = r11;  /* 0C08AEF2 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C08AEF4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08AEF6 tst Rm,Rn */
	{ u32 c_ = !T; W32(r10 + 0x8u, r13); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08AF06u, 8); goto L_0C08AF06; } UPD(0x0C08AEFCu, 1); goto L_0C08AEFC; }  /* 0C08AEF8 bf/s */
L_0C08AEFC: BLKS(0x0C08AEFCu);
	r0 = R32(r10 + 0xCu); UPD(0x0C08AEFEu, 1);  /* 0C08AEFC mov.l @(disp,Rm),Rn */
	r6 = 0xC19F7FCu; UPD(0x0C08AF00u, 1);  /* 0C08AEFE mov.l @(disp,pc),Rn */
	IF(0x0C08AF00u); r0 <<= 2;  /* 0C08AF00 shll2 Rn */
	IF(0x0C08AF02u); r5 = R32(r0 + r6); UPD(0x0C08AF04u, 2);  /* 0C08AF02 mov.l @(r0,Rm),Rn */
	W32(r10 + 0xCu, r5); UPD(0x0C08AF06u, 1);  /* 0C08AF04 mov.l Rm,@(disp,Rn) */
L_0C08AF06: BLKS(0x0C08AF06u);
	r10 = 0xC0A8B10u; UPD(0x0C08AF08u, 1);  /* 0C08AF06 mov.l @(disp,pc),Rn */
	IF(0x0C08AF08u); { u32 t_ = r10; PR = 0x0C08AF0Cu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C08AF0Cu); }  /* 0C08AF08 jsr @Rn */
L_0C08AF0C: BLKS(0x0C08AF0Cu);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C08ADAEu, 3); goto L_0C08ADAE; }  /* 0C08AF0C bra */
L_0C08AF10: BLKS(0x0C08AF10u);
	{ IF(0x0C08AF12u); ; /* slot nop */ UPD(0x0C08AD84u, 3); goto L_0C08AD84; }  /* 0C08AF10 bra */
L_0C08AF20: BLKS(0x0C08AF20u);
	W32(r3, r2); UPD(0x0C08AF22u, 1);  /* 0C08AF20 mov.l Rm,@Rn */
L_0C08AF22: BLKS(0x0C08AF22u);
	{ IF(0x0C08AF24u); ; /* slot nop */ UPD(0x0C08AD44u, 3); goto L_0C08AD44; }  /* 0C08AF22 bra */
L_0C08AF30: BLKS(0x0C08AF30u);
	r7 = 0xB4u; UPD(0x0C08AF32u, 1);  /* 0C08AF30 mov.w @(disp,pc),Rn */
	IF(0x0C08AF32u); MACL = r12 * r7;  /* 0C08AF32 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08AF36u, 3);  /* 0C08AF34 mov.l @(disp,pc),Rn */
	IF(0x0C08AF36u); r3 = MACL;  /* 0C08AF36 sts macl,Rn */
	r5 = 0x8Cu; UPD(0x0C08AF3Au, 2);  /* 0C08AF38 mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C08AF3A add Rm,Rn */
	r3 += r5;  /* 0C08AF3C add Rm,Rn */
	r2 = R32(r3); UPD(0x0C08AF40u, 3);  /* 0C08AF3E mov.l @Rm,Rn */
	r10 = 0x8000u; UPD(0x0C08AF42u, 1);  /* 0C08AF40 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r10;  /* 0C08AF42 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08AF22u, 4); goto L_0C08AF22; }  /* 0C08AF44 bf */
L_0C08AF46: BLKS(0x0C08AF46u);
	r1 = 0xFFFFF000u; UPD(0x0C08AF48u, 1);  /* 0C08AF46 mov.w @(disp,pc),Rn */
	{ r2 += r1; /* slot add Rm,Rn */ UPD(0x0C08AF20u, 3); goto L_0C08AF20; }  /* 0C08AF48 bra */
L_0C08AF50: BLKS(0x0C08AF50u);
	r11 = 0xC0A8B50u; UPD(0x0C08AF52u, 1);  /* 0C08AF50 mov.l @(disp,pc),Rn */
	IF(0x0C08AF52u); { u32 t_ = r11; PR = 0x0C08AF56u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C08AF56u); }  /* 0C08AF52 jsr @Rn */
L_0C08AF56: BLKS(0x0C08AF56u);
	IF(0x0C08AF56u); T = (s32)r0 >= 0;  /* 0C08AF56 cmp/pz Rn */
	if (!T) { UPD(0x0C08AF80u, 4); goto L_0C08AF80; }  /* 0C08AF58 bf */
L_0C08AF5A: BLKS(0x0C08AF5Au);
	IF(0x0C08AF5Au); MACL = r0 * r9;  /* 0C08AF5A mul.l Rm,Rn */
	r4 = r12;  /* 0C08AF5C mov Rm,Rn */
	IF(0x0C08AF5Eu); r3 = MACL;  /* 0C08AF5E sts macl,Rn */
	r3 += r10;  /* 0C08AF60 add Rm,Rn */
	r1 = R32(r3 + 0x24u); UPD(0x0C08AF64u, 6);  /* 0C08AF62 mov.l @(disp,Rm),Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C08AF66u, 1);  /* 0C08AF64 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r1); UPD(0x0C08AF68u, 1);  /* 0C08AF66 mov.l Rm,@(disp,Rn) */
	r0 += 0x3u;  /* 0C08AF68 add #imm,Rn */
	r2 = R32(r3 + 0x28u); UPD(0x0C08AF6Cu, 2);  /* 0C08AF6A mov.l @(disp,Rm),Rn */
	r0 &= 0x7u;  /* 0C08AF6C and #imm,r0 */
	W32(r8 + 0x28u, r2); UPD(0x0C08AF70u, 2);  /* 0C08AF6E mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A8AE0u; UPD(0x0C08AF72u, 1);  /* 0C08AF70 mov.l @(disp,pc),Rn */
	{ W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08AEB4u, 3); goto L_0C08AEB4; }  /* 0C08AF72 bra */
L_0C08AF80: BLKS(0x0C08AF80u);
	r0 = 0x0u;  /* 0C08AF80 mov #imm,Rn */
	{ W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C08ADB4u, 4); goto L_0C08ADB4; }  /* 0C08AF82 bra */
}

void blk_f_0C08AFE0(sh3_t *c)
{
	LOCALS;
L_0C08AFE0: BLKS(0x0C08AFE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08AFE2u, 1);  /* 0C08AFE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08AFE4u, 1);  /* 0C08AFE2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08AFE6u, 1);  /* 0C08AFE4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08AFE8u, 1);  /* 0C08AFE6 mov.l Rm,@-Rn */
	r9 = 0xB4u; UPD(0x0C08AFEAu, 1);  /* 0C08AFE8 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C08AFEA exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08AFEEu, 2);  /* 0C08AFEC mov.l Rm,@-Rn */
	IF(0x0C08AFEEu); MACL = r11 * r9;  /* 0C08AFEE mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08AFF2u, 3);  /* 0C08AFF0 mov.l Rm,@-Rn */
	r10 = 0xC286578u; UPD(0x0C08AFF4u, 1);  /* 0C08AFF2 mov.l @(disp,pc),Rn */
	IF(0x0C08AFF4u); r8 = MACL;  /* 0C08AFF4 sts macl,Rn */
	IF(0x0C08AFF6u); r15 -= 4; W32(r15, PR); UPD(0x0C08AFF8u, 2);  /* 0C08AFF6 sts.l pr,@-Rn */
	r8 += r10;  /* 0C08AFF8 add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C08AFFCu, 2);  /* 0C08AFFA mov.l @(disp,Rm),Rn */
	T = r0 == 0x20u;  /* 0C08AFFC cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08B006u, 4); goto L_0C08B006; } goto L_0C08B002; }  /* 0C08AFFE bf/s */
L_0C08B002: BLKS(0x0C08B002u);
	{ IF(0x0C08B004u); ; /* slot nop */ UPD(0x0C08B270u, 4); goto L_0C08B270; }  /* 0C08B002 bra */
L_0C08B006: BLKS(0x0C08B006u);
	r7 = 0x9Fu; UPD(0x0C08B008u, 1);  /* 0C08B006 mov.w @(disp,pc),Rn */
	r7 += r8;  /* 0C08B008 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C08B00Cu, 2);  /* 0C08B00A mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C08B00C extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C08B00E cmp/eq #imm,r0 */
	{ u32 c_ = !T; r6 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08B018u, 5); goto L_0C08B018; } goto L_0C08B014; }  /* 0C08B010 bf/s */
L_0C08B014: BLKS(0x0C08B014u);
	{ IF(0x0C08B016u); ; /* slot nop */ UPD(0x0C08B220u, 4); goto L_0C08B220; }  /* 0C08B014 bra */
L_0C08B018: BLKS(0x0C08B018u);
	T = (s32)r0 > (s32)r6;  /* 0C08B018 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C08B022u, 4); goto L_0C08B022; } goto L_0C08B01E; }  /* 0C08B01A bf/s */
L_0C08B01E: BLKS(0x0C08B01Eu);
	{ IF(0x0C08B020u); ; /* slot nop */ UPD(0x0C08B1F0u, 4); goto L_0C08B1F0; }  /* 0C08B01E bra */
L_0C08B022: BLKS(0x0C08B022u);
	T = (r0 & r0) == 0;  /* 0C08B022 tst Rm,Rn */
	if (!T) { UPD(0x0C08B02Cu, 4); goto L_0C08B02C; }  /* 0C08B024 bf */
L_0C08B026: BLKS(0x0C08B026u);
	r9 = R32(r8 + 0x24u); UPD(0x0C08B028u, 1);  /* 0C08B026 mov.l @(disp,Rm),Rn */
	{ IF(0x0C08B02Au); ; /* slot nop */ UPD(0x0C08B180u, 3); goto L_0C08B180; }  /* 0C08B028 bra */
L_0C08B02C: BLKS(0x0C08B02Cu);
	r3 = 0xB4u; UPD(0x0C08B02Eu, 1);  /* 0C08B02C mov.w @(disp,pc),Rn */
	IF(0x0C08B02Eu); MACL = r11 * r3;  /* 0C08B02E mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C08B032u, 3);  /* 0C08B030 mov.l @(disp,pc),Rn */
	IF(0x0C08B032u); r10 = MACL;  /* 0C08B032 sts macl,Rn */
	r8 = 0x8Au; UPD(0x0C08B036u, 2);  /* 0C08B034 mov.w @(disp,pc),Rn */
	r10 += r2;  /* 0C08B036 add Rm,Rn */
	r12 = 0x8Cu; UPD(0x0C08B03Au, 2);  /* 0C08B038 mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C08B03A add Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C08B03Eu, 2);  /* 0C08B03C mov.l @(disp,pc),Rn */
	r12 += r10;  /* 0C08B03E add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C08B042u, 2);  /* 0C08B040 mov.w @Rm,Rn */
	IF(0x0C08B042u); { u32 t_ = r9; PR = 0x0C08B046u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08B046u); }  /* 0C08B042 jsr @Rn */
L_0C08B046: BLKS(0x0C08B046u);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C08B048u, 1);  /* 0C08B046 mov.w @Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C08B04Au, 1);  /* 0C08B048 mov.l @(disp,pc),Rn */
	W32(r10 + 0x2Cu, r0); UPD(0x0C08B04Cu, 1);  /* 0C08B04A mov.l Rm,@(disp,Rn) */
	IF(0x0C08B04Cu); { u32 t_ = r8; PR = 0x0C08B050u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08B050u); }  /* 0C08B04C jsr @Rn */
L_0C08B050: BLKS(0x0C08B050u);
	r6 = R32(r10 + 0x24u); UPD(0x0C08B052u, 1);  /* 0C08B050 mov.l @(disp,Rm),Rn */
	r7 = R32(r10 + 0x2Cu); UPD(0x0C08B054u, 1);  /* 0C08B052 mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C08B054 add Rm,Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C08B058u, 2);  /* 0C08B056 mov.l @(disp,Rm),Rn */
	r3 = 0xFF600000u; UPD(0x0C08B05Au, 1);  /* 0C08B058 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C08B05A add Rm,Rn */
	r3 += r6;  /* 0C08B05C add Rm,Rn */
	W32(r10 + 0x30u, r0); UPD(0x0C08B060u, 3);  /* 0C08B05E mov.l Rm,@(disp,Rn) */
	IF(0x0C08B060u); T = (s32)r3 >= 0;  /* 0C08B060 cmp/pz Rn */
	W32(r10 + 0x24u, r6); UPD(0x0C08B064u, 2);  /* 0C08B062 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r10 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08B06Cu, 3); goto L_0C08B06C; } UPD(0x0C08B068u, 1); goto L_0C08B068; }  /* 0C08B064 bt/s */
L_0C08B068: BLKS(0x0C08B068u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C08B170u, 3); goto L_0C08B170; }  /* 0C08B068 bra */
L_0C08B06C: BLKS(0x0C08B06Cu);
	r5 = 0xD00000u; UPD(0x0C08B06Eu, 1);  /* 0C08B06C mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r5;  /* 0C08B06E cmp/gt Rm,Rn */
	{ u32 c_ = T; r12 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08B08Eu, 4); goto L_0C08B08E; } goto L_0C08B074; }  /* 0C08B070 bt/s */
L_0C08B074: BLKS(0x0C08B074u);
	r6 = 0xC3C4048u; UPD(0x0C08B076u, 2);  /* 0C08B074 mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C08B076 mov Rm,Rn */
	r4 = R32(r6); UPD(0x0C08B07Au, 2);  /* 0C08B078 mov.l @Rm,Rn */
	r0 = 0xFF880000u; UPD(0x0C08B07Cu, 1);  /* 0C08B07A mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C08B07C sub Rm,Rn */
	r2 += r0;  /* 0C08B07E add Rm,Rn */
	IF(0x0C08B080u); T = (s32)r2 >= 0;  /* 0C08B080 cmp/pz Rn */
	if (T) { UPD(0x0C08B086u, 6); goto L_0C08B086; }  /* 0C08B082 bt */
L_0C08B084: BLKS(0x0C08B084u);
	r2 = 0u - r2;  /* 0C08B084 neg Rm,Rn */
	UPD(0x0C08B086u, 1);
L_0C08B086: BLKS(0x0C08B086u);
	r7 = 0xA80000u; UPD(0x0C08B088u, 1);  /* 0C08B086 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C08B088 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08B130u, 4); goto L_0C08B130; } UPD(0x0C08B08Eu, 1); goto L_0C08B08E; }  /* 0C08B08A bf/s */
L_0C08B08E: BLKS(0x0C08B08Eu);
	W32(r10, r12); UPD(0x0C08B090u, 1);  /* 0C08B08E mov.l Rm,@Rn */
	r1 = 0x1u;  /* 0C08B090 mov #imm,Rn */
	UPD(0x0C08B092u, 1);
L_0C08B092: BLKS(0x0C08B092u);
	r0 = (u32)(s32)(s16)r1;  /* 0C08B092 exts.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08B094 tst Rm,Rn */
	if (T) { UPD(0x0C08B0B0u, 5); goto L_0C08B0B0; }  /* 0C08B096 bt */
L_0C08B098: BLKS(0x0C08B098u);
	r15 = r14;  /* 0C08B098 mov Rm,Rn */
	IF(0x0C08B09Au); PR = R32(r15); r15 += 4; UPD(0x0C08B09Cu, 2);  /* 0C08B09A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08B09Eu, 1);  /* 0C08B09C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08B0A0u, 1);  /* 0C08B09E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08B0A2u, 1);  /* 0C08B0A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08B0A4u, 1);  /* 0C08B0A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08B0A6u, 1);  /* 0C08B0A4 mov.l @Rm+,Rn */
	IF(0x0C08B0A6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08B0A6 rts */
L_0C08B0B0: BLKS(0x0C08B0B0u);
	r9 = 0xC0BC1B0u; UPD(0x0C08B0B2u, 1);  /* 0C08B0B0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C08B0B2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08B0B4 mov #imm,Rn */
	IF(0x0C08B0B6u); { u32 t_ = r9; PR = 0x0C08B0BAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08B0BAu); }  /* 0C08B0B6 jsr @Rn */
L_0C08B0BA: BLKS(0x0C08B0BAu);
	T = (r0 & r0) == 0;  /* 0C08B0BA tst Rm,Rn */
	if (T) { UPD(0x0C08B098u, 4); goto L_0C08B098; }  /* 0C08B0BC bt */
L_0C08B0BE: BLKS(0x0C08B0BEu);
	r2 = 0xB4u; UPD(0x0C08B0C0u, 1);  /* 0C08B0BE mov.w @(disp,pc),Rn */
	IF(0x0C08B0C0u); MACL = r11 * r2;  /* 0C08B0C0 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C08B0C4u, 3);  /* 0C08B0C2 mov.l @(disp,pc),Rn */
	IF(0x0C08B0C4u); r12 = MACL;  /* 0C08B0C4 sts macl,Rn */
	r12 += r5;  /* 0C08B0C6 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C08B0CAu, 3);  /* 0C08B0C8 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C08B0CA mov Rm,Rn */
	r8 = 0xC0BBF10u; UPD(0x0C08B0CEu, 2);  /* 0C08B0CC mov.l @(disp,pc),Rn */
	IF(0x0C08B0CEu); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08B0D0u, 1);  /* 0C08B0CE mov.b @(r0,Rm),Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C08B0D2u, 1);  /* 0C08B0D0 mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08B0D2 extu.b Rm,Rn */
	IF(0x0C08B0D4u); { u32 t_ = r8; PR = 0x0C08B0D8u; r5 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08B0D8u); }  /* 0C08B0D4 jsr @Rn */
L_0C08B0D8: BLKS(0x0C08B0D8u);
	T = (r0 & r0) == 0;  /* 0C08B0D8 tst Rm,Rn */
	if (T) { UPD(0x0C08B098u, 4); goto L_0C08B098; }  /* 0C08B0DA bt */
L_0C08B0DC: BLKS(0x0C08B0DCu);
	r0 = r12;  /* 0C08B0DC mov Rm,Rn */
	r7 = 0x86u; UPD(0x0C08B0E0u, 2);  /* 0C08B0DE mov.w @(disp,pc),Rn */
	r8 = 0xC069B20u; UPD(0x0C08B0E2u, 1);  /* 0C08B0E0 mov.l @(disp,pc),Rn */
	IF(0x0C08B0E2u); r9 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C08B0E4u, 1);  /* 0C08B0E2 mov.w @(r0,Rm),Rn */
	r10 = 0x100000u; UPD(0x0C08B0E6u, 1);  /* 0C08B0E4 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C08B0E6 mov Rm,Rn */
	IF(0x0C08B0E8u); { u32 t_ = r8; PR = 0x0C08B0ECu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08B0ECu); }  /* 0C08B0E8 jsr @Rn */
L_0C08B0EC: BLKS(0x0C08B0ECu);
	r5 = r10;  /* 0C08B0EC mov Rm,Rn */
	r8 = R32(r12 + 0x24u); UPD(0x0C08B0F0u, 2);  /* 0C08B0EE mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C08B0F0 mov Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C08B0F4u, 2);  /* 0C08B0F2 mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C08B0F4 add Rm,Rn */
	r6 = 0xFFFC0000u; UPD(0x0C08B0F8u, 2);  /* 0C08B0F6 mov.l @(disp,pc),Rn */
	IF(0x0C08B0F8u); { u32 t_ = r10; PR = 0x0C08B0FCu; r8 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08B0FCu); }  /* 0C08B0F8 jsr @Rn */
L_0C08B0FC: BLKS(0x0C08B0FCu);
	r6 = R32(r12 + 0x28u); UPD(0x0C08B0FEu, 1);  /* 0C08B0FC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08B0FE add #imm,Rn */
	r4 = 0x20000u; UPD(0x0C08B102u, 2);  /* 0C08B100 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C08B102 add Rm,Rn */
	r12 = 0xC0BA480u; UPD(0x0C08B106u, 2);  /* 0C08B104 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C08B106 mov Rm,Rn */
	W32(r15, r4); UPD(0x0C08B10Au, 2);  /* 0C08B108 mov.l Rm,@Rn */
	r7 = r9;  /* 0C08B10A mov Rm,Rn */
	IF(0x0C08B10Cu); { u32 t_ = r12; PR = 0x0C08B110u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C08B110u); }  /* 0C08B10C jsr @Rn */
L_0C08B110: BLKS(0x0C08B110u);
	r1 = 0xC069B90u; UPD(0x0C08B112u, 1);  /* 0C08B110 mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C08B112 add #imm,Rn */
	r4 = r11;  /* 0C08B114 mov Rm,Rn */
	UPD(0x0C08B116u, 2);
L_0C08B116: BLKS(0x0C08B116u);
	r15 = r14;  /* 0C08B116 mov Rm,Rn */
	IF(0x0C08B118u); PR = R32(r15); r15 += 4; UPD(0x0C08B11Au, 2);  /* 0C08B118 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08B11Cu, 1);  /* 0C08B11A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08B11Eu, 1);  /* 0C08B11C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08B120u, 1);  /* 0C08B11E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08B122u, 1);  /* 0C08B120 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08B124u, 1);  /* 0C08B122 mov.l @Rm+,Rn */
	IF(0x0C08B124u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C069B90u: TAIL(blk_f_0C069B90); case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C08B124 jmp @Rn */
L_0C08B130: BLKS(0x0C08B130u);
	r8 = 0xC069BF0u; UPD(0x0C08B132u, 1);  /* 0C08B130 mov.l @(disp,pc),Rn */
	r12 = 0xC068F00u; UPD(0x0C08B134u, 1);  /* 0C08B132 mov.l @(disp,pc),Rn */
	IF(0x0C08B134u); { u32 t_ = r8; PR = 0x0C08B138u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08B138u); }  /* 0C08B134 jsr @Rn */
L_0C08B138: BLKS(0x0C08B138u);
	r5 = 0x4u;  /* 0C08B138 mov #imm,Rn */
	IF(0x0C08B13Au); { u32 t_ = r12; PR = 0x0C08B13Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08B13Eu); }  /* 0C08B13A jsr @Rn */
L_0C08B13E: BLKS(0x0C08B13Eu);
	r2 = 0x86u; UPD(0x0C08B140u, 1);  /* 0C08B13E mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C08B140 mov Rm,Rn */
	IF(0x0C08B142u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08B144u, 2);  /* 0C08B142 mov.w @(r0,Rm),Rn */
	r5 = 0x1Fu;  /* 0C08B144 mov #imm,Rn */
	r9 = 0x9Du; UPD(0x0C08B148u, 2);  /* 0C08B146 mov.w @(disp,pc),Rn */
	r3 += 0x8u;  /* 0C08B148 add #imm,Rn */
	IF(0x0C08B14Au); r3 >>= 2;  /* 0C08B14A shlr2 Rn */
	IF(0x0C08B14Cu); r8 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08B14Eu, 3);  /* 0C08B14C mov.b @(r0,Rm),Rn */
	IF(0x0C08B14Eu); r3 >>= 2;  /* 0C08B14E shlr2 Rn */
	r3 &= r5;  /* 0C08B150 and Rm,Rn */
	r0 = r8;  /* 0C08B152 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C08B154 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08B156 tst Rm,Rn */
	{ u32 c_ = !T; W32(r10 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08B166u, 8); goto L_0C08B166; } UPD(0x0C08B15Cu, 1); goto L_0C08B15C; }  /* 0C08B158 bf/s */
L_0C08B15C: BLKS(0x0C08B15Cu);
	r0 = R32(r10 + 0xCu); UPD(0x0C08B15Eu, 1);  /* 0C08B15C mov.l @(disp,Rm),Rn */
	r6 = 0xC19F7FCu; UPD(0x0C08B160u, 1);  /* 0C08B15E mov.l @(disp,pc),Rn */
	IF(0x0C08B160u); r0 <<= 2;  /* 0C08B160 shll2 Rn */
	IF(0x0C08B162u); r4 = R32(r0 + r6); UPD(0x0C08B164u, 2);  /* 0C08B162 mov.l @(r0,Rm),Rn */
	W32(r10 + 0xCu, r4); UPD(0x0C08B166u, 1);  /* 0C08B164 mov.l Rm,@(disp,Rn) */
L_0C08B166: BLKS(0x0C08B166u);
	r10 = 0xC0A8B10u; UPD(0x0C08B168u, 1);  /* 0C08B166 mov.l @(disp,pc),Rn */
	IF(0x0C08B168u); { u32 t_ = r10; PR = 0x0C08B16Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C08B16Cu); }  /* 0C08B168 jsr @Rn */
L_0C08B16C: BLKS(0x0C08B16Cu);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C08B092u, 3); goto L_0C08B092; }  /* 0C08B16C bra */
L_0C08B170: BLKS(0x0C08B170u);
	{ IF(0x0C08B172u); ; /* slot nop */ UPD(0x0C08B06Cu, 3); goto L_0C08B06C; }  /* 0C08B170 bra */
L_0C08B180: BLKS(0x0C08B180u);
	r8 = 0x11FFFFFu; UPD(0x0C08B182u, 1);  /* 0C08B180 mov.l @(disp,pc),Rn */
	T = (s32)r9 > (s32)r8;  /* 0C08B182 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C08B188u, 4); goto L_0C08B188; }  /* 0C08B184 bt */
L_0C08B186: BLKS(0x0C08B186u);
	W8(r7, r6); UPD(0x0C08B188u, 1);  /* 0C08B186 mov.b Rm,@Rn */
L_0C08B188: BLKS(0x0C08B188u);
	{ IF(0x0C08B18Au); ; /* slot nop */ UPD(0x0C08B02Cu, 3); goto L_0C08B02C; }  /* 0C08B188 bra */
L_0C08B1F0: BLKS(0x0C08B1F0u);
	if (!T) { UPD(0x0C08B188u, 3); goto L_0C08B188; }  /* 0C08B1F0 bf */
L_0C08B1F2: BLKS(0x0C08B1F2u);
	r4 = 0x88u; UPD(0x0C08B1F4u, 1);  /* 0C08B1F2 mov.w @(disp,pc),Rn */
	r9 = 0x98u; UPD(0x0C08B1F6u, 1);  /* 0C08B1F4 mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C08B1F6 add Rm,Rn */
	r10 = r4;  /* 0C08B1F8 mov Rm,Rn */
	r10 += 0x2u;  /* 0C08B1FA add #imm,Rn */
	r9 += r8;  /* 0C08B1FC add Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r10); UPD(0x0C08B200u, 5);  /* 0C08B1FE mov.w @Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r9); UPD(0x0C08B202u, 1);  /* 0C08B200 mov.b @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r4); UPD(0x0C08B204u, 1);  /* 0C08B202 mov.w @Rm,Rn */
	r8 += 0x1u;  /* 0C08B204 add #imm,Rn */
	r12 += r1;  /* 0C08B206 add Rm,Rn */
	r0 = r8 & 0xFF;  /* 0C08B208 extu.b Rm,Rn */
	W16(r10, r12); UPD(0x0C08B20Cu, 4);  /* 0C08B20A mov.w Rm,@Rn */
	T = r0 == 0x3Cu;  /* 0C08B20C cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r9, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08B188u, 4); goto L_0C08B188; } UPD(0x0C08B212u, 1); goto L_0C08B212; }  /* 0C08B20E bf/s */
L_0C08B212: BLKS(0x0C08B212u);
	{ W8(r7, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C08B188u, 3); goto L_0C08B188; }  /* 0C08B212 bra */
L_0C08B220: BLKS(0x0C08B220u);
	r9 = 0x99u; UPD(0x0C08B222u, 1);  /* 0C08B220 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C08B222 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C08B226u, 2);  /* 0C08B224 mov.b @Rm,Rn */
	T = r0 == 0x10u;  /* 0C08B226 cmp/eq #imm,r0 */
	{ u32 c_ = T; r4 = 0xFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08B260u, 4); goto L_0C08B260; } goto L_0C08B22C; }  /* 0C08B228 bt/s */
L_0C08B22C: BLKS(0x0C08B22Cu);
	r10 = 0xC062780u; UPD(0x0C08B22Eu, 2);  /* 0C08B22C mov.l @(disp,pc),Rn */
	r7 = 0x88u; UPD(0x0C08B230u, 1);  /* 0C08B22E mov.w @(disp,pc),Rn */
	IF(0x0C08B230u); { u32 t_ = r10; PR = 0x0C08B234u; r8 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08B234u); }  /* 0C08B230 jsr @Rn */
L_0C08B234: BLKS(0x0C08B234u);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C08B236u, 1);  /* 0C08B234 mov.b @Rm,Rn */
	r0 += 0xFFFFFFF8u;  /* 0C08B236 add #imm,Rn */
	r6 += 0x1u;  /* 0C08B238 add #imm,Rn */
	W16(r8, r0); UPD(0x0C08B23Cu, 3);  /* 0C08B23A mov.w Rm,@Rn */
	W8(r9, r6); UPD(0x0C08B23Eu, 1);  /* 0C08B23C mov.b Rm,@Rn */
L_0C08B23E: BLKS(0x0C08B23Eu);
	r0 = 0xB4u; UPD(0x0C08B240u, 1);  /* 0C08B23E mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C08B240 mov #imm,Rn */
	IF(0x0C08B242u); MACL = r11 * r0;  /* 0C08B242 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C08B246u, 4);  /* 0C08B244 mov.l @(disp,pc),Rn */
	r2 = 0x2u;  /* 0C08B246 mov #imm,Rn */
	r4 = 0x98u; UPD(0x0C08B24Au, 2);  /* 0C08B248 mov.w @(disp,pc),Rn */
	IF(0x0C08B24Au); r0 = MACL;  /* 0C08B24A sts macl,Rn */
	r0 += r5;  /* 0C08B24C add Rm,Rn */
	IF(0x0C08B24Eu); W8(r0 + r4, r3); UPD(0x0C08B250u, 3);  /* 0C08B24E mov.b Rm,@(r0,Rn) */
	r4 += 0x7u;  /* 0C08B250 add #imm,Rn */
	{ IF(0x0C08B254u); W8(r0 + r4, r2); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C08B02Cu, 4); goto L_0C08B02C; }  /* 0C08B252 bra */
L_0C08B260: BLKS(0x0C08B260u);
	r0 = 0x88u; UPD(0x0C08B262u, 1);  /* 0C08B260 mov.w @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C08B262 mov #imm,Rn */
	{ IF(0x0C08B266u); W16(r0 + r8, r12); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C08B23Eu, 4); goto L_0C08B23E; }  /* 0C08B264 bra */
L_0C08B270: BLKS(0x0C08B270u);
	r12 = 0xC0A8B50u; UPD(0x0C08B272u, 1);  /* 0C08B270 mov.l @(disp,pc),Rn */
	IF(0x0C08B272u); { u32 t_ = r12; PR = 0x0C08B276u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C08B276u); }  /* 0C08B272 jsr @Rn */
L_0C08B276: BLKS(0x0C08B276u);
	IF(0x0C08B276u); T = (s32)r0 >= 0;  /* 0C08B276 cmp/pz Rn */
	if (!T) { UPD(0x0C08B2A0u, 4); goto L_0C08B2A0; }  /* 0C08B278 bf */
L_0C08B27A: BLKS(0x0C08B27Au);
	IF(0x0C08B27Au); MACL = r0 * r9;  /* 0C08B27A mul.l Rm,Rn */
	r1 = 0x40000u; UPD(0x0C08B27Eu, 3);  /* 0C08B27C mov.l @(disp,pc),Rn */
	IF(0x0C08B27Eu); r4 = MACL;  /* 0C08B27E sts macl,Rn */
	r4 += r10;  /* 0C08B280 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C08B284u, 3);  /* 0C08B282 mov.l @(disp,Rm),Rn */
	r3 = R32(r4 + 0x24u); UPD(0x0C08B286u, 1);  /* 0C08B284 mov.l @(disp,Rm),Rn */
	r0 += 0x3u;  /* 0C08B286 add #imm,Rn */
	r2 = R32(r4 + 0x28u); UPD(0x0C08B28Au, 2);  /* 0C08B288 mov.l @(disp,Rm),Rn */
	r3 += r1;  /* 0C08B28A add Rm,Rn */
	r0 &= 0x7u;  /* 0C08B28C and #imm,r0 */
	W32(r8 + 0x24u, r3); UPD(0x0C08B290u, 3);  /* 0C08B28E mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C08B290 mov Rm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C08B294u, 2);  /* 0C08B292 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A8AE0u; UPD(0x0C08B296u, 1);  /* 0C08B294 mov.l @(disp,pc),Rn */
	{ W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08B116u, 3); goto L_0C08B116; }  /* 0C08B296 bra */
L_0C08B2A0: BLKS(0x0C08B2A0u);
	r0 = 0x0u;  /* 0C08B2A0 mov #imm,Rn */
	{ W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C08B098u, 4); goto L_0C08B098; }  /* 0C08B2A2 bra */
}

void blk_f_0C08B2D0(sh3_t *c)
{
	LOCALS;
L_0C08B2D0: BLKS(0x0C08B2D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08B2D2u, 1);  /* 0C08B2D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08B2D4u, 1);  /* 0C08B2D2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08B2D6u, 1);  /* 0C08B2D4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08B2D8u, 1);  /* 0C08B2D6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08B2DAu, 1);  /* 0C08B2D8 mov.l Rm,@-Rn */
	r9 = 0xB4u; UPD(0x0C08B2DCu, 1);  /* 0C08B2DA mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C08B2DC exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08B2E0u, 2);  /* 0C08B2DE mov.l Rm,@-Rn */
	IF(0x0C08B2E0u); MACL = r12 * r9;  /* 0C08B2E0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08B2E4u, 3);  /* 0C08B2E2 mov.l Rm,@-Rn */
	r10 = 0xC286578u; UPD(0x0C08B2E6u, 1);  /* 0C08B2E4 mov.l @(disp,pc),Rn */
	IF(0x0C08B2E6u); r8 = MACL;  /* 0C08B2E6 sts macl,Rn */
	IF(0x0C08B2E8u); r15 -= 4; W32(r15, PR); UPD(0x0C08B2EAu, 2);  /* 0C08B2E8 sts.l pr,@-Rn */
	r8 += r10;  /* 0C08B2EA add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C08B2EEu, 2);  /* 0C08B2EC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08B2EE add #imm,Rn */
	T = r0 == 0x20u;  /* 0C08B2F0 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08B2FAu, 5); goto L_0C08B2FA; } goto L_0C08B2F6; }  /* 0C08B2F2 bf/s */
L_0C08B2F6: BLKS(0x0C08B2F6u);
	{ IF(0x0C08B2F8u); ; /* slot nop */ UPD(0x0C08B590u, 4); goto L_0C08B590; }  /* 0C08B2F6 bra */
L_0C08B2FA: BLKS(0x0C08B2FAu);
	r7 = 0x9Fu; UPD(0x0C08B2FCu, 1);  /* 0C08B2FA mov.w @(disp,pc),Rn */
	r7 += r8;  /* 0C08B2FC add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C08B300u, 2);  /* 0C08B2FE mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C08B300 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C08B302 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r6 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08B30Cu, 5); goto L_0C08B30C; } goto L_0C08B308; }  /* 0C08B304 bf/s */
L_0C08B308: BLKS(0x0C08B308u);
	{ IF(0x0C08B30Au); ; /* slot nop */ UPD(0x0C08B540u, 4); goto L_0C08B540; }  /* 0C08B308 bra */
L_0C08B30C: BLKS(0x0C08B30Cu);
	T = (s32)r0 > (s32)r6;  /* 0C08B30C cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C08B316u, 4); goto L_0C08B316; } goto L_0C08B312; }  /* 0C08B30E bf/s */
L_0C08B312: BLKS(0x0C08B312u);
	{ IF(0x0C08B314u); ; /* slot nop */ UPD(0x0C08B510u, 4); goto L_0C08B510; }  /* 0C08B312 bra */
L_0C08B316: BLKS(0x0C08B316u);
	T = (r0 & r0) == 0;  /* 0C08B316 tst Rm,Rn */
	if (!T) { UPD(0x0C08B320u, 4); goto L_0C08B320; }  /* 0C08B318 bf */
L_0C08B31A: BLKS(0x0C08B31Au);
	r9 = R32(r8 + 0x24u); UPD(0x0C08B31Cu, 1);  /* 0C08B31A mov.l @(disp,Rm),Rn */
	{ IF(0x0C08B31Eu); ; /* slot nop */ UPD(0x0C08B500u, 3); goto L_0C08B500; }  /* 0C08B31C bra */
L_0C08B320: BLKS(0x0C08B320u);
	r2 = 0xB4u; UPD(0x0C08B322u, 1);  /* 0C08B320 mov.w @(disp,pc),Rn */
	IF(0x0C08B322u); MACL = r12 * r2;  /* 0C08B322 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08B326u, 3);  /* 0C08B324 mov.l @(disp,pc),Rn */
	IF(0x0C08B326u); r10 = MACL;  /* 0C08B326 sts macl,Rn */
	r13 = 0x8Au; UPD(0x0C08B32Au, 2);  /* 0C08B328 mov.w @(disp,pc),Rn */
	r10 += r7;  /* 0C08B32A add Rm,Rn */
	r11 = 0x8Cu; UPD(0x0C08B32Eu, 2);  /* 0C08B32C mov.w @(disp,pc),Rn */
	r13 += r10;  /* 0C08B32E add Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C08B332u, 2);  /* 0C08B330 mov.l @(disp,pc),Rn */
	r11 += r10;  /* 0C08B332 add Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C08B336u, 2);  /* 0C08B334 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r13); UPD(0x0C08B338u, 1);  /* 0C08B336 mov.w @Rm,Rn */
	IF(0x0C08B338u); { u32 t_ = r8; PR = 0x0C08B33Cu; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08B33Cu); }  /* 0C08B338 jsr @Rn */
L_0C08B33C: BLKS(0x0C08B33Cu);
	W32(r10 + 0x2Cu, r0); UPD(0x0C08B33Eu, 1);  /* 0C08B33C mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r13); UPD(0x0C08B340u, 1);  /* 0C08B33E mov.w @Rm,Rn */
	IF(0x0C08B340u); { u32 t_ = r9; PR = 0x0C08B344u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08B344u); }  /* 0C08B340 jsr @Rn */
L_0C08B344: BLKS(0x0C08B344u);
	r8 = R32(r10 + 0x24u); UPD(0x0C08B346u, 1);  /* 0C08B344 mov.l @(disp,Rm),Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C08B348u, 1);  /* 0C08B346 mov.l @(disp,Rm),Rn */
	r6 = R32(r10 + 0x2Cu); UPD(0x0C08B34Au, 1);  /* 0C08B348 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C08B34A add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C08B34Eu, 2);  /* 0C08B34C mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C08B34E add Rm,Rn */
	r3 += r8;  /* 0C08B350 add Rm,Rn */
	W32(r10 + 0x30u, r0); UPD(0x0C08B354u, 3);  /* 0C08B352 mov.l Rm,@(disp,Rn) */
	IF(0x0C08B354u); T = (s32)r3 >= 0;  /* 0C08B354 cmp/pz Rn */
	W32(r10 + 0x24u, r8); UPD(0x0C08B358u, 2);  /* 0C08B356 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r10 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08B360u, 3); goto L_0C08B360; } UPD(0x0C08B35Cu, 1); goto L_0C08B35C; }  /* 0C08B358 bt/s */
L_0C08B35C: BLKS(0x0C08B35Cu);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C08B4F0u, 3); goto L_0C08B4F0; }  /* 0C08B35C bra */
L_0C08B360: BLKS(0x0C08B360u);
	r4 = 0xD00000u; UPD(0x0C08B362u, 1);  /* 0C08B360 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r4;  /* 0C08B362 cmp/gt Rm,Rn */
	{ u32 c_ = T; r9 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08B386u, 4); goto L_0C08B386; } goto L_0C08B368; }  /* 0C08B364 bt/s */
L_0C08B368: BLKS(0x0C08B368u);
	r5 = 0xC3C4048u; UPD(0x0C08B36Au, 2);  /* 0C08B368 mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C08B36A mov Rm,Rn */
	r0 = R32(r5); UPD(0x0C08B36Eu, 2);  /* 0C08B36C mov.l @Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C08B370u, 1);  /* 0C08B36E mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C08B370 sub Rm,Rn */
	r2 += r3;  /* 0C08B372 add Rm,Rn */
	IF(0x0C08B374u); T = (s32)r2 >= 0;  /* 0C08B374 cmp/pz Rn */
	if (T) { UPD(0x0C08B37Au, 6); goto L_0C08B37A; }  /* 0C08B376 bt */
L_0C08B378: BLKS(0x0C08B378u);
	r2 = 0u - r2;  /* 0C08B378 neg Rm,Rn */
	UPD(0x0C08B37Au, 1);
L_0C08B37A: BLKS(0x0C08B37Au);
	r6 = 0xA80000u; UPD(0x0C08B37Cu, 1);  /* 0C08B37A mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C08B37C cmp/gt Rm,Rn */
	{ u32 c_ = T; r9 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08B386u, 4); goto L_0C08B386; } goto L_0C08B382; }  /* 0C08B37E bt/s */
L_0C08B382: BLKS(0x0C08B382u);
	{ IF(0x0C08B384u); ; /* slot nop */ UPD(0x0C08B4B0u, 4); goto L_0C08B4B0; }  /* 0C08B382 bra */
L_0C08B386: BLKS(0x0C08B386u);
	W32(r10, r9); UPD(0x0C08B388u, 1);  /* 0C08B386 mov.l Rm,@Rn */
	r1 = 0x1u;  /* 0C08B388 mov #imm,Rn */
	UPD(0x0C08B38Au, 1);
L_0C08B38A: BLKS(0x0C08B38Au);
	r0 = (u32)(s32)(s16)r1;  /* 0C08B38A exts.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08B38C tst Rm,Rn */
	if (T) { UPD(0x0C08B3B0u, 5); goto L_0C08B3B0; }  /* 0C08B38E bt */
L_0C08B390: BLKS(0x0C08B390u);
	r14 += 0x4u;  /* 0C08B390 add #imm,Rn */
	r15 = r14;  /* 0C08B392 mov Rm,Rn */
	IF(0x0C08B394u); PR = R32(r15); r15 += 4; UPD(0x0C08B396u, 3);  /* 0C08B394 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08B398u, 1);  /* 0C08B396 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08B39Au, 1);  /* 0C08B398 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08B39Cu, 1);  /* 0C08B39A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08B39Eu, 1);  /* 0C08B39C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08B3A0u, 1);  /* 0C08B39E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08B3A2u, 1);  /* 0C08B3A0 mov.l @Rm+,Rn */
	IF(0x0C08B3A2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08B3A2 rts */
L_0C08B3B0: BLKS(0x0C08B3B0u);
	r13 = 0xC0BC1B0u; UPD(0x0C08B3B2u, 1);  /* 0C08B3B0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C08B3B2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08B3B4 mov #imm,Rn */
	IF(0x0C08B3B6u); { u32 t_ = r13; PR = 0x0C08B3BAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08B3BAu); }  /* 0C08B3B6 jsr @Rn */
L_0C08B3BA: BLKS(0x0C08B3BAu);
	T = (r0 & r0) == 0;  /* 0C08B3BA tst Rm,Rn */
	if (T) { UPD(0x0C08B390u, 4); goto L_0C08B390; }  /* 0C08B3BC bt */
L_0C08B3BE: BLKS(0x0C08B3BEu);
	r8 = 0xB4u; UPD(0x0C08B3C0u, 1);  /* 0C08B3BE mov.w @(disp,pc),Rn */
	IF(0x0C08B3C0u); MACL = r12 * r8;  /* 0C08B3C0 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08B3C4u, 3);  /* 0C08B3C2 mov.l @(disp,pc),Rn */
	IF(0x0C08B3C4u); r8 = MACL;  /* 0C08B3C4 sts macl,Rn */
	r8 += r7;  /* 0C08B3C6 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C08B3CAu, 3);  /* 0C08B3C8 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08B3CA mov Rm,Rn */
	IF(0x0C08B3CCu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08B3CEu, 2);  /* 0C08B3CC mov.b @(r0,Rm),Rn */
	r9 = 0xC0BBF10u; UPD(0x0C08B3D0u, 1);  /* 0C08B3CE mov.l @(disp,pc),Rn */
	r6 = r5 & 0xFF;  /* 0C08B3D0 extu.b Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C08B3D4u, 2);  /* 0C08B3D2 mov.l @(disp,Rm),Rn */
	IF(0x0C08B3D4u); { u32 t_ = r9; PR = 0x0C08B3D8u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08B3D8u); }  /* 0C08B3D4 jsr @Rn */
L_0C08B3D8: BLKS(0x0C08B3D8u);
	T = (r0 & r0) == 0;  /* 0C08B3D8 tst Rm,Rn */
	if (T) { UPD(0x0C08B390u, 4); goto L_0C08B390; }  /* 0C08B3DA bt */
L_0C08B3DC: BLKS(0x0C08B3DCu);
	r0 = r8;  /* 0C08B3DC mov Rm,Rn */
	r2 = 0x86u; UPD(0x0C08B3E0u, 2);  /* 0C08B3DE mov.w @(disp,pc),Rn */
	IF(0x0C08B3E0u); r11 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08B3E2u, 1);  /* 0C08B3E0 mov.w @(r0,Rm),Rn */
	r13 = 0x0u;  /* 0C08B3E2 mov #imm,Rn */
	W32(r14, r8); UPD(0x0C08B3E6u, 2);  /* 0C08B3E4 mov.l Rm,@Rn */
	IF(0x0C08B3E6u); ;  /* 0C08B3E6 nop */
	UPD(0x0C08B3E8u, 1);
L_0C08B3E8: BLKS(0x0C08B3E8u);
	r10 = 0xC069B20u; UPD(0x0C08B3EAu, 1);  /* 0C08B3E8 mov.l @(disp,pc),Rn */
	r5 = 0x120000u; UPD(0x0C08B3ECu, 1);  /* 0C08B3EA mov.l @(disp,pc),Rn */
	IF(0x0C08B3ECu); { u32 t_ = r10; PR = 0x0C08B3F0u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08B3F0u); }  /* 0C08B3EC jsr @Rn */
L_0C08B3F0: BLKS(0x0C08B3F0u);
	r2 = 0xC19F810u; UPD(0x0C08B3F2u, 1);  /* 0C08B3F0 mov.l @(disp,pc),Rn */
	r9 = r13;  /* 0C08B3F2 mov Rm,Rn */
	r3 = 0xC069AF0u; UPD(0x0C08B3F6u, 2);  /* 0C08B3F4 mov.l @(disp,pc),Rn */
	IF(0x0C08B3F6u); r9 <<= 2;  /* 0C08B3F6 shll2 Rn */
	r9 += r2;  /* 0C08B3F8 add Rm,Rn */
	r5 = R32(r9); UPD(0x0C08B3FCu, 3);  /* 0C08B3FA mov.l @Rm,Rn */
	r10 = r0;  /* 0C08B3FC mov Rm,Rn */
	IF(0x0C08B3FEu); { u32 t_ = r3; PR = 0x0C08B402u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08B402u); }  /* 0C08B3FE jsr @Rn */
L_0C08B402: BLKS(0x0C08B402u);
	r8 = R32(r14); UPD(0x0C08B404u, 1);  /* 0C08B402 mov.l @Rm,Rn */
	r10 -= r0;  /* 0C08B404 sub Rm,Rn */
	r6 = 0xC069AF0u; UPD(0x0C08B408u, 2);  /* 0C08B406 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C08B408 mov Rm,Rn */
	r7 = R32(r8 + 0x24u); UPD(0x0C08B40Cu, 2);  /* 0C08B40A mov.l @(disp,Rm),Rn */
	r5 = 0x120000u; UPD(0x0C08B40Eu, 1);  /* 0C08B40C mov.l @(disp,pc),Rn */
	IF(0x0C08B40Eu); { u32 t_ = r6; PR = 0x0C08B412u; r10 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08B412u); }  /* 0C08B40E jsr @Rn */
L_0C08B412: BLKS(0x0C08B412u);
	r5 = R32(r14); UPD(0x0C08B414u, 1);  /* 0C08B412 mov.l @Rm,Rn */
	r4 = r11;  /* 0C08B414 mov Rm,Rn */
	r8 = R32(r5 + 0x28u); UPD(0x0C08B418u, 2);  /* 0C08B416 mov.l @(disp,Rm),Rn */
	r5 = R32(r9); UPD(0x0C08B41Au, 1);  /* 0C08B418 mov.l @Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C08B41Cu, 1);  /* 0C08B41A mov.l @(disp,pc),Rn */
	IF(0x0C08B41Cu); { u32 t_ = r9; PR = 0x0C08B420u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08B420u); }  /* 0C08B41C jsr @Rn */
L_0C08B420: BLKS(0x0C08B420u);
	r8 += r0;  /* 0C08B420 add Rm,Rn */
	r1 = 0xC0BA480u; UPD(0x0C08B424u, 2);  /* 0C08B422 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08B424 add #imm,Rn */
	r0 = 0x20000u; UPD(0x0C08B428u, 2);  /* 0C08B426 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C08B428 mov #imm,Rn */
	W32(r15, r0); UPD(0x0C08B42Cu, 2);  /* 0C08B42A mov.l Rm,@Rn */
	r5 = r10;  /* 0C08B42C mov Rm,Rn */
	r6 = r8;  /* 0C08B42E mov Rm,Rn */
	IF(0x0C08B430u); { u32 t_ = r1; PR = 0x0C08B434u; r7 = r11; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C08B434u); }  /* 0C08B430 jsr @Rn */
L_0C08B434: BLKS(0x0C08B434u);
	r3 = r13;  /* 0C08B434 mov Rm,Rn */
	r3 += 0x1u;  /* 0C08B436 add #imm,Rn */
	r13 = (u32)(s32)(s16)r3;  /* 0C08B438 exts.w Rm,Rn */
	r4 = 0x1u;  /* 0C08B43A mov #imm,Rn */
	T = (s32)r13 > (s32)r4;  /* 0C08B43C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08B3E8u, 8); goto L_0C08B3E8; } goto L_0C08B442; }  /* 0C08B43E bf/s */
L_0C08B442: BLKS(0x0C08B442u);
	r1 = 0xC069B90u; UPD(0x0C08B444u, 2);  /* 0C08B442 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C08B444 mov Rm,Rn */
	UPD(0x0C08B446u, 1);
L_0C08B446: BLKS(0x0C08B446u);
	r14 += 0x4u;  /* 0C08B446 add #imm,Rn */
	r15 = r14;  /* 0C08B448 mov Rm,Rn */
	IF(0x0C08B44Au); PR = R32(r15); r15 += 4; UPD(0x0C08B44Cu, 3);  /* 0C08B44A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08B44Eu, 1);  /* 0C08B44C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08B450u, 1);  /* 0C08B44E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08B452u, 1);  /* 0C08B450 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08B454u, 1);  /* 0C08B452 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08B456u, 1);  /* 0C08B454 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08B458u, 1);  /* 0C08B456 mov.l @Rm+,Rn */
	IF(0x0C08B458u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C069B90u: TAIL(blk_f_0C069B90); case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C08B458 jmp @Rn */
L_0C08B4B0: BLKS(0x0C08B4B0u);
	r11 = 0xC069BF0u; UPD(0x0C08B4B2u, 1);  /* 0C08B4B0 mov.l @(disp,pc),Rn */
	r9 = 0xC068F00u; UPD(0x0C08B4B4u, 1);  /* 0C08B4B2 mov.l @(disp,pc),Rn */
	IF(0x0C08B4B4u); { u32 t_ = r11; PR = 0x0C08B4B8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08B4B8u); }  /* 0C08B4B4 jsr @Rn */
L_0C08B4B8: BLKS(0x0C08B4B8u);
	r4 = r12;  /* 0C08B4B8 mov Rm,Rn */
	IF(0x0C08B4BAu); { u32 t_ = r9; PR = 0x0C08B4BEu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08B4BEu); }  /* 0C08B4BA jsr @Rn */
L_0C08B4BE: BLKS(0x0C08B4BEu);
	r2 = 0x86u; UPD(0x0C08B4C0u, 1);  /* 0C08B4BE mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C08B4C0 mov Rm,Rn */
	IF(0x0C08B4C2u); r8 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08B4C4u, 2);  /* 0C08B4C2 mov.w @(r0,Rm),Rn */
	r7 = 0x1Fu;  /* 0C08B4C4 mov #imm,Rn */
	r13 = 0x9Du; UPD(0x0C08B4C8u, 2);  /* 0C08B4C6 mov.w @(disp,pc),Rn */
	r8 += 0x8u;  /* 0C08B4C8 add #imm,Rn */
	IF(0x0C08B4CAu); r8 >>= 2;  /* 0C08B4CA shlr2 Rn */
	IF(0x0C08B4CCu); r11 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C08B4CEu, 3);  /* 0C08B4CC mov.b @(r0,Rm),Rn */
	IF(0x0C08B4CEu); r8 >>= 2;  /* 0C08B4CE shlr2 Rn */
	r8 &= r7;  /* 0C08B4D0 and Rm,Rn */
	r0 = r11;  /* 0C08B4D2 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C08B4D4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08B4D6 tst Rm,Rn */
	{ u32 c_ = !T; W32(r10 + 0x8u, r8); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08B4E6u, 8); goto L_0C08B4E6; } UPD(0x0C08B4DCu, 1); goto L_0C08B4DC; }  /* 0C08B4D8 bf/s */
L_0C08B4DC: BLKS(0x0C08B4DCu);
	r0 = R32(r10 + 0xCu); UPD(0x0C08B4DEu, 1);  /* 0C08B4DC mov.l @(disp,Rm),Rn */
	r3 = 0xC19F7FCu; UPD(0x0C08B4E0u, 1);  /* 0C08B4DE mov.l @(disp,pc),Rn */
	IF(0x0C08B4E0u); r0 <<= 2;  /* 0C08B4E0 shll2 Rn */
	IF(0x0C08B4E2u); r4 = R32(r0 + r3); UPD(0x0C08B4E4u, 2);  /* 0C08B4E2 mov.l @(r0,Rm),Rn */
	W32(r10 + 0xCu, r4); UPD(0x0C08B4E6u, 1);  /* 0C08B4E4 mov.l Rm,@(disp,Rn) */
L_0C08B4E6: BLKS(0x0C08B4E6u);
	r10 = 0xC0A8B10u; UPD(0x0C08B4E8u, 1);  /* 0C08B4E6 mov.l @(disp,pc),Rn */
	IF(0x0C08B4E8u); { u32 t_ = r10; PR = 0x0C08B4ECu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C08B4ECu); }  /* 0C08B4E8 jsr @Rn */
L_0C08B4EC: BLKS(0x0C08B4ECu);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C08B38Au, 3); goto L_0C08B38A; }  /* 0C08B4EC bra */
L_0C08B4F0: BLKS(0x0C08B4F0u);
	{ IF(0x0C08B4F2u); ; /* slot nop */ UPD(0x0C08B360u, 3); goto L_0C08B360; }  /* 0C08B4F0 bra */
L_0C08B500: BLKS(0x0C08B500u);
	r8 = 0x11FFFFFu; UPD(0x0C08B502u, 1);  /* 0C08B500 mov.l @(disp,pc),Rn */
	T = (s32)r9 > (s32)r8;  /* 0C08B502 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C08B508u, 4); goto L_0C08B508; }  /* 0C08B504 bt */
L_0C08B506: BLKS(0x0C08B506u);
	W8(r7, r6); UPD(0x0C08B508u, 1);  /* 0C08B506 mov.b Rm,@Rn */
L_0C08B508: BLKS(0x0C08B508u);
	{ IF(0x0C08B50Au); ; /* slot nop */ UPD(0x0C08B320u, 3); goto L_0C08B320; }  /* 0C08B508 bra */
L_0C08B510: BLKS(0x0C08B510u);
	if (!T) { UPD(0x0C08B508u, 3); goto L_0C08B508; }  /* 0C08B510 bf */
L_0C08B512: BLKS(0x0C08B512u);
	r13 = 0x88u; UPD(0x0C08B514u, 1);  /* 0C08B512 mov.w @(disp,pc),Rn */
	r9 = 0x98u; UPD(0x0C08B516u, 1);  /* 0C08B514 mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C08B516 add Rm,Rn */
	r10 = r13;  /* 0C08B518 mov Rm,Rn */
	r10 += 0x2u;  /* 0C08B51A add #imm,Rn */
	r9 += r8;  /* 0C08B51C add Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C08B520u, 5);  /* 0C08B51E mov.w @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C08B522u, 1);  /* 0C08B520 mov.b @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r13); UPD(0x0C08B524u, 1);  /* 0C08B522 mov.w @Rm,Rn */
	r5 += 0x1u;  /* 0C08B524 add #imm,Rn */
	r11 += r1;  /* 0C08B526 add Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C08B528 extu.b Rm,Rn */
	W16(r10, r11); UPD(0x0C08B52Cu, 4);  /* 0C08B52A mov.w Rm,@Rn */
	T = r0 == 0x5Au;  /* 0C08B52C cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r9, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08B508u, 4); goto L_0C08B508; } UPD(0x0C08B532u, 1); goto L_0C08B532; }  /* 0C08B52E bf/s */
L_0C08B532: BLKS(0x0C08B532u);
	{ W8(r7, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C08B508u, 3); goto L_0C08B508; }  /* 0C08B532 bra */
L_0C08B540: BLKS(0x0C08B540u);
	r9 = 0x99u; UPD(0x0C08B542u, 1);  /* 0C08B540 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C08B542 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C08B546u, 2);  /* 0C08B544 mov.b @Rm,Rn */
	T = r0 == 0x8u;  /* 0C08B546 cmp/eq #imm,r0 */
	{ u32 c_ = T; r4 = 0x7u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08B580u, 4); goto L_0C08B580; } goto L_0C08B54C; }  /* 0C08B548 bt/s */
L_0C08B54C: BLKS(0x0C08B54Cu);
	r10 = 0xC062780u; UPD(0x0C08B54Eu, 2);  /* 0C08B54C mov.l @(disp,pc),Rn */
	r7 = 0x88u; UPD(0x0C08B550u, 1);  /* 0C08B54E mov.w @(disp,pc),Rn */
	IF(0x0C08B550u); { u32 t_ = r10; PR = 0x0C08B554u; r8 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08B554u); }  /* 0C08B550 jsr @Rn */
L_0C08B554: BLKS(0x0C08B554u);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C08B556u, 1);  /* 0C08B554 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C08B556 add #imm,Rn */
	r6 += 0x1u;  /* 0C08B558 add #imm,Rn */
	W16(r8, r0); UPD(0x0C08B55Cu, 3);  /* 0C08B55A mov.w Rm,@Rn */
	W8(r9, r6); UPD(0x0C08B55Eu, 1);  /* 0C08B55C mov.b Rm,@Rn */
L_0C08B55E: BLKS(0x0C08B55Eu);
	r0 = 0xB4u; UPD(0x0C08B560u, 1);  /* 0C08B55E mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C08B560 mov #imm,Rn */
	IF(0x0C08B562u); MACL = r12 * r0;  /* 0C08B562 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C08B566u, 4);  /* 0C08B564 mov.l @(disp,pc),Rn */
	r2 = 0x2u;  /* 0C08B566 mov #imm,Rn */
	r13 = 0x98u; UPD(0x0C08B56Au, 2);  /* 0C08B568 mov.w @(disp,pc),Rn */
	IF(0x0C08B56Au); r0 = MACL;  /* 0C08B56A sts macl,Rn */
	r0 += r3;  /* 0C08B56C add Rm,Rn */
	IF(0x0C08B56Eu); W8(r0 + r13, r4); UPD(0x0C08B570u, 3);  /* 0C08B56E mov.b Rm,@(r0,Rn) */
	r13 += 0x7u;  /* 0C08B570 add #imm,Rn */
	{ IF(0x0C08B574u); W8(r0 + r13, r2); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C08B320u, 4); goto L_0C08B320; }  /* 0C08B572 bra */
L_0C08B580: BLKS(0x0C08B580u);
	r0 = 0x88u; UPD(0x0C08B582u, 1);  /* 0C08B580 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C08B582 mov #imm,Rn */
	{ IF(0x0C08B586u); W16(r0 + r8, r11); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C08B55Eu, 4); goto L_0C08B55E; }  /* 0C08B584 bra */
L_0C08B590: BLKS(0x0C08B590u);
	r11 = 0xC0A8B50u; UPD(0x0C08B592u, 1);  /* 0C08B590 mov.l @(disp,pc),Rn */
	IF(0x0C08B592u); { u32 t_ = r11; PR = 0x0C08B596u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C08B596u); }  /* 0C08B592 jsr @Rn */
L_0C08B596: BLKS(0x0C08B596u);
	IF(0x0C08B596u); T = (s32)r0 >= 0;  /* 0C08B596 cmp/pz Rn */
	if (!T) { UPD(0x0C08B5C0u, 4); goto L_0C08B5C0; }  /* 0C08B598 bf */
L_0C08B59A: BLKS(0x0C08B59Au);
	IF(0x0C08B59Au); MACL = r0 * r9;  /* 0C08B59A mul.l Rm,Rn */
	r1 = 0x80000u; UPD(0x0C08B59Eu, 3);  /* 0C08B59C mov.l @(disp,pc),Rn */
	IF(0x0C08B59Eu); r4 = MACL;  /* 0C08B59E sts macl,Rn */
	r4 += r10;  /* 0C08B5A0 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C08B5A4u, 3);  /* 0C08B5A2 mov.l @(disp,Rm),Rn */
	r3 = R32(r4 + 0x24u); UPD(0x0C08B5A6u, 1);  /* 0C08B5A4 mov.l @(disp,Rm),Rn */
	r0 += 0x3u;  /* 0C08B5A6 add #imm,Rn */
	r2 = R32(r4 + 0x28u); UPD(0x0C08B5AAu, 2);  /* 0C08B5A8 mov.l @(disp,Rm),Rn */
	r3 += r1;  /* 0C08B5AA add Rm,Rn */
	r0 &= 0x7u;  /* 0C08B5AC and #imm,r0 */
	W32(r8 + 0x24u, r3); UPD(0x0C08B5B0u, 3);  /* 0C08B5AE mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C08B5B0 mov Rm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C08B5B4u, 2);  /* 0C08B5B2 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A8AE0u; UPD(0x0C08B5B6u, 1);  /* 0C08B5B4 mov.l @(disp,pc),Rn */
	{ W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08B446u, 3); goto L_0C08B446; }  /* 0C08B5B6 bra */
L_0C08B5C0: BLKS(0x0C08B5C0u);
	r0 = 0x0u;  /* 0C08B5C0 mov #imm,Rn */
	{ W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C08B390u, 4); goto L_0C08B390; }  /* 0C08B5C2 bra */
}

void blk_f_0C08B600(sh3_t *c)
{
	LOCALS;
L_0C08B600: BLKS(0x0C08B600u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08B602u, 1);  /* 0C08B600 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08B604u, 1);  /* 0C08B602 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08B606u, 1);  /* 0C08B604 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08B608u, 1);  /* 0C08B606 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08B60Au, 1);  /* 0C08B608 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08B60Cu, 1);  /* 0C08B60A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08B60Eu, 1);  /* 0C08B60C mov.l Rm,@-Rn */
	r4 = 0xC2ABAA4u; UPD(0x0C08B610u, 1);  /* 0C08B60E mov.l @(disp,pc),Rn */
	IF(0x0C08B610u); r15 -= 4; W32(r15, PR); UPD(0x0C08B612u, 1);  /* 0C08B610 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C08B614u, 1);  /* 0C08B612 mov.l @Rm,Rn */
	r14 = r15;  /* 0C08B614 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r10 = v_; } UPD(0x0C08B618u, 2);  /* 0C08B616 mov.w @Rm+,Rn */
	r12 = 0xC3C43C6u; UPD(0x0C08B61Au, 1);  /* 0C08B618 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C08B61A add #imm,Rn */
	W16(r12, r10); UPD(0x0C08B61Eu, 2);  /* 0C08B61C mov.w Rm,@Rn */
	r8 = 0xC2A6D5Cu; UPD(0x0C08B620u, 1);  /* 0C08B61E mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r3); r3 += 1; r9 = v_; } UPD(0x0C08B622u, 1);  /* 0C08B620 mov.b @Rm+,Rn */
	W8(r8, r9); UPD(0x0C08B624u, 1);  /* 0C08B622 mov.b Rm,@Rn */
	r7 = 0xC29D724u; UPD(0x0C08B626u, 1);  /* 0C08B624 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C08B628u, 1);  /* 0C08B626 mov.w @Rm+,Rn */
	r6 = R32(r7); UPD(0x0C08B62Au, 1);  /* 0C08B628 mov.l @Rm,Rn */
	IF(0x0C08B62Au); r0 <<= 2;  /* 0C08B62A shll2 Rn */
	IF(0x0C08B62Cu); r5 = R32(r0 + r6); UPD(0x0C08B62Eu, 2);  /* 0C08B62C mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r1 = v_; } UPD(0x0C08B630u, 1);  /* 0C08B62E mov.w @Rm+,Rn */
	r13 = 0xC297460u; UPD(0x0C08B632u, 1);  /* 0C08B630 mov.l @(disp,pc),Rn */
	r9 = 0xC2460ACu; UPD(0x0C08B634u, 1);  /* 0C08B632 mov.l @(disp,pc),Rn */
	r8 = 0xC069510u; UPD(0x0C08B636u, 1);  /* 0C08B634 mov.l @(disp,pc),Rn */
	W32(r13, r5); UPD(0x0C08B638u, 1);  /* 0C08B636 mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C08B63Au, 1);  /* 0C08B638 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C08B63Cu, 1);  /* 0C08B63A mov.w @Rm,Rn */
	r10 = 0xC2B03A2u; UPD(0x0C08B63Eu, 1);  /* 0C08B63C mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C08B63E extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C08B642u, 2);  /* 0C08B640 mov.l @(disp,pc),Rn */
	IF(0x0C08B642u); { u32 t_ = r8; PR = 0x0C08B646u; W16(r10, r1); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C08B646u); }  /* 0C08B642 jsr @Rn */
L_0C08B646: BLKS(0x0C08B646u);
	T = (r0 & r0) == 0;  /* 0C08B646 tst Rm,Rn */
	if (!T) { UPD(0x0C08B660u, 4); goto L_0C08B660; }  /* 0C08B648 bf */
L_0C08B64A: BLKS(0x0C08B64Au);
	r0 = 0x1u;  /* 0C08B64A mov #imm,Rn */
	UPD(0x0C08B64Cu, 1);
L_0C08B64C: BLKS(0x0C08B64Cu);
	r15 = r14;  /* 0C08B64C mov Rm,Rn */
	IF(0x0C08B64Eu); PR = R32(r15); r15 += 4; UPD(0x0C08B650u, 2);  /* 0C08B64E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08B652u, 1);  /* 0C08B650 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08B654u, 1);  /* 0C08B652 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08B656u, 1);  /* 0C08B654 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08B658u, 1);  /* 0C08B656 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08B65Au, 1);  /* 0C08B658 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08B65Cu, 1);  /* 0C08B65A mov.l @Rm+,Rn */
	IF(0x0C08B65Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08B65C rts */
L_0C08B660: BLKS(0x0C08B660u);
	r11 = 0xC071740u; UPD(0x0C08B662u, 1);  /* 0C08B660 mov.l @(disp,pc),Rn */
	IF(0x0C08B662u); { u32 t_ = r11; PR = 0x0C08B666u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08B666u); }  /* 0C08B662 jsr @Rn */
L_0C08B666: BLKS(0x0C08B666u);
	T = (r0 & r0) == 0;  /* 0C08B666 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08B64Cu, 4); goto L_0C08B64C; } goto L_0C08B66C; }  /* 0C08B668 bt/s */
L_0C08B66C: BLKS(0x0C08B66Cu);
	r2 = 0xC28EDFCu; UPD(0x0C08B66Eu, 2);  /* 0C08B66C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C08B670u, 1);  /* 0C08B66E mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r2); UPD(0x0C08B672u, 1);  /* 0C08B670 mov.w @Rm,Rn */
	IF(0x0C08B672u); MACL = r11 * r8;  /* 0C08B672 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C08B676u, 3);  /* 0C08B674 mov.l @(disp,pc),Rn */
	IF(0x0C08B676u); r8 = MACL;  /* 0C08B676 sts macl,Rn */
	r0 = 0xD3000104u; UPD(0x0C08B67Au, 2);  /* 0C08B678 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C08B67A add Rm,Rn */
	W32(r8, r0); UPD(0x0C08B67Eu, 2);  /* 0C08B67C mov.l Rm,@Rn */
	r4 = r11;  /* 0C08B67E mov Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C08B682u, 2);  /* 0C08B680 mov.w @Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C08B684u, 1);  /* 0C08B682 mov.w @Rm,Rn */
	r6 = r7 & 0xFFFF;  /* 0C08B684 extu.w Rm,Rn */
	r0 = 0x8Au; UPD(0x0C08B688u, 2);  /* 0C08B686 mov.w @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C08B688 mov #imm,Rn */
	IF(0x0C08B68Au); W16(r0 + r8, r5); UPD(0x0C08B68Cu, 2);  /* 0C08B68A mov.w Rm,@(r0,Rn) */
	r3 = 0xC0A8A30u; UPD(0x0C08B68Eu, 1);  /* 0C08B68C mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C08B68E add #imm,Rn */
	IF(0x0C08B690u); W16(r0 + r8, r5); UPD(0x0C08B692u, 2);  /* 0C08B690 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0x4u, r6); UPD(0x0C08B694u, 1);  /* 0C08B692 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r9); UPD(0x0C08B696u, 1);  /* 0C08B694 mov.l Rm,@(disp,Rn) */
	IF(0x0C08B696u); { u32 t_ = r3; PR = 0x0C08B69Au; W32(r8 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08B69Au); }  /* 0C08B696 jsr @Rn */
L_0C08B69A: BLKS(0x0C08B69Au);
	r2 = 0xC237C08u; UPD(0x0C08B69Cu, 1);  /* 0C08B69A mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C08B69Eu, 1);  /* 0C08B69C mov.w @Rm,Rn */
	r3 = r4;  /* 0C08B69E mov Rm,Rn */
	IF(0x0C08B6A0u); r3 <<= 16;  /* 0C08B6A0 shll16 Rn */
	r0 = 0x180u; UPD(0x0C08B6A4u, 3);  /* 0C08B6A2 mov.w @(disp,pc),Rn */
	T = (s32)r4 > (s32)r0;  /* 0C08B6A4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x24u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08B6B2u, 4); goto L_0C08B6B2; } UPD(0x0C08B6AAu, 1); goto L_0C08B6AA; }  /* 0C08B6A6 bf/s */
L_0C08B6AA: BLKS(0x0C08B6AAu);
	r5 = 0xC29D728u; UPD(0x0C08B6ACu, 1);  /* 0C08B6AA mov.l @(disp,pc),Rn */
	r10 = R32(r5); UPD(0x0C08B6AEu, 1);  /* 0C08B6AC mov.l @Rm,Rn */
	r3 -= r10;  /* 0C08B6AE sub Rm,Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C08B6B2u, 2);  /* 0C08B6B0 mov.l Rm,@(disp,Rn) */
L_0C08B6B2: BLKS(0x0C08B6B2u);
	r7 = (u32)(s32)(s16)R16(r12); UPD(0x0C08B6B4u, 1);  /* 0C08B6B2 mov.w @Rm,Rn */
	r4 = r11;  /* 0C08B6B4 mov Rm,Rn */
	r6 = 0xC0A9AE0u; UPD(0x0C08B6B8u, 2);  /* 0C08B6B6 mov.l @(disp,pc),Rn */
	IF(0x0C08B6B8u); r7 <<= 16;  /* 0C08B6B8 shll16 Rn */
	IF(0x0C08B6BAu); { u32 t_ = r6; PR = 0x0C08B6BEu; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08B6BEu); }  /* 0C08B6BA jsr @Rn */
L_0C08B6BE: BLKS(0x0C08B6BEu);
	r1 = 0xC2A6D5Cu; UPD(0x0C08B6C0u, 1);  /* 0C08B6BE mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C08B6C0 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C08B6C4u, 2);  /* 0C08B6C2 mov.b @Rm,Rn */
	r0 = 0xADu; UPD(0x0C08B6C6u, 1);  /* 0C08B6C4 mov.w @(disp,pc),Rn */
	IF(0x0C08B6C6u); W8(r0 + r8, r3); UPD(0x0C08B6C8u, 1);  /* 0C08B6C6 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C08B6C8 add #imm,Rn */
	IF(0x0C08B6CAu); W8(r0 + r8, r3); UPD(0x0C08B6CCu, 2);  /* 0C08B6CA mov.b Rm,@(r0,Rn) */
	r11 = 0xC0A9D30u; UPD(0x0C08B6CEu, 1);  /* 0C08B6CC mov.l @(disp,pc),Rn */
	IF(0x0C08B6CEu); { u32 t_ = r11; PR = 0x0C08B6D2u; r5 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C08B6D2u); }  /* 0C08B6CE jsr @Rn */
L_0C08B6D2: BLKS(0x0C08B6D2u);
	r12 = 0x8Cu; UPD(0x0C08B6D4u, 1);  /* 0C08B6D2 mov.w @(disp,pc),Rn */
	r13 = 0x94u; UPD(0x0C08B6D6u, 1);  /* 0C08B6D4 mov.w @(disp,pc),Rn */
	r12 += r8;  /* 0C08B6D6 add Rm,Rn */
	r0 = 0x90u; UPD(0x0C08B6DAu, 2);  /* 0C08B6D8 mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C08B6DA add Rm,Rn */
	IF(0x0C08B6DCu); W32(r0 + r8, r9); UPD(0x0C08B6DEu, 2);  /* 0C08B6DC mov.l Rm,@(r0,Rn) */
	W32(r13, r9); UPD(0x0C08B6E0u, 1);  /* 0C08B6DE mov.l Rm,@Rn */
	W32(r12, r9); UPD(0x0C08B6E2u, 1);  /* 0C08B6E0 mov.l Rm,@Rn */
	W32(r8 + 0x30u, r9); UPD(0x0C08B6E4u, 1);  /* 0C08B6E2 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x2Cu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08B64Au, 3); goto L_0C08B64A; }  /* 0C08B6E4 bra */
}

void blk_f_0C08B740(sh3_t *c)
{
	LOCALS;
L_0C08B740: BLKS(0x0C08B740u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08B742u, 1);  /* 0C08B740 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08B744u, 1);  /* 0C08B742 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C08B746u, 1);  /* 0C08B744 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C08B746 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08B74Au, 2);  /* 0C08B748 mov.l Rm,@-Rn */
	IF(0x0C08B74Au); MACL = r9 * r2;  /* 0C08B74A mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08B74Eu, 3);  /* 0C08B74C mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08B750u, 1);  /* 0C08B74E mov.l @(disp,pc),Rn */
	IF(0x0C08B750u); r8 = MACL;  /* 0C08B750 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08B754u, 2);  /* 0C08B752 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C08B754 add Rm,Rn */
	IF(0x0C08B756u); r15 -= 4; W32(r15, PR); UPD(0x0C08B758u, 2);  /* 0C08B756 sts.l pr,@-Rn */
	r0 = r8;  /* 0C08B758 mov Rm,Rn */
	r3 = 0xA5u; UPD(0x0C08B75Cu, 2);  /* 0C08B75A mov.w @(disp,pc),Rn */
	IF(0x0C08B75Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08B75Eu, 1);  /* 0C08B75C mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C08B75E tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08B768u, 4); goto L_0C08B768; } goto L_0C08B764; }  /* 0C08B760 bf/s */
L_0C08B764: BLKS(0x0C08B764u);
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C08B900u, 4); goto L_0C08B900; }  /* 0C08B764 bra */
L_0C08B768: BLKS(0x0C08B768u);
	r0 = 0xC062780u; UPD(0x0C08B76Au, 1);  /* 0C08B768 mov.l @(disp,pc),Rn */
	r4 = 0x6u;  /* 0C08B76A mov #imm,Rn */
	r10 = R32(r8 + 0x24u); UPD(0x0C08B76Eu, 2);  /* 0C08B76C mov.l @(disp,Rm),Rn */
	IF(0x0C08B76Eu); { u32 t_ = r0; PR = 0x0C08B772u; r11 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08B772u); }  /* 0C08B76E jsr @Rn */
L_0C08B772: BLKS(0x0C08B772u);
	r4 = 0x4u;  /* 0C08B772 mov #imm,Rn */
	T = r0 > r4;  /* 0C08B774 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r2 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08B77Eu, 5); goto L_0C08B77E; } goto L_0C08B77A; }  /* 0C08B776 bf/s */
L_0C08B77A: BLKS(0x0C08B77Au);
	{ r15 += 0xFFFFFFF8u; /* slot add #imm,Rn */ UPD(0x0C08B8E0u, 4); goto L_0C08B8E0; }  /* 0C08B77A bra */
L_0C08B77E: BLKS(0x0C08B77Eu);
	r0 = 0xC08B794u;  /* 0C08B77E mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08B780 add Rm,Rn */
	IF(0x0C08B782u); r6 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08B784u, 3);  /* 0C08B782 mov.w @(r0,Rm),Rn */
	IF(0x0C08B784u); { u32 tv_ = (r6 + 0x0C08B788u); u32 t_ = PHYS(tv_); IF(0x0C08B786u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08B7A0u: goto L_0C08B7A0; case 0x0C08B810u: goto L_0C08B810; case 0x0C08B840u: goto L_0C08B840; case 0x0C08B880u: goto L_0C08B880; case 0x0C08B8B0u: goto L_0C08B8B0; default: JUMPD(tv_); } }  /* 0C08B784 braf Rn */
L_0C08B7A0: BLKS(0x0C08B7A0u);
	r0 = 0xB4u; UPD(0x0C08B7A2u, 1);  /* 0C08B7A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08B7A2 add #imm,Rn */
	IF(0x0C08B7A4u); MACL = r9 * r0;  /* 0C08B7A4 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C08B7A8u, 4);  /* 0C08B7A6 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C08B7A8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C08B7ACu, 2);  /* 0C08B7AA mov.w @(disp,pc),Rn */
	IF(0x0C08B7ACu); r8 = MACL;  /* 0C08B7AC sts macl,Rn */
	r8 += r2;  /* 0C08B7AE add Rm,Rn */
	IF(0x0C08B7B0u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08B7B2u, 3);  /* 0C08B7B0 mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C08B7B2 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C08B7B6u, 2);  /* 0C08B7B4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08B7B6 add #imm,Rn */
	IF(0x0C08B7B8u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08B7BAu, 2);  /* 0C08B7B8 mov.b @(r0,Rm),Rn */
	r7 = r11;  /* 0C08B7BA mov Rm,Rn */
	r4 = r6 & 0xFF;  /* 0C08B7BC extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C08B7C0u, 3);  /* 0C08B7BE mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C08B7C0 mov Rm,Rn */
	r4 = R32(r8); UPD(0x0C08B7C4u, 2);  /* 0C08B7C2 mov.l @Rm,Rn */
	r0 = 0xC0BFE70u; UPD(0x0C08B7C6u, 1);  /* 0C08B7C4 mov.l @(disp,pc),Rn */
	IF(0x0C08B7C6u); ;  /* 0C08B7C6 nop */
	UPD(0x0C08B7C8u, 1);
L_0C08B7C8: BLKS(0x0C08B7C8u);
	IF(0x0C08B7C8u); { u32 t_ = r0; PR = 0x0C08B7CCu; IF(0x0C08B7CAu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C08B7CCu); }  /* 0C08B7C8 jsr @Rn */
L_0C08B7CC: BLKS(0x0C08B7CCu);
	r15 += 0x8u;  /* 0C08B7CC add #imm,Rn */
	UPD(0x0C08B7CEu, 1);
L_0C08B7CE: BLKS(0x0C08B7CEu);
	r8 = 0xB4u; UPD(0x0C08B7D0u, 1);  /* 0C08B7CE mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08B7D0 add #imm,Rn */
	IF(0x0C08B7D2u); MACL = r9 * r8;  /* 0C08B7D2 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C08B7D6u, 4);  /* 0C08B7D4 mov.l @(disp,pc),Rn */
	IF(0x0C08B7D6u); r8 = MACL;  /* 0C08B7D6 sts macl,Rn */
	r8 += r4;  /* 0C08B7D8 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C08B7DCu, 3);  /* 0C08B7DA mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08B7DC mov Rm,Rn */
	IF(0x0C08B7DEu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08B7E0u, 2);  /* 0C08B7DE mov.b @(r0,Rm),Rn */
	r4 = 0x3u;  /* 0C08B7E0 mov #imm,Rn */
	r7 = r5 & 0xFF;  /* 0C08B7E2 extu.b Rm,Rn */
	r9 = 0x20000u; UPD(0x0C08B7E6u, 3);  /* 0C08B7E4 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C08B7E6 mov Rm,Rn */
	W32(r15, r9); UPD(0x0C08B7EAu, 2);  /* 0C08B7E8 mov.l Rm,@Rn */
	r6 = r11;  /* 0C08B7EA mov Rm,Rn */
	r10 = 0xC07CD80u; UPD(0x0C08B7EEu, 2);  /* 0C08B7EC mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C08B7EE mov #imm,Rn */
	IF(0x0C08B7F0u); { u32 t_ = r10; PR = 0x0C08B7F4u; W32(r15 + 0x4u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C08B7F4u); }  /* 0C08B7F0 jsr @Rn */
L_0C08B7F4: BLKS(0x0C08B7F4u);
	W32(r8, r9); UPD(0x0C08B7F6u, 1);  /* 0C08B7F4 mov.l Rm,@Rn */
	r15 = r14;  /* 0C08B7F6 mov Rm,Rn */
	IF(0x0C08B7F8u); PR = R32(r15); r15 += 4; UPD(0x0C08B7FAu, 2);  /* 0C08B7F8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08B7FCu, 1);  /* 0C08B7FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08B7FEu, 1);  /* 0C08B7FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08B800u, 1);  /* 0C08B7FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08B802u, 1);  /* 0C08B800 mov.l @Rm+,Rn */
	IF(0x0C08B802u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08B802 rts */
L_0C08B810: BLKS(0x0C08B810u);
	r2 = 0xB4u; UPD(0x0C08B812u, 1);  /* 0C08B810 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08B812 add #imm,Rn */
	IF(0x0C08B814u); MACL = r9 * r2;  /* 0C08B814 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C08B818u, 4);  /* 0C08B816 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C08B81Au, 1);  /* 0C08B818 mov.w @(disp,pc),Rn */
	IF(0x0C08B81Au); r5 = MACL;  /* 0C08B81A sts macl,Rn */
	r5 += r3;  /* 0C08B81C add Rm,Rn */
	IF(0x0C08B81Eu); r7 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C08B820u, 3);  /* 0C08B81E mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08B820 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C08B824u, 2);  /* 0C08B822 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08B824 add #imm,Rn */
	IF(0x0C08B826u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C08B828u, 2);  /* 0C08B826 mov.b @(r0,Rm),Rn */
	r6 = r10;  /* 0C08B828 mov Rm,Rn */
	r8 = r4 & 0xFF;  /* 0C08B82A extu.b Rm,Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C08B82Eu, 3);  /* 0C08B82C mov.l Rm,@(disp,Rn) */
	r7 = r11;  /* 0C08B82E mov Rm,Rn */
	r4 = R32(r5); UPD(0x0C08B832u, 2);  /* 0C08B830 mov.l @Rm,Rn */
	r0 = 0xC0BECB0u; UPD(0x0C08B834u, 1);  /* 0C08B832 mov.l @(disp,pc),Rn */
	{ r5 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C08B7C8u, 3); goto L_0C08B7C8; }  /* 0C08B834 bra */
L_0C08B840: BLKS(0x0C08B840u);
	r5 = 0xB4u; UPD(0x0C08B842u, 1);  /* 0C08B840 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C08B842 add #imm,Rn */
	IF(0x0C08B844u); MACL = r9 * r5;  /* 0C08B844 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C08B848u, 4);  /* 0C08B846 mov.l @(disp,pc),Rn */
	IF(0x0C08B848u); r5 = MACL;  /* 0C08B848 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C08B84Cu, 2);  /* 0C08B84A mov.w @(disp,pc),Rn */
	r5 += r8;  /* 0C08B84C add Rm,Rn */
	IF(0x0C08B84Eu); r2 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C08B850u, 2);  /* 0C08B84E mov.b @(r0,Rm),Rn */
	r3 = r2 & 0xFF;  /* 0C08B850 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C08B854u, 2);  /* 0C08B852 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08B854 add #imm,Rn */
	IF(0x0C08B856u); r7 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C08B858u, 2);  /* 0C08B856 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08B858 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08B85Cu, 2);  /* 0C08B85A mov.l Rm,@(disp,Rn) */
	r7 = r11;  /* 0C08B85C mov Rm,Rn */
	r4 = R32(r5 + 0x2Cu); UPD(0x0C08B860u, 2);  /* 0C08B85E mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C08B860 mov Rm,Rn */
	W32(r15 + 0x8u, r4); UPD(0x0C08B864u, 2);  /* 0C08B862 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x30u); UPD(0x0C08B866u, 1);  /* 0C08B864 mov.l @(disp,Rm),Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C08B868u, 1);  /* 0C08B866 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0BE860u; UPD(0x0C08B86Au, 1);  /* 0C08B868 mov.l @(disp,pc),Rn */
	r4 = R32(r5); UPD(0x0C08B86Cu, 1);  /* 0C08B86A mov.l @Rm,Rn */
	IF(0x0C08B86Cu); { u32 t_ = r8; PR = 0x0C08B870u; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BE860, 0x0C0BE860u, 0x0C08B870u); }  /* 0C08B86C jsr @Rn */
L_0C08B870: BLKS(0x0C08B870u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C08B7CEu, 3); goto L_0C08B7CE; }  /* 0C08B870 bra */
L_0C08B880: BLKS(0x0C08B880u);
	r8 = 0xB4u; UPD(0x0C08B882u, 1);  /* 0C08B880 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08B882 add #imm,Rn */
	IF(0x0C08B884u); MACL = r9 * r8;  /* 0C08B884 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C08B888u, 4);  /* 0C08B886 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C08B888 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C08B88Cu, 2);  /* 0C08B88A mov.w @(disp,pc),Rn */
	IF(0x0C08B88Cu); r6 = MACL;  /* 0C08B88C sts macl,Rn */
	r6 += r2;  /* 0C08B88E add Rm,Rn */
	IF(0x0C08B890u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08B892u, 3);  /* 0C08B890 mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C08B892 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C08B896u, 2);  /* 0C08B894 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08B896 add #imm,Rn */
	IF(0x0C08B898u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08B89Au, 2);  /* 0C08B898 mov.b @(r0,Rm),Rn */
	r7 = r11;  /* 0C08B89A mov Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C08B89C extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C08B8A0u, 3);  /* 0C08B89E mov.l Rm,@(disp,Rn) */
	r4 = R32(r6); UPD(0x0C08B8A2u, 1);  /* 0C08B8A0 mov.l @Rm,Rn */
	r0 = 0xC0C0030u; UPD(0x0C08B8A4u, 1);  /* 0C08B8A2 mov.l @(disp,pc),Rn */
	{ r6 = r10; /* slot mov Rm,Rn */ UPD(0x0C08B7C8u, 3); goto L_0C08B7C8; }  /* 0C08B8A4 bra */
L_0C08B8B0: BLKS(0x0C08B8B0u);
	r2 = 0xB4u; UPD(0x0C08B8B2u, 1);  /* 0C08B8B0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08B8B2 add #imm,Rn */
	IF(0x0C08B8B4u); MACL = r9 * r2;  /* 0C08B8B4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08B8B8u, 4);  /* 0C08B8B6 mov.l @(disp,pc),Rn */
	IF(0x0C08B8B8u); r5 = MACL;  /* 0C08B8B8 sts macl,Rn */
	r5 += r0;  /* 0C08B8BA add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08B8BEu, 3);  /* 0C08B8BC mov.w @(disp,pc),Rn */
	IF(0x0C08B8BEu); r3 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C08B8C0u, 1);  /* 0C08B8BE mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C08B8C0 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C08B8C4u, 2);  /* 0C08B8C2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08B8C4 add #imm,Rn */
	IF(0x0C08B8C6u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C08B8C8u, 2);  /* 0C08B8C6 mov.b @(r0,Rm),Rn */
	r7 = r11;  /* 0C08B8C8 mov Rm,Rn */
	r6 = r4 & 0xFF;  /* 0C08B8CA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08B8CEu, 3);  /* 0C08B8CC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C08B8D0u, 1);  /* 0C08B8CE mov.l @(disp,pc),Rn */
	r6 = r10;  /* 0C08B8D0 mov Rm,Rn */
	r4 = R32(r5); UPD(0x0C08B8D4u, 2);  /* 0C08B8D2 mov.l @Rm,Rn */
	{ r5 = 0x2u; /* slot mov #imm,Rn */ UPD(0x0C08B7C8u, 3); goto L_0C08B7C8; }  /* 0C08B8D4 bra */
L_0C08B8E0: BLKS(0x0C08B8E0u);
	r0 = 0xB0u; UPD(0x0C08B8E2u, 1);  /* 0C08B8E0 mov.w @(disp,pc),Rn */
	IF(0x0C08B8E2u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08B8E4u, 1);  /* 0C08B8E2 mov.b @(r0,Rm),Rn */
	r6 = r10;  /* 0C08B8E4 mov Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C08B8E6 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C08B8EAu, 3);  /* 0C08B8E8 mov.l Rm,@Rn */
	r5 = 0x3u;  /* 0C08B8EA mov #imm,Rn */
	r2 = 0xA9u; UPD(0x0C08B8EEu, 2);  /* 0C08B8EC mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08B8EE mov Rm,Rn */
	IF(0x0C08B8F0u); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08B8F2u, 2);  /* 0C08B8F0 mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C08B8F2 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C08B8F6u, 2);  /* 0C08B8F4 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C08B8F8u, 1);  /* 0C08B8F6 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C08B8F8 mov Rm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C08B7C8u, 4); goto L_0C08B7C8; }  /* 0C08B8FA bra */
L_0C08B900: BLKS(0x0C08B900u);
	r5 = 0xC0A9590u; UPD(0x0C08B902u, 1);  /* 0C08B900 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08B902 mov Rm,Rn */
	IF(0x0C08B904u); PR = R32(r15); r15 += 4; UPD(0x0C08B906u, 2);  /* 0C08B904 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08B908u, 1);  /* 0C08B906 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08B90Au, 1);  /* 0C08B908 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08B90Cu, 1);  /* 0C08B90A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08B90Eu, 1);  /* 0C08B90C mov.l @Rm+,Rn */
	IF(0x0C08B90Eu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9590u: goto L_0C0A9590; default: JUMPD(tv_); } }  /* 0C08B90E jmp @Rn */
L_0C0A9590: BLKS(0x0C0A9590u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9592u, 1);  /* 0C0A9590 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9594u, 1);  /* 0C0A9592 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A9594 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9598u, 2);  /* 0C0A9596 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0A9598 mov #imm,Rn */
	r9 = 0xC062780u; UPD(0x0C0A959Cu, 2);  /* 0C0A959A mov.l @(disp,pc),Rn */
	IF(0x0C0A959Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0A959Eu, 1);  /* 0C0A959C sts.l pr,@-Rn */
	IF(0x0C0A959Eu); { u32 t_ = r9; PR = 0x0C0A95A2u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0A95A2u); }  /* 0C0A959E jsr @Rn */
L_0C0A95A2: BLKS(0x0C0A95A2u);
	r2 = r0;  /* 0C0A95A2 mov Rm,Rn */
	r0 = 0x4u;  /* 0C0A95A4 mov #imm,Rn */
	T = r2 > r0;  /* 0C0A95A6 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0A95D0u, 6); goto L_0C0A95D0; }  /* 0C0A95A8 bt */
L_0C0A95AA: BLKS(0x0C0A95AAu);
	r0 = 0xC0A95B8u;  /* 0C0A95AA mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0A95AC add Rm,Rn */
	IF(0x0C0A95AEu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A95B0u, 3);  /* 0C0A95AE mov.w @(r0,Rm),Rn */
	IF(0x0C0A95B0u); { u32 tv_ = (r3 + 0x0C0A95B4u); u32 t_ = PHYS(tv_); IF(0x0C0A95B2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A95D0u: goto L_0C0A95D0; case 0x0C0A9630u: goto L_0C0A9630; case 0x0C0A9660u: goto L_0C0A9660; case 0x0C0A96A0u: goto L_0C0A96A0; case 0x0C0A96D0u: goto L_0C0A96D0; default: JUMPD(tv_); } }  /* 0C0A95B0 braf Rn */
L_0C0A95D0: BLKS(0x0C0A95D0u);
	r6 = 0xB4u; UPD(0x0C0A95D2u, 1);  /* 0C0A95D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A95D2 add #imm,Rn */
	IF(0x0C0A95D4u); MACL = r8 * r6;  /* 0C0A95D4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A95D8u, 4);  /* 0C0A95D6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A95DAu, 1);  /* 0C0A95D8 mov.w @(disp,pc),Rn */
	IF(0x0C0A95DAu); r3 = MACL;  /* 0C0A95DA sts macl,Rn */
	r3 += r9;  /* 0C0A95DC add Rm,Rn */
	IF(0x0C0A95DEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A95E0u, 3);  /* 0C0A95DE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A95E0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A95E4u, 2);  /* 0C0A95E2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A95E4 add #imm,Rn */
	IF(0x0C0A95E6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A95E8u, 2);  /* 0C0A95E6 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0A95E8 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A95EA extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A95EEu, 3);  /* 0C0A95EC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0A95F0u, 1);  /* 0C0A95EE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A95F2u, 1);  /* 0C0A95F0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A95F4u, 1);  /* 0C0A95F2 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0A95F6u, 1);  /* 0C0A95F4 mov.l @(disp,Rm),Rn */
L_0C0A95F6: BLKS(0x0C0A95F6u);
	IF(0x0C0A95F6u); { u32 t_ = r0; PR = 0x0C0A95FAu; IF(0x0C0A95F8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A95FAu); }  /* 0C0A95F6 jsr @Rn */
L_0C0A95FA: BLKS(0x0C0A95FAu);
	r15 += 0x8u;  /* 0C0A95FA add #imm,Rn */
	UPD(0x0C0A95FCu, 1);
L_0C0A95FC: BLKS(0x0C0A95FCu);
	r6 = 0xB4u; UPD(0x0C0A95FEu, 1);  /* 0C0A95FC mov.w @(disp,pc),Rn */
	IF(0x0C0A95FEu); MACL = r8 * r6;  /* 0C0A95FE mul.l Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0A9602u, 3);  /* 0C0A9600 mov.w @(disp,pc),Rn */
	IF(0x0C0A9602u); r8 = MACL;  /* 0C0A9602 sts macl,Rn */
	r8 += r9;  /* 0C0A9604 add Rm,Rn */
	r9 = 0xC07DCE0u; UPD(0x0C0A9608u, 3);  /* 0C0A9606 mov.l @(disp,pc),Rn */
	IF(0x0C0A9608u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A960Au, 1);  /* 0C0A9608 mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A960Cu, 1);  /* 0C0A960A mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A960C extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A9610u, 2);  /* 0C0A960E mov.l @(disp,Rm),Rn */
	IF(0x0C0A9610u); { u32 t_ = r9; PR = 0x0C0A9614u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DCE0, 0x0C07DCE0u, 0x0C0A9614u); }  /* 0C0A9610 jsr @Rn */
L_0C0A9614: BLKS(0x0C0A9614u);
	r9 = 0x0u;  /* 0C0A9614 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0A9618u, 2);  /* 0C0A9616 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A9618 mov Rm,Rn */
	IF(0x0C0A961Au); PR = R32(r15); r15 += 4; UPD(0x0C0A961Cu, 2);  /* 0C0A961A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A961Eu, 1);  /* 0C0A961C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A9620u, 1);  /* 0C0A961E mov.l @Rm+,Rn */
	IF(0x0C0A9620u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A9620 rts */
L_0C0A9630: BLKS(0x0C0A9630u);
	r0 = 0xB4u; UPD(0x0C0A9632u, 1);  /* 0C0A9630 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A9632 add #imm,Rn */
	IF(0x0C0A9634u); MACL = r8 * r0;  /* 0C0A9634 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A9638u, 4);  /* 0C0A9636 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A963Au, 1);  /* 0C0A9638 mov.w @(disp,pc),Rn */
	IF(0x0C0A963Au); r3 = MACL;  /* 0C0A963A sts macl,Rn */
	r3 += r9;  /* 0C0A963C add Rm,Rn */
	IF(0x0C0A963Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9640u, 3);  /* 0C0A963E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A9640 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A9644u, 2);  /* 0C0A9642 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9644 add #imm,Rn */
	IF(0x0C0A9646u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9648u, 2);  /* 0C0A9646 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0A9648 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A964A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A964Eu, 3);  /* 0C0A964C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0A9650u, 1);  /* 0C0A964E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A9652u, 1);  /* 0C0A9650 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A9654u, 1);  /* 0C0A9652 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A95F6u, 3); goto L_0C0A95F6; }  /* 0C0A9654 bra */
L_0C0A9660: BLKS(0x0C0A9660u);
	r0 = 0xB4u; UPD(0x0C0A9662u, 1);  /* 0C0A9660 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0A9662 add #imm,Rn */
	IF(0x0C0A9664u); MACL = r8 * r0;  /* 0C0A9664 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A9668u, 4);  /* 0C0A9666 mov.l @(disp,pc),Rn */
	IF(0x0C0A9668u); r3 = MACL;  /* 0C0A9668 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A966Cu, 2);  /* 0C0A966A mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0A966C add Rm,Rn */
	IF(0x0C0A966Eu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9670u, 2);  /* 0C0A966E mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A9670 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0A9674u, 2);  /* 0C0A9672 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9674 add #imm,Rn */
	IF(0x0C0A9676u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9678u, 2);  /* 0C0A9676 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0A9678 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A967A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0A967Eu, 3);  /* 0C0A967C mov.l Rm,@(disp,Rn) */
	r7 = R32(r3 + 0x2Cu); UPD(0x0C0A9680u, 1);  /* 0C0A967E mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r7); UPD(0x0C0A9682u, 1);  /* 0C0A9680 mov.l Rm,@(disp,Rn) */
	r6 = R32(r3 + 0x30u); UPD(0x0C0A9684u, 1);  /* 0C0A9682 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BE860u; UPD(0x0C0A9686u, 1);  /* 0C0A9684 mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r6); UPD(0x0C0A9688u, 1);  /* 0C0A9686 mov.l Rm,@(disp,Rn) */
	r4 = R32(r3); UPD(0x0C0A968Au, 1);  /* 0C0A9688 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A968Cu, 1);  /* 0C0A968A mov.l @(disp,Rm),Rn */
	IF(0x0C0A968Cu); { u32 t_ = r0; PR = 0x0C0A9690u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BE860, 0x0C0BE860u, 0x0C0A9690u); }  /* 0C0A968C jsr @Rn */
L_0C0A9690: BLKS(0x0C0A9690u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0A95FCu, 3); goto L_0C0A95FC; }  /* 0C0A9690 bra */
L_0C0A96A0: BLKS(0x0C0A96A0u);
	r6 = 0xB4u; UPD(0x0C0A96A2u, 1);  /* 0C0A96A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A96A2 add #imm,Rn */
	IF(0x0C0A96A4u); MACL = r8 * r6;  /* 0C0A96A4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A96A8u, 4);  /* 0C0A96A6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A96AAu, 1);  /* 0C0A96A8 mov.w @(disp,pc),Rn */
	IF(0x0C0A96AAu); r3 = MACL;  /* 0C0A96AA sts macl,Rn */
	r3 += r9;  /* 0C0A96AC add Rm,Rn */
	IF(0x0C0A96AEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A96B0u, 3);  /* 0C0A96AE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A96B0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A96B4u, 2);  /* 0C0A96B2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A96B4 add #imm,Rn */
	IF(0x0C0A96B6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A96B8u, 2);  /* 0C0A96B6 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A96B8 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A96BA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A96BEu, 3);  /* 0C0A96BC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0C0030u; UPD(0x0C0A96C0u, 1);  /* 0C0A96BE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A96C2u, 1);  /* 0C0A96C0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A96C4u, 1);  /* 0C0A96C2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A95F6u, 3); goto L_0C0A95F6; }  /* 0C0A96C4 bra */
L_0C0A96D0: BLKS(0x0C0A96D0u);
	r5 = 0xB4u; UPD(0x0C0A96D2u, 1);  /* 0C0A96D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A96D2 add #imm,Rn */
	IF(0x0C0A96D4u); MACL = r8 * r5;  /* 0C0A96D4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A96D8u, 4);  /* 0C0A96D6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A96DAu, 1);  /* 0C0A96D8 mov.w @(disp,pc),Rn */
	IF(0x0C0A96DAu); r3 = MACL;  /* 0C0A96DA sts macl,Rn */
	r3 += r9;  /* 0C0A96DC add Rm,Rn */
	IF(0x0C0A96DEu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A96E0u, 3);  /* 0C0A96DE mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A96E0 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A96E2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A96E6u, 3);  /* 0C0A96E4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A96E6 add #imm,Rn */
	IF(0x0C0A96E8u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A96EAu, 2);  /* 0C0A96E8 mov.b @(r0,Rm),Rn */
	r0 = r7 & 0xFF;  /* 0C0A96EA extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A96EEu, 2);  /* 0C0A96EC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0A96F0u, 1);  /* 0C0A96EE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A96F2u, 1);  /* 0C0A96F0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A96F4u, 1);  /* 0C0A96F2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A95F6u, 3); goto L_0C0A95F6; }  /* 0C0A96F4 bra */
}

/* FUN_0c08b940 */
void blk_f_0C08B940(sh3_t *c)
{
	LOCALS;
L_0C08B940: BLKS(0x0C08B940u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08B942u, 1);  /* 0C08B940 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08B944u, 1);  /* 0C08B942 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C08B946u, 1);  /* 0C08B944 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C08B946 exts.w Rm,Rn */
	IF(0x0C08B948u); MACL = r9 * r0;  /* 0C08B948 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08B94Cu, 4);  /* 0C08B94A mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08B94Eu, 1);  /* 0C08B94C mov.l @(disp,pc),Rn */
	IF(0x0C08B94Eu); r8 = MACL;  /* 0C08B94E sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08B952u, 2);  /* 0C08B950 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C08B952 add Rm,Rn */
	r2 = 0x99u; UPD(0x0C08B956u, 2);  /* 0C08B954 mov.w @(disp,pc),Rn */
	IF(0x0C08B956u); r15 -= 4; W32(r15, PR); UPD(0x0C08B958u, 1);  /* 0C08B956 sts.l pr,@-Rn */
	r2 += r8;  /* 0C08B958 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C08B95Cu, 2);  /* 0C08B95A mov.b @Rm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C08B95C cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08B9D6u, 4); goto L_0C08B9D6; } goto L_0C08B962; }  /* 0C08B95E bt/s */
L_0C08B962: BLKS(0x0C08B962u);
	r10 = 0xC069BF0u; UPD(0x0C08B964u, 2);  /* 0C08B962 mov.l @(disp,pc),Rn */
	r3 = r0;  /* 0C08B964 mov Rm,Rn */
	r3 += 0x1u;  /* 0C08B966 add #imm,Rn */
	W8(r2, r3); UPD(0x0C08B96Au, 3);  /* 0C08B968 mov.b Rm,@Rn */
	IF(0x0C08B96Au); { u32 t_ = r10; PR = 0x0C08B96Eu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08B96Eu); }  /* 0C08B96A jsr @Rn */
L_0C08B96E: BLKS(0x0C08B96Eu);
	r4 = 0x9Eu; UPD(0x0C08B970u, 1);  /* 0C08B96E mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08B970 mov Rm,Rn */
	IF(0x0C08B972u); r7 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C08B974u, 2);  /* 0C08B972 mov.b @(r0,Rm),Rn */
	r5 = 0x2A0u; UPD(0x0C08B976u, 1);  /* 0C08B974 mov.w @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C08B976 extu.b Rm,Rn */
	IF(0x0C08B978u); MACL = r6 * r5;  /* 0C08B978 mul.l Rm,Rn */
	r10 = 0x86u; UPD(0x0C08B97Cu, 4);  /* 0C08B97A mov.w @(disp,pc),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C08B97Eu, 1);  /* 0C08B97C mov.l @(disp,Rm),Rn */
	r10 += r8;  /* 0C08B97E add Rm,Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C08B982u, 2);  /* 0C08B980 mov.l @(disp,Rm),Rn */
	IF(0x0C08B982u); r3 = MACL;  /* 0C08B982 sts macl,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C08B986u, 2);  /* 0C08B984 mov.l @(disp,pc),Rn */
	r8 = 0xC068E60u; UPD(0x0C08B988u, 1);  /* 0C08B986 mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C08B988 add Rm,Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C08B98Cu, 2);  /* 0C08B98A mov.l @(disp,Rm),Rn */
	IF(0x0C08B98Cu); { u32 t_ = r8; PR = 0x0C08B990u; r7 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C08B990u); }  /* 0C08B98C jsr @Rn */
L_0C08B990: BLKS(0x0C08B990u);
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C08B992u, 1);  /* 0C08B990 mov.w @Rm,Rn */
	r4 = 0x1FFu; UPD(0x0C08B994u, 1);  /* 0C08B992 mov.w @(disp,pc),Rn */
	r2 = r3;  /* 0C08B994 mov Rm,Rn */
	r2 -= r0;  /* 0C08B996 sub Rm,Rn */
	r2 &= r4;  /* 0C08B998 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C08B99A tst Rm,Rn */
	if (T) { UPD(0x0C08B9ACu, 7); goto L_0C08B9AC; }  /* 0C08B99C bt */
L_0C08B99E: BLKS(0x0C08B99Eu);
	r0 = 0x100u; UPD(0x0C08B9A0u, 1);  /* 0C08B99E mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C08B9A0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08BA20u, 4); goto L_0C08BA20; } goto L_0C08B9A6; }  /* 0C08B9A2 bf/s */
L_0C08B9A6: BLKS(0x0C08B9A6u);
	r1 = r3;  /* 0C08B9A6 mov Rm,Rn */
	r1 += 0x2u;  /* 0C08B9A8 add #imm,Rn */
	UPD(0x0C08B9AAu, 3);
L_0C08B9AA: BLKS(0x0C08B9AAu);
	W16(r10, r1); UPD(0x0C08B9ACu, 1);  /* 0C08B9AA mov.w Rm,@Rn */
L_0C08B9AC: BLKS(0x0C08B9ACu);
	r3 = 0xFFFFFF00u; UPD(0x0C08B9AEu, 1);  /* 0C08B9AC mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C08B9AE add Rm,Rn */
	IF(0x0C08B9B0u); T = (s32)r3 >= 0;  /* 0C08B9B0 cmp/pz Rn */
	if (!T) { UPD(0x0C08BA10u, 5); goto L_0C08BA10; }  /* 0C08B9B2 bf */
L_0C08B9B4: BLKS(0x0C08B9B4u);
	r1 = 0xF8u; UPD(0x0C08B9B6u, 1);  /* 0C08B9B4 mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r1;  /* 0C08B9B6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08B9F0u, 4); goto L_0C08B9F0; } goto L_0C08B9BC; }  /* 0C08B9B8 bf/s */
L_0C08B9BC: BLKS(0x0C08B9BCu);
	IF(0x0C08B9BCu); MACL = r9 * r1;  /* 0C08B9BC mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C08B9C0u, 4);  /* 0C08B9BE mov.l @(disp,pc),Rn */
	IF(0x0C08B9C0u); r3 = MACL;  /* 0C08B9C0 sts macl,Rn */
	r8 = 0x8Cu; UPD(0x0C08B9C4u, 2);  /* 0C08B9C2 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C08B9C4 add Rm,Rn */
	r3 += r8;  /* 0C08B9C6 add Rm,Rn */
	r2 = R32(r3); UPD(0x0C08B9CAu, 3);  /* 0C08B9C8 mov.l @Rm,Rn */
	r9 = 0x2BFFFu; UPD(0x0C08B9CCu, 1);  /* 0C08B9CA mov.l @(disp,pc),Rn */
	r1 = 0x1000u; UPD(0x0C08B9CEu, 1);  /* 0C08B9CC mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r9;  /* 0C08B9CE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C08B9D6u, 4); goto L_0C08B9D6; }  /* 0C08B9D0 bt */
L_0C08B9D2: BLKS(0x0C08B9D2u);
	r2 += r1;  /* 0C08B9D2 add Rm,Rn */
	UPD(0x0C08B9D4u, 1);
L_0C08B9D4: BLKS(0x0C08B9D4u);
	W32(r3, r2); UPD(0x0C08B9D6u, 1);  /* 0C08B9D4 mov.l Rm,@Rn */
L_0C08B9D6: BLKS(0x0C08B9D6u);
	r15 = r14;  /* 0C08B9D6 mov Rm,Rn */
	IF(0x0C08B9D8u); PR = R32(r15); r15 += 4; UPD(0x0C08B9DAu, 2);  /* 0C08B9D8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08B9DCu, 1);  /* 0C08B9DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08B9DEu, 1);  /* 0C08B9DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08B9E0u, 1);  /* 0C08B9DE mov.l @Rm+,Rn */
	IF(0x0C08B9E0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08B9E0 rts */
L_0C08B9F0: BLKS(0x0C08B9F0u);
	r4 = 0xB4u; UPD(0x0C08B9F2u, 1);  /* 0C08B9F0 mov.w @(disp,pc),Rn */
	IF(0x0C08B9F2u); MACL = r9 * r4;  /* 0C08B9F2 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08B9F6u, 3);  /* 0C08B9F4 mov.l @(disp,pc),Rn */
	IF(0x0C08B9F6u); r3 = MACL;  /* 0C08B9F6 sts macl,Rn */
	r6 = 0x8Cu; UPD(0x0C08B9FAu, 2);  /* 0C08B9F8 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C08B9FA add Rm,Rn */
	r3 += r6;  /* 0C08B9FC add Rm,Rn */
	r2 = R32(r3); UPD(0x0C08BA00u, 3);  /* 0C08B9FE mov.l @Rm,Rn */
	r5 = 0x1C000u; UPD(0x0C08BA02u, 1);  /* 0C08BA00 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C08BA02 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08B9D6u, 4); goto L_0C08B9D6; }  /* 0C08BA04 bf */
L_0C08BA06: BLKS(0x0C08BA06u);
	r1 = 0xFFFFF000u; UPD(0x0C08BA08u, 1);  /* 0C08BA06 mov.w @(disp,pc),Rn */
	{ r2 += r1; /* slot add Rm,Rn */ UPD(0x0C08B9D4u, 3); goto L_0C08B9D4; }  /* 0C08BA08 bra */
L_0C08BA10: BLKS(0x0C08BA10u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C08B9B4u, 3); goto L_0C08B9B4; }  /* 0C08BA10 bra */
L_0C08BA20: BLKS(0x0C08BA20u);
	{ r1 += 0xFFFFFFFEu; /* slot add #imm,Rn */ UPD(0x0C08B9AAu, 3); goto L_0C08B9AA; }  /* 0C08BA20 bra */
}

void blk_f_0C08BA60(sh3_t *c)
{
	LOCALS;
L_0C08BA60: BLKS(0x0C08BA60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08BA62u, 1);  /* 0C08BA60 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08BA64u, 1);  /* 0C08BA62 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08BA66u, 1);  /* 0C08BA64 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C08BA66 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08BA6Au, 2);  /* 0C08BA68 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C08BA6A mov Rm,Rn */
	r8 = 0xC0A9CB0u; UPD(0x0C08BA6Eu, 2);  /* 0C08BA6C mov.l @(disp,pc),Rn */
	IF(0x0C08BA6Eu); r15 -= 4; W32(r15, PR); UPD(0x0C08BA70u, 1);  /* 0C08BA6E sts.l pr,@-Rn */
	r10 = 0xC0A9B40u; UPD(0x0C08BA72u, 1);  /* 0C08BA70 mov.l @(disp,pc),Rn */
	IF(0x0C08BA72u); { u32 t_ = r8; PR = 0x0C08BA76u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C08BA76u); }  /* 0C08BA72 jsr @Rn */
L_0C08BA76: BLKS(0x0C08BA76u);
	r8 = 0xB4u; UPD(0x0C08BA78u, 1);  /* 0C08BA76 mov.w @(disp,pc),Rn */
	IF(0x0C08BA78u); { u32 t_ = r10; PR = 0x0C08BA7Cu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9B40, 0x0C0A9B40u, 0x0C08BA7Cu); }  /* 0C08BA78 jsr @Rn */
L_0C08BA7C: BLKS(0x0C08BA7Cu);
	IF(0x0C08BA7Cu); MACL = r9 * r8;  /* 0C08BA7C mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08BA80u, 3);  /* 0C08BA7E mov.l @(disp,pc),Rn */
	IF(0x0C08BA80u); r8 = MACL;  /* 0C08BA80 sts macl,Rn */
	r8 += r7;  /* 0C08BA82 add Rm,Rn */
	r6 = 0x86u; UPD(0x0C08BA86u, 3);  /* 0C08BA84 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08BA86 mov Rm,Rn */
	IF(0x0C08BA88u); r4 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C08BA8Au, 2);  /* 0C08BA88 mov.w @(r0,Rm),Rn */
	r5 = 0x200u; UPD(0x0C08BA8Cu, 1);  /* 0C08BA8A mov.w @(disp,pc),Rn */
	r0 = 0x1Fu;  /* 0C08BA8C mov #imm,Rn */
	r4 += r5;  /* 0C08BA8E add Rm,Rn */
	IF(0x0C08BA90u); r4 >>= 8;  /* 0C08BA90 shlr8 Rn */
	IF(0x0C08BA92u); r4 >>= 2;  /* 0C08BA92 shlr2 Rn */
	r4 &= r0;  /* 0C08BA94 and Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C08BA98u, 6);  /* 0C08BA96 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C08BA9Au, 1);  /* 0C08BA98 mov.l Rm,@(disp,Rn) */
	IF(0x0C08BA9Au); r0 <<= 2;  /* 0C08BA9A shll2 Rn */
	r3 = 0xC1A014Cu; UPD(0x0C08BA9Eu, 2);  /* 0C08BA9C mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C08BA9E mov Rm,Rn */
	IF(0x0C08BAA0u); r2 = R32(r0 + r3); UPD(0x0C08BAA2u, 2);  /* 0C08BAA0 mov.l @(r0,Rm),Rn */
	r0 = 0xC0A8B10u; UPD(0x0C08BAA4u, 1);  /* 0C08BAA2 mov.l @(disp,pc),Rn */
	IF(0x0C08BAA4u); { u32 t_ = r0; PR = 0x0C08BAA8u; W32(r8 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C08BAA8u); }  /* 0C08BAA4 jsr @Rn */
L_0C08BAA8: BLKS(0x0C08BAA8u);
	r3 = R32(r8 + 0x24u); UPD(0x0C08BAAAu, 1);  /* 0C08BAA8 mov.l @(disp,Rm),Rn */
	r1 = 0xFF600000u; UPD(0x0C08BAACu, 1);  /* 0C08BAAA mov.l @(disp,pc),Rn */
	r1 += r3;  /* 0C08BAAC add Rm,Rn */
	IF(0x0C08BAAEu); T = (s32)r1 >= 0;  /* 0C08BAAE cmp/pz Rn */
	if (!T) { UPD(0x0C08BB80u, 5); goto L_0C08BB80; }  /* 0C08BAB0 bf */
L_0C08BAB2: BLKS(0x0C08BAB2u);
	r6 = 0x1000000u; UPD(0x0C08BAB4u, 1);  /* 0C08BAB2 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r6;  /* 0C08BAB4 cmp/gt Rm,Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C08BAB8u, 2);  /* 0C08BAB6 mov.l @(disp,Rm),Rn */
	IF(0x0C08BAB8u); r2 = T;  /* 0C08BAB8 movt Rn */
	r1 = 0xFE000000u; UPD(0x0C08BABCu, 2);  /* 0C08BABA mov.l @(disp,pc),Rn */
	r1 += r7;  /* 0C08BABC add Rm,Rn */
	IF(0x0C08BABEu); T = (s32)r1 >= 0;  /* 0C08BABE cmp/pz Rn */
	if (!T) { UPD(0x0C08BB70u, 5); goto L_0C08BB70; }  /* 0C08BAC0 bf */
L_0C08BAC2: BLKS(0x0C08BAC2u);
	T = (s32)r1 > (s32)r6;  /* 0C08BAC2 cmp/gt Rm,Rn */
	IF(0x0C08BAC4u); r4 = T;  /* 0C08BAC4 movt Rn */
	r2 |= r4;  /* 0C08BAC6 or Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C08BAC8 tst Rm,Rn */
	{ u32 c_ = T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08BAD0u, 7); goto L_0C08BAD0; } goto L_0C08BACE; }  /* 0C08BACA bt/s */
L_0C08BACE: BLKS(0x0C08BACEu);
	W32(r8, r2); UPD(0x0C08BAD0u, 2);  /* 0C08BACE mov.l Rm,@Rn */
L_0C08BAD0: BLKS(0x0C08BAD0u);
	r0 = 0xFFFDFFFFu; UPD(0x0C08BAD2u, 1);  /* 0C08BAD0 mov.l @(disp,pc),Rn */
	r4 = 0x13BFFFEu; UPD(0x0C08BAD4u, 1);  /* 0C08BAD2 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C08BAD4 add Rm,Rn */
	r2 = 0xFE9DFFFFu; UPD(0x0C08BAD8u, 2);  /* 0C08BAD6 mov.l @(disp,pc),Rn */
	T = r4 >= r3;  /* 0C08BAD8 cmp/hs Rm,Rn */
	IF(0x0C08BADAu); r0 = T;  /* 0C08BADA movt Rn */
	r7 += r2;  /* 0C08BADC add Rm,Rn */
	T = r4 >= r7;  /* 0C08BADE cmp/hs Rm,Rn */
	r7 = 0xA8u; UPD(0x0C08BAE2u, 5);  /* 0C08BAE0 mov.w @(disp,pc),Rn */
	IF(0x0C08BAE2u); r10 = T;  /* 0C08BAE2 movt Rn */
	r0 &= r10;  /* 0C08BAE4 and Rm,Rn */
	r7 += r8;  /* 0C08BAE6 add Rm,Rn */
	r10 = r7;  /* 0C08BAE8 mov Rm,Rn */
	r10 += 0x1u;  /* 0C08BAEA add #imm,Rn */
	r7 += 0x3u;  /* 0C08BAEC add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C08BAF0u, 7);  /* 0C08BAEE mov.b @Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C08BAF2u, 1);  /* 0C08BAF0 mov.b @Rm,Rn */
	T = r6 > r5;  /* 0C08BAF2 cmp/hi Rm,Rn */
	IF(0x0C08BAF4u); r3 = T;  /* 0C08BAF4 movt Rn */
	r0 &= r3;  /* 0C08BAF6 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08BAF8 tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08BB04u, 7); goto L_0C08BB04; } goto L_0C08BAFE; }  /* 0C08BAFA bt/s */
L_0C08BAFE: BLKS(0x0C08BAFEu);
	r3 = 0xA5u; UPD(0x0C08BB00u, 2);  /* 0C08BAFE mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08BB00 mov Rm,Rn */
	IF(0x0C08BB02u); W8(r0 + r3, r5); UPD(0x0C08BB04u, 2);  /* 0C08BB02 mov.b Rm,@(r0,Rn) */
L_0C08BB04: BLKS(0x0C08BB04u);
	r0 = 0xC0BC1B0u; UPD(0x0C08BB06u, 1);  /* 0C08BB04 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C08BB06 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08BB08 mov #imm,Rn */
	IF(0x0C08BB0Au); { u32 t_ = r0; PR = 0x0C08BB0Eu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08BB0Eu); }  /* 0C08BB0A jsr @Rn */
L_0C08BB0E: BLKS(0x0C08BB0Eu);
	T = (r0 & r0) == 0;  /* 0C08BB0E tst Rm,Rn */
	if (!T) { UPD(0x0C08BB20u, 4); goto L_0C08BB20; }  /* 0C08BB10 bf */
L_0C08BB12: BLKS(0x0C08BB12u);
	r15 = r14;  /* 0C08BB12 mov Rm,Rn */
	IF(0x0C08BB14u); PR = R32(r15); r15 += 4; UPD(0x0C08BB16u, 2);  /* 0C08BB14 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08BB18u, 1);  /* 0C08BB16 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08BB1Au, 1);  /* 0C08BB18 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08BB1Cu, 1);  /* 0C08BB1A mov.l @Rm+,Rn */
	IF(0x0C08BB1Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08BB1C rts */
L_0C08BB20: BLKS(0x0C08BB20u);
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C08BB22u, 1);  /* 0C08BB20 mov.b @Rm,Rn */
	r10 = 0xC0BBF10u; UPD(0x0C08BB24u, 1);  /* 0C08BB22 mov.l @(disp,pc),Rn */
	r6 = r1 & 0xFF;  /* 0C08BB24 extu.b Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C08BB28u, 2);  /* 0C08BB26 mov.l @(disp,Rm),Rn */
	IF(0x0C08BB28u); { u32 t_ = r10; PR = 0x0C08BB2Cu; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08BB2Cu); }  /* 0C08BB28 jsr @Rn */
L_0C08BB2C: BLKS(0x0C08BB2Cu);
	T = (r0 & r0) == 0;  /* 0C08BB2C tst Rm,Rn */
	if (T) { UPD(0x0C08BB12u, 4); goto L_0C08BB12; }  /* 0C08BB2E bt */
L_0C08BB30: BLKS(0x0C08BB30u);
	r4 = r9;  /* 0C08BB30 mov Rm,Rn */
	r9 = 0xC069B50u; UPD(0x0C08BB34u, 2);  /* 0C08BB32 mov.l @(disp,pc),Rn */
	r10 = 0xC068E60u; UPD(0x0C08BB36u, 1);  /* 0C08BB34 mov.l @(disp,pc),Rn */
	IF(0x0C08BB36u); { u32 t_ = r9; PR = 0x0C08BB3Au; IF(0x0C08BB38u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C08BB3Au); }  /* 0C08BB36 jsr @Rn */
L_0C08BB3A: BLKS(0x0C08BB3Au);
	r4 = 0x2A0u; UPD(0x0C08BB3Cu, 1);  /* 0C08BB3A mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C08BB3C exts.w Rm,Rn */
	IF(0x0C08BB3Eu); MACL = r3 * r4;  /* 0C08BB3E mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C08BB42u, 4);  /* 0C08BB40 mov.l @(disp,pc),Rn */
	IF(0x0C08BB42u); r0 = MACL;  /* 0C08BB42 sts macl,Rn */
	r0 += r7;  /* 0C08BB44 add Rm,Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C08BB48u, 3);  /* 0C08BB46 mov.l @(disp,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C08BB4Au, 1);  /* 0C08BB48 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C08BB4Cu, 1);  /* 0C08BB4A mov.l @(disp,Rm),Rn */
	IF(0x0C08BB4Cu); { u32 t_ = r10; PR = 0x0C08BB50u; r7 = R32(r0 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C08BB50u); }  /* 0C08BB4C jsr @Rn */
L_0C08BB50: BLKS(0x0C08BB50u);
	r6 = 0x30000u; UPD(0x0C08BB52u, 1);  /* 0C08BB50 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08BB52 add #imm,Rn */
	r9 = 0xC0BA480u; UPD(0x0C08BB56u, 2);  /* 0C08BB54 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C08BB56 exts.w Rm,Rn */
	W32(r15, r6); UPD(0x0C08BB5Au, 2);  /* 0C08BB58 mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C08BB5A mov #imm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C08BB5Eu, 2);  /* 0C08BB5C mov.l @(disp,Rm),Rn */
	r7 = r2;  /* 0C08BB5E mov Rm,Rn */
	IF(0x0C08BB60u); { u32 t_ = r9; PR = 0x0C08BB64u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C08BB64u); }  /* 0C08BB60 jsr @Rn */
L_0C08BB64: BLKS(0x0C08BB64u);
	{ IF(0x0C08BB66u); ; /* slot nop */ UPD(0x0C08BB12u, 3); goto L_0C08BB12; }  /* 0C08BB64 bra */
L_0C08BB70: BLKS(0x0C08BB70u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C08BAC2u, 3); goto L_0C08BAC2; }  /* 0C08BB70 bra */
L_0C08BB80: BLKS(0x0C08BB80u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C08BAB2u, 3); goto L_0C08BAB2; }  /* 0C08BB80 bra */
}

void blk_f_0C08BBE0(sh3_t *c)
{
	LOCALS;
L_0C08BBE0: BLKS(0x0C08BBE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08BBE2u, 1);  /* 0C08BBE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08BBE4u, 1);  /* 0C08BBE2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08BBE6u, 1);  /* 0C08BBE4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08BBE8u, 1);  /* 0C08BBE6 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C08BBEAu, 1);  /* 0C08BBE8 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C08BBEA exts.w Rm,Rn */
	IF(0x0C08BBECu); MACL = r11 * r0;  /* 0C08BBEC mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08BBF0u, 4);  /* 0C08BBEE mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08BBF2u, 1);  /* 0C08BBF0 mov.l @(disp,pc),Rn */
	IF(0x0C08BBF2u); r8 = MACL;  /* 0C08BBF2 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08BBF6u, 2);  /* 0C08BBF4 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C08BBF6 add Rm,Rn */
	r9 = 0x9Fu; UPD(0x0C08BBFAu, 2);  /* 0C08BBF8 mov.w @(disp,pc),Rn */
	IF(0x0C08BBFAu); r15 -= 4; W32(r15, PR); UPD(0x0C08BBFCu, 1);  /* 0C08BBFA sts.l pr,@-Rn */
	r9 += r8;  /* 0C08BBFC add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08BC00u, 2);  /* 0C08BBFE mov.b @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C08BC00 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08BC02 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08BC0Cu, 5); goto L_0C08BC0C; } goto L_0C08BC08; }  /* 0C08BC04 bf/s */
L_0C08BC08: BLKS(0x0C08BC08u);
	{ IF(0x0C08BC0Au); ; /* slot nop */ UPD(0x0C08BD80u, 4); goto L_0C08BD80; }  /* 0C08BC08 bra */
L_0C08BC0C: BLKS(0x0C08BC0Cu);
	T = r0 == 0x1u;  /* 0C08BC0C cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C08BC16u, 4); goto L_0C08BC16; }  /* 0C08BC0E bf */
L_0C08BC10: BLKS(0x0C08BC10u);
	r1 = R32(r8 + 0x24u); UPD(0x0C08BC12u, 1);  /* 0C08BC10 mov.l @(disp,Rm),Rn */
	{ r8 += 0x50u; /* slot add #imm,Rn */ UPD(0x0C08BD70u, 3); goto L_0C08BD70; }  /* 0C08BC12 bra */
L_0C08BC16: BLKS(0x0C08BC16u);
	r3 = 0xC08B940u; UPD(0x0C08BC18u, 1);  /* 0C08BC16 mov.l @(disp,pc),Rn */
	IF(0x0C08BC18u); { u32 t_ = r3; PR = 0x0C08BC1Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C08B940, 0x0C08B940u, 0x0C08BC1Cu); }  /* 0C08BC18 jsr @Rn */
L_0C08BC1C: BLKS(0x0C08BC1Cu);
	r9 = 0xB4u; UPD(0x0C08BC1Eu, 1);  /* 0C08BC1C mov.w @(disp,pc),Rn */
	IF(0x0C08BC1Eu); MACL = r11 * r9;  /* 0C08BC1E mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08BC22u, 3);  /* 0C08BC20 mov.l @(disp,pc),Rn */
	IF(0x0C08BC22u); r9 = MACL;  /* 0C08BC22 sts macl,Rn */
	r8 = 0xC069B20u; UPD(0x0C08BC26u, 2);  /* 0C08BC24 mov.l @(disp,pc),Rn */
	r9 += r7;  /* 0C08BC26 add Rm,Rn */
	r10 = 0x86u; UPD(0x0C08BC2Au, 2);  /* 0C08BC28 mov.w @(disp,pc),Rn */
	r12 = 0x8Cu; UPD(0x0C08BC2Cu, 1);  /* 0C08BC2A mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C08BC2C add Rm,Rn */
	r12 += r9;  /* 0C08BC2E add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C08BC32u, 3);  /* 0C08BC30 mov.w @Rm,Rn */
	IF(0x0C08BC32u); { u32 t_ = r8; PR = 0x0C08BC36u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08BC36u); }  /* 0C08BC32 jsr @Rn */
L_0C08BC36: BLKS(0x0C08BC36u);
	r8 = 0xC069AF0u; UPD(0x0C08BC38u, 1);  /* 0C08BC36 mov.l @(disp,pc),Rn */
	r5 = R32(r12); UPD(0x0C08BC3Au, 1);  /* 0C08BC38 mov.l @Rm,Rn */
	W32(r9 + 0x2Cu, r0); UPD(0x0C08BC3Cu, 1);  /* 0C08BC3A mov.l Rm,@(disp,Rn) */
	IF(0x0C08BC3Cu); { u32 t_ = r8; PR = 0x0C08BC40u; r4 = (u32)(s32)(s16)R16(r10); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08BC40u); }  /* 0C08BC3C jsr @Rn */
L_0C08BC40: BLKS(0x0C08BC40u);
	r5 = R32(r9 + 0x24u); UPD(0x0C08BC42u, 1);  /* 0C08BC40 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C08BC44u, 1);  /* 0C08BC42 mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C08BC46u, 1);  /* 0C08BC44 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C08BC46 add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C08BC4Au, 2);  /* 0C08BC48 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C08BC4A add Rm,Rn */
	r3 += r5;  /* 0C08BC4C add Rm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C08BC50u, 3);  /* 0C08BC4E mov.l Rm,@(disp,Rn) */
	IF(0x0C08BC50u); T = (s32)r3 >= 0;  /* 0C08BC50 cmp/pz Rn */
	W32(r9 + 0x24u, r5); UPD(0x0C08BC54u, 2);  /* 0C08BC52 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r9 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08BC5Cu, 3); goto L_0C08BC5C; } UPD(0x0C08BC58u, 1); goto L_0C08BC58; }  /* 0C08BC54 bt/s */
L_0C08BC58: BLKS(0x0C08BC58u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C08BD60u, 3); goto L_0C08BD60; }  /* 0C08BC58 bra */
L_0C08BC5C: BLKS(0x0C08BC5Cu);
	r0 = 0xD00000u; UPD(0x0C08BC5Eu, 1);  /* 0C08BC5C mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r0;  /* 0C08BC5E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C08BC7Au, 4); goto L_0C08BC7A; }  /* 0C08BC60 bt */
L_0C08BC62: BLKS(0x0C08BC62u);
	r2 = 0xC3C4048u; UPD(0x0C08BC64u, 1);  /* 0C08BC62 mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C08BC66u, 1);  /* 0C08BC64 mov.l @Rm,Rn */
	r4 = 0xFF880000u; UPD(0x0C08BC68u, 1);  /* 0C08BC66 mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C08BC68 mov Rm,Rn */
	r2 -= r3;  /* 0C08BC6A sub Rm,Rn */
	r2 += r4;  /* 0C08BC6C add Rm,Rn */
	IF(0x0C08BC6Eu); T = (s32)r2 >= 0;  /* 0C08BC6E cmp/pz Rn */
	if (!T) { UPD(0x0C08BD50u, 7); goto L_0C08BD50; }  /* 0C08BC70 bf */
L_0C08BC72: BLKS(0x0C08BC72u);
	r5 = 0xA80000u; UPD(0x0C08BC74u, 1);  /* 0C08BC72 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C08BC74 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08BD30u, 4); goto L_0C08BD30; } UPD(0x0C08BC7Au, 1); goto L_0C08BC7A; }  /* 0C08BC76 bf/s */
L_0C08BC7A: BLKS(0x0C08BC7Au);
	r10 = 0x0u;  /* 0C08BC7A mov #imm,Rn */
	W32(r9, r10); UPD(0x0C08BC7Eu, 2);  /* 0C08BC7C mov.l Rm,@Rn */
	r1 = 0x1u;  /* 0C08BC7E mov #imm,Rn */
	UPD(0x0C08BC80u, 1);
L_0C08BC80: BLKS(0x0C08BC80u);
	r7 = (u32)(s32)(s16)r1;  /* 0C08BC80 exts.w Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C08BC82 tst Rm,Rn */
	if (T) { UPD(0x0C08BCA0u, 5); goto L_0C08BCA0; }  /* 0C08BC84 bt */
L_0C08BC86: BLKS(0x0C08BC86u);
	r15 = r14;  /* 0C08BC86 mov Rm,Rn */
	IF(0x0C08BC88u); PR = R32(r15); r15 += 4; UPD(0x0C08BC8Au, 2);  /* 0C08BC88 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08BC8Cu, 1);  /* 0C08BC8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08BC8Eu, 1);  /* 0C08BC8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08BC90u, 1);  /* 0C08BC8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08BC92u, 1);  /* 0C08BC90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08BC94u, 1);  /* 0C08BC92 mov.l @Rm+,Rn */
	IF(0x0C08BC94u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08BC94 rts */
L_0C08BCA0: BLKS(0x0C08BCA0u);
	r9 = 0xC0BC1B0u; UPD(0x0C08BCA2u, 1);  /* 0C08BCA0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C08BCA2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08BCA4 mov #imm,Rn */
	IF(0x0C08BCA6u); { u32 t_ = r9; PR = 0x0C08BCAAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08BCAAu); }  /* 0C08BCA6 jsr @Rn */
L_0C08BCAA: BLKS(0x0C08BCAAu);
	T = (r0 & r0) == 0;  /* 0C08BCAA tst Rm,Rn */
	if (T) { UPD(0x0C08BC86u, 4); goto L_0C08BC86; }  /* 0C08BCAC bt */
L_0C08BCAE: BLKS(0x0C08BCAEu);
	r2 = 0xB4u; UPD(0x0C08BCB0u, 1);  /* 0C08BCAE mov.w @(disp,pc),Rn */
	IF(0x0C08BCB0u); MACL = r11 * r2;  /* 0C08BCB0 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08BCB4u, 3);  /* 0C08BCB2 mov.l @(disp,pc),Rn */
	IF(0x0C08BCB4u); r12 = MACL;  /* 0C08BCB4 sts macl,Rn */
	r12 += r0;  /* 0C08BCB6 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C08BCBAu, 3);  /* 0C08BCB8 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C08BCBA mov Rm,Rn */
	IF(0x0C08BCBCu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08BCBEu, 2);  /* 0C08BCBC mov.b @(r0,Rm),Rn */
	r10 = 0xC0BBF10u; UPD(0x0C08BCC0u, 1);  /* 0C08BCBE mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C08BCC0 extu.b Rm,Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C08BCC4u, 2);  /* 0C08BCC2 mov.l @(disp,Rm),Rn */
	IF(0x0C08BCC4u); { u32 t_ = r10; PR = 0x0C08BCC8u; r5 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08BCC8u); }  /* 0C08BCC4 jsr @Rn */
L_0C08BCC8: BLKS(0x0C08BCC8u);
	T = (r0 & r0) == 0;  /* 0C08BCC8 tst Rm,Rn */
	if (T) { UPD(0x0C08BC86u, 4); goto L_0C08BC86; }  /* 0C08BCCA bt */
L_0C08BCCC: BLKS(0x0C08BCCCu);
	r4 = r11;  /* 0C08BCCC mov Rm,Rn */
	r11 = 0xC069B50u; UPD(0x0C08BCD0u, 2);  /* 0C08BCCE mov.l @(disp,pc),Rn */
	r10 = 0xC068E60u; UPD(0x0C08BCD2u, 1);  /* 0C08BCD0 mov.l @(disp,pc),Rn */
	IF(0x0C08BCD2u); { u32 t_ = r11; PR = 0x0C08BCD6u; IF(0x0C08BCD4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C08BCD6u); }  /* 0C08BCD2 jsr @Rn */
L_0C08BCD6: BLKS(0x0C08BCD6u);
	r7 = 0x2A0u; UPD(0x0C08BCD8u, 1);  /* 0C08BCD6 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C08BCD8 exts.w Rm,Rn */
	IF(0x0C08BCDAu); MACL = r4 * r7;  /* 0C08BCDA mul.l Rm,Rn */
	r6 = 0xC29D1D8u; UPD(0x0C08BCDEu, 4);  /* 0C08BCDC mov.l @(disp,pc),Rn */
	IF(0x0C08BCDEu); r3 = MACL;  /* 0C08BCDE sts macl,Rn */
	r3 += r6;  /* 0C08BCE0 add Rm,Rn */
	r8 = 0x86u; UPD(0x0C08BCE4u, 3);  /* 0C08BCE2 mov.w @(disp,pc),Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C08BCE6u, 1);  /* 0C08BCE4 mov.l @(disp,Rm),Rn */
	r8 += r12;  /* 0C08BCE6 add Rm,Rn */
	r7 = R32(r3 + 0x14u); UPD(0x0C08BCEAu, 2);  /* 0C08BCE8 mov.l @(disp,Rm),Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C08BCECu, 1);  /* 0C08BCEA mov.l @(disp,Rm),Rn */
	IF(0x0C08BCECu); { u32 t_ = r10; PR = 0x0C08BCF0u; r5 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C08BCF0u); }  /* 0C08BCEC jsr @Rn */
L_0C08BCF0: BLKS(0x0C08BCF0u);
	r9 = 0xC069B20u; UPD(0x0C08BCF2u, 1);  /* 0C08BCF0 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C08BCF2 exts.w Rm,Rn */
	r10 = 0x80000u; UPD(0x0C08BCF6u, 2);  /* 0C08BCF4 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C08BCF8u, 1);  /* 0C08BCF6 mov.w @Rm,Rn */
	IF(0x0C08BCF8u); { u32 t_ = r9; PR = 0x0C08BCFCu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08BCFCu); }  /* 0C08BCF8 jsr @Rn */
L_0C08BCFC: BLKS(0x0C08BCFCu);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C08BCFEu, 1);  /* 0C08BCFC mov.w @Rm,Rn */
	r5 = r10;  /* 0C08BCFE mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C08BD02u, 2);  /* 0C08BD00 mov.l @(disp,pc),Rn */
	r9 = R32(r12 + 0x24u); UPD(0x0C08BD04u, 1);  /* 0C08BD02 mov.l @(disp,Rm),Rn */
	IF(0x0C08BD04u); { u32 t_ = r8; PR = 0x0C08BD08u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08BD08u); }  /* 0C08BD04 jsr @Rn */
L_0C08BD08: BLKS(0x0C08BD08u);
	r6 = R32(r12 + 0x28u); UPD(0x0C08BD0Au, 1);  /* 0C08BD08 mov.l @(disp,Rm),Rn */
	r7 = r11;  /* 0C08BD0A mov Rm,Rn */
	r5 = 0xC189CC0u; UPD(0x0C08BD0Eu, 2);  /* 0C08BD0C mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08BD0E add #imm,Rn */
	r11 = 0xC0BA970u; UPD(0x0C08BD12u, 2);  /* 0C08BD10 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C08BD12 add Rm,Rn */
	r12 = 0x30000u; UPD(0x0C08BD16u, 2);  /* 0C08BD14 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C08BD16 mov #imm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08BD1Au, 2);  /* 0C08BD18 mov.l Rm,@(disp,Rn) */
	W32(r15, r12); UPD(0x0C08BD1Cu, 1);  /* 0C08BD1A mov.l Rm,@Rn */
	IF(0x0C08BD1Cu); { u32 t_ = r11; PR = 0x0C08BD20u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C08BD20u); }  /* 0C08BD1C jsr @Rn */
L_0C08BD20: BLKS(0x0C08BD20u);
	{ IF(0x0C08BD22u); ; /* slot nop */ UPD(0x0C08BC86u, 3); goto L_0C08BC86; }  /* 0C08BD20 bra */
L_0C08BD30: BLKS(0x0C08BD30u);
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C08BD32u, 1);  /* 0C08BD30 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C08BD32 add #imm,Rn */
	IF(0x0C08BD34u); r0 >>= 2;  /* 0C08BD34 shlr2 Rn */
	IF(0x0C08BD36u); r0 >>= 2;  /* 0C08BD36 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C08BD38 and #imm,r0 */
	W32(r9 + 0x8u, r0); UPD(0x0C08BD3Cu, 5);  /* 0C08BD3A mov.l Rm,@(disp,Rn) */
	r0 = R32(r9 + 0xCu); UPD(0x0C08BD3Eu, 1);  /* 0C08BD3C mov.l @(disp,Rm),Rn */
	r8 = 0xC1A0158u; UPD(0x0C08BD40u, 1);  /* 0C08BD3E mov.l @(disp,pc),Rn */
	IF(0x0C08BD40u); r0 <<= 2;  /* 0C08BD40 shll2 Rn */
	r6 = 0xC0A8B10u; UPD(0x0C08BD44u, 2);  /* 0C08BD42 mov.l @(disp,pc),Rn */
	IF(0x0C08BD44u); r12 = R32(r0 + r8); UPD(0x0C08BD46u, 1);  /* 0C08BD44 mov.l @(r0,Rm),Rn */
	IF(0x0C08BD46u); { u32 t_ = r6; PR = 0x0C08BD4Au; W32(r9 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C08BD4Au); }  /* 0C08BD46 jsr @Rn */
L_0C08BD4A: BLKS(0x0C08BD4Au);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C08BC80u, 3); goto L_0C08BC80; }  /* 0C08BD4A bra */
L_0C08BD50: BLKS(0x0C08BD50u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C08BC72u, 3); goto L_0C08BC72; }  /* 0C08BD50 bra */
L_0C08BD60: BLKS(0x0C08BD60u);
	{ IF(0x0C08BD62u); ; /* slot nop */ UPD(0x0C08BC5Cu, 3); goto L_0C08BC5C; }  /* 0C08BD60 bra */
L_0C08BD70: BLKS(0x0C08BD70u);
	r4 = R32(r8); UPD(0x0C08BD72u, 1);  /* 0C08BD70 mov.l @Rm,Rn */
	T = (s32)r1 >= (s32)r4;  /* 0C08BD72 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08BD7Cu, 4); goto L_0C08BD7C; } UPD(0x0C08BD78u, 1); goto L_0C08BD78; }  /* 0C08BD74 bt/s */
L_0C08BD78: BLKS(0x0C08BD78u);
	r1 += 0x1u;  /* 0C08BD78 add #imm,Rn */
	W8(r9, r1); UPD(0x0C08BD7Cu, 2);  /* 0C08BD7A mov.b Rm,@Rn */
L_0C08BD7C: BLKS(0x0C08BD7Cu);
	{ IF(0x0C08BD7Eu); ; /* slot nop */ UPD(0x0C08BC1Cu, 3); goto L_0C08BC1C; }  /* 0C08BD7C bra */
L_0C08BD80: BLKS(0x0C08BD80u);
	r10 = 0xC062780u; UPD(0x0C08BD82u, 1);  /* 0C08BD80 mov.l @(disp,pc),Rn */
	r4 = 0xC0u; UPD(0x0C08BD84u, 1);  /* 0C08BD82 mov.w @(disp,pc),Rn */
	IF(0x0C08BD84u); { u32 t_ = r10; PR = 0x0C08BD88u; r8 += 0x50u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08BD88u); }  /* 0C08BD84 jsr @Rn */
L_0C08BD88: BLKS(0x0C08BD88u);
	r2 = 0x80u; UPD(0x0C08BD8Au, 1);  /* 0C08BD88 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C08BD8A add Rm,Rn */
	IF(0x0C08BD8Cu); r0 <<= 16;  /* 0C08BD8C shll16 Rn */
	W32(r8, r0); UPD(0x0C08BD90u, 3);  /* 0C08BD8E mov.l Rm,@Rn */
	{ r1 = (u32)(s32)(s8)R8(r9); /* slot mov.b @Rm,Rn */ UPD(0x0C08BD78u, 3); goto L_0C08BD78; }  /* 0C08BD90 bra */
}

void blk_f_0C08BE00(sh3_t *c)
{
	LOCALS;
L_0C08BE00: BLKS(0x0C08BE00u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08BE02u, 1);  /* 0C08BE00 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08BE04u, 1);  /* 0C08BE02 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C08BE04 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08BE08u, 2);  /* 0C08BE06 mov.l Rm,@-Rn */
	r4 = 0xB4u; UPD(0x0C08BE0Au, 1);  /* 0C08BE08 mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08BE0Cu, 1);  /* 0C08BE0A mov.l Rm,@-Rn */
	IF(0x0C08BE0Cu); MACL = r9 * r4;  /* 0C08BE0C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08BE10u, 3);  /* 0C08BE0E mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08BE12u, 1);  /* 0C08BE10 mov.l @(disp,pc),Rn */
	IF(0x0C08BE12u); r8 = MACL;  /* 0C08BE12 sts macl,Rn */
	IF(0x0C08BE14u); r15 -= 4; W32(r15, PR); UPD(0x0C08BE16u, 2);  /* 0C08BE14 sts.l pr,@-Rn */
	r8 += r0;  /* 0C08BE16 add Rm,Rn */
	r0 = R32(r8 + 0x24u); UPD(0x0C08BE1Au, 2);  /* 0C08BE18 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C08BE1A mov Rm,Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C08BE1Eu, 2);  /* 0C08BE1C mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C08BE20u, 1);  /* 0C08BE1E mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C08BE20 add Rm,Rn */
	r2 = R32(r8 + 0x30u); UPD(0x0C08BE24u, 2);  /* 0C08BE22 mov.l @(disp,Rm),Rn */
	r3 = 0xFF600000u; UPD(0x0C08BE26u, 1);  /* 0C08BE24 mov.l @(disp,pc),Rn */
	r7 += r2;  /* 0C08BE26 add Rm,Rn */
	r3 += r0;  /* 0C08BE28 add Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C08BE2Cu, 3);  /* 0C08BE2A mov.l Rm,@(disp,Rn) */
	IF(0x0C08BE2Cu); T = (s32)r3 >= 0;  /* 0C08BE2C cmp/pz Rn */
	{ u32 c_ = T; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08BE36u, 4); goto L_0C08BE36; } UPD(0x0C08BE32u, 1); goto L_0C08BE32; }  /* 0C08BE2E bt/s */
L_0C08BE32: BLKS(0x0C08BE32u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C08BF50u, 3); goto L_0C08BF50; }  /* 0C08BE32 bra */
L_0C08BE36: BLKS(0x0C08BE36u);
	r5 = 0xD00000u; UPD(0x0C08BE38u, 1);  /* 0C08BE36 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r5;  /* 0C08BE38 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C08BE54u, 4); goto L_0C08BE54; }  /* 0C08BE3A bt */
L_0C08BE3C: BLKS(0x0C08BE3Cu);
	r2 = r7;  /* 0C08BE3C mov Rm,Rn */
	r11 = 0xC3C4048u; UPD(0x0C08BE40u, 2);  /* 0C08BE3E mov.l @(disp,pc),Rn */
	r10 = R32(r11); UPD(0x0C08BE42u, 1);  /* 0C08BE40 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C08BE44u, 1);  /* 0C08BE42 mov.l @(disp,pc),Rn */
	r2 -= r10;  /* 0C08BE44 sub Rm,Rn */
	r2 += r6;  /* 0C08BE46 add Rm,Rn */
	IF(0x0C08BE48u); T = (s32)r2 >= 0;  /* 0C08BE48 cmp/pz Rn */
	if (T) { UPD(0x0C08BE4Eu, 6); goto L_0C08BE4E; }  /* 0C08BE4A bt */
L_0C08BE4C: BLKS(0x0C08BE4Cu);
	r2 = 0u - r2;  /* 0C08BE4C neg Rm,Rn */
	UPD(0x0C08BE4Eu, 1);
L_0C08BE4E: BLKS(0x0C08BE4Eu);
	r7 = 0xA80000u; UPD(0x0C08BE50u, 1);  /* 0C08BE4E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C08BE50 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08BE70u, 4); goto L_0C08BE70; }  /* 0C08BE52 bf */
L_0C08BE54: BLKS(0x0C08BE54u);
	r9 = 0x0u;  /* 0C08BE54 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C08BE58u, 2);  /* 0C08BE56 mov.l Rm,@Rn */
L_0C08BE58: BLKS(0x0C08BE58u);
	r15 = r14;  /* 0C08BE58 mov Rm,Rn */
	IF(0x0C08BE5Au); PR = R32(r15); r15 += 4; UPD(0x0C08BE5Cu, 2);  /* 0C08BE5A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08BE5Eu, 1);  /* 0C08BE5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08BE60u, 1);  /* 0C08BE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08BE62u, 1);  /* 0C08BE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08BE64u, 1);  /* 0C08BE62 mov.l @Rm+,Rn */
	IF(0x0C08BE64u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08BE64 rts */
L_0C08BE70: BLKS(0x0C08BE70u);
	r0 = R32(r8 + 0xCu); UPD(0x0C08BE72u, 1);  /* 0C08BE70 mov.l @(disp,Rm),Rn */
	r4 = 0xC1A0164u; UPD(0x0C08BE74u, 1);  /* 0C08BE72 mov.l @(disp,pc),Rn */
	IF(0x0C08BE74u); r0 <<= 2;  /* 0C08BE74 shll2 Rn */
	r11 = 0xC0A8B10u; UPD(0x0C08BE78u, 2);  /* 0C08BE76 mov.l @(disp,pc),Rn */
	IF(0x0C08BE78u); r3 = R32(r0 + r4); UPD(0x0C08BE7Au, 1);  /* 0C08BE78 mov.l @(r0,Rm),Rn */
	r10 = 0x9Fu; UPD(0x0C08BE7Cu, 1);  /* 0C08BE7A mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C08BE7C mov Rm,Rn */
	W32(r8 + 0xCu, r3); UPD(0x0C08BE80u, 2);  /* 0C08BE7E mov.l Rm,@(disp,Rn) */
	IF(0x0C08BE80u); { u32 t_ = r11; PR = 0x0C08BE84u; r10 += r8; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C08BE84u); }  /* 0C08BE80 jsr @Rn */
L_0C08BE84: BLKS(0x0C08BE84u);
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C08BE86u, 1);  /* 0C08BE84 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C08BE86 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08BE88 tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C08BF10u, 5); goto L_0C08BF10; } goto L_0C08BE8E; }  /* 0C08BE8A bt/s */
L_0C08BE8E: BLKS(0x0C08BE8Eu);
	if (!T) { UPD(0x0C08BE58u, 4); goto L_0C08BE58; }  /* 0C08BE8E bf */
L_0C08BE90: BLKS(0x0C08BE90u);
	r10 = R32(r8 + 0x30u); UPD(0x0C08BE92u, 1);  /* 0C08BE90 mov.l @(disp,Rm),Rn */
	r0 = 0x8Cu; UPD(0x0C08BE94u, 1);  /* 0C08BE92 mov.w @(disp,pc),Rn */
	r6 = 0x98u; UPD(0x0C08BE96u, 1);  /* 0C08BE94 mov.w @(disp,pc),Rn */
	IF(0x0C08BE96u); r7 = R32(r0 + r8); UPD(0x0C08BE98u, 1);  /* 0C08BE96 mov.l @(r0,Rm),Rn */
	r6 += r8;  /* 0C08BE98 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C08BE9Cu, 2);  /* 0C08BE9A mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C08BE9C add #imm,Rn */
	W8(r6, r0); UPD(0x0C08BEA0u, 2);  /* 0C08BE9E mov.b Rm,@Rn */
	r10 += r7;  /* 0C08BEA0 add Rm,Rn */
	r0 &= 0x1u;  /* 0C08BEA2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08BEA4 tst Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x30u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08BEF0u, 6); goto L_0C08BEF0; } UPD(0x0C08BEAAu, 1); goto L_0C08BEAA; }  /* 0C08BEA6 bf/s */
L_0C08BEAA: BLKS(0x0C08BEAAu);
	r4 = r9;  /* 0C08BEAA mov Rm,Rn */
	UPD(0x0C08BEACu, 1);
L_0C08BEAC: BLKS(0x0C08BEACu);
	r9 = 0xC0BC1B0u; UPD(0x0C08BEAEu, 1);  /* 0C08BEAC mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C08BEAE mov #imm,Rn */
	IF(0x0C08BEB0u); { u32 t_ = r9; PR = 0x0C08BEB4u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08BEB4u); }  /* 0C08BEB0 jsr @Rn */
L_0C08BEB4: BLKS(0x0C08BEB4u);
	T = (r0 & r0) == 0;  /* 0C08BEB4 tst Rm,Rn */
	if (T) { UPD(0x0C08BE58u, 4); goto L_0C08BE58; }  /* 0C08BEB6 bt */
L_0C08BEB8: BLKS(0x0C08BEB8u);
	r0 = r8;  /* 0C08BEB8 mov Rm,Rn */
	r2 = 0xA9u; UPD(0x0C08BEBCu, 2);  /* 0C08BEBA mov.w @(disp,pc),Rn */
	r11 = 0xC0BBF10u; UPD(0x0C08BEBEu, 1);  /* 0C08BEBC mov.l @(disp,pc),Rn */
	IF(0x0C08BEBEu); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08BEC0u, 1);  /* 0C08BEBE mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C08BEC2u, 1);  /* 0C08BEC0 mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C08BEC2 extu.b Rm,Rn */
	IF(0x0C08BEC4u); { u32 t_ = r11; PR = 0x0C08BEC8u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08BEC8u); }  /* 0C08BEC4 jsr @Rn */
L_0C08BEC8: BLKS(0x0C08BEC8u);
	T = (r0 & r0) == 0;  /* 0C08BEC8 tst Rm,Rn */
	if (T) { UPD(0x0C08BE58u, 4); goto L_0C08BE58; }  /* 0C08BECA bt */
L_0C08BECC: BLKS(0x0C08BECCu);
	r15 += 0xFFFFFFFCu;  /* 0C08BECC add #imm,Rn */
	r0 = 0x30000u; UPD(0x0C08BED0u, 2);  /* 0C08BECE mov.l @(disp,pc),Rn */
	W32(r15, r0); UPD(0x0C08BED2u, 1);  /* 0C08BED0 mov.l Rm,@Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C08BED4u, 1);  /* 0C08BED2 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C08BED6u, 1);  /* 0C08BED4 mov.l @(disp,Rm),Rn */
	r8 = 0xC0BAD60u; UPD(0x0C08BED8u, 1);  /* 0C08BED6 mov.l @(disp,pc),Rn */
	r7 = 0x100u; UPD(0x0C08BEDAu, 1);  /* 0C08BED8 mov.w @(disp,pc),Rn */
	IF(0x0C08BEDAu); { u32 t_ = r8; PR = 0x0C08BEDEu; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BAD60, 0x0C0BAD60u, 0x0C08BEDEu); }  /* 0C08BEDA jsr @Rn */
L_0C08BEDE: BLKS(0x0C08BEDEu);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C08BE58u, 3); goto L_0C08BE58; }  /* 0C08BEDE bra */
L_0C08BEF0: BLKS(0x0C08BEF0u);
	r0 = R32(r8 + 0x8u); UPD(0x0C08BEF2u, 1);  /* 0C08BEF0 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C08BEF2 mov Rm,Rn */
	r8 += 0x50u;  /* 0C08BEF4 add #imm,Rn */
	r5 = R32(r8); UPD(0x0C08BEF8u, 3);  /* 0C08BEF6 mov.l @Rm,Rn */
	r0 += r5;  /* 0C08BEF8 add Rm,Rn */
	r8 += 0xFFFFFFB0u;  /* 0C08BEFA add #imm,Rn */
	r0 &= 0x1Fu;  /* 0C08BEFC and #imm,r0 */
	IF(0x0C08BEFEu); { u32 t_ = r11; PR = 0x0C08BF02u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLD(t_, 0x0C08BF02u); }  /* 0C08BEFE jsr @Rn */
L_0C08BF02: BLKS(0x0C08BF02u);
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C08BEACu, 3); goto L_0C08BEAC; }  /* 0C08BF02 bra */
L_0C08BF10: BLKS(0x0C08BF10u);
	W32(r8 + 0x30u, r0); UPD(0x0C08BF12u, 1);  /* 0C08BF10 mov.l Rm,@(disp,Rn) */
	r5 = 0xFFFD8000u; UPD(0x0C08BF14u, 1);  /* 0C08BF12 mov.l @(disp,pc),Rn */
	r1 = R32(r8 + 0x24u); UPD(0x0C08BF16u, 1);  /* 0C08BF14 mov.l @(disp,Rm),Rn */
	r0 = 0x1000000u; UPD(0x0C08BF18u, 1);  /* 0C08BF16 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r0;  /* 0C08BF18 cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x2Cu, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08BE58u, 4); goto L_0C08BE58; } UPD(0x0C08BF1Eu, 1); goto L_0C08BF1E; }  /* 0C08BF1A bt/s */
L_0C08BF1E: BLKS(0x0C08BF1Eu);
	r11 = 0xC069B50u; UPD(0x0C08BF20u, 1);  /* 0C08BF1E mov.l @(disp,pc),Rn */
	IF(0x0C08BF20u); { u32 t_ = r11; PR = 0x0C08BF24u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C08BF24u); }  /* 0C08BF20 jsr @Rn */
L_0C08BF24: BLKS(0x0C08BF24u);
	r4 = 0x2A0u; UPD(0x0C08BF26u, 1);  /* 0C08BF24 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C08BF26 exts.w Rm,Rn */
	IF(0x0C08BF28u); MACL = r1 * r4;  /* 0C08BF28 mul.l Rm,Rn */
	r3 = 0xC29D1D8u; UPD(0x0C08BF2Cu, 4);  /* 0C08BF2A mov.l @(disp,pc),Rn */
	IF(0x0C08BF2Cu); r2 = MACL;  /* 0C08BF2C sts macl,Rn */
	r3 += r2;  /* 0C08BF2E add Rm,Rn */
	r9 = R32(r8 + 0x28u); UPD(0x0C08BF32u, 3);  /* 0C08BF30 mov.l @(disp,Rm),Rn */
	r11 = R32(r3 + 0x14u); UPD(0x0C08BF34u, 1);  /* 0C08BF32 mov.l @(disp,Rm),Rn */
	r7 = 0x1000u; UPD(0x0C08BF36u, 1);  /* 0C08BF34 mov.w @(disp,pc),Rn */
	T = (s32)r9 > (s32)r11;  /* 0C08BF36 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08BF40u, 4); goto L_0C08BF40; } goto L_0C08BF3C; }  /* 0C08BF38 bf/s */
L_0C08BF3C: BLKS(0x0C08BF3Cu);
	r7 = 0xFFFFF000u; UPD(0x0C08BF3Eu, 2);  /* 0C08BF3C mov.w @(disp,pc),Rn */
	r6 = 0xFFFFFFFFu;  /* 0C08BF3E mov #imm,Rn */
	UPD(0x0C08BF40u, 1);
L_0C08BF40: BLKS(0x0C08BF40u);
	r0 = 0x8Cu; UPD(0x0C08BF42u, 1);  /* 0C08BF40 mov.w @(disp,pc),Rn */
	IF(0x0C08BF42u); W32(r0 + r8, r7); UPD(0x0C08BF44u, 1);  /* 0C08BF42 mov.l Rm,@(r0,Rn) */
	r8 += 0x50u;  /* 0C08BF44 add #imm,Rn */
	W32(r8, r6); UPD(0x0C08BF48u, 2);  /* 0C08BF46 mov.l Rm,@Rn */
	r8 = (u32)(s32)(s8)R8(r10); UPD(0x0C08BF4Au, 1);  /* 0C08BF48 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C08BF4A add #imm,Rn */
	{ W8(r10, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C08BE58u, 4); goto L_0C08BE58; }  /* 0C08BF4C bra */
L_0C08BF50: BLKS(0x0C08BF50u);
	{ IF(0x0C08BF52u); ; /* slot nop */ UPD(0x0C08BE36u, 3); goto L_0C08BE36; }  /* 0C08BF50 bra */
}

void blk_f_0C08BFB0(sh3_t *c)
{
	LOCALS;
L_0C08BFB0: BLKS(0x0C08BFB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08BFB2u, 1);  /* 0C08BFB0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08BFB4u, 1);  /* 0C08BFB2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08BFB6u, 1);  /* 0C08BFB4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08BFB8u, 1);  /* 0C08BFB6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08BFBAu, 1);  /* 0C08BFB8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08BFBCu, 1);  /* 0C08BFBA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08BFBEu, 1);  /* 0C08BFBC mov.l Rm,@-Rn */
	r10 = 0xC2460ACu; UPD(0x0C08BFC0u, 1);  /* 0C08BFBE mov.l @(disp,pc),Rn */
	IF(0x0C08BFC0u); r15 -= 4; W32(r15, PR); UPD(0x0C08BFC2u, 1);  /* 0C08BFC0 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C08BFC4u, 1);  /* 0C08BFC2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08BFC4 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C08BFC8u, 2);  /* 0C08BFC6 mov.w @Rm,Rn */
	r14 = r15;  /* 0C08BFC8 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C08BFCCu, 2);  /* 0C08BFCA mov.l @(disp,pc),Rn */
	IF(0x0C08BFCCu); { u32 t_ = r8; PR = 0x0C08BFD0u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C08BFD0u); }  /* 0C08BFCC jsr @Rn */
L_0C08BFD0: BLKS(0x0C08BFD0u);
	T = (r0 & r0) == 0;  /* 0C08BFD0 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08BFF0u, 4); goto L_0C08BFF0; } UPD(0x0C08BFD6u, 1); goto L_0C08BFD6; }  /* 0C08BFD2 bf/s */
L_0C08BFD6: BLKS(0x0C08BFD6u);
	r14 += 0x4u;  /* 0C08BFD6 add #imm,Rn */
	r15 = r14;  /* 0C08BFD8 mov Rm,Rn */
	IF(0x0C08BFDAu); PR = R32(r15); r15 += 4; UPD(0x0C08BFDCu, 3);  /* 0C08BFDA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08BFDEu, 1);  /* 0C08BFDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08BFE0u, 1);  /* 0C08BFDE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08BFE2u, 1);  /* 0C08BFE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08BFE4u, 1);  /* 0C08BFE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08BFE6u, 1);  /* 0C08BFE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08BFE8u, 1);  /* 0C08BFE6 mov.l @Rm+,Rn */
	IF(0x0C08BFE8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08BFE8 rts */
L_0C08BFF0: BLKS(0x0C08BFF0u);
	r8 = 0xC071740u; UPD(0x0C08BFF2u, 1);  /* 0C08BFF0 mov.l @(disp,pc),Rn */
	IF(0x0C08BFF2u); { u32 t_ = r8; PR = 0x0C08BFF6u; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08BFF6u); }  /* 0C08BFF2 jsr @Rn */
L_0C08BFF6: BLKS(0x0C08BFF6u);
	T = (r0 & r0) == 0;  /* 0C08BFF6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08BFD6u, 4); goto L_0C08BFD6; } goto L_0C08BFFC; }  /* 0C08BFF8 bt/s */
L_0C08BFFC: BLKS(0x0C08BFFCu);
	r13 = 0xC28EDFCu; UPD(0x0C08BFFEu, 2);  /* 0C08BFFC mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C08C000u, 1);  /* 0C08BFFE mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r12 = v_; } UPD(0x0C08C002u, 1);  /* 0C08C000 mov.w @Rm+,Rn */
	IF(0x0C08C002u); MACL = r12 * r8;  /* 0C08C002 mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C08C006u, 3);  /* 0C08C004 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C08C008u, 1);  /* 0C08C006 mov.w @Rm,Rn */
	IF(0x0C08C008u); r8 = MACL;  /* 0C08C008 sts macl,Rn */
	r11 = 0xD3000104u; UPD(0x0C08C00Cu, 2);  /* 0C08C00A mov.l @(disp,pc),Rn */
	r8 += r1;  /* 0C08C00C add Rm,Rn */
	r4 = r2 & 0xFFFF;  /* 0C08C00E extu.w Rm,Rn */
	W32(r8, r11); UPD(0x0C08C012u, 3);  /* 0C08C010 mov.l Rm,@Rn */
	r0 = 0xC0A8A30u; UPD(0x0C08C014u, 1);  /* 0C08C012 mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C08C014 mov #imm,Rn */
	W32(r8 + 0x4u, r4); UPD(0x0C08C018u, 2);  /* 0C08C016 mov.l Rm,@(disp,Rn) */
	r9 = 0xC0722E0u; UPD(0x0C08C01Au, 1);  /* 0C08C018 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C08C01A mov Rm,Rn */
	r10 = 0x1600000u; UPD(0x0C08C01Eu, 2);  /* 0C08C01C mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r11); UPD(0x0C08C020u, 1);  /* 0C08C01E mov.l Rm,@(disp,Rn) */
	IF(0x0C08C020u); { u32 t_ = r0; PR = 0x0C08C024u; W32(r8 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08C024u); }  /* 0C08C020 jsr @Rn */
L_0C08C024: BLKS(0x0C08C024u);
	r4 = r12;  /* 0C08C024 mov Rm,Rn */
	IF(0x0C08C026u); { u32 t_ = r9; PR = 0x0C08C02Au; W32(r8 + 0x24u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C08C02Au); }  /* 0C08C026 jsr @Rn */
L_0C08C02A: BLKS(0x0C08C02Au);
	r7 = 0xC0A9AE0u; UPD(0x0C08C02Cu, 1);  /* 0C08C02A mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C08C02C mov Rm,Rn */
	IF(0x0C08C02Eu); { u32 t_ = r7; PR = 0x0C08C032u; r12 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08C032u); }  /* 0C08C02E jsr @Rn */
L_0C08C032: BLKS(0x0C08C032u);
	r0 = 0x86u; UPD(0x0C08C034u, 1);  /* 0C08C032 mov.w @(disp,pc),Rn */
	r4 = r8;  /* 0C08C034 mov Rm,Rn */
	r6 = 0x100u; UPD(0x0C08C038u, 2);  /* 0C08C036 mov.w @(disp,pc),Rn */
	r2 = 0x14u;  /* 0C08C038 mov #imm,Rn */
	IF(0x0C08C03Au); W16(r0 + r8, r6); UPD(0x0C08C03Cu, 2);  /* 0C08C03A mov.w Rm,@(r0,Rn) */
	r5 = 0x30000u; UPD(0x0C08C03Eu, 1);  /* 0C08C03C mov.l @(disp,pc),Rn */
	r0 += 0x6u;  /* 0C08C03E add #imm,Rn */
	r1 = 0xA8u; UPD(0x0C08C042u, 2);  /* 0C08C040 mov.w @(disp,pc),Rn */
	IF(0x0C08C042u); W32(r0 + r8, r5); UPD(0x0C08C044u, 1);  /* 0C08C042 mov.l Rm,@(r0,Rn) */
	r4 += r1;  /* 0C08C044 add Rm,Rn */
	r4 += 0x1u;  /* 0C08C046 add #imm,Rn */
	r0 += 0x21u;  /* 0C08C048 add #imm,Rn */
	r3 = 0xFFFF0000u; UPD(0x0C08C04Cu, 4);  /* 0C08C04A mov.l @(disp,pc),Rn */
	IF(0x0C08C04Cu); W8(r0 + r8, r2); UPD(0x0C08C04Eu, 1);  /* 0C08C04C mov.b Rm,@(r0,Rn) */
	W8(r4, r2); UPD(0x0C08C050u, 1);  /* 0C08C04E mov.b Rm,@Rn */
	W32(r8 + 0x30u, r11); UPD(0x0C08C052u, 1);  /* 0C08C050 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r3); UPD(0x0C08C054u, 1);  /* 0C08C052 mov.l Rm,@(disp,Rn) */
	r11 = r8;  /* 0C08C054 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C08C058u, 2);  /* 0C08C056 mov.l Rm,@Rn */
L_0C08C058: BLKS(0x0C08C058u);
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r10 = v_; } UPD(0x0C08C05Au, 1);  /* 0C08C058 mov.w @Rm+,Rn */
	r1 = 0x4u;  /* 0C08C05A mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C08C05Eu, 2);  /* 0C08C05C mov.w @(disp,pc),Rn */
	IF(0x0C08C05Eu); MACL = r10 * r8;  /* 0C08C05E mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08C062u, 3);  /* 0C08C060 mov.l @(disp,pc),Rn */
	r6 = 0xC28EDFCu; UPD(0x0C08C064u, 1);  /* 0C08C062 mov.l @(disp,pc),Rn */
	IF(0x0C08C064u); r8 = MACL;  /* 0C08C064 sts macl,Rn */
	r9 = (u32)(s32)(s16)R16(r6); UPD(0x0C08C068u, 2);  /* 0C08C066 mov.w @Rm,Rn */
	r8 += r7;  /* 0C08C068 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C08C06A add #imm,Rn */
	W16(r8, r9); UPD(0x0C08C06Eu, 3);  /* 0C08C06C mov.w Rm,@Rn */
	r6 = 0x0u;  /* 0C08C06E mov #imm,Rn */
	r9 = r12;  /* 0C08C070 mov Rm,Rn */
	IF(0x0C08C072u); ARG0(0x491Du); { s32 s_ = (s32)r1; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C08C072 shld Rm,Rn */
	r3 = 0xC2460ACu; UPD(0x0C08C076u, 4);  /* 0C08C074 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C08C076 add #imm,Rn */
	r5 = 0xC1A0B64u; UPD(0x0C08C07Au, 2);  /* 0C08C078 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C08C07Cu, 1);  /* 0C08C07A mov.w @Rm,Rn */
	r9 += r5;  /* 0C08C07C add Rm,Rn */
	r2 = R32(r9); UPD(0x0C08C080u, 2);  /* 0C08C07E mov.l @Rm,Rn */
	r0 = r4 & 0xFFFF;  /* 0C08C080 extu.w Rm,Rn */
	W32(r8, r2); UPD(0x0C08C084u, 2);  /* 0C08C082 mov.l Rm,@Rn */
	r4 = r10;  /* 0C08C084 mov Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C08C088u, 2);  /* 0C08C086 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A8A30u; UPD(0x0C08C08Au, 1);  /* 0C08C088 mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x4u); UPD(0x0C08C08Cu, 1);  /* 0C08C08A mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r6); UPD(0x0C08C08Eu, 1);  /* 0C08C08C mov.l Rm,@(disp,Rn) */
	IF(0x0C08C08Eu); { u32 t_ = r5; PR = 0x0C08C092u; W32(r8 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08C092u); }  /* 0C08C08E jsr @Rn */
L_0C08C092: BLKS(0x0C08C092u);
	r3 = 0x86u; UPD(0x0C08C094u, 1);  /* 0C08C092 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08C094 mov Rm,Rn */
	r2 = 0x100u; UPD(0x0C08C098u, 2);  /* 0C08C096 mov.w @(disp,pc),Rn */
	IF(0x0C08C098u); W16(r0 + r3, r2); UPD(0x0C08C09Au, 1);  /* 0C08C098 mov.w Rm,@(r0,Rn) */
	r4 = R32(r11 + 0x24u); UPD(0x0C08C09Cu, 1);  /* 0C08C09A mov.l @(disp,Rm),Rn */
	r0 = R32(r11 + 0x28u); UPD(0x0C08C09Eu, 1);  /* 0C08C09C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C08C0A0u, 1);  /* 0C08C09E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C08C0A2u, 1);  /* 0C08C0A0 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C08C0A2 mov Rm,Rn */
	r7 = R32(r9 + 0x8u); UPD(0x0C08C0A6u, 2);  /* 0C08C0A4 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C08C0A8u, 1);  /* 0C08C0A6 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A9AE0u; UPD(0x0C08C0AAu, 1);  /* 0C08C0A8 mov.l @(disp,pc),Rn */
	r6 = R32(r9 + 0xCu); UPD(0x0C08C0ACu, 1);  /* 0C08C0AA mov.l @(disp,Rm),Rn */
	IF(0x0C08C0ACu); { u32 t_ = r5; PR = 0x0C08C0B0u; W32(r8 + 0x30u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08C0B0u); }  /* 0C08C0AC jsr @Rn */
L_0C08C0B0: BLKS(0x0C08C0B0u);
	r0 = 0xB0u; UPD(0x0C08C0B2u, 1);  /* 0C08C0B0 mov.w @(disp,pc),Rn */
	r7 = r8;  /* 0C08C0B2 mov Rm,Rn */
	IF(0x0C08C0B4u); r3 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C08C0B6u, 2);  /* 0C08C0B4 mov.b @(r0,Rm),Rn */
	IF(0x0C08C0B6u); W8(r0 + r8, r3); UPD(0x0C08C0B8u, 1);  /* 0C08C0B6 mov.b Rm,@(r0,Rn) */
	r0 = 0xACu; UPD(0x0C08C0BAu, 1);  /* 0C08C0B8 mov.w @(disp,pc),Rn */
	r7 += r0;  /* 0C08C0BA add Rm,Rn */
	r2 = R32(r14); UPD(0x0C08C0BEu, 2);  /* 0C08C0BC mov.l @Rm,Rn */
	r0 += r11;  /* 0C08C0BE add Rm,Rn */
	r4 = 0xA8u; UPD(0x0C08C0C2u, 2);  /* 0C08C0C0 mov.w @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C08C0C2 add #imm,Rn */
	r9 = 0xC0C2360u; UPD(0x0C08C0C6u, 2);  /* 0C08C0C4 mov.l @(disp,pc),Rn */
	r4 += r8;  /* 0C08C0C6 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C08C0CAu, 2);  /* 0C08C0C8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C08C0CA add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C08C0CEu, 2);  /* 0C08C0CC mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C08C0CE add #imm,Rn */
	r6 = 0x9Bu; UPD(0x0C08C0D2u, 2);  /* 0C08C0D0 mov.w @(disp,pc),Rn */
	W8(r4, r1); UPD(0x0C08C0D4u, 1);  /* 0C08C0D2 mov.b Rm,@Rn */
	r8 += r6;  /* 0C08C0D4 add Rm,Rn */
	IF(0x0C08C0D6u); { u32 t_ = r9; PR = 0x0C08C0DAu; W8(r7, r10); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C08C0DAu); }  /* 0C08C0D6 jsr @Rn */
L_0C08C0DA: BLKS(0x0C08C0DAu);
	r5 = r12;  /* 0C08C0DA mov Rm,Rn */
	r5 += 0x1u;  /* 0C08C0DC add #imm,Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C08C0DE exts.w Rm,Rn */
	r3 = 0x3u;  /* 0C08C0E0 mov #imm,Rn */
	T = (s32)r12 > (s32)r3;  /* 0C08C0E2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W8(r8, r0); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08C058u, 8); goto L_0C08C058; } UPD(0x0C08C0E8u, 1); goto L_0C08C0E8; }  /* 0C08C0E4 bf/s */
L_0C08C0E8: BLKS(0x0C08C0E8u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C08BFD6u, 3); goto L_0C08BFD6; }  /* 0C08C0E8 bra */
}

void blk_f_0C08C140(sh3_t *c)
{
	LOCALS;
L_0C08C140: BLKS(0x0C08C140u);
	r3 = 0xB4u; UPD(0x0C08C142u, 1);  /* 0C08C140 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C08C142 exts.w Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08C146u, 2);  /* 0C08C144 mov.l Rm,@-Rn */
	IF(0x0C08C146u); MACL = r4 * r3;  /* 0C08C146 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08C14Au, 3);  /* 0C08C148 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08C14Cu, 1);  /* 0C08C14A mov.l @(disp,pc),Rn */
	IF(0x0C08C14Cu); r2 = MACL;  /* 0C08C14C sts macl,Rn */
	IF(0x0C08C14Eu); r15 -= 4; W32(r15, PR); UPD(0x0C08C150u, 2);  /* 0C08C14E sts.l pr,@-Rn */
	r0 += r2;  /* 0C08C150 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08C154u, 2);  /* 0C08C152 mov.l @(disp,Rm),Rn */
	r0 = 0x12u;  /* 0C08C154 mov #imm,Rn */
	T = r2 > r0;  /* 0C08C156 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08C1BEu, 5); goto L_0C08C1BE; } goto L_0C08C15C; }  /* 0C08C158 bt/s */
L_0C08C15C: BLKS(0x0C08C15Cu);
	r0 = 0xC08C16Cu;  /* 0C08C15C mova @(disp,pc),r0 */
	IF(0x0C08C15Eu); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08C160u, 3);  /* 0C08C15E mov.b @(r0,Rm),Rn */
	IF(0x0C08C160u); { u32 tv_ = (r5 + 0x0C08C164u); u32 t_ = PHYS(tv_); IF(0x0C08C162u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08C160 braf Rn */
L_0C08C1BE: BLKS(0x0C08C1BEu);
	r15 = r14;  /* 0C08C1BE mov Rm,Rn */
	IF(0x0C08C1C0u); PR = R32(r15); r15 += 4; UPD(0x0C08C1C2u, 2);  /* 0C08C1C0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08C1C4u, 1);  /* 0C08C1C2 mov.l @Rm+,Rn */
	IF(0x0C08C1C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08C1C4 rts */
}

void blk_f_0C08C210(sh3_t *c)
{
	LOCALS;
	goto L_0C08C210;
L_0C08C140: BLKS(0x0C08C140u);
	r3 = 0xB4u; UPD(0x0C08C142u, 1);  /* 0C08C140 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C08C142 exts.w Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08C146u, 2);  /* 0C08C144 mov.l Rm,@-Rn */
	IF(0x0C08C146u); MACL = r4 * r3;  /* 0C08C146 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08C14Au, 3);  /* 0C08C148 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08C14Cu, 1);  /* 0C08C14A mov.l @(disp,pc),Rn */
	IF(0x0C08C14Cu); r2 = MACL;  /* 0C08C14C sts macl,Rn */
	IF(0x0C08C14Eu); r15 -= 4; W32(r15, PR); UPD(0x0C08C150u, 2);  /* 0C08C14E sts.l pr,@-Rn */
	r0 += r2;  /* 0C08C150 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08C154u, 2);  /* 0C08C152 mov.l @(disp,Rm),Rn */
	r0 = 0x12u;  /* 0C08C154 mov #imm,Rn */
	T = r2 > r0;  /* 0C08C156 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08C1BEu, 5); goto L_0C08C1BE; } goto L_0C08C15C; }  /* 0C08C158 bt/s */
L_0C08C15C: BLKS(0x0C08C15Cu);
	r0 = 0xC08C16Cu;  /* 0C08C15C mova @(disp,pc),r0 */
	IF(0x0C08C15Eu); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08C160u, 3);  /* 0C08C15E mov.b @(r0,Rm),Rn */
	IF(0x0C08C160u); { u32 tv_ = (r5 + 0x0C08C164u); u32 t_ = PHYS(tv_); IF(0x0C08C162u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08C160 braf Rn */
L_0C08C1BE: BLKS(0x0C08C1BEu);
	r15 = r14;  /* 0C08C1BE mov Rm,Rn */
	IF(0x0C08C1C0u); PR = R32(r15); r15 += 4; UPD(0x0C08C1C2u, 2);  /* 0C08C1C0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08C1C4u, 1);  /* 0C08C1C2 mov.l @Rm+,Rn */
	IF(0x0C08C1C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08C1C4 rts */
L_0C08C210: BLKS(0x0C08C210u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08C212u, 1);  /* 0C08C210 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08C214u, 1);  /* 0C08C212 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08C216u, 1);  /* 0C08C214 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C08C218u, 1);  /* 0C08C216 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C08C218 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08C21Cu, 2);  /* 0C08C21A mov.l Rm,@-Rn */
	IF(0x0C08C21Cu); MACL = r10 * r3;  /* 0C08C21C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08C220u, 3);  /* 0C08C21E mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08C222u, 1);  /* 0C08C220 mov.l @(disp,pc),Rn */
	IF(0x0C08C222u); r2 = MACL;  /* 0C08C222 sts macl,Rn */
	IF(0x0C08C224u); r15 -= 4; W32(r15, PR); UPD(0x0C08C226u, 2);  /* 0C08C224 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08C226 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08C22Au, 2);  /* 0C08C228 mov.l @(disp,Rm),Rn */
	r0 = 0x12u;  /* 0C08C22A mov #imm,Rn */
	T = r2 > r0;  /* 0C08C22C cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08C236u, 5); goto L_0C08C236; } goto L_0C08C232; }  /* 0C08C22E bf/s */
L_0C08C232: BLKS(0x0C08C232u);
	{ IF(0x0C08C234u); ; /* slot nop */ UPD(0x0C08C3ACu, 4); goto L_0C08C3AC; }  /* 0C08C232 bra */
L_0C08C236: BLKS(0x0C08C236u);
	r0 = 0xC08C248u;  /* 0C08C236 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08C238 add Rm,Rn */
	IF(0x0C08C23Au); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08C23Cu, 3);  /* 0C08C23A mov.w @(r0,Rm),Rn */
	IF(0x0C08C23Cu); { u32 tv_ = (r4 + 0x0C08C240u); u32 t_ = PHYS(tv_); IF(0x0C08C23Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C270u: goto L_0C08C270; case 0x0C08C2F0u: goto L_0C08C2F0; case 0x0C08C340u: goto L_0C08C340; default: JUMPD(tv_); } }  /* 0C08C23C braf Rn */
L_0C08C270: BLKS(0x0C08C270u);
	r7 = 0xB4u; UPD(0x0C08C272u, 1);  /* 0C08C270 mov.w @(disp,pc),Rn */
	IF(0x0C08C272u); MACL = r10 * r7;  /* 0C08C272 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08C276u, 3);  /* 0C08C274 mov.l @(disp,pc),Rn */
	IF(0x0C08C276u); r7 = MACL;  /* 0C08C276 sts macl,Rn */
	r7 += r0;  /* 0C08C278 add Rm,Rn */
	r6 = R32(r7 + 0x24u); UPD(0x0C08C27Cu, 3);  /* 0C08C27A mov.l @(disp,Rm),Rn */
	r11 = R32(r7 + 0x2Cu); UPD(0x0C08C27Eu, 1);  /* 0C08C27C mov.l @(disp,Rm),Rn */
	r8 = R32(r7 + 0x28u); UPD(0x0C08C280u, 1);  /* 0C08C27E mov.l @(disp,Rm),Rn */
	r6 += r11;  /* 0C08C280 add Rm,Rn */
	r9 = R32(r7 + 0x30u); UPD(0x0C08C284u, 2);  /* 0C08C282 mov.l @(disp,Rm),Rn */
	r1 = (r6 >> 16) | (r6 << 16);  /* 0C08C284 swap.w Rm,Rn */
	r5 = 0xFFFFFF60u; UPD(0x0C08C288u, 2);  /* 0C08C286 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C08C288 add Rm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C08C28A exts.w Rm,Rn */
	r3 += r5;  /* 0C08C28C add Rm,Rn */
	W32(r7 + 0x24u, r6); UPD(0x0C08C290u, 4);  /* 0C08C28E mov.l Rm,@(disp,Rn) */
	IF(0x0C08C290u); T = (s32)r3 >= 0;  /* 0C08C290 cmp/pz Rn */
	{ u32 c_ = !T; W32(r7 + 0x28u, r8); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08C2E0u, 4); goto L_0C08C2E0; } UPD(0x0C08C296u, 1); goto L_0C08C296; }  /* 0C08C292 bf/s */
L_0C08C296: BLKS(0x0C08C296u);
	r2 = 0xE0u; UPD(0x0C08C298u, 1);  /* 0C08C296 mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r2;  /* 0C08C298 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08C2A0u, 4); goto L_0C08C2A0; } goto L_0C08C29E; }  /* 0C08C29A bf/s */
L_0C08C29E: BLKS(0x0C08C29Eu);
	W32(r7, r3); UPD(0x0C08C2A0u, 2);  /* 0C08C29E mov.l Rm,@Rn */
L_0C08C2A0: BLKS(0x0C08C2A0u);
	r6 = R32(r7 + 0x28u); UPD(0x0C08C2A2u, 1);  /* 0C08C2A0 mov.l @(disp,Rm),Rn */
	r4 = 0xFFFFFE00u; UPD(0x0C08C2A4u, 1);  /* 0C08C2A2 mov.w @(disp,pc),Rn */
	r5 = (r6 >> 16) | (r6 << 16);  /* 0C08C2A4 swap.w Rm,Rn */
	r2 = (u32)(s32)(s16)r5;  /* 0C08C2A6 exts.w Rm,Rn */
	r2 += r4;  /* 0C08C2A8 add Rm,Rn */
	IF(0x0C08C2AAu); T = (s32)r2 >= 0;  /* 0C08C2AA cmp/pz Rn */
	if (!T) { UPD(0x0C08C2D0u, 7); goto L_0C08C2D0; }  /* 0C08C2AC bf */
L_0C08C2AE: BLKS(0x0C08C2AEu);
	r8 = 0xB8u; UPD(0x0C08C2B0u, 1);  /* 0C08C2AE mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C08C2B0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08C2B8u, 4); goto L_0C08C2B8; } goto L_0C08C2B6; }  /* 0C08C2B2 bf/s */
L_0C08C2B6: BLKS(0x0C08C2B6u);
	W32(r7, r9); UPD(0x0C08C2B8u, 2);  /* 0C08C2B6 mov.l Rm,@Rn */
L_0C08C2B8: BLKS(0x0C08C2B8u);
	r11 = 0x7u;  /* 0C08C2B8 mov #imm,Rn */
	W32(r7 + 0xCu, r11); UPD(0x0C08C2BCu, 2);  /* 0C08C2BA mov.l Rm,@(disp,Rn) */
L_0C08C2BC: BLKS(0x0C08C2BCu);
	r1 = 0xC0A8AE0u; UPD(0x0C08C2BEu, 1);  /* 0C08C2BC mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08C2BE mov Rm,Rn */
	UPD(0x0C08C2C0u, 1);
L_0C08C2C0: BLKS(0x0C08C2C0u);
	r15 = r14;  /* 0C08C2C0 mov Rm,Rn */
	IF(0x0C08C2C2u); PR = R32(r15); r15 += 4; UPD(0x0C08C2C4u, 2);  /* 0C08C2C2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08C2C6u, 1);  /* 0C08C2C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08C2C8u, 1);  /* 0C08C2C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08C2CAu, 1);  /* 0C08C2C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08C2CCu, 1);  /* 0C08C2CA mov.l @Rm+,Rn */
	IF(0x0C08C2CCu); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C08C140u: goto L_0C08C140; case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C08C2CC jmp @Rn */
L_0C08C2D0: BLKS(0x0C08C2D0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C08C2AEu, 3); goto L_0C08C2AE; }  /* 0C08C2D0 bra */
L_0C08C2E0: BLKS(0x0C08C2E0u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C08C296u, 3); goto L_0C08C296; }  /* 0C08C2E0 bra */
L_0C08C2F0: BLKS(0x0C08C2F0u);
	r8 = 0xC0A8BF0u; UPD(0x0C08C2F2u, 1);  /* 0C08C2F0 mov.l @(disp,pc),Rn */
	IF(0x0C08C2F2u); { u32 t_ = r8; PR = 0x0C08C2F6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C08C2F6u); }  /* 0C08C2F2 jsr @Rn */
L_0C08C2F6: BLKS(0x0C08C2F6u);
	IF(0x0C08C2F6u); T = (s32)r0 >= 0;  /* 0C08C2F6 cmp/pz Rn */
	if (!T) { UPD(0x0C08C330u, 4); goto L_0C08C330; }  /* 0C08C2F8 bf */
L_0C08C2FA: BLKS(0x0C08C2FAu);
	r11 = 0xB4u; UPD(0x0C08C2FCu, 1);  /* 0C08C2FA mov.w @(disp,pc),Rn */
	IF(0x0C08C2FCu); MACL = r10 * r11;  /* 0C08C2FC mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C08C300u, 3);  /* 0C08C2FE mov.l @(disp,pc),Rn */
	IF(0x0C08C300u); r4 = MACL;  /* 0C08C300 sts macl,Rn */
	IF(0x0C08C302u); MACL = r0 * r11;  /* 0C08C302 mul.l Rm,Rn */
	r4 += r9;  /* 0C08C304 add Rm,Rn */
	r1 = R32(r4 + 0x30u); UPD(0x0C08C308u, 5);  /* 0C08C306 mov.l @(disp,Rm),Rn */
	IF(0x0C08C308u); r3 = MACL;  /* 0C08C308 sts macl,Rn */
	r3 += r9;  /* 0C08C30A add Rm,Rn */
	r0 = R32(r3 + 0x28u); UPD(0x0C08C30Eu, 3);  /* 0C08C30C mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C08C30E add Rm,Rn */
	r5 = R32(r3 + 0x24u); UPD(0x0C08C312u, 2);  /* 0C08C310 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x28u, r0); UPD(0x0C08C314u, 1);  /* 0C08C312 mov.l Rm,@(disp,Rn) */
	r6 = R32(r4 + 0x2Cu); UPD(0x0C08C316u, 1);  /* 0C08C314 mov.l @(disp,Rm),Rn */
	r0 = R32(r4 + 0xCu); UPD(0x0C08C318u, 1);  /* 0C08C316 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C08C318 add Rm,Rn */
	W32(r4 + 0x24u, r5); UPD(0x0C08C31Cu, 2);  /* 0C08C31A mov.l Rm,@(disp,Rn) */
	IF(0x0C08C31Cu); r0 <<= 2;  /* 0C08C31C shll2 Rn */
	r2 = 0xC1A0BA4u; UPD(0x0C08C320u, 2);  /* 0C08C31E mov.l @(disp,pc),Rn */
	IF(0x0C08C320u); r7 = R32(r0 + r2); UPD(0x0C08C322u, 1);  /* 0C08C320 mov.l @(r0,Rm),Rn */
	{ W32(r4 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08C2BCu, 3); goto L_0C08C2BC; }  /* 0C08C322 bra */
L_0C08C330: BLKS(0x0C08C330u);
	r1 = 0xC08C140u; UPD(0x0C08C332u, 1);  /* 0C08C330 mov.l @(disp,pc),Rn */
	{ r4 = r10; /* slot mov Rm,Rn */ UPD(0x0C08C2C0u, 3); goto L_0C08C2C0; }  /* 0C08C332 bra */
L_0C08C340: BLKS(0x0C08C340u);
	r8 = 0xC0A8BF0u; UPD(0x0C08C342u, 1);  /* 0C08C340 mov.l @(disp,pc),Rn */
	IF(0x0C08C342u); { u32 t_ = r8; PR = 0x0C08C346u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C08C346u); }  /* 0C08C342 jsr @Rn */
L_0C08C346: BLKS(0x0C08C346u);
	IF(0x0C08C346u); T = (s32)r0 >= 0;  /* 0C08C346 cmp/pz Rn */
	if (!T) { UPD(0x0C08C330u, 4); goto L_0C08C330; }  /* 0C08C348 bf */
L_0C08C34A: BLKS(0x0C08C34Au);
	r4 = 0xB4u; UPD(0x0C08C34Cu, 1);  /* 0C08C34A mov.w @(disp,pc),Rn */
	IF(0x0C08C34Cu); MACL = r10 * r4;  /* 0C08C34C mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C08C350u, 3);  /* 0C08C34E mov.l @(disp,pc),Rn */
	IF(0x0C08C350u); r11 = MACL;  /* 0C08C350 sts macl,Rn */
	IF(0x0C08C352u); MACL = r0 * r4;  /* 0C08C352 mul.l Rm,Rn */
	r11 += r9;  /* 0C08C354 add Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C08C358u, 5);  /* 0C08C356 mov.w @(disp,pc),Rn */
	IF(0x0C08C358u); r3 = MACL;  /* 0C08C358 sts macl,Rn */
	r3 += r9;  /* 0C08C35A add Rm,Rn */
	r0 = R32(r3); UPD(0x0C08C35Eu, 3);  /* 0C08C35C mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C08C360u, 1);  /* 0C08C35E mov.w @(disp,pc),Rn */
	r4 = R32(r11); UPD(0x0C08C362u, 1);  /* 0C08C360 mov.l @Rm,Rn */
	r0 &= r1;  /* 0C08C362 and Rm,Rn */
	r7 = R32(r3 + 0x24u); UPD(0x0C08C366u, 2);  /* 0C08C364 mov.l @(disp,Rm),Rn */
	r4 &= r2;  /* 0C08C366 and Rm,Rn */
	r8 = R32(r11 + 0x2Cu); UPD(0x0C08C36Au, 2);  /* 0C08C368 mov.l @(disp,Rm),Rn */
	r4 |= r0;  /* 0C08C36A or Rm,Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C08C36Eu, 2);  /* 0C08C36C mov.l @(disp,Rm),Rn */
	r7 += r8;  /* 0C08C36E add Rm,Rn */
	r6 = R32(r11 + 0x30u); UPD(0x0C08C372u, 2);  /* 0C08C370 mov.l @(disp,Rm),Rn */
	r9 = 0xC069BF0u; UPD(0x0C08C374u, 1);  /* 0C08C372 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C08C374 add Rm,Rn */
	W32(r11, r4); UPD(0x0C08C378u, 2);  /* 0C08C376 mov.l Rm,@Rn */
	r8 = 0xC068F00u; UPD(0x0C08C37Au, 1);  /* 0C08C378 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08C37A mov Rm,Rn */
	W32(r11 + 0x28u, r5); UPD(0x0C08C37Eu, 2);  /* 0C08C37C mov.l Rm,@(disp,Rn) */
	IF(0x0C08C37Eu); { u32 t_ = r9; PR = 0x0C08C382u; W32(r11 + 0x24u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08C382u); }  /* 0C08C37E jsr @Rn */
L_0C08C382: BLKS(0x0C08C382u);
	r5 = 0x4u;  /* 0C08C382 mov #imm,Rn */
	IF(0x0C08C384u); { u32 t_ = r8; PR = 0x0C08C388u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08C388u); }  /* 0C08C384 jsr @Rn */
L_0C08C388: BLKS(0x0C08C388u);
	r8 = 0x86u; UPD(0x0C08C38Au, 1);  /* 0C08C388 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C08C38A mov Rm,Rn */
	r8 += r11;  /* 0C08C38C add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C08C390u, 3);  /* 0C08C38E mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C08C390 add #imm,Rn */
	r7 = 0xC0A8AE0u; UPD(0x0C08C394u, 2);  /* 0C08C392 mov.l @(disp,pc),Rn */
	IF(0x0C08C394u); r0 >>= 2;  /* 0C08C394 shlr2 Rn */
	IF(0x0C08C396u); r0 >>= 2;  /* 0C08C396 shlr2 Rn */
	r9 = 0xC0BC1B0u; UPD(0x0C08C39Au, 3);  /* 0C08C398 mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C08C39A and #imm,r0 */
	IF(0x0C08C39Cu); { u32 t_ = r7; PR = 0x0C08C3A0u; W32(r11 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C08C3A0u); }  /* 0C08C39C jsr @Rn */
L_0C08C3A0: BLKS(0x0C08C3A0u);
	r4 = r10;  /* 0C08C3A0 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08C3A2 mov #imm,Rn */
	IF(0x0C08C3A4u); { u32 t_ = r9; PR = 0x0C08C3A8u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08C3A8u); }  /* 0C08C3A4 jsr @Rn */
L_0C08C3A8: BLKS(0x0C08C3A8u);
	T = (r0 & r0) == 0;  /* 0C08C3A8 tst Rm,Rn */
	if (!T) { UPD(0x0C08C3C0u, 4); goto L_0C08C3C0; }  /* 0C08C3AA bf */
L_0C08C3AC: BLKS(0x0C08C3ACu);
	r15 = r14;  /* 0C08C3AC mov Rm,Rn */
	IF(0x0C08C3AEu); PR = R32(r15); r15 += 4; UPD(0x0C08C3B0u, 2);  /* 0C08C3AE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08C3B2u, 1);  /* 0C08C3B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08C3B4u, 1);  /* 0C08C3B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08C3B6u, 1);  /* 0C08C3B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08C3B8u, 1);  /* 0C08C3B6 mov.l @Rm+,Rn */
	IF(0x0C08C3B8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08C3B8 rts */
L_0C08C3C0: BLKS(0x0C08C3C0u);
	r9 = (u32)(s32)(s16)R16(r8); UPD(0x0C08C3C2u, 1);  /* 0C08C3C0 mov.w @Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C08C3C4u, 1);  /* 0C08C3C2 mov.l @(disp,pc),Rn */
	r5 = 0xCCCCCu; UPD(0x0C08C3C6u, 1);  /* 0C08C3C4 mov.l @(disp,pc),Rn */
	IF(0x0C08C3C6u); { u32 t_ = r8; PR = 0x0C08C3CAu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08C3CAu); }  /* 0C08C3C6 jsr @Rn */
L_0C08C3CA: BLKS(0x0C08C3CAu);
	r8 = R32(r11 + 0x24u); UPD(0x0C08C3CCu, 1);  /* 0C08C3CA mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C08C3CC mov Rm,Rn */
	r8 += r0;  /* 0C08C3CE add Rm,Rn */
	r0 = 0xC069AF0u; UPD(0x0C08C3D2u, 3);  /* 0C08C3D0 mov.l @(disp,pc),Rn */
	r3 = 0xFFFD0000u; UPD(0x0C08C3D4u, 1);  /* 0C08C3D2 mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C08C3D6u, 1);  /* 0C08C3D4 mov.l @(disp,pc),Rn */
	IF(0x0C08C3D6u); { u32 t_ = r0; PR = 0x0C08C3DAu; r8 += r3; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08C3DAu); }  /* 0C08C3D6 jsr @Rn */
L_0C08C3DA: BLKS(0x0C08C3DAu);
	r6 = R32(r11 + 0x28u); UPD(0x0C08C3DCu, 1);  /* 0C08C3DA mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08C3DC add #imm,Rn */
	r6 += r0;  /* 0C08C3DE add Rm,Rn */
	r11 = 0xC0BA480u; UPD(0x0C08C3E2u, 3);  /* 0C08C3E0 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C08C3E2 mov #imm,Rn */
	r0 = 0x30000u; UPD(0x0C08C3E6u, 2);  /* 0C08C3E4 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C08C3E6 mov Rm,Rn */
	W32(r15, r0); UPD(0x0C08C3EAu, 2);  /* 0C08C3E8 mov.l Rm,@Rn */
	IF(0x0C08C3EAu); { u32 t_ = r11; PR = 0x0C08C3EEu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C08C3EEu); }  /* 0C08C3EA jsr @Rn */
L_0C08C3EE: BLKS(0x0C08C3EEu);
	r4 = r10;  /* 0C08C3EE mov Rm,Rn */
	r10 = 0xC069B90u; UPD(0x0C08C3F2u, 2);  /* 0C08C3F0 mov.l @(disp,pc),Rn */
	IF(0x0C08C3F2u); { u32 t_ = r10; PR = 0x0C08C3F6u; r15 += 0x4u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C08C3F6u); }  /* 0C08C3F2 jsr @Rn */
L_0C08C3F6: BLKS(0x0C08C3F6u);
	{ IF(0x0C08C3F8u); ; /* slot nop */ UPD(0x0C08C3ACu, 3); goto L_0C08C3AC; }  /* 0C08C3F6 bra */
}

void blk_f_0C08C450(sh3_t *c)
{
	LOCALS;
L_0C08C450: BLKS(0x0C08C450u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08C452u, 1);  /* 0C08C450 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08C454u, 1);  /* 0C08C452 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08C456u, 1);  /* 0C08C454 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08C458u, 1);  /* 0C08C456 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08C45Au, 1);  /* 0C08C458 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08C45Cu, 1);  /* 0C08C45A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08C45Eu, 1);  /* 0C08C45C mov.l Rm,@-Rn */
	r10 = 0xC2460ACu; UPD(0x0C08C460u, 1);  /* 0C08C45E mov.l @(disp,pc),Rn */
	IF(0x0C08C460u); r15 -= 4; W32(r15, PR); UPD(0x0C08C462u, 1);  /* 0C08C460 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C08C464u, 1);  /* 0C08C462 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE8u;  /* 0C08C464 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C08C468u, 2);  /* 0C08C466 mov.w @Rm,Rn */
	r14 = r15;  /* 0C08C468 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C08C46Cu, 2);  /* 0C08C46A mov.l @(disp,pc),Rn */
	IF(0x0C08C46Cu); { u32 t_ = r8; PR = 0x0C08C470u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C08C470u); }  /* 0C08C46C jsr @Rn */
L_0C08C470: BLKS(0x0C08C470u);
	T = (r0 & r0) == 0;  /* 0C08C470 tst Rm,Rn */
	if (!T) { UPD(0x0C08C490u, 4); goto L_0C08C490; }  /* 0C08C472 bf */
L_0C08C474: BLKS(0x0C08C474u);
	r0 = 0x1u;  /* 0C08C474 mov #imm,Rn */
	r14 += 0x18u;  /* 0C08C476 add #imm,Rn */
	r15 = r14;  /* 0C08C478 mov Rm,Rn */
	IF(0x0C08C47Au); PR = R32(r15); r15 += 4; UPD(0x0C08C47Cu, 4);  /* 0C08C47A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08C47Eu, 1);  /* 0C08C47C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08C480u, 1);  /* 0C08C47E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08C482u, 1);  /* 0C08C480 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08C484u, 1);  /* 0C08C482 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08C486u, 1);  /* 0C08C484 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08C488u, 1);  /* 0C08C486 mov.l @Rm+,Rn */
	IF(0x0C08C488u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08C488 rts */
L_0C08C490: BLKS(0x0C08C490u);
	r8 = 0xC071740u; UPD(0x0C08C492u, 1);  /* 0C08C490 mov.l @(disp,pc),Rn */
	IF(0x0C08C492u); { u32 t_ = r8; PR = 0x0C08C496u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08C496u); }  /* 0C08C492 jsr @Rn */
L_0C08C496: BLKS(0x0C08C496u);
	T = (r0 & r0) == 0;  /* 0C08C496 tst Rm,Rn */
	if (T) { UPD(0x0C08C474u, 4); goto L_0C08C474; }  /* 0C08C498 bt */
L_0C08C49A: BLKS(0x0C08C49Au);
	r4 = 0x10u;  /* 0C08C49A mov #imm,Rn */
	r3 = 0xC28EDFCu; UPD(0x0C08C49Eu, 2);  /* 0C08C49C mov.l @(disp,pc),Rn */
	r8 = 0xC062780u; UPD(0x0C08C4A0u, 1);  /* 0C08C49E mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r13 = v_; } UPD(0x0C08C4A2u, 1);  /* 0C08C4A0 mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C08C4A4u, 1);  /* 0C08C4A2 mov.w @(disp,pc),Rn */
	IF(0x0C08C4A4u); { u32 t_ = r8; PR = 0x0C08C4A8u; W32(r14, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08C4A8u); }  /* 0C08C4A4 jsr @Rn */
L_0C08C4A8: BLKS(0x0C08C4A8u);
	IF(0x0C08C4A8u); MACL = r13 * r9;  /* 0C08C4A8 mul.l Rm,Rn */
	r8 = r0;  /* 0C08C4AA mov Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C08C4AEu, 4);  /* 0C08C4AC mov.l @(disp,pc),Rn */
	IF(0x0C08C4AEu); r9 = MACL;  /* 0C08C4AE sts macl,Rn */
	r1 = 0xC0A8A30u; UPD(0x0C08C4B2u, 2);  /* 0C08C4B0 mov.l @(disp,pc),Rn */
	r9 += r2;  /* 0C08C4B2 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C08C4B6u, 2);  /* 0C08C4B4 mov.w @Rm,Rn */
	r6 = 0x0u;  /* 0C08C4B6 mov #imm,Rn */
	r11 = 0xC3000000u; UPD(0x0C08C4BAu, 2);  /* 0C08C4B8 mov.l @(disp,pc),Rn */
	r7 = r0 & 0xFFFF;  /* 0C08C4BA extu.w Rm,Rn */
	r8 += 0x10u;  /* 0C08C4BC add #imm,Rn */
	W32(r9 + 0x4u, r7); UPD(0x0C08C4C0u, 3);  /* 0C08C4BE mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C08C4C0 mov Rm,Rn */
	W32(r9 + 0xCu, r6); UPD(0x0C08C4C4u, 2);  /* 0C08C4C2 mov.l Rm,@(disp,Rn) */
	W32(r9, r11); UPD(0x0C08C4C6u, 1);  /* 0C08C4C4 mov.l Rm,@Rn */
	IF(0x0C08C4C6u); { u32 t_ = r1; PR = 0x0C08C4CAu; W32(r9 + 0x8u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08C4CAu); }  /* 0C08C4C6 jsr @Rn */
L_0C08C4CA: BLKS(0x0C08C4CAu);
	r4 = 0x1640000u; UPD(0x0C08C4CCu, 1);  /* 0C08C4CA mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFF0u;  /* 0C08C4CC add #imm,Rn */
	r12 = 0xC0722E0u; UPD(0x0C08C4D0u, 2);  /* 0C08C4CE mov.l @(disp,pc),Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C08C4D2u, 1);  /* 0C08C4D0 mov.l Rm,@(disp,Rn) */
	r10 = 0xC0A9AE0u; UPD(0x0C08C4D4u, 1);  /* 0C08C4D2 mov.l @(disp,pc),Rn */
	IF(0x0C08C4D4u); { u32 t_ = r12; PR = 0x0C08C4D8u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C08C4D8u); }  /* 0C08C4D4 jsr @Rn */
L_0C08C4D8: BLKS(0x0C08C4D8u);
	IF(0x0C08C4D8u); { u32 t_ = r10; PR = 0x0C08C4DCu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08C4DCu); }  /* 0C08C4D8 jsr @Rn */
L_0C08C4DC: BLKS(0x0C08C4DCu);
	r5 = 0x100u; UPD(0x0C08C4DEu, 1);  /* 0C08C4DC mov.w @(disp,pc),Rn */
	r3 = r8;  /* 0C08C4DE mov Rm,Rn */
	r0 = 0x8Au; UPD(0x0C08C4E2u, 2);  /* 0C08C4E0 mov.w @(disp,pc),Rn */
	IF(0x0C08C4E2u); r3 <<= 2;  /* 0C08C4E2 shll2 Rn */
	W32(r14 + 0x4u, r3); UPD(0x0C08C4E6u, 2);  /* 0C08C4E4 mov.l Rm,@(disp,Rn) */
	r12 = r9;  /* 0C08C4E6 mov Rm,Rn */
	IF(0x0C08C4E8u); W16(r0 + r9, r5); UPD(0x0C08C4EAu, 2);  /* 0C08C4E8 mov.w Rm,@(r0,Rn) */
	r2 = 0xC1A3650u; UPD(0x0C08C4ECu, 1);  /* 0C08C4EA mov.l @(disp,pc),Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C08C4EEu, 1);  /* 0C08C4EC mov.l @(disp,Rm),Rn */
	IF(0x0C08C4EEu); r11 = R32(r0 + r2); UPD(0x0C08C4F0u, 1);  /* 0C08C4EE mov.l @(r0,Rm),Rn */
	r0 = 0x8Cu; UPD(0x0C08C4F2u, 1);  /* 0C08C4F0 mov.w @(disp,pc),Rn */
	IF(0x0C08C4F2u); W32(r0 + r9, r11); UPD(0x0C08C4F4u, 1);  /* 0C08C4F2 mov.l Rm,@(r0,Rn) */
	r0 = 0xACu; UPD(0x0C08C4F6u, 1);  /* 0C08C4F4 mov.w @(disp,pc),Rn */
	r10 = 0x84u; UPD(0x0C08C4F8u, 1);  /* 0C08C4F6 mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C08C4F8 add Rm,Rn */
	r12 += r10;  /* 0C08C4FA add Rm,Rn */
	r0 += 0x1u;  /* 0C08C4FC add #imm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C08C500u, 4);  /* 0C08C4FE mov.l Rm,@(disp,Rn) */
	r12 += 0x2u;  /* 0C08C500 add #imm,Rn */
	r7 = 0xC1A35FCu; UPD(0x0C08C504u, 2);  /* 0C08C502 mov.l @(disp,pc),Rn */
	W16(r12, r5); UPD(0x0C08C506u, 1);  /* 0C08C504 mov.w Rm,@Rn */
	r0 = r7;  /* 0C08C506 mov Rm,Rn */
	r11 = 0xA8u; UPD(0x0C08C50Au, 2);  /* 0C08C508 mov.w @(disp,pc),Rn */
	IF(0x0C08C50Au); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08C50Cu, 1);  /* 0C08C50A mov.b @(r0,Rm),Rn */
	r11 += r9;  /* 0C08C50C add Rm,Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C08C510u, 2);  /* 0C08C50E mov.l @(disp,Rm),Rn */
	r11 += 0x1u;  /* 0C08C510 add #imm,Rn */
	r5 = 0xC062780u; UPD(0x0C08C514u, 2);  /* 0C08C512 mov.l @(disp,pc),Rn */
	W8(r6, r4); UPD(0x0C08C516u, 1);  /* 0C08C514 mov.b Rm,@Rn */
	W8(r11, r4); UPD(0x0C08C518u, 1);  /* 0C08C516 mov.b Rm,@Rn */
	r8 = 0x98u; UPD(0x0C08C51Au, 1);  /* 0C08C518 mov.w @(disp,pc),Rn */
	IF(0x0C08C51Au); { u32 t_ = r5; PR = 0x0C08C51Eu; r4 = 0x5Au; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08C51Eu); }  /* 0C08C51A jsr @Rn */
L_0C08C51E: BLKS(0x0C08C51Eu);
	r8 += r9;  /* 0C08C51E add Rm,Rn */
	r0 += 0x1Eu;  /* 0C08C520 add #imm,Rn */
	W8(r8, r0); UPD(0x0C08C524u, 3);  /* 0C08C522 mov.b Rm,@Rn */
	r4 = 0x10u;  /* 0C08C524 mov #imm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C08C528u, 2);  /* 0C08C526 mov.l @(disp,Rm),Rn */
	r3 = 0xC1A360Cu; UPD(0x0C08C52Au, 1);  /* 0C08C528 mov.l @(disp,pc),Rn */
	IF(0x0C08C52Au); r2 = R32(r0 + r3); UPD(0x0C08C52Cu, 1);  /* 0C08C52A mov.l @(r0,Rm),Rn */
	r0 = R32(r14); UPD(0x0C08C52Eu, 1);  /* 0C08C52C mov.l @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C08C530u, 1);  /* 0C08C52E mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r0); UPD(0x0C08C532u, 1);  /* 0C08C530 mov.w @Rm,Rn */
	IF(0x0C08C532u); MACL = r7 * r8;  /* 0C08C532 mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C08C536u, 3);  /* 0C08C534 mov.l @(disp,pc),Rn */
	IF(0x0C08C536u); r8 = MACL;  /* 0C08C536 sts macl,Rn */
	r8 += r1;  /* 0C08C538 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C08C53A add #imm,Rn */
	W16(r8, r13); UPD(0x0C08C53Eu, 4);  /* 0C08C53C mov.w Rm,@Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C08C540u, 1);  /* 0C08C53E mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFF84u;  /* 0C08C540 add #imm,Rn */
	r3 = 0xC0A8A30u; UPD(0x0C08C544u, 2);  /* 0C08C542 mov.l @(disp,pc),Rn */
	r0 &= 0xFu;  /* 0C08C544 and #imm,r0 */
	W32(r14 + 0xCu, r7); UPD(0x0C08C548u, 2);  /* 0C08C546 mov.l Rm,@(disp,Rn) */
	r10 += r8;  /* 0C08C548 add Rm,Rn */
	r6 = 0xC0000000u; UPD(0x0C08C54Cu, 2);  /* 0C08C54A mov.l @(disp,pc),Rn */
	r10 += 0x2u;  /* 0C08C54C add #imm,Rn */
	r5 = R32(r9 + 0x4u); UPD(0x0C08C550u, 2);  /* 0C08C54E mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C08C552u, 1);  /* 0C08C550 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x38u, r2); UPD(0x0C08C554u, 1);  /* 0C08C552 mov.l Rm,@(disp,Rn) */
	W32(r8, r6); UPD(0x0C08C556u, 1);  /* 0C08C554 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C08C558u, 1);  /* 0C08C556 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r0); UPD(0x0C08C55Au, 1);  /* 0C08C558 mov.l Rm,@(disp,Rn) */
	IF(0x0C08C55Au); { u32 t_ = r3; PR = 0x0C08C55Eu; r4 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08C55Eu); }  /* 0C08C55A jsr @Rn */
L_0C08C55E: BLKS(0x0C08C55Eu);
	r2 = (u32)(s32)(s16)R16(r12); UPD(0x0C08C560u, 1);  /* 0C08C55E mov.w @Rm,Rn */
	W16(r10, r2); UPD(0x0C08C562u, 1);  /* 0C08C560 mov.w Rm,@Rn */
	r12 = 0x0u;  /* 0C08C562 mov #imm,Rn */
	r0 = R32(r9 + 0x24u); UPD(0x0C08C566u, 2);  /* 0C08C564 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A9AE0u; UPD(0x0C08C568u, 1);  /* 0C08C566 mov.l @(disp,pc),Rn */
	r13 = R32(r9 + 0x28u); UPD(0x0C08C56Au, 1);  /* 0C08C568 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C08C56Cu, 1);  /* 0C08C56A mov.l Rm,@(disp,Rn) */
	r4 = R32(r14 + 0xCu); UPD(0x0C08C56Eu, 1);  /* 0C08C56C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r13); UPD(0x0C08C570u, 1);  /* 0C08C56E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r12); UPD(0x0C08C572u, 1);  /* 0C08C570 mov.l Rm,@(disp,Rn) */
	IF(0x0C08C572u); { u32 t_ = r10; PR = 0x0C08C576u; W32(r8 + 0x2Cu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08C576u); }  /* 0C08C572 jsr @Rn */
L_0C08C576: BLKS(0x0C08C576u);
	r0 = 0xB0u; UPD(0x0C08C578u, 1);  /* 0C08C576 mov.w @(disp,pc),Rn */
	r6 = 0xA8u; UPD(0x0C08C57Au, 1);  /* 0C08C578 mov.w @(disp,pc),Rn */
	IF(0x0C08C57Au); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08C57Cu, 1);  /* 0C08C57A mov.b @(r0,Rm),Rn */
	r6 += r8;  /* 0C08C57C add Rm,Rn */
	IF(0x0C08C57Eu); W8(r0 + r8, r7); UPD(0x0C08C580u, 2);  /* 0C08C57E mov.b Rm,@(r0,Rn) */
	r6 += 0x1u;  /* 0C08C580 add #imm,Rn */
	W32(r14 + 0x10u, r6); UPD(0x0C08C584u, 2);  /* 0C08C582 mov.l Rm,@(disp,Rn) */
	r0 += 0xFFFFFFFDu;  /* 0C08C584 add #imm,Rn */
	r4 = R32(r14 + 0x10u); UPD(0x0C08C588u, 2);  /* 0C08C586 mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C08C588 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C08C58Cu, 2);  /* 0C08C58A mov.b @Rm,Rn */
	W8(r4, r5); UPD(0x0C08C58Eu, 1);  /* 0C08C58C mov.b Rm,@Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C08C590u, 1);  /* 0C08C58E mov.l @(disp,Rm),Rn */
	r2 = R32(r9 + 0x38u); UPD(0x0C08C592u, 1);  /* 0C08C590 mov.l @(disp,Rm),Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C08C594u, 1);  /* 0C08C592 mov.b @Rm,Rn */
	W32(r8 + 0x38u, r2); UPD(0x0C08C596u, 1);  /* 0C08C594 mov.l Rm,@(disp,Rn) */
	{ W8(r0, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C08C474u, 3); goto L_0C08C474; }  /* 0C08C596 bra */
}

void blk_f_0C08C5F0(sh3_t *c)
{
	LOCALS;
L_0C08C5F0: BLKS(0x0C08C5F0u);
	r2 = 0xB4u; UPD(0x0C08C5F2u, 1);  /* 0C08C5F0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C08C5F2 exts.w Rm,Rn */
	IF(0x0C08C5F4u); MACL = r4 * r2;  /* 0C08C5F4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08C5F8u, 4);  /* 0C08C5F6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08C5FAu, 1);  /* 0C08C5F8 mov.l Rm,@-Rn */
	IF(0x0C08C5FAu); r2 = MACL;  /* 0C08C5FA sts macl,Rn */
	r2 += r0;  /* 0C08C5FC add Rm,Rn */
	r3 = R32(r2 + 0x8u); UPD(0x0C08C600u, 3);  /* 0C08C5FE mov.l @(disp,Rm),Rn */
	r0 = 0xFu;  /* 0C08C600 mov #imm,Rn */
	T = r3 > r0;  /* 0C08C602 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08C660u, 5); goto L_0C08C660; } goto L_0C08C608; }  /* 0C08C604 bt/s */
L_0C08C608: BLKS(0x0C08C608u);
	r0 = 0xC08C618u;  /* 0C08C608 mova @(disp,pc),r0 */
	IF(0x0C08C60Au); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08C60Cu, 3);  /* 0C08C60A mov.b @(r0,Rm),Rn */
	IF(0x0C08C60Cu); { u32 tv_ = (r5 + 0x0C08C610u); u32 t_ = PHYS(tv_); IF(0x0C08C60Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C630u: goto L_0C08C630; case 0x0C08C640u: goto L_0C08C640; case 0x0C08C650u: goto L_0C08C650; default: JUMPD(tv_); } }  /* 0C08C60C braf Rn */
L_0C08C630: BLKS(0x0C08C630u);
	r1 = 0xC0A93D0u; UPD(0x0C08C632u, 1);  /* 0C08C630 mov.l @(disp,pc),Rn */
L_0C08C632: BLKS(0x0C08C632u);
	r15 = r14;  /* 0C08C632 mov Rm,Rn */
	IF(0x0C08C634u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A93D0u: TAIL(blk_f_0C0A93D0); case 0x0C0A9590u: goto L_0C0A9590; default: JUMPD(tv_); } }  /* 0C08C634 jmp @Rn */
L_0C08C640: BLKS(0x0C08C640u);
	r1 = 0xC0A9590u; UPD(0x0C08C642u, 1);  /* 0C08C640 mov.l @(disp,pc),Rn */
	{ IF(0x0C08C644u); ; /* slot nop */ UPD(0x0C08C632u, 3); goto L_0C08C632; }  /* 0C08C642 bra */
L_0C08C650: BLKS(0x0C08C650u);
	r1 = 0xC0A9720u; UPD(0x0C08C652u, 1);  /* 0C08C650 mov.l @(disp,pc),Rn */
	{ IF(0x0C08C654u); ; /* slot nop */ UPD(0x0C08C632u, 3); goto L_0C08C632; }  /* 0C08C652 bra */
L_0C08C660: BLKS(0x0C08C660u);
	r3 = 0x0u;  /* 0C08C660 mov #imm,Rn */
	W32(r2, r3); UPD(0x0C08C664u, 2);  /* 0C08C662 mov.l Rm,@Rn */
	r15 = r14;  /* 0C08C664 mov Rm,Rn */
	IF(0x0C08C666u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C08C666 rts */
L_0C0A9590: BLKS(0x0C0A9590u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9592u, 1);  /* 0C0A9590 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9594u, 1);  /* 0C0A9592 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A9594 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9598u, 2);  /* 0C0A9596 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0A9598 mov #imm,Rn */
	r9 = 0xC062780u; UPD(0x0C0A959Cu, 2);  /* 0C0A959A mov.l @(disp,pc),Rn */
	IF(0x0C0A959Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0A959Eu, 1);  /* 0C0A959C sts.l pr,@-Rn */
	IF(0x0C0A959Eu); { u32 t_ = r9; PR = 0x0C0A95A2u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0A95A2u); }  /* 0C0A959E jsr @Rn */
L_0C0A95A2: BLKS(0x0C0A95A2u);
	r2 = r0;  /* 0C0A95A2 mov Rm,Rn */
	r0 = 0x4u;  /* 0C0A95A4 mov #imm,Rn */
	T = r2 > r0;  /* 0C0A95A6 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0A95D0u, 6); goto L_0C0A95D0; }  /* 0C0A95A8 bt */
L_0C0A95AA: BLKS(0x0C0A95AAu);
	r0 = 0xC0A95B8u;  /* 0C0A95AA mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0A95AC add Rm,Rn */
	IF(0x0C0A95AEu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A95B0u, 3);  /* 0C0A95AE mov.w @(r0,Rm),Rn */
	IF(0x0C0A95B0u); { u32 tv_ = (r3 + 0x0C0A95B4u); u32 t_ = PHYS(tv_); IF(0x0C0A95B2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A95D0u: goto L_0C0A95D0; case 0x0C0A9630u: goto L_0C0A9630; case 0x0C0A9660u: goto L_0C0A9660; case 0x0C0A96A0u: goto L_0C0A96A0; case 0x0C0A96D0u: goto L_0C0A96D0; default: JUMPD(tv_); } }  /* 0C0A95B0 braf Rn */
L_0C0A95D0: BLKS(0x0C0A95D0u);
	r6 = 0xB4u; UPD(0x0C0A95D2u, 1);  /* 0C0A95D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A95D2 add #imm,Rn */
	IF(0x0C0A95D4u); MACL = r8 * r6;  /* 0C0A95D4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A95D8u, 4);  /* 0C0A95D6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A95DAu, 1);  /* 0C0A95D8 mov.w @(disp,pc),Rn */
	IF(0x0C0A95DAu); r3 = MACL;  /* 0C0A95DA sts macl,Rn */
	r3 += r9;  /* 0C0A95DC add Rm,Rn */
	IF(0x0C0A95DEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A95E0u, 3);  /* 0C0A95DE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A95E0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A95E4u, 2);  /* 0C0A95E2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A95E4 add #imm,Rn */
	IF(0x0C0A95E6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A95E8u, 2);  /* 0C0A95E6 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0A95E8 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A95EA extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A95EEu, 3);  /* 0C0A95EC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0A95F0u, 1);  /* 0C0A95EE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A95F2u, 1);  /* 0C0A95F0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A95F4u, 1);  /* 0C0A95F2 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0A95F6u, 1);  /* 0C0A95F4 mov.l @(disp,Rm),Rn */
L_0C0A95F6: BLKS(0x0C0A95F6u);
	IF(0x0C0A95F6u); { u32 t_ = r0; PR = 0x0C0A95FAu; IF(0x0C0A95F8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A95FAu); }  /* 0C0A95F6 jsr @Rn */
L_0C0A95FA: BLKS(0x0C0A95FAu);
	r15 += 0x8u;  /* 0C0A95FA add #imm,Rn */
	UPD(0x0C0A95FCu, 1);
L_0C0A95FC: BLKS(0x0C0A95FCu);
	r6 = 0xB4u; UPD(0x0C0A95FEu, 1);  /* 0C0A95FC mov.w @(disp,pc),Rn */
	IF(0x0C0A95FEu); MACL = r8 * r6;  /* 0C0A95FE mul.l Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0A9602u, 3);  /* 0C0A9600 mov.w @(disp,pc),Rn */
	IF(0x0C0A9602u); r8 = MACL;  /* 0C0A9602 sts macl,Rn */
	r8 += r9;  /* 0C0A9604 add Rm,Rn */
	r9 = 0xC07DCE0u; UPD(0x0C0A9608u, 3);  /* 0C0A9606 mov.l @(disp,pc),Rn */
	IF(0x0C0A9608u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A960Au, 1);  /* 0C0A9608 mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A960Cu, 1);  /* 0C0A960A mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A960C extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A9610u, 2);  /* 0C0A960E mov.l @(disp,Rm),Rn */
	IF(0x0C0A9610u); { u32 t_ = r9; PR = 0x0C0A9614u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DCE0, 0x0C07DCE0u, 0x0C0A9614u); }  /* 0C0A9610 jsr @Rn */
L_0C0A9614: BLKS(0x0C0A9614u);
	r9 = 0x0u;  /* 0C0A9614 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0A9618u, 2);  /* 0C0A9616 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A9618 mov Rm,Rn */
	IF(0x0C0A961Au); PR = R32(r15); r15 += 4; UPD(0x0C0A961Cu, 2);  /* 0C0A961A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A961Eu, 1);  /* 0C0A961C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A9620u, 1);  /* 0C0A961E mov.l @Rm+,Rn */
	IF(0x0C0A9620u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A9620 rts */
L_0C0A9630: BLKS(0x0C0A9630u);
	r0 = 0xB4u; UPD(0x0C0A9632u, 1);  /* 0C0A9630 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A9632 add #imm,Rn */
	IF(0x0C0A9634u); MACL = r8 * r0;  /* 0C0A9634 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A9638u, 4);  /* 0C0A9636 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A963Au, 1);  /* 0C0A9638 mov.w @(disp,pc),Rn */
	IF(0x0C0A963Au); r3 = MACL;  /* 0C0A963A sts macl,Rn */
	r3 += r9;  /* 0C0A963C add Rm,Rn */
	IF(0x0C0A963Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9640u, 3);  /* 0C0A963E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A9640 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A9644u, 2);  /* 0C0A9642 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9644 add #imm,Rn */
	IF(0x0C0A9646u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9648u, 2);  /* 0C0A9646 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0A9648 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A964A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A964Eu, 3);  /* 0C0A964C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0A9650u, 1);  /* 0C0A964E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A9652u, 1);  /* 0C0A9650 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A9654u, 1);  /* 0C0A9652 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A95F6u, 3); goto L_0C0A95F6; }  /* 0C0A9654 bra */
L_0C0A9660: BLKS(0x0C0A9660u);
	r0 = 0xB4u; UPD(0x0C0A9662u, 1);  /* 0C0A9660 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0A9662 add #imm,Rn */
	IF(0x0C0A9664u); MACL = r8 * r0;  /* 0C0A9664 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A9668u, 4);  /* 0C0A9666 mov.l @(disp,pc),Rn */
	IF(0x0C0A9668u); r3 = MACL;  /* 0C0A9668 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A966Cu, 2);  /* 0C0A966A mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0A966C add Rm,Rn */
	IF(0x0C0A966Eu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9670u, 2);  /* 0C0A966E mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A9670 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0A9674u, 2);  /* 0C0A9672 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9674 add #imm,Rn */
	IF(0x0C0A9676u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9678u, 2);  /* 0C0A9676 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0A9678 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A967A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0A967Eu, 3);  /* 0C0A967C mov.l Rm,@(disp,Rn) */
	r7 = R32(r3 + 0x2Cu); UPD(0x0C0A9680u, 1);  /* 0C0A967E mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r7); UPD(0x0C0A9682u, 1);  /* 0C0A9680 mov.l Rm,@(disp,Rn) */
	r6 = R32(r3 + 0x30u); UPD(0x0C0A9684u, 1);  /* 0C0A9682 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BE860u; UPD(0x0C0A9686u, 1);  /* 0C0A9684 mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r6); UPD(0x0C0A9688u, 1);  /* 0C0A9686 mov.l Rm,@(disp,Rn) */
	r4 = R32(r3); UPD(0x0C0A968Au, 1);  /* 0C0A9688 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A968Cu, 1);  /* 0C0A968A mov.l @(disp,Rm),Rn */
	IF(0x0C0A968Cu); { u32 t_ = r0; PR = 0x0C0A9690u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BE860, 0x0C0BE860u, 0x0C0A9690u); }  /* 0C0A968C jsr @Rn */
L_0C0A9690: BLKS(0x0C0A9690u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0A95FCu, 3); goto L_0C0A95FC; }  /* 0C0A9690 bra */
L_0C0A96A0: BLKS(0x0C0A96A0u);
	r6 = 0xB4u; UPD(0x0C0A96A2u, 1);  /* 0C0A96A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A96A2 add #imm,Rn */
	IF(0x0C0A96A4u); MACL = r8 * r6;  /* 0C0A96A4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A96A8u, 4);  /* 0C0A96A6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A96AAu, 1);  /* 0C0A96A8 mov.w @(disp,pc),Rn */
	IF(0x0C0A96AAu); r3 = MACL;  /* 0C0A96AA sts macl,Rn */
	r3 += r9;  /* 0C0A96AC add Rm,Rn */
	IF(0x0C0A96AEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A96B0u, 3);  /* 0C0A96AE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A96B0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A96B4u, 2);  /* 0C0A96B2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A96B4 add #imm,Rn */
	IF(0x0C0A96B6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A96B8u, 2);  /* 0C0A96B6 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A96B8 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A96BA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A96BEu, 3);  /* 0C0A96BC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0C0030u; UPD(0x0C0A96C0u, 1);  /* 0C0A96BE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A96C2u, 1);  /* 0C0A96C0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A96C4u, 1);  /* 0C0A96C2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A95F6u, 3); goto L_0C0A95F6; }  /* 0C0A96C4 bra */
L_0C0A96D0: BLKS(0x0C0A96D0u);
	r5 = 0xB4u; UPD(0x0C0A96D2u, 1);  /* 0C0A96D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A96D2 add #imm,Rn */
	IF(0x0C0A96D4u); MACL = r8 * r5;  /* 0C0A96D4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A96D8u, 4);  /* 0C0A96D6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A96DAu, 1);  /* 0C0A96D8 mov.w @(disp,pc),Rn */
	IF(0x0C0A96DAu); r3 = MACL;  /* 0C0A96DA sts macl,Rn */
	r3 += r9;  /* 0C0A96DC add Rm,Rn */
	IF(0x0C0A96DEu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A96E0u, 3);  /* 0C0A96DE mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A96E0 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A96E2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A96E6u, 3);  /* 0C0A96E4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A96E6 add #imm,Rn */
	IF(0x0C0A96E8u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A96EAu, 2);  /* 0C0A96E8 mov.b @(r0,Rm),Rn */
	r0 = r7 & 0xFF;  /* 0C0A96EA extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A96EEu, 2);  /* 0C0A96EC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0A96F0u, 1);  /* 0C0A96EE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A96F2u, 1);  /* 0C0A96F0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A96F4u, 1);  /* 0C0A96F2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A95F6u, 3); goto L_0C0A95F6; }  /* 0C0A96F4 bra */
}

void blk_f_0C08C680(sh3_t *c)
{
	LOCALS;
	goto L_0C08C680;
L_0C08C5F0: BLKS(0x0C08C5F0u);
	r2 = 0xB4u; UPD(0x0C08C5F2u, 1);  /* 0C08C5F0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C08C5F2 exts.w Rm,Rn */
	IF(0x0C08C5F4u); MACL = r4 * r2;  /* 0C08C5F4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08C5F8u, 4);  /* 0C08C5F6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08C5FAu, 1);  /* 0C08C5F8 mov.l Rm,@-Rn */
	IF(0x0C08C5FAu); r2 = MACL;  /* 0C08C5FA sts macl,Rn */
	r2 += r0;  /* 0C08C5FC add Rm,Rn */
	r3 = R32(r2 + 0x8u); UPD(0x0C08C600u, 3);  /* 0C08C5FE mov.l @(disp,Rm),Rn */
	r0 = 0xFu;  /* 0C08C600 mov #imm,Rn */
	T = r3 > r0;  /* 0C08C602 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08C660u, 5); goto L_0C08C660; } goto L_0C08C608; }  /* 0C08C604 bt/s */
L_0C08C608: BLKS(0x0C08C608u);
	r0 = 0xC08C618u;  /* 0C08C608 mova @(disp,pc),r0 */
	IF(0x0C08C60Au); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08C60Cu, 3);  /* 0C08C60A mov.b @(r0,Rm),Rn */
	IF(0x0C08C60Cu); { u32 tv_ = (r5 + 0x0C08C610u); u32 t_ = PHYS(tv_); IF(0x0C08C60Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C630u: goto L_0C08C630; case 0x0C08C640u: goto L_0C08C640; case 0x0C08C650u: goto L_0C08C650; default: JUMPD(tv_); } }  /* 0C08C60C braf Rn */
L_0C08C630: BLKS(0x0C08C630u);
	r1 = 0xC0A93D0u; UPD(0x0C08C632u, 1);  /* 0C08C630 mov.l @(disp,pc),Rn */
L_0C08C632: BLKS(0x0C08C632u);
	r15 = r14;  /* 0C08C632 mov Rm,Rn */
	IF(0x0C08C634u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A93D0u: TAIL(blk_f_0C0A93D0); case 0x0C0A9590u: goto L_0C0A9590; default: JUMPD(tv_); } }  /* 0C08C634 jmp @Rn */
L_0C08C640: BLKS(0x0C08C640u);
	r1 = 0xC0A9590u; UPD(0x0C08C642u, 1);  /* 0C08C640 mov.l @(disp,pc),Rn */
	{ IF(0x0C08C644u); ; /* slot nop */ UPD(0x0C08C632u, 3); goto L_0C08C632; }  /* 0C08C642 bra */
L_0C08C650: BLKS(0x0C08C650u);
	r1 = 0xC0A9720u; UPD(0x0C08C652u, 1);  /* 0C08C650 mov.l @(disp,pc),Rn */
	{ IF(0x0C08C654u); ; /* slot nop */ UPD(0x0C08C632u, 3); goto L_0C08C632; }  /* 0C08C652 bra */
L_0C08C660: BLKS(0x0C08C660u);
	r3 = 0x0u;  /* 0C08C660 mov #imm,Rn */
	W32(r2, r3); UPD(0x0C08C664u, 2);  /* 0C08C662 mov.l Rm,@Rn */
	r15 = r14;  /* 0C08C664 mov Rm,Rn */
	IF(0x0C08C666u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C08C666 rts */
L_0C08C680: BLKS(0x0C08C680u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08C682u, 1);  /* 0C08C680 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08C684u, 1);  /* 0C08C682 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08C686u, 1);  /* 0C08C684 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08C688u, 1);  /* 0C08C686 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08C68Au, 1);  /* 0C08C688 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C08C68A exts.w Rm,Rn */
	r8 = 0xB4u; UPD(0x0C08C68Eu, 2);  /* 0C08C68C mov.w @(disp,pc),Rn */
	r12 = 0xFFFFFFFCu;  /* 0C08C68E mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08C692u, 2);  /* 0C08C690 mov.l Rm,@-Rn */
	IF(0x0C08C692u); MACL = r11 * r8;  /* 0C08C692 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08C696u, 3);  /* 0C08C694 mov.l Rm,@-Rn */
	r13 = 0xC286578u; UPD(0x0C08C698u, 1);  /* 0C08C696 mov.l @(disp,pc),Rn */
	IF(0x0C08C698u); r9 = MACL;  /* 0C08C698 sts macl,Rn */
	IF(0x0C08C69Au); r15 -= 4; W32(r15, PR); UPD(0x0C08C69Cu, 2);  /* 0C08C69A sts.l pr,@-Rn */
	r9 += r13;  /* 0C08C69C add Rm,Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C08C6A0u, 2);  /* 0C08C69E mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C08C6A0 add #imm,Rn */
	IF(0x0C08C6A2u); ARG0(0x40CCu); { s32 s_ = (s32)r12; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C08C6A2 shad Rm,Rn */
	r14 = r15;  /* 0C08C6A4 mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C08C6A6 cmp/eq #imm,r0 */
	{ u32 c_ = !T; IF(0x0C08C6AAu); r10 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C08C6B0u, 7); goto L_0C08C6B0; } goto L_0C08C6AC; }  /* 0C08C6A8 bf/s */
L_0C08C6AC: BLKS(0x0C08C6ACu);
	{ r8 += 0xFFFFFFD2u; /* slot add #imm,Rn */ UPD(0x0C08C7E0u, 4); goto L_0C08C7E0; }  /* 0C08C6AC bra */
L_0C08C6B0: BLKS(0x0C08C6B0u);
	r10 = 0xC0A8B50u; UPD(0x0C08C6B2u, 1);  /* 0C08C6B0 mov.l @(disp,pc),Rn */
	IF(0x0C08C6B2u); { u32 t_ = r10; PR = 0x0C08C6B6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C08C6B6u); }  /* 0C08C6B2 jsr @Rn */
L_0C08C6B6: BLKS(0x0C08C6B6u);
	IF(0x0C08C6B6u); T = (s32)r0 >= 0;  /* 0C08C6B6 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C08C6BAu); MACL = r0 * r8; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C08C6C0u, 5); goto L_0C08C6C0; } goto L_0C08C6BC; }  /* 0C08C6B8 bt/s */
L_0C08C6BC: BLKS(0x0C08C6BCu);
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C08C7C0u, 5); goto L_0C08C7C0; }  /* 0C08C6BC bra */
L_0C08C6C0: BLKS(0x0C08C6C0u);
	r5 = 0xA8u; UPD(0x0C08C6C2u, 1);  /* 0C08C6C0 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C08C6C2 mov Rm,Rn */
	IF(0x0C08C6C4u); r8 = MACL;  /* 0C08C6C4 sts macl,Rn */
	r8 += r13;  /* 0C08C6C6 add Rm,Rn */
	r10 = R32(r8 + 0x28u); UPD(0x0C08C6CAu, 4);  /* 0C08C6C8 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x28u, r10); UPD(0x0C08C6CCu, 1);  /* 0C08C6CA mov.l Rm,@(disp,Rn) */
	r10 = r9;  /* 0C08C6CC mov Rm,Rn */
	r10 += r5;  /* 0C08C6CE add Rm,Rn */
	r5 += r8;  /* 0C08C6D0 add Rm,Rn */
	r5 += 0x1u;  /* 0C08C6D2 add #imm,Rn */
	r13 = 0xC069BF0u; UPD(0x0C08C6D6u, 5);  /* 0C08C6D4 mov.l @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C08C6D6 add #imm,Rn */
	r2 = R32(r8 + 0x24u); UPD(0x0C08C6DAu, 2);  /* 0C08C6D8 mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C08C6DCu, 1);  /* 0C08C6DA mov.b @Rm,Rn */
	W32(r9 + 0x24u, r2); UPD(0x0C08C6DEu, 1);  /* 0C08C6DC mov.l Rm,@(disp,Rn) */
	IF(0x0C08C6DEu); { u32 t_ = r13; PR = 0x0C08C6E2u; W8(r10, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08C6E2u); }  /* 0C08C6DE jsr @Rn */
L_0C08C6E2: BLKS(0x0C08C6E2u);
	r0 = R32(r9 + 0x8u); UPD(0x0C08C6E4u, 1);  /* 0C08C6E2 mov.l @(disp,Rm),Rn */
	r1 = 0xFu;  /* 0C08C6E4 mov #imm,Rn */
	r13 = 0xC068F00u; UPD(0x0C08C6E8u, 2);  /* 0C08C6E6 mov.l @(disp,pc),Rn */
	r0 &= r1;  /* 0C08C6E8 and Rm,Rn */
	r7 = 0xC1A3694u; UPD(0x0C08C6ECu, 2);  /* 0C08C6EA mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C08C6EC add Rm,Rn */
	IF(0x0C08C6EEu); r5 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C08C6F0u, 2);  /* 0C08C6EE mov.w @(r0,Rm),Rn */
	IF(0x0C08C6F0u); { u32 t_ = r13; PR = 0x0C08C6F4u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08C6F4u); }  /* 0C08C6F0 jsr @Rn */
L_0C08C6F4: BLKS(0x0C08C6F4u);
	r4 = R32(r8 + 0x8u); UPD(0x0C08C6F6u, 1);  /* 0C08C6F4 mov.l @(disp,Rm),Rn */
	r8 = 0x86u; UPD(0x0C08C6F8u, 1);  /* 0C08C6F6 mov.w @(disp,pc),Rn */
	r4 += 0xFFFFFFF0u;  /* 0C08C6F8 add #imm,Rn */
	r8 += r9;  /* 0C08C6FA add Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C08C6FEu, 3);  /* 0C08C6FC mov.w @Rm,Rn */
	r6 = 0x1FFu; UPD(0x0C08C700u, 1);  /* 0C08C6FE mov.w @(disp,pc),Rn */
	r13 += 0x8u;  /* 0C08C700 add #imm,Rn */
	r13 &= r6;  /* 0C08C702 and Rm,Rn */
	r3 = 0xC0A8B10u; UPD(0x0C08C706u, 3);  /* 0C08C704 mov.l @(disp,pc),Rn */
	IF(0x0C08C706u); ARG0(0x4DCCu); { s32 s_ = (s32)r12; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = (u32)((s32)r13 >> 31); else r13 = (u32)((s32)r13 >> ((~s_ & 31) + 1)); }  /* 0C08C706 shad Rm,Rn */
	W32(r9 + 0x8u, r4); UPD(0x0C08C70Au, 2);  /* 0C08C708 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r13); UPD(0x0C08C70Cu, 1);  /* 0C08C70A mov.l Rm,@(disp,Rn) */
	IF(0x0C08C70Cu); { u32 t_ = r3; PR = 0x0C08C710u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C08C710u); }  /* 0C08C70C jsr @Rn */
L_0C08C710: BLKS(0x0C08C710u);
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C08C712u, 1);  /* 0C08C710 mov.b @Rm,Rn */
	T = r0 == 0x14u;  /* 0C08C712 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C08C730u, 4); goto L_0C08C730; }  /* 0C08C714 bt */
L_0C08C716: BLKS(0x0C08C716u);
	r14 += 0xCu;  /* 0C08C716 add #imm,Rn */
	UPD(0x0C08C718u, 1);
L_0C08C718: BLKS(0x0C08C718u);
	r15 = r14;  /* 0C08C718 mov Rm,Rn */
	IF(0x0C08C71Au); PR = R32(r15); r15 += 4; UPD(0x0C08C71Cu, 2);  /* 0C08C71A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08C71Eu, 1);  /* 0C08C71C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08C720u, 1);  /* 0C08C71E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08C722u, 1);  /* 0C08C720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08C724u, 1);  /* 0C08C722 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08C726u, 1);  /* 0C08C724 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08C728u, 1);  /* 0C08C726 mov.l @Rm+,Rn */
	IF(0x0C08C728u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08C728 rts */
L_0C08C730: BLKS(0x0C08C730u);
	r12 = 0xC0BC1B0u; UPD(0x0C08C732u, 1);  /* 0C08C730 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C08C732 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08C734 mov #imm,Rn */
	IF(0x0C08C736u); { u32 t_ = r12; PR = 0x0C08C73Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08C73Au); }  /* 0C08C736 jsr @Rn */
L_0C08C73A: BLKS(0x0C08C73Au);
	T = (r0 & r0) == 0;  /* 0C08C73A tst Rm,Rn */
	if (T) { UPD(0x0C08C716u, 4); goto L_0C08C716; }  /* 0C08C73C bt */
L_0C08C73E: BLKS(0x0C08C73Eu);
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C08C740u, 1);  /* 0C08C73E mov.b @Rm,Rn */
	r13 = 0xC0BBF10u; UPD(0x0C08C742u, 1);  /* 0C08C740 mov.l @(disp,pc),Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C08C744u, 1);  /* 0C08C742 mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C08C744 extu.b Rm,Rn */
	IF(0x0C08C746u); { u32 t_ = r13; PR = 0x0C08C74Au; r5 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08C74Au); }  /* 0C08C746 jsr @Rn */
L_0C08C74A: BLKS(0x0C08C74Au);
	T = (r0 & r0) == 0;  /* 0C08C74A tst Rm,Rn */
	if (T) { UPD(0x0C08C716u, 4); goto L_0C08C716; }  /* 0C08C74C bt */
L_0C08C74E: BLKS(0x0C08C74Eu);
	r12 = (u32)(s32)(s16)R16(r8); UPD(0x0C08C750u, 1);  /* 0C08C74E mov.w @Rm,Rn */
	r13 = 0x0u;  /* 0C08C750 mov #imm,Rn */
	W32(r14 + 0x4u, r9); UPD(0x0C08C754u, 2);  /* 0C08C752 mov.l Rm,@(disp,Rn) */
L_0C08C754: BLKS(0x0C08C754u);
	r10 = 0xC069B20u; UPD(0x0C08C756u, 1);  /* 0C08C754 mov.l @(disp,pc),Rn */
	r5 = 0x120000u; UPD(0x0C08C758u, 1);  /* 0C08C756 mov.l @(disp,pc),Rn */
	IF(0x0C08C758u); { u32 t_ = r10; PR = 0x0C08C75Cu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08C75Cu); }  /* 0C08C758 jsr @Rn */
L_0C08C75C: BLKS(0x0C08C75Cu);
	r10 = r0;  /* 0C08C75C mov Rm,Rn */
	r9 = r13;  /* 0C08C75E mov Rm,Rn */
	r0 = 0xC1A36B4u; UPD(0x0C08C762u, 3);  /* 0C08C760 mov.l @(disp,pc),Rn */
	IF(0x0C08C762u); r9 <<= 2;  /* 0C08C762 shll2 Rn */
	r8 = 0xC069AF0u; UPD(0x0C08C766u, 2);  /* 0C08C764 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C08C766 add Rm,Rn */
	r5 = R32(r9); UPD(0x0C08C76Au, 2);  /* 0C08C768 mov.l @Rm,Rn */
	IF(0x0C08C76Au); { u32 t_ = r8; PR = 0x0C08C76Eu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08C76Eu); }  /* 0C08C76A jsr @Rn */
L_0C08C76E: BLKS(0x0C08C76Eu);
	r3 = R32(r14 + 0x4u); UPD(0x0C08C770u, 1);  /* 0C08C76E mov.l @(disp,Rm),Rn */
	r10 -= r0;  /* 0C08C770 sub Rm,Rn */
	r5 = R32(r3 + 0x24u); UPD(0x0C08C774u, 2);  /* 0C08C772 mov.l @(disp,Rm),Rn */
	r2 = 0xC069AF0u; UPD(0x0C08C776u, 1);  /* 0C08C774 mov.l @(disp,pc),Rn */
	r10 += r5;  /* 0C08C776 add Rm,Rn */
	r5 = 0x120000u; UPD(0x0C08C77Au, 2);  /* 0C08C778 mov.l @(disp,pc),Rn */
	IF(0x0C08C77Au); { u32 t_ = r2; PR = 0x0C08C77Eu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08C77Eu); }  /* 0C08C77A jsr @Rn */
L_0C08C77E: BLKS(0x0C08C77Eu);
	r4 = R32(r14 + 0x4u); UPD(0x0C08C780u, 1);  /* 0C08C77E mov.l @(disp,Rm),Rn */
	r7 = 0xC069B20u; UPD(0x0C08C782u, 1);  /* 0C08C780 mov.l @(disp,pc),Rn */
	r8 = R32(r4 + 0x28u); UPD(0x0C08C784u, 1);  /* 0C08C782 mov.l @(disp,Rm),Rn */
	r5 = R32(r9); UPD(0x0C08C786u, 1);  /* 0C08C784 mov.l @Rm,Rn */
	r8 += r0;  /* 0C08C786 add Rm,Rn */
	IF(0x0C08C788u); { u32 t_ = r7; PR = 0x0C08C78Cu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08C78Cu); }  /* 0C08C788 jsr @Rn */
L_0C08C78C: BLKS(0x0C08C78Cu);
	r6 = 0x20000u; UPD(0x0C08C78Eu, 1);  /* 0C08C78C mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08C78E add #imm,Rn */
	W32(r15, r6); UPD(0x0C08C792u, 2);  /* 0C08C790 mov.l Rm,@Rn */
	r8 += r0;  /* 0C08C792 add Rm,Rn */
	r1 = 0xC0BA480u; UPD(0x0C08C796u, 2);  /* 0C08C794 mov.l @(disp,pc),Rn */
	r9 = r13;  /* 0C08C796 mov Rm,Rn */
	r6 = r8;  /* 0C08C798 mov Rm,Rn */
	r9 += 0x1u;  /* 0C08C79A add #imm,Rn */
	r4 = 0x2u;  /* 0C08C79C mov #imm,Rn */
	r5 = r10;  /* 0C08C79E mov Rm,Rn */
	r7 = r12;  /* 0C08C7A0 mov Rm,Rn */
	IF(0x0C08C7A2u); { u32 t_ = r1; PR = 0x0C08C7A6u; r13 = (u32)(s32)(s16)r9; /* slot exts.w Rm,Rn */ UPD(t_, 8); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C08C7A6u); }  /* 0C08C7A2 jsr @Rn */
L_0C08C7A6: BLKS(0x0C08C7A6u);
	r8 = 0x1u;  /* 0C08C7A6 mov #imm,Rn */
	T = (s32)r13 > (s32)r8;  /* 0C08C7A8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08C754u, 5); goto L_0C08C754; } goto L_0C08C7AE; }  /* 0C08C7AA bf/s */
L_0C08C7AE: BLKS(0x0C08C7AEu);
	r4 = r11;  /* 0C08C7AE mov Rm,Rn */
	r11 = 0xC069B90u; UPD(0x0C08C7B2u, 3);  /* 0C08C7B0 mov.l @(disp,pc),Rn */
	IF(0x0C08C7B2u); { u32 t_ = r11; PR = 0x0C08C7B6u; IF(0x0C08C7B4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C08C7B6u); }  /* 0C08C7B2 jsr @Rn */
L_0C08C7B6: BLKS(0x0C08C7B6u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C08C718u, 3); goto L_0C08C718; }  /* 0C08C7B6 bra */
L_0C08C7C0: BLKS(0x0C08C7C0u);
	r2 = 0xC08C5F0u; UPD(0x0C08C7C2u, 1);  /* 0C08C7C0 mov.l @(disp,pc),Rn */
	r14 += 0xCu;  /* 0C08C7C2 add #imm,Rn */
	r15 = r14;  /* 0C08C7C4 mov Rm,Rn */
	IF(0x0C08C7C6u); PR = R32(r15); r15 += 4; UPD(0x0C08C7C8u, 3);  /* 0C08C7C6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08C7CAu, 1);  /* 0C08C7C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08C7CCu, 1);  /* 0C08C7CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08C7CEu, 1);  /* 0C08C7CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08C7D0u, 1);  /* 0C08C7CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08C7D2u, 1);  /* 0C08C7D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08C7D4u, 1);  /* 0C08C7D2 mov.l @Rm+,Rn */
	IF(0x0C08C7D4u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C08C5F0u: goto L_0C08C5F0; default: JUMPD(tv_); } }  /* 0C08C7D4 jmp @Rn */
L_0C08C7E0: BLKS(0x0C08C7E0u);
	r12 = 0x8Cu; UPD(0x0C08C7E2u, 1);  /* 0C08C7E0 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C08C7E2 add Rm,Rn */
	r0 = 0xC069B20u; UPD(0x0C08C7E6u, 2);  /* 0C08C7E4 mov.l @(disp,pc),Rn */
	r12 += r9;  /* 0C08C7E6 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C08C7EAu, 2);  /* 0C08C7E8 mov.w @Rm,Rn */
	IF(0x0C08C7EAu); { u32 t_ = r0; PR = 0x0C08C7EEu; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08C7EEu); }  /* 0C08C7EA jsr @Rn */
L_0C08C7EE: BLKS(0x0C08C7EEu);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C08C7F0u, 1);  /* 0C08C7EE mov.w @Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C08C7F2u, 1);  /* 0C08C7F0 mov.l @(disp,pc),Rn */
	W32(r9 + 0x2Cu, r0); UPD(0x0C08C7F4u, 1);  /* 0C08C7F2 mov.l Rm,@(disp,Rn) */
	IF(0x0C08C7F4u); { u32 t_ = r8; PR = 0x0C08C7F8u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08C7F8u); }  /* 0C08C7F4 jsr @Rn */
L_0C08C7F8: BLKS(0x0C08C7F8u);
	r4 = R32(r9 + 0x24u); UPD(0x0C08C7FAu, 1);  /* 0C08C7F8 mov.l @(disp,Rm),Rn */
	r2 = R32(r9 + 0x2Cu); UPD(0x0C08C7FCu, 1);  /* 0C08C7FA mov.l @(disp,Rm),Rn */
	r3 = R32(r9 + 0x28u); UPD(0x0C08C7FEu, 1);  /* 0C08C7FC mov.l @(disp,Rm),Rn */
	r4 += r2;  /* 0C08C7FE add Rm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C08C802u, 2);  /* 0C08C800 mov.l Rm,@(disp,Rn) */
	r3 += r0;  /* 0C08C802 add Rm,Rn */
	r0 = (r4 >> 16) | (r4 << 16);  /* 0C08C804 swap.w Rm,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C08C806 exts.w Rm,Rn */
	r0 = 0xFFFFFF60u; UPD(0x0C08C80Au, 4);  /* 0C08C808 mov.w @(disp,pc),Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C08C80Cu, 1);  /* 0C08C80A mov.l Rm,@(disp,Rn) */
	r2 += r0;  /* 0C08C80C add Rm,Rn */
	IF(0x0C08C80Eu); T = (s32)r2 >= 0;  /* 0C08C80E cmp/pz Rn */
	{ u32 c_ = T; W32(r9 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08C818u, 5); goto L_0C08C818; } UPD(0x0C08C814u, 1); goto L_0C08C814; }  /* 0C08C810 bt/s */
L_0C08C814: BLKS(0x0C08C814u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C08C9D0u, 3); goto L_0C08C9D0; }  /* 0C08C814 bra */
L_0C08C818: BLKS(0x0C08C818u);
	r5 = 0xD0u; UPD(0x0C08C81Au, 1);  /* 0C08C818 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C08C81A cmp/gt Rm,Rn */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08C83Au, 4); goto L_0C08C83A; } goto L_0C08C820; }  /* 0C08C81C bt/s */
L_0C08C820: BLKS(0x0C08C820u);
	r1 = (r3 >> 16) | (r3 << 16);  /* 0C08C820 swap.w Rm,Rn */
	r3 = 0xFFFFFE00u; UPD(0x0C08C824u, 3);  /* 0C08C822 mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)r1;  /* 0C08C824 exts.w Rm,Rn */
	r2 += r3;  /* 0C08C826 add Rm,Rn */
	IF(0x0C08C828u); T = (s32)r2 >= 0;  /* 0C08C828 cmp/pz Rn */
	{ u32 c_ = T; W32(r14, r10); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C08C832u, 6); goto L_0C08C832; } UPD(0x0C08C82Eu, 1); goto L_0C08C82E; }  /* 0C08C82A bt/s */
L_0C08C82E: BLKS(0x0C08C82Eu);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C08C9C0u, 3); goto L_0C08C9C0; }  /* 0C08C82E bra */
L_0C08C832: BLKS(0x0C08C832u);
	r6 = 0xA8u; UPD(0x0C08C834u, 1);  /* 0C08C832 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C08C834 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08C890u, 4); goto L_0C08C890; } UPD(0x0C08C83Au, 1); goto L_0C08C83A; }  /* 0C08C836 bf/s */
L_0C08C83A: BLKS(0x0C08C83Au);
	{ W32(r9, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C08C716u, 3); goto L_0C08C716; }  /* 0C08C83A bra */
L_0C08C890: BLKS(0x0C08C890u);
	r10 = 0x98u; UPD(0x0C08C892u, 1);  /* 0C08C890 mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C08C892 add Rm,Rn */
	r8 = r10;  /* 0C08C894 mov Rm,Rn */
	r8 += 0x1u;  /* 0C08C896 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C08C89Au, 4);  /* 0C08C898 mov.b @Rm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C08C89A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C08C8BCu, 4); goto L_0C08C8BC; }  /* 0C08C89C bt */
L_0C08C89E: BLKS(0x0C08C89Eu);
	r0 = 0xC069BF0u; UPD(0x0C08C8A0u, 1);  /* 0C08C89E mov.l @(disp,pc),Rn */
	IF(0x0C08C8A0u); { u32 t_ = r0; PR = 0x0C08C8A4u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08C8A4u); }  /* 0C08C8A0 jsr @Rn */
L_0C08C8A4: BLKS(0x0C08C8A4u);
	r0 = R32(r9 + 0x8u); UPD(0x0C08C8A6u, 1);  /* 0C08C8A4 mov.l @(disp,Rm),Rn */
	r2 = 0xFu;  /* 0C08C8A6 mov #imm,Rn */
	r0 &= r2;  /* 0C08C8A8 and Rm,Rn */
	r4 = 0xC1A3694u; UPD(0x0C08C8ACu, 3);  /* 0C08C8AA mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C08C8AC add Rm,Rn */
	IF(0x0C08C8AEu); r5 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C08C8B0u, 2);  /* 0C08C8AE mov.w @(r0,Rm),Rn */
	r0 = 0xC068F00u; UPD(0x0C08C8B2u, 1);  /* 0C08C8B0 mov.l @(disp,pc),Rn */
	IF(0x0C08C8B2u); { u32 t_ = r0; PR = 0x0C08C8B6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08C8B6u); }  /* 0C08C8B2 jsr @Rn */
L_0C08C8B6: BLKS(0x0C08C8B6u);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C08C8B8u, 1);  /* 0C08C8B6 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C08C8B8 add #imm,Rn */
	W8(r8, r0); UPD(0x0C08C8BCu, 2);  /* 0C08C8BA mov.b Rm,@Rn */
L_0C08C8BC: BLKS(0x0C08C8BCu);
	r8 = 0xA8u; UPD(0x0C08C8BEu, 1);  /* 0C08C8BC mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C08C8BE add Rm,Rn */
	r8 += 0x1u;  /* 0C08C8C0 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C08C8C4u, 3);  /* 0C08C8C2 mov.b @Rm,Rn */
	r2 = r5 & 0xFF;  /* 0C08C8C4 extu.b Rm,Rn */
	r0 = r2;  /* 0C08C8C6 mov Rm,Rn */
	T = r0 == 0x14u;  /* 0C08C8C8 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C08C9B0u, 6); goto L_0C08C9B0; }  /* 0C08C8CA bt */
L_0C08C8CC: BLKS(0x0C08C8CCu);
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C08C8CEu, 1);  /* 0C08C8CC mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C08C8CE tst Rm,Rn */
	{ u32 c_ = !T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08C9A0u, 4); goto L_0C08C9A0; } goto L_0C08C8D4; }  /* 0C08C8D0 bf/s */
L_0C08C8D4: BLKS(0x0C08C8D4u);
	r10 = 0xC2B039Cu; UPD(0x0C08C8D6u, 2);  /* 0C08C8D4 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C08C8D8u, 1);  /* 0C08C8D6 mov.l @Rm,Rn */
	r0 += r11;  /* 0C08C8D8 add Rm,Rn */
	r0 &= 0x3u;  /* 0C08C8DA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08C8DC tst Rm,Rn */
	{ u32 c_ = T; r6 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08C910u, 6); goto L_0C08C910; } UPD(0x0C08C8E2u, 1); goto L_0C08C8E2; }  /* 0C08C8DE bt/s */
L_0C08C8E2: BLKS(0x0C08C8E2u);
	r7 = 0xC0A8B10u; UPD(0x0C08C8E4u, 1);  /* 0C08C8E2 mov.l @(disp,pc),Rn */
L_0C08C8E4: BLKS(0x0C08C8E4u);
	r9 = 0xB4u; UPD(0x0C08C8E6u, 1);  /* 0C08C8E4 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C08C8E6 mov Rm,Rn */
	IF(0x0C08C8E8u); MACL = r11 * r9;  /* 0C08C8E8 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C08C8ECu, 4);  /* 0C08C8EA mov.l @(disp,pc),Rn */
	r14 += 0xCu;  /* 0C08C8EC add #imm,Rn */
	IF(0x0C08C8EEu); r5 = MACL;  /* 0C08C8EE sts macl,Rn */
	r5 += r10;  /* 0C08C8F0 add Rm,Rn */
	r0 = R32(r5 + 0xCu); UPD(0x0C08C8F4u, 4);  /* 0C08C8F2 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C08C8F4 add #imm,Rn */
	r0 &= 0x3u;  /* 0C08C8F6 and #imm,r0 */
	W32(r5 + 0xCu, r0); UPD(0x0C08C8FAu, 3);  /* 0C08C8F8 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C08C8FA mov Rm,Rn */
	IF(0x0C08C8FCu); PR = R32(r15); r15 += 4; UPD(0x0C08C8FEu, 2);  /* 0C08C8FC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08C900u, 1);  /* 0C08C8FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08C902u, 1);  /* 0C08C900 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08C904u, 1);  /* 0C08C902 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08C906u, 1);  /* 0C08C904 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08C908u, 1);  /* 0C08C906 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08C90Au, 1);  /* 0C08C908 mov.l @Rm+,Rn */
	IF(0x0C08C90Au); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8B10u: TAIL(blk_f_0C0A8B10); default: JUMPD(tv_); } }  /* 0C08C90A jmp @Rn */
L_0C08C910: BLKS(0x0C08C910u);
	r10 = 0xC0BBF10u; UPD(0x0C08C912u, 1);  /* 0C08C910 mov.l @(disp,pc),Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C08C914u, 1);  /* 0C08C912 mov.l @(disp,Rm),Rn */
	IF(0x0C08C914u); { u32 t_ = r10; PR = 0x0C08C918u; r5 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08C918u); }  /* 0C08C914 jsr @Rn */
L_0C08C918: BLKS(0x0C08C918u);
	T = (r0 & r0) == 0;  /* 0C08C918 tst Rm,Rn */
	if (T) { UPD(0x0C08C8E2u, 4); goto L_0C08C8E2; }  /* 0C08C91A bt */
L_0C08C91C: BLKS(0x0C08C91Cu);
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C08C91Eu, 1);  /* 0C08C91C mov.b @Rm,Rn */
	r3 = 0x13u;  /* 0C08C91E mov #imm,Rn */
	T = r2 > r3;  /* 0C08C920 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C08C970u, 5); goto L_0C08C970; }  /* 0C08C922 bf */
L_0C08C924: BLKS(0x0C08C924u);
	r7 = 0xC0A8B10u; UPD(0x0C08C926u, 1);  /* 0C08C924 mov.l @(disp,pc),Rn */
L_0C08C926: BLKS(0x0C08C926u);
	r10 = r2 & 0xFF;  /* 0C08C926 extu.b Rm,Rn */
	r5 = 0x14u;  /* 0C08C928 mov #imm,Rn */
	T = r10 > r5;  /* 0C08C92A cmp/hi Rm,Rn */
	{ u32 c_ = T; r4 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08C950u, 6); goto L_0C08C950; } UPD(0x0C08C930u, 1); goto L_0C08C930; }  /* 0C08C92C bt/s */
L_0C08C930: BLKS(0x0C08C930u);
	r0 = R32(r14); UPD(0x0C08C932u, 1);  /* 0C08C930 mov.l @Rm,Rn */
	r12 = r13;  /* 0C08C932 mov Rm,Rn */
	r12 += r0;  /* 0C08C934 add Rm,Rn */
	r0 = R32(r12 + 0x8u); UPD(0x0C08C938u, 3);  /* 0C08C936 mov.l @(disp,Rm),Rn */
	r4 = 0xFu;  /* 0C08C938 mov #imm,Rn */
	r0 &= r4;  /* 0C08C93A and Rm,Rn */
	r6 = 0xC1A360Cu; UPD(0x0C08C93Eu, 3);  /* 0C08C93C mov.l @(disp,pc),Rn */
	IF(0x0C08C93Eu); r0 <<= 2;  /* 0C08C93E shll2 Rn */
	IF(0x0C08C940u); r13 = R32(r0 + r6); UPD(0x0C08C942u, 2);  /* 0C08C940 mov.l @(r0,Rm),Rn */
	{ W32(r12 + 0x38u, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08C8E4u, 3); goto L_0C08C8E4; }  /* 0C08C942 bra */
L_0C08C950: BLKS(0x0C08C950u);
	r3 = R32(r9 + 0x8u); UPD(0x0C08C952u, 1);  /* 0C08C950 mov.l @(disp,Rm),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C08C952 add #imm,Rn */
	W32(r9 + 0x8u, r3); UPD(0x0C08C956u, 2);  /* 0C08C954 mov.l Rm,@(disp,Rn) */
	IF(0x0C08C956u); { u32 t_ = r7; PR = 0x0C08C95Au; W32(r14 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C08C95Au); }  /* 0C08C956 jsr @Rn */
L_0C08C95A: BLKS(0x0C08C95Au);
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C08C95Cu, 1);  /* 0C08C95A mov.b @Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C08C95C add #imm,Rn */
	W8(r8, r2); UPD(0x0C08C960u, 2);  /* 0C08C95E mov.b Rm,@Rn */
	r9 = R32(r12); UPD(0x0C08C962u, 1);  /* 0C08C960 mov.l @Rm,Rn */
	r8 = 0xFFFFF000u; UPD(0x0C08C964u, 1);  /* 0C08C962 mov.w @(disp,pc),Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C08C966u, 1);  /* 0C08C964 mov.l @(disp,Rm),Rn */
	r9 += r8;  /* 0C08C966 add Rm,Rn */
	{ W32(r12, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C08C930u, 4); goto L_0C08C930; }  /* 0C08C968 bra */
L_0C08C970: BLKS(0x0C08C970u);
	r4 = R32(r9 + 0x8u); UPD(0x0C08C972u, 1);  /* 0C08C970 mov.l @(disp,Rm),Rn */
	r0 = 0xC0A8B10u; UPD(0x0C08C974u, 1);  /* 0C08C972 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C08C974 add #imm,Rn */
	W32(r9 + 0x8u, r4); UPD(0x0C08C978u, 2);  /* 0C08C976 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r0); UPD(0x0C08C97Au, 1);  /* 0C08C978 mov.l Rm,@(disp,Rn) */
	IF(0x0C08C97Au); { u32 t_ = r0; PR = 0x0C08C97Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C08C97Eu); }  /* 0C08C97A jsr @Rn */
L_0C08C97E: BLKS(0x0C08C97Eu);
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C08C980u, 1);  /* 0C08C97E mov.b @Rm,Rn */
	r7 = R32(r12); UPD(0x0C08C982u, 1);  /* 0C08C980 mov.l @Rm,Rn */
	r6 += 0x1u;  /* 0C08C982 add #imm,Rn */
	r1 = 0x1000u; UPD(0x0C08C986u, 2);  /* 0C08C984 mov.w @(disp,pc),Rn */
	r2 = r6;  /* 0C08C986 mov Rm,Rn */
	r7 += r1;  /* 0C08C988 add Rm,Rn */
	W8(r8, r6); UPD(0x0C08C98Cu, 3);  /* 0C08C98A mov.b Rm,@Rn */
	W32(r12, r7); UPD(0x0C08C98Eu, 1);  /* 0C08C98C mov.l Rm,@Rn */
	{ r7 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C08C926u, 3); goto L_0C08C926; }  /* 0C08C98E bra */
L_0C08C9A0: BLKS(0x0C08C9A0u);
	{ W8(r10, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C08C8E2u, 3); goto L_0C08C8E2; }  /* 0C08C9A0 bra */
L_0C08C9B0: BLKS(0x0C08C9B0u);
	r7 = R32(r9); UPD(0x0C08C9B2u, 1);  /* 0C08C9B0 mov.l @Rm,Rn */
	r1 = 0x13000000u; UPD(0x0C08C9B4u, 1);  /* 0C08C9B2 mov.l @(disp,pc),Rn */
	r7 |= r1;  /* 0C08C9B4 or Rm,Rn */
	{ W32(r9, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C08C8E2u, 4); goto L_0C08C8E2; }  /* 0C08C9B6 bra */
L_0C08C9C0: BLKS(0x0C08C9C0u);
	{ IF(0x0C08C9C2u); ; /* slot nop */ UPD(0x0C08C832u, 3); goto L_0C08C832; }  /* 0C08C9C0 bra */
L_0C08C9D0: BLKS(0x0C08C9D0u);
	{ IF(0x0C08C9D2u); ; /* slot nop */ UPD(0x0C08C818u, 3); goto L_0C08C818; }  /* 0C08C9D0 bra */
L_0C0A9590: BLKS(0x0C0A9590u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9592u, 1);  /* 0C0A9590 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9594u, 1);  /* 0C0A9592 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A9594 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9598u, 2);  /* 0C0A9596 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0A9598 mov #imm,Rn */
	r9 = 0xC062780u; UPD(0x0C0A959Cu, 2);  /* 0C0A959A mov.l @(disp,pc),Rn */
	IF(0x0C0A959Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0A959Eu, 1);  /* 0C0A959C sts.l pr,@-Rn */
	IF(0x0C0A959Eu); { u32 t_ = r9; PR = 0x0C0A95A2u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0A95A2u); }  /* 0C0A959E jsr @Rn */
L_0C0A95A2: BLKS(0x0C0A95A2u);
	r2 = r0;  /* 0C0A95A2 mov Rm,Rn */
	r0 = 0x4u;  /* 0C0A95A4 mov #imm,Rn */
	T = r2 > r0;  /* 0C0A95A6 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0A95D0u, 6); goto L_0C0A95D0; }  /* 0C0A95A8 bt */
L_0C0A95AA: BLKS(0x0C0A95AAu);
	r0 = 0xC0A95B8u;  /* 0C0A95AA mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0A95AC add Rm,Rn */
	IF(0x0C0A95AEu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A95B0u, 3);  /* 0C0A95AE mov.w @(r0,Rm),Rn */
	IF(0x0C0A95B0u); { u32 tv_ = (r3 + 0x0C0A95B4u); u32 t_ = PHYS(tv_); IF(0x0C0A95B2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A95D0u: goto L_0C0A95D0; case 0x0C0A9630u: goto L_0C0A9630; case 0x0C0A9660u: goto L_0C0A9660; case 0x0C0A96A0u: goto L_0C0A96A0; case 0x0C0A96D0u: goto L_0C0A96D0; default: JUMPD(tv_); } }  /* 0C0A95B0 braf Rn */
L_0C0A95D0: BLKS(0x0C0A95D0u);
	r6 = 0xB4u; UPD(0x0C0A95D2u, 1);  /* 0C0A95D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A95D2 add #imm,Rn */
	IF(0x0C0A95D4u); MACL = r8 * r6;  /* 0C0A95D4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A95D8u, 4);  /* 0C0A95D6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A95DAu, 1);  /* 0C0A95D8 mov.w @(disp,pc),Rn */
	IF(0x0C0A95DAu); r3 = MACL;  /* 0C0A95DA sts macl,Rn */
	r3 += r9;  /* 0C0A95DC add Rm,Rn */
	IF(0x0C0A95DEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A95E0u, 3);  /* 0C0A95DE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A95E0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A95E4u, 2);  /* 0C0A95E2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A95E4 add #imm,Rn */
	IF(0x0C0A95E6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A95E8u, 2);  /* 0C0A95E6 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0A95E8 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A95EA extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A95EEu, 3);  /* 0C0A95EC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0A95F0u, 1);  /* 0C0A95EE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A95F2u, 1);  /* 0C0A95F0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A95F4u, 1);  /* 0C0A95F2 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0A95F6u, 1);  /* 0C0A95F4 mov.l @(disp,Rm),Rn */
L_0C0A95F6: BLKS(0x0C0A95F6u);
	IF(0x0C0A95F6u); { u32 t_ = r0; PR = 0x0C0A95FAu; IF(0x0C0A95F8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A95FAu); }  /* 0C0A95F6 jsr @Rn */
L_0C0A95FA: BLKS(0x0C0A95FAu);
	r15 += 0x8u;  /* 0C0A95FA add #imm,Rn */
	UPD(0x0C0A95FCu, 1);
L_0C0A95FC: BLKS(0x0C0A95FCu);
	r6 = 0xB4u; UPD(0x0C0A95FEu, 1);  /* 0C0A95FC mov.w @(disp,pc),Rn */
	IF(0x0C0A95FEu); MACL = r8 * r6;  /* 0C0A95FE mul.l Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0A9602u, 3);  /* 0C0A9600 mov.w @(disp,pc),Rn */
	IF(0x0C0A9602u); r8 = MACL;  /* 0C0A9602 sts macl,Rn */
	r8 += r9;  /* 0C0A9604 add Rm,Rn */
	r9 = 0xC07DCE0u; UPD(0x0C0A9608u, 3);  /* 0C0A9606 mov.l @(disp,pc),Rn */
	IF(0x0C0A9608u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A960Au, 1);  /* 0C0A9608 mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A960Cu, 1);  /* 0C0A960A mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A960C extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A9610u, 2);  /* 0C0A960E mov.l @(disp,Rm),Rn */
	IF(0x0C0A9610u); { u32 t_ = r9; PR = 0x0C0A9614u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DCE0, 0x0C07DCE0u, 0x0C0A9614u); }  /* 0C0A9610 jsr @Rn */
L_0C0A9614: BLKS(0x0C0A9614u);
	r9 = 0x0u;  /* 0C0A9614 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0A9618u, 2);  /* 0C0A9616 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A9618 mov Rm,Rn */
	IF(0x0C0A961Au); PR = R32(r15); r15 += 4; UPD(0x0C0A961Cu, 2);  /* 0C0A961A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A961Eu, 1);  /* 0C0A961C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A9620u, 1);  /* 0C0A961E mov.l @Rm+,Rn */
	IF(0x0C0A9620u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A9620 rts */
L_0C0A9630: BLKS(0x0C0A9630u);
	r0 = 0xB4u; UPD(0x0C0A9632u, 1);  /* 0C0A9630 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A9632 add #imm,Rn */
	IF(0x0C0A9634u); MACL = r8 * r0;  /* 0C0A9634 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A9638u, 4);  /* 0C0A9636 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A963Au, 1);  /* 0C0A9638 mov.w @(disp,pc),Rn */
	IF(0x0C0A963Au); r3 = MACL;  /* 0C0A963A sts macl,Rn */
	r3 += r9;  /* 0C0A963C add Rm,Rn */
	IF(0x0C0A963Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9640u, 3);  /* 0C0A963E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A9640 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A9644u, 2);  /* 0C0A9642 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9644 add #imm,Rn */
	IF(0x0C0A9646u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9648u, 2);  /* 0C0A9646 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0A9648 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A964A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A964Eu, 3);  /* 0C0A964C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0A9650u, 1);  /* 0C0A964E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A9652u, 1);  /* 0C0A9650 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A9654u, 1);  /* 0C0A9652 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A95F6u, 3); goto L_0C0A95F6; }  /* 0C0A9654 bra */
L_0C0A9660: BLKS(0x0C0A9660u);
	r0 = 0xB4u; UPD(0x0C0A9662u, 1);  /* 0C0A9660 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0A9662 add #imm,Rn */
	IF(0x0C0A9664u); MACL = r8 * r0;  /* 0C0A9664 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A9668u, 4);  /* 0C0A9666 mov.l @(disp,pc),Rn */
	IF(0x0C0A9668u); r3 = MACL;  /* 0C0A9668 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A966Cu, 2);  /* 0C0A966A mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0A966C add Rm,Rn */
	IF(0x0C0A966Eu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9670u, 2);  /* 0C0A966E mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A9670 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0A9674u, 2);  /* 0C0A9672 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A9674 add #imm,Rn */
	IF(0x0C0A9676u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A9678u, 2);  /* 0C0A9676 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0A9678 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A967A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0A967Eu, 3);  /* 0C0A967C mov.l Rm,@(disp,Rn) */
	r7 = R32(r3 + 0x2Cu); UPD(0x0C0A9680u, 1);  /* 0C0A967E mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r7); UPD(0x0C0A9682u, 1);  /* 0C0A9680 mov.l Rm,@(disp,Rn) */
	r6 = R32(r3 + 0x30u); UPD(0x0C0A9684u, 1);  /* 0C0A9682 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BE860u; UPD(0x0C0A9686u, 1);  /* 0C0A9684 mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r6); UPD(0x0C0A9688u, 1);  /* 0C0A9686 mov.l Rm,@(disp,Rn) */
	r4 = R32(r3); UPD(0x0C0A968Au, 1);  /* 0C0A9688 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A968Cu, 1);  /* 0C0A968A mov.l @(disp,Rm),Rn */
	IF(0x0C0A968Cu); { u32 t_ = r0; PR = 0x0C0A9690u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BE860, 0x0C0BE860u, 0x0C0A9690u); }  /* 0C0A968C jsr @Rn */
L_0C0A9690: BLKS(0x0C0A9690u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0A95FCu, 3); goto L_0C0A95FC; }  /* 0C0A9690 bra */
L_0C0A96A0: BLKS(0x0C0A96A0u);
	r6 = 0xB4u; UPD(0x0C0A96A2u, 1);  /* 0C0A96A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A96A2 add #imm,Rn */
	IF(0x0C0A96A4u); MACL = r8 * r6;  /* 0C0A96A4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A96A8u, 4);  /* 0C0A96A6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A96AAu, 1);  /* 0C0A96A8 mov.w @(disp,pc),Rn */
	IF(0x0C0A96AAu); r3 = MACL;  /* 0C0A96AA sts macl,Rn */
	r3 += r9;  /* 0C0A96AC add Rm,Rn */
	IF(0x0C0A96AEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A96B0u, 3);  /* 0C0A96AE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A96B0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A96B4u, 2);  /* 0C0A96B2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A96B4 add #imm,Rn */
	IF(0x0C0A96B6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A96B8u, 2);  /* 0C0A96B6 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A96B8 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A96BA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A96BEu, 3);  /* 0C0A96BC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0C0030u; UPD(0x0C0A96C0u, 1);  /* 0C0A96BE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A96C2u, 1);  /* 0C0A96C0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A96C4u, 1);  /* 0C0A96C2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A95F6u, 3); goto L_0C0A95F6; }  /* 0C0A96C4 bra */
L_0C0A96D0: BLKS(0x0C0A96D0u);
	r5 = 0xB4u; UPD(0x0C0A96D2u, 1);  /* 0C0A96D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A96D2 add #imm,Rn */
	IF(0x0C0A96D4u); MACL = r8 * r5;  /* 0C0A96D4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0A96D8u, 4);  /* 0C0A96D6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A96DAu, 1);  /* 0C0A96D8 mov.w @(disp,pc),Rn */
	IF(0x0C0A96DAu); r3 = MACL;  /* 0C0A96DA sts macl,Rn */
	r3 += r9;  /* 0C0A96DC add Rm,Rn */
	IF(0x0C0A96DEu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A96E0u, 3);  /* 0C0A96DE mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A96E0 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A96E2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A96E6u, 3);  /* 0C0A96E4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A96E6 add #imm,Rn */
	IF(0x0C0A96E8u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A96EAu, 2);  /* 0C0A96E8 mov.b @(r0,Rm),Rn */
	r0 = r7 & 0xFF;  /* 0C0A96EA extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A96EEu, 2);  /* 0C0A96EC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0A96F0u, 1);  /* 0C0A96EE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A96F2u, 1);  /* 0C0A96F0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A96F4u, 1);  /* 0C0A96F2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A95F6u, 3); goto L_0C0A95F6; }  /* 0C0A96F4 bra */
}

void blk_f_0C08CA10(sh3_t *c)
{
	LOCALS;
L_0C08CA10: BLKS(0x0C08CA10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08CA12u, 1);  /* 0C08CA10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08CA14u, 1);  /* 0C08CA12 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08CA16u, 1);  /* 0C08CA14 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08CA18u, 1);  /* 0C08CA16 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08CA1Au, 1);  /* 0C08CA18 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08CA1Cu, 1);  /* 0C08CA1A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08CA1Eu, 1);  /* 0C08CA1C mov.l Rm,@-Rn */
	r4 = 0xC2ABAA4u; UPD(0x0C08CA20u, 1);  /* 0C08CA1E mov.l @(disp,pc),Rn */
	IF(0x0C08CA20u); r15 -= 4; W32(r15, PR); UPD(0x0C08CA22u, 1);  /* 0C08CA20 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C08CA24u, 1);  /* 0C08CA22 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C08CA24 add #imm,Rn */
	r8 = 0xC29D724u; UPD(0x0C08CA28u, 2);  /* 0C08CA26 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C08CA28 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C08CA2Cu, 2);  /* 0C08CA2A mov.w @Rm+,Rn */
	r7 = R32(r8); UPD(0x0C08CA2Eu, 1);  /* 0C08CA2C mov.l @Rm,Rn */
	IF(0x0C08CA2Eu); r0 <<= 2;  /* 0C08CA2E shll2 Rn */
	IF(0x0C08CA30u); r6 = R32(r0 + r7); UPD(0x0C08CA32u, 2);  /* 0C08CA30 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r2 = v_; } UPD(0x0C08CA34u, 1);  /* 0C08CA32 mov.w @Rm+,Rn */
	r5 = 0xC297460u; UPD(0x0C08CA36u, 1);  /* 0C08CA34 mov.l @(disp,pc),Rn */
	r9 = 0xC2460ACu; UPD(0x0C08CA38u, 1);  /* 0C08CA36 mov.l @(disp,pc),Rn */
	r8 = 0xC069510u; UPD(0x0C08CA3Au, 1);  /* 0C08CA38 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C08CA3Cu, 1);  /* 0C08CA3A mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C08CA3Eu, 1);  /* 0C08CA3C mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C08CA40u, 1);  /* 0C08CA3E mov.w @Rm,Rn */
	r11 = 0xC2B03A2u; UPD(0x0C08CA42u, 1);  /* 0C08CA40 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C08CA42 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C08CA46u, 2);  /* 0C08CA44 mov.l @(disp,pc),Rn */
	IF(0x0C08CA46u); { u32 t_ = r8; PR = 0x0C08CA4Au; W16(r11, r2); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C08CA4Au); }  /* 0C08CA46 jsr @Rn */
L_0C08CA4A: BLKS(0x0C08CA4Au);
	T = (r0 & r0) == 0;  /* 0C08CA4A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08CA70u, 4); goto L_0C08CA70; } UPD(0x0C08CA50u, 1); goto L_0C08CA50; }  /* 0C08CA4C bf/s */
L_0C08CA50: BLKS(0x0C08CA50u);
	r14 += 0xCu;  /* 0C08CA50 add #imm,Rn */
	UPD(0x0C08CA52u, 1);
L_0C08CA52: BLKS(0x0C08CA52u);
	r15 = r14;  /* 0C08CA52 mov Rm,Rn */
	IF(0x0C08CA54u); PR = R32(r15); r15 += 4; UPD(0x0C08CA56u, 2);  /* 0C08CA54 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08CA58u, 1);  /* 0C08CA56 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08CA5Au, 1);  /* 0C08CA58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08CA5Cu, 1);  /* 0C08CA5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08CA5Eu, 1);  /* 0C08CA5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08CA60u, 1);  /* 0C08CA5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08CA62u, 1);  /* 0C08CA60 mov.l @Rm+,Rn */
	IF(0x0C08CA62u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08CA62 rts */
L_0C08CA70: BLKS(0x0C08CA70u);
	r10 = 0xC071740u; UPD(0x0C08CA72u, 1);  /* 0C08CA70 mov.l @(disp,pc),Rn */
	IF(0x0C08CA72u); { u32 t_ = r10; PR = 0x0C08CA76u; r4 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08CA76u); }  /* 0C08CA72 jsr @Rn */
L_0C08CA76: BLKS(0x0C08CA76u);
	T = (r0 & r0) == 0;  /* 0C08CA76 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08CA50u, 4); goto L_0C08CA50; } goto L_0C08CA7C; }  /* 0C08CA78 bt/s */
L_0C08CA7C: BLKS(0x0C08CA7Cu);
	r12 = 0xC28EDFCu; UPD(0x0C08CA7Eu, 2);  /* 0C08CA7C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C08CA80u, 1);  /* 0C08CA7E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C08CA82u, 1);  /* 0C08CA80 mov.w @Rm+,Rn */
	IF(0x0C08CA82u); MACL = r10 * r8;  /* 0C08CA82 mul.l Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C08CA86u, 3);  /* 0C08CA84 mov.w @Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C08CA88u, 1);  /* 0C08CA86 mov.l @(disp,pc),Rn */
	IF(0x0C08CA88u); r8 = MACL;  /* 0C08CA88 sts macl,Rn */
	r8 += r4;  /* 0C08CA8A add Rm,Rn */
	r0 = r3 & 0xFFFF;  /* 0C08CA8C extu.w Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C08CA90u, 4);  /* 0C08CA8E mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C08CA90 mov Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r11); UPD(0x0C08CA94u, 2);  /* 0C08CA92 mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C08CA96u, 1);  /* 0C08CA94 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C08CA96 mov #imm,Rn */
	r7 = 0xC0A8A30u; UPD(0x0C08CA9Au, 2);  /* 0C08CA98 mov.l @(disp,pc),Rn */
	IF(0x0C08CA9Au); W16(r0 + r8, r13); UPD(0x0C08CA9Cu, 1);  /* 0C08CA9A mov.w Rm,@(r0,Rn) */
	r6 = 0xD3000104u; UPD(0x0C08CA9Eu, 1);  /* 0C08CA9C mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C08CA9E add #imm,Rn */
	W32(r8, r6); UPD(0x0C08CAA2u, 2);  /* 0C08CAA0 mov.l Rm,@Rn */
	IF(0x0C08CAA2u); W16(r0 + r8, r13); UPD(0x0C08CAA4u, 1);  /* 0C08CAA2 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0xCu, r11); UPD(0x0C08CAA6u, 1);  /* 0C08CAA4 mov.l Rm,@(disp,Rn) */
	IF(0x0C08CAA6u); { u32 t_ = r7; PR = 0x0C08CAAAu; W32(r8 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08CAAAu); }  /* 0C08CAA6 jsr @Rn */
L_0C08CAAA: BLKS(0x0C08CAAAu);
	r9 = 0xC0722E0u; UPD(0x0C08CAACu, 1);  /* 0C08CAAA mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08CAAC mov Rm,Rn */
	r5 = 0x1600000u; UPD(0x0C08CAB0u, 2);  /* 0C08CAAE mov.l @(disp,pc),Rn */
	IF(0x0C08CAB0u); { u32 t_ = r9; PR = 0x0C08CAB4u; W32(r8 + 0x24u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C08CAB4u); }  /* 0C08CAB0 jsr @Rn */
L_0C08CAB4: BLKS(0x0C08CAB4u);
	r2 = 0xC0A9AE0u; UPD(0x0C08CAB6u, 1);  /* 0C08CAB4 mov.l @(disp,pc),Rn */
	r9 = 0x8Cu; UPD(0x0C08CAB8u, 1);  /* 0C08CAB6 mov.w @(disp,pc),Rn */
	IF(0x0C08CAB8u); { u32 t_ = r2; PR = 0x0C08CABCu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08CABCu); }  /* 0C08CAB8 jsr @Rn */
L_0C08CABC: BLKS(0x0C08CABCu);
	r0 = 0xADu; UPD(0x0C08CABEu, 1);  /* 0C08CABC mov.w @(disp,pc),Rn */
	r4 = 0x13u;  /* 0C08CABE mov #imm,Rn */
	r3 = 0xA8u; UPD(0x0C08CAC2u, 2);  /* 0C08CAC0 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C08CAC2 add Rm,Rn */
	IF(0x0C08CAC4u); W8(r0 + r8, r4); UPD(0x0C08CAC6u, 2);  /* 0C08CAC4 mov.b Rm,@(r0,Rn) */
	r3 += r8;  /* 0C08CAC6 add Rm,Rn */
	r3 += 0x1u;  /* 0C08CAC8 add #imm,Rn */
	r0 = 0xC0A9D30u; UPD(0x0C08CACCu, 3);  /* 0C08CACA mov.l @(disp,pc),Rn */
	W8(r3, r4); UPD(0x0C08CACEu, 1);  /* 0C08CACC mov.b Rm,@Rn */
	r6 = 0xC297460u; UPD(0x0C08CAD0u, 1);  /* 0C08CACE mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08CAD0 mov Rm,Rn */
	r5 = R32(r6); UPD(0x0C08CAD4u, 2);  /* 0C08CAD2 mov.l @Rm,Rn */
	IF(0x0C08CAD4u); { u32 t_ = r0; PR = 0x0C08CAD8u; W32(r14 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C08CAD8u); }  /* 0C08CAD4 jsr @Rn */
L_0C08CAD8: BLKS(0x0C08CAD8u);
	r13 = 0x94u; UPD(0x0C08CADAu, 1);  /* 0C08CAD8 mov.w @(disp,pc),Rn */
	r0 = 0x90u; UPD(0x0C08CADCu, 1);  /* 0C08CADA mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C08CADC add Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C08CAE0u, 2);  /* 0C08CADE mov.l @(disp,Rm),Rn */
	W32(r13, r11); UPD(0x0C08CAE2u, 1);  /* 0C08CAE0 mov.l Rm,@Rn */
	IF(0x0C08CAE2u); W32(r0 + r8, r11); UPD(0x0C08CAE4u, 1);  /* 0C08CAE2 mov.l Rm,@(r0,Rn) */
	r13 = r8;  /* 0C08CAE4 mov Rm,Rn */
	W32(r9, r11); UPD(0x0C08CAE8u, 2);  /* 0C08CAE6 mov.l Rm,@Rn */
	W32(r8 + 0x30u, r11); UPD(0x0C08CAEAu, 1);  /* 0C08CAE8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r11); UPD(0x0C08CAECu, 1);  /* 0C08CAEA mov.l Rm,@(disp,Rn) */
	W32(r14, r11); UPD(0x0C08CAEEu, 1);  /* 0C08CAEC mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C08CAF0u, 1);  /* 0C08CAEE mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C08CAF0 mov #imm,Rn */
	IF(0x0C08CAF2u); ;  /* 0C08CAF2 nop */
	UPD(0x0C08CAF4u, 2);
L_0C08CAF4: BLKS(0x0C08CAF4u);
	r9 = 0xC1A3F20u; UPD(0x0C08CAF6u, 1);  /* 0C08CAF4 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C08CAF8u, 1);  /* 0C08CAF6 mov.w @Rm+,Rn */
	r9 += r11;  /* 0C08CAF8 add Rm,Rn */
	r8 = 0xB4u; UPD(0x0C08CAFCu, 2);  /* 0C08CAFA mov.w @(disp,pc),Rn */
	r9 += 0x4u;  /* 0C08CAFC add #imm,Rn */
	IF(0x0C08CAFEu); MACL = r10 * r8;  /* 0C08CAFE mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C08CB02u, 4);  /* 0C08CB00 mov.w @Rm,Rn */
	r11 += 0x14u;  /* 0C08CB02 add #imm,Rn */
	r1 = 0xC286578u; UPD(0x0C08CB06u, 2);  /* 0C08CB04 mov.l @(disp,pc),Rn */
	IF(0x0C08CB06u); r8 = MACL;  /* 0C08CB06 sts macl,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C08CB0Au, 2);  /* 0C08CB08 mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C08CB0A add Rm,Rn */
	IF(0x0C08CB0Cu); r7 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C08CB0Eu, 2);  /* 0C08CB0C mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C08CB0E add Rm,Rn */
	r8 += 0x7Cu;  /* 0C08CB10 add #imm,Rn */
	W16(r8, r7); UPD(0x0C08CB14u, 3);  /* 0C08CB12 mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C08CB14 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C08CB18u, 2);  /* 0C08CB16 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C08CB18 add #imm,Rn */
	W16(r8, r5); UPD(0x0C08CB1Cu, 2);  /* 0C08CB1A mov.w Rm,@Rn */
	r7 = 0x0u;  /* 0C08CB1C mov #imm,Rn */
	r3 = 0xC2460ACu; UPD(0x0C08CB20u, 2);  /* 0C08CB1E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C08CB20 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C08CB24u, 2);  /* 0C08CB22 mov.w @Rm,Rn */
	r2 = R32(r9); UPD(0x0C08CB26u, 1);  /* 0C08CB24 mov.l @Rm,Rn */
	r6 = r4 & 0xFFFF;  /* 0C08CB26 extu.w Rm,Rn */
	W32(r8, r2); UPD(0x0C08CB2Au, 2);  /* 0C08CB28 mov.l Rm,@Rn */
	r4 = r10;  /* 0C08CB2A mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C08CB2Eu, 2);  /* 0C08CB2C mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A8A30u; UPD(0x0C08CB30u, 1);  /* 0C08CB2E mov.l @(disp,pc),Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C08CB32u, 1);  /* 0C08CB30 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C08CB34u, 1);  /* 0C08CB32 mov.l Rm,@(disp,Rn) */
	IF(0x0C08CB34u); { u32 t_ = r5; PR = 0x0C08CB38u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08CB38u); }  /* 0C08CB34 jsr @Rn */
L_0C08CB38: BLKS(0x0C08CB38u);
	r2 = 0xC2B03A2u; UPD(0x0C08CB3Au, 1);  /* 0C08CB38 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C08CB3A mov Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C08CB3Eu, 2);  /* 0C08CB3C mov.w @Rm,Rn */
	IF(0x0C08CB3Eu); r3 >>= 2;  /* 0C08CB3E shlr2 Rn */
	r4 = 0x86u; UPD(0x0C08CB42u, 2);  /* 0C08CB40 mov.w @(disp,pc),Rn */
	IF(0x0C08CB42u); r3 >>= 2;  /* 0C08CB42 shlr2 Rn */
	IF(0x0C08CB44u); r3 >>= 2;  /* 0C08CB44 shlr2 Rn */
	IF(0x0C08CB46u); W16(r0 + r4, r3); UPD(0x0C08CB48u, 3);  /* 0C08CB46 mov.w Rm,@(r0,Rn) */
	r6 = R32(r13 + 0x24u); UPD(0x0C08CB4Au, 1);  /* 0C08CB48 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C08CB4A mov Rm,Rn */
	r0 = R32(r13 + 0x28u); UPD(0x0C08CB4Eu, 2);  /* 0C08CB4C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C08CB50u, 1);  /* 0C08CB4E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C08CB52u, 1);  /* 0C08CB50 mov.l Rm,@(disp,Rn) */
	r7 = R32(r9 + 0xCu); UPD(0x0C08CB54u, 1);  /* 0C08CB52 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C08CB56u, 1);  /* 0C08CB54 mov.l Rm,@(disp,Rn) */
	r5 = R32(r9 + 0x10u); UPD(0x0C08CB58u, 1);  /* 0C08CB56 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A9AE0u; UPD(0x0C08CB5Au, 1);  /* 0C08CB58 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r5); UPD(0x0C08CB5Cu, 1);  /* 0C08CB5A mov.l Rm,@(disp,Rn) */
	r2 = 0xFFFA0000u; UPD(0x0C08CB5Eu, 1);  /* 0C08CB5C mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C08CB5E add #imm,Rn */
	IF(0x0C08CB60u); { u32 t_ = r10; PR = 0x0C08CB64u; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08CB64u); }  /* 0C08CB60 jsr @Rn */
L_0C08CB64: BLKS(0x0C08CB64u);
	r0 = 0xB0u; UPD(0x0C08CB66u, 1);  /* 0C08CB64 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C08CB66 add #imm,Rn */
	IF(0x0C08CB68u); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C08CB6Au, 2);  /* 0C08CB68 mov.b @(r0,Rm),Rn */
	r10 = 0xAu;  /* 0C08CB6A mov #imm,Rn */
	IF(0x0C08CB6Cu); W8(r0 + r8, r3); UPD(0x0C08CB6Eu, 2);  /* 0C08CB6C mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C08CB70u, 1);  /* 0C08CB6E mov.w @(disp,pc),Rn */
	r7 = 0xACu; UPD(0x0C08CB72u, 1);  /* 0C08CB70 mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C08CB72 add Rm,Rn */
	r8 += r7;  /* 0C08CB74 add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C08CB78u, 3);  /* 0C08CB76 mov.l @(disp,Rm),Rn */
	r7 += r13;  /* 0C08CB78 add Rm,Rn */
	r7 += 0x1u;  /* 0C08CB7A add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C08CB7Eu, 3);  /* 0C08CB7C mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C08CB7E add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C08CB82u, 2);  /* 0C08CB80 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C08CB82 add #imm,Rn */
	W8(r0, r6); UPD(0x0C08CB86u, 2);  /* 0C08CB84 mov.b Rm,@Rn */
	W8(r8, r5); UPD(0x0C08CB88u, 1);  /* 0C08CB86 mov.b Rm,@Rn */
	r9 = R32(r14); UPD(0x0C08CB8Au, 1);  /* 0C08CB88 mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C08CB8A add #imm,Rn */
	r2 = (u32)(s32)(s16)r9;  /* 0C08CB8C exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C08CB90u, 3);  /* 0C08CB8E mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C08CB92u, 1);  /* 0C08CB90 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r10;  /* 0C08CB92 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08CAF4u, 4); goto L_0C08CAF4; } goto L_0C08CB98; }  /* 0C08CB94 bf/s */
L_0C08CB98: BLKS(0x0C08CB98u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C08CA52u, 4); goto L_0C08CA52; }  /* 0C08CB98 bra */
}

void blk_f_0C08CC00(sh3_t *c)
{
	LOCALS;
L_0C08CC00: BLKS(0x0C08CC00u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08CC02u, 1);  /* 0C08CC00 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C08CC04u, 1);  /* 0C08CC02 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C08CC04 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08CC08u, 2);  /* 0C08CC06 mov.l Rm,@-Rn */
	IF(0x0C08CC08u); MACL = r8 * r3;  /* 0C08CC08 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08CC0Cu, 3);  /* 0C08CC0A mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08CC0Eu, 1);  /* 0C08CC0C mov.l @(disp,pc),Rn */
	IF(0x0C08CC0Eu); r2 = MACL;  /* 0C08CC0E sts macl,Rn */
	IF(0x0C08CC10u); r15 -= 4; W32(r15, PR); UPD(0x0C08CC12u, 2);  /* 0C08CC10 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08CC12 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08CC16u, 2);  /* 0C08CC14 mov.l @(disp,Rm),Rn */
	r0 = 0x8u;  /* 0C08CC16 mov #imm,Rn */
	T = r2 > r0;  /* 0C08CC18 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08CCACu, 5); goto L_0C08CCAC; } goto L_0C08CC1E; }  /* 0C08CC1A bt/s */
L_0C08CC1E: BLKS(0x0C08CC1Eu);
	r0 = 0xC08CC30u;  /* 0C08CC1E mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08CC20 add Rm,Rn */
	IF(0x0C08CC22u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08CC24u, 4);  /* 0C08CC22 mov.w @(r0,Rm),Rn */
	IF(0x0C08CC24u); { u32 tv_ = (r4 + 0x0C08CC28u); u32 t_ = PHYS(tv_); IF(0x0C08CC26u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08CC24 braf Rn */
L_0C08CCAC: BLKS(0x0C08CCACu);
	r15 = r14;  /* 0C08CCAC mov Rm,Rn */
	IF(0x0C08CCAEu); PR = R32(r15); r15 += 4; UPD(0x0C08CCB0u, 2);  /* 0C08CCAE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08CCB2u, 1);  /* 0C08CCB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08CCB4u, 1);  /* 0C08CCB2 mov.l @Rm+,Rn */
	IF(0x0C08CCB4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08CCB4 rts */
}


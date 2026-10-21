#include "recomp.h"
#include "blk_recomp_funcs.h"

/* FUN_0c077190 */
void blk_f_0C077190(sh3_t *c)
{
	LOCALS;
L_0C077190: BLKS(0x0C077190u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C077192u, 1);  /* 0C077190 mov.l Rm,@-Rn */
	r0 = 0xFFFFFFE3u;  /* 0C077192 mov #imm,Rn */
	r2 = 0x2A0u; UPD(0x0C077196u, 2);  /* 0C077194 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C077196 exts.w Rm,Rn */
	IF(0x0C077198u); MACL = r8 * r2;  /* 0C077198 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07719Cu, 4);  /* 0C07719A mov.l Rm,@-Rn */
	r1 = 0x1u;  /* 0C07719C mov #imm,Rn */
	r3 = 0xC29D1D8u; UPD(0x0C0771A0u, 2);  /* 0C07719E mov.l @(disp,pc),Rn */
	IF(0x0C0771A0u); r2 = MACL;  /* 0C0771A0 sts macl,Rn */
	IF(0x0C0771A2u); r15 -= 4; W32(r15, PR); UPD(0x0C0771A4u, 2);  /* 0C0771A2 sts.l pr,@-Rn */
	r2 += r3;  /* 0C0771A4 add Rm,Rn */
	r7 = R32(r2); UPD(0x0C0771A8u, 2);  /* 0C0771A6 mov.l @Rm,Rn */
	r3 = r7;  /* 0C0771A8 mov Rm,Rn */
	IF(0x0C0771AAu); ARG0(0x430Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C0771AA shad Rm,Rn */
	r0 = 0x25Au; UPD(0x0C0771AEu, 3);  /* 0C0771AC mov.w @(disp,pc),Rn */
	r3 &= r1;  /* 0C0771AE and Rm,Rn */
	IF(0x0C0771B0u); r0 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0771B2u, 2);  /* 0C0771B0 mov.b @(r0,Rm),Rn */
	T = r0 == 0x7u;  /* 0C0771B2 cmp/eq #imm,r0 */
	IF(0x0C0771B4u); r0 = T;  /* 0C0771B4 movt Rn */
	r3 |= r0;  /* 0C0771B6 or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0771B8 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0771D0u, 7); goto L_0C0771D0; } goto L_0C0771BE; }  /* 0C0771BA bt/s */
L_0C0771BE: BLKS(0x0C0771BEu);
	r0 = 0x288u; UPD(0x0C0771C0u, 2);  /* 0C0771BE mov.w @(disp,pc),Rn */
	r4 = 0x10u;  /* 0C0771C0 mov #imm,Rn */
	IF(0x0C0771C2u); W8(r0 + r2, r4); UPD(0x0C0771C4u, 2);  /* 0C0771C2 mov.b Rm,@(r0,Rn) */
	r15 = r14;  /* 0C0771C4 mov Rm,Rn */
	IF(0x0C0771C6u); PR = R32(r15); r15 += 4; UPD(0x0C0771C8u, 2);  /* 0C0771C6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0771CAu, 1);  /* 0C0771C8 mov.l @Rm+,Rn */
	IF(0x0C0771CAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0771CA rts */
L_0C0771D0: BLKS(0x0C0771D0u);
	r0 = R32(r2 + 0x8u); UPD(0x0C0771D2u, 1);  /* 0C0771D0 mov.l @(disp,Rm),Rn */
	r0 |= 0x10u;  /* 0C0771D2 or #imm,r0 */
	W32(r2 + 0x8u, r0); UPD(0x0C0771D6u, 2);  /* 0C0771D4 mov.l Rm,@(disp,Rn) */
	r0 = 0x25Fu; UPD(0x0C0771D8u, 1);  /* 0C0771D6 mov.w @(disp,pc),Rn */
	IF(0x0C0771D8u); W8(r0 + r2, r3); UPD(0x0C0771DAu, 1);  /* 0C0771D8 mov.b Rm,@(r0,Rn) */
	r0 += 0x28u;  /* 0C0771DA add #imm,Rn */
	IF(0x0C0771DCu); W8(r0 + r2, r3); UPD(0x0C0771DEu, 2);  /* 0C0771DC mov.b Rm,@(r0,Rn) */
	r5 = 0x20000000u; UPD(0x0C0771E0u, 1);  /* 0C0771DE mov.l @(disp,pc),Rn */
	r4 = 0xE3FFFFFFu; UPD(0x0C0771E2u, 1);  /* 0C0771E0 mov.l @(disp,pc),Rn */
	r7 |= r5;  /* 0C0771E2 or Rm,Rn */
	r0 = 0xC0C2020u; UPD(0x0C0771E6u, 2);  /* 0C0771E4 mov.l @(disp,pc),Rn */
	r7 &= r4;  /* 0C0771E6 and Rm,Rn */
	W32(r2, r7); UPD(0x0C0771EAu, 2);  /* 0C0771E8 mov.l Rm,@Rn */
	r4 = r8;  /* 0C0771EA mov Rm,Rn */
	IF(0x0C0771ECu); { u32 t_ = r0; PR = 0x0C0771F0u; r5 = 0x58u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2020, 0x0C0C2020u, 0x0C0771F0u); }  /* 0C0771EC jsr @Rn */
L_0C0771F0: BLKS(0x0C0771F0u);
	r7 = 0xC17F768u; UPD(0x0C0771F2u, 1);  /* 0C0771F0 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0771F2 mov Rm,Rn */
	IF(0x0C0771F4u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0771F6u, 2);  /* 0C0771F4 mov.b @(r0,Rm),Rn */
	r5 = 0xC0C2110u; UPD(0x0C0771F8u, 1);  /* 0C0771F6 mov.l @(disp,pc),Rn */
	r4 = r6 & 0xFF;  /* 0C0771F8 extu.b Rm,Rn */
	r15 = r14;  /* 0C0771FA mov Rm,Rn */
	IF(0x0C0771FCu); PR = R32(r15); r15 += 4; UPD(0x0C0771FEu, 3);  /* 0C0771FC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C077200u, 1);  /* 0C0771FE mov.l @Rm+,Rn */
	IF(0x0C077200u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C2110u: TAIL(blk_f_0C0C2110); default: JUMPD(tv_); } }  /* 0C077200 jmp @Rn */
}

void blk_f_0C077230(sh3_t *c)
{
	LOCALS;
L_0C077230: BLKS(0x0C077230u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C077232u, 1);  /* 0C077230 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C077234u, 1);  /* 0C077232 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C077234 exts.w Rm,Rn */
	r6 = 0xC075C00u; UPD(0x0C077238u, 2);  /* 0C077236 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C077238 mov Rm,Rn */
	IF(0x0C07723Au); r15 -= 4; W32(r15, PR); UPD(0x0C07723Cu, 2);  /* 0C07723A sts.l pr,@-Rn */
	IF(0x0C07723Cu); { u32 t_ = r6; PR = 0x0C077240u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C075C00, 0x0C075C00u, 0x0C077240u); }  /* 0C07723C jsr @Rn */
L_0C077240: BLKS(0x0C077240u);
	r7 = 0x2A0u; UPD(0x0C077242u, 1);  /* 0C077240 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C077242 mov #imm,Rn */
	IF(0x0C077244u); MACL = r8 * r7;  /* 0C077244 mul.l Rm,Rn */
	r4 = 0xC29D1D8u; UPD(0x0C077248u, 4);  /* 0C077246 mov.l @(disp,pc),Rn */
	r2 = 0x20u;  /* 0C077248 mov #imm,Rn */
	IF(0x0C07724Au); r7 = MACL;  /* 0C07724A sts macl,Rn */
	r7 += r4;  /* 0C07724C add Rm,Rn */
	r3 = 0x287u; UPD(0x0C077250u, 4);  /* 0C07724E mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C077250 mov Rm,Rn */
	IF(0x0C077252u); W8(r0 + r3, r5); UPD(0x0C077254u, 2);  /* 0C077252 mov.b Rm,@(r0,Rn) */
	r6 = 0x0u;  /* 0C077254 mov #imm,Rn */
	r0 = R32(r7); UPD(0x0C077258u, 2);  /* 0C077256 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C077258 add #imm,Rn */
	r1 = 0xA3FFFFFFu; UPD(0x0C07725Cu, 2);  /* 0C07725A mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C07725C mov Rm,Rn */
	r0 &= r1;  /* 0C07725E and Rm,Rn */
	W32(r7 + 0x8u, r2); UPD(0x0C077262u, 3);  /* 0C077260 mov.l Rm,@(disp,Rn) */
	r4 = 0x15u;  /* 0C077262 mov #imm,Rn */
	W32(r7 + 0xCu, r6); UPD(0x0C077266u, 2);  /* 0C077264 mov.l Rm,@(disp,Rn) */
	IF(0x0C077266u); r5 <<= 2;  /* 0C077266 shll2 Rn */
	W32(r7, r0); UPD(0x0C07726Au, 2);  /* 0C077268 mov.l Rm,@Rn */
	r3 = 0xC17F76Cu; UPD(0x0C07726Cu, 1);  /* 0C07726A mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C07726C mov Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C077270u, 2);  /* 0C07726E mov.l Rm,@(disp,Rn) */
	W32(r15, r6); UPD(0x0C077272u, 1);  /* 0C077270 mov.l Rm,@Rn */
	r4 = 0x0u;  /* 0C077272 mov #imm,Rn */
	IF(0x0C077274u); r5 = R32(r0 + r3); UPD(0x0C077276u, 2);  /* 0C077274 mov.l @(r0,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C077278u, 1);  /* 0C077276 mov.l @(disp,pc),Rn */
	r6 = R32(r7 + 0x10u); UPD(0x0C07727Au, 1);  /* 0C077278 mov.l @(disp,Rm),Rn */
	IF(0x0C07727Au); { u32 t_ = r0; PR = 0x0C07727Eu; r7 = R32(r7 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C07727Eu); }  /* 0C07727A jsr @Rn */
L_0C07727E: BLKS(0x0C07727Eu);
	r2 = 0xC0C2020u; UPD(0x0C077280u, 1);  /* 0C07727E mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C077280 add #imm,Rn */
	r4 = r8;  /* 0C077282 mov Rm,Rn */
	IF(0x0C077284u); { u32 t_ = r2; PR = 0x0C077288u; r5 = 0x47u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0C2020, 0x0C0C2020u, 0x0C077288u); }  /* 0C077284 jsr @Rn */
L_0C077288: BLKS(0x0C077288u);
	r0 = 0xC0C2110u; UPD(0x0C07728Au, 1);  /* 0C077288 mov.l @(disp,pc),Rn */
	r4 = 0x80u; UPD(0x0C07728Cu, 1);  /* 0C07728A mov.w @(disp,pc),Rn */
	IF(0x0C07728Cu); { u32 t_ = r0; PR = 0x0C077290u; IF(0x0C07728Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C077290u); }  /* 0C07728C jsr @Rn */
L_0C077290: BLKS(0x0C077290u);
	r0 = 0xC079FE0u; UPD(0x0C077292u, 1);  /* 0C077290 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C077292 mov Rm,Rn */
	r15 = r14;  /* 0C077294 mov Rm,Rn */
	IF(0x0C077296u); PR = R32(r15); r15 += 4; UPD(0x0C077298u, 3);  /* 0C077296 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07729Au, 1);  /* 0C077298 mov.l @Rm+,Rn */
	IF(0x0C07729Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C079FE0u: goto L_0C079FE0; default: JUMPD(tv_); } }  /* 0C07729A jmp @Rn */
L_0C079FE0: BLKS(0x0C079FE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C079FE2u, 1);  /* 0C079FE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C079FE4u, 1);  /* 0C079FE2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C079FE6u, 1);  /* 0C079FE4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C079FE8u, 1);  /* 0C079FE6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C079FEAu, 1);  /* 0C079FE8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C079FECu, 1);  /* 0C079FEA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C079FEEu, 1);  /* 0C079FEC mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C079FEE exts.w Rm,Rn */
	IF(0x0C079FF0u); r15 -= 4; W32(r15, PR); UPD(0x0C079FF2u, 2);  /* 0C079FF0 sts.l pr,@-Rn */
	r4 = r13;  /* 0C079FF2 mov Rm,Rn */
	r8 = 0xC079F80u; UPD(0x0C079FF6u, 2);  /* 0C079FF4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C079FF6 add #imm,Rn */
	r1 = 0xC28EDFCu; UPD(0x0C079FFAu, 2);  /* 0C079FF8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C079FFA mov Rm,Rn */
	r5 = 0x80u; UPD(0x0C079FFEu, 2);  /* 0C079FFC mov.w @(disp,pc),Rn */
	IF(0x0C079FFEu); { u32 t_ = r8; PR = 0x0C07A002u; W32(r14, r1); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C07A002u); }  /* 0C079FFE jsr @Rn */
L_0C07A002: BLKS(0x0C07A002u);
	T = (r0 & r0) == 0;  /* 0C07A002 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A0AAu, 4); goto L_0C07A0AA; } goto L_0C07A008; }  /* 0C07A004 bt/s */
L_0C07A008: BLKS(0x0C07A008u);
	r2 = 0x2A0u; UPD(0x0C07A00Au, 2);  /* 0C07A008 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C07A00A mov #imm,Rn */
	IF(0x0C07A00Cu); MACL = r13 * r2;  /* 0C07A00C mul.l Rm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C07A010u, 4);  /* 0C07A00E mov.l @(disp,pc),Rn */
	IF(0x0C07A010u); r12 = MACL;  /* 0C07A010 sts macl,Rn */
	r12 += r0;  /* 0C07A012 add Rm,Rn */
	UPD(0x0C07A014u, 2);
L_0C07A014: BLKS(0x0C07A014u);
	r8 = 0x2800u; UPD(0x0C07A016u, 1);  /* 0C07A014 mov.w @(disp,pc),Rn */
	r7 = 0x50u;  /* 0C07A016 mov #imm,Rn */
	r3 = R32(r14); UPD(0x0C07A01Au, 2);  /* 0C07A018 mov.l @Rm,Rn */
	IF(0x0C07A01Au); MACL = r13 * r8;  /* 0C07A01A mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r5 = v_; } UPD(0x0C07A01Eu, 3);  /* 0C07A01C mov.w @Rm+,Rn */
	IF(0x0C07A01Eu); r8 = MACL;  /* 0C07A01E sts macl,Rn */
	IF(0x0C07A020u); MACL = r5 * r7;  /* 0C07A020 mul.l Rm,Rn */
	r9 = 0xC229004u; UPD(0x0C07A024u, 4);  /* 0C07A022 mov.l @(disp,pc),Rn */
	IF(0x0C07A024u); r6 = MACL;  /* 0C07A024 sts macl,Rn */
	r8 += r6;  /* 0C07A026 add Rm,Rn */
	r8 += r9;  /* 0C07A028 add Rm,Rn */
	r9 = 0x3u;  /* 0C07A02A mov #imm,Rn */
	r9 &= r11;  /* 0C07A02C and Rm,Rn */
	W32(r14, r3); UPD(0x0C07A030u, 6);  /* 0C07A02E mov.l Rm,@Rn */
	r9 += r9;  /* 0C07A030 add Rm,Rn */
	r4 = 0xC1867B0u; UPD(0x0C07A034u, 2);  /* 0C07A032 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C07A034 mov Rm,Rn */
	IF(0x0C07A036u); r2 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C07A038u, 2);  /* 0C07A036 mov.w @(r0,Rm),Rn */
	r3 = r11;  /* 0C07A038 mov Rm,Rn */
	r10 = 0xCC808000u; UPD(0x0C07A03Cu, 2);  /* 0C07A03A mov.l @(disp,pc),Rn */
	IF(0x0C07A03Cu); r3 <<= 2;  /* 0C07A03C shll2 Rn */
	r3 += r2;  /* 0C07A03E add Rm,Rn */
	W32(r8, r10); UPD(0x0C07A042u, 3);  /* 0C07A040 mov.l Rm,@Rn */
	r7 = r3 & 0xFFFF;  /* 0C07A042 extu.w Rm,Rn */
	r6 = 0xC079E80u; UPD(0x0C07A046u, 2);  /* 0C07A044 mov.l @(disp,pc),Rn */
	r10 = r8;  /* 0C07A046 mov Rm,Rn */
	IF(0x0C07A048u); r7 >>= 2;  /* 0C07A048 shlr2 Rn */
	IF(0x0C07A04Au); T = r7 & 1; r7 >>= 1;  /* 0C07A04A shlr Rn */
	r0 = 0x0u;  /* 0C07A04C mov #imm,Rn */
	r10 += 0x44u;  /* 0C07A04E add #imm,Rn */
	W32(r8 + 0x8u, r7); UPD(0x0C07A052u, 6);  /* 0C07A050 mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C07A052 mov Rm,Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C07A056u, 2);  /* 0C07A054 mov.l Rm,@(disp,Rn) */
	r9 += r9;  /* 0C07A056 add Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C07A05Au, 2);  /* 0C07A058 mov.l Rm,@(disp,Rn) */
	IF(0x0C07A05Au); { u32 t_ = r6; PR = 0x0C07A05Eu; W16(r10, r3); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07A05Eu); }  /* 0C07A05A jsr @Rn */
L_0C07A05E: BLKS(0x0C07A05Eu);
	r5 = 0x0u;  /* 0C07A05E mov #imm,Rn */
	W32(r8 + 0x3Cu, r5); UPD(0x0C07A062u, 2);  /* 0C07A060 mov.l Rm,@(disp,Rn) */
	r4 = 0x808080u; UPD(0x0C07A064u, 1);  /* 0C07A062 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07A064 add #imm,Rn */
	W32(r8, r4); UPD(0x0C07A068u, 2);  /* 0C07A066 mov.l Rm,@Rn */
	r3 = R32(r12 + 0x10u); UPD(0x0C07A06Au, 1);  /* 0C07A068 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFC0u;  /* 0C07A06A add #imm,Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C07A06Eu, 2);  /* 0C07A06C mov.l Rm,@(disp,Rn) */
	r0 = 0xC1867A0u; UPD(0x0C07A070u, 1);  /* 0C07A06E mov.l @(disp,pc),Rn */
	r2 = R32(r12 + 0x14u); UPD(0x0C07A072u, 1);  /* 0C07A070 mov.l @(disp,Rm),Rn */
	r9 += r0;  /* 0C07A072 add Rm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C07A076u, 2);  /* 0C07A074 mov.l Rm,@(disp,Rn) */
	r0 = 0xC069B20u; UPD(0x0C07A078u, 1);  /* 0C07A076 mov.l @(disp,pc),Rn */
	r5 = R32(r9); UPD(0x0C07A07Au, 1);  /* 0C07A078 mov.l @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C07A07Cu, 1);  /* 0C07A07A mov.w @Rm,Rn */
	W32(r8 + 0x34u, r5); UPD(0x0C07A07Eu, 1);  /* 0C07A07C mov.l Rm,@(disp,Rn) */
	IF(0x0C07A07Eu); { u32 t_ = r0; PR = 0x0C07A082u; r4 = r1 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07A082u); }  /* 0C07A07E jsr @Rn */
L_0C07A082: BLKS(0x0C07A082u);
	W32(r8 + 0x2Cu, r0); UPD(0x0C07A084u, 1);  /* 0C07A082 mov.l Rm,@(disp,Rn) */
	r5 = R32(r9); UPD(0x0C07A086u, 1);  /* 0C07A084 mov.l @Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C07A088u, 1);  /* 0C07A086 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C07A08Au, 1);  /* 0C07A088 mov.w @Rm,Rn */
	IF(0x0C07A08Au); { u32 t_ = r9; PR = 0x0C07A08Eu; r4 = r7 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07A08Eu); }  /* 0C07A08A jsr @Rn */
L_0C07A08E: BLKS(0x0C07A08Eu);
	W32(r8 + 0x30u, r0); UPD(0x0C07A090u, 1);  /* 0C07A08E mov.l Rm,@(disp,Rn) */
	r6 = 0x0u;  /* 0C07A090 mov #imm,Rn */
	r8 += 0x48u;  /* 0C07A092 add #imm,Rn */
	W8(r8, r6); UPD(0x0C07A096u, 3);  /* 0C07A094 mov.b Rm,@Rn */
	r4 = r11;  /* 0C07A096 mov Rm,Rn */
	r8 += 0x2u;  /* 0C07A098 add #imm,Rn */
	r5 = 0x14u;  /* 0C07A09A mov #imm,Rn */
	r4 += 0x1u;  /* 0C07A09C add #imm,Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07A09E exts.w Rm,Rn */
	r3 = 0x7Fu;  /* 0C07A0A0 mov #imm,Rn */
	T = (s32)r11 > (s32)r3;  /* 0C07A0A2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W8(r8, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07A014u, 10); goto L_0C07A014; } UPD(0x0C07A0A8u, 1); goto L_0C07A0A8; }  /* 0C07A0A4 bf/s */
L_0C07A0A8: BLKS(0x0C07A0A8u);
	r0 = 0x0u;  /* 0C07A0A8 mov #imm,Rn */
	UPD(0x0C07A0AAu, 1);
L_0C07A0AA: BLKS(0x0C07A0AAu);
	r14 += 0x4u;  /* 0C07A0AA add #imm,Rn */
	r15 = r14;  /* 0C07A0AC mov Rm,Rn */
	IF(0x0C07A0AEu); PR = R32(r15); r15 += 4; UPD(0x0C07A0B0u, 3);  /* 0C07A0AE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A0B2u, 1);  /* 0C07A0B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07A0B4u, 1);  /* 0C07A0B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A0B6u, 1);  /* 0C07A0B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A0B8u, 1);  /* 0C07A0B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A0BAu, 1);  /* 0C07A0B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A0BCu, 1);  /* 0C07A0BA mov.l @Rm+,Rn */
	IF(0x0C07A0BCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07A0BC rts */
}

void blk_f_0C0772D0(sh3_t *c)
{
	LOCALS;
L_0C0772D0: BLKS(0x0C0772D0u);
	r2 = 0x2A0u; UPD(0x0C0772D2u, 1);  /* 0C0772D0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0772D2 exts.w Rm,Rn */
	IF(0x0C0772D4u); MACL = r4 * r2;  /* 0C0772D4 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0772D8u, 4);  /* 0C0772D6 mov.l Rm,@-Rn */
	r3 = 0xC29D1D8u; UPD(0x0C0772DAu, 1);  /* 0C0772D8 mov.l @(disp,pc),Rn */
	IF(0x0C0772DAu); r2 = MACL;  /* 0C0772DA sts macl,Rn */
	r0 = 0x288u; UPD(0x0C0772DEu, 2);  /* 0C0772DC mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0772DE add Rm,Rn */
	IF(0x0C0772E0u); r15 -= 4; W32(r15, PR); UPD(0x0C0772E2u, 2);  /* 0C0772E0 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0772E2 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C0772E6u, 2);  /* 0C0772E4 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C0772E6 add #imm,Rn */
	W8(r0, r3); UPD(0x0C0772EAu, 2);  /* 0C0772E8 mov.b Rm,@Rn */
	r0 = r3 & 0xFF;  /* 0C0772EA extu.b Rm,Rn */
	T = r0 == 0x3Cu;  /* 0C0772EC cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077300u, 5); goto L_0C077300; } UPD(0x0C0772F2u, 1); goto L_0C0772F2; }  /* 0C0772EE bt/s */
L_0C0772F2: BLKS(0x0C0772F2u);
	r15 = r14;  /* 0C0772F2 mov Rm,Rn */
	IF(0x0C0772F4u); PR = R32(r15); r15 += 4; UPD(0x0C0772F6u, 2);  /* 0C0772F4 lds.l @Rn+,pr */
	IF(0x0C0772F6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0772F6 rts */
L_0C077300: BLKS(0x0C077300u);
	r7 = 0x25Au; UPD(0x0C077302u, 1);  /* 0C077300 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C077302 mov Rm,Rn */
	IF(0x0C077304u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C077306u, 2);  /* 0C077304 mov.b @(r0,Rm),Rn */
	r5 = 0x6u;  /* 0C077306 mov #imm,Rn */
	r2 = r6 & 0xFF;  /* 0C077308 extu.b Rm,Rn */
	T = r2 > r5;  /* 0C07730A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0772F2u, 6); goto L_0C0772F2; }  /* 0C07730C bt */
L_0C07730E: BLKS(0x0C07730Eu);
	r0 = 0xC077320u;  /* 0C07730E mova @(disp,pc),r0 */
	IF(0x0C077310u); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C077312u, 2);  /* 0C077310 mov.b @(r0,Rm),Rn */
	IF(0x0C077312u); { u32 tv_ = (r3 + 0x0C077316u); u32 t_ = PHYS(tv_); IF(0x0C077314u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C077330u: goto L_0C077330; case 0x0C077350u: goto L_0C077350; case 0x0C077364u: goto L_0C077364; default: JUMPD(tv_); } }  /* 0C077312 braf Rn */
L_0C077330: BLKS(0x0C077330u);
	r0 = 0x2A0u; UPD(0x0C077332u, 1);  /* 0C077330 mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C077332 mov #imm,Rn */
	r5 = 0xC22E044u; UPD(0x0C077336u, 2);  /* 0C077334 mov.l @(disp,pc),Rn */
	IF(0x0C077336u); MACL = r4 * r0;  /* 0C077336 mul.l Rm,Rn */
	W16(r5, r4); UPD(0x0C07733Au, 3);  /* 0C077338 mov.w Rm,@Rn */
	r4 = 0xC29D1D8u; UPD(0x0C07733Cu, 1);  /* 0C07733A mov.l @(disp,pc),Rn */
	IF(0x0C07733Cu); r0 = MACL;  /* 0C07733C sts macl,Rn */
	{ IF(0x0C077340u); W32(r0 + r4, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0772F2u, 4); goto L_0C0772F2; }  /* 0C07733E bra */
L_0C077350: BLKS(0x0C077350u);
	r0 = 0x2A0u; UPD(0x0C077352u, 1);  /* 0C077350 mov.w @(disp,pc),Rn */
	IF(0x0C077352u); MACL = r4 * r0;  /* 0C077352 mul.l Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C077356u, 3);  /* 0C077354 mov.l @(disp,pc),Rn */
	IF(0x0C077356u); r6 = MACL;  /* 0C077356 sts macl,Rn */
	r3 = 0x25Au; UPD(0x0C07735Au, 2);  /* 0C077358 mov.w @(disp,pc),Rn */
	r6 += r2;  /* 0C07735A add Rm,Rn */
	r6 += r3;  /* 0C07735C add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C077360u, 3);  /* 0C07735E mov.b @Rm,Rn */
	r7 += 0xFFFFFFFFu;  /* 0C077360 add #imm,Rn */
	W8(r6, r7); UPD(0x0C077364u, 2);  /* 0C077362 mov.b Rm,@Rn */
L_0C077364: BLKS(0x0C077364u);
	r0 = 0xC06D170u; UPD(0x0C077366u, 1);  /* 0C077364 mov.l @(disp,pc),Rn */
	IF(0x0C077366u); { u32 t_ = r0; PR = 0x0C07736Au; IF(0x0C077368u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D170, 0x0C06D170u, 0x0C07736Au); }  /* 0C077366 jsr @Rn */
L_0C07736A: BLKS(0x0C07736Au);
	{ IF(0x0C07736Cu); ; /* slot nop */ UPD(0x0C0772F2u, 3); goto L_0C0772F2; }  /* 0C07736A bra */
}

void blk_f_0C077380(sh3_t *c)
{
	LOCALS;
L_0C077380: BLKS(0x0C077380u);
	r0 = 0x9C0u; UPD(0x0C077382u, 1);  /* 0C077380 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C077382 exts.w Rm,Rn */
	IF(0x0C077384u); MACL = r1 * r0;  /* 0C077384 mul.l Rm,Rn */
	r2 = (u32)(s32)(s16)r6;  /* 0C077386 exts.w Rm,Rn */
	r3 = 0x34u;  /* 0C077388 mov #imm,Rn */
	IF(0x0C07738Au); r4 = MACL;  /* 0C07738A sts macl,Rn */
	IF(0x0C07738Cu); MACL = r2 * r3;  /* 0C07738C mul.l Rm,Rn */
	r0 = 0x340u; UPD(0x0C077390u, 9);  /* 0C07738E mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C077390 exts.w Rm,Rn */
	IF(0x0C077392u); r6 = MACL;  /* 0C077392 sts macl,Rn */
	IF(0x0C077394u); MACL = r7 * r0;  /* 0C077394 mul.l Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C077398u, 5);  /* 0C077396 mov.l Rm,@-Rn */
	r3 = r4;  /* 0C077398 mov Rm,Rn */
	r8 = 0xC2380D0u; UPD(0x0C07739Cu, 2);  /* 0C07739A mov.l @(disp,pc),Rn */
	r3 += r6;  /* 0C07739C add Rm,Rn */
	IF(0x0C07739Eu); r7 = MACL;  /* 0C07739E sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0773A2u, 3);  /* 0C0773A0 mov.l Rm,@-Rn */
	r3 += r7;  /* 0C0773A2 add Rm,Rn */
	r3 += r8;  /* 0C0773A4 add Rm,Rn */
	r2 = R32(r3 + 0x8u); UPD(0x0C0773A8u, 3);  /* 0C0773A6 mov.l @(disp,Rm),Rn */
	r0 = 0xBu;  /* 0C0773A8 mov #imm,Rn */
	r2 += 0xFFFFFFF6u;  /* 0C0773AA add #imm,Rn */
	T = r2 > r0;  /* 0C0773AC cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0773CEu, 6); goto L_0C0773CE; } goto L_0C0773B2; }  /* 0C0773AE bt/s */
L_0C0773B2: BLKS(0x0C0773B2u);
	r2 = r3;  /* 0C0773B2 mov Rm,Rn */
	r2 += 0x30u;  /* 0C0773B4 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0773B8u, 4);  /* 0C0773B6 mov.b @Rm,Rn */
	r1 = 0x1u;  /* 0C0773B8 mov #imm,Rn */
	r5 += 0x1u;  /* 0C0773BA add #imm,Rn */
	r1 &= r5;  /* 0C0773BC and Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0773BE tst Rm,Rn */
	{ u32 c_ = !T; W8(r2, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0773CEu, 7); goto L_0C0773CE; } UPD(0x0C0773C4u, 1); goto L_0C0773C4; }  /* 0C0773C0 bf/s */
L_0C0773C4: BLKS(0x0C0773C4u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0773C6u, 1);  /* 0C0773C4 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0773C6 add #imm,Rn */
	T = r0 == 0x8u;  /* 0C0773C8 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0773E0u, 5); goto L_0C0773E0; } UPD(0x0C0773CEu, 1); goto L_0C0773CE; }  /* 0C0773CA bt/s */
L_0C0773CE: BLKS(0x0C0773CEu);
	r15 = r14;  /* 0C0773CE mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0773D2u, 2);  /* 0C0773D0 mov.l @Rm+,Rn */
	IF(0x0C0773D2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0773D2 rts */
L_0C0773E0: BLKS(0x0C0773E0u);
	r0 = r4;  /* 0C0773E0 mov Rm,Rn */
	r0 += r7;  /* 0C0773E2 add Rm,Rn */
	r0 += r6;  /* 0C0773E4 add Rm,Rn */
	{ IF(0x0C0773E8u); W32(r0 + r8, r1); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0773CEu, 6); goto L_0C0773CE; }  /* 0C0773E6 bra */
}

void blk_f_0C077400(sh3_t *c)
{
	LOCALS;
L_0C077400: BLKS(0x0C077400u);
	r3 = 0x9C0u; UPD(0x0C077402u, 1);  /* 0C077400 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C077402 exts.w Rm,Rn */
	IF(0x0C077404u); MACL = r4 * r3;  /* 0C077404 mul.l Rm,Rn */
	r2 = 0x34u;  /* 0C077406 mov #imm,Rn */
	r6 = (u32)(s32)(s16)r6;  /* 0C077408 exts.w Rm,Rn */
	IF(0x0C07740Au); r3 = MACL;  /* 0C07740A sts macl,Rn */
	IF(0x0C07740Cu); MACL = r6 * r2;  /* 0C07740C mul.l Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C077410u, 9);  /* 0C07740E mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C077410 exts.w Rm,Rn */
	r7 = 0x340u; UPD(0x0C077414u, 2);  /* 0C077412 mov.w @(disp,pc),Rn */
	IF(0x0C077414u); r8 = MACL;  /* 0C077414 sts macl,Rn */
	IF(0x0C077416u); MACL = r5 * r7;  /* 0C077416 mul.l Rm,Rn */
	r0 = 0xC2380D0u; UPD(0x0C07741Au, 4);  /* 0C077418 mov.l @(disp,pc),Rn */
	r3 += r8;  /* 0C07741A add Rm,Rn */
	IF(0x0C07741Cu); r2 = MACL;  /* 0C07741C sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C077420u, 3);  /* 0C07741E mov.l Rm,@-Rn */
	r3 += r2;  /* 0C077420 add Rm,Rn */
	r0 += r3;  /* 0C077422 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C077426u, 3);  /* 0C077424 mov.l @(disp,Rm),Rn */
	r0 = 0x5u;  /* 0C077426 mov #imm,Rn */
	T = r2 > r0;  /* 0C077428 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07747Au, 5); goto L_0C07747A; } goto L_0C07742E; }  /* 0C07742A bt/s */
L_0C07742E: BLKS(0x0C07742Eu);
	r0 = 0xC077440u;  /* 0C07742E mova @(disp,pc),r0 */
	IF(0x0C077430u); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C077432u, 3);  /* 0C077430 mov.b @(r0,Rm),Rn */
	IF(0x0C077432u); { u32 tv_ = (r7 + 0x0C077436u); u32 t_ = PHYS(tv_); IF(0x0C077434u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C077450u: goto L_0C077450; case 0x0C07747Au: goto L_0C07747A; case 0x0C077490u: goto L_0C077490; default: JUMPD(tv_); } }  /* 0C077432 braf Rn */
L_0C077450: BLKS(0x0C077450u);
	r0 = 0x9C0u; UPD(0x0C077452u, 1);  /* 0C077450 mov.w @(disp,pc),Rn */
	r8 = 0x34u;  /* 0C077452 mov #imm,Rn */
	IF(0x0C077454u); MACL = r4 * r0;  /* 0C077454 mul.l Rm,Rn */
	r7 = 0x340u; UPD(0x0C077458u, 4);  /* 0C077456 mov.w @(disp,pc),Rn */
	IF(0x0C077458u); r0 = MACL;  /* 0C077458 sts macl,Rn */
	IF(0x0C07745Au); MACL = r6 * r8;  /* 0C07745A mul.l Rm,Rn */
	r2 = 0xC2380D0u; UPD(0x0C07745Eu, 4);  /* 0C07745C mov.l @(disp,pc),Rn */
	IF(0x0C07745Eu); r6 = MACL;  /* 0C07745E sts macl,Rn */
	IF(0x0C077460u); MACL = r5 * r7;  /* 0C077460 mul.l Rm,Rn */
	r8 = 0xDu;  /* 0C077462 mov #imm,Rn */
	r0 += r6;  /* 0C077464 add Rm,Rn */
	IF(0x0C077466u); r3 = MACL;  /* 0C077466 sts macl,Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r8);  /* 0C077468 muls.w Rm,Rn */
	r0 += r3;  /* 0C07746A add Rm,Rn */
	r4 = 0x808080u; UPD(0x0C07746Eu, 10);  /* 0C07746C mov.l @(disp,pc),Rn */
	r0 += r2;  /* 0C07746E add Rm,Rn */
	IF(0x0C077470u); r6 = MACL;  /* 0C077470 sts macl,Rn */
	r5 = 0x0u;  /* 0C077472 mov #imm,Rn */
	W32(r0 + 0x8u, r6); UPD(0x0C077476u, 4);  /* 0C077474 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x24u, r5); UPD(0x0C077478u, 1);  /* 0C077476 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x28u, r4); UPD(0x0C07747Au, 1);  /* 0C077478 mov.l Rm,@(disp,Rn) */
L_0C07747A: BLKS(0x0C07747Au);
	r15 = r14;  /* 0C07747A mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07747Eu, 2);  /* 0C07747C mov.l @Rm+,Rn */
	IF(0x0C07747Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07747E rts */
L_0C077490: BLKS(0x0C077490u);
	r0 = 0x9C0u; UPD(0x0C077492u, 1);  /* 0C077490 mov.w @(disp,pc),Rn */
	r3 = 0x34u;  /* 0C077492 mov #imm,Rn */
	IF(0x0C077494u); MACL = r4 * r0;  /* 0C077494 mul.l Rm,Rn */
	r7 = 0x340u; UPD(0x0C077498u, 4);  /* 0C077496 mov.w @(disp,pc),Rn */
	IF(0x0C077498u); r4 = MACL;  /* 0C077498 sts macl,Rn */
	IF(0x0C07749Au); MACL = r6 * r3;  /* 0C07749A mul.l Rm,Rn */
	r8 = 0xC2380D0u; UPD(0x0C07749Eu, 4);  /* 0C07749C mov.l @(disp,pc),Rn */
	IF(0x0C07749Eu); r6 = MACL;  /* 0C07749E sts macl,Rn */
	IF(0x0C0774A0u); MACL = r5 * r7;  /* 0C0774A0 mul.l Rm,Rn */
	r3 = r4;  /* 0C0774A2 mov Rm,Rn */
	r3 += r6;  /* 0C0774A4 add Rm,Rn */
	IF(0x0C0774A6u); r7 = MACL;  /* 0C0774A6 sts macl,Rn */
	r3 += r7;  /* 0C0774A8 add Rm,Rn */
	r3 += r8;  /* 0C0774AA add Rm,Rn */
	r0 = r3;  /* 0C0774AC mov Rm,Rn */
	r0 += 0x30u;  /* 0C0774AE add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C0774B2u, 11);  /* 0C0774B0 mov.b @Rm,Rn */
	r2 = r5;  /* 0C0774B2 mov Rm,Rn */
	r2 += 0x1u;  /* 0C0774B4 add #imm,Rn */
	W8(r0, r2); UPD(0x0C0774B8u, 3);  /* 0C0774B6 mov.b Rm,@Rn */
	r2 = 0x1u;  /* 0C0774B8 mov #imm,Rn */
	r2 &= r5;  /* 0C0774BA and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0774BC tst Rm,Rn */
	if (!T) { UPD(0x0C07747Au, 6); goto L_0C07747A; }  /* 0C0774BE bf */
L_0C0774C0: BLKS(0x0C0774C0u);
	r1 = R32(r3 + 0xCu); UPD(0x0C0774C2u, 1);  /* 0C0774C0 mov.l @(disp,Rm),Rn */
	r0 = r1;  /* 0C0774C2 mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C0774C4 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0774D0u, 5); goto L_0C0774D0; }  /* 0C0774C6 bt */
L_0C0774C8: BLKS(0x0C0774C8u);
	r1 += 0x1u;  /* 0C0774C8 add #imm,Rn */
	{ W32(r3 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07747Au, 4); goto L_0C07747A; }  /* 0C0774CA bra */
L_0C0774D0: BLKS(0x0C0774D0u);
	r0 = r4;  /* 0C0774D0 mov Rm,Rn */
	r0 += r7;  /* 0C0774D2 add Rm,Rn */
	r0 += r6;  /* 0C0774D4 add Rm,Rn */
	{ IF(0x0C0774D8u); W32(r0 + r8, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C0774C8u, 6); goto L_0C0774C8; }  /* 0C0774D6 bra */
}

/* FUN_0c0774f0 */
void blk_f_0C0774F0(sh3_t *c)
{
	LOCALS;
L_0C0774F0: BLKS(0x0C0774F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0774F2u, 1);  /* 0C0774F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0774F4u, 1);  /* 0C0774F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0774F6u, 1);  /* 0C0774F4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0774F8u, 1);  /* 0C0774F6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0774FAu, 1);  /* 0C0774F8 mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C0774FA mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0774FEu, 2);  /* 0C0774FC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C077500u, 1);  /* 0C0774FE mov.l Rm,@-Rn */
	r13 = 0x0u;  /* 0C077500 mov #imm,Rn */
	IF(0x0C077502u); r15 -= 4; W32(r15, PR); UPD(0x0C077504u, 2);  /* 0C077502 sts.l pr,@-Rn */
	r12 = 0xC29D1D8u; UPD(0x0C077506u, 1);  /* 0C077504 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C077506 mov Rm,Rn */
	UPD(0x0C077508u, 1);
L_0C077508: BLKS(0x0C077508u);
	r8 = 0xC2974C8u; UPD(0x0C07750Au, 1);  /* 0C077508 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C07750A mov #imm,Rn */
	r8 += r13;  /* 0C07750C add Rm,Rn */
	IF(0x0C07750Eu); ;  /* 0C07750E nop */
	UPD(0x0C077510u, 3);
L_0C077510: BLKS(0x0C077510u);
	r0 = R32(r8); UPD(0x0C077512u, 1);  /* 0C077510 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C077512 tst Rm,Rn */
	{ u32 c_ = !T; r4 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077550u, 4); goto L_0C077550; } UPD(0x0C077518u, 1); goto L_0C077518; }  /* 0C077514 bf/s */
L_0C077518: BLKS(0x0C077518u);
	r4 = r10;  /* 0C077518 mov Rm,Rn */
	r4 += 0x1u;  /* 0C07751A add #imm,Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07751C exts.w Rm,Rn */
	r2 = 0x2u;  /* 0C07751E mov #imm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C077520 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x30u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C077510u, 8); goto L_0C077510; } goto L_0C077526; }  /* 0C077522 bf/s */
L_0C077526: BLKS(0x0C077526u);
	r10 = r11;  /* 0C077526 mov Rm,Rn */
	r11 = 0x2A0u; UPD(0x0C07752Au, 3);  /* 0C077528 mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C07752A add #imm,Rn */
	r5 = 0x90u; UPD(0x0C07752Eu, 2);  /* 0C07752C mov.w @(disp,pc),Rn */
	r12 += r11;  /* 0C07752E add Rm,Rn */
	r11 = (u32)(s32)(s16)r10;  /* 0C077530 exts.w Rm,Rn */
	r8 = 0x1u;  /* 0C077532 mov #imm,Rn */
	T = (s32)r11 > (s32)r8;  /* 0C077534 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r13 += r5; /* slot add Rm,Rn */ if (c_) { UPD(0x0C077508u, 7); goto L_0C077508; } goto L_0C07753A; }  /* 0C077536 bf/s */
L_0C07753A: BLKS(0x0C07753Au);
	r15 = r14;  /* 0C07753A mov Rm,Rn */
	IF(0x0C07753Cu); PR = R32(r15); r15 += 4; UPD(0x0C07753Eu, 3);  /* 0C07753C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C077540u, 1);  /* 0C07753E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C077542u, 1);  /* 0C077540 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C077544u, 1);  /* 0C077542 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C077546u, 1);  /* 0C077544 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C077548u, 1);  /* 0C077546 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07754Au, 1);  /* 0C077548 mov.l @Rm+,Rn */
	IF(0x0C07754Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07754A rts */
L_0C077550: BLKS(0x0C077550u);
	r6 = 0xC077820u; UPD(0x0C077552u, 1);  /* 0C077550 mov.l @(disp,pc),Rn */
	IF(0x0C077552u); { u32 t_ = r6; PR = 0x0C077556u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C077820, 0x0C077820u, 0x0C077556u); }  /* 0C077552 jsr @Rn */
L_0C077556: BLKS(0x0C077556u);
	r5 = R32(r12); UPD(0x0C077558u, 1);  /* 0C077556 mov.l @Rm,Rn */
	r4 = 0xFFFFFFFFu;  /* 0C077558 mov #imm,Rn */
	T = (r5 & r5) == 0;  /* 0C07755A tst Rm,Rn */
	r3 = R32(r12 + 0x8u); UPD(0x0C07755Eu, 3);  /* 0C07755C mov.l @(disp,Rm),Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C07755E negc Rm,Rn */
	r2 = 0xFu;  /* 0C077560 mov #imm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C077562 cmp/ge Rm,Rn */
	IF(0x0C077564u); r0 = T;  /* 0C077564 movt Rn */
	r9 &= r0;  /* 0C077566 and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C077568 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x14u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C077590u, 9); goto L_0C077590; } goto L_0C07756E; }  /* 0C07756A bt/s */
L_0C07756E: BLKS(0x0C07756Eu);
	r0 = R32(r8 + 0x4u); UPD(0x0C077570u, 2);  /* 0C07756E mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C077570 mov Rm,Rn */
	r3 = 0xC18270Cu; UPD(0x0C077574u, 2);  /* 0C077572 mov.l @(disp,pc),Rn */
	IF(0x0C077574u); r0 <<= 2;  /* 0C077574 shll2 Rn */
	IF(0x0C077576u); r9 = R32(r0 + r3); UPD(0x0C077578u, 2);  /* 0C077576 mov.l @(r0,Rm),Rn */
	IF(0x0C077578u); { u32 t_ = r9; PR = 0x0C07757Cu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C07757Cu); }  /* 0C077578 jsr @Rn */
L_0C07757C: BLKS(0x0C07757Cu);
	r7 = r8;  /* 0C07757C mov Rm,Rn */
	r7 += 0x2Fu;  /* 0C07757E add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C077582u, 3);  /* 0C077580 mov.b @Rm,Rn */
	r0 += 0x7u;  /* 0C077582 add #imm,Rn */
	r0 &= 0x1Fu;  /* 0C077584 and #imm,r0 */
	{ W8(r7, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C077518u, 5); goto L_0C077518; }  /* 0C077586 bra */
L_0C077590: BLKS(0x0C077590u);
	r15 += 0xFFFFFFF8u;  /* 0C077590 add #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C077594u, 2);  /* 0C077592 mov.l Rm,@(disp,Rn) */
	r6 = r11;  /* 0C077594 mov Rm,Rn */
	W32(r15, r9); UPD(0x0C077598u, 2);  /* 0C077596 mov.l Rm,@Rn */
	IF(0x0C077598u); r6 <<= 2;  /* 0C077598 shll2 Rn */
	r0 = 0xC182748u; UPD(0x0C07759Cu, 2);  /* 0C07759A mov.l @(disp,pc),Rn */
	IF(0x0C07759Cu); r5 = R32(r0 + r6); UPD(0x0C07759Eu, 1);  /* 0C07759C mov.l @(r0,Rm),Rn */
	r0 = 0xC0C0030u; UPD(0x0C0775A0u, 1);  /* 0C07759E mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0775A2u, 1);  /* 0C0775A0 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x14u); UPD(0x0C0775A4u, 1);  /* 0C0775A2 mov.l @(disp,Rm),Rn */
	IF(0x0C0775A4u); { u32 t_ = r0; PR = 0x0C0775A8u; r7 = R32(r8 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0030, 0x0C0C0030u, 0x0C0775A8u); }  /* 0C0775A4 jsr @Rn */
L_0C0775A8: BLKS(0x0C0775A8u);
	W32(r8, r9); UPD(0x0C0775AAu, 1);  /* 0C0775A8 mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C077518u, 3); goto L_0C077518; }  /* 0C0775AA bra */
}

/* FUN_0c0775d0 */
void blk_f_0C0775D0(sh3_t *c)
{
	LOCALS;
L_0C0775D0: BLKS(0x0C0775D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0775D2u, 1);  /* 0C0775D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0775D4u, 1);  /* 0C0775D2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0775D6u, 1);  /* 0C0775D4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0775D8u, 1);  /* 0C0775D6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0775DAu, 1);  /* 0C0775D8 mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C0775DA mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0775DEu, 2);  /* 0C0775DC mov.l Rm,@-Rn */
	r12 = 0x0u;  /* 0C0775DE mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0775E2u, 2);  /* 0C0775E0 mov.l Rm,@-Rn */
	r13 = 0xC073B10u; UPD(0x0C0775E4u, 1);  /* 0C0775E2 mov.l @(disp,pc),Rn */
	IF(0x0C0775E4u); r15 -= 4; W32(r15, PR); UPD(0x0C0775E6u, 1);  /* 0C0775E4 sts.l pr,@-Rn */
	r14 = r15;  /* 0C0775E6 mov Rm,Rn */
	UPD(0x0C0775E8u, 1);
L_0C0775E8: BLKS(0x0C0775E8u);
	r9 = 0xC2974C8u; UPD(0x0C0775EAu, 1);  /* 0C0775E8 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0775EA mov #imm,Rn */
	r9 += r12;  /* 0C0775EC add Rm,Rn */
	IF(0x0C0775EEu); ;  /* 0C0775EE nop */
	UPD(0x0C0775F0u, 3);
L_0C0775F0: BLKS(0x0C0775F0u);
	r1 = R32(r9); UPD(0x0C0775F2u, 1);  /* 0C0775F0 mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C0775F4u, 1);  /* 0C0775F2 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C0775F4 tst Rm,Rn */
	{ u32 c_ = !T; r7 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C077630u, 4); goto L_0C077630; } UPD(0x0C0775FAu, 1); goto L_0C0775FA; }  /* 0C0775F6 bf/s */
L_0C0775FA: BLKS(0x0C0775FAu);
	r2 = r10;  /* 0C0775FA mov Rm,Rn */
	r2 += 0x1u;  /* 0C0775FC add #imm,Rn */
	r10 = (u32)(s32)(s16)r2;  /* 0C0775FE exts.w Rm,Rn */
	r8 = 0x2u;  /* 0C077600 mov #imm,Rn */
	T = (s32)r10 > (s32)r8;  /* 0C077602 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x30u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0775F0u, 8); goto L_0C0775F0; } goto L_0C077608; }  /* 0C077604 bf/s */
L_0C077608: BLKS(0x0C077608u);
	r10 = r11;  /* 0C077608 mov Rm,Rn */
	r11 = 0x90u; UPD(0x0C07760Cu, 3);  /* 0C07760A mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C07760C add #imm,Rn */
	r12 += r11;  /* 0C07760E add Rm,Rn */
	r11 = (u32)(s32)(s16)r10;  /* 0C077610 exts.w Rm,Rn */
	r9 = 0x1u;  /* 0C077612 mov #imm,Rn */
	T = (s32)r11 > (s32)r9;  /* 0C077614 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0775E8u, 8); goto L_0C0775E8; }  /* 0C077616 bf */
L_0C077618: BLKS(0x0C077618u);
	r15 = r14;  /* 0C077618 mov Rm,Rn */
	IF(0x0C07761Au); PR = R32(r15); r15 += 4; UPD(0x0C07761Cu, 2);  /* 0C07761A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07761Eu, 1);  /* 0C07761C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C077620u, 1);  /* 0C07761E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C077622u, 1);  /* 0C077620 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C077624u, 1);  /* 0C077622 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C077626u, 1);  /* 0C077624 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C077628u, 1);  /* 0C077626 mov.l @Rm+,Rn */
	IF(0x0C077628u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C077628 rts */
L_0C077630: BLKS(0x0C077630u);
	r8 = R32(r9 + 0x4u); UPD(0x0C077632u, 1);  /* 0C077630 mov.l @(disp,Rm),Rn */
	r3 = r8;  /* 0C077632 mov Rm,Rn */
	IF(0x0C077634u); ARG0(0x437Du); { s32 s_ = (s32)r7; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C077634 shld Rm,Rn */
	r1 = 0xC182688u; UPD(0x0C077638u, 3);  /* 0C077636 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C077638 mov #imm,Rn */
	r3 += r1;  /* 0C07763A add Rm,Rn */
	r5 = R32(r3 + 0x4u); UPD(0x0C07763Eu, 3);  /* 0C07763C mov.l @(disp,Rm),Rn */
	r7 = 0x3u;  /* 0C07763E mov #imm,Rn */
	r0 = 0xC3C86B0u; UPD(0x0C077642u, 2);  /* 0C077640 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C077642 add #imm,Rn */
	W32(r0, r5); UPD(0x0C077646u, 2);  /* 0C077644 mov.l Rm,@Rn */
	r1 = 0x0u;  /* 0C077646 mov #imm,Rn */
	r5 = R32(r9 + 0x8u); UPD(0x0C07764Au, 2);  /* 0C077648 mov.l @(disp,Rm),Rn */
	r0 = r5;  /* 0C07764A mov Rm,Rn */
	r4 = R32(r3); UPD(0x0C07764Eu, 2);  /* 0C07764C mov.l @Rm,Rn */
	IF(0x0C07764Eu); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07764E shld Rm,Rn */
	IF(0x0C077650u); r3 = R32(r0 + r4); UPD(0x0C077652u, 2);  /* 0C077650 mov.l @(r0,Rm),Rn */
	r4 = R32(r9 + 0xCu); UPD(0x0C077654u, 1);  /* 0C077652 mov.l @(disp,Rm),Rn */
	r0 = r4;  /* 0C077654 mov Rm,Rn */
	IF(0x0C077656u); ARG0(0x407Du); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C077656 shld Rm,Rn */
	IF(0x0C077658u); r2 = R32(r0 + r3); UPD(0x0C07765Au, 3);  /* 0C077658 mov.l @(r0,Rm),Rn */
	r7 = 0xC2289E8u; UPD(0x0C07765Cu, 1);  /* 0C07765A mov.l @(disp,pc),Rn */
	r3 = 0xC2B0374u; UPD(0x0C07765Eu, 1);  /* 0C07765C mov.l @(disp,pc),Rn */
	W32(r7, r2); UPD(0x0C077660u, 1);  /* 0C07765E mov.l Rm,@Rn */
	W32(r3, r8); UPD(0x0C077662u, 1);  /* 0C077660 mov.l Rm,@Rn */
	r2 = 0xC229000u; UPD(0x0C077664u, 1);  /* 0C077662 mov.l @(disp,pc),Rn */
	r8 = 0x2A0u; UPD(0x0C077666u, 1);  /* 0C077664 mov.w @(disp,pc),Rn */
	r0 = 0xC29D730u; UPD(0x0C077668u, 1);  /* 0C077666 mov.l @(disp,pc),Rn */
	IF(0x0C077668u); MACL = r11 * r8;  /* 0C077668 mul.l Rm,Rn */
	W32(r2, r5); UPD(0x0C07766Cu, 3);  /* 0C07766A mov.l Rm,@Rn */
	r6 = 0xC234BFCu; UPD(0x0C07766Eu, 1);  /* 0C07766C mov.l @(disp,pc),Rn */
	IF(0x0C07766Eu); r8 = MACL;  /* 0C07766E sts macl,Rn */
	r7 = 0xC297491u; UPD(0x0C077672u, 2);  /* 0C077670 mov.l @(disp,pc),Rn */
	W32(r0, r4); UPD(0x0C077674u, 1);  /* 0C077672 mov.l Rm,@Rn */
	W8(r6, r11); UPD(0x0C077676u, 1);  /* 0C077674 mov.b Rm,@Rn */
	W8(r7, r10); UPD(0x0C077678u, 1);  /* 0C077676 mov.b Rm,@Rn */
	r5 = 0xC29D1D8u; UPD(0x0C07767Au, 1);  /* 0C077678 mov.l @(disp,pc),Rn */
	r4 = 0x29Cu; UPD(0x0C07767Cu, 1);  /* 0C07767A mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C07767C add Rm,Rn */
	W32(r15, r1); UPD(0x0C077680u, 2);  /* 0C07767E mov.l Rm,@Rn */
	r8 += r4;  /* 0C077680 add Rm,Rn */
	r5 = R32(r9 + 0x14u); UPD(0x0C077684u, 2);  /* 0C077682 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C077684 mov #imm,Rn */
	r6 = R32(r9 + 0x18u); UPD(0x0C077688u, 2);  /* 0C077686 mov.l @(disp,Rm),Rn */
	IF(0x0C077688u); { u32 t_ = r13; PR = 0x0C07768Cu; r7 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C07768Cu); }  /* 0C077688 jsr @Rn */
L_0C07768C: BLKS(0x0C07768Cu);
	r2 = 0xC1826C8u; UPD(0x0C07768Eu, 1);  /* 0C07768C mov.l @(disp,pc),Rn */
	r9 += 0x2Fu;  /* 0C07768E add #imm,Rn */
	r0 = R32(r2 + 0x34u); UPD(0x0C077692u, 2);  /* 0C077690 mov.l @(disp,Rm),Rn */
	r6 = 0xC3C86B0u; UPD(0x0C077694u, 1);  /* 0C077692 mov.l @(disp,pc),Rn */
	W32(r6, r0); UPD(0x0C077696u, 1);  /* 0C077694 mov.l Rm,@Rn */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C077698u, 1);  /* 0C077696 mov.b @Rm,Rn */
	r7 = R32(r2 + 0x30u); UPD(0x0C07769Au, 1);  /* 0C077698 mov.l @(disp,Rm),Rn */
	r0 = r5 & 0xFF;  /* 0C07769A extu.b Rm,Rn */
	r4 = R32(r7); UPD(0x0C07769Eu, 2);  /* 0C07769C mov.l @Rm,Rn */
	IF(0x0C07769Eu); r0 <<= 2;  /* 0C07769E shll2 Rn */
	r0 += r0;  /* 0C0776A0 add Rm,Rn */
	IF(0x0C0776A2u); r3 = R32(r0 + r4); UPD(0x0C0776A4u, 3);  /* 0C0776A2 mov.l @(r0,Rm),Rn */
	r9 += 0xFFFFFFD1u;  /* 0C0776A4 add #imm,Rn */
	r2 = 0xC2289E8u; UPD(0x0C0776A8u, 2);  /* 0C0776A6 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C0776A8 mov #imm,Rn */
	W32(r2, r3); UPD(0x0C0776ACu, 2);  /* 0C0776AA mov.l Rm,@Rn */
	r4 = 0x0u;  /* 0C0776AC mov #imm,Rn */
	W32(r15, r0); UPD(0x0C0776B0u, 2);  /* 0C0776AE mov.l Rm,@Rn */
	r5 = R32(r9 + 0x14u); UPD(0x0C0776B2u, 1);  /* 0C0776B0 mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x18u); UPD(0x0C0776B4u, 1);  /* 0C0776B2 mov.l @(disp,Rm),Rn */
	IF(0x0C0776B4u); { u32 t_ = r13; PR = 0x0C0776B8u; r7 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C0776B8u); }  /* 0C0776B4 jsr @Rn */
L_0C0776B8: BLKS(0x0C0776B8u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0775FAu, 3); goto L_0C0775FA; }  /* 0C0776B8 bra */
}

/* FUN_0c077700 */
void blk_f_0C077700(sh3_t *c)
{
	LOCALS;
L_0C077700: BLKS(0x0C077700u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C077702u, 1);  /* 0C077700 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C077704u, 1);  /* 0C077702 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C077706u, 1);  /* 0C077704 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C077708u, 1);  /* 0C077706 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07770Au, 1);  /* 0C077708 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r4;  /* 0C07770A exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07770Eu, 2);  /* 0C07770C mov.l Rm,@-Rn */
	T = (r11 & r11) == 0;  /* 0C07770E tst Rm,Rn */
	IF(0x0C077710u); r15 -= 4; W32(r15, PR); UPD(0x0C077712u, 2);  /* 0C077710 sts.l pr,@-Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077752u, 3); goto L_0C077752; } goto L_0C077716; }  /* 0C077712 bt/s */
L_0C077716: BLKS(0x0C077716u);
	r12 = 0x0u;  /* 0C077716 mov #imm,Rn */
	r10 = 0x0u;  /* 0C077718 mov #imm,Rn */
	IF(0x0C07771Au); ;  /* 0C07771A nop */
	UPD(0x0C07771Cu, 4);
L_0C07771C: BLKS(0x0C07771Cu);
	r9 = 0x0u;  /* 0C07771C mov #imm,Rn */
	r8 = 0x0u;  /* 0C07771E mov #imm,Rn */
	UPD(0x0C077720u, 2);
L_0C077720: BLKS(0x0C077720u);
	r0 = 0xC2974C8u; UPD(0x0C077722u, 1);  /* 0C077720 mov.l @(disp,pc),Rn */
	r3 = r10;  /* 0C077722 mov Rm,Rn */
	r3 += r8;  /* 0C077724 add Rm,Rn */
	r3 += r0;  /* 0C077726 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C07772Au, 4);  /* 0C077728 mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C07772Cu, 1);  /* 0C07772A mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C07772C tst Rm,Rn */
	{ u32 c_ = T; r3 += 0x2Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07773Cu, 4); goto L_0C07773C; } goto L_0C077732; }  /* 0C07772E bt/s */
L_0C077732: BLKS(0x0C077732u);
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C077734u, 2);  /* 0C077732 mov.b @Rm,Rn */
	r2 = r4 & 0xFF;  /* 0C077734 extu.b Rm,Rn */
	T = r2 == r11;  /* 0C077736 cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFD4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C077770u, 5); goto L_0C077770; } UPD(0x0C07773Cu, 1); goto L_0C07773C; }  /* 0C077738 bt/s */
L_0C07773C: BLKS(0x0C07773Cu);
	r9 += 0x1u;  /* 0C07773C add #imm,Rn */
	UPD(0x0C07773Eu, 1);
L_0C07773E: BLKS(0x0C07773Eu);
	r3 = 0x2u;  /* 0C07773E mov #imm,Rn */
	T = (s32)r9 > (s32)r3;  /* 0C077740 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x30u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C077720u, 5); goto L_0C077720; } goto L_0C077746; }  /* 0C077742 bf/s */
L_0C077746: BLKS(0x0C077746u);
	r9 = 0x90u; UPD(0x0C077748u, 2);  /* 0C077746 mov.w @(disp,pc),Rn */
	r12 += 0x1u;  /* 0C077748 add #imm,Rn */
	r8 = 0x1u;  /* 0C07774A mov #imm,Rn */
	T = (s32)r12 > (s32)r8;  /* 0C07774C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += r9; /* slot add Rm,Rn */ if (c_) { UPD(0x0C07771Cu, 6); goto L_0C07771C; } UPD(0x0C077752u, 1); goto L_0C077752; }  /* 0C07774E bf/s */
L_0C077752: BLKS(0x0C077752u);
	r15 = r14;  /* 0C077752 mov Rm,Rn */
	IF(0x0C077754u); PR = R32(r15); r15 += 4; UPD(0x0C077756u, 2);  /* 0C077754 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C077758u, 1);  /* 0C077756 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07775Au, 1);  /* 0C077758 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07775Cu, 1);  /* 0C07775A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07775Eu, 1);  /* 0C07775C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C077760u, 1);  /* 0C07775E mov.l @Rm+,Rn */
	IF(0x0C077760u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C077760 rts */
L_0C077770: BLKS(0x0C077770u);
	r3 += 0x2Du;  /* 0C077770 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C077774u, 2);  /* 0C077772 mov.b @Rm,Rn */
	r5 = 0x2u;  /* 0C077774 mov #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C077776 extu.b Rm,Rn */
	r6 -= r2;  /* 0C077778 sub Rm,Rn */
	r6 += 0x1u;  /* 0C07777A add #imm,Rn */
	T = r6 > r5;  /* 0C07777C cmp/hi Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFD3u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0777F0u, 8); goto L_0C0777F0; } goto L_0C077782; }  /* 0C07777E bt/s */
L_0C077782: BLKS(0x0C077782u);
	r2 = r3;  /* 0C077782 mov Rm,Rn */
	r2 += 0x2Eu;  /* 0C077784 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C077788u, 4);  /* 0C077786 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C077788 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C077790u, 4); goto L_0C077790; } goto L_0C07778E; }  /* 0C07778A bt/s */
L_0C07778E: BLKS(0x0C07778Eu);
	W8(r2, r1); UPD(0x0C077790u, 2);  /* 0C07778E mov.b Rm,@Rn */
L_0C077790: BLKS(0x0C077790u);
	r4 = 0xC2974C8u; UPD(0x0C077792u, 1);  /* 0C077790 mov.l @(disp,pc),Rn */
	r3 = r10;  /* 0C077792 mov Rm,Rn */
	r3 += r8;  /* 0C077794 add Rm,Rn */
	r3 += r4;  /* 0C077796 add Rm,Rn */
	r2 = r3;  /* 0C077798 mov Rm,Rn */
	r2 += 0x2Cu;  /* 0C07779A add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C07779Eu, 6);  /* 0C07779C mov.b @Rm,Rn */
	r3 += 0x2Du;  /* 0C07779E add #imm,Rn */
	W8(r3, r4); UPD(0x0C0777A2u, 2);  /* 0C0777A0 mov.b Rm,@Rn */
	r6 = 0x3u;  /* 0C0777A2 mov #imm,Rn */
	r3 += 0xFFFFFFD3u;  /* 0C0777A4 add #imm,Rn */
	r7 = R32(r3 + 0x4u); UPD(0x0C0777A8u, 3);  /* 0C0777A6 mov.l @(disp,Rm),Rn */
	r1 = 0xC182688u; UPD(0x0C0777AAu, 1);  /* 0C0777A8 mov.l @(disp,pc),Rn */
	IF(0x0C0777AAu); ARG0(0x476Du); { s32 s_ = (s32)r6; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C0777AA shld Rm,Rn */
	r7 += r1;  /* 0C0777AC add Rm,Rn */
	r5 = R32(r7 + 0x4u); UPD(0x0C0777B0u, 3);  /* 0C0777AE mov.l @(disp,Rm),Rn */
	r0 = 0xC3C86B0u; UPD(0x0C0777B2u, 1);  /* 0C0777B0 mov.l @(disp,pc),Rn */
	W32(r0, r5); UPD(0x0C0777B4u, 1);  /* 0C0777B2 mov.l Rm,@Rn */
	r6 = R32(r7); UPD(0x0C0777B6u, 1);  /* 0C0777B4 mov.l @Rm,Rn */
	r5 = 0x3u;  /* 0C0777B6 mov #imm,Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C0777BAu, 2);  /* 0C0777B8 mov.l @(disp,Rm),Rn */
	r7 = 0x4u;  /* 0C0777BA mov #imm,Rn */
	IF(0x0C0777BCu); ARG0(0x407Du); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0777BC shld Rm,Rn */
	IF(0x0C0777BEu); r1 = R32(r0 + r6); UPD(0x0C0777C0u, 3);  /* 0C0777BE mov.l @(r0,Rm),Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C0777C2u, 1);  /* 0C0777C0 mov.l @(disp,Rm),Rn */
	IF(0x0C0777C2u); ARG0(0x405Du); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0777C2 shld Rm,Rn */
	r5 = 0xC2289E8u; UPD(0x0C0777C6u, 2);  /* 0C0777C4 mov.l @(disp,pc),Rn */
	r3 += 0x2Eu;  /* 0C0777C6 add #imm,Rn */
	IF(0x0C0777C8u); r6 = R32(r0 + r1); UPD(0x0C0777CAu, 2);  /* 0C0777C8 mov.l @(r0,Rm),Rn */
	W32(r5, r6); UPD(0x0C0777CCu, 1);  /* 0C0777CA mov.l Rm,@Rn */
	r0 = r4 & 0xFF;  /* 0C0777CC extu.b Rm,Rn */
	r6 = 0u - r0;  /* 0C0777CE neg Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0777D2u, 3);  /* 0C0777D0 mov.b @Rm,Rn */
	r6 += 0x14u;  /* 0C0777D2 add #imm,Rn */
	r0 = 0xC074C30u; UPD(0x0C0777D6u, 2);  /* 0C0777D4 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFD2u;  /* 0C0777D6 add #imm,Rn */
	r7 = r1 & 0xFF;  /* 0C0777D8 extu.b Rm,Rn */
	r4 = R32(r3 + 0x14u); UPD(0x0C0777DCu, 3);  /* 0C0777DA mov.l @(disp,Rm),Rn */
	IF(0x0C0777DCu); { u32 t_ = r0; PR = 0x0C0777E0u; r5 = R32(r3 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C074C30, 0x0C074C30u, 0x0C0777E0u); }  /* 0C0777DC jsr @Rn */
L_0C0777E0: BLKS(0x0C0777E0u);
	{ r9 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C07773Eu, 3); goto L_0C07773E; }  /* 0C0777E0 bra */
L_0C0777F0: BLKS(0x0C0777F0u);
	r3 += 0x2Eu;  /* 0C0777F0 add #imm,Rn */
	r2 = 0x40u;  /* 0C0777F2 mov #imm,Rn */
	{ W8(r3, r2); /* slot mov.b Rm,@Rn */ UPD(0x0C077790u, 5); goto L_0C077790; }  /* 0C0777F4 bra */
}

/* FUN_0c077820 */
void blk_f_0C077820(sh3_t *c)
{
	LOCALS;
L_0C077820: BLKS(0x0C077820u);
	r6 = (u32)(s32)(s16)r5;  /* 0C077820 exts.w Rm,Rn */
	r5 = 0x90u; UPD(0x0C077824u, 2);  /* 0C077822 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C077824 exts.w Rm,Rn */
	IF(0x0C077826u); MACL = r4 * r5;  /* 0C077826 mul.l Rm,Rn */
	r3 = 0x30u;  /* 0C077828 mov #imm,Rn */
	r2 = 0x2A0u; UPD(0x0C07782Cu, 5);  /* 0C07782A mov.w @(disp,pc),Rn */
	IF(0x0C07782Cu); r5 = MACL;  /* 0C07782C sts macl,Rn */
	IF(0x0C07782Eu); MACL = r6 * r3;  /* 0C07782E mul.l Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C077832u, 4);  /* 0C077830 mov.l Rm,@-Rn */
	IF(0x0C077832u); r3 = MACL;  /* 0C077832 sts macl,Rn */
	IF(0x0C077834u); MACL = r4 * r2;  /* 0C077834 mul.l Rm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C077838u, 4);  /* 0C077836 mov.l @(disp,pc),Rn */
	r3 += r5;  /* 0C077838 add Rm,Rn */
	IF(0x0C07783Au); r7 = MACL;  /* 0C07783A sts macl,Rn */
	r7 += r0;  /* 0C07783C add Rm,Rn */
	r8 = 0xC2974C8u; UPD(0x0C077840u, 4);  /* 0C07783E mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C077842u, 1);  /* 0C077840 mov.l Rm,@-Rn */
	r3 += r8;  /* 0C077842 add Rm,Rn */
	r0 = 0x238u; UPD(0x0C077846u, 2);  /* 0C077844 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C077846 mov Rm,Rn */
	IF(0x0C077848u); r1 = R32(r0 + r7); UPD(0x0C07784Au, 2);  /* 0C077848 mov.l @(r0,Rm),Rn */
	r2 = R32(r3 + 0x1Cu); UPD(0x0C07784Cu, 1);  /* 0C07784A mov.l @(disp,Rm),Rn */
	r0 += 0x10u;  /* 0C07784C add #imm,Rn */
	r2 += r1;  /* 0C07784E add Rm,Rn */
	W32(r3 + 0x14u, r2); UPD(0x0C077852u, 3);  /* 0C077850 mov.l Rm,@(disp,Rn) */
	r2 = R32(r3 + 0x20u); UPD(0x0C077854u, 1);  /* 0C077852 mov.l @(disp,Rm),Rn */
	IF(0x0C077854u); r1 = R32(r0 + r7); UPD(0x0C077856u, 1);  /* 0C077854 mov.l @(r0,Rm),Rn */
	r2 += r1;  /* 0C077856 add Rm,Rn */
	r1 = R32(r3 + 0x4u); UPD(0x0C07785Au, 2);  /* 0C077858 mov.l @(disp,Rm),Rn */
	r0 = R32(r3 + 0x10u); UPD(0x0C07785Cu, 1);  /* 0C07785A mov.l @(disp,Rm),Rn */
	T = r1 == r0;  /* 0C07785C cmp/eq Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x18u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C077900u, 4); goto L_0C077900; } UPD(0x0C077862u, 1); goto L_0C077862; }  /* 0C07785E bt/s */
L_0C077862: BLKS(0x0C077862u);
	r0 = r6;  /* 0C077862 mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C077864 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0778E0u, 5); goto L_0C0778E0; } goto L_0C07786A; }  /* 0C077866 bt/s */
L_0C07786A: BLKS(0x0C07786Au);
	T = (s32)r6 > (s32)r2;  /* 0C07786A cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0778C0u, 5); goto L_0C0778C0; } goto L_0C077870; }  /* 0C07786C bt/s */
L_0C077870: BLKS(0x0C077870u);
	T = (r6 & r6) == 0;  /* 0C077870 tst Rm,Rn */
	{ u32 c_ = T; r3 = r5; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0778B0u, 5); goto L_0C0778B0; } UPD(0x0C077876u, 1); goto L_0C077876; }  /* 0C077872 bt/s */
L_0C077876: BLKS(0x0C077876u);
	r0 = 0x90u; UPD(0x0C077878u, 1);  /* 0C077876 mov.w @(disp,pc),Rn */
	r8 = 0x30u;  /* 0C077878 mov #imm,Rn */
	IF(0x0C07787Au); MACL = r4 * r0;  /* 0C07787A mul.l Rm,Rn */
	r3 = 0xC2974C8u; UPD(0x0C07787Eu, 4);  /* 0C07787C mov.l @(disp,pc),Rn */
	IF(0x0C07787Eu); r2 = MACL;  /* 0C07787E sts macl,Rn */
	IF(0x0C077880u); MACL = r6 * r8;  /* 0C077880 mul.l Rm,Rn */
	IF(0x0C077882u); r6 = MACL;  /* 0C077882 sts macl,Rn */
	r2 += r6;  /* 0C077884 add Rm,Rn */
	r2 += r3;  /* 0C077886 add Rm,Rn */
	r3 = R32(r2 + 0x1Cu); UPD(0x0C07788Au, 7);  /* 0C077888 mov.l @(disp,Rm),Rn */
	r4 = R32(r2 + 0x20u); UPD(0x0C07788Cu, 1);  /* 0C07788A mov.l @(disp,Rm),Rn */
	r3 |= r4;  /* 0C07788C or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C07788E tst Rm,Rn */
	if (!T) { UPD(0x0C0778A0u, 5); goto L_0C0778A0; }  /* 0C077890 bf */
L_0C077892: BLKS(0x0C077892u);
	r7 = R32(r2 + 0x10u); UPD(0x0C077894u, 1);  /* 0C077892 mov.l @(disp,Rm),Rn */
	W32(r2 + 0xCu, r3); UPD(0x0C077896u, 1);  /* 0C077894 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x4u, r7); UPD(0x0C077898u, 1);  /* 0C077896 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x8u, r3); UPD(0x0C07789Au, 1);  /* 0C077898 mov.l Rm,@(disp,Rn) */
	r2 += 0x2Bu;  /* 0C07789A add #imm,Rn */
	W8(r2, r3); UPD(0x0C07789Eu, 2);  /* 0C07789C mov.b Rm,@Rn */
	{ u32 v_ = r3; r2 -= 1; W8(r2, v_); } UPD(0x0C0778A0u, 1);  /* 0C07789E mov.b Rm,@-Rn */
L_0C0778A0: BLKS(0x0C0778A0u);
	r15 = r14;  /* 0C0778A0 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0778A4u, 2);  /* 0C0778A2 mov.l @Rm+,Rn */
	IF(0x0C0778A4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0778A4 rts */
L_0C0778B0: BLKS(0x0C0778B0u);
	r3 += r8;  /* 0C0778B0 add Rm,Rn */
	r2 = R32(r3 + 0x20u); UPD(0x0C0778B4u, 2);  /* 0C0778B2 mov.l @(disp,Rm),Rn */
	r1 = 0x10000u; UPD(0x0C0778B6u, 1);  /* 0C0778B4 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C0778B6 tst Rm,Rn */
	{ u32 c_ = T; r2 += r1; /* slot add Rm,Rn */ if (c_) { UPD(0x0C077876u, 4); goto L_0C077876; } UPD(0x0C0778BCu, 1); goto L_0C0778BC; }  /* 0C0778B8 bt/s */
L_0C0778BC: BLKS(0x0C0778BCu);
	{ W32(r3 + 0x20u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C077876u, 3); goto L_0C077876; }  /* 0C0778BC bra */
L_0C0778C0: BLKS(0x0C0778C0u);
	{ u32 c_ = !T; r3 = r5; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077876u, 3); goto L_0C077876; } goto L_0C0778C4; }  /* 0C0778C0 bf/s */
L_0C0778C4: BLKS(0x0C0778C4u);
	r3 += 0x60u;  /* 0C0778C4 add #imm,Rn */
	r3 += r8;  /* 0C0778C6 add Rm,Rn */
	r2 = R32(r3 + 0x1Cu); UPD(0x0C0778CAu, 4);  /* 0C0778C8 mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0778CA tst Rm,Rn */
	if (T) { UPD(0x0C077876u, 4); goto L_0C077876; }  /* 0C0778CC bt */
L_0C0778CE: BLKS(0x0C0778CEu);
	r5 = 0x10000u; UPD(0x0C0778D0u, 1);  /* 0C0778CE mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0778D0 add Rm,Rn */
	{ W32(r3 + 0x1Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C077876u, 4); goto L_0C077876; }  /* 0C0778D2 bra */
L_0C0778E0: BLKS(0x0C0778E0u);
	r3 = r5;  /* 0C0778E0 mov Rm,Rn */
	r3 += 0x30u;  /* 0C0778E2 add #imm,Rn */
	r3 += r8;  /* 0C0778E4 add Rm,Rn */
	r2 = R32(r3 + 0x20u); UPD(0x0C0778E8u, 4);  /* 0C0778E6 mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0778E8 tst Rm,Rn */
	if (T) { UPD(0x0C077876u, 4); goto L_0C077876; }  /* 0C0778EA bt */
L_0C0778EC: BLKS(0x0C0778ECu);
	r1 = 0xFFFF0000u; UPD(0x0C0778EEu, 1);  /* 0C0778EC mov.l @(disp,pc),Rn */
	{ r2 += r1; /* slot add Rm,Rn */ UPD(0x0C0778BCu, 3); goto L_0C0778BC; }  /* 0C0778EE bra */
L_0C077900: BLKS(0x0C077900u);
	r0 = r6;  /* 0C077900 mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C077902 cmp/eq #imm,r0 */
	{ u32 c_ = T; r4 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C077970u, 5); goto L_0C077970; } goto L_0C077908; }  /* 0C077904 bt/s */
L_0C077908: BLKS(0x0C077908u);
	T = (s32)r6 > (s32)r4;  /* 0C077908 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C077940u, 5); goto L_0C077940; } goto L_0C07790E; }  /* 0C07790A bt/s */
L_0C07790E: BLKS(0x0C07790Eu);
	T = (r6 & r6) == 0;  /* 0C07790E tst Rm,Rn */
	if (!T) { UPD(0x0C0778A0u, 5); goto L_0C0778A0; }  /* 0C077910 bf */
L_0C077912: BLKS(0x0C077912u);
	r3 = r5;  /* 0C077912 mov Rm,Rn */
	r3 += r8;  /* 0C077914 add Rm,Rn */
	r2 = R32(r3 + 0x20u); UPD(0x0C077918u, 3);  /* 0C077916 mov.l @(disp,Rm),Rn */
	IF(0x0C077918u); T = (s32)r2 >= 0;  /* 0C077918 cmp/pz Rn */
	{ u32 c_ = !T; r7 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077930u, 4); goto L_0C077930; } UPD(0x0C07791Eu, 1); goto L_0C07791E; }  /* 0C07791A bf/s */
L_0C07791E: BLKS(0x0C07791Eu);
	r6 = 0x1C0000u; UPD(0x0C077920u, 1);  /* 0C07791E mov.l @(disp,pc),Rn */
	r1 = 0xFFFF0000u; UPD(0x0C077922u, 1);  /* 0C077920 mov.l @(disp,pc),Rn */
	T = r7 == r6;  /* 0C077922 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0778A0u, 4); goto L_0C0778A0; }  /* 0C077924 bt */
L_0C077926: BLKS(0x0C077926u);
	r2 += r1;  /* 0C077926 add Rm,Rn */
	UPD(0x0C077928u, 1);
L_0C077928: BLKS(0x0C077928u);
	{ W32(r3 + 0x20u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0778A0u, 3); goto L_0C0778A0; }  /* 0C077928 bra */
L_0C077930: BLKS(0x0C077930u);
	{ r7 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C07791Eu, 3); goto L_0C07791E; }  /* 0C077930 bra */
L_0C077940: BLKS(0x0C077940u);
	if (!T) { UPD(0x0C0778A0u, 3); goto L_0C0778A0; }  /* 0C077940 bf */
L_0C077942: BLKS(0x0C077942u);
	r3 = r5;  /* 0C077942 mov Rm,Rn */
	r3 += 0x60u;  /* 0C077944 add #imm,Rn */
	r3 += r8;  /* 0C077946 add Rm,Rn */
	r2 = R32(r3 + 0x1Cu); UPD(0x0C07794Au, 4);  /* 0C077948 mov.l @(disp,Rm),Rn */
	IF(0x0C07794Au); T = (s32)r2 >= 0;  /* 0C07794A cmp/pz Rn */
	{ u32 c_ = !T; r7 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077960u, 4); goto L_0C077960; } UPD(0x0C077950u, 1); goto L_0C077950; }  /* 0C07794C bf/s */
L_0C077950: BLKS(0x0C077950u);
	r0 = 0x1C0000u; UPD(0x0C077952u, 1);  /* 0C077950 mov.l @(disp,pc),Rn */
	T = r7 == r0;  /* 0C077952 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0778A0u, 4); goto L_0C0778A0; }  /* 0C077954 bt */
L_0C077956: BLKS(0x0C077956u);
	r7 = 0xFFFF0000u; UPD(0x0C077958u, 1);  /* 0C077956 mov.l @(disp,pc),Rn */
	r2 += r7;  /* 0C077958 add Rm,Rn */
	W32(r3 + 0x1Cu, r2); UPD(0x0C07795Cu, 2);  /* 0C07795A mov.l Rm,@(disp,Rn) */
L_0C07795C: BLKS(0x0C07795Cu);
	{ IF(0x0C07795Eu); ; /* slot nop */ UPD(0x0C0778A0u, 3); goto L_0C0778A0; }  /* 0C07795C bra */
L_0C077960: BLKS(0x0C077960u);
	{ r7 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C077950u, 3); goto L_0C077950; }  /* 0C077960 bra */
L_0C077970: BLKS(0x0C077970u);
	r3 = r5;  /* 0C077970 mov Rm,Rn */
	r3 += 0x30u;  /* 0C077972 add #imm,Rn */
	r3 += r8;  /* 0C077974 add Rm,Rn */
	r2 = R32(r3 + 0x20u); UPD(0x0C077978u, 4);  /* 0C077976 mov.l @(disp,Rm),Rn */
	IF(0x0C077978u); T = (s32)r2 >= 0;  /* 0C077978 cmp/pz Rn */
	{ u32 c_ = !T; r7 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077990u, 4); goto L_0C077990; } UPD(0x0C07797Eu, 1); goto L_0C07797E; }  /* 0C07797A bf/s */
L_0C07797E: BLKS(0x0C07797Eu);
	r8 = 0x1C0000u; UPD(0x0C077980u, 1);  /* 0C07797E mov.l @(disp,pc),Rn */
	T = r7 == r8;  /* 0C077980 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C07795Cu, 4); goto L_0C07795C; }  /* 0C077982 bt */
L_0C077984: BLKS(0x0C077984u);
	r1 = 0x10000u; UPD(0x0C077986u, 1);  /* 0C077984 mov.l @(disp,pc),Rn */
	{ r2 += r1; /* slot add Rm,Rn */ UPD(0x0C077928u, 3); goto L_0C077928; }  /* 0C077986 bra */
L_0C077990: BLKS(0x0C077990u);
	{ r7 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C07797Eu, 3); goto L_0C07797E; }  /* 0C077990 bra */
}

/* FUN_0c0779b0 */
void blk_f_0C0779B0(sh3_t *c)
{
	LOCALS;
L_0C0779B0: BLKS(0x0C0779B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0779B2u, 1);  /* 0C0779B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0779B4u, 1);  /* 0C0779B2 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0779B4 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0779B8u, 2);  /* 0C0779B6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C0779B8 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0779BCu, 2);  /* 0C0779BA mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0779BC exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0779C0u, 2);  /* 0C0779BE mov.l Rm,@-Rn */
	r6 = 0x2A0u; UPD(0x0C0779C2u, 1);  /* 0C0779C0 mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0779C4u, 1);  /* 0C0779C2 mov.l Rm,@-Rn */
	IF(0x0C0779C4u); MACL = r10 * r6;  /* 0C0779C4 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0779C8u, 3);  /* 0C0779C6 mov.l Rm,@-Rn */
	r0 = 0xC29D1D8u; UPD(0x0C0779CAu, 1);  /* 0C0779C8 mov.l @(disp,pc),Rn */
	IF(0x0C0779CAu); r5 = MACL;  /* 0C0779CA sts macl,Rn */
	IF(0x0C0779CCu); r15 -= 4; W32(r15, PR); UPD(0x0C0779CEu, 2);  /* 0C0779CC sts.l pr,@-Rn */
	r5 += r0;  /* 0C0779CE add Rm,Rn */
	r0 = R32(r5 + 0x4u); UPD(0x0C0779D2u, 2);  /* 0C0779D0 mov.l @(disp,Rm),Rn */
	r3 = 0xC182834u; UPD(0x0C0779D4u, 1);  /* 0C0779D2 mov.l @(disp,pc),Rn */
	r0 &= 0x4u;  /* 0C0779D4 and #imm,r0 */
	IF(0x0C0779D6u); r2 = R32(r0 + r3); UPD(0x0C0779D8u, 2);  /* 0C0779D6 mov.l @(r0,Rm),Rn */
	r5 += r9;  /* 0C0779D8 add Rm,Rn */
	r3 = r9;  /* 0C0779DA mov Rm,Rn */
	IF(0x0C0779DCu); r3 <<= 2;  /* 0C0779DC shll2 Rn */
	r0 = r3;  /* 0C0779DE mov Rm,Rn */
	IF(0x0C0779E0u); r6 = R32(r0 + r2); UPD(0x0C0779E2u, 5);  /* 0C0779E0 mov.l @(r0,Rm),Rn */
	r4 = 0x269u; UPD(0x0C0779E4u, 1);  /* 0C0779E2 mov.w @(disp,pc),Rn */
	r0 = r5;  /* 0C0779E4 mov Rm,Rn */
	IF(0x0C0779E6u); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0779E8u, 2);  /* 0C0779E6 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C0779E8 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0779EA cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0779F4u, 5); goto L_0C0779F4; } goto L_0C0779F0; }  /* 0C0779EC bf/s */
L_0C0779F0: BLKS(0x0C0779F0u);
	{ r11 = 0x30u; /* slot mov #imm,Rn */ UPD(0x0C077CF0u, 4); goto L_0C077CF0; }  /* 0C0779F0 bra */
L_0C0779F4: BLKS(0x0C0779F4u);
	r7 = 0x3u;  /* 0C0779F4 mov #imm,Rn */
	T = (s32)r0 > (s32)r7;  /* 0C0779F6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x4u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C077A00u, 5); goto L_0C077A00; } goto L_0C0779FC; }  /* 0C0779F8 bf/s */
L_0C0779FC: BLKS(0x0C0779FCu);
	{ IF(0x0C0779FEu); ; /* slot nop */ UPD(0x0C077CC0u, 4); goto L_0C077CC0; }  /* 0C0779FC bra */
L_0C077A00: BLKS(0x0C077A00u);
	T = r0 == 0x2u;  /* 0C077A00 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r0 = 0x30u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C077A0Au, 4); goto L_0C077A0A; } goto L_0C077A06; }  /* 0C077A02 bf/s */
L_0C077A06: BLKS(0x0C077A06u);
	{ IF(0x0C077A08u); ; /* slot nop */ UPD(0x0C077CA0u, 4); goto L_0C077CA0; }  /* 0C077A06 bra */
L_0C077A0A: BLKS(0x0C077A0Au);
	r5 = 0x2A0u; UPD(0x0C077A0Cu, 1);  /* 0C077A0A mov.w @(disp,pc),Rn */
	r6 = 0x30u;  /* 0C077A0C mov #imm,Rn */
	IF(0x0C077A0Eu); MACL = r10 * r5;  /* 0C077A0E mul.l Rm,Rn */
	r4 = 0xC29D1D8u; UPD(0x0C077A12u, 4);  /* 0C077A10 mov.l @(disp,pc),Rn */
	IF(0x0C077A12u); r2 = MACL;  /* 0C077A12 sts macl,Rn */
	r2 += r4;  /* 0C077A14 add Rm,Rn */
	r13 = 0x269u; UPD(0x0C077A18u, 3);  /* 0C077A16 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C077A18 mov Rm,Rn */
	r0 += r9;  /* 0C077A1A add Rm,Rn */
	IF(0x0C077A1Cu); r0 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C077A1Eu, 3);  /* 0C077A1C mov.b @(r0,Rm),Rn */
	r5 = 0xFu;  /* 0C077A1E mov #imm,Rn */
	r12 = 0xC182834u; UPD(0x0C077A22u, 2);  /* 0C077A20 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C077A22 and #imm,r0 */
	IF(0x0C077A24u); r0 <<= 2;  /* 0C077A24 shll2 Rn */
	IF(0x0C077A26u); r11 = R32(r0 + r12); UPD(0x0C077A28u, 3);  /* 0C077A26 mov.l @(r0,Rm),Rn */
	r7 = 0x90u; UPD(0x0C077A2Au, 1);  /* 0C077A28 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C077A2A mov Rm,Rn */
	IF(0x0C077A2Cu); r4 = R32(r0 + r11); UPD(0x0C077A2Eu, 2);  /* 0C077A2C mov.l @(r0,Rm),Rn */
	IF(0x0C077A2Eu); MACL = r10 * r7;  /* 0C077A2E mul.l Rm,Rn */
	r11 = 0x24Cu; UPD(0x0C077A32u, 3);  /* 0C077A30 mov.w @(disp,pc),Rn */
	IF(0x0C077A32u); r12 = MACL;  /* 0C077A32 sts macl,Rn */
	r11 += r2;  /* 0C077A34 add Rm,Rn */
	IF(0x0C077A36u); MACL = r9 * r6;  /* 0C077A36 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r1 = v_; } UPD(0x0C077A3Au, 5);  /* 0C077A38 mov.w @Rm+,Rn */
	IF(0x0C077A3Au); r0 = MACL;  /* 0C077A3A sts macl,Rn */
	r5 &= r1;  /* 0C077A3C and Rm,Rn */
	r12 += r0;  /* 0C077A3E add Rm,Rn */
	r3 = 0xC2974C8u; UPD(0x0C077A42u, 4);  /* 0C077A40 mov.l @(disp,pc),Rn */
	r5 += r5;  /* 0C077A42 add Rm,Rn */
	r0 = r5;  /* 0C077A44 mov Rm,Rn */
	IF(0x0C077A46u); r13 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C077A48u, 3);  /* 0C077A46 mov.w @(r0,Rm),Rn */
	r12 += r3;  /* 0C077A48 add Rm,Rn */
	r12 += 0x26u;  /* 0C077A4A add #imm,Rn */
	W16(r12, r13); UPD(0x0C077A4Eu, 3);  /* 0C077A4C mov.w Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r11); UPD(0x0C077A50u, 1);  /* 0C077A4E mov.w @Rm,Rn */
	r0 &= 0x10u;  /* 0C077A50 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C077A52 tst Rm,Rn */
	if (T) { UPD(0x0C077A58u, 5); goto L_0C077A58; }  /* 0C077A54 bt */
L_0C077A56: BLKS(0x0C077A56u);
	r8 = 0x1u;  /* 0C077A56 mov #imm,Rn */
	UPD(0x0C077A58u, 1);
L_0C077A58: BLKS(0x0C077A58u);
	r2 = 0x2A0u; UPD(0x0C077A5Au, 1);  /* 0C077A58 mov.w @(disp,pc),Rn */
	IF(0x0C077A5Au); MACL = r10 * r2;  /* 0C077A5A mul.l Rm,Rn */
	r6 = 0xC29D1D8u; UPD(0x0C077A5Eu, 3);  /* 0C077A5C mov.l @(disp,pc),Rn */
	IF(0x0C077A5Eu); r0 = MACL;  /* 0C077A5E sts macl,Rn */
	r6 += r0;  /* 0C077A60 add Rm,Rn */
	r0 = 0x270u; UPD(0x0C077A64u, 3);  /* 0C077A62 mov.w @(disp,pc),Rn */
	IF(0x0C077A64u); r0 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C077A66u, 1);  /* 0C077A64 mov.b @(r0,Rm),Rn */
	T = r0 == 0x8u;  /* 0C077A66 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r5 = 0x30u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C077A70u, 4); goto L_0C077A70; } goto L_0C077A6C; }  /* 0C077A68 bf/s */
L_0C077A6C: BLKS(0x0C077A6Cu);
	{ IF(0x0C077A6Eu); ; /* slot nop */ UPD(0x0C077C30u, 4); goto L_0C077C30; }  /* 0C077A6C bra */
L_0C077A70: BLKS(0x0C077A70u);
	r0 = r8;  /* 0C077A70 mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C077A72 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C077B48u, 5); goto L_0C077B48; }  /* 0C077A74 bt */
L_0C077A76: BLKS(0x0C077A76u);
	r4 = r9;  /* 0C077A76 mov Rm,Rn */
	r4 += r4;  /* 0C077A78 add Rm,Rn */
	r11 = 0xC18283Cu; UPD(0x0C077A7Cu, 3);  /* 0C077A7A mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C077A7C mov Rm,Rn */
	IF(0x0C077A7Eu); r5 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C077A80u, 2);  /* 0C077A7E mov.w @(r0,Rm),Rn */
	IF(0x0C077A80u); T = (s32)r5 > 0;  /* 0C077A80 cmp/pl Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C077B48u, 4); goto L_0C077B48; } goto L_0C077A86; }  /* 0C077A82 bf/s */
L_0C077A86: BLKS(0x0C077A86u);
	r0 = 0x90u; UPD(0x0C077A88u, 2);  /* 0C077A86 mov.w @(disp,pc),Rn */
	r12 = 0x30u;  /* 0C077A88 mov #imm,Rn */
	IF(0x0C077A8Au); MACL = r10 * r0;  /* 0C077A8A mul.l Rm,Rn */
	r6 = 0xC2974C8u; UPD(0x0C077A8Eu, 4);  /* 0C077A8C mov.l @(disp,pc),Rn */
	IF(0x0C077A8Eu); r3 = MACL;  /* 0C077A8E sts macl,Rn */
	IF(0x0C077A90u); MACL = r9 * r12;  /* 0C077A90 mul.l Rm,Rn */
	r11 = 0x100u; UPD(0x0C077A94u, 4);  /* 0C077A92 mov.w @(disp,pc),Rn */
	IF(0x0C077A94u); r13 = MACL;  /* 0C077A94 sts macl,Rn */
	r3 += r13;  /* 0C077A96 add Rm,Rn */
	r3 += r6;  /* 0C077A98 add Rm,Rn */
	r6 = r3;  /* 0C077A9A mov Rm,Rn */
	IF(0x0C077A9Cu); MACL = r10 * r0;  /* 0C077A9C mul.l Rm,Rn */
	r3 += 0x26u;  /* 0C077A9E add #imm,Rn */
	r12 = 0x100u; UPD(0x0C077AA2u, 8);  /* 0C077AA0 mov.w @(disp,pc),Rn */
	r6 += 0x24u;  /* 0C077AA2 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r3); UPD(0x0C077AA6u, 2);  /* 0C077AA4 mov.w @Rm,Rn */
	IF(0x0C077AA6u); r13 = MACL;  /* 0C077AA6 sts macl,Rn */
	UPD(0x0C077AA8u, 1);
L_0C077AA8: BLKS(0x0C077AA8u);
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C077AAAu, 1);  /* 0C077AA8 mov.w @Rm,Rn */
	r3 = r5;  /* 0C077AAA mov Rm,Rn */
	r3 -= r2;  /* 0C077AAC sub Rm,Rn */
	r0 = 0x1FFu; UPD(0x0C077AB0u, 3);  /* 0C077AAE mov.w @(disp,pc),Rn */
	r3 += r12;  /* 0C077AB0 add Rm,Rn */
	r3 &= r0;  /* 0C077AB2 and Rm,Rn */
	T = (s32)r3 > (s32)r11;  /* 0C077AB4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C077AEEu, 6); goto L_0C077AEE; }  /* 0C077AB6 bf */
L_0C077AB8: BLKS(0x0C077AB8u);
	r0 = 0x2A0u; UPD(0x0C077ABAu, 1);  /* 0C077AB8 mov.w @(disp,pc),Rn */
	IF(0x0C077ABAu); MACL = r10 * r0;  /* 0C077ABA mul.l Rm,Rn */
	r1 = 0xC29D1D8u; UPD(0x0C077ABEu, 3);  /* 0C077ABC mov.l @(disp,pc),Rn */
	IF(0x0C077ABEu); r0 = MACL;  /* 0C077ABE sts macl,Rn */
	r0 += r1;  /* 0C077AC0 add Rm,Rn */
	r1 = 0x269u; UPD(0x0C077AC4u, 3);  /* 0C077AC2 mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C077AC4 add Rm,Rn */
	IF(0x0C077AC6u); r1 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C077AC8u, 2);  /* 0C077AC6 mov.b @(r0,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C077AC8 tst Rm,Rn */
	{ u32 c_ = T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077AD4u, 4); goto L_0C077AD4; } goto L_0C077ACE; }  /* 0C077ACA bt/s */
L_0C077ACE: BLKS(0x0C077ACEu);
	T = r0 == 0x2u;  /* 0C077ACE cmp/eq #imm,r0 */
	{ u32 c_ = !T; r0 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077AD8u, 5); goto L_0C077AD8; } UPD(0x0C077AD4u, 1); goto L_0C077AD4; }  /* 0C077AD0 bf/s */
L_0C077AD4: BLKS(0x0C077AD4u);
	{ IF(0x0C077AD6u); ; /* slot nop */ UPD(0x0C077BF0u, 3); goto L_0C077BF0; }  /* 0C077AD4 bra */
L_0C077AD8: BLKS(0x0C077AD8u);
	r0 -= r11;  /* 0C077AD8 sub Rm,Rn */
	IF(0x0C077ADAu); T = (s32)r0 >= 0;  /* 0C077ADA cmp/pz Rn */
	if (T) { UPD(0x0C077AE4u, 5); goto L_0C077AE4; }  /* 0C077ADC bt */
L_0C077ADE: BLKS(0x0C077ADEu);
	r0 += 0xFu;  /* 0C077ADE add #imm,Rn */
	{ r1 = 0xFFFFFFFCu; /* slot mov #imm,Rn */ UPD(0x0C077AE6u, 4); goto L_0C077AE6; }  /* 0C077AE0 bra */
L_0C077AE4: BLKS(0x0C077AE4u);
	r1 = 0xFFFFFFFCu;  /* 0C077AE4 mov #imm,Rn */
	UPD(0x0C077AE6u, 1);
L_0C077AE6: BLKS(0x0C077AE6u);
	IF(0x0C077AE6u); ARG0(0x401Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C077AE6 shad Rm,Rn */
	r0 |= 0x1u;  /* 0C077AE8 or #imm,r0 */
	r0 += r2;  /* 0C077AEA add Rm,Rn */
	W16(r6, r0); UPD(0x0C077AEEu, 4);  /* 0C077AEC mov.w Rm,@Rn */
L_0C077AEE: BLKS(0x0C077AEEu);
	r2 = 0xFFu; UPD(0x0C077AF0u, 1);  /* 0C077AEE mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r2;  /* 0C077AF0 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077B3Au, 4); goto L_0C077B3A; } goto L_0C077AF6; }  /* 0C077AF2 bt/s */
L_0C077AF6: BLKS(0x0C077AF6u);
	r0 = 0x2A0u; UPD(0x0C077AF8u, 2);  /* 0C077AF6 mov.w @(disp,pc),Rn */
	IF(0x0C077AF8u); MACL = r10 * r0;  /* 0C077AF8 mul.l Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C077AFCu, 3);  /* 0C077AFA mov.l @(disp,pc),Rn */
	IF(0x0C077AFCu); r0 = MACL;  /* 0C077AFC sts macl,Rn */
	r0 += r2;  /* 0C077AFE add Rm,Rn */
	r1 = 0x269u; UPD(0x0C077B02u, 3);  /* 0C077B00 mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C077B02 add Rm,Rn */
	IF(0x0C077B04u); r2 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C077B06u, 2);  /* 0C077B04 mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C077B06 tst Rm,Rn */
	{ u32 c_ = T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077BB0u, 4); goto L_0C077BB0; } goto L_0C077B0C; }  /* 0C077B08 bt/s */
L_0C077B0C: BLKS(0x0C077B0Cu);
	T = r0 == 0x2u;  /* 0C077B0C cmp/eq #imm,r0 */
	{ u32 c_ = T; r0 = 0x30u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C077BB0u, 5); goto L_0C077BB0; } goto L_0C077B12; }  /* 0C077B0E bt/s */
L_0C077B12: BLKS(0x0C077B12u);
	r2 = 0x90u; UPD(0x0C077B14u, 2);  /* 0C077B12 mov.w @(disp,pc),Rn */
	IF(0x0C077B14u); MACL = r10 * r2;  /* 0C077B14 mul.l Rm,Rn */
	IF(0x0C077B16u); r2 = MACL;  /* 0C077B16 sts macl,Rn */
	IF(0x0C077B18u); MACL = r9 * r0;  /* 0C077B18 mul.l Rm,Rn */
	IF(0x0C077B1Au); r0 = MACL;  /* 0C077B1A sts macl,Rn */
	r2 += r0;  /* 0C077B1C add Rm,Rn */
	r0 = 0xC2974C8u; UPD(0x0C077B20u, 8);  /* 0C077B1E mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C077B20 add Rm,Rn */
	r0 = 0x100u; UPD(0x0C077B24u, 2);  /* 0C077B22 mov.w @(disp,pc),Rn */
	r0 -= r3;  /* 0C077B24 sub Rm,Rn */
	IF(0x0C077B26u); T = (s32)r0 >= 0;  /* 0C077B26 cmp/pz Rn */
	{ u32 c_ = !T; r2 += 0x24u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C077B80u, 5); goto L_0C077B80; } UPD(0x0C077B2Cu, 1); goto L_0C077B2C; }  /* 0C077B28 bf/s */
L_0C077B2C: BLKS(0x0C077B2Cu);
	r3 = 0xFFFFFFFCu;  /* 0C077B2C mov #imm,Rn */
	IF(0x0C077B2Eu); ARG0(0x403Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C077B2E shad Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C077B32u, 3);  /* 0C077B30 mov.w @Rm,Rn */
	r0 |= 0x1u;  /* 0C077B32 or #imm,r0 */
	r1 -= r0;  /* 0C077B34 sub Rm,Rn */
	UPD(0x0C077B36u, 2);
L_0C077B36: BLKS(0x0C077B36u);
	W16(r2, r1); UPD(0x0C077B38u, 1);  /* 0C077B36 mov.w Rm,@Rn */
	r0 = r7;  /* 0C077B38 mov Rm,Rn */
	UPD(0x0C077B3Au, 1);
L_0C077B3A: BLKS(0x0C077B3Au);
	r0 += 0x1u;  /* 0C077B3A add #imm,Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C077B3C exts.w Rm,Rn */
	r2 = 0xC18283Cu; UPD(0x0C077B40u, 3);  /* 0C077B3E mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C077B40 mov Rm,Rn */
	IF(0x0C077B42u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C077B44u, 2);  /* 0C077B42 mov.w @(r0,Rm),Rn */
	T = (s32)r3 > (s32)r7;  /* 0C077B44 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C077AA8u, 4); goto L_0C077AA8; }  /* 0C077B46 bt */
L_0C077B48: BLKS(0x0C077B48u);
	r5 = 0x90u; UPD(0x0C077B4Au, 1);  /* 0C077B48 mov.w @(disp,pc),Rn */
	r7 = 0x30u;  /* 0C077B4A mov #imm,Rn */
	IF(0x0C077B4Cu); MACL = r10 * r5;  /* 0C077B4C mul.l Rm,Rn */
	r4 = 0xC2974C8u; UPD(0x0C077B50u, 4);  /* 0C077B4E mov.l @(disp,pc),Rn */
	IF(0x0C077B50u); r10 = MACL;  /* 0C077B50 sts macl,Rn */
	IF(0x0C077B52u); MACL = r9 * r7;  /* 0C077B52 mul.l Rm,Rn */
	IF(0x0C077B54u); r8 = MACL;  /* 0C077B54 sts macl,Rn */
	r10 += r8;  /* 0C077B56 add Rm,Rn */
	r10 += r4;  /* 0C077B58 add Rm,Rn */
	r10 += 0x24u;  /* 0C077B5A add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C077B5Eu, 8);  /* 0C077B5C mov.w @Rm,Rn */
	r0 = r9 & 0xFFFF;  /* 0C077B5E extu.w Rm,Rn */
	r0 += 0x4u;  /* 0C077B60 add #imm,Rn */
	IF(0x0C077B62u); r0 >>= 2;  /* 0C077B62 shlr2 Rn */
	IF(0x0C077B64u); T = r0 & 1; r0 >>= 1;  /* 0C077B64 shlr Rn */
	r10 += 0xFFFFFFDCu;  /* 0C077B66 add #imm,Rn */
	r0 &= 0x3Fu;  /* 0C077B68 and #imm,r0 */
	W32(r10 + 0xCu, r0); UPD(0x0C077B6Cu, 7);  /* 0C077B6A mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C077B6C mov Rm,Rn */
	IF(0x0C077B6Eu); PR = R32(r15); r15 += 4; UPD(0x0C077B70u, 2);  /* 0C077B6E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C077B72u, 1);  /* 0C077B70 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C077B74u, 1);  /* 0C077B72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C077B76u, 1);  /* 0C077B74 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C077B78u, 1);  /* 0C077B76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C077B7Au, 1);  /* 0C077B78 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C077B7Cu, 1);  /* 0C077B7A mov.l @Rm+,Rn */
	IF(0x0C077B7Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C077B7C rts */
L_0C077B80: BLKS(0x0C077B80u);
	{ r0 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C077B2Cu, 3); goto L_0C077B2C; }  /* 0C077B80 bra */
L_0C077BB0: BLKS(0x0C077BB0u);
	r0 = 0x2A0u; UPD(0x0C077BB2u, 1);  /* 0C077BB0 mov.w @(disp,pc),Rn */
	IF(0x0C077BB2u); MACL = r10 * r0;  /* 0C077BB2 mul.l Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C077BB6u, 3);  /* 0C077BB4 mov.l @(disp,pc),Rn */
	IF(0x0C077BB6u); r0 = MACL;  /* 0C077BB6 sts macl,Rn */
	r0 += r2;  /* 0C077BB8 add Rm,Rn */
	r3 = 0x269u; UPD(0x0C077BBCu, 3);  /* 0C077BBA mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C077BBC add Rm,Rn */
	IF(0x0C077BBEu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C077BC0u, 2);  /* 0C077BBE mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C077BC0 tst Rm,Rn */
	{ u32 c_ = !T; T = (r8 & r8) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C077BC8u, 4); goto L_0C077BC8; } goto L_0C077BC6; }  /* 0C077BC2 bf/s */
L_0C077BC6: BLKS(0x0C077BC6u);
	if (T) { UPD(0x0C077BD4u, 4); goto L_0C077BD4; }  /* 0C077BC6 bt */
L_0C077BC8: BLKS(0x0C077BC8u);
	r3 = 0xC2B039Cu; UPD(0x0C077BCAu, 1);  /* 0C077BC8 mov.l @(disp,pc),Rn */
	r0 = R32(r3); UPD(0x0C077BCCu, 1);  /* 0C077BCA mov.l @Rm,Rn */
	r0 &= 0x1u;  /* 0C077BCC and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C077BCE tst Rm,Rn */
	{ u32 c_ = !T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077B3Au, 5); goto L_0C077B3A; } UPD(0x0C077BD4u, 1); goto L_0C077BD4; }  /* 0C077BD0 bf/s */
L_0C077BD4: BLKS(0x0C077BD4u);
	r2 = 0x90u; UPD(0x0C077BD6u, 1);  /* 0C077BD4 mov.w @(disp,pc),Rn */
	r3 = 0x30u;  /* 0C077BD6 mov #imm,Rn */
	IF(0x0C077BD8u); MACL = r10 * r2;  /* 0C077BD8 mul.l Rm,Rn */
	r1 = 0xC2974C8u; UPD(0x0C077BDCu, 4);  /* 0C077BDA mov.l @(disp,pc),Rn */
	IF(0x0C077BDCu); r2 = MACL;  /* 0C077BDC sts macl,Rn */
	IF(0x0C077BDEu); MACL = r9 * r3;  /* 0C077BDE mul.l Rm,Rn */
	IF(0x0C077BE0u); r0 = MACL;  /* 0C077BE0 sts macl,Rn */
	r2 += r0;  /* 0C077BE2 add Rm,Rn */
	r2 += r1;  /* 0C077BE4 add Rm,Rn */
	r2 += 0x24u;  /* 0C077BE6 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C077BEAu, 8);  /* 0C077BE8 mov.w @Rm,Rn */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C077B36u, 3); goto L_0C077B36; }  /* 0C077BEA bra */
L_0C077BF0: BLKS(0x0C077BF0u);
	r0 = 0x2A0u; UPD(0x0C077BF2u, 1);  /* 0C077BF0 mov.w @(disp,pc),Rn */
	IF(0x0C077BF2u); MACL = r10 * r0;  /* 0C077BF2 mul.l Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C077BF6u, 3);  /* 0C077BF4 mov.l @(disp,pc),Rn */
	IF(0x0C077BF6u); r0 = MACL;  /* 0C077BF6 sts macl,Rn */
	r0 += r2;  /* 0C077BF8 add Rm,Rn */
	r1 = 0x269u; UPD(0x0C077BFCu, 3);  /* 0C077BFA mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C077BFC add Rm,Rn */
	IF(0x0C077BFEu); r2 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C077C00u, 2);  /* 0C077BFE mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C077C00 tst Rm,Rn */
	{ u32 c_ = !T; T = (r8 & r8) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C077C0Au, 4); goto L_0C077C0A; } goto L_0C077C06; }  /* 0C077C02 bf/s */
L_0C077C06: BLKS(0x0C077C06u);
	{ u32 c_ = T; r0 = 0x30u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C077C16u, 4); goto L_0C077C16; } UPD(0x0C077C0Au, 1); goto L_0C077C0A; }  /* 0C077C06 bt/s */
L_0C077C0A: BLKS(0x0C077C0Au);
	r2 = 0xC2B039Cu; UPD(0x0C077C0Cu, 1);  /* 0C077C0A mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C077C0Eu, 1);  /* 0C077C0C mov.l @Rm,Rn */
	r0 &= 0x1u;  /* 0C077C0E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C077C10 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x30u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C077C28u, 5); goto L_0C077C28; } UPD(0x0C077C16u, 1); goto L_0C077C16; }  /* 0C077C12 bf/s */
L_0C077C16: BLKS(0x0C077C16u);
	IF(0x0C077C16u); MACL = r9 * r0;  /* 0C077C16 mul.l Rm,Rn */
	r2 = 0xC2974C8u; UPD(0x0C077C1Au, 3);  /* 0C077C18 mov.l @(disp,pc),Rn */
	IF(0x0C077C1Au); r0 = MACL;  /* 0C077C1A sts macl,Rn */
	r0 += r13;  /* 0C077C1C add Rm,Rn */
	r0 += r2;  /* 0C077C1E add Rm,Rn */
	r0 += 0x24u;  /* 0C077C20 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C077C24u, 5);  /* 0C077C22 mov.w @Rm,Rn */
	r2 += 0x1u;  /* 0C077C24 add #imm,Rn */
	W16(r0, r2); UPD(0x0C077C28u, 2);  /* 0C077C26 mov.w Rm,@Rn */
L_0C077C28: BLKS(0x0C077C28u);
	{ IF(0x0C077C2Au); ; /* slot nop */ UPD(0x0C077AEEu, 3); goto L_0C077AEE; }  /* 0C077C28 bra */
L_0C077C30: BLKS(0x0C077C30u);
	r11 = 0x90u; UPD(0x0C077C32u, 1);  /* 0C077C30 mov.w @(disp,pc),Rn */
	IF(0x0C077C32u); MACL = r10 * r11;  /* 0C077C32 mul.l Rm,Rn */
	r7 = 0xC2974C8u; UPD(0x0C077C36u, 3);  /* 0C077C34 mov.l @(disp,pc),Rn */
	IF(0x0C077C36u); r11 = MACL;  /* 0C077C36 sts macl,Rn */
	IF(0x0C077C38u); MACL = r9 * r5;  /* 0C077C38 mul.l Rm,Rn */
	r13 = 0xC0769D0u; UPD(0x0C077C3Cu, 4);  /* 0C077C3A mov.l @(disp,pc),Rn */
	IF(0x0C077C3Cu); r4 = MACL;  /* 0C077C3C sts macl,Rn */
	r11 += r4;  /* 0C077C3E add Rm,Rn */
	r11 += r7;  /* 0C077C40 add Rm,Rn */
	r12 = r11;  /* 0C077C42 mov Rm,Rn */
	r12 += 0x28u;  /* 0C077C44 add #imm,Rn */
	IF(0x0C077C46u); { u32 t_ = r13; PR = 0x0C077C4Au; r4 = (u32)(s32)(s16)R16(r12); /* slot mov.w @Rm,Rn */ UPD(t_, 7); CALLP(t_, blk_f_0C0769D0, 0x0C0769D0u, 0x0C077C4Au); }  /* 0C077C46 jsr @Rn */
L_0C077C4A: BLKS(0x0C077C4Au);
	W16(r12, r0); UPD(0x0C077C4Cu, 1);  /* 0C077C4A mov.w Rm,@Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C077C4C exts.w Rm,Rn */
	r8 = 0xBFu; UPD(0x0C077C50u, 2);  /* 0C077C4E mov.w @(disp,pc),Rn */
	T = (s32)r4 > (s32)r8;  /* 0C077C50 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C077C80u, 4); goto L_0C077C80; } UPD(0x0C077C56u, 1); goto L_0C077C56; }  /* 0C077C52 bf/s */
L_0C077C56: BLKS(0x0C077C56u);
	r8 = (u32)(s32)(s16)r0;  /* 0C077C56 exts.w Rm,Rn */
	r0 = r8;  /* 0C077C58 mov Rm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C077C5A cmp/eq #imm,r0 */
	{ u32 c_ = T; r7 = 0x30u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C077C74u, 6); goto L_0C077C74; } goto L_0C077C60; }  /* 0C077C5C bt/s */
L_0C077C60: BLKS(0x0C077C60u);
	r2 = 0x90u; UPD(0x0C077C62u, 2);  /* 0C077C60 mov.w @(disp,pc),Rn */
	IF(0x0C077C62u); MACL = r10 * r2;  /* 0C077C62 mul.l Rm,Rn */
	r1 = 0xC2974C8u; UPD(0x0C077C66u, 3);  /* 0C077C64 mov.l @(disp,pc),Rn */
	IF(0x0C077C66u); r12 = MACL;  /* 0C077C66 sts macl,Rn */
	IF(0x0C077C68u); MACL = r9 * r7;  /* 0C077C68 mul.l Rm,Rn */
	IF(0x0C077C6Au); r13 = MACL;  /* 0C077C6A sts macl,Rn */
	r12 += r13;  /* 0C077C6C add Rm,Rn */
	r12 += r1;  /* 0C077C6E add Rm,Rn */
	r12 += 0x26u;  /* 0C077C70 add #imm,Rn */
	W16(r12, r8); UPD(0x0C077C74u, 8);  /* 0C077C72 mov.w Rm,@Rn */
L_0C077C74: BLKS(0x0C077C74u);
	{ r8 = 0x2u; /* slot mov #imm,Rn */ UPD(0x0C077A70u, 3); goto L_0C077A70; }  /* 0C077C74 bra */
L_0C077C80: BLKS(0x0C077C80u);
	r0 = 0xB4u; UPD(0x0C077C82u, 1);  /* 0C077C80 mov.w @(disp,pc),Rn */
	IF(0x0C077C82u); MACL = r4 * r0;  /* 0C077C82 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C077C86u, 3);  /* 0C077C84 mov.l @(disp,pc),Rn */
	r8 = 0xC068E60u; UPD(0x0C077C88u, 1);  /* 0C077C86 mov.l @(disp,pc),Rn */
	IF(0x0C077C88u); r3 = MACL;  /* 0C077C88 sts macl,Rn */
	r3 += r6;  /* 0C077C8A add Rm,Rn */
	r4 = R32(r11 + 0x14u); UPD(0x0C077C8Eu, 3);  /* 0C077C8C mov.l @(disp,Rm),Rn */
	r5 = R32(r11 + 0x18u); UPD(0x0C077C90u, 1);  /* 0C077C8E mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C077C92u, 1);  /* 0C077C90 mov.l @(disp,Rm),Rn */
	IF(0x0C077C92u); { u32 t_ = r8; PR = 0x0C077C96u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C077C96u); }  /* 0C077C92 jsr @Rn */
L_0C077C96: BLKS(0x0C077C96u);
	{ r0 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(0x0C077C56u, 3); goto L_0C077C56; }  /* 0C077C96 bra */
L_0C077CA0: BLKS(0x0C077CA0u);
	r2 = 0x90u; UPD(0x0C077CA2u, 1);  /* 0C077CA0 mov.w @(disp,pc),Rn */
	IF(0x0C077CA2u); MACL = r10 * r2;  /* 0C077CA2 mul.l Rm,Rn */
	r1 = 0xC2974C8u; UPD(0x0C077CA6u, 3);  /* 0C077CA4 mov.l @(disp,pc),Rn */
	IF(0x0C077CA6u); r2 = MACL;  /* 0C077CA6 sts macl,Rn */
	IF(0x0C077CA8u); MACL = r9 * r0;  /* 0C077CA8 mul.l Rm,Rn */
	IF(0x0C077CAAu); r3 = MACL;  /* 0C077CAA sts macl,Rn */
	r2 += r3;  /* 0C077CAC add Rm,Rn */
	r2 += r1;  /* 0C077CAE add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r6); UPD(0x0C077CB2u, 7);  /* 0C077CB0 mov.w @Rm,Rn */
	r2 += 0x26u;  /* 0C077CB2 add #imm,Rn */
	UPD(0x0C077CB4u, 1);
L_0C077CB4: BLKS(0x0C077CB4u);
	{ W16(r2, r1); /* slot mov.w Rm,@Rn */ UPD(0x0C077A58u, 3); goto L_0C077A58; }  /* 0C077CB4 bra */
L_0C077CC0: BLKS(0x0C077CC0u);
	{ u32 c_ = T; r5 = 0x30u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C077CC8u, 3); goto L_0C077CC8; } goto L_0C077CC4; }  /* 0C077CC0 bt/s */
L_0C077CC4: BLKS(0x0C077CC4u);
	{ IF(0x0C077CC6u); ; /* slot nop */ UPD(0x0C077A0Au, 4); goto L_0C077A0A; }  /* 0C077CC4 bra */
L_0C077CC8: BLKS(0x0C077CC8u);
	r3 = 0x90u; UPD(0x0C077CCAu, 1);  /* 0C077CC8 mov.w @(disp,pc),Rn */
	IF(0x0C077CCAu); MACL = r10 * r3;  /* 0C077CCA mul.l Rm,Rn */
	r13 = 0xC2974C8u; UPD(0x0C077CCEu, 3);  /* 0C077CCC mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C077CCE mov Rm,Rn */
	IF(0x0C077CD0u); r2 = MACL;  /* 0C077CD0 sts macl,Rn */
	IF(0x0C077CD2u); MACL = r9 * r5;  /* 0C077CD2 mul.l Rm,Rn */
	r1 = 0xC182810u; UPD(0x0C077CD6u, 5);  /* 0C077CD4 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C077CD6 add Rm,Rn */
	IF(0x0C077CD8u); r4 = MACL;  /* 0C077CD8 sts macl,Rn */
	r2 += r4;  /* 0C077CDA add Rm,Rn */
	r2 += r13;  /* 0C077CDC add Rm,Rn */
	r2 += 0x26u;  /* 0C077CDE add #imm,Rn */
	UPD(0x0C077CE0u, 5);
L_0C077CE0: BLKS(0x0C077CE0u);
	{ IF(0x0C077CE2u); r1 = (u32)(s32)(s16)R16(r0 + r1); /* slot mov.w @(r0,Rm),Rn */ UPD(0x0C077CB4u, 3); goto L_0C077CB4; }  /* 0C077CE0 bra */
L_0C077CF0: BLKS(0x0C077CF0u);
	r12 = 0x90u; UPD(0x0C077CF2u, 1);  /* 0C077CF0 mov.w @(disp,pc),Rn */
	IF(0x0C077CF2u); MACL = r10 * r12;  /* 0C077CF2 mul.l Rm,Rn */
	r6 = 0xC2974C8u; UPD(0x0C077CF6u, 3);  /* 0C077CF4 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C077CF6 mov Rm,Rn */
	IF(0x0C077CF8u); r2 = MACL;  /* 0C077CF8 sts macl,Rn */
	IF(0x0C077CFAu); MACL = r9 * r11;  /* 0C077CFA mul.l Rm,Rn */
	r1 = 0xC182816u; UPD(0x0C077CFEu, 5);  /* 0C077CFC mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C077CFE add Rm,Rn */
	IF(0x0C077D00u); r7 = MACL;  /* 0C077D00 sts macl,Rn */
	r2 += r7;  /* 0C077D02 add Rm,Rn */
	r2 += r6;  /* 0C077D04 add Rm,Rn */
	{ r2 += 0x26u; /* slot add #imm,Rn */ UPD(0x0C077CE0u, 7); goto L_0C077CE0; }  /* 0C077D06 bra */
}

void blk_f_0C077D40(sh3_t *c)
{
	LOCALS;
L_0C077D40: BLKS(0x0C077D40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C077D42u, 1);  /* 0C077D40 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C077D44u, 1);  /* 0C077D42 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C077D46u, 1);  /* 0C077D44 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C077D48u, 1);  /* 0C077D46 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C077D48 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C077D4Cu, 2);  /* 0C077D4A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C077D4Eu, 1);  /* 0C077D4C mov.l Rm,@-Rn */
	r0 = 0x2A0u; UPD(0x0C077D50u, 1);  /* 0C077D4E mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C077D50 exts.w Rm,Rn */
	IF(0x0C077D52u); MACL = r13 * r0;  /* 0C077D52 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C077D56u, 4);  /* 0C077D54 mov.l Rm,@-Rn */
	r2 = 0xC29D1D8u; UPD(0x0C077D58u, 1);  /* 0C077D56 mov.l @(disp,pc),Rn */
	IF(0x0C077D58u); r0 = MACL;  /* 0C077D58 sts macl,Rn */
	IF(0x0C077D5Au); r15 -= 4; W32(r15, PR); UPD(0x0C077D5Cu, 2);  /* 0C077D5A sts.l pr,@-Rn */
	r0 += r2;  /* 0C077D5C add Rm,Rn */
	r3 = 0x25Fu; UPD(0x0C077D60u, 2);  /* 0C077D5E mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C077D60 add #imm,Rn */
	IF(0x0C077D62u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C077D64u, 2);  /* 0C077D62 mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C077D64 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077D72u, 4); goto L_0C077D72; } goto L_0C077D6A; }  /* 0C077D66 bt/s */
L_0C077D6A: BLKS(0x0C077D6Au);
	r4 = 0x272u; UPD(0x0C077D6Cu, 2);  /* 0C077D6A mov.w @(disp,pc),Rn */
	IF(0x0C077D6Cu); r11 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C077D6Eu, 1);  /* 0C077D6C mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C077D6E tst Rm,Rn */
	if (T) { UPD(0x0C077D90u, 4); goto L_0C077D90; }  /* 0C077D70 bt */
L_0C077D72: BLKS(0x0C077D72u);
	r14 += 0x8u;  /* 0C077D72 add #imm,Rn */
	UPD(0x0C077D74u, 1);
L_0C077D74: BLKS(0x0C077D74u);
	r15 = r14;  /* 0C077D74 mov Rm,Rn */
	IF(0x0C077D76u); PR = R32(r15); r15 += 4; UPD(0x0C077D78u, 2);  /* 0C077D76 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C077D7Au, 1);  /* 0C077D78 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C077D7Cu, 1);  /* 0C077D7A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C077D7Eu, 1);  /* 0C077D7C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C077D80u, 1);  /* 0C077D7E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C077D82u, 1);  /* 0C077D80 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C077D84u, 1);  /* 0C077D82 mov.l @Rm+,Rn */
	IF(0x0C077D84u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C077D84 rts */
L_0C077D90: BLKS(0x0C077D90u);
	r8 = 0xC0718C0u; UPD(0x0C077D92u, 1);  /* 0C077D90 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C077D92 mov Rm,Rn */
	r5 = r10;  /* 0C077D94 mov Rm,Rn */
	r6 = 0x1u;  /* 0C077D96 mov #imm,Rn */
	IF(0x0C077D98u); { u32 t_ = r8; PR = 0x0C077D9Cu; r7 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0718C0, 0x0C0718C0u, 0x0C077D9Cu); }  /* 0C077D98 jsr @Rn */
L_0C077D9C: BLKS(0x0C077D9Cu);
	T = (r0 & r0) == 0;  /* 0C077D9C tst Rm,Rn */
	if (T) { UPD(0x0C077D72u, 4); goto L_0C077D72; }  /* 0C077D9E bt */
L_0C077DA0: BLKS(0x0C077DA0u);
	r3 = 0x30u;  /* 0C077DA0 mov #imm,Rn */
	r9 = 0x90u; UPD(0x0C077DA4u, 2);  /* 0C077DA2 mov.w @(disp,pc),Rn */
	IF(0x0C077DA4u); MACL = r13 * r9;  /* 0C077DA4 mul.l Rm,Rn */
	r8 = 0x9C0u; UPD(0x0C077DA8u, 3);  /* 0C077DA6 mov.w @(disp,pc),Rn */
	r4 = 0x34u;  /* 0C077DA8 mov #imm,Rn */
	IF(0x0C077DAAu); r9 = MACL;  /* 0C077DAA sts macl,Rn */
	IF(0x0C077DACu); MACL = r10 * r3;  /* 0C077DAC mul.l Rm,Rn */
	r0 = 0x340u; UPD(0x0C077DB0u, 5);  /* 0C077DAE mov.w @(disp,pc),Rn */
	IF(0x0C077DB0u); r7 = MACL;  /* 0C077DB0 sts macl,Rn */
	IF(0x0C077DB2u); MACL = r13 * r8;  /* 0C077DB2 mul.l Rm,Rn */
	r2 = 0xC28EDFCu; UPD(0x0C077DB6u, 4);  /* 0C077DB4 mov.l @(disp,pc),Rn */
	r9 += r7;  /* 0C077DB6 add Rm,Rn */
	IF(0x0C077DB8u); r8 = MACL;  /* 0C077DB8 sts macl,Rn */
	IF(0x0C077DBAu); MACL = r10 * r0;  /* 0C077DBA mul.l Rm,Rn */
	r12 = 0xC2974C8u; UPD(0x0C077DBEu, 5);  /* 0C077DBC mov.l @(disp,pc),Rn */
	r13 += 0x7u;  /* 0C077DBE add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C077DC2u, 2);  /* 0C077DC0 mov.w @Rm,Rn */
	r9 += r12;  /* 0C077DC2 add Rm,Rn */
	IF(0x0C077DC4u); r7 = MACL;  /* 0C077DC4 sts macl,Rn */
	IF(0x0C077DC6u); MACL = r5 * r4;  /* 0C077DC6 mul.l Rm,Rn */
	r6 = r9;  /* 0C077DC8 mov Rm,Rn */
	r6 += 0x24u;  /* 0C077DCA add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r6); UPD(0x0C077DCEu, 7);  /* 0C077DCC mov.w @Rm,Rn */
	IF(0x0C077DCEu); r5 = MACL;  /* 0C077DCE sts macl,Rn */
	W32(r14, r6); UPD(0x0C077DD2u, 2);  /* 0C077DD0 mov.l Rm,@Rn */
	r0 = r8;  /* 0C077DD2 mov Rm,Rn */
	r6 = 0xC2380D0u; UPD(0x0C077DD6u, 2);  /* 0C077DD4 mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C077DD6 add Rm,Rn */
	r10 = 0xC062780u; UPD(0x0C077DDAu, 2);  /* 0C077DD8 mov.l @(disp,pc),Rn */
	r0 += r7;  /* 0C077DDA add Rm,Rn */
	r8 += r7;  /* 0C077DDC add Rm,Rn */
	r3 = 0xC8000000u; UPD(0x0C077DE0u, 3);  /* 0C077DDE mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C077DE0 add Rm,Rn */
	r0 += r5;  /* 0C077DE2 add Rm,Rn */
	IF(0x0C077DE4u); W32(r0 + r6, r3); UPD(0x0C077DE6u, 3);  /* 0C077DE4 mov.l Rm,@(r0,Rn) */
	r4 = 0x4u;  /* 0C077DE6 mov #imm,Rn */
	IF(0x0C077DE8u); { u32 t_ = r10; PR = 0x0C077DECu; W32(r8 + 0x4u, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C077DECu); }  /* 0C077DE8 jsr @Rn */
L_0C077DEC: BLKS(0x0C077DECu);
	r0 += 0x1u;  /* 0C077DEC add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C077DF0u, 2);  /* 0C077DEE mov.l Rm,@(disp,Rn) */
	r12 += 0x4u;  /* 0C077DF0 add #imm,Rn */
	r0 = r12;  /* 0C077DF2 mov Rm,Rn */
	IF(0x0C077DF4u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C077DF4 shar Rn */
	IF(0x0C077DF6u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C077DF6 shar Rn */
	IF(0x0C077DF8u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C077DF8 shar Rn */
	r0 &= 0x3Fu;  /* 0C077DFA and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C077DFEu, 7);  /* 0C077DFC mov.l Rm,@(disp,Rn) */
	r12 += 0xFFFFFFFCu;  /* 0C077DFE add #imm,Rn */
	r8 += 0x2Cu;  /* 0C077E00 add #imm,Rn */
	W16(r8, r12); UPD(0x0C077E04u, 3);  /* 0C077E02 mov.w Rm,@Rn */
	r13 += 0xFFFFFFF9u;  /* 0C077E04 add #imm,Rn */
	r4 = 0x70000u; UPD(0x0C077E08u, 2);  /* 0C077E06 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFD4u;  /* 0C077E08 add #imm,Rn */
	r10 = 0xC069B20u; UPD(0x0C077E0Cu, 2);  /* 0C077E0A mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r4); UPD(0x0C077E0Eu, 1);  /* 0C077E0C mov.l Rm,@(disp,Rn) */
	r5 = 0xD0000u; UPD(0x0C077E10u, 1);  /* 0C077E0E mov.l @(disp,pc),Rn */
	IF(0x0C077E10u); { u32 t_ = r10; PR = 0x0C077E14u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C077E14u); }  /* 0C077E10 jsr @Rn */
L_0C077E14: BLKS(0x0C077E14u);
	r2 = R32(r9 + 0x14u); UPD(0x0C077E16u, 1);  /* 0C077E14 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C077E16 mov Rm,Rn */
	r3 = 0xC069AF0u; UPD(0x0C077E1Au, 2);  /* 0C077E18 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C077E1A add Rm,Rn */
	r10 = 0xFFFD0000u; UPD(0x0C077E1Eu, 2);  /* 0C077E1C mov.l @(disp,pc),Rn */
	r5 = 0x120000u; UPD(0x0C077E20u, 1);  /* 0C077E1E mov.l @(disp,pc),Rn */
	r2 += r10;  /* 0C077E20 add Rm,Rn */
	IF(0x0C077E22u); { u32 t_ = r3; PR = 0x0C077E26u; W32(r8 + 0x10u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C077E26u); }  /* 0C077E22 jsr @Rn */
L_0C077E26: BLKS(0x0C077E26u);
	r5 = R32(r9 + 0x18u); UPD(0x0C077E28u, 1);  /* 0C077E26 mov.l @(disp,Rm),Rn */
	r7 = 0xC069B20u; UPD(0x0C077E2Au, 1);  /* 0C077E28 mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C077E2A add Rm,Rn */
	W32(r8 + 0x14u, r5); UPD(0x0C077E2Eu, 2);  /* 0C077E2C mov.l Rm,@(disp,Rn) */
	r5 = 0x70000u; UPD(0x0C077E30u, 1);  /* 0C077E2E mov.l @(disp,pc),Rn */
	IF(0x0C077E30u); { u32 t_ = r7; PR = 0x0C077E34u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C077E34u); }  /* 0C077E30 jsr @Rn */
L_0C077E34: BLKS(0x0C077E34u);
	r6 = 0xC069AF0u; UPD(0x0C077E36u, 1);  /* 0C077E34 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C077E36 mov Rm,Rn */
	r5 = 0x70000u; UPD(0x0C077E3Au, 2);  /* 0C077E38 mov.l @(disp,pc),Rn */
	IF(0x0C077E3Au); { u32 t_ = r6; PR = 0x0C077E3Eu; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C077E3Eu); }  /* 0C077E3A jsr @Rn */
L_0C077E3E: BLKS(0x0C077E3Eu);
	W32(r8 + 0x1Cu, r0); UPD(0x0C077E40u, 1);  /* 0C077E3E mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C077E40 mov Rm,Rn */
	r0 = 0x808080u; UPD(0x0C077E44u, 2);  /* 0C077E42 mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r11); UPD(0x0C077E46u, 1);  /* 0C077E44 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C077E48u, 1);  /* 0C077E46 mov.l Rm,@(disp,Rn) */
	r12 = 0xC0C20A0u; UPD(0x0C077E4Au, 1);  /* 0C077E48 mov.l @(disp,pc),Rn */
	r8 = 0xC0C2360u; UPD(0x0C077E4Cu, 1);  /* 0C077E4A mov.l @(disp,pc),Rn */
	IF(0x0C077E4Cu); { u32 t_ = r12; PR = 0x0C077E50u; r5 = 0x51u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C077E50u); }  /* 0C077E4C jsr @Rn */
L_0C077E50: BLKS(0x0C077E50u);
	r12 = 0xC069AF0u; UPD(0x0C077E52u, 1);  /* 0C077E50 mov.l @(disp,pc),Rn */
	IF(0x0C077E52u); { u32 t_ = r8; PR = 0x0C077E56u; IF(0x0C077E54u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C077E56u); }  /* 0C077E52 jsr @Rn */
L_0C077E56: BLKS(0x0C077E56u);
	r1 = R32(r14); UPD(0x0C077E58u, 1);  /* 0C077E56 mov.l @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C077E58 and #imm,r0 */
	r13 = (u32)(s32)(s16)R16(r1); UPD(0x0C077E5Cu, 2);  /* 0C077E5A mov.w @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C077E5C add #imm,Rn */
	r4 = 0xF0u; UPD(0x0C077E60u, 2);  /* 0C077E5E mov.w @(disp,pc),Rn */
	r0 += r13;  /* 0C077E60 add Rm,Rn */
	r2 = 0xC069B20u; UPD(0x0C077E64u, 2);  /* 0C077E62 mov.l @(disp,pc),Rn */
	r0 += r4;  /* 0C077E64 add Rm,Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C077E66 exts.w Rm,Rn */
	r5 = 0x78000u; UPD(0x0C077E6Au, 3);  /* 0C077E68 mov.l @(disp,pc),Rn */
	IF(0x0C077E6Au); { u32 t_ = r2; PR = 0x0C077E6Eu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C077E6Eu); }  /* 0C077E6A jsr @Rn */
L_0C077E6E: BLKS(0x0C077E6Eu);
	r3 = R32(r9 + 0x14u); UPD(0x0C077E70u, 1);  /* 0C077E6E mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C077E70 mov Rm,Rn */
	r3 += r0;  /* 0C077E72 add Rm,Rn */
	r3 += r10;  /* 0C077E74 add Rm,Rn */
	r5 = 0xA0000u; UPD(0x0C077E78u, 4);  /* 0C077E76 mov.l @(disp,pc),Rn */
	IF(0x0C077E78u); { u32 t_ = r12; PR = 0x0C077E7Cu; W32(r14 + 0x4u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C077E7Cu); }  /* 0C077E78 jsr @Rn */
L_0C077E7C: BLKS(0x0C077E7Cu);
	r13 = R32(r9 + 0x18u); UPD(0x0C077E7Eu, 1);  /* 0C077E7C mov.l @(disp,Rm),Rn */
	r5 = 0x14u;  /* 0C077E7E mov #imm,Rn */
	r7 = 0xC069B20u; UPD(0x0C077E82u, 2);  /* 0C077E80 mov.l @(disp,pc),Rn */
	r13 += r0;  /* 0C077E82 add Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C077E86u, 2);  /* 0C077E84 mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C077E86 mov Rm,Rn */
	r10 = 0x10000u; UPD(0x0C077E8Au, 2);  /* 0C077E88 mov.l @(disp,pc),Rn */
	W32(r15, r11); UPD(0x0C077E8Cu, 1);  /* 0C077E8A mov.l Rm,@Rn */
	IF(0x0C077E8Cu); { u32 t_ = r7; PR = 0x0C077E90u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C077E90u); }  /* 0C077E8C jsr @Rn */
L_0C077E90: BLKS(0x0C077E90u);
	r6 = 0xC069AF0u; UPD(0x0C077E92u, 1);  /* 0C077E90 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C077E92 mov Rm,Rn */
	r5 = r10;  /* 0C077E94 mov Rm,Rn */
	IF(0x0C077E96u); { u32 t_ = r6; PR = 0x0C077E9Au; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C077E9Au); }  /* 0C077E96 jsr @Rn */
L_0C077E9A: BLKS(0x0C077E9Au);
	r1 = 0x808080u; UPD(0x0C077E9Cu, 1);  /* 0C077E9A mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C077E9C mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C077EA0u, 2);  /* 0C077E9E mov.l Rm,@(disp,Rn) */
	r7 = r13;  /* 0C077EA0 mov Rm,Rn */
	W32(r15 + 0x10u, r1); UPD(0x0C077EA4u, 2);  /* 0C077EA2 mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C077EA6u, 1);  /* 0C077EA4 mov.l @Rm,Rn */
	r9 = 0xC0BEEF0u; UPD(0x0C077EA8u, 1);  /* 0C077EA6 mov.l @(disp,pc),Rn */
	IF(0x0C077EA8u); { u32 t_ = r9; PR = 0x0C077EACu; r6 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C077EACu); }  /* 0C077EA8 jsr @Rn */
L_0C077EAC: BLKS(0x0C077EACu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C077D74u, 3); goto L_0C077D74; }  /* 0C077EAC bra */
}

void blk_f_0C077F10(sh3_t *c)
{
	LOCALS;
L_0C077F10: BLKS(0x0C077F10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C077F12u, 1);  /* 0C077F10 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C077F12 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C077F16u, 2);  /* 0C077F14 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C077F18u, 1);  /* 0C077F16 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C077F1Au, 1);  /* 0C077F18 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C077F1Cu, 1);  /* 0C077F1A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C077F1Eu, 1);  /* 0C077F1C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C077F20u, 1);  /* 0C077F1E mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C077F20 exts.w Rm,Rn */
	r0 = 0x2A0u; UPD(0x0C077F24u, 2);  /* 0C077F22 mov.w @(disp,pc),Rn */
	IF(0x0C077F24u); r15 -= 4; W32(r15, PR); UPD(0x0C077F26u, 1);  /* 0C077F24 sts.l pr,@-Rn */
	IF(0x0C077F26u); MACL = r13 * r0;  /* 0C077F26 mul.l Rm,Rn */
	r15 += 0xFFFFFFE8u;  /* 0C077F28 add #imm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C077F2Cu, 4);  /* 0C077F2A mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C077F2C mov Rm,Rn */
	W32(r14, r5); UPD(0x0C077F30u, 2);  /* 0C077F2E mov.l Rm,@Rn */
	IF(0x0C077F30u); r0 = MACL;  /* 0C077F30 sts macl,Rn */
	r3 = 0x25Fu; UPD(0x0C077F34u, 2);  /* 0C077F32 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C077F34 add Rm,Rn */
	IF(0x0C077F36u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C077F38u, 2);  /* 0C077F36 mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C077F38 tst Rm,Rn */
	if (T) { UPD(0x0C077F44u, 4); goto L_0C077F44; }  /* 0C077F3A bt */
L_0C077F3C: BLKS(0x0C077F3Cu);
	r6 = 0x272u; UPD(0x0C077F3Eu, 1);  /* 0C077F3C mov.w @(disp,pc),Rn */
	IF(0x0C077F3Eu); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C077F40u, 1);  /* 0C077F3E mov.b @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C077F40 tst Rm,Rn */
	if (T) { UPD(0x0C077F70u, 4); goto L_0C077F70; }  /* 0C077F42 bt */
L_0C077F44: BLKS(0x0C077F44u);
	r14 += 0x18u;  /* 0C077F44 add #imm,Rn */
	UPD(0x0C077F46u, 1);
L_0C077F46: BLKS(0x0C077F46u);
	r15 = r14;  /* 0C077F46 mov Rm,Rn */
	IF(0x0C077F48u); PR = R32(r15); r15 += 4; UPD(0x0C077F4Au, 2);  /* 0C077F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C077F4Cu, 1);  /* 0C077F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C077F4Eu, 1);  /* 0C077F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C077F50u, 1);  /* 0C077F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C077F52u, 1);  /* 0C077F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C077F54u, 1);  /* 0C077F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C077F56u, 1);  /* 0C077F54 mov.l @Rm+,Rn */
	IF(0x0C077F56u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C077F56 rts */
L_0C077F70: BLKS(0x0C077F70u);
	r8 = 0xC0718C0u; UPD(0x0C077F72u, 1);  /* 0C077F70 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C077F72 mov Rm,Rn */
	r6 = 0x2u;  /* 0C077F74 mov #imm,Rn */
	IF(0x0C077F76u); { u32 t_ = r8; PR = 0x0C077F7Au; r7 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0718C0, 0x0C0718C0u, 0x0C077F7Au); }  /* 0C077F76 jsr @Rn */
L_0C077F7A: BLKS(0x0C077F7Au);
	T = (r0 & r0) == 0;  /* 0C077F7A tst Rm,Rn */
	if (T) { UPD(0x0C077F44u, 4); goto L_0C077F44; }  /* 0C077F7C bt */
L_0C077F7E: BLKS(0x0C077F7Eu);
	r4 = 0x30u;  /* 0C077F7E mov #imm,Rn */
	r2 = 0x90u; UPD(0x0C077F82u, 2);  /* 0C077F80 mov.w @(disp,pc),Rn */
	IF(0x0C077F82u); MACL = r13 * r2;  /* 0C077F82 mul.l Rm,Rn */
	r7 = R32(r14); UPD(0x0C077F86u, 3);  /* 0C077F84 mov.l @Rm,Rn */
	r11 = 0x0u;  /* 0C077F86 mov #imm,Rn */
	IF(0x0C077F88u); r0 = MACL;  /* 0C077F88 sts macl,Rn */
	IF(0x0C077F8Au); MACL = r7 * r4;  /* 0C077F8A mul.l Rm,Rn */
	r10 = 0x9C0u; UPD(0x0C077F8Eu, 5);  /* 0C077F8C mov.w @(disp,pc),Rn */
	IF(0x0C077F8Eu); r3 = MACL;  /* 0C077F8E sts macl,Rn */
	IF(0x0C077F90u); MACL = r13 * r10;  /* 0C077F90 mul.l Rm,Rn */
	r5 = 0x340u; UPD(0x0C077F94u, 4);  /* 0C077F92 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C077F94 add Rm,Rn */
	IF(0x0C077F96u); r9 = MACL;  /* 0C077F96 sts macl,Rn */
	r12 = 0xC2974C8u; UPD(0x0C077F9Au, 3);  /* 0C077F98 mov.l @(disp,pc),Rn */
	IF(0x0C077F9Au); MACL = r7 * r5;  /* 0C077F9A mul.l Rm,Rn */
	r0 += r12;  /* 0C077F9C add Rm,Rn */
	r6 = 0xC28EDFCu; UPD(0x0C077FA0u, 4);  /* 0C077F9E mov.l @(disp,pc),Rn */
	r0 += 0x24u;  /* 0C077FA0 add #imm,Rn */
	IF(0x0C077FA2u); r1 = MACL;  /* 0C077FA2 sts macl,Rn */
	W32(r14 + 0x8u, r6); UPD(0x0C077FA6u, 3);  /* 0C077FA4 mov.l Rm,@(disp,Rn) */
	r12 = (u32)(s32)(s16)R16(r0); UPD(0x0C077FA8u, 1);  /* 0C077FA6 mov.w @Rm,Rn */
	W32(r14 + 0x4u, r11); UPD(0x0C077FAAu, 1);  /* 0C077FA8 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r9); UPD(0x0C077FACu, 1);  /* 0C077FAA mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x14u, r1); UPD(0x0C077FAEu, 1);  /* 0C077FAC mov.l Rm,@(disp,Rn) */
	IF(0x0C077FAEu); ;  /* 0C077FAE nop */
	UPD(0x0C077FB0u, 1);
L_0C077FB0: BLKS(0x0C077FB0u);
	r0 = R32(r14 + 0x8u); UPD(0x0C077FB2u, 1);  /* 0C077FB0 mov.l @(disp,Rm),Rn */
	r5 = 0x34u;  /* 0C077FB2 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r0); r0 += 2; r10 = v_; } UPD(0x0C077FB6u, 2);  /* 0C077FB4 mov.w @Rm+,Rn */
	r3 = 0x3u;  /* 0C077FB6 mov #imm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C077FBAu, 2);  /* 0C077FB8 mov.l Rm,@(disp,Rn) */
	IF(0x0C077FBAu); MACL = r10 * r5;  /* 0C077FBA mul.l Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C077FBEu, 3);  /* 0C077FBC mov.l @(disp,Rm),Rn */
	r12 += 0x4u;  /* 0C077FBE add #imm,Rn */
	r8 = 0xC182844u; UPD(0x0C077FC2u, 2);  /* 0C077FC0 mov.l @(disp,pc),Rn */
	IF(0x0C077FC2u); r0 <<= 2;  /* 0C077FC2 shll2 Rn */
	IF(0x0C077FC4u); r11 = R32(r0 + r8); UPD(0x0C077FC6u, 2);  /* 0C077FC4 mov.l @(r0,Rm),Rn */
	IF(0x0C077FC6u); r6 = MACL;  /* 0C077FC6 sts macl,Rn */
	r1 = R32(r14 + 0x14u); UPD(0x0C077FCAu, 2);  /* 0C077FC8 mov.l @(disp,Rm),Rn */
	r10 = 0x30u;  /* 0C077FCA mov #imm,Rn */
	r9 = R32(r14 + 0x10u); UPD(0x0C077FCEu, 2);  /* 0C077FCC mov.l @(disp,Rm),Rn */
	r7 = 0xC8800000u; UPD(0x0C077FD0u, 1);  /* 0C077FCE mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C077FD0 add Rm,Rn */
	r0 = 0xC2380D0u; UPD(0x0C077FD4u, 2);  /* 0C077FD2 mov.l @(disp,pc),Rn */
	r9 += r6;  /* 0C077FD4 add Rm,Rn */
	IF(0x0C077FD6u); W32(r0 + r9, r7); UPD(0x0C077FD8u, 2);  /* 0C077FD6 mov.l Rm,@(r0,Rn) */
	r2 = R32(r14 + 0x10u); UPD(0x0C077FDAu, 1);  /* 0C077FD8 mov.l @(disp,Rm),Rn */
	IF(0x0C077FDAu); r9 = MACL;  /* 0C077FDA sts macl,Rn */
	r4 = R32(r14 + 0x14u); UPD(0x0C077FDEu, 2);  /* 0C077FDC mov.l @(disp,Rm),Rn */
	r9 += r2;  /* 0C077FDE add Rm,Rn */
	r8 = 0xC062780u; UPD(0x0C077FE2u, 2);  /* 0C077FE0 mov.l @(disp,pc),Rn */
	r9 += r4;  /* 0C077FE2 add Rm,Rn */
	r9 += r0;  /* 0C077FE4 add Rm,Rn */
	W32(r9 + 0x4u, r3); UPD(0x0C077FE8u, 3);  /* 0C077FE6 mov.l Rm,@(disp,Rn) */
	r4 = 0x4u;  /* 0C077FE8 mov #imm,Rn */
	IF(0x0C077FEAu); { u32 t_ = r8; PR = 0x0C077FEEu; W32(r14 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C077FEEu); }  /* 0C077FEA jsr @Rn */
L_0C077FEE: BLKS(0x0C077FEEu);
	r0 += 0x1u;  /* 0C077FEE add #imm,Rn */
	W32(r9 + 0x8u, r0); UPD(0x0C077FF2u, 2);  /* 0C077FF0 mov.l Rm,@(disp,Rn) */
	r0 = r12;  /* 0C077FF2 mov Rm,Rn */
	IF(0x0C077FF4u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C077FF4 shar Rn */
	IF(0x0C077FF6u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C077FF6 shar Rn */
	IF(0x0C077FF8u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C077FF8 shar Rn */
	r0 &= 0x3Fu;  /* 0C077FFA and #imm,r0 */
	W32(r9 + 0xCu, r0); UPD(0x0C077FFEu, 6);  /* 0C077FFC mov.l Rm,@(disp,Rn) */
	r12 += 0xFFFFFFFCu;  /* 0C077FFE add #imm,Rn */
	r9 += 0x2Cu;  /* 0C078000 add #imm,Rn */
	r1 = 0x90u; UPD(0x0C078004u, 3);  /* 0C078002 mov.w @(disp,pc),Rn */
	W16(r9, r12); UPD(0x0C078006u, 1);  /* 0C078004 mov.w Rm,@Rn */
	IF(0x0C078006u); MACL = r13 * r1;  /* 0C078006 mul.l Rm,Rn */
	r11 = 0x30000u; UPD(0x0C07800Au, 3);  /* 0C078008 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFD4u;  /* 0C07800A add #imm,Rn */
	W32(r9 + 0x20u, r11); UPD(0x0C07800Eu, 2);  /* 0C07800C mov.l Rm,@(disp,Rn) */
	r0 = R32(r14); UPD(0x0C078010u, 1);  /* 0C07800E mov.l @Rm,Rn */
	IF(0x0C078010u); r11 = MACL;  /* 0C078010 sts macl,Rn */
	IF(0x0C078012u); MACL = r0 * r10;  /* 0C078012 mul.l Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C078016u, 4);  /* 0C078014 mov.l @(disp,pc),Rn */
	IF(0x0C078016u); r5 = MACL;  /* 0C078016 sts macl,Rn */
	r11 += r5;  /* 0C078018 add Rm,Rn */
	r5 = 0x140000u; UPD(0x0C07801Cu, 3);  /* 0C07801A mov.l @(disp,pc),Rn */
	IF(0x0C07801Cu); { u32 t_ = r8; PR = 0x0C078020u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C078020u); }  /* 0C07801C jsr @Rn */
L_0C078020: BLKS(0x0C078020u);
	r7 = 0xC069AF0u; UPD(0x0C078022u, 1);  /* 0C078020 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C078022 mov Rm,Rn */
	r4 = r12;  /* 0C078024 mov Rm,Rn */
	IF(0x0C078026u); { u32 t_ = r7; PR = 0x0C07802Au; r5 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07802Au); }  /* 0C078026 jsr @Rn */
L_0C07802A: BLKS(0x0C07802Au);
	r8 -= r0;  /* 0C07802A sub Rm,Rn */
	r1 = r8;  /* 0C07802C mov Rm,Rn */
	r10 = 0xC2974C8u; UPD(0x0C078030u, 3);  /* 0C07802E mov.l @(disp,pc),Rn */
	r1 += r1;  /* 0C078030 add Rm,Rn */
	r1 += r8;  /* 0C078032 add Rm,Rn */
	IF(0x0C078034u); T = (s32)r1 >= 0;  /* 0C078034 cmp/pz Rn */
	{ u32 c_ = !T; r10 += r11; /* slot add Rm,Rn */ if (c_) { UPD(0x0C078110u, 6); goto L_0C078110; } UPD(0x0C07803Au, 1); goto L_0C07803A; }  /* 0C078036 bf/s */
L_0C07803A: BLKS(0x0C07803Au);
	r0 = R32(r10 + 0x14u); UPD(0x0C07803Cu, 1);  /* 0C07803A mov.l @(disp,Rm),Rn */
	IF(0x0C07803Cu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C07803C shar Rn */
	IF(0x0C07803Eu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C07803E shar Rn */
	r2 = 0xC069AF0u; UPD(0x0C078042u, 3);  /* 0C078040 mov.l @(disp,pc),Rn */
	r0 += r1;  /* 0C078042 add Rm,Rn */
	r4 = 0x10000u; UPD(0x0C078046u, 2);  /* 0C078044 mov.l @(disp,pc),Rn */
	r0 += r4;  /* 0C078046 add Rm,Rn */
	r4 = r12;  /* 0C078048 mov Rm,Rn */
	r5 = 0x140000u; UPD(0x0C07804Cu, 3);  /* 0C07804A mov.l @(disp,pc),Rn */
	IF(0x0C07804Cu); { u32 t_ = r2; PR = 0x0C078050u; W32(r9 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C078050u); }  /* 0C07804C jsr @Rn */
L_0C078050: BLKS(0x0C078050u);
	r6 = 0xC069B20u; UPD(0x0C078052u, 1);  /* 0C078050 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C078052 mov Rm,Rn */
	r8 = R32(r10 + 0x18u); UPD(0x0C078056u, 2);  /* 0C078054 mov.l @(disp,Rm),Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C078058u, 1);  /* 0C078056 mov.l @(disp,Rm),Rn */
	IF(0x0C078058u); { u32 t_ = r6; PR = 0x0C07805Cu; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07805Cu); }  /* 0C078058 jsr @Rn */
L_0C07805C: BLKS(0x0C07805Cu);
	r8 += r0;  /* 0C07805C add Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C078060u, 2);  /* 0C07805E mov.l @(disp,Rm),Rn */
	r3 = 0xC18284Cu; UPD(0x0C078062u, 1);  /* 0C078060 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C078062 add Rm,Rn */
	W32(r9 + 0x14u, r8); UPD(0x0C078066u, 2);  /* 0C078064 mov.l Rm,@(disp,Rn) */
	IF(0x0C078066u); r8 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C078068u, 1);  /* 0C078066 mov.w @(r0,Rm),Rn */
	r1 = 0xC069B20u; UPD(0x0C07806Au, 1);  /* 0C078068 mov.l @(disp,pc),Rn */
	r8 += r12;  /* 0C07806A add Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C07806Eu, 2);  /* 0C07806C mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r8;  /* 0C07806E exts.w Rm,Rn */
	r5 = 0x30000u; UPD(0x0C078072u, 2);  /* 0C078070 mov.l @(disp,pc),Rn */
	IF(0x0C078072u); { u32 t_ = r1; PR = 0x0C078076u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C078076u); }  /* 0C078072 jsr @Rn */
L_0C078076: BLKS(0x0C078076u);
	r4 = r12;  /* 0C078076 mov Rm,Rn */
	r5 = 0x30000u; UPD(0x0C07807Au, 2);  /* 0C078078 mov.l @(disp,pc),Rn */
	IF(0x0C07807Au); { u32 t_ = r10; PR = 0x0C07807Eu; W32(r9 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07807Eu); }  /* 0C07807A jsr @Rn */
L_0C07807E: BLKS(0x0C07807Eu);
	r6 = R32(r14 + 0x4u); UPD(0x0C078080u, 1);  /* 0C07807E mov.l @(disp,Rm),Rn */
	r5 = 0x0u;  /* 0C078080 mov #imm,Rn */
	r6 += 0x1u;  /* 0C078082 add #imm,Rn */
	r2 = (u32)(s32)(s16)r6;  /* 0C078084 exts.w Rm,Rn */
	W32(r14 + 0x4u, r2); UPD(0x0C078088u, 4);  /* 0C078086 mov.l Rm,@(disp,Rn) */
	r3 = 0x1u;  /* 0C078088 mov #imm,Rn */
	r7 = 0x808080u; UPD(0x0C07808Cu, 2);  /* 0C07808A mov.l @(disp,pc),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C07808Eu, 1);  /* 0C07808C mov.l @(disp,Rm),Rn */
	W32(r9 + 0x1Cu, r0); UPD(0x0C078090u, 1);  /* 0C07808E mov.l Rm,@(disp,Rn) */
	T = (s32)r4 > (s32)r3;  /* 0C078090 cmp/gt Rm,Rn */
	W32(r9 + 0x24u, r5); UPD(0x0C078094u, 2);  /* 0C078092 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r9 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C077FB0u, 3); goto L_0C077FB0; } UPD(0x0C078098u, 1); goto L_0C078098; }  /* 0C078094 bf/s */
L_0C078098: BLKS(0x0C078098u);
	r8 = 0xC0C20A0u; UPD(0x0C07809Au, 1);  /* 0C078098 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C07809A mov Rm,Rn */
	IF(0x0C07809Cu); { u32 t_ = r8; PR = 0x0C0780A0u; r5 = 0x4Eu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C0780A0u); }  /* 0C07809C jsr @Rn */
L_0C0780A0: BLKS(0x0C0780A0u);
	r12 = 0xC0C2360u; UPD(0x0C0780A2u, 1);  /* 0C0780A0 mov.l @(disp,pc),Rn */
	r8 = 0xC2974C8u; UPD(0x0C0780A4u, 1);  /* 0C0780A2 mov.l @(disp,pc),Rn */
	IF(0x0C0780A4u); { u32 t_ = r12; PR = 0x0C0780A8u; r8 += r11; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0780A8u); }  /* 0C0780A4 jsr @Rn */
L_0C0780A8: BLKS(0x0C0780A8u);
	r8 += 0x24u;  /* 0C0780A8 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C0780ACu, 2);  /* 0C0780AA mov.w @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0780AC and #imm,r0 */
	r9 = 0xF0u; UPD(0x0C0780B0u, 2);  /* 0C0780AE mov.w @(disp,pc),Rn */
	r0 += r6;  /* 0C0780B0 add Rm,Rn */
	r11 = 0xC069B20u; UPD(0x0C0780B4u, 2);  /* 0C0780B2 mov.l @(disp,pc),Rn */
	r0 += r9;  /* 0C0780B4 add Rm,Rn */
	r13 = 0xC0000u; UPD(0x0C0780B8u, 2);  /* 0C0780B6 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0780B8 exts.w Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C0780BA add #imm,Rn */
	r8 += 0xFFFFFFDCu;  /* 0C0780BC add #imm,Rn */
	r4 = r12;  /* 0C0780BE mov Rm,Rn */
	IF(0x0C0780C0u); { u32 t_ = r11; PR = 0x0C0780C4u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 6); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0780C4u); }  /* 0C0780C0 jsr @Rn */
L_0C0780C4: BLKS(0x0C0780C4u);
	r9 = R32(r8 + 0x14u); UPD(0x0C0780C6u, 1);  /* 0C0780C4 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C0780C6 mov Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C0780CAu, 2);  /* 0C0780C8 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C0780CA add Rm,Rn */
	r3 = 0x10000u; UPD(0x0C0780CEu, 2);  /* 0C0780CC mov.l @(disp,pc),Rn */
	r5 = r13;  /* 0C0780CE mov Rm,Rn */
	IF(0x0C0780D0u); { u32 t_ = r10; PR = 0x0C0780D4u; r9 += r3; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0780D4u); }  /* 0C0780D0 jsr @Rn */
L_0C0780D4: BLKS(0x0C0780D4u);
	r13 = R32(r8 + 0x18u); UPD(0x0C0780D6u, 1);  /* 0C0780D4 mov.l @(disp,Rm),Rn */
	r5 = 0x0u;  /* 0C0780D6 mov #imm,Rn */
	W32(r15, r5); UPD(0x0C0780DAu, 2);  /* 0C0780D8 mov.l Rm,@Rn */
	r7 = 0x14u;  /* 0C0780DA mov #imm,Rn */
	r13 += r0;  /* 0C0780DC add Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0780E0u, 3);  /* 0C0780DE mov.l Rm,@(disp,Rn) */
	r5 = 0x10000u; UPD(0x0C0780E2u, 1);  /* 0C0780E0 mov.l @(disp,pc),Rn */
	IF(0x0C0780E2u); { u32 t_ = r11; PR = 0x0C0780E6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0780E6u); }  /* 0C0780E2 jsr @Rn */
L_0C0780E6: BLKS(0x0C0780E6u);
	r11 = 0xC069AF0u; UPD(0x0C0780E8u, 1);  /* 0C0780E6 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0780E8 mov Rm,Rn */
	r5 = 0x10000u; UPD(0x0C0780ECu, 2);  /* 0C0780EA mov.l @(disp,pc),Rn */
	IF(0x0C0780ECu); { u32 t_ = r11; PR = 0x0C0780F0u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0780F0u); }  /* 0C0780EC jsr @Rn */
L_0C0780F0: BLKS(0x0C0780F0u);
	r12 = 0x808080u; UPD(0x0C0780F2u, 1);  /* 0C0780F0 mov.l @(disp,pc),Rn */
	r7 = r13;  /* 0C0780F2 mov Rm,Rn */
	r13 = 0xC0BEEF0u; UPD(0x0C0780F6u, 2);  /* 0C0780F4 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0780F6 mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0780FAu, 2);  /* 0C0780F8 mov.l Rm,@(disp,Rn) */
	r6 = r9;  /* 0C0780FA mov Rm,Rn */
	W32(r15 + 0x10u, r12); UPD(0x0C0780FEu, 2);  /* 0C0780FC mov.l Rm,@(disp,Rn) */
	IF(0x0C0780FEu); { u32 t_ = r13; PR = 0x0C078102u; r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C078102u); }  /* 0C0780FE jsr @Rn */
L_0C078102: BLKS(0x0C078102u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C077F46u, 3); goto L_0C077F46; }  /* 0C078102 bra */
L_0C078110: BLKS(0x0C078110u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C07803Au, 3); goto L_0C07803A; }  /* 0C078110 bra */
}

void blk_f_0C078170(sh3_t *c)
{
	LOCALS;
L_0C078170: BLKS(0x0C078170u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C078172u, 1);  /* 0C078170 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C078174u, 1);  /* 0C078172 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C078176u, 1);  /* 0C078174 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C078178u, 1);  /* 0C078176 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07817Au, 1);  /* 0C078178 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C07817A exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07817Eu, 2);  /* 0C07817C mov.l Rm,@-Rn */
	r0 = 0x2A0u; UPD(0x0C078180u, 1);  /* 0C07817E mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C078180 exts.w Rm,Rn */
	IF(0x0C078182u); MACL = r13 * r0;  /* 0C078182 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C078186u, 4);  /* 0C078184 mov.l Rm,@-Rn */
	r2 = 0xC29D1D8u; UPD(0x0C078188u, 1);  /* 0C078186 mov.l @(disp,pc),Rn */
	IF(0x0C078188u); r0 = MACL;  /* 0C078188 sts macl,Rn */
	IF(0x0C07818Au); r15 -= 4; W32(r15, PR); UPD(0x0C07818Cu, 2);  /* 0C07818A sts.l pr,@-Rn */
	r0 += r2;  /* 0C07818C add Rm,Rn */
	r3 = 0x25Fu; UPD(0x0C078190u, 2);  /* 0C07818E mov.w @(disp,pc),Rn */
	IF(0x0C078190u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C078192u, 1);  /* 0C078190 mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C078192 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0781A0u, 4); goto L_0C0781A0; } goto L_0C078198; }  /* 0C078194 bt/s */
L_0C078198: BLKS(0x0C078198u);
	r4 = 0x272u; UPD(0x0C07819Au, 2);  /* 0C078198 mov.w @(disp,pc),Rn */
	IF(0x0C07819Au); r12 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C07819Cu, 1);  /* 0C07819A mov.b @(r0,Rm),Rn */
	T = (r12 & r12) == 0;  /* 0C07819C tst Rm,Rn */
	if (T) { UPD(0x0C0781C0u, 4); goto L_0C0781C0; }  /* 0C07819E bt */
L_0C0781A0: BLKS(0x0C0781A0u);
	r15 = r14;  /* 0C0781A0 mov Rm,Rn */
	IF(0x0C0781A2u); PR = R32(r15); r15 += 4; UPD(0x0C0781A4u, 2);  /* 0C0781A2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0781A6u, 1);  /* 0C0781A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0781A8u, 1);  /* 0C0781A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0781AAu, 1);  /* 0C0781A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0781ACu, 1);  /* 0C0781AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0781AEu, 1);  /* 0C0781AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0781B0u, 1);  /* 0C0781AE mov.l @Rm+,Rn */
	IF(0x0C0781B0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0781B0 rts */
L_0C0781C0: BLKS(0x0C0781C0u);
	r8 = 0xC0718C0u; UPD(0x0C0781C2u, 1);  /* 0C0781C0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0781C2 mov Rm,Rn */
	r5 = r11;  /* 0C0781C4 mov Rm,Rn */
	r6 = 0x1u;  /* 0C0781C6 mov #imm,Rn */
	IF(0x0C0781C8u); { u32 t_ = r8; PR = 0x0C0781CCu; r7 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0718C0, 0x0C0718C0u, 0x0C0781CCu); }  /* 0C0781C8 jsr @Rn */
L_0C0781CC: BLKS(0x0C0781CCu);
	T = (r0 & r0) == 0;  /* 0C0781CC tst Rm,Rn */
	if (T) { UPD(0x0C0781A0u, 4); goto L_0C0781A0; }  /* 0C0781CE bt */
L_0C0781D0: BLKS(0x0C0781D0u);
	r3 = 0x30u;  /* 0C0781D0 mov #imm,Rn */
	r10 = 0x90u; UPD(0x0C0781D4u, 2);  /* 0C0781D2 mov.w @(disp,pc),Rn */
	IF(0x0C0781D4u); MACL = r13 * r10;  /* 0C0781D4 mul.l Rm,Rn */
	r8 = 0x9C0u; UPD(0x0C0781D8u, 3);  /* 0C0781D6 mov.w @(disp,pc),Rn */
	r4 = 0x34u;  /* 0C0781D8 mov #imm,Rn */
	IF(0x0C0781DAu); r10 = MACL;  /* 0C0781DA sts macl,Rn */
	IF(0x0C0781DCu); MACL = r11 * r3;  /* 0C0781DC mul.l Rm,Rn */
	r0 = 0x340u; UPD(0x0C0781E0u, 5);  /* 0C0781DE mov.w @(disp,pc),Rn */
	IF(0x0C0781E0u); r7 = MACL;  /* 0C0781E0 sts macl,Rn */
	IF(0x0C0781E2u); MACL = r13 * r8;  /* 0C0781E2 mul.l Rm,Rn */
	r5 = 0xC28EDFCu; UPD(0x0C0781E6u, 4);  /* 0C0781E4 mov.l @(disp,pc),Rn */
	r10 += r7;  /* 0C0781E6 add Rm,Rn */
	IF(0x0C0781E8u); r8 = MACL;  /* 0C0781E8 sts macl,Rn */
	IF(0x0C0781EAu); MACL = r11 * r0;  /* 0C0781EA mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C0781EEu, 5);  /* 0C0781EC mov.w @Rm,Rn */
	IF(0x0C0781EEu); r7 = MACL;  /* 0C0781EE sts macl,Rn */
	IF(0x0C0781F0u); MACL = r6 * r4;  /* 0C0781F0 mul.l Rm,Rn */
	r0 = r8;  /* 0C0781F2 mov Rm,Rn */
	r0 += r7;  /* 0C0781F4 add Rm,Rn */
	IF(0x0C0781F6u); r3 = MACL;  /* 0C0781F6 sts macl,Rn */
	r5 = 0xC2380D0u; UPD(0x0C0781FAu, 7);  /* 0C0781F8 mov.l @(disp,pc),Rn */
	r0 += r3;  /* 0C0781FA add Rm,Rn */
	r2 = 0xC8000000u; UPD(0x0C0781FEu, 2);  /* 0C0781FC mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C0781FE add Rm,Rn */
	r9 = 0xC2974C8u; UPD(0x0C078202u, 2);  /* 0C078200 mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C078202 add Rm,Rn */
	IF(0x0C078204u); W32(r0 + r5, r2); UPD(0x0C078206u, 2);  /* 0C078204 mov.l Rm,@(r0,Rn) */
	r10 += r9;  /* 0C078206 add Rm,Rn */
	r11 = 0xC062780u; UPD(0x0C07820Au, 2);  /* 0C078208 mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C07820A add Rm,Rn */
	r10 += 0x24u;  /* 0C07820C add #imm,Rn */
	r0 = 0x2u;  /* 0C07820E mov #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C078212u, 4);  /* 0C078210 mov.w @Rm,Rn */
	r4 = 0x4u;  /* 0C078212 mov #imm,Rn */
	IF(0x0C078214u); { u32 t_ = r11; PR = 0x0C078218u; W32(r8 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C078218u); }  /* 0C078214 jsr @Rn */
L_0C078218: BLKS(0x0C078218u);
	r0 += 0x1u;  /* 0C078218 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C07821Cu, 2);  /* 0C07821A mov.l Rm,@(disp,Rn) */
	r10 += 0xFFFFFFDCu;  /* 0C07821C add #imm,Rn */
	r8 += 0x2Cu;  /* 0C07821E add #imm,Rn */
	W16(r8, r9); UPD(0x0C078222u, 3);  /* 0C078220 mov.w Rm,@Rn */
	r9 += 0x4u;  /* 0C078222 add #imm,Rn */
	r0 = r9;  /* 0C078224 mov Rm,Rn */
	IF(0x0C078226u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C078226 shar Rn */
	r6 = 0xC069B20u; UPD(0x0C07822Au, 4);  /* 0C078228 mov.l @(disp,pc),Rn */
	IF(0x0C07822Au); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07822A shar Rn */
	r11 = 0x80000u; UPD(0x0C07822Eu, 2);  /* 0C07822C mov.l @(disp,pc),Rn */
	IF(0x0C07822Eu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07822E shar Rn */
	r8 += 0xFFFFFFD4u;  /* 0C078230 add #imm,Rn */
	r9 += 0xFFFFFFFCu;  /* 0C078232 add #imm,Rn */
	r0 &= 0x3Fu;  /* 0C078234 and #imm,r0 */
	r4 = r9;  /* 0C078236 mov Rm,Rn */
	W32(r8 + 0x20u, r11); UPD(0x0C07823Au, 6);  /* 0C078238 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0000u; UPD(0x0C07823Cu, 1);  /* 0C07823A mov.l @(disp,pc),Rn */
	IF(0x0C07823Cu); { u32 t_ = r6; PR = 0x0C078240u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C078240u); }  /* 0C07823C jsr @Rn */
L_0C078240: BLKS(0x0C078240u);
	r4 = R32(r10 + 0x14u); UPD(0x0C078242u, 1);  /* 0C078240 mov.l @(disp,Rm),Rn */
	r1 = 0xFFFD0000u; UPD(0x0C078244u, 1);  /* 0C078242 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C078244 add Rm,Rn */
	r4 += r1;  /* 0C078246 add Rm,Rn */
	r2 = 0xC069AF0u; UPD(0x0C07824Au, 3);  /* 0C078248 mov.l @(disp,pc),Rn */
	W32(r8 + 0x10u, r4); UPD(0x0C07824Cu, 1);  /* 0C07824A mov.l Rm,@(disp,Rn) */
	r5 = 0x100000u; UPD(0x0C07824Eu, 1);  /* 0C07824C mov.l @(disp,pc),Rn */
	IF(0x0C07824Eu); { u32 t_ = r2; PR = 0x0C078252u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C078252u); }  /* 0C07824E jsr @Rn */
L_0C078252: BLKS(0x0C078252u);
	r3 = R32(r10 + 0x18u); UPD(0x0C078254u, 1);  /* 0C078252 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C078254 mov Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C078258u, 2);  /* 0C078256 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C078258 add Rm,Rn */
	W32(r8 + 0x14u, r3); UPD(0x0C07825Cu, 2);  /* 0C07825A mov.l Rm,@(disp,Rn) */
	IF(0x0C07825Cu); { u32 t_ = r10; PR = 0x0C078260u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C078260u); }  /* 0C07825C jsr @Rn */
L_0C078260: BLKS(0x0C078260u);
	r7 = 0xC069AF0u; UPD(0x0C078262u, 1);  /* 0C078260 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C078262 mov Rm,Rn */
	r5 = r11;  /* 0C078264 mov Rm,Rn */
	IF(0x0C078266u); { u32 t_ = r7; PR = 0x0C07826Au; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07826Au); }  /* 0C078266 jsr @Rn */
L_0C07826A: BLKS(0x0C07826Au);
	r5 = 0x808080u; UPD(0x0C07826Cu, 1);  /* 0C07826A mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C07826C mov Rm,Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C078270u, 2);  /* 0C07826E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x1Cu, r0); UPD(0x0C078272u, 1);  /* 0C078270 mov.l Rm,@(disp,Rn) */
	r5 = 0x4Du;  /* 0C078272 mov #imm,Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C078276u, 2);  /* 0C078274 mov.l Rm,@(disp,Rn) */
	r6 = 0xC0C20A0u; UPD(0x0C078278u, 1);  /* 0C078276 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C078278 mov Rm,Rn */
	IF(0x0C07827Au); PR = R32(r15); r15 += 4; UPD(0x0C07827Cu, 2);  /* 0C07827A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07827Eu, 1);  /* 0C07827C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C078280u, 1);  /* 0C07827E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C078282u, 1);  /* 0C078280 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078284u, 1);  /* 0C078282 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078286u, 1);  /* 0C078284 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078288u, 1);  /* 0C078286 mov.l @Rm+,Rn */
	IF(0x0C078288u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C078288 jmp @Rn */
}

void blk_f_0C0782D0(sh3_t *c)
{
	LOCALS;
L_0C0782D0: BLKS(0x0C0782D0u);
	IF(0x0C0782D0u); r12 = (u32)(s32)(s8)R8(r0 + r0); UPD(0x0C0782D2u, 1);  /* 0C0782D0 mov.b @(r0,Rm),Rn */
	W8(r0, r10); UPD(0x0C0782D4u, 1);  /* 0C0782D2 mov.b Rm,@Rn */
	IF(0x0C0782D4u); ;  /* 0C0782D4 nop */
	IF(0x0C0782D6u); ;  /* 0C0782D6 nop */
	IF(0x0C0782D8u); ;  /* 0C0782D8 nop */
	IF(0x0C0782DAu); ;  /* 0C0782DA nop */
	IF(0x0C0782DCu); ;  /* 0C0782DC nop */
	IF(0x0C0782DEu); ;  /* 0C0782DE nop */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0782E2u, 7);  /* 0C0782E0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0782E2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0782E6u, 2);  /* 0C0782E4 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C0782E6 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0782EAu, 2);  /* 0C0782E8 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0782ECu, 1);  /* 0C0782EA mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0782EEu, 1);  /* 0C0782EC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0782F0u, 1);  /* 0C0782EE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0782F2u, 1);  /* 0C0782F0 mov.l Rm,@-Rn */
	r0 = 0x2A0u; UPD(0x0C0782F4u, 1);  /* 0C0782F2 mov.w @(disp,pc),Rn */
	IF(0x0C0782F4u); r15 -= 4; W32(r15, PR); UPD(0x0C0782F6u, 1);  /* 0C0782F4 sts.l pr,@-Rn */
	IF(0x0C0782F6u); MACL = r4 * r0;  /* 0C0782F6 mul.l Rm,Rn */
	r15 += 0xFFFFFFE4u;  /* 0C0782F8 add #imm,Rn */
	r14 = r15;  /* 0C0782FA mov Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C0782FEu, 5);  /* 0C0782FC mov.l @(disp,pc),Rn */
	IF(0x0C0782FEu); r0 = MACL;  /* 0C0782FE sts macl,Rn */
	W32(r14, r4); UPD(0x0C078302u, 2);  /* 0C078300 mov.l Rm,@Rn */
	r0 += r2;  /* 0C078302 add Rm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C078306u, 2);  /* 0C078304 mov.l Rm,@(disp,Rn) */
	r3 = 0x25Fu; UPD(0x0C078308u, 1);  /* 0C078306 mov.w @(disp,pc),Rn */
	IF(0x0C078308u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07830Au, 1);  /* 0C078308 mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C07830A tst Rm,Rn */
	if (T) { UPD(0x0C078316u, 4); goto L_0C078316; }  /* 0C07830C bt */
L_0C07830E: BLKS(0x0C07830Eu);
	r7 = 0x272u; UPD(0x0C078310u, 1);  /* 0C07830E mov.w @(disp,pc),Rn */
	IF(0x0C078310u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C078312u, 1);  /* 0C078310 mov.b @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C078312 tst Rm,Rn */
	if (T) { UPD(0x0C078330u, 4); goto L_0C078330; }  /* 0C078314 bt */
L_0C078316: BLKS(0x0C078316u);
	r14 += 0x1Cu;  /* 0C078316 add #imm,Rn */
	r15 = r14;  /* 0C078318 mov Rm,Rn */
	IF(0x0C07831Au); PR = R32(r15); r15 += 4; UPD(0x0C07831Cu, 3);  /* 0C07831A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07831Eu, 1);  /* 0C07831C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C078320u, 1);  /* 0C07831E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C078322u, 1);  /* 0C078320 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078324u, 1);  /* 0C078322 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078326u, 1);  /* 0C078324 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078328u, 1);  /* 0C078326 mov.l @Rm+,Rn */
	IF(0x0C078328u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C078328 rts */
L_0C078330: BLKS(0x0C078330u);
	r8 = 0xC0718C0u; UPD(0x0C078332u, 1);  /* 0C078330 mov.l @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C078332 mov #imm,Rn */
	IF(0x0C078334u); { u32 t_ = r8; PR = 0x0C078338u; r7 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0718C0, 0x0C0718C0u, 0x0C078338u); }  /* 0C078334 jsr @Rn */
L_0C078338: BLKS(0x0C078338u);
	T = (r0 & r0) == 0;  /* 0C078338 tst Rm,Rn */
	if (T) { UPD(0x0C078316u, 4); goto L_0C078316; }  /* 0C07833A bt */
L_0C07833C: BLKS(0x0C07833Cu);
	r11 = R32(r14); UPD(0x0C07833Eu, 1);  /* 0C07833C mov.l @Rm,Rn */
	r3 = 0x0u;  /* 0C07833E mov #imm,Rn */
	r13 = 0x90u; UPD(0x0C078342u, 2);  /* 0C078340 mov.w @(disp,pc),Rn */
	IF(0x0C078342u); MACL = r11 * r13;  /* 0C078342 mul.l Rm,Rn */
	r10 = 0x9C0u; UPD(0x0C078346u, 3);  /* 0C078344 mov.w @(disp,pc),Rn */
	IF(0x0C078346u); r12 = MACL;  /* 0C078346 sts macl,Rn */
	IF(0x0C078348u); MACL = r11 * r10;  /* 0C078348 mul.l Rm,Rn */
	r4 = 0x340u; UPD(0x0C07834Cu, 4);  /* 0C07834A mov.w @(disp,pc),Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C07834Eu, 1);  /* 0C07834C mov.l @(disp,Rm),Rn */
	IF(0x0C07834Eu); r9 = MACL;  /* 0C07834E sts macl,Rn */
	IF(0x0C078350u); MACL = r5 * r4;  /* 0C078350 mul.l Rm,Rn */
	r2 = 0xC28EDFCu; UPD(0x0C078354u, 4);  /* 0C078352 mov.l @(disp,pc),Rn */
	IF(0x0C078354u); r1 = MACL;  /* 0C078354 sts macl,Rn */
	W32(r14 + 0xCu, r2); UPD(0x0C078358u, 2);  /* 0C078356 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r3); UPD(0x0C07835Au, 1);  /* 0C078358 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r12); UPD(0x0C07835Cu, 1);  /* 0C07835A mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x14u, r9); UPD(0x0C07835Eu, 1);  /* 0C07835C mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x18u, r1); UPD(0x0C078360u, 1);  /* 0C07835E mov.l Rm,@(disp,Rn) */
	r7 = R32(r14 + 0x4u); UPD(0x0C078362u, 1);  /* 0C078360 mov.l @(disp,Rm),Rn */
L_0C078362: BLKS(0x0C078362u);
	r10 = 0x30u;  /* 0C078362 mov #imm,Rn */
	r0 = R32(r14 + 0x8u); UPD(0x0C078366u, 2);  /* 0C078364 mov.l @(disp,Rm),Rn */
	IF(0x0C078366u); MACL = r7 * r10;  /* 0C078366 mul.l Rm,Rn */
	r6 = 0xC182850u; UPD(0x0C07836Au, 3);  /* 0C078368 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C07836A add Rm,Rn */
	r13 = 0xC18285Au; UPD(0x0C07836Eu, 2);  /* 0C07836C mov.l @(disp,pc),Rn */
	IF(0x0C07836Eu); r10 = MACL;  /* 0C07836E sts macl,Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C078372u, 2);  /* 0C078370 mov.l @(disp,Rm),Rn */
	IF(0x0C078372u); r12 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C078374u, 1);  /* 0C078372 mov.w @(r0,Rm),Rn */
	IF(0x0C078374u); r9 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C078376u, 1);  /* 0C078374 mov.w @(r0,Rm),Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C078378u, 1);  /* 0C078376 mov.l @(disp,Rm),Rn */
	r0 = 0x34u;  /* 0C078378 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r8 = v_; } UPD(0x0C07837Cu, 2);  /* 0C07837A mov.w @Rm+,Rn */
	r10 += r1;  /* 0C07837C add Rm,Rn */
	r2 = 0xC2974C8u; UPD(0x0C078380u, 2);  /* 0C07837E mov.l @(disp,pc),Rn */
	IF(0x0C078380u); MACL = r8 * r0;  /* 0C078380 mul.l Rm,Rn */
	r10 += r2;  /* 0C078382 add Rm,Rn */
	r5 = R32(r14 + 0x18u); UPD(0x0C078386u, 4);  /* 0C078384 mov.l @(disp,Rm),Rn */
	r10 += 0x24u;  /* 0C078386 add #imm,Rn */
	r7 = R32(r14 + 0x14u); UPD(0x0C07838Au, 2);  /* 0C078388 mov.l @(disp,Rm),Rn */
	IF(0x0C07838Au); r8 = MACL;  /* 0C07838A sts macl,Rn */
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C07838Eu, 2);  /* 0C07838C mov.w @Rm,Rn */
	r7 += r5;  /* 0C07838E add Rm,Rn */
	W32(r14 + 0xCu, r4); UPD(0x0C078392u, 2);  /* 0C078390 mov.l Rm,@(disp,Rn) */
	r7 += r8;  /* 0C078392 add Rm,Rn */
	r2 = R32(r14 + 0x14u); UPD(0x0C078396u, 2);  /* 0C078394 mov.l @(disp,Rm),Rn */
	r3 = r11;  /* 0C078396 mov Rm,Rn */
	r6 = R32(r14 + 0x18u); UPD(0x0C07839Au, 2);  /* 0C078398 mov.l @(disp,Rm),Rn */
	r8 += r2;  /* 0C07839A add Rm,Rn */
	r0 = 0xC2380D0u; UPD(0x0C07839Eu, 2);  /* 0C07839C mov.l @(disp,pc),Rn */
	r3 += r12;  /* 0C07839E add Rm,Rn */
	r4 = 0xC8000000u; UPD(0x0C0783A2u, 2);  /* 0C0783A0 mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C0783A2 add Rm,Rn */
	r13 = 0xC062780u; UPD(0x0C0783A6u, 2);  /* 0C0783A4 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r3;  /* 0C0783A6 exts.w Rm,Rn */
	IF(0x0C0783A8u); W32(r0 + r7, r4); UPD(0x0C0783AAu, 2);  /* 0C0783A8 mov.l Rm,@(r0,Rn) */
	r3 = 0x2u;  /* 0C0783AA mov #imm,Rn */
	r8 += r0;  /* 0C0783AC add Rm,Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C0783B0u, 3);  /* 0C0783AE mov.l Rm,@(disp,Rn) */
	IF(0x0C0783B0u); { u32 t_ = r13; PR = 0x0C0783B4u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0783B4u); }  /* 0C0783B0 jsr @Rn */
L_0C0783B4: BLKS(0x0C0783B4u);
	r0 += 0x1u;  /* 0C0783B4 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0783B8u, 2);  /* 0C0783B6 mov.l Rm,@(disp,Rn) */
	r11 += r9;  /* 0C0783B8 add Rm,Rn */
	r9 = (u32)(s32)(s16)r11;  /* 0C0783BA exts.w Rm,Rn */
	r8 += 0x2Cu;  /* 0C0783BC add #imm,Rn */
	W16(r8, r9); UPD(0x0C0783C0u, 4);  /* 0C0783BE mov.w Rm,@Rn */
	r4 = r12;  /* 0C0783C0 mov Rm,Rn */
	r11 = 0x80000u; UPD(0x0C0783C4u, 2);  /* 0C0783C2 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFD4u;  /* 0C0783C4 add #imm,Rn */
	r9 += 0x4u;  /* 0C0783C6 add #imm,Rn */
	W32(r8 + 0x20u, r11); UPD(0x0C0783CAu, 3);  /* 0C0783C8 mov.l Rm,@(disp,Rn) */
	r0 = r9;  /* 0C0783CA mov Rm,Rn */
	IF(0x0C0783CCu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0783CC shar Rn */
	IF(0x0C0783CEu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0783CE shar Rn */
	r11 = 0xC069B20u; UPD(0x0C0783D2u, 4);  /* 0C0783D0 mov.l @(disp,pc),Rn */
	IF(0x0C0783D2u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0783D2 shar Rn */
	r0 &= 0x3Fu;  /* 0C0783D4 and #imm,r0 */
	r10 += 0xFFFFFFDCu;  /* 0C0783D6 add #imm,Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C0783DAu, 4);  /* 0C0783D8 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0000u; UPD(0x0C0783DCu, 1);  /* 0C0783DA mov.l @(disp,pc),Rn */
	IF(0x0C0783DCu); { u32 t_ = r11; PR = 0x0C0783E0u; r9 += 0xFFFFFFFCu; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0783E0u); }  /* 0C0783DC jsr @Rn */
L_0C0783E0: BLKS(0x0C0783E0u);
	r13 = R32(r10 + 0x14u); UPD(0x0C0783E2u, 1);  /* 0C0783E0 mov.l @(disp,Rm),Rn */
	r1 = 0xFFFD0000u; UPD(0x0C0783E4u, 1);  /* 0C0783E2 mov.l @(disp,pc),Rn */
	r13 += r0;  /* 0C0783E4 add Rm,Rn */
	r13 += r1;  /* 0C0783E6 add Rm,Rn */
	W32(r8 + 0x10u, r13); UPD(0x0C0783EAu, 3);  /* 0C0783E8 mov.l Rm,@(disp,Rn) */
	r13 = 0xC069AF0u; UPD(0x0C0783ECu, 1);  /* 0C0783EA mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C0783EEu, 1);  /* 0C0783EC mov.l @(disp,pc),Rn */
	IF(0x0C0783EEu); { u32 t_ = r13; PR = 0x0C0783F2u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0783F2u); }  /* 0C0783EE jsr @Rn */
L_0C0783F2: BLKS(0x0C0783F2u);
	r12 = R32(r10 + 0x18u); UPD(0x0C0783F4u, 1);  /* 0C0783F2 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0783F4 mov Rm,Rn */
	r12 += r0;  /* 0C0783F6 add Rm,Rn */
	r5 = 0x80000u; UPD(0x0C0783FAu, 3);  /* 0C0783F8 mov.l @(disp,pc),Rn */
	IF(0x0C0783FAu); { u32 t_ = r11; PR = 0x0C0783FEu; W32(r8 + 0x14u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0783FEu); }  /* 0C0783FA jsr @Rn */
L_0C0783FE: BLKS(0x0C0783FEu);
	W32(r8 + 0x18u, r0); UPD(0x0C078400u, 1);  /* 0C0783FE mov.l Rm,@(disp,Rn) */
	r5 = 0x80000u; UPD(0x0C078402u, 1);  /* 0C078400 mov.l @(disp,pc),Rn */
	IF(0x0C078402u); { u32 t_ = r13; PR = 0x0C078406u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C078406u); }  /* 0C078402 jsr @Rn */
L_0C078406: BLKS(0x0C078406u);
	r4 = 0x808080u; UPD(0x0C078408u, 1);  /* 0C078406 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C078408 mov #imm,Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C07840Cu, 2);  /* 0C07840A mov.l Rm,@(disp,Rn) */
	r6 = 0x4u;  /* 0C07840C mov #imm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C078410u, 2);  /* 0C07840E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r4); UPD(0x0C078412u, 1);  /* 0C078410 mov.l Rm,@(disp,Rn) */
	r8 = R32(r14 + 0x8u); UPD(0x0C078414u, 1);  /* 0C078412 mov.l @(disp,Rm),Rn */
	r8 += 0x1u;  /* 0C078414 add #imm,Rn */
	r0 = (u32)(s32)(s16)r8;  /* 0C078416 exts.w Rm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C07841Au, 3);  /* 0C078418 mov.l Rm,@(disp,Rn) */
	r7 = R32(r14 + 0x8u); UPD(0x0C07841Cu, 1);  /* 0C07841A mov.l @(disp,Rm),Rn */
	T = (s32)r7 > (s32)r6;  /* 0C07841C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C078362u, 4); goto L_0C078362; } UPD(0x0C078422u, 1); goto L_0C078422; }  /* 0C07841E bf/s */
L_0C078422: BLKS(0x0C078422u);
	r4 = R32(r14); UPD(0x0C078424u, 1);  /* 0C078422 mov.l @Rm,Rn */
	r5 = 0x50u;  /* 0C078424 mov #imm,Rn */
	r0 = 0xC0C20A0u; UPD(0x0C078428u, 2);  /* 0C078426 mov.l @(disp,pc),Rn */
	r14 += 0x1Cu;  /* 0C078428 add #imm,Rn */
	r15 = r14;  /* 0C07842A mov Rm,Rn */
	IF(0x0C07842Cu); PR = R32(r15); r15 += 4; UPD(0x0C07842Eu, 3);  /* 0C07842C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C078430u, 1);  /* 0C07842E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C078432u, 1);  /* 0C078430 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C078434u, 1);  /* 0C078432 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078436u, 1);  /* 0C078434 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078438u, 1);  /* 0C078436 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07843Au, 1);  /* 0C078438 mov.l @Rm+,Rn */
	IF(0x0C07843Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C07843A jmp @Rn */
}

/* FUN_0c078490 */
void blk_f_0C078490(sh3_t *c)
{
	LOCALS;
L_0C078490: BLKS(0x0C078490u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C078492u, 1);  /* 0C078490 mov.l Rm,@-Rn */
	r3 = 0x30u;  /* 0C078492 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C078496u, 2);  /* 0C078494 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C078498u, 1);  /* 0C078496 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07849Au, 1);  /* 0C078498 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07849Cu, 1);  /* 0C07849A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07849Eu, 1);  /* 0C07849C mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C07849E exts.w Rm,Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0784A0 exts.w Rm,Rn */
	r4 = 0x90u; UPD(0x0C0784A4u, 3);  /* 0C0784A2 mov.w @(disp,pc),Rn */
	IF(0x0C0784A4u); MACL = r13 * r4;  /* 0C0784A4 mul.l Rm,Rn */
	r0 = 0xC2974C8u; UPD(0x0C0784A8u, 3);  /* 0C0784A6 mov.l @(disp,pc),Rn */
	IF(0x0C0784A8u); r8 = MACL;  /* 0C0784A8 sts macl,Rn */
	IF(0x0C0784AAu); MACL = r12 * r3;  /* 0C0784AA mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0784AEu, 4);  /* 0C0784AC mov.l Rm,@-Rn */
	IF(0x0C0784AEu); r2 = MACL;  /* 0C0784AE sts macl,Rn */
	r8 += r2;  /* 0C0784B0 add Rm,Rn */
	r8 += r0;  /* 0C0784B2 add Rm,Rn */
	IF(0x0C0784B4u); r15 -= 4; W32(r15, PR); UPD(0x0C0784B6u, 4);  /* 0C0784B4 sts.l pr,@-Rn */
	r9 = r8;  /* 0C0784B6 mov Rm,Rn */
	r9 += 0x2Au;  /* 0C0784B8 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0784BCu, 3);  /* 0C0784BA mov.b @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C0784BC add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C0784BE tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0784C8u, 5); goto L_0C0784C8; } goto L_0C0784C4; }  /* 0C0784C0 bt/s */
L_0C0784C4: BLKS(0x0C0784C4u);
	{ r9 = r8; /* slot mov Rm,Rn */ UPD(0x0C078620u, 4); goto L_0C078620; }  /* 0C0784C4 bra */
L_0C0784C8: BLKS(0x0C0784C8u);
	r10 = 0x2A0u; UPD(0x0C0784CAu, 1);  /* 0C0784C8 mov.w @(disp,pc),Rn */
	IF(0x0C0784CAu); MACL = r13 * r10;  /* 0C0784CA mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C0784CEu, 3);  /* 0C0784CC mov.l @(disp,pc),Rn */
	IF(0x0C0784CEu); r0 = MACL;  /* 0C0784CE sts macl,Rn */
	r6 = 0x25Fu; UPD(0x0C0784D2u, 2);  /* 0C0784D0 mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C0784D2 add Rm,Rn */
	IF(0x0C0784D4u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0784D6u, 2);  /* 0C0784D4 mov.b @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C0784D6 tst Rm,Rn */
	if (T) { UPD(0x0C0784E2u, 4); goto L_0C0784E2; }  /* 0C0784D8 bt */
L_0C0784DA: BLKS(0x0C0784DAu);
	r11 = 0x272u; UPD(0x0C0784DCu, 1);  /* 0C0784DA mov.w @(disp,pc),Rn */
	IF(0x0C0784DCu); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0784DEu, 1);  /* 0C0784DC mov.b @(r0,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C0784DE tst Rm,Rn */
	if (T) { UPD(0x0C078500u, 4); goto L_0C078500; }  /* 0C0784E0 bt */
L_0C0784E2: BLKS(0x0C0784E2u);
	r14 += 0xCu;  /* 0C0784E2 add #imm,Rn */
	UPD(0x0C0784E4u, 1);
L_0C0784E4: BLKS(0x0C0784E4u);
	r15 = r14;  /* 0C0784E4 mov Rm,Rn */
	IF(0x0C0784E6u); PR = R32(r15); r15 += 4; UPD(0x0C0784E8u, 2);  /* 0C0784E6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0784EAu, 1);  /* 0C0784E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0784ECu, 1);  /* 0C0784EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0784EEu, 1);  /* 0C0784EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0784F0u, 1);  /* 0C0784EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0784F2u, 1);  /* 0C0784F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0784F4u, 1);  /* 0C0784F2 mov.l @Rm+,Rn */
	IF(0x0C0784F4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0784F4 rts */
L_0C078500: BLKS(0x0C078500u);
	r11 = 0xC0718C0u; UPD(0x0C078502u, 1);  /* 0C078500 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C078502 mov Rm,Rn */
	r5 = r12;  /* 0C078504 mov Rm,Rn */
	r6 = 0x10u;  /* 0C078506 mov #imm,Rn */
	IF(0x0C078508u); { u32 t_ = r11; PR = 0x0C07850Cu; r7 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0718C0, 0x0C0718C0u, 0x0C07850Cu); }  /* 0C078508 jsr @Rn */
L_0C07850C: BLKS(0x0C07850Cu);
	T = (r0 & r0) == 0;  /* 0C07850C tst Rm,Rn */
	if (T) { UPD(0x0C0784E2u, 4); goto L_0C0784E2; }  /* 0C07850E bt */
L_0C078510: BLKS(0x0C078510u);
	r0 = 0x10u;  /* 0C078510 mov #imm,Rn */
	r8 += 0x2Bu;  /* 0C078512 add #imm,Rn */
	W8(r9, r0); UPD(0x0C078516u, 3);  /* 0C078514 mov.b Rm,@Rn */
	W8(r8, r10); UPD(0x0C078518u, 1);  /* 0C078516 mov.b Rm,@Rn */
	r4 = r13;  /* 0C078518 mov Rm,Rn */
	UPD(0x0C07851Au, 1);
L_0C07851A: BLKS(0x0C07851Au);
	r5 = r12;  /* 0C07851A mov Rm,Rn */
	r6 = 0x1u;  /* 0C07851C mov #imm,Rn */
	IF(0x0C07851Eu); { u32 t_ = r11; PR = 0x0C078522u; r7 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0718C0, 0x0C0718C0u, 0x0C078522u); }  /* 0C07851E jsr @Rn */
L_0C078522: BLKS(0x0C078522u);
	T = (r0 & r0) == 0;  /* 0C078522 tst Rm,Rn */
	if (T) { UPD(0x0C0784E2u, 4); goto L_0C0784E2; }  /* 0C078524 bt */
L_0C078526: BLKS(0x0C078526u);
	r3 = 0x30u;  /* 0C078526 mov #imm,Rn */
	r9 = 0x90u; UPD(0x0C07852Au, 2);  /* 0C078528 mov.w @(disp,pc),Rn */
	IF(0x0C07852Au); MACL = r13 * r9;  /* 0C07852A mul.l Rm,Rn */
	r8 = 0xC2974C8u; UPD(0x0C07852Eu, 3);  /* 0C07852C mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C07852E mov #imm,Rn */
	IF(0x0C078530u); r9 = MACL;  /* 0C078530 sts macl,Rn */
	IF(0x0C078532u); MACL = r12 * r3;  /* 0C078532 mul.l Rm,Rn */
	r11 = 0xC28EDFCu; UPD(0x0C078536u, 5);  /* 0C078534 mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C078536 mov #imm,Rn */
	IF(0x0C078538u); r2 = MACL;  /* 0C078538 sts macl,Rn */
	r9 += r2;  /* 0C07853A add Rm,Rn */
	r9 += r8;  /* 0C07853C add Rm,Rn */
	r7 = r9;  /* 0C07853E mov Rm,Rn */
	r7 += 0x2Au;  /* 0C078540 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C078544u, 7);  /* 0C078542 mov.b @Rm,Rn */
	r9 += 0x2Bu;  /* 0C078544 add #imm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C078546 add #imm,Rn */
	W8(r9, r5); UPD(0x0C07854Au, 3);  /* 0C078548 mov.b Rm,@Rn */
	W8(r7, r0); UPD(0x0C07854Cu, 1);  /* 0C07854A mov.b Rm,@Rn */
	r9 += 0xFFFFFFF9u;  /* 0C07854C add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r11); UPD(0x0C078550u, 2);  /* 0C07854E mov.w @Rm,Rn */
	r11 = 0xC062780u; UPD(0x0C078552u, 1);  /* 0C078550 mov.l @(disp,pc),Rn */
	W32(r14, r10); UPD(0x0C078554u, 1);  /* 0C078552 mov.l Rm,@Rn */
	IF(0x0C078554u); { u32 t_ = r11; PR = 0x0C078558u; r10 = (u32)(s32)(s16)R16(r9); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C078558u); }  /* 0C078554 jsr @Rn */
L_0C078558: BLKS(0x0C078558u);
	r6 = 0xC182864u; UPD(0x0C07855Au, 1);  /* 0C078558 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C07855A add Rm,Rn */
	IF(0x0C07855Cu); r4 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C07855Eu, 2);  /* 0C07855C mov.w @(r0,Rm),Rn */
	r3 = r10;  /* 0C07855E mov Rm,Rn */
	r3 += r4;  /* 0C078560 add Rm,Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C078564u, 3);  /* 0C078562 mov.l Rm,@(disp,Rn) */
	r0 = 0xAu;  /* 0C078564 mov #imm,Rn */
	r8 = 0x9C0u; UPD(0x0C078568u, 2);  /* 0C078566 mov.w @(disp,pc),Rn */
	r7 = 0x34u;  /* 0C078568 mov #imm,Rn */
	IF(0x0C07856Au); r2 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C07856Cu, 2);  /* 0C07856A mov.w @(r0,Rm),Rn */
	IF(0x0C07856Cu); MACL = r13 * r8;  /* 0C07856C mul.l Rm,Rn */
	r0 = 0x340u; UPD(0x0C078570u, 3);  /* 0C07856E mov.w @(disp,pc),Rn */
	r3 = 0x2u;  /* 0C078570 mov #imm,Rn */
	IF(0x0C078572u); r8 = MACL;  /* 0C078572 sts macl,Rn */
	IF(0x0C078574u); MACL = r12 * r0;  /* 0C078574 mul.l Rm,Rn */
	r1 = R32(r14); UPD(0x0C078578u, 5);  /* 0C078576 mov.l @Rm,Rn */
	r9 += 0xFFFFFFDCu;  /* 0C078578 add #imm,Rn */
	IF(0x0C07857Au); r12 = MACL;  /* 0C07857A sts macl,Rn */
	IF(0x0C07857Cu); MACL = r1 * r7;  /* 0C07857C mul.l Rm,Rn */
	r0 = r8;  /* 0C07857E mov Rm,Rn */
	r4 = 0xC2380D0u; UPD(0x0C078582u, 6);  /* 0C078580 mov.l @(disp,pc),Rn */
	IF(0x0C078582u); r6 = MACL;  /* 0C078582 sts macl,Rn */
	r5 = 0xC8000000u; UPD(0x0C078586u, 2);  /* 0C078584 mov.l @(disp,pc),Rn */
	r0 += r12;  /* 0C078586 add Rm,Rn */
	r0 += r6;  /* 0C078588 add Rm,Rn */
	r8 += r6;  /* 0C07858A add Rm,Rn */
	IF(0x0C07858Cu); W32(r0 + r4, r5); UPD(0x0C07858Eu, 4);  /* 0C07858C mov.l Rm,@(r0,Rn) */
	r8 += r12;  /* 0C07858E add Rm,Rn */
	r8 += r4;  /* 0C078590 add Rm,Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C078594u, 3);  /* 0C078592 mov.l Rm,@(disp,Rn) */
	r4 = 0x4u;  /* 0C078594 mov #imm,Rn */
	IF(0x0C078596u); { u32 t_ = r11; PR = 0x0C07859Au; W32(r14 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07859Au); }  /* 0C078596 jsr @Rn */
L_0C07859A: BLKS(0x0C07859Au);
	r0 += 0x1u;  /* 0C07859A add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C07859Eu, 2);  /* 0C07859C mov.l Rm,@(disp,Rn) */
	r8 += 0x2Cu;  /* 0C07859E add #imm,Rn */
	W16(r8, r10); UPD(0x0C0785A2u, 2);  /* 0C0785A0 mov.w Rm,@Rn */
	r10 += 0x4u;  /* 0C0785A2 add #imm,Rn */
	r0 = r10;  /* 0C0785A4 mov Rm,Rn */
	IF(0x0C0785A6u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0785A6 shar Rn */
	r2 = 0xC069B20u; UPD(0x0C0785AAu, 4);  /* 0C0785A8 mov.l @(disp,pc),Rn */
	IF(0x0C0785AAu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0785AA shar Rn */
	r12 = 0xA0000u; UPD(0x0C0785AEu, 2);  /* 0C0785AC mov.l @(disp,pc),Rn */
	IF(0x0C0785AEu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0785AE shar Rn */
	r8 += 0xFFFFFFD4u;  /* 0C0785B0 add #imm,Rn */
	r10 += 0xFFFFFFFCu;  /* 0C0785B2 add #imm,Rn */
	r0 &= 0x3Fu;  /* 0C0785B4 and #imm,r0 */
	W32(r8 + 0x20u, r12); UPD(0x0C0785B8u, 5);  /* 0C0785B6 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C0785B8 mov Rm,Rn */
	r5 = 0xC0000u; UPD(0x0C0785BCu, 2);  /* 0C0785BA mov.l @(disp,pc),Rn */
	IF(0x0C0785BCu); { u32 t_ = r2; PR = 0x0C0785C0u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0785C0u); }  /* 0C0785BC jsr @Rn */
L_0C0785C0: BLKS(0x0C0785C0u);
	r11 = R32(r9 + 0x14u); UPD(0x0C0785C2u, 1);  /* 0C0785C0 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0785C2 mov Rm,Rn */
	r11 += r0;  /* 0C0785C4 add Rm,Rn */
	r7 = 0xC069AF0u; UPD(0x0C0785C8u, 3);  /* 0C0785C6 mov.l @(disp,pc),Rn */
	r0 = 0xFFFD0000u; UPD(0x0C0785CAu, 1);  /* 0C0785C8 mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C0785CCu, 1);  /* 0C0785CA mov.l @(disp,pc),Rn */
	r11 += r0;  /* 0C0785CC add Rm,Rn */
	IF(0x0C0785CEu); { u32 t_ = r7; PR = 0x0C0785D2u; W32(r8 + 0x10u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0785D2u); }  /* 0C0785CE jsr @Rn */
L_0C0785D2: BLKS(0x0C0785D2u);
	r5 = R32(r9 + 0x18u); UPD(0x0C0785D4u, 1);  /* 0C0785D2 mov.l @(disp,Rm),Rn */
	r6 = 0xC069B20u; UPD(0x0C0785D6u, 1);  /* 0C0785D4 mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C0785D6 add Rm,Rn */
	W32(r8 + 0x14u, r5); UPD(0x0C0785DAu, 2);  /* 0C0785D8 mov.l Rm,@(disp,Rn) */
	r4 = R32(r14 + 0x4u); UPD(0x0C0785DCu, 1);  /* 0C0785DA mov.l @(disp,Rm),Rn */
	IF(0x0C0785DCu); { u32 t_ = r6; PR = 0x0C0785E0u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0785E0u); }  /* 0C0785DC jsr @Rn */
L_0C0785E0: BLKS(0x0C0785E0u);
	r1 = 0xC069AF0u; UPD(0x0C0785E2u, 1);  /* 0C0785E0 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0785E2 mov Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0785E6u, 2);  /* 0C0785E4 mov.l @(disp,Rm),Rn */
	IF(0x0C0785E6u); { u32 t_ = r1; PR = 0x0C0785EAu; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0785EAu); }  /* 0C0785E6 jsr @Rn */
L_0C0785EA: BLKS(0x0C0785EAu);
	r12 = 0xC0C2360u; UPD(0x0C0785ECu, 1);  /* 0C0785EA mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0785EC mov #imm,Rn */
	r3 = 0x808080u; UPD(0x0C0785F0u, 2);  /* 0C0785EE mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C0785F2u, 1);  /* 0C0785F0 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0785F4u, 1);  /* 0C0785F2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0785F4u); { u32 t_ = r12; PR = 0x0C0785F8u; W32(r8 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0785F8u); }  /* 0C0785F4 jsr @Rn */
L_0C0785F8: BLKS(0x0C0785F8u);
	r2 = 0xC0C20A0u; UPD(0x0C0785FAu, 1);  /* 0C0785F8 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0785FA mov Rm,Rn */
	r5 = 0x4Cu;  /* 0C0785FC mov #imm,Rn */
	r14 += 0xCu;  /* 0C0785FE add #imm,Rn */
	r15 = r14;  /* 0C078600 mov Rm,Rn */
	IF(0x0C078602u); PR = R32(r15); r15 += 4; UPD(0x0C078604u, 5);  /* 0C078602 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C078606u, 1);  /* 0C078604 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C078608u, 1);  /* 0C078606 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07860Au, 1);  /* 0C078608 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07860Cu, 1);  /* 0C07860A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07860Eu, 1);  /* 0C07860C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078610u, 1);  /* 0C07860E mov.l @Rm+,Rn */
	IF(0x0C078610u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C078610 jmp @Rn */
L_0C078620: BLKS(0x0C078620u);
	r9 += 0x2Bu;  /* 0C078620 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r9); UPD(0x0C078624u, 2);  /* 0C078622 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C078624 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C078626 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C078628 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r9, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C078632u, 6); goto L_0C078632; } UPD(0x0C07862Eu, 1); goto L_0C07862E; }  /* 0C07862A bt/s */
L_0C07862E: BLKS(0x0C07862Eu);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C0784E4u, 3); goto L_0C0784E4; }  /* 0C07862E bra */
L_0C078632: BLKS(0x0C078632u);
	r11 = 0xC0718C0u; UPD(0x0C078634u, 1);  /* 0C078632 mov.l @(disp,pc),Rn */
	{ r4 = r13; /* slot mov Rm,Rn */ UPD(0x0C07851Au, 3); goto L_0C07851A; }  /* 0C078634 bra */
}

void blk_f_0C078690(sh3_t *c)
{
	LOCALS;
L_0C078690: BLKS(0x0C078690u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C078692u, 1);  /* 0C078690 mov.l Rm,@-Rn */
	r3 = 0x30u;  /* 0C078692 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C078696u, 2);  /* 0C078694 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C078698u, 1);  /* 0C078696 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07869Au, 1);  /* 0C078698 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C07869A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07869Eu, 2);  /* 0C07869C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0786A0u, 1);  /* 0C07869E mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0786A0 exts.w Rm,Rn */
	r4 = 0x90u; UPD(0x0C0786A4u, 2);  /* 0C0786A2 mov.w @(disp,pc),Rn */
	IF(0x0C0786A4u); MACL = r13 * r4;  /* 0C0786A4 mul.l Rm,Rn */
	r0 = 0xC2974C8u; UPD(0x0C0786A8u, 3);  /* 0C0786A6 mov.l @(disp,pc),Rn */
	IF(0x0C0786A8u); r8 = MACL;  /* 0C0786A8 sts macl,Rn */
	IF(0x0C0786AAu); MACL = r10 * r3;  /* 0C0786AA mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0786AEu, 4);  /* 0C0786AC mov.l Rm,@-Rn */
	IF(0x0C0786AEu); r2 = MACL;  /* 0C0786AE sts macl,Rn */
	r8 += r2;  /* 0C0786B0 add Rm,Rn */
	r8 += r0;  /* 0C0786B2 add Rm,Rn */
	IF(0x0C0786B4u); r15 -= 4; W32(r15, PR); UPD(0x0C0786B6u, 4);  /* 0C0786B4 sts.l pr,@-Rn */
	r9 = r8;  /* 0C0786B6 mov Rm,Rn */
	r9 += 0x2Au;  /* 0C0786B8 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0786BCu, 3);  /* 0C0786BA mov.b @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0786BC add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C0786BE tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0786C8u, 5); goto L_0C0786C8; } goto L_0C0786C4; }  /* 0C0786C0 bt/s */
L_0C0786C4: BLKS(0x0C0786C4u);
	{ r9 = r8; /* slot mov Rm,Rn */ UPD(0x0C0788C0u, 4); goto L_0C0788C0; }  /* 0C0786C4 bra */
L_0C0786C8: BLKS(0x0C0786C8u);
	r11 = 0x2A0u; UPD(0x0C0786CAu, 1);  /* 0C0786C8 mov.w @(disp,pc),Rn */
	IF(0x0C0786CAu); MACL = r13 * r11;  /* 0C0786CA mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C0786CEu, 3);  /* 0C0786CC mov.l @(disp,pc),Rn */
	IF(0x0C0786CEu); r0 = MACL;  /* 0C0786CE sts macl,Rn */
	r6 = 0x25Fu; UPD(0x0C0786D2u, 2);  /* 0C0786D0 mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C0786D2 add Rm,Rn */
	IF(0x0C0786D4u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0786D6u, 2);  /* 0C0786D4 mov.b @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C0786D6 tst Rm,Rn */
	if (T) { UPD(0x0C0786E2u, 4); goto L_0C0786E2; }  /* 0C0786D8 bt */
L_0C0786DA: BLKS(0x0C0786DAu);
	r12 = 0x272u; UPD(0x0C0786DCu, 1);  /* 0C0786DA mov.w @(disp,pc),Rn */
	IF(0x0C0786DCu); r11 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0786DEu, 1);  /* 0C0786DC mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C0786DE tst Rm,Rn */
	if (T) { UPD(0x0C078700u, 4); goto L_0C078700; }  /* 0C0786E0 bt */
L_0C0786E2: BLKS(0x0C0786E2u);
	r14 += 0x4u;  /* 0C0786E2 add #imm,Rn */
	UPD(0x0C0786E4u, 1);
L_0C0786E4: BLKS(0x0C0786E4u);
	r15 = r14;  /* 0C0786E4 mov Rm,Rn */
	IF(0x0C0786E6u); PR = R32(r15); r15 += 4; UPD(0x0C0786E8u, 2);  /* 0C0786E6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0786EAu, 1);  /* 0C0786E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0786ECu, 1);  /* 0C0786EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0786EEu, 1);  /* 0C0786EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0786F0u, 1);  /* 0C0786EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0786F2u, 1);  /* 0C0786F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0786F4u, 1);  /* 0C0786F2 mov.l @Rm+,Rn */
	IF(0x0C0786F4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0786F4 rts */
L_0C078700: BLKS(0x0C078700u);
	r12 = 0xC0718C0u; UPD(0x0C078702u, 1);  /* 0C078700 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C078702 mov Rm,Rn */
	r5 = r10;  /* 0C078704 mov Rm,Rn */
	r6 = 0x10u;  /* 0C078706 mov #imm,Rn */
	IF(0x0C078708u); { u32 t_ = r12; PR = 0x0C07870Cu; r7 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0718C0, 0x0C0718C0u, 0x0C07870Cu); }  /* 0C078708 jsr @Rn */
L_0C07870C: BLKS(0x0C07870Cu);
	T = (r0 & r0) == 0;  /* 0C07870C tst Rm,Rn */
	if (T) { UPD(0x0C0786E2u, 4); goto L_0C0786E2; }  /* 0C07870E bt */
L_0C078710: BLKS(0x0C078710u);
	r0 = 0x10u;  /* 0C078710 mov #imm,Rn */
	r8 += 0x2Bu;  /* 0C078712 add #imm,Rn */
	W8(r9, r0); UPD(0x0C078716u, 3);  /* 0C078714 mov.b Rm,@Rn */
	W8(r8, r11); UPD(0x0C078718u, 1);  /* 0C078716 mov.b Rm,@Rn */
	r4 = r13;  /* 0C078718 mov Rm,Rn */
	UPD(0x0C07871Au, 1);
L_0C07871A: BLKS(0x0C07871Au);
	r5 = r10;  /* 0C07871A mov Rm,Rn */
	r6 = 0x1u;  /* 0C07871C mov #imm,Rn */
	IF(0x0C07871Eu); { u32 t_ = r12; PR = 0x0C078722u; r7 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0718C0, 0x0C0718C0u, 0x0C078722u); }  /* 0C07871E jsr @Rn */
L_0C078722: BLKS(0x0C078722u);
	T = (r0 & r0) == 0;  /* 0C078722 tst Rm,Rn */
	if (T) { UPD(0x0C0786E2u, 4); goto L_0C0786E2; }  /* 0C078724 bt */
L_0C078726: BLKS(0x0C078726u);
	r7 = 0x30u;  /* 0C078726 mov #imm,Rn */
	r11 = 0x90u; UPD(0x0C07872Au, 2);  /* 0C078728 mov.w @(disp,pc),Rn */
	IF(0x0C07872Au); MACL = r13 * r11;  /* 0C07872A mul.l Rm,Rn */
	r5 = 0xC2974C8u; UPD(0x0C07872Eu, 3);  /* 0C07872C mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C07872E mov #imm,Rn */
	IF(0x0C078730u); r11 = MACL;  /* 0C078730 sts macl,Rn */
	IF(0x0C078732u); MACL = r10 * r7;  /* 0C078732 mul.l Rm,Rn */
	r1 = 0x7u;  /* 0C078734 mov #imm,Rn */
	r2 = 0xC182872u; UPD(0x0C078738u, 6);  /* 0C078736 mov.l @(disp,pc),Rn */
	IF(0x0C078738u); r6 = MACL;  /* 0C078738 sts macl,Rn */
	r11 += r6;  /* 0C07873A add Rm,Rn */
	r11 += r5;  /* 0C07873C add Rm,Rn */
	r4 = r11;  /* 0C07873E mov Rm,Rn */
	r4 += 0x2Au;  /* 0C078740 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C078744u, 6);  /* 0C078742 mov.b @Rm,Rn */
	r11 += 0x2Bu;  /* 0C078744 add #imm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C078746 add #imm,Rn */
	W8(r4, r0); UPD(0x0C07874Au, 3);  /* 0C078748 mov.b Rm,@Rn */
	T = (r10 & r10) == 0;  /* 0C07874A tst Rm,Rn */
	W8(r11, r3); UPD(0x0C07874Eu, 2);  /* 0C07874C mov.b Rm,@Rn */
	r0 &= r1;  /* 0C07874E and Rm,Rn */
	r0 += r0;  /* 0C078750 add Rm,Rn */
	IF(0x0C078752u); r12 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C078754u, 3);  /* 0C078752 mov.w @(r0,Rm),Rn */
	{ u32 c_ = T; r11 += 0xFFFFFFD5u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07875Cu, 3); goto L_0C07875C; } goto L_0C078758; }  /* 0C078754 bt/s */
L_0C078758: BLKS(0x0C078758u);
	r0 = 0u - r12;  /* 0C078758 neg Rm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C07875A exts.w Rm,Rn */
	UPD(0x0C07875Cu, 3);
L_0C07875C: BLKS(0x0C07875Cu);
	r8 = 0x9C0u; UPD(0x0C07875Eu, 1);  /* 0C07875C mov.w @(disp,pc),Rn */
	r5 = r11;  /* 0C07875E mov Rm,Rn */
	IF(0x0C078760u); MACL = r13 * r8;  /* 0C078760 mul.l Rm,Rn */
	r2 = 0x340u; UPD(0x0C078764u, 4);  /* 0C078762 mov.w @(disp,pc),Rn */
	r5 += 0x24u;  /* 0C078764 add #imm,Rn */
	IF(0x0C078766u); r8 = MACL;  /* 0C078766 sts macl,Rn */
	IF(0x0C078768u); MACL = r10 * r2;  /* 0C078768 mul.l Rm,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C07876Cu, 5);  /* 0C07876A mov.l @(disp,pc),Rn */
	r3 = 0x34u;  /* 0C07876C mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C078770u, 2);  /* 0C07876E mov.w @Rm,Rn */
	r13 += 0x5u;  /* 0C078770 add #imm,Rn */
	W32(r14, r5); UPD(0x0C078774u, 2);  /* 0C078772 mov.l Rm,@Rn */
	r4 += r12;  /* 0C078774 add Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r0); UPD(0x0C078778u, 2);  /* 0C078776 mov.w @Rm,Rn */
	IF(0x0C078778u); r5 = MACL;  /* 0C078778 sts macl,Rn */
	IF(0x0C07877Au); MACL = r9 * r3;  /* 0C07877A mul.l Rm,Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C07877C exts.w Rm,Rn */
	r0 = r8;  /* 0C07877E mov Rm,Rn */
	IF(0x0C078780u); r6 = MACL;  /* 0C078780 sts macl,Rn */
	r7 = 0xC8800000u; UPD(0x0C078784u, 7);  /* 0C078782 mov.l @(disp,pc),Rn */
	r0 += r5;  /* 0C078784 add Rm,Rn */
	r4 = 0xC2380D0u; UPD(0x0C078788u, 2);  /* 0C078786 mov.l @(disp,pc),Rn */
	r0 += r6;  /* 0C078788 add Rm,Rn */
	r8 += r6;  /* 0C07878A add Rm,Rn */
	r10 = 0xC062780u; UPD(0x0C07878Eu, 3);  /* 0C07878C mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C07878E add Rm,Rn */
	IF(0x0C078790u); W32(r0 + r4, r7); UPD(0x0C078792u, 2);  /* 0C078790 mov.l Rm,@(r0,Rn) */
	r8 += r4;  /* 0C078792 add Rm,Rn */
	W32(r8 + 0x4u, r13); UPD(0x0C078796u, 2);  /* 0C078794 mov.l Rm,@(disp,Rn) */
	IF(0x0C078796u); { u32 t_ = r10; PR = 0x0C07879Au; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07879Au); }  /* 0C078796 jsr @Rn */
L_0C07879A: BLKS(0x0C07879Au);
	r0 += 0x20u;  /* 0C07879A add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C07879Eu, 2);  /* 0C07879C mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C07879E mov Rm,Rn */
	r0 = r12;  /* 0C0787A0 mov Rm,Rn */
	r0 += 0x8u;  /* 0C0787A2 add #imm,Rn */
	IF(0x0C0787A4u); r0 >>= 2;  /* 0C0787A4 shlr2 Rn */
	IF(0x0C0787A6u); r0 >>= 2;  /* 0C0787A6 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C0787A8 and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C0787ACu, 7);  /* 0C0787AA mov.l Rm,@(disp,Rn) */
	r13 += 0xFFFFFFFBu;  /* 0C0787AC add #imm,Rn */
	r8 += 0x2Cu;  /* 0C0787AE add #imm,Rn */
	W16(r8, r12); UPD(0x0C0787B2u, 3);  /* 0C0787B0 mov.w Rm,@Rn */
	r9 = 0xC069B20u; UPD(0x0C0787B4u, 1);  /* 0C0787B2 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFD4u;  /* 0C0787B4 add #imm,Rn */
	r0 = 0x70000u; UPD(0x0C0787B8u, 2);  /* 0C0787B6 mov.l @(disp,pc),Rn */
	r5 = 0xC0000u; UPD(0x0C0787BAu, 1);  /* 0C0787B8 mov.l @(disp,pc),Rn */
	IF(0x0C0787BAu); { u32 t_ = r9; PR = 0x0C0787BEu; W32(r8 + 0x20u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0787BEu); }  /* 0C0787BA jsr @Rn */
L_0C0787BE: BLKS(0x0C0787BEu);
	r10 = R32(r11 + 0x14u); UPD(0x0C0787C0u, 1);  /* 0C0787BE mov.l @(disp,Rm),Rn */
	r9 = 0xFFFC0000u; UPD(0x0C0787C2u, 1);  /* 0C0787C0 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C0787C2 add Rm,Rn */
	r10 += r9;  /* 0C0787C4 add Rm,Rn */
	W32(r8 + 0x10u, r10); UPD(0x0C0787C8u, 3);  /* 0C0787C6 mov.l Rm,@(disp,Rn) */
	r10 = 0xC069AF0u; UPD(0x0C0787CAu, 1);  /* 0C0787C8 mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C0787CCu, 1);  /* 0C0787CA mov.l @(disp,pc),Rn */
	IF(0x0C0787CCu); { u32 t_ = r10; PR = 0x0C0787D0u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0787D0u); }  /* 0C0787CC jsr @Rn */
L_0C0787D0: BLKS(0x0C0787D0u);
	r3 = 0xC069B20u; UPD(0x0C0787D2u, 1);  /* 0C0787D0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0787D2 mov Rm,Rn */
	r2 = R32(r11 + 0x18u); UPD(0x0C0787D6u, 2);  /* 0C0787D4 mov.l @(disp,Rm),Rn */
	r5 = 0x70000u; UPD(0x0C0787D8u, 1);  /* 0C0787D6 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C0787D8 add Rm,Rn */
	IF(0x0C0787DAu); { u32 t_ = r3; PR = 0x0C0787DEu; W32(r8 + 0x14u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0787DEu); }  /* 0C0787DA jsr @Rn */
L_0C0787DE: BLKS(0x0C0787DEu);
	r4 = r12;  /* 0C0787DE mov Rm,Rn */
	r5 = 0x70000u; UPD(0x0C0787E2u, 2);  /* 0C0787E0 mov.l @(disp,pc),Rn */
	IF(0x0C0787E2u); { u32 t_ = r10; PR = 0x0C0787E6u; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0787E6u); }  /* 0C0787E2 jsr @Rn */
L_0C0787E6: BLKS(0x0C0787E6u);
	r7 = 0x217FF00u; UPD(0x0C0787E8u, 1);  /* 0C0787E6 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0787E8 mov #imm,Rn */
	r6 = 0x808080u; UPD(0x0C0787ECu, 2);  /* 0C0787EA mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0787EC mov Rm,Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C0787F0u, 2);  /* 0C0787EE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r6); UPD(0x0C0787F2u, 1);  /* 0C0787F0 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0787F4u, 1);  /* 0C0787F2 mov.l Rm,@(disp,Rn) */
	r8 += 0x30u;  /* 0C0787F4 add #imm,Rn */
	W8(r8, r5); UPD(0x0C0787F8u, 2);  /* 0C0787F6 mov.b Rm,@Rn */
	r8 = 0xC0C20A0u; UPD(0x0C0787FAu, 1);  /* 0C0787F8 mov.l @(disp,pc),Rn */
	r13 = 0xC0C2360u; UPD(0x0C0787FCu, 1);  /* 0C0787FA mov.l @(disp,pc),Rn */
	IF(0x0C0787FCu); { u32 t_ = r8; PR = 0x0C078800u; r5 = 0x52u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C078800u); }  /* 0C0787FC jsr @Rn */
L_0C078800: BLKS(0x0C078800u);
	r12 = 0xF0u; UPD(0x0C078802u, 1);  /* 0C078800 mov.w @(disp,pc),Rn */
	IF(0x0C078802u); { u32 t_ = r13; PR = 0x0C078806u; IF(0x0C078804u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C078806u); }  /* 0C078802 jsr @Rn */
L_0C078806: BLKS(0x0C078806u);
	r1 = R32(r14); UPD(0x0C078808u, 1);  /* 0C078806 mov.l @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C078808 and #imm,r0 */
	r4 = (u32)(s32)(s16)R16(r1); UPD(0x0C07880Cu, 2);  /* 0C07880A mov.w @Rm,Rn */
	r15 += 0xFFFFFFF0u;  /* 0C07880C add #imm,Rn */
	r0 += r4;  /* 0C07880E add Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C078812u, 3);  /* 0C078810 mov.l @(disp,pc),Rn */
	r0 += r12;  /* 0C078812 add Rm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C078814 exts.w Rm,Rn */
	r5 = 0x60000u; UPD(0x0C078818u, 3);  /* 0C078816 mov.l @(disp,pc),Rn */
	IF(0x0C078818u); { u32 t_ = r8; PR = 0x0C07881Cu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07881Cu); }  /* 0C078818 jsr @Rn */
L_0C07881C: BLKS(0x0C07881Cu);
	r8 = R32(r11 + 0x14u); UPD(0x0C07881Eu, 1);  /* 0C07881C mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C07881E mov Rm,Rn */
	r8 += r0;  /* 0C078820 add Rm,Rn */
	r5 = 0x80000u; UPD(0x0C078824u, 3);  /* 0C078822 mov.l @(disp,pc),Rn */
	IF(0x0C078824u); { u32 t_ = r10; PR = 0x0C078828u; r8 += r9; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C078828u); }  /* 0C078824 jsr @Rn */
L_0C078828: BLKS(0x0C078828u);
	r9 = 0xC069B20u; UPD(0x0C07882Au, 1);  /* 0C078828 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C07882A mov #imm,Rn */
	r13 = R32(r11 + 0x18u); UPD(0x0C07882Eu, 2);  /* 0C07882C mov.l @(disp,Rm),Rn */
	r2 = 0x14u;  /* 0C07882E mov #imm,Rn */
	r5 = 0x18000u; UPD(0x0C078832u, 2);  /* 0C078830 mov.l @(disp,pc),Rn */
	r13 += r0;  /* 0C078832 add Rm,Rn */
	W32(r15, r3); UPD(0x0C078836u, 2);  /* 0C078834 mov.l Rm,@Rn */
	r4 = r12;  /* 0C078836 mov Rm,Rn */
	IF(0x0C078838u); { u32 t_ = r9; PR = 0x0C07883Cu; W32(r15 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07883Cu); }  /* 0C078838 jsr @Rn */
L_0C07883C: BLKS(0x0C07883Cu);
	r4 = r12;  /* 0C07883C mov Rm,Rn */
	r5 = 0x20000u; UPD(0x0C078840u, 2);  /* 0C07883E mov.l @(disp,pc),Rn */
	IF(0x0C078840u); { u32 t_ = r10; PR = 0x0C078844u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C078844u); }  /* 0C078840 jsr @Rn */
L_0C078844: BLKS(0x0C078844u);
	r10 = 0xC0BE9F0u; UPD(0x0C078846u, 1);  /* 0C078844 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C078846 mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C07884Au, 2);  /* 0C078848 mov.l Rm,@(disp,Rn) */
	r6 = r8;  /* 0C07884A mov Rm,Rn */
	r4 = R32(r11); UPD(0x0C07884Eu, 2);  /* 0C07884C mov.l @Rm,Rn */
	IF(0x0C07884Eu); { u32 t_ = r10; PR = 0x0C078852u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BE9F0, 0x0C0BE9F0u, 0x0C078852u); }  /* 0C07884E jsr @Rn */
L_0C078852: BLKS(0x0C078852u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0786E4u, 3); goto L_0C0786E4; }  /* 0C078852 bra */
L_0C0788C0: BLKS(0x0C0788C0u);
	r9 += 0x2Bu;  /* 0C0788C0 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r9); UPD(0x0C0788C4u, 2);  /* 0C0788C2 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0788C4 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C0788C6 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C0788C8 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r9, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C078852u, 6); goto L_0C078852; } UPD(0x0C0788CEu, 1); goto L_0C0788CE; }  /* 0C0788CA bf/s */
L_0C0788CE: BLKS(0x0C0788CEu);
	r12 = 0xC0718C0u; UPD(0x0C0788D0u, 1);  /* 0C0788CE mov.l @(disp,pc),Rn */
	{ r4 = r13; /* slot mov Rm,Rn */ UPD(0x0C07871Au, 3); goto L_0C07871A; }  /* 0C0788D0 bra */
}

void blk_f_0C0788E0(sh3_t *c)
{
	LOCALS;
L_0C0788E0: BLKS(0x0C0788E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0788E2u, 1);  /* 0C0788E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0788E4u, 1);  /* 0C0788E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0788E6u, 1);  /* 0C0788E4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0788E8u, 1);  /* 0C0788E6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0788EAu, 1);  /* 0C0788E8 mov.l Rm,@-Rn */
	r0 = 0x2A0u; UPD(0x0C0788ECu, 1);  /* 0C0788EA mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0788EC exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0788F0u, 2);  /* 0C0788EE mov.l Rm,@-Rn */
	IF(0x0C0788F0u); MACL = r12 * r0;  /* 0C0788F0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0788F4u, 3);  /* 0C0788F2 mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C0788F4 exts.w Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C0788F8u, 2);  /* 0C0788F6 mov.l @(disp,pc),Rn */
	IF(0x0C0788F8u); r0 = MACL;  /* 0C0788F8 sts macl,Rn */
	IF(0x0C0788FAu); r15 -= 4; W32(r15, PR); UPD(0x0C0788FCu, 2);  /* 0C0788FA sts.l pr,@-Rn */
	r0 += r2;  /* 0C0788FC add Rm,Rn */
	r3 = 0x25Fu; UPD(0x0C078900u, 2);  /* 0C0788FE mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C078900 add #imm,Rn */
	IF(0x0C078902u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C078904u, 2);  /* 0C078902 mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C078904 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C078912u, 4); goto L_0C078912; } goto L_0C07890A; }  /* 0C078906 bt/s */
L_0C07890A: BLKS(0x0C07890Au);
	r4 = 0x272u; UPD(0x0C07890Cu, 2);  /* 0C07890A mov.w @(disp,pc),Rn */
	IF(0x0C07890Cu); r10 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C07890Eu, 1);  /* 0C07890C mov.b @(r0,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C07890E tst Rm,Rn */
	if (T) { UPD(0x0C078930u, 4); goto L_0C078930; }  /* 0C078910 bt */
L_0C078912: BLKS(0x0C078912u);
	r14 += 0x4u;  /* 0C078912 add #imm,Rn */
	r15 = r14;  /* 0C078914 mov Rm,Rn */
	IF(0x0C078916u); PR = R32(r15); r15 += 4; UPD(0x0C078918u, 3);  /* 0C078916 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07891Au, 1);  /* 0C078918 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07891Cu, 1);  /* 0C07891A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07891Eu, 1);  /* 0C07891C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078920u, 1);  /* 0C07891E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078922u, 1);  /* 0C078920 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078924u, 1);  /* 0C078922 mov.l @Rm+,Rn */
	IF(0x0C078924u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C078924 rts */
L_0C078930: BLKS(0x0C078930u);
	r8 = 0xC0718C0u; UPD(0x0C078932u, 1);  /* 0C078930 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C078932 mov Rm,Rn */
	r5 = r13;  /* 0C078934 mov Rm,Rn */
	r6 = 0x1u;  /* 0C078936 mov #imm,Rn */
	IF(0x0C078938u); { u32 t_ = r8; PR = 0x0C07893Cu; r7 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0718C0, 0x0C0718C0u, 0x0C07893Cu); }  /* 0C078938 jsr @Rn */
L_0C07893C: BLKS(0x0C07893Cu);
	T = (r0 & r0) == 0;  /* 0C07893C tst Rm,Rn */
	if (T) { UPD(0x0C078912u, 4); goto L_0C078912; }  /* 0C07893E bt */
L_0C078940: BLKS(0x0C078940u);
	r3 = 0x30u;  /* 0C078940 mov #imm,Rn */
	r9 = 0x90u; UPD(0x0C078944u, 2);  /* 0C078942 mov.w @(disp,pc),Rn */
	IF(0x0C078944u); MACL = r12 * r9;  /* 0C078944 mul.l Rm,Rn */
	r2 = 0xC2974C8u; UPD(0x0C078948u, 3);  /* 0C078946 mov.l @(disp,pc),Rn */
	r4 = 0x1Fu;  /* 0C078948 mov #imm,Rn */
	IF(0x0C07894Au); r9 = MACL;  /* 0C07894A sts macl,Rn */
	IF(0x0C07894Cu); MACL = r13 * r3;  /* 0C07894C mul.l Rm,Rn */
	r6 = 0xC062780u; UPD(0x0C078950u, 5);  /* 0C07894E mov.l @(disp,pc),Rn */
	IF(0x0C078950u); r7 = MACL;  /* 0C078950 sts macl,Rn */
	r9 += r7;  /* 0C078952 add Rm,Rn */
	r9 += r2;  /* 0C078954 add Rm,Rn */
	r5 = r9;  /* 0C078956 mov Rm,Rn */
	r5 += 0x24u;  /* 0C078958 add #imm,Rn */
	IF(0x0C07895Au); { u32 t_ = r6; PR = 0x0C07895Eu; W32(r14, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 7); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07895Eu); }  /* 0C07895A jsr @Rn */
L_0C07895E: BLKS(0x0C07895Eu);
	r1 = R32(r14); UPD(0x0C078960u, 1);  /* 0C07895E mov.l @Rm,Rn */
	r7 = 0x34u;  /* 0C078960 mov #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r1); UPD(0x0C078964u, 2);  /* 0C078962 mov.w @Rm,Rn */
	r8 = 0x9C0u; UPD(0x0C078966u, 1);  /* 0C078964 mov.w @(disp,pc),Rn */
	r0 += r11;  /* 0C078966 add Rm,Rn */
	IF(0x0C078968u); MACL = r12 * r8;  /* 0C078968 mul.l Rm,Rn */
	r0 += 0xFFFFFFF1u;  /* 0C07896A add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C07896C exts.w Rm,Rn */
	r0 = 0x340u; UPD(0x0C078970u, 6);  /* 0C07896E mov.w @(disp,pc),Rn */
	IF(0x0C078970u); r8 = MACL;  /* 0C078970 sts macl,Rn */
	IF(0x0C078972u); MACL = r13 * r0;  /* 0C078972 mul.l Rm,Rn */
	r4 = 0xC28EDFCu; UPD(0x0C078976u, 4);  /* 0C078974 mov.l @(disp,pc),Rn */
	r11 += 0x4u;  /* 0C078976 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C07897Au, 2);  /* 0C078978 mov.w @Rm,Rn */
	IF(0x0C07897Au); r6 = MACL;  /* 0C07897A sts macl,Rn */
	IF(0x0C07897Cu); MACL = r3 * r7;  /* 0C07897C mul.l Rm,Rn */
	r0 = r8;  /* 0C07897E mov Rm,Rn */
	r2 = 0xC8000000u; UPD(0x0C078982u, 5);  /* 0C078980 mov.l @(disp,pc),Rn */
	IF(0x0C078982u); r5 = MACL;  /* 0C078982 sts macl,Rn */
	r4 = 0xC2380D0u; UPD(0x0C078986u, 2);  /* 0C078984 mov.l @(disp,pc),Rn */
	r0 += r6;  /* 0C078986 add Rm,Rn */
	r3 = 0xC062780u; UPD(0x0C07898Au, 2);  /* 0C078988 mov.l @(disp,pc),Rn */
	r0 += r5;  /* 0C07898A add Rm,Rn */
	r8 += r5;  /* 0C07898C add Rm,Rn */
	IF(0x0C07898Eu); W32(r0 + r4, r2); UPD(0x0C078990u, 3);  /* 0C07898E mov.l Rm,@(r0,Rn) */
	r8 += r6;  /* 0C078990 add Rm,Rn */
	r8 += r4;  /* 0C078992 add Rm,Rn */
	r13 = 0x4u;  /* 0C078994 mov #imm,Rn */
	W32(r8 + 0x4u, r13); UPD(0x0C078998u, 4);  /* 0C078996 mov.l Rm,@(disp,Rn) */
	IF(0x0C078998u); { u32 t_ = r3; PR = 0x0C07899Cu; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07899Cu); }  /* 0C078998 jsr @Rn */
L_0C07899C: BLKS(0x0C07899Cu);
	r0 += 0x1u;  /* 0C07899C add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0789A0u, 2);  /* 0C07899E mov.l Rm,@(disp,Rn) */
	r0 = r11;  /* 0C0789A0 mov Rm,Rn */
	IF(0x0C0789A2u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0789A2 shar Rn */
	IF(0x0C0789A4u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0789A4 shar Rn */
	IF(0x0C0789A6u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0789A6 shar Rn */
	r0 &= 0x3Fu;  /* 0C0789A8 and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C0789ACu, 6);  /* 0C0789AA mov.l Rm,@(disp,Rn) */
	r11 += 0xFFFFFFFCu;  /* 0C0789AC add #imm,Rn */
	r8 += 0x2Cu;  /* 0C0789AE add #imm,Rn */
	r7 = R32(r14); UPD(0x0C0789B2u, 3);  /* 0C0789B0 mov.l @Rm,Rn */
	W16(r8, r11); UPD(0x0C0789B4u, 1);  /* 0C0789B2 mov.w Rm,@Rn */
	r6 = 0xC069B20u; UPD(0x0C0789B6u, 1);  /* 0C0789B4 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFD4u;  /* 0C0789B6 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r7); UPD(0x0C0789BAu, 2);  /* 0C0789B8 mov.w @Rm,Rn */
	r1 = 0x80000u; UPD(0x0C0789BCu, 1);  /* 0C0789BA mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFFFF;  /* 0C0789BC extu.w Rm,Rn */
	r5 = 0xC0000u; UPD(0x0C0789C0u, 2);  /* 0C0789BE mov.l @(disp,pc),Rn */
	IF(0x0C0789C0u); { u32 t_ = r6; PR = 0x0C0789C4u; W32(r8 + 0x20u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0789C4u); }  /* 0C0789C0 jsr @Rn */
L_0C0789C4: BLKS(0x0C0789C4u);
	r4 = R32(r9 + 0x14u); UPD(0x0C0789C6u, 1);  /* 0C0789C4 mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C0789C6 add Rm,Rn */
	r0 = 0xFFFD0000u; UPD(0x0C0789CAu, 2);  /* 0C0789C8 mov.l @(disp,pc),Rn */
	r2 = R32(r14); UPD(0x0C0789CCu, 1);  /* 0C0789CA mov.l @Rm,Rn */
	r4 += r0;  /* 0C0789CC add Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r2); UPD(0x0C0789D0u, 2);  /* 0C0789CE mov.w @Rm,Rn */
	W32(r8 + 0x10u, r4); UPD(0x0C0789D2u, 1);  /* 0C0789D0 mov.l Rm,@(disp,Rn) */
	r4 = r13 & 0xFFFF;  /* 0C0789D2 extu.w Rm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C0789D6u, 2);  /* 0C0789D4 mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C0789D8u, 1);  /* 0C0789D6 mov.l @(disp,pc),Rn */
	IF(0x0C0789D8u); { u32 t_ = r13; PR = 0x0C0789DCu; IF(0x0C0789DAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0789DCu); }  /* 0C0789D8 jsr @Rn */
L_0C0789DC: BLKS(0x0C0789DCu);
	r3 = R32(r9 + 0x18u); UPD(0x0C0789DEu, 1);  /* 0C0789DC mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C0789DE mov Rm,Rn */
	r1 = 0xC069B20u; UPD(0x0C0789E2u, 2);  /* 0C0789E0 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0789E2 add Rm,Rn */
	r5 = 0x80000u; UPD(0x0C0789E6u, 2);  /* 0C0789E4 mov.l @(disp,pc),Rn */
	IF(0x0C0789E6u); { u32 t_ = r1; PR = 0x0C0789EAu; W32(r8 + 0x14u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0789EAu); }  /* 0C0789E6 jsr @Rn */
L_0C0789EA: BLKS(0x0C0789EAu);
	r4 = r11;  /* 0C0789EA mov Rm,Rn */
	r5 = 0x80000u; UPD(0x0C0789EEu, 2);  /* 0C0789EC mov.l @(disp,pc),Rn */
	IF(0x0C0789EEu); { u32 t_ = r13; PR = 0x0C0789F2u; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0789F2u); }  /* 0C0789EE jsr @Rn */
L_0C0789F2: BLKS(0x0C0789F2u);
	r7 = 0x808080u; UPD(0x0C0789F4u, 1);  /* 0C0789F2 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0789F4 mov Rm,Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0789F8u, 2);  /* 0C0789F6 mov.l Rm,@(disp,Rn) */
	r14 += 0x4u;  /* 0C0789F8 add #imm,Rn */
	W32(r8 + 0x24u, r10); UPD(0x0C0789FCu, 2);  /* 0C0789FA mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r7); UPD(0x0C0789FEu, 1);  /* 0C0789FC mov.l Rm,@(disp,Rn) */
	r5 = 0xC0u; UPD(0x0C078A00u, 1);  /* 0C0789FE mov.w @(disp,pc),Rn */
	r8 += 0x2Eu;  /* 0C078A00 add #imm,Rn */
	W16(r8, r5); UPD(0x0C078A04u, 2);  /* 0C078A02 mov.w Rm,@Rn */
	r6 = 0xC0C20A0u; UPD(0x0C078A06u, 1);  /* 0C078A04 mov.l @(disp,pc),Rn */
	r5 = 0x4Fu;  /* 0C078A06 mov #imm,Rn */
	r15 = r14;  /* 0C078A08 mov Rm,Rn */
	IF(0x0C078A0Au); PR = R32(r15); r15 += 4; UPD(0x0C078A0Cu, 3);  /* 0C078A0A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C078A0Eu, 1);  /* 0C078A0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C078A10u, 1);  /* 0C078A0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C078A12u, 1);  /* 0C078A10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078A14u, 1);  /* 0C078A12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078A16u, 1);  /* 0C078A14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078A18u, 1);  /* 0C078A16 mov.l @Rm+,Rn */
	IF(0x0C078A18u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C078A18 jmp @Rn */
}

void blk_f_0C078A70(sh3_t *c)
{
	LOCALS;
	goto L_0C078A70;
L_0C077F10: BLKS(0x0C077F10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C077F12u, 1);  /* 0C077F10 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C077F12 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C077F16u, 2);  /* 0C077F14 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C077F18u, 1);  /* 0C077F16 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C077F1Au, 1);  /* 0C077F18 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C077F1Cu, 1);  /* 0C077F1A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C077F1Eu, 1);  /* 0C077F1C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C077F20u, 1);  /* 0C077F1E mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C077F20 exts.w Rm,Rn */
	r0 = 0x2A0u; UPD(0x0C077F24u, 2);  /* 0C077F22 mov.w @(disp,pc),Rn */
	IF(0x0C077F24u); r15 -= 4; W32(r15, PR); UPD(0x0C077F26u, 1);  /* 0C077F24 sts.l pr,@-Rn */
	IF(0x0C077F26u); MACL = r13 * r0;  /* 0C077F26 mul.l Rm,Rn */
	r15 += 0xFFFFFFE8u;  /* 0C077F28 add #imm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C077F2Cu, 4);  /* 0C077F2A mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C077F2C mov Rm,Rn */
	W32(r14, r5); UPD(0x0C077F30u, 2);  /* 0C077F2E mov.l Rm,@Rn */
	IF(0x0C077F30u); r0 = MACL;  /* 0C077F30 sts macl,Rn */
	r3 = 0x25Fu; UPD(0x0C077F34u, 2);  /* 0C077F32 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C077F34 add Rm,Rn */
	IF(0x0C077F36u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C077F38u, 2);  /* 0C077F36 mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C077F38 tst Rm,Rn */
	if (T) { UPD(0x0C077F44u, 4); goto L_0C077F44; }  /* 0C077F3A bt */
L_0C077F3C: BLKS(0x0C077F3Cu);
	r6 = 0x272u; UPD(0x0C077F3Eu, 1);  /* 0C077F3C mov.w @(disp,pc),Rn */
	IF(0x0C077F3Eu); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C077F40u, 1);  /* 0C077F3E mov.b @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C077F40 tst Rm,Rn */
	if (T) { UPD(0x0C077F70u, 4); goto L_0C077F70; }  /* 0C077F42 bt */
L_0C077F44: BLKS(0x0C077F44u);
	r14 += 0x18u;  /* 0C077F44 add #imm,Rn */
	UPD(0x0C077F46u, 1);
L_0C077F46: BLKS(0x0C077F46u);
	r15 = r14;  /* 0C077F46 mov Rm,Rn */
	IF(0x0C077F48u); PR = R32(r15); r15 += 4; UPD(0x0C077F4Au, 2);  /* 0C077F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C077F4Cu, 1);  /* 0C077F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C077F4Eu, 1);  /* 0C077F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C077F50u, 1);  /* 0C077F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C077F52u, 1);  /* 0C077F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C077F54u, 1);  /* 0C077F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C077F56u, 1);  /* 0C077F54 mov.l @Rm+,Rn */
	IF(0x0C077F56u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C077F56 rts */
L_0C077F70: BLKS(0x0C077F70u);
	r8 = 0xC0718C0u; UPD(0x0C077F72u, 1);  /* 0C077F70 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C077F72 mov Rm,Rn */
	r6 = 0x2u;  /* 0C077F74 mov #imm,Rn */
	IF(0x0C077F76u); { u32 t_ = r8; PR = 0x0C077F7Au; r7 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0718C0, 0x0C0718C0u, 0x0C077F7Au); }  /* 0C077F76 jsr @Rn */
L_0C077F7A: BLKS(0x0C077F7Au);
	T = (r0 & r0) == 0;  /* 0C077F7A tst Rm,Rn */
	if (T) { UPD(0x0C077F44u, 4); goto L_0C077F44; }  /* 0C077F7C bt */
L_0C077F7E: BLKS(0x0C077F7Eu);
	r4 = 0x30u;  /* 0C077F7E mov #imm,Rn */
	r2 = 0x90u; UPD(0x0C077F82u, 2);  /* 0C077F80 mov.w @(disp,pc),Rn */
	IF(0x0C077F82u); MACL = r13 * r2;  /* 0C077F82 mul.l Rm,Rn */
	r7 = R32(r14); UPD(0x0C077F86u, 3);  /* 0C077F84 mov.l @Rm,Rn */
	r11 = 0x0u;  /* 0C077F86 mov #imm,Rn */
	IF(0x0C077F88u); r0 = MACL;  /* 0C077F88 sts macl,Rn */
	IF(0x0C077F8Au); MACL = r7 * r4;  /* 0C077F8A mul.l Rm,Rn */
	r10 = 0x9C0u; UPD(0x0C077F8Eu, 5);  /* 0C077F8C mov.w @(disp,pc),Rn */
	IF(0x0C077F8Eu); r3 = MACL;  /* 0C077F8E sts macl,Rn */
	IF(0x0C077F90u); MACL = r13 * r10;  /* 0C077F90 mul.l Rm,Rn */
	r5 = 0x340u; UPD(0x0C077F94u, 4);  /* 0C077F92 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C077F94 add Rm,Rn */
	IF(0x0C077F96u); r9 = MACL;  /* 0C077F96 sts macl,Rn */
	r12 = 0xC2974C8u; UPD(0x0C077F9Au, 3);  /* 0C077F98 mov.l @(disp,pc),Rn */
	IF(0x0C077F9Au); MACL = r7 * r5;  /* 0C077F9A mul.l Rm,Rn */
	r0 += r12;  /* 0C077F9C add Rm,Rn */
	r6 = 0xC28EDFCu; UPD(0x0C077FA0u, 4);  /* 0C077F9E mov.l @(disp,pc),Rn */
	r0 += 0x24u;  /* 0C077FA0 add #imm,Rn */
	IF(0x0C077FA2u); r1 = MACL;  /* 0C077FA2 sts macl,Rn */
	W32(r14 + 0x8u, r6); UPD(0x0C077FA6u, 3);  /* 0C077FA4 mov.l Rm,@(disp,Rn) */
	r12 = (u32)(s32)(s16)R16(r0); UPD(0x0C077FA8u, 1);  /* 0C077FA6 mov.w @Rm,Rn */
	W32(r14 + 0x4u, r11); UPD(0x0C077FAAu, 1);  /* 0C077FA8 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r9); UPD(0x0C077FACu, 1);  /* 0C077FAA mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x14u, r1); UPD(0x0C077FAEu, 1);  /* 0C077FAC mov.l Rm,@(disp,Rn) */
	IF(0x0C077FAEu); ;  /* 0C077FAE nop */
	UPD(0x0C077FB0u, 1);
L_0C077FB0: BLKS(0x0C077FB0u);
	r0 = R32(r14 + 0x8u); UPD(0x0C077FB2u, 1);  /* 0C077FB0 mov.l @(disp,Rm),Rn */
	r5 = 0x34u;  /* 0C077FB2 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r0); r0 += 2; r10 = v_; } UPD(0x0C077FB6u, 2);  /* 0C077FB4 mov.w @Rm+,Rn */
	r3 = 0x3u;  /* 0C077FB6 mov #imm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C077FBAu, 2);  /* 0C077FB8 mov.l Rm,@(disp,Rn) */
	IF(0x0C077FBAu); MACL = r10 * r5;  /* 0C077FBA mul.l Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C077FBEu, 3);  /* 0C077FBC mov.l @(disp,Rm),Rn */
	r12 += 0x4u;  /* 0C077FBE add #imm,Rn */
	r8 = 0xC182844u; UPD(0x0C077FC2u, 2);  /* 0C077FC0 mov.l @(disp,pc),Rn */
	IF(0x0C077FC2u); r0 <<= 2;  /* 0C077FC2 shll2 Rn */
	IF(0x0C077FC4u); r11 = R32(r0 + r8); UPD(0x0C077FC6u, 2);  /* 0C077FC4 mov.l @(r0,Rm),Rn */
	IF(0x0C077FC6u); r6 = MACL;  /* 0C077FC6 sts macl,Rn */
	r1 = R32(r14 + 0x14u); UPD(0x0C077FCAu, 2);  /* 0C077FC8 mov.l @(disp,Rm),Rn */
	r10 = 0x30u;  /* 0C077FCA mov #imm,Rn */
	r9 = R32(r14 + 0x10u); UPD(0x0C077FCEu, 2);  /* 0C077FCC mov.l @(disp,Rm),Rn */
	r7 = 0xC8800000u; UPD(0x0C077FD0u, 1);  /* 0C077FCE mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C077FD0 add Rm,Rn */
	r0 = 0xC2380D0u; UPD(0x0C077FD4u, 2);  /* 0C077FD2 mov.l @(disp,pc),Rn */
	r9 += r6;  /* 0C077FD4 add Rm,Rn */
	IF(0x0C077FD6u); W32(r0 + r9, r7); UPD(0x0C077FD8u, 2);  /* 0C077FD6 mov.l Rm,@(r0,Rn) */
	r2 = R32(r14 + 0x10u); UPD(0x0C077FDAu, 1);  /* 0C077FD8 mov.l @(disp,Rm),Rn */
	IF(0x0C077FDAu); r9 = MACL;  /* 0C077FDA sts macl,Rn */
	r4 = R32(r14 + 0x14u); UPD(0x0C077FDEu, 2);  /* 0C077FDC mov.l @(disp,Rm),Rn */
	r9 += r2;  /* 0C077FDE add Rm,Rn */
	r8 = 0xC062780u; UPD(0x0C077FE2u, 2);  /* 0C077FE0 mov.l @(disp,pc),Rn */
	r9 += r4;  /* 0C077FE2 add Rm,Rn */
	r9 += r0;  /* 0C077FE4 add Rm,Rn */
	W32(r9 + 0x4u, r3); UPD(0x0C077FE8u, 3);  /* 0C077FE6 mov.l Rm,@(disp,Rn) */
	r4 = 0x4u;  /* 0C077FE8 mov #imm,Rn */
	IF(0x0C077FEAu); { u32 t_ = r8; PR = 0x0C077FEEu; W32(r14 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C077FEEu); }  /* 0C077FEA jsr @Rn */
L_0C077FEE: BLKS(0x0C077FEEu);
	r0 += 0x1u;  /* 0C077FEE add #imm,Rn */
	W32(r9 + 0x8u, r0); UPD(0x0C077FF2u, 2);  /* 0C077FF0 mov.l Rm,@(disp,Rn) */
	r0 = r12;  /* 0C077FF2 mov Rm,Rn */
	IF(0x0C077FF4u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C077FF4 shar Rn */
	IF(0x0C077FF6u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C077FF6 shar Rn */
	IF(0x0C077FF8u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C077FF8 shar Rn */
	r0 &= 0x3Fu;  /* 0C077FFA and #imm,r0 */
	W32(r9 + 0xCu, r0); UPD(0x0C077FFEu, 6);  /* 0C077FFC mov.l Rm,@(disp,Rn) */
	r12 += 0xFFFFFFFCu;  /* 0C077FFE add #imm,Rn */
	r9 += 0x2Cu;  /* 0C078000 add #imm,Rn */
	r1 = 0x90u; UPD(0x0C078004u, 3);  /* 0C078002 mov.w @(disp,pc),Rn */
	W16(r9, r12); UPD(0x0C078006u, 1);  /* 0C078004 mov.w Rm,@Rn */
	IF(0x0C078006u); MACL = r13 * r1;  /* 0C078006 mul.l Rm,Rn */
	r11 = 0x30000u; UPD(0x0C07800Au, 3);  /* 0C078008 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFD4u;  /* 0C07800A add #imm,Rn */
	W32(r9 + 0x20u, r11); UPD(0x0C07800Eu, 2);  /* 0C07800C mov.l Rm,@(disp,Rn) */
	r0 = R32(r14); UPD(0x0C078010u, 1);  /* 0C07800E mov.l @Rm,Rn */
	IF(0x0C078010u); r11 = MACL;  /* 0C078010 sts macl,Rn */
	IF(0x0C078012u); MACL = r0 * r10;  /* 0C078012 mul.l Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C078016u, 4);  /* 0C078014 mov.l @(disp,pc),Rn */
	IF(0x0C078016u); r5 = MACL;  /* 0C078016 sts macl,Rn */
	r11 += r5;  /* 0C078018 add Rm,Rn */
	r5 = 0x140000u; UPD(0x0C07801Cu, 3);  /* 0C07801A mov.l @(disp,pc),Rn */
	IF(0x0C07801Cu); { u32 t_ = r8; PR = 0x0C078020u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C078020u); }  /* 0C07801C jsr @Rn */
L_0C078020: BLKS(0x0C078020u);
	r7 = 0xC069AF0u; UPD(0x0C078022u, 1);  /* 0C078020 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C078022 mov Rm,Rn */
	r4 = r12;  /* 0C078024 mov Rm,Rn */
	IF(0x0C078026u); { u32 t_ = r7; PR = 0x0C07802Au; r5 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07802Au); }  /* 0C078026 jsr @Rn */
L_0C07802A: BLKS(0x0C07802Au);
	r8 -= r0;  /* 0C07802A sub Rm,Rn */
	r1 = r8;  /* 0C07802C mov Rm,Rn */
	r10 = 0xC2974C8u; UPD(0x0C078030u, 3);  /* 0C07802E mov.l @(disp,pc),Rn */
	r1 += r1;  /* 0C078030 add Rm,Rn */
	r1 += r8;  /* 0C078032 add Rm,Rn */
	IF(0x0C078034u); T = (s32)r1 >= 0;  /* 0C078034 cmp/pz Rn */
	{ u32 c_ = !T; r10 += r11; /* slot add Rm,Rn */ if (c_) { UPD(0x0C078110u, 6); goto L_0C078110; } UPD(0x0C07803Au, 1); goto L_0C07803A; }  /* 0C078036 bf/s */
L_0C07803A: BLKS(0x0C07803Au);
	r0 = R32(r10 + 0x14u); UPD(0x0C07803Cu, 1);  /* 0C07803A mov.l @(disp,Rm),Rn */
	IF(0x0C07803Cu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C07803C shar Rn */
	IF(0x0C07803Eu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C07803E shar Rn */
	r2 = 0xC069AF0u; UPD(0x0C078042u, 3);  /* 0C078040 mov.l @(disp,pc),Rn */
	r0 += r1;  /* 0C078042 add Rm,Rn */
	r4 = 0x10000u; UPD(0x0C078046u, 2);  /* 0C078044 mov.l @(disp,pc),Rn */
	r0 += r4;  /* 0C078046 add Rm,Rn */
	r4 = r12;  /* 0C078048 mov Rm,Rn */
	r5 = 0x140000u; UPD(0x0C07804Cu, 3);  /* 0C07804A mov.l @(disp,pc),Rn */
	IF(0x0C07804Cu); { u32 t_ = r2; PR = 0x0C078050u; W32(r9 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C078050u); }  /* 0C07804C jsr @Rn */
L_0C078050: BLKS(0x0C078050u);
	r6 = 0xC069B20u; UPD(0x0C078052u, 1);  /* 0C078050 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C078052 mov Rm,Rn */
	r8 = R32(r10 + 0x18u); UPD(0x0C078056u, 2);  /* 0C078054 mov.l @(disp,Rm),Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C078058u, 1);  /* 0C078056 mov.l @(disp,Rm),Rn */
	IF(0x0C078058u); { u32 t_ = r6; PR = 0x0C07805Cu; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07805Cu); }  /* 0C078058 jsr @Rn */
L_0C07805C: BLKS(0x0C07805Cu);
	r8 += r0;  /* 0C07805C add Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C078060u, 2);  /* 0C07805E mov.l @(disp,Rm),Rn */
	r3 = 0xC18284Cu; UPD(0x0C078062u, 1);  /* 0C078060 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C078062 add Rm,Rn */
	W32(r9 + 0x14u, r8); UPD(0x0C078066u, 2);  /* 0C078064 mov.l Rm,@(disp,Rn) */
	IF(0x0C078066u); r8 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C078068u, 1);  /* 0C078066 mov.w @(r0,Rm),Rn */
	r1 = 0xC069B20u; UPD(0x0C07806Au, 1);  /* 0C078068 mov.l @(disp,pc),Rn */
	r8 += r12;  /* 0C07806A add Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C07806Eu, 2);  /* 0C07806C mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r8;  /* 0C07806E exts.w Rm,Rn */
	r5 = 0x30000u; UPD(0x0C078072u, 2);  /* 0C078070 mov.l @(disp,pc),Rn */
	IF(0x0C078072u); { u32 t_ = r1; PR = 0x0C078076u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C078076u); }  /* 0C078072 jsr @Rn */
L_0C078076: BLKS(0x0C078076u);
	r4 = r12;  /* 0C078076 mov Rm,Rn */
	r5 = 0x30000u; UPD(0x0C07807Au, 2);  /* 0C078078 mov.l @(disp,pc),Rn */
	IF(0x0C07807Au); { u32 t_ = r10; PR = 0x0C07807Eu; W32(r9 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07807Eu); }  /* 0C07807A jsr @Rn */
L_0C07807E: BLKS(0x0C07807Eu);
	r6 = R32(r14 + 0x4u); UPD(0x0C078080u, 1);  /* 0C07807E mov.l @(disp,Rm),Rn */
	r5 = 0x0u;  /* 0C078080 mov #imm,Rn */
	r6 += 0x1u;  /* 0C078082 add #imm,Rn */
	r2 = (u32)(s32)(s16)r6;  /* 0C078084 exts.w Rm,Rn */
	W32(r14 + 0x4u, r2); UPD(0x0C078088u, 4);  /* 0C078086 mov.l Rm,@(disp,Rn) */
	r3 = 0x1u;  /* 0C078088 mov #imm,Rn */
	r7 = 0x808080u; UPD(0x0C07808Cu, 2);  /* 0C07808A mov.l @(disp,pc),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C07808Eu, 1);  /* 0C07808C mov.l @(disp,Rm),Rn */
	W32(r9 + 0x1Cu, r0); UPD(0x0C078090u, 1);  /* 0C07808E mov.l Rm,@(disp,Rn) */
	T = (s32)r4 > (s32)r3;  /* 0C078090 cmp/gt Rm,Rn */
	W32(r9 + 0x24u, r5); UPD(0x0C078094u, 2);  /* 0C078092 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r9 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C077FB0u, 3); goto L_0C077FB0; } UPD(0x0C078098u, 1); goto L_0C078098; }  /* 0C078094 bf/s */
L_0C078098: BLKS(0x0C078098u);
	r8 = 0xC0C20A0u; UPD(0x0C07809Au, 1);  /* 0C078098 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C07809A mov Rm,Rn */
	IF(0x0C07809Cu); { u32 t_ = r8; PR = 0x0C0780A0u; r5 = 0x4Eu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C0780A0u); }  /* 0C07809C jsr @Rn */
L_0C0780A0: BLKS(0x0C0780A0u);
	r12 = 0xC0C2360u; UPD(0x0C0780A2u, 1);  /* 0C0780A0 mov.l @(disp,pc),Rn */
	r8 = 0xC2974C8u; UPD(0x0C0780A4u, 1);  /* 0C0780A2 mov.l @(disp,pc),Rn */
	IF(0x0C0780A4u); { u32 t_ = r12; PR = 0x0C0780A8u; r8 += r11; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0780A8u); }  /* 0C0780A4 jsr @Rn */
L_0C0780A8: BLKS(0x0C0780A8u);
	r8 += 0x24u;  /* 0C0780A8 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C0780ACu, 2);  /* 0C0780AA mov.w @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0780AC and #imm,r0 */
	r9 = 0xF0u; UPD(0x0C0780B0u, 2);  /* 0C0780AE mov.w @(disp,pc),Rn */
	r0 += r6;  /* 0C0780B0 add Rm,Rn */
	r11 = 0xC069B20u; UPD(0x0C0780B4u, 2);  /* 0C0780B2 mov.l @(disp,pc),Rn */
	r0 += r9;  /* 0C0780B4 add Rm,Rn */
	r13 = 0xC0000u; UPD(0x0C0780B8u, 2);  /* 0C0780B6 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0780B8 exts.w Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C0780BA add #imm,Rn */
	r8 += 0xFFFFFFDCu;  /* 0C0780BC add #imm,Rn */
	r4 = r12;  /* 0C0780BE mov Rm,Rn */
	IF(0x0C0780C0u); { u32 t_ = r11; PR = 0x0C0780C4u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 6); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0780C4u); }  /* 0C0780C0 jsr @Rn */
L_0C0780C4: BLKS(0x0C0780C4u);
	r9 = R32(r8 + 0x14u); UPD(0x0C0780C6u, 1);  /* 0C0780C4 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C0780C6 mov Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C0780CAu, 2);  /* 0C0780C8 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C0780CA add Rm,Rn */
	r3 = 0x10000u; UPD(0x0C0780CEu, 2);  /* 0C0780CC mov.l @(disp,pc),Rn */
	r5 = r13;  /* 0C0780CE mov Rm,Rn */
	IF(0x0C0780D0u); { u32 t_ = r10; PR = 0x0C0780D4u; r9 += r3; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0780D4u); }  /* 0C0780D0 jsr @Rn */
L_0C0780D4: BLKS(0x0C0780D4u);
	r13 = R32(r8 + 0x18u); UPD(0x0C0780D6u, 1);  /* 0C0780D4 mov.l @(disp,Rm),Rn */
	r5 = 0x0u;  /* 0C0780D6 mov #imm,Rn */
	W32(r15, r5); UPD(0x0C0780DAu, 2);  /* 0C0780D8 mov.l Rm,@Rn */
	r7 = 0x14u;  /* 0C0780DA mov #imm,Rn */
	r13 += r0;  /* 0C0780DC add Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0780E0u, 3);  /* 0C0780DE mov.l Rm,@(disp,Rn) */
	r5 = 0x10000u; UPD(0x0C0780E2u, 1);  /* 0C0780E0 mov.l @(disp,pc),Rn */
	IF(0x0C0780E2u); { u32 t_ = r11; PR = 0x0C0780E6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0780E6u); }  /* 0C0780E2 jsr @Rn */
L_0C0780E6: BLKS(0x0C0780E6u);
	r11 = 0xC069AF0u; UPD(0x0C0780E8u, 1);  /* 0C0780E6 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0780E8 mov Rm,Rn */
	r5 = 0x10000u; UPD(0x0C0780ECu, 2);  /* 0C0780EA mov.l @(disp,pc),Rn */
	IF(0x0C0780ECu); { u32 t_ = r11; PR = 0x0C0780F0u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0780F0u); }  /* 0C0780EC jsr @Rn */
L_0C0780F0: BLKS(0x0C0780F0u);
	r12 = 0x808080u; UPD(0x0C0780F2u, 1);  /* 0C0780F0 mov.l @(disp,pc),Rn */
	r7 = r13;  /* 0C0780F2 mov Rm,Rn */
	r13 = 0xC0BEEF0u; UPD(0x0C0780F6u, 2);  /* 0C0780F4 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0780F6 mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0780FAu, 2);  /* 0C0780F8 mov.l Rm,@(disp,Rn) */
	r6 = r9;  /* 0C0780FA mov Rm,Rn */
	W32(r15 + 0x10u, r12); UPD(0x0C0780FEu, 2);  /* 0C0780FC mov.l Rm,@(disp,Rn) */
	IF(0x0C0780FEu); { u32 t_ = r13; PR = 0x0C078102u; r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C078102u); }  /* 0C0780FE jsr @Rn */
L_0C078102: BLKS(0x0C078102u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C077F46u, 3); goto L_0C077F46; }  /* 0C078102 bra */
L_0C078110: BLKS(0x0C078110u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C07803Au, 3); goto L_0C07803A; }  /* 0C078110 bra */
L_0C078A70: BLKS(0x0C078A70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C078A72u, 1);  /* 0C078A70 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C078A74u, 1);  /* 0C078A72 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C078A74 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C078A78u, 2);  /* 0C078A76 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C078A78 exts.w Rm,Rn */
	r0 = 0xC0779B0u; UPD(0x0C078A7Cu, 2);  /* 0C078A7A mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C078A7C mov Rm,Rn */
	IF(0x0C078A7Eu); r15 -= 4; W32(r15, PR); UPD(0x0C078A80u, 2);  /* 0C078A7E sts.l pr,@-Rn */
	r5 = r9;  /* 0C078A80 mov Rm,Rn */
	IF(0x0C078A82u); { u32 t_ = r0; PR = 0x0C078A86u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0779B0, 0x0C0779B0u, 0x0C078A86u); }  /* 0C078A82 jsr @Rn */
L_0C078A86: BLKS(0x0C078A86u);
	r0 = 0xC077F10u; UPD(0x0C078A88u, 1);  /* 0C078A86 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C078A88 mov Rm,Rn */
	r5 = r9;  /* 0C078A8A mov Rm,Rn */
	r15 = r14;  /* 0C078A8C mov Rm,Rn */
	IF(0x0C078A8Eu); PR = R32(r15); r15 += 4; UPD(0x0C078A90u, 4);  /* 0C078A8E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C078A92u, 1);  /* 0C078A90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078A94u, 1);  /* 0C078A92 mov.l @Rm+,Rn */
	IF(0x0C078A94u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C077F10u: goto L_0C077F10; default: JUMPD(tv_); } }  /* 0C078A94 jmp @Rn */
}

void blk_f_0C078AA0(sh3_t *c)
{
	LOCALS;
	goto L_0C078AA0;
L_0C078690: BLKS(0x0C078690u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C078692u, 1);  /* 0C078690 mov.l Rm,@-Rn */
	r3 = 0x30u;  /* 0C078692 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C078696u, 2);  /* 0C078694 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C078698u, 1);  /* 0C078696 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07869Au, 1);  /* 0C078698 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C07869A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07869Eu, 2);  /* 0C07869C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0786A0u, 1);  /* 0C07869E mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0786A0 exts.w Rm,Rn */
	r4 = 0x90u; UPD(0x0C0786A4u, 2);  /* 0C0786A2 mov.w @(disp,pc),Rn */
	IF(0x0C0786A4u); MACL = r13 * r4;  /* 0C0786A4 mul.l Rm,Rn */
	r0 = 0xC2974C8u; UPD(0x0C0786A8u, 3);  /* 0C0786A6 mov.l @(disp,pc),Rn */
	IF(0x0C0786A8u); r8 = MACL;  /* 0C0786A8 sts macl,Rn */
	IF(0x0C0786AAu); MACL = r10 * r3;  /* 0C0786AA mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0786AEu, 4);  /* 0C0786AC mov.l Rm,@-Rn */
	IF(0x0C0786AEu); r2 = MACL;  /* 0C0786AE sts macl,Rn */
	r8 += r2;  /* 0C0786B0 add Rm,Rn */
	r8 += r0;  /* 0C0786B2 add Rm,Rn */
	IF(0x0C0786B4u); r15 -= 4; W32(r15, PR); UPD(0x0C0786B6u, 4);  /* 0C0786B4 sts.l pr,@-Rn */
	r9 = r8;  /* 0C0786B6 mov Rm,Rn */
	r9 += 0x2Au;  /* 0C0786B8 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0786BCu, 3);  /* 0C0786BA mov.b @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0786BC add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C0786BE tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0786C8u, 5); goto L_0C0786C8; } goto L_0C0786C4; }  /* 0C0786C0 bt/s */
L_0C0786C4: BLKS(0x0C0786C4u);
	{ r9 = r8; /* slot mov Rm,Rn */ UPD(0x0C0788C0u, 4); goto L_0C0788C0; }  /* 0C0786C4 bra */
L_0C0786C8: BLKS(0x0C0786C8u);
	r11 = 0x2A0u; UPD(0x0C0786CAu, 1);  /* 0C0786C8 mov.w @(disp,pc),Rn */
	IF(0x0C0786CAu); MACL = r13 * r11;  /* 0C0786CA mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C0786CEu, 3);  /* 0C0786CC mov.l @(disp,pc),Rn */
	IF(0x0C0786CEu); r0 = MACL;  /* 0C0786CE sts macl,Rn */
	r6 = 0x25Fu; UPD(0x0C0786D2u, 2);  /* 0C0786D0 mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C0786D2 add Rm,Rn */
	IF(0x0C0786D4u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0786D6u, 2);  /* 0C0786D4 mov.b @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C0786D6 tst Rm,Rn */
	if (T) { UPD(0x0C0786E2u, 4); goto L_0C0786E2; }  /* 0C0786D8 bt */
L_0C0786DA: BLKS(0x0C0786DAu);
	r12 = 0x272u; UPD(0x0C0786DCu, 1);  /* 0C0786DA mov.w @(disp,pc),Rn */
	IF(0x0C0786DCu); r11 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0786DEu, 1);  /* 0C0786DC mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C0786DE tst Rm,Rn */
	if (T) { UPD(0x0C078700u, 4); goto L_0C078700; }  /* 0C0786E0 bt */
L_0C0786E2: BLKS(0x0C0786E2u);
	r14 += 0x4u;  /* 0C0786E2 add #imm,Rn */
	UPD(0x0C0786E4u, 1);
L_0C0786E4: BLKS(0x0C0786E4u);
	r15 = r14;  /* 0C0786E4 mov Rm,Rn */
	IF(0x0C0786E6u); PR = R32(r15); r15 += 4; UPD(0x0C0786E8u, 2);  /* 0C0786E6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0786EAu, 1);  /* 0C0786E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0786ECu, 1);  /* 0C0786EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0786EEu, 1);  /* 0C0786EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0786F0u, 1);  /* 0C0786EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0786F2u, 1);  /* 0C0786F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0786F4u, 1);  /* 0C0786F2 mov.l @Rm+,Rn */
	IF(0x0C0786F4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0786F4 rts */
L_0C078700: BLKS(0x0C078700u);
	r12 = 0xC0718C0u; UPD(0x0C078702u, 1);  /* 0C078700 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C078702 mov Rm,Rn */
	r5 = r10;  /* 0C078704 mov Rm,Rn */
	r6 = 0x10u;  /* 0C078706 mov #imm,Rn */
	IF(0x0C078708u); { u32 t_ = r12; PR = 0x0C07870Cu; r7 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0718C0, 0x0C0718C0u, 0x0C07870Cu); }  /* 0C078708 jsr @Rn */
L_0C07870C: BLKS(0x0C07870Cu);
	T = (r0 & r0) == 0;  /* 0C07870C tst Rm,Rn */
	if (T) { UPD(0x0C0786E2u, 4); goto L_0C0786E2; }  /* 0C07870E bt */
L_0C078710: BLKS(0x0C078710u);
	r0 = 0x10u;  /* 0C078710 mov #imm,Rn */
	r8 += 0x2Bu;  /* 0C078712 add #imm,Rn */
	W8(r9, r0); UPD(0x0C078716u, 3);  /* 0C078714 mov.b Rm,@Rn */
	W8(r8, r11); UPD(0x0C078718u, 1);  /* 0C078716 mov.b Rm,@Rn */
	r4 = r13;  /* 0C078718 mov Rm,Rn */
	UPD(0x0C07871Au, 1);
L_0C07871A: BLKS(0x0C07871Au);
	r5 = r10;  /* 0C07871A mov Rm,Rn */
	r6 = 0x1u;  /* 0C07871C mov #imm,Rn */
	IF(0x0C07871Eu); { u32 t_ = r12; PR = 0x0C078722u; r7 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0718C0, 0x0C0718C0u, 0x0C078722u); }  /* 0C07871E jsr @Rn */
L_0C078722: BLKS(0x0C078722u);
	T = (r0 & r0) == 0;  /* 0C078722 tst Rm,Rn */
	if (T) { UPD(0x0C0786E2u, 4); goto L_0C0786E2; }  /* 0C078724 bt */
L_0C078726: BLKS(0x0C078726u);
	r7 = 0x30u;  /* 0C078726 mov #imm,Rn */
	r11 = 0x90u; UPD(0x0C07872Au, 2);  /* 0C078728 mov.w @(disp,pc),Rn */
	IF(0x0C07872Au); MACL = r13 * r11;  /* 0C07872A mul.l Rm,Rn */
	r5 = 0xC2974C8u; UPD(0x0C07872Eu, 3);  /* 0C07872C mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C07872E mov #imm,Rn */
	IF(0x0C078730u); r11 = MACL;  /* 0C078730 sts macl,Rn */
	IF(0x0C078732u); MACL = r10 * r7;  /* 0C078732 mul.l Rm,Rn */
	r1 = 0x7u;  /* 0C078734 mov #imm,Rn */
	r2 = 0xC182872u; UPD(0x0C078738u, 6);  /* 0C078736 mov.l @(disp,pc),Rn */
	IF(0x0C078738u); r6 = MACL;  /* 0C078738 sts macl,Rn */
	r11 += r6;  /* 0C07873A add Rm,Rn */
	r11 += r5;  /* 0C07873C add Rm,Rn */
	r4 = r11;  /* 0C07873E mov Rm,Rn */
	r4 += 0x2Au;  /* 0C078740 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C078744u, 6);  /* 0C078742 mov.b @Rm,Rn */
	r11 += 0x2Bu;  /* 0C078744 add #imm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C078746 add #imm,Rn */
	W8(r4, r0); UPD(0x0C07874Au, 3);  /* 0C078748 mov.b Rm,@Rn */
	T = (r10 & r10) == 0;  /* 0C07874A tst Rm,Rn */
	W8(r11, r3); UPD(0x0C07874Eu, 2);  /* 0C07874C mov.b Rm,@Rn */
	r0 &= r1;  /* 0C07874E and Rm,Rn */
	r0 += r0;  /* 0C078750 add Rm,Rn */
	IF(0x0C078752u); r12 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C078754u, 3);  /* 0C078752 mov.w @(r0,Rm),Rn */
	{ u32 c_ = T; r11 += 0xFFFFFFD5u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07875Cu, 3); goto L_0C07875C; } goto L_0C078758; }  /* 0C078754 bt/s */
L_0C078758: BLKS(0x0C078758u);
	r0 = 0u - r12;  /* 0C078758 neg Rm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C07875A exts.w Rm,Rn */
	UPD(0x0C07875Cu, 3);
L_0C07875C: BLKS(0x0C07875Cu);
	r8 = 0x9C0u; UPD(0x0C07875Eu, 1);  /* 0C07875C mov.w @(disp,pc),Rn */
	r5 = r11;  /* 0C07875E mov Rm,Rn */
	IF(0x0C078760u); MACL = r13 * r8;  /* 0C078760 mul.l Rm,Rn */
	r2 = 0x340u; UPD(0x0C078764u, 4);  /* 0C078762 mov.w @(disp,pc),Rn */
	r5 += 0x24u;  /* 0C078764 add #imm,Rn */
	IF(0x0C078766u); r8 = MACL;  /* 0C078766 sts macl,Rn */
	IF(0x0C078768u); MACL = r10 * r2;  /* 0C078768 mul.l Rm,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C07876Cu, 5);  /* 0C07876A mov.l @(disp,pc),Rn */
	r3 = 0x34u;  /* 0C07876C mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C078770u, 2);  /* 0C07876E mov.w @Rm,Rn */
	r13 += 0x5u;  /* 0C078770 add #imm,Rn */
	W32(r14, r5); UPD(0x0C078774u, 2);  /* 0C078772 mov.l Rm,@Rn */
	r4 += r12;  /* 0C078774 add Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r0); UPD(0x0C078778u, 2);  /* 0C078776 mov.w @Rm,Rn */
	IF(0x0C078778u); r5 = MACL;  /* 0C078778 sts macl,Rn */
	IF(0x0C07877Au); MACL = r9 * r3;  /* 0C07877A mul.l Rm,Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C07877C exts.w Rm,Rn */
	r0 = r8;  /* 0C07877E mov Rm,Rn */
	IF(0x0C078780u); r6 = MACL;  /* 0C078780 sts macl,Rn */
	r7 = 0xC8800000u; UPD(0x0C078784u, 7);  /* 0C078782 mov.l @(disp,pc),Rn */
	r0 += r5;  /* 0C078784 add Rm,Rn */
	r4 = 0xC2380D0u; UPD(0x0C078788u, 2);  /* 0C078786 mov.l @(disp,pc),Rn */
	r0 += r6;  /* 0C078788 add Rm,Rn */
	r8 += r6;  /* 0C07878A add Rm,Rn */
	r10 = 0xC062780u; UPD(0x0C07878Eu, 3);  /* 0C07878C mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C07878E add Rm,Rn */
	IF(0x0C078790u); W32(r0 + r4, r7); UPD(0x0C078792u, 2);  /* 0C078790 mov.l Rm,@(r0,Rn) */
	r8 += r4;  /* 0C078792 add Rm,Rn */
	W32(r8 + 0x4u, r13); UPD(0x0C078796u, 2);  /* 0C078794 mov.l Rm,@(disp,Rn) */
	IF(0x0C078796u); { u32 t_ = r10; PR = 0x0C07879Au; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07879Au); }  /* 0C078796 jsr @Rn */
L_0C07879A: BLKS(0x0C07879Au);
	r0 += 0x20u;  /* 0C07879A add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C07879Eu, 2);  /* 0C07879C mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C07879E mov Rm,Rn */
	r0 = r12;  /* 0C0787A0 mov Rm,Rn */
	r0 += 0x8u;  /* 0C0787A2 add #imm,Rn */
	IF(0x0C0787A4u); r0 >>= 2;  /* 0C0787A4 shlr2 Rn */
	IF(0x0C0787A6u); r0 >>= 2;  /* 0C0787A6 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C0787A8 and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C0787ACu, 7);  /* 0C0787AA mov.l Rm,@(disp,Rn) */
	r13 += 0xFFFFFFFBu;  /* 0C0787AC add #imm,Rn */
	r8 += 0x2Cu;  /* 0C0787AE add #imm,Rn */
	W16(r8, r12); UPD(0x0C0787B2u, 3);  /* 0C0787B0 mov.w Rm,@Rn */
	r9 = 0xC069B20u; UPD(0x0C0787B4u, 1);  /* 0C0787B2 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFD4u;  /* 0C0787B4 add #imm,Rn */
	r0 = 0x70000u; UPD(0x0C0787B8u, 2);  /* 0C0787B6 mov.l @(disp,pc),Rn */
	r5 = 0xC0000u; UPD(0x0C0787BAu, 1);  /* 0C0787B8 mov.l @(disp,pc),Rn */
	IF(0x0C0787BAu); { u32 t_ = r9; PR = 0x0C0787BEu; W32(r8 + 0x20u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0787BEu); }  /* 0C0787BA jsr @Rn */
L_0C0787BE: BLKS(0x0C0787BEu);
	r10 = R32(r11 + 0x14u); UPD(0x0C0787C0u, 1);  /* 0C0787BE mov.l @(disp,Rm),Rn */
	r9 = 0xFFFC0000u; UPD(0x0C0787C2u, 1);  /* 0C0787C0 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C0787C2 add Rm,Rn */
	r10 += r9;  /* 0C0787C4 add Rm,Rn */
	W32(r8 + 0x10u, r10); UPD(0x0C0787C8u, 3);  /* 0C0787C6 mov.l Rm,@(disp,Rn) */
	r10 = 0xC069AF0u; UPD(0x0C0787CAu, 1);  /* 0C0787C8 mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C0787CCu, 1);  /* 0C0787CA mov.l @(disp,pc),Rn */
	IF(0x0C0787CCu); { u32 t_ = r10; PR = 0x0C0787D0u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0787D0u); }  /* 0C0787CC jsr @Rn */
L_0C0787D0: BLKS(0x0C0787D0u);
	r3 = 0xC069B20u; UPD(0x0C0787D2u, 1);  /* 0C0787D0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0787D2 mov Rm,Rn */
	r2 = R32(r11 + 0x18u); UPD(0x0C0787D6u, 2);  /* 0C0787D4 mov.l @(disp,Rm),Rn */
	r5 = 0x70000u; UPD(0x0C0787D8u, 1);  /* 0C0787D6 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C0787D8 add Rm,Rn */
	IF(0x0C0787DAu); { u32 t_ = r3; PR = 0x0C0787DEu; W32(r8 + 0x14u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0787DEu); }  /* 0C0787DA jsr @Rn */
L_0C0787DE: BLKS(0x0C0787DEu);
	r4 = r12;  /* 0C0787DE mov Rm,Rn */
	r5 = 0x70000u; UPD(0x0C0787E2u, 2);  /* 0C0787E0 mov.l @(disp,pc),Rn */
	IF(0x0C0787E2u); { u32 t_ = r10; PR = 0x0C0787E6u; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0787E6u); }  /* 0C0787E2 jsr @Rn */
L_0C0787E6: BLKS(0x0C0787E6u);
	r7 = 0x217FF00u; UPD(0x0C0787E8u, 1);  /* 0C0787E6 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0787E8 mov #imm,Rn */
	r6 = 0x808080u; UPD(0x0C0787ECu, 2);  /* 0C0787EA mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0787EC mov Rm,Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C0787F0u, 2);  /* 0C0787EE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r6); UPD(0x0C0787F2u, 1);  /* 0C0787F0 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0787F4u, 1);  /* 0C0787F2 mov.l Rm,@(disp,Rn) */
	r8 += 0x30u;  /* 0C0787F4 add #imm,Rn */
	W8(r8, r5); UPD(0x0C0787F8u, 2);  /* 0C0787F6 mov.b Rm,@Rn */
	r8 = 0xC0C20A0u; UPD(0x0C0787FAu, 1);  /* 0C0787F8 mov.l @(disp,pc),Rn */
	r13 = 0xC0C2360u; UPD(0x0C0787FCu, 1);  /* 0C0787FA mov.l @(disp,pc),Rn */
	IF(0x0C0787FCu); { u32 t_ = r8; PR = 0x0C078800u; r5 = 0x52u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C078800u); }  /* 0C0787FC jsr @Rn */
L_0C078800: BLKS(0x0C078800u);
	r12 = 0xF0u; UPD(0x0C078802u, 1);  /* 0C078800 mov.w @(disp,pc),Rn */
	IF(0x0C078802u); { u32 t_ = r13; PR = 0x0C078806u; IF(0x0C078804u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C078806u); }  /* 0C078802 jsr @Rn */
L_0C078806: BLKS(0x0C078806u);
	r1 = R32(r14); UPD(0x0C078808u, 1);  /* 0C078806 mov.l @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C078808 and #imm,r0 */
	r4 = (u32)(s32)(s16)R16(r1); UPD(0x0C07880Cu, 2);  /* 0C07880A mov.w @Rm,Rn */
	r15 += 0xFFFFFFF0u;  /* 0C07880C add #imm,Rn */
	r0 += r4;  /* 0C07880E add Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C078812u, 3);  /* 0C078810 mov.l @(disp,pc),Rn */
	r0 += r12;  /* 0C078812 add Rm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C078814 exts.w Rm,Rn */
	r5 = 0x60000u; UPD(0x0C078818u, 3);  /* 0C078816 mov.l @(disp,pc),Rn */
	IF(0x0C078818u); { u32 t_ = r8; PR = 0x0C07881Cu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07881Cu); }  /* 0C078818 jsr @Rn */
L_0C07881C: BLKS(0x0C07881Cu);
	r8 = R32(r11 + 0x14u); UPD(0x0C07881Eu, 1);  /* 0C07881C mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C07881E mov Rm,Rn */
	r8 += r0;  /* 0C078820 add Rm,Rn */
	r5 = 0x80000u; UPD(0x0C078824u, 3);  /* 0C078822 mov.l @(disp,pc),Rn */
	IF(0x0C078824u); { u32 t_ = r10; PR = 0x0C078828u; r8 += r9; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C078828u); }  /* 0C078824 jsr @Rn */
L_0C078828: BLKS(0x0C078828u);
	r9 = 0xC069B20u; UPD(0x0C07882Au, 1);  /* 0C078828 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C07882A mov #imm,Rn */
	r13 = R32(r11 + 0x18u); UPD(0x0C07882Eu, 2);  /* 0C07882C mov.l @(disp,Rm),Rn */
	r2 = 0x14u;  /* 0C07882E mov #imm,Rn */
	r5 = 0x18000u; UPD(0x0C078832u, 2);  /* 0C078830 mov.l @(disp,pc),Rn */
	r13 += r0;  /* 0C078832 add Rm,Rn */
	W32(r15, r3); UPD(0x0C078836u, 2);  /* 0C078834 mov.l Rm,@Rn */
	r4 = r12;  /* 0C078836 mov Rm,Rn */
	IF(0x0C078838u); { u32 t_ = r9; PR = 0x0C07883Cu; W32(r15 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07883Cu); }  /* 0C078838 jsr @Rn */
L_0C07883C: BLKS(0x0C07883Cu);
	r4 = r12;  /* 0C07883C mov Rm,Rn */
	r5 = 0x20000u; UPD(0x0C078840u, 2);  /* 0C07883E mov.l @(disp,pc),Rn */
	IF(0x0C078840u); { u32 t_ = r10; PR = 0x0C078844u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C078844u); }  /* 0C078840 jsr @Rn */
L_0C078844: BLKS(0x0C078844u);
	r10 = 0xC0BE9F0u; UPD(0x0C078846u, 1);  /* 0C078844 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C078846 mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C07884Au, 2);  /* 0C078848 mov.l Rm,@(disp,Rn) */
	r6 = r8;  /* 0C07884A mov Rm,Rn */
	r4 = R32(r11); UPD(0x0C07884Eu, 2);  /* 0C07884C mov.l @Rm,Rn */
	IF(0x0C07884Eu); { u32 t_ = r10; PR = 0x0C078852u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BE9F0, 0x0C0BE9F0u, 0x0C078852u); }  /* 0C07884E jsr @Rn */
L_0C078852: BLKS(0x0C078852u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0786E4u, 3); goto L_0C0786E4; }  /* 0C078852 bra */
L_0C0788C0: BLKS(0x0C0788C0u);
	r9 += 0x2Bu;  /* 0C0788C0 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r9); UPD(0x0C0788C4u, 2);  /* 0C0788C2 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0788C4 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C0788C6 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C0788C8 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r9, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C078852u, 6); goto L_0C078852; } UPD(0x0C0788CEu, 1); goto L_0C0788CE; }  /* 0C0788CA bf/s */
L_0C0788CE: BLKS(0x0C0788CEu);
	r12 = 0xC0718C0u; UPD(0x0C0788D0u, 1);  /* 0C0788CE mov.l @(disp,pc),Rn */
	{ r4 = r13; /* slot mov Rm,Rn */ UPD(0x0C07871Au, 3); goto L_0C07871A; }  /* 0C0788D0 bra */
L_0C078AA0: BLKS(0x0C078AA0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C078AA2u, 1);  /* 0C078AA0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C078AA4u, 1);  /* 0C078AA2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C078AA4 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C078AA8u, 2);  /* 0C078AA6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C078AA8 exts.w Rm,Rn */
	r0 = 0xC0779B0u; UPD(0x0C078AACu, 2);  /* 0C078AAA mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C078AAC mov Rm,Rn */
	IF(0x0C078AAEu); r15 -= 4; W32(r15, PR); UPD(0x0C078AB0u, 2);  /* 0C078AAE sts.l pr,@-Rn */
	r5 = r9;  /* 0C078AB0 mov Rm,Rn */
	IF(0x0C078AB2u); { u32 t_ = r0; PR = 0x0C078AB6u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0779B0, 0x0C0779B0u, 0x0C078AB6u); }  /* 0C078AB2 jsr @Rn */
L_0C078AB6: BLKS(0x0C078AB6u);
	r0 = 0xC078690u; UPD(0x0C078AB8u, 1);  /* 0C078AB6 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C078AB8 mov Rm,Rn */
	r5 = r9;  /* 0C078ABA mov Rm,Rn */
	r15 = r14;  /* 0C078ABC mov Rm,Rn */
	IF(0x0C078ABEu); PR = R32(r15); r15 += 4; UPD(0x0C078AC0u, 4);  /* 0C078ABE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C078AC2u, 1);  /* 0C078AC0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078AC4u, 1);  /* 0C078AC2 mov.l @Rm+,Rn */
	IF(0x0C078AC4u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C078690u: goto L_0C078690; default: JUMPD(tv_); } }  /* 0C078AC4 jmp @Rn */
}

void blk_f_0C078AD0(sh3_t *c)
{
	LOCALS;
L_0C078AD0: BLKS(0x0C078AD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C078AD2u, 1);  /* 0C078AD0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C078AD4u, 1);  /* 0C078AD2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C078AD4 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C078AD8u, 2);  /* 0C078AD6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C078AD8 exts.w Rm,Rn */
	r7 = 0xC0779B0u; UPD(0x0C078ADCu, 2);  /* 0C078ADA mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C078ADC mov Rm,Rn */
	IF(0x0C078ADEu); r15 -= 4; W32(r15, PR); UPD(0x0C078AE0u, 2);  /* 0C078ADE sts.l pr,@-Rn */
	r5 = r9;  /* 0C078AE0 mov Rm,Rn */
	IF(0x0C078AE2u); { u32 t_ = r7; PR = 0x0C078AE6u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0779B0, 0x0C0779B0u, 0x0C078AE6u); }  /* 0C078AE2 jsr @Rn */
L_0C078AE6: BLKS(0x0C078AE6u);
	r6 = 0xC078490u; UPD(0x0C078AE8u, 1);  /* 0C078AE6 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C078AE8 mov Rm,Rn */
	IF(0x0C078AEAu); { u32 t_ = r6; PR = 0x0C078AEEu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C078490, 0x0C078490u, 0x0C078AEEu); }  /* 0C078AEA jsr @Rn */
L_0C078AEE: BLKS(0x0C078AEEu);
	r3 = 0x90u; UPD(0x0C078AF0u, 1);  /* 0C078AEE mov.w @(disp,pc),Rn */
	r4 = 0x30u;  /* 0C078AF0 mov #imm,Rn */
	IF(0x0C078AF2u); MACL = r8 * r3;  /* 0C078AF2 mul.l Rm,Rn */
	r0 = 0xC2974C8u; UPD(0x0C078AF6u, 4);  /* 0C078AF4 mov.l @(disp,pc),Rn */
	IF(0x0C078AF6u); r3 = MACL;  /* 0C078AF6 sts macl,Rn */
	IF(0x0C078AF8u); MACL = r9 * r4;  /* 0C078AF8 mul.l Rm,Rn */
	IF(0x0C078AFAu); r2 = MACL;  /* 0C078AFA sts macl,Rn */
	r3 += r2;  /* 0C078AFC add Rm,Rn */
	r3 += r0;  /* 0C078AFE add Rm,Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C078B02u, 7);  /* 0C078B00 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C078B02 add #imm,Rn */
	r0 &= 0x3u;  /* 0C078B04 and #imm,r0 */
	W32(r3 + 0x8u, r0); UPD(0x0C078B08u, 3);  /* 0C078B06 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C078B08 mov Rm,Rn */
	IF(0x0C078B0Au); PR = R32(r15); r15 += 4; UPD(0x0C078B0Cu, 2);  /* 0C078B0A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C078B0Eu, 1);  /* 0C078B0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078B10u, 1);  /* 0C078B0E mov.l @Rm+,Rn */
	IF(0x0C078B10u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C078B10 rts */
}

void blk_f_0C078B30(sh3_t *c)
{
	LOCALS;
	goto L_0C078B30;
L_0C0788E0: BLKS(0x0C0788E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0788E2u, 1);  /* 0C0788E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0788E4u, 1);  /* 0C0788E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0788E6u, 1);  /* 0C0788E4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0788E8u, 1);  /* 0C0788E6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0788EAu, 1);  /* 0C0788E8 mov.l Rm,@-Rn */
	r0 = 0x2A0u; UPD(0x0C0788ECu, 1);  /* 0C0788EA mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0788EC exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0788F0u, 2);  /* 0C0788EE mov.l Rm,@-Rn */
	IF(0x0C0788F0u); MACL = r12 * r0;  /* 0C0788F0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0788F4u, 3);  /* 0C0788F2 mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C0788F4 exts.w Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C0788F8u, 2);  /* 0C0788F6 mov.l @(disp,pc),Rn */
	IF(0x0C0788F8u); r0 = MACL;  /* 0C0788F8 sts macl,Rn */
	IF(0x0C0788FAu); r15 -= 4; W32(r15, PR); UPD(0x0C0788FCu, 2);  /* 0C0788FA sts.l pr,@-Rn */
	r0 += r2;  /* 0C0788FC add Rm,Rn */
	r3 = 0x25Fu; UPD(0x0C078900u, 2);  /* 0C0788FE mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C078900 add #imm,Rn */
	IF(0x0C078902u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C078904u, 2);  /* 0C078902 mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C078904 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C078912u, 4); goto L_0C078912; } goto L_0C07890A; }  /* 0C078906 bt/s */
L_0C07890A: BLKS(0x0C07890Au);
	r4 = 0x272u; UPD(0x0C07890Cu, 2);  /* 0C07890A mov.w @(disp,pc),Rn */
	IF(0x0C07890Cu); r10 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C07890Eu, 1);  /* 0C07890C mov.b @(r0,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C07890E tst Rm,Rn */
	if (T) { UPD(0x0C078930u, 4); goto L_0C078930; }  /* 0C078910 bt */
L_0C078912: BLKS(0x0C078912u);
	r14 += 0x4u;  /* 0C078912 add #imm,Rn */
	r15 = r14;  /* 0C078914 mov Rm,Rn */
	IF(0x0C078916u); PR = R32(r15); r15 += 4; UPD(0x0C078918u, 3);  /* 0C078916 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07891Au, 1);  /* 0C078918 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07891Cu, 1);  /* 0C07891A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07891Eu, 1);  /* 0C07891C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078920u, 1);  /* 0C07891E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078922u, 1);  /* 0C078920 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078924u, 1);  /* 0C078922 mov.l @Rm+,Rn */
	IF(0x0C078924u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C078924 rts */
L_0C078930: BLKS(0x0C078930u);
	r8 = 0xC0718C0u; UPD(0x0C078932u, 1);  /* 0C078930 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C078932 mov Rm,Rn */
	r5 = r13;  /* 0C078934 mov Rm,Rn */
	r6 = 0x1u;  /* 0C078936 mov #imm,Rn */
	IF(0x0C078938u); { u32 t_ = r8; PR = 0x0C07893Cu; r7 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0718C0, 0x0C0718C0u, 0x0C07893Cu); }  /* 0C078938 jsr @Rn */
L_0C07893C: BLKS(0x0C07893Cu);
	T = (r0 & r0) == 0;  /* 0C07893C tst Rm,Rn */
	if (T) { UPD(0x0C078912u, 4); goto L_0C078912; }  /* 0C07893E bt */
L_0C078940: BLKS(0x0C078940u);
	r3 = 0x30u;  /* 0C078940 mov #imm,Rn */
	r9 = 0x90u; UPD(0x0C078944u, 2);  /* 0C078942 mov.w @(disp,pc),Rn */
	IF(0x0C078944u); MACL = r12 * r9;  /* 0C078944 mul.l Rm,Rn */
	r2 = 0xC2974C8u; UPD(0x0C078948u, 3);  /* 0C078946 mov.l @(disp,pc),Rn */
	r4 = 0x1Fu;  /* 0C078948 mov #imm,Rn */
	IF(0x0C07894Au); r9 = MACL;  /* 0C07894A sts macl,Rn */
	IF(0x0C07894Cu); MACL = r13 * r3;  /* 0C07894C mul.l Rm,Rn */
	r6 = 0xC062780u; UPD(0x0C078950u, 5);  /* 0C07894E mov.l @(disp,pc),Rn */
	IF(0x0C078950u); r7 = MACL;  /* 0C078950 sts macl,Rn */
	r9 += r7;  /* 0C078952 add Rm,Rn */
	r9 += r2;  /* 0C078954 add Rm,Rn */
	r5 = r9;  /* 0C078956 mov Rm,Rn */
	r5 += 0x24u;  /* 0C078958 add #imm,Rn */
	IF(0x0C07895Au); { u32 t_ = r6; PR = 0x0C07895Eu; W32(r14, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 7); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07895Eu); }  /* 0C07895A jsr @Rn */
L_0C07895E: BLKS(0x0C07895Eu);
	r1 = R32(r14); UPD(0x0C078960u, 1);  /* 0C07895E mov.l @Rm,Rn */
	r7 = 0x34u;  /* 0C078960 mov #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r1); UPD(0x0C078964u, 2);  /* 0C078962 mov.w @Rm,Rn */
	r8 = 0x9C0u; UPD(0x0C078966u, 1);  /* 0C078964 mov.w @(disp,pc),Rn */
	r0 += r11;  /* 0C078966 add Rm,Rn */
	IF(0x0C078968u); MACL = r12 * r8;  /* 0C078968 mul.l Rm,Rn */
	r0 += 0xFFFFFFF1u;  /* 0C07896A add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C07896C exts.w Rm,Rn */
	r0 = 0x340u; UPD(0x0C078970u, 6);  /* 0C07896E mov.w @(disp,pc),Rn */
	IF(0x0C078970u); r8 = MACL;  /* 0C078970 sts macl,Rn */
	IF(0x0C078972u); MACL = r13 * r0;  /* 0C078972 mul.l Rm,Rn */
	r4 = 0xC28EDFCu; UPD(0x0C078976u, 4);  /* 0C078974 mov.l @(disp,pc),Rn */
	r11 += 0x4u;  /* 0C078976 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C07897Au, 2);  /* 0C078978 mov.w @Rm,Rn */
	IF(0x0C07897Au); r6 = MACL;  /* 0C07897A sts macl,Rn */
	IF(0x0C07897Cu); MACL = r3 * r7;  /* 0C07897C mul.l Rm,Rn */
	r0 = r8;  /* 0C07897E mov Rm,Rn */
	r2 = 0xC8000000u; UPD(0x0C078982u, 5);  /* 0C078980 mov.l @(disp,pc),Rn */
	IF(0x0C078982u); r5 = MACL;  /* 0C078982 sts macl,Rn */
	r4 = 0xC2380D0u; UPD(0x0C078986u, 2);  /* 0C078984 mov.l @(disp,pc),Rn */
	r0 += r6;  /* 0C078986 add Rm,Rn */
	r3 = 0xC062780u; UPD(0x0C07898Au, 2);  /* 0C078988 mov.l @(disp,pc),Rn */
	r0 += r5;  /* 0C07898A add Rm,Rn */
	r8 += r5;  /* 0C07898C add Rm,Rn */
	IF(0x0C07898Eu); W32(r0 + r4, r2); UPD(0x0C078990u, 3);  /* 0C07898E mov.l Rm,@(r0,Rn) */
	r8 += r6;  /* 0C078990 add Rm,Rn */
	r8 += r4;  /* 0C078992 add Rm,Rn */
	r13 = 0x4u;  /* 0C078994 mov #imm,Rn */
	W32(r8 + 0x4u, r13); UPD(0x0C078998u, 4);  /* 0C078996 mov.l Rm,@(disp,Rn) */
	IF(0x0C078998u); { u32 t_ = r3; PR = 0x0C07899Cu; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07899Cu); }  /* 0C078998 jsr @Rn */
L_0C07899C: BLKS(0x0C07899Cu);
	r0 += 0x1u;  /* 0C07899C add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0789A0u, 2);  /* 0C07899E mov.l Rm,@(disp,Rn) */
	r0 = r11;  /* 0C0789A0 mov Rm,Rn */
	IF(0x0C0789A2u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0789A2 shar Rn */
	IF(0x0C0789A4u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0789A4 shar Rn */
	IF(0x0C0789A6u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0789A6 shar Rn */
	r0 &= 0x3Fu;  /* 0C0789A8 and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C0789ACu, 6);  /* 0C0789AA mov.l Rm,@(disp,Rn) */
	r11 += 0xFFFFFFFCu;  /* 0C0789AC add #imm,Rn */
	r8 += 0x2Cu;  /* 0C0789AE add #imm,Rn */
	r7 = R32(r14); UPD(0x0C0789B2u, 3);  /* 0C0789B0 mov.l @Rm,Rn */
	W16(r8, r11); UPD(0x0C0789B4u, 1);  /* 0C0789B2 mov.w Rm,@Rn */
	r6 = 0xC069B20u; UPD(0x0C0789B6u, 1);  /* 0C0789B4 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFD4u;  /* 0C0789B6 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r7); UPD(0x0C0789BAu, 2);  /* 0C0789B8 mov.w @Rm,Rn */
	r1 = 0x80000u; UPD(0x0C0789BCu, 1);  /* 0C0789BA mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFFFF;  /* 0C0789BC extu.w Rm,Rn */
	r5 = 0xC0000u; UPD(0x0C0789C0u, 2);  /* 0C0789BE mov.l @(disp,pc),Rn */
	IF(0x0C0789C0u); { u32 t_ = r6; PR = 0x0C0789C4u; W32(r8 + 0x20u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0789C4u); }  /* 0C0789C0 jsr @Rn */
L_0C0789C4: BLKS(0x0C0789C4u);
	r4 = R32(r9 + 0x14u); UPD(0x0C0789C6u, 1);  /* 0C0789C4 mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C0789C6 add Rm,Rn */
	r0 = 0xFFFD0000u; UPD(0x0C0789CAu, 2);  /* 0C0789C8 mov.l @(disp,pc),Rn */
	r2 = R32(r14); UPD(0x0C0789CCu, 1);  /* 0C0789CA mov.l @Rm,Rn */
	r4 += r0;  /* 0C0789CC add Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r2); UPD(0x0C0789D0u, 2);  /* 0C0789CE mov.w @Rm,Rn */
	W32(r8 + 0x10u, r4); UPD(0x0C0789D2u, 1);  /* 0C0789D0 mov.l Rm,@(disp,Rn) */
	r4 = r13 & 0xFFFF;  /* 0C0789D2 extu.w Rm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C0789D6u, 2);  /* 0C0789D4 mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C0789D8u, 1);  /* 0C0789D6 mov.l @(disp,pc),Rn */
	IF(0x0C0789D8u); { u32 t_ = r13; PR = 0x0C0789DCu; IF(0x0C0789DAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0789DCu); }  /* 0C0789D8 jsr @Rn */
L_0C0789DC: BLKS(0x0C0789DCu);
	r3 = R32(r9 + 0x18u); UPD(0x0C0789DEu, 1);  /* 0C0789DC mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C0789DE mov Rm,Rn */
	r1 = 0xC069B20u; UPD(0x0C0789E2u, 2);  /* 0C0789E0 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0789E2 add Rm,Rn */
	r5 = 0x80000u; UPD(0x0C0789E6u, 2);  /* 0C0789E4 mov.l @(disp,pc),Rn */
	IF(0x0C0789E6u); { u32 t_ = r1; PR = 0x0C0789EAu; W32(r8 + 0x14u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0789EAu); }  /* 0C0789E6 jsr @Rn */
L_0C0789EA: BLKS(0x0C0789EAu);
	r4 = r11;  /* 0C0789EA mov Rm,Rn */
	r5 = 0x80000u; UPD(0x0C0789EEu, 2);  /* 0C0789EC mov.l @(disp,pc),Rn */
	IF(0x0C0789EEu); { u32 t_ = r13; PR = 0x0C0789F2u; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0789F2u); }  /* 0C0789EE jsr @Rn */
L_0C0789F2: BLKS(0x0C0789F2u);
	r7 = 0x808080u; UPD(0x0C0789F4u, 1);  /* 0C0789F2 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0789F4 mov Rm,Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0789F8u, 2);  /* 0C0789F6 mov.l Rm,@(disp,Rn) */
	r14 += 0x4u;  /* 0C0789F8 add #imm,Rn */
	W32(r8 + 0x24u, r10); UPD(0x0C0789FCu, 2);  /* 0C0789FA mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r7); UPD(0x0C0789FEu, 1);  /* 0C0789FC mov.l Rm,@(disp,Rn) */
	r5 = 0xC0u; UPD(0x0C078A00u, 1);  /* 0C0789FE mov.w @(disp,pc),Rn */
	r8 += 0x2Eu;  /* 0C078A00 add #imm,Rn */
	W16(r8, r5); UPD(0x0C078A04u, 2);  /* 0C078A02 mov.w Rm,@Rn */
	r6 = 0xC0C20A0u; UPD(0x0C078A06u, 1);  /* 0C078A04 mov.l @(disp,pc),Rn */
	r5 = 0x4Fu;  /* 0C078A06 mov #imm,Rn */
	r15 = r14;  /* 0C078A08 mov Rm,Rn */
	IF(0x0C078A0Au); PR = R32(r15); r15 += 4; UPD(0x0C078A0Cu, 3);  /* 0C078A0A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C078A0Eu, 1);  /* 0C078A0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C078A10u, 1);  /* 0C078A0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C078A12u, 1);  /* 0C078A10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078A14u, 1);  /* 0C078A12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078A16u, 1);  /* 0C078A14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078A18u, 1);  /* 0C078A16 mov.l @Rm+,Rn */
	IF(0x0C078A18u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C078A18 jmp @Rn */
L_0C078B30: BLKS(0x0C078B30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C078B32u, 1);  /* 0C078B30 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C078B34u, 1);  /* 0C078B32 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C078B34 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C078B38u, 2);  /* 0C078B36 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C078B38 exts.w Rm,Rn */
	r0 = 0xC0779B0u; UPD(0x0C078B3Cu, 2);  /* 0C078B3A mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C078B3C mov Rm,Rn */
	IF(0x0C078B3Eu); r15 -= 4; W32(r15, PR); UPD(0x0C078B40u, 2);  /* 0C078B3E sts.l pr,@-Rn */
	r5 = r9;  /* 0C078B40 mov Rm,Rn */
	IF(0x0C078B42u); { u32 t_ = r0; PR = 0x0C078B46u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0779B0, 0x0C0779B0u, 0x0C078B46u); }  /* 0C078B42 jsr @Rn */
L_0C078B46: BLKS(0x0C078B46u);
	r0 = 0xC0788E0u; UPD(0x0C078B48u, 1);  /* 0C078B46 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C078B48 mov Rm,Rn */
	r5 = r9;  /* 0C078B4A mov Rm,Rn */
	r15 = r14;  /* 0C078B4C mov Rm,Rn */
	IF(0x0C078B4Eu); PR = R32(r15); r15 += 4; UPD(0x0C078B50u, 4);  /* 0C078B4E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C078B52u, 1);  /* 0C078B50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078B54u, 1);  /* 0C078B52 mov.l @Rm+,Rn */
	IF(0x0C078B54u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0788E0u: goto L_0C0788E0; default: JUMPD(tv_); } }  /* 0C078B54 jmp @Rn */
}

void blk_f_0C078B60(sh3_t *c)
{
	LOCALS;
	goto L_0C078B60;
L_0C077D40: BLKS(0x0C077D40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C077D42u, 1);  /* 0C077D40 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C077D44u, 1);  /* 0C077D42 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C077D46u, 1);  /* 0C077D44 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C077D48u, 1);  /* 0C077D46 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C077D48 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C077D4Cu, 2);  /* 0C077D4A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C077D4Eu, 1);  /* 0C077D4C mov.l Rm,@-Rn */
	r0 = 0x2A0u; UPD(0x0C077D50u, 1);  /* 0C077D4E mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C077D50 exts.w Rm,Rn */
	IF(0x0C077D52u); MACL = r13 * r0;  /* 0C077D52 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C077D56u, 4);  /* 0C077D54 mov.l Rm,@-Rn */
	r2 = 0xC29D1D8u; UPD(0x0C077D58u, 1);  /* 0C077D56 mov.l @(disp,pc),Rn */
	IF(0x0C077D58u); r0 = MACL;  /* 0C077D58 sts macl,Rn */
	IF(0x0C077D5Au); r15 -= 4; W32(r15, PR); UPD(0x0C077D5Cu, 2);  /* 0C077D5A sts.l pr,@-Rn */
	r0 += r2;  /* 0C077D5C add Rm,Rn */
	r3 = 0x25Fu; UPD(0x0C077D60u, 2);  /* 0C077D5E mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C077D60 add #imm,Rn */
	IF(0x0C077D62u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C077D64u, 2);  /* 0C077D62 mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C077D64 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C077D72u, 4); goto L_0C077D72; } goto L_0C077D6A; }  /* 0C077D66 bt/s */
L_0C077D6A: BLKS(0x0C077D6Au);
	r4 = 0x272u; UPD(0x0C077D6Cu, 2);  /* 0C077D6A mov.w @(disp,pc),Rn */
	IF(0x0C077D6Cu); r11 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C077D6Eu, 1);  /* 0C077D6C mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C077D6E tst Rm,Rn */
	if (T) { UPD(0x0C077D90u, 4); goto L_0C077D90; }  /* 0C077D70 bt */
L_0C077D72: BLKS(0x0C077D72u);
	r14 += 0x8u;  /* 0C077D72 add #imm,Rn */
	UPD(0x0C077D74u, 1);
L_0C077D74: BLKS(0x0C077D74u);
	r15 = r14;  /* 0C077D74 mov Rm,Rn */
	IF(0x0C077D76u); PR = R32(r15); r15 += 4; UPD(0x0C077D78u, 2);  /* 0C077D76 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C077D7Au, 1);  /* 0C077D78 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C077D7Cu, 1);  /* 0C077D7A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C077D7Eu, 1);  /* 0C077D7C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C077D80u, 1);  /* 0C077D7E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C077D82u, 1);  /* 0C077D80 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C077D84u, 1);  /* 0C077D82 mov.l @Rm+,Rn */
	IF(0x0C077D84u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C077D84 rts */
L_0C077D90: BLKS(0x0C077D90u);
	r8 = 0xC0718C0u; UPD(0x0C077D92u, 1);  /* 0C077D90 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C077D92 mov Rm,Rn */
	r5 = r10;  /* 0C077D94 mov Rm,Rn */
	r6 = 0x1u;  /* 0C077D96 mov #imm,Rn */
	IF(0x0C077D98u); { u32 t_ = r8; PR = 0x0C077D9Cu; r7 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0718C0, 0x0C0718C0u, 0x0C077D9Cu); }  /* 0C077D98 jsr @Rn */
L_0C077D9C: BLKS(0x0C077D9Cu);
	T = (r0 & r0) == 0;  /* 0C077D9C tst Rm,Rn */
	if (T) { UPD(0x0C077D72u, 4); goto L_0C077D72; }  /* 0C077D9E bt */
L_0C077DA0: BLKS(0x0C077DA0u);
	r3 = 0x30u;  /* 0C077DA0 mov #imm,Rn */
	r9 = 0x90u; UPD(0x0C077DA4u, 2);  /* 0C077DA2 mov.w @(disp,pc),Rn */
	IF(0x0C077DA4u); MACL = r13 * r9;  /* 0C077DA4 mul.l Rm,Rn */
	r8 = 0x9C0u; UPD(0x0C077DA8u, 3);  /* 0C077DA6 mov.w @(disp,pc),Rn */
	r4 = 0x34u;  /* 0C077DA8 mov #imm,Rn */
	IF(0x0C077DAAu); r9 = MACL;  /* 0C077DAA sts macl,Rn */
	IF(0x0C077DACu); MACL = r10 * r3;  /* 0C077DAC mul.l Rm,Rn */
	r0 = 0x340u; UPD(0x0C077DB0u, 5);  /* 0C077DAE mov.w @(disp,pc),Rn */
	IF(0x0C077DB0u); r7 = MACL;  /* 0C077DB0 sts macl,Rn */
	IF(0x0C077DB2u); MACL = r13 * r8;  /* 0C077DB2 mul.l Rm,Rn */
	r2 = 0xC28EDFCu; UPD(0x0C077DB6u, 4);  /* 0C077DB4 mov.l @(disp,pc),Rn */
	r9 += r7;  /* 0C077DB6 add Rm,Rn */
	IF(0x0C077DB8u); r8 = MACL;  /* 0C077DB8 sts macl,Rn */
	IF(0x0C077DBAu); MACL = r10 * r0;  /* 0C077DBA mul.l Rm,Rn */
	r12 = 0xC2974C8u; UPD(0x0C077DBEu, 5);  /* 0C077DBC mov.l @(disp,pc),Rn */
	r13 += 0x7u;  /* 0C077DBE add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C077DC2u, 2);  /* 0C077DC0 mov.w @Rm,Rn */
	r9 += r12;  /* 0C077DC2 add Rm,Rn */
	IF(0x0C077DC4u); r7 = MACL;  /* 0C077DC4 sts macl,Rn */
	IF(0x0C077DC6u); MACL = r5 * r4;  /* 0C077DC6 mul.l Rm,Rn */
	r6 = r9;  /* 0C077DC8 mov Rm,Rn */
	r6 += 0x24u;  /* 0C077DCA add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r6); UPD(0x0C077DCEu, 7);  /* 0C077DCC mov.w @Rm,Rn */
	IF(0x0C077DCEu); r5 = MACL;  /* 0C077DCE sts macl,Rn */
	W32(r14, r6); UPD(0x0C077DD2u, 2);  /* 0C077DD0 mov.l Rm,@Rn */
	r0 = r8;  /* 0C077DD2 mov Rm,Rn */
	r6 = 0xC2380D0u; UPD(0x0C077DD6u, 2);  /* 0C077DD4 mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C077DD6 add Rm,Rn */
	r10 = 0xC062780u; UPD(0x0C077DDAu, 2);  /* 0C077DD8 mov.l @(disp,pc),Rn */
	r0 += r7;  /* 0C077DDA add Rm,Rn */
	r8 += r7;  /* 0C077DDC add Rm,Rn */
	r3 = 0xC8000000u; UPD(0x0C077DE0u, 3);  /* 0C077DDE mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C077DE0 add Rm,Rn */
	r0 += r5;  /* 0C077DE2 add Rm,Rn */
	IF(0x0C077DE4u); W32(r0 + r6, r3); UPD(0x0C077DE6u, 3);  /* 0C077DE4 mov.l Rm,@(r0,Rn) */
	r4 = 0x4u;  /* 0C077DE6 mov #imm,Rn */
	IF(0x0C077DE8u); { u32 t_ = r10; PR = 0x0C077DECu; W32(r8 + 0x4u, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C077DECu); }  /* 0C077DE8 jsr @Rn */
L_0C077DEC: BLKS(0x0C077DECu);
	r0 += 0x1u;  /* 0C077DEC add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C077DF0u, 2);  /* 0C077DEE mov.l Rm,@(disp,Rn) */
	r12 += 0x4u;  /* 0C077DF0 add #imm,Rn */
	r0 = r12;  /* 0C077DF2 mov Rm,Rn */
	IF(0x0C077DF4u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C077DF4 shar Rn */
	IF(0x0C077DF6u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C077DF6 shar Rn */
	IF(0x0C077DF8u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C077DF8 shar Rn */
	r0 &= 0x3Fu;  /* 0C077DFA and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C077DFEu, 7);  /* 0C077DFC mov.l Rm,@(disp,Rn) */
	r12 += 0xFFFFFFFCu;  /* 0C077DFE add #imm,Rn */
	r8 += 0x2Cu;  /* 0C077E00 add #imm,Rn */
	W16(r8, r12); UPD(0x0C077E04u, 3);  /* 0C077E02 mov.w Rm,@Rn */
	r13 += 0xFFFFFFF9u;  /* 0C077E04 add #imm,Rn */
	r4 = 0x70000u; UPD(0x0C077E08u, 2);  /* 0C077E06 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFD4u;  /* 0C077E08 add #imm,Rn */
	r10 = 0xC069B20u; UPD(0x0C077E0Cu, 2);  /* 0C077E0A mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r4); UPD(0x0C077E0Eu, 1);  /* 0C077E0C mov.l Rm,@(disp,Rn) */
	r5 = 0xD0000u; UPD(0x0C077E10u, 1);  /* 0C077E0E mov.l @(disp,pc),Rn */
	IF(0x0C077E10u); { u32 t_ = r10; PR = 0x0C077E14u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C077E14u); }  /* 0C077E10 jsr @Rn */
L_0C077E14: BLKS(0x0C077E14u);
	r2 = R32(r9 + 0x14u); UPD(0x0C077E16u, 1);  /* 0C077E14 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C077E16 mov Rm,Rn */
	r3 = 0xC069AF0u; UPD(0x0C077E1Au, 2);  /* 0C077E18 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C077E1A add Rm,Rn */
	r10 = 0xFFFD0000u; UPD(0x0C077E1Eu, 2);  /* 0C077E1C mov.l @(disp,pc),Rn */
	r5 = 0x120000u; UPD(0x0C077E20u, 1);  /* 0C077E1E mov.l @(disp,pc),Rn */
	r2 += r10;  /* 0C077E20 add Rm,Rn */
	IF(0x0C077E22u); { u32 t_ = r3; PR = 0x0C077E26u; W32(r8 + 0x10u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C077E26u); }  /* 0C077E22 jsr @Rn */
L_0C077E26: BLKS(0x0C077E26u);
	r5 = R32(r9 + 0x18u); UPD(0x0C077E28u, 1);  /* 0C077E26 mov.l @(disp,Rm),Rn */
	r7 = 0xC069B20u; UPD(0x0C077E2Au, 1);  /* 0C077E28 mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C077E2A add Rm,Rn */
	W32(r8 + 0x14u, r5); UPD(0x0C077E2Eu, 2);  /* 0C077E2C mov.l Rm,@(disp,Rn) */
	r5 = 0x70000u; UPD(0x0C077E30u, 1);  /* 0C077E2E mov.l @(disp,pc),Rn */
	IF(0x0C077E30u); { u32 t_ = r7; PR = 0x0C077E34u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C077E34u); }  /* 0C077E30 jsr @Rn */
L_0C077E34: BLKS(0x0C077E34u);
	r6 = 0xC069AF0u; UPD(0x0C077E36u, 1);  /* 0C077E34 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C077E36 mov Rm,Rn */
	r5 = 0x70000u; UPD(0x0C077E3Au, 2);  /* 0C077E38 mov.l @(disp,pc),Rn */
	IF(0x0C077E3Au); { u32 t_ = r6; PR = 0x0C077E3Eu; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C077E3Eu); }  /* 0C077E3A jsr @Rn */
L_0C077E3E: BLKS(0x0C077E3Eu);
	W32(r8 + 0x1Cu, r0); UPD(0x0C077E40u, 1);  /* 0C077E3E mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C077E40 mov Rm,Rn */
	r0 = 0x808080u; UPD(0x0C077E44u, 2);  /* 0C077E42 mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r11); UPD(0x0C077E46u, 1);  /* 0C077E44 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C077E48u, 1);  /* 0C077E46 mov.l Rm,@(disp,Rn) */
	r12 = 0xC0C20A0u; UPD(0x0C077E4Au, 1);  /* 0C077E48 mov.l @(disp,pc),Rn */
	r8 = 0xC0C2360u; UPD(0x0C077E4Cu, 1);  /* 0C077E4A mov.l @(disp,pc),Rn */
	IF(0x0C077E4Cu); { u32 t_ = r12; PR = 0x0C077E50u; r5 = 0x51u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C077E50u); }  /* 0C077E4C jsr @Rn */
L_0C077E50: BLKS(0x0C077E50u);
	r12 = 0xC069AF0u; UPD(0x0C077E52u, 1);  /* 0C077E50 mov.l @(disp,pc),Rn */
	IF(0x0C077E52u); { u32 t_ = r8; PR = 0x0C077E56u; IF(0x0C077E54u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C077E56u); }  /* 0C077E52 jsr @Rn */
L_0C077E56: BLKS(0x0C077E56u);
	r1 = R32(r14); UPD(0x0C077E58u, 1);  /* 0C077E56 mov.l @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C077E58 and #imm,r0 */
	r13 = (u32)(s32)(s16)R16(r1); UPD(0x0C077E5Cu, 2);  /* 0C077E5A mov.w @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C077E5C add #imm,Rn */
	r4 = 0xF0u; UPD(0x0C077E60u, 2);  /* 0C077E5E mov.w @(disp,pc),Rn */
	r0 += r13;  /* 0C077E60 add Rm,Rn */
	r2 = 0xC069B20u; UPD(0x0C077E64u, 2);  /* 0C077E62 mov.l @(disp,pc),Rn */
	r0 += r4;  /* 0C077E64 add Rm,Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C077E66 exts.w Rm,Rn */
	r5 = 0x78000u; UPD(0x0C077E6Au, 3);  /* 0C077E68 mov.l @(disp,pc),Rn */
	IF(0x0C077E6Au); { u32 t_ = r2; PR = 0x0C077E6Eu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C077E6Eu); }  /* 0C077E6A jsr @Rn */
L_0C077E6E: BLKS(0x0C077E6Eu);
	r3 = R32(r9 + 0x14u); UPD(0x0C077E70u, 1);  /* 0C077E6E mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C077E70 mov Rm,Rn */
	r3 += r0;  /* 0C077E72 add Rm,Rn */
	r3 += r10;  /* 0C077E74 add Rm,Rn */
	r5 = 0xA0000u; UPD(0x0C077E78u, 4);  /* 0C077E76 mov.l @(disp,pc),Rn */
	IF(0x0C077E78u); { u32 t_ = r12; PR = 0x0C077E7Cu; W32(r14 + 0x4u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C077E7Cu); }  /* 0C077E78 jsr @Rn */
L_0C077E7C: BLKS(0x0C077E7Cu);
	r13 = R32(r9 + 0x18u); UPD(0x0C077E7Eu, 1);  /* 0C077E7C mov.l @(disp,Rm),Rn */
	r5 = 0x14u;  /* 0C077E7E mov #imm,Rn */
	r7 = 0xC069B20u; UPD(0x0C077E82u, 2);  /* 0C077E80 mov.l @(disp,pc),Rn */
	r13 += r0;  /* 0C077E82 add Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C077E86u, 2);  /* 0C077E84 mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C077E86 mov Rm,Rn */
	r10 = 0x10000u; UPD(0x0C077E8Au, 2);  /* 0C077E88 mov.l @(disp,pc),Rn */
	W32(r15, r11); UPD(0x0C077E8Cu, 1);  /* 0C077E8A mov.l Rm,@Rn */
	IF(0x0C077E8Cu); { u32 t_ = r7; PR = 0x0C077E90u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C077E90u); }  /* 0C077E8C jsr @Rn */
L_0C077E90: BLKS(0x0C077E90u);
	r6 = 0xC069AF0u; UPD(0x0C077E92u, 1);  /* 0C077E90 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C077E92 mov Rm,Rn */
	r5 = r10;  /* 0C077E94 mov Rm,Rn */
	IF(0x0C077E96u); { u32 t_ = r6; PR = 0x0C077E9Au; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C077E9Au); }  /* 0C077E96 jsr @Rn */
L_0C077E9A: BLKS(0x0C077E9Au);
	r1 = 0x808080u; UPD(0x0C077E9Cu, 1);  /* 0C077E9A mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C077E9C mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C077EA0u, 2);  /* 0C077E9E mov.l Rm,@(disp,Rn) */
	r7 = r13;  /* 0C077EA0 mov Rm,Rn */
	W32(r15 + 0x10u, r1); UPD(0x0C077EA4u, 2);  /* 0C077EA2 mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C077EA6u, 1);  /* 0C077EA4 mov.l @Rm,Rn */
	r9 = 0xC0BEEF0u; UPD(0x0C077EA8u, 1);  /* 0C077EA6 mov.l @(disp,pc),Rn */
	IF(0x0C077EA8u); { u32 t_ = r9; PR = 0x0C077EACu; r6 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C077EACu); }  /* 0C077EA8 jsr @Rn */
L_0C077EAC: BLKS(0x0C077EACu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C077D74u, 3); goto L_0C077D74; }  /* 0C077EAC bra */
L_0C078B60: BLKS(0x0C078B60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C078B62u, 1);  /* 0C078B60 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C078B64u, 1);  /* 0C078B62 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C078B64 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C078B68u, 2);  /* 0C078B66 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C078B68 exts.w Rm,Rn */
	r0 = 0xC0779B0u; UPD(0x0C078B6Cu, 2);  /* 0C078B6A mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C078B6C mov Rm,Rn */
	IF(0x0C078B6Eu); r15 -= 4; W32(r15, PR); UPD(0x0C078B70u, 2);  /* 0C078B6E sts.l pr,@-Rn */
	r5 = r9;  /* 0C078B70 mov Rm,Rn */
	IF(0x0C078B72u); { u32 t_ = r0; PR = 0x0C078B76u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0779B0, 0x0C0779B0u, 0x0C078B76u); }  /* 0C078B72 jsr @Rn */
L_0C078B76: BLKS(0x0C078B76u);
	r0 = 0xC077D40u; UPD(0x0C078B78u, 1);  /* 0C078B76 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C078B78 mov Rm,Rn */
	r5 = r9;  /* 0C078B7A mov Rm,Rn */
	r15 = r14;  /* 0C078B7C mov Rm,Rn */
	IF(0x0C078B7Eu); PR = R32(r15); r15 += 4; UPD(0x0C078B80u, 4);  /* 0C078B7E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C078B82u, 1);  /* 0C078B80 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078B84u, 1);  /* 0C078B82 mov.l @Rm+,Rn */
	IF(0x0C078B84u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C077D40u: goto L_0C077D40; default: JUMPD(tv_); } }  /* 0C078B84 jmp @Rn */
}

void blk_f_0C078B90(sh3_t *c)
{
	LOCALS;
	goto L_0C078B90;
L_0C078170: BLKS(0x0C078170u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C078172u, 1);  /* 0C078170 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C078174u, 1);  /* 0C078172 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C078176u, 1);  /* 0C078174 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C078178u, 1);  /* 0C078176 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07817Au, 1);  /* 0C078178 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C07817A exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07817Eu, 2);  /* 0C07817C mov.l Rm,@-Rn */
	r0 = 0x2A0u; UPD(0x0C078180u, 1);  /* 0C07817E mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C078180 exts.w Rm,Rn */
	IF(0x0C078182u); MACL = r13 * r0;  /* 0C078182 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C078186u, 4);  /* 0C078184 mov.l Rm,@-Rn */
	r2 = 0xC29D1D8u; UPD(0x0C078188u, 1);  /* 0C078186 mov.l @(disp,pc),Rn */
	IF(0x0C078188u); r0 = MACL;  /* 0C078188 sts macl,Rn */
	IF(0x0C07818Au); r15 -= 4; W32(r15, PR); UPD(0x0C07818Cu, 2);  /* 0C07818A sts.l pr,@-Rn */
	r0 += r2;  /* 0C07818C add Rm,Rn */
	r3 = 0x25Fu; UPD(0x0C078190u, 2);  /* 0C07818E mov.w @(disp,pc),Rn */
	IF(0x0C078190u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C078192u, 1);  /* 0C078190 mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C078192 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0781A0u, 4); goto L_0C0781A0; } goto L_0C078198; }  /* 0C078194 bt/s */
L_0C078198: BLKS(0x0C078198u);
	r4 = 0x272u; UPD(0x0C07819Au, 2);  /* 0C078198 mov.w @(disp,pc),Rn */
	IF(0x0C07819Au); r12 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C07819Cu, 1);  /* 0C07819A mov.b @(r0,Rm),Rn */
	T = (r12 & r12) == 0;  /* 0C07819C tst Rm,Rn */
	if (T) { UPD(0x0C0781C0u, 4); goto L_0C0781C0; }  /* 0C07819E bt */
L_0C0781A0: BLKS(0x0C0781A0u);
	r15 = r14;  /* 0C0781A0 mov Rm,Rn */
	IF(0x0C0781A2u); PR = R32(r15); r15 += 4; UPD(0x0C0781A4u, 2);  /* 0C0781A2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0781A6u, 1);  /* 0C0781A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0781A8u, 1);  /* 0C0781A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0781AAu, 1);  /* 0C0781A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0781ACu, 1);  /* 0C0781AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0781AEu, 1);  /* 0C0781AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0781B0u, 1);  /* 0C0781AE mov.l @Rm+,Rn */
	IF(0x0C0781B0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0781B0 rts */
L_0C0781C0: BLKS(0x0C0781C0u);
	r8 = 0xC0718C0u; UPD(0x0C0781C2u, 1);  /* 0C0781C0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0781C2 mov Rm,Rn */
	r5 = r11;  /* 0C0781C4 mov Rm,Rn */
	r6 = 0x1u;  /* 0C0781C6 mov #imm,Rn */
	IF(0x0C0781C8u); { u32 t_ = r8; PR = 0x0C0781CCu; r7 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0718C0, 0x0C0718C0u, 0x0C0781CCu); }  /* 0C0781C8 jsr @Rn */
L_0C0781CC: BLKS(0x0C0781CCu);
	T = (r0 & r0) == 0;  /* 0C0781CC tst Rm,Rn */
	if (T) { UPD(0x0C0781A0u, 4); goto L_0C0781A0; }  /* 0C0781CE bt */
L_0C0781D0: BLKS(0x0C0781D0u);
	r3 = 0x30u;  /* 0C0781D0 mov #imm,Rn */
	r10 = 0x90u; UPD(0x0C0781D4u, 2);  /* 0C0781D2 mov.w @(disp,pc),Rn */
	IF(0x0C0781D4u); MACL = r13 * r10;  /* 0C0781D4 mul.l Rm,Rn */
	r8 = 0x9C0u; UPD(0x0C0781D8u, 3);  /* 0C0781D6 mov.w @(disp,pc),Rn */
	r4 = 0x34u;  /* 0C0781D8 mov #imm,Rn */
	IF(0x0C0781DAu); r10 = MACL;  /* 0C0781DA sts macl,Rn */
	IF(0x0C0781DCu); MACL = r11 * r3;  /* 0C0781DC mul.l Rm,Rn */
	r0 = 0x340u; UPD(0x0C0781E0u, 5);  /* 0C0781DE mov.w @(disp,pc),Rn */
	IF(0x0C0781E0u); r7 = MACL;  /* 0C0781E0 sts macl,Rn */
	IF(0x0C0781E2u); MACL = r13 * r8;  /* 0C0781E2 mul.l Rm,Rn */
	r5 = 0xC28EDFCu; UPD(0x0C0781E6u, 4);  /* 0C0781E4 mov.l @(disp,pc),Rn */
	r10 += r7;  /* 0C0781E6 add Rm,Rn */
	IF(0x0C0781E8u); r8 = MACL;  /* 0C0781E8 sts macl,Rn */
	IF(0x0C0781EAu); MACL = r11 * r0;  /* 0C0781EA mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C0781EEu, 5);  /* 0C0781EC mov.w @Rm,Rn */
	IF(0x0C0781EEu); r7 = MACL;  /* 0C0781EE sts macl,Rn */
	IF(0x0C0781F0u); MACL = r6 * r4;  /* 0C0781F0 mul.l Rm,Rn */
	r0 = r8;  /* 0C0781F2 mov Rm,Rn */
	r0 += r7;  /* 0C0781F4 add Rm,Rn */
	IF(0x0C0781F6u); r3 = MACL;  /* 0C0781F6 sts macl,Rn */
	r5 = 0xC2380D0u; UPD(0x0C0781FAu, 7);  /* 0C0781F8 mov.l @(disp,pc),Rn */
	r0 += r3;  /* 0C0781FA add Rm,Rn */
	r2 = 0xC8000000u; UPD(0x0C0781FEu, 2);  /* 0C0781FC mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C0781FE add Rm,Rn */
	r9 = 0xC2974C8u; UPD(0x0C078202u, 2);  /* 0C078200 mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C078202 add Rm,Rn */
	IF(0x0C078204u); W32(r0 + r5, r2); UPD(0x0C078206u, 2);  /* 0C078204 mov.l Rm,@(r0,Rn) */
	r10 += r9;  /* 0C078206 add Rm,Rn */
	r11 = 0xC062780u; UPD(0x0C07820Au, 2);  /* 0C078208 mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C07820A add Rm,Rn */
	r10 += 0x24u;  /* 0C07820C add #imm,Rn */
	r0 = 0x2u;  /* 0C07820E mov #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C078212u, 4);  /* 0C078210 mov.w @Rm,Rn */
	r4 = 0x4u;  /* 0C078212 mov #imm,Rn */
	IF(0x0C078214u); { u32 t_ = r11; PR = 0x0C078218u; W32(r8 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C078218u); }  /* 0C078214 jsr @Rn */
L_0C078218: BLKS(0x0C078218u);
	r0 += 0x1u;  /* 0C078218 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C07821Cu, 2);  /* 0C07821A mov.l Rm,@(disp,Rn) */
	r10 += 0xFFFFFFDCu;  /* 0C07821C add #imm,Rn */
	r8 += 0x2Cu;  /* 0C07821E add #imm,Rn */
	W16(r8, r9); UPD(0x0C078222u, 3);  /* 0C078220 mov.w Rm,@Rn */
	r9 += 0x4u;  /* 0C078222 add #imm,Rn */
	r0 = r9;  /* 0C078224 mov Rm,Rn */
	IF(0x0C078226u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C078226 shar Rn */
	r6 = 0xC069B20u; UPD(0x0C07822Au, 4);  /* 0C078228 mov.l @(disp,pc),Rn */
	IF(0x0C07822Au); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07822A shar Rn */
	r11 = 0x80000u; UPD(0x0C07822Eu, 2);  /* 0C07822C mov.l @(disp,pc),Rn */
	IF(0x0C07822Eu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07822E shar Rn */
	r8 += 0xFFFFFFD4u;  /* 0C078230 add #imm,Rn */
	r9 += 0xFFFFFFFCu;  /* 0C078232 add #imm,Rn */
	r0 &= 0x3Fu;  /* 0C078234 and #imm,r0 */
	r4 = r9;  /* 0C078236 mov Rm,Rn */
	W32(r8 + 0x20u, r11); UPD(0x0C07823Au, 6);  /* 0C078238 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0000u; UPD(0x0C07823Cu, 1);  /* 0C07823A mov.l @(disp,pc),Rn */
	IF(0x0C07823Cu); { u32 t_ = r6; PR = 0x0C078240u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C078240u); }  /* 0C07823C jsr @Rn */
L_0C078240: BLKS(0x0C078240u);
	r4 = R32(r10 + 0x14u); UPD(0x0C078242u, 1);  /* 0C078240 mov.l @(disp,Rm),Rn */
	r1 = 0xFFFD0000u; UPD(0x0C078244u, 1);  /* 0C078242 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C078244 add Rm,Rn */
	r4 += r1;  /* 0C078246 add Rm,Rn */
	r2 = 0xC069AF0u; UPD(0x0C07824Au, 3);  /* 0C078248 mov.l @(disp,pc),Rn */
	W32(r8 + 0x10u, r4); UPD(0x0C07824Cu, 1);  /* 0C07824A mov.l Rm,@(disp,Rn) */
	r5 = 0x100000u; UPD(0x0C07824Eu, 1);  /* 0C07824C mov.l @(disp,pc),Rn */
	IF(0x0C07824Eu); { u32 t_ = r2; PR = 0x0C078252u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C078252u); }  /* 0C07824E jsr @Rn */
L_0C078252: BLKS(0x0C078252u);
	r3 = R32(r10 + 0x18u); UPD(0x0C078254u, 1);  /* 0C078252 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C078254 mov Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C078258u, 2);  /* 0C078256 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C078258 add Rm,Rn */
	W32(r8 + 0x14u, r3); UPD(0x0C07825Cu, 2);  /* 0C07825A mov.l Rm,@(disp,Rn) */
	IF(0x0C07825Cu); { u32 t_ = r10; PR = 0x0C078260u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C078260u); }  /* 0C07825C jsr @Rn */
L_0C078260: BLKS(0x0C078260u);
	r7 = 0xC069AF0u; UPD(0x0C078262u, 1);  /* 0C078260 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C078262 mov Rm,Rn */
	r5 = r11;  /* 0C078264 mov Rm,Rn */
	IF(0x0C078266u); { u32 t_ = r7; PR = 0x0C07826Au; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07826Au); }  /* 0C078266 jsr @Rn */
L_0C07826A: BLKS(0x0C07826Au);
	r5 = 0x808080u; UPD(0x0C07826Cu, 1);  /* 0C07826A mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C07826C mov Rm,Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C078270u, 2);  /* 0C07826E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x1Cu, r0); UPD(0x0C078272u, 1);  /* 0C078270 mov.l Rm,@(disp,Rn) */
	r5 = 0x4Du;  /* 0C078272 mov #imm,Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C078276u, 2);  /* 0C078274 mov.l Rm,@(disp,Rn) */
	r6 = 0xC0C20A0u; UPD(0x0C078278u, 1);  /* 0C078276 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C078278 mov Rm,Rn */
	IF(0x0C07827Au); PR = R32(r15); r15 += 4; UPD(0x0C07827Cu, 2);  /* 0C07827A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07827Eu, 1);  /* 0C07827C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C078280u, 1);  /* 0C07827E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C078282u, 1);  /* 0C078280 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078284u, 1);  /* 0C078282 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078286u, 1);  /* 0C078284 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078288u, 1);  /* 0C078286 mov.l @Rm+,Rn */
	IF(0x0C078288u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C078288 jmp @Rn */
L_0C078B90: BLKS(0x0C078B90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C078B92u, 1);  /* 0C078B90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C078B94u, 1);  /* 0C078B92 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C078B94 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C078B98u, 2);  /* 0C078B96 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C078B98 exts.w Rm,Rn */
	r0 = 0xC0779B0u; UPD(0x0C078B9Cu, 2);  /* 0C078B9A mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C078B9C mov Rm,Rn */
	IF(0x0C078B9Eu); r15 -= 4; W32(r15, PR); UPD(0x0C078BA0u, 2);  /* 0C078B9E sts.l pr,@-Rn */
	r5 = r9;  /* 0C078BA0 mov Rm,Rn */
	IF(0x0C078BA2u); { u32 t_ = r0; PR = 0x0C078BA6u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0779B0, 0x0C0779B0u, 0x0C078BA6u); }  /* 0C078BA2 jsr @Rn */
L_0C078BA6: BLKS(0x0C078BA6u);
	r0 = 0xC078170u; UPD(0x0C078BA8u, 1);  /* 0C078BA6 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C078BA8 mov Rm,Rn */
	r5 = r9;  /* 0C078BAA mov Rm,Rn */
	r15 = r14;  /* 0C078BAC mov Rm,Rn */
	IF(0x0C078BAEu); PR = R32(r15); r15 += 4; UPD(0x0C078BB0u, 4);  /* 0C078BAE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C078BB2u, 1);  /* 0C078BB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078BB4u, 1);  /* 0C078BB2 mov.l @Rm+,Rn */
	IF(0x0C078BB4u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C078170u: goto L_0C078170; default: JUMPD(tv_); } }  /* 0C078BB4 jmp @Rn */
}

void blk_f_0C078BC0(sh3_t *c)
{
	LOCALS;
	goto L_0C078BC0;
L_0C0782E0: BLKS(0x0C0782E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0782E2u, 1);  /* 0C0782E0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0782E2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0782E6u, 2);  /* 0C0782E4 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C0782E6 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0782EAu, 2);  /* 0C0782E8 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0782ECu, 1);  /* 0C0782EA mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0782EEu, 1);  /* 0C0782EC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0782F0u, 1);  /* 0C0782EE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0782F2u, 1);  /* 0C0782F0 mov.l Rm,@-Rn */
	r0 = 0x2A0u; UPD(0x0C0782F4u, 1);  /* 0C0782F2 mov.w @(disp,pc),Rn */
	IF(0x0C0782F4u); r15 -= 4; W32(r15, PR); UPD(0x0C0782F6u, 1);  /* 0C0782F4 sts.l pr,@-Rn */
	IF(0x0C0782F6u); MACL = r4 * r0;  /* 0C0782F6 mul.l Rm,Rn */
	r15 += 0xFFFFFFE4u;  /* 0C0782F8 add #imm,Rn */
	r14 = r15;  /* 0C0782FA mov Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C0782FEu, 5);  /* 0C0782FC mov.l @(disp,pc),Rn */
	IF(0x0C0782FEu); r0 = MACL;  /* 0C0782FE sts macl,Rn */
	W32(r14, r4); UPD(0x0C078302u, 2);  /* 0C078300 mov.l Rm,@Rn */
	r0 += r2;  /* 0C078302 add Rm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C078306u, 2);  /* 0C078304 mov.l Rm,@(disp,Rn) */
	r3 = 0x25Fu; UPD(0x0C078308u, 1);  /* 0C078306 mov.w @(disp,pc),Rn */
	IF(0x0C078308u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07830Au, 1);  /* 0C078308 mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C07830A tst Rm,Rn */
	if (T) { UPD(0x0C078316u, 4); goto L_0C078316; }  /* 0C07830C bt */
L_0C07830E: BLKS(0x0C07830Eu);
	r7 = 0x272u; UPD(0x0C078310u, 1);  /* 0C07830E mov.w @(disp,pc),Rn */
	IF(0x0C078310u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C078312u, 1);  /* 0C078310 mov.b @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C078312 tst Rm,Rn */
	if (T) { UPD(0x0C078330u, 4); goto L_0C078330; }  /* 0C078314 bt */
L_0C078316: BLKS(0x0C078316u);
	r14 += 0x1Cu;  /* 0C078316 add #imm,Rn */
	r15 = r14;  /* 0C078318 mov Rm,Rn */
	IF(0x0C07831Au); PR = R32(r15); r15 += 4; UPD(0x0C07831Cu, 3);  /* 0C07831A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07831Eu, 1);  /* 0C07831C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C078320u, 1);  /* 0C07831E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C078322u, 1);  /* 0C078320 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078324u, 1);  /* 0C078322 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078326u, 1);  /* 0C078324 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078328u, 1);  /* 0C078326 mov.l @Rm+,Rn */
	IF(0x0C078328u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C078328 rts */
L_0C078330: BLKS(0x0C078330u);
	r8 = 0xC0718C0u; UPD(0x0C078332u, 1);  /* 0C078330 mov.l @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C078332 mov #imm,Rn */
	IF(0x0C078334u); { u32 t_ = r8; PR = 0x0C078338u; r7 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0718C0, 0x0C0718C0u, 0x0C078338u); }  /* 0C078334 jsr @Rn */
L_0C078338: BLKS(0x0C078338u);
	T = (r0 & r0) == 0;  /* 0C078338 tst Rm,Rn */
	if (T) { UPD(0x0C078316u, 4); goto L_0C078316; }  /* 0C07833A bt */
L_0C07833C: BLKS(0x0C07833Cu);
	r11 = R32(r14); UPD(0x0C07833Eu, 1);  /* 0C07833C mov.l @Rm,Rn */
	r3 = 0x0u;  /* 0C07833E mov #imm,Rn */
	r13 = 0x90u; UPD(0x0C078342u, 2);  /* 0C078340 mov.w @(disp,pc),Rn */
	IF(0x0C078342u); MACL = r11 * r13;  /* 0C078342 mul.l Rm,Rn */
	r10 = 0x9C0u; UPD(0x0C078346u, 3);  /* 0C078344 mov.w @(disp,pc),Rn */
	IF(0x0C078346u); r12 = MACL;  /* 0C078346 sts macl,Rn */
	IF(0x0C078348u); MACL = r11 * r10;  /* 0C078348 mul.l Rm,Rn */
	r4 = 0x340u; UPD(0x0C07834Cu, 4);  /* 0C07834A mov.w @(disp,pc),Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C07834Eu, 1);  /* 0C07834C mov.l @(disp,Rm),Rn */
	IF(0x0C07834Eu); r9 = MACL;  /* 0C07834E sts macl,Rn */
	IF(0x0C078350u); MACL = r5 * r4;  /* 0C078350 mul.l Rm,Rn */
	r2 = 0xC28EDFCu; UPD(0x0C078354u, 4);  /* 0C078352 mov.l @(disp,pc),Rn */
	IF(0x0C078354u); r1 = MACL;  /* 0C078354 sts macl,Rn */
	W32(r14 + 0xCu, r2); UPD(0x0C078358u, 2);  /* 0C078356 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r3); UPD(0x0C07835Au, 1);  /* 0C078358 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r12); UPD(0x0C07835Cu, 1);  /* 0C07835A mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x14u, r9); UPD(0x0C07835Eu, 1);  /* 0C07835C mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x18u, r1); UPD(0x0C078360u, 1);  /* 0C07835E mov.l Rm,@(disp,Rn) */
	r7 = R32(r14 + 0x4u); UPD(0x0C078362u, 1);  /* 0C078360 mov.l @(disp,Rm),Rn */
L_0C078362: BLKS(0x0C078362u);
	r10 = 0x30u;  /* 0C078362 mov #imm,Rn */
	r0 = R32(r14 + 0x8u); UPD(0x0C078366u, 2);  /* 0C078364 mov.l @(disp,Rm),Rn */
	IF(0x0C078366u); MACL = r7 * r10;  /* 0C078366 mul.l Rm,Rn */
	r6 = 0xC182850u; UPD(0x0C07836Au, 3);  /* 0C078368 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C07836A add Rm,Rn */
	r13 = 0xC18285Au; UPD(0x0C07836Eu, 2);  /* 0C07836C mov.l @(disp,pc),Rn */
	IF(0x0C07836Eu); r10 = MACL;  /* 0C07836E sts macl,Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C078372u, 2);  /* 0C078370 mov.l @(disp,Rm),Rn */
	IF(0x0C078372u); r12 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C078374u, 1);  /* 0C078372 mov.w @(r0,Rm),Rn */
	IF(0x0C078374u); r9 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C078376u, 1);  /* 0C078374 mov.w @(r0,Rm),Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C078378u, 1);  /* 0C078376 mov.l @(disp,Rm),Rn */
	r0 = 0x34u;  /* 0C078378 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r8 = v_; } UPD(0x0C07837Cu, 2);  /* 0C07837A mov.w @Rm+,Rn */
	r10 += r1;  /* 0C07837C add Rm,Rn */
	r2 = 0xC2974C8u; UPD(0x0C078380u, 2);  /* 0C07837E mov.l @(disp,pc),Rn */
	IF(0x0C078380u); MACL = r8 * r0;  /* 0C078380 mul.l Rm,Rn */
	r10 += r2;  /* 0C078382 add Rm,Rn */
	r5 = R32(r14 + 0x18u); UPD(0x0C078386u, 4);  /* 0C078384 mov.l @(disp,Rm),Rn */
	r10 += 0x24u;  /* 0C078386 add #imm,Rn */
	r7 = R32(r14 + 0x14u); UPD(0x0C07838Au, 2);  /* 0C078388 mov.l @(disp,Rm),Rn */
	IF(0x0C07838Au); r8 = MACL;  /* 0C07838A sts macl,Rn */
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C07838Eu, 2);  /* 0C07838C mov.w @Rm,Rn */
	r7 += r5;  /* 0C07838E add Rm,Rn */
	W32(r14 + 0xCu, r4); UPD(0x0C078392u, 2);  /* 0C078390 mov.l Rm,@(disp,Rn) */
	r7 += r8;  /* 0C078392 add Rm,Rn */
	r2 = R32(r14 + 0x14u); UPD(0x0C078396u, 2);  /* 0C078394 mov.l @(disp,Rm),Rn */
	r3 = r11;  /* 0C078396 mov Rm,Rn */
	r6 = R32(r14 + 0x18u); UPD(0x0C07839Au, 2);  /* 0C078398 mov.l @(disp,Rm),Rn */
	r8 += r2;  /* 0C07839A add Rm,Rn */
	r0 = 0xC2380D0u; UPD(0x0C07839Eu, 2);  /* 0C07839C mov.l @(disp,pc),Rn */
	r3 += r12;  /* 0C07839E add Rm,Rn */
	r4 = 0xC8000000u; UPD(0x0C0783A2u, 2);  /* 0C0783A0 mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C0783A2 add Rm,Rn */
	r13 = 0xC062780u; UPD(0x0C0783A6u, 2);  /* 0C0783A4 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r3;  /* 0C0783A6 exts.w Rm,Rn */
	IF(0x0C0783A8u); W32(r0 + r7, r4); UPD(0x0C0783AAu, 2);  /* 0C0783A8 mov.l Rm,@(r0,Rn) */
	r3 = 0x2u;  /* 0C0783AA mov #imm,Rn */
	r8 += r0;  /* 0C0783AC add Rm,Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C0783B0u, 3);  /* 0C0783AE mov.l Rm,@(disp,Rn) */
	IF(0x0C0783B0u); { u32 t_ = r13; PR = 0x0C0783B4u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0783B4u); }  /* 0C0783B0 jsr @Rn */
L_0C0783B4: BLKS(0x0C0783B4u);
	r0 += 0x1u;  /* 0C0783B4 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0783B8u, 2);  /* 0C0783B6 mov.l Rm,@(disp,Rn) */
	r11 += r9;  /* 0C0783B8 add Rm,Rn */
	r9 = (u32)(s32)(s16)r11;  /* 0C0783BA exts.w Rm,Rn */
	r8 += 0x2Cu;  /* 0C0783BC add #imm,Rn */
	W16(r8, r9); UPD(0x0C0783C0u, 4);  /* 0C0783BE mov.w Rm,@Rn */
	r4 = r12;  /* 0C0783C0 mov Rm,Rn */
	r11 = 0x80000u; UPD(0x0C0783C4u, 2);  /* 0C0783C2 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFD4u;  /* 0C0783C4 add #imm,Rn */
	r9 += 0x4u;  /* 0C0783C6 add #imm,Rn */
	W32(r8 + 0x20u, r11); UPD(0x0C0783CAu, 3);  /* 0C0783C8 mov.l Rm,@(disp,Rn) */
	r0 = r9;  /* 0C0783CA mov Rm,Rn */
	IF(0x0C0783CCu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0783CC shar Rn */
	IF(0x0C0783CEu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0783CE shar Rn */
	r11 = 0xC069B20u; UPD(0x0C0783D2u, 4);  /* 0C0783D0 mov.l @(disp,pc),Rn */
	IF(0x0C0783D2u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C0783D2 shar Rn */
	r0 &= 0x3Fu;  /* 0C0783D4 and #imm,r0 */
	r10 += 0xFFFFFFDCu;  /* 0C0783D6 add #imm,Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C0783DAu, 4);  /* 0C0783D8 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0000u; UPD(0x0C0783DCu, 1);  /* 0C0783DA mov.l @(disp,pc),Rn */
	IF(0x0C0783DCu); { u32 t_ = r11; PR = 0x0C0783E0u; r9 += 0xFFFFFFFCu; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0783E0u); }  /* 0C0783DC jsr @Rn */
L_0C0783E0: BLKS(0x0C0783E0u);
	r13 = R32(r10 + 0x14u); UPD(0x0C0783E2u, 1);  /* 0C0783E0 mov.l @(disp,Rm),Rn */
	r1 = 0xFFFD0000u; UPD(0x0C0783E4u, 1);  /* 0C0783E2 mov.l @(disp,pc),Rn */
	r13 += r0;  /* 0C0783E4 add Rm,Rn */
	r13 += r1;  /* 0C0783E6 add Rm,Rn */
	W32(r8 + 0x10u, r13); UPD(0x0C0783EAu, 3);  /* 0C0783E8 mov.l Rm,@(disp,Rn) */
	r13 = 0xC069AF0u; UPD(0x0C0783ECu, 1);  /* 0C0783EA mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C0783EEu, 1);  /* 0C0783EC mov.l @(disp,pc),Rn */
	IF(0x0C0783EEu); { u32 t_ = r13; PR = 0x0C0783F2u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0783F2u); }  /* 0C0783EE jsr @Rn */
L_0C0783F2: BLKS(0x0C0783F2u);
	r12 = R32(r10 + 0x18u); UPD(0x0C0783F4u, 1);  /* 0C0783F2 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0783F4 mov Rm,Rn */
	r12 += r0;  /* 0C0783F6 add Rm,Rn */
	r5 = 0x80000u; UPD(0x0C0783FAu, 3);  /* 0C0783F8 mov.l @(disp,pc),Rn */
	IF(0x0C0783FAu); { u32 t_ = r11; PR = 0x0C0783FEu; W32(r8 + 0x14u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0783FEu); }  /* 0C0783FA jsr @Rn */
L_0C0783FE: BLKS(0x0C0783FEu);
	W32(r8 + 0x18u, r0); UPD(0x0C078400u, 1);  /* 0C0783FE mov.l Rm,@(disp,Rn) */
	r5 = 0x80000u; UPD(0x0C078402u, 1);  /* 0C078400 mov.l @(disp,pc),Rn */
	IF(0x0C078402u); { u32 t_ = r13; PR = 0x0C078406u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C078406u); }  /* 0C078402 jsr @Rn */
L_0C078406: BLKS(0x0C078406u);
	r4 = 0x808080u; UPD(0x0C078408u, 1);  /* 0C078406 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C078408 mov #imm,Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C07840Cu, 2);  /* 0C07840A mov.l Rm,@(disp,Rn) */
	r6 = 0x4u;  /* 0C07840C mov #imm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C078410u, 2);  /* 0C07840E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r4); UPD(0x0C078412u, 1);  /* 0C078410 mov.l Rm,@(disp,Rn) */
	r8 = R32(r14 + 0x8u); UPD(0x0C078414u, 1);  /* 0C078412 mov.l @(disp,Rm),Rn */
	r8 += 0x1u;  /* 0C078414 add #imm,Rn */
	r0 = (u32)(s32)(s16)r8;  /* 0C078416 exts.w Rm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C07841Au, 3);  /* 0C078418 mov.l Rm,@(disp,Rn) */
	r7 = R32(r14 + 0x8u); UPD(0x0C07841Cu, 1);  /* 0C07841A mov.l @(disp,Rm),Rn */
	T = (s32)r7 > (s32)r6;  /* 0C07841C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C078362u, 4); goto L_0C078362; } UPD(0x0C078422u, 1); goto L_0C078422; }  /* 0C07841E bf/s */
L_0C078422: BLKS(0x0C078422u);
	r4 = R32(r14); UPD(0x0C078424u, 1);  /* 0C078422 mov.l @Rm,Rn */
	r5 = 0x50u;  /* 0C078424 mov #imm,Rn */
	r0 = 0xC0C20A0u; UPD(0x0C078428u, 2);  /* 0C078426 mov.l @(disp,pc),Rn */
	r14 += 0x1Cu;  /* 0C078428 add #imm,Rn */
	r15 = r14;  /* 0C07842A mov Rm,Rn */
	IF(0x0C07842Cu); PR = R32(r15); r15 += 4; UPD(0x0C07842Eu, 3);  /* 0C07842C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C078430u, 1);  /* 0C07842E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C078432u, 1);  /* 0C078430 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C078434u, 1);  /* 0C078432 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078436u, 1);  /* 0C078434 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078438u, 1);  /* 0C078436 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07843Au, 1);  /* 0C078438 mov.l @Rm+,Rn */
	IF(0x0C07843Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C07843A jmp @Rn */
L_0C078BC0: BLKS(0x0C078BC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C078BC2u, 1);  /* 0C078BC0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C078BC4u, 1);  /* 0C078BC2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C078BC4 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C078BC8u, 2);  /* 0C078BC6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C078BC8 exts.w Rm,Rn */
	r0 = 0xC0779B0u; UPD(0x0C078BCCu, 2);  /* 0C078BCA mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C078BCC mov Rm,Rn */
	IF(0x0C078BCEu); r15 -= 4; W32(r15, PR); UPD(0x0C078BD0u, 2);  /* 0C078BCE sts.l pr,@-Rn */
	r5 = r9;  /* 0C078BD0 mov Rm,Rn */
	IF(0x0C078BD2u); { u32 t_ = r0; PR = 0x0C078BD6u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0779B0, 0x0C0779B0u, 0x0C078BD6u); }  /* 0C078BD2 jsr @Rn */
L_0C078BD6: BLKS(0x0C078BD6u);
	r0 = 0xC0782E0u; UPD(0x0C078BD8u, 1);  /* 0C078BD6 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C078BD8 mov Rm,Rn */
	r5 = r9;  /* 0C078BDA mov Rm,Rn */
	r15 = r14;  /* 0C078BDC mov Rm,Rn */
	IF(0x0C078BDEu); PR = R32(r15); r15 += 4; UPD(0x0C078BE0u, 4);  /* 0C078BDE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C078BE2u, 1);  /* 0C078BE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078BE4u, 1);  /* 0C078BE2 mov.l @Rm+,Rn */
	IF(0x0C078BE4u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0782E0u: goto L_0C0782E0; default: JUMPD(tv_); } }  /* 0C078BE4 jmp @Rn */
}

/* FUN_0c078bf0 */
void blk_f_0C078BF0(sh3_t *c)
{
	LOCALS;
L_0C078BF0: BLKS(0x0C078BF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C078BF2u, 1);  /* 0C078BF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C078BF4u, 1);  /* 0C078BF2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C078BF6u, 1);  /* 0C078BF4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C078BF8u, 1);  /* 0C078BF6 mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C078BF8 mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C078BFCu, 2);  /* 0C078BFA mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C078BFC mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C078C00u, 2);  /* 0C078BFE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C078C02u, 1);  /* 0C078C00 mov.l Rm,@-Rn */
	r13 = 0xC238030u; UPD(0x0C078C04u, 1);  /* 0C078C02 mov.l @(disp,pc),Rn */
	IF(0x0C078C04u); r15 -= 4; W32(r15, PR); UPD(0x0C078C06u, 1);  /* 0C078C04 sts.l pr,@-Rn */
	r12 = 0xC076AF0u; UPD(0x0C078C08u, 1);  /* 0C078C06 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C078C08 mov Rm,Rn */
	IF(0x0C078C0Au); ;  /* 0C078C0A nop */
	UPD(0x0C078C0Cu, 2);
L_0C078C0C: BLKS(0x0C078C0Cu);
	r8 = 0xC2974C8u; UPD(0x0C078C0Eu, 1);  /* 0C078C0C mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C078C0E mov #imm,Rn */
	r8 += r10;  /* 0C078C10 add Rm,Rn */
	IF(0x0C078C12u); ;  /* 0C078C12 nop */
	UPD(0x0C078C14u, 3);
L_0C078C14: BLKS(0x0C078C14u);
	r1 = R32(r8); UPD(0x0C078C16u, 1);  /* 0C078C14 mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C078C18u, 1);  /* 0C078C16 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C078C18 tst Rm,Rn */
	{ u32 c_ = !T; r6 = 0x14u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C078C50u, 4); goto L_0C078C50; } UPD(0x0C078C1Eu, 1); goto L_0C078C1E; }  /* 0C078C1A bf/s */
L_0C078C1E: BLKS(0x0C078C1Eu);
	r9 += 0x1u;  /* 0C078C1E add #imm,Rn */
	r4 = 0x2u;  /* 0C078C20 mov #imm,Rn */
	T = (s32)r9 > (s32)r4;  /* 0C078C22 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x30u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C078C14u, 6); goto L_0C078C14; } goto L_0C078C28; }  /* 0C078C24 bf/s */
L_0C078C28: BLKS(0x0C078C28u);
	r6 = 0x90u; UPD(0x0C078C2Au, 2);  /* 0C078C28 mov.w @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C078C2A add #imm,Rn */
	r5 = 0x1u;  /* 0C078C2C mov #imm,Rn */
	T = (s32)r11 > (s32)r5;  /* 0C078C2E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += r6; /* slot add Rm,Rn */ if (c_) { UPD(0x0C078C0Cu, 6); goto L_0C078C0C; } goto L_0C078C34; }  /* 0C078C30 bf/s */
L_0C078C34: BLKS(0x0C078C34u);
	r15 = r14;  /* 0C078C34 mov Rm,Rn */
	IF(0x0C078C36u); PR = R32(r15); r15 += 4; UPD(0x0C078C38u, 3);  /* 0C078C36 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C078C3Au, 1);  /* 0C078C38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C078C3Cu, 1);  /* 0C078C3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C078C3Eu, 1);  /* 0C078C3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078C40u, 1);  /* 0C078C3E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078C42u, 1);  /* 0C078C40 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078C44u, 1);  /* 0C078C42 mov.l @Rm+,Rn */
	IF(0x0C078C44u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C078C44 rts */
L_0C078C50: BLKS(0x0C078C50u);
	r4 = R32(r8 + 0x14u); UPD(0x0C078C52u, 1);  /* 0C078C50 mov.l @(disp,Rm),Rn */
	IF(0x0C078C52u); { u32 t_ = r12; PR = 0x0C078C56u; r5 = R32(r8 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C076AF0, 0x0C076AF0u, 0x0C078C56u); }  /* 0C078C52 jsr @Rn */
L_0C078C56: BLKS(0x0C078C56u);
	r8 += 0x2Cu;  /* 0C078C56 add #imm,Rn */
	W8(r8, r0); UPD(0x0C078C5Au, 2);  /* 0C078C58 mov.b Rm,@Rn */
	r2 = r0 & 0xFF;  /* 0C078C5A extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C078C5C tst Rm,Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFD4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C078C1Eu, 5); goto L_0C078C1E; } goto L_0C078C62; }  /* 0C078C5E bt/s */
L_0C078C62: BLKS(0x0C078C62u);
	r3 = 0x1Fu;  /* 0C078C62 mov #imm,Rn */
	r3 &= r0;  /* 0C078C64 and Rm,Rn */
	r3 += r3;  /* 0C078C66 add Rm,Rn */
	r3 += r13;  /* 0C078C68 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C078C6Cu, 6);  /* 0C078C6A mov.w @Rm,Rn */
	r0 += 0x1u;  /* 0C078C6C add #imm,Rn */
	{ W16(r3, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C078C1Eu, 4); goto L_0C078C1E; }  /* 0C078C6E bra */
}

void blk_f_0C078D10(sh3_t *c)
{
	LOCALS;
L_0C078D10: BLKS(0x0C078D10u);
	r3 = 0x2800u; UPD(0x0C078D12u, 1);  /* 0C078D10 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C078D12 exts.w Rm,Rn */
	IF(0x0C078D14u); MACL = r4 * r3;  /* 0C078D14 mul.l Rm,Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C078D16 exts.w Rm,Rn */
	r7 = 0x50u;  /* 0C078D18 mov #imm,Rn */
	IF(0x0C078D1Au); r3 = MACL;  /* 0C078D1A sts macl,Rn */
	IF(0x0C078D1Cu); MACL = r5 * r7;  /* 0C078D1C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C078D20u, 9);  /* 0C078D1E mov.l Rm,@-Rn */
	r0 = 0xC229004u; UPD(0x0C078D22u, 1);  /* 0C078D20 mov.l @(disp,pc),Rn */
	IF(0x0C078D22u); r6 = MACL;  /* 0C078D22 sts macl,Rn */
	IF(0x0C078D24u); r15 -= 4; W32(r15, PR); UPD(0x0C078D26u, 2);  /* 0C078D24 sts.l pr,@-Rn */
	r3 += r6;  /* 0C078D26 add Rm,Rn */
	r3 += r0;  /* 0C078D28 add Rm,Rn */
	r2 = R32(r3 + 0x8u); UPD(0x0C078D2Cu, 3);  /* 0C078D2A mov.l @(disp,Rm),Rn */
	r0 = 0x1u;  /* 0C078D2C mov #imm,Rn */
	r2 += 0xFFFFFFC0u;  /* 0C078D2E add #imm,Rn */
	T = r2 > r0;  /* 0C078D30 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C078DE0u, 6); goto L_0C078DE0; } goto L_0C078D36; }  /* 0C078D32 bf/s */
L_0C078D36: BLKS(0x0C078D36u);
	r0 = R32(r3 + 0x24u); UPD(0x0C078D38u, 2);  /* 0C078D36 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C078D3Au, 1);  /* 0C078D38 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C078D3Cu, 1);  /* 0C078D3A mov.l @(disp,Rm),Rn */
	r1 = R32(r3 + 0x30u); UPD(0x0C078D3Eu, 1);  /* 0C078D3C mov.l @(disp,Rm),Rn */
	r0 += r6;  /* 0C078D3E add Rm,Rn */
	r2 = 0xFF600000u; UPD(0x0C078D42u, 2);  /* 0C078D40 mov.l @(disp,pc),Rn */
	r7 += r1;  /* 0C078D42 add Rm,Rn */
	r2 += r0;  /* 0C078D44 add Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C078D48u, 3);  /* 0C078D46 mov.l Rm,@(disp,Rn) */
	IF(0x0C078D48u); T = (s32)r2 >= 0;  /* 0C078D48 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C078DD0u, 4); goto L_0C078DD0; } UPD(0x0C078D4Eu, 1); goto L_0C078D4E; }  /* 0C078D4A bf/s */
L_0C078D4E: BLKS(0x0C078D4Eu);
	r0 = 0xB00000u; UPD(0x0C078D50u, 1);  /* 0C078D4E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C078D50 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C078D6Au, 4); goto L_0C078D6A; }  /* 0C078D52 bt */
L_0C078D54: BLKS(0x0C078D54u);
	r2 = 0xC3C4048u; UPD(0x0C078D56u, 1);  /* 0C078D54 mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C078D58u, 1);  /* 0C078D56 mov.l @Rm,Rn */
	r2 = r7;  /* 0C078D58 mov Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C078D5Cu, 2);  /* 0C078D5A mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C078D5C sub Rm,Rn */
	r2 += r7;  /* 0C078D5E add Rm,Rn */
	IF(0x0C078D60u); T = (s32)r2 >= 0;  /* 0C078D60 cmp/pz Rn */
	if (!T) { UPD(0x0C078DC0u, 6); goto L_0C078DC0; }  /* 0C078D62 bf */
L_0C078D64: BLKS(0x0C078D64u);
	r0 = 0x880000u; UPD(0x0C078D66u, 1);  /* 0C078D64 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C078D66 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C078D80u, 4); goto L_0C078D80; }  /* 0C078D68 bf */
L_0C078D6A: BLKS(0x0C078D6Au);
	r4 = 0x0u;  /* 0C078D6A mov #imm,Rn */
	W32(r3, r4); UPD(0x0C078D6Eu, 2);  /* 0C078D6C mov.l Rm,@Rn */
L_0C078D6E: BLKS(0x0C078D6Eu);
	r15 = r14;  /* 0C078D6E mov Rm,Rn */
	IF(0x0C078D70u); PR = R32(r15); r15 += 4; UPD(0x0C078D72u, 2);  /* 0C078D70 lds.l @Rn+,pr */
	IF(0x0C078D72u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C078D72 rts */
L_0C078D80: BLKS(0x0C078D80u);
	r3 += 0x44u;  /* 0C078D80 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C078D84u, 2);  /* 0C078D82 mov.w @Rm,Rn */
	r0 = r1 & 0xFFFF;  /* 0C078D84 extu.w Rm,Rn */
	r0 += 0x4u;  /* 0C078D86 add #imm,Rn */
	IF(0x0C078D88u); r0 >>= 2;  /* 0C078D88 shlr2 Rn */
	IF(0x0C078D8Au); T = r0 & 1; r0 >>= 1;  /* 0C078D8A shlr Rn */
	r3 += 0xFFFFFFBCu;  /* 0C078D8C add #imm,Rn */
	r0 &= 0x3Fu;  /* 0C078D8E and #imm,r0 */
	W32(r3 + 0x8u, r0); UPD(0x0C078D92u, 7);  /* 0C078D90 mov.l Rm,@(disp,Rn) */
	r7 = r3;  /* 0C078D92 mov Rm,Rn */
	r7 += 0x48u;  /* 0C078D94 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C078D98u, 3);  /* 0C078D96 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C078D98 add #imm,Rn */
	W8(r7, r0); UPD(0x0C078D9Cu, 2);  /* 0C078D9A mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C078D9C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C078D9E tst Rm,Rn */
	if (T) { UPD(0x0C078DAAu, 5); goto L_0C078DAA; }  /* 0C078DA0 bt */
L_0C078DA2: BLKS(0x0C078DA2u);
	r0 = R32(r3 + 0xCu); UPD(0x0C078DA4u, 1);  /* 0C078DA2 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C078DA4 add #imm,Rn */
	r0 &= 0x3u;  /* 0C078DA6 and #imm,r0 */
	W32(r3 + 0xCu, r0); UPD(0x0C078DAAu, 3);  /* 0C078DA8 mov.l Rm,@(disp,Rn) */
L_0C078DAA: BLKS(0x0C078DAAu);
	r3 = 0xC079F30u; UPD(0x0C078DACu, 1);  /* 0C078DAA mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C078DAC mov Rm,Rn */
	IF(0x0C078DAEu); PR = R32(r15); r15 += 4; UPD(0x0C078DB0u, 2);  /* 0C078DAE lds.l @Rn+,pr */
	IF(0x0C078DB0u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C079F30u: TAIL(blk_f_0C079F30); default: JUMPD(tv_); } }  /* 0C078DB0 jmp @Rn */
L_0C078DC0: BLKS(0x0C078DC0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C078D64u, 3); goto L_0C078D64; }  /* 0C078DC0 bra */
L_0C078DD0: BLKS(0x0C078DD0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C078D4Eu, 3); goto L_0C078D4E; }  /* 0C078DD0 bra */
L_0C078DE0: BLKS(0x0C078DE0u);
	r2 = r3;  /* 0C078DE0 mov Rm,Rn */
	r2 += 0x48u;  /* 0C078DE2 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C078DE6u, 3);  /* 0C078DE4 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C078DE6 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C078DE8 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C078DEA cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C078D6Eu, 6); goto L_0C078D6E; } UPD(0x0C078DF0u, 1); goto L_0C078DF0; }  /* 0C078DEC bf/s */
L_0C078DF0: BLKS(0x0C078DF0u);
	r0 = 0x0u;  /* 0C078DF0 mov #imm,Rn */
	W8(r2, r0); UPD(0x0C078DF4u, 2);  /* 0C078DF2 mov.b Rm,@Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C078DF6u, 1);  /* 0C078DF4 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C078DF6 add #imm,Rn */
	T = r0 == 0x10u;  /* 0C078DF8 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C078E10u, 5); goto L_0C078E10; } UPD(0x0C078DFEu, 1); goto L_0C078DFE; }  /* 0C078DFA bt/s */
L_0C078DFE: BLKS(0x0C078DFEu);
	r7 = 0xC079EF0u; UPD(0x0C078E00u, 1);  /* 0C078DFE mov.l @(disp,pc),Rn */
	IF(0x0C078E00u); { u32 t_ = r7; PR = 0x0C078E04u; IF(0x0C078E02u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C079EF0, 0x0C079EF0u, 0x0C078E04u); }  /* 0C078E00 jsr @Rn */
L_0C078E04: BLKS(0x0C078E04u);
	{ IF(0x0C078E06u); ; /* slot nop */ UPD(0x0C078D6Eu, 3); goto L_0C078D6E; }  /* 0C078E04 bra */
L_0C078E10: BLKS(0x0C078E10u);
	r2 = 0x0u;  /* 0C078E10 mov #imm,Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C078DFEu, 4); goto L_0C078DFE; }  /* 0C078E12 bra */
}

/* FUN_0c078e40 */
void blk_f_0C078E40(sh3_t *c)
{
	LOCALS;
L_0C078E40: BLKS(0x0C078E40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C078E42u, 1);  /* 0C078E40 mov.l Rm,@-Rn */
	r5 = 0x15u;  /* 0C078E42 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C078E46u, 2);  /* 0C078E44 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C078E48u, 1);  /* 0C078E46 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C078E4Au, 1);  /* 0C078E48 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C078E4A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C078E4Eu, 2);  /* 0C078E4C mov.l Rm,@-Rn */
	r4 = r10;  /* 0C078E4E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C078E52u, 2);  /* 0C078E50 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C078E54u, 1);  /* 0C078E52 mov.l Rm,@-Rn */
	IF(0x0C078E54u); r15 -= 4; W32(r15, PR); UPD(0x0C078E56u, 1);  /* 0C078E54 sts.l pr,@-Rn */
	r8 = 0xC079F80u; UPD(0x0C078E58u, 1);  /* 0C078E56 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C078E58 add #imm,Rn */
	r1 = 0xC28EDFCu; UPD(0x0C078E5Cu, 2);  /* 0C078E5A mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C078E5C mov Rm,Rn */
	IF(0x0C078E5Eu); { u32 t_ = r8; PR = 0x0C078E62u; W32(r14, r1); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C078E62u); }  /* 0C078E5E jsr @Rn */
L_0C078E62: BLKS(0x0C078E62u);
	T = (r0 & r0) == 0;  /* 0C078E62 tst Rm,Rn */
	{ u32 c_ = !T; r3 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C078E90u, 4); goto L_0C078E90; } goto L_0C078E68; }  /* 0C078E64 bf/s */
L_0C078E68: BLKS(0x0C078E68u);
	r2 = 0x2A0u; UPD(0x0C078E6Au, 2);  /* 0C078E68 mov.w @(disp,pc),Rn */
	IF(0x0C078E6Au); MACL = r10 * r2;  /* 0C078E6A mul.l Rm,Rn */
	r4 = 0xC29D1D8u; UPD(0x0C078E6Eu, 3);  /* 0C078E6C mov.l @(disp,pc),Rn */
	IF(0x0C078E6Eu); r0 = MACL;  /* 0C078E6E sts macl,Rn */
	r4 += r0;  /* 0C078E70 add Rm,Rn */
	r0 = 0x268u; UPD(0x0C078E74u, 3);  /* 0C078E72 mov.w @(disp,pc),Rn */
	IF(0x0C078E74u); W8(r0 + r4, r3); UPD(0x0C078E76u, 1);  /* 0C078E74 mov.b Rm,@(r0,Rn) */
	r0 = 0x1u;  /* 0C078E76 mov #imm,Rn */
	UPD(0x0C078E78u, 1);
L_0C078E78: BLKS(0x0C078E78u);
	r14 += 0x8u;  /* 0C078E78 add #imm,Rn */
	r15 = r14;  /* 0C078E7A mov Rm,Rn */
	IF(0x0C078E7Cu); PR = R32(r15); r15 += 4; UPD(0x0C078E7Eu, 3);  /* 0C078E7C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C078E80u, 1);  /* 0C078E7E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C078E82u, 1);  /* 0C078E80 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C078E84u, 1);  /* 0C078E82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C078E86u, 1);  /* 0C078E84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C078E88u, 1);  /* 0C078E86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C078E8Au, 1);  /* 0C078E88 mov.l @Rm+,Rn */
	IF(0x0C078E8Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C078E8A rts */
L_0C078E90: BLKS(0x0C078E90u);
	r5 = 0x2A0u; UPD(0x0C078E92u, 1);  /* 0C078E90 mov.w @(disp,pc),Rn */
	r6 = r10;  /* 0C078E92 mov Rm,Rn */
	IF(0x0C078E94u); MACL = r10 * r5;  /* 0C078E94 mul.l Rm,Rn */
	r6 += 0x1u;  /* 0C078E96 add #imm,Rn */
	r3 = 0xC29D1D8u; UPD(0x0C078E9Au, 5);  /* 0C078E98 mov.l @(disp,pc),Rn */
	IF(0x0C078E9Au); r11 = MACL;  /* 0C078E9A sts macl,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C078E9Eu, 2);  /* 0C078E9C mov.l Rm,@(disp,Rn) */
	r12 = 0x0u;  /* 0C078E9E mov #imm,Rn */
	r13 = 0x0u;  /* 0C078EA0 mov #imm,Rn */
	r11 += r3;  /* 0C078EA2 add Rm,Rn */
	UPD(0x0C078EA4u, 3);
L_0C078EA4: BLKS(0x0C078EA4u);
	r8 = 0x2800u; UPD(0x0C078EA6u, 1);  /* 0C078EA4 mov.w @(disp,pc),Rn */
	r2 = 0x50u;  /* 0C078EA6 mov #imm,Rn */
	r3 = R32(r14); UPD(0x0C078EAAu, 2);  /* 0C078EA8 mov.l @Rm,Rn */
	IF(0x0C078EAAu); MACL = r10 * r8;  /* 0C078EAA mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r5 = v_; } UPD(0x0C078EAEu, 3);  /* 0C078EAC mov.w @Rm+,Rn */
	IF(0x0C078EAEu); r8 = MACL;  /* 0C078EAE sts macl,Rn */
	IF(0x0C078EB0u); MACL = r5 * r2;  /* 0C078EB0 mul.l Rm,Rn */
	r9 = 0xC229004u; UPD(0x0C078EB4u, 4);  /* 0C078EB2 mov.l @(disp,pc),Rn */
	IF(0x0C078EB4u); r4 = MACL;  /* 0C078EB4 sts macl,Rn */
	r8 += r4;  /* 0C078EB6 add Rm,Rn */
	r8 += r9;  /* 0C078EB8 add Rm,Rn */
	r7 = 0xC0800000u; UPD(0x0C078EBCu, 4);  /* 0C078EBA mov.l @(disp,pc),Rn */
	r9 = r12;  /* 0C078EBC mov Rm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C078EC0u, 2);  /* 0C078EBE mov.l @(disp,Rm),Rn */
	IF(0x0C078EC0u); r9 <<= 2;  /* 0C078EC0 shll2 Rn */
	W32(r8, r7); UPD(0x0C078EC4u, 2);  /* 0C078EC2 mov.l Rm,@Rn */
	r0 = r9;  /* 0C078EC4 mov Rm,Rn */
	W32(r8 + 0x4u, r1); UPD(0x0C078EC8u, 2);  /* 0C078EC6 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C078EC8 mov Rm,Rn */
	r6 = 0xC185C00u; UPD(0x0C078ECCu, 2);  /* 0C078ECA mov.l @(disp,pc),Rn */
	W32(r14, r3); UPD(0x0C078ECEu, 1);  /* 0C078ECC mov.l Rm,@Rn */
	IF(0x0C078ECEu); r3 = R32(r0 + r6); UPD(0x0C078ED0u, 1);  /* 0C078ECE mov.l @(r0,Rm),Rn */
	r0 = 0xC079E80u; UPD(0x0C078ED2u, 1);  /* 0C078ED0 mov.l @(disp,pc),Rn */
	W32(r8 + 0x8u, r3); UPD(0x0C078ED4u, 1);  /* 0C078ED2 mov.l Rm,@(disp,Rn) */
	IF(0x0C078ED4u); { u32 t_ = r0; PR = 0x0C078ED8u; W32(r8 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C078ED8u); }  /* 0C078ED4 jsr @Rn */
L_0C078ED8: BLKS(0x0C078ED8u);
	r2 = 0xC185BECu; UPD(0x0C078EDAu, 1);  /* 0C078ED8 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C078EDA mov Rm,Rn */
	IF(0x0C078EDCu); r4 = R32(r0 + r2); UPD(0x0C078EDEu, 2);  /* 0C078EDC mov.l @(r0,Rm),Rn */
	W32(r8 + 0x3Cu, r4); UPD(0x0C078EE0u, 1);  /* 0C078EDE mov.l Rm,@(disp,Rn) */
	r9 = 0x808080u; UPD(0x0C078EE2u, 1);  /* 0C078EE0 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C078EE2 add #imm,Rn */
	W32(r8, r9); UPD(0x0C078EE6u, 2);  /* 0C078EE4 mov.l Rm,@Rn */
	r8 += 0xFFFFFFC0u;  /* 0C078EE6 add #imm,Rn */
	r7 = r8;  /* 0C078EE8 mov Rm,Rn */
	r7 += 0x48u;  /* 0C078EEA add #imm,Rn */
	r8 += 0x49u;  /* 0C078EEC add #imm,Rn */
	W8(r8, r13); UPD(0x0C078EF0u, 5);  /* 0C078EEE mov.b Rm,@Rn */
	r9 = 0x14u;  /* 0C078EF0 mov #imm,Rn */
	W8(r7, r13); UPD(0x0C078EF4u, 2);  /* 0C078EF2 mov.b Rm,@Rn */
	r8 += 0xFFFFFFB7u;  /* 0C078EF4 add #imm,Rn */
	r6 = R32(r11 + 0x10u); UPD(0x0C078EF8u, 2);  /* 0C078EF6 mov.l @(disp,Rm),Rn */
	r7 = 0x4u;  /* 0C078EF8 mov #imm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C078EFCu, 2);  /* 0C078EFA mov.l Rm,@(disp,Rn) */
	r3 = 0x40000u; UPD(0x0C078EFEu, 1);  /* 0C078EFC mov.l @(disp,pc),Rn */
	r5 = R32(r11 + 0x14u); UPD(0x0C078F00u, 1);  /* 0C078EFE mov.l @(disp,Rm),Rn */
	r2 = 0xC185C14u; UPD(0x0C078F02u, 1);  /* 0C078F00 mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C078F04u, 1);  /* 0C078F02 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r3); UPD(0x0C078F06u, 1);  /* 0C078F04 mov.l Rm,@(disp,Rn) */
	IF(0x0C078F06u); r4 = R32(r0 + r2); UPD(0x0C078F08u, 1);  /* 0C078F06 mov.l @(r0,Rm),Rn */
	W32(r8 + 0x30u, r4); UPD(0x0C078F0Au, 1);  /* 0C078F08 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Au;  /* 0C078F0A add #imm,Rn */
	W8(r8, r9); UPD(0x0C078F0Eu, 2);  /* 0C078F0C mov.b Rm,@Rn */
	r8 = r12;  /* 0C078F0E mov Rm,Rn */
	r8 += 0x1u;  /* 0C078F10 add #imm,Rn */
	r12 = (u32)(s32)(s16)r8;  /* 0C078F12 exts.w Rm,Rn */
	T = (s32)r12 > (s32)r7;  /* 0C078F14 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C078EA4u, 7); goto L_0C078EA4; } goto L_0C078F1A; }  /* 0C078F16 bf/s */
L_0C078F1A: BLKS(0x0C078F1Au);
	r13 = 0xC0C20A0u; UPD(0x0C078F1Cu, 2);  /* 0C078F1A mov.l @(disp,pc),Rn */
	r12 = 0xC185C28u; UPD(0x0C078F1Eu, 1);  /* 0C078F1C mov.l @(disp,pc),Rn */
	IF(0x0C078F1Eu); { u32 t_ = r13; PR = 0x0C078F22u; r5 = 0x55u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C078F22u); }  /* 0C078F1E jsr @Rn */
L_0C078F22: BLKS(0x0C078F22u);
	r0 = r12;  /* 0C078F22 mov Rm,Rn */
	IF(0x0C078F24u); r11 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C078F26u, 2);  /* 0C078F24 mov.b @(r0,Rm),Rn */
	r4 = r10;  /* 0C078F26 mov Rm,Rn */
	r10 = 0xC0C2020u; UPD(0x0C078F2Au, 2);  /* 0C078F28 mov.l @(disp,pc),Rn */
	IF(0x0C078F2Au); { u32 t_ = r10; PR = 0x0C078F2Eu; r5 = r11 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2020, 0x0C0C2020u, 0x0C078F2Eu); }  /* 0C078F2A jsr @Rn */
L_0C078F2E: BLKS(0x0C078F2Eu);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C078E78u, 3); goto L_0C078E78; }  /* 0C078F2E bra */
}

void blk_f_0C078F70(sh3_t *c)
{
	LOCALS;
L_0C078F70: BLKS(0x0C078F70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C078F72u, 1);  /* 0C078F70 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C078F74u, 1);  /* 0C078F72 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C078F76u, 1);  /* 0C078F74 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C078F78u, 1);  /* 0C078F76 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C078F7Au, 1);  /* 0C078F78 mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C078F7A exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C078F7Eu, 2);  /* 0C078F7C mov.l Rm,@-Rn */
	r5 = 0x2800u; UPD(0x0C078F80u, 1);  /* 0C078F7E mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C078F80 exts.w Rm,Rn */
	IF(0x0C078F82u); MACL = r13 * r5;  /* 0C078F82 mul.l Rm,Rn */
	r4 = 0x50u;  /* 0C078F84 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C078F88u, 5);  /* 0C078F86 mov.l Rm,@-Rn */
	IF(0x0C078F88u); r3 = MACL;  /* 0C078F88 sts macl,Rn */
	IF(0x0C078F8Au); MACL = r12 * r4;  /* 0C078F8A mul.l Rm,Rn */
	r0 = 0xC229004u; UPD(0x0C078F8Eu, 4);  /* 0C078F8C mov.l @(disp,pc),Rn */
	IF(0x0C078F8Eu); r2 = MACL;  /* 0C078F8E sts macl,Rn */
	IF(0x0C078F90u); r15 -= 4; W32(r15, PR); UPD(0x0C078F92u, 2);  /* 0C078F90 sts.l pr,@-Rn */
	r3 += r2;  /* 0C078F92 add Rm,Rn */
	r0 += r3;  /* 0C078F94 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C078F98u, 3);  /* 0C078F96 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C078F98 add #imm,Rn */
	r0 = 0x6u;  /* 0C078F9A mov #imm,Rn */
	T = r2 > r0;  /* 0C078F9C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07901Cu, 6); goto L_0C07901C; } goto L_0C078FA2; }  /* 0C078F9E bt/s */
L_0C078FA2: BLKS(0x0C078FA2u);
	r0 = 0xC078FB4u;  /* 0C078FA2 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C078FA4 add Rm,Rn */
	IF(0x0C078FA6u); r6 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C078FA8u, 4);  /* 0C078FA6 mov.w @(r0,Rm),Rn */
	IF(0x0C078FA8u); { u32 tv_ = (r6 + 0x0C078FACu); u32 t_ = PHYS(tv_); IF(0x0C078FAAu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C078FD0u: goto L_0C078FD0; case 0x0C07901Cu: goto L_0C07901C; case 0x0C0790C0u: goto L_0C0790C0; case 0x0C0792F0u: goto L_0C0792F0; case 0x0C0793A0u: goto L_0C0793A0; case 0x0C079530u: goto L_0C079530; default: JUMPD(tv_); } }  /* 0C078FA8 braf Rn */
L_0C078FD0: BLKS(0x0C078FD0u);
	r9 = 0x2A0u; UPD(0x0C078FD2u, 1);  /* 0C078FD0 mov.w @(disp,pc),Rn */
	IF(0x0C078FD2u); MACL = r13 * r9;  /* 0C078FD2 mul.l Rm,Rn */
	r8 = 0xC29D1D8u; UPD(0x0C078FD6u, 3);  /* 0C078FD4 mov.l @(disp,pc),Rn */
	IF(0x0C078FD6u); r9 = MACL;  /* 0C078FD6 sts macl,Rn */
	r9 += r8;  /* 0C078FD8 add Rm,Rn */
	r2 = R32(r9); UPD(0x0C078FDCu, 3);  /* 0C078FDA mov.l @Rm,Rn */
	r7 = 0x4000000u; UPD(0x0C078FDEu, 1);  /* 0C078FDC mov.l @(disp,pc),Rn */
	r2 &= r7;  /* 0C078FDE and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C078FE0 tst Rm,Rn */
	if (T) { UPD(0x0C0790A0u, 5); goto L_0C0790A0; }  /* 0C078FE2 bt */
L_0C078FE4: BLKS(0x0C078FE4u);
	r4 = 0x50u;  /* 0C078FE4 mov #imm,Rn */
	r5 = 0x2800u; UPD(0x0C078FE8u, 2);  /* 0C078FE6 mov.w @(disp,pc),Rn */
	IF(0x0C078FE8u); MACL = r13 * r5;  /* 0C078FE8 mul.l Rm,Rn */
	r3 = 0xC229004u; UPD(0x0C078FECu, 3);  /* 0C078FEA mov.l @(disp,pc),Rn */
	IF(0x0C078FECu); r8 = MACL;  /* 0C078FEC sts macl,Rn */
	IF(0x0C078FEEu); MACL = r12 * r4;  /* 0C078FEE mul.l Rm,Rn */
	r0 = R32(r9 + 0x10u); UPD(0x0C078FF2u, 4);  /* 0C078FF0 mov.l @(disp,Rm),Rn */
	IF(0x0C078FF2u); r2 = MACL;  /* 0C078FF2 sts macl,Rn */
	r8 += r2;  /* 0C078FF4 add Rm,Rn */
	r8 += r3;  /* 0C078FF6 add Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C078FFAu, 4);  /* 0C078FF8 mov.l Rm,@(disp,Rn) */
	r10 = r8;  /* 0C078FFA mov Rm,Rn */
	r10 += 0x48u;  /* 0C078FFC add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C079000u, 3);  /* 0C078FFE mov.b @Rm,Rn */
	r11 = R32(r9 + 0x14u); UPD(0x0C079002u, 1);  /* 0C079000 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C079002 add #imm,Rn */
	W8(r10, r0); UPD(0x0C079006u, 2);  /* 0C079004 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C079006 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C079008 tst Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x28u, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C079080u, 5); goto L_0C079080; } UPD(0x0C07900Eu, 1); goto L_0C07900E; }  /* 0C07900A bt/s */
L_0C07900E: BLKS(0x0C07900Eu);
	r0 = 0x24Cu; UPD(0x0C079010u, 1);  /* 0C07900E mov.w @(disp,pc),Rn */
	r10 = 0x20u;  /* 0C079010 mov #imm,Rn */
	IF(0x0C079012u); r1 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C079014u, 2);  /* 0C079012 mov.w @(r0,Rm),Rn */
	r10 &= r1;  /* 0C079014 and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C079016 tst Rm,Rn */
	if (T) { UPD(0x0C079040u, 5); goto L_0C079040; }  /* 0C079018 bt */
L_0C07901A: BLKS(0x0C07901Au);
	IF(0x0C07901Au); ;  /* 0C07901A nop */
	UPD(0x0C07901Cu, 1);
L_0C07901C: BLKS(0x0C07901Cu);
	r14 += 0xCu;  /* 0C07901C add #imm,Rn */
	UPD(0x0C07901Eu, 1);
L_0C07901E: BLKS(0x0C07901Eu);
	r15 = r14;  /* 0C07901E mov Rm,Rn */
	IF(0x0C079020u); PR = R32(r15); r15 += 4; UPD(0x0C079022u, 2);  /* 0C079020 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C079024u, 1);  /* 0C079022 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C079026u, 1);  /* 0C079024 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C079028u, 1);  /* 0C079026 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07902Au, 1);  /* 0C079028 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07902Cu, 1);  /* 0C07902A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07902Eu, 1);  /* 0C07902C mov.l @Rm+,Rn */
	IF(0x0C07902Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07902E rts */
L_0C079040: BLKS(0x0C079040u);
	r3 = R32(r8 + 0x8u); UPD(0x0C079042u, 1);  /* 0C079040 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C079042 mov Rm,Rn */
	r11 = 0xC079F30u; UPD(0x0C079046u, 2);  /* 0C079044 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C079046 add #imm,Rn */
	W32(r8 + 0x8u, r3); UPD(0x0C07904Au, 2);  /* 0C079048 mov.l Rm,@(disp,Rn) */
	r5 = r12;  /* 0C07904A mov Rm,Rn */
	IF(0x0C07904Cu); { u32 t_ = r11; PR = 0x0C079050u; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C079F30, 0x0C079F30u, 0x0C079050u); }  /* 0C07904C jsr @Rn */
L_0C079050: BLKS(0x0C079050u);
	W32(r8 + 0x3Cu, r10); UPD(0x0C079052u, 1);  /* 0C079050 mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C079052 mov Rm,Rn */
	r0 = 0x268u; UPD(0x0C079056u, 2);  /* 0C079054 mov.w @(disp,pc),Rn */
	IF(0x0C079056u); W8(r0 + r9, r10); UPD(0x0C079058u, 1);  /* 0C079056 mov.b Rm,@(r0,Rn) */
	r9 = 0xC0C20A0u; UPD(0x0C07905Au, 1);  /* 0C079058 mov.l @(disp,pc),Rn */
	r8 = 0xC185C74u; UPD(0x0C07905Cu, 1);  /* 0C07905A mov.l @(disp,pc),Rn */
	IF(0x0C07905Cu); { u32 t_ = r9; PR = 0x0C079060u; r5 = 0x56u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C079060u); }  /* 0C07905C jsr @Rn */
L_0C079060: BLKS(0x0C079060u);
	r0 = r8;  /* 0C079060 mov Rm,Rn */
	IF(0x0C079062u); r12 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C079064u, 2);  /* 0C079062 mov.b @(r0,Rm),Rn */
	r14 += 0xCu;  /* 0C079064 add #imm,Rn */
	r0 = 0xC0C2020u; UPD(0x0C079068u, 2);  /* 0C079066 mov.l @(disp,pc),Rn */
	r4 = r12 & 0xFF;  /* 0C079068 extu.b Rm,Rn */
	r15 = r14;  /* 0C07906A mov Rm,Rn */
	IF(0x0C07906Cu); PR = R32(r15); r15 += 4; UPD(0x0C07906Eu, 3);  /* 0C07906C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C079070u, 1);  /* 0C07906E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C079072u, 1);  /* 0C079070 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C079074u, 1);  /* 0C079072 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C079076u, 1);  /* 0C079074 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C079078u, 1);  /* 0C079076 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07907Au, 1);  /* 0C079078 mov.l @Rm+,Rn */
	IF(0x0C07907Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C2020u: TAIL(blk_f_0C0C2020); default: JUMPD(tv_); } }  /* 0C07907A jmp @Rn */
L_0C079080: BLKS(0x0C079080u);
	r0 = R32(r8 + 0xCu); UPD(0x0C079082u, 1);  /* 0C079080 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C079082 mov Rm,Rn */
	r10 = 0xC185C2Cu; UPD(0x0C079086u, 2);  /* 0C079084 mov.l @(disp,pc),Rn */
	IF(0x0C079086u); r0 <<= 2;  /* 0C079086 shll2 Rn */
	r6 = 0xC079EF0u; UPD(0x0C07908Au, 2);  /* 0C079088 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C07908A mov Rm,Rn */
	IF(0x0C07908Cu); r7 = R32(r0 + r10); UPD(0x0C07908Eu, 2);  /* 0C07908C mov.l @(r0,Rm),Rn */
	IF(0x0C07908Eu); { u32 t_ = r6; PR = 0x0C079092u; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C079EF0, 0x0C079EF0u, 0x0C079092u); }  /* 0C07908E jsr @Rn */
L_0C079092: BLKS(0x0C079092u);
	{ IF(0x0C079094u); ; /* slot nop */ UPD(0x0C07900Eu, 3); goto L_0C07900E; }  /* 0C079092 bra */
L_0C0790A0: BLKS(0x0C0790A0u);
	r3 = 0x2800u; UPD(0x0C0790A2u, 1);  /* 0C0790A0 mov.w @(disp,pc),Rn */
	r6 = 0x50u;  /* 0C0790A2 mov #imm,Rn */
	IF(0x0C0790A4u); MACL = r13 * r3;  /* 0C0790A4 mul.l Rm,Rn */
	IF(0x0C0790A6u); r0 = MACL;  /* 0C0790A6 sts macl,Rn */
	IF(0x0C0790A8u); MACL = r12 * r6;  /* 0C0790A8 mul.l Rm,Rn */
	r13 = 0xC229004u; UPD(0x0C0790ACu, 7);  /* 0C0790AA mov.l @(disp,pc),Rn */
	IF(0x0C0790ACu); r12 = MACL;  /* 0C0790AC sts macl,Rn */
	r0 += r12;  /* 0C0790AE add Rm,Rn */
	{ IF(0x0C0790B2u); W32(r0 + r13, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C07901Cu, 5); goto L_0C07901C; }  /* 0C0790B0 bra */
L_0C0790C0: BLKS(0x0C0790C0u);
	r10 = 0x2800u; UPD(0x0C0790C2u, 1);  /* 0C0790C0 mov.w @(disp,pc),Rn */
	r7 = 0x50u;  /* 0C0790C2 mov #imm,Rn */
	IF(0x0C0790C4u); MACL = r13 * r10;  /* 0C0790C4 mul.l Rm,Rn */
	r4 = 0xC229004u; UPD(0x0C0790C8u, 4);  /* 0C0790C6 mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C0790C8 mov #imm,Rn */
	IF(0x0C0790CAu); r9 = MACL;  /* 0C0790CA sts macl,Rn */
	IF(0x0C0790CCu); MACL = r12 * r7;  /* 0C0790CC mul.l Rm,Rn */
	r6 = 0xC079EF0u; UPD(0x0C0790D0u, 5);  /* 0C0790CE mov.l @(disp,pc),Rn */
	IF(0x0C0790D0u); r5 = MACL;  /* 0C0790D0 sts macl,Rn */
	r9 += r5;  /* 0C0790D2 add Rm,Rn */
	r9 += r4;  /* 0C0790D4 add Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C0790D8u, 4);  /* 0C0790D6 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C0790D8 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0790DA add #imm,Rn */
	r0 &= 0x7u;  /* 0C0790DC and #imm,r0 */
	W32(r9 + 0xCu, r0); UPD(0x0C0790E0u, 4);  /* 0C0790DE mov.l Rm,@(disp,Rn) */
	IF(0x0C0790E0u); { u32 t_ = r6; PR = 0x0C0790E4u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079EF0, 0x0C079EF0u, 0x0C0790E4u); }  /* 0C0790E0 jsr @Rn */
L_0C0790E4: BLKS(0x0C0790E4u);
	r2 = r13;  /* 0C0790E4 mov Rm,Rn */
	IF(0x0C0790E6u); r2 <<= 2;  /* 0C0790E6 shll2 Rn */
	W32(r14 + 0x8u, r2); UPD(0x0C0790EAu, 3);  /* 0C0790E8 mov.l Rm,@(disp,Rn) */
	r10 = r9;  /* 0C0790EA mov Rm,Rn */
	UPD(0x0C0790ECu, 1);
L_0C0790EC: BLKS(0x0C0790ECu);
	r8 = 0xC062780u; UPD(0x0C0790EEu, 1);  /* 0C0790EC mov.l @(disp,pc),Rn */
	IF(0x0C0790EEu); { u32 t_ = r8; PR = 0x0C0790F2u; r4 = 0x5Fu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0790F2u); }  /* 0C0790EE jsr @Rn */
L_0C0790F2: BLKS(0x0C0790F2u);
	r9 = r0;  /* 0C0790F2 mov Rm,Rn */
	r7 = 0x50u;  /* 0C0790F4 mov #imm,Rn */
	r0 = 0xD0u; UPD(0x0C0790F8u, 3);  /* 0C0790F6 mov.w @(disp,pc),Rn */
	IF(0x0C0790F8u); MACL = r12 * r7;  /* 0C0790F8 mul.l Rm,Rn */
	r9 += r0;  /* 0C0790FA add Rm,Rn */
	r8 = (u32)(s32)(s16)r9;  /* 0C0790FC exts.w Rm,Rn */
	IF(0x0C0790FEu); r5 = MACL;  /* 0C0790FE sts macl,Rn */
	r9 = R32(r10 + 0x24u); UPD(0x0C079102u, 6);  /* 0C079100 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C079102 add #imm,Rn */
	r4 = 0xFFE00000u; UPD(0x0C079106u, 2);  /* 0C079104 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C079106 mov #imm,Rn */
	r0 = 0xC069B20u; UPD(0x0C07910Au, 2);  /* 0C079108 mov.l @(disp,pc),Rn */
	r6 = 0x14u;  /* 0C07910A mov #imm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C07910Eu, 2);  /* 0C07910C mov.l Rm,@(disp,Rn) */
	r9 += r4;  /* 0C07910E add Rm,Rn */
	W32(r15, r1); UPD(0x0C079112u, 2);  /* 0C079110 mov.l Rm,@Rn */
	r4 = r8;  /* 0C079112 mov Rm,Rn */
	r5 = 0x60000u; UPD(0x0C079116u, 2);  /* 0C079114 mov.l @(disp,pc),Rn */
	IF(0x0C079116u); { u32 t_ = r0; PR = 0x0C07911Au; W32(r15 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07911Au); }  /* 0C079116 jsr @Rn */
L_0C07911A: BLKS(0x0C07911Au);
	r4 = r8;  /* 0C07911A mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C07911Eu, 2);  /* 0C07911C mov.l @(disp,pc),Rn */
	r5 = 0x60000u; UPD(0x0C079120u, 1);  /* 0C07911E mov.l @(disp,pc),Rn */
	IF(0x0C079120u); { u32 t_ = r8; PR = 0x0C079124u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C079124u); }  /* 0C079120 jsr @Rn */
L_0C079124: BLKS(0x0C079124u);
	W32(r15 + 0xCu, r0); UPD(0x0C079126u, 1);  /* 0C079124 mov.l Rm,@(disp,Rn) */
	r6 = r9;  /* 0C079126 mov Rm,Rn */
	r0 = R32(r14 + 0x8u); UPD(0x0C07912Au, 2);  /* 0C079128 mov.l @(disp,Rm),Rn */
	r8 = r11;  /* 0C07912A mov Rm,Rn */
	r2 = 0xC185C6Cu; UPD(0x0C07912Eu, 2);  /* 0C07912C mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C07912E mov #imm,Rn */
	IF(0x0C079130u); r3 = R32(r0 + r2); UPD(0x0C079132u, 2);  /* 0C079130 mov.l @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C079132 add #imm,Rn */
	r9 = 0xC0BEEF0u; UPD(0x0C079136u, 2);  /* 0C079134 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r8;  /* 0C079136 exts.w Rm,Rn */
	W32(r15 + 0x10u, r3); UPD(0x0C07913Au, 2);  /* 0C079138 mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C07913Cu, 1);  /* 0C07913A mov.l @Rm,Rn */
	IF(0x0C07913Cu); { u32 t_ = r9; PR = 0x0C079140u; r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C079140u); }  /* 0C07913C jsr @Rn */
L_0C079140: BLKS(0x0C079140u);
	r0 = 0x7u;  /* 0C079140 mov #imm,Rn */
	T = (s32)r11 > (s32)r0;  /* 0C079142 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0790ECu, 5); goto L_0C0790EC; } goto L_0C079148; }  /* 0C079144 bf/s */
L_0C079148: BLKS(0x0C079148u);
	r10 = 0x2800u; UPD(0x0C07914Au, 2);  /* 0C079148 mov.w @(disp,pc),Rn */
	IF(0x0C07914Au); MACL = r13 * r10;  /* 0C07914A mul.l Rm,Rn */
	r9 = R32(r14 + 0x4u); UPD(0x0C07914Eu, 3);  /* 0C07914C mov.l @(disp,Rm),Rn */
	IF(0x0C07914Eu); r10 = MACL;  /* 0C07914E sts macl,Rn */
	r11 = 0xC229004u; UPD(0x0C079152u, 2);  /* 0C079150 mov.l @(disp,pc),Rn */
	r9 += r10;  /* 0C079152 add Rm,Rn */
	r9 += r11;  /* 0C079154 add Rm,Rn */
	r3 = R32(r9); UPD(0x0C079158u, 3);  /* 0C079156 mov.l @Rm,Rn */
	r7 = 0xC000000u; UPD(0x0C07915Au, 1);  /* 0C079158 mov.l @(disp,pc),Rn */
	T = (r3 & r7) == 0;  /* 0C07915A tst Rm,Rn */
	if (!T) { UPD(0x0C079240u, 4); goto L_0C079240; }  /* 0C07915C bf */
L_0C07915E: BLKS(0x0C07915Eu);
	r4 = 0x2A0u; UPD(0x0C079160u, 1);  /* 0C07915E mov.w @(disp,pc),Rn */
	IF(0x0C079160u); MACL = r13 * r4;  /* 0C079160 mul.l Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C079164u, 3);  /* 0C079162 mov.l @(disp,pc),Rn */
	IF(0x0C079164u); r8 = MACL;  /* 0C079164 sts macl,Rn */
	r8 += r2;  /* 0C079166 add Rm,Rn */
	r2 = R32(r8); UPD(0x0C07916Au, 3);  /* 0C079168 mov.l @Rm,Rn */
	r6 = 0x4000000u; UPD(0x0C07916Cu, 1);  /* 0C07916A mov.l @(disp,pc),Rn */
	r2 &= r6;  /* 0C07916C and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07916E tst Rm,Rn */
	if (!T) { UPD(0x0C0791D0u, 5); goto L_0C0791D0; }  /* 0C079170 bf */
L_0C079172: BLKS(0x0C079172u);
	W32(r9, r2); UPD(0x0C079174u, 1);  /* 0C079172 mov.l Rm,@Rn */
L_0C079174: BLKS(0x0C079174u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07901Eu, 3); goto L_0C07901E; }  /* 0C079174 bra */
L_0C0791D0: BLKS(0x0C0791D0u);
	r11 = R32(r8 + 0x10u); UPD(0x0C0791D2u, 1);  /* 0C0791D0 mov.l @(disp,Rm),Rn */
	r10 = R32(r9 + 0x2Cu); UPD(0x0C0791D4u, 1);  /* 0C0791D2 mov.l @(disp,Rm),Rn */
	r11 += r10;  /* 0C0791D4 add Rm,Rn */
	W32(r9 + 0x24u, r11); UPD(0x0C0791D8u, 2);  /* 0C0791D6 mov.l Rm,@(disp,Rn) */
	r10 = 0x20u;  /* 0C0791D8 mov #imm,Rn */
	r5 = R32(r8 + 0x14u); UPD(0x0C0791DCu, 2);  /* 0C0791DA mov.l @(disp,Rm),Rn */
	r0 = R32(r9 + 0x30u); UPD(0x0C0791DEu, 1);  /* 0C0791DC mov.l @(disp,Rm),Rn */
	r5 += r0;  /* 0C0791DE add Rm,Rn */
	r0 = 0x24Cu; UPD(0x0C0791E2u, 2);  /* 0C0791E0 mov.w @(disp,pc),Rn */
	IF(0x0C0791E2u); r1 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0791E4u, 1);  /* 0C0791E2 mov.w @(r0,Rm),Rn */
	r10 &= r1;  /* 0C0791E4 and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0791E6 tst Rm,Rn */
	{ u32 c_ = !T; W32(r9 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C079174u, 5); goto L_0C079174; } UPD(0x0C0791ECu, 1); goto L_0C0791EC; }  /* 0C0791E8 bf/s */
L_0C0791EC: BLKS(0x0C0791ECu);
	r6 = 0xC079F30u; UPD(0x0C0791EEu, 1);  /* 0C0791EC mov.l @(disp,pc),Rn */
	r3 |= r7;  /* 0C0791EE or Rm,Rn */
	r2 = 0x1u;  /* 0C0791F0 mov #imm,Rn */
	W32(r9, r3); UPD(0x0C0791F4u, 3);  /* 0C0791F2 mov.l Rm,@Rn */
	r5 = r12;  /* 0C0791F4 mov Rm,Rn */
	W32(r9 + 0x8u, r2); UPD(0x0C0791F8u, 2);  /* 0C0791F6 mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C0791F8 mov Rm,Rn */
	IF(0x0C0791FAu); { u32 t_ = r6; PR = 0x0C0791FEu; W32(r9 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C079F30, 0x0C079F30u, 0x0C0791FEu); }  /* 0C0791FA jsr @Rn */
L_0C0791FE: BLKS(0x0C0791FEu);
	r7 = 0x30000u; UPD(0x0C079200u, 1);  /* 0C0791FE mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C079200 mov Rm,Rn */
	W32(r9 + 0x2Cu, r7); UPD(0x0C079204u, 2);  /* 0C079202 mov.l Rm,@(disp,Rn) */
	r5 = 0x56u;  /* 0C079204 mov #imm,Rn */
	W32(r9 + 0x30u, r10); UPD(0x0C079208u, 2);  /* 0C079206 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x3Cu, r10); UPD(0x0C07920Au, 1);  /* 0C079208 mov.l Rm,@(disp,Rn) */
	r9 = 0xC0C20A0u; UPD(0x0C07920Cu, 1);  /* 0C07920A mov.l @(disp,pc),Rn */
	r0 = 0x268u; UPD(0x0C07920Eu, 1);  /* 0C07920C mov.w @(disp,pc),Rn */
	IF(0x0C07920Eu); { u32 t_ = r9; PR = 0x0C079212u; IF(0x0C079210u); W8(r0 + r8, r10); /* slot mov.b Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C079212u); }  /* 0C07920E jsr @Rn */
L_0C079212: BLKS(0x0C079212u);
	r3 = 0xC185C74u; UPD(0x0C079214u, 1);  /* 0C079212 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C079214 mov Rm,Rn */
	r0 = r3;  /* 0C079216 mov Rm,Rn */
	IF(0x0C079218u); r12 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C07921Au, 3);  /* 0C079218 mov.b @(r0,Rm),Rn */
	r5 = r12 & 0xFF;  /* 0C07921A extu.b Rm,Rn */
	UPD(0x0C07921Cu, 1);
L_0C07921C: BLKS(0x0C07921Cu);
	r1 = 0xC0C2020u; UPD(0x0C07921Eu, 1);  /* 0C07921C mov.l @(disp,pc),Rn */
L_0C07921E: BLKS(0x0C07921Eu);
	r14 += 0xCu;  /* 0C07921E add #imm,Rn */
	r15 = r14;  /* 0C079220 mov Rm,Rn */
	IF(0x0C079222u); PR = R32(r15); r15 += 4; UPD(0x0C079224u, 3);  /* 0C079222 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C079226u, 1);  /* 0C079224 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C079228u, 1);  /* 0C079226 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07922Au, 1);  /* 0C079228 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07922Cu, 1);  /* 0C07922A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07922Eu, 1);  /* 0C07922C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C079230u, 1);  /* 0C07922E mov.l @Rm+,Rn */
	IF(0x0C079230u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C079EF0u: TAIL(blk_f_0C079EF0); case 0x0C0C2020u: TAIL(blk_f_0C0C2020); default: JUMPD(tv_); } }  /* 0C079230 jmp @Rn */
L_0C079240: BLKS(0x0C079240u);
	r8 = R32(r9 + 0x24u); UPD(0x0C079242u, 1);  /* 0C079240 mov.l @(disp,Rm),Rn */
	r4 = R32(r9 + 0x28u); UPD(0x0C079244u, 1);  /* 0C079242 mov.l @(disp,Rm),Rn */
	r5 = R32(r9 + 0x2Cu); UPD(0x0C079246u, 1);  /* 0C079244 mov.l @(disp,Rm),Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C079248u, 1);  /* 0C079246 mov.l @(disp,Rm),Rn */
	r8 += r5;  /* 0C079248 add Rm,Rn */
	r2 = 0xFF600000u; UPD(0x0C07924Cu, 2);  /* 0C07924A mov.l @(disp,pc),Rn */
	r4 += r1;  /* 0C07924C add Rm,Rn */
	r2 += r8;  /* 0C07924E add Rm,Rn */
	W32(r9 + 0x24u, r8); UPD(0x0C079252u, 3);  /* 0C079250 mov.l Rm,@(disp,Rn) */
	IF(0x0C079252u); T = (s32)r2 >= 0;  /* 0C079252 cmp/pz Rn */
	{ u32 c_ = !T; W32(r9 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0792E0u, 4); goto L_0C0792E0; } UPD(0x0C079258u, 1); goto L_0C079258; }  /* 0C079254 bf/s */
L_0C079258: BLKS(0x0C079258u);
	r0 = 0xE00000u; UPD(0x0C07925Au, 1);  /* 0C079258 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C07925A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C079270u, 4); goto L_0C079270; }  /* 0C07925C bf */
L_0C07925E: BLKS(0x0C07925Eu);
	r13 = 0x0u;  /* 0C07925E mov #imm,Rn */
	W32(r9, r13); UPD(0x0C079262u, 2);  /* 0C079260 mov.l Rm,@Rn */
L_0C079262: BLKS(0x0C079262u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07901Eu, 3); goto L_0C07901E; }  /* 0C079262 bra */
L_0C079270: BLKS(0x0C079270u);
	r11 = r9;  /* 0C079270 mov Rm,Rn */
	r11 += 0x48u;  /* 0C079272 add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r11); UPD(0x0C079276u, 3);  /* 0C079274 mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C079276 add #imm,Rn */
	W8(r11, r12); UPD(0x0C07927Au, 2);  /* 0C079278 mov.b Rm,@Rn */
	r11 = 0x3u;  /* 0C07927A mov #imm,Rn */
	r11 &= r12;  /* 0C07927C and Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C07927E tst Rm,Rn */
	if (!T) { UPD(0x0C079262u, 6); goto L_0C079262; }  /* 0C079280 bf */
L_0C079282: BLKS(0x0C079282u);
	r4 = r13;  /* 0C079282 mov Rm,Rn */
	r8 = 0xC079F80u; UPD(0x0C079286u, 2);  /* 0C079284 mov.l @(disp,pc),Rn */
	IF(0x0C079286u); { u32 t_ = r8; PR = 0x0C07928Au; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C07928Au); }  /* 0C079286 jsr @Rn */
L_0C07928A: BLKS(0x0C07928Au);
	T = (r0 & r0) == 0;  /* 0C07928A tst Rm,Rn */
	if (T) { UPD(0x0C079262u, 4); goto L_0C079262; }  /* 0C07928C bt */
L_0C07928E: BLKS(0x0C07928Eu);
	r12 = 0x50u;  /* 0C07928E mov #imm,Rn */
	r7 = 0xC28EDFCu; UPD(0x0C079292u, 2);  /* 0C079290 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r7); UPD(0x0C079294u, 1);  /* 0C079292 mov.w @Rm,Rn */
	r8 = 0x2u;  /* 0C079294 mov #imm,Rn */
	IF(0x0C079296u); MACL = r5 * r12;  /* 0C079296 mul.l Rm,Rn */
	r1 = 0xC229004u; UPD(0x0C07929Au, 4);  /* 0C079298 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C07929A mov Rm,Rn */
	IF(0x0C07929Cu); r12 = MACL;  /* 0C07929C sts macl,Rn */
	r12 += r10;  /* 0C07929E add Rm,Rn */
	r0 = 0xC079E80u; UPD(0x0C0792A2u, 4);  /* 0C0792A0 mov.l @(disp,pc),Rn */
	r12 += r1;  /* 0C0792A2 add Rm,Rn */
	r10 = R32(r9 + 0x4u); UPD(0x0C0792A6u, 2);  /* 0C0792A4 mov.l @(disp,Rm),Rn */
	r3 = 0xCD800000u; UPD(0x0C0792A8u, 1);  /* 0C0792A6 mov.l @(disp,pc),Rn */
	W32(r12 + 0x4u, r10); UPD(0x0C0792AAu, 1);  /* 0C0792A8 mov.l Rm,@(disp,Rn) */
	W32(r12, r3); UPD(0x0C0792ACu, 1);  /* 0C0792AA mov.l Rm,@Rn */
	r10 = r12;  /* 0C0792AC mov Rm,Rn */
	W32(r12 + 0x8u, r8); UPD(0x0C0792B0u, 2);  /* 0C0792AE mov.l Rm,@(disp,Rn) */
	r10 += 0x40u;  /* 0C0792B0 add #imm,Rn */
	IF(0x0C0792B2u); { u32 t_ = r0; PR = 0x0C0792B6u; W32(r12 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C0792B6u); }  /* 0C0792B2 jsr @Rn */
L_0C0792B6: BLKS(0x0C0792B6u);
	r6 = R32(r9 + 0x24u); UPD(0x0C0792B8u, 1);  /* 0C0792B6 mov.l @(disp,Rm),Rn */
	r2 = 0xFFE00000u; UPD(0x0C0792BAu, 1);  /* 0C0792B8 mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0792BCu, 1);  /* 0C0792BA mov.l @(disp,Rm),Rn */
	r6 += r2;  /* 0C0792BC add Rm,Rn */
	r5 = 0x204FFFFu; UPD(0x0C0792C0u, 2);  /* 0C0792BE mov.l @(disp,pc),Rn */
	r9 += 0x4Au;  /* 0C0792C0 add #imm,Rn */
	r4 = 0x808080u; UPD(0x0C0792C4u, 2);  /* 0C0792C2 mov.l @(disp,pc),Rn */
	W32(r12 + 0x3Cu, r5); UPD(0x0C0792C6u, 1);  /* 0C0792C4 mov.l Rm,@(disp,Rn) */
	W32(r10, r4); UPD(0x0C0792C8u, 1);  /* 0C0792C6 mov.l Rm,@Rn */
	W32(r12 + 0x24u, r6); UPD(0x0C0792CAu, 1);  /* 0C0792C8 mov.l Rm,@(disp,Rn) */
	r10 += 0x8u;  /* 0C0792CA add #imm,Rn */
	W32(r12 + 0x28u, r7); UPD(0x0C0792CEu, 2);  /* 0C0792CC mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C0792D0u, 1);  /* 0C0792CE mov.b @Rm,Rn */
	r12 += 0x4Au;  /* 0C0792D0 add #imm,Rn */
	W8(r12, r3); UPD(0x0C0792D4u, 2);  /* 0C0792D2 mov.b Rm,@Rn */
	W8(r10, r11); UPD(0x0C0792D6u, 1);  /* 0C0792D4 mov.b Rm,@Rn */
L_0C0792D6: BLKS(0x0C0792D6u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07901Eu, 3); goto L_0C07901E; }  /* 0C0792D6 bra */
L_0C0792E0: BLKS(0x0C0792E0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C079258u, 3); goto L_0C079258; }  /* 0C0792E0 bra */
L_0C0792F0: BLKS(0x0C0792F0u);
	r2 = 0x2800u; UPD(0x0C0792F2u, 1);  /* 0C0792F0 mov.w @(disp,pc),Rn */
	r6 = 0x50u;  /* 0C0792F2 mov #imm,Rn */
	IF(0x0C0792F4u); MACL = r13 * r2;  /* 0C0792F4 mul.l Rm,Rn */
	r9 = 0xC229004u; UPD(0x0C0792F8u, 4);  /* 0C0792F6 mov.l @(disp,pc),Rn */
	IF(0x0C0792F8u); r7 = MACL;  /* 0C0792F8 sts macl,Rn */
	IF(0x0C0792FAu); MACL = r12 * r6;  /* 0C0792FA mul.l Rm,Rn */
	IF(0x0C0792FCu); r11 = MACL;  /* 0C0792FC sts macl,Rn */
	r7 += r11;  /* 0C0792FE add Rm,Rn */
	r7 += r9;  /* 0C079300 add Rm,Rn */
	r3 = r7;  /* 0C079302 mov Rm,Rn */
	r3 += 0x48u;  /* 0C079304 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C079308u, 9);  /* 0C079306 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C079308 add #imm,Rn */
	W8(r3, r0); UPD(0x0C07930Cu, 2);  /* 0C07930A mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C07930C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07930E tst Rm,Rn */
	if (!T) { UPD(0x0C07931Au, 5); goto L_0C07931A; }  /* 0C079310 bf */
L_0C079312: BLKS(0x0C079312u);
	r4 = R32(r7 + 0x3Cu); UPD(0x0C079314u, 1);  /* 0C079312 mov.l @(disp,Rm),Rn */
	r5 = 0xFFFFFEFFu; UPD(0x0C079316u, 1);  /* 0C079314 mov.w @(disp,pc),Rn */
	r4 += r5;  /* 0C079316 add Rm,Rn */
	W32(r7 + 0x3Cu, r4); UPD(0x0C07931Au, 2);  /* 0C079318 mov.l Rm,@(disp,Rn) */
L_0C07931A: BLKS(0x0C07931Au);
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C07931Cu, 1);  /* 0C07931A mov.b @Rm,Rn */
	r0 &= 0x3u;  /* 0C07931C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07931E tst Rm,Rn */
	if (!T) { UPD(0x0C0792D6u, 5); goto L_0C0792D6; }  /* 0C079320 bf */
L_0C079322: BLKS(0x0C079322u);
	r10 = R32(r7 + 0xCu); UPD(0x0C079324u, 1);  /* 0C079322 mov.l @(disp,Rm),Rn */
	r8 = 0x80u; UPD(0x0C079326u, 1);  /* 0C079324 mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C079326 add #imm,Rn */
	T = r10 == r8;  /* 0C079328 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r7 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C079340u, 5); goto L_0C079340; } UPD(0x0C07932Eu, 1); goto L_0C07932E; }  /* 0C07932A bf/s */
L_0C07932E: BLKS(0x0C07932Eu);
	W32(r7, r0); UPD(0x0C079330u, 1);  /* 0C07932E mov.l Rm,@Rn */
L_0C079330: BLKS(0x0C079330u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07901Eu, 3); goto L_0C07901E; }  /* 0C079330 bra */
L_0C079340: BLKS(0x0C079340u);
	r1 = 0xC079EF0u; UPD(0x0C079342u, 1);  /* 0C079340 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C079342 mov Rm,Rn */
	{ r5 = r12; /* slot mov Rm,Rn */ UPD(0x0C07921Eu, 4); goto L_0C07921E; }  /* 0C079344 bra */
L_0C0793A0: BLKS(0x0C0793A0u);
	r3 = 0x2800u; UPD(0x0C0793A2u, 1);  /* 0C0793A0 mov.w @(disp,pc),Rn */
	r6 = 0x50u;  /* 0C0793A2 mov #imm,Rn */
	IF(0x0C0793A4u); MACL = r13 * r3;  /* 0C0793A4 mul.l Rm,Rn */
	r9 = 0xC229004u; UPD(0x0C0793A8u, 4);  /* 0C0793A6 mov.l @(disp,pc),Rn */
	IF(0x0C0793A8u); r3 = MACL;  /* 0C0793A8 sts macl,Rn */
	IF(0x0C0793AAu); MACL = r12 * r6;  /* 0C0793AA mul.l Rm,Rn */
	r0 = 0x4000u; UPD(0x0C0793AEu, 4);  /* 0C0793AC mov.w @(disp,pc),Rn */
	IF(0x0C0793AEu); r11 = MACL;  /* 0C0793AE sts macl,Rn */
	r3 += r11;  /* 0C0793B0 add Rm,Rn */
	r3 += r9;  /* 0C0793B2 add Rm,Rn */
	r3 += 0x4Cu;  /* 0C0793B4 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C0793B8u, 5);  /* 0C0793B6 mov.w @Rm,Rn */
	r3 += 0xFFFFFFB4u;  /* 0C0793B8 add #imm,Rn */
	r6 = R32(r3); UPD(0x0C0793BCu, 2);  /* 0C0793BA mov.l @Rm,Rn */
	T = (r6 & r0) == 0;  /* 0C0793BC tst Rm,Rn */
	{ u32 c_ = T; r2 = r7 & 0xFFFF; /* slot extu.w Rm,Rn */ if (c_) { UPD(0x0C0793ECu, 4); goto L_0C0793EC; } goto L_0C0793C2; }  /* 0C0793BE bt/s */
L_0C0793C2: BLKS(0x0C0793C2u);
	r0 = 0xB4u; UPD(0x0C0793C4u, 2);  /* 0C0793C2 mov.w @(disp,pc),Rn */
	IF(0x0C0793C4u); MACL = r2 * r0;  /* 0C0793C4 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C0793C8u, 3);  /* 0C0793C6 mov.l @(disp,pc),Rn */
	IF(0x0C0793C8u); r7 = MACL;  /* 0C0793C8 sts macl,Rn */
	r7 += r10;  /* 0C0793CA add Rm,Rn */
	r8 = R32(r7); UPD(0x0C0793CEu, 3);  /* 0C0793CC mov.l @Rm,Rn */
	r7 += 0x3Cu;  /* 0C0793CE add #imm,Rn */
	T = (r8 & r8) == 0;  /* 0C0793D0 tst Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r7); UPD(0x0C0793D4u, 3);  /* 0C0793D2 mov.w @Rm,Rn */
	IF(0x0C0793D4u); r4 = T;  /* 0C0793D4 movt Rn */
	T = (r5 & r5) == 0;  /* 0C0793D6 tst Rm,Rn */
	IF(0x0C0793D8u); r2 = T;  /* 0C0793D8 movt Rn */
	r4 |= r2;  /* 0C0793DA or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0793DC tst Rm,Rn */
	{ u32 c_ = !T; r7 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0793E6u, 8); goto L_0C0793E6; } goto L_0C0793E2; }  /* 0C0793DE bf/s */
L_0C0793E2: BLKS(0x0C0793E2u);
	{ r11 = R32(r7 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0794F0u, 4); goto L_0C0794F0; }  /* 0C0793E2 bra */
L_0C0793E6: BLKS(0x0C0793E6u);
	r7 = 0xFFFFBFFFu; UPD(0x0C0793E8u, 1);  /* 0C0793E6 mov.w @(disp,pc),Rn */
	r6 &= r7;  /* 0C0793E8 and Rm,Rn */
	W32(r3, r6); UPD(0x0C0793ECu, 2);  /* 0C0793EA mov.l Rm,@Rn */
L_0C0793EC: BLKS(0x0C0793ECu);
	r10 = 0x2800u; UPD(0x0C0793EEu, 1);  /* 0C0793EC mov.w @(disp,pc),Rn */
	r8 = 0x50u;  /* 0C0793EE mov #imm,Rn */
	IF(0x0C0793F0u); MACL = r13 * r10;  /* 0C0793F0 mul.l Rm,Rn */
	r2 = 0xC229004u; UPD(0x0C0793F4u, 4);  /* 0C0793F2 mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C0793F4 mov #imm,Rn */
	IF(0x0C0793F6u); r10 = MACL;  /* 0C0793F6 sts macl,Rn */
	IF(0x0C0793F8u); MACL = r12 * r8;  /* 0C0793F8 mul.l Rm,Rn */
	IF(0x0C0793FAu); r5 = MACL;  /* 0C0793FA sts macl,Rn */
	r10 += r5;  /* 0C0793FC add Rm,Rn */
	r10 += r2;  /* 0C0793FE add Rm,Rn */
	r4 = r10;  /* 0C079400 mov Rm,Rn */
	r4 += 0x48u;  /* 0C079402 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C079406u, 10);  /* 0C079404 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C079406 add #imm,Rn */
	r1 &= r3;  /* 0C079408 and Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C07940A tst Rm,Rn */
	{ u32 c_ = !T; W8(r4, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C079330u, 6); goto L_0C079330; } UPD(0x0C079410u, 1); goto L_0C079410; }  /* 0C07940C bf/s */
L_0C079410: BLKS(0x0C079410u);
	r0 = R32(r10 + 0xCu); UPD(0x0C079412u, 1);  /* 0C079410 mov.l @(disp,Rm),Rn */
	T = r0 == 0x17u;  /* 0C079412 cmp/eq #imm,r0 */
	{ u32 c_ = T; T = r0 == 0x1Fu; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C079480u, 4); goto L_0C079480; } goto L_0C079418; }  /* 0C079414 bt/s */
L_0C079418: BLKS(0x0C079418u);
	{ u32 c_ = T; r0 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C079470u, 4); goto L_0C079470; } goto L_0C07941C; }  /* 0C079418 bt/s */
L_0C07941C: BLKS(0x0C07941Cu);
	W32(r10 + 0xCu, r0); UPD(0x0C07941Eu, 2);  /* 0C07941C mov.l Rm,@(disp,Rn) */
	r5 = r12;  /* 0C07941E mov Rm,Rn */
	r0 = 0xC079EF0u; UPD(0x0C079422u, 2);  /* 0C079420 mov.l @(disp,pc),Rn */
	r12 = 0xC062780u; UPD(0x0C079424u, 1);  /* 0C079422 mov.l @(disp,pc),Rn */
	IF(0x0C079424u); { u32 t_ = r0; PR = 0x0C079428u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079EF0, 0x0C079EF0u, 0x0C079428u); }  /* 0C079424 jsr @Rn */
L_0C079428: BLKS(0x0C079428u);
	r8 = 0xC0C2360u; UPD(0x0C07942Au, 1);  /* 0C079428 mov.l @(disp,pc),Rn */
	r11 = 0xC069B20u; UPD(0x0C07942Cu, 1);  /* 0C07942A mov.l @(disp,pc),Rn */
	IF(0x0C07942Cu); { u32 t_ = r12; PR = 0x0C079430u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C079430u); }  /* 0C07942C jsr @Rn */
L_0C079430: BLKS(0x0C079430u);
	IF(0x0C079430u); { u32 t_ = r8; PR = 0x0C079434u; r9 = r0; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C079434u); }  /* 0C079430 jsr @Rn */
L_0C079434: BLKS(0x0C079434u);
	r1 = (u32)(s32)(s16)r0;  /* 0C079434 exts.w Rm,Rn */
	IF(0x0C079436u); r9 <<= 16;  /* 0C079436 shll16 Rn */
	r4 = r1;  /* 0C079438 mov Rm,Rn */
	W32(r14, r1); UPD(0x0C07943Cu, 4);  /* 0C07943A mov.l Rm,@Rn */
	IF(0x0C07943Cu); { u32 t_ = r11; PR = 0x0C079440u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C079440u); }  /* 0C07943C jsr @Rn */
L_0C079440: BLKS(0x0C079440u);
	r5 = r9;  /* 0C079440 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C079444u, 2);  /* 0C079442 mov.l @(disp,pc),Rn */
	r11 = R32(r10 + 0x24u); UPD(0x0C079446u, 1);  /* 0C079444 mov.l @(disp,Rm),Rn */
	r4 = R32(r14); UPD(0x0C079448u, 1);  /* 0C079446 mov.l @Rm,Rn */
	IF(0x0C079448u); { u32 t_ = r9; PR = 0x0C07944Cu; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07944Cu); }  /* 0C079448 jsr @Rn */
L_0C07944C: BLKS(0x0C07944Cu);
	r8 = R32(r10 + 0x28u); UPD(0x0C07944Eu, 1);  /* 0C07944C mov.l @(disp,Rm),Rn */
	r4 = 0xFFu; UPD(0x0C079450u, 1);  /* 0C07944E mov.w @(disp,pc),Rn */
	IF(0x0C079450u); { u32 t_ = r12; PR = 0x0C079454u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C079454u); }  /* 0C079450 jsr @Rn */
L_0C079454: BLKS(0x0C079454u);
	r7 = R32(r14); UPD(0x0C079456u, 1);  /* 0C079454 mov.l @Rm,Rn */
	r4 = r11;  /* 0C079456 mov Rm,Rn */
	r0 += r7;  /* 0C079458 add Rm,Rn */
	r0 += 0xFFFFFF80u;  /* 0C07945A add #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C07945C exts.w Rm,Rn */
	r5 = r8;  /* 0C07945E mov Rm,Rn */
	r6 = 0x14u;  /* 0C079460 mov #imm,Rn */
	r7 = r12;  /* 0C079462 mov Rm,Rn */
	UPD(0x0C079464u, 7);
L_0C079464: BLKS(0x0C079464u);
	r11 = 0xC0C0210u; UPD(0x0C079466u, 1);  /* 0C079464 mov.l @(disp,pc),Rn */
	IF(0x0C079466u); { u32 t_ = r11; PR = 0x0C07946Au; IF(0x0C079468u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0210, 0x0C0C0210u, 0x0C07946Au); }  /* 0C079466 jsr @Rn */
L_0C07946A: BLKS(0x0C07946Au);
	r4 = r13;  /* 0C07946A mov Rm,Rn */
	{ r5 = 0x57u; /* slot mov #imm,Rn */ UPD(0x0C07921Cu, 4); goto L_0C07921C; }  /* 0C07946C bra */
L_0C079470: BLKS(0x0C079470u);
	{ W32(r10, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C079340u, 3); goto L_0C079340; }  /* 0C079470 bra */
L_0C079480: BLKS(0x0C079480u);
	r7 = r10;  /* 0C079480 mov Rm,Rn */
	r7 += 0x49u;  /* 0C079482 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C079486u, 3);  /* 0C079484 mov.b @Rm,Rn */
	r3 = 0xFFFFFFF2u;  /* 0C079486 mov #imm,Rn */
	r0 = R32(r10); UPD(0x0C07948Au, 2);  /* 0C079488 mov.l @Rm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C07948A add #imm,Rn */
	r2 = r5 & 0xFF;  /* 0C07948C extu.b Rm,Rn */
	IF(0x0C07948Eu); ARG0(0x403Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C07948E shad Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C079490 tst Rm,Rn */
	r4 = 0xFFFFFFFFu;  /* 0C079492 mov #imm,Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C079494 negc Rm,Rn */
	r0 &= 0x1u;  /* 0C079496 and #imm,r0 */
	r6 &= r0;  /* 0C079498 and Rm,Rn */
	W8(r7, r5); UPD(0x0C07949Cu, 9);  /* 0C07949A mov.b Rm,@Rn */
	T = (r6 & r6) == 0;  /* 0C07949C tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x8u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0794A4u, 4); goto L_0C0794A4; } goto L_0C0794A2; }  /* 0C07949E bf/s */
L_0C0794A2: BLKS(0x0C0794A2u);
	r1 = 0x18u;  /* 0C0794A2 mov #imm,Rn */
	UPD(0x0C0794A4u, 2);
L_0C0794A4: BLKS(0x0C0794A4u);
	W32(r10 + 0xCu, r1); UPD(0x0C0794A6u, 1);  /* 0C0794A4 mov.l Rm,@(disp,Rn) */
	r5 = r12;  /* 0C0794A6 mov Rm,Rn */
	r0 = 0xC079EF0u; UPD(0x0C0794AAu, 2);  /* 0C0794A8 mov.l @(disp,pc),Rn */
	r10 = 0xC0C2360u; UPD(0x0C0794ACu, 1);  /* 0C0794AA mov.l @(disp,pc),Rn */
	IF(0x0C0794ACu); { u32 t_ = r0; PR = 0x0C0794B0u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079EF0, 0x0C079EF0u, 0x0C0794B0u); }  /* 0C0794AC jsr @Rn */
L_0C0794B0: BLKS(0x0C0794B0u);
	r9 = 0xC069B20u; UPD(0x0C0794B2u, 1);  /* 0C0794B0 mov.l @(disp,pc),Rn */
	IF(0x0C0794B2u); { u32 t_ = r10; PR = 0x0C0794B6u; IF(0x0C0794B4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0794B6u); }  /* 0C0794B2 jsr @Rn */
L_0C0794B6: BLKS(0x0C0794B6u);
	r5 = 0x2800u; UPD(0x0C0794B8u, 1);  /* 0C0794B6 mov.w @(disp,pc),Rn */
	r2 = 0x50u;  /* 0C0794B8 mov #imm,Rn */
	IF(0x0C0794BAu); MACL = r13 * r5;  /* 0C0794BA mul.l Rm,Rn */
	r3 = 0xC229004u; UPD(0x0C0794BEu, 4);  /* 0C0794BC mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C0794BE exts.w Rm,Rn */
	IF(0x0C0794C0u); r11 = MACL;  /* 0C0794C0 sts macl,Rn */
	IF(0x0C0794C2u); MACL = r12 * r2;  /* 0C0794C2 mul.l Rm,Rn */
	r8 = 0x200000u; UPD(0x0C0794C6u, 5);  /* 0C0794C4 mov.l @(disp,pc),Rn */
	IF(0x0C0794C6u); r4 = MACL;  /* 0C0794C6 sts macl,Rn */
	r11 += r4;  /* 0C0794C8 add Rm,Rn */
	r11 += r3;  /* 0C0794CA add Rm,Rn */
	r4 = r6;  /* 0C0794CC mov Rm,Rn */
	W32(r14, r6); UPD(0x0C0794D0u, 5);  /* 0C0794CE mov.l Rm,@Rn */
	r12 = 0xC069AF0u; UPD(0x0C0794D2u, 1);  /* 0C0794D0 mov.l @(disp,pc),Rn */
	IF(0x0C0794D2u); { u32 t_ = r9; PR = 0x0C0794D6u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0794D6u); }  /* 0C0794D2 jsr @Rn */
L_0C0794D6: BLKS(0x0C0794D6u);
	r10 = R32(r11 + 0x24u); UPD(0x0C0794D8u, 1);  /* 0C0794D6 mov.l @(disp,Rm),Rn */
	r5 = r8;  /* 0C0794D8 mov Rm,Rn */
	r10 += r0;  /* 0C0794DA add Rm,Rn */
	IF(0x0C0794DCu); { u32 t_ = r12; PR = 0x0C0794E0u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0794E0u); }  /* 0C0794DC jsr @Rn */
L_0C0794E0: BLKS(0x0C0794E0u);
	r5 = R32(r11 + 0x28u); UPD(0x0C0794E2u, 1);  /* 0C0794E0 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0794E2 mov Rm,Rn */
	r7 = R32(r14); UPD(0x0C0794E6u, 2);  /* 0C0794E4 mov.l @Rm,Rn */
	r5 += r0;  /* 0C0794E6 add Rm,Rn */
	{ r6 = 0x14u; /* slot mov #imm,Rn */ UPD(0x0C079464u, 4); goto L_0C079464; }  /* 0C0794E8 bra */
L_0C0794F0: BLKS(0x0C0794F0u);
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0794F2u, 1);  /* 0C0794F0 mov.l @(disp,Rm),Rn */
	r11 += r6;  /* 0C0794F2 add Rm,Rn */
	W32(r3 + 0x24u, r11); UPD(0x0C0794F6u, 2);  /* 0C0794F4 mov.l Rm,@(disp,Rn) */
	r1 = R32(r3 + 0x30u); UPD(0x0C0794F8u, 1);  /* 0C0794F6 mov.l @(disp,Rm),Rn */
	r9 = R32(r7 + 0x28u); UPD(0x0C0794FAu, 1);  /* 0C0794F8 mov.l @(disp,Rm),Rn */
	r9 += r1;  /* 0C0794FA add Rm,Rn */
	{ W32(r3 + 0x28u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0793ECu, 4); goto L_0C0793EC; }  /* 0C0794FC bra */
L_0C079530: BLKS(0x0C079530u);
	r7 = 0x2A0u; UPD(0x0C079532u, 1);  /* 0C079530 mov.w @(disp,pc),Rn */
	IF(0x0C079532u); MACL = r13 * r7;  /* 0C079532 mul.l Rm,Rn */
	r9 = 0xC29D1D8u; UPD(0x0C079536u, 3);  /* 0C079534 mov.l @(disp,pc),Rn */
	IF(0x0C079536u); r7 = MACL;  /* 0C079536 sts macl,Rn */
	r7 += r9;  /* 0C079538 add Rm,Rn */
	r2 = R32(r7); UPD(0x0C07953Cu, 3);  /* 0C07953A mov.l @Rm,Rn */
	r8 = 0x4000000u; UPD(0x0C07953Eu, 1);  /* 0C07953C mov.l @(disp,pc),Rn */
	r2 &= r8;  /* 0C07953E and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C079540 tst Rm,Rn */
	if (!T) { UPD(0x0C079548u, 5); goto L_0C079548; }  /* 0C079542 bf */
L_0C079544: BLKS(0x0C079544u);
	{ IF(0x0C079546u); ; /* slot nop */ UPD(0x0C0790A0u, 3); goto L_0C0790A0; }  /* 0C079544 bra */
L_0C079548: BLKS(0x0C079548u);
	r0 = 0x24Cu; UPD(0x0C07954Au, 1);  /* 0C079548 mov.w @(disp,pc),Rn */
	IF(0x0C07954Au); r0 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C07954Cu, 1);  /* 0C07954A mov.w @(r0,Rm),Rn */
	r0 &= 0x20u;  /* 0C07954C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07954E tst Rm,Rn */
	if (!T) { UPD(0x0C079566u, 5); goto L_0C079566; }  /* 0C079550 bf */
L_0C079552: BLKS(0x0C079552u);
	r10 = 0x50u;  /* 0C079552 mov #imm,Rn */
	r0 = 0x2800u; UPD(0x0C079556u, 2);  /* 0C079554 mov.w @(disp,pc),Rn */
	IF(0x0C079556u); MACL = r13 * r0;  /* 0C079556 mul.l Rm,Rn */
	r2 = 0x1u;  /* 0C079558 mov #imm,Rn */
	IF(0x0C07955Au); r4 = MACL;  /* 0C07955A sts macl,Rn */
	IF(0x0C07955Cu); MACL = r12 * r10;  /* 0C07955C mul.l Rm,Rn */
	r0 = 0xC22904Du; UPD(0x0C079560u, 7);  /* 0C07955E mov.l @(disp,pc),Rn */
	IF(0x0C079560u); r5 = MACL;  /* 0C079560 sts macl,Rn */
	r4 += r5;  /* 0C079562 add Rm,Rn */
	IF(0x0C079564u); W8(r0 + r4, r2); UPD(0x0C079566u, 3);  /* 0C079564 mov.b Rm,@(r0,Rn) */
L_0C079566: BLKS(0x0C079566u);
	r3 = 0x2800u; UPD(0x0C079568u, 1);  /* 0C079566 mov.w @(disp,pc),Rn */
	r5 = 0x50u;  /* 0C079568 mov #imm,Rn */
	IF(0x0C07956Au); MACL = r13 * r3;  /* 0C07956A mul.l Rm,Rn */
	r4 = 0xC229004u; UPD(0x0C07956Eu, 4);  /* 0C07956C mov.l @(disp,pc),Rn */
	IF(0x0C07956Eu); r3 = MACL;  /* 0C07956E sts macl,Rn */
	IF(0x0C079570u); MACL = r12 * r5;  /* 0C079570 mul.l Rm,Rn */
	r9 = R32(r7 + 0x10u); UPD(0x0C079574u, 4);  /* 0C079572 mov.l @(disp,Rm),Rn */
	IF(0x0C079574u); r2 = MACL;  /* 0C079574 sts macl,Rn */
	r3 += r2;  /* 0C079576 add Rm,Rn */
	r3 += r4;  /* 0C079578 add Rm,Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C07957Cu, 4);  /* 0C07957A mov.l @(disp,Rm),Rn */
	r2 = r3;  /* 0C07957C mov Rm,Rn */
	r9 += r6;  /* 0C07957E add Rm,Rn */
	W32(r3 + 0x24u, r9); UPD(0x0C079582u, 3);  /* 0C079580 mov.l Rm,@(disp,Rn) */
	r2 += 0x48u;  /* 0C079582 add #imm,Rn */
	r11 = R32(r7 + 0x14u); UPD(0x0C079586u, 2);  /* 0C079584 mov.l @(disp,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C079588u, 1);  /* 0C079586 mov.b @Rm,Rn */
	r8 = R32(r3 + 0x30u); UPD(0x0C07958Au, 1);  /* 0C079588 mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C07958A add #imm,Rn */
	r11 += r8;  /* 0C07958C add Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C07958E extu.b Rm,Rn */
	W32(r3 + 0x28u, r11); UPD(0x0C079592u, 4);  /* 0C079590 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x2u;  /* 0C079592 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0795C4u, 4); goto L_0C0795C4; } UPD(0x0C079598u, 1); goto L_0C079598; }  /* 0C079594 bf/s */
L_0C079598: BLKS(0x0C079598u);
	r7 = 0x0u;  /* 0C079598 mov #imm,Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C07959Cu, 2);  /* 0C07959A mov.l @(disp,Rm),Rn */
	T = r0 == 0x17u;  /* 0C07959C cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0795D0u, 4); goto L_0C0795D0; } UPD(0x0C0795A2u, 1); goto L_0C0795A2; }  /* 0C07959E bt/s */
L_0C0795A2: BLKS(0x0C0795A2u);
	T = r0 == 0x1Fu;  /* 0C0795A2 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0795C0u, 4); goto L_0C0795C0; }  /* 0C0795A4 bt */
L_0C0795A6: BLKS(0x0C0795A6u);
	r2 = 0x2800u; UPD(0x0C0795A8u, 1);  /* 0C0795A6 mov.w @(disp,pc),Rn */
	r4 = 0x50u;  /* 0C0795A8 mov #imm,Rn */
	IF(0x0C0795AAu); MACL = r13 * r2;  /* 0C0795AA mul.l Rm,Rn */
	r9 = 0xC229004u; UPD(0x0C0795AEu, 4);  /* 0C0795AC mov.l @(disp,pc),Rn */
	IF(0x0C0795AEu); r11 = MACL;  /* 0C0795AE sts macl,Rn */
	IF(0x0C0795B0u); MACL = r12 * r4;  /* 0C0795B0 mul.l Rm,Rn */
	IF(0x0C0795B2u); r6 = MACL;  /* 0C0795B2 sts macl,Rn */
	r11 += r6;  /* 0C0795B4 add Rm,Rn */
	r11 += r9;  /* 0C0795B6 add Rm,Rn */
	r8 = R32(r11 + 0xCu); UPD(0x0C0795BAu, 7);  /* 0C0795B8 mov.l @(disp,Rm),Rn */
	r8 += 0x1u;  /* 0C0795BA add #imm,Rn */
	{ W32(r11 + 0xCu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C079340u, 4); goto L_0C079340; }  /* 0C0795BC bra */
L_0C0795C0: BLKS(0x0C0795C0u);
	r13 = 0x0u;  /* 0C0795C0 mov #imm,Rn */
	W32(r3, r13); UPD(0x0C0795C4u, 2);  /* 0C0795C2 mov.l Rm,@Rn */
L_0C0795C4: BLKS(0x0C0795C4u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07901Eu, 3); goto L_0C07901E; }  /* 0C0795C4 bra */
L_0C0795D0: BLKS(0x0C0795D0u);
	r3 += 0x49u;  /* 0C0795D0 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r3); UPD(0x0C0795D4u, 2);  /* 0C0795D2 mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0795D4 tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFB7u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0795A6u, 4); goto L_0C0795A6; } goto L_0C0795DA; }  /* 0C0795D6 bf/s */
L_0C0795DA: BLKS(0x0C0795DAu);
	r0 = 0x7u;  /* 0C0795DA mov #imm,Rn */
	{ W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C079340u, 5); goto L_0C079340; }  /* 0C0795DC bra */
}

void blk_f_0C079600(sh3_t *c)
{
	LOCALS;
L_0C079600: BLKS(0x0C079600u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C079602u, 1);  /* 0C079600 mov.l Rm,@-Rn */
	r0 = 0x1u;  /* 0C079602 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C079606u, 2);  /* 0C079604 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C079608u, 1);  /* 0C079606 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07960Au, 1);  /* 0C079608 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07960Cu, 1);  /* 0C07960A mov.l Rm,@-Rn */
	r5 = 0x2A0u; UPD(0x0C07960Eu, 1);  /* 0C07960C mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C07960E exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C079612u, 2);  /* 0C079610 mov.l Rm,@-Rn */
	IF(0x0C079612u); MACL = r12 * r5;  /* 0C079612 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C079616u, 3);  /* 0C079614 mov.l Rm,@-Rn */
	r4 = 0xC29D1D8u; UPD(0x0C079618u, 1);  /* 0C079616 mov.l @(disp,pc),Rn */
	IF(0x0C079618u); r9 = MACL;  /* 0C079618 sts macl,Rn */
	IF(0x0C07961Au); r15 -= 4; W32(r15, PR); UPD(0x0C07961Cu, 2);  /* 0C07961A sts.l pr,@-Rn */
	r9 += r4;  /* 0C07961C add Rm,Rn */
	r8 = R32(r9 + 0x4u); UPD(0x0C079620u, 2);  /* 0C07961E mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C079620 add #imm,Rn */
	IF(0x0C079622u); r8 >>= 2;  /* 0C079622 shlr2 Rn */
	r8 &= r0;  /* 0C079624 and Rm,Rn */
	r3 = 0xC18651Cu; UPD(0x0C079628u, 4);  /* 0C079626 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C079628 mov Rm,Rn */
	IF(0x0C07962Au); r0 <<= 2;  /* 0C07962A shll2 Rn */
	r10 = 0xC079F80u; UPD(0x0C07962Eu, 3);  /* 0C07962C mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07962E mov Rm,Rn */
	r1 = 0xC28EDFCu; UPD(0x0C079632u, 2);  /* 0C079630 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C079632 mov Rm,Rn */
	IF(0x0C079634u); r2 = R32(r0 + r3); UPD(0x0C079636u, 2);  /* 0C079634 mov.l @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C079636 mov #imm,Rn */
	W32(r14, r1); UPD(0x0C07963Au, 2);  /* 0C079638 mov.l Rm,@Rn */
	IF(0x0C07963Au); { u32 t_ = r10; PR = 0x0C07963Eu; W32(r14 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C07963Eu); }  /* 0C07963A jsr @Rn */
L_0C07963E: BLKS(0x0C07963Eu);
	T = (r0 & r0) == 0;  /* 0C07963E tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0796F8u, 4); goto L_0C0796F8; } goto L_0C079644; }  /* 0C079640 bt/s */
L_0C079644: BLKS(0x0C079644u);
	r6 = 0x0u;  /* 0C079644 mov #imm,Rn */
	r8 += 0x1u;  /* 0C079646 add #imm,Rn */
	W32(r14 + 0x8u, r6); UPD(0x0C07964Au, 4);  /* 0C079648 mov.l Rm,@(disp,Rn) */
	T = (s32)r6 >= (s32)r8;  /* 0C07964A cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0xCu, r8); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0796EEu, 4); goto L_0C0796EE; } UPD(0x0C079650u, 1); goto L_0C079650; }  /* 0C07964C bt/s */
L_0C079650: BLKS(0x0C079650u);
	r7 = r12;  /* 0C079650 mov Rm,Rn */
	r7 += 0x7u;  /* 0C079652 add #imm,Rn */
	W32(r14 + 0x10u, r7); UPD(0x0C079656u, 3);  /* 0C079654 mov.l Rm,@(disp,Rn) */
	r13 = 0x0u;  /* 0C079656 mov #imm,Rn */
	r11 = r9;  /* 0C079658 mov Rm,Rn */
	IF(0x0C07965Au); ;  /* 0C07965A nop */
	UPD(0x0C07965Cu, 3);
L_0C07965C: BLKS(0x0C07965Cu);
	r5 = R32(r14 + 0x4u); UPD(0x0C07965Eu, 1);  /* 0C07965C mov.l @(disp,Rm),Rn */
	r6 = 0x50u;  /* 0C07965E mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r10 = v_; } UPD(0x0C079662u, 2);  /* 0C079660 mov.w @Rm+,Rn */
	r8 = 0x2800u; UPD(0x0C079664u, 1);  /* 0C079662 mov.w @(disp,pc),Rn */
	r10 += 0x4u;  /* 0C079664 add #imm,Rn */
	r7 = R32(r14); UPD(0x0C079668u, 2);  /* 0C079666 mov.l @Rm,Rn */
	IF(0x0C079668u); MACL = r12 * r8;  /* 0C079668 mul.l Rm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C07966Cu, 3);  /* 0C07966A mov.l Rm,@(disp,Rn) */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r5 = v_; } UPD(0x0C07966Eu, 1);  /* 0C07966C mov.w @Rm+,Rn */
	IF(0x0C07966Eu); r8 = MACL;  /* 0C07966E sts macl,Rn */
	IF(0x0C079670u); MACL = r5 * r6;  /* 0C079670 mul.l Rm,Rn */
	r0 = 0xC229004u; UPD(0x0C079674u, 4);  /* 0C079672 mov.l @(disp,pc),Rn */
	IF(0x0C079674u); r4 = MACL;  /* 0C079674 sts macl,Rn */
	r8 += r4;  /* 0C079676 add Rm,Rn */
	r8 += r0;  /* 0C079678 add Rm,Rn */
	r0 = r10;  /* 0C07967A mov Rm,Rn */
	IF(0x0C07967Cu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07967C shar Rn */
	IF(0x0C07967Eu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07967E shar Rn */
	IF(0x0C079680u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C079680 shar Rn */
	r9 = 0xC079E80u; UPD(0x0C079684u, 8);  /* 0C079682 mov.l @(disp,pc),Rn */
	r0 &= 0x3Fu;  /* 0C079684 and #imm,r0 */
	r1 = R32(r14 + 0x10u); UPD(0x0C079688u, 2);  /* 0C079686 mov.l @(disp,Rm),Rn */
	r0 += 0x2u;  /* 0C079688 add #imm,Rn */
	r3 = 0xC0000000u; UPD(0x0C07968Cu, 2);  /* 0C07968A mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C07968C mov Rm,Rn */
	W32(r8 + 0x4u, r1); UPD(0x0C079690u, 2);  /* 0C07968E mov.l Rm,@(disp,Rn) */
	r10 += 0xFFFFFFFCu;  /* 0C079690 add #imm,Rn */
	W32(r8, r3); UPD(0x0C079694u, 2);  /* 0C079692 mov.l Rm,@Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C079696u, 1);  /* 0C079694 mov.l Rm,@(disp,Rn) */
	W32(r14, r7); UPD(0x0C079698u, 1);  /* 0C079696 mov.l Rm,@Rn */
	IF(0x0C079698u); { u32 t_ = r9; PR = 0x0C07969Cu; W32(r8 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07969Cu); }  /* 0C079698 jsr @Rn */
L_0C07969C: BLKS(0x0C07969Cu);
	W32(r8 + 0x3Cu, r13); UPD(0x0C07969Eu, 1);  /* 0C07969C mov.l Rm,@(disp,Rn) */
	r0 = r11;  /* 0C07969E mov Rm,Rn */
	r2 = 0x808080u; UPD(0x0C0796A2u, 2);  /* 0C0796A0 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0796A2 add #imm,Rn */
	W32(r8, r2); UPD(0x0C0796A6u, 2);  /* 0C0796A4 mov.l Rm,@Rn */
	r8 += 0x8u;  /* 0C0796A6 add #imm,Rn */
	W8(r8, r13); UPD(0x0C0796AAu, 2);  /* 0C0796A8 mov.b Rm,@Rn */
	r7 = 0x266u; UPD(0x0C0796ACu, 1);  /* 0C0796AA mov.w @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C0796AC add #imm,Rn */
	IF(0x0C0796AEu); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0796B0u, 2);  /* 0C0796AE mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0796B0 extu.b Rm,Rn */
	IF(0x0C0796B2u); r5 <<= 2;  /* 0C0796B2 shll2 Rn */
	W8(r8, r5); UPD(0x0C0796B6u, 3);  /* 0C0796B4 mov.b Rm,@Rn */
	r4 = 0x100000u; UPD(0x0C0796B8u, 1);  /* 0C0796B6 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB7u;  /* 0C0796B8 add #imm,Rn */
	r0 = R32(r11 + 0x10u); UPD(0x0C0796BCu, 2);  /* 0C0796BA mov.l @(disp,Rm),Rn */
	r0 += r4;  /* 0C0796BC add Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0796C0u, 2);  /* 0C0796BE mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C0796C0 mov Rm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0796C4u, 2);  /* 0C0796C2 mov.l @(disp,pc),Rn */
	r3 = R32(r11 + 0x14u); UPD(0x0C0796C6u, 1);  /* 0C0796C4 mov.l @(disp,Rm),Rn */
	r9 = 0x80000u; UPD(0x0C0796C8u, 1);  /* 0C0796C6 mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C0796CAu, 1);  /* 0C0796C8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0796CAu); { u32 t_ = r0; PR = 0x0C0796CEu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0796CEu); }  /* 0C0796CA jsr @Rn */
L_0C0796CE: BLKS(0x0C0796CEu);
	r5 = r9;  /* 0C0796CE mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0796D2u, 2);  /* 0C0796D0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0796D2 mov Rm,Rn */
	IF(0x0C0796D4u); { u32 t_ = r9; PR = 0x0C0796D8u; W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0796D8u); }  /* 0C0796D4 jsr @Rn */
L_0C0796D8: BLKS(0x0C0796D8u);
	W32(r8 + 0x30u, r0); UPD(0x0C0796DAu, 1);  /* 0C0796D8 mov.l Rm,@(disp,Rn) */
	r2 = 0x14u;  /* 0C0796DA mov #imm,Rn */
	r8 += 0x4Au;  /* 0C0796DC add #imm,Rn */
	W8(r8, r2); UPD(0x0C0796E0u, 3);  /* 0C0796DE mov.b Rm,@Rn */
	r10 = R32(r14 + 0x8u); UPD(0x0C0796E2u, 1);  /* 0C0796E0 mov.l @(disp,Rm),Rn */
	r10 += 0x1u;  /* 0C0796E2 add #imm,Rn */
	r9 = (u32)(s32)(s16)r10;  /* 0C0796E4 exts.w Rm,Rn */
	r8 = R32(r14 + 0xCu); UPD(0x0C0796E8u, 3);  /* 0C0796E6 mov.l @(disp,Rm),Rn */
	T = (s32)r9 >= (s32)r8;  /* 0C0796E8 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07965Cu, 4); goto L_0C07965C; } UPD(0x0C0796EEu, 1); goto L_0C0796EE; }  /* 0C0796EA bf/s */
L_0C0796EE: BLKS(0x0C0796EEu);
	r11 = 0xC0C20A0u; UPD(0x0C0796F0u, 1);  /* 0C0796EE mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0796F0 mov Rm,Rn */
	IF(0x0C0796F2u); { u32 t_ = r11; PR = 0x0C0796F6u; r5 = 0x7Cu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C0796F6u); }  /* 0C0796F2 jsr @Rn */
L_0C0796F6: BLKS(0x0C0796F6u);
	r0 = 0x0u;  /* 0C0796F6 mov #imm,Rn */
	UPD(0x0C0796F8u, 1);
L_0C0796F8: BLKS(0x0C0796F8u);
	r14 += 0x14u;  /* 0C0796F8 add #imm,Rn */
	r15 = r14;  /* 0C0796FA mov Rm,Rn */
	IF(0x0C0796FCu); PR = R32(r15); r15 += 4; UPD(0x0C0796FEu, 3);  /* 0C0796FC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C079700u, 1);  /* 0C0796FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C079702u, 1);  /* 0C079700 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C079704u, 1);  /* 0C079702 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C079706u, 1);  /* 0C079704 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C079708u, 1);  /* 0C079706 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07970Au, 1);  /* 0C079708 mov.l @Rm+,Rn */
	IF(0x0C07970Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07970A rts */
}

void blk_f_0C079750(sh3_t *c)
{
	LOCALS;
L_0C079750: BLKS(0x0C079750u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C079752u, 1);  /* 0C079750 mov.l Rm,@-Rn */
	r2 = 0x50u;  /* 0C079752 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C079756u, 2);  /* 0C079754 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C079758u, 1);  /* 0C079756 mov.l Rm,@-Rn */
	r3 = 0x2800u; UPD(0x0C07975Au, 1);  /* 0C079758 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07975A exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07975Eu, 2);  /* 0C07975C mov.l Rm,@-Rn */
	IF(0x0C07975Eu); MACL = r10 * r3;  /* 0C07975E mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C079762u, 3);  /* 0C079760 mov.l Rm,@-Rn */
	IF(0x0C079762u); r9 = MACL;  /* 0C079762 sts macl,Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C079764 exts.w Rm,Rn */
	IF(0x0C079766u); MACL = r12 * r2;  /* 0C079766 mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07976Au, 5);  /* 0C079768 mov.l Rm,@-Rn */
	IF(0x0C07976Au); r0 = MACL;  /* 0C07976A sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07976Eu, 2);  /* 0C07976C mov.l Rm,@-Rn */
	r9 += r0;  /* 0C07976E add Rm,Rn */
	r0 = 0xC229004u; UPD(0x0C079772u, 2);  /* 0C079770 mov.l @(disp,pc),Rn */
	IF(0x0C079772u); r15 -= 4; W32(r15, PR); UPD(0x0C079774u, 1);  /* 0C079772 sts.l pr,@-Rn */
	r9 += r0;  /* 0C079774 add Rm,Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C079778u, 2);  /* 0C079776 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C079778 add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C07977A tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C079784u, 5); goto L_0C079784; } goto L_0C079780; }  /* 0C07977C bf/s */
L_0C079780: BLKS(0x0C079780u);
	{ r8 = R32(r9 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C079A00u, 4); goto L_0C079A00; }  /* 0C079780 bra */
L_0C079784: BLKS(0x0C079784u);
	T = r0 == 0x1u;  /* 0C079784 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r8 = 0x50u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07978Eu, 4); goto L_0C07978E; } goto L_0C07978A; }  /* 0C079786 bf/s */
L_0C07978A: BLKS(0x0C07978Au);
	{ r13 = r9; /* slot mov Rm,Rn */ UPD(0x0C0798E0u, 4); goto L_0C0798E0; }  /* 0C07978A bra */
L_0C07978E: BLKS(0x0C07978Eu);
	r3 = 0x2800u; UPD(0x0C079790u, 1);  /* 0C07978E mov.w @(disp,pc),Rn */
	IF(0x0C079790u); MACL = r10 * r3;  /* 0C079790 mul.l Rm,Rn */
	r4 = 0xC229004u; UPD(0x0C079794u, 3);  /* 0C079792 mov.l @(disp,pc),Rn */
	r9 = 0x7u;  /* 0C079794 mov #imm,Rn */
	IF(0x0C079796u); r0 = MACL;  /* 0C079796 sts macl,Rn */
	IF(0x0C079798u); MACL = r12 * r8;  /* 0C079798 mul.l Rm,Rn */
	IF(0x0C07979Au); r7 = MACL;  /* 0C07979A sts macl,Rn */
	r0 += r7;  /* 0C07979C add Rm,Rn */
	r0 += r4;  /* 0C07979E add Rm,Rn */
	r5 = R32(r0 + 0x24u); UPD(0x0C0797A2u, 8);  /* 0C0797A0 mov.l @(disp,Rm),Rn */
	r11 = R32(r0 + 0x28u); UPD(0x0C0797A4u, 1);  /* 0C0797A2 mov.l @(disp,Rm),Rn */
	r13 = R32(r0 + 0x2Cu); UPD(0x0C0797A6u, 1);  /* 0C0797A4 mov.l @(disp,Rm),Rn */
	r1 = R32(r0 + 0x30u); UPD(0x0C0797A8u, 1);  /* 0C0797A6 mov.l @(disp,Rm),Rn */
	r5 += r13;  /* 0C0797A8 add Rm,Rn */
	r11 += r1;  /* 0C0797AA add Rm,Rn */
	r2 = R32(r0 + 0xCu); UPD(0x0C0797AEu, 3);  /* 0C0797AC mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r5); UPD(0x0C0797B0u, 1);  /* 0C0797AE mov.l Rm,@(disp,Rn) */
	T = r2 > r9;  /* 0C0797B0 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r0 + 0x28u, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0797FCu, 4); goto L_0C0797FC; } UPD(0x0C0797B6u, 1); goto L_0C0797B6; }  /* 0C0797B2 bt/s */
L_0C0797B6: BLKS(0x0C0797B6u);
	r0 = 0xC0797C8u;  /* 0C0797B6 mova @(disp,pc),r0 */
	IF(0x0C0797B8u); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0797BAu, 2);  /* 0C0797B8 mov.b @(r0,Rm),Rn */
	r6 = r6 & 0xFF;  /* 0C0797BA extu.b Rm,Rn */
	IF(0x0C0797BCu); { u32 tv_ = (r6 + 0x0C0797C0u); u32 t_ = PHYS(tv_); IF(0x0C0797BEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0797D0u: goto L_0C0797D0; case 0x0C079820u: goto L_0C079820; case 0x0C079870u: goto L_0C079870; default: JUMPD(tv_); } }  /* 0C0797BC braf Rn */
L_0C0797D0: BLKS(0x0C0797D0u);
	r4 = 0x2800u; UPD(0x0C0797D2u, 1);  /* 0C0797D0 mov.w @(disp,pc),Rn */
	r13 = 0x50u;  /* 0C0797D2 mov #imm,Rn */
	IF(0x0C0797D4u); MACL = r10 * r4;  /* 0C0797D4 mul.l Rm,Rn */
	r11 = 0xC229004u; UPD(0x0C0797D8u, 4);  /* 0C0797D6 mov.l @(disp,pc),Rn */
	r2 = 0x4u;  /* 0C0797D8 mov #imm,Rn */
	IF(0x0C0797DAu); r9 = MACL;  /* 0C0797DA sts macl,Rn */
	IF(0x0C0797DCu); MACL = r12 * r13;  /* 0C0797DC mul.l Rm,Rn */
	IF(0x0C0797DEu); r5 = MACL;  /* 0C0797DE sts macl,Rn */
	r9 += r5;  /* 0C0797E0 add Rm,Rn */
	r9 += r11;  /* 0C0797E2 add Rm,Rn */
	r8 = r9;  /* 0C0797E4 mov Rm,Rn */
	r8 += 0x48u;  /* 0C0797E6 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C0797EAu, 10);  /* 0C0797E8 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0797EA add #imm,Rn */
	W8(r8, r0); UPD(0x0C0797EEu, 2);  /* 0C0797EC mov.b Rm,@Rn */
	W32(r9 + 0xCu, r2); UPD(0x0C0797F0u, 1);  /* 0C0797EE mov.l Rm,@(disp,Rn) */
L_0C0797F0: BLKS(0x0C0797F0u);
	r5 = r12;  /* 0C0797F0 mov Rm,Rn */
	r12 = 0xC079EF0u; UPD(0x0C0797F4u, 2);  /* 0C0797F2 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0797F4 mov Rm,Rn */
	IF(0x0C0797F6u); { u32 t_ = r12; PR = 0x0C0797FAu; r10 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C079EF0, 0x0C079EF0u, 0x0C0797FAu); }  /* 0C0797F6 jsr @Rn */
L_0C0797FA: BLKS(0x0C0797FAu);
	W8(r8, r10); UPD(0x0C0797FCu, 1);  /* 0C0797FA mov.b Rm,@Rn */
L_0C0797FC: BLKS(0x0C0797FCu);
	r14 += 0x14u;  /* 0C0797FC add #imm,Rn */
	UPD(0x0C0797FEu, 1);
L_0C0797FE: BLKS(0x0C0797FEu);
	r15 = r14;  /* 0C0797FE mov Rm,Rn */
	IF(0x0C079800u); PR = R32(r15); r15 += 4; UPD(0x0C079802u, 2);  /* 0C079800 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C079804u, 1);  /* 0C079802 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C079806u, 1);  /* 0C079804 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C079808u, 1);  /* 0C079806 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07980Au, 1);  /* 0C079808 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07980Cu, 1);  /* 0C07980A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07980Eu, 1);  /* 0C07980C mov.l @Rm+,Rn */
	IF(0x0C07980Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07980E rts */
L_0C079820: BLKS(0x0C079820u);
	r7 = 0x2800u; UPD(0x0C079822u, 1);  /* 0C079820 mov.w @(disp,pc),Rn */
	r13 = 0x50u;  /* 0C079822 mov #imm,Rn */
	IF(0x0C079824u); MACL = r10 * r7;  /* 0C079824 mul.l Rm,Rn */
	r11 = 0xC229004u; UPD(0x0C079828u, 4);  /* 0C079826 mov.l @(disp,pc),Rn */
	r6 = 0xFFFFFFF8u;  /* 0C079828 mov #imm,Rn */
	IF(0x0C07982Au); r7 = MACL;  /* 0C07982A sts macl,Rn */
	IF(0x0C07982Cu); MACL = r12 * r13;  /* 0C07982C mul.l Rm,Rn */
	r9 = 0xE0u; UPD(0x0C079830u, 5);  /* 0C07982E mov.w @(disp,pc),Rn */
	IF(0x0C079830u); r5 = MACL;  /* 0C079830 sts macl,Rn */
	r7 += r5;  /* 0C079832 add Rm,Rn */
	r7 += r11;  /* 0C079834 add Rm,Rn */
	r0 = R32(r7 + 0x2Cu); UPD(0x0C079838u, 4);  /* 0C079836 mov.l @(disp,Rm),Rn */
	IF(0x0C079838u); MACL = r0 * r9;  /* 0C079838 mul.l Rm,Rn */
	r3 = R32(r7 + 0x30u); UPD(0x0C07983Cu, 3);  /* 0C07983A mov.l @(disp,Rm),Rn */
	IF(0x0C07983Cu); r2 = MACL;  /* 0C07983C sts macl,Rn */
	IF(0x0C07983Eu); MACL = r3 * r9;  /* 0C07983E mul.l Rm,Rn */
	IF(0x0C079840u); ARG0(0x426Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C079840 shad Rm,Rn */
	IF(0x0C079842u); r8 = MACL;  /* 0C079842 sts macl,Rn */
	IF(0x0C079844u); ARG0(0x486Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = (u32)((s32)r8 >> 31); else r8 = (u32)((s32)r8 >> ((~s_ & 31) + 1)); }  /* 0C079844 shad Rm,Rn */
	W32(r7 + 0x30u, r8); UPD(0x0C079848u, 7);  /* 0C079846 mov.l Rm,@(disp,Rn) */
	r8 = r7;  /* 0C079848 mov Rm,Rn */
	r8 += 0x48u;  /* 0C07984A add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C07984Eu, 3);  /* 0C07984C mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C07984E add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C079850 extu.b Rm,Rn */
	W32(r7 + 0x2Cu, r2); UPD(0x0C079854u, 3);  /* 0C079852 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x4u;  /* 0C079854 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r8, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0797FCu, 4); goto L_0C0797FC; } UPD(0x0C07985Au, 1); goto L_0C07985A; }  /* 0C079856 bf/s */
L_0C07985A: BLKS(0x0C07985Au);
	r4 = R32(r7 + 0xCu); UPD(0x0C07985Cu, 1);  /* 0C07985A mov.l @(disp,Rm),Rn */
	r4 += 0x1u;  /* 0C07985C add #imm,Rn */
	{ W32(r7 + 0xCu, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0797F0u, 4); goto L_0C0797F0; }  /* 0C07985E bra */
L_0C079870: BLKS(0x0C079870u);
	r9 = 0x2800u; UPD(0x0C079872u, 1);  /* 0C079870 mov.w @(disp,pc),Rn */
	r7 = 0x50u;  /* 0C079872 mov #imm,Rn */
	IF(0x0C079874u); MACL = r10 * r9;  /* 0C079874 mul.l Rm,Rn */
	r5 = 0xC229004u; UPD(0x0C079878u, 4);  /* 0C079876 mov.l @(disp,pc),Rn */
	r6 = 0xFFFFFFF8u;  /* 0C079878 mov #imm,Rn */
	IF(0x0C07987Au); r9 = MACL;  /* 0C07987A sts macl,Rn */
	IF(0x0C07987Cu); MACL = r12 * r7;  /* 0C07987C mul.l Rm,Rn */
	r2 = 0xE0u; UPD(0x0C079880u, 5);  /* 0C07987E mov.w @(disp,pc),Rn */
	IF(0x0C079880u); r13 = MACL;  /* 0C079880 sts macl,Rn */
	r9 += r13;  /* 0C079882 add Rm,Rn */
	r9 += r5;  /* 0C079884 add Rm,Rn */
	r11 = R32(r9 + 0x2Cu); UPD(0x0C079888u, 4);  /* 0C079886 mov.l @(disp,Rm),Rn */
	IF(0x0C079888u); MACL = r11 * r2;  /* 0C079888 mul.l Rm,Rn */
	r3 = R32(r9 + 0x30u); UPD(0x0C07988Cu, 3);  /* 0C07988A mov.l @(disp,Rm),Rn */
	IF(0x0C07988Cu); r0 = MACL;  /* 0C07988C sts macl,Rn */
	IF(0x0C07988Eu); MACL = r3 * r2;  /* 0C07988E mul.l Rm,Rn */
	r11 = r9;  /* 0C079890 mov Rm,Rn */
	IF(0x0C079892u); ARG0(0x406Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C079892 shad Rm,Rn */
	r11 += 0x48u;  /* 0C079894 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r11); UPD(0x0C079898u, 7);  /* 0C079896 mov.b @Rm,Rn */
	IF(0x0C079898u); r8 = MACL;  /* 0C079898 sts macl,Rn */
	W32(r9 + 0x2Cu, r0); UPD(0x0C07989Cu, 2);  /* 0C07989A mov.l Rm,@(disp,Rn) */
	IF(0x0C07989Cu); ARG0(0x486Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = (u32)((s32)r8 >> 31); else r8 = (u32)((s32)r8 >> ((~s_ & 31) + 1)); }  /* 0C07989C shad Rm,Rn */
	r1 += 0x1u;  /* 0C07989E add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0798A0 extu.b Rm,Rn */
	W32(r9 + 0x30u, r8); UPD(0x0C0798A4u, 4);  /* 0C0798A2 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x4u;  /* 0C0798A4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r11, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0797FCu, 4); goto L_0C0797FC; } UPD(0x0C0798AAu, 1); goto L_0C0798AA; }  /* 0C0798A6 bf/s */
L_0C0798AA: BLKS(0x0C0798AAu);
	r6 = R32(r9); UPD(0x0C0798ACu, 1);  /* 0C0798AA mov.l @Rm,Rn */
	r13 = 0x0u;  /* 0C0798AC mov #imm,Rn */
	r1 = 0xD800000u; UPD(0x0C0798B0u, 2);  /* 0C0798AE mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0798B0 mov Rm,Rn */
	r8 = 0xC079E80u; UPD(0x0C0798B4u, 2);  /* 0C0798B2 mov.l @(disp,pc),Rn */
	r6 |= r1;  /* 0C0798B4 or Rm,Rn */
	r4 = r10;  /* 0C0798B6 mov Rm,Rn */
	W32(r9, r6); UPD(0x0C0798BAu, 3);  /* 0C0798B8 mov.l Rm,@Rn */
	W32(r9 + 0x30u, r13); UPD(0x0C0798BCu, 1);  /* 0C0798BA mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x2Cu, r13); UPD(0x0C0798BEu, 1);  /* 0C0798BC mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r13); UPD(0x0C0798C0u, 1);  /* 0C0798BE mov.l Rm,@(disp,Rn) */
	IF(0x0C0798C0u); { u32 t_ = r8; PR = 0x0C0798C4u; W32(r9 + 0x8u, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C0798C4u); }  /* 0C0798C0 jsr @Rn */
L_0C0798C4: BLKS(0x0C0798C4u);
	r12 = 0x204D0D0u; UPD(0x0C0798C6u, 1);  /* 0C0798C4 mov.l @(disp,pc),Rn */
	r4 = 0xC18656Cu; UPD(0x0C0798C8u, 1);  /* 0C0798C6 mov.l @(disp,pc),Rn */
	W8(r11, r13); UPD(0x0C0798CAu, 1);  /* 0C0798C8 mov.b Rm,@Rn */
	r0 = r4;  /* 0C0798CA mov Rm,Rn */
	W32(r9 + 0x3Cu, r12); UPD(0x0C0798CEu, 2);  /* 0C0798CC mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C0798CE mov Rm,Rn */
	IF(0x0C0798D0u); r5 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0798D2u, 2);  /* 0C0798D0 mov.b @(r0,Rm),Rn */
	r10 = 0xC0C20A0u; UPD(0x0C0798D4u, 1);  /* 0C0798D2 mov.l @(disp,pc),Rn */
	IF(0x0C0798D4u); { u32 t_ = r10; PR = 0x0C0798D8u; IF(0x0C0798D6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C0798D8u); }  /* 0C0798D4 jsr @Rn */
L_0C0798D8: BLKS(0x0C0798D8u);
	{ r14 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C0797FEu, 3); goto L_0C0797FE; }  /* 0C0798D8 bra */
L_0C0798E0: BLKS(0x0C0798E0u);
	r13 += 0x44u;  /* 0C0798E0 add #imm,Rn */
	r1 = R32(r9 + 0x2Cu); UPD(0x0C0798E4u, 2);  /* 0C0798E2 mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s16)R16(r13); UPD(0x0C0798E6u, 1);  /* 0C0798E4 mov.w @Rm,Rn */
	r3 = 0x3000u; UPD(0x0C0798E8u, 1);  /* 0C0798E6 mov.w @(disp,pc),Rn */
	r2 += 0x4u;  /* 0C0798E8 add #imm,Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C0798ECu, 2);  /* 0C0798EA mov.l @(disp,Rm),Rn */
	r4 = r2 & 0xFFFF;  /* 0C0798EC extu.w Rm,Rn */
	r6 = R32(r9 + 0x28u); UPD(0x0C0798F0u, 2);  /* 0C0798EE mov.l @(disp,Rm),Rn */
	r11 += r1;  /* 0C0798F0 add Rm,Rn */
	r5 = R32(r9 + 0x34u); UPD(0x0C0798F4u, 2);  /* 0C0798F2 mov.l @(disp,Rm),Rn */
	r0 = R32(r9 + 0x30u); UPD(0x0C0798F6u, 1);  /* 0C0798F4 mov.l @(disp,Rm),Rn */
	r5 += r3;  /* 0C0798F6 add Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C0798FAu, 2);  /* 0C0798F8 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0798FA add Rm,Rn */
	W16(r13, r2); UPD(0x0C0798FEu, 2);  /* 0C0798FC mov.w Rm,@Rn */
	W32(r9 + 0x24u, r11); UPD(0x0C079900u, 1);  /* 0C0798FE mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r6); UPD(0x0C079902u, 1);  /* 0C079900 mov.l Rm,@(disp,Rn) */
	IF(0x0C079902u); { u32 t_ = r8; PR = 0x0C079906u; W32(r9 + 0x34u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C079906u); }  /* 0C079902 jsr @Rn */
L_0C079906: BLKS(0x0C079906u);
	r7 = 0x3u;  /* 0C079906 mov #imm,Rn */
	IF(0x0C079908u); ARG0(0x407Du); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C079908 shld Rm,Rn */
	r4 = R32(r9 + 0x2Cu); UPD(0x0C07990Cu, 3);  /* 0C07990A mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C07990C add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r13); UPD(0x0C079910u, 2);  /* 0C07990E mov.w @Rm,Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C079912u, 1);  /* 0C079910 mov.l Rm,@(disp,Rn) */
	r11 = 0xC069AF0u; UPD(0x0C079914u, 1);  /* 0C079912 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFFFF;  /* 0C079914 extu.w Rm,Rn */
	IF(0x0C079916u); { u32 t_ = r11; PR = 0x0C07991Au; r5 = R32(r9 + 0x34u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07991Au); }  /* 0C079916 jsr @Rn */
L_0C07991A: BLKS(0x0C07991Au);
	r1 = 0x3u;  /* 0C07991A mov #imm,Rn */
	IF(0x0C07991Cu); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07991C shld Rm,Rn */
	r3 = R32(r9 + 0x30u); UPD(0x0C079920u, 3);  /* 0C07991E mov.l @(disp,Rm),Rn */
	r2 = R32(r9 + 0x24u); UPD(0x0C079922u, 1);  /* 0C079920 mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C079922 add Rm,Rn */
	r13 = 0xFF600000u; UPD(0x0C079926u, 2);  /* 0C079924 mov.l @(disp,pc),Rn */
	r2 += r13;  /* 0C079926 add Rm,Rn */
	IF(0x0C079928u); T = (s32)r2 >= 0;  /* 0C079928 cmp/pz Rn */
	{ u32 c_ = !T; W32(r9 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0799F0u, 5); goto L_0C0799F0; } UPD(0x0C07992Eu, 1); goto L_0C07992E; }  /* 0C07992A bf/s */
L_0C07992E: BLKS(0x0C07992Eu);
	r5 = 0xA80000u; UPD(0x0C079930u, 1);  /* 0C07992E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C079930 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07994Eu, 4); goto L_0C07994E; } goto L_0C079936; }  /* 0C079932 bt/s */
L_0C079936: BLKS(0x0C079936u);
	r7 = 0xC3C4048u; UPD(0x0C079938u, 2);  /* 0C079936 mov.l @(disp,pc),Rn */
	r2 = r3;  /* 0C079938 mov Rm,Rn */
	r4 = R32(r7); UPD(0x0C07993Cu, 2);  /* 0C07993A mov.l @Rm,Rn */
	r13 = 0xFF880000u; UPD(0x0C07993Eu, 1);  /* 0C07993C mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C07993E sub Rm,Rn */
	r2 += r13;  /* 0C079940 add Rm,Rn */
	IF(0x0C079942u); T = (s32)r2 >= 0;  /* 0C079942 cmp/pz Rn */
	if (!T) { UPD(0x0C0799E0u, 6); goto L_0C0799E0; }  /* 0C079944 bf */
L_0C079946: BLKS(0x0C079946u);
	r8 = 0x800000u; UPD(0x0C079948u, 1);  /* 0C079946 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C079948 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C079960u, 4); goto L_0C079960; } UPD(0x0C07994Eu, 1); goto L_0C07994E; }  /* 0C07994A bf/s */
L_0C07994E: BLKS(0x0C07994Eu);
	W32(r9, r1); UPD(0x0C079950u, 1);  /* 0C07994E mov.l Rm,@Rn */
L_0C079950: BLKS(0x0C079950u);
	{ r14 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C0797FEu, 3); goto L_0C0797FE; }  /* 0C079950 bra */
L_0C079960: BLKS(0x0C079960u);
	r2 = r9;  /* 0C079960 mov Rm,Rn */
	r2 += 0x48u;  /* 0C079962 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C079966u, 3);  /* 0C079964 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C079966 add #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C079968 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C07996A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C079950u, 6); goto L_0C079950; } UPD(0x0C079970u, 1); goto L_0C079970; }  /* 0C07996C bf/s */
L_0C079970: BLKS(0x0C079970u);
	r6 = 0x0u;  /* 0C079970 mov #imm,Rn */
	r1 = R32(r9 + 0xCu); UPD(0x0C079974u, 2);  /* 0C079972 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C079974 tst Rm,Rn */
	{ u32 c_ = T; W8(r2, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07994Eu, 4); goto L_0C07994E; } UPD(0x0C07997Au, 1); goto L_0C07997A; }  /* 0C079976 bt/s */
L_0C07997A: BLKS(0x0C07997Au);
	r1 += 0xFFFFFFFFu;  /* 0C07997A add #imm,Rn */
	UPD(0x0C07997Cu, 1);
L_0C07997C: BLKS(0x0C07997Cu);
	W32(r9 + 0xCu, r1); UPD(0x0C07997Eu, 1);  /* 0C07997C mov.l Rm,@(disp,Rn) */
	IF(0x0C07997Eu); ;  /* 0C07997E nop */
	UPD(0x0C079980u, 1);
L_0C079980: BLKS(0x0C079980u);
	r2 = 0xC079EF0u; UPD(0x0C079982u, 1);  /* 0C079980 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C079982 mov Rm,Rn */
	r5 = r12;  /* 0C079984 mov Rm,Rn */
	r14 += 0x14u;  /* 0C079986 add #imm,Rn */
	r15 = r14;  /* 0C079988 mov Rm,Rn */
	IF(0x0C07998Au); PR = R32(r15); r15 += 4; UPD(0x0C07998Cu, 5);  /* 0C07998A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07998Eu, 1);  /* 0C07998C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C079990u, 1);  /* 0C07998E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C079992u, 1);  /* 0C079990 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C079994u, 1);  /* 0C079992 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C079996u, 1);  /* 0C079994 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C079998u, 1);  /* 0C079996 mov.l @Rm+,Rn */
	IF(0x0C079998u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C079EF0u: TAIL(blk_f_0C079EF0); default: JUMPD(tv_); } }  /* 0C079998 jmp @Rn */
L_0C0799E0: BLKS(0x0C0799E0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C079946u, 3); goto L_0C079946; }  /* 0C0799E0 bra */
L_0C0799F0: BLKS(0x0C0799F0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C07992Eu, 3); goto L_0C07992E; }  /* 0C0799F0 bra */
L_0C079A00: BLKS(0x0C079A00u);
	r4 = 0x17u;  /* 0C079A00 mov #imm,Rn */
	r8 += 0xFFFFFFF8u;  /* 0C079A02 add #imm,Rn */
	T = r8 > r4;  /* 0C079A04 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C079AB8u, 6); goto L_0C079AB8; }  /* 0C079A06 bt */
L_0C079A08: BLKS(0x0C079A08u);
	r0 = 0xC079A14u;  /* 0C079A08 mova @(disp,pc),r0 */
	r8 += r8;  /* 0C079A0A add Rm,Rn */
	IF(0x0C079A0Cu); r5 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C079A0Eu, 3);  /* 0C079A0C mov.w @(r0,Rm),Rn */
	IF(0x0C079A0Eu); { u32 tv_ = (r5 + 0x0C079A12u); u32 t_ = PHYS(tv_); IF(0x0C079A10u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C079A50u: goto L_0C079A50; case 0x0C079AB8u: goto L_0C079AB8; case 0x0C079C50u: goto L_0C079C50; case 0x0C079E50u: goto L_0C079E50; default: JUMPD(tv_); } }  /* 0C079A0E braf Rn */
L_0C079A50: BLKS(0x0C079A50u);
	r8 = 0x2800u; UPD(0x0C079A52u, 1);  /* 0C079A50 mov.w @(disp,pc),Rn */
	r7 = 0x50u;  /* 0C079A52 mov #imm,Rn */
	IF(0x0C079A54u); MACL = r10 * r8;  /* 0C079A54 mul.l Rm,Rn */
	r1 = 0xC229004u; UPD(0x0C079A58u, 4);  /* 0C079A56 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C079A58 mov Rm,Rn */
	IF(0x0C079A5Au); r11 = MACL;  /* 0C079A5A sts macl,Rn */
	IF(0x0C079A5Cu); MACL = r12 * r7;  /* 0C079A5C mul.l Rm,Rn */
	r13 = 0xC079F80u; UPD(0x0C079A60u, 5);  /* 0C079A5E mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C079A60 mov #imm,Rn */
	IF(0x0C079A62u); r9 = MACL;  /* 0C079A62 sts macl,Rn */
	r9 += r11;  /* 0C079A64 add Rm,Rn */
	r9 += r1;  /* 0C079A66 add Rm,Rn */
	r9 += 0x44u;  /* 0C079A68 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C079A6Cu, 6);  /* 0C079A6A mov.w @Rm,Rn */
	IF(0x0C079A6Cu); { u32 t_ = r13; PR = 0x0C079A70u; W32(r14, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C079A70u); }  /* 0C079A6C jsr @Rn */
L_0C079A70: BLKS(0x0C079A70u);
	T = (r0 & r0) == 0;  /* 0C079A70 tst Rm,Rn */
	{ u32 c_ = T; r9 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C079A7Au, 4); goto L_0C079A7A; } goto L_0C079A76; }  /* 0C079A72 bt/s */
L_0C079A76: BLKS(0x0C079A76u);
	{ r1 = 0x50u; /* slot mov #imm,Rn */ UPD(0x0C079BC0u, 4); goto L_0C079BC0; }  /* 0C079A76 bra */
L_0C079A7A: BLKS(0x0C079A7Au);
	r3 = 0x2800u; UPD(0x0C079A7Cu, 1);  /* 0C079A7A mov.w @(disp,pc),Rn */
	r9 += 0x4Cu;  /* 0C079A7C add #imm,Rn */
	IF(0x0C079A7Eu); MACL = r10 * r3;  /* 0C079A7E mul.l Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r9); UPD(0x0C079A82u, 4);  /* 0C079A80 mov.w @Rm,Rn */
	r4 = r10;  /* 0C079A82 mov Rm,Rn */
	IF(0x0C079A84u); r5 = MACL;  /* 0C079A84 sts macl,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C079A88u, 3);  /* 0C079A86 mov.l Rm,@(disp,Rn) */
	r9 += 0xFFFFFFB4u;  /* 0C079A88 add #imm,Rn */
	IF(0x0C079A8Au); { u32 t_ = r13; PR = 0x0C079A8Eu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C079A8Eu); }  /* 0C079A8A jsr @Rn */
L_0C079A8E: BLKS(0x0C079A8Eu);
	T = (r0 & r0) == 0;  /* 0C079A8E tst Rm,Rn */
	{ u32 c_ = !T; r8 = 0x50u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C079B50u, 4); goto L_0C079B50; } UPD(0x0C079A94u, 1); goto L_0C079A94; }  /* 0C079A90 bf/s */
L_0C079A94: BLKS(0x0C079A94u);
	r9 += 0x4Eu;  /* 0C079A94 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r9); UPD(0x0C079A98u, 2);  /* 0C079A96 mov.w @Rm,Rn */
	r4 = r10;  /* 0C079A98 mov Rm,Rn */
	IF(0x0C079A9Au); { u32 t_ = r13; PR = 0x0C079A9Eu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C079A9Eu); }  /* 0C079A9A jsr @Rn */
L_0C079A9E: BLKS(0x0C079A9Eu);
	T = (r0 & r0) == 0;  /* 0C079A9E tst Rm,Rn */
	{ u32 c_ = !T; r9 += 0xFFFFFFB2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C079AE0u, 4); goto L_0C079AE0; } UPD(0x0C079AA4u, 1); goto L_0C079AA4; }  /* 0C079AA0 bf/s */
L_0C079AA4: BLKS(0x0C079AA4u);
	r0 = r9;  /* 0C079AA4 mov Rm,Rn */
	r0 += 0x49u;  /* 0C079AA6 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C079AAAu, 3);  /* 0C079AA8 mov.b @Rm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C079AAA add #imm,Rn */
	r11 = r5 & 0xFF;  /* 0C079AAC extu.b Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C079AAE tst Rm,Rn */
	{ u32 c_ = !T; W8(r0, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C079AB8u, 6); goto L_0C079AB8; } UPD(0x0C079AB4u, 1); goto L_0C079AB4; }  /* 0C079AB0 bf/s */
L_0C079AB4: BLKS(0x0C079AB4u);
	r3 = 0x18u;  /* 0C079AB4 mov #imm,Rn */
	W32(r9 + 0xCu, r3); UPD(0x0C079AB8u, 2);  /* 0C079AB6 mov.l Rm,@(disp,Rn) */
L_0C079AB8: BLKS(0x0C079AB8u);
	r13 = 0x2800u; UPD(0x0C079ABAu, 1);  /* 0C079AB8 mov.w @(disp,pc),Rn */
	r7 = 0x50u;  /* 0C079ABA mov #imm,Rn */
	IF(0x0C079ABCu); MACL = r10 * r13;  /* 0C079ABC mul.l Rm,Rn */
	r6 = 0xC229004u; UPD(0x0C079AC0u, 4);  /* 0C079ABE mov.l @(disp,pc),Rn */
	IF(0x0C079AC0u); r9 = MACL;  /* 0C079AC0 sts macl,Rn */
	IF(0x0C079AC2u); MACL = r12 * r7;  /* 0C079AC2 mul.l Rm,Rn */
	IF(0x0C079AC4u); r8 = MACL;  /* 0C079AC4 sts macl,Rn */
	r9 += r8;  /* 0C079AC6 add Rm,Rn */
	r9 += r6;  /* 0C079AC8 add Rm,Rn */
	r4 = R32(r9 + 0xCu); UPD(0x0C079ACCu, 7);  /* 0C079ACA mov.l @(disp,Rm),Rn */
	r4 += 0x1u;  /* 0C079ACC add #imm,Rn */
	{ W32(r9 + 0xCu, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C079980u, 4); goto L_0C079980; }  /* 0C079ACE bra */
L_0C079AE0: BLKS(0x0C079AE0u);
	r2 = 0xC28EDFCu; UPD(0x0C079AE2u, 1);  /* 0C079AE0 mov.l @(disp,pc),Rn */
	r13 = 0x50u;  /* 0C079AE2 mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C079AE6u, 2);  /* 0C079AE4 mov.w @Rm,Rn */
	r4 = 0x1u;  /* 0C079AE6 mov #imm,Rn */
	IF(0x0C079AE8u); MACL = r5 * r13;  /* 0C079AE8 mul.l Rm,Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C079AECu, 4);  /* 0C079AEA mov.l @(disp,Rm),Rn */
	r3 = 0xFu;  /* 0C079AEC mov #imm,Rn */
	IF(0x0C079AEEu); r13 = MACL;  /* 0C079AEE sts macl,Rn */
	r1 = 0xC229004u; UPD(0x0C079AF2u, 3);  /* 0C079AF0 mov.l @(disp,pc),Rn */
	r13 += r7;  /* 0C079AF2 add Rm,Rn */
	r13 += r1;  /* 0C079AF4 add Rm,Rn */
	r0 = 0xC079E80u; UPD(0x0C079AF8u, 3);  /* 0C079AF6 mov.l @(disp,pc),Rn */
	r6 = R32(r9 + 0x4u); UPD(0x0C079AFAu, 1);  /* 0C079AF8 mov.l @(disp,Rm),Rn */
	W32(r13 + 0x8u, r4); UPD(0x0C079AFCu, 1);  /* 0C079AFA mov.l Rm,@(disp,Rn) */
	r8 = 0xC0000000u; UPD(0x0C079AFEu, 1);  /* 0C079AFC mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C079AFE mov Rm,Rn */
	W32(r13, r8); UPD(0x0C079B02u, 2);  /* 0C079B00 mov.l Rm,@Rn */
	W32(r13 + 0x4u, r6); UPD(0x0C079B04u, 1);  /* 0C079B02 mov.l Rm,@(disp,Rn) */
	r8 = 0x0u;  /* 0C079B04 mov #imm,Rn */
	IF(0x0C079B06u); { u32 t_ = r0; PR = 0x0C079B0Au; W32(r13 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C079B0Au); }  /* 0C079B06 jsr @Rn */
L_0C079B0A: BLKS(0x0C079B0Au);
	r5 = 0x2048080u; UPD(0x0C079B0Cu, 1);  /* 0C079B0A mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C079B0C mov Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C079B10u, 2);  /* 0C079B0E mov.l @(disp,Rm),Rn */
	r0 += 0x44u;  /* 0C079B10 add #imm,Rn */
	r3 = R32(r9 + 0x28u); UPD(0x0C079B14u, 2);  /* 0C079B12 mov.l @(disp,Rm),Rn */
	r7 = r13;  /* 0C079B14 mov Rm,Rn */
	W32(r13 + 0x3Cu, r5); UPD(0x0C079B18u, 2);  /* 0C079B16 mov.l Rm,@(disp,Rn) */
	r7 += 0x40u;  /* 0C079B18 add #imm,Rn */
	r2 = 0x808080u; UPD(0x0C079B1Cu, 2);  /* 0C079B1A mov.l @(disp,pc),Rn */
	r9 += 0x4Au;  /* 0C079B1C add #imm,Rn */
	W16(r0, r11); UPD(0x0C079B20u, 2);  /* 0C079B1E mov.w Rm,@Rn */
	r5 = 0x0u;  /* 0C079B20 mov #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r9); UPD(0x0C079B24u, 2);  /* 0C079B22 mov.b @Rm,Rn */
	r6 = r13;  /* 0C079B24 mov Rm,Rn */
	W32(r7, r2); UPD(0x0C079B28u, 2);  /* 0C079B26 mov.l Rm,@Rn */
	r6 += 0x48u;  /* 0C079B28 add #imm,Rn */
	W32(r13 + 0x2Cu, r4); UPD(0x0C079B2Cu, 2);  /* 0C079B2A mov.l Rm,@(disp,Rn) */
	r7 += 0x9u;  /* 0C079B2C add #imm,Rn */
	W32(r13 + 0x24u, r4); UPD(0x0C079B30u, 2);  /* 0C079B2E mov.l Rm,@(disp,Rn) */
	r11 += 0x1u;  /* 0C079B30 add #imm,Rn */
	W32(r13 + 0x30u, r3); UPD(0x0C079B34u, 2);  /* 0C079B32 mov.l Rm,@(disp,Rn) */
	r9 += 0xFFFFFFB6u;  /* 0C079B34 add #imm,Rn */
	W32(r13 + 0x28u, r3); UPD(0x0C079B38u, 2);  /* 0C079B36 mov.l Rm,@(disp,Rn) */
	W32(r13 + 0x34u, r5); UPD(0x0C079B3Au, 1);  /* 0C079B38 mov.l Rm,@(disp,Rn) */
	r13 += 0x4Au;  /* 0C079B3A add #imm,Rn */
	W8(r7, r8); UPD(0x0C079B3Eu, 2);  /* 0C079B3C mov.b Rm,@Rn */
	W8(r6, r8); UPD(0x0C079B40u, 1);  /* 0C079B3E mov.b Rm,@Rn */
	{ W8(r13, r11); /* slot mov.b Rm,@Rn */ UPD(0x0C079AA4u, 3); goto L_0C079AA4; }  /* 0C079B40 bra */
L_0C079B50: BLKS(0x0C079B50u);
	r7 = 0xC28EDFCu; UPD(0x0C079B52u, 1);  /* 0C079B50 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r7); UPD(0x0C079B54u, 1);  /* 0C079B52 mov.w @Rm,Rn */
	r3 = 0x1u;  /* 0C079B54 mov #imm,Rn */
	IF(0x0C079B56u); MACL = r5 * r8;  /* 0C079B56 mul.l Rm,Rn */
	r6 = R32(r14 + 0x4u); UPD(0x0C079B5Au, 4);  /* 0C079B58 mov.l @(disp,Rm),Rn */
	r0 = 0xFu;  /* 0C079B5A mov #imm,Rn */
	IF(0x0C079B5Cu); r8 = MACL;  /* 0C079B5C sts macl,Rn */
	r1 = 0xC229004u; UPD(0x0C079B60u, 3);  /* 0C079B5E mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C079B60 add Rm,Rn */
	r4 = R32(r9 + 0x4u); UPD(0x0C079B64u, 2);  /* 0C079B62 mov.l @(disp,Rm),Rn */
	r8 += r1;  /* 0C079B64 add Rm,Rn */
	r2 = 0xC0000000u; UPD(0x0C079B68u, 2);  /* 0C079B66 mov.l @(disp,pc),Rn */
	r7 = 0xC079E80u; UPD(0x0C079B6Au, 1);  /* 0C079B68 mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r4); UPD(0x0C079B6Cu, 1);  /* 0C079B6A mov.l Rm,@(disp,Rn) */
	W32(r8, r2); UPD(0x0C079B6Eu, 1);  /* 0C079B6C mov.l Rm,@Rn */
	r4 = r10;  /* 0C079B6E mov Rm,Rn */
	W32(r8 + 0x8u, r3); UPD(0x0C079B72u, 2);  /* 0C079B70 mov.l Rm,@(disp,Rn) */
	IF(0x0C079B72u); { u32 t_ = r7; PR = 0x0C079B76u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C079B76u); }  /* 0C079B72 jsr @Rn */
L_0C079B76: BLKS(0x0C079B76u);
	r4 = r8;  /* 0C079B76 mov Rm,Rn */
	r2 = 0x808080u; UPD(0x0C079B7Au, 2);  /* 0C079B78 mov.l @(disp,pc),Rn */
	r4 += 0x40u;  /* 0C079B7A add #imm,Rn */
	W32(r4, r2); UPD(0x0C079B7Eu, 2);  /* 0C079B7C mov.l Rm,@Rn */
	r3 = 0x0u;  /* 0C079B7E mov #imm,Rn */
	r4 += 0x9u;  /* 0C079B80 add #imm,Rn */
	r0 = R32(r9 + 0x24u); UPD(0x0C079B84u, 3);  /* 0C079B82 mov.l @(disp,Rm),Rn */
	r5 = r8;  /* 0C079B84 mov Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C079B88u, 2);  /* 0C079B86 mov.l @(disp,Rm),Rn */
	r5 += 0x48u;  /* 0C079B88 add #imm,Rn */
	r6 = 0x2048080u; UPD(0x0C079B8Cu, 2);  /* 0C079B8A mov.l @(disp,pc),Rn */
	r9 += 0x4Au;  /* 0C079B8C add #imm,Rn */
	W8(r4, r3); UPD(0x0C079B90u, 2);  /* 0C079B8E mov.b Rm,@Rn */
	W32(r8 + 0x3Cu, r6); UPD(0x0C079B92u, 1);  /* 0C079B90 mov.l Rm,@(disp,Rn) */
	r4 = 0x0u;  /* 0C079B92 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C079B96u, 2);  /* 0C079B94 mov.b @Rm,Rn */
	r6 = r8;  /* 0C079B96 mov Rm,Rn */
	W32(r8 + 0x2Cu, r0); UPD(0x0C079B9Au, 2);  /* 0C079B98 mov.l Rm,@(disp,Rn) */
	r6 += 0x44u;  /* 0C079B9A add #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C079B9Eu, 2);  /* 0C079B9C mov.l Rm,@(disp,Rn) */
	r2 += 0x1u;  /* 0C079B9E add #imm,Rn */
	W32(r8 + 0x30u, r7); UPD(0x0C079BA2u, 2);  /* 0C079BA0 mov.l Rm,@(disp,Rn) */
	r9 += 0xFFFFFFB6u;  /* 0C079BA2 add #imm,Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C079BA6u, 2);  /* 0C079BA4 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x34u, r4); UPD(0x0C079BA8u, 1);  /* 0C079BA6 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Au;  /* 0C079BA8 add #imm,Rn */
	W8(r5, r3); UPD(0x0C079BACu, 2);  /* 0C079BAA mov.b Rm,@Rn */
	W16(r6, r11); UPD(0x0C079BAEu, 1);  /* 0C079BAC mov.w Rm,@Rn */
	{ W8(r8, r2); /* slot mov.b Rm,@Rn */ UPD(0x0C079A94u, 3); goto L_0C079A94; }  /* 0C079BAE bra */
L_0C079BC0: BLKS(0x0C079BC0u);
	r8 = 0xC28EDFCu; UPD(0x0C079BC2u, 1);  /* 0C079BC0 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r8); UPD(0x0C079BC4u, 1);  /* 0C079BC2 mov.w @Rm,Rn */
	r4 = 0xFu;  /* 0C079BC4 mov #imm,Rn */
	IF(0x0C079BC6u); MACL = r5 * r1;  /* 0C079BC6 mul.l Rm,Rn */
	r0 = 0xC229004u; UPD(0x0C079BCAu, 4);  /* 0C079BC8 mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C079BCA mov #imm,Rn */
	IF(0x0C079BCCu); r8 = MACL;  /* 0C079BCC sts macl,Rn */
	r8 += r11;  /* 0C079BCE add Rm,Rn */
	r8 += r0;  /* 0C079BD0 add Rm,Rn */
	r11 = 0xC0000000u; UPD(0x0C079BD4u, 5);  /* 0C079BD2 mov.l @(disp,pc),Rn */
	r2 = 0xC079E80u; UPD(0x0C079BD6u, 1);  /* 0C079BD4 mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x4u); UPD(0x0C079BD8u, 1);  /* 0C079BD6 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C079BDAu, 1);  /* 0C079BD8 mov.l Rm,@(disp,Rn) */
	W32(r8, r11); UPD(0x0C079BDCu, 1);  /* 0C079BDA mov.l Rm,@Rn */
	r4 = r10;  /* 0C079BDC mov Rm,Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C079BE0u, 2);  /* 0C079BDE mov.l Rm,@(disp,Rn) */
	r11 = r8;  /* 0C079BE0 mov Rm,Rn */
	IF(0x0C079BE2u); { u32 t_ = r2; PR = 0x0C079BE6u; W32(r8 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C079BE6u); }  /* 0C079BE2 jsr @Rn */
L_0C079BE6: BLKS(0x0C079BE6u);
	r0 = 0x808080u; UPD(0x0C079BE8u, 1);  /* 0C079BE6 mov.l @(disp,pc),Rn */
	r11 += 0x40u;  /* 0C079BE8 add #imm,Rn */
	W32(r11, r0); UPD(0x0C079BECu, 2);  /* 0C079BEA mov.l Rm,@Rn */
	r6 = r8;  /* 0C079BEC mov Rm,Rn */
	r11 += 0x9u;  /* 0C079BEE add #imm,Rn */
	r7 = 0x0u;  /* 0C079BF0 mov #imm,Rn */
	r6 += 0x48u;  /* 0C079BF2 add #imm,Rn */
	W8(r11, r7); UPD(0x0C079BF6u, 5);  /* 0C079BF4 mov.b Rm,@Rn */
	r0 = 0x2u;  /* 0C079BF6 mov #imm,Rn */
	W8(r6, r7); UPD(0x0C079BFAu, 2);  /* 0C079BF8 mov.b Rm,@Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C079BFCu, 1);  /* 0C079BFA mov.l @(disp,Rm),Rn */
	r2 = R32(r9 + 0x28u); UPD(0x0C079BFEu, 1);  /* 0C079BFC mov.l @(disp,Rm),Rn */
	IF(0x0C079BFEu); r4 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C079C00u, 1);  /* 0C079BFE mov.w @(r0,Rm),Rn */
	r9 += 0x4Au;  /* 0C079C00 add #imm,Rn */
	r3 = 0x2048080u; UPD(0x0C079C04u, 2);  /* 0C079C02 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C079C04 mov #imm,Rn */
	W32(r8 + 0x3Cu, r3); UPD(0x0C079C08u, 2);  /* 0C079C06 mov.l Rm,@(disp,Rn) */
	r11 = (u32)(s32)(s8)R8(r9); UPD(0x0C079C0Au, 1);  /* 0C079C08 mov.b @Rm,Rn */
	r3 = r8;  /* 0C079C0A mov Rm,Rn */
	W32(r8 + 0x2Cu, r5); UPD(0x0C079C0Eu, 2);  /* 0C079C0C mov.l Rm,@(disp,Rn) */
	r3 += 0x44u;  /* 0C079C0E add #imm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C079C12u, 2);  /* 0C079C10 mov.l Rm,@(disp,Rn) */
	r11 += 0x1u;  /* 0C079C12 add #imm,Rn */
	W32(r8 + 0x30u, r2); UPD(0x0C079C16u, 2);  /* 0C079C14 mov.l Rm,@(disp,Rn) */
	r9 += 0xFFFFFFB6u;  /* 0C079C16 add #imm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C079C1Au, 2);  /* 0C079C18 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x34u, r0); UPD(0x0C079C1Cu, 1);  /* 0C079C1A mov.l Rm,@(disp,Rn) */
	r8 += 0x4Au;  /* 0C079C1C add #imm,Rn */
	W16(r3, r4); UPD(0x0C079C20u, 2);  /* 0C079C1E mov.w Rm,@Rn */
	{ W8(r8, r11); /* slot mov.b Rm,@Rn */ UPD(0x0C079A7Au, 3); goto L_0C079A7A; }  /* 0C079C20 bra */
L_0C079C50: BLKS(0x0C079C50u);
	r11 = 0x2800u; UPD(0x0C079C52u, 1);  /* 0C079C50 mov.w @(disp,pc),Rn */
	r0 = 0x50u;  /* 0C079C52 mov #imm,Rn */
	IF(0x0C079C54u); MACL = r10 * r11;  /* 0C079C54 mul.l Rm,Rn */
	r5 = 0xC229004u; UPD(0x0C079C58u, 4);  /* 0C079C56 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C079C58 mov Rm,Rn */
	IF(0x0C079C5Au); r11 = MACL;  /* 0C079C5A sts macl,Rn */
	IF(0x0C079C5Cu); MACL = r12 * r0;  /* 0C079C5C mul.l Rm,Rn */
	r1 = 0xC079F80u; UPD(0x0C079C60u, 5);  /* 0C079C5E mov.l @(disp,pc),Rn */
	IF(0x0C079C60u); r9 = MACL;  /* 0C079C60 sts macl,Rn */
	r9 += r11;  /* 0C079C62 add Rm,Rn */
	r9 += r5;  /* 0C079C64 add Rm,Rn */
	r2 = r9;  /* 0C079C66 mov Rm,Rn */
	r2 += 0x44u;  /* 0C079C68 add #imm,Rn */
	W32(r14 + 0x8u, r2); UPD(0x0C079C6Cu, 6);  /* 0C079C6A mov.l Rm,@(disp,Rn) */
	r5 = 0x1u;  /* 0C079C6C mov #imm,Rn */
	IF(0x0C079C6Eu); { u32 t_ = r1; PR = 0x0C079C72u; r13 = (u32)(s32)(s16)R16(r2); /* slot mov.w @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C079C72u); }  /* 0C079C6E jsr @Rn */
L_0C079C72: BLKS(0x0C079C72u);
	T = (r0 & r0) == 0;  /* 0C079C72 tst Rm,Rn */
	{ u32 c_ = T; r8 = 0x50u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C079C7Cu, 4); goto L_0C079C7C; } goto L_0C079C78; }  /* 0C079C74 bt/s */
L_0C079C78: BLKS(0x0C079C78u);
	{ r2 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C079DF0u, 4); goto L_0C079DF0; }  /* 0C079C78 bra */
L_0C079C7C: BLKS(0x0C079C7Cu);
	r6 = 0x2800u; UPD(0x0C079C7Eu, 1);  /* 0C079C7C mov.w @(disp,pc),Rn */
	r5 = r9;  /* 0C079C7E mov Rm,Rn */
	IF(0x0C079C80u); MACL = r10 * r6;  /* 0C079C80 mul.l Rm,Rn */
	r5 += 0x4Cu;  /* 0C079C82 add #imm,Rn */
	r13 = 0xC079F80u; UPD(0x0C079C86u, 5);  /* 0C079C84 mov.l @(disp,pc),Rn */
	IF(0x0C079C86u); r4 = MACL;  /* 0C079C86 sts macl,Rn */
	W32(r14 + 0xCu, r4); UPD(0x0C079C8Au, 2);  /* 0C079C88 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r5); UPD(0x0C079C8Cu, 1);  /* 0C079C8A mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C079C8C mov Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r5); UPD(0x0C079C90u, 2);  /* 0C079C8E mov.w @Rm,Rn */
	IF(0x0C079C90u); { u32 t_ = r13; PR = 0x0C079C94u; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C079C94u); }  /* 0C079C90 jsr @Rn */
L_0C079C94: BLKS(0x0C079C94u);
	T = (r0 & r0) == 0;  /* 0C079C94 tst Rm,Rn */
	{ u32 c_ = !T; r13 = 0x50u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C079D60u, 4); goto L_0C079D60; } UPD(0x0C079C9Au, 1); goto L_0C079C9A; }  /* 0C079C96 bf/s */
L_0C079C9A: BLKS(0x0C079C9Au);
	r2 = 0xC079F80u; UPD(0x0C079C9Cu, 1);  /* 0C079C9A mov.l @(disp,pc),Rn */
	r13 = r9;  /* 0C079C9C mov Rm,Rn */
	r13 += 0x4Eu;  /* 0C079C9E add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r13); UPD(0x0C079CA2u, 3);  /* 0C079CA0 mov.w @Rm,Rn */
	r4 = r10;  /* 0C079CA2 mov Rm,Rn */
	IF(0x0C079CA4u); { u32 t_ = r2; PR = 0x0C079CA8u; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C079CA8u); }  /* 0C079CA4 jsr @Rn */
L_0C079CA8: BLKS(0x0C079CA8u);
	T = (r0 & r0) == 0;  /* 0C079CA8 tst Rm,Rn */
	{ u32 c_ = !T; r8 = 0x50u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C079CF0u, 4); goto L_0C079CF0; } UPD(0x0C079CAEu, 1); goto L_0C079CAE; }  /* 0C079CAA bf/s */
L_0C079CAE: BLKS(0x0C079CAEu);
	r8 = 0xC0C2360u; UPD(0x0C079CB0u, 1);  /* 0C079CAE mov.l @(disp,pc),Rn */
	IF(0x0C079CB0u); { u32 t_ = r8; PR = 0x0C079CB4u; r11 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C079CB4u); }  /* 0C079CB0 jsr @Rn */
L_0C079CB4: BLKS(0x0C079CB4u);
	r2 = R32(r14 + 0x8u); UPD(0x0C079CB6u, 1);  /* 0C079CB4 mov.l @(disp,Rm),Rn */
	IF(0x0C079CB6u); { u32 t_ = r8; PR = 0x0C079CBAu; W16(r2, r0); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C079CBAu); }  /* 0C079CB6 jsr @Rn */
L_0C079CBA: BLKS(0x0C079CBAu);
	r7 = R32(r14 + 0x10u); UPD(0x0C079CBCu, 1);  /* 0C079CBA mov.l @(disp,Rm),Rn */
	IF(0x0C079CBCu); { u32 t_ = r8; PR = 0x0C079CC0u; W16(r7, r0); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C079CC0u); }  /* 0C079CBC jsr @Rn */
L_0C079CC0: BLKS(0x0C079CC0u);
	r4 = r9;  /* 0C079CC0 mov Rm,Rn */
	r4 += 0x49u;  /* 0C079CC2 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C079CC6u, 3);  /* 0C079CC4 mov.b @Rm,Rn */
	W16(r13, r0); UPD(0x0C079CC8u, 1);  /* 0C079CC6 mov.w Rm,@Rn */
	r5 += 0xFFFFFFFFu;  /* 0C079CC8 add #imm,Rn */
	r13 = r5 & 0xFF;  /* 0C079CCA extu.b Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C079CCC tst Rm,Rn */
	{ u32 c_ = !T; W8(r4, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C079CE0u, 6); goto L_0C079CE0; } UPD(0x0C079CD2u, 1); goto L_0C079CD2; }  /* 0C079CCE bf/s */
L_0C079CD2: BLKS(0x0C079CD2u);
	r9 = 0x18u;  /* 0C079CD2 mov #imm,Rn */
	{ W32(r11 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C079980u, 4); goto L_0C079980; }  /* 0C079CD4 bra */
L_0C079CE0: BLKS(0x0C079CE0u);
	{ r1 = 0x8u; /* slot mov #imm,Rn */ UPD(0x0C07997Cu, 3); goto L_0C07997C; }  /* 0C079CE0 bra */
L_0C079CF0: BLKS(0x0C079CF0u);
	r6 = 0xC28EDFCu; UPD(0x0C079CF2u, 1);  /* 0C079CF0 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C079CF4u, 1);  /* 0C079CF2 mov.w @Rm,Rn */
	r4 = 0xFu;  /* 0C079CF4 mov #imm,Rn */
	IF(0x0C079CF6u); MACL = r5 * r8;  /* 0C079CF6 mul.l Rm,Rn */
	r3 = R32(r14 + 0xCu); UPD(0x0C079CFAu, 4);  /* 0C079CF8 mov.l @(disp,Rm),Rn */
	r7 = 0x1u;  /* 0C079CFA mov #imm,Rn */
	IF(0x0C079CFCu); r8 = MACL;  /* 0C079CFC sts macl,Rn */
	r1 = 0xC229004u; UPD(0x0C079D00u, 3);  /* 0C079CFE mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C079D00 add Rm,Rn */
	r8 += r1;  /* 0C079D02 add Rm,Rn */
	r2 = 0xC0000000u; UPD(0x0C079D06u, 3);  /* 0C079D04 mov.l @(disp,pc),Rn */
	r6 = 0xC079E80u; UPD(0x0C079D08u, 1);  /* 0C079D06 mov.l @(disp,pc),Rn */
	r0 = R32(r9 + 0x4u); UPD(0x0C079D0Au, 1);  /* 0C079D08 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C079D0Cu, 1);  /* 0C079D0A mov.l Rm,@(disp,Rn) */
	W32(r8, r2); UPD(0x0C079D0Eu, 1);  /* 0C079D0C mov.l Rm,@Rn */
	r4 = r10;  /* 0C079D0E mov Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C079D12u, 2);  /* 0C079D10 mov.l Rm,@(disp,Rn) */
	IF(0x0C079D12u); { u32 t_ = r6; PR = 0x0C079D16u; W32(r8 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C079D16u); }  /* 0C079D12 jsr @Rn */
L_0C079D16: BLKS(0x0C079D16u);
	r3 = 0x2048080u; UPD(0x0C079D18u, 1);  /* 0C079D16 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C079D18 mov Rm,Rn */
	r2 = 0x808080u; UPD(0x0C079D1Cu, 2);  /* 0C079D1A mov.l @(disp,pc),Rn */
	r5 += 0x40u;  /* 0C079D1C add #imm,Rn */
	W32(r8 + 0x3Cu, r3); UPD(0x0C079D20u, 2);  /* 0C079D1E mov.l Rm,@(disp,Rn) */
	r0 = 0x0u;  /* 0C079D20 mov #imm,Rn */
	W32(r5, r2); UPD(0x0C079D24u, 2);  /* 0C079D22 mov.l Rm,@Rn */
	r3 = r8;  /* 0C079D24 mov Rm,Rn */
	r5 += 0x9u;  /* 0C079D26 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C079D2Au, 3);  /* 0C079D28 mov.l @(disp,Rm),Rn */
	r3 += 0x44u;  /* 0C079D2A add #imm,Rn */
	r4 = R32(r9 + 0x28u); UPD(0x0C079D2Eu, 2);  /* 0C079D2C mov.l @(disp,Rm),Rn */
	r7 = r8;  /* 0C079D2E mov Rm,Rn */
	W8(r5, r0); UPD(0x0C079D32u, 2);  /* 0C079D30 mov.b Rm,@Rn */
	r9 += 0x4Au;  /* 0C079D32 add #imm,Rn */
	W16(r3, r11); UPD(0x0C079D36u, 2);  /* 0C079D34 mov.w Rm,@Rn */
	r5 = 0x0u;  /* 0C079D36 mov #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r9); UPD(0x0C079D3Au, 2);  /* 0C079D38 mov.b @Rm,Rn */
	r7 += 0x48u;  /* 0C079D3A add #imm,Rn */
	W32(r8 + 0x2Cu, r6); UPD(0x0C079D3Eu, 2);  /* 0C079D3C mov.l Rm,@(disp,Rn) */
	r11 += 0x1u;  /* 0C079D3E add #imm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C079D42u, 2);  /* 0C079D40 mov.l Rm,@(disp,Rn) */
	r9 += 0xFFFFFFB6u;  /* 0C079D42 add #imm,Rn */
	W32(r8 + 0x30u, r4); UPD(0x0C079D46u, 2);  /* 0C079D44 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r4); UPD(0x0C079D48u, 1);  /* 0C079D46 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x34u, r5); UPD(0x0C079D4Au, 1);  /* 0C079D48 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Au;  /* 0C079D4A add #imm,Rn */
	W8(r7, r0); UPD(0x0C079D4Eu, 2);  /* 0C079D4C mov.b Rm,@Rn */
	{ W8(r8, r11); /* slot mov.b Rm,@Rn */ UPD(0x0C079CAEu, 3); goto L_0C079CAE; }  /* 0C079D4E bra */
L_0C079D60: BLKS(0x0C079D60u);
	r0 = 0xC28EDFCu; UPD(0x0C079D62u, 1);  /* 0C079D60 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C079D64u, 1);  /* 0C079D62 mov.w @Rm,Rn */
	r3 = 0x1u;  /* 0C079D64 mov #imm,Rn */
	IF(0x0C079D66u); MACL = r5 * r13;  /* 0C079D66 mul.l Rm,Rn */
	r7 = R32(r14 + 0xCu); UPD(0x0C079D6Au, 4);  /* 0C079D68 mov.l @(disp,Rm),Rn */
	r8 = 0xFu;  /* 0C079D6A mov #imm,Rn */
	IF(0x0C079D6Cu); r13 = MACL;  /* 0C079D6C sts macl,Rn */
	r1 = 0xC229004u; UPD(0x0C079D70u, 3);  /* 0C079D6E mov.l @(disp,pc),Rn */
	r13 += r7;  /* 0C079D70 add Rm,Rn */
	r4 = R32(r9 + 0x4u); UPD(0x0C079D74u, 2);  /* 0C079D72 mov.l @(disp,Rm),Rn */
	r13 += r1;  /* 0C079D74 add Rm,Rn */
	r0 = 0xC079E80u; UPD(0x0C079D78u, 2);  /* 0C079D76 mov.l @(disp,pc),Rn */
	r6 = 0xC0000000u; UPD(0x0C079D7Au, 1);  /* 0C079D78 mov.l @(disp,pc),Rn */
	W32(r13 + 0x4u, r4); UPD(0x0C079D7Cu, 1);  /* 0C079D7A mov.l Rm,@(disp,Rn) */
	W32(r13, r6); UPD(0x0C079D7Eu, 1);  /* 0C079D7C mov.l Rm,@Rn */
	r4 = r10;  /* 0C079D7E mov Rm,Rn */
	W32(r13 + 0x8u, r3); UPD(0x0C079D82u, 2);  /* 0C079D80 mov.l Rm,@(disp,Rn) */
	IF(0x0C079D82u); { u32 t_ = r0; PR = 0x0C079D86u; W32(r13 + 0xCu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C079D86u); }  /* 0C079D82 jsr @Rn */
L_0C079D86: BLKS(0x0C079D86u);
	r2 = 0x2048080u; UPD(0x0C079D88u, 1);  /* 0C079D86 mov.l @(disp,pc),Rn */
	r6 = r13;  /* 0C079D88 mov Rm,Rn */
	r7 = 0x808080u; UPD(0x0C079D8Cu, 2);  /* 0C079D8A mov.l @(disp,pc),Rn */
	r6 += 0x40u;  /* 0C079D8C add #imm,Rn */
	r3 = R32(r9 + 0x24u); UPD(0x0C079D90u, 2);  /* 0C079D8E mov.l @(disp,Rm),Rn */
	r5 = r13;  /* 0C079D90 mov Rm,Rn */
	r8 = R32(r9 + 0x28u); UPD(0x0C079D94u, 2);  /* 0C079D92 mov.l @(disp,Rm),Rn */
	r0 = r13;  /* 0C079D94 mov Rm,Rn */
	W32(r13 + 0x3Cu, r2); UPD(0x0C079D98u, 2);  /* 0C079D96 mov.l Rm,@(disp,Rn) */
	r9 += 0x4Au;  /* 0C079D98 add #imm,Rn */
	W32(r6, r7); UPD(0x0C079D9Cu, 2);  /* 0C079D9A mov.l Rm,@Rn */
	r2 = 0x0u;  /* 0C079D9C mov #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C079DA0u, 2);  /* 0C079D9E mov.b @Rm,Rn */
	r4 = 0x0u;  /* 0C079DA0 mov #imm,Rn */
	W32(r13 + 0x2Cu, r3); UPD(0x0C079DA4u, 2);  /* 0C079DA2 mov.l Rm,@(disp,Rn) */
	r5 += 0x48u;  /* 0C079DA4 add #imm,Rn */
	W32(r13 + 0x24u, r3); UPD(0x0C079DA8u, 2);  /* 0C079DA6 mov.l Rm,@(disp,Rn) */
	r6 += 0x9u;  /* 0C079DA8 add #imm,Rn */
	W32(r13 + 0x30u, r8); UPD(0x0C079DACu, 2);  /* 0C079DAA mov.l Rm,@(disp,Rn) */
	r0 += 0x44u;  /* 0C079DAC add #imm,Rn */
	W32(r13 + 0x28u, r8); UPD(0x0C079DB0u, 2);  /* 0C079DAE mov.l Rm,@(disp,Rn) */
	r7 += 0x1u;  /* 0C079DB0 add #imm,Rn */
	W32(r13 + 0x34u, r2); UPD(0x0C079DB4u, 2);  /* 0C079DB2 mov.l Rm,@(disp,Rn) */
	r9 += 0xFFFFFFB6u;  /* 0C079DB4 add #imm,Rn */
	r13 += 0x4Au;  /* 0C079DB6 add #imm,Rn */
	W8(r6, r4); UPD(0x0C079DBAu, 3);  /* 0C079DB8 mov.b Rm,@Rn */
	W8(r5, r4); UPD(0x0C079DBCu, 1);  /* 0C079DBA mov.b Rm,@Rn */
	W16(r0, r11); UPD(0x0C079DBEu, 1);  /* 0C079DBC mov.w Rm,@Rn */
	{ W8(r13, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C079C9Au, 3); goto L_0C079C9A; }  /* 0C079DBE bra */
L_0C079DF0: BLKS(0x0C079DF0u);
	r3 = 0xC28EDFCu; UPD(0x0C079DF2u, 1);  /* 0C079DF0 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r3); UPD(0x0C079DF4u, 1);  /* 0C079DF2 mov.w @Rm,Rn */
	IF(0x0C079DF4u); MACL = r5 * r8;  /* 0C079DF4 mul.l Rm,Rn */
	r1 = 0xC229004u; UPD(0x0C079DF8u, 3);  /* 0C079DF6 mov.l @(disp,pc),Rn */
	r7 = 0xFu;  /* 0C079DF8 mov #imm,Rn */
	IF(0x0C079DFAu); r8 = MACL;  /* 0C079DFA sts macl,Rn */
	r8 += r11;  /* 0C079DFC add Rm,Rn */
	r6 = 0xC079E80u; UPD(0x0C079E00u, 4);  /* 0C079DFE mov.l @(disp,pc),Rn */
	r8 += r1;  /* 0C079E00 add Rm,Rn */
	r0 = R32(r9 + 0x4u); UPD(0x0C079E04u, 2);  /* 0C079E02 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C079E04 mov Rm,Rn */
	r11 = 0xC0000000u; UPD(0x0C079E08u, 2);  /* 0C079E06 mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C079E0Au, 1);  /* 0C079E08 mov.l Rm,@(disp,Rn) */
	W32(r8, r11); UPD(0x0C079E0Cu, 1);  /* 0C079E0A mov.l Rm,@Rn */
	W32(r8 + 0x8u, r2); UPD(0x0C079E0Eu, 1);  /* 0C079E0C mov.l Rm,@(disp,Rn) */
	r11 = r8;  /* 0C079E0E mov Rm,Rn */
	IF(0x0C079E10u); { u32 t_ = r6; PR = 0x0C079E14u; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C079E14u); }  /* 0C079E10 jsr @Rn */
L_0C079E14: BLKS(0x0C079E14u);
	r4 = 0x2048080u; UPD(0x0C079E16u, 1);  /* 0C079E14 mov.l @(disp,pc),Rn */
	r11 += 0x40u;  /* 0C079E16 add #imm,Rn */
	r3 = 0x808080u; UPD(0x0C079E1Au, 2);  /* 0C079E18 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C079E1A mov Rm,Rn */
	r2 = R32(r9 + 0x24u); UPD(0x0C079E1Eu, 2);  /* 0C079E1C mov.l @(disp,Rm),Rn */
	r6 = r8;  /* 0C079E1E mov Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C079E22u, 2);  /* 0C079E20 mov.l @(disp,Rm),Rn */
	r0 = 0x0u;  /* 0C079E22 mov #imm,Rn */
	W32(r8 + 0x3Cu, r4); UPD(0x0C079E26u, 2);  /* 0C079E24 mov.l Rm,@(disp,Rn) */
	r9 += 0x4Au;  /* 0C079E26 add #imm,Rn */
	W32(r11, r3); UPD(0x0C079E2Au, 2);  /* 0C079E28 mov.l Rm,@Rn */
	r4 = 0x0u;  /* 0C079E2A mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C079E2Eu, 2);  /* 0C079E2C mov.b @Rm,Rn */
	r5 += 0x48u;  /* 0C079E2E add #imm,Rn */
	W32(r8 + 0x2Cu, r2); UPD(0x0C079E32u, 2);  /* 0C079E30 mov.l Rm,@(disp,Rn) */
	r11 += 0x9u;  /* 0C079E32 add #imm,Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C079E36u, 2);  /* 0C079E34 mov.l Rm,@(disp,Rn) */
	r6 += 0x44u;  /* 0C079E36 add #imm,Rn */
	W32(r8 + 0x30u, r7); UPD(0x0C079E3Au, 2);  /* 0C079E38 mov.l Rm,@(disp,Rn) */
	r3 += 0x1u;  /* 0C079E3A add #imm,Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C079E3Eu, 2);  /* 0C079E3C mov.l Rm,@(disp,Rn) */
	r9 += 0xFFFFFFB6u;  /* 0C079E3E add #imm,Rn */
	W32(r8 + 0x34u, r4); UPD(0x0C079E42u, 2);  /* 0C079E40 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Au;  /* 0C079E42 add #imm,Rn */
	W8(r11, r0); UPD(0x0C079E46u, 2);  /* 0C079E44 mov.b Rm,@Rn */
	W8(r5, r0); UPD(0x0C079E48u, 1);  /* 0C079E46 mov.b Rm,@Rn */
	W16(r6, r13); UPD(0x0C079E4Au, 1);  /* 0C079E48 mov.w Rm,@Rn */
	{ W8(r8, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C079C7Cu, 3); goto L_0C079C7C; }  /* 0C079E4A bra */
L_0C079E50: BLKS(0x0C079E50u);
	r0 = 0x2800u; UPD(0x0C079E52u, 1);  /* 0C079E50 mov.w @(disp,pc),Rn */
	r6 = 0x50u;  /* 0C079E52 mov #imm,Rn */
	IF(0x0C079E54u); MACL = r10 * r0;  /* 0C079E54 mul.l Rm,Rn */
	r11 = 0xC229004u; UPD(0x0C079E58u, 4);  /* 0C079E56 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C079E58 mov #imm,Rn */
	IF(0x0C079E5Au); r0 = MACL;  /* 0C079E5A sts macl,Rn */
	IF(0x0C079E5Cu); MACL = r12 * r6;  /* 0C079E5C mul.l Rm,Rn */
	IF(0x0C079E5Eu); r8 = MACL;  /* 0C079E5E sts macl,Rn */
	r0 += r8;  /* 0C079E60 add Rm,Rn */
	{ IF(0x0C079E64u); W32(r0 + r11, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C079980u, 9); goto L_0C079980; }  /* 0C079E62 bra */
}

/* FUN_0c079e80 */
void blk_f_0C079E80(sh3_t *c)
{
	LOCALS;
L_0C079E80: BLKS(0x0C079E80u);
	r0 = 0x2800u; UPD(0x0C079E82u, 1);  /* 0C079E80 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C079E82 exts.w Rm,Rn */
	IF(0x0C079E84u); MACL = r1 * r0;  /* 0C079E84 mul.l Rm,Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C079E86 exts.w Rm,Rn */
	r7 = 0x50u;  /* 0C079E88 mov #imm,Rn */
	IF(0x0C079E8Au); r0 = MACL;  /* 0C079E8A sts macl,Rn */
	IF(0x0C079E8Cu); MACL = r3 * r7;  /* 0C079E8C mul.l Rm,Rn */
	r6 = 0xC229004u; UPD(0x0C079E90u, 9);  /* 0C079E8E mov.l @(disp,pc),Rn */
	r1 = 0x4u;  /* 0C079E90 mov #imm,Rn */
	IF(0x0C079E92u); r2 = MACL;  /* 0C079E92 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C079E96u, 3);  /* 0C079E94 mov.l Rm,@-Rn */
	r0 += r2;  /* 0C079E96 add Rm,Rn */
	r0 += r6;  /* 0C079E98 add Rm,Rn */
	r2 = R32(r0 + 0x4u); UPD(0x0C079E9Cu, 3);  /* 0C079E9A mov.l @(disp,Rm),Rn */
	r3 = 0x3u;  /* 0C079E9C mov #imm,Rn */
	IF(0x0C079E9Eu); ARG0(0x423Du); { s32 s_ = (s32)r3; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C079E9E shld Rm,Rn */
	r5 = 0xC1866E4u; UPD(0x0C079EA2u, 3);  /* 0C079EA0 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C079EA2 mov Rm,Rn */
	r3 = R32(r0 + 0x8u); UPD(0x0C079EA6u, 2);  /* 0C079EA4 mov.l @(disp,Rm),Rn */
	r2 += r5;  /* 0C079EA6 add Rm,Rn */
	r4 = R32(r2); UPD(0x0C079EAAu, 2);  /* 0C079EA8 mov.l @Rm,Rn */
	IF(0x0C079EAAu); ARG0(0x431Du); { s32 s_ = (s32)r1; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C079EAA shld Rm,Rn */
	W32(r0 + 0x10u, r4); UPD(0x0C079EAEu, 2);  /* 0C079EAC mov.l Rm,@(disp,Rn) */
	r3 += r4;  /* 0C079EAE add Rm,Rn */
	r3 += 0xEu;  /* 0C079EB0 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C079EB4u, 3);  /* 0C079EB2 mov.w @Rm,Rn */
	r0 += 0x38u;  /* 0C079EB4 add #imm,Rn */
	W16(r0, r7); UPD(0x0C079EB8u, 2);  /* 0C079EB6 mov.w Rm,@Rn */
	r3 += 0xFFFFFFF2u;  /* 0C079EB8 add #imm,Rn */
	r6 = R32(r2 + 0x4u); UPD(0x0C079EBCu, 2);  /* 0C079EBA mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFC8u;  /* 0C079EBC add #imm,Rn */
	W32(r0 + 0x20u, r6); UPD(0x0C079EC0u, 2);  /* 0C079EBE mov.l Rm,@(disp,Rn) */
	r5 = 0x3u;  /* 0C079EC0 mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C079EC4u, 2);  /* 0C079EC2 mov.l @Rm,Rn */
	r3 = R32(r0 + 0xCu); UPD(0x0C079EC6u, 1);  /* 0C079EC4 mov.l @(disp,Rm),Rn */
	IF(0x0C079EC6u); ARG0(0x435Du); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C079EC6 shld Rm,Rn */
	W32(r0 + 0x14u, r4); UPD(0x0C079ECAu, 2);  /* 0C079EC8 mov.l Rm,@(disp,Rn) */
	r3 += r4;  /* 0C079ECA add Rm,Rn */
	r1 = R32(r3); UPD(0x0C079ECEu, 2);  /* 0C079ECC mov.l @Rm,Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C079ED0u, 1);  /* 0C079ECE mov.l Rm,@(disp,Rn) */
	r2 = R32(r3 + 0x4u); UPD(0x0C079ED2u, 1);  /* 0C079ED0 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x1Cu, r2); UPD(0x0C079ED4u, 1);  /* 0C079ED2 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C079ED4 mov Rm,Rn */
	IF(0x0C079ED6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C079ED6 rts */
}

/* FUN_0c079ef0 */
void blk_f_0C079EF0(sh3_t *c)
{
	LOCALS;
L_0C079EF0: BLKS(0x0C079EF0u);
	r0 = 0x2800u; UPD(0x0C079EF2u, 1);  /* 0C079EF0 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C079EF2 exts.w Rm,Rn */
	IF(0x0C079EF4u); MACL = r1 * r0;  /* 0C079EF4 mul.l Rm,Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C079EF6 exts.w Rm,Rn */
	r2 = 0x50u;  /* 0C079EF8 mov #imm,Rn */
	IF(0x0C079EFAu); r0 = MACL;  /* 0C079EFA sts macl,Rn */
	IF(0x0C079EFCu); MACL = r3 * r2;  /* 0C079EFC mul.l Rm,Rn */
	r6 = 0xC229004u; UPD(0x0C079F00u, 9);  /* 0C079EFE mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C079F00 mov #imm,Rn */
	IF(0x0C079F02u); r7 = MACL;  /* 0C079F02 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C079F06u, 3);  /* 0C079F04 mov.l Rm,@-Rn */
	r0 += r7;  /* 0C079F06 add Rm,Rn */
	r0 += r6;  /* 0C079F08 add Rm,Rn */
	r3 = R32(r0 + 0xCu); UPD(0x0C079F0Cu, 3);  /* 0C079F0A mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C079F0C mov Rm,Rn */
	r4 = R32(r0 + 0x14u); UPD(0x0C079F10u, 2);  /* 0C079F0E mov.l @(disp,Rm),Rn */
	IF(0x0C079F10u); ARG0(0x435Du); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C079F10 shld Rm,Rn */
	r3 += r4;  /* 0C079F12 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C079F16u, 3);  /* 0C079F14 mov.l @Rm,Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C079F18u, 1);  /* 0C079F16 mov.l Rm,@(disp,Rn) */
	r2 = R32(r3 + 0x4u); UPD(0x0C079F1Au, 1);  /* 0C079F18 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x1Cu, r2); UPD(0x0C079F1Cu, 1);  /* 0C079F1A mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C079F1C mov Rm,Rn */
	IF(0x0C079F1Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C079F1E rts */
}

/* FUN_0c079f30 */
void blk_f_0C079F30(sh3_t *c)
{
	LOCALS;
L_0C079F30: BLKS(0x0C079F30u);
	r0 = 0x2800u; UPD(0x0C079F32u, 1);  /* 0C079F30 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C079F32 exts.w Rm,Rn */
	IF(0x0C079F34u); MACL = r1 * r0;  /* 0C079F34 mul.l Rm,Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C079F36 exts.w Rm,Rn */
	r6 = 0x50u;  /* 0C079F38 mov #imm,Rn */
	IF(0x0C079F3Au); r0 = MACL;  /* 0C079F3A sts macl,Rn */
	IF(0x0C079F3Cu); MACL = r7 * r6;  /* 0C079F3C mul.l Rm,Rn */
	r4 = 0xC229004u; UPD(0x0C079F40u, 9);  /* 0C079F3E mov.l @(disp,pc),Rn */
	r2 = 0x4u;  /* 0C079F40 mov #imm,Rn */
	IF(0x0C079F42u); r5 = MACL;  /* 0C079F42 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C079F46u, 3);  /* 0C079F44 mov.l Rm,@-Rn */
	r0 += r5;  /* 0C079F46 add Rm,Rn */
	r0 += r4;  /* 0C079F48 add Rm,Rn */
	r6 = R32(r0 + 0x8u); UPD(0x0C079F4Cu, 3);  /* 0C079F4A mov.l @(disp,Rm),Rn */
	r5 = 0x3u;  /* 0C079F4C mov #imm,Rn */
	r3 = R32(r0 + 0x10u); UPD(0x0C079F50u, 2);  /* 0C079F4E mov.l @(disp,Rm),Rn */
	IF(0x0C079F50u); ARG0(0x462Du); { s32 s_ = (s32)r2; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C079F50 shld Rm,Rn */
	r6 += r3;  /* 0C079F52 add Rm,Rn */
	r6 += 0xEu;  /* 0C079F54 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r6); UPD(0x0C079F58u, 4);  /* 0C079F56 mov.w @Rm,Rn */
	r0 += 0x38u;  /* 0C079F58 add #imm,Rn */
	W16(r0, r7); UPD(0x0C079F5Cu, 2);  /* 0C079F5A mov.w Rm,@Rn */
	r6 += 0xFFFFFFF2u;  /* 0C079F5C add #imm,Rn */
	r0 += 0xFFFFFFC8u;  /* 0C079F5E add #imm,Rn */
	r3 = R32(r0 + 0xCu); UPD(0x0C079F62u, 3);  /* 0C079F60 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C079F62 mov Rm,Rn */
	r4 = R32(r6); UPD(0x0C079F66u, 2);  /* 0C079F64 mov.l @Rm,Rn */
	IF(0x0C079F66u); ARG0(0x435Du); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C079F66 shld Rm,Rn */
	W32(r0 + 0x14u, r4); UPD(0x0C079F6Au, 2);  /* 0C079F68 mov.l Rm,@(disp,Rn) */
	r3 += r4;  /* 0C079F6A add Rm,Rn */
	r1 = R32(r3); UPD(0x0C079F6Eu, 2);  /* 0C079F6C mov.l @Rm,Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C079F70u, 1);  /* 0C079F6E mov.l Rm,@(disp,Rn) */
	r2 = R32(r3 + 0x4u); UPD(0x0C079F72u, 1);  /* 0C079F70 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x1Cu, r2); UPD(0x0C079F74u, 1);  /* 0C079F72 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C079F74 mov Rm,Rn */
	IF(0x0C079F76u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C079F76 rts */
}

/* FUN_0c079f80 */
void blk_f_0C079F80(sh3_t *c)
{
	LOCALS;
L_0C079F80: BLKS(0x0C079F80u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C079F82u, 1);  /* 0C079F80 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C079F82 exts.w Rm,Rn */
	r0 = 0x400u; UPD(0x0C079F86u, 2);  /* 0C079F84 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C079F86 mov Rm,Rn */
	r7 = 0xC28EDFCu; UPD(0x0C079F8Au, 2);  /* 0C079F88 mov.l @(disp,pc),Rn */
	T = (s32)r5 > (s32)r0;  /* 0C079F8A cmp/gt Rm,Rn */
	{ u32 c_ = T; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C079FC2u, 4); goto L_0C079FC2; } goto L_0C079F90; }  /* 0C079F8C bt/s */
L_0C079F90: BLKS(0x0C079F90u);
	r2 = 0x2800u; UPD(0x0C079F92u, 2);  /* 0C079F90 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C079F92 mov #imm,Rn */
	IF(0x0C079F94u); MACL = r4 * r2;  /* 0C079F94 mul.l Rm,Rn */
	r0 = 0xC229004u; UPD(0x0C079F98u, 4);  /* 0C079F96 mov.l @(disp,pc),Rn */
	r6 = 0x7Fu;  /* 0C079F98 mov #imm,Rn */
	IF(0x0C079F9Au); r2 = MACL;  /* 0C079F9A sts macl,Rn */
	r2 += r0;  /* 0C079F9C add Rm,Rn */
	IF(0x0C079F9Eu); ;  /* 0C079F9E nop */
	UPD(0x0C079FA0u, 4);
L_0C079FA0: BLKS(0x0C079FA0u);
	r4 = R32(r2); UPD(0x0C079FA2u, 1);  /* 0C079FA0 mov.l @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C079FA2 tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0x50u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C079FB8u, 4); goto L_0C079FB8; } goto L_0C079FA8; }  /* 0C079FA4 bf/s */
L_0C079FA8: BLKS(0x0C079FA8u);
	r0 = r5;  /* 0C079FA8 mov Rm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C079FAA add #imm,Rn */
	W16(r7, r3); UPD(0x0C079FAEu, 4);  /* 0C079FAC mov.w Rm,@Rn */
	r5 = (u32)(s32)(s16)r0;  /* 0C079FAE exts.w Rm,Rn */
	r7 += 0x2u;  /* 0C079FB0 add #imm,Rn */
	T = (r5 & r5) == 0;  /* 0C079FB2 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C079FC4u, 6); goto L_0C079FC4; } UPD(0x0C079FB8u, 1); goto L_0C079FB8; }  /* 0C079FB4 bt/s */
L_0C079FB8: BLKS(0x0C079FB8u);
	r4 = r3;  /* 0C079FB8 mov Rm,Rn */
	r4 += 0x1u;  /* 0C079FBA add #imm,Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C079FBC exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C079FBE cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C079FA0u, 7); goto L_0C079FA0; }  /* 0C079FC0 bf */
L_0C079FC2: BLKS(0x0C079FC2u);
	r0 = 0x0u;  /* 0C079FC2 mov #imm,Rn */
	UPD(0x0C079FC4u, 1);
L_0C079FC4: BLKS(0x0C079FC4u);
	r15 = r14;  /* 0C079FC4 mov Rm,Rn */
	IF(0x0C079FC6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C079FC6 rts */
}

void blk_f_0C07A100(sh3_t *c)
{
	LOCALS;
L_0C07A100: BLKS(0x0C07A100u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07A102u, 1);  /* 0C07A100 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C07A102 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07A106u, 2);  /* 0C07A104 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07A108u, 1);  /* 0C07A106 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07A10Au, 1);  /* 0C07A108 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07A10Cu, 1);  /* 0C07A10A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07A10Eu, 1);  /* 0C07A10C mov.l Rm,@-Rn */
	r5 = 0x2A0u; UPD(0x0C07A110u, 1);  /* 0C07A10E mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07A112u, 1);  /* 0C07A110 mov.l Rm,@-Rn */
	IF(0x0C07A112u); MACL = r4 * r5;  /* 0C07A112 mul.l Rm,Rn */
	IF(0x0C07A114u); r15 -= 4; W32(r15, PR); UPD(0x0C07A116u, 3);  /* 0C07A114 sts.l pr,@-Rn */
	r1 = 0xC28EDFCu; UPD(0x0C07A118u, 1);  /* 0C07A116 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C07A118 add #imm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C07A11Cu, 2);  /* 0C07A11A mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07A11C mov Rm,Rn */
	IF(0x0C07A11Eu); r8 = MACL;  /* 0C07A11E sts macl,Rn */
	W32(r14, r4); UPD(0x0C07A122u, 3);  /* 0C07A120 mov.l Rm,@Rn */
	r8 += r0;  /* 0C07A122 add Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C07A126u, 2);  /* 0C07A124 mov.l Rm,@(disp,Rn) */
	r0 = r8;  /* 0C07A126 mov Rm,Rn */
	r3 = 0x266u; UPD(0x0C07A12Au, 2);  /* 0C07A128 mov.w @(disp,pc),Rn */
	r9 = 0xC079F80u; UPD(0x0C07A12Cu, 1);  /* 0C07A12A mov.l @(disp,pc),Rn */
	IF(0x0C07A12Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07A12Eu, 1);  /* 0C07A12C mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C07A12E extu.b Rm,Rn */
	IF(0x0C07A130u); { u32 t_ = r9; PR = 0x0C07A134u; r5 += r5; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C07A134u); }  /* 0C07A130 jsr @Rn */
L_0C07A134: BLKS(0x0C07A134u);
	T = (r0 & r0) == 0;  /* 0C07A134 tst Rm,Rn */
	if (!T) { UPD(0x0C07A13Eu, 4); goto L_0C07A13E; }  /* 0C07A136 bf */
L_0C07A138: BLKS(0x0C07A138u);
	r14 += 0xCu;  /* 0C07A138 add #imm,Rn */
	{ IF(0x0C07A13Cu); ; /* slot nop */ UPD(0x0C07A22Eu, 4); goto L_0C07A22E; }  /* 0C07A13A bra */
L_0C07A13E: BLKS(0x0C07A13Eu);
	r4 = 0x0u;  /* 0C07A13E mov #imm,Rn */
	W32(r14 + 0x8u, r4); UPD(0x0C07A142u, 2);  /* 0C07A140 mov.l Rm,@(disp,Rn) */
	r13 = r8;  /* 0C07A142 mov Rm,Rn */
	UPD(0x0C07A144u, 1);
L_0C07A144: BLKS(0x0C07A144u);
	r3 = 0x264u; UPD(0x0C07A146u, 1);  /* 0C07A144 mov.w @(disp,pc),Rn */
	r12 = r13;  /* 0C07A146 mov Rm,Rn */
	r12 += r3;  /* 0C07A148 add Rm,Rn */
	r12 += 0x2u;  /* 0C07A14A add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C07A14Eu, 4);  /* 0C07A14C mov.b @Rm,Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C07A150u, 1);  /* 0C07A14E mov.l @(disp,Rm),Rn */
	r10 = r0 & 0xFF;  /* 0C07A150 extu.b Rm,Rn */
	r10 += r10;  /* 0C07A152 add Rm,Rn */
	T = (s32)r2 >= (s32)r10;  /* 0C07A154 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C07A210u, 6); goto L_0C07A210; } UPD(0x0C07A15Au, 1); goto L_0C07A15A; }  /* 0C07A156 bt/s */
L_0C07A15A: BLKS(0x0C07A15Au);
	r7 = 0x50u;  /* 0C07A15A mov #imm,Rn */
	r8 = 0x2800u; UPD(0x0C07A15Eu, 2);  /* 0C07A15C mov.w @(disp,pc),Rn */
	r11 = R32(r14 + 0x4u); UPD(0x0C07A160u, 1);  /* 0C07A15E mov.l @(disp,Rm),Rn */
	IF(0x0C07A160u); MACL = r1 * r8;  /* 0C07A160 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r10 = v_; } UPD(0x0C07A164u, 3);  /* 0C07A162 mov.w @Rm+,Rn */
	IF(0x0C07A164u); r8 = MACL;  /* 0C07A164 sts macl,Rn */
	IF(0x0C07A166u); MACL = r10 * r7;  /* 0C07A166 mul.l Rm,Rn */
	r4 = 0xC229004u; UPD(0x0C07A16Au, 4);  /* 0C07A168 mov.l @(disp,pc),Rn */
	IF(0x0C07A16Au); r6 = MACL;  /* 0C07A16A sts macl,Rn */
	r8 += r6;  /* 0C07A16C add Rm,Rn */
	r9 = 0xCD800000u; UPD(0x0C07A170u, 3);  /* 0C07A16E mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C07A170 add Rm,Rn */
	W32(r8, r9); UPD(0x0C07A174u, 2);  /* 0C07A172 mov.l Rm,@Rn */
	r4 = 0xFu;  /* 0C07A174 mov #imm,Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C07A178u, 2);  /* 0C07A176 mov.l @(disp,Rm),Rn */
	r9 = 0xFu;  /* 0C07A178 mov #imm,Rn */
	r3 = 0xC062780u; UPD(0x0C07A17Cu, 2);  /* 0C07A17A mov.l @(disp,pc),Rn */
	r9 &= r5;  /* 0C07A17C and Rm,Rn */
	r0 = 0xC1867B8u; UPD(0x0C07A180u, 2);  /* 0C07A17E mov.l @(disp,pc),Rn */
	r9 += r9;  /* 0C07A180 add Rm,Rn */
	W32(r14 + 0x4u, r11); UPD(0x0C07A184u, 2);  /* 0C07A182 mov.l Rm,@(disp,Rn) */
	IF(0x0C07A184u); { u32 t_ = r3; PR = 0x0C07A188u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07A188u); }  /* 0C07A184 jsr @Rn */
L_0C07A188: BLKS(0x0C07A188u);
	r11 = (u32)(s32)(s16)R16(r9); UPD(0x0C07A18Au, 1);  /* 0C07A188 mov.w @Rm,Rn */
	r8 += 0x44u;  /* 0C07A18A add #imm,Rn */
	r0 += r11;  /* 0C07A18C add Rm,Rn */
	r0 += 0xFFFFFFF8u;  /* 0C07A18E add #imm,Rn */
	W16(r8, r0); UPD(0x0C07A192u, 4);  /* 0C07A190 mov.w Rm,@Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C07A192 exts.w Rm,Rn */
	r0 = r0 & 0xFFFF;  /* 0C07A194 extu.w Rm,Rn */
	r0 += 0x4u;  /* 0C07A196 add #imm,Rn */
	r7 = 0xC079E80u; UPD(0x0C07A19Au, 4);  /* 0C07A198 mov.l @(disp,pc),Rn */
	IF(0x0C07A19Au); r0 >>= 2;  /* 0C07A19A shlr2 Rn */
	IF(0x0C07A19Cu); T = r0 & 1; r0 >>= 1;  /* 0C07A19C shlr Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07A19E add #imm,Rn */
	r2 = 0x3u;  /* 0C07A1A0 mov #imm,Rn */
	r1 = 0x0u;  /* 0C07A1A2 mov #imm,Rn */
	r0 &= 0x3Fu;  /* 0C07A1A4 and #imm,r0 */
	W32(r8 + 0x4u, r2); UPD(0x0C07A1A8u, 7);  /* 0C07A1A6 mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C07A1A8 mov Rm,Rn */
	W32(r8 + 0xCu, r1); UPD(0x0C07A1ACu, 2);  /* 0C07A1AA mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r0); UPD(0x0C07A1AEu, 1);  /* 0C07A1AC mov.l Rm,@(disp,Rn) */
	IF(0x0C07A1AEu); { u32 t_ = r7; PR = 0x0C07A1B2u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07A1B2u); }  /* 0C07A1AE jsr @Rn */
L_0C07A1B2: BLKS(0x0C07A1B2u);
	r6 = R32(r13 + 0x10u); UPD(0x0C07A1B4u, 1);  /* 0C07A1B2 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C07A1B6u, 1);  /* 0C07A1B4 mov.l Rm,@(disp,Rn) */
	r4 = R32(r13 + 0x14u); UPD(0x0C07A1B8u, 1);  /* 0C07A1B6 mov.l @(disp,Rm),Rn */
	r5 = 0xC062780u; UPD(0x0C07A1BAu, 1);  /* 0C07A1B8 mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C07A1BCu, 1);  /* 0C07A1BA mov.l Rm,@(disp,Rn) */
	r10 = 0x8000u; UPD(0x0C07A1BEu, 1);  /* 0C07A1BC mov.l @(disp,pc),Rn */
	IF(0x0C07A1BEu); { u32 t_ = r5; PR = 0x0C07A1C2u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07A1C2u); }  /* 0C07A1BE jsr @Rn */
L_0C07A1C2: BLKS(0x0C07A1C2u);
	r9 = r0;  /* 0C07A1C2 mov Rm,Rn */
	r9 += r10;  /* 0C07A1C4 add Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C07A1C8u, 3);  /* 0C07A1C6 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07A1C8 mov Rm,Rn */
	IF(0x0C07A1CAu); { u32 t_ = r10; PR = 0x0C07A1CEu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07A1CEu); }  /* 0C07A1CA jsr @Rn */
L_0C07A1CE: BLKS(0x0C07A1CEu);
	r5 = r9;  /* 0C07A1CE mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C07A1D2u, 2);  /* 0C07A1D0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07A1D2 mov Rm,Rn */
	IF(0x0C07A1D4u); { u32 t_ = r9; PR = 0x0C07A1D8u; W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07A1D8u); }  /* 0C07A1D4 jsr @Rn */
L_0C07A1D8: BLKS(0x0C07A1D8u);
	W32(r8 + 0x30u, r0); UPD(0x0C07A1DAu, 1);  /* 0C07A1D8 mov.l Rm,@(disp,Rn) */
	r11 = 0x14u;  /* 0C07A1DA mov #imm,Rn */
	r8 += 0x48u;  /* 0C07A1DC add #imm,Rn */
	r0 = 0x0u;  /* 0C07A1DE mov #imm,Rn */
	W8(r8, r0); UPD(0x0C07A1E2u, 4);  /* 0C07A1E0 mov.b Rm,@Rn */
	r10 = 0x0u;  /* 0C07A1E2 mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C07A1E6u, 2);  /* 0C07A1E4 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C07A1E6 add #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C07A1E8 extu.b Rm,Rn */
	r12 = 0xC062780u; UPD(0x0C07A1ECu, 3);  /* 0C07A1EA mov.l @(disp,pc),Rn */
	r4 = r2;  /* 0C07A1EC mov Rm,Rn */
	IF(0x0C07A1EEu); r4 <<= 2;  /* 0C07A1EE shll2 Rn */
	IF(0x0C07A1F0u); { u32 t_ = r12; PR = 0x0C07A1F4u; r4 += r2; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07A1F4u); }  /* 0C07A1F0 jsr @Rn */
L_0C07A1F4: BLKS(0x0C07A1F4u);
	r0 += 0x1u;  /* 0C07A1F4 add #imm,Rn */
	W8(r8, r0); UPD(0x0C07A1F8u, 2);  /* 0C07A1F6 mov.b Rm,@Rn */
	r8 += 0x1u;  /* 0C07A1F8 add #imm,Rn */
	W8(r8, r11); UPD(0x0C07A1FCu, 2);  /* 0C07A1FA mov.b Rm,@Rn */
	r8 += 0xFFFFFFB6u;  /* 0C07A1FC add #imm,Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C07A200u, 2);  /* 0C07A1FE mov.l @(disp,Rm),Rn */
	W32(r8 + 0x3Cu, r10); UPD(0x0C07A202u, 1);  /* 0C07A200 mov.l Rm,@(disp,Rn) */
	r7 += 0x1u;  /* 0C07A202 add #imm,Rn */
	r9 = 0x808080u; UPD(0x0C07A206u, 2);  /* 0C07A204 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07A206 add #imm,Rn */
	r6 = (u32)(s32)(s16)r7;  /* 0C07A208 exts.w Rm,Rn */
	W32(r8, r9); UPD(0x0C07A20Cu, 3);  /* 0C07A20A mov.l Rm,@Rn */
	{ W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07A144u, 3); goto L_0C07A144; }  /* 0C07A20C bra */
L_0C07A210: BLKS(0x0C07A210u);
	r4 = R32(r14); UPD(0x0C07A212u, 1);  /* 0C07A210 mov.l @Rm,Rn */
	r9 = 0x2A0u; UPD(0x0C07A214u, 1);  /* 0C07A212 mov.w @(disp,pc),Rn */
	IF(0x0C07A214u); MACL = r4 * r9;  /* 0C07A214 mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C07A218u, 3);  /* 0C07A216 mov.l @(disp,pc),Rn */
	IF(0x0C07A218u); r12 = MACL;  /* 0C07A218 sts macl,Rn */
	r12 += r5;  /* 0C07A21A add Rm,Rn */
	r12 += r3;  /* 0C07A21C add Rm,Rn */
	r12 += 0x2u;  /* 0C07A21E add #imm,Rn */
	r3 = 0x0u;  /* 0C07A220 mov #imm,Rn */
	r13 = 0xC0C20A0u; UPD(0x0C07A224u, 6);  /* 0C07A222 mov.l @(disp,pc),Rn */
	r5 = 0x53u;  /* 0C07A224 mov #imm,Rn */
	W8(r12, r3); UPD(0x0C07A228u, 2);  /* 0C07A226 mov.b Rm,@Rn */
	IF(0x0C07A228u); { u32 t_ = r13; PR = 0x0C07A22Cu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C07A22Cu); }  /* 0C07A228 jsr @Rn */
L_0C07A22C: BLKS(0x0C07A22Cu);
	r14 += 0xCu;  /* 0C07A22C add #imm,Rn */
	UPD(0x0C07A22Eu, 1);
L_0C07A22E: BLKS(0x0C07A22Eu);
	r15 = r14;  /* 0C07A22E mov Rm,Rn */
	IF(0x0C07A230u); PR = R32(r15); r15 += 4; UPD(0x0C07A232u, 2);  /* 0C07A230 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A234u, 1);  /* 0C07A232 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07A236u, 1);  /* 0C07A234 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A238u, 1);  /* 0C07A236 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A23Au, 1);  /* 0C07A238 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A23Cu, 1);  /* 0C07A23A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A23Eu, 1);  /* 0C07A23C mov.l @Rm+,Rn */
	IF(0x0C07A23Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07A23E rts */
}

void blk_f_0C07A280(sh3_t *c)
{
	LOCALS;
L_0C07A280: BLKS(0x0C07A280u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07A282u, 1);  /* 0C07A280 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C07A282 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07A286u, 2);  /* 0C07A284 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07A288u, 1);  /* 0C07A286 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07A28Au, 1);  /* 0C07A288 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07A28Cu, 1);  /* 0C07A28A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07A28Eu, 1);  /* 0C07A28C mov.l Rm,@-Rn */
	r5 = 0x2A0u; UPD(0x0C07A290u, 1);  /* 0C07A28E mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07A292u, 1);  /* 0C07A290 mov.l Rm,@-Rn */
	IF(0x0C07A292u); MACL = r4 * r5;  /* 0C07A292 mul.l Rm,Rn */
	IF(0x0C07A294u); r15 -= 4; W32(r15, PR); UPD(0x0C07A296u, 3);  /* 0C07A294 sts.l pr,@-Rn */
	r1 = 0xC28EDFCu; UPD(0x0C07A298u, 1);  /* 0C07A296 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C07A298 add #imm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C07A29Cu, 2);  /* 0C07A29A mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07A29C mov Rm,Rn */
	IF(0x0C07A29Eu); r8 = MACL;  /* 0C07A29E sts macl,Rn */
	W32(r14, r4); UPD(0x0C07A2A2u, 3);  /* 0C07A2A0 mov.l Rm,@Rn */
	r8 += r0;  /* 0C07A2A2 add Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C07A2A6u, 2);  /* 0C07A2A4 mov.l Rm,@(disp,Rn) */
	r0 = r8;  /* 0C07A2A6 mov Rm,Rn */
	r3 = 0x266u; UPD(0x0C07A2AAu, 2);  /* 0C07A2A8 mov.w @(disp,pc),Rn */
	r9 = 0xC079F80u; UPD(0x0C07A2ACu, 1);  /* 0C07A2AA mov.l @(disp,pc),Rn */
	IF(0x0C07A2ACu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07A2AEu, 1);  /* 0C07A2AC mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C07A2AE extu.b Rm,Rn */
	IF(0x0C07A2B0u); { u32 t_ = r9; PR = 0x0C07A2B4u; r5 += r5; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C07A2B4u); }  /* 0C07A2B0 jsr @Rn */
L_0C07A2B4: BLKS(0x0C07A2B4u);
	T = (r0 & r0) == 0;  /* 0C07A2B4 tst Rm,Rn */
	{ u32 c_ = !T; r4 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A2BEu, 4); goto L_0C07A2BE; } goto L_0C07A2BA; }  /* 0C07A2B6 bf/s */
L_0C07A2BA: BLKS(0x0C07A2BAu);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07A3C0u, 4); goto L_0C07A3C0; }  /* 0C07A2BA bra */
L_0C07A2BE: BLKS(0x0C07A2BEu);
	W32(r14 + 0x8u, r4); UPD(0x0C07A2C0u, 1);  /* 0C07A2BE mov.l Rm,@(disp,Rn) */
	r13 = r8;  /* 0C07A2C0 mov Rm,Rn */
	IF(0x0C07A2C2u); ;  /* 0C07A2C2 nop */
	UPD(0x0C07A2C4u, 2);
L_0C07A2C4: BLKS(0x0C07A2C4u);
	r3 = 0x264u; UPD(0x0C07A2C6u, 1);  /* 0C07A2C4 mov.w @(disp,pc),Rn */
	r12 = r13;  /* 0C07A2C6 mov Rm,Rn */
	r12 += r3;  /* 0C07A2C8 add Rm,Rn */
	r12 += 0x2u;  /* 0C07A2CA add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C07A2CEu, 4);  /* 0C07A2CC mov.b @Rm,Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C07A2D0u, 1);  /* 0C07A2CE mov.l @(disp,Rm),Rn */
	r10 = r0 & 0xFF;  /* 0C07A2D0 extu.b Rm,Rn */
	r10 += r10;  /* 0C07A2D2 add Rm,Rn */
	T = (s32)r2 >= (s32)r10;  /* 0C07A2D4 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C07A390u, 6); goto L_0C07A390; } UPD(0x0C07A2DAu, 1); goto L_0C07A2DA; }  /* 0C07A2D6 bt/s */
L_0C07A2DA: BLKS(0x0C07A2DAu);
	r7 = 0x50u;  /* 0C07A2DA mov #imm,Rn */
	r8 = 0x2800u; UPD(0x0C07A2DEu, 2);  /* 0C07A2DC mov.w @(disp,pc),Rn */
	r11 = R32(r14 + 0x4u); UPD(0x0C07A2E0u, 1);  /* 0C07A2DE mov.l @(disp,Rm),Rn */
	IF(0x0C07A2E0u); MACL = r1 * r8;  /* 0C07A2E0 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r10 = v_; } UPD(0x0C07A2E4u, 3);  /* 0C07A2E2 mov.w @Rm+,Rn */
	IF(0x0C07A2E4u); r8 = MACL;  /* 0C07A2E4 sts macl,Rn */
	IF(0x0C07A2E6u); MACL = r10 * r7;  /* 0C07A2E6 mul.l Rm,Rn */
	r4 = 0xC229004u; UPD(0x0C07A2EAu, 4);  /* 0C07A2E8 mov.l @(disp,pc),Rn */
	IF(0x0C07A2EAu); r6 = MACL;  /* 0C07A2EA sts macl,Rn */
	r8 += r6;  /* 0C07A2EC add Rm,Rn */
	r9 = 0xCD800000u; UPD(0x0C07A2F0u, 3);  /* 0C07A2EE mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C07A2F0 add Rm,Rn */
	W32(r8, r9); UPD(0x0C07A2F4u, 2);  /* 0C07A2F2 mov.l Rm,@Rn */
	r4 = 0xDu;  /* 0C07A2F4 mov #imm,Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C07A2F8u, 2);  /* 0C07A2F6 mov.l @(disp,Rm),Rn */
	r9 = 0xFu;  /* 0C07A2F8 mov #imm,Rn */
	r3 = 0xC062780u; UPD(0x0C07A2FCu, 2);  /* 0C07A2FA mov.l @(disp,pc),Rn */
	r9 &= r5;  /* 0C07A2FC and Rm,Rn */
	r0 = 0xC1867D8u; UPD(0x0C07A300u, 2);  /* 0C07A2FE mov.l @(disp,pc),Rn */
	r9 += r9;  /* 0C07A300 add Rm,Rn */
	W32(r14 + 0x4u, r11); UPD(0x0C07A304u, 2);  /* 0C07A302 mov.l Rm,@(disp,Rn) */
	IF(0x0C07A304u); { u32 t_ = r3; PR = 0x0C07A308u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07A308u); }  /* 0C07A304 jsr @Rn */
L_0C07A308: BLKS(0x0C07A308u);
	r11 = (u32)(s32)(s16)R16(r9); UPD(0x0C07A30Au, 1);  /* 0C07A308 mov.w @Rm,Rn */
	r8 += 0x44u;  /* 0C07A30A add #imm,Rn */
	r0 += r11;  /* 0C07A30C add Rm,Rn */
	r0 += 0xFFFFFFFAu;  /* 0C07A30E add #imm,Rn */
	W16(r8, r0); UPD(0x0C07A312u, 4);  /* 0C07A310 mov.w Rm,@Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C07A312 exts.w Rm,Rn */
	r0 = r0 & 0xFFFF;  /* 0C07A314 extu.w Rm,Rn */
	r0 += 0x4u;  /* 0C07A316 add #imm,Rn */
	r7 = 0xC079E80u; UPD(0x0C07A31Au, 4);  /* 0C07A318 mov.l @(disp,pc),Rn */
	IF(0x0C07A31Au); r0 >>= 2;  /* 0C07A31A shlr2 Rn */
	IF(0x0C07A31Cu); T = r0 & 1; r0 >>= 1;  /* 0C07A31C shlr Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07A31E add #imm,Rn */
	r2 = 0x3u;  /* 0C07A320 mov #imm,Rn */
	r1 = 0x0u;  /* 0C07A322 mov #imm,Rn */
	r0 &= 0x3Fu;  /* 0C07A324 and #imm,r0 */
	W32(r8 + 0x4u, r2); UPD(0x0C07A328u, 7);  /* 0C07A326 mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C07A328 mov Rm,Rn */
	W32(r8 + 0xCu, r1); UPD(0x0C07A32Cu, 2);  /* 0C07A32A mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r0); UPD(0x0C07A32Eu, 1);  /* 0C07A32C mov.l Rm,@(disp,Rn) */
	IF(0x0C07A32Eu); { u32 t_ = r7; PR = 0x0C07A332u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07A332u); }  /* 0C07A32E jsr @Rn */
L_0C07A332: BLKS(0x0C07A332u);
	r6 = R32(r13 + 0x10u); UPD(0x0C07A334u, 1);  /* 0C07A332 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C07A336u, 1);  /* 0C07A334 mov.l Rm,@(disp,Rn) */
	r4 = R32(r13 + 0x14u); UPD(0x0C07A338u, 1);  /* 0C07A336 mov.l @(disp,Rm),Rn */
	r5 = 0xC062780u; UPD(0x0C07A33Au, 1);  /* 0C07A338 mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C07A33Cu, 1);  /* 0C07A33A mov.l Rm,@(disp,Rn) */
	r10 = 0x18000u; UPD(0x0C07A33Eu, 1);  /* 0C07A33C mov.l @(disp,pc),Rn */
	IF(0x0C07A33Eu); { u32 t_ = r5; PR = 0x0C07A342u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07A342u); }  /* 0C07A33E jsr @Rn */
L_0C07A342: BLKS(0x0C07A342u);
	r9 = r0;  /* 0C07A342 mov Rm,Rn */
	r9 += r10;  /* 0C07A344 add Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C07A348u, 3);  /* 0C07A346 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07A348 mov Rm,Rn */
	IF(0x0C07A34Au); { u32 t_ = r10; PR = 0x0C07A34Eu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07A34Eu); }  /* 0C07A34A jsr @Rn */
L_0C07A34E: BLKS(0x0C07A34Eu);
	r5 = r9;  /* 0C07A34E mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C07A352u, 2);  /* 0C07A350 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07A352 mov Rm,Rn */
	IF(0x0C07A354u); { u32 t_ = r9; PR = 0x0C07A358u; W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07A358u); }  /* 0C07A354 jsr @Rn */
L_0C07A358: BLKS(0x0C07A358u);
	W32(r8 + 0x30u, r0); UPD(0x0C07A35Au, 1);  /* 0C07A358 mov.l Rm,@(disp,Rn) */
	r11 = 0x14u;  /* 0C07A35A mov #imm,Rn */
	r8 += 0x48u;  /* 0C07A35C add #imm,Rn */
	r0 = 0x0u;  /* 0C07A35E mov #imm,Rn */
	W8(r8, r0); UPD(0x0C07A362u, 4);  /* 0C07A360 mov.b Rm,@Rn */
	r10 = 0x0u;  /* 0C07A362 mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C07A366u, 2);  /* 0C07A364 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C07A366 add #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C07A368 extu.b Rm,Rn */
	r12 = 0xC062780u; UPD(0x0C07A36Cu, 3);  /* 0C07A36A mov.l @(disp,pc),Rn */
	r4 = r2;  /* 0C07A36C mov Rm,Rn */
	r4 += r4;  /* 0C07A36E add Rm,Rn */
	IF(0x0C07A370u); { u32 t_ = r12; PR = 0x0C07A374u; r4 += r2; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07A374u); }  /* 0C07A370 jsr @Rn */
L_0C07A374: BLKS(0x0C07A374u);
	r0 += 0x4u;  /* 0C07A374 add #imm,Rn */
	W8(r8, r0); UPD(0x0C07A378u, 2);  /* 0C07A376 mov.b Rm,@Rn */
	r8 += 0x1u;  /* 0C07A378 add #imm,Rn */
	W8(r8, r11); UPD(0x0C07A37Cu, 2);  /* 0C07A37A mov.b Rm,@Rn */
	r8 += 0xFFFFFFB6u;  /* 0C07A37C add #imm,Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C07A380u, 2);  /* 0C07A37E mov.l @(disp,Rm),Rn */
	W32(r8 + 0x3Cu, r10); UPD(0x0C07A382u, 1);  /* 0C07A380 mov.l Rm,@(disp,Rn) */
	r7 += 0x1u;  /* 0C07A382 add #imm,Rn */
	r9 = 0x808080u; UPD(0x0C07A386u, 2);  /* 0C07A384 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07A386 add #imm,Rn */
	r6 = (u32)(s32)(s16)r7;  /* 0C07A388 exts.w Rm,Rn */
	W32(r8, r9); UPD(0x0C07A38Cu, 3);  /* 0C07A38A mov.l Rm,@Rn */
	{ W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07A2C4u, 3); goto L_0C07A2C4; }  /* 0C07A38C bra */
L_0C07A390: BLKS(0x0C07A390u);
	r4 = R32(r14); UPD(0x0C07A392u, 1);  /* 0C07A390 mov.l @Rm,Rn */
	r12 = 0x0u;  /* 0C07A392 mov #imm,Rn */
	r9 = 0x2A0u; UPD(0x0C07A396u, 2);  /* 0C07A394 mov.w @(disp,pc),Rn */
	IF(0x0C07A396u); MACL = r4 * r9;  /* 0C07A396 mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C07A39Au, 3);  /* 0C07A398 mov.l @(disp,pc),Rn */
	IF(0x0C07A39Au); r13 = MACL;  /* 0C07A39A sts macl,Rn */
	r13 += r5;  /* 0C07A39C add Rm,Rn */
	r13 += r3;  /* 0C07A39E add Rm,Rn */
	r13 += 0x2u;  /* 0C07A3A0 add #imm,Rn */
	W8(r13, r12); UPD(0x0C07A3A4u, 5);  /* 0C07A3A2 mov.b Rm,@Rn */
	r5 = 0x53u;  /* 0C07A3A4 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C07A3A8u, 2);  /* 0C07A3A6 mov.l @Rm,Rn */
	r3 = 0xC0C20A0u; UPD(0x0C07A3AAu, 1);  /* 0C07A3A8 mov.l @(disp,pc),Rn */
	r14 += 0xCu;  /* 0C07A3AA add #imm,Rn */
	r15 = r14;  /* 0C07A3AC mov Rm,Rn */
	IF(0x0C07A3AEu); PR = R32(r15); r15 += 4; UPD(0x0C07A3B0u, 3);  /* 0C07A3AE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A3B2u, 1);  /* 0C07A3B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07A3B4u, 1);  /* 0C07A3B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A3B6u, 1);  /* 0C07A3B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A3B8u, 1);  /* 0C07A3B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A3BAu, 1);  /* 0C07A3B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A3BCu, 1);  /* 0C07A3BA mov.l @Rm+,Rn */
	IF(0x0C07A3BCu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C07A3BC jmp @Rn */
L_0C07A3C0: BLKS(0x0C07A3C0u);
	r15 = r14;  /* 0C07A3C0 mov Rm,Rn */
	IF(0x0C07A3C2u); PR = R32(r15); r15 += 4; UPD(0x0C07A3C4u, 2);  /* 0C07A3C2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A3C6u, 1);  /* 0C07A3C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07A3C8u, 1);  /* 0C07A3C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A3CAu, 1);  /* 0C07A3C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A3CCu, 1);  /* 0C07A3CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A3CEu, 1);  /* 0C07A3CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A3D0u, 1);  /* 0C07A3CE mov.l @Rm+,Rn */
	IF(0x0C07A3D0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07A3D0 rts */
}

void blk_f_0C07A410(sh3_t *c)
{
	LOCALS;
L_0C07A410: BLKS(0x0C07A410u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07A412u, 1);  /* 0C07A410 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C07A412 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07A416u, 2);  /* 0C07A414 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07A418u, 1);  /* 0C07A416 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07A41Au, 1);  /* 0C07A418 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07A41Cu, 1);  /* 0C07A41A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07A41Eu, 1);  /* 0C07A41C mov.l Rm,@-Rn */
	r5 = 0x2A0u; UPD(0x0C07A420u, 1);  /* 0C07A41E mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07A422u, 1);  /* 0C07A420 mov.l Rm,@-Rn */
	IF(0x0C07A422u); MACL = r4 * r5;  /* 0C07A422 mul.l Rm,Rn */
	IF(0x0C07A424u); r15 -= 4; W32(r15, PR); UPD(0x0C07A426u, 3);  /* 0C07A424 sts.l pr,@-Rn */
	r1 = 0xC28EDFCu; UPD(0x0C07A428u, 1);  /* 0C07A426 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C07A428 add #imm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C07A42Cu, 2);  /* 0C07A42A mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07A42C mov Rm,Rn */
	IF(0x0C07A42Eu); r8 = MACL;  /* 0C07A42E sts macl,Rn */
	W32(r14, r4); UPD(0x0C07A432u, 3);  /* 0C07A430 mov.l Rm,@Rn */
	r8 += r0;  /* 0C07A432 add Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C07A436u, 2);  /* 0C07A434 mov.l Rm,@(disp,Rn) */
	r0 = r8;  /* 0C07A436 mov Rm,Rn */
	r3 = 0x266u; UPD(0x0C07A43Au, 2);  /* 0C07A438 mov.w @(disp,pc),Rn */
	r9 = 0xC079F80u; UPD(0x0C07A43Cu, 1);  /* 0C07A43A mov.l @(disp,pc),Rn */
	IF(0x0C07A43Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07A43Eu, 1);  /* 0C07A43C mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C07A43E extu.b Rm,Rn */
	IF(0x0C07A440u); { u32 t_ = r9; PR = 0x0C07A444u; r5 += r5; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C07A444u); }  /* 0C07A440 jsr @Rn */
L_0C07A444: BLKS(0x0C07A444u);
	T = (r0 & r0) == 0;  /* 0C07A444 tst Rm,Rn */
	{ u32 c_ = !T; r4 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A44Eu, 4); goto L_0C07A44E; } goto L_0C07A44A; }  /* 0C07A446 bf/s */
L_0C07A44A: BLKS(0x0C07A44Au);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07A570u, 4); goto L_0C07A570; }  /* 0C07A44A bra */
L_0C07A44E: BLKS(0x0C07A44Eu);
	W32(r14 + 0x8u, r4); UPD(0x0C07A450u, 1);  /* 0C07A44E mov.l Rm,@(disp,Rn) */
	r13 = r8;  /* 0C07A450 mov Rm,Rn */
	IF(0x0C07A452u); ;  /* 0C07A452 nop */
	UPD(0x0C07A454u, 2);
L_0C07A454: BLKS(0x0C07A454u);
	r3 = 0x264u; UPD(0x0C07A456u, 1);  /* 0C07A454 mov.w @(disp,pc),Rn */
	r12 = r13;  /* 0C07A456 mov Rm,Rn */
	r12 += r3;  /* 0C07A458 add Rm,Rn */
	r12 += 0x2u;  /* 0C07A45A add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C07A45Eu, 4);  /* 0C07A45C mov.b @Rm,Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C07A460u, 1);  /* 0C07A45E mov.l @(disp,Rm),Rn */
	r10 = r7 & 0xFF;  /* 0C07A460 extu.b Rm,Rn */
	r10 += r10;  /* 0C07A462 add Rm,Rn */
	T = (s32)r6 >= (s32)r10;  /* 0C07A464 cmp/ge Rm,Rn */
	{ u32 c_ = T; r5 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C07A540u, 6); goto L_0C07A540; } UPD(0x0C07A46Au, 1); goto L_0C07A46A; }  /* 0C07A466 bt/s */
L_0C07A46A: BLKS(0x0C07A46Au);
	r9 = 0x50u;  /* 0C07A46A mov #imm,Rn */
	r8 = 0x2800u; UPD(0x0C07A46Eu, 2);  /* 0C07A46C mov.w @(disp,pc),Rn */
	r2 = 0xFu;  /* 0C07A46E mov #imm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C07A472u, 2);  /* 0C07A470 mov.l @(disp,Rm),Rn */
	IF(0x0C07A472u); MACL = r5 * r8;  /* 0C07A472 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r10 = v_; } UPD(0x0C07A476u, 3);  /* 0C07A474 mov.w @Rm+,Rn */
	IF(0x0C07A476u); r8 = MACL;  /* 0C07A476 sts macl,Rn */
	IF(0x0C07A478u); MACL = r10 * r9;  /* 0C07A478 mul.l Rm,Rn */
	r11 = 0xC229004u; UPD(0x0C07A47Cu, 4);  /* 0C07A47A mov.l @(disp,pc),Rn */
	IF(0x0C07A47Cu); r3 = MACL;  /* 0C07A47C sts macl,Rn */
	r8 += r3;  /* 0C07A47E add Rm,Rn */
	r0 = 0xCD800000u; UPD(0x0C07A482u, 3);  /* 0C07A480 mov.l @(disp,pc),Rn */
	r8 += r11;  /* 0C07A482 add Rm,Rn */
	W32(r8, r0); UPD(0x0C07A486u, 2);  /* 0C07A484 mov.l Rm,@Rn */
	r0 = 0x24Cu; UPD(0x0C07A488u, 1);  /* 0C07A486 mov.w @(disp,pc),Rn */
	r8 += 0x44u;  /* 0C07A488 add #imm,Rn */
	IF(0x0C07A48Au); r1 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C07A48Cu, 2);  /* 0C07A48A mov.w @(r0,Rm),Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C07A48Eu, 1);  /* 0C07A48C mov.l Rm,@(disp,Rn) */
	r2 &= r1;  /* 0C07A48E and Rm,Rn */
	r6 = 0xC1867F8u; UPD(0x0C07A492u, 2);  /* 0C07A490 mov.l @(disp,pc),Rn */
	r2 += r2;  /* 0C07A492 add Rm,Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C07A496u, 2);  /* 0C07A494 mov.l @(disp,Rm),Rn */
	r0 = r2;  /* 0C07A496 mov Rm,Rn */
	r4 = 0xFu;  /* 0C07A498 mov #imm,Rn */
	IF(0x0C07A49Au); r11 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C07A49Cu, 3);  /* 0C07A49A mov.w @(r0,Rm),Rn */
	r4 &= r7;  /* 0C07A49C and Rm,Rn */
	r5 = 0xC1867D8u; UPD(0x0C07A4A0u, 2);  /* 0C07A49E mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C07A4A0 add Rm,Rn */
	r3 = 0xC062780u; UPD(0x0C07A4A4u, 2);  /* 0C07A4A2 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C07A4A4 mov Rm,Rn */
	IF(0x0C07A4A6u); r9 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C07A4A8u, 2);  /* 0C07A4A6 mov.w @(r0,Rm),Rn */
	r4 = 0xDu;  /* 0C07A4A8 mov #imm,Rn */
	IF(0x0C07A4AAu); { u32 t_ = r3; PR = 0x0C07A4AEu; r11 += r9; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07A4AEu); }  /* 0C07A4AA jsr @Rn */
L_0C07A4AE: BLKS(0x0C07A4AEu);
	r0 += r11;  /* 0C07A4AE add Rm,Rn */
	r0 += 0xFFFFFFFAu;  /* 0C07A4B0 add #imm,Rn */
	W16(r8, r0); UPD(0x0C07A4B4u, 3);  /* 0C07A4B2 mov.w Rm,@Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C07A4B4 exts.w Rm,Rn */
	r0 = r0 & 0xFFFF;  /* 0C07A4B6 extu.w Rm,Rn */
	r0 += 0x4u;  /* 0C07A4B8 add #imm,Rn */
	r7 = 0xC079E80u; UPD(0x0C07A4BCu, 4);  /* 0C07A4BA mov.l @(disp,pc),Rn */
	IF(0x0C07A4BCu); r0 >>= 2;  /* 0C07A4BC shlr2 Rn */
	IF(0x0C07A4BEu); T = r0 & 1; r0 >>= 1;  /* 0C07A4BE shlr Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07A4C0 add #imm,Rn */
	r2 = 0x3u;  /* 0C07A4C2 mov #imm,Rn */
	r1 = 0x0u;  /* 0C07A4C4 mov #imm,Rn */
	r0 &= 0x3Fu;  /* 0C07A4C6 and #imm,r0 */
	W32(r8 + 0x4u, r2); UPD(0x0C07A4CAu, 7);  /* 0C07A4C8 mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C07A4CA mov Rm,Rn */
	W32(r8 + 0xCu, r1); UPD(0x0C07A4CEu, 2);  /* 0C07A4CC mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r0); UPD(0x0C07A4D0u, 1);  /* 0C07A4CE mov.l Rm,@(disp,Rn) */
	IF(0x0C07A4D0u); { u32 t_ = r7; PR = 0x0C07A4D4u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07A4D4u); }  /* 0C07A4D0 jsr @Rn */
L_0C07A4D4: BLKS(0x0C07A4D4u);
	r6 = R32(r13 + 0x10u); UPD(0x0C07A4D6u, 1);  /* 0C07A4D4 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C07A4D8u, 1);  /* 0C07A4D6 mov.l Rm,@(disp,Rn) */
	r4 = R32(r13 + 0x14u); UPD(0x0C07A4DAu, 1);  /* 0C07A4D8 mov.l @(disp,Rm),Rn */
	r5 = 0xC062780u; UPD(0x0C07A4DCu, 1);  /* 0C07A4DA mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C07A4DEu, 1);  /* 0C07A4DC mov.l Rm,@(disp,Rn) */
	r10 = 0x18000u; UPD(0x0C07A4E0u, 1);  /* 0C07A4DE mov.l @(disp,pc),Rn */
	IF(0x0C07A4E0u); { u32 t_ = r5; PR = 0x0C07A4E4u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07A4E4u); }  /* 0C07A4E0 jsr @Rn */
L_0C07A4E4: BLKS(0x0C07A4E4u);
	r9 = r0;  /* 0C07A4E4 mov Rm,Rn */
	r9 += r10;  /* 0C07A4E6 add Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C07A4EAu, 3);  /* 0C07A4E8 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07A4EA mov Rm,Rn */
	IF(0x0C07A4ECu); { u32 t_ = r10; PR = 0x0C07A4F0u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07A4F0u); }  /* 0C07A4EC jsr @Rn */
L_0C07A4F0: BLKS(0x0C07A4F0u);
	r5 = r9;  /* 0C07A4F0 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C07A4F4u, 2);  /* 0C07A4F2 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07A4F4 mov Rm,Rn */
	IF(0x0C07A4F6u); { u32 t_ = r9; PR = 0x0C07A4FAu; W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07A4FAu); }  /* 0C07A4F6 jsr @Rn */
L_0C07A4FA: BLKS(0x0C07A4FAu);
	W32(r8 + 0x30u, r0); UPD(0x0C07A4FCu, 1);  /* 0C07A4FA mov.l Rm,@(disp,Rn) */
	r11 = 0x14u;  /* 0C07A4FC mov #imm,Rn */
	r8 += 0x48u;  /* 0C07A4FE add #imm,Rn */
	r0 = 0x0u;  /* 0C07A500 mov #imm,Rn */
	W8(r8, r0); UPD(0x0C07A504u, 4);  /* 0C07A502 mov.b Rm,@Rn */
	r10 = 0x0u;  /* 0C07A504 mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C07A508u, 2);  /* 0C07A506 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C07A508 add #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C07A50A extu.b Rm,Rn */
	r12 = 0xC062780u; UPD(0x0C07A50Eu, 3);  /* 0C07A50C mov.l @(disp,pc),Rn */
	r4 = r2;  /* 0C07A50E mov Rm,Rn */
	r4 += r4;  /* 0C07A510 add Rm,Rn */
	IF(0x0C07A512u); { u32 t_ = r12; PR = 0x0C07A516u; r4 += r2; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07A516u); }  /* 0C07A512 jsr @Rn */
L_0C07A516: BLKS(0x0C07A516u);
	r0 += 0x4u;  /* 0C07A516 add #imm,Rn */
	W8(r8, r0); UPD(0x0C07A51Au, 2);  /* 0C07A518 mov.b Rm,@Rn */
	r8 += 0x1u;  /* 0C07A51A add #imm,Rn */
	W8(r8, r11); UPD(0x0C07A51Eu, 2);  /* 0C07A51C mov.b Rm,@Rn */
	r8 += 0xFFFFFFB6u;  /* 0C07A51E add #imm,Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C07A522u, 2);  /* 0C07A520 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x3Cu, r10); UPD(0x0C07A524u, 1);  /* 0C07A522 mov.l Rm,@(disp,Rn) */
	r7 += 0x1u;  /* 0C07A524 add #imm,Rn */
	r9 = 0x808080u; UPD(0x0C07A528u, 2);  /* 0C07A526 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07A528 add #imm,Rn */
	r6 = (u32)(s32)(s16)r7;  /* 0C07A52A exts.w Rm,Rn */
	W32(r8, r9); UPD(0x0C07A52Eu, 3);  /* 0C07A52C mov.l Rm,@Rn */
	{ W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07A454u, 3); goto L_0C07A454; }  /* 0C07A52E bra */
L_0C07A540: BLKS(0x0C07A540u);
	r11 = R32(r14); UPD(0x0C07A542u, 1);  /* 0C07A540 mov.l @Rm,Rn */
	r12 = 0x0u;  /* 0C07A542 mov #imm,Rn */
	r0 = 0x2A0u; UPD(0x0C07A546u, 2);  /* 0C07A544 mov.w @(disp,pc),Rn */
	r5 = 0x53u;  /* 0C07A546 mov #imm,Rn */
	IF(0x0C07A548u); MACL = r11 * r0;  /* 0C07A548 mul.l Rm,Rn */
	r1 = 0xC29D1D8u; UPD(0x0C07A54Cu, 4);  /* 0C07A54A mov.l @(disp,pc),Rn */
	IF(0x0C07A54Cu); r13 = MACL;  /* 0C07A54C sts macl,Rn */
	r13 += r1;  /* 0C07A54E add Rm,Rn */
	r13 += r3;  /* 0C07A550 add Rm,Rn */
	r13 += 0x2u;  /* 0C07A552 add #imm,Rn */
	W8(r13, r12); UPD(0x0C07A556u, 5);  /* 0C07A554 mov.b Rm,@Rn */
	r4 = R32(r14); UPD(0x0C07A558u, 1);  /* 0C07A556 mov.l @Rm,Rn */
	r2 = 0xC0C20A0u; UPD(0x0C07A55Au, 1);  /* 0C07A558 mov.l @(disp,pc),Rn */
	r14 += 0xCu;  /* 0C07A55A add #imm,Rn */
	r15 = r14;  /* 0C07A55C mov Rm,Rn */
	IF(0x0C07A55Eu); PR = R32(r15); r15 += 4; UPD(0x0C07A560u, 3);  /* 0C07A55E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A562u, 1);  /* 0C07A560 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07A564u, 1);  /* 0C07A562 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A566u, 1);  /* 0C07A564 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A568u, 1);  /* 0C07A566 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A56Au, 1);  /* 0C07A568 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A56Cu, 1);  /* 0C07A56A mov.l @Rm+,Rn */
	IF(0x0C07A56Cu); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C07A56C jmp @Rn */
L_0C07A570: BLKS(0x0C07A570u);
	r15 = r14;  /* 0C07A570 mov Rm,Rn */
	IF(0x0C07A572u); PR = R32(r15); r15 += 4; UPD(0x0C07A574u, 2);  /* 0C07A572 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A576u, 1);  /* 0C07A574 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07A578u, 1);  /* 0C07A576 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A57Au, 1);  /* 0C07A578 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A57Cu, 1);  /* 0C07A57A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A57Eu, 1);  /* 0C07A57C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A580u, 1);  /* 0C07A57E mov.l @Rm+,Rn */
	IF(0x0C07A580u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07A580 rts */
}

void blk_f_0C07A5D0(sh3_t *c)
{
	LOCALS;
L_0C07A5D0: BLKS(0x0C07A5D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07A5D2u, 1);  /* 0C07A5D0 mov.l Rm,@-Rn */
	r7 = 0x50u;  /* 0C07A5D2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07A5D6u, 2);  /* 0C07A5D4 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C07A5D6 exts.w Rm,Rn */
	r3 = 0x2800u; UPD(0x0C07A5DAu, 2);  /* 0C07A5D8 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C07A5DA exts.w Rm,Rn */
	IF(0x0C07A5DCu); MACL = r9 * r3;  /* 0C07A5DC mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07A5E0u, 4);  /* 0C07A5DE mov.l Rm,@-Rn */
	IF(0x0C07A5E0u); r3 = MACL;  /* 0C07A5E0 sts macl,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07A5E4u, 2);  /* 0C07A5E2 mov.l Rm,@-Rn */
	IF(0x0C07A5E4u); MACL = r5 * r7;  /* 0C07A5E4 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07A5E8u, 3);  /* 0C07A5E6 mov.l Rm,@-Rn */
	IF(0x0C07A5E8u); r6 = MACL;  /* 0C07A5E8 sts macl,Rn */
	r0 = 0xC229004u; UPD(0x0C07A5ECu, 2);  /* 0C07A5EA mov.l @(disp,pc),Rn */
	r3 += r6;  /* 0C07A5EC add Rm,Rn */
	IF(0x0C07A5EEu); r15 -= 4; W32(r15, PR); UPD(0x0C07A5F0u, 2);  /* 0C07A5EE sts.l pr,@-Rn */
	r3 += r0;  /* 0C07A5F0 add Rm,Rn */
	r0 = R32(r3 + 0x24u); UPD(0x0C07A5F4u, 2);  /* 0C07A5F2 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C07A5F4 mov Rm,Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C07A5F8u, 2);  /* 0C07A5F6 mov.l @(disp,Rm),Rn */
	r4 = R32(r3 + 0x2Cu); UPD(0x0C07A5FAu, 1);  /* 0C07A5F8 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C07A5FCu, 1);  /* 0C07A5FA mov.l @(disp,Rm),Rn */
	r0 += r4;  /* 0C07A5FC add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C07A600u, 2);  /* 0C07A5FE mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C07A600 add Rm,Rn */
	r7 += r0;  /* 0C07A602 add Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C07A606u, 3);  /* 0C07A604 mov.l Rm,@(disp,Rn) */
	IF(0x0C07A606u); T = (s32)r7 >= 0;  /* 0C07A606 cmp/pz Rn */
	{ u32 c_ = T; W32(r3 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07A610u, 4); goto L_0C07A610; } UPD(0x0C07A60Cu, 1); goto L_0C07A60C; }  /* 0C07A608 bt/s */
L_0C07A60C: BLKS(0x0C07A60Cu);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C07A790u, 3); goto L_0C07A790; }  /* 0C07A60C bra */
L_0C07A610: BLKS(0x0C07A610u);
	r8 = 0xB00000u; UPD(0x0C07A612u, 1);  /* 0C07A610 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r8;  /* 0C07A612 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C07A62Eu, 4); goto L_0C07A62E; }  /* 0C07A614 bt */
L_0C07A616: BLKS(0x0C07A616u);
	r2 = 0xC3C4048u; UPD(0x0C07A618u, 1);  /* 0C07A616 mov.l @(disp,pc),Rn */
	r11 = R32(r2); UPD(0x0C07A61Au, 1);  /* 0C07A618 mov.l @Rm,Rn */
	r10 = 0xFF880000u; UPD(0x0C07A61Cu, 1);  /* 0C07A61A mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C07A61C mov Rm,Rn */
	r2 -= r11;  /* 0C07A61E sub Rm,Rn */
	r2 += r10;  /* 0C07A620 add Rm,Rn */
	IF(0x0C07A622u); T = (s32)r2 >= 0;  /* 0C07A622 cmp/pz Rn */
	if (T) { UPD(0x0C07A628u, 7); goto L_0C07A628; }  /* 0C07A624 bt */
L_0C07A626: BLKS(0x0C07A626u);
	r2 = 0u - r2;  /* 0C07A626 neg Rm,Rn */
	UPD(0x0C07A628u, 1);
L_0C07A628: BLKS(0x0C07A628u);
	r4 = 0x880000u; UPD(0x0C07A62Au, 1);  /* 0C07A628 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C07A62A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07A650u, 4); goto L_0C07A650; }  /* 0C07A62C bf */
L_0C07A62E: BLKS(0x0C07A62Eu);
	r5 = 0x0u;  /* 0C07A62E mov #imm,Rn */
	W32(r3, r5); UPD(0x0C07A632u, 2);  /* 0C07A630 mov.l Rm,@Rn */
L_0C07A632: BLKS(0x0C07A632u);
	r15 = r14;  /* 0C07A632 mov Rm,Rn */
	IF(0x0C07A634u); PR = R32(r15); r15 += 4; UPD(0x0C07A636u, 2);  /* 0C07A634 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A638u, 1);  /* 0C07A636 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A63Au, 1);  /* 0C07A638 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A63Cu, 1);  /* 0C07A63A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A63Eu, 1);  /* 0C07A63C mov.l @Rm+,Rn */
	IF(0x0C07A63Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07A63E rts */
L_0C07A650: BLKS(0x0C07A650u);
	r2 = R32(r3 + 0xCu); UPD(0x0C07A652u, 1);  /* 0C07A650 mov.l @(disp,Rm),Rn */
	r0 = 0x7u;  /* 0C07A652 mov #imm,Rn */
	T = r2 > r0;  /* 0C07A654 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C07A632u, 5); goto L_0C07A632; }  /* 0C07A656 bt */
L_0C07A658: BLKS(0x0C07A658u);
	r0 = 0xC07A67Cu;  /* 0C07A658 mova @(disp,pc),r0 */
	IF(0x0C07A65Au); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07A65Cu, 2);  /* 0C07A65A mov.b @(r0,Rm),Rn */
	r6 = r6 & 0xFF;  /* 0C07A65C extu.b Rm,Rn */
	IF(0x0C07A65Eu); { u32 tv_ = (r6 + 0x0C07A662u); u32 t_ = PHYS(tv_); IF(0x0C07A660u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C07A690u: goto L_0C07A690; case 0x0C07A6D0u: goto L_0C07A6D0; case 0x0C07A720u: goto L_0C07A720; default: JUMPD(tv_); } }  /* 0C07A65E braf Rn */
L_0C07A690: BLKS(0x0C07A690u);
	r3 = 0x2800u; UPD(0x0C07A692u, 1);  /* 0C07A690 mov.w @(disp,pc),Rn */
	r2 = 0x50u;  /* 0C07A692 mov #imm,Rn */
	IF(0x0C07A694u); MACL = r9 * r3;  /* 0C07A694 mul.l Rm,Rn */
	r8 = 0xC229004u; UPD(0x0C07A698u, 4);  /* 0C07A696 mov.l @(disp,pc),Rn */
	IF(0x0C07A698u); r3 = MACL;  /* 0C07A698 sts macl,Rn */
	IF(0x0C07A69Au); MACL = r5 * r2;  /* 0C07A69A mul.l Rm,Rn */
	IF(0x0C07A69Cu); r11 = MACL;  /* 0C07A69C sts macl,Rn */
	r3 += r11;  /* 0C07A69E add Rm,Rn */
	r3 += r8;  /* 0C07A6A0 add Rm,Rn */
	r8 = r3;  /* 0C07A6A2 mov Rm,Rn */
	r8 += 0x48u;  /* 0C07A6A4 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r8); UPD(0x0C07A6A8u, 9);  /* 0C07A6A6 mov.b @Rm,Rn */
	r1 = r3;  /* 0C07A6A8 mov Rm,Rn */
	r1 += 0x49u;  /* 0C07A6AA add #imm,Rn */
	r10 += 0x1u;  /* 0C07A6AC add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r1); UPD(0x0C07A6B0u, 4);  /* 0C07A6AE mov.b @Rm,Rn */
	W8(r8, r10); UPD(0x0C07A6B2u, 1);  /* 0C07A6B0 mov.b Rm,@Rn */
	r7 += 0xFFFFFFFFu;  /* 0C07A6B2 add #imm,Rn */
	r10 = r7 & 0xFF;  /* 0C07A6B4 extu.b Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C07A6B6 tst Rm,Rn */
	{ u32 c_ = !T; W8(r1, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07A632u, 6); goto L_0C07A632; } UPD(0x0C07A6BCu, 1); goto L_0C07A6BC; }  /* 0C07A6B8 bf/s */
L_0C07A6BC: BLKS(0x0C07A6BCu);
	r4 = 0x4u;  /* 0C07A6BC mov #imm,Rn */
	W32(r3 + 0xCu, r4); UPD(0x0C07A6C0u, 2);  /* 0C07A6BE mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C07A6C0 mov Rm,Rn */
	r9 = 0xC079EF0u; UPD(0x0C07A6C4u, 2);  /* 0C07A6C2 mov.l @(disp,pc),Rn */
	IF(0x0C07A6C4u); { u32 t_ = r9; PR = 0x0C07A6C8u; IF(0x0C07A6C6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C079EF0, 0x0C079EF0u, 0x0C07A6C8u); }  /* 0C07A6C4 jsr @Rn */
L_0C07A6C8: BLKS(0x0C07A6C8u);
	{ W8(r8, r10); /* slot mov.b Rm,@Rn */ UPD(0x0C07A632u, 3); goto L_0C07A632; }  /* 0C07A6C8 bra */
L_0C07A6D0: BLKS(0x0C07A6D0u);
	r7 = 0x2800u; UPD(0x0C07A6D2u, 1);  /* 0C07A6D0 mov.w @(disp,pc),Rn */
	r0 = 0x50u;  /* 0C07A6D2 mov #imm,Rn */
	IF(0x0C07A6D4u); MACL = r9 * r7;  /* 0C07A6D4 mul.l Rm,Rn */
	r4 = 0xC229004u; UPD(0x0C07A6D8u, 4);  /* 0C07A6D6 mov.l @(disp,pc),Rn */
	r10 = 0xFFFFFFF8u;  /* 0C07A6D8 mov #imm,Rn */
	IF(0x0C07A6DAu); r7 = MACL;  /* 0C07A6DA sts macl,Rn */
	IF(0x0C07A6DCu); MACL = r5 * r0;  /* 0C07A6DC mul.l Rm,Rn */
	r8 = 0xE0u; UPD(0x0C07A6E0u, 5);  /* 0C07A6DE mov.w @(disp,pc),Rn */
	IF(0x0C07A6E0u); r6 = MACL;  /* 0C07A6E0 sts macl,Rn */
	r7 += r6;  /* 0C07A6E2 add Rm,Rn */
	r7 += r4;  /* 0C07A6E4 add Rm,Rn */
	r3 = R32(r7 + 0x2Cu); UPD(0x0C07A6E8u, 4);  /* 0C07A6E6 mov.l @(disp,Rm),Rn */
	IF(0x0C07A6E8u); MACL = r3 * r8;  /* 0C07A6E8 mul.l Rm,Rn */
	r11 = R32(r7 + 0x30u); UPD(0x0C07A6ECu, 3);  /* 0C07A6EA mov.l @(disp,Rm),Rn */
	IF(0x0C07A6ECu); r2 = MACL;  /* 0C07A6EC sts macl,Rn */
	IF(0x0C07A6EEu); MACL = r11 * r8;  /* 0C07A6EE mul.l Rm,Rn */
	IF(0x0C07A6F0u); ARG0(0x42ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C07A6F0 shad Rm,Rn */
	IF(0x0C07A6F2u); r0 = MACL;  /* 0C07A6F2 sts macl,Rn */
	r8 = r7;  /* 0C07A6F4 mov Rm,Rn */
	IF(0x0C07A6F6u); ARG0(0x40ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C07A6F6 shad Rm,Rn */
	r8 += 0x48u;  /* 0C07A6F8 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C07A6FCu, 9);  /* 0C07A6FA mov.b @Rm,Rn */
	W32(r7 + 0x30u, r0); UPD(0x0C07A6FEu, 1);  /* 0C07A6FC mov.l Rm,@(disp,Rn) */
	r6 += 0x1u;  /* 0C07A6FE add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C07A700 extu.b Rm,Rn */
	W32(r7 + 0x2Cu, r2); UPD(0x0C07A704u, 3);  /* 0C07A702 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x4u;  /* 0C07A704 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r8, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07A632u, 4); goto L_0C07A632; } UPD(0x0C07A70Au, 1); goto L_0C07A70A; }  /* 0C07A706 bf/s */
L_0C07A70A: BLKS(0x0C07A70Au);
	r4 = r9;  /* 0C07A70A mov Rm,Rn */
	r10 = R32(r7 + 0xCu); UPD(0x0C07A70Eu, 2);  /* 0C07A70C mov.l @(disp,Rm),Rn */
	r9 = 0xC079EF0u; UPD(0x0C07A710u, 1);  /* 0C07A70E mov.l @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C07A710 add #imm,Rn */
	IF(0x0C07A712u); { u32 t_ = r9; PR = 0x0C07A716u; W32(r7 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C079EF0, 0x0C079EF0u, 0x0C07A716u); }  /* 0C07A712 jsr @Rn */
L_0C07A716: BLKS(0x0C07A716u);
	r5 = 0x0u;  /* 0C07A716 mov #imm,Rn */
	W8(r8, r5); UPD(0x0C07A71Au, 2);  /* 0C07A718 mov.b Rm,@Rn */
L_0C07A71A: BLKS(0x0C07A71Au);
	{ IF(0x0C07A71Cu); ; /* slot nop */ UPD(0x0C07A632u, 3); goto L_0C07A632; }  /* 0C07A71A bra */
L_0C07A720: BLKS(0x0C07A720u);
	r10 = 0x2800u; UPD(0x0C07A722u, 1);  /* 0C07A720 mov.w @(disp,pc),Rn */
	r8 = 0x50u;  /* 0C07A722 mov #imm,Rn */
	IF(0x0C07A724u); MACL = r9 * r10;  /* 0C07A724 mul.l Rm,Rn */
	r0 = 0xC229004u; UPD(0x0C07A728u, 4);  /* 0C07A726 mov.l @(disp,pc),Rn */
	r11 = 0xFFFFFFF8u;  /* 0C07A728 mov #imm,Rn */
	IF(0x0C07A72Au); r10 = MACL;  /* 0C07A72A sts macl,Rn */
	IF(0x0C07A72Cu); MACL = r5 * r8;  /* 0C07A72C mul.l Rm,Rn */
	r2 = 0xE0u; UPD(0x0C07A730u, 5);  /* 0C07A72E mov.w @(disp,pc),Rn */
	IF(0x0C07A730u); r7 = MACL;  /* 0C07A730 sts macl,Rn */
	r10 += r7;  /* 0C07A732 add Rm,Rn */
	r10 += r0;  /* 0C07A734 add Rm,Rn */
	r6 = R32(r10 + 0x2Cu); UPD(0x0C07A738u, 4);  /* 0C07A736 mov.l @(disp,Rm),Rn */
	IF(0x0C07A738u); MACL = r6 * r2;  /* 0C07A738 mul.l Rm,Rn */
	r3 = R32(r10 + 0x30u); UPD(0x0C07A73Cu, 3);  /* 0C07A73A mov.l @(disp,Rm),Rn */
	IF(0x0C07A73Cu); r4 = MACL;  /* 0C07A73C sts macl,Rn */
	IF(0x0C07A73Eu); MACL = r3 * r2;  /* 0C07A73E mul.l Rm,Rn */
	IF(0x0C07A740u); ARG0(0x44BCu); { s32 s_ = (s32)r11; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C07A740 shad Rm,Rn */
	IF(0x0C07A742u); r8 = MACL;  /* 0C07A742 sts macl,Rn */
	IF(0x0C07A744u); ARG0(0x48BCu); { s32 s_ = (s32)r11; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = (u32)((s32)r8 >> 31); else r8 = (u32)((s32)r8 >> ((~s_ & 31) + 1)); }  /* 0C07A744 shad Rm,Rn */
	r11 = r10;  /* 0C07A746 mov Rm,Rn */
	r11 += 0x48u;  /* 0C07A748 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r11); UPD(0x0C07A74Cu, 9);  /* 0C07A74A mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C07A74C add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C07A74E extu.b Rm,Rn */
	W32(r10 + 0x2Cu, r4); UPD(0x0C07A752u, 3);  /* 0C07A750 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x4u;  /* 0C07A752 cmp/eq #imm,r0 */
	W32(r10 + 0x30u, r8); UPD(0x0C07A756u, 2);  /* 0C07A754 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W8(r11, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07A71Au, 3); goto L_0C07A71A; } UPD(0x0C07A75Au, 1); goto L_0C07A75A; }  /* 0C07A756 bf/s */
L_0C07A75A: BLKS(0x0C07A75Au);
	r9 += 0x40u;  /* 0C07A75A add #imm,Rn */
	W32(r10 + 0x8u, r9); UPD(0x0C07A75Eu, 2);  /* 0C07A75C mov.l Rm,@(disp,Rn) */
	r8 = 0x0u;  /* 0C07A75E mov #imm,Rn */
	r2 = 0xC079E80u; UPD(0x0C07A762u, 2);  /* 0C07A760 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFC0u;  /* 0C07A762 add #imm,Rn */
	r4 = r9;  /* 0C07A764 mov Rm,Rn */
	W32(r10 + 0x30u, r8); UPD(0x0C07A768u, 3);  /* 0C07A766 mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x2Cu, r8); UPD(0x0C07A76Au, 1);  /* 0C07A768 mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x4u, r8); UPD(0x0C07A76Cu, 1);  /* 0C07A76A mov.l Rm,@(disp,Rn) */
	IF(0x0C07A76Cu); { u32 t_ = r2; PR = 0x0C07A770u; W32(r10 + 0xCu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07A770u); }  /* 0C07A76C jsr @Rn */
L_0C07A770: BLKS(0x0C07A770u);
	r5 = 0x204B0B0u; UPD(0x0C07A772u, 1);  /* 0C07A770 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C07A772 mov Rm,Rn */
	r9 = 0xC0C2020u; UPD(0x0C07A776u, 2);  /* 0C07A774 mov.l @(disp,pc),Rn */
	W32(r10 + 0x3Cu, r5); UPD(0x0C07A778u, 1);  /* 0C07A776 mov.l Rm,@(disp,Rn) */
	W8(r11, r8); UPD(0x0C07A77Au, 1);  /* 0C07A778 mov.b Rm,@Rn */
	IF(0x0C07A77Au); { u32 t_ = r9; PR = 0x0C07A77Eu; r5 = 0x54u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2020, 0x0C0C2020u, 0x0C07A77Eu); }  /* 0C07A77A jsr @Rn */
L_0C07A77E: BLKS(0x0C07A77Eu);
	{ IF(0x0C07A780u); ; /* slot nop */ UPD(0x0C07A632u, 3); goto L_0C07A632; }  /* 0C07A77E bra */
L_0C07A790: BLKS(0x0C07A790u);
	{ IF(0x0C07A792u); ; /* slot nop */ UPD(0x0C07A610u, 3); goto L_0C07A610; }  /* 0C07A790 bra */
}

void blk_f_0C07A7B0(sh3_t *c)
{
	LOCALS;
L_0C07A7B0: BLKS(0x0C07A7B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07A7B2u, 1);  /* 0C07A7B0 mov.l Rm,@-Rn */
	r5 = 0x8u;  /* 0C07A7B2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07A7B6u, 2);  /* 0C07A7B4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07A7B8u, 1);  /* 0C07A7B6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C07A7B8 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07A7BCu, 2);  /* 0C07A7BA mov.l Rm,@-Rn */
	r4 = r9;  /* 0C07A7BC mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07A7C0u, 2);  /* 0C07A7BE mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07A7C2u, 1);  /* 0C07A7C0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07A7C4u, 1);  /* 0C07A7C2 mov.l Rm,@-Rn */
	r8 = 0xC079F80u; UPD(0x0C07A7C6u, 1);  /* 0C07A7C4 mov.l @(disp,pc),Rn */
	IF(0x0C07A7C6u); r15 -= 4; W32(r15, PR); UPD(0x0C07A7C8u, 1);  /* 0C07A7C6 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF4u;  /* 0C07A7C8 add #imm,Rn */
	IF(0x0C07A7CAu); { u32 t_ = r8; PR = 0x0C07A7CEu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C07A7CEu); }  /* 0C07A7CA jsr @Rn */
L_0C07A7CE: BLKS(0x0C07A7CEu);
	T = (r0 & r0) == 0;  /* 0C07A7CE tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A7D8u, 4); goto L_0C07A7D8; } goto L_0C07A7D4; }  /* 0C07A7D0 bf/s */
L_0C07A7D4: BLKS(0x0C07A7D4u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07A8D0u, 4); goto L_0C07A8D0; }  /* 0C07A7D4 bra */
L_0C07A7D8: BLKS(0x0C07A7D8u);
	r2 = 0xC28EDFCu; UPD(0x0C07A7DAu, 1);  /* 0C07A7D8 mov.l @(disp,pc),Rn */
	W32(r14, r2); UPD(0x0C07A7DCu, 1);  /* 0C07A7DA mov.l Rm,@Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C07A7DEu, 1);  /* 0C07A7DC mov.l Rm,@(disp,Rn) */
	IF(0x0C07A7DEu); ;  /* 0C07A7DE nop */
	UPD(0x0C07A7E0u, 1);
L_0C07A7E0: BLKS(0x0C07A7E0u);
	r7 = 0x2A0u; UPD(0x0C07A7E2u, 1);  /* 0C07A7E0 mov.w @(disp,pc),Rn */
	r3 = 0xAu;  /* 0C07A7E2 mov #imm,Rn */
	IF(0x0C07A7E4u); MACL = r9 * r7;  /* 0C07A7E4 mul.l Rm,Rn */
	r6 = 0xC29D1D8u; UPD(0x0C07A7E8u, 4);  /* 0C07A7E6 mov.l @(disp,pc),Rn */
	IF(0x0C07A7E8u); r0 = MACL;  /* 0C07A7E8 sts macl,Rn */
	r5 = 0x266u; UPD(0x0C07A7ECu, 2);  /* 0C07A7EA mov.w @(disp,pc),Rn */
	r0 += r6;  /* 0C07A7EC add Rm,Rn */
	IF(0x0C07A7EEu); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C07A7F0u, 2);  /* 0C07A7EE mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C07A7F0 extu.b Rm,Rn */
	T = r2 > r3;  /* 0C07A7F2 cmp/hi Rm,Rn */
	{ u32 c_ = T; r6 = 0xAu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A7FAu, 5); goto L_0C07A7FA; } goto L_0C07A7F8; }  /* 0C07A7F4 bt/s */
L_0C07A7F8: BLKS(0x0C07A7F8u);
	r6 = r2;  /* 0C07A7F8 mov Rm,Rn */
	UPD(0x0C07A7FAu, 2);
L_0C07A7FA: BLKS(0x0C07A7FAu);
	r1 = 0x2A0u; UPD(0x0C07A7FCu, 1);  /* 0C07A7FA mov.w @(disp,pc),Rn */
	IF(0x0C07A7FCu); MACL = r9 * r1;  /* 0C07A7FC mul.l Rm,Rn */
	r10 = 0xC29D1D8u; UPD(0x0C07A800u, 3);  /* 0C07A7FE mov.l @(disp,pc),Rn */
	IF(0x0C07A800u); r8 = MACL;  /* 0C07A800 sts macl,Rn */
	r13 = 0x266u; UPD(0x0C07A804u, 2);  /* 0C07A802 mov.w @(disp,pc),Rn */
	r10 += r8;  /* 0C07A804 add Rm,Rn */
	r10 += r13;  /* 0C07A806 add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r10); UPD(0x0C07A80Au, 3);  /* 0C07A808 mov.b @Rm,Rn */
	r13 = r6;  /* 0C07A80A mov Rm,Rn */
	r12 -= r6;  /* 0C07A80C sub Rm,Rn */
	W8(r10, r12); UPD(0x0C07A810u, 3);  /* 0C07A80E mov.b Rm,@Rn */
	r13 += 0xFFFFFFFFu;  /* 0C07A810 add #imm,Rn */
	r11 = R32(r14 + 0x4u); UPD(0x0C07A814u, 2);  /* 0C07A812 mov.l @(disp,Rm),Rn */
	r10 = 0x0u;  /* 0C07A814 mov #imm,Rn */
	r11 += r11;  /* 0C07A816 add Rm,Rn */
	W32(r14 + 0x8u, r11); UPD(0x0C07A81Au, 3);  /* 0C07A818 mov.l Rm,@(disp,Rn) */
	r12 = 0xC29D1D8u; UPD(0x0C07A81Cu, 1);  /* 0C07A81A mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C07A81C mov #imm,Rn */
	r12 += r8;  /* 0C07A81E add Rm,Rn */
	UPD(0x0C07A820u, 2);
L_0C07A820: BLKS(0x0C07A820u);
	r8 = 0x2800u; UPD(0x0C07A822u, 1);  /* 0C07A820 mov.w @(disp,pc),Rn */
	r6 = 0x50u;  /* 0C07A822 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C07A826u, 2);  /* 0C07A824 mov.l @Rm,Rn */
	IF(0x0C07A826u); MACL = r9 * r8;  /* 0C07A826 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r5 = v_; } UPD(0x0C07A82Au, 3);  /* 0C07A828 mov.w @Rm+,Rn */
	r7 = 0x5u;  /* 0C07A82A mov #imm,Rn */
	IF(0x0C07A82Cu); r8 = MACL;  /* 0C07A82C sts macl,Rn */
	IF(0x0C07A82Eu); MACL = r5 * r6;  /* 0C07A82E mul.l Rm,Rn */
	r3 = 0xC229004u; UPD(0x0C07A832u, 5);  /* 0C07A830 mov.l @(disp,pc),Rn */
	IF(0x0C07A832u); r0 = MACL;  /* 0C07A832 sts macl,Rn */
	r8 += r0;  /* 0C07A834 add Rm,Rn */
	W32(r14, r4); UPD(0x0C07A838u, 3);  /* 0C07A836 mov.l Rm,@Rn */
	r8 += r3;  /* 0C07A838 add Rm,Rn */
	r0 = R32(r14 + 0x8u); UPD(0x0C07A83Cu, 2);  /* 0C07A83A mov.l @(disp,Rm),Rn */
	r2 = 0xCD000000u; UPD(0x0C07A83Eu, 1);  /* 0C07A83C mov.l @(disp,pc),Rn */
	r0 += r10;  /* 0C07A83E add Rm,Rn */
	r4 = 0xC186820u; UPD(0x0C07A842u, 2);  /* 0C07A840 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C07A842 add Rm,Rn */
	W32(r8, r2); UPD(0x0C07A846u, 2);  /* 0C07A844 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C07A848u, 1);  /* 0C07A846 mov.l Rm,@(disp,Rn) */
	IF(0x0C07A848u); r0 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C07A84Au, 1);  /* 0C07A848 mov.w @(r0,Rm),Rn */
	r8 += 0x44u;  /* 0C07A84A add #imm,Rn */
	W16(r8, r0); UPD(0x0C07A84Eu, 2);  /* 0C07A84C mov.w Rm,@Rn */
	r4 = r9;  /* 0C07A84E mov Rm,Rn */
	r0 += 0x4u;  /* 0C07A850 add #imm,Rn */
	IF(0x0C07A852u); r0 >>= 2;  /* 0C07A852 shlr2 Rn */
	IF(0x0C07A854u); T = r0 & 1; r0 >>= 1;  /* 0C07A854 shlr Rn */
	r6 = 0xC079E80u; UPD(0x0C07A858u, 5);  /* 0C07A856 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07A858 add #imm,Rn */
	r0 &= 0x3Fu;  /* 0C07A85A and #imm,r0 */
	W32(r8 + 0x8u, r0); UPD(0x0C07A85Eu, 3);  /* 0C07A85C mov.l Rm,@(disp,Rn) */
	IF(0x0C07A85Eu); { u32 t_ = r6; PR = 0x0C07A862u; W32(r8 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07A862u); }  /* 0C07A85E jsr @Rn */
L_0C07A862: BLKS(0x0C07A862u);
	r0 = R32(r12 + 0x10u); UPD(0x0C07A864u, 1);  /* 0C07A862 mov.l @(disp,Rm),Rn */
	r5 = 0x14u;  /* 0C07A864 mov #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C07A868u, 2);  /* 0C07A866 mov.l Rm,@(disp,Rn) */
	r2 = 0xC186818u; UPD(0x0C07A86Au, 1);  /* 0C07A868 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C07A86A mov Rm,Rn */
	IF(0x0C07A86Cu); r0 <<= 2;  /* 0C07A86C shll2 Rn */
	IF(0x0C07A86Eu); r7 = R32(r0 + r2); UPD(0x0C07A870u, 3);  /* 0C07A86E mov.l @(r0,Rm),Rn */
	r6 = R32(r12 + 0x14u); UPD(0x0C07A872u, 1);  /* 0C07A870 mov.l @(disp,Rm),Rn */
	r2 = r10;  /* 0C07A872 mov Rm,Rn */
	r6 += r7;  /* 0C07A874 add Rm,Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C07A878u, 3);  /* 0C07A876 mov.l Rm,@(disp,Rn) */
	r2 += 0x1u;  /* 0C07A878 add #imm,Rn */
	r8 += 0x48u;  /* 0C07A87A add #imm,Rn */
	W8(r8, r11); UPD(0x0C07A87Eu, 3);  /* 0C07A87C mov.b Rm,@Rn */
	r10 = (u32)(s32)(s16)r2;  /* 0C07A87E exts.w Rm,Rn */
	r8 += 0x1u;  /* 0C07A880 add #imm,Rn */
	W8(r8, r13); UPD(0x0C07A884u, 3);  /* 0C07A882 mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C07A884 mov #imm,Rn */
	r8 += 0x1u;  /* 0C07A886 add #imm,Rn */
	W8(r8, r5); UPD(0x0C07A88Au, 3);  /* 0C07A888 mov.b Rm,@Rn */
	T = (s32)r10 > (s32)r0;  /* 0C07A88A cmp/gt Rm,Rn */
	r3 = 0x2A0u; UPD(0x0C07A88Eu, 2);  /* 0C07A88C mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB6u;  /* 0C07A88E add #imm,Rn */
	W32(r8 + 0x3Cu, r11); UPD(0x0C07A892u, 2);  /* 0C07A890 mov.l Rm,@(disp,Rn) */
	IF(0x0C07A892u); MACL = r9 * r3;  /* 0C07A892 mul.l Rm,Rn */
	r4 = 0x808080u; UPD(0x0C07A896u, 3);  /* 0C07A894 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07A896 add #imm,Rn */
	W32(r8, r4); UPD(0x0C07A89Au, 2);  /* 0C07A898 mov.l Rm,@Rn */
	{ u32 c_ = !T; IF(0x0C07A89Cu); r3 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C07A820u, 3); goto L_0C07A820; } goto L_0C07A89E; }  /* 0C07A89A bf/s */
L_0C07A89E: BLKS(0x0C07A89Eu);
	r13 = R32(r14 + 0x4u); UPD(0x0C07A8A0u, 2);  /* 0C07A89E mov.l @(disp,Rm),Rn */
	r13 += 0x1u;  /* 0C07A8A0 add #imm,Rn */
	r12 = (u32)(s32)(s16)r13;  /* 0C07A8A2 exts.w Rm,Rn */
	r10 = 0xC29D1D8u; UPD(0x0C07A8A6u, 3);  /* 0C07A8A4 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r12); UPD(0x0C07A8A8u, 1);  /* 0C07A8A6 mov.l Rm,@(disp,Rn) */
	r10 += r3;  /* 0C07A8A8 add Rm,Rn */
	r0 = 0x266u; UPD(0x0C07A8ACu, 2);  /* 0C07A8AA mov.w @(disp,pc),Rn */
	IF(0x0C07A8ACu); r11 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C07A8AEu, 1);  /* 0C07A8AC mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C07A8AE tst Rm,Rn */
	{ u32 c_ = !T; r4 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07A7E0u, 4); goto L_0C07A7E0; } goto L_0C07A8B4; }  /* 0C07A8B0 bf/s */
L_0C07A8B4: BLKS(0x0C07A8B4u);
	r7 = 0xC0C20A0u; UPD(0x0C07A8B6u, 2);  /* 0C07A8B4 mov.l @(disp,pc),Rn */
	r5 = 0x53u;  /* 0C07A8B6 mov #imm,Rn */
	r14 += 0xCu;  /* 0C07A8B8 add #imm,Rn */
	r15 = r14;  /* 0C07A8BA mov Rm,Rn */
	IF(0x0C07A8BCu); PR = R32(r15); r15 += 4; UPD(0x0C07A8BEu, 4);  /* 0C07A8BC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A8C0u, 1);  /* 0C07A8BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07A8C2u, 1);  /* 0C07A8C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A8C4u, 1);  /* 0C07A8C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A8C6u, 1);  /* 0C07A8C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A8C8u, 1);  /* 0C07A8C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A8CAu, 1);  /* 0C07A8C8 mov.l @Rm+,Rn */
	IF(0x0C07A8CAu); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C07A8CA jmp @Rn */
L_0C07A8D0: BLKS(0x0C07A8D0u);
	r15 = r14;  /* 0C07A8D0 mov Rm,Rn */
	IF(0x0C07A8D2u); PR = R32(r15); r15 += 4; UPD(0x0C07A8D4u, 2);  /* 0C07A8D2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A8D6u, 1);  /* 0C07A8D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07A8D8u, 1);  /* 0C07A8D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A8DAu, 1);  /* 0C07A8D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A8DCu, 1);  /* 0C07A8DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A8DEu, 1);  /* 0C07A8DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A8E0u, 1);  /* 0C07A8DE mov.l @Rm+,Rn */
	IF(0x0C07A8E0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07A8E0 rts */
}

void blk_f_0C07A920(sh3_t *c)
{
	LOCALS;
L_0C07A920: BLKS(0x0C07A920u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07A922u, 1);  /* 0C07A920 mov.l Rm,@-Rn */
	r5 = 0x8u;  /* 0C07A922 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07A926u, 2);  /* 0C07A924 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07A928u, 1);  /* 0C07A926 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C07A928 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07A92Cu, 2);  /* 0C07A92A mov.l Rm,@-Rn */
	r4 = r9;  /* 0C07A92C mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07A930u, 2);  /* 0C07A92E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07A932u, 1);  /* 0C07A930 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07A934u, 1);  /* 0C07A932 mov.l Rm,@-Rn */
	r8 = 0xC079F80u; UPD(0x0C07A936u, 1);  /* 0C07A934 mov.l @(disp,pc),Rn */
	IF(0x0C07A936u); r15 -= 4; W32(r15, PR); UPD(0x0C07A938u, 1);  /* 0C07A936 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF0u;  /* 0C07A938 add #imm,Rn */
	IF(0x0C07A93Au); { u32 t_ = r8; PR = 0x0C07A93Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C07A93Eu); }  /* 0C07A93A jsr @Rn */
L_0C07A93E: BLKS(0x0C07A93Eu);
	T = (r0 & r0) == 0;  /* 0C07A93E tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A948u, 4); goto L_0C07A948; } goto L_0C07A944; }  /* 0C07A940 bf/s */
L_0C07A944: BLKS(0x0C07A944u);
	{ r14 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C07AA40u, 4); goto L_0C07AA40; }  /* 0C07A944 bra */
L_0C07A948: BLKS(0x0C07A948u);
	r1 = 0xC28EDFCu; UPD(0x0C07A94Au, 1);  /* 0C07A948 mov.l @(disp,pc),Rn */
	W32(r14, r1); UPD(0x0C07A94Cu, 1);  /* 0C07A94A mov.l Rm,@Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C07A94Eu, 1);  /* 0C07A94C mov.l Rm,@(disp,Rn) */
	IF(0x0C07A94Eu); ;  /* 0C07A94E nop */
	UPD(0x0C07A950u, 1);
L_0C07A950: BLKS(0x0C07A950u);
	r6 = 0x2A0u; UPD(0x0C07A952u, 1);  /* 0C07A950 mov.w @(disp,pc),Rn */
	r3 = 0xAu;  /* 0C07A952 mov #imm,Rn */
	IF(0x0C07A954u); MACL = r9 * r6;  /* 0C07A954 mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C07A958u, 4);  /* 0C07A956 mov.l @(disp,pc),Rn */
	r2 = 0x266u; UPD(0x0C07A95Au, 1);  /* 0C07A958 mov.w @(disp,pc),Rn */
	IF(0x0C07A95Au); r0 = MACL;  /* 0C07A95A sts macl,Rn */
	r0 += r5;  /* 0C07A95C add Rm,Rn */
	IF(0x0C07A95Eu); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07A960u, 3);  /* 0C07A95E mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C07A960 extu.b Rm,Rn */
	T = r2 > r3;  /* 0C07A962 cmp/hi Rm,Rn */
	{ u32 c_ = T; r6 = 0xAu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A96Au, 5); goto L_0C07A96A; } goto L_0C07A968; }  /* 0C07A964 bt/s */
L_0C07A968: BLKS(0x0C07A968u);
	r6 = r2;  /* 0C07A968 mov Rm,Rn */
	UPD(0x0C07A96Au, 2);
L_0C07A96A: BLKS(0x0C07A96Au);
	r0 = 0x2A0u; UPD(0x0C07A96Cu, 1);  /* 0C07A96A mov.w @(disp,pc),Rn */
	IF(0x0C07A96Cu); MACL = r9 * r0;  /* 0C07A96C mul.l Rm,Rn */
	r11 = 0xC29D1D8u; UPD(0x0C07A970u, 3);  /* 0C07A96E mov.l @(disp,pc),Rn */
	IF(0x0C07A970u); r7 = MACL;  /* 0C07A970 sts macl,Rn */
	r13 = 0x266u; UPD(0x0C07A974u, 2);  /* 0C07A972 mov.w @(disp,pc),Rn */
	r11 += r7;  /* 0C07A974 add Rm,Rn */
	r11 += r13;  /* 0C07A976 add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r11); UPD(0x0C07A97Au, 3);  /* 0C07A978 mov.b @Rm,Rn */
	r13 = r6;  /* 0C07A97A mov Rm,Rn */
	r12 -= r6;  /* 0C07A97C sub Rm,Rn */
	W8(r11, r12); UPD(0x0C07A980u, 3);  /* 0C07A97E mov.b Rm,@Rn */
	r13 += 0xFFFFFFFFu;  /* 0C07A980 add #imm,Rn */
	r10 = R32(r14 + 0x4u); UPD(0x0C07A984u, 2);  /* 0C07A982 mov.l @(disp,Rm),Rn */
	r11 = 0x0u;  /* 0C07A984 mov #imm,Rn */
	r8 = R32(r14 + 0x4u); UPD(0x0C07A988u, 2);  /* 0C07A986 mov.l @(disp,Rm),Rn */
	IF(0x0C07A988u); r10 <<= 2;  /* 0C07A988 shll2 Rn */
	W32(r14 + 0xCu, r10); UPD(0x0C07A98Cu, 2);  /* 0C07A98A mov.l Rm,@(disp,Rn) */
	r8 += r8;  /* 0C07A98C add Rm,Rn */
	r12 = 0xC29D1D8u; UPD(0x0C07A990u, 2);  /* 0C07A98E mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C07A990 mov #imm,Rn */
	W32(r14 + 0x8u, r8); UPD(0x0C07A994u, 2);  /* 0C07A992 mov.l Rm,@(disp,Rn) */
	r12 += r7;  /* 0C07A994 add Rm,Rn */
	IF(0x0C07A996u); ;  /* 0C07A996 nop */
	UPD(0x0C07A998u, 2);
L_0C07A998: BLKS(0x0C07A998u);
	r8 = 0x2800u; UPD(0x0C07A99Au, 1);  /* 0C07A998 mov.w @(disp,pc),Rn */
	r1 = 0x50u;  /* 0C07A99A mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C07A99Eu, 2);  /* 0C07A99C mov.l @Rm,Rn */
	IF(0x0C07A99Eu); MACL = r9 * r8;  /* 0C07A99E mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r5 = v_; } UPD(0x0C07A9A2u, 3);  /* 0C07A9A0 mov.w @Rm+,Rn */
	r2 = 0x5u;  /* 0C07A9A2 mov #imm,Rn */
	IF(0x0C07A9A4u); r8 = MACL;  /* 0C07A9A4 sts macl,Rn */
	IF(0x0C07A9A6u); MACL = r5 * r1;  /* 0C07A9A6 mul.l Rm,Rn */
	r6 = 0xC229004u; UPD(0x0C07A9AAu, 5);  /* 0C07A9A8 mov.l @(disp,pc),Rn */
	IF(0x0C07A9AAu); r7 = MACL;  /* 0C07A9AA sts macl,Rn */
	r0 = 0xC079E80u; UPD(0x0C07A9AEu, 2);  /* 0C07A9AC mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C07A9AE add Rm,Rn */
	r3 = 0xCD000000u; UPD(0x0C07A9B2u, 2);  /* 0C07A9B0 mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C07A9B2 add Rm,Rn */
	W32(r14, r4); UPD(0x0C07A9B6u, 2);  /* 0C07A9B4 mov.l Rm,@Rn */
	W32(r8, r3); UPD(0x0C07A9B8u, 1);  /* 0C07A9B6 mov.l Rm,@Rn */
	r4 = r9;  /* 0C07A9B8 mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C07A9BCu, 2);  /* 0C07A9BA mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r10); UPD(0x0C07A9BEu, 1);  /* 0C07A9BC mov.l Rm,@(disp,Rn) */
	IF(0x0C07A9BEu); { u32 t_ = r0; PR = 0x0C07A9C2u; W32(r8 + 0x8u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07A9C2u); }  /* 0C07A9BE jsr @Rn */
L_0C07A9C2: BLKS(0x0C07A9C2u);
	r0 = R32(r14 + 0xCu); UPD(0x0C07A9C4u, 1);  /* 0C07A9C2 mov.l @(disp,Rm),Rn */
	r4 = 0xC186830u; UPD(0x0C07A9C6u, 1);  /* 0C07A9C4 mov.l @(disp,pc),Rn */
	IF(0x0C07A9C6u); r7 = R32(r0 + r4); UPD(0x0C07A9C8u, 1);  /* 0C07A9C6 mov.l @(r0,Rm),Rn */
	r6 = R32(r12 + 0x10u); UPD(0x0C07A9CAu, 1);  /* 0C07A9C8 mov.l @(disp,Rm),Rn */
	r0 = R32(r14 + 0x8u); UPD(0x0C07A9CCu, 1);  /* 0C07A9CA mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C07A9CC add Rm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C07A9D0u, 2);  /* 0C07A9CE mov.l Rm,@(disp,Rn) */
	r0 += r11;  /* 0C07A9D0 add Rm,Rn */
	r5 = 0xC186840u; UPD(0x0C07A9D4u, 2);  /* 0C07A9D2 mov.l @(disp,pc),Rn */
	IF(0x0C07A9D4u); r0 <<= 2;  /* 0C07A9D4 shll2 Rn */
	IF(0x0C07A9D6u); r2 = R32(r0 + r5); UPD(0x0C07A9D8u, 2);  /* 0C07A9D6 mov.l @(r0,Rm),Rn */
	r7 = 0x0u;  /* 0C07A9D8 mov #imm,Rn */
	r4 = R32(r12 + 0x14u); UPD(0x0C07A9DCu, 2);  /* 0C07A9DA mov.l @(disp,Rm),Rn */
	r6 = 0x14u;  /* 0C07A9DC mov #imm,Rn */
	r4 += r2;  /* 0C07A9DE add Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C07A9E2u, 3);  /* 0C07A9E0 mov.l Rm,@(disp,Rn) */
	r2 = r11;  /* 0C07A9E2 mov Rm,Rn */
	r8 += 0x44u;  /* 0C07A9E4 add #imm,Rn */
	W16(r8, r10); UPD(0x0C07A9E8u, 3);  /* 0C07A9E6 mov.w Rm,@Rn */
	r2 += 0x1u;  /* 0C07A9E8 add #imm,Rn */
	r8 += 0x4u;  /* 0C07A9EA add #imm,Rn */
	W8(r8, r7); UPD(0x0C07A9EEu, 3);  /* 0C07A9EC mov.b Rm,@Rn */
	r11 = (u32)(s32)(s16)r2;  /* 0C07A9EE exts.w Rm,Rn */
	r8 += 0x1u;  /* 0C07A9F0 add #imm,Rn */
	W8(r8, r13); UPD(0x0C07A9F4u, 3);  /* 0C07A9F2 mov.b Rm,@Rn */
	r4 = 0x1u;  /* 0C07A9F4 mov #imm,Rn */
	r8 += 0x1u;  /* 0C07A9F6 add #imm,Rn */
	W8(r8, r6); UPD(0x0C07A9FAu, 3);  /* 0C07A9F8 mov.b Rm,@Rn */
	T = (s32)r11 > (s32)r4;  /* 0C07A9FA cmp/gt Rm,Rn */
	r8 += 0xFFFFFFB6u;  /* 0C07A9FC add #imm,Rn */
	r3 = 0x2A0u; UPD(0x0C07AA00u, 3);  /* 0C07A9FE mov.w @(disp,pc),Rn */
	W32(r8 + 0x3Cu, r10); UPD(0x0C07AA02u, 1);  /* 0C07AA00 mov.l Rm,@(disp,Rn) */
	IF(0x0C07AA02u); MACL = r9 * r3;  /* 0C07AA02 mul.l Rm,Rn */
	r5 = 0x808080u; UPD(0x0C07AA06u, 3);  /* 0C07AA04 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07AA06 add #imm,Rn */
	{ u32 c_ = !T; W32(r8, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C07A998u, 4); goto L_0C07A998; } UPD(0x0C07AA0Cu, 1); goto L_0C07AA0C; }  /* 0C07AA08 bf/s */
L_0C07AA0C: BLKS(0x0C07AA0Cu);
	r5 = R32(r14 + 0x4u); UPD(0x0C07AA0Eu, 1);  /* 0C07AA0C mov.l @(disp,Rm),Rn */
	IF(0x0C07AA0Eu); r0 = MACL;  /* 0C07AA0E sts macl,Rn */
	r5 += 0x1u;  /* 0C07AA10 add #imm,Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C07AA12 exts.w Rm,Rn */
	r12 = 0xC29D1D8u; UPD(0x0C07AA16u, 4);  /* 0C07AA14 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r13); UPD(0x0C07AA18u, 1);  /* 0C07AA16 mov.l Rm,@(disp,Rn) */
	r0 += r12;  /* 0C07AA18 add Rm,Rn */
	r11 = 0x266u; UPD(0x0C07AA1Cu, 2);  /* 0C07AA1A mov.w @(disp,pc),Rn */
	IF(0x0C07AA1Cu); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C07AA1Eu, 1);  /* 0C07AA1C mov.b @(r0,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C07AA1E tst Rm,Rn */
	{ u32 c_ = !T; r4 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07A950u, 4); goto L_0C07A950; } goto L_0C07AA24; }  /* 0C07AA20 bf/s */
L_0C07AA24: BLKS(0x0C07AA24u);
	r0 = 0xC0C20A0u; UPD(0x0C07AA26u, 2);  /* 0C07AA24 mov.l @(disp,pc),Rn */
	r5 = 0x53u;  /* 0C07AA26 mov #imm,Rn */
	r14 += 0x10u;  /* 0C07AA28 add #imm,Rn */
	r15 = r14;  /* 0C07AA2A mov Rm,Rn */
	IF(0x0C07AA2Cu); PR = R32(r15); r15 += 4; UPD(0x0C07AA2Eu, 4);  /* 0C07AA2C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07AA30u, 1);  /* 0C07AA2E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07AA32u, 1);  /* 0C07AA30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07AA34u, 1);  /* 0C07AA32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07AA36u, 1);  /* 0C07AA34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07AA38u, 1);  /* 0C07AA36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07AA3Au, 1);  /* 0C07AA38 mov.l @Rm+,Rn */
	IF(0x0C07AA3Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C07AA3A jmp @Rn */
L_0C07AA40: BLKS(0x0C07AA40u);
	r15 = r14;  /* 0C07AA40 mov Rm,Rn */
	IF(0x0C07AA42u); PR = R32(r15); r15 += 4; UPD(0x0C07AA44u, 2);  /* 0C07AA42 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07AA46u, 1);  /* 0C07AA44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07AA48u, 1);  /* 0C07AA46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07AA4Au, 1);  /* 0C07AA48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07AA4Cu, 1);  /* 0C07AA4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07AA4Eu, 1);  /* 0C07AA4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07AA50u, 1);  /* 0C07AA4E mov.l @Rm+,Rn */
	IF(0x0C07AA50u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07AA50 rts */
}


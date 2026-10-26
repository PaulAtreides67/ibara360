#include "recomp.h"
#include "recomp_funcs.h"

/* FUN_0c0580d0 */
void f_0C0580D0(sh3_t *c)
{
	LOCALS;
L_0C0580D0: BLKS(0x0C0580D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0580D2u, 1);  /* 0C0580D0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0580D4u, 1);  /* 0C0580D2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0580D4 exts.w Rm,Rn */
	r0 = 0xC0AFE40u; UPD(0x0C0580D8u, 2);  /* 0C0580D6 mov.l @(disp,pc),Rn */
	IF(0x0C0580D8u); r15 -= 4; W32(r15, PR); UPD(0x0C0580DAu, 1);  /* 0C0580D8 sts.l pr,@-Rn */
	IF(0x0C0580DAu); { u32 t_ = r0; PR = 0x0C0580DEu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0580DEu); }  /* 0C0580DA jsr @Rn */
L_0C0580DE: BLKS(0x0C0580DEu);
	r3 = r0;  /* 0C0580DE mov Rm,Rn */
	r0 = 0x280u; UPD(0x0C0580E2u, 2);  /* 0C0580E0 mov.w @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C0580E2 mov #imm,Rn */
	r3 &= r5;  /* 0C0580E4 and Rm,Rn */
	IF(0x0C0580E6u); MACL = r3 * r0;  /* 0C0580E6 mul.l Rm,Rn */
	r2 = 0xC283794u; UPD(0x0C0580EAu, 5);  /* 0C0580E8 mov.l @(disp,pc),Rn */
	IF(0x0C0580EAu); r0 = MACL;  /* 0C0580EA sts macl,Rn */
	IF(0x0C0580ECu); r4 = R32(r0 + r2); UPD(0x0C0580EEu, 2);  /* 0C0580EC mov.l @(r0,Rm),Rn */
	r0 = 0x4000000u; UPD(0x0C0580F0u, 1);  /* 0C0580EE mov.l @(disp,pc),Rn */
	T = (r4 & r0) == 0;  /* 0C0580F0 tst Rm,Rn */
	{ u32 c_ = !T; r6 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0580F8u, 4); goto L_0C0580F8; } goto L_0C0580F6; }  /* 0C0580F2 bf/s */
L_0C0580F6: BLKS(0x0C0580F6u);
	r3 ^= r6;  /* 0C0580F6 xor Rm,Rn */
	UPD(0x0C0580F8u, 2);
L_0C0580F8: BLKS(0x0C0580F8u);
	r4 = 0xB4u; UPD(0x0C0580FAu, 1);  /* 0C0580F8 mov.w @(disp,pc),Rn */
	IF(0x0C0580FAu); MACL = r8 * r4;  /* 0C0580FA mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0580FEu, 3);  /* 0C0580FC mov.l @(disp,pc),Rn */
	IF(0x0C0580FEu); r8 = MACL;  /* 0C0580FE sts macl,Rn */
	r0 = 0x9Eu; UPD(0x0C058102u, 2);  /* 0C058100 mov.w @(disp,pc),Rn */
	r7 += r8;  /* 0C058102 add Rm,Rn */
	IF(0x0C058104u); W8(r0 + r7, r3); UPD(0x0C058106u, 2);  /* 0C058104 mov.b Rm,@(r0,Rn) */
	r0 = r3;  /* 0C058106 mov Rm,Rn */
	r15 = r14;  /* 0C058108 mov Rm,Rn */
	IF(0x0C05810Au); PR = R32(r15); r15 += 4; UPD(0x0C05810Cu, 3);  /* 0C05810A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05810Eu, 1);  /* 0C05810C mov.l @Rm+,Rn */
	IF(0x0C05810Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05810E rts */
}

/* FUN_0c058130 */
void f_0C058130(sh3_t *c)
{
	LOCALS;
L_0C058130: BLKS(0x0C058130u);
	r6 = 0xB4u; UPD(0x0C058132u, 1);  /* 0C058130 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r4;  /* 0C058132 exts.w Rm,Rn */
	IF(0x0C058134u); MACL = r7 * r6;  /* 0C058134 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C058138u, 4);  /* 0C058136 mov.l @(disp,pc),Rn */
	IF(0x0C058138u); r7 = MACL;  /* 0C058138 sts macl,Rn */
	r3 = 0x9Eu; UPD(0x0C05813Cu, 2);  /* 0C05813A mov.w @(disp,pc),Rn */
	r7 += r5;  /* 0C05813C add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C058140u, 2);  /* 0C05813E mov.l Rm,@-Rn */
	r7 += r3;  /* 0C058140 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C058144u, 2);  /* 0C058142 mov.b @Rm,Rn */
	r3 = 0x1u;  /* 0C058144 mov #imm,Rn */
	r0 = 0x280u; UPD(0x0C058148u, 2);  /* 0C058146 mov.w @(disp,pc),Rn */
	r3 &= r1;  /* 0C058148 and Rm,Rn */
	IF(0x0C05814Au); MACL = r3 * r0;  /* 0C05814A mul.l Rm,Rn */
	r2 = 0xC283794u; UPD(0x0C05814Eu, 4);  /* 0C05814C mov.l @(disp,pc),Rn */
	IF(0x0C05814Eu); r0 = MACL;  /* 0C05814E sts macl,Rn */
	IF(0x0C058150u); r4 = R32(r0 + r2); UPD(0x0C058152u, 2);  /* 0C058150 mov.l @(r0,Rm),Rn */
	r0 = 0x4000000u; UPD(0x0C058154u, 1);  /* 0C058152 mov.l @(disp,pc),Rn */
	T = (r4 & r0) == 0;  /* 0C058154 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05815Eu, 4); goto L_0C05815E; } goto L_0C05815A; }  /* 0C058156 bf/s */
L_0C05815A: BLKS(0x0C05815Au);
	r4 = 0x1u;  /* 0C05815A mov #imm,Rn */
	r3 ^= r4;  /* 0C05815C xor Rm,Rn */
	UPD(0x0C05815Eu, 3);
L_0C05815E: BLKS(0x0C05815Eu);
	W8(r7, r3); UPD(0x0C058160u, 1);  /* 0C05815E mov.b Rm,@Rn */
	r0 = r3;  /* 0C058160 mov Rm,Rn */
	r15 = r14;  /* 0C058162 mov Rm,Rn */
	IF(0x0C058164u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C058164 rts */
}

/* FUN_0c058180 */
void f_0C058180(sh3_t *c)
{
	LOCALS;
L_0C058180: BLKS(0x0C058180u);
	r0 = 0xB4u; UPD(0x0C058182u, 1);  /* 0C058180 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C058182 exts.w Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C058186u, 2);  /* 0C058184 mov.l Rm,@-Rn */
	IF(0x0C058186u); MACL = r1 * r0;  /* 0C058186 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05818Au, 3);  /* 0C058188 mov.l Rm,@-Rn */
	r7 = 0xC26CD40u; UPD(0x0C05818Cu, 1);  /* 0C05818A mov.l @(disp,pc),Rn */
	IF(0x0C05818Cu); r0 = MACL;  /* 0C05818C sts macl,Rn */
	IF(0x0C05818Eu); r15 -= 4; W32(r15, PR); UPD(0x0C058190u, 2);  /* 0C05818E sts.l pr,@-Rn */
	r0 += r7;  /* 0C058190 add Rm,Rn */
	r6 = 0x9Eu; UPD(0x0C058194u, 2);  /* 0C058192 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C058194 mov Rm,Rn */
	IF(0x0C058196u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C058198u, 2);  /* 0C058196 mov.b @(r0,Rm),Rn */
	r3 = 0x280u; UPD(0x0C05819Au, 1);  /* 0C058198 mov.w @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C05819A extu.b Rm,Rn */
	IF(0x0C05819Cu); MACL = r4 * r3;  /* 0C05819C mul.l Rm,Rn */
	r8 = 0x86u; UPD(0x0C0581A0u, 4);  /* 0C05819E mov.w @(disp,pc),Rn */
	r4 = R32(r0 + 0x24u); UPD(0x0C0581A2u, 1);  /* 0C0581A0 mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C0581A2 add Rm,Rn */
	r5 = R32(r0 + 0x28u); UPD(0x0C0581A6u, 2);  /* 0C0581A4 mov.l @(disp,Rm),Rn */
	IF(0x0C0581A6u); r3 = MACL;  /* 0C0581A6 sts macl,Rn */
	r2 = 0xC283794u; UPD(0x0C0581AAu, 2);  /* 0C0581A8 mov.l @(disp,pc),Rn */
	r0 = 0xC057390u; UPD(0x0C0581ACu, 1);  /* 0C0581AA mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C0581AC add Rm,Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C0581B0u, 2);  /* 0C0581AE mov.l @(disp,Rm),Rn */
	IF(0x0C0581B0u); { u32 t_ = r0; PR = 0x0C0581B4u; r7 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C0581B4u); }  /* 0C0581B0 jsr @Rn */
L_0C0581B4: BLKS(0x0C0581B4u);
	W16(r8, r0); UPD(0x0C0581B6u, 1);  /* 0C0581B4 mov.w Rm,@Rn */
	r15 = r14;  /* 0C0581B6 mov Rm,Rn */
	IF(0x0C0581B8u); PR = R32(r15); r15 += 4; UPD(0x0C0581BAu, 2);  /* 0C0581B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0581BCu, 1);  /* 0C0581BA mov.l @Rm+,Rn */
	IF(0x0C0581BCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0581BC rts */
}

/* FUN_0c058240 */
void f_0C058240(sh3_t *c)
{
	LOCALS;
L_0C058240: BLKS(0x0C058240u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C058242u, 1);  /* 0C058240 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C058242 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C058246u, 2);  /* 0C058244 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C058246 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05824Au, 2);  /* 0C058248 mov.l Rm,@-Rn */
	r7 = 0xFu;  /* 0C05824A mov #imm,Rn */
	r6 = 0x400u; UPD(0x0C05824Eu, 2);  /* 0C05824C mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C05824E mov Rm,Rn */
	r9 = 0xC38BC64u; UPD(0x0C058252u, 2);  /* 0C058250 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C058252 mov #imm,Rn */
	r8 = 0x1Fu;  /* 0C058254 mov #imm,Rn */
	IF(0x0C058256u); ;  /* 0C058256 nop */
	UPD(0x0C058258u, 3);
L_0C058258: BLKS(0x0C058258u);
	r2 = r5;  /* 0C058258 mov Rm,Rn */
	r2 += r2;  /* 0C05825A add Rm,Rn */
	r3 = 0x0u;  /* 0C05825C mov #imm,Rn */
	r2 += r9;  /* 0C05825E add Rm,Rn */
	UPD(0x0C058260u, 4);
L_0C058260: BLKS(0x0C058260u);
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r1 = v_; } UPD(0x0C058262u, 1);  /* 0C058260 mov.w @Rm+,Rn */
	T = r1 == r6;  /* 0C058262 cmp/eq Rm,Rn */
	{ u32 c_ = T; r1 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05826Cu, 4); goto L_0C05826C; } goto L_0C058268; }  /* 0C058264 bt/s */
L_0C058268: BLKS(0x0C058268u);
	r1 += 0x1u;  /* 0C058268 add #imm,Rn */
	r0 = (u32)(s32)(s16)r1;  /* 0C05826A exts.w Rm,Rn */
	UPD(0x0C05826Cu, 3);
L_0C05826C: BLKS(0x0C05826Cu);
	r1 = r3;  /* 0C05826C mov Rm,Rn */
	r1 += 0x1u;  /* 0C05826E add #imm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C058270 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r7;  /* 0C058272 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C058260u, 7); goto L_0C058260; }  /* 0C058274 bf */
L_0C058276: BLKS(0x0C058276u);
	r2 = r4;  /* 0C058276 mov Rm,Rn */
	r2 += 0x1u;  /* 0C058278 add #imm,Rn */
	r4 = (u32)(s32)(s16)r2;  /* 0C05827A exts.w Rm,Rn */
	T = (s32)r4 > (s32)r8;  /* 0C05827C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r5 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C058258u, 7); goto L_0C058258; } goto L_0C058282; }  /* 0C05827E bf/s */
L_0C058282: BLKS(0x0C058282u);
	r15 = r14;  /* 0C058282 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C058286u, 3);  /* 0C058284 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C058288u, 1);  /* 0C058286 mov.l @Rm+,Rn */
	IF(0x0C058288u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C058288 rts */
}

/* FUN_0c0583a0 */
void f_0C0583A0(sh3_t *c)
{
	LOCALS;
L_0C0583A0: BLKS(0x0C0583A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0583A2u, 1);  /* 0C0583A0 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0583A2 exts.w Rm,Rn */
	r0 = 0xC1D93E4u; UPD(0x0C0583A6u, 2);  /* 0C0583A4 mov.l @(disp,pc),Rn */
	IF(0x0C0583A6u); r1 <<= 2;  /* 0C0583A6 shll2 Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0583AAu, 2);  /* 0C0583A8 mov.l Rm,@-Rn */
	r1 += r1;  /* 0C0583AA add Rm,Rn */
	r0 += r1;  /* 0C0583AC add Rm,Rn */
	r2 = R32(r0 + 0x4u); UPD(0x0C0583B0u, 3);  /* 0C0583AE mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r1 = v_; } UPD(0x0C0583B2u, 1);  /* 0C0583B0 mov.w @Rm+,Rn */
	T = (r1 & r1) == 0;  /* 0C0583B2 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0583DCu, 4); goto L_0C0583DC; } goto L_0C0583B8; }  /* 0C0583B4 bt/s */
L_0C0583B8: BLKS(0x0C0583B8u);
	r5 = 0xC38BC64u; UPD(0x0C0583BAu, 2);  /* 0C0583B8 mov.l @(disp,pc),Rn */
	r6 = 0xC284EC0u; UPD(0x0C0583BCu, 1);  /* 0C0583BA mov.l @(disp,pc),Rn */
	r7 = 0xC220C64u; UPD(0x0C0583BEu, 1);  /* 0C0583BC mov.l @(disp,pc),Rn */
	r3 = 0x400u; UPD(0x0C0583C0u, 1);  /* 0C0583BE mov.w @(disp,pc),Rn */
	r0 = r6;  /* 0C0583C0 mov Rm,Rn */
	UPD(0x0C0583C2u, 1);
L_0C0583C2: BLKS(0x0C0583C2u);
	IF(0x0C0583C2u); r8 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C0583C4u, 1);  /* 0C0583C2 mov.b @(r0,Rm),Rn */
	r0 = r7;  /* 0C0583C4 mov Rm,Rn */
	IF(0x0C0583C6u); r1 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C0583C8u, 2);  /* 0C0583C6 mov.b @(r0,Rm),Rn */
	r0 = 0x4u;  /* 0C0583C8 mov #imm,Rn */
	IF(0x0C0583CAu); ARG0(0x480Du); { s32 s_ = (s32)r0; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C0583CA shld Rm,Rn */
	r8 += r1;  /* 0C0583CC add Rm,Rn */
	r8 += r8;  /* 0C0583CE add Rm,Rn */
	r0 = r8;  /* 0C0583D0 mov Rm,Rn */
	IF(0x0C0583D2u); W16(r0 + r5, r3); UPD(0x0C0583D4u, 6);  /* 0C0583D2 mov.w Rm,@(r0,Rn) */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r1 = v_; } UPD(0x0C0583D6u, 1);  /* 0C0583D4 mov.w @Rm+,Rn */
	T = (r1 & r1) == 0;  /* 0C0583D6 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0583C2u, 4); goto L_0C0583C2; } UPD(0x0C0583DCu, 1); goto L_0C0583DC; }  /* 0C0583D8 bf/s */
L_0C0583DC: BLKS(0x0C0583DCu);
	r15 = r14;  /* 0C0583DC mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0583E0u, 2);  /* 0C0583DE mov.l @Rm+,Rn */
	IF(0x0C0583E0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0583E0 rts */
}

/* FUN_0c058480 */
void f_0C058480(sh3_t *c)
{
	LOCALS;
L_0C058480: BLKS(0x0C058480u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C058482u, 1);  /* 0C058480 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C058484u, 1);  /* 0C058482 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C058484 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C058488u, 2);  /* 0C058486 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C058488 exts.w Rm,Rn */
	r0 = 0xC0579C0u; UPD(0x0C05848Cu, 2);  /* 0C05848A mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C05848C mov Rm,Rn */
	IF(0x0C05848Eu); r15 -= 4; W32(r15, PR); UPD(0x0C058490u, 2);  /* 0C05848E sts.l pr,@-Rn */
	IF(0x0C058490u); { u32 t_ = r0; PR = 0x0C058494u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0579C0, 0x0C0579C0u, 0x0C058494u); }  /* 0C058490 jsr @Rn */
L_0C058494: BLKS(0x0C058494u);
	T = (r0 & r0) == 0;  /* 0C058494 tst Rm,Rn */
	if (T) { UPD(0x0C0584C0u, 4); goto L_0C0584C0; }  /* 0C058496 bt */
L_0C058498: BLKS(0x0C058498u);
	r3 = 0xC284EC0u; UPD(0x0C05849Au, 1);  /* 0C058498 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C05849A mov Rm,Rn */
	IF(0x0C05849Cu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C05849Eu, 2);  /* 0C05849C mov.b @(r0,Rm),Rn */
	r2 = 0xC220C64u; UPD(0x0C0584A0u, 1);  /* 0C05849E mov.l @(disp,pc),Rn */
	IF(0x0C0584A0u); r7 <<= 16;  /* 0C0584A0 shll16 Rn */
	r0 = r2;  /* 0C0584A2 mov Rm,Rn */
	IF(0x0C0584A4u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0584A6u, 3);  /* 0C0584A4 mov.b @(r0,Rm),Rn */
	r7 |= r2;  /* 0C0584A6 or Rm,Rn */
	UPD(0x0C0584A8u, 1);
L_0C0584A8: BLKS(0x0C0584A8u);
	r0 = r7;  /* 0C0584A8 mov Rm,Rn */
	r15 = r14;  /* 0C0584AA mov Rm,Rn */
	IF(0x0C0584ACu); PR = R32(r15); r15 += 4; UPD(0x0C0584AEu, 3);  /* 0C0584AC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0584B0u, 1);  /* 0C0584AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0584B2u, 1);  /* 0C0584B0 mov.l @Rm+,Rn */
	IF(0x0C0584B2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0584B2 rts */
L_0C0584C0: BLKS(0x0C0584C0u);
	r0 = 0xC0578E0u; UPD(0x0C0584C2u, 1);  /* 0C0584C0 mov.l @(disp,pc),Rn */
	IF(0x0C0584C2u); { u32 t_ = r0; PR = 0x0C0584C6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0578E0, 0x0C0578E0u, 0x0C0584C6u); }  /* 0C0584C2 jsr @Rn */
L_0C0584C6: BLKS(0x0C0584C6u);
	T = (r0 & r0) == 0;  /* 0C0584C6 tst Rm,Rn */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0584A8u, 4); goto L_0C0584A8; } goto L_0C0584CC; }  /* 0C0584C8 bt/s */
L_0C0584CC: BLKS(0x0C0584CCu);
	r6 = 0x400u; UPD(0x0C0584CEu, 2);  /* 0C0584CC mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0584CE mov #imm,Rn */
	r7 = 0xFFu; UPD(0x0C0584D2u, 2);  /* 0C0584D0 mov.w @(disp,pc),Rn */
	r3 = 0xC286068u; UPD(0x0C0584D4u, 1);  /* 0C0584D2 mov.l @(disp,pc),Rn */
	r5 = 0x3FFFu; UPD(0x0C0584D6u, 1);  /* 0C0584D4 mov.w @(disp,pc),Rn */
	IF(0x0C0584D6u); ;  /* 0C0584D6 nop */
	UPD(0x0C0584D8u, 1);
L_0C0584D8: BLKS(0x0C0584D8u);
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C0584DAu, 1);  /* 0C0584D8 mov.w @Rm+,Rn */
	r0 &= r5;  /* 0C0584DA and Rm,Rn */
	T = r0 == r6;  /* 0C0584DC cmp/eq Rm,Rn */
	{ u32 c_ = T; r4 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C058530u, 5); goto L_0C058530; } goto L_0C0584E2; }  /* 0C0584DE bt/s */
L_0C0584E2: BLKS(0x0C0584E2u);
	r4 += 0x1u;  /* 0C0584E2 add #imm,Rn */
	r2 = (u32)(s32)(s16)r4;  /* 0C0584E4 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r7;  /* 0C0584E6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0584D8u, 7); goto L_0C0584D8; }  /* 0C0584E8 bf */
L_0C0584EA: BLKS(0x0C0584EAu);
	r0 = 0x100u; UPD(0x0C0584ECu, 1);  /* 0C0584EA mov.w @(disp,pc),Rn */
L_0C0584EC: BLKS(0x0C0584ECu);
	r5 = 0xFFu; UPD(0x0C0584EEu, 1);  /* 0C0584EC mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C0584EE exts.w Rm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C0584F0 cmp/gt Rm,Rn */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0584A8u, 5); goto L_0C0584A8; } goto L_0C0584F6; }  /* 0C0584F2 bt/s */
L_0C0584F6: BLKS(0x0C0584F6u);
	r0 = r3;  /* 0C0584F6 mov Rm,Rn */
	r6 = 0xC286068u; UPD(0x0C0584FAu, 3);  /* 0C0584F8 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0584FA add Rm,Rn */
	IF(0x0C0584FCu); W16(r0 + r6, r8); UPD(0x0C0584FEu, 2);  /* 0C0584FC mov.w Rm,@(r0,Rn) */
	r7 = 0xC2755BCu; UPD(0x0C058500u, 1);  /* 0C0584FE mov.l @(disp,pc),Rn */
	r2 = 0xC2175F4u; UPD(0x0C058502u, 1);  /* 0C058500 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r4 = v_; } UPD(0x0C058504u, 1);  /* 0C058502 mov.w @Rm+,Rn */
	IF(0x0C058504u); W16(r0 + r2, r4); UPD(0x0C058506u, 1);  /* 0C058504 mov.w Rm,@(r0,Rn) */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C058508u, 1);  /* 0C058506 mov.w @Rm,Rn */
	r5 = 0xC223068u; UPD(0x0C05850Au, 1);  /* 0C058508 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r6;  /* 0C05850A exts.w Rm,Rn */
	r7 = 0xC2173D8u; UPD(0x0C05850Eu, 2);  /* 0C05850C mov.l @(disp,pc),Rn */
	r1 = r6 & 0xFFFF;  /* 0C05850E extu.w Rm,Rn */
	IF(0x0C058510u); W16(r0 + r7, r9); UPD(0x0C058512u, 2);  /* 0C058510 mov.w Rm,@(r0,Rn) */
	IF(0x0C058512u); W16(r0 + r5, r6); UPD(0x0C058514u, 1);  /* 0C058512 mov.w Rm,@(r0,Rn) */
	r0 = (u32)(s32)(s16)r4;  /* 0C058514 exts.w Rm,Rn */
	IF(0x0C058516u); r0 <<= 2;  /* 0C058516 shll2 Rn */
	IF(0x0C058518u); r0 <<= 2;  /* 0C058518 shll2 Rn */
	r9 = 0xFFFF8000u; UPD(0x0C05851Cu, 4);  /* 0C05851A mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C05851C add Rm,Rn */
	r7 = 0xC38BC64u; UPD(0x0C058520u, 2);  /* 0C05851E mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C058520 add Rm,Rn */
	r8 |= r9;  /* 0C058522 or Rm,Rn */
	IF(0x0C058524u); W16(r0 + r7, r8); UPD(0x0C058526u, 3);  /* 0C058524 mov.w Rm,@(r0,Rn) */
	r7 = r4;  /* 0C058526 mov Rm,Rn */
	IF(0x0C058528u); r7 <<= 16;  /* 0C058528 shll16 Rn */
	{ r7 |= r1; /* slot or Rm,Rn */ UPD(0x0C0584A8u, 5); goto L_0C0584A8; }  /* 0C05852A bra */
L_0C058530: BLKS(0x0C058530u);
	{ r0 = r2; /* slot mov Rm,Rn */ UPD(0x0C0584ECu, 3); goto L_0C0584EC; }  /* 0C058530 bra */
}

/* FUN_0c0585b0 */
void f_0C0585B0(sh3_t *c)
{
	LOCALS;
L_0C0585B0: BLKS(0x0C0585B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0585B2u, 1);  /* 0C0585B0 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0585B2 exts.w Rm,Rn */
	r0 = 0xC1D93E4u; UPD(0x0C0585B6u, 2);  /* 0C0585B4 mov.l @(disp,pc),Rn */
	IF(0x0C0585B6u); r1 <<= 2;  /* 0C0585B6 shll2 Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0585BAu, 2);  /* 0C0585B8 mov.l Rm,@-Rn */
	r1 += r1;  /* 0C0585BA add Rm,Rn */
	r0 += r1;  /* 0C0585BC add Rm,Rn */
	r2 = R32(r0 + 0x4u); UPD(0x0C0585C0u, 3);  /* 0C0585BE mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r0 = v_; } UPD(0x0C0585C2u, 1);  /* 0C0585C0 mov.w @Rm+,Rn */
	T = (r0 & r0) == 0;  /* 0C0585C2 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0585ECu, 4); goto L_0C0585EC; } goto L_0C0585C8; }  /* 0C0585C4 bt/s */
L_0C0585C8: BLKS(0x0C0585C8u);
	r7 = 0xC220C64u; UPD(0x0C0585CAu, 2);  /* 0C0585C8 mov.l @(disp,pc),Rn */
	r3 = 0x7u;  /* 0C0585CA mov #imm,Rn */
	r4 = 0xC38BC64u; UPD(0x0C0585CEu, 2);  /* 0C0585CC mov.l @(disp,pc),Rn */
	r5 = 0xC284EC0u; UPD(0x0C0585D0u, 1);  /* 0C0585CE mov.l @(disp,pc),Rn */
	r6 = 0x400u; UPD(0x0C0585D2u, 1);  /* 0C0585D0 mov.w @(disp,pc),Rn */
	IF(0x0C0585D2u); ;  /* 0C0585D2 nop */
	UPD(0x0C0585D4u, 1);
L_0C0585D4: BLKS(0x0C0585D4u);
	IF(0x0C0585D4u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0585D6u, 1);  /* 0C0585D4 mov.b @(r0,Rm),Rn */
	T = (s32)r1 > (s32)r3;  /* 0C0585D6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0585E6u, 4); goto L_0C0585E6; }  /* 0C0585D8 bf */
L_0C0585DA: BLKS(0x0C0585DAu);
	IF(0x0C0585DAu); r0 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0585DCu, 1);  /* 0C0585DA mov.b @(r0,Rm),Rn */
	r8 = 0x4u;  /* 0C0585DC mov #imm,Rn */
	IF(0x0C0585DEu); ARG0(0x408Du); { s32 s_ = (s32)r8; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0585DE shld Rm,Rn */
	r0 += r1;  /* 0C0585E0 add Rm,Rn */
	r0 += r0;  /* 0C0585E2 add Rm,Rn */
	IF(0x0C0585E4u); W16(r0 + r4, r6); UPD(0x0C0585E6u, 5);  /* 0C0585E4 mov.w Rm,@(r0,Rn) */
L_0C0585E6: BLKS(0x0C0585E6u);
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r0 = v_; } UPD(0x0C0585E8u, 1);  /* 0C0585E6 mov.w @Rm+,Rn */
	T = (r0 & r0) == 0;  /* 0C0585E8 tst Rm,Rn */
	if (!T) { UPD(0x0C0585D4u, 4); goto L_0C0585D4; }  /* 0C0585EA bf */
L_0C0585EC: BLKS(0x0C0585ECu);
	r15 = r14;  /* 0C0585EC mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0585F0u, 2);  /* 0C0585EE mov.l @Rm+,Rn */
	IF(0x0C0585F0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0585F0 rts */
}

/* FUN_0c058610 */
void f_0C058610(sh3_t *c)
{
	LOCALS;
L_0C058610: BLKS(0x0C058610u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C058612u, 1);  /* 0C058610 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C058612 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C058616u, 2);  /* 0C058614 mov.l Rm,@-Rn */
	IF(0x0C058616u); r1 <<= 2;  /* 0C058616 shll2 Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05861Au, 2);  /* 0C058618 mov.l Rm,@-Rn */
	r1 += r1;  /* 0C05861A add Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05861Eu, 2);  /* 0C05861C mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C05861E exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C058622u, 2);  /* 0C058620 mov.l Rm,@-Rn */
	r11 = 0x1u;  /* 0C058622 mov #imm,Rn */
	r0 = 0xC1D93E4u; UPD(0x0C058626u, 2);  /* 0C058624 mov.l @(disp,pc),Rn */
	IF(0x0C058626u); r15 -= 4; W32(r15, PR); UPD(0x0C058628u, 1);  /* 0C058626 sts.l pr,@-Rn */
	r0 += r1;  /* 0C058628 add Rm,Rn */
	r8 = R32(r0 + 0x4u); UPD(0x0C05862Cu, 2);  /* 0C05862A mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C05862Eu, 1);  /* 0C05862C mov.w @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C05862E tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05864Au, 4); goto L_0C05864A; } goto L_0C058634; }  /* 0C058630 bt/s */
L_0C058634: BLKS(0x0C058634u);
	r10 = 0xC057C50u; UPD(0x0C058636u, 2);  /* 0C058634 mov.l @(disp,pc),Rn */
	IF(0x0C058636u); ;  /* 0C058636 nop */
	UPD(0x0C058638u, 1);
L_0C058638: BLKS(0x0C058638u);
	r5 = 0x100u; UPD(0x0C05863Au, 1);  /* 0C058638 mov.w @(disp,pc),Rn */
	IF(0x0C05863Au); { u32 t_ = r10; PR = 0x0C05863Eu; r4 |= r9; /* slot or Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057C50, 0x0C057C50u, 0x0C05863Eu); }  /* 0C05863A jsr @Rn */
L_0C05863E: BLKS(0x0C05863Eu);
	T = (r0 & r0) == 0;  /* 0C05863E tst Rm,Rn */
	if (!T) { UPD(0x0C058644u, 4); goto L_0C058644; }  /* 0C058640 bf */
L_0C058642: BLKS(0x0C058642u);
	r11 = 0x0u;  /* 0C058642 mov #imm,Rn */
	UPD(0x0C058644u, 1);
L_0C058644: BLKS(0x0C058644u);
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C058646u, 1);  /* 0C058644 mov.w @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C058646 tst Rm,Rn */
	if (!T) { UPD(0x0C058638u, 4); goto L_0C058638; }  /* 0C058648 bf */
L_0C05864A: BLKS(0x0C05864Au);
	r0 = r11;  /* 0C05864A mov Rm,Rn */
	r15 = r14;  /* 0C05864C mov Rm,Rn */
	IF(0x0C05864Eu); PR = R32(r15); r15 += 4; UPD(0x0C058650u, 3);  /* 0C05864E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C058652u, 1);  /* 0C058650 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C058654u, 1);  /* 0C058652 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C058656u, 1);  /* 0C058654 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C058658u, 1);  /* 0C058656 mov.l @Rm+,Rn */
	IF(0x0C058658u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C058658 rts */
}

/* FUN_0c058670 */
void f_0C058670(sh3_t *c)
{
	LOCALS;
L_0C058670: BLKS(0x0C058670u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C058672u, 1);  /* 0C058670 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C058674u, 1);  /* 0C058672 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C058676u, 1);  /* 0C058674 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C058676 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05867Au, 2);  /* 0C058678 mov.l Rm,@-Rn */
	r8 = 0xC058480u; UPD(0x0C05867Cu, 1);  /* 0C05867A mov.l @(disp,pc),Rn */
	IF(0x0C05867Cu); r15 -= 4; W32(r15, PR); UPD(0x0C05867Eu, 1);  /* 0C05867C sts.l pr,@-Rn */
	r14 = r15;  /* 0C05867E mov Rm,Rn */
	UPD(0x0C058680u, 1);
L_0C058680: BLKS(0x0C058680u);
	r5 = 0x100u; UPD(0x0C058682u, 1);  /* 0C058680 mov.w @(disp,pc),Rn */
	IF(0x0C058682u); { u32 t_ = r8; PR = 0x0C058686u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058480, 0x0C058480u, 0x0C058686u); }  /* 0C058682 jsr @Rn */
L_0C058686: BLKS(0x0C058686u);
	T = (r0 & r0) == 0;  /* 0C058686 tst Rm,Rn */
	if (T) { UPD(0x0C058680u, 4); goto L_0C058680; }  /* 0C058688 bt */
L_0C05868A: BLKS(0x0C05868Au);
	r8 = 0xFFFFFFFFu;  /* 0C05868A mov #imm,Rn */
	r10 = 0x400u; UPD(0x0C05868Eu, 2);  /* 0C05868C mov.w @(disp,pc),Rn */
	IF(0x0C05868Eu); ;  /* 0C05868E nop */
	UPD(0x0C058690u, 1);
L_0C058690: BLKS(0x0C058690u);
	r0 = 0xC04F330u; UPD(0x0C058692u, 1);  /* 0C058690 mov.l @(disp,pc),Rn */
	IF(0x0C058692u); { u32 t_ = r0; PR = 0x0C058696u; IF(0x0C058694u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C058696u); }  /* 0C058692 jsr @Rn */
L_0C058696: BLKS(0x0C058696u);
	r0 = 0xC04F930u; UPD(0x0C058698u, 1);  /* 0C058696 mov.l @(disp,pc),Rn */
	IF(0x0C058698u); { u32 t_ = r0; PR = 0x0C05869Cu; IF(0x0C05869Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C05869Cu); }  /* 0C058698 jsr @Rn */
L_0C05869C: BLKS(0x0C05869Cu);
	r0 = 0xC050840u; UPD(0x0C05869Eu, 1);  /* 0C05869C mov.l @(disp,pc),Rn */
	IF(0x0C05869Eu); { u32 t_ = r0; PR = 0x0C0586A2u; IF(0x0C0586A0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C0586A2u); }  /* 0C05869E jsr @Rn */
L_0C0586A2: BLKS(0x0C0586A2u);
	r7 = 0xC286068u; UPD(0x0C0586A4u, 1);  /* 0C0586A2 mov.l @(disp,pc),Rn */
	r5 = 0xC2852C8u; UPD(0x0C0586A6u, 1);  /* 0C0586A4 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0586A8u, 1);  /* 0C0586A6 mov.w @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C0586AAu, 1);  /* 0C0586A8 mov.w @Rm,Rn */
	r0 = r6 & 0xFFFF;  /* 0C0586AA extu.w Rm,Rn */
	T = r0 == r10;  /* 0C0586AC cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0586AE negc Rm,Rn */
	r3 = r4 & 0xFFFF;  /* 0C0586B0 extu.w Rm,Rn */
	T = r3 == r10;  /* 0C0586B2 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C0586B4 negc Rm,Rn */
	r0 |= r2;  /* 0C0586B6 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0586B8 tst Rm,Rn */
	if (!T) { UPD(0x0C058690u, 11); goto L_0C058690; }  /* 0C0586BA bf */
L_0C0586BC: BLKS(0x0C0586BCu);
	r6 = 0xC284EC0u; UPD(0x0C0586BEu, 1);  /* 0C0586BC mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C0586BE mov Rm,Rn */
	IF(0x0C0586C0u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0586C2u, 2);  /* 0C0586C0 mov.b @(r0,Rm),Rn */
	r2 = 0xC220C64u; UPD(0x0C0586C4u, 1);  /* 0C0586C2 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C0586C4 mov Rm,Rn */
	IF(0x0C0586C6u); r1 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0586C8u, 2);  /* 0C0586C6 mov.b @(r0,Rm),Rn */
	r10 = 0xC283EB8u; UPD(0x0C0586CAu, 1);  /* 0C0586C8 mov.l @(disp,pc),Rn */
	IF(0x0C0586CAu); r9 <<= 2;  /* 0C0586CA shll2 Rn */
	r0 = r9;  /* 0C0586CC mov Rm,Rn */
	r4 = 0xC28353Cu; UPD(0x0C0586D0u, 3);  /* 0C0586CE mov.l @(disp,pc),Rn */
	r3 = 0xC21CC3Eu; UPD(0x0C0586D2u, 1);  /* 0C0586D0 mov.l @(disp,pc),Rn */
	IF(0x0C0586D2u); r9 = R32(r0 + r10); UPD(0x0C0586D4u, 1);  /* 0C0586D2 mov.l @(r0,Rm),Rn */
	r8 = 0xC283644u; UPD(0x0C0586D6u, 1);  /* 0C0586D4 mov.l @(disp,pc),Rn */
	W16(r4, r5); UPD(0x0C0586D8u, 1);  /* 0C0586D6 mov.w Rm,@Rn */
	W16(r3, r1); UPD(0x0C0586DAu, 1);  /* 0C0586D8 mov.w Rm,@Rn */
	W32(r8, r9); UPD(0x0C0586DCu, 1);  /* 0C0586DA mov.l Rm,@Rn */
	r15 = r14;  /* 0C0586DC mov Rm,Rn */
	IF(0x0C0586DEu); PR = R32(r15); r15 += 4; UPD(0x0C0586E0u, 2);  /* 0C0586DE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0586E2u, 1);  /* 0C0586E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0586E4u, 1);  /* 0C0586E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0586E6u, 1);  /* 0C0586E4 mov.l @Rm+,Rn */
	IF(0x0C0586E6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0586E6 rts */
}

/* FUN_0c0587d0 */
void f_0C0587D0(sh3_t *c)
{
	LOCALS;
L_0C0587D0: BLKS(0x0C0587D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0587D2u, 1);  /* 0C0587D0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0587D2 exts.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r2 = v_; } UPD(0x0C0587D6u, 2);  /* 0C0587D4 mov.w @Rm+,Rn */
	T = (r2 & r2) == 0;  /* 0C0587D6 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0587FEu, 4); goto L_0C0587FE; } goto L_0C0587DC; }  /* 0C0587D8 bt/s */
L_0C0587DC: BLKS(0x0C0587DCu);
	r0 = 0xC38BC64u; UPD(0x0C0587DEu, 2);  /* 0C0587DC mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C0587DE add Rm,Rn */
	r3 = 0x8000u; UPD(0x0C0587E2u, 2);  /* 0C0587E0 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C0587E2 add Rm,Rn */
	r7 = 0x3FFFu; UPD(0x0C0587E6u, 2);  /* 0C0587E4 mov.w @(disp,pc),Rn */
	IF(0x0C0587E6u); ;  /* 0C0587E6 nop */
	UPD(0x0C0587E8u, 1);
L_0C0587E8: BLKS(0x0C0587E8u);
	T = (r2 & r3) == 0;  /* 0C0587E8 tst Rm,Rn */
	if (T) { UPD(0x0C0587F6u, 4); goto L_0C0587F6; }  /* 0C0587EA bt */
L_0C0587EC: BLKS(0x0C0587ECu);
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C0587EEu, 1);  /* 0C0587EC mov.w @Rm,Rn */
	r2 &= r7;  /* 0C0587EE and Rm,Rn */
	T = r0 == r2;  /* 0C0587F0 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C058800u, 5); goto L_0C058800; } UPD(0x0C0587F6u, 1); goto L_0C0587F6; }  /* 0C0587F2 bf/s */
L_0C0587F6: BLKS(0x0C0587F6u);
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r2 = v_; } UPD(0x0C0587F8u, 1);  /* 0C0587F6 mov.w @Rm+,Rn */
	T = (r2 & r2) == 0;  /* 0C0587F8 tst Rm,Rn */
	{ u32 c_ = !T; r4 += 0x20u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0587E8u, 4); goto L_0C0587E8; } UPD(0x0C0587FEu, 1); goto L_0C0587FE; }  /* 0C0587FA bf/s */
L_0C0587FE: BLKS(0x0C0587FEu);
	r0 = 0x1u;  /* 0C0587FE mov #imm,Rn */
	UPD(0x0C058800u, 1);
L_0C058800: BLKS(0x0C058800u);
	r15 = r14;  /* 0C058800 mov Rm,Rn */
	IF(0x0C058802u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C058802 rts */
}

/* FUN_0c058810 */
void f_0C058810(sh3_t *c)
{
	LOCALS;
L_0C058810: BLKS(0x0C058810u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C058812u, 1);  /* 0C058810 mov.l Rm,@-Rn */
	r1 = 0x1u;  /* 0C058812 mov #imm,Rn */
	IF(0x0C058814u); r15 -= 4; W32(r15, PR); UPD(0x0C058816u, 2);  /* 0C058814 sts.l pr,@-Rn */
	r0 = 0xC2179F8u; UPD(0x0C058818u, 1);  /* 0C058816 mov.l @(disp,pc),Rn */
	W8(r0, r1); UPD(0x0C05881Au, 1);  /* 0C058818 mov.b Rm,@Rn */
	r0 = 0xC04F330u; UPD(0x0C05881Cu, 1);  /* 0C05881A mov.l @(disp,pc),Rn */
	IF(0x0C05881Cu); { u32 t_ = r0; PR = 0x0C058820u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C058820u); }  /* 0C05881C jsr @Rn */
L_0C058820: BLKS(0x0C058820u);
	r0 = 0xC04F930u; UPD(0x0C058822u, 1);  /* 0C058820 mov.l @(disp,pc),Rn */
	IF(0x0C058822u); { u32 t_ = r0; PR = 0x0C058826u; IF(0x0C058824u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C058826u); }  /* 0C058822 jsr @Rn */
L_0C058826: BLKS(0x0C058826u);
	r0 = 0xC050840u; UPD(0x0C058828u, 1);  /* 0C058826 mov.l @(disp,pc),Rn */
	IF(0x0C058828u); { u32 t_ = r0; PR = 0x0C05882Cu; IF(0x0C05882Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C05882Cu); }  /* 0C058828 jsr @Rn */
L_0C05882C: BLKS(0x0C05882Cu);
	r6 = 0xC38BC64u; UPD(0x0C05882Eu, 1);  /* 0C05882C mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C05882E mov #imm,Rn */
	r7 = 0x400u; UPD(0x0C058832u, 2);  /* 0C058830 mov.w @(disp,pc),Rn */
	r3 = 0xFu;  /* 0C058832 mov #imm,Rn */
	r4 = 0x1Fu;  /* 0C058834 mov #imm,Rn */
	IF(0x0C058836u); ;  /* 0C058836 nop */
	UPD(0x0C058838u, 3);
L_0C058838: BLKS(0x0C058838u);
	r2 = r6;  /* 0C058838 mov Rm,Rn */
	r1 = 0x8u;  /* 0C05883A mov #imm,Rn */
	r2 += 0x10u;  /* 0C05883C add #imm,Rn */
	IF(0x0C05883Eu); ;  /* 0C05883E nop */
	UPD(0x0C058840u, 4);
L_0C058840: BLKS(0x0C058840u);
	W16(r2, r7); UPD(0x0C058842u, 1);  /* 0C058840 mov.w Rm,@Rn */
	r1 += 0x1u;  /* 0C058842 add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C058844 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C058846 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C058840u, 6); goto L_0C058840; } goto L_0C05884C; }  /* 0C058848 bf/s */
L_0C05884C: BLKS(0x0C05884Cu);
	r0 = r5;  /* 0C05884C mov Rm,Rn */
	r0 += 0x1u;  /* 0C05884E add #imm,Rn */
	r5 = (u32)(s32)(s16)r0;  /* 0C058850 exts.w Rm,Rn */
	T = (s32)r5 > (s32)r4;  /* 0C058852 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += 0x20u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C058838u, 8); goto L_0C058838; } goto L_0C058858; }  /* 0C058854 bf/s */
L_0C058858: BLKS(0x0C058858u);
	r15 = r14;  /* 0C058858 mov Rm,Rn */
	IF(0x0C05885Au); PR = R32(r15); r15 += 4; UPD(0x0C05885Cu, 3);  /* 0C05885A lds.l @Rn+,pr */
	IF(0x0C05885Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05885C rts */
}

/* FUN_0c058880 */
void f_0C058880(sh3_t *c)
{
	LOCALS;
L_0C058880: BLKS(0x0C058880u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C058882u, 1);  /* 0C058880 mov.l Rm,@-Rn */
	r0 = r4;  /* 0C058882 mov Rm,Rn */
	T = (s32)r4 > (s32)r5;  /* 0C058884 cmp/gt Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05888Cu, 5); goto L_0C05888C; } goto L_0C05888A; }  /* 0C058886 bt/s */
L_0C05888A: BLKS(0x0C05888Au);
	r0 = r5;  /* 0C05888A mov Rm,Rn */
	UPD(0x0C05888Cu, 2);
L_0C05888C: BLKS(0x0C05888Cu);
	r15 = r14;  /* 0C05888C mov Rm,Rn */
	IF(0x0C05888Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C05888E rts */
}

/* FUN_0c0588a0 */
void f_0C0588A0(sh3_t *c)
{
	LOCALS;
L_0C0588A0: BLKS(0x0C0588A0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0588A2u, 1);  /* 0C0588A0 mov.l Rm,@-Rn */
	r0 = r4;  /* 0C0588A2 mov Rm,Rn */
	T = (s32)r4 >= (s32)r5;  /* 0C0588A4 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0588ACu, 5); goto L_0C0588AC; } goto L_0C0588AA; }  /* 0C0588A6 bf/s */
L_0C0588AA: BLKS(0x0C0588AAu);
	r0 = r5;  /* 0C0588AA mov Rm,Rn */
	UPD(0x0C0588ACu, 2);
L_0C0588AC: BLKS(0x0C0588ACu);
	r15 = r14;  /* 0C0588AC mov Rm,Rn */
	IF(0x0C0588AEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0588AE rts */
}

/* FUN_0c0588c0 */
void f_0C0588C0(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C0588FC);
	SPIN_VARS(0C058916);
L_0C0588C0: BLKS(0x0C0588C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0588C2u, 1);  /* 0C0588C0 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0588C2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0588C6u, 2);  /* 0C0588C4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0588C8u, 1);  /* 0C0588C6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0588CAu, 1);  /* 0C0588C8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0588CCu, 1);  /* 0C0588CA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0588CEu, 1);  /* 0C0588CC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0588D0u, 1);  /* 0C0588CE mov.l Rm,@-Rn */
	r2 = 0xC27DC49u; UPD(0x0C0588D2u, 1);  /* 0C0588D0 mov.l @(disp,pc),Rn */
	IF(0x0C0588D2u); r15 -= 4; W32(r15, PR); UPD(0x0C0588D4u, 1);  /* 0C0588D2 sts.l pr,@-Rn */
	r3 = 0xC21F7F9u; UPD(0x0C0588D6u, 1);  /* 0C0588D4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0588D6 add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C0588DAu, 2);  /* 0C0588D8 mov.b @Rm,Rn */
	r14 = r15;  /* 0C0588DA mov Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0588DEu, 2);  /* 0C0588DC mov.b @Rm,Rn */
	W32(r14, r0); UPD(0x0C0588E0u, 1);  /* 0C0588DE mov.l Rm,@Rn */
	T = (r2 & r2) == 0;  /* 0C0588E0 tst Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0588F2u, 4); goto L_0C0588F2; } UPD(0x0C0588E6u, 1); goto L_0C0588E6; }  /* 0C0588E2 bf/s */
L_0C0588E6: BLKS(0x0C0588E6u);
	r5 = 0xC286752u; UPD(0x0C0588E8u, 1);  /* 0C0588E6 mov.l @(disp,pc),Rn */
	W8(r5, r0); UPD(0x0C0588EAu, 1);  /* 0C0588E8 mov.b Rm,@Rn */
	r0 = 0x7u;  /* 0C0588EA mov #imm,Rn */
	r4 = 0xC220C34u; UPD(0x0C0588EEu, 2);  /* 0C0588EC mov.l @(disp,pc),Rn */
	IF(0x0C0588EEu); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0588F0u, 1);  /* 0C0588EE mov.b @(r0,Rm),Rn */
	W8(r4, r1); UPD(0x0C0588F2u, 1);  /* 0C0588F0 mov.b Rm,@Rn */
L_0C0588F2: BLKS(0x0C0588F2u);
	r7 = 0xC2852E0u; UPD(0x0C0588F4u, 1);  /* 0C0588F2 mov.l @(disp,pc),Rn */
	r2 = 0x5u;  /* 0C0588F4 mov #imm,Rn */
	r3 = 0xC161568u; UPD(0x0C0588F8u, 2);  /* 0C0588F6 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C0588FAu, 1);  /* 0C0588F8 mov.b @Rm,Rn */
	IF(0x0C0588FAu); ;  /* 0C0588FA nop */
	UPD(0x0C0588FCu, 1);
L_0C0588FC: BLKS(0x0C0588FCu);
	SPIN_SAVE(0C0588FC);
	r0 = r0 & 0xFF;  /* 0C0588FC extu.b Rm,Rn */
	IF(0x0C0588FEu); r0 = (u32)(s32)(s8)RS8(0C0588FC, r0 + r3); UPD(0x0C058900u, 2);  /* 0C0588FE mov.b @(r0,Rm),Rn */
	r8 = r0;  /* 0C058900 mov Rm,Rn */
	r8 += 0xFFFFFFFFu;  /* 0C058902 add #imm,Rn */
	r6 = r8 & 0xFF;  /* 0C058904 extu.b Rm,Rn */
	T = r6 > r2;  /* 0C058906 cmp/hi Rm,Rn */
	if (T) { SPIN_FFD(0C0588FC, 9); UPD(0x0C0588FCu, 7); goto L_0C0588FC; }  /* 0C058908 bt */
L_0C05890A: BLKS(0x0C05890Au);
	W8(r7, r0); UPD(0x0C05890Cu, 1);  /* 0C05890A mov.b Rm,@Rn */
	r6 = 0xC21CA16u; UPD(0x0C05890Eu, 1);  /* 0C05890C mov.l @(disp,pc),Rn */
	r7 = 0xC161578u; UPD(0x0C058910u, 1);  /* 0C05890E mov.l @(disp,pc),Rn */
	r3 = 0xC392D54u; UPD(0x0C058912u, 1);  /* 0C058910 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C058914u, 1);  /* 0C058912 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C058914 extu.b Rm,Rn */
	UPD(0x0C058916u, 1);
L_0C058916: BLKS(0x0C058916u);
	SPIN_SAVE(0C058916);
	IF(0x0C058916u); r2 = (u32)(s32)(s8)RS8(0C058916, r0 + r7); UPD(0x0C058918u, 1);  /* 0C058916 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C058918 extu.b Rm,Rn */
	IF(0x0C05891Au); r9 = (u32)(s32)(s8)RS8(0C058916, r0 + r3); UPD(0x0C05891Cu, 2);  /* 0C05891A mov.b @(r0,Rm),Rn */
	T = (r9 & r9) == 0;  /* 0C05891C tst Rm,Rn */
	{ u32 c_ = T; r12 = 0x0u; /* slot mov #imm,Rn */ if (c_) { SPIN_FFD(0C058916, 7); UPD(0x0C058916u, 4); goto L_0C058916; } goto L_0C058922; }  /* 0C05891E bt/s */
L_0C058922: BLKS(0x0C058922u);
	r4 = 0xC393028u; UPD(0x0C058924u, 2);  /* 0C058922 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C058926u, 1);  /* 0C058924 mov.b @Rm,Rn */
	r1 = 0x0u;  /* 0C058926 mov #imm,Rn */
	r5 = 0xC26C878u; UPD(0x0C05892Au, 2);  /* 0C058928 mov.l @(disp,pc),Rn */
	r8 = r0 & 0xFF;  /* 0C05892A extu.b Rm,Rn */
	W8(r6, r2); UPD(0x0C05892Eu, 2);  /* 0C05892C mov.b Rm,@Rn */
	r0 = r5;  /* 0C05892E mov Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r5); UPD(0x0C058932u, 2);  /* 0C058930 mov.b @Rm,Rn */
	IF(0x0C058932u); r2 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C058934u, 1);  /* 0C058932 mov.b @(r0,Rm),Rn */
	r9 = r10 & 0xFF;  /* 0C058934 extu.b Rm,Rn */
	r11 = 0xC21CA15u; UPD(0x0C058938u, 2);  /* 0C058936 mov.l @(disp,pc),Rn */
	T = r9 >= r8;  /* 0C058938 cmp/hs Rm,Rn */
	r0 = r4;  /* 0C05893A mov Rm,Rn */
	W8(r11, r12); UPD(0x0C05893Eu, 3);  /* 0C05893C mov.b Rm,@Rn */
	IF(0x0C05893Eu); r6 = T;  /* 0C05893E movt Rn */
	r7 = 0xC1F60FAu; UPD(0x0C058942u, 2);  /* 0C058940 mov.l @(disp,pc),Rn */
	r9 = 0xFFFFFFFFu;  /* 0C058942 mov #imm,Rn */
	IF(0x0C058944u); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C058946u, 2);  /* 0C058944 mov.b @(r0,Rm),Rn */
	T = (r8 & r8) == 0;  /* 0C058946 tst Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r10 = r_; }  /* 0C058948 negc Rm,Rn */
	r11 = r3 & 0xFF;  /* 0C05894A extu.b Rm,Rn */
	W16(r7, r1); UPD(0x0C05894Eu, 4);  /* 0C05894C mov.w Rm,@Rn */
	r12 = r2 & 0xFF;  /* 0C05894E extu.b Rm,Rn */
	T = r12 >= r11;  /* 0C058950 cmp/hs Rm,Rn */
	IF(0x0C058952u); r7 = T;  /* 0C058952 movt Rn */
	T = (r11 & r11) == 0;  /* 0C058954 tst Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C058956 negc Rm,Rn */
	r10 &= r6;  /* 0C058958 and Rm,Rn */
	r0 &= r7;  /* 0C05895A and Rm,Rn */
	r0 |= r10;  /* 0C05895C or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05895E tst Rm,Rn */
	if (T) { UPD(0x0C058968u, 12); goto L_0C058968; }  /* 0C058960 bt */
L_0C058962: BLKS(0x0C058962u);
	r4 = 0x4B0u; UPD(0x0C058964u, 1);  /* 0C058962 mov.w @(disp,pc),Rn */
	r3 = 0xC21F880u; UPD(0x0C058966u, 1);  /* 0C058964 mov.l @(disp,pc),Rn */
	W32(r3, r4); UPD(0x0C058968u, 1);  /* 0C058966 mov.l Rm,@Rn */
L_0C058968: BLKS(0x0C058968u);
	r11 = 0xC7C00F0u; UPD(0x0C05896Au, 1);  /* 0C058968 mov.l @(disp,pc),Rn */
	r1 = 0xAu;  /* 0C05896A mov #imm,Rn */
	r7 = 0xC22486Eu; UPD(0x0C05896Eu, 2);  /* 0C05896C mov.l @(disp,pc),Rn */
	r8 = 0xC0613E0u; UPD(0x0C058970u, 1);  /* 0C05896E mov.l @(disp,pc),Rn */
	r10 = 0xC0AE410u; UPD(0x0C058972u, 1);  /* 0C058970 mov.l @(disp,pc),Rn */
	IF(0x0C058972u); { u32 t_ = r11; PR = 0x0C058976u; W8(r7, r1); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C00F0, 0x0C7C00F0u, 0x0C058976u); }  /* 0C058972 jsr @Rn */
L_0C058976: BLKS(0x0C058976u);
	IF(0x0C058976u); { u32 t_ = r8; PR = 0x0C05897Au; IF(0x0C058978u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0613E0, 0x0C0613E0u, 0x0C05897Au); }  /* 0C058976 jsr @Rn */
L_0C05897A: BLKS(0x0C05897Au);
	IF(0x0C05897Au); { u32 t_ = r10; PR = 0x0C05897Eu; IF(0x0C05897Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AE410, 0x0C0AE410u, 0x0C05897Eu); }  /* 0C05897A jsr @Rn */
L_0C05897E: BLKS(0x0C05897Eu);
	r12 = 0xC7C38D8u; UPD(0x0C058980u, 1);  /* 0C05897E mov.l @(disp,pc),Rn */
	r10 = 0xC05B570u; UPD(0x0C058982u, 1);  /* 0C058980 mov.l @(disp,pc),Rn */
	IF(0x0C058982u); { u32 t_ = r12; PR = 0x0C058986u; IF(0x0C058984u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C7C38D8, 0x0C7C38D8u, 0x0C058986u); }  /* 0C058982 jsr @Rn */
L_0C058986: BLKS(0x0C058986u);
	r11 = 0xC05B5C0u; UPD(0x0C058988u, 1);  /* 0C058986 mov.l @(disp,pc),Rn */
	IF(0x0C058988u); { u32 t_ = r10; PR = 0x0C05898Cu; IF(0x0C05898Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B570, 0x0C05B570u, 0x0C05898Cu); }  /* 0C058988 jsr @Rn */
L_0C05898C: BLKS(0x0C05898Cu);
	r8 = 0xC0AD0F0u; UPD(0x0C05898Eu, 1);  /* 0C05898C mov.l @(disp,pc),Rn */
	IF(0x0C05898Eu); { u32 t_ = r11; PR = 0x0C058992u; IF(0x0C058990u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B5C0, 0x0C05B5C0u, 0x0C058992u); }  /* 0C05898E jsr @Rn */
L_0C058992: BLKS(0x0C058992u);
	r12 = 0xC05B3E0u; UPD(0x0C058994u, 1);  /* 0C058992 mov.l @(disp,pc),Rn */
	IF(0x0C058994u); { u32 t_ = r8; PR = 0x0C058998u; IF(0x0C058996u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AD0F0, 0x0C0AD0F0u, 0x0C058998u); }  /* 0C058994 jsr @Rn */
L_0C058998: BLKS(0x0C058998u);
	r11 = 0xC0AED70u; UPD(0x0C05899Au, 1);  /* 0C058998 mov.l @(disp,pc),Rn */
	IF(0x0C05899Au); { u32 t_ = r10; PR = 0x0C05899Eu; IF(0x0C05899Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B570, 0x0C05B570u, 0x0C05899Eu); }  /* 0C05899A jsr @Rn */
L_0C05899E: BLKS(0x0C05899Eu);
	IF(0x0C05899Eu); { u32 t_ = r12; PR = 0x0C0589A2u; IF(0x0C0589A0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B3E0, 0x0C05B3E0u, 0x0C0589A2u); }  /* 0C05899E jsr @Rn */
L_0C0589A2: BLKS(0x0C0589A2u);
	r10 = 0xC26C8C4u; UPD(0x0C0589A4u, 1);  /* 0C0589A2 mov.l @(disp,pc),Rn */
	IF(0x0C0589A4u); { u32 t_ = r11; PR = 0x0C0589A8u; IF(0x0C0589A6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AED70, 0x0C0AED70u, 0x0C0589A8u); }  /* 0C0589A4 jsr @Rn */
L_0C0589A8: BLKS(0x0C0589A8u);
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C0589AAu, 1);  /* 0C0589A8 mov.b @Rm,Rn */
	r8 = 0xC392D50u; UPD(0x0C0589ACu, 1);  /* 0C0589AA mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C0589AC tst Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C0589B0u, 2);  /* 0C0589AE mov.b @Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C0589B0 negc Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0589B2 tst Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C0589B4 negc Rm,Rn */
	T = (r6 & r5) == 0;  /* 0C0589B6 tst Rm,Rn */
	if (T) { UPD(0x0C0589C0u, 7); goto L_0C0589C0; }  /* 0C0589B8 bt */
L_0C0589BA: BLKS(0x0C0589BAu);
	{ IF(0x0C0589BCu); ; /* slot nop */ UPD(0x0C058FD0u, 3); goto L_0C058FD0; }  /* 0C0589BA bra */
L_0C0589C0: BLKS(0x0C0589C0u);
	r8 = 0xC04F330u; UPD(0x0C0589C2u, 1);  /* 0C0589C0 mov.l @(disp,pc),Rn */
	r10 = 0xC04F930u; UPD(0x0C0589C4u, 1);  /* 0C0589C2 mov.l @(disp,pc),Rn */
	IF(0x0C0589C4u); { u32 t_ = r8; PR = 0x0C0589C8u; IF(0x0C0589C6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C0589C8u); }  /* 0C0589C4 jsr @Rn */
L_0C0589C8: BLKS(0x0C0589C8u);
	r12 = 0xC0505F0u; UPD(0x0C0589CAu, 1);  /* 0C0589C8 mov.l @(disp,pc),Rn */
	IF(0x0C0589CAu); { u32 t_ = r10; PR = 0x0C0589CEu; IF(0x0C0589CCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C0589CEu); }  /* 0C0589CA jsr @Rn */
L_0C0589CE: BLKS(0x0C0589CEu);
	IF(0x0C0589CEu); { u32 t_ = r12; PR = 0x0C0589D2u; IF(0x0C0589D0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C0589D2u); }  /* 0C0589CE jsr @Rn */
L_0C0589D2: BLKS(0x0C0589D2u);
	r4 = 0xC1F60FAu; UPD(0x0C0589D4u, 1);  /* 0C0589D2 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C0589D6u, 1);  /* 0C0589D4 mov.w @Rm,Rn */
	r3 += 0x1u;  /* 0C0589D6 add #imm,Rn */
	r0 = (u32)(s32)(s16)r3;  /* 0C0589D8 exts.w Rm,Rn */
	T = r0 == 0x3Cu;  /* 0C0589DA cmp/eq #imm,r0 */
	{ u32 c_ = !T; W16(r4, r3); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0589E4u, 6); goto L_0C0589E4; } UPD(0x0C0589E0u, 1); goto L_0C0589E0; }  /* 0C0589DC bf/s */
L_0C0589E0: BLKS(0x0C0589E0u);
	{ r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ UPD(0x0C058FB0u, 3); goto L_0C058FB0; }  /* 0C0589E0 bra */
L_0C0589E4: BLKS(0x0C0589E4u);
	r10 = 0xC0605D0u; UPD(0x0C0589E6u, 1);  /* 0C0589E4 mov.l @(disp,pc),Rn */
	r12 = 0xC0AE540u; UPD(0x0C0589E8u, 1);  /* 0C0589E6 mov.l @(disp,pc),Rn */
	IF(0x0C0589E8u); { u32 t_ = r10; PR = 0x0C0589ECu; IF(0x0C0589EAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0605D0, 0x0C0605D0u, 0x0C0589ECu); }  /* 0C0589E8 jsr @Rn */
L_0C0589EC: BLKS(0x0C0589ECu);
	r9 = 0xC0A6770u; UPD(0x0C0589EEu, 1);  /* 0C0589EC mov.l @(disp,pc),Rn */
	IF(0x0C0589EEu); { u32 t_ = r12; PR = 0x0C0589F2u; IF(0x0C0589F0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AE540, 0x0C0AE540u, 0x0C0589F2u); }  /* 0C0589EE jsr @Rn */
L_0C0589F2: BLKS(0x0C0589F2u);
	r11 = 0xC060D90u; UPD(0x0C0589F4u, 1);  /* 0C0589F2 mov.l @(disp,pc),Rn */
	IF(0x0C0589F4u); { u32 t_ = r9; PR = 0x0C0589F8u; IF(0x0C0589F6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A6770, 0x0C0A6770u, 0x0C0589F8u); }  /* 0C0589F4 jsr @Rn */
L_0C0589F8: BLKS(0x0C0589F8u);
	r8 = 0xC0AF600u; UPD(0x0C0589FAu, 1);  /* 0C0589F8 mov.l @(disp,pc),Rn */
	IF(0x0C0589FAu); { u32 t_ = r11; PR = 0x0C0589FEu; r9 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060D90, 0x0C060D90u, 0x0C0589FEu); }  /* 0C0589FA jsr @Rn */
L_0C0589FE: BLKS(0x0C0589FEu);
	r10 = 0xC0A68C0u; UPD(0x0C058A00u, 1);  /* 0C0589FE mov.l @(disp,pc),Rn */
	IF(0x0C058A00u); { u32 t_ = r8; PR = 0x0C058A04u; IF(0x0C058A02u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AF600, 0x0C0AF600u, 0x0C058A04u); }  /* 0C058A00 jsr @Rn */
L_0C058A04: BLKS(0x0C058A04u);
	r12 = 0xC0AF650u; UPD(0x0C058A06u, 1);  /* 0C058A04 mov.l @(disp,pc),Rn */
	IF(0x0C058A06u); { u32 t_ = r10; PR = 0x0C058A0Au; r8 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A68C0, 0x0C0A68C0u, 0x0C058A0Au); }  /* 0C058A06 jsr @Rn */
L_0C058A0A: BLKS(0x0C058A0Au);
	r10 = 0xC2864B8u; UPD(0x0C058A0Cu, 1);  /* 0C058A0A mov.l @(disp,pc),Rn */
	r11 = 0xC0A6810u; UPD(0x0C058A0Eu, 1);  /* 0C058A0C mov.l @(disp,pc),Rn */
L_0C058A0E: BLKS(0x0C058A0Eu);
	r8 += r8;  /* 0C058A0E add Rm,Rn */
	r0 = r8;  /* 0C058A10 mov Rm,Rn */
	IF(0x0C058A12u); r3 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C058A14u, 3);  /* 0C058A12 mov.w @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C058A14 tst Rm,Rn */
	if (T) { UPD(0x0C058A1Cu, 4); goto L_0C058A1C; }  /* 0C058A16 bt */
L_0C058A18: BLKS(0x0C058A18u);
	{ IF(0x0C058A1Au); ; /* slot nop */ UPD(0x0C058FA0u, 3); goto L_0C058FA0; }  /* 0C058A18 bra */
L_0C058A1C: BLKS(0x0C058A1Cu);
	r5 = 0xC283752u; UPD(0x0C058A1Eu, 1);  /* 0C058A1C mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C058A1E mov Rm,Rn */
	IF(0x0C058A20u); r4 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C058A22u, 2);  /* 0C058A20 mov.w @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C058A22 tst Rm,Rn */
	if (T) { UPD(0x0C058A2Au, 4); goto L_0C058A2A; }  /* 0C058A24 bt */
L_0C058A26: BLKS(0x0C058A26u);
	{ IF(0x0C058A28u); ; /* slot nop */ UPD(0x0C058F90u, 3); goto L_0C058F90; }  /* 0C058A26 bra */
L_0C058A2A: BLKS(0x0C058A2Au);
	r0 = r9;  /* 0C058A2A mov Rm,Rn */
	UPD(0x0C058A2Cu, 1);
L_0C058A2C: BLKS(0x0C058A2Cu);
	r0 += 0x1u;  /* 0C058A2C add #imm,Rn */
	r9 = r0 & 0xFF;  /* 0C058A2E extu.b Rm,Rn */
	r6 = 0x17u;  /* 0C058A30 mov #imm,Rn */
	T = r9 > r6;  /* 0C058A32 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r8 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C058A0Eu, 7); goto L_0C058A0E; } goto L_0C058A38; }  /* 0C058A34 bf/s */
L_0C058A38: BLKS(0x0C058A38u);
	r9 = 0xC050CD0u; UPD(0x0C058A3Au, 2);  /* 0C058A38 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C058A3A mov #imm,Rn */
	r11 = 0xC0404000u; UPD(0x0C058A3Eu, 2);  /* 0C058A3C mov.l @(disp,pc),Rn */
	r6 = 0x3u;  /* 0C058A3E mov #imm,Rn */
	r4 = 0xC7C41D8u; UPD(0x0C058A42u, 2);  /* 0C058A40 mov.l @(disp,pc),Rn */
	IF(0x0C058A42u); { u32 t_ = r9; PR = 0x0C058A46u; r7 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C058A46u); }  /* 0C058A42 jsr @Rn */
L_0C058A46: BLKS(0x0C058A46u);
	r7 = r11;  /* 0C058A46 mov Rm,Rn */
	r4 = 0xC16154Cu; UPD(0x0C058A4Au, 2);  /* 0C058A48 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C058A4A mov #imm,Rn */
	IF(0x0C058A4Cu); { u32 t_ = r9; PR = 0x0C058A50u; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C058A50u); }  /* 0C058A4C jsr @Rn */
L_0C058A50: BLKS(0x0C058A50u);
	r2 = 0xC21F7F9u; UPD(0x0C058A52u, 1);  /* 0C058A50 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C058A54u, 1);  /* 0C058A52 mov.b @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C058A54 tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x12u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C058A5Eu, 4); goto L_0C058A5E; } goto L_0C058A5A; }  /* 0C058A56 bt/s */
L_0C058A5A: BLKS(0x0C058A5Au);
	{ IF(0x0C058A5Cu); ; /* slot nop */ UPD(0x0C058EA0u, 4); goto L_0C058EA0; }  /* 0C058A5A bra */
L_0C058A5E: BLKS(0x0C058A5Eu);
	r3 = 0xC21F589u; UPD(0x0C058A60u, 1);  /* 0C058A5E mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C058A62u, 1);  /* 0C058A60 mov.b @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C058A62 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C058A70u, 4); goto L_0C058A70; } goto L_0C058A68; }  /* 0C058A64 bt/s */
L_0C058A68: BLKS(0x0C058A68u);
	r2 = 0x4B0u; UPD(0x0C058A6Au, 2);  /* 0C058A68 mov.w @(disp,pc),Rn */
	r5 = 0xC21F880u; UPD(0x0C058A6Cu, 1);  /* 0C058A6A mov.l @(disp,pc),Rn */
	W8(r3, r0); UPD(0x0C058A6Eu, 1);  /* 0C058A6C mov.b Rm,@Rn */
	W32(r5, r2); UPD(0x0C058A70u, 1);  /* 0C058A6E mov.l Rm,@Rn */
L_0C058A70: BLKS(0x0C058A70u);
	r7 = 0xC26C878u; UPD(0x0C058A72u, 1);  /* 0C058A70 mov.l @(disp,pc),Rn */
	r11 = 0xFFFFFFFFu;  /* 0C058A72 mov #imm,Rn */
	r9 = 0xC393028u; UPD(0x0C058A76u, 2);  /* 0C058A74 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C058A78u, 1);  /* 0C058A76 mov.b @Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C058A7Au, 1);  /* 0C058A78 mov.b @Rm,Rn */
	r3 = r2 & 0xFF;  /* 0C058A7A extu.b Rm,Rn */
	r5 = r4 & 0xFF;  /* 0C058A7C extu.b Rm,Rn */
	T = r3 >= r5;  /* 0C058A7E cmp/hs Rm,Rn */
	IF(0x0C058A80u); r0 = T;  /* 0C058A80 movt Rn */
	T = (r5 & r5) == 0;  /* 0C058A82 tst Rm,Rn */
	{ u32 t_ = 0u - r11, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C058A84 negc Rm,Rn */
	r4 &= r0;  /* 0C058A86 and Rm,Rn */
	r0 = r7;  /* 0C058A88 mov Rm,Rn */
	IF(0x0C058A8Au); r12 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C058A8Cu, 9);  /* 0C058A8A mov.b @(r0,Rm),Rn */
	r0 = r9;  /* 0C058A8C mov Rm,Rn */
	IF(0x0C058A8Eu); r8 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C058A90u, 2);  /* 0C058A8E mov.b @(r0,Rm),Rn */
	r10 = r12 & 0xFF;  /* 0C058A90 extu.b Rm,Rn */
	r1 = r8 & 0xFF;  /* 0C058A92 extu.b Rm,Rn */
	T = r10 >= r1;  /* 0C058A94 cmp/hs Rm,Rn */
	IF(0x0C058A96u); r6 = T;  /* 0C058A96 movt Rn */
	T = (r1 & r1) == 0;  /* 0C058A98 tst Rm,Rn */
	{ u32 t_ = 0u - r11, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C058A9A negc Rm,Rn */
	r3 &= r6;  /* 0C058A9C and Rm,Rn */
	r3 |= r4;  /* 0C058A9E or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C058AA0 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C058AAAu, 12); goto L_0C058AAA; } UPD(0x0C058AA6u, 1); goto L_0C058AA6; }  /* 0C058AA2 bt/s */
L_0C058AA6: BLKS(0x0C058AA6u);
	{ r6 = 0xCu; /* slot mov #imm,Rn */ UPD(0x0C058E60u, 3); goto L_0C058E60; }  /* 0C058AA6 bra */
L_0C058AAA: BLKS(0x0C058AAAu);
	r4 = 0xC161A58u; UPD(0x0C058AACu, 1);  /* 0C058AAA mov.l @(disp,pc),Rn */
	r0 &= 0x40u;  /* 0C058AAC and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C058AAE tst Rm,Rn */
	if (!T) { UPD(0x0C058AC0u, 5); goto L_0C058AC0; }  /* 0C058AB0 bf */
L_0C058AB2: BLKS(0x0C058AB2u);
	r11 = 0xC060CB0u; UPD(0x0C058AB4u, 1);  /* 0C058AB2 mov.l @(disp,pc),Rn */
	IF(0x0C058AB4u); { u32 t_ = r11; PR = 0x0C058AB8u; IF(0x0C058AB6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C060CB0, 0x0C060CB0u, 0x0C058AB8u); }  /* 0C058AB4 jsr @Rn */
L_0C058AB8: BLKS(0x0C058AB8u);
	r0 &= 0x1u;  /* 0C058AB8 and #imm,r0 */
	r5 = 0xC161530u; UPD(0x0C058ABCu, 2);  /* 0C058ABA mov.l @(disp,pc),Rn */
	IF(0x0C058ABCu); r0 <<= 2;  /* 0C058ABC shll2 Rn */
	IF(0x0C058ABEu); r4 = R32(r0 + r5); UPD(0x0C058AC0u, 2);  /* 0C058ABE mov.l @(r0,Rm),Rn */
L_0C058AC0: BLKS(0x0C058AC0u);
	r8 = 0xC050CD0u; UPD(0x0C058AC2u, 1);  /* 0C058AC0 mov.l @(disp,pc),Rn */
	r6 = 0xAu;  /* 0C058AC2 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C058AC6u, 2);  /* 0C058AC4 mov.l @(disp,pc),Rn */
	IF(0x0C058AC6u); { u32 t_ = r8; PR = 0x0C058ACAu; r5 = 0x11u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C058ACAu); }  /* 0C058AC6 jsr @Rn */
L_0C058ACA: BLKS(0x0C058ACAu);
	r8 = 0xC392DC2u; UPD(0x0C058ACCu, 1);  /* 0C058ACA mov.l @(disp,pc),Rn */
	r6 = 0xFFFFFFFFu;  /* 0C058ACC mov #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C058AD0u, 2);  /* 0C058ACE mov.b @Rm,Rn */
	r12 = 0xC393028u; UPD(0x0C058AD2u, 1);  /* 0C058AD0 mov.l @(disp,pc),Rn */
	T = (r7 & r7) == 0;  /* 0C058AD2 tst Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r12); UPD(0x0C058AD6u, 2);  /* 0C058AD4 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C058AD6 negc Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C058AD8 tst Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C058ADA negc Rm,Rn */
	r4 |= r3;  /* 0C058ADC or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C058ADE tst Rm,Rn */
	{ u32 c_ = T; r2 = r7 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C058AEAu, 8); goto L_0C058AEA; } goto L_0C058AE4; }  /* 0C058AE0 bt/s */
L_0C058AE4: BLKS(0x0C058AE4u);
	{ r4 = 0x6u; /* slot mov #imm,Rn */ UPD(0x0C058E50u, 4); goto L_0C058E50; }  /* 0C058AE4 bra */
L_0C058AE8: BLKS(0x0C058AE8u);
	r2 = r7 & 0xFF;  /* 0C058AE8 extu.b Rm,Rn */
	UPD(0x0C058AEAu, 1);
L_0C058AEA: BLKS(0x0C058AEAu);
	r7 = 0x3u;  /* 0C058AEA mov #imm,Rn */
	T = r2 > r7;  /* 0C058AEC cmp/hi Rm,Rn */
	if (T) { UPD(0x0C058BD0u, 5); goto L_0C058BD0; }  /* 0C058AEE bt */
L_0C058AF0: BLKS(0x0C058AF0u);
	r0 = 0xC058BC0u;  /* 0C058AF0 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C058AF2 add Rm,Rn */
	IF(0x0C058AF4u); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C058AF6u, 3);  /* 0C058AF4 mov.w @(r0,Rm),Rn */
	IF(0x0C058AF6u); { u32 tv_ = (r5 + 0x0C058AFAu); u32 t_ = PHYS(tv_); IF(0x0C058AF8u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C058BD0u: goto L_0C058BD0; case 0x0C058DC0u: goto L_0C058DC0; default: JUMPD(tv_); } }  /* 0C058AF6 braf Rn */
L_0C058BD0: BLKS(0x0C058BD0u);
	r11 = 0xC0600A0u; UPD(0x0C058BD2u, 1);  /* 0C058BD0 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C058BD2 mov #imm,Rn */
	r5 = 0x5u;  /* 0C058BD4 mov #imm,Rn */
	IF(0x0C058BD6u); { u32 t_ = r11; PR = 0x0C058BDAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0600A0, 0x0C0600A0u, 0x0C058BDAu); }  /* 0C058BD6 jsr @Rn */
L_0C058BDA: BLKS(0x0C058BDAu);
	r0 = 0xC21F7F9u; UPD(0x0C058BDCu, 1);  /* 0C058BDA mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C058BDEu, 1);  /* 0C058BDC mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C058BDE tst Rm,Rn */
	if (T) { UPD(0x0C058BE6u, 4); goto L_0C058BE6; }  /* 0C058BE0 bt */
L_0C058BE2: BLKS(0x0C058BE2u);
	{ IF(0x0C058BE4u); ; /* slot nop */ UPD(0x0C058DB0u, 3); goto L_0C058DB0; }  /* 0C058BE2 bra */
L_0C058BE6: BLKS(0x0C058BE6u);
	r5 = R32(r14); UPD(0x0C058BE8u, 1);  /* 0C058BE6 mov.l @Rm,Rn */
L_0C058BE8: BLKS(0x0C058BE8u);
	IF(0x0C058BE8u); T = (s32)r5 >= 0;  /* 0C058BE8 cmp/pz Rn */
	if (T) { UPD(0x0C058BF2u, 4); goto L_0C058BF2; }  /* 0C058BEA bt */
L_0C058BEC: BLKS(0x0C058BECu);
	r5 += 0x3u;  /* 0C058BEC add #imm,Rn */
	{ r3 = 0xEu; /* slot mov #imm,Rn */ UPD(0x0C058BF4u, 4); goto L_0C058BF4; }  /* 0C058BEE bra */
L_0C058BF2: BLKS(0x0C058BF2u);
	r3 = 0xEu;  /* 0C058BF2 mov #imm,Rn */
	UPD(0x0C058BF4u, 1);
L_0C058BF4: BLKS(0x0C058BF4u);
	IF(0x0C058BF4u); ARG0(0x453Du); { s32 s_ = (s32)r3; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C058BF4 shld Rm,Rn */
	r8 = 0xC04F770u; UPD(0x0C058BF8u, 2);  /* 0C058BF6 mov.l @(disp,pc),Rn */
	r1 = (r5 >> 16) | (r5 << 16);  /* 0C058BF8 swap.w Rm,Rn */
	r4 = 0x7u;  /* 0C058BFA mov #imm,Rn */
	IF(0x0C058BFCu); { u32 t_ = r8; PR = 0x0C058C00u; r5 = (u32)(s32)(s16)r1; /* slot exts.w Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C04F770, 0x0C04F770u, 0x0C058C00u); }  /* 0C058BFC jsr @Rn */
L_0C058C00: BLKS(0x0C058C00u);
	r2 = R32(r14); UPD(0x0C058C02u, 1);  /* 0C058C00 mov.l @Rm,Rn */
	r4 = 0x1Bu;  /* 0C058C02 mov #imm,Rn */
	T = (s32)r2 > (s32)r4;  /* 0C058C04 cmp/gt Rm,Rn */
	{ u32 c_ = T; r9 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C058C10u, 5); goto L_0C058C10; } goto L_0C058C0A; }  /* 0C058C06 bt/s */
L_0C058C0A: BLKS(0x0C058C0Au);
	r9 += 0x1u;  /* 0C058C0A add #imm,Rn */
	r6 = (u32)(s32)(s16)r9;  /* 0C058C0C exts.w Rm,Rn */
	W32(r14, r6); UPD(0x0C058C10u, 4);  /* 0C058C0E mov.l Rm,@Rn */
L_0C058C10: BLKS(0x0C058C10u);
	r11 = 0xC050840u; UPD(0x0C058C12u, 1);  /* 0C058C10 mov.l @(disp,pc),Rn */
	IF(0x0C058C12u); { u32 t_ = r11; PR = 0x0C058C16u; IF(0x0C058C14u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C058C16u); }  /* 0C058C12 jsr @Rn */
L_0C058C16: BLKS(0x0C058C16u);
	r6 = 0xC26C878u; UPD(0x0C058C18u, 1);  /* 0C058C16 mov.l @(disp,pc),Rn */
	r3 = 0xC393028u; UPD(0x0C058C1Au, 1);  /* 0C058C18 mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C058C1A mov Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C058C1Eu, 2);  /* 0C058C1C mov.b @Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r3); UPD(0x0C058C20u, 1);  /* 0C058C1E mov.b @Rm,Rn */
	IF(0x0C058C20u); r7 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C058C22u, 1);  /* 0C058C20 mov.b @(r0,Rm),Rn */
	T = r9 > r5;  /* 0C058C22 cmp/hi Rm,Rn */
	IF(0x0C058C24u); r5 = T;  /* 0C058C24 movt Rn */
	r0 = r3;  /* 0C058C26 mov Rm,Rn */
	IF(0x0C058C28u); r8 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C058C2Au, 4);  /* 0C058C28 mov.b @(r0,Rm),Rn */
	T = (r9 & r9) == 0;  /* 0C058C2A tst Rm,Rn */
	IF(0x0C058C2Cu); r10 = T;  /* 0C058C2C movt Rn */
	T = r8 > r7;  /* 0C058C2E cmp/hi Rm,Rn */
	r12 = R32(r14 + 0x4u); UPD(0x0C058C32u, 4);  /* 0C058C30 mov.l @(disp,Rm),Rn */
	IF(0x0C058C32u); r7 = T;  /* 0C058C32 movt Rn */
	T = (r8 & r8) == 0;  /* 0C058C34 tst Rm,Rn */
	r0 = 0x12Bu; UPD(0x0C058C38u, 3);  /* 0C058C36 mov.w @(disp,pc),Rn */
	IF(0x0C058C38u); r4 = T;  /* 0C058C38 movt Rn */
	r2 = r12;  /* 0C058C3A mov Rm,Rn */
	T = (s32)r12 > (s32)r0;  /* 0C058C3C cmp/gt Rm,Rn */
	r10 |= r5;  /* 0C058C3E or Rm,Rn */
	r4 |= r7;  /* 0C058C40 or Rm,Rn */
	r2 += 0x1u;  /* 0C058C42 add #imm,Rn */
	r10 &= r4;  /* 0C058C44 and Rm,Rn */
	IF(0x0C058C46u); r11 = T;  /* 0C058C46 movt Rn */
	T = (r10 & r11) == 0;  /* 0C058C48 tst Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C058C52u, 12); goto L_0C058C52; } UPD(0x0C058C4Eu, 1); goto L_0C058C4E; }  /* 0C058C4A bt/s */
L_0C058C4E: BLKS(0x0C058C4Eu);
	{ r2 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C058DA0u, 3); goto L_0C058DA0; }  /* 0C058C4E bra */
L_0C058C52: BLKS(0x0C058C52u);
	r0 = 0xC21F66Au; UPD(0x0C058C54u, 1);  /* 0C058C52 mov.l @(disp,pc),Rn */
	r12 = 0xFFFFFFF9u;  /* 0C058C54 mov #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C058C58u, 2);  /* 0C058C56 mov.b @Rm,Rn */
	r1 = 0x1u;  /* 0C058C58 mov #imm,Rn */
	r2 = 0xC217878u; UPD(0x0C058C5Cu, 2);  /* 0C058C5A mov.l @(disp,pc),Rn */
	IF(0x0C058C5Cu); ARG0(0x4ACCu); { s32 s_ = (s32)r12; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = (u32)((s32)r10 >> 31); else r10 = (u32)((s32)r10 >> ((~s_ & 31) + 1)); }  /* 0C058C5C shad Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C058C60u, 2);  /* 0C058C5E mov.b @Rm,Rn */
	r10 ^= r1;  /* 0C058C60 xor Rm,Rn */
	IF(0x0C058C62u); ARG0(0x40CCu); { s32 s_ = (s32)r12; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C058C62 shad Rm,Rn */
	r0 ^= 0x1u;  /* 0C058C64 xor #imm,r0 */
	r10 &= r1;  /* 0C058C66 and Rm,Rn */
	r0 &= 0x1u;  /* 0C058C68 and #imm,r0 */
	r10 |= r5;  /* 0C058C6A or Rm,Rn */
	r0 |= r7;  /* 0C058C6C or Rm,Rn */
	T = (r10 & r0) == 0;  /* 0C058C6E tst Rm,Rn */
	if (T) { UPD(0x0C058C76u, 11); goto L_0C058C76; }  /* 0C058C70 bt */
L_0C058C72: BLKS(0x0C058C72u);
	{ IF(0x0C058C74u); ; /* slot nop */ UPD(0x0C0589C0u, 3); goto L_0C0589C0; }  /* 0C058C72 bra */
L_0C058C76: BLKS(0x0C058C76u);
	r4 = 0xC27DDF4u; UPD(0x0C058C78u, 1);  /* 0C058C76 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C058C7Au, 1);  /* 0C058C78 mov.b @Rm,Rn */
	r0 &= 0x3u;  /* 0C058C7A and #imm,r0 */
	T = r0 == 0x1u;  /* 0C058C7C cmp/eq #imm,r0 */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C058C84u, 5); goto L_0C058C84; } goto L_0C058C82; }  /* 0C058C7E bt/s */
L_0C058C82: BLKS(0x0C058C82u);
	if (!T) { UPD(0x0C058C88u, 4); goto L_0C058C88; }  /* 0C058C82 bf */
L_0C058C84: BLKS(0x0C058C84u);
	{ IF(0x0C058C86u); ; /* slot nop */ UPD(0x0C058D90u, 3); goto L_0C058D90; }  /* 0C058C84 bra */
L_0C058C88: BLKS(0x0C058C88u);
	r11 = 0xC0AFCA0u; UPD(0x0C058C8Au, 1);  /* 0C058C88 mov.l @(disp,pc),Rn */
	r9 = 0xC060680u; UPD(0x0C058C8Cu, 1);  /* 0C058C8A mov.l @(disp,pc),Rn */
	IF(0x0C058C8Cu); { u32 t_ = r11; PR = 0x0C058C90u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFCA0, 0x0C0AFCA0u, 0x0C058C90u); }  /* 0C058C8C jsr @Rn */
L_0C058C90: BLKS(0x0C058C90u);
	r6 = 0xC392B08u; UPD(0x0C058C92u, 1);  /* 0C058C90 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C058C92 mov #imm,Rn */
	IF(0x0C058C94u); { u32 t_ = r9; PR = 0x0C058C98u; W8(r6, r5); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C060680, 0x0C060680u, 0x0C058C98u); }  /* 0C058C94 jsr @Rn */
L_0C058C98: BLKS(0x0C058C98u);
	r3 = 0xC21CA15u; UPD(0x0C058C9Au, 1);  /* 0C058C98 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C058C9Cu, 1);  /* 0C058C9A mov.b @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C058C9C tst Rm,Rn */
	if (!T) { UPD(0x0C058D70u, 4); goto L_0C058D70; }  /* 0C058C9E bf */
L_0C058CA0: BLKS(0x0C058CA0u);
	r9 = 0x3u;  /* 0C058CA0 mov #imm,Rn */
	r7 = 0xC220C34u; UPD(0x0C058CA4u, 2);  /* 0C058CA2 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C058CA6u, 1);  /* 0C058CA4 mov.b @Rm,Rn */
	r6 = 0xC22486Eu; UPD(0x0C058CA8u, 1);  /* 0C058CA6 mov.l @(disp,pc),Rn */
	r1 = r3 & 0xFF;  /* 0C058CA8 extu.b Rm,Rn */
	r7 = 0xC27DC50u; UPD(0x0C058CACu, 2);  /* 0C058CAA mov.l @(disp,pc),Rn */
	T = (r1 & r1) == 0;  /* 0C058CAC tst Rm,Rn */
	W8(r6, r3); UPD(0x0C058CB0u, 2);  /* 0C058CAE mov.b Rm,@Rn */
	{ u32 c_ = !T; W8(r7, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C058CC6u, 3); goto L_0C058CC6; } UPD(0x0C058CB4u, 1); goto L_0C058CB4; }  /* 0C058CB0 bf/s */
L_0C058CB4: BLKS(0x0C058CB4u);
	r2 = 0xC286752u; UPD(0x0C058CB6u, 1);  /* 0C058CB4 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C058CB8u, 1);  /* 0C058CB6 mov.b @Rm,Rn */
	r12 = 0xC161580u; UPD(0x0C058CBAu, 1);  /* 0C058CB8 mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C058CBA extu.b Rm,Rn */
	IF(0x0C058CBCu); r11 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C058CBEu, 2);  /* 0C058CBC mov.b @(r0,Rm),Rn */
	r10 = 0xC220C60u; UPD(0x0C058CC0u, 1);  /* 0C058CBE mov.l @(disp,pc),Rn */
	W8(r6, r11); UPD(0x0C058CC2u, 1);  /* 0C058CC0 mov.b Rm,@Rn */
	W32(r10, r11); UPD(0x0C058CC4u, 1);  /* 0C058CC2 mov.l Rm,@Rn */
	W8(r7, r5); UPD(0x0C058CC6u, 1);  /* 0C058CC4 mov.b Rm,@Rn */
L_0C058CC6: BLKS(0x0C058CC6u);
	r10 = 0xC2852E4u; UPD(0x0C058CC8u, 1);  /* 0C058CC6 mov.l @(disp,pc),Rn */
	r3 = 0xC21F66Au; UPD(0x0C058CCAu, 1);  /* 0C058CC8 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C058CCCu, 1);  /* 0C058CCA mov.b @Rm,Rn */
	r5 = 0xC26C878u; UPD(0x0C058CCEu, 1);  /* 0C058CCC mov.l @(disp,pc),Rn */
	r7 = 0xC393028u; UPD(0x0C058CD0u, 1);  /* 0C058CCE mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)R8(r3); UPD(0x0C058CD2u, 1);  /* 0C058CD0 mov.b @Rm,Rn */
	IF(0x0C058CD2u); r9 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C058CD4u, 1);  /* 0C058CD2 mov.b @(r0,Rm),Rn */
	IF(0x0C058CD4u); T = r11 >> 31; r11 = (r11 << 1) | T;  /* 0C058CD4 rotl Rn */
	IF(0x0C058CD6u); r8 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C058CD8u, 2);  /* 0C058CD6 mov.b @(r0,Rm),Rn */
	IF(0x0C058CD8u); r3 = T;  /* 0C058CD8 movt Rn */
	r4 = r9 & 0xFF;  /* 0C058CDA extu.b Rm,Rn */
	r0 = r8 & 0xFF;  /* 0C058CDC extu.b Rm,Rn */
	T = r4 >= r0;  /* 0C058CDE cmp/hs Rm,Rn */
	IF(0x0C058CE0u); r6 = T;  /* 0C058CE0 movt Rn */
	r3 &= r6;  /* 0C058CE2 and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C058CE4 tst Rm,Rn */
	if (!T) { UPD(0x0C058D50u, 10); goto L_0C058D50; }  /* 0C058CE6 bf */
L_0C058CE8: BLKS(0x0C058CE8u);
	r2 = 0xC283794u; UPD(0x0C058CEAu, 1);  /* 0C058CE8 mov.l @(disp,pc),Rn */
	W32(r2, r3); UPD(0x0C058CECu, 1);  /* 0C058CEA mov.l Rm,@Rn */
L_0C058CEC: BLKS(0x0C058CECu);
	r5 = 0xC26C878u; UPD(0x0C058CEEu, 1);  /* 0C058CEC mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C058CEE mov Rm,Rn */
	IF(0x0C058CF0u); r9 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C058CF2u, 2);  /* 0C058CF0 mov.b @(r0,Rm),Rn */
	r3 = 0xC217878u; UPD(0x0C058CF4u, 1);  /* 0C058CF2 mov.l @(disp,pc),Rn */
	r7 = 0xC393028u; UPD(0x0C058CF6u, 1);  /* 0C058CF4 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)R8(r3); UPD(0x0C058CF8u, 1);  /* 0C058CF6 mov.b @Rm,Rn */
	r0 = r7;  /* 0C058CF8 mov Rm,Rn */
	IF(0x0C058CFAu); r4 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C058CFCu, 2);  /* 0C058CFA mov.b @(r0,Rm),Rn */
	IF(0x0C058CFCu); T = r11 >> 31; r11 = (r11 << 1) | T;  /* 0C058CFC rotl Rn */
	IF(0x0C058CFEu); r3 = T;  /* 0C058CFE movt Rn */
	r0 = r9 & 0xFF;  /* 0C058D00 extu.b Rm,Rn */
	r6 = r4 & 0xFF;  /* 0C058D02 extu.b Rm,Rn */
	T = r0 >= r6;  /* 0C058D04 cmp/hs Rm,Rn */
	IF(0x0C058D06u); r13 = T;  /* 0C058D06 movt Rn */
	r3 &= r13;  /* 0C058D08 and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C058D0A tst Rm,Rn */
	if (!T) { UPD(0x0C058D30u, 11); goto L_0C058D30; }  /* 0C058D0C bf */
L_0C058D0E: BLKS(0x0C058D0Eu);
	r8 = 0xC283A10u; UPD(0x0C058D10u, 1);  /* 0C058D0E mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C058D12u, 1);  /* 0C058D10 mov.l Rm,@(disp,Rn) */
L_0C058D12: BLKS(0x0C058D12u);
	r2 = 0xC21CA15u; UPD(0x0C058D14u, 1);  /* 0C058D12 mov.l @(disp,pc),Rn */
	r14 += 0x8u;  /* 0C058D14 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C058D18u, 2);  /* 0C058D16 mov.b @Rm,Rn */
	r15 = r14;  /* 0C058D18 mov Rm,Rn */
	IF(0x0C058D1Au); PR = R32(r15); r15 += 4; UPD(0x0C058D1Cu, 2);  /* 0C058D1A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C058D1Eu, 1);  /* 0C058D1C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C058D20u, 1);  /* 0C058D1E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C058D22u, 1);  /* 0C058D20 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C058D24u, 1);  /* 0C058D22 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C058D26u, 1);  /* 0C058D24 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C058D28u, 1);  /* 0C058D26 mov.l @Rm+,Rn */
	IF(0x0C058D28u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C058D28 rts */
L_0C058D30: BLKS(0x0C058D30u);
	r12 = 0xC7C0380u; UPD(0x0C058D32u, 1);  /* 0C058D30 mov.l @(disp,pc),Rn */
	r10 = 0xC0AFB20u; UPD(0x0C058D34u, 1);  /* 0C058D32 mov.l @(disp,pc),Rn */
	IF(0x0C058D34u); { u32 t_ = r12; PR = 0x0C058D38u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C0380, 0x0C7C0380u, 0x0C058D38u); }  /* 0C058D34 jsr @Rn */
L_0C058D38: BLKS(0x0C058D38u);
	r4 = 0x1u;  /* 0C058D38 mov #imm,Rn */
	IF(0x0C058D3Au); { u32 t_ = r10; PR = 0x0C058D3Eu; r5 = 0x5Bu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFB20, 0x0C0AFB20u, 0x0C058D3Eu); }  /* 0C058D3A jsr @Rn */
L_0C058D3E: BLKS(0x0C058D3Eu);
	{ IF(0x0C058D40u); ; /* slot nop */ UPD(0x0C058D12u, 3); goto L_0C058D12; }  /* 0C058D3E bra */
L_0C058D50: BLKS(0x0C058D50u);
	r8 = 0xC7C0380u; UPD(0x0C058D52u, 1);  /* 0C058D50 mov.l @(disp,pc),Rn */
	r12 = 0xC0AFB20u; UPD(0x0C058D54u, 1);  /* 0C058D52 mov.l @(disp,pc),Rn */
	IF(0x0C058D54u); { u32 t_ = r8; PR = 0x0C058D58u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C0380, 0x0C7C0380u, 0x0C058D58u); }  /* 0C058D54 jsr @Rn */
L_0C058D58: BLKS(0x0C058D58u);
	r4 = 0x0u;  /* 0C058D58 mov #imm,Rn */
	IF(0x0C058D5Au); { u32 t_ = r12; PR = 0x0C058D5Eu; r5 = 0x5Bu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFB20, 0x0C0AFB20u, 0x0C058D5Eu); }  /* 0C058D5A jsr @Rn */
L_0C058D5E: BLKS(0x0C058D5Eu);
	{ IF(0x0C058D60u); ; /* slot nop */ UPD(0x0C058CECu, 3); goto L_0C058CEC; }  /* 0C058D5E bra */
L_0C058D70: BLKS(0x0C058D70u);
	r8 = 0xC2852E0u; UPD(0x0C058D72u, 1);  /* 0C058D70 mov.l @(disp,pc),Rn */
	r2 = 0xC21CA16u; UPD(0x0C058D74u, 1);  /* 0C058D72 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C058D76u, 1);  /* 0C058D74 mov.b @Rm,Rn */
	r0 = 0xC22486Eu; UPD(0x0C058D78u, 1);  /* 0C058D76 mov.l @(disp,pc),Rn */
	r13 = 0xC7C0380u; UPD(0x0C058D7Au, 1);  /* 0C058D78 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s8)R8(r2); UPD(0x0C058D7Cu, 1);  /* 0C058D7A mov.b @Rm,Rn */
	W8(r0, r4); UPD(0x0C058D7Eu, 1);  /* 0C058D7C mov.b Rm,@Rn */
	r10 = 0xC27DC50u; UPD(0x0C058D80u, 1);  /* 0C058D7E mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C058D80 mov #imm,Rn */
	IF(0x0C058D82u); { u32 t_ = r13; PR = 0x0C058D86u; W8(r10, r12); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C7C0380, 0x0C7C0380u, 0x0C058D86u); }  /* 0C058D82 jsr @Rn */
L_0C058D86: BLKS(0x0C058D86u);
	IF(0x0C058D86u); { u32 t_ = r13; PR = 0x0C058D8Au; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C05AFF0, 0x0C05AFF0u, 0x0C058D8Au); }  /* 0C058D86 jsr @Rn */
L_0C058D8A: BLKS(0x0C058D8Au);
	{ IF(0x0C058D8Cu); ; /* slot nop */ UPD(0x0C058D12u, 3); goto L_0C058D12; }  /* 0C058D8A bra */
L_0C058D90: BLKS(0x0C058D90u);
	r8 = 0xC286752u; UPD(0x0C058D92u, 1);  /* 0C058D90 mov.l @(disp,pc),Rn */
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C058C88u, 3); goto L_0C058C88; }  /* 0C058D92 bra */
L_0C058DA0: BLKS(0x0C058DA0u);
	r1 = 0xC21CA15u; UPD(0x0C058DA2u, 1);  /* 0C058DA0 mov.l @(disp,pc),Rn */
L_0C058DA2: BLKS(0x0C058DA2u);
	W8(r1, r2); UPD(0x0C058DA4u, 1);  /* 0C058DA2 mov.b Rm,@Rn */
L_0C058DA4: BLKS(0x0C058DA4u);
	{ IF(0x0C058DA6u); ; /* slot nop */ UPD(0x0C058C76u, 3); goto L_0C058C76; }  /* 0C058DA4 bra */
L_0C058DB0: BLKS(0x0C058DB0u);
	r12 = 0xC05B800u; UPD(0x0C058DB2u, 1);  /* 0C058DB0 mov.l @(disp,pc),Rn */
	IF(0x0C058DB2u); { u32 t_ = r12; PR = 0x0C058DB6u; IF(0x0C058DB4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B800, 0x0C05B800u, 0x0C058DB6u); }  /* 0C058DB2 jsr @Rn */
L_0C058DB6: BLKS(0x0C058DB6u);
	{ r5 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C058BE8u, 3); goto L_0C058BE8; }  /* 0C058DB6 bra */
L_0C058DC0: BLKS(0x0C058DC0u);
	r10 = 0xC0600A0u; UPD(0x0C058DC2u, 1);  /* 0C058DC0 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C058DC2 mov #imm,Rn */
	r5 = 0x5u;  /* 0C058DC4 mov #imm,Rn */
	IF(0x0C058DC6u); { u32 t_ = r10; PR = 0x0C058DCAu; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0600A0, 0x0C0600A0u, 0x0C058DCAu); }  /* 0C058DC6 jsr @Rn */
L_0C058DCA: BLKS(0x0C058DCAu);
	r4 = 0x1u;  /* 0C058DCA mov #imm,Rn */
	r5 = 0x5u;  /* 0C058DCC mov #imm,Rn */
	IF(0x0C058DCEu); { u32 t_ = r10; PR = 0x0C058DD2u; r6 = 0x13u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0600A0, 0x0C0600A0u, 0x0C058DD2u); }  /* 0C058DCE jsr @Rn */
L_0C058DD2: BLKS(0x0C058DD2u);
	{ IF(0x0C058DD4u); ; /* slot nop */ UPD(0x0C058BDAu, 3); goto L_0C058BDA; }  /* 0C058DD2 bra */
L_0C058E50: BLKS(0x0C058E50u);
	r9 = 0xC060CF0u; UPD(0x0C058E52u, 1);  /* 0C058E50 mov.l @(disp,pc),Rn */
	IF(0x0C058E52u); { u32 t_ = r9; PR = 0x0C058E56u; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060CF0, 0x0C060CF0u, 0x0C058E56u); }  /* 0C058E52 jsr @Rn */
L_0C058E56: BLKS(0x0C058E56u);
	{ r7 = (u32)(s32)(s8)R8(r8); /* slot mov.b @Rm,Rn */ UPD(0x0C058AE8u, 3); goto L_0C058AE8; }  /* 0C058E56 bra */
L_0C058E60: BLKS(0x0C058E60u);
	r10 = 0xC059B80u; UPD(0x0C058E62u, 1);  /* 0C058E60 mov.l @(disp,pc),Rn */
	r11 = 0xC21F880u; UPD(0x0C058E64u, 1);  /* 0C058E62 mov.l @(disp,pc),Rn */
	r5 = 0xFu;  /* 0C058E64 mov #imm,Rn */
	IF(0x0C058E66u); { u32 t_ = r10; PR = 0x0C058E6Au; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C059B80, 0x0C059B80u, 0x0C058E6Au); }  /* 0C058E66 jsr @Rn */
L_0C058E6A: BLKS(0x0C058E6Au);
	r6 = R32(r11); UPD(0x0C058E6Cu, 1);  /* 0C058E6A mov.l @Rm,Rn */
	IF(0x0C058E6Cu); r6 -= 1; T = r6 == 0;  /* 0C058E6C dt Rn */
	{ u32 c_ = T; W32(r11, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C058E76u, 4); goto L_0C058E76; } UPD(0x0C058E72u, 1); goto L_0C058E72; }  /* 0C058E6E bt/s */
L_0C058E72: BLKS(0x0C058E72u);
	{ r0 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C058AAAu, 3); goto L_0C058AAA; }  /* 0C058E72 bra */
L_0C058E76: BLKS(0x0C058E76u);
	r8 = (u32)(s32)(s8)R8(r9); UPD(0x0C058E78u, 1);  /* 0C058E76 mov.b @Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C058E78 tst Rm,Rn */
	{ u32 c_ = T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C058E8Au, 4); goto L_0C058E8A; } goto L_0C058E7E; }  /* 0C058E7A bt/s */
L_0C058E7E: BLKS(0x0C058E7Eu);
	r12 = 0xC21F66Au; UPD(0x0C058E80u, 2);  /* 0C058E7E mov.l @(disp,pc),Rn */
	r7 = 0xFFFFFF80u;  /* 0C058E80 mov #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C058E84u, 2);  /* 0C058E82 mov.b @Rm,Rn */
	r1 |= r7;  /* 0C058E84 or Rm,Rn */
	W8(r12, r1); UPD(0x0C058E88u, 2);  /* 0C058E86 mov.b Rm,@Rn */
	r0 = r9;  /* 0C058E88 mov Rm,Rn */
	UPD(0x0C058E8Au, 1);
L_0C058E8A: BLKS(0x0C058E8Au);
	IF(0x0C058E8Au); r9 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C058E8Cu, 1);  /* 0C058E8A mov.b @(r0,Rm),Rn */
	T = (r9 & r9) == 0;  /* 0C058E8C tst Rm,Rn */
	{ u32 c_ = T; r0 = 0xFFFFFF80u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C058DA4u, 4); goto L_0C058DA4; } goto L_0C058E92; }  /* 0C058E8E bt/s */
L_0C058E92: BLKS(0x0C058E92u);
	r1 = 0xC217878u; UPD(0x0C058E94u, 2);  /* 0C058E92 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r1); UPD(0x0C058E96u, 1);  /* 0C058E94 mov.b @Rm,Rn */
	{ r2 |= r0; /* slot or Rm,Rn */ UPD(0x0C058DA2u, 3); goto L_0C058DA2; }  /* 0C058E96 bra */
L_0C058EA0: BLKS(0x0C058EA0u);
	r4 = 0xC16146Cu; UPD(0x0C058EA2u, 1);  /* 0C058EA0 mov.l @(disp,pc),Rn */
	r7 = 0x4040C000u; UPD(0x0C058EA4u, 1);  /* 0C058EA2 mov.l @(disp,pc),Rn */
	r8 = 0xC220C34u; UPD(0x0C058EA6u, 1);  /* 0C058EA4 mov.l @(disp,pc),Rn */
	IF(0x0C058EA6u); { u32 t_ = r9; PR = 0x0C058EAAu; r6 = 0x12u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C058EAAu); }  /* 0C058EA6 jsr @Rn */
L_0C058EAA: BLKS(0x0C058EAAu);
	r4 = 0xC161560u; UPD(0x0C058EACu, 1);  /* 0C058EAA mov.l @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C058EAC mov #imm,Rn */
	r7 = 0x40C04000u; UPD(0x0C058EB0u, 2);  /* 0C058EAE mov.l @(disp,pc),Rn */
	IF(0x0C058EB0u); { u32 t_ = r9; PR = 0x0C058EB4u; r6 = 0x16u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C058EB4u); }  /* 0C058EB0 jsr @Rn */
L_0C058EB4: BLKS(0x0C058EB4u);
	r10 = 0xC050A80u; UPD(0x0C058EB6u, 1);  /* 0C058EB4 mov.l @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C058EB6 mov #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C058EBAu, 2);  /* 0C058EB8 mov.b @Rm,Rn */
	r6 = 0x1Cu;  /* 0C058EBA mov #imm,Rn */
	r12 = 0xC27DE74u; UPD(0x0C058EBEu, 2);  /* 0C058EBC mov.l @(disp,pc),Rn */
	IF(0x0C058EBEu); { u32 t_ = r10; PR = 0x0C058EC2u; r4 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C058EC2u); }  /* 0C058EBE jsr @Rn */
L_0C058EC2: BLKS(0x0C058EC2u);
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C058EC4u, 1);  /* 0C058EC2 mov.b @Rm,Rn */
	r0 = r2;  /* 0C058EC4 mov Rm,Rn */
	r0 &= 0x8u;  /* 0C058EC6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C058EC8 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C058EDAu, 6); goto L_0C058EDA; } goto L_0C058ECE; }  /* 0C058ECA bt/s */
L_0C058ECE: BLKS(0x0C058ECEu);
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C058ED0u, 2);  /* 0C058ECE mov.b @Rm,Rn */
	r4 = 0xC161568u; UPD(0x0C058ED2u, 1);  /* 0C058ED0 mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C058ED2 extu.b Rm,Rn */
	IF(0x0C058ED4u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C058ED6u, 2);  /* 0C058ED4 mov.b @(r0,Rm),Rn */
	W8(r8, r3); UPD(0x0C058ED8u, 1);  /* 0C058ED6 mov.b Rm,@Rn */
	r0 = r2;  /* 0C058ED8 mov Rm,Rn */
	UPD(0x0C058EDAu, 1);
L_0C058EDA: BLKS(0x0C058EDAu);
	r0 &= 0x4u;  /* 0C058EDA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C058EDC tst Rm,Rn */
	if (T) { UPD(0x0C058EEAu, 5); goto L_0C058EEA; }  /* 0C058EDE bt */
L_0C058EE0: BLKS(0x0C058EE0u);
	r11 = (u32)(s32)(s8)R8(r8); UPD(0x0C058EE2u, 1);  /* 0C058EE0 mov.b @Rm,Rn */
	r7 = 0xC161570u; UPD(0x0C058EE4u, 1);  /* 0C058EE2 mov.l @(disp,pc),Rn */
	r0 = r11 & 0xFF;  /* 0C058EE4 extu.b Rm,Rn */
	IF(0x0C058EE6u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C058EE8u, 2);  /* 0C058EE6 mov.b @(r0,Rm),Rn */
	W8(r8, r6); UPD(0x0C058EEAu, 1);  /* 0C058EE8 mov.b Rm,@Rn */
L_0C058EEA: BLKS(0x0C058EEAu);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C058EECu, 1);  /* 0C058EEA mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C058EEC tst Rm,Rn */
	{ u32 c_ = !T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C058F38u, 4); goto L_0C058F38; } goto L_0C058EF2; }  /* 0C058EEE bf/s */
L_0C058EF2: BLKS(0x0C058EF2u);
	r0 &= 0x1u;  /* 0C058EF2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C058EF4 tst Rm,Rn */
	if (T) { UPD(0x0C058F80u, 6); goto L_0C058F80; }  /* 0C058EF6 bt */
L_0C058EF8: BLKS(0x0C058EF8u);
	r4 = 0xC286752u; UPD(0x0C058EFAu, 1);  /* 0C058EF8 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r4); UPD(0x0C058EFCu, 1);  /* 0C058EFA mov.b @Rm,Rn */
	r12 = 0xC161578u; UPD(0x0C058EFEu, 1);  /* 0C058EFC mov.l @(disp,pc),Rn */
	r0 = r1 & 0xFF;  /* 0C058EFE extu.b Rm,Rn */
	IF(0x0C058F00u); r8 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C058F02u, 2);  /* 0C058F00 mov.b @(r0,Rm),Rn */
	W8(r4, r8); UPD(0x0C058F04u, 1);  /* 0C058F02 mov.b Rm,@Rn */
	r0 = r2;  /* 0C058F04 mov Rm,Rn */
	UPD(0x0C058F06u, 1);
L_0C058F06: BLKS(0x0C058F06u);
	r0 &= 0x2u;  /* 0C058F06 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C058F08 tst Rm,Rn */
	if (T) { UPD(0x0C058F16u, 5); goto L_0C058F16; }  /* 0C058F0A bt */
L_0C058F0C: BLKS(0x0C058F0Cu);
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C058F0Eu, 1);  /* 0C058F0C mov.b @Rm,Rn */
	r3 = 0xC16157Cu; UPD(0x0C058F10u, 1);  /* 0C058F0E mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C058F10 extu.b Rm,Rn */
	IF(0x0C058F12u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C058F14u, 2);  /* 0C058F12 mov.b @(r0,Rm),Rn */
	W8(r4, r2); UPD(0x0C058F16u, 1);  /* 0C058F14 mov.b Rm,@Rn */
L_0C058F16: BLKS(0x0C058F16u);
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C058F18u, 1);  /* 0C058F16 mov.b @Rm,Rn */
	r5 = 0x25u;  /* 0C058F18 mov #imm,Rn */
	r11 = 0xC057290u; UPD(0x0C058F1Cu, 2);  /* 0C058F1A mov.l @(disp,pc),Rn */
	r4 = r6 & 0xFF;  /* 0C058F1C extu.b Rm,Rn */
	IF(0x0C058F1Eu); { u32 t_ = r11; PR = 0x0C058F22u; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057290, 0x0C057290u, 0x0C058F22u); }  /* 0C058F1E jsr @Rn */
L_0C058F22: BLKS(0x0C058F22u);
	r4 = 0xC161558u; UPD(0x0C058F24u, 1);  /* 0C058F22 mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C058F24 mov #imm,Rn */
	r7 = 0x40C04000u; UPD(0x0C058F28u, 2);  /* 0C058F26 mov.l @(disp,pc),Rn */
	IF(0x0C058F28u); { u32 t_ = r9; PR = 0x0C058F2Cu; r6 = 0x16u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C058F2Cu); }  /* 0C058F28 jsr @Rn */
L_0C058F2C: BLKS(0x0C058F2Cu);
	r4 = 0xC220C36u; UPD(0x0C058F2Eu, 1);  /* 0C058F2C mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C058F2E mov #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r4); UPD(0x0C058F32u, 2);  /* 0C058F30 mov.w @Rm,Rn */
	r6 = 0x1Cu;  /* 0C058F32 mov #imm,Rn */
	IF(0x0C058F34u); { u32 t_ = r10; PR = 0x0C058F38u; r4 = r9 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C058F38u); }  /* 0C058F34 jsr @Rn */
L_0C058F38: BLKS(0x0C058F38u);
	r12 = 0xC054300u; UPD(0x0C058F3Au, 1);  /* 0C058F38 mov.l @(disp,pc),Rn */
	r4 = 0xEu;  /* 0C058F3A mov #imm,Rn */
	r8 = 0xC054360u; UPD(0x0C058F3Eu, 2);  /* 0C058F3C mov.l @(disp,pc),Rn */
	r10 = 0xC0543C0u; UPD(0x0C058F40u, 1);  /* 0C058F3E mov.l @(disp,pc),Rn */
	IF(0x0C058F40u); { u32 t_ = r12; PR = 0x0C058F44u; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C054300, 0x0C054300u, 0x0C058F44u); }  /* 0C058F40 jsr @Rn */
L_0C058F44: BLKS(0x0C058F44u);
	r11 = 0xC054420u; UPD(0x0C058F46u, 1);  /* 0C058F44 mov.l @(disp,pc),Rn */
	r4 = 0xDu;  /* 0C058F46 mov #imm,Rn */
	r9 = 0xC054480u; UPD(0x0C058F4Au, 2);  /* 0C058F48 mov.l @(disp,pc),Rn */
	IF(0x0C058F4Au); { u32 t_ = r8; PR = 0x0C058F4Eu; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C054360, 0x0C054360u, 0x0C058F4Eu); }  /* 0C058F4A jsr @Rn */
L_0C058F4E: BLKS(0x0C058F4Eu);
	r4 = 0xCu;  /* 0C058F4E mov #imm,Rn */
	r12 = 0xC054500u; UPD(0x0C058F52u, 2);  /* 0C058F50 mov.l @(disp,pc),Rn */
	IF(0x0C058F52u); { u32 t_ = r10; PR = 0x0C058F56u; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0543C0, 0x0C0543C0u, 0x0C058F56u); }  /* 0C058F52 jsr @Rn */
L_0C058F56: BLKS(0x0C058F56u);
	r4 = 0xBu;  /* 0C058F56 mov #imm,Rn */
	r8 = 0xC054550u; UPD(0x0C058F5Au, 2);  /* 0C058F58 mov.l @(disp,pc),Rn */
	IF(0x0C058F5Au); { u32 t_ = r11; PR = 0x0C058F5Eu; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C054420, 0x0C054420u, 0x0C058F5Eu); }  /* 0C058F5A jsr @Rn */
L_0C058F5E: BLKS(0x0C058F5Eu);
	r4 = 0xAu;  /* 0C058F5E mov #imm,Rn */
	r10 = 0xC057000u; UPD(0x0C058F62u, 2);  /* 0C058F60 mov.l @(disp,pc),Rn */
	IF(0x0C058F62u); { u32 t_ = r9; PR = 0x0C058F66u; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C054480, 0x0C054480u, 0x0C058F66u); }  /* 0C058F62 jsr @Rn */
L_0C058F66: BLKS(0x0C058F66u);
	r4 = 0x9u;  /* 0C058F66 mov #imm,Rn */
	IF(0x0C058F68u); { u32 t_ = r12; PR = 0x0C058F6Cu; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C054500, 0x0C054500u, 0x0C058F6Cu); }  /* 0C058F68 jsr @Rn */
L_0C058F6C: BLKS(0x0C058F6Cu);
	r4 = 0x8u;  /* 0C058F6C mov #imm,Rn */
	IF(0x0C058F6Eu); { u32 t_ = r8; PR = 0x0C058F72u; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C054550, 0x0C054550u, 0x0C058F72u); }  /* 0C058F6E jsr @Rn */
L_0C058F72: BLKS(0x0C058F72u);
	r4 = 0x1u;  /* 0C058F72 mov #imm,Rn */
	IF(0x0C058F74u); { u32 t_ = r10; PR = 0x0C058F78u; r5 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057000, 0x0C057000u, 0x0C058F78u); }  /* 0C058F74 jsr @Rn */
L_0C058F78: BLKS(0x0C058F78u);
	{ IF(0x0C058F7Au); ; /* slot nop */ UPD(0x0C058A5Eu, 3); goto L_0C058A5E; }  /* 0C058F78 bra */
L_0C058F80: BLKS(0x0C058F80u);
	r4 = 0xC286752u; UPD(0x0C058F82u, 1);  /* 0C058F80 mov.l @(disp,pc),Rn */
	{ r0 = r2; /* slot mov Rm,Rn */ UPD(0x0C058F06u, 3); goto L_0C058F06; }  /* 0C058F82 bra */
L_0C058F90: BLKS(0x0C058F90u);
	IF(0x0C058F90u); { u32 t_ = r11; PR = 0x0C058F94u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A6810, 0x0C0A6810u, 0x0C058F94u); }  /* 0C058F90 jsr @Rn */
L_0C058F94: BLKS(0x0C058F94u);
	{ r0 = r9; /* slot mov Rm,Rn */ UPD(0x0C058A2Cu, 3); goto L_0C058A2C; }  /* 0C058F94 bra */
L_0C058FA0: BLKS(0x0C058FA0u);
	IF(0x0C058FA0u); { u32 t_ = r12; PR = 0x0C058FA4u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AF650, 0x0C0AF650u, 0x0C058FA4u); }  /* 0C058FA0 jsr @Rn */
L_0C058FA4: BLKS(0x0C058FA4u);
	{ IF(0x0C058FA6u); ; /* slot nop */ UPD(0x0C058A1Cu, 3); goto L_0C058A1C; }  /* 0C058FA4 bra */
L_0C058FB0: BLKS(0x0C058FB0u);
	r9 = 0xC26C8C4u; UPD(0x0C058FB2u, 1);  /* 0C058FB0 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C058FB4u, 1);  /* 0C058FB2 mov.b @Rm,Rn */
	r7 = 0xC392D50u; UPD(0x0C058FB6u, 1);  /* 0C058FB4 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C058FB6 tst Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r7); UPD(0x0C058FBAu, 2);  /* 0C058FB8 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r0, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C058FBA negc Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C058FBC tst Rm,Rn */
	{ u32 t_ = 0u - r0, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C058FBE negc Rm,Rn */
	T = (r6 & r5) == 0;  /* 0C058FC0 tst Rm,Rn */
	if (T) { UPD(0x0C058FCCu, 7); goto L_0C058FCC; }  /* 0C058FC2 bt */
L_0C058FC4: BLKS(0x0C058FC4u);
	r12 = 0xC0AFC10u; UPD(0x0C058FC6u, 1);  /* 0C058FC4 mov.l @(disp,pc),Rn */
	r4 = 0x85u; UPD(0x0C058FC8u, 1);  /* 0C058FC6 mov.w @(disp,pc),Rn */
	IF(0x0C058FC8u); { u32 t_ = r12; PR = 0x0C058FCCu; IF(0x0C058FCAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C058FCCu); }  /* 0C058FC8 jsr @Rn */
L_0C058FCC: BLKS(0x0C058FCCu);
	{ IF(0x0C058FCEu); ; /* slot nop */ UPD(0x0C0589E4u, 3); goto L_0C0589E4; }  /* 0C058FCC bra */
L_0C058FD0: BLKS(0x0C058FD0u);
	r9 = 0xC0AFC10u; UPD(0x0C058FD2u, 1);  /* 0C058FD0 mov.l @(disp,pc),Rn */
	r4 = 0xC1u; UPD(0x0C058FD4u, 1);  /* 0C058FD2 mov.w @(disp,pc),Rn */
	IF(0x0C058FD4u); { u32 t_ = r9; PR = 0x0C058FD8u; IF(0x0C058FD6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C058FD8u); }  /* 0C058FD4 jsr @Rn */
L_0C058FD8: BLKS(0x0C058FD8u);
	{ IF(0x0C058FDAu); ; /* slot nop */ UPD(0x0C0589C0u, 3); goto L_0C0589C0; }  /* 0C058FD8 bra */
}

/* FUN_0c059060 */
void f_0C059060(sh3_t *c)
{
	LOCALS;
L_0C059060: BLKS(0x0C059060u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C059062u, 1);  /* 0C059060 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C059064u, 1);  /* 0C059062 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C059066u, 1);  /* 0C059064 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C059068u, 1);  /* 0C059066 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05906Au, 1);  /* 0C059068 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05906Cu, 1);  /* 0C05906A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05906Eu, 1);  /* 0C05906C mov.l Rm,@-Rn */
	r3 = 0xC21F589u; UPD(0x0C059070u, 1);  /* 0C05906E mov.l @(disp,pc),Rn */
	IF(0x0C059070u); r15 -= 4; W32(r15, PR); UPD(0x0C059072u, 1);  /* 0C059070 sts.l pr,@-Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C059074u, 1);  /* 0C059072 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C059074 add #imm,Rn */
	T = (r2 & r2) == 0;  /* 0C059076 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C059080u, 5); goto L_0C059080; } goto L_0C05907C; }  /* 0C059078 bt/s */
L_0C05907C: BLKS(0x0C05907Cu);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C059360u, 4); goto L_0C059360; }  /* 0C05907C bra */
L_0C059080: BLKS(0x0C059080u);
	r7 = 0xC7C4234u; UPD(0x0C059082u, 1);  /* 0C059080 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C059082 mov #imm,Rn */
	r9 = 0xC21CA15u; UPD(0x0C059086u, 2);  /* 0C059084 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C059088u, 1);  /* 0C059086 mov.b @Rm,Rn */
	r2 = 0xC392E0Cu; UPD(0x0C05908Au, 1);  /* 0C059088 mov.l @(disp,pc),Rn */
	r1 = 0x12Cu; UPD(0x0C05908Cu, 1);  /* 0C05908A mov.w @(disp,pc),Rn */
	r4 = 0xC286748u; UPD(0x0C05908Eu, 1);  /* 0C05908C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C059090u, 1);  /* 0C05908E mov.b @Rm,Rn */
	W32(r14, r5); UPD(0x0C059092u, 1);  /* 0C059090 mov.l Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C059092 tst Rm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C059096u, 2);  /* 0C059094 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r6); UPD(0x0C059098u, 1);  /* 0C059096 mov.l Rm,@(disp,Rn) */
	W32(r2, r5); UPD(0x0C05909Au, 1);  /* 0C059098 mov.l Rm,@Rn */
	{ u32 c_ = !T; W32(r4, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0590A2u, 3); goto L_0C0590A2; } UPD(0x0C05909Eu, 1); goto L_0C05909E; }  /* 0C05909A bf/s */
L_0C05909E: BLKS(0x0C05909Eu);
	{ IF(0x0C0590A0u); ; /* slot nop */ UPD(0x0C059410u, 3); goto L_0C059410; }  /* 0C05909E bra */
L_0C0590A2: BLKS(0x0C0590A2u);
	r8 = 0xC7C00F0u; UPD(0x0C0590A4u, 1);  /* 0C0590A2 mov.l @(disp,pc),Rn */
	r0 = 0xBu;  /* 0C0590A4 mov #imm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0590A8u, 2);  /* 0C0590A6 mov.l @(disp,Rm),Rn */
	r2 = 0xC283CA4u; UPD(0x0C0590AAu, 1);  /* 0C0590A8 mov.l @(disp,pc),Rn */
	r4 = 0xC3929E0u; UPD(0x0C0590ACu, 1);  /* 0C0590AA mov.l @(disp,pc),Rn */
	r3 = 0xC22486Eu; UPD(0x0C0590AEu, 1);  /* 0C0590AC mov.l @(disp,pc),Rn */
	r10 = 0xC0613E0u; UPD(0x0C0590B0u, 1);  /* 0C0590AE mov.l @(disp,pc),Rn */
	W32(r2, r5); UPD(0x0C0590B2u, 1);  /* 0C0590B0 mov.l Rm,@Rn */
	W32(r4, r5); UPD(0x0C0590B4u, 1);  /* 0C0590B2 mov.l Rm,@Rn */
	IF(0x0C0590B4u); { u32 t_ = r8; PR = 0x0C0590B8u; W8(r3, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C00F0, 0x0C7C00F0u, 0x0C0590B8u); }  /* 0C0590B4 jsr @Rn */
L_0C0590B8: BLKS(0x0C0590B8u);
	r13 = 0xC0AE410u; UPD(0x0C0590BAu, 1);  /* 0C0590B8 mov.l @(disp,pc),Rn */
	IF(0x0C0590BAu); { u32 t_ = r10; PR = 0x0C0590BEu; IF(0x0C0590BCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0613E0, 0x0C0613E0u, 0x0C0590BEu); }  /* 0C0590BA jsr @Rn */
L_0C0590BE: BLKS(0x0C0590BEu);
	r12 = 0xC7C38D8u; UPD(0x0C0590C0u, 1);  /* 0C0590BE mov.l @(disp,pc),Rn */
	IF(0x0C0590C0u); { u32 t_ = r13; PR = 0x0C0590C4u; IF(0x0C0590C2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AE410, 0x0C0AE410u, 0x0C0590C4u); }  /* 0C0590C0 jsr @Rn */
L_0C0590C4: BLKS(0x0C0590C4u);
	r10 = 0xC05B570u; UPD(0x0C0590C6u, 1);  /* 0C0590C4 mov.l @(disp,pc),Rn */
	IF(0x0C0590C6u); { u32 t_ = r12; PR = 0x0C0590CAu; IF(0x0C0590C8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C06C5D0, 0x0C06C5D0u, 0x0C0590CAu); }  /* 0C0590C6 jsr @Rn */
L_0C0590CA: BLKS(0x0C0590CAu);
	r11 = 0xC05B5C0u; UPD(0x0C0590CCu, 1);  /* 0C0590CA mov.l @(disp,pc),Rn */
	IF(0x0C0590CCu); { u32 t_ = r10; PR = 0x0C0590D0u; IF(0x0C0590CEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B570, 0x0C05B570u, 0x0C0590D0u); }  /* 0C0590CC jsr @Rn */
L_0C0590D0: BLKS(0x0C0590D0u);
	r8 = 0xC0AD0F0u; UPD(0x0C0590D2u, 1);  /* 0C0590D0 mov.l @(disp,pc),Rn */
	IF(0x0C0590D2u); { u32 t_ = r11; PR = 0x0C0590D6u; IF(0x0C0590D4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B5C0, 0x0C05B5C0u, 0x0C0590D6u); }  /* 0C0590D2 jsr @Rn */
L_0C0590D6: BLKS(0x0C0590D6u);
	r13 = 0xC05B3E0u; UPD(0x0C0590D8u, 1);  /* 0C0590D6 mov.l @(disp,pc),Rn */
	IF(0x0C0590D8u); { u32 t_ = r8; PR = 0x0C0590DCu; IF(0x0C0590DAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AD0F0, 0x0C0AD0F0u, 0x0C0590DCu); }  /* 0C0590D8 jsr @Rn */
L_0C0590DC: BLKS(0x0C0590DCu);
	r12 = 0xC0AED70u; UPD(0x0C0590DEu, 1);  /* 0C0590DC mov.l @(disp,pc),Rn */
	IF(0x0C0590DEu); { u32 t_ = r10; PR = 0x0C0590E2u; IF(0x0C0590E0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B570, 0x0C05B570u, 0x0C0590E2u); }  /* 0C0590DE jsr @Rn */
L_0C0590E2: BLKS(0x0C0590E2u);
	IF(0x0C0590E2u); { u32 t_ = r13; PR = 0x0C0590E6u; IF(0x0C0590E4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B3E0, 0x0C05B3E0u, 0x0C0590E6u); }  /* 0C0590E2 jsr @Rn */
L_0C0590E6: BLKS(0x0C0590E6u);
	r11 = 0xC392D50u; UPD(0x0C0590E8u, 1);  /* 0C0590E6 mov.l @(disp,pc),Rn */
	IF(0x0C0590E8u); { u32 t_ = r12; PR = 0x0C0590ECu; IF(0x0C0590EAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AED70, 0x0C0AED70u, 0x0C0590ECu); }  /* 0C0590E8 jsr @Rn */
L_0C0590EC: BLKS(0x0C0590ECu);
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C0590EEu, 1);  /* 0C0590EC mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0590EE tst Rm,Rn */
	if (T) { UPD(0x0C059110u, 4); goto L_0C059110; }  /* 0C0590F0 bt */
L_0C0590F2: BLKS(0x0C0590F2u);
	r13 = (u32)(s32)(s8)R8(r9); UPD(0x0C0590F4u, 1);  /* 0C0590F2 mov.b @Rm,Rn */
	r11 = 0xFFFFFFFFu;  /* 0C0590F4 mov #imm,Rn */
	r12 = 0xC26C8C4u; UPD(0x0C0590F8u, 2);  /* 0C0590F6 mov.l @(disp,pc),Rn */
	T = (r13 & r13) == 0;  /* 0C0590F8 tst Rm,Rn */
	IF(0x0C0590FAu); r9 = T;  /* 0C0590FA movt Rn */
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C0590FEu, 3);  /* 0C0590FC mov.b @Rm,Rn */
	{ u32 t_ = 0u - r11, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C0590FE negc Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C059100 tst Rm,Rn */
	{ u32 t_ = 0u - r11, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C059102 negc Rm,Rn */
	r6 &= r7;  /* 0C059104 and Rm,Rn */
	r9 |= r6;  /* 0C059106 or Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C059108 tst Rm,Rn */
	if (T) { UPD(0x0C059110u, 9); goto L_0C059110; }  /* 0C05910A bt */
L_0C05910C: BLKS(0x0C05910Cu);
	{ IF(0x0C05910Eu); ; /* slot nop */ UPD(0x0C059400u, 3); goto L_0C059400; }  /* 0C05910C bra */
L_0C059110: BLKS(0x0C059110u);
	r11 = 0xC04F330u; UPD(0x0C059112u, 1);  /* 0C059110 mov.l @(disp,pc),Rn */
	r9 = 0xC04F930u; UPD(0x0C059114u, 1);  /* 0C059112 mov.l @(disp,pc),Rn */
	IF(0x0C059114u); { u32 t_ = r11; PR = 0x0C059118u; IF(0x0C059116u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C059118u); }  /* 0C059114 jsr @Rn */
L_0C059118: BLKS(0x0C059118u);
	r8 = 0xC0505F0u; UPD(0x0C05911Au, 1);  /* 0C059118 mov.l @(disp,pc),Rn */
	IF(0x0C05911Au); { u32 t_ = r9; PR = 0x0C05911Eu; IF(0x0C05911Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C05911Eu); }  /* 0C05911A jsr @Rn */
L_0C05911E: BLKS(0x0C05911Eu);
	r10 = 0xC0605D0u; UPD(0x0C059120u, 1);  /* 0C05911E mov.l @(disp,pc),Rn */
	IF(0x0C059120u); { u32 t_ = r8; PR = 0x0C059124u; IF(0x0C059122u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C059124u); }  /* 0C059120 jsr @Rn */
L_0C059124: BLKS(0x0C059124u);
	r13 = 0xC0AE540u; UPD(0x0C059126u, 1);  /* 0C059124 mov.l @(disp,pc),Rn */
	IF(0x0C059126u); { u32 t_ = r10; PR = 0x0C05912Au; IF(0x0C059128u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0605D0, 0x0C0605D0u, 0x0C05912Au); }  /* 0C059126 jsr @Rn */
L_0C05912A: BLKS(0x0C05912Au);
	r12 = 0xC0A6770u; UPD(0x0C05912Cu, 1);  /* 0C05912A mov.l @(disp,pc),Rn */
	IF(0x0C05912Cu); { u32 t_ = r13; PR = 0x0C059130u; IF(0x0C05912Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AE540, 0x0C0AE540u, 0x0C059130u); }  /* 0C05912C jsr @Rn */
L_0C059130: BLKS(0x0C059130u);
	r11 = 0xC060D90u; UPD(0x0C059132u, 1);  /* 0C059130 mov.l @(disp,pc),Rn */
	IF(0x0C059132u); { u32 t_ = r12; PR = 0x0C059136u; IF(0x0C059134u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A6770, 0x0C0A6770u, 0x0C059136u); }  /* 0C059132 jsr @Rn */
L_0C059136: BLKS(0x0C059136u);
	r9 = 0xC0AF600u; UPD(0x0C059138u, 1);  /* 0C059136 mov.l @(disp,pc),Rn */
	IF(0x0C059138u); { u32 t_ = r11; PR = 0x0C05913Cu; IF(0x0C05913Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C060D90, 0x0C060D90u, 0x0C05913Cu); }  /* 0C059138 jsr @Rn */
L_0C05913C: BLKS(0x0C05913Cu);
	r8 = 0xC0A68C0u; UPD(0x0C05913Eu, 1);  /* 0C05913C mov.l @(disp,pc),Rn */
	IF(0x0C05913Eu); { u32 t_ = r9; PR = 0x0C059142u; IF(0x0C059140u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AF600, 0x0C0AF600u, 0x0C059142u); }  /* 0C05913E jsr @Rn */
L_0C059142: BLKS(0x0C059142u);
	IF(0x0C059142u); { u32 t_ = r8; PR = 0x0C059146u; r9 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A68C0, 0x0C0A68C0u, 0x0C059146u); }  /* 0C059142 jsr @Rn */
L_0C059146: BLKS(0x0C059146u);
	r8 = r9;  /* 0C059146 mov Rm,Rn */
	UPD(0x0C059148u, 1);
L_0C059148: BLKS(0x0C059148u);
	r0 = 0xC2864B8u; UPD(0x0C05914Au, 1);  /* 0C059148 mov.l @(disp,pc),Rn */
	r8 += r8;  /* 0C05914A add Rm,Rn */
	IF(0x0C05914Cu); r3 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C05914Eu, 2);  /* 0C05914C mov.w @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C05914E tst Rm,Rn */
	if (T) { UPD(0x0C059156u, 4); goto L_0C059156; }  /* 0C059150 bt */
L_0C059152: BLKS(0x0C059152u);
	{ IF(0x0C059154u); ; /* slot nop */ UPD(0x0C0593F0u, 3); goto L_0C0593F0; }  /* 0C059152 bra */
L_0C059156: BLKS(0x0C059156u);
	r2 = 0xC283752u; UPD(0x0C059158u, 1);  /* 0C059156 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C059158 mov Rm,Rn */
	IF(0x0C05915Au); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C05915Cu, 2);  /* 0C05915A mov.w @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C05915C tst Rm,Rn */
	if (T) { UPD(0x0C059164u, 4); goto L_0C059164; }  /* 0C05915E bt */
L_0C059160: BLKS(0x0C059160u);
	{ IF(0x0C059162u); ; /* slot nop */ UPD(0x0C0593E0u, 3); goto L_0C0593E0; }  /* 0C059160 bra */
L_0C059164: BLKS(0x0C059164u);
	r7 = r9;  /* 0C059164 mov Rm,Rn */
	UPD(0x0C059166u, 1);
L_0C059166: BLKS(0x0C059166u);
	r7 += 0x1u;  /* 0C059166 add #imm,Rn */
	r9 = r7 & 0xFF;  /* 0C059168 extu.b Rm,Rn */
	r0 = 0x17u;  /* 0C05916A mov #imm,Rn */
	T = r9 > r0;  /* 0C05916C cmp/hi Rm,Rn */
	{ u32 c_ = !T; r8 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C059148u, 7); goto L_0C059148; } goto L_0C059172; }  /* 0C05916E bf/s */
L_0C059172: BLKS(0x0C059172u);
	r1 = 0xC392E0Cu; UPD(0x0C059174u, 2);  /* 0C059172 mov.l @(disp,pc),Rn */
	r4 = R32(r1); UPD(0x0C059176u, 1);  /* 0C059174 mov.l @Rm,Rn */
	IF(0x0C059176u); T = (s32)r4 > 0;  /* 0C059176 cmp/pl Rn */
	{ u32 c_ = T; r5 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C059180u, 4); goto L_0C059180; } goto L_0C05917C; }  /* 0C059178 bt/s */
L_0C05917C: BLKS(0x0C05917Cu);
	{ r4 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C0593C0u, 4); goto L_0C0593C0; }  /* 0C05917C bra */
L_0C059180: BLKS(0x0C059180u);
	r12 = 0xC059B80u; UPD(0x0C059182u, 1);  /* 0C059180 mov.l @(disp,pc),Rn */
	r4 += 0xFFFFFFFFu;  /* 0C059182 add #imm,Rn */
	W32(r1, r4); UPD(0x0C059186u, 2);  /* 0C059184 mov.l Rm,@Rn */
	IF(0x0C059186u); { u32 t_ = r12; PR = 0x0C05918Au; r6 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C059B80, 0x0C059B80u, 0x0C05918Au); }  /* 0C059186 jsr @Rn */
L_0C05918A: BLKS(0x0C05918Au);
	r9 = 0xC21CA15u; UPD(0x0C05918Cu, 1);  /* 0C05918A mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s8)R8(r9); UPD(0x0C05918Eu, 1);  /* 0C05918C mov.b @Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C05918E tst Rm,Rn */
	if (!T) { UPD(0x0C059196u, 4); goto L_0C059196; }  /* 0C059190 bf */
L_0C059192: BLKS(0x0C059192u);
	{ IF(0x0C059194u); ; /* slot nop */ UPD(0x0C0593B0u, 3); goto L_0C0593B0; }  /* 0C059192 bra */
L_0C059196: BLKS(0x0C059196u);
	r5 = 0x16Cu; UPD(0x0C059198u, 1);  /* 0C059196 mov.w @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C059198 mov #imm,Rn */
	r4 = R32(r14 + 0x8u); UPD(0x0C05919Cu, 2);  /* 0C05919A mov.l @(disp,Rm),Rn */
	r11 = 0x0u;  /* 0C05919C mov #imm,Rn */
	IF(0x0C05919Eu); MACL = r4 * r5;  /* 0C05919E mul.l Rm,Rn */
	r3 = 0xC2859A8u; UPD(0x0C0591A2u, 4);  /* 0C0591A0 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0591A2 mov #imm,Rn */
	r12 = 0xC161588u; UPD(0x0C0591A6u, 2);  /* 0C0591A4 mov.l @(disp,pc),Rn */
	IF(0x0C0591A6u); r8 = MACL;  /* 0C0591A6 sts macl,Rn */
	r13 = 0xC161708u; UPD(0x0C0591AAu, 2);  /* 0C0591A8 mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C0591AA add Rm,Rn */
	r0 = r12;  /* 0C0591AC mov Rm,Rn */
	UPD(0x0C0591AEu, 2);
L_0C0591AE: BLKS(0x0C0591AEu);
	r8 += 0x18u;  /* 0C0591AE add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C0591B2u, 2);  /* 0C0591B0 mov.b @Rm,Rn */
	IF(0x0C0591B2u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0591B4u, 1);  /* 0C0591B2 mov.b @(r0,Rm),Rn */
	r8 += 0xFFFFFFE8u;  /* 0C0591B4 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C0591B6 extu.b Rm,Rn */
	IF(0x0C0591B8u); r0 <<= 2;  /* 0C0591B8 shll2 Rn */
	IF(0x0C0591BAu); r7 = R32(r0 + r13); UPD(0x0C0591BCu, 4);  /* 0C0591BA mov.l @(r0,Rm),Rn */
	r6 = 0x5u;  /* 0C0591BC mov #imm,Rn */
	r0 = 0xC7C0F1Cu; UPD(0x0C0591C0u, 2);  /* 0C0591BE mov.l @(disp,pc),Rn */
	IF(0x0C0591C0u); { u32 t_ = r0; PR = 0x0C0591C4u; r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C0F1C, 0x0C7C0F1Cu, 0x0C0591C4u); }  /* 0C0591C0 jsr @Rn */
L_0C0591C4: BLKS(0x0C0591C4u);
	r2 = 0xC286298u; UPD(0x0C0591C6u, 1);  /* 0C0591C4 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0591C8u, 1);  /* 0C0591C6 mov.l @Rm,Rn */
	r0 -= r11;  /* 0C0591C8 sub Rm,Rn */
	r0 &= 0x40u;  /* 0C0591CA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0591CC tst Rm,Rn */
	{ u32 c_ = !T; r0 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0591D6u, 6); goto L_0C0591D6; } goto L_0C0591D2; }  /* 0C0591CE bf/s */
L_0C0591D2: BLKS(0x0C0591D2u);
	{ r5 = R32(r8 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C059390u, 4); goto L_0C059390; }  /* 0C0591D2 bra */
L_0C0591D6: BLKS(0x0C0591D6u);
	IF(0x0C0591D6u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0591D8u, 1);  /* 0C0591D6 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0591D8 add #imm,Rn */
	r1 = R32(r8 + 0x4u); UPD(0x0C0591DCu, 2);  /* 0C0591DA mov.l @(disp,Rm),Rn */
	r0 = 0x4u;  /* 0C0591DC mov #imm,Rn */
	W32(r15, r0); UPD(0x0C0591E0u, 2);  /* 0C0591DE mov.l Rm,@Rn */
	r7 = 0xFu;  /* 0C0591E0 mov #imm,Rn */
	r7 &= r1;  /* 0C0591E2 and Rm,Rn */
	r0 = 0xC161688u; UPD(0x0C0591E6u, 3);  /* 0C0591E4 mov.l @(disp,pc),Rn */
	IF(0x0C0591E6u); r7 <<= 2;  /* 0C0591E6 shll2 Rn */
	IF(0x0C0591E8u); r4 = R32(r0 + r7); UPD(0x0C0591EAu, 2);  /* 0C0591E8 mov.l @(r0,Rm),Rn */
L_0C0591EA: BLKS(0x0C0591EAu);
	r0 = 0xC7C0FD4u; UPD(0x0C0591ECu, 1);  /* 0C0591EA mov.l @(disp,pc),Rn */
	r6 = 0x13u;  /* 0C0591EC mov #imm,Rn */
	IF(0x0C0591EEu); { u32 t_ = r0; PR = 0x0C0591F2u; r7 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C7C0FD4, 0x0C7C0FD4u, 0x0C0591F2u); }  /* 0C0591EE jsr @Rn */
L_0C0591F2: BLKS(0x0C0591F2u);
	r3 = 0x16Cu; UPD(0x0C0591F4u, 1);  /* 0C0591F2 mov.w @(disp,pc),Rn */
	r6 = 0x17u;  /* 0C0591F4 mov #imm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0591F8u, 2);  /* 0C0591F6 mov.l @(disp,Rm),Rn */
	r15 += 0x4u;  /* 0C0591F8 add #imm,Rn */
	IF(0x0C0591FAu); MACL = r1 * r3;  /* 0C0591FA mul.l Rm,Rn */
	r4 = 0xC2859B0u; UPD(0x0C0591FEu, 4);  /* 0C0591FC mov.l @(disp,pc),Rn */
	r11 += 0x6u;  /* 0C0591FE add #imm,Rn */
	IF(0x0C059200u); r0 = MACL;  /* 0C059200 sts macl,Rn */
	r0 += r10;  /* 0C059202 add Rm,Rn */
	r7 = 0xC161588u; UPD(0x0C059206u, 4);  /* 0C059204 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C059206 add Rm,Rn */
	r0 = r7;  /* 0C059208 mov Rm,Rn */
	IF(0x0C05920Au); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C05920Cu, 3);  /* 0C05920A mov.b @(r0,Rm),Rn */
	r8 += 0x1Cu;  /* 0C05920C add #imm,Rn */
	r0 = 0xC050AF0u; UPD(0x0C059210u, 2);  /* 0C05920E mov.l @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C059210 add #imm,Rn */
	IF(0x0C059212u); { u32 t_ = r0; PR = 0x0C059216u; r10 += 0x1Cu; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050AF0, 0x0C050AF0u, 0x0C059216u); }  /* 0C059212 jsr @Rn */
L_0C059216: BLKS(0x0C059216u);
	r6 = 0x9u;  /* 0C059216 mov #imm,Rn */
	T = (s32)r9 > (s32)r6;  /* 0C059218 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0591AEu, 5); goto L_0C0591AE; } goto L_0C05921E; }  /* 0C05921A bf/s */
L_0C05921E: BLKS(0x0C05921Eu);
	r10 = 0xC060CF0u; UPD(0x0C059220u, 2);  /* 0C05921E mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C059220 mov #imm,Rn */
	r13 = 0xC21F7F9u; UPD(0x0C059224u, 2);  /* 0C059222 mov.l @(disp,pc),Rn */
	IF(0x0C059224u); { u32 t_ = r10; PR = 0x0C059228u; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060CF0, 0x0C060CF0u, 0x0C059228u); }  /* 0C059224 jsr @Rn */
L_0C059228: BLKS(0x0C059228u);
	r12 = (u32)(s32)(s8)R8(r13); UPD(0x0C05922Au, 1);  /* 0C059228 mov.b @Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C05922A tst Rm,Rn */
	if (T) { UPD(0x0C059232u, 4); goto L_0C059232; }  /* 0C05922C bt */
L_0C05922E: BLKS(0x0C05922Eu);
	{ IF(0x0C059230u); ; /* slot nop */ UPD(0x0C059380u, 3); goto L_0C059380; }  /* 0C05922E bra */
L_0C059232: BLKS(0x0C059232u);
	r5 = R32(r14); UPD(0x0C059234u, 1);  /* 0C059232 mov.l @Rm,Rn */
L_0C059234: BLKS(0x0C059234u);
	IF(0x0C059234u); T = (s32)r5 >= 0;  /* 0C059234 cmp/pz Rn */
	if (T) { UPD(0x0C05923Eu, 4); goto L_0C05923E; }  /* 0C059236 bt */
L_0C059238: BLKS(0x0C059238u);
	r5 += 0x3u;  /* 0C059238 add #imm,Rn */
	{ r2 = 0xEu; /* slot mov #imm,Rn */ UPD(0x0C059240u, 4); goto L_0C059240; }  /* 0C05923A bra */
L_0C05923E: BLKS(0x0C05923Eu);
	r2 = 0xEu;  /* 0C05923E mov #imm,Rn */
	UPD(0x0C059240u, 1);
L_0C059240: BLKS(0x0C059240u);
	IF(0x0C059240u); ARG0(0x452Du); { s32 s_ = (s32)r2; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C059240 shld Rm,Rn */
	r11 = 0xC04F770u; UPD(0x0C059244u, 2);  /* 0C059242 mov.l @(disp,pc),Rn */
	r4 = (r5 >> 16) | (r5 << 16);  /* 0C059244 swap.w Rm,Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C059246 exts.w Rm,Rn */
	IF(0x0C059248u); { u32 t_ = r11; PR = 0x0C05924Cu; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C04F770, 0x0C04F770u, 0x0C05924Cu); }  /* 0C059248 jsr @Rn */
L_0C05924C: BLKS(0x0C05924Cu);
	r2 = R32(r14); UPD(0x0C05924Eu, 1);  /* 0C05924C mov.l @Rm,Rn */
	r9 = 0x1Bu;  /* 0C05924E mov #imm,Rn */
	T = (s32)r2 > (s32)r9;  /* 0C059250 cmp/gt Rm,Rn */
	{ u32 c_ = T; r6 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05925Cu, 5); goto L_0C05925C; } goto L_0C059256; }  /* 0C059252 bt/s */
L_0C059256: BLKS(0x0C059256u);
	r6 += 0x1u;  /* 0C059256 add #imm,Rn */
	r5 = (u32)(s32)(s16)r6;  /* 0C059258 exts.w Rm,Rn */
	W32(r14, r5); UPD(0x0C05925Cu, 4);  /* 0C05925A mov.l Rm,@Rn */
L_0C05925C: BLKS(0x0C05925Cu);
	r8 = 0xC050840u; UPD(0x0C05925Eu, 1);  /* 0C05925C mov.l @(disp,pc),Rn */
	r10 = 0xC392E0Cu; UPD(0x0C059260u, 1);  /* 0C05925E mov.l @(disp,pc),Rn */
	IF(0x0C059260u); { u32 t_ = r8; PR = 0x0C059264u; IF(0x0C059262u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C059264u); }  /* 0C059260 jsr @Rn */
L_0C059264: BLKS(0x0C059264u);
	r3 = R32(r10); UPD(0x0C059266u, 1);  /* 0C059264 mov.l @Rm,Rn */
	r13 = 0xC060C30u; UPD(0x0C059268u, 1);  /* 0C059266 mov.l @(disp,pc),Rn */
	{ T = (r3 & r3) == 0; /* slot tst Rm,Rn */ UPD(0x0C059330u, 3); goto L_0C059330; }  /* 0C059268 bra */
L_0C059330: BLKS(0x0C059330u);
	IF(0x0C059330u); { u32 t_ = r13; PR = 0x0C059334u; IF(0x0C059332u); r12 = T; /* slot movt Rn */ UPD(t_, 2); CALLP(t_, f_0C060C30, 0x0C060C30u, 0x0C059334u); }  /* 0C059330 jsr @Rn */
L_0C059334: BLKS(0x0C059334u);
	T = (r0 & r0) == 0;  /* 0C059334 tst Rm,Rn */
	r0 = 0xFFFFFFFFu;  /* 0C059336 mov #imm,Rn */
	{ u32 t_ = 0u - r0, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C059338 negc Rm,Rn */
	r7 &= r12;  /* 0C05933A and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C05933C tst Rm,Rn */
	if (!T) { UPD(0x0C059348u, 8); goto L_0C059348; }  /* 0C05933E bf */
L_0C059340: BLKS(0x0C059340u);
	r11 = 0xC286748u; UPD(0x0C059342u, 1);  /* 0C059340 mov.l @(disp,pc),Rn */
	r9 = R32(r11); UPD(0x0C059344u, 1);  /* 0C059342 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C059344 tst Rm,Rn */
	if (!T) { UPD(0x0C059406u, 4); goto L_0C059406; }  /* 0C059346 bf */
L_0C059348: BLKS(0x0C059348u);
	r12 = 0xC286276u; UPD(0x0C05934Au, 1);  /* 0C059348 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C05934A mov #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C05934Eu, 2);  /* 0C05934C mov.b @Rm,Rn */
	r6 = R32(r14 + 0x4u); UPD(0x0C059350u, 1);  /* 0C05934E mov.l @(disp,Rm),Rn */
	r2 = 0xC0AFCA0u; UPD(0x0C059352u, 1);  /* 0C059350 mov.l @(disp,pc),Rn */
	r6 &= r7;  /* 0C059352 and Rm,Rn */
	r5 = 0xC28628Cu; UPD(0x0C059356u, 2);  /* 0C059354 mov.l @(disp,pc),Rn */
	IF(0x0C059356u); { u32 t_ = r2; PR = 0x0C05935Au; W8(r5, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFCA0, 0x0C0AFCA0u, 0x0C05935Au); }  /* 0C059356 jsr @Rn */
L_0C05935A: BLKS(0x0C05935Au);
	r4 = 0xC21CA15u; UPD(0x0C05935Cu, 1);  /* 0C05935A mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C05935Eu, 1);  /* 0C05935C mov.b @Rm,Rn */
	r14 += 0xCu;  /* 0C05935E add #imm,Rn */
	UPD(0x0C059360u, 1);
L_0C059360: BLKS(0x0C059360u);
	r15 = r14;  /* 0C059360 mov Rm,Rn */
	IF(0x0C059362u); PR = R32(r15); r15 += 4; UPD(0x0C059364u, 2);  /* 0C059362 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C059366u, 1);  /* 0C059364 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C059368u, 1);  /* 0C059366 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05936Au, 1);  /* 0C059368 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05936Cu, 1);  /* 0C05936A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05936Eu, 1);  /* 0C05936C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C059370u, 1);  /* 0C05936E mov.l @Rm+,Rn */
	IF(0x0C059370u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C059370 rts */
L_0C059380: BLKS(0x0C059380u);
	r8 = 0xC05B800u; UPD(0x0C059382u, 1);  /* 0C059380 mov.l @(disp,pc),Rn */
	IF(0x0C059382u); { u32 t_ = r8; PR = 0x0C059386u; IF(0x0C059384u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B800, 0x0C05B800u, 0x0C059386u); }  /* 0C059382 jsr @Rn */
L_0C059386: BLKS(0x0C059386u);
	{ r5 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C059234u, 3); goto L_0C059234; }  /* 0C059386 bra */
L_0C059390: BLKS(0x0C059390u);
	r4 = 0xFu;  /* 0C059390 mov #imm,Rn */
	r4 &= r5;  /* 0C059392 and Rm,Rn */
	r0 = r12;  /* 0C059394 mov Rm,Rn */
	IF(0x0C059396u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C059398u, 4);  /* 0C059396 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C059398 add #imm,Rn */
	r2 = 0x4u;  /* 0C05939A mov #imm,Rn */
	IF(0x0C05939Cu); r4 <<= 2;  /* 0C05939C shll2 Rn */
	W32(r15, r2); UPD(0x0C0593A0u, 4);  /* 0C05939E mov.l Rm,@Rn */
	r0 = r4;  /* 0C0593A0 mov Rm,Rn */
	r3 = 0xC1616C8u; UPD(0x0C0593A4u, 2);  /* 0C0593A2 mov.l @(disp,pc),Rn */
	{ IF(0x0C0593A6u); r4 = R32(r0 + r3); /* slot mov.l @(r0,Rm),Rn */ UPD(0x0C0591EAu, 3); goto L_0C0591EA; }  /* 0C0593A4 bra */
L_0C0593B0: BLKS(0x0C0593B0u);
	r11 = 0xC0596B0u; UPD(0x0C0593B2u, 1);  /* 0C0593B0 mov.l @(disp,pc),Rn */
	IF(0x0C0593B2u); { u32 t_ = r11; PR = 0x0C0593B6u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0596B0, 0x0C0596B0u, 0x0C0593B6u); }  /* 0C0593B2 jsr @Rn */
L_0C0593B6: BLKS(0x0C0593B6u);
	{ W32(r14 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C059196u, 3); goto L_0C059196; }  /* 0C0593B6 bra */
L_0C0593C0: BLKS(0x0C0593C0u);
	r10 = 0xC286748u; UPD(0x0C0593C2u, 1);  /* 0C0593C0 mov.l @(disp,pc),Rn */
	r1 = R32(r10); UPD(0x0C0593C4u, 1);  /* 0C0593C2 mov.l @Rm,Rn */
	r5 = 0xCu;  /* 0C0593C4 mov #imm,Rn */
	r13 = 0xC059C90u; UPD(0x0C0593C8u, 2);  /* 0C0593C6 mov.l @(disp,pc),Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0593C8 add #imm,Rn */
	IF(0x0C0593CAu); { u32 t_ = r13; PR = 0x0C0593CEu; W32(r10, r1); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C059C90, 0x0C059C90u, 0x0C0593CEu); }  /* 0C0593CA jsr @Rn */
L_0C0593CE: BLKS(0x0C0593CEu);
	{ IF(0x0C0593D0u); ; /* slot nop */ UPD(0x0C05918Au, 3); goto L_0C05918A; }  /* 0C0593CE bra */
L_0C0593E0: BLKS(0x0C0593E0u);
	r6 = 0xC0A6810u; UPD(0x0C0593E2u, 1);  /* 0C0593E0 mov.l @(disp,pc),Rn */
	IF(0x0C0593E2u); { u32 t_ = r6; PR = 0x0C0593E6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A6810, 0x0C0A6810u, 0x0C0593E6u); }  /* 0C0593E2 jsr @Rn */
L_0C0593E6: BLKS(0x0C0593E6u);
	{ r7 = r9; /* slot mov Rm,Rn */ UPD(0x0C059166u, 3); goto L_0C059166; }  /* 0C0593E6 bra */
L_0C0593F0: BLKS(0x0C0593F0u);
	r5 = 0xC0AF650u; UPD(0x0C0593F2u, 1);  /* 0C0593F0 mov.l @(disp,pc),Rn */
	IF(0x0C0593F2u); { u32 t_ = r5; PR = 0x0C0593F6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AF650, 0x0C0AF650u, 0x0C0593F6u); }  /* 0C0593F2 jsr @Rn */
L_0C0593F6: BLKS(0x0C0593F6u);
	{ IF(0x0C0593F8u); ; /* slot nop */ UPD(0x0C059156u, 3); goto L_0C059156; }  /* 0C0593F6 bra */
L_0C059400: BLKS(0x0C059400u);
	r10 = 0xC0AFCA0u; UPD(0x0C059402u, 1);  /* 0C059400 mov.l @(disp,pc),Rn */
	IF(0x0C059402u); { u32 t_ = r10; PR = 0x0C059406u; r4 = 0xBu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFCA0, 0x0C0AFCA0u, 0x0C059406u); }  /* 0C059402 jsr @Rn */
L_0C059406: BLKS(0x0C059406u);
	{ IF(0x0C059408u); ; /* slot nop */ UPD(0x0C059110u, 3); goto L_0C059110; }  /* 0C059406 bra */
L_0C059410: BLKS(0x0C059410u);
	r8 = 0xC059450u; UPD(0x0C059412u, 1);  /* 0C059410 mov.l @(disp,pc),Rn */
	IF(0x0C059412u); { u32 t_ = r8; PR = 0x0C059416u; IF(0x0C059414u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C059450, 0x0C059450u, 0x0C059416u); }  /* 0C059412 jsr @Rn */
L_0C059416: BLKS(0x0C059416u);
	{ IF(0x0C059418u); ; /* slot nop */ UPD(0x0C0590A2u, 3); goto L_0C0590A2; }  /* 0C059416 bra */
}

/* FUN_0c059450 */
void f_0C059450(sh3_t *c)
{
	LOCALS;
L_0C059450: BLKS(0x0C059450u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C059452u, 1);  /* 0C059450 mov.l Rm,@-Rn */
	r6 = 0x0u;  /* 0C059452 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C059456u, 2);  /* 0C059454 mov.l Rm,@-Rn */
	r7 = 0xFFFFFFFFu;  /* 0C059456 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05945Au, 2);  /* 0C059458 mov.l Rm,@-Rn */
	r3 = 0x9u;  /* 0C05945A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05945Eu, 2);  /* 0C05945C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C059460u, 1);  /* 0C05945E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C059462u, 1);  /* 0C059460 mov.l Rm,@-Rn */
	r2 = 0xC7C4234u; UPD(0x0C059464u, 1);  /* 0C059462 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C059466u, 1);  /* 0C059464 mov.l Rm,@-Rn */
	r0 = 0x16Cu; UPD(0x0C059468u, 1);  /* 0C059466 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C059468 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C05946Cu, 2);  /* 0C05946A mov.b @Rm,Rn */
	r14 = r15;  /* 0C05946C mov Rm,Rn */
	IF(0x0C05946Eu); MACL = r8 * r0;  /* 0C05946E mul.l Rm,Rn */
	r0 = 0xC2859C2u; UPD(0x0C059472u, 4);  /* 0C059470 mov.l @(disp,pc),Rn */
	IF(0x0C059472u); r2 = MACL;  /* 0C059472 sts macl,Rn */
	r2 += r0;  /* 0C059474 add Rm,Rn */
	IF(0x0C059476u); ;  /* 0C059476 nop */
	UPD(0x0C059478u, 3);
L_0C059478: BLKS(0x0C059478u);
	W8(r2, r7); UPD(0x0C05947Au, 1);  /* 0C059478 mov.b Rm,@Rn */
	r6 += 0x1u;  /* 0C05947A add #imm,Rn */
	T = (s32)r6 > (s32)r3;  /* 0C05947C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x1Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C059478u, 5); goto L_0C059478; } goto L_0C059482; }  /* 0C05947E bf/s */
L_0C059482: BLKS(0x0C059482u);
	r9 = 0xC2859A8u; UPD(0x0C059484u, 2);  /* 0C059482 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C059484 mov #imm,Rn */
	r10 = r9;  /* 0C059486 mov Rm,Rn */
	r5 = 0x0u;  /* 0C059488 mov #imm,Rn */
	r6 = 0x0u;  /* 0C05948A mov #imm,Rn */
	UPD(0x0C05948Cu, 4);
L_0C05948C: BLKS(0x0C05948Cu);
	r7 = 0xC283794u; UPD(0x0C05948Eu, 1);  /* 0C05948C mov.l @(disp,pc),Rn */
	r13 = 0x5u;  /* 0C05948E mov #imm,Rn */
	r11 = 0x26Bu; UPD(0x0C059492u, 2);  /* 0C059490 mov.w @(disp,pc),Rn */
	r7 += r6;  /* 0C059492 add Rm,Rn */
	r0 = r7;  /* 0C059494 mov Rm,Rn */
	IF(0x0C059496u); r3 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C059498u, 3);  /* 0C059496 mov.b @(r0,Rm),Rn */
	r2 = 0xC220C53u; UPD(0x0C05949Au, 1);  /* 0C059498 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C05949A mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C05949C cmp/eq #imm,r0 */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0594A0u, 3);  /* 0C05949E mov.b @Rm,Rn */
	IF(0x0C0594A0u); r3 = T;  /* 0C0594A0 movt Rn */
	r12 = r0 & 0xFF;  /* 0C0594A2 extu.b Rm,Rn */
	T = r13 >= r12;  /* 0C0594A4 cmp/hs Rm,Rn */
	IF(0x0C0594A6u); r11 = T;  /* 0C0594A6 movt Rn */
	r3 &= r11;  /* 0C0594A8 and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0594AA tst Rm,Rn */
	if (!T) { UPD(0x0C0594B2u, 9); goto L_0C0594B2; }  /* 0C0594AC bf */
L_0C0594AE: BLKS(0x0C0594AEu);
	{ IF(0x0C0594B0u); ; /* slot nop */ UPD(0x0C059690u, 3); goto L_0C059690; }  /* 0C0594AE bra */
L_0C0594B2: BLKS(0x0C0594B2u);
	r0 = 0x16Cu; UPD(0x0C0594B4u, 1);  /* 0C0594B2 mov.w @(disp,pc),Rn */
	IF(0x0C0594B4u); MACL = r8 * r0;  /* 0C0594B4 mul.l Rm,Rn */
	r3 = 0xC161734u; UPD(0x0C0594B8u, 3);  /* 0C0594B6 mov.l @(disp,pc),Rn */
	r0 = 0x270u; UPD(0x0C0594BAu, 1);  /* 0C0594B8 mov.w @(disp,pc),Rn */
	IF(0x0C0594BAu); r12 = MACL;  /* 0C0594BA sts macl,Rn */
	IF(0x0C0594BCu); r13 = R32(r0 + r7); UPD(0x0C0594BEu, 2);  /* 0C0594BC mov.l @(r0,Rm),Rn */
	r12 += r5;  /* 0C0594BE add Rm,Rn */
	r0 = 0x118u; UPD(0x0C0594C2u, 2);  /* 0C0594C0 mov.w @(disp,pc),Rn */
	r12 += r10;  /* 0C0594C2 add Rm,Rn */
	IF(0x0C0594C4u); W32(r0 + r12, r13); UPD(0x0C0594C6u, 2);  /* 0C0594C4 mov.l Rm,@(r0,Rn) */
	r11 = R32(r7 + 0x4u); UPD(0x0C0594C8u, 1);  /* 0C0594C6 mov.l @(disp,Rm),Rn */
	r0 += 0x4u;  /* 0C0594C8 add #imm,Rn */
	IF(0x0C0594CAu); W32(r0 + r12, r11); UPD(0x0C0594CCu, 2);  /* 0C0594CA mov.l Rm,@(r0,Rn) */
	r0 = r4;  /* 0C0594CC mov Rm,Rn */
	IF(0x0C0594CEu); r0 <<= 2;  /* 0C0594CE shll2 Rn */
	IF(0x0C0594D0u); r11 = R32(r0 + r3); UPD(0x0C0594D2u, 3);  /* 0C0594D0 mov.l @(r0,Rm),Rn */
	r0 = 0x120u; UPD(0x0C0594D4u, 1);  /* 0C0594D2 mov.w @(disp,pc),Rn */
	{ u32 v_ = R32(r11); r11 += 4; r2 = v_; } UPD(0x0C0594D6u, 1);  /* 0C0594D4 mov.l @Rm+,Rn */
	IF(0x0C0594D6u); W32(r0 + r12, r2); UPD(0x0C0594D8u, 1);  /* 0C0594D6 mov.l Rm,@(r0,Rn) */
	{ u32 v_ = R32(r11); r11 += 4; r13 = v_; } UPD(0x0C0594DAu, 1);  /* 0C0594D8 mov.l @Rm+,Rn */
	r0 += 0x4u;  /* 0C0594DA add #imm,Rn */
	IF(0x0C0594DCu); W32(r0 + r12, r13); UPD(0x0C0594DEu, 2);  /* 0C0594DC mov.l Rm,@(r0,Rn) */
	r3 = 0x130u; UPD(0x0C0594E0u, 1);  /* 0C0594DE mov.w @(disp,pc),Rn */
	r0 += 0x4u;  /* 0C0594E0 add #imm,Rn */
	r2 = R32(r11); UPD(0x0C0594E4u, 2);  /* 0C0594E2 mov.l @Rm,Rn */
	r3 += r12;  /* 0C0594E4 add Rm,Rn */
	IF(0x0C0594E6u); W32(r0 + r12, r2); UPD(0x0C0594E8u, 2);  /* 0C0594E6 mov.l Rm,@(r0,Rn) */
	r3 += 0x2u;  /* 0C0594E8 add #imm,Rn */
	W8(r3, r4); UPD(0x0C0594ECu, 2);  /* 0C0594EA mov.b Rm,@Rn */
	r0 += 0x4u;  /* 0C0594EC add #imm,Rn */
	r13 = 0x0u;  /* 0C0594EE mov #imm,Rn */
	{ u32 v_ = r4; r3 -= 1; W8(r3, v_); } UPD(0x0C0594F2u, 3);  /* 0C0594F0 mov.b Rm,@-Rn */
	IF(0x0C0594F2u); W32(r0 + r12, r13); UPD(0x0C0594F4u, 1);  /* 0C0594F2 mov.l Rm,@(r0,Rn) */
	r1 = R32(r7); UPD(0x0C0594F6u, 1);  /* 0C0594F4 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0594F6 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C059500u, 4); goto L_0C059500; } goto L_0C0594FC; }  /* 0C0594F8 bt/s */
L_0C0594FC: BLKS(0x0C0594FCu);
	r7 = 0xC21F7F0u; UPD(0x0C0594FEu, 2);  /* 0C0594FC mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C059500u, 1);  /* 0C0594FE mov.b @Rm,Rn */
L_0C059500: BLKS(0x0C059500u);
	W8(r3, r1); UPD(0x0C059502u, 1);  /* 0C059500 mov.b Rm,@Rn */
L_0C059502: BLKS(0x0C059502u);
	r3 = 0x280u; UPD(0x0C059504u, 1);  /* 0C059502 mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C059504 add #imm,Rn */
	r2 = 0x1u;  /* 0C059506 mov #imm,Rn */
	r5 += 0x1Cu;  /* 0C059508 add #imm,Rn */
	T = (s32)r4 > (s32)r2;  /* 0C05950A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += r3; /* slot add Rm,Rn */ if (c_) { UPD(0x0C05948Cu, 7); goto L_0C05948C; } goto L_0C059510; }  /* 0C05950C bf/s */
L_0C059510: BLKS(0x0C059510u);
	r4 = 0x16Cu; UPD(0x0C059512u, 2);  /* 0C059510 mov.w @(disp,pc),Rn */
	IF(0x0C059512u); MACL = r8 * r4;  /* 0C059512 mul.l Rm,Rn */
	r7 = 0xC2859A8u; UPD(0x0C059516u, 3);  /* 0C059514 mov.l @(disp,pc),Rn */
	IF(0x0C059516u); r9 = MACL;  /* 0C059516 sts macl,Rn */
	r5 = 0x150u; UPD(0x0C05951Au, 2);  /* 0C059518 mov.w @(disp,pc),Rn */
	r7 += r9;  /* 0C05951A add Rm,Rn */
	r7 += r5;  /* 0C05951C add Rm,Rn */
	IF(0x0C05951Eu); ;  /* 0C05951E nop */
	UPD(0x0C059520u, 3);
L_0C059520: BLKS(0x0C059520u);
	r2 = 0xC2859A8u; UPD(0x0C059522u, 1);  /* 0C059520 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C059522 mov #imm,Rn */
	r6 = 0x0u;  /* 0C059524 mov #imm,Rn */
	r2 += r9;  /* 0C059526 add Rm,Rn */
	UPD(0x0C059528u, 3);
L_0C059528: BLKS(0x0C059528u);
	IF(0x0C059528u); MACL = r8 * r4;  /* 0C059528 mul.l Rm,Rn */
	r3 = R32(r2); UPD(0x0C05952Cu, 3);  /* 0C05952A mov.l @Rm,Rn */
	r10 = R32(r2 + 0x1Cu); UPD(0x0C05952Eu, 1);  /* 0C05952C mov.l @(disp,Rm),Rn */
	T = r3 >= r10;  /* 0C05952E cmp/hs Rm,Rn */
	{ u32 c_ = T; IF(0x0C059532u); r0 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C059588u, 4); goto L_0C059588; } goto L_0C059534; }  /* 0C059530 bt/s */
L_0C059534: BLKS(0x0C059534u);
	W32(r7, r3); UPD(0x0C059536u, 2);  /* 0C059534 mov.l Rm,@Rn */
	r5 += 0x1u;  /* 0C059536 add #imm,Rn */
	r10 = R32(r2 + 0x4u); UPD(0x0C05953Au, 2);  /* 0C059538 mov.l @(disp,Rm),Rn */
	W32(r7 + 0x4u, r10); UPD(0x0C05953Cu, 1);  /* 0C05953A mov.l Rm,@(disp,Rn) */
	r3 = R32(r2 + 0x8u); UPD(0x0C05953Eu, 1);  /* 0C05953C mov.l @(disp,Rm),Rn */
	W32(r7 + 0x8u, r3); UPD(0x0C059540u, 1);  /* 0C05953E mov.l Rm,@(disp,Rn) */
	r12 = R32(r2 + 0xCu); UPD(0x0C059542u, 1);  /* 0C059540 mov.l @(disp,Rm),Rn */
	W32(r7 + 0xCu, r12); UPD(0x0C059544u, 1);  /* 0C059542 mov.l Rm,@(disp,Rn) */
	r13 = R32(r2 + 0x10u); UPD(0x0C059546u, 1);  /* 0C059544 mov.l @(disp,Rm),Rn */
	W32(r7 + 0x10u, r13); UPD(0x0C059548u, 1);  /* 0C059546 mov.l Rm,@(disp,Rn) */
	r11 = R32(r2 + 0x14u); UPD(0x0C05954Au, 1);  /* 0C059548 mov.l @(disp,Rm),Rn */
	W32(r7 + 0x14u, r11); UPD(0x0C05954Cu, 1);  /* 0C05954A mov.l Rm,@(disp,Rn) */
	r10 = R32(r2 + 0x18u); UPD(0x0C05954Eu, 1);  /* 0C05954C mov.l @(disp,Rm),Rn */
	W32(r7 + 0x18u, r10); UPD(0x0C059550u, 1);  /* 0C05954E mov.l Rm,@(disp,Rn) */
	r3 = R32(r2 + 0x1Cu); UPD(0x0C059552u, 1);  /* 0C059550 mov.l @(disp,Rm),Rn */
	r12 = R32(r2 + 0x20u); UPD(0x0C059554u, 1);  /* 0C059552 mov.l @(disp,Rm),Rn */
	W32(r2, r3); UPD(0x0C059556u, 1);  /* 0C059554 mov.l Rm,@Rn */
	W32(r2 + 0x4u, r12); UPD(0x0C059558u, 1);  /* 0C059556 mov.l Rm,@(disp,Rn) */
	r13 = R32(r2 + 0x24u); UPD(0x0C05955Au, 1);  /* 0C059558 mov.l @(disp,Rm),Rn */
	r11 = R32(r2 + 0x28u); UPD(0x0C05955Cu, 1);  /* 0C05955A mov.l @(disp,Rm),Rn */
	r10 = R32(r2 + 0x2Cu); UPD(0x0C05955Eu, 1);  /* 0C05955C mov.l @(disp,Rm),Rn */
	r3 = R32(r2 + 0x30u); UPD(0x0C059560u, 1);  /* 0C05955E mov.l @(disp,Rm),Rn */
	r12 = R32(r2 + 0x34u); UPD(0x0C059562u, 1);  /* 0C059560 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x8u, r13); UPD(0x0C059564u, 1);  /* 0C059562 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x18u, r12); UPD(0x0C059566u, 1);  /* 0C059564 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0xCu, r11); UPD(0x0C059568u, 1);  /* 0C059566 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x10u, r10); UPD(0x0C05956Au, 1);  /* 0C059568 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x14u, r3); UPD(0x0C05956Cu, 1);  /* 0C05956A mov.l Rm,@(disp,Rn) */
	r13 = R32(r7); UPD(0x0C05956Eu, 1);  /* 0C05956C mov.l @Rm,Rn */
	W32(r2 + 0x1Cu, r13); UPD(0x0C059570u, 1);  /* 0C05956E mov.l Rm,@(disp,Rn) */
	r11 = R32(r7 + 0x4u); UPD(0x0C059572u, 1);  /* 0C059570 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x20u, r11); UPD(0x0C059574u, 1);  /* 0C059572 mov.l Rm,@(disp,Rn) */
	r10 = R32(r7 + 0x8u); UPD(0x0C059576u, 1);  /* 0C059574 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x24u, r10); UPD(0x0C059578u, 1);  /* 0C059576 mov.l Rm,@(disp,Rn) */
	r3 = R32(r7 + 0xCu); UPD(0x0C05957Au, 1);  /* 0C059578 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x28u, r3); UPD(0x0C05957Cu, 1);  /* 0C05957A mov.l Rm,@(disp,Rn) */
	r12 = R32(r7 + 0x10u); UPD(0x0C05957Eu, 1);  /* 0C05957C mov.l @(disp,Rm),Rn */
	W32(r2 + 0x2Cu, r12); UPD(0x0C059580u, 1);  /* 0C05957E mov.l Rm,@(disp,Rn) */
	r13 = R32(r7 + 0x14u); UPD(0x0C059582u, 1);  /* 0C059580 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x30u, r13); UPD(0x0C059584u, 1);  /* 0C059582 mov.l Rm,@(disp,Rn) */
	r11 = R32(r7 + 0x18u); UPD(0x0C059586u, 1);  /* 0C059584 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x34u, r11); UPD(0x0C059588u, 1);  /* 0C059586 mov.l Rm,@(disp,Rn) */
L_0C059588: BLKS(0x0C059588u);
	r6 += 0x1u;  /* 0C059588 add #imm,Rn */
	r11 = 0xAu;  /* 0C05958A mov #imm,Rn */
	T = (s32)r6 > (s32)r11;  /* 0C05958C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x1Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C059528u, 6); goto L_0C059528; } goto L_0C059592; }  /* 0C05958E bf/s */
L_0C059592: BLKS(0x0C059592u);
	T = (r5 & r5) == 0;  /* 0C059592 tst Rm,Rn */
	if (!T) { UPD(0x0C059520u, 5); goto L_0C059520; }  /* 0C059594 bf */
L_0C059596: BLKS(0x0C059596u);
	r9 = r0;  /* 0C059596 mov Rm,Rn */
	r5 = 0xC2859A8u; UPD(0x0C05959Au, 2);  /* 0C059598 mov.l @(disp,pc),Rn */
	r12 = 0x80808020u; UPD(0x0C05959Cu, 1);  /* 0C05959A mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C05959C mov #imm,Rn */
	r11 = 0x0u;  /* 0C05959E mov #imm,Rn */
	r9 += r5;  /* 0C0595A0 add Rm,Rn */
	IF(0x0C0595A2u); ;  /* 0C0595A2 nop */
	UPD(0x0C0595A4u, 4);
L_0C0595A4: BLKS(0x0C0595A4u);
	r6 = 0x130u; UPD(0x0C0595A6u, 1);  /* 0C0595A4 mov.w @(disp,pc),Rn */
	r0 = 0xFFFFFFFFu;  /* 0C0595A6 mov #imm,Rn */
	r6 += r9;  /* 0C0595A8 add Rm,Rn */
	r6 += 0x2u;  /* 0C0595AA add #imm,Rn */
	W8(r6, r0); UPD(0x0C0595AEu, 4);  /* 0C0595AC mov.b Rm,@Rn */
	r1 = 0x3u;  /* 0C0595AE mov #imm,Rn */
	r6 += 0x1u;  /* 0C0595B0 add #imm,Rn */
	W8(r6, r1); UPD(0x0C0595B4u, 3);  /* 0C0595B2 mov.b Rm,@Rn */
	r10 = r11;  /* 0C0595B4 mov Rm,Rn */
	r6 = 0x0u;  /* 0C0595B6 mov #imm,Rn */
	r7 = 0x0u;  /* 0C0595B8 mov #imm,Rn */
	IF(0x0C0595BAu); ;  /* 0C0595BA nop */
	UPD(0x0C0595BCu, 4);
L_0C0595BC: BLKS(0x0C0595BCu);
	r3 = 0x16Cu; UPD(0x0C0595BEu, 1);  /* 0C0595BC mov.w @(disp,pc),Rn */
	IF(0x0C0595BEu); MACL = r8 * r3;  /* 0C0595BE mul.l Rm,Rn */
	IF(0x0C0595C0u); r0 = MACL;  /* 0C0595C0 sts macl,Rn */
	r0 += r7;  /* 0C0595C2 add Rm,Rn */
	r0 += r5;  /* 0C0595C4 add Rm,Rn */
	r0 += 0x1Au;  /* 0C0595C6 add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r0); UPD(0x0C0595CAu, 7);  /* 0C0595C8 mov.b @Rm,Rn */
	r2 = r13 & 0xFF;  /* 0C0595CA extu.b Rm,Rn */
	T = r2 == r4;  /* 0C0595CC cmp/eq Rm,Rn */
	{ u32 c_ = T; IF(0x0C0595D0u); r3 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C059660u, 5); goto L_0C059660; } UPD(0x0C0595D2u, 1); goto L_0C0595D2; }  /* 0C0595CE bt/s */
L_0C0595D2: BLKS(0x0C0595D2u);
	r6 += 0x1u;  /* 0C0595D2 add #imm,Rn */
	r2 = 0x9u;  /* 0C0595D4 mov #imm,Rn */
	T = (s32)r6 > (s32)r2;  /* 0C0595D6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x1Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0595BCu, 6); goto L_0C0595BC; } goto L_0C0595DC; }  /* 0C0595D8 bf/s */
L_0C0595DC: BLKS(0x0C0595DCu);
	r4 += 0x1u;  /* 0C0595DC add #imm,Rn */
	r7 = 0x1u;  /* 0C0595DE mov #imm,Rn */
	r11 += 0x1Cu;  /* 0C0595E0 add #imm,Rn */
	T = (s32)r4 > (s32)r7;  /* 0C0595E2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x1Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0595A4u, 8); goto L_0C0595A4; } goto L_0C0595E8; }  /* 0C0595E4 bf/s */
L_0C0595E8: BLKS(0x0C0595E8u);
	r0 = 0xC2859A8u; UPD(0x0C0595EAu, 2);  /* 0C0595E8 mov.l @(disp,pc),Rn */
	r10 = 0x133u; UPD(0x0C0595ECu, 1);  /* 0C0595EA mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C0595EC add Rm,Rn */
	IF(0x0C0595EEu); r12 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0595F0u, 2);  /* 0C0595EE mov.b @(r0,Rm),Rn */
	r5 = 0x14Fu; UPD(0x0C0595F2u, 1);  /* 0C0595F0 mov.w @(disp,pc),Rn */
	T = (r12 & r12) == 0;  /* 0C0595F2 tst Rm,Rn */
	IF(0x0C0595F4u); r9 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0595F6u, 2);  /* 0C0595F4 mov.b @(r0,Rm),Rn */
	IF(0x0C0595F6u); r4 = T;  /* 0C0595F6 movt Rn */
	T = (r9 & r9) == 0;  /* 0C0595F8 tst Rm,Rn */
	IF(0x0C0595FAu); r8 = T;  /* 0C0595FA movt Rn */
	r4 |= r8;  /* 0C0595FC or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0595FE tst Rm,Rn */
	if (T) { UPD(0x0C059608u, 8); goto L_0C059608; }  /* 0C059600 bt */
L_0C059602: BLKS(0x0C059602u);
	r6 = 0x708u; UPD(0x0C059604u, 1);  /* 0C059602 mov.w @(disp,pc),Rn */
	r11 = 0xC392E0Cu; UPD(0x0C059606u, 1);  /* 0C059604 mov.l @(disp,pc),Rn */
	W32(r11, r6); UPD(0x0C059608u, 1);  /* 0C059606 mov.l Rm,@Rn */
L_0C059608: BLKS(0x0C059608u);
	r14 += 0x4u;  /* 0C059608 add #imm,Rn */
	r15 = r14;  /* 0C05960A mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05960Eu, 3);  /* 0C05960C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C059610u, 1);  /* 0C05960E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C059612u, 1);  /* 0C059610 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C059614u, 1);  /* 0C059612 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C059616u, 1);  /* 0C059614 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C059618u, 1);  /* 0C059616 mov.l @Rm+,Rn */
	IF(0x0C059618u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C059618 rts */
L_0C059660: BLKS(0x0C059660u);
	IF(0x0C059660u); r0 = MACL;  /* 0C059660 sts macl,Rn */
	r0 += r10;  /* 0C059662 add Rm,Rn */
	r2 = 0x130u; UPD(0x0C059666u, 3);  /* 0C059664 mov.w @(disp,pc),Rn */
	r0 += r5;  /* 0C059666 add Rm,Rn */
	W32(r14, r0); UPD(0x0C05966Au, 2);  /* 0C059668 mov.l Rm,@Rn */
	r2 += r0;  /* 0C05966A add Rm,Rn */
	r2 += 0x2u;  /* 0C05966C add #imm,Rn */
	W8(r2, r6); UPD(0x0C059670u, 3);  /* 0C05966E mov.b Rm,@Rn */
	r1 = 0x80808041u; UPD(0x0C059672u, 1);  /* 0C059670 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C059672 add #imm,Rn */
	r0 = R32(r14); UPD(0x0C059676u, 2);  /* 0C059674 mov.l @Rm,Rn */
	r13 = 0x120u; UPD(0x0C059678u, 1);  /* 0C059676 mov.w @(disp,pc),Rn */
	IF(0x0C059678u); W32(r0 + r13, r1); UPD(0x0C05967Au, 1);  /* 0C059678 mov.l Rm,@(r0,Rn) */
	r1 = 0x124u; UPD(0x0C05967Cu, 1);  /* 0C05967A mov.w @(disp,pc),Rn */
	r13 += 0x8u;  /* 0C05967C add #imm,Rn */
	IF(0x0C05967Eu); W32(r0 + r1, r12); UPD(0x0C059680u, 2);  /* 0C05967E mov.l Rm,@(r0,Rn) */
	IF(0x0C059680u); W32(r0 + r13, r12); UPD(0x0C059682u, 1);  /* 0C059680 mov.l Rm,@(r0,Rn) */
	r13 = 0x0u;  /* 0C059682 mov #imm,Rn */
	{ W8(r2, r13); /* slot mov.b Rm,@Rn */ UPD(0x0C0595D2u, 4); goto L_0C0595D2; }  /* 0C059684 bra */
L_0C059690: BLKS(0x0C059690u);
	r12 = 0x16Cu; UPD(0x0C059692u, 1);  /* 0C059690 mov.w @(disp,pc),Rn */
	IF(0x0C059692u); MACL = r8 * r12;  /* 0C059692 mul.l Rm,Rn */
	IF(0x0C059694u); r0 = MACL;  /* 0C059694 sts macl,Rn */
	r0 += r5;  /* 0C059696 add Rm,Rn */
	r0 += r9;  /* 0C059698 add Rm,Rn */
	r12 += 0xFFFFFFACu;  /* 0C05969A add #imm,Rn */
	{ IF(0x0C05969Eu); W32(r0 + r12, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C059502u, 9); goto L_0C059502; }  /* 0C05969C bra */
}

/* FUN_0c0596b0 */
void f_0C0596B0(sh3_t *c)
{
	LOCALS;
L_0C0596B0: BLKS(0x0C0596B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0596B2u, 1);  /* 0C0596B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0596B4u, 1);  /* 0C0596B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0596B6u, 1);  /* 0C0596B4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0596B8u, 1);  /* 0C0596B6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0596BAu, 1);  /* 0C0596B8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r4;  /* 0C0596BA exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0596BEu, 2);  /* 0C0596BC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0596C0u, 1);  /* 0C0596BE mov.l Rm,@-Rn */
	IF(0x0C0596C0u); r15 -= 4; W32(r15, PR); UPD(0x0C0596C2u, 1);  /* 0C0596C0 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF4u;  /* 0C0596C2 add #imm,Rn */
	r14 = r15;  /* 0C0596C4 mov Rm,Rn */
	W32(r14, r11); UPD(0x0C0596C8u, 3);  /* 0C0596C6 mov.l Rm,@Rn */
	r4 = 0xC21F5EAu; UPD(0x0C0596CAu, 1);  /* 0C0596C8 mov.l @(disp,pc),Rn */
	r2 = 0xC7C4234u; UPD(0x0C0596CCu, 1);  /* 0C0596CA mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r4); UPD(0x0C0596CEu, 1);  /* 0C0596CC mov.b @Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C0596D0u, 1);  /* 0C0596CE mov.b @Rm,Rn */
	r0 = 0xC2839E0u; UPD(0x0C0596D2u, 1);  /* 0C0596D0 mov.l @(disp,pc),Rn */
	W8(r0, r1); UPD(0x0C0596D4u, 1);  /* 0C0596D2 mov.b Rm,@Rn */
	r6 = 0x80u; UPD(0x0C0596D6u, 1);  /* 0C0596D4 mov.w @(disp,pc),Rn */
	r0 = r4;  /* 0C0596D6 mov Rm,Rn */
	IF(0x0C0596D8u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0596DAu, 2);  /* 0C0596D8 mov.b @(r0,Rm),Rn */
	r13 = 0xC2839E1u; UPD(0x0C0596DCu, 1);  /* 0C0596DA mov.l @(disp,pc),Rn */
	r4 = 0x100u; UPD(0x0C0596DEu, 1);  /* 0C0596DC mov.w @(disp,pc),Rn */
	W8(r13, r3); UPD(0x0C0596E0u, 1);  /* 0C0596DE mov.b Rm,@Rn */
	r10 = 0xC2839E2u; UPD(0x0C0596E2u, 1);  /* 0C0596E0 mov.l @(disp,pc),Rn */
	IF(0x0C0596E2u); r12 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0596E4u, 1);  /* 0C0596E2 mov.b @(r0,Rm),Rn */
	r7 = 0xC2177F8u; UPD(0x0C0596E6u, 1);  /* 0C0596E4 mov.l @(disp,pc),Rn */
	W8(r10, r12); UPD(0x0C0596E8u, 1);  /* 0C0596E6 mov.b Rm,@Rn */
	r0 = r7;  /* 0C0596E8 mov Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r7); UPD(0x0C0596ECu, 2);  /* 0C0596EA mov.b @Rm,Rn */
	r8 = 0xC283C60u; UPD(0x0C0596EEu, 1);  /* 0C0596EC mov.l @(disp,pc),Rn */
	W8(r8, r9); UPD(0x0C0596F0u, 1);  /* 0C0596EE mov.b Rm,@Rn */
	r2 = 0xC283C61u; UPD(0x0C0596F2u, 1);  /* 0C0596F0 mov.l @(disp,pc),Rn */
	IF(0x0C0596F2u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0596F4u, 1);  /* 0C0596F2 mov.b @(r0,Rm),Rn */
	W8(r2, r5); UPD(0x0C0596F6u, 1);  /* 0C0596F4 mov.b Rm,@Rn */
	r3 = 0xC283C62u; UPD(0x0C0596F8u, 1);  /* 0C0596F6 mov.l @(disp,pc),Rn */
	IF(0x0C0596F8u); r1 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0596FAu, 1);  /* 0C0596F8 mov.b @(r0,Rm),Rn */
	W8(r3, r1); UPD(0x0C0596FCu, 1);  /* 0C0596FA mov.b Rm,@Rn */
	r0 = 0x0u;  /* 0C0596FC mov #imm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C059700u, 2);  /* 0C0596FE mov.l Rm,@(disp,Rn) */
	r13 = 0x118u; UPD(0x0C059702u, 1);  /* 0C059700 mov.w @(disp,pc),Rn */
	r0 = 0x46u;  /* 0C059702 mov #imm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C059706u, 2);  /* 0C059704 mov.l Rm,@(disp,Rn) */
	IF(0x0C059706u); ;  /* 0C059706 nop */
	UPD(0x0C059708u, 1);
L_0C059708: BLKS(0x0C059708u);
	r5 = 0x16Cu; UPD(0x0C05970Au, 1);  /* 0C059708 mov.w @(disp,pc),Rn */
	IF(0x0C05970Au); MACL = r11 * r5;  /* 0C05970A mul.l Rm,Rn */
	r3 = 0xC2859A8u; UPD(0x0C05970Eu, 3);  /* 0C05970C mov.l @(disp,pc),Rn */
	IF(0x0C05970Eu); r1 = MACL;  /* 0C05970E sts macl,Rn */
	r1 += r13;  /* 0C059710 add Rm,Rn */
	r1 += r3;  /* 0C059712 add Rm,Rn */
	r1 += 0x1Au;  /* 0C059714 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C059718u, 5);  /* 0C059716 mov.b @Rm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C059718 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r1 += 0xFFFFFFE6u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C059722u, 4); goto L_0C059722; } goto L_0C05971E; }  /* 0C05971A bf/s */
L_0C05971E: BLKS(0x0C05971Eu);
	{ r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0598B2u, 4); goto L_0C0598B2; }  /* 0C05971E bra */
L_0C059722: BLKS(0x0C059722u);
	r1 += 0x1Bu;  /* 0C059722 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r1); UPD(0x0C059726u, 2);  /* 0C059724 mov.b @Rm,Rn */
	r6 = 0x2u;  /* 0C059726 mov #imm,Rn */
	r7 = r8 & 0xFF;  /* 0C059728 extu.b Rm,Rn */
	T = r7 > r6;  /* 0C05972A cmp/hi Rm,Rn */
	{ u32 c_ = !T; r1 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C059734u, 6); goto L_0C059734; } UPD(0x0C059730u, 1); goto L_0C059730; }  /* 0C05972C bf/s */
L_0C059730: BLKS(0x0C059730u);
	{ r0 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C059850u, 3); goto L_0C059850; }  /* 0C059730 bra */
L_0C059734: BLKS(0x0C059734u);
	r4 = 0x280u; UPD(0x0C059736u, 1);  /* 0C059734 mov.w @(disp,pc),Rn */
	IF(0x0C059736u); MACL = r1 * r4;  /* 0C059736 mul.l Rm,Rn */
	r10 = 0xC283794u; UPD(0x0C05973Au, 3);  /* 0C059738 mov.l @(disp,pc),Rn */
	IF(0x0C05973Au); r12 = MACL;  /* 0C05973A sts macl,Rn */
	r0 = 0x24Eu; UPD(0x0C05973Eu, 2);  /* 0C05973C mov.w @(disp,pc),Rn */
	r10 += r12;  /* 0C05973E add Rm,Rn */
	IF(0x0C059740u); r0 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C059742u, 2);  /* 0C059740 mov.b @(r0,Rm),Rn */
	r0 &= 0x2u;  /* 0C059742 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C059744 tst Rm,Rn */
	{ u32 c_ = T; r2 = 0x5Bu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C059768u, 5); goto L_0C059768; } goto L_0C05974A; }  /* 0C059746 bt/s */
L_0C05974A: BLKS(0x0C05974Au);
	IF(0x0C05974Au); MACL = r11 * r2;  /* 0C05974A mul.l Rm,Rn */
	r0 = R32(r14 + 0x8u); UPD(0x0C05974Eu, 4);  /* 0C05974C mov.l @(disp,Rm),Rn */
	IF(0x0C05974Eu); r2 = MACL;  /* 0C05974E sts macl,Rn */
	r2 += r0;  /* 0C059750 add Rm,Rn */
	r2 += r7;  /* 0C059752 add Rm,Rn */
	IF(0x0C059754u); r2 <<= 2;  /* 0C059754 shll2 Rn */
	r2 += r3;  /* 0C059756 add Rm,Rn */
	r3 = R32(r2 + 0x8u); UPD(0x0C05975Au, 6);  /* 0C059758 mov.l @(disp,Rm),Rn */
	r3 += 0x1u;  /* 0C05975A add #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C05975C extu.b Rm,Rn */
	T = r0 == 0x7Bu;  /* 0C05975E cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r2 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C059768u, 6); goto L_0C059768; } UPD(0x0C059764u, 1); goto L_0C059764; }  /* 0C059760 bf/s */
L_0C059764: BLKS(0x0C059764u);
	{ IF(0x0C059766u); ; /* slot nop */ UPD(0x0C0599D0u, 3); goto L_0C0599D0; }  /* 0C059764 bra */
L_0C059768: BLKS(0x0C059768u);
	r6 = 0x280u; UPD(0x0C05976Au, 1);  /* 0C059768 mov.w @(disp,pc),Rn */
	r8 = R32(r14 + 0x4u); UPD(0x0C05976Cu, 1);  /* 0C05976A mov.l @(disp,Rm),Rn */
	IF(0x0C05976Cu); MACL = r8 * r6;  /* 0C05976C mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C059770u, 3);  /* 0C05976E mov.l @(disp,pc),Rn */
	IF(0x0C059770u); r3 = MACL;  /* 0C059770 sts macl,Rn */
	r0 = 0x24Eu; UPD(0x0C059774u, 2);  /* 0C059772 mov.w @(disp,pc),Rn */
	r5 += r3;  /* 0C059774 add Rm,Rn */
	IF(0x0C059776u); r0 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C059778u, 2);  /* 0C059776 mov.b @(r0,Rm),Rn */
	r0 &= 0x1u;  /* 0C059778 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05977A tst Rm,Rn */
	{ u32 c_ = T; r12 = 0x5Bu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0597A0u, 5); goto L_0C0597A0; } goto L_0C059780; }  /* 0C05977C bt/s */
L_0C059780: BLKS(0x0C059780u);
	IF(0x0C059780u); MACL = r11 * r12;  /* 0C059780 mul.l Rm,Rn */
	r10 = R32(r14 + 0x8u); UPD(0x0C059784u, 4);  /* 0C059782 mov.l @(disp,Rm),Rn */
	IF(0x0C059784u); r2 = MACL;  /* 0C059784 sts macl,Rn */
	r2 += r10;  /* 0C059786 add Rm,Rn */
	r2 += r7;  /* 0C059788 add Rm,Rn */
	r7 = 0xC2859A8u; UPD(0x0C05978Cu, 4);  /* 0C05978A mov.l @(disp,pc),Rn */
	IF(0x0C05978Cu); r2 <<= 2;  /* 0C05978C shll2 Rn */
	r2 += r7;  /* 0C05978E add Rm,Rn */
	r3 = R32(r2 + 0x8u); UPD(0x0C059792u, 3);  /* 0C059790 mov.l @(disp,Rm),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C059792 add #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C059794 extu.b Rm,Rn */
	T = r0 == 0x1Fu;  /* 0C059796 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r2 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0597A0u, 6); goto L_0C0597A0; } UPD(0x0C05979Cu, 1); goto L_0C05979C; }  /* 0C059798 bf/s */
L_0C05979C: BLKS(0x0C05979Cu);
	{ IF(0x0C05979Eu); ; /* slot nop */ UPD(0x0C0599C0u, 3); goto L_0C0599C0; }  /* 0C05979C bra */
L_0C0597A0: BLKS(0x0C0597A0u);
	r2 = 0x280u; UPD(0x0C0597A2u, 1);  /* 0C0597A0 mov.w @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0597A4u, 1);  /* 0C0597A2 mov.l @(disp,Rm),Rn */
	IF(0x0C0597A4u); MACL = r1 * r2;  /* 0C0597A4 mul.l Rm,Rn */
	r9 = 0xC283794u; UPD(0x0C0597A8u, 3);  /* 0C0597A6 mov.l @(disp,pc),Rn */
	IF(0x0C0597A8u); r0 = MACL;  /* 0C0597A8 sts macl,Rn */
	r9 += r0;  /* 0C0597AA add Rm,Rn */
	r0 = 0x24Du; UPD(0x0C0597AEu, 3);  /* 0C0597AC mov.w @(disp,pc),Rn */
	IF(0x0C0597AEu); r0 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0597B0u, 1);  /* 0C0597AE mov.b @(r0,Rm),Rn */
	r0 &= 0x10u;  /* 0C0597B0 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0597B2 tst Rm,Rn */
	{ u32 c_ = T; r3 = 0x5Bu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0597EEu, 5); goto L_0C0597EE; } goto L_0C0597B8; }  /* 0C0597B4 bt/s */
L_0C0597B8: BLKS(0x0C0597B8u);
	r6 = 0x16Cu; UPD(0x0C0597BAu, 2);  /* 0C0597B8 mov.w @(disp,pc),Rn */
	IF(0x0C0597BAu); MACL = r11 * r6;  /* 0C0597BA mul.l Rm,Rn */
	r8 = 0xC2859A8u; UPD(0x0C0597BEu, 3);  /* 0C0597BC mov.l @(disp,pc),Rn */
	IF(0x0C0597BEu); r7 = MACL;  /* 0C0597BE sts macl,Rn */
	r7 += r13;  /* 0C0597C0 add Rm,Rn */
	r7 += r8;  /* 0C0597C2 add Rm,Rn */
	IF(0x0C0597C4u); MACL = r11 * r3;  /* 0C0597C4 mul.l Rm,Rn */
	r7 += 0x1Bu;  /* 0C0597C6 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0597CAu, 7);  /* 0C0597C8 mov.b @Rm,Rn */
	IF(0x0C0597CAu); r3 = MACL;  /* 0C0597CA sts macl,Rn */
	r12 = R32(r14 + 0x8u); UPD(0x0C0597CEu, 2);  /* 0C0597CC mov.l @(disp,Rm),Rn */
	r10 = r6 & 0xFF;  /* 0C0597CE extu.b Rm,Rn */
	r3 += r12;  /* 0C0597D0 add Rm,Rn */
	r3 += r10;  /* 0C0597D2 add Rm,Rn */
	IF(0x0C0597D4u); r3 <<= 2;  /* 0C0597D4 shll2 Rn */
	r3 += r8;  /* 0C0597D6 add Rm,Rn */
	r0 = R32(r3 + 0xCu); UPD(0x0C0597DAu, 6);  /* 0C0597D8 mov.l @(disp,Rm),Rn */
	r5 = 0x3FFu; UPD(0x0C0597DCu, 1);  /* 0C0597DA mov.w @(disp,pc),Rn */
	r0 &= r5;  /* 0C0597DC and Rm,Rn */
	T = r0 == 0x20u;  /* 0C0597DE cmp/eq #imm,r0 */
	{ u32 c_ = !T; r9 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0597EAu, 5); goto L_0C0597EA; } goto L_0C0597E4; }  /* 0C0597E0 bf/s */
L_0C0597E4: BLKS(0x0C0597E4u);
	{ r4 = R32(r3 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0599B0u, 4); goto L_0C0599B0; }  /* 0C0597E4 bra */
L_0C0597E8: BLKS(0x0C0597E8u);
	r9 = r6;  /* 0C0597E8 mov Rm,Rn */
	UPD(0x0C0597EAu, 1);
L_0C0597EA: BLKS(0x0C0597EAu);
	r9 += 0x1u;  /* 0C0597EA add #imm,Rn */
	W8(r7, r9); UPD(0x0C0597EEu, 2);  /* 0C0597EC mov.b Rm,@Rn */
L_0C0597EE: BLKS(0x0C0597EEu);
	r2 = 0x280u; UPD(0x0C0597F0u, 1);  /* 0C0597EE mov.w @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0597F2u, 1);  /* 0C0597F0 mov.l @(disp,Rm),Rn */
	IF(0x0C0597F2u); MACL = r1 * r2;  /* 0C0597F2 mul.l Rm,Rn */
	r7 = 0xC283794u; UPD(0x0C0597F6u, 3);  /* 0C0597F4 mov.l @(disp,pc),Rn */
	IF(0x0C0597F6u); r0 = MACL;  /* 0C0597F6 sts macl,Rn */
	r7 += r0;  /* 0C0597F8 add Rm,Rn */
	r0 = 0x24Du; UPD(0x0C0597FCu, 3);  /* 0C0597FA mov.w @(disp,pc),Rn */
	IF(0x0C0597FCu); r0 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0597FEu, 1);  /* 0C0597FC mov.b @(r0,Rm),Rn */
	r0 &= 0x20u;  /* 0C0597FE and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C059800 tst Rm,Rn */
	{ u32 c_ = T; r2 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C05981Eu, 5); goto L_0C05981E; } UPD(0x0C059806u, 1); goto L_0C059806; }  /* 0C059802 bt/s */
L_0C059806: BLKS(0x0C059806u);
	r8 = 0x16Cu; UPD(0x0C059808u, 1);  /* 0C059806 mov.w @(disp,pc),Rn */
	IF(0x0C059808u); MACL = r11 * r8;  /* 0C059808 mul.l Rm,Rn */
	r5 = 0xC2859C3u; UPD(0x0C05980Cu, 3);  /* 0C05980A mov.l @(disp,pc),Rn */
	IF(0x0C05980Cu); r2 = MACL;  /* 0C05980C sts macl,Rn */
	r2 += r13;  /* 0C05980E add Rm,Rn */
	r2 += r5;  /* 0C059810 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C059814u, 4);  /* 0C059812 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C059814 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05981Cu, 4); goto L_0C05981C; } goto L_0C05981A; }  /* 0C059816 bt/s */
L_0C05981A: BLKS(0x0C05981Au);
	W8(r2, r1); UPD(0x0C05981Cu, 2);  /* 0C05981A mov.b Rm,@Rn */
L_0C05981C: BLKS(0x0C05981Cu);
	r2 = R32(r14 + 0x4u); UPD(0x0C05981Eu, 1);  /* 0C05981C mov.l @(disp,Rm),Rn */
L_0C05981E: BLKS(0x0C05981Eu);
	r3 = 0xFFFFFF80u;  /* 0C05981E mov #imm,Rn */
	r7 = 0x280u; UPD(0x0C059822u, 2);  /* 0C059820 mov.w @(disp,pc),Rn */
	IF(0x0C059822u); MACL = r2 * r7;  /* 0C059822 mul.l Rm,Rn */
	r4 = 0xC283794u; UPD(0x0C059826u, 3);  /* 0C059824 mov.l @(disp,pc),Rn */
	IF(0x0C059826u); r9 = MACL;  /* 0C059826 sts macl,Rn */
	r0 = 0x24Eu; UPD(0x0C05982Au, 2);  /* 0C059828 mov.w @(disp,pc),Rn */
	r4 += r9;  /* 0C05982A add Rm,Rn */
	r12 = 0xC392E0Cu; UPD(0x0C05982Eu, 2);  /* 0C05982C mov.l @(disp,pc),Rn */
	IF(0x0C05982Eu); r6 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C059830u, 1);  /* 0C05982E mov.b @(r0,Rm),Rn */
	r10 = R32(r12); UPD(0x0C059832u, 1);  /* 0C059830 mov.l @Rm,Rn */
	r3 &= r6;  /* 0C059832 and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C059834 tst Rm,Rn */
	{ u32 c_ = T; r2 = r3 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C059840u, 5); goto L_0C059840; } goto L_0C05983A; }  /* 0C059836 bt/s */
L_0C05983A: BLKS(0x0C05983Au);
	T = (r2 & r2) == 0;  /* 0C05983A tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C059850u, 5); goto L_0C059850; } UPD(0x0C059840u, 1); goto L_0C059840; }  /* 0C05983C bt/s */
L_0C059840: BLKS(0x0C059840u);
	r0 = 0x16Cu; UPD(0x0C059842u, 1);  /* 0C059840 mov.w @(disp,pc),Rn */
	r8 = 0x3u;  /* 0C059842 mov #imm,Rn */
	IF(0x0C059844u); MACL = r11 * r0;  /* 0C059844 mul.l Rm,Rn */
	r5 = 0xC2859C3u; UPD(0x0C059848u, 4);  /* 0C059846 mov.l @(disp,pc),Rn */
	IF(0x0C059848u); r0 = MACL;  /* 0C059848 sts macl,Rn */
	r0 += r13;  /* 0C05984A add Rm,Rn */
	IF(0x0C05984Cu); W8(r0 + r5, r8); UPD(0x0C05984Eu, 3);  /* 0C05984C mov.b Rm,@(r0,Rn) */
	r0 = R32(r14 + 0x4u); UPD(0x0C059850u, 1);  /* 0C05984E mov.l @(disp,Rm),Rn */
L_0C059850: BLKS(0x0C059850u);
	r5 = 0x3u;  /* 0C059850 mov #imm,Rn */
	r4 = 0xC161778u; UPD(0x0C059854u, 2);  /* 0C059852 mov.l @(disp,pc),Rn */
	r3 = R32(r14 + 0x4u); UPD(0x0C059856u, 1);  /* 0C059854 mov.l @(disp,Rm),Rn */
	IF(0x0C059856u); r6 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C059858u, 1);  /* 0C059856 mov.b @(r0,Rm),Rn */
	IF(0x0C059858u); r3 <<= 2;  /* 0C059858 shll2 Rn */
	r12 = 0xC16177Cu; UPD(0x0C05985Cu, 2);  /* 0C05985A mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C05985C mov Rm,Rn */
	IF(0x0C05985Eu); r4 = R32(r0 + r12); UPD(0x0C059860u, 2);  /* 0C05985E mov.l @(r0,Rm),Rn */
	r10 = 0xC050AF0u; UPD(0x0C059862u, 1);  /* 0C059860 mov.l @(disp,pc),Rn */
	r12 = 0xC2859A8u; UPD(0x0C059864u, 1);  /* 0C059862 mov.l @(disp,pc),Rn */
	IF(0x0C059864u); { u32 t_ = r10; PR = 0x0C059868u; r9 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050AF0, 0x0C050AF0u, 0x0C059868u); }  /* 0C059864 jsr @Rn */
L_0C059868: BLKS(0x0C059868u);
	r10 = 0x16Cu; UPD(0x0C05986Au, 1);  /* 0C059868 mov.w @(disp,pc),Rn */
	r7 = 0xFFFFFFFFu;  /* 0C05986A mov #imm,Rn */
	r8 = 0xC286298u; UPD(0x0C05986Eu, 2);  /* 0C05986C mov.l @(disp,pc),Rn */
	IF(0x0C05986Eu); MACL = r11 * r10;  /* 0C05986E mul.l Rm,Rn */
	r0 = R32(r8); UPD(0x0C059872u, 3);  /* 0C059870 mov.l @Rm,Rn */
	IF(0x0C059872u); r8 = MACL;  /* 0C059872 sts macl,Rn */
	r8 += r13;  /* 0C059874 add Rm,Rn */
	r3 = r8;  /* 0C059876 mov Rm,Rn */
	r3 += r12;  /* 0C059878 add Rm,Rn */
	r3 += 0x1Bu;  /* 0C05987A add #imm,Rn */
	IF(0x0C05987Cu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C05987C shar Rn */
	r5 = (u32)(s32)(s8)R8(r3); UPD(0x0C059880u, 7);  /* 0C05987E mov.b @Rm,Rn */
	IF(0x0C059880u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C059880 shar Rn */
	IF(0x0C059882u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C059882 shar Rn */
	r2 = r5 & 0xFF;  /* 0C059884 extu.b Rm,Rn */
	T = r9 == r2;  /* 0C059886 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C059888 negc Rm,Rn */
	r0 &= 0x1u;  /* 0C05988A and #imm,r0 */
	r0 |= r6;  /* 0C05988C or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05988E tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x5Bu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C059898u, 11); goto L_0C059898; } goto L_0C059894; }  /* 0C059890 bt/s */
L_0C059894: BLKS(0x0C059894u);
	{ IF(0x0C059896u); MACL = r11 * r5; /* slot mul.l Rm,Rn */ UPD(0x0C059980u, 5); goto L_0C059980; }  /* 0C059894 bra */
L_0C059898: BLKS(0x0C059898u);
	r9 += 0x1u;  /* 0C059898 add #imm,Rn */
	UPD(0x0C05989Au, 1);
L_0C05989A: BLKS(0x0C05989Au);
	r3 = 0x2u;  /* 0C05989A mov #imm,Rn */
	T = (s32)r9 > (s32)r3;  /* 0C05989C cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0598A0u); MACL = r11 * r10; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C059868u, 6); goto L_0C059868; } goto L_0C0598A2; }  /* 0C05989E bf/s */
L_0C0598A2: BLKS(0x0C0598A2u);
	r12 = 0xC2859A8u; UPD(0x0C0598A4u, 3);  /* 0C0598A2 mov.l @(disp,pc),Rn */
	r8 += r12;  /* 0C0598A4 add Rm,Rn */
	r8 += 0x1Bu;  /* 0C0598A6 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C0598AAu, 3);  /* 0C0598A8 mov.b @Rm,Rn */
	T = r0 == 0x3u;  /* 0C0598AA cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C0598AEu); r9 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C059940u, 4); goto L_0C059940; } UPD(0x0C0598B0u, 1); goto L_0C0598B0; }  /* 0C0598AC bt/s */
L_0C0598B0: BLKS(0x0C0598B0u);
	r7 = R32(r14 + 0x4u); UPD(0x0C0598B2u, 1);  /* 0C0598B0 mov.l @(disp,Rm),Rn */
L_0C0598B2: BLKS(0x0C0598B2u);
	{ r10 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C059910u, 3); goto L_0C059910; }  /* 0C0598B2 bra */
L_0C059910: BLKS(0x0C059910u);
	r7 += 0x1u;  /* 0C059910 add #imm,Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C059912 exts.w Rm,Rn */
	r4 = R32(r14 + 0x8u); UPD(0x0C059916u, 3);  /* 0C059914 mov.l @(disp,Rm),Rn */
	r13 += 0x1Cu;  /* 0C059916 add #imm,Rn */
	W32(r14 + 0x4u, r8); UPD(0x0C05991Au, 2);  /* 0C059918 mov.l Rm,@(disp,Rn) */
	r4 += 0x7u;  /* 0C05991A add #imm,Rn */
	r12 = R32(r14 + 0x4u); UPD(0x0C05991Eu, 2);  /* 0C05991C mov.l @(disp,Rm),Rn */
	T = (s32)r12 > (s32)r10;  /* 0C05991E cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0x8u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C059928u, 4); goto L_0C059928; } UPD(0x0C059924u, 1); goto L_0C059924; }  /* 0C059920 bt/s */
L_0C059924: BLKS(0x0C059924u);
	{ IF(0x0C059926u); ; /* slot nop */ UPD(0x0C059708u, 3); goto L_0C059708; }  /* 0C059924 bra */
L_0C059928: BLKS(0x0C059928u);
	r0 = R32(r14); UPD(0x0C05992Au, 1);  /* 0C059928 mov.l @Rm,Rn */
	r14 += 0xCu;  /* 0C05992A add #imm,Rn */
	r15 = r14;  /* 0C05992C mov Rm,Rn */
	IF(0x0C05992Eu); PR = R32(r15); r15 += 4; UPD(0x0C059930u, 3);  /* 0C05992E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C059932u, 1);  /* 0C059930 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C059934u, 1);  /* 0C059932 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C059936u, 1);  /* 0C059934 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C059938u, 1);  /* 0C059936 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05993Au, 1);  /* 0C059938 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05993Cu, 1);  /* 0C05993A mov.l @Rm+,Rn */
	IF(0x0C05993Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05993C rts */
L_0C059940: BLKS(0x0C059940u);
	r0 = 0xC059A60u; UPD(0x0C059942u, 1);  /* 0C059940 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C059942 mov Rm,Rn */
	IF(0x0C059944u); { u32 t_ = r0; PR = 0x0C059948u; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C059A60, 0x0C059A60u, 0x0C059948u); }  /* 0C059944 jsr @Rn */
L_0C059948: BLKS(0x0C059948u);
	r7 = r9;  /* 0C059948 mov Rm,Rn */
	r7 += r12;  /* 0C05994A add Rm,Rn */
	r2 = 0x133u; UPD(0x0C05994Eu, 3);  /* 0C05994C mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C05994E mov Rm,Rn */
	IF(0x0C059950u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C059952u, 2);  /* 0C059950 mov.b @(r0,Rm),Rn */
	r0 = r4;  /* 0C059952 mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C059954 cmp/eq #imm,r0 */
	r8 = 0x14Fu; UPD(0x0C059958u, 3);  /* 0C059956 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C059958 mov Rm,Rn */
	IF(0x0C05995Au); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C05995Cu, 2);  /* 0C05995A mov.b @(r0,Rm),Rn */
	IF(0x0C05995Cu); r9 = T;  /* 0C05995C movt Rn */
	r0 = r12;  /* 0C05995E mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C059960 cmp/eq #imm,r0 */
	IF(0x0C059962u); r10 = T;  /* 0C059962 movt Rn */
	r9 &= r10;  /* 0C059964 and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C059966 tst Rm,Rn */
	if (T) { UPD(0x0C0598B0u, 9); goto L_0C0598B0; }  /* 0C059968 bt */
L_0C05996A: BLKS(0x0C05996Au);
	r3 = 0x1u;  /* 0C05996A mov #imm,Rn */
	r9 = 0xC392D54u; UPD(0x0C05996Eu, 2);  /* 0C05996C mov.l @(disp,pc),Rn */
	r5 = 0xC392E0Cu; UPD(0x0C059970u, 1);  /* 0C05996E mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C059970 mov Rm,Rn */
	r1 = 0x0u;  /* 0C059972 mov #imm,Rn */
	r6 = 0x1u;  /* 0C059974 mov #imm,Rn */
	IF(0x0C059976u); W8(r0 + r11, r3); UPD(0x0C059978u, 4);  /* 0C059976 mov.b Rm,@(r0,Rn) */
	W32(r5, r1); UPD(0x0C05997Au, 1);  /* 0C059978 mov.l Rm,@Rn */
	{ W32(r14, r6); /* slot mov.l Rm,@Rn */ UPD(0x0C0598B0u, 3); goto L_0C0598B0; }  /* 0C05997A bra */
L_0C059980: BLKS(0x0C059980u);
	r6 = R32(r14 + 0x8u); UPD(0x0C059982u, 1);  /* 0C059980 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C059982 mov Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C059986u, 2);  /* 0C059984 mov.l @(disp,Rm),Rn */
	IF(0x0C059986u); r7 = MACL;  /* 0C059986 sts macl,Rn */
	r2 = 0xC161778u; UPD(0x0C05998Au, 2);  /* 0C059988 mov.l @(disp,pc),Rn */
	r7 += r6;  /* 0C05998A add Rm,Rn */
	IF(0x0C05998Cu); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C05998Eu, 2);  /* 0C05998C mov.b @(r0,Rm),Rn */
	r7 += r9;  /* 0C05998E add Rm,Rn */
	r0 = 0xC059A00u; UPD(0x0C059992u, 2);  /* 0C059990 mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C059992 add Rm,Rn */
	IF(0x0C059994u); r7 <<= 2;  /* 0C059994 shll2 Rn */
	r6 += r4;  /* 0C059996 add Rm,Rn */
	r7 += r12;  /* 0C059998 add Rm,Rn */
	r6 += 0x4u;  /* 0C05999A add #imm,Rn */
	r4 = R32(r7 + 0x8u); UPD(0x0C05999Eu, 6);  /* 0C05999C mov.l @(disp,Rm),Rn */
	IF(0x0C05999Eu); { u32 t_ = r0; PR = 0x0C0599A2u; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C059A00, 0x0C059A00u, 0x0C0599A2u); }  /* 0C05999E jsr @Rn */
L_0C0599A2: BLKS(0x0C0599A2u);
	{ r9 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C05989Au, 3); goto L_0C05989A; }  /* 0C0599A2 bra */
L_0C0599B0: BLKS(0x0C0599B0u);
	{ W32(r3 + 0xCu, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0597E8u, 3); goto L_0C0597E8; }  /* 0C0599B0 bra */
L_0C0599C0: BLKS(0x0C0599C0u);
	r4 = 0xFFFFFC00u; UPD(0x0C0599C2u, 1);  /* 0C0599C0 mov.w @(disp,pc),Rn */
	r3 &= r4;  /* 0C0599C2 and Rm,Rn */
	r3 += 0x7Au;  /* 0C0599C4 add #imm,Rn */
	{ W32(r2 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0597A0u, 5); goto L_0C0597A0; }  /* 0C0599C6 bra */
L_0C0599D0: BLKS(0x0C0599D0u);
	r9 = 0xFFFFFC00u; UPD(0x0C0599D2u, 1);  /* 0C0599D0 mov.w @(disp,pc),Rn */
	r3 &= r9;  /* 0C0599D2 and Rm,Rn */
	r3 += 0x20u;  /* 0C0599D4 add #imm,Rn */
	{ W32(r2 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C059768u, 5); goto L_0C059768; }  /* 0C0599D6 bra */
}

/* FUN_0c059a00 */
void f_0C059A00(sh3_t *c)
{
	LOCALS;
L_0C059A00: BLKS(0x0C059A00u);
	r3 = r5;  /* 0C059A00 mov Rm,Rn */
	r5 = 0xFFFFFC00u; UPD(0x0C059A04u, 2);  /* 0C059A02 mov.w @(disp,pc),Rn */
	r0 = 0xFu;  /* 0C059A04 mov #imm,Rn */
	r2 = 0x1FFu; UPD(0x0C059A08u, 2);  /* 0C059A06 mov.w @(disp,pc),Rn */
	r5 &= r4;  /* 0C059A08 and Rm,Rn */
	r4 &= r2;  /* 0C059A0A and Rm,Rn */
	r0 &= r4;  /* 0C059A0C and Rm,Rn */
	r2 += 0xFFFFFFF1u;  /* 0C059A0E add #imm,Rn */
	r4 &= r2;  /* 0C059A10 and Rm,Rn */
	r7 = 0xC0u; UPD(0x0C059A14u, 6);  /* 0C059A12 mov.w @(disp,pc),Rn */
	IF(0x0C059A14u); r4 <<= 2;  /* 0C059A14 shll2 Rn */
	r4 += r7;  /* 0C059A16 add Rm,Rn */
	r0 += r0;  /* 0C059A18 add Rm,Rn */
	r0 |= r4;  /* 0C059A1A or Rm,Rn */
	r4 = 0x5u;  /* 0C059A1C mov #imm,Rn */
	IF(0x0C059A1Eu); ARG0(0x434Du); { s32 s_ = (s32)r4; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C059A1E shld Rm,Rn */
	r5 += r0;  /* 0C059A20 add Rm,Rn */
	r3 += r6;  /* 0C059A22 add Rm,Rn */
	r2 = 0xC21E108u; UPD(0x0C059A26u, 9);  /* 0C059A24 mov.l @(disp,pc),Rn */
	IF(0x0C059A26u); r3 <<= 2;  /* 0C059A26 shll2 Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C059A2Au, 2);  /* 0C059A28 mov.l Rm,@-Rn */
	r3 += r2;  /* 0C059A2A add Rm,Rn */
	r0 = 0x80u; UPD(0x0C059A2Eu, 2);  /* 0C059A2C mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C059A2E mov Rm,Rn */
	IF(0x0C059A30u); W32(r0 + r3, r5); UPD(0x0C059A32u, 2);  /* 0C059A30 mov.l Rm,@(r0,Rn) */
	r5 += 0x1u;  /* 0C059A32 add #imm,Rn */
	r0 += 0x4u;  /* 0C059A34 add #imm,Rn */
	IF(0x0C059A36u); W32(r0 + r3, r5); UPD(0x0C059A38u, 3);  /* 0C059A36 mov.l Rm,@(r0,Rn) */
	r5 += 0x1Fu;  /* 0C059A38 add #imm,Rn */
	W32(r3, r5); UPD(0x0C059A3Cu, 2);  /* 0C059A3A mov.l Rm,@Rn */
	r5 += 0x1u;  /* 0C059A3C add #imm,Rn */
	W32(r3 + 0x4u, r5); UPD(0x0C059A40u, 2);  /* 0C059A3E mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C059A40 mov Rm,Rn */
	IF(0x0C059A42u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C059A42 rts */
}

/* FUN_0c059a60 */
void f_0C059A60(sh3_t *c)
{
	LOCALS;
L_0C059A60: BLKS(0x0C059A60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C059A62u, 1);  /* 0C059A60 mov.l Rm,@-Rn */
	r0 = r5;  /* 0C059A62 mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C059A66u, 2);  /* 0C059A64 mov.l Rm,@-Rn */
	r0 += 0xAu;  /* 0C059A66 add #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C059A6Au, 2);  /* 0C059A68 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C059A6Cu, 1);  /* 0C059A6A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C059A6Eu, 1);  /* 0C059A6C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C059A70u, 1);  /* 0C059A6E mov.l Rm,@-Rn */
	r12 = r4;  /* 0C059A70 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C059A74u, 2);  /* 0C059A72 mov.l Rm,@-Rn */
	r13 = r5;  /* 0C059A74 mov Rm,Rn */
	r10 = 0xC1614C0u; UPD(0x0C059A78u, 2);  /* 0C059A76 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C059A78 add #imm,Rn */
	r14 = r15;  /* 0C059A7A mov Rm,Rn */
	{ u32 v_ = R32(r10); r10 += 4; r6 = v_; } UPD(0x0C059A7Eu, 3);  /* 0C059A7C mov.l @Rm+,Rn */
	T = (r6 & r6) == 0;  /* 0C059A7E tst Rm,Rn */
	{ u32 c_ = T; W32(r14, r0); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C059AE8u, 4); goto L_0C059AE8; } UPD(0x0C059A84u, 1); goto L_0C059A84; }  /* 0C059A80 bt/s */
L_0C059A84: BLKS(0x0C059A84u);
	r3 = 0x16Cu; UPD(0x0C059A86u, 1);  /* 0C059A84 mov.w @(disp,pc),Rn */
	r2 = 0x1Cu;  /* 0C059A86 mov #imm,Rn */
	IF(0x0C059A88u); MACL = r4 * r3;  /* 0C059A88 mul.l Rm,Rn */
	r9 = 0xC2859A8u; UPD(0x0C059A8Cu, 4);  /* 0C059A8A mov.l @(disp,pc),Rn */
	IF(0x0C059A8Cu); r8 = MACL;  /* 0C059A8C sts macl,Rn */
	IF(0x0C059A8Eu); MACL = r0 * r2;  /* 0C059A8E mul.l Rm,Rn */
	r11 = 0xFFFFFC00u; UPD(0x0C059A92u, 4);  /* 0C059A90 mov.w @(disp,pc),Rn */
	IF(0x0C059A92u); r0 = MACL;  /* 0C059A92 sts macl,Rn */
	r8 += r0;  /* 0C059A94 add Rm,Rn */
	r0 = 0x5Bu;  /* 0C059A96 mov #imm,Rn */
	IF(0x0C059A98u); MACL = r4 * r0;  /* 0C059A98 mul.l Rm,Rn */
	r8 += r9;  /* 0C059A9A add Rm,Rn */
	IF(0x0C059A9Cu); r4 = MACL;  /* 0C059A9C sts macl,Rn */
	IF(0x0C059A9Eu); ;  /* 0C059A9E nop */
	UPD(0x0C059AA0u, 8);
L_0C059AA0: BLKS(0x0C059AA0u);
	r5 = 0x0u;  /* 0C059AA0 mov #imm,Rn */
	r7 = 0x0u;  /* 0C059AA2 mov #imm,Rn */
	r0 = R32(r14); UPD(0x0C059AA6u, 3);  /* 0C059AA4 mov.l @Rm,Rn */
L_0C059AA6: BLKS(0x0C059AA6u);
	r3 = 0x7u;  /* 0C059AA6 mov #imm,Rn */
	IF(0x0C059AA8u); MACL = r0 * r3;  /* 0C059AA8 mul.l Rm,Rn */
	IF(0x0C059AAAu); r2 = MACL;  /* 0C059AAA sts macl,Rn */
	r2 += r4;  /* 0C059AAC add Rm,Rn */
	r2 += r7;  /* 0C059AAE add Rm,Rn */
	IF(0x0C059AB0u); r2 <<= 2;  /* 0C059AB0 shll2 Rn */
	r2 += r9;  /* 0C059AB2 add Rm,Rn */
	r2 += 0xBu;  /* 0C059AB4 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C059AB8u, 10);  /* 0C059AB6 mov.b @Rm,Rn */
	r0 = 0x19u;  /* 0C059AB8 mov #imm,Rn */
	r3 += 0xFFFFFF9Fu;  /* 0C059ABA add #imm,Rn */
	r1 = r3 & 0xFF;  /* 0C059ABC extu.b Rm,Rn */
	T = r1 > r0;  /* 0C059ABE cmp/hi Rm,Rn */
	{ u32 c_ = T; r3 += 0x61u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C059ACAu, 7); goto L_0C059ACA; } goto L_0C059AC4; }  /* 0C059AC0 bt/s */
L_0C059AC4: BLKS(0x0C059AC4u);
	r2 = r3;  /* 0C059AC4 mov Rm,Rn */
	r2 += 0xFFFFFFE0u;  /* 0C059AC6 add #imm,Rn */
	r3 = (u32)(s32)(s8)r2;  /* 0C059AC8 exts.b Rm,Rn */
	UPD(0x0C059ACAu, 4);
L_0C059ACA: BLKS(0x0C059ACAu);
	r1 = r3 & 0xFF;  /* 0C059ACA extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r3 = v_; } UPD(0x0C059ACEu, 2);  /* 0C059ACC mov.b @Rm+,Rn */
	T = r1 == r3;  /* 0C059ACE cmp/eq Rm,Rn */
	if (T) { UPD(0x0C059B60u, 4); goto L_0C059B60; }  /* 0C059AD0 bt */
L_0C059AD2: BLKS(0x0C059AD2u);
	r7 += 0x1u;  /* 0C059AD2 add #imm,Rn */
	r0 = 0x2u;  /* 0C059AD4 mov #imm,Rn */
	T = (s32)r7 > (s32)r0;  /* 0C059AD6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C059AA6u, 6); goto L_0C059AA6; } UPD(0x0C059ADCu, 1); goto L_0C059ADC; }  /* 0C059AD8 bf/s */
L_0C059ADC: BLKS(0x0C059ADCu);
	r0 = r5;  /* 0C059ADC mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C059ADE cmp/eq #imm,r0 */
	if (T) { UPD(0x0C059B40u, 5); goto L_0C059B40; }  /* 0C059AE0 bt */
L_0C059AE2: BLKS(0x0C059AE2u);
	{ u32 v_ = R32(r10); r10 += 4; r6 = v_; } UPD(0x0C059AE4u, 1);  /* 0C059AE2 mov.l @Rm+,Rn */
	T = (r6 & r6) == 0;  /* 0C059AE4 tst Rm,Rn */
	if (!T) { UPD(0x0C059AA0u, 4); goto L_0C059AA0; }  /* 0C059AE6 bf */
L_0C059AE8: BLKS(0x0C059AE8u);
	r9 = 0x16Cu; UPD(0x0C059AEAu, 1);  /* 0C059AE8 mov.w @(disp,pc),Rn */
	r5 = 0x1Cu;  /* 0C059AEA mov #imm,Rn */
	IF(0x0C059AECu); MACL = r12 * r9;  /* 0C059AEC mul.l Rm,Rn */
	r0 = R32(r14); UPD(0x0C059AF0u, 4);  /* 0C059AEE mov.l @Rm,Rn */
	IF(0x0C059AF0u); r13 <<= 2;  /* 0C059AF0 shll2 Rn */
	IF(0x0C059AF2u); r4 = MACL;  /* 0C059AF2 sts macl,Rn */
	IF(0x0C059AF4u); MACL = r0 * r5;  /* 0C059AF4 mul.l Rm,Rn */
	r7 = 0xC2859A8u; UPD(0x0C059AF8u, 5);  /* 0C059AF6 mov.l @(disp,pc),Rn */
	r14 += 0x4u;  /* 0C059AF8 add #imm,Rn */
	IF(0x0C059AFAu); r11 = MACL;  /* 0C059AFA sts macl,Rn */
	r11 += r4;  /* 0C059AFC add Rm,Rn */
	r11 += r7;  /* 0C059AFE add Rm,Rn */
	r11 += 0x1Au;  /* 0C059B00 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r11); UPD(0x0C059B04u, 6);  /* 0C059B02 mov.b @Rm,Rn */
	r0 = r13;  /* 0C059B04 mov Rm,Rn */
	r6 = r1 & 0xFF;  /* 0C059B06 extu.b Rm,Rn */
	r8 = 0xC161784u; UPD(0x0C059B0Au, 3);  /* 0C059B08 mov.l @(disp,pc),Rn */
	IF(0x0C059B0Au); MACL = r6 * r5;  /* 0C059B0A mul.l Rm,Rn */
	IF(0x0C059B0Cu); r9 = R32(r0 + r8); UPD(0x0C059B0Eu, 3);  /* 0C059B0C mov.l @(r0,Rm),Rn */
	r11 += 0xFFFFFFE6u;  /* 0C059B0E add #imm,Rn */
	r3 = R32(r11 + 0x8u); UPD(0x0C059B12u, 2);  /* 0C059B10 mov.l @(disp,Rm),Rn */
	IF(0x0C059B12u); r8 = MACL;  /* 0C059B12 sts macl,Rn */
	r8 += r4;  /* 0C059B14 add Rm,Rn */
	r2 = r3 & 0xFF;  /* 0C059B16 extu.b Rm,Rn */
	r8 += r7;  /* 0C059B18 add Rm,Rn */
	r2 |= r9;  /* 0C059B1A or Rm,Rn */
	W32(r8 + 0x8u, r2); UPD(0x0C059B1Eu, 6);  /* 0C059B1C mov.l Rm,@(disp,Rn) */
	r13 = R32(r11 + 0xCu); UPD(0x0C059B20u, 1);  /* 0C059B1E mov.l @(disp,Rm),Rn */
	r12 = r13 & 0xFF;  /* 0C059B20 extu.b Rm,Rn */
	r12 |= r9;  /* 0C059B22 or Rm,Rn */
	W32(r8 + 0xCu, r12); UPD(0x0C059B26u, 3);  /* 0C059B24 mov.l Rm,@(disp,Rn) */
	r10 = R32(r11 + 0x10u); UPD(0x0C059B28u, 1);  /* 0C059B26 mov.l @(disp,Rm),Rn */
	r4 = r10 & 0xFF;  /* 0C059B28 extu.b Rm,Rn */
	r9 |= r4;  /* 0C059B2A or Rm,Rn */
	W32(r8 + 0x10u, r9); UPD(0x0C059B2Eu, 3);  /* 0C059B2C mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C059B2E mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C059B32u, 2);  /* 0C059B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C059B34u, 1);  /* 0C059B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C059B36u, 1);  /* 0C059B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C059B38u, 1);  /* 0C059B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C059B3Au, 1);  /* 0C059B38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C059B3Cu, 1);  /* 0C059B3A mov.l @Rm+,Rn */
	IF(0x0C059B3Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C059B3C rts */
L_0C059B40: BLKS(0x0C059B40u);
	r7 = R32(r8 + 0x8u); UPD(0x0C059B42u, 1);  /* 0C059B40 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0xCu); UPD(0x0C059B44u, 1);  /* 0C059B42 mov.l @(disp,Rm),Rn */
	r7 &= r11;  /* 0C059B44 and Rm,Rn */
	r5 = R32(r8 + 0x10u); UPD(0x0C059B48u, 2);  /* 0C059B46 mov.l @(disp,Rm),Rn */
	r6 &= r11;  /* 0C059B48 and Rm,Rn */
	r5 &= r11;  /* 0C059B4A and Rm,Rn */
	r7 += 0x63u;  /* 0C059B4C add #imm,Rn */
	r6 += 0x61u;  /* 0C059B4E add #imm,Rn */
	r5 += 0x76u;  /* 0C059B50 add #imm,Rn */
	W32(r8 + 0x8u, r7); UPD(0x0C059B54u, 6);  /* 0C059B52 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r6); UPD(0x0C059B56u, 1);  /* 0C059B54 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x10u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C059AE2u, 3); goto L_0C059AE2; }  /* 0C059B56 bra */
L_0C059B60: BLKS(0x0C059B60u);
	{ r5 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C059AD2u, 3); goto L_0C059AD2; }  /* 0C059B60 bra */
}

/* FUN_0c059b80 */
void f_0C059B80(sh3_t *c)
{
	LOCALS;
L_0C059B80: BLKS(0x0C059B80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C059B82u, 1);  /* 0C059B80 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C059B84u, 1);  /* 0C059B82 mov.l Rm,@-Rn */
	r8 = r5;  /* 0C059B84 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C059B88u, 2);  /* 0C059B86 mov.l Rm,@-Rn */
	r9 = r6;  /* 0C059B88 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C059B8Cu, 2);  /* 0C059B8A mov.l Rm,@-Rn */
	r5 = 0x3Cu;  /* 0C059B8C mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C059B90u, 2);  /* 0C059B8E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C059B92u, 1);  /* 0C059B90 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C059B94u, 1);  /* 0C059B92 mov.l Rm,@-Rn */
	r13 = 0xC0AFDF0u; UPD(0x0C059B96u, 1);  /* 0C059B94 mov.l @(disp,pc),Rn */
	IF(0x0C059B96u); r15 -= 4; W32(r15, PR); UPD(0x0C059B98u, 1);  /* 0C059B96 sts.l pr,@-Rn */
	IF(0x0C059B98u); { u32 t_ = r13; PR = 0x0C059B9Cu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFDF0, 0x0C0AFDF0u, 0x0C059B9Cu); }  /* 0C059B98 jsr @Rn */
L_0C059B9C: BLKS(0x0C059B9Cu);
	r11 = r1;  /* 0C059B9C mov Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C059B9E tst Rm,Rn */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C059C50u, 5); goto L_0C059C50; } goto L_0C059BA4; }  /* 0C059BA0 bt/s */
L_0C059BA4: BLKS(0x0C059BA4u);
	r4 = r11;  /* 0C059BA4 mov Rm,Rn */
	UPD(0x0C059BA6u, 2);
L_0C059BA6: BLKS(0x0C059BA6u);
	r11 = 0x5u;  /* 0C059BA6 mov #imm,Rn */
	IF(0x0C059BA8u); ARG0(0x48BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C059BA8 shld Rm,Rn */
	r8 += r9;  /* 0C059BAA add Rm,Rn */
	r9 = 0xC21E108u; UPD(0x0C059BAEu, 4);  /* 0C059BAC mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C059BAE mov #imm,Rn */
	IF(0x0C059BB0u); { u32 t_ = r13; PR = 0x0C059BB4u; IF(0x0C059BB2u); r8 <<= 2; /* slot shll2 Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFDF0, 0x0C0AFDF0u, 0x0C059BB4u); }  /* 0C059BB0 jsr @Rn */
L_0C059BB4: BLKS(0x0C059BB4u);
	r8 += r9;  /* 0C059BB4 add Rm,Rn */
	r5 = r0;  /* 0C059BB6 mov Rm,Rn */
	r9 = 0xC1617A4u; UPD(0x0C059BBAu, 3);  /* 0C059BB8 mov.l @(disp,pc),Rn */
	r0 = r1;  /* 0C059BBA mov Rm,Rn */
	IF(0x0C059BBCu); r0 <<= 2;  /* 0C059BBC shll2 Rn */
	IF(0x0C059BBEu); r6 = R32(r0 + r9); UPD(0x0C059BC0u, 3);  /* 0C059BBE mov.l @(r0,Rm),Rn */
	r0 = r5;  /* 0C059BC0 mov Rm,Rn */
	IF(0x0C059BC2u); r0 <<= 2;  /* 0C059BC2 shll2 Rn */
	IF(0x0C059BC4u); r4 = R32(r0 + r9); UPD(0x0C059BC6u, 3);  /* 0C059BC4 mov.l @(r0,Rm),Rn */
	r5 = 0x3Cu;  /* 0C059BC6 mov #imm,Rn */
	r2 = 0x40C0403Au; UPD(0x0C059BCAu, 2);  /* 0C059BC8 mov.l @(disp,pc),Rn */
	W32(r8 + 0x14u, r4); UPD(0x0C059BCCu, 1);  /* 0C059BCA mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x18u, r6); UPD(0x0C059BCEu, 1);  /* 0C059BCC mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C059BCE mov Rm,Rn */
	IF(0x0C059BD0u); { u32 t_ = r13; PR = 0x0C059BD4u; W32(r8 + 0x10u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0AFDF0, 0x0C0AFDF0u, 0x0C059BD4u); }  /* 0C059BD0 jsr @Rn */
L_0C059BD4: BLKS(0x0C059BD4u);
	r4 = r1;  /* 0C059BD4 mov Rm,Rn */
	IF(0x0C059BD6u); { u32 t_ = r13; PR = 0x0C059BDAu; r5 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFDF0, 0x0C0AFDF0u, 0x0C059BDAu); }  /* 0C059BD6 jsr @Rn */
L_0C059BDA: BLKS(0x0C059BDAu);
	r7 = r0;  /* 0C059BDA mov Rm,Rn */
	r0 = r1;  /* 0C059BDC mov Rm,Rn */
	IF(0x0C059BDEu); r0 <<= 2;  /* 0C059BDE shll2 Rn */
	IF(0x0C059BE0u); r13 = R32(r0 + r9); UPD(0x0C059BE2u, 4);  /* 0C059BE0 mov.l @(r0,Rm),Rn */
	r12 = 0xFu;  /* 0C059BE2 mov #imm,Rn */
	r3 = 0x1F0u; UPD(0x0C059BE6u, 2);  /* 0C059BE4 mov.w @(disp,pc),Rn */
	r12 &= r13;  /* 0C059BE6 and Rm,Rn */
	r11 = 0xC0u; UPD(0x0C059BEAu, 2);  /* 0C059BE8 mov.w @(disp,pc),Rn */
	r13 &= r3;  /* 0C059BEA and Rm,Rn */
	IF(0x0C059BECu); r13 <<= 2;  /* 0C059BEC shll2 Rn */
	r5 = 0x40C04000u; UPD(0x0C059BF0u, 3);  /* 0C059BEE mov.l @(disp,pc),Rn */
	r13 += r11;  /* 0C059BF0 add Rm,Rn */
	r12 += r12;  /* 0C059BF2 add Rm,Rn */
	r12 |= r13;  /* 0C059BF4 or Rm,Rn */
	r0 = 0x88u; UPD(0x0C059BF8u, 4);  /* 0C059BF6 mov.w @(disp,pc),Rn */
	r12 |= r5;  /* 0C059BF8 or Rm,Rn */
	IF(0x0C059BFAu); W32(r0 + r8, r12); UPD(0x0C059BFCu, 2);  /* 0C059BFA mov.l Rm,@(r0,Rn) */
	r4 = 0xFu;  /* 0C059BFC mov #imm,Rn */
	r12 += 0x1u;  /* 0C059BFE add #imm,Rn */
	r0 += 0x4u;  /* 0C059C00 add #imm,Rn */
	IF(0x0C059C02u); W32(r0 + r8, r12); UPD(0x0C059C04u, 4);  /* 0C059C02 mov.l Rm,@(r0,Rn) */
	r0 = r7;  /* 0C059C04 mov Rm,Rn */
	IF(0x0C059C06u); r0 <<= 2;  /* 0C059C06 shll2 Rn */
	IF(0x0C059C08u); r6 = R32(r0 + r9); UPD(0x0C059C0Au, 3);  /* 0C059C08 mov.l @(r0,Rm),Rn */
	r12 += 0x1Fu;  /* 0C059C0A add #imm,Rn */
	r4 &= r6;  /* 0C059C0C and Rm,Rn */
	W32(r8 + 0x8u, r12); UPD(0x0C059C10u, 3);  /* 0C059C0E mov.l Rm,@(disp,Rn) */
	r6 &= r3;  /* 0C059C10 and Rm,Rn */
	IF(0x0C059C12u); r6 <<= 2;  /* 0C059C12 shll2 Rn */
	r12 += 0x1u;  /* 0C059C14 add #imm,Rn */
	r6 += r11;  /* 0C059C16 add Rm,Rn */
	r4 += r4;  /* 0C059C18 add Rm,Rn */
	W32(r8 + 0xCu, r12); UPD(0x0C059C1Cu, 6);  /* 0C059C1A mov.l Rm,@(disp,Rn) */
	r4 |= r6;  /* 0C059C1C or Rm,Rn */
	r0 = 0x80u; UPD(0x0C059C20u, 2);  /* 0C059C1E mov.w @(disp,pc),Rn */
	r4 |= r5;  /* 0C059C20 or Rm,Rn */
	IF(0x0C059C22u); W32(r0 + r8, r4); UPD(0x0C059C24u, 2);  /* 0C059C22 mov.l Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C059C24 add #imm,Rn */
	r0 += 0x4u;  /* 0C059C26 add #imm,Rn */
	IF(0x0C059C28u); W32(r0 + r8, r4); UPD(0x0C059C2Au, 3);  /* 0C059C28 mov.l Rm,@(r0,Rn) */
	r4 += 0x1Fu;  /* 0C059C2A add #imm,Rn */
	W32(r8, r4); UPD(0x0C059C2Eu, 2);  /* 0C059C2C mov.l Rm,@Rn */
	r4 += 0x1u;  /* 0C059C2E add #imm,Rn */
	W32(r8 + 0x4u, r4); UPD(0x0C059C32u, 2);  /* 0C059C30 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C059C32 mov Rm,Rn */
	IF(0x0C059C34u); PR = R32(r15); r15 += 4; UPD(0x0C059C36u, 2);  /* 0C059C34 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C059C38u, 1);  /* 0C059C36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C059C3Au, 1);  /* 0C059C38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C059C3Cu, 1);  /* 0C059C3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C059C3Eu, 1);  /* 0C059C3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C059C40u, 1);  /* 0C059C3E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C059C42u, 1);  /* 0C059C40 mov.l @Rm+,Rn */
	IF(0x0C059C42u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C059C42 rts */
L_0C059C50: BLKS(0x0C059C50u);
	r10 = 0xC0AFC10u; UPD(0x0C059C52u, 1);  /* 0C059C50 mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C059C52 tst Rm,Rn */
	r2 = 0xC16178Cu; UPD(0x0C059C56u, 2);  /* 0C059C54 mov.l @(disp,pc),Rn */
	IF(0x0C059C56u); r0 = T;  /* 0C059C56 movt Rn */
	IF(0x0C059C58u); { u32 t_ = r10; PR = 0x0C059C5Cu; IF(0x0C059C5Au); r4 = (u32)(s32)(s8)R8(r0 + r2); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C059C5Cu); }  /* 0C059C58 jsr @Rn */
L_0C059C5C: BLKS(0x0C059C5Cu);
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C059BA6u, 3); goto L_0C059BA6; }  /* 0C059C5C bra */
}

/* FUN_0c059c90 */
void f_0C059C90(sh3_t *c)
{
	LOCALS;
L_0C059C90: BLKS(0x0C059C90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C059C92u, 1);  /* 0C059C90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C059C94u, 1);  /* 0C059C92 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C059C96u, 1);  /* 0C059C94 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C059C98u, 1);  /* 0C059C96 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C059C9Au, 1);  /* 0C059C98 mov.l Rm,@-Rn */
	r11 = r4;  /* 0C059C9A mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C059C9Eu, 2);  /* 0C059C9C mov.l Rm,@-Rn */
	r12 = r5;  /* 0C059C9E mov Rm,Rn */
	r10 = 0xC050CD0u; UPD(0x0C059CA2u, 2);  /* 0C059CA0 mov.l @(disp,pc),Rn */
	r5 = r4;  /* 0C059CA2 mov Rm,Rn */
	IF(0x0C059CA4u); r15 -= 4; W32(r15, PR); UPD(0x0C059CA6u, 2);  /* 0C059CA4 sts.l pr,@-Rn */
	r6 = r12;  /* 0C059CA6 mov Rm,Rn */
	r8 = 0xC1617CCu; UPD(0x0C059CAAu, 2);  /* 0C059CA8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C059CAA mov Rm,Rn */
	r9 = 0x80808000u; UPD(0x0C059CAEu, 2);  /* 0C059CAC mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C059CAE mov Rm,Rn */
	r7 = r9;  /* 0C059CB0 mov Rm,Rn */
	IF(0x0C059CB2u); { u32 t_ = r10; PR = 0x0C059CB6u; r5 += 0x1u; /* slot add #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C059CB6u); }  /* 0C059CB2 jsr @Rn */
L_0C059CB6: BLKS(0x0C059CB6u);
	r4 = r8;  /* 0C059CB6 mov Rm,Rn */
	r5 = r11;  /* 0C059CB8 mov Rm,Rn */
	r6 = r12;  /* 0C059CBA mov Rm,Rn */
	r7 = r9;  /* 0C059CBC mov Rm,Rn */
	r0 = r10;  /* 0C059CBE mov Rm,Rn */
	r15 = r14;  /* 0C059CC0 mov Rm,Rn */
	IF(0x0C059CC2u); PR = R32(r15); r15 += 4; UPD(0x0C059CC4u, 7);  /* 0C059CC2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C059CC6u, 1);  /* 0C059CC4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C059CC8u, 1);  /* 0C059CC6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C059CCAu, 1);  /* 0C059CC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C059CCCu, 1);  /* 0C059CCA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C059CCEu, 1);  /* 0C059CCC mov.l @Rm+,Rn */
	IF(0x0C059CCEu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C059CCE jmp @Rn */
}

/* FUN_0c059ce0 */
void f_0C059CE0(sh3_t *c)
{
	LOCALS;
L_0C059CE0: BLKS(0x0C059CE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C059CE2u, 1);  /* 0C059CE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C059CE4u, 1);  /* 0C059CE2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C059CE6u, 1);  /* 0C059CE4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C059CE8u, 1);  /* 0C059CE6 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C059CEAu, 1);  /* 0C059CE8 mov.l Rm,@-Rn */
	r2 = 0xC21F589u; UPD(0x0C059CECu, 1);  /* 0C059CEA mov.l @(disp,pc),Rn */
	IF(0x0C059CECu); r15 -= 4; W32(r15, PR); UPD(0x0C059CEEu, 1);  /* 0C059CEC sts.l pr,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C059CF0u, 1);  /* 0C059CEE mov.b @Rm,Rn */
	r2 = r0 & 0xFF;  /* 0C059CF0 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C059CF2 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C059D9Cu, 5); goto L_0C059D9C; } goto L_0C059CF8; }  /* 0C059CF4 bf/s */
L_0C059CF8: BLKS(0x0C059CF8u);
	r3 = 0xC283CA4u; UPD(0x0C059CFAu, 2);  /* 0C059CF8 mov.l @(disp,pc),Rn */
	r10 = 0x78u;  /* 0C059CFA mov #imm,Rn */
	r0 = 0xC3929E0u; UPD(0x0C059CFEu, 2);  /* 0C059CFC mov.l @(disp,pc),Rn */
	r11 = 0xC21F7F9u; UPD(0x0C059D00u, 1);  /* 0C059CFE mov.l @(disp,pc),Rn */
	W32(r3, r2); UPD(0x0C059D02u, 1);  /* 0C059D00 mov.l Rm,@Rn */
	W32(r0, r2); UPD(0x0C059D04u, 1);  /* 0C059D02 mov.l Rm,@Rn */
L_0C059D04: BLKS(0x0C059D04u);
	r9 = 0xC04F330u; UPD(0x0C059D06u, 1);  /* 0C059D04 mov.l @(disp,pc),Rn */
	r8 = 0xC04F930u; UPD(0x0C059D08u, 1);  /* 0C059D06 mov.l @(disp,pc),Rn */
	IF(0x0C059D08u); { u32 t_ = r9; PR = 0x0C059D0Cu; IF(0x0C059D0Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C059D0Cu); }  /* 0C059D08 jsr @Rn */
L_0C059D0C: BLKS(0x0C059D0Cu);
	r9 = 0xC050650u; UPD(0x0C059D0Eu, 1);  /* 0C059D0C mov.l @(disp,pc),Rn */
	IF(0x0C059D0Eu); { u32 t_ = r8; PR = 0x0C059D12u; IF(0x0C059D10u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C059D12u); }  /* 0C059D0E jsr @Rn */
L_0C059D12: BLKS(0x0C059D12u);
	r8 = 0xC0505F0u; UPD(0x0C059D14u, 1);  /* 0C059D12 mov.l @(disp,pc),Rn */
	r4 = 0xFFFFFFu; UPD(0x0C059D16u, 1);  /* 0C059D14 mov.l @(disp,pc),Rn */
	IF(0x0C059D16u); { u32 t_ = r9; PR = 0x0C059D1Au; IF(0x0C059D18u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050650, 0x0C050650u, 0x0C059D1Au); }  /* 0C059D16 jsr @Rn */
L_0C059D1A: BLKS(0x0C059D1Au);
	IF(0x0C059D1Au); { u32 t_ = r8; PR = 0x0C059D1Eu; IF(0x0C059D1Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C059D1Eu); }  /* 0C059D1A jsr @Rn */
L_0C059D1E: BLKS(0x0C059D1Eu);
	r1 = 0xC1617DEu; UPD(0x0C059D20u, 1);  /* 0C059D1E mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C059D20 add #imm,Rn */
	r0 = 0xC1617D4u; UPD(0x0C059D24u, 2);  /* 0C059D22 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C059D24 mov #imm,Rn */
	r7 = 0xC2175E8u; UPD(0x0C059D28u, 2);  /* 0C059D26 mov.l @(disp,pc),Rn */
	r6 = 0xC393044u; UPD(0x0C059D2Au, 1);  /* 0C059D28 mov.l @(disp,pc),Rn */
	W32(r7, r0); UPD(0x0C059D2Cu, 1);  /* 0C059D2A mov.l Rm,@Rn */
	W32(r6, r1); UPD(0x0C059D2Eu, 1);  /* 0C059D2C mov.l Rm,@Rn */
	r9 = 0xC062A70u; UPD(0x0C059D30u, 1);  /* 0C059D2E mov.l @(disp,pc),Rn */
	W32(r15, r5); UPD(0x0C059D32u, 1);  /* 0C059D30 mov.l Rm,@Rn */
	r8 = 0xC059F60u; UPD(0x0C059D34u, 1);  /* 0C059D32 mov.l @(disp,pc),Rn */
	r5 = 0xA80000u; UPD(0x0C059D36u, 1);  /* 0C059D34 mov.l @(disp,pc),Rn */
	r6 = 0x780000u; UPD(0x0C059D38u, 1);  /* 0C059D36 mov.l @(disp,pc),Rn */
	r7 = 0x808080u; UPD(0x0C059D3Au, 1);  /* 0C059D38 mov.l @(disp,pc),Rn */
	IF(0x0C059D3Au); { u32 t_ = r9; PR = 0x0C059D3Eu; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C059D3Eu); }  /* 0C059D3A jsr @Rn */
L_0C059D3E: BLKS(0x0C059D3Eu);
	IF(0x0C059D3Eu); { u32 t_ = r8; PR = 0x0C059D42u; r15 += 0x4u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C059F60, 0x0C059F60u, 0x0C059D42u); }  /* 0C059D3E jsr @Rn */
L_0C059D42: BLKS(0x0C059D42u);
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C059D44u, 1);  /* 0C059D42 mov.b @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C059D44 tst Rm,Rn */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C059DB0u, 4); goto L_0C059DB0; } UPD(0x0C059D4Au, 1); goto L_0C059D4A; }  /* 0C059D46 bf/s */
L_0C059D4A: BLKS(0x0C059D4Au);
	r8 = 0xC04F770u; UPD(0x0C059D4Cu, 1);  /* 0C059D4A mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C059D4C mov #imm,Rn */
	IF(0x0C059D4Eu); { u32 t_ = r8; PR = 0x0C059D52u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04F770, 0x0C04F770u, 0x0C059D52u); }  /* 0C059D4E jsr @Rn */
L_0C059D52: BLKS(0x0C059D52u);
	r8 = 0xC050840u; UPD(0x0C059D54u, 1);  /* 0C059D52 mov.l @(disp,pc),Rn */
	IF(0x0C059D54u); { u32 t_ = r8; PR = 0x0C059D58u; IF(0x0C059D56u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C059D58u); }  /* 0C059D54 jsr @Rn */
L_0C059D58: BLKS(0x0C059D58u);
	T = (r10 & r10) == 0;  /* 0C059D58 tst Rm,Rn */
	if (T) { UPD(0x0C059D5Eu, 4); goto L_0C059D5E; }  /* 0C059D5A bt */
L_0C059D5C: BLKS(0x0C059D5Cu);
	r10 += 0xFFFFFFFFu;  /* 0C059D5C add #imm,Rn */
	UPD(0x0C059D5Eu, 1);
L_0C059D5E: BLKS(0x0C059D5Eu);
	r0 = 0x80u; UPD(0x0C059D60u, 1);  /* 0C059D5E mov.w @(disp,pc),Rn */
	r4 = 0xFFFFFFF9u;  /* 0C059D60 mov #imm,Rn */
	r5 = 0xC27DDF4u; UPD(0x0C059D64u, 2);  /* 0C059D62 mov.l @(disp,pc),Rn */
	r8 = 0xFFFFFFFFu;  /* 0C059D64 mov #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r11); UPD(0x0C059D68u, 2);  /* 0C059D66 mov.b @Rm,Rn */
	IF(0x0C059D68u); r0 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C059D6Au, 1);  /* 0C059D68 mov.b @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C059D6A tst Rm,Rn */
	IF(0x0C059D6Cu); ARG0(0x404Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C059D6C shad Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C059D6E negc Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C059D70 tst Rm,Rn */
	r0 &= 0x1u;  /* 0C059D72 and #imm,r0 */
	IF(0x0C059D74u); r9 = T;  /* 0C059D74 movt Rn */
	r3 &= r0;  /* 0C059D76 and Rm,Rn */
	r3 &= r9;  /* 0C059D78 and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C059D7A tst Rm,Rn */
	if (!T) { UPD(0x0C059D9Cu, 12); goto L_0C059D9C; }  /* 0C059D7C bf */
L_0C059D7E: BLKS(0x0C059D7Eu);
	r0 = 0xC060C30u; UPD(0x0C059D80u, 1);  /* 0C059D7E mov.l @(disp,pc),Rn */
	IF(0x0C059D80u); { u32 t_ = r0; PR = 0x0C059D84u; IF(0x0C059D82u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C060C30, 0x0C060C30u, 0x0C059D84u); }  /* 0C059D80 jsr @Rn */
L_0C059D84: BLKS(0x0C059D84u);
	r4 = 0xC21F589u; UPD(0x0C059D86u, 1);  /* 0C059D84 mov.l @(disp,pc),Rn */
	T = (r10 & r10) == 0;  /* 0C059D86 tst Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C059D8Au, 2);  /* 0C059D88 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C059D8A negc Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C059D8C tst Rm,Rn */
	IF(0x0C059D8Eu); r2 = T;  /* 0C059D8E movt Rn */
	IF(0x0C059D90u); T = (s32)r9 > 0;  /* 0C059D90 cmp/pl Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C059D92 negc Rm,Rn */
	r7 &= r2;  /* 0C059D94 and Rm,Rn */
	r7 |= r0;  /* 0C059D96 or Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C059D98 tst Rm,Rn */
	if (!T) { UPD(0x0C059D04u, 11); goto L_0C059D04; }  /* 0C059D9A bf */
L_0C059D9C: BLKS(0x0C059D9Cu);
	r15 = r14;  /* 0C059D9C mov Rm,Rn */
	IF(0x0C059D9Eu); PR = R32(r15); r15 += 4; UPD(0x0C059DA0u, 2);  /* 0C059D9E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C059DA2u, 1);  /* 0C059DA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C059DA4u, 1);  /* 0C059DA2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C059DA6u, 1);  /* 0C059DA4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C059DA8u, 1);  /* 0C059DA6 mov.l @Rm+,Rn */
	IF(0x0C059DA8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C059DA8 rts */
L_0C059DB0: BLKS(0x0C059DB0u);
	r8 = 0xC050CD0u; UPD(0x0C059DB2u, 1);  /* 0C059DB0 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C059DB2 mov #imm,Rn */
	r4 = 0xC1617E4u; UPD(0x0C059DB6u, 2);  /* 0C059DB4 mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C059DB8u, 1);  /* 0C059DB6 mov.l @(disp,pc),Rn */
	IF(0x0C059DB8u); { u32 t_ = r8; PR = 0x0C059DBCu; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C059DBCu); }  /* 0C059DB8 jsr @Rn */
L_0C059DBC: BLKS(0x0C059DBCu);
	r8 = 0xC0508F0u; UPD(0x0C059DBEu, 1);  /* 0C059DBC mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C059DBE mov #imm,Rn */
	r2 = 0xC2864A4u; UPD(0x0C059DC2u, 2);  /* 0C059DC0 mov.l @(disp,pc),Rn */
	r6 = 0x12u;  /* 0C059DC2 mov #imm,Rn */
	IF(0x0C059DC4u); { u32 t_ = r8; PR = 0x0C059DC8u; r4 = R32(r2); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0508F0, 0x0C0508F0u, 0x0C059DC8u); }  /* 0C059DC4 jsr @Rn */
L_0C059DC8: BLKS(0x0C059DC8u);
	r8 = 0xC050A80u; UPD(0x0C059DCAu, 1);  /* 0C059DC8 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C059DCA mov Rm,Rn */
	r5 = 0x1u;  /* 0C059DCC mov #imm,Rn */
	IF(0x0C059DCEu); { u32 t_ = r8; PR = 0x0C059DD2u; r6 = 0x1Bu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C059DD2u); }  /* 0C059DCE jsr @Rn */
L_0C059DD2: BLKS(0x0C059DD2u);
	{ IF(0x0C059DD4u); ; /* slot nop */ UPD(0x0C059D4Au, 3); goto L_0C059D4A; }  /* 0C059DD2 bra */
}

/* FUN_0c059e50 */
void f_0C059E50(sh3_t *c)
{
	LOCALS;
L_0C059E50: BLKS(0x0C059E50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C059E52u, 1);  /* 0C059E50 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C059E54u, 1);  /* 0C059E52 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C059E56u, 1);  /* 0C059E54 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C059E58u, 1);  /* 0C059E56 mov.l Rm,@-Rn */
	r2 = 0xC21F589u; UPD(0x0C059E5Au, 1);  /* 0C059E58 mov.l @(disp,pc),Rn */
	IF(0x0C059E5Au); r15 -= 4; W32(r15, PR); UPD(0x0C059E5Cu, 1);  /* 0C059E5A sts.l pr,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C059E5Eu, 1);  /* 0C059E5C mov.b @Rm,Rn */
	r2 = r0 & 0xFF;  /* 0C059E5E extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C059E60 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C059EF4u, 5); goto L_0C059EF4; } goto L_0C059E66; }  /* 0C059E62 bf/s */
L_0C059E66: BLKS(0x0C059E66u);
	r3 = 0xC283CA4u; UPD(0x0C059E68u, 2);  /* 0C059E66 mov.l @(disp,pc),Rn */
	r9 = 0x78u;  /* 0C059E68 mov #imm,Rn */
	r0 = 0xC3929E0u; UPD(0x0C059E6Cu, 2);  /* 0C059E6A mov.l @(disp,pc),Rn */
	r10 = 0xC062A70u; UPD(0x0C059E6Eu, 1);  /* 0C059E6C mov.l @(disp,pc),Rn */
	W32(r3, r2); UPD(0x0C059E70u, 1);  /* 0C059E6E mov.l Rm,@Rn */
	W32(r0, r2); UPD(0x0C059E72u, 1);  /* 0C059E70 mov.l Rm,@Rn */
L_0C059E72: BLKS(0x0C059E72u);
	r8 = 0xC04F330u; UPD(0x0C059E74u, 1);  /* 0C059E72 mov.l @(disp,pc),Rn */
	IF(0x0C059E74u); { u32 t_ = r8; PR = 0x0C059E78u; IF(0x0C059E76u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C059E78u); }  /* 0C059E74 jsr @Rn */
L_0C059E78: BLKS(0x0C059E78u);
	r8 = 0xC04F930u; UPD(0x0C059E7Au, 1);  /* 0C059E78 mov.l @(disp,pc),Rn */
	IF(0x0C059E7Au); { u32 t_ = r8; PR = 0x0C059E7Eu; IF(0x0C059E7Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C059E7Eu); }  /* 0C059E7A jsr @Rn */
L_0C059E7E: BLKS(0x0C059E7Eu);
	r8 = 0xC050650u; UPD(0x0C059E80u, 1);  /* 0C059E7E mov.l @(disp,pc),Rn */
	r4 = 0xFFFFFFu; UPD(0x0C059E82u, 1);  /* 0C059E80 mov.l @(disp,pc),Rn */
	IF(0x0C059E82u); { u32 t_ = r8; PR = 0x0C059E86u; IF(0x0C059E84u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050650, 0x0C050650u, 0x0C059E86u); }  /* 0C059E82 jsr @Rn */
L_0C059E86: BLKS(0x0C059E86u);
	r8 = 0xC0505F0u; UPD(0x0C059E88u, 1);  /* 0C059E86 mov.l @(disp,pc),Rn */
	IF(0x0C059E88u); { u32 t_ = r8; PR = 0x0C059E8Cu; IF(0x0C059E8Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C059E8Cu); }  /* 0C059E88 jsr @Rn */
L_0C059E8C: BLKS(0x0C059E8Cu);
	r1 = 0xC1617FCu; UPD(0x0C059E8Eu, 1);  /* 0C059E8C mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C059E8E add #imm,Rn */
	r7 = 0xC1617F2u; UPD(0x0C059E92u, 2);  /* 0C059E90 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C059E92 mov #imm,Rn */
	r6 = 0xC2175E8u; UPD(0x0C059E96u, 2);  /* 0C059E94 mov.l @(disp,pc),Rn */
	r5 = 0xC393044u; UPD(0x0C059E98u, 1);  /* 0C059E96 mov.l @(disp,pc),Rn */
	W32(r6, r7); UPD(0x0C059E9Au, 1);  /* 0C059E98 mov.l Rm,@Rn */
	W32(r5, r1); UPD(0x0C059E9Cu, 1);  /* 0C059E9A mov.l Rm,@Rn */
	r8 = 0xC04F770u; UPD(0x0C059E9Eu, 1);  /* 0C059E9C mov.l @(disp,pc),Rn */
	W32(r15, r4); UPD(0x0C059EA0u, 1);  /* 0C059E9E mov.l Rm,@Rn */
	r5 = 0xA80000u; UPD(0x0C059EA2u, 1);  /* 0C059EA0 mov.l @(disp,pc),Rn */
	r6 = 0x780000u; UPD(0x0C059EA4u, 1);  /* 0C059EA2 mov.l @(disp,pc),Rn */
	r7 = 0x808080u; UPD(0x0C059EA6u, 1);  /* 0C059EA4 mov.l @(disp,pc),Rn */
	IF(0x0C059EA6u); { u32 t_ = r10; PR = 0x0C059EAAu; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C059EAAu); }  /* 0C059EA6 jsr @Rn */
L_0C059EAA: BLKS(0x0C059EAAu);
	r15 += 0x4u;  /* 0C059EAA add #imm,Rn */
	r4 = 0x7u;  /* 0C059EAC mov #imm,Rn */
	IF(0x0C059EAEu); { u32 t_ = r8; PR = 0x0C059EB2u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C04F770, 0x0C04F770u, 0x0C059EB2u); }  /* 0C059EAE jsr @Rn */
L_0C059EB2: BLKS(0x0C059EB2u);
	r8 = 0xC050840u; UPD(0x0C059EB4u, 1);  /* 0C059EB2 mov.l @(disp,pc),Rn */
	IF(0x0C059EB4u); { u32 t_ = r8; PR = 0x0C059EB8u; IF(0x0C059EB6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C059EB8u); }  /* 0C059EB4 jsr @Rn */
L_0C059EB8: BLKS(0x0C059EB8u);
	T = (r9 & r9) == 0;  /* 0C059EB8 tst Rm,Rn */
	if (T) { UPD(0x0C059EBEu, 4); goto L_0C059EBE; }  /* 0C059EBA bt */
L_0C059EBC: BLKS(0x0C059EBCu);
	r9 += 0xFFFFFFFFu;  /* 0C059EBC add #imm,Rn */
	UPD(0x0C059EBEu, 1);
L_0C059EBE: BLKS(0x0C059EBEu);
	r5 = 0xC21F7F9u; UPD(0x0C059EC0u, 1);  /* 0C059EBE mov.l @(disp,pc),Rn */
	r2 = 0xFFFFFFF9u;  /* 0C059EC0 mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C059EC4u, 2);  /* 0C059EC2 mov.b @Rm,Rn */
	r8 = 0xFFFFFFFFu;  /* 0C059EC4 mov #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C059EC6 tst Rm,Rn */
	r0 = 0x80u; UPD(0x0C059ECAu, 3);  /* 0C059EC8 mov.w @(disp,pc),Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C059ECA negc Rm,Rn */
	r4 = 0xC27DDF4u; UPD(0x0C059ECEu, 2);  /* 0C059ECC mov.l @(disp,pc),Rn */
	IF(0x0C059ECEu); r0 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C059ED0u, 1);  /* 0C059ECE mov.b @(r0,Rm),Rn */
	IF(0x0C059ED0u); ARG0(0x402Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C059ED0 shad Rm,Rn */
	r0 &= 0x1u;  /* 0C059ED2 and #imm,r0 */
	r3 &= r0;  /* 0C059ED4 and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C059ED6 tst Rm,Rn */
	if (!T) { UPD(0x0C059EF4u, 7); goto L_0C059EF4; }  /* 0C059ED8 bf */
L_0C059EDA: BLKS(0x0C059EDAu);
	r0 = 0xC060C30u; UPD(0x0C059EDCu, 1);  /* 0C059EDA mov.l @(disp,pc),Rn */
	IF(0x0C059EDCu); { u32 t_ = r0; PR = 0x0C059EE0u; IF(0x0C059EDEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C060C30, 0x0C060C30u, 0x0C059EE0u); }  /* 0C059EDC jsr @Rn */
L_0C059EE0: BLKS(0x0C059EE0u);
	T = (r0 & r0) == 0;  /* 0C059EE0 tst Rm,Rn */
	{ u32 c_ = !T; T = (r9 & r9) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C059EF4u, 4); goto L_0C059EF4; } goto L_0C059EE6; }  /* 0C059EE2 bf/s */
L_0C059EE6: BLKS(0x0C059EE6u);
	r3 = 0xC21F589u; UPD(0x0C059EE8u, 2);  /* 0C059EE6 mov.l @(disp,pc),Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C059EE8 negc Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C059EECu, 2);  /* 0C059EEA mov.b @Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C059EEC tst Rm,Rn */
	IF(0x0C059EEEu); r6 = T;  /* 0C059EEE movt Rn */
	T = (r7 & r6) == 0;  /* 0C059EF0 tst Rm,Rn */
	if (!T) { UPD(0x0C059E72u, 6); goto L_0C059E72; }  /* 0C059EF2 bf */
L_0C059EF4: BLKS(0x0C059EF4u);
	r15 = r14;  /* 0C059EF4 mov Rm,Rn */
	IF(0x0C059EF6u); PR = R32(r15); r15 += 4; UPD(0x0C059EF8u, 2);  /* 0C059EF6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C059EFAu, 1);  /* 0C059EF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C059EFCu, 1);  /* 0C059EFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C059EFEu, 1);  /* 0C059EFC mov.l @Rm+,Rn */
	IF(0x0C059EFEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C059EFE rts */
}

/* FUN_0c059f60 */
void f_0C059F60(sh3_t *c)
{
	LOCALS;
L_0C059F60: BLKS(0x0C059F60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C059F62u, 1);  /* 0C059F60 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C059F64u, 1);  /* 0C059F62 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C059F66u, 1);  /* 0C059F64 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C059F68u, 1);  /* 0C059F66 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C059F6Au, 1);  /* 0C059F68 mov.l Rm,@-Rn */
	r8 = 0xC16180Bu; UPD(0x0C059F6Cu, 1);  /* 0C059F6A mov.l @(disp,pc),Rn */
	IF(0x0C059F6Cu); r15 -= 4; W32(r15, PR); UPD(0x0C059F6Eu, 1);  /* 0C059F6C sts.l pr,@-Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C059F70u, 1);  /* 0C059F6E mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C059F70 exts.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C059F72 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C059F7Cu, 5); goto L_0C059F7C; } goto L_0C059F78; }  /* 0C059F74 bf/s */
L_0C059F78: BLKS(0x0C059F78u);
	{ IF(0x0C059F7Au); ; /* slot nop */ UPD(0x0C05A080u, 4); goto L_0C05A080; }  /* 0C059F78 bra */
L_0C059F7C: BLKS(0x0C059F7Cu);
	r3 = 0x1u;  /* 0C059F7C mov #imm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C059F7E cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C059FB0u, 5); goto L_0C059FB0; } goto L_0C059F84; }  /* 0C059F80 bt/s */
L_0C059F84: BLKS(0x0C059F84u);
	T = (r0 & r0) == 0;  /* 0C059F84 tst Rm,Rn */
	if (T) { UPD(0x0C059FA0u, 5); goto L_0C059FA0; }  /* 0C059F86 bt */
L_0C059F88: BLKS(0x0C059F88u);
	r6 = 0xC16180Bu; UPD(0x0C059F8Au, 1);  /* 0C059F88 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C059F8Cu, 1);  /* 0C059F8A mov.b @Rm,Rn */
	r15 = r14;  /* 0C059F8C mov Rm,Rn */
	IF(0x0C059F8Eu); PR = R32(r15); r15 += 4; UPD(0x0C059F90u, 2);  /* 0C059F8E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C059F92u, 1);  /* 0C059F90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C059F94u, 1);  /* 0C059F92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C059F96u, 1);  /* 0C059F94 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C059F98u, 1);  /* 0C059F96 mov.l @Rm+,Rn */
	IF(0x0C059F98u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C059F98 rts */
L_0C059FA0: BLKS(0x0C059FA0u);
	r3 = 0xC28628Cu; UPD(0x0C059FA2u, 1);  /* 0C059FA0 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C059FA4u, 1);  /* 0C059FA2 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C059FA4 tst Rm,Rn */
	{ u32 c_ = T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C059F88u, 4); goto L_0C059F88; } UPD(0x0C059FAAu, 1); goto L_0C059FAA; }  /* 0C059FA6 bt/s */
L_0C059FAA: BLKS(0x0C059FAAu);
	r1 += 0x1u;  /* 0C059FAA add #imm,Rn */
	{ W8(r8, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C059F88u, 4); goto L_0C059F88; }  /* 0C059FAC bra */
L_0C059FB0: BLKS(0x0C059FB0u);
	if (!T) { UPD(0x0C059F88u, 3); goto L_0C059F88; }  /* 0C059FB0 bf */
L_0C059FB2: BLKS(0x0C059FB2u);
	r10 = 0xC1F60FCu; UPD(0x0C059FB4u, 1);  /* 0C059FB2 mov.l @(disp,pc),Rn */
	r5 = 0x1D3u; UPD(0x0C059FB6u, 1);  /* 0C059FB4 mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r10); UPD(0x0C059FB8u, 1);  /* 0C059FB6 mov.w @Rm,Rn */
	T = (s32)r6 > (s32)r5;  /* 0C059FB8 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C059FFAu, 4); goto L_0C059FFA; }  /* 0C059FBA bt */
L_0C059FBC: BLKS(0x0C059FBCu);
	r11 = r10;  /* 0C059FBC mov Rm,Rn */
	r9 = 0xC28651Cu; UPD(0x0C059FC0u, 2);  /* 0C059FBE mov.l @(disp,pc),Rn */
	r8 = 0xC26C8D8u; UPD(0x0C059FC2u, 1);  /* 0C059FC0 mov.l @(disp,pc),Rn */
	r6 = 0xFFFFFFFFu;  /* 0C059FC2 mov #imm,Rn */
	UPD(0x0C059FC4u, 1);
L_0C059FC4: BLKS(0x0C059FC4u);
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C059FC6u, 1);  /* 0C059FC4 mov.w @Rm,Rn */
	r0 = (u32)(s32)(s16)r7;  /* 0C059FC6 exts.w Rm,Rn */
	IF(0x0C059FC8u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C059FCAu, 2);  /* 0C059FC8 mov.b @(r0,Rm),Rn */
	r2 = r0;  /* 0C059FCA mov Rm,Rn */
	IF(0x0C059FCCu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C059FCEu, 2);  /* 0C059FCC mov.b @(r0,Rm),Rn */
	r2 += r9;  /* 0C059FCE add Rm,Rn */
	T = r3 == r4;  /* 0C059FD0 cmp/eq Rm,Rn */
	r2 += 0x1u;  /* 0C059FD2 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C059FD6u, 4);  /* 0C059FD4 mov.b @Rm,Rn */
	r0 += r8;  /* 0C059FD6 add Rm,Rn */
	r0 += 0x1u;  /* 0C059FD8 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C059FDCu, 3);  /* 0C059FDA mov.b @Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C059FDC negc Rm,Rn */
	T = r2 == r3;  /* 0C059FDE cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C059FE0 negc Rm,Rn */
	r4 |= r2;  /* 0C059FE2 or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C059FE4 tst Rm,Rn */
	{ u32 c_ = !T; r5 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05A010u, 8); goto L_0C05A010; } goto L_0C059FEA; }  /* 0C059FE6 bf/s */
L_0C059FEA: BLKS(0x0C059FEAu);
	r2 = r7;  /* 0C059FEA mov Rm,Rn */
	r2 += 0x2u;  /* 0C059FEC add #imm,Rn */
	r5 = 0x1D3u; UPD(0x0C059FF0u, 4);  /* 0C059FEE mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r2;  /* 0C059FF0 exts.w Rm,Rn */
	T = (s32)r4 > (s32)r5;  /* 0C059FF2 cmp/gt Rm,Rn */
	r10 = 0xC1F60FCu; UPD(0x0C059FF6u, 3);  /* 0C059FF4 mov.l @(disp,pc),Rn */
	{ u32 c_ = !T; W16(r11, r2); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C059FC4u, 3); goto L_0C059FC4; } UPD(0x0C059FFAu, 1); goto L_0C059FFA; }  /* 0C059FF6 bf/s */
L_0C059FFA: BLKS(0x0C059FFAu);
	r1 = 0xC16180Bu; UPD(0x0C059FFCu, 1);  /* 0C059FFA mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C059FFC mov #imm,Rn */
	r11 = 0xC28628Cu; UPD(0x0C05A000u, 2);  /* 0C059FFE mov.l @(disp,pc),Rn */
	W8(r1, r9); UPD(0x0C05A002u, 1);  /* 0C05A000 mov.b Rm,@Rn */
	{ W8(r11, r9); /* slot mov.b Rm,@Rn */ UPD(0x0C059F88u, 3); goto L_0C059F88; }  /* 0C05A002 bra */
L_0C05A010: BLKS(0x0C05A010u);
	r0 = 0xC21F7F9u; UPD(0x0C05A012u, 1);  /* 0C05A010 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r0); UPD(0x0C05A014u, 1);  /* 0C05A012 mov.b @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C05A014 tst Rm,Rn */
	if (!T) { UPD(0x0C05A050u, 4); goto L_0C05A050; }  /* 0C05A016 bf */
L_0C05A018: BLKS(0x0C05A018u);
	r3 = (u32)(s32)(s16)r5;  /* 0C05A018 exts.w Rm,Rn */
	r0 = r3;  /* 0C05A01A mov Rm,Rn */
	IF(0x0C05A01Cu); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C05A01C rotl Rn */
	IF(0x0C05A01Eu); r7 = T;  /* 0C05A01E movt Rn */
	r4 = r3;  /* 0C05A020 mov Rm,Rn */
	r10 = 0xC04C23Cu; UPD(0x0C05A024u, 6);  /* 0C05A022 mov.l @(disp,pc),Rn */
	r3 += r7;  /* 0C05A024 add Rm,Rn */
	IF(0x0C05A026u); T = r3 & 1; r3 >>= 1;  /* 0C05A026 shlr Rn */
	r4 += r8;  /* 0C05A028 add Rm,Rn */
	r5 = r3 & 0xFF;  /* 0C05A02A extu.b Rm,Rn */
	IF(0x0C05A02Cu); { u32 t_ = r10; PR = 0x0C05A030u; r6 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 6); CALLP(t_, f_0C04C23C, 0x0C04C23Cu, 0x0C05A030u); }  /* 0C05A02C jsr @Rn */
L_0C05A030: BLKS(0x0C05A030u);
	r10 = (u32)(s32)(s16)R16(r11); UPD(0x0C05A032u, 1);  /* 0C05A030 mov.w @Rm,Rn */
	r4 = r9;  /* 0C05A032 mov Rm,Rn */
	r0 = (u32)(s32)(s16)r10;  /* 0C05A034 exts.w Rm,Rn */
	IF(0x0C05A036u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C05A038u, 3);  /* 0C05A036 mov.b @(r0,Rm),Rn */
	r4 += r0;  /* 0C05A038 add Rm,Rn */
	IF(0x0C05A03Au); W8(r0 + r9, r2); UPD(0x0C05A03Cu, 2);  /* 0C05A03A mov.b Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C05A03C add #imm,Rn */
	r0 += r8;  /* 0C05A03E add Rm,Rn */
	r0 += 0x1u;  /* 0C05A040 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r0); UPD(0x0C05A044u, 4);  /* 0C05A042 mov.b @Rm,Rn */
	r10 += 0x2u;  /* 0C05A044 add #imm,Rn */
	W8(r4, r8); UPD(0x0C05A048u, 2);  /* 0C05A046 mov.b Rm,@Rn */
	{ W16(r11, r10); /* slot mov.w Rm,@Rn */ UPD(0x0C059F88u, 3); goto L_0C059F88; }  /* 0C05A048 bra */
L_0C05A050: BLKS(0x0C05A050u);
	r0 = 0xC050CD0u; UPD(0x0C05A052u, 1);  /* 0C05A050 mov.l @(disp,pc),Rn */
	r5 = 0x26u;  /* 0C05A052 mov #imm,Rn */
	r4 = 0xC161800u; UPD(0x0C05A056u, 2);  /* 0C05A054 mov.l @(disp,pc),Rn */
	r7 = 0x40C04000u; UPD(0x0C05A058u, 1);  /* 0C05A056 mov.l @(disp,pc),Rn */
	IF(0x0C05A058u); { u32 t_ = r0; PR = 0x0C05A05Cu; r6 = 0xBu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05A05Cu); }  /* 0C05A058 jsr @Rn */
L_0C05A05C: BLKS(0x0C05A05Cu);
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C05A05Eu, 1);  /* 0C05A05C mov.w @Rm,Rn */
	r6 = r4;  /* 0C05A05E mov Rm,Rn */
	IF(0x0C05A060u); T = r6 >> 31; r6 = (r6 << 1) | T;  /* 0C05A060 rotl Rn */
	r0 = 0xC050A80u; UPD(0x0C05A064u, 3);  /* 0C05A062 mov.l @(disp,pc),Rn */
	IF(0x0C05A064u); r5 = T;  /* 0C05A064 movt Rn */
	r4 += r5;  /* 0C05A066 add Rm,Rn */
	r5 = 0x26u;  /* 0C05A068 mov #imm,Rn */
	IF(0x0C05A06Au); T = r4 & 1; r4 = (u32)((s32)r4 >> 1);  /* 0C05A06A shar Rn */
	IF(0x0C05A06Cu); { u32 t_ = r0; PR = 0x0C05A070u; r6 = 0x16u; /* slot mov #imm,Rn */ UPD(t_, 6); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05A070u); }  /* 0C05A06C jsr @Rn */
L_0C05A070: BLKS(0x0C05A070u);
	{ r5 = (u32)(s32)(s16)R16(r10); /* slot mov.w @Rm,Rn */ UPD(0x0C05A018u, 3); goto L_0C05A018; }  /* 0C05A070 bra */
L_0C05A080: BLKS(0x0C05A080u);
	r9 = 0xC055B90u; UPD(0x0C05A082u, 1);  /* 0C05A080 mov.l @(disp,pc),Rn */
	IF(0x0C05A082u); { u32 t_ = r9; PR = 0x0C05A086u; IF(0x0C05A084u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C055B90, 0x0C055B90u, 0x0C05A086u); }  /* 0C05A082 jsr @Rn */
L_0C05A086: BLKS(0x0C05A086u);
	r4 = 0xC1F60FCu; UPD(0x0C05A088u, 1);  /* 0C05A086 mov.l @(disp,pc),Rn */
	r1 = 0x40u;  /* 0C05A088 mov #imm,Rn */
	W16(r4, r1); UPD(0x0C05A08Cu, 2);  /* 0C05A08A mov.w Rm,@Rn */
	{ r1 = (u32)(s32)(s8)R8(r8); /* slot mov.b @Rm,Rn */ UPD(0x0C059FAAu, 3); goto L_0C059FAA; }  /* 0C05A08C bra */
}

/* FUN_0c05a0d0 */
void f_0C05A0D0(sh3_t *c)
{
	LOCALS;
L_0C05A0D0: BLKS(0x0C05A0D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05A0D2u, 1);  /* 0C05A0D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05A0D4u, 1);  /* 0C05A0D2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05A0D6u, 1);  /* 0C05A0D4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05A0D8u, 1);  /* 0C05A0D6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05A0DAu, 1);  /* 0C05A0D8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05A0DCu, 1);  /* 0C05A0DA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05A0DEu, 1);  /* 0C05A0DC mov.l Rm,@-Rn */
	r2 = 0xC21F589u; UPD(0x0C05A0E0u, 1);  /* 0C05A0DE mov.l @(disp,pc),Rn */
	IF(0x0C05A0E0u); r15 -= 4; W32(r15, PR); UPD(0x0C05A0E2u, 1);  /* 0C05A0E0 sts.l pr,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C05A0E4u, 1);  /* 0C05A0E2 mov.b @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C05A0E4 add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C05A0E6 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05A0F0u, 5); goto L_0C05A0F0; } goto L_0C05A0EC; }  /* 0C05A0E8 bt/s */
L_0C05A0EC: BLKS(0x0C05A0ECu);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C05A1ECu, 4); goto L_0C05A1EC; }  /* 0C05A0EC bra */
L_0C05A0F0: BLKS(0x0C05A0F0u);
	r7 = 0xC275DD1u; UPD(0x0C05A0F2u, 1);  /* 0C05A0F0 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C05A0F2 mov #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C05A0F6u, 2);  /* 0C05A0F4 mov.b @Rm,Rn */
	r10 = 0xDu;  /* 0C05A0F6 mov #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C05A0F8 extu.b Rm,Rn */
	r5 = 0xC16187Cu; UPD(0x0C05A0FCu, 3);  /* 0C05A0FA mov.l @(disp,pc),Rn */
	IF(0x0C05A0FCu); r0 <<= 2;  /* 0C05A0FC shll2 Rn */
	IF(0x0C05A0FEu); r4 = R32(r0 + r5); UPD(0x0C05A100u, 2);  /* 0C05A0FE mov.l @(r0,Rm),Rn */
	r3 = 0xC283CA4u; UPD(0x0C05A102u, 1);  /* 0C05A100 mov.l @(disp,pc),Rn */
	r0 = 0xC3929E0u; UPD(0x0C05A104u, 1);  /* 0C05A102 mov.l @(disp,pc),Rn */
	r13 = 0xF0u; UPD(0x0C05A106u, 1);  /* 0C05A104 mov.w @(disp,pc),Rn */
	r11 = 0xC050CD0u; UPD(0x0C05A108u, 1);  /* 0C05A106 mov.l @(disp,pc),Rn */
	W32(r14, r4); UPD(0x0C05A10Au, 1);  /* 0C05A108 mov.l Rm,@Rn */
	W32(r3, r12); UPD(0x0C05A10Cu, 1);  /* 0C05A10A mov.l Rm,@Rn */
	W32(r0, r12); UPD(0x0C05A10Eu, 1);  /* 0C05A10C mov.l Rm,@Rn */
L_0C05A10E: BLKS(0x0C05A10Eu);
	r9 = 0xC04F330u; UPD(0x0C05A110u, 1);  /* 0C05A10E mov.l @(disp,pc),Rn */
	r8 = 0xC04F930u; UPD(0x0C05A112u, 1);  /* 0C05A110 mov.l @(disp,pc),Rn */
	IF(0x0C05A112u); { u32 t_ = r9; PR = 0x0C05A116u; IF(0x0C05A114u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C05A116u); }  /* 0C05A112 jsr @Rn */
L_0C05A116: BLKS(0x0C05A116u);
	r9 = 0xC050650u; UPD(0x0C05A118u, 1);  /* 0C05A116 mov.l @(disp,pc),Rn */
	IF(0x0C05A118u); { u32 t_ = r8; PR = 0x0C05A11Cu; IF(0x0C05A11Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C05A11Cu); }  /* 0C05A118 jsr @Rn */
L_0C05A11C: BLKS(0x0C05A11Cu);
	r8 = 0xC0505F0u; UPD(0x0C05A11Eu, 1);  /* 0C05A11C mov.l @(disp,pc),Rn */
	r4 = 0xFFFFFFu; UPD(0x0C05A120u, 1);  /* 0C05A11E mov.l @(disp,pc),Rn */
	IF(0x0C05A120u); { u32 t_ = r9; PR = 0x0C05A124u; IF(0x0C05A122u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050650, 0x0C050650u, 0x0C05A124u); }  /* 0C05A120 jsr @Rn */
L_0C05A124: BLKS(0x0C05A124u);
	IF(0x0C05A124u); { u32 t_ = r8; PR = 0x0C05A128u; IF(0x0C05A126u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C05A128u); }  /* 0C05A124 jsr @Rn */
L_0C05A128: BLKS(0x0C05A128u);
	r9 = R32(r14); UPD(0x0C05A12Au, 1);  /* 0C05A128 mov.l @Rm,Rn */
	r8 = 0x0u;  /* 0C05A12A mov #imm,Rn */
	UPD(0x0C05A12Cu, 1);
L_0C05A12C: BLKS(0x0C05A12Cu);
	r5 = 0u - r8;  /* 0C05A12C neg Rm,Rn */
	r5 += 0xEu;  /* 0C05A12E add #imm,Rn */
	{ u32 v_ = R32(r9); r9 += 4; r4 = v_; } UPD(0x0C05A132u, 3);  /* 0C05A130 mov.l @Rm+,Rn */
	r7 = 0x80808000u; UPD(0x0C05A134u, 1);  /* 0C05A132 mov.l @(disp,pc),Rn */
	IF(0x0C05A134u); { u32 t_ = r11; PR = 0x0C05A138u; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05A138u); }  /* 0C05A134 jsr @Rn */
L_0C05A138: BLKS(0x0C05A138u);
	r2 = r8;  /* 0C05A138 mov Rm,Rn */
	r2 += 0x1u;  /* 0C05A13A add #imm,Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C05A13C exts.w Rm,Rn */
	T = (s32)r8 > (s32)r10;  /* 0C05A13E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C05A12Cu, 7); goto L_0C05A12C; }  /* 0C05A140 bf */
L_0C05A142: BLKS(0x0C05A142u);
	r15 += 0xFFFFFFFCu;  /* 0C05A142 add #imm,Rn */
	r1 = 0xC161526u; UPD(0x0C05A146u, 2);  /* 0C05A144 mov.l @(disp,pc),Rn */
	r3 = 0xC393044u; UPD(0x0C05A148u, 1);  /* 0C05A146 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C05A148 mov #imm,Rn */
	r0 = 0xC161508u; UPD(0x0C05A14Cu, 2);  /* 0C05A14A mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C05A14C mov #imm,Rn */
	r7 = 0xC2175E8u; UPD(0x0C05A150u, 2);  /* 0C05A14E mov.l @(disp,pc),Rn */
	r2 = 0xC062A70u; UPD(0x0C05A152u, 1);  /* 0C05A150 mov.l @(disp,pc),Rn */
	W32(r3, r1); UPD(0x0C05A154u, 1);  /* 0C05A152 mov.l Rm,@Rn */
	W32(r7, r0); UPD(0x0C05A156u, 1);  /* 0C05A154 mov.l Rm,@Rn */
	r5 = 0xC80000u; UPD(0x0C05A158u, 1);  /* 0C05A156 mov.l @(disp,pc),Rn */
	r6 = 0x780000u; UPD(0x0C05A15Au, 1);  /* 0C05A158 mov.l @(disp,pc),Rn */
	r7 = 0x808080u; UPD(0x0C05A15Cu, 1);  /* 0C05A15A mov.l @(disp,pc),Rn */
	IF(0x0C05A15Cu); { u32 t_ = r2; PR = 0x0C05A160u; W32(r15, r9); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C05A160u); }  /* 0C05A15C jsr @Rn */
L_0C05A160: BLKS(0x0C05A160u);
	r6 = 0xC161512u; UPD(0x0C05A162u, 1);  /* 0C05A160 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C05A162 mov #imm,Rn */
	r5 = 0xC2175E8u; UPD(0x0C05A166u, 2);  /* 0C05A164 mov.l @(disp,pc),Rn */
	r8 = 0xC062A70u; UPD(0x0C05A168u, 1);  /* 0C05A166 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C05A16Au, 1);  /* 0C05A168 mov.l Rm,@Rn */
	r7 = 0x808080u; UPD(0x0C05A16Cu, 1);  /* 0C05A16A mov.l @(disp,pc),Rn */
	r5 = 0x280000u; UPD(0x0C05A16Eu, 1);  /* 0C05A16C mov.l @(disp,pc),Rn */
	r6 = 0x780000u; UPD(0x0C05A170u, 1);  /* 0C05A16E mov.l @(disp,pc),Rn */
	IF(0x0C05A170u); { u32 t_ = r8; PR = 0x0C05A174u; W32(r15, r9); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C05A174u); }  /* 0C05A170 jsr @Rn */
L_0C05A174: BLKS(0x0C05A174u);
	r4 = 0xC27DDA8u; UPD(0x0C05A176u, 1);  /* 0C05A174 mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C05A176 add #imm,Rn */
	r4 += 0x5u;  /* 0C05A178 add #imm,Rn */
	r9 = 0xC7C0B2Cu; UPD(0x0C05A17Cu, 3);  /* 0C05A17A mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C05A17C mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C05A180u, 2);  /* 0C05A17E mov.b @Rm,Rn */
	r6 = 0xAu;  /* 0C05A180 mov #imm,Rn */
	IF(0x0C05A182u); { u32 t_ = r9; PR = 0x0C05A186u; r4 = r3 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C7C0B2C, 0x0C7C0B2Cu, 0x0C05A186u); }  /* 0C05A182 jsr @Rn */
L_0C05A186: BLKS(0x0C05A186u);
	r0 = 0xC27DDACu; UPD(0x0C05A188u, 1);  /* 0C05A186 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C05A188 mov #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r0); UPD(0x0C05A18Cu, 2);  /* 0C05A18A mov.b @Rm,Rn */
	r6 = 0xDu;  /* 0C05A18C mov #imm,Rn */
	IF(0x0C05A18Eu); { u32 t_ = r9; PR = 0x0C05A192u; r4 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05A192u); }  /* 0C05A18E jsr @Rn */
L_0C05A192: BLKS(0x0C05A192u);
	IF(0x0C05A192u); T = (s32)r12 >= 0;  /* 0C05A192 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05A200u, 4); goto L_0C05A200; } UPD(0x0C05A198u, 1); goto L_0C05A198; }  /* 0C05A194 bf/s */
L_0C05A198: BLKS(0x0C05A198u);
	r6 = 0xEu;  /* 0C05A198 mov #imm,Rn */
	IF(0x0C05A19Au); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C05A19A shld Rm,Rn */
	r8 = 0xC04F770u; UPD(0x0C05A19Eu, 3);  /* 0C05A19C mov.l @(disp,pc),Rn */
	r9 = (r5 >> 16) | (r5 << 16);  /* 0C05A19E swap.w Rm,Rn */
	r4 = 0x7u;  /* 0C05A1A0 mov #imm,Rn */
	IF(0x0C05A1A2u); { u32 t_ = r8; PR = 0x0C05A1A6u; r5 = (u32)(s32)(s16)r9; /* slot exts.w Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C04F770, 0x0C04F770u, 0x0C05A1A6u); }  /* 0C05A1A2 jsr @Rn */
L_0C05A1A6: BLKS(0x0C05A1A6u);
	r4 = 0x1Bu;  /* 0C05A1A6 mov #imm,Rn */
	T = (s32)r12 > (s32)r4;  /* 0C05A1A8 cmp/gt Rm,Rn */
	{ u32 c_ = T; r5 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05A1B2u, 5); goto L_0C05A1B2; } goto L_0C05A1AE; }  /* 0C05A1AA bt/s */
L_0C05A1AE: BLKS(0x0C05A1AEu);
	r5 += 0x1u;  /* 0C05A1AE add #imm,Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C05A1B0 exts.w Rm,Rn */
	UPD(0x0C05A1B2u, 3);
L_0C05A1B2: BLKS(0x0C05A1B2u);
	r8 = 0xC050840u; UPD(0x0C05A1B4u, 1);  /* 0C05A1B2 mov.l @(disp,pc),Rn */
	IF(0x0C05A1B4u); { u32 t_ = r8; PR = 0x0C05A1B8u; IF(0x0C05A1B6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C05A1B8u); }  /* 0C05A1B4 jsr @Rn */
L_0C05A1B8: BLKS(0x0C05A1B8u);
	T = (r13 & r13) == 0;  /* 0C05A1B8 tst Rm,Rn */
	if (T) { UPD(0x0C05A1BEu, 4); goto L_0C05A1BE; }  /* 0C05A1BA bt */
L_0C05A1BC: BLKS(0x0C05A1BCu);
	r13 += 0xFFFFFFFFu;  /* 0C05A1BC add #imm,Rn */
	UPD(0x0C05A1BEu, 1);
L_0C05A1BE: BLKS(0x0C05A1BEu);
	r3 = 0xC21F7F9u; UPD(0x0C05A1C0u, 1);  /* 0C05A1BE mov.l @(disp,pc),Rn */
	r2 = 0xFFFFFFF9u;  /* 0C05A1C0 mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C05A1C4u, 2);  /* 0C05A1C2 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05A1C4 tst Rm,Rn */
	r0 = 0x80u; UPD(0x0C05A1C8u, 2);  /* 0C05A1C6 mov.w @(disp,pc),Rn */
	r3 = 0xFFFFFFFFu;  /* 0C05A1C8 mov #imm,Rn */
	r4 = 0xC27DDF4u; UPD(0x0C05A1CCu, 2);  /* 0C05A1CA mov.l @(disp,pc),Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C05A1CC negc Rm,Rn */
	IF(0x0C05A1CEu); r0 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C05A1D0u, 2);  /* 0C05A1CE mov.b @(r0,Rm),Rn */
	IF(0x0C05A1D0u); ARG0(0x402Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C05A1D0 shad Rm,Rn */
	r0 &= 0x1u;  /* 0C05A1D2 and #imm,r0 */
	r7 &= r0;  /* 0C05A1D4 and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C05A1D6 tst Rm,Rn */
	if (!T) { UPD(0x0C05A1EAu, 7); goto L_0C05A1EA; }  /* 0C05A1D8 bf */
L_0C05A1DA: BLKS(0x0C05A1DAu);
	T = (r13 & r13) == 0;  /* 0C05A1DA tst Rm,Rn */
	r8 = 0xC21F589u; UPD(0x0C05A1DEu, 2);  /* 0C05A1DC mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C05A1E0u, 1);  /* 0C05A1DE mov.b @Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C05A1E0 negc Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C05A1E2 tst Rm,Rn */
	IF(0x0C05A1E4u); r9 = T;  /* 0C05A1E4 movt Rn */
	T = (r6 & r9) == 0;  /* 0C05A1E6 tst Rm,Rn */
	if (!T) { UPD(0x0C05A10Eu, 7); goto L_0C05A10E; }  /* 0C05A1E8 bf */
L_0C05A1EA: BLKS(0x0C05A1EAu);
	r14 += 0x4u;  /* 0C05A1EA add #imm,Rn */
	UPD(0x0C05A1ECu, 1);
L_0C05A1EC: BLKS(0x0C05A1ECu);
	r15 = r14;  /* 0C05A1EC mov Rm,Rn */
	IF(0x0C05A1EEu); PR = R32(r15); r15 += 4; UPD(0x0C05A1F0u, 2);  /* 0C05A1EE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05A1F2u, 1);  /* 0C05A1F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05A1F4u, 1);  /* 0C05A1F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05A1F6u, 1);  /* 0C05A1F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05A1F8u, 1);  /* 0C05A1F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05A1FAu, 1);  /* 0C05A1F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05A1FCu, 1);  /* 0C05A1FA mov.l @Rm+,Rn */
	IF(0x0C05A1FCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05A1FC rts */
L_0C05A200: BLKS(0x0C05A200u);
	{ r5 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C05A198u, 3); goto L_0C05A198; }  /* 0C05A200 bra */
}

/* FUN_0c05a280 */
void f_0C05A280(sh3_t *c)
{
	LOCALS;
L_0C05A280: BLKS(0x0C05A280u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05A282u, 1);  /* 0C05A280 mov.l Rm,@-Rn */
	r1 = 0x8u;  /* 0C05A282 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05A286u, 2);  /* 0C05A284 mov.l Rm,@-Rn */
	r0 = 0xFFFFFFFFu;  /* 0C05A286 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05A28Au, 2);  /* 0C05A288 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05A28Cu, 1);  /* 0C05A28A mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C05A28C mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05A290u, 2);  /* 0C05A28E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05A292u, 1);  /* 0C05A290 mov.l Rm,@-Rn */
	r3 = 0xC286277u; UPD(0x0C05A294u, 1);  /* 0C05A292 mov.l @(disp,pc),Rn */
	IF(0x0C05A294u); r15 -= 4; W32(r15, PR); UPD(0x0C05A296u, 1);  /* 0C05A294 sts.l pr,@-Rn */
	r5 = 0xC283794u; UPD(0x0C05A298u, 1);  /* 0C05A296 mov.l @(disp,pc),Rn */
	W8(r3, r1); UPD(0x0C05A29Au, 1);  /* 0C05A298 mov.b Rm,@Rn */
	r2 = R32(r5); UPD(0x0C05A29Cu, 1);  /* 0C05A29A mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C05A29C tst Rm,Rn */
	{ u32 t_ = 0u - r0, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C05A29E negc Rm,Rn */
	r0 = 0x280u; UPD(0x0C05A2A2u, 3);  /* 0C05A2A0 mov.w @(disp,pc),Rn */
	IF(0x0C05A2A2u); r4 = R32(r0 + r5); UPD(0x0C05A2A4u, 1);  /* 0C05A2A2 mov.l @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C05A2A4 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05A2AEu, 4); goto L_0C05A2AE; } goto L_0C05A2AA; }  /* 0C05A2A6 bf/s */
L_0C05A2AA: BLKS(0x0C05A2AAu);
	{ r0 = r3; /* slot mov Rm,Rn */ UPD(0x0C05A610u, 4); goto L_0C05A610; }  /* 0C05A2AA bra */
L_0C05A2AE: BLKS(0x0C05A2AEu);
	r0 = r3;  /* 0C05A2AE mov Rm,Rn */
	r0 += 0x2u;  /* 0C05A2B0 add #imm,Rn */
	UPD(0x0C05A2B2u, 2);
L_0C05A2B2: BLKS(0x0C05A2B2u);
	r8 = 0xC161884u; UPD(0x0C05A2B4u, 1);  /* 0C05A2B2 mov.l @(disp,pc),Rn */
	r0 &= 0x3u;  /* 0C05A2B4 and #imm,r0 */
	IF(0x0C05A2B6u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C05A2B8u, 2);  /* 0C05A2B6 mov.b @(r0,Rm),Rn */
	r7 = 0xC22486Eu; UPD(0x0C05A2BAu, 1);  /* 0C05A2B8 mov.l @(disp,pc),Rn */
	r0 = r6 & 0xFF;  /* 0C05A2BA extu.b Rm,Rn */
	W8(r7, r6); UPD(0x0C05A2BEu, 2);  /* 0C05A2BC mov.b Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C05A2BE tst Rm,Rn */
	{ u32 c_ = !T; r8 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05A2C8u, 4); goto L_0C05A2C8; } goto L_0C05A2C4; }  /* 0C05A2C0 bf/s */
L_0C05A2C4: BLKS(0x0C05A2C4u);
	{ IF(0x0C05A2C6u); ; /* slot nop */ UPD(0x0C05A566u, 4); goto L_0C05A566; }  /* 0C05A2C4 bra */
L_0C05A2C8: BLKS(0x0C05A2C8u);
	T = r0 == 0xFu;  /* 0C05A2C8 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C05A2D0u, 4); goto L_0C05A2D0; }  /* 0C05A2CA bf */
L_0C05A2CC: BLKS(0x0C05A2CCu);
	{ IF(0x0C05A2CEu); ; /* slot nop */ UPD(0x0C05A600u, 3); goto L_0C05A600; }  /* 0C05A2CC bra */
L_0C05A2D0: BLKS(0x0C05A2D0u);
	r11 = 0xC050D70u; UPD(0x0C05A2D2u, 1);  /* 0C05A2D0 mov.l @(disp,pc),Rn */
L_0C05A2D2: BLKS(0x0C05A2D2u);
	r12 = 0xC7C00F0u; UPD(0x0C05A2D4u, 1);  /* 0C05A2D2 mov.l @(disp,pc),Rn */
	r9 = 0xC0613E0u; UPD(0x0C05A2D6u, 1);  /* 0C05A2D4 mov.l @(disp,pc),Rn */
	IF(0x0C05A2D6u); { u32 t_ = r12; PR = 0x0C05A2DAu; IF(0x0C05A2D8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C7C00F0, 0x0C7C00F0u, 0x0C05A2DAu); }  /* 0C05A2D6 jsr @Rn */
L_0C05A2DA: BLKS(0x0C05A2DAu);
	r8 = 0xC0AE410u; UPD(0x0C05A2DCu, 1);  /* 0C05A2DA mov.l @(disp,pc),Rn */
	IF(0x0C05A2DCu); { u32 t_ = r9; PR = 0x0C05A2E0u; IF(0x0C05A2DEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0613E0, 0x0C0613E0u, 0x0C05A2E0u); }  /* 0C05A2DC jsr @Rn */
L_0C05A2E0: BLKS(0x0C05A2E0u);
	r12 = 0xC7C38D8u; UPD(0x0C05A2E2u, 1);  /* 0C05A2E0 mov.l @(disp,pc),Rn */
	IF(0x0C05A2E2u); { u32 t_ = r8; PR = 0x0C05A2E6u; IF(0x0C05A2E4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AE410, 0x0C0AE410u, 0x0C05A2E6u); }  /* 0C05A2E2 jsr @Rn */
L_0C05A2E6: BLKS(0x0C05A2E6u);
	r9 = 0xC05B5C0u; UPD(0x0C05A2E8u, 1);  /* 0C05A2E6 mov.l @(disp,pc),Rn */
	IF(0x0C05A2E8u); { u32 t_ = r12; PR = 0x0C05A2ECu; IF(0x0C05A2EAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C06C5D0, 0x0C06C5D0u, 0x0C05A2ECu); }  /* 0C05A2E8 jsr @Rn */
L_0C05A2EC: BLKS(0x0C05A2ECu);
	r12 = 0xC05B570u; UPD(0x0C05A2EEu, 1);  /* 0C05A2EC mov.l @(disp,pc),Rn */
	r8 = 0xC0AD0F0u; UPD(0x0C05A2F0u, 1);  /* 0C05A2EE mov.l @(disp,pc),Rn */
	IF(0x0C05A2F0u); { u32 t_ = r12; PR = 0x0C05A2F4u; IF(0x0C05A2F2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B570, 0x0C05B570u, 0x0C05A2F4u); }  /* 0C05A2F0 jsr @Rn */
L_0C05A2F4: BLKS(0x0C05A2F4u);
	IF(0x0C05A2F4u); { u32 t_ = r9; PR = 0x0C05A2F8u; IF(0x0C05A2F6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B5C0, 0x0C05B5C0u, 0x0C05A2F8u); }  /* 0C05A2F4 jsr @Rn */
L_0C05A2F8: BLKS(0x0C05A2F8u);
	IF(0x0C05A2F8u); { u32 t_ = r8; PR = 0x0C05A2FCu; IF(0x0C05A2FAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AD0F0, 0x0C0AD0F0u, 0x0C05A2FCu); }  /* 0C05A2F8 jsr @Rn */
L_0C05A2FC: BLKS(0x0C05A2FCu);
	r9 = 0xC05B3E0u; UPD(0x0C05A2FEu, 1);  /* 0C05A2FC mov.l @(disp,pc),Rn */
	IF(0x0C05A2FEu); { u32 t_ = r12; PR = 0x0C05A302u; IF(0x0C05A300u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B570, 0x0C05B570u, 0x0C05A302u); }  /* 0C05A2FE jsr @Rn */
L_0C05A302: BLKS(0x0C05A302u);
	r8 = 0xC0AED70u; UPD(0x0C05A304u, 1);  /* 0C05A302 mov.l @(disp,pc),Rn */
	IF(0x0C05A304u); { u32 t_ = r9; PR = 0x0C05A308u; IF(0x0C05A306u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B3E0, 0x0C05B3E0u, 0x0C05A308u); }  /* 0C05A304 jsr @Rn */
L_0C05A308: BLKS(0x0C05A308u);
	IF(0x0C05A308u); { u32 t_ = r8; PR = 0x0C05A30Cu; IF(0x0C05A30Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AED70, 0x0C0AED70u, 0x0C05A30Cu); }  /* 0C05A308 jsr @Rn */
L_0C05A30C: BLKS(0x0C05A30Cu);
	r5 = 0xC392D50u; UPD(0x0C05A30Eu, 1);  /* 0C05A30C mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s8)R8(r5); UPD(0x0C05A310u, 1);  /* 0C05A30E mov.b @Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C05A310 tst Rm,Rn */
	if (T) { UPD(0x0C05A318u, 4); goto L_0C05A318; }  /* 0C05A312 bt */
L_0C05A314: BLKS(0x0C05A314u);
	{ IF(0x0C05A316u); ; /* slot nop */ UPD(0x0C05A5F0u, 3); goto L_0C05A5F0; }  /* 0C05A314 bra */
L_0C05A318: BLKS(0x0C05A318u);
	r12 = 0xC0AFCA0u; UPD(0x0C05A31Au, 1);  /* 0C05A318 mov.l @(disp,pc),Rn */
	IF(0x0C05A31Au); ;  /* 0C05A31A nop */
	UPD(0x0C05A31Cu, 1);
L_0C05A31C: BLKS(0x0C05A31Cu);
	r9 = 0xC04F330u; UPD(0x0C05A31Eu, 1);  /* 0C05A31C mov.l @(disp,pc),Rn */
	r8 = 0xC04F930u; UPD(0x0C05A320u, 1);  /* 0C05A31E mov.l @(disp,pc),Rn */
	IF(0x0C05A320u); { u32 t_ = r9; PR = 0x0C05A324u; IF(0x0C05A322u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C05A324u); }  /* 0C05A320 jsr @Rn */
L_0C05A324: BLKS(0x0C05A324u);
	r9 = 0xC0505F0u; UPD(0x0C05A326u, 1);  /* 0C05A324 mov.l @(disp,pc),Rn */
	IF(0x0C05A326u); { u32 t_ = r8; PR = 0x0C05A32Au; IF(0x0C05A328u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C05A32Au); }  /* 0C05A326 jsr @Rn */
L_0C05A32A: BLKS(0x0C05A32Au);
	r8 = 0xC0605D0u; UPD(0x0C05A32Cu, 1);  /* 0C05A32A mov.l @(disp,pc),Rn */
	IF(0x0C05A32Cu); { u32 t_ = r9; PR = 0x0C05A330u; IF(0x0C05A32Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C05A330u); }  /* 0C05A32C jsr @Rn */
L_0C05A330: BLKS(0x0C05A330u);
	r9 = 0xC286744u; UPD(0x0C05A332u, 1);  /* 0C05A330 mov.l @(disp,pc),Rn */
	IF(0x0C05A332u); { u32 t_ = r8; PR = 0x0C05A336u; IF(0x0C05A334u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0605D0, 0x0C0605D0u, 0x0C05A336u); }  /* 0C05A332 jsr @Rn */
L_0C05A336: BLKS(0x0C05A336u);
	r2 = 0xC275440u; UPD(0x0C05A338u, 1);  /* 0C05A336 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C05A338 mov #imm,Rn */
	r3 = 0xC393082u; UPD(0x0C05A33Cu, 2);  /* 0C05A33A mov.l @(disp,pc),Rn */
	r0 = 0xC275DC4u; UPD(0x0C05A33Eu, 1);  /* 0C05A33C mov.l @(disp,pc),Rn */
	W16(r9, r8); UPD(0x0C05A340u, 1);  /* 0C05A33E mov.w Rm,@Rn */
	W16(r2, r8); UPD(0x0C05A342u, 1);  /* 0C05A340 mov.w Rm,@Rn */
	W16(r3, r8); UPD(0x0C05A344u, 1);  /* 0C05A342 mov.w Rm,@Rn */
	W16(r0, r8); UPD(0x0C05A346u, 1);  /* 0C05A344 mov.w Rm,@Rn */
	r9 = 0xC0AE540u; UPD(0x0C05A348u, 1);  /* 0C05A346 mov.l @(disp,pc),Rn */
	r4 = 0x200u; UPD(0x0C05A34Au, 1);  /* 0C05A348 mov.w @(disp,pc),Rn */
	r5 = 0xC28628Au; UPD(0x0C05A34Cu, 1);  /* 0C05A34A mov.l @(disp,pc),Rn */
	r7 = 0xC2862A0u; UPD(0x0C05A34Eu, 1);  /* 0C05A34C mov.l @(disp,pc),Rn */
	r6 = 0xC21CC3Cu; UPD(0x0C05A350u, 1);  /* 0C05A34E mov.l @(disp,pc),Rn */
	r3 = 0xC26C8C6u; UPD(0x0C05A352u, 1);  /* 0C05A350 mov.l @(disp,pc),Rn */
	r8 = 0xC0A6770u; UPD(0x0C05A354u, 1);  /* 0C05A352 mov.l @(disp,pc),Rn */
	W16(r5, r4); UPD(0x0C05A356u, 1);  /* 0C05A354 mov.w Rm,@Rn */
	W16(r7, r4); UPD(0x0C05A358u, 1);  /* 0C05A356 mov.w Rm,@Rn */
	W16(r6, r4); UPD(0x0C05A35Au, 1);  /* 0C05A358 mov.w Rm,@Rn */
	IF(0x0C05A35Au); { u32 t_ = r9; PR = 0x0C05A35Eu; W16(r3, r4); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AE540, 0x0C0AE540u, 0x0C05A35Eu); }  /* 0C05A35A jsr @Rn */
L_0C05A35E: BLKS(0x0C05A35Eu);
	IF(0x0C05A35Eu); { u32 t_ = r8; PR = 0x0C05A362u; IF(0x0C05A360u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A6770, 0x0C0A6770u, 0x0C05A362u); }  /* 0C05A35E jsr @Rn */
L_0C05A362: BLKS(0x0C05A362u);
	r9 = 0xC0AD120u; UPD(0x0C05A364u, 1);  /* 0C05A362 mov.l @(disp,pc),Rn */
	r8 = 0xC06AD80u; UPD(0x0C05A366u, 1);  /* 0C05A364 mov.l @(disp,pc),Rn */
	IF(0x0C05A366u); { u32 t_ = r9; PR = 0x0C05A36Au; IF(0x0C05A368u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AD120, 0x0C0AD120u, 0x0C05A36Au); }  /* 0C05A366 jsr @Rn */
L_0C05A36A: BLKS(0x0C05A36Au);
	IF(0x0C05A36Au); { u32 t_ = r8; PR = 0x0C05A36Eu; IF(0x0C05A36Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C06AD80, 0x0C06AD80u, 0x0C05A36Eu); }  /* 0C05A36A jsr @Rn */
L_0C05A36E: BLKS(0x0C05A36Eu);
	r0 = 0xC286298u; UPD(0x0C05A370u, 1);  /* 0C05A36E mov.l @(disp,pc),Rn */
	r2 = 0xFu;  /* 0C05A370 mov #imm,Rn */
	r9 = R32(r0); UPD(0x0C05A374u, 2);  /* 0C05A372 mov.l @Rm,Rn */
	r4 = 0x4u;  /* 0C05A374 mov #imm,Rn */
	IF(0x0C05A376u); { u32 t_ = r11; PR = 0x0C05A37Au; r9 &= r2; /* slot and Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C05A37Au); }  /* 0C05A376 jsr @Rn */
L_0C05A37A: BLKS(0x0C05A37Au);
	T = (s32)r9 >= (s32)r0;  /* 0C05A37A cmp/ge Rm,Rn */
	if (T) { UPD(0x0C05A382u, 4); goto L_0C05A382; }  /* 0C05A37C bt */
L_0C05A37E: BLKS(0x0C05A37Eu);
	{ IF(0x0C05A380u); ; /* slot nop */ UPD(0x0C05A5D0u, 3); goto L_0C05A5D0; }  /* 0C05A37E bra */
L_0C05A382: BLKS(0x0C05A382u);
	r9 = 0xC060D90u; UPD(0x0C05A384u, 1);  /* 0C05A382 mov.l @(disp,pc),Rn */
	r8 = 0xC0AF600u; UPD(0x0C05A386u, 1);  /* 0C05A384 mov.l @(disp,pc),Rn */
	IF(0x0C05A386u); { u32 t_ = r9; PR = 0x0C05A38Au; IF(0x0C05A388u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C060D90, 0x0C060D90u, 0x0C05A38Au); }  /* 0C05A386 jsr @Rn */
L_0C05A38A: BLKS(0x0C05A38Au);
	r9 = 0xC0A68C0u; UPD(0x0C05A38Cu, 1);  /* 0C05A38A mov.l @(disp,pc),Rn */
	IF(0x0C05A38Cu); { u32 t_ = r8; PR = 0x0C05A390u; IF(0x0C05A38Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AF600, 0x0C0AF600u, 0x0C05A390u); }  /* 0C05A38C jsr @Rn */
L_0C05A390: BLKS(0x0C05A390u);
	r8 = 0xC0AD1F0u; UPD(0x0C05A392u, 1);  /* 0C05A390 mov.l @(disp,pc),Rn */
	IF(0x0C05A392u); { u32 t_ = r9; PR = 0x0C05A396u; IF(0x0C05A394u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A68C0, 0x0C0A68C0u, 0x0C05A396u); }  /* 0C05A392 jsr @Rn */
L_0C05A396: BLKS(0x0C05A396u);
	r9 = 0xC06C990u; UPD(0x0C05A398u, 1);  /* 0C05A396 mov.l @(disp,pc),Rn */
	IF(0x0C05A398u); { u32 t_ = r8; PR = 0x0C05A39Cu; IF(0x0C05A39Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AD1F0, 0x0C0AD1F0u, 0x0C05A39Cu); }  /* 0C05A398 jsr @Rn */
L_0C05A39C: BLKS(0x0C05A39Cu);
	IF(0x0C05A39Cu); { u32 t_ = r9; PR = 0x0C05A3A0u; IF(0x0C05A39Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C06C990, 0x0C06C990u, 0x0C05A3A0u); }  /* 0C05A39C jsr @Rn */
L_0C05A3A0: BLKS(0x0C05A3A0u);
	r9 = 0x0u;  /* 0C05A3A0 mov #imm,Rn */
	r8 = r9;  /* 0C05A3A2 mov Rm,Rn */
	UPD(0x0C05A3A4u, 2);
L_0C05A3A4: BLKS(0x0C05A3A4u);
	r8 += r8;  /* 0C05A3A4 add Rm,Rn */
	r5 = 0xC2864B8u; UPD(0x0C05A3A8u, 2);  /* 0C05A3A6 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05A3A8 mov Rm,Rn */
	IF(0x0C05A3AAu); r7 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C05A3ACu, 2);  /* 0C05A3AA mov.w @(r0,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C05A3AC tst Rm,Rn */
	if (T) { UPD(0x0C05A3B4u, 4); goto L_0C05A3B4; }  /* 0C05A3AE bt */
L_0C05A3B0: BLKS(0x0C05A3B0u);
	{ IF(0x0C05A3B2u); ; /* slot nop */ UPD(0x0C05A5C0u, 3); goto L_0C05A5C0; }  /* 0C05A3B0 bra */
L_0C05A3B4: BLKS(0x0C05A3B4u);
	r3 = 0xC283752u; UPD(0x0C05A3B6u, 1);  /* 0C05A3B4 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05A3B6 mov Rm,Rn */
	IF(0x0C05A3B8u); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C05A3BAu, 2);  /* 0C05A3B8 mov.w @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C05A3BA tst Rm,Rn */
	if (T) { UPD(0x0C05A3C2u, 4); goto L_0C05A3C2; }  /* 0C05A3BC bt */
L_0C05A3BE: BLKS(0x0C05A3BEu);
	{ IF(0x0C05A3C0u); ; /* slot nop */ UPD(0x0C05A5B0u, 3); goto L_0C05A5B0; }  /* 0C05A3BE bra */
L_0C05A3C2: BLKS(0x0C05A3C2u);
	r6 = 0xC27557Cu; UPD(0x0C05A3C4u, 1);  /* 0C05A3C2 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05A3C4 mov Rm,Rn */
	IF(0x0C05A3C6u); r4 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C05A3C8u, 2);  /* 0C05A3C6 mov.w @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C05A3C8 tst Rm,Rn */
	if (T) { UPD(0x0C05A3D0u, 4); goto L_0C05A3D0; }  /* 0C05A3CA bt */
L_0C05A3CC: BLKS(0x0C05A3CCu);
	{ IF(0x0C05A3CEu); ; /* slot nop */ UPD(0x0C05A5A0u, 3); goto L_0C05A5A0; }  /* 0C05A3CC bra */
L_0C05A3D0: BLKS(0x0C05A3D0u);
	r7 = 0xC392D82u; UPD(0x0C05A3D2u, 1);  /* 0C05A3D0 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05A3D2 mov Rm,Rn */
	IF(0x0C05A3D4u); r8 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C05A3D6u, 2);  /* 0C05A3D4 mov.w @(r0,Rm),Rn */
	T = (r8 & r8) == 0;  /* 0C05A3D6 tst Rm,Rn */
	if (T) { UPD(0x0C05A3DEu, 4); goto L_0C05A3DE; }  /* 0C05A3D8 bt */
L_0C05A3DA: BLKS(0x0C05A3DAu);
	{ IF(0x0C05A3DCu); ; /* slot nop */ UPD(0x0C05A590u, 3); goto L_0C05A590; }  /* 0C05A3DA bra */
L_0C05A3DE: BLKS(0x0C05A3DEu);
	r5 = r9;  /* 0C05A3DE mov Rm,Rn */
	UPD(0x0C05A3E0u, 1);
L_0C05A3E0: BLKS(0x0C05A3E0u);
	r5 += 0x1u;  /* 0C05A3E0 add #imm,Rn */
	r9 = r5 & 0xFF;  /* 0C05A3E2 extu.b Rm,Rn */
	r0 = 0x17u;  /* 0C05A3E4 mov #imm,Rn */
	T = r9 > r0;  /* 0C05A3E6 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r8 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05A3A4u, 7); goto L_0C05A3A4; } goto L_0C05A3EC; }  /* 0C05A3E8 bf/s */
L_0C05A3EC: BLKS(0x0C05A3ECu);
	r3 = 0xC27DDF4u; UPD(0x0C05A3EEu, 2);  /* 0C05A3EC mov.l @(disp,pc),Rn */
	r9 = 0x80u; UPD(0x0C05A3F0u, 1);  /* 0C05A3EE mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C05A3F0 mov Rm,Rn */
	IF(0x0C05A3F2u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C05A3F4u, 2);  /* 0C05A3F2 mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C05A3F4 mov Rm,Rn */
	r0 &= 0x40u;  /* 0C05A3F6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05A3F8 tst Rm,Rn */
	if (T) { UPD(0x0C05A404u, 6); goto L_0C05A404; }  /* 0C05A3FA bt */
L_0C05A3FC: BLKS(0x0C05A3FCu);
	r4 = 0xC161888u; UPD(0x0C05A3FEu, 1);  /* 0C05A3FC mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C05A400u, 1);  /* 0C05A3FE mov.b @Rm,Rn */
	r6 += 0xFFFFFF80u;  /* 0C05A400 add #imm,Rn */
	W8(r4, r6); UPD(0x0C05A404u, 2);  /* 0C05A402 mov.b Rm,@Rn */
L_0C05A404: BLKS(0x0C05A404u);
	r3 = 0xC161888u; UPD(0x0C05A406u, 1);  /* 0C05A404 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C05A408u, 1);  /* 0C05A406 mov.b @Rm,Rn */
	r2 = 0xC21F7F9u; UPD(0x0C05A40Au, 1);  /* 0C05A408 mov.l @(disp,pc),Rn */
	T = (r8 & r8) == 0;  /* 0C05A40A tst Rm,Rn */
	r8 = 0xFFFFFFFFu;  /* 0C05A40C mov #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C05A410u, 3);  /* 0C05A40E mov.b @Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C05A410 negc Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C05A412 tst Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C05A414 negc Rm,Rn */
	T = (r0 & r7) == 0;  /* 0C05A416 tst Rm,Rn */
	if (T) { UPD(0x0C05A41Eu, 7); goto L_0C05A41E; }  /* 0C05A418 bt */
L_0C05A41A: BLKS(0x0C05A41Au);
	{ IF(0x0C05A41Cu); ; /* slot nop */ UPD(0x0C05A580u, 3); goto L_0C05A580; }  /* 0C05A41A bra */
L_0C05A41E: BLKS(0x0C05A41Eu);
	r4 = 0x1Bu;  /* 0C05A41E mov #imm,Rn */
	UPD(0x0C05A420u, 1);
L_0C05A420: BLKS(0x0C05A420u);
	T = (s32)r10 > (s32)r4;  /* 0C05A420 cmp/gt Rm,Rn */
	{ u32 c_ = T; r6 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05A42Au, 4); goto L_0C05A42A; } goto L_0C05A426; }  /* 0C05A422 bt/s */
L_0C05A426: BLKS(0x0C05A426u);
	r6 += 0x1u;  /* 0C05A426 add #imm,Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C05A428 exts.w Rm,Rn */
	UPD(0x0C05A42Au, 3);
L_0C05A42A: BLKS(0x0C05A42Au);
	r0 = 0xC050840u; UPD(0x0C05A42Cu, 1);  /* 0C05A42A mov.l @(disp,pc),Rn */
	IF(0x0C05A42Cu); { u32 t_ = r0; PR = 0x0C05A430u; IF(0x0C05A42Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C05A430u); }  /* 0C05A42C jsr @Rn */
L_0C05A430: BLKS(0x0C05A430u);
	r7 = 0xC283794u; UPD(0x0C05A432u, 1);  /* 0C05A430 mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C05A432 mov #imm,Rn */
	r0 = R32(r7); UPD(0x0C05A436u, 2);  /* 0C05A434 mov.l @Rm,Rn */
	r3 = 0xC21F5EAu; UPD(0x0C05A438u, 1);  /* 0C05A436 mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C05A438 tst Rm,Rn */
	r0 = r9;  /* 0C05A43A mov Rm,Rn */
	IF(0x0C05A43Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C05A43Eu, 3);  /* 0C05A43C mov.b @(r0,Rm),Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C05A43E negc Rm,Rn */
	r3 = 0xFFFFFFF9u;  /* 0C05A440 mov #imm,Rn */
	IF(0x0C05A442u); ARG0(0x423Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C05A442 shad Rm,Rn */
	r2 &= r6;  /* 0C05A444 and Rm,Rn */
	r5 &= r2;  /* 0C05A446 and Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C05A448 tst Rm,Rn */
	if (!T) { UPD(0x0C05A484u, 9); goto L_0C05A484; }  /* 0C05A44A bf */
L_0C05A44C: BLKS(0x0C05A44Cu);
	r0 = 0x280u; UPD(0x0C05A44Eu, 1);  /* 0C05A44C mov.w @(disp,pc),Rn */
	IF(0x0C05A44Eu); r5 = R32(r0 + r7); UPD(0x0C05A450u, 1);  /* 0C05A44E mov.l @(r0,Rm),Rn */
	r4 = 0xC2177F8u; UPD(0x0C05A452u, 1);  /* 0C05A450 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C05A452 mov Rm,Rn */
	IF(0x0C05A454u); r9 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C05A456u, 2);  /* 0C05A454 mov.b @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C05A456 tst Rm,Rn */
	IF(0x0C05A458u); ARG0(0x493Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = (u32)((s32)r9 >> 31); else r9 = (u32)((s32)r9 >> ((~s_ & 31) + 1)); }  /* 0C05A458 shad Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C05A45A negc Rm,Rn */
	r9 &= r6;  /* 0C05A45C and Rm,Rn */
	r7 &= r9;  /* 0C05A45E and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C05A460 tst Rm,Rn */
	if (!T) { UPD(0x0C05A484u, 9); goto L_0C05A484; }  /* 0C05A462 bf */
L_0C05A464: BLKS(0x0C05A464u);
	r5 = 0xC2859A0u; UPD(0x0C05A466u, 1);  /* 0C05A464 mov.l @(disp,pc),Rn */
	r4 = R32(r5); UPD(0x0C05A468u, 1);  /* 0C05A466 mov.l @Rm,Rn */
	r7 = 0x7FFFu; UPD(0x0C05A46Au, 1);  /* 0C05A468 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)R16(r4); UPD(0x0C05A46Cu, 1);  /* 0C05A46A mov.w @Rm,Rn */
	r0 = 0xC21F5DCu; UPD(0x0C05A46Eu, 1);  /* 0C05A46C mov.l @(disp,pc),Rn */
	r9 &= r7;  /* 0C05A46E and Rm,Rn */
	T = r9 == r7;  /* 0C05A470 cmp/eq Rm,Rn */
	r3 = R32(r0); UPD(0x0C05A474u, 3);  /* 0C05A472 mov.l @Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C05A474 negc Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C05A476 tst Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C05A478 negc Rm,Rn */
	r6 |= r2;  /* 0C05A47A or Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C05A47C tst Rm,Rn */
	if (T) { UPD(0x0C05A484u, 8); goto L_0C05A484; }  /* 0C05A47E bt */
L_0C05A480: BLKS(0x0C05A480u);
	{ IF(0x0C05A482u); ; /* slot nop */ UPD(0x0C05A31Cu, 3); goto L_0C05A31C; }  /* 0C05A480 bra */
L_0C05A484: BLKS(0x0C05A484u);
	r10 = 0xC21CA15u; UPD(0x0C05A486u, 1);  /* 0C05A484 mov.l @(disp,pc),Rn */
	{ r4 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C05A560u, 3); goto L_0C05A560; }  /* 0C05A486 bra */
L_0C05A560: BLKS(0x0C05A560u);
	IF(0x0C05A560u); { u32 t_ = r12; PR = 0x0C05A564u; IF(0x0C05A562u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFCA0, 0x0C0AFCA0u, 0x0C05A564u); }  /* 0C05A560 jsr @Rn */
L_0C05A564: BLKS(0x0C05A564u);
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C05A566u, 1);  /* 0C05A564 mov.b @Rm,Rn */
L_0C05A566: BLKS(0x0C05A566u);
	r15 = r14;  /* 0C05A566 mov Rm,Rn */
	IF(0x0C05A568u); PR = R32(r15); r15 += 4; UPD(0x0C05A56Au, 2);  /* 0C05A568 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05A56Cu, 1);  /* 0C05A56A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05A56Eu, 1);  /* 0C05A56C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05A570u, 1);  /* 0C05A56E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05A572u, 1);  /* 0C05A570 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05A574u, 1);  /* 0C05A572 mov.l @Rm+,Rn */
	IF(0x0C05A574u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05A574 rts */
L_0C05A580: BLKS(0x0C05A580u);
	r0 = 0xC05F810u; UPD(0x0C05A582u, 1);  /* 0C05A580 mov.l @(disp,pc),Rn */
	IF(0x0C05A582u); { u32 t_ = r0; PR = 0x0C05A586u; IF(0x0C05A584u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05F810, 0x0C05F810u, 0x0C05A586u); }  /* 0C05A582 jsr @Rn */
L_0C05A586: BLKS(0x0C05A586u);
	{ r4 = 0x1Bu; /* slot mov #imm,Rn */ UPD(0x0C05A420u, 3); goto L_0C05A420; }  /* 0C05A586 bra */
L_0C05A590: BLKS(0x0C05A590u);
	r8 = 0xC06C850u; UPD(0x0C05A592u, 1);  /* 0C05A590 mov.l @(disp,pc),Rn */
	IF(0x0C05A592u); { u32 t_ = r8; PR = 0x0C05A596u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06C850, 0x0C06C850u, 0x0C05A596u); }  /* 0C05A592 jsr @Rn */
L_0C05A596: BLKS(0x0C05A596u);
	{ r5 = r9; /* slot mov Rm,Rn */ UPD(0x0C05A3E0u, 3); goto L_0C05A3E0; }  /* 0C05A596 bra */
L_0C05A5A0: BLKS(0x0C05A5A0u);
	r0 = 0xC0AD2A0u; UPD(0x0C05A5A2u, 1);  /* 0C05A5A0 mov.l @(disp,pc),Rn */
	IF(0x0C05A5A2u); { u32 t_ = r0; PR = 0x0C05A5A6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AD2A0, 0x0C0AD2A0u, 0x0C05A5A6u); }  /* 0C05A5A2 jsr @Rn */
L_0C05A5A6: BLKS(0x0C05A5A6u);
	{ IF(0x0C05A5A8u); ; /* slot nop */ UPD(0x0C05A3D0u, 3); goto L_0C05A3D0; }  /* 0C05A5A6 bra */
L_0C05A5B0: BLKS(0x0C05A5B0u);
	r0 = 0xC0A6810u; UPD(0x0C05A5B2u, 1);  /* 0C05A5B0 mov.l @(disp,pc),Rn */
	IF(0x0C05A5B2u); { u32 t_ = r0; PR = 0x0C05A5B6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A6810, 0x0C0A6810u, 0x0C05A5B6u); }  /* 0C05A5B2 jsr @Rn */
L_0C05A5B6: BLKS(0x0C05A5B6u);
	{ IF(0x0C05A5B8u); ; /* slot nop */ UPD(0x0C05A3C2u, 3); goto L_0C05A3C2; }  /* 0C05A5B6 bra */
L_0C05A5C0: BLKS(0x0C05A5C0u);
	r0 = 0xC0AF650u; UPD(0x0C05A5C2u, 1);  /* 0C05A5C0 mov.l @(disp,pc),Rn */
	IF(0x0C05A5C2u); { u32 t_ = r0; PR = 0x0C05A5C6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AF650, 0x0C0AF650u, 0x0C05A5C6u); }  /* 0C05A5C2 jsr @Rn */
L_0C05A5C6: BLKS(0x0C05A5C6u);
	{ IF(0x0C05A5C8u); ; /* slot nop */ UPD(0x0C05A3B4u, 3); goto L_0C05A3B4; }  /* 0C05A5C6 bra */
L_0C05A5D0: BLKS(0x0C05A5D0u);
	r4 = 0xF0u; UPD(0x0C05A5D2u, 1);  /* 0C05A5D0 mov.w @(disp,pc),Rn */
	IF(0x0C05A5D2u); { u32 t_ = r11; PR = 0x0C05A5D6u; r15 += 0xFFFFFFFCu; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C05A5D6u); }  /* 0C05A5D2 jsr @Rn */
L_0C05A5D6: BLKS(0x0C05A5D6u);
	r6 = 0x188u; UPD(0x0C05A5D8u, 1);  /* 0C05A5D6 mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C05A5D8 mov #imm,Rn */
	r8 = 0xC06CCD0u; UPD(0x0C05A5DCu, 2);  /* 0C05A5DA mov.l @(disp,pc),Rn */
	r0 += r6;  /* 0C05A5DC add Rm,Rn */
	W32(r15, r4); UPD(0x0C05A5E0u, 2);  /* 0C05A5DE mov.l Rm,@Rn */
	IF(0x0C05A5E0u); r0 <<= 16;  /* 0C05A5E0 shll16 Rn */
	r4 = 0x1800000u; UPD(0x0C05A5E4u, 2);  /* 0C05A5E2 mov.l @(disp,pc),Rn */
	r5 = r0;  /* 0C05A5E4 mov Rm,Rn */
	r6 = 0x14u;  /* 0C05A5E6 mov #imm,Rn */
	IF(0x0C05A5E8u); { u32 t_ = r8; PR = 0x0C05A5ECu; r7 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C06CCD0, 0x0C06CCD0u, 0x0C05A5ECu); }  /* 0C05A5E8 jsr @Rn */
L_0C05A5EC: BLKS(0x0C05A5ECu);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C05A382u, 3); goto L_0C05A382; }  /* 0C05A5EC bra */
L_0C05A5F0: BLKS(0x0C05A5F0u);
	r12 = 0xC0AFCA0u; UPD(0x0C05A5F2u, 1);  /* 0C05A5F0 mov.l @(disp,pc),Rn */
	IF(0x0C05A5F2u); { u32 t_ = r12; PR = 0x0C05A5F6u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFCA0, 0x0C0AFCA0u, 0x0C05A5F6u); }  /* 0C05A5F2 jsr @Rn */
L_0C05A5F6: BLKS(0x0C05A5F6u);
	{ IF(0x0C05A5F8u); ; /* slot nop */ UPD(0x0C05A31Cu, 3); goto L_0C05A31C; }  /* 0C05A5F6 bra */
L_0C05A600: BLKS(0x0C05A600u);
	r11 = 0xC050D70u; UPD(0x0C05A602u, 1);  /* 0C05A600 mov.l @(disp,pc),Rn */
	IF(0x0C05A602u); { u32 t_ = r11; PR = 0x0C05A606u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C05A606u); }  /* 0C05A602 jsr @Rn */
L_0C05A606: BLKS(0x0C05A606u);
	r9 = (u32)(s32)(s8)R8(r8); UPD(0x0C05A608u, 1);  /* 0C05A606 mov.b @Rm,Rn */
	r0 += r9;  /* 0C05A608 add Rm,Rn */
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C05A2D2u, 4); goto L_0C05A2D2; }  /* 0C05A60A bra */
L_0C05A610: BLKS(0x0C05A610u);
	{ IF(0x0C05A612u); ; /* slot nop */ UPD(0x0C05A2B2u, 3); goto L_0C05A2B2; }  /* 0C05A610 bra */
}

/* FUN_0c05a640 */
void f_0C05A640(sh3_t *c)
{
	LOCALS;
L_0C05A640: BLKS(0x0C05A640u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05A642u, 1);  /* 0C05A640 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C05A642 mov #imm,Rn */
	r4 = 0x16Cu; UPD(0x0C05A646u, 2);  /* 0C05A644 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C05A646 mov Rm,Rn */
	r5 = 0x0u;  /* 0C05A648 mov #imm,Rn */
	IF(0x0C05A64Au); ;  /* 0C05A64A nop */
	UPD(0x0C05A64Cu, 3);
L_0C05A64C: BLKS(0x0C05A64Cu);
	IF(0x0C05A64Cu); MACL = r0 * r4;  /* 0C05A64C mul.l Rm,Rn */
	r2 = 0xC2859A8u; UPD(0x0C05A650u, 3);  /* 0C05A64E mov.l @(disp,pc),Rn */
	r6 = r0;  /* 0C05A650 mov Rm,Rn */
	IF(0x0C05A652u); r3 = MACL;  /* 0C05A652 sts macl,Rn */
	r7 = 0x0u;  /* 0C05A654 mov #imm,Rn */
	r6 += 0x1u;  /* 0C05A656 add #imm,Rn */
	r3 += r2;  /* 0C05A658 add Rm,Rn */
	IF(0x0C05A65Au); ;  /* 0C05A65A nop */
	UPD(0x0C05A65Cu, 6);
L_0C05A65C: BLKS(0x0C05A65Cu);
	r2 = 0u - r7;  /* 0C05A65C neg Rm,Rn */
	r2 += 0xAu;  /* 0C05A65E add #imm,Rn */
	IF(0x0C05A660u); MACL = r2 * r6;  /* 0C05A660 mul.l Rm,Rn */
	r1 = 0x186A0u; UPD(0x0C05A664u, 5);  /* 0C05A662 mov.l @(disp,pc),Rn */
	IF(0x0C05A664u); r2 = MACL;  /* 0C05A664 sts macl,Rn */
	IF(0x0C05A666u); MACL = r2 * r1;  /* 0C05A666 mul.l Rm,Rn */
	IF(0x0C05A668u); r2 = MACL;  /* 0C05A668 sts macl,Rn */
	W32(r3, r2); UPD(0x0C05A66Cu, 5);  /* 0C05A66A mov.l Rm,@Rn */
	r2 = 0x8u;  /* 0C05A66C mov #imm,Rn */
	W32(r3 + 0x4u, r2); UPD(0x0C05A670u, 2);  /* 0C05A66E mov.l Rm,@(disp,Rn) */
	r3 += 0x19u;  /* 0C05A670 add #imm,Rn */
	r2 = 0x2u;  /* 0C05A672 mov #imm,Rn */
	W8(r3, r2); UPD(0x0C05A676u, 3);  /* 0C05A674 mov.b Rm,@Rn */
	r2 = 0x80808043u; UPD(0x0C05A678u, 1);  /* 0C05A676 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFE7u;  /* 0C05A678 add #imm,Rn */
	W32(r3 + 0x8u, r2); UPD(0x0C05A67Cu, 2);  /* 0C05A67A mov.l Rm,@(disp,Rn) */
	r2 += 0xFFFFFFFEu;  /* 0C05A67C add #imm,Rn */
	W32(r3 + 0xCu, r2); UPD(0x0C05A680u, 2);  /* 0C05A67E mov.l Rm,@(disp,Rn) */
	r2 += 0x15u;  /* 0C05A680 add #imm,Rn */
	W32(r3 + 0x10u, r2); UPD(0x0C05A684u, 2);  /* 0C05A682 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x14u, r5); UPD(0x0C05A686u, 1);  /* 0C05A684 mov.l Rm,@(disp,Rn) */
	r2 = r7;  /* 0C05A686 mov Rm,Rn */
	r3 += 0x18u;  /* 0C05A688 add #imm,Rn */
	r2 += 0x1u;  /* 0C05A68A add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C05A68C exts.w Rm,Rn */
	W8(r3, r5); UPD(0x0C05A690u, 5);  /* 0C05A68E mov.b Rm,@Rn */
	r2 = 0x9u;  /* 0C05A690 mov #imm,Rn */
	T = (s32)r7 > (s32)r2;  /* 0C05A692 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05A65Cu, 5); goto L_0C05A65C; } goto L_0C05A698; }  /* 0C05A694 bf/s */
L_0C05A698: BLKS(0x0C05A698u);
	r2 = 0xC392D54u; UPD(0x0C05A69Au, 2);  /* 0C05A698 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C05A69A mov #imm,Rn */
	IF(0x0C05A69Cu); W8(r0 + r2, r3); UPD(0x0C05A69Eu, 2);  /* 0C05A69C mov.b Rm,@(r0,Rn) */
	r0 = (u32)(s32)(s16)r6;  /* 0C05A69E exts.w Rm,Rn */
	r6 = 0x3u;  /* 0C05A6A0 mov #imm,Rn */
	T = (s32)r0 > (s32)r6;  /* 0C05A6A2 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C05A64Cu, 6); goto L_0C05A64C; }  /* 0C05A6A4 bf */
L_0C05A6A6: BLKS(0x0C05A6A6u);
	r4 = 0x1u;  /* 0C05A6A6 mov #imm,Rn */
	r0 = 0xC28628Cu; UPD(0x0C05A6AAu, 2);  /* 0C05A6A8 mov.l @(disp,pc),Rn */
	W8(r2, r4); UPD(0x0C05A6ACu, 1);  /* 0C05A6AA mov.b Rm,@Rn */
	W8(r0, r3); UPD(0x0C05A6AEu, 1);  /* 0C05A6AC mov.b Rm,@Rn */
	r15 = r14;  /* 0C05A6AE mov Rm,Rn */
	IF(0x0C05A6B0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C05A6B0 rts */
}

/* FUN_0c05a6d0 */
void f_0C05A6D0(sh3_t *c)
{
	LOCALS;
L_0C05A6D0: BLKS(0x0C05A6D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05A6D2u, 1);  /* 0C05A6D0 mov.l Rm,@-Rn */
	r1 = 0xBu;  /* 0C05A6D2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05A6D6u, 2);  /* 0C05A6D4 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C05A6D6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05A6DAu, 2);  /* 0C05A6D8 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05A6DCu, 1);  /* 0C05A6DA mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05A6DEu, 1);  /* 0C05A6DC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05A6E0u, 1);  /* 0C05A6DE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05A6E2u, 1);  /* 0C05A6E0 mov.l Rm,@-Rn */
	r12 = 0xC286277u; UPD(0x0C05A6E4u, 1);  /* 0C05A6E2 mov.l @(disp,pc),Rn */
	IF(0x0C05A6E4u); r15 -= 4; W32(r15, PR); UPD(0x0C05A6E6u, 1);  /* 0C05A6E4 sts.l pr,@-Rn */
	r8 = 0xC0AFE90u; UPD(0x0C05A6E8u, 1);  /* 0C05A6E6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C05A6E8 mov Rm,Rn */
	W8(r12, r1); UPD(0x0C05A6ECu, 2);  /* 0C05A6EA mov.b Rm,@Rn */
	r0 = 0xC2852E5u; UPD(0x0C05A6EEu, 1);  /* 0C05A6EC mov.l @(disp,pc),Rn */
	r13 = 0xC0505F0u; UPD(0x0C05A6F0u, 1);  /* 0C05A6EE mov.l @(disp,pc),Rn */
	IF(0x0C05A6F0u); { u32 t_ = r8; PR = 0x0C05A6F4u; r12 = (u32)(s32)(s8)R8(r0); /* slot mov.b @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE90, 0x0C0AFE90u, 0x0C05A6F4u); }  /* 0C05A6F0 jsr @Rn */
L_0C05A6F4: BLKS(0x0C05A6F4u);
	IF(0x0C05A6F4u); { u32 t_ = r13; PR = 0x0C05A6F8u; IF(0x0C05A6F6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C05A6F8u); }  /* 0C05A6F4 jsr @Rn */
L_0C05A6F8: BLKS(0x0C05A6F8u);
	r7 = 0xC7C0BECu; UPD(0x0C05A6FAu, 1);  /* 0C05A6F8 mov.l @(disp,pc),Rn */
	r11 = 0xC0613E0u; UPD(0x0C05A6FCu, 1);  /* 0C05A6FA mov.l @(disp,pc),Rn */
	IF(0x0C05A6FCu); { u32 t_ = r7; PR = 0x0C05A700u; IF(0x0C05A6FEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C7C0BEC, 0x0C7C0BECu, 0x0C05A700u); }  /* 0C05A6FC jsr @Rn */
L_0C05A700: BLKS(0x0C05A700u);
	r6 = 0xC7C00F0u; UPD(0x0C05A702u, 1);  /* 0C05A700 mov.l @(disp,pc),Rn */
	r10 = 0xC0AE410u; UPD(0x0C05A704u, 1);  /* 0C05A702 mov.l @(disp,pc),Rn */
	IF(0x0C05A704u); { u32 t_ = r6; PR = 0x0C05A708u; IF(0x0C05A706u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C7C00F0, 0x0C7C00F0u, 0x0C05A708u); }  /* 0C05A704 jsr @Rn */
L_0C05A708: BLKS(0x0C05A708u);
	IF(0x0C05A708u); { u32 t_ = r11; PR = 0x0C05A70Cu; IF(0x0C05A70Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0613E0, 0x0C0613E0u, 0x0C05A70Cu); }  /* 0C05A708 jsr @Rn */
L_0C05A70C: BLKS(0x0C05A70Cu);
	IF(0x0C05A70Cu); { u32 t_ = r10; PR = 0x0C05A710u; IF(0x0C05A70Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AE410, 0x0C0AE410u, 0x0C05A710u); }  /* 0C05A70C jsr @Rn */
L_0C05A710: BLKS(0x0C05A710u);
	r5 = 0xC05B410u; UPD(0x0C05A712u, 1);  /* 0C05A710 mov.l @(disp,pc),Rn */
	r9 = 0xC7C38D8u; UPD(0x0C05A714u, 1);  /* 0C05A712 mov.l @(disp,pc),Rn */
	IF(0x0C05A714u); { u32 t_ = r5; PR = 0x0C05A718u; IF(0x0C05A716u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B410, 0x0C05B410u, 0x0C05A718u); }  /* 0C05A714 jsr @Rn */
L_0C05A718: BLKS(0x0C05A718u);
	r4 = 0xC05B4D0u; UPD(0x0C05A71Au, 1);  /* 0C05A718 mov.l @(disp,pc),Rn */
	r8 = 0xC0AD0F0u; UPD(0x0C05A71Cu, 1);  /* 0C05A71A mov.l @(disp,pc),Rn */
	IF(0x0C05A71Cu); { u32 t_ = r4; PR = 0x0C05A720u; IF(0x0C05A71Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B4D0, 0x0C05B4D0u, 0x0C05A720u); }  /* 0C05A71C jsr @Rn */
L_0C05A720: BLKS(0x0C05A720u);
	r2 = 0xC05B520u; UPD(0x0C05A722u, 1);  /* 0C05A720 mov.l @(disp,pc),Rn */
	r13 = 0xC7C1A98u; UPD(0x0C05A724u, 1);  /* 0C05A722 mov.l @(disp,pc),Rn */
	IF(0x0C05A724u); { u32 t_ = r2; PR = 0x0C05A728u; IF(0x0C05A726u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B520, 0x0C05B520u, 0x0C05A728u); }  /* 0C05A724 jsr @Rn */
L_0C05A728: BLKS(0x0C05A728u);
	IF(0x0C05A728u); { u32 t_ = r9; PR = 0x0C05A72Cu; IF(0x0C05A72Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C06C5D0, 0x0C06C5D0u, 0x0C05A72Cu); }  /* 0C05A728 jsr @Rn */
L_0C05A72C: BLKS(0x0C05A72Cu);
	r3 = 0xC05B570u; UPD(0x0C05A72Eu, 1);  /* 0C05A72C mov.l @(disp,pc),Rn */
	r11 = 0xC0AED70u; UPD(0x0C05A730u, 1);  /* 0C05A72E mov.l @(disp,pc),Rn */
	IF(0x0C05A730u); { u32 t_ = r3; PR = 0x0C05A734u; IF(0x0C05A732u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B570, 0x0C05B570u, 0x0C05A734u); }  /* 0C05A730 jsr @Rn */
L_0C05A734: BLKS(0x0C05A734u);
	r0 = 0xC05B5C0u; UPD(0x0C05A736u, 1);  /* 0C05A734 mov.l @(disp,pc),Rn */
	r10 = 0xC28599Cu; UPD(0x0C05A738u, 1);  /* 0C05A736 mov.l @(disp,pc),Rn */
	IF(0x0C05A738u); { u32 t_ = r0; PR = 0x0C05A73Cu; IF(0x0C05A73Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B5C0, 0x0C05B5C0u, 0x0C05A73Cu); }  /* 0C05A738 jsr @Rn */
L_0C05A73C: BLKS(0x0C05A73Cu);
	IF(0x0C05A73Cu); { u32 t_ = r8; PR = 0x0C05A740u; IF(0x0C05A73Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AD0F0, 0x0C0AD0F0u, 0x0C05A740u); }  /* 0C05A73C jsr @Rn */
L_0C05A740: BLKS(0x0C05A740u);
	IF(0x0C05A740u); { u32 t_ = r13; PR = 0x0C05A744u; IF(0x0C05A742u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B3E0, 0x0C05B3E0u, 0x0C05A744u); }  /* 0C05A740 jsr @Rn */
L_0C05A744: BLKS(0x0C05A744u);
	IF(0x0C05A744u); { u32 t_ = r11; PR = 0x0C05A748u; r13 = 0xFFFFFFF9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AED70, 0x0C0AED70u, 0x0C05A748u); }  /* 0C05A744 jsr @Rn */
L_0C05A748: BLKS(0x0C05A748u);
	r8 = 0xC392E0Cu; UPD(0x0C05A74Au, 1);  /* 0C05A748 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C05A74A mov #imm,Rn */
	W32(r8, r3); UPD(0x0C05A74Eu, 2);  /* 0C05A74C mov.l Rm,@Rn */
	r1 = 0x1u;  /* 0C05A74E mov #imm,Rn */
	r8 = 0xC06AB30u; UPD(0x0C05A752u, 2);  /* 0C05A750 mov.l @(disp,pc),Rn */
	W8(r10, r1); UPD(0x0C05A754u, 1);  /* 0C05A752 mov.b Rm,@Rn */
	r7 = 0xC21F880u; UPD(0x0C05A756u, 1);  /* 0C05A754 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C05A756 mov #imm,Rn */
	r6 = 0xC21F5DCu; UPD(0x0C05A75Au, 2);  /* 0C05A758 mov.l @(disp,pc),Rn */
	r5 = 0xC21F7F0u; UPD(0x0C05A75Cu, 1);  /* 0C05A75A mov.l @(disp,pc),Rn */
	r4 = 0xC283750u; UPD(0x0C05A75Eu, 1);  /* 0C05A75C mov.l @(disp,pc),Rn */
	r2 = 0xC393080u; UPD(0x0C05A760u, 1);  /* 0C05A75E mov.l @(disp,pc),Rn */
	r0 = 0xC21CA24u; UPD(0x0C05A762u, 1);  /* 0C05A760 mov.l @(disp,pc),Rn */
	r9 = 0xC286748u; UPD(0x0C05A764u, 1);  /* 0C05A762 mov.l @(disp,pc),Rn */
	r11 = 0xC283752u; UPD(0x0C05A766u, 1);  /* 0C05A764 mov.l @(disp,pc),Rn */
	W32(r9, r3); UPD(0x0C05A768u, 1);  /* 0C05A766 mov.l Rm,@Rn */
	W32(r7, r3); UPD(0x0C05A76Au, 1);  /* 0C05A768 mov.l Rm,@Rn */
	W32(r6, r3); UPD(0x0C05A76Cu, 1);  /* 0C05A76A mov.l Rm,@Rn */
	W8(r5, r3); UPD(0x0C05A76Eu, 1);  /* 0C05A76C mov.b Rm,@Rn */
	W8(r4, r3); UPD(0x0C05A770u, 1);  /* 0C05A76E mov.b Rm,@Rn */
	W8(r2, r3); UPD(0x0C05A772u, 1);  /* 0C05A770 mov.b Rm,@Rn */
	IF(0x0C05A772u); { u32 t_ = r8; PR = 0x0C05A776u; W8(r0, r3); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C06AB30, 0x0C06AB30u, 0x0C05A776u); }  /* 0C05A772 jsr @Rn */
L_0C05A776: BLKS(0x0C05A776u);
	IF(0x0C05A776u); ;  /* 0C05A776 nop */
	UPD(0x0C05A778u, 1);
L_0C05A778: BLKS(0x0C05A778u);
	r8 = 0xC04F330u; UPD(0x0C05A77Au, 1);  /* 0C05A778 mov.l @(disp,pc),Rn */
	r9 = 0xC050560u; UPD(0x0C05A77Cu, 1);  /* 0C05A77A mov.l @(disp,pc),Rn */
	IF(0x0C05A77Cu); { u32 t_ = r8; PR = 0x0C05A780u; IF(0x0C05A77Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C05A780u); }  /* 0C05A77C jsr @Rn */
L_0C05A780: BLKS(0x0C05A780u);
	r2 = 0xC7C3E58u; UPD(0x0C05A782u, 1);  /* 0C05A780 mov.l @(disp,pc),Rn */
	IF(0x0C05A782u); { u32 t_ = r2; PR = 0x0C05A786u; IF(0x0C05A784u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C7C3E58, 0x0C7C3E58u, 0x0C05A786u); }  /* 0C05A782 jsr @Rn */
L_0C05A786: BLKS(0x0C05A786u);
	IF(0x0C05A786u); { u32 t_ = r9; PR = 0x0C05A78Au; IF(0x0C05A788u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050560, 0x0C050560u, 0x0C05A78Au); }  /* 0C05A786 jsr @Rn */
L_0C05A78A: BLKS(0x0C05A78Au);
	r3 = 0xC27DC4Cu; UPD(0x0C05A78Cu, 1);  /* 0C05A78A mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C05A78C mov #imm,Rn */
	W32(r3, r0); UPD(0x0C05A790u, 2);  /* 0C05A78E mov.l Rm,@Rn */
	r0 = 0x0u;  /* 0C05A790 mov #imm,Rn */
	IF(0x0C05A792u); ;  /* 0C05A792 nop */
	UPD(0x0C05A794u, 2);
L_0C05A794: BLKS(0x0C05A794u);
	r6 = 0xC26C87Au; UPD(0x0C05A796u, 1);  /* 0C05A794 mov.l @(disp,pc),Rn */
	r5 = 0xC392D82u; UPD(0x0C05A798u, 1);  /* 0C05A796 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C05A798 add Rm,Rn */
	W16(r6, r10); UPD(0x0C05A79Cu, 2);  /* 0C05A79A mov.w Rm,@Rn */
	r5 += r0;  /* 0C05A79C add Rm,Rn */
	r8 = 0xC27557Cu; UPD(0x0C05A7A0u, 2);  /* 0C05A79E mov.l @(disp,pc),Rn */
	r7 = 0xC392968u; UPD(0x0C05A7A2u, 1);  /* 0C05A7A0 mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C05A7A2 add Rm,Rn */
	r9 = 0xC27DDB4u; UPD(0x0C05A7A6u, 2);  /* 0C05A7A4 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C05A7A6 add Rm,Rn */
	W16(r5, r10); UPD(0x0C05A7AAu, 2);  /* 0C05A7A8 mov.w Rm,@Rn */
	r9 += r0;  /* 0C05A7AA add Rm,Rn */
	r6 = 0xC21F800u; UPD(0x0C05A7AEu, 2);  /* 0C05A7AC mov.l @(disp,pc),Rn */
	W16(r7, r10); UPD(0x0C05A7B0u, 1);  /* 0C05A7AE mov.w Rm,@Rn */
	r6 += r0;  /* 0C05A7B0 add Rm,Rn */
	W16(r8, r10); UPD(0x0C05A7B4u, 2);  /* 0C05A7B2 mov.w Rm,@Rn */
	r5 = 0xC21F840u; UPD(0x0C05A7B6u, 1);  /* 0C05A7B4 mov.l @(disp,pc),Rn */
	W16(r9, r10); UPD(0x0C05A7B8u, 1);  /* 0C05A7B6 mov.w Rm,@Rn */
	r5 += r0;  /* 0C05A7B8 add Rm,Rn */
	W16(r6, r10); UPD(0x0C05A7BCu, 2);  /* 0C05A7BA mov.w Rm,@Rn */
	r9 = r0;  /* 0C05A7BC mov Rm,Rn */
	r8 = 0xC2864B8u; UPD(0x0C05A7C0u, 2);  /* 0C05A7BE mov.l @(disp,pc),Rn */
	r6 = r4;  /* 0C05A7C0 mov Rm,Rn */
	r7 = 0xC2834FCu; UPD(0x0C05A7C4u, 2);  /* 0C05A7C2 mov.l @(disp,pc),Rn */
	r9 += r8;  /* 0C05A7C4 add Rm,Rn */
	r3 = 0xC21CC40u; UPD(0x0C05A7C8u, 2);  /* 0C05A7C6 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C05A7C8 add Rm,Rn */
	r2 = 0xC275DD6u; UPD(0x0C05A7CCu, 2);  /* 0C05A7CA mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C05A7CC add Rm,Rn */
	W16(r5, r10); UPD(0x0C05A7D0u, 2);  /* 0C05A7CE mov.w Rm,@Rn */
	r2 += r0;  /* 0C05A7D0 add Rm,Rn */
	IF(0x0C05A7D2u); W16(r0 + r11, r10); UPD(0x0C05A7D4u, 2);  /* 0C05A7D2 mov.w Rm,@(r0,Rn) */
	r6 += 0x1u;  /* 0C05A7D4 add #imm,Rn */
	r4 = (u32)(s32)(s8)r6;  /* 0C05A7D6 exts.b Rm,Rn */
	r5 = 0x17u;  /* 0C05A7D8 mov #imm,Rn */
	W16(r2, r10); UPD(0x0C05A7DCu, 4);  /* 0C05A7DA mov.w Rm,@Rn */
	r0 += 0x2u;  /* 0C05A7DC add #imm,Rn */
	W16(r3, r10); UPD(0x0C05A7E0u, 2);  /* 0C05A7DE mov.w Rm,@Rn */
	T = (s32)r4 > (s32)r5;  /* 0C05A7E0 cmp/gt Rm,Rn */
	W16(r7, r10); UPD(0x0C05A7E4u, 2);  /* 0C05A7E2 mov.w Rm,@Rn */
	{ u32 c_ = !T; W16(r9, r10); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C05A794u, 3); goto L_0C05A794; } UPD(0x0C05A7E8u, 1); goto L_0C05A7E8; }  /* 0C05A7E4 bf/s */
L_0C05A7E8: BLKS(0x0C05A7E8u);
	r7 = r8;  /* 0C05A7E8 mov Rm,Rn */
	r7 += 0x28u;  /* 0C05A7EA add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r7); UPD(0x0C05A7EEu, 3);  /* 0C05A7EC mov.w @Rm,Rn */
	r5 = 0x0u;  /* 0C05A7EE mov #imm,Rn */
	r8 = 0xC286744u; UPD(0x0C05A7F2u, 2);  /* 0C05A7F0 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C05A7F2 add #imm,Rn */
	r6 = 0xC393082u; UPD(0x0C05A7F6u, 2);  /* 0C05A7F4 mov.l @(disp,pc),Rn */
	W16(r8, r5); UPD(0x0C05A7F8u, 1);  /* 0C05A7F6 mov.w Rm,@Rn */
	W16(r7, r4); UPD(0x0C05A7FAu, 1);  /* 0C05A7F8 mov.w Rm,@Rn */
	W16(r6, r5); UPD(0x0C05A7FCu, 1);  /* 0C05A7FA mov.w Rm,@Rn */
	r2 = 0xC275440u; UPD(0x0C05A7FEu, 1);  /* 0C05A7FC mov.l @(disp,pc),Rn */
	r9 = 0xC275DC4u; UPD(0x0C05A800u, 1);  /* 0C05A7FE mov.l @(disp,pc),Rn */
	r8 = 0xC05E1F0u; UPD(0x0C05A802u, 1);  /* 0C05A800 mov.l @(disp,pc),Rn */
	r7 = 0x200u; UPD(0x0C05A804u, 1);  /* 0C05A802 mov.w @(disp,pc),Rn */
	r3 = 0xC28628Au; UPD(0x0C05A806u, 1);  /* 0C05A804 mov.l @(disp,pc),Rn */
	r4 = 0xC21CC3Cu; UPD(0x0C05A808u, 1);  /* 0C05A806 mov.l @(disp,pc),Rn */
	r0 = 0xC2862A0u; UPD(0x0C05A80Au, 1);  /* 0C05A808 mov.l @(disp,pc),Rn */
	r6 = 0xC26C8C6u; UPD(0x0C05A80Cu, 1);  /* 0C05A80A mov.l @(disp,pc),Rn */
	W16(r2, r5); UPD(0x0C05A80Eu, 1);  /* 0C05A80C mov.w Rm,@Rn */
	W16(r9, r5); UPD(0x0C05A810u, 1);  /* 0C05A80E mov.w Rm,@Rn */
	W16(r3, r7); UPD(0x0C05A812u, 1);  /* 0C05A810 mov.w Rm,@Rn */
	W16(r4, r7); UPD(0x0C05A814u, 1);  /* 0C05A812 mov.w Rm,@Rn */
	W16(r0, r7); UPD(0x0C05A816u, 1);  /* 0C05A814 mov.w Rm,@Rn */
	IF(0x0C05A816u); { u32 t_ = r8; PR = 0x0C05A81Au; W16(r6, r7); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C05E1F0, 0x0C05E1F0u, 0x0C05A81Au); }  /* 0C05A816 jsr @Rn */
L_0C05A81A: BLKS(0x0C05A81Au);
	r5 = 0xC283750u; UPD(0x0C05A81Cu, 1);  /* 0C05A81A mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C05A81C tst Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r5); UPD(0x0C05A820u, 2);  /* 0C05A81E mov.b @Rm,Rn */
	IF(0x0C05A820u); r4 = T;  /* 0C05A820 movt Rn */
	r2 = 0xC392E0Cu; UPD(0x0C05A824u, 2);  /* 0C05A822 mov.l @(disp,pc),Rn */
	T = (r9 & r9) == 0;  /* 0C05A824 tst Rm,Rn */
	r3 = R32(r2); UPD(0x0C05A828u, 2);  /* 0C05A826 mov.l @Rm,Rn */
	IF(0x0C05A828u); r8 = T;  /* 0C05A828 movt Rn */
	T = (r3 & r3) == 0;  /* 0C05A82A tst Rm,Rn */
	IF(0x0C05A82Cu); r0 = T;  /* 0C05A82C movt Rn */
	r4 &= r8;  /* 0C05A82E and Rm,Rn */
	r4 &= r0;  /* 0C05A830 and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C05A832 tst Rm,Rn */
	if (T) { UPD(0x0C05A83Au, 9); goto L_0C05A83A; }  /* 0C05A834 bt */
L_0C05A836: BLKS(0x0C05A836u);
	{ IF(0x0C05A838u); ; /* slot nop */ UPD(0x0C05AD20u, 3); goto L_0C05AD20; }  /* 0C05A836 bra */
L_0C05A83A: BLKS(0x0C05A83Au);
	r9 = 0xC7C1984u; UPD(0x0C05A83Cu, 1);  /* 0C05A83A mov.l @(disp,pc),Rn */
	r8 = 0xC066060u; UPD(0x0C05A83Eu, 1);  /* 0C05A83C mov.l @(disp,pc),Rn */
	IF(0x0C05A83Eu); { u32 t_ = r9; PR = 0x0C05A842u; IF(0x0C05A840u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C7C1984, 0x0C7C1984u, 0x0C05A842u); }  /* 0C05A83E jsr @Rn */
L_0C05A842: BLKS(0x0C05A842u);
	r9 = 0xC067B70u; UPD(0x0C05A844u, 1);  /* 0C05A842 mov.l @(disp,pc),Rn */
	IF(0x0C05A844u); { u32 t_ = r8; PR = 0x0C05A848u; IF(0x0C05A846u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C066060, 0x0C066060u, 0x0C05A848u); }  /* 0C05A844 jsr @Rn */
L_0C05A848: BLKS(0x0C05A848u);
	r8 = 0xC06A690u; UPD(0x0C05A84Au, 1);  /* 0C05A848 mov.l @(disp,pc),Rn */
	IF(0x0C05A84Au); { u32 t_ = r9; PR = 0x0C05A84Eu; IF(0x0C05A84Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C067B70, 0x0C067B70u, 0x0C05A84Eu); }  /* 0C05A84A jsr @Rn */
L_0C05A84E: BLKS(0x0C05A84Eu);
	r9 = 0xC06C990u; UPD(0x0C05A850u, 1);  /* 0C05A84E mov.l @(disp,pc),Rn */
	IF(0x0C05A850u); { u32 t_ = r8; PR = 0x0C05A854u; IF(0x0C05A852u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C06A690, 0x0C06A690u, 0x0C05A854u); }  /* 0C05A850 jsr @Rn */
L_0C05A854: BLKS(0x0C05A854u);
	r8 = 0xC06CA50u; UPD(0x0C05A856u, 1);  /* 0C05A854 mov.l @(disp,pc),Rn */
	IF(0x0C05A856u); { u32 t_ = r9; PR = 0x0C05A85Au; IF(0x0C05A858u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C06C990, 0x0C06C990u, 0x0C05A85Au); }  /* 0C05A856 jsr @Rn */
L_0C05A85A: BLKS(0x0C05A85Au);
	r9 = 0xC0A68C0u; UPD(0x0C05A85Cu, 1);  /* 0C05A85A mov.l @(disp,pc),Rn */
	IF(0x0C05A85Cu); { u32 t_ = r8; PR = 0x0C05A860u; IF(0x0C05A85Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C06CA50, 0x0C06CA50u, 0x0C05A860u); }  /* 0C05A85C jsr @Rn */
L_0C05A860: BLKS(0x0C05A860u);
	r8 = 0xC0AD1F0u; UPD(0x0C05A862u, 1);  /* 0C05A860 mov.l @(disp,pc),Rn */
	IF(0x0C05A862u); { u32 t_ = r9; PR = 0x0C05A866u; IF(0x0C05A864u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A68C0, 0x0C0A68C0u, 0x0C05A866u); }  /* 0C05A862 jsr @Rn */
L_0C05A866: BLKS(0x0C05A866u);
	r9 = 0xC0AD240u; UPD(0x0C05A868u, 1);  /* 0C05A866 mov.l @(disp,pc),Rn */
	IF(0x0C05A868u); { u32 t_ = r8; PR = 0x0C05A86Cu; IF(0x0C05A86Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AD1F0, 0x0C0AD1F0u, 0x0C05A86Cu); }  /* 0C05A868 jsr @Rn */
L_0C05A86C: BLKS(0x0C05A86Cu);
	r8 = 0xC050560u; UPD(0x0C05A86Eu, 1);  /* 0C05A86C mov.l @(disp,pc),Rn */
	IF(0x0C05A86Eu); { u32 t_ = r9; PR = 0x0C05A872u; IF(0x0C05A870u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AD240, 0x0C0AD240u, 0x0C05A872u); }  /* 0C05A86E jsr @Rn */
L_0C05A872: BLKS(0x0C05A872u);
	r9 = 0xC04F930u; UPD(0x0C05A874u, 1);  /* 0C05A872 mov.l @(disp,pc),Rn */
	IF(0x0C05A874u); { u32 t_ = r8; PR = 0x0C05A878u; IF(0x0C05A876u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050560, 0x0C050560u, 0x0C05A878u); }  /* 0C05A874 jsr @Rn */
L_0C05A878: BLKS(0x0C05A878u);
	r6 = 0xC286730u; UPD(0x0C05A87Au, 1);  /* 0C05A878 mov.l @(disp,pc),Rn */
	IF(0x0C05A87Au); { u32 t_ = r9; PR = 0x0C05A87Eu; W32(r6, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C05A87Eu); }  /* 0C05A87A jsr @Rn */
L_0C05A87E: BLKS(0x0C05A87Eu);
	r9 = 0x0u;  /* 0C05A87E mov #imm,Rn */
	r8 = r9;  /* 0C05A880 mov Rm,Rn */
	UPD(0x0C05A882u, 2);
L_0C05A882: BLKS(0x0C05A882u);
	r8 += r8;  /* 0C05A882 add Rm,Rn */
	r4 = 0xC2864B8u; UPD(0x0C05A886u, 2);  /* 0C05A884 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05A886 mov Rm,Rn */
	IF(0x0C05A888u); r7 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C05A88Au, 2);  /* 0C05A888 mov.w @(r0,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C05A88A tst Rm,Rn */
	if (T) { UPD(0x0C05A892u, 4); goto L_0C05A892; }  /* 0C05A88C bt */
L_0C05A88E: BLKS(0x0C05A88Eu);
	{ IF(0x0C05A890u); ; /* slot nop */ UPD(0x0C05AD10u, 3); goto L_0C05AD10; }  /* 0C05A88E bra */
L_0C05A892: BLKS(0x0C05A892u);
	r5 = 0xC275DD6u; UPD(0x0C05A894u, 1);  /* 0C05A892 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05A894 mov Rm,Rn */
	IF(0x0C05A896u); r3 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C05A898u, 2);  /* 0C05A896 mov.w @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C05A898 tst Rm,Rn */
	if (T) { UPD(0x0C05A8A0u, 4); goto L_0C05A8A0; }  /* 0C05A89A bt */
L_0C05A89C: BLKS(0x0C05A89Cu);
	{ IF(0x0C05A89Eu); ; /* slot nop */ UPD(0x0C05AD00u, 3); goto L_0C05AD00; }  /* 0C05A89C bra */
L_0C05A8A0: BLKS(0x0C05A8A0u);
	r6 = 0xC21CC40u; UPD(0x0C05A8A2u, 1);  /* 0C05A8A0 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05A8A2 mov Rm,Rn */
	IF(0x0C05A8A4u); r2 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C05A8A6u, 2);  /* 0C05A8A4 mov.w @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C05A8A6 tst Rm,Rn */
	if (T) { UPD(0x0C05A8AEu, 4); goto L_0C05A8AE; }  /* 0C05A8A8 bt */
L_0C05A8AA: BLKS(0x0C05A8AAu);
	{ IF(0x0C05A8ACu); ; /* slot nop */ UPD(0x0C05ACF0u, 3); goto L_0C05ACF0; }  /* 0C05A8AA bra */
L_0C05A8AE: BLKS(0x0C05A8AEu);
	r4 = 0xC2834FCu; UPD(0x0C05A8B0u, 1);  /* 0C05A8AE mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05A8B0 mov Rm,Rn */
	IF(0x0C05A8B2u); r7 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C05A8B4u, 2);  /* 0C05A8B2 mov.w @(r0,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C05A8B4 tst Rm,Rn */
	if (T) { UPD(0x0C05A8BCu, 4); goto L_0C05A8BC; }  /* 0C05A8B6 bt */
L_0C05A8B8: BLKS(0x0C05A8B8u);
	{ IF(0x0C05A8BAu); ; /* slot nop */ UPD(0x0C05ACE0u, 3); goto L_0C05ACE0; }  /* 0C05A8B8 bra */
L_0C05A8BC: BLKS(0x0C05A8BCu);
	r5 = 0xC21F800u; UPD(0x0C05A8BEu, 1);  /* 0C05A8BC mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05A8BE mov Rm,Rn */
	IF(0x0C05A8C0u); r3 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C05A8C2u, 2);  /* 0C05A8C0 mov.w @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C05A8C2 tst Rm,Rn */
	if (T) { UPD(0x0C05A8CAu, 4); goto L_0C05A8CA; }  /* 0C05A8C4 bt */
L_0C05A8C6: BLKS(0x0C05A8C6u);
	{ IF(0x0C05A8C8u); ; /* slot nop */ UPD(0x0C05ACD0u, 3); goto L_0C05ACD0; }  /* 0C05A8C6 bra */
L_0C05A8CA: BLKS(0x0C05A8CAu);
	r6 = 0xC21F840u; UPD(0x0C05A8CCu, 1);  /* 0C05A8CA mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05A8CC mov Rm,Rn */
	IF(0x0C05A8CEu); r2 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C05A8D0u, 2);  /* 0C05A8CE mov.w @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C05A8D0 tst Rm,Rn */
	if (T) { UPD(0x0C05A8D8u, 4); goto L_0C05A8D8; }  /* 0C05A8D2 bt */
L_0C05A8D4: BLKS(0x0C05A8D4u);
	{ IF(0x0C05A8D6u); ; /* slot nop */ UPD(0x0C05ACC0u, 3); goto L_0C05ACC0; }  /* 0C05A8D4 bra */
L_0C05A8D8: BLKS(0x0C05A8D8u);
	r4 = 0xC27DDB4u; UPD(0x0C05A8DAu, 1);  /* 0C05A8D8 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05A8DA mov Rm,Rn */
	IF(0x0C05A8DCu); r7 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C05A8DEu, 2);  /* 0C05A8DC mov.w @(r0,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C05A8DE tst Rm,Rn */
	if (T) { UPD(0x0C05A8E6u, 4); goto L_0C05A8E6; }  /* 0C05A8E0 bt */
L_0C05A8E2: BLKS(0x0C05A8E2u);
	{ IF(0x0C05A8E4u); ; /* slot nop */ UPD(0x0C05ACB0u, 3); goto L_0C05ACB0; }  /* 0C05A8E2 bra */
L_0C05A8E6: BLKS(0x0C05A8E6u);
	r5 = 0xC26C87Au; UPD(0x0C05A8E8u, 1);  /* 0C05A8E6 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05A8E8 mov Rm,Rn */
	IF(0x0C05A8EAu); r3 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C05A8ECu, 2);  /* 0C05A8EA mov.w @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C05A8EC tst Rm,Rn */
	if (T) { UPD(0x0C05A8F4u, 4); goto L_0C05A8F4; }  /* 0C05A8EE bt */
L_0C05A8F0: BLKS(0x0C05A8F0u);
	{ IF(0x0C05A8F2u); ; /* slot nop */ UPD(0x0C05ACA0u, 3); goto L_0C05ACA0; }  /* 0C05A8F0 bra */
L_0C05A8F4: BLKS(0x0C05A8F4u);
	r6 = 0xC283752u; UPD(0x0C05A8F6u, 1);  /* 0C05A8F4 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05A8F6 mov Rm,Rn */
	IF(0x0C05A8F8u); r2 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C05A8FAu, 2);  /* 0C05A8F8 mov.w @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C05A8FA tst Rm,Rn */
	if (T) { UPD(0x0C05A902u, 4); goto L_0C05A902; }  /* 0C05A8FC bt */
L_0C05A8FE: BLKS(0x0C05A8FEu);
	{ IF(0x0C05A900u); ; /* slot nop */ UPD(0x0C05AC90u, 3); goto L_0C05AC90; }  /* 0C05A8FE bra */
L_0C05A902: BLKS(0x0C05A902u);
	r4 = 0xC392968u; UPD(0x0C05A904u, 1);  /* 0C05A902 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05A904 mov Rm,Rn */
	IF(0x0C05A906u); r7 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C05A908u, 2);  /* 0C05A906 mov.w @(r0,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C05A908 tst Rm,Rn */
	if (T) { UPD(0x0C05A910u, 4); goto L_0C05A910; }  /* 0C05A90A bt */
L_0C05A90C: BLKS(0x0C05A90Cu);
	{ IF(0x0C05A90Eu); ; /* slot nop */ UPD(0x0C05AC80u, 3); goto L_0C05AC80; }  /* 0C05A90C bra */
L_0C05A910: BLKS(0x0C05A910u);
	r5 = 0xC392D82u; UPD(0x0C05A912u, 1);  /* 0C05A910 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05A912 mov Rm,Rn */
	IF(0x0C05A914u); r3 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C05A916u, 2);  /* 0C05A914 mov.w @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C05A916 tst Rm,Rn */
	if (T) { UPD(0x0C05A91Eu, 4); goto L_0C05A91E; }  /* 0C05A918 bt */
L_0C05A91A: BLKS(0x0C05A91Au);
	{ IF(0x0C05A91Cu); ; /* slot nop */ UPD(0x0C05AC70u, 3); goto L_0C05AC70; }  /* 0C05A91A bra */
L_0C05A91E: BLKS(0x0C05A91Eu);
	r2 = 0xC27557Cu; UPD(0x0C05A920u, 1);  /* 0C05A91E mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C05A920 mov Rm,Rn */
	IF(0x0C05A922u); r8 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C05A924u, 2);  /* 0C05A922 mov.w @(r0,Rm),Rn */
	T = (r8 & r8) == 0;  /* 0C05A924 tst Rm,Rn */
	if (T) { UPD(0x0C05A92Cu, 4); goto L_0C05A92C; }  /* 0C05A926 bt */
L_0C05A928: BLKS(0x0C05A928u);
	{ IF(0x0C05A92Au); ; /* slot nop */ UPD(0x0C05AC60u, 3); goto L_0C05AC60; }  /* 0C05A928 bra */
L_0C05A92C: BLKS(0x0C05A92Cu);
	r0 = r9;  /* 0C05A92C mov Rm,Rn */
	UPD(0x0C05A92Eu, 1);
L_0C05A92E: BLKS(0x0C05A92Eu);
	T = r0 == 0x14u;  /* 0C05A92E cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C05A936u, 4); goto L_0C05A936; }  /* 0C05A930 bf */
L_0C05A932: BLKS(0x0C05A932u);
	{ IF(0x0C05A934u); ; /* slot nop */ UPD(0x0C05AC40u, 3); goto L_0C05AC40; }  /* 0C05A932 bra */
L_0C05A936: BLKS(0x0C05A936u);
	r6 = r9;  /* 0C05A936 mov Rm,Rn */
	UPD(0x0C05A938u, 1);
L_0C05A938: BLKS(0x0C05A938u);
	r6 += 0x1u;  /* 0C05A938 add #imm,Rn */
	r9 = (u32)(s32)(s8)r6;  /* 0C05A93A exts.b Rm,Rn */
	r0 = 0x17u;  /* 0C05A93C mov #imm,Rn */
	T = (s32)r9 > (s32)r0;  /* 0C05A93E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05A882u, 7); goto L_0C05A882; } goto L_0C05A944; }  /* 0C05A940 bf/s */
L_0C05A944: BLKS(0x0C05A944u);
	r9 = 0xC050560u; UPD(0x0C05A946u, 2);  /* 0C05A944 mov.l @(disp,pc),Rn */
	r8 = 0xC04F770u; UPD(0x0C05A948u, 1);  /* 0C05A946 mov.l @(disp,pc),Rn */
	IF(0x0C05A948u); { u32 t_ = r9; PR = 0x0C05A94Cu; IF(0x0C05A94Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050560, 0x0C050560u, 0x0C05A94Cu); }  /* 0C05A948 jsr @Rn */
L_0C05A94C: BLKS(0x0C05A94Cu);
	r7 = 0xC7C04A8u; UPD(0x0C05A94Eu, 1);  /* 0C05A94C mov.l @(disp,pc),Rn */
	r3 = 0xC286064u; UPD(0x0C05A950u, 1);  /* 0C05A94E mov.l @(disp,pc),Rn */
	IF(0x0C05A950u); { u32 t_ = r7; PR = 0x0C05A954u; W32(r3, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C04A8, 0x0C7C04A8u, 0x0C05A954u); }  /* 0C05A950 jsr @Rn */
L_0C05A954: BLKS(0x0C05A954u);
	IF(0x0C05A954u); { u32 t_ = r9; PR = 0x0C05A958u; IF(0x0C05A956u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050560, 0x0C050560u, 0x0C05A958u); }  /* 0C05A954 jsr @Rn */
L_0C05A958: BLKS(0x0C05A958u);
	r6 = 0xC220C48u; UPD(0x0C05A95Au, 1);  /* 0C05A958 mov.l @(disp,pc),Rn */
	W32(r6, r0); UPD(0x0C05A95Cu, 1);  /* 0C05A95A mov.l Rm,@Rn */
	r0 = 0xC05B900u; UPD(0x0C05A95Eu, 1);  /* 0C05A95C mov.l @(disp,pc),Rn */
	IF(0x0C05A95Eu); { u32 t_ = r0; PR = 0x0C05A962u; IF(0x0C05A960u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B900, 0x0C05B900u, 0x0C05A962u); }  /* 0C05A95E jsr @Rn */
L_0C05A962: BLKS(0x0C05A962u);
	r4 = 0x7u;  /* 0C05A962 mov #imm,Rn */
	IF(0x0C05A964u); { u32 t_ = r8; PR = 0x0C05A968u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04F770, 0x0C04F770u, 0x0C05A968u); }  /* 0C05A964 jsr @Rn */
L_0C05A968: BLKS(0x0C05A968u);
	IF(0x0C05A968u); { u32 t_ = r9; PR = 0x0C05A96Cu; IF(0x0C05A96Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050560, 0x0C050560u, 0x0C05A96Cu); }  /* 0C05A968 jsr @Rn */
L_0C05A96C: BLKS(0x0C05A96Cu);
	r8 = 0xC050840u; UPD(0x0C05A96Eu, 1);  /* 0C05A96C mov.l @(disp,pc),Rn */
	r2 = 0xC21F7F4u; UPD(0x0C05A970u, 1);  /* 0C05A96E mov.l @(disp,pc),Rn */
	IF(0x0C05A970u); { u32 t_ = r8; PR = 0x0C05A974u; W32(r2, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C05A974u); }  /* 0C05A970 jsr @Rn */
L_0C05A974: BLKS(0x0C05A974u);
	IF(0x0C05A974u); { u32 t_ = r9; PR = 0x0C05A978u; IF(0x0C05A976u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050560, 0x0C050560u, 0x0C05A978u); }  /* 0C05A974 jsr @Rn */
L_0C05A978: BLKS(0x0C05A978u);
	r4 = 0xC21CA04u; UPD(0x0C05A97Au, 1);  /* 0C05A978 mov.l @(disp,pc),Rn */
	r3 = 0xC060350u; UPD(0x0C05A97Cu, 1);  /* 0C05A97A mov.l @(disp,pc),Rn */
	W32(r4, r0); UPD(0x0C05A97Eu, 1);  /* 0C05A97C mov.l Rm,@Rn */
	r5 = 0xC393068u; UPD(0x0C05A980u, 1);  /* 0C05A97E mov.l @(disp,pc),Rn */
	IF(0x0C05A980u); { u32 t_ = r3; PR = 0x0C05A984u; r4 = R32(r5); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C05A984u); }  /* 0C05A980 jsr @Rn */
L_0C05A984: BLKS(0x0C05A984u);
	r7 = 0xC21CA15u; UPD(0x0C05A986u, 1);  /* 0C05A984 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s8)R8(r7); UPD(0x0C05A988u, 1);  /* 0C05A986 mov.b @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C05A988 tst Rm,Rn */
	if (!T) { UPD(0x0C05A990u, 4); goto L_0C05A990; }  /* 0C05A98A bf */
L_0C05A98C: BLKS(0x0C05A98Cu);
	{ IF(0x0C05A98Eu); ; /* slot nop */ UPD(0x0C05AB5Au, 3); goto L_0C05AB5A; }  /* 0C05A98C bra */
L_0C05A990: BLKS(0x0C05A990u);
	r9 = 0xC21F880u; UPD(0x0C05A992u, 1);  /* 0C05A990 mov.l @(disp,pc),Rn */
	r5 = 0x708u; UPD(0x0C05A994u, 1);  /* 0C05A992 mov.w @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C05A996u, 1);  /* 0C05A994 mov.l @Rm,Rn */
	T = r4 == r5;  /* 0C05A996 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r7 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05A9A0u, 4); goto L_0C05A9A0; } goto L_0C05A99C; }  /* 0C05A998 bf/s */
L_0C05A99C: BLKS(0x0C05A99Cu);
	{ IF(0x0C05A99Eu); ; /* slot nop */ UPD(0x0C05ABB2u, 4); goto L_0C05ABB2; }  /* 0C05A99C bra */
L_0C05A9A0: BLKS(0x0C05A9A0u);
	r4 = 0xC393028u; UPD(0x0C05A9A2u, 1);  /* 0C05A9A0 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r4); UPD(0x0C05A9A4u, 1);  /* 0C05A9A2 mov.b @Rm,Rn */
	r6 = 0xC26C878u; UPD(0x0C05A9A6u, 1);  /* 0C05A9A4 mov.l @(disp,pc),Rn */
	r9 = r1 & 0xFF;  /* 0C05A9A6 extu.b Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C05A9AAu, 2);  /* 0C05A9A8 mov.b @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C05A9AA tst Rm,Rn */
	r3 = r5 & 0xFF;  /* 0C05A9AC extu.b Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r8 = r_; }  /* 0C05A9AE negc Rm,Rn */
	T = r3 >= r9;  /* 0C05A9B0 cmp/hs Rm,Rn */
	IF(0x0C05A9B2u); r0 = T;  /* 0C05A9B2 movt Rn */
	r3 = 0xC21F5EAu; UPD(0x0C05A9B6u, 6);  /* 0C05A9B4 mov.l @(disp,pc),Rn */
	r8 &= r0;  /* 0C05A9B6 and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C05A9B8 tst Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C05A9BCu, 3);  /* 0C05A9BA mov.b @Rm,Rn */
	IF(0x0C05A9BCu); r5 = T;  /* 0C05A9BC movt Rn */
	IF(0x0C05A9BEu); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C05A9BE rotl Rn */
	IF(0x0C05A9C0u); r2 = T;  /* 0C05A9C0 movt Rn */
	r8 |= r5;  /* 0C05A9C2 or Rm,Rn */
	r8 &= r2;  /* 0C05A9C4 and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C05A9C6 tst Rm,Rn */
	if (!T) { UPD(0x0C05A9CEu, 9); goto L_0C05A9CE; }  /* 0C05A9C8 bf */
L_0C05A9CA: BLKS(0x0C05A9CAu);
	{ IF(0x0C05A9CCu); ; /* slot nop */ UPD(0x0C05AC30u, 3); goto L_0C05AC30; }  /* 0C05A9CA bra */
L_0C05A9CE: BLKS(0x0C05A9CEu);
	r5 = 0xC21F589u; UPD(0x0C05A9D0u, 1);  /* 0C05A9CE mov.l @(disp,pc),Rn */
	r8 = 0x1u;  /* 0C05A9D0 mov #imm,Rn */
	W8(r5, r8); UPD(0x0C05A9D4u, 2);  /* 0C05A9D2 mov.b Rm,@Rn */
	r0 = r4;  /* 0C05A9D4 mov Rm,Rn */
	UPD(0x0C05A9D6u, 1);
L_0C05A9D6: BLKS(0x0C05A9D6u);
	IF(0x0C05A9D6u); r1 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C05A9D8u, 1);  /* 0C05A9D6 mov.b @(r0,Rm),Rn */
	r0 = r6;  /* 0C05A9D8 mov Rm,Rn */
	r9 = r1 & 0xFF;  /* 0C05A9DA extu.b Rm,Rn */
	IF(0x0C05A9DCu); r8 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C05A9DEu, 3);  /* 0C05A9DC mov.b @(r0,Rm),Rn */
	T = (r9 & r9) == 0;  /* 0C05A9DE tst Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C05A9E0 negc Rm,Rn */
	r3 = r8 & 0xFF;  /* 0C05A9E2 extu.b Rm,Rn */
	T = r3 >= r9;  /* 0C05A9E4 cmp/hs Rm,Rn */
	IF(0x0C05A9E6u); r0 = T;  /* 0C05A9E6 movt Rn */
	r7 = 0xC2177F8u; UPD(0x0C05A9EAu, 6);  /* 0C05A9E8 mov.l @(disp,pc),Rn */
	r4 &= r0;  /* 0C05A9EA and Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C05A9EEu, 2);  /* 0C05A9EC mov.b @Rm,Rn */
	{ r6 = 0xFFFFFFF9u; /* slot mov #imm,Rn */ UPD(0x0C05AB40u, 3); goto L_0C05AB40; }  /* 0C05A9EE bra */
L_0C05AB40: BLKS(0x0C05AB40u);
	T = (r9 & r9) == 0;  /* 0C05AB40 tst Rm,Rn */
	IF(0x0C05AB42u); ARG0(0x406Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C05AB42 shad Rm,Rn */
	IF(0x0C05AB44u); r2 = T;  /* 0C05AB44 movt Rn */
	r4 |= r2;  /* 0C05AB46 or Rm,Rn */
	r0 &= 0x1u;  /* 0C05AB48 and #imm,r0 */
	r4 &= r0;  /* 0C05AB4A and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C05AB4C tst Rm,Rn */
	{ u32 c_ = T; r4 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05AB54u, 10); goto L_0C05AB54; } goto L_0C05AB52; }  /* 0C05AB4E bt/s */
L_0C05AB52: BLKS(0x0C05AB52u);
	W8(r5, r4); UPD(0x0C05AB54u, 2);  /* 0C05AB52 mov.b Rm,@Rn */
L_0C05AB54: BLKS(0x0C05AB54u);
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C05AB56u, 1);  /* 0C05AB54 mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C05AB56 tst Rm,Rn */
	if (!T) { UPD(0x0C05ABB2u, 4); goto L_0C05ABB2; }  /* 0C05AB58 bf */
L_0C05AB5A: BLKS(0x0C05AB5Au);
	r4 = 0xC2862A2u; UPD(0x0C05AB5Cu, 1);  /* 0C05AB5A mov.l @(disp,pc),Rn */
	r8 = 0x1u;  /* 0C05AB5C mov #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C05AB60u, 2);  /* 0C05AB5E mov.b @Rm,Rn */
	r0 = 0x5u;  /* 0C05AB60 mov #imm,Rn */
	r9 = 0xC21F7F9u; UPD(0x0C05AB64u, 2);  /* 0C05AB62 mov.l @(disp,pc),Rn */
	IF(0x0C05AB64u); ARG0(0x45DCu); { s32 s_ = (s32)r13; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C05AB64 shad Rm,Rn */
	r7 = 0xC220C53u; UPD(0x0C05AB68u, 2);  /* 0C05AB66 mov.l @(disp,pc),Rn */
	r5 ^= r8;  /* 0C05AB68 xor Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C05AB6Cu, 2);  /* 0C05AB6A mov.b @Rm,Rn */
	r5 &= r8;  /* 0C05AB6C and Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C05AB70u, 2);  /* 0C05AB6E mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C05AB70 tst Rm,Rn */
	r9 = 0xC283750u; UPD(0x0C05AB74u, 2);  /* 0C05AB72 mov.l @(disp,pc),Rn */
	r3 = r6 & 0xFF;  /* 0C05AB74 extu.b Rm,Rn */
	IF(0x0C05AB76u); r8 = T;  /* 0C05AB76 movt Rn */
	T = r0 >= r3;  /* 0C05AB78 cmp/hs Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C05AB7Cu, 4);  /* 0C05AB7A mov.b @Rm,Rn */
	IF(0x0C05AB7Cu); r4 = T;  /* 0C05AB7C movt Rn */
	r7 = 0xC286748u; UPD(0x0C05AB80u, 2);  /* 0C05AB7E mov.l @(disp,pc),Rn */
	r8 &= r4;  /* 0C05AB80 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C05AB82 tst Rm,Rn */
	r6 = R32(r7); UPD(0x0C05AB86u, 3);  /* 0C05AB84 mov.l @Rm,Rn */
	IF(0x0C05AB86u); r4 = T;  /* 0C05AB86 movt Rn */
	r5 |= r8;  /* 0C05AB88 or Rm,Rn */
	r0 = 0xFFFFFFFFu;  /* 0C05AB8A mov #imm,Rn */
	T = (r6 & r6) == 0;  /* 0C05AB8C tst Rm,Rn */
	r3 = 0xC27DDF4u; UPD(0x0C05AB90u, 5);  /* 0C05AB8E mov.l @(disp,pc),Rn */
	{ u32 t_ = 0u - r0, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r8 = r_; }  /* 0C05AB90 negc Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C05AB94u, 2);  /* 0C05AB92 mov.b @Rm,Rn */
	IF(0x0C05AB94u); ARG0(0x40DCu); { s32 s_ = (s32)r13; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C05AB94 shad Rm,Rn */
	r9 = 0xC21F7F0u; UPD(0x0C05AB98u, 2);  /* 0C05AB96 mov.l @(disp,pc),Rn */
	r0 ^= 0x1u;  /* 0C05AB98 xor #imm,r0 */
	r0 &= 0x1u;  /* 0C05AB9A and #imm,r0 */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C05AB9Eu, 3);  /* 0C05AB9C mov.b @Rm,Rn */
	r8 &= r0;  /* 0C05AB9E and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C05ABA0 tst Rm,Rn */
	r8 |= r4;  /* 0C05ABA2 or Rm,Rn */
	IF(0x0C05ABA4u); r7 = T;  /* 0C05ABA4 movt Rn */
	r5 &= r8;  /* 0C05ABA6 and Rm,Rn */
	r5 &= r7;  /* 0C05ABA8 and Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C05ABAA tst Rm,Rn */
	if (T) { UPD(0x0C05ABB2u, 10); goto L_0C05ABB2; }  /* 0C05ABAC bt */
L_0C05ABAE: BLKS(0x0C05ABAEu);
	{ IF(0x0C05ABB0u); ; /* slot nop */ UPD(0x0C05A778u, 3); goto L_0C05A778; }  /* 0C05ABAE bra */
L_0C05ABB2: BLKS(0x0C05ABB2u);
	r8 = 0xC0AF770u; UPD(0x0C05ABB4u, 1);  /* 0C05ABB2 mov.l @(disp,pc),Rn */
	r9 = 0xC058810u; UPD(0x0C05ABB6u, 1);  /* 0C05ABB4 mov.l @(disp,pc),Rn */
	IF(0x0C05ABB6u); { u32 t_ = r8; PR = 0x0C05ABBAu; r12 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AF770, 0x0C0AF770u, 0x0C05ABBAu); }  /* 0C05ABB6 jsr @Rn */
L_0C05ABBA: BLKS(0x0C05ABBAu);
	r11 = 0xC21CA15u; UPD(0x0C05ABBCu, 1);  /* 0C05ABBA mov.l @(disp,pc),Rn */
	IF(0x0C05ABBCu); { u32 t_ = r9; PR = 0x0C05ABC0u; IF(0x0C05ABBEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C058810, 0x0C058810u, 0x0C05ABC0u); }  /* 0C05ABBC jsr @Rn */
L_0C05ABC0: BLKS(0x0C05ABC0u);
	r13 = 0xC28599Cu; UPD(0x0C05ABC2u, 1);  /* 0C05ABC0 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C05ABC4u, 1);  /* 0C05ABC2 mov.b @Rm,Rn */
	r2 = r10 & 0xFF;  /* 0C05ABC4 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C05ABC6 tst Rm,Rn */
	{ u32 c_ = !T; W8(r13, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C05AC0Eu, 5); goto L_0C05AC0E; } UPD(0x0C05ABCCu, 1); goto L_0C05ABCC; }  /* 0C05ABC8 bf/s */
L_0C05ABCC: BLKS(0x0C05ABCCu);
	r6 = 0xC392B08u; UPD(0x0C05ABCEu, 1);  /* 0C05ABCC mov.l @(disp,pc),Rn */
	r3 = 0x2u;  /* 0C05ABCE mov #imm,Rn */
	r7 = 0xC21F589u; UPD(0x0C05ABD2u, 2);  /* 0C05ABD0 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C05ABD4u, 1);  /* 0C05ABD2 mov.b @Rm,Rn */
	W8(r7, r2); UPD(0x0C05ABD6u, 1);  /* 0C05ABD4 mov.b Rm,@Rn */
	r6 = 0xC220C36u; UPD(0x0C05ABD8u, 1);  /* 0C05ABD6 mov.l @(disp,pc),Rn */
	r7 = r0 & 0xFF;  /* 0C05ABD8 extu.b Rm,Rn */
	T = r7 > r3;  /* 0C05ABDA cmp/hi Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r6); UPD(0x0C05ABDEu, 3);  /* 0C05ABDC mov.w @Rm,Rn */
	IF(0x0C05ABDEu); r1 = T;  /* 0C05ABDE movt Rn */
	T = r0 == 0x40u;  /* 0C05ABE0 cmp/eq #imm,r0 */
	r3 = 0xFFFFFFFFu;  /* 0C05ABE2 mov #imm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C05ABE4 negc Rm,Rn */
	r5 &= r1;  /* 0C05ABE6 and Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C05ABE8 tst Rm,Rn */
	{ u32 c_ = T; r13 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05ABF8u, 9); goto L_0C05ABF8; } goto L_0C05ABEE; }  /* 0C05ABEA bt/s */
L_0C05ABEE: BLKS(0x0C05ABEEu);
	r2 = r0;  /* 0C05ABEE mov Rm,Rn */
	r2 += 0x1u;  /* 0C05ABF0 add #imm,Rn */
	W16(r6, r2); UPD(0x0C05ABF4u, 4);  /* 0C05ABF2 mov.w Rm,@Rn */
	r0 = r2;  /* 0C05ABF4 mov Rm,Rn */
	r13 = 0x1u;  /* 0C05ABF6 mov #imm,Rn */
	UPD(0x0C05ABF8u, 2);
L_0C05ABF8: BLKS(0x0C05ABF8u);
	T = r13 >= r7;  /* 0C05ABF8 cmp/hs Rm,Rn */
	IF(0x0C05ABFAu); r10 = T;  /* 0C05ABFA movt Rn */
	r11 = r0 & 0xFFFF;  /* 0C05ABFC extu.w Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C05ABFE tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C05AC00 negc Rm,Rn */
	r4 &= r10;  /* 0C05AC02 and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C05AC04 tst Rm,Rn */
	if (T) { UPD(0x0C05AC0Eu, 10); goto L_0C05AC0E; }  /* 0C05AC06 bt */
L_0C05AC08: BLKS(0x0C05AC08u);
	r12 = r0;  /* 0C05AC08 mov Rm,Rn */
	r12 += 0xFFFFFFFFu;  /* 0C05AC0A add #imm,Rn */
	W16(r6, r12); UPD(0x0C05AC0Eu, 3);  /* 0C05AC0C mov.w Rm,@Rn */
L_0C05AC0E: BLKS(0x0C05AC0Eu);
	r9 = 0xC286277u; UPD(0x0C05AC10u, 1);  /* 0C05AC0E mov.l @(disp,pc),Rn */
	r8 = 0x20u;  /* 0C05AC10 mov #imm,Rn */
	W8(r9, r8); UPD(0x0C05AC14u, 2);  /* 0C05AC12 mov.b Rm,@Rn */
	r15 = r14;  /* 0C05AC14 mov Rm,Rn */
	IF(0x0C05AC16u); PR = R32(r15); r15 += 4; UPD(0x0C05AC18u, 2);  /* 0C05AC16 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05AC1Au, 1);  /* 0C05AC18 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05AC1Cu, 1);  /* 0C05AC1A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05AC1Eu, 1);  /* 0C05AC1C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05AC20u, 1);  /* 0C05AC1E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05AC22u, 1);  /* 0C05AC20 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05AC24u, 1);  /* 0C05AC22 mov.l @Rm+,Rn */
	IF(0x0C05AC24u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05AC24 rts */
L_0C05AC30: BLKS(0x0C05AC30u);
	r5 = 0xC21F589u; UPD(0x0C05AC32u, 1);  /* 0C05AC30 mov.l @(disp,pc),Rn */
	{ r0 = r4; /* slot mov Rm,Rn */ UPD(0x0C05A9D6u, 3); goto L_0C05A9D6; }  /* 0C05AC32 bra */
L_0C05AC40: BLKS(0x0C05AC40u);
	r8 = 0xC066640u; UPD(0x0C05AC42u, 1);  /* 0C05AC40 mov.l @(disp,pc),Rn */
	IF(0x0C05AC42u); { u32 t_ = r8; PR = 0x0C05AC46u; IF(0x0C05AC44u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C066640, 0x0C066640u, 0x0C05AC46u); }  /* 0C05AC42 jsr @Rn */
L_0C05AC46: BLKS(0x0C05AC46u);
	r8 = 0xC064F50u; UPD(0x0C05AC48u, 1);  /* 0C05AC46 mov.l @(disp,pc),Rn */
	IF(0x0C05AC48u); { u32 t_ = r8; PR = 0x0C05AC4Cu; IF(0x0C05AC4Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C064F50, 0x0C064F50u, 0x0C05AC4Cu); }  /* 0C05AC48 jsr @Rn */
L_0C05AC4C: BLKS(0x0C05AC4Cu);
	r8 = 0xC065FA0u; UPD(0x0C05AC4Eu, 1);  /* 0C05AC4C mov.l @(disp,pc),Rn */
	IF(0x0C05AC4Eu); { u32 t_ = r8; PR = 0x0C05AC52u; IF(0x0C05AC50u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C065FA0, 0x0C065FA0u, 0x0C05AC52u); }  /* 0C05AC4E jsr @Rn */
L_0C05AC52: BLKS(0x0C05AC52u);
	r8 = 0xC0A98E0u; UPD(0x0C05AC54u, 1);  /* 0C05AC52 mov.l @(disp,pc),Rn */
	IF(0x0C05AC54u); { u32 t_ = r8; PR = 0x0C05AC58u; IF(0x0C05AC56u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A98E0, 0x0C0A98E0u, 0x0C05AC58u); }  /* 0C05AC54 jsr @Rn */
L_0C05AC58: BLKS(0x0C05AC58u);
	{ r6 = r9; /* slot mov Rm,Rn */ UPD(0x0C05A938u, 3); goto L_0C05A938; }  /* 0C05AC58 bra */
L_0C05AC60: BLKS(0x0C05AC60u);
	r8 = 0xC0AD2A0u; UPD(0x0C05AC62u, 1);  /* 0C05AC60 mov.l @(disp,pc),Rn */
	IF(0x0C05AC62u); { u32 t_ = r8; PR = 0x0C05AC66u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AD2A0, 0x0C0AD2A0u, 0x0C05AC66u); }  /* 0C05AC62 jsr @Rn */
L_0C05AC66: BLKS(0x0C05AC66u);
	{ r0 = r9; /* slot mov Rm,Rn */ UPD(0x0C05A92Eu, 3); goto L_0C05A92E; }  /* 0C05AC66 bra */
L_0C05AC70: BLKS(0x0C05AC70u);
	r0 = 0xC06C850u; UPD(0x0C05AC72u, 1);  /* 0C05AC70 mov.l @(disp,pc),Rn */
	IF(0x0C05AC72u); { u32 t_ = r0; PR = 0x0C05AC76u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06C850, 0x0C06C850u, 0x0C05AC76u); }  /* 0C05AC72 jsr @Rn */
L_0C05AC76: BLKS(0x0C05AC76u);
	{ IF(0x0C05AC78u); ; /* slot nop */ UPD(0x0C05A91Eu, 3); goto L_0C05A91E; }  /* 0C05AC76 bra */
L_0C05AC80: BLKS(0x0C05AC80u);
	r0 = 0xC06A700u; UPD(0x0C05AC82u, 1);  /* 0C05AC80 mov.l @(disp,pc),Rn */
	IF(0x0C05AC82u); { u32 t_ = r0; PR = 0x0C05AC86u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06A700, 0x0C06A700u, 0x0C05AC86u); }  /* 0C05AC82 jsr @Rn */
L_0C05AC86: BLKS(0x0C05AC86u);
	{ IF(0x0C05AC88u); ; /* slot nop */ UPD(0x0C05A910u, 3); goto L_0C05A910; }  /* 0C05AC86 bra */
L_0C05AC90: BLKS(0x0C05AC90u);
	r0 = 0xC0A6810u; UPD(0x0C05AC92u, 1);  /* 0C05AC90 mov.l @(disp,pc),Rn */
	IF(0x0C05AC92u); { u32 t_ = r0; PR = 0x0C05AC96u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A6810, 0x0C0A6810u, 0x0C05AC96u); }  /* 0C05AC92 jsr @Rn */
L_0C05AC96: BLKS(0x0C05AC96u);
	{ IF(0x0C05AC98u); ; /* slot nop */ UPD(0x0C05A902u, 3); goto L_0C05A902; }  /* 0C05AC96 bra */
L_0C05ACA0: BLKS(0x0C05ACA0u);
	r0 = 0xC06C8F0u; UPD(0x0C05ACA2u, 1);  /* 0C05ACA0 mov.l @(disp,pc),Rn */
	IF(0x0C05ACA2u); { u32 t_ = r0; PR = 0x0C05ACA6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06C8F0, 0x0C06C8F0u, 0x0C05ACA6u); }  /* 0C05ACA2 jsr @Rn */
L_0C05ACA6: BLKS(0x0C05ACA6u);
	{ IF(0x0C05ACA8u); ; /* slot nop */ UPD(0x0C05A8F4u, 3); goto L_0C05A8F4; }  /* 0C05ACA6 bra */
L_0C05ACB0: BLKS(0x0C05ACB0u);
	r0 = 0xC0AD350u; UPD(0x0C05ACB2u, 1);  /* 0C05ACB0 mov.l @(disp,pc),Rn */
	IF(0x0C05ACB2u); { u32 t_ = r0; PR = 0x0C05ACB6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AD350, 0x0C0AD350u, 0x0C05ACB6u); }  /* 0C05ACB2 jsr @Rn */
L_0C05ACB6: BLKS(0x0C05ACB6u);
	{ IF(0x0C05ACB8u); ; /* slot nop */ UPD(0x0C05A8E6u, 3); goto L_0C05A8E6; }  /* 0C05ACB6 bra */
L_0C05ACC0: BLKS(0x0C05ACC0u);
	r0 = 0xC064900u; UPD(0x0C05ACC2u, 1);  /* 0C05ACC0 mov.l @(disp,pc),Rn */
	IF(0x0C05ACC2u); { u32 t_ = r0; PR = 0x0C05ACC6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C064900, 0x0C064900u, 0x0C05ACC6u); }  /* 0C05ACC2 jsr @Rn */
L_0C05ACC6: BLKS(0x0C05ACC6u);
	{ IF(0x0C05ACC8u); ; /* slot nop */ UPD(0x0C05A8D8u, 3); goto L_0C05A8D8; }  /* 0C05ACC6 bra */
L_0C05ACD0: BLKS(0x0C05ACD0u);
	r0 = 0xC066770u; UPD(0x0C05ACD2u, 1);  /* 0C05ACD0 mov.l @(disp,pc),Rn */
	IF(0x0C05ACD2u); { u32 t_ = r0; PR = 0x0C05ACD6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C066770, 0x0C066770u, 0x0C05ACD6u); }  /* 0C05ACD2 jsr @Rn */
L_0C05ACD6: BLKS(0x0C05ACD6u);
	{ IF(0x0C05ACD8u); ; /* slot nop */ UPD(0x0C05A8CAu, 3); goto L_0C05A8CA; }  /* 0C05ACD6 bra */
L_0C05ACE0: BLKS(0x0C05ACE0u);
	r0 = 0xC06B570u; UPD(0x0C05ACE2u, 1);  /* 0C05ACE0 mov.l @(disp,pc),Rn */
	IF(0x0C05ACE2u); { u32 t_ = r0; PR = 0x0C05ACE6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06B570, 0x0C06B570u, 0x0C05ACE6u); }  /* 0C05ACE2 jsr @Rn */
L_0C05ACE6: BLKS(0x0C05ACE6u);
	{ IF(0x0C05ACE8u); ; /* slot nop */ UPD(0x0C05A8BCu, 3); goto L_0C05A8BC; }  /* 0C05ACE6 bra */
L_0C05ACF0: BLKS(0x0C05ACF0u);
	r0 = 0xC06B650u; UPD(0x0C05ACF2u, 1);  /* 0C05ACF0 mov.l @(disp,pc),Rn */
	IF(0x0C05ACF2u); { u32 t_ = r0; PR = 0x0C05ACF6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06B650, 0x0C06B650u, 0x0C05ACF6u); }  /* 0C05ACF2 jsr @Rn */
L_0C05ACF6: BLKS(0x0C05ACF6u);
	{ IF(0x0C05ACF8u); ; /* slot nop */ UPD(0x0C05A8AEu, 3); goto L_0C05A8AE; }  /* 0C05ACF6 bra */
L_0C05AD00: BLKS(0x0C05AD00u);
	r0 = 0xC0A01E0u; UPD(0x0C05AD02u, 1);  /* 0C05AD00 mov.l @(disp,pc),Rn */
	IF(0x0C05AD02u); { u32 t_ = r0; PR = 0x0C05AD06u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A01E0, 0x0C0A01E0u, 0x0C05AD06u); }  /* 0C05AD02 jsr @Rn */
L_0C05AD06: BLKS(0x0C05AD06u);
	{ IF(0x0C05AD08u); ; /* slot nop */ UPD(0x0C05A8A0u, 3); goto L_0C05A8A0; }  /* 0C05AD06 bra */
L_0C05AD10: BLKS(0x0C05AD10u);
	r0 = 0xC0AF650u; UPD(0x0C05AD12u, 1);  /* 0C05AD10 mov.l @(disp,pc),Rn */
	IF(0x0C05AD12u); { u32 t_ = r0; PR = 0x0C05AD16u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AF650, 0x0C0AF650u, 0x0C05AD16u); }  /* 0C05AD12 jsr @Rn */
L_0C05AD16: BLKS(0x0C05AD16u);
	{ IF(0x0C05AD18u); ; /* slot nop */ UPD(0x0C05A892u, 3); goto L_0C05A892; }  /* 0C05AD16 bra */
L_0C05AD20: BLKS(0x0C05AD20u);
	r8 = 0xC064D40u; UPD(0x0C05AD22u, 1);  /* 0C05AD20 mov.l @(disp,pc),Rn */
	r9 = 0xC066560u; UPD(0x0C05AD24u, 1);  /* 0C05AD22 mov.l @(disp,pc),Rn */
	IF(0x0C05AD24u); { u32 t_ = r8; PR = 0x0C05AD28u; IF(0x0C05AD26u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C064D40, 0x0C064D40u, 0x0C05AD28u); }  /* 0C05AD24 jsr @Rn */
L_0C05AD28: BLKS(0x0C05AD28u);
	r2 = 0xC062970u; UPD(0x0C05AD2Au, 1);  /* 0C05AD28 mov.l @(disp,pc),Rn */
	r8 = 0xC06A7C0u; UPD(0x0C05AD2Cu, 1);  /* 0C05AD2A mov.l @(disp,pc),Rn */
	IF(0x0C05AD2Cu); { u32 t_ = r2; PR = 0x0C05AD30u; IF(0x0C05AD2Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C062970, 0x0C062970u, 0x0C05AD30u); }  /* 0C05AD2C jsr @Rn */
L_0C05AD30: BLKS(0x0C05AD30u);
	IF(0x0C05AD30u); { u32 t_ = r9; PR = 0x0C05AD34u; IF(0x0C05AD32u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C066560, 0x0C066560u, 0x0C05AD34u); }  /* 0C05AD30 jsr @Rn */
L_0C05AD34: BLKS(0x0C05AD34u);
	r9 = 0xC0AE540u; UPD(0x0C05AD36u, 1);  /* 0C05AD34 mov.l @(disp,pc),Rn */
	IF(0x0C05AD36u); { u32 t_ = r8; PR = 0x0C05AD3Au; IF(0x0C05AD38u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C06A7C0, 0x0C06A7C0u, 0x0C05AD3Au); }  /* 0C05AD36 jsr @Rn */
L_0C05AD3A: BLKS(0x0C05AD3Au);
	r8 = 0xC0A9A40u; UPD(0x0C05AD3Cu, 1);  /* 0C05AD3A mov.l @(disp,pc),Rn */
	IF(0x0C05AD3Cu); { u32 t_ = r9; PR = 0x0C05AD40u; IF(0x0C05AD3Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AE540, 0x0C0AE540u, 0x0C05AD40u); }  /* 0C05AD3C jsr @Rn */
L_0C05AD40: BLKS(0x0C05AD40u);
	r9 = 0xC0A6770u; UPD(0x0C05AD42u, 1);  /* 0C05AD40 mov.l @(disp,pc),Rn */
	IF(0x0C05AD42u); { u32 t_ = r8; PR = 0x0C05AD46u; IF(0x0C05AD44u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A9A40, 0x0C0A9A40u, 0x0C05AD46u); }  /* 0C05AD42 jsr @Rn */
L_0C05AD46: BLKS(0x0C05AD46u);
	r8 = 0xC06AD80u; UPD(0x0C05AD48u, 1);  /* 0C05AD46 mov.l @(disp,pc),Rn */
	IF(0x0C05AD48u); { u32 t_ = r9; PR = 0x0C05AD4Cu; IF(0x0C05AD4Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A6770, 0x0C0A6770u, 0x0C05AD4Cu); }  /* 0C05AD48 jsr @Rn */
L_0C05AD4C: BLKS(0x0C05AD4Cu);
	r9 = 0xC0AD120u; UPD(0x0C05AD4Eu, 1);  /* 0C05AD4C mov.l @(disp,pc),Rn */
	IF(0x0C05AD4Eu); { u32 t_ = r8; PR = 0x0C05AD52u; IF(0x0C05AD50u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C06AD80, 0x0C06AD80u, 0x0C05AD52u); }  /* 0C05AD4E jsr @Rn */
L_0C05AD52: BLKS(0x0C05AD52u);
	r8 = 0xC7C0930u; UPD(0x0C05AD54u, 1);  /* 0C05AD52 mov.l @(disp,pc),Rn */
	IF(0x0C05AD54u); { u32 t_ = r9; PR = 0x0C05AD58u; IF(0x0C05AD56u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AD120, 0x0C0AD120u, 0x0C05AD58u); }  /* 0C05AD54 jsr @Rn */
L_0C05AD58: BLKS(0x0C05AD58u);
	r9 = 0xC050560u; UPD(0x0C05AD5Au, 1);  /* 0C05AD58 mov.l @(disp,pc),Rn */
	IF(0x0C05AD5Au); { u32 t_ = r9; PR = 0x0C05AD5Eu; IF(0x0C05AD5Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050560, 0x0C050560u, 0x0C05AD5Eu); }  /* 0C05AD5A jsr @Rn */
L_0C05AD5E: BLKS(0x0C05AD5Eu);
	r5 = 0xC2175E0u; UPD(0x0C05AD60u, 1);  /* 0C05AD5E mov.l @(disp,pc),Rn */
	IF(0x0C05AD60u); { u32 t_ = r8; PR = 0x0C05AD64u; W32(r5, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C05E6E0, 0x0C05E6E0u, 0x0C05AD64u); }  /* 0C05AD60 jsr @Rn */
L_0C05AD64: BLKS(0x0C05AD64u);
	r3 = 0xC05EAA0u; UPD(0x0C05AD66u, 1);  /* 0C05AD64 mov.l @(disp,pc),Rn */
	r8 = 0xC7C18E4u; UPD(0x0C05AD68u, 1);  /* 0C05AD66 mov.l @(disp,pc),Rn */
	IF(0x0C05AD68u); { u32 t_ = r3; PR = 0x0C05AD6Cu; IF(0x0C05AD6Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05EAA0, 0x0C05EAA0u, 0x0C05AD6Cu); }  /* 0C05AD68 jsr @Rn */
L_0C05AD6C: BLKS(0x0C05AD6Cu);
	r0 = 0xC05ED70u; UPD(0x0C05AD6Eu, 1);  /* 0C05AD6C mov.l @(disp,pc),Rn */
	IF(0x0C05AD6Eu); { u32 t_ = r0; PR = 0x0C05AD72u; IF(0x0C05AD70u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05ED70, 0x0C05ED70u, 0x0C05AD72u); }  /* 0C05AD6E jsr @Rn */
L_0C05AD72: BLKS(0x0C05AD72u);
	r4 = 0xC05F020u; UPD(0x0C05AD74u, 1);  /* 0C05AD72 mov.l @(disp,pc),Rn */
	IF(0x0C05AD74u); { u32 t_ = r4; PR = 0x0C05AD78u; IF(0x0C05AD76u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05F020, 0x0C05F020u, 0x0C05AD78u); }  /* 0C05AD74 jsr @Rn */
L_0C05AD78: BLKS(0x0C05AD78u);
	r7 = 0xC05F1E0u; UPD(0x0C05AD7Au, 1);  /* 0C05AD78 mov.l @(disp,pc),Rn */
	IF(0x0C05AD7Au); { u32 t_ = r7; PR = 0x0C05AD7Eu; IF(0x0C05AD7Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05F1E0, 0x0C05F1E0u, 0x0C05AD7Eu); }  /* 0C05AD7A jsr @Rn */
L_0C05AD7E: BLKS(0x0C05AD7Eu);
	r6 = 0xC7C1AB4u; UPD(0x0C05AD80u, 1);  /* 0C05AD7E mov.l @(disp,pc),Rn */
	IF(0x0C05AD80u); { u32 t_ = r6; PR = 0x0C05AD84u; IF(0x0C05AD82u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C7C1AB4, 0x0C7C1AB4u, 0x0C05AD84u); }  /* 0C05AD80 jsr @Rn */
L_0C05AD84: BLKS(0x0C05AD84u);
	r2 = 0xC05F680u; UPD(0x0C05AD86u, 1);  /* 0C05AD84 mov.l @(disp,pc),Rn */
	IF(0x0C05AD86u); { u32 t_ = r2; PR = 0x0C05AD8Au; IF(0x0C05AD88u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05F680, 0x0C05F680u, 0x0C05AD8Au); }  /* 0C05AD86 jsr @Rn */
L_0C05AD8A: BLKS(0x0C05AD8Au);
	IF(0x0C05AD8Au); { u32 t_ = r9; PR = 0x0C05AD8Eu; IF(0x0C05AD8Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050560, 0x0C050560u, 0x0C05AD8Eu); }  /* 0C05AD8A jsr @Rn */
L_0C05AD8E: BLKS(0x0C05AD8Eu);
	r5 = 0xC286060u; UPD(0x0C05AD90u, 1);  /* 0C05AD8E mov.l @(disp,pc),Rn */
	IF(0x0C05AD90u); { u32 t_ = r8; PR = 0x0C05AD94u; W32(r5, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C060D90, 0x0C060D90u, 0x0C05AD94u); }  /* 0C05AD90 jsr @Rn */
L_0C05AD94: BLKS(0x0C05AD94u);
	IF(0x0C05AD94u); { u32 t_ = r9; PR = 0x0C05AD98u; IF(0x0C05AD96u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050560, 0x0C050560u, 0x0C05AD98u); }  /* 0C05AD94 jsr @Rn */
L_0C05AD98: BLKS(0x0C05AD98u);
	r9 = 0xC392E04u; UPD(0x0C05AD9Au, 1);  /* 0C05AD98 mov.l @(disp,pc),Rn */
	W32(r9, r0); UPD(0x0C05AD9Cu, 1);  /* 0C05AD9A mov.l Rm,@Rn */
	r0 = 0xC21F880u; UPD(0x0C05AD9Eu, 1);  /* 0C05AD9C mov.l @(disp,pc),Rn */
	r3 = R32(r0); UPD(0x0C05ADA0u, 1);  /* 0C05AD9E mov.l @Rm,Rn */
	r3 += 0x1u;  /* 0C05ADA0 add #imm,Rn */
	{ W32(r0, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C05A83Au, 4); goto L_0C05A83A; }  /* 0C05ADA2 bra */
}

/* FUN_0c05ae80 */
void f_0C05AE80(sh3_t *c)
{
	LOCALS;
L_0C05AE80: BLKS(0x0C05AE80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05AE82u, 1);  /* 0C05AE80 mov.l Rm,@-Rn */
	r2 = 0xC22486Eu; UPD(0x0C05AE84u, 1);  /* 0C05AE82 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05AE86u, 1);  /* 0C05AE84 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C05AE88u, 1);  /* 0C05AE86 mov.b @Rm,Rn */
	r14 = r15;  /* 0C05AE88 mov Rm,Rn */
	r7 = 0x708u; UPD(0x0C05AE8Cu, 2);  /* 0C05AE8A mov.w @(disp,pc),Rn */
	r4 = r0 & 0xFF;  /* 0C05AE8C extu.b Rm,Rn */
	r5 = 0xC21CA15u; UPD(0x0C05AE90u, 2);  /* 0C05AE8E mov.l @(disp,pc),Rn */
	IF(0x0C05AE90u); MACL = r4 * r7;  /* 0C05AE90 mul.l Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C05AE94u, 3);  /* 0C05AE92 mov.b @Rm,Rn */
	r8 = 0xC21F880u; UPD(0x0C05AE96u, 1);  /* 0C05AE94 mov.l @(disp,pc),Rn */
	T = (r3 & r3) == 0;  /* 0C05AE96 tst Rm,Rn */
	r0 = R32(r8); UPD(0x0C05AE9Au, 2);  /* 0C05AE98 mov.l @Rm,Rn */
	r5 = 0xFFFFFFFFu;  /* 0C05AE9A mov #imm,Rn */
	r2 = 0x707u; UPD(0x0C05AE9Eu, 2);  /* 0C05AE9C mov.w @(disp,pc),Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C05AE9E negc Rm,Rn */
	IF(0x0C05AEA0u); r7 = MACL;  /* 0C05AEA0 sts macl,Rn */
	r7 += r0;  /* 0C05AEA2 add Rm,Rn */
	T = (s32)r2 >= (s32)r0;  /* 0C05AEA4 cmp/ge Rm,Rn */
	r6 = 0xFFFFF1F0u; UPD(0x0C05AEA8u, 5);  /* 0C05AEA6 mov.w @(disp,pc),Rn */
	r7 += r7;  /* 0C05AEA8 add Rm,Rn */
	IF(0x0C05AEAAu); r0 = T;  /* 0C05AEAA movt Rn */
	T = (r4 & r0) == 0;  /* 0C05AEAC tst Rm,Rn */
	{ u32 c_ = T; r7 += r6; /* slot add Rm,Rn */ if (c_) { UPD(0x0C05AF90u, 6); goto L_0C05AF90; } goto L_0C05AEB2; }  /* 0C05AEAE bt/s */
L_0C05AEB2: BLKS(0x0C05AEB2u);
	r3 = 0xC2839E5u; UPD(0x0C05AEB4u, 2);  /* 0C05AEB2 mov.l @(disp,pc),Rn */
	r2 = 0xC21F7F9u; UPD(0x0C05AEB6u, 1);  /* 0C05AEB4 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C05AEB8u, 1);  /* 0C05AEB6 mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C05AEBAu, 1);  /* 0C05AEB8 mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C05AEBA tst Rm,Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C05AEBC negc Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05AEBE tst Rm,Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C05AEC0 negc Rm,Rn */
	r8 = 0xC283794u; UPD(0x0C05AEC4u, 5);  /* 0C05AEC2 mov.l @(disp,pc),Rn */
	T = (r4 & r6) == 0;  /* 0C05AEC4 tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x7Fu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05AF70u, 4); goto L_0C05AF70; } goto L_0C05AECA; }  /* 0C05AEC6 bt/s */
L_0C05AECA: BLKS(0x0C05AECAu);
	r0 = 0xC21F5EAu; UPD(0x0C05AECCu, 2);  /* 0C05AECA mov.l @(disp,pc),Rn */
	r3 = 0x7Fu;  /* 0C05AECC mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C05AED0u, 2);  /* 0C05AECE mov.b @Rm,Rn */
	r5 = 0x24Cu; UPD(0x0C05AED2u, 1);  /* 0C05AED0 mov.w @(disp,pc),Rn */
	r3 &= r4;  /* 0C05AED2 and Rm,Rn */
	r0 = r8;  /* 0C05AED4 mov Rm,Rn */
	IF(0x0C05AED6u); W8(r0 + r5, r3); UPD(0x0C05AED8u, 3);  /* 0C05AED6 mov.b Rm,@(r0,Rn) */
	r6 = 0xC386804u; UPD(0x0C05AEDAu, 1);  /* 0C05AED8 mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C05AEDA mov Rm,Rn */
	IF(0x0C05AEDCu); W8(r0 + r7, r3); UPD(0x0C05AEDEu, 2);  /* 0C05AEDC mov.b Rm,@(r0,Rn) */
L_0C05AEDE: BLKS(0x0C05AEDEu);
	r5 = 0xC283C65u; UPD(0x0C05AEE0u, 1);  /* 0C05AEDE mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C05AEE0 mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C05AEE4u, 2);  /* 0C05AEE2 mov.b @Rm,Rn */
	r2 = 0xC21F7F9u; UPD(0x0C05AEE6u, 1);  /* 0C05AEE4 mov.l @(disp,pc),Rn */
	T = (r3 & r3) == 0;  /* 0C05AEE6 tst Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C05AEEAu, 2);  /* 0C05AEE8 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C05AEEA negc Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05AEEC tst Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C05AEEE negc Rm,Rn */
	r4 = 0xC283794u; UPD(0x0C05AEF2u, 4);  /* 0C05AEF0 mov.l @(disp,pc),Rn */
	T = (r3 & r0) == 0;  /* 0C05AEF2 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x7Fu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05AF50u, 4); goto L_0C05AF50; } goto L_0C05AEF8; }  /* 0C05AEF4 bt/s */
L_0C05AEF8: BLKS(0x0C05AEF8u);
	r0 = 0xC2177F8u; UPD(0x0C05AEFAu, 2);  /* 0C05AEF8 mov.l @(disp,pc),Rn */
	r7 += r6;  /* 0C05AEFA add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C05AEFEu, 2);  /* 0C05AEFC mov.b @Rm,Rn */
	r6 = 0x7Fu;  /* 0C05AEFE mov #imm,Rn */
	r5 = 0x4CCu; UPD(0x0C05AF02u, 2);  /* 0C05AF00 mov.w @(disp,pc),Rn */
	r6 &= r2;  /* 0C05AF02 and Rm,Rn */
	r0 = r4;  /* 0C05AF04 mov Rm,Rn */
	IF(0x0C05AF06u); W8(r0 + r5, r6); UPD(0x0C05AF08u, 3);  /* 0C05AF06 mov.b Rm,@(r0,Rn) */
	r7 += 0x1u;  /* 0C05AF08 add #imm,Rn */
	W8(r7, r6); UPD(0x0C05AF0Cu, 2);  /* 0C05AF0A mov.b Rm,@Rn */
L_0C05AF0C: BLKS(0x0C05AF0Cu);
	r0 = 0x0u;  /* 0C05AF0C mov #imm,Rn */
	r4 = r8;  /* 0C05AF0E mov Rm,Rn */
	UPD(0x0C05AF10u, 2);
L_0C05AF10: BLKS(0x0C05AF10u);
	r3 = 0x24Cu; UPD(0x0C05AF12u, 1);  /* 0C05AF10 mov.w @(disp,pc),Rn */
	r8 = 0x250u; UPD(0x0C05AF14u, 1);  /* 0C05AF12 mov.w @(disp,pc),Rn */
	r3 += r4;  /* 0C05AF14 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r3); r3 += 1; r6 = v_; } UPD(0x0C05AF18u, 2);  /* 0C05AF16 mov.b @Rm+,Rn */
	r8 += r4;  /* 0C05AF18 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C05AF1Cu, 2);  /* 0C05AF1A mov.b @Rm,Rn */
	r5 = r6;  /* 0C05AF1C mov Rm,Rn */
	r5 ^= r7;  /* 0C05AF1E xor Rm,Rn */
	r2 = r6;  /* 0C05AF20 mov Rm,Rn */
	r2 &= r5;  /* 0C05AF22 and Rm,Rn */
	W8(r3, r2); UPD(0x0C05AF26u, 5);  /* 0C05AF24 mov.b Rm,@Rn */
	r2 = r6;  /* 0C05AF26 mov Rm,Rn */
	r3 += 0x1u;  /* 0C05AF28 add #imm,Rn */
	r2 &= r7;  /* 0C05AF2A and Rm,Rn */
	W8(r3, r2); UPD(0x0C05AF2Eu, 4);  /* 0C05AF2C mov.b Rm,@Rn */
	W8(r8, r6); UPD(0x0C05AF30u, 1);  /* 0C05AF2E mov.b Rm,@Rn */
	r2 = ~r6;  /* 0C05AF30 not Rm,Rn */
	r3 += 0x1u;  /* 0C05AF32 add #imm,Rn */
	r2 &= r5;  /* 0C05AF34 and Rm,Rn */
	r6 = r0;  /* 0C05AF36 mov Rm,Rn */
	W8(r3, r2); UPD(0x0C05AF3Au, 5);  /* 0C05AF38 mov.b Rm,@Rn */
	r6 += 0x1u;  /* 0C05AF3A add #imm,Rn */
	r5 = 0x280u; UPD(0x0C05AF3Eu, 2);  /* 0C05AF3C mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r6;  /* 0C05AF3E exts.w Rm,Rn */
	r3 = 0x1u;  /* 0C05AF40 mov #imm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C05AF42 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += r5; /* slot add Rm,Rn */ if (c_) { UPD(0x0C05AF10u, 6); goto L_0C05AF10; } goto L_0C05AF48; }  /* 0C05AF44 bf/s */
L_0C05AF48: BLKS(0x0C05AF48u);
	r15 = r14;  /* 0C05AF48 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05AF4Cu, 3);  /* 0C05AF4A mov.l @Rm+,Rn */
	IF(0x0C05AF4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05AF4C rts */
L_0C05AF50: BLKS(0x0C05AF50u);
	r7 += r6;  /* 0C05AF50 add Rm,Rn */
	r7 += 0x1u;  /* 0C05AF52 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C05AF56u, 3);  /* 0C05AF54 mov.b @Rm,Rn */
	r3 = 0x4CCu; UPD(0x0C05AF58u, 1);  /* 0C05AF56 mov.w @(disp,pc),Rn */
	r0 = r4;  /* 0C05AF58 mov Rm,Rn */
	r1 &= r6;  /* 0C05AF5A and Rm,Rn */
	IF(0x0C05AF5Cu); W8(r0 + r3, r1); UPD(0x0C05AF5Eu, 3);  /* 0C05AF5C mov.b Rm,@(r0,Rn) */
	r4 = 0xC2177F8u; UPD(0x0C05AF60u, 1);  /* 0C05AF5E mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C05AF62u, 1);  /* 0C05AF60 mov.b @Rm,Rn */
	{ W8(r5, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C05AF0Cu, 3); goto L_0C05AF0C; }  /* 0C05AF62 bra */
L_0C05AF70: BLKS(0x0C05AF70u);
	r6 = 0xC386804u; UPD(0x0C05AF72u, 1);  /* 0C05AF70 mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C05AF72 mov Rm,Rn */
	IF(0x0C05AF74u); r2 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C05AF76u, 2);  /* 0C05AF74 mov.b @(r0,Rm),Rn */
	r4 = 0x24Cu; UPD(0x0C05AF78u, 1);  /* 0C05AF76 mov.w @(disp,pc),Rn */
	r5 &= r2;  /* 0C05AF78 and Rm,Rn */
	r0 = r8;  /* 0C05AF7A mov Rm,Rn */
	IF(0x0C05AF7Cu); W8(r0 + r4, r5); UPD(0x0C05AF7Eu, 3);  /* 0C05AF7C mov.b Rm,@(r0,Rn) */
	r5 = 0xC21F5EAu; UPD(0x0C05AF80u, 1);  /* 0C05AF7E mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C05AF82u, 1);  /* 0C05AF80 mov.b @Rm,Rn */
	{ W8(r3, r2); /* slot mov.b Rm,@Rn */ UPD(0x0C05AEDEu, 3); goto L_0C05AEDE; }  /* 0C05AF82 bra */
L_0C05AF90: BLKS(0x0C05AF90u);
	r4 = 0xC21F5EAu; UPD(0x0C05AF92u, 1);  /* 0C05AF90 mov.l @(disp,pc),Rn */
	r8 = 0xC2839E0u; UPD(0x0C05AF94u, 1);  /* 0C05AF92 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C05AF96u, 1);  /* 0C05AF94 mov.b @Rm,Rn */
	r2 = 0xC2177F8u; UPD(0x0C05AF98u, 1);  /* 0C05AF96 mov.l @(disp,pc),Rn */
	W8(r8, r7); UPD(0x0C05AF9Au, 1);  /* 0C05AF98 mov.b Rm,@Rn */
	r5 = 0xC283C60u; UPD(0x0C05AF9Cu, 1);  /* 0C05AF9A mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C05AF9Eu, 1);  /* 0C05AF9C mov.b @Rm,Rn */
	r8 = 0xC283794u; UPD(0x0C05AFA0u, 1);  /* 0C05AF9E mov.l @(disp,pc),Rn */
	{ W8(r5, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C05AF0Cu, 3); goto L_0C05AF0C; }  /* 0C05AFA0 bra */
}

/* FUN_0c05aff0 */
void f_0C05AFF0(sh3_t *c)
{
	LOCALS;
L_0C05AFF0: BLKS(0x0C05AFF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05AFF2u, 1);  /* 0C05AFF0 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C05AFF2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05AFF6u, 2);  /* 0C05AFF4 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C05AFF6 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05AFFAu, 2);  /* 0C05AFF8 mov.l Rm,@-Rn */
	r3 = 0x280u; UPD(0x0C05AFFCu, 1);  /* 0C05AFFA mov.w @(disp,pc),Rn */
	r5 = 0xC27DC48u; UPD(0x0C05AFFEu, 1);  /* 0C05AFFC mov.l @(disp,pc),Rn */
	IF(0x0C05AFFEu); MACL = r8 * r3;  /* 0C05AFFE mul.l Rm,Rn */
	IF(0x0C05B000u); r15 -= 4; W32(r15, PR); UPD(0x0C05B002u, 3);  /* 0C05B000 sts.l pr,@-Rn */
	r0 = r5;  /* 0C05B002 mov Rm,Rn */
	IF(0x0C05B004u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C05B006u, 2);  /* 0C05B004 mov.b @(r0,Rm),Rn */
	IF(0x0C05B006u); r3 = MACL;  /* 0C05B006 sts macl,Rn */
	r4 = 0xC283794u; UPD(0x0C05B00Au, 2);  /* 0C05B008 mov.l @(disp,pc),Rn */
	r0 = 0x254u; UPD(0x0C05B00Cu, 1);  /* 0C05B00A mov.w @(disp,pc),Rn */
	r3 += r4;  /* 0C05B00C add Rm,Rn */
	r0 += r3;  /* 0C05B00E add Rm,Rn */
	r0 += 0x1u;  /* 0C05B010 add #imm,Rn */
	W8(r0, r1); UPD(0x0C05B014u, 4);  /* 0C05B012 mov.b Rm,@Rn */
	{ u32 v_ = r1; r0 -= 1; W8(r0, v_); } UPD(0x0C05B016u, 1);  /* 0C05B014 mov.b Rm,@-Rn */
	r0 += 0x3u;  /* 0C05B016 add #imm,Rn */
	W8(r0, r1); UPD(0x0C05B01Au, 2);  /* 0C05B018 mov.b Rm,@Rn */
	r2 = 0xC21CA15u; UPD(0x0C05B01Cu, 1);  /* 0C05B01A mov.l @(disp,pc),Rn */
	{ u32 v_ = r1; r0 -= 1; W8(r0, v_); } UPD(0x0C05B01Eu, 1);  /* 0C05B01C mov.b Rm,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C05B020u, 1);  /* 0C05B01E mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05B020 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05B02Au, 4); goto L_0C05B02A; } goto L_0C05B026; }  /* 0C05B022 bt/s */
L_0C05B026: BLKS(0x0C05B026u);
	{ r6 = r8; /* slot mov Rm,Rn */ UPD(0x0C05B210u, 4); goto L_0C05B210; }  /* 0C05B026 bra */
L_0C05B02A: BLKS(0x0C05B02Au);
	r0 = 0x24Cu; UPD(0x0C05B02Cu, 1);  /* 0C05B02A mov.w @(disp,pc),Rn */
	r2 = 0x3Cu;  /* 0C05B02C mov #imm,Rn */
	IF(0x0C05B02Eu); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C05B030u, 2);  /* 0C05B02E mov.b @(r0,Rm),Rn */
	r6 = 0x2Cu;  /* 0C05B030 mov #imm,Rn */
	r2 &= r7;  /* 0C05B032 and Rm,Rn */
	r2 += 0xFFFFFFFCu;  /* 0C05B034 add #imm,Rn */
	T = r2 > r6;  /* 0C05B036 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C05B0C0u, 7); goto L_0C05B0C0; }  /* 0C05B038 bt */
L_0C05B03A: BLKS(0x0C05B03Au);
	r0 = 0xC05B058u;  /* 0C05B03A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C05B03C add Rm,Rn */
	IF(0x0C05B03Eu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C05B040u, 3);  /* 0C05B03E mov.w @(r0,Rm),Rn */
	IF(0x0C05B040u); { u32 tv_ = (r4 + 0x0C05B044u); u32 t_ = PHYS(tv_); IF(0x0C05B042u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C05B0C0u: goto L_0C05B0C0; case 0x0C05B1A0u: goto L_0C05B1A0; case 0x0C05B1B4u: goto L_0C05B1B4; case 0x0C05B1D4u: goto L_0C05B1D4; case 0x0C05B1F0u: goto L_0C05B1F0; default: JUMPD(tv_); } }  /* 0C05B040 braf Rn */
L_0C05B0C0: BLKS(0x0C05B0C0u);
	r3 = 0x280u; UPD(0x0C05B0C2u, 1);  /* 0C05B0C0 mov.w @(disp,pc),Rn */
	r1 = r8;  /* 0C05B0C2 mov Rm,Rn */
	IF(0x0C05B0C4u); MACL = r8 * r3;  /* 0C05B0C4 mul.l Rm,Rn */
	r2 = 0xC283794u; UPD(0x0C05B0C8u, 4);  /* 0C05B0C6 mov.l @(disp,pc),Rn */
	IF(0x0C05B0C8u); r1 <<= 2;  /* 0C05B0C8 shll2 Rn */
	IF(0x0C05B0CAu); r0 = MACL;  /* 0C05B0CA sts macl,Rn */
	r2 += r0;  /* 0C05B0CC add Rm,Rn */
	UPD(0x0C05B0CEu, 3);
L_0C05B0CE: BLKS(0x0C05B0CEu);
	W32(r2 + 0x4u, r1); UPD(0x0C05B0D0u, 1);  /* 0C05B0CE mov.l Rm,@(disp,Rn) */
L_0C05B0D0: BLKS(0x0C05B0D0u);
	r5 = 0xC7C03D4u; UPD(0x0C05B0D2u, 1);  /* 0C05B0D0 mov.l @(disp,pc),Rn */
	IF(0x0C05B0D2u); { u32 t_ = r5; PR = 0x0C05B0D6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C03D4, 0x0C7C03D4u, 0x0C05B0D6u); }  /* 0C05B0D2 jsr @Rn */
L_0C05B0D6: BLKS(0x0C05B0D6u);
	r0 = 0x280u; UPD(0x0C05B0D8u, 1);  /* 0C05B0D6 mov.w @(disp,pc),Rn */
	IF(0x0C05B0D8u); MACL = r8 * r0;  /* 0C05B0D8 mul.l Rm,Rn */
	r3 = 0xC283794u; UPD(0x0C05B0DCu, 3);  /* 0C05B0DA mov.l @(disp,pc),Rn */
	IF(0x0C05B0DCu); r2 = MACL;  /* 0C05B0DC sts macl,Rn */
	r2 += r3;  /* 0C05B0DE add Rm,Rn */
	r4 = 0x26Bu; UPD(0x0C05B0E2u, 3);  /* 0C05B0E0 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C05B0E2 mov Rm,Rn */
	IF(0x0C05B0E4u); r7 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C05B0E6u, 2);  /* 0C05B0E4 mov.b @(r0,Rm),Rn */
	r3 = 0x9u;  /* 0C05B0E6 mov #imm,Rn */
	r1 = r7 & 0xFF;  /* 0C05B0E8 extu.b Rm,Rn */
	T = r1 > r3;  /* 0C05B0EA cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C05B190u, 6); goto L_0C05B190; }  /* 0C05B0EC bf */
L_0C05B0EE: BLKS(0x0C05B0EEu);
	r0 = 0x270u; UPD(0x0C05B0F0u, 1);  /* 0C05B0EE mov.w @(disp,pc),Rn */
	IF(0x0C05B0F0u); W32(r0 + r2, r3); UPD(0x0C05B0F2u, 1);  /* 0C05B0F0 mov.l Rm,@(r0,Rn) */
L_0C05B0F2: BLKS(0x0C05B0F2u);
	r3 = 0x280u; UPD(0x0C05B0F4u, 1);  /* 0C05B0F2 mov.w @(disp,pc),Rn */
	IF(0x0C05B0F4u); MACL = r8 * r3;  /* 0C05B0F4 mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C05B0F8u, 3);  /* 0C05B0F6 mov.l @(disp,pc),Rn */
	IF(0x0C05B0F8u); r3 = MACL;  /* 0C05B0F8 sts macl,Rn */
	r4 = 0xC392AE8u; UPD(0x0C05B0FCu, 2);  /* 0C05B0FA mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C05B0FC add Rm,Rn */
	r7 = R32(r4); UPD(0x0C05B100u, 2);  /* 0C05B0FE mov.l @Rm,Rn */
	r0 = 0x274u; UPD(0x0C05B102u, 1);  /* 0C05B100 mov.w @(disp,pc),Rn */
	r2 = 0xC21CA15u; UPD(0x0C05B104u, 1);  /* 0C05B102 mov.l @(disp,pc),Rn */
	IF(0x0C05B104u); W32(r0 + r3, r7); UPD(0x0C05B106u, 1);  /* 0C05B104 mov.l Rm,@(r0,Rn) */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C05B108u, 1);  /* 0C05B106 mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C05B108 tst Rm,Rn */
	{ u32 c_ = T; r0 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05B150u, 4); goto L_0C05B150; } goto L_0C05B10E; }  /* 0C05B10A bt/s */
L_0C05B10E: BLKS(0x0C05B10Eu);
	r9 = 0x253u; UPD(0x0C05B110u, 2);  /* 0C05B10E mov.w @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C05B110 mov #imm,Rn */
	r0 = r3;  /* 0C05B112 mov Rm,Rn */
	IF(0x0C05B114u); W8(r0 + r9, r5); UPD(0x0C05B116u, 3);  /* 0C05B114 mov.b Rm,@(r0,Rn) */
L_0C05B116: BLKS(0x0C05B116u);
	r9 = 0x280u; UPD(0x0C05B118u, 1);  /* 0C05B116 mov.w @(disp,pc),Rn */
	IF(0x0C05B118u); MACL = r8 * r9;  /* 0C05B118 mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C05B11Cu, 3);  /* 0C05B11A mov.l @(disp,pc),Rn */
	IF(0x0C05B11Cu); r2 = MACL;  /* 0C05B11C sts macl,Rn */
	r8 = 0x26Bu; UPD(0x0C05B120u, 2);  /* 0C05B11E mov.w @(disp,pc),Rn */
	r2 += r0;  /* 0C05B120 add Rm,Rn */
	r2 += r8;  /* 0C05B122 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C05B126u, 3);  /* 0C05B124 mov.b @Rm,Rn */
	T = r0 == 0xAu;  /* 0C05B126 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C05B130u, 4); goto L_0C05B130; }  /* 0C05B128 bt */
L_0C05B12A: BLKS(0x0C05B12Au);
	r7 = r0;  /* 0C05B12A mov Rm,Rn */
	r7 += 0x1u;  /* 0C05B12C add #imm,Rn */
	W8(r2, r7); UPD(0x0C05B130u, 3);  /* 0C05B12E mov.b Rm,@Rn */
L_0C05B130: BLKS(0x0C05B130u);
	r4 = 0xC392E0Cu; UPD(0x0C05B132u, 1);  /* 0C05B130 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C05B132 mov #imm,Rn */
	W32(r4, r5); UPD(0x0C05B136u, 2);  /* 0C05B134 mov.l Rm,@Rn */
	r15 = r14;  /* 0C05B136 mov Rm,Rn */
	IF(0x0C05B138u); PR = R32(r15); r15 += 4; UPD(0x0C05B13Au, 2);  /* 0C05B138 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05B13Cu, 1);  /* 0C05B13A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05B13Eu, 1);  /* 0C05B13C mov.l @Rm+,Rn */
	IF(0x0C05B13Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05B13E rts */
L_0C05B150: BLKS(0x0C05B150u);
	r2 = 0xC220C53u; UPD(0x0C05B152u, 1);  /* 0C05B150 mov.l @(disp,pc),Rn */
	r7 = 0x253u; UPD(0x0C05B154u, 1);  /* 0C05B152 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C05B156u, 1);  /* 0C05B154 mov.b @Rm,Rn */
	IF(0x0C05B156u); W8(r0 + r7, r4); UPD(0x0C05B158u, 1);  /* 0C05B156 mov.b Rm,@(r0,Rn) */
	r7 += 0x18u;  /* 0C05B158 add #imm,Rn */
	IF(0x0C05B15Au); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C05B15Cu, 2);  /* 0C05B15A mov.b @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C05B15C tst Rm,Rn */
	if (!T) { UPD(0x0C05B180u, 4); goto L_0C05B180; }  /* 0C05B15E bf */
L_0C05B160: BLKS(0x0C05B160u);
	r5 = 0xC26C878u; UPD(0x0C05B162u, 1);  /* 0C05B160 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C05B162 mov Rm,Rn */
	IF(0x0C05B164u); r1 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C05B166u, 2);  /* 0C05B164 mov.b @(r0,Rm),Rn */
	r6 = 0xC393028u; UPD(0x0C05B168u, 1);  /* 0C05B166 mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C05B168 mov Rm,Rn */
	IF(0x0C05B16Au); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C05B16Cu, 2);  /* 0C05B16A mov.b @(r0,Rm),Rn */
	r0 = r5;  /* 0C05B16C mov Rm,Rn */
	r1 -= r3;  /* 0C05B16E sub Rm,Rn */
	UPD(0x0C05B170u, 2);
L_0C05B170: BLKS(0x0C05B170u);
	{ IF(0x0C05B172u); W8(r0 + r9, r1); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C05B116u, 3); goto L_0C05B116; }  /* 0C05B170 bra */
L_0C05B180: BLKS(0x0C05B180u);
	r1 = 0xC26C878u; UPD(0x0C05B182u, 1);  /* 0C05B180 mov.l @(disp,pc),Rn */
	r0 = r1;  /* 0C05B182 mov Rm,Rn */
	IF(0x0C05B184u); r1 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C05B186u, 2);  /* 0C05B184 mov.b @(r0,Rm),Rn */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C05B170u, 3); goto L_0C05B170; }  /* 0C05B186 bra */
L_0C05B190: BLKS(0x0C05B190u);
	r0 = 0x270u; UPD(0x0C05B192u, 1);  /* 0C05B190 mov.w @(disp,pc),Rn */
	{ IF(0x0C05B194u); W32(r0 + r2, r1); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C05B0F2u, 3); goto L_0C05B0F2; }  /* 0C05B192 bra */
L_0C05B1A0: BLKS(0x0C05B1A0u);
	r0 = 0xC050D70u; UPD(0x0C05B1A2u, 1);  /* 0C05B1A0 mov.l @(disp,pc),Rn */
	IF(0x0C05B1A2u); { u32 t_ = r0; PR = 0x0C05B1A6u; r4 = 0x64u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C05B1A6u); }  /* 0C05B1A2 jsr @Rn */
L_0C05B1A6: BLKS(0x0C05B1A6u);
	r0 = (u32)(s32)(s16)r0;  /* 0C05B1A6 exts.w Rm,Rn */
	IF(0x0C05B1A8u); T = (s32)r0 > 0;  /* 0C05B1A8 cmp/pl Rn */
	if (!T) { UPD(0x0C05B1F0u, 5); goto L_0C05B1F0; }  /* 0C05B1AA bf */
L_0C05B1AC: BLKS(0x0C05B1ACu);
	r2 = 0x2u;  /* 0C05B1AC mov #imm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C05B1AE cmp/gt Rm,Rn */
	{ u32 c_ = T; r3 = 0x6u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05B1D0u, 5); goto L_0C05B1D0; } UPD(0x0C05B1B4u, 1); goto L_0C05B1B4; }  /* 0C05B1B0 bt/s */
L_0C05B1B4: BLKS(0x0C05B1B4u);
	r4 = 0x280u; UPD(0x0C05B1B6u, 1);  /* 0C05B1B4 mov.w @(disp,pc),Rn */
	r1 = r8;  /* 0C05B1B6 mov Rm,Rn */
	IF(0x0C05B1B8u); MACL = r8 * r4;  /* 0C05B1B8 mul.l Rm,Rn */
	r2 = 0xC283794u; UPD(0x0C05B1BCu, 4);  /* 0C05B1BA mov.l @(disp,pc),Rn */
	IF(0x0C05B1BCu); r1 <<= 2;  /* 0C05B1BC shll2 Rn */
	IF(0x0C05B1BEu); r7 = MACL;  /* 0C05B1BE sts macl,Rn */
	r2 += r7;  /* 0C05B1C0 add Rm,Rn */
	{ r1 += 0x2u; /* slot add #imm,Rn */ UPD(0x0C05B0CEu, 6); goto L_0C05B0CE; }  /* 0C05B1C2 bra */
L_0C05B1D0: BLKS(0x0C05B1D0u);
	T = (s32)r0 > (s32)r3;  /* 0C05B1D0 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C05B21Cu, 4); goto L_0C05B21C; }  /* 0C05B1D2 bt */
L_0C05B1D4: BLKS(0x0C05B1D4u);
	r5 = 0x280u; UPD(0x0C05B1D6u, 1);  /* 0C05B1D4 mov.w @(disp,pc),Rn */
	r1 = r8;  /* 0C05B1D6 mov Rm,Rn */
	IF(0x0C05B1D8u); MACL = r8 * r5;  /* 0C05B1D8 mul.l Rm,Rn */
	r2 = 0xC283794u; UPD(0x0C05B1DCu, 4);  /* 0C05B1DA mov.l @(disp,pc),Rn */
	IF(0x0C05B1DCu); r1 <<= 2;  /* 0C05B1DC shll2 Rn */
	IF(0x0C05B1DEu); r0 = MACL;  /* 0C05B1DE sts macl,Rn */
	r2 += r0;  /* 0C05B1E0 add Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C05B0CEu, 6); goto L_0C05B0CE; }  /* 0C05B1E2 bra */
L_0C05B1F0: BLKS(0x0C05B1F0u);
	r6 = 0x280u; UPD(0x0C05B1F2u, 1);  /* 0C05B1F0 mov.w @(disp,pc),Rn */
	r1 = r8;  /* 0C05B1F2 mov Rm,Rn */
	IF(0x0C05B1F4u); MACL = r8 * r6;  /* 0C05B1F4 mul.l Rm,Rn */
	r2 = 0xC283794u; UPD(0x0C05B1F8u, 4);  /* 0C05B1F6 mov.l @(disp,pc),Rn */
	IF(0x0C05B1F8u); r1 <<= 2;  /* 0C05B1F8 shll2 Rn */
	IF(0x0C05B1FAu); r5 = MACL;  /* 0C05B1FA sts macl,Rn */
	r2 += r5;  /* 0C05B1FC add Rm,Rn */
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C05B0CEu, 6); goto L_0C05B0CE; }  /* 0C05B1FE bra */
L_0C05B210: BLKS(0x0C05B210u);
	r2 = 0xC22486Eu; UPD(0x0C05B212u, 1);  /* 0C05B210 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C05B214u, 1);  /* 0C05B212 mov.b @Rm,Rn */
	IF(0x0C05B214u); r6 <<= 2;  /* 0C05B214 shll2 Rn */
	r0 &= 0x3u;  /* 0C05B216 and #imm,r0 */
	r6 += r0;  /* 0C05B218 add Rm,Rn */
	W32(r3 + 0x4u, r6); UPD(0x0C05B21Cu, 4);  /* 0C05B21A mov.l Rm,@(disp,Rn) */
L_0C05B21C: BLKS(0x0C05B21Cu);
	{ IF(0x0C05B21Eu); ; /* slot nop */ UPD(0x0C05B0D0u, 3); goto L_0C05B0D0; }  /* 0C05B21C bra */
}

/* FUN_0c05b260 */
void f_0C05B260(sh3_t *c)
{
	LOCALS;
L_0C05B260: BLKS(0x0C05B260u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05B262u, 1);  /* 0C05B260 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C05B262 mov #imm,Rn */
	r3 = 0x280u; UPD(0x0C05B266u, 2);  /* 0C05B264 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C05B266 exts.w Rm,Rn */
	IF(0x0C05B268u); MACL = r8 * r3;  /* 0C05B268 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05B26Cu, 4);  /* 0C05B26A mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C05B26C mov #imm,Rn */
	r5 = 0xC283794u; UPD(0x0C05B270u, 2);  /* 0C05B26E mov.l @(disp,pc),Rn */
	IF(0x0C05B270u); r2 = MACL;  /* 0C05B270 sts macl,Rn */
	IF(0x0C05B272u); r15 -= 4; W32(r15, PR); UPD(0x0C05B274u, 2);  /* 0C05B272 sts.l pr,@-Rn */
	r2 += r5;  /* 0C05B274 add Rm,Rn */
	W32(r2 + 0xCu, r0); UPD(0x0C05B278u, 2);  /* 0C05B276 mov.l Rm,@(disp,Rn) */
	r14 = r15;  /* 0C05B278 mov Rm,Rn */
	W32(r2 + 0x8u, r0); UPD(0x0C05B27Cu, 2);  /* 0C05B27A mov.l Rm,@(disp,Rn) */
	r5 = 0x2u;  /* 0C05B27C mov #imm,Rn */
	r4 = 0xDC000000u; UPD(0x0C05B280u, 2);  /* 0C05B27E mov.l @(disp,pc),Rn */
	r0 = 0xFFD00000u; UPD(0x0C05B282u, 1);  /* 0C05B280 mov.l @(disp,pc),Rn */
	W32(r2, r4); UPD(0x0C05B284u, 1);  /* 0C05B282 mov.l Rm,@Rn */
	W32(r2 + 0x10u, r0); UPD(0x0C05B286u, 1);  /* 0C05B284 mov.l Rm,@(disp,Rn) */
	r4 = 0xFFFFFFFFu;  /* 0C05B286 mov #imm,Rn */
	r6 = 0x265u; UPD(0x0C05B28Au, 2);  /* 0C05B288 mov.w @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C05B28A mov #imm,Rn */
	r7 = 0x262u; UPD(0x0C05B28Eu, 2);  /* 0C05B28C mov.w @(disp,pc),Rn */
	r6 += r2;  /* 0C05B28E add Rm,Rn */
	r7 += r2;  /* 0C05B290 add Rm,Rn */
	UPD(0x0C05B292u, 2);
L_0C05B292: BLKS(0x0C05B292u);
	IF(0x0C05B292u); MACL = r8 * r3;  /* 0C05B292 mul.l Rm,Rn */
	W8(r7, r0); UPD(0x0C05B296u, 3);  /* 0C05B294 mov.b Rm,@Rn */
	r1 += 0x1u;  /* 0C05B296 add #imm,Rn */
	W8(r6, r4); UPD(0x0C05B29Au, 2);  /* 0C05B298 mov.b Rm,@Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C05B29A exts.w Rm,Rn */
	r7 += 0x1u;  /* 0C05B29C add #imm,Rn */
	IF(0x0C05B29Eu); r2 = MACL;  /* 0C05B29E sts macl,Rn */
	T = (s32)r1 > (s32)r5;  /* 0C05B2A0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05B292u, 7); goto L_0C05B292; } goto L_0C05B2A6; }  /* 0C05B2A2 bf/s */
L_0C05B2A6: BLKS(0x0C05B2A6u);
	r5 = 0xC283794u; UPD(0x0C05B2A8u, 2);  /* 0C05B2A6 mov.l @(disp,pc),Rn */
	r6 = 0x254u; UPD(0x0C05B2AAu, 1);  /* 0C05B2A8 mov.w @(disp,pc),Rn */
	r5 += r2;  /* 0C05B2AA add Rm,Rn */
	r6 += r5;  /* 0C05B2AC add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r6); UPD(0x0C05B2B0u, 3);  /* 0C05B2AE mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C05B2B0 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05B2B8u, 4); goto L_0C05B2B8; } goto L_0C05B2B6; }  /* 0C05B2B2 bt/s */
L_0C05B2B6: BLKS(0x0C05B2B6u);
	W8(r6, r1); UPD(0x0C05B2B8u, 2);  /* 0C05B2B6 mov.b Rm,@Rn */
L_0C05B2B8: BLKS(0x0C05B2B8u);
	r7 = 0x258u; UPD(0x0C05B2BAu, 1);  /* 0C05B2B8 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C05B2BA mov #imm,Rn */
	r0 = 0x25Cu; UPD(0x0C05B2BEu, 2);  /* 0C05B2BC mov.w @(disp,pc),Rn */
	r7 += r5;  /* 0C05B2BE add Rm,Rn */
	r7 += 0x2u;  /* 0C05B2C0 add #imm,Rn */
	r0 += r5;  /* 0C05B2C2 add Rm,Rn */
	W8(r7, r3); UPD(0x0C05B2C6u, 4);  /* 0C05B2C4 mov.b Rm,@Rn */
	r6 += 0x1u;  /* 0C05B2C6 add #imm,Rn */
	W8(r0, r3); UPD(0x0C05B2CAu, 2);  /* 0C05B2C8 mov.b Rm,@Rn */
	r1 = 0x8u;  /* 0C05B2CA mov #imm,Rn */
	W8(r6, r3); UPD(0x0C05B2CEu, 2);  /* 0C05B2CC mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C05B2CE add #imm,Rn */
	{ u32 v_ = r3; r7 -= 1; W8(r7, v_); } UPD(0x0C05B2D2u, 2);  /* 0C05B2D0 mov.b Rm,@-Rn */
	r6 += 0xFFFFFFFFu;  /* 0C05B2D2 add #imm,Rn */
	W8(r0, r3); UPD(0x0C05B2D6u, 2);  /* 0C05B2D4 mov.b Rm,@Rn */
	r7 += 0x2u;  /* 0C05B2D6 add #imm,Rn */
	W8(r7, r1); UPD(0x0C05B2DAu, 2);  /* 0C05B2D8 mov.b Rm,@Rn */
	r3 = r6;  /* 0C05B2DA mov Rm,Rn */
	r3 += 0x3u;  /* 0C05B2DC add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C05B2E0u, 3);  /* 0C05B2DE mov.b @Rm,Rn */
	r0 = 0x27u;  /* 0C05B2E0 mov #imm,Rn */
	r4 = r7;  /* 0C05B2E2 mov Rm,Rn */
	r4 += 0x14u;  /* 0C05B2E4 add #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C05B2E6 extu.b Rm,Rn */
	T = r2 > r0;  /* 0C05B2E8 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r3, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C05B306u, 8); goto L_0C05B306; } UPD(0x0C05B2EEu, 1); goto L_0C05B2EE; }  /* 0C05B2EA bf/s */
L_0C05B2EE: BLKS(0x0C05B2EEu);
	r2 = r6;  /* 0C05B2EE mov Rm,Rn */
	r2 += 0x2u;  /* 0C05B2F0 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C05B2F4u, 3);  /* 0C05B2F2 mov.b @Rm,Rn */
	T = r0 == 0x4u;  /* 0C05B2F4 cmp/eq #imm,r0 */
	{ u32 c_ = T; r1 = 0x28u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05B304u, 4); goto L_0C05B304; } goto L_0C05B2FA; }  /* 0C05B2F6 bt/s */
L_0C05B2FA: BLKS(0x0C05B2FAu);
	r6 = r0;  /* 0C05B2FA mov Rm,Rn */
	r6 += 0x1u;  /* 0C05B2FC add #imm,Rn */
	r1 = r7;  /* 0C05B2FE mov Rm,Rn */
	W8(r2, r6); UPD(0x0C05B302u, 5);  /* 0C05B300 mov.b Rm,@Rn */
	r1 += 0xFFFFFFECu;  /* 0C05B302 add #imm,Rn */
	UPD(0x0C05B304u, 1);
L_0C05B304: BLKS(0x0C05B304u);
	W8(r3, r1); UPD(0x0C05B306u, 1);  /* 0C05B304 mov.b Rm,@Rn */
L_0C05B306: BLKS(0x0C05B306u);
	r5 = 0x280u; UPD(0x0C05B308u, 1);  /* 0C05B306 mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C05B308 mov #imm,Rn */
	IF(0x0C05B30Au); MACL = r8 * r5;  /* 0C05B30A mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C05B30Eu, 4);  /* 0C05B30C mov.l @(disp,pc),Rn */
	IF(0x0C05B30Eu); r5 = MACL;  /* 0C05B30E sts macl,Rn */
	r5 += r0;  /* 0C05B310 add Rm,Rn */
	r0 = R32(r5 + 0x4u); UPD(0x0C05B314u, 3);  /* 0C05B312 mov.l @(disp,Rm),Rn */
	r2 = 0xC161AA0u; UPD(0x0C05B316u, 1);  /* 0C05B314 mov.l @(disp,pc),Rn */
	IF(0x0C05B316u); r0 <<= 2;  /* 0C05B316 shll2 Rn */
	IF(0x0C05B318u); r6 = R32(r0 + r2); UPD(0x0C05B31Au, 2);  /* 0C05B318 mov.l @(r0,Rm),Rn */
	r0 = 0x25Fu; UPD(0x0C05B31Cu, 1);  /* 0C05B31A mov.w @(disp,pc),Rn */
	r2 = 0xFFFFFFF0u;  /* 0C05B31C mov #imm,Rn */
	IF(0x0C05B31Eu); W8(r0 + r5, r4); UPD(0x0C05B320u, 2);  /* 0C05B31E mov.b Rm,@(r0,Rn) */
	r0 = 0x268u; UPD(0x0C05B322u, 1);  /* 0C05B320 mov.w @(disp,pc),Rn */
	r0 += r5;  /* 0C05B322 add Rm,Rn */
	r0 += 0x2u;  /* 0C05B324 add #imm,Rn */
	W8(r0, r4); UPD(0x0C05B328u, 3);  /* 0C05B326 mov.b Rm,@Rn */
	r7 = 0x26Cu; UPD(0x0C05B32Au, 1);  /* 0C05B328 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFEu;  /* 0C05B32A add #imm,Rn */
	r3 = 0x258u; UPD(0x0C05B32Eu, 2);  /* 0C05B32C mov.w @(disp,pc),Rn */
	r7 += r5;  /* 0C05B32E add Rm,Rn */
	r1 = 0x260u; UPD(0x0C05B332u, 2);  /* 0C05B330 mov.w @(disp,pc),Rn */
	r3 += r5;  /* 0C05B332 add Rm,Rn */
	W8(r0, r4); UPD(0x0C05B336u, 2);  /* 0C05B334 mov.b Rm,@Rn */
	r1 += r5;  /* 0C05B336 add Rm,Rn */
	r7 += 0x1u;  /* 0C05B338 add #imm,Rn */
	W8(r1, r4); UPD(0x0C05B33Cu, 3);  /* 0C05B33A mov.b Rm,@Rn */
	r3 += 0x2u;  /* 0C05B33C add #imm,Rn */
	W8(r7, r4); UPD(0x0C05B340u, 2);  /* 0C05B33E mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C05B340 add #imm,Rn */
	W32(r5 + 0x1Cu, r6); UPD(0x0C05B344u, 2);  /* 0C05B342 mov.l Rm,@(disp,Rn) */
	r1 += 0x1u;  /* 0C05B344 add #imm,Rn */
	W32(r5 + 0x18u, r6); UPD(0x0C05B348u, 2);  /* 0C05B346 mov.l Rm,@(disp,Rn) */
	r7 += 0x1u;  /* 0C05B348 add #imm,Rn */
	W8(r3, r4); UPD(0x0C05B34Cu, 2);  /* 0C05B34A mov.b Rm,@Rn */
	W8(r0, r2); UPD(0x0C05B34Eu, 1);  /* 0C05B34C mov.b Rm,@Rn */
	W8(r1, r4); UPD(0x0C05B350u, 1);  /* 0C05B34E mov.b Rm,@Rn */
	r0 = r8;  /* 0C05B350 mov Rm,Rn */
	W8(r7, r4); UPD(0x0C05B354u, 2);  /* 0C05B352 mov.b Rm,@Rn */
	IF(0x0C05B354u); r0 <<= 2;  /* 0C05B354 shll2 Rn */
	{ u32 v_ = r4; r3 -= 1; W8(r3, v_); } UPD(0x0C05B358u, 2);  /* 0C05B356 mov.b Rm,@-Rn */
	r6 = 0xC161AC0u; UPD(0x0C05B35Au, 1);  /* 0C05B358 mov.l @(disp,pc),Rn */
	IF(0x0C05B35Au); r3 = R32(r0 + r6); UPD(0x0C05B35Cu, 1);  /* 0C05B35A mov.l @(r0,Rm),Rn */
	r0 = 0x278u; UPD(0x0C05B35Eu, 1);  /* 0C05B35C mov.w @(disp,pc),Rn */
	IF(0x0C05B35Eu); W32(r0 + r5, r3); UPD(0x0C05B360u, 1);  /* 0C05B35E mov.l Rm,@(r0,Rn) */
	r4 = 0x808080u; UPD(0x0C05B362u, 1);  /* 0C05B360 mov.l @(disp,pc),Rn */
	r0 += 0x4u;  /* 0C05B362 add #imm,Rn */
	IF(0x0C05B364u); W32(r0 + r5, r4); UPD(0x0C05B366u, 2);  /* 0C05B364 mov.l Rm,@(r0,Rn) */
	r3 = 0xFFFFFF80u;  /* 0C05B366 mov #imm,Rn */
	r6 = 0x24Cu; UPD(0x0C05B36Au, 2);  /* 0C05B368 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFD4u;  /* 0C05B36A add #imm,Rn */
	r6 += r5;  /* 0C05B36C add Rm,Rn */
	IF(0x0C05B36Eu); W8(r0 + r5, r3); UPD(0x0C05B370u, 3);  /* 0C05B36E mov.b Rm,@(r0,Rn) */
	r2 = r6;  /* 0C05B370 mov Rm,Rn */
	r7 = r6;  /* 0C05B372 mov Rm,Rn */
	r6 += 0x3u;  /* 0C05B374 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r6); UPD(0x0C05B378u, 4);  /* 0C05B376 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C05B378 add #imm,Rn */
	r0 = 0xC0AFBA0u; UPD(0x0C05B37Cu, 2);  /* 0C05B37A mov.l @(disp,pc),Rn */
	r7 += 0x2u;  /* 0C05B37C add #imm,Rn */
	r6 += 0xFFFFFFFDu;  /* 0C05B37E add #imm,Rn */
	W8(r2, r1); UPD(0x0C05B382u, 3);  /* 0C05B380 mov.b Rm,@Rn */
	r4 = r8;  /* 0C05B382 mov Rm,Rn */
	W8(r7, r1); UPD(0x0C05B386u, 2);  /* 0C05B384 mov.b Rm,@Rn */
	r5 = 0x5Au;  /* 0C05B386 mov #imm,Rn */
	IF(0x0C05B388u); { u32 t_ = r0; PR = 0x0C05B38Cu; W8(r6, r1); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C05B38Cu); }  /* 0C05B388 jsr @Rn */
L_0C05B38C: BLKS(0x0C05B38Cu);
	r4 = 0xC161AC8u; UPD(0x0C05B38Eu, 1);  /* 0C05B38C mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C05B38E mov Rm,Rn */
	IF(0x0C05B390u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C05B392u, 2);  /* 0C05B390 mov.b @(r0,Rm),Rn */
	r5 = 0xC0AFC10u; UPD(0x0C05B394u, 1);  /* 0C05B392 mov.l @(disp,pc),Rn */
	r4 = r2 & 0xFF;  /* 0C05B394 extu.b Rm,Rn */
	r15 = r14;  /* 0C05B396 mov Rm,Rn */
	IF(0x0C05B398u); PR = R32(r15); r15 += 4; UPD(0x0C05B39Au, 3);  /* 0C05B398 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05B39Cu, 1);  /* 0C05B39A mov.l @Rm+,Rn */
	IF(0x0C05B39Cu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFC10u: TAIL(f_0C0AFC10); default: JUMPD(tv_); } }  /* 0C05B39C jmp @Rn */
}

/* FUN_0c05b3e0 */
void f_0C05B3E0(sh3_t *c)
{
	LOCALS;
L_0C05B3E0: BLKS(0x0C05B3E0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05B3E2u, 1);  /* 0C05B3E0 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C05B3E2 mov #imm,Rn */
	r7 = 0xC393048u; UPD(0x0C05B3E6u, 2);  /* 0C05B3E4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C05B3E6 mov Rm,Rn */
	r3 = 0x0u;  /* 0C05B3E8 mov #imm,Rn */
	r2 = 0x1Fu;  /* 0C05B3EA mov #imm,Rn */
	UPD(0x0C05B3ECu, 3);
L_0C05B3EC: BLKS(0x0C05B3ECu);
	r4 = r0;  /* 0C05B3EC mov Rm,Rn */
	IF(0x0C05B3EEu); W8(r0 + r7, r3); UPD(0x0C05B3F0u, 2);  /* 0C05B3EE mov.b Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C05B3F0 add #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C05B3F2 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C05B3F4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C05B3ECu, 6); goto L_0C05B3EC; }  /* 0C05B3F6 bf */
L_0C05B3F8: BLKS(0x0C05B3F8u);
	r15 = r14;  /* 0C05B3F8 mov Rm,Rn */
	IF(0x0C05B3FAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C05B3FA rts */
}

/* FUN_0c05b410 */
void f_0C05B410(sh3_t *c)
{
	LOCALS;
L_0C05B410: BLKS(0x0C05B410u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05B412u, 1);  /* 0C05B410 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C05B412 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05B416u, 2);  /* 0C05B414 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05B418u, 1);  /* 0C05B416 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05B41Au, 1);  /* 0C05B418 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05B41Cu, 1);  /* 0C05B41A mov.l Rm,@-Rn */
	r11 = 0xFu;  /* 0C05B41C mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05B420u, 2);  /* 0C05B41E mov.l Rm,@-Rn */
	r12 = 0x0u;  /* 0C05B420 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05B424u, 2);  /* 0C05B422 mov.l Rm,@-Rn */
	r13 = 0x0u;  /* 0C05B424 mov #imm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C05B426 add #imm,Rn */
	r14 = r15;  /* 0C05B428 mov Rm,Rn */
	W32(r14, r0); UPD(0x0C05B42Cu, 4);  /* 0C05B42A mov.l Rm,@Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C05B42Eu, 1);  /* 0C05B42C mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r0); UPD(0x0C05B430u, 1);  /* 0C05B42E mov.l Rm,@(disp,Rn) */
L_0C05B430: BLKS(0x0C05B430u);
	r2 = 0xC285318u; UPD(0x0C05B432u, 1);  /* 0C05B430 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C05B432 mov #imm,Rn */
	r0 = R32(r14 + 0x8u); UPD(0x0C05B436u, 2);  /* 0C05B434 mov.l @(disp,Rm),Rn */
	r2 += r0;  /* 0C05B436 add Rm,Rn */
	UPD(0x0C05B438u, 1);
L_0C05B438: BLKS(0x0C05B438u);
	r2 += 0x2Eu;  /* 0C05B438 add #imm,Rn */
	W16(r2, r13); UPD(0x0C05B43Cu, 2);  /* 0C05B43A mov.w Rm,@Rn */
	r3 = r6;  /* 0C05B43C mov Rm,Rn */
	r2 += 0xFFFFFFD2u;  /* 0C05B43E add #imm,Rn */
	W32(r2, r12); UPD(0x0C05B442u, 3);  /* 0C05B440 mov.l Rm,@Rn */
	r3 += 0x1u;  /* 0C05B442 add #imm,Rn */
	r6 = (u32)(s32)(s16)r3;  /* 0C05B444 exts.w Rm,Rn */
	T = (s32)r6 > (s32)r11;  /* 0C05B446 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x34u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05B438u, 6); goto L_0C05B438; } goto L_0C05B44C; }  /* 0C05B448 bf/s */
L_0C05B44C: BLKS(0x0C05B44Cu);
	r10 = R32(r14 + 0x4u); UPD(0x0C05B44Eu, 2);  /* 0C05B44C mov.l @(disp,Rm),Rn */
	r8 = 0x0u;  /* 0C05B44E mov #imm,Rn */
	r9 = 0x0u;  /* 0C05B450 mov #imm,Rn */
	r0 = 0x0u;  /* 0C05B452 mov #imm,Rn */
	r4 = 0x0u;  /* 0C05B454 mov #imm,Rn */
	r5 = 0xFu;  /* 0C05B456 mov #imm,Rn */
	UPD(0x0C05B458u, 5);
L_0C05B458: BLKS(0x0C05B458u);
	r1 = 0xC21F8A0u; UPD(0x0C05B45Au, 1);  /* 0C05B458 mov.l @(disp,pc),Rn */
	r2 = r10;  /* 0C05B45A mov Rm,Rn */
	r2 += r9;  /* 0C05B45C add Rm,Rn */
	r3 = r1;  /* 0C05B45E mov Rm,Rn */
	r7 = r2;  /* 0C05B460 mov Rm,Rn */
	r3 += 0x2Eu;  /* 0C05B462 add #imm,Rn */
	r6 = 0x0u;  /* 0C05B464 mov #imm,Rn */
	r7 += r1;  /* 0C05B466 add Rm,Rn */
	r3 += r2;  /* 0C05B468 add Rm,Rn */
	IF(0x0C05B46Au); ;  /* 0C05B46A nop */
	UPD(0x0C05B46Cu, 9);
L_0C05B46C: BLKS(0x0C05B46Cu);
	r2 = r6;  /* 0C05B46C mov Rm,Rn */
	W16(r3, r0); UPD(0x0C05B470u, 2);  /* 0C05B46E mov.w Rm,@Rn */
	r2 += 0x1u;  /* 0C05B470 add #imm,Rn */
	W32(r7, r4); UPD(0x0C05B474u, 2);  /* 0C05B472 mov.l Rm,@Rn */
	r6 = (u32)(s32)(s16)r2;  /* 0C05B474 exts.w Rm,Rn */
	r3 += 0x34u;  /* 0C05B476 add #imm,Rn */
	T = (s32)r6 > (s32)r5;  /* 0C05B478 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x34u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05B46Cu, 6); goto L_0C05B46C; } goto L_0C05B47E; }  /* 0C05B47A bf/s */
L_0C05B47E: BLKS(0x0C05B47Eu);
	r7 = r8;  /* 0C05B47E mov Rm,Rn */
	r7 += 0x1u;  /* 0C05B480 add #imm,Rn */
	r3 = 0x340u; UPD(0x0C05B484u, 4);  /* 0C05B482 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C05B484 exts.w Rm,Rn */
	r6 = 0x2u;  /* 0C05B486 mov #imm,Rn */
	T = (s32)r8 > (s32)r6;  /* 0C05B488 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += r3; /* slot add Rm,Rn */ if (c_) { UPD(0x0C05B458u, 6); goto L_0C05B458; } goto L_0C05B48E; }  /* 0C05B48A bf/s */
L_0C05B48E: BLKS(0x0C05B48Eu);
	r8 = R32(r14); UPD(0x0C05B490u, 2);  /* 0C05B48E mov.l @Rm,Rn */
	r4 = 0x1u;  /* 0C05B490 mov #imm,Rn */
	r8 += 0x1u;  /* 0C05B492 add #imm,Rn */
	r5 = (u32)(s32)(s16)r8;  /* 0C05B494 exts.w Rm,Rn */
	r10 = R32(r14 + 0x4u); UPD(0x0C05B498u, 4);  /* 0C05B496 mov.l @(disp,Rm),Rn */
	r9 = R32(r14 + 0x8u); UPD(0x0C05B49Au, 1);  /* 0C05B498 mov.l @(disp,Rm),Rn */
	r0 = 0x9C0u; UPD(0x0C05B49Cu, 1);  /* 0C05B49A mov.w @(disp,pc),Rn */
	r9 += r3;  /* 0C05B49C add Rm,Rn */
	W32(r14, r5); UPD(0x0C05B4A0u, 2);  /* 0C05B49E mov.l Rm,@Rn */
	r10 += r0;  /* 0C05B4A0 add Rm,Rn */
	r1 = R32(r14); UPD(0x0C05B4A4u, 2);  /* 0C05B4A2 mov.l @Rm,Rn */
	W32(r14 + 0x4u, r10); UPD(0x0C05B4A6u, 1);  /* 0C05B4A4 mov.l Rm,@(disp,Rn) */
	T = (s32)r1 > (s32)r4;  /* 0C05B4A6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C05B430u, 4); goto L_0C05B430; } UPD(0x0C05B4ACu, 1); goto L_0C05B4AC; }  /* 0C05B4A8 bf/s */
L_0C05B4AC: BLKS(0x0C05B4ACu);
	r14 += 0xCu;  /* 0C05B4AC add #imm,Rn */
	r15 = r14;  /* 0C05B4AE mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05B4B2u, 3);  /* 0C05B4B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05B4B4u, 1);  /* 0C05B4B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05B4B6u, 1);  /* 0C05B4B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05B4B8u, 1);  /* 0C05B4B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05B4BAu, 1);  /* 0C05B4B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05B4BCu, 1);  /* 0C05B4BA mov.l @Rm+,Rn */
	IF(0x0C05B4BCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05B4BC rts */
}

/* FUN_0c05b4d0 */
void f_0C05B4D0(sh3_t *c)
{
	LOCALS;
L_0C05B4D0: BLKS(0x0C05B4D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05B4D2u, 1);  /* 0C05B4D0 mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C05B4D2 mov #imm,Rn */
	r0 = 0xC27DC84u; UPD(0x0C05B4D6u, 2);  /* 0C05B4D4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C05B4D6 mov Rm,Rn */
	r7 = 0x0u;  /* 0C05B4D8 mov #imm,Rn */
	r4 = 0x0u;  /* 0C05B4DA mov #imm,Rn */
	r5 = 0x0u;  /* 0C05B4DC mov #imm,Rn */
	r6 = 0x2u;  /* 0C05B4DE mov #imm,Rn */
	UPD(0x0C05B4E0u, 5);
L_0C05B4E0: BLKS(0x0C05B4E0u);
	r2 = r7;  /* 0C05B4E0 mov Rm,Rn */
	r1 = 0x0u;  /* 0C05B4E2 mov #imm,Rn */
	r2 += r0;  /* 0C05B4E4 add Rm,Rn */
	UPD(0x0C05B4E6u, 3);
L_0C05B4E6: BLKS(0x0C05B4E6u);
	r2 += 0x28u;  /* 0C05B4E6 add #imm,Rn */
	W16(r2, r4); UPD(0x0C05B4EAu, 2);  /* 0C05B4E8 mov.w Rm,@Rn */
	r1 += 0x1u;  /* 0C05B4EA add #imm,Rn */
	r2 += 0xFFFFFFD8u;  /* 0C05B4EC add #imm,Rn */
	W32(r2, r5); UPD(0x0C05B4F0u, 3);  /* 0C05B4EE mov.l Rm,@Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C05B4F0 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r6;  /* 0C05B4F2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x30u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05B4E6u, 5); goto L_0C05B4E6; } goto L_0C05B4F8; }  /* 0C05B4F4 bf/s */
L_0C05B4F8: BLKS(0x0C05B4F8u);
	r1 = r3;  /* 0C05B4F8 mov Rm,Rn */
	r3 = 0x90u; UPD(0x0C05B4FCu, 3);  /* 0C05B4FA mov.w @(disp,pc),Rn */
	r1 += 0x1u;  /* 0C05B4FC add #imm,Rn */
	r7 += r3;  /* 0C05B4FE add Rm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C05B500 exts.w Rm,Rn */
	r2 = 0x1u;  /* 0C05B502 mov #imm,Rn */
	T = (s32)r3 > (s32)r2;  /* 0C05B504 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C05B4E0u, 8); goto L_0C05B4E0; }  /* 0C05B506 bf */
L_0C05B508: BLKS(0x0C05B508u);
	r15 = r14;  /* 0C05B508 mov Rm,Rn */
	IF(0x0C05B50Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C05B50A rts */
}

/* FUN_0c05b520 */
void f_0C05B520(sh3_t *c)
{
	LOCALS;
L_0C05B520: BLKS(0x0C05B520u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05B522u, 1);  /* 0C05B520 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C05B522 mov #imm,Rn */
	r0 = 0xC217A04u; UPD(0x0C05B526u, 2);  /* 0C05B524 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C05B526 mov Rm,Rn */
	r4 = 0x0u;  /* 0C05B528 mov #imm,Rn */
	r6 = 0x0u;  /* 0C05B52A mov #imm,Rn */
	r7 = 0x0u;  /* 0C05B52C mov #imm,Rn */
	r3 = 0x7Fu;  /* 0C05B52E mov #imm,Rn */
	UPD(0x0C05B530u, 5);
L_0C05B530: BLKS(0x0C05B530u);
	r2 = r4;  /* 0C05B530 mov Rm,Rn */
	r1 = 0x0u;  /* 0C05B532 mov #imm,Rn */
	r2 += r0;  /* 0C05B534 add Rm,Rn */
	IF(0x0C05B536u); ;  /* 0C05B536 nop */
	UPD(0x0C05B538u, 4);
L_0C05B538: BLKS(0x0C05B538u);
	r2 += 0x46u;  /* 0C05B538 add #imm,Rn */
	W16(r2, r6); UPD(0x0C05B53Cu, 2);  /* 0C05B53A mov.w Rm,@Rn */
	r1 += 0x1u;  /* 0C05B53C add #imm,Rn */
	r2 += 0xFFFFFFBAu;  /* 0C05B53E add #imm,Rn */
	W32(r2, r7); UPD(0x0C05B542u, 3);  /* 0C05B540 mov.l Rm,@Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C05B542 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C05B544 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x50u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05B538u, 5); goto L_0C05B538; } goto L_0C05B54A; }  /* 0C05B546 bf/s */
L_0C05B54A: BLKS(0x0C05B54Au);
	r1 = r5;  /* 0C05B54A mov Rm,Rn */
	r5 = 0x2800u; UPD(0x0C05B54Eu, 3);  /* 0C05B54C mov.w @(disp,pc),Rn */
	r1 += 0x1u;  /* 0C05B54E add #imm,Rn */
	r4 += r5;  /* 0C05B550 add Rm,Rn */
	r5 = (u32)(s32)(s16)r1;  /* 0C05B552 exts.w Rm,Rn */
	r2 = 0x1u;  /* 0C05B554 mov #imm,Rn */
	T = (s32)r5 > (s32)r2;  /* 0C05B556 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C05B530u, 8); goto L_0C05B530; }  /* 0C05B558 bf */
L_0C05B55A: BLKS(0x0C05B55Au);
	r15 = r14;  /* 0C05B55A mov Rm,Rn */
	IF(0x0C05B55Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C05B55C rts */
}

/* FUN_0c05b570 */
void f_0C05B570(sh3_t *c)
{
	LOCALS;
L_0C05B570: BLKS(0x0C05B570u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05B572u, 1);  /* 0C05B570 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C05B572 mov #imm,Rn */
	r7 = 0xB4u; UPD(0x0C05B576u, 2);  /* 0C05B574 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C05B576 mov Rm,Rn */
	r6 = 0xC26CDDEu; UPD(0x0C05B57Au, 2);  /* 0C05B578 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C05B57A mov #imm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C05B57Eu, 2);  /* 0C05B57C mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C05B57E mov #imm,Rn */
	r2 = 0xC26CDDBu; UPD(0x0C05B582u, 2);  /* 0C05B580 mov.l @(disp,pc),Rn */
	IF(0x0C05B582u); ;  /* 0C05B582 nop */
	UPD(0x0C05B584u, 1);
L_0C05B584: BLKS(0x0C05B584u);
	r1 = r5;  /* 0C05B584 mov Rm,Rn */
	r1 += 0x1u;  /* 0C05B586 add #imm,Rn */
	r5 = (u32)(s32)(s16)r1;  /* 0C05B588 exts.w Rm,Rn */
	W8(r2, r4); UPD(0x0C05B58Cu, 4);  /* 0C05B58A mov.b Rm,@Rn */
	W8(r6, r4); UPD(0x0C05B58Eu, 1);  /* 0C05B58C mov.b Rm,@Rn */
	r2 += r7;  /* 0C05B58E add Rm,Rn */
	W32(r3, r0); UPD(0x0C05B592u, 2);  /* 0C05B590 mov.l Rm,@Rn */
	r6 += r7;  /* 0C05B592 add Rm,Rn */
	r1 = 0xBFu; UPD(0x0C05B596u, 2);  /* 0C05B594 mov.w @(disp,pc),Rn */
	T = (s32)r5 > (s32)r1;  /* 0C05B596 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += r7; /* slot add Rm,Rn */ if (c_) { UPD(0x0C05B584u, 4); goto L_0C05B584; } goto L_0C05B59C; }  /* 0C05B598 bf/s */
L_0C05B59C: BLKS(0x0C05B59Cu);
	r15 = r14;  /* 0C05B59C mov Rm,Rn */
	IF(0x0C05B59Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C05B59E rts */
}

/* FUN_0c05b5c0 */
void f_0C05B5C0(sh3_t *c)
{
	LOCALS;
L_0C05B5C0: BLKS(0x0C05B5C0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05B5C2u, 1);  /* 0C05B5C0 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C05B5C2 mov #imm,Rn */
	r3 = 0xFFu; UPD(0x0C05B5C6u, 2);  /* 0C05B5C4 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C05B5C6 mov Rm,Rn */
	r2 = 0xC27E0FCu; UPD(0x0C05B5CAu, 2);  /* 0C05B5C8 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C05B5CA mov #imm,Rn */
	UPD(0x0C05B5CCu, 1);
L_0C05B5CC: BLKS(0x0C05B5CCu);
	W32(r2, r7); UPD(0x0C05B5CEu, 1);  /* 0C05B5CC mov.l Rm,@Rn */
	r1 += 0x1u;  /* 0C05B5CE add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C05B5D0 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C05B5D2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05B5CCu, 6); goto L_0C05B5CC; } goto L_0C05B5D8; }  /* 0C05B5D4 bf/s */
L_0C05B5D8: BLKS(0x0C05B5D8u);
	r15 = r14;  /* 0C05B5D8 mov Rm,Rn */
	IF(0x0C05B5DAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C05B5DA rts */
}

/* FUN_0c05b5f0 */
void f_0C05B5F0(sh3_t *c)
{
	LOCALS;
L_0C05B5F0: BLKS(0x0C05B5F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05B5F2u, 1);  /* 0C05B5F0 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C05B5F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05B5F6u, 2);  /* 0C05B5F4 mov.l Rm,@-Rn */
	r2 = 0x3u;  /* 0C05B5F6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05B5FAu, 2);  /* 0C05B5F8 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05B5FCu, 1);  /* 0C05B5FA mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05B5FEu, 1);  /* 0C05B5FC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05B600u, 1);  /* 0C05B5FE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05B602u, 1);  /* 0C05B600 mov.l Rm,@-Rn */
	r7 = 0xC275544u; UPD(0x0C05B604u, 1);  /* 0C05B602 mov.l @(disp,pc),Rn */
	IF(0x0C05B604u); r15 -= 4; W32(r15, PR); UPD(0x0C05B606u, 1);  /* 0C05B604 sts.l pr,@-Rn */
	r3 = 0xC161ADCu; UPD(0x0C05B608u, 1);  /* 0C05B606 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C05B608 mov Rm,Rn */
	UPD(0x0C05B60Au, 1);
L_0C05B60A: BLKS(0x0C05B60Au);
	IF(0x0C05B60Au); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C05B60Cu, 1);  /* 0C05B60A mov.b @(r0,Rm),Rn */
	IF(0x0C05B60Cu); W8(r0 + r7, r4); UPD(0x0C05B60Eu, 1);  /* 0C05B60C mov.b Rm,@(r0,Rn) */
	r4 = r0;  /* 0C05B60E mov Rm,Rn */
	r4 += 0x1u;  /* 0C05B610 add #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C05B612 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C05B614 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C05B60Au, 7); goto L_0C05B60A; }  /* 0C05B616 bf */
L_0C05B618: BLKS(0x0C05B618u);
	r0 = 0x7u;  /* 0C05B618 mov #imm,Rn */
	r13 = 0xC27DC50u; UPD(0x0C05B61Cu, 2);  /* 0C05B61A mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r13); UPD(0x0C05B61Eu, 1);  /* 0C05B61C mov.b @Rm,Rn */
	r9 = 0x16Cu; UPD(0x0C05B620u, 1);  /* 0C05B61E mov.w @(disp,pc),Rn */
	r2 = r3 & 0xFF;  /* 0C05B620 extu.b Rm,Rn */
	IF(0x0C05B622u); MACL = r2 * r9;  /* 0C05B622 mul.l Rm,Rn */
	r10 = 0xC2859A8u; UPD(0x0C05B626u, 4);  /* 0C05B624 mov.l @(disp,pc),Rn */
	IF(0x0C05B626u); r7 = MACL;  /* 0C05B626 sts macl,Rn */
	r7 += r10;  /* 0C05B628 add Rm,Rn */
	r1 = R32(r7 + 0x4u); UPD(0x0C05B62Cu, 3);  /* 0C05B62A mov.l @(disp,Rm),Rn */
	T = r1 > r0;  /* 0C05B62C cmp/hi Rm,Rn */
	{ u32 c_ = T; r7 += 0xBu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05B64Au, 4); goto L_0C05B64A; } goto L_0C05B632; }  /* 0C05B62E bt/s */
L_0C05B632: BLKS(0x0C05B632u);
	r12 = (u32)(s32)(s8)R8(r7); UPD(0x0C05B634u, 2);  /* 0C05B632 mov.b @Rm,Rn */
	r5 = 0xC275544u; UPD(0x0C05B636u, 1);  /* 0C05B634 mov.l @(disp,pc),Rn */
	r7 += 0x4u;  /* 0C05B636 add #imm,Rn */
	W8(r5, r12); UPD(0x0C05B63Au, 2);  /* 0C05B638 mov.b Rm,@Rn */
	r8 = r5;  /* 0C05B63A mov Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r7); UPD(0x0C05B63Eu, 2);  /* 0C05B63C mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C05B63E add #imm,Rn */
	W8(r8, r11); UPD(0x0C05B642u, 2);  /* 0C05B640 mov.b Rm,@Rn */
	r7 += 0x4u;  /* 0C05B642 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C05B646u, 2);  /* 0C05B644 mov.b @Rm,Rn */
	r5 += 0x2u;  /* 0C05B646 add #imm,Rn */
	W8(r5, r6); UPD(0x0C05B64Au, 2);  /* 0C05B648 mov.b Rm,@Rn */
L_0C05B64A: BLKS(0x0C05B64Au);
	r12 = 0xC050CD0u; UPD(0x0C05B64Cu, 1);  /* 0C05B64A mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C05B64C mov #imm,Rn */
	r4 = 0xC161ACCu; UPD(0x0C05B650u, 2);  /* 0C05B64E mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C05B652u, 1);  /* 0C05B650 mov.l @(disp,pc),Rn */
	IF(0x0C05B652u); { u32 t_ = r12; PR = 0x0C05B656u; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05B656u); }  /* 0C05B652 jsr @Rn */
L_0C05B656: BLKS(0x0C05B656u);
	r4 = 0xC275544u; UPD(0x0C05B658u, 1);  /* 0C05B656 mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C05B658 mov #imm,Rn */
	r7 = 0xC040C000u; UPD(0x0C05B65Cu, 2);  /* 0C05B65A mov.l @(disp,pc),Rn */
	IF(0x0C05B65Cu); { u32 t_ = r12; PR = 0x0C05B660u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05B660u); }  /* 0C05B65C jsr @Rn */
L_0C05B660: BLKS(0x0C05B660u);
	r4 = 0xC161AD0u; UPD(0x0C05B662u, 1);  /* 0C05B660 mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C05B662 mov #imm,Rn */
	r7 = 0x4040C000u; UPD(0x0C05B666u, 2);  /* 0C05B664 mov.l @(disp,pc),Rn */
	IF(0x0C05B666u); { u32 t_ = r12; PR = 0x0C05B66Au; r6 = 0x15u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05B66Au); }  /* 0C05B666 jsr @Rn */
L_0C05B66A: BLKS(0x0C05B66Au);
	r0 = (u32)(s32)(s8)R8(r13); UPD(0x0C05B66Cu, 1);  /* 0C05B66A mov.b @Rm,Rn */
	r11 = r0 & 0xFF;  /* 0C05B66C extu.b Rm,Rn */
	IF(0x0C05B66Eu); MACL = r11 * r9;  /* 0C05B66E mul.l Rm,Rn */
	r12 = 0xC22C870u; UPD(0x0C05B672u, 4);  /* 0C05B670 mov.l @(disp,pc),Rn */
	IF(0x0C05B672u); r7 = MACL;  /* 0C05B672 sts macl,Rn */
	r7 += r10;  /* 0C05B674 add Rm,Rn */
	r1 = R32(r7); UPD(0x0C05B678u, 3);  /* 0C05B676 mov.l @Rm,Rn */
	W32(r12, r1); UPD(0x0C05B67Au, 1);  /* 0C05B678 mov.l Rm,@Rn */
	r7 += 0x18u;  /* 0C05B67A add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r7); UPD(0x0C05B67Eu, 2);  /* 0C05B67C mov.b @Rm,Rn */
	r6 = 0xC161AD4u; UPD(0x0C05B680u, 1);  /* 0C05B67E mov.l @(disp,pc),Rn */
	r0 = r8 & 0xFF;  /* 0C05B680 extu.b Rm,Rn */
	IF(0x0C05B682u); r0 <<= 2;  /* 0C05B682 shll2 Rn */
	IF(0x0C05B684u); r5 = R32(r0 + r6); UPD(0x0C05B686u, 3);  /* 0C05B684 mov.l @(r0,Rm),Rn */
	r11 = 0xC2864B4u; UPD(0x0C05B688u, 1);  /* 0C05B686 mov.l @(disp,pc),Rn */
	r9 = 0xC05E330u; UPD(0x0C05B68Au, 1);  /* 0C05B688 mov.l @(disp,pc),Rn */
	r8 = 0xC161A97u; UPD(0x0C05B68Cu, 1);  /* 0C05B68A mov.l @(disp,pc),Rn */
	r3 = 0xC2839D0u; UPD(0x0C05B68Eu, 1);  /* 0C05B68C mov.l @(disp,pc),Rn */
	W32(r11, r5); UPD(0x0C05B690u, 1);  /* 0C05B68E mov.l Rm,@Rn */
	r10 = 0x80808000u; UPD(0x0C05B692u, 1);  /* 0C05B690 mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C05B692 mov #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C05B696u, 2);  /* 0C05B694 mov.b @Rm,Rn */
	r7 = r10;  /* 0C05B696 mov Rm,Rn */
	IF(0x0C05B698u); { u32 t_ = r9; PR = 0x0C05B69Cu; r4 = R32(r3 + 0x34u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C05E330, 0x0C05E330u, 0x0C05B69Cu); }  /* 0C05B698 jsr @Rn */
L_0C05B69C: BLKS(0x0C05B69Cu);
	r2 = 0xC283C50u; UPD(0x0C05B69Eu, 1);  /* 0C05B69C mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFFDu;  /* 0C05B69E add #imm,Rn */
	r8 += 0x7u;  /* 0C05B6A0 add #imm,Rn */
	r4 = R32(r2 + 0x34u); UPD(0x0C05B6A4u, 3);  /* 0C05B6A2 mov.l @(disp,Rm),Rn */
	r7 = r10;  /* 0C05B6A4 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C05B6A8u, 2);  /* 0C05B6A6 mov.b @Rm,Rn */
	IF(0x0C05B6A8u); { u32 t_ = r9; PR = 0x0C05B6ACu; r5 = 0x27u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C05E330, 0x0C05E330u, 0x0C05B6ACu); }  /* 0C05B6A8 jsr @Rn */
L_0C05B6AC: BLKS(0x0C05B6ACu);
	r4 = R32(r12); UPD(0x0C05B6AEu, 1);  /* 0C05B6AC mov.l @Rm,Rn */
	r8 += 0x4u;  /* 0C05B6AE add #imm,Rn */
	r7 = R32(r11); UPD(0x0C05B6B2u, 2);  /* 0C05B6B0 mov.l @Rm,Rn */
	r5 = 0x27u;  /* 0C05B6B2 mov #imm,Rn */
	IF(0x0C05B6B4u); { u32 t_ = r9; PR = 0x0C05B6B8u; r6 = (u32)(s32)(s8)R8(r8); /* slot mov.b @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C05E330, 0x0C05E330u, 0x0C05B6B8u); }  /* 0C05B6B4 jsr @Rn */
L_0C05B6B8: BLKS(0x0C05B6B8u);
	r4 = 0xC22486Eu; UPD(0x0C05B6BAu, 1);  /* 0C05B6B8 mov.l @(disp,pc),Rn */
	r5 = 0x25u;  /* 0C05B6BA mov #imm,Rn */
	r10 = 0xC057250u; UPD(0x0C05B6BEu, 2);  /* 0C05B6BC mov.l @(disp,pc),Rn */
	r6 = 0xBu;  /* 0C05B6BE mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C05B6C2u, 2);  /* 0C05B6C0 mov.b @Rm,Rn */
	IF(0x0C05B6C2u); { u32 t_ = r10; PR = 0x0C05B6C6u; r4 = r0 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057250, 0x0C057250u, 0x0C05B6C6u); }  /* 0C05B6C2 jsr @Rn */
L_0C05B6C6: BLKS(0x0C05B6C6u);
	r9 = (u32)(s32)(s8)R8(r13); UPD(0x0C05B6C8u, 1);  /* 0C05B6C6 mov.b @Rm,Rn */
	r5 = 0x26u;  /* 0C05B6C8 mov #imm,Rn */
	r7 = 0xC057290u; UPD(0x0C05B6CCu, 2);  /* 0C05B6CA mov.l @(disp,pc),Rn */
	r4 = r9 & 0xFF;  /* 0C05B6CC extu.b Rm,Rn */
	r6 = 0xBu;  /* 0C05B6CE mov #imm,Rn */
	r15 = r14;  /* 0C05B6D0 mov Rm,Rn */
	IF(0x0C05B6D2u); PR = R32(r15); r15 += 4; UPD(0x0C05B6D4u, 4);  /* 0C05B6D2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05B6D6u, 1);  /* 0C05B6D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C05B6D8u, 1);  /* 0C05B6D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05B6DAu, 1);  /* 0C05B6D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05B6DCu, 1);  /* 0C05B6DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05B6DEu, 1);  /* 0C05B6DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05B6E0u, 1);  /* 0C05B6DE mov.l @Rm+,Rn */
	IF(0x0C05B6E0u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C057290u: TAIL(f_0C057290); default: JUMPD(tv_); } }  /* 0C05B6E0 jmp @Rn */
}

/* FUN_0c05b740 */
void f_0C05B740(sh3_t *c)
{
	LOCALS;
L_0C05B740: BLKS(0x0C05B740u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05B742u, 1);  /* 0C05B740 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05B744u, 1);  /* 0C05B742 mov.l Rm,@-Rn */
	r3 = 0xC21F5E0u; UPD(0x0C05B746u, 1);  /* 0C05B744 mov.l @(disp,pc),Rn */
	IF(0x0C05B746u); r15 -= 4; W32(r15, PR); UPD(0x0C05B748u, 1);  /* 0C05B746 sts.l pr,@-Rn */
	r2 = 0xC22466Cu; UPD(0x0C05B74Au, 1);  /* 0C05B748 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C05B74Cu, 1);  /* 0C05B74A mov.b @Rm,Rn */
	r4 = 0xC21CA15u; UPD(0x0C05B74Eu, 1);  /* 0C05B74C mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C05B750u, 1);  /* 0C05B74E mov.b @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C05B752u, 1);  /* 0C05B750 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C05B752 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05B75Cu, 4); goto L_0C05B75C; } goto L_0C05B758; }  /* 0C05B754 bt/s */
L_0C05B758: BLKS(0x0C05B758u);
	r3 = 0x0u;  /* 0C05B758 mov #imm,Rn */
	r0 = 0x0u;  /* 0C05B75A mov #imm,Rn */
	UPD(0x0C05B75Cu, 3);
L_0C05B75C: BLKS(0x0C05B75Cu);
	r2 = 0xC161B00u; UPD(0x0C05B75Eu, 1);  /* 0C05B75C mov.l @(disp,pc),Rn */
	IF(0x0C05B75Eu); r0 <<= 2;  /* 0C05B75E shll2 Rn */
	r4 = 0xC161AE0u; UPD(0x0C05B762u, 2);  /* 0C05B760 mov.l @(disp,pc),Rn */
	IF(0x0C05B762u); r3 <<= 2;  /* 0C05B762 shll2 Rn */
	IF(0x0C05B764u); r6 = R32(r0 + r2); UPD(0x0C05B766u, 2);  /* 0C05B764 mov.l @(r0,Rm),Rn */
	IF(0x0C05B766u); r7 = R32(r0 + r4); UPD(0x0C05B768u, 1);  /* 0C05B766 mov.l @(r0,Rm),Rn */
	r5 = 0xC395088u; UPD(0x0C05B76Au, 1);  /* 0C05B768 mov.l @(disp,pc),Rn */
	r0 = 0xC27DFF8u; UPD(0x0C05B76Cu, 1);  /* 0C05B76A mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C05B76Eu, 1);  /* 0C05B76C mov.l Rm,@Rn */
	r8 = 0xC21F5E4u; UPD(0x0C05B770u, 1);  /* 0C05B76E mov.l @(disp,pc),Rn */
	W32(r0, r7); UPD(0x0C05B772u, 1);  /* 0C05B770 mov.l Rm,@Rn */
	W32(r8, r7); UPD(0x0C05B774u, 1);  /* 0C05B772 mov.l Rm,@Rn */
	r0 = r3;  /* 0C05B774 mov Rm,Rn */
	r6 = 0xC161B20u; UPD(0x0C05B778u, 2);  /* 0C05B776 mov.l @(disp,pc),Rn */
	r8 = 0xC393068u; UPD(0x0C05B77Au, 1);  /* 0C05B778 mov.l @(disp,pc),Rn */
	IF(0x0C05B77Au); r5 = R32(r0 + r6); UPD(0x0C05B77Cu, 1);  /* 0C05B77A mov.l @(r0,Rm),Rn */
	{ u32 c_ = T; W32(r8, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C05B7A0u, 3); goto L_0C05B7A0; } UPD(0x0C05B780u, 1); goto L_0C05B780; }  /* 0C05B77C bt/s */
L_0C05B780: BLKS(0x0C05B780u);
	r1 = 0xC392AFDu; UPD(0x0C05B782u, 1);  /* 0C05B780 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C05B782 mov #imm,Rn */
	r8 = 0xC392AFEu; UPD(0x0C05B786u, 2);  /* 0C05B784 mov.l @(disp,pc),Rn */
	W8(r1, r5); UPD(0x0C05B788u, 1);  /* 0C05B786 mov.b Rm,@Rn */
	W8(r8, r5); UPD(0x0C05B78Au, 1);  /* 0C05B788 mov.b Rm,@Rn */
	r15 = r14;  /* 0C05B78A mov Rm,Rn */
	IF(0x0C05B78Cu); PR = R32(r15); r15 += 4; UPD(0x0C05B78Eu, 2);  /* 0C05B78C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05B790u, 1);  /* 0C05B78E mov.l @Rm+,Rn */
	IF(0x0C05B790u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05B790 rts */
L_0C05B7A0: BLKS(0x0C05B7A0u);
	r4 = 0xC220C36u; UPD(0x0C05B7A2u, 1);  /* 0C05B7A0 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r4); UPD(0x0C05B7A4u, 1);  /* 0C05B7A2 mov.w @Rm,Rn */
	r0 = 0xC060350u; UPD(0x0C05B7A6u, 1);  /* 0C05B7A4 mov.l @(disp,pc),Rn */
	r4 = r7 & 0xFFFF;  /* 0C05B7A6 extu.w Rm,Rn */
	IF(0x0C05B7A8u); r4 <<= 16;  /* 0C05B7A8 shll16 Rn */
	IF(0x0C05B7AAu); { u32 t_ = r0; PR = 0x0C05B7AEu; IF(0x0C05B7ACu); r4 >>= 2; /* slot shlr2 Rn */ UPD(t_, 4); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C05B7AEu); }  /* 0C05B7AA jsr @Rn */
L_0C05B7AE: BLKS(0x0C05B7AEu);
	r0 = 0xC050D70u; UPD(0x0C05B7B0u, 1);  /* 0C05B7AE mov.l @(disp,pc),Rn */
	IF(0x0C05B7B0u); { u32 t_ = r0; PR = 0x0C05B7B4u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C05B7B4u); }  /* 0C05B7B0 jsr @Rn */
L_0C05B7B4: BLKS(0x0C05B7B4u);
	r3 = R32(r8); UPD(0x0C05B7B6u, 1);  /* 0C05B7B4 mov.l @Rm,Rn */
	r3 += r0;  /* 0C05B7B6 add Rm,Rn */
	{ W32(r8, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C05B780u, 4); goto L_0C05B780; }  /* 0C05B7B8 bra */
}

/* FUN_0c05b800 */
void f_0C05B800(sh3_t *c)
{
	LOCALS;
L_0C05B800: BLKS(0x0C05B800u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C05B802u, 1);  /* 0C05B800 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C05B804u, 1);  /* 0C05B802 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05B806u, 1);  /* 0C05B804 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05B808u, 1);  /* 0C05B806 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05B80Au, 1);  /* 0C05B808 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05B80Cu, 1);  /* 0C05B80A mov.l Rm,@-Rn */
	r8 = 0xC050590u; UPD(0x0C05B80Eu, 1);  /* 0C05B80C mov.l @(disp,pc),Rn */
	IF(0x0C05B80Eu); r15 -= 4; W32(r15, PR); UPD(0x0C05B810u, 1);  /* 0C05B80E sts.l pr,@-Rn */
	IF(0x0C05B810u); { u32 t_ = r8; PR = 0x0C05B814u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050590, 0x0C050590u, 0x0C05B814u); }  /* 0C05B810 jsr @Rn */
L_0C05B814: BLKS(0x0C05B814u);
	r2 = 0xC21F7F9u; UPD(0x0C05B816u, 1);  /* 0C05B814 mov.l @(disp,pc),Rn */
	r10 = r0;  /* 0C05B816 mov Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C05B81Au, 2);  /* 0C05B818 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05B81A tst Rm,Rn */
	if (T) { UPD(0x0C05B8B0u, 4); goto L_0C05B8B0; }  /* 0C05B81C bt */
L_0C05B81E: BLKS(0x0C05B81Eu);
	r8 = 0x0u;  /* 0C05B81E mov #imm,Rn */
	r12 = 0xC161B6Cu; UPD(0x0C05B822u, 2);  /* 0C05B820 mov.l @(disp,pc),Rn */
	r11 = 0xC050AC0u; UPD(0x0C05B824u, 1);  /* 0C05B822 mov.l @(disp,pc),Rn */
L_0C05B824: BLKS(0x0C05B824u);
	r4 = 0xC392B00u; UPD(0x0C05B826u, 1);  /* 0C05B824 mov.l @(disp,pc),Rn */
	r9 = 0xFFFFFFFFu;  /* 0C05B826 mov #imm,Rn */
	r3 = R32(r4); UPD(0x0C05B82Au, 2);  /* 0C05B828 mov.l @Rm,Rn */
	T = (s32)r8 > (s32)r3;  /* 0C05B82A cmp/gt Rm,Rn */
	IF(0x0C05B82Cu); r0 = T;  /* 0C05B82C movt Rn */
	T = (r0 & r0) == 0;  /* 0C05B82E tst Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C05B830 negc Rm,Rn */
	IF(0x0C05B832u); r0 <<= 2;  /* 0C05B832 shll2 Rn */
	T = (s32)r8 > (s32)r10;  /* 0C05B834 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05B838u); r4 = R32(r0 + r12); /* slot mov.l @(r0,Rm),Rn */ if (c_) { UPD(0x0C05B83Cu, 9); goto L_0C05B83C; } UPD(0x0C05B83Au, 1); goto L_0C05B83A; }  /* 0C05B836 bf/s */
L_0C05B83A: BLKS(0x0C05B83Au);
	r4 += 0x4u;  /* 0C05B83A add #imm,Rn */
	UPD(0x0C05B83Cu, 1);
L_0C05B83C: BLKS(0x0C05B83Cu);
	r8 += 0x4u;  /* 0C05B83C add #imm,Rn */
	r6 = r8;  /* 0C05B83E mov Rm,Rn */
	r5 = 0x0u;  /* 0C05B840 mov #imm,Rn */
	IF(0x0C05B842u); { u32 t_ = r11; PR = 0x0C05B846u; r4 = R32(r4); /* slot mov.l @Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C050AC0, 0x0C050AC0u, 0x0C05B846u); }  /* 0C05B842 jsr @Rn */
L_0C05B846: BLKS(0x0C05B846u);
	r6 = r8;  /* 0C05B846 mov Rm,Rn */
	r6 += 0xFFFFFFFDu;  /* 0C05B848 add #imm,Rn */
	r8 = (u32)(s32)(s16)r6;  /* 0C05B84A exts.w Rm,Rn */
	r5 = 0x18u;  /* 0C05B84C mov #imm,Rn */
	T = (s32)r8 > (s32)r5;  /* 0C05B84E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C05B824u, 8); goto L_0C05B824; }  /* 0C05B850 bf */
L_0C05B852: BLKS(0x0C05B852u);
	r10 = 0xC286068u; UPD(0x0C05B854u, 1);  /* 0C05B852 mov.l @(disp,pc),Rn */
	r5 = 0xC21CA2Cu; UPD(0x0C05B856u, 1);  /* 0C05B854 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C05B858u, 1);  /* 0C05B856 mov.w @Rm,Rn */
	r11 = 0x400u; UPD(0x0C05B85Au, 1);  /* 0C05B858 mov.w @(disp,pc),Rn */
	r6 = r7 & 0xFFFF;  /* 0C05B85A extu.w Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C05B85Eu, 2);  /* 0C05B85C mov.w @Rm,Rn */
	T = r6 == r11;  /* 0C05B85E cmp/eq Rm,Rn */
	r8 = 0xC2852C8u; UPD(0x0C05B862u, 2);  /* 0C05B860 mov.l @(disp,pc),Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C05B862 negc Rm,Rn */
	r3 = r4 & 0xFFFF;  /* 0C05B864 extu.w Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r8); UPD(0x0C05B868u, 3);  /* 0C05B866 mov.w @Rm,Rn */
	T = r3 == r11;  /* 0C05B868 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C05B86A negc Rm,Rn */
	r12 = r2 & 0xFFFF;  /* 0C05B86C extu.w Rm,Rn */
	T = r12 == r11;  /* 0C05B86E cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r10 = r_; }  /* 0C05B870 negc Rm,Rn */
	r7 |= r0;  /* 0C05B872 or Rm,Rn */
	r7 |= r10;  /* 0C05B874 or Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C05B876 tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05B8A0u, 11); goto L_0C05B8A0; } goto L_0C05B87C; }  /* 0C05B878 bt/s */
L_0C05B87C: BLKS(0x0C05B87Cu);
	r4 = 0xC161B74u; UPD(0x0C05B87Eu, 2);  /* 0C05B87C mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C05B87E mov #imm,Rn */
	r7 = 0xC0404000u; UPD(0x0C05B882u, 2);  /* 0C05B880 mov.l @(disp,pc),Rn */
	r6 = 0x3u;  /* 0C05B882 mov #imm,Rn */
	UPD(0x0C05B884u, 1);
L_0C05B884: BLKS(0x0C05B884u);
	r2 = 0xC050CD0u; UPD(0x0C05B886u, 1);  /* 0C05B884 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C05B886 mov Rm,Rn */
	IF(0x0C05B888u); PR = R32(r15); r15 += 4; UPD(0x0C05B88Au, 2);  /* 0C05B888 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05B88Cu, 1);  /* 0C05B88A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05B88Eu, 1);  /* 0C05B88C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05B890u, 1);  /* 0C05B88E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05B892u, 1);  /* 0C05B890 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05B894u, 1);  /* 0C05B892 mov.l @Rm+,Rn */
	IF(0x0C05B894u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C05B894 jmp @Rn */
L_0C05B8A0: BLKS(0x0C05B8A0u);
	r4 = 0xC161B58u; UPD(0x0C05B8A2u, 1);  /* 0C05B8A0 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C05B8A4u, 1);  /* 0C05B8A2 mov.l @(disp,pc),Rn */
	{ r6 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C05B884u, 3); goto L_0C05B884; }  /* 0C05B8A4 bra */
L_0C05B8B0: BLKS(0x0C05B8B0u);
	r15 = r14;  /* 0C05B8B0 mov Rm,Rn */
	IF(0x0C05B8B2u); PR = R32(r15); r15 += 4; UPD(0x0C05B8B4u, 2);  /* 0C05B8B2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05B8B6u, 1);  /* 0C05B8B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05B8B8u, 1);  /* 0C05B8B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C05B8BAu, 1);  /* 0C05B8B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05B8BCu, 1);  /* 0C05B8BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05B8BEu, 1);  /* 0C05B8BC mov.l @Rm+,Rn */
	IF(0x0C05B8BEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05B8BE rts */
}


#include "recomp.h"
#include "recomp_funcs.h"

void f_0C0A6F00(sh3_t *c)
{
	LOCALS;
L_0C0A6F00: BLKS(0x0C0A6F00u);
	r0 = (u32)(s32)(s16)r4;  /* 0C0A6F00 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6F04u, 2);  /* 0C0A6F02 mov.l Rm,@-Rn */
	r4 = 0xC286734u; UPD(0x0C0A6F06u, 1);  /* 0C0A6F04 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A6F06 mov Rm,Rn */
	r3 = 0xB4u; UPD(0x0C0A6F0Au, 2);  /* 0C0A6F08 mov.w @(disp,pc),Rn */
	r7 = R32(r4); UPD(0x0C0A6F0Cu, 1);  /* 0C0A6F0A mov.l @Rm,Rn */
	IF(0x0C0A6F0Cu); MACL = r0 * r3;  /* 0C0A6F0C mul.l Rm,Rn */
	r7 += 0x1u;  /* 0C0A6F0E add #imm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0A6F12u, 4);  /* 0C0A6F10 mov.l @(disp,pc),Rn */
	IF(0x0C0A6F12u); r6 = MACL;  /* 0C0A6F12 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r7); r7 += 1; r5 = v_; } UPD(0x0C0A6F16u, 2);  /* 0C0A6F14 mov.b @Rm+,Rn */
	r6 += r2;  /* 0C0A6F16 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A6F1Au, 2);  /* 0C0A6F18 mov.w @(disp,pc),Rn */
	r1 = r5 & 0xFF;  /* 0C0A6F1A extu.b Rm,Rn */
	IF(0x0C0A6F1Cu); W8(r0 + r6, r5); UPD(0x0C0A6F1Eu, 2);  /* 0C0A6F1C mov.b Rm,@(r0,Rn) */
	r0 = 0x4Cu;  /* 0C0A6F1E mov #imm,Rn */
	IF(0x0C0A6F20u); MACL = r1 * r0;  /* 0C0A6F20 mul.l Rm,Rn */
	W32(r4, r7); UPD(0x0C0A6F24u, 4);  /* 0C0A6F22 mov.l Rm,@Rn */
	r0 = 0xC26CB22u; UPD(0x0C0A6F26u, 1);  /* 0C0A6F24 mov.l @(disp,pc),Rn */
	IF(0x0C0A6F26u); r3 = MACL;  /* 0C0A6F26 sts macl,Rn */
	r4 = 0xA8u; UPD(0x0C0A6F2Au, 2);  /* 0C0A6F28 mov.w @(disp,pc),Rn */
	IF(0x0C0A6F2Au); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A6F2Cu, 1);  /* 0C0A6F2A mov.b @(r0,Rm),Rn */
	r4 += r6;  /* 0C0A6F2C add Rm,Rn */
	r4 += 0x2u;  /* 0C0A6F2E add #imm,Rn */
	W8(r4, r2); UPD(0x0C0A6F32u, 3);  /* 0C0A6F30 mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C0A6F32 mov #imm,Rn */
	{ u32 v_ = r2; r4 -= 1; W8(r4, v_); } UPD(0x0C0A6F36u, 2);  /* 0C0A6F34 mov.b Rm,@-Rn */
	r15 = r14;  /* 0C0A6F36 mov Rm,Rn */
	IF(0x0C0A6F38u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A6F38 rts */
}

void f_0C0A6F50(sh3_t *c)
{
	LOCALS;
L_0C0A6F50: BLKS(0x0C0A6F50u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A6F52u, 1);  /* 0C0A6F50 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A6F52 exts.w Rm,Rn */
	r3 = 0xC286734u; UPD(0x0C0A6F56u, 2);  /* 0C0A6F54 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A6F56 mov Rm,Rn */
	r6 = R32(r3); UPD(0x0C0A6F5Au, 2);  /* 0C0A6F58 mov.l @Rm,Rn */
	r2 = 0xB4u; UPD(0x0C0A6F5Cu, 1);  /* 0C0A6F5A mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r5 = v_; } UPD(0x0C0A6F5Eu, 1);  /* 0C0A6F5C mov.w @Rm+,Rn */
	IF(0x0C0A6F5Eu); MACL = r4 * r2;  /* 0C0A6F5E mul.l Rm,Rn */
	W32(r3, r6); UPD(0x0C0A6F62u, 3);  /* 0C0A6F60 mov.l Rm,@Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A6F64u, 1);  /* 0C0A6F62 mov.l @(disp,pc),Rn */
	IF(0x0C0A6F64u); r3 = MACL;  /* 0C0A6F64 sts macl,Rn */
	r3 += r0;  /* 0C0A6F66 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A6F6Au, 3);  /* 0C0A6F68 mov.w @(disp,pc),Rn */
	IF(0x0C0A6F6Au); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A6F6Cu, 1);  /* 0C0A6F6A mov.b @(r0,Rm),Rn */
	r0 = R32(r3); UPD(0x0C0A6F6Eu, 1);  /* 0C0A6F6C mov.l @Rm,Rn */
	r0 &= 0x10u;  /* 0C0A6F6E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0A6F70 tst Rm,Rn */
	{ u32 c_ = T; r6 = R32(r3 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0A6F94u, 5); goto L_0C0A6F94; } UPD(0x0C0A6F76u, 1); goto L_0C0A6F76; }  /* 0C0A6F72 bt/s */
L_0C0A6F76: BLKS(0x0C0A6F76u);
	r0 = 0x4Cu;  /* 0C0A6F76 mov #imm,Rn */
	IF(0x0C0A6F78u); MACL = r7 * r0;  /* 0C0A6F78 mul.l Rm,Rn */
	r2 = 0xC26CAE0u; UPD(0x0C0A6F7Cu, 4);  /* 0C0A6F7A mov.l @(disp,pc),Rn */
	IF(0x0C0A6F7Cu); r7 = MACL;  /* 0C0A6F7C sts macl,Rn */
	r3 = 0xC220C2Cu; UPD(0x0C0A6F80u, 2);  /* 0C0A6F7E mov.l @(disp,pc),Rn */
	r2 += r7;  /* 0C0A6F80 add Rm,Rn */
	r7 = R32(r2 + 0x10u); UPD(0x0C0A6F84u, 2);  /* 0C0A6F82 mov.l @(disp,Rm),Rn */
	r0 = R32(r3); UPD(0x0C0A6F86u, 1);  /* 0C0A6F84 mov.l @Rm,Rn */
	IF(0x0C0A6F86u); MACL = r0 * r7;  /* 0C0A6F86 mul.l Rm,Rn */
	IF(0x0C0A6F88u); r2 = MACL;  /* 0C0A6F88 sts macl,Rn */
	IF(0x0C0A6F8Au); T = (s32)r2 >= 0;  /* 0C0A6F8A cmp/pz Rn */
	if (!T) { UPD(0x0C0A6FF0u, 7); goto L_0C0A6FF0; }  /* 0C0A6F8C bf */
L_0C0A6F8E: BLKS(0x0C0A6F8Eu);
	r7 = (r2 >> 16) | (r2 << 16);  /* 0C0A6F8E swap.w Rm,Rn */
	r2 = (u32)(s32)(s16)r7;  /* 0C0A6F90 exts.w Rm,Rn */
	r6 -= r2;  /* 0C0A6F92 sub Rm,Rn */
	UPD(0x0C0A6F94u, 3);
L_0C0A6F94: BLKS(0x0C0A6F94u);
	r0 = 0xB4u; UPD(0x0C0A6F96u, 1);  /* 0C0A6F94 mov.w @(disp,pc),Rn */
	IF(0x0C0A6F96u); MACL = r4 * r0;  /* 0C0A6F96 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0A6F9Au, 3);  /* 0C0A6F98 mov.l @(disp,pc),Rn */
	IF(0x0C0A6F9Au); r2 = MACL;  /* 0C0A6F9A sts macl,Rn */
	r7 += r2;  /* 0C0A6F9C add Rm,Rn */
	r3 = R32(r7 + 0x24u); UPD(0x0C0A6FA0u, 3);  /* 0C0A6F9E mov.l @(disp,Rm),Rn */
	r2 = r5;  /* 0C0A6FA0 mov Rm,Rn */
	r0 = (r3 >> 16) | (r3 << 16);  /* 0C0A6FA2 swap.w Rm,Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C0A6FA4 exts.w Rm,Rn */
	r2 -= r4;  /* 0C0A6FA6 sub Rm,Rn */
	IF(0x0C0A6FA8u); T = (s32)r2 >= 0;  /* 0C0A6FA8 cmp/pz Rn */
	if (!T) { UPD(0x0C0A6FE0u, 8); goto L_0C0A6FE0; }  /* 0C0A6FAA bf */
L_0C0A6FAC: BLKS(0x0C0A6FACu);
	r5 = (r6 >> 16) | (r6 << 16);  /* 0C0A6FAC swap.w Rm,Rn */
	r1 = (u32)(s32)(s16)r5;  /* 0C0A6FAE exts.w Rm,Rn */
	IF(0x0C0A6FB0u); T = (s32)r1 >= 0;  /* 0C0A6FB0 cmp/pz Rn */
	if (!T) { UPD(0x0C0A6FD0u, 6); goto L_0C0A6FD0; }  /* 0C0A6FB2 bf */
L_0C0A6FB4: BLKS(0x0C0A6FB4u);
	r1 += r1;  /* 0C0A6FB4 add Rm,Rn */
	T = (s32)r2 > (s32)r1;  /* 0C0A6FB6 cmp/gt Rm,Rn */
	IF(0x0C0A6FB8u); r6 = T;  /* 0C0A6FB8 movt Rn */
	T = (r6 & r6) == 0;  /* 0C0A6FBA tst Rm,Rn */
	IF(0x0C0A6FBCu); r0 = T;  /* 0C0A6FBC movt Rn */
	r15 = r14;  /* 0C0A6FBE mov Rm,Rn */
	IF(0x0C0A6FC0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 9); RET(t_); }  /* 0C0A6FC0 rts */
L_0C0A6FD0: BLKS(0x0C0A6FD0u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0A6FB4u, 3); goto L_0C0A6FB4; }  /* 0C0A6FD0 bra */
L_0C0A6FE0: BLKS(0x0C0A6FE0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A6FACu, 3); goto L_0C0A6FAC; }  /* 0C0A6FE0 bra */
L_0C0A6FF0: BLKS(0x0C0A6FF0u);
	r3 = 0xFFFFu; UPD(0x0C0A6FF2u, 1);  /* 0C0A6FF0 mov.l @(disp,pc),Rn */
	{ r2 += r3; /* slot add Rm,Rn */ UPD(0x0C0A6F8Eu, 3); goto L_0C0A6F8E; }  /* 0C0A6FF2 bra */
}

void f_0C0A7010(sh3_t *c)
{
	LOCALS;
L_0C0A7010: BLKS(0x0C0A7010u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7012u, 1);  /* 0C0A7010 mov.l Rm,@-Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C0A7012 exts.w Rm,Rn */
	r0 = 0xC286734u; UPD(0x0C0A7016u, 2);  /* 0C0A7014 mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C0A7018u, 1);  /* 0C0A7016 mov.l @Rm,Rn */
	r7 = 0xB4u; UPD(0x0C0A701Au, 1);  /* 0C0A7018 mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r6 = v_; } UPD(0x0C0A701Cu, 1);  /* 0C0A701A mov.w @Rm+,Rn */
	IF(0x0C0A701Cu); MACL = r3 * r7;  /* 0C0A701C mul.l Rm,Rn */
	W32(r0, r2); UPD(0x0C0A7020u, 3);  /* 0C0A701E mov.l Rm,@Rn */
	r5 = 0xC26CD40u; UPD(0x0C0A7022u, 1);  /* 0C0A7020 mov.l @(disp,pc),Rn */
	IF(0x0C0A7022u); r2 = MACL;  /* 0C0A7022 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A7026u, 2);  /* 0C0A7024 mov.w @(disp,pc),Rn */
	r2 += r5;  /* 0C0A7026 add Rm,Rn */
	IF(0x0C0A7028u); r1 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0A702Au, 2);  /* 0C0A7028 mov.b @(r0,Rm),Rn */
	r0 = 0x4Cu;  /* 0C0A702A mov #imm,Rn */
	IF(0x0C0A702Cu); MACL = r1 * r0;  /* 0C0A702C mul.l Rm,Rn */
	r4 = 0xC26CAE0u; UPD(0x0C0A7030u, 4);  /* 0C0A702E mov.l @(disp,pc),Rn */
	IF(0x0C0A7030u); r3 = MACL;  /* 0C0A7030 sts macl,Rn */
	r4 += r3;  /* 0C0A7032 add Rm,Rn */
	r0 = R32(r2 + 0x24u); UPD(0x0C0A7036u, 3);  /* 0C0A7034 mov.l @(disp,Rm),Rn */
	r1 = R32(r4 + 0x8u); UPD(0x0C0A7038u, 1);  /* 0C0A7036 mov.l @(disp,Rm),Rn */
	r5 = R32(r2 + 0x2Cu); UPD(0x0C0A703Au, 1);  /* 0C0A7038 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C0A703A add Rm,Rn */
	r2 = (r0 >> 16) | (r0 << 16);  /* 0C0A703C swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0A703E exts.w Rm,Rn */
	r6 -= r0;  /* 0C0A7040 sub Rm,Rn */
	IF(0x0C0A7042u); T = (s32)r6 >= 0;  /* 0C0A7042 cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A7070u, 8); goto L_0C0A7070; } UPD(0x0C0A7048u, 1); goto L_0C0A7048; }  /* 0C0A7044 bf/s */
L_0C0A7048: BLKS(0x0C0A7048u);
	r4 = (r5 >> 16) | (r5 << 16);  /* 0C0A7048 swap.w Rm,Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A704A exts.w Rm,Rn */
	IF(0x0C0A704Cu); T = (s32)r1 >= 0;  /* 0C0A704C cmp/pz Rn */
	if (!T) { UPD(0x0C0A7060u, 6); goto L_0C0A7060; }  /* 0C0A704E bf */
L_0C0A7050: BLKS(0x0C0A7050u);
	r1 += r1;  /* 0C0A7050 add Rm,Rn */
	T = (s32)r6 > (s32)r1;  /* 0C0A7052 cmp/gt Rm,Rn */
	IF(0x0C0A7054u); r6 = T;  /* 0C0A7054 movt Rn */
	T = (r6 & r6) == 0;  /* 0C0A7056 tst Rm,Rn */
	IF(0x0C0A7058u); r0 = T;  /* 0C0A7058 movt Rn */
	r15 = r14;  /* 0C0A705A mov Rm,Rn */
	IF(0x0C0A705Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 9); RET(t_); }  /* 0C0A705C rts */
L_0C0A7060: BLKS(0x0C0A7060u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0A7050u, 3); goto L_0C0A7050; }  /* 0C0A7060 bra */
L_0C0A7070: BLKS(0x0C0A7070u);
	{ r6 = 0u - r6; /* slot neg Rm,Rn */ UPD(0x0C0A7048u, 3); goto L_0C0A7048; }  /* 0C0A7070 bra */
}

void f_0C0A7090(sh3_t *c)
{
	LOCALS;
L_0C0A7090: BLKS(0x0C0A7090u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7092u, 1);  /* 0C0A7090 mov.l Rm,@-Rn */
	r0 = 0xC286734u; UPD(0x0C0A7094u, 1);  /* 0C0A7092 mov.l @(disp,pc),Rn */
	IF(0x0C0A7094u); r15 -= 4; W32(r15, PR); UPD(0x0C0A7096u, 1);  /* 0C0A7094 sts.l pr,@-Rn */
	r2 = R32(r0); UPD(0x0C0A7098u, 1);  /* 0C0A7096 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r4 = v_; } UPD(0x0C0A709Au, 1);  /* 0C0A7098 mov.w @Rm+,Rn */
	W32(r0, r2); UPD(0x0C0A709Cu, 1);  /* 0C0A709A mov.l Rm,@Rn */
	r0 = 0xC0AFC10u; UPD(0x0C0A709Eu, 1);  /* 0C0A709C mov.l @(disp,pc),Rn */
	IF(0x0C0A709Eu); { u32 t_ = r0; PR = 0x0C0A70A2u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0A70A2u); }  /* 0C0A709E jsr @Rn */
L_0C0A70A2: BLKS(0x0C0A70A2u);
	r0 = 0x1u;  /* 0C0A70A2 mov #imm,Rn */
	r15 = r14;  /* 0C0A70A4 mov Rm,Rn */
	IF(0x0C0A70A6u); PR = R32(r15); r15 += 4; UPD(0x0C0A70A8u, 3);  /* 0C0A70A6 lds.l @Rn+,pr */
	IF(0x0C0A70A8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A70A8 rts */
}

void f_0C0A70C0(sh3_t *c)
{
	LOCALS;
L_0C0A70C0: BLKS(0x0C0A70C0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A70C2u, 1);  /* 0C0A70C0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C0A70C2 exts.w Rm,Rn */
	r6 = 0xC286734u; UPD(0x0C0A70C6u, 2);  /* 0C0A70C4 mov.l @(disp,pc),Rn */
	r2 = 0xB4u; UPD(0x0C0A70C8u, 1);  /* 0C0A70C6 mov.w @(disp,pc),Rn */
	r7 = R32(r6); UPD(0x0C0A70CAu, 1);  /* 0C0A70C8 mov.l @Rm,Rn */
	IF(0x0C0A70CAu); MACL = r5 * r2;  /* 0C0A70CA mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0A70CEu, 3);  /* 0C0A70CC mov.w @Rm+,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0A70D0u, 1);  /* 0C0A70CE mov.l @(disp,pc),Rn */
	IF(0x0C0A70D0u); r2 = MACL;  /* 0C0A70D0 sts macl,Rn */
	W32(r6, r7); UPD(0x0C0A70D4u, 2);  /* 0C0A70D2 mov.l Rm,@Rn */
	r2 += r3;  /* 0C0A70D4 add Rm,Rn */
	r7 = R32(r2 + 0x28u); UPD(0x0C0A70D8u, 2);  /* 0C0A70D6 mov.l @(disp,Rm),Rn */
	IF(0x0C0A70D8u); r0 <<= 16;  /* 0C0A70D8 shll16 Rn */
	r7 -= r0;  /* 0C0A70DA sub Rm,Rn */
	IF(0x0C0A70DCu); T = (s32)r7 >= 0;  /* 0C0A70DC cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A7110u, 6); goto L_0C0A7110; } UPD(0x0C0A70E2u, 1); goto L_0C0A70E2; }  /* 0C0A70DE bf/s */
L_0C0A70E2: BLKS(0x0C0A70E2u);
	r2 = R32(r2 + 0x30u); UPD(0x0C0A70E4u, 1);  /* 0C0A70E2 mov.l @(disp,Rm),Rn */
	IF(0x0C0A70E4u); T = (s32)r2 >= 0;  /* 0C0A70E4 cmp/pz Rn */
	if (!T) { UPD(0x0C0A7100u, 4); goto L_0C0A7100; }  /* 0C0A70E6 bf */
L_0C0A70E8: BLKS(0x0C0A70E8u);
	r4 = 0x20000u; UPD(0x0C0A70EAu, 1);  /* 0C0A70E8 mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0A70EA add Rm,Rn */
	T = (s32)r7 >= (s32)r2;  /* 0C0A70EC cmp/ge Rm,Rn */
	IF(0x0C0A70EEu); r0 = T;  /* 0C0A70EE movt Rn */
	T = (r0 & r0) == 0;  /* 0C0A70F0 tst Rm,Rn */
	IF(0x0C0A70F2u); r0 = T;  /* 0C0A70F2 movt Rn */
	r15 = r14;  /* 0C0A70F4 mov Rm,Rn */
	IF(0x0C0A70F6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 9); RET(t_); }  /* 0C0A70F6 rts */
L_0C0A7100: BLKS(0x0C0A7100u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A70E8u, 3); goto L_0C0A70E8; }  /* 0C0A7100 bra */
L_0C0A7110: BLKS(0x0C0A7110u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0A70E2u, 3); goto L_0C0A70E2; }  /* 0C0A7110 bra */
}

void f_0C0A7130(sh3_t *c)
{
	LOCALS;
L_0C0A7130: BLKS(0x0C0A7130u);
	r5 = 0xB4u; UPD(0x0C0A7132u, 1);  /* 0C0A7130 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A7132 exts.w Rm,Rn */
	IF(0x0C0A7134u); MACL = r1 * r5;  /* 0C0A7134 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0A7138u, 4);  /* 0C0A7136 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A713Au, 1);  /* 0C0A7138 mov.l Rm,@-Rn */
	IF(0x0C0A713Au); r6 = MACL;  /* 0C0A713A sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A713Eu, 2);  /* 0C0A713C mov.w @(disp,pc),Rn */
	r6 += r3;  /* 0C0A713E add Rm,Rn */
	IF(0x0C0A7140u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0A7142u, 2);  /* 0C0A7140 mov.b @(r0,Rm),Rn */
	r0 = 0xC286734u; UPD(0x0C0A7144u, 1);  /* 0C0A7142 mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C0A7146u, 1);  /* 0C0A7144 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r3 = v_; } UPD(0x0C0A7148u, 1);  /* 0C0A7146 mov.w @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r5 = v_; } UPD(0x0C0A714Au, 1);  /* 0C0A7148 mov.w @Rm+,Rn */
	W32(r0, r2); UPD(0x0C0A714Cu, 1);  /* 0C0A714A mov.l Rm,@Rn */
	r0 = 0x180u; UPD(0x0C0A714Eu, 1);  /* 0C0A714C mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r0;  /* 0C0A714E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A7200u, 4); goto L_0C0A7200; } goto L_0C0A7154; }  /* 0C0A7150 bf/s */
L_0C0A7154: BLKS(0x0C0A7154u);
	r2 = 0x4Cu;  /* 0C0A7154 mov #imm,Rn */
	IF(0x0C0A7156u); MACL = r4 * r2;  /* 0C0A7156 mul.l Rm,Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0A715Au, 5);  /* 0C0A7158 mov.l @(disp,pc),Rn */
	IF(0x0C0A715Au); r7 = MACL;  /* 0C0A715A sts macl,Rn */
	r7 += r0;  /* 0C0A715C add Rm,Rn */
	r2 = R32(r7 + 0x8u); UPD(0x0C0A7160u, 3);  /* 0C0A715E mov.l @(disp,Rm),Rn */
	r7 = (r2 >> 16) | (r2 << 16);  /* 0C0A7160 swap.w Rm,Rn */
	r2 = (u32)(s32)(s16)r7;  /* 0C0A7162 exts.w Rm,Rn */
	r3 -= r2;  /* 0C0A7164 sub Rm,Rn */
	r3 = (u32)(s32)(s16)r3;  /* 0C0A7166 exts.w Rm,Rn */
	r7 = R32(r6 + 0x24u); UPD(0x0C0A716Au, 5);  /* 0C0A7168 mov.l @(disp,Rm),Rn */
L_0C0A716A: BLKS(0x0C0A716Au);
	IF(0x0C0A716Au); r3 <<= 16;  /* 0C0A716A shll16 Rn */
	r7 -= r3;  /* 0C0A716C sub Rm,Rn */
	IF(0x0C0A716Eu); T = (s32)r7 >= 0;  /* 0C0A716E cmp/pz Rn */
	if (!T) { UPD(0x0C0A71F0u, 6); goto L_0C0A71F0; }  /* 0C0A7170 bf */
L_0C0A7172: BLKS(0x0C0A7172u);
	r2 = R32(r6 + 0x2Cu); UPD(0x0C0A7174u, 1);  /* 0C0A7172 mov.l @(disp,Rm),Rn */
	IF(0x0C0A7174u); T = (s32)r2 >= 0;  /* 0C0A7174 cmp/pz Rn */
	if (!T) { UPD(0x0C0A71E0u, 4); goto L_0C0A71E0; }  /* 0C0A7176 bf */
L_0C0A7178: BLKS(0x0C0A7178u);
	r3 = 0x4Cu;  /* 0C0A7178 mov #imm,Rn */
	IF(0x0C0A717Au); MACL = r4 * r3;  /* 0C0A717A mul.l Rm,Rn */
	IF(0x0C0A717Cu); r4 = MACL;  /* 0C0A717C sts macl,Rn */
	r0 += r4;  /* 0C0A717E add Rm,Rn */
	r1 = R32(r0 + 0x10u); UPD(0x0C0A7182u, 6);  /* 0C0A7180 mov.l @(disp,Rm),Rn */
	IF(0x0C0A7182u); T = (s32)r1 >= 0;  /* 0C0A7182 cmp/pz Rn */
	if (!T) { UPD(0x0C0A71D0u, 4); goto L_0C0A71D0; }  /* 0C0A7184 bf */
L_0C0A7186: BLKS(0x0C0A7186u);
	r3 = 0x20000u; UPD(0x0C0A7188u, 1);  /* 0C0A7186 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C0A7188 add Rm,Rn */
	r2 += r3;  /* 0C0A718A add Rm,Rn */
	T = (s32)r7 >= (s32)r2;  /* 0C0A718C cmp/ge Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A71AAu, 6); goto L_0C0A71AA; } goto L_0C0A7192; }  /* 0C0A718E bf/s */
L_0C0A7192: BLKS(0x0C0A7192u);
	r2 = R32(r6 + 0x28u); UPD(0x0C0A7194u, 2);  /* 0C0A7192 mov.l @(disp,Rm),Rn */
	IF(0x0C0A7194u); r5 <<= 16;  /* 0C0A7194 shll16 Rn */
	r2 -= r5;  /* 0C0A7196 sub Rm,Rn */
	IF(0x0C0A7198u); T = (s32)r2 >= 0;  /* 0C0A7198 cmp/pz Rn */
	if (!T) { UPD(0x0C0A71C0u, 6); goto L_0C0A71C0; }  /* 0C0A719A bf */
L_0C0A719C: BLKS(0x0C0A719Cu);
	r1 = R32(r6 + 0x30u); UPD(0x0C0A719Eu, 1);  /* 0C0A719C mov.l @(disp,Rm),Rn */
	IF(0x0C0A719Eu); T = (s32)r1 >= 0;  /* 0C0A719E cmp/pz Rn */
	if (!T) { UPD(0x0C0A71B0u, 4); goto L_0C0A71B0; }  /* 0C0A71A0 bf */
L_0C0A71A2: BLKS(0x0C0A71A2u);
	r1 += r3;  /* 0C0A71A2 add Rm,Rn */
	T = (s32)r2 >= (s32)r1;  /* 0C0A71A4 cmp/ge Rm,Rn */
	IF(0x0C0A71A6u); r0 = T;  /* 0C0A71A6 movt Rn */
	r0 ^= 0x1u;  /* 0C0A71A8 xor #imm,r0 */
	UPD(0x0C0A71AAu, 4);
L_0C0A71AA: BLKS(0x0C0A71AAu);
	r15 = r14;  /* 0C0A71AA mov Rm,Rn */
	IF(0x0C0A71ACu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A71AC rts */
L_0C0A71B0: BLKS(0x0C0A71B0u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0A71A2u, 3); goto L_0C0A71A2; }  /* 0C0A71B0 bra */
L_0C0A71C0: BLKS(0x0C0A71C0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A719Cu, 3); goto L_0C0A719C; }  /* 0C0A71C0 bra */
L_0C0A71D0: BLKS(0x0C0A71D0u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0A7186u, 3); goto L_0C0A7186; }  /* 0C0A71D0 bra */
L_0C0A71E0: BLKS(0x0C0A71E0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A7178u, 3); goto L_0C0A7178; }  /* 0C0A71E0 bra */
L_0C0A71F0: BLKS(0x0C0A71F0u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0A7172u, 3); goto L_0C0A7172; }  /* 0C0A71F0 bra */
L_0C0A7200: BLKS(0x0C0A7200u);
	r0 = 0xC26CAE0u; UPD(0x0C0A7202u, 1);  /* 0C0A7200 mov.l @(disp,pc),Rn */
	{ r7 = R32(r6 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A716Au, 3); goto L_0C0A716A; }  /* 0C0A7202 bra */
}

void f_0C0A7220(sh3_t *c)
{
	LOCALS;
L_0C0A7220: BLKS(0x0C0A7220u);
	r7 = 0xB4u; UPD(0x0C0A7222u, 1);  /* 0C0A7220 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A7222 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7226u, 2);  /* 0C0A7224 mov.l Rm,@-Rn */
	IF(0x0C0A7226u); MACL = r1 * r7;  /* 0C0A7226 mul.l Rm,Rn */
	r4 = 0xC286734u; UPD(0x0C0A722Au, 3);  /* 0C0A7228 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A722A mov Rm,Rn */
	r5 = R32(r4); UPD(0x0C0A722Eu, 2);  /* 0C0A722C mov.l @Rm,Rn */
	IF(0x0C0A722Eu); r2 = MACL;  /* 0C0A722E sts macl,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A7232u, 2);  /* 0C0A7230 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r6 = v_; } UPD(0x0C0A7234u, 1);  /* 0C0A7232 mov.w @Rm+,Rn */
	r2 += r0;  /* 0C0A7234 add Rm,Rn */
	r0 = 0x94u; UPD(0x0C0A7238u, 2);  /* 0C0A7236 mov.w @(disp,pc),Rn */
	IF(0x0C0A7238u); r6 <<= 8;  /* 0C0A7238 shll8 Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r3 = v_; } UPD(0x0C0A723Cu, 2);  /* 0C0A723A mov.w @Rm+,Rn */
	IF(0x0C0A723Cu); W32(r0 + r2, r6); UPD(0x0C0A723Eu, 1);  /* 0C0A723C mov.l Rm,@(r0,Rn) */
	IF(0x0C0A723Eu); r3 <<= 8;  /* 0C0A723E shll8 Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0A7240 add #imm,Rn */
	IF(0x0C0A7242u); W32(r0 + r2, r3); UPD(0x0C0A7244u, 3);  /* 0C0A7242 mov.l Rm,@(r0,Rn) */
	W32(r4, r5); UPD(0x0C0A7246u, 1);  /* 0C0A7244 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0A7246 mov #imm,Rn */
	r15 = r14;  /* 0C0A7248 mov Rm,Rn */
	IF(0x0C0A724Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A724A rts */
}

void f_0C0A7260(sh3_t *c)
{
	LOCALS;
L_0C0A7260: BLKS(0x0C0A7260u);
	r2 = 0xB4u; UPD(0x0C0A7262u, 1);  /* 0C0A7260 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C0A7262 exts.w Rm,Rn */
	IF(0x0C0A7264u); MACL = r5 * r2;  /* 0C0A7264 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0A7268u, 4);  /* 0C0A7266 mov.l @(disp,pc),Rn */
	IF(0x0C0A7268u); r3 = MACL;  /* 0C0A7268 sts macl,Rn */
	r3 += r0;  /* 0C0A726A add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A726Eu, 3);  /* 0C0A726C mov.l Rm,@-Rn */
	r0 = 0x8Cu; UPD(0x0C0A7270u, 1);  /* 0C0A726E mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0A7270 mov Rm,Rn */
	IF(0x0C0A7272u); r1 = R32(r0 + r3); UPD(0x0C0A7274u, 2);  /* 0C0A7272 mov.l @(r0,Rm),Rn */
	r0 += 0x8u;  /* 0C0A7274 add #imm,Rn */
	IF(0x0C0A7276u); r4 = R32(r0 + r3); UPD(0x0C0A7278u, 2);  /* 0C0A7276 mov.l @(r0,Rm),Rn */
	T = r1 == r4;  /* 0C0A7278 cmp/eq Rm,Rn */
	IF(0x0C0A727Au); r0 = T;  /* 0C0A727A movt Rn */
	r15 = r14;  /* 0C0A727C mov Rm,Rn */
	IF(0x0C0A727Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C0A727E rts */
}

void f_0C0A7290(sh3_t *c)
{
	LOCALS;
L_0C0A7290: BLKS(0x0C0A7290u);
	r0 = 0xB4u; UPD(0x0C0A7292u, 1);  /* 0C0A7290 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A7292 exts.w Rm,Rn */
	IF(0x0C0A7294u); MACL = r1 * r0;  /* 0C0A7294 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0A7298u, 4);  /* 0C0A7296 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A729Au, 1);  /* 0C0A7298 mov.l Rm,@-Rn */
	IF(0x0C0A729Au); r0 = MACL;  /* 0C0A729A sts macl,Rn */
	r2 = 0x86u; UPD(0x0C0A729Eu, 2);  /* 0C0A729C mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C0A729E add Rm,Rn */
	IF(0x0C0A72A0u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A72A2u, 2);  /* 0C0A72A0 mov.w @(r0,Rm),Rn */
	r14 = r15;  /* 0C0A72A2 mov Rm,Rn */
	r2 += 0x4u;  /* 0C0A72A4 add #imm,Rn */
	IF(0x0C0A72A6u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A72A8u, 3);  /* 0C0A72A6 mov.w @(r0,Rm),Rn */
	T = r4 == r3;  /* 0C0A72A8 cmp/eq Rm,Rn */
	IF(0x0C0A72AAu); r0 = T;  /* 0C0A72AA movt Rn */
	r15 = r14;  /* 0C0A72AC mov Rm,Rn */
	IF(0x0C0A72AEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C0A72AE rts */
}

void f_0C0A72C0(sh3_t *c)
{
	LOCALS;
L_0C0A72C0: BLKS(0x0C0A72C0u);
	r6 = 0xB4u; UPD(0x0C0A72C2u, 1);  /* 0C0A72C0 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r4;  /* 0C0A72C2 exts.w Rm,Rn */
	IF(0x0C0A72C4u); MACL = r7 * r6;  /* 0C0A72C4 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0A72C8u, 4);  /* 0C0A72C6 mov.l @(disp,pc),Rn */
	IF(0x0C0A72C8u); r5 = MACL;  /* 0C0A72C8 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C0A72CCu, 2);  /* 0C0A72CA mov.w @(disp,pc),Rn */
	r5 += r2;  /* 0C0A72CC add Rm,Rn */
	r5 += r0;  /* 0C0A72CE add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A72D2u, 3);  /* 0C0A72D0 mov.l Rm,@-Rn */
	r5 += 0x2u;  /* 0C0A72D2 add #imm,Rn */
	r0 = 0xC286734u; UPD(0x0C0A72D6u, 2);  /* 0C0A72D4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A72D6 mov Rm,Rn */
	r4 = R32(r0); UPD(0x0C0A72DAu, 2);  /* 0C0A72D8 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r3 = v_; } UPD(0x0C0A72DCu, 1);  /* 0C0A72DA mov.w @Rm+,Rn */
	W16(r5, r3); UPD(0x0C0A72DEu, 1);  /* 0C0A72DC mov.w Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r1 = v_; } UPD(0x0C0A72E0u, 1);  /* 0C0A72DE mov.w @Rm+,Rn */
	W32(r0, r4); UPD(0x0C0A72E2u, 1);  /* 0C0A72E0 mov.l Rm,@Rn */
	{ u32 v_ = r1; r5 -= 2; W16(r5, v_); } UPD(0x0C0A72E4u, 1);  /* 0C0A72E2 mov.w Rm,@-Rn */
	r0 = 0x1u;  /* 0C0A72E4 mov #imm,Rn */
	r15 = r14;  /* 0C0A72E6 mov Rm,Rn */
	IF(0x0C0A72E8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A72E8 rts */
}

void f_0C0A7300(sh3_t *c)
{
	LOCALS;
L_0C0A7300: BLKS(0x0C0A7300u);
	r0 = 0xB4u; UPD(0x0C0A7302u, 1);  /* 0C0A7300 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0A7302 exts.w Rm,Rn */
	IF(0x0C0A7304u); MACL = r1 * r0;  /* 0C0A7304 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0A7308u, 4);  /* 0C0A7306 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0A7308 mov #imm,Rn */
	IF(0x0C0A730Au); r0 = MACL;  /* 0C0A730A sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A730Eu, 3);  /* 0C0A730C mov.l Rm,@-Rn */
	IF(0x0C0A730Eu); W32(r0 + r3, r2); UPD(0x0C0A7310u, 1);  /* 0C0A730E mov.l Rm,@(r0,Rn) */
	r14 = r15;  /* 0C0A7310 mov Rm,Rn */
	r0 = 0x0u;  /* 0C0A7312 mov #imm,Rn */
	r15 = r14;  /* 0C0A7314 mov Rm,Rn */
	IF(0x0C0A7316u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C0A7316 rts */
}

void f_0C0A7320(sh3_t *c)
{
	LOCALS;
L_0C0A7320: BLKS(0x0C0A7320u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7322u, 1);  /* 0C0A7320 mov.l Rm,@-Rn */
	r0 = 0xC392AFEu; UPD(0x0C0A7324u, 1);  /* 0C0A7322 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A7324 mov Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0A7328u, 2);  /* 0C0A7326 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C0A7328 add #imm,Rn */
	W8(r0, r2); UPD(0x0C0A732Cu, 2);  /* 0C0A732A mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C0A732C mov #imm,Rn */
	r15 = r14;  /* 0C0A732E mov Rm,Rn */
	IF(0x0C0A7330u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A7330 rts */
}

void f_0C0A7340(sh3_t *c)
{
	LOCALS;
L_0C0A7340: BLKS(0x0C0A7340u);
	r0 = 0xB4u; UPD(0x0C0A7342u, 1);  /* 0C0A7340 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C0A7342 exts.w Rm,Rn */
	IF(0x0C0A7344u); MACL = r5 * r0;  /* 0C0A7344 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0A7348u, 4);  /* 0C0A7346 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A734Au, 1);  /* 0C0A7348 mov.l Rm,@-Rn */
	IF(0x0C0A734Au); r0 = MACL;  /* 0C0A734A sts macl,Rn */
	r0 += r2;  /* 0C0A734C add Rm,Rn */
	r3 = R32(r0); UPD(0x0C0A7350u, 3);  /* 0C0A734E mov.l @Rm,Rn */
	r14 = r15;  /* 0C0A7350 mov Rm,Rn */
	r1 = 0x100u; UPD(0x0C0A7354u, 2);  /* 0C0A7352 mov.w @(disp,pc),Rn */
	r3 |= r1;  /* 0C0A7354 or Rm,Rn */
	W32(r0, r3); UPD(0x0C0A7358u, 2);  /* 0C0A7356 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0A7358 mov #imm,Rn */
	r15 = r14;  /* 0C0A735A mov Rm,Rn */
	IF(0x0C0A735Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A735C rts */
}

void f_0C0A7370(sh3_t *c)
{
	LOCALS;
L_0C0A7370: BLKS(0x0C0A7370u);
	r0 = 0xB4u; UPD(0x0C0A7372u, 1);  /* 0C0A7370 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C0A7372 exts.w Rm,Rn */
	IF(0x0C0A7374u); MACL = r5 * r0;  /* 0C0A7374 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0A7378u, 4);  /* 0C0A7376 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A737Au, 1);  /* 0C0A7378 mov.l Rm,@-Rn */
	IF(0x0C0A737Au); r0 = MACL;  /* 0C0A737A sts macl,Rn */
	r0 += r2;  /* 0C0A737C add Rm,Rn */
	r3 = R32(r0); UPD(0x0C0A7380u, 3);  /* 0C0A737E mov.l @Rm,Rn */
	r14 = r15;  /* 0C0A7380 mov Rm,Rn */
	r1 = 0xFFFFFEFFu; UPD(0x0C0A7384u, 2);  /* 0C0A7382 mov.w @(disp,pc),Rn */
	r3 &= r1;  /* 0C0A7384 and Rm,Rn */
	W32(r0, r3); UPD(0x0C0A7388u, 2);  /* 0C0A7386 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0A7388 mov #imm,Rn */
	r15 = r14;  /* 0C0A738A mov Rm,Rn */
	IF(0x0C0A738Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A738C rts */
}

void f_0C0A73A0(sh3_t *c)
{
	LOCALS;
L_0C0A73A0: BLKS(0x0C0A73A0u);
	r2 = (u32)(s32)(s16)r4;  /* 0C0A73A0 exts.w Rm,Rn */
	r0 = 0xB4u; UPD(0x0C0A73A4u, 2);  /* 0C0A73A2 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A73A6u, 1);  /* 0C0A73A4 mov.l Rm,@-Rn */
	IF(0x0C0A73A6u); MACL = r2 * r0;  /* 0C0A73A6 mul.l Rm,Rn */
	r4 = 0xC286734u; UPD(0x0C0A73AAu, 3);  /* 0C0A73A8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A73AA mov Rm,Rn */
	r3 = R32(r4); UPD(0x0C0A73AEu, 2);  /* 0C0A73AC mov.l @Rm,Rn */
	IF(0x0C0A73AEu); r1 = MACL;  /* 0C0A73AE sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r5 = v_; } UPD(0x0C0A73B2u, 2);  /* 0C0A73B0 mov.w @Rm+,Rn */
	r0 = 0xC26CD94u; UPD(0x0C0A73B4u, 1);  /* 0C0A73B2 mov.l @(disp,pc),Rn */
	IF(0x0C0A73B4u); W16(r0 + r1, r5); UPD(0x0C0A73B6u, 1);  /* 0C0A73B4 mov.w Rm,@(r0,Rn) */
	W32(r4, r3); UPD(0x0C0A73B8u, 1);  /* 0C0A73B6 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0A73B8 mov #imm,Rn */
	r15 = r14;  /* 0C0A73BA mov Rm,Rn */
	IF(0x0C0A73BCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A73BC rts */
}

void f_0C0A73D0(sh3_t *c)
{
	LOCALS;
L_0C0A73D0: BLKS(0x0C0A73D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A73D2u, 1);  /* 0C0A73D0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A73D2 exts.w Rm,Rn */
	r0 = 0xC0612C0u; UPD(0x0C0A73D6u, 2);  /* 0C0A73D4 mov.l @(disp,pc),Rn */
	IF(0x0C0A73D6u); r15 -= 4; W32(r15, PR); UPD(0x0C0A73D8u, 1);  /* 0C0A73D6 sts.l pr,@-Rn */
	IF(0x0C0A73D8u); { u32 t_ = r0; PR = 0x0C0A73DCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0612C0, 0x0C0612C0u, 0x0C0A73DCu); }  /* 0C0A73D8 jsr @Rn */
L_0C0A73DC: BLKS(0x0C0A73DCu);
	r0 = (u32)(s32)(s16)r0;  /* 0C0A73DC exts.w Rm,Rn */
	r15 = r14;  /* 0C0A73DE mov Rm,Rn */
	IF(0x0C0A73E0u); PR = R32(r15); r15 += 4; UPD(0x0C0A73E2u, 3);  /* 0C0A73E0 lds.l @Rn+,pr */
	IF(0x0C0A73E2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A73E2 rts */
}

void f_0C0A73F0(sh3_t *c)
{
	LOCALS;
L_0C0A73F0: BLKS(0x0C0A73F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A73F2u, 1);  /* 0C0A73F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A73F4u, 1);  /* 0C0A73F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A73F6u, 1);  /* 0C0A73F4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A73F8u, 1);  /* 0C0A73F6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A73FAu, 1);  /* 0C0A73F8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0A73FA exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A73FEu, 2);  /* 0C0A73FC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7400u, 1);  /* 0C0A73FE mov.l Rm,@-Rn */
	r8 = 0xC286734u; UPD(0x0C0A7402u, 1);  /* 0C0A7400 mov.l @(disp,pc),Rn */
	IF(0x0C0A7402u); r15 -= 4; W32(r15, PR); UPD(0x0C0A7404u, 1);  /* 0C0A7402 sts.l pr,@-Rn */
	r13 = R32(r8); UPD(0x0C0A7406u, 1);  /* 0C0A7404 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A7406 add #imm,Rn */
	r9 = 0xC0AFE40u; UPD(0x0C0A740Au, 2);  /* 0C0A7408 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A740A mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r4 = v_; } UPD(0x0C0A740Eu, 2);  /* 0C0A740C mov.w @Rm+,Rn */
	W32(r14, r4); UPD(0x0C0A7410u, 1);  /* 0C0A740E mov.l Rm,@Rn */
	IF(0x0C0A7410u); { u32 t_ = r9; PR = 0x0C0A7414u; W32(r8, r13); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A7414u); }  /* 0C0A7410 jsr @Rn */
L_0C0A7414: BLKS(0x0C0A7414u);
	r2 = R32(r8); UPD(0x0C0A7416u, 1);  /* 0C0A7414 mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0A7416 exts.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r12 = v_; } UPD(0x0C0A741Au, 2);  /* 0C0A7418 mov.w @Rm+,Rn */
	IF(0x0C0A741Au); { u32 t_ = r9; PR = 0x0C0A741Eu; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A741Eu); }  /* 0C0A741A jsr @Rn */
L_0C0A741E: BLKS(0x0C0A741Eu);
	IF(0x0C0A741Eu); MACL = r12 * r0;  /* 0C0A741E mul.l Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0A7422u, 3);  /* 0C0A7420 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0A7422 mov Rm,Rn */
	IF(0x0C0A7424u); r12 = MACL;  /* 0C0A7424 sts macl,Rn */
	IF(0x0C0A7426u); MACL = r11 * r9;  /* 0C0A7426 mul.l Rm,Rn */
	r7 = R32(r8); UPD(0x0C0A742Au, 5);  /* 0C0A7428 mov.l @Rm,Rn */
	r12 += r12;  /* 0C0A742A add Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C0A742Eu, 2);  /* 0C0A742C mov.l @(disp,pc),Rn */
	IF(0x0C0A742Eu); r9 = MACL;  /* 0C0A742E sts macl,Rn */
	r9 += r11;  /* 0C0A7430 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0A7434u, 3);  /* 0C0A7432 mov.w @Rm+,Rn */
	r5 = r12;  /* 0C0A7434 mov Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C0A7438u, 2);  /* 0C0A7436 mov.l @(disp,pc),Rn */
	IF(0x0C0A7438u); r0 <<= 16;  /* 0C0A7438 shll16 Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C0A743Cu, 2);  /* 0C0A743A mov.l @(disp,Rm),Rn */
	W32(r8, r7); UPD(0x0C0A743Eu, 1);  /* 0C0A743C mov.l Rm,@Rn */
	IF(0x0C0A743Eu); { u32 t_ = r10; PR = 0x0C0A7442u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A7442u); }  /* 0C0A743E jsr @Rn */
L_0C0A7442: BLKS(0x0C0A7442u);
	r6 = R32(r8); UPD(0x0C0A7444u, 1);  /* 0C0A7442 mov.l @Rm,Rn */
	r11 += r0;  /* 0C0A7444 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r1 = v_; } UPD(0x0C0A7448u, 2);  /* 0C0A7446 mov.w @Rm+,Rn */
	r4 = r13;  /* 0C0A7448 mov Rm,Rn */
	W32(r8, r6); UPD(0x0C0A744Cu, 2);  /* 0C0A744A mov.l Rm,@Rn */
	IF(0x0C0A744Cu); r1 <<= 16;  /* 0C0A744C shll16 Rn */
	r8 = 0xC058030u; UPD(0x0C0A7450u, 2);  /* 0C0A744E mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0A7450 mov Rm,Rn */
	r10 = R32(r9 + 0x28u); UPD(0x0C0A7454u, 2);  /* 0C0A7452 mov.l @(disp,Rm),Rn */
	IF(0x0C0A7454u); { u32 t_ = r8; PR = 0x0C0A7458u; r10 += r1; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A7458u); }  /* 0C0A7454 jsr @Rn */
L_0C0A7458: BLKS(0x0C0A7458u);
	r10 += r0;  /* 0C0A7458 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A745Cu, 2);  /* 0C0A745A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A745C add #imm,Rn */
	IF(0x0C0A745Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A7460u, 2);  /* 0C0A745E mov.b @(r0,Rm),Rn */
	r6 = r11;  /* 0C0A7460 mov Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0A7462 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A7466u, 3);  /* 0C0A7464 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0A7466 mov Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0A746Au, 2);  /* 0C0A7468 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C0A746A mov Rm,Rn */
	IF(0x0C0A746Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A746Eu, 2);  /* 0C0A746C mov.b @(r0,Rm),Rn */
	r8 = 0xC0AB240u; UPD(0x0C0A7470u, 1);  /* 0C0A746E mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0A7470 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A7474u, 2);  /* 0C0A7472 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14); UPD(0x0C0A7476u, 1);  /* 0C0A7474 mov.l @Rm,Rn */
	IF(0x0C0A7476u); { u32 t_ = r8; PR = 0x0C0A747Au; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C0A747Au); }  /* 0C0A7476 jsr @Rn */
L_0C0A747A: BLKS(0x0C0A747Au);
	r0 = 0x1u;  /* 0C0A747A mov #imm,Rn */
	r14 += 0x4u;  /* 0C0A747C add #imm,Rn */
	r15 = r14;  /* 0C0A747E mov Rm,Rn */
	IF(0x0C0A7480u); PR = R32(r15); r15 += 4; UPD(0x0C0A7482u, 4);  /* 0C0A7480 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7484u, 1);  /* 0C0A7482 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A7486u, 1);  /* 0C0A7484 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A7488u, 1);  /* 0C0A7486 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A748Au, 1);  /* 0C0A7488 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A748Cu, 1);  /* 0C0A748A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A748Eu, 1);  /* 0C0A748C mov.l @Rm+,Rn */
	IF(0x0C0A748Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A748E rts */
}

void f_0C0A74B0(sh3_t *c)
{
	LOCALS;
L_0C0A74B0: BLKS(0x0C0A74B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A74B2u, 1);  /* 0C0A74B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A74B4u, 1);  /* 0C0A74B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A74B6u, 1);  /* 0C0A74B4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A74B8u, 1);  /* 0C0A74B6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A74BAu, 1);  /* 0C0A74B8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0A74BA exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A74BEu, 2);  /* 0C0A74BC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A74C0u, 1);  /* 0C0A74BE mov.l Rm,@-Rn */
	r8 = 0xC286734u; UPD(0x0C0A74C2u, 1);  /* 0C0A74C0 mov.l @(disp,pc),Rn */
	IF(0x0C0A74C2u); r15 -= 4; W32(r15, PR); UPD(0x0C0A74C4u, 1);  /* 0C0A74C2 sts.l pr,@-Rn */
	r13 = R32(r8); UPD(0x0C0A74C6u, 1);  /* 0C0A74C4 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A74C6 add #imm,Rn */
	r9 = 0xC0AFE40u; UPD(0x0C0A74CAu, 2);  /* 0C0A74C8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A74CA mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r4 = v_; } UPD(0x0C0A74CEu, 2);  /* 0C0A74CC mov.w @Rm+,Rn */
	W32(r14, r4); UPD(0x0C0A74D0u, 1);  /* 0C0A74CE mov.l Rm,@Rn */
	IF(0x0C0A74D0u); { u32 t_ = r9; PR = 0x0C0A74D4u; W32(r8, r13); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A74D4u); }  /* 0C0A74D0 jsr @Rn */
L_0C0A74D4: BLKS(0x0C0A74D4u);
	r2 = R32(r8); UPD(0x0C0A74D6u, 1);  /* 0C0A74D4 mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0A74D6 exts.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r12 = v_; } UPD(0x0C0A74DAu, 2);  /* 0C0A74D8 mov.w @Rm+,Rn */
	IF(0x0C0A74DAu); { u32 t_ = r9; PR = 0x0C0A74DEu; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A74DEu); }  /* 0C0A74DA jsr @Rn */
L_0C0A74DE: BLKS(0x0C0A74DEu);
	IF(0x0C0A74DEu); MACL = r12 * r0;  /* 0C0A74DE mul.l Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0A74E2u, 3);  /* 0C0A74E0 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0A74E2 mov Rm,Rn */
	IF(0x0C0A74E4u); r12 = MACL;  /* 0C0A74E4 sts macl,Rn */
	IF(0x0C0A74E6u); MACL = r11 * r9;  /* 0C0A74E6 mul.l Rm,Rn */
	r7 = R32(r8); UPD(0x0C0A74EAu, 5);  /* 0C0A74E8 mov.l @Rm,Rn */
	r12 += r12;  /* 0C0A74EA add Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C0A74EEu, 2);  /* 0C0A74EC mov.l @(disp,pc),Rn */
	IF(0x0C0A74EEu); r9 = MACL;  /* 0C0A74EE sts macl,Rn */
	r9 += r11;  /* 0C0A74F0 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0A74F4u, 3);  /* 0C0A74F2 mov.w @Rm+,Rn */
	r5 = r12;  /* 0C0A74F4 mov Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C0A74F8u, 2);  /* 0C0A74F6 mov.l @(disp,pc),Rn */
	IF(0x0C0A74F8u); r0 <<= 16;  /* 0C0A74F8 shll16 Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C0A74FCu, 2);  /* 0C0A74FA mov.l @(disp,Rm),Rn */
	W32(r8, r7); UPD(0x0C0A74FEu, 1);  /* 0C0A74FC mov.l Rm,@Rn */
	IF(0x0C0A74FEu); { u32 t_ = r10; PR = 0x0C0A7502u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A7502u); }  /* 0C0A74FE jsr @Rn */
L_0C0A7502: BLKS(0x0C0A7502u);
	r6 = R32(r8); UPD(0x0C0A7504u, 1);  /* 0C0A7502 mov.l @Rm,Rn */
	r11 += r0;  /* 0C0A7504 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r1 = v_; } UPD(0x0C0A7508u, 2);  /* 0C0A7506 mov.w @Rm+,Rn */
	r4 = r13;  /* 0C0A7508 mov Rm,Rn */
	W32(r8, r6); UPD(0x0C0A750Cu, 2);  /* 0C0A750A mov.l Rm,@Rn */
	IF(0x0C0A750Cu); r1 <<= 16;  /* 0C0A750C shll16 Rn */
	r8 = 0xC058030u; UPD(0x0C0A7510u, 2);  /* 0C0A750E mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0A7510 mov Rm,Rn */
	r10 = R32(r9 + 0x28u); UPD(0x0C0A7514u, 2);  /* 0C0A7512 mov.l @(disp,Rm),Rn */
	IF(0x0C0A7514u); { u32 t_ = r8; PR = 0x0C0A7518u; r10 += r1; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A7518u); }  /* 0C0A7514 jsr @Rn */
L_0C0A7518: BLKS(0x0C0A7518u);
	r10 += r0;  /* 0C0A7518 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A751Cu, 2);  /* 0C0A751A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A751C add #imm,Rn */
	IF(0x0C0A751Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A7520u, 2);  /* 0C0A751E mov.b @(r0,Rm),Rn */
	r6 = r11;  /* 0C0A7520 mov Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0A7522 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A7526u, 3);  /* 0C0A7524 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0A7526 mov Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0A752Au, 2);  /* 0C0A7528 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C0A752A mov Rm,Rn */
	IF(0x0C0A752Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A752Eu, 2);  /* 0C0A752C mov.b @(r0,Rm),Rn */
	r8 = 0xC0AC800u; UPD(0x0C0A7530u, 1);  /* 0C0A752E mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0A7530 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A7534u, 2);  /* 0C0A7532 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14); UPD(0x0C0A7536u, 1);  /* 0C0A7534 mov.l @Rm,Rn */
	IF(0x0C0A7536u); { u32 t_ = r8; PR = 0x0C0A753Au; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C0A753Au); }  /* 0C0A7536 jsr @Rn */
L_0C0A753A: BLKS(0x0C0A753Au);
	r0 = 0x1u;  /* 0C0A753A mov #imm,Rn */
	r14 += 0x4u;  /* 0C0A753C add #imm,Rn */
	r15 = r14;  /* 0C0A753E mov Rm,Rn */
	IF(0x0C0A7540u); PR = R32(r15); r15 += 4; UPD(0x0C0A7542u, 4);  /* 0C0A7540 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7544u, 1);  /* 0C0A7542 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A7546u, 1);  /* 0C0A7544 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A7548u, 1);  /* 0C0A7546 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A754Au, 1);  /* 0C0A7548 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A754Cu, 1);  /* 0C0A754A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A754Eu, 1);  /* 0C0A754C mov.l @Rm+,Rn */
	IF(0x0C0A754Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A754E rts */
}

void f_0C0A7570(sh3_t *c)
{
	LOCALS;
L_0C0A7570: BLKS(0x0C0A7570u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7572u, 1);  /* 0C0A7570 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7574u, 1);  /* 0C0A7572 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7576u, 1);  /* 0C0A7574 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7578u, 1);  /* 0C0A7576 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A757Au, 1);  /* 0C0A7578 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0A757A exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A757Eu, 2);  /* 0C0A757C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7580u, 1);  /* 0C0A757E mov.l Rm,@-Rn */
	r8 = 0xC286734u; UPD(0x0C0A7582u, 1);  /* 0C0A7580 mov.l @(disp,pc),Rn */
	IF(0x0C0A7582u); r15 -= 4; W32(r15, PR); UPD(0x0C0A7584u, 1);  /* 0C0A7582 sts.l pr,@-Rn */
	r13 = R32(r8); UPD(0x0C0A7586u, 1);  /* 0C0A7584 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A7586 add #imm,Rn */
	r9 = 0xC0AFE40u; UPD(0x0C0A758Au, 2);  /* 0C0A7588 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A758A mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r4 = v_; } UPD(0x0C0A758Eu, 2);  /* 0C0A758C mov.w @Rm+,Rn */
	W32(r14, r4); UPD(0x0C0A7590u, 1);  /* 0C0A758E mov.l Rm,@Rn */
	IF(0x0C0A7590u); { u32 t_ = r9; PR = 0x0C0A7594u; W32(r8, r13); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A7594u); }  /* 0C0A7590 jsr @Rn */
L_0C0A7594: BLKS(0x0C0A7594u);
	r2 = R32(r8); UPD(0x0C0A7596u, 1);  /* 0C0A7594 mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0A7596 exts.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r12 = v_; } UPD(0x0C0A759Au, 2);  /* 0C0A7598 mov.w @Rm+,Rn */
	IF(0x0C0A759Au); { u32 t_ = r9; PR = 0x0C0A759Eu; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A759Eu); }  /* 0C0A759A jsr @Rn */
L_0C0A759E: BLKS(0x0C0A759Eu);
	IF(0x0C0A759Eu); MACL = r12 * r0;  /* 0C0A759E mul.l Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0A75A2u, 3);  /* 0C0A75A0 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0A75A2 mov Rm,Rn */
	IF(0x0C0A75A4u); r12 = MACL;  /* 0C0A75A4 sts macl,Rn */
	IF(0x0C0A75A6u); MACL = r11 * r9;  /* 0C0A75A6 mul.l Rm,Rn */
	r7 = R32(r8); UPD(0x0C0A75AAu, 5);  /* 0C0A75A8 mov.l @Rm,Rn */
	r12 += r12;  /* 0C0A75AA add Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C0A75AEu, 2);  /* 0C0A75AC mov.l @(disp,pc),Rn */
	IF(0x0C0A75AEu); r9 = MACL;  /* 0C0A75AE sts macl,Rn */
	r9 += r11;  /* 0C0A75B0 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0A75B4u, 3);  /* 0C0A75B2 mov.w @Rm+,Rn */
	r5 = r12;  /* 0C0A75B4 mov Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C0A75B8u, 2);  /* 0C0A75B6 mov.l @(disp,pc),Rn */
	IF(0x0C0A75B8u); r0 <<= 16;  /* 0C0A75B8 shll16 Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C0A75BCu, 2);  /* 0C0A75BA mov.l @(disp,Rm),Rn */
	W32(r8, r7); UPD(0x0C0A75BEu, 1);  /* 0C0A75BC mov.l Rm,@Rn */
	IF(0x0C0A75BEu); { u32 t_ = r10; PR = 0x0C0A75C2u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A75C2u); }  /* 0C0A75BE jsr @Rn */
L_0C0A75C2: BLKS(0x0C0A75C2u);
	r6 = R32(r8); UPD(0x0C0A75C4u, 1);  /* 0C0A75C2 mov.l @Rm,Rn */
	r11 += r0;  /* 0C0A75C4 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r1 = v_; } UPD(0x0C0A75C8u, 2);  /* 0C0A75C6 mov.w @Rm+,Rn */
	r4 = r13;  /* 0C0A75C8 mov Rm,Rn */
	W32(r8, r6); UPD(0x0C0A75CCu, 2);  /* 0C0A75CA mov.l Rm,@Rn */
	IF(0x0C0A75CCu); r1 <<= 16;  /* 0C0A75CC shll16 Rn */
	r8 = 0xC058030u; UPD(0x0C0A75D0u, 2);  /* 0C0A75CE mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0A75D0 mov Rm,Rn */
	r10 = R32(r9 + 0x28u); UPD(0x0C0A75D4u, 2);  /* 0C0A75D2 mov.l @(disp,Rm),Rn */
	IF(0x0C0A75D4u); { u32 t_ = r8; PR = 0x0C0A75D8u; r10 += r1; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A75D8u); }  /* 0C0A75D4 jsr @Rn */
L_0C0A75D8: BLKS(0x0C0A75D8u);
	r10 += r0;  /* 0C0A75D8 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A75DCu, 2);  /* 0C0A75DA mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A75DC add #imm,Rn */
	IF(0x0C0A75DEu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A75E0u, 2);  /* 0C0A75DE mov.b @(r0,Rm),Rn */
	r6 = r11;  /* 0C0A75E0 mov Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0A75E2 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A75E6u, 3);  /* 0C0A75E4 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0A75E6 mov Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0A75EAu, 2);  /* 0C0A75E8 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C0A75EA mov Rm,Rn */
	IF(0x0C0A75ECu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A75EEu, 2);  /* 0C0A75EC mov.b @(r0,Rm),Rn */
	r8 = 0xC0AD970u; UPD(0x0C0A75F0u, 1);  /* 0C0A75EE mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0A75F0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A75F4u, 2);  /* 0C0A75F2 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14); UPD(0x0C0A75F6u, 1);  /* 0C0A75F4 mov.l @Rm,Rn */
	IF(0x0C0A75F6u); { u32 t_ = r8; PR = 0x0C0A75FAu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AD970, 0x0C0AD970u, 0x0C0A75FAu); }  /* 0C0A75F6 jsr @Rn */
L_0C0A75FA: BLKS(0x0C0A75FAu);
	r0 = 0x1u;  /* 0C0A75FA mov #imm,Rn */
	r14 += 0x4u;  /* 0C0A75FC add #imm,Rn */
	r15 = r14;  /* 0C0A75FE mov Rm,Rn */
	IF(0x0C0A7600u); PR = R32(r15); r15 += 4; UPD(0x0C0A7602u, 4);  /* 0C0A7600 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7604u, 1);  /* 0C0A7602 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A7606u, 1);  /* 0C0A7604 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A7608u, 1);  /* 0C0A7606 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A760Au, 1);  /* 0C0A7608 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A760Cu, 1);  /* 0C0A760A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A760Eu, 1);  /* 0C0A760C mov.l @Rm+,Rn */
	IF(0x0C0A760Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A760E rts */
}

void f_0C0A7630(sh3_t *c)
{
	LOCALS;
L_0C0A7630: BLKS(0x0C0A7630u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7632u, 1);  /* 0C0A7630 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7634u, 1);  /* 0C0A7632 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7636u, 1);  /* 0C0A7634 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7638u, 1);  /* 0C0A7636 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A763Au, 1);  /* 0C0A7638 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0A763A exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A763Eu, 2);  /* 0C0A763C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7640u, 1);  /* 0C0A763E mov.l Rm,@-Rn */
	r8 = 0xC286734u; UPD(0x0C0A7642u, 1);  /* 0C0A7640 mov.l @(disp,pc),Rn */
	IF(0x0C0A7642u); r15 -= 4; W32(r15, PR); UPD(0x0C0A7644u, 1);  /* 0C0A7642 sts.l pr,@-Rn */
	r13 = R32(r8); UPD(0x0C0A7646u, 1);  /* 0C0A7644 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A7646 add #imm,Rn */
	r9 = 0xC0AFE40u; UPD(0x0C0A764Au, 2);  /* 0C0A7648 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A764A mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r4 = v_; } UPD(0x0C0A764Eu, 2);  /* 0C0A764C mov.w @Rm+,Rn */
	W32(r14, r4); UPD(0x0C0A7650u, 1);  /* 0C0A764E mov.l Rm,@Rn */
	IF(0x0C0A7650u); { u32 t_ = r9; PR = 0x0C0A7654u; W32(r8, r13); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A7654u); }  /* 0C0A7650 jsr @Rn */
L_0C0A7654: BLKS(0x0C0A7654u);
	r2 = R32(r8); UPD(0x0C0A7656u, 1);  /* 0C0A7654 mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0A7656 exts.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r12 = v_; } UPD(0x0C0A765Au, 2);  /* 0C0A7658 mov.w @Rm+,Rn */
	IF(0x0C0A765Au); { u32 t_ = r9; PR = 0x0C0A765Eu; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0A765Eu); }  /* 0C0A765A jsr @Rn */
L_0C0A765E: BLKS(0x0C0A765Eu);
	IF(0x0C0A765Eu); MACL = r12 * r0;  /* 0C0A765E mul.l Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0A7662u, 3);  /* 0C0A7660 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0A7662 mov Rm,Rn */
	IF(0x0C0A7664u); r12 = MACL;  /* 0C0A7664 sts macl,Rn */
	IF(0x0C0A7666u); MACL = r11 * r9;  /* 0C0A7666 mul.l Rm,Rn */
	r7 = R32(r8); UPD(0x0C0A766Au, 5);  /* 0C0A7668 mov.l @Rm,Rn */
	r12 += r12;  /* 0C0A766A add Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C0A766Eu, 2);  /* 0C0A766C mov.l @(disp,pc),Rn */
	IF(0x0C0A766Eu); r9 = MACL;  /* 0C0A766E sts macl,Rn */
	r9 += r11;  /* 0C0A7670 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0A7674u, 3);  /* 0C0A7672 mov.w @Rm+,Rn */
	r5 = r12;  /* 0C0A7674 mov Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C0A7678u, 2);  /* 0C0A7676 mov.l @(disp,pc),Rn */
	IF(0x0C0A7678u); r0 <<= 16;  /* 0C0A7678 shll16 Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C0A767Cu, 2);  /* 0C0A767A mov.l @(disp,Rm),Rn */
	W32(r8, r7); UPD(0x0C0A767Eu, 1);  /* 0C0A767C mov.l Rm,@Rn */
	IF(0x0C0A767Eu); { u32 t_ = r10; PR = 0x0C0A7682u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A7682u); }  /* 0C0A767E jsr @Rn */
L_0C0A7682: BLKS(0x0C0A7682u);
	r6 = R32(r8); UPD(0x0C0A7684u, 1);  /* 0C0A7682 mov.l @Rm,Rn */
	r11 += r0;  /* 0C0A7684 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r1 = v_; } UPD(0x0C0A7688u, 2);  /* 0C0A7686 mov.w @Rm+,Rn */
	r4 = r13;  /* 0C0A7688 mov Rm,Rn */
	W32(r8, r6); UPD(0x0C0A768Cu, 2);  /* 0C0A768A mov.l Rm,@Rn */
	IF(0x0C0A768Cu); r1 <<= 16;  /* 0C0A768C shll16 Rn */
	r8 = 0xC058030u; UPD(0x0C0A7690u, 2);  /* 0C0A768E mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0A7690 mov Rm,Rn */
	r10 = R32(r9 + 0x28u); UPD(0x0C0A7694u, 2);  /* 0C0A7692 mov.l @(disp,Rm),Rn */
	IF(0x0C0A7694u); { u32 t_ = r8; PR = 0x0C0A7698u; r10 += r1; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A7698u); }  /* 0C0A7694 jsr @Rn */
L_0C0A7698: BLKS(0x0C0A7698u);
	r10 += r0;  /* 0C0A7698 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0A769Cu, 2);  /* 0C0A769A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A769C add #imm,Rn */
	IF(0x0C0A769Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0A76A0u, 2);  /* 0C0A769E mov.b @(r0,Rm),Rn */
	r6 = r11;  /* 0C0A76A0 mov Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0A76A2 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A76A6u, 3);  /* 0C0A76A4 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0A76A6 mov Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0A76AAu, 2);  /* 0C0A76A8 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C0A76AA mov Rm,Rn */
	IF(0x0C0A76ACu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A76AEu, 2);  /* 0C0A76AC mov.b @(r0,Rm),Rn */
	r8 = 0xC0ADB30u; UPD(0x0C0A76B0u, 1);  /* 0C0A76AE mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0A76B0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A76B4u, 2);  /* 0C0A76B2 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14); UPD(0x0C0A76B6u, 1);  /* 0C0A76B4 mov.l @Rm,Rn */
	IF(0x0C0A76B6u); { u32 t_ = r8; PR = 0x0C0A76BAu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ADB30, 0x0C0ADB30u, 0x0C0A76BAu); }  /* 0C0A76B6 jsr @Rn */
L_0C0A76BA: BLKS(0x0C0A76BAu);
	r0 = 0x1u;  /* 0C0A76BA mov #imm,Rn */
	r14 += 0x4u;  /* 0C0A76BC add #imm,Rn */
	r15 = r14;  /* 0C0A76BE mov Rm,Rn */
	IF(0x0C0A76C0u); PR = R32(r15); r15 += 4; UPD(0x0C0A76C2u, 4);  /* 0C0A76C0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A76C4u, 1);  /* 0C0A76C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A76C6u, 1);  /* 0C0A76C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A76C8u, 1);  /* 0C0A76C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A76CAu, 1);  /* 0C0A76C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A76CCu, 1);  /* 0C0A76CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A76CEu, 1);  /* 0C0A76CC mov.l @Rm+,Rn */
	IF(0x0C0A76CEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A76CE rts */
}

void f_0C0A76F0(sh3_t *c)
{
	LOCALS;
L_0C0A76F0: BLKS(0x0C0A76F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A76F2u, 1);  /* 0C0A76F0 mov.l Rm,@-Rn */
	r2 = (u32)(s32)(s16)r4;  /* 0C0A76F2 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A76F6u, 2);  /* 0C0A76F4 mov.l Rm,@-Rn */
	r0 = 0xC286734u; UPD(0x0C0A76F8u, 1);  /* 0C0A76F6 mov.l @(disp,pc),Rn */
	IF(0x0C0A76F8u); r15 -= 4; W32(r15, PR); UPD(0x0C0A76FAu, 1);  /* 0C0A76F8 sts.l pr,@-Rn */
	r3 = 0xB4u; UPD(0x0C0A76FCu, 1);  /* 0C0A76FA mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0A76FC mov Rm,Rn */
	r7 = R32(r0); UPD(0x0C0A7700u, 2);  /* 0C0A76FE mov.l @Rm,Rn */
	IF(0x0C0A7700u); MACL = r2 * r3;  /* 0C0A7700 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r8 = v_; } UPD(0x0C0A7704u, 3);  /* 0C0A7702 mov.w @Rm+,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A7704 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r6 = v_; } UPD(0x0C0A7708u, 2);  /* 0C0A7706 mov.w @Rm+,Rn */
	IF(0x0C0A7708u); r3 = MACL;  /* 0C0A7708 sts macl,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0A770Cu, 2);  /* 0C0A770A mov.l @(disp,pc),Rn */
	IF(0x0C0A770Cu); r6 <<= 16;  /* 0C0A770C shll16 Rn */
	r3 += r5;  /* 0C0A770E add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r4 = v_; } UPD(0x0C0A7712u, 3);  /* 0C0A7710 mov.w @Rm+,Rn */
	r5 = R32(r3 + 0x24u); UPD(0x0C0A7714u, 1);  /* 0C0A7712 mov.l @(disp,Rm),Rn */
	IF(0x0C0A7714u); r4 <<= 16;  /* 0C0A7714 shll16 Rn */
	W32(r0, r7); UPD(0x0C0A7718u, 2);  /* 0C0A7716 mov.l Rm,@Rn */
	r5 += r6;  /* 0C0A7718 add Rm,Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C0A771Cu, 2);  /* 0C0A771A mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C0A771Eu, 1);  /* 0C0A771C mov.w @(disp,pc),Rn */
	r6 += r4;  /* 0C0A771E add Rm,Rn */
	IF(0x0C0A7720u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A7722u, 2);  /* 0C0A7720 mov.b @(r0,Rm),Rn */
	r4 = 0xA9u; UPD(0x0C0A7724u, 1);  /* 0C0A7722 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C0A7724 mov Rm,Rn */
	IF(0x0C0A7726u); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0A7728u, 2);  /* 0C0A7726 mov.b @(r0,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C0A7728 extu.b Rm,Rn */
	r4 = r8;  /* 0C0A772A mov Rm,Rn */
	r8 = 0xC06CE70u; UPD(0x0C0A772Eu, 3);  /* 0C0A772C mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0A772E extu.b Rm,Rn */
	IF(0x0C0A7730u); { u32 t_ = r8; PR = 0x0C0A7734u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C0A7734u); }  /* 0C0A7730 jsr @Rn */
L_0C0A7734: BLKS(0x0C0A7734u);
	r0 = 0x1u;  /* 0C0A7734 mov #imm,Rn */
	r15 = r14;  /* 0C0A7736 mov Rm,Rn */
	IF(0x0C0A7738u); PR = R32(r15); r15 += 4; UPD(0x0C0A773Au, 3);  /* 0C0A7738 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A773Cu, 1);  /* 0C0A773A mov.l @Rm+,Rn */
	IF(0x0C0A773Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A773C rts */
}

void f_0C0A7760(sh3_t *c)
{
	LOCALS;
L_0C0A7760: BLKS(0x0C0A7760u);
	r0 = 0xB4u; UPD(0x0C0A7762u, 1);  /* 0C0A7760 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A7762 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7766u, 2);  /* 0C0A7764 mov.l Rm,@-Rn */
	IF(0x0C0A7766u); MACL = r4 * r0;  /* 0C0A7766 mul.l Rm,Rn */
	r6 = 0xC286734u; UPD(0x0C0A776Au, 3);  /* 0C0A7768 mov.l @(disp,pc),Rn */
	r3 = 0x2Du;  /* 0C0A776A mov #imm,Rn */
	r7 = R32(r6); UPD(0x0C0A776Eu, 2);  /* 0C0A776C mov.l @Rm,Rn */
	IF(0x0C0A776Eu); r0 = MACL;  /* 0C0A776E sts macl,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0A7772u, 2);  /* 0C0A7770 mov.l @(disp,pc),Rn */
	IF(0x0C0A7772u); MACL = r4 * r3;  /* 0C0A7772 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r2 = v_; } UPD(0x0C0A7776u, 3);  /* 0C0A7774 mov.w @Rm+,Rn */
	r0 += r5;  /* 0C0A7776 add Rm,Rn */
	r0 += 0x56u;  /* 0C0A7778 add #imm,Rn */
	W16(r0, r2); UPD(0x0C0A777Cu, 3);  /* 0C0A777A mov.w Rm,@Rn */
	IF(0x0C0A777Cu); r3 = MACL;  /* 0C0A777C sts macl,Rn */
	W32(r6, r7); UPD(0x0C0A7780u, 2);  /* 0C0A777E mov.l Rm,@Rn */
	r0 += 0x2u;  /* 0C0A7780 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0A7784u, 2);  /* 0C0A7782 mov.b @Rm,Rn */
	r14 = r15;  /* 0C0A7784 mov Rm,Rn */
	r6 = r2 & 0xFF;  /* 0C0A7786 extu.b Rm,Rn */
	r3 += r6;  /* 0C0A7788 add Rm,Rn */
	IF(0x0C0A778Au); r3 <<= 2;  /* 0C0A778A shll2 Rn */
	r3 += r5;  /* 0C0A778C add Rm,Rn */
	r2 += 0x1u;  /* 0C0A778E add #imm,Rn */
	r3 += 0x5Cu;  /* 0C0A7790 add #imm,Rn */
	W8(r0, r2); UPD(0x0C0A7794u, 8);  /* 0C0A7792 mov.b Rm,@Rn */
	W32(r3, r7); UPD(0x0C0A7796u, 1);  /* 0C0A7794 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0A7796 mov #imm,Rn */
	r15 = r14;  /* 0C0A7798 mov Rm,Rn */
	IF(0x0C0A779Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0A779A rts */
}

void f_0C0A77B0(sh3_t *c)
{
	LOCALS;
L_0C0A77B0: BLKS(0x0C0A77B0u);
	r0 = 0xB4u; UPD(0x0C0A77B2u, 1);  /* 0C0A77B0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A77B2 exts.w Rm,Rn */
	IF(0x0C0A77B4u); MACL = r4 * r0;  /* 0C0A77B4 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0A77B8u, 4);  /* 0C0A77B6 mov.l @(disp,pc),Rn */
	IF(0x0C0A77B8u); r3 = MACL;  /* 0C0A77B8 sts macl,Rn */
	r3 += r7;  /* 0C0A77BA add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A77BEu, 3);  /* 0C0A77BC mov.l Rm,@-Rn */
	r2 = r3;  /* 0C0A77BE mov Rm,Rn */
	r2 += 0x56u;  /* 0C0A77C0 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C0A77C4u, 3);  /* 0C0A77C2 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0A77C4 mov Rm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0A77C6 add #imm,Rn */
	r0 = r5 & 0xFFFF;  /* 0C0A77C8 extu.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0A77CA tst Rm,Rn */
	{ u32 c_ = !T; W16(r2, r5); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0A77E0u, 7); goto L_0C0A77E0; } UPD(0x0C0A77D0u, 1); goto L_0C0A77D0; }  /* 0C0A77CC bf/s */
L_0C0A77D0: BLKS(0x0C0A77D0u);
	r2 += 0x2u;  /* 0C0A77D0 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A77D4u, 2);  /* 0C0A77D2 mov.b @Rm,Rn */
	r0 = 0x1u;  /* 0C0A77D4 mov #imm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C0A77D6 add #imm,Rn */
	W8(r2, r3); UPD(0x0C0A77DAu, 3);  /* 0C0A77D8 mov.b Rm,@Rn */
L_0C0A77DA: BLKS(0x0C0A77DAu);
	r15 = r14;  /* 0C0A77DA mov Rm,Rn */
	IF(0x0C0A77DCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A77DC rts */
L_0C0A77E0: BLKS(0x0C0A77E0u);
	r5 = 0x2Du;  /* 0C0A77E0 mov #imm,Rn */
	r3 += 0x58u;  /* 0C0A77E2 add #imm,Rn */
	IF(0x0C0A77E4u); MACL = r4 * r5;  /* 0C0A77E4 mul.l Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0A77E8u, 5);  /* 0C0A77E6 mov.b @Rm,Rn */
	r0 = 0x0u;  /* 0C0A77E8 mov #imm,Rn */
	r6 = r1 & 0xFF;  /* 0C0A77EA extu.b Rm,Rn */
	IF(0x0C0A77ECu); r4 = MACL;  /* 0C0A77EC sts macl,Rn */
	r4 += r6;  /* 0C0A77EE add Rm,Rn */
	IF(0x0C0A77F0u); r4 <<= 2;  /* 0C0A77F0 shll2 Rn */
	r4 += r7;  /* 0C0A77F2 add Rm,Rn */
	r4 += 0x58u;  /* 0C0A77F4 add #imm,Rn */
	r2 = R32(r4); UPD(0x0C0A77F8u, 8);  /* 0C0A77F6 mov.l @Rm,Rn */
	r3 += 0xFFFFFFF4u;  /* 0C0A77F8 add #imm,Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C0A77DAu, 4); goto L_0C0A77DA; }  /* 0C0A77FA bra */
}

void f_0C0A7810(sh3_t *c)
{
	LOCALS;
L_0C0A7810: BLKS(0x0C0A7810u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7812u, 1);  /* 0C0A7810 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A7812 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7816u, 2);  /* 0C0A7814 mov.l Rm,@-Rn */
	r3 = 0x54u;  /* 0C0A7816 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A781Au, 2);  /* 0C0A7818 mov.l Rm,@-Rn */
	IF(0x0C0A781Au); MACL = r4 * r3;  /* 0C0A781A mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A781Eu, 3);  /* 0C0A781C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7820u, 1);  /* 0C0A781E mov.l Rm,@-Rn */
	IF(0x0C0A7820u); r2 = MACL;  /* 0C0A7820 sts macl,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7824u, 2);  /* 0C0A7822 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7826u, 1);  /* 0C0A7824 mov.l Rm,@-Rn */
	r0 = 0xC27E0FCu; UPD(0x0C0A7828u, 1);  /* 0C0A7826 mov.l @(disp,pc),Rn */
	IF(0x0C0A7828u); r15 -= 4; W32(r15, PR); UPD(0x0C0A782Au, 1);  /* 0C0A7828 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0A782A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0A782Eu, 2);  /* 0C0A782C mov.l @(disp,Rm),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0A782E add #imm,Rn */
	r0 = 0x9u;  /* 0C0A7830 mov #imm,Rn */
	T = r2 > r0;  /* 0C0A7832 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A787Cu, 6); goto L_0C0A787C; } goto L_0C0A7838; }  /* 0C0A7834 bt/s */
L_0C0A7838: BLKS(0x0C0A7838u);
	r0 = 0xC0A7848u;  /* 0C0A7838 mova @(disp,pc),r0 */
	IF(0x0C0A783Au); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0A783Cu, 3);  /* 0C0A783A mov.b @(r0,Rm),Rn */
	r5 = r5 & 0xFF;  /* 0C0A783C extu.b Rm,Rn */
	IF(0x0C0A783Eu); { u32 tv_ = (r5 + 0x0C0A7842u); u32 t_ = PHYS(tv_); IF(0x0C0A7840u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0A7860u: goto L_0C0A7860; case 0x0C0A78A0u: goto L_0C0A78A0; case 0x0C0A7930u: goto L_0C0A7930; default: JUMPD(tv_); } }  /* 0C0A783E braf Rn */
L_0C0A7860: BLKS(0x0C0A7860u);
	r9 = 0x54u;  /* 0C0A7860 mov #imm,Rn */
	IF(0x0C0A7862u); MACL = r4 * r9;  /* 0C0A7862 mul.l Rm,Rn */
	r8 = 0xC27E0FCu; UPD(0x0C0A7866u, 4);  /* 0C0A7864 mov.l @(disp,pc),Rn */
	IF(0x0C0A7866u); r9 = MACL;  /* 0C0A7866 sts macl,Rn */
	r9 += r8;  /* 0C0A7868 add Rm,Rn */
	r7 = r9;  /* 0C0A786A mov Rm,Rn */
	r7 += 0x50u;  /* 0C0A786C add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0A7870u, 5);  /* 0C0A786E mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0A7870 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C0A7872 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0A7874 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r7, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0A7890u, 6); goto L_0C0A7890; } UPD(0x0C0A787Au, 1); goto L_0C0A787A; }  /* 0C0A7876 bt/s */
L_0C0A787A: BLKS(0x0C0A787Au);
	IF(0x0C0A787Au); ;  /* 0C0A787A nop */
	UPD(0x0C0A787Cu, 1);
L_0C0A787C: BLKS(0x0C0A787Cu);
	r15 = r14;  /* 0C0A787C mov Rm,Rn */
	IF(0x0C0A787Eu); PR = R32(r15); r15 += 4; UPD(0x0C0A7880u, 2);  /* 0C0A787E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7882u, 1);  /* 0C0A7880 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A7884u, 1);  /* 0C0A7882 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A7886u, 1);  /* 0C0A7884 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A7888u, 1);  /* 0C0A7886 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A788Au, 1);  /* 0C0A7888 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A788Cu, 1);  /* 0C0A788A mov.l @Rm+,Rn */
	IF(0x0C0A788Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A788C rts */
L_0C0A7890: BLKS(0x0C0A7890u);
	r11 = 0xC0A7AB0u; UPD(0x0C0A7892u, 1);  /* 0C0A7890 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0A7892 mov #imm,Rn */
	r12 = R32(r9 + 0xCu); UPD(0x0C0A7896u, 2);  /* 0C0A7894 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x10u, r10); UPD(0x0C0A7898u, 1);  /* 0C0A7896 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A7898u); { u32 t_ = r11; PR = 0x0C0A789Cu; W32(r9 + 0x8u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A7AB0, 0x0C0A7AB0u, 0x0C0A789Cu); }  /* 0C0A7898 jsr @Rn */
L_0C0A789C: BLKS(0x0C0A789Cu);
	{ W32(r9 + 0x3Cu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0A787Cu, 3); goto L_0C0A787C; }  /* 0C0A789C bra */
L_0C0A78A0: BLKS(0x0C0A78A0u);
	r3 = 0x54u;  /* 0C0A78A0 mov #imm,Rn */
	IF(0x0C0A78A2u); MACL = r4 * r3;  /* 0C0A78A2 mul.l Rm,Rn */
	r5 = 0xC27E0FCu; UPD(0x0C0A78A6u, 4);  /* 0C0A78A4 mov.l @(disp,pc),Rn */
	IF(0x0C0A78A6u); r3 = MACL;  /* 0C0A78A6 sts macl,Rn */
	r3 += r5;  /* 0C0A78A8 add Rm,Rn */
	r13 = R32(r3 + 0x28u); UPD(0x0C0A78ACu, 3);  /* 0C0A78AA mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0A78AEu, 1);  /* 0C0A78AC mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C0A78B0u, 1);  /* 0C0A78AE mov.l @(disp,Rm),Rn */
	r0 = R32(r3 + 0x34u); UPD(0x0C0A78B2u, 1);  /* 0C0A78B0 mov.l @(disp,Rm),Rn */
	r13 += r2;  /* 0C0A78B2 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0A78B6u, 2);  /* 0C0A78B4 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0A78B6 add Rm,Rn */
	r7 += r13;  /* 0C0A78B8 add Rm,Rn */
	W32(r3 + 0x28u, r13); UPD(0x0C0A78BCu, 3);  /* 0C0A78BA mov.l Rm,@(disp,Rn) */
	IF(0x0C0A78BCu); T = (s32)r7 >= 0;  /* 0C0A78BC cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x2Cu, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A7920u, 4); goto L_0C0A7920; } UPD(0x0C0A78C2u, 1); goto L_0C0A78C2; }  /* 0C0A78BE bf/s */
L_0C0A78C2: BLKS(0x0C0A78C2u);
	r8 = 0xB00000u; UPD(0x0C0A78C4u, 1);  /* 0C0A78C2 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r8;  /* 0C0A78C4 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0A78DEu, 4); goto L_0C0A78DE; }  /* 0C0A78C6 bt */
L_0C0A78C8: BLKS(0x0C0A78C8u);
	r2 = r6;  /* 0C0A78C8 mov Rm,Rn */
	r9 = 0xC3929E0u; UPD(0x0C0A78CCu, 2);  /* 0C0A78CA mov.l @(disp,pc),Rn */
	r7 = R32(r9); UPD(0x0C0A78CEu, 1);  /* 0C0A78CC mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0A78D0u, 1);  /* 0C0A78CE mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0A78D0 sub Rm,Rn */
	r2 += r6;  /* 0C0A78D2 add Rm,Rn */
	IF(0x0C0A78D4u); T = (s32)r2 >= 0;  /* 0C0A78D4 cmp/pz Rn */
	if (!T) { UPD(0x0C0A7910u, 6); goto L_0C0A7910; }  /* 0C0A78D6 bf */
L_0C0A78D8: BLKS(0x0C0A78D8u);
	r10 = 0x880000u; UPD(0x0C0A78DAu, 1);  /* 0C0A78D8 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r10;  /* 0C0A78DA cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A78F0u, 4); goto L_0C0A78F0; }  /* 0C0A78DC bf */
L_0C0A78DE: BLKS(0x0C0A78DEu);
	r4 = 0x0u;  /* 0C0A78DE mov #imm,Rn */
	{ W32(r3, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C0A787Cu, 4); goto L_0C0A787C; }  /* 0C0A78E0 bra */
L_0C0A78F0: BLKS(0x0C0A78F0u);
	r0 = R32(r3 + 0x10u); UPD(0x0C0A78F2u, 1);  /* 0C0A78F0 mov.l @(disp,Rm),Rn */
	r12 = 0xC1E3550u; UPD(0x0C0A78F4u, 1);  /* 0C0A78F2 mov.l @(disp,pc),Rn */
	IF(0x0C0A78F4u); r0 <<= 2;  /* 0C0A78F4 shll2 Rn */
	IF(0x0C0A78F6u); r11 = R32(r0 + r12); UPD(0x0C0A78F8u, 2);  /* 0C0A78F6 mov.l @(r0,Rm),Rn */
	r0 = 0xC0A7A80u; UPD(0x0C0A78FAu, 1);  /* 0C0A78F8 mov.l @(disp,pc),Rn */
	W32(r3 + 0x10u, r11); UPD(0x0C0A78FCu, 1);  /* 0C0A78FA mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C0A78FC mov Rm,Rn */
	IF(0x0C0A78FEu); PR = R32(r15); r15 += 4; UPD(0x0C0A7900u, 2);  /* 0C0A78FE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7902u, 1);  /* 0C0A7900 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A7904u, 1);  /* 0C0A7902 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A7906u, 1);  /* 0C0A7904 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A7908u, 1);  /* 0C0A7906 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A790Au, 1);  /* 0C0A7908 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A790Cu, 1);  /* 0C0A790A mov.l @Rm+,Rn */
	IF(0x0C0A790Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A7A80u: TAIL(f_0C0A7A80); default: JUMPD(tv_); } }  /* 0C0A790C jmp @Rn */
L_0C0A7910: BLKS(0x0C0A7910u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A78D8u, 3); goto L_0C0A78D8; }  /* 0C0A7910 bra */
L_0C0A7920: BLKS(0x0C0A7920u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0A78C2u, 3); goto L_0C0A78C2; }  /* 0C0A7920 bra */
L_0C0A7930: BLKS(0x0C0A7930u);
	r13 = 0x54u;  /* 0C0A7930 mov #imm,Rn */
	IF(0x0C0A7932u); MACL = r4 * r13;  /* 0C0A7932 mul.l Rm,Rn */
	r8 = 0xC27E0FCu; UPD(0x0C0A7936u, 4);  /* 0C0A7934 mov.l @(disp,pc),Rn */
	IF(0x0C0A7936u); r13 = MACL;  /* 0C0A7936 sts macl,Rn */
	r13 += r8;  /* 0C0A7938 add Rm,Rn */
	r5 = R32(r13 + 0x28u); UPD(0x0C0A793Cu, 3);  /* 0C0A793A mov.l @(disp,Rm),Rn */
	r3 = R32(r13 + 0x30u); UPD(0x0C0A793Eu, 1);  /* 0C0A793C mov.l @(disp,Rm),Rn */
	r7 = R32(r13 + 0x2Cu); UPD(0x0C0A7940u, 1);  /* 0C0A793E mov.l @(disp,Rm),Rn */
	r5 += r3;  /* 0C0A7940 add Rm,Rn */
	r2 = R32(r13 + 0x34u); UPD(0x0C0A7944u, 2);  /* 0C0A7942 mov.l @(disp,Rm),Rn */
	r3 = 0xFF600000u; UPD(0x0C0A7946u, 1);  /* 0C0A7944 mov.l @(disp,pc),Rn */
	r7 += r2;  /* 0C0A7946 add Rm,Rn */
	r3 += r5;  /* 0C0A7948 add Rm,Rn */
	W32(r13 + 0x28u, r5); UPD(0x0C0A794Cu, 3);  /* 0C0A794A mov.l Rm,@(disp,Rn) */
	IF(0x0C0A794Cu); T = (s32)r3 >= 0;  /* 0C0A794C cmp/pz Rn */
	{ u32 c_ = !T; W32(r13 + 0x2Cu, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A7A30u, 4); goto L_0C0A7A30; } UPD(0x0C0A7952u, 1); goto L_0C0A7952; }  /* 0C0A794E bf/s */
L_0C0A7952: BLKS(0x0C0A7952u);
	r6 = 0xB00000u; UPD(0x0C0A7954u, 1);  /* 0C0A7952 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0A7954 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0A796Eu, 4); goto L_0C0A796E; }  /* 0C0A7956 bt */
L_0C0A7958: BLKS(0x0C0A7958u);
	r2 = r7;  /* 0C0A7958 mov Rm,Rn */
	r10 = 0xC3929E0u; UPD(0x0C0A795Cu, 2);  /* 0C0A795A mov.l @(disp,pc),Rn */
	r9 = R32(r10); UPD(0x0C0A795Eu, 1);  /* 0C0A795C mov.l @Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C0A7960u, 1);  /* 0C0A795E mov.l @(disp,pc),Rn */
	r2 -= r9;  /* 0C0A7960 sub Rm,Rn */
	r2 += r7;  /* 0C0A7962 add Rm,Rn */
	IF(0x0C0A7964u); T = (s32)r2 >= 0;  /* 0C0A7964 cmp/pz Rn */
	if (!T) { UPD(0x0C0A7A20u, 6); goto L_0C0A7A20; }  /* 0C0A7966 bf */
L_0C0A7968: BLKS(0x0C0A7968u);
	r0 = 0x880000u; UPD(0x0C0A796Au, 1);  /* 0C0A7968 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0A796A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A7980u, 4); goto L_0C0A7980; }  /* 0C0A796C bf */
L_0C0A796E: BLKS(0x0C0A796Eu);
	r4 = 0x0u;  /* 0C0A796E mov #imm,Rn */
	W32(r13, r4); UPD(0x0C0A7972u, 2);  /* 0C0A7970 mov.l Rm,@Rn */
L_0C0A7972: BLKS(0x0C0A7972u);
	{ IF(0x0C0A7974u); ; /* slot nop */ UPD(0x0C0A787Cu, 3); goto L_0C0A787C; }  /* 0C0A7972 bra */
L_0C0A7980: BLKS(0x0C0A7980u);
	r0 = R32(r13 + 0x10u); UPD(0x0C0A7982u, 1);  /* 0C0A7980 mov.l @(disp,Rm),Rn */
	r6 = 0xC1E3550u; UPD(0x0C0A7984u, 1);  /* 0C0A7982 mov.l @(disp,pc),Rn */
	IF(0x0C0A7984u); r0 <<= 2;  /* 0C0A7984 shll2 Rn */
	IF(0x0C0A7986u); r3 = R32(r0 + r6); UPD(0x0C0A7988u, 2);  /* 0C0A7986 mov.l @(r0,Rm),Rn */
	r11 = 0xC0A7A80u; UPD(0x0C0A798Au, 1);  /* 0C0A7988 mov.l @(disp,pc),Rn */
	IF(0x0C0A798Au); { u32 t_ = r11; PR = 0x0C0A798Eu; W32(r13 + 0x10u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A7A80, 0x0C0A7A80u, 0x0C0A798Eu); }  /* 0C0A798A jsr @Rn */
L_0C0A798E: BLKS(0x0C0A798Eu);
	r3 = r13;  /* 0C0A798E mov Rm,Rn */
	r3 += 0x51u;  /* 0C0A7990 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0A7994u, 3);  /* 0C0A7992 mov.b @Rm,Rn */
	r11 = r13;  /* 0C0A7994 mov Rm,Rn */
	r11 += 0x48u;  /* 0C0A7996 add #imm,Rn */
	r2 += 0x1u;  /* 0C0A7998 add #imm,Rn */
	r0 = R32(r11); UPD(0x0C0A799Cu, 4);  /* 0C0A799A mov.l @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C0A799C extu.b Rm,Rn */
	W8(r3, r2); UPD(0x0C0A79A0u, 2);  /* 0C0A799E mov.b Rm,@Rn */
	IF(0x0C0A79A0u); r0 >>= 16;  /* 0C0A79A0 shlr16 Rn */
	r8 = 0xC1E3568u; UPD(0x0C0A79A4u, 2);  /* 0C0A79A2 mov.l @(disp,pc),Rn */
	IF(0x0C0A79A4u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A79A6u, 1);  /* 0C0A79A4 mov.b @(r0,Rm),Rn */
	T = (s32)r5 >= (s32)r12;  /* 0C0A79A6 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C0A7972u, 4); goto L_0C0A7972; }  /* 0C0A79A8 bf */
L_0C0A79AA: BLKS(0x0C0A79AAu);
	r13 += 0x44u;  /* 0C0A79AA add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r13); UPD(0x0C0A79AEu, 2);  /* 0C0A79AC mov.w @Rm,Rn */
	r6 = 0x0u;  /* 0C0A79AE mov #imm,Rn */
	r1 = 0x100u; UPD(0x0C0A79B2u, 2);  /* 0C0A79B0 mov.w @(disp,pc),Rn */
	r13 += 0xFFFFFFBCu;  /* 0C0A79B2 add #imm,Rn */
	r9 = R32(r13 + 0x38u); UPD(0x0C0A79B6u, 2);  /* 0C0A79B4 mov.l @(disp,Rm),Rn */
	r5 += r1;  /* 0C0A79B6 add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C0A79BAu, 2);  /* 0C0A79B8 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C0A79BA exts.w Rm,Rn */
	IF(0x0C0A79BCu); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C0A79BC shar Rn */
	W8(r3, r6); UPD(0x0C0A79C0u, 3);  /* 0C0A79BE mov.b Rm,@Rn */
	r4 = r12;  /* 0C0A79C0 mov Rm,Rn */
	IF(0x0C0A79C2u); { u32 t_ = r10; PR = 0x0C0A79C6u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A79C6u); }  /* 0C0A79C2 jsr @Rn */
L_0C0A79C6: BLKS(0x0C0A79C6u);
	r5 = r9;  /* 0C0A79C6 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0A79CAu, 2);  /* 0C0A79C8 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0A79CA mov Rm,Rn */
	r10 = R32(r13 + 0x28u); UPD(0x0C0A79CEu, 2);  /* 0C0A79CC mov.l @(disp,Rm),Rn */
	r8 = 0xC050D70u; UPD(0x0C0A79D0u, 1);  /* 0C0A79CE mov.l @(disp,pc),Rn */
	IF(0x0C0A79D0u); { u32 t_ = r9; PR = 0x0C0A79D4u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A79D4u); }  /* 0C0A79D0 jsr @Rn */
L_0C0A79D4: BLKS(0x0C0A79D4u);
	r9 = R32(r13 + 0x2Cu); UPD(0x0C0A79D6u, 1);  /* 0C0A79D4 mov.l @(disp,Rm),Rn */
	r4 = 0x7Fu;  /* 0C0A79D6 mov #imm,Rn */
	IF(0x0C0A79D8u); { u32 t_ = r8; PR = 0x0C0A79DCu; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A79DCu); }  /* 0C0A79D8 jsr @Rn */
L_0C0A79DC: BLKS(0x0C0A79DCu);
	r8 = R32(r11); UPD(0x0C0A79DEu, 1);  /* 0C0A79DC mov.l @Rm,Rn */
	r0 += r12;  /* 0C0A79DE add Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C0A79E0 add #imm,Rn */
	r2 = 0xC058060u; UPD(0x0C0A79E4u, 3);  /* 0C0A79E2 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFC0u;  /* 0C0A79E4 add #imm,Rn */
	r4 = 0x0u;  /* 0C0A79E6 mov #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0A79E8 exts.w Rm,Rn */
	W32(r15, r4); UPD(0x0C0A79ECu, 4);  /* 0C0A79EA mov.l Rm,@Rn */
	IF(0x0C0A79ECu); r8 >>= 2;  /* 0C0A79EC shlr2 Rn */
	r0 = 0x14u;  /* 0C0A79EE mov #imm,Rn */
	r4 = r12;  /* 0C0A79F0 mov Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A79F4u, 4);  /* 0C0A79F2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A79F4u); { u32 t_ = r2; PR = 0x0C0A79F8u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A79F8u); }  /* 0C0A79F4 jsr @Rn */
L_0C0A79F8: BLKS(0x0C0A79F8u);
	r4 = r12;  /* 0C0A79F8 mov Rm,Rn */
	r12 = 0xC058030u; UPD(0x0C0A79FCu, 2);  /* 0C0A79FA mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C0A79FC mov Rm,Rn */
	IF(0x0C0A79FEu); { u32 t_ = r12; PR = 0x0C0A7A02u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A7A02u); }  /* 0C0A79FE jsr @Rn */
L_0C0A7A02: BLKS(0x0C0A7A02u);
	r7 = 0x80C080u; UPD(0x0C0A7A04u, 1);  /* 0C0A7A02 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0A7A04 mov #imm,Rn */
	W32(r15 + 0x10u, r7); UPD(0x0C0A7A08u, 2);  /* 0C0A7A06 mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C0A7A08 mov Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0A7A0Cu, 2);  /* 0C0A7A0A mov.l Rm,@(disp,Rn) */
	r4 = R32(r13); UPD(0x0C0A7A0Eu, 1);  /* 0C0A7A0C mov.l @Rm,Rn */
	r13 = 0xC0ACA40u; UPD(0x0C0A7A10u, 1);  /* 0C0A7A0E mov.l @(disp,pc),Rn */
	IF(0x0C0A7A10u); { u32 t_ = r13; PR = 0x0C0A7A14u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C0A7A14u); }  /* 0C0A7A10 jsr @Rn */
L_0C0A7A14: BLKS(0x0C0A7A14u);
	{ r15 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C0A787Cu, 3); goto L_0C0A787C; }  /* 0C0A7A14 bra */
L_0C0A7A20: BLKS(0x0C0A7A20u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A7968u, 3); goto L_0C0A7968; }  /* 0C0A7A20 bra */
L_0C0A7A30: BLKS(0x0C0A7A30u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C0A7952u, 3); goto L_0C0A7952; }  /* 0C0A7A30 bra */
}

/* FUN_0c0a7a80 */
void f_0C0A7A80(sh3_t *c)
{
	LOCALS;
L_0C0A7A80: BLKS(0x0C0A7A80u);
	r7 = (u32)(s32)(s16)r4;  /* 0C0A7A80 exts.w Rm,Rn */
	r0 = 0x54u;  /* 0C0A7A82 mov #imm,Rn */
	IF(0x0C0A7A84u); MACL = r7 * r0;  /* 0C0A7A84 mul.l Rm,Rn */
	r6 = 0xC27E0FCu; UPD(0x0C0A7A88u, 5);  /* 0C0A7A86 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0A7A88 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7A8Cu, 2);  /* 0C0A7A8A mov.l Rm,@-Rn */
	IF(0x0C0A7A8Cu); r0 = MACL;  /* 0C0A7A8C sts macl,Rn */
	r0 += r6;  /* 0C0A7A8E add Rm,Rn */
	r3 = R32(r0 + 0x10u); UPD(0x0C0A7A92u, 3);  /* 0C0A7A90 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0A7A92 mov Rm,Rn */
	r4 = R32(r0 + 0x18u); UPD(0x0C0A7A96u, 2);  /* 0C0A7A94 mov.l @(disp,Rm),Rn */
	IF(0x0C0A7A96u); ARG0(0x435Du); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C0A7A96 shld Rm,Rn */
	r3 += r4;  /* 0C0A7A98 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C0A7A9Cu, 3);  /* 0C0A7A9A mov.l @Rm,Rn */
	W32(r0 + 0x1Cu, r1); UPD(0x0C0A7A9Eu, 1);  /* 0C0A7A9C mov.l Rm,@(disp,Rn) */
	r2 = R32(r3 + 0x4u); UPD(0x0C0A7AA0u, 1);  /* 0C0A7A9E mov.l @(disp,Rm),Rn */
	W32(r0 + 0x20u, r2); UPD(0x0C0A7AA2u, 1);  /* 0C0A7AA0 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C0A7AA2 mov Rm,Rn */
	IF(0x0C0A7AA4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A7AA4 rts */
}

/* FUN_0c0a7ab0 */
void f_0C0A7AB0(sh3_t *c)
{
	LOCALS;
L_0C0A7AB0: BLKS(0x0C0A7AB0u);
	r1 = (u32)(s32)(s16)r4;  /* 0C0A7AB0 exts.w Rm,Rn */
	r3 = 0x54u;  /* 0C0A7AB2 mov #imm,Rn */
	IF(0x0C0A7AB4u); MACL = r1 * r3;  /* 0C0A7AB4 mul.l Rm,Rn */
	r0 = 0xC27E0FCu; UPD(0x0C0A7AB8u, 5);  /* 0C0A7AB6 mov.l @(disp,pc),Rn */
	r7 = 0x4u;  /* 0C0A7AB8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7ABCu, 2);  /* 0C0A7ABA mov.l Rm,@-Rn */
	IF(0x0C0A7ABCu); r4 = MACL;  /* 0C0A7ABC sts macl,Rn */
	r4 += r0;  /* 0C0A7ABE add Rm,Rn */
	r0 = R32(r4 + 0x8u); UPD(0x0C0A7AC2u, 3);  /* 0C0A7AC0 mov.l @(disp,Rm),Rn */
	r2 = 0x3u;  /* 0C0A7AC2 mov #imm,Rn */
	IF(0x0C0A7AC4u); ARG0(0x407Du); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0A7AC4 shld Rm,Rn */
	r6 = R32(r4 + 0x14u); UPD(0x0C0A7AC8u, 3);  /* 0C0A7AC6 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0A7AC8 mov Rm,Rn */
	r3 = R32(r4 + 0x10u); UPD(0x0C0A7ACCu, 2);  /* 0C0A7ACA mov.l @(disp,Rm),Rn */
	IF(0x0C0A7ACCu); r5 = R32(r0 + r6); UPD(0x0C0A7ACEu, 1);  /* 0C0A7ACC mov.l @(r0,Rm),Rn */
	IF(0x0C0A7ACEu); ARG0(0x432Du); { s32 s_ = (s32)r2; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C0A7ACE shld Rm,Rn */
	W32(r4 + 0x18u, r5); UPD(0x0C0A7AD2u, 2);  /* 0C0A7AD0 mov.l Rm,@(disp,Rn) */
	r3 += r5;  /* 0C0A7AD2 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C0A7AD6u, 2);  /* 0C0A7AD4 mov.l @Rm,Rn */
	W32(r4 + 0x1Cu, r1); UPD(0x0C0A7AD8u, 1);  /* 0C0A7AD6 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x4u); UPD(0x0C0A7ADAu, 1);  /* 0C0A7AD8 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x20u, r0); UPD(0x0C0A7ADCu, 1);  /* 0C0A7ADA mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C0A7ADC mov Rm,Rn */
	IF(0x0C0A7ADEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A7ADE rts */
}

void f_0C0A7AF0(sh3_t *c)
{
	LOCALS;
L_0C0A7AF0: BLKS(0x0C0A7AF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7AF2u, 1);  /* 0C0A7AF0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0A7AF2 exts.w Rm,Rn */
	r3 = 0x54u;  /* 0C0A7AF4 mov #imm,Rn */
	IF(0x0C0A7AF6u); MACL = r4 * r3;  /* 0C0A7AF6 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7AFAu, 5);  /* 0C0A7AF8 mov.l Rm,@-Rn */
	r0 = 0xC27E0FCu; UPD(0x0C0A7AFCu, 1);  /* 0C0A7AFA mov.l @(disp,pc),Rn */
	IF(0x0C0A7AFCu); r8 = MACL;  /* 0C0A7AFC sts macl,Rn */
	IF(0x0C0A7AFEu); r15 -= 4; W32(r15, PR); UPD(0x0C0A7B00u, 2);  /* 0C0A7AFE sts.l pr,@-Rn */
	r8 += r0;  /* 0C0A7B00 add Rm,Rn */
	r2 = R32(r8 + 0x8u); UPD(0x0C0A7B04u, 2);  /* 0C0A7B02 mov.l @(disp,Rm),Rn */
	r0 = 0x3u;  /* 0C0A7B04 mov #imm,Rn */
	r2 += 0xFFFFFFFBu;  /* 0C0A7B06 add #imm,Rn */
	T = r2 > r0;  /* 0C0A7B08 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A7B80u, 6); goto L_0C0A7B80; } goto L_0C0A7B0E; }  /* 0C0A7B0A bf/s */
L_0C0A7B0E: BLKS(0x0C0A7B0Eu);
	r4 = R32(r8 + 0x28u); UPD(0x0C0A7B10u, 2);  /* 0C0A7B0E mov.l @(disp,Rm),Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C0A7B12u, 1);  /* 0C0A7B10 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x30u); UPD(0x0C0A7B14u, 1);  /* 0C0A7B12 mov.l @(disp,Rm),Rn */
	r1 = R32(r8 + 0x34u); UPD(0x0C0A7B16u, 1);  /* 0C0A7B14 mov.l @(disp,Rm),Rn */
	r4 += r5;  /* 0C0A7B16 add Rm,Rn */
	r2 = 0xFF600000u; UPD(0x0C0A7B1Au, 2);  /* 0C0A7B18 mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C0A7B1A add Rm,Rn */
	r2 += r4;  /* 0C0A7B1C add Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C0A7B20u, 3);  /* 0C0A7B1E mov.l Rm,@(disp,Rn) */
	IF(0x0C0A7B20u); T = (s32)r2 >= 0;  /* 0C0A7B20 cmp/pz Rn */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A7B70u, 4); goto L_0C0A7B70; } UPD(0x0C0A7B26u, 1); goto L_0C0A7B26; }  /* 0C0A7B22 bf/s */
L_0C0A7B26: BLKS(0x0C0A7B26u);
	r6 = 0xA80000u; UPD(0x0C0A7B28u, 1);  /* 0C0A7B26 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0A7B28 cmp/gt Rm,Rn */
	{ u32 c_ = T; r4 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A7B46u, 4); goto L_0C0A7B46; } goto L_0C0A7B2E; }  /* 0C0A7B2A bt/s */
L_0C0A7B2E: BLKS(0x0C0A7B2Eu);
	r2 = 0xC3929E0u; UPD(0x0C0A7B30u, 2);  /* 0C0A7B2E mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0A7B32u, 1);  /* 0C0A7B30 mov.l @Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C0A7B34u, 1);  /* 0C0A7B32 mov.l @(disp,pc),Rn */
	r2 = r3;  /* 0C0A7B34 mov Rm,Rn */
	r2 -= r0;  /* 0C0A7B36 sub Rm,Rn */
	r2 += r7;  /* 0C0A7B38 add Rm,Rn */
	IF(0x0C0A7B3Au); T = (s32)r2 >= 0;  /* 0C0A7B3A cmp/pz Rn */
	if (!T) { UPD(0x0C0A7B60u, 7); goto L_0C0A7B60; }  /* 0C0A7B3C bf */
L_0C0A7B3E: BLKS(0x0C0A7B3Eu);
	r3 = 0x800000u; UPD(0x0C0A7B40u, 1);  /* 0C0A7B3E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r3;  /* 0C0A7B40 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A7B48u, 4); goto L_0C0A7B48; }  /* 0C0A7B42 bf */
L_0C0A7B44: BLKS(0x0C0A7B44u);
	r4 = 0x0u;  /* 0C0A7B44 mov #imm,Rn */
	UPD(0x0C0A7B46u, 1);
L_0C0A7B46: BLKS(0x0C0A7B46u);
	W32(r8, r4); UPD(0x0C0A7B48u, 1);  /* 0C0A7B46 mov.l Rm,@Rn */
L_0C0A7B48: BLKS(0x0C0A7B48u);
	r15 = r14;  /* 0C0A7B48 mov Rm,Rn */
	IF(0x0C0A7B4Au); PR = R32(r15); r15 += 4; UPD(0x0C0A7B4Cu, 2);  /* 0C0A7B4A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7B4Eu, 1);  /* 0C0A7B4C mov.l @Rm+,Rn */
	IF(0x0C0A7B4Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A7B4E rts */
L_0C0A7B60: BLKS(0x0C0A7B60u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A7B3Eu, 3); goto L_0C0A7B3E; }  /* 0C0A7B60 bra */
L_0C0A7B70: BLKS(0x0C0A7B70u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A7B26u, 3); goto L_0C0A7B26; }  /* 0C0A7B70 bra */
L_0C0A7B80: BLKS(0x0C0A7B80u);
	r6 = r8;  /* 0C0A7B80 mov Rm,Rn */
	r6 += 0x50u;  /* 0C0A7B82 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0A7B86u, 3);  /* 0C0A7B84 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C0A7B86 add #imm,Rn */
	r0 = r5 & 0xFF;  /* 0C0A7B88 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0A7B8A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r6, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0A7B48u, 6); goto L_0C0A7B48; } UPD(0x0C0A7B90u, 1); goto L_0C0A7B90; }  /* 0C0A7B8C bf/s */
L_0C0A7B90: BLKS(0x0C0A7B90u);
	r0 = 0xC0A7AB0u; UPD(0x0C0A7B92u, 1);  /* 0C0A7B90 mov.l @(disp,pc),Rn */
	r2 = R32(r8 + 0xCu); UPD(0x0C0A7B94u, 1);  /* 0C0A7B92 mov.l @(disp,Rm),Rn */
	IF(0x0C0A7B94u); { u32 t_ = r0; PR = 0x0C0A7B98u; W32(r8 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A7AB0, 0x0C0A7AB0u, 0x0C0A7B98u); }  /* 0C0A7B94 jsr @Rn */
L_0C0A7B98: BLKS(0x0C0A7B98u);
	r7 = 0x0u;  /* 0C0A7B98 mov #imm,Rn */
	{ W32(r8 + 0x3Cu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0A7B48u, 4); goto L_0C0A7B48; }  /* 0C0A7B9A bra */
}

void f_0C0A7BC0(sh3_t *c)
{
	LOCALS;
L_0C0A7BC0: BLKS(0x0C0A7BC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7BC2u, 1);  /* 0C0A7BC0 mov.l Rm,@-Rn */
	r3 = 0x54u;  /* 0C0A7BC2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7BC6u, 2);  /* 0C0A7BC4 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A7BC6 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7BCAu, 2);  /* 0C0A7BC8 mov.l Rm,@-Rn */
	IF(0x0C0A7BCAu); MACL = r8 * r3;  /* 0C0A7BCA mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7BCEu, 3);  /* 0C0A7BCC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7BD0u, 1);  /* 0C0A7BCE mov.l Rm,@-Rn */
	IF(0x0C0A7BD0u); r2 = MACL;  /* 0C0A7BD0 sts macl,Rn */
	r0 = 0xC27E0FCu; UPD(0x0C0A7BD4u, 2);  /* 0C0A7BD2 mov.l @(disp,pc),Rn */
	IF(0x0C0A7BD4u); r15 -= 4; W32(r15, PR); UPD(0x0C0A7BD6u, 1);  /* 0C0A7BD4 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0A7BD6 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0A7BDAu, 2);  /* 0C0A7BD8 mov.l @(disp,Rm),Rn */
	r0 = 0x13u;  /* 0C0A7BDA mov #imm,Rn */
	T = r2 > r0;  /* 0C0A7BDC cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A7C64u, 5); goto L_0C0A7C64; } goto L_0C0A7BE2; }  /* 0C0A7BDE bt/s */
L_0C0A7BE2: BLKS(0x0C0A7BE2u);
	r0 = 0xC0A7BF0u;  /* 0C0A7BE2 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0A7BE4 add Rm,Rn */
	IF(0x0C0A7BE6u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A7BE8u, 4);  /* 0C0A7BE6 mov.w @(r0,Rm),Rn */
	IF(0x0C0A7BE8u); { u32 tv_ = (r4 + 0x0C0A7BECu); u32 t_ = PHYS(tv_); IF(0x0C0A7BEAu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A7C20u: goto L_0C0A7C20; case 0x0C0A7CA0u: goto L_0C0A7CA0; case 0x0C0A7D10u: goto L_0C0A7D10; default: JUMPD(tv_); } }  /* 0C0A7BE8 braf Rn */
L_0C0A7C20: BLKS(0x0C0A7C20u);
	r9 = 0x54u;  /* 0C0A7C20 mov #imm,Rn */
	IF(0x0C0A7C22u); MACL = r8 * r9;  /* 0C0A7C22 mul.l Rm,Rn */
	r8 = 0xC27E0FCu; UPD(0x0C0A7C26u, 4);  /* 0C0A7C24 mov.l @(disp,pc),Rn */
	IF(0x0C0A7C26u); r3 = MACL;  /* 0C0A7C26 sts macl,Rn */
	r3 += r8;  /* 0C0A7C28 add Rm,Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C0A7C2Cu, 3);  /* 0C0A7C2A mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x30u); UPD(0x0C0A7C2Eu, 1);  /* 0C0A7C2C mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C0A7C2E add Rm,Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0A7C32u, 2);  /* 0C0A7C30 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x34u); UPD(0x0C0A7C34u, 1);  /* 0C0A7C32 mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C0A7C34 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0A7C38u, 2);  /* 0C0A7C36 mov.l @(disp,pc),Rn */
	W32(r3 + 0x28u, r5); UPD(0x0C0A7C3Au, 1);  /* 0C0A7C38 mov.l Rm,@(disp,Rn) */
	r7 += r5;  /* 0C0A7C3A add Rm,Rn */
	IF(0x0C0A7C3Cu); T = (s32)r7 >= 0;  /* 0C0A7C3C cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x2Cu, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A7C90u, 5); goto L_0C0A7C90; } UPD(0x0C0A7C42u, 1); goto L_0C0A7C42; }  /* 0C0A7C3E bf/s */
L_0C0A7C42: BLKS(0x0C0A7C42u);
	r10 = 0xC00000u; UPD(0x0C0A7C44u, 1);  /* 0C0A7C42 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r10;  /* 0C0A7C44 cmp/gt Rm,Rn */
	{ u32 c_ = T; r5 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A7C62u, 4); goto L_0C0A7C62; } goto L_0C0A7C4A; }  /* 0C0A7C46 bt/s */
L_0C0A7C4A: BLKS(0x0C0A7C4Au);
	r2 = 0xC3929E0u; UPD(0x0C0A7C4Cu, 2);  /* 0C0A7C4A mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0A7C4Eu, 1);  /* 0C0A7C4C mov.l @Rm,Rn */
	r11 = 0xFF880000u; UPD(0x0C0A7C50u, 1);  /* 0C0A7C4E mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C0A7C50 mov Rm,Rn */
	r2 -= r0;  /* 0C0A7C52 sub Rm,Rn */
	r2 += r11;  /* 0C0A7C54 add Rm,Rn */
	IF(0x0C0A7C56u); T = (s32)r2 >= 0;  /* 0C0A7C56 cmp/pz Rn */
	if (!T) { UPD(0x0C0A7C80u, 7); goto L_0C0A7C80; }  /* 0C0A7C58 bf */
L_0C0A7C5A: BLKS(0x0C0A7C5Au);
	r4 = 0x980000u; UPD(0x0C0A7C5Cu, 1);  /* 0C0A7C5A mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0A7C5C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A7C64u, 4); goto L_0C0A7C64; }  /* 0C0A7C5E bf */
L_0C0A7C60: BLKS(0x0C0A7C60u);
	r5 = 0x0u;  /* 0C0A7C60 mov #imm,Rn */
	UPD(0x0C0A7C62u, 1);
L_0C0A7C62: BLKS(0x0C0A7C62u);
	W32(r3, r5); UPD(0x0C0A7C64u, 1);  /* 0C0A7C62 mov.l Rm,@Rn */
L_0C0A7C64: BLKS(0x0C0A7C64u);
	r15 = r14;  /* 0C0A7C64 mov Rm,Rn */
	IF(0x0C0A7C66u); PR = R32(r15); r15 += 4; UPD(0x0C0A7C68u, 2);  /* 0C0A7C66 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7C6Au, 1);  /* 0C0A7C68 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A7C6Cu, 1);  /* 0C0A7C6A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A7C6Eu, 1);  /* 0C0A7C6C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A7C70u, 1);  /* 0C0A7C6E mov.l @Rm+,Rn */
	IF(0x0C0A7C70u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A7C70 rts */
L_0C0A7C80: BLKS(0x0C0A7C80u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A7C5Au, 3); goto L_0C0A7C5A; }  /* 0C0A7C80 bra */
L_0C0A7C90: BLKS(0x0C0A7C90u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0A7C42u, 3); goto L_0C0A7C42; }  /* 0C0A7C90 bra */
L_0C0A7CA0: BLKS(0x0C0A7CA0u);
	r9 = 0xC0A95D0u; UPD(0x0C0A7CA2u, 1);  /* 0C0A7CA0 mov.l @(disp,pc),Rn */
	IF(0x0C0A7CA2u); { u32 t_ = r9; PR = 0x0C0A7CA6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A95D0, 0x0C0A95D0u, 0x0C0A7CA6u); }  /* 0C0A7CA2 jsr @Rn */
L_0C0A7CA6: BLKS(0x0C0A7CA6u);
	IF(0x0C0A7CA6u); T = (s32)r0 >= 0;  /* 0C0A7CA6 cmp/pz Rn */
	{ u32 c_ = !T; r2 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A7CF0u, 4); goto L_0C0A7CF0; } goto L_0C0A7CAC; }  /* 0C0A7CA8 bf/s */
L_0C0A7CAC: BLKS(0x0C0A7CACu);
	IF(0x0C0A7CACu); MACL = r8 * r2;  /* 0C0A7CAC mul.l Rm,Rn */
	r11 = 0xC27E0FCu; UPD(0x0C0A7CB0u, 4);  /* 0C0A7CAE mov.l @(disp,pc),Rn */
	IF(0x0C0A7CB0u); r9 = MACL;  /* 0C0A7CB0 sts macl,Rn */
	IF(0x0C0A7CB2u); MACL = r0 * r2;  /* 0C0A7CB2 mul.l Rm,Rn */
	r9 += r11;  /* 0C0A7CB4 add Rm,Rn */
	r9 += 0x44u;  /* 0C0A7CB6 add #imm,Rn */
	IF(0x0C0A7CB8u); r8 = MACL;  /* 0C0A7CB8 sts macl,Rn */
	r8 += r11;  /* 0C0A7CBA add Rm,Rn */
	r8 += 0x44u;  /* 0C0A7CBC add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r8); UPD(0x0C0A7CC0u, 9);  /* 0C0A7CBE mov.w @Rm,Rn */
	W16(r9, r10); UPD(0x0C0A7CC2u, 1);  /* 0C0A7CC0 mov.w Rm,@Rn */
	r4 = r10;  /* 0C0A7CC2 mov Rm,Rn */
	r9 += 0xFFFFFFBCu;  /* 0C0A7CC4 add #imm,Rn */
	r0 = 0xC058060u; UPD(0x0C0A7CC8u, 3);  /* 0C0A7CC6 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0A7CC8 add #imm,Rn */
	r11 = R32(r9 + 0x38u); UPD(0x0C0A7CCCu, 2);  /* 0C0A7CCA mov.l @(disp,Rm),Rn */
	IF(0x0C0A7CCCu); { u32 t_ = r0; PR = 0x0C0A7CD0u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A7CD0u); }  /* 0C0A7CCC jsr @Rn */
L_0C0A7CD0: BLKS(0x0C0A7CD0u);
	r4 = r10;  /* 0C0A7CD0 mov Rm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C0A7CD4u, 2);  /* 0C0A7CD2 mov.l @(disp,Rm),Rn */
	r5 = r11;  /* 0C0A7CD4 mov Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C0A7CD8u, 2);  /* 0C0A7CD6 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0A7CD8 add Rm,Rn */
	IF(0x0C0A7CDAu); { u32 t_ = r10; PR = 0x0C0A7CDEu; W32(r9 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A7CDEu); }  /* 0C0A7CDA jsr @Rn */
L_0C0A7CDE: BLKS(0x0C0A7CDEu);
	r7 = R32(r8 + 0x2Cu); UPD(0x0C0A7CE0u, 1);  /* 0C0A7CDE mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C0A7CE0 add Rm,Rn */
	{ W32(r9 + 0x2Cu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0A7C64u, 4); goto L_0C0A7C64; }  /* 0C0A7CE2 bra */
L_0C0A7CF0: BLKS(0x0C0A7CF0u);
	r3 = 0xC0A9630u; UPD(0x0C0A7CF2u, 1);  /* 0C0A7CF0 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0A7CF2 mov Rm,Rn */
	r15 = r14;  /* 0C0A7CF4 mov Rm,Rn */
	IF(0x0C0A7CF6u); PR = R32(r15); r15 += 4; UPD(0x0C0A7CF8u, 3);  /* 0C0A7CF6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7CFAu, 1);  /* 0C0A7CF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A7CFCu, 1);  /* 0C0A7CFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A7CFEu, 1);  /* 0C0A7CFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A7D00u, 1);  /* 0C0A7CFE mov.l @Rm+,Rn */
	IF(0x0C0A7D00u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9630u: goto L_0C0A9630; default: JUMPD(tv_); } }  /* 0C0A7D00 jmp @Rn */
L_0C0A7D10: BLKS(0x0C0A7D10u);
	r9 = 0x54u;  /* 0C0A7D10 mov #imm,Rn */
	IF(0x0C0A7D12u); MACL = r8 * r9;  /* 0C0A7D12 mul.l Rm,Rn */
	r5 = 0xC27E0FCu; UPD(0x0C0A7D16u, 4);  /* 0C0A7D14 mov.l @(disp,pc),Rn */
	IF(0x0C0A7D16u); r9 = MACL;  /* 0C0A7D16 sts macl,Rn */
	r9 += r5;  /* 0C0A7D18 add Rm,Rn */
	r0 = r9;  /* 0C0A7D1A mov Rm,Rn */
	r0 += 0x50u;  /* 0C0A7D1C add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C0A7D20u, 5);  /* 0C0A7D1E mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0A7D20 add #imm,Rn */
	W8(r0, r4); UPD(0x0C0A7D24u, 2);  /* 0C0A7D22 mov.b Rm,@Rn */
	r0 = r4 & 0xFF;  /* 0C0A7D24 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0A7D26 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0A7C64u, 5); goto L_0C0A7C64; }  /* 0C0A7D28 bf */
L_0C0A7D2A: BLKS(0x0C0A7D2Au);
	r4 = r8;  /* 0C0A7D2A mov Rm,Rn */
	r3 = 0xC0A7AB0u; UPD(0x0C0A7D2Eu, 2);  /* 0C0A7D2C mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0xCu); UPD(0x0C0A7D30u, 1);  /* 0C0A7D2E mov.l @(disp,Rm),Rn */
	r8 = 0x0u;  /* 0C0A7D30 mov #imm,Rn */
	IF(0x0C0A7D32u); { u32 t_ = r3; PR = 0x0C0A7D36u; W32(r9 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A7AB0, 0x0C0A7AB0u, 0x0C0A7D36u); }  /* 0C0A7D32 jsr @Rn */
L_0C0A7D36: BLKS(0x0C0A7D36u);
	{ W32(r9 + 0x3Cu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0A7C64u, 3); goto L_0C0A7C64; }  /* 0C0A7D36 bra */
L_0C0A9630: BLKS(0x0C0A9630u);
	r2 = (u32)(s32)(s16)r4;  /* 0C0A9630 exts.w Rm,Rn */
	r0 = 0x54u;  /* 0C0A9632 mov #imm,Rn */
	IF(0x0C0A9634u); MACL = r2 * r0;  /* 0C0A9634 mul.l Rm,Rn */
	r6 = 0xC27E0FCu; UPD(0x0C0A9638u, 5);  /* 0C0A9636 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0A9638 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A963Cu, 2);  /* 0C0A963A mov.l Rm,@-Rn */
	IF(0x0C0A963Cu); r0 = MACL;  /* 0C0A963C sts macl,Rn */
	r0 += r6;  /* 0C0A963E add Rm,Rn */
	W32(r0 + 0x8u, r4); UPD(0x0C0A9642u, 3);  /* 0C0A9640 mov.l Rm,@(disp,Rn) */
	r1 = 0x5u;  /* 0C0A9642 mov #imm,Rn */
	r5 = 0x40000000u; UPD(0x0C0A9646u, 2);  /* 0C0A9644 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0A9646 mov #imm,Rn */
	W32(r0, r5); UPD(0x0C0A964Au, 2);  /* 0C0A9648 mov.l Rm,@Rn */
	r14 = r15;  /* 0C0A964A mov Rm,Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C0A964Eu, 2);  /* 0C0A964C mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x10u, r4); UPD(0x0C0A9650u, 1);  /* 0C0A964E mov.l Rm,@(disp,Rn) */
	r7 = 0xC1E6ABCu; UPD(0x0C0A9652u, 1);  /* 0C0A9650 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x2Cu); UPD(0x0C0A9654u, 1);  /* 0C0A9652 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r3); UPD(0x0C0A9656u, 1);  /* 0C0A9654 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7 + 0x28u); UPD(0x0C0A9658u, 1);  /* 0C0A9656 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x14u, r6); UPD(0x0C0A965Au, 1);  /* 0C0A9658 mov.l Rm,@(disp,Rn) */
	r1 = R32(r6 + 0x10u); UPD(0x0C0A965Cu, 1);  /* 0C0A965A mov.l @(disp,Rm),Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C0A965Eu, 1);  /* 0C0A965C mov.l Rm,@(disp,Rn) */
	r5 = R32(r1); UPD(0x0C0A9660u, 1);  /* 0C0A965E mov.l @Rm,Rn */
	W32(r0 + 0x1Cu, r5); UPD(0x0C0A9662u, 1);  /* 0C0A9660 mov.l Rm,@(disp,Rn) */
	r7 = R32(r1 + 0x4u); UPD(0x0C0A9664u, 1);  /* 0C0A9662 mov.l @(disp,Rm),Rn */
	r6 = 0xC21F894u; UPD(0x0C0A9666u, 1);  /* 0C0A9664 mov.l @(disp,pc),Rn */
	W32(r0 + 0x20u, r7); UPD(0x0C0A9668u, 1);  /* 0C0A9666 mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A966Au, 1);  /* 0C0A9668 mov.w @Rm,Rn */
	r0 += 0x4Eu;  /* 0C0A966A add #imm,Rn */
	W16(r0, r5); UPD(0x0C0A966Eu, 2);  /* 0C0A966C mov.w Rm,@Rn */
	r0 += 0xFFFFFFF6u;  /* 0C0A966E add #imm,Rn */
	W16(r0, r4); UPD(0x0C0A9672u, 2);  /* 0C0A9670 mov.w Rm,@Rn */
	r3 = 0x207C0C0u; UPD(0x0C0A9674u, 1);  /* 0C0A9672 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFBCu;  /* 0C0A9674 add #imm,Rn */
	W32(r0 + 0x3Cu, r3); UPD(0x0C0A9678u, 2);  /* 0C0A9676 mov.l Rm,@(disp,Rn) */
	r1 = 0x808080u; UPD(0x0C0A967Au, 1);  /* 0C0A9678 mov.l @(disp,pc),Rn */
	r0 += 0x40u;  /* 0C0A967A add #imm,Rn */
	W32(r0, r1); UPD(0x0C0A967Eu, 2);  /* 0C0A967C mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A967E mov Rm,Rn */
	IF(0x0C0A9680u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A9680 rts */
}

void f_0C0A7D70(sh3_t *c)
{
	LOCALS;
L_0C0A7D70: BLKS(0x0C0A7D70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7D72u, 1);  /* 0C0A7D70 mov.l Rm,@-Rn */
	r3 = 0x54u;  /* 0C0A7D72 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7D76u, 2);  /* 0C0A7D74 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A7D76 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7D7Au, 2);  /* 0C0A7D78 mov.l Rm,@-Rn */
	IF(0x0C0A7D7Au); MACL = r8 * r3;  /* 0C0A7D7A mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7D7Eu, 3);  /* 0C0A7D7C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7D80u, 1);  /* 0C0A7D7E mov.l Rm,@-Rn */
	IF(0x0C0A7D80u); r2 = MACL;  /* 0C0A7D80 sts macl,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7D84u, 2);  /* 0C0A7D82 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7D86u, 1);  /* 0C0A7D84 mov.l Rm,@-Rn */
	r0 = 0xC27E0FCu; UPD(0x0C0A7D88u, 1);  /* 0C0A7D86 mov.l @(disp,pc),Rn */
	IF(0x0C0A7D88u); r15 -= 4; W32(r15, PR); UPD(0x0C0A7D8Au, 1);  /* 0C0A7D88 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0A7D8A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0A7D8Eu, 2);  /* 0C0A7D8C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0A7D8E add #imm,Rn */
	r0 = 0x1Bu;  /* 0C0A7D90 mov #imm,Rn */
	T = r2 > r0;  /* 0C0A7D92 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A7E24u, 6); goto L_0C0A7E24; } goto L_0C0A7D98; }  /* 0C0A7D94 bt/s */
L_0C0A7D98: BLKS(0x0C0A7D98u);
	r0 = 0xC0A7DA8u;  /* 0C0A7D98 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0A7D9A add Rm,Rn */
	IF(0x0C0A7D9Cu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A7D9Eu, 4);  /* 0C0A7D9C mov.w @(r0,Rm),Rn */
	IF(0x0C0A7D9Eu); { u32 tv_ = (r4 + 0x0C0A7DA2u); u32 t_ = PHYS(tv_); IF(0x0C0A7DA0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A7DE0u: goto L_0C0A7DE0; case 0x0C0A7EF0u: goto L_0C0A7EF0; case 0x0C0A7F60u: goto L_0C0A7F60; default: JUMPD(tv_); } }  /* 0C0A7D9E braf Rn */
L_0C0A7DE0: BLKS(0x0C0A7DE0u);
	r9 = 0x54u;  /* 0C0A7DE0 mov #imm,Rn */
	IF(0x0C0A7DE2u); MACL = r8 * r9;  /* 0C0A7DE2 mul.l Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C0A7DE6u, 4);  /* 0C0A7DE4 mov.l @(disp,pc),Rn */
	r8 = 0xC27E0FCu; UPD(0x0C0A7DE8u, 1);  /* 0C0A7DE6 mov.l @(disp,pc),Rn */
	IF(0x0C0A7DE8u); r13 = MACL;  /* 0C0A7DE8 sts macl,Rn */
	r13 += r8;  /* 0C0A7DEA add Rm,Rn */
	r5 = R32(r13 + 0x28u); UPD(0x0C0A7DEEu, 3);  /* 0C0A7DEC mov.l @(disp,Rm),Rn */
	r7 = R32(r13 + 0x30u); UPD(0x0C0A7DF0u, 1);  /* 0C0A7DEE mov.l @(disp,Rm),Rn */
	r5 += r7;  /* 0C0A7DF0 add Rm,Rn */
	r7 = R32(r13 + 0x2Cu); UPD(0x0C0A7DF4u, 2);  /* 0C0A7DF2 mov.l @(disp,Rm),Rn */
	r3 += r5;  /* 0C0A7DF4 add Rm,Rn */
	r6 = R32(r13 + 0x34u); UPD(0x0C0A7DF8u, 2);  /* 0C0A7DF6 mov.l @(disp,Rm),Rn */
	IF(0x0C0A7DF8u); T = (s32)r3 >= 0;  /* 0C0A7DF8 cmp/pz Rn */
	r7 += r6;  /* 0C0A7DFA add Rm,Rn */
	W32(r13 + 0x28u, r5); UPD(0x0C0A7DFEu, 3);  /* 0C0A7DFC mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r13 + 0x2Cu, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A7EE0u, 3); goto L_0C0A7EE0; } UPD(0x0C0A7E02u, 1); goto L_0C0A7E02; }  /* 0C0A7DFE bf/s */
L_0C0A7E02: BLKS(0x0C0A7E02u);
	r10 = 0xD00000u; UPD(0x0C0A7E04u, 1);  /* 0C0A7E02 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r10;  /* 0C0A7E04 cmp/gt Rm,Rn */
	{ u32 c_ = T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A7E22u, 4); goto L_0C0A7E22; } goto L_0C0A7E0A; }  /* 0C0A7E06 bt/s */
L_0C0A7E0A: BLKS(0x0C0A7E0Au);
	r0 = 0xC3929E0u; UPD(0x0C0A7E0Cu, 2);  /* 0C0A7E0A mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C0A7E0C mov Rm,Rn */
	r12 = R32(r0); UPD(0x0C0A7E10u, 2);  /* 0C0A7E0E mov.l @Rm,Rn */
	r11 = 0xFF880000u; UPD(0x0C0A7E12u, 1);  /* 0C0A7E10 mov.l @(disp,pc),Rn */
	r2 -= r12;  /* 0C0A7E12 sub Rm,Rn */
	r2 += r11;  /* 0C0A7E14 add Rm,Rn */
	IF(0x0C0A7E16u); T = (s32)r2 >= 0;  /* 0C0A7E16 cmp/pz Rn */
	if (!T) { UPD(0x0C0A7ED0u, 6); goto L_0C0A7ED0; }  /* 0C0A7E18 bf */
L_0C0A7E1A: BLKS(0x0C0A7E1Au);
	r3 = 0xA80000u; UPD(0x0C0A7E1Cu, 1);  /* 0C0A7E1A mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r3;  /* 0C0A7E1C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A7E40u, 4); goto L_0C0A7E40; } UPD(0x0C0A7E22u, 1); goto L_0C0A7E22; }  /* 0C0A7E1E bf/s */
L_0C0A7E22: BLKS(0x0C0A7E22u);
	W32(r13, r2); UPD(0x0C0A7E24u, 1);  /* 0C0A7E22 mov.l Rm,@Rn */
L_0C0A7E24: BLKS(0x0C0A7E24u);
	r14 += 0x4u;  /* 0C0A7E24 add #imm,Rn */
	UPD(0x0C0A7E26u, 1);
L_0C0A7E26: BLKS(0x0C0A7E26u);
	r15 = r14;  /* 0C0A7E26 mov Rm,Rn */
	IF(0x0C0A7E28u); PR = R32(r15); r15 += 4; UPD(0x0C0A7E2Au, 2);  /* 0C0A7E28 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7E2Cu, 1);  /* 0C0A7E2A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A7E2Eu, 1);  /* 0C0A7E2C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A7E30u, 1);  /* 0C0A7E2E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A7E32u, 1);  /* 0C0A7E30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A7E34u, 1);  /* 0C0A7E32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A7E36u, 1);  /* 0C0A7E34 mov.l @Rm+,Rn */
	IF(0x0C0A7E36u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A7E36 rts */
L_0C0A7E40: BLKS(0x0C0A7E40u);
	r8 = r13;  /* 0C0A7E40 mov Rm,Rn */
	r8 += 0x48u;  /* 0C0A7E42 add #imm,Rn */
	W32(r14, r8); UPD(0x0C0A7E46u, 3);  /* 0C0A7E44 mov.l Rm,@Rn */
	r3 = r13;  /* 0C0A7E46 mov Rm,Rn */
	r3 += 0x51u;  /* 0C0A7E48 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C0A7E4Cu, 3);  /* 0C0A7E4A mov.b @Rm,Rn */
	r0 = R32(r8); UPD(0x0C0A7E4Eu, 1);  /* 0C0A7E4C mov.l @Rm,Rn */
	r7 += 0x1u;  /* 0C0A7E4E add #imm,Rn */
	W8(r3, r7); UPD(0x0C0A7E52u, 2);  /* 0C0A7E50 mov.b Rm,@Rn */
	IF(0x0C0A7E52u); r0 >>= 16;  /* 0C0A7E52 shlr16 Rn */
	r6 = 0xC1E6B78u; UPD(0x0C0A7E56u, 2);  /* 0C0A7E54 mov.l @(disp,pc),Rn */
	r5 = r7 & 0xFF;  /* 0C0A7E56 extu.b Rm,Rn */
	IF(0x0C0A7E58u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0A7E5Au, 2);  /* 0C0A7E58 mov.b @(r0,Rm),Rn */
	T = (s32)r5 >= (s32)r4;  /* 0C0A7E5A cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C0A7E24u, 4); goto L_0C0A7E24; }  /* 0C0A7E5C bf */
L_0C0A7E5E: BLKS(0x0C0A7E5Eu);
	r13 += 0x44u;  /* 0C0A7E5E add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r13); UPD(0x0C0A7E62u, 2);  /* 0C0A7E60 mov.w @Rm,Rn */
	r2 = 0x0u;  /* 0C0A7E62 mov #imm,Rn */
	r13 += 0xFFFFFFBCu;  /* 0C0A7E64 add #imm,Rn */
	r4 = 0x100u; UPD(0x0C0A7E68u, 3);  /* 0C0A7E66 mov.w @(disp,pc),Rn */
	r9 = R32(r13 + 0x38u); UPD(0x0C0A7E6Au, 1);  /* 0C0A7E68 mov.l @(disp,Rm),Rn */
	r10 += r4;  /* 0C0A7E6A add Rm,Rn */
	r11 = 0xC058060u; UPD(0x0C0A7E6Eu, 2);  /* 0C0A7E6C mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r10;  /* 0C0A7E6E exts.w Rm,Rn */
	IF(0x0C0A7E70u); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C0A7E70 shar Rn */
	W8(r3, r2); UPD(0x0C0A7E74u, 3);  /* 0C0A7E72 mov.b Rm,@Rn */
	r4 = r12;  /* 0C0A7E74 mov Rm,Rn */
	IF(0x0C0A7E76u); { u32 t_ = r11; PR = 0x0C0A7E7Au; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A7E7Au); }  /* 0C0A7E76 jsr @Rn */
L_0C0A7E7A: BLKS(0x0C0A7E7Au);
	r5 = r9;  /* 0C0A7E7A mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0A7E7Eu, 2);  /* 0C0A7E7C mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0A7E7E mov Rm,Rn */
	r10 = R32(r13 + 0x28u); UPD(0x0C0A7E82u, 2);  /* 0C0A7E80 mov.l @(disp,Rm),Rn */
	r8 = 0xC050D70u; UPD(0x0C0A7E84u, 1);  /* 0C0A7E82 mov.l @(disp,pc),Rn */
	IF(0x0C0A7E84u); { u32 t_ = r9; PR = 0x0C0A7E88u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A7E88u); }  /* 0C0A7E84 jsr @Rn */
L_0C0A7E88: BLKS(0x0C0A7E88u);
	r9 = R32(r13 + 0x2Cu); UPD(0x0C0A7E8Au, 1);  /* 0C0A7E88 mov.l @(disp,Rm),Rn */
	r4 = 0x3Fu;  /* 0C0A7E8A mov #imm,Rn */
	IF(0x0C0A7E8Cu); { u32 t_ = r8; PR = 0x0C0A7E90u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A7E90u); }  /* 0C0A7E8C jsr @Rn */
L_0C0A7E90: BLKS(0x0C0A7E90u);
	r1 = R32(r14); UPD(0x0C0A7E92u, 1);  /* 0C0A7E90 mov.l @Rm,Rn */
	r0 += r12;  /* 0C0A7E92 add Rm,Rn */
	r8 = R32(r1); UPD(0x0C0A7E96u, 2);  /* 0C0A7E94 mov.l @Rm,Rn */
	r0 += 0xFFFFFFE0u;  /* 0C0A7E96 add #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0A7E98 exts.w Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C0A7E9A add #imm,Rn */
	r3 = 0x0u;  /* 0C0A7E9C mov #imm,Rn */
	IF(0x0C0A7E9Eu); r8 >>= 2;  /* 0C0A7E9E shlr2 Rn */
	r0 = 0x14u;  /* 0C0A7EA0 mov #imm,Rn */
	W32(r15, r3); UPD(0x0C0A7EA4u, 7);  /* 0C0A7EA2 mov.l Rm,@Rn */
	r4 = r12;  /* 0C0A7EA4 mov Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A7EA8u, 2);  /* 0C0A7EA6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A7EA8u); { u32 t_ = r11; PR = 0x0C0A7EACu; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A7EACu); }  /* 0C0A7EA8 jsr @Rn */
L_0C0A7EAC: BLKS(0x0C0A7EACu);
	r4 = r12;  /* 0C0A7EAC mov Rm,Rn */
	r12 = 0xC058030u; UPD(0x0C0A7EB0u, 2);  /* 0C0A7EAE mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C0A7EB0 mov Rm,Rn */
	r11 = 0x800080u; UPD(0x0C0A7EB4u, 2);  /* 0C0A7EB2 mov.l @(disp,pc),Rn */
	IF(0x0C0A7EB4u); { u32 t_ = r12; PR = 0x0C0A7EB8u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A7EB8u); }  /* 0C0A7EB4 jsr @Rn */
L_0C0A7EB8: BLKS(0x0C0A7EB8u);
	W32(r15 + 0xCu, r0); UPD(0x0C0A7EBAu, 1);  /* 0C0A7EB8 mov.l Rm,@(disp,Rn) */
	r5 = 0x0u;  /* 0C0A7EBA mov #imm,Rn */
	W32(r15 + 0x10u, r11); UPD(0x0C0A7EBEu, 2);  /* 0C0A7EBC mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C0A7EBE mov Rm,Rn */
	r4 = R32(r13); UPD(0x0C0A7EC2u, 2);  /* 0C0A7EC0 mov.l @Rm,Rn */
	r13 = 0xC0ACA40u; UPD(0x0C0A7EC4u, 1);  /* 0C0A7EC2 mov.l @(disp,pc),Rn */
	IF(0x0C0A7EC4u); { u32 t_ = r13; PR = 0x0C0A7EC8u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C0A7EC8u); }  /* 0C0A7EC4 jsr @Rn */
L_0C0A7EC8: BLKS(0x0C0A7EC8u);
	{ r15 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C0A7E24u, 3); goto L_0C0A7E24; }  /* 0C0A7EC8 bra */
L_0C0A7ED0: BLKS(0x0C0A7ED0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A7E1Au, 3); goto L_0C0A7E1A; }  /* 0C0A7ED0 bra */
L_0C0A7EE0: BLKS(0x0C0A7EE0u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C0A7E02u, 3); goto L_0C0A7E02; }  /* 0C0A7EE0 bra */
L_0C0A7EF0: BLKS(0x0C0A7EF0u);
	r13 = 0xC0A95D0u; UPD(0x0C0A7EF2u, 1);  /* 0C0A7EF0 mov.l @(disp,pc),Rn */
	IF(0x0C0A7EF2u); { u32 t_ = r13; PR = 0x0C0A7EF6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A95D0, 0x0C0A95D0u, 0x0C0A7EF6u); }  /* 0C0A7EF2 jsr @Rn */
L_0C0A7EF6: BLKS(0x0C0A7EF6u);
	IF(0x0C0A7EF6u); T = (s32)r0 >= 0;  /* 0C0A7EF6 cmp/pz Rn */
	{ u32 c_ = !T; r4 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A7F40u, 4); goto L_0C0A7F40; } goto L_0C0A7EFC; }  /* 0C0A7EF8 bf/s */
L_0C0A7EFC: BLKS(0x0C0A7EFCu);
	IF(0x0C0A7EFCu); MACL = r8 * r4;  /* 0C0A7EFC mul.l Rm,Rn */
	r3 = 0xC27E0FCu; UPD(0x0C0A7F00u, 4);  /* 0C0A7EFE mov.l @(disp,pc),Rn */
	IF(0x0C0A7F00u); r12 = MACL;  /* 0C0A7F00 sts macl,Rn */
	IF(0x0C0A7F02u); MACL = r0 * r4;  /* 0C0A7F02 mul.l Rm,Rn */
	r12 += r3;  /* 0C0A7F04 add Rm,Rn */
	r12 += 0x44u;  /* 0C0A7F06 add #imm,Rn */
	IF(0x0C0A7F08u); r9 = MACL;  /* 0C0A7F08 sts macl,Rn */
	r9 += r3;  /* 0C0A7F0A add Rm,Rn */
	r9 += 0x44u;  /* 0C0A7F0C add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r9); UPD(0x0C0A7F10u, 9);  /* 0C0A7F0E mov.w @Rm,Rn */
	W16(r12, r13); UPD(0x0C0A7F12u, 1);  /* 0C0A7F10 mov.w Rm,@Rn */
	r9 += 0xFFFFFFBCu;  /* 0C0A7F12 add #imm,Rn */
	r12 += 0xFFFFFFBCu;  /* 0C0A7F14 add #imm,Rn */
	r10 = 0xC058060u; UPD(0x0C0A7F18u, 3);  /* 0C0A7F16 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0A7F18 mov Rm,Rn */
	r8 = R32(r12 + 0x38u); UPD(0x0C0A7F1Cu, 2);  /* 0C0A7F1A mov.l @(disp,Rm),Rn */
	IF(0x0C0A7F1Cu); { u32 t_ = r10; PR = 0x0C0A7F20u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A7F20u); }  /* 0C0A7F1C jsr @Rn */
L_0C0A7F20: BLKS(0x0C0A7F20u);
	r7 = R32(r9 + 0x28u); UPD(0x0C0A7F22u, 1);  /* 0C0A7F20 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C0A7F22 mov Rm,Rn */
	r11 = 0xC058030u; UPD(0x0C0A7F26u, 2);  /* 0C0A7F24 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C0A7F26 add Rm,Rn */
	W32(r12 + 0x28u, r7); UPD(0x0C0A7F2Au, 2);  /* 0C0A7F28 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A7F2Au); { u32 t_ = r11; PR = 0x0C0A7F2Eu; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A7F2Eu); }  /* 0C0A7F2A jsr @Rn */
L_0C0A7F2E: BLKS(0x0C0A7F2Eu);
	r6 = R32(r9 + 0x2Cu); UPD(0x0C0A7F30u, 1);  /* 0C0A7F2E mov.l @(disp,Rm),Rn */
	r6 += r0;  /* 0C0A7F30 add Rm,Rn */
	W32(r12 + 0x2Cu, r6); UPD(0x0C0A7F34u, 2);  /* 0C0A7F32 mov.l Rm,@(disp,Rn) */
L_0C0A7F34: BLKS(0x0C0A7F34u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0A7E26u, 3); goto L_0C0A7E26; }  /* 0C0A7F34 bra */
L_0C0A7F40: BLKS(0x0C0A7F40u);
	r5 = 0xC0A96A0u; UPD(0x0C0A7F42u, 1);  /* 0C0A7F40 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0A7F42 mov Rm,Rn */
	r14 += 0x4u;  /* 0C0A7F44 add #imm,Rn */
	r15 = r14;  /* 0C0A7F46 mov Rm,Rn */
	IF(0x0C0A7F48u); PR = R32(r15); r15 += 4; UPD(0x0C0A7F4Au, 4);  /* 0C0A7F48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A7F4Cu, 1);  /* 0C0A7F4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A7F4Eu, 1);  /* 0C0A7F4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A7F50u, 1);  /* 0C0A7F4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A7F52u, 1);  /* 0C0A7F50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A7F54u, 1);  /* 0C0A7F52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A7F56u, 1);  /* 0C0A7F54 mov.l @Rm+,Rn */
	IF(0x0C0A7F56u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A96A0u: goto L_0C0A96A0; default: JUMPD(tv_); } }  /* 0C0A7F56 jmp @Rn */
L_0C0A7F60: BLKS(0x0C0A7F60u);
	r12 = 0x54u;  /* 0C0A7F60 mov #imm,Rn */
	IF(0x0C0A7F62u); MACL = r8 * r12;  /* 0C0A7F62 mul.l Rm,Rn */
	r5 = 0xC27E0FCu; UPD(0x0C0A7F66u, 4);  /* 0C0A7F64 mov.l @(disp,pc),Rn */
	IF(0x0C0A7F66u); r9 = MACL;  /* 0C0A7F66 sts macl,Rn */
	r9 += r5;  /* 0C0A7F68 add Rm,Rn */
	r0 = r9;  /* 0C0A7F6A mov Rm,Rn */
	r0 += 0x50u;  /* 0C0A7F6C add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0A7F70u, 5);  /* 0C0A7F6E mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C0A7F70 add #imm,Rn */
	W8(r0, r2); UPD(0x0C0A7F74u, 2);  /* 0C0A7F72 mov.b Rm,@Rn */
	r0 = r2 & 0xFF;  /* 0C0A7F74 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0A7F76 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0A7F34u, 5); goto L_0C0A7F34; }  /* 0C0A7F78 bf */
L_0C0A7F7A: BLKS(0x0C0A7F7Au);
	r4 = r8;  /* 0C0A7F7A mov Rm,Rn */
	r11 = 0xC0A7AB0u; UPD(0x0C0A7F7Eu, 2);  /* 0C0A7F7C mov.l @(disp,pc),Rn */
	r13 = R32(r9 + 0xCu); UPD(0x0C0A7F80u, 1);  /* 0C0A7F7E mov.l @(disp,Rm),Rn */
	IF(0x0C0A7F80u); { u32 t_ = r11; PR = 0x0C0A7F84u; W32(r9 + 0x8u, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A7AB0, 0x0C0A7AB0u, 0x0C0A7F84u); }  /* 0C0A7F80 jsr @Rn */
L_0C0A7F84: BLKS(0x0C0A7F84u);
	r6 = 0x0u;  /* 0C0A7F84 mov #imm,Rn */
	{ W32(r9 + 0x3Cu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0A7E24u, 4); goto L_0C0A7E24; }  /* 0C0A7F86 bra */
L_0C0A96A0: BLKS(0x0C0A96A0u);
	r2 = (u32)(s32)(s16)r4;  /* 0C0A96A0 exts.w Rm,Rn */
	r0 = 0x54u;  /* 0C0A96A2 mov #imm,Rn */
	IF(0x0C0A96A4u); MACL = r2 * r0;  /* 0C0A96A4 mul.l Rm,Rn */
	r6 = 0xC27E0FCu; UPD(0x0C0A96A8u, 5);  /* 0C0A96A6 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0A96A8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A96ACu, 2);  /* 0C0A96AA mov.l Rm,@-Rn */
	IF(0x0C0A96ACu); r0 = MACL;  /* 0C0A96AC sts macl,Rn */
	r0 += r6;  /* 0C0A96AE add Rm,Rn */
	W32(r0 + 0x8u, r4); UPD(0x0C0A96B2u, 3);  /* 0C0A96B0 mov.l Rm,@(disp,Rn) */
	r1 = 0x5u;  /* 0C0A96B2 mov #imm,Rn */
	r5 = 0x40000000u; UPD(0x0C0A96B6u, 2);  /* 0C0A96B4 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0A96B6 mov #imm,Rn */
	W32(r0, r5); UPD(0x0C0A96BAu, 2);  /* 0C0A96B8 mov.l Rm,@Rn */
	r14 = r15;  /* 0C0A96BA mov Rm,Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C0A96BEu, 2);  /* 0C0A96BC mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x10u, r4); UPD(0x0C0A96C0u, 1);  /* 0C0A96BE mov.l Rm,@(disp,Rn) */
	r7 = 0xC1E6ABCu; UPD(0x0C0A96C2u, 1);  /* 0C0A96C0 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x2Cu); UPD(0x0C0A96C4u, 1);  /* 0C0A96C2 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r3); UPD(0x0C0A96C6u, 1);  /* 0C0A96C4 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7 + 0x28u); UPD(0x0C0A96C8u, 1);  /* 0C0A96C6 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x14u, r6); UPD(0x0C0A96CAu, 1);  /* 0C0A96C8 mov.l Rm,@(disp,Rn) */
	r1 = R32(r6 + 0x20u); UPD(0x0C0A96CCu, 1);  /* 0C0A96CA mov.l @(disp,Rm),Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C0A96CEu, 1);  /* 0C0A96CC mov.l Rm,@(disp,Rn) */
	r5 = R32(r1); UPD(0x0C0A96D0u, 1);  /* 0C0A96CE mov.l @Rm,Rn */
	W32(r0 + 0x1Cu, r5); UPD(0x0C0A96D2u, 1);  /* 0C0A96D0 mov.l Rm,@(disp,Rn) */
	r7 = R32(r1 + 0x4u); UPD(0x0C0A96D4u, 1);  /* 0C0A96D2 mov.l @(disp,Rm),Rn */
	r6 = 0xC21F894u; UPD(0x0C0A96D6u, 1);  /* 0C0A96D4 mov.l @(disp,pc),Rn */
	W32(r0 + 0x20u, r7); UPD(0x0C0A96D8u, 1);  /* 0C0A96D6 mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A96DAu, 1);  /* 0C0A96D8 mov.w @Rm,Rn */
	r0 += 0x4Eu;  /* 0C0A96DA add #imm,Rn */
	W16(r0, r5); UPD(0x0C0A96DEu, 2);  /* 0C0A96DC mov.w Rm,@Rn */
	r0 += 0xFFFFFFF6u;  /* 0C0A96DE add #imm,Rn */
	W16(r0, r4); UPD(0x0C0A96E2u, 2);  /* 0C0A96E0 mov.w Rm,@Rn */
	r3 = 0x207C0C0u; UPD(0x0C0A96E4u, 1);  /* 0C0A96E2 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFBCu;  /* 0C0A96E4 add #imm,Rn */
	W32(r0 + 0x3Cu, r3); UPD(0x0C0A96E8u, 2);  /* 0C0A96E6 mov.l Rm,@(disp,Rn) */
	r1 = 0x808080u; UPD(0x0C0A96EAu, 1);  /* 0C0A96E8 mov.l @(disp,pc),Rn */
	r0 += 0x40u;  /* 0C0A96EA add #imm,Rn */
	W32(r0, r1); UPD(0x0C0A96EEu, 2);  /* 0C0A96EC mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A96EE mov Rm,Rn */
	IF(0x0C0A96F0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A96F0 rts */
}

void f_0C0A7FD0(sh3_t *c)
{
	LOCALS;
L_0C0A7FD0: BLKS(0x0C0A7FD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7FD2u, 1);  /* 0C0A7FD0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7FD4u, 1);  /* 0C0A7FD2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A7FD4 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7FD8u, 2);  /* 0C0A7FD6 mov.l Rm,@-Rn */
	r9 = 0x54u;  /* 0C0A7FD8 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7FDCu, 2);  /* 0C0A7FDA mov.l Rm,@-Rn */
	IF(0x0C0A7FDCu); MACL = r8 * r9;  /* 0C0A7FDC mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7FE0u, 3);  /* 0C0A7FDE mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7FE2u, 1);  /* 0C0A7FE0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A7FE4u, 1);  /* 0C0A7FE2 mov.l Rm,@-Rn */
	IF(0x0C0A7FE4u); r13 = MACL;  /* 0C0A7FE4 sts macl,Rn */
	r10 = 0xC27E0FCu; UPD(0x0C0A7FE8u, 2);  /* 0C0A7FE6 mov.l @(disp,pc),Rn */
	IF(0x0C0A7FE8u); r15 -= 4; W32(r15, PR); UPD(0x0C0A7FEAu, 1);  /* 0C0A7FE8 sts.l pr,@-Rn */
	r13 += r10;  /* 0C0A7FEA add Rm,Rn */
	r0 = R32(r13 + 0x8u); UPD(0x0C0A7FEEu, 2);  /* 0C0A7FEC mov.l @(disp,Rm),Rn */
	IF(0x0C0A7FEEu); T = (s32)r0 >= 0;  /* 0C0A7FEE cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A8002u, 4); goto L_0C0A8002; } goto L_0C0A7FF4; }  /* 0C0A7FF0 bf/s */
L_0C0A7FF4: BLKS(0x0C0A7FF4u);
	r2 = 0x2u;  /* 0C0A7FF4 mov #imm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C0A7FF6 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0A8000u, 6); goto L_0C0A8000; } goto L_0C0A7FFC; }  /* 0C0A7FF8 bt/s */
L_0C0A7FFC: BLKS(0x0C0A7FFCu);
	{ IF(0x0C0A7FFEu); ; /* slot nop */ UPD(0x0C0A8110u, 4); goto L_0C0A8110; }  /* 0C0A7FFC bra */
L_0C0A8000: BLKS(0x0C0A8000u);
	if (T) { UPD(0x0C0A8020u, 3); goto L_0C0A8020; }  /* 0C0A8000 bt */
L_0C0A8002: BLKS(0x0C0A8002u);
	r15 = r14;  /* 0C0A8002 mov Rm,Rn */
	IF(0x0C0A8004u); PR = R32(r15); r15 += 4; UPD(0x0C0A8006u, 2);  /* 0C0A8004 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A8008u, 1);  /* 0C0A8006 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A800Au, 1);  /* 0C0A8008 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A800Cu, 1);  /* 0C0A800A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A800Eu, 1);  /* 0C0A800C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A8010u, 1);  /* 0C0A800E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A8012u, 1);  /* 0C0A8010 mov.l @Rm+,Rn */
	IF(0x0C0A8012u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A8012 rts */
L_0C0A8020: BLKS(0x0C0A8020u);
	r0 = R32(r13 + 0x28u); UPD(0x0C0A8022u, 1);  /* 0C0A8020 mov.l @(disp,Rm),Rn */
	r3 = R32(r13 + 0x30u); UPD(0x0C0A8024u, 1);  /* 0C0A8022 mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C0A8024 add Rm,Rn */
	r3 = R32(r13 + 0x2Cu); UPD(0x0C0A8028u, 2);  /* 0C0A8026 mov.l @(disp,Rm),Rn */
	r1 = R32(r13 + 0x34u); UPD(0x0C0A802Au, 1);  /* 0C0A8028 mov.l @(disp,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0A802Cu, 1);  /* 0C0A802A mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C0A802C add Rm,Rn */
	r2 += r0;  /* 0C0A802E add Rm,Rn */
	W32(r13 + 0x28u, r0); UPD(0x0C0A8032u, 3);  /* 0C0A8030 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8032u); T = (s32)r2 >= 0;  /* 0C0A8032 cmp/pz Rn */
	{ u32 c_ = !T; W32(r13 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A8100u, 4); goto L_0C0A8100; } UPD(0x0C0A8038u, 1); goto L_0C0A8038; }  /* 0C0A8034 bf/s */
L_0C0A8038: BLKS(0x0C0A8038u);
	r4 = 0xE00000u; UPD(0x0C0A803Au, 1);  /* 0C0A8038 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0A803A cmp/gt Rm,Rn */
	{ u32 c_ = T; r8 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8058u, 4); goto L_0C0A8058; } goto L_0C0A8040; }  /* 0C0A803C bt/s */
L_0C0A8040: BLKS(0x0C0A8040u);
	r2 = 0xC3929E0u; UPD(0x0C0A8042u, 2);  /* 0C0A8040 mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C0A8044u, 1);  /* 0C0A8042 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C0A8046u, 1);  /* 0C0A8044 mov.l @(disp,pc),Rn */
	r2 = r3;  /* 0C0A8046 mov Rm,Rn */
	r2 -= r6;  /* 0C0A8048 sub Rm,Rn */
	r2 += r5;  /* 0C0A804A add Rm,Rn */
	IF(0x0C0A804Cu); T = (s32)r2 >= 0;  /* 0C0A804C cmp/pz Rn */
	if (!T) { UPD(0x0C0A80F0u, 7); goto L_0C0A80F0; }  /* 0C0A804E bf */
L_0C0A8050: BLKS(0x0C0A8050u);
	r7 = 0xB80000u; UPD(0x0C0A8052u, 1);  /* 0C0A8050 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C0A8052 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8060u, 4); goto L_0C0A8060; } UPD(0x0C0A8058u, 1); goto L_0C0A8058; }  /* 0C0A8054 bf/s */
L_0C0A8058: BLKS(0x0C0A8058u);
	{ W32(r13, r8); /* slot mov.l Rm,@Rn */ UPD(0x0C0A8002u, 3); goto L_0C0A8002; }  /* 0C0A8058 bra */
L_0C0A8060: BLKS(0x0C0A8060u);
	r3 = r13;  /* 0C0A8060 mov Rm,Rn */
	r3 += 0x51u;  /* 0C0A8062 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C0A8066u, 3);  /* 0C0A8064 mov.b @Rm,Rn */
	r11 = r13;  /* 0C0A8066 mov Rm,Rn */
	r11 += 0x48u;  /* 0C0A8068 add #imm,Rn */
	r4 += 0x1u;  /* 0C0A806A add #imm,Rn */
	r0 = R32(r11); UPD(0x0C0A806Eu, 4);  /* 0C0A806C mov.l @Rm,Rn */
	r10 = r4 & 0xFF;  /* 0C0A806E extu.b Rm,Rn */
	W8(r3, r4); UPD(0x0C0A8072u, 2);  /* 0C0A8070 mov.b Rm,@Rn */
	IF(0x0C0A8072u); r0 >>= 16;  /* 0C0A8072 shlr16 Rn */
	r12 = 0xC1E6B78u; UPD(0x0C0A8076u, 2);  /* 0C0A8074 mov.l @(disp,pc),Rn */
	IF(0x0C0A8076u); r9 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0A8078u, 1);  /* 0C0A8076 mov.b @(r0,Rm),Rn */
	T = (s32)r10 >= (s32)r9;  /* 0C0A8078 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C0A8002u, 4); goto L_0C0A8002; }  /* 0C0A807A bf */
L_0C0A807C: BLKS(0x0C0A807Cu);
	r13 += 0x44u;  /* 0C0A807C add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r13); UPD(0x0C0A8080u, 2);  /* 0C0A807E mov.w @Rm,Rn */
	r12 = 0x0u;  /* 0C0A8080 mov #imm,Rn */
	r1 = 0x100u; UPD(0x0C0A8084u, 2);  /* 0C0A8082 mov.w @(disp,pc),Rn */
	r13 += 0xFFFFFFBCu;  /* 0C0A8084 add #imm,Rn */
	W8(r3, r12); UPD(0x0C0A8088u, 2);  /* 0C0A8086 mov.b Rm,@Rn */
	r4 += r1;  /* 0C0A8088 add Rm,Rn */
	r9 = R32(r13 + 0x38u); UPD(0x0C0A808Cu, 2);  /* 0C0A808A mov.l @(disp,Rm),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0A808C exts.w Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C0A8090u, 2);  /* 0C0A808E mov.l @(disp,pc),Rn */
	IF(0x0C0A8090u); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C0A8090 shar Rn */
	r4 = r12;  /* 0C0A8092 mov Rm,Rn */
	IF(0x0C0A8094u); { u32 t_ = r10; PR = 0x0C0A8098u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A8098u); }  /* 0C0A8094 jsr @Rn */
L_0C0A8098: BLKS(0x0C0A8098u);
	r7 = 0xC058030u; UPD(0x0C0A809Au, 1);  /* 0C0A8098 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C0A809A mov Rm,Rn */
	r10 = R32(r13 + 0x28u); UPD(0x0C0A809Eu, 2);  /* 0C0A809C mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C0A809E mov Rm,Rn */
	r8 = 0xC050D70u; UPD(0x0C0A80A2u, 2);  /* 0C0A80A0 mov.l @(disp,pc),Rn */
	IF(0x0C0A80A2u); { u32 t_ = r7; PR = 0x0C0A80A6u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A80A6u); }  /* 0C0A80A2 jsr @Rn */
L_0C0A80A6: BLKS(0x0C0A80A6u);
	r9 = R32(r13 + 0x2Cu); UPD(0x0C0A80A8u, 1);  /* 0C0A80A6 mov.l @(disp,Rm),Rn */
	r4 = 0x3Fu;  /* 0C0A80A8 mov #imm,Rn */
	IF(0x0C0A80AAu); { u32 t_ = r8; PR = 0x0C0A80AEu; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A80AEu); }  /* 0C0A80AA jsr @Rn */
L_0C0A80AE: BLKS(0x0C0A80AEu);
	r8 = R32(r11); UPD(0x0C0A80B0u, 1);  /* 0C0A80AE mov.l @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C0A80B0 add #imm,Rn */
	r6 = 0xC058060u; UPD(0x0C0A80B4u, 2);  /* 0C0A80B2 mov.l @(disp,pc),Rn */
	r0 += r12;  /* 0C0A80B4 add Rm,Rn */
	r5 = 0x14u;  /* 0C0A80B6 mov #imm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0A80BAu, 3);  /* 0C0A80B8 mov.l Rm,@(disp,Rn) */
	r0 += 0xFFFFFFE0u;  /* 0C0A80BA add #imm,Rn */
	r2 = 0x0u;  /* 0C0A80BC mov #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0A80BE exts.w Rm,Rn */
	IF(0x0C0A80C0u); r8 >>= 2;  /* 0C0A80C0 shlr2 Rn */
	W32(r15, r2); UPD(0x0C0A80C4u, 5);  /* 0C0A80C2 mov.l Rm,@Rn */
	r4 = r12;  /* 0C0A80C4 mov Rm,Rn */
	IF(0x0C0A80C6u); { u32 t_ = r6; PR = 0x0C0A80CAu; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A80CAu); }  /* 0C0A80C6 jsr @Rn */
L_0C0A80CA: BLKS(0x0C0A80CAu);
	r3 = 0xC058030u; UPD(0x0C0A80CCu, 1);  /* 0C0A80CA mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0A80CC mov Rm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C0A80D0u, 2);  /* 0C0A80CE mov.l Rm,@(disp,Rn) */
	IF(0x0C0A80D0u); { u32 t_ = r3; PR = 0x0C0A80D4u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A80D4u); }  /* 0C0A80D0 jsr @Rn */
L_0C0A80D4: BLKS(0x0C0A80D4u);
	W32(r15 + 0xCu, r0); UPD(0x0C0A80D6u, 1);  /* 0C0A80D4 mov.l Rm,@(disp,Rn) */
	r5 = 0x0u;  /* 0C0A80D6 mov #imm,Rn */
	r0 = 0x8000u; UPD(0x0C0A80DAu, 2);  /* 0C0A80D8 mov.l @(disp,pc),Rn */
	r6 = r10;  /* 0C0A80DA mov Rm,Rn */
	r11 = 0xC0ACA40u; UPD(0x0C0A80DEu, 2);  /* 0C0A80DC mov.l @(disp,pc),Rn */
	r7 = r9;  /* 0C0A80DE mov Rm,Rn */
	W32(r15 + 0x10u, r0); UPD(0x0C0A80E2u, 2);  /* 0C0A80E0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A80E2u); { u32 t_ = r11; PR = 0x0C0A80E6u; r4 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C0A80E6u); }  /* 0C0A80E2 jsr @Rn */
L_0C0A80E6: BLKS(0x0C0A80E6u);
	{ r15 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C0A8002u, 3); goto L_0C0A8002; }  /* 0C0A80E6 bra */
L_0C0A80F0: BLKS(0x0C0A80F0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A8050u, 3); goto L_0C0A8050; }  /* 0C0A80F0 bra */
L_0C0A8100: BLKS(0x0C0A8100u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A8038u, 3); goto L_0C0A8038; }  /* 0C0A8100 bra */
L_0C0A8110: BLKS(0x0C0A8110u);
	r11 = 0xC0A95D0u; UPD(0x0C0A8112u, 1);  /* 0C0A8110 mov.l @(disp,pc),Rn */
	IF(0x0C0A8112u); { u32 t_ = r11; PR = 0x0C0A8116u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A95D0, 0x0C0A95D0u, 0x0C0A8116u); }  /* 0C0A8112 jsr @Rn */
L_0C0A8116: BLKS(0x0C0A8116u);
	IF(0x0C0A8116u); T = (s32)r0 >= 0;  /* 0C0A8116 cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C0A811Au); MACL = r0 * r9; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C0A8150u, 5); goto L_0C0A8150; } goto L_0C0A811C; }  /* 0C0A8118 bf/s */
L_0C0A811C: BLKS(0x0C0A811Cu);
	r13 += 0x44u;  /* 0C0A811C add #imm,Rn */
	r8 = 0xC058030u; UPD(0x0C0A8120u, 4);  /* 0C0A811E mov.l @(disp,pc),Rn */
	IF(0x0C0A8120u); r12 = MACL;  /* 0C0A8120 sts macl,Rn */
	r12 += r10;  /* 0C0A8122 add Rm,Rn */
	r12 += 0x44u;  /* 0C0A8124 add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r12); UPD(0x0C0A8128u, 4);  /* 0C0A8126 mov.w @Rm,Rn */
	W16(r13, r10); UPD(0x0C0A812Au, 1);  /* 0C0A8128 mov.w Rm,@Rn */
	r12 += 0xFFFFFFBCu;  /* 0C0A812A add #imm,Rn */
	r13 += 0xFFFFFFBCu;  /* 0C0A812C add #imm,Rn */
	r9 = 0xC058060u; UPD(0x0C0A8130u, 3);  /* 0C0A812E mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0A8130 mov Rm,Rn */
	r11 = R32(r13 + 0x38u); UPD(0x0C0A8134u, 2);  /* 0C0A8132 mov.l @(disp,Rm),Rn */
	IF(0x0C0A8134u); { u32 t_ = r9; PR = 0x0C0A8138u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A8138u); }  /* 0C0A8134 jsr @Rn */
L_0C0A8138: BLKS(0x0C0A8138u);
	r6 = R32(r12 + 0x28u); UPD(0x0C0A813Au, 1);  /* 0C0A8138 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0A813A mov Rm,Rn */
	r6 += r0;  /* 0C0A813C add Rm,Rn */
	W32(r13 + 0x28u, r6); UPD(0x0C0A8140u, 3);  /* 0C0A813E mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8140u); { u32 t_ = r8; PR = 0x0C0A8144u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A8144u); }  /* 0C0A8140 jsr @Rn */
L_0C0A8144: BLKS(0x0C0A8144u);
	r3 = R32(r12 + 0x2Cu); UPD(0x0C0A8146u, 1);  /* 0C0A8144 mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C0A8146 add Rm,Rn */
	{ W32(r13 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0A8002u, 4); goto L_0C0A8002; }  /* 0C0A8148 bra */
L_0C0A8150: BLKS(0x0C0A8150u);
	r0 = 0xC0A96A0u; UPD(0x0C0A8152u, 1);  /* 0C0A8150 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0A8152 mov Rm,Rn */
	r15 = r14;  /* 0C0A8154 mov Rm,Rn */
	IF(0x0C0A8156u); PR = R32(r15); r15 += 4; UPD(0x0C0A8158u, 3);  /* 0C0A8156 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A815Au, 1);  /* 0C0A8158 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A815Cu, 1);  /* 0C0A815A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A815Eu, 1);  /* 0C0A815C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A8160u, 1);  /* 0C0A815E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A8162u, 1);  /* 0C0A8160 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A8164u, 1);  /* 0C0A8162 mov.l @Rm+,Rn */
	IF(0x0C0A8164u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A96A0u: goto L_0C0A96A0; default: JUMPD(tv_); } }  /* 0C0A8164 jmp @Rn */
L_0C0A96A0: BLKS(0x0C0A96A0u);
	r2 = (u32)(s32)(s16)r4;  /* 0C0A96A0 exts.w Rm,Rn */
	r0 = 0x54u;  /* 0C0A96A2 mov #imm,Rn */
	IF(0x0C0A96A4u); MACL = r2 * r0;  /* 0C0A96A4 mul.l Rm,Rn */
	r6 = 0xC27E0FCu; UPD(0x0C0A96A8u, 5);  /* 0C0A96A6 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0A96A8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A96ACu, 2);  /* 0C0A96AA mov.l Rm,@-Rn */
	IF(0x0C0A96ACu); r0 = MACL;  /* 0C0A96AC sts macl,Rn */
	r0 += r6;  /* 0C0A96AE add Rm,Rn */
	W32(r0 + 0x8u, r4); UPD(0x0C0A96B2u, 3);  /* 0C0A96B0 mov.l Rm,@(disp,Rn) */
	r1 = 0x5u;  /* 0C0A96B2 mov #imm,Rn */
	r5 = 0x40000000u; UPD(0x0C0A96B6u, 2);  /* 0C0A96B4 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0A96B6 mov #imm,Rn */
	W32(r0, r5); UPD(0x0C0A96BAu, 2);  /* 0C0A96B8 mov.l Rm,@Rn */
	r14 = r15;  /* 0C0A96BA mov Rm,Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C0A96BEu, 2);  /* 0C0A96BC mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x10u, r4); UPD(0x0C0A96C0u, 1);  /* 0C0A96BE mov.l Rm,@(disp,Rn) */
	r7 = 0xC1E6ABCu; UPD(0x0C0A96C2u, 1);  /* 0C0A96C0 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x2Cu); UPD(0x0C0A96C4u, 1);  /* 0C0A96C2 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r3); UPD(0x0C0A96C6u, 1);  /* 0C0A96C4 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7 + 0x28u); UPD(0x0C0A96C8u, 1);  /* 0C0A96C6 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x14u, r6); UPD(0x0C0A96CAu, 1);  /* 0C0A96C8 mov.l Rm,@(disp,Rn) */
	r1 = R32(r6 + 0x20u); UPD(0x0C0A96CCu, 1);  /* 0C0A96CA mov.l @(disp,Rm),Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C0A96CEu, 1);  /* 0C0A96CC mov.l Rm,@(disp,Rn) */
	r5 = R32(r1); UPD(0x0C0A96D0u, 1);  /* 0C0A96CE mov.l @Rm,Rn */
	W32(r0 + 0x1Cu, r5); UPD(0x0C0A96D2u, 1);  /* 0C0A96D0 mov.l Rm,@(disp,Rn) */
	r7 = R32(r1 + 0x4u); UPD(0x0C0A96D4u, 1);  /* 0C0A96D2 mov.l @(disp,Rm),Rn */
	r6 = 0xC21F894u; UPD(0x0C0A96D6u, 1);  /* 0C0A96D4 mov.l @(disp,pc),Rn */
	W32(r0 + 0x20u, r7); UPD(0x0C0A96D8u, 1);  /* 0C0A96D6 mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0A96DAu, 1);  /* 0C0A96D8 mov.w @Rm,Rn */
	r0 += 0x4Eu;  /* 0C0A96DA add #imm,Rn */
	W16(r0, r5); UPD(0x0C0A96DEu, 2);  /* 0C0A96DC mov.w Rm,@Rn */
	r0 += 0xFFFFFFF6u;  /* 0C0A96DE add #imm,Rn */
	W16(r0, r4); UPD(0x0C0A96E2u, 2);  /* 0C0A96E0 mov.w Rm,@Rn */
	r3 = 0x207C0C0u; UPD(0x0C0A96E4u, 1);  /* 0C0A96E2 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFBCu;  /* 0C0A96E4 add #imm,Rn */
	W32(r0 + 0x3Cu, r3); UPD(0x0C0A96E8u, 2);  /* 0C0A96E6 mov.l Rm,@(disp,Rn) */
	r1 = 0x808080u; UPD(0x0C0A96EAu, 1);  /* 0C0A96E8 mov.l @(disp,pc),Rn */
	r0 += 0x40u;  /* 0C0A96EA add #imm,Rn */
	W32(r0, r1); UPD(0x0C0A96EEu, 2);  /* 0C0A96EC mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A96EE mov Rm,Rn */
	IF(0x0C0A96F0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0A96F0 rts */
}

/* FUN_0c0a81b0 */
void f_0C0A81B0(sh3_t *c)
{
	LOCALS;
L_0C0A81B0: BLKS(0x0C0A81B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A81B2u, 1);  /* 0C0A81B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A81B4u, 1);  /* 0C0A81B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A81B6u, 1);  /* 0C0A81B4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r7;  /* 0C0A81B6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A81BAu, 2);  /* 0C0A81B8 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C0A81BA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A81BEu, 2);  /* 0C0A81BC mov.l Rm,@-Rn */
	r11 = r5;  /* 0C0A81BE mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A81C2u, 2);  /* 0C0A81C0 mov.l Rm,@-Rn */
	r12 = r6;  /* 0C0A81C2 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A81C6u, 2);  /* 0C0A81C4 mov.l Rm,@-Rn */
	r2 = 0xFF580000u; UPD(0x0C0A81C8u, 1);  /* 0C0A81C6 mov.l @(disp,pc),Rn */
	IF(0x0C0A81C8u); r15 -= 4; W32(r15, PR); UPD(0x0C0A81CAu, 1);  /* 0C0A81C8 sts.l pr,@-Rn */
	r2 += r5;  /* 0C0A81CA add Rm,Rn */
	IF(0x0C0A81CCu); T = (s32)r2 >= 0;  /* 0C0A81CC cmp/pz Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0A81D6u, 5); goto L_0C0A81D6; } goto L_0C0A81D2; }  /* 0C0A81CE bt/s */
L_0C0A81D2: BLKS(0x0C0A81D2u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A82F0u, 4); goto L_0C0A82F0; }  /* 0C0A81D2 bra */
L_0C0A81D6: BLKS(0x0C0A81D6u);
	r0 = 0x980000u; UPD(0x0C0A81D8u, 1);  /* 0C0A81D6 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0A81D8 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A81F8u, 4); goto L_0C0A81F8; } goto L_0C0A81DE; }  /* 0C0A81DA bt/s */
L_0C0A81DE: BLKS(0x0C0A81DEu);
	r2 = 0xC3929E0u; UPD(0x0C0A81E0u, 2);  /* 0C0A81DE mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C0A81E2u, 1);  /* 0C0A81E0 mov.l @Rm,Rn */
	r0 = 0xFF880000u; UPD(0x0C0A81E4u, 1);  /* 0C0A81E2 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0A81E4 mov Rm,Rn */
	r2 -= r3;  /* 0C0A81E6 sub Rm,Rn */
	r2 += r0;  /* 0C0A81E8 add Rm,Rn */
	IF(0x0C0A81EAu); T = (s32)r2 >= 0;  /* 0C0A81EA cmp/pz Rn */
	if (T) { UPD(0x0C0A81F0u, 7); goto L_0C0A81F0; }  /* 0C0A81EC bt */
L_0C0A81EE: BLKS(0x0C0A81EEu);
	r2 = 0u - r2;  /* 0C0A81EE neg Rm,Rn */
	UPD(0x0C0A81F0u, 1);
L_0C0A81F0: BLKS(0x0C0A81F0u);
	r4 = 0x700000u; UPD(0x0C0A81F2u, 1);  /* 0C0A81F0 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0A81F2 cmp/gt Rm,Rn */
	IF(0x0C0A81F4u); r0 = T;  /* 0C0A81F4 movt Rn */
	r0 ^= 0x1u;  /* 0C0A81F6 xor #imm,r0 */
	UPD(0x0C0A81F8u, 3);
L_0C0A81F8: BLKS(0x0C0A81F8u);
	r5 = (u32)(s32)(s8)r0;  /* 0C0A81F8 exts.b Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0A81FA tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8220u, 5); goto L_0C0A8220; } UPD(0x0C0A8200u, 1); goto L_0C0A8200; }  /* 0C0A81FC bf/s */
L_0C0A8200: BLKS(0x0C0A8200u);
	r15 = r14;  /* 0C0A8200 mov Rm,Rn */
	IF(0x0C0A8202u); PR = R32(r15); r15 += 4; UPD(0x0C0A8204u, 2);  /* 0C0A8202 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A8206u, 1);  /* 0C0A8204 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A8208u, 1);  /* 0C0A8206 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A820Au, 1);  /* 0C0A8208 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A820Cu, 1);  /* 0C0A820A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A820Eu, 1);  /* 0C0A820C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A8210u, 1);  /* 0C0A820E mov.l @Rm+,Rn */
	IF(0x0C0A8210u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A8210 rts */
L_0C0A8220: BLKS(0x0C0A8220u);
	r8 = 0xC060720u; UPD(0x0C0A8222u, 1);  /* 0C0A8220 mov.l @(disp,pc),Rn */
	IF(0x0C0A8222u); { u32 t_ = r8; PR = 0x0C0A8226u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060720, 0x0C060720u, 0x0C0A8226u); }  /* 0C0A8222 jsr @Rn */
L_0C0A8226: BLKS(0x0C0A8226u);
	T = (r0 & r0) == 0;  /* 0C0A8226 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8200u, 4); goto L_0C0A8200; } goto L_0C0A822C; }  /* 0C0A8228 bt/s */
L_0C0A822C: BLKS(0x0C0A822Cu);
	r6 = 0x4u;  /* 0C0A822C mov #imm,Rn */
	T = (s32)r10 > (s32)r6;  /* 0C0A822E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0A82E0u, 6); goto L_0C0A82E0; }  /* 0C0A8230 bt */
L_0C0A8232: BLKS(0x0C0A8232u);
	r13 = 0xC050D70u; UPD(0x0C0A8234u, 1);  /* 0C0A8232 mov.l @(disp,pc),Rn */
L_0C0A8234: BLKS(0x0C0A8234u);
	r2 = 0xC2755BCu; UPD(0x0C0A8236u, 1);  /* 0C0A8234 mov.l @(disp,pc),Rn */
	r8 = 0x54u;  /* 0C0A8236 mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C0A823Au, 2);  /* 0C0A8238 mov.w @Rm,Rn */
	IF(0x0C0A823Au); MACL = r5 * r8;  /* 0C0A823A mul.l Rm,Rn */
	r3 = 0xC27E0FCu; UPD(0x0C0A823Eu, 3);  /* 0C0A823C mov.l @(disp,pc),Rn */
	IF(0x0C0A823Eu); r8 = MACL;  /* 0C0A823E sts macl,Rn */
	r7 = 0xD1000000u; UPD(0x0C0A8242u, 2);  /* 0C0A8240 mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C0A8242 add Rm,Rn */
	W32(r8, r7); UPD(0x0C0A8246u, 2);  /* 0C0A8244 mov.l Rm,@Rn */
	r4 = 0xC1D9A58u; UPD(0x0C0A8248u, 1);  /* 0C0A8246 mov.l @(disp,pc),Rn */
	r0 = R32(r4); UPD(0x0C0A824Au, 1);  /* 0C0A8248 mov.l @Rm,Rn */
	r4 = 0x4u;  /* 0C0A824A mov #imm,Rn */
	IF(0x0C0A824Cu); { u32 t_ = r13; PR = 0x0C0A8250u; W32(r8 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A8250u); }  /* 0C0A824C jsr @Rn */
L_0C0A8250: BLKS(0x0C0A8250u);
	r0 += 0x5u;  /* 0C0A8250 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0A8254u, 2);  /* 0C0A8252 mov.l Rm,@(disp,Rn) */
	r6 = 0x3Fu;  /* 0C0A8254 mov #imm,Rn */
	W32(r8 + 0xCu, r10); UPD(0x0C0A8258u, 2);  /* 0C0A8256 mov.l Rm,@(disp,Rn) */
	r5 = 0x3u;  /* 0C0A8258 mov #imm,Rn */
	r8 += 0x44u;  /* 0C0A825A add #imm,Rn */
	W16(r8, r9); UPD(0x0C0A825Eu, 3);  /* 0C0A825C mov.w Rm,@Rn */
	r1 = 0x4u;  /* 0C0A825E mov #imm,Rn */
	r9 += 0x4u;  /* 0C0A8260 add #imm,Rn */
	r4 = r9;  /* 0C0A8262 mov Rm,Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0A8264 add #imm,Rn */
	IF(0x0C0A8266u); T = r4 & 1; r4 = (u32)((s32)r4 >> 1);  /* 0C0A8266 shar Rn */
	r13 = R32(r8 + 0x4u); UPD(0x0C0A826Au, 6);  /* 0C0A8268 mov.l @(disp,Rm),Rn */
	IF(0x0C0A826Au); T = r4 & 1; r4 = (u32)((s32)r4 >> 1);  /* 0C0A826A shar Rn */
	IF(0x0C0A826Cu); T = r4 & 1; r4 = (u32)((s32)r4 >> 1);  /* 0C0A826C shar Rn */
	r4 &= r6;  /* 0C0A826E and Rm,Rn */
	IF(0x0C0A8270u); ARG0(0x4D5Du); { s32 s_ = (s32)r5; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C0A8270 shld Rm,Rn */
	r2 = 0xC1E6ABCu; UPD(0x0C0A8274u, 5);  /* 0C0A8272 mov.l @(disp,pc),Rn */
	IF(0x0C0A8274u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0A8274 shld Rm,Rn */
	W32(r8 + 0x10u, r4); UPD(0x0C0A8278u, 2);  /* 0C0A8276 mov.l Rm,@(disp,Rn) */
	r13 += r2;  /* 0C0A8278 add Rm,Rn */
	r3 = R32(r13 + 0x4u); UPD(0x0C0A827Cu, 2);  /* 0C0A827A mov.l @(disp,Rm),Rn */
	r7 = 0x3u;  /* 0C0A827C mov #imm,Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C0A8280u, 2);  /* 0C0A827E mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8280u); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0A8280 shld Rm,Rn */
	r10 = R32(r13); UPD(0x0C0A8284u, 2);  /* 0C0A8282 mov.l @Rm,Rn */
	r9 += 0xFFFFFFFCu;  /* 0C0A8284 add #imm,Rn */
	W32(r8 + 0x14u, r10); UPD(0x0C0A8288u, 2);  /* 0C0A8286 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8288u); r6 = R32(r0 + r10); UPD(0x0C0A828Au, 1);  /* 0C0A8288 mov.l @(r0,Rm),Rn */
	W32(r8 + 0x18u, r6); UPD(0x0C0A828Cu, 1);  /* 0C0A828A mov.l Rm,@(disp,Rn) */
	r4 += r6;  /* 0C0A828C add Rm,Rn */
	r5 = R32(r4); UPD(0x0C0A8290u, 2);  /* 0C0A828E mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r5); UPD(0x0C0A8292u, 1);  /* 0C0A8290 mov.l Rm,@(disp,Rn) */
	r2 = R32(r4 + 0x4u); UPD(0x0C0A8294u, 1);  /* 0C0A8292 mov.l @(disp,Rm),Rn */
	r3 = 0xC21F894u; UPD(0x0C0A8296u, 1);  /* 0C0A8294 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0A8296 mov Rm,Rn */
	W32(r8 + 0x20u, r2); UPD(0x0C0A829Au, 2);  /* 0C0A8298 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A829Cu, 1);  /* 0C0A829A mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0A829C add #imm,Rn */
	W16(r8, r0); UPD(0x0C0A82A0u, 2);  /* 0C0A829E mov.w Rm,@Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0A82A0 add #imm,Rn */
	W32(r8 + 0x2Cu, r12); UPD(0x0C0A82A4u, 2);  /* 0C0A82A2 mov.l Rm,@(disp,Rn) */
	r13 = 0xC058060u; UPD(0x0C0A82A6u, 1);  /* 0C0A82A4 mov.l @(disp,pc),Rn */
	r12 = 0xC058030u; UPD(0x0C0A82A8u, 1);  /* 0C0A82A6 mov.l @(disp,pc),Rn */
	r5 = R32(r14 + 0x20u); UPD(0x0C0A82AAu, 1);  /* 0C0A82A8 mov.l @(disp,Rm),Rn */
	IF(0x0C0A82AAu); { u32 t_ = r13; PR = 0x0C0A82AEu; W32(r8 + 0x28u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A82AEu); }  /* 0C0A82AA jsr @Rn */
L_0C0A82AE: BLKS(0x0C0A82AEu);
	r4 = r9;  /* 0C0A82AE mov Rm,Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C0A82B2u, 2);  /* 0C0A82B0 mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C0A82B2 mov #imm,Rn */
	IF(0x0C0A82B4u); { u32 t_ = r12; PR = 0x0C0A82B8u; r5 = R32(r14 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A82B8u); }  /* 0C0A82B4 jsr @Rn */
L_0C0A82B8: BLKS(0x0C0A82B8u);
	W32(r8 + 0x34u, r0); UPD(0x0C0A82BAu, 1);  /* 0C0A82B8 mov.l Rm,@(disp,Rn) */
	r4 = 0x69u;  /* 0C0A82BA mov #imm,Rn */
	r8 += 0x50u;  /* 0C0A82BC add #imm,Rn */
	W8(r8, r11); UPD(0x0C0A82C0u, 3);  /* 0C0A82BE mov.b Rm,@Rn */
	r10 = 0x207C0C0u; UPD(0x0C0A82C2u, 1);  /* 0C0A82C0 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0A82C2 add #imm,Rn */
	W32(r8 + 0x3Cu, r10); UPD(0x0C0A82C6u, 2);  /* 0C0A82C4 mov.l Rm,@(disp,Rn) */
	r9 = 0xC0AFC10u; UPD(0x0C0A82C8u, 1);  /* 0C0A82C6 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0A82C8 add #imm,Rn */
	r7 = 0x808080u; UPD(0x0C0A82CCu, 2);  /* 0C0A82CA mov.l @(disp,pc),Rn */
	IF(0x0C0A82CCu); { u32 t_ = r9; PR = 0x0C0A82D0u; W32(r8, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0A82D0u); }  /* 0C0A82CC jsr @Rn */
L_0C0A82D0: BLKS(0x0C0A82D0u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A8200u, 3); goto L_0C0A8200; }  /* 0C0A82D0 bra */
L_0C0A82E0: BLKS(0x0C0A82E0u);
	r13 = 0xC050D70u; UPD(0x0C0A82E2u, 1);  /* 0C0A82E0 mov.l @(disp,pc),Rn */
	IF(0x0C0A82E2u); { u32 t_ = r13; PR = 0x0C0A82E6u; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A82E6u); }  /* 0C0A82E2 jsr @Rn */
L_0C0A82E6: BLKS(0x0C0A82E6u);
	{ r10 = r0; /* slot mov Rm,Rn */ UPD(0x0C0A8234u, 3); goto L_0C0A8234; }  /* 0C0A82E6 bra */
L_0C0A82F0: BLKS(0x0C0A82F0u);
	{ IF(0x0C0A82F2u); ; /* slot nop */ UPD(0x0C0A81D6u, 3); goto L_0C0A81D6; }  /* 0C0A82F0 bra */
}

/* FUN_0c0a8340 */
void f_0C0A8340(sh3_t *c)
{
	LOCALS;
L_0C0A8340: BLKS(0x0C0A8340u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8342u, 1);  /* 0C0A8340 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s16)r7;  /* 0C0A8342 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8346u, 2);  /* 0C0A8344 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8348u, 1);  /* 0C0A8346 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A834Au, 1);  /* 0C0A8348 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A834Cu, 1);  /* 0C0A834A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A834Eu, 1);  /* 0C0A834C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8350u, 1);  /* 0C0A834E mov.l Rm,@-Rn */
	r13 = r4;  /* 0C0A8350 mov Rm,Rn */
	IF(0x0C0A8352u); r15 -= 4; W32(r15, PR); UPD(0x0C0A8354u, 2);  /* 0C0A8352 sts.l pr,@-Rn */
	r2 = 0xFF580000u; UPD(0x0C0A8356u, 1);  /* 0C0A8354 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0A8356 add #imm,Rn */
	r14 = r15;  /* 0C0A8358 mov Rm,Rn */
	r2 += r5;  /* 0C0A835A add Rm,Rn */
	W32(r14, r5); UPD(0x0C0A835Eu, 4);  /* 0C0A835C mov.l Rm,@Rn */
	IF(0x0C0A835Eu); T = (s32)r2 >= 0;  /* 0C0A835E cmp/pz Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0A8362u, 2);  /* 0C0A8360 mov.l Rm,@(disp,Rn) */
	r10 = R32(r14 + 0x34u); UPD(0x0C0A8364u, 1);  /* 0C0A8362 mov.l @(disp,Rm),Rn */
	{ u32 c_ = T; W32(r14 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A836Cu, 3); goto L_0C0A836C; } UPD(0x0C0A8368u, 1); goto L_0C0A8368; }  /* 0C0A8364 bt/s */
L_0C0A8368: BLKS(0x0C0A8368u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A84B0u, 3); goto L_0C0A84B0; }  /* 0C0A8368 bra */
L_0C0A836C: BLKS(0x0C0A836Cu);
	r0 = 0x980000u; UPD(0x0C0A836Eu, 1);  /* 0C0A836C mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0A836E cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A838Eu, 4); goto L_0C0A838E; } goto L_0C0A8374; }  /* 0C0A8370 bt/s */
L_0C0A8374: BLKS(0x0C0A8374u);
	r2 = 0xC3929E0u; UPD(0x0C0A8376u, 2);  /* 0C0A8374 mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C0A8378u, 1);  /* 0C0A8376 mov.l @Rm,Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0A837Au, 1);  /* 0C0A8378 mov.l @(disp,Rm),Rn */
	r3 = 0xFF880000u; UPD(0x0C0A837Cu, 1);  /* 0C0A837A mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C0A837C sub Rm,Rn */
	r2 += r3;  /* 0C0A837E add Rm,Rn */
	IF(0x0C0A8380u); T = (s32)r2 >= 0;  /* 0C0A8380 cmp/pz Rn */
	if (T) { UPD(0x0C0A8386u, 6); goto L_0C0A8386; }  /* 0C0A8382 bt */
L_0C0A8384: BLKS(0x0C0A8384u);
	r2 = 0u - r2;  /* 0C0A8384 neg Rm,Rn */
	UPD(0x0C0A8386u, 1);
L_0C0A8386: BLKS(0x0C0A8386u);
	r5 = 0x700000u; UPD(0x0C0A8388u, 1);  /* 0C0A8386 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C0A8388 cmp/gt Rm,Rn */
	IF(0x0C0A838Au); r0 = T;  /* 0C0A838A movt Rn */
	r0 ^= 0x1u;  /* 0C0A838C xor #imm,r0 */
	UPD(0x0C0A838Eu, 3);
L_0C0A838E: BLKS(0x0C0A838Eu);
	r6 = (u32)(s32)(s8)r0;  /* 0C0A838E exts.b Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0A8390 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A83B0u, 5); goto L_0C0A83B0; } UPD(0x0C0A8396u, 1); goto L_0C0A8396; }  /* 0C0A8392 bf/s */
L_0C0A8396: BLKS(0x0C0A8396u);
	r14 += 0x10u;  /* 0C0A8396 add #imm,Rn */
	r15 = r14;  /* 0C0A8398 mov Rm,Rn */
	IF(0x0C0A839Au); PR = R32(r15); r15 += 4; UPD(0x0C0A839Cu, 3);  /* 0C0A839A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A839Eu, 1);  /* 0C0A839C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A83A0u, 1);  /* 0C0A839E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A83A2u, 1);  /* 0C0A83A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A83A4u, 1);  /* 0C0A83A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A83A6u, 1);  /* 0C0A83A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A83A8u, 1);  /* 0C0A83A6 mov.l @Rm+,Rn */
	IF(0x0C0A83A8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A83A8 rts */
L_0C0A83B0: BLKS(0x0C0A83B0u);
	r8 = 0xC060720u; UPD(0x0C0A83B2u, 1);  /* 0C0A83B0 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r12 = v_; } UPD(0x0C0A83B4u, 1);  /* 0C0A83B2 mov.w @Rm+,Rn */
	IF(0x0C0A83B4u); { u32 t_ = r8; PR = 0x0C0A83B8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060720, 0x0C060720u, 0x0C0A83B8u); }  /* 0C0A83B4 jsr @Rn */
L_0C0A83B8: BLKS(0x0C0A83B8u);
	T = (r0 & r0) == 0;  /* 0C0A83B8 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8396u, 4); goto L_0C0A8396; } goto L_0C0A83BE; }  /* 0C0A83BA bt/s */
L_0C0A83BE: BLKS(0x0C0A83BEu);
	r7 = 0x4u;  /* 0C0A83BE mov #imm,Rn */
	T = (s32)r13 > (s32)r7;  /* 0C0A83C0 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0A84A0u, 6); goto L_0C0A84A0; }  /* 0C0A83C2 bt */
L_0C0A83C4: BLKS(0x0C0A83C4u);
	r11 = 0xC2755BCu; UPD(0x0C0A83C6u, 1);  /* 0C0A83C4 mov.l @(disp,pc),Rn */
	W32(r14 + 0xCu, r11); UPD(0x0C0A83C8u, 1);  /* 0C0A83C6 mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C0A83C8 mov #imm,Rn */
	T = (s32)r11 >= (s32)r12;  /* 0C0A83CA cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0A8488u, 5); goto L_0C0A8488; }  /* 0C0A83CC bt */
L_0C0A83CE: BLKS(0x0C0A83CEu);
	IF(0x0C0A83CEu); ;  /* 0C0A83CE nop */
	UPD(0x0C0A83D0u, 1);
L_0C0A83D0: BLKS(0x0C0A83D0u);
	r1 = R32(r14 + 0xCu); UPD(0x0C0A83D2u, 1);  /* 0C0A83D0 mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0A83D2 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r0 = v_; } UPD(0x0C0A83D6u, 2);  /* 0C0A83D4 mov.w @Rm+,Rn */
	IF(0x0C0A83D6u); MACL = r0 * r8;  /* 0C0A83D6 mul.l Rm,Rn */
	r7 = 0xC27E0FCu; UPD(0x0C0A83DAu, 3);  /* 0C0A83D8 mov.l @(disp,pc),Rn */
	IF(0x0C0A83DAu); r8 = MACL;  /* 0C0A83DA sts macl,Rn */
	r6 = 0xD1000000u; UPD(0x0C0A83DEu, 2);  /* 0C0A83DC mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C0A83DE add Rm,Rn */
	W32(r8, r6); UPD(0x0C0A83E2u, 2);  /* 0C0A83E0 mov.l Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r3 = v_; } UPD(0x0C0A83E4u, 1);  /* 0C0A83E2 mov.w @Rm+,Rn */
	r5 = 0xC27DC50u; UPD(0x0C0A83E6u, 1);  /* 0C0A83E4 mov.l @(disp,pc),Rn */
	r9 = R32(r14 + 0x8u); UPD(0x0C0A83E8u, 1);  /* 0C0A83E6 mov.l @(disp,Rm),Rn */
	r4 = 0x1FFu; UPD(0x0C0A83EAu, 1);  /* 0C0A83E8 mov.w @(disp,pc),Rn */
	r9 += r3;  /* 0C0A83EA add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C0A83EEu, 2);  /* 0C0A83EC mov.b @Rm,Rn */
	r9 &= r4;  /* 0C0A83EE and Rm,Rn */
	r4 = r2 & 0xFF;  /* 0C0A83F0 extu.b Rm,Rn */
	r3 = 0xC1D9A58u; UPD(0x0C0A83F4u, 3);  /* 0C0A83F2 mov.l @(disp,pc),Rn */
	IF(0x0C0A83F4u); r4 <<= 2;  /* 0C0A83F4 shll2 Rn */
	r4 += r3;  /* 0C0A83F6 add Rm,Rn */
	r0 = R32(r4 + 0x4u); UPD(0x0C0A83FAu, 3);  /* 0C0A83F8 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C0A83FCu, 1);  /* 0C0A83FA mov.l Rm,@(disp,Rn) */
	r4 = 0x4u;  /* 0C0A83FC mov #imm,Rn */
	r0 = 0xC050D70u; UPD(0x0C0A8400u, 2);  /* 0C0A83FE mov.l @(disp,pc),Rn */
	IF(0x0C0A8400u); { u32 t_ = r0; PR = 0x0C0A8404u; W32(r14 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A8404u); }  /* 0C0A8400 jsr @Rn */
L_0C0A8404: BLKS(0x0C0A8404u);
	r0 += 0x5u;  /* 0C0A8404 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0A8408u, 2);  /* 0C0A8406 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0A8408 mov Rm,Rn */
	W32(r8 + 0xCu, r13); UPD(0x0C0A840Cu, 2);  /* 0C0A840A mov.l Rm,@(disp,Rn) */
	r4 += 0x4u;  /* 0C0A840C add #imm,Rn */
	r8 += 0x44u;  /* 0C0A840E add #imm,Rn */
	W16(r8, r9); UPD(0x0C0A8412u, 3);  /* 0C0A8410 mov.w Rm,@Rn */
	IF(0x0C0A8412u); r4 >>= 2;  /* 0C0A8412 shlr2 Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0A8414 add #imm,Rn */
	r3 = R32(r8 + 0x4u); UPD(0x0C0A8418u, 3);  /* 0C0A8416 mov.l @(disp,Rm),Rn */
	IF(0x0C0A8418u); T = r4 & 1; r4 >>= 1;  /* 0C0A8418 shlr Rn */
	r7 = 0x3Fu;  /* 0C0A841A mov #imm,Rn */
	r6 = 0x3u;  /* 0C0A841C mov #imm,Rn */
	r4 &= r7;  /* 0C0A841E and Rm,Rn */
	IF(0x0C0A8420u); ARG0(0x436Du); { s32 s_ = (s32)r6; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C0A8420 shld Rm,Rn */
	r5 = 0xC1E6ABCu; UPD(0x0C0A8424u, 6);  /* 0C0A8422 mov.l @(disp,pc),Rn */
	r1 = 0x4u;  /* 0C0A8424 mov #imm,Rn */
	W32(r8 + 0x10u, r4); UPD(0x0C0A8428u, 2);  /* 0C0A8426 mov.l Rm,@(disp,Rn) */
	r3 += r5;  /* 0C0A8428 add Rm,Rn */
	r2 = R32(r3 + 0x4u); UPD(0x0C0A842Cu, 2);  /* 0C0A842A mov.l @(disp,Rm),Rn */
	IF(0x0C0A842Cu); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0A842C shld Rm,Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0A8430u, 2);  /* 0C0A842E mov.l Rm,@(disp,Rn) */
	r6 = 0x3u;  /* 0C0A8430 mov #imm,Rn */
	r7 = R32(r3); UPD(0x0C0A8434u, 2);  /* 0C0A8432 mov.l @Rm,Rn */
	IF(0x0C0A8434u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0A8434 shld Rm,Rn */
	W32(r8 + 0x14u, r7); UPD(0x0C0A8438u, 2);  /* 0C0A8436 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8438u); r5 = R32(r0 + r7); UPD(0x0C0A843Au, 1);  /* 0C0A8438 mov.l @(r0,Rm),Rn */
	W32(r8 + 0x18u, r5); UPD(0x0C0A843Cu, 1);  /* 0C0A843A mov.l Rm,@(disp,Rn) */
	r4 += r5;  /* 0C0A843C add Rm,Rn */
	r3 = R32(r4); UPD(0x0C0A8440u, 2);  /* 0C0A843E mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r3); UPD(0x0C0A8442u, 1);  /* 0C0A8440 mov.l Rm,@(disp,Rn) */
	r0 = R32(r4 + 0x4u); UPD(0x0C0A8444u, 1);  /* 0C0A8442 mov.l @(disp,Rm),Rn */
	r7 = 0xC21F894u; UPD(0x0C0A8446u, 1);  /* 0C0A8444 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0A8446 mov Rm,Rn */
	W32(r8 + 0x20u, r0); UPD(0x0C0A844Au, 2);  /* 0C0A8448 mov.l Rm,@(disp,Rn) */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0A844Cu, 1);  /* 0C0A844A mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0A844C add #imm,Rn */
	W16(r8, r6); UPD(0x0C0A8450u, 2);  /* 0C0A844E mov.w Rm,@Rn */
	r5 = R32(r14); UPD(0x0C0A8452u, 1);  /* 0C0A8450 mov.l @Rm,Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0A8452 add #imm,Rn */
	r0 = 0xC058060u; UPD(0x0C0A8456u, 2);  /* 0C0A8454 mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C0A8458u, 1);  /* 0C0A8456 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x4u); UPD(0x0C0A845Au, 1);  /* 0C0A8458 mov.l @(disp,Rm),Rn */
	r5 = R32(r14 + 0x30u); UPD(0x0C0A845Cu, 1);  /* 0C0A845A mov.l @(disp,Rm),Rn */
	IF(0x0C0A845Cu); { u32 t_ = r0; PR = 0x0C0A8460u; W32(r8 + 0x2Cu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A8460u); }  /* 0C0A845C jsr @Rn */
L_0C0A8460: BLKS(0x0C0A8460u);
	r4 = r9;  /* 0C0A8460 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0A8464u, 2);  /* 0C0A8462 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C0A8466u, 1);  /* 0C0A8464 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8466u); { u32 t_ = r9; PR = 0x0C0A846Au; r5 = R32(r14 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A846Au); }  /* 0C0A8466 jsr @Rn */
L_0C0A846A: BLKS(0x0C0A846Au);
	W32(r8 + 0x34u, r0); UPD(0x0C0A846Cu, 1);  /* 0C0A846A mov.l Rm,@(disp,Rn) */
	r2 = 0x0u;  /* 0C0A846C mov #imm,Rn */
	r8 += 0x50u;  /* 0C0A846E add #imm,Rn */
	W8(r8, r2); UPD(0x0C0A8472u, 3);  /* 0C0A8470 mov.b Rm,@Rn */
	r0 = r11;  /* 0C0A8472 mov Rm,Rn */
	r4 = 0x207C0C0u; UPD(0x0C0A8476u, 2);  /* 0C0A8474 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0A8476 add #imm,Rn */
	W32(r8 + 0x3Cu, r4); UPD(0x0C0A847Au, 2);  /* 0C0A8478 mov.l Rm,@(disp,Rn) */
	r0 += 0x1u;  /* 0C0A847A add #imm,Rn */
	r3 = 0x808080u; UPD(0x0C0A847Eu, 2);  /* 0C0A847C mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0A847E add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C0A8480 exts.w Rm,Rn */
	T = (s32)r11 >= (s32)r12;  /* 0C0A8482 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r8, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0A83D0u, 6); goto L_0C0A83D0; } UPD(0x0C0A8488u, 1); goto L_0C0A8488; }  /* 0C0A8484 bf/s */
L_0C0A8488: BLKS(0x0C0A8488u);
	r10 = 0xC0AFC10u; UPD(0x0C0A848Au, 1);  /* 0C0A8488 mov.l @(disp,pc),Rn */
	IF(0x0C0A848Au); { u32 t_ = r10; PR = 0x0C0A848Eu; r4 = 0x69u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0A848Eu); }  /* 0C0A848A jsr @Rn */
L_0C0A848E: BLKS(0x0C0A848Eu);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A8396u, 3); goto L_0C0A8396; }  /* 0C0A848E bra */
L_0C0A84A0: BLKS(0x0C0A84A0u);
	r9 = 0xC050D70u; UPD(0x0C0A84A2u, 1);  /* 0C0A84A0 mov.l @(disp,pc),Rn */
	IF(0x0C0A84A2u); { u32 t_ = r9; PR = 0x0C0A84A6u; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A84A6u); }  /* 0C0A84A2 jsr @Rn */
L_0C0A84A6: BLKS(0x0C0A84A6u);
	{ r13 = r0; /* slot mov Rm,Rn */ UPD(0x0C0A83C4u, 3); goto L_0C0A83C4; }  /* 0C0A84A6 bra */
L_0C0A84B0: BLKS(0x0C0A84B0u);
	{ IF(0x0C0A84B2u); ; /* slot nop */ UPD(0x0C0A836Cu, 3); goto L_0C0A836C; }  /* 0C0A84B0 bra */
}

/* FUN_0c0a8510 */
void f_0C0A8510(sh3_t *c)
{
	LOCALS;
L_0C0A8510: BLKS(0x0C0A8510u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8512u, 1);  /* 0C0A8510 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8514u, 1);  /* 0C0A8512 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8516u, 1);  /* 0C0A8514 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8518u, 1);  /* 0C0A8516 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C0A8518 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A851Cu, 2);  /* 0C0A851A mov.l Rm,@-Rn */
	r11 = r4;  /* 0C0A851C mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8520u, 2);  /* 0C0A851E mov.l Rm,@-Rn */
	r12 = r5;  /* 0C0A8520 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8524u, 2);  /* 0C0A8522 mov.l Rm,@-Rn */
	r13 = r6;  /* 0C0A8524 mov Rm,Rn */
	IF(0x0C0A8526u); r15 -= 4; W32(r15, PR); UPD(0x0C0A8528u, 2);  /* 0C0A8526 sts.l pr,@-Rn */
	r2 = 0xFF580000u; UPD(0x0C0A852Au, 1);  /* 0C0A8528 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0A852A mov Rm,Rn */
	r2 += r5;  /* 0C0A852C add Rm,Rn */
	IF(0x0C0A852Eu); T = (s32)r2 >= 0;  /* 0C0A852E cmp/pz Rn */
	{ u32 c_ = T; r9 = R32(r14 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0A8538u, 6); goto L_0C0A8538; } UPD(0x0C0A8534u, 1); goto L_0C0A8534; }  /* 0C0A8530 bt/s */
L_0C0A8534: BLKS(0x0C0A8534u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A8640u, 3); goto L_0C0A8640; }  /* 0C0A8534 bra */
L_0C0A8538: BLKS(0x0C0A8538u);
	r0 = 0x980000u; UPD(0x0C0A853Au, 1);  /* 0C0A8538 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0A853A cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A855Au, 4); goto L_0C0A855A; } goto L_0C0A8540; }  /* 0C0A853C bt/s */
L_0C0A8540: BLKS(0x0C0A8540u);
	r2 = 0xC3929E0u; UPD(0x0C0A8542u, 2);  /* 0C0A8540 mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C0A8544u, 1);  /* 0C0A8542 mov.l @Rm,Rn */
	r0 = 0xFF880000u; UPD(0x0C0A8546u, 1);  /* 0C0A8544 mov.l @(disp,pc),Rn */
	r2 = r13;  /* 0C0A8546 mov Rm,Rn */
	r2 -= r3;  /* 0C0A8548 sub Rm,Rn */
	r2 += r0;  /* 0C0A854A add Rm,Rn */
	IF(0x0C0A854Cu); T = (s32)r2 >= 0;  /* 0C0A854C cmp/pz Rn */
	if (T) { UPD(0x0C0A8552u, 7); goto L_0C0A8552; }  /* 0C0A854E bt */
L_0C0A8550: BLKS(0x0C0A8550u);
	r2 = 0u - r2;  /* 0C0A8550 neg Rm,Rn */
	UPD(0x0C0A8552u, 1);
L_0C0A8552: BLKS(0x0C0A8552u);
	r4 = 0x700000u; UPD(0x0C0A8554u, 1);  /* 0C0A8552 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0A8554 cmp/gt Rm,Rn */
	IF(0x0C0A8556u); r0 = T;  /* 0C0A8556 movt Rn */
	r0 ^= 0x1u;  /* 0C0A8558 xor #imm,r0 */
	UPD(0x0C0A855Au, 3);
L_0C0A855A: BLKS(0x0C0A855Au);
	r5 = (u32)(s32)(s8)r0;  /* 0C0A855A exts.b Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0A855C tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8580u, 5); goto L_0C0A8580; } UPD(0x0C0A8562u, 1); goto L_0C0A8562; }  /* 0C0A855E bf/s */
L_0C0A8562: BLKS(0x0C0A8562u);
	r15 = r14;  /* 0C0A8562 mov Rm,Rn */
	IF(0x0C0A8564u); PR = R32(r15); r15 += 4; UPD(0x0C0A8566u, 2);  /* 0C0A8564 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A8568u, 1);  /* 0C0A8566 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A856Au, 1);  /* 0C0A8568 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A856Cu, 1);  /* 0C0A856A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A856Eu, 1);  /* 0C0A856C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A8570u, 1);  /* 0C0A856E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A8572u, 1);  /* 0C0A8570 mov.l @Rm+,Rn */
	IF(0x0C0A8572u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A8572 rts */
L_0C0A8580: BLKS(0x0C0A8580u);
	r8 = 0xC060720u; UPD(0x0C0A8582u, 1);  /* 0C0A8580 mov.l @(disp,pc),Rn */
	IF(0x0C0A8582u); { u32 t_ = r8; PR = 0x0C0A8586u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060720, 0x0C060720u, 0x0C0A8586u); }  /* 0C0A8582 jsr @Rn */
L_0C0A8586: BLKS(0x0C0A8586u);
	T = (r0 & r0) == 0;  /* 0C0A8586 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8562u, 4); goto L_0C0A8562; } goto L_0C0A858C; }  /* 0C0A8588 bt/s */
L_0C0A858C: BLKS(0x0C0A858Cu);
	r6 = 0x6u;  /* 0C0A858C mov #imm,Rn */
	T = (s32)r11 > (s32)r6;  /* 0C0A858E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0A8630u, 6); goto L_0C0A8630; }  /* 0C0A8590 bt */
L_0C0A8592: BLKS(0x0C0A8592u);
	r5 = 0xC2755BCu; UPD(0x0C0A8594u, 1);  /* 0C0A8592 mov.l @(disp,pc),Rn */
	r8 = 0x54u;  /* 0C0A8594 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C0A8598u, 2);  /* 0C0A8596 mov.w @Rm,Rn */
	IF(0x0C0A8598u); MACL = r4 * r8;  /* 0C0A8598 mul.l Rm,Rn */
	r2 = 0xC27E0FCu; UPD(0x0C0A859Cu, 3);  /* 0C0A859A mov.l @(disp,pc),Rn */
	IF(0x0C0A859Cu); r8 = MACL;  /* 0C0A859C sts macl,Rn */
	r3 = 0xD1000000u; UPD(0x0C0A85A0u, 2);  /* 0C0A859E mov.l @(disp,pc),Rn */
	r8 += r2;  /* 0C0A85A0 add Rm,Rn */
	W32(r8, r3); UPD(0x0C0A85A4u, 2);  /* 0C0A85A2 mov.l Rm,@Rn */
	r4 = 0x4u;  /* 0C0A85A4 mov #imm,Rn */
	r7 = 0xC1D9A94u; UPD(0x0C0A85A8u, 2);  /* 0C0A85A6 mov.l @(disp,pc),Rn */
	r1 = 0xC050D70u; UPD(0x0C0A85AAu, 1);  /* 0C0A85A8 mov.l @(disp,pc),Rn */
	r0 = R32(r7); UPD(0x0C0A85ACu, 1);  /* 0C0A85AA mov.l @Rm,Rn */
	IF(0x0C0A85ACu); { u32 t_ = r1; PR = 0x0C0A85B0u; W32(r8 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A85B0u); }  /* 0C0A85AC jsr @Rn */
L_0C0A85B0: BLKS(0x0C0A85B0u);
	r0 += 0x7u;  /* 0C0A85B0 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0A85B4u, 2);  /* 0C0A85B2 mov.l Rm,@(disp,Rn) */
	r5 = 0x3u;  /* 0C0A85B4 mov #imm,Rn */
	W32(r8 + 0xCu, r11); UPD(0x0C0A85B8u, 2);  /* 0C0A85B6 mov.l Rm,@(disp,Rn) */
	r6 = 0x0u;  /* 0C0A85B8 mov #imm,Rn */
	r8 += 0x44u;  /* 0C0A85BA add #imm,Rn */
	W16(r8, r10); UPD(0x0C0A85BEu, 3);  /* 0C0A85BC mov.w Rm,@Rn */
	r7 = 0x4u;  /* 0C0A85BE mov #imm,Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0A85C0 add #imm,Rn */
	r3 = R32(r8 + 0x4u); UPD(0x0C0A85C4u, 3);  /* 0C0A85C2 mov.l @(disp,Rm),Rn */
	IF(0x0C0A85C4u); ARG0(0x407Du); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0A85C4 shld Rm,Rn */
	IF(0x0C0A85C6u); ARG0(0x435Du); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C0A85C6 shld Rm,Rn */
	r4 = 0xC1E6ABCu; UPD(0x0C0A85CAu, 3);  /* 0C0A85C8 mov.l @(disp,pc),Rn */
	W32(r8 + 0x10u, r6); UPD(0x0C0A85CCu, 1);  /* 0C0A85CA mov.l Rm,@(disp,Rn) */
	r3 += r4;  /* 0C0A85CC add Rm,Rn */
	r2 = R32(r3 + 0x4u); UPD(0x0C0A85D0u, 2);  /* 0C0A85CE mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0A85D2u, 1);  /* 0C0A85D0 mov.l Rm,@(disp,Rn) */
	r6 = R32(r3); UPD(0x0C0A85D4u, 1);  /* 0C0A85D2 mov.l @Rm,Rn */
	W32(r8 + 0x14u, r6); UPD(0x0C0A85D6u, 1);  /* 0C0A85D4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A85D6u); r4 = R32(r0 + r6); UPD(0x0C0A85D8u, 1);  /* 0C0A85D6 mov.l @(r0,Rm),Rn */
	W32(r8 + 0x18u, r4); UPD(0x0C0A85DAu, 1);  /* 0C0A85D8 mov.l Rm,@(disp,Rn) */
	r5 = R32(r4); UPD(0x0C0A85DCu, 1);  /* 0C0A85DA mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r5); UPD(0x0C0A85DEu, 1);  /* 0C0A85DC mov.l Rm,@(disp,Rn) */
	r2 = R32(r4 + 0x4u); UPD(0x0C0A85E0u, 1);  /* 0C0A85DE mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C0A85E0 mov Rm,Rn */
	r3 = 0xC21F894u; UPD(0x0C0A85E4u, 2);  /* 0C0A85E2 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0A85E4 mov Rm,Rn */
	W32(r8 + 0x20u, r2); UPD(0x0C0A85E8u, 2);  /* 0C0A85E6 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A85EAu, 1);  /* 0C0A85E8 mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0A85EA add #imm,Rn */
	W16(r8, r0); UPD(0x0C0A85EEu, 2);  /* 0C0A85EC mov.w Rm,@Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0A85EE add #imm,Rn */
	W32(r8 + 0x28u, r12); UPD(0x0C0A85F2u, 2);  /* 0C0A85F0 mov.l Rm,@(disp,Rn) */
	r12 = 0xC058060u; UPD(0x0C0A85F4u, 1);  /* 0C0A85F2 mov.l @(disp,pc),Rn */
	IF(0x0C0A85F4u); { u32 t_ = r12; PR = 0x0C0A85F8u; W32(r8 + 0x2Cu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A85F8u); }  /* 0C0A85F4 jsr @Rn */
L_0C0A85F8: BLKS(0x0C0A85F8u);
	r4 = r10;  /* 0C0A85F8 mov Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C0A85FCu, 2);  /* 0C0A85FA mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C0A85FC mov Rm,Rn */
	IF(0x0C0A85FEu); { u32 t_ = r10; PR = 0x0C0A8602u; W32(r8 + 0x30u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A8602u); }  /* 0C0A85FE jsr @Rn */
L_0C0A8602: BLKS(0x0C0A8602u);
	W32(r8 + 0x34u, r0); UPD(0x0C0A8604u, 1);  /* 0C0A8602 mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C0A8604 mov #imm,Rn */
	r8 += 0x48u;  /* 0C0A8606 add #imm,Rn */
	W32(r8, r9); UPD(0x0C0A860Au, 3);  /* 0C0A8608 mov.l Rm,@Rn */
	r8 += 0x8u;  /* 0C0A860A add #imm,Rn */
	W8(r8, r1); UPD(0x0C0A860Eu, 2);  /* 0C0A860C mov.b Rm,@Rn */
	r13 = 0x207C0C0u; UPD(0x0C0A8610u, 1);  /* 0C0A860E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0A8610 add #imm,Rn */
	W32(r8 + 0x3Cu, r13); UPD(0x0C0A8614u, 2);  /* 0C0A8612 mov.l Rm,@(disp,Rn) */
	r12 = 0x808080u; UPD(0x0C0A8616u, 1);  /* 0C0A8614 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0A8616 add #imm,Rn */
	r10 = 0xC1E6B8Cu; UPD(0x0C0A861Au, 2);  /* 0C0A8618 mov.l @(disp,pc),Rn */
	r9 = 0xC0AFC10u; UPD(0x0C0A861Cu, 1);  /* 0C0A861A mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C0A861C mov Rm,Rn */
	W32(r8, r12); UPD(0x0C0A8620u, 2);  /* 0C0A861E mov.l Rm,@Rn */
	IF(0x0C0A8620u); { u32 t_ = r9; PR = 0x0C0A8624u; IF(0x0C0A8622u); r4 = (u32)(s32)(s8)R8(r0 + r11); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0A8624u); }  /* 0C0A8620 jsr @Rn */
L_0C0A8624: BLKS(0x0C0A8624u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A8562u, 3); goto L_0C0A8562; }  /* 0C0A8624 bra */
L_0C0A8630: BLKS(0x0C0A8630u);
	r7 = 0xC050D70u; UPD(0x0C0A8632u, 1);  /* 0C0A8630 mov.l @(disp,pc),Rn */
	IF(0x0C0A8632u); { u32 t_ = r7; PR = 0x0C0A8636u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A8636u); }  /* 0C0A8632 jsr @Rn */
L_0C0A8636: BLKS(0x0C0A8636u);
	{ r11 = r0; /* slot mov Rm,Rn */ UPD(0x0C0A8592u, 3); goto L_0C0A8592; }  /* 0C0A8636 bra */
L_0C0A8640: BLKS(0x0C0A8640u);
	{ IF(0x0C0A8642u); ; /* slot nop */ UPD(0x0C0A8538u, 3); goto L_0C0A8538; }  /* 0C0A8640 bra */
}

/* FUN_0c0a8690 */
void f_0C0A8690(sh3_t *c)
{
	LOCALS;
L_0C0A8690: BLKS(0x0C0A8690u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8692u, 1);  /* 0C0A8690 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s16)r7;  /* 0C0A8692 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8696u, 2);  /* 0C0A8694 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8698u, 1);  /* 0C0A8696 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A869Au, 1);  /* 0C0A8698 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A869Cu, 1);  /* 0C0A869A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A869Eu, 1);  /* 0C0A869C mov.l Rm,@-Rn */
	r12 = r4;  /* 0C0A869E mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A86A2u, 2);  /* 0C0A86A0 mov.l Rm,@-Rn */
	IF(0x0C0A86A2u); r15 -= 4; W32(r15, PR); UPD(0x0C0A86A4u, 1);  /* 0C0A86A2 sts.l pr,@-Rn */
	r2 = 0xFF580000u; UPD(0x0C0A86A6u, 1);  /* 0C0A86A4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0A86A6 add #imm,Rn */
	r14 = r15;  /* 0C0A86A8 mov Rm,Rn */
	r2 += r5;  /* 0C0A86AA add Rm,Rn */
	W32(r14, r5); UPD(0x0C0A86AEu, 4);  /* 0C0A86AC mov.l Rm,@Rn */
	IF(0x0C0A86AEu); T = (s32)r2 >= 0;  /* 0C0A86AE cmp/pz Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0A86B2u, 2);  /* 0C0A86B0 mov.l Rm,@(disp,Rn) */
	r10 = R32(r14 + 0x34u); UPD(0x0C0A86B4u, 1);  /* 0C0A86B2 mov.l @(disp,Rm),Rn */
	{ u32 c_ = T; W32(r14 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A86BCu, 3); goto L_0C0A86BC; } UPD(0x0C0A86B8u, 1); goto L_0C0A86B8; }  /* 0C0A86B4 bt/s */
L_0C0A86B8: BLKS(0x0C0A86B8u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A87F0u, 3); goto L_0C0A87F0; }  /* 0C0A86B8 bra */
L_0C0A86BC: BLKS(0x0C0A86BCu);
	r0 = 0x980000u; UPD(0x0C0A86BEu, 1);  /* 0C0A86BC mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0A86BE cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A86DEu, 4); goto L_0C0A86DE; } goto L_0C0A86C4; }  /* 0C0A86C0 bt/s */
L_0C0A86C4: BLKS(0x0C0A86C4u);
	r2 = 0xC3929E0u; UPD(0x0C0A86C6u, 2);  /* 0C0A86C4 mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C0A86C8u, 1);  /* 0C0A86C6 mov.l @Rm,Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0A86CAu, 1);  /* 0C0A86C8 mov.l @(disp,Rm),Rn */
	r3 = 0xFF880000u; UPD(0x0C0A86CCu, 1);  /* 0C0A86CA mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C0A86CC sub Rm,Rn */
	r2 += r3;  /* 0C0A86CE add Rm,Rn */
	IF(0x0C0A86D0u); T = (s32)r2 >= 0;  /* 0C0A86D0 cmp/pz Rn */
	if (T) { UPD(0x0C0A86D6u, 6); goto L_0C0A86D6; }  /* 0C0A86D2 bt */
L_0C0A86D4: BLKS(0x0C0A86D4u);
	r2 = 0u - r2;  /* 0C0A86D4 neg Rm,Rn */
	UPD(0x0C0A86D6u, 1);
L_0C0A86D6: BLKS(0x0C0A86D6u);
	r5 = 0x700000u; UPD(0x0C0A86D8u, 1);  /* 0C0A86D6 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C0A86D8 cmp/gt Rm,Rn */
	IF(0x0C0A86DAu); r0 = T;  /* 0C0A86DA movt Rn */
	r0 ^= 0x1u;  /* 0C0A86DC xor #imm,r0 */
	UPD(0x0C0A86DEu, 3);
L_0C0A86DE: BLKS(0x0C0A86DEu);
	r6 = (u32)(s32)(s8)r0;  /* 0C0A86DE exts.b Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0A86E0 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8700u, 5); goto L_0C0A8700; } UPD(0x0C0A86E6u, 1); goto L_0C0A86E6; }  /* 0C0A86E2 bf/s */
L_0C0A86E6: BLKS(0x0C0A86E6u);
	r14 += 0x10u;  /* 0C0A86E6 add #imm,Rn */
	r15 = r14;  /* 0C0A86E8 mov Rm,Rn */
	IF(0x0C0A86EAu); PR = R32(r15); r15 += 4; UPD(0x0C0A86ECu, 3);  /* 0C0A86EA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A86EEu, 1);  /* 0C0A86EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A86F0u, 1);  /* 0C0A86EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A86F2u, 1);  /* 0C0A86F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A86F4u, 1);  /* 0C0A86F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A86F6u, 1);  /* 0C0A86F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A86F8u, 1);  /* 0C0A86F6 mov.l @Rm+,Rn */
	IF(0x0C0A86F8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A86F8 rts */
L_0C0A8700: BLKS(0x0C0A8700u);
	r8 = 0xC060720u; UPD(0x0C0A8702u, 1);  /* 0C0A8700 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r13 = v_; } UPD(0x0C0A8704u, 1);  /* 0C0A8702 mov.w @Rm+,Rn */
	IF(0x0C0A8704u); { u32 t_ = r8; PR = 0x0C0A8708u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060720, 0x0C060720u, 0x0C0A8708u); }  /* 0C0A8704 jsr @Rn */
L_0C0A8708: BLKS(0x0C0A8708u);
	T = (r0 & r0) == 0;  /* 0C0A8708 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A86E6u, 4); goto L_0C0A86E6; } goto L_0C0A870E; }  /* 0C0A870A bt/s */
L_0C0A870E: BLKS(0x0C0A870Eu);
	r7 = 0x6u;  /* 0C0A870E mov #imm,Rn */
	T = (s32)r12 > (s32)r7;  /* 0C0A8710 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0A87E0u, 6); goto L_0C0A87E0; }  /* 0C0A8712 bt */
L_0C0A8714: BLKS(0x0C0A8714u);
	r1 = 0xC2755BCu; UPD(0x0C0A8716u, 1);  /* 0C0A8714 mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C0A8716 mov #imm,Rn */
	T = (s32)r11 >= (s32)r13;  /* 0C0A8718 cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A87CCu, 5); goto L_0C0A87CC; } UPD(0x0C0A871Eu, 1); goto L_0C0A871E; }  /* 0C0A871A bt/s */
L_0C0A871E: BLKS(0x0C0A871Eu);
	IF(0x0C0A871Eu); ;  /* 0C0A871E nop */
	UPD(0x0C0A8720u, 1);
L_0C0A8720: BLKS(0x0C0A8720u);
	r1 = R32(r14 + 0xCu); UPD(0x0C0A8722u, 1);  /* 0C0A8720 mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0A8722 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r0 = v_; } UPD(0x0C0A8726u, 2);  /* 0C0A8724 mov.w @Rm+,Rn */
	IF(0x0C0A8726u); MACL = r0 * r8;  /* 0C0A8726 mul.l Rm,Rn */
	r6 = 0xC27E0FCu; UPD(0x0C0A872Au, 3);  /* 0C0A8728 mov.l @(disp,pc),Rn */
	IF(0x0C0A872Au); r8 = MACL;  /* 0C0A872A sts macl,Rn */
	r5 = 0xD1000000u; UPD(0x0C0A872Eu, 2);  /* 0C0A872C mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C0A872E add Rm,Rn */
	W32(r8, r5); UPD(0x0C0A8732u, 2);  /* 0C0A8730 mov.l Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r9 = v_; } UPD(0x0C0A8734u, 1);  /* 0C0A8732 mov.w @Rm+,Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C0A8736u, 1);  /* 0C0A8734 mov.l @(disp,Rm),Rn */
	r4 = 0xC27DC50u; UPD(0x0C0A8738u, 1);  /* 0C0A8736 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C0A8738 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C0A873Cu, 2);  /* 0C0A873A mov.b @Rm,Rn */
	r9 = (u32)(s32)(s16)r7;  /* 0C0A873C exts.w Rm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A873E extu.b Rm,Rn */
	r3 = 0xC1D9A94u; UPD(0x0C0A8742u, 3);  /* 0C0A8740 mov.l @(disp,pc),Rn */
	IF(0x0C0A8742u); r7 <<= 2;  /* 0C0A8742 shll2 Rn */
	r7 += r3;  /* 0C0A8744 add Rm,Rn */
	r0 = R32(r7 + 0x4u); UPD(0x0C0A8748u, 3);  /* 0C0A8746 mov.l @(disp,Rm),Rn */
	r4 = 0x4u;  /* 0C0A8748 mov #imm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C0A874Cu, 2);  /* 0C0A874A mov.l Rm,@(disp,Rn) */
	r0 = 0xC050D70u; UPD(0x0C0A874Eu, 1);  /* 0C0A874C mov.l @(disp,pc),Rn */
	IF(0x0C0A874Eu); { u32 t_ = r0; PR = 0x0C0A8752u; W32(r14 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A8752u); }  /* 0C0A874E jsr @Rn */
L_0C0A8752: BLKS(0x0C0A8752u);
	r0 += 0x7u;  /* 0C0A8752 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0A8756u, 2);  /* 0C0A8754 mov.l Rm,@(disp,Rn) */
	r5 = 0x3u;  /* 0C0A8756 mov #imm,Rn */
	W32(r8 + 0xCu, r12); UPD(0x0C0A875Au, 2);  /* 0C0A8758 mov.l Rm,@(disp,Rn) */
	r6 = 0x0u;  /* 0C0A875A mov #imm,Rn */
	r8 += 0x44u;  /* 0C0A875C add #imm,Rn */
	W16(r8, r9); UPD(0x0C0A8760u, 3);  /* 0C0A875E mov.w Rm,@Rn */
	r1 = 0x4u;  /* 0C0A8760 mov #imm,Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0A8762 add #imm,Rn */
	r3 = R32(r8 + 0x4u); UPD(0x0C0A8766u, 3);  /* 0C0A8764 mov.l @(disp,Rm),Rn */
	IF(0x0C0A8766u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0A8766 shld Rm,Rn */
	IF(0x0C0A8768u); ARG0(0x435Du); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C0A8768 shld Rm,Rn */
	r4 = 0xC1E6ABCu; UPD(0x0C0A876Cu, 3);  /* 0C0A876A mov.l @(disp,pc),Rn */
	W32(r8 + 0x10u, r6); UPD(0x0C0A876Eu, 1);  /* 0C0A876C mov.l Rm,@(disp,Rn) */
	r3 += r4;  /* 0C0A876E add Rm,Rn */
	r2 = R32(r3 + 0x4u); UPD(0x0C0A8772u, 2);  /* 0C0A8770 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0A8774u, 1);  /* 0C0A8772 mov.l Rm,@(disp,Rn) */
	r7 = R32(r3); UPD(0x0C0A8776u, 1);  /* 0C0A8774 mov.l @Rm,Rn */
	W32(r8 + 0x14u, r7); UPD(0x0C0A8778u, 1);  /* 0C0A8776 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8778u); r5 = R32(r0 + r7); UPD(0x0C0A877Au, 1);  /* 0C0A8778 mov.l @(r0,Rm),Rn */
	W32(r8 + 0x18u, r5); UPD(0x0C0A877Cu, 1);  /* 0C0A877A mov.l Rm,@(disp,Rn) */
	r6 = R32(r5); UPD(0x0C0A877Eu, 1);  /* 0C0A877C mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r6); UPD(0x0C0A8780u, 1);  /* 0C0A877E mov.l Rm,@(disp,Rn) */
	r4 = R32(r5 + 0x4u); UPD(0x0C0A8782u, 1);  /* 0C0A8780 mov.l @(disp,Rm),Rn */
	r3 = 0xC21F894u; UPD(0x0C0A8784u, 1);  /* 0C0A8782 mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r4); UPD(0x0C0A8786u, 1);  /* 0C0A8784 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A8788u, 1);  /* 0C0A8786 mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0A8788 add #imm,Rn */
	W16(r8, r0); UPD(0x0C0A878Cu, 2);  /* 0C0A878A mov.w Rm,@Rn */
	r4 = r9;  /* 0C0A878C mov Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C0A8790u, 2);  /* 0C0A878E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0A8790 add #imm,Rn */
	r7 = R32(r14); UPD(0x0C0A8794u, 2);  /* 0C0A8792 mov.l @Rm,Rn */
	r6 = R32(r14 + 0x4u); UPD(0x0C0A8796u, 1);  /* 0C0A8794 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C0A8798u, 1);  /* 0C0A8796 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r6); UPD(0x0C0A879Au, 1);  /* 0C0A8798 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A879Au); { u32 t_ = r0; PR = 0x0C0A879Eu; r5 = R32(r14 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A879Eu); }  /* 0C0A879A jsr @Rn */
L_0C0A879E: BLKS(0x0C0A879Eu);
	r4 = r9;  /* 0C0A879E mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0A87A2u, 2);  /* 0C0A87A0 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C0A87A4u, 1);  /* 0C0A87A2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A87A4u); { u32 t_ = r9; PR = 0x0C0A87A8u; r5 = R32(r14 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A87A8u); }  /* 0C0A87A4 jsr @Rn */
L_0C0A87A8: BLKS(0x0C0A87A8u);
	W32(r8 + 0x34u, r0); UPD(0x0C0A87AAu, 1);  /* 0C0A87A8 mov.l Rm,@(disp,Rn) */
	r2 = 0x0u;  /* 0C0A87AA mov #imm,Rn */
	r5 = R32(r14 + 0x30u); UPD(0x0C0A87AEu, 2);  /* 0C0A87AC mov.l @(disp,Rm),Rn */
	r8 += 0x48u;  /* 0C0A87AE add #imm,Rn */
	W32(r8, r5); UPD(0x0C0A87B2u, 2);  /* 0C0A87B0 mov.l Rm,@Rn */
	r0 = r11;  /* 0C0A87B2 mov Rm,Rn */
	r8 += 0x8u;  /* 0C0A87B4 add #imm,Rn */
	W8(r8, r2); UPD(0x0C0A87B8u, 3);  /* 0C0A87B6 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C0A87B8 add #imm,Rn */
	r4 = 0x207C0C0u; UPD(0x0C0A87BCu, 2);  /* 0C0A87BA mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0A87BC add #imm,Rn */
	W32(r8 + 0x3Cu, r4); UPD(0x0C0A87C0u, 2);  /* 0C0A87BE mov.l Rm,@(disp,Rn) */
	r11 = (u32)(s32)(s16)r0;  /* 0C0A87C0 exts.w Rm,Rn */
	r3 = 0x808080u; UPD(0x0C0A87C4u, 2);  /* 0C0A87C2 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0A87C4 add #imm,Rn */
	T = (s32)r11 >= (s32)r13;  /* 0C0A87C6 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r8, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0A8720u, 5); goto L_0C0A8720; } UPD(0x0C0A87CCu, 1); goto L_0C0A87CC; }  /* 0C0A87C8 bf/s */
L_0C0A87CC: BLKS(0x0C0A87CCu);
	r11 = 0xC1E6B8Cu; UPD(0x0C0A87CEu, 1);  /* 0C0A87CC mov.l @(disp,pc),Rn */
	r10 = 0xC0AFC10u; UPD(0x0C0A87D0u, 1);  /* 0C0A87CE mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C0A87D0 mov Rm,Rn */
	IF(0x0C0A87D2u); { u32 t_ = r10; PR = 0x0C0A87D6u; IF(0x0C0A87D4u); r4 = (u32)(s32)(s8)R8(r0 + r12); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0A87D6u); }  /* 0C0A87D2 jsr @Rn */
L_0C0A87D6: BLKS(0x0C0A87D6u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A86E6u, 3); goto L_0C0A86E6; }  /* 0C0A87D6 bra */
L_0C0A87E0: BLKS(0x0C0A87E0u);
	r9 = 0xC050D70u; UPD(0x0C0A87E2u, 1);  /* 0C0A87E0 mov.l @(disp,pc),Rn */
	IF(0x0C0A87E2u); { u32 t_ = r9; PR = 0x0C0A87E6u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A87E6u); }  /* 0C0A87E2 jsr @Rn */
L_0C0A87E6: BLKS(0x0C0A87E6u);
	{ r12 = r0; /* slot mov Rm,Rn */ UPD(0x0C0A8714u, 3); goto L_0C0A8714; }  /* 0C0A87E6 bra */
L_0C0A87F0: BLKS(0x0C0A87F0u);
	{ IF(0x0C0A87F2u); ; /* slot nop */ UPD(0x0C0A86BCu, 3); goto L_0C0A86BC; }  /* 0C0A87F0 bra */
}

/* FUN_0c0a8850 */
void f_0C0A8850(sh3_t *c)
{
	LOCALS;
L_0C0A8850: BLKS(0x0C0A8850u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8852u, 1);  /* 0C0A8850 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8854u, 1);  /* 0C0A8852 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8856u, 1);  /* 0C0A8854 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8858u, 1);  /* 0C0A8856 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A885Au, 1);  /* 0C0A8858 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A885Cu, 1);  /* 0C0A885A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A885Eu, 1);  /* 0C0A885C mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r7;  /* 0C0A885E exts.w Rm,Rn */
	IF(0x0C0A8860u); r15 -= 4; W32(r15, PR); UPD(0x0C0A8862u, 2);  /* 0C0A8860 sts.l pr,@-Rn */
	r2 = 0xFF580000u; UPD(0x0C0A8864u, 1);  /* 0C0A8862 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE8u;  /* 0C0A8864 add #imm,Rn */
	r14 = r15;  /* 0C0A8866 mov Rm,Rn */
	r2 += r5;  /* 0C0A8868 add Rm,Rn */
	W32(r14, r4); UPD(0x0C0A886Cu, 4);  /* 0C0A886A mov.l Rm,@Rn */
	IF(0x0C0A886Cu); T = (s32)r2 >= 0;  /* 0C0A886C cmp/pz Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0A8870u, 2);  /* 0C0A886E mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A8878u, 3); goto L_0C0A8878; } UPD(0x0C0A8874u, 1); goto L_0C0A8874; }  /* 0C0A8870 bt/s */
L_0C0A8874: BLKS(0x0C0A8874u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A8A00u, 3); goto L_0C0A8A00; }  /* 0C0A8874 bra */
L_0C0A8878: BLKS(0x0C0A8878u);
	r0 = 0x980000u; UPD(0x0C0A887Au, 1);  /* 0C0A8878 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0A887A cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A889Au, 4); goto L_0C0A889A; } goto L_0C0A8880; }  /* 0C0A887C bt/s */
L_0C0A8880: BLKS(0x0C0A8880u);
	r2 = 0xC3929E0u; UPD(0x0C0A8882u, 2);  /* 0C0A8880 mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C0A8884u, 1);  /* 0C0A8882 mov.l @Rm,Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C0A8886u, 1);  /* 0C0A8884 mov.l @(disp,Rm),Rn */
	r0 = 0xFF880000u; UPD(0x0C0A8888u, 1);  /* 0C0A8886 mov.l @(disp,pc),Rn */
	r2 -= r3;  /* 0C0A8888 sub Rm,Rn */
	r2 += r0;  /* 0C0A888A add Rm,Rn */
	IF(0x0C0A888Cu); T = (s32)r2 >= 0;  /* 0C0A888C cmp/pz Rn */
	if (T) { UPD(0x0C0A8892u, 6); goto L_0C0A8892; }  /* 0C0A888E bt */
L_0C0A8890: BLKS(0x0C0A8890u);
	r2 = 0u - r2;  /* 0C0A8890 neg Rm,Rn */
	UPD(0x0C0A8892u, 1);
L_0C0A8892: BLKS(0x0C0A8892u);
	r4 = 0x700000u; UPD(0x0C0A8894u, 1);  /* 0C0A8892 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0A8894 cmp/gt Rm,Rn */
	IF(0x0C0A8896u); r0 = T;  /* 0C0A8896 movt Rn */
	r0 ^= 0x1u;  /* 0C0A8898 xor #imm,r0 */
	UPD(0x0C0A889Au, 3);
L_0C0A889A: BLKS(0x0C0A889Au);
	r5 = (u32)(s32)(s8)r0;  /* 0C0A889A exts.b Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0A889C tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A88C0u, 5); goto L_0C0A88C0; } UPD(0x0C0A88A2u, 1); goto L_0C0A88A2; }  /* 0C0A889E bf/s */
L_0C0A88A2: BLKS(0x0C0A88A2u);
	r14 += 0x18u;  /* 0C0A88A2 add #imm,Rn */
	r15 = r14;  /* 0C0A88A4 mov Rm,Rn */
	IF(0x0C0A88A6u); PR = R32(r15); r15 += 4; UPD(0x0C0A88A8u, 3);  /* 0C0A88A6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A88AAu, 1);  /* 0C0A88A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A88ACu, 1);  /* 0C0A88AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A88AEu, 1);  /* 0C0A88AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A88B0u, 1);  /* 0C0A88AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A88B2u, 1);  /* 0C0A88B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A88B4u, 1);  /* 0C0A88B2 mov.l @Rm+,Rn */
	IF(0x0C0A88B4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A88B4 rts */
L_0C0A88C0: BLKS(0x0C0A88C0u);
	r1 = R32(r14 + 0x3Cu); UPD(0x0C0A88C2u, 1);  /* 0C0A88C0 mov.l @(disp,Rm),Rn */
	r8 = 0xC060720u; UPD(0x0C0A88C4u, 1);  /* 0C0A88C2 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r6 = v_; } UPD(0x0C0A88C6u, 1);  /* 0C0A88C4 mov.w @Rm+,Rn */
	W32(r14 + 0x3Cu, r1); UPD(0x0C0A88C8u, 1);  /* 0C0A88C6 mov.l Rm,@(disp,Rn) */
	r4 = r6;  /* 0C0A88C8 mov Rm,Rn */
	IF(0x0C0A88CAu); { u32 t_ = r8; PR = 0x0C0A88CEu; W32(r14 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C060720, 0x0C060720u, 0x0C0A88CEu); }  /* 0C0A88CA jsr @Rn */
L_0C0A88CE: BLKS(0x0C0A88CEu);
	T = (r0 & r0) == 0;  /* 0C0A88CE tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A88A2u, 4); goto L_0C0A88A2; } goto L_0C0A88D4; }  /* 0C0A88D0 bt/s */
L_0C0A88D4: BLKS(0x0C0A88D4u);
	r9 = R32(r14); UPD(0x0C0A88D6u, 2);  /* 0C0A88D4 mov.l @Rm,Rn */
	r7 = 0x6u;  /* 0C0A88D6 mov #imm,Rn */
	T = (s32)r9 > (s32)r7;  /* 0C0A88D8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A88E0u, 5); goto L_0C0A88E0; }  /* 0C0A88DA bf */
L_0C0A88DC: BLKS(0x0C0A88DCu);
	{ IF(0x0C0A88DEu); ; /* slot nop */ UPD(0x0C0A89F0u, 3); goto L_0C0A89F0; }  /* 0C0A88DC bra */
L_0C0A88E0: BLKS(0x0C0A88E0u);
	r3 = 0xC2755BCu; UPD(0x0C0A88E2u, 1);  /* 0C0A88E0 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0A88E2 mov #imm,Rn */
	r11 = R32(r14 + 0xCu); UPD(0x0C0A88E6u, 2);  /* 0C0A88E4 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x14u, r3); UPD(0x0C0A88E8u, 1);  /* 0C0A88E6 mov.l Rm,@(disp,Rn) */
	T = (s32)r12 >= (s32)r11;  /* 0C0A88E8 cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0x10u, r12); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A89D4u, 4); goto L_0C0A89D4; } UPD(0x0C0A88EEu, 1); goto L_0C0A88EE; }  /* 0C0A88EA bt/s */
L_0C0A88EE: BLKS(0x0C0A88EEu);
	IF(0x0C0A88EEu); ;  /* 0C0A88EE nop */
	UPD(0x0C0A88F0u, 1);
L_0C0A88F0: BLKS(0x0C0A88F0u);
	r4 = R32(r14 + 0x14u); UPD(0x0C0A88F2u, 1);  /* 0C0A88F0 mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0A88F2 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r12 = v_; } UPD(0x0C0A88F6u, 2);  /* 0C0A88F4 mov.w @Rm+,Rn */
	r11 = 0x3u;  /* 0C0A88F6 mov #imm,Rn */
	IF(0x0C0A88F8u); MACL = r12 * r8;  /* 0C0A88F8 mul.l Rm,Rn */
	r7 = 0xC27E0FCu; UPD(0x0C0A88FCu, 4);  /* 0C0A88FA mov.l @(disp,pc),Rn */
	IF(0x0C0A88FCu); r8 = MACL;  /* 0C0A88FC sts macl,Rn */
	r6 = 0xD1000000u; UPD(0x0C0A8900u, 2);  /* 0C0A88FE mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C0A8900 add Rm,Rn */
	W32(r8, r6); UPD(0x0C0A8904u, 2);  /* 0C0A8902 mov.l Rm,@Rn */
	r12 = 0x4u;  /* 0C0A8904 mov #imm,Rn */
	r3 = 0xC1D9A94u; UPD(0x0C0A8908u, 2);  /* 0C0A8906 mov.l @(disp,pc),Rn */
	r10 = 0xC050D70u; UPD(0x0C0A890Au, 1);  /* 0C0A8908 mov.l @(disp,pc),Rn */
	r0 = R32(r3); UPD(0x0C0A890Cu, 1);  /* 0C0A890A mov.l @Rm,Rn */
	W32(r14 + 0x14u, r4); UPD(0x0C0A890Eu, 1);  /* 0C0A890C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x4u, r0); UPD(0x0C0A8910u, 1);  /* 0C0A890E mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8910u); { u32 t_ = r10; PR = 0x0C0A8914u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A8914u); }  /* 0C0A8910 jsr @Rn */
L_0C0A8914: BLKS(0x0C0A8914u);
	r9 = R32(r14); UPD(0x0C0A8916u, 1);  /* 0C0A8914 mov.l @Rm,Rn */
	r0 += 0x7u;  /* 0C0A8916 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0A891Au, 2);  /* 0C0A8918 mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C0A891A mov #imm,Rn */
	W32(r8 + 0xCu, r9); UPD(0x0C0A891Eu, 2);  /* 0C0A891C mov.l Rm,@(disp,Rn) */
	IF(0x0C0A891Eu); ARG0(0x40CDu); { s32 s_ = (s32)r12; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0A891E shld Rm,Rn */
	r8 += 0x44u;  /* 0C0A8920 add #imm,Rn */
	W16(r8, r13); UPD(0x0C0A8924u, 3);  /* 0C0A8922 mov.w Rm,@Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0A8924 add #imm,Rn */
	r4 = R32(r8 + 0x4u); UPD(0x0C0A8928u, 2);  /* 0C0A8926 mov.l @(disp,Rm),Rn */
	r5 = 0xC1E6ABCu; UPD(0x0C0A892Au, 1);  /* 0C0A8928 mov.l @(disp,pc),Rn */
	IF(0x0C0A892Au); ARG0(0x44BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0A892A shld Rm,Rn */
	W32(r8 + 0x10u, r1); UPD(0x0C0A892Eu, 2);  /* 0C0A892C mov.l Rm,@(disp,Rn) */
	r4 += r5;  /* 0C0A892E add Rm,Rn */
	r2 = R32(r4 + 0x4u); UPD(0x0C0A8932u, 2);  /* 0C0A8930 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0A8934u, 1);  /* 0C0A8932 mov.l Rm,@(disp,Rn) */
	r7 = R32(r4); UPD(0x0C0A8936u, 1);  /* 0C0A8934 mov.l @Rm,Rn */
	W32(r8 + 0x14u, r7); UPD(0x0C0A8938u, 1);  /* 0C0A8936 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8938u); r10 = R32(r0 + r7); UPD(0x0C0A893Au, 1);  /* 0C0A8938 mov.l @(r0,Rm),Rn */
	W32(r8 + 0x18u, r10); UPD(0x0C0A893Cu, 1);  /* 0C0A893A mov.l Rm,@(disp,Rn) */
	r6 = R32(r10); UPD(0x0C0A893Eu, 1);  /* 0C0A893C mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r6); UPD(0x0C0A8940u, 1);  /* 0C0A893E mov.l Rm,@(disp,Rn) */
	r3 = R32(r10 + 0x4u); UPD(0x0C0A8942u, 1);  /* 0C0A8940 mov.l @(disp,Rm),Rn */
	r9 = 0xC21F894u; UPD(0x0C0A8944u, 1);  /* 0C0A8942 mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r3); UPD(0x0C0A8946u, 1);  /* 0C0A8944 mov.l Rm,@(disp,Rn) */
	r11 = (u32)(s32)(s16)R16(r9); UPD(0x0C0A8948u, 1);  /* 0C0A8946 mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0A8948 add #imm,Rn */
	W16(r8, r11); UPD(0x0C0A894Cu, 2);  /* 0C0A894A mov.w Rm,@Rn */
	r12 = R32(r14 + 0x3Cu); UPD(0x0C0A894Eu, 1);  /* 0C0A894C mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0A894E add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r4 = v_; } UPD(0x0C0A8952u, 2);  /* 0C0A8950 mov.w @Rm+,Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C0A8954u, 1);  /* 0C0A8952 mov.l @(disp,Rm),Rn */
	IF(0x0C0A8954u); r4 <<= 8;  /* 0C0A8954 shll8 Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r0 = v_; } UPD(0x0C0A8958u, 2);  /* 0C0A8956 mov.w @Rm+,Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0A8958 exts.w Rm,Rn */
	r7 = 0xC058060u; UPD(0x0C0A895Cu, 2);  /* 0C0A895A mov.l @(disp,pc),Rn */
	IF(0x0C0A895Cu); r0 <<= 8;  /* 0C0A895C shll8 Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0A8960u, 2);  /* 0C0A895E mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C0A8960 mov Rm,Rn */
	W32(r8 + 0x2Cu, r5); UPD(0x0C0A8964u, 2);  /* 0C0A8962 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x3Cu, r12); UPD(0x0C0A8966u, 1);  /* 0C0A8964 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r1); UPD(0x0C0A8968u, 1);  /* 0C0A8966 mov.l Rm,@(disp,Rn) */
	r12 = (u32)(s32)(s16)r0;  /* 0C0A8968 exts.w Rm,Rn */
	IF(0x0C0A896Au); { u32 t_ = r7; PR = 0x0C0A896Eu; r5 = R32(r14 + 0x38u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A896Eu); }  /* 0C0A896A jsr @Rn */
L_0C0A896E: BLKS(0x0C0A896Eu);
	r6 = 0xC058060u; UPD(0x0C0A8970u, 1);  /* 0C0A896E mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C0A8970 mov Rm,Rn */
	r10 = r0;  /* 0C0A8972 mov Rm,Rn */
	IF(0x0C0A8974u); { u32 t_ = r6; PR = 0x0C0A8978u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A8978u); }  /* 0C0A8974 jsr @Rn */
L_0C0A8978: BLKS(0x0C0A8978u);
	r2 = 0xC058030u; UPD(0x0C0A897Au, 1);  /* 0C0A8978 mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C0A897A mov Rm,Rn */
	r4 = r13;  /* 0C0A897C mov Rm,Rn */
	IF(0x0C0A897Eu); { u32 t_ = r2; PR = 0x0C0A8982u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A8982u); }  /* 0C0A897E jsr @Rn */
L_0C0A8982: BLKS(0x0C0A8982u);
	r9 -= r0;  /* 0C0A8982 sub Rm,Rn */
	IF(0x0C0A8984u); r9 <<= 2;  /* 0C0A8984 shll2 Rn */
	r10 += r9;  /* 0C0A8986 add Rm,Rn */
	W32(r8 + 0x30u, r10); UPD(0x0C0A898Au, 4);  /* 0C0A8988 mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C0A898A mov Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C0A898Eu, 2);  /* 0C0A898C mov.l @(disp,pc),Rn */
	IF(0x0C0A898Eu); { u32 t_ = r10; PR = 0x0C0A8992u; r5 = R32(r14 + 0x38u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A8992u); }  /* 0C0A898E jsr @Rn */
L_0C0A8992: BLKS(0x0C0A8992u);
	r3 = 0xC058030u; UPD(0x0C0A8994u, 1);  /* 0C0A8992 mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C0A8994 mov Rm,Rn */
	r9 = 0xC058060u; UPD(0x0C0A8998u, 2);  /* 0C0A8996 mov.l @(disp,pc),Rn */
	r10 = r0;  /* 0C0A8998 mov Rm,Rn */
	IF(0x0C0A899Au); { u32 t_ = r3; PR = 0x0C0A899Eu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A899Eu); }  /* 0C0A899A jsr @Rn */
L_0C0A899E: BLKS(0x0C0A899Eu);
	r11 = r0;  /* 0C0A899E mov Rm,Rn */
	r4 = r13;  /* 0C0A89A0 mov Rm,Rn */
	IF(0x0C0A89A2u); { u32 t_ = r9; PR = 0x0C0A89A6u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A89A6u); }  /* 0C0A89A2 jsr @Rn */
L_0C0A89A6: BLKS(0x0C0A89A6u);
	r11 += r0;  /* 0C0A89A6 add Rm,Rn */
	IF(0x0C0A89A8u); r11 <<= 2;  /* 0C0A89A8 shll2 Rn */
	r10 += r11;  /* 0C0A89AA add Rm,Rn */
	W32(r8 + 0x34u, r10); UPD(0x0C0A89AEu, 4);  /* 0C0A89AC mov.l Rm,@(disp,Rn) */
	r7 = 0x0u;  /* 0C0A89AE mov #imm,Rn */
	r1 = R32(r14 + 0x38u); UPD(0x0C0A89B2u, 2);  /* 0C0A89B0 mov.l @(disp,Rm),Rn */
	r8 += 0x48u;  /* 0C0A89B2 add #imm,Rn */
	W32(r8, r1); UPD(0x0C0A89B6u, 2);  /* 0C0A89B4 mov.l Rm,@Rn */
	r8 += 0x8u;  /* 0C0A89B6 add #imm,Rn */
	W8(r8, r7); UPD(0x0C0A89BAu, 2);  /* 0C0A89B8 mov.b Rm,@Rn */
	r6 = 0x207C0C0u; UPD(0x0C0A89BCu, 1);  /* 0C0A89BA mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0A89BC add #imm,Rn */
	r4 = R32(r14 + 0x10u); UPD(0x0C0A89C0u, 2);  /* 0C0A89BE mov.l @(disp,Rm),Rn */
	W32(r8 + 0x3Cu, r6); UPD(0x0C0A89C2u, 1);  /* 0C0A89C0 mov.l Rm,@(disp,Rn) */
	r4 += 0x1u;  /* 0C0A89C2 add #imm,Rn */
	r5 = 0x808080u; UPD(0x0C0A89C6u, 2);  /* 0C0A89C4 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)r4;  /* 0C0A89C6 exts.w Rm,Rn */
	r8 += 0x40u;  /* 0C0A89C8 add #imm,Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C0A89CCu, 3);  /* 0C0A89CA mov.l @(disp,Rm),Rn */
	W32(r8, r5); UPD(0x0C0A89CEu, 1);  /* 0C0A89CC mov.l Rm,@Rn */
	T = (s32)r2 >= (s32)r0;  /* 0C0A89CE cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x10u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A88F0u, 4); goto L_0C0A88F0; } UPD(0x0C0A89D4u, 1); goto L_0C0A89D4; }  /* 0C0A89D0 bf/s */
L_0C0A89D4: BLKS(0x0C0A89D4u);
	r13 = 0xC0AFC10u; UPD(0x0C0A89D6u, 1);  /* 0C0A89D4 mov.l @(disp,pc),Rn */
	r2 = 0xC1E6B8Cu; UPD(0x0C0A89D8u, 1);  /* 0C0A89D6 mov.l @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C0A89DAu, 1);  /* 0C0A89D8 mov.l @Rm,Rn */
	IF(0x0C0A89DAu); { u32 t_ = r13; PR = 0x0C0A89DEu; IF(0x0C0A89DCu); r4 = (u32)(s32)(s8)R8(r0 + r2); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0A89DEu); }  /* 0C0A89DA jsr @Rn */
L_0C0A89DE: BLKS(0x0C0A89DEu);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A88A2u, 3); goto L_0C0A88A2; }  /* 0C0A89DE bra */
L_0C0A89F0: BLKS(0x0C0A89F0u);
	r10 = 0xC050D70u; UPD(0x0C0A89F2u, 1);  /* 0C0A89F0 mov.l @(disp,pc),Rn */
	IF(0x0C0A89F2u); { u32 t_ = r10; PR = 0x0C0A89F6u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A89F6u); }  /* 0C0A89F2 jsr @Rn */
L_0C0A89F6: BLKS(0x0C0A89F6u);
	{ W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C0A88E0u, 3); goto L_0C0A88E0; }  /* 0C0A89F6 bra */
L_0C0A8A00: BLKS(0x0C0A8A00u);
	{ IF(0x0C0A8A02u); ; /* slot nop */ UPD(0x0C0A8878u, 3); goto L_0C0A8878; }  /* 0C0A8A00 bra */
}

/* FUN_0c0a8a50 */
void f_0C0A8A50(sh3_t *c)
{
	LOCALS;
L_0C0A8A50: BLKS(0x0C0A8A50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8A52u, 1);  /* 0C0A8A50 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C0A8A52 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8A56u, 2);  /* 0C0A8A54 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C0A8A56 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8A5Au, 2);  /* 0C0A8A58 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8A5Cu, 1);  /* 0C0A8A5A mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C0A8A5C exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8A60u, 2);  /* 0C0A8A5E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8A62u, 1);  /* 0C0A8A60 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8A64u, 1);  /* 0C0A8A62 mov.l Rm,@-Rn */
	r13 = r5;  /* 0C0A8A64 mov Rm,Rn */
	IF(0x0C0A8A66u); r15 -= 4; W32(r15, PR); UPD(0x0C0A8A68u, 2);  /* 0C0A8A66 sts.l pr,@-Rn */
	r2 = 0xFF580000u; UPD(0x0C0A8A6Au, 1);  /* 0C0A8A68 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE0u;  /* 0C0A8A6A add #imm,Rn */
	r14 = r15;  /* 0C0A8A6C mov Rm,Rn */
	r2 += r5;  /* 0C0A8A6E add Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0A8A72u, 4);  /* 0C0A8A70 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8A72u); T = (s32)r2 >= 0;  /* 0C0A8A72 cmp/pz Rn */
	{ u32 c_ = T; W32(r14, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0A8A7Cu, 4); goto L_0C0A8A7C; } UPD(0x0C0A8A78u, 1); goto L_0C0A8A78; }  /* 0C0A8A74 bt/s */
L_0C0A8A78: BLKS(0x0C0A8A78u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A8BE0u, 3); goto L_0C0A8BE0; }  /* 0C0A8A78 bra */
L_0C0A8A7C: BLKS(0x0C0A8A7Cu);
	r0 = 0x980000u; UPD(0x0C0A8A7Eu, 1);  /* 0C0A8A7C mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0A8A7E cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8A9Eu, 4); goto L_0C0A8A9E; } goto L_0C0A8A84; }  /* 0C0A8A80 bt/s */
L_0C0A8A84: BLKS(0x0C0A8A84u);
	r2 = 0xC3929E0u; UPD(0x0C0A8A86u, 2);  /* 0C0A8A84 mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C0A8A88u, 1);  /* 0C0A8A86 mov.l @Rm,Rn */
	r2 = R32(r14); UPD(0x0C0A8A8Au, 1);  /* 0C0A8A88 mov.l @Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C0A8A8Cu, 1);  /* 0C0A8A8A mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C0A8A8C sub Rm,Rn */
	r2 += r3;  /* 0C0A8A8E add Rm,Rn */
	IF(0x0C0A8A90u); T = (s32)r2 >= 0;  /* 0C0A8A90 cmp/pz Rn */
	if (T) { UPD(0x0C0A8A96u, 6); goto L_0C0A8A96; }  /* 0C0A8A92 bt */
L_0C0A8A94: BLKS(0x0C0A8A94u);
	r2 = 0u - r2;  /* 0C0A8A94 neg Rm,Rn */
	UPD(0x0C0A8A96u, 1);
L_0C0A8A96: BLKS(0x0C0A8A96u);
	r5 = 0x700000u; UPD(0x0C0A8A98u, 1);  /* 0C0A8A96 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C0A8A98 cmp/gt Rm,Rn */
	IF(0x0C0A8A9Au); r0 = T;  /* 0C0A8A9A movt Rn */
	r0 ^= 0x1u;  /* 0C0A8A9C xor #imm,r0 */
	UPD(0x0C0A8A9Eu, 3);
L_0C0A8A9E: BLKS(0x0C0A8A9Eu);
	r6 = (u32)(s32)(s8)r0;  /* 0C0A8A9E exts.b Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0A8AA0 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8AC0u, 5); goto L_0C0A8AC0; } UPD(0x0C0A8AA6u, 1); goto L_0C0A8AA6; }  /* 0C0A8AA2 bf/s */
L_0C0A8AA6: BLKS(0x0C0A8AA6u);
	r14 += 0x20u;  /* 0C0A8AA6 add #imm,Rn */
	r15 = r14;  /* 0C0A8AA8 mov Rm,Rn */
	IF(0x0C0A8AAAu); PR = R32(r15); r15 += 4; UPD(0x0C0A8AACu, 3);  /* 0C0A8AAA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A8AAEu, 1);  /* 0C0A8AAC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A8AB0u, 1);  /* 0C0A8AAE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A8AB2u, 1);  /* 0C0A8AB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A8AB4u, 1);  /* 0C0A8AB2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A8AB6u, 1);  /* 0C0A8AB4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A8AB8u, 1);  /* 0C0A8AB6 mov.l @Rm+,Rn */
	IF(0x0C0A8AB8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A8AB8 rts */
L_0C0A8AC0: BLKS(0x0C0A8AC0u);
	r9 = 0xC060720u; UPD(0x0C0A8AC2u, 1);  /* 0C0A8AC0 mov.l @(disp,pc),Rn */
	IF(0x0C0A8AC2u); { u32 t_ = r9; PR = 0x0C0A8AC6u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060720, 0x0C060720u, 0x0C0A8AC6u); }  /* 0C0A8AC2 jsr @Rn */
L_0C0A8AC6: BLKS(0x0C0A8AC6u);
	T = (r0 & r0) == 0;  /* 0C0A8AC6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8AA6u, 4); goto L_0C0A8AA6; } goto L_0C0A8ACC; }  /* 0C0A8AC8 bt/s */
L_0C0A8ACC: BLKS(0x0C0A8ACCu);
	r7 = 0x7u;  /* 0C0A8ACC mov #imm,Rn */
	T = (s32)r8 > (s32)r7;  /* 0C0A8ACE cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A8AD6u, 6); goto L_0C0A8AD6; }  /* 0C0A8AD0 bf */
L_0C0A8AD2: BLKS(0x0C0A8AD2u);
	{ IF(0x0C0A8AD4u); ; /* slot nop */ UPD(0x0C0A8BD0u, 3); goto L_0C0A8BD0; }  /* 0C0A8AD2 bra */
L_0C0A8AD6: BLKS(0x0C0A8AD6u);
	r9 = 0xC050D70u; UPD(0x0C0A8AD8u, 1);  /* 0C0A8AD6 mov.l @(disp,pc),Rn */
L_0C0A8AD8: BLKS(0x0C0A8AD8u);
	r12 = 0xC2755BCu; UPD(0x0C0A8ADAu, 1);  /* 0C0A8AD8 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0A8ADA mov #imm,Rn */
	IF(0x0C0A8ADCu); { u32 t_ = r9; PR = 0x0C0A8AE0u; W32(r14 + 0x8u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A8AE0u); }  /* 0C0A8ADC jsr @Rn */
L_0C0A8AE0: BLKS(0x0C0A8AE0u);
	r11 = r0;  /* 0C0A8AE0 mov Rm,Rn */
	r11 += 0x10u;  /* 0C0A8AE2 add #imm,Rn */
	W32(r14 + 0xCu, r11); UPD(0x0C0A8AE6u, 3);  /* 0C0A8AE4 mov.l Rm,@(disp,Rn) */
	r3 = 0x4u;  /* 0C0A8AE6 mov #imm,Rn */
	IF(0x0C0A8AE8u); ARG0(0x4B3Du); { s32 s_ = (s32)r3; if (s_ >= 0) r11 <<= (s_ & 31); else if ((s_ & 31) == 0) r11 = 0; else r11 >>= ((~s_ & 31) + 1); }  /* 0C0A8AE8 shld Rm,Rn */
	W32(r14 + 0x1Cu, r11); UPD(0x0C0A8AECu, 3);  /* 0C0A8AEA mov.l Rm,@(disp,Rn) */
	r10 += 0x4u;  /* 0C0A8AEC add #imm,Rn */
	r11 = r10;  /* 0C0A8AEE mov Rm,Rn */
	r4 = r8;  /* 0C0A8AF0 mov Rm,Rn */
	IF(0x0C0A8AF2u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0A8AF2 shar Rn */
	IF(0x0C0A8AF4u); r8 <<= 2;  /* 0C0A8AF4 shll2 Rn */
	IF(0x0C0A8AF6u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0A8AF6 shar Rn */
	W32(r14 + 0x18u, r8); UPD(0x0C0A8AFAu, 7);  /* 0C0A8AF8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8AFAu); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0A8AFA shar Rn */
	r1 = 0x3Fu;  /* 0C0A8AFC mov #imm,Rn */
	r11 &= r1;  /* 0C0A8AFE and Rm,Rn */
	r8 = r11;  /* 0C0A8B00 mov Rm,Rn */
	r0 = 0x3u;  /* 0C0A8B02 mov #imm,Rn */
	IF(0x0C0A8B04u); ARG0(0x480Du); { s32 s_ = (s32)r0; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C0A8B04 shld Rm,Rn */
	r4 += r4;  /* 0C0A8B06 add Rm,Rn */
	W32(r14 + 0x14u, r4); UPD(0x0C0A8B0Au, 8);  /* 0C0A8B08 mov.l Rm,@(disp,Rn) */
	r12 = 0x1u;  /* 0C0A8B0A mov #imm,Rn */
	W32(r14 + 0x10u, r8); UPD(0x0C0A8B0Eu, 2);  /* 0C0A8B0C mov.l Rm,@(disp,Rn) */
	r10 += 0xFFFFFFFCu;  /* 0C0A8B0E add #imm,Rn */
	UPD(0x0C0A8B10u, 1);
L_0C0A8B10: BLKS(0x0C0A8B10u);
	r3 = R32(r14 + 0x8u); UPD(0x0C0A8B12u, 1);  /* 0C0A8B10 mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0A8B12 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r9 = v_; } UPD(0x0C0A8B16u, 2);  /* 0C0A8B14 mov.w @Rm+,Rn */
	r0 = r12;  /* 0C0A8B16 mov Rm,Rn */
	IF(0x0C0A8B18u); MACL = r9 * r8;  /* 0C0A8B18 mul.l Rm,Rn */
	r6 = 0xC1E6BB4u; UPD(0x0C0A8B1Cu, 4);  /* 0C0A8B1A mov.l @(disp,pc),Rn */
	IF(0x0C0A8B1Cu); r0 <<= 2;  /* 0C0A8B1C shll2 Rn */
	r7 = 0xC27E0FCu; UPD(0x0C0A8B20u, 2);  /* 0C0A8B1E mov.l @(disp,pc),Rn */
	IF(0x0C0A8B20u); r8 = MACL;  /* 0C0A8B20 sts macl,Rn */
	IF(0x0C0A8B22u); r5 = R32(r0 + r6); UPD(0x0C0A8B24u, 2);  /* 0C0A8B22 mov.l @(r0,Rm),Rn */
	r8 += r7;  /* 0C0A8B24 add Rm,Rn */
	W32(r8, r5); UPD(0x0C0A8B28u, 2);  /* 0C0A8B26 mov.l Rm,@Rn */
	r6 = 0x3u;  /* 0C0A8B28 mov #imm,Rn */
	r2 = 0xC1D9A6Cu; UPD(0x0C0A8B2Cu, 2);  /* 0C0A8B2A mov.l @(disp,pc),Rn */
	r4 = R32(r14 + 0x14u); UPD(0x0C0A8B2Eu, 1);  /* 0C0A8B2C mov.l @(disp,Rm),Rn */
	r5 = R32(r2); UPD(0x0C0A8B30u, 1);  /* 0C0A8B2E mov.l @Rm,Rn */
	r4 += r12;  /* 0C0A8B30 add Rm,Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C0A8B34u, 2);  /* 0C0A8B32 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C0A8B36u, 1);  /* 0C0A8B34 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r0); UPD(0x0C0A8B38u, 1);  /* 0C0A8B36 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8B38u); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0A8B38 shld Rm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C0A8B3Cu, 2);  /* 0C0A8B3A mov.l Rm,@(disp,Rn) */
	r0 = 0x40u;  /* 0C0A8B3C mov #imm,Rn */
	r8 += 0x44u;  /* 0C0A8B3E add #imm,Rn */
	W16(r8, r10); UPD(0x0C0A8B42u, 3);  /* 0C0A8B40 mov.w Rm,@Rn */
	IF(0x0C0A8B42u); r1 = R32(r0 + r14); UPD(0x0C0A8B44u, 1);  /* 0C0A8B42 mov.l @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0A8B44 add #imm,Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C0A8B48u, 2);  /* 0C0A8B46 mov.l Rm,@(disp,Rn) */
	W32(r8, r1); UPD(0x0C0A8B4Au, 1);  /* 0C0A8B48 mov.l Rm,@Rn */
	r0 = R32(r14 + 0x18u); UPD(0x0C0A8B4Cu, 1);  /* 0C0A8B4A mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB8u;  /* 0C0A8B4C add #imm,Rn */
	r3 = 0xC1E6B94u; UPD(0x0C0A8B50u, 2);  /* 0C0A8B4E mov.l @(disp,pc),Rn */
	IF(0x0C0A8B50u); r7 = R32(r0 + r3); UPD(0x0C0A8B52u, 1);  /* 0C0A8B50 mov.l @(r0,Rm),Rn */
	r2 = 0xC1E6ABCu; UPD(0x0C0A8B54u, 1);  /* 0C0A8B52 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r7); UPD(0x0C0A8B56u, 1);  /* 0C0A8B54 mov.l Rm,@(disp,Rn) */
	r5 += r2;  /* 0C0A8B56 add Rm,Rn */
	W32(r8 + 0x10u, r11); UPD(0x0C0A8B5Au, 2);  /* 0C0A8B58 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x4u); UPD(0x0C0A8B5Cu, 1);  /* 0C0A8B5A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0A8B5Eu, 1);  /* 0C0A8B5C mov.l Rm,@(disp,Rn) */
	r4 = R32(r5); UPD(0x0C0A8B60u, 1);  /* 0C0A8B5E mov.l @Rm,Rn */
	r0 = R32(r14 + 0x1Cu); UPD(0x0C0A8B62u, 1);  /* 0C0A8B60 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x14u, r4); UPD(0x0C0A8B64u, 1);  /* 0C0A8B62 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8B64u); r3 = R32(r0 + r4); UPD(0x0C0A8B66u, 1);  /* 0C0A8B64 mov.l @(r0,Rm),Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C0A8B68u, 1);  /* 0C0A8B66 mov.l @(disp,Rm),Rn */
	r0 = 0x40u;  /* 0C0A8B68 mov #imm,Rn */
	W32(r8 + 0x18u, r3); UPD(0x0C0A8B6Cu, 2);  /* 0C0A8B6A mov.l Rm,@(disp,Rn) */
	r6 += r3;  /* 0C0A8B6C add Rm,Rn */
	r7 = R32(r6); UPD(0x0C0A8B70u, 2);  /* 0C0A8B6E mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r7); UPD(0x0C0A8B72u, 1);  /* 0C0A8B70 mov.l Rm,@(disp,Rn) */
	r5 = R32(r6 + 0x4u); UPD(0x0C0A8B74u, 1);  /* 0C0A8B72 mov.l @(disp,Rm),Rn */
	r2 = 0xC21F894u; UPD(0x0C0A8B76u, 1);  /* 0C0A8B74 mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r5); UPD(0x0C0A8B78u, 1);  /* 0C0A8B76 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C0A8B7Au, 1);  /* 0C0A8B78 mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0A8B7A add #imm,Rn */
	W16(r8, r4); UPD(0x0C0A8B7Eu, 2);  /* 0C0A8B7C mov.w Rm,@Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0A8B7E add #imm,Rn */
	r3 = R32(r14); UPD(0x0C0A8B82u, 2);  /* 0C0A8B80 mov.l @Rm,Rn */
	W32(r8 + 0x28u, r13); UPD(0x0C0A8B84u, 1);  /* 0C0A8B82 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r3); UPD(0x0C0A8B86u, 1);  /* 0C0A8B84 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8B86u); r5 = R32(r0 + r14); UPD(0x0C0A8B88u, 1);  /* 0C0A8B86 mov.l @(r0,Rm),Rn */
	r0 = 0xC058060u; UPD(0x0C0A8B8Au, 1);  /* 0C0A8B88 mov.l @(disp,pc),Rn */
	IF(0x0C0A8B8Au); { u32 t_ = r0; PR = 0x0C0A8B8Eu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A8B8Eu); }  /* 0C0A8B8A jsr @Rn */
L_0C0A8B8E: BLKS(0x0C0A8B8Eu);
	W32(r8 + 0x30u, r0); UPD(0x0C0A8B90u, 1);  /* 0C0A8B8E mov.l Rm,@(disp,Rn) */
	r0 = 0x40u;  /* 0C0A8B90 mov #imm,Rn */
	IF(0x0C0A8B92u); r5 = R32(r0 + r14); UPD(0x0C0A8B94u, 2);  /* 0C0A8B92 mov.l @(r0,Rm),Rn */
	r0 = 0xC058030u; UPD(0x0C0A8B96u, 1);  /* 0C0A8B94 mov.l @(disp,pc),Rn */
	IF(0x0C0A8B96u); { u32 t_ = r0; PR = 0x0C0A8B9Au; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A8B9Au); }  /* 0C0A8B96 jsr @Rn */
L_0C0A8B9A: BLKS(0x0C0A8B9Au);
	W32(r8 + 0x34u, r0); UPD(0x0C0A8B9Cu, 1);  /* 0C0A8B9A mov.l Rm,@(disp,Rn) */
	r2 = r12;  /* 0C0A8B9C mov Rm,Rn */
	r8 += 0x50u;  /* 0C0A8B9E add #imm,Rn */
	r0 = 0x0u;  /* 0C0A8BA0 mov #imm,Rn */
	W8(r8, r0); UPD(0x0C0A8BA4u, 4);  /* 0C0A8BA2 mov.b Rm,@Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0A8BA4 add #imm,Rn */
	r7 = 0x207C0C0u; UPD(0x0C0A8BA8u, 2);  /* 0C0A8BA6 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0A8BA8 add #imm,Rn */
	W32(r8 + 0x3Cu, r7); UPD(0x0C0A8BACu, 2);  /* 0C0A8BAA mov.l Rm,@(disp,Rn) */
	r0 = 0x6u;  /* 0C0A8BAC mov #imm,Rn */
	r6 = 0x808080u; UPD(0x0C0A8BB0u, 2);  /* 0C0A8BAE mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0A8BB0 add #imm,Rn */
	W32(r8, r6); UPD(0x0C0A8BB4u, 2);  /* 0C0A8BB2 mov.l Rm,@Rn */
	r12 = (u32)(s32)(s16)r2;  /* 0C0A8BB4 exts.w Rm,Rn */
	IF(0x0C0A8BB6u); r5 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0A8BB8u, 2);  /* 0C0A8BB6 mov.w @(r0,Rm),Rn */
	r8 += 0xCu;  /* 0C0A8BB8 add #imm,Rn */
	W16(r8, r5); UPD(0x0C0A8BBCu, 2);  /* 0C0A8BBA mov.w Rm,@Rn */
	IF(0x0C0A8BBCu); T = (s32)r12 >= 0;  /* 0C0A8BBC cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x4u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A8B10u, 4); goto L_0C0A8B10; } UPD(0x0C0A8BC2u, 1); goto L_0C0A8BC2; }  /* 0C0A8BBE bt/s */
L_0C0A8BC2: BLKS(0x0C0A8BC2u);
	r10 = 0xC0AFC10u; UPD(0x0C0A8BC4u, 1);  /* 0C0A8BC2 mov.l @(disp,pc),Rn */
	IF(0x0C0A8BC4u); { u32 t_ = r10; PR = 0x0C0A8BC8u; r4 = 0x79u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0A8BC8u); }  /* 0C0A8BC4 jsr @Rn */
L_0C0A8BC8: BLKS(0x0C0A8BC8u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A8AA6u, 3); goto L_0C0A8AA6; }  /* 0C0A8BC8 bra */
L_0C0A8BD0: BLKS(0x0C0A8BD0u);
	r9 = 0xC050D70u; UPD(0x0C0A8BD2u, 1);  /* 0C0A8BD0 mov.l @(disp,pc),Rn */
	IF(0x0C0A8BD2u); { u32 t_ = r9; PR = 0x0C0A8BD6u; r4 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A8BD6u); }  /* 0C0A8BD2 jsr @Rn */
L_0C0A8BD6: BLKS(0x0C0A8BD6u);
	{ r8 = r0; /* slot mov Rm,Rn */ UPD(0x0C0A8AD8u, 3); goto L_0C0A8AD8; }  /* 0C0A8BD6 bra */
L_0C0A8BE0: BLKS(0x0C0A8BE0u);
	{ IF(0x0C0A8BE2u); ; /* slot nop */ UPD(0x0C0A8A7Cu, 3); goto L_0C0A8A7C; }  /* 0C0A8BE0 bra */
}

/* FUN_0c0a8c30 */
void f_0C0A8C30(sh3_t *c)
{
	LOCALS;
L_0C0A8C30: BLKS(0x0C0A8C30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8C32u, 1);  /* 0C0A8C30 mov.l Rm,@-Rn */
	r0 = 0x54u;  /* 0C0A8C32 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8C36u, 2);  /* 0C0A8C34 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C0A8C36 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8C3Au, 2);  /* 0C0A8C38 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C0A8C3A mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8C3Eu, 2);  /* 0C0A8C3C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8C40u, 1);  /* 0C0A8C3E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8C42u, 1);  /* 0C0A8C40 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8C44u, 1);  /* 0C0A8C42 mov.l Rm,@-Rn */
	IF(0x0C0A8C44u); r15 -= 4; W32(r15, PR); UPD(0x0C0A8C46u, 1);  /* 0C0A8C44 sts.l pr,@-Rn */
	r15 += 0xFFFFFFD0u;  /* 0C0A8C46 add #imm,Rn */
	r14 = r15;  /* 0C0A8C48 mov Rm,Rn */
	IF(0x0C0A8C4Au); r13 = R32(r0 + r14); UPD(0x0C0A8C4Cu, 3);  /* 0C0A8C4A mov.l @(r0,Rm),Rn */
	r2 = 0xFF580000u; UPD(0x0C0A8C4Eu, 1);  /* 0C0A8C4C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r7;  /* 0C0A8C4E exts.w Rm,Rn */
	r2 += r5;  /* 0C0A8C50 add Rm,Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0A8C54u, 3);  /* 0C0A8C52 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8C54u); T = (s32)r2 >= 0;  /* 0C0A8C54 cmp/pz Rn */
	W32(r14, r5); UPD(0x0C0A8C58u, 2);  /* 0C0A8C56 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0A8C5Au, 1);  /* 0C0A8C58 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r14 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A8C62u, 3); goto L_0C0A8C62; } UPD(0x0C0A8C5Eu, 1); goto L_0C0A8C5E; }  /* 0C0A8C5A bt/s */
L_0C0A8C5E: BLKS(0x0C0A8C5Eu);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A8E10u, 3); goto L_0C0A8E10; }  /* 0C0A8C5E bra */
L_0C0A8C62: BLKS(0x0C0A8C62u);
	r0 = 0x980000u; UPD(0x0C0A8C64u, 1);  /* 0C0A8C62 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0A8C64 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8C84u, 4); goto L_0C0A8C84; } goto L_0C0A8C6A; }  /* 0C0A8C66 bt/s */
L_0C0A8C6A: BLKS(0x0C0A8C6Au);
	r2 = 0xC3929E0u; UPD(0x0C0A8C6Cu, 2);  /* 0C0A8C6A mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C0A8C6Eu, 1);  /* 0C0A8C6C mov.l @Rm,Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0A8C70u, 1);  /* 0C0A8C6E mov.l @(disp,Rm),Rn */
	r3 = 0xFF880000u; UPD(0x0C0A8C72u, 1);  /* 0C0A8C70 mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C0A8C72 sub Rm,Rn */
	r2 += r3;  /* 0C0A8C74 add Rm,Rn */
	IF(0x0C0A8C76u); T = (s32)r2 >= 0;  /* 0C0A8C76 cmp/pz Rn */
	if (T) { UPD(0x0C0A8C7Cu, 6); goto L_0C0A8C7C; }  /* 0C0A8C78 bt */
L_0C0A8C7A: BLKS(0x0C0A8C7Au);
	r2 = 0u - r2;  /* 0C0A8C7A neg Rm,Rn */
	UPD(0x0C0A8C7Cu, 1);
L_0C0A8C7C: BLKS(0x0C0A8C7Cu);
	r5 = 0x700000u; UPD(0x0C0A8C7Eu, 1);  /* 0C0A8C7C mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C0A8C7E cmp/gt Rm,Rn */
	IF(0x0C0A8C80u); r0 = T;  /* 0C0A8C80 movt Rn */
	r0 ^= 0x1u;  /* 0C0A8C82 xor #imm,r0 */
	UPD(0x0C0A8C84u, 3);
L_0C0A8C84: BLKS(0x0C0A8C84u);
	r6 = (u32)(s32)(s8)r0;  /* 0C0A8C84 exts.b Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0A8C86 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8CB0u, 5); goto L_0C0A8CB0; } UPD(0x0C0A8C8Cu, 1); goto L_0C0A8C8C; }  /* 0C0A8C88 bf/s */
L_0C0A8C8C: BLKS(0x0C0A8C8Cu);
	r14 += 0x30u;  /* 0C0A8C8C add #imm,Rn */
	r15 = r14;  /* 0C0A8C8E mov Rm,Rn */
	IF(0x0C0A8C90u); PR = R32(r15); r15 += 4; UPD(0x0C0A8C92u, 3);  /* 0C0A8C90 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A8C94u, 1);  /* 0C0A8C92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A8C96u, 1);  /* 0C0A8C94 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A8C98u, 1);  /* 0C0A8C96 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A8C9Au, 1);  /* 0C0A8C98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A8C9Cu, 1);  /* 0C0A8C9A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A8C9Eu, 1);  /* 0C0A8C9C mov.l @Rm+,Rn */
	IF(0x0C0A8C9Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A8C9E rts */
L_0C0A8CB0: BLKS(0x0C0A8CB0u);
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r7 = v_; } UPD(0x0C0A8CB2u, 1);  /* 0C0A8CB0 mov.w @Rm+,Rn */
	r9 = 0xC060720u; UPD(0x0C0A8CB4u, 1);  /* 0C0A8CB2 mov.l @(disp,pc),Rn */
	r4 = r7;  /* 0C0A8CB4 mov Rm,Rn */
	W32(r14 + 0xCu, r7); UPD(0x0C0A8CB8u, 2);  /* 0C0A8CB6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8CB8u); { u32 t_ = r9; PR = 0x0C0A8CBCu; r4 += r4; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060720, 0x0C060720u, 0x0C0A8CBCu); }  /* 0C0A8CB8 jsr @Rn */
L_0C0A8CBC: BLKS(0x0C0A8CBCu);
	T = (r0 & r0) == 0;  /* 0C0A8CBC tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8C8Cu, 4); goto L_0C0A8C8C; } goto L_0C0A8CC2; }  /* 0C0A8CBE bt/s */
L_0C0A8CC2: BLKS(0x0C0A8CC2u);
	r10 = 0x7u;  /* 0C0A8CC2 mov #imm,Rn */
	T = (s32)r8 > (s32)r10;  /* 0C0A8CC4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A8CCCu, 6); goto L_0C0A8CCC; }  /* 0C0A8CC6 bf */
L_0C0A8CC8: BLKS(0x0C0A8CC8u);
	{ IF(0x0C0A8CCAu); ; /* slot nop */ UPD(0x0C0A8E00u, 3); goto L_0C0A8E00; }  /* 0C0A8CC8 bra */
L_0C0A8CCC: BLKS(0x0C0A8CCCu);
	r9 = 0xC050D70u; UPD(0x0C0A8CCEu, 1);  /* 0C0A8CCC mov.l @(disp,pc),Rn */
L_0C0A8CCE: BLKS(0x0C0A8CCEu);
	r1 = 0xC2755BCu; UPD(0x0C0A8CD0u, 1);  /* 0C0A8CCE mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0A8CD0 mov #imm,Rn */
	IF(0x0C0A8CD2u); { u32 t_ = r9; PR = 0x0C0A8CD6u; W32(r14 + 0x18u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A8CD6u); }  /* 0C0A8CD2 jsr @Rn */
L_0C0A8CD6: BLKS(0x0C0A8CD6u);
	r3 = r0;  /* 0C0A8CD6 mov Rm,Rn */
	r12 = 0x0u;  /* 0C0A8CD8 mov #imm,Rn */
	r3 += 0x10u;  /* 0C0A8CDA add #imm,Rn */
	r11 = R32(r14 + 0xCu); UPD(0x0C0A8CDEu, 4);  /* 0C0A8CDC mov.l @(disp,Rm),Rn */
	W32(r14 + 0x1Cu, r3); UPD(0x0C0A8CE0u, 1);  /* 0C0A8CDE mov.l Rm,@(disp,Rn) */
	T = (s32)r12 >= (s32)r11;  /* 0C0A8CE0 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x10u, r12); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A8CEAu, 4); goto L_0C0A8CEA; } UPD(0x0C0A8CE6u, 1); goto L_0C0A8CE6; }  /* 0C0A8CE2 bf/s */
L_0C0A8CE6: BLKS(0x0C0A8CE6u);
	{ IF(0x0C0A8CE8u); ; /* slot nop */ UPD(0x0C0A8DE8u, 3); goto L_0C0A8DE8; }  /* 0C0A8CE6 bra */
L_0C0A8CEA: BLKS(0x0C0A8CEAu);
	r0 = r8;  /* 0C0A8CEA mov Rm,Rn */
	IF(0x0C0A8CECu); r8 <<= 2;  /* 0C0A8CEC shll2 Rn */
	W32(r14 + 0x28u, r8); UPD(0x0C0A8CF0u, 3);  /* 0C0A8CEE mov.l Rm,@(disp,Rn) */
	r4 = 0x4u;  /* 0C0A8CF0 mov #imm,Rn */
	r8 = R32(r14 + 0x1Cu); UPD(0x0C0A8CF4u, 2);  /* 0C0A8CF2 mov.l @(disp,Rm),Rn */
	r0 += r0;  /* 0C0A8CF4 add Rm,Rn */
	IF(0x0C0A8CF6u); ARG0(0x484Du); { s32 s_ = (s32)r4; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C0A8CF6 shld Rm,Rn */
	W32(r14 + 0x24u, r0); UPD(0x0C0A8CFAu, 3);  /* 0C0A8CF8 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x2Cu, r8); UPD(0x0C0A8CFCu, 1);  /* 0C0A8CFA mov.l Rm,@(disp,Rn) */
L_0C0A8CFC: BLKS(0x0C0A8CFCu);
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r7 = v_; } UPD(0x0C0A8CFEu, 1);  /* 0C0A8CFC mov.w @Rm+,Rn */
	r6 = 0x3Fu;  /* 0C0A8CFE mov #imm,Rn */
	r10 = R32(r14 + 0x8u); UPD(0x0C0A8D02u, 2);  /* 0C0A8D00 mov.l @(disp,Rm),Rn */
	r2 = 0x3u;  /* 0C0A8D02 mov #imm,Rn */
	r9 = 0x1FFu; UPD(0x0C0A8D06u, 2);  /* 0C0A8D04 mov.w @(disp,pc),Rn */
	r10 += r7;  /* 0C0A8D06 add Rm,Rn */
	r10 &= r9;  /* 0C0A8D08 and Rm,Rn */
	r12 = r10;  /* 0C0A8D0A mov Rm,Rn */
	r12 += 0x4u;  /* 0C0A8D0C add #imm,Rn */
	IF(0x0C0A8D0Eu); r12 >>= 2;  /* 0C0A8D0E shlr2 Rn */
	IF(0x0C0A8D10u); T = r12 & 1; r12 >>= 1;  /* 0C0A8D10 shlr Rn */
	r12 &= r6;  /* 0C0A8D12 and Rm,Rn */
	r5 = r12;  /* 0C0A8D14 mov Rm,Rn */
	IF(0x0C0A8D16u); ARG0(0x452Du); { s32 s_ = (s32)r2; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0A8D16 shld Rm,Rn */
	W32(r14 + 0x20u, r5); UPD(0x0C0A8D1Au, 10);  /* 0C0A8D18 mov.l Rm,@(disp,Rn) */
	r11 = 0x1u;  /* 0C0A8D1A mov #imm,Rn */
	UPD(0x0C0A8D1Cu, 1);
L_0C0A8D1C: BLKS(0x0C0A8D1Cu);
	r4 = R32(r14 + 0x18u); UPD(0x0C0A8D1Eu, 1);  /* 0C0A8D1C mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0A8D1E mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r9 = v_; } UPD(0x0C0A8D22u, 2);  /* 0C0A8D20 mov.w @Rm+,Rn */
	r0 = r11;  /* 0C0A8D22 mov Rm,Rn */
	IF(0x0C0A8D24u); MACL = r9 * r8;  /* 0C0A8D24 mul.l Rm,Rn */
	r7 = 0xC1E6BB4u; UPD(0x0C0A8D28u, 4);  /* 0C0A8D26 mov.l @(disp,pc),Rn */
	IF(0x0C0A8D28u); r0 <<= 2;  /* 0C0A8D28 shll2 Rn */
	r2 = 0xC27E0FCu; UPD(0x0C0A8D2Cu, 2);  /* 0C0A8D2A mov.l @(disp,pc),Rn */
	IF(0x0C0A8D2Cu); r8 = MACL;  /* 0C0A8D2C sts macl,Rn */
	IF(0x0C0A8D2Eu); r6 = R32(r0 + r7); UPD(0x0C0A8D30u, 2);  /* 0C0A8D2E mov.l @(r0,Rm),Rn */
	r8 += r2;  /* 0C0A8D30 add Rm,Rn */
	W32(r8, r6); UPD(0x0C0A8D34u, 2);  /* 0C0A8D32 mov.l Rm,@Rn */
	r5 = 0xC27DC50u; UPD(0x0C0A8D36u, 1);  /* 0C0A8D34 mov.l @(disp,pc),Rn */
	W32(r14 + 0x18u, r4); UPD(0x0C0A8D38u, 1);  /* 0C0A8D36 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C0A8D3Au, 1);  /* 0C0A8D38 mov.b @Rm,Rn */
	r3 = 0xC1D9A6Cu; UPD(0x0C0A8D3Cu, 1);  /* 0C0A8D3A mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFF;  /* 0C0A8D3C extu.b Rm,Rn */
	IF(0x0C0A8D3Eu); r4 <<= 2;  /* 0C0A8D3E shll2 Rn */
	r4 += r3;  /* 0C0A8D40 add Rm,Rn */
	r2 = R32(r14 + 0x24u); UPD(0x0C0A8D44u, 4);  /* 0C0A8D42 mov.l @(disp,Rm),Rn */
	r0 = 0x50u;  /* 0C0A8D44 mov #imm,Rn */
	r3 = R32(r4 + 0x4u); UPD(0x0C0A8D48u, 2);  /* 0C0A8D46 mov.l @(disp,Rm),Rn */
	r2 += r11;  /* 0C0A8D48 add Rm,Rn */
	r1 = R32(r14 + 0x1Cu); UPD(0x0C0A8D4Cu, 2);  /* 0C0A8D4A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C0A8D4Eu, 1);  /* 0C0A8D4C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r1); UPD(0x0C0A8D50u, 1);  /* 0C0A8D4E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r2); UPD(0x0C0A8D52u, 1);  /* 0C0A8D50 mov.l Rm,@(disp,Rn) */
	r8 += 0x44u;  /* 0C0A8D52 add #imm,Rn */
	W16(r8, r10); UPD(0x0C0A8D56u, 2);  /* 0C0A8D54 mov.w Rm,@Rn */
	IF(0x0C0A8D56u); r7 = R32(r0 + r14); UPD(0x0C0A8D58u, 1);  /* 0C0A8D56 mov.l @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0A8D58 add #imm,Rn */
	W32(r8, r7); UPD(0x0C0A8D5Cu, 2);  /* 0C0A8D5A mov.l Rm,@Rn */
	r0 = R32(r14 + 0x28u); UPD(0x0C0A8D5Eu, 1);  /* 0C0A8D5C mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB8u;  /* 0C0A8D5E add #imm,Rn */
	r6 = 0xC1E6B94u; UPD(0x0C0A8D62u, 2);  /* 0C0A8D60 mov.l @(disp,pc),Rn */
	IF(0x0C0A8D62u); r5 = R32(r0 + r6); UPD(0x0C0A8D64u, 1);  /* 0C0A8D62 mov.l @(r0,Rm),Rn */
	r0 = 0x3u;  /* 0C0A8D64 mov #imm,Rn */
	IF(0x0C0A8D66u); ARG0(0x430Du); { s32 s_ = (s32)r0; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C0A8D66 shld Rm,Rn */
	r4 = 0xC1E6ABCu; UPD(0x0C0A8D6Au, 3);  /* 0C0A8D68 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r5); UPD(0x0C0A8D6Cu, 1);  /* 0C0A8D6A mov.l Rm,@(disp,Rn) */
	r3 += r4;  /* 0C0A8D6C add Rm,Rn */
	W32(r8 + 0x10u, r12); UPD(0x0C0A8D70u, 2);  /* 0C0A8D6E mov.l Rm,@(disp,Rn) */
	r2 = R32(r3 + 0x4u); UPD(0x0C0A8D72u, 1);  /* 0C0A8D70 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0A8D74u, 1);  /* 0C0A8D72 mov.l Rm,@(disp,Rn) */
	r7 = R32(r3); UPD(0x0C0A8D76u, 1);  /* 0C0A8D74 mov.l @Rm,Rn */
	r0 = R32(r14 + 0x2Cu); UPD(0x0C0A8D78u, 1);  /* 0C0A8D76 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x14u, r7); UPD(0x0C0A8D7Au, 1);  /* 0C0A8D78 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8D7Au); r6 = R32(r0 + r7); UPD(0x0C0A8D7Cu, 1);  /* 0C0A8D7A mov.l @(r0,Rm),Rn */
	r0 = R32(r14 + 0x20u); UPD(0x0C0A8D7Eu, 1);  /* 0C0A8D7C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x18u, r6); UPD(0x0C0A8D80u, 1);  /* 0C0A8D7E mov.l Rm,@(disp,Rn) */
	r0 += r6;  /* 0C0A8D80 add Rm,Rn */
	r5 = R32(r0); UPD(0x0C0A8D84u, 2);  /* 0C0A8D82 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r5); UPD(0x0C0A8D86u, 1);  /* 0C0A8D84 mov.l Rm,@(disp,Rn) */
	r4 = R32(r0 + 0x4u); UPD(0x0C0A8D88u, 1);  /* 0C0A8D86 mov.l @(disp,Rm),Rn */
	r3 = 0xC21F894u; UPD(0x0C0A8D8Au, 1);  /* 0C0A8D88 mov.l @(disp,pc),Rn */
	r0 = 0x50u;  /* 0C0A8D8A mov #imm,Rn */
	W32(r8 + 0x20u, r4); UPD(0x0C0A8D8Eu, 2);  /* 0C0A8D8C mov.l Rm,@(disp,Rn) */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A8D90u, 1);  /* 0C0A8D8E mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0A8D90 add #imm,Rn */
	W16(r8, r7); UPD(0x0C0A8D94u, 2);  /* 0C0A8D92 mov.w Rm,@Rn */
	r2 = R32(r14); UPD(0x0C0A8D96u, 1);  /* 0C0A8D94 mov.l @Rm,Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0A8D96 add #imm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C0A8D9Au, 2);  /* 0C0A8D98 mov.l Rm,@(disp,Rn) */
	r6 = R32(r14 + 0x4u); UPD(0x0C0A8D9Cu, 1);  /* 0C0A8D9A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r6); UPD(0x0C0A8D9Eu, 1);  /* 0C0A8D9C mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8D9Eu); r5 = R32(r0 + r14); UPD(0x0C0A8DA0u, 1);  /* 0C0A8D9E mov.l @(r0,Rm),Rn */
	r0 = 0xC058060u; UPD(0x0C0A8DA2u, 1);  /* 0C0A8DA0 mov.l @(disp,pc),Rn */
	IF(0x0C0A8DA2u); { u32 t_ = r0; PR = 0x0C0A8DA6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A8DA6u); }  /* 0C0A8DA2 jsr @Rn */
L_0C0A8DA6: BLKS(0x0C0A8DA6u);
	W32(r8 + 0x30u, r0); UPD(0x0C0A8DA8u, 1);  /* 0C0A8DA6 mov.l Rm,@(disp,Rn) */
	r0 = 0x50u;  /* 0C0A8DA8 mov #imm,Rn */
	IF(0x0C0A8DAAu); r5 = R32(r0 + r14); UPD(0x0C0A8DACu, 2);  /* 0C0A8DAA mov.l @(r0,Rm),Rn */
	r0 = 0xC058030u; UPD(0x0C0A8DAEu, 1);  /* 0C0A8DAC mov.l @(disp,pc),Rn */
	IF(0x0C0A8DAEu); { u32 t_ = r0; PR = 0x0C0A8DB2u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A8DB2u); }  /* 0C0A8DAE jsr @Rn */
L_0C0A8DB2: BLKS(0x0C0A8DB2u);
	W32(r8 + 0x34u, r0); UPD(0x0C0A8DB4u, 1);  /* 0C0A8DB2 mov.l Rm,@(disp,Rn) */
	r5 = 0x0u;  /* 0C0A8DB4 mov #imm,Rn */
	r8 += 0x50u;  /* 0C0A8DB6 add #imm,Rn */
	W8(r8, r5); UPD(0x0C0A8DBAu, 3);  /* 0C0A8DB8 mov.b Rm,@Rn */
	r3 = r11;  /* 0C0A8DBA mov Rm,Rn */
	r0 = 0x207C0C0u; UPD(0x0C0A8DBEu, 2);  /* 0C0A8DBC mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0A8DBE add #imm,Rn */
	W32(r8 + 0x3Cu, r0); UPD(0x0C0A8DC2u, 2);  /* 0C0A8DC0 mov.l Rm,@(disp,Rn) */
	r3 += 0xFFFFFFFFu;  /* 0C0A8DC2 add #imm,Rn */
	r4 = 0x808080u; UPD(0x0C0A8DC6u, 2);  /* 0C0A8DC4 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0A8DC6 add #imm,Rn */
	W32(r8, r4); UPD(0x0C0A8DCAu, 2);  /* 0C0A8DC8 mov.l Rm,@Rn */
	r0 = 0x16u;  /* 0C0A8DCA mov #imm,Rn */
	IF(0x0C0A8DCCu); r1 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0A8DCEu, 2);  /* 0C0A8DCC mov.w @(r0,Rm),Rn */
	r8 += 0xCu;  /* 0C0A8DCE add #imm,Rn */
	r11 = (u32)(s32)(s16)r3;  /* 0C0A8DD0 exts.w Rm,Rn */
	W16(r8, r1); UPD(0x0C0A8DD4u, 3);  /* 0C0A8DD2 mov.w Rm,@Rn */
	IF(0x0C0A8DD4u); T = (s32)r11 >= 0;  /* 0C0A8DD4 cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x14u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A8D1Cu, 4); goto L_0C0A8D1C; } UPD(0x0C0A8DDAu, 1); goto L_0C0A8DDA; }  /* 0C0A8DD6 bt/s */
L_0C0A8DDA: BLKS(0x0C0A8DDAu);
	r12 = R32(r14 + 0x10u); UPD(0x0C0A8DDCu, 1);  /* 0C0A8DDA mov.l @(disp,Rm),Rn */
	r12 += 0x1u;  /* 0C0A8DDC add #imm,Rn */
	r11 = (u32)(s32)(s16)r12;  /* 0C0A8DDE exts.w Rm,Rn */
	r10 = R32(r14 + 0xCu); UPD(0x0C0A8DE2u, 3);  /* 0C0A8DE0 mov.l @(disp,Rm),Rn */
	T = (s32)r11 >= (s32)r10;  /* 0C0A8DE2 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x10u, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A8CFCu, 4); goto L_0C0A8CFC; } UPD(0x0C0A8DE8u, 1); goto L_0C0A8DE8; }  /* 0C0A8DE4 bf/s */
L_0C0A8DE8: BLKS(0x0C0A8DE8u);
	r13 = 0xC0AFC10u; UPD(0x0C0A8DEAu, 1);  /* 0C0A8DE8 mov.l @(disp,pc),Rn */
	IF(0x0C0A8DEAu); { u32 t_ = r13; PR = 0x0C0A8DEEu; r4 = 0x79u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0A8DEEu); }  /* 0C0A8DEA jsr @Rn */
L_0C0A8DEE: BLKS(0x0C0A8DEEu);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A8C8Cu, 3); goto L_0C0A8C8C; }  /* 0C0A8DEE bra */
L_0C0A8E00: BLKS(0x0C0A8E00u);
	r9 = 0xC050D70u; UPD(0x0C0A8E02u, 1);  /* 0C0A8E00 mov.l @(disp,pc),Rn */
	IF(0x0C0A8E02u); { u32 t_ = r9; PR = 0x0C0A8E06u; r4 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A8E06u); }  /* 0C0A8E02 jsr @Rn */
L_0C0A8E06: BLKS(0x0C0A8E06u);
	{ r8 = r0; /* slot mov Rm,Rn */ UPD(0x0C0A8CCEu, 3); goto L_0C0A8CCE; }  /* 0C0A8E06 bra */
L_0C0A8E10: BLKS(0x0C0A8E10u);
	{ IF(0x0C0A8E12u); ; /* slot nop */ UPD(0x0C0A8C62u, 3); goto L_0C0A8C62; }  /* 0C0A8E10 bra */
}

/* FUN_0c0a8e70 */
void f_0C0A8E70(sh3_t *c)
{
	LOCALS;
L_0C0A8E70: BLKS(0x0C0A8E70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8E72u, 1);  /* 0C0A8E70 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C0A8E72 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8E76u, 2);  /* 0C0A8E74 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8E78u, 1);  /* 0C0A8E76 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8E7Au, 1);  /* 0C0A8E78 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C0A8E7A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8E7Eu, 2);  /* 0C0A8E7C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8E80u, 1);  /* 0C0A8E7E mov.l Rm,@-Rn */
	r12 = r4;  /* 0C0A8E80 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A8E84u, 2);  /* 0C0A8E82 mov.l Rm,@-Rn */
	IF(0x0C0A8E84u); r15 -= 4; W32(r15, PR); UPD(0x0C0A8E86u, 1);  /* 0C0A8E84 sts.l pr,@-Rn */
	r2 = 0xFF580000u; UPD(0x0C0A8E88u, 1);  /* 0C0A8E86 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFDCu;  /* 0C0A8E88 add #imm,Rn */
	r14 = r15;  /* 0C0A8E8A mov Rm,Rn */
	r2 += r5;  /* 0C0A8E8C add Rm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0A8E90u, 4);  /* 0C0A8E8E mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8E90u); T = (s32)r2 >= 0;  /* 0C0A8E90 cmp/pz Rn */
	W32(r14, r5); UPD(0x0C0A8E94u, 2);  /* 0C0A8E92 mov.l Rm,@Rn */
	{ u32 c_ = T; W32(r14 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A8E9Cu, 3); goto L_0C0A8E9C; } UPD(0x0C0A8E98u, 1); goto L_0C0A8E98; }  /* 0C0A8E94 bt/s */
L_0C0A8E98: BLKS(0x0C0A8E98u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A9010u, 3); goto L_0C0A9010; }  /* 0C0A8E98 bra */
L_0C0A8E9C: BLKS(0x0C0A8E9Cu);
	r0 = 0x980000u; UPD(0x0C0A8E9Eu, 1);  /* 0C0A8E9C mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0A8E9E cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8EBEu, 4); goto L_0C0A8EBE; } goto L_0C0A8EA4; }  /* 0C0A8EA0 bt/s */
L_0C0A8EA4: BLKS(0x0C0A8EA4u);
	r2 = 0xC3929E0u; UPD(0x0C0A8EA6u, 2);  /* 0C0A8EA4 mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C0A8EA8u, 1);  /* 0C0A8EA6 mov.l @Rm,Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0A8EAAu, 1);  /* 0C0A8EA8 mov.l @(disp,Rm),Rn */
	r3 = 0xFF880000u; UPD(0x0C0A8EACu, 1);  /* 0C0A8EAA mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C0A8EAC sub Rm,Rn */
	r2 += r3;  /* 0C0A8EAE add Rm,Rn */
	IF(0x0C0A8EB0u); T = (s32)r2 >= 0;  /* 0C0A8EB0 cmp/pz Rn */
	if (T) { UPD(0x0C0A8EB6u, 6); goto L_0C0A8EB6; }  /* 0C0A8EB2 bt */
L_0C0A8EB4: BLKS(0x0C0A8EB4u);
	r2 = 0u - r2;  /* 0C0A8EB4 neg Rm,Rn */
	UPD(0x0C0A8EB6u, 1);
L_0C0A8EB6: BLKS(0x0C0A8EB6u);
	r5 = 0x700000u; UPD(0x0C0A8EB8u, 1);  /* 0C0A8EB6 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C0A8EB8 cmp/gt Rm,Rn */
	IF(0x0C0A8EBAu); r0 = T;  /* 0C0A8EBA movt Rn */
	r0 ^= 0x1u;  /* 0C0A8EBC xor #imm,r0 */
	UPD(0x0C0A8EBEu, 3);
L_0C0A8EBE: BLKS(0x0C0A8EBEu);
	r6 = (u32)(s32)(s8)r0;  /* 0C0A8EBE exts.b Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0A8EC0 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8EE0u, 5); goto L_0C0A8EE0; } UPD(0x0C0A8EC6u, 1); goto L_0C0A8EC6; }  /* 0C0A8EC2 bf/s */
L_0C0A8EC6: BLKS(0x0C0A8EC6u);
	r14 += 0x24u;  /* 0C0A8EC6 add #imm,Rn */
	r15 = r14;  /* 0C0A8EC8 mov Rm,Rn */
	IF(0x0C0A8ECAu); PR = R32(r15); r15 += 4; UPD(0x0C0A8ECCu, 3);  /* 0C0A8ECA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A8ECEu, 1);  /* 0C0A8ECC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A8ED0u, 1);  /* 0C0A8ECE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A8ED2u, 1);  /* 0C0A8ED0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A8ED4u, 1);  /* 0C0A8ED2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A8ED6u, 1);  /* 0C0A8ED4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A8ED8u, 1);  /* 0C0A8ED6 mov.l @Rm+,Rn */
	IF(0x0C0A8ED8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A8ED8 rts */
L_0C0A8EE0: BLKS(0x0C0A8EE0u);
	r8 = 0xC060720u; UPD(0x0C0A8EE2u, 1);  /* 0C0A8EE0 mov.l @(disp,pc),Rn */
	IF(0x0C0A8EE2u); { u32 t_ = r8; PR = 0x0C0A8EE6u; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060720, 0x0C060720u, 0x0C0A8EE6u); }  /* 0C0A8EE2 jsr @Rn */
L_0C0A8EE6: BLKS(0x0C0A8EE6u);
	T = (r0 & r0) == 0;  /* 0C0A8EE6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A8EC6u, 4); goto L_0C0A8EC6; } goto L_0C0A8EEC; }  /* 0C0A8EE8 bt/s */
L_0C0A8EEC: BLKS(0x0C0A8EECu);
	r7 = 0x7u;  /* 0C0A8EEC mov #imm,Rn */
	T = (s32)r12 > (s32)r7;  /* 0C0A8EEE cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A8EF6u, 6); goto L_0C0A8EF6; }  /* 0C0A8EF0 bf */
L_0C0A8EF2: BLKS(0x0C0A8EF2u);
	{ IF(0x0C0A8EF4u); ; /* slot nop */ UPD(0x0C0A9000u, 3); goto L_0C0A9000; }  /* 0C0A8EF2 bra */
L_0C0A8EF6: BLKS(0x0C0A8EF6u);
	r8 = 0xC050D70u; UPD(0x0C0A8EF8u, 1);  /* 0C0A8EF6 mov.l @(disp,pc),Rn */
L_0C0A8EF8: BLKS(0x0C0A8EF8u);
	r13 = 0xC2755BCu; UPD(0x0C0A8EFAu, 1);  /* 0C0A8EF8 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0A8EFA mov #imm,Rn */
	IF(0x0C0A8EFCu); { u32 t_ = r8; PR = 0x0C0A8F00u; W32(r14 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A8F00u); }  /* 0C0A8EFC jsr @Rn */
L_0C0A8F00: BLKS(0x0C0A8F00u);
	r11 = r0;  /* 0C0A8F00 mov Rm,Rn */
	r11 += 0x18u;  /* 0C0A8F02 add #imm,Rn */
	W32(r14 + 0x10u, r11); UPD(0x0C0A8F06u, 3);  /* 0C0A8F04 mov.l Rm,@(disp,Rn) */
	r3 = 0x4u;  /* 0C0A8F06 mov #imm,Rn */
	IF(0x0C0A8F08u); ARG0(0x4B3Du); { s32 s_ = (s32)r3; if (s_ >= 0) r11 <<= (s_ & 31); else if ((s_ & 31) == 0) r11 = 0; else r11 >>= ((~s_ & 31) + 1); }  /* 0C0A8F08 shld Rm,Rn */
	W32(r14 + 0x20u, r11); UPD(0x0C0A8F0Cu, 3);  /* 0C0A8F0A mov.l Rm,@(disp,Rn) */
	r10 += 0x4u;  /* 0C0A8F0C add #imm,Rn */
	r11 = r10;  /* 0C0A8F0E mov Rm,Rn */
	IF(0x0C0A8F10u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0A8F10 shar Rn */
	IF(0x0C0A8F12u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0A8F12 shar Rn */
	IF(0x0C0A8F14u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0A8F14 shar Rn */
	r0 = 0x3Fu;  /* 0C0A8F16 mov #imm,Rn */
	r11 &= r0;  /* 0C0A8F18 and Rm,Rn */
	r1 = r11;  /* 0C0A8F1A mov Rm,Rn */
	r9 = 0x3u;  /* 0C0A8F1C mov #imm,Rn */
	r2 = r12;  /* 0C0A8F1E mov Rm,Rn */
	r4 = r12;  /* 0C0A8F20 mov Rm,Rn */
	IF(0x0C0A8F22u); ARG0(0x419Du); { s32 s_ = (s32)r9; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0A8F22 shld Rm,Rn */
	r2 += r2;  /* 0C0A8F24 add Rm,Rn */
	IF(0x0C0A8F26u); r4 <<= 2;  /* 0C0A8F26 shll2 Rn */
	W32(r14 + 0x18u, r2); UPD(0x0C0A8F2Au, 15);  /* 0C0A8F28 mov.l Rm,@(disp,Rn) */
	r13 = 0x2u;  /* 0C0A8F2A mov #imm,Rn */
	W32(r14 + 0x1Cu, r4); UPD(0x0C0A8F2Eu, 2);  /* 0C0A8F2C mov.l Rm,@(disp,Rn) */
	r10 += 0xFFFFFFFCu;  /* 0C0A8F2E add #imm,Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0A8F32u, 2);  /* 0C0A8F30 mov.l Rm,@(disp,Rn) */
L_0C0A8F32: BLKS(0x0C0A8F32u);
	r4 = R32(r14 + 0xCu); UPD(0x0C0A8F34u, 1);  /* 0C0A8F32 mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0A8F34 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r9 = v_; } UPD(0x0C0A8F38u, 2);  /* 0C0A8F36 mov.w @Rm+,Rn */
	r0 = r13;  /* 0C0A8F38 mov Rm,Rn */
	IF(0x0C0A8F3Au); MACL = r9 * r8;  /* 0C0A8F3A mul.l Rm,Rn */
	r7 = 0xC1E6BBCu; UPD(0x0C0A8F3Eu, 4);  /* 0C0A8F3C mov.l @(disp,pc),Rn */
	IF(0x0C0A8F3Eu); r0 <<= 2;  /* 0C0A8F3E shll2 Rn */
	r3 = 0xC27E0FCu; UPD(0x0C0A8F42u, 2);  /* 0C0A8F40 mov.l @(disp,pc),Rn */
	IF(0x0C0A8F42u); r8 = MACL;  /* 0C0A8F42 sts macl,Rn */
	IF(0x0C0A8F44u); r5 = R32(r0 + r7); UPD(0x0C0A8F46u, 2);  /* 0C0A8F44 mov.l @(r0,Rm),Rn */
	r8 += r3;  /* 0C0A8F46 add Rm,Rn */
	W32(r8, r5); UPD(0x0C0A8F4Au, 2);  /* 0C0A8F48 mov.l Rm,@Rn */
	r7 = 0x3u;  /* 0C0A8F4A mov #imm,Rn */
	r6 = 0xC1D9A80u; UPD(0x0C0A8F4Eu, 2);  /* 0C0A8F4C mov.l @(disp,pc),Rn */
	r0 = R32(r14 + 0x18u); UPD(0x0C0A8F50u, 1);  /* 0C0A8F4E mov.l @(disp,Rm),Rn */
	r5 = R32(r6); UPD(0x0C0A8F52u, 1);  /* 0C0A8F50 mov.l @Rm,Rn */
	r0 += r12;  /* 0C0A8F52 add Rm,Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C0A8F56u, 2);  /* 0C0A8F54 mov.l @(disp,Rm),Rn */
	r0 += r13;  /* 0C0A8F56 add Rm,Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C0A8F5Au, 2);  /* 0C0A8F58 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r1); UPD(0x0C0A8F5Cu, 1);  /* 0C0A8F5A mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8F5Cu); ARG0(0x457Du); { s32 s_ = (s32)r7; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0A8F5C shld Rm,Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C0A8F60u, 2);  /* 0C0A8F5E mov.l Rm,@(disp,Rn) */
	r8 += 0x44u;  /* 0C0A8F60 add #imm,Rn */
	W16(r8, r10); UPD(0x0C0A8F64u, 2);  /* 0C0A8F62 mov.w Rm,@Rn */
	r0 = 0x44u;  /* 0C0A8F64 mov #imm,Rn */
	IF(0x0C0A8F66u); r2 = R32(r0 + r14); UPD(0x0C0A8F68u, 2);  /* 0C0A8F66 mov.l @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0A8F68 add #imm,Rn */
	W32(r14 + 0xCu, r4); UPD(0x0C0A8F6Cu, 2);  /* 0C0A8F6A mov.l Rm,@(disp,Rn) */
	W32(r8, r2); UPD(0x0C0A8F6Eu, 1);  /* 0C0A8F6C mov.l Rm,@Rn */
	r0 = R32(r14 + 0x1Cu); UPD(0x0C0A8F70u, 1);  /* 0C0A8F6E mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB8u;  /* 0C0A8F70 add #imm,Rn */
	r4 = 0xC1E6BC8u; UPD(0x0C0A8F74u, 2);  /* 0C0A8F72 mov.l @(disp,pc),Rn */
	IF(0x0C0A8F74u); r3 = R32(r0 + r4); UPD(0x0C0A8F76u, 1);  /* 0C0A8F74 mov.l @(r0,Rm),Rn */
	r6 = 0xC1E6ABCu; UPD(0x0C0A8F78u, 1);  /* 0C0A8F76 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r3); UPD(0x0C0A8F7Au, 1);  /* 0C0A8F78 mov.l Rm,@(disp,Rn) */
	r5 += r6;  /* 0C0A8F7A add Rm,Rn */
	W32(r8 + 0x10u, r11); UPD(0x0C0A8F7Eu, 2);  /* 0C0A8F7C mov.l Rm,@(disp,Rn) */
	r2 = R32(r5 + 0x4u); UPD(0x0C0A8F80u, 1);  /* 0C0A8F7E mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0A8F82u, 1);  /* 0C0A8F80 mov.l Rm,@(disp,Rn) */
	r4 = R32(r5); UPD(0x0C0A8F84u, 1);  /* 0C0A8F82 mov.l @Rm,Rn */
	r0 = R32(r14 + 0x20u); UPD(0x0C0A8F86u, 1);  /* 0C0A8F84 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x14u, r4); UPD(0x0C0A8F88u, 1);  /* 0C0A8F86 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8F88u); r3 = R32(r0 + r4); UPD(0x0C0A8F8Au, 1);  /* 0C0A8F88 mov.l @(r0,Rm),Rn */
	r7 = R32(r14 + 0x14u); UPD(0x0C0A8F8Cu, 1);  /* 0C0A8F8A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x18u, r3); UPD(0x0C0A8F8Eu, 1);  /* 0C0A8F8C mov.l Rm,@(disp,Rn) */
	r7 += r3;  /* 0C0A8F8E add Rm,Rn */
	r0 = R32(r7); UPD(0x0C0A8F92u, 2);  /* 0C0A8F90 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0A8F94u, 1);  /* 0C0A8F92 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7 + 0x4u); UPD(0x0C0A8F96u, 1);  /* 0C0A8F94 mov.l @(disp,Rm),Rn */
	r0 = 0x44u;  /* 0C0A8F96 mov #imm,Rn */
	r5 = 0xC21F894u; UPD(0x0C0A8F9Au, 2);  /* 0C0A8F98 mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r6); UPD(0x0C0A8F9Cu, 1);  /* 0C0A8F9A mov.l Rm,@(disp,Rn) */
	r2 = (u32)(s32)(s16)R16(r5); UPD(0x0C0A8F9Eu, 1);  /* 0C0A8F9C mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0A8F9E add #imm,Rn */
	W16(r8, r2); UPD(0x0C0A8FA2u, 2);  /* 0C0A8FA0 mov.w Rm,@Rn */
	r4 = R32(r14); UPD(0x0C0A8FA4u, 1);  /* 0C0A8FA2 mov.l @Rm,Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0A8FA4 add #imm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C0A8FA8u, 2);  /* 0C0A8FA6 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x4u); UPD(0x0C0A8FAAu, 1);  /* 0C0A8FA8 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r1); UPD(0x0C0A8FACu, 1);  /* 0C0A8FAA mov.l Rm,@(disp,Rn) */
	IF(0x0C0A8FACu); r5 = R32(r0 + r14); UPD(0x0C0A8FAEu, 1);  /* 0C0A8FAC mov.l @(r0,Rm),Rn */
	r0 = 0xC058060u; UPD(0x0C0A8FB0u, 1);  /* 0C0A8FAE mov.l @(disp,pc),Rn */
	IF(0x0C0A8FB0u); { u32 t_ = r0; PR = 0x0C0A8FB4u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A8FB4u); }  /* 0C0A8FB0 jsr @Rn */
L_0C0A8FB4: BLKS(0x0C0A8FB4u);
	W32(r8 + 0x30u, r0); UPD(0x0C0A8FB6u, 1);  /* 0C0A8FB4 mov.l Rm,@(disp,Rn) */
	r0 = 0x44u;  /* 0C0A8FB6 mov #imm,Rn */
	IF(0x0C0A8FB8u); r5 = R32(r0 + r14); UPD(0x0C0A8FBAu, 2);  /* 0C0A8FB8 mov.l @(r0,Rm),Rn */
	r0 = 0xC058030u; UPD(0x0C0A8FBCu, 1);  /* 0C0A8FBA mov.l @(disp,pc),Rn */
	IF(0x0C0A8FBCu); { u32 t_ = r0; PR = 0x0C0A8FC0u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A8FC0u); }  /* 0C0A8FBC jsr @Rn */
L_0C0A8FC0: BLKS(0x0C0A8FC0u);
	W32(r8 + 0x34u, r0); UPD(0x0C0A8FC2u, 1);  /* 0C0A8FC0 mov.l Rm,@(disp,Rn) */
	r3 = 0x0u;  /* 0C0A8FC2 mov #imm,Rn */
	r8 += 0x50u;  /* 0C0A8FC4 add #imm,Rn */
	W8(r8, r3); UPD(0x0C0A8FC8u, 3);  /* 0C0A8FC6 mov.b Rm,@Rn */
	r5 = r13;  /* 0C0A8FC8 mov Rm,Rn */
	r0 = 0x207C0C0u; UPD(0x0C0A8FCCu, 2);  /* 0C0A8FCA mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0A8FCC add #imm,Rn */
	W32(r8 + 0x3Cu, r0); UPD(0x0C0A8FD0u, 2);  /* 0C0A8FCE mov.l Rm,@(disp,Rn) */
	r5 += 0xFFFFFFFFu;  /* 0C0A8FD0 add #imm,Rn */
	r7 = 0x808080u; UPD(0x0C0A8FD4u, 2);  /* 0C0A8FD2 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0A8FD4 add #imm,Rn */
	W32(r8, r7); UPD(0x0C0A8FD8u, 2);  /* 0C0A8FD6 mov.l Rm,@Rn */
	r0 = 0xAu;  /* 0C0A8FD8 mov #imm,Rn */
	IF(0x0C0A8FDAu); r6 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0A8FDCu, 2);  /* 0C0A8FDA mov.w @(r0,Rm),Rn */
	r8 += 0xCu;  /* 0C0A8FDC add #imm,Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C0A8FDE exts.w Rm,Rn */
	W16(r8, r6); UPD(0x0C0A8FE2u, 3);  /* 0C0A8FE0 mov.w Rm,@Rn */
	IF(0x0C0A8FE2u); T = (s32)r13 >= 0;  /* 0C0A8FE2 cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A8F32u, 4); goto L_0C0A8F32; } UPD(0x0C0A8FE8u, 1); goto L_0C0A8FE8; }  /* 0C0A8FE4 bt/s */
L_0C0A8FE8: BLKS(0x0C0A8FE8u);
	r10 = 0xC0AFC10u; UPD(0x0C0A8FEAu, 1);  /* 0C0A8FE8 mov.l @(disp,pc),Rn */
	IF(0x0C0A8FEAu); { u32 t_ = r10; PR = 0x0C0A8FEEu; r4 = 0x79u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0A8FEEu); }  /* 0C0A8FEA jsr @Rn */
L_0C0A8FEE: BLKS(0x0C0A8FEEu);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A8EC6u, 3); goto L_0C0A8EC6; }  /* 0C0A8FEE bra */
L_0C0A9000: BLKS(0x0C0A9000u);
	r8 = 0xC050D70u; UPD(0x0C0A9002u, 1);  /* 0C0A9000 mov.l @(disp,pc),Rn */
	IF(0x0C0A9002u); { u32 t_ = r8; PR = 0x0C0A9006u; r4 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A9006u); }  /* 0C0A9002 jsr @Rn */
L_0C0A9006: BLKS(0x0C0A9006u);
	{ r12 = r0; /* slot mov Rm,Rn */ UPD(0x0C0A8EF8u, 3); goto L_0C0A8EF8; }  /* 0C0A9006 bra */
L_0C0A9010: BLKS(0x0C0A9010u);
	{ IF(0x0C0A9012u); ; /* slot nop */ UPD(0x0C0A8E9Cu, 3); goto L_0C0A8E9C; }  /* 0C0A9010 bra */
}

/* FUN_0c0a9060 */
void f_0C0A9060(sh3_t *c)
{
	LOCALS;
L_0C0A9060: BLKS(0x0C0A9060u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9062u, 1);  /* 0C0A9060 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C0A9062 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9066u, 2);  /* 0C0A9064 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s16)r7;  /* 0C0A9066 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A906Au, 2);  /* 0C0A9068 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A906Cu, 1);  /* 0C0A906A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A906Eu, 1);  /* 0C0A906C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9070u, 1);  /* 0C0A906E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A9072u, 1);  /* 0C0A9070 mov.l Rm,@-Rn */
	IF(0x0C0A9072u); r15 -= 4; W32(r15, PR); UPD(0x0C0A9074u, 1);  /* 0C0A9072 sts.l pr,@-Rn */
	r2 = 0xFF580000u; UPD(0x0C0A9076u, 1);  /* 0C0A9074 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFD0u;  /* 0C0A9076 add #imm,Rn */
	r14 = r15;  /* 0C0A9078 mov Rm,Rn */
	r2 += r5;  /* 0C0A907A add Rm,Rn */
	W32(r14 + 0x18u, r1); UPD(0x0C0A907Eu, 4);  /* 0C0A907C mov.l Rm,@(disp,Rn) */
	IF(0x0C0A907Eu); T = (s32)r2 >= 0;  /* 0C0A907E cmp/pz Rn */
	W32(r14, r4); UPD(0x0C0A9082u, 2);  /* 0C0A9080 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0A9084u, 1);  /* 0C0A9082 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r6); UPD(0x0C0A9086u, 1);  /* 0C0A9084 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r14 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A908Eu, 3); goto L_0C0A908E; } UPD(0x0C0A908Au, 1); goto L_0C0A908A; }  /* 0C0A9086 bt/s */
L_0C0A908A: BLKS(0x0C0A908Au);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A9250u, 3); goto L_0C0A9250; }  /* 0C0A908A bra */
L_0C0A908E: BLKS(0x0C0A908Eu);
	r0 = 0x980000u; UPD(0x0C0A9090u, 1);  /* 0C0A908E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0A9090 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A90B0u, 4); goto L_0C0A90B0; } goto L_0C0A9096; }  /* 0C0A9092 bt/s */
L_0C0A9096: BLKS(0x0C0A9096u);
	r2 = 0xC3929E0u; UPD(0x0C0A9098u, 2);  /* 0C0A9096 mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C0A909Au, 1);  /* 0C0A9098 mov.l @Rm,Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C0A909Cu, 1);  /* 0C0A909A mov.l @(disp,Rm),Rn */
	r3 = 0xFF880000u; UPD(0x0C0A909Eu, 1);  /* 0C0A909C mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C0A909E sub Rm,Rn */
	r2 += r3;  /* 0C0A90A0 add Rm,Rn */
	IF(0x0C0A90A2u); T = (s32)r2 >= 0;  /* 0C0A90A2 cmp/pz Rn */
	if (T) { UPD(0x0C0A90A8u, 6); goto L_0C0A90A8; }  /* 0C0A90A4 bt */
L_0C0A90A6: BLKS(0x0C0A90A6u);
	r2 = 0u - r2;  /* 0C0A90A6 neg Rm,Rn */
	UPD(0x0C0A90A8u, 1);
L_0C0A90A8: BLKS(0x0C0A90A8u);
	r5 = 0x700000u; UPD(0x0C0A90AAu, 1);  /* 0C0A90A8 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C0A90AA cmp/gt Rm,Rn */
	IF(0x0C0A90ACu); r0 = T;  /* 0C0A90AC movt Rn */
	r0 ^= 0x1u;  /* 0C0A90AE xor #imm,r0 */
	UPD(0x0C0A90B0u, 3);
L_0C0A90B0: BLKS(0x0C0A90B0u);
	r6 = (u32)(s32)(s8)r0;  /* 0C0A90B0 exts.b Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0A90B2 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A90D0u, 5); goto L_0C0A90D0; } UPD(0x0C0A90B8u, 1); goto L_0C0A90B8; }  /* 0C0A90B4 bf/s */
L_0C0A90B8: BLKS(0x0C0A90B8u);
	r14 += 0x30u;  /* 0C0A90B8 add #imm,Rn */
	r15 = r14;  /* 0C0A90BA mov Rm,Rn */
	IF(0x0C0A90BCu); PR = R32(r15); r15 += 4; UPD(0x0C0A90BEu, 3);  /* 0C0A90BC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A90C0u, 1);  /* 0C0A90BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A90C2u, 1);  /* 0C0A90C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A90C4u, 1);  /* 0C0A90C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A90C6u, 1);  /* 0C0A90C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A90C8u, 1);  /* 0C0A90C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A90CAu, 1);  /* 0C0A90C8 mov.l @Rm+,Rn */
	IF(0x0C0A90CAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A90CA rts */
L_0C0A90D0: BLKS(0x0C0A90D0u);
	r0 = 0x54u;  /* 0C0A90D0 mov #imm,Rn */
	IF(0x0C0A90D2u); r11 = R32(r0 + r14); UPD(0x0C0A90D4u, 2);  /* 0C0A90D2 mov.l @(r0,Rm),Rn */
	r7 = 0x3u;  /* 0C0A90D4 mov #imm,Rn */
	r11 += 0x2u;  /* 0C0A90D6 add #imm,Rn */
	IF(0x0C0A90D8u); W32(r0 + r14, r11); UPD(0x0C0A90DAu, 3);  /* 0C0A90D8 mov.l Rm,@(r0,Rn) */
	r11 += 0xFFFFFFFEu;  /* 0C0A90DA add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r10 = v_; } UPD(0x0C0A90DEu, 2);  /* 0C0A90DC mov.w @Rm+,Rn */
	r0 = 0x12u;  /* 0C0A90DE mov #imm,Rn */
	W32(r14 + 0x10u, r10); UPD(0x0C0A90E2u, 2);  /* 0C0A90E0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A90E2u); r9 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0A90E4u, 1);  /* 0C0A90E2 mov.w @(r0,Rm),Rn */
	r8 = 0xC060720u; UPD(0x0C0A90E6u, 1);  /* 0C0A90E4 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r9 * (s32)(s16)r7);  /* 0C0A90E6 muls.w Rm,Rn */
	IF(0x0C0A90E8u); { u32 t_ = r8; PR = 0x0C0A90ECu; IF(0x0C0A90EAu); r4 = MACL; /* slot sts macl,Rn */ UPD(t_, 4); CALLP(t_, f_0C060720, 0x0C060720u, 0x0C0A90ECu); }  /* 0C0A90E8 jsr @Rn */
L_0C0A90EC: BLKS(0x0C0A90ECu);
	T = (r0 & r0) == 0;  /* 0C0A90EC tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A90B8u, 4); goto L_0C0A90B8; } goto L_0C0A90F2; }  /* 0C0A90EE bt/s */
L_0C0A90F2: BLKS(0x0C0A90F2u);
	r13 = R32(r14); UPD(0x0C0A90F4u, 2);  /* 0C0A90F2 mov.l @Rm,Rn */
	r12 = 0x7u;  /* 0C0A90F4 mov #imm,Rn */
	T = (s32)r13 > (s32)r12;  /* 0C0A90F6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A90FEu, 5); goto L_0C0A90FE; }  /* 0C0A90F8 bf */
L_0C0A90FA: BLKS(0x0C0A90FAu);
	{ IF(0x0C0A90FCu); ; /* slot nop */ UPD(0x0C0A9240u, 3); goto L_0C0A9240; }  /* 0C0A90FA bra */
L_0C0A90FE: BLKS(0x0C0A90FEu);
	r8 = 0xC050D70u; UPD(0x0C0A9100u, 1);  /* 0C0A90FE mov.l @(disp,pc),Rn */
L_0C0A9100: BLKS(0x0C0A9100u);
	r1 = 0xC2755BCu; UPD(0x0C0A9102u, 1);  /* 0C0A9100 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0A9102 mov #imm,Rn */
	IF(0x0C0A9104u); { u32 t_ = r8; PR = 0x0C0A9108u; W32(r14 + 0x1Cu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A9108u); }  /* 0C0A9104 jsr @Rn */
L_0C0A9108: BLKS(0x0C0A9108u);
	r13 = r0;  /* 0C0A9108 mov Rm,Rn */
	r3 = 0x0u;  /* 0C0A910A mov #imm,Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0A910Eu, 3);  /* 0C0A910C mov.l @(disp,Rm),Rn */
	r13 += 0x18u;  /* 0C0A910E add #imm,Rn */
	T = (s32)r3 >= (s32)r0;  /* 0C0A9110 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x14u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A911Au, 5); goto L_0C0A911A; } UPD(0x0C0A9116u, 1); goto L_0C0A9116; }  /* 0C0A9112 bf/s */
L_0C0A9116: BLKS(0x0C0A9116u);
	{ IF(0x0C0A9118u); ; /* slot nop */ UPD(0x0C0A922Eu, 3); goto L_0C0A922E; }  /* 0C0A9116 bra */
L_0C0A911A: BLKS(0x0C0A911Au);
	r6 = R32(r14); UPD(0x0C0A911Cu, 1);  /* 0C0A911A mov.l @Rm,Rn */
	r4 = r13;  /* 0C0A911C mov Rm,Rn */
	r2 = R32(r14); UPD(0x0C0A9120u, 2);  /* 0C0A911E mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C0A9120 mov #imm,Rn */
	IF(0x0C0A9122u); ARG0(0x445Du); { s32 s_ = (s32)r5; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0A9122 shld Rm,Rn */
	r6 += r6;  /* 0C0A9124 add Rm,Rn */
	IF(0x0C0A9126u); r2 <<= 2;  /* 0C0A9126 shll2 Rn */
	W32(r14 + 0x24u, r6); UPD(0x0C0A912Au, 5);  /* 0C0A9128 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x28u, r2); UPD(0x0C0A912Cu, 1);  /* 0C0A912A mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x2Cu, r4); UPD(0x0C0A912Eu, 1);  /* 0C0A912C mov.l Rm,@(disp,Rn) */
	r0 = 0x40u;  /* 0C0A912E mov #imm,Rn */
	UPD(0x0C0A9130u, 1);
L_0C0A9130: BLKS(0x0C0A9130u);
	r0 += r14;  /* 0C0A9130 add Rm,Rn */
	r12 = R32(r0 + 0x14u); UPD(0x0C0A9134u, 2);  /* 0C0A9132 mov.l @(disp,Rm),Rn */
	r9 = 0x3Fu;  /* 0C0A9134 mov #imm,Rn */
	r12 += 0x2u;  /* 0C0A9136 add #imm,Rn */
	W32(r0 + 0x14u, r12); UPD(0x0C0A913Au, 3);  /* 0C0A9138 mov.l Rm,@(disp,Rn) */
	r7 = 0x3u;  /* 0C0A913A mov #imm,Rn */
	r12 += 0xFFFFFFFEu;  /* 0C0A913C add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r11 = v_; } UPD(0x0C0A9140u, 3);  /* 0C0A913E mov.w @Rm+,Rn */
	r10 = R32(r14 + 0xCu); UPD(0x0C0A9142u, 1);  /* 0C0A9140 mov.l @(disp,Rm),Rn */
	r12 = 0x2u;  /* 0C0A9142 mov #imm,Rn */
	r11 += r10;  /* 0C0A9144 add Rm,Rn */
	r10 = (u32)(s32)(s16)r11;  /* 0C0A9146 exts.w Rm,Rn */
	r10 += 0x4u;  /* 0C0A9148 add #imm,Rn */
	r11 = r10;  /* 0C0A914A mov Rm,Rn */
	IF(0x0C0A914Cu); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0A914C shar Rn */
	IF(0x0C0A914Eu); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0A914E shar Rn */
	IF(0x0C0A9150u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0A9150 shar Rn */
	r11 &= r9;  /* 0C0A9152 and Rm,Rn */
	r8 = r11;  /* 0C0A9154 mov Rm,Rn */
	IF(0x0C0A9156u); ARG0(0x487Du); { s32 s_ = (s32)r7; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C0A9156 shld Rm,Rn */
	W32(r14 + 0x20u, r8); UPD(0x0C0A915Au, 12);  /* 0C0A9158 mov.l Rm,@(disp,Rn) */
	r10 += 0xFFFFFFFCu;  /* 0C0A915A add #imm,Rn */
	UPD(0x0C0A915Cu, 1);
L_0C0A915C: BLKS(0x0C0A915Cu);
	r1 = R32(r14 + 0x1Cu); UPD(0x0C0A915Eu, 1);  /* 0C0A915C mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0A915E mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r9 = v_; } UPD(0x0C0A9162u, 2);  /* 0C0A9160 mov.w @Rm+,Rn */
	r0 = r12;  /* 0C0A9162 mov Rm,Rn */
	IF(0x0C0A9164u); MACL = r9 * r8;  /* 0C0A9164 mul.l Rm,Rn */
	r7 = 0xC1E6BBCu; UPD(0x0C0A9168u, 4);  /* 0C0A9166 mov.l @(disp,pc),Rn */
	IF(0x0C0A9168u); r0 <<= 2;  /* 0C0A9168 shll2 Rn */
	r4 = 0xC27E0FCu; UPD(0x0C0A916Cu, 2);  /* 0C0A916A mov.l @(disp,pc),Rn */
	IF(0x0C0A916Cu); r8 = MACL;  /* 0C0A916C sts macl,Rn */
	IF(0x0C0A916Eu); r6 = R32(r0 + r7); UPD(0x0C0A9170u, 2);  /* 0C0A916E mov.l @(r0,Rm),Rn */
	r8 += r4;  /* 0C0A9170 add Rm,Rn */
	W32(r8, r6); UPD(0x0C0A9174u, 2);  /* 0C0A9172 mov.l Rm,@Rn */
	r2 = 0xC27DC50u; UPD(0x0C0A9176u, 1);  /* 0C0A9174 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0A9178u, 1);  /* 0C0A9176 mov.b @Rm,Rn */
	W32(r14 + 0x1Cu, r1); UPD(0x0C0A917Au, 1);  /* 0C0A9178 mov.l Rm,@(disp,Rn) */
	r0 = r5 & 0xFF;  /* 0C0A917A extu.b Rm,Rn */
	r3 = 0xC1D9A80u; UPD(0x0C0A917Eu, 2);  /* 0C0A917C mov.l @(disp,pc),Rn */
	IF(0x0C0A917Eu); r0 <<= 2;  /* 0C0A917E shll2 Rn */
	r1 = R32(r14); UPD(0x0C0A9182u, 2);  /* 0C0A9180 mov.l @Rm,Rn */
	r0 += r3;  /* 0C0A9182 add Rm,Rn */
	r4 = R32(r14 + 0x24u); UPD(0x0C0A9186u, 2);  /* 0C0A9184 mov.l @(disp,Rm),Rn */
	r5 = 0x3u;  /* 0C0A9186 mov #imm,Rn */
	r3 = R32(r0 + 0x4u); UPD(0x0C0A918Au, 2);  /* 0C0A9188 mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C0A918A add Rm,Rn */
	r4 += r12;  /* 0C0A918C add Rm,Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C0A9190u, 3);  /* 0C0A918E mov.l Rm,@(disp,Rn) */
	r0 = 0x50u;  /* 0C0A9190 mov #imm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C0A9194u, 2);  /* 0C0A9192 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A9194u); ARG0(0x435Du); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C0A9194 shld Rm,Rn */
	W32(r8 + 0x8u, r13); UPD(0x0C0A9198u, 2);  /* 0C0A9196 mov.l Rm,@(disp,Rn) */
	r8 += 0x44u;  /* 0C0A9198 add #imm,Rn */
	W16(r8, r10); UPD(0x0C0A919Cu, 2);  /* 0C0A919A mov.w Rm,@Rn */
	IF(0x0C0A919Cu); r7 = R32(r0 + r14); UPD(0x0C0A919Eu, 1);  /* 0C0A919C mov.l @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0A919E add #imm,Rn */
	W32(r8, r7); UPD(0x0C0A91A2u, 2);  /* 0C0A91A0 mov.l Rm,@Rn */
	r0 = R32(r14 + 0x28u); UPD(0x0C0A91A4u, 1);  /* 0C0A91A2 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB8u;  /* 0C0A91A4 add #imm,Rn */
	r6 = 0xC1E6BC8u; UPD(0x0C0A91A8u, 2);  /* 0C0A91A6 mov.l @(disp,pc),Rn */
	IF(0x0C0A91A8u); r2 = R32(r0 + r6); UPD(0x0C0A91AAu, 1);  /* 0C0A91A8 mov.l @(r0,Rm),Rn */
	r4 = 0xC1E6ABCu; UPD(0x0C0A91ACu, 1);  /* 0C0A91AA mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r2); UPD(0x0C0A91AEu, 1);  /* 0C0A91AC mov.l Rm,@(disp,Rn) */
	r3 += r4;  /* 0C0A91AE add Rm,Rn */
	W32(r8 + 0x10u, r11); UPD(0x0C0A91B2u, 2);  /* 0C0A91B0 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x4u); UPD(0x0C0A91B4u, 1);  /* 0C0A91B2 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0A91B6u, 1);  /* 0C0A91B4 mov.l Rm,@(disp,Rn) */
	r7 = R32(r3); UPD(0x0C0A91B8u, 1);  /* 0C0A91B6 mov.l @Rm,Rn */
	r0 = R32(r14 + 0x2Cu); UPD(0x0C0A91BAu, 1);  /* 0C0A91B8 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x14u, r7); UPD(0x0C0A91BCu, 1);  /* 0C0A91BA mov.l Rm,@(disp,Rn) */
	IF(0x0C0A91BCu); r6 = R32(r0 + r7); UPD(0x0C0A91BEu, 1);  /* 0C0A91BC mov.l @(r0,Rm),Rn */
	r5 = R32(r14 + 0x20u); UPD(0x0C0A91C0u, 1);  /* 0C0A91BE mov.l @(disp,Rm),Rn */
	W32(r8 + 0x18u, r6); UPD(0x0C0A91C2u, 1);  /* 0C0A91C0 mov.l Rm,@(disp,Rn) */
	r5 += r6;  /* 0C0A91C2 add Rm,Rn */
	r2 = R32(r5); UPD(0x0C0A91C6u, 2);  /* 0C0A91C4 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r2); UPD(0x0C0A91C8u, 1);  /* 0C0A91C6 mov.l Rm,@(disp,Rn) */
	r4 = R32(r5 + 0x4u); UPD(0x0C0A91CAu, 1);  /* 0C0A91C8 mov.l @(disp,Rm),Rn */
	r3 = 0xC21F894u; UPD(0x0C0A91CCu, 1);  /* 0C0A91CA mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r4); UPD(0x0C0A91CEu, 1);  /* 0C0A91CC mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A91D0u, 1);  /* 0C0A91CE mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0A91D0 add #imm,Rn */
	W16(r8, r0); UPD(0x0C0A91D4u, 2);  /* 0C0A91D2 mov.w Rm,@Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C0A91D6u, 1);  /* 0C0A91D4 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0A91D6 add #imm,Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C0A91DAu, 2);  /* 0C0A91D8 mov.l Rm,@(disp,Rn) */
	r0 = 0x50u; UPD(0x0C0A91DCu, 1);  /* 0C0A91DA mov #imm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0A91DEu, 1);  /* 0C0A91DC mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r1); UPD(0x0C0A91E0u, 1);  /* 0C0A91DE mov.l Rm,@(disp,Rn) */
	IF(0x0C0A91E0u); r5 = R32(r0 + r14); UPD(0x0C0A91E2u, 1);  /* 0C0A91E0 mov.l @(r0,Rm),Rn */
	r0 = 0xC058060u; UPD(0x0C0A91E4u, 1);  /* 0C0A91E2 mov.l @(disp,pc),Rn */
	IF(0x0C0A91E4u); { u32 t_ = r0; PR = 0x0C0A91E8u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A91E8u); }  /* 0C0A91E4 jsr @Rn */
L_0C0A91E8: BLKS(0x0C0A91E8u);
	W32(r8 + 0x30u, r0); UPD(0x0C0A91EAu, 1);  /* 0C0A91E8 mov.l Rm,@(disp,Rn) */
	r0 = 0x50u;  /* 0C0A91EA mov #imm,Rn */
	IF(0x0C0A91ECu); r5 = R32(r0 + r14); UPD(0x0C0A91EEu, 2);  /* 0C0A91EC mov.l @(r0,Rm),Rn */
	r0 = 0xC058030u; UPD(0x0C0A91F0u, 1);  /* 0C0A91EE mov.l @(disp,pc),Rn */
	IF(0x0C0A91F0u); { u32 t_ = r0; PR = 0x0C0A91F4u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A91F4u); }  /* 0C0A91F0 jsr @Rn */
L_0C0A91F4: BLKS(0x0C0A91F4u);
	W32(r8 + 0x34u, r0); UPD(0x0C0A91F6u, 1);  /* 0C0A91F4 mov.l Rm,@(disp,Rn) */
	r6 = 0x0u;  /* 0C0A91F6 mov #imm,Rn */
	r8 += 0x50u;  /* 0C0A91F8 add #imm,Rn */
	W8(r8, r6); UPD(0x0C0A91FCu, 3);  /* 0C0A91FA mov.b Rm,@Rn */
	r0 = 0x1Au;  /* 0C0A91FC mov #imm,Rn */
	r2 = 0x207C0C0u; UPD(0x0C0A9200u, 2);  /* 0C0A91FE mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0A9200 add #imm,Rn */
	W32(r8 + 0x3Cu, r2); UPD(0x0C0A9204u, 2);  /* 0C0A9202 mov.l Rm,@(disp,Rn) */
	r3 = r12;  /* 0C0A9204 mov Rm,Rn */
	r5 = 0x808080u; UPD(0x0C0A9208u, 2);  /* 0C0A9206 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0A9208 add #imm,Rn */
	W32(r8, r5); UPD(0x0C0A920Cu, 2);  /* 0C0A920A mov.l Rm,@Rn */
	r3 += 0xFFFFFFFFu;  /* 0C0A920C add #imm,Rn */
	IF(0x0C0A920Eu); r4 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0A9210u, 2);  /* 0C0A920E mov.w @(r0,Rm),Rn */
	r8 += 0xCu;  /* 0C0A9210 add #imm,Rn */
	r12 = (u32)(s32)(s16)r3;  /* 0C0A9212 exts.w Rm,Rn */
	W16(r8, r4); UPD(0x0C0A9216u, 3);  /* 0C0A9214 mov.w Rm,@Rn */
	IF(0x0C0A9216u); T = (s32)r12 >= 0;  /* 0C0A9216 cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x18u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A915Cu, 4); goto L_0C0A915C; } UPD(0x0C0A921Cu, 1); goto L_0C0A921C; }  /* 0C0A9218 bt/s */
L_0C0A921C: BLKS(0x0C0A921Cu);
	r10 = R32(r14 + 0x14u); UPD(0x0C0A921Eu, 1);  /* 0C0A921C mov.l @(disp,Rm),Rn */
	r10 += 0x1u;  /* 0C0A921E add #imm,Rn */
	r11 = (u32)(s32)(s16)r10;  /* 0C0A9220 exts.w Rm,Rn */
	r9 = R32(r14 + 0x10u); UPD(0x0C0A9224u, 3);  /* 0C0A9222 mov.l @(disp,Rm),Rn */
	T = (s32)r11 >= (s32)r9;  /* 0C0A9224 cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0x14u, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A922Eu, 4); goto L_0C0A922E; } UPD(0x0C0A922Au, 1); goto L_0C0A922A; }  /* 0C0A9226 bt/s */
L_0C0A922A: BLKS(0x0C0A922Au);
	{ r0 = 0x40u; /* slot mov #imm,Rn */ UPD(0x0C0A9130u, 3); goto L_0C0A9130; }  /* 0C0A922A bra */
L_0C0A922E: BLKS(0x0C0A922Eu);
	r13 = 0xC0AFC10u; UPD(0x0C0A9230u, 1);  /* 0C0A922E mov.l @(disp,pc),Rn */
	IF(0x0C0A9230u); { u32 t_ = r13; PR = 0x0C0A9234u; r4 = 0x79u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0A9234u); }  /* 0C0A9230 jsr @Rn */
L_0C0A9234: BLKS(0x0C0A9234u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A90B8u, 3); goto L_0C0A90B8; }  /* 0C0A9234 bra */
L_0C0A9240: BLKS(0x0C0A9240u);
	r8 = 0xC050D70u; UPD(0x0C0A9242u, 1);  /* 0C0A9240 mov.l @(disp,pc),Rn */
	IF(0x0C0A9242u); { u32 t_ = r8; PR = 0x0C0A9246u; r4 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A9246u); }  /* 0C0A9242 jsr @Rn */
L_0C0A9246: BLKS(0x0C0A9246u);
	{ W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C0A9100u, 3); goto L_0C0A9100; }  /* 0C0A9246 bra */
L_0C0A9250: BLKS(0x0C0A9250u);
	{ IF(0x0C0A9252u); ; /* slot nop */ UPD(0x0C0A908Eu, 3); goto L_0C0A908E; }  /* 0C0A9250 bra */
}

/* FUN_0c0a92b0 */
void f_0C0A92B0(sh3_t *c)
{
	LOCALS;
L_0C0A92B0: BLKS(0x0C0A92B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A92B2u, 1);  /* 0C0A92B0 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C0A92B2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A92B6u, 2);  /* 0C0A92B4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0A92B8u, 1);  /* 0C0A92B6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0A92BAu, 1);  /* 0C0A92B8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C0A92BA exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0A92BEu, 2);  /* 0C0A92BC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0A92C0u, 1);  /* 0C0A92BE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A92C2u, 1);  /* 0C0A92C0 mov.l Rm,@-Rn */
	r13 = r4;  /* 0C0A92C2 mov Rm,Rn */
	IF(0x0C0A92C4u); r15 -= 4; W32(r15, PR); UPD(0x0C0A92C6u, 2);  /* 0C0A92C4 sts.l pr,@-Rn */
	r2 = 0xFF580000u; UPD(0x0C0A92C8u, 1);  /* 0C0A92C6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE4u;  /* 0C0A92C8 add #imm,Rn */
	r14 = r15;  /* 0C0A92CA mov Rm,Rn */
	r2 += r5;  /* 0C0A92CC add Rm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0A92D0u, 4);  /* 0C0A92CE mov.l Rm,@(disp,Rn) */
	IF(0x0C0A92D0u); T = (s32)r2 >= 0;  /* 0C0A92D0 cmp/pz Rn */
	W32(r14, r5); UPD(0x0C0A92D4u, 2);  /* 0C0A92D2 mov.l Rm,@Rn */
	{ u32 c_ = T; W32(r14 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A92DCu, 3); goto L_0C0A92DC; } UPD(0x0C0A92D8u, 1); goto L_0C0A92D8; }  /* 0C0A92D4 bt/s */
L_0C0A92D8: BLKS(0x0C0A92D8u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0A9410u, 3); goto L_0C0A9410; }  /* 0C0A92D8 bra */
L_0C0A92DC: BLKS(0x0C0A92DCu);
	r0 = 0x980000u; UPD(0x0C0A92DEu, 1);  /* 0C0A92DC mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0A92DE cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A92FEu, 4); goto L_0C0A92FE; } goto L_0C0A92E4; }  /* 0C0A92E0 bt/s */
L_0C0A92E4: BLKS(0x0C0A92E4u);
	r2 = 0xC3929E0u; UPD(0x0C0A92E6u, 2);  /* 0C0A92E4 mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C0A92E8u, 1);  /* 0C0A92E6 mov.l @Rm,Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0A92EAu, 1);  /* 0C0A92E8 mov.l @(disp,Rm),Rn */
	r3 = 0xFF880000u; UPD(0x0C0A92ECu, 1);  /* 0C0A92EA mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C0A92EC sub Rm,Rn */
	r2 += r3;  /* 0C0A92EE add Rm,Rn */
	IF(0x0C0A92F0u); T = (s32)r2 >= 0;  /* 0C0A92F0 cmp/pz Rn */
	if (T) { UPD(0x0C0A92F6u, 6); goto L_0C0A92F6; }  /* 0C0A92F2 bt */
L_0C0A92F4: BLKS(0x0C0A92F4u);
	r2 = 0u - r2;  /* 0C0A92F4 neg Rm,Rn */
	UPD(0x0C0A92F6u, 1);
L_0C0A92F6: BLKS(0x0C0A92F6u);
	r5 = 0x700000u; UPD(0x0C0A92F8u, 1);  /* 0C0A92F6 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C0A92F8 cmp/gt Rm,Rn */
	IF(0x0C0A92FAu); r0 = T;  /* 0C0A92FA movt Rn */
	r0 ^= 0x1u;  /* 0C0A92FC xor #imm,r0 */
	UPD(0x0C0A92FEu, 3);
L_0C0A92FE: BLKS(0x0C0A92FEu);
	r6 = (u32)(s32)(s8)r0;  /* 0C0A92FE exts.b Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0A9300 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A9320u, 5); goto L_0C0A9320; } UPD(0x0C0A9306u, 1); goto L_0C0A9306; }  /* 0C0A9302 bf/s */
L_0C0A9306: BLKS(0x0C0A9306u);
	r14 += 0x1Cu;  /* 0C0A9306 add #imm,Rn */
	r15 = r14;  /* 0C0A9308 mov Rm,Rn */
	IF(0x0C0A930Au); PR = R32(r15); r15 += 4; UPD(0x0C0A930Cu, 3);  /* 0C0A930A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A930Eu, 1);  /* 0C0A930C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0A9310u, 1);  /* 0C0A930E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0A9312u, 1);  /* 0C0A9310 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0A9314u, 1);  /* 0C0A9312 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0A9316u, 1);  /* 0C0A9314 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A9318u, 1);  /* 0C0A9316 mov.l @Rm+,Rn */
	IF(0x0C0A9318u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A9318 rts */
L_0C0A9320: BLKS(0x0C0A9320u);
	r8 = 0xC060720u; UPD(0x0C0A9322u, 1);  /* 0C0A9320 mov.l @(disp,pc),Rn */
	IF(0x0C0A9322u); { u32 t_ = r8; PR = 0x0C0A9326u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060720, 0x0C060720u, 0x0C0A9326u); }  /* 0C0A9322 jsr @Rn */
L_0C0A9326: BLKS(0x0C0A9326u);
	T = (r0 & r0) == 0;  /* 0C0A9326 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0A9306u, 4); goto L_0C0A9306; } goto L_0C0A932C; }  /* 0C0A9328 bt/s */
L_0C0A932C: BLKS(0x0C0A932Cu);
	r7 = 0x1u;  /* 0C0A932C mov #imm,Rn */
	T = (s32)r13 > (s32)r7;  /* 0C0A932E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0A9334u, 6); goto L_0C0A9334; }  /* 0C0A9330 bf */
L_0C0A9332: BLKS(0x0C0A9332u);
	r13 = 0x0u;  /* 0C0A9332 mov #imm,Rn */
	UPD(0x0C0A9334u, 1);
L_0C0A9334: BLKS(0x0C0A9334u);
	r11 = r13;  /* 0C0A9334 mov Rm,Rn */
	IF(0x0C0A9336u); r11 <<= 2;  /* 0C0A9336 shll2 Rn */
	W32(r14 + 0x18u, r11); UPD(0x0C0A933Au, 3);  /* 0C0A9338 mov.l Rm,@(disp,Rn) */
	r10 += 0x4u;  /* 0C0A933A add #imm,Rn */
	r11 = r10;  /* 0C0A933C mov Rm,Rn */
	r12 = 0xC2755BCu; UPD(0x0C0A9340u, 3);  /* 0C0A933E mov.l @(disp,pc),Rn */
	IF(0x0C0A9340u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0A9340 shar Rn */
	IF(0x0C0A9342u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0A9342 shar Rn */
	W32(r14 + 0xCu, r12); UPD(0x0C0A9346u, 3);  /* 0C0A9344 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A9346u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0A9346 shar Rn */
	r1 = 0x3Fu;  /* 0C0A9348 mov #imm,Rn */
	r11 &= r1;  /* 0C0A934A and Rm,Rn */
	r12 = 0x3u;  /* 0C0A934C mov #imm,Rn */
	r9 = r11;  /* 0C0A934E mov Rm,Rn */
	r0 = r13;  /* 0C0A9350 mov Rm,Rn */
	IF(0x0C0A9352u); ARG0(0x49CDu); { s32 s_ = (s32)r12; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C0A9352 shld Rm,Rn */
	r0 += r0;  /* 0C0A9354 add Rm,Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C0A9358u, 9);  /* 0C0A9356 mov.l Rm,@(disp,Rn) */
	r10 += 0xFFFFFFFCu;  /* 0C0A9358 add #imm,Rn */
	W32(r14 + 0x10u, r9); UPD(0x0C0A935Cu, 2);  /* 0C0A935A mov.l Rm,@(disp,Rn) */
L_0C0A935C: BLKS(0x0C0A935Cu);
	r0 = R32(r14 + 0xCu); UPD(0x0C0A935Eu, 1);  /* 0C0A935C mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0A935E mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r0); r0 += 2; r9 = v_; } UPD(0x0C0A9362u, 2);  /* 0C0A9360 mov.w @Rm+,Rn */
	r6 = 0x3u;  /* 0C0A9362 mov #imm,Rn */
	W32(r14 + 0xCu, r0); UPD(0x0C0A9366u, 2);  /* 0C0A9364 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A9366u); MACL = r9 * r8;  /* 0C0A9366 mul.l Rm,Rn */
	r0 = r12;  /* 0C0A9368 mov Rm,Rn */
	r3 = 0xC1E6BE8u; UPD(0x0C0A936Cu, 4);  /* 0C0A936A mov.l @(disp,pc),Rn */
	IF(0x0C0A936Cu); r0 <<= 2;  /* 0C0A936C shll2 Rn */
	r4 = 0xC27E0FCu; UPD(0x0C0A9370u, 2);  /* 0C0A936E mov.l @(disp,pc),Rn */
	IF(0x0C0A9370u); r8 = MACL;  /* 0C0A9370 sts macl,Rn */
	IF(0x0C0A9372u); r7 = R32(r0 + r3); UPD(0x0C0A9374u, 2);  /* 0C0A9372 mov.l @(r0,Rm),Rn */
	r8 += r4;  /* 0C0A9374 add Rm,Rn */
	W32(r8, r7); UPD(0x0C0A9378u, 2);  /* 0C0A9376 mov.l Rm,@Rn */
	r3 = 0x4u;  /* 0C0A9378 mov #imm,Rn */
	r7 = R32(r14 + 0x14u); UPD(0x0C0A937Cu, 2);  /* 0C0A937A mov.l @(disp,Rm),Rn */
	r7 += r13;  /* 0C0A937C add Rm,Rn */
	r7 += r12;  /* 0C0A937E add Rm,Rn */
	W32(r8 + 0x8u, r7); UPD(0x0C0A9382u, 3);  /* 0C0A9380 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x4u, r6); UPD(0x0C0A9384u, 1);  /* 0C0A9382 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A9384u); ARG0(0x473Du); { s32 s_ = (s32)r3; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C0A9384 shld Rm,Rn */
	r8 += 0x44u;  /* 0C0A9386 add #imm,Rn */
	W16(r8, r10); UPD(0x0C0A938Au, 3);  /* 0C0A9388 mov.w Rm,@Rn */
	r1 = R32(r14 + 0x3Cu); UPD(0x0C0A938Cu, 1);  /* 0C0A938A mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0A938C add #imm,Rn */
	W32(r8, r1); UPD(0x0C0A9390u, 2);  /* 0C0A938E mov.l Rm,@Rn */
	r0 = R32(r14 + 0x18u); UPD(0x0C0A9392u, 1);  /* 0C0A9390 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB8u;  /* 0C0A9392 add #imm,Rn */
	r2 = 0xC1E6BF8u; UPD(0x0C0A9396u, 2);  /* 0C0A9394 mov.l @(disp,pc),Rn */
	IF(0x0C0A9396u); r5 = R32(r0 + r2); UPD(0x0C0A9398u, 1);  /* 0C0A9396 mov.l @(r0,Rm),Rn */
	r4 = 0xC1E6ABCu; UPD(0x0C0A939Au, 1);  /* 0C0A9398 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r5); UPD(0x0C0A939Cu, 1);  /* 0C0A939A mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x10u, r11); UPD(0x0C0A939Eu, 1);  /* 0C0A939C mov.l Rm,@(disp,Rn) */
	r0 = R32(r4 + 0x1Cu); UPD(0x0C0A93A0u, 1);  /* 0C0A939E mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0A93A2u, 1);  /* 0C0A93A0 mov.l Rm,@(disp,Rn) */
	r0 = R32(r4 + 0x18u); UPD(0x0C0A93A4u, 1);  /* 0C0A93A2 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x14u, r0); UPD(0x0C0A93A6u, 1);  /* 0C0A93A4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0A93A6u); r6 = R32(r0 + r7); UPD(0x0C0A93A8u, 1);  /* 0C0A93A6 mov.l @(r0,Rm),Rn */
	r5 = R32(r14 + 0x10u); UPD(0x0C0A93AAu, 1);  /* 0C0A93A8 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x18u, r6); UPD(0x0C0A93ACu, 1);  /* 0C0A93AA mov.l Rm,@(disp,Rn) */
	r5 += r6;  /* 0C0A93AC add Rm,Rn */
	r2 = R32(r5); UPD(0x0C0A93B0u, 2);  /* 0C0A93AE mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r2); UPD(0x0C0A93B2u, 1);  /* 0C0A93B0 mov.l Rm,@(disp,Rn) */
	r4 = R32(r5 + 0x4u); UPD(0x0C0A93B4u, 1);  /* 0C0A93B2 mov.l @(disp,Rm),Rn */
	r3 = 0xC21F894u; UPD(0x0C0A93B6u, 1);  /* 0C0A93B4 mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r4); UPD(0x0C0A93B8u, 1);  /* 0C0A93B6 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0A93BAu, 1);  /* 0C0A93B8 mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0A93BA add #imm,Rn */
	W16(r8, r0); UPD(0x0C0A93BEu, 2);  /* 0C0A93BC mov.w Rm,@Rn */
	r4 = r10;  /* 0C0A93BE mov Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C0A93C2u, 2);  /* 0C0A93C0 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0A93C2 add #imm,Rn */
	r7 = R32(r14); UPD(0x0C0A93C6u, 2);  /* 0C0A93C4 mov.l @Rm,Rn */
	r6 = R32(r14 + 0x4u); UPD(0x0C0A93C8u, 1);  /* 0C0A93C6 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C0A93CAu, 1);  /* 0C0A93C8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r6); UPD(0x0C0A93CCu, 1);  /* 0C0A93CA mov.l Rm,@(disp,Rn) */
	IF(0x0C0A93CCu); { u32 t_ = r0; PR = 0x0C0A93D0u; r5 = R32(r14 + 0x3Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0A93D0u); }  /* 0C0A93CC jsr @Rn */
L_0C0A93D0: BLKS(0x0C0A93D0u);
	W32(r8 + 0x30u, r0); UPD(0x0C0A93D2u, 1);  /* 0C0A93D0 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C0A93D2 mov Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C0A93D6u, 2);  /* 0C0A93D4 mov.l @(disp,pc),Rn */
	IF(0x0C0A93D6u); { u32 t_ = r0; PR = 0x0C0A93DAu; r5 = R32(r14 + 0x3Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0A93DAu); }  /* 0C0A93D6 jsr @Rn */
L_0C0A93DA: BLKS(0x0C0A93DAu);
	r5 = 0x0u;  /* 0C0A93DA mov #imm,Rn */
	W32(r8 + 0x34u, r0); UPD(0x0C0A93DEu, 2);  /* 0C0A93DC mov.l Rm,@(disp,Rn) */
	r3 = r12;  /* 0C0A93DE mov Rm,Rn */
	W32(r8 + 0x3Cu, r5); UPD(0x0C0A93E2u, 2);  /* 0C0A93E0 mov.l Rm,@(disp,Rn) */
	r0 = 0xAu;  /* 0C0A93E2 mov #imm,Rn */
	r2 = 0x808080u; UPD(0x0C0A93E6u, 2);  /* 0C0A93E4 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0A93E6 add #imm,Rn */
	W32(r8, r2); UPD(0x0C0A93EAu, 2);  /* 0C0A93E8 mov.l Rm,@Rn */
	r3 += 0xFFFFFFFFu;  /* 0C0A93EA add #imm,Rn */
	IF(0x0C0A93ECu); r4 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0A93EEu, 2);  /* 0C0A93EC mov.w @(r0,Rm),Rn */
	r8 += 0xCu;  /* 0C0A93EE add #imm,Rn */
	r12 = (u32)(s32)(s16)r3;  /* 0C0A93F0 exts.w Rm,Rn */
	W16(r8, r4); UPD(0x0C0A93F4u, 3);  /* 0C0A93F2 mov.w Rm,@Rn */
	IF(0x0C0A93F4u); T = (s32)r12 >= 0;  /* 0C0A93F4 cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0A935Cu, 4); goto L_0C0A935C; } UPD(0x0C0A93FAu, 1); goto L_0C0A93FA; }  /* 0C0A93F6 bt/s */
L_0C0A93FA: BLKS(0x0C0A93FAu);
	r10 = 0xC0AFC10u; UPD(0x0C0A93FCu, 1);  /* 0C0A93FA mov.l @(disp,pc),Rn */
	IF(0x0C0A93FCu); { u32 t_ = r10; PR = 0x0C0A9400u; r4 = 0x6Au; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0A9400u); }  /* 0C0A93FC jsr @Rn */
L_0C0A9400: BLKS(0x0C0A9400u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0A9306u, 3); goto L_0C0A9306; }  /* 0C0A9400 bra */
L_0C0A9410: BLKS(0x0C0A9410u);
	{ IF(0x0C0A9412u); ; /* slot nop */ UPD(0x0C0A92DCu, 3); goto L_0C0A92DC; }  /* 0C0A9410 bra */
}


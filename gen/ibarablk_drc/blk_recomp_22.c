#include "recomp.h"
#include "blk_recomp_funcs.h"

/* FUN_0c0c1cd0 */
void blk_f_0C0C1CD0(sh3_t *c)
{
	LOCALS;
L_0C0C1CD0: BLKS(0x0C0C1CD0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1CD2u, 1);  /* 0C0C1CD0 mov.l Rm,@-Rn */
	r7 = r4 & 0xFF;  /* 0C0C1CD2 extu.b Rm,Rn */
	r6 = 0xFFu; UPD(0x0C0C1CD6u, 2);  /* 0C0C1CD4 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0C1CD6 mov Rm,Rn */
	r3 = 0xC3C4018u; UPD(0x0C0C1CDAu, 2);  /* 0C0C1CD8 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0C1CDA mov #imm,Rn */
	r0 = 0x3u;  /* 0C0C1CDC mov #imm,Rn */
	r2 = 0x7u;  /* 0C0C1CDE mov #imm,Rn */
	UPD(0x0C0C1CE0u, 3);
L_0C0C1CE0: BLKS(0x0C0C1CE0u);
	IF(0x0C0C1CE0u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0C1CE2u, 1);  /* 0C0C1CE0 mov.b @(r0,Rm),Rn */
	r4 = r1 & 0xFF;  /* 0C0C1CE2 extu.b Rm,Rn */
	T = r4 == r7;  /* 0C0C1CE4 cmp/eq Rm,Rn */
	{ u32 c_ = T; r4 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C1D30u, 5); goto L_0C0C1D30; } goto L_0C0C1CEA; }  /* 0C0C1CE6 bt/s */
L_0C0C1CEA: BLKS(0x0C0C1CEAu);
	r4 += 0x1u;  /* 0C0C1CEA add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0C1CEC extu.b Rm,Rn */
	T = r0 > r2;  /* 0C0C1CEE cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0C1CE0u, 7); goto L_0C0C1CE0; }  /* 0C0C1CF0 bf */
L_0C0C1CF2: BLKS(0x0C0C1CF2u);
	r0 = 0x3u;  /* 0C0C1CF2 mov #imm,Rn */
	r3 = 0xC3C4030u; UPD(0x0C0C1CF6u, 2);  /* 0C0C1CF4 mov.l @(disp,pc),Rn */
	r2 = 0x7u;  /* 0C0C1CF6 mov #imm,Rn */
	UPD(0x0C0C1CF8u, 1);
L_0C0C1CF8: BLKS(0x0C0C1CF8u);
	IF(0x0C0C1CF8u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0C1CFAu, 1);  /* 0C0C1CF8 mov.b @(r0,Rm),Rn */
	r1 = r4 & 0xFF;  /* 0C0C1CFA extu.b Rm,Rn */
	T = r1 >= r6;  /* 0C0C1CFC cmp/hs Rm,Rn */
	{ u32 c_ = T; r4 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C1D08u, 5); goto L_0C0C1D08; } goto L_0C0C1D02; }  /* 0C0C1CFE bt/s */
L_0C0C1D02: BLKS(0x0C0C1D02u);
	r6 = r1;  /* 0C0C1D02 mov Rm,Rn */
	r5 = r0;  /* 0C0C1D04 mov Rm,Rn */
	r4 = r0;  /* 0C0C1D06 mov Rm,Rn */
	UPD(0x0C0C1D08u, 4);
L_0C0C1D08: BLKS(0x0C0C1D08u);
	r4 += 0x1u;  /* 0C0C1D08 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0C1D0A extu.b Rm,Rn */
	T = r0 > r2;  /* 0C0C1D0C cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0C1CF8u, 6); goto L_0C0C1CF8; }  /* 0C0C1D0E bf */
L_0C0C1D10: BLKS(0x0C0C1D10u);
	r3 = 0xC3C4030u; UPD(0x0C0C1D12u, 1);  /* 0C0C1D10 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C0C1D12 mov Rm,Rn */
	IF(0x0C0C1D14u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0C1D16u, 2);  /* 0C0C1D14 mov.b @(r0,Rm),Rn */
	r2 = 0xC29D08Cu; UPD(0x0C0C1D18u, 1);  /* 0C0C1D16 mov.l @(disp,pc),Rn */
	r3 = r4 & 0xFF;  /* 0C0C1D18 extu.b Rm,Rn */
	r0 = r2;  /* 0C0C1D1A mov Rm,Rn */
	IF(0x0C0C1D1Cu); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0C1D1Eu, 3);  /* 0C0C1D1C mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C0C1D1E extu.b Rm,Rn */
	T = r3 > r0;  /* 0C0C1D20 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r0 = (u32)(s32)(s8)r5; /* slot exts.b Rm,Rn */ if (c_) { UPD(0x0C0C1D28u, 5); goto L_0C0C1D28; } goto L_0C0C1D26; }  /* 0C0C1D22 bf/s */
L_0C0C1D26: BLKS(0x0C0C1D26u);
	r0 = 0x0u;  /* 0C0C1D26 mov #imm,Rn */
	UPD(0x0C0C1D28u, 2);
L_0C0C1D28: BLKS(0x0C0C1D28u);
	r15 = r14;  /* 0C0C1D28 mov Rm,Rn */
	IF(0x0C0C1D2Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0C1D2A rts */
L_0C0C1D30: BLKS(0x0C0C1D30u);
	{ r0 = (u32)(s32)(s8)r0; /* slot exts.b Rm,Rn */ UPD(0x0C0C1D28u, 3); goto L_0C0C1D28; }  /* 0C0C1D30 bra */
}

/* FUN_0c0c1d50 */
void blk_f_0C0C1D50(sh3_t *c)
{
	LOCALS;
L_0C0C1D50: BLKS(0x0C0C1D50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1D52u, 1);  /* 0C0C1D50 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1D54u, 1);  /* 0C0C1D52 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1D56u, 1);  /* 0C0C1D54 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1D58u, 1);  /* 0C0C1D56 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1D5Au, 1);  /* 0C0C1D58 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1D5Cu, 1);  /* 0C0C1D5A mov.l Rm,@-Rn */
	r0 = 0xC234BF0u; UPD(0x0C0C1D5Eu, 1);  /* 0C0C1D5C mov.l @(disp,pc),Rn */
	IF(0x0C0C1D5Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0C1D60u, 1);  /* 0C0C1D5E sts.l pr,@-Rn */
	r3 = R32(r0); UPD(0x0C0C1D62u, 1);  /* 0C0C1D60 mov.l @Rm,Rn */
	r0 = 0x98765432u; UPD(0x0C0C1D64u, 1);  /* 0C0C1D62 mov.l @(disp,pc),Rn */
	T = r3 == r0;  /* 0C0C1D64 cmp/eq Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C1D80u, 4); goto L_0C0C1D80; } UPD(0x0C0C1D6Au, 1); goto L_0C0C1D6A; }  /* 0C0C1D66 bt/s */
L_0C0C1D6A: BLKS(0x0C0C1D6Au);
	r15 = r14;  /* 0C0C1D6A mov Rm,Rn */
	IF(0x0C0C1D6Cu); PR = R32(r15); r15 += 4; UPD(0x0C0C1D6Eu, 2);  /* 0C0C1D6C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C1D70u, 1);  /* 0C0C1D6E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C1D72u, 1);  /* 0C0C1D70 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C1D74u, 1);  /* 0C0C1D72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C1D76u, 1);  /* 0C0C1D74 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C1D78u, 1);  /* 0C0C1D76 mov.l @Rm+,Rn */
	IF(0x0C0C1D78u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C1D78 rts */
L_0C0C1D80: BLKS(0x0C0C1D80u);
	r11 = 0xC05FD00u; UPD(0x0C0C1D82u, 1);  /* 0C0C1D80 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C0C1D82 mov #imm,Rn */
	r10 = 0xC3C4018u; UPD(0x0C0C1D86u, 2);  /* 0C0C1D84 mov.l @(disp,pc),Rn */
	r9 = 0xC297464u; UPD(0x0C0C1D88u, 1);  /* 0C0C1D86 mov.l @(disp,pc),Rn */
L_0C0C1D88: BLKS(0x0C0C1D88u);
	IF(0x0C0C1D88u); { u32 t_ = r11; PR = 0x0C0C1D8Cu; r4 = r8 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C05FD00, 0x0C05FD00u, 0x0C0C1D8Cu); }  /* 0C0C1D88 jsr @Rn */
L_0C0C1D8C: BLKS(0x0C0C1D8Cu);
	r2 = R32(r0); UPD(0x0C0C1D8Eu, 1);  /* 0C0C1D8C mov.l @Rm,Rn */
	r0 += 0x7u;  /* 0C0C1D8E add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C0C1D92u, 2);  /* 0C0C1D90 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0C1D92 tst Rm,Rn */
	W32(r9, r2); UPD(0x0C0C1D96u, 2);  /* 0C0C1D94 mov.l Rm,@Rn */
	r0 = r10;  /* 0C0C1D96 mov Rm,Rn */
	IF(0x0C0C1D98u); W8(r0 + r8, r4); UPD(0x0C0C1D9Au, 2);  /* 0C0C1D98 mov.b Rm,@(r0,Rn) */
	{ u32 c_ = !T; r9 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C1DA4u, 3); goto L_0C0C1DA4; } goto L_0C0C1D9E; }  /* 0C0C1D9A bf/s */
L_0C0C1D9E: BLKS(0x0C0C1D9Eu);
	r5 = 0xC3C4030u; UPD(0x0C0C1DA0u, 2);  /* 0C0C1D9E mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0C1DA0 mov Rm,Rn */
	IF(0x0C0C1DA2u); W8(r0 + r8, r2); UPD(0x0C0C1DA4u, 2);  /* 0C0C1DA2 mov.b Rm,@(r0,Rn) */
L_0C0C1DA4: BLKS(0x0C0C1DA4u);
	r6 = r8;  /* 0C0C1DA4 mov Rm,Rn */
	r6 += 0x1u;  /* 0C0C1DA6 add #imm,Rn */
	r8 = (u32)(s32)(s16)r6;  /* 0C0C1DA8 exts.w Rm,Rn */
	r2 = 0x7u;  /* 0C0C1DAA mov #imm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C0C1DAC cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0C1D88u, 8); goto L_0C0C1D88; }  /* 0C0C1DAE bf */
L_0C0C1DB0: BLKS(0x0C0C1DB0u);
	r8 = 0x0u;  /* 0C0C1DB0 mov #imm,Rn */
	IF(0x0C0C1DB2u); ;  /* 0C0C1DB2 nop */
	UPD(0x0C0C1DB4u, 2);
L_0C0C1DB4: BLKS(0x0C0C1DB4u);
	r2 = 0xC29CF88u; UPD(0x0C0C1DB6u, 1);  /* 0C0C1DB4 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C0C1DB6 mov Rm,Rn */
	IF(0x0C0C1DB8u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1DBAu, 2);  /* 0C0C1DB8 mov.b @(r0,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0C1DBA tst Rm,Rn */
	{ u32 c_ = T; r2 += r8; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0C1DC4u, 4); goto L_0C0C1DC4; } goto L_0C0C1DC0; }  /* 0C0C1DBC bt/s */
L_0C0C1DC0: BLKS(0x0C0C1DC0u);
	r1 += 0xFFFFFFFFu;  /* 0C0C1DC0 add #imm,Rn */
	W8(r2, r1); UPD(0x0C0C1DC4u, 3);  /* 0C0C1DC2 mov.b Rm,@Rn */
L_0C0C1DC4: BLKS(0x0C0C1DC4u);
	r9 = 0xC28EC84u; UPD(0x0C0C1DC6u, 1);  /* 0C0C1DC4 mov.l @(disp,pc),Rn */
	r7 = 0x7u;  /* 0C0C1DC6 mov #imm,Rn */
	r0 = r9;  /* 0C0C1DC8 mov Rm,Rn */
	IF(0x0C0C1DCAu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1DCCu, 3);  /* 0C0C1DCA mov.b @(r0,Rm),Rn */
	T = r9 > r7;  /* 0C0C1DCC cmp/hi Rm,Rn */
	{ u32 c_ = !T; r1 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C1DD6u, 4); goto L_0C0C1DD6; } goto L_0C0C1DD2; }  /* 0C0C1DCE bf/s */
L_0C0C1DD2: BLKS(0x0C0C1DD2u);
	{ IF(0x0C0C1DD4u); ; /* slot nop */ UPD(0x0C0C1ED0u, 4); goto L_0C0C1ED0; }  /* 0C0C1DD2 bra */
L_0C0C1DD6: BLKS(0x0C0C1DD6u);
	r0 = 0xC0C1E00u;  /* 0C0C1DD6 mova @(disp,pc),r0 */
	IF(0x0C0C1DD8u); r10 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C0C1DDAu, 2);  /* 0C0C1DD8 mov.b @(r0,Rm),Rn */
	r10 = r10 & 0xFF;  /* 0C0C1DDA extu.b Rm,Rn */
	IF(0x0C0C1DDCu); { u32 tv_ = (r10 + 0x0C0C1DE0u); u32 t_ = PHYS(tv_); IF(0x0C0C1DDEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0C1E10u: goto L_0C0C1E10; case 0x0C0C1E3Au: goto L_0C0C1E3A; case 0x0C0C1E80u: goto L_0C0C1E80; default: JUMPD(tv_); } }  /* 0C0C1DDC braf Rn */
L_0C0C1E10: BLKS(0x0C0C1E10u);
	r12 = 0xC29CF88u; UPD(0x0C0C1E12u, 1);  /* 0C0C1E10 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0C1E12 mov Rm,Rn */
	IF(0x0C0C1E14u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1E16u, 2);  /* 0C0C1E14 mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C0C1E16 tst Rm,Rn */
	r11 = 0xC3C4030u; UPD(0x0C0C1E1Au, 2);  /* 0C0C1E18 mov.l @(disp,pc),Rn */
	IF(0x0C0C1E1Au); r4 = T;  /* 0C0C1E1A movt Rn */
	r0 = r11;  /* 0C0C1E1C mov Rm,Rn */
	IF(0x0C0C1E1Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0C1E20u, 3);  /* 0C0C1E1E mov.b @(r0,Rm),Rn */
	r10 = 0xC29D08Cu; UPD(0x0C0C1E22u, 1);  /* 0C0C1E20 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C0C1E22 mov Rm,Rn */
	IF(0x0C0C1E24u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1E26u, 2);  /* 0C0C1E24 mov.b @(r0,Rm),Rn */
	T = r2 >= r5;  /* 0C0C1E26 cmp/hs Rm,Rn */
	IF(0x0C0C1E28u); r3 = T;  /* 0C0C1E28 movt Rn */
	r4 &= r3;  /* 0C0C1E2A and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0C1E2C tst Rm,Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C1E50u, 7); goto L_0C0C1E50; } UPD(0x0C0C1E32u, 1); goto L_0C0C1E32; }  /* 0C0C1E2E bf/s */
L_0C0C1E32: BLKS(0x0C0C1E32u);
	r10 = 0xC28EC84u; UPD(0x0C0C1E34u, 1);  /* 0C0C1E32 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0C1E34 mov #imm,Rn */
	r0 = r10;  /* 0C0C1E36 mov Rm,Rn */
	IF(0x0C0C1E38u); W8(r0 + r8, r9); UPD(0x0C0C1E3Au, 3);  /* 0C0C1E38 mov.b Rm,@(r0,Rn) */
L_0C0C1E3A: BLKS(0x0C0C1E3Au);
	r9 = r8;  /* 0C0C1E3A mov Rm,Rn */
	r9 += 0x1u;  /* 0C0C1E3C add #imm,Rn */
	r12 = 0xFFu; UPD(0x0C0C1E40u, 3);  /* 0C0C1E3E mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r9;  /* 0C0C1E40 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r12;  /* 0C0C1E42 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0C1DB4u, 5); goto L_0C0C1DB4; }  /* 0C0C1E44 bf */
L_0C0C1E46: BLKS(0x0C0C1E46u);
	{ IF(0x0C0C1E48u); ; /* slot nop */ UPD(0x0C0C1D6Au, 3); goto L_0C0C1D6A; }  /* 0C0C1E46 bra */
L_0C0C1E50: BLKS(0x0C0C1E50u);
	r4 = 0xC28EC84u; UPD(0x0C0C1E52u, 1);  /* 0C0C1E50 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C0C1E52 mov Rm,Rn */
	IF(0x0C0C1E54u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1E56u, 2);  /* 0C0C1E54 mov.b @(r0,Rm),Rn */
	r3 = 0xC3C404Cu; UPD(0x0C0C1E58u, 1);  /* 0C0C1E56 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C0C1E58 extu.b Rm,Rn */
	r0 = r3;  /* 0C0C1E5A mov Rm,Rn */
	IF(0x0C0C1E5Cu); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1E5Eu, 3);  /* 0C0C1E5C mov.b @(r0,Rm),Rn */
	r5 = r8 & 0xFF;  /* 0C0C1E5E extu.b Rm,Rn */
	r0 = 0xC05FD2Cu; UPD(0x0C0C1E62u, 2);  /* 0C0C1E60 mov.l @(disp,pc),Rn */
	IF(0x0C0C1E62u); { u32 t_ = r0; PR = 0x0C0C1E66u; r6 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C05FD2C, 0x0C05FD2Cu, 0x0C0C1E66u); }  /* 0C0C1E62 jsr @Rn */
L_0C0C1E66: BLKS(0x0C0C1E66u);
	r7 = 0xC2AC05Cu; UPD(0x0C0C1E68u, 1);  /* 0C0C1E66 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0C1E68 mov Rm,Rn */
	IF(0x0C0C1E6Au); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1E6Cu, 2);  /* 0C0C1E6A mov.b @(r0,Rm),Rn */
	r0 = r12;  /* 0C0C1E6C mov Rm,Rn */
	IF(0x0C0C1E6Eu); W8(r0 + r8, r6); UPD(0x0C0C1E70u, 2);  /* 0C0C1E6E mov.b Rm,@(r0,Rn) */
	r0 = r10;  /* 0C0C1E70 mov Rm,Rn */
	IF(0x0C0C1E72u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1E74u, 2);  /* 0C0C1E72 mov.b @(r0,Rm),Rn */
	r0 = r11;  /* 0C0C1E74 mov Rm,Rn */
	{ IF(0x0C0C1E78u); W8(r0 + r9, r12); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0C1E32u, 4); goto L_0C0C1E32; }  /* 0C0C1E76 bra */
L_0C0C1E80: BLKS(0x0C0C1E80u);
	r12 = 0xC28EC84u; UPD(0x0C0C1E82u, 1);  /* 0C0C1E80 mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C0C1E82 mov #imm,Rn */
	r0 = r12;  /* 0C0C1E84 mov Rm,Rn */
	IF(0x0C0C1E86u); W8(r0 + r8, r11); UPD(0x0C0C1E88u, 3);  /* 0C0C1E86 mov.b Rm,@(r0,Rn) */
	r11 = 0xC29CF88u; UPD(0x0C0C1E8Au, 1);  /* 0C0C1E88 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C0C1E8A mov Rm,Rn */
	IF(0x0C0C1E8Cu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1E8Eu, 2);  /* 0C0C1E8C mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0C1E8E tst Rm,Rn */
	{ u32 c_ = !T; r10 = r8 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C0C1E3Au, 4); goto L_0C0C1E3A; } goto L_0C0C1E94; }  /* 0C0C1E90 bf/s */
L_0C0C1E94: BLKS(0x0C0C1E94u);
	r9 = 0xC0C1CD0u; UPD(0x0C0C1E96u, 2);  /* 0C0C1E94 mov.l @(disp,pc),Rn */
	IF(0x0C0C1E96u); { u32 t_ = r9; PR = 0x0C0C1E9Au; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1CD0, 0x0C0C1CD0u, 0x0C0C1E9Au); }  /* 0C0C1E96 jsr @Rn */
L_0C0C1E9A: BLKS(0x0C0C1E9Au);
	T = (r0 & r0) == 0;  /* 0C0C1E9A tst Rm,Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C1E3Au, 4); goto L_0C0C1E3A; } goto L_0C0C1EA0; }  /* 0C0C1E9C bt/s */
L_0C0C1EA0: BLKS(0x0C0C1EA0u);
	r2 = 0xC3C404Cu; UPD(0x0C0C1EA2u, 2);  /* 0C0C1EA0 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFF;  /* 0C0C1EA2 extu.b Rm,Rn */
	r0 = r2;  /* 0C0C1EA4 mov Rm,Rn */
	IF(0x0C0C1EA6u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1EA8u, 3);  /* 0C0C1EA6 mov.b @(r0,Rm),Rn */
	r5 = r10;  /* 0C0C1EA8 mov Rm,Rn */
	r0 = 0xC05FD2Cu; UPD(0x0C0C1EACu, 2);  /* 0C0C1EAA mov.l @(disp,pc),Rn */
	r6 = r1 & 0xFF;  /* 0C0C1EAC extu.b Rm,Rn */
	IF(0x0C0C1EAEu); { u32 t_ = r0; PR = 0x0C0C1EB2u; r7 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C05FD2C, 0x0C05FD2Cu, 0x0C0C1EB2u); }  /* 0C0C1EAE jsr @Rn */
L_0C0C1EB2: BLKS(0x0C0C1EB2u);
	r4 = 0xC2AC05Cu; UPD(0x0C0C1EB4u, 1);  /* 0C0C1EB2 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C0C1EB4 mov Rm,Rn */
	IF(0x0C0C1EB6u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1EB8u, 2);  /* 0C0C1EB6 mov.b @(r0,Rm),Rn */
	r0 = r11;  /* 0C0C1EB8 mov Rm,Rn */
	IF(0x0C0C1EBAu); W8(r0 + r8, r5); UPD(0x0C0C1EBCu, 2);  /* 0C0C1EBA mov.b Rm,@(r0,Rn) */
	r3 = 0xC29D08Cu; UPD(0x0C0C1EBEu, 1);  /* 0C0C1EBC mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C0C1EBE mov Rm,Rn */
	IF(0x0C0C1EC0u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1EC2u, 2);  /* 0C0C1EC0 mov.b @(r0,Rm),Rn */
	r7 = 0xC3C4030u; UPD(0x0C0C1EC4u, 1);  /* 0C0C1EC2 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0C1EC4 mov Rm,Rn */
	{ IF(0x0C0C1EC8u); W8(r0 + r9, r6); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0C1E3Au, 4); goto L_0C0C1E3A; }  /* 0C0C1EC6 bra */
L_0C0C1ED0: BLKS(0x0C0C1ED0u);
	r11 = 0xC238028u; UPD(0x0C0C1ED2u, 1);  /* 0C0C1ED0 mov.l @(disp,pc),Rn */
	r10 = 0xC23230Du; UPD(0x0C0C1ED4u, 1);  /* 0C0C1ED2 mov.l @(disp,pc),Rn */
	W8(r11, r9); UPD(0x0C0C1ED6u, 1);  /* 0C0C1ED4 mov.b Rm,@Rn */
	{ W8(r10, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C0C1E3Au, 3); goto L_0C0C1E3A; }  /* 0C0C1ED6 bra */
}

/* FUN_0c0c1f10 */
void blk_f_0C0C1F10(sh3_t *c)
{
	LOCALS;
L_0C0C1F10: BLKS(0x0C0C1F10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1F12u, 1);  /* 0C0C1F10 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0C1F12 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1F16u, 2);  /* 0C0C1F14 mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C0C1F16 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1F1Au, 2);  /* 0C0C1F18 mov.l Rm,@-Rn */
	r2 = 0x7u;  /* 0C0C1F1A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1F1Eu, 2);  /* 0C0C1F1C mov.l Rm,@-Rn */
	r7 = 0xC3C4030u; UPD(0x0C0C1F20u, 1);  /* 0C0C1F1E mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1F22u, 1);  /* 0C0C1F20 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C0C1F22 mov Rm,Rn */
	r4 = r0;  /* 0C0C1F24 mov Rm,Rn */
	UPD(0x0C0C1F26u, 2);
L_0C0C1F26: BLKS(0x0C0C1F26u);
	IF(0x0C0C1F26u); W8(r0 + r7, r3); UPD(0x0C0C1F28u, 1);  /* 0C0C1F26 mov.b Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C0C1F28 add #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C0C1F2A exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C0C1F2C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C1F26u, 6); goto L_0C0C1F26; } goto L_0C0C1F32; }  /* 0C0C1F2E bf/s */
L_0C0C1F32: BLKS(0x0C0C1F32u);
	r8 = 0xC234BF0u; UPD(0x0C0C1F34u, 2);  /* 0C0C1F32 mov.l @(disp,pc),Rn */
	r2 = 0xFFFFFFFFu;  /* 0C0C1F34 mov #imm,Rn */
	r7 = R32(r8); UPD(0x0C0C1F38u, 2);  /* 0C0C1F36 mov.l @Rm,Rn */
	r6 = 0x98765432u; UPD(0x0C0C1F3Au, 1);  /* 0C0C1F38 mov.l @(disp,pc),Rn */
	r5 = 0xC238029u; UPD(0x0C0C1F3Cu, 1);  /* 0C0C1F3A mov.l @(disp,pc),Rn */
	T = r7 == r6;  /* 0C0C1F3C cmp/eq Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C0C1F40u, 2);  /* 0C0C1F3E mov.b @Rm,Rn */
	IF(0x0C0C1F40u); r3 = T;  /* 0C0C1F40 movt Rn */
	T = (r4 & r4) == 0;  /* 0C0C1F42 tst Rm,Rn */
	{ u32 t_ = 0u - r2, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0C1F44 negc Rm,Rn */
	r0 &= r3;  /* 0C0C1F46 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0C1F48 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C1F8Eu, 8); goto L_0C0C1F8E; } goto L_0C0C1F4E; }  /* 0C0C1F4A bf/s */
L_0C0C1F4E: BLKS(0x0C0C1F4Eu);
	r11 = 0xC2AC05Cu; UPD(0x0C0C1F50u, 2);  /* 0C0C1F4E mov.l @(disp,pc),Rn */
	r10 = 0xC206624u; UPD(0x0C0C1F52u, 1);  /* 0C0C1F50 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0C1F52 mov #imm,Rn */
	r9 = 0xC29D08Cu; UPD(0x0C0C1F56u, 2);  /* 0C0C1F54 mov.l @(disp,pc),Rn */
	r8 = 0xC206724u; UPD(0x0C0C1F58u, 1);  /* 0C0C1F56 mov.l @(disp,pc),Rn */
	r4 = 0xC3C404Cu; UPD(0x0C0C1F5Au, 1);  /* 0C0C1F58 mov.l @(disp,pc),Rn */
	r5 = 0xC29CF88u; UPD(0x0C0C1F5Cu, 1);  /* 0C0C1F5A mov.l @(disp,pc),Rn */
	r6 = 0xC206824u; UPD(0x0C0C1F5Eu, 1);  /* 0C0C1F5C mov.l @(disp,pc),Rn */
	r7 = 0xC28EC84u; UPD(0x0C0C1F60u, 1);  /* 0C0C1F5E mov.l @(disp,pc),Rn */
	r3 = 0xFFu; UPD(0x0C0C1F62u, 1);  /* 0C0C1F60 mov.w @(disp,pc),Rn */
	IF(0x0C0C1F62u); ;  /* 0C0C1F62 nop */
	UPD(0x0C0C1F64u, 1);
L_0C0C1F64: BLKS(0x0C0C1F64u);
	IF(0x0C0C1F64u); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0C1F66u, 1);  /* 0C0C1F64 mov.b @(r0,Rm),Rn */
	IF(0x0C0C1F66u); W8(r0 + r11, r1); UPD(0x0C0C1F68u, 1);  /* 0C0C1F66 mov.b Rm,@(r0,Rn) */
	IF(0x0C0C1F68u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0C1F6Au, 1);  /* 0C0C1F68 mov.b @(r0,Rm),Rn */
	IF(0x0C0C1F6Au); W8(r0 + r9, r1); UPD(0x0C0C1F6Cu, 1);  /* 0C0C1F6A mov.b Rm,@(r0,Rn) */
	IF(0x0C0C1F6Cu); r1 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0C1F6Eu, 1);  /* 0C0C1F6C mov.b @(r0,Rm),Rn */
	IF(0x0C0C1F6Eu); W8(r0 + r4, r1); UPD(0x0C0C1F70u, 1);  /* 0C0C1F6E mov.b Rm,@(r0,Rn) */
	IF(0x0C0C1F70u); W8(r0 + r5, r2); UPD(0x0C0C1F72u, 1);  /* 0C0C1F70 mov.b Rm,@(r0,Rn) */
	r1 = r0;  /* 0C0C1F72 mov Rm,Rn */
	IF(0x0C0C1F74u); W8(r0 + r7, r2); UPD(0x0C0C1F76u, 2);  /* 0C0C1F74 mov.b Rm,@(r0,Rn) */
	r1 += 0x1u;  /* 0C0C1F76 add #imm,Rn */
	r0 = (u32)(s32)(s16)r1;  /* 0C0C1F78 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C0C1F7A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0C1F64u, 6); goto L_0C0C1F64; }  /* 0C0C1F7C bf */
L_0C0C1F7E: BLKS(0x0C0C1F7Eu);
	r11 = 0x0u;  /* 0C0C1F7E mov #imm,Rn */
	r0 = 0xC23230Du; UPD(0x0C0C1F82u, 2);  /* 0C0C1F80 mov.l @(disp,pc),Rn */
	r10 = 0xC238028u; UPD(0x0C0C1F84u, 1);  /* 0C0C1F82 mov.l @(disp,pc),Rn */
	r1 = 0x98765432u; UPD(0x0C0C1F86u, 1);  /* 0C0C1F84 mov.l @(disp,pc),Rn */
	r9 = 0xC234BF0u; UPD(0x0C0C1F88u, 1);  /* 0C0C1F86 mov.l @(disp,pc),Rn */
	W8(r0, r11); UPD(0x0C0C1F8Au, 1);  /* 0C0C1F88 mov.b Rm,@Rn */
	W8(r10, r11); UPD(0x0C0C1F8Cu, 1);  /* 0C0C1F8A mov.b Rm,@Rn */
	W32(r9, r1); UPD(0x0C0C1F8Eu, 1);  /* 0C0C1F8C mov.l Rm,@Rn */
L_0C0C1F8E: BLKS(0x0C0C1F8Eu);
	r15 = r14;  /* 0C0C1F8E mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C1F92u, 2);  /* 0C0C1F90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C1F94u, 1);  /* 0C0C1F92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C1F96u, 1);  /* 0C0C1F94 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C1F98u, 1);  /* 0C0C1F96 mov.l @Rm+,Rn */
	IF(0x0C0C1F98u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C1F98 rts */
}

/* FUN_0c0c1fe0 */
void blk_f_0C0C1FE0(sh3_t *c)
{
	LOCALS;
L_0C0C1FE0: BLKS(0x0C0C1FE0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C1FE2u, 1);  /* 0C0C1FE0 mov.l Rm,@-Rn */
	r0 = r4 & 0xFF;  /* 0C0C1FE2 extu.b Rm,Rn */
	r3 = 0xC3C848Cu; UPD(0x0C0C1FE6u, 2);  /* 0C0C1FE4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0C1FE6 mov Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0C1FEAu, 2);  /* 0C0C1FE8 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0C1FEA tst Rm,Rn */
	{ u32 c_ = T; r4 = (u32)(s32)(s8)r5; /* slot exts.b Rm,Rn */ if (c_) { UPD(0x0C0C1FF8u, 4); goto L_0C0C1FF8; } goto L_0C0C1FF0; }  /* 0C0C1FEC bt/s */
L_0C0C1FF0: BLKS(0x0C0C1FF0u);
	T = (r0 & r0) == 0;  /* 0C0C1FF0 tst Rm,Rn */
	if (T) { UPD(0x0C0C2000u, 5); goto L_0C0C2000; }  /* 0C0C1FF2 bt */
L_0C0C1FF4: BLKS(0x0C0C1FF4u);
	r2 = 0xC28EC84u; UPD(0x0C0C1FF6u, 1);  /* 0C0C1FF4 mov.l @(disp,pc),Rn */
	IF(0x0C0C1FF6u); W8(r0 + r2, r4); UPD(0x0C0C1FF8u, 1);  /* 0C0C1FF6 mov.b Rm,@(r0,Rn) */
L_0C0C1FF8: BLKS(0x0C0C1FF8u);
	r15 = r14;  /* 0C0C1FF8 mov Rm,Rn */
	IF(0x0C0C1FFAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0C1FFA rts */
L_0C0C2000: BLKS(0x0C0C2000u);
	r0 = 0xC05FED8u; UPD(0x0C0C2002u, 1);  /* 0C0C2000 mov.l @(disp,pc),Rn */
	r4 = r4 & 0xFF;  /* 0C0C2002 extu.b Rm,Rn */
	r15 = r14;  /* 0C0C2004 mov Rm,Rn */
	IF(0x0C0C2006u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C05FED8u: TAIL(blk_f_0C05FED8); default: JUMPD(tv_); } }  /* 0C0C2006 jmp @Rn */
}

/* FUN_0c0c2020 */
void blk_f_0C0C2020(sh3_t *c)
{
	LOCALS;
L_0C0C2020: BLKS(0x0C0C2020u);
	r0 = (u32)(s32)(s16)r4;  /* 0C0C2020 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2024u, 2);  /* 0C0C2022 mov.l Rm,@-Rn */
	r3 = r5 & 0xFF;  /* 0C0C2024 extu.b Rm,Rn */
	r4 = 0xC3C848Cu; UPD(0x0C0C2028u, 2);  /* 0C0C2026 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C0C202Au, 1);  /* 0C0C2028 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0C202A tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C205Cu, 4); goto L_0C0C205C; } goto L_0C0C2030; }  /* 0C0C202C bt/s */
L_0C0C2030: BLKS(0x0C0C2030u);
	r5 = 0xC22E015u; UPD(0x0C0C2032u, 2);  /* 0C0C2030 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0C2032 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C0C2036u, 2);  /* 0C0C2034 mov.b @Rm,Rn */
	r4 = 0xC2860FCu; UPD(0x0C0C2038u, 1);  /* 0C0C2036 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C0C2038 tst Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C0C203Cu, 2);  /* 0C0C203A mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C0C203C negc Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0C203E tst Rm,Rn */
	IF(0x0C0C2040u); r5 = T;  /* 0C0C2040 movt Rn */
	T = (r6 & r5) == 0;  /* 0C0C2042 tst Rm,Rn */
	if (!T) { UPD(0x0C0C205Cu, 7); goto L_0C0C205C; }  /* 0C0C2044 bf */
L_0C0C2046: BLKS(0x0C0C2046u);
	T = (r3 & r3) == 0;  /* 0C0C2046 tst Rm,Rn */
	{ u32 c_ = T; r7 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C2070u, 4); goto L_0C0C2070; } goto L_0C0C204C; }  /* 0C0C2048 bt/s */
L_0C0C204C: BLKS(0x0C0C204Cu);
	T = r0 > r7;  /* 0C0C204C cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0C205Cu, 5); goto L_0C0C205C; }  /* 0C0C204E bt */
L_0C0C2050: BLKS(0x0C0C2050u);
	r5 = 0xC2074C8u; UPD(0x0C0C2052u, 1);  /* 0C0C2050 mov.l @(disp,pc),Rn */
	r2 = 0xC28EC84u; UPD(0x0C0C2054u, 1);  /* 0C0C2052 mov.l @(disp,pc),Rn */
	IF(0x0C0C2054u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0C2056u, 1);  /* 0C0C2054 mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C0C2056 mov Rm,Rn */
	IF(0x0C0C2058u); W8(r0 + r3, r4); UPD(0x0C0C205Au, 2);  /* 0C0C2058 mov.b Rm,@(r0,Rn) */
	IF(0x0C0C205Au); ;  /* 0C0C205A nop */
	UPD(0x0C0C205Cu, 1);
L_0C0C205C: BLKS(0x0C0C205Cu);
	r15 = r14;  /* 0C0C205C mov Rm,Rn */
	IF(0x0C0C205Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0C205E rts */
L_0C0C2070: BLKS(0x0C0C2070u);
	r6 = 0xC2074C8u; UPD(0x0C0C2072u, 1);  /* 0C0C2070 mov.l @(disp,pc),Rn */
	IF(0x0C0C2072u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0C2074u, 1);  /* 0C0C2072 mov.b @(r0,Rm),Rn */
	r0 = 0xC05FED8u; UPD(0x0C0C2076u, 1);  /* 0C0C2074 mov.l @(disp,pc),Rn */
	r4 = r3 & 0xFF;  /* 0C0C2076 extu.b Rm,Rn */
	r15 = r14;  /* 0C0C2078 mov Rm,Rn */
	IF(0x0C0C207Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C05FED8u: TAIL(blk_f_0C05FED8); default: JUMPD(tv_); } }  /* 0C0C207A jmp @Rn */
}

/* FUN_0c0c20a0 */
void blk_f_0C0C20A0(sh3_t *c)
{
	LOCALS;
L_0C0C20A0: BLKS(0x0C0C20A0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C20A2u, 1);  /* 0C0C20A0 mov.l Rm,@-Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C0C20A2 exts.w Rm,Rn */
	r2 = 0xC3C848Cu; UPD(0x0C0C20A6u, 2);  /* 0C0C20A4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0C20A6 mov Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0C20AAu, 2);  /* 0C0C20A8 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0C20AA tst Rm,Rn */
	{ u32 c_ = T; r7 = r5 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C0C20E8u, 4); goto L_0C0C20E8; } goto L_0C0C20B0; }  /* 0C0C20AC bt/s */
L_0C0C20B0: BLKS(0x0C0C20B0u);
	r0 = 0xC22E015u; UPD(0x0C0C20B2u, 2);  /* 0C0C20B0 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0C20B2 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0C20B6u, 2);  /* 0C0C20B4 mov.b @Rm,Rn */
	r6 = 0xC2860FCu; UPD(0x0C0C20B8u, 1);  /* 0C0C20B6 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C0C20B8 tst Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0C20BCu, 2);  /* 0C0C20BA mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C0C20BC negc Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0C20BE tst Rm,Rn */
	IF(0x0C0C20C0u); r0 = T;  /* 0C0C20C0 movt Rn */
	T = (r4 & r0) == 0;  /* 0C0C20C2 tst Rm,Rn */
	if (!T) { UPD(0x0C0C20E8u, 7); goto L_0C0C20E8; }  /* 0C0C20C4 bf */
L_0C0C20C6: BLKS(0x0C0C20C6u);
	r2 = 0xC2074D0u; UPD(0x0C0C20C8u, 1);  /* 0C0C20C6 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C0C20C8 mov Rm,Rn */
	IF(0x0C0C20CAu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0C20CCu, 2);  /* 0C0C20CA mov.b @(r0,Rm),Rn */
	r6 = 0x2A0u; UPD(0x0C0C20CEu, 1);  /* 0C0C20CC mov.w @(disp,pc),Rn */
	IF(0x0C0C20CEu); MACL = r2 * r6;  /* 0C0C20CE mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C0C20D2u, 3);  /* 0C0C20D0 mov.l @(disp,pc),Rn */
	IF(0x0C0C20D2u); r0 = MACL;  /* 0C0C20D2 sts macl,Rn */
	IF(0x0C0C20D4u); r4 = R32(r0 + r5); UPD(0x0C0C20D6u, 2);  /* 0C0C20D4 mov.l @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C0C20D6 tst Rm,Rn */
	if (!T) { UPD(0x0C0C20DCu, 4); goto L_0C0C20DC; }  /* 0C0C20D8 bf */
L_0C0C20DA: BLKS(0x0C0C20DAu);
	r3 = r2;  /* 0C0C20DA mov Rm,Rn */
	UPD(0x0C0C20DCu, 1);
L_0C0C20DC: BLKS(0x0C0C20DCu);
	r5 = 0xC2074CCu; UPD(0x0C0C20DEu, 1);  /* 0C0C20DC mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0C20DE mov Rm,Rn */
	IF(0x0C0C20E0u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0C20E2u, 2);  /* 0C0C20E0 mov.b @(r0,Rm),Rn */
	r3 = 0xC28EC84u; UPD(0x0C0C20E4u, 1);  /* 0C0C20E2 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C0C20E4 mov Rm,Rn */
	IF(0x0C0C20E6u); W8(r0 + r7, r4); UPD(0x0C0C20E8u, 2);  /* 0C0C20E6 mov.b Rm,@(r0,Rn) */
L_0C0C20E8: BLKS(0x0C0C20E8u);
	r15 = r14;  /* 0C0C20E8 mov Rm,Rn */
	IF(0x0C0C20EAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0C20EA rts */
}

/* FUN_0c0c2110 */
void blk_f_0C0C2110(sh3_t *c)
{
	LOCALS;
L_0C0C2110: BLKS(0x0C0C2110u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2112u, 1);  /* 0C0C2110 mov.l Rm,@-Rn */
	r0 = r4 & 0xFF;  /* 0C0C2112 extu.b Rm,Rn */
	r3 = 0xC3C848Cu; UPD(0x0C0C2116u, 2);  /* 0C0C2114 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0C2118u, 1);  /* 0C0C2116 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0C2118 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C2140u, 4); goto L_0C0C2140; } goto L_0C0C211E; }  /* 0C0C211A bt/s */
L_0C0C211E: BLKS(0x0C0C211Eu);
	r3 = 0xC22E015u; UPD(0x0C0C2120u, 2);  /* 0C0C211E mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0C2120 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0C2124u, 2);  /* 0C0C2122 mov.b @Rm,Rn */
	r7 = 0xC2860FCu; UPD(0x0C0C2126u, 1);  /* 0C0C2124 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C0C2126 tst Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0C212Au, 2);  /* 0C0C2128 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C0C212A negc Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0C212C tst Rm,Rn */
	IF(0x0C0C212Eu); r4 = T;  /* 0C0C212E movt Rn */
	T = (r5 & r4) == 0;  /* 0C0C2130 tst Rm,Rn */
	{ u32 c_ = !T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C0C2140u, 7); goto L_0C0C2140; } goto L_0C0C2136; }  /* 0C0C2132 bf/s */
L_0C0C2136: BLKS(0x0C0C2136u);
	{ u32 c_ = T; r5 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C2140u, 4); goto L_0C0C2140; } goto L_0C0C213A; }  /* 0C0C2136 bt/s */
L_0C0C213A: BLKS(0x0C0C213Au);
	r4 = 0xC28EC84u; UPD(0x0C0C213Cu, 2);  /* 0C0C213A mov.l @(disp,pc),Rn */
	IF(0x0C0C213Cu); W8(r0 + r4, r5); UPD(0x0C0C213Eu, 1);  /* 0C0C213C mov.b Rm,@(r0,Rn) */
	IF(0x0C0C213Eu); ;  /* 0C0C213E nop */
	UPD(0x0C0C2140u, 1);
L_0C0C2140: BLKS(0x0C0C2140u);
	r15 = r14;  /* 0C0C2140 mov Rm,Rn */
	IF(0x0C0C2142u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0C2142 rts */
}

/* FUN_0c0c2160 */
void blk_f_0C0C2160(sh3_t *c)
{
	LOCALS;
L_0C0C2160: BLKS(0x0C0C2160u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2162u, 1);  /* 0C0C2160 mov.l Rm,@-Rn */
	r0 = r4 & 0xFF;  /* 0C0C2162 extu.b Rm,Rn */
	r3 = 0xC3C848Cu; UPD(0x0C0C2166u, 2);  /* 0C0C2164 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0C2168u, 1);  /* 0C0C2166 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0C2168 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0C2178u, 4); goto L_0C0C2178; } goto L_0C0C216E; }  /* 0C0C216A bt/s */
L_0C0C216E: BLKS(0x0C0C216Eu);
	T = (r0 & r0) == 0;  /* 0C0C216E tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x7u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C2180u, 5); goto L_0C0C2180; } goto L_0C0C2174; }  /* 0C0C2170 bt/s */
L_0C0C2174: BLKS(0x0C0C2174u);
	r4 = 0xC28EC84u; UPD(0x0C0C2176u, 2);  /* 0C0C2174 mov.l @(disp,pc),Rn */
	IF(0x0C0C2176u); W8(r0 + r4, r1); UPD(0x0C0C2178u, 1);  /* 0C0C2176 mov.b Rm,@(r0,Rn) */
L_0C0C2178: BLKS(0x0C0C2178u);
	r15 = r14;  /* 0C0C2178 mov Rm,Rn */
	IF(0x0C0C217Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0C217A rts */
L_0C0C2180: BLKS(0x0C0C2180u);
	r0 = 0xC05FED8u; UPD(0x0C0C2182u, 1);  /* 0C0C2180 mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C0C2182 mov #imm,Rn */
	r15 = r14;  /* 0C0C2184 mov Rm,Rn */
	IF(0x0C0C2186u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C05FED8u: TAIL(blk_f_0C05FED8); default: JUMPD(tv_); } }  /* 0C0C2186 jmp @Rn */
}

/* FUN_0c0c21a0 */
void blk_f_0C0C21A0(sh3_t *c)
{
	LOCALS;
L_0C0C21A0: BLKS(0x0C0C21A0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C21A2u, 1);  /* 0C0C21A0 mov.l Rm,@-Rn */
	r2 = (u32)(s32)(s8)r4;  /* 0C0C21A2 exts.b Rm,Rn */
	r0 = 0xC3CA6F4u; UPD(0x0C0C21A6u, 2);  /* 0C0C21A4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0C21A6 mov Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0C21A8 tst Rm,Rn */
	{ u32 c_ = !T; W32(r0, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0C21C0u, 5); goto L_0C0C21C0; } UPD(0x0C0C21AEu, 1); goto L_0C0C21AE; }  /* 0C0C21AA bf/s */
L_0C0C21AE: BLKS(0x0C0C21AEu);
	r0 = 0xC05FED8u; UPD(0x0C0C21B0u, 1);  /* 0C0C21AE mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0C21B0 mov #imm,Rn */
	r15 = r14;  /* 0C0C21B2 mov Rm,Rn */
	IF(0x0C0C21B4u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C05FED8u: TAIL(blk_f_0C05FED8); default: JUMPD(tv_); } }  /* 0C0C21B4 jmp @Rn */
L_0C0C21C0: BLKS(0x0C0C21C0u);
	r5 = 0x3u;  /* 0C0C21C0 mov #imm,Rn */
	IF(0x0C0C21C2u); ARG0(0x425Du); { s32 s_ = (s32)r5; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C0C21C2 shld Rm,Rn */
	r4 = 0xC206924u; UPD(0x0C0C21C6u, 3);  /* 0C0C21C4 mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0C21C6 add Rm,Rn */
	r3 = r2;  /* 0C0C21C8 mov Rm,Rn */
	r2 += 0xFFFFFFF8u;  /* 0C0C21CA add #imm,Rn */
	r5 = R32(r2); UPD(0x0C0C21CEu, 4);  /* 0C0C21CC mov.l @Rm,Rn */
	r3 += 0xFFFFFFFCu;  /* 0C0C21CE add #imm,Rn */
	r6 = R32(r3); UPD(0x0C0C21D2u, 2);  /* 0C0C21D0 mov.l @Rm,Rn */
	r4 = 0x0u;  /* 0C0C21D2 mov #imm,Rn */
	r2 = 0xC05FE4Cu; UPD(0x0C0C21D6u, 2);  /* 0C0C21D4 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0C21D6 mov Rm,Rn */
	IF(0x0C0C21D8u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C05FE4Cu: TAIL(blk_f_0C05FE4C); default: JUMPD(tv_); } }  /* 0C0C21D8 jmp @Rn */
}

/* FUN_0c0c21f0 */
void blk_f_0C0C21F0(sh3_t *c)
{
	LOCALS;
L_0C0C21F0: BLKS(0x0C0C21F0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C21F2u, 1);  /* 0C0C21F0 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0C21F2 mov #imm,Rn */
	r0 = 0xC062780u; UPD(0x0C0C21F6u, 2);  /* 0C0C21F4 mov.l @(disp,pc),Rn */
	IF(0x0C0C21F6u); r15 -= 4; W32(r15, PR); UPD(0x0C0C21F8u, 1);  /* 0C0C21F6 sts.l pr,@-Rn */
	IF(0x0C0C21F8u); { u32 t_ = r0; PR = 0x0C0C21FCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0C21FCu); }  /* 0C0C21F8 jsr @Rn */
L_0C0C21FC: BLKS(0x0C0C21FCu);
	r4 = 0xC2074D4u; UPD(0x0C0C21FEu, 1);  /* 0C0C21FC mov.l @(disp,pc),Rn */
	IF(0x0C0C21FEu); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0C2200u, 1);  /* 0C0C21FE mov.b @(r0,Rm),Rn */
	r3 = 0xC3C848Cu; UPD(0x0C0C2202u, 1);  /* 0C0C2200 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0C2202 extu.b Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0C2206u, 2);  /* 0C0C2204 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0C2206 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C222Cu, 4); goto L_0C0C222C; } goto L_0C0C220C; }  /* 0C0C2208 bt/s */
L_0C0C220C: BLKS(0x0C0C220Cu);
	r4 = 0xC22E015u; UPD(0x0C0C220Eu, 2);  /* 0C0C220C mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C0C2210u, 1);  /* 0C0C220E mov.b @Rm,Rn */
	r3 = 0xC2860FCu; UPD(0x0C0C2212u, 1);  /* 0C0C2210 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C0C2212 tst Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C0C2216u, 2);  /* 0C0C2214 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C0C2216 negc Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0C2218 tst Rm,Rn */
	IF(0x0C0C221Au); r5 = T;  /* 0C0C221A movt Rn */
	T = (r6 & r5) == 0;  /* 0C0C221C tst Rm,Rn */
	{ u32 c_ = !T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C0C222Cu, 7); goto L_0C0C222C; } goto L_0C0C2222; }  /* 0C0C221E bf/s */
L_0C0C2222: BLKS(0x0C0C2222u);
	{ u32 c_ = T; r6 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C222Cu, 4); goto L_0C0C222C; } goto L_0C0C2226; }  /* 0C0C2222 bt/s */
L_0C0C2226: BLKS(0x0C0C2226u);
	r5 = 0xC28EC84u; UPD(0x0C0C2228u, 2);  /* 0C0C2226 mov.l @(disp,pc),Rn */
	IF(0x0C0C2228u); W8(r0 + r5, r6); UPD(0x0C0C222Au, 1);  /* 0C0C2228 mov.b Rm,@(r0,Rn) */
	IF(0x0C0C222Au); ;  /* 0C0C222A nop */
	UPD(0x0C0C222Cu, 1);
L_0C0C222C: BLKS(0x0C0C222Cu);
	r15 = r14;  /* 0C0C222C mov Rm,Rn */
	IF(0x0C0C222Eu); PR = R32(r15); r15 += 4; UPD(0x0C0C2230u, 2);  /* 0C0C222E lds.l @Rn+,pr */
	IF(0x0C0C2230u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C2230 rts */
}

/* FUN_0c0c2250 */
void blk_f_0C0C2250(sh3_t *c)
{
	LOCALS;
L_0C0C2250: BLKS(0x0C0C2250u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2252u, 1);  /* 0C0C2250 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2254u, 1);  /* 0C0C2252 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r5;  /* 0C0C2254 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2258u, 2);  /* 0C0C2256 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r6;  /* 0C0C2258 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0C225Cu, 2);  /* 0C0C225A mov.l Rm,@-Rn */
	r5 = r8;  /* 0C0C225C mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2260u, 2);  /* 0C0C225E mov.l Rm,@-Rn */
	r6 = r9;  /* 0C0C2260 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2264u, 2);  /* 0C0C2262 mov.l Rm,@-Rn */
	r12 = r4 & 0xFF;  /* 0C0C2264 extu.b Rm,Rn */
	r11 = 0xC0626E0u; UPD(0x0C0C2268u, 2);  /* 0C0C2266 mov.l @(disp,pc),Rn */
	IF(0x0C0C2268u); r12 <<= 2;  /* 0C0C2268 shll2 Rn */
	IF(0x0C0C226Au); r15 -= 4; W32(r15, PR); UPD(0x0C0C226Cu, 2);  /* 0C0C226A sts.l pr,@-Rn */
	r10 = 0x80808000u; UPD(0x0C0C226Eu, 1);  /* 0C0C226C mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0C226E mov Rm,Rn */
	r4 = 0xC20699Cu; UPD(0x0C0C2272u, 2);  /* 0C0C2270 mov.l @(disp,pc),Rn */
	IF(0x0C0C2272u); { u32 t_ = r11; PR = 0x0C0C2276u; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0C2276u); }  /* 0C0C2272 jsr @Rn */
L_0C0C2276: BLKS(0x0C0C2276u);
	r2 = 0xC2070C8u; UPD(0x0C0C2278u, 1);  /* 0C0C2276 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0C2278 mov Rm,Rn */
	IF(0x0C0C227Au); r4 = R32(r0 + r2); UPD(0x0C0C227Cu, 2);  /* 0C0C227A mov.l @(r0,Rm),Rn */
	r5 = r8;  /* 0C0C227C mov Rm,Rn */
	r6 = r9;  /* 0C0C227E mov Rm,Rn */
	r7 = r10;  /* 0C0C2280 mov Rm,Rn */
	r0 = r11;  /* 0C0C2282 mov Rm,Rn */
	r15 = r14;  /* 0C0C2284 mov Rm,Rn */
	IF(0x0C0C2286u); PR = R32(r15); r15 += 4; UPD(0x0C0C2288u, 6);  /* 0C0C2286 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C228Au, 1);  /* 0C0C2288 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0C228Cu, 1);  /* 0C0C228A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0C228Eu, 1);  /* 0C0C228C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0C2290u, 1);  /* 0C0C228E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0C2292u, 1);  /* 0C0C2290 mov.l @Rm+,Rn */
	IF(0x0C0C2292u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0626E0u: TAIL(blk_f_0C0626E0); default: JUMPD(tv_); } }  /* 0C0C2292 jmp @Rn */
}

/* FUN_0c0c22b0 */
void blk_f_0C0C22B0(sh3_t *c)
{
	LOCALS;
L_0C0C22B0: BLKS(0x0C0C22B0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C22B2u, 1);  /* 0C0C22B0 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C0C22B2 exts.b Rm,Rn */
	r2 = 0xC2070C8u; UPD(0x0C0C22B6u, 2);  /* 0C0C22B4 mov.l @(disp,pc),Rn */
	IF(0x0C0C22B6u); r0 <<= 2;  /* 0C0C22B6 shll2 Rn */
	IF(0x0C0C22B8u); r4 = R32(r0 + r2); UPD(0x0C0C22BAu, 2);  /* 0C0C22B8 mov.l @(r0,Rm),Rn */
	r14 = r15;  /* 0C0C22BA mov Rm,Rn */
	r7 = 0xC040C000u; UPD(0x0C0C22BEu, 2);  /* 0C0C22BC mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)r5;  /* 0C0C22BE exts.b Rm,Rn */
	r0 = 0xC0626E0u; UPD(0x0C0C22C2u, 2);  /* 0C0C22C0 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)r6;  /* 0C0C22C2 exts.b Rm,Rn */
	r15 = r14;  /* 0C0C22C4 mov Rm,Rn */
	IF(0x0C0C22C6u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0626E0u: TAIL(blk_f_0C0626E0); default: JUMPD(tv_); } }  /* 0C0C22C6 jmp @Rn */
}

/* FUN_0c0c22e0 */
void blk_f_0C0C22E0(sh3_t *c)
{
	LOCALS;
L_0C0C22E0: BLKS(0x0C0C22E0u);
	r0 = r4 & 0xFF;  /* 0C0C22E0 extu.b Rm,Rn */
	r6 = r5 & 0xFF;  /* 0C0C22E2 extu.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C22E6u, 3);  /* 0C0C22E4 mov.l Rm,@-Rn */
	r5 = r0;  /* 0C0C22E6 mov Rm,Rn */
	r0 = 0xC05FD2Cu; UPD(0x0C0C22EAu, 2);  /* 0C0C22E8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0C22EA mov Rm,Rn */
	r4 = 0x7u;  /* 0C0C22EC mov #imm,Rn */
	r7 = 0x0u;  /* 0C0C22EE mov #imm,Rn */
	r15 = r14;  /* 0C0C22F0 mov Rm,Rn */
	IF(0x0C0C22F2u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 6); switch (t_) { case 0x0C05FD2Cu: TAIL(blk_f_0C05FD2C); default: JUMPD(tv_); } }  /* 0C0C22F2 jmp @Rn */
}

/* divmod10 */
void blk_f_0C0C2310(sh3_t *c)
{
	LOCALS;
L_0C0C2310: BLKS(0x0C0C2310u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2312u, 1);  /* 0C0C2310 mov.l Rm,@-Rn */
	IF(0x0C0C2312u); r15 -= 4; W32(r15, PR); UPD(0x0C0C2314u, 1);  /* 0C0C2312 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0C2314 add #imm,Rn */
	r14 = r15;  /* 0C0C2316 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0C231Au, 3);  /* 0C0C2318 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0C231Cu, 1);  /* 0C0C231A mov.l Rm,@(disp,Rn) */
	r7 = 0xC0C2494u; UPD(0x0C0C231Eu, 1);  /* 0C0C231C mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0C2320u, 1);  /* 0C0C231E mov.l @Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0C2322u, 1);  /* 0C0C2320 mov.l @(disp,Rm),Rn */
	IF(0x0C0C2322u); { u32 t_ = r7; PR = 0x0C0C2326u; IF(0x0C0C2324u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2494, 0x0C0C2494u, 0x0C0C2326u); }  /* 0C0C2322 jsr @Rn */
L_0C0C2326: BLKS(0x0C0C2326u);
	W32(r14 + 0x8u, r0); UPD(0x0C0C2328u, 1);  /* 0C0C2326 mov.l Rm,@(disp,Rn) */
	r6 = R32(r14); UPD(0x0C0C232Au, 1);  /* 0C0C2328 mov.l @Rm,Rn */
	r7 = 0xC0C2494u; UPD(0x0C0C232Cu, 1);  /* 0C0C232A mov.l @(disp,pc),Rn */
	r4 = r6;  /* 0C0C232C mov Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0C2330u, 2);  /* 0C0C232E mov.l @(disp,Rm),Rn */
	IF(0x0C0C2330u); { u32 t_ = r7; PR = 0x0C0C2334u; IF(0x0C0C2332u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2494, 0x0C0C2494u, 0x0C0C2334u); }  /* 0C0C2330 jsr @Rn */
L_0C0C2334: BLKS(0x0C0C2334u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0C2336u, 1);  /* 0C0C2334 mov.l @(disp,Rm),Rn */
	IF(0x0C0C2336u); MACL = r0 * r1;  /* 0C0C2336 mul.l Rm,Rn */
	IF(0x0C0C2338u); r1 = MACL;  /* 0C0C2338 sts macl,Rn */
	r6 -= r1;  /* 0C0C233A sub Rm,Rn */
	r1 = r6;  /* 0C0C233C mov Rm,Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0C2340u, 6);  /* 0C0C233E mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x8u); UPD(0x0C0C2342u, 1);  /* 0C0C2340 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0C2344u, 1);  /* 0C0C2342 mov.l @(disp,Rm),Rn */
	r0 = r1;  /* 0C0C2344 mov Rm,Rn */
	r1 = r2;  /* 0C0C2346 mov Rm,Rn */
	r14 += 0x10u;  /* 0C0C2348 add #imm,Rn */
	r15 = r14;  /* 0C0C234A mov Rm,Rn */
	IF(0x0C0C234Cu); PR = R32(r15); r15 += 4; UPD(0x0C0C234Eu, 5);  /* 0C0C234C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C2350u, 1);  /* 0C0C234E mov.l @Rm+,Rn */
	IF(0x0C0C2350u); { u32 t_ = PR; IF(0x0C0C2352u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C2350 rts */
}

/* FUN_0c0c2360 */
void blk_f_0C0C2360(sh3_t *c)
{
	LOCALS;
L_0C0C2360: BLKS(0x0C0C2360u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2362u, 1);  /* 0C0C2360 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0C2362 add #imm,Rn */
	r14 = r15;  /* 0C0C2364 mov Rm,Rn */
	r3 = 0xC207578u; UPD(0x0C0C2368u, 3);  /* 0C0C2366 mov.l @(disp,pc),Rn */
	r1 = 0xC207578u; UPD(0x0C0C236Au, 1);  /* 0C0C2368 mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C0C236Cu, 1);  /* 0C0C236A mov.l @Rm,Rn */
	r1 = 0x41C64E6Du; UPD(0x0C0C236Eu, 1);  /* 0C0C236C mov.l @(disp,pc),Rn */
	IF(0x0C0C236Eu); MACL = r2 * r1;  /* 0C0C236E mul.l Rm,Rn */
	IF(0x0C0C2370u); r2 = MACL;  /* 0C0C2370 sts macl,Rn */
	r1 = 0x3039u; UPD(0x0C0C2374u, 4);  /* 0C0C2372 mov.w @(disp,pc),Rn */
	r1 += r2;  /* 0C0C2374 add Rm,Rn */
	W32(r3, r1); UPD(0x0C0C2378u, 2);  /* 0C0C2376 mov.l Rm,@Rn */
	r1 = 0xC207578u; UPD(0x0C0C237Au, 1);  /* 0C0C2378 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0C237Cu, 1);  /* 0C0C237A mov.l @Rm,Rn */
	r1 += 0x1u;  /* 0C0C237C add #imm,Rn */
	W32(r14, r1); UPD(0x0C0C2380u, 2);  /* 0C0C237E mov.l Rm,@Rn */
	r2 = R32(r14); UPD(0x0C0C2382u, 1);  /* 0C0C2380 mov.l @Rm,Rn */
	r1 = (r2 >> 16) | (r2 << 16);  /* 0C0C2382 swap.w Rm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C0C2384 exts.w Rm,Rn */
	W32(r14, r1); UPD(0x0C0C2388u, 3);  /* 0C0C2386 mov.l Rm,@Rn */
	r1 = 0x7FFFu; UPD(0x0C0C238Au, 1);  /* 0C0C2388 mov.w @(disp,pc),Rn */
	r2 = R32(r14); UPD(0x0C0C238Cu, 1);  /* 0C0C238A mov.l @Rm,Rn */
	r2 &= r1;  /* 0C0C238C and Rm,Rn */
	W32(r14, r2); UPD(0x0C0C2390u, 2);  /* 0C0C238E mov.l Rm,@Rn */
	r0 = R32(r14); UPD(0x0C0C2392u, 1);  /* 0C0C2390 mov.l @Rm,Rn */
	r14 += 0x4u;  /* 0C0C2392 add #imm,Rn */
	r15 = r14;  /* 0C0C2394 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C2398u, 3);  /* 0C0C2396 mov.l @Rm+,Rn */
	IF(0x0C0C2398u); { u32 t_ = PR; IF(0x0C0C239Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C2398 rts */
}

/* FUN_0c0c23b0 */
void blk_f_0C0C23B0(sh3_t *c)
{
	LOCALS;
L_0C0C23B0: BLKS(0x0C0C23B0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C23B2u, 1);  /* 0C0C23B0 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0C23B2 add #imm,Rn */
	r14 = r15;  /* 0C0C23B4 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0C23B8u, 3);  /* 0C0C23B6 mov.l Rm,@Rn */
	r2 = 0xC207578u; UPD(0x0C0C23BAu, 1);  /* 0C0C23B8 mov.l @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0C23BCu, 1);  /* 0C0C23BA mov.l @Rm,Rn */
	W32(r2, r1); UPD(0x0C0C23BEu, 1);  /* 0C0C23BC mov.l Rm,@Rn */
	r14 += 0x4u;  /* 0C0C23BE add #imm,Rn */
	r15 = r14;  /* 0C0C23C0 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C23C4u, 3);  /* 0C0C23C2 mov.l @Rm+,Rn */
	IF(0x0C0C23C4u); { u32 t_ = PR; IF(0x0C0C23C6u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C23C4 rts */
}

/* memcpy */
void blk_f_0C0C23D0(sh3_t *c)
{
	LOCALS;
L_0C0C23D0: BLKS(0x0C0C23D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C23D2u, 1);  /* 0C0C23D0 mov.l Rm,@-Rn */
	IF(0x0C0C23D2u); r15 -= 4; W32(r15, PR); UPD(0x0C0C23D4u, 1);  /* 0C0C23D2 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF4u;  /* 0C0C23D4 add #imm,Rn */
	r14 = r15;  /* 0C0C23D6 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0C23DAu, 3);  /* 0C0C23D8 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0C23DCu, 1);  /* 0C0C23DA mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r6); UPD(0x0C0C23DEu, 1);  /* 0C0C23DC mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C23E0u, 1);  /* 0C0C23DE mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C0C23E2u, 1);  /* 0C0C23E0 mov.l @(disp,Rm),Rn */
	r4 = r1;  /* 0C0C23E2 mov Rm,Rn */
	r5 = R32(r14); UPD(0x0C0C23E6u, 2);  /* 0C0C23E4 mov.l @Rm,Rn */
	r6 = r2;  /* 0C0C23E6 mov Rm,Rn */
	r1 = 0xC0C25E0u; UPD(0x0C0C23EAu, 2);  /* 0C0C23E8 mov.l @(disp,pc),Rn */
	IF(0x0C0C23EAu); { u32 t_ = r1; PR = 0x0C0C23EEu; IF(0x0C0C23ECu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C25E0, 0x0C0C25E0u, 0x0C0C23EEu); }  /* 0C0C23EA jsr @Rn */
L_0C0C23EE: BLKS(0x0C0C23EEu);
	r14 += 0xCu;  /* 0C0C23EE add #imm,Rn */
	r15 = r14;  /* 0C0C23F0 mov Rm,Rn */
	IF(0x0C0C23F2u); PR = R32(r15); r15 += 4; UPD(0x0C0C23F4u, 3);  /* 0C0C23F2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C23F6u, 1);  /* 0C0C23F4 mov.l @Rm+,Rn */
	IF(0x0C0C23F6u); { u32 t_ = PR; IF(0x0C0C23F8u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C23F6 rts */
}

/* sdiv32 */
void blk_f_0C0C2494(sh3_t *c)
{
	LOCALS;
	goto L_0C0C2494;
L_0C0C248E: BLKS(0x0C0C248Eu);
	IF(0x0C0C248Eu); rt_illegal(c, 0x0C0C248Eu);  /* 0C0C248E illegal 0FF0 */
L_0C0C2494: BLKS(0x0C0C2494u);
	T = (r5 & r5) == 0;  /* 0C0C2494 tst Rm,Rn */
	if (T) { UPD(0x0C0C248Eu, 4); goto L_0C0C248E; }  /* 0C0C2496 bt */
L_0C0C2498: BLKS(0x0C0C2498u);
	r1 = r4;  /* 0C0C2498 mov Rm,Rn */
	r0 = r5;  /* 0C0C249A mov Rm,Rn */
	r2 ^= r2;  /* 0C0C249C xor Rm,Rn */
	{ u32 q_ = r1 >> 31, m_ = r2 >> 31; c->sr = (c->sr & ~(SR_Q | SR_M)) | (q_ ? SR_Q : 0) | (m_ ? SR_M : 0); T = q_ ^ m_; }  /* 0C0C249E div0s Rm,Rn */
	{ u32 a_ = r3, t_ = a_ - r3, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r3 = r_; }  /* 0C0C24A0 subc Rm,Rn */
	{ u32 a_ = r1, t_ = a_ - r2, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r1 = r_; }  /* 0C0C24A2 subc Rm,Rn */
	{ u32 q_ = r3 >> 31, m_ = r0 >> 31; c->sr = (c->sr & ~(SR_Q | SR_M)) | (q_ ? SR_Q : 0) | (m_ ? SR_M : 0); T = q_ ^ m_; }  /* 0C0C24A4 div0s Rm,Rn */
	IF(0x0C0C24A6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24A6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24A8 div1 Rm,Rn */
	IF(0x0C0C24AAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24AA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24AC div1 Rm,Rn */
	IF(0x0C0C24AEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24AE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24B0 div1 Rm,Rn */
	IF(0x0C0C24B2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24B2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24B4 div1 Rm,Rn */
	IF(0x0C0C24B6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24B6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24B8 div1 Rm,Rn */
	IF(0x0C0C24BAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24BA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24BC div1 Rm,Rn */
	IF(0x0C0C24BEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24BE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24C0 div1 Rm,Rn */
	IF(0x0C0C24C2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24C2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24C4 div1 Rm,Rn */
	IF(0x0C0C24C6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24C6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24C8 div1 Rm,Rn */
	IF(0x0C0C24CAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24CA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24CC div1 Rm,Rn */
	IF(0x0C0C24CEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24CE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24D0 div1 Rm,Rn */
	IF(0x0C0C24D2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24D2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24D4 div1 Rm,Rn */
	IF(0x0C0C24D6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24D6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24D8 div1 Rm,Rn */
	IF(0x0C0C24DAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24DA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24DC div1 Rm,Rn */
	IF(0x0C0C24DEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24DE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24E0 div1 Rm,Rn */
	IF(0x0C0C24E2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24E2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24E4 div1 Rm,Rn */
	IF(0x0C0C24E6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24E6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24E8 div1 Rm,Rn */
	IF(0x0C0C24EAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24EA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24EC div1 Rm,Rn */
	IF(0x0C0C24EEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24EE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24F0 div1 Rm,Rn */
	IF(0x0C0C24F2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24F2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24F4 div1 Rm,Rn */
	IF(0x0C0C24F6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24F6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24F8 div1 Rm,Rn */
	IF(0x0C0C24FAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24FA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C24FC div1 Rm,Rn */
	IF(0x0C0C24FEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C24FE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C2500 div1 Rm,Rn */
	IF(0x0C0C2502u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C2502 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C2504 div1 Rm,Rn */
	IF(0x0C0C2506u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C2506 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C2508 div1 Rm,Rn */
	IF(0x0C0C250Au); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C250A rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C250C div1 Rm,Rn */
	IF(0x0C0C250Eu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C250E rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C2510 div1 Rm,Rn */
	IF(0x0C0C2512u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; } UPD(0x0C0C2514u, 62);  /* 0C0C2512 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C2514 div1 Rm,Rn */
	IF(0x0C0C2516u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C2516 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C2518 div1 Rm,Rn */
	IF(0x0C0C251Au); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C251A rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C251C div1 Rm,Rn */
	IF(0x0C0C251Eu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C251E rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C2520 div1 Rm,Rn */
	IF(0x0C0C2522u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C2522 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0C2524 div1 Rm,Rn */
	IF(0x0C0C2526u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0C2526 rotcl Rn */
	{ u32 a_ = r1, t_ = a_ + r2, r_ = t_ + T; T = (a_ > t_) | (t_ > r_); r1 = r_; }  /* 0C0C2528 addc Rm,Rn */
	IF(0x0C0C252Au); { u32 t_ = PR; r0 = r1; /* slot mov Rm,Rn */ UPD(t_, 14); RET(t_); }  /* 0C0C252A rts */
}

/* copy_long16 */
void blk_f_0C0C252E(sh3_t *c)
{
	LOCALS;
L_0C0C252E: BLKS(0x0C0C252Eu);
	r0 = R32(r5 + 0x3Cu); UPD(0x0C0C2530u, 1);  /* 0C0C252E mov.l @(disp,Rm),Rn */
	W32(r4 + 0x3Cu, r0); UPD(0x0C0C2532u, 1);  /* 0C0C2530 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x38u); UPD(0x0C0C2534u, 1);  /* 0C0C2532 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x38u, r0); UPD(0x0C0C2536u, 1);  /* 0C0C2534 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x34u); UPD(0x0C0C2538u, 1);  /* 0C0C2536 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x34u, r0); UPD(0x0C0C253Au, 1);  /* 0C0C2538 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x30u); UPD(0x0C0C253Cu, 1);  /* 0C0C253A mov.l @(disp,Rm),Rn */
	W32(r4 + 0x30u, r0); UPD(0x0C0C253Eu, 1);  /* 0C0C253C mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x2Cu); UPD(0x0C0C2540u, 1);  /* 0C0C253E mov.l @(disp,Rm),Rn */
	W32(r4 + 0x2Cu, r0); UPD(0x0C0C2542u, 1);  /* 0C0C2540 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x28u); UPD(0x0C0C2544u, 1);  /* 0C0C2542 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x28u, r0); UPD(0x0C0C2546u, 1);  /* 0C0C2544 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x24u); UPD(0x0C0C2548u, 1);  /* 0C0C2546 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x24u, r0); UPD(0x0C0C254Au, 1);  /* 0C0C2548 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x20u); UPD(0x0C0C254Cu, 1);  /* 0C0C254A mov.l @(disp,Rm),Rn */
	W32(r4 + 0x20u, r0); UPD(0x0C0C254Eu, 1);  /* 0C0C254C mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x1Cu); UPD(0x0C0C2550u, 1);  /* 0C0C254E mov.l @(disp,Rm),Rn */
	W32(r4 + 0x1Cu, r0); UPD(0x0C0C2552u, 1);  /* 0C0C2550 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x18u); UPD(0x0C0C2554u, 1);  /* 0C0C2552 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x18u, r0); UPD(0x0C0C2556u, 1);  /* 0C0C2554 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x14u); UPD(0x0C0C2558u, 1);  /* 0C0C2556 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x14u, r0); UPD(0x0C0C255Au, 1);  /* 0C0C2558 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x10u); UPD(0x0C0C255Cu, 1);  /* 0C0C255A mov.l @(disp,Rm),Rn */
	W32(r4 + 0x10u, r0); UPD(0x0C0C255Eu, 1);  /* 0C0C255C mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0xCu); UPD(0x0C0C2560u, 1);  /* 0C0C255E mov.l @(disp,Rm),Rn */
	W32(r4 + 0xCu, r0); UPD(0x0C0C2562u, 1);  /* 0C0C2560 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x8u); UPD(0x0C0C2564u, 1);  /* 0C0C2562 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x8u, r0); UPD(0x0C0C2566u, 1);  /* 0C0C2564 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x4u); UPD(0x0C0C2568u, 1);  /* 0C0C2566 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x4u, r0); UPD(0x0C0C256Au, 1);  /* 0C0C2568 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x0u); UPD(0x0C0C256Cu, 1);  /* 0C0C256A mov.l @(disp,Rm),Rn */
	W32(r4 + 0x0u, r0); UPD(0x0C0C256Eu, 1);  /* 0C0C256C mov.l Rm,@(disp,Rn) */
	r6 += 0xFFFFFFF0u;  /* 0C0C256E add #imm,Rn */
	IF(0x0C0C2570u); T = (s32)r6 > 0;  /* 0C0C2570 cmp/pl Rn */
	if (T) { UPD(0x0C0C2580u, 5); goto L_0C0C2580; }  /* 0C0C2572 bt */
L_0C0C2574: BLKS(0x0C0C2574u);
	r5 += 0x40u;  /* 0C0C2574 add #imm,Rn */
	r0 = 0xC0C25D0u;  /* 0C0C2576 mova @(disp,pc),r0 */
	IF(0x0C0C2578u); r6 <<= 2;  /* 0C0C2578 shll2 Rn */
	r0 += r6;  /* 0C0C257A add Rm,Rn */
	IF(0x0C0C257Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r4 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 6); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0C257C jmp @Rn */
L_0C0C2580: BLKS(0x0C0C2580u);
	r5 += 0x40u;  /* 0C0C2580 add #imm,Rn */
	{ r4 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C0C252Eu, 4); goto L_0C0C252E; }  /* 0C0C2582 bra */
}

void blk_f_0C0C25A0(sh3_t *c)
{
	LOCALS;
L_0C0C25A0: BLKS(0x0C0C25A0u);
	r0 = R32(r5 + 0x2Cu); UPD(0x0C0C25A2u, 1);  /* 0C0C25A0 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x2Cu, r0); UPD(0x0C0C25A4u, 1);  /* 0C0C25A2 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x28u); UPD(0x0C0C25A6u, 1);  /* 0C0C25A4 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x28u, r0); UPD(0x0C0C25A8u, 1);  /* 0C0C25A6 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x24u); UPD(0x0C0C25AAu, 1);  /* 0C0C25A8 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x24u, r0); UPD(0x0C0C25ACu, 1);  /* 0C0C25AA mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x20u); UPD(0x0C0C25AEu, 1);  /* 0C0C25AC mov.l @(disp,Rm),Rn */
	W32(r4 + 0x20u, r0); UPD(0x0C0C25B0u, 1);  /* 0C0C25AE mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x1Cu); UPD(0x0C0C25B2u, 1);  /* 0C0C25B0 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x1Cu, r0); UPD(0x0C0C25B4u, 1);  /* 0C0C25B2 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x18u); UPD(0x0C0C25B6u, 1);  /* 0C0C25B4 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x18u, r0); UPD(0x0C0C25B8u, 1);  /* 0C0C25B6 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x14u); UPD(0x0C0C25BAu, 1);  /* 0C0C25B8 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x14u, r0); UPD(0x0C0C25BCu, 1);  /* 0C0C25BA mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x10u); UPD(0x0C0C25BEu, 1);  /* 0C0C25BC mov.l @(disp,Rm),Rn */
	W32(r4 + 0x10u, r0); UPD(0x0C0C25C0u, 1);  /* 0C0C25BE mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0xCu); UPD(0x0C0C25C2u, 1);  /* 0C0C25C0 mov.l @(disp,Rm),Rn */
	W32(r4 + 0xCu, r0); UPD(0x0C0C25C4u, 1);  /* 0C0C25C2 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x8u); UPD(0x0C0C25C6u, 1);  /* 0C0C25C4 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x8u, r0); UPD(0x0C0C25C8u, 1);  /* 0C0C25C6 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x4u); UPD(0x0C0C25CAu, 1);  /* 0C0C25C8 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x4u, r0); UPD(0x0C0C25CCu, 1);  /* 0C0C25CA mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x0u); UPD(0x0C0C25CEu, 1);  /* 0C0C25CC mov.l @(disp,Rm),Rn */
	W32(r4 + 0x0u, r0); UPD(0x0C0C25D0u, 1);  /* 0C0C25CE mov.l Rm,@(disp,Rn) */
	IF(0x0C0C25D0u); { u32 t_ = PR; r0 |= r0; /* slot or Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0C25D0 rts */
}

/* bcopy */
void blk_f_0C0C25E0(sh3_t *c)
{
	LOCALS;
L_0C0C25E0: BLKS(0x0C0C25E0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C25E2u, 1);  /* 0C0C25E0 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFE8u;  /* 0C0C25E2 add #imm,Rn */
	r14 = r15;  /* 0C0C25E4 mov Rm,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C0C25E8u, 3);  /* 0C0C25E6 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r5); UPD(0x0C0C25EAu, 1);  /* 0C0C25E8 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r6); UPD(0x0C0C25ECu, 1);  /* 0C0C25EA mov.l Rm,@(disp,Rn) */
	r0 = R32(r14 + 0xCu); UPD(0x0C0C25EEu, 1);  /* 0C0C25EC mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0C25EE tst Rm,Rn */
	if (!T) { UPD(0x0C0C2600u, 4); goto L_0C0C2600; }  /* 0C0C25F0 bf */
L_0C0C25F2: BLKS(0x0C0C25F2u);
	r1 = R32(r14 + 0x8u); UPD(0x0C0C25F4u, 1);  /* 0C0C25F2 mov.l @(disp,Rm),Rn */
	W32(r14, r1); UPD(0x0C0C25F6u, 1);  /* 0C0C25F4 mov.l Rm,@Rn */
	{ IF(0x0C0C25F8u); ; /* slot nop */ UPD(0x0C0C2710u, 3); goto L_0C0C2710; }  /* 0C0C25F6 bra */
L_0C0C2600: BLKS(0x0C0C2600u);
	r2 = R32(r14 + 0x8u); UPD(0x0C0C2602u, 1);  /* 0C0C2600 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x10u, r2); UPD(0x0C0C2604u, 1);  /* 0C0C2602 mov.l Rm,@(disp,Rn) */
	r0 = R32(r14 + 0x4u); UPD(0x0C0C2606u, 1);  /* 0C0C2604 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0C2608u, 1);  /* 0C0C2606 mov.l @(disp,Rm),Rn */
	r0 -= r1;  /* 0C0C2608 sub Rm,Rn */
	r0 &= 0x3u;  /* 0C0C260A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0C260C tst Rm,Rn */
	if (T) { UPD(0x0C0C2650u, 6); goto L_0C0C2650; }  /* 0C0C260E bt */
L_0C0C2610: BLKS(0x0C0C2610u);
	r2 = R32(r14 + 0xCu); UPD(0x0C0C2612u, 1);  /* 0C0C2610 mov.l @(disp,Rm),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0C2612 add #imm,Rn */
	W32(r14 + 0xCu, r2); UPD(0x0C0C2616u, 2);  /* 0C0C2614 mov.l Rm,@(disp,Rn) */
	r0 = R32(r14 + 0xCu); UPD(0x0C0C2618u, 1);  /* 0C0C2616 mov.l @(disp,Rm),Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C0C2618 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0C2620u, 4); goto L_0C0C2620; }  /* 0C0C261A bf */
L_0C0C261C: BLKS(0x0C0C261Cu);
	{ IF(0x0C0C261Eu); ; /* slot nop */ UPD(0x0C0C2640u, 3); goto L_0C0C2640; }  /* 0C0C261C bra */
L_0C0C2620: BLKS(0x0C0C2620u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0C2622u, 1);  /* 0C0C2620 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0C2624u, 1);  /* 0C0C2622 mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C0C2626u, 1);  /* 0C0C2624 mov.b @Rm,Rn */
	W8(r1, r2); UPD(0x0C0C2628u, 1);  /* 0C0C2626 mov.b Rm,@Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C262Au, 1);  /* 0C0C2628 mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C0C262A add #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0C262Eu, 2);  /* 0C0C262C mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x10u); UPD(0x0C0C2630u, 1);  /* 0C0C262E mov.l @(disp,Rm),Rn */
	r2 += 0x1u;  /* 0C0C2630 add #imm,Rn */
	W32(r14 + 0x10u, r2); UPD(0x0C0C2634u, 2);  /* 0C0C2632 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0C2636u); ; /* slot nop */ UPD(0x0C0C2610u, 3); goto L_0C0C2610; }  /* 0C0C2634 bra */
L_0C0C2640: BLKS(0x0C0C2640u);
	r0 = R32(r14 + 0x8u); UPD(0x0C0C2642u, 1);  /* 0C0C2640 mov.l @(disp,Rm),Rn */
	W32(r14, r0); UPD(0x0C0C2644u, 1);  /* 0C0C2642 mov.l Rm,@Rn */
	{ IF(0x0C0C2646u); ; /* slot nop */ UPD(0x0C0C2710u, 3); goto L_0C0C2710; }  /* 0C0C2644 bra */
L_0C0C2650: BLKS(0x0C0C2650u);
	r0 = R32(r14 + 0x10u); UPD(0x0C0C2652u, 1);  /* 0C0C2650 mov.l @(disp,Rm),Rn */
	r0 &= 0x1u;  /* 0C0C2652 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0C2654 tst Rm,Rn */
	if (T) { UPD(0x0C0C2672u, 5); goto L_0C0C2672; }  /* 0C0C2656 bt */
L_0C0C2658: BLKS(0x0C0C2658u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0C265Au, 1);  /* 0C0C2658 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0C265Cu, 1);  /* 0C0C265A mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C0C265Eu, 1);  /* 0C0C265C mov.b @Rm,Rn */
	W8(r1, r2); UPD(0x0C0C2660u, 1);  /* 0C0C265E mov.b Rm,@Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C2662u, 1);  /* 0C0C2660 mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C0C2662 add #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0C2666u, 2);  /* 0C0C2664 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x10u); UPD(0x0C0C2668u, 1);  /* 0C0C2666 mov.l @(disp,Rm),Rn */
	r2 += 0x1u;  /* 0C0C2668 add #imm,Rn */
	W32(r14 + 0x10u, r2); UPD(0x0C0C266Cu, 2);  /* 0C0C266A mov.l Rm,@(disp,Rn) */
	r0 = R32(r14 + 0xCu); UPD(0x0C0C266Eu, 1);  /* 0C0C266C mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0C266E add #imm,Rn */
	W32(r14 + 0xCu, r0); UPD(0x0C0C2672u, 2);  /* 0C0C2670 mov.l Rm,@(disp,Rn) */
L_0C0C2672: BLKS(0x0C0C2672u);
	r1 = 0x1u;  /* 0C0C2672 mov #imm,Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0C2676u, 2);  /* 0C0C2674 mov.l @(disp,Rm),Rn */
	T = r2 > r1;  /* 0C0C2676 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0C269Cu, 4); goto L_0C0C269C; }  /* 0C0C2678 bf */
L_0C0C267A: BLKS(0x0C0C267Au);
	r0 = R32(r14 + 0x10u); UPD(0x0C0C267Cu, 1);  /* 0C0C267A mov.l @(disp,Rm),Rn */
	r0 &= 0x2u;  /* 0C0C267C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0C267E tst Rm,Rn */
	if (T) { UPD(0x0C0C269Cu, 5); goto L_0C0C269C; }  /* 0C0C2680 bt */
L_0C0C2682: BLKS(0x0C0C2682u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0C2684u, 1);  /* 0C0C2682 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0C2686u, 1);  /* 0C0C2684 mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s16)R16(r2); UPD(0x0C0C2688u, 1);  /* 0C0C2686 mov.w @Rm,Rn */
	W16(r1, r2); UPD(0x0C0C268Au, 1);  /* 0C0C2688 mov.w Rm,@Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C0C268Cu, 1);  /* 0C0C268A mov.l @(disp,Rm),Rn */
	r0 += 0x2u;  /* 0C0C268C add #imm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0C2690u, 2);  /* 0C0C268E mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x10u); UPD(0x0C0C2692u, 1);  /* 0C0C2690 mov.l @(disp,Rm),Rn */
	r1 += 0x2u;  /* 0C0C2692 add #imm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0C2696u, 2);  /* 0C0C2694 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0xCu); UPD(0x0C0C2698u, 1);  /* 0C0C2696 mov.l @(disp,Rm),Rn */
	r2 += 0xFFFFFFFEu;  /* 0C0C2698 add #imm,Rn */
	W32(r14 + 0xCu, r2); UPD(0x0C0C269Cu, 2);  /* 0C0C269A mov.l Rm,@(disp,Rn) */
L_0C0C269C: BLKS(0x0C0C269Cu);
	r0 = R32(r14 + 0xCu); UPD(0x0C0C269Eu, 1);  /* 0C0C269C mov.l @(disp,Rm),Rn */
	IF(0x0C0C269Eu); r0 >>= 2;  /* 0C0C269E shlr2 Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C0C26A2u, 2);  /* 0C0C26A0 mov.l Rm,@(disp,Rn) */
L_0C0C26A2: BLKS(0x0C0C26A2u);
	r1 = R32(r14 + 0x14u); UPD(0x0C0C26A4u, 1);  /* 0C0C26A2 mov.l @(disp,Rm),Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0C26A4 add #imm,Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0C26A8u, 2);  /* 0C0C26A6 mov.l Rm,@(disp,Rn) */
	r0 = R32(r14 + 0x14u); UPD(0x0C0C26AAu, 1);  /* 0C0C26A8 mov.l @(disp,Rm),Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C0C26AA cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0C26C0u, 4); goto L_0C0C26C0; }  /* 0C0C26AC bf */
L_0C0C26AE: BLKS(0x0C0C26AEu);
	{ IF(0x0C0C26B0u); ; /* slot nop */ UPD(0x0C0C26E0u, 3); goto L_0C0C26E0; }  /* 0C0C26AE bra */
L_0C0C26C0: BLKS(0x0C0C26C0u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0C26C2u, 1);  /* 0C0C26C0 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0C26C4u, 1);  /* 0C0C26C2 mov.l @(disp,Rm),Rn */
	r2 = R32(r2); UPD(0x0C0C26C6u, 1);  /* 0C0C26C4 mov.l @Rm,Rn */
	W32(r1, r2); UPD(0x0C0C26C8u, 1);  /* 0C0C26C6 mov.l Rm,@Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C26CAu, 1);  /* 0C0C26C8 mov.l @(disp,Rm),Rn */
	r1 += 0x4u;  /* 0C0C26CA add #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0C26CEu, 2);  /* 0C0C26CC mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x10u); UPD(0x0C0C26D0u, 1);  /* 0C0C26CE mov.l @(disp,Rm),Rn */
	r2 += 0x4u;  /* 0C0C26D0 add #imm,Rn */
	W32(r14 + 0x10u, r2); UPD(0x0C0C26D4u, 2);  /* 0C0C26D2 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0C26D6u); ; /* slot nop */ UPD(0x0C0C26A2u, 3); goto L_0C0C26A2; }  /* 0C0C26D4 bra */
L_0C0C26E0: BLKS(0x0C0C26E0u);
	r0 = R32(r14 + 0xCu); UPD(0x0C0C26E2u, 1);  /* 0C0C26E0 mov.l @(disp,Rm),Rn */
	r0 &= 0x2u;  /* 0C0C26E2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0C26E4 tst Rm,Rn */
	if (T) { UPD(0x0C0C26FCu, 5); goto L_0C0C26FC; }  /* 0C0C26E6 bt */
L_0C0C26E8: BLKS(0x0C0C26E8u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0C26EAu, 1);  /* 0C0C26E8 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0C26ECu, 1);  /* 0C0C26EA mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s16)R16(r2); UPD(0x0C0C26EEu, 1);  /* 0C0C26EC mov.w @Rm,Rn */
	W16(r1, r2); UPD(0x0C0C26F0u, 1);  /* 0C0C26EE mov.w Rm,@Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C0C26F2u, 1);  /* 0C0C26F0 mov.l @(disp,Rm),Rn */
	r0 += 0x2u;  /* 0C0C26F2 add #imm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0C26F6u, 2);  /* 0C0C26F4 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x10u); UPD(0x0C0C26F8u, 1);  /* 0C0C26F6 mov.l @(disp,Rm),Rn */
	r1 += 0x2u;  /* 0C0C26F8 add #imm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0C26FCu, 2);  /* 0C0C26FA mov.l Rm,@(disp,Rn) */
L_0C0C26FC: BLKS(0x0C0C26FCu);
	r0 = R32(r14 + 0xCu); UPD(0x0C0C26FEu, 1);  /* 0C0C26FC mov.l @(disp,Rm),Rn */
	r0 &= 0x1u;  /* 0C0C26FE and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0C2700 tst Rm,Rn */
	if (T) { UPD(0x0C0C270Cu, 5); goto L_0C0C270C; }  /* 0C0C2702 bt */
L_0C0C2704: BLKS(0x0C0C2704u);
	r2 = R32(r14 + 0x4u); UPD(0x0C0C2706u, 1);  /* 0C0C2704 mov.l @(disp,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0C2708u, 1);  /* 0C0C2706 mov.b @Rm,Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0C270Au, 1);  /* 0C0C2708 mov.l @(disp,Rm),Rn */
	W8(r0, r1); UPD(0x0C0C270Cu, 1);  /* 0C0C270A mov.b Rm,@Rn */
L_0C0C270C: BLKS(0x0C0C270Cu);
	r1 = R32(r14 + 0x8u); UPD(0x0C0C270Eu, 1);  /* 0C0C270C mov.l @(disp,Rm),Rn */
	W32(r14, r1); UPD(0x0C0C2710u, 1);  /* 0C0C270E mov.l Rm,@Rn */
L_0C0C2710: BLKS(0x0C0C2710u);
	r0 = R32(r14); UPD(0x0C0C2712u, 1);  /* 0C0C2710 mov.l @Rm,Rn */
	r14 += 0x18u;  /* 0C0C2712 add #imm,Rn */
	r15 = r14;  /* 0C0C2714 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C2718u, 3);  /* 0C0C2716 mov.l @Rm+,Rn */
	IF(0x0C0C2718u); { u32 t_ = PR; IF(0x0C0C271Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C2718 rts */
}

/* FUN_0c0c2720 */
void blk_f_0C0C2720(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C0C2776);
L_0C0C2720: BLKS(0x0C0C2720u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2722u, 1);  /* 0C0C2720 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2724u, 1);  /* 0C0C2722 mov.l Rm,@-Rn */
	IF(0x0C0C2724u); r15 -= 4; W32(r15, PR); UPD(0x0C0C2726u, 1);  /* 0C0C2724 sts.l pr,@-Rn */
	r15 += 0xFFFFFFC8u;  /* 0C0C2726 add #imm,Rn */
	r14 = r15;  /* 0C0C2728 mov Rm,Rn */
	r1 = 0x0u;  /* 0C0C272A mov #imm,Rn */
	W32(r14, r1); UPD(0x0C0C272Eu, 4);  /* 0C0C272C mov.l Rm,@Rn */
	r1 = 0xC22857Cu; UPD(0x0C0C2730u, 1);  /* 0C0C272E mov.l @(disp,pc),Rn */
	r4 = r1;  /* 0C0C2730 mov Rm,Rn */
	r5 = 0x0u;  /* 0C0C2732 mov #imm,Rn */
	r6 = 0x14u;  /* 0C0C2734 mov #imm,Rn */
	r1 = 0xC056878u; UPD(0x0C0C2738u, 4);  /* 0C0C2736 mov.l @(disp,pc),Rn */
	IF(0x0C0C2738u); { u32 t_ = r1; PR = 0x0C0C273Cu; IF(0x0C0C273Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C056878, 0x0C056878u, 0x0C0C273Cu); }  /* 0C0C2738 jsr @Rn */
L_0C0C273C: BLKS(0x0C0C273Cu);
	r2 = 0xC2074DCu; UPD(0x0C0C273Eu, 1);  /* 0C0C273C mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C273E mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0C2742u, 2);  /* 0C0C2740 mov.l Rm,@Rn */
	r2 = 0xC2074E0u; UPD(0x0C0C2744u, 1);  /* 0C0C2742 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C2744 mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0C2748u, 2);  /* 0C0C2746 mov.l Rm,@Rn */
	r2 = 0xC2074E4u; UPD(0x0C0C274Au, 1);  /* 0C0C2748 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C274A mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0C274Eu, 2);  /* 0C0C274C mov.l Rm,@Rn */
	r1 = 0xC228590u; UPD(0x0C0C2750u, 1);  /* 0C0C274E mov.l @(disp,pc),Rn */
	r2 = 0x240u; UPD(0x0C0C2752u, 1);  /* 0C0C2750 mov.w @(disp,pc),Rn */
	r4 = r1;  /* 0C0C2752 mov Rm,Rn */
	r5 = 0x0u;  /* 0C0C2754 mov #imm,Rn */
	r6 = r2;  /* 0C0C2756 mov Rm,Rn */
	r1 = 0xC056878u; UPD(0x0C0C275Au, 4);  /* 0C0C2758 mov.l @(disp,pc),Rn */
	IF(0x0C0C275Au); { u32 t_ = r1; PR = 0x0C0C275Eu; IF(0x0C0C275Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C056878, 0x0C056878u, 0x0C0C275Eu); }  /* 0C0C275A jsr @Rn */
L_0C0C275E: BLKS(0x0C0C275Eu);
	r2 = 0xC2287D0u; UPD(0x0C0C2760u, 1);  /* 0C0C275E mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C2760 mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0C2764u, 2);  /* 0C0C2762 mov.l Rm,@Rn */
	r2 = 0xC2287D4u; UPD(0x0C0C2766u, 1);  /* 0C0C2764 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C2766 mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0C276Au, 2);  /* 0C0C2768 mov.l Rm,@Rn */
	r2 = 0xB0C00003u; UPD(0x0C0C276Cu, 1);  /* 0C0C276A mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C0C276C mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C2770u, 2);  /* 0C0C276E mov.b Rm,@Rn */
	r2 = 0xB0000001u; UPD(0x0C0C2772u, 1);  /* 0C0C2770 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0C2772 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C2776u, 2);  /* 0C0C2774 mov.b Rm,@Rn */
L_0C0C2776: BLKS(0x0C0C2776u);
	SPIN_SAVE(0C0C2776);
	r1 = 0xA4000128u; UPD(0x0C0C2778u, 1);  /* 0C0C2776 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)RS8(0C0C2776, r1); UPD(0x0C0C277Au, 1);  /* 0C0C2778 mov.b @Rm,Rn */
	r0 &= 0x20u;  /* 0C0C277A and #imm,r0 */
	r1 = r0 & 0xFF;  /* 0C0C277C extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0C277E tst Rm,Rn */
	if (T) { SPIN_FFD(0C0C2776, 8); UPD(0x0C0C2776u, 6); goto L_0C0C2776; }  /* 0C0C2780 bt */
L_0C0C2782: BLKS(0x0C0C2782u);
	r2 = 0xB0C00003u; UPD(0x0C0C2784u, 1);  /* 0C0C2782 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C2784 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C2788u, 2);  /* 0C0C2786 mov.b Rm,@Rn */
	r2 = 0xB0C00003u; UPD(0x0C0C278Au, 1);  /* 0C0C2788 mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C0C278A mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C278Eu, 2);  /* 0C0C278C mov.b Rm,@Rn */
	r2 = 0xB0000001u; UPD(0x0C0C2790u, 1);  /* 0C0C278E mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFF90u;  /* 0C0C2790 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C2794u, 2);  /* 0C0C2792 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0C2796u, 1);  /* 0C0C2794 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C2796 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C279Au, 2);  /* 0C0C2798 mov.b Rm,@Rn */
	r2 = r14;  /* 0C0C279A mov Rm,Rn */
	r2 += 0x4u;  /* 0C0C279C add #imm,Rn */
	r1 = 0xB0000000u; UPD(0x0C0C27A0u, 3);  /* 0C0C279E mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C27A2u, 1);  /* 0C0C27A0 mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0C27A4u, 1);  /* 0C0C27A2 mov.b Rm,@Rn */
	r1 = r14;  /* 0C0C27A4 mov Rm,Rn */
	r1 += 0x4u;  /* 0C0C27A6 add #imm,Rn */
	r2 = r1;  /* 0C0C27A8 mov Rm,Rn */
	r2 += 0x1u;  /* 0C0C27AA add #imm,Rn */
	r1 = 0xB0000000u; UPD(0x0C0C27AEu, 5);  /* 0C0C27AC mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C27B0u, 1);  /* 0C0C27AE mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0C27B2u, 1);  /* 0C0C27B0 mov.b Rm,@Rn */
	r2 = 0xB0C00003u; UPD(0x0C0C27B4u, 1);  /* 0C0C27B2 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C27B4 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C27B8u, 2);  /* 0C0C27B6 mov.b Rm,@Rn */
	r1 = r14;  /* 0C0C27B8 mov Rm,Rn */
	r1 += 0x4u;  /* 0C0C27BA add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C27BEu, 3);  /* 0C0C27BC mov.b @Rm,Rn */
	r2 = r1 & 0xFF;  /* 0C0C27BE extu.b Rm,Rn */
	r1 = 0x98u; UPD(0x0C0C27C2u, 2);  /* 0C0C27C0 mov.w @(disp,pc),Rn */
	T = r2 == r1;  /* 0C0C27C2 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C0C27ECu, 4); goto L_0C0C27EC; }  /* 0C0C27C4 bf */
L_0C0C27C6: BLKS(0x0C0C27C6u);
	r1 = r14;  /* 0C0C27C6 mov Rm,Rn */
	r1 += 0x4u;  /* 0C0C27C8 add #imm,Rn */
	r1 += 0x1u;  /* 0C0C27CA add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C27CEu, 4);  /* 0C0C27CC mov.b @Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C0C27CE extu.b Rm,Rn */
	T = r0 == 0x76u;  /* 0C0C27D0 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0C27ECu, 5); goto L_0C0C27EC; }  /* 0C0C27D2 bf */
L_0C0C27D4: BLKS(0x0C0C27D4u);
	r2 = 0xC22857Cu; UPD(0x0C0C27D6u, 1);  /* 0C0C27D4 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C27D6 mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0C27DAu, 2);  /* 0C0C27D8 mov.l Rm,@Rn */
	r2 = 0xC22857Cu; UPD(0x0C0C27DCu, 1);  /* 0C0C27DA mov.l @(disp,pc),Rn */
	r1 = 0x1000u; UPD(0x0C0C27DEu, 1);  /* 0C0C27DC mov.w @(disp,pc),Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C0C27E0u, 1);  /* 0C0C27DE mov.l Rm,@(disp,Rn) */
	r2 = 0xC22857Cu; UPD(0x0C0C27E2u, 1);  /* 0C0C27E0 mov.l @(disp,pc),Rn */
	r1 = 0x210u; UPD(0x0C0C27E4u, 1);  /* 0C0C27E2 mov.w @(disp,pc),Rn */
	W32(r2 + 0x8u, r1); UPD(0x0C0C27E6u, 1);  /* 0C0C27E4 mov.l Rm,@(disp,Rn) */
	r2 = 0xC22857Cu; UPD(0x0C0C27E8u, 1);  /* 0C0C27E6 mov.l @(disp,pc),Rn */
	r1 = 0x20u;  /* 0C0C27E8 mov #imm,Rn */
	W32(r2 + 0xCu, r1); UPD(0x0C0C27ECu, 2);  /* 0C0C27EA mov.l Rm,@(disp,Rn) */
L_0C0C27EC: BLKS(0x0C0C27ECu);
	r1 = r14;  /* 0C0C27EC mov Rm,Rn */
	r1 += 0x4u;  /* 0C0C27EE add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C27F2u, 3);  /* 0C0C27F0 mov.b @Rm,Rn */
	r2 = r1 & 0xFF;  /* 0C0C27F2 extu.b Rm,Rn */
	r1 = 0x98u; UPD(0x0C0C27F6u, 2);  /* 0C0C27F4 mov.w @(disp,pc),Rn */
	T = r2 == r1;  /* 0C0C27F6 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C0C2820u, 4); goto L_0C0C2820; }  /* 0C0C27F8 bf */
L_0C0C27FA: BLKS(0x0C0C27FAu);
	r1 = r14;  /* 0C0C27FA mov Rm,Rn */
	r1 += 0x4u;  /* 0C0C27FC add #imm,Rn */
	r1 += 0x1u;  /* 0C0C27FE add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C2802u, 4);  /* 0C0C2800 mov.b @Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C0C2802 extu.b Rm,Rn */
	T = r0 == 0x79u;  /* 0C0C2804 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0C2820u, 5); goto L_0C0C2820; }  /* 0C0C2806 bf */
L_0C0C2808: BLKS(0x0C0C2808u);
	r2 = 0xC22857Cu; UPD(0x0C0C280Au, 1);  /* 0C0C2808 mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C0C280A mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0C280Eu, 2);  /* 0C0C280C mov.l Rm,@Rn */
	r2 = 0xC22857Cu; UPD(0x0C0C2810u, 1);  /* 0C0C280E mov.l @(disp,pc),Rn */
	r1 = 0x2000u; UPD(0x0C0C2812u, 1);  /* 0C0C2810 mov.w @(disp,pc),Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C0C2814u, 1);  /* 0C0C2812 mov.l Rm,@(disp,Rn) */
	r2 = 0xC22857Cu; UPD(0x0C0C2816u, 1);  /* 0C0C2814 mov.l @(disp,pc),Rn */
	r1 = 0x210u; UPD(0x0C0C2818u, 1);  /* 0C0C2816 mov.w @(disp,pc),Rn */
	W32(r2 + 0x8u, r1); UPD(0x0C0C281Au, 1);  /* 0C0C2818 mov.l Rm,@(disp,Rn) */
	r2 = 0xC22857Cu; UPD(0x0C0C281Cu, 1);  /* 0C0C281A mov.l @(disp,pc),Rn */
	r1 = 0x20u;  /* 0C0C281C mov #imm,Rn */
	W32(r2 + 0xCu, r1); UPD(0x0C0C2820u, 2);  /* 0C0C281E mov.l Rm,@(disp,Rn) */
L_0C0C2820: BLKS(0x0C0C2820u);
	r1 = r14;  /* 0C0C2820 mov Rm,Rn */
	r1 += 0x4u;  /* 0C0C2822 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C2826u, 3);  /* 0C0C2824 mov.b @Rm,Rn */
	r2 = r1 & 0xFF;  /* 0C0C2826 extu.b Rm,Rn */
	r1 = 0xECu; UPD(0x0C0C282Au, 2);  /* 0C0C2828 mov.w @(disp,pc),Rn */
	T = r2 == r1;  /* 0C0C282A cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C0C2856u, 4); goto L_0C0C2856; }  /* 0C0C282C bf */
L_0C0C282E: BLKS(0x0C0C282Eu);
	r1 = r14;  /* 0C0C282E mov Rm,Rn */
	r1 += 0x4u;  /* 0C0C2830 add #imm,Rn */
	r1 += 0x1u;  /* 0C0C2832 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C2836u, 4);  /* 0C0C2834 mov.b @Rm,Rn */
	r2 = r1 & 0xFF;  /* 0C0C2836 extu.b Rm,Rn */
	r1 = 0xF1u; UPD(0x0C0C283Au, 2);  /* 0C0C2838 mov.w @(disp,pc),Rn */
	T = r2 == r1;  /* 0C0C283A cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C0C2856u, 4); goto L_0C0C2856; }  /* 0C0C283C bf */
L_0C0C283E: BLKS(0x0C0C283Eu);
	r2 = 0xC22857Cu; UPD(0x0C0C2840u, 1);  /* 0C0C283E mov.l @(disp,pc),Rn */
	r1 = 0x2u;  /* 0C0C2840 mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0C2844u, 2);  /* 0C0C2842 mov.l Rm,@Rn */
	r2 = 0xC22857Cu; UPD(0x0C0C2846u, 1);  /* 0C0C2844 mov.l @(disp,pc),Rn */
	r1 = 0x400u; UPD(0x0C0C2848u, 1);  /* 0C0C2846 mov.w @(disp,pc),Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C0C284Au, 1);  /* 0C0C2848 mov.l Rm,@(disp,Rn) */
	r2 = 0xC22857Cu; UPD(0x0C0C284Cu, 1);  /* 0C0C284A mov.l @(disp,pc),Rn */
	r1 = 0x840u; UPD(0x0C0C284Eu, 1);  /* 0C0C284C mov.w @(disp,pc),Rn */
	W32(r2 + 0x8u, r1); UPD(0x0C0C2850u, 1);  /* 0C0C284E mov.l Rm,@(disp,Rn) */
	r2 = 0xC22857Cu; UPD(0x0C0C2852u, 1);  /* 0C0C2850 mov.l @(disp,pc),Rn */
	r1 = 0x40u;  /* 0C0C2852 mov #imm,Rn */
	W32(r2 + 0xCu, r1); UPD(0x0C0C2856u, 2);  /* 0C0C2854 mov.l Rm,@(disp,Rn) */
L_0C0C2856: BLKS(0x0C0C2856u);
	r7 = 0xC22857Cu; UPD(0x0C0C2858u, 1);  /* 0C0C2856 mov.l @(disp,pc),Rn */
	r1 = 0xC22857Cu; UPD(0x0C0C285Au, 1);  /* 0C0C2858 mov.l @(disp,pc),Rn */
	r2 = 0xC22857Cu; UPD(0x0C0C285Cu, 1);  /* 0C0C285A mov.l @(disp,pc),Rn */
	r3 = R32(r1 + 0x8u); UPD(0x0C0C285Eu, 1);  /* 0C0C285C mov.l @(disp,Rm),Rn */
	r1 = R32(r2 + 0xCu); UPD(0x0C0C2860u, 1);  /* 0C0C285E mov.l @(disp,Rm),Rn */
	IF(0x0C0C2860u); MACL = r3 * r1;  /* 0C0C2860 mul.l Rm,Rn */
	IF(0x0C0C2862u); r1 = MACL;  /* 0C0C2862 sts macl,Rn */
	W32(r7 + 0x10u, r1); UPD(0x0C0C2866u, 4);  /* 0C0C2864 mov.l Rm,@(disp,Rn) */
	r1 = 0xC22857Cu; UPD(0x0C0C2868u, 1);  /* 0C0C2866 mov.l @(disp,pc),Rn */
	r1 = R32(r1 + 0x4u); UPD(0x0C0C286Au, 1);  /* 0C0C2868 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0C286A tst Rm,Rn */
	if (!T) { UPD(0x0C0C28C0u, 4); goto L_0C0C28C0; }  /* 0C0C286C bf */
L_0C0C286E: BLKS(0x0C0C286Eu);
	r1 = 0x0u;  /* 0C0C286E mov #imm,Rn */
	W32(r14, r1); UPD(0x0C0C2872u, 2);  /* 0C0C2870 mov.l Rm,@Rn */
	{ IF(0x0C0C2874u); ; /* slot nop */ UPD(0x0C0C2B04u, 3); goto L_0C0C2B04; }  /* 0C0C2872 bra */
L_0C0C28C0: BLKS(0x0C0C28C0u);
	r1 = 0xC22857Cu; UPD(0x0C0C28C2u, 1);  /* 0C0C28C0 mov.l @(disp,pc),Rn */
	r1 = R32(r1 + 0x4u); UPD(0x0C0C28C4u, 1);  /* 0C0C28C2 mov.l @(disp,Rm),Rn */
	r1 += 0x7u;  /* 0C0C28C4 add #imm,Rn */
	W32(r14 + 0x24u, r1); UPD(0x0C0C28C8u, 2);  /* 0C0C28C6 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x24u); UPD(0x0C0C28CAu, 1);  /* 0C0C28C8 mov.l @(disp,Rm),Rn */
	IF(0x0C0C28CAu); T = (s32)r1 >= 0;  /* 0C0C28CA cmp/pz Rn */
	if (T) { UPD(0x0C0C28D4u, 4); goto L_0C0C28D4; }  /* 0C0C28CC bt */
L_0C0C28CE: BLKS(0x0C0C28CEu);
	r2 = R32(r14 + 0x24u); UPD(0x0C0C28D0u, 1);  /* 0C0C28CE mov.l @(disp,Rm),Rn */
	r2 += 0x7u;  /* 0C0C28D0 add #imm,Rn */
	W32(r14 + 0x24u, r2); UPD(0x0C0C28D4u, 2);  /* 0C0C28D2 mov.l Rm,@(disp,Rn) */
L_0C0C28D4: BLKS(0x0C0C28D4u);
	r1 = R32(r14 + 0x24u); UPD(0x0C0C28D6u, 1);  /* 0C0C28D4 mov.l @(disp,Rm),Rn */
	IF(0x0C0C28D6u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0C28D6 shar Rn */
	IF(0x0C0C28D8u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0C28D8 shar Rn */
	IF(0x0C0C28DAu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0C28DA shar Rn */
	r4 = r1;  /* 0C0C28DC mov Rm,Rn */
	r5 = 0x1u;  /* 0C0C28DE mov #imm,Rn */
	r1 = 0xC0565FCu; UPD(0x0C0C28E2u, 6);  /* 0C0C28E0 mov.l @(disp,pc),Rn */
	IF(0x0C0C28E2u); { u32 t_ = r1; PR = 0x0C0C28E6u; IF(0x0C0C28E4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0565FC, 0x0C0565FCu, 0x0C0C28E6u); }  /* 0C0C28E2 jsr @Rn */
L_0C0C28E6: BLKS(0x0C0C28E6u);
	r1 = 0xC2074DCu; UPD(0x0C0C28E8u, 1);  /* 0C0C28E6 mov.l @(disp,pc),Rn */
	W32(r1, r0); UPD(0x0C0C28EAu, 1);  /* 0C0C28E8 mov.l Rm,@Rn */
	r1 = 0xC2074DCu; UPD(0x0C0C28ECu, 1);  /* 0C0C28EA mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0C28EEu, 1);  /* 0C0C28EC mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0C28EE tst Rm,Rn */
	if (!T) { UPD(0x0C0C2900u, 4); goto L_0C0C2900; }  /* 0C0C28F0 bf */
L_0C0C28F2: BLKS(0x0C0C28F2u);
	r1 = 0x0u;  /* 0C0C28F2 mov #imm,Rn */
	W32(r14, r1); UPD(0x0C0C28F6u, 2);  /* 0C0C28F4 mov.l Rm,@Rn */
	{ IF(0x0C0C28F8u); ; /* slot nop */ UPD(0x0C0C2B04u, 3); goto L_0C0C2B04; }  /* 0C0C28F6 bra */
L_0C0C2900: BLKS(0x0C0C2900u);
	r1 = 0xC0C3320u; UPD(0x0C0C2902u, 1);  /* 0C0C2900 mov.l @(disp,pc),Rn */
	IF(0x0C0C2902u); { u32 t_ = r1; PR = 0x0C0C2906u; IF(0x0C0C2904u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C3320, 0x0C0C3320u, 0x0C0C2906u); }  /* 0C0C2902 jsr @Rn */
L_0C0C2906: BLKS(0x0C0C2906u);
	r1 = 0xC20757Cu; UPD(0x0C0C2908u, 1);  /* 0C0C2906 mov.l @(disp,pc),Rn */
	r4 = r1;  /* 0C0C2908 mov Rm,Rn */
	r5 = 0x0u;  /* 0C0C290A mov #imm,Rn */
	r1 = 0xC0C35F0u; UPD(0x0C0C290Eu, 3);  /* 0C0C290C mov.l @(disp,pc),Rn */
	IF(0x0C0C290Eu); { u32 t_ = r1; PR = 0x0C0C2912u; IF(0x0C0C2910u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C35F0, 0x0C0C35F0u, 0x0C0C2912u); }  /* 0C0C290E jsr @Rn */
L_0C0C2912: BLKS(0x0C0C2912u);
	T = (r0 & r0) == 0;  /* 0C0C2912 tst Rm,Rn */
	if (!T) { UPD(0x0C0C2920u, 4); goto L_0C0C2920; }  /* 0C0C2914 bf */
L_0C0C2916: BLKS(0x0C0C2916u);
	r1 = 0x0u;  /* 0C0C2916 mov #imm,Rn */
	W32(r14, r1); UPD(0x0C0C291Au, 2);  /* 0C0C2918 mov.l Rm,@Rn */
	{ IF(0x0C0C291Cu); ; /* slot nop */ UPD(0x0C0C2B04u, 3); goto L_0C0C2B04; }  /* 0C0C291A bra */
L_0C0C2920: BLKS(0x0C0C2920u);
	r1 = 0xC22857Cu; UPD(0x0C0C2922u, 1);  /* 0C0C2920 mov.l @(disp,pc),Rn */
	r1 = R32(r1 + 0x10u); UPD(0x0C0C2924u, 1);  /* 0C0C2922 mov.l @(disp,Rm),Rn */
	r2 = 0x3u;  /* 0C0C2924 mov #imm,Rn */
	IF(0x0C0C2926u); ARG0(0x412Du); { s32 s_ = (s32)r2; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0C2926 shld Rm,Rn */
	r1 += 0xFFFFFFC7u;  /* 0C0C2928 add #imm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0C292Cu, 4);  /* 0C0C292A mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x8u); UPD(0x0C0C292Eu, 1);  /* 0C0C292C mov.l @(disp,Rm),Rn */
	W32(r14 + 0x28u, r1); UPD(0x0C0C2930u, 1);  /* 0C0C292E mov.l Rm,@(disp,Rn) */
	r2 = 0xC22857Cu; UPD(0x0C0C2932u, 1);  /* 0C0C2930 mov.l @(disp,pc),Rn */
	r1 = R32(r2 + 0x4u); UPD(0x0C0C2934u, 1);  /* 0C0C2932 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x28u); UPD(0x0C0C2936u, 1);  /* 0C0C2934 mov.l @(disp,Rm),Rn */
	T = (s32)r2 > (s32)r1;  /* 0C0C2936 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0C2940u, 4); goto L_0C0C2940; }  /* 0C0C2938 bf */
L_0C0C293A: BLKS(0x0C0C293Au);
	r1 = 0xC22857Cu; UPD(0x0C0C293Cu, 1);  /* 0C0C293A mov.l @(disp,pc),Rn */
	r1 = R32(r1 + 0x4u); UPD(0x0C0C293Eu, 1);  /* 0C0C293C mov.l @(disp,Rm),Rn */
	W32(r14 + 0x28u, r1); UPD(0x0C0C2940u, 1);  /* 0C0C293E mov.l Rm,@(disp,Rn) */
L_0C0C2940: BLKS(0x0C0C2940u);
	r2 = R32(r14 + 0x28u); UPD(0x0C0C2942u, 1);  /* 0C0C2940 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x8u, r2); UPD(0x0C0C2944u, 1);  /* 0C0C2942 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x8u); UPD(0x0C0C2946u, 1);  /* 0C0C2944 mov.l @(disp,Rm),Rn */
	r1 += 0x7u;  /* 0C0C2946 add #imm,Rn */
	W32(r14 + 0x2Cu, r1); UPD(0x0C0C294Au, 2);  /* 0C0C2948 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x2Cu); UPD(0x0C0C294Cu, 1);  /* 0C0C294A mov.l @(disp,Rm),Rn */
	IF(0x0C0C294Cu); T = (s32)r1 >= 0;  /* 0C0C294C cmp/pz Rn */
	if (T) { UPD(0x0C0C2956u, 4); goto L_0C0C2956; }  /* 0C0C294E bt */
L_0C0C2950: BLKS(0x0C0C2950u);
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0C2952u, 1);  /* 0C0C2950 mov.l @(disp,Rm),Rn */
	r2 += 0x7u;  /* 0C0C2952 add #imm,Rn */
	W32(r14 + 0x2Cu, r2); UPD(0x0C0C2956u, 2);  /* 0C0C2954 mov.l Rm,@(disp,Rn) */
L_0C0C2956: BLKS(0x0C0C2956u);
	r1 = R32(r14 + 0x2Cu); UPD(0x0C0C2958u, 1);  /* 0C0C2956 mov.l @(disp,Rm),Rn */
	IF(0x0C0C2958u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0C2958 shar Rn */
	IF(0x0C0C295Au); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0C295A shar Rn */
	IF(0x0C0C295Cu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0C295C shar Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0C2960u, 4);  /* 0C0C295E mov.l Rm,@(disp,Rn) */
	r1 = 0xC2074DCu; UPD(0x0C0C2962u, 1);  /* 0C0C2960 mov.l @(disp,pc),Rn */
	r2 = 0xC207584u; UPD(0x0C0C2964u, 1);  /* 0C0C2962 mov.l @(disp,pc),Rn */
	r3 = R32(r14 + 0x8u); UPD(0x0C0C2966u, 1);  /* 0C0C2964 mov.l @(disp,Rm),Rn */
	r4 = R32(r1); UPD(0x0C0C2968u, 1);  /* 0C0C2966 mov.l @Rm,Rn */
	r5 = r2;  /* 0C0C2968 mov Rm,Rn */
	r6 = r3;  /* 0C0C296A mov Rm,Rn */
	r1 = 0xC056884u; UPD(0x0C0C296Eu, 3);  /* 0C0C296C mov.l @(disp,pc),Rn */
	IF(0x0C0C296Eu); { u32 t_ = r1; PR = 0x0C0C2972u; IF(0x0C0C2970u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C056884, 0x0C056884u, 0x0C0C2972u); }  /* 0C0C296E jsr @Rn */
L_0C0C2972: BLKS(0x0C0C2972u);
	r1 = 0xC20757Cu; UPD(0x0C0C2974u, 1);  /* 0C0C2972 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0C2976u, 1);  /* 0C0C2974 mov.l @Rm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0C2978u, 1);  /* 0C0C2976 mov.l Rm,@(disp,Rn) */
	r2 = 0xC2074E0u; UPD(0x0C0C297Au, 1);  /* 0C0C2978 mov.l @(disp,pc),Rn */
	r1 = 0xC207580u; UPD(0x0C0C297Cu, 1);  /* 0C0C297A mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0C297Eu, 1);  /* 0C0C297C mov.l @Rm,Rn */
	W32(r2, r1); UPD(0x0C0C2980u, 1);  /* 0C0C297E mov.l Rm,@Rn */
	r1 = 0xC2074E0u; UPD(0x0C0C2982u, 1);  /* 0C0C2980 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0C2984u, 1);  /* 0C0C2982 mov.l @Rm,Rn */
	r2 = 0x4u;  /* 0C0C2984 mov #imm,Rn */
	IF(0x0C0C2986u); ARG0(0x412Du); { s32 s_ = (s32)r2; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0C2986 shld Rm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0C298Au, 3);  /* 0C0C2988 mov.l Rm,@(disp,Rn) */
	r8 = 0xC2074E4u; UPD(0x0C0C298Cu, 1);  /* 0C0C298A mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C0C298Eu, 1);  /* 0C0C298C mov.l @(disp,Rm),Rn */
	r4 = r1;  /* 0C0C298E mov Rm,Rn */
	r5 = 0x1u;  /* 0C0C2990 mov #imm,Rn */
	r1 = 0xC0565FCu; UPD(0x0C0C2994u, 3);  /* 0C0C2992 mov.l @(disp,pc),Rn */
	IF(0x0C0C2994u); { u32 t_ = r1; PR = 0x0C0C2998u; IF(0x0C0C2996u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0565FC, 0x0C0565FCu, 0x0C0C2998u); }  /* 0C0C2994 jsr @Rn */
L_0C0C2998: BLKS(0x0C0C2998u);
	W32(r8, r0); UPD(0x0C0C299Au, 1);  /* 0C0C2998 mov.l Rm,@Rn */
	r1 = 0xC2074E4u; UPD(0x0C0C299Cu, 1);  /* 0C0C299A mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0C299Eu, 1);  /* 0C0C299C mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0C299E tst Rm,Rn */
	if (!T) { UPD(0x0C0C29B0u, 4); goto L_0C0C29B0; }  /* 0C0C29A0 bf */
L_0C0C29A2: BLKS(0x0C0C29A2u);
	r1 = 0x0u;  /* 0C0C29A2 mov #imm,Rn */
	W32(r14, r1); UPD(0x0C0C29A6u, 2);  /* 0C0C29A4 mov.l Rm,@Rn */
	{ IF(0x0C0C29A8u); ; /* slot nop */ UPD(0x0C0C2B04u, 3); goto L_0C0C2B04; }  /* 0C0C29A6 bra */
L_0C0C29B0: BLKS(0x0C0C29B0u);
	r1 = 0xC2074E4u; UPD(0x0C0C29B2u, 1);  /* 0C0C29B0 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0C29B4u, 1);  /* 0C0C29B2 mov.l @Rm,Rn */
	W32(r14 + 0x18u, r1); UPD(0x0C0C29B6u, 1);  /* 0C0C29B4 mov.l Rm,@(disp,Rn) */
	r1 = 0xC22857Cu; UPD(0x0C0C29B8u, 1);  /* 0C0C29B6 mov.l @(disp,pc),Rn */
	r2 = R32(r1 + 0xCu); UPD(0x0C0C29BAu, 1);  /* 0C0C29B8 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0C29BCu, 1);  /* 0C0C29BA mov.l @(disp,Rm),Rn */
	r2 -= r1;  /* 0C0C29BC sub Rm,Rn */
	r1 = r2;  /* 0C0C29BE mov Rm,Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0C29C2u, 3);  /* 0C0C29C0 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x14u); UPD(0x0C0C29C4u, 1);  /* 0C0C29C2 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0C29C4 tst Rm,Rn */
	if (!T) { UPD(0x0C0C29D0u, 4); goto L_0C0C29D0; }  /* 0C0C29C6 bf */
L_0C0C29C8: BLKS(0x0C0C29C8u);
	{ IF(0x0C0C29CAu); ; /* slot nop */ UPD(0x0C0C29C8u, 3); goto L_0C0C29C8; }  /* 0C0C29C8 bra */
L_0C0C29D0: BLKS(0x0C0C29D0u);
	r1 = 0xC22857Cu; UPD(0x0C0C29D2u, 1);  /* 0C0C29D0 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x14u); UPD(0x0C0C29D4u, 1);  /* 0C0C29D2 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x8u); UPD(0x0C0C29D6u, 1);  /* 0C0C29D4 mov.l @(disp,Rm),Rn */
	IF(0x0C0C29D6u); MACL = r2 * r1;  /* 0C0C29D6 mul.l Rm,Rn */
	IF(0x0C0C29D8u); r1 = MACL;  /* 0C0C29D8 sts macl,Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0C29DCu, 4);  /* 0C0C29DA mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x14u); UPD(0x0C0C29DEu, 1);  /* 0C0C29DC mov.l @(disp,Rm),Rn */
	W32(r14 + 0x30u, r1); UPD(0x0C0C29E0u, 1);  /* 0C0C29DE mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x10u); UPD(0x0C0C29E2u, 1);  /* 0C0C29E0 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x30u); UPD(0x0C0C29E4u, 1);  /* 0C0C29E2 mov.l @(disp,Rm),Rn */
	T = (s32)r2 > (s32)r1;  /* 0C0C29E4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0C29ECu, 4); goto L_0C0C29EC; }  /* 0C0C29E6 bf */
L_0C0C29E8: BLKS(0x0C0C29E8u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0C29EAu, 1);  /* 0C0C29E8 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x30u, r1); UPD(0x0C0C29ECu, 1);  /* 0C0C29EA mov.l Rm,@(disp,Rn) */
L_0C0C29EC: BLKS(0x0C0C29ECu);
	r2 = R32(r14 + 0x30u); UPD(0x0C0C29EEu, 1);  /* 0C0C29EC mov.l @(disp,Rm),Rn */
	W32(r14 + 0x14u, r2); UPD(0x0C0C29F0u, 1);  /* 0C0C29EE mov.l Rm,@(disp,Rn) */
	r3 = R32(r14 + 0x18u); UPD(0x0C0C29F2u, 1);  /* 0C0C29F0 mov.l @(disp,Rm),Rn */
	r1 = 0xC22857Cu; UPD(0x0C0C29F4u, 1);  /* 0C0C29F2 mov.l @(disp,pc),Rn */
	r2 = R32(r1 + 0x8u); UPD(0x0C0C29F6u, 1);  /* 0C0C29F4 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0C29F8u, 1);  /* 0C0C29F6 mov.l @(disp,Rm),Rn */
	IF(0x0C0C29F8u); MACL = r2 * r1;  /* 0C0C29F8 mul.l Rm,Rn */
	IF(0x0C0C29FAu); r2 = MACL;  /* 0C0C29FA sts macl,Rn */
	r1 = 0xC20757Cu; UPD(0x0C0C29FEu, 4);  /* 0C0C29FC mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C0C29FE add Rm,Rn */
	r2 = R32(r14 + 0x14u); UPD(0x0C0C2A02u, 2);  /* 0C0C2A00 mov.l @(disp,Rm),Rn */
	r4 = r3;  /* 0C0C2A02 mov Rm,Rn */
	r5 = r1;  /* 0C0C2A04 mov Rm,Rn */
	r6 = r2;  /* 0C0C2A06 mov Rm,Rn */
	r1 = 0xC056884u; UPD(0x0C0C2A0Au, 4);  /* 0C0C2A08 mov.l @(disp,pc),Rn */
	IF(0x0C0C2A0Au); { u32 t_ = r1; PR = 0x0C0C2A0Eu; IF(0x0C0C2A0Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C056884, 0x0C056884u, 0x0C0C2A0Eu); }  /* 0C0C2A0A jsr @Rn */
L_0C0C2A0E: BLKS(0x0C0C2A0Eu);
	r2 = R32(r14 + 0x10u); UPD(0x0C0C2A10u, 1);  /* 0C0C2A0E mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x14u); UPD(0x0C0C2A12u, 1);  /* 0C0C2A10 mov.l @(disp,Rm),Rn */
	r2 -= r1;  /* 0C0C2A12 sub Rm,Rn */
	r1 = r2;  /* 0C0C2A14 mov Rm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0C2A18u, 3);  /* 0C0C2A16 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x14u); UPD(0x0C0C2A1Au, 1);  /* 0C0C2A18 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x20u, r1); UPD(0x0C0C2A1Cu, 1);  /* 0C0C2A1A mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C0C2A1C mov #imm,Rn */
	W32(r14 + 0x1Cu, r1); UPD(0x0C0C2A20u, 2);  /* 0C0C2A1E mov.l Rm,@(disp,Rn) */
L_0C0C2A20: BLKS(0x0C0C2A20u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0C2A22u, 1);  /* 0C0C2A20 mov.l @(disp,Rm),Rn */
	IF(0x0C0C2A22u); T = (s32)r1 > 0;  /* 0C0C2A22 cmp/pl Rn */
	if (T) { UPD(0x0C0C2A30u, 4); goto L_0C0C2A30; }  /* 0C0C2A24 bt */
L_0C0C2A26: BLKS(0x0C0C2A26u);
	{ IF(0x0C0C2A28u); ; /* slot nop */ UPD(0x0C0C2AC0u, 3); goto L_0C0C2AC0; }  /* 0C0C2A26 bra */
L_0C0C2A30: BLKS(0x0C0C2A30u);
	r1 = r14;  /* 0C0C2A30 mov Rm,Rn */
	r1 += 0x1Cu;  /* 0C0C2A32 add #imm,Rn */
	r4 = r1;  /* 0C0C2A34 mov Rm,Rn */
	r1 = 0xC0C39A0u; UPD(0x0C0C2A38u, 4);  /* 0C0C2A36 mov.l @(disp,pc),Rn */
	IF(0x0C0C2A38u); { u32 t_ = r1; PR = 0x0C0C2A3Cu; IF(0x0C0C2A3Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C39A0, 0x0C0C39A0u, 0x0C0C2A3Cu); }  /* 0C0C2A38 jsr @Rn */
L_0C0C2A3C: BLKS(0x0C0C2A3Cu);
	T = (r0 & r0) == 0;  /* 0C0C2A3C tst Rm,Rn */
	if (!T) { UPD(0x0C0C2A50u, 4); goto L_0C0C2A50; }  /* 0C0C2A3E bf */
L_0C0C2A40: BLKS(0x0C0C2A40u);
	{ IF(0x0C0C2A42u); ; /* slot nop */ UPD(0x0C0C2AC0u, 3); goto L_0C0C2AC0; }  /* 0C0C2A40 bra */
L_0C0C2A50: BLKS(0x0C0C2A50u);
	r1 = 0xC0C3320u; UPD(0x0C0C2A52u, 1);  /* 0C0C2A50 mov.l @(disp,pc),Rn */
	IF(0x0C0C2A52u); { u32 t_ = r1; PR = 0x0C0C2A56u; IF(0x0C0C2A54u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C3320, 0x0C0C3320u, 0x0C0C2A56u); }  /* 0C0C2A52 jsr @Rn */
L_0C0C2A56: BLKS(0x0C0C2A56u);
	r1 = 0xC20757Cu; UPD(0x0C0C2A58u, 1);  /* 0C0C2A56 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x1Cu); UPD(0x0C0C2A5Au, 1);  /* 0C0C2A58 mov.l @(disp,Rm),Rn */
	r4 = r1;  /* 0C0C2A5A mov Rm,Rn */
	r5 = r2;  /* 0C0C2A5C mov Rm,Rn */
	r1 = 0xC0C35F0u; UPD(0x0C0C2A60u, 3);  /* 0C0C2A5E mov.l @(disp,pc),Rn */
	IF(0x0C0C2A60u); { u32 t_ = r1; PR = 0x0C0C2A64u; IF(0x0C0C2A62u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C35F0, 0x0C0C35F0u, 0x0C0C2A64u); }  /* 0C0C2A60 jsr @Rn */
L_0C0C2A64: BLKS(0x0C0C2A64u);
	T = (r0 & r0) == 0;  /* 0C0C2A64 tst Rm,Rn */
	if (!T) { UPD(0x0C0C2A70u, 4); goto L_0C0C2A70; }  /* 0C0C2A66 bf */
L_0C0C2A68: BLKS(0x0C0C2A68u);
	{ IF(0x0C0C2A6Au); ; /* slot nop */ UPD(0x0C0C2AC0u, 3); goto L_0C0C2AC0; }  /* 0C0C2A68 bra */
L_0C0C2A70: BLKS(0x0C0C2A70u);
	r1 = 0xC22857Cu; UPD(0x0C0C2A72u, 1);  /* 0C0C2A70 mov.l @(disp,pc),Rn */
	r1 = R32(r1 + 0x10u); UPD(0x0C0C2A74u, 1);  /* 0C0C2A72 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0C2A76u, 1);  /* 0C0C2A74 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x14u); UPD(0x0C0C2A78u, 1);  /* 0C0C2A76 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x34u, r1); UPD(0x0C0C2A7Au, 1);  /* 0C0C2A78 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x10u); UPD(0x0C0C2A7Cu, 1);  /* 0C0C2A7A mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x34u); UPD(0x0C0C2A7Eu, 1);  /* 0C0C2A7C mov.l @(disp,Rm),Rn */
	T = (s32)r2 > (s32)r1;  /* 0C0C2A7E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0C2A86u, 4); goto L_0C0C2A86; }  /* 0C0C2A80 bf */
L_0C0C2A82: BLKS(0x0C0C2A82u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0C2A84u, 1);  /* 0C0C2A82 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x34u, r1); UPD(0x0C0C2A86u, 1);  /* 0C0C2A84 mov.l Rm,@(disp,Rn) */
L_0C0C2A86: BLKS(0x0C0C2A86u);
	r2 = R32(r14 + 0x34u); UPD(0x0C0C2A88u, 1);  /* 0C0C2A86 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x14u, r2); UPD(0x0C0C2A8Au, 1);  /* 0C0C2A88 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x18u); UPD(0x0C0C2A8Cu, 1);  /* 0C0C2A8A mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x20u); UPD(0x0C0C2A8Eu, 1);  /* 0C0C2A8C mov.l @(disp,Rm),Rn */
	r1 += r2;  /* 0C0C2A8E add Rm,Rn */
	r2 = 0xC20757Cu; UPD(0x0C0C2A92u, 2);  /* 0C0C2A90 mov.l @(disp,pc),Rn */
	r3 = R32(r14 + 0x14u); UPD(0x0C0C2A94u, 1);  /* 0C0C2A92 mov.l @(disp,Rm),Rn */
	r4 = r1;  /* 0C0C2A94 mov Rm,Rn */
	r5 = r2;  /* 0C0C2A96 mov Rm,Rn */
	r6 = r3;  /* 0C0C2A98 mov Rm,Rn */
	r1 = 0xC056884u; UPD(0x0C0C2A9Cu, 4);  /* 0C0C2A9A mov.l @(disp,pc),Rn */
	IF(0x0C0C2A9Cu); { u32 t_ = r1; PR = 0x0C0C2AA0u; IF(0x0C0C2A9Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C056884, 0x0C056884u, 0x0C0C2AA0u); }  /* 0C0C2A9C jsr @Rn */
L_0C0C2AA0: BLKS(0x0C0C2AA0u);
	r2 = R32(r14 + 0x10u); UPD(0x0C0C2AA2u, 1);  /* 0C0C2AA0 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x14u); UPD(0x0C0C2AA4u, 1);  /* 0C0C2AA2 mov.l @(disp,Rm),Rn */
	r2 -= r1;  /* 0C0C2AA4 sub Rm,Rn */
	r1 = r2;  /* 0C0C2AA6 mov Rm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0C2AAAu, 3);  /* 0C0C2AA8 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x20u); UPD(0x0C0C2AACu, 1);  /* 0C0C2AAA mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x14u); UPD(0x0C0C2AAEu, 1);  /* 0C0C2AAC mov.l @(disp,Rm),Rn */
	r1 += r2;  /* 0C0C2AAE add Rm,Rn */
	W32(r14 + 0x20u, r1); UPD(0x0C0C2AB2u, 2);  /* 0C0C2AB0 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0C2AB4u); ; /* slot nop */ UPD(0x0C0C2A20u, 3); goto L_0C0C2A20; }  /* 0C0C2AB2 bra */
L_0C0C2AC0: BLKS(0x0C0C2AC0u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0C2AC2u, 1);  /* 0C0C2AC0 mov.l @(disp,Rm),Rn */
	IF(0x0C0C2AC2u); T = (s32)r1 > 0;  /* 0C0C2AC2 cmp/pl Rn */
	if (!T) { UPD(0x0C0C2B00u, 4); goto L_0C0C2B00; }  /* 0C0C2AC4 bf */
L_0C0C2AC6: BLKS(0x0C0C2AC6u);
	r1 = 0x0u;  /* 0C0C2AC6 mov #imm,Rn */
	W32(r14, r1); UPD(0x0C0C2ACAu, 2);  /* 0C0C2AC8 mov.l Rm,@Rn */
	{ IF(0x0C0C2ACCu); ; /* slot nop */ UPD(0x0C0C2B04u, 3); goto L_0C0C2B04; }  /* 0C0C2ACA bra */
L_0C0C2B00: BLKS(0x0C0C2B00u);
	r1 = 0x1u;  /* 0C0C2B00 mov #imm,Rn */
	W32(r14, r1); UPD(0x0C0C2B04u, 2);  /* 0C0C2B02 mov.l Rm,@Rn */
L_0C0C2B04: BLKS(0x0C0C2B04u);
	r1 = R32(r14); UPD(0x0C0C2B06u, 1);  /* 0C0C2B04 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0C2B06 tst Rm,Rn */
	if (!T) { UPD(0x0C0C2B3Au, 4); goto L_0C0C2B3A; }  /* 0C0C2B08 bf */
L_0C0C2B0A: BLKS(0x0C0C2B0Au);
	r1 = 0xC2074DCu; UPD(0x0C0C2B0Cu, 1);  /* 0C0C2B0A mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0C2B0Eu, 1);  /* 0C0C2B0C mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0C2B0E tst Rm,Rn */
	if (T) { UPD(0x0C0C2B22u, 4); goto L_0C0C2B22; }  /* 0C0C2B10 bt */
L_0C0C2B12: BLKS(0x0C0C2B12u);
	r1 = 0xC2074DCu; UPD(0x0C0C2B14u, 1);  /* 0C0C2B12 mov.l @(disp,pc),Rn */
	r4 = R32(r1); UPD(0x0C0C2B16u, 1);  /* 0C0C2B14 mov.l @Rm,Rn */
	r1 = 0xC05667Cu; UPD(0x0C0C2B18u, 1);  /* 0C0C2B16 mov.l @(disp,pc),Rn */
	IF(0x0C0C2B18u); { u32 t_ = r1; PR = 0x0C0C2B1Cu; IF(0x0C0C2B1Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05667C, 0x0C05667Cu, 0x0C0C2B1Cu); }  /* 0C0C2B18 jsr @Rn */
L_0C0C2B1C: BLKS(0x0C0C2B1Cu);
	r2 = 0xC2074DCu; UPD(0x0C0C2B1Eu, 1);  /* 0C0C2B1C mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C2B1E mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0C2B22u, 2);  /* 0C0C2B20 mov.l Rm,@Rn */
L_0C0C2B22: BLKS(0x0C0C2B22u);
	r1 = 0xC2074E4u; UPD(0x0C0C2B24u, 1);  /* 0C0C2B22 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0C2B26u, 1);  /* 0C0C2B24 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0C2B26 tst Rm,Rn */
	if (T) { UPD(0x0C0C2B3Au, 4); goto L_0C0C2B3A; }  /* 0C0C2B28 bt */
L_0C0C2B2A: BLKS(0x0C0C2B2Au);
	r1 = 0xC2074E4u; UPD(0x0C0C2B2Cu, 1);  /* 0C0C2B2A mov.l @(disp,pc),Rn */
	r4 = R32(r1); UPD(0x0C0C2B2Eu, 1);  /* 0C0C2B2C mov.l @Rm,Rn */
	r1 = 0xC05667Cu; UPD(0x0C0C2B30u, 1);  /* 0C0C2B2E mov.l @(disp,pc),Rn */
	IF(0x0C0C2B30u); { u32 t_ = r1; PR = 0x0C0C2B34u; IF(0x0C0C2B32u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05667C, 0x0C05667Cu, 0x0C0C2B34u); }  /* 0C0C2B30 jsr @Rn */
L_0C0C2B34: BLKS(0x0C0C2B34u);
	r2 = 0xC2074E4u; UPD(0x0C0C2B36u, 1);  /* 0C0C2B34 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C2B36 mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0C2B3Au, 2);  /* 0C0C2B38 mov.l Rm,@Rn */
L_0C0C2B3A: BLKS(0x0C0C2B3Au);
	r1 = R32(r14); UPD(0x0C0C2B3Cu, 1);  /* 0C0C2B3A mov.l @Rm,Rn */
	r0 = r1;  /* 0C0C2B3C mov Rm,Rn */
	r14 += 0x38u;  /* 0C0C2B3E add #imm,Rn */
	r15 = r14;  /* 0C0C2B40 mov Rm,Rn */
	IF(0x0C0C2B42u); PR = R32(r15); r15 += 4; UPD(0x0C0C2B44u, 4);  /* 0C0C2B42 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C2B46u, 1);  /* 0C0C2B44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C0C2B48u, 1);  /* 0C0C2B46 mov.l @Rm+,Rn */
	IF(0x0C0C2B48u); { u32 t_ = PR; IF(0x0C0C2B4Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C2B48 rts */
}

/* FUN_0c0c2b60 */
void blk_f_0C0C2B60(sh3_t *c)
{
	LOCALS;
L_0C0C2B60: BLKS(0x0C0C2B60u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2B62u, 1);  /* 0C0C2B60 mov.l Rm,@-Rn */
	IF(0x0C0C2B62u); r15 -= 4; W32(r15, PR); UPD(0x0C0C2B64u, 1);  /* 0C0C2B62 sts.l pr,@-Rn */
	r15 += 0xFFFFFFC4u;  /* 0C0C2B64 add #imm,Rn */
	r14 = r15;  /* 0C0C2B66 mov Rm,Rn */
	r1 = 0xC0C32E0u; UPD(0x0C0C2B6Au, 3);  /* 0C0C2B68 mov.l @(disp,pc),Rn */
	IF(0x0C0C2B6Au); { u32 t_ = r1; PR = 0x0C0C2B6Eu; IF(0x0C0C2B6Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C32E0, 0x0C0C32E0u, 0x0C0C2B6Eu); }  /* 0C0C2B6A jsr @Rn */
L_0C0C2B6E: BLKS(0x0C0C2B6Eu);
	W32(r14, r0); UPD(0x0C0C2B70u, 1);  /* 0C0C2B6E mov.l Rm,@Rn */
	r1 = 0xC2287D0u; UPD(0x0C0C2B72u, 1);  /* 0C0C2B70 mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C0C2B74u, 1);  /* 0C0C2B72 mov.l @Rm,Rn */
	r1 = 0x24u;  /* 0C0C2B74 mov #imm,Rn */
	IF(0x0C0C2B76u); MACL = r2 * r1;  /* 0C0C2B76 mul.l Rm,Rn */
	IF(0x0C0C2B78u); r2 = MACL;  /* 0C0C2B78 sts macl,Rn */
	r1 = 0xC228590u; UPD(0x0C0C2B7Cu, 5);  /* 0C0C2B7A mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C0C2B7C add Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0C2B80u, 2);  /* 0C0C2B7E mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C0C2B80 mov #imm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0C2B84u, 2);  /* 0C0C2B82 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C2B86u, 1);  /* 0C0C2B84 mov.l @(disp,Rm),Rn */
	r1 = R32(r1); UPD(0x0C0C2B88u, 1);  /* 0C0C2B86 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0C2B88 tst Rm,Rn */
	if (!T) { UPD(0x0C0C2BD0u, 4); goto L_0C0C2BD0; }  /* 0C0C2B8A bf */
L_0C0C2B8C: BLKS(0x0C0C2B8Cu);
	r1 = 0xC2287D0u; UPD(0x0C0C2B8Eu, 1);  /* 0C0C2B8C mov.l @(disp,pc),Rn */
	r2 = 0xC2287D4u; UPD(0x0C0C2B90u, 1);  /* 0C0C2B8E mov.l @(disp,pc),Rn */
	r3 = R32(r1); UPD(0x0C0C2B92u, 1);  /* 0C0C2B90 mov.l @Rm,Rn */
	r1 = R32(r2); UPD(0x0C0C2B94u, 1);  /* 0C0C2B92 mov.l @Rm,Rn */
	T = r3 == r1;  /* 0C0C2B94 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0C2BC6u, 4); goto L_0C0C2BC6; }  /* 0C0C2B96 bt */
L_0C0C2B98: BLKS(0x0C0C2B98u);
	r1 = 0xC2287D0u; UPD(0x0C0C2B9Au, 1);  /* 0C0C2B98 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0C2B9Cu, 1);  /* 0C0C2B9A mov.l @Rm,Rn */
	r1 += 0x1u;  /* 0C0C2B9C add #imm,Rn */
	W32(r14 + 0x24u, r1); UPD(0x0C0C2BA0u, 2);  /* 0C0C2B9E mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x24u); UPD(0x0C0C2BA2u, 1);  /* 0C0C2BA0 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x28u, r1); UPD(0x0C0C2BA4u, 1);  /* 0C0C2BA2 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x28u); UPD(0x0C0C2BA6u, 1);  /* 0C0C2BA4 mov.l @(disp,Rm),Rn */
	IF(0x0C0C2BA6u); T = (s32)r2 >= 0;  /* 0C0C2BA6 cmp/pz Rn */
	if (T) { UPD(0x0C0C2BB0u, 4); goto L_0C0C2BB0; }  /* 0C0C2BA8 bt */
L_0C0C2BAA: BLKS(0x0C0C2BAAu);
	r1 = R32(r14 + 0x28u); UPD(0x0C0C2BACu, 1);  /* 0C0C2BAA mov.l @(disp,Rm),Rn */
	r1 += 0xFu;  /* 0C0C2BAC add #imm,Rn */
	W32(r14 + 0x28u, r1); UPD(0x0C0C2BB0u, 2);  /* 0C0C2BAE mov.l Rm,@(disp,Rn) */
L_0C0C2BB0: BLKS(0x0C0C2BB0u);
	r1 = 0xFFFFFFFCu;  /* 0C0C2BB0 mov #imm,Rn */
	r2 = R32(r14 + 0x28u); UPD(0x0C0C2BB4u, 2);  /* 0C0C2BB2 mov.l @(disp,Rm),Rn */
	IF(0x0C0C2BB4u); ARG0(0x421Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0C2BB4 shad Rm,Rn */
	r1 = r2;  /* 0C0C2BB6 mov Rm,Rn */
	r2 = 0x4u;  /* 0C0C2BB8 mov #imm,Rn */
	IF(0x0C0C2BBAu); ARG0(0x412Du); { s32 s_ = (s32)r2; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0C2BBA shld Rm,Rn */
	r2 = R32(r14 + 0x24u); UPD(0x0C0C2BBEu, 5);  /* 0C0C2BBC mov.l @(disp,Rm),Rn */
	r2 -= r1;  /* 0C0C2BBE sub Rm,Rn */
	r1 = r2;  /* 0C0C2BC0 mov Rm,Rn */
	r2 = 0xC2287D0u; UPD(0x0C0C2BC4u, 3);  /* 0C0C2BC2 mov.l @(disp,pc),Rn */
	W32(r2, r1); UPD(0x0C0C2BC6u, 1);  /* 0C0C2BC4 mov.l Rm,@Rn */
L_0C0C2BC6: BLKS(0x0C0C2BC6u);
	r1 = 0x0u;  /* 0C0C2BC6 mov #imm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0C2BCAu, 2);  /* 0C0C2BC8 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0C2BCCu); ; /* slot nop */ UPD(0x0C0C2D94u, 3); goto L_0C0C2D94; }  /* 0C0C2BCA bra */
L_0C0C2BD0: BLKS(0x0C0C2BD0u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0C2BD2u, 1);  /* 0C0C2BD0 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x14u); UPD(0x0C0C2BD4u, 1);  /* 0C0C2BD2 mov.l @(disp,Rm),Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0C2BD6u, 1);  /* 0C0C2BD4 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C2BD8u, 1);  /* 0C0C2BD6 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x18u); UPD(0x0C0C2BDAu, 1);  /* 0C0C2BD8 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x1Cu, r1); UPD(0x0C0C2BDCu, 1);  /* 0C0C2BDA mov.l Rm,@(disp,Rn) */
L_0C0C2BDC: BLKS(0x0C0C2BDCu);
	r1 = R32(r14 + 0x1Cu); UPD(0x0C0C2BDEu, 1);  /* 0C0C2BDC mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0C2BDE tst Rm,Rn */
	if (!T) { UPD(0x0C0C2BF0u, 4); goto L_0C0C2BF0; }  /* 0C0C2BE0 bf */
L_0C0C2BE2: BLKS(0x0C0C2BE2u);
	{ IF(0x0C0C2BE4u); ; /* slot nop */ UPD(0x0C0C2D20u, 3); goto L_0C0C2D20; }  /* 0C0C2BE2 bra */
L_0C0C2BF0: BLKS(0x0C0C2BF0u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0C2BF2u, 1);  /* 0C0C2BF0 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0xCu); UPD(0x0C0C2BF4u, 1);  /* 0C0C2BF2 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0C2BF4 tst Rm,Rn */
	if (!T) { UPD(0x0C0C2C00u, 4); goto L_0C0C2C00; }  /* 0C0C2BF6 bf */
L_0C0C2BF8: BLKS(0x0C0C2BF8u);
	{ IF(0x0C0C2BFAu); ; /* slot nop */ UPD(0x0C0C2D20u, 3); goto L_0C0C2D20; }  /* 0C0C2BF8 bra */
L_0C0C2C00: BLKS(0x0C0C2C00u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0C2C02u, 1);  /* 0C0C2C00 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x8u); UPD(0x0C0C2C04u, 1);  /* 0C0C2C02 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0C2C06u, 1);  /* 0C0C2C04 mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C0C2C06 mov #imm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0C2C0Au, 2);  /* 0C0C2C08 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x14u); UPD(0x0C0C2C0Cu, 1);  /* 0C0C2C0A mov.l @(disp,Rm),Rn */
	W32(r14 + 0x18u, r1); UPD(0x0C0C2C0Eu, 1);  /* 0C0C2C0C mov.l Rm,@(disp,Rn) */
L_0C0C2C0E: BLKS(0x0C0C2C0Eu);
	r1 = R32(r14 + 0x18u); UPD(0x0C0C2C10u, 1);  /* 0C0C2C0E mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0C2C10 tst Rm,Rn */
	if (!T) { UPD(0x0C0C2C20u, 4); goto L_0C0C2C20; }  /* 0C0C2C12 bf */
L_0C0C2C14: BLKS(0x0C0C2C14u);
	{ IF(0x0C0C2C16u); ; /* slot nop */ UPD(0x0C0C2C60u, 3); goto L_0C0C2C60; }  /* 0C0C2C14 bra */
L_0C0C2C20: BLKS(0x0C0C2C20u);
	r1 = 0xC22857Cu; UPD(0x0C0C2C22u, 1);  /* 0C0C2C20 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x18u); UPD(0x0C0C2C24u, 1);  /* 0C0C2C22 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x8u); UPD(0x0C0C2C26u, 1);  /* 0C0C2C24 mov.l @(disp,Rm),Rn */
	r2 -= r1;  /* 0C0C2C26 sub Rm,Rn */
	r1 = r2;  /* 0C0C2C28 mov Rm,Rn */
	W32(r14 + 0x18u, r1); UPD(0x0C0C2C2Cu, 3);  /* 0C0C2C2A mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x18u); UPD(0x0C0C2C2Eu, 1);  /* 0C0C2C2C mov.l @(disp,Rm),Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0C2C30u, 1);  /* 0C0C2C2E mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x18u); UPD(0x0C0C2C32u, 1);  /* 0C0C2C30 mov.l @(disp,Rm),Rn */
	IF(0x0C0C2C32u); T = (s32)r1 >= 0;  /* 0C0C2C32 cmp/pz Rn */
	if (T) { UPD(0x0C0C2C50u, 4); goto L_0C0C2C50; }  /* 0C0C2C34 bt */
L_0C0C2C36: BLKS(0x0C0C2C36u);
	r1 = 0xC22857Cu; UPD(0x0C0C2C38u, 1);  /* 0C0C2C36 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x14u); UPD(0x0C0C2C3Au, 1);  /* 0C0C2C38 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x8u); UPD(0x0C0C2C3Cu, 1);  /* 0C0C2C3A mov.l @(disp,Rm),Rn */
	r1 += r2;  /* 0C0C2C3C add Rm,Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0C2C40u, 2);  /* 0C0C2C3E mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0C2C42u); ; /* slot nop */ UPD(0x0C0C2C60u, 3); goto L_0C0C2C60; }  /* 0C0C2C40 bra */
L_0C0C2C50: BLKS(0x0C0C2C50u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0C2C52u, 1);  /* 0C0C2C50 mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C0C2C52 add #imm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0C2C56u, 2);  /* 0C0C2C54 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0C2C58u); ; /* slot nop */ UPD(0x0C0C2C0Eu, 3); goto L_0C0C2C0E; }  /* 0C0C2C56 bra */
L_0C0C2C60: BLKS(0x0C0C2C60u);
	r1 = 0xC22857Cu; UPD(0x0C0C2C62u, 1);  /* 0C0C2C60 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C0C2C64u, 1);  /* 0C0C2C62 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0xCu); UPD(0x0C0C2C66u, 1);  /* 0C0C2C64 mov.l @(disp,Rm),Rn */
	T = r2 >= r1;  /* 0C0C2C66 cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C0C2C94u, 4); goto L_0C0C2C94; }  /* 0C0C2C68 bf */
L_0C0C2C6A: BLKS(0x0C0C2C6Au);
	r1 = R32(r14 + 0x4u); UPD(0x0C0C2C6Cu, 1);  /* 0C0C2C6A mov.l @(disp,Rm),Rn */
	r1 += 0x4u;  /* 0C0C2C6C add #imm,Rn */
	r4 = r1;  /* 0C0C2C6E mov Rm,Rn */
	r1 = 0xC0C39A0u; UPD(0x0C0C2C72u, 3);  /* 0C0C2C70 mov.l @(disp,pc),Rn */
	IF(0x0C0C2C72u); { u32 t_ = r1; PR = 0x0C0C2C76u; IF(0x0C0C2C74u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C39A0, 0x0C0C39A0u, 0x0C0C2C76u); }  /* 0C0C2C72 jsr @Rn */
L_0C0C2C76: BLKS(0x0C0C2C76u);
	T = (r0 & r0) == 0;  /* 0C0C2C76 tst Rm,Rn */
	if (!T) { UPD(0x0C0C2C80u, 4); goto L_0C0C2C80; }  /* 0C0C2C78 bf */
L_0C0C2C7A: BLKS(0x0C0C2C7Au);
	{ IF(0x0C0C2C7Cu); ; /* slot nop */ UPD(0x0C0C2C7Au, 3); goto L_0C0C2C7A; }  /* 0C0C2C7A bra */
L_0C0C2C80: BLKS(0x0C0C2C80u);
	r7 = R32(r14 + 0x4u); UPD(0x0C0C2C82u, 1);  /* 0C0C2C80 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C2C84u, 1);  /* 0C0C2C82 mov.l @(disp,Rm),Rn */
	r2 = 0xC22857Cu; UPD(0x0C0C2C86u, 1);  /* 0C0C2C84 mov.l @(disp,pc),Rn */
	r3 = R32(r1 + 0x8u); UPD(0x0C0C2C88u, 1);  /* 0C0C2C86 mov.l @(disp,Rm),Rn */
	r1 = R32(r2 + 0x10u); UPD(0x0C0C2C8Au, 1);  /* 0C0C2C88 mov.l @(disp,Rm),Rn */
	r3 -= r1;  /* 0C0C2C8A sub Rm,Rn */
	r1 = r3;  /* 0C0C2C8C mov Rm,Rn */
	W32(r7 + 0x8u, r1); UPD(0x0C0C2C90u, 3);  /* 0C0C2C8E mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C0C2C90 mov #imm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0C2C94u, 2);  /* 0C0C2C92 mov.l Rm,@(disp,Rn) */
L_0C0C2C94: BLKS(0x0C0C2C94u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0C2C96u, 1);  /* 0C0C2C94 mov.l @(disp,Rm),Rn */
	r2 = 0xC22857Cu; UPD(0x0C0C2C98u, 1);  /* 0C0C2C96 mov.l @(disp,pc),Rn */
	r3 = R32(r1 + 0x4u); UPD(0x0C0C2C9Au, 1);  /* 0C0C2C98 mov.l @(disp,Rm),Rn */
	r1 = R32(r2 + 0xCu); UPD(0x0C0C2C9Cu, 1);  /* 0C0C2C9A mov.l @(disp,Rm),Rn */
	IF(0x0C0C2C9Cu); MACL = r3 * r1;  /* 0C0C2C9C mul.l Rm,Rn */
	IF(0x0C0C2C9Eu); r2 = MACL;  /* 0C0C2C9E sts macl,Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C0C2CA2u, 4);  /* 0C0C2CA0 mov.l @(disp,Rm),Rn */
	r1 += r2;  /* 0C0C2CA2 add Rm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0C2CA6u, 2);  /* 0C0C2CA4 mov.l Rm,@(disp,Rn) */
	r1 = 0xC22857Cu; UPD(0x0C0C2CA8u, 1);  /* 0C0C2CA6 mov.l @(disp,pc),Rn */
	r2 = R32(r1 + 0x8u); UPD(0x0C0C2CAAu, 1);  /* 0C0C2CA8 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x14u); UPD(0x0C0C2CACu, 1);  /* 0C0C2CAA mov.l @(disp,Rm),Rn */
	r2 -= r1;  /* 0C0C2CAC sub Rm,Rn */
	r1 = r2;  /* 0C0C2CAE mov Rm,Rn */
	W32(r14 + 0x20u, r1); UPD(0x0C0C2CB2u, 3);  /* 0C0C2CB0 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C2CB4u, 1);  /* 0C0C2CB2 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x30u, r1); UPD(0x0C0C2CB6u, 1);  /* 0C0C2CB4 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x20u); UPD(0x0C0C2CB8u, 1);  /* 0C0C2CB6 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x2Cu, r2); UPD(0x0C0C2CBAu, 1);  /* 0C0C2CB8 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x30u); UPD(0x0C0C2CBCu, 1);  /* 0C0C2CBA mov.l @(disp,Rm),Rn */
	r1 = R32(r2 + 0xCu); UPD(0x0C0C2CBEu, 1);  /* 0C0C2CBC mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0C2CC0u, 1);  /* 0C0C2CBE mov.l @(disp,Rm),Rn */
	T = r2 > r1;  /* 0C0C2CC0 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0C2CCAu, 4); goto L_0C0C2CCA; }  /* 0C0C2CC2 bf */
L_0C0C2CC4: BLKS(0x0C0C2CC4u);
	r1 = R32(r14 + 0x30u); UPD(0x0C0C2CC6u, 1);  /* 0C0C2CC4 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0xCu); UPD(0x0C0C2CC8u, 1);  /* 0C0C2CC6 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x2Cu, r1); UPD(0x0C0C2CCAu, 1);  /* 0C0C2CC8 mov.l Rm,@(disp,Rn) */
L_0C0C2CCA: BLKS(0x0C0C2CCAu);
	r2 = R32(r14 + 0x2Cu); UPD(0x0C0C2CCCu, 1);  /* 0C0C2CCA mov.l @(disp,Rm),Rn */
	W32(r14 + 0x20u, r2); UPD(0x0C0C2CCEu, 1);  /* 0C0C2CCC mov.l Rm,@(disp,Rn) */
L_0C0C2CCE: BLKS(0x0C0C2CCEu);
	r1 = R32(r14 + 0xCu); UPD(0x0C0C2CD0u, 1);  /* 0C0C2CCE mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C0C2CD2u, 1);  /* 0C0C2CD0 mov.l @(disp,Rm),Rn */
	r3 = R32(r14 + 0x14u); UPD(0x0C0C2CD4u, 1);  /* 0C0C2CD2 mov.l @(disp,Rm),Rn */
	r7 = R32(r14 + 0x20u); UPD(0x0C0C2CD6u, 1);  /* 0C0C2CD4 mov.l @(disp,Rm),Rn */
	r4 = r1;  /* 0C0C2CD6 mov Rm,Rn */
	r5 = r2;  /* 0C0C2CD8 mov Rm,Rn */
	r6 = r3;  /* 0C0C2CDA mov Rm,Rn */
	r1 = 0xC0C3420u; UPD(0x0C0C2CDEu, 4);  /* 0C0C2CDC mov.l @(disp,pc),Rn */
	IF(0x0C0C2CDEu); { u32 t_ = r1; PR = 0x0C0C2CE2u; IF(0x0C0C2CE0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C3420, 0x0C0C3420u, 0x0C0C2CE2u); }  /* 0C0C2CDE jsr @Rn */
L_0C0C2CE2: BLKS(0x0C0C2CE2u);
	T = (r0 & r0) == 0;  /* 0C0C2CE2 tst Rm,Rn */
	if (T) { UPD(0x0C0C2CCEu, 4); goto L_0C0C2CCE; }  /* 0C0C2CE4 bt */
L_0C0C2CE6: BLKS(0x0C0C2CE6u);
	r3 = R32(r14 + 0x4u); UPD(0x0C0C2CE8u, 1);  /* 0C0C2CE6 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C2CEAu, 1);  /* 0C0C2CE8 mov.l @(disp,Rm),Rn */
	r2 = R32(r1 + 0x8u); UPD(0x0C0C2CECu, 1);  /* 0C0C2CEA mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x20u); UPD(0x0C0C2CEEu, 1);  /* 0C0C2CEC mov.l @(disp,Rm),Rn */
	r1 += r2;  /* 0C0C2CEE add Rm,Rn */
	W32(r3 + 0x8u, r1); UPD(0x0C0C2CF2u, 2);  /* 0C0C2CF0 mov.l Rm,@(disp,Rn) */
	r3 = R32(r14 + 0x4u); UPD(0x0C0C2CF4u, 1);  /* 0C0C2CF2 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C2CF6u, 1);  /* 0C0C2CF4 mov.l @(disp,Rm),Rn */
	r2 = R32(r1 + 0xCu); UPD(0x0C0C2CF8u, 1);  /* 0C0C2CF6 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x20u); UPD(0x0C0C2CFAu, 1);  /* 0C0C2CF8 mov.l @(disp,Rm),Rn */
	r2 -= r1;  /* 0C0C2CFA sub Rm,Rn */
	r1 = r2;  /* 0C0C2CFC mov Rm,Rn */
	W32(r3 + 0xCu, r1); UPD(0x0C0C2D00u, 3);  /* 0C0C2CFE mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0xCu); UPD(0x0C0C2D02u, 1);  /* 0C0C2D00 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x20u); UPD(0x0C0C2D04u, 1);  /* 0C0C2D02 mov.l @(disp,Rm),Rn */
	r1 += r2;  /* 0C0C2D04 add Rm,Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0C2D08u, 2);  /* 0C0C2D06 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x1Cu); UPD(0x0C0C2D0Au, 1);  /* 0C0C2D08 mov.l @(disp,Rm),Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0C2D0A add #imm,Rn */
	W32(r14 + 0x1Cu, r1); UPD(0x0C0C2D0Eu, 2);  /* 0C0C2D0C mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0C2D10u); ; /* slot nop */ UPD(0x0C0C2BDCu, 3); goto L_0C0C2BDC; }  /* 0C0C2D0E bra */
L_0C0C2D20: BLKS(0x0C0C2D20u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0C2D22u, 1);  /* 0C0C2D20 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0xCu); UPD(0x0C0C2D24u, 1);  /* 0C0C2D22 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0C2D24 tst Rm,Rn */
	IF(0x0C0C2D26u); r1 = T;  /* 0C0C2D26 movt Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0C2D2Au, 3);  /* 0C0C2D28 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x8u); UPD(0x0C0C2D2Cu, 1);  /* 0C0C2D2A mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0C2D2C tst Rm,Rn */
	if (!T) { UPD(0x0C0C2D60u, 4); goto L_0C0C2D60; }  /* 0C0C2D2E bf */
L_0C0C2D30: BLKS(0x0C0C2D30u);
	r2 = R32(r14 + 0x4u); UPD(0x0C0C2D32u, 1);  /* 0C0C2D30 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0xCu); UPD(0x0C0C2D34u, 1);  /* 0C0C2D32 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x14u, r1); UPD(0x0C0C2D36u, 1);  /* 0C0C2D34 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0C2D38u); ; /* slot nop */ UPD(0x0C0C2D94u, 3); goto L_0C0C2D94; }  /* 0C0C2D36 bra */
L_0C0C2D60: BLKS(0x0C0C2D60u);
	r2 = R32(r14 + 0x4u); UPD(0x0C0C2D62u, 1);  /* 0C0C2D60 mov.l @(disp,Rm),Rn */
	r1 = 0x0u;  /* 0C0C2D62 mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0C2D66u, 2);  /* 0C0C2D64 mov.l Rm,@Rn */
	r1 = 0xC2287D0u; UPD(0x0C0C2D68u, 1);  /* 0C0C2D66 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0C2D6Au, 1);  /* 0C0C2D68 mov.l @Rm,Rn */
	r1 += 0x1u;  /* 0C0C2D6A add #imm,Rn */
	W32(r14 + 0x34u, r1); UPD(0x0C0C2D6Eu, 2);  /* 0C0C2D6C mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x34u); UPD(0x0C0C2D70u, 1);  /* 0C0C2D6E mov.l @(disp,Rm),Rn */
	W32(r14 + 0x38u, r1); UPD(0x0C0C2D72u, 1);  /* 0C0C2D70 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x38u); UPD(0x0C0C2D74u, 1);  /* 0C0C2D72 mov.l @(disp,Rm),Rn */
	IF(0x0C0C2D74u); T = (s32)r2 >= 0;  /* 0C0C2D74 cmp/pz Rn */
	if (T) { UPD(0x0C0C2D7Eu, 4); goto L_0C0C2D7E; }  /* 0C0C2D76 bt */
L_0C0C2D78: BLKS(0x0C0C2D78u);
	r1 = R32(r14 + 0x38u); UPD(0x0C0C2D7Au, 1);  /* 0C0C2D78 mov.l @(disp,Rm),Rn */
	r1 += 0xFu;  /* 0C0C2D7A add #imm,Rn */
	W32(r14 + 0x38u, r1); UPD(0x0C0C2D7Eu, 2);  /* 0C0C2D7C mov.l Rm,@(disp,Rn) */
L_0C0C2D7E: BLKS(0x0C0C2D7Eu);
	r1 = 0xFFFFFFFCu;  /* 0C0C2D7E mov #imm,Rn */
	r2 = R32(r14 + 0x38u); UPD(0x0C0C2D82u, 2);  /* 0C0C2D80 mov.l @(disp,Rm),Rn */
	IF(0x0C0C2D82u); ARG0(0x421Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0C2D82 shad Rm,Rn */
	r1 = r2;  /* 0C0C2D84 mov Rm,Rn */
	r2 = 0x4u;  /* 0C0C2D86 mov #imm,Rn */
	IF(0x0C0C2D88u); ARG0(0x412Du); { s32 s_ = (s32)r2; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0C2D88 shld Rm,Rn */
	r2 = R32(r14 + 0x34u); UPD(0x0C0C2D8Cu, 5);  /* 0C0C2D8A mov.l @(disp,Rm),Rn */
	r2 -= r1;  /* 0C0C2D8C sub Rm,Rn */
	r1 = r2;  /* 0C0C2D8E mov Rm,Rn */
	r2 = 0xC2287D0u; UPD(0x0C0C2D92u, 3);  /* 0C0C2D90 mov.l @(disp,pc),Rn */
	W32(r2, r1); UPD(0x0C0C2D94u, 1);  /* 0C0C2D92 mov.l Rm,@Rn */
L_0C0C2D94: BLKS(0x0C0C2D94u);
	r4 = R32(r14); UPD(0x0C0C2D96u, 1);  /* 0C0C2D94 mov.l @Rm,Rn */
	r1 = 0xC0C3300u; UPD(0x0C0C2D98u, 1);  /* 0C0C2D96 mov.l @(disp,pc),Rn */
	IF(0x0C0C2D98u); { u32 t_ = r1; PR = 0x0C0C2D9Cu; IF(0x0C0C2D9Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C3300, 0x0C0C3300u, 0x0C0C2D9Cu); }  /* 0C0C2D98 jsr @Rn */
L_0C0C2D9C: BLKS(0x0C0C2D9Cu);
	r1 = R32(r14 + 0x8u); UPD(0x0C0C2D9Eu, 1);  /* 0C0C2D9C mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0C2D9E tst Rm,Rn */
	if (T) { UPD(0x0C0C2DB8u, 4); goto L_0C0C2DB8; }  /* 0C0C2DA0 bt */
L_0C0C2DA2: BLKS(0x0C0C2DA2u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0C2DA4u, 1);  /* 0C0C2DA2 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x1Cu); UPD(0x0C0C2DA6u, 1);  /* 0C0C2DA4 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0C2DA6 tst Rm,Rn */
	if (T) { UPD(0x0C0C2DB8u, 4); goto L_0C0C2DB8; }  /* 0C0C2DA8 bt */
L_0C0C2DAA: BLKS(0x0C0C2DAAu);
	r2 = R32(r14 + 0x4u); UPD(0x0C0C2DACu, 1);  /* 0C0C2DAA mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C2DAEu, 1);  /* 0C0C2DAC mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x20u); UPD(0x0C0C2DB0u, 1);  /* 0C0C2DAE mov.l @(disp,Rm),Rn */
	r2 = R32(r2 + 0x1Cu); UPD(0x0C0C2DB2u, 1);  /* 0C0C2DB0 mov.l @(disp,Rm),Rn */
	r4 = r1;  /* 0C0C2DB2 mov Rm,Rn */
	IF(0x0C0C2DB4u); { u32 t_ = r2; PR = 0x0C0C2DB8u; IF(0x0C0C2DB6u); ; /* slot nop */ UPD(t_, 3); CALLD(t_, 0x0C0C2DB8u); }  /* 0C0C2DB4 jsr @Rn */
L_0C0C2DB8: BLKS(0x0C0C2DB8u);
	r14 += 0x3Cu;  /* 0C0C2DB8 add #imm,Rn */
	r15 = r14;  /* 0C0C2DBA mov Rm,Rn */
	IF(0x0C0C2DBCu); PR = R32(r15); r15 += 4; UPD(0x0C0C2DBEu, 3);  /* 0C0C2DBC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C2DC0u, 1);  /* 0C0C2DBE mov.l @Rm+,Rn */
	IF(0x0C0C2DC0u); { u32 t_ = PR; IF(0x0C0C2DC2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C2DC0 rts */
}

/* FUN_0c0c2e50 */
void blk_f_0C0C2E50(sh3_t *c)
{
	LOCALS;
L_0C0C2E50: BLKS(0x0C0C2E50u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2E52u, 1);  /* 0C0C2E50 mov.l Rm,@-Rn */
	IF(0x0C0C2E52u); r15 -= 4; W32(r15, PR); UPD(0x0C0C2E54u, 1);  /* 0C0C2E52 sts.l pr,@-Rn */
	r15 += 0xFFFFFFDCu;  /* 0C0C2E54 add #imm,Rn */
	r14 = r15;  /* 0C0C2E56 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0C2E5Au, 3);  /* 0C0C2E58 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0C2E5Cu, 1);  /* 0C0C2E5A mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r6); UPD(0x0C0C2E5Eu, 1);  /* 0C0C2E5C mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r7); UPD(0x0C0C2E60u, 1);  /* 0C0C2E5E mov.l Rm,@(disp,Rn) */
	r1 = 0xC0C32E0u; UPD(0x0C0C2E62u, 1);  /* 0C0C2E60 mov.l @(disp,pc),Rn */
	IF(0x0C0C2E62u); { u32 t_ = r1; PR = 0x0C0C2E66u; IF(0x0C0C2E64u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C32E0, 0x0C0C32E0u, 0x0C0C2E66u); }  /* 0C0C2E62 jsr @Rn */
L_0C0C2E66: BLKS(0x0C0C2E66u);
	W32(r14 + 0x10u, r0); UPD(0x0C0C2E68u, 1);  /* 0C0C2E66 mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C0C2E68 mov #imm,Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0C2E6Cu, 2);  /* 0C0C2E6A mov.l Rm,@(disp,Rn) */
	r1 = 0xC2074E0u; UPD(0x0C0C2E6Eu, 1);  /* 0C0C2E6C mov.l @(disp,pc),Rn */
	r2 = R32(r14); UPD(0x0C0C2E70u, 1);  /* 0C0C2E6E mov.l @Rm,Rn */
	r1 = R32(r1); UPD(0x0C0C2E72u, 1);  /* 0C0C2E70 mov.l @Rm,Rn */
	T = r2 >= r1;  /* 0C0C2E72 cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C0C2E80u, 4); goto L_0C0C2E80; }  /* 0C0C2E74 bf */
L_0C0C2E76: BLKS(0x0C0C2E76u);
	r1 = 0x0u;  /* 0C0C2E76 mov #imm,Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0C2E7Au, 2);  /* 0C0C2E78 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0C2E7Cu); ; /* slot nop */ UPD(0x0C0C2F1Au, 3); goto L_0C0C2F1A; }  /* 0C0C2E7A bra */
L_0C0C2E80: BLKS(0x0C0C2E80u);
	r1 = 0xC2287D4u; UPD(0x0C0C2E82u, 1);  /* 0C0C2E80 mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C0C2E84u, 1);  /* 0C0C2E82 mov.l @Rm,Rn */
	r1 = 0x24u;  /* 0C0C2E84 mov #imm,Rn */
	IF(0x0C0C2E86u); MACL = r2 * r1;  /* 0C0C2E86 mul.l Rm,Rn */
	IF(0x0C0C2E88u); r2 = MACL;  /* 0C0C2E88 sts macl,Rn */
	r1 = 0xC228590u; UPD(0x0C0C2E8Cu, 5);  /* 0C0C2E8A mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C0C2E8C add Rm,Rn */
	W32(r14 + 0x18u, r1); UPD(0x0C0C2E90u, 2);  /* 0C0C2E8E mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x18u); UPD(0x0C0C2E92u, 1);  /* 0C0C2E90 mov.l @(disp,Rm),Rn */
	r1 = R32(r1); UPD(0x0C0C2E94u, 1);  /* 0C0C2E92 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0C2E94 tst Rm,Rn */
	if (T) { UPD(0x0C0C2EA0u, 4); goto L_0C0C2EA0; }  /* 0C0C2E96 bt */
L_0C0C2E98: BLKS(0x0C0C2E98u);
	r1 = 0x0u;  /* 0C0C2E98 mov #imm,Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0C2E9Cu, 2);  /* 0C0C2E9A mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0C2E9Eu); ; /* slot nop */ UPD(0x0C0C2F1Au, 3); goto L_0C0C2F1A; }  /* 0C0C2E9C bra */
L_0C0C2EA0: BLKS(0x0C0C2EA0u);
	r1 = R32(r14 + 0x18u); UPD(0x0C0C2EA2u, 1);  /* 0C0C2EA0 mov.l @(disp,Rm),Rn */
	r3 = r1;  /* 0C0C2EA2 mov Rm,Rn */
	r3 += 0x4u;  /* 0C0C2EA4 add #imm,Rn */
	r1 = R32(r14); UPD(0x0C0C2EA8u, 3);  /* 0C0C2EA6 mov.l @Rm,Rn */
	r2 = r1;  /* 0C0C2EA8 mov Rm,Rn */
	r7 = 0x4u;  /* 0C0C2EAA mov #imm,Rn */
	IF(0x0C0C2EACu); ARG0(0x427Du); { s32 s_ = (s32)r7; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C0C2EAC shld Rm,Rn */
	r1 = 0xC2074E4u; UPD(0x0C0C2EB0u, 4);  /* 0C0C2EAE mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0C2EB2u, 1);  /* 0C0C2EB0 mov.l @Rm,Rn */
	r2 += r1;  /* 0C0C2EB2 add Rm,Rn */
	r1 = R32(r2); UPD(0x0C0C2EB6u, 2);  /* 0C0C2EB4 mov.l @Rm,Rn */
	W32(r3, r1); UPD(0x0C0C2EB8u, 1);  /* 0C0C2EB6 mov.l Rm,@Rn */
	r1 = R32(r2 + 0x4u); UPD(0x0C0C2EBAu, 1);  /* 0C0C2EB8 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x4u, r1); UPD(0x0C0C2EBCu, 1);  /* 0C0C2EBA mov.l Rm,@(disp,Rn) */
	r1 = R32(r2 + 0x8u); UPD(0x0C0C2EBEu, 1);  /* 0C0C2EBC mov.l @(disp,Rm),Rn */
	W32(r3 + 0x8u, r1); UPD(0x0C0C2EC0u, 1);  /* 0C0C2EBE mov.l Rm,@(disp,Rn) */
	r1 = R32(r2 + 0xCu); UPD(0x0C0C2EC2u, 1);  /* 0C0C2EC0 mov.l @(disp,Rm),Rn */
	W32(r3 + 0xCu, r1); UPD(0x0C0C2EC4u, 1);  /* 0C0C2EC2 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x18u); UPD(0x0C0C2EC6u, 1);  /* 0C0C2EC4 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C2EC8u, 1);  /* 0C0C2EC6 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x14u, r1); UPD(0x0C0C2ECAu, 1);  /* 0C0C2EC8 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x18u); UPD(0x0C0C2ECCu, 1);  /* 0C0C2ECA mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0C2ECEu, 1);  /* 0C0C2ECC mov.l @(disp,Rm),Rn */
	W32(r2 + 0x18u, r1); UPD(0x0C0C2ED0u, 1);  /* 0C0C2ECE mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x18u); UPD(0x0C0C2ED2u, 1);  /* 0C0C2ED0 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0xCu); UPD(0x0C0C2ED4u, 1);  /* 0C0C2ED2 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x1Cu, r1); UPD(0x0C0C2ED6u, 1);  /* 0C0C2ED4 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x18u); UPD(0x0C0C2ED8u, 1);  /* 0C0C2ED6 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x2Cu); UPD(0x0C0C2EDAu, 1);  /* 0C0C2ED8 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x20u, r1); UPD(0x0C0C2EDCu, 1);  /* 0C0C2EDA mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x18u); UPD(0x0C0C2EDEu, 1);  /* 0C0C2EDC mov.l @(disp,Rm),Rn */
	r1 = 0x1u;  /* 0C0C2EDE mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0C2EE2u, 2);  /* 0C0C2EE0 mov.l Rm,@Rn */
	r1 = 0xC2287D4u; UPD(0x0C0C2EE4u, 1);  /* 0C0C2EE2 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0C2EE6u, 1);  /* 0C0C2EE4 mov.l @Rm,Rn */
	r1 += 0x1u;  /* 0C0C2EE6 add #imm,Rn */
	W32(r14 + 0x1Cu, r1); UPD(0x0C0C2EEAu, 2);  /* 0C0C2EE8 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x1Cu); UPD(0x0C0C2EECu, 1);  /* 0C0C2EEA mov.l @(disp,Rm),Rn */
	W32(r14 + 0x20u, r1); UPD(0x0C0C2EEEu, 1);  /* 0C0C2EEC mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x20u); UPD(0x0C0C2EF0u, 1);  /* 0C0C2EEE mov.l @(disp,Rm),Rn */
	IF(0x0C0C2EF0u); T = (s32)r2 >= 0;  /* 0C0C2EF0 cmp/pz Rn */
	if (T) { UPD(0x0C0C2EFAu, 4); goto L_0C0C2EFA; }  /* 0C0C2EF2 bt */
L_0C0C2EF4: BLKS(0x0C0C2EF4u);
	r7 = R32(r14 + 0x20u); UPD(0x0C0C2EF6u, 1);  /* 0C0C2EF4 mov.l @(disp,Rm),Rn */
	r7 += 0xFu;  /* 0C0C2EF6 add #imm,Rn */
	W32(r14 + 0x20u, r7); UPD(0x0C0C2EFAu, 2);  /* 0C0C2EF8 mov.l Rm,@(disp,Rn) */
L_0C0C2EFA: BLKS(0x0C0C2EFAu);
	r1 = 0xFFFFFFFCu;  /* 0C0C2EFA mov #imm,Rn */
	r2 = R32(r14 + 0x20u); UPD(0x0C0C2EFEu, 2);  /* 0C0C2EFC mov.l @(disp,Rm),Rn */
	IF(0x0C0C2EFEu); ARG0(0x421Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0C2EFE shad Rm,Rn */
	r1 = r2;  /* 0C0C2F00 mov Rm,Rn */
	r7 = 0x4u;  /* 0C0C2F02 mov #imm,Rn */
	IF(0x0C0C2F04u); ARG0(0x417Du); { s32 s_ = (s32)r7; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0C2F04 shld Rm,Rn */
	r2 = R32(r14 + 0x1Cu); UPD(0x0C0C2F08u, 5);  /* 0C0C2F06 mov.l @(disp,Rm),Rn */
	r2 -= r1;  /* 0C0C2F08 sub Rm,Rn */
	r1 = r2;  /* 0C0C2F0A mov Rm,Rn */
	r7 = 0xC2287D4u; UPD(0x0C0C2F0Eu, 3);  /* 0C0C2F0C mov.l @(disp,pc),Rn */
	W32(r7, r1); UPD(0x0C0C2F10u, 1);  /* 0C0C2F0E mov.l Rm,@Rn */
	r1 = 0xC0C3320u; UPD(0x0C0C2F12u, 1);  /* 0C0C2F10 mov.l @(disp,pc),Rn */
	IF(0x0C0C2F12u); { u32 t_ = r1; PR = 0x0C0C2F16u; IF(0x0C0C2F14u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C3320, 0x0C0C3320u, 0x0C0C2F16u); }  /* 0C0C2F12 jsr @Rn */
L_0C0C2F16: BLKS(0x0C0C2F16u);
	r1 = R32(r14 + 0x18u); UPD(0x0C0C2F18u, 1);  /* 0C0C2F16 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0C2F1Au, 1);  /* 0C0C2F18 mov.l Rm,@(disp,Rn) */
L_0C0C2F1A: BLKS(0x0C0C2F1Au);
	r1 = R32(r14 + 0x10u); UPD(0x0C0C2F1Cu, 1);  /* 0C0C2F1A mov.l @(disp,Rm),Rn */
	r4 = r1;  /* 0C0C2F1C mov Rm,Rn */
	r1 = 0xC0C3300u; UPD(0x0C0C2F20u, 2);  /* 0C0C2F1E mov.l @(disp,pc),Rn */
	IF(0x0C0C2F20u); { u32 t_ = r1; PR = 0x0C0C2F24u; IF(0x0C0C2F22u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C3300, 0x0C0C3300u, 0x0C0C2F24u); }  /* 0C0C2F20 jsr @Rn */
L_0C0C2F24: BLKS(0x0C0C2F24u);
	r1 = R32(r14 + 0x14u); UPD(0x0C0C2F26u, 1);  /* 0C0C2F24 mov.l @(disp,Rm),Rn */
	r0 = r1;  /* 0C0C2F26 mov Rm,Rn */
	r14 += 0x24u;  /* 0C0C2F28 add #imm,Rn */
	r15 = r14;  /* 0C0C2F2A mov Rm,Rn */
	IF(0x0C0C2F2Cu); PR = R32(r15); r15 += 4; UPD(0x0C0C2F2Eu, 4);  /* 0C0C2F2C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C2F30u, 1);  /* 0C0C2F2E mov.l @Rm+,Rn */
	IF(0x0C0C2F30u); { u32 t_ = PR; IF(0x0C0C2F32u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C2F30 rts */
}

void blk_f_0C0C2F50(sh3_t *c)
{
	LOCALS;
L_0C0C2F50: BLKS(0x0C0C2F50u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C2F52u, 1);  /* 0C0C2F50 mov.l Rm,@-Rn */
	IF(0x0C0C2F52u); r15 -= 4; W32(r15, PR); UPD(0x0C0C2F54u, 1);  /* 0C0C2F52 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0C2F54 add #imm,Rn */
	r14 = r15;  /* 0C0C2F56 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0C2F5Au, 3);  /* 0C0C2F58 mov.l Rm,@Rn */
	r1 = 0xC0C32E0u; UPD(0x0C0C2F5Cu, 1);  /* 0C0C2F5A mov.l @(disp,pc),Rn */
	IF(0x0C0C2F5Cu); { u32 t_ = r1; PR = 0x0C0C2F60u; IF(0x0C0C2F5Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C32E0, 0x0C0C32E0u, 0x0C0C2F60u); }  /* 0C0C2F5C jsr @Rn */
L_0C0C2F60: BLKS(0x0C0C2F60u);
	W32(r14 + 0x4u, r0); UPD(0x0C0C2F62u, 1);  /* 0C0C2F60 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14); UPD(0x0C0C2F64u, 1);  /* 0C0C2F62 mov.l @Rm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0C2F66u, 1);  /* 0C0C2F64 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x8u); UPD(0x0C0C2F68u, 1);  /* 0C0C2F66 mov.l @(disp,Rm),Rn */
	r1 = R32(r1); UPD(0x0C0C2F6Au, 1);  /* 0C0C2F68 mov.l @Rm,Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0C2F6Cu, 1);  /* 0C0C2F6A mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C2F6Eu, 1);  /* 0C0C2F6C mov.l @(disp,Rm),Rn */
	r4 = r1;  /* 0C0C2F6E mov Rm,Rn */
	r1 = 0xC0C3300u; UPD(0x0C0C2F72u, 2);  /* 0C0C2F70 mov.l @(disp,pc),Rn */
	IF(0x0C0C2F72u); { u32 t_ = r1; PR = 0x0C0C2F76u; IF(0x0C0C2F74u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C3300, 0x0C0C3300u, 0x0C0C2F76u); }  /* 0C0C2F72 jsr @Rn */
L_0C0C2F76: BLKS(0x0C0C2F76u);
	r1 = R32(r14 + 0xCu); UPD(0x0C0C2F78u, 1);  /* 0C0C2F76 mov.l @(disp,Rm),Rn */
	r0 = r1;  /* 0C0C2F78 mov Rm,Rn */
	r14 += 0x10u;  /* 0C0C2F7A add #imm,Rn */
	r15 = r14;  /* 0C0C2F7C mov Rm,Rn */
	IF(0x0C0C2F7Eu); PR = R32(r15); r15 += 4; UPD(0x0C0C2F80u, 4);  /* 0C0C2F7E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C2F82u, 1);  /* 0C0C2F80 mov.l @Rm+,Rn */
	IF(0x0C0C2F82u); { u32 t_ = PR; IF(0x0C0C2F84u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C2F82 rts */
}

/* FUN_0c0c32e0 */
void blk_f_0C0C32E0(sh3_t *c)
{
	LOCALS;
L_0C0C32E0: BLKS(0x0C0C32E0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C32E2u, 1);  /* 0C0C32E0 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C0C32E2 mov Rm,Rn */
	IF(0x0C0C32E4u); r0 = ((c->sr & ~1u) | T);  /* 0C0C32E4 stc sr,Rn */
	r1 = 0xC056EF0u; UPD(0x0C0C32E8u, 3);  /* 0C0C32E6 mov.l @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C0C32E8 mov #imm,Rn */
	W32(r1, r2); UPD(0x0C0C32ECu, 2);  /* 0C0C32EA mov.l Rm,@Rn */
	r15 = r14;  /* 0C0C32EC mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C32F0u, 2);  /* 0C0C32EE mov.l @Rm+,Rn */
	IF(0x0C0C32F0u); { u32 t_ = PR; IF(0x0C0C32F2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C32F0 rts */
}

/* FUN_0c0c3300 */
void blk_f_0C0C3300(sh3_t *c)
{
	LOCALS;
L_0C0C3300: BLKS(0x0C0C3300u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C3302u, 1);  /* 0C0C3300 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0C3302 add #imm,Rn */
	r14 = r15;  /* 0C0C3304 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0C3308u, 3);  /* 0C0C3306 mov.l Rm,@Rn */
	IF(0x0C0C3308u); ARG0(0x440Eu); SET_SR(r4); UPDI(0x0C0C330Au);  /* 0C0C3308 ldc Rn,sr */
L_0C0C330A: BLKS(0x0C0C330Au);
	r2 = 0xC056EF0u; UPD(0x0C0C330Cu, 1);  /* 0C0C330A mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C330C mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0C3310u, 2);  /* 0C0C330E mov.l Rm,@Rn */
	r14 += 0x4u;  /* 0C0C3310 add #imm,Rn */
	r15 = r14;  /* 0C0C3312 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C3316u, 3);  /* 0C0C3314 mov.l @Rm+,Rn */
	IF(0x0C0C3316u); { u32 t_ = PR; IF(0x0C0C3318u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C3316 rts */
}

/* FUN_0c0c3320 */
void blk_f_0C0C3320(sh3_t *c)
{
	LOCALS;
L_0C0C3320: BLKS(0x0C0C3320u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C3322u, 1);  /* 0C0C3320 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C0C3322 mov Rm,Rn */
	r2 = 0xA0000000u; UPD(0x0C0C3326u, 2);  /* 0C0C3324 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C0C3326 mov Rm,Rn */
	IF(0x0C0C3328u); { u32 tv_ = (r2 + 0x0C0C332Cu); u32 t_ = PHYS(tv_); r3 = 0xFFFFFFECu; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0C3328 braf Rn */
}

void blk_f_0C0C332C(sh3_t *c)
{
	LOCALS;
L_0C0C332C: BLKS(0x0C0C332Cu);
	r1 = 0xF0000000u; UPD(0x0C0C332Eu, 1);  /* 0C0C332C mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C0C332E mov #imm,Rn */
	r2 = 0x400u; UPD(0x0C0C3332u, 2);  /* 0C0C3330 mov.l @(disp,pc),Rn */
L_0C0C3332: BLKS(0x0C0C3332u);
	W32(r1, r0); UPD(0x0C0C3334u, 1);  /* 0C0C3332 mov.l Rm,@Rn */
	IF(0x0C0C3334u); r2 -= 1; T = r2 == 0;  /* 0C0C3334 dt Rn */
	{ u32 c_ = !T; r1 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0C3332u, 4); goto L_0C0C3332; } goto L_0C0C333A; }  /* 0C0C3336 bf/s */
L_0C0C333A: BLKS(0x0C0C333Au);
	r0 = R32(r3); UPD(0x0C0C333Cu, 2);  /* 0C0C333A mov.l @Rm,Rn */
	r0 |= 0x8u;  /* 0C0C333C or #imm,r0 */
	W32(r3, r0); UPD(0x0C0C3340u, 2);  /* 0C0C333E mov.l Rm,@Rn */
	{ IF(0x0C0C3342u); ; /* slot nop */ UPD(0x0C0C3350u, 3); goto L_0C0C3350; }  /* 0C0C3340 bra */
L_0C0C3350: BLKS(0x0C0C3350u);
	r15 = r14;  /* 0C0C3350 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C3354u, 2);  /* 0C0C3352 mov.l @Rm+,Rn */
	IF(0x0C0C3354u); { u32 t_ = PR; IF(0x0C0C3356u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C3354 rts */
}

/* dma_start */
void blk_f_0C0C3360(sh3_t *c)
{
	LOCALS;
L_0C0C3360: BLKS(0x0C0C3360u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C3362u, 1);  /* 0C0C3360 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0C3362 add #imm,Rn */
	r14 = r15;  /* 0C0C3364 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0C3368u, 3);  /* 0C0C3366 mov.l Rm,@Rn */
	r1 = 0x1u;  /* 0C0C3368 mov #imm,Rn */
	r2 = 0xA4000060u; UPD(0x0C0C336Cu, 2);  /* 0C0C336A mov.l @(disp,pc),Rn */
	r7 = r4;  /* 0C0C336C mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0C3370u, 2);  /* 0C0C336E mov.w @Rm,Rn */
	W16(r2, r1); UPD(0x0C0C3372u, 1);  /* 0C0C3370 mov.w Rm,@Rn */
	r0 = R32(r7 + 0x0u); UPD(0x0C0C3374u, 1);  /* 0C0C3372 mov.l @(disp,Rm),Rn */
	r6 = 0xA4000020u; UPD(0x0C0C3376u, 1);  /* 0C0C3374 mov.l @(disp,pc),Rn */
	IF(0x0C0C3376u); r0 <<= 2;  /* 0C0C3376 shll2 Rn */
	r1 = R32(r7 + 0x4u); UPD(0x0C0C337Au, 2);  /* 0C0C3378 mov.l @(disp,Rm),Rn */
	IF(0x0C0C337Au); r0 <<= 2;  /* 0C0C337A shll2 Rn */
	r2 = R32(r7 + 0x8u); UPD(0x0C0C337Eu, 2);  /* 0C0C337C mov.l @(disp,Rm),Rn */
	r6 += r0;  /* 0C0C337E add Rm,Rn */
	r3 = R32(r7 + 0xCu); UPD(0x0C0C3382u, 2);  /* 0C0C3380 mov.l @(disp,Rm),Rn */
	r0 = R32(r6 + 0xCu); UPD(0x0C0C3384u, 1);  /* 0C0C3382 mov.l @(disp,Rm),Rn */
	T = (r0 & 0x1u) == 0;  /* 0C0C3384 tst #imm,r0 */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C33C8u, 4); goto L_0C0C33C8; } goto L_0C0C338A; }  /* 0C0C3386 bf/s */
L_0C0C338A: BLKS(0x0C0C338Au);
	W32(r6 + 0x0u, r1); UPD(0x0C0C338Cu, 2);  /* 0C0C338A mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x4u, r2); UPD(0x0C0C338Eu, 1);  /* 0C0C338C mov.l Rm,@(disp,Rn) */
	W32(r6 + 0x8u, r3); UPD(0x0C0C3390u, 1);  /* 0C0C338E mov.l Rm,@(disp,Rn) */
	r0 = R32(r7 + 0x10u); UPD(0x0C0C3392u, 1);  /* 0C0C3390 mov.l @(disp,Rm),Rn */
	r1 = R32(r7 + 0x14u); UPD(0x0C0C3394u, 1);  /* 0C0C3392 mov.l @(disp,Rm),Rn */
	r2 = R32(r7 + 0x18u); UPD(0x0C0C3396u, 1);  /* 0C0C3394 mov.l @(disp,Rm),Rn */
	r3 = R32(r7 + 0x1Cu); UPD(0x0C0C3398u, 1);  /* 0C0C3396 mov.l @(disp,Rm),Rn */
	r4 = R32(r7 + 0x20u); UPD(0x0C0C339Au, 1);  /* 0C0C3398 mov.l @(disp,Rm),Rn */
	IF(0x0C0C339Au); r1 <<= 16;  /* 0C0C339A shll16 Rn */
	IF(0x0C0C339Cu); r0 <<= 8;  /* 0C0C339C shll8 Rn */
	IF(0x0C0C339Eu); r1 >>= 2;  /* 0C0C339E shlr2 Rn */
	IF(0x0C0C33A0u); r0 <<= 2;  /* 0C0C33A0 shll2 Rn */
	IF(0x0C0C33A2u); r2 <<= 2;  /* 0C0C33A2 shll2 Rn */
	IF(0x0C0C33A4u); r0 <<= 2;  /* 0C0C33A4 shll2 Rn */
	IF(0x0C0C33A6u); r2 <<= 2;  /* 0C0C33A6 shll2 Rn */
	IF(0x0C0C33A8u); r3 <<= 2;  /* 0C0C33A8 shll2 Rn */
	IF(0x0C0C33AAu); T = r2 >> 31; r2 <<= 1;  /* 0C0C33AA shll Rn */
	r0 |= r1;  /* 0C0C33AC or Rm,Rn */
	IF(0x0C0C33AEu); T = r3 >> 31; r3 <<= 1;  /* 0C0C33AE shll Rn */
	r0 |= r2;  /* 0C0C33B0 or Rm,Rn */
	IF(0x0C0C33B2u); r4 <<= 8;  /* 0C0C33B2 shll8 Rn */
	r0 |= r3;  /* 0C0C33B4 or Rm,Rn */
	r0 |= r4;  /* 0C0C33B6 or Rm,Rn */
	r0 |= 0x1u;  /* 0C0C33B8 or #imm,r0 */
	{ W32(r6 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0C33C8u, 19); goto L_0C0C33C8; }  /* 0C0C33BA bra */
L_0C0C33C8: BLKS(0x0C0C33C8u);
	r14 += 0x4u;  /* 0C0C33C8 add #imm,Rn */
	r15 = r14;  /* 0C0C33CA mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C33CEu, 3);  /* 0C0C33CC mov.l @Rm+,Rn */
	IF(0x0C0C33CEu); { u32 t_ = PR; IF(0x0C0C33D0u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C33CE rts */
}

/* dma_busy */
void blk_f_0C0C33E0(sh3_t *c)
{
	LOCALS;
L_0C0C33E0: BLKS(0x0C0C33E0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C33E2u, 1);  /* 0C0C33E0 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0C33E2 add #imm,Rn */
	r14 = r15;  /* 0C0C33E4 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0C33E8u, 3);  /* 0C0C33E6 mov.l Rm,@Rn */
	r2 = 0xA400002Cu; UPD(0x0C0C33EAu, 1);  /* 0C0C33E8 mov.l @(disp,pc),Rn */
	IF(0x0C0C33EAu); r4 <<= 2;  /* 0C0C33EA shll2 Rn */
	IF(0x0C0C33ECu); r4 <<= 2;  /* 0C0C33EC shll2 Rn */
	r2 += r4;  /* 0C0C33EE add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0C33F2u, 4);  /* 0C0C33F0 mov.l @Rm,Rn */
	r1 = 0xFFFFFFFCu;  /* 0C0C33F2 mov #imm,Rn */
	T = (r0 & 0x2u) == 0;  /* 0C0C33F4 tst #imm,r0 */
	r1 &= r0;  /* 0C0C33F6 and Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0C3408u, 6); goto L_0C0C3408; } goto L_0C0C33FC; }  /* 0C0C33F8 bt/s */
L_0C0C33FC: BLKS(0x0C0C33FCu);
	W32(r2, r1); UPD(0x0C0C33FEu, 2);  /* 0C0C33FC mov.l Rm,@Rn */
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0C3408u, 3); goto L_0C0C3408; }  /* 0C0C33FE bra */
L_0C0C3408: BLKS(0x0C0C3408u);
	r14 += 0x4u;  /* 0C0C3408 add #imm,Rn */
	r15 = r14;  /* 0C0C340A mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C340Eu, 3);  /* 0C0C340C mov.l @Rm+,Rn */
	IF(0x0C0C340Eu); { u32 t_ = PR; IF(0x0C0C3410u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C340E rts */
}

/* nand_read */
void blk_f_0C0C3420(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C0C3568);
L_0C0C3420: BLKS(0x0C0C3420u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C3422u, 1);  /* 0C0C3420 mov.l Rm,@-Rn */
	IF(0x0C0C3422u); r15 -= 4; W32(r15, PR); UPD(0x0C0C3424u, 1);  /* 0C0C3422 sts.l pr,@-Rn */
	r15 += 0xFFFFFFB8u;  /* 0C0C3424 add #imm,Rn */
	r14 = r15;  /* 0C0C3426 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0C342Au, 3);  /* 0C0C3428 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0C342Cu, 1);  /* 0C0C342A mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r6); UPD(0x0C0C342Eu, 1);  /* 0C0C342C mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r7); UPD(0x0C0C3430u, 1);  /* 0C0C342E mov.l Rm,@(disp,Rn) */
	r2 = 0xB0C00003u; UPD(0x0C0C3432u, 1);  /* 0C0C3430 mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C0C3432 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C3436u, 2);  /* 0C0C3434 mov.b Rm,@Rn */
	r1 = 0xC22857Cu; UPD(0x0C0C3438u, 1);  /* 0C0C3436 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0C343Au, 1);  /* 0C0C3438 mov.l @Rm,Rn */
	r0 = 0x40u;  /* 0C0C343A mov #imm,Rn */
	r0 += r14;  /* 0C0C343C add Rm,Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C0C3440u, 3);  /* 0C0C343E mov.l Rm,@(disp,Rn) */
	r1 = 0x1u;  /* 0C0C3440 mov #imm,Rn */
	r2 = 0x40u;  /* 0C0C3442 mov #imm,Rn */
	r2 += r14;  /* 0C0C3444 add Rm,Rn */
	r2 = R32(r2 + 0x4u); UPD(0x0C0C3448u, 4);  /* 0C0C3446 mov.l @(disp,Rm),Rn */
	T = r2 > r1;  /* 0C0C3448 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0C3456u, 4); goto L_0C0C3456; }  /* 0C0C344A bf */
L_0C0C344C: BLKS(0x0C0C344Cu);
	r0 = 0x40u;  /* 0C0C344C mov #imm,Rn */
	r0 += r14;  /* 0C0C344E add Rm,Rn */
	r0 = R32(r0 + 0x4u); UPD(0x0C0C3452u, 3);  /* 0C0C3450 mov.l @(disp,Rm),Rn */
	T = r0 == 0x2u;  /* 0C0C3452 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0C34E0u, 4); goto L_0C0C34E0; }  /* 0C0C3454 bt */
L_0C0C3456: BLKS(0x0C0C3456u);
	r2 = R32(r14 + 0x8u); UPD(0x0C0C3458u, 1);  /* 0C0C3456 mov.l @(disp,Rm),Rn */
	r1 = 0xFFu; UPD(0x0C0C345Au, 1);  /* 0C0C3458 mov.w @(disp,pc),Rn */
	T = r2 > r1;  /* 0C0C345A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0C3470u, 4); goto L_0C0C3470; }  /* 0C0C345C bt */
L_0C0C345E: BLKS(0x0C0C345Eu);
	r2 = r14;  /* 0C0C345E mov Rm,Rn */
	r2 += 0x40u;  /* 0C0C3460 add #imm,Rn */
	r1 = 0x0u;  /* 0C0C3462 mov #imm,Rn */
	W32(r2 + 0x0u, r1); UPD(0x0C0C3466u, 4);  /* 0C0C3464 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0C3468u); ; /* slot nop */ UPD(0x0C0C3498u, 3); goto L_0C0C3498; }  /* 0C0C3466 bra */
L_0C0C3470: BLKS(0x0C0C3470u);
	r2 = R32(r14 + 0x8u); UPD(0x0C0C3472u, 1);  /* 0C0C3470 mov.l @(disp,Rm),Rn */
	r1 = 0x1FFu; UPD(0x0C0C3474u, 1);  /* 0C0C3472 mov.w @(disp,pc),Rn */
	T = r2 > r1;  /* 0C0C3474 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0C3490u, 4); goto L_0C0C3490; }  /* 0C0C3476 bt */
L_0C0C3478: BLKS(0x0C0C3478u);
	r2 = r14;  /* 0C0C3478 mov Rm,Rn */
	r2 += 0x40u;  /* 0C0C347A add #imm,Rn */
	r1 = 0x1u;  /* 0C0C347C mov #imm,Rn */
	W32(r2 + 0x0u, r1); UPD(0x0C0C3480u, 4);  /* 0C0C347E mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0C3482u); ; /* slot nop */ UPD(0x0C0C3498u, 3); goto L_0C0C3498; }  /* 0C0C3480 bra */
L_0C0C3490: BLKS(0x0C0C3490u);
	r2 = r14;  /* 0C0C3490 mov Rm,Rn */
	r2 += 0x40u;  /* 0C0C3492 add #imm,Rn */
	r1 = 0x50u;  /* 0C0C3494 mov #imm,Rn */
	W32(r2 + 0x0u, r1); UPD(0x0C0C3498u, 4);  /* 0C0C3496 mov.l Rm,@(disp,Rn) */
L_0C0C3498: BLKS(0x0C0C3498u);
	r2 = 0xB0000001u; UPD(0x0C0C349Au, 1);  /* 0C0C3498 mov.l @(disp,pc),Rn */
	r1 = r14;  /* 0C0C349A mov Rm,Rn */
	r1 += 0x40u;  /* 0C0C349C add #imm,Rn */
	r1 += 0x3u;  /* 0C0C349E add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C34A2u, 4);  /* 0C0C34A0 mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0C34A4u, 1);  /* 0C0C34A2 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0C34A6u, 1);  /* 0C0C34A4 mov.l @(disp,pc),Rn */
	r1 = r14;  /* 0C0C34A6 mov Rm,Rn */
	r1 += 0xBu;  /* 0C0C34A8 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C34ACu, 3);  /* 0C0C34AA mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0C34AEu, 1);  /* 0C0C34AC mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0C34B0u, 1);  /* 0C0C34AE mov.l @(disp,pc),Rn */
	r1 = r14;  /* 0C0C34B0 mov Rm,Rn */
	r1 += 0x7u;  /* 0C0C34B2 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C34B6u, 3);  /* 0C0C34B4 mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0C34B8u, 1);  /* 0C0C34B6 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0C34BAu, 1);  /* 0C0C34B8 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C34BCu, 1);  /* 0C0C34BA mov.l @(disp,Rm),Rn */
	IF(0x0C0C34BCu); r1 >>= 8;  /* 0C0C34BC shlr8 Rn */
	W8(r2, r1); UPD(0x0C0C34C0u, 2);  /* 0C0C34BE mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0C34C2u, 1);  /* 0C0C34C0 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C34C4u, 1);  /* 0C0C34C2 mov.l @(disp,Rm),Rn */
	IF(0x0C0C34C4u); r1 >>= 16;  /* 0C0C34C4 shlr16 Rn */
	W8(r2, r1); UPD(0x0C0C34C8u, 2);  /* 0C0C34C6 mov.b Rm,@Rn */
	{ IF(0x0C0C34CAu); ; /* slot nop */ UPD(0x0C0C3510u, 3); goto L_0C0C3510; }  /* 0C0C34C8 bra */
L_0C0C34E0: BLKS(0x0C0C34E0u);
	r2 = 0xB0000001u; UPD(0x0C0C34E2u, 1);  /* 0C0C34E0 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C34E2 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C34E6u, 2);  /* 0C0C34E4 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0C34E8u, 1);  /* 0C0C34E6 mov.l @(disp,pc),Rn */
	r1 = r14;  /* 0C0C34E8 mov Rm,Rn */
	r1 += 0xBu;  /* 0C0C34EA add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C34EEu, 3);  /* 0C0C34EC mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0C34F0u, 1);  /* 0C0C34EE mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0C34F2u, 1);  /* 0C0C34F0 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0C34F4u, 1);  /* 0C0C34F2 mov.l @(disp,Rm),Rn */
	IF(0x0C0C34F4u); r1 >>= 8;  /* 0C0C34F4 shlr8 Rn */
	W8(r2, r1); UPD(0x0C0C34F8u, 2);  /* 0C0C34F6 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0C34FAu, 1);  /* 0C0C34F8 mov.l @(disp,pc),Rn */
	r1 = r14;  /* 0C0C34FA mov Rm,Rn */
	r1 += 0x7u;  /* 0C0C34FC add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C3500u, 3);  /* 0C0C34FE mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0C3502u, 1);  /* 0C0C3500 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0C3504u, 1);  /* 0C0C3502 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C3506u, 1);  /* 0C0C3504 mov.l @(disp,Rm),Rn */
	IF(0x0C0C3506u); r1 >>= 8;  /* 0C0C3506 shlr8 Rn */
	W8(r2, r1); UPD(0x0C0C350Au, 2);  /* 0C0C3508 mov.b Rm,@Rn */
	r2 = 0xB0000001u; UPD(0x0C0C350Cu, 1);  /* 0C0C350A mov.l @(disp,pc),Rn */
	r1 = 0x30u;  /* 0C0C350C mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C3510u, 2);  /* 0C0C350E mov.b Rm,@Rn */
L_0C0C3510: BLKS(0x0C0C3510u);
	r1 = r14;  /* 0C0C3510 mov Rm,Rn */
	r1 += 0x1Cu;  /* 0C0C3512 add #imm,Rn */
	r4 = r1;  /* 0C0C3514 mov Rm,Rn */
	r5 = 0x0u;  /* 0C0C3516 mov #imm,Rn */
	r6 = 0x24u;  /* 0C0C3518 mov #imm,Rn */
	r1 = 0xC056878u; UPD(0x0C0C351Cu, 6);  /* 0C0C351A mov.l @(disp,pc),Rn */
	IF(0x0C0C351Cu); { u32 t_ = r1; PR = 0x0C0C3520u; IF(0x0C0C351Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C056878, 0x0C056878u, 0x0C0C3520u); }  /* 0C0C351C jsr @Rn */
L_0C0C3520: BLKS(0x0C0C3520u);
	r2 = r14;  /* 0C0C3520 mov Rm,Rn */
	r2 += 0x1Cu;  /* 0C0C3522 add #imm,Rn */
	r1 = 0x0u;  /* 0C0C3524 mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0C3528u, 4);  /* 0C0C3526 mov.l Rm,@Rn */
	r2 = r14;  /* 0C0C3528 mov Rm,Rn */
	r2 += 0x1Cu;  /* 0C0C352A add #imm,Rn */
	r1 = 0xB0000000u; UPD(0x0C0C352Eu, 3);  /* 0C0C352C mov.l @(disp,pc),Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C0C3530u, 1);  /* 0C0C352E mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0C3530 mov Rm,Rn */
	r2 += 0x1Cu;  /* 0C0C3532 add #imm,Rn */
	r1 = R32(r14); UPD(0x0C0C3536u, 3);  /* 0C0C3534 mov.l @Rm,Rn */
	W32(r2 + 0x8u, r1); UPD(0x0C0C3538u, 1);  /* 0C0C3536 mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0C3538 mov Rm,Rn */
	r2 += 0x1Cu;  /* 0C0C353A add #imm,Rn */
	r1 = R32(r14 + 0xCu); UPD(0x0C0C353Eu, 3);  /* 0C0C353C mov.l @(disp,Rm),Rn */
	W32(r2 + 0xCu, r1); UPD(0x0C0C3540u, 1);  /* 0C0C353E mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0C3540 mov Rm,Rn */
	r2 += 0x1Cu;  /* 0C0C3542 add #imm,Rn */
	r1 = 0x0u;  /* 0C0C3544 mov #imm,Rn */
	W32(r2 + 0x10u, r1); UPD(0x0C0C3548u, 4);  /* 0C0C3546 mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0C3548 mov Rm,Rn */
	r2 += 0x1Cu;  /* 0C0C354A add #imm,Rn */
	r1 = 0x1u;  /* 0C0C354C mov #imm,Rn */
	W32(r2 + 0x14u, r1); UPD(0x0C0C3550u, 4);  /* 0C0C354E mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0C3550 mov Rm,Rn */
	r2 += 0x1Cu;  /* 0C0C3552 add #imm,Rn */
	r1 = 0x1u;  /* 0C0C3554 mov #imm,Rn */
	W32(r2 + 0x18u, r1); UPD(0x0C0C3558u, 4);  /* 0C0C3556 mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0C3558 mov Rm,Rn */
	r2 += 0x1Cu;  /* 0C0C355A add #imm,Rn */
	r1 = 0x0u;  /* 0C0C355C mov #imm,Rn */
	W32(r2 + 0x1Cu, r1); UPD(0x0C0C3560u, 4);  /* 0C0C355E mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0C3560 mov Rm,Rn */
	r2 += 0x1Cu;  /* 0C0C3562 add #imm,Rn */
	r1 = 0x4u;  /* 0C0C3564 mov #imm,Rn */
	W32(r2 + 0x20u, r1); UPD(0x0C0C3568u, 4);  /* 0C0C3566 mov.l Rm,@(disp,Rn) */
L_0C0C3568: BLKS(0x0C0C3568u);
	SPIN_SAVE(0C0C3568);
	r1 = 0xA4000128u; UPD(0x0C0C356Au, 1);  /* 0C0C3568 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)RS8(0C0C3568, r1); UPD(0x0C0C356Cu, 1);  /* 0C0C356A mov.b @Rm,Rn */
	r0 &= 0x20u;  /* 0C0C356C and #imm,r0 */
	r1 = r0 & 0xFF;  /* 0C0C356E extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0C3570 tst Rm,Rn */
	if (T) { SPIN_FFD(0C0C3568, 8); UPD(0x0C0C3568u, 6); goto L_0C0C3568; }  /* 0C0C3572 bt */
L_0C0C3574: BLKS(0x0C0C3574u);
	IF(0x0C0C3574u); ;  /* 0C0C3574 nop */
	UPD(0x0C0C3576u, 1);
L_0C0C3576: BLKS(0x0C0C3576u);
	r1 = r14;  /* 0C0C3576 mov Rm,Rn */
	r1 += 0x1Cu;  /* 0C0C3578 add #imm,Rn */
	r4 = r1;  /* 0C0C357A mov Rm,Rn */
	r1 = 0xC0C3360u; UPD(0x0C0C357Eu, 4);  /* 0C0C357C mov.l @(disp,pc),Rn */
	IF(0x0C0C357Eu); { u32 t_ = r1; PR = 0x0C0C3582u; IF(0x0C0C3580u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C3360, 0x0C0C3360u, 0x0C0C3582u); }  /* 0C0C357E jsr @Rn */
L_0C0C3582: BLKS(0x0C0C3582u);
	T = (r0 & r0) == 0;  /* 0C0C3582 tst Rm,Rn */
	if (T) { UPD(0x0C0C3576u, 4); goto L_0C0C3576; }  /* 0C0C3584 bt */
L_0C0C3586: BLKS(0x0C0C3586u);
	IF(0x0C0C3586u); ;  /* 0C0C3586 nop */
	UPD(0x0C0C3588u, 1);
L_0C0C3588: BLKS(0x0C0C3588u);
	r4 = 0x0u;  /* 0C0C3588 mov #imm,Rn */
	r1 = 0xC0C33E0u; UPD(0x0C0C358Cu, 2);  /* 0C0C358A mov.l @(disp,pc),Rn */
	IF(0x0C0C358Cu); { u32 t_ = r1; PR = 0x0C0C3590u; IF(0x0C0C358Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C33E0, 0x0C0C33E0u, 0x0C0C3590u); }  /* 0C0C358C jsr @Rn */
L_0C0C3590: BLKS(0x0C0C3590u);
	T = (r0 & r0) == 0;  /* 0C0C3590 tst Rm,Rn */
	if (!T) { UPD(0x0C0C3588u, 4); goto L_0C0C3588; }  /* 0C0C3592 bf */
L_0C0C3594: BLKS(0x0C0C3594u);
	r2 = 0xB0C00003u; UPD(0x0C0C3596u, 1);  /* 0C0C3594 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C3596 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C359Au, 2);  /* 0C0C3598 mov.b Rm,@Rn */
	r2 = 0xB0C00003u; UPD(0x0C0C359Cu, 1);  /* 0C0C359A mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C0C359C mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C35A0u, 2);  /* 0C0C359E mov.b Rm,@Rn */
	r2 = 0xB0000001u; UPD(0x0C0C35A2u, 1);  /* 0C0C35A0 mov.l @(disp,pc),Rn */
	r1 = 0x70u;  /* 0C0C35A2 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C35A6u, 2);  /* 0C0C35A4 mov.b Rm,@Rn */
	r1 = 0xB0000000u; UPD(0x0C0C35A8u, 1);  /* 0C0C35A6 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C35AAu, 1);  /* 0C0C35A8 mov.b @Rm,Rn */
	r1 = r1 & 0xFF;  /* 0C0C35AA extu.b Rm,Rn */
	W32(r14 + 0x18u, r1); UPD(0x0C0C35AEu, 2);  /* 0C0C35AC mov.l Rm,@(disp,Rn) */
	r2 = 0xB0C00003u; UPD(0x0C0C35B0u, 1);  /* 0C0C35AE mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C35B0 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C35B4u, 2);  /* 0C0C35B2 mov.b Rm,@Rn */
	r0 = R32(r14 + 0x18u); UPD(0x0C0C35B6u, 1);  /* 0C0C35B4 mov.l @(disp,Rm),Rn */
	r0 ^= 0x1u;  /* 0C0C35B6 xor #imm,r0 */
	r0 &= 0x1u;  /* 0C0C35B8 and #imm,r0 */
	r14 += 0x48u;  /* 0C0C35BA add #imm,Rn */
	r15 = r14;  /* 0C0C35BC mov Rm,Rn */
	IF(0x0C0C35BEu); PR = R32(r15); r15 += 4; UPD(0x0C0C35C0u, 5);  /* 0C0C35BE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C35C2u, 1);  /* 0C0C35C0 mov.l @Rm+,Rn */
	IF(0x0C0C35C2u); { u32 t_ = PR; IF(0x0C0C35C4u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C35C2 rts */
}

/* FUN_0c0c35f0 */
void blk_f_0C0C35F0(sh3_t *c)
{
	LOCALS;
L_0C0C35F0: BLKS(0x0C0C35F0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C35F2u, 1);  /* 0C0C35F0 mov.l Rm,@-Rn */
	IF(0x0C0C35F2u); r15 -= 4; W32(r15, PR); UPD(0x0C0C35F4u, 1);  /* 0C0C35F2 sts.l pr,@-Rn */
	r15 += 0xFFFFFFECu;  /* 0C0C35F4 add #imm,Rn */
	r14 = r15;  /* 0C0C35F6 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0C35FAu, 3);  /* 0C0C35F8 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0C35FCu, 1);  /* 0C0C35FA mov.l Rm,@(disp,Rn) */
	r1 = 0xC22857Cu; UPD(0x0C0C35FEu, 1);  /* 0C0C35FC mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0C3600u, 1);  /* 0C0C35FE mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0xCu); UPD(0x0C0C3602u, 1);  /* 0C0C3600 mov.l @(disp,Rm),Rn */
	IF(0x0C0C3602u); MACL = r2 * r1;  /* 0C0C3602 mul.l Rm,Rn */
	IF(0x0C0C3604u); r1 = MACL;  /* 0C0C3604 sts macl,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0C3608u, 4);  /* 0C0C3606 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14); UPD(0x0C0C360Au, 1);  /* 0C0C3608 mov.l @Rm,Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0C360Cu, 1);  /* 0C0C360A mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C0C360C mov #imm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0C3610u, 2);  /* 0C0C360E mov.l Rm,@(disp,Rn) */
L_0C0C3610: BLKS(0x0C0C3610u);
	r1 = 0xC22857Cu; UPD(0x0C0C3612u, 1);  /* 0C0C3610 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C0C3614u, 1);  /* 0C0C3612 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0xCu); UPD(0x0C0C3616u, 1);  /* 0C0C3614 mov.l @(disp,Rm),Rn */
	T = (s32)r2 >= (s32)r1;  /* 0C0C3616 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C0C3620u, 4); goto L_0C0C3620; }  /* 0C0C3618 bf */
L_0C0C361A: BLKS(0x0C0C361Au);
	{ IF(0x0C0C361Cu); ; /* slot nop */ UPD(0x0C0C3660u, 3); goto L_0C0C3660; }  /* 0C0C361A bra */
L_0C0C3620: BLKS(0x0C0C3620u);
	r2 = R32(r14 + 0xCu); UPD(0x0C0C3622u, 1);  /* 0C0C3620 mov.l @(disp,Rm),Rn */
	r3 = R32(r14 + 0x8u); UPD(0x0C0C3624u, 1);  /* 0C0C3622 mov.l @(disp,Rm),Rn */
	r1 = 0xC22857Cu; UPD(0x0C0C3626u, 1);  /* 0C0C3624 mov.l @(disp,pc),Rn */
	r1 = R32(r1 + 0x8u); UPD(0x0C0C3628u, 1);  /* 0C0C3626 mov.l @(disp,Rm),Rn */
	r4 = r2;  /* 0C0C3628 mov Rm,Rn */
	r5 = r3;  /* 0C0C362A mov Rm,Rn */
	r6 = 0x0u;  /* 0C0C362C mov #imm,Rn */
	r7 = r1;  /* 0C0C362E mov Rm,Rn */
	r1 = 0xC0C3420u; UPD(0x0C0C3632u, 5);  /* 0C0C3630 mov.l @(disp,pc),Rn */
	IF(0x0C0C3632u); { u32 t_ = r1; PR = 0x0C0C3636u; IF(0x0C0C3634u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C3420, 0x0C0C3420u, 0x0C0C3636u); }  /* 0C0C3632 jsr @Rn */
L_0C0C3636: BLKS(0x0C0C3636u);
	T = (r0 & r0) == 0;  /* 0C0C3636 tst Rm,Rn */
	if (!T) { UPD(0x0C0C3640u, 4); goto L_0C0C3640; }  /* 0C0C3638 bf */
L_0C0C363A: BLKS(0x0C0C363Au);
	{ IF(0x0C0C363Cu); ; /* slot nop */ UPD(0x0C0C3660u, 3); goto L_0C0C3660; }  /* 0C0C363A bra */
L_0C0C3640: BLKS(0x0C0C3640u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0C3642u, 1);  /* 0C0C3640 mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C0C3642 add #imm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0C3646u, 2);  /* 0C0C3644 mov.l Rm,@(disp,Rn) */
	r1 = 0xC22857Cu; UPD(0x0C0C3648u, 1);  /* 0C0C3646 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0C364Au, 1);  /* 0C0C3648 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x8u); UPD(0x0C0C364Cu, 1);  /* 0C0C364A mov.l @(disp,Rm),Rn */
	r1 += r2;  /* 0C0C364C add Rm,Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0C3650u, 2);  /* 0C0C364E mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x8u); UPD(0x0C0C3652u, 1);  /* 0C0C3650 mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C0C3652 add #imm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0C3656u, 2);  /* 0C0C3654 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0C3658u); ; /* slot nop */ UPD(0x0C0C3610u, 3); goto L_0C0C3610; }  /* 0C0C3656 bra */
L_0C0C3660: BLKS(0x0C0C3660u);
	r1 = 0xC22857Cu; UPD(0x0C0C3662u, 1);  /* 0C0C3660 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C0C3664u, 1);  /* 0C0C3662 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0xCu); UPD(0x0C0C3666u, 1);  /* 0C0C3664 mov.l @(disp,Rm),Rn */
	T = (s32)r2 >= (s32)r1;  /* 0C0C3666 cmp/ge Rm,Rn */
	IF(0x0C0C3668u); r1 = T;  /* 0C0C3668 movt Rn */
	r0 = r1;  /* 0C0C366A mov Rm,Rn */
	r14 += 0x14u;  /* 0C0C366C add #imm,Rn */
	r15 = r14;  /* 0C0C366E mov Rm,Rn */
	IF(0x0C0C3670u); PR = R32(r15); r15 += 4; UPD(0x0C0C3672u, 6);  /* 0C0C3670 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C3674u, 1);  /* 0C0C3672 mov.l @Rm+,Rn */
	IF(0x0C0C3674u); { u32 t_ = PR; IF(0x0C0C3676u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C3674 rts */
}

void blk_f_0C0C3680(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C0C376C);
L_0C0C3680: BLKS(0x0C0C3680u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C3682u, 1);  /* 0C0C3680 mov.l Rm,@-Rn */
	IF(0x0C0C3682u); r15 -= 4; W32(r15, PR); UPD(0x0C0C3684u, 1);  /* 0C0C3682 sts.l pr,@-Rn */
	r15 += 0xFFFFFFC4u;  /* 0C0C3684 add #imm,Rn */
	r14 = r15;  /* 0C0C3686 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0C368Au, 3);  /* 0C0C3688 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0C368Cu, 1);  /* 0C0C368A mov.l Rm,@(disp,Rn) */
	r2 = 0xB0C00003u; UPD(0x0C0C368Eu, 1);  /* 0C0C368C mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C0C368E mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C3692u, 2);  /* 0C0C3690 mov.b Rm,@Rn */
	r2 = 0xB0000001u; UPD(0x0C0C3694u, 1);  /* 0C0C3692 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFF80u;  /* 0C0C3694 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C3698u, 2);  /* 0C0C3696 mov.b Rm,@Rn */
	r1 = 0xC22857Cu; UPD(0x0C0C369Au, 1);  /* 0C0C3698 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0C369Cu, 1);  /* 0C0C369A mov.l @Rm,Rn */
	W32(r14 + 0x38u, r1); UPD(0x0C0C369Eu, 1);  /* 0C0C369C mov.l Rm,@(disp,Rn) */
	r1 = 0x1u;  /* 0C0C369E mov #imm,Rn */
	r0 = R32(r14 + 0x38u); UPD(0x0C0C36A2u, 2);  /* 0C0C36A0 mov.l @(disp,Rm),Rn */
	T = r0 > r1;  /* 0C0C36A2 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0C36ACu, 4); goto L_0C0C36AC; }  /* 0C0C36A4 bf */
L_0C0C36A6: BLKS(0x0C0C36A6u);
	r0 = R32(r14 + 0x38u); UPD(0x0C0C36A8u, 1);  /* 0C0C36A6 mov.l @(disp,Rm),Rn */
	T = r0 == 0x2u;  /* 0C0C36A8 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0C36D0u, 4); goto L_0C0C36D0; }  /* 0C0C36AA bt */
L_0C0C36AC: BLKS(0x0C0C36ACu);
	r2 = 0xB0000002u; UPD(0x0C0C36AEu, 1);  /* 0C0C36AC mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C36AE mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C36B2u, 2);  /* 0C0C36B0 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0C36B4u, 1);  /* 0C0C36B2 mov.l @(disp,pc),Rn */
	r1 = r14;  /* 0C0C36B4 mov Rm,Rn */
	r1 += 0x7u;  /* 0C0C36B6 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C36BAu, 3);  /* 0C0C36B8 mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0C36BCu, 1);  /* 0C0C36BA mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0C36BEu, 1);  /* 0C0C36BC mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C36C0u, 1);  /* 0C0C36BE mov.l @(disp,Rm),Rn */
	IF(0x0C0C36C0u); r1 >>= 8;  /* 0C0C36C0 shlr8 Rn */
	W8(r2, r1); UPD(0x0C0C36C4u, 2);  /* 0C0C36C2 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0C36C6u, 1);  /* 0C0C36C4 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C36C8u, 1);  /* 0C0C36C6 mov.l @(disp,Rm),Rn */
	IF(0x0C0C36C8u); r1 >>= 16;  /* 0C0C36C8 shlr16 Rn */
	W8(r2, r1); UPD(0x0C0C36CCu, 2);  /* 0C0C36CA mov.b Rm,@Rn */
	{ IF(0x0C0C36CEu); ; /* slot nop */ UPD(0x0C0C36EEu, 3); goto L_0C0C36EE; }  /* 0C0C36CC bra */
L_0C0C36D0: BLKS(0x0C0C36D0u);
	r2 = 0xB0000002u; UPD(0x0C0C36D2u, 1);  /* 0C0C36D0 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C36D2 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C36D6u, 2);  /* 0C0C36D4 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0C36D8u, 1);  /* 0C0C36D6 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C36D8 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C36DCu, 2);  /* 0C0C36DA mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0C36DEu, 1);  /* 0C0C36DC mov.l @(disp,pc),Rn */
	r1 = r14;  /* 0C0C36DE mov Rm,Rn */
	r1 += 0x7u;  /* 0C0C36E0 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C36E4u, 3);  /* 0C0C36E2 mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0C36E6u, 1);  /* 0C0C36E4 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0C36E8u, 1);  /* 0C0C36E6 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C36EAu, 1);  /* 0C0C36E8 mov.l @(disp,Rm),Rn */
	IF(0x0C0C36EAu); r1 >>= 8;  /* 0C0C36EA shlr8 Rn */
	W8(r2, r1); UPD(0x0C0C36EEu, 2);  /* 0C0C36EC mov.b Rm,@Rn */
L_0C0C36EE: BLKS(0x0C0C36EEu);
	r1 = r14;  /* 0C0C36EE mov Rm,Rn */
	r1 += 0x14u;  /* 0C0C36F0 add #imm,Rn */
	r4 = r1;  /* 0C0C36F2 mov Rm,Rn */
	r5 = 0x0u;  /* 0C0C36F4 mov #imm,Rn */
	r6 = 0x24u;  /* 0C0C36F6 mov #imm,Rn */
	r1 = 0xC056878u; UPD(0x0C0C36FAu, 6);  /* 0C0C36F8 mov.l @(disp,pc),Rn */
	IF(0x0C0C36FAu); { u32 t_ = r1; PR = 0x0C0C36FEu; IF(0x0C0C36FCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C056878, 0x0C056878u, 0x0C0C36FEu); }  /* 0C0C36FA jsr @Rn */
L_0C0C36FE: BLKS(0x0C0C36FEu);
	r2 = r14;  /* 0C0C36FE mov Rm,Rn */
	r2 += 0x14u;  /* 0C0C3700 add #imm,Rn */
	r1 = 0x0u;  /* 0C0C3702 mov #imm,Rn */
	W32(r2, r1); UPD(0x0C0C3706u, 4);  /* 0C0C3704 mov.l Rm,@Rn */
	r2 = r14;  /* 0C0C3706 mov Rm,Rn */
	r2 += 0x14u;  /* 0C0C3708 add #imm,Rn */
	r1 = R32(r14); UPD(0x0C0C370Cu, 3);  /* 0C0C370A mov.l @Rm,Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C0C370Eu, 1);  /* 0C0C370C mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0C370E mov Rm,Rn */
	r2 += 0x14u;  /* 0C0C3710 add #imm,Rn */
	r1 = 0xB0000000u; UPD(0x0C0C3714u, 3);  /* 0C0C3712 mov.l @(disp,pc),Rn */
	W32(r2 + 0x8u, r1); UPD(0x0C0C3716u, 1);  /* 0C0C3714 mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0C3716 mov Rm,Rn */
	r2 += 0x14u;  /* 0C0C3718 add #imm,Rn */
	r1 = 0xC22857Cu; UPD(0x0C0C371Cu, 3);  /* 0C0C371A mov.l @(disp,pc),Rn */
	r1 = R32(r1 + 0x8u); UPD(0x0C0C371Eu, 1);  /* 0C0C371C mov.l @(disp,Rm),Rn */
	W32(r2 + 0xCu, r1); UPD(0x0C0C3720u, 1);  /* 0C0C371E mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0C3720 mov Rm,Rn */
	r2 += 0x14u;  /* 0C0C3722 add #imm,Rn */
	r1 = 0x1u;  /* 0C0C3724 mov #imm,Rn */
	W32(r2 + 0x10u, r1); UPD(0x0C0C3728u, 4);  /* 0C0C3726 mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0C3728 mov Rm,Rn */
	r2 += 0x14u;  /* 0C0C372A add #imm,Rn */
	r1 = 0x0u;  /* 0C0C372C mov #imm,Rn */
	W32(r2 + 0x14u, r1); UPD(0x0C0C3730u, 4);  /* 0C0C372E mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0C3730 mov Rm,Rn */
	r2 += 0x14u;  /* 0C0C3732 add #imm,Rn */
	r1 = 0x1u;  /* 0C0C3734 mov #imm,Rn */
	W32(r2 + 0x18u, r1); UPD(0x0C0C3738u, 4);  /* 0C0C3736 mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0C3738 mov Rm,Rn */
	r2 += 0x14u;  /* 0C0C373A add #imm,Rn */
	r1 = 0x0u;  /* 0C0C373C mov #imm,Rn */
	W32(r2 + 0x1Cu, r1); UPD(0x0C0C3740u, 4);  /* 0C0C373E mov.l Rm,@(disp,Rn) */
	r2 = r14;  /* 0C0C3740 mov Rm,Rn */
	r2 += 0x14u;  /* 0C0C3742 add #imm,Rn */
	r1 = 0x4u;  /* 0C0C3744 mov #imm,Rn */
	W32(r2 + 0x20u, r1); UPD(0x0C0C3748u, 4);  /* 0C0C3746 mov.l Rm,@(disp,Rn) */
L_0C0C3748: BLKS(0x0C0C3748u);
	r1 = r14;  /* 0C0C3748 mov Rm,Rn */
	r1 += 0x14u;  /* 0C0C374A add #imm,Rn */
	r4 = r1;  /* 0C0C374C mov Rm,Rn */
	r1 = 0xC0C3360u; UPD(0x0C0C3750u, 4);  /* 0C0C374E mov.l @(disp,pc),Rn */
	IF(0x0C0C3750u); { u32 t_ = r1; PR = 0x0C0C3754u; IF(0x0C0C3752u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C3360, 0x0C0C3360u, 0x0C0C3754u); }  /* 0C0C3750 jsr @Rn */
L_0C0C3754: BLKS(0x0C0C3754u);
	T = (r0 & r0) == 0;  /* 0C0C3754 tst Rm,Rn */
	if (T) { UPD(0x0C0C3748u, 4); goto L_0C0C3748; }  /* 0C0C3756 bt */
L_0C0C3758: BLKS(0x0C0C3758u);
	IF(0x0C0C3758u); ;  /* 0C0C3758 nop */
	UPD(0x0C0C375Au, 1);
L_0C0C375A: BLKS(0x0C0C375Au);
	r4 = 0x0u;  /* 0C0C375A mov #imm,Rn */
	r1 = 0xC0C33E0u; UPD(0x0C0C375Eu, 2);  /* 0C0C375C mov.l @(disp,pc),Rn */
	IF(0x0C0C375Eu); { u32 t_ = r1; PR = 0x0C0C3762u; IF(0x0C0C3760u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C33E0, 0x0C0C33E0u, 0x0C0C3762u); }  /* 0C0C375E jsr @Rn */
L_0C0C3762: BLKS(0x0C0C3762u);
	T = (r0 & r0) == 0;  /* 0C0C3762 tst Rm,Rn */
	if (!T) { UPD(0x0C0C375Au, 4); goto L_0C0C375A; }  /* 0C0C3764 bf */
L_0C0C3766: BLKS(0x0C0C3766u);
	r2 = 0xB0000001u; UPD(0x0C0C3768u, 1);  /* 0C0C3766 mov.l @(disp,pc),Rn */
	r1 = 0x10u;  /* 0C0C3768 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C376Cu, 2);  /* 0C0C376A mov.b Rm,@Rn */
L_0C0C376C: BLKS(0x0C0C376Cu);
	SPIN_SAVE(0C0C376C);
	r1 = 0xA4000128u; UPD(0x0C0C376Eu, 1);  /* 0C0C376C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)RS8(0C0C376C, r1); UPD(0x0C0C3770u, 1);  /* 0C0C376E mov.b @Rm,Rn */
	r0 &= 0x20u;  /* 0C0C3770 and #imm,r0 */
	r1 = r0 & 0xFF;  /* 0C0C3772 extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0C3774 tst Rm,Rn */
	if (T) { SPIN_FFD(0C0C376C, 8); UPD(0x0C0C376Cu, 6); goto L_0C0C376C; }  /* 0C0C3776 bt */
L_0C0C3778: BLKS(0x0C0C3778u);
	r2 = 0xB0C00003u; UPD(0x0C0C377Au, 1);  /* 0C0C3778 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C377A mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C377Eu, 2);  /* 0C0C377C mov.b Rm,@Rn */
	r2 = 0xB0C00003u; UPD(0x0C0C3780u, 1);  /* 0C0C377E mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C0C3780 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C3784u, 2);  /* 0C0C3782 mov.b Rm,@Rn */
	r2 = 0xB0000001u; UPD(0x0C0C3786u, 1);  /* 0C0C3784 mov.l @(disp,pc),Rn */
	r1 = 0x70u;  /* 0C0C3786 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C378Au, 2);  /* 0C0C3788 mov.b Rm,@Rn */
	r1 = 0xB0000000u; UPD(0x0C0C378Cu, 1);  /* 0C0C378A mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C378Eu, 1);  /* 0C0C378C mov.b @Rm,Rn */
	r1 = r1 & 0xFF;  /* 0C0C378E extu.b Rm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0C3792u, 2);  /* 0C0C3790 mov.l Rm,@(disp,Rn) */
	r2 = 0xB0C00003u; UPD(0x0C0C3794u, 1);  /* 0C0C3792 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C3794 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C3798u, 2);  /* 0C0C3796 mov.b Rm,@Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0C379Au, 1);  /* 0C0C3798 mov.l @(disp,Rm),Rn */
	r0 ^= 0x1u;  /* 0C0C379A xor #imm,r0 */
	r0 &= 0x1u;  /* 0C0C379C and #imm,r0 */
	r14 += 0x3Cu;  /* 0C0C379E add #imm,Rn */
	r15 = r14;  /* 0C0C37A0 mov Rm,Rn */
	IF(0x0C0C37A2u); PR = R32(r15); r15 += 4; UPD(0x0C0C37A4u, 5);  /* 0C0C37A2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C37A6u, 1);  /* 0C0C37A4 mov.l @Rm+,Rn */
	IF(0x0C0C37A6u); { u32 t_ = PR; IF(0x0C0C37A8u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C37A6 rts */
}

void blk_f_0C0C3860(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C0C38D8);
L_0C0C3860: BLKS(0x0C0C3860u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C3862u, 1);  /* 0C0C3860 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0C3862 add #imm,Rn */
	r14 = r15;  /* 0C0C3864 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0C3868u, 3);  /* 0C0C3866 mov.l Rm,@Rn */
	r1 = 0xC22857Cu; UPD(0x0C0C386Au, 1);  /* 0C0C3868 mov.l @(disp,pc),Rn */
	r2 = R32(r14); UPD(0x0C0C386Cu, 1);  /* 0C0C386A mov.l @Rm,Rn */
	r1 = R32(r1 + 0xCu); UPD(0x0C0C386Eu, 1);  /* 0C0C386C mov.l @(disp,Rm),Rn */
	IF(0x0C0C386Eu); MACL = r2 * r1;  /* 0C0C386E mul.l Rm,Rn */
	IF(0x0C0C3870u); r1 = MACL;  /* 0C0C3870 sts macl,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0C3874u, 4);  /* 0C0C3872 mov.l Rm,@(disp,Rn) */
	r2 = 0xB0C00003u; UPD(0x0C0C3876u, 1);  /* 0C0C3874 mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C0C3876 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C387Au, 2);  /* 0C0C3878 mov.b Rm,@Rn */
	r2 = 0xB0000001u; UPD(0x0C0C387Cu, 1);  /* 0C0C387A mov.l @(disp,pc),Rn */
	r1 = 0x60u;  /* 0C0C387C mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C3880u, 2);  /* 0C0C387E mov.b Rm,@Rn */
	r1 = 0xC22857Cu; UPD(0x0C0C3882u, 1);  /* 0C0C3880 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0C3884u, 1);  /* 0C0C3882 mov.l @Rm,Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0C3886u, 1);  /* 0C0C3884 mov.l Rm,@(disp,Rn) */
	r1 = 0x1u;  /* 0C0C3886 mov #imm,Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C0C388Au, 2);  /* 0C0C3888 mov.l @(disp,Rm),Rn */
	T = r0 > r1;  /* 0C0C388A cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0C3894u, 4); goto L_0C0C3894; }  /* 0C0C388C bf */
L_0C0C388E: BLKS(0x0C0C388Eu);
	r0 = R32(r14 + 0xCu); UPD(0x0C0C3890u, 1);  /* 0C0C388E mov.l @(disp,Rm),Rn */
	T = r0 == 0x2u;  /* 0C0C3890 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0C38C0u, 4); goto L_0C0C38C0; }  /* 0C0C3892 bt */
L_0C0C3894: BLKS(0x0C0C3894u);
	r2 = 0xB0000002u; UPD(0x0C0C3896u, 1);  /* 0C0C3894 mov.l @(disp,pc),Rn */
	r1 = r14;  /* 0C0C3896 mov Rm,Rn */
	r1 += 0x7u;  /* 0C0C3898 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C389Cu, 3);  /* 0C0C389A mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0C389Eu, 1);  /* 0C0C389C mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0C38A0u, 1);  /* 0C0C389E mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C38A2u, 1);  /* 0C0C38A0 mov.l @(disp,Rm),Rn */
	IF(0x0C0C38A2u); r1 >>= 8;  /* 0C0C38A2 shlr8 Rn */
	W8(r2, r1); UPD(0x0C0C38A6u, 2);  /* 0C0C38A4 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0C38A8u, 1);  /* 0C0C38A6 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C38AAu, 1);  /* 0C0C38A8 mov.l @(disp,Rm),Rn */
	IF(0x0C0C38AAu); r1 >>= 16;  /* 0C0C38AA shlr16 Rn */
	W8(r2, r1); UPD(0x0C0C38AEu, 2);  /* 0C0C38AC mov.b Rm,@Rn */
	{ IF(0x0C0C38B0u); ; /* slot nop */ UPD(0x0C0C38D2u, 3); goto L_0C0C38D2; }  /* 0C0C38AE bra */
L_0C0C38C0: BLKS(0x0C0C38C0u);
	r2 = 0xB0000002u; UPD(0x0C0C38C2u, 1);  /* 0C0C38C0 mov.l @(disp,pc),Rn */
	r1 = r14;  /* 0C0C38C2 mov Rm,Rn */
	r1 += 0x7u;  /* 0C0C38C4 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C38C8u, 3);  /* 0C0C38C6 mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C0C38CAu, 1);  /* 0C0C38C8 mov.b Rm,@Rn */
	r2 = 0xB0000002u; UPD(0x0C0C38CCu, 1);  /* 0C0C38CA mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C38CEu, 1);  /* 0C0C38CC mov.l @(disp,Rm),Rn */
	IF(0x0C0C38CEu); r1 >>= 8;  /* 0C0C38CE shlr8 Rn */
	W8(r2, r1); UPD(0x0C0C38D2u, 2);  /* 0C0C38D0 mov.b Rm,@Rn */
L_0C0C38D2: BLKS(0x0C0C38D2u);
	r2 = 0xB0000001u; UPD(0x0C0C38D4u, 1);  /* 0C0C38D2 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFD0u;  /* 0C0C38D4 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C38D8u, 2);  /* 0C0C38D6 mov.b Rm,@Rn */
L_0C0C38D8: BLKS(0x0C0C38D8u);
	SPIN_SAVE(0C0C38D8);
	r1 = 0xA4000128u; UPD(0x0C0C38DAu, 1);  /* 0C0C38D8 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)RS8(0C0C38D8, r1); UPD(0x0C0C38DCu, 1);  /* 0C0C38DA mov.b @Rm,Rn */
	r0 &= 0x20u;  /* 0C0C38DC and #imm,r0 */
	r1 = r0 & 0xFF;  /* 0C0C38DE extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0C38E0 tst Rm,Rn */
	if (T) { SPIN_FFD(0C0C38D8, 8); UPD(0x0C0C38D8u, 6); goto L_0C0C38D8; }  /* 0C0C38E2 bt */
L_0C0C38E4: BLKS(0x0C0C38E4u);
	r2 = 0xB0C00003u; UPD(0x0C0C38E6u, 1);  /* 0C0C38E4 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C38E6 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C38EAu, 2);  /* 0C0C38E8 mov.b Rm,@Rn */
	r2 = 0xB0C00003u; UPD(0x0C0C38ECu, 1);  /* 0C0C38EA mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C0C38EC mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C38F0u, 2);  /* 0C0C38EE mov.b Rm,@Rn */
	r2 = 0xB0000001u; UPD(0x0C0C38F2u, 1);  /* 0C0C38F0 mov.l @(disp,pc),Rn */
	r1 = 0x70u;  /* 0C0C38F2 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C38F6u, 2);  /* 0C0C38F4 mov.b Rm,@Rn */
	r1 = 0xB0000000u; UPD(0x0C0C38F8u, 1);  /* 0C0C38F6 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C38FAu, 1);  /* 0C0C38F8 mov.b @Rm,Rn */
	r1 = r1 & 0xFF;  /* 0C0C38FA extu.b Rm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0C38FEu, 2);  /* 0C0C38FC mov.l Rm,@(disp,Rn) */
	r2 = 0xB0C00003u; UPD(0x0C0C3900u, 1);  /* 0C0C38FE mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0C3900 mov #imm,Rn */
	W8(r2, r1); UPD(0x0C0C3904u, 2);  /* 0C0C3902 mov.b Rm,@Rn */
	r0 = R32(r14 + 0x8u); UPD(0x0C0C3906u, 1);  /* 0C0C3904 mov.l @(disp,Rm),Rn */
	r0 ^= 0x1u;  /* 0C0C3906 xor #imm,r0 */
	r0 &= 0x1u;  /* 0C0C3908 and #imm,r0 */
	r14 += 0x10u;  /* 0C0C390A add #imm,Rn */
	r15 = r14;  /* 0C0C390C mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C3910u, 5);  /* 0C0C390E mov.l @Rm+,Rn */
	IF(0x0C0C3910u); { u32 t_ = PR; IF(0x0C0C3912u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C3910 rts */
}

/* FUN_0c0c39a0 */
void blk_f_0C0C39A0(sh3_t *c)
{
	LOCALS;
L_0C0C39A0: BLKS(0x0C0C39A0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0C39A2u, 1);  /* 0C0C39A0 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFECu;  /* 0C0C39A2 add #imm,Rn */
	r14 = r15;  /* 0C0C39A4 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0C39A8u, 3);  /* 0C0C39A6 mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C0C39AAu, 1);  /* 0C0C39A8 mov.l @Rm,Rn */
	r1 = R32(r1); UPD(0x0C0C39ACu, 1);  /* 0C0C39AA mov.l @Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0C39AEu, 1);  /* 0C0C39AC mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C39B0u, 1);  /* 0C0C39AE mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C0C39B0 add #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0C39B4u, 2);  /* 0C0C39B2 mov.l Rm,@(disp,Rn) */
L_0C0C39B4: BLKS(0x0C0C39B4u);
	r1 = 0xC22857Cu; UPD(0x0C0C39B6u, 1);  /* 0C0C39B4 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0C39B8u, 1);  /* 0C0C39B6 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x4u); UPD(0x0C0C39BAu, 1);  /* 0C0C39B8 mov.l @(disp,Rm),Rn */
	T = (s32)r2 >= (s32)r1;  /* 0C0C39BA cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C0C39D0u, 4); goto L_0C0C39D0; }  /* 0C0C39BC bf */
L_0C0C39BE: BLKS(0x0C0C39BEu);
	{ IF(0x0C0C39C0u); ; /* slot nop */ UPD(0x0C0C3A20u, 3); goto L_0C0C3A20; }  /* 0C0C39BE bra */
L_0C0C39D0: BLKS(0x0C0C39D0u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0C39D2u, 1);  /* 0C0C39D0 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0C39D4u, 1);  /* 0C0C39D2 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x10u); UPD(0x0C0C39D6u, 1);  /* 0C0C39D4 mov.l @(disp,Rm),Rn */
	IF(0x0C0C39D6u); T = (s32)r1 >= 0;  /* 0C0C39D6 cmp/pz Rn */
	if (T) { UPD(0x0C0C39E0u, 4); goto L_0C0C39E0; }  /* 0C0C39D8 bt */
L_0C0C39DA: BLKS(0x0C0C39DAu);
	r1 = R32(r14 + 0x10u); UPD(0x0C0C39DCu, 1);  /* 0C0C39DA mov.l @(disp,Rm),Rn */
	r1 += 0x7u;  /* 0C0C39DC add #imm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0C39E0u, 2);  /* 0C0C39DE mov.l Rm,@(disp,Rn) */
L_0C0C39E0: BLKS(0x0C0C39E0u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0C39E2u, 1);  /* 0C0C39E0 mov.l @(disp,Rm),Rn */
	IF(0x0C0C39E2u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0C39E2 shar Rn */
	IF(0x0C0C39E4u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0C39E4 shar Rn */
	IF(0x0C0C39E6u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0C39E6 shar Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0C39EAu, 4);  /* 0C0C39E8 mov.l Rm,@(disp,Rn) */
	r0 = R32(r14 + 0x4u); UPD(0x0C0C39ECu, 1);  /* 0C0C39EA mov.l @(disp,Rm),Rn */
	r0 &= 0x7u;  /* 0C0C39EC and #imm,r0 */
	W32(r14 + 0xCu, r0); UPD(0x0C0C39F0u, 2);  /* 0C0C39EE mov.l Rm,@(disp,Rn) */
	r1 = 0xC2074DCu; UPD(0x0C0C39F2u, 1);  /* 0C0C39F0 mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C0C39F4u, 1);  /* 0C0C39F2 mov.l @Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0C39F6u, 1);  /* 0C0C39F4 mov.l @(disp,Rm),Rn */
	r1 += r2;  /* 0C0C39F6 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0C39FAu, 2);  /* 0C0C39F8 mov.b @Rm,Rn */
	r2 = r1 & 0xFF;  /* 0C0C39FA extu.b Rm,Rn */
	r1 = R32(r14 + 0xCu); UPD(0x0C0C39FEu, 2);  /* 0C0C39FC mov.l @(disp,Rm),Rn */
	r1 = 0u - r1;  /* 0C0C39FE neg Rm,Rn */
	r0 = r2;  /* 0C0C3A00 mov Rm,Rn */
	IF(0x0C0C3A02u); ARG0(0x401Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0C3A02 shad Rm,Rn */
	r0 &= 0x1u;  /* 0C0C3A04 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0C3A06 tst Rm,Rn */
	if (T) { UPD(0x0C0C3A10u, 8); goto L_0C0C3A10; }  /* 0C0C3A08 bt */
L_0C0C3A0A: BLKS(0x0C0C3A0Au);
	{ IF(0x0C0C3A0Cu); ; /* slot nop */ UPD(0x0C0C3A20u, 3); goto L_0C0C3A20; }  /* 0C0C3A0A bra */
L_0C0C3A10: BLKS(0x0C0C3A10u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0C3A12u, 1);  /* 0C0C3A10 mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C0C3A12 add #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0C3A16u, 2);  /* 0C0C3A14 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0C3A18u); ; /* slot nop */ UPD(0x0C0C39B4u, 3); goto L_0C0C39B4; }  /* 0C0C3A16 bra */
L_0C0C3A20: BLKS(0x0C0C3A20u);
	r2 = R32(r14); UPD(0x0C0C3A22u, 1);  /* 0C0C3A20 mov.l @Rm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0C3A24u, 1);  /* 0C0C3A22 mov.l @(disp,Rm),Rn */
	W32(r2, r1); UPD(0x0C0C3A26u, 1);  /* 0C0C3A24 mov.l Rm,@Rn */
	r1 = 0xC22857Cu; UPD(0x0C0C3A28u, 1);  /* 0C0C3A26 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0C3A2Au, 1);  /* 0C0C3A28 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x4u); UPD(0x0C0C3A2Cu, 1);  /* 0C0C3A2A mov.l @(disp,Rm),Rn */
	T = (s32)r1 > (s32)r2;  /* 0C0C3A2C cmp/gt Rm,Rn */
	IF(0x0C0C3A2Eu); r1 = T;  /* 0C0C3A2E movt Rn */
	r0 = r1;  /* 0C0C3A30 mov Rm,Rn */
	r14 += 0x14u;  /* 0C0C3A32 add #imm,Rn */
	r15 = r14;  /* 0C0C3A34 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0C3A38u, 6);  /* 0C0C3A36 mov.l @Rm+,Rn */
	IF(0x0C0C3A38u); { u32 t_ = PR; IF(0x0C0C3A3Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0C3A38 rts */
}

void blk_f_0C172F64(sh3_t *c)
{
	LOCALS;
L_0C172F64: BLKS(0x0C172F64u);
	IF(0x0C172F64u); { u32 tv_ = (r12 + 0x0C172F68u); u32 t_ = PHYS(tv_); W8(r12 + 0x8u, r0); /* slot mov.b r0,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C172F64 braf Rn */
}

void blk_f_0C1941B8(sh3_t *c)
{
	LOCALS;
L_0C1941B8: BLKS(0x0C1941B8u);
	IF(0x0C1941B8u); { u32 t_ = PR; r8 = 0xECEC2727u; /* slot mov.l @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1941B8 rts */
}

void blk_f_0C194212(sh3_t *c)
{
	LOCALS;
L_0C194212: BLKS(0x0C194212u);
	IF(0x0C194212u); { u32 t_ = PR; r8 = 0xECEC2727u; /* slot mov.l @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C194212 rts */
}

void blk_f_0C19426C(sh3_t *c)
{
	LOCALS;
L_0C19426C: BLKS(0x0C19426Cu);
	IF(0x0C19426Cu); { u32 t_ = PR; r8 = 0x93850u; /* slot mov.l @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C19426C rts */
}


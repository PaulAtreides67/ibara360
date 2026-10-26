#include "recomp.h"
#include "recomp_funcs.h"

/* arr_death_drops */
void f_0C7C3D24(sh3_t *c)
{
	LOCALS;
L_0C7C3D24: BLKS(0x0C7C3D24u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3D26u, 1);  /* 0C7C3D24 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3D28u, 1);  /* 0C7C3D26 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3D2Au, 1);  /* 0C7C3D28 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3D2Cu, 1);  /* 0C7C3D2A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3D2Eu, 1);  /* 0C7C3D2C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3D30u, 1);  /* 0C7C3D2E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3D32u, 1);  /* 0C7C3D30 mov.l Rm,@-Rn */
	IF(0x0C7C3D32u); r15 -= 4; W32(r15, PR); UPD(0x0C7C3D34u, 1);  /* 0C7C3D32 sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C3D36u, 1);  /* 0C7C3D34 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C7C3D36 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C3D3Au, 2);  /* 0C7C3D38 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C3D3A tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C3DDCu, 4); goto L_0C7C3DDC; } goto L_0C7C3D40; }  /* 0C7C3D3C bf/s */
L_0C7C3D40: BLKS(0x0C7C3D40u);
	r14 = (u32)(s32)(s16)r4;  /* 0C7C3D40 exts.w Rm,Rn */
	T = r14 > r1;  /* 0C7C3D42 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C7C3DDCu, 6); goto L_0C7C3DDC; }  /* 0C7C3D44 bt */
L_0C7C3D46: BLKS(0x0C7C3D46u);
	r1 = 0x280u; UPD(0x0C7C3D48u, 1);  /* 0C7C3D46 mov.w @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r14 * (s32)(s16)r1);  /* 0C7C3D48 muls.w Rm,Rn */
	r1 = 0xC2837A4u; UPD(0x0C7C3D4Cu, 3);  /* 0C7C3D4A mov.l @(disp,pc),Rn */
	IF(0x0C7C3D4Cu); r11 = MACL;  /* 0C7C3D4C sts macl,Rn */
	r1 += r11;  /* 0C7C3D4E add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C3D52u, 3);  /* 0C7C3D50 mov.l @Rm,Rn */
	W32(r15 + 0x8u, r1); UPD(0x0C7C3D54u, 1);  /* 0C7C3D52 mov.l Rm,@(disp,Rn) */
	r1 = 0xC2837A8u; UPD(0x0C7C3D56u, 1);  /* 0C7C3D54 mov.l @(disp,pc),Rn */
	r1 += r11;  /* 0C7C3D56 add Rm,Rn */
	r10 = R32(r1); UPD(0x0C7C3D5Au, 2);  /* 0C7C3D58 mov.l @Rm,Rn */
	r1 = 0x173FFFFu; UPD(0x0C7C3D5Cu, 1);  /* 0C7C3D5A mov.l @(disp,pc),Rn */
	T = (s32)r10 > (s32)r1;  /* 0C7C3D5C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C7C3DF2u, 4); goto L_0C7C3DF2; }  /* 0C7C3D5E bf */
L_0C7C3D60: BLKS(0x0C7C3D60u);
	r1 = 0x28C0000u; UPD(0x0C7C3D62u, 1);  /* 0C7C3D60 mov.l @(disp,pc),Rn */
	T = (s32)r10 > (s32)r1;  /* 0C7C3D62 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C7C3D68u, 4); goto L_0C7C3D68; }  /* 0C7C3D64 bf */
L_0C7C3D66: BLKS(0x0C7C3D66u);
	r10 = r1;  /* 0C7C3D66 mov Rm,Rn */
	UPD(0x0C7C3D68u, 1);
L_0C7C3D68: BLKS(0x0C7C3D68u);
	r12 = 0xC7C2F44u; UPD(0x0C7C3D6Au, 1);  /* 0C7C3D68 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C7C3D6A mov #imm,Rn */
	r5 = R32(r15 + 0x8u); UPD(0x0C7C3D6Eu, 2);  /* 0C7C3D6C mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C7C3D6E mov Rm,Rn */
	r8 = r14;  /* 0C7C3D70 mov Rm,Rn */
	IF(0x0C7C3D72u); { u32 t_ = r12; PR = 0x0C7C3D76u; IF(0x0C7C3D74u); r8 <<= 2; /* slot shll2 Rn */ UPD(t_, 4); CALLP(t_, f_0C7C2F44, 0x0C7C2F44u, 0x0C7C3D76u); }  /* 0C7C3D72 jsr @Rn */
L_0C7C3D76: BLKS(0x0C7C3D76u);
	r8 += r8;  /* 0C7C3D76 add Rm,Rn */
	r1 = 0xC7C492Eu; UPD(0x0C7C3D7Au, 2);  /* 0C7C3D78 mov.l @(disp,pc),Rn */
	r9 = 0xC16D1B8u; UPD(0x0C7C3D7Cu, 1);  /* 0C7C3D7A mov.l @(disp,pc),Rn */
	r8 -= r14;  /* 0C7C3D7C sub Rm,Rn */
	r3 = 0xC7C4238u; UPD(0x0C7C3D80u, 2);  /* 0C7C3D7E mov.l @(disp,pc),Rn */
	r8 += r1;  /* 0C7C3D80 add Rm,Rn */
	r13 = 0x0u;  /* 0C7C3D82 mov #imm,Rn */
	r2 = 0x0u;  /* 0C7C3D84 mov #imm,Rn */
	IF(0x0C7C3D86u); ;  /* 0C7C3D86 nop */
	UPD(0x0C7C3D88u, 4);
L_0C7C3D88: BLKS(0x0C7C3D88u);
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r1 = v_; } UPD(0x0C7C3D8Au, 1);  /* 0C7C3D88 mov.b @Rm+,Rn */
	T = (r1 & r1) == 0;  /* 0C7C3D8A tst Rm,Rn */
	{ u32 c_ = T; r0 = r14; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C3DAAu, 4); goto L_0C7C3DAA; } goto L_0C7C3D90; }  /* 0C7C3D8C bt/s */
L_0C7C3D90: BLKS(0x0C7C3D90u);
	IF(0x0C7C3D90u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C7C3D92u, 2);  /* 0C7C3D90 mov.b @(r0,Rm),Rn */
	r1 = r1 & 0xFF;  /* 0C7C3D92 extu.b Rm,Rn */
	T = r1 == r2;  /* 0C7C3D94 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C7C3DAAu, 5); goto L_0C7C3DAA; }  /* 0C7C3D96 bt */
L_0C7C3D98: BLKS(0x0C7C3D98u);
	r4 = R32(r9); UPD(0x0C7C3D9Au, 1);  /* 0C7C3D98 mov.l @Rm,Rn */
	r6 = r10;  /* 0C7C3D9A mov Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C7C3D9Eu, 2);  /* 0C7C3D9C mov.l Rm,@(disp,Rn) */
	r13 += 0x1u;  /* 0C7C3D9E add #imm,Rn */
	W32(r15, r3); UPD(0x0C7C3DA2u, 2);  /* 0C7C3DA0 mov.l Rm,@Rn */
	IF(0x0C7C3DA2u); { u32 t_ = r12; PR = 0x0C7C3DA6u; r5 = R32(r15 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C7C3DA6u); }  /* 0C7C3DA2 jsr @Rn */
L_0C7C3DA6: BLKS(0x0C7C3DA6u);
	r3 = R32(r15); UPD(0x0C7C3DA8u, 1);  /* 0C7C3DA6 mov.l @Rm,Rn */
	r2 = R32(r15 + 0x4u); UPD(0x0C7C3DAAu, 1);  /* 0C7C3DA8 mov.l @(disp,Rm),Rn */
L_0C7C3DAA: BLKS(0x0C7C3DAAu);
	r2 += 0x1u;  /* 0C7C3DAA add #imm,Rn */
	r0 = r2;  /* 0C7C3DAC mov Rm,Rn */
	T = r0 == 0x7u;  /* 0C7C3DAE cmp/eq #imm,r0 */
	{ u32 c_ = !T; r9 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C3D88u, 6); goto L_0C7C3D88; } goto L_0C7C3DB4; }  /* 0C7C3DB0 bf/s */
L_0C7C3DB4: BLKS(0x0C7C3DB4u);
	T = (r13 & r13) == 0;  /* 0C7C3DB4 tst Rm,Rn */
	{ u32 c_ = T; r4 = 0xDu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C3E1Cu, 5); goto L_0C7C3E1C; } UPD(0x0C7C3DBAu, 1); goto L_0C7C3DBA; }  /* 0C7C3DB6 bt/s */
L_0C7C3DBA: BLKS(0x0C7C3DBAu);
	r1 = 0xC2839E7u; UPD(0x0C7C3DBCu, 1);  /* 0C7C3DBA mov.l @(disp,pc),Rn */
	r11 += r1;  /* 0C7C3DBC add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r11); UPD(0x0C7C3DC0u, 2);  /* 0C7C3DBE mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C3DC0 tst Rm,Rn */
	{ u32 c_ = T; r6 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C3DF8u, 4); goto L_0C7C3DF8; } goto L_0C7C3DC6; }  /* 0C7C3DC2 bt/s */
L_0C7C3DC6: BLKS(0x0C7C3DC6u);
	r0 = 0x0u;  /* 0C7C3DC6 mov #imm,Rn */
	r15 += 0xCu;  /* 0C7C3DC8 add #imm,Rn */
	IF(0x0C7C3DCAu); PR = R32(r15); r15 += 4; UPD(0x0C7C3DCCu, 4);  /* 0C7C3DCA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C3DCEu, 1);  /* 0C7C3DCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C3DD0u, 1);  /* 0C7C3DCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C3DD2u, 1);  /* 0C7C3DD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C3DD4u, 1);  /* 0C7C3DD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C3DD6u, 1);  /* 0C7C3DD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C3DD8u, 1);  /* 0C7C3DD6 mov.l @Rm+,Rn */
	IF(0x0C7C3DD8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C3DD8 rts */
L_0C7C3DDC: BLKS(0x0C7C3DDCu);
	r0 = 0xC0649F0u; UPD(0x0C7C3DDEu, 1);  /* 0C7C3DDC mov.l @(disp,pc),Rn */
	r15 += 0xCu;  /* 0C7C3DDE add #imm,Rn */
	IF(0x0C7C3DE0u); PR = R32(r15); r15 += 4; UPD(0x0C7C3DE2u, 2);  /* 0C7C3DE0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C3DE4u, 1);  /* 0C7C3DE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C3DE6u, 1);  /* 0C7C3DE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C3DE8u, 1);  /* 0C7C3DE6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C3DEAu, 1);  /* 0C7C3DE8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C3DECu, 1);  /* 0C7C3DEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C3DEEu, 1);  /* 0C7C3DEC mov.l @Rm+,Rn */
	IF(0x0C7C3DEEu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0649F0u: TAIL(f_0C0649F0); default: JUMPD(tv_); } }  /* 0C7C3DEE jmp @Rn */
L_0C7C3DF2: BLKS(0x0C7C3DF2u);
	r10 = 0x1740000u; UPD(0x0C7C3DF4u, 1);  /* 0C7C3DF2 mov.l @(disp,pc),Rn */
	{ IF(0x0C7C3DF6u); ; /* slot nop */ UPD(0x0C7C3D68u, 3); goto L_0C7C3D68; }  /* 0C7C3DF4 bra */
L_0C7C3DF8: BLKS(0x0C7C3DF8u);
	r5 = R32(r15 + 0x8u); UPD(0x0C7C3DFAu, 1);  /* 0C7C3DF8 mov.l @(disp,Rm),Rn */
	IF(0x0C7C3DFAu); { u32 t_ = r12; PR = 0x0C7C3DFEu; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C7C3DFEu); }  /* 0C7C3DFA jsr @Rn */
L_0C7C3DFE: BLKS(0x0C7C3DFEu);
	r5 = R32(r15 + 0x8u); UPD(0x0C7C3E00u, 1);  /* 0C7C3DFE mov.l @(disp,Rm),Rn */
	r4 = 0x5u;  /* 0C7C3E00 mov #imm,Rn */
	IF(0x0C7C3E02u); { u32 t_ = r12; PR = 0x0C7C3E06u; r6 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C7C3E06u); }  /* 0C7C3E02 jsr @Rn */
L_0C7C3E06: BLKS(0x0C7C3E06u);
	r0 = 0x0u;  /* 0C7C3E06 mov #imm,Rn */
	r15 += 0xCu;  /* 0C7C3E08 add #imm,Rn */
	IF(0x0C7C3E0Au); PR = R32(r15); r15 += 4; UPD(0x0C7C3E0Cu, 3);  /* 0C7C3E0A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C3E0Eu, 1);  /* 0C7C3E0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C3E10u, 1);  /* 0C7C3E0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C3E12u, 1);  /* 0C7C3E10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C3E14u, 1);  /* 0C7C3E12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C3E16u, 1);  /* 0C7C3E14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C3E18u, 1);  /* 0C7C3E16 mov.l @Rm+,Rn */
	IF(0x0C7C3E18u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C3E18 rts */
L_0C7C3E1C: BLKS(0x0C7C3E1Cu);
	r5 = R32(r15 + 0x8u); UPD(0x0C7C3E1Eu, 1);  /* 0C7C3E1C mov.l @(disp,Rm),Rn */
	IF(0x0C7C3E1Eu); { u32 t_ = r12; PR = 0x0C7C3E22u; r6 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C7C3E22u); }  /* 0C7C3E1E jsr @Rn */
L_0C7C3E22: BLKS(0x0C7C3E22u);
	{ IF(0x0C7C3E24u); ; /* slot nop */ UPD(0x0C7C3DBAu, 3); goto L_0C7C3DBA; }  /* 0C7C3E22 bra */
}

/* arr_game_input */
void f_0C7C3E58(sh3_t *c)
{
	LOCALS;
L_0C7C3E58: BLKS(0x0C7C3E58u);
	r0 = 0xC05AE80u; UPD(0x0C7C3E5Au, 1);  /* 0C7C3E58 mov.l @(disp,pc),Rn */
	IF(0x0C7C3E5Au); r15 -= 4; W32(r15, PR); UPD(0x0C7C3E5Cu, 1);  /* 0C7C3E5A sts.l pr,@-Rn */
	IF(0x0C7C3E5Cu); { u32 t_ = r0; PR = 0x0C7C3E60u; IF(0x0C7C3E5Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05AE80, 0x0C05AE80u, 0x0C7C3E60u); }  /* 0C7C3E5C jsr @Rn */
L_0C7C3E60: BLKS(0x0C7C3E60u);
	r1 = 0xC21CA15u; UPD(0x0C7C3E62u, 1);  /* 0C7C3E60 mov.l @(disp,pc),Rn */
	r7 = r0;  /* 0C7C3E62 mov Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C3E66u, 2);  /* 0C7C3E64 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C3E66 tst Rm,Rn */
	{ u32 c_ = !T; r3 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C3EB0u, 4); goto L_0C7C3EB0; } goto L_0C7C3E6C; }  /* 0C7C3E68 bf/s */
L_0C7C3E6C: BLKS(0x0C7C3E6Cu);
	r1 = 0xA4000124u; UPD(0x0C7C3E6Eu, 2);  /* 0C7C3E6C mov.l @(disp,pc),Rn */
	r6 = 0xC7C4940u; UPD(0x0C7C3E70u, 1);  /* 0C7C3E6E mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C3E72u, 1);  /* 0C7C3E70 mov.b @Rm,Rn */
	r1 += 0x2u;  /* 0C7C3E72 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C3E76u, 2);  /* 0C7C3E74 mov.b @Rm,Rn */
	r1 = 0xFFFFFFFFu;  /* 0C7C3E76 mov #imm,Rn */
	r0 = ~r0;  /* 0C7C3E78 not Rm,Rn */
	r5 = 0xC7C493Cu; UPD(0x0C7C3E7Cu, 3);  /* 0C7C3E7A mov.l @(disp,pc),Rn */
	T = (r0 & 0x40u) == 0;  /* 0C7C3E7C tst #imm,r0 */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C7C3E7E negc Rm,Rn */
	IF(0x0C7C3E80u); T = (s32)r2 >= 0;  /* 0C7C3E80 cmp/pz Rn */
	r1 += r1;  /* 0C7C3E82 add Rm,Rn */
	IF(0x0C7C3E84u); r2 = T;  /* 0C7C3E84 movt Rn */
	T = (r0 & 0x80u) == 0;  /* 0C7C3E86 tst #imm,r0 */
	r1 |= r2;  /* 0C7C3E88 or Rm,Rn */
	r2 = 0xA4000134u; UPD(0x0C7C3E8Cu, 8);  /* 0C7C3E8A mov.l @(disp,pc),Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C7C3E8C negc Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r6 + 0x1u); UPD(0x0C7C3E90u, 2);  /* 0C7C3E8E mov.b @(disp,Rm),r0 */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C3E92u, 1);  /* 0C7C3E90 mov.b @Rm,Rn */
	r3 += r3;  /* 0C7C3E92 add Rm,Rn */
	r0 = ~r0;  /* 0C7C3E94 not Rm,Rn */
	IF(0x0C7C3E96u); T = (s32)r2 >= 0;  /* 0C7C3E96 cmp/pz Rn */
	IF(0x0C7C3E98u); r2 = T;  /* 0C7C3E98 movt Rn */
	r3 |= r2;  /* 0C7C3E9A or Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C7C3E9Eu, 6);  /* 0C7C3E9C mov.b @Rm,Rn */
	r0 &= r3;  /* 0C7C3E9E and Rm,Rn */
	r2 = ~r2;  /* 0C7C3EA0 not Rm,Rn */
	r2 &= r1;  /* 0C7C3EA2 and Rm,Rn */
	IF(0x0C7C3EA4u); r2 <<= 8;  /* 0C7C3EA4 shll8 Rn */
	IF(0x0C7C3EA6u); r1 <<= 8;  /* 0C7C3EA6 shll8 Rn */
	r2 |= r0;  /* 0C7C3EA8 or Rm,Rn */
	r1 |= r3;  /* 0C7C3EAA or Rm,Rn */
	W16(r5, r2); UPD(0x0C7C3EAEu, 8);  /* 0C7C3EAC mov.w Rm,@Rn */
	W16(r6, r1); UPD(0x0C7C3EB0u, 1);  /* 0C7C3EAE mov.w Rm,@Rn */
L_0C7C3EB0: BLKS(0x0C7C3EB0u);
	r0 = r7;  /* 0C7C3EB0 mov Rm,Rn */
	IF(0x0C7C3EB2u); PR = R32(r15); r15 += 4; UPD(0x0C7C3EB4u, 2);  /* 0C7C3EB2 lds.l @Rn+,pr */
	IF(0x0C7C3EB4u); { u32 t_ = PR; IF(0x0C7C3EB6u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C3EB4 rts */
}

/* arr_play */
void f_0C7C3ED0(sh3_t *c)
{
	LOCALS;
L_0C7C3ED0: BLKS(0x0C7C3ED0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3ED2u, 1);  /* 0C7C3ED0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3ED4u, 1);  /* 0C7C3ED2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3ED6u, 1);  /* 0C7C3ED4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3ED8u, 1);  /* 0C7C3ED6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3EDAu, 1);  /* 0C7C3ED8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3EDCu, 1);  /* 0C7C3EDA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3EDEu, 1);  /* 0C7C3EDC mov.l Rm,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C3EE0u, 1);  /* 0C7C3EDE mov.l @(disp,pc),Rn */
	IF(0x0C7C3EE0u); r15 -= 4; W32(r15, PR); UPD(0x0C7C3EE2u, 1);  /* 0C7C3EE0 sts.l pr,@-Rn */
	r8 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C3EE4u, 1);  /* 0C7C3EE2 mov.b @Rm,Rn */
	r8 = r8 & 0xFF;  /* 0C7C3EE4 extu.b Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C7C3EE6 tst Rm,Rn */
	if (!T) { UPD(0x0C7C3EF2u, 5); goto L_0C7C3EF2; }  /* 0C7C3EE8 bf */
L_0C7C3EEA: BLKS(0x0C7C3EEAu);
	r9 = (u32)(s32)(s16)r4;  /* 0C7C3EEA exts.w Rm,Rn */
	r12 = 0x1u;  /* 0C7C3EEC mov #imm,Rn */
	T = r9 > r12;  /* 0C7C3EEE cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C7C3EF6u, 6); goto L_0C7C3EF6; }  /* 0C7C3EF0 bf */
L_0C7C3EF2: BLKS(0x0C7C3EF2u);
	{ IF(0x0C7C3EF4u); ; /* slot nop */ UPD(0x0C7C404Au, 3); goto L_0C7C404A; }  /* 0C7C3EF2 bra */
L_0C7C3EF6: BLKS(0x0C7C3EF6u);
	r1 = 0x280u; UPD(0x0C7C3EF8u, 1);  /* 0C7C3EF6 mov.w @(disp,pc),Rn */
	r11 = 0xC2839E2u; UPD(0x0C7C3EFAu, 1);  /* 0C7C3EF8 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r9 * (s32)(s16)r1);  /* 0C7C3EFA muls.w Rm,Rn */
	IF(0x0C7C3EFCu); r10 = MACL;  /* 0C7C3EFC sts macl,Rn */
	r11 += r10;  /* 0C7C3EFE add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r11); UPD(0x0C7C3F02u, 5);  /* 0C7C3F00 mov.b @Rm,Rn */
	r0 = r13;  /* 0C7C3F02 mov Rm,Rn */
	r0 &= 0x7Fu;  /* 0C7C3F04 and #imm,r0 */
	W8(r11, r0); UPD(0x0C7C3F08u, 3);  /* 0C7C3F06 mov.b Rm,@Rn */
	r0 = 0xC0661E0u; UPD(0x0C7C3F0Au, 1);  /* 0C7C3F08 mov.l @(disp,pc),Rn */
	IF(0x0C7C3F0Au); { u32 t_ = r0; PR = 0x0C7C3F0Eu; IF(0x0C7C3F0Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0661E0, 0x0C0661E0u, 0x0C7C3F0Eu); }  /* 0C7C3F0A jsr @Rn */
L_0C7C3F0E: BLKS(0x0C7C3F0Eu);
	r1 = 0xC2839E1u; UPD(0x0C7C3F10u, 1);  /* 0C7C3F0E mov.l @(disp,pc),Rn */
	r14 = r0;  /* 0C7C3F10 mov Rm,Rn */
	W8(r11, r13); UPD(0x0C7C3F14u, 2);  /* 0C7C3F12 mov.b Rm,@Rn */
	r1 += r10;  /* 0C7C3F14 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C3F18u, 2);  /* 0C7C3F16 mov.b @Rm,Rn */
	T = (r0 & 0x40u) == 0;  /* 0C7C3F18 tst #imm,r0 */
	{ u32 c_ = T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C3FAEu, 4); goto L_0C7C3FAE; } goto L_0C7C3F1E; }  /* 0C7C3F1A bt/s */
L_0C7C3F1E: BLKS(0x0C7C3F1Eu);
	r1 = 0xC7C492Cu; UPD(0x0C7C3F20u, 2);  /* 0C7C3F1E mov.l @(disp,pc),Rn */
	IF(0x0C7C3F20u); r1 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C7C3F22u, 1);  /* 0C7C3F20 mov.b @(r0,Rm),Rn */
	r1 = r1 & 0xFF;  /* 0C7C3F22 extu.b Rm,Rn */
	T = r1 > r12;  /* 0C7C3F24 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C7C3FAEu, 5); goto L_0C7C3FAE; }  /* 0C7C3F26 bf */
L_0C7C3F28: BLKS(0x0C7C3F28u);
	r5 = 0xC7C4238u; UPD(0x0C7C3F2Au, 1);  /* 0C7C3F28 mov.l @(disp,pc),Rn */
	r1 = r9;  /* 0C7C3F2A mov Rm,Rn */
	IF(0x0C7C3F2Cu); r1 <<= 2;  /* 0C7C3F2C shll2 Rn */
	r3 = 0xC7C492Eu; UPD(0x0C7C3F30u, 3);  /* 0C7C3F2E mov.l @(disp,pc),Rn */
	IF(0x0C7C3F30u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C7C3F32u, 1);  /* 0C7C3F30 mov.b @(r0,Rm),Rn */
	r1 += r1;  /* 0C7C3F32 add Rm,Rn */
	r6 = 0xC7C422Cu; UPD(0x0C7C3F36u, 2);  /* 0C7C3F34 mov.l @(disp,pc),Rn */
	r1 -= r9;  /* 0C7C3F36 sub Rm,Rn */
	r3 += r1;  /* 0C7C3F38 add Rm,Rn */
	r4 = r4 & 0xFF;  /* 0C7C3F3A extu.b Rm,Rn */
	r7 = 0x6u;  /* 0C7C3F3C mov #imm,Rn */
	r1 = 0x7u;  /* 0C7C3F3E mov #imm,Rn */
	T = r4 > r7;  /* 0C7C3F40 cmp/hi Rm,Rn */
	IF(0x0C7C3F42u); ;  /* 0C7C3F42 nop */
	UPD(0x0C7C3F44u, 7);
L_0C7C3F44: BLKS(0x0C7C3F44u);
	{ u32 c_ = !T; r0 = r4; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C3F4Cu, 3); goto L_0C7C3F4C; } goto L_0C7C3F48; }  /* 0C7C3F44 bf/s */
L_0C7C3F48: BLKS(0x0C7C3F48u);
	{ r2 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C7C405Eu, 4); goto L_0C7C405E; }  /* 0C7C3F48 bra */
L_0C7C3F4C: BLKS(0x0C7C3F4Cu);
	IF(0x0C7C3F4Cu); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C7C3F4Eu, 1);  /* 0C7C3F4C mov.b @(r0,Rm),Rn */
	r4 = r4 & 0xFF;  /* 0C7C3F4E extu.b Rm,Rn */
	r2 = r4;  /* 0C7C3F50 mov Rm,Rn */
	UPD(0x0C7C3F52u, 2);
L_0C7C3F52: BLKS(0x0C7C3F52u);
	r0 = r2;  /* 0C7C3F52 mov Rm,Rn */
	IF(0x0C7C3F54u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C7C3F56u, 2);  /* 0C7C3F54 mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C7C3F56 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C7C3F5Au); r1 -= 1; T = r1 == 0; /* slot dt Rn */ if (c_) { UPD(0x0C7C3F60u, 4); goto L_0C7C3F60; } goto L_0C7C3F5C; }  /* 0C7C3F58 bf/s */
L_0C7C3F5C: BLKS(0x0C7C3F5Cu);
	{ u32 c_ = !T; T = r4 > r7; /* slot cmp/hi Rm,Rn */ if (c_) { UPD(0x0C7C3F44u, 4); goto L_0C7C3F44; } UPD(0x0C7C3F60u, 1); goto L_0C7C3F60; }  /* 0C7C3F5C bf/s */
L_0C7C3F60: BLKS(0x0C7C3F60u);
	r2 = 0x90u; UPD(0x0C7C3F62u, 1);  /* 0C7C3F60 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C7C3F62 mov Rm,Rn */
	r3 = 0xC27DC94u; UPD(0x0C7C3F66u, 2);  /* 0C7C3F64 mov.l @(disp,pc),Rn */
	r1 = r4;  /* 0C7C3F66 mov Rm,Rn */
	MACL = (u32)((s32)(s16)r9 * (s32)(s16)r2);  /* 0C7C3F68 muls.w Rm,Rn */
	r6 = 0xC2839F9u; UPD(0x0C7C3F6Cu, 4);  /* 0C7C3F6A mov.l @(disp,pc),Rn */
	r1 += r1;  /* 0C7C3F6C add Rm,Rn */
	IF(0x0C7C3F6Eu); W8(r0 + r5, r4); UPD(0x0C7C3F70u, 2);  /* 0C7C3F6E mov.b Rm,@(r0,Rn) */
	r5 = r4;  /* 0C7C3F70 mov Rm,Rn */
	IF(0x0C7C3F72u); r2 = MACL;  /* 0C7C3F72 sts macl,Rn */
	r5 += r5;  /* 0C7C3F74 add Rm,Rn */
	r5 = r5 & 0xFF;  /* 0C7C3F76 extu.b Rm,Rn */
	r2 += r3;  /* 0C7C3F78 add Rm,Rn */
	r6 += r10;  /* 0C7C3F7A add Rm,Rn */
	r1 |= r9;  /* 0C7C3F7C or Rm,Rn */
	r0 = 0x0u;  /* 0C7C3F7E mov #imm,Rn */
	r3 = 0x0u;  /* 0C7C3F80 mov #imm,Rn */
	UPD(0x0C7C3F82u, 9);
L_0C7C3F82: BLKS(0x0C7C3F82u);
	IF(0x0C7C3F82u); W8(r0 + r6, r5); UPD(0x0C7C3F84u, 1);  /* 0C7C3F82 mov.b Rm,@(r0,Rn) */
	r7 = r2;  /* 0C7C3F84 mov Rm,Rn */
	W32(r2, r1); UPD(0x0C7C3F88u, 2);  /* 0C7C3F86 mov.l Rm,@Rn */
	r7 += 0xFFFFFFF4u;  /* 0C7C3F88 add #imm,Rn */
	W32(r7, r1); UPD(0x0C7C3F8Cu, 2);  /* 0C7C3F8A mov.l Rm,@Rn */
	r7 += 0x4u;  /* 0C7C3F8C add #imm,Rn */
	W32(r7 + 0x4u, r3); UPD(0x0C7C3F90u, 2);  /* 0C7C3F8E mov.l Rm,@(disp,Rn) */
	r0 += 0x1u;  /* 0C7C3F90 add #imm,Rn */
	W32(r7, r3); UPD(0x0C7C3F94u, 2);  /* 0C7C3F92 mov.l Rm,@Rn */
	r7 += 0x23u;  /* 0C7C3F94 add #imm,Rn */
	W8(r7, r3); UPD(0x0C7C3F98u, 2);  /* 0C7C3F96 mov.b Rm,@Rn */
	r7 += 0xFFFFFFFFu;  /* 0C7C3F98 add #imm,Rn */
	W8(r7, r3); UPD(0x0C7C3F9Cu, 2);  /* 0C7C3F9A mov.b Rm,@Rn */
	T = r0 == 0x3u;  /* 0C7C3F9C cmp/eq #imm,r0 */
	{ u32 c_ = !T; r2 += 0x30u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C3F82u, 4); goto L_0C7C3F82; } goto L_0C7C3FA2; }  /* 0C7C3F9E bf/s */
L_0C7C3FA2: BLKS(0x0C7C3FA2u);
	r0 = 0xC04E49Cu; UPD(0x0C7C3FA4u, 2);  /* 0C7C3FA2 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C3FA4 mov #imm,Rn */
	r6 = 0x40u;  /* 0C7C3FA6 mov #imm,Rn */
	r5 = 0x4Au;  /* 0C7C3FA8 mov #imm,Rn */
	IF(0x0C7C3FAAu); { u32 t_ = r0; PR = 0x0C7C3FAEu; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C04E49C, 0x0C04E49Cu, 0x0C7C3FAEu); }  /* 0C7C3FAA jsr @Rn */
L_0C7C3FAE: BLKS(0x0C7C3FAEu);
	r11 = 0xC7C493Cu; UPD(0x0C7C3FB0u, 1);  /* 0C7C3FAE mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C7C3FB0 mov Rm,Rn */
	IF(0x0C7C3FB2u); r2 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C7C3FB4u, 2);  /* 0C7C3FB2 mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C7C3FB4 mov Rm,Rn */
	T = (r0 & 0x1u) == 0;  /* 0C7C3FB6 tst #imm,r0 */
	{ u32 c_ = T; r1 = r2 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C7C401Cu, 5); goto L_0C7C401C; } goto L_0C7C3FBC; }  /* 0C7C3FB8 bt/s */
L_0C7C3FBC: BLKS(0x0C7C3FBCu);
	r2 = 0xC2839FEu; UPD(0x0C7C3FBEu, 2);  /* 0C7C3FBC mov.l @(disp,pc),Rn */
	r2 += r10;  /* 0C7C3FBE add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C3FC2u, 2);  /* 0C7C3FC0 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C3FC2 tst Rm,Rn */
	{ u32 c_ = T; r0 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C401Eu, 4); goto L_0C7C401E; } goto L_0C7C3FC8; }  /* 0C7C3FC4 bt/s */
L_0C7C3FC8: BLKS(0x0C7C3FC8u);
	r3 = 0xC7C4928u; UPD(0x0C7C3FCAu, 2);  /* 0C7C3FC8 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C7C3FCA mov Rm,Rn */
	r2 = 0x4u;  /* 0C7C3FCC mov #imm,Rn */
	IF(0x0C7C3FCEu); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C7C3FD0u, 3);  /* 0C7C3FCE mov.b @(r0,Rm),Rn */
	r1 += 0x1u;  /* 0C7C3FD0 add #imm,Rn */
	r1 = r1 & 0xFF;  /* 0C7C3FD2 extu.b Rm,Rn */
	T = r1 > r2;  /* 0C7C3FD4 cmp/hi Rm,Rn */
	{ u32 c_ = T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C4062u, 6); goto L_0C7C4062; } goto L_0C7C3FDA; }  /* 0C7C3FD6 bt/s */
L_0C7C3FDA: BLKS(0x0C7C3FDAu);
	r0 = 0xC7C4214u; UPD(0x0C7C3FDCu, 2);  /* 0C7C3FDA mov.l @(disp,pc),Rn */
	r2 = r1;  /* 0C7C3FDC mov Rm,Rn */
	r2 += r2;  /* 0C7C3FDE add Rm,Rn */
	r8 = r1;  /* 0C7C3FE0 mov Rm,Rn */
	r2 += r1;  /* 0C7C3FE2 add Rm,Rn */
	r0 += r2;  /* 0C7C3FE4 add Rm,Rn */
	r2 = r0;  /* 0C7C3FE6 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r7 = v_; } UPD(0x0C7C3FEAu, 7);  /* 0C7C3FE8 mov.b @Rm+,Rn */
	r0 = (u32)(s32)(s8)R8(r0 + 0x2u); UPD(0x0C7C3FECu, 1);  /* 0C7C3FEA mov.b @(disp,Rm),r0 */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C3FEEu, 1);  /* 0C7C3FEC mov.b @Rm,Rn */
	r7 = r7 & 0xFF;  /* 0C7C3FEE extu.b Rm,Rn */
	r6 = r0 & 0xFF;  /* 0C7C3FF0 extu.b Rm,Rn */
	r2 = r2 & 0xFF;  /* 0C7C3FF2 extu.b Rm,Rn */
	UPD(0x0C7C3FF4u, 3);
L_0C7C3FF4: BLKS(0x0C7C3FF4u);
	r1 = 0xC2839F6u; UPD(0x0C7C3FF6u, 1);  /* 0C7C3FF4 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C7C3FF6 mov Rm,Rn */
	IF(0x0C7C3FF8u); W8(r0 + r3, r8); UPD(0x0C7C3FFAu, 2);  /* 0C7C3FF8 mov.b Rm,@(r0,Rn) */
	r5 = 0x5Fu;  /* 0C7C3FFA mov #imm,Rn */
	r1 += r10;  /* 0C7C3FFC add Rm,Rn */
	r0 = 0xC04E49Cu; UPD(0x0C7C4000u, 3);  /* 0C7C3FFE mov.l @(disp,pc),Rn */
	W8(r1, r7); UPD(0x0C7C4002u, 1);  /* 0C7C4000 mov.b Rm,@Rn */
	r4 = 0x7u;  /* 0C7C4002 mov #imm,Rn */
	r1 = 0xC2839F7u; UPD(0x0C7C4006u, 2);  /* 0C7C4004 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C4006 mov #imm,Rn */
	r1 += r10;  /* 0C7C4008 add Rm,Rn */
	W8(r1, r2); UPD(0x0C7C400Cu, 3);  /* 0C7C400A mov.b Rm,@Rn */
	r1 = 0xC2839F8u; UPD(0x0C7C400Eu, 1);  /* 0C7C400C mov.l @(disp,pc),Rn */
	r10 += r1;  /* 0C7C400E add Rm,Rn */
	W8(r10, r6); UPD(0x0C7C4012u, 2);  /* 0C7C4010 mov.b Rm,@Rn */
	IF(0x0C7C4012u); { u32 t_ = r0; PR = 0x0C7C4016u; r6 = 0x30u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04E49C, 0x0C04E49Cu, 0x0C7C4016u); }  /* 0C7C4012 jsr @Rn */
L_0C7C4016: BLKS(0x0C7C4016u);
	r0 = r9;  /* 0C7C4016 mov Rm,Rn */
	IF(0x0C7C4018u); r1 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C7C401Au, 2);  /* 0C7C4018 mov.b @(r0,Rm),Rn */
	r1 = r1 & 0xFF;  /* 0C7C401A extu.b Rm,Rn */
	UPD(0x0C7C401Cu, 1);
L_0C7C401C: BLKS(0x0C7C401Cu);
	r0 = r1;  /* 0C7C401C mov Rm,Rn */
	UPD(0x0C7C401Eu, 1);
L_0C7C401E: BLKS(0x0C7C401Eu);
	T = (r0 & 0x2u) == 0;  /* 0C7C401E tst #imm,r0 */
	if (T) { UPD(0x0C7C4036u, 4); goto L_0C7C4036; }  /* 0C7C4020 bt */
L_0C7C4022: BLKS(0x0C7C4022u);
	r1 = 0xC7C4924u; UPD(0x0C7C4024u, 1);  /* 0C7C4022 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C4024 mov #imm,Rn */
	r6 = 0x40u;  /* 0C7C4026 mov #imm,Rn */
	r0 = R32(r1); UPD(0x0C7C402Au, 3);  /* 0C7C4028 mov.l @Rm,Rn */
	r5 = 0x4Au;  /* 0C7C402A mov #imm,Rn */
	r0 ^= 0x1u;  /* 0C7C402C xor #imm,r0 */
	W32(r1, r0); UPD(0x0C7C4030u, 3);  /* 0C7C402E mov.l Rm,@Rn */
	r0 = 0xC04E49Cu; UPD(0x0C7C4032u, 1);  /* 0C7C4030 mov.l @(disp,pc),Rn */
	IF(0x0C7C4032u); { u32 t_ = r0; PR = 0x0C7C4036u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04E49C, 0x0C04E49Cu, 0x0C7C4036u); }  /* 0C7C4032 jsr @Rn */
L_0C7C4036: BLKS(0x0C7C4036u);
	r0 = r14;  /* 0C7C4036 mov Rm,Rn */
	IF(0x0C7C4038u); PR = R32(r15); r15 += 4; UPD(0x0C7C403Au, 2);  /* 0C7C4038 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C403Cu, 1);  /* 0C7C403A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C403Eu, 1);  /* 0C7C403C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C4040u, 1);  /* 0C7C403E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C4042u, 1);  /* 0C7C4040 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C4044u, 1);  /* 0C7C4042 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C4046u, 1);  /* 0C7C4044 mov.l @Rm+,Rn */
	IF(0x0C7C4046u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C4046 rts */
L_0C7C404A: BLKS(0x0C7C404Au);
	r0 = 0xC0661E0u; UPD(0x0C7C404Cu, 1);  /* 0C7C404A mov.l @(disp,pc),Rn */
	IF(0x0C7C404Cu); PR = R32(r15); r15 += 4; UPD(0x0C7C404Eu, 1);  /* 0C7C404C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C4050u, 1);  /* 0C7C404E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C4052u, 1);  /* 0C7C4050 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C4054u, 1);  /* 0C7C4052 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C4056u, 1);  /* 0C7C4054 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C4058u, 1);  /* 0C7C4056 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C405Au, 1);  /* 0C7C4058 mov.l @Rm+,Rn */
	IF(0x0C7C405Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C405A jmp @Rn */
L_0C7C405E: BLKS(0x0C7C405Eu);
	{ r4 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C7C3F52u, 3); goto L_0C7C3F52; }  /* 0C7C405E bra */
L_0C7C4062: BLKS(0x0C7C4062u);
	r6 = 0x0u;  /* 0C7C4062 mov #imm,Rn */
	{ r7 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C7C3FF4u, 4); goto L_0C7C3FF4; }  /* 0C7C4064 bra */
}

/* arr_opt_aim */
void f_0C7C40B8(sh3_t *c)
{
	LOCALS;
L_0C7C40B8: BLKS(0x0C7C40B8u);
	r1 = 0xC21CA15u; UPD(0x0C7C40BAu, 1);  /* 0C7C40B8 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C40BCu, 1);  /* 0C7C40BA mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C40BC tst Rm,Rn */
	{ u32 c_ = !T; r2 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C7C4190u, 4); goto L_0C7C4190; } goto L_0C7C40C2; }  /* 0C7C40BE bf/s */
L_0C7C40C2: BLKS(0x0C7C40C2u);
	r1 = 0x1u;  /* 0C7C40C2 mov #imm,Rn */
	T = r2 > r1;  /* 0C7C40C4 cmp/hi Rm,Rn */
	{ u32 c_ = T; r1 = r5 & 0xFFFF; /* slot extu.w Rm,Rn */ if (c_) { UPD(0x0C7C4190u, 6); goto L_0C7C4190; } goto L_0C7C40CA; }  /* 0C7C40C6 bt/s */
L_0C7C40CA: BLKS(0x0C7C40CAu);
	r3 = 0x2u;  /* 0C7C40CA mov #imm,Rn */
	T = r1 > r3;  /* 0C7C40CC cmp/hi Rm,Rn */
	if (T) { UPD(0x0C7C4190u, 6); goto L_0C7C4190; }  /* 0C7C40CE bt */
L_0C7C40D0: BLKS(0x0C7C40D0u);
	r1 = 0x280u; UPD(0x0C7C40D2u, 1);  /* 0C7C40D0 mov.w @(disp,pc),Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C40D4u, 1);  /* 0C7C40D2 mov.l Rm,@-Rn */
	MACL = (u32)((s32)(s16)r2 * (s32)(s16)r1);  /* 0C7C40D4 muls.w Rm,Rn */
	r1 = 0x90u; UPD(0x0C7C40D8u, 3);  /* 0C7C40D6 mov.w @(disp,pc),Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C40DAu, 1);  /* 0C7C40D8 mov.l Rm,@-Rn */
	IF(0x0C7C40DAu); r0 = MACL;  /* 0C7C40DA sts macl,Rn */
	MACL = (u32)((s32)(s16)r2 * (s32)(s16)r1);  /* 0C7C40DC muls.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C40E0u, 4);  /* 0C7C40DE mov.l Rm,@-Rn */
	r1 = 0x30u;  /* 0C7C40E0 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C40E4u, 2);  /* 0C7C40E2 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C40E6u, 1);  /* 0C7C40E4 mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C7C40E6 exts.w Rm,Rn */
	IF(0x0C7C40E8u); r9 = MACL;  /* 0C7C40E8 sts macl,Rn */
	MACL = (u32)(u16)r12 * (u32)(u16)r1;  /* 0C7C40EA mulu.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C40EEu, 5);  /* 0C7C40EC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C7C40F0u, 1);  /* 0C7C40EE mov.l Rm,@-Rn */
	IF(0x0C7C40F0u); r1 = MACL;  /* 0C7C40F0 sts macl,Rn */
	IF(0x0C7C40F2u); r15 -= 4; W32(r15, PR); UPD(0x0C7C40F4u, 2);  /* 0C7C40F2 sts.l pr,@-Rn */
	r9 += r1;  /* 0C7C40F4 add Rm,Rn */
	r1 = 0xC2839F6u; UPD(0x0C7C40F8u, 2);  /* 0C7C40F6 mov.l @(disp,pc),Rn */
	r10 = 0xC27DCA8u; UPD(0x0C7C40FAu, 1);  /* 0C7C40F8 mov.l @(disp,pc),Rn */
	r1 += r12;  /* 0C7C40FA add Rm,Rn */
	r11 = 0xC2839E0u; UPD(0x0C7C40FEu, 2);  /* 0C7C40FC mov.l @(disp,pc),Rn */
	IF(0x0C7C40FEu); r13 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C7C4100u, 1);  /* 0C7C40FE mov.b @(r0,Rm),Rn */
	r10 += r9;  /* 0C7C4100 add Rm,Rn */
	r1 = 0xC7C4924u; UPD(0x0C7C4104u, 2);  /* 0C7C4102 mov.l @(disp,pc),Rn */
	r11 += r0;  /* 0C7C4104 add Rm,Rn */
	r8 = (u32)(s32)(s16)R16(r10); UPD(0x0C7C4108u, 2);  /* 0C7C4106 mov.w @Rm,Rn */
	r13 = r13 & 0xFF;  /* 0C7C4108 extu.b Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C410Cu, 2);  /* 0C7C410A mov.l @Rm,Rn */
	r14 = (u32)(s32)(s8)R8(r11); UPD(0x0C7C410Eu, 1);  /* 0C7C410C mov.b @Rm,Rn */
	r8 = r8 & 0xFFFF;  /* 0C7C410E extu.w Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C4110 tst Rm,Rn */
	{ u32 c_ = T; r0 = r14 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C7C411Au, 5); goto L_0C7C411A; } goto L_0C7C4116; }  /* 0C7C4112 bt/s */
L_0C7C4116: BLKS(0x0C7C4116u);
	r0 &= 0xE0u;  /* 0C7C4116 and #imm,r0 */
	W8(r11, r0); UPD(0x0C7C411Au, 3);  /* 0C7C4118 mov.b Rm,@Rn */
L_0C7C411A: BLKS(0x0C7C411Au);
	r0 = 0xC066A20u; UPD(0x0C7C411Cu, 1);  /* 0C7C411A mov.l @(disp,pc),Rn */
	IF(0x0C7C411Cu); { u32 t_ = r0; PR = 0x0C7C4120u; IF(0x0C7C411Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C066A20, 0x0C066A20u, 0x0C7C4120u); }  /* 0C7C411C jsr @Rn */
L_0C7C4120: BLKS(0x0C7C4120u);
	W8(r11, r14); UPD(0x0C7C4122u, 1);  /* 0C7C4120 mov.b Rm,@Rn */
	T = (r13 & r13) == 0;  /* 0C7C4122 tst Rm,Rn */
	{ u32 c_ = T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C417Cu, 4); goto L_0C7C417C; } goto L_0C7C4128; }  /* 0C7C4124 bt/s */
L_0C7C4128: BLKS(0x0C7C4128u);
	r11 = 0x60B8264u; UPD(0x0C7C412Au, 2);  /* 0C7C4128 mov.l @(disp,pc),Rn */
	r1 = 0xC27DCAAu; UPD(0x0C7C412Cu, 1);  /* 0C7C412A mov.l @(disp,pc),Rn */
	r12 += r11;  /* 0C7C412C add Rm,Rn */
	r1 += r9;  /* 0C7C412E add Rm,Rn */
	r12 += r12;  /* 0C7C4130 add Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C4134u, 4);  /* 0C7C4132 mov.w @Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r12); UPD(0x0C7C4136u, 1);  /* 0C7C4134 mov.w @Rm,Rn */
	IF(0x0C7C4136u); T = (s32)r2 > 0;  /* 0C7C4136 cmp/pl Rn */
	{ u32 c_ = !T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C416Cu, 4); goto L_0C7C416C; } goto L_0C7C413C; }  /* 0C7C4138 bf/s */
L_0C7C413C: BLKS(0x0C7C413Cu);
	r6 = 0x1FFu; UPD(0x0C7C413Eu, 2);  /* 0C7C413C mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r7;  /* 0C7C413E exts.w Rm,Rn */
	r3 = 0x100u; UPD(0x0C7C4142u, 2);  /* 0C7C4140 mov.w @(disp,pc),Rn */
	r4 = 0xFFFFFFFCu;  /* 0C7C4142 mov #imm,Rn */
	r1 = (u32)(s32)(s16)r8;  /* 0C7C4144 exts.w Rm,Rn */
	IF(0x0C7C4146u); ;  /* 0C7C4146 nop */
	UPD(0x0C7C4148u, 3);
L_0C7C4148: BLKS(0x0C7C4148u);
	r0 = r7;  /* 0C7C4148 mov Rm,Rn */
	r0 -= r1;  /* 0C7C414A sub Rm,Rn */
	r1 = 0x100u; UPD(0x0C7C414Eu, 3);  /* 0C7C414C mov.w @(disp,pc),Rn */
	r0 += r1;  /* 0C7C414E add Rm,Rn */
	r1 = r0;  /* 0C7C4150 mov Rm,Rn */
	r1 &= r6;  /* 0C7C4152 and Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C7C4154 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C7C4196u, 7); goto L_0C7C4196; }  /* 0C7C4156 bf */
L_0C7C4158: BLKS(0x0C7C4158u);
	r0 = r1;  /* 0C7C4158 mov Rm,Rn */
	IF(0x0C7C415Au); ARG0(0x404Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C7C415A shad Rm,Rn */
	r0 += 0xFFFFFFF0u;  /* 0C7C415C add #imm,Rn */
	r0 |= 0x1u;  /* 0C7C415E or #imm,r0 */
	r0 += r8;  /* 0C7C4160 add Rm,Rn */
	r8 = r0 & 0xFFFF;  /* 0C7C4162 extu.w Rm,Rn */
	UPD(0x0C7C4164u, 6);
L_0C7C4164: BLKS(0x0C7C4164u);
	IF(0x0C7C4164u); r2 -= 1; T = r2 == 0;  /* 0C7C4164 dt Rn */
	{ u32 c_ = !T; r1 = (u32)(s32)(s16)r8; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C7C4148u, 4); goto L_0C7C4148; } goto L_0C7C416A; }  /* 0C7C4166 bf/s */
L_0C7C416A: BLKS(0x0C7C416Au);
	r0 = r8;  /* 0C7C416A mov Rm,Rn */
	UPD(0x0C7C416Cu, 2);
L_0C7C416C: BLKS(0x0C7C416Cu);
	r0 += 0x4u;  /* 0C7C416C add #imm,Rn */
	r1 = 0xC27DC90u; UPD(0x0C7C4170u, 2);  /* 0C7C416E mov.l @(disp,pc),Rn */
	IF(0x0C7C4170u); r0 >>= 2;  /* 0C7C4170 shlr2 Rn */
	IF(0x0C7C4172u); T = r0 & 1; r0 >>= 1;  /* 0C7C4172 shlr Rn */
	W16(r10, r8); UPD(0x0C7C4176u, 3);  /* 0C7C4174 mov.w Rm,@Rn */
	r9 += r1;  /* 0C7C4176 add Rm,Rn */
	r0 &= 0x3Fu;  /* 0C7C4178 and #imm,r0 */
	W32(r9, r0); UPD(0x0C7C417Cu, 3);  /* 0C7C417A mov.l Rm,@Rn */
L_0C7C417C: BLKS(0x0C7C417Cu);
	r0 = r5;  /* 0C7C417C mov Rm,Rn */
	IF(0x0C7C417Eu); PR = R32(r15); r15 += 4; UPD(0x0C7C4180u, 2);  /* 0C7C417E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C4182u, 1);  /* 0C7C4180 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C4184u, 1);  /* 0C7C4182 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C4186u, 1);  /* 0C7C4184 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C4188u, 1);  /* 0C7C4186 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C418Au, 1);  /* 0C7C4188 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C418Cu, 1);  /* 0C7C418A mov.l @Rm+,Rn */
	IF(0x0C7C418Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C418C rts */
L_0C7C4190: BLKS(0x0C7C4190u);
	r0 = 0xC066A20u; UPD(0x0C7C4192u, 1);  /* 0C7C4190 mov.l @(disp,pc),Rn */
	IF(0x0C7C4192u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C4194u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C066A20u: TAIL(f_0C066A20); default: JUMPD(tv_); } }  /* 0C7C4192 jmp @Rn */
L_0C7C4196: BLKS(0x0C7C4196u);
	r11 = 0x100u; UPD(0x0C7C4198u, 1);  /* 0C7C4196 mov.w @(disp,pc),Rn */
	T = (r0 & r11) == 0;  /* 0C7C4198 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C4164u, 4); goto L_0C7C4164; } goto L_0C7C419E; }  /* 0C7C419A bf/s */
L_0C7C419E: BLKS(0x0C7C419Eu);
	r0 -= r1;  /* 0C7C419E sub Rm,Rn */
	IF(0x0C7C41A0u); ARG0(0x404Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C7C41A0 shad Rm,Rn */
	r0 |= 0x1u;  /* 0C7C41A2 or #imm,r0 */
	r8 -= r0;  /* 0C7C41A4 sub Rm,Rn */
	{ r8 = r8 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(0x0C7C4164u, 8); goto L_0C7C4164; }  /* 0C7C41A6 bra */
}

/* arr_stage_name */
void f_0C7C4944(sh3_t *c)
{
	LOCALS;
L_0C7C4944: BLKS(0x0C7C4944u);
	r1 = 0xC21CA15u; UPD(0x0C7C4946u, 1);  /* 0C7C4944 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C4948u, 1);  /* 0C7C4946 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C4948 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C4952u, 4); goto L_0C7C4952; } goto L_0C7C494E; }  /* 0C7C494A bf/s */
L_0C7C494E: BLKS(0x0C7C494Eu);
	IF(0x0C7C494Eu); { u32 t_ = PR; IF(0x0C7C4950u); ; /* slot nop */ UPD(t_, 4); RET(t_); }  /* 0C7C494E rts */
L_0C7C4952: BLKS(0x0C7C4952u);
	r0 = 0xC057250u; UPD(0x0C7C4954u, 1);  /* 0C7C4952 mov.l @(disp,pc),Rn */
	IF(0x0C7C4954u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C4956u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C057250u: TAIL(f_0C057250); default: JUMPD(tv_); } }  /* 0C7C4954 jmp @Rn */
}


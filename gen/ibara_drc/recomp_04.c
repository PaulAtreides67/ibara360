#include "recomp.h"
#include "recomp_funcs.h"

/* FUN_0c054d30 */
void f_0C054D30(sh3_t *c)
{
	LOCALS;
L_0C054D30: BLKS(0x0C054D30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C054D32u, 1);  /* 0C054D30 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C054D32 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C054D36u, 2);  /* 0C054D34 mov.l Rm,@-Rn */
	T = r0 == 0x10u;  /* 0C054D36 cmp/eq #imm,r0 */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C054D3Au, 2);  /* 0C054D38 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C054D3A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C054D3Eu, 2);  /* 0C054D3C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C054D40u, 1);  /* 0C054D3E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C054D42u, 1);  /* 0C054D40 mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r5;  /* 0C054D42 exts.b Rm,Rn */
	IF(0x0C054D44u); r15 -= 4; W32(r15, PR); UPD(0x0C054D46u, 2);  /* 0C054D44 sts.l pr,@-Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C054D60u, 3); goto L_0C054D60; } UPD(0x0C054D4Au, 1); goto L_0C054D4A; }  /* 0C054D46 bt/s */
L_0C054D4A: BLKS(0x0C054D4Au);
	r15 = r14;  /* 0C054D4A mov Rm,Rn */
	IF(0x0C054D4Cu); PR = R32(r15); r15 += 4; UPD(0x0C054D4Eu, 2);  /* 0C054D4C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C054D50u, 1);  /* 0C054D4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C054D52u, 1);  /* 0C054D50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C054D54u, 1);  /* 0C054D52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C054D56u, 1);  /* 0C054D54 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C054D58u, 1);  /* 0C054D56 mov.l @Rm+,Rn */
	IF(0x0C054D58u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C054D58 rts */
L_0C054D60: BLKS(0x0C054D60u);
	r8 = 0xC055660u; UPD(0x0C054D62u, 1);  /* 0C054D60 mov.l @(disp,pc),Rn */
	IF(0x0C054D62u); { u32 t_ = r8; PR = 0x0C054D66u; IF(0x0C054D64u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C055660, 0x0C055660u, 0x0C054D66u); }  /* 0C054D62 jsr @Rn */
L_0C054D66: BLKS(0x0C054D66u);
	T = (r0 & r0) == 0;  /* 0C054D66 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C054D4Au, 4); goto L_0C054D4A; } goto L_0C054D6C; }  /* 0C054D68 bf/s */
L_0C054D6C: BLKS(0x0C054D6Cu);
	r0 = r12;  /* 0C054D6C mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C054D6E cmp/eq #imm,r0 */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C054D78u, 6); goto L_0C054D78; } goto L_0C054D74; }  /* 0C054D70 bf/s */
L_0C054D74: BLKS(0x0C054D74u);
	{ r5 = 0x9u; /* slot mov #imm,Rn */ UPD(0x0C054E90u, 4); goto L_0C054E90; }  /* 0C054D74 bra */
L_0C054D78: BLKS(0x0C054D78u);
	T = (s32)r12 > (s32)r0;  /* 0C054D78 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C054E00u, 4); goto L_0C054E00; } goto L_0C054D7E; }  /* 0C054D7A bt/s */
L_0C054D7E: BLKS(0x0C054D7Eu);
	T = (r12 & r12) == 0;  /* 0C054D7E tst Rm,Rn */
	if (T) { UPD(0x0C054D90u, 5); goto L_0C054D90; }  /* 0C054D80 bt */
L_0C054D82: BLKS(0x0C054D82u);
	{ r0 = r12; /* slot mov Rm,Rn */ UPD(0x0C054D4Au, 3); goto L_0C054D4A; }  /* 0C054D82 bra */
L_0C054D90: BLKS(0x0C054D90u);
	r9 = 0xC050CD0u; UPD(0x0C054D92u, 1);  /* 0C054D90 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C054D92 mov #imm,Rn */
	r11 = 0xC161224u; UPD(0x0C054D96u, 2);  /* 0C054D94 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C054D96 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C054D9Au, 2);  /* 0C054D98 mov.l @(disp,pc),Rn */
	r10 = 0xC161228u; UPD(0x0C054D9Cu, 1);  /* 0C054D9A mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C054D9C mov Rm,Rn */
	IF(0x0C054D9Eu); { u32 t_ = r9; PR = 0x0C054DA2u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054DA2u); }  /* 0C054D9E jsr @Rn */
L_0C054DA2: BLKS(0x0C054DA2u);
	r4 = R32(r10); UPD(0x0C054DA4u, 1);  /* 0C054DA2 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C054DA4 mov #imm,Rn */
	r6 = 0x4u;  /* 0C054DA6 mov #imm,Rn */
	IF(0x0C054DA8u); { u32 t_ = r9; PR = 0x0C054DACu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054DACu); }  /* 0C054DA8 jsr @Rn */
L_0C054DAC: BLKS(0x0C054DACu);
	r4 = R32(r10); UPD(0x0C054DAEu, 1);  /* 0C054DAC mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C054DAE mov #imm,Rn */
	r6 = 0x4u;  /* 0C054DB0 mov #imm,Rn */
	IF(0x0C054DB2u); { u32 t_ = r9; PR = 0x0C054DB6u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054DB6u); }  /* 0C054DB2 jsr @Rn */
L_0C054DB6: BLKS(0x0C054DB6u);
	r4 = R32(r10); UPD(0x0C054DB8u, 1);  /* 0C054DB6 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C054DB8 mov #imm,Rn */
	r6 = 0x4u;  /* 0C054DBA mov #imm,Rn */
	IF(0x0C054DBCu); { u32 t_ = r9; PR = 0x0C054DC0u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054DC0u); }  /* 0C054DBC jsr @Rn */
L_0C054DC0: BLKS(0x0C054DC0u);
	r4 = R32(r10); UPD(0x0C054DC2u, 1);  /* 0C054DC0 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C054DC2 mov #imm,Rn */
	r6 = 0x4u;  /* 0C054DC4 mov #imm,Rn */
	IF(0x0C054DC6u); { u32 t_ = r9; PR = 0x0C054DCAu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054DCAu); }  /* 0C054DC6 jsr @Rn */
L_0C054DCA: BLKS(0x0C054DCAu);
	r4 = R32(r11); UPD(0x0C054DCCu, 1);  /* 0C054DCA mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C054DCC mov #imm,Rn */
	r6 = 0x4u;  /* 0C054DCE mov #imm,Rn */
	IF(0x0C054DD0u); { u32 t_ = r9; PR = 0x0C054DD4u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054DD4u); }  /* 0C054DD0 jsr @Rn */
L_0C054DD4: BLKS(0x0C054DD4u);
	r5 = 0xC160628u; UPD(0x0C054DD6u, 1);  /* 0C054DD4 mov.l @(disp,pc),Rn */
	r6 = 0x6u;  /* 0C054DD6 mov #imm,Rn */
	r4 = R32(r5); UPD(0x0C054DDAu, 2);  /* 0C054DD8 mov.l @Rm,Rn */
	r7 = r8;  /* 0C054DDA mov Rm,Rn */
	IF(0x0C054DDCu); { u32 t_ = r9; PR = 0x0C054DE0u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054DE0u); }  /* 0C054DDC jsr @Rn */
L_0C054DE0: BLKS(0x0C054DE0u);
	r4 = 0xC160608u; UPD(0x0C054DE2u, 1);  /* 0C054DE0 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C054DE2 mov #imm,Rn */
	r6 = 0x6u;  /* 0C054DE4 mov #imm,Rn */
	IF(0x0C054DE6u); { u32 t_ = r9; PR = 0x0C054DEAu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054DEAu); }  /* 0C054DE6 jsr @Rn */
L_0C054DEA: BLKS(0x0C054DEAu);
	r3 = 0xC27DE74u; UPD(0x0C054DECu, 1);  /* 0C054DEA mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C054DEEu, 1);  /* 0C054DEC mov.b @Rm,Rn */
	IF(0x0C054DEEu); T = (s32)r2 >= 0;  /* 0C054DEE cmp/pz Rn */
	if (T) { UPD(0x0C054D82u, 4); goto L_0C054D82; }  /* 0C054DF0 bt */
L_0C054DF2: BLKS(0x0C054DF2u);
	r12 = 0x1u;  /* 0C054DF2 mov #imm,Rn */
	{ IF(0x0C054DF6u); ; /* slot nop */ UPD(0x0C054D82u, 4); goto L_0C054D82; }  /* 0C054DF4 bra */
L_0C054E00: BLKS(0x0C054E00u);
	T = r0 == 0x2u;  /* 0C054E00 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C054D82u, 4); goto L_0C054D82; }  /* 0C054E02 bf */
L_0C054E04: BLKS(0x0C054E04u);
	r0 = 0x0u;  /* 0C054E04 mov #imm,Rn */
	r7 = 0xC21CCA0u; UPD(0x0C054E08u, 2);  /* 0C054E06 mov.l @(disp,pc),Rn */
	r3 = 0xC21F58Cu; UPD(0x0C054E0Au, 1);  /* 0C054E08 mov.l @(disp,pc),Rn */
	r2 = 0xFu;  /* 0C054E0A mov #imm,Rn */
	UPD(0x0C054E0Cu, 1);
L_0C054E0C: BLKS(0x0C054E0Cu);
	IF(0x0C054E0Cu); r10 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C054E0Eu, 1);  /* 0C054E0C mov.b @(r0,Rm),Rn */
	r9 = r0;  /* 0C054E0E mov Rm,Rn */
	IF(0x0C054E10u); W8(r0 + r7, r10); UPD(0x0C054E12u, 2);  /* 0C054E10 mov.b Rm,@(r0,Rn) */
	r9 += 0x1u;  /* 0C054E12 add #imm,Rn */
	r0 = (u32)(s32)(s16)r9;  /* 0C054E14 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C054E16 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C054E0Cu, 6); goto L_0C054E0C; }  /* 0C054E18 bf */
L_0C054E1A: BLKS(0x0C054E1Au);
	r8 = 0xC21CCACu; UPD(0x0C054E1Cu, 1);  /* 0C054E1A mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s8)R8(r8); UPD(0x0C054E1Eu, 1);  /* 0C054E1C mov.b @Rm,Rn */
	r8 += 0xFFFFFFF4u;  /* 0C054E1E add #imm,Rn */
	r4 = r8;  /* 0C054E20 mov Rm,Rn */
	r8 += 0x2u;  /* 0C054E22 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r0 = v_; } UPD(0x0C054E26u, 4);  /* 0C054E24 mov.b @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r1 = v_; } UPD(0x0C054E28u, 1);  /* 0C054E26 mov.b @Rm+,Rn */
	r6 = 0xC392DC2u; UPD(0x0C054E2Au, 1);  /* 0C054E28 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r7 = v_; } UPD(0x0C054E2Cu, 1);  /* 0C054E2A mov.b @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r2 = v_; } UPD(0x0C054E2Eu, 1);  /* 0C054E2C mov.b @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r3 = v_; } UPD(0x0C054E30u, 1);  /* 0C054E2E mov.b @Rm+,Rn */
	W8(r6, r9); UPD(0x0C054E32u, 1);  /* 0C054E30 mov.b Rm,@Rn */
	r11 = 0xC392AE4u; UPD(0x0C054E34u, 1);  /* 0C054E32 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r6 = v_; } UPD(0x0C054E36u, 1);  /* 0C054E34 mov.b @Rm+,Rn */
	W8(r11, r2); UPD(0x0C054E38u, 1);  /* 0C054E36 mov.b Rm,@Rn */
	r9 = 0xC393028u; UPD(0x0C054E3Au, 1);  /* 0C054E38 mov.l @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C054E3A add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C054E3Eu, 2);  /* 0C054E3C mov.b @Rm,Rn */
	r10 = 0xC286750u; UPD(0x0C054E40u, 1);  /* 0C054E3E mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r2 = v_; } UPD(0x0C054E42u, 1);  /* 0C054E40 mov.b @Rm+,Rn */
	W8(r9, r0); UPD(0x0C054E44u, 1);  /* 0C054E42 mov.b Rm,@Rn */
	W8(r10, r5); UPD(0x0C054E46u, 1);  /* 0C054E44 mov.b Rm,@Rn */
	r9 += 0x1u;  /* 0C054E46 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r0 = v_; } UPD(0x0C054E4Au, 2);  /* 0C054E48 mov.b @Rm+,Rn */
	r10 += 0x1u;  /* 0C054E4A add #imm,Rn */
	W8(r11, r1); UPD(0x0C054E4Eu, 2);  /* 0C054E4C mov.b Rm,@Rn */
	W8(r10, r7); UPD(0x0C054E50u, 1);  /* 0C054E4E mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r11 = v_; } UPD(0x0C054E52u, 1);  /* 0C054E50 mov.b @Rm+,Rn */
	r4 = 0xC395086u; UPD(0x0C054E54u, 1);  /* 0C054E52 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r10 = v_; } UPD(0x0C054E56u, 1);  /* 0C054E54 mov.b @Rm+,Rn */
	W8(r4, r6); UPD(0x0C054E58u, 1);  /* 0C054E56 mov.b Rm,@Rn */
	r5 = 0xC26C8C4u; UPD(0x0C054E5Au, 1);  /* 0C054E58 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C054E5Cu, 1);  /* 0C054E5A mov.b @Rm,Rn */
	W8(r5, r2); UPD(0x0C054E5Eu, 1);  /* 0C054E5C mov.b Rm,@Rn */
	r8 += 0x4u;  /* 0C054E5E add #imm,Rn */
	r1 = 0xC21F5E0u; UPD(0x0C054E62u, 2);  /* 0C054E60 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C054E64u, 1);  /* 0C054E62 mov.b @Rm,Rn */
	W8(r1, r0); UPD(0x0C054E66u, 1);  /* 0C054E64 mov.b Rm,@Rn */
	r8 += 0xFFFFFFFEu;  /* 0C054E66 add #imm,Rn */
	r7 = 0xC22466Cu; UPD(0x0C054E6Au, 2);  /* 0C054E68 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r0 = v_; } UPD(0x0C054E6Cu, 1);  /* 0C054E6A mov.b @Rm+,Rn */
	W8(r7, r11); UPD(0x0C054E6Eu, 1);  /* 0C054E6C mov.b Rm,@Rn */
	W8(r9, r3); UPD(0x0C054E70u, 1);  /* 0C054E6E mov.b Rm,@Rn */
	r4 = 0xC220C53u; UPD(0x0C054E72u, 1);  /* 0C054E70 mov.l @(disp,pc),Rn */
	r9 = 0xC21F588u; UPD(0x0C054E74u, 1);  /* 0C054E72 mov.l @(disp,pc),Rn */
	r5 = 0xC286276u; UPD(0x0C054E76u, 1);  /* 0C054E74 mov.l @(disp,pc),Rn */
	r1 = 0xC392D50u; UPD(0x0C054E78u, 1);  /* 0C054E76 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)R8(r8); UPD(0x0C054E7Au, 1);  /* 0C054E78 mov.b @Rm,Rn */
	r7 = 0xC392E24u; UPD(0x0C054E7Cu, 1);  /* 0C054E7A mov.l @(disp,pc),Rn */
	W8(r9, r10); UPD(0x0C054E7Eu, 1);  /* 0C054E7C mov.b Rm,@Rn */
	W8(r4, r6); UPD(0x0C054E80u, 1);  /* 0C054E7E mov.b Rm,@Rn */
	W8(r5, r2); UPD(0x0C054E82u, 1);  /* 0C054E80 mov.b Rm,@Rn */
	W8(r1, r0); UPD(0x0C054E84u, 1);  /* 0C054E82 mov.b Rm,@Rn */
	W8(r7, r11); UPD(0x0C054E86u, 1);  /* 0C054E84 mov.b Rm,@Rn */
L_0C054E86: BLKS(0x0C054E86u);
	{ IF(0x0C054E88u); ; /* slot nop */ UPD(0x0C054D82u, 3); goto L_0C054D82; }  /* 0C054E86 bra */
L_0C054E90: BLKS(0x0C054E90u);
	r9 = 0xC050CD0u; UPD(0x0C054E92u, 1);  /* 0C054E90 mov.l @(disp,pc),Rn */
	r11 = 0xC161224u; UPD(0x0C054E94u, 1);  /* 0C054E92 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C054E94 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C054E98u, 2);  /* 0C054E96 mov.l @(disp,pc),Rn */
	r10 = 0xC161228u; UPD(0x0C054E9Au, 1);  /* 0C054E98 mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C054E9A mov Rm,Rn */
	IF(0x0C054E9Cu); { u32 t_ = r9; PR = 0x0C054EA0u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054EA0u); }  /* 0C054E9C jsr @Rn */
L_0C054EA0: BLKS(0x0C054EA0u);
	r4 = R32(r10); UPD(0x0C054EA2u, 1);  /* 0C054EA0 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C054EA2 mov #imm,Rn */
	r6 = 0x4u;  /* 0C054EA4 mov #imm,Rn */
	IF(0x0C054EA6u); { u32 t_ = r9; PR = 0x0C054EAAu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054EAAu); }  /* 0C054EA6 jsr @Rn */
L_0C054EAA: BLKS(0x0C054EAAu);
	r4 = R32(r10); UPD(0x0C054EACu, 1);  /* 0C054EAA mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C054EAC mov #imm,Rn */
	r6 = 0x4u;  /* 0C054EAE mov #imm,Rn */
	IF(0x0C054EB0u); { u32 t_ = r9; PR = 0x0C054EB4u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054EB4u); }  /* 0C054EB0 jsr @Rn */
L_0C054EB4: BLKS(0x0C054EB4u);
	r4 = R32(r10); UPD(0x0C054EB6u, 1);  /* 0C054EB4 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C054EB6 mov #imm,Rn */
	r6 = 0x4u;  /* 0C054EB8 mov #imm,Rn */
	IF(0x0C054EBAu); { u32 t_ = r9; PR = 0x0C054EBEu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054EBEu); }  /* 0C054EBA jsr @Rn */
L_0C054EBE: BLKS(0x0C054EBEu);
	r4 = R32(r10); UPD(0x0C054EC0u, 1);  /* 0C054EBE mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C054EC0 mov #imm,Rn */
	r6 = 0x4u;  /* 0C054EC2 mov #imm,Rn */
	IF(0x0C054EC4u); { u32 t_ = r9; PR = 0x0C054EC8u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054EC8u); }  /* 0C054EC4 jsr @Rn */
L_0C054EC8: BLKS(0x0C054EC8u);
	r4 = R32(r11); UPD(0x0C054ECAu, 1);  /* 0C054EC8 mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C054ECA mov #imm,Rn */
	r6 = 0x4u;  /* 0C054ECC mov #imm,Rn */
	IF(0x0C054ECEu); { u32 t_ = r9; PR = 0x0C054ED2u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054ED2u); }  /* 0C054ECE jsr @Rn */
L_0C054ED2: BLKS(0x0C054ED2u);
	r4 = 0xC16063Cu; UPD(0x0C054ED4u, 1);  /* 0C054ED2 mov.l @(disp,pc),Rn */
	r6 = 0x6u;  /* 0C054ED4 mov #imm,Rn */
	r5 = 0x7u;  /* 0C054ED6 mov #imm,Rn */
	IF(0x0C054ED8u); { u32 t_ = r9; PR = 0x0C054EDCu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054EDCu); }  /* 0C054ED8 jsr @Rn */
L_0C054EDC: BLKS(0x0C054EDCu);
	r6 = 0xC27DE74u; UPD(0x0C054EDEu, 1);  /* 0C054EDC mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r6); UPD(0x0C054EE0u, 1);  /* 0C054EDE mov.b @Rm,Rn */
	IF(0x0C054EE0u); T = (s32)r4 >= 0;  /* 0C054EE0 cmp/pz Rn */
	if (T) { UPD(0x0C054E86u, 4); goto L_0C054E86; }  /* 0C054EE2 bt */
L_0C054EE4: BLKS(0x0C054EE4u);
	r12 = 0x2u;  /* 0C054EE4 mov #imm,Rn */
	{ IF(0x0C054EE8u); ; /* slot nop */ UPD(0x0C054D82u, 4); goto L_0C054D82; }  /* 0C054EE6 bra */
}

/* FUN_0c054f50 */
void f_0C054F50(sh3_t *c)
{
	LOCALS;
L_0C054F50: BLKS(0x0C054F50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C054F52u, 1);  /* 0C054F50 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C054F52 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C054F56u, 2);  /* 0C054F54 mov.l Rm,@-Rn */
	T = r0 == 0x5u;  /* 0C054F56 cmp/eq #imm,r0 */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C054F5Au, 2);  /* 0C054F58 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C054F5A mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C054F5Eu, 2);  /* 0C054F5C mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r5;  /* 0C054F5E exts.b Rm,Rn */
	IF(0x0C054F60u); r15 -= 4; W32(r15, PR); UPD(0x0C054F62u, 2);  /* 0C054F60 sts.l pr,@-Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C054F80u, 3); goto L_0C054F80; } UPD(0x0C054F66u, 1); goto L_0C054F66; }  /* 0C054F62 bt/s */
L_0C054F66: BLKS(0x0C054F66u);
	r0 = r1;  /* 0C054F66 mov Rm,Rn */
	r15 = r14;  /* 0C054F68 mov Rm,Rn */
	IF(0x0C054F6Au); PR = R32(r15); r15 += 4; UPD(0x0C054F6Cu, 3);  /* 0C054F6A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C054F6Eu, 1);  /* 0C054F6C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C054F70u, 1);  /* 0C054F6E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C054F72u, 1);  /* 0C054F70 mov.l @Rm+,Rn */
	IF(0x0C054F72u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C054F72 rts */
L_0C054F80: BLKS(0x0C054F80u);
	T = r10 > r0;  /* 0C054F80 cmp/hi Rm,Rn */
	{ u32 c_ = T; r1 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C054F66u, 4); goto L_0C054F66; } goto L_0C054F86; }  /* 0C054F82 bt/s */
L_0C054F86: BLKS(0x0C054F86u);
	r1 = r10;  /* 0C054F86 mov Rm,Rn */
	r0 = 0xC054F94u;  /* 0C054F88 mova @(disp,pc),r0 */
	IF(0x0C054F8Au); r3 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C054F8Cu, 4);  /* 0C054F8A mov.b @(r0,Rm),Rn */
	r3 = r3 & 0xFF;  /* 0C054F8C extu.b Rm,Rn */
	IF(0x0C054F8Eu); { u32 tv_ = (r3 + 0x0C054F92u); u32 t_ = PHYS(tv_); IF(0x0C054F90u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C054FA0u: goto L_0C054FA0; case 0x0C054FC0u: goto L_0C054FC0; case 0x0C054FF0u: goto L_0C054FF0; case 0x0C055000u: goto L_0C055000; case 0x0C055010u: goto L_0C055010; default: JUMPD(tv_); } }  /* 0C054F8E braf Rn */
L_0C054FA0: BLKS(0x0C054FA0u);
	r8 = 0xC0558A0u; UPD(0x0C054FA2u, 1);  /* 0C054FA0 mov.l @(disp,pc),Rn */
	IF(0x0C054FA2u); { u32 t_ = r8; PR = 0x0C054FA6u; IF(0x0C054FA4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0558A0, 0x0C0558A0u, 0x0C054FA6u); }  /* 0C054FA2 jsr @Rn */
L_0C054FA6: BLKS(0x0C054FA6u);
	T = (r0 & r0) == 0;  /* 0C054FA6 tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C054F66u, 4); goto L_0C054F66; } goto L_0C054FAC; }  /* 0C054FA8 bf/s */
L_0C054FAC: BLKS(0x0C054FACu);
	r4 = r10;  /* 0C054FAC mov Rm,Rn */
	UPD(0x0C054FAEu, 2);
L_0C054FAE: BLKS(0x0C054FAEu);
	r4 += 0x1u;  /* 0C054FAE add #imm,Rn */
	UPD(0x0C054FB0u, 1);
L_0C054FB0: BLKS(0x0C054FB0u);
	r10 = (u32)(s32)(s8)r4;  /* 0C054FB0 exts.b Rm,Rn */
	UPD(0x0C054FB2u, 1);
L_0C054FB2: BLKS(0x0C054FB2u);
	{ r1 = r10; /* slot mov Rm,Rn */ UPD(0x0C054F66u, 3); goto L_0C054F66; }  /* 0C054FB2 bra */
L_0C054FC0: BLKS(0x0C054FC0u);
	r9 = 0xC050CD0u; UPD(0x0C054FC2u, 1);  /* 0C054FC0 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C054FC2 mov #imm,Rn */
	r0 = 0xC160628u; UPD(0x0C054FC6u, 2);  /* 0C054FC4 mov.l @(disp,pc),Rn */
	r6 = 0x6u;  /* 0C054FC6 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C054FCAu, 2);  /* 0C054FC8 mov.l @(disp,pc),Rn */
	r4 = R32(r0); UPD(0x0C054FCCu, 1);  /* 0C054FCA mov.l @Rm,Rn */
	IF(0x0C054FCCu); { u32 t_ = r9; PR = 0x0C054FD0u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054FD0u); }  /* 0C054FCC jsr @Rn */
L_0C054FD0: BLKS(0x0C054FD0u);
	r4 = 0xC16062Cu; UPD(0x0C054FD2u, 1);  /* 0C054FD0 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C054FD2 mov #imm,Rn */
	r6 = 0x6u;  /* 0C054FD4 mov #imm,Rn */
	IF(0x0C054FD6u); { u32 t_ = r9; PR = 0x0C054FDAu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054FDAu); }  /* 0C054FD6 jsr @Rn */
L_0C054FDA: BLKS(0x0C054FDAu);
	r3 = 0xC27DE74u; UPD(0x0C054FDCu, 1);  /* 0C054FDA mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C054FDEu, 1);  /* 0C054FDC mov.b @Rm,Rn */
	IF(0x0C054FDEu); T = (s32)r2 >= 0;  /* 0C054FDE cmp/pz Rn */
	if (T) { UPD(0x0C054FB2u, 4); goto L_0C054FB2; }  /* 0C054FE0 bt */
L_0C054FE2: BLKS(0x0C054FE2u);
	r4 = r10;  /* 0C054FE2 mov Rm,Rn */
	{ r4 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C054FB0u, 4); goto L_0C054FB0; }  /* 0C054FE4 bra */
L_0C054FF0: BLKS(0x0C054FF0u);
	r9 = 0xC050CD0u; UPD(0x0C054FF2u, 1);  /* 0C054FF0 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C054FF2 mov #imm,Rn */
	r4 = 0xC16063Cu; UPD(0x0C054FF6u, 2);  /* 0C054FF4 mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C054FF8u, 1);  /* 0C054FF6 mov.l @(disp,pc),Rn */
	IF(0x0C054FF8u); { u32 t_ = r9; PR = 0x0C054FFCu; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C054FFCu); }  /* 0C054FF8 jsr @Rn */
L_0C054FFC: BLKS(0x0C054FFCu);
	{ IF(0x0C054FFEu); ; /* slot nop */ UPD(0x0C054FDAu, 3); goto L_0C054FDA; }  /* 0C054FFC bra */
L_0C055000: BLKS(0x0C055000u);
	r8 = 0xC050CD0u; UPD(0x0C055002u, 1);  /* 0C055000 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C055002 mov #imm,Rn */
	r4 = 0xC16064Cu; UPD(0x0C055006u, 2);  /* 0C055004 mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C055008u, 1);  /* 0C055006 mov.l @(disp,pc),Rn */
	IF(0x0C055008u); { u32 t_ = r8; PR = 0x0C05500Cu; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05500Cu); }  /* 0C055008 jsr @Rn */
L_0C05500C: BLKS(0x0C05500Cu);
	{ r4 = r10; /* slot mov Rm,Rn */ UPD(0x0C054FAEu, 3); goto L_0C054FAE; }  /* 0C05500C bra */
L_0C055010: BLKS(0x0C055010u);
	r5 = 0xC392DC2u; UPD(0x0C055012u, 1);  /* 0C055010 mov.l @(disp,pc),Rn */
	r8 = 0xC21CCACu; UPD(0x0C055014u, 1);  /* 0C055012 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s8)R8(r5); UPD(0x0C055016u, 1);  /* 0C055014 mov.b @Rm,Rn */
	r2 = 0xC392AE4u; UPD(0x0C055018u, 1);  /* 0C055016 mov.l @(disp,pc),Rn */
	W8(r8, r10); UPD(0x0C05501Au, 1);  /* 0C055018 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r4 = v_; } UPD(0x0C05501Cu, 1);  /* 0C05501A mov.b @Rm+,Rn */
	r8 += 0xFFFFFFF4u;  /* 0C05501C add #imm,Rn */
	r0 = 0xC286750u; UPD(0x0C055020u, 2);  /* 0C05501E mov.l @(disp,pc),Rn */
	W8(r8, r4); UPD(0x0C055022u, 1);  /* 0C055020 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r3 = v_; } UPD(0x0C055024u, 1);  /* 0C055022 mov.b @Rm+,Rn */
	r8 += 0x1u;  /* 0C055024 add #imm,Rn */
	r5 = 0xC393028u; UPD(0x0C055028u, 2);  /* 0C055026 mov.l @(disp,pc),Rn */
	W8(r8, r3); UPD(0x0C05502Au, 1);  /* 0C055028 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r7 = v_; } UPD(0x0C05502Cu, 1);  /* 0C05502A mov.b @Rm+,Rn */
	r8 += 0x1u;  /* 0C05502C add #imm,Rn */
	W8(r8, r7); UPD(0x0C055030u, 2);  /* 0C05502E mov.b Rm,@Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C055032u, 1);  /* 0C055030 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C055032 add #imm,Rn */
	W8(r8, r9); UPD(0x0C055036u, 2);  /* 0C055034 mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r0); UPD(0x0C055038u, 1);  /* 0C055036 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C055038 add #imm,Rn */
	W8(r8, r6); UPD(0x0C05503Cu, 2);  /* 0C05503A mov.b Rm,@Rn */
	r10 = (u32)(s32)(s8)R8(r5); UPD(0x0C05503Eu, 1);  /* 0C05503C mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C05503E add #imm,Rn */
	r4 = 0xC395086u; UPD(0x0C055042u, 2);  /* 0C055040 mov.l @(disp,pc),Rn */
	W8(r8, r10); UPD(0x0C055044u, 1);  /* 0C055042 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C055046u, 1);  /* 0C055044 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C055046 add #imm,Rn */
	r2 = 0xC26C8C4u; UPD(0x0C05504Au, 2);  /* 0C055048 mov.l @(disp,pc),Rn */
	W8(r8, r3); UPD(0x0C05504Cu, 1);  /* 0C05504A mov.b Rm,@Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C05504Eu, 1);  /* 0C05504C mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C05504E add #imm,Rn */
	r0 = 0xC21F5E0u; UPD(0x0C055052u, 2);  /* 0C055050 mov.l @(disp,pc),Rn */
	W8(r8, r9); UPD(0x0C055054u, 1);  /* 0C055052 mov.b Rm,@Rn */
	r7 = (u32)(s32)(s8)R8(r0); UPD(0x0C055056u, 1);  /* 0C055054 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C055056 add #imm,Rn */
	r6 = 0xC22466Cu; UPD(0x0C05505Au, 2);  /* 0C055058 mov.l @(disp,pc),Rn */
	W8(r8, r7); UPD(0x0C05505Cu, 1);  /* 0C05505A mov.b Rm,@Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C05505Eu, 1);  /* 0C05505C mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C05505E add #imm,Rn */
	r10 = 0xC21F588u; UPD(0x0C055062u, 2);  /* 0C055060 mov.l @(disp,pc),Rn */
	W8(r8, r5); UPD(0x0C055064u, 1);  /* 0C055062 mov.b Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C055066u, 1);  /* 0C055064 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C055066 add #imm,Rn */
	r3 = 0xC220C53u; UPD(0x0C05506Au, 2);  /* 0C055068 mov.l @(disp,pc),Rn */
	W8(r8, r4); UPD(0x0C05506Cu, 1);  /* 0C05506A mov.b Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C05506Eu, 1);  /* 0C05506C mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C05506E add #imm,Rn */
	r9 = 0xC392D50u; UPD(0x0C055072u, 2);  /* 0C055070 mov.l @(disp,pc),Rn */
	W8(r8, r2); UPD(0x0C055074u, 1);  /* 0C055072 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C055076u, 1);  /* 0C055074 mov.b @Rm,Rn */
	r8 += 0x2u;  /* 0C055076 add #imm,Rn */
	r7 = 0xC392E24u; UPD(0x0C05507Au, 2);  /* 0C055078 mov.l @(disp,pc),Rn */
	W8(r8, r0); UPD(0x0C05507Cu, 1);  /* 0C05507A mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C05507Eu, 1);  /* 0C05507C mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C05507E add #imm,Rn */
	r5 = 0xC286276u; UPD(0x0C055082u, 2);  /* 0C055080 mov.l @(disp,pc),Rn */
	W8(r8, r6); UPD(0x0C055084u, 1);  /* 0C055082 mov.b Rm,@Rn */
	r10 = (u32)(s32)(s8)R8(r5); UPD(0x0C055086u, 1);  /* 0C055084 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C055086 add #imm,Rn */
	r4 = 0xC21F89Bu; UPD(0x0C05508Au, 2);  /* 0C055088 mov.l @(disp,pc),Rn */
	W8(r8, r10); UPD(0x0C05508Cu, 1);  /* 0C05508A mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C05508Eu, 1);  /* 0C05508C mov.b @Rm,Rn */
	r8 += 0x1u; UPD(0x0C055090u, 1);  /* 0C05508E add #imm,Rn */
	W8(r8, r3); UPD(0x0C055092u, 1);  /* 0C055090 mov.b Rm,@Rn */
	r2 = 0xC2175E7u; UPD(0x0C055094u, 1);  /* 0C055092 mov.l @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C055094 add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C055098u, 2);  /* 0C055096 mov.b @Rm,Rn */
	r0 = 0xC21E103u; UPD(0x0C05509Au, 1);  /* 0C055098 mov.l @(disp,pc),Rn */
	W8(r8, r9); UPD(0x0C05509Cu, 1);  /* 0C05509A mov.b Rm,@Rn */
	r7 = (u32)(s32)(s8)R8(r0); UPD(0x0C05509Eu, 1);  /* 0C05509C mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C05509E add #imm,Rn */
	r6 = 0xC26CADBu; UPD(0x0C0550A2u, 2);  /* 0C0550A0 mov.l @(disp,pc),Rn */
	W8(r8, r7); UPD(0x0C0550A4u, 1);  /* 0C0550A2 mov.b Rm,@Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0550A6u, 1);  /* 0C0550A4 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0550A6 add #imm,Rn */
	W8(r8, r5); UPD(0x0C0550AAu, 2);  /* 0C0550A8 mov.b Rm,@Rn */
	r6 = 0x40u;  /* 0C0550AA mov #imm,Rn */
	r10 = 0xC04C23Cu; UPD(0x0C0550AEu, 2);  /* 0C0550AC mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFEDu;  /* 0C0550AE add #imm,Rn */
	r4 = r8;  /* 0C0550B0 mov Rm,Rn */
	IF(0x0C0550B2u); { u32 t_ = r10; PR = 0x0C0550B6u; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C04C23C, 0x0C04C23Cu, 0x0C0550B6u); }  /* 0C0550B2 jsr @Rn */
L_0C0550B6: BLKS(0x0C0550B6u);
	r3 = 0xC28651Cu; UPD(0x0C0550B8u, 1);  /* 0C0550B6 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C0550B8 mov #imm,Rn */
	r2 = 0x3Fu;  /* 0C0550BA mov #imm,Rn */
	UPD(0x0C0550BCu, 2);
L_0C0550BC: BLKS(0x0C0550BCu);
	IF(0x0C0550BCu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0550BEu, 1);  /* 0C0550BC mov.b @(r0,Rm),Rn */
	r6 = r0;  /* 0C0550BE mov Rm,Rn */
	IF(0x0C0550C0u); W8(r0 + r3, r9); UPD(0x0C0550C2u, 2);  /* 0C0550C0 mov.b Rm,@(r0,Rn) */
	r6 += 0x1u;  /* 0C0550C2 add #imm,Rn */
	r0 = (u32)(s32)(s16)r6;  /* 0C0550C4 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C0550C6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0550BCu, 6); goto L_0C0550BC; } goto L_0C0550CC; }  /* 0C0550C8 bf/s */
L_0C0550CC: BLKS(0x0C0550CCu);
	{ IF(0x0C0550CEu); ; /* slot nop */ UPD(0x0C054FB2u, 4); goto L_0C054FB2; }  /* 0C0550CC bra */
}

/* FUN_0c055140 */
void f_0C055140(sh3_t *c)
{
	LOCALS;
L_0C055140: BLKS(0x0C055140u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C055142u, 1);  /* 0C055140 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C055142 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C055146u, 2);  /* 0C055144 mov.l Rm,@-Rn */
	T = r0 == 0x11u;  /* 0C055146 cmp/eq #imm,r0 */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05514Au, 2);  /* 0C055148 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C05514A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C05514Eu, 2);  /* 0C05514C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C055150u, 1);  /* 0C05514E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C055152u, 1);  /* 0C055150 mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r5;  /* 0C055152 exts.b Rm,Rn */
	IF(0x0C055154u); r15 -= 4; W32(r15, PR); UPD(0x0C055156u, 2);  /* 0C055154 sts.l pr,@-Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C055170u, 3); goto L_0C055170; } UPD(0x0C05515Au, 1); goto L_0C05515A; }  /* 0C055156 bt/s */
L_0C05515A: BLKS(0x0C05515Au);
	r15 = r14;  /* 0C05515A mov Rm,Rn */
	IF(0x0C05515Cu); PR = R32(r15); r15 += 4; UPD(0x0C05515Eu, 2);  /* 0C05515C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C055160u, 1);  /* 0C05515E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C055162u, 1);  /* 0C055160 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C055164u, 1);  /* 0C055162 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C055166u, 1);  /* 0C055164 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C055168u, 1);  /* 0C055166 mov.l @Rm+,Rn */
	IF(0x0C055168u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C055168 rts */
L_0C055170: BLKS(0x0C055170u);
	r8 = 0xC0558A0u; UPD(0x0C055172u, 1);  /* 0C055170 mov.l @(disp,pc),Rn */
	IF(0x0C055172u); { u32 t_ = r8; PR = 0x0C055176u; IF(0x0C055174u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0558A0, 0x0C0558A0u, 0x0C055176u); }  /* 0C055172 jsr @Rn */
L_0C055176: BLKS(0x0C055176u);
	T = (r0 & r0) == 0;  /* 0C055176 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05515Au, 4); goto L_0C05515A; } goto L_0C05517C; }  /* 0C055178 bf/s */
L_0C05517C: BLKS(0x0C05517Cu);
	r0 = 0x4u;  /* 0C05517C mov #imm,Rn */
	T = r12 > r0;  /* 0C05517E cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05515Au, 6); goto L_0C05515A; } goto L_0C055184; }  /* 0C055180 bt/s */
L_0C055184: BLKS(0x0C055184u);
	r1 = r12;  /* 0C055184 mov Rm,Rn */
	r0 = 0xC055194u;  /* 0C055186 mova @(disp,pc),r0 */
	r1 += r1;  /* 0C055188 add Rm,Rn */
	IF(0x0C05518Au); r3 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C05518Cu, 5);  /* 0C05518A mov.w @(r0,Rm),Rn */
	IF(0x0C05518Cu); { u32 tv_ = (r3 + 0x0C055190u); u32 t_ = PHYS(tv_); IF(0x0C05518Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0551A0u: goto L_0C0551A0; case 0x0C055210u: goto L_0C055210; case 0x0C055260u: goto L_0C055260; case 0x0C0552C0u: goto L_0C0552C0; default: JUMPD(tv_); } }  /* 0C05518C braf Rn */
L_0C0551A0: BLKS(0x0C0551A0u);
	r9 = 0xC050CD0u; UPD(0x0C0551A2u, 1);  /* 0C0551A0 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C0551A2 mov #imm,Rn */
	r11 = 0xC161224u; UPD(0x0C0551A6u, 2);  /* 0C0551A4 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C0551A6 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C0551AAu, 2);  /* 0C0551A8 mov.l @(disp,pc),Rn */
	r10 = 0xC161228u; UPD(0x0C0551ACu, 1);  /* 0C0551AA mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C0551AC mov Rm,Rn */
	IF(0x0C0551AEu); { u32 t_ = r9; PR = 0x0C0551B2u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0551B2u); }  /* 0C0551AE jsr @Rn */
L_0C0551B2: BLKS(0x0C0551B2u);
	r4 = R32(r10); UPD(0x0C0551B4u, 1);  /* 0C0551B2 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C0551B4 mov #imm,Rn */
	r6 = 0x4u;  /* 0C0551B6 mov #imm,Rn */
	IF(0x0C0551B8u); { u32 t_ = r9; PR = 0x0C0551BCu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0551BCu); }  /* 0C0551B8 jsr @Rn */
L_0C0551BC: BLKS(0x0C0551BCu);
	r4 = R32(r10); UPD(0x0C0551BEu, 1);  /* 0C0551BC mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C0551BE mov #imm,Rn */
	r6 = 0x4u;  /* 0C0551C0 mov #imm,Rn */
	IF(0x0C0551C2u); { u32 t_ = r9; PR = 0x0C0551C6u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0551C6u); }  /* 0C0551C2 jsr @Rn */
L_0C0551C6: BLKS(0x0C0551C6u);
	r4 = R32(r10); UPD(0x0C0551C8u, 1);  /* 0C0551C6 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C0551C8 mov #imm,Rn */
	r6 = 0x4u;  /* 0C0551CA mov #imm,Rn */
	IF(0x0C0551CCu); { u32 t_ = r9; PR = 0x0C0551D0u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0551D0u); }  /* 0C0551CC jsr @Rn */
L_0C0551D0: BLKS(0x0C0551D0u);
	r4 = R32(r10); UPD(0x0C0551D2u, 1);  /* 0C0551D0 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C0551D2 mov #imm,Rn */
	r6 = 0x4u;  /* 0C0551D4 mov #imm,Rn */
	IF(0x0C0551D6u); { u32 t_ = r9; PR = 0x0C0551DAu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0551DAu); }  /* 0C0551D6 jsr @Rn */
L_0C0551DA: BLKS(0x0C0551DAu);
	r4 = R32(r11); UPD(0x0C0551DCu, 1);  /* 0C0551DA mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C0551DC mov #imm,Rn */
	r6 = 0x4u;  /* 0C0551DE mov #imm,Rn */
	IF(0x0C0551E0u); { u32 t_ = r9; PR = 0x0C0551E4u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0551E4u); }  /* 0C0551E0 jsr @Rn */
L_0C0551E4: BLKS(0x0C0551E4u);
	r2 = 0xC160628u; UPD(0x0C0551E6u, 1);  /* 0C0551E4 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C0551E6 mov #imm,Rn */
	r4 = R32(r2); UPD(0x0C0551EAu, 2);  /* 0C0551E8 mov.l @Rm,Rn */
	r6 = 0x6u;  /* 0C0551EA mov #imm,Rn */
	IF(0x0C0551ECu); { u32 t_ = r9; PR = 0x0C0551F0u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0551F0u); }  /* 0C0551EC jsr @Rn */
L_0C0551F0: BLKS(0x0C0551F0u);
	r4 = 0xC16062Cu; UPD(0x0C0551F2u, 1);  /* 0C0551F0 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C0551F2 mov #imm,Rn */
	UPD(0x0C0551F4u, 1);
L_0C0551F4: BLKS(0x0C0551F4u);
	r6 = 0x6u;  /* 0C0551F4 mov #imm,Rn */
	IF(0x0C0551F6u); { u32 t_ = r9; PR = 0x0C0551FAu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0551FAu); }  /* 0C0551F6 jsr @Rn */
L_0C0551FA: BLKS(0x0C0551FAu);
	r5 = 0xC27DE74u; UPD(0x0C0551FCu, 1);  /* 0C0551FA mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C0551FEu, 1);  /* 0C0551FC mov.b @Rm,Rn */
	IF(0x0C0551FEu); T = (s32)r4 >= 0;  /* 0C0551FE cmp/pz Rn */
	if (T) { UPD(0x0C055208u, 4); goto L_0C055208; }  /* 0C055200 bt */
L_0C055202: BLKS(0x0C055202u);
	r6 = r12;  /* 0C055202 mov Rm,Rn */
	UPD(0x0C055204u, 1);
L_0C055204: BLKS(0x0C055204u);
	r6 += 0x1u;  /* 0C055204 add #imm,Rn */
	r12 = (u32)(s32)(s8)r6;  /* 0C055206 exts.b Rm,Rn */
	UPD(0x0C055208u, 2);
L_0C055208: BLKS(0x0C055208u);
	{ r0 = r12; /* slot mov Rm,Rn */ UPD(0x0C05515Au, 3); goto L_0C05515A; }  /* 0C055208 bra */
L_0C055210: BLKS(0x0C055210u);
	r9 = 0xC050CD0u; UPD(0x0C055212u, 1);  /* 0C055210 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C055212 mov #imm,Rn */
	r11 = 0xC161224u; UPD(0x0C055216u, 2);  /* 0C055214 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C055216 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C05521Au, 2);  /* 0C055218 mov.l @(disp,pc),Rn */
	r10 = 0xC161228u; UPD(0x0C05521Cu, 1);  /* 0C05521A mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C05521C mov Rm,Rn */
	IF(0x0C05521Eu); { u32 t_ = r9; PR = 0x0C055222u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055222u); }  /* 0C05521E jsr @Rn */
L_0C055222: BLKS(0x0C055222u);
	r4 = R32(r10); UPD(0x0C055224u, 1);  /* 0C055222 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C055224 mov #imm,Rn */
	r6 = 0x4u;  /* 0C055226 mov #imm,Rn */
	IF(0x0C055228u); { u32 t_ = r9; PR = 0x0C05522Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05522Cu); }  /* 0C055228 jsr @Rn */
L_0C05522C: BLKS(0x0C05522Cu);
	r4 = R32(r10); UPD(0x0C05522Eu, 1);  /* 0C05522C mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C05522E mov #imm,Rn */
	r6 = 0x4u;  /* 0C055230 mov #imm,Rn */
	IF(0x0C055232u); { u32 t_ = r9; PR = 0x0C055236u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055236u); }  /* 0C055232 jsr @Rn */
L_0C055236: BLKS(0x0C055236u);
	r4 = R32(r10); UPD(0x0C055238u, 1);  /* 0C055236 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C055238 mov #imm,Rn */
	r6 = 0x4u;  /* 0C05523A mov #imm,Rn */
	IF(0x0C05523Cu); { u32 t_ = r9; PR = 0x0C055240u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055240u); }  /* 0C05523C jsr @Rn */
L_0C055240: BLKS(0x0C055240u);
	r4 = R32(r10); UPD(0x0C055242u, 1);  /* 0C055240 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C055242 mov #imm,Rn */
	r6 = 0x4u;  /* 0C055244 mov #imm,Rn */
	IF(0x0C055246u); { u32 t_ = r9; PR = 0x0C05524Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05524Au); }  /* 0C055246 jsr @Rn */
L_0C05524A: BLKS(0x0C05524Au);
	r4 = R32(r11); UPD(0x0C05524Cu, 1);  /* 0C05524A mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C05524C mov #imm,Rn */
	r6 = 0x4u;  /* 0C05524E mov #imm,Rn */
	IF(0x0C055250u); { u32 t_ = r9; PR = 0x0C055254u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055254u); }  /* 0C055250 jsr @Rn */
L_0C055254: BLKS(0x0C055254u);
	r4 = 0xC16063Cu; UPD(0x0C055256u, 1);  /* 0C055254 mov.l @(disp,pc),Rn */
	{ r5 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C0551F4u, 3); goto L_0C0551F4; }  /* 0C055256 bra */
L_0C055260: BLKS(0x0C055260u);
	r9 = 0xC050CD0u; UPD(0x0C055262u, 1);  /* 0C055260 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C055262 mov #imm,Rn */
	r11 = 0xC161224u; UPD(0x0C055266u, 2);  /* 0C055264 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C055266 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C05526Au, 2);  /* 0C055268 mov.l @(disp,pc),Rn */
	r10 = 0xC161228u; UPD(0x0C05526Cu, 1);  /* 0C05526A mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C05526C mov Rm,Rn */
	IF(0x0C05526Eu); { u32 t_ = r9; PR = 0x0C055272u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055272u); }  /* 0C05526E jsr @Rn */
L_0C055272: BLKS(0x0C055272u);
	r4 = R32(r10); UPD(0x0C055274u, 1);  /* 0C055272 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C055274 mov #imm,Rn */
	r6 = 0x4u;  /* 0C055276 mov #imm,Rn */
	IF(0x0C055278u); { u32 t_ = r9; PR = 0x0C05527Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05527Cu); }  /* 0C055278 jsr @Rn */
L_0C05527C: BLKS(0x0C05527Cu);
	r4 = R32(r10); UPD(0x0C05527Eu, 1);  /* 0C05527C mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C05527E mov #imm,Rn */
	r6 = 0x4u;  /* 0C055280 mov #imm,Rn */
	IF(0x0C055282u); { u32 t_ = r9; PR = 0x0C055286u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055286u); }  /* 0C055282 jsr @Rn */
L_0C055286: BLKS(0x0C055286u);
	r4 = R32(r10); UPD(0x0C055288u, 1);  /* 0C055286 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C055288 mov #imm,Rn */
	r6 = 0x4u;  /* 0C05528A mov #imm,Rn */
	IF(0x0C05528Cu); { u32 t_ = r9; PR = 0x0C055290u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055290u); }  /* 0C05528C jsr @Rn */
L_0C055290: BLKS(0x0C055290u);
	r4 = R32(r10); UPD(0x0C055292u, 1);  /* 0C055290 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C055292 mov #imm,Rn */
	r6 = 0x4u;  /* 0C055294 mov #imm,Rn */
	IF(0x0C055296u); { u32 t_ = r9; PR = 0x0C05529Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05529Au); }  /* 0C055296 jsr @Rn */
L_0C05529A: BLKS(0x0C05529Au);
	r4 = R32(r11); UPD(0x0C05529Cu, 1);  /* 0C05529A mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C05529C mov #imm,Rn */
	r6 = 0x4u;  /* 0C05529E mov #imm,Rn */
	IF(0x0C0552A0u); { u32 t_ = r9; PR = 0x0C0552A4u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0552A4u); }  /* 0C0552A0 jsr @Rn */
L_0C0552A4: BLKS(0x0C0552A4u);
	r4 = 0xC16064Cu; UPD(0x0C0552A6u, 1);  /* 0C0552A4 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C0552A6 mov #imm,Rn */
	r6 = 0x6u;  /* 0C0552A8 mov #imm,Rn */
	IF(0x0C0552AAu); { u32 t_ = r9; PR = 0x0C0552AEu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0552AEu); }  /* 0C0552AA jsr @Rn */
L_0C0552AE: BLKS(0x0C0552AEu);
	{ r6 = r12; /* slot mov Rm,Rn */ UPD(0x0C055204u, 3); goto L_0C055204; }  /* 0C0552AE bra */
L_0C0552C0: BLKS(0x0C0552C0u);
	r12 = 0xC392DC2u; UPD(0x0C0552C2u, 1);  /* 0C0552C0 mov.l @(disp,pc),Rn */
	r8 = 0xC21CCACu; UPD(0x0C0552C4u, 1);  /* 0C0552C2 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)R8(r12); UPD(0x0C0552C6u, 1);  /* 0C0552C4 mov.b @Rm,Rn */
	r6 = 0xC392AE4u; UPD(0x0C0552C8u, 1);  /* 0C0552C6 mov.l @(disp,pc),Rn */
	W8(r8, r11); UPD(0x0C0552CAu, 1);  /* 0C0552C8 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r10 = v_; } UPD(0x0C0552CCu, 1);  /* 0C0552CA mov.b @Rm+,Rn */
	r8 += 0xFFFFFFF4u;  /* 0C0552CC add #imm,Rn */
	r5 = 0xC286750u; UPD(0x0C0552D0u, 2);  /* 0C0552CE mov.l @(disp,pc),Rn */
	W8(r8, r10); UPD(0x0C0552D2u, 1);  /* 0C0552D0 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r7 = v_; } UPD(0x0C0552D4u, 1);  /* 0C0552D2 mov.b @Rm+,Rn */
	r8 += 0x1u;  /* 0C0552D4 add #imm,Rn */
	r4 = 0xC393028u; UPD(0x0C0552D8u, 2);  /* 0C0552D6 mov.l @(disp,pc),Rn */
	W8(r8, r7); UPD(0x0C0552DAu, 1);  /* 0C0552D8 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r9 = v_; } UPD(0x0C0552DCu, 1);  /* 0C0552DA mov.b @Rm+,Rn */
	r8 += 0x1u;  /* 0C0552DC add #imm,Rn */
	W8(r8, r9); UPD(0x0C0552E0u, 2);  /* 0C0552DE mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C0552E2u, 1);  /* 0C0552E0 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0552E2 add #imm,Rn */
	W8(r8, r3); UPD(0x0C0552E6u, 2);  /* 0C0552E4 mov.b Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C0552E8u, 1);  /* 0C0552E6 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0552E8 add #imm,Rn */
	W8(r8, r2); UPD(0x0C0552ECu, 2);  /* 0C0552EA mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C0552EEu, 1);  /* 0C0552EC mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0552EE add #imm,Rn */
	r12 = 0xC395086u; UPD(0x0C0552F2u, 2);  /* 0C0552F0 mov.l @(disp,pc),Rn */
	W8(r8, r0); UPD(0x0C0552F4u, 1);  /* 0C0552F2 mov.b Rm,@Rn */
	r11 = (u32)(s32)(s8)R8(r12); UPD(0x0C0552F6u, 1);  /* 0C0552F4 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0552F6 add #imm,Rn */
	r10 = 0xC26C8C4u; UPD(0x0C0552FAu, 2);  /* 0C0552F8 mov.l @(disp,pc),Rn */
	W8(r8, r11); UPD(0x0C0552FCu, 1);  /* 0C0552FA mov.b Rm,@Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C0552FEu, 1);  /* 0C0552FC mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0552FE add #imm,Rn */
	r9 = 0xC21F5E0u; UPD(0x0C055302u, 2);  /* 0C055300 mov.l @(disp,pc),Rn */
	W8(r8, r7); UPD(0x0C055304u, 1);  /* 0C055302 mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C055306u, 1);  /* 0C055304 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C055306 add #imm,Rn */
	r5 = 0xC22466Cu; UPD(0x0C05530Au, 2);  /* 0C055308 mov.l @(disp,pc),Rn */
	W8(r8, r6); UPD(0x0C05530Cu, 1);  /* 0C05530A mov.b Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C05530Eu, 1);  /* 0C05530C mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C05530E add #imm,Rn */
	r2 = 0xC21F588u; UPD(0x0C055312u, 2);  /* 0C055310 mov.l @(disp,pc),Rn */
	W8(r8, r4); UPD(0x0C055314u, 1);  /* 0C055312 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C055316u, 1);  /* 0C055314 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C055316 add #imm,Rn */
	r0 = 0xC220C53u; UPD(0x0C05531Au, 2);  /* 0C055318 mov.l @(disp,pc),Rn */
	W8(r8, r3); UPD(0x0C05531Cu, 1);  /* 0C05531A mov.b Rm,@Rn */
	r12 = (u32)(s32)(s8)R8(r0); UPD(0x0C05531Eu, 1);  /* 0C05531C mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C05531E add #imm,Rn */
	r11 = 0xC392D50u; UPD(0x0C055322u, 2);  /* 0C055320 mov.l @(disp,pc),Rn */
	W8(r8, r12); UPD(0x0C055324u, 1);  /* 0C055322 mov.b Rm,@Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C055326u, 1);  /* 0C055324 mov.b @Rm,Rn */
	r8 += 0x2u;  /* 0C055326 add #imm,Rn */
	r7 = 0xC392E24u; UPD(0x0C05532Au, 2);  /* 0C055328 mov.l @(disp,pc),Rn */
	W8(r8, r10); UPD(0x0C05532Cu, 1);  /* 0C05532A mov.b Rm,@Rn */
	r9 = (u32)(s32)(s8)R8(r7); UPD(0x0C05532Eu, 1);  /* 0C05532C mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C05532E add #imm,Rn */
	r6 = 0xC286276u; UPD(0x0C055332u, 2);  /* 0C055330 mov.l @(disp,pc),Rn */
	W8(r8, r9); UPD(0x0C055334u, 1);  /* 0C055332 mov.b Rm,@Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C055336u, 1);  /* 0C055334 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C055336 add #imm,Rn */
	r4 = 0xC21F89Bu; UPD(0x0C05533Au, 2);  /* 0C055338 mov.l @(disp,pc),Rn */
	r6 = 0x40u;  /* 0C05533A mov #imm,Rn */
	W8(r8, r5); UPD(0x0C05533Eu, 2);  /* 0C05533C mov.b Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C055340u, 1);  /* 0C05533E mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C055340 add #imm,Rn */
	W8(r8, r2); UPD(0x0C055344u, 2);  /* 0C055342 mov.b Rm,@Rn */
	r5 = 0x0u;  /* 0C055344 mov #imm,Rn */
	r3 = 0xC2175E7u; UPD(0x0C055348u, 2);  /* 0C055346 mov.l @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C055348 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C05534Cu, 2);  /* 0C05534A mov.b @Rm,Rn */
	r12 = 0xC21E103u; UPD(0x0C05534Eu, 1);  /* 0C05534C mov.l @(disp,pc),Rn */
	W8(r8, r0); UPD(0x0C055350u, 1);  /* 0C05534E mov.b Rm,@Rn */
	r11 = (u32)(s32)(s8)R8(r12); UPD(0x0C055352u, 1);  /* 0C055350 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C055352 add #imm,Rn */
	r10 = 0xC26CADBu; UPD(0x0C055356u, 2);  /* 0C055354 mov.l @(disp,pc),Rn */
	W8(r8, r11); UPD(0x0C055358u, 1);  /* 0C055356 mov.b Rm,@Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C05535Au, 1);  /* 0C055358 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C05535A add #imm,Rn */
	W8(r8, r7); UPD(0x0C05535Eu, 2);  /* 0C05535C mov.b Rm,@Rn */
	r9 = 0xC04C23Cu; UPD(0x0C055360u, 1);  /* 0C05535E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFEDu;  /* 0C055360 add #imm,Rn */
	IF(0x0C055362u); { u32 t_ = r9; PR = 0x0C055366u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04C23C, 0x0C04C23Cu, 0x0C055366u); }  /* 0C055362 jsr @Rn */
L_0C055366: BLKS(0x0C055366u);
	r3 = 0xC28651Cu; UPD(0x0C055368u, 1);  /* 0C055366 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C055368 mov #imm,Rn */
	r2 = 0x3Fu;  /* 0C05536A mov #imm,Rn */
	UPD(0x0C05536Cu, 2);
L_0C05536C: BLKS(0x0C05536Cu);
	IF(0x0C05536Cu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C05536Eu, 1);  /* 0C05536C mov.b @(r0,Rm),Rn */
	r4 = r0;  /* 0C05536E mov Rm,Rn */
	IF(0x0C055370u); W8(r0 + r3, r5); UPD(0x0C055372u, 2);  /* 0C055370 mov.b Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C055372 add #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C055374 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C055376 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05536Cu, 6); goto L_0C05536C; } goto L_0C05537C; }  /* 0C055378 bf/s */
L_0C05537C: BLKS(0x0C05537Cu);
	{ IF(0x0C05537Eu); ; /* slot nop */ UPD(0x0C055208u, 4); goto L_0C055208; }  /* 0C05537C bra */
}

/* FUN_0c055400 */
void f_0C055400(sh3_t *c)
{
	LOCALS;
L_0C055400: BLKS(0x0C055400u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C055402u, 1);  /* 0C055400 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C055402 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C055406u, 2);  /* 0C055404 mov.l Rm,@-Rn */
	T = r0 == 0x6u;  /* 0C055406 cmp/eq #imm,r0 */
	IF(0x0C055408u); r15 -= 4; W32(r15, PR); UPD(0x0C05540Au, 2);  /* 0C055408 sts.l pr,@-Rn */
	r8 = (u32)(s32)(s8)r5;  /* 0C05540A exts.b Rm,Rn */
	r14 = r15;  /* 0C05540C mov Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C055420u, 5); goto L_0C055420; } UPD(0x0C055412u, 1); goto L_0C055412; }  /* 0C05540E bt/s */
L_0C055412: BLKS(0x0C055412u);
	r15 = r14;  /* 0C055412 mov Rm,Rn */
	IF(0x0C055414u); PR = R32(r15); r15 += 4; UPD(0x0C055416u, 2);  /* 0C055414 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C055418u, 1);  /* 0C055416 mov.l @Rm+,Rn */
	IF(0x0C055418u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C055418 rts */
L_0C055420: BLKS(0x0C055420u);
	r0 = 0x3u;  /* 0C055420 mov #imm,Rn */
	T = r8 > r0;  /* 0C055422 cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C055412u, 5); goto L_0C055412; } goto L_0C055428; }  /* 0C055424 bt/s */
L_0C055428: BLKS(0x0C055428u);
	r1 = r8;  /* 0C055428 mov Rm,Rn */
	r0 = 0xC055434u;  /* 0C05542A mova @(disp,pc),r0 */
	IF(0x0C05542Cu); r3 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C05542Eu, 4);  /* 0C05542C mov.b @(r0,Rm),Rn */
	IF(0x0C05542Eu); { u32 tv_ = (r3 + 0x0C055432u); u32 t_ = PHYS(tv_); IF(0x0C055430u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C055440u: goto L_0C055440; case 0x0C05545Cu: goto L_0C05545C; case 0x0C055460u: goto L_0C055460; case 0x0C055480u: goto L_0C055480; default: JUMPD(tv_); } }  /* 0C05542E braf Rn */
L_0C055440: BLKS(0x0C055440u);
	r4 = 0xC160658u; UPD(0x0C055442u, 1);  /* 0C055440 mov.l @(disp,pc),Rn */
L_0C055442: BLKS(0x0C055442u);
	r0 = 0xC050CD0u; UPD(0x0C055444u, 1);  /* 0C055442 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C055444 mov #imm,Rn */
	r7 = 0xC0404000u; UPD(0x0C055448u, 2);  /* 0C055446 mov.l @(disp,pc),Rn */
	IF(0x0C055448u); { u32 t_ = r0; PR = 0x0C05544Cu; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05544Cu); }  /* 0C055448 jsr @Rn */
L_0C05544C: BLKS(0x0C05544Cu);
	r4 = 0xC27DE74u; UPD(0x0C05544Eu, 1);  /* 0C05544C mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C055450u, 1);  /* 0C05544E mov.b @Rm,Rn */
	IF(0x0C055450u); T = (s32)r2 >= 0;  /* 0C055450 cmp/pz Rn */
	if (T) { UPD(0x0C05545Cu, 4); goto L_0C05545C; }  /* 0C055452 bt */
L_0C055454: BLKS(0x0C055454u);
	r0 = r8;  /* 0C055454 mov Rm,Rn */
	UPD(0x0C055456u, 1);
L_0C055456: BLKS(0x0C055456u);
	r0 += 0x1u;  /* 0C055456 add #imm,Rn */
	r8 = (u32)(s32)(s8)r0;  /* 0C055458 exts.b Rm,Rn */
	IF(0x0C05545Au); ;  /* 0C05545A nop */
	UPD(0x0C05545Cu, 3);
L_0C05545C: BLKS(0x0C05545Cu);
	{ r0 = r8; /* slot mov Rm,Rn */ UPD(0x0C055412u, 3); goto L_0C055412; }  /* 0C05545C bra */
L_0C055460: BLKS(0x0C055460u);
	r0 = 0xC0558A0u; UPD(0x0C055462u, 1);  /* 0C055460 mov.l @(disp,pc),Rn */
	IF(0x0C055462u); { u32 t_ = r0; PR = 0x0C055466u; IF(0x0C055464u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0558A0, 0x0C0558A0u, 0x0C055466u); }  /* 0C055462 jsr @Rn */
L_0C055466: BLKS(0x0C055466u);
	T = (r0 & r0) == 0;  /* 0C055466 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C055412u, 4); goto L_0C055412; } goto L_0C05546C; }  /* 0C055468 bf/s */
L_0C05546C: BLKS(0x0C05546Cu);
	r4 = 0xC160670u; UPD(0x0C05546Eu, 2);  /* 0C05546C mov.l @(disp,pc),Rn */
	{ IF(0x0C055470u); ; /* slot nop */ UPD(0x0C055442u, 3); goto L_0C055442; }  /* 0C05546E bra */
L_0C055480: BLKS(0x0C055480u);
	r0 = 0xC050CD0u; UPD(0x0C055482u, 1);  /* 0C055480 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C055482 mov #imm,Rn */
	r4 = 0xC16063Cu; UPD(0x0C055486u, 2);  /* 0C055484 mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C055488u, 1);  /* 0C055486 mov.l @(disp,pc),Rn */
	IF(0x0C055488u); { u32 t_ = r0; PR = 0x0C05548Cu; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05548Cu); }  /* 0C055488 jsr @Rn */
L_0C05548C: BLKS(0x0C05548Cu);
	r6 = 0xC27DE74u; UPD(0x0C05548Eu, 1);  /* 0C05548C mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C055490u, 1);  /* 0C05548E mov.b @Rm,Rn */
	IF(0x0C055490u); T = (s32)r5 >= 0;  /* 0C055490 cmp/pz Rn */
	if (T) { UPD(0x0C05545Cu, 4); goto L_0C05545C; }  /* 0C055492 bt */
L_0C055494: BLKS(0x0C055494u);
	r7 = 0xC053AD0u; UPD(0x0C055496u, 1);  /* 0C055494 mov.l @(disp,pc),Rn */
	IF(0x0C055496u); { u32 t_ = r7; PR = 0x0C05549Au; IF(0x0C055498u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C053AD0, 0x0C053AD0u, 0x0C05549Au); }  /* 0C055496 jsr @Rn */
L_0C05549A: BLKS(0x0C05549Au);
	{ r0 = r8; /* slot mov Rm,Rn */ UPD(0x0C055456u, 3); goto L_0C055456; }  /* 0C05549A bra */
}

/* FUN_0c0554c0 */
void f_0C0554C0(sh3_t *c)
{
	LOCALS;
L_0C0554C0: BLKS(0x0C0554C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0554C2u, 1);  /* 0C0554C0 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C0554C2 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0554C6u, 2);  /* 0C0554C4 mov.l Rm,@-Rn */
	T = r0 == 0x12u;  /* 0C0554C6 cmp/eq #imm,r0 */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0554CAu, 2);  /* 0C0554C8 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0554CA mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0554CEu, 2);  /* 0C0554CC mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0554D0u, 1);  /* 0C0554CE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0554D2u, 1);  /* 0C0554D0 mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r5;  /* 0C0554D2 exts.b Rm,Rn */
	IF(0x0C0554D4u); r15 -= 4; W32(r15, PR); UPD(0x0C0554D6u, 2);  /* 0C0554D4 sts.l pr,@-Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0554F0u, 3); goto L_0C0554F0; } UPD(0x0C0554DAu, 1); goto L_0C0554DA; }  /* 0C0554D6 bt/s */
L_0C0554DA: BLKS(0x0C0554DAu);
	r15 = r14;  /* 0C0554DA mov Rm,Rn */
	IF(0x0C0554DCu); PR = R32(r15); r15 += 4; UPD(0x0C0554DEu, 2);  /* 0C0554DC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0554E0u, 1);  /* 0C0554DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0554E2u, 1);  /* 0C0554E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0554E4u, 1);  /* 0C0554E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0554E6u, 1);  /* 0C0554E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0554E8u, 1);  /* 0C0554E6 mov.l @Rm+,Rn */
	IF(0x0C0554E8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0554E8 rts */
L_0C0554F0: BLKS(0x0C0554F0u);
	r0 = 0x3u;  /* 0C0554F0 mov #imm,Rn */
	T = r12 > r0;  /* 0C0554F2 cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0554DAu, 5); goto L_0C0554DA; } goto L_0C0554F8; }  /* 0C0554F4 bt/s */
L_0C0554F8: BLKS(0x0C0554F8u);
	r1 = r12;  /* 0C0554F8 mov Rm,Rn */
	r0 = 0xC055504u;  /* 0C0554FA mova @(disp,pc),r0 */
	IF(0x0C0554FCu); r3 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C0554FEu, 4);  /* 0C0554FC mov.b @(r0,Rm),Rn */
	r3 = r3 & 0xFF;  /* 0C0554FE extu.b Rm,Rn */
	IF(0x0C055500u); { u32 tv_ = (r3 + 0x0C055504u); u32 t_ = PHYS(tv_); IF(0x0C055502u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C055510u: goto L_0C055510; case 0x0C05556Cu: goto L_0C05556C; case 0x0C055570u: goto L_0C055570; case 0x0C0555D0u: goto L_0C0555D0; default: JUMPD(tv_); } }  /* 0C055500 braf Rn */
L_0C055510: BLKS(0x0C055510u);
	r9 = 0xC050CD0u; UPD(0x0C055512u, 1);  /* 0C055510 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C055512 mov #imm,Rn */
	r11 = 0xC161224u; UPD(0x0C055516u, 2);  /* 0C055514 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C055516 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C05551Au, 2);  /* 0C055518 mov.l @(disp,pc),Rn */
	r10 = 0xC161228u; UPD(0x0C05551Cu, 1);  /* 0C05551A mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C05551C mov Rm,Rn */
	IF(0x0C05551Eu); { u32 t_ = r9; PR = 0x0C055522u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055522u); }  /* 0C05551E jsr @Rn */
L_0C055522: BLKS(0x0C055522u);
	r4 = R32(r10); UPD(0x0C055524u, 1);  /* 0C055522 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C055524 mov #imm,Rn */
	r6 = 0x4u;  /* 0C055526 mov #imm,Rn */
	IF(0x0C055528u); { u32 t_ = r9; PR = 0x0C05552Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05552Cu); }  /* 0C055528 jsr @Rn */
L_0C05552C: BLKS(0x0C05552Cu);
	r4 = R32(r10); UPD(0x0C05552Eu, 1);  /* 0C05552C mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C05552E mov #imm,Rn */
	r6 = 0x4u;  /* 0C055530 mov #imm,Rn */
	IF(0x0C055532u); { u32 t_ = r9; PR = 0x0C055536u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055536u); }  /* 0C055532 jsr @Rn */
L_0C055536: BLKS(0x0C055536u);
	r4 = R32(r10); UPD(0x0C055538u, 1);  /* 0C055536 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C055538 mov #imm,Rn */
	r6 = 0x4u;  /* 0C05553A mov #imm,Rn */
	IF(0x0C05553Cu); { u32 t_ = r9; PR = 0x0C055540u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055540u); }  /* 0C05553C jsr @Rn */
L_0C055540: BLKS(0x0C055540u);
	r4 = R32(r10); UPD(0x0C055542u, 1);  /* 0C055540 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C055542 mov #imm,Rn */
	r6 = 0x4u;  /* 0C055544 mov #imm,Rn */
	IF(0x0C055546u); { u32 t_ = r9; PR = 0x0C05554Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05554Au); }  /* 0C055546 jsr @Rn */
L_0C05554A: BLKS(0x0C05554Au);
	r4 = R32(r11); UPD(0x0C05554Cu, 1);  /* 0C05554A mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C05554C mov #imm,Rn */
	r6 = 0x4u;  /* 0C05554E mov #imm,Rn */
	IF(0x0C055550u); { u32 t_ = r9; PR = 0x0C055554u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055554u); }  /* 0C055550 jsr @Rn */
L_0C055554: BLKS(0x0C055554u);
	r4 = 0xC160658u; UPD(0x0C055556u, 1);  /* 0C055554 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C055556 mov #imm,Rn */
	UPD(0x0C055558u, 1);
L_0C055558: BLKS(0x0C055558u);
	r6 = 0x6u;  /* 0C055558 mov #imm,Rn */
	IF(0x0C05555Au); { u32 t_ = r9; PR = 0x0C05555Eu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05555Eu); }  /* 0C05555A jsr @Rn */
L_0C05555E: BLKS(0x0C05555Eu);
	r4 = 0xC27DE74u; UPD(0x0C055560u, 1);  /* 0C05555E mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C055562u, 1);  /* 0C055560 mov.b @Rm,Rn */
	IF(0x0C055562u); T = (s32)r2 >= 0;  /* 0C055562 cmp/pz Rn */
	if (T) { UPD(0x0C05556Cu, 4); goto L_0C05556C; }  /* 0C055564 bt */
L_0C055566: BLKS(0x0C055566u);
	r9 = r12;  /* 0C055566 mov Rm,Rn */
	r9 += 0x1u;  /* 0C055568 add #imm,Rn */
	UPD(0x0C05556Au, 2);
L_0C05556A: BLKS(0x0C05556Au);
	r12 = (u32)(s32)(s8)r9;  /* 0C05556A exts.b Rm,Rn */
	UPD(0x0C05556Cu, 1);
L_0C05556C: BLKS(0x0C05556Cu);
	{ r0 = r12; /* slot mov Rm,Rn */ UPD(0x0C0554DAu, 3); goto L_0C0554DA; }  /* 0C05556C bra */
L_0C055570: BLKS(0x0C055570u);
	r8 = 0xC0558A0u; UPD(0x0C055572u, 1);  /* 0C055570 mov.l @(disp,pc),Rn */
	IF(0x0C055572u); { u32 t_ = r8; PR = 0x0C055576u; IF(0x0C055574u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0558A0, 0x0C0558A0u, 0x0C055576u); }  /* 0C055572 jsr @Rn */
L_0C055576: BLKS(0x0C055576u);
	T = (r0 & r0) == 0;  /* 0C055576 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0554DAu, 4); goto L_0C0554DA; } goto L_0C05557C; }  /* 0C055578 bf/s */
L_0C05557C: BLKS(0x0C05557Cu);
	r9 = 0xC050CD0u; UPD(0x0C05557Eu, 2);  /* 0C05557C mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C05557E mov #imm,Rn */
	r11 = 0xC161224u; UPD(0x0C055582u, 2);  /* 0C055580 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C055582 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C055586u, 2);  /* 0C055584 mov.l @(disp,pc),Rn */
	r10 = 0xC161228u; UPD(0x0C055588u, 1);  /* 0C055586 mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C055588 mov Rm,Rn */
	IF(0x0C05558Au); { u32 t_ = r9; PR = 0x0C05558Eu; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05558Eu); }  /* 0C05558A jsr @Rn */
L_0C05558E: BLKS(0x0C05558Eu);
	r4 = R32(r10); UPD(0x0C055590u, 1);  /* 0C05558E mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C055590 mov #imm,Rn */
	r6 = 0x4u;  /* 0C055592 mov #imm,Rn */
	IF(0x0C055594u); { u32 t_ = r9; PR = 0x0C055598u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055598u); }  /* 0C055594 jsr @Rn */
L_0C055598: BLKS(0x0C055598u);
	r4 = R32(r10); UPD(0x0C05559Au, 1);  /* 0C055598 mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C05559A mov #imm,Rn */
	r6 = 0x4u;  /* 0C05559C mov #imm,Rn */
	IF(0x0C05559Eu); { u32 t_ = r9; PR = 0x0C0555A2u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0555A2u); }  /* 0C05559E jsr @Rn */
L_0C0555A2: BLKS(0x0C0555A2u);
	r4 = R32(r10); UPD(0x0C0555A4u, 1);  /* 0C0555A2 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C0555A4 mov #imm,Rn */
	r6 = 0x4u;  /* 0C0555A6 mov #imm,Rn */
	IF(0x0C0555A8u); { u32 t_ = r9; PR = 0x0C0555ACu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0555ACu); }  /* 0C0555A8 jsr @Rn */
L_0C0555AC: BLKS(0x0C0555ACu);
	r4 = R32(r10); UPD(0x0C0555AEu, 1);  /* 0C0555AC mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C0555AE mov #imm,Rn */
	r6 = 0x4u;  /* 0C0555B0 mov #imm,Rn */
	IF(0x0C0555B2u); { u32 t_ = r9; PR = 0x0C0555B6u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0555B6u); }  /* 0C0555B2 jsr @Rn */
L_0C0555B6: BLKS(0x0C0555B6u);
	r4 = R32(r11); UPD(0x0C0555B8u, 1);  /* 0C0555B6 mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C0555B8 mov #imm,Rn */
	r6 = 0x4u;  /* 0C0555BA mov #imm,Rn */
	IF(0x0C0555BCu); { u32 t_ = r9; PR = 0x0C0555C0u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0555C0u); }  /* 0C0555BC jsr @Rn */
L_0C0555C0: BLKS(0x0C0555C0u);
	r4 = 0xC160670u; UPD(0x0C0555C2u, 1);  /* 0C0555C0 mov.l @(disp,pc),Rn */
	{ r5 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C055558u, 3); goto L_0C055558; }  /* 0C0555C2 bra */
L_0C0555D0: BLKS(0x0C0555D0u);
	r9 = 0xC050CD0u; UPD(0x0C0555D2u, 1);  /* 0C0555D0 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C0555D2 mov #imm,Rn */
	r11 = 0xC161224u; UPD(0x0C0555D6u, 2);  /* 0C0555D4 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C0555D6 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C0555DAu, 2);  /* 0C0555D8 mov.l @(disp,pc),Rn */
	r10 = 0xC161228u; UPD(0x0C0555DCu, 1);  /* 0C0555DA mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C0555DC mov Rm,Rn */
	IF(0x0C0555DEu); { u32 t_ = r9; PR = 0x0C0555E2u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0555E2u); }  /* 0C0555DE jsr @Rn */
L_0C0555E2: BLKS(0x0C0555E2u);
	r4 = R32(r10); UPD(0x0C0555E4u, 1);  /* 0C0555E2 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C0555E4 mov #imm,Rn */
	r6 = 0x4u;  /* 0C0555E6 mov #imm,Rn */
	IF(0x0C0555E8u); { u32 t_ = r9; PR = 0x0C0555ECu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0555ECu); }  /* 0C0555E8 jsr @Rn */
L_0C0555EC: BLKS(0x0C0555ECu);
	r4 = R32(r10); UPD(0x0C0555EEu, 1);  /* 0C0555EC mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C0555EE mov #imm,Rn */
	r6 = 0x4u;  /* 0C0555F0 mov #imm,Rn */
	IF(0x0C0555F2u); { u32 t_ = r9; PR = 0x0C0555F6u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0555F6u); }  /* 0C0555F2 jsr @Rn */
L_0C0555F6: BLKS(0x0C0555F6u);
	r4 = R32(r10); UPD(0x0C0555F8u, 1);  /* 0C0555F6 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C0555F8 mov #imm,Rn */
	r6 = 0x4u;  /* 0C0555FA mov #imm,Rn */
	IF(0x0C0555FCu); { u32 t_ = r9; PR = 0x0C055600u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055600u); }  /* 0C0555FC jsr @Rn */
L_0C055600: BLKS(0x0C055600u);
	r4 = R32(r10); UPD(0x0C055602u, 1);  /* 0C055600 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C055602 mov #imm,Rn */
	r6 = 0x4u;  /* 0C055604 mov #imm,Rn */
	IF(0x0C055606u); { u32 t_ = r9; PR = 0x0C05560Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05560Au); }  /* 0C055606 jsr @Rn */
L_0C05560A: BLKS(0x0C05560Au);
	r4 = R32(r11); UPD(0x0C05560Cu, 1);  /* 0C05560A mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C05560C mov #imm,Rn */
	r6 = 0x4u;  /* 0C05560E mov #imm,Rn */
	IF(0x0C055610u); { u32 t_ = r9; PR = 0x0C055614u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055614u); }  /* 0C055610 jsr @Rn */
L_0C055614: BLKS(0x0C055614u);
	r5 = 0x7u;  /* 0C055614 mov #imm,Rn */
	r6 = 0x6u;  /* 0C055616 mov #imm,Rn */
	r4 = 0xC16063Cu; UPD(0x0C05561Au, 3);  /* 0C055618 mov.l @(disp,pc),Rn */
	IF(0x0C05561Au); { u32 t_ = r9; PR = 0x0C05561Eu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05561Eu); }  /* 0C05561A jsr @Rn */
L_0C05561E: BLKS(0x0C05561Eu);
	r6 = 0xC27DE74u; UPD(0x0C055620u, 1);  /* 0C05561E mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C055622u, 1);  /* 0C055620 mov.b @Rm,Rn */
	IF(0x0C055622u); T = (s32)r5 >= 0;  /* 0C055622 cmp/pz Rn */
	if (T) { UPD(0x0C05556Cu, 4); goto L_0C05556C; }  /* 0C055624 bt */
L_0C055626: BLKS(0x0C055626u);
	r7 = 0xC053AD0u; UPD(0x0C055628u, 1);  /* 0C055626 mov.l @(disp,pc),Rn */
	IF(0x0C055628u); { u32 t_ = r7; PR = 0x0C05562Cu; r9 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C053AD0, 0x0C053AD0u, 0x0C05562Cu); }  /* 0C055628 jsr @Rn */
L_0C05562C: BLKS(0x0C05562Cu);
	{ r9 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C05556Au, 3); goto L_0C05556A; }  /* 0C05562C bra */
}

/* FUN_0c055660 */
void f_0C055660(sh3_t *c)
{
	LOCALS;
L_0C055660: BLKS(0x0C055660u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C055662u, 1);  /* 0C055660 mov.l Rm,@-Rn */
	r7 = 0xC392DC2u; UPD(0x0C055664u, 1);  /* 0C055662 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C055664 mov Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C055668u, 2);  /* 0C055666 mov.b @Rm,Rn */
	r4 = 0xC21CCACu; UPD(0x0C05566Au, 1);  /* 0C055668 mov.l @(disp,pc),Rn */
	r5 = 0xC392AE4u; UPD(0x0C05566Cu, 1);  /* 0C05566A mov.l @(disp,pc),Rn */
	W8(r4, r1); UPD(0x0C05566Eu, 1);  /* 0C05566C mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r3 = v_; } UPD(0x0C055670u, 1);  /* 0C05566E mov.b @Rm+,Rn */
	r4 += 0xFFFFFFF4u;  /* 0C055670 add #imm,Rn */
	r1 = 0xC286750u; UPD(0x0C055674u, 2);  /* 0C055672 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C055676u, 1);  /* 0C055674 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r1); r1 += 1; r0 = v_; } UPD(0x0C055678u, 1);  /* 0C055676 mov.b @Rm+,Rn */
	r4 += 0x1u;  /* 0C055678 add #imm,Rn */
	W8(r4, r0); UPD(0x0C05567Cu, 2);  /* 0C05567A mov.b Rm,@Rn */
	r0 = 0xC393028u; UPD(0x0C05567Eu, 1);  /* 0C05567C mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C05567E add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r6 = v_; } UPD(0x0C055682u, 2);  /* 0C055680 mov.b @Rm+,Rn */
	W8(r4, r6); UPD(0x0C055684u, 1);  /* 0C055682 mov.b Rm,@Rn */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C055686u, 1);  /* 0C055684 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C055686 add #imm,Rn */
	W8(r4, r7); UPD(0x0C05568Au, 2);  /* 0C055688 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C05568Cu, 1);  /* 0C05568A mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C05568C add #imm,Rn */
	W8(r4, r3); UPD(0x0C055690u, 2);  /* 0C05568E mov.b Rm,@Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C055692u, 1);  /* 0C055690 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C055692 add #imm,Rn */
	r1 = 0xC395086u; UPD(0x0C055696u, 2);  /* 0C055694 mov.l @(disp,pc),Rn */
	W8(r4, r5); UPD(0x0C055698u, 1);  /* 0C055696 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C05569Au, 1);  /* 0C055698 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C05569A add #imm,Rn */
	r7 = 0xC26C8C4u; UPD(0x0C05569Eu, 2);  /* 0C05569C mov.l @(disp,pc),Rn */
	W8(r4, r0); UPD(0x0C0556A0u, 1);  /* 0C05569E mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0556A2u, 1);  /* 0C0556A0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0556A2 add #imm,Rn */
	r5 = 0xC21F5E0u; UPD(0x0C0556A6u, 2);  /* 0C0556A4 mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C0556A8u, 1);  /* 0C0556A6 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0556AAu, 1);  /* 0C0556A8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0556AA add #imm,Rn */
	r1 = 0xC22466Cu; UPD(0x0C0556AEu, 2);  /* 0C0556AC mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C0556B0u, 1);  /* 0C0556AE mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0556B2u, 1);  /* 0C0556B0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0556B2 add #imm,Rn */
	r7 = 0xC21F588u; UPD(0x0C0556B6u, 2);  /* 0C0556B4 mov.l @(disp,pc),Rn */
	W8(r4, r0); UPD(0x0C0556B8u, 1);  /* 0C0556B6 mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0556BAu, 1);  /* 0C0556B8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0556BA add #imm,Rn */
	r5 = 0xC220C53u; UPD(0x0C0556BEu, 2);  /* 0C0556BC mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C0556C0u, 1);  /* 0C0556BE mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0556C2u, 1);  /* 0C0556C0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0556C2 add #imm,Rn */
	r1 = 0xC392D50u; UPD(0x0C0556C6u, 2);  /* 0C0556C4 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C0556C8u, 1);  /* 0C0556C6 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0556CAu, 1);  /* 0C0556C8 mov.b @Rm,Rn */
	r4 += 0x2u;  /* 0C0556CA add #imm,Rn */
	r7 = 0xC392E24u; UPD(0x0C0556CEu, 2);  /* 0C0556CC mov.l @(disp,pc),Rn */
	W8(r4, r0); UPD(0x0C0556D0u, 1);  /* 0C0556CE mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0556D2u, 1);  /* 0C0556D0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0556D2 add #imm,Rn */
	r5 = 0xC286276u; UPD(0x0C0556D6u, 2);  /* 0C0556D4 mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C0556D8u, 1);  /* 0C0556D6 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0556DAu, 1);  /* 0C0556D8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0556DA add #imm,Rn */
	r1 = 0xC21F89Bu; UPD(0x0C0556DEu, 2);  /* 0C0556DC mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C0556E0u, 1);  /* 0C0556DE mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0556E2u, 1);  /* 0C0556E0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0556E2 add #imm,Rn */
	W8(r4, r0); UPD(0x0C0556E6u, 2);  /* 0C0556E4 mov.b Rm,@Rn */
	r7 = 0xC2175E7u; UPD(0x0C0556E8u, 1);  /* 0C0556E6 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0556E8 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0556ECu, 2);  /* 0C0556EA mov.b @Rm,Rn */
	r5 = 0xC21E103u; UPD(0x0C0556EEu, 1);  /* 0C0556EC mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C0556F0u, 1);  /* 0C0556EE mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0556F2u, 1);  /* 0C0556F0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0556F2 add #imm,Rn */
	r1 = 0xC26CADBu; UPD(0x0C0556F6u, 2);  /* 0C0556F4 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C0556F8u, 1);  /* 0C0556F6 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0556FAu, 1);  /* 0C0556F8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0556FA add #imm,Rn */
	W8(r4, r0); UPD(0x0C0556FEu, 2);  /* 0C0556FC mov.b Rm,@Rn */
	r3 = 0xFu;  /* 0C0556FE mov #imm,Rn */
	r6 = 0xC21F58Cu; UPD(0x0C055702u, 2);  /* 0C055700 mov.l @(disp,pc),Rn */
	r4 += 0xFFFFFFEDu;  /* 0C055702 add #imm,Rn */
	r0 = 0x0u;  /* 0C055704 mov #imm,Rn */
	r7 = r4;  /* 0C055706 mov Rm,Rn */
	UPD(0x0C055708u, 3);
L_0C055708: BLKS(0x0C055708u);
	IF(0x0C055708u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C05570Au, 1);  /* 0C055708 mov.b @(r0,Rm),Rn */
	IF(0x0C05570Au); r2 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C05570Cu, 1);  /* 0C05570A mov.b @(r0,Rm),Rn */
	T = r2 == r4;  /* 0C05570C cmp/eq Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05571Eu, 4); goto L_0C05571E; } goto L_0C055712; }  /* 0C05570E bf/s */
L_0C055712: BLKS(0x0C055712u);
	r5 = r0;  /* 0C055712 mov Rm,Rn */
	r5 += 0x1u;  /* 0C055714 add #imm,Rn */
	r0 = (u32)(s32)(s16)r5;  /* 0C055716 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C055718 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C055708u, 8); goto L_0C055708; } UPD(0x0C05571Eu, 1); goto L_0C05571E; }  /* 0C05571A bf/s */
L_0C05571E: BLKS(0x0C05571Eu);
	r0 = r1;  /* 0C05571E mov Rm,Rn */
	r15 = r14;  /* 0C055720 mov Rm,Rn */
	IF(0x0C055722u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C055722 rts */
}

/* FUN_0c055780 */
void f_0C055780(sh3_t *c)
{
	LOCALS;
L_0C055780: BLKS(0x0C055780u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C055782u, 1);  /* 0C055780 mov.l Rm,@-Rn */
	r7 = 0xC392DC2u; UPD(0x0C055784u, 1);  /* 0C055782 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C055784 mov Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C055788u, 2);  /* 0C055786 mov.b @Rm,Rn */
	r4 = 0xC21CCACu; UPD(0x0C05578Au, 1);  /* 0C055788 mov.l @(disp,pc),Rn */
	r5 = 0xC392AE4u; UPD(0x0C05578Cu, 1);  /* 0C05578A mov.l @(disp,pc),Rn */
	W8(r4, r1); UPD(0x0C05578Eu, 1);  /* 0C05578C mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r3 = v_; } UPD(0x0C055790u, 1);  /* 0C05578E mov.b @Rm+,Rn */
	r4 += 0xFFFFFFF4u;  /* 0C055790 add #imm,Rn */
	r1 = 0xC286750u; UPD(0x0C055794u, 2);  /* 0C055792 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C055796u, 1);  /* 0C055794 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r1); r1 += 1; r0 = v_; } UPD(0x0C055798u, 1);  /* 0C055796 mov.b @Rm+,Rn */
	r4 += 0x1u;  /* 0C055798 add #imm,Rn */
	W8(r4, r0); UPD(0x0C05579Cu, 2);  /* 0C05579A mov.b Rm,@Rn */
	r0 = 0xC393028u; UPD(0x0C05579Eu, 1);  /* 0C05579C mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C05579E add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r6 = v_; } UPD(0x0C0557A2u, 2);  /* 0C0557A0 mov.b @Rm+,Rn */
	W8(r4, r6); UPD(0x0C0557A4u, 1);  /* 0C0557A2 mov.b Rm,@Rn */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C0557A6u, 1);  /* 0C0557A4 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0557A6 add #imm,Rn */
	W8(r4, r7); UPD(0x0C0557AAu, 2);  /* 0C0557A8 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C0557ACu, 1);  /* 0C0557AA mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0557AC add #imm,Rn */
	W8(r4, r3); UPD(0x0C0557B0u, 2);  /* 0C0557AE mov.b Rm,@Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C0557B2u, 1);  /* 0C0557B0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0557B2 add #imm,Rn */
	r1 = 0xC395086u; UPD(0x0C0557B6u, 2);  /* 0C0557B4 mov.l @(disp,pc),Rn */
	W8(r4, r5); UPD(0x0C0557B8u, 1);  /* 0C0557B6 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0557BAu, 1);  /* 0C0557B8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0557BA add #imm,Rn */
	r7 = 0xC26C8C4u; UPD(0x0C0557BEu, 2);  /* 0C0557BC mov.l @(disp,pc),Rn */
	W8(r4, r0); UPD(0x0C0557C0u, 1);  /* 0C0557BE mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0557C2u, 1);  /* 0C0557C0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0557C2 add #imm,Rn */
	r5 = 0xC21F5E0u; UPD(0x0C0557C6u, 2);  /* 0C0557C4 mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C0557C8u, 1);  /* 0C0557C6 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0557CAu, 1);  /* 0C0557C8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0557CA add #imm,Rn */
	r1 = 0xC22466Cu; UPD(0x0C0557CEu, 2);  /* 0C0557CC mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C0557D0u, 1);  /* 0C0557CE mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0557D2u, 1);  /* 0C0557D0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0557D2 add #imm,Rn */
	r7 = 0xC21F588u; UPD(0x0C0557D6u, 2);  /* 0C0557D4 mov.l @(disp,pc),Rn */
	W8(r4, r0); UPD(0x0C0557D8u, 1);  /* 0C0557D6 mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0557DAu, 1);  /* 0C0557D8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0557DA add #imm,Rn */
	r5 = 0xC220C53u; UPD(0x0C0557DEu, 2);  /* 0C0557DC mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C0557E0u, 1);  /* 0C0557DE mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0557E2u, 1);  /* 0C0557E0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0557E2 add #imm,Rn */
	r1 = 0xC392D50u; UPD(0x0C0557E6u, 2);  /* 0C0557E4 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C0557E8u, 1);  /* 0C0557E6 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0557EAu, 1);  /* 0C0557E8 mov.b @Rm,Rn */
	r4 += 0x2u;  /* 0C0557EA add #imm,Rn */
	r7 = 0xC392E24u; UPD(0x0C0557EEu, 2);  /* 0C0557EC mov.l @(disp,pc),Rn */
	W8(r4, r0); UPD(0x0C0557F0u, 1);  /* 0C0557EE mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0557F2u, 1);  /* 0C0557F0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0557F2 add #imm,Rn */
	r5 = 0xC286276u; UPD(0x0C0557F6u, 2);  /* 0C0557F4 mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C0557F8u, 1);  /* 0C0557F6 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0557FAu, 1);  /* 0C0557F8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0557FA add #imm,Rn */
	r1 = 0xC21F89Bu; UPD(0x0C0557FEu, 2);  /* 0C0557FC mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C055800u, 1);  /* 0C0557FE mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C055802u, 1);  /* 0C055800 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C055802 add #imm,Rn */
	W8(r4, r0); UPD(0x0C055806u, 2);  /* 0C055804 mov.b Rm,@Rn */
	r7 = 0xC2175E7u; UPD(0x0C055808u, 1);  /* 0C055806 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C055808 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C05580Cu, 2);  /* 0C05580A mov.b @Rm,Rn */
	r5 = 0xC21E103u; UPD(0x0C05580Eu, 1);  /* 0C05580C mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C055810u, 1);  /* 0C05580E mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C055812u, 1);  /* 0C055810 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C055812 add #imm,Rn */
	r1 = 0xC26CADBu; UPD(0x0C055816u, 2);  /* 0C055814 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C055818u, 1);  /* 0C055816 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C05581Au, 1);  /* 0C055818 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C05581A add #imm,Rn */
	W8(r4, r0); UPD(0x0C05581Eu, 2);  /* 0C05581C mov.b Rm,@Rn */
	r3 = 0x1Fu;  /* 0C05581E mov #imm,Rn */
	r6 = 0xC21F58Cu; UPD(0x0C055822u, 2);  /* 0C055820 mov.l @(disp,pc),Rn */
	r4 += 0xFFFFFFEDu;  /* 0C055822 add #imm,Rn */
	r0 = 0x10u;  /* 0C055824 mov #imm,Rn */
	r7 = r4;  /* 0C055826 mov Rm,Rn */
	UPD(0x0C055828u, 3);
L_0C055828: BLKS(0x0C055828u);
	IF(0x0C055828u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C05582Au, 1);  /* 0C055828 mov.b @(r0,Rm),Rn */
	IF(0x0C05582Au); r2 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C05582Cu, 1);  /* 0C05582A mov.b @(r0,Rm),Rn */
	T = r2 == r4;  /* 0C05582C cmp/eq Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05583Eu, 4); goto L_0C05583E; } goto L_0C055832; }  /* 0C05582E bf/s */
L_0C055832: BLKS(0x0C055832u);
	r5 = r0;  /* 0C055832 mov Rm,Rn */
	r5 += 0x1u;  /* 0C055834 add #imm,Rn */
	r0 = (u32)(s32)(s16)r5;  /* 0C055836 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C055838 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C055828u, 8); goto L_0C055828; } UPD(0x0C05583Eu, 1); goto L_0C05583E; }  /* 0C05583A bf/s */
L_0C05583E: BLKS(0x0C05583Eu);
	r0 = r1;  /* 0C05583E mov Rm,Rn */
	r15 = r14;  /* 0C055840 mov Rm,Rn */
	IF(0x0C055842u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C055842 rts */
}

/* FUN_0c0558a0 */
void f_0C0558A0(sh3_t *c)
{
	LOCALS;
L_0C0558A0: BLKS(0x0C0558A0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0558A2u, 1);  /* 0C0558A0 mov.l Rm,@-Rn */
	r7 = 0xC392DC2u; UPD(0x0C0558A4u, 1);  /* 0C0558A2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0558A4 mov Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C0558A8u, 2);  /* 0C0558A6 mov.b @Rm,Rn */
	r4 = 0xC21CCACu; UPD(0x0C0558AAu, 1);  /* 0C0558A8 mov.l @(disp,pc),Rn */
	r5 = 0xC392AE4u; UPD(0x0C0558ACu, 1);  /* 0C0558AA mov.l @(disp,pc),Rn */
	W8(r4, r1); UPD(0x0C0558AEu, 1);  /* 0C0558AC mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r3 = v_; } UPD(0x0C0558B0u, 1);  /* 0C0558AE mov.b @Rm+,Rn */
	r4 += 0xFFFFFFF4u;  /* 0C0558B0 add #imm,Rn */
	r1 = 0xC286750u; UPD(0x0C0558B4u, 2);  /* 0C0558B2 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C0558B6u, 1);  /* 0C0558B4 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r1); r1 += 1; r0 = v_; } UPD(0x0C0558B8u, 1);  /* 0C0558B6 mov.b @Rm+,Rn */
	r4 += 0x1u;  /* 0C0558B8 add #imm,Rn */
	W8(r4, r0); UPD(0x0C0558BCu, 2);  /* 0C0558BA mov.b Rm,@Rn */
	r0 = 0xC393028u; UPD(0x0C0558BEu, 1);  /* 0C0558BC mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0558BE add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r6 = v_; } UPD(0x0C0558C2u, 2);  /* 0C0558C0 mov.b @Rm+,Rn */
	W8(r4, r6); UPD(0x0C0558C4u, 1);  /* 0C0558C2 mov.b Rm,@Rn */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C0558C6u, 1);  /* 0C0558C4 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0558C6 add #imm,Rn */
	W8(r4, r7); UPD(0x0C0558CAu, 2);  /* 0C0558C8 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C0558CCu, 1);  /* 0C0558CA mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0558CC add #imm,Rn */
	W8(r4, r3); UPD(0x0C0558D0u, 2);  /* 0C0558CE mov.b Rm,@Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C0558D2u, 1);  /* 0C0558D0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0558D2 add #imm,Rn */
	r1 = 0xC395086u; UPD(0x0C0558D6u, 2);  /* 0C0558D4 mov.l @(disp,pc),Rn */
	W8(r4, r5); UPD(0x0C0558D8u, 1);  /* 0C0558D6 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0558DAu, 1);  /* 0C0558D8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0558DA add #imm,Rn */
	r7 = 0xC26C8C4u; UPD(0x0C0558DEu, 2);  /* 0C0558DC mov.l @(disp,pc),Rn */
	W8(r4, r0); UPD(0x0C0558E0u, 1);  /* 0C0558DE mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0558E2u, 1);  /* 0C0558E0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0558E2 add #imm,Rn */
	r5 = 0xC21F5E0u; UPD(0x0C0558E6u, 2);  /* 0C0558E4 mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C0558E8u, 1);  /* 0C0558E6 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0558EAu, 1);  /* 0C0558E8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0558EA add #imm,Rn */
	r1 = 0xC22466Cu; UPD(0x0C0558EEu, 2);  /* 0C0558EC mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C0558F0u, 1);  /* 0C0558EE mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0558F2u, 1);  /* 0C0558F0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0558F2 add #imm,Rn */
	r7 = 0xC21F588u; UPD(0x0C0558F6u, 2);  /* 0C0558F4 mov.l @(disp,pc),Rn */
	W8(r4, r0); UPD(0x0C0558F8u, 1);  /* 0C0558F6 mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0558FAu, 1);  /* 0C0558F8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0558FA add #imm,Rn */
	r5 = 0xC220C53u; UPD(0x0C0558FEu, 2);  /* 0C0558FC mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C055900u, 1);  /* 0C0558FE mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C055902u, 1);  /* 0C055900 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C055902 add #imm,Rn */
	r1 = 0xC392D50u; UPD(0x0C055906u, 2);  /* 0C055904 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C055908u, 1);  /* 0C055906 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C05590Au, 1);  /* 0C055908 mov.b @Rm,Rn */
	r4 += 0x2u;  /* 0C05590A add #imm,Rn */
	r7 = 0xC392E24u; UPD(0x0C05590Eu, 2);  /* 0C05590C mov.l @(disp,pc),Rn */
	W8(r4, r0); UPD(0x0C055910u, 1);  /* 0C05590E mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C055912u, 1);  /* 0C055910 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C055912 add #imm,Rn */
	r5 = 0xC286276u; UPD(0x0C055916u, 2);  /* 0C055914 mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C055918u, 1);  /* 0C055916 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C05591Au, 1);  /* 0C055918 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C05591A add #imm,Rn */
	r1 = 0xC21F89Bu; UPD(0x0C05591Eu, 2);  /* 0C05591C mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C055920u, 1);  /* 0C05591E mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C055922u, 1);  /* 0C055920 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C055922 add #imm,Rn */
	W8(r4, r0); UPD(0x0C055926u, 2);  /* 0C055924 mov.b Rm,@Rn */
	r7 = 0xC2175E7u; UPD(0x0C055928u, 1);  /* 0C055926 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C055928 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C05592Cu, 2);  /* 0C05592A mov.b @Rm,Rn */
	r5 = 0xC21E103u; UPD(0x0C05592Eu, 1);  /* 0C05592C mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C055930u, 1);  /* 0C05592E mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C055932u, 1);  /* 0C055930 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C055932 add #imm,Rn */
	r1 = 0xC26CADBu; UPD(0x0C055936u, 2);  /* 0C055934 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C055938u, 1);  /* 0C055936 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C05593Au, 1);  /* 0C055938 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C05593A add #imm,Rn */
	W8(r4, r0); UPD(0x0C05593Eu, 2);  /* 0C05593C mov.b Rm,@Rn */
	r3 = 0x3Fu;  /* 0C05593E mov #imm,Rn */
	r6 = 0xC28651Cu; UPD(0x0C055942u, 2);  /* 0C055940 mov.l @(disp,pc),Rn */
	r4 += 0xFFFFFFEDu;  /* 0C055942 add #imm,Rn */
	r0 = 0x0u;  /* 0C055944 mov #imm,Rn */
	r7 = r4;  /* 0C055946 mov Rm,Rn */
	UPD(0x0C055948u, 3);
L_0C055948: BLKS(0x0C055948u);
	IF(0x0C055948u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C05594Au, 1);  /* 0C055948 mov.b @(r0,Rm),Rn */
	IF(0x0C05594Au); r2 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C05594Cu, 1);  /* 0C05594A mov.b @(r0,Rm),Rn */
	T = r2 == r4;  /* 0C05594C cmp/eq Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05595Eu, 4); goto L_0C05595E; } goto L_0C055952; }  /* 0C05594E bf/s */
L_0C055952: BLKS(0x0C055952u);
	r5 = r0;  /* 0C055952 mov Rm,Rn */
	r5 += 0x1u;  /* 0C055954 add #imm,Rn */
	r0 = (u32)(s32)(s16)r5;  /* 0C055956 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C055958 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C055948u, 8); goto L_0C055948; } UPD(0x0C05595Eu, 1); goto L_0C05595E; }  /* 0C05595A bf/s */
L_0C05595E: BLKS(0x0C05595Eu);
	r0 = r1;  /* 0C05595E mov Rm,Rn */
	r15 = r14;  /* 0C055960 mov Rm,Rn */
	IF(0x0C055962u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C055962 rts */
}

/* FUN_0c0559c0 */
void f_0C0559C0(sh3_t *c)
{
	LOCALS;
L_0C0559C0: BLKS(0x0C0559C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0559C2u, 1);  /* 0C0559C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0559C4u, 1);  /* 0C0559C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0559C6u, 1);  /* 0C0559C4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r4;  /* 0C0559C6 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0559CAu, 2);  /* 0C0559C8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r5;  /* 0C0559CA exts.b Rm,Rn */
	IF(0x0C0559CCu); r15 -= 4; W32(r15, PR); UPD(0x0C0559CEu, 2);  /* 0C0559CC sts.l pr,@-Rn */
	r2 = 0xC286276u; UPD(0x0C0559D0u, 1);  /* 0C0559CE mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0559D2u, 1);  /* 0C0559D0 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0559D2 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0559DCu, 4); goto L_0C0559DC; } goto L_0C0559D8; }  /* 0C0559D4 bf/s */
L_0C0559D8: BLKS(0x0C0559D8u);
	{ IF(0x0C0559DAu); ; /* slot nop */ UPD(0x0C055B30u, 4); goto L_0C055B30; }  /* 0C0559D8 bra */
L_0C0559DC: BLKS(0x0C0559DCu);
	r4 = 0xC392D60u; UPD(0x0C0559DEu, 1);  /* 0C0559DC mov.l @(disp,pc),Rn */
	r0 = 0x23456789u; UPD(0x0C0559E0u, 1);  /* 0C0559DE mov.l @(disp,pc),Rn */
	r3 = R32(r4); UPD(0x0C0559E2u, 1);  /* 0C0559E0 mov.l @Rm,Rn */
	T = r3 == r0;  /* 0C0559E2 cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C055A36u, 4); goto L_0C055A36; } goto L_0C0559E8; }  /* 0C0559E4 bt/s */
L_0C0559E8: BLKS(0x0C0559E8u);
	r6 = 0xC16122Eu; UPD(0x0C0559EAu, 2);  /* 0C0559E8 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C0559EA mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C0559EEu, 2);  /* 0C0559EC mov.b @Rm,Rn */
	T = r2 > r5;  /* 0C0559EE cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0559F6u, 4); goto L_0C0559F6; }  /* 0C0559F0 bf */
L_0C0559F2: BLKS(0x0C0559F2u);
	{ IF(0x0C0559F4u); ; /* slot nop */ UPD(0x0C055AE0u, 3); goto L_0C055AE0; }  /* 0C0559F2 bra */
L_0C0559F6: BLKS(0x0C0559F6u);
	r0 = 0xC055A10u;  /* 0C0559F6 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0559F8 add Rm,Rn */
	IF(0x0C0559FAu); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0559FCu, 3);  /* 0C0559FA mov.w @(r0,Rm),Rn */
	IF(0x0C0559FCu); { u32 tv_ = (r7 + 0x0C055A00u); u32 t_ = PHYS(tv_); IF(0x0C0559FEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C055A20u: goto L_0C055A20; case 0x0C055A2Cu: goto L_0C055A2C; case 0x0C055A50u: goto L_0C055A50; case 0x0C055A90u: goto L_0C055A90; case 0x0C055AE0u: goto L_0C055AE0; case 0x0C055AF0u: goto L_0C055AF0; default: JUMPD(tv_); } }  /* 0C0559FC braf Rn */
L_0C055A20: BLKS(0x0C055A20u);
	r10 = 0xC05A640u; UPD(0x0C055A22u, 1);  /* 0C055A20 mov.l @(disp,pc),Rn */
	r9 = 0xC1F60F8u; UPD(0x0C055A24u, 1);  /* 0C055A22 mov.l @(disp,pc),Rn */
	IF(0x0C055A24u); { u32 t_ = r10; PR = 0x0C055A28u; IF(0x0C055A26u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05A640, 0x0C05A640u, 0x0C055A28u); }  /* 0C055A24 jsr @Rn */
L_0C055A28: BLKS(0x0C055A28u);
	r1 = 0x40u;  /* 0C055A28 mov #imm,Rn */
	W16(r9, r1); UPD(0x0C055A2Cu, 2);  /* 0C055A2A mov.w Rm,@Rn */
L_0C055A2C: BLKS(0x0C055A2Cu);
	r6 = 0xC16122Eu; UPD(0x0C055A2Eu, 1);  /* 0C055A2C mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C055A30u, 1);  /* 0C055A2E mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C055A30 add #imm,Rn */
	W8(r6, r5); UPD(0x0C055A34u, 2);  /* 0C055A32 mov.b Rm,@Rn */
L_0C055A34: BLKS(0x0C055A34u);
	r0 = 0x1u;  /* 0C055A34 mov #imm,Rn */
	UPD(0x0C055A36u, 1);
L_0C055A36: BLKS(0x0C055A36u);
	r15 = r14;  /* 0C055A36 mov Rm,Rn */
	IF(0x0C055A38u); PR = R32(r15); r15 += 4; UPD(0x0C055A3Au, 2);  /* 0C055A38 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C055A3Cu, 1);  /* 0C055A3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C055A3Eu, 1);  /* 0C055A3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C055A40u, 1);  /* 0C055A3E mov.l @Rm+,Rn */
	IF(0x0C055A40u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C055A40 rts */
L_0C055A50: BLKS(0x0C055A50u);
	r8 = 0xC1F60F8u; UPD(0x0C055A52u, 1);  /* 0C055A50 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C055A52 mov Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C055A56u, 2);  /* 0C055A54 mov.w @Rm,Rn */
	r6 = r10;  /* 0C055A56 mov Rm,Rn */
	r0 = r4;  /* 0C055A58 mov Rm,Rn */
	IF(0x0C055A5Au); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C055A5A rotl Rn */
	r9 = 0xC050A80u; UPD(0x0C055A5Eu, 4);  /* 0C055A5C mov.l @(disp,pc),Rn */
	IF(0x0C055A5Eu); r2 = T;  /* 0C055A5E movt Rn */
	r4 += r2;  /* 0C055A60 add Rm,Rn */
	IF(0x0C055A62u); { u32 t_ = r9; PR = 0x0C055A66u; IF(0x0C055A64u); T = r4 & 1; r4 = (u32)((s32)r4 >> 1); /* slot shar Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C055A66u); }  /* 0C055A62 jsr @Rn */
L_0C055A66: BLKS(0x0C055A66u);
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C055A68u, 1);  /* 0C055A66 mov.w @Rm,Rn */
	r4 = 0xC26C8D8u; UPD(0x0C055A6Au, 1);  /* 0C055A68 mov.l @(disp,pc),Rn */
	r7 = r6;  /* 0C055A6A mov Rm,Rn */
	IF(0x0C055A6Cu); T = r7 >> 31; r7 = (r7 << 1) | T;  /* 0C055A6C rotl Rn */
	IF(0x0C055A6Eu); r5 = T;  /* 0C055A6E movt Rn */
	r4 += r6;  /* 0C055A70 add Rm,Rn */
	r6 += r5;  /* 0C055A72 add Rm,Rn */
	r3 = 0xC04C270u; UPD(0x0C055A76u, 6);  /* 0C055A74 mov.l @(disp,pc),Rn */
	IF(0x0C055A76u); T = r6 & 1; r6 >>= 1;  /* 0C055A76 shlr Rn */
	r5 = r6 & 0xFF;  /* 0C055A78 extu.b Rm,Rn */
	IF(0x0C055A7Au); { u32 t_ = r3; PR = 0x0C055A7Eu; r6 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C04C270, 0x0C04C270u, 0x0C055A7Eu); }  /* 0C055A7A jsr @Rn */
L_0C055A7E: BLKS(0x0C055A7Eu);
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C055A80u, 1);  /* 0C055A7E mov.w @Rm,Rn */
	r0 += 0x2u;  /* 0C055A80 add #imm,Rn */
	W16(r8, r0); UPD(0x0C055A84u, 2);  /* 0C055A82 mov.w Rm,@Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C055A84 exts.w Rm,Rn */
	r8 = 0x1D3u; UPD(0x0C055A88u, 2);  /* 0C055A86 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C055A88 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C055A34u, 4); goto L_0C055A34; }  /* 0C055A8A bf */
L_0C055A8C: BLKS(0x0C055A8Cu);
	{ IF(0x0C055A8Eu); ; /* slot nop */ UPD(0x0C055A2Cu, 3); goto L_0C055A2C; }  /* 0C055A8C bra */
L_0C055A90: BLKS(0x0C055A90u);
	r4 = 0xC1F60F8u; UPD(0x0C055A92u, 1);  /* 0C055A90 mov.l @(disp,pc),Rn */
	r8 = 0x40u;  /* 0C055A92 mov #imm,Rn */
	r5 = 0xC28651Cu; UPD(0x0C055A96u, 2);  /* 0C055A94 mov.l @(disp,pc),Rn */
	r2 = 0x40u;  /* 0C055A96 mov #imm,Rn */
	r6 = 0xC26C8D8u; UPD(0x0C055A9Au, 2);  /* 0C055A98 mov.l @(disp,pc),Rn */
	r7 = 0x1D3u; UPD(0x0C055A9Cu, 1);  /* 0C055A9A mov.w @(disp,pc),Rn */
	W16(r4, r8); UPD(0x0C055A9Eu, 1);  /* 0C055A9C mov.w Rm,@Rn */
	IF(0x0C055A9Eu); ;  /* 0C055A9E nop */
	UPD(0x0C055AA0u, 1);
L_0C055AA0: BLKS(0x0C055AA0u);
	r0 = (u32)(s32)(s16)r2;  /* 0C055AA0 exts.w Rm,Rn */
	IF(0x0C055AA2u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C055AA4u, 2);  /* 0C055AA2 mov.b @(r0,Rm),Rn */
	IF(0x0C055AA4u); W8(r0 + r5, r3); UPD(0x0C055AA6u, 1);  /* 0C055AA4 mov.b Rm,@(r0,Rn) */
	r3 = r2;  /* 0C055AA6 mov Rm,Rn */
	r3 += 0x1u;  /* 0C055AA8 add #imm,Rn */
	r0 = (u32)(s32)(s16)r3;  /* 0C055AAA exts.w Rm,Rn */
	T = (s32)r0 > (s32)r7;  /* 0C055AAC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C055AA0u, 7); goto L_0C055AA0; } goto L_0C055AB2; }  /* 0C055AAE bf/s */
L_0C055AB2: BLKS(0x0C055AB2u);
	r8 = 0xC053E90u; UPD(0x0C055AB4u, 2);  /* 0C055AB2 mov.l @(disp,pc),Rn */
	IF(0x0C055AB4u); { u32 t_ = r8; PR = 0x0C055AB8u; W16(r4, r3); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C053E90, 0x0C053E90u, 0x0C055AB8u); }  /* 0C055AB4 jsr @Rn */
L_0C055AB8: BLKS(0x0C055AB8u);
	T = (r0 & r0) == 0;  /* 0C055AB8 tst Rm,Rn */
	if (T) { UPD(0x0C055A2Cu, 4); goto L_0C055A2C; }  /* 0C055ABA bt */
L_0C055ABC: BLKS(0x0C055ABCu);
	r6 = r10;  /* 0C055ABC mov Rm,Rn */
	r10 = 0xC050CD0u; UPD(0x0C055AC0u, 2);  /* 0C055ABE mov.l @(disp,pc),Rn */
	r4 = 0xC161230u; UPD(0x0C055AC2u, 1);  /* 0C055AC0 mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C055AC4u, 1);  /* 0C055AC2 mov.l @(disp,pc),Rn */
	IF(0x0C055AC4u); { u32 t_ = r10; PR = 0x0C055AC8u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055AC8u); }  /* 0C055AC4 jsr @Rn */
L_0C055AC8: BLKS(0x0C055AC8u);
	r2 = 0x4u;  /* 0C055AC8 mov #imm,Rn */
	IF(0x0C055ACAu); ;  /* 0C055ACA nop */
	UPD(0x0C055ACCu, 2);
L_0C055ACC: BLKS(0x0C055ACCu);
	r8 = 0xC16122Eu; UPD(0x0C055ACEu, 1);  /* 0C055ACC mov.l @(disp,pc),Rn */
	{ W8(r8, r2); /* slot mov.b Rm,@Rn */ UPD(0x0C055A34u, 3); goto L_0C055A34; }  /* 0C055ACE bra */
L_0C055AE0: BLKS(0x0C055AE0u);
	r1 = 0x23456789u; UPD(0x0C055AE2u, 1);  /* 0C055AE0 mov.l @(disp,pc),Rn */
	r4 = 0xC392D60u; UPD(0x0C055AE4u, 1);  /* 0C055AE2 mov.l @(disp,pc),Rn */
	W32(r4, r1); UPD(0x0C055AE6u, 1);  /* 0C055AE4 mov.l Rm,@Rn */
L_0C055AE6: BLKS(0x0C055AE6u);
	{ r2 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C055ACCu, 3); goto L_0C055ACC; }  /* 0C055AE6 bra */
L_0C055AF0: BLKS(0x0C055AF0u);
	r8 = 0xC05A640u; UPD(0x0C055AF2u, 1);  /* 0C055AF0 mov.l @(disp,pc),Rn */
	r10 = 0xC04C23Cu; UPD(0x0C055AF4u, 1);  /* 0C055AF2 mov.l @(disp,pc),Rn */
	IF(0x0C055AF4u); { u32 t_ = r8; PR = 0x0C055AF8u; IF(0x0C055AF6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05A640, 0x0C05A640u, 0x0C055AF8u); }  /* 0C055AF4 jsr @Rn */
L_0C055AF8: BLKS(0x0C055AF8u);
	r2 = 0xC055B90u; UPD(0x0C055AFAu, 1);  /* 0C055AF8 mov.l @(disp,pc),Rn */
	IF(0x0C055AFAu); { u32 t_ = r2; PR = 0x0C055AFEu; IF(0x0C055AFCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C055B90, 0x0C055B90u, 0x0C055AFEu); }  /* 0C055AFA jsr @Rn */
L_0C055AFE: BLKS(0x0C055AFEu);
	r4 = 0xC26C918u; UPD(0x0C055B00u, 1);  /* 0C055AFE mov.l @(disp,pc),Rn */
	r6 = 0x194u; UPD(0x0C055B02u, 1);  /* 0C055B00 mov.w @(disp,pc),Rn */
	IF(0x0C055B02u); { u32 t_ = r10; PR = 0x0C055B06u; r5 = 0x20u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04C23C, 0x0C04C23Cu, 0x0C055B06u); }  /* 0C055B02 jsr @Rn */
L_0C055B06: BLKS(0x0C055B06u);
	r3 = 0xC16122Cu; UPD(0x0C055B08u, 1);  /* 0C055B06 mov.l @(disp,pc),Rn */
	r7 = 0x4u;  /* 0C055B08 mov #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C055B0Cu, 2);  /* 0C055B0A mov.w @Rm,Rn */
	r0 += 0x1u;  /* 0C055B0C add #imm,Rn */
	r9 = (u32)(s32)(s16)r0;  /* 0C055B0E exts.w Rm,Rn */
	T = (s32)r9 > (s32)r7;  /* 0C055B10 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W16(r3, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C055AE6u, 6); goto L_0C055AE6; } UPD(0x0C055B16u, 1); goto L_0C055B16; }  /* 0C055B12 bf/s */
L_0C055B16: BLKS(0x0C055B16u);
	r4 = 0xC286276u; UPD(0x0C055B18u, 1);  /* 0C055B16 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C055B18 mov #imm,Rn */
	IF(0x0C055B1Au); { u32 t_ = r8; PR = 0x0C055B1Eu; W8(r4, r1); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C05A640, 0x0C05A640u, 0x0C055B1Eu); }  /* 0C055B1A jsr @Rn */
L_0C055B1E: BLKS(0x0C055B1Eu);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C055A36u, 3); goto L_0C055A36; }  /* 0C055B1E bra */
L_0C055B30: BLKS(0x0C055B30u);
	r8 = 0xC05A640u; UPD(0x0C055B32u, 1);  /* 0C055B30 mov.l @(disp,pc),Rn */
	IF(0x0C055B32u); { u32 t_ = r8; PR = 0x0C055B36u; IF(0x0C055B34u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05A640, 0x0C05A640u, 0x0C055B36u); }  /* 0C055B32 jsr @Rn */
L_0C055B36: BLKS(0x0C055B36u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C055A36u, 3); goto L_0C055A36; }  /* 0C055B36 bra */
}

/* FUN_0c055b90 */
void f_0C055B90(sh3_t *c)
{
	LOCALS;
L_0C055B90: BLKS(0x0C055B90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C055B92u, 1);  /* 0C055B90 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C055B92 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C055B96u, 2);  /* 0C055B94 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C055B96 mov #imm,Rn */
	r8 = 0xC26C8D8u; UPD(0x0C055B9Au, 2);  /* 0C055B98 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C055B9A mov Rm,Rn */
	r4 = 0x0u;  /* 0C055B9C mov #imm,Rn */
	IF(0x0C055B9Eu); ;  /* 0C055B9E nop */
	UPD(0x0C055BA0u, 3);
L_0C055BA0: BLKS(0x0C055BA0u);
	r2 = 0xAu;  /* 0C055BA0 mov #imm,Rn */
	IF(0x0C055BA2u); MACL = r0 * r2;  /* 0C055BA2 mul.l Rm,Rn */
	r7 = 0xC2859A8u; UPD(0x0C055BA6u, 4);  /* 0C055BA4 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C055BA6 mov #imm,Rn */
	IF(0x0C055BA8u); r3 = MACL;  /* 0C055BA8 sts macl,Rn */
	r7 += r4;  /* 0C055BAA add Rm,Rn */
	r3 += r8;  /* 0C055BAC add Rm,Rn */
	IF(0x0C055BAEu); ;  /* 0C055BAE nop */
	UPD(0x0C055BB0u, 5);
L_0C055BB0: BLKS(0x0C055BB0u);
	r2 = R32(r7); UPD(0x0C055BB2u, 1);  /* 0C055BB0 mov.l @Rm,Rn */
	r3 += 0x40u;  /* 0C055BB2 add #imm,Rn */
	r1 = r2;  /* 0C055BB4 mov Rm,Rn */
	IF(0x0C055BB6u); r1 >>= 16;  /* 0C055BB6 shlr16 Rn */
	IF(0x0C055BB8u); r1 >>= 8;  /* 0C055BB8 shlr8 Rn */
	W8(r3, r1); UPD(0x0C055BBCu, 5);  /* 0C055BBA mov.b Rm,@Rn */
	r7 += 0x3u;  /* 0C055BBC add #imm,Rn */
	r1 = r2;  /* 0C055BBE mov Rm,Rn */
	r3 += 0x1u;  /* 0C055BC0 add #imm,Rn */
	IF(0x0C055BC2u); r1 >>= 16;  /* 0C055BC2 shlr16 Rn */
	W8(r3, r1); UPD(0x0C055BC6u, 5);  /* 0C055BC4 mov.b Rm,@Rn */
	IF(0x0C055BC6u); r2 >>= 8;  /* 0C055BC6 shlr8 Rn */
	r3 += 0x1u;  /* 0C055BC8 add #imm,Rn */
	W8(r3, r2); UPD(0x0C055BCCu, 3);  /* 0C055BCA mov.b Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C055BCEu, 1);  /* 0C055BCC mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C055BCE add #imm,Rn */
	W8(r3, r2); UPD(0x0C055BD2u, 2);  /* 0C055BD0 mov.b Rm,@Rn */
	r7 += 0x8u;  /* 0C055BD2 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C055BD6u, 2);  /* 0C055BD4 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C055BD6 add #imm,Rn */
	W8(r3, r2); UPD(0x0C055BDAu, 2);  /* 0C055BD8 mov.b Rm,@Rn */
	r7 += 0x4u;  /* 0C055BDA add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C055BDEu, 2);  /* 0C055BDC mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C055BDE add #imm,Rn */
	W8(r3, r2); UPD(0x0C055BE2u, 2);  /* 0C055BE0 mov.b Rm,@Rn */
	r7 += 0x4u;  /* 0C055BE2 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C055BE6u, 2);  /* 0C055BE4 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C055BE6 add #imm,Rn */
	W8(r3, r2); UPD(0x0C055BEAu, 2);  /* 0C055BE8 mov.b Rm,@Rn */
	r7 += 0x6u;  /* 0C055BEA add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C055BEEu, 2);  /* 0C055BEC mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C055BEE add #imm,Rn */
	W8(r3, r2); UPD(0x0C055BF2u, 2);  /* 0C055BF0 mov.b Rm,@Rn */
	r7 += 0xFFFFFFEEu;  /* 0C055BF2 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C055BF6u, 2);  /* 0C055BF4 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C055BF6 add #imm,Rn */
	W8(r3, r2); UPD(0x0C055BFAu, 2);  /* 0C055BF8 mov.b Rm,@Rn */
	r7 += 0x11u;  /* 0C055BFA add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C055BFEu, 2);  /* 0C055BFC mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C055BFE add #imm,Rn */
	W8(r3, r2); UPD(0x0C055C02u, 2);  /* 0C055C00 mov.b Rm,@Rn */
	r7 += 0x4u;  /* 0C055C02 add #imm,Rn */
	r2 = r6;  /* 0C055C04 mov Rm,Rn */
	r2 += 0x1u;  /* 0C055C06 add #imm,Rn */
	r6 = (u32)(s32)(s16)r2;  /* 0C055C08 exts.w Rm,Rn */
	r2 = 0x9u;  /* 0C055C0A mov #imm,Rn */
	T = (s32)r6 > (s32)r2;  /* 0C055C0C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFC1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C055BB0u, 9); goto L_0C055BB0; } goto L_0C055C12; }  /* 0C055C0E bf/s */
L_0C055C12: BLKS(0x0C055C12u);
	r6 = r5;  /* 0C055C12 mov Rm,Rn */
	r6 += 0x1u;  /* 0C055C14 add #imm,Rn */
	r1 = 0x16Cu; UPD(0x0C055C18u, 4);  /* 0C055C16 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r6;  /* 0C055C18 exts.w Rm,Rn */
	r3 = 0x3u;  /* 0C055C1A mov #imm,Rn */
	r0 += 0xAu;  /* 0C055C1C add #imm,Rn */
	T = (s32)r5 > (s32)r3;  /* 0C055C1E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += r1; /* slot add Rm,Rn */ if (c_) { UPD(0x0C055BA0u, 7); goto L_0C055BA0; } goto L_0C055C24; }  /* 0C055C20 bf/s */
L_0C055C24: BLKS(0x0C055C24u);
	r5 = 0xC392D54u; UPD(0x0C055C26u, 2);  /* 0C055C24 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C055C26 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r4 = v_; } UPD(0x0C055C2Au, 2);  /* 0C055C28 mov.b @Rm+,Rn */
	r2 = r5;  /* 0C055C2A mov Rm,Rn */
	r1 = 0xC26CAA8u; UPD(0x0C055C2Eu, 2);  /* 0C055C2C mov.l @(disp,pc),Rn */
	r2 += 0x2u; UPD(0x0C055C30u, 1);  /* 0C055C2E add #imm,Rn */
	W8(r1, r4); UPD(0x0C055C32u, 1);  /* 0C055C30 mov.b Rm,@Rn */
	r5 += 0x3u;  /* 0C055C32 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r0); UPD(0x0C055C36u, 2);  /* 0C055C34 mov.b @Rm,Rn */
	r3 = 0xC26CAA9u; UPD(0x0C055C38u, 1);  /* 0C055C36 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C055C3Au, 1);  /* 0C055C38 mov.b @Rm,Rn */
	W8(r3, r6); UPD(0x0C055C3Cu, 1);  /* 0C055C3A mov.b Rm,@Rn */
	r7 = 0xC26CAAAu; UPD(0x0C055C3Eu, 1);  /* 0C055C3C mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C055C40u, 1);  /* 0C055C3E mov.b @Rm,Rn */
	W8(r7, r8); UPD(0x0C055C42u, 1);  /* 0C055C40 mov.b Rm,@Rn */
	r0 = 0xC26CAABu; UPD(0x0C055C44u, 1);  /* 0C055C42 mov.l @(disp,pc),Rn */
	W8(r0, r4); UPD(0x0C055C46u, 1);  /* 0C055C44 mov.b Rm,@Rn */
	r15 = r14;  /* 0C055C46 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C055C4Au, 2);  /* 0C055C48 mov.l @Rm+,Rn */
	IF(0x0C055C4Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C055C4A rts */
}

void f_0C055C70(sh3_t *c)
{
	LOCALS;
L_0C055C70: BLKS(0x0C055C70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C055C72u, 1);  /* 0C055C70 mov.l Rm,@-Rn */
	r6 = 0x9u;  /* 0C055C72 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C055C76u, 2);  /* 0C055C74 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C055C78u, 1);  /* 0C055C76 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C055C7Au, 1);  /* 0C055C78 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C055C7Cu, 1);  /* 0C055C7A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C055C7Eu, 1);  /* 0C055C7C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C055C80u, 1);  /* 0C055C7E mov.l Rm,@-Rn */
	IF(0x0C055C80u); r15 -= 4; W32(r15, PR); UPD(0x0C055C82u, 1);  /* 0C055C80 sts.l pr,@-Rn */
	r8 = 0xC0AFEB0u; UPD(0x0C055C84u, 1);  /* 0C055C82 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE0u;  /* 0C055C84 add #imm,Rn */
	r14 = r15;  /* 0C055C86 mov Rm,Rn */
	r5 = 0xC0B1EE4u; UPD(0x0C055C8Au, 3);  /* 0C055C88 mov.l @(disp,pc),Rn */
	IF(0x0C055C8Au); { u32 t_ = r8; PR = 0x0C055C8Eu; r4 = r14; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFEB0, 0x0C0AFEB0u, 0x0C055C8Eu); }  /* 0C055C8A jsr @Rn */
L_0C055C8E: BLKS(0x0C055C8Eu);
	r2 = 0xC21F7F9u; UPD(0x0C055C90u, 1);  /* 0C055C8E mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C055C90 mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C055C94u, 2);  /* 0C055C92 mov.b @Rm,Rn */
	W32(r14 + 0x18u, r1); UPD(0x0C055C96u, 1);  /* 0C055C94 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C055C96 tst Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x1Cu, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C055CA0u, 4); goto L_0C055CA0; } UPD(0x0C055C9Cu, 1); goto L_0C055C9C; }  /* 0C055C98 bf/s */
L_0C055C9C: BLKS(0x0C055C9Cu);
	{ r10 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C056170u, 3); goto L_0C056170; }  /* 0C055C9C bra */
L_0C055CA0: BLKS(0x0C055CA0u);
	r3 = 0xC161274u; UPD(0x0C055CA2u, 1);  /* 0C055CA0 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C055CA2 mov #imm,Rn */
	r2 = 0x8u;  /* 0C055CA4 mov #imm,Rn */
	r0 = r3;  /* 0C055CA6 mov Rm,Rn */
	UPD(0x0C055CA8u, 3);
L_0C055CA8: BLKS(0x0C055CA8u);
	IF(0x0C055CA8u); r5 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C055CAAu, 1);  /* 0C055CA8 mov.b @(r0,Rm),Rn */
	r4 = 0xCu;  /* 0C055CAA mov #imm,Rn */
	r0 = r10;  /* 0C055CAC mov Rm,Rn */
	r4 += r14;  /* 0C055CAE add Rm,Rn */
	IF(0x0C055CB0u); W8(r0 + r4, r5); UPD(0x0C055CB2u, 4);  /* 0C055CB0 mov.b Rm,@(r0,Rn) */
	r0 = r10;  /* 0C055CB2 mov Rm,Rn */
	r0 += 0x1u;  /* 0C055CB4 add #imm,Rn */
	r10 = (u32)(s32)(s8)r0;  /* 0C055CB6 exts.b Rm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C055CB8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C055CA8u, 7); goto L_0C055CA8; } UPD(0x0C055CBEu, 1); goto L_0C055CBE; }  /* 0C055CBA bf/s */
L_0C055CBE: BLKS(0x0C055CBEu);
	r13 = 0xC050CD0u; UPD(0x0C055CC0u, 1);  /* 0C055CBE mov.l @(disp,pc),Rn */
L_0C055CC0: BLKS(0x0C055CC0u);
	r8 = 0xC04F330u; UPD(0x0C055CC2u, 1);  /* 0C055CC0 mov.l @(disp,pc),Rn */
	r12 = 0xC04F930u; UPD(0x0C055CC4u, 1);  /* 0C055CC2 mov.l @(disp,pc),Rn */
	IF(0x0C055CC4u); { u32 t_ = r8; PR = 0x0C055CC8u; IF(0x0C055CC6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C055CC8u); }  /* 0C055CC4 jsr @Rn */
L_0C055CC8: BLKS(0x0C055CC8u);
	r11 = 0xC050650u; UPD(0x0C055CCAu, 1);  /* 0C055CC8 mov.l @(disp,pc),Rn */
	IF(0x0C055CCAu); { u32 t_ = r12; PR = 0x0C055CCEu; IF(0x0C055CCCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C055CCEu); }  /* 0C055CCA jsr @Rn */
L_0C055CCE: BLKS(0x0C055CCEu);
	r10 = 0xC0505F0u; UPD(0x0C055CD0u, 1);  /* 0C055CCE mov.l @(disp,pc),Rn */
	IF(0x0C055CD0u); { u32 t_ = r11; PR = 0x0C055CD4u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050650, 0x0C050650u, 0x0C055CD4u); }  /* 0C055CD0 jsr @Rn */
L_0C055CD4: BLKS(0x0C055CD4u);
	IF(0x0C055CD4u); { u32 t_ = r10; PR = 0x0C055CD8u; IF(0x0C055CD6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C055CD8u); }  /* 0C055CD4 jsr @Rn */
L_0C055CD8: BLKS(0x0C055CD8u);
	r1 = 0xC27DDF4u; UPD(0x0C055CDAu, 1);  /* 0C055CD8 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C055CDCu, 1);  /* 0C055CDA mov.b @Rm,Rn */
	T = (r0 & 0x70u) == 0;  /* 0C055CDC tst #imm,r0 */
	if (!T) { UPD(0x0C055D4Cu, 4); goto L_0C055D4C; }  /* 0C055CDE bf */
L_0C055CE0: BLKS(0x0C055CE0u);
	r0 = 0x100u; UPD(0x0C055CE2u, 1);  /* 0C055CE0 mov.w @(disp,pc),Rn */
	IF(0x0C055CE2u); r2 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C055CE4u, 1);  /* 0C055CE2 mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C055CE4 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C055CE6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C055CE8 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C055CF8u, 6); goto L_0C055CF8; } goto L_0C055CEE; }  /* 0C055CEA bt/s */
L_0C055CEE: BLKS(0x0C055CEEu);
	r0 = R32(r14 + 0x18u); UPD(0x0C055CF0u, 2);  /* 0C055CEE mov.l @(disp,Rm),Rn */
	r4 = 0xC161244u; UPD(0x0C055CF2u, 1);  /* 0C055CF0 mov.l @(disp,pc),Rn */
	IF(0x0C055CF2u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C055CF4u, 1);  /* 0C055CF2 mov.b @(r0,Rm),Rn */
	W32(r14 + 0x18u, r3); UPD(0x0C055CF6u, 1);  /* 0C055CF4 mov.l Rm,@(disp,Rn) */
	r0 = r2;  /* 0C055CF6 mov Rm,Rn */
	UPD(0x0C055CF8u, 1);
L_0C055CF8: BLKS(0x0C055CF8u);
	r0 &= 0x2u;  /* 0C055CF8 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C055CFA tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C055D0Au, 5); goto L_0C055D0A; } goto L_0C055D00; }  /* 0C055CFC bt/s */
L_0C055D00: BLKS(0x0C055D00u);
	r0 = R32(r14 + 0x18u); UPD(0x0C055D02u, 2);  /* 0C055D00 mov.l @(disp,Rm),Rn */
	r6 = 0xC161250u; UPD(0x0C055D04u, 1);  /* 0C055D02 mov.l @(disp,pc),Rn */
	IF(0x0C055D04u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C055D06u, 1);  /* 0C055D04 mov.b @(r0,Rm),Rn */
	W32(r14 + 0x18u, r5); UPD(0x0C055D08u, 1);  /* 0C055D06 mov.l Rm,@(disp,Rn) */
	r0 = r2;  /* 0C055D08 mov Rm,Rn */
	UPD(0x0C055D0Au, 1);
L_0C055D0A: BLKS(0x0C055D0Au);
	r0 &= 0x8u;  /* 0C055D0A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C055D0C tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C055D28u, 5); goto L_0C055D28; } UPD(0x0C055D12u, 1); goto L_0C055D12; }  /* 0C055D0E bt/s */
L_0C055D12: BLKS(0x0C055D12u);
	r1 = 0xCu;  /* 0C055D12 mov #imm,Rn */
	r1 += r14;  /* 0C055D14 add Rm,Rn */
	IF(0x0C055D16u); r2 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C055D18u, 3);  /* 0C055D16 mov.b @(r0,Rm),Rn */
	IF(0x0C055D18u); r9 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C055D1Au, 1);  /* 0C055D18 mov.b @(r0,Rm),Rn */
	T = r9 == r2;  /* 0C055D1A cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C055D22u, 4); goto L_0C055D22; }  /* 0C055D1C bf */
L_0C055D1E: BLKS(0x0C055D1Eu);
	{ IF(0x0C055D20u); ; /* slot nop */ UPD(0x0C056160u, 3); goto L_0C056160; }  /* 0C055D1E bra */
L_0C055D22: BLKS(0x0C055D22u);
	r1 = r2;  /* 0C055D22 mov Rm,Rn */
	r1 += 0x1u;  /* 0C055D24 add #imm,Rn */
	UPD(0x0C055D26u, 2);
L_0C055D26: BLKS(0x0C055D26u);
	IF(0x0C055D26u); W8(r0 + r14, r1); UPD(0x0C055D28u, 1);  /* 0C055D26 mov.b Rm,@(r0,Rn) */
L_0C055D28: BLKS(0x0C055D28u);
	r7 = 0xC27DDF4u; UPD(0x0C055D2Au, 1);  /* 0C055D28 mov.l @(disp,pc),Rn */
	r0 = 0x100u; UPD(0x0C055D2Cu, 1);  /* 0C055D2A mov.w @(disp,pc),Rn */
	IF(0x0C055D2Cu); r0 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C055D2Eu, 1);  /* 0C055D2C mov.b @(r0,Rm),Rn */
	r0 &= 0x4u;  /* 0C055D2E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C055D30 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C055D4Cu, 5); goto L_0C055D4C; } UPD(0x0C055D36u, 1); goto L_0C055D36; }  /* 0C055D32 bt/s */
L_0C055D36: BLKS(0x0C055D36u);
	r11 = 0xC16125Cu; UPD(0x0C055D38u, 1);  /* 0C055D36 mov.l @(disp,pc),Rn */
	IF(0x0C055D38u); r2 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C055D3Au, 1);  /* 0C055D38 mov.b @(r0,Rm),Rn */
	IF(0x0C055D3Au); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C055D3Cu, 1);  /* 0C055D3A mov.b @(r0,Rm),Rn */
	T = r10 == r2;  /* 0C055D3C cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C055D46u, 4); goto L_0C055D46; }  /* 0C055D3E bf */
L_0C055D40: BLKS(0x0C055D40u);
	r12 = 0xCu;  /* 0C055D40 mov #imm,Rn */
	{ r12 += r14; /* slot add Rm,Rn */ UPD(0x0C056150u, 4); goto L_0C056150; }  /* 0C055D42 bra */
L_0C055D46: BLKS(0x0C055D46u);
	r1 = r2;  /* 0C055D46 mov Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C055D48 add #imm,Rn */
	UPD(0x0C055D4Au, 2);
L_0C055D4A: BLKS(0x0C055D4Au);
	IF(0x0C055D4Au); W8(r0 + r14, r1); UPD(0x0C055D4Cu, 1);  /* 0C055D4A mov.b Rm,@(r0,Rn) */
L_0C055D4C: BLKS(0x0C055D4Cu);
	r2 = 0xC27DDF4u; UPD(0x0C055D4Eu, 1);  /* 0C055D4C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C055D50u, 1);  /* 0C055D4E mov.b @Rm,Rn */
	r0 &= 0x60u;  /* 0C055D50 and #imm,r0 */
	T = r0 == 0x40u;  /* 0C055D52 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C055D5Au, 5); goto L_0C055D5A; }  /* 0C055D54 bf */
L_0C055D56: BLKS(0x0C055D56u);
	{ IF(0x0C055D58u); ; /* slot nop */ UPD(0x0C0560F0u, 3); goto L_0C0560F0; }  /* 0C055D56 bra */
L_0C055D5A: BLKS(0x0C055D5Au);
	r8 = 0x40u;  /* 0C055D5A mov #imm,Rn */
	T = (s32)r0 > (s32)r8;  /* 0C055D5C cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x60u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C055D66u, 5); goto L_0C055D66; } goto L_0C055D62; }  /* 0C055D5E bf/s */
L_0C055D62: BLKS(0x0C055D62u);
	{ IF(0x0C055D64u); ; /* slot nop */ UPD(0x0C0560B0u, 4); goto L_0C0560B0; }  /* 0C055D62 bra */
L_0C055D66: BLKS(0x0C055D66u);
	T = r0 == 0x20u;  /* 0C055D66 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C055D6Eu, 4); goto L_0C055D6E; }  /* 0C055D68 bf */
L_0C055D6A: BLKS(0x0C055D6Au);
	{ IF(0x0C055D6Cu); ; /* slot nop */ UPD(0x0C056040u, 3); goto L_0C056040; }  /* 0C055D6A bra */
L_0C055D6E: BLKS(0x0C055D6Eu);
	r8 = 0xC27DDF4u; UPD(0x0C055D70u, 1);  /* 0C055D6E mov.l @(disp,pc),Rn */
	r0 = 0x100u; UPD(0x0C055D72u, 1);  /* 0C055D70 mov.w @(disp,pc),Rn */
	IF(0x0C055D72u); r0 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C055D74u, 1);  /* 0C055D72 mov.b @(r0,Rm),Rn */
	r0 &= 0x10u;  /* 0C055D74 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C055D76 tst Rm,Rn */
	{ u32 c_ = T; r1 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C055D9Eu, 5); goto L_0C055D9E; } UPD(0x0C055D7Cu, 1); goto L_0C055D7C; }  /* 0C055D78 bt/s */
L_0C055D7C: BLKS(0x0C055D7Cu);
	r1 = R32(r14 + 0x18u); UPD(0x0C055D7Eu, 1);  /* 0C055D7C mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C055D7E tst Rm,Rn */
	{ u32 c_ = !T; r0 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C055D88u, 4); goto L_0C055D88; } goto L_0C055D84; }  /* 0C055D80 bf/s */
L_0C055D84: BLKS(0x0C055D84u);
	{ r1 = (u32)(s32)(s8)R8(r14); /* slot mov.b @Rm,Rn */ UPD(0x0C056020u, 4); goto L_0C056020; }  /* 0C055D84 bra */
L_0C055D88: BLKS(0x0C055D88u);
	T = r0 == 0x8u;  /* 0C055D88 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r0 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C055D92u, 4); goto L_0C055D92; } UPD(0x0C055D8Eu, 1); goto L_0C055D8E; }  /* 0C055D8A bf/s */
L_0C055D8E: BLKS(0x0C055D8Eu);
	{ r10 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C055FE0u, 3); goto L_0C055FE0; }  /* 0C055D8E bra */
L_0C055D92: BLKS(0x0C055D92u);
	r10 = 0xC0AFAE0u; UPD(0x0C055D94u, 1);  /* 0C055D92 mov.l @(disp,pc),Rn */
	r5 = r0;  /* 0C055D94 mov Rm,Rn */
	IF(0x0C055D96u); r11 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C055D98u, 2);  /* 0C055D96 mov.b @(r0,Rm),Rn */
	IF(0x0C055D98u); { u32 t_ = r10; PR = 0x0C055D9Cu; r4 = r11 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFAE0, 0x0C0AFAE0u, 0x0C055D9Cu); }  /* 0C055D98 jsr @Rn */
L_0C055D9C: BLKS(0x0C055D9Cu);
	r1 = R32(r14 + 0x1Cu); UPD(0x0C055D9Eu, 1);  /* 0C055D9C mov.l @(disp,Rm),Rn */
L_0C055D9E: BLKS(0x0C055D9Eu);
	T = (r1 & r1) == 0;  /* 0C055D9E tst Rm,Rn */
	UPD(0x0C055DA0u, 1);
L_0C055DA0: BLKS(0x0C055DA0u);
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C055DB0u, 3); goto L_0C055DB0; } goto L_0C055DA4; }  /* 0C055DA0 bt/s */
L_0C055DA4: BLKS(0x0C055DA4u);
	r12 = (u32)(s32)(s16)r1;  /* 0C055DA4 exts.w Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C055DA6 tst Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x1Cu, r12); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C055DB0u, 6); goto L_0C055DB0; } UPD(0x0C055DACu, 1); goto L_0C055DAC; }  /* 0C055DA8 bf/s */
L_0C055DAC: BLKS(0x0C055DACu);
	{ r4 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C055FD0u, 3); goto L_0C055FD0; }  /* 0C055DAC bra */
L_0C055DB0: BLKS(0x0C055DB0u);
	r4 = 0xC27DDF4u; UPD(0x0C055DB2u, 1);  /* 0C055DB0 mov.l @(disp,pc),Rn */
	r0 = 0x80u; UPD(0x0C055DB4u, 1);  /* 0C055DB2 mov.w @(disp,pc),Rn */
	IF(0x0C055DB4u); r0 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C055DB6u, 1);  /* 0C055DB4 mov.b @(r0,Rm),Rn */
	r0 &= 0x20u;  /* 0C055DB6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C055DB8 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1Bu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C055DC2u, 5); goto L_0C055DC2; } goto L_0C055DBE; }  /* 0C055DBA bt/s */
L_0C055DBE: BLKS(0x0C055DBEu);
	{ IF(0x0C055DC0u); r9 = (u32)(s32)(s8)R8(r0 + r14); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C055FC0u, 4); goto L_0C055FC0; }  /* 0C055DBE bra */
L_0C055DC2: BLKS(0x0C055DC2u);
	r3 = 0xC161238u; UPD(0x0C055DC4u, 1);  /* 0C055DC2 mov.l @(disp,pc),Rn */
	r6 = 0x2u;  /* 0C055DC4 mov #imm,Rn */
	r0 = R32(r14 + 0x18u); UPD(0x0C055DC8u, 2);  /* 0C055DC6 mov.l @(disp,Rm),Rn */
	r10 = 0x0u;  /* 0C055DC8 mov #imm,Rn */
	r4 = 0xC160690u; UPD(0x0C055DCCu, 2);  /* 0C055DCA mov.l @(disp,pc),Rn */
	r7 = 0x40C04000u; UPD(0x0C055DCEu, 1);  /* 0C055DCC mov.l @(disp,pc),Rn */
	IF(0x0C055DCEu); { u32 t_ = r13; PR = 0x0C055DD2u; IF(0x0C055DD0u); r5 = (u32)(s32)(s8)R8(r0 + r3); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055DD2u); }  /* 0C055DCE jsr @Rn */
L_0C055DD2: BLKS(0x0C055DD2u);
	r4 = 0xC160558u; UPD(0x0C055DD4u, 1);  /* 0C055DD2 mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C055DD4 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C055DD8u, 2);  /* 0C055DD6 mov.l @(disp,pc),Rn */
	IF(0x0C055DD8u); { u32 t_ = r13; PR = 0x0C055DDCu; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055DDCu); }  /* 0C055DD8 jsr @Rn */
L_0C055DDC: BLKS(0x0C055DDCu);
	r4 = 0xC161280u; UPD(0x0C055DDEu, 1);  /* 0C055DDC mov.l @(disp,pc),Rn */
	r5 = 0x1Cu;  /* 0C055DDE mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C055DE2u, 2);  /* 0C055DE0 mov.l @(disp,pc),Rn */
	IF(0x0C055DE2u); { u32 t_ = r13; PR = 0x0C055DE6u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055DE6u); }  /* 0C055DE2 jsr @Rn */
L_0C055DE6: BLKS(0x0C055DE6u);
	r4 = 0xC161284u; UPD(0x0C055DE8u, 1);  /* 0C055DE6 mov.l @(disp,pc),Rn */
	r5 = 0x18u;  /* 0C055DE8 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C055DECu, 2);  /* 0C055DEA mov.l @(disp,pc),Rn */
	IF(0x0C055DECu); { u32 t_ = r13; PR = 0x0C055DF0u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055DF0u); }  /* 0C055DEC jsr @Rn */
L_0C055DF0: BLKS(0x0C055DF0u);
	r4 = 0xC161290u; UPD(0x0C055DF2u, 1);  /* 0C055DF0 mov.l @(disp,pc),Rn */
	r5 = 0x17u;  /* 0C055DF2 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C055DF6u, 2);  /* 0C055DF4 mov.l @(disp,pc),Rn */
	IF(0x0C055DF6u); { u32 t_ = r13; PR = 0x0C055DFAu; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055DFAu); }  /* 0C055DF6 jsr @Rn */
L_0C055DFA: BLKS(0x0C055DFAu);
	r4 = 0xC16129Cu; UPD(0x0C055DFCu, 1);  /* 0C055DFA mov.l @(disp,pc),Rn */
	r5 = 0x16u;  /* 0C055DFC mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C055E00u, 2);  /* 0C055DFE mov.l @(disp,pc),Rn */
	IF(0x0C055E00u); { u32 t_ = r13; PR = 0x0C055E04u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055E04u); }  /* 0C055E00 jsr @Rn */
L_0C055E04: BLKS(0x0C055E04u);
	r4 = 0xC1612A8u; UPD(0x0C055E06u, 1);  /* 0C055E04 mov.l @(disp,pc),Rn */
	r5 = 0x15u;  /* 0C055E06 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C055E0Au, 2);  /* 0C055E08 mov.l @(disp,pc),Rn */
	IF(0x0C055E0Au); { u32 t_ = r13; PR = 0x0C055E0Eu; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055E0Eu); }  /* 0C055E0A jsr @Rn */
L_0C055E0E: BLKS(0x0C055E0Eu);
	r4 = 0xC1612B4u; UPD(0x0C055E10u, 1);  /* 0C055E0E mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C055E10 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C055E14u, 2);  /* 0C055E12 mov.l @(disp,pc),Rn */
	IF(0x0C055E14u); { u32 t_ = r13; PR = 0x0C055E18u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055E18u); }  /* 0C055E14 jsr @Rn */
L_0C055E18: BLKS(0x0C055E18u);
	r4 = 0xC1612C0u; UPD(0x0C055E1Au, 1);  /* 0C055E18 mov.l @(disp,pc),Rn */
	r5 = 0x13u;  /* 0C055E1A mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C055E1Eu, 2);  /* 0C055E1C mov.l @(disp,pc),Rn */
	IF(0x0C055E1Eu); { u32 t_ = r13; PR = 0x0C055E22u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055E22u); }  /* 0C055E1E jsr @Rn */
L_0C055E22: BLKS(0x0C055E22u);
	r4 = 0xC1612CCu; UPD(0x0C055E24u, 1);  /* 0C055E22 mov.l @(disp,pc),Rn */
	r5 = 0x12u;  /* 0C055E24 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C055E28u, 2);  /* 0C055E26 mov.l @(disp,pc),Rn */
	r12 = 0xC04E470u; UPD(0x0C055E2Au, 1);  /* 0C055E28 mov.l @(disp,pc),Rn */
	IF(0x0C055E2Au); { u32 t_ = r13; PR = 0x0C055E2Eu; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055E2Eu); }  /* 0C055E2A jsr @Rn */
L_0C055E2E: BLKS(0x0C055E2Eu);
	r11 = 0xC0508F0u; UPD(0x0C055E30u, 1);  /* 0C055E2E mov.l @(disp,pc),Rn */
	r5 = 0x11u;  /* 0C055E30 mov #imm,Rn */
	r4 = 0xC1612D8u; UPD(0x0C055E34u, 2);  /* 0C055E32 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C055E36u, 1);  /* 0C055E34 mov.l @(disp,pc),Rn */
	IF(0x0C055E36u); { u32 t_ = r13; PR = 0x0C055E3Au; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055E3Au); }  /* 0C055E36 jsr @Rn */
L_0C055E3A: BLKS(0x0C055E3Au);
	IF(0x0C055E3Au); ;  /* 0C055E3A nop */
	UPD(0x0C055E3Cu, 1);
L_0C055E3C: BLKS(0x0C055E3Cu);
	r4 = r10 & 0xFF;  /* 0C055E3C extu.b Rm,Rn */
	IF(0x0C055E3Eu); { u32 t_ = r12; PR = 0x0C055E42u; r8 = 0u - r10; /* slot neg Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04E470, 0x0C04E470u, 0x0C055E42u); }  /* 0C055E3E jsr @Rn */
L_0C055E42: BLKS(0x0C055E42u);
	r8 += 0xCu;  /* 0C055E42 add #imm,Rn */
	r4 = R32(r0 + 0x8u); UPD(0x0C055E46u, 2);  /* 0C055E44 mov.l @(disp,Rm),Rn */
	r9 = r0;  /* 0C055E46 mov Rm,Rn */
	r5 = r8;  /* 0C055E48 mov Rm,Rn */
	IF(0x0C055E4Au); { u32 t_ = r11; PR = 0x0C055E4Eu; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0508F0, 0x0C0508F0u, 0x0C055E4Eu); }  /* 0C055E4A jsr @Rn */
L_0C055E4E: BLKS(0x0C055E4Eu);
	r4 = R32(r9 + 0x4u); UPD(0x0C055E50u, 1);  /* 0C055E4E mov.l @(disp,Rm),Rn */
	r5 = r8;  /* 0C055E50 mov Rm,Rn */
	IF(0x0C055E52u); { u32 t_ = r11; PR = 0x0C055E56u; r6 = 0xDu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0508F0, 0x0C0508F0u, 0x0C055E56u); }  /* 0C055E52 jsr @Rn */
L_0C055E56: BLKS(0x0C055E56u);
	r5 = r8;  /* 0C055E56 mov Rm,Rn */
	r6 = 0x16u;  /* 0C055E58 mov #imm,Rn */
	IF(0x0C055E5Au); { u32 t_ = r11; PR = 0x0C055E5Eu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0508F0, 0x0C0508F0u, 0x0C055E5Eu); }  /* 0C055E5A jsr @Rn */
L_0C055E5E: BLKS(0x0C055E5Eu);
	r6 = r10;  /* 0C055E5E mov Rm,Rn */
	r6 += 0x1u;  /* 0C055E60 add #imm,Rn */
	r10 = (u32)(s32)(s8)r6;  /* 0C055E62 exts.b Rm,Rn */
	r5 = 0x7u;  /* 0C055E64 mov #imm,Rn */
	T = (s32)r10 > (s32)r5;  /* 0C055E66 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r5 = 0x1Cu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C055E3Cu, 8); goto L_0C055E3C; } goto L_0C055E6C; }  /* 0C055E68 bf/s */
L_0C055E6C: BLKS(0x0C055E6Cu);
	r12 = 0xC050A80u; UPD(0x0C055E6Eu, 2);  /* 0C055E6C mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r14); UPD(0x0C055E70u, 1);  /* 0C055E6E mov.b @Rm,Rn */
	r6 = 0xAu;  /* 0C055E70 mov #imm,Rn */
	IF(0x0C055E72u); { u32 t_ = r12; PR = 0x0C055E76u; r4 = r2 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C055E76u); }  /* 0C055E72 jsr @Rn */
L_0C055E76: BLKS(0x0C055E76u);
	r0 = R32(r14 + 0x18u); UPD(0x0C055E78u, 1);  /* 0C055E76 mov.l @(disp,Rm),Rn */
	r5 = 0x1Au;  /* 0C055E78 mov #imm,Rn */
	r10 = 0xC0AFD50u; UPD(0x0C055E7Cu, 2);  /* 0C055E7A mov.l @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C055E7C mov #imm,Rn */
	IF(0x0C055E7Eu); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C055E80u, 2);  /* 0C055E7E mov.b @(r0,Rm),Rn */
	r9 = r14;  /* 0C055E80 mov Rm,Rn */
	IF(0x0C055E82u); { u32 t_ = r10; PR = 0x0C055E86u; r4 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFD50, 0x0C0AFD50u, 0x0C055E86u); }  /* 0C055E82 jsr @Rn */
L_0C055E86: BLKS(0x0C055E86u);
	r11 = 0x1u;  /* 0C055E86 mov #imm,Rn */
	r10 = r12;  /* 0C055E88 mov Rm,Rn */
	r9 += 0x1u;  /* 0C055E8A add #imm,Rn */
	UPD(0x0C055E8Cu, 3);
L_0C055E8C: BLKS(0x0C055E8Cu);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C055E8Eu, 1);  /* 0C055E8C mov.b @Rm,Rn */
	r12 = 0u - r11;  /* 0C055E8E neg Rm,Rn */
	r12 += 0x19u;  /* 0C055E90 add #imm,Rn */
	r4 = r0 & 0xFF;  /* 0C055E92 extu.b Rm,Rn */
	r5 = r12;  /* 0C055E94 mov Rm,Rn */
	{ r6 = 0xFu; /* slot mov #imm,Rn */ UPD(0x0C055F20u, 7); goto L_0C055F20; }  /* 0C055E96 bra */
L_0C055F20: BLKS(0x0C055F20u);
	IF(0x0C055F20u); { u32 t_ = r10; PR = 0x0C055F24u; IF(0x0C055F22u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C055F24u); }  /* 0C055F20 jsr @Rn */
L_0C055F24: BLKS(0x0C055F24u);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C055F26u, 1);  /* 0C055F24 mov.b @Rm,Rn */
	r4 = 0xC3929E4u; UPD(0x0C055F28u, 1);  /* 0C055F26 mov.l @(disp,pc),Rn */
	r0 = r6 & 0xFF;  /* 0C055F28 extu.b Rm,Rn */
	IF(0x0C055F2Au); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C055F2Cu, 2);  /* 0C055F2A mov.b @(r0,Rm),Rn */
	r6 = 0x12u;  /* 0C055F2C mov #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C055F2E extu.b Rm,Rn */
	IF(0x0C055F30u); { u32 t_ = r10; PR = 0x0C055F34u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C055F34u); }  /* 0C055F30 jsr @Rn */
L_0C055F34: BLKS(0x0C055F34u);
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C055F36u, 1);  /* 0C055F34 mov.b @Rm,Rn */
	r5 = r12;  /* 0C055F36 mov Rm,Rn */
	r8 = 0xC285F58u; UPD(0x0C055F3Au, 2);  /* 0C055F38 mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C055F3A extu.b Rm,Rn */
	IF(0x0C055F3Cu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C055F3Eu, 2);  /* 0C055F3C mov.b @(r0,Rm),Rn */
	r6 = 0x15u;  /* 0C055F3E mov #imm,Rn */
	IF(0x0C055F40u); { u32 t_ = r10; PR = 0x0C055F44u; r4 = r7 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C055F44u); }  /* 0C055F40 jsr @Rn */
L_0C055F44: BLKS(0x0C055F44u);
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C055F46u, 1);  /* 0C055F44 mov.b @Rm,Rn */
	r5 = r12;  /* 0C055F46 mov Rm,Rn */
	r2 = 0xC283544u; UPD(0x0C055F4Au, 2);  /* 0C055F48 mov.l @(disp,pc),Rn */
	r0 = r1 & 0xFF;  /* 0C055F4A extu.b Rm,Rn */
	IF(0x0C055F4Cu); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C055F4Eu, 2);  /* 0C055F4C mov.b @(r0,Rm),Rn */
	r8 = r11;  /* 0C055F4E mov Rm,Rn */
	r4 = r6 & 0xFF;  /* 0C055F50 extu.b Rm,Rn */
	IF(0x0C055F52u); { u32 t_ = r10; PR = 0x0C055F56u; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C055F56u); }  /* 0C055F52 jsr @Rn */
L_0C055F56: BLKS(0x0C055F56u);
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r5 = v_; } UPD(0x0C055F58u, 1);  /* 0C055F56 mov.b @Rm+,Rn */
	r6 = 0x1Bu;  /* 0C055F58 mov #imm,Rn */
	r4 = 0xC283648u; UPD(0x0C055F5Cu, 2);  /* 0C055F5A mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C055F5C extu.b Rm,Rn */
	IF(0x0C055F5Eu); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C055F60u, 2);  /* 0C055F5E mov.b @(r0,Rm),Rn */
	r5 = r12;  /* 0C055F60 mov Rm,Rn */
	r4 = r3 & 0xFF;  /* 0C055F62 extu.b Rm,Rn */
	IF(0x0C055F64u); { u32 t_ = r10; PR = 0x0C055F68u; r8 += 0x1u; /* slot add #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C055F68u); }  /* 0C055F64 jsr @Rn */
L_0C055F68: BLKS(0x0C055F68u);
	r11 = (u32)(s32)(s8)r8;  /* 0C055F68 exts.b Rm,Rn */
	r7 = 0x8u;  /* 0C055F6A mov #imm,Rn */
	T = (s32)r11 > (s32)r7;  /* 0C055F6C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C055E8Cu, 6); goto L_0C055E8C; }  /* 0C055F6E bf */
L_0C055F70: BLKS(0x0C055F70u);
	r5 = 0x2u;  /* 0C055F70 mov #imm,Rn */
	r11 = 0xC050CD0u; UPD(0x0C055F74u, 2);  /* 0C055F72 mov.l @(disp,pc),Rn */
	r9 = 0x80808000u; UPD(0x0C055F76u, 1);  /* 0C055F74 mov.l @(disp,pc),Rn */
	r6 = 0x3u;  /* 0C055F76 mov #imm,Rn */
	r4 = 0xC1605D4u; UPD(0x0C055F7Au, 2);  /* 0C055F78 mov.l @(disp,pc),Rn */
	r12 = 0xC04F770u; UPD(0x0C055F7Cu, 1);  /* 0C055F7A mov.l @(disp,pc),Rn */
	IF(0x0C055F7Cu); { u32 t_ = r11; PR = 0x0C055F80u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055F80u); }  /* 0C055F7C jsr @Rn */
L_0C055F80: BLKS(0x0C055F80u);
	r4 = 0xC1605F0u; UPD(0x0C055F82u, 1);  /* 0C055F80 mov.l @(disp,pc),Rn */
	r7 = r9;  /* 0C055F82 mov Rm,Rn */
	r10 = 0xC050840u; UPD(0x0C055F86u, 2);  /* 0C055F84 mov.l @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C055F86 mov #imm,Rn */
	IF(0x0C055F88u); { u32 t_ = r11; PR = 0x0C055F8Cu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C055F8Cu); }  /* 0C055F88 jsr @Rn */
L_0C055F8C: BLKS(0x0C055F8Cu);
	r4 = 0x7u;  /* 0C055F8C mov #imm,Rn */
	r9 = 0xC2862A2u; UPD(0x0C055F90u, 2);  /* 0C055F8E mov.l @(disp,pc),Rn */
	IF(0x0C055F90u); { u32 t_ = r12; PR = 0x0C055F94u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04F770, 0x0C04F770u, 0x0C055F94u); }  /* 0C055F90 jsr @Rn */
L_0C055F94: BLKS(0x0C055F94u);
	IF(0x0C055F94u); { u32 t_ = r10; PR = 0x0C055F98u; IF(0x0C055F96u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C055F98u); }  /* 0C055F94 jsr @Rn */
L_0C055F98: BLKS(0x0C055F98u);
	r11 = (u32)(s32)(s8)R8(r9); UPD(0x0C055F9Au, 1);  /* 0C055F98 mov.b @Rm,Rn */
	IF(0x0C055F9Au); T = (s32)r11 >= 0;  /* 0C055F9A cmp/pz Rn */
	if (!T) { UPD(0x0C055FA2u, 4); goto L_0C055FA2; }  /* 0C055F9C bf */
L_0C055F9E: BLKS(0x0C055F9Eu);
	{ IF(0x0C055FA0u); ; /* slot nop */ UPD(0x0C055CC0u, 3); goto L_0C055CC0; }  /* 0C055F9E bra */
L_0C055FA2: BLKS(0x0C055FA2u);
	r13 = 0xC0AFCA0u; UPD(0x0C055FA4u, 1);  /* 0C055FA2 mov.l @(disp,pc),Rn */
	IF(0x0C055FA4u); { u32 t_ = r13; PR = 0x0C055FA8u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFCA0, 0x0C0AFCA0u, 0x0C055FA8u); }  /* 0C055FA4 jsr @Rn */
L_0C055FA8: BLKS(0x0C055FA8u);
	r14 += 0x20u;  /* 0C055FA8 add #imm,Rn */
	r15 = r14;  /* 0C055FAA mov Rm,Rn */
	IF(0x0C055FACu); PR = R32(r15); r15 += 4; UPD(0x0C055FAEu, 3);  /* 0C055FAC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C055FB0u, 1);  /* 0C055FAE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C055FB2u, 1);  /* 0C055FB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C055FB4u, 1);  /* 0C055FB2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C055FB6u, 1);  /* 0C055FB4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C055FB8u, 1);  /* 0C055FB6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C055FBAu, 1);  /* 0C055FB8 mov.l @Rm+,Rn */
	IF(0x0C055FBAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C055FBA rts */
L_0C055FC0: BLKS(0x0C055FC0u);
	r0 = 0xC04E648u; UPD(0x0C055FC2u, 1);  /* 0C055FC0 mov.l @(disp,pc),Rn */
	IF(0x0C055FC2u); { u32 t_ = r0; PR = 0x0C055FC6u; r4 = r9 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04E648, 0x0C04E648u, 0x0C055FC6u); }  /* 0C055FC2 jsr @Rn */
L_0C055FC6: BLKS(0x0C055FC6u);
	{ IF(0x0C055FC8u); ; /* slot nop */ UPD(0x0C055DC2u, 3); goto L_0C055DC2; }  /* 0C055FC6 bra */
L_0C055FD0: BLKS(0x0C055FD0u);
	r8 = 0xC04E7E8u; UPD(0x0C055FD2u, 1);  /* 0C055FD0 mov.l @(disp,pc),Rn */
	IF(0x0C055FD2u); { u32 t_ = r8; PR = 0x0C055FD6u; r5 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04E7E8, 0x0C04E7E8u, 0x0C055FD6u); }  /* 0C055FD2 jsr @Rn */
L_0C055FD6: BLKS(0x0C055FD6u);
	{ IF(0x0C055FD8u); ; /* slot nop */ UPD(0x0C055DB0u, 3); goto L_0C055DB0; }  /* 0C055FD6 bra */
L_0C055FE0: BLKS(0x0C055FE0u);
	r11 = 0xC04E470u; UPD(0x0C055FE2u, 1);  /* 0C055FE0 mov.l @(disp,pc),Rn */
	r9 = 0x7u;  /* 0C055FE2 mov #imm,Rn */
	UPD(0x0C055FE4u, 1);
L_0C055FE4: BLKS(0x0C055FE4u);
	r8 = r10 & 0xFF;  /* 0C055FE4 extu.b Rm,Rn */
	IF(0x0C055FE6u); { u32 t_ = r11; PR = 0x0C055FEAu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04E470, 0x0C04E470u, 0x0C055FEAu); }  /* 0C055FE6 jsr @Rn */
L_0C055FEA: BLKS(0x0C055FEAu);
	r2 = R32(r0); UPD(0x0C055FECu, 1);  /* 0C055FEA mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C055FEC tst Rm,Rn */
	if (T) { UPD(0x0C056000u, 4); goto L_0C056000; }  /* 0C055FEE bt */
L_0C055FF0: BLKS(0x0C055FF0u);
	r7 = r10;  /* 0C055FF0 mov Rm,Rn */
	r7 += 0x1u;  /* 0C055FF2 add #imm,Rn */
	r10 = (u32)(s32)(s8)r7;  /* 0C055FF4 exts.b Rm,Rn */
	T = (s32)r10 > (s32)r9;  /* 0C055FF6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C055FE4u, 7); goto L_0C055FE4; } UPD(0x0C055FFCu, 1); goto L_0C055FFC; }  /* 0C055FF8 bf/s */
L_0C055FFC: BLKS(0x0C055FFCu);
	{ T = (r1 & r1) == 0; /* slot tst Rm,Rn */ UPD(0x0C055DA0u, 3); goto L_0C055DA0; }  /* 0C055FFC bra */
L_0C056000: BLKS(0x0C056000u);
	r0 = R32(r14 + 0x18u); UPD(0x0C056002u, 1);  /* 0C056000 mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C056002 mov Rm,Rn */
	IF(0x0C056004u); r6 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C056006u, 2);  /* 0C056004 mov.b @(r0,Rm),Rn */
	r7 = 0x0u;  /* 0C056006 mov #imm,Rn */
	r3 = 0xC04E49Cu; UPD(0x0C05600Au, 2);  /* 0C056008 mov.l @(disp,pc),Rn */
	r5 = r6 & 0xFF;  /* 0C05600A extu.b Rm,Rn */
	IF(0x0C05600Cu); { u32 t_ = r3; PR = 0x0C056010u; r6 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04E49C, 0x0C04E49Cu, 0x0C056010u); }  /* 0C05600C jsr @Rn */
L_0C056010: BLKS(0x0C056010u);
	{ r1 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C055D9Eu, 3); goto L_0C055D9E; }  /* 0C056010 bra */
L_0C056020: BLKS(0x0C056020u);
	r9 = 0xC0AFCA0u; UPD(0x0C056022u, 1);  /* 0C056020 mov.l @(disp,pc),Rn */
	IF(0x0C056022u); { u32 t_ = r9; PR = 0x0C056026u; r4 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFCA0, 0x0C0AFCA0u, 0x0C056026u); }  /* 0C056022 jsr @Rn */
L_0C056026: BLKS(0x0C056026u);
	r4 = 0xC21F7F9u; UPD(0x0C056028u, 1);  /* 0C056026 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C05602Au, 1);  /* 0C056028 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C05602A tst Rm,Rn */
	if (!T) { UPD(0x0C056010u, 4); goto L_0C056010; }  /* 0C05602C bf */
L_0C05602E: BLKS(0x0C05602Eu);
	r5 = 0x258u; UPD(0x0C056030u, 1);  /* 0C05602E mov.w @(disp,pc),Rn */
	{ W32(r14 + 0x1Cu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C055D9Cu, 3); goto L_0C055D9C; }  /* 0C056030 bra */
L_0C056040: BLKS(0x0C056040u);
	r0 = 0x100u; UPD(0x0C056042u, 1);  /* 0C056040 mov.w @(disp,pc),Rn */
	IF(0x0C056042u); r0 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C056044u, 1);  /* 0C056042 mov.b @(r0,Rm),Rn */
	r0 &= 0x8u;  /* 0C056044 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C056046 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C056062u, 5); goto L_0C056062; } UPD(0x0C05604Cu, 1); goto L_0C05604C; }  /* 0C056048 bt/s */
L_0C05604C: BLKS(0x0C05604Cu);
	r2 = 0xC3929E4u; UPD(0x0C05604Eu, 1);  /* 0C05604C mov.l @(disp,pc),Rn */
	IF(0x0C05604Eu); r9 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C056050u, 1);  /* 0C05604E mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C056050 mov Rm,Rn */
	r3 = r9 & 0xFF;  /* 0C056052 extu.b Rm,Rn */
	IF(0x0C056054u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C056056u, 3);  /* 0C056054 mov.b @(r0,Rm),Rn */
	r0 = r1;  /* 0C056056 mov Rm,Rn */
	T = r0 == 0x7Fu;  /* 0C056058 cmp/eq #imm,r0 */
	{ u32 c_ = T; r1 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0560A0u, 5); goto L_0C0560A0; } UPD(0x0C05605Eu, 1); goto L_0C05605E; }  /* 0C05605A bt/s */
L_0C05605E: BLKS(0x0C05605Eu);
	r0 = r2;  /* 0C05605E mov Rm,Rn */
	IF(0x0C056060u); W8(r0 + r3, r1); UPD(0x0C056062u, 2);  /* 0C056060 mov.b Rm,@(r0,Rn) */
L_0C056062: BLKS(0x0C056062u);
	r2 = 0xC27DDF4u; UPD(0x0C056064u, 1);  /* 0C056062 mov.l @(disp,pc),Rn */
	r0 = 0x100u; UPD(0x0C056066u, 1);  /* 0C056064 mov.w @(disp,pc),Rn */
	IF(0x0C056066u); r0 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C056068u, 1);  /* 0C056066 mov.b @(r0,Rm),Rn */
	r0 &= 0x4u;  /* 0C056068 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05606A tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C056082u, 5); goto L_0C056082; } UPD(0x0C056070u, 1); goto L_0C056070; }  /* 0C05606C bt/s */
L_0C056070: BLKS(0x0C056070u);
	IF(0x0C056070u); r7 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C056072u, 1);  /* 0C056070 mov.b @(r0,Rm),Rn */
	r2 = 0xC3929E4u; UPD(0x0C056074u, 1);  /* 0C056072 mov.l @(disp,pc),Rn */
	r0 = r7 & 0xFF;  /* 0C056074 extu.b Rm,Rn */
	IF(0x0C056076u); r1 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C056078u, 2);  /* 0C056076 mov.b @(r0,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C056078 tst Rm,Rn */
	{ u32 c_ = !T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C056080u, 4); goto L_0C056080; } goto L_0C05607E; }  /* 0C05607A bf/s */
L_0C05607E: BLKS(0x0C05607Eu);
	r1 = 0x7Fu;  /* 0C05607E mov #imm,Rn */
	UPD(0x0C056080u, 2);
L_0C056080: BLKS(0x0C056080u);
	IF(0x0C056080u); W8(r0 + r2, r1); UPD(0x0C056082u, 1);  /* 0C056080 mov.b Rm,@(r0,Rn) */
L_0C056082: BLKS(0x0C056082u);
	{ IF(0x0C056084u); ; /* slot nop */ UPD(0x0C055D6Eu, 3); goto L_0C055D6E; }  /* 0C056082 bra */
L_0C056090: BLKS(0x0C056090u);
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C056080u, 3); goto L_0C056080; }  /* 0C056090 bra */
L_0C0560A0: BLKS(0x0C0560A0u);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C05605Eu, 3); goto L_0C05605E; }  /* 0C0560A0 bra */
L_0C0560B0: BLKS(0x0C0560B0u);
	if (!T) { UPD(0x0C056082u, 3); goto L_0C056082; }  /* 0C0560B0 bf */
L_0C0560B2: BLKS(0x0C0560B2u);
	r0 = 0x100u; UPD(0x0C0560B4u, 1);  /* 0C0560B2 mov.w @(disp,pc),Rn */
	IF(0x0C0560B4u); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0560B6u, 1);  /* 0C0560B4 mov.b @(r0,Rm),Rn */
	r0 = r3;  /* 0C0560B6 mov Rm,Rn */
	r0 &= 0x8u;  /* 0C0560B8 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0560BA tst Rm,Rn */
	{ u32 c_ = T; r0 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0560D0u, 6); goto L_0C0560D0; } goto L_0C0560C0; }  /* 0C0560BC bt/s */
L_0C0560C0: BLKS(0x0C0560C0u);
	r0 = R32(r14 + 0x18u); UPD(0x0C0560C2u, 2);  /* 0C0560C0 mov.l @(disp,Rm),Rn */
	IF(0x0C0560C2u); r6 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0560C4u, 1);  /* 0C0560C2 mov.b @(r0,Rm),Rn */
	r4 = 0xC283648u; UPD(0x0C0560C6u, 1);  /* 0C0560C4 mov.l @(disp,pc),Rn */
	r0 = r6 & 0xFF;  /* 0C0560C6 extu.b Rm,Rn */
	IF(0x0C0560C8u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0560CAu, 2);  /* 0C0560C8 mov.b @(r0,Rm),Rn */
	r5 += 0x1u;  /* 0C0560CA add #imm,Rn */
	IF(0x0C0560CCu); W8(r0 + r4, r5); UPD(0x0C0560CEu, 2);  /* 0C0560CC mov.b Rm,@(r0,Rn) */
	r0 = r3;  /* 0C0560CE mov Rm,Rn */
	UPD(0x0C0560D0u, 1);
L_0C0560D0: BLKS(0x0C0560D0u);
	r0 &= 0x4u;  /* 0C0560D0 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0560D2 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C056082u, 5); goto L_0C056082; } UPD(0x0C0560D8u, 1); goto L_0C0560D8; }  /* 0C0560D4 bt/s */
L_0C0560D8: BLKS(0x0C0560D8u);
	IF(0x0C0560D8u); r3 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0560DAu, 1);  /* 0C0560D8 mov.b @(r0,Rm),Rn */
	r2 = 0xC283648u; UPD(0x0C0560DCu, 1);  /* 0C0560DA mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C0560DC extu.b Rm,Rn */
	{ IF(0x0C0560E0u); r1 = (u32)(s32)(s8)R8(r0 + r2); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C056090u, 4); goto L_0C056090; }  /* 0C0560DE bra */
L_0C0560F0: BLKS(0x0C0560F0u);
	r0 = 0x100u; UPD(0x0C0560F2u, 1);  /* 0C0560F0 mov.w @(disp,pc),Rn */
	IF(0x0C0560F2u); r0 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0560F4u, 1);  /* 0C0560F2 mov.b @(r0,Rm),Rn */
	r0 &= 0x8u;  /* 0C0560F4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0560F6 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C056112u, 5); goto L_0C056112; } UPD(0x0C0560FCu, 1); goto L_0C0560FC; }  /* 0C0560F8 bt/s */
L_0C0560FC: BLKS(0x0C0560FCu);
	r2 = 0xC285F58u; UPD(0x0C0560FEu, 1);  /* 0C0560FC mov.l @(disp,pc),Rn */
	IF(0x0C0560FEu); r10 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C056100u, 1);  /* 0C0560FE mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C056100 mov Rm,Rn */
	r3 = r10 & 0xFF;  /* 0C056102 extu.b Rm,Rn */
	IF(0x0C056104u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C056106u, 3);  /* 0C056104 mov.b @(r0,Rm),Rn */
	r0 = r1;  /* 0C056106 mov Rm,Rn */
	T = r0 == 0x3Fu;  /* 0C056108 cmp/eq #imm,r0 */
	{ u32 c_ = T; r1 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C056140u, 5); goto L_0C056140; } UPD(0x0C05610Eu, 1); goto L_0C05610E; }  /* 0C05610A bt/s */
L_0C05610E: BLKS(0x0C05610Eu);
	r0 = r2;  /* 0C05610E mov Rm,Rn */
	IF(0x0C056110u); W8(r0 + r3, r1); UPD(0x0C056112u, 2);  /* 0C056110 mov.b Rm,@(r0,Rn) */
L_0C056112: BLKS(0x0C056112u);
	r11 = 0xC27DDF4u; UPD(0x0C056114u, 1);  /* 0C056112 mov.l @(disp,pc),Rn */
	r0 = 0x100u; UPD(0x0C056116u, 1);  /* 0C056114 mov.w @(disp,pc),Rn */
	IF(0x0C056116u); r0 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C056118u, 1);  /* 0C056116 mov.b @(r0,Rm),Rn */
	r0 &= 0x4u;  /* 0C056118 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C05611A tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C056082u, 5); goto L_0C056082; } UPD(0x0C056120u, 1); goto L_0C056120; }  /* 0C05611C bt/s */
L_0C056120: BLKS(0x0C056120u);
	IF(0x0C056120u); r12 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C056122u, 1);  /* 0C056120 mov.b @(r0,Rm),Rn */
	r2 = 0xC285F58u; UPD(0x0C056124u, 1);  /* 0C056122 mov.l @(disp,pc),Rn */
	r0 = r12 & 0xFF;  /* 0C056124 extu.b Rm,Rn */
	IF(0x0C056126u); r1 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C056128u, 2);  /* 0C056126 mov.b @(r0,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C056128 tst Rm,Rn */
	if (!T) { UPD(0x0C056090u, 4); goto L_0C056090; }  /* 0C05612A bf */
L_0C05612C: BLKS(0x0C05612Cu);
	r1 = 0x3Fu;  /* 0C05612C mov #imm,Rn */
	{ IF(0x0C056130u); W8(r0 + r2, r1); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C056082u, 4); goto L_0C056082; }  /* 0C05612E bra */
L_0C056140: BLKS(0x0C056140u);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C05610Eu, 3); goto L_0C05610E; }  /* 0C056140 bra */
L_0C056150: BLKS(0x0C056150u);
	{ IF(0x0C056152u); r1 = (u32)(s32)(s8)R8(r0 + r12); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C055D4Au, 3); goto L_0C055D4A; }  /* 0C056150 bra */
L_0C056160: BLKS(0x0C056160u);
	r2 = 0xC16125Cu; UPD(0x0C056162u, 1);  /* 0C056160 mov.l @(disp,pc),Rn */
	{ IF(0x0C056164u); r1 = (u32)(s32)(s8)R8(r0 + r2); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C055D26u, 3); goto L_0C055D26; }  /* 0C056162 bra */
L_0C056170: BLKS(0x0C056170u);
	r3 = 0xC161268u; UPD(0x0C056172u, 1);  /* 0C056170 mov.l @(disp,pc),Rn */
	r2 = 0x8u;  /* 0C056172 mov #imm,Rn */
	UPD(0x0C056174u, 1);
L_0C056174: BLKS(0x0C056174u);
	r0 = r3;  /* 0C056174 mov Rm,Rn */
	IF(0x0C056176u); r7 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C056178u, 2);  /* 0C056176 mov.b @(r0,Rm),Rn */
	r6 = r10;  /* 0C056178 mov Rm,Rn */
	r9 = 0xCu;  /* 0C05617A mov #imm,Rn */
	r0 = r10;  /* 0C05617C mov Rm,Rn */
	r9 += r14;  /* 0C05617E add Rm,Rn */
	r6 += 0x1u;  /* 0C056180 add #imm,Rn */
	r10 = (u32)(s32)(s8)r6;  /* 0C056182 exts.b Rm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C056184 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C056188u); W8(r0 + r9, r7); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C056174u, 10); goto L_0C056174; } UPD(0x0C05618Au, 1); goto L_0C05618A; }  /* 0C056186 bf/s */
L_0C05618A: BLKS(0x0C05618Au);
	{ IF(0x0C05618Cu); ; /* slot nop */ UPD(0x0C055CBEu, 3); goto L_0C055CBE; }  /* 0C05618A bra */
}

/* FUN_0c0561f0 */
void f_0C0561F0(sh3_t *c)
{
	LOCALS;
L_0C0561F0: BLKS(0x0C0561F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0561F2u, 1);  /* 0C0561F0 mov.l Rm,@-Rn */
	r1 = r4;  /* 0C0561F2 mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0561F6u, 2);  /* 0C0561F4 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r1;  /* 0C0561F6 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0561FAu, 2);  /* 0C0561F8 mov.l Rm,@-Rn */
	T = r0 == 0x6u;  /* 0C0561FA cmp/eq #imm,r0 */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0561FEu, 2);  /* 0C0561FC mov.l Rm,@-Rn */
	r4 = r6;  /* 0C0561FE mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C056202u, 2);  /* 0C056200 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C056202 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C056206u, 2);  /* 0C056204 mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r5;  /* 0C056206 exts.b Rm,Rn */
	IF(0x0C056208u); r15 -= 4; W32(r15, PR); UPD(0x0C05620Au, 2);  /* 0C056208 sts.l pr,@-Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C056220u, 3); goto L_0C056220; } UPD(0x0C05620Eu, 1); goto L_0C05620E; }  /* 0C05620A bt/s */
L_0C05620E: BLKS(0x0C05620Eu);
	r15 = r14;  /* 0C05620E mov Rm,Rn */
	IF(0x0C056210u); PR = R32(r15); r15 += 4; UPD(0x0C056212u, 2);  /* 0C056210 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C056214u, 1);  /* 0C056212 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C056216u, 1);  /* 0C056214 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C056218u, 1);  /* 0C056216 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05621Au, 1);  /* 0C056218 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05621Cu, 1);  /* 0C05621A mov.l @Rm+,Rn */
	IF(0x0C05621Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05621C rts */
L_0C056220: BLKS(0x0C056220u);
	r0 = 0x4u;  /* 0C056220 mov #imm,Rn */
	T = r12 > r0;  /* 0C056222 cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05620Eu, 5); goto L_0C05620E; } goto L_0C056228; }  /* 0C056224 bt/s */
L_0C056228: BLKS(0x0C056228u);
	r1 = r12;  /* 0C056228 mov Rm,Rn */
	r0 = 0xC056234u;  /* 0C05622A mova @(disp,pc),r0 */
	r1 += r1;  /* 0C05622C add Rm,Rn */
	IF(0x0C05622Eu); r3 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C056230u, 5);  /* 0C05622E mov.w @(r0,Rm),Rn */
	IF(0x0C056230u); { u32 tv_ = (r3 + 0x0C056234u); u32 t_ = PHYS(tv_); IF(0x0C056232u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C056240u: goto L_0C056240; case 0x0C0562B0u: goto L_0C0562B0; case 0x0C056300u: goto L_0C056300; case 0x0C056360u: goto L_0C056360; default: JUMPD(tv_); } }  /* 0C056230 braf Rn */
L_0C056240: BLKS(0x0C056240u);
	r9 = 0xC050CD0u; UPD(0x0C056242u, 1);  /* 0C056240 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C056242 mov #imm,Rn */
	r11 = 0xC161224u; UPD(0x0C056246u, 2);  /* 0C056244 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C056246 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C05624Au, 2);  /* 0C056248 mov.l @(disp,pc),Rn */
	r10 = 0xC161228u; UPD(0x0C05624Cu, 1);  /* 0C05624A mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C05624C mov Rm,Rn */
	IF(0x0C05624Eu); { u32 t_ = r9; PR = 0x0C056252u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C056252u); }  /* 0C05624E jsr @Rn */
L_0C056252: BLKS(0x0C056252u);
	r4 = R32(r10); UPD(0x0C056254u, 1);  /* 0C056252 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C056254 mov #imm,Rn */
	r6 = 0x4u;  /* 0C056256 mov #imm,Rn */
	IF(0x0C056258u); { u32 t_ = r9; PR = 0x0C05625Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05625Cu); }  /* 0C056258 jsr @Rn */
L_0C05625C: BLKS(0x0C05625Cu);
	r4 = R32(r10); UPD(0x0C05625Eu, 1);  /* 0C05625C mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C05625E mov #imm,Rn */
	r6 = 0x4u;  /* 0C056260 mov #imm,Rn */
	IF(0x0C056262u); { u32 t_ = r9; PR = 0x0C056266u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C056266u); }  /* 0C056262 jsr @Rn */
L_0C056266: BLKS(0x0C056266u);
	r4 = R32(r10); UPD(0x0C056268u, 1);  /* 0C056266 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C056268 mov #imm,Rn */
	r6 = 0x4u;  /* 0C05626A mov #imm,Rn */
	IF(0x0C05626Cu); { u32 t_ = r9; PR = 0x0C056270u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C056270u); }  /* 0C05626C jsr @Rn */
L_0C056270: BLKS(0x0C056270u);
	r4 = R32(r10); UPD(0x0C056272u, 1);  /* 0C056270 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C056272 mov #imm,Rn */
	r6 = 0x4u;  /* 0C056274 mov #imm,Rn */
	IF(0x0C056276u); { u32 t_ = r9; PR = 0x0C05627Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05627Au); }  /* 0C056276 jsr @Rn */
L_0C05627A: BLKS(0x0C05627Au);
	r4 = R32(r11); UPD(0x0C05627Cu, 1);  /* 0C05627A mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C05627C mov #imm,Rn */
	r6 = 0x4u;  /* 0C05627E mov #imm,Rn */
	IF(0x0C056280u); { u32 t_ = r9; PR = 0x0C056284u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C056284u); }  /* 0C056280 jsr @Rn */
L_0C056284: BLKS(0x0C056284u);
	r2 = 0xC160628u; UPD(0x0C056286u, 1);  /* 0C056284 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C056286 mov #imm,Rn */
	r4 = R32(r2); UPD(0x0C05628Au, 2);  /* 0C056288 mov.l @Rm,Rn */
	r6 = 0x6u;  /* 0C05628A mov #imm,Rn */
	IF(0x0C05628Cu); { u32 t_ = r9; PR = 0x0C056290u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C056290u); }  /* 0C05628C jsr @Rn */
L_0C056290: BLKS(0x0C056290u);
	r4 = 0xC1612E4u; UPD(0x0C056292u, 1);  /* 0C056290 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C056292 mov #imm,Rn */
	UPD(0x0C056294u, 1);
L_0C056294: BLKS(0x0C056294u);
	r6 = 0x6u;  /* 0C056294 mov #imm,Rn */
	IF(0x0C056296u); { u32 t_ = r9; PR = 0x0C05629Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05629Au); }  /* 0C056296 jsr @Rn */
L_0C05629A: BLKS(0x0C05629Au);
	r5 = 0xC27DE74u; UPD(0x0C05629Cu, 1);  /* 0C05629A mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C05629Eu, 1);  /* 0C05629C mov.b @Rm,Rn */
	IF(0x0C05629Eu); T = (s32)r4 >= 0;  /* 0C05629E cmp/pz Rn */
	if (T) { UPD(0x0C0562A8u, 4); goto L_0C0562A8; }  /* 0C0562A0 bt */
L_0C0562A2: BLKS(0x0C0562A2u);
	r6 = r12;  /* 0C0562A2 mov Rm,Rn */
	UPD(0x0C0562A4u, 1);
L_0C0562A4: BLKS(0x0C0562A4u);
	r6 += 0x1u;  /* 0C0562A4 add #imm,Rn */
	r12 = (u32)(s32)(s8)r6;  /* 0C0562A6 exts.b Rm,Rn */
	UPD(0x0C0562A8u, 2);
L_0C0562A8: BLKS(0x0C0562A8u);
	{ r0 = r12; /* slot mov Rm,Rn */ UPD(0x0C05620Eu, 3); goto L_0C05620E; }  /* 0C0562A8 bra */
L_0C0562B0: BLKS(0x0C0562B0u);
	r9 = 0xC050CD0u; UPD(0x0C0562B2u, 1);  /* 0C0562B0 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C0562B2 mov #imm,Rn */
	r11 = 0xC161224u; UPD(0x0C0562B6u, 2);  /* 0C0562B4 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C0562B6 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C0562BAu, 2);  /* 0C0562B8 mov.l @(disp,pc),Rn */
	r10 = 0xC161228u; UPD(0x0C0562BCu, 1);  /* 0C0562BA mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C0562BC mov Rm,Rn */
	IF(0x0C0562BEu); { u32 t_ = r9; PR = 0x0C0562C2u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0562C2u); }  /* 0C0562BE jsr @Rn */
L_0C0562C2: BLKS(0x0C0562C2u);
	r4 = R32(r10); UPD(0x0C0562C4u, 1);  /* 0C0562C2 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C0562C4 mov #imm,Rn */
	r6 = 0x4u;  /* 0C0562C6 mov #imm,Rn */
	IF(0x0C0562C8u); { u32 t_ = r9; PR = 0x0C0562CCu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0562CCu); }  /* 0C0562C8 jsr @Rn */
L_0C0562CC: BLKS(0x0C0562CCu);
	r4 = R32(r10); UPD(0x0C0562CEu, 1);  /* 0C0562CC mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C0562CE mov #imm,Rn */
	r6 = 0x4u;  /* 0C0562D0 mov #imm,Rn */
	IF(0x0C0562D2u); { u32 t_ = r9; PR = 0x0C0562D6u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0562D6u); }  /* 0C0562D2 jsr @Rn */
L_0C0562D6: BLKS(0x0C0562D6u);
	r4 = R32(r10); UPD(0x0C0562D8u, 1);  /* 0C0562D6 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C0562D8 mov #imm,Rn */
	r6 = 0x4u;  /* 0C0562DA mov #imm,Rn */
	IF(0x0C0562DCu); { u32 t_ = r9; PR = 0x0C0562E0u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0562E0u); }  /* 0C0562DC jsr @Rn */
L_0C0562E0: BLKS(0x0C0562E0u);
	r4 = R32(r10); UPD(0x0C0562E2u, 1);  /* 0C0562E0 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C0562E2 mov #imm,Rn */
	r6 = 0x4u;  /* 0C0562E4 mov #imm,Rn */
	IF(0x0C0562E6u); { u32 t_ = r9; PR = 0x0C0562EAu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0562EAu); }  /* 0C0562E6 jsr @Rn */
L_0C0562EA: BLKS(0x0C0562EAu);
	r4 = R32(r11); UPD(0x0C0562ECu, 1);  /* 0C0562EA mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C0562EC mov #imm,Rn */
	r6 = 0x4u;  /* 0C0562EE mov #imm,Rn */
	IF(0x0C0562F0u); { u32 t_ = r9; PR = 0x0C0562F4u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0562F4u); }  /* 0C0562F0 jsr @Rn */
L_0C0562F4: BLKS(0x0C0562F4u);
	r4 = 0xC16063Cu; UPD(0x0C0562F6u, 1);  /* 0C0562F4 mov.l @(disp,pc),Rn */
	{ r5 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C056294u, 3); goto L_0C056294; }  /* 0C0562F6 bra */
L_0C056300: BLKS(0x0C056300u);
	r9 = 0xC050CD0u; UPD(0x0C056302u, 1);  /* 0C056300 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C056302 mov #imm,Rn */
	r11 = 0xC161224u; UPD(0x0C056306u, 2);  /* 0C056304 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C056306 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C05630Au, 2);  /* 0C056308 mov.l @(disp,pc),Rn */
	r10 = 0xC161228u; UPD(0x0C05630Cu, 1);  /* 0C05630A mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C05630C mov Rm,Rn */
	IF(0x0C05630Eu); { u32 t_ = r9; PR = 0x0C056312u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C056312u); }  /* 0C05630E jsr @Rn */
L_0C056312: BLKS(0x0C056312u);
	r4 = R32(r10); UPD(0x0C056314u, 1);  /* 0C056312 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C056314 mov #imm,Rn */
	r6 = 0x4u;  /* 0C056316 mov #imm,Rn */
	IF(0x0C056318u); { u32 t_ = r9; PR = 0x0C05631Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05631Cu); }  /* 0C056318 jsr @Rn */
L_0C05631C: BLKS(0x0C05631Cu);
	r4 = R32(r10); UPD(0x0C05631Eu, 1);  /* 0C05631C mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C05631E mov #imm,Rn */
	r6 = 0x4u;  /* 0C056320 mov #imm,Rn */
	IF(0x0C056322u); { u32 t_ = r9; PR = 0x0C056326u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C056326u); }  /* 0C056322 jsr @Rn */
L_0C056326: BLKS(0x0C056326u);
	r4 = R32(r10); UPD(0x0C056328u, 1);  /* 0C056326 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C056328 mov #imm,Rn */
	r6 = 0x4u;  /* 0C05632A mov #imm,Rn */
	IF(0x0C05632Cu); { u32 t_ = r9; PR = 0x0C056330u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C056330u); }  /* 0C05632C jsr @Rn */
L_0C056330: BLKS(0x0C056330u);
	r4 = R32(r10); UPD(0x0C056332u, 1);  /* 0C056330 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C056332 mov #imm,Rn */
	r6 = 0x4u;  /* 0C056334 mov #imm,Rn */
	IF(0x0C056336u); { u32 t_ = r9; PR = 0x0C05633Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05633Au); }  /* 0C056336 jsr @Rn */
L_0C05633A: BLKS(0x0C05633Au);
	r4 = R32(r11); UPD(0x0C05633Cu, 1);  /* 0C05633A mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C05633C mov #imm,Rn */
	r6 = 0x4u;  /* 0C05633E mov #imm,Rn */
	IF(0x0C056340u); { u32 t_ = r9; PR = 0x0C056344u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C056344u); }  /* 0C056340 jsr @Rn */
L_0C056344: BLKS(0x0C056344u);
	r4 = 0xC1612F4u; UPD(0x0C056346u, 1);  /* 0C056344 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C056346 mov #imm,Rn */
	r6 = 0x6u;  /* 0C056348 mov #imm,Rn */
	IF(0x0C05634Au); { u32 t_ = r9; PR = 0x0C05634Eu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05634Eu); }  /* 0C05634A jsr @Rn */
L_0C05634E: BLKS(0x0C05634Eu);
	{ r6 = r12; /* slot mov Rm,Rn */ UPD(0x0C0562A4u, 3); goto L_0C0562A4; }  /* 0C05634E bra */
L_0C056360: BLKS(0x0C056360u);
	r8 = 0xC04C0D8u; UPD(0x0C056362u, 1);  /* 0C056360 mov.l @(disp,pc),Rn */
	IF(0x0C056362u); { u32 t_ = r8; PR = 0x0C056366u; r12 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04C0D8, 0x0C04C0D8u, 0x0C056366u); }  /* 0C056362 jsr @Rn */
L_0C056366: BLKS(0x0C056366u);
	{ IF(0x0C056368u); ; /* slot nop */ UPD(0x0C0562A8u, 3); goto L_0C0562A8; }  /* 0C056366 bra */
}

/* FUN_0c05633e */
void f_0C05633E(sh3_t *c)
{
	LOCALS;
	goto L_0C05633E;
L_0C05620E: BLKS(0x0C05620Eu);
	r15 = r14;  /* 0C05620E mov Rm,Rn */
	IF(0x0C056210u); PR = R32(r15); r15 += 4; UPD(0x0C056212u, 2);  /* 0C056210 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C056214u, 1);  /* 0C056212 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C056216u, 1);  /* 0C056214 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C056218u, 1);  /* 0C056216 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05621Au, 1);  /* 0C056218 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05621Cu, 1);  /* 0C05621A mov.l @Rm+,Rn */
	IF(0x0C05621Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05621C rts */
L_0C0562A4: BLKS(0x0C0562A4u);
	r6 += 0x1u;  /* 0C0562A4 add #imm,Rn */
	r12 = (u32)(s32)(s8)r6;  /* 0C0562A6 exts.b Rm,Rn */
	{ r0 = r12; /* slot mov Rm,Rn */ UPD(0x0C05620Eu, 5); goto L_0C05620E; }  /* 0C0562A8 bra */
L_0C05633E: BLKS(0x0C05633Eu);
	r6 = 0x4u;  /* 0C05633E mov #imm,Rn */
	IF(0x0C056340u); { u32 t_ = r9; PR = 0x0C056344u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C056344u); }  /* 0C056340 jsr @Rn */
L_0C056344: BLKS(0x0C056344u);
	r4 = 0xC1612F4u; UPD(0x0C056346u, 1);  /* 0C056344 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C056346 mov #imm,Rn */
	r6 = 0x6u;  /* 0C056348 mov #imm,Rn */
	IF(0x0C05634Au); { u32 t_ = r9; PR = 0x0C05634Eu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05634Eu); }  /* 0C05634A jsr @Rn */
L_0C05634E: BLKS(0x0C05634Eu);
	{ r6 = r12; /* slot mov Rm,Rn */ UPD(0x0C0562A4u, 3); goto L_0C0562A4; }  /* 0C05634E bra */
}

void f_0C0563A0(sh3_t *c)
{
	LOCALS;
L_0C0563A0: BLKS(0x0C0563A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0563A2u, 1);  /* 0C0563A0 mov.l Rm,@-Rn */
	r6 = 0x9u;  /* 0C0563A2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0563A6u, 2);  /* 0C0563A4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0563A8u, 1);  /* 0C0563A6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0563AAu, 1);  /* 0C0563A8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0563ACu, 1);  /* 0C0563AA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0563AEu, 1);  /* 0C0563AC mov.l Rm,@-Rn */
	r12 = 0x0u;  /* 0C0563AE mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0563B2u, 2);  /* 0C0563B0 mov.l Rm,@-Rn */
	IF(0x0C0563B2u); r15 -= 4; W32(r15, PR); UPD(0x0C0563B4u, 1);  /* 0C0563B2 sts.l pr,@-Rn */
	r8 = 0xC0AFEB0u; UPD(0x0C0563B6u, 1);  /* 0C0563B4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE8u;  /* 0C0563B6 add #imm,Rn */
	r14 = r15;  /* 0C0563B8 mov Rm,Rn */
	r5 = 0xC0B1EEDu; UPD(0x0C0563BCu, 3);  /* 0C0563BA mov.l @(disp,pc),Rn */
	IF(0x0C0563BCu); { u32 t_ = r8; PR = 0x0C0563C0u; r4 = r14; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFEB0, 0x0C0AFEB0u, 0x0C0563C0u); }  /* 0C0563BC jsr @Rn */
L_0C0563C0: BLKS(0x0C0563C0u);
	r8 = 0xC04BF60u; UPD(0x0C0563C2u, 1);  /* 0C0563C0 mov.l @(disp,pc),Rn */
	r13 = r14;  /* 0C0563C2 mov Rm,Rn */
	r13 += 0xCu;  /* 0C0563C4 add #imm,Rn */
	IF(0x0C0563C6u); { u32 t_ = r8; PR = 0x0C0563CAu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C04BF60, 0x0C04BF60u, 0x0C0563CAu); }  /* 0C0563C6 jsr @Rn */
L_0C0563CA: BLKS(0x0C0563CAu);
	IF(0x0C0563CAu); ;  /* 0C0563CA nop */
	UPD(0x0C0563CCu, 1);
L_0C0563CC: BLKS(0x0C0563CCu);
	r9 = 0xC04F330u; UPD(0x0C0563CEu, 1);  /* 0C0563CC mov.l @(disp,pc),Rn */
	r10 = 0xC04F930u; UPD(0x0C0563D0u, 1);  /* 0C0563CE mov.l @(disp,pc),Rn */
	IF(0x0C0563D0u); { u32 t_ = r9; PR = 0x0C0563D4u; IF(0x0C0563D2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C0563D4u); }  /* 0C0563D0 jsr @Rn */
L_0C0563D4: BLKS(0x0C0563D4u);
	r8 = 0xC050650u; UPD(0x0C0563D6u, 1);  /* 0C0563D4 mov.l @(disp,pc),Rn */
	IF(0x0C0563D6u); { u32 t_ = r10; PR = 0x0C0563DAu; IF(0x0C0563D8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C0563DAu); }  /* 0C0563D6 jsr @Rn */
L_0C0563DA: BLKS(0x0C0563DAu);
	r11 = 0xC0505F0u; UPD(0x0C0563DCu, 1);  /* 0C0563DA mov.l @(disp,pc),Rn */
	r10 = 0xC050CD0u; UPD(0x0C0563DEu, 1);  /* 0C0563DC mov.l @(disp,pc),Rn */
	IF(0x0C0563DEu); { u32 t_ = r8; PR = 0x0C0563E2u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050650, 0x0C050650u, 0x0C0563E2u); }  /* 0C0563DE jsr @Rn */
L_0C0563E2: BLKS(0x0C0563E2u);
	IF(0x0C0563E2u); { u32 t_ = r11; PR = 0x0C0563E6u; IF(0x0C0563E4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C0563E6u); }  /* 0C0563E2 jsr @Rn */
L_0C0563E6: BLKS(0x0C0563E6u);
	r9 = 0x80808000u; UPD(0x0C0563E8u, 1);  /* 0C0563E6 mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C0563E8 mov #imm,Rn */
	r4 = 0xC160564u; UPD(0x0C0563ECu, 2);  /* 0C0563EA mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C0563EC mov #imm,Rn */
	IF(0x0C0563EEu); { u32 t_ = r10; PR = 0x0C0563F2u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0563F2u); }  /* 0C0563EE jsr @Rn */
L_0C0563F2: BLKS(0x0C0563F2u);
	r4 = 0xC16131Cu; UPD(0x0C0563F4u, 1);  /* 0C0563F2 mov.l @(disp,pc),Rn */
	r5 = 0x18u;  /* 0C0563F4 mov #imm,Rn */
	r6 = 0x6u;  /* 0C0563F6 mov #imm,Rn */
	IF(0x0C0563F8u); { u32 t_ = r10; PR = 0x0C0563FCu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0563FCu); }  /* 0C0563F8 jsr @Rn */
L_0C0563FC: BLKS(0x0C0563FCu);
	r4 = 0xC161324u; UPD(0x0C0563FEu, 1);  /* 0C0563FC mov.l @(disp,pc),Rn */
	r5 = 0x16u;  /* 0C0563FE mov #imm,Rn */
	r6 = 0x6u;  /* 0C056400 mov #imm,Rn */
	IF(0x0C056402u); { u32 t_ = r10; PR = 0x0C056406u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C056406u); }  /* 0C056402 jsr @Rn */
L_0C056406: BLKS(0x0C056406u);
	r4 = 0xC16132Cu; UPD(0x0C056408u, 1);  /* 0C056406 mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C056408 mov #imm,Rn */
	r6 = 0x6u;  /* 0C05640A mov #imm,Rn */
	IF(0x0C05640Cu); { u32 t_ = r10; PR = 0x0C056410u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C056410u); }  /* 0C05640C jsr @Rn */
L_0C056410: BLKS(0x0C056410u);
	r4 = 0xC161330u; UPD(0x0C056412u, 1);  /* 0C056410 mov.l @(disp,pc),Rn */
	r5 = 0x12u;  /* 0C056412 mov #imm,Rn */
	r6 = 0x6u;  /* 0C056414 mov #imm,Rn */
	IF(0x0C056416u); { u32 t_ = r10; PR = 0x0C05641Au; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05641Au); }  /* 0C056416 jsr @Rn */
L_0C05641A: BLKS(0x0C05641Au);
	r4 = 0xC161338u; UPD(0x0C05641Cu, 1);  /* 0C05641A mov.l @(disp,pc),Rn */
	r5 = 0x10u;  /* 0C05641C mov #imm,Rn */
	r6 = 0x6u;  /* 0C05641E mov #imm,Rn */
	IF(0x0C056420u); { u32 t_ = r10; PR = 0x0C056424u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C056424u); }  /* 0C056420 jsr @Rn */
L_0C056424: BLKS(0x0C056424u);
	r4 = 0xC161340u; UPD(0x0C056426u, 1);  /* 0C056424 mov.l @(disp,pc),Rn */
	r5 = 0xEu;  /* 0C056426 mov #imm,Rn */
	r6 = 0x6u;  /* 0C056428 mov #imm,Rn */
	IF(0x0C05642Au); { u32 t_ = r10; PR = 0x0C05642Eu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05642Eu); }  /* 0C05642A jsr @Rn */
L_0C05642E: BLKS(0x0C05642Eu);
	r4 = 0xC161348u; UPD(0x0C056430u, 1);  /* 0C05642E mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C056430 mov #imm,Rn */
	r6 = 0x6u;  /* 0C056432 mov #imm,Rn */
	IF(0x0C056434u); { u32 t_ = r10; PR = 0x0C056438u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C056438u); }  /* 0C056434 jsr @Rn */
L_0C056438: BLKS(0x0C056438u);
	r0 = 0xC27DEF4u; UPD(0x0C05643Au, 1);  /* 0C056438 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C05643Cu, 1);  /* 0C05643A mov.b @Rm,Rn */
	r0 = r2;  /* 0C05643C mov Rm,Rn */
	r0 &= 0x1u;  /* 0C05643E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C056440 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05644Eu, 6); goto L_0C05644E; } goto L_0C056446; }  /* 0C056442 bt/s */
L_0C056446: BLKS(0x0C056446u);
	r3 = 0xC16130Cu; UPD(0x0C056448u, 2);  /* 0C056446 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C056448 mov Rm,Rn */
	IF(0x0C05644Au); r12 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C05644Cu, 2);  /* 0C05644A mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C05644C mov Rm,Rn */
	UPD(0x0C05644Eu, 1);
L_0C05644E: BLKS(0x0C05644Eu);
	r0 &= 0x2u;  /* 0C05644E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C056450 tst Rm,Rn */
	{ u32 c_ = T; r4 = 0x5u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05645Eu, 5); goto L_0C05645E; } goto L_0C056456; }  /* 0C056452 bt/s */
L_0C056456: BLKS(0x0C056456u);
	r2 = 0xC161314u; UPD(0x0C056458u, 2);  /* 0C056456 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C056458 mov Rm,Rn */
	IF(0x0C05645Au); r12 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C05645Cu, 2);  /* 0C05645A mov.b @(r0,Rm),Rn */
	r4 = 0x5u;  /* 0C05645C mov #imm,Rn */
	UPD(0x0C05645Eu, 1);
L_0C05645E: BLKS(0x0C05645Eu);
	T = r12 > r4;  /* 0C05645E cmp/hi Rm,Rn */
	{ u32 c_ = T; r1 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C056530u, 4); goto L_0C056530; } goto L_0C056464; }  /* 0C056460 bt/s */
L_0C056464: BLKS(0x0C056464u);
	r0 = 0xC0564C0u;  /* 0C056464 mova @(disp,pc),r0 */
	r1 += r1;  /* 0C056466 add Rm,Rn */
	IF(0x0C056468u); r5 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C05646Au, 4);  /* 0C056468 mov.w @(r0,Rm),Rn */
	IF(0x0C05646Au); { u32 tv_ = (r5 + 0x0C05646Eu); u32 t_ = PHYS(tv_); IF(0x0C05646Cu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C056477u: goto L_0C056477; case 0x0C056670u: goto L_0C056670; default: JUMPD(tv_); } }  /* 0C05646A braf Rn */
L_0C056477: BLKS(0x0C056477u);
	r13 = 0xCu;  /* 0C056477 mov #imm,Rn */
	IF(0x0C056479u); ARG0(0x04BFu); { s32 a_ = (s32)R32N(r4); r4 += 4; s32 b_ = (s32)R32N(r11); r11 += 4; u64 r_ = sh3_mac_l(c->sr, a_, b_, ((u64)MACH << 32) | MACL); MACH = (u32)(r_ >> 32); MACL = (u32)r_; } UPDN(0x0C05647Bu, 2);  /* 0C056479 mac.l @Rm+,@Rn+ */
	r0 = r0 & 0xFF;  /* 0C05647B extu.b Rm,Rn */
	IF(0x0C05647Du); rt_illegal(c, 0x0C05647Du);  /* 0C05647D illegal 04F3 */
L_0C056530: BLKS(0x0C056530u);
	r11 = 0xC0561F0u; UPD(0x0C056532u, 1);  /* 0C056530 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C056532 mov Rm,Rn */
	r5 = R32(r14 + 0x14u); UPD(0x0C056536u, 2);  /* 0C056534 mov.l @(disp,Rm),Rn */
	IF(0x0C056536u); { u32 t_ = r11; PR = 0x0C05653Au; r6 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0561F0, 0x0C0561F0u, 0x0C05653Au); }  /* 0C056536 jsr @Rn */
L_0C05653A: BLKS(0x0C05653Au);
	r11 = 0xC050CD0u; UPD(0x0C05653Cu, 1);  /* 0C05653A mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C05653C mov #imm,Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C056540u, 2);  /* 0C05653E mov.l Rm,@(disp,Rn) */
	r4 = 0xC161304u; UPD(0x0C056542u, 1);  /* 0C056540 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C056542 mov Rm,Rn */
	r7 = 0x40C04000u; UPD(0x0C056546u, 2);  /* 0C056544 mov.l @(disp,pc),Rn */
	r4 = 0xC160690u; UPD(0x0C056548u, 1);  /* 0C056546 mov.l @(disp,pc),Rn */
	IF(0x0C056548u); { u32 t_ = r11; PR = 0x0C05654Cu; IF(0x0C05654Au); r5 = (u32)(s32)(s8)R8(r0 + r12); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05654Cu); }  /* 0C056548 jsr @Rn */
L_0C05654C: BLKS(0x0C05654Cu);
	r0 = 0x12u;  /* 0C05654C mov #imm,Rn */
	IF(0x0C05654Eu); r9 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C056550u, 2);  /* 0C05654E mov.b @(r0,Rm),Rn */
	r5 = 0x18u;  /* 0C056550 mov #imm,Rn */
	r4 = r9 & 0xFF;  /* 0C056552 extu.b Rm,Rn */
	r9 = 0xC050A80u; UPD(0x0C056556u, 3);  /* 0C056554 mov.l @(disp,pc),Rn */
	IF(0x0C056556u); { u32 t_ = r9; PR = 0x0C05655Au; r6 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05655Au); }  /* 0C056556 jsr @Rn */
L_0C05655A: BLKS(0x0C05655Au);
	r0 = 0x11u;  /* 0C05655A mov #imm,Rn */
	IF(0x0C05655Cu); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C05655Eu, 2);  /* 0C05655C mov.b @(r0,Rm),Rn */
	r5 = 0x16u;  /* 0C05655E mov #imm,Rn */
	r4 = r1 & 0xFF;  /* 0C056560 extu.b Rm,Rn */
	IF(0x0C056562u); { u32 t_ = r9; PR = 0x0C056566u; r6 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C056566u); }  /* 0C056562 jsr @Rn */
L_0C056566: BLKS(0x0C056566u);
	r0 = 0x10u;  /* 0C056566 mov #imm,Rn */
	IF(0x0C056568u); r7 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C05656Au, 2);  /* 0C056568 mov.b @(r0,Rm),Rn */
	r5 = 0x14u;  /* 0C05656A mov #imm,Rn */
	r4 = r7 & 0xFF;  /* 0C05656C extu.b Rm,Rn */
	IF(0x0C05656Eu); { u32 t_ = r9; PR = 0x0C056572u; r6 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C056572u); }  /* 0C05656E jsr @Rn */
L_0C056572: BLKS(0x0C056572u);
	r0 = 0xEu;  /* 0C056572 mov #imm,Rn */
	IF(0x0C056574u); r8 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C056576u, 2);  /* 0C056574 mov.b @(r0,Rm),Rn */
	r5 = 0x12u;  /* 0C056576 mov #imm,Rn */
	r4 = r8 & 0xFF;  /* 0C056578 extu.b Rm,Rn */
	IF(0x0C05657Au); { u32 t_ = r9; PR = 0x0C05657Eu; r6 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05657Eu); }  /* 0C05657A jsr @Rn */
L_0C05657E: BLKS(0x0C05657Eu);
	r0 = 0xDu;  /* 0C05657E mov #imm,Rn */
	IF(0x0C056580u); r6 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C056582u, 2);  /* 0C056580 mov.b @(r0,Rm),Rn */
	r5 = 0x10u;  /* 0C056582 mov #imm,Rn */
	r4 = r6 & 0xFF;  /* 0C056584 extu.b Rm,Rn */
	IF(0x0C056586u); { u32 t_ = r9; PR = 0x0C05658Au; r6 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05658Au); }  /* 0C056586 jsr @Rn */
L_0C05658A: BLKS(0x0C05658Au);
	r10 = (u32)(s32)(s8)R8(r13); UPD(0x0C05658Cu, 1);  /* 0C05658A mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C05658C mov #imm,Rn */
	r4 = r10 & 0xFF;  /* 0C05658E extu.b Rm,Rn */
	r10 = 0x80808000u; UPD(0x0C056592u, 3);  /* 0C056590 mov.l @(disp,pc),Rn */
	r8 = 0xC286506u; UPD(0x0C056594u, 1);  /* 0C056592 mov.l @(disp,pc),Rn */
	IF(0x0C056594u); { u32 t_ = r9; PR = 0x0C056598u; r6 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C056598u); }  /* 0C056594 jsr @Rn */
L_0C056598: BLKS(0x0C056598u);
	r7 = r10;  /* 0C056598 mov Rm,Rn */
	r4 = 0xC16072Cu; UPD(0x0C05659Cu, 2);  /* 0C05659A mov.l @(disp,pc),Rn */
	r5 = 0x1Cu;  /* 0C05659C mov #imm,Rn */
	IF(0x0C05659Eu); { u32 t_ = r11; PR = 0x0C0565A2u; r6 = 0xBu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0565A2u); }  /* 0C05659E jsr @Rn */
L_0C0565A2: BLKS(0x0C0565A2u);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C0565A4u, 1);  /* 0C0565A2 mov.b @Rm,Rn */
	r5 = 0x1Cu;  /* 0C0565A4 mov #imm,Rn */
	r8 += 0xFFFFFFFAu;  /* 0C0565A6 add #imm,Rn */
	r4 = r0 & 0xFF;  /* 0C0565A8 extu.b Rm,Rn */
	r6 = 0xCu;  /* 0C0565AA mov #imm,Rn */
	IF(0x0C0565ACu); { u32 t_ = r9; PR = 0x0C0565B0u; r8 += 0x5u; /* slot add #imm,Rn */ UPD(t_, 6); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C0565B0u); }  /* 0C0565AC jsr @Rn */
L_0C0565B0: BLKS(0x0C0565B0u);
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C0565B2u, 1);  /* 0C0565B0 mov.b @Rm,Rn */
	r5 = 0x1Cu;  /* 0C0565B2 mov #imm,Rn */
	r4 = r3 & 0xFF;  /* 0C0565B4 extu.b Rm,Rn */
	r6 = 0xFu;  /* 0C0565B6 mov #imm,Rn */
	IF(0x0C0565B8u); { u32 t_ = r9; PR = 0x0C0565BCu; r8 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C0565BCu); }  /* 0C0565B8 jsr @Rn */
L_0C0565BC: BLKS(0x0C0565BCu);
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C0565BEu, 1);  /* 0C0565BC mov.b @Rm,Rn */
	r5 = 0x1Cu;  /* 0C0565BE mov #imm,Rn */
	r4 = r2 & 0xFF;  /* 0C0565C0 extu.b Rm,Rn */
	r6 = 0x12u;  /* 0C0565C2 mov #imm,Rn */
	IF(0x0C0565C4u); { u32 t_ = r9; PR = 0x0C0565C8u; r8 += 0xFFFFFFFEu; /* slot add #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C0565C8u); }  /* 0C0565C4 jsr @Rn */
L_0C0565C8: BLKS(0x0C0565C8u);
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C0565CAu, 1);  /* 0C0565C8 mov.b @Rm,Rn */
	r6 = 0x15u;  /* 0C0565CA mov #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C0565CC extu.b Rm,Rn */
	r5 = 0x1Cu;  /* 0C0565CE mov #imm,Rn */
	IF(0x0C0565D0u); { u32 t_ = r9; PR = 0x0C0565D4u; r8 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C0565D4u); }  /* 0C0565D0 jsr @Rn */
L_0C0565D4: BLKS(0x0C0565D4u);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0565D6u, 1);  /* 0C0565D4 mov.b @Rm,Rn */
	r5 = 0x1Cu;  /* 0C0565D6 mov #imm,Rn */
	r4 = r1 & 0xFF;  /* 0C0565D8 extu.b Rm,Rn */
	r8 += 0xFFFFFFFFu;  /* 0C0565DA add #imm,Rn */
	IF(0x0C0565DCu); { u32 t_ = r9; PR = 0x0C0565E0u; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C0565E0u); }  /* 0C0565DC jsr @Rn */
L_0C0565E0: BLKS(0x0C0565E0u);
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C0565E2u, 1);  /* 0C0565E0 mov.b @Rm,Rn */
	r5 = 0x1Cu;  /* 0C0565E2 mov #imm,Rn */
	r4 = r7 & 0xFF;  /* 0C0565E4 extu.b Rm,Rn */
	IF(0x0C0565E6u); { u32 t_ = r9; PR = 0x0C0565EAu; r6 = 0x1Bu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C0565EAu); }  /* 0C0565E6 jsr @Rn */
L_0C0565EA: BLKS(0x0C0565EAu);
	r4 = 0xC1605D4u; UPD(0x0C0565ECu, 1);  /* 0C0565EA mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0565EC mov #imm,Rn */
	r6 = 0x3u;  /* 0C0565EE mov #imm,Rn */
	IF(0x0C0565F0u); { u32 t_ = r11; PR = 0x0C0565F4u; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0565F4u); }  /* 0C0565F0 jsr @Rn */
L_0C0565F4: BLKS(0x0C0565F4u);
	r6 = 0x5u;  /* 0C0565F4 mov #imm,Rn */
	r7 = r10;  /* 0C0565F6 mov Rm,Rn */
	r4 = 0xC1605F0u; UPD(0x0C0565FAu, 3);  /* 0C0565F8 mov.l @(disp,pc),Rn */
	r8 = 0xC04F770u; UPD(0x0C0565FCu, 1);  /* 0C0565FA mov.l @(disp,pc),Rn */
	IF(0x0C0565FCu); { u32 t_ = r11; PR = 0x0C056600u; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C056600u); }  /* 0C0565FC jsr @Rn */
L_0C056600: BLKS(0x0C056600u);
	r11 = 0xC050840u; UPD(0x0C056602u, 1);  /* 0C056600 mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C056602 mov #imm,Rn */
	IF(0x0C056604u); { u32 t_ = r8; PR = 0x0C056608u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04F770, 0x0C04F770u, 0x0C056608u); }  /* 0C056604 jsr @Rn */
L_0C056608: BLKS(0x0C056608u);
	IF(0x0C056608u); { u32 t_ = r11; PR = 0x0C05660Cu; IF(0x0C05660Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C05660Cu); }  /* 0C056608 jsr @Rn */
L_0C05660C: BLKS(0x0C05660Cu);
	r6 = 0xC2862A2u; UPD(0x0C05660Eu, 1);  /* 0C05660C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C056610u, 1);  /* 0C05660E mov.b @Rm,Rn */
	IF(0x0C056610u); T = (s32)r0 >= 0;  /* 0C056610 cmp/pz Rn */
	if (!T) { UPD(0x0C056618u, 4); goto L_0C056618; }  /* 0C056612 bf */
L_0C056614: BLKS(0x0C056614u);
	{ IF(0x0C056616u); ; /* slot nop */ UPD(0x0C0563CCu, 3); goto L_0C0563CC; }  /* 0C056614 bra */
L_0C056618: BLKS(0x0C056618u);
	r14 += 0x18u;  /* 0C056618 add #imm,Rn */
	r15 = r14;  /* 0C05661A mov Rm,Rn */
	IF(0x0C05661Cu); PR = R32(r15); r15 += 4; UPD(0x0C05661Eu, 3);  /* 0C05661C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C056620u, 1);  /* 0C05661E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C056622u, 1);  /* 0C056620 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C056624u, 1);  /* 0C056622 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C056626u, 1);  /* 0C056624 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C056628u, 1);  /* 0C056626 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05662Au, 1);  /* 0C056628 mov.l @Rm+,Rn */
	IF(0x0C05662Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05662A rts */
L_0C056670: BLKS(0x0C056670u);
	r3 = 0xC27DEF4u; UPD(0x0C056672u, 1);  /* 0C056670 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C056674u, 1);  /* 0C056672 mov.b @Rm,Rn */
	r0 &= 0x8u;  /* 0C056674 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C056676 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x11u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0566A4u, 5); goto L_0C0566A4; } goto L_0C05667C; }  /* 0C056678 bt/s */
L_0C05667C: BLKS(0x0C05667Cu);
	IF(0x0C05667Cu); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C05667Eu, 2);  /* 0C05667C mov.b @(r0,Rm),Rn */
	r1 = 0xFu;  /* 0C05667E mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C056680 extu.b Rm,Rn */
	r1 &= r2;  /* 0C056682 and Rm,Rn */
	r3 = r2;  /* 0C056684 mov Rm,Rn */
	r1 += 0x1u;  /* 0C056686 add #imm,Rn */
	IF(0x0C056688u); r3 >>= 2;  /* 0C056688 shlr2 Rn */
	r0 = r1;  /* 0C05668A mov Rm,Rn */
	T = r0 == 0xAu;  /* 0C05668C cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C056690u); r3 >>= 2; /* slot shlr2 Rn */ if (c_) { UPD(0x0C056730u, 11); goto L_0C056730; } UPD(0x0C056692u, 1); goto L_0C056692; }  /* 0C05668E bt/s */
L_0C056692: BLKS(0x0C056692u);
	r5 = 0x4u;  /* 0C056692 mov #imm,Rn */
	IF(0x0C056694u); ARG0(0x435Du); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C056694 shld Rm,Rn */
	r3 |= r1;  /* 0C056696 or Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C056698 extu.b Rm,Rn */
	r3 = 0x11u;  /* 0C05669A mov #imm,Rn */
	r3 += r14;  /* 0C05669C add Rm,Rn */
	T = r0 == 0x13u;  /* 0C05669E cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r3, r0); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C056720u, 10); goto L_0C056720; } UPD(0x0C0566A4u, 1); goto L_0C0566A4; }  /* 0C0566A0 bt/s */
L_0C0566A4: BLKS(0x0C0566A4u);
	r7 = 0xC27DEF4u; UPD(0x0C0566A6u, 1);  /* 0C0566A4 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C0566A8u, 1);  /* 0C0566A6 mov.b @Rm,Rn */
	r0 &= 0x4u;  /* 0C0566A8 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0566AA tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x11u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0566DCu, 5); goto L_0C0566DC; } goto L_0C0566B0; }  /* 0C0566AC bt/s */
L_0C0566B0: BLKS(0x0C0566B0u);
	r0 = 0x11u;  /* 0C0566B0 mov #imm,Rn */
	IF(0x0C0566B2u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0566B4u, 3);  /* 0C0566B2 mov.b @(r0,Rm),Rn */
	r0 = r1 & 0xFF;  /* 0C0566B4 extu.b Rm,Rn */
	r1 = r0;  /* 0C0566B6 mov Rm,Rn */
	r0 &= 0xFu;  /* 0C0566B8 and #imm,r0 */
	r0 += 0xFFFFFFFFu;  /* 0C0566BA add #imm,Rn */
	IF(0x0C0566BCu); r1 >>= 2;  /* 0C0566BC shlr2 Rn */
	IF(0x0C0566BEu); r1 >>= 2;  /* 0C0566BE shlr2 Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C0566C0 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = r0 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C056700u, 10); goto L_0C056700; } UPD(0x0C0566C6u, 1); goto L_0C0566C6; }  /* 0C0566C2 bt/s */
L_0C0566C6: BLKS(0x0C0566C6u);
	r0 = 0x4u;  /* 0C0566C6 mov #imm,Rn */
	IF(0x0C0566C8u); ARG0(0x410Du); { s32 s_ = (s32)r0; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0566C8 shld Rm,Rn */
	r1 |= r2;  /* 0C0566CA or Rm,Rn */
	r11 = r1 & 0xFF;  /* 0C0566CC extu.b Rm,Rn */
	r0 = 0x11u;  /* 0C0566CE mov #imm,Rn */
	T = (r11 & r11) == 0;  /* 0C0566D0 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0566D4u); W8(r0 + r14, r11); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0566DAu, 9); goto L_0C0566DA; } UPD(0x0C0566D6u, 1); goto L_0C0566D6; }  /* 0C0566D2 bf/s */
L_0C0566D6: BLKS(0x0C0566D6u);
	r8 = 0x12u;  /* 0C0566D6 mov #imm,Rn */
	IF(0x0C0566D8u); W8(r0 + r14, r8); UPD(0x0C0566DAu, 2);  /* 0C0566D8 mov.b Rm,@(r0,Rn) */
L_0C0566DA: BLKS(0x0C0566DAu);
	r0 = 0x11u;  /* 0C0566DA mov #imm,Rn */
	UPD(0x0C0566DCu, 1);
L_0C0566DC: BLKS(0x0C0566DCu);
	IF(0x0C0566DCu); r3 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0566DEu, 1);  /* 0C0566DC mov.b @(r0,Rm),Rn */
	r5 = 0x10u;  /* 0C0566DE mov #imm,Rn */
	r2 = 0xC161350u; UPD(0x0C0566E2u, 2);  /* 0C0566E0 mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C0566E2 extu.b Rm,Rn */
	r5 += r14;  /* 0C0566E4 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C0566E8u, 3);  /* 0C0566E6 mov.b @Rm,Rn */
	IF(0x0C0566E8u); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0566EAu, 1);  /* 0C0566E8 mov.b @(r0,Rm),Rn */
	r9 = r4 & 0xFF;  /* 0C0566EA extu.b Rm,Rn */
	r10 = r3 & 0xFF;  /* 0C0566EC extu.b Rm,Rn */
	T = r9 > r10;  /* 0C0566EE cmp/hi Rm,Rn */
	{ u32 c_ = !T; r0 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0566F6u, 6); goto L_0C0566F6; } goto L_0C0566F4; }  /* 0C0566F0 bf/s */
L_0C0566F4: BLKS(0x0C0566F4u);
	IF(0x0C0566F4u); W8(r0 + r14, r3); UPD(0x0C0566F6u, 2);  /* 0C0566F4 mov.b Rm,@(r0,Rn) */
L_0C0566F6: BLKS(0x0C0566F6u);
	{ IF(0x0C0566F8u); ; /* slot nop */ UPD(0x0C056530u, 3); goto L_0C056530; }  /* 0C0566F6 bra */
L_0C056700: BLKS(0x0C056700u);
	r1 += 0xFFFFFFFFu;  /* 0C056700 add #imm,Rn */
	r1 = r1 & 0xFF;  /* 0C056702 extu.b Rm,Rn */
	T = r1 == r2;  /* 0C056704 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C056710u, 6); goto L_0C056710; }  /* 0C056706 bt */
L_0C056708: BLKS(0x0C056708u);
	{ r2 = 0x9u; /* slot mov #imm,Rn */ UPD(0x0C0566C6u, 3); goto L_0C0566C6; }  /* 0C056708 bra */
L_0C056710: BLKS(0x0C056710u);
	{ r1 = 0x9u; /* slot mov #imm,Rn */ UPD(0x0C056708u, 3); goto L_0C056708; }  /* 0C056710 bra */
L_0C056720: BLKS(0x0C056720u);
	r6 = 0x1u;  /* 0C056720 mov #imm,Rn */
	{ W8(r3, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C0566A4u, 4); goto L_0C0566A4; }  /* 0C056722 bra */
L_0C056730: BLKS(0x0C056730u);
	r3 += 0x1u;  /* 0C056730 add #imm,Rn */
	r0 = r3;  /* 0C056732 mov Rm,Rn */
	T = r0 == 0xAu;  /* 0C056734 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C056740u, 6); goto L_0C056740; }  /* 0C056736 bt */
L_0C056738: BLKS(0x0C056738u);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C056692u, 3); goto L_0C056692; }  /* 0C056738 bra */
L_0C056740: BLKS(0x0C056740u);
	{ r3 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C056738u, 3); goto L_0C056738; }  /* 0C056740 bra */
}

void f_0C056476(sh3_t *c)
{
	LOCALS;
L_0C056476: BLKS(0x0C056476u);
	W32(r14 + 0x34u, r14); UPD(0x0C056478u, 1);  /* 0C056476 mov.l Rm,@(disp,Rn) */
	IF(0x0C056478u); W8(r0 + r12, r0); UPD(0x0C05647Au, 1);  /* 0C056478 mov.b Rm,@(r0,Rn) */
	{ PR = 0x0C05647Eu; IF(0x0C05647Cu); W8(r0 + r12, r0); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C05633Eu, 3); CALL(f_0C05633E, 0x0C05647Eu); }  /* 0C05647A bsr */
L_0C05647E: BLKS(0x0C05647Eu);
	rt_illegal(c, 0x0C05647Eu);  /* 0C05647E illegal F330 */
}

void f_0C056480(sh3_t *c)
{
	LOCALS;
L_0C056480: BLKS(0x0C056480u);
	IF(0x0C056480u); W8(r0 + r12, r0); UPD(0x0C056482u, 1);  /* 0C056480 mov.b Rm,@(r0,Rn) */
	rt_illegal(c, 0x0C056482u);  /* 0C056482 illegal F930 */
}

void f_0C056484(sh3_t *c)
{
	LOCALS;
L_0C056484: BLKS(0x0C056484u);
	IF(0x0C056484u); W16(r0 + r12, r0); UPD(0x0C056486u, 1);  /* 0C056484 mov.w Rm,@(r0,Rn) */
	IF(0x0C056486u); rt_illegal(c, 0x0C056486u);  /* 0C056486 illegal 0650 */
}

void f_0C056DB0(sh3_t *c)
{
	LOCALS;
L_0C056DB0: BLKS(0x0C056DB0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C056DB2u, 1);  /* 0C056DB0 mov.l Rm,@-Rn */
	r0 = 0xC05A640u; UPD(0x0C056DB4u, 1);  /* 0C056DB2 mov.l @(disp,pc),Rn */
	IF(0x0C056DB4u); r15 -= 4; W32(r15, PR); UPD(0x0C056DB6u, 1);  /* 0C056DB4 sts.l pr,@-Rn */
	IF(0x0C056DB6u); { u32 t_ = r0; PR = 0x0C056DBAu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C05A640, 0x0C05A640u, 0x0C056DBAu); }  /* 0C056DB6 jsr @Rn */
L_0C056DBA: BLKS(0x0C056DBAu);
	r0 = 0xC055B90u; UPD(0x0C056DBCu, 1);  /* 0C056DBA mov.l @(disp,pc),Rn */
	IF(0x0C056DBCu); { u32 t_ = r0; PR = 0x0C056DC0u; IF(0x0C056DBEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C055B90, 0x0C055B90u, 0x0C056DC0u); }  /* 0C056DBC jsr @Rn */
L_0C056DC0: BLKS(0x0C056DC0u);
	r4 = 0xC26C918u; UPD(0x0C056DC2u, 1);  /* 0C056DC0 mov.l @(disp,pc),Rn */
	r5 = 0x20u;  /* 0C056DC2 mov #imm,Rn */
	r6 = 0x194u; UPD(0x0C056DC6u, 2);  /* 0C056DC4 mov.w @(disp,pc),Rn */
	r0 = 0xC04C23Cu; UPD(0x0C056DC8u, 1);  /* 0C056DC6 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C056DC8 mov Rm,Rn */
	IF(0x0C056DCAu); PR = R32(r15); r15 += 4; UPD(0x0C056DCCu, 2);  /* 0C056DCA lds.l @Rn+,pr */
	IF(0x0C056DCCu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C04C23Cu: TAIL(f_0C04C23C); default: JUMPD(tv_); } }  /* 0C056DCC jmp @Rn */
}

/* FUN_0c056f30 */
void f_0C056F30(sh3_t *c)
{
	LOCALS;
L_0C056F30: BLKS(0x0C056F30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C056F32u, 1);  /* 0C056F30 mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C056F32 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C056F36u, 2);  /* 0C056F34 mov.l Rm,@-Rn */
	r1 = 0xCu;  /* 0C056F36 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C056F3Au, 2);  /* 0C056F38 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C056F3Cu, 1);  /* 0C056F3A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C056F3Eu, 1);  /* 0C056F3C mov.l Rm,@-Rn */
	r0 = 0xC283540u; UPD(0x0C056F40u, 1);  /* 0C056F3E mov.l @(disp,pc),Rn */
	IF(0x0C056F40u); r15 -= 4; W32(r15, PR); UPD(0x0C056F42u, 1);  /* 0C056F40 sts.l pr,@-Rn */
	W8(r0, r3); UPD(0x0C056F44u, 1);  /* 0C056F42 mov.b Rm,@Rn */
	r14 = r15;  /* 0C056F44 mov Rm,Rn */
	r2 = 0xC275DBCu; UPD(0x0C056F48u, 2);  /* 0C056F46 mov.l @(disp,pc),Rn */
	r0 = 0xC21F89Cu; UPD(0x0C056F4Au, 1);  /* 0C056F48 mov.l @(disp,pc),Rn */
	r8 = 0xE10u; UPD(0x0C056F4Cu, 1);  /* 0C056F4A mov.w @(disp,pc),Rn */
	r11 = 0xC161398u; UPD(0x0C056F4Eu, 1);  /* 0C056F4C mov.l @(disp,pc),Rn */
	r10 = 0xC050CD0u; UPD(0x0C056F50u, 1);  /* 0C056F4E mov.l @(disp,pc),Rn */
	r9 = 0xC04F770u; UPD(0x0C056F52u, 1);  /* 0C056F50 mov.l @(disp,pc),Rn */
	W8(r2, r3); UPD(0x0C056F54u, 1);  /* 0C056F52 mov.b Rm,@Rn */
	W32(r0, r1); UPD(0x0C056F56u, 1);  /* 0C056F54 mov.l Rm,@Rn */
	IF(0x0C056F56u); ;  /* 0C056F56 nop */
	UPD(0x0C056F58u, 1);
L_0C056F58: BLKS(0x0C056F58u);
	r0 = 0xC04F330u; UPD(0x0C056F5Au, 1);  /* 0C056F58 mov.l @(disp,pc),Rn */
	IF(0x0C056F5Au); { u32 t_ = r0; PR = 0x0C056F5Eu; IF(0x0C056F5Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C056F5Eu); }  /* 0C056F5A jsr @Rn */
L_0C056F5E: BLKS(0x0C056F5Eu);
	r0 = 0xC04F930u; UPD(0x0C056F60u, 1);  /* 0C056F5E mov.l @(disp,pc),Rn */
	IF(0x0C056F60u); { u32 t_ = r0; PR = 0x0C056F64u; IF(0x0C056F62u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C056F64u); }  /* 0C056F60 jsr @Rn */
L_0C056F64: BLKS(0x0C056F64u);
	r0 = 0xC050650u; UPD(0x0C056F66u, 1);  /* 0C056F64 mov.l @(disp,pc),Rn */
	IF(0x0C056F66u); { u32 t_ = r0; PR = 0x0C056F6Au; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050650, 0x0C050650u, 0x0C056F6Au); }  /* 0C056F66 jsr @Rn */
L_0C056F6A: BLKS(0x0C056F6Au);
	r0 = 0xC0505F0u; UPD(0x0C056F6Cu, 1);  /* 0C056F6A mov.l @(disp,pc),Rn */
	IF(0x0C056F6Cu); { u32 t_ = r0; PR = 0x0C056F70u; IF(0x0C056F6Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C056F70u); }  /* 0C056F6C jsr @Rn */
L_0C056F70: BLKS(0x0C056F70u);
	r2 = 0xC283748u; UPD(0x0C056F72u, 1);  /* 0C056F70 mov.l @(disp,pc),Rn */
	r6 = 0xBu;  /* 0C056F72 mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C056F76u, 2);  /* 0C056F74 mov.b @Rm,Rn */
	r5 = 0x1Eu;  /* 0C056F76 mov #imm,Rn */
	IF(0x0C056F78u); r0 <<= 2;  /* 0C056F78 shll2 Rn */
	r7 = 0x80808000u; UPD(0x0C056F7Cu, 3);  /* 0C056F7A mov.l @(disp,pc),Rn */
	IF(0x0C056F7Cu); { u32 t_ = r10; PR = 0x0C056F80u; IF(0x0C056F7Eu); r4 = R32(r0 + r11); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C056F80u); }  /* 0C056F7C jsr @Rn */
L_0C056F80: BLKS(0x0C056F80u);
	r4 = 0x7u;  /* 0C056F80 mov #imm,Rn */
	IF(0x0C056F82u); { u32 t_ = r9; PR = 0x0C056F86u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04F770, 0x0C04F770u, 0x0C056F86u); }  /* 0C056F82 jsr @Rn */
L_0C056F86: BLKS(0x0C056F86u);
	r0 = 0xC050840u; UPD(0x0C056F88u, 1);  /* 0C056F86 mov.l @(disp,pc),Rn */
	IF(0x0C056F88u); { u32 t_ = r0; PR = 0x0C056F8Cu; IF(0x0C056F8Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C056F8Cu); }  /* 0C056F88 jsr @Rn */
L_0C056F8C: BLKS(0x0C056F8Cu);
	r3 = 0xC21F7F9u; UPD(0x0C056F8Eu, 1);  /* 0C056F8C mov.l @(disp,pc),Rn */
	r5 = 0xFFFFFFF9u;  /* 0C056F8E mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C056F92u, 2);  /* 0C056F90 mov.b @Rm,Rn */
	r7 = 0xFFFFFFFFu;  /* 0C056F92 mov #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C056F94 tst Rm,Rn */
	r0 = 0x80u; UPD(0x0C056F98u, 3);  /* 0C056F96 mov.w @(disp,pc),Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C056F98 negc Rm,Rn */
	r6 = 0xC27DDF4u; UPD(0x0C056F9Cu, 2);  /* 0C056F9A mov.l @(disp,pc),Rn */
	IF(0x0C056F9Cu); r0 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C056F9Eu, 1);  /* 0C056F9C mov.b @(r0,Rm),Rn */
	IF(0x0C056F9Eu); ARG0(0x405Cu); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C056F9E shad Rm,Rn */
	r0 &= 0x1u;  /* 0C056FA0 and #imm,r0 */
	r4 &= r0;  /* 0C056FA2 and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C056FA4 tst Rm,Rn */
	if (!T) { UPD(0x0C056FACu, 7); goto L_0C056FAC; }  /* 0C056FA6 bf */
L_0C056FA8: BLKS(0x0C056FA8u);
	IF(0x0C056FA8u); r8 -= 1; T = r8 == 0;  /* 0C056FA8 dt Rn */
	if (!T) { UPD(0x0C056F58u, 4); goto L_0C056F58; }  /* 0C056FAA bf */
L_0C056FAC: BLKS(0x0C056FACu);
	r15 = r14;  /* 0C056FAC mov Rm,Rn */
	IF(0x0C056FAEu); PR = R32(r15); r15 += 4; UPD(0x0C056FB0u, 2);  /* 0C056FAE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C056FB2u, 1);  /* 0C056FB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C056FB4u, 1);  /* 0C056FB2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C056FB6u, 1);  /* 0C056FB4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C056FB8u, 1);  /* 0C056FB6 mov.l @Rm+,Rn */
	IF(0x0C056FB8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C056FB8 rts */
}

/* FUN_0c057000 */
void f_0C057000(sh3_t *c)
{
	LOCALS;
L_0C057000: BLKS(0x0C057000u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C057002u, 1);  /* 0C057000 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C057004u, 1);  /* 0C057002 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C057006u, 1);  /* 0C057004 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C057008u, 1);  /* 0C057006 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C05700Au, 1);  /* 0C057008 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r5;  /* 0C05700A exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05700Eu, 2);  /* 0C05700C mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r4;  /* 0C05700E exts.b Rm,Rn */
	IF(0x0C057010u); r15 -= 4; W32(r15, PR); UPD(0x0C057012u, 2);  /* 0C057010 sts.l pr,@-Rn */
	r2 = 0xC21F89Cu; UPD(0x0C057014u, 1);  /* 0C057012 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C057016u, 1);  /* 0C057014 mov.l @Rm,Rn */
	r0 &= 0x4u;  /* 0C057016 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C057018 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C057090u, 5); goto L_0C057090; } goto L_0C05701E; }  /* 0C05701A bt/s */
L_0C05701E: BLKS(0x0C05701Eu);
	r6 = r11;  /* 0C05701E mov Rm,Rn */
	r8 = 0xC050CD0u; UPD(0x0C057022u, 3);  /* 0C057020 mov.l @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C057022 add #imm,Rn */
	r4 = 0xC1613A8u; UPD(0x0C057026u, 2);  /* 0C057024 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C057026 mov Rm,Rn */
	r7 = 0x80808000u; UPD(0x0C05702Au, 2);  /* 0C057028 mov.l @(disp,pc),Rn */
L_0C05702A: BLKS(0x0C05702Au);
	IF(0x0C05702Au); { u32 t_ = r8; PR = 0x0C05702Eu; IF(0x0C05702Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05702Eu); }  /* 0C05702A jsr @Rn */
L_0C05702E: BLKS(0x0C05702Eu);
	r2 = 0xC21F89Cu; UPD(0x0C057030u, 1);  /* 0C05702E mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C057032u, 1);  /* 0C057030 mov.l @Rm,Rn */
	r0 &= 0x8u;  /* 0C057032 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C057034 tst Rm,Rn */
	{ u32 c_ = T; r6 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C057080u, 5); goto L_0C057080; } goto L_0C05703A; }  /* 0C057036 bt/s */
L_0C05703A: BLKS(0x0C05703Au);
	r6 = r11;  /* 0C05703A mov Rm,Rn */
	r4 = 0xC1613A8u; UPD(0x0C05703Eu, 3);  /* 0C05703C mov.l @(disp,pc),Rn */
	r6 += 0x3u;  /* 0C05703E add #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C057042u, 2);  /* 0C057040 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C057042 mov Rm,Rn */
	UPD(0x0C057044u, 1);
L_0C057044: BLKS(0x0C057044u);
	IF(0x0C057044u); { u32 t_ = r8; PR = 0x0C057048u; IF(0x0C057046u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C057048u); }  /* 0C057044 jsr @Rn */
L_0C057048: BLKS(0x0C057048u);
	r8 = 0xC286278u; UPD(0x0C05704Au, 1);  /* 0C057048 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C05704A mov Rm,Rn */
	r10 = 0xC050A80u; UPD(0x0C05704Eu, 2);  /* 0C05704C mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C05704E mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r3 = v_; } UPD(0x0C057052u, 2);  /* 0C057050 mov.b @Rm+,Rn */
	r11 += 0x4u;  /* 0C057052 add #imm,Rn */
	r9 = 0x80808000u; UPD(0x0C057056u, 2);  /* 0C057054 mov.l @(disp,pc),Rn */
	r4 = r3 & 0xFF;  /* 0C057056 extu.b Rm,Rn */
	IF(0x0C057058u); { u32 t_ = r10; PR = 0x0C05705Cu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050A80, 0x0C050A80u, 0x0C05705Cu); }  /* 0C057058 jsr @Rn */
L_0C05705C: BLKS(0x0C05705Cu);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C05705Eu, 1);  /* 0C05705C mov.b @Rm,Rn */
	r5 = r12;  /* 0C05705E mov Rm,Rn */
	r4 = r1 & 0xFF;  /* 0C057060 extu.b Rm,Rn */
	r6 = r11;  /* 0C057062 mov Rm,Rn */
	r7 = r9;  /* 0C057064 mov Rm,Rn */
	r0 = r10;  /* 0C057066 mov Rm,Rn */
	r15 = r14;  /* 0C057068 mov Rm,Rn */
	IF(0x0C05706Au); PR = R32(r15); r15 += 4; UPD(0x0C05706Cu, 7);  /* 0C05706A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05706Eu, 1);  /* 0C05706C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C057070u, 1);  /* 0C05706E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C057072u, 1);  /* 0C057070 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C057074u, 1);  /* 0C057072 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C057076u, 1);  /* 0C057074 mov.l @Rm+,Rn */
	IF(0x0C057076u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C050A80u: TAIL(f_0C050A80); default: JUMPD(tv_); } }  /* 0C057076 jmp @Rn */
L_0C057080: BLKS(0x0C057080u);
	r4 = 0xC1613ACu; UPD(0x0C057082u, 1);  /* 0C057080 mov.l @(disp,pc),Rn */
	r7 = 0x40C04000u; UPD(0x0C057084u, 1);  /* 0C057082 mov.l @(disp,pc),Rn */
	r6 += 0x3u;  /* 0C057084 add #imm,Rn */
	{ r5 = r12; /* slot mov Rm,Rn */ UPD(0x0C057044u, 4); goto L_0C057044; }  /* 0C057086 bra */
L_0C057090: BLKS(0x0C057090u);
	r8 = 0xC050CD0u; UPD(0x0C057092u, 1);  /* 0C057090 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C057092 mov Rm,Rn */
	r4 = 0xC1613ACu; UPD(0x0C057096u, 2);  /* 0C057094 mov.l @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C057096 add #imm,Rn */
	r7 = 0x40C04000u; UPD(0x0C05709Au, 2);  /* 0C057098 mov.l @(disp,pc),Rn */
	{ r5 = r12; /* slot mov Rm,Rn */ UPD(0x0C05702Au, 3); goto L_0C05702A; }  /* 0C05709A bra */
}

/* FUN_0c0570c0 */
void f_0C0570C0(sh3_t *c)
{
	LOCALS;
L_0C0570C0: BLKS(0x0C0570C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0570C2u, 1);  /* 0C0570C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0570C4u, 1);  /* 0C0570C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0570C6u, 1);  /* 0C0570C4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0570C8u, 1);  /* 0C0570C6 mov.l Rm,@-Rn */
	r10 = 0xFFFFFFFFu;  /* 0C0570C8 mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0570CCu, 2);  /* 0C0570CA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0570CEu, 1);  /* 0C0570CC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0570D0u, 1);  /* 0C0570CE mov.l Rm,@-Rn */
	r8 = 0xC060A90u; UPD(0x0C0570D2u, 1);  /* 0C0570D0 mov.l @(disp,pc),Rn */
	IF(0x0C0570D2u); r15 -= 4; W32(r15, PR); UPD(0x0C0570D4u, 1);  /* 0C0570D2 sts.l pr,@-Rn */
	r12 = 0xC050CD0u; UPD(0x0C0570D6u, 1);  /* 0C0570D4 mov.l @(disp,pc),Rn */
	r11 = 0x400u; UPD(0x0C0570D8u, 1);  /* 0C0570D6 mov.w @(disp,pc),Rn */
	IF(0x0C0570D8u); { u32 t_ = r8; PR = 0x0C0570DCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060A90, 0x0C060A90u, 0x0C0570DCu); }  /* 0C0570D8 jsr @Rn */
L_0C0570DC: BLKS(0x0C0570DCu);
	r13 = r12;  /* 0C0570DC mov Rm,Rn */
	IF(0x0C0570DEu); ;  /* 0C0570DE nop */
	UPD(0x0C0570E0u, 2);
L_0C0570E0: BLKS(0x0C0570E0u);
	r8 = 0xC04F330u; UPD(0x0C0570E2u, 1);  /* 0C0570E0 mov.l @(disp,pc),Rn */
	r9 = 0xC04F930u; UPD(0x0C0570E4u, 1);  /* 0C0570E2 mov.l @(disp,pc),Rn */
	IF(0x0C0570E4u); { u32 t_ = r8; PR = 0x0C0570E8u; IF(0x0C0570E6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F330, 0x0C04F330u, 0x0C0570E8u); }  /* 0C0570E4 jsr @Rn */
L_0C0570E8: BLKS(0x0C0570E8u);
	r8 = 0xC050650u; UPD(0x0C0570EAu, 1);  /* 0C0570E8 mov.l @(disp,pc),Rn */
	IF(0x0C0570EAu); { u32 t_ = r9; PR = 0x0C0570EEu; IF(0x0C0570ECu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04F930, 0x0C04F930u, 0x0C0570EEu); }  /* 0C0570EA jsr @Rn */
L_0C0570EE: BLKS(0x0C0570EEu);
	r9 = 0xC0505F0u; UPD(0x0C0570F0u, 1);  /* 0C0570EE mov.l @(disp,pc),Rn */
	IF(0x0C0570F0u); { u32 t_ = r8; PR = 0x0C0570F4u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050650, 0x0C050650u, 0x0C0570F4u); }  /* 0C0570F0 jsr @Rn */
L_0C0570F4: BLKS(0x0C0570F4u);
	r8 = 0xC05F810u; UPD(0x0C0570F6u, 1);  /* 0C0570F4 mov.l @(disp,pc),Rn */
	IF(0x0C0570F6u); { u32 t_ = r9; PR = 0x0C0570FAu; IF(0x0C0570F8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C0570FAu); }  /* 0C0570F6 jsr @Rn */
L_0C0570FA: BLKS(0x0C0570FAu);
	r9 = 0xC0559C0u; UPD(0x0C0570FCu, 1);  /* 0C0570FA mov.l @(disp,pc),Rn */
	IF(0x0C0570FCu); { u32 t_ = r8; PR = 0x0C057100u; IF(0x0C0570FEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05F810, 0x0C05F810u, 0x0C057100u); }  /* 0C0570FC jsr @Rn */
L_0C057100: BLKS(0x0C057100u);
	r7 = 0xC286068u; UPD(0x0C057102u, 1);  /* 0C057100 mov.l @(disp,pc),Rn */
	r4 = 0xC2852C8u; UPD(0x0C057104u, 1);  /* 0C057102 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C057106u, 1);  /* 0C057104 mov.w @Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C057108u, 1);  /* 0C057106 mov.w @Rm,Rn */
	r5 = r6 & 0xFFFF;  /* 0C057108 extu.w Rm,Rn */
	T = r5 == r11;  /* 0C05710A cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r10, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r8 = r_; }  /* 0C05710C negc Rm,Rn */
	r2 = r3 & 0xFFFF;  /* 0C05710E extu.w Rm,Rn */
	T = r2 == r11;  /* 0C057110 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r10, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C057112 negc Rm,Rn */
	r8 |= r0;  /* 0C057114 or Rm,Rn */
	r4 = 0x25u;  /* 0C057116 mov #imm,Rn */
	IF(0x0C057118u); { u32 t_ = r9; PR = 0x0C05711Cu; r5 = 0x17u; /* slot mov #imm,Rn */ UPD(t_, 10); CALLP(t_, f_0C0559C0, 0x0C0559C0u, 0x0C05711Cu); }  /* 0C057118 jsr @Rn */
L_0C05711C: BLKS(0x0C05711Cu);
	T = (r8 & r8) == 0;  /* 0C05711C tst Rm,Rn */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C057160u, 4); goto L_0C057160; } goto L_0C057122; }  /* 0C05711E bf/s */
L_0C057122: BLKS(0x0C057122u);
	T = (r9 & r9) == 0;  /* 0C057122 tst Rm,Rn */
	UPD(0x0C057124u, 2);
L_0C057124: BLKS(0x0C057124u);
	{ u32 c_ = !T; r5 = 0x25u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057150u, 3); goto L_0C057150; } UPD(0x0C057128u, 1); goto L_0C057128; }  /* 0C057124 bf/s */
L_0C057128: BLKS(0x0C057128u);
	r0 = 0xC04F770u; UPD(0x0C05712Au, 1);  /* 0C057128 mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C05712A mov #imm,Rn */
	IF(0x0C05712Cu); { u32 t_ = r0; PR = 0x0C057130u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04F770, 0x0C04F770u, 0x0C057130u); }  /* 0C05712C jsr @Rn */
L_0C057130: BLKS(0x0C057130u);
	r0 = 0xC050840u; UPD(0x0C057132u, 1);  /* 0C057130 mov.l @(disp,pc),Rn */
	IF(0x0C057132u); { u32 t_ = r0; PR = 0x0C057136u; r8 |= r9; /* slot or Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C057136u); }  /* 0C057132 jsr @Rn */
L_0C057136: BLKS(0x0C057136u);
	r0 = (u32)(s32)(s8)r8;  /* 0C057136 exts.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C057138 tst Rm,Rn */
	if (!T) { UPD(0x0C0570E0u, 5); goto L_0C0570E0; }  /* 0C05713A bf */
L_0C05713C: BLKS(0x0C05713Cu);
	r15 = r14;  /* 0C05713C mov Rm,Rn */
	IF(0x0C05713Eu); PR = R32(r15); r15 += 4; UPD(0x0C057140u, 2);  /* 0C05713E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C057142u, 1);  /* 0C057140 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C057144u, 1);  /* 0C057142 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C057146u, 1);  /* 0C057144 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C057148u, 1);  /* 0C057146 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C05714Au, 1);  /* 0C057148 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C05714Cu, 1);  /* 0C05714A mov.l @Rm+,Rn */
	IF(0x0C05714Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C05714C rts */
L_0C057150: BLKS(0x0C057150u);
	r4 = 0xC160740u; UPD(0x0C057152u, 1);  /* 0C057150 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C057154u, 1);  /* 0C057152 mov.l @(disp,pc),Rn */
	IF(0x0C057154u); { u32 t_ = r12; PR = 0x0C057158u; r6 = 0xBu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C057158u); }  /* 0C057154 jsr @Rn */
L_0C057158: BLKS(0x0C057158u);
	{ IF(0x0C05715Au); ; /* slot nop */ UPD(0x0C057128u, 3); goto L_0C057128; }  /* 0C057158 bra */
L_0C057160: BLKS(0x0C057160u);
	r4 = 0xC16074Cu; UPD(0x0C057162u, 1);  /* 0C057160 mov.l @(disp,pc),Rn */
	r5 = 0x26u;  /* 0C057162 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C057166u, 2);  /* 0C057164 mov.l @(disp,pc),Rn */
	IF(0x0C057166u); { u32 t_ = r13; PR = 0x0C05716Au; r6 = 0xBu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C05716Au); }  /* 0C057166 jsr @Rn */
L_0C05716A: BLKS(0x0C05716Au);
	{ T = (r9 & r9) == 0; /* slot tst Rm,Rn */ UPD(0x0C057124u, 3); goto L_0C057124; }  /* 0C05716A bra */
}

/* FUN_0c057250 */
void f_0C057250(sh3_t *c)
{
	LOCALS;
L_0C057250: BLKS(0x0C057250u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C057252u, 1);  /* 0C057250 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C057252 exts.b Rm,Rn */
	r2 = 0x9u;  /* 0C057254 mov #imm,Rn */
	r14 = r15;  /* 0C057256 mov Rm,Rn */
	r5 = (u32)(s32)(s8)r5;  /* 0C057258 exts.b Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C05725A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 = (u32)(s32)(s8)r6; /* slot exts.b Rm,Rn */ if (c_) { UPD(0x0C057270u, 8); goto L_0C057270; } goto L_0C057260; }  /* 0C05725C bf/s */
L_0C057260: BLKS(0x0C057260u);
	r15 = r14;  /* 0C057260 mov Rm,Rn */
	IF(0x0C057262u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C057262 rts */
L_0C057270: BLKS(0x0C057270u);
	r2 = 0xC161404u; UPD(0x0C057272u, 1);  /* 0C057270 mov.l @(disp,pc),Rn */
	IF(0x0C057272u); r0 <<= 2;  /* 0C057272 shll2 Rn */
	IF(0x0C057274u); r4 = R32(r0 + r2); UPD(0x0C057276u, 2);  /* 0C057274 mov.l @(r0,Rm),Rn */
	r7 = 0x80808000u; UPD(0x0C057278u, 1);  /* 0C057276 mov.l @(disp,pc),Rn */
	r0 = 0xC050CD0u; UPD(0x0C05727Au, 1);  /* 0C057278 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C05727A mov Rm,Rn */
	IF(0x0C05727Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C05727C jmp @Rn */
}

/* FUN_0c057290 */
void f_0C057290(sh3_t *c)
{
	LOCALS;
L_0C057290: BLKS(0x0C057290u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C057292u, 1);  /* 0C057290 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C057292 exts.b Rm,Rn */
	r2 = 0x3u;  /* 0C057294 mov #imm,Rn */
	r14 = r15;  /* 0C057296 mov Rm,Rn */
	r5 = (u32)(s32)(s8)r5;  /* 0C057298 exts.b Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C05729A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 = (u32)(s32)(s8)r6; /* slot exts.b Rm,Rn */ if (c_) { UPD(0x0C0572B0u, 8); goto L_0C0572B0; } goto L_0C0572A0; }  /* 0C05729C bf/s */
L_0C0572A0: BLKS(0x0C0572A0u);
	r15 = r14;  /* 0C0572A0 mov Rm,Rn */
	IF(0x0C0572A2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0572A2 rts */
L_0C0572B0: BLKS(0x0C0572B0u);
	r2 = 0xC16145Cu; UPD(0x0C0572B2u, 1);  /* 0C0572B0 mov.l @(disp,pc),Rn */
	IF(0x0C0572B2u); r0 <<= 2;  /* 0C0572B2 shll2 Rn */
	IF(0x0C0572B4u); r4 = R32(r0 + r2); UPD(0x0C0572B6u, 2);  /* 0C0572B4 mov.l @(r0,Rm),Rn */
	r7 = 0x40C04000u; UPD(0x0C0572B8u, 1);  /* 0C0572B6 mov.l @(disp,pc),Rn */
	r0 = 0xC050CD0u; UPD(0x0C0572BAu, 1);  /* 0C0572B8 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0572BA mov Rm,Rn */
	IF(0x0C0572BCu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C0572BC jmp @Rn */
}

/* FUN_0c0572d0 */
void f_0C0572D0(sh3_t *c)
{
	LOCALS;
L_0C0572D0: BLKS(0x0C0572D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0572D2u, 1);  /* 0C0572D0 mov.l Rm,@-Rn */
	r3 = 0xFFFFFFFFu;  /* 0C0572D2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0572D6u, 2);  /* 0C0572D4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0572D8u, 1);  /* 0C0572D6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0572DAu, 1);  /* 0C0572D8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0572DCu, 1);  /* 0C0572DA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0572DEu, 1);  /* 0C0572DC mov.l Rm,@-Rn */
	r1 = 0xC22C878u; UPD(0x0C0572E0u, 1);  /* 0C0572DE mov.l @(disp,pc),Rn */
	IF(0x0C0572E0u); r15 -= 4; W32(r15, PR); UPD(0x0C0572E2u, 1);  /* 0C0572E0 sts.l pr,@-Rn */
	r2 = 0x10000u; UPD(0x0C0572E4u, 1);  /* 0C0572E2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0572E4 mov Rm,Rn */
	IF(0x0C0572E6u); ;  /* 0C0572E6 nop */
	UPD(0x0C0572E8u, 2);
L_0C0572E8: BLKS(0x0C0572E8u);
	W32(r1, r3); UPD(0x0C0572EAu, 1);  /* 0C0572E8 mov.l Rm,@Rn */
	IF(0x0C0572EAu); r2 -= 1; T = r2 == 0;  /* 0C0572EA dt Rn */
	{ u32 c_ = !T; r1 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0572E8u, 4); goto L_0C0572E8; } goto L_0C0572F0; }  /* 0C0572EC bf/s */
L_0C0572F0: BLKS(0x0C0572F0u);
	r9 = 0xC392B10u; UPD(0x0C0572F2u, 2);  /* 0C0572F0 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C0572F2 mov #imm,Rn */
	r10 = 0xC0B1F40u; UPD(0x0C0572F6u, 2);  /* 0C0572F4 mov.l @(disp,pc),Rn */
	r8 = 0x7Fu;  /* 0C0572F6 mov #imm,Rn */
	r11 = 0x80u; UPD(0x0C0572FAu, 2);  /* 0C0572F8 mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0572FA mov #imm,Rn */
	r12 = 0xC0AFF74u; UPD(0x0C0572FEu, 2);  /* 0C0572FC mov.l @(disp,pc),Rn */
L_0C0572FE: BLKS(0x0C0572FEu);
	r0 = r6;  /* 0C0572FE mov Rm,Rn */
	IF(0x0C057300u); r4 = R32(r0 + r10); UPD(0x0C057302u, 2);  /* 0C057300 mov.l @(r0,Rm),Rn */
	r1 = r7;  /* 0C057302 mov Rm,Rn */
	r1 += r11;  /* 0C057304 add Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C057306 extu.b Rm,Rn */
	IF(0x0C057308u); r0 <<= 2;  /* 0C057308 shll2 Rn */
	IF(0x0C05730Au); r4 <<= 8;  /* 0C05730A shll8 Rn */
	IF(0x0C05730Cu); { u32 t_ = r12; PR = 0x0C057310u; IF(0x0C05730Eu); r5 = R32(r0 + r10); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 7); CALLP(t_, f_0C0AFF74, 0x0C0AFF74u, 0x0C057310u); }  /* 0C05730C jsr @Rn */
L_0C057310: BLKS(0x0C057310u);
	r1 = r0;  /* 0C057310 mov Rm,Rn */
	r0 = r6;  /* 0C057312 mov Rm,Rn */
	r7 += 0x1u;  /* 0C057314 add #imm,Rn */
	IF(0x0C057316u); W32(r0 + r9, r1); UPD(0x0C057318u, 4);  /* 0C057316 mov.l Rm,@(r0,Rn) */
	T = (s32)r7 > (s32)r8;  /* 0C057318 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0572FEu, 4); goto L_0C0572FE; } goto L_0C05731E; }  /* 0C05731A bf/s */
L_0C05731E: BLKS(0x0C05731Eu);
	r6 = 0xC392B14u; UPD(0x0C057320u, 2);  /* 0C05731E mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C057320 mov #imm,Rn */
	r4 = 0xC22C878u; UPD(0x0C057324u, 2);  /* 0C057322 mov.l @(disp,pc),Rn */
	r7 = r2;  /* 0C057324 mov Rm,Rn */
	r5 = 0x7Eu;  /* 0C057326 mov #imm,Rn */
	UPD(0x0C057328u, 2);
L_0C057328: BLKS(0x0C057328u);
	r1 = r2;  /* 0C057328 mov Rm,Rn */
	r3 = R32(r6); UPD(0x0C05732Cu, 2);  /* 0C05732A mov.l @Rm,Rn */
	IF(0x0C05732Cu); r1 <<= 2;  /* 0C05732C shll2 Rn */
	r1 += r4;  /* 0C05732E add Rm,Rn */
	UPD(0x0C057330u, 2);
L_0C057330: BLKS(0x0C057330u);
	W32(r1, r7); UPD(0x0C057332u, 1);  /* 0C057330 mov.l Rm,@Rn */
	r2 += 0x1u;  /* 0C057332 add #imm,Rn */
	T = (s32)r2 > (s32)r3;  /* 0C057334 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C057330u, 5); goto L_0C057330; } goto L_0C05733A; }  /* 0C057336 bf/s */
L_0C05733A: BLKS(0x0C05733Au);
	r7 += 0x1u;  /* 0C05733A add #imm,Rn */
	T = (s32)r7 > (s32)r5;  /* 0C05733C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C057328u, 6); goto L_0C057328; } goto L_0C057342; }  /* 0C05733E bf/s */
L_0C057342: BLKS(0x0C057342u);
	r3 = r2;  /* 0C057342 mov Rm,Rn */
	r0 = 0xC22C878u; UPD(0x0C057346u, 3);  /* 0C057344 mov.l @(disp,pc),Rn */
	IF(0x0C057346u); r3 <<= 2;  /* 0C057346 shll2 Rn */
	r6 = 0xFFFFu; UPD(0x0C05734Au, 2);  /* 0C057348 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C05734A add Rm,Rn */
	UPD(0x0C05734Cu, 1);
L_0C05734C: BLKS(0x0C05734Cu);
	W32(r3, r7); UPD(0x0C05734Eu, 1);  /* 0C05734C mov.l Rm,@Rn */
	r2 += 0x1u;  /* 0C05734E add #imm,Rn */
	T = (s32)r2 > (s32)r6;  /* 0C057350 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05734Cu, 5); goto L_0C05734C; } goto L_0C057356; }  /* 0C057352 bf/s */
L_0C057356: BLKS(0x0C057356u);
	r15 = r14;  /* 0C057356 mov Rm,Rn */
	IF(0x0C057358u); PR = R32(r15); r15 += 4; UPD(0x0C05735Au, 3);  /* 0C057358 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C05735Cu, 1);  /* 0C05735A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C05735Eu, 1);  /* 0C05735C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C057360u, 1);  /* 0C05735E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C057362u, 1);  /* 0C057360 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C057364u, 1);  /* 0C057362 mov.l @Rm+,Rn */
	IF(0x0C057364u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C057364 rts */
}

/* FUN_0c057390 */
void f_0C057390(sh3_t *c)
{
	LOCALS;
L_0C057390: BLKS(0x0C057390u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C057392u, 1);  /* 0C057390 mov.l Rm,@-Rn */
	r6 -= r4;  /* 0C057392 sub Rm,Rn */
	r0 = 0xFFFFFFF8u;  /* 0C057394 mov #imm,Rn */
	IF(0x0C057396u); r15 -= 4; W32(r15, PR); UPD(0x0C057398u, 3);  /* 0C057396 sts.l pr,@-Rn */
	IF(0x0C057398u); ARG0(0x460Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = (u32)((s32)r6 >> 31); else r6 = (u32)((s32)r6 >> ((~s_ & 31) + 1)); }  /* 0C057398 shad Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C05739A tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C057410u, 5); goto L_0C057410; } goto L_0C0573A0; }  /* 0C05739C bt/s */
L_0C0573A0: BLKS(0x0C0573A0u);
	r7 -= r5;  /* 0C0573A0 sub Rm,Rn */
	IF(0x0C0573A2u); T = (s32)r7 >= 0;  /* 0C0573A2 cmp/pz Rn */
	{ u32 c_ = !T; r4 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C057400u, 6); goto L_0C057400; } UPD(0x0C0573A8u, 1); goto L_0C0573A8; }  /* 0C0573A4 bf/s */
L_0C0573A8: BLKS(0x0C0573A8u);
	IF(0x0C0573A8u); T = (s32)r6 >= 0;  /* 0C0573A8 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0573F0u, 4); goto L_0C0573F0; } UPD(0x0C0573AEu, 1); goto L_0C0573AE; }  /* 0C0573AA bf/s */
L_0C0573AE: BLKS(0x0C0573AEu);
	r0 = 0xC0AFF74u; UPD(0x0C0573B0u, 1);  /* 0C0573AE mov.l @(disp,pc),Rn */
	IF(0x0C0573B0u); { u32 t_ = r0; PR = 0x0C0573B4u; IF(0x0C0573B2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFF74, 0x0C0AFF74u, 0x0C0573B4u); }  /* 0C0573B0 jsr @Rn */
L_0C0573B4: BLKS(0x0C0573B4u);
	r0 = r0 & 0xFFFF;  /* 0C0573B4 extu.w Rm,Rn */
	r2 = 0xC22C878u; UPD(0x0C0573B8u, 2);  /* 0C0573B6 mov.l @(disp,pc),Rn */
	IF(0x0C0573B8u); r0 <<= 2;  /* 0C0573B8 shll2 Rn */
	IF(0x0C0573BAu); T = (s32)r7 >= 0;  /* 0C0573BA cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C0573BEu); r0 = R32(r0 + r2); /* slot mov.l @(r0,Rm),Rn */ if (c_) { UPD(0x0C0573E0u, 5); goto L_0C0573E0; } UPD(0x0C0573C0u, 1); goto L_0C0573C0; }  /* 0C0573BC bf/s */
L_0C0573C0: BLKS(0x0C0573C0u);
	IF(0x0C0573C0u); T = (s32)r6 >= 0;  /* 0C0573C0 cmp/pz Rn */
	if (!T) { UPD(0x0C0573D0u, 4); goto L_0C0573D0; }  /* 0C0573C2 bf */
L_0C0573C4: BLKS(0x0C0573C4u);
	r15 = r14;  /* 0C0573C4 mov Rm,Rn */
	IF(0x0C0573C6u); PR = R32(r15); r15 += 4; UPD(0x0C0573C8u, 2);  /* 0C0573C6 lds.l @Rn+,pr */
	IF(0x0C0573C8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0573C8 rts */
L_0C0573D0: BLKS(0x0C0573D0u);
	r6 = 0x100u; UPD(0x0C0573D2u, 1);  /* 0C0573D0 mov.w @(disp,pc),Rn */
	r5 = 0x1FFu; UPD(0x0C0573D4u, 1);  /* 0C0573D2 mov.w @(disp,pc),Rn */
	r6 -= r0;  /* 0C0573D4 sub Rm,Rn */
	r0 = r6;  /* 0C0573D6 mov Rm,Rn */
	{ r0 &= r5; /* slot and Rm,Rn */ UPD(0x0C0573C4u, 5); goto L_0C0573C4; }  /* 0C0573D8 bra */
L_0C0573E0: BLKS(0x0C0573E0u);
	r4 = 0x200u; UPD(0x0C0573E2u, 1);  /* 0C0573E0 mov.w @(disp,pc),Rn */
	r3 = 0x1FFu; UPD(0x0C0573E4u, 1);  /* 0C0573E2 mov.w @(disp,pc),Rn */
	r4 -= r0;  /* 0C0573E4 sub Rm,Rn */
	r0 = r4;  /* 0C0573E6 mov Rm,Rn */
	{ r0 &= r3; /* slot and Rm,Rn */ UPD(0x0C0573C0u, 5); goto L_0C0573C0; }  /* 0C0573E8 bra */
L_0C0573F0: BLKS(0x0C0573F0u);
	{ r5 = 0u - r6; /* slot neg Rm,Rn */ UPD(0x0C0573AEu, 3); goto L_0C0573AE; }  /* 0C0573F0 bra */
L_0C057400: BLKS(0x0C057400u);
	{ r4 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0573A8u, 3); goto L_0C0573A8; }  /* 0C057400 bra */
L_0C057410: BLKS(0x0C057410u);
	r0 = 0x80u; UPD(0x0C057412u, 1);  /* 0C057410 mov.w @(disp,pc),Rn */
	T = (s32)r7 > (s32)r5;  /* 0C057412 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0573C4u, 4); goto L_0C0573C4; }  /* 0C057414 bt */
L_0C057416: BLKS(0x0C057416u);
	r0 = 0x180u; UPD(0x0C057418u, 1);  /* 0C057416 mov.w @(disp,pc),Rn */
	{ IF(0x0C05741Au); ; /* slot nop */ UPD(0x0C0573C4u, 3); goto L_0C0573C4; }  /* 0C057418 bra */
}

/* FUN_0c057430 */
void f_0C057430(sh3_t *c)
{
	LOCALS;
L_0C057430: BLKS(0x0C057430u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C057432u, 1);  /* 0C057430 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C057434u, 1);  /* 0C057432 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C057436u, 1);  /* 0C057434 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C057436 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05743Au, 2);  /* 0C057438 mov.l Rm,@-Rn */
	IF(0x0C05743Au); MACL = r9 * r3;  /* 0C05743A mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05743Eu, 3);  /* 0C05743C mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C05743E exts.w Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C057442u, 2);  /* 0C057440 mov.l @(disp,pc),Rn */
	IF(0x0C057442u); r8 = MACL;  /* 0C057442 sts macl,Rn */
	r7 = 0x9Eu; UPD(0x0C057446u, 2);  /* 0C057444 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C057446 add Rm,Rn */
	IF(0x0C057448u); r15 -= 4; W32(r15, PR); UPD(0x0C05744Au, 2);  /* 0C057448 sts.l pr,@-Rn */
	r7 += r8;  /* 0C05744A add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C05744Eu, 2);  /* 0C05744C mov.b @Rm,Rn */
	r3 = 0x1u;  /* 0C05744E mov #imm,Rn */
	r6 = 0x280u; UPD(0x0C057452u, 2);  /* 0C057450 mov.w @(disp,pc),Rn */
	r3 &= r2;  /* 0C057452 and Rm,Rn */
	IF(0x0C057454u); MACL = r3 * r6;  /* 0C057454 mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C057458u, 4);  /* 0C057456 mov.l @(disp,pc),Rn */
	IF(0x0C057458u); r0 = MACL;  /* 0C057458 sts macl,Rn */
	IF(0x0C05745Au); r1 = R32(r0 + r5); UPD(0x0C05745Cu, 2);  /* 0C05745A mov.l @(r0,Rm),Rn */
	r0 = 0x4000000u; UPD(0x0C05745Eu, 1);  /* 0C05745C mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C05745E tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C057468u, 4); goto L_0C057468; } goto L_0C057464; }  /* 0C057460 bf/s */
L_0C057464: BLKS(0x0C057464u);
	r4 = 0x1u;  /* 0C057464 mov #imm,Rn */
	r3 ^= r4;  /* 0C057466 xor Rm,Rn */
	UPD(0x0C057468u, 3);
L_0C057468: BLKS(0x0C057468u);
	r0 = r3 & 0xFF;  /* 0C057468 extu.b Rm,Rn */
	IF(0x0C05746Au); MACL = r0 * r6;  /* 0C05746A mul.l Rm,Rn */
	W8(r7, r3); UPD(0x0C05746Eu, 4);  /* 0C05746C mov.b Rm,@Rn */
	IF(0x0C05746Eu); r2 = MACL;  /* 0C05746E sts macl,Rn */
	r0 = 0xC057390u; UPD(0x0C057472u, 2);  /* 0C057470 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C057472 add Rm,Rn */
	r7 = R32(r2 + 0x14u); UPD(0x0C057476u, 2);  /* 0C057474 mov.l @(disp,Rm),Rn */
	r6 = R32(r2 + 0x10u); UPD(0x0C057478u, 1);  /* 0C057476 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C05747Au, 1);  /* 0C057478 mov.l @(disp,Rm),Rn */
	IF(0x0C05747Au); { u32 t_ = r0; PR = 0x0C05747Eu; r4 = R32(r8 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C05747Eu); }  /* 0C05747A jsr @Rn */
L_0C05747E: BLKS(0x0C05747Eu);
	r3 = (u32)(s32)(s16)r0;  /* 0C05747E exts.w Rm,Rn */
	r7 = 0x86u; UPD(0x0C057482u, 2);  /* 0C057480 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C057482 mov Rm,Rn */
	IF(0x0C057484u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C057486u, 2);  /* 0C057484 mov.w @(r0,Rm),Rn */
	r5 = 0x1FFu; UPD(0x0C057488u, 1);  /* 0C057486 mov.w @(disp,pc),Rn */
	r2 = r6;  /* 0C057488 mov Rm,Rn */
	r2 -= r3;  /* 0C05748A sub Rm,Rn */
	r2 &= r5;  /* 0C05748C and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C05748E tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0574B6u, 7); goto L_0C0574B6; } goto L_0C057494; }  /* 0C057490 bt/s */
L_0C057494: BLKS(0x0C057494u);
	r8 = 0x100u; UPD(0x0C057496u, 2);  /* 0C057494 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C057496 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0574A2u, 4); goto L_0C0574A2; } goto L_0C05749C; }  /* 0C057498 bf/s */
L_0C05749C: BLKS(0x0C05749Cu);
	r4 = 0x200u; UPD(0x0C05749Eu, 2);  /* 0C05749C mov.w @(disp,pc),Rn */
	r4 -= r2;  /* 0C05749E sub Rm,Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0574A0 exts.w Rm,Rn */
	UPD(0x0C0574A2u, 2);
L_0C0574A2: BLKS(0x0C0574A2u);
	T = (s32)r1 >= (s32)r10;  /* 0C0574A2 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0574D0u, 4); goto L_0C0574D0; }  /* 0C0574A4 bt */
L_0C0574A6: BLKS(0x0C0574A6u);
	r5 = 0xB4u; UPD(0x0C0574A8u, 1);  /* 0C0574A6 mov.w @(disp,pc),Rn */
	IF(0x0C0574A8u); MACL = r9 * r5;  /* 0C0574A8 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C0574ACu, 3);  /* 0C0574AA mov.l @(disp,pc),Rn */
	r0 = 0x86u; UPD(0x0C0574AEu, 1);  /* 0C0574AC mov.w @(disp,pc),Rn */
	IF(0x0C0574AEu); r9 = MACL;  /* 0C0574AE sts macl,Rn */
	r10 += r9;  /* 0C0574B0 add Rm,Rn */
	IF(0x0C0574B2u); W16(r0 + r10, r3); UPD(0x0C0574B4u, 3);  /* 0C0574B2 mov.w Rm,@(r0,Rn) */
	r0 = 0x1u;  /* 0C0574B4 mov #imm,Rn */
	UPD(0x0C0574B6u, 1);
L_0C0574B6: BLKS(0x0C0574B6u);
	r15 = r14;  /* 0C0574B6 mov Rm,Rn */
	IF(0x0C0574B8u); PR = R32(r15); r15 += 4; UPD(0x0C0574BAu, 2);  /* 0C0574B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0574BCu, 1);  /* 0C0574BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0574BEu, 1);  /* 0C0574BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0574C0u, 1);  /* 0C0574BE mov.l @Rm+,Rn */
	IF(0x0C0574C0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0574C0 rts */
L_0C0574D0: BLKS(0x0C0574D0u);
	r1 = 0x100u; UPD(0x0C0574D2u, 1);  /* 0C0574D0 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r1;  /* 0C0574D2 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0574F0u, 4); goto L_0C0574F0; }  /* 0C0574D4 bf */
L_0C0574D6: BLKS(0x0C0574D6u);
	r1 += 0xFFFFFFB4u;  /* 0C0574D6 add #imm,Rn */
	IF(0x0C0574D8u); MACL = r9 * r1;  /* 0C0574D8 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0574DCu, 4);  /* 0C0574DA mov.l @(disp,pc),Rn */
	IF(0x0C0574DCu); r3 = MACL;  /* 0C0574DC sts macl,Rn */
	r7 = 0x86u; UPD(0x0C0574E0u, 2);  /* 0C0574DE mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C0574E0 add Rm,Rn */
	r3 += r7;  /* 0C0574E2 add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r3); UPD(0x0C0574E6u, 3);  /* 0C0574E4 mov.w @Rm,Rn */
	r10 += r6;  /* 0C0574E6 add Rm,Rn */
	W16(r3, r10); UPD(0x0C0574EAu, 2);  /* 0C0574E8 mov.w Rm,@Rn */
L_0C0574EA: BLKS(0x0C0574EAu);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0574B6u, 3); goto L_0C0574B6; }  /* 0C0574EA bra */
L_0C0574F0: BLKS(0x0C0574F0u);
	r5 = 0xB4u; UPD(0x0C0574F2u, 1);  /* 0C0574F0 mov.w @(disp,pc),Rn */
	IF(0x0C0574F2u); MACL = r9 * r5;  /* 0C0574F2 mul.l Rm,Rn */
	r4 = 0x86u; UPD(0x0C0574F6u, 3);  /* 0C0574F4 mov.w @(disp,pc),Rn */
	r9 = 0xC26CD40u; UPD(0x0C0574F8u, 1);  /* 0C0574F6 mov.l @(disp,pc),Rn */
	IF(0x0C0574F8u); r0 = MACL;  /* 0C0574F8 sts macl,Rn */
	r0 += r9;  /* 0C0574FA add Rm,Rn */
	r0 += r4;  /* 0C0574FC add Rm,Rn */
	r8 = (u32)(s32)(s16)R16(r0); UPD(0x0C057500u, 4);  /* 0C0574FE mov.w @Rm,Rn */
	r8 -= r10;  /* 0C057500 sub Rm,Rn */
	{ W16(r0, r8); /* slot mov.w Rm,@Rn */ UPD(0x0C0574EAu, 4); goto L_0C0574EA; }  /* 0C057502 bra */
}

/* FUN_0c057530 */
void f_0C057530(sh3_t *c)
{
	LOCALS;
L_0C057530: BLKS(0x0C057530u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C057532u, 1);  /* 0C057530 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C057534u, 1);  /* 0C057532 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C057536u, 1);  /* 0C057534 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C057536 exts.w Rm,Rn */
	IF(0x0C057538u); MACL = r9 * r3;  /* 0C057538 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C05753Cu, 4);  /* 0C05753A mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C05753Eu, 1);  /* 0C05753C mov.l @(disp,pc),Rn */
	IF(0x0C05753Eu); r8 = MACL;  /* 0C05753E sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C057542u, 2);  /* 0C057540 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C057542 add Rm,Rn */
	r0 = 0xC057390u; UPD(0x0C057546u, 2);  /* 0C057544 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C057546 exts.w Rm,Rn */
	IF(0x0C057548u); r15 -= 4; W32(r15, PR); UPD(0x0C05754Au, 2);  /* 0C057548 sts.l pr,@-Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C05754Cu, 1);  /* 0C05754A mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C05754C mov Rm,Rn */
	IF(0x0C05754Eu); { u32 t_ = r0; PR = 0x0C057552u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C057552u); }  /* 0C05754E jsr @Rn */
L_0C057552: BLKS(0x0C057552u);
	r3 = (u32)(s32)(s16)r0;  /* 0C057552 exts.w Rm,Rn */
	r2 = 0x86u; UPD(0x0C057556u, 2);  /* 0C057554 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C057556 mov Rm,Rn */
	IF(0x0C057558u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C05755Au, 2);  /* 0C057558 mov.w @(r0,Rm),Rn */
	r0 = 0x1FFu; UPD(0x0C05755Cu, 1);  /* 0C05755A mov.w @(disp,pc),Rn */
	r2 = r4;  /* 0C05755C mov Rm,Rn */
	r2 -= r3;  /* 0C05755E sub Rm,Rn */
	r2 &= r0;  /* 0C057560 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C057562 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05758Au, 7); goto L_0C05758A; } goto L_0C057568; }  /* 0C057564 bt/s */
L_0C057568: BLKS(0x0C057568u);
	r5 = 0x100u; UPD(0x0C05756Au, 2);  /* 0C057568 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C05756A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C057576u, 4); goto L_0C057576; } goto L_0C057570; }  /* 0C05756C bf/s */
L_0C057570: BLKS(0x0C057570u);
	r6 = 0x200u; UPD(0x0C057572u, 2);  /* 0C057570 mov.w @(disp,pc),Rn */
	r6 -= r2;  /* 0C057572 sub Rm,Rn */
	r1 = (u32)(s32)(s16)r6;  /* 0C057574 exts.w Rm,Rn */
	UPD(0x0C057576u, 2);
L_0C057576: BLKS(0x0C057576u);
	T = (s32)r1 >= (s32)r10;  /* 0C057576 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0575A0u, 4); goto L_0C0575A0; }  /* 0C057578 bt */
L_0C05757A: BLKS(0x0C05757Au);
	r10 = 0xB4u; UPD(0x0C05757Cu, 1);  /* 0C05757A mov.w @(disp,pc),Rn */
	IF(0x0C05757Cu); MACL = r9 * r10;  /* 0C05757C mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C057580u, 3);  /* 0C05757E mov.l @(disp,pc),Rn */
	r0 = 0x86u; UPD(0x0C057582u, 1);  /* 0C057580 mov.w @(disp,pc),Rn */
	IF(0x0C057582u); r8 = MACL;  /* 0C057582 sts macl,Rn */
	r7 += r8;  /* 0C057584 add Rm,Rn */
	IF(0x0C057586u); W16(r0 + r7, r3); UPD(0x0C057588u, 3);  /* 0C057586 mov.w Rm,@(r0,Rn) */
	r0 = 0x1u;  /* 0C057588 mov #imm,Rn */
	UPD(0x0C05758Au, 1);
L_0C05758A: BLKS(0x0C05758Au);
	r15 = r14;  /* 0C05758A mov Rm,Rn */
	IF(0x0C05758Cu); PR = R32(r15); r15 += 4; UPD(0x0C05758Eu, 2);  /* 0C05758C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C057590u, 1);  /* 0C05758E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C057592u, 1);  /* 0C057590 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C057594u, 1);  /* 0C057592 mov.l @Rm+,Rn */
	IF(0x0C057594u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C057594 rts */
L_0C0575A0: BLKS(0x0C0575A0u);
	r1 = 0x100u; UPD(0x0C0575A2u, 1);  /* 0C0575A0 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r1;  /* 0C0575A2 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0575C0u, 4); goto L_0C0575C0; }  /* 0C0575A4 bf */
L_0C0575A6: BLKS(0x0C0575A6u);
	r1 += 0xFFFFFFB4u;  /* 0C0575A6 add #imm,Rn */
	IF(0x0C0575A8u); MACL = r9 * r1;  /* 0C0575A8 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0575ACu, 4);  /* 0C0575AA mov.l @(disp,pc),Rn */
	IF(0x0C0575ACu); r9 = MACL;  /* 0C0575AC sts macl,Rn */
	r2 = 0x86u; UPD(0x0C0575B0u, 2);  /* 0C0575AE mov.w @(disp,pc),Rn */
	r9 += r0;  /* 0C0575B0 add Rm,Rn */
	r9 += r2;  /* 0C0575B2 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0575B6u, 3);  /* 0C0575B4 mov.w @Rm,Rn */
	r10 += r4;  /* 0C0575B6 add Rm,Rn */
	W16(r9, r10); UPD(0x0C0575BAu, 2);  /* 0C0575B8 mov.w Rm,@Rn */
L_0C0575BA: BLKS(0x0C0575BAu);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C05758Au, 3); goto L_0C05758A; }  /* 0C0575BA bra */
L_0C0575C0: BLKS(0x0C0575C0u);
	r8 = 0xB4u; UPD(0x0C0575C2u, 1);  /* 0C0575C0 mov.w @(disp,pc),Rn */
	IF(0x0C0575C2u); MACL = r9 * r8;  /* 0C0575C2 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0575C6u, 3);  /* 0C0575C4 mov.l @(disp,pc),Rn */
	IF(0x0C0575C6u); r3 = MACL;  /* 0C0575C6 sts macl,Rn */
	r6 = 0x86u; UPD(0x0C0575CAu, 2);  /* 0C0575C8 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C0575CA add Rm,Rn */
	r3 += r6;  /* 0C0575CC add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r3); UPD(0x0C0575D0u, 3);  /* 0C0575CE mov.w @Rm,Rn */
	r5 -= r10;  /* 0C0575D0 sub Rm,Rn */
	{ W16(r3, r5); /* slot mov.w Rm,@Rn */ UPD(0x0C0575BAu, 4); goto L_0C0575BA; }  /* 0C0575D2 bra */
}

/* FUN_0c057600 */
void f_0C057600(sh3_t *c)
{
	LOCALS;
L_0C057600: BLKS(0x0C057600u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C057602u, 1);  /* 0C057600 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C057604u, 1);  /* 0C057602 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C057604 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C057608u, 2);  /* 0C057606 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C057608 exts.w Rm,Rn */
	r0 = 0xC0A03F0u; UPD(0x0C05760Cu, 2);  /* 0C05760A mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C05760C mov Rm,Rn */
	IF(0x0C05760Eu); r15 -= 4; W32(r15, PR); UPD(0x0C057610u, 2);  /* 0C05760E sts.l pr,@-Rn */
	IF(0x0C057610u); { u32 t_ = r0; PR = 0x0C057614u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C057614u); }  /* 0C057610 jsr @Rn */
L_0C057614: BLKS(0x0C057614u);
	r0 = (u32)(s32)(s16)r0;  /* 0C057614 exts.w Rm,Rn */
	IF(0x0C057616u); T = (s32)r0 >= 0;  /* 0C057616 cmp/pz Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05766Eu, 5); goto L_0C05766E; } goto L_0C05761C; }  /* 0C057618 bf/s */
L_0C05761C: BLKS(0x0C05761Cu);
	r5 = 0xB4u; UPD(0x0C05761Eu, 2);  /* 0C05761C mov.w @(disp,pc),Rn */
	r7 = 0xFFFFFFFAu;  /* 0C05761E mov #imm,Rn */
	IF(0x0C057620u); MACL = r0 * r5;  /* 0C057620 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C057624u, 4);  /* 0C057622 mov.l @(disp,pc),Rn */
	IF(0x0C057624u); r0 = MACL;  /* 0C057624 sts macl,Rn */
	IF(0x0C057626u); MACL = r8 * r5;  /* 0C057626 mul.l Rm,Rn */
	r4 = 0x84u; UPD(0x0C05762Au, 4);  /* 0C057628 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C05762A add Rm,Rn */
	r0 += r4;  /* 0C05762C add Rm,Rn */
	IF(0x0C05762Eu); r3 = MACL;  /* 0C05762E sts macl,Rn */
	r0 += 0x2u;  /* 0C057630 add #imm,Rn */
	r3 += r2;  /* 0C057632 add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r0); UPD(0x0C057636u, 6);  /* 0C057634 mov.w @Rm,Rn */
	r3 += r4;  /* 0C057636 add Rm,Rn */
	r3 += 0x2u;  /* 0C057638 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C05763Cu, 3);  /* 0C05763A mov.w @Rm,Rn */
	IF(0x0C05763Cu); ARG0(0x467Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = (u32)((s32)r6 >> 31); else r6 = (u32)((s32)r6 >> ((~s_ & 31) + 1)); }  /* 0C05763C shad Rm,Rn */
	r2 = r0;  /* 0C05763E mov Rm,Rn */
	r0 = 0x1FFu; UPD(0x0C057642u, 3);  /* 0C057640 mov.w @(disp,pc),Rn */
	r2 -= r6;  /* 0C057642 sub Rm,Rn */
	r2 &= r0;  /* 0C057644 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C057646 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05766Eu, 6); goto L_0C05766E; } goto L_0C05764C; }  /* 0C057648 bt/s */
L_0C05764C: BLKS(0x0C05764Cu);
	r3 = 0x100u; UPD(0x0C05764Eu, 2);  /* 0C05764C mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r3;  /* 0C05764E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C05765Au, 4); goto L_0C05765A; } goto L_0C057654; }  /* 0C057650 bf/s */
L_0C057654: BLKS(0x0C057654u);
	r4 = 0x200u; UPD(0x0C057656u, 2);  /* 0C057654 mov.w @(disp,pc),Rn */
	r4 -= r2;  /* 0C057656 sub Rm,Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C057658 exts.w Rm,Rn */
	UPD(0x0C05765Au, 2);
L_0C05765A: BLKS(0x0C05765Au);
	T = (s32)r1 >= (s32)r9;  /* 0C05765A cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057680u, 4); goto L_0C057680; } goto L_0C057660; }  /* 0C05765C bt/s */
L_0C057660: BLKS(0x0C057660u);
	r2 = 0xB4u; UPD(0x0C057662u, 2);  /* 0C057660 mov.w @(disp,pc),Rn */
	IF(0x0C057662u); MACL = r8 * r2;  /* 0C057662 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C057666u, 3);  /* 0C057664 mov.l @(disp,pc),Rn */
	IF(0x0C057666u); r8 = MACL;  /* 0C057666 sts macl,Rn */
	r0 = 0x86u; UPD(0x0C05766Au, 2);  /* 0C057668 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C05766A add Rm,Rn */
	IF(0x0C05766Cu); W16(r0 + r9, r6); UPD(0x0C05766Eu, 2);  /* 0C05766C mov.w Rm,@(r0,Rn) */
L_0C05766E: BLKS(0x0C05766Eu);
	r0 = r1;  /* 0C05766E mov Rm,Rn */
	r15 = r14;  /* 0C057670 mov Rm,Rn */
	IF(0x0C057672u); PR = R32(r15); r15 += 4; UPD(0x0C057674u, 3);  /* 0C057672 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C057676u, 1);  /* 0C057674 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C057678u, 1);  /* 0C057676 mov.l @Rm+,Rn */
	IF(0x0C057678u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C057678 rts */
L_0C057680: BLKS(0x0C057680u);
	r1 = 0x100u; UPD(0x0C057682u, 1);  /* 0C057680 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r1;  /* 0C057682 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0576A0u, 4); goto L_0C0576A0; }  /* 0C057684 bf */
L_0C057686: BLKS(0x0C057686u);
	r1 += 0xFFFFFFB4u;  /* 0C057686 add #imm,Rn */
	IF(0x0C057688u); MACL = r8 * r1;  /* 0C057688 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C05768Cu, 4);  /* 0C05768A mov.l @(disp,pc),Rn */
	IF(0x0C05768Cu); r6 = MACL;  /* 0C05768C sts macl,Rn */
	r7 = 0x86u; UPD(0x0C057690u, 2);  /* 0C05768E mov.w @(disp,pc),Rn */
	r6 += r0;  /* 0C057690 add Rm,Rn */
	r6 += r7;  /* 0C057692 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C057696u, 3);  /* 0C057694 mov.w @Rm,Rn */
	r9 += r5;  /* 0C057696 add Rm,Rn */
	W16(r6, r9); UPD(0x0C05769Au, 2);  /* 0C057698 mov.w Rm,@Rn */
L_0C05769A: BLKS(0x0C05769Au);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C05766Eu, 3); goto L_0C05766E; }  /* 0C05769A bra */
L_0C0576A0: BLKS(0x0C0576A0u);
	r6 = 0xB4u; UPD(0x0C0576A2u, 1);  /* 0C0576A0 mov.w @(disp,pc),Rn */
	IF(0x0C0576A2u); MACL = r8 * r6;  /* 0C0576A2 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0576A6u, 3);  /* 0C0576A4 mov.l @(disp,pc),Rn */
	IF(0x0C0576A6u); r3 = MACL;  /* 0C0576A6 sts macl,Rn */
	r8 = 0x86u; UPD(0x0C0576AAu, 2);  /* 0C0576A8 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C0576AA add Rm,Rn */
	r3 += r8;  /* 0C0576AC add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C0576B0u, 3);  /* 0C0576AE mov.w @Rm,Rn */
	r4 -= r9;  /* 0C0576B0 sub Rm,Rn */
	{ W16(r3, r4); /* slot mov.w Rm,@Rn */ UPD(0x0C05769Au, 4); goto L_0C05769A; }  /* 0C0576B2 bra */
}

/* FUN_0c0576e0 */
void f_0C0576E0(sh3_t *c)
{
	LOCALS;
L_0C0576E0: BLKS(0x0C0576E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0576E2u, 1);  /* 0C0576E0 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C0576E2 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0576E6u, 2);  /* 0C0576E4 mov.l Rm,@-Rn */
	r8 = 0x20u;  /* 0C0576E6 mov #imm,Rn */
	r0 = 0xC3929B8u; UPD(0x0C0576EAu, 2);  /* 0C0576E8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0576EA mov Rm,Rn */
	r2 = 0xC275DD0u; UPD(0x0C0576EEu, 2);  /* 0C0576EC mov.l @(disp,pc),Rn */
	W8(r0, r4); UPD(0x0C0576F0u, 1);  /* 0C0576EE mov.b Rm,@Rn */
	r7 = 0xC392AFCu; UPD(0x0C0576F2u, 1);  /* 0C0576F0 mov.l @(disp,pc),Rn */
	r0 = 0xC3929C4u; UPD(0x0C0576F4u, 1);  /* 0C0576F2 mov.l @(disp,pc),Rn */
	W8(r2, r4); UPD(0x0C0576F6u, 1);  /* 0C0576F4 mov.b Rm,@Rn */
	r5 = 0xC2177F4u; UPD(0x0C0576F8u, 1);  /* 0C0576F6 mov.l @(disp,pc),Rn */
	r6 = 0xC21CA14u; UPD(0x0C0576FAu, 1);  /* 0C0576F8 mov.l @(disp,pc),Rn */
	r2 = 0xC220C28u; UPD(0x0C0576FCu, 1);  /* 0C0576FA mov.l @(disp,pc),Rn */
	W8(r7, r4); UPD(0x0C0576FEu, 1);  /* 0C0576FC mov.b Rm,@Rn */
	W8(r0, r4); UPD(0x0C057700u, 1);  /* 0C0576FE mov.b Rm,@Rn */
	W8(r5, r4); UPD(0x0C057702u, 1);  /* 0C057700 mov.b Rm,@Rn */
	r3 = 0xC2179F8u; UPD(0x0C057704u, 1);  /* 0C057702 mov.l @(disp,pc),Rn */
	r7 = 0xC286277u; UPD(0x0C057706u, 1);  /* 0C057704 mov.l @(disp,pc),Rn */
	r1 = 0x400u; UPD(0x0C057708u, 1);  /* 0C057706 mov.w @(disp,pc),Rn */
	W8(r6, r4); UPD(0x0C05770Au, 1);  /* 0C057708 mov.b Rm,@Rn */
	W8(r2, r4); UPD(0x0C05770Cu, 1);  /* 0C05770A mov.b Rm,@Rn */
	r6 = 0x5u;  /* 0C05770C mov #imm,Rn */
	r0 = 0xC284EB8u; UPD(0x0C057710u, 2);  /* 0C05770E mov.l @(disp,pc),Rn */
	r5 = 0xC392E12u; UPD(0x0C057712u, 1);  /* 0C057710 mov.l @(disp,pc),Rn */
	W8(r3, r4); UPD(0x0C057714u, 1);  /* 0C057712 mov.b Rm,@Rn */
	W8(r7, r8); UPD(0x0C057716u, 1);  /* 0C057714 mov.b Rm,@Rn */
	r3 = 0x7u;  /* 0C057716 mov #imm,Rn */
	W16(r0, r1); UPD(0x0C05771Au, 2);  /* 0C057718 mov.w Rm,@Rn */
	r7 = 0x0u;  /* 0C05771A mov #imm,Rn */
	r2 = 0xC26CAE0u; UPD(0x0C05771Eu, 2);  /* 0C05771C mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C05771E mov #imm,Rn */
	W16(r5, r6); UPD(0x0C057722u, 2);  /* 0C057720 mov.w Rm,@Rn */
L_0C057722: BLKS(0x0C057722u);
	W32(r2, r7); UPD(0x0C057724u, 1);  /* 0C057722 mov.l Rm,@Rn */
	r1 += 0x1u;  /* 0C057724 add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C057726 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C057728 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C057722u, 6); goto L_0C057722; } goto L_0C05772E; }  /* 0C05772A bf/s */
L_0C05772E: BLKS(0x0C05772Eu);
	r5 = 0xC286068u; UPD(0x0C057730u, 2);  /* 0C05772E mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C057730 mov #imm,Rn */
	r6 = 0xC21CA2Cu; UPD(0x0C057734u, 2);  /* 0C057732 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C057734 mov #imm,Rn */
	r7 = 0xFFu; UPD(0x0C057738u, 2);  /* 0C057736 mov.w @(disp,pc),Rn */
	r3 = 0x400u; UPD(0x0C05773Au, 1);  /* 0C057738 mov.w @(disp,pc),Rn */
	IF(0x0C05773Au); ;  /* 0C05773A nop */
	UPD(0x0C05773Cu, 1);
L_0C05773C: BLKS(0x0C05773Cu);
	r0 = r2;  /* 0C05773C mov Rm,Rn */
	r1 += 0x1u;  /* 0C05773E add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C057740 exts.w Rm,Rn */
	IF(0x0C057742u); W16(r0 + r6, r3); UPD(0x0C057744u, 4);  /* 0C057742 mov.w Rm,@(r0,Rn) */
	r2 += 0x2u;  /* 0C057744 add #imm,Rn */
	T = (s32)r1 > (s32)r7;  /* 0C057746 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C05774Au); W16(r0 + r5, r3); /* slot mov.w Rm,@(r0,Rn) */ if (c_) { UPD(0x0C05773Cu, 5); goto L_0C05773C; } UPD(0x0C05774Cu, 1); goto L_0C05774C; }  /* 0C057748 bf/s */
L_0C05774C: BLKS(0x0C05774Cu);
	r2 = 0xC2852C8u; UPD(0x0C05774Eu, 1);  /* 0C05774C mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C05774E mov #imm,Rn */
	r7 = 0x400u; UPD(0x0C057752u, 2);  /* 0C057750 mov.w @(disp,pc),Rn */
	r3 = 0x7u;  /* 0C057752 mov #imm,Rn */
	UPD(0x0C057754u, 1);
L_0C057754: BLKS(0x0C057754u);
	W16(r2, r7); UPD(0x0C057756u, 1);  /* 0C057754 mov.w Rm,@Rn */
	r1 += 0x1u;  /* 0C057756 add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C057758 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C05775A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C057754u, 6); goto L_0C057754; } goto L_0C057760; }  /* 0C05775C bf/s */
L_0C057760: BLKS(0x0C057760u);
	r7 = 0xC393070u; UPD(0x0C057762u, 2);  /* 0C057760 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C057762 mov #imm,Rn */
	r3 = 0x0u;  /* 0C057764 mov #imm,Rn */
	r2 = 0x7u;  /* 0C057766 mov #imm,Rn */
	r0 = r7;  /* 0C057768 mov Rm,Rn */
	UPD(0x0C05776Au, 4);
L_0C05776A: BLKS(0x0C05776Au);
	IF(0x0C05776Au); W8(r0 + r1, r3); UPD(0x0C05776Cu, 1);  /* 0C05776A mov.b Rm,@(r0,Rn) */
	r1 += 0x1u;  /* 0C05776C add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C05776E exts.w Rm,Rn */
	T = (s32)r1 > (s32)r2;  /* 0C057770 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C05776Au, 6); goto L_0C05776A; }  /* 0C057772 bf */
L_0C057774: BLKS(0x0C057774u);
	r0 = 0xFFFFFFFFu;  /* 0C057774 mov #imm,Rn */
	r2 = 0xC392D7Cu; UPD(0x0C057778u, 2);  /* 0C057776 mov.l @(disp,pc),Rn */
	r7 = R32(r2); UPD(0x0C05777Au, 1);  /* 0C057778 mov.l @Rm,Rn */
	r6 = 0x12345678u; UPD(0x0C05777Cu, 1);  /* 0C05777A mov.l @(disp,pc),Rn */
	r3 = 0xC3929ACu; UPD(0x0C05777Eu, 1);  /* 0C05777C mov.l @(disp,pc),Rn */
	T = r7 == r6;  /* 0C05777E cmp/eq Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r3); UPD(0x0C057782u, 2);  /* 0C057780 mov.w @Rm,Rn */
	{ u32 t_ = 0u - r0, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C057782 negc Rm,Rn */
	r1 = 0x377u; UPD(0x0C057786u, 2);  /* 0C057784 mov.w @(disp,pc),Rn */
	T = r5 == r1;  /* 0C057786 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r0, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r8 = r_; }  /* 0C057788 negc Rm,Rn */
	r4 |= r8;  /* 0C05778A or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C05778C tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057830u, 7); goto L_0C057830; } goto L_0C057792; }  /* 0C05778E bt/s */
L_0C057792: BLKS(0x0C057792u);
	r8 = 0xC38BC64u; UPD(0x0C057794u, 2);  /* 0C057792 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C057794 mov #imm,Rn */
	r6 = 0x400u; UPD(0x0C057798u, 2);  /* 0C057796 mov.w @(disp,pc),Rn */
	r7 = 0xFu;  /* 0C057798 mov #imm,Rn */
	r4 = 0x0u;  /* 0C05779A mov #imm,Rn */
	r0 = 0x1Fu;  /* 0C05779C mov #imm,Rn */
	UPD(0x0C05779Eu, 3);
L_0C05779E: BLKS(0x0C05779Eu);
	r2 = r4;  /* 0C05779E mov Rm,Rn */
	r2 += r2;  /* 0C0577A0 add Rm,Rn */
	r3 = 0x0u;  /* 0C0577A2 mov #imm,Rn */
	r2 += r8;  /* 0C0577A4 add Rm,Rn */
	UPD(0x0C0577A6u, 4);
L_0C0577A6: BLKS(0x0C0577A6u);
	r1 = r3;  /* 0C0577A6 mov Rm,Rn */
	W16(r2, r6); UPD(0x0C0577AAu, 2);  /* 0C0577A8 mov.w Rm,@Rn */
	r1 += 0x1u;  /* 0C0577AA add #imm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C0577AC exts.w Rm,Rn */
	T = (s32)r3 > (s32)r7;  /* 0C0577AE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0577A6u, 6); goto L_0C0577A6; } goto L_0C0577B4; }  /* 0C0577B0 bf/s */
L_0C0577B4: BLKS(0x0C0577B4u);
	r3 = r5;  /* 0C0577B4 mov Rm,Rn */
	r3 += 0x1u;  /* 0C0577B6 add #imm,Rn */
	r5 = (u32)(s32)(s16)r3;  /* 0C0577B8 exts.w Rm,Rn */
	T = (s32)r5 > (s32)r0;  /* 0C0577BA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05779Eu, 8); goto L_0C05779E; } goto L_0C0577C0; }  /* 0C0577BC bf/s */
L_0C0577C0: BLKS(0x0C0577C0u);
	r5 = 0xC284EC0u; UPD(0x0C0577C2u, 2);  /* 0C0577C0 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0577C2 mov #imm,Rn */
	r7 = 0xC220C64u; UPD(0x0C0577C6u, 2);  /* 0C0577C4 mov.l @(disp,pc),Rn */
	r6 = 0x20u;  /* 0C0577C6 mov #imm,Rn */
	r2 = 0x3FFu; UPD(0x0C0577CAu, 2);  /* 0C0577C8 mov.w @(disp,pc),Rn */
	r3 = 0x10u;  /* 0C0577CA mov #imm,Rn */
	UPD(0x0C0577CCu, 1);
L_0C0577CC: BLKS(0x0C0577CCu);
	r0 = r5;  /* 0C0577CC mov Rm,Rn */
	IF(0x0C0577CEu); W8(r0 + r1, r6); UPD(0x0C0577D0u, 2);  /* 0C0577CE mov.b Rm,@(r0,Rn) */
	r0 = r7;  /* 0C0577D0 mov Rm,Rn */
	IF(0x0C0577D2u); W8(r0 + r1, r3); UPD(0x0C0577D4u, 2);  /* 0C0577D2 mov.b Rm,@(r0,Rn) */
	r1 += 0x1u;  /* 0C0577D4 add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C0577D6 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r2;  /* 0C0577D8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0577CCu, 6); goto L_0C0577CC; }  /* 0C0577DA bf */
L_0C0577DC: BLKS(0x0C0577DCu);
	r1 = 0x12345678u; UPD(0x0C0577DEu, 1);  /* 0C0577DC mov.l @(disp,pc),Rn */
	r0 = 0xC392D7Cu; UPD(0x0C0577E0u, 1);  /* 0C0577DE mov.l @(disp,pc),Rn */
	r8 = 0x377u; UPD(0x0C0577E2u, 1);  /* 0C0577E0 mov.w @(disp,pc),Rn */
	r4 = 0xC3929ACu; UPD(0x0C0577E4u, 1);  /* 0C0577E2 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C0577E6u, 1);  /* 0C0577E4 mov.l Rm,@Rn */
	W16(r4, r8); UPD(0x0C0577E8u, 1);  /* 0C0577E6 mov.w Rm,@Rn */
L_0C0577E8: BLKS(0x0C0577E8u);
	r6 = 0x401u; UPD(0x0C0577EAu, 1);  /* 0C0577E8 mov.w @(disp,pc),Rn */
	r5 = 0xC38BCA4u; UPD(0x0C0577ECu, 1);  /* 0C0577EA mov.l @(disp,pc),Rn */
	W16(r5, r6); UPD(0x0C0577EEu, 1);  /* 0C0577EC mov.w Rm,@Rn */
	r5 += 0xFFFFFFE0u;  /* 0C0577EE add #imm,Rn */
	W16(r5, r6); UPD(0x0C0577F2u, 2);  /* 0C0577F0 mov.w Rm,@Rn */
	r5 += 0xFFFFFFE0u;  /* 0C0577F2 add #imm,Rn */
	W16(r5, r6); UPD(0x0C0577F6u, 2);  /* 0C0577F4 mov.w Rm,@Rn */
	r4 = r5;  /* 0C0577F6 mov Rm,Rn */
	r7 = r5;  /* 0C0577F8 mov Rm,Rn */
	r5 += 0x42u;  /* 0C0577FA add #imm,Rn */
	W16(r5, r6); UPD(0x0C0577FEu, 4);  /* 0C0577FC mov.w Rm,@Rn */
	r4 += 0x2u;  /* 0C0577FE add #imm,Rn */
	r0 = 0xA0u; UPD(0x0C057802u, 2);  /* 0C057800 mov.w @(disp,pc),Rn */
	r5 += 0xFFFFFFBEu;  /* 0C057802 add #imm,Rn */
	IF(0x0C057804u); W16(r0 + r5, r6); UPD(0x0C057806u, 2);  /* 0C057804 mov.w Rm,@(r0,Rn) */
	r7 += 0x22u;  /* 0C057806 add #imm,Rn */
	r0 += 0xFFFFFFE0u;  /* 0C057808 add #imm,Rn */
	IF(0x0C05780Au); W16(r0 + r5, r6); UPD(0x0C05780Cu, 3);  /* 0C05780A mov.w Rm,@(r0,Rn) */
	r5 += 0x60u;  /* 0C05780C add #imm,Rn */
	W16(r5, r6); UPD(0x0C057810u, 2);  /* 0C05780E mov.w Rm,@Rn */
	r0 += 0x22u;  /* 0C057810 add #imm,Rn */
	r5 += 0xFFFFFFA0u;  /* 0C057812 add #imm,Rn */
	IF(0x0C057814u); W16(r0 + r5, r6); UPD(0x0C057816u, 3);  /* 0C057814 mov.w Rm,@(r0,Rn) */
	r0 += 0xFFFFFFE0u;  /* 0C057816 add #imm,Rn */
	IF(0x0C057818u); W16(r0 + r5, r6); UPD(0x0C05781Au, 2);  /* 0C057818 mov.w Rm,@(r0,Rn) */
	r5 += 0x62u;  /* 0C05781A add #imm,Rn */
	W16(r7, r6); UPD(0x0C05781Eu, 2);  /* 0C05781C mov.w Rm,@Rn */
	W16(r4, r6); UPD(0x0C057820u, 1);  /* 0C05781E mov.w Rm,@Rn */
	W16(r5, r6); UPD(0x0C057822u, 1);  /* 0C057820 mov.w Rm,@Rn */
	r15 = r14;  /* 0C057822 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C057826u, 2);  /* 0C057824 mov.l @Rm+,Rn */
	IF(0x0C057826u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C057826 rts */
L_0C057830: BLKS(0x0C057830u);
	r6 = 0xC000u; UPD(0x0C057832u, 1);  /* 0C057830 mov.l @(disp,pc),Rn */
	r8 = 0xC38BC64u; UPD(0x0C057834u, 1);  /* 0C057832 mov.l @(disp,pc),Rn */
	r7 = 0xFu;  /* 0C057834 mov #imm,Rn */
	r0 = 0x400u; UPD(0x0C057838u, 2);  /* 0C057836 mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C057838 mov #imm,Rn */
	UPD(0x0C05783Au, 1);
L_0C05783A: BLKS(0x0C05783Au);
	r2 = r4;  /* 0C05783A mov Rm,Rn */
	r2 += r2;  /* 0C05783C add Rm,Rn */
	r3 = 0x0u;  /* 0C05783E mov #imm,Rn */
	r2 += r8;  /* 0C057840 add Rm,Rn */
	UPD(0x0C057842u, 4);
L_0C057842: BLKS(0x0C057842u);
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C057844u, 1);  /* 0C057842 mov.w @Rm,Rn */
	T = (r1 & r6) == 0;  /* 0C057844 tst Rm,Rn */
	if (T) { UPD(0x0C05784Au, 4); goto L_0C05784A; }  /* 0C057846 bt */
L_0C057848: BLKS(0x0C057848u);
	W16(r2, r0); UPD(0x0C05784Au, 1);  /* 0C057848 mov.w Rm,@Rn */
L_0C05784A: BLKS(0x0C05784Au);
	r1 = r3;  /* 0C05784A mov Rm,Rn */
	r1 += 0x1u;  /* 0C05784C add #imm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C05784E exts.w Rm,Rn */
	T = (s32)r3 > (s32)r7;  /* 0C057850 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C057842u, 7); goto L_0C057842; } goto L_0C057856; }  /* 0C057852 bf/s */
L_0C057856: BLKS(0x0C057856u);
	r3 = r5;  /* 0C057856 mov Rm,Rn */
	r3 += 0x1u;  /* 0C057858 add #imm,Rn */
	r5 = (u32)(s32)(s16)r3;  /* 0C05785A exts.w Rm,Rn */
	r2 = 0x1Fu;  /* 0C05785C mov #imm,Rn */
	T = (s32)r5 > (s32)r2;  /* 0C05785E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C05783Au, 9); goto L_0C05783A; } goto L_0C057864; }  /* 0C057860 bf/s */
L_0C057864: BLKS(0x0C057864u);
	{ IF(0x0C057866u); ; /* slot nop */ UPD(0x0C0577E8u, 4); goto L_0C0577E8; }  /* 0C057864 bra */
}

/* FUN_0c0578e0 */
void f_0C0578E0(sh3_t *c)
{
	LOCALS;
L_0C0578E0: BLKS(0x0C0578E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0578E2u, 1);  /* 0C0578E0 mov.l Rm,@-Rn */
	r0 = 0x3FFu; UPD(0x0C0578E4u, 1);  /* 0C0578E2 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0578E6u, 1);  /* 0C0578E4 mov.l Rm,@-Rn */
	T = (s32)r4 > (s32)r0;  /* 0C0578E6 cmp/gt Rm,Rn */
	r14 = r15;  /* 0C0578E8 mov Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057922u, 5); goto L_0C057922; } goto L_0C0578EE; }  /* 0C0578EA bt/s */
L_0C0578EE: BLKS(0x0C0578EEu);
	r7 = 0xC2755BCu; UPD(0x0C0578F0u, 2);  /* 0C0578EE mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0578F0 mov #imm,Rn */
	r0 = 0x400u; UPD(0x0C0578F4u, 2);  /* 0C0578F2 mov.w @(disp,pc),Rn */
	r5 = 0x1Fu;  /* 0C0578F4 mov #imm,Rn */
	r8 = 0xC38BC64u; UPD(0x0C0578F8u, 2);  /* 0C0578F6 mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C0578F8 mov Rm,Rn */
	UPD(0x0C0578FAu, 1);
L_0C0578FA: BLKS(0x0C0578FAu);
	r2 += r2;  /* 0C0578FA add Rm,Rn */
	r3 = 0x0u;  /* 0C0578FC mov #imm,Rn */
	r2 += r8;  /* 0C0578FE add Rm,Rn */
	UPD(0x0C057900u, 3);
L_0C057900: BLKS(0x0C057900u);
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C057902u, 1);  /* 0C057900 mov.w @Rm,Rn */
	T = r0 == r1;  /* 0C057902 cmp/eq Rm,Rn */
	{ u32 c_ = T; r2 += 0x20u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C057930u, 4); goto L_0C057930; } UPD(0x0C057908u, 1); goto L_0C057908; }  /* 0C057904 bt/s */
L_0C057908: BLKS(0x0C057908u);
	r1 = r3;  /* 0C057908 mov Rm,Rn */
	r1 += 0x1u;  /* 0C05790A add #imm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C05790C exts.w Rm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C05790E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C057900u, 7); goto L_0C057900; }  /* 0C057910 bf */
L_0C057912: BLKS(0x0C057912u);
	r3 = r6;  /* 0C057912 mov Rm,Rn */
	r3 += 0x1u;  /* 0C057914 add #imm,Rn */
	r6 = (u32)(s32)(s16)r3;  /* 0C057916 exts.w Rm,Rn */
	r2 = 0xFu;  /* 0C057918 mov #imm,Rn */
	T = (s32)r6 > (s32)r2;  /* 0C05791A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0578FAu, 8); goto L_0C0578FA; } goto L_0C057920; }  /* 0C05791C bf/s */
L_0C057920: BLKS(0x0C057920u);
	r0 = 0x0u;  /* 0C057920 mov #imm,Rn */
	UPD(0x0C057922u, 2);
L_0C057922: BLKS(0x0C057922u);
	r15 = r14;  /* 0C057922 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C057926u, 2);  /* 0C057924 mov.l @Rm+,Rn */
	IF(0x0C057926u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C057926 rts */
L_0C057930: BLKS(0x0C057930u);
	W16(r7, r3); UPD(0x0C057932u, 1);  /* 0C057930 mov.w Rm,@Rn */
	IF(0x0C057932u); r4 -= 1; T = r4 == 0;  /* 0C057932 dt Rn */
	r7 += 0x2u;  /* 0C057934 add #imm,Rn */
	W16(r7, r6); UPD(0x0C057938u, 3);  /* 0C057936 mov.w Rm,@Rn */
	{ u32 c_ = !T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C057908u, 3); goto L_0C057908; } goto L_0C05793C; }  /* 0C057938 bf/s */
L_0C05793C: BLKS(0x0C05793Cu);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C057922u, 4); goto L_0C057922; }  /* 0C05793C bra */
}

/* FUN_0c057950 */
void f_0C057950(sh3_t *c)
{
	LOCALS;
L_0C057950: BLKS(0x0C057950u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C057952u, 1);  /* 0C057950 mov.l Rm,@-Rn */
	r0 = 0x3FFu; UPD(0x0C057954u, 1);  /* 0C057952 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C057956u, 1);  /* 0C057954 mov.l Rm,@-Rn */
	T = (s32)r4 > (s32)r0;  /* 0C057956 cmp/gt Rm,Rn */
	r7 = 0xC2755BCu; UPD(0x0C05795Au, 2);  /* 0C057958 mov.l @(disp,pc),Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C057990u, 3); goto L_0C057990; } goto L_0C05795E; }  /* 0C05795A bt/s */
L_0C05795E: BLKS(0x0C05795Eu);
	r5 = 0x400u; UPD(0x0C057960u, 2);  /* 0C05795E mov.w @(disp,pc),Rn */
	r8 = 0x8u;  /* 0C057960 mov #imm,Rn */
	r6 = 0x1Fu;  /* 0C057962 mov #imm,Rn */
	r2 = r8;  /* 0C057964 mov Rm,Rn */
	UPD(0x0C057966u, 3);
L_0C057966: BLKS(0x0C057966u);
	r0 = 0xC38BC64u; UPD(0x0C057968u, 1);  /* 0C057966 mov.l @(disp,pc),Rn */
	r2 += r2;  /* 0C057968 add Rm,Rn */
	r3 = 0x0u;  /* 0C05796A mov #imm,Rn */
	r2 += r0;  /* 0C05796C add Rm,Rn */
	IF(0x0C05796Eu); ;  /* 0C05796E nop */
	UPD(0x0C057970u, 4);
L_0C057970: BLKS(0x0C057970u);
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C057972u, 1);  /* 0C057970 mov.w @Rm,Rn */
	T = r5 == r0;  /* 0C057972 cmp/eq Rm,Rn */
	{ u32 c_ = T; r2 += 0x20u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0579A0u, 4); goto L_0C0579A0; } UPD(0x0C057978u, 1); goto L_0C057978; }  /* 0C057974 bt/s */
L_0C057978: BLKS(0x0C057978u);
	r0 = r3;  /* 0C057978 mov Rm,Rn */
	r0 += 0x1u;  /* 0C05797A add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C05797C exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C05797E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C057970u, 7); goto L_0C057970; }  /* 0C057980 bf */
L_0C057982: BLKS(0x0C057982u);
	r3 = r8;  /* 0C057982 mov Rm,Rn */
	r3 += 0x1u;  /* 0C057984 add #imm,Rn */
	r8 = (u32)(s32)(s16)r3;  /* 0C057986 exts.w Rm,Rn */
	r2 = 0xFu;  /* 0C057988 mov #imm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C05798A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C057966u, 8); goto L_0C057966; } UPD(0x0C057990u, 1); goto L_0C057990; }  /* 0C05798C bf/s */
L_0C057990: BLKS(0x0C057990u);
	r0 = 0x0u;  /* 0C057990 mov #imm,Rn */
	UPD(0x0C057992u, 1);
L_0C057992: BLKS(0x0C057992u);
	r15 = r14;  /* 0C057992 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C057996u, 2);  /* 0C057994 mov.l @Rm+,Rn */
	IF(0x0C057996u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C057996 rts */
L_0C0579A0: BLKS(0x0C0579A0u);
	W16(r7, r3); UPD(0x0C0579A2u, 1);  /* 0C0579A0 mov.w Rm,@Rn */
	IF(0x0C0579A2u); r4 -= 1; T = r4 == 0;  /* 0C0579A2 dt Rn */
	r7 += 0x2u;  /* 0C0579A4 add #imm,Rn */
	W16(r7, r8); UPD(0x0C0579A8u, 3);  /* 0C0579A6 mov.w Rm,@Rn */
	r0 = 0x1u;  /* 0C0579A8 mov #imm,Rn */
	{ u32 c_ = !T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C057978u, 4); goto L_0C057978; } goto L_0C0579AE; }  /* 0C0579AA bf/s */
L_0C0579AE: BLKS(0x0C0579AEu);
	{ IF(0x0C0579B0u); ; /* slot nop */ UPD(0x0C057992u, 4); goto L_0C057992; }  /* 0C0579AE bra */
}

/* FUN_0c0579c0 */
void f_0C0579C0(sh3_t *c)
{
	LOCALS;
L_0C0579C0: BLKS(0x0C0579C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0579C2u, 1);  /* 0C0579C0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0579C2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0579C6u, 2);  /* 0C0579C4 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0579C6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0579CAu, 2);  /* 0C0579C8 mov.l Rm,@-Rn */
	r6 = 0xFu;  /* 0C0579CA mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0579CEu, 2);  /* 0C0579CC mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C0579CE mov #imm,Rn */
	r9 = 0xC38BC64u; UPD(0x0C0579D2u, 2);  /* 0C0579D0 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0579D2 mov Rm,Rn */
	r7 = 0x3FFFu; UPD(0x0C0579D6u, 2);  /* 0C0579D4 mov.w @(disp,pc),Rn */
	r10 = 0x1Fu;  /* 0C0579D6 mov #imm,Rn */
	UPD(0x0C0579D8u, 1);
L_0C0579D8: BLKS(0x0C0579D8u);
	r2 = r5;  /* 0C0579D8 mov Rm,Rn */
	r2 += r2;  /* 0C0579DA add Rm,Rn */
	r3 = 0x0u;  /* 0C0579DC mov #imm,Rn */
	r2 += r9;  /* 0C0579DE add Rm,Rn */
	UPD(0x0C0579E0u, 4);
L_0C0579E0: BLKS(0x0C0579E0u);
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r0 = v_; } UPD(0x0C0579E2u, 1);  /* 0C0579E0 mov.w @Rm+,Rn */
	r0 &= r7;  /* 0C0579E2 and Rm,Rn */
	T = r0 == r4;  /* 0C0579E4 cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057A34u, 5); goto L_0C057A34; } goto L_0C0579EA; }  /* 0C0579E6 bt/s */
L_0C0579EA: BLKS(0x0C0579EAu);
	r0 = r3;  /* 0C0579EA mov Rm,Rn */
	r0 += 0x1u;  /* 0C0579EC add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C0579EE exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0579F0 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0579E0u, 8); goto L_0C0579E0; }  /* 0C0579F2 bf */
L_0C0579F4: BLKS(0x0C0579F4u);
	r2 = r8;  /* 0C0579F4 mov Rm,Rn */
	r2 += 0x1u;  /* 0C0579F6 add #imm,Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C0579F8 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r10;  /* 0C0579FA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r5 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0579D8u, 7); goto L_0C0579D8; } goto L_0C057A00; }  /* 0C0579FC bf/s */
L_0C057A00: BLKS(0x0C057A00u);
	r9 = 0xC286068u; UPD(0x0C057A02u, 2);  /* 0C057A00 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C057A02 mov #imm,Rn */
	r8 = 0xFFu; UPD(0x0C057A06u, 2);  /* 0C057A04 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C057A06 mov #imm,Rn */
	r5 = 0xC21CA2Cu; UPD(0x0C057A0Au, 2);  /* 0C057A08 mov.l @(disp,pc),Rn */
	r6 = 0x3FFFu; UPD(0x0C057A0Cu, 1);  /* 0C057A0A mov.w @(disp,pc),Rn */
L_0C057A0C: BLKS(0x0C057A0Cu);
	r0 = r3;  /* 0C057A0C mov Rm,Rn */
	IF(0x0C057A0Eu); r10 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C057A10u, 2);  /* 0C057A0E mov.w @(r0,Rm),Rn */
	IF(0x0C057A10u); r2 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C057A12u, 1);  /* 0C057A10 mov.w @(r0,Rm),Rn */
	r10 &= r6;  /* 0C057A12 and Rm,Rn */
	T = r10 == r4;  /* 0C057A14 cmp/eq Rm,Rn */
	IF(0x0C057A16u); r10 = T;  /* 0C057A16 movt Rn */
	r2 &= r6;  /* 0C057A18 and Rm,Rn */
	T = r2 == r4;  /* 0C057A1A cmp/eq Rm,Rn */
	IF(0x0C057A1Cu); r0 = T;  /* 0C057A1C movt Rn */
	r10 |= r0;  /* 0C057A1E or Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C057A20 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057A34u, 11); goto L_0C057A34; } goto L_0C057A26; }  /* 0C057A22 bf/s */
L_0C057A26: BLKS(0x0C057A26u);
	r0 = r7;  /* 0C057A26 mov Rm,Rn */
	r0 += 0x1u;  /* 0C057A28 add #imm,Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C057A2A exts.w Rm,Rn */
	T = (s32)r7 > (s32)r8;  /* 0C057A2C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C057A0Cu, 8); goto L_0C057A0C; } goto L_0C057A32; }  /* 0C057A2E bf/s */
L_0C057A32: BLKS(0x0C057A32u);
	r0 = 0x0u;  /* 0C057A32 mov #imm,Rn */
	UPD(0x0C057A34u, 2);
L_0C057A34: BLKS(0x0C057A34u);
	r15 = r14;  /* 0C057A34 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C057A38u, 2);  /* 0C057A36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C057A3Au, 1);  /* 0C057A38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C057A3Cu, 1);  /* 0C057A3A mov.l @Rm+,Rn */
	IF(0x0C057A3Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C057A3C rts */
}

/* FUN_0c057a50 */
void f_0C057A50(sh3_t *c)
{
	LOCALS;
L_0C057A50: BLKS(0x0C057A50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C057A52u, 1);  /* 0C057A50 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C057A54u, 1);  /* 0C057A52 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C057A56u, 1);  /* 0C057A54 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C057A58u, 1);  /* 0C057A56 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C057A58 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C057A5Cu, 2);  /* 0C057A5A mov.l Rm,@-Rn */
	IF(0x0C057A5Cu); r10 <<= 2;  /* 0C057A5C shll2 Rn */
	r0 = 0xC1D93E4u; UPD(0x0C057A60u, 2);  /* 0C057A5E mov.l @(disp,pc),Rn */
	r10 += r10;  /* 0C057A60 add Rm,Rn */
	IF(0x0C057A62u); r15 -= 4; W32(r15, PR); UPD(0x0C057A64u, 2);  /* 0C057A62 sts.l pr,@-Rn */
	r0 += r10;  /* 0C057A64 add Rm,Rn */
	r8 = R32(r0 + 0x4u); UPD(0x0C057A68u, 2);  /* 0C057A66 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C057A68 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C057A6Cu, 2);  /* 0C057A6A mov.w @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C057A6C tst Rm,Rn */
	{ u32 c_ = T; r11 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057AB2u, 4); goto L_0C057AB2; } goto L_0C057A72; }  /* 0C057A6E bt/s */
L_0C057A72: BLKS(0x0C057A72u);
	r0 = 0xC38BC64u; UPD(0x0C057A74u, 2);  /* 0C057A72 mov.l @(disp,pc),Rn */
	r5 = 0xFu;  /* 0C057A74 mov #imm,Rn */
	r9 = 0x1Fu;  /* 0C057A76 mov #imm,Rn */
	UPD(0x0C057A78u, 2);
L_0C057A78: BLKS(0x0C057A78u);
	r6 = 0x0u;  /* 0C057A78 mov #imm,Rn */
	r7 = 0x0u;  /* 0C057A7A mov #imm,Rn */
	UPD(0x0C057A7Cu, 2);
L_0C057A7C: BLKS(0x0C057A7Cu);
	r2 = r7;  /* 0C057A7C mov Rm,Rn */
	r2 += r2;  /* 0C057A7E add Rm,Rn */
	r3 = 0x0u;  /* 0C057A80 mov #imm,Rn */
	r2 += r0;  /* 0C057A82 add Rm,Rn */
	UPD(0x0C057A84u, 4);
L_0C057A84: BLKS(0x0C057A84u);
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r1 = v_; } UPD(0x0C057A86u, 1);  /* 0C057A84 mov.w @Rm+,Rn */
	T = r1 == r4;  /* 0C057A86 cmp/eq Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057AA4u, 4); goto L_0C057AA4; } goto L_0C057A8C; }  /* 0C057A88 bt/s */
L_0C057A8C: BLKS(0x0C057A8Cu);
	r1 = r3;  /* 0C057A8C mov Rm,Rn */
	r1 += 0x1u;  /* 0C057A8E add #imm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C057A90 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C057A92 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C057A84u, 8); goto L_0C057A84; }  /* 0C057A94 bf */
L_0C057A96: BLKS(0x0C057A96u);
	r2 = r6;  /* 0C057A96 mov Rm,Rn */
	r2 += 0x1u;  /* 0C057A98 add #imm,Rn */
	r6 = (u32)(s32)(s16)r2;  /* 0C057A9A exts.w Rm,Rn */
	T = (s32)r6 > (s32)r9;  /* 0C057A9C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C057A7Cu, 7); goto L_0C057A7C; } goto L_0C057AA2; }  /* 0C057A9E bf/s */
L_0C057AA2: BLKS(0x0C057AA2u);
	r1 = 0x0u;  /* 0C057AA2 mov #imm,Rn */
	UPD(0x0C057AA4u, 2);
L_0C057AA4: BLKS(0x0C057AA4u);
	r3 = (u32)(s32)(s16)r1;  /* 0C057AA4 exts.w Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C057AA6 tst Rm,Rn */
	if (!T) { UPD(0x0C057AACu, 5); goto L_0C057AAC; }  /* 0C057AA8 bf */
L_0C057AAA: BLKS(0x0C057AAAu);
	r11 = 0x1u;  /* 0C057AAA mov #imm,Rn */
	UPD(0x0C057AACu, 1);
L_0C057AAC: BLKS(0x0C057AACu);
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C057AAEu, 1);  /* 0C057AAC mov.w @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C057AAE tst Rm,Rn */
	if (!T) { UPD(0x0C057A78u, 4); goto L_0C057A78; }  /* 0C057AB0 bf */
L_0C057AB2: BLKS(0x0C057AB2u);
	T = (r11 & r11) == 0;  /* 0C057AB2 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057AD4u, 4); goto L_0C057AD4; } goto L_0C057AB8; }  /* 0C057AB4 bt/s */
L_0C057AB8: BLKS(0x0C057AB8u);
	r0 = 0xC1D93E4u; UPD(0x0C057ABAu, 2);  /* 0C057AB8 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C057ABA add Rm,Rn */
	r8 = R32(r10 + 0x4u); UPD(0x0C057ABEu, 2);  /* 0C057ABC mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C057AC0u, 1);  /* 0C057ABE mov.w @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C057AC0 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057AD4u, 4); goto L_0C057AD4; } goto L_0C057AC6; }  /* 0C057AC2 bt/s */
L_0C057AC6: BLKS(0x0C057AC6u);
	r9 = 0xC057AF0u; UPD(0x0C057AC8u, 2);  /* 0C057AC6 mov.l @(disp,pc),Rn */
L_0C057AC8: BLKS(0x0C057AC8u);
	IF(0x0C057AC8u); { u32 t_ = r9; PR = 0x0C057ACCu; r5 = 0x20u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057AF0, 0x0C057AF0u, 0x0C057ACCu); }  /* 0C057AC8 jsr @Rn */
L_0C057ACC: BLKS(0x0C057ACCu);
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C057ACEu, 1);  /* 0C057ACC mov.w @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C057ACE tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057AC8u, 4); goto L_0C057AC8; } UPD(0x0C057AD4u, 1); goto L_0C057AD4; }  /* 0C057AD0 bf/s */
L_0C057AD4: BLKS(0x0C057AD4u);
	r15 = r14;  /* 0C057AD4 mov Rm,Rn */
	IF(0x0C057AD6u); PR = R32(r15); r15 += 4; UPD(0x0C057AD8u, 2);  /* 0C057AD6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C057ADAu, 1);  /* 0C057AD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C057ADCu, 1);  /* 0C057ADA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C057ADEu, 1);  /* 0C057ADC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C057AE0u, 1);  /* 0C057ADE mov.l @Rm+,Rn */
	IF(0x0C057AE0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C057AE0 rts */
}

/* FUN_0c057af0 */
void f_0C057AF0(sh3_t *c)
{
	LOCALS;
L_0C057AF0: BLKS(0x0C057AF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C057AF2u, 1);  /* 0C057AF0 mov.l Rm,@-Rn */
	r7 = 0xFu;  /* 0C057AF2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C057AF6u, 2);  /* 0C057AF4 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C057AF6 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C057AFAu, 2);  /* 0C057AF8 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C057AFA mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C057AFEu, 2);  /* 0C057AFC mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C057AFE exts.w Rm,Rn */
	IF(0x0C057B00u); r15 -= 4; W32(r15, PR); UPD(0x0C057B02u, 2);  /* 0C057B00 sts.l pr,@-Rn */
	r5 = 0x0u;  /* 0C057B02 mov #imm,Rn */
	r0 = 0xC38BC64u; UPD(0x0C057B06u, 2);  /* 0C057B04 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C057B06 mov Rm,Rn */
	r6 = 0x3FFFu; UPD(0x0C057B0Au, 2);  /* 0C057B08 mov.w @(disp,pc),Rn */
	r9 = 0x1Fu;  /* 0C057B0A mov #imm,Rn */
	UPD(0x0C057B0Cu, 1);
L_0C057B0C: BLKS(0x0C057B0Cu);
	r2 = r5;  /* 0C057B0C mov Rm,Rn */
	r2 += r2;  /* 0C057B0E add Rm,Rn */
	r3 = 0x0u;  /* 0C057B10 mov #imm,Rn */
	r2 += r0;  /* 0C057B12 add Rm,Rn */
	UPD(0x0C057B14u, 4);
L_0C057B14: BLKS(0x0C057B14u);
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r1 = v_; } UPD(0x0C057B16u, 1);  /* 0C057B14 mov.w @Rm+,Rn */
	r1 &= r6;  /* 0C057B16 and Rm,Rn */
	T = r1 == r8;  /* 0C057B18 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057B22u, 5); goto L_0C057B22; } goto L_0C057B1E; }  /* 0C057B1A bf/s */
L_0C057B1E: BLKS(0x0C057B1Eu);
	{ T = (r1 & r1) == 0; /* slot tst Rm,Rn */ UPD(0x0C057B3Cu, 4); goto L_0C057B3C; }  /* 0C057B1E bra */
L_0C057B22: BLKS(0x0C057B22u);
	r1 = r3;  /* 0C057B22 mov Rm,Rn */
	r1 += 0x1u;  /* 0C057B24 add #imm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C057B26 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r7;  /* 0C057B28 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C057B14u, 7); goto L_0C057B14; }  /* 0C057B2A bf */
L_0C057B2C: BLKS(0x0C057B2Cu);
	r2 = r4;  /* 0C057B2C mov Rm,Rn */
	r2 += 0x1u;  /* 0C057B2E add #imm,Rn */
	r4 = (u32)(s32)(s16)r2;  /* 0C057B30 exts.w Rm,Rn */
	T = (s32)r4 > (s32)r9;  /* 0C057B32 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r5 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C057B0Cu, 7); goto L_0C057B0C; } goto L_0C057B38; }  /* 0C057B34 bf/s */
L_0C057B38: BLKS(0x0C057B38u);
	r1 = 0x0u;  /* 0C057B38 mov #imm,Rn */
	T = (r1 & r1) == 0;  /* 0C057B3A tst Rm,Rn */
	UPD(0x0C057B3Cu, 3);
L_0C057B3C: BLKS(0x0C057B3Cu);
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057B76u, 3); goto L_0C057B76; } goto L_0C057B40; }  /* 0C057B3C bf/s */
L_0C057B40: BLKS(0x0C057B40u);
	r4 = 0xC286068u; UPD(0x0C057B42u, 2);  /* 0C057B40 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C057B42 mov #imm,Rn */
	r5 = 0xC21CA2Cu; UPD(0x0C057B46u, 2);  /* 0C057B44 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C057B46 mov #imm,Rn */
	r6 = 0xFFu; UPD(0x0C057B4Au, 2);  /* 0C057B48 mov.w @(disp,pc),Rn */
	r7 = 0x3FFFu; UPD(0x0C057B4Cu, 1);  /* 0C057B4A mov.w @(disp,pc),Rn */
L_0C057B4C: BLKS(0x0C057B4Cu);
	IF(0x0C057B4Cu); r9 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C057B4Eu, 1);  /* 0C057B4C mov.w @(r0,Rm),Rn */
	IF(0x0C057B4Eu); r2 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C057B50u, 1);  /* 0C057B4E mov.w @(r0,Rm),Rn */
	r9 &= r7;  /* 0C057B50 and Rm,Rn */
	T = r9 == r8;  /* 0C057B52 cmp/eq Rm,Rn */
	IF(0x0C057B54u); r9 = T;  /* 0C057B54 movt Rn */
	r2 &= r7;  /* 0C057B56 and Rm,Rn */
	T = r2 == r8;  /* 0C057B58 cmp/eq Rm,Rn */
	IF(0x0C057B5Au); r2 = T;  /* 0C057B5A movt Rn */
	r9 |= r2;  /* 0C057B5C or Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C057B5E tst Rm,Rn */
	if (!T) { UPD(0x0C057C10u, 11); goto L_0C057C10; }  /* 0C057B60 bf */
L_0C057B62: BLKS(0x0C057B62u);
	r2 = r3;  /* 0C057B62 mov Rm,Rn */
	r2 += 0x1u;  /* 0C057B64 add #imm,Rn */
	r3 = (u32)(s32)(s16)r2;  /* 0C057B66 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C057B68 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C057B4Cu, 7); goto L_0C057B4C; } goto L_0C057B6E; }  /* 0C057B6A bf/s */
L_0C057B6E: BLKS(0x0C057B6Eu);
	r1 = 0x0u;  /* 0C057B6E mov #imm,Rn */
	UPD(0x0C057B70u, 2);
L_0C057B70: BLKS(0x0C057B70u);
	T = (r1 & r1) == 0;  /* 0C057B70 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057B90u, 4); goto L_0C057B90; } UPD(0x0C057B76u, 1); goto L_0C057B76; }  /* 0C057B72 bt/s */
L_0C057B76: BLKS(0x0C057B76u);
	r15 = r14;  /* 0C057B76 mov Rm,Rn */
	IF(0x0C057B78u); PR = R32(r15); r15 += 4; UPD(0x0C057B7Au, 2);  /* 0C057B78 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C057B7Cu, 1);  /* 0C057B7A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C057B7Eu, 1);  /* 0C057B7C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C057B80u, 1);  /* 0C057B7E mov.l @Rm+,Rn */
	IF(0x0C057B80u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C057B80 rts */
L_0C057B90: BLKS(0x0C057B90u);
	r9 = 0xC057950u; UPD(0x0C057B92u, 1);  /* 0C057B90 mov.l @(disp,pc),Rn */
	IF(0x0C057B92u); { u32 t_ = r9; PR = 0x0C057B96u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057950, 0x0C057950u, 0x0C057B96u); }  /* 0C057B92 jsr @Rn */
L_0C057B96: BLKS(0x0C057B96u);
	T = (r0 & r0) == 0;  /* 0C057B96 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057B76u, 4); goto L_0C057B76; } goto L_0C057B9C; }  /* 0C057B98 bt/s */
L_0C057B9C: BLKS(0x0C057B9Cu);
	r6 = 0x400u; UPD(0x0C057B9Eu, 2);  /* 0C057B9C mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C057B9E mov #imm,Rn */
	r7 = 0xFFu; UPD(0x0C057BA2u, 2);  /* 0C057BA0 mov.w @(disp,pc),Rn */
	r3 = 0xC21CA2Cu; UPD(0x0C057BA4u, 1);  /* 0C057BA2 mov.l @(disp,pc),Rn */
	r5 = 0x3FFFu; UPD(0x0C057BA6u, 1);  /* 0C057BA4 mov.w @(disp,pc),Rn */
L_0C057BA6: BLKS(0x0C057BA6u);
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C057BA8u, 1);  /* 0C057BA6 mov.w @Rm+,Rn */
	r0 &= r5;  /* 0C057BA8 and Rm,Rn */
	T = r0 == r6;  /* 0C057BAA cmp/eq Rm,Rn */
	{ u32 c_ = T; r4 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C057C00u, 5); goto L_0C057C00; } goto L_0C057BB0; }  /* 0C057BAC bt/s */
L_0C057BB0: BLKS(0x0C057BB0u);
	r4 += 0x1u;  /* 0C057BB0 add #imm,Rn */
	r2 = (u32)(s32)(s16)r4;  /* 0C057BB2 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r7;  /* 0C057BB4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C057BA6u, 7); goto L_0C057BA6; }  /* 0C057BB6 bf */
L_0C057BB8: BLKS(0x0C057BB8u);
	r1 = 0x100u; UPD(0x0C057BBAu, 1);  /* 0C057BB8 mov.w @(disp,pc),Rn */
L_0C057BBA: BLKS(0x0C057BBAu);
	r5 = 0xFFu; UPD(0x0C057BBCu, 1);  /* 0C057BBA mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C057BBC exts.w Rm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C057BBE cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057B76u, 5); goto L_0C057B76; } goto L_0C057BC4; }  /* 0C057BC0 bt/s */
L_0C057BC4: BLKS(0x0C057BC4u);
	r3 += r3;  /* 0C057BC4 add Rm,Rn */
	r9 = 0xC21CA2Cu; UPD(0x0C057BC8u, 3);  /* 0C057BC6 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C057BC8 mov Rm,Rn */
	IF(0x0C057BCAu); W16(r0 + r9, r8); UPD(0x0C057BCCu, 2);  /* 0C057BCA mov.w Rm,@(r0,Rn) */
	r6 = 0xC2755BCu; UPD(0x0C057BCEu, 1);  /* 0C057BCC mov.l @(disp,pc),Rn */
	r3 = 0xC283CB8u; UPD(0x0C057BD0u, 1);  /* 0C057BCE mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r7 = v_; } UPD(0x0C057BD2u, 1);  /* 0C057BD0 mov.w @Rm+,Rn */
	IF(0x0C057BD2u); W16(r0 + r3, r7); UPD(0x0C057BD4u, 1);  /* 0C057BD2 mov.w Rm,@(r0,Rn) */
	r4 = 0xC22466Eu; UPD(0x0C057BD6u, 1);  /* 0C057BD4 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C057BD8u, 1);  /* 0C057BD6 mov.w @Rm,Rn */
	r2 = 0xC392E26u; UPD(0x0C057BDAu, 1);  /* 0C057BD8 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C057BDA exts.w Rm,Rn */
	IF(0x0C057BDCu); W16(r0 + r4, r5); UPD(0x0C057BDEu, 2);  /* 0C057BDC mov.w Rm,@(r0,Rn) */
	IF(0x0C057BDEu); W16(r0 + r2, r10); UPD(0x0C057BE0u, 1);  /* 0C057BDE mov.w Rm,@(r0,Rn) */
	r0 = (u32)(s32)(s16)r7;  /* 0C057BE0 exts.w Rm,Rn */
	IF(0x0C057BE2u); r0 <<= 2;  /* 0C057BE2 shll2 Rn */
	IF(0x0C057BE4u); r0 <<= 2;  /* 0C057BE4 shll2 Rn */
	r6 = 0xFFFF8000u; UPD(0x0C057BE8u, 4);  /* 0C057BE6 mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C057BE8 add Rm,Rn */
	r3 = 0xC38BC64u; UPD(0x0C057BECu, 2);  /* 0C057BEA mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C057BEC add Rm,Rn */
	r8 |= r6;  /* 0C057BEE or Rm,Rn */
	IF(0x0C057BF0u); W16(r0 + r3, r8); UPD(0x0C057BF2u, 3);  /* 0C057BF0 mov.w Rm,@(r0,Rn) */
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C057B76u, 3); goto L_0C057B76; }  /* 0C057BF2 bra */
L_0C057C00: BLKS(0x0C057C00u);
	{ r1 = r2; /* slot mov Rm,Rn */ UPD(0x0C057BBAu, 3); goto L_0C057BBA; }  /* 0C057C00 bra */
L_0C057C10: BLKS(0x0C057C10u);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C057B70u, 3); goto L_0C057B70; }  /* 0C057C10 bra */
}

/* FUN_0c057c50 */
void f_0C057C50(sh3_t *c)
{
	LOCALS;
L_0C057C50: BLKS(0x0C057C50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C057C52u, 1);  /* 0C057C50 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C057C52 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C057C56u, 2);  /* 0C057C54 mov.l Rm,@-Rn */
	r6 = 0xFu;  /* 0C057C56 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C057C5Au, 2);  /* 0C057C58 mov.l Rm,@-Rn */
	r9 = 0x1Fu;  /* 0C057C5A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C057C5Eu, 2);  /* 0C057C5C mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C057C5E exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C057C62u, 2);  /* 0C057C60 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C057C62 exts.w Rm,Rn */
	r2 = 0x3FFFu; UPD(0x0C057C66u, 2);  /* 0C057C64 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C057C66 mov Rm,Rn */
	IF(0x0C057C68u); r15 -= 4; W32(r15, PR); UPD(0x0C057C6Au, 2);  /* 0C057C68 sts.l pr,@-Rn */
	r7 &= r2;  /* 0C057C6A and Rm,Rn */
	r8 = 0xC38BC64u; UPD(0x0C057C6Eu, 2);  /* 0C057C6C mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C057C6E mov Rm,Rn */
	r5 = r2;  /* 0C057C70 mov Rm,Rn */
	r4 = 0x0u;  /* 0C057C72 mov #imm,Rn */
	UPD(0x0C057C74u, 3);
L_0C057C74: BLKS(0x0C057C74u);
	r2 = r4;  /* 0C057C74 mov Rm,Rn */
	r2 += r2;  /* 0C057C76 add Rm,Rn */
	r3 = 0x0u;  /* 0C057C78 mov #imm,Rn */
	r2 += r8;  /* 0C057C7A add Rm,Rn */
	UPD(0x0C057C7Cu, 4);
L_0C057C7C: BLKS(0x0C057C7Cu);
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r1 = v_; } UPD(0x0C057C7Eu, 1);  /* 0C057C7C mov.w @Rm+,Rn */
	r1 &= r5;  /* 0C057C7E and Rm,Rn */
	T = r1 == r7;  /* 0C057C80 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057C8Au, 5); goto L_0C057C8A; } goto L_0C057C86; }  /* 0C057C82 bf/s */
L_0C057C86: BLKS(0x0C057C86u);
	{ T = (r1 & r1) == 0; /* slot tst Rm,Rn */ UPD(0x0C057CA4u, 4); goto L_0C057CA4; }  /* 0C057C86 bra */
L_0C057C8A: BLKS(0x0C057C8Au);
	r1 = r3;  /* 0C057C8A mov Rm,Rn */
	r1 += 0x1u;  /* 0C057C8C add #imm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C057C8E exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C057C90 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C057C7Cu, 7); goto L_0C057C7C; }  /* 0C057C92 bf */
L_0C057C94: BLKS(0x0C057C94u);
	r2 = r0;  /* 0C057C94 mov Rm,Rn */
	r2 += 0x1u;  /* 0C057C96 add #imm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C057C98 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r9;  /* 0C057C9A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C057C74u, 7); goto L_0C057C74; } goto L_0C057CA0; }  /* 0C057C9C bf/s */
L_0C057CA0: BLKS(0x0C057CA0u);
	r1 = 0x0u;  /* 0C057CA0 mov #imm,Rn */
	T = (r1 & r1) == 0;  /* 0C057CA2 tst Rm,Rn */
	UPD(0x0C057CA4u, 3);
L_0C057CA4: BLKS(0x0C057CA4u);
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057CE6u, 3); goto L_0C057CE6; } goto L_0C057CA8; }  /* 0C057CA4 bf/s */
L_0C057CA8: BLKS(0x0C057CA8u);
	r0 = 0x3FFFu; UPD(0x0C057CAAu, 2);  /* 0C057CA8 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C057CAA mov Rm,Rn */
	r8 = 0xC286068u; UPD(0x0C057CAEu, 2);  /* 0C057CAC mov.l @(disp,pc),Rn */
	r7 &= r0;  /* 0C057CAE and Rm,Rn */
	r4 = 0xC21CA2Cu; UPD(0x0C057CB2u, 2);  /* 0C057CB0 mov.l @(disp,pc),Rn */
	r6 = r0;  /* 0C057CB2 mov Rm,Rn */
	r5 = 0xFFu; UPD(0x0C057CB6u, 2);  /* 0C057CB4 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C057CB6 mov #imm,Rn */
	r0 = 0x0u;  /* 0C057CB8 mov #imm,Rn */
	IF(0x0C057CBAu); ;  /* 0C057CBA nop */
	UPD(0x0C057CBCu, 3);
L_0C057CBC: BLKS(0x0C057CBCu);
	IF(0x0C057CBCu); r9 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C057CBEu, 1);  /* 0C057CBC mov.w @(r0,Rm),Rn */
	IF(0x0C057CBEu); r2 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C057CC0u, 1);  /* 0C057CBE mov.w @(r0,Rm),Rn */
	r9 &= r6;  /* 0C057CC0 and Rm,Rn */
	T = r9 == r7;  /* 0C057CC2 cmp/eq Rm,Rn */
	IF(0x0C057CC4u); r9 = T;  /* 0C057CC4 movt Rn */
	r2 &= r6;  /* 0C057CC6 and Rm,Rn */
	T = r2 == r7;  /* 0C057CC8 cmp/eq Rm,Rn */
	IF(0x0C057CCAu); r2 = T;  /* 0C057CCA movt Rn */
	r9 |= r2;  /* 0C057CCC or Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C057CCE tst Rm,Rn */
	if (!T) { UPD(0x0C057D80u, 11); goto L_0C057D80; }  /* 0C057CD0 bf */
L_0C057CD2: BLKS(0x0C057CD2u);
	r2 = r3;  /* 0C057CD2 mov Rm,Rn */
	r2 += 0x1u;  /* 0C057CD4 add #imm,Rn */
	r3 = (u32)(s32)(s16)r2;  /* 0C057CD6 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C057CD8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C057CBCu, 7); goto L_0C057CBC; } goto L_0C057CDE; }  /* 0C057CDA bf/s */
L_0C057CDE: BLKS(0x0C057CDEu);
	r1 = 0x0u;  /* 0C057CDE mov #imm,Rn */
	UPD(0x0C057CE0u, 2);
L_0C057CE0: BLKS(0x0C057CE0u);
	T = (r1 & r1) == 0;  /* 0C057CE0 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057D00u, 4); goto L_0C057D00; } UPD(0x0C057CE6u, 1); goto L_0C057CE6; }  /* 0C057CE2 bt/s */
L_0C057CE6: BLKS(0x0C057CE6u);
	r15 = r14;  /* 0C057CE6 mov Rm,Rn */
	IF(0x0C057CE8u); PR = R32(r15); r15 += 4; UPD(0x0C057CEAu, 2);  /* 0C057CE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C057CECu, 1);  /* 0C057CEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C057CEEu, 1);  /* 0C057CEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C057CF0u, 1);  /* 0C057CEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C057CF2u, 1);  /* 0C057CF0 mov.l @Rm+,Rn */
	IF(0x0C057CF2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C057CF2 rts */
L_0C057D00: BLKS(0x0C057D00u);
	r8 = 0xC057950u; UPD(0x0C057D02u, 1);  /* 0C057D00 mov.l @(disp,pc),Rn */
	IF(0x0C057D02u); { u32 t_ = r8; PR = 0x0C057D06u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057950, 0x0C057950u, 0x0C057D06u); }  /* 0C057D02 jsr @Rn */
L_0C057D06: BLKS(0x0C057D06u);
	T = (r0 & r0) == 0;  /* 0C057D06 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057CE6u, 4); goto L_0C057CE6; } goto L_0C057D0C; }  /* 0C057D08 bt/s */
L_0C057D0C: BLKS(0x0C057D0Cu);
	r6 = 0x400u; UPD(0x0C057D0Eu, 2);  /* 0C057D0C mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C057D0E mov #imm,Rn */
	r7 = 0xFFu; UPD(0x0C057D12u, 2);  /* 0C057D10 mov.w @(disp,pc),Rn */
	r3 = 0xC286068u; UPD(0x0C057D14u, 1);  /* 0C057D12 mov.l @(disp,pc),Rn */
	r5 = 0x3FFFu; UPD(0x0C057D16u, 1);  /* 0C057D14 mov.w @(disp,pc),Rn */
L_0C057D16: BLKS(0x0C057D16u);
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r4 = v_; } UPD(0x0C057D18u, 1);  /* 0C057D16 mov.w @Rm+,Rn */
	r4 &= r5;  /* 0C057D18 and Rm,Rn */
	T = r4 == r6;  /* 0C057D1A cmp/eq Rm,Rn */
	if (T) { UPD(0x0C057D70u, 5); goto L_0C057D70; }  /* 0C057D1C bt */
L_0C057D1E: BLKS(0x0C057D1Eu);
	r0 = r2;  /* 0C057D1E mov Rm,Rn */
	r0 += 0x1u;  /* 0C057D20 add #imm,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C057D22 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r7;  /* 0C057D24 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C057D16u, 7); goto L_0C057D16; }  /* 0C057D26 bf */
L_0C057D28: BLKS(0x0C057D28u);
	r1 = 0x100u; UPD(0x0C057D2Au, 1);  /* 0C057D28 mov.w @(disp,pc),Rn */
L_0C057D2A: BLKS(0x0C057D2Au);
	r5 = 0xFFu; UPD(0x0C057D2Cu, 1);  /* 0C057D2A mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C057D2C exts.w Rm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C057D2E cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057CE6u, 5); goto L_0C057CE6; } goto L_0C057D34; }  /* 0C057D30 bt/s */
L_0C057D34: BLKS(0x0C057D34u);
	r3 += r3;  /* 0C057D34 add Rm,Rn */
	r6 = 0xC286068u; UPD(0x0C057D38u, 3);  /* 0C057D36 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C057D38 mov Rm,Rn */
	IF(0x0C057D3Au); W16(r0 + r6, r10); UPD(0x0C057D3Cu, 2);  /* 0C057D3A mov.w Rm,@(r0,Rn) */
	r5 = 0xC2755BCu; UPD(0x0C057D3Eu, 1);  /* 0C057D3C mov.l @(disp,pc),Rn */
	r3 = 0xC2175F4u; UPD(0x0C057D40u, 1);  /* 0C057D3E mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r7 = v_; } UPD(0x0C057D42u, 1);  /* 0C057D40 mov.w @Rm+,Rn */
	IF(0x0C057D42u); W16(r0 + r3, r7); UPD(0x0C057D44u, 1);  /* 0C057D42 mov.w Rm,@(r0,Rn) */
	r8 = 0xC223068u; UPD(0x0C057D46u, 1);  /* 0C057D44 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C057D48u, 1);  /* 0C057D46 mov.w @Rm,Rn */
	r2 = 0xC2173D8u; UPD(0x0C057D4Au, 1);  /* 0C057D48 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C057D4A exts.w Rm,Rn */
	IF(0x0C057D4Cu); W16(r0 + r8, r4); UPD(0x0C057D4Eu, 2);  /* 0C057D4C mov.w Rm,@(r0,Rn) */
	IF(0x0C057D4Eu); W16(r0 + r2, r11); UPD(0x0C057D50u, 1);  /* 0C057D4E mov.w Rm,@(r0,Rn) */
	r0 = (u32)(s32)(s16)r7;  /* 0C057D50 exts.w Rm,Rn */
	IF(0x0C057D52u); r0 <<= 2;  /* 0C057D52 shll2 Rn */
	IF(0x0C057D54u); r0 <<= 2;  /* 0C057D54 shll2 Rn */
	r6 = 0xFFFF8000u; UPD(0x0C057D58u, 4);  /* 0C057D56 mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C057D58 add Rm,Rn */
	r3 = 0xC38BC64u; UPD(0x0C057D5Cu, 2);  /* 0C057D5A mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C057D5C add Rm,Rn */
	r10 |= r6;  /* 0C057D5E or Rm,Rn */
	IF(0x0C057D60u); W16(r0 + r3, r10); UPD(0x0C057D62u, 3);  /* 0C057D60 mov.w Rm,@(r0,Rn) */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C057CE6u, 3); goto L_0C057CE6; }  /* 0C057D62 bra */
L_0C057D70: BLKS(0x0C057D70u);
	{ r1 = r2; /* slot mov Rm,Rn */ UPD(0x0C057D2Au, 3); goto L_0C057D2A; }  /* 0C057D70 bra */
L_0C057D80: BLKS(0x0C057D80u);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C057CE0u, 3); goto L_0C057CE0; }  /* 0C057D80 bra */
}

/* FUN_0c057dc0 */
void f_0C057DC0(sh3_t *c)
{
	LOCALS;
L_0C057DC0: BLKS(0x0C057DC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C057DC2u, 1);  /* 0C057DC0 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C057DC2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C057DC6u, 2);  /* 0C057DC4 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C057DC6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C057DCAu, 2);  /* 0C057DC8 mov.l Rm,@-Rn */
	r6 = 0x7u;  /* 0C057DCA mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C057DCEu, 2);  /* 0C057DCC mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C057DCE mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C057DD2u, 2);  /* 0C057DD0 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C057DD4u, 1);  /* 0C057DD2 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C057DD6u, 1);  /* 0C057DD4 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFDCu;  /* 0C057DD6 add #imm,Rn */
	r14 = r15;  /* 0C057DD8 mov Rm,Rn */
	r5 = 0xC26CAE0u; UPD(0x0C057DDCu, 3);  /* 0C057DDA mov.l @(disp,pc),Rn */
	r7 = r14;  /* 0C057DDC mov Rm,Rn */
	W32(r14 + 0x20u, r1); UPD(0x0C057DE0u, 2);  /* 0C057DDE mov.l Rm,@(disp,Rn) */
L_0C057DE0: BLKS(0x0C057DE0u);
	r2 = r3;  /* 0C057DE0 mov Rm,Rn */
	r2 += r5;  /* 0C057DE2 add Rm,Rn */
	r0 = R32(r2); UPD(0x0C057DE6u, 3);  /* 0C057DE4 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C057DE6 tst Rm,Rn */
	if (T) { UPD(0x0C057DEEu, 4); goto L_0C057DEE; }  /* 0C057DE8 bt */
L_0C057DEA: BLKS(0x0C057DEAu);
	r8 = R32(r2 + 0x30u); UPD(0x0C057DECu, 1);  /* 0C057DEA mov.l @(disp,Rm),Rn */
	W32(r7, r8); UPD(0x0C057DEEu, 1);  /* 0C057DEC mov.l Rm,@Rn */
L_0C057DEE: BLKS(0x0C057DEEu);
	r2 = r4;  /* 0C057DEE mov Rm,Rn */
	r2 += 0x1u;  /* 0C057DF0 add #imm,Rn */
	r4 = (u32)(s32)(s16)r2;  /* 0C057DF2 exts.w Rm,Rn */
	r7 += 0x4u;  /* 0C057DF4 add #imm,Rn */
	T = (s32)r4 > (s32)r6;  /* 0C057DF6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C057DE0u, 8); goto L_0C057DE0; } UPD(0x0C057DFCu, 1); goto L_0C057DFC; }  /* 0C057DF8 bf/s */
L_0C057DFC: BLKS(0x0C057DFCu);
	r2 = 0x0u;  /* 0C057DFC mov #imm,Rn */
	r4 = 0x0u;  /* 0C057DFE mov #imm,Rn */
	r12 = 0x0u;  /* 0C057E00 mov #imm,Rn */
	r11 = 0x0u;  /* 0C057E02 mov #imm,Rn */
	r10 = 0x0u;  /* 0C057E04 mov #imm,Rn */
	IF(0x0C057E06u); ;  /* 0C057E06 nop */
	UPD(0x0C057E08u, 6);
L_0C057E08: BLKS(0x0C057E08u);
	r5 = 0xC26CAE0u; UPD(0x0C057E0Au, 1);  /* 0C057E08 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C057E0A mov Rm,Rn */
	IF(0x0C057E0Cu); r3 = R32(r0 + r5); UPD(0x0C057E0Eu, 2);  /* 0C057E0C mov.l @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C057E0E tst Rm,Rn */
	{ u32 c_ = T; r8 = r4; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C057E96u, 4); goto L_0C057E96; } goto L_0C057E14; }  /* 0C057E10 bt/s */
L_0C057E14: BLKS(0x0C057E14u);
	r0 = r11;  /* 0C057E14 mov Rm,Rn */
	IF(0x0C057E16u); r9 = R32(r0 + r14); UPD(0x0C057E18u, 3);  /* 0C057E16 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r9); r9 += 2; r8 = v_; } UPD(0x0C057E1Au, 1);  /* 0C057E18 mov.w @Rm+,Rn */
	T = (r8 & r8) == 0;  /* 0C057E1A tst Rm,Rn */
	{ u32 c_ = T; r13 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C057E94u, 4); goto L_0C057E94; } goto L_0C057E20; }  /* 0C057E1C bt/s */
L_0C057E20: BLKS(0x0C057E20u);
	IF(0x0C057E20u); T = (s32)r8 >= 0;  /* 0C057E20 cmp/pz Rn */
	{ u32 c_ = !T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057ED0u, 5); goto L_0C057ED0; } goto L_0C057E26; }  /* 0C057E22 bf/s */
L_0C057E26: BLKS(0x0C057E26u);
	r7 = 0x400u; UPD(0x0C057E28u, 2);  /* 0C057E26 mov.w @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C057E28 mov #imm,Rn */
	r3 = 0xFFu; UPD(0x0C057E2Cu, 2);  /* 0C057E2A mov.w @(disp,pc),Rn */
	r2 = 0xC286068u; UPD(0x0C057E2Eu, 1);  /* 0C057E2C mov.l @(disp,pc),Rn */
	r6 = 0x3FFFu; UPD(0x0C057E30u, 1);  /* 0C057E2E mov.w @(disp,pc),Rn */
L_0C057E30: BLKS(0x0C057E30u);
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r5 = v_; } UPD(0x0C057E32u, 1);  /* 0C057E30 mov.w @Rm+,Rn */
	r5 &= r6;  /* 0C057E32 and Rm,Rn */
	T = r5 == r7;  /* 0C057E34 cmp/eq Rm,Rn */
	{ u32 c_ = T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C057E44u, 5); goto L_0C057E44; } goto L_0C057E3A; }  /* 0C057E36 bt/s */
L_0C057E3A: BLKS(0x0C057E3Au);
	r5 += 0x1u;  /* 0C057E3A add #imm,Rn */
	r0 = (u32)(s32)(s16)r5;  /* 0C057E3C exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C057E3E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C057E30u, 7); goto L_0C057E30; }  /* 0C057E40 bf */
L_0C057E42: BLKS(0x0C057E42u);
	r0 = 0x100u; UPD(0x0C057E44u, 1);  /* 0C057E42 mov.w @(disp,pc),Rn */
L_0C057E44: BLKS(0x0C057E44u);
	r6 = 0xFFu; UPD(0x0C057E46u, 1);  /* 0C057E44 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r0;  /* 0C057E46 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r6;  /* 0C057E48 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057EB4u, 5); goto L_0C057EB4; } goto L_0C057E4E; }  /* 0C057E4A bt/s */
L_0C057E4E: BLKS(0x0C057E4Eu);
	r2 = 0x3FFFu; UPD(0x0C057E50u, 2);  /* 0C057E4E mov.w @(disp,pc),Rn */
	r5 = r8;  /* 0C057E50 mov Rm,Rn */
	r7 = 0xC286068u; UPD(0x0C057E54u, 2);  /* 0C057E52 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C057E54 add Rm,Rn */
	r5 &= r2;  /* 0C057E56 and Rm,Rn */
	IF(0x0C057E58u); W16(r0 + r7, r5); UPD(0x0C057E5Au, 3);  /* 0C057E58 mov.w Rm,@(r0,Rn) */
	r6 = 0x22u;  /* 0C057E5A mov #imm,Rn */
	r6 += r14;  /* 0C057E5C add Rm,Rn */
	r4 += 0x8u;  /* 0C057E5E add #imm,Rn */
	r5 = 0xC2175F4u; UPD(0x0C057E62u, 4);  /* 0C057E60 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C057E62 exts.w Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r6); UPD(0x0C057E66u, 2);  /* 0C057E64 mov.w @Rm,Rn */
	r4 += 0xFFFFFFF8u;  /* 0C057E66 add #imm,Rn */
	r7 = 0xC223068u; UPD(0x0C057E6Au, 2);  /* 0C057E68 mov.l @(disp,pc),Rn */
	IF(0x0C057E6Au); W16(r0 + r5, r1); UPD(0x0C057E6Cu, 1);  /* 0C057E6A mov.w Rm,@(r0,Rn) */
	IF(0x0C057E6Cu); W16(r0 + r7, r3); UPD(0x0C057E6Eu, 1);  /* 0C057E6C mov.w Rm,@(r0,Rn) */
	r2 = 0xC2173D8u; UPD(0x0C057E70u, 1);  /* 0C057E6E mov.l @(disp,pc),Rn */
L_0C057E70: BLKS(0x0C057E70u);
	r5 = 0x100u; UPD(0x0C057E72u, 1);  /* 0C057E70 mov.w @(disp,pc),Rn */
	r7 = 0x4u;  /* 0C057E72 mov #imm,Rn */
	IF(0x0C057E74u); W16(r0 + r2, r5); UPD(0x0C057E76u, 2);  /* 0C057E74 mov.w Rm,@(r0,Rn) */
	r0 = R32(r14 + 0x20u); UPD(0x0C057E78u, 1);  /* 0C057E76 mov.l @(disp,Rm),Rn */
	r2 = 0x1u;  /* 0C057E78 mov #imm,Rn */
	IF(0x0C057E7Au); ARG0(0x407Du); { s32 s_ = (s32)r7; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C057E7A shld Rm,Rn */
	r6 = 0xFFFF8000u; UPD(0x0C057E7Eu, 3);  /* 0C057E7C mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C057E7E add Rm,Rn */
	r5 = 0xC38BC64u; UPD(0x0C057E82u, 2);  /* 0C057E80 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C057E82 add Rm,Rn */
	r8 |= r6;  /* 0C057E84 or Rm,Rn */
	IF(0x0C057E86u); W16(r0 + r5, r8); UPD(0x0C057E88u, 3);  /* 0C057E86 mov.w Rm,@(r0,Rn) */
	IF(0x0C057E88u); r3 <<= 8;  /* 0C057E88 shll8 Rn */
	r0 = r13;  /* 0C057E8A mov Rm,Rn */
	IF(0x0C057E8Cu); W32(r0 + r14, r9); UPD(0x0C057E8Eu, 3);  /* 0C057E8C mov.l Rm,@(r0,Rn) */
	r9 = 0xC26CAE0u; UPD(0x0C057E90u, 1);  /* 0C057E8E mov.l @(disp,pc),Rn */
	r9 += r12;  /* 0C057E90 add Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C057E94u, 2);  /* 0C057E92 mov.l Rm,@(disp,Rn) */
L_0C057E94: BLKS(0x0C057E94u);
	r8 = r4;  /* 0C057E94 mov Rm,Rn */
	UPD(0x0C057E96u, 1);
L_0C057E96: BLKS(0x0C057E96u);
	r8 += 0x1u;  /* 0C057E96 add #imm,Rn */
	r4 = (u32)(s32)(s16)r8;  /* 0C057E98 exts.w Rm,Rn */
	r13 = 0x7u;  /* 0C057E9A mov #imm,Rn */
	r12 += 0x4Cu;  /* 0C057E9C add #imm,Rn */
	r11 += 0x4u;  /* 0C057E9E add #imm,Rn */
	T = (s32)r4 > (s32)r13;  /* 0C057EA0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C057E08u, 9); goto L_0C057E08; } goto L_0C057EA6; }  /* 0C057EA2 bf/s */
L_0C057EA6: BLKS(0x0C057EA6u);
	r10 = R32(r14 + 0x20u); UPD(0x0C057EA8u, 2);  /* 0C057EA6 mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C057EA8 tst Rm,Rn */
	r10 += 0x1u;  /* 0C057EAA add #imm,Rn */
	r4 = (u32)(s32)(s16)r10;  /* 0C057EAC exts.w Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x20u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C057DFCu, 6); goto L_0C057DFC; } UPD(0x0C057EB2u, 1); goto L_0C057EB2; }  /* 0C057EAE bf/s */
L_0C057EB2: BLKS(0x0C057EB2u);
	r1 = 0x1u;  /* 0C057EB2 mov #imm,Rn */
	UPD(0x0C057EB4u, 1);
L_0C057EB4: BLKS(0x0C057EB4u);
	r0 = r1;  /* 0C057EB4 mov Rm,Rn */
	r14 += 0x24u;  /* 0C057EB6 add #imm,Rn */
	r15 = r14;  /* 0C057EB8 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C057EBCu, 4);  /* 0C057EBA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C057EBEu, 1);  /* 0C057EBC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C057EC0u, 1);  /* 0C057EBE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C057EC2u, 1);  /* 0C057EC0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C057EC4u, 1);  /* 0C057EC2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C057EC6u, 1);  /* 0C057EC4 mov.l @Rm+,Rn */
	IF(0x0C057EC6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C057EC6 rts */
L_0C057ED0: BLKS(0x0C057ED0u);
	r6 = 0x400u; UPD(0x0C057ED2u, 1);  /* 0C057ED0 mov.w @(disp,pc),Rn */
	r7 = 0xFFu; UPD(0x0C057ED4u, 1);  /* 0C057ED2 mov.w @(disp,pc),Rn */
	r3 = 0xC21CA2Cu; UPD(0x0C057ED6u, 1);  /* 0C057ED4 mov.l @(disp,pc),Rn */
	r5 = 0x3FFFu; UPD(0x0C057ED8u, 1);  /* 0C057ED6 mov.w @(disp,pc),Rn */
L_0C057ED8: BLKS(0x0C057ED8u);
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C057EDAu, 1);  /* 0C057ED8 mov.w @Rm+,Rn */
	r0 &= r5;  /* 0C057EDA and Rm,Rn */
	T = r0 == r6;  /* 0C057EDC cmp/eq Rm,Rn */
	if (T) { UPD(0x0C057F20u, 5); goto L_0C057F20; }  /* 0C057EDE bt */
L_0C057EE0: BLKS(0x0C057EE0u);
	r0 = r2;  /* 0C057EE0 mov Rm,Rn */
	r0 += 0x1u;  /* 0C057EE2 add #imm,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C057EE4 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r7;  /* 0C057EE6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C057ED8u, 7); goto L_0C057ED8; }  /* 0C057EE8 bf */
L_0C057EEA: BLKS(0x0C057EEAu);
	r0 = 0x100u; UPD(0x0C057EECu, 1);  /* 0C057EEA mov.w @(disp,pc),Rn */
L_0C057EEC: BLKS(0x0C057EECu);
	r3 = 0xFFu; UPD(0x0C057EEEu, 1);  /* 0C057EEC mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r0;  /* 0C057EEE exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C057EF0 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C057EB4u, 5); goto L_0C057EB4; } goto L_0C057EF6; }  /* 0C057EF2 bt/s */
L_0C057EF6: BLKS(0x0C057EF6u);
	r2 = 0x3FFFu; UPD(0x0C057EF8u, 2);  /* 0C057EF6 mov.w @(disp,pc),Rn */
	r7 = r8;  /* 0C057EF8 mov Rm,Rn */
	r6 = 0xC21CA2Cu; UPD(0x0C057EFCu, 2);  /* 0C057EFA mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C057EFC add Rm,Rn */
	r7 &= r2;  /* 0C057EFE and Rm,Rn */
	IF(0x0C057F00u); W16(r0 + r6, r7); UPD(0x0C057F02u, 3);  /* 0C057F00 mov.w Rm,@(r0,Rn) */
	r5 = 0x22u;  /* 0C057F02 mov #imm,Rn */
	r5 += r14;  /* 0C057F04 add Rm,Rn */
	r4 += 0x8u;  /* 0C057F06 add #imm,Rn */
	r7 = 0xC283CB8u; UPD(0x0C057F0Au, 4);  /* 0C057F08 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C057F0A exts.w Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r5); UPD(0x0C057F0Eu, 2);  /* 0C057F0C mov.w @Rm,Rn */
	r4 += 0xFFFFFFF8u;  /* 0C057F0E add #imm,Rn */
	r6 = 0xC22466Eu; UPD(0x0C057F12u, 2);  /* 0C057F10 mov.l @(disp,pc),Rn */
	r2 = 0xC392E26u; UPD(0x0C057F14u, 1);  /* 0C057F12 mov.l @(disp,pc),Rn */
	IF(0x0C057F14u); W16(r0 + r7, r1); UPD(0x0C057F16u, 1);  /* 0C057F14 mov.w Rm,@(r0,Rn) */
	{ IF(0x0C057F18u); W16(r0 + r6, r3); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C057E70u, 3); goto L_0C057E70; }  /* 0C057F16 bra */
L_0C057F20: BLKS(0x0C057F20u);
	{ r0 = r2; /* slot mov Rm,Rn */ UPD(0x0C057EECu, 3); goto L_0C057EEC; }  /* 0C057F20 bra */
}

/* FUN_0c057f60 */
void f_0C057F60(sh3_t *c)
{
	LOCALS;
L_0C057F60: BLKS(0x0C057F60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C057F62u, 1);  /* 0C057F60 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C057F62 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C057F66u, 2);  /* 0C057F64 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C057F68u, 1);  /* 0C057F66 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C057F6Au, 1);  /* 0C057F68 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C057F6Cu, 1);  /* 0C057F6A mov.l Rm,@-Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r6 = v_; } UPD(0x0C057F6Eu, 1);  /* 0C057F6C mov.w @Rm+,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C057F70u, 1);  /* 0C057F6E mov.l Rm,@-Rn */
	T = (r6 & r6) == 0;  /* 0C057F70 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C057FDEu, 4); goto L_0C057FDE; } goto L_0C057F76; }  /* 0C057F72 bt/s */
L_0C057F76: BLKS(0x0C057F76u);
	r10 = 0xFFFF8400u; UPD(0x0C057F78u, 2);  /* 0C057F76 mov.w @(disp,pc),Rn */
	r4 += r4;  /* 0C057F78 add Rm,Rn */
	r12 = 0xC38BC64u; UPD(0x0C057F7Cu, 2);  /* 0C057F7A mov.l @(disp,pc),Rn */
	r11 = r10;  /* 0C057F7C mov Rm,Rn */
	r9 = 0xC286068u; UPD(0x0C057F80u, 2);  /* 0C057F7E mov.l @(disp,pc),Rn */
	r4 += r12;  /* 0C057F80 add Rm,Rn */
	r8 = 0xC21CA2Cu; UPD(0x0C057F84u, 2);  /* 0C057F82 mov.l @(disp,pc),Rn */
	r0 = 0xFFu; UPD(0x0C057F86u, 1);  /* 0C057F84 mov.w @(disp,pc),Rn */
	IF(0x0C057F86u); ;  /* 0C057F86 nop */
	UPD(0x0C057F88u, 1);
L_0C057F88: BLKS(0x0C057F88u);
	r2 = 0x400u; UPD(0x0C057F8Au, 1);  /* 0C057F88 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C057F8A mov #imm,Rn */
	W16(r4, r2); UPD(0x0C057F8Eu, 2);  /* 0C057F8C mov.w Rm,@Rn */
	r4 += 0x20u;  /* 0C057F8E add #imm,Rn */
	r3 = r7;  /* 0C057F90 mov Rm,Rn */
	UPD(0x0C057F92u, 2);
L_0C057F92: BLKS(0x0C057F92u);
	r3 += r3;  /* 0C057F92 add Rm,Rn */
	r2 = r3;  /* 0C057F94 mov Rm,Rn */
	r2 += r9;  /* 0C057F96 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C057F9Au, 4);  /* 0C057F98 mov.w @Rm,Rn */
	r1 = r1 & 0xFFFF;  /* 0C057F9A extu.w Rm,Rn */
	T = r1 == r6;  /* 0C057F9C cmp/eq Rm,Rn */
	if (T) { UPD(0x0C058010u, 5); goto L_0C058010; }  /* 0C057F9E bt */
L_0C057FA0: BLKS(0x0C057FA0u);
	r2 = r3;  /* 0C057FA0 mov Rm,Rn */
	r2 += r8;  /* 0C057FA2 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C057FA6u, 3);  /* 0C057FA4 mov.w @Rm,Rn */
	r3 = r1 & 0xFFFF;  /* 0C057FA6 extu.w Rm,Rn */
	T = r3 == r6;  /* 0C057FA8 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C058000u, 5); goto L_0C058000; }  /* 0C057FAA bt */
L_0C057FAC: BLKS(0x0C057FACu);
	r2 = r7;  /* 0C057FAC mov Rm,Rn */
	r2 += 0x1u;  /* 0C057FAE add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C057FB0 exts.w Rm,Rn */
	T = (s32)r7 > (s32)r0;  /* 0C057FB2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C057F92u, 7); goto L_0C057F92; } goto L_0C057FB8; }  /* 0C057FB4 bf/s */
L_0C057FB8: BLKS(0x0C057FB8u);
	r3 = 0xC392DECu; UPD(0x0C057FBAu, 2);  /* 0C057FB8 mov.l @(disp,pc),Rn */
	r7 = 0xC21F884u; UPD(0x0C057FBCu, 1);  /* 0C057FBA mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C057FBEu, 1);  /* 0C057FBC mov.w @Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C057FC0u, 1);  /* 0C057FBE mov.w @Rm,Rn */
	r7 = r3 & 0xFFFF;  /* 0C057FC0 extu.w Rm,Rn */
	r3 = r2 & 0xFFFF;  /* 0C057FC2 extu.w Rm,Rn */
	IF(0x0C057FC4u); r3 <<= 2;  /* 0C057FC4 shll2 Rn */
	IF(0x0C057FC6u); r3 <<= 2;  /* 0C057FC6 shll2 Rn */
	r3 += r7;  /* 0C057FC8 add Rm,Rn */
	r3 += r3;  /* 0C057FCA add Rm,Rn */
	r3 += r12;  /* 0C057FCC add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C057FD0u, 8);  /* 0C057FCE mov.w @Rm,Rn */
	r7 = 0x3FFFu; UPD(0x0C057FD2u, 1);  /* 0C057FD0 mov.w @(disp,pc),Rn */
	r2 &= r7;  /* 0C057FD2 and Rm,Rn */
	T = r2 == r6;  /* 0C057FD4 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C057FF0u, 5); goto L_0C057FF0; }  /* 0C057FD6 bt */
L_0C057FD8: BLKS(0x0C057FD8u);
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r6 = v_; } UPD(0x0C057FDAu, 1);  /* 0C057FD8 mov.w @Rm+,Rn */
	T = (r6 & r6) == 0;  /* 0C057FDA tst Rm,Rn */
	if (!T) { UPD(0x0C057F88u, 4); goto L_0C057F88; }  /* 0C057FDC bf */
L_0C057FDE: BLKS(0x0C057FDEu);
	r15 = r14;  /* 0C057FDE mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C057FE2u, 2);  /* 0C057FE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C057FE4u, 1);  /* 0C057FE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C057FE6u, 1);  /* 0C057FE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C057FE8u, 1);  /* 0C057FE6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C057FEAu, 1);  /* 0C057FE8 mov.l @Rm+,Rn */
	IF(0x0C057FEAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C057FEA rts */
L_0C057FF0: BLKS(0x0C057FF0u);
	{ W16(r3, r2); /* slot mov.w Rm,@Rn */ UPD(0x0C057FD8u, 3); goto L_0C057FD8; }  /* 0C057FF0 bra */
L_0C058000: BLKS(0x0C058000u);
	{ W16(r2, r11); /* slot mov.w Rm,@Rn */ UPD(0x0C057FACu, 3); goto L_0C057FAC; }  /* 0C058000 bra */
L_0C058010: BLKS(0x0C058010u);
	{ W16(r2, r10); /* slot mov.w Rm,@Rn */ UPD(0x0C057FA0u, 3); goto L_0C057FA0; }  /* 0C058010 bra */
}

/* FUN_0c058030 */
void f_0C058030(sh3_t *c)
{
	LOCALS;
L_0C058030: BLKS(0x0C058030u);
	r6 = 0x1FFu; UPD(0x0C058032u, 1);  /* 0C058030 mov.w @(disp,pc),Rn */
	r0 = r4;  /* 0C058032 mov Rm,Rn */
	r0 &= r6;  /* 0C058034 and Rm,Rn */
	r3 = 0xC0B1F40u; UPD(0x0C058038u, 3);  /* 0C058036 mov.l @(disp,pc),Rn */
	IF(0x0C058038u); r0 <<= 2;  /* 0C058038 shll2 Rn */
	r4 = 0xFFFFFFFCu;  /* 0C05803A mov #imm,Rn */
	IF(0x0C05803Cu); r2 = R32(r0 + r3); UPD(0x0C05803Eu, 3);  /* 0C05803C mov.l @(r0,Rm),Rn */
	IF(0x0C05803Eu); ARG0(0x454Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C05803E shad Rm,Rn */
	IF(0x0C058040u); MACL = r2 * r5;  /* 0C058040 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C058044u, 4);  /* 0C058042 mov.l Rm,@-Rn */
	IF(0x0C058044u); r0 = MACL;  /* 0C058044 sts macl,Rn */
	r2 = 0xFFFFFFF8u;  /* 0C058046 mov #imm,Rn */
	IF(0x0C058048u); ARG0(0x402Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C058048 shad Rm,Rn */
	r14 = r15;  /* 0C05804A mov Rm,Rn */
	r15 = r14;  /* 0C05804C mov Rm,Rn */
	IF(0x0C05804Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 8); RET(t_); }  /* 0C05804E rts */
}

/* FUN_0c058060 */
void f_0C058060(sh3_t *c)
{
	LOCALS;
L_0C058060: BLKS(0x0C058060u);
	r7 = 0x80u; UPD(0x0C058062u, 1);  /* 0C058060 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C058062 exts.w Rm,Rn */
	r6 = 0x1FFu; UPD(0x0C058066u, 2);  /* 0C058064 mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C058066 add Rm,Rn */
	r0 &= r6;  /* 0C058068 and Rm,Rn */
	r3 = 0xC0B1F40u; UPD(0x0C05806Cu, 3);  /* 0C05806A mov.l @(disp,pc),Rn */
	IF(0x0C05806Cu); r0 <<= 2;  /* 0C05806C shll2 Rn */
	r4 = 0xFFFFFFFCu;  /* 0C05806E mov #imm,Rn */
	IF(0x0C058070u); r2 = R32(r0 + r3); UPD(0x0C058072u, 3);  /* 0C058070 mov.l @(r0,Rm),Rn */
	IF(0x0C058072u); ARG0(0x454Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C058072 shad Rm,Rn */
	IF(0x0C058074u); MACL = r2 * r5;  /* 0C058074 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C058078u, 4);  /* 0C058076 mov.l Rm,@-Rn */
	IF(0x0C058078u); r0 = MACL;  /* 0C058078 sts macl,Rn */
	r2 = 0xFFFFFFF8u;  /* 0C05807A mov #imm,Rn */
	IF(0x0C05807Cu); ARG0(0x402Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C05807C shad Rm,Rn */
	r14 = r15;  /* 0C05807E mov Rm,Rn */
	r15 = r14;  /* 0C058080 mov Rm,Rn */
	IF(0x0C058082u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 8); RET(t_); }  /* 0C058082 rts */
}

/* FUN_0c058090 */
void f_0C058090(sh3_t *c)
{
	LOCALS;
L_0C058090: BLKS(0x0C058090u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C058092u, 1);  /* 0C058090 mov.l Rm,@-Rn */
	r0 = 0xC0AFE40u; UPD(0x0C058094u, 1);  /* 0C058092 mov.l @(disp,pc),Rn */
	IF(0x0C058094u); r15 -= 4; W32(r15, PR); UPD(0x0C058096u, 1);  /* 0C058094 sts.l pr,@-Rn */
	IF(0x0C058096u); { u32 t_ = r0; PR = 0x0C05809Au; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C05809Au); }  /* 0C058096 jsr @Rn */
L_0C05809A: BLKS(0x0C05809Au);
	r3 = r0;  /* 0C05809A mov Rm,Rn */
	r0 = 0x280u; UPD(0x0C05809Eu, 2);  /* 0C05809C mov.w @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C05809E mov #imm,Rn */
	r3 &= r5;  /* 0C0580A0 and Rm,Rn */
	IF(0x0C0580A2u); MACL = r3 * r0;  /* 0C0580A2 mul.l Rm,Rn */
	r2 = 0xC283794u; UPD(0x0C0580A6u, 5);  /* 0C0580A4 mov.l @(disp,pc),Rn */
	IF(0x0C0580A6u); r0 = MACL;  /* 0C0580A6 sts macl,Rn */
	IF(0x0C0580A8u); r4 = R32(r0 + r2); UPD(0x0C0580AAu, 2);  /* 0C0580A8 mov.l @(r0,Rm),Rn */
	r0 = 0x4000000u; UPD(0x0C0580ACu, 1);  /* 0C0580AA mov.l @(disp,pc),Rn */
	T = (r4 & r0) == 0;  /* 0C0580AC tst Rm,Rn */
	{ u32 c_ = !T; r6 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0580B4u, 4); goto L_0C0580B4; } goto L_0C0580B2; }  /* 0C0580AE bf/s */
L_0C0580B2: BLKS(0x0C0580B2u);
	r3 ^= r6;  /* 0C0580B2 xor Rm,Rn */
	UPD(0x0C0580B4u, 2);
L_0C0580B4: BLKS(0x0C0580B4u);
	r0 = r3;  /* 0C0580B4 mov Rm,Rn */
	r15 = r14;  /* 0C0580B6 mov Rm,Rn */
	IF(0x0C0580B8u); PR = R32(r15); r15 += 4; UPD(0x0C0580BAu, 3);  /* 0C0580B8 lds.l @Rn+,pr */
	IF(0x0C0580BAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0580BA rts */
}


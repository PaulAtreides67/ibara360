#include "recomp.h"
#include "recomp_funcs.h"

void f_0C078EF0(sh3_t *c)
{
	LOCALS;
L_0C078EF0: BLKS(0x0C078EF0u);
	r3 = 0xB4u; UPD(0x0C078EF2u, 1);  /* 0C078EF0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C078EF2 exts.w Rm,Rn */
	IF(0x0C078EF4u); MACL = r4 * r3;  /* 0C078EF4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C078EF8u, 4);  /* 0C078EF6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C078EFAu, 1);  /* 0C078EF8 mov.l Rm,@-Rn */
	IF(0x0C078EFAu); r2 = MACL;  /* 0C078EFA sts macl,Rn */
	r0 += r2;  /* 0C078EFC add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C078F00u, 3);  /* 0C078EFE mov.l @(disp,Rm),Rn */
	r0 = 0x8u;  /* 0C078F00 mov #imm,Rn */
	T = r2 > r0;  /* 0C078F02 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C078FD0u, 5); goto L_0C078FD0; } goto L_0C078F08; }  /* 0C078F04 bt/s */
L_0C078F08: BLKS(0x0C078F08u);
	r0 = 0xC078F18u;  /* 0C078F08 mova @(disp,pc),r0 */
	IF(0x0C078F0Au); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C078F0Cu, 3);  /* 0C078F0A mov.b @(r0,Rm),Rn */
	r5 = r5 & 0xFF;  /* 0C078F0C extu.b Rm,Rn */
	IF(0x0C078F0Eu); { u32 tv_ = (r5 + 0x0C078F12u); u32 t_ = PHYS(tv_); IF(0x0C078F10u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C078F30u: goto L_0C078F30; case 0x0C078F60u: goto L_0C078F60; case 0x0C078F70u: goto L_0C078F70; case 0x0C078F80u: goto L_0C078F80; case 0x0C078F90u: goto L_0C078F90; case 0x0C078FB0u: goto L_0C078FB0; case 0x0C078FC0u: goto L_0C078FC0; default: JUMPD(tv_); } }  /* 0C078F0E braf Rn */
L_0C078F30: BLKS(0x0C078F30u);
	r7 = 0xB4u; UPD(0x0C078F32u, 1);  /* 0C078F30 mov.w @(disp,pc),Rn */
	IF(0x0C078F32u); MACL = r4 * r7;  /* 0C078F32 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C078F36u, 3);  /* 0C078F34 mov.l @(disp,pc),Rn */
	IF(0x0C078F36u); r0 = MACL;  /* 0C078F36 sts macl,Rn */
	IF(0x0C078F38u); r0 = R32(r0 + r6); UPD(0x0C078F3Au, 2);  /* 0C078F38 mov.l @(r0,Rm),Rn */
	IF(0x0C078F3Au); r0 >>= 16;  /* 0C078F3A shlr16 Rn */
	IF(0x0C078F3Cu); r0 >>= 8;  /* 0C078F3C shlr8 Rn */
	IF(0x0C078F3Eu); r0 >>= 2;  /* 0C078F3E shlr2 Rn */
	r0 &= 0x1u;  /* 0C078F40 and #imm,r0 */
	r5 = 0xC18A1F8u; UPD(0x0C078F44u, 5);  /* 0C078F42 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C078F44 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C078F4Cu, 4); goto L_0C078F4C; }  /* 0C078F46 bt */
L_0C078F48: BLKS(0x0C078F48u);
	r5 = 0xC18A2DAu; UPD(0x0C078F4Au, 1);  /* 0C078F48 mov.l @(disp,pc),Rn */
	IF(0x0C078F4Au); ;  /* 0C078F4A nop */
	UPD(0x0C078F4Cu, 1);
L_0C078F4C: BLKS(0x0C078F4Cu);
	r3 = 0xC0A17E0u; UPD(0x0C078F4Eu, 1);  /* 0C078F4C mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C078F4E mov Rm,Rn */
	IF(0x0C078F50u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A17E0u: TAIL(f_0C0A17E0); default: JUMPD(tv_); } }  /* 0C078F50 jmp @Rn */
L_0C078F60: BLKS(0x0C078F60u);
	r5 = 0xC18A33Cu; UPD(0x0C078F62u, 1);  /* 0C078F60 mov.l @(disp,pc),Rn */
	{ IF(0x0C078F64u); ; /* slot nop */ UPD(0x0C078F4Cu, 3); goto L_0C078F4C; }  /* 0C078F62 bra */
L_0C078F70: BLKS(0x0C078F70u);
	r5 = 0xC18A368u; UPD(0x0C078F72u, 1);  /* 0C078F70 mov.l @(disp,pc),Rn */
	{ IF(0x0C078F74u); ; /* slot nop */ UPD(0x0C078F4Cu, 3); goto L_0C078F4C; }  /* 0C078F72 bra */
L_0C078F80: BLKS(0x0C078F80u);
	r5 = 0xC18A394u; UPD(0x0C078F82u, 1);  /* 0C078F80 mov.l @(disp,pc),Rn */
	{ IF(0x0C078F84u); ; /* slot nop */ UPD(0x0C078F4Cu, 3); goto L_0C078F4C; }  /* 0C078F82 bra */
L_0C078F90: BLKS(0x0C078F90u);
	r0 = 0xB4u; UPD(0x0C078F92u, 1);  /* 0C078F90 mov.w @(disp,pc),Rn */
	IF(0x0C078F92u); MACL = r4 * r0;  /* 0C078F92 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C078F96u, 3);  /* 0C078F94 mov.l @(disp,pc),Rn */
	IF(0x0C078F96u); r0 = MACL;  /* 0C078F96 sts macl,Rn */
	IF(0x0C078F98u); r0 = R32(r0 + r2); UPD(0x0C078F9Au, 2);  /* 0C078F98 mov.l @(r0,Rm),Rn */
	IF(0x0C078F9Au); r0 >>= 16;  /* 0C078F9A shlr16 Rn */
	IF(0x0C078F9Cu); r0 >>= 8;  /* 0C078F9C shlr8 Rn */
	IF(0x0C078F9Eu); r0 >>= 2;  /* 0C078F9E shlr2 Rn */
	r0 &= 0x1u;  /* 0C078FA0 and #imm,r0 */
	r5 = 0xC18A40Au; UPD(0x0C078FA4u, 5);  /* 0C078FA2 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C078FA4 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C078F4Cu, 4); goto L_0C078F4C; }  /* 0C078FA6 bt */
L_0C078FA8: BLKS(0x0C078FA8u);
	r5 = 0xC18A3DEu; UPD(0x0C078FAAu, 1);  /* 0C078FA8 mov.l @(disp,pc),Rn */
	{ IF(0x0C078FACu); ; /* slot nop */ UPD(0x0C078F4Cu, 3); goto L_0C078F4C; }  /* 0C078FAA bra */
L_0C078FB0: BLKS(0x0C078FB0u);
	r5 = 0xC18A3C0u; UPD(0x0C078FB2u, 1);  /* 0C078FB0 mov.l @(disp,pc),Rn */
	{ IF(0x0C078FB4u); ; /* slot nop */ UPD(0x0C078F4Cu, 3); goto L_0C078F4C; }  /* 0C078FB2 bra */
L_0C078FC0: BLKS(0x0C078FC0u);
	r5 = 0xC18A44Eu; UPD(0x0C078FC2u, 1);  /* 0C078FC0 mov.l @(disp,pc),Rn */
	{ IF(0x0C078FC4u); ; /* slot nop */ UPD(0x0C078F4Cu, 3); goto L_0C078F4C; }  /* 0C078FC2 bra */
L_0C078FD0: BLKS(0x0C078FD0u);
	r15 = r14;  /* 0C078FD0 mov Rm,Rn */
	IF(0x0C078FD2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C078FD2 rts */
}

void f_0C079010(sh3_t *c)
{
	LOCALS;
L_0C079010: BLKS(0x0C079010u);
	r3 = 0xB4u; UPD(0x0C079012u, 1);  /* 0C079010 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C079012 exts.w Rm,Rn */
	IF(0x0C079014u); MACL = r4 * r3;  /* 0C079014 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C079018u, 4);  /* 0C079016 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07901Au, 1);  /* 0C079018 mov.l Rm,@-Rn */
	IF(0x0C07901Au); r2 = MACL;  /* 0C07901A sts macl,Rn */
	r0 += r2;  /* 0C07901C add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C079020u, 3);  /* 0C07901E mov.l @(disp,Rm),Rn */
	r0 = 0x3u;  /* 0C079020 mov #imm,Rn */
	T = r2 > r0;  /* 0C079022 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0790A0u, 5); goto L_0C0790A0; } goto L_0C079028; }  /* 0C079024 bt/s */
L_0C079028: BLKS(0x0C079028u);
	r0 = 0xC079030u;  /* 0C079028 mova @(disp,pc),r0 */
	IF(0x0C07902Au); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07902Cu, 3);  /* 0C07902A mov.b @(r0,Rm),Rn */
	IF(0x0C07902Cu); { u32 tv_ = (r5 + 0x0C079030u); u32 t_ = PHYS(tv_); IF(0x0C07902Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C079040u: goto L_0C079040; case 0x0C079050u: goto L_0C079050; case 0x0C079060u: goto L_0C079060; case 0x0C079080u: goto L_0C079080; default: JUMPD(tv_); } }  /* 0C07902C braf Rn */
L_0C079040: BLKS(0x0C079040u);
	r5 = 0xC18B338u; UPD(0x0C079042u, 1);  /* 0C079040 mov.l @(disp,pc),Rn */
L_0C079042: BLKS(0x0C079042u);
	r2 = 0xC0A17E0u; UPD(0x0C079044u, 1);  /* 0C079042 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C079044 mov Rm,Rn */
	IF(0x0C079046u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A17E0u: TAIL(f_0C0A17E0); default: JUMPD(tv_); } }  /* 0C079046 jmp @Rn */
L_0C079050: BLKS(0x0C079050u);
	r5 = 0xC18B378u; UPD(0x0C079052u, 1);  /* 0C079050 mov.l @(disp,pc),Rn */
	{ IF(0x0C079054u); ; /* slot nop */ UPD(0x0C079042u, 3); goto L_0C079042; }  /* 0C079052 bra */
L_0C079060: BLKS(0x0C079060u);
	r0 = 0xB4u; UPD(0x0C079062u, 1);  /* 0C079060 mov.w @(disp,pc),Rn */
	IF(0x0C079062u); MACL = r4 * r0;  /* 0C079062 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C079066u, 3);  /* 0C079064 mov.l @(disp,pc),Rn */
	IF(0x0C079066u); r0 = MACL;  /* 0C079066 sts macl,Rn */
	IF(0x0C079068u); r7 = R32(r0 + r2); UPD(0x0C07906Au, 2);  /* 0C079068 mov.l @(r0,Rm),Rn */
	r6 = 0x4000000u; UPD(0x0C07906Cu, 1);  /* 0C07906A mov.l @(disp,pc),Rn */
	r5 = 0xC18B3B8u; UPD(0x0C07906Eu, 1);  /* 0C07906C mov.l @(disp,pc),Rn */
	T = (r7 & r6) == 0;  /* 0C07906E tst Rm,Rn */
	if (T) { UPD(0x0C079042u, 4); goto L_0C079042; }  /* 0C079070 bt */
L_0C079072: BLKS(0x0C079072u);
	r5 = 0xC18B3D0u; UPD(0x0C079074u, 1);  /* 0C079072 mov.l @(disp,pc),Rn */
	{ IF(0x0C079076u); ; /* slot nop */ UPD(0x0C079042u, 3); goto L_0C079042; }  /* 0C079074 bra */
L_0C079080: BLKS(0x0C079080u);
	r7 = 0xB4u; UPD(0x0C079082u, 1);  /* 0C079080 mov.w @(disp,pc),Rn */
	IF(0x0C079082u); MACL = r4 * r7;  /* 0C079082 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C079086u, 3);  /* 0C079084 mov.l @(disp,pc),Rn */
	IF(0x0C079086u); r0 = MACL;  /* 0C079086 sts macl,Rn */
	IF(0x0C079088u); r5 = R32(r0 + r6); UPD(0x0C07908Au, 2);  /* 0C079088 mov.l @(r0,Rm),Rn */
	r3 = 0x4000000u; UPD(0x0C07908Cu, 1);  /* 0C07908A mov.l @(disp,pc),Rn */
	T = (r5 & r3) == 0;  /* 0C07908C tst Rm,Rn */
	r5 = 0xC18B3E8u; UPD(0x0C079090u, 2);  /* 0C07908E mov.l @(disp,pc),Rn */
	if (T) { UPD(0x0C079042u, 3); goto L_0C079042; }  /* 0C079090 bt */
L_0C079092: BLKS(0x0C079092u);
	r5 = 0xC18B400u; UPD(0x0C079094u, 1);  /* 0C079092 mov.l @(disp,pc),Rn */
	{ IF(0x0C079096u); ; /* slot nop */ UPD(0x0C079042u, 3); goto L_0C079042; }  /* 0C079094 bra */
L_0C0790A0: BLKS(0x0C0790A0u);
	r15 = r14;  /* 0C0790A0 mov Rm,Rn */
	IF(0x0C0790A2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0790A2 rts */
}

void f_0C0790D0(sh3_t *c)
{
	LOCALS;
L_0C0790D0: BLKS(0x0C0790D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0790D2u, 1);  /* 0C0790D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0790D4u, 1);  /* 0C0790D2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0790D4 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0790D8u, 2);  /* 0C0790D6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0790DAu, 1);  /* 0C0790D8 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0790DCu, 1);  /* 0C0790DA mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0790DEu, 1);  /* 0C0790DC mov.l Rm,@-Rn */
	IF(0x0C0790DEu); MACL = r8 * r2;  /* 0C0790DE mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0790E2u, 3);  /* 0C0790E0 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C0790E4u, 1);  /* 0C0790E2 mov.l @(disp,pc),Rn */
	IF(0x0C0790E4u); r10 = MACL;  /* 0C0790E4 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0790E8u, 2);  /* 0C0790E6 mov.l Rm,@-Rn */
	r10 += r0;  /* 0C0790E8 add Rm,Rn */
	IF(0x0C0790EAu); r15 -= 4; W32(r15, PR); UPD(0x0C0790ECu, 2);  /* 0C0790EA sts.l pr,@-Rn */
	r10 += 0x3Cu;  /* 0C0790EC add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0790F0u, 2);  /* 0C0790EE mov.w @Rm,Rn */
	r14 = r15;  /* 0C0790F0 mov Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0790F2 tst Rm,Rn */
	{ u32 c_ = !T; r10 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0790FCu, 5); goto L_0C0790FC; } goto L_0C0790F8; }  /* 0C0790F4 bf/s */
L_0C0790F8: BLKS(0x0C0790F8u);
	{ IF(0x0C0790FAu); ; /* slot nop */ UPD(0x0C079280u, 4); goto L_0C079280; }  /* 0C0790F8 bra */
L_0C0790FC: BLKS(0x0C0790FCu);
	r9 = 0xC0A1830u; UPD(0x0C0790FEu, 1);  /* 0C0790FC mov.l @(disp,pc),Rn */
	IF(0x0C0790FEu); { u32 t_ = r9; PR = 0x0C079102u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1830, 0x0C0A1830u, 0x0C079102u); }  /* 0C0790FE jsr @Rn */
L_0C079102: BLKS(0x0C079102u);
	T = (r0 & r0) == 0;  /* 0C079102 tst Rm,Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0791A0u, 4); goto L_0C0791A0; } goto L_0C079108; }  /* 0C079104 bt/s */
L_0C079108: BLKS(0x0C079108u);
	r4 = 0x9Cu; UPD(0x0C07910Au, 2);  /* 0C079108 mov.w @(disp,pc),Rn */
	r1 = 0xAu;  /* 0C07910A mov #imm,Rn */
	r4 += r10;  /* 0C07910C add Rm,Rn */
	W8(r4, r1); UPD(0x0C079110u, 3);  /* 0C07910E mov.b Rm,@Rn */
	r3 = 0x3u;  /* 0C079110 mov #imm,Rn */
	r4 += 0x1u;  /* 0C079112 add #imm,Rn */
	r2 = R32(r10 + 0x8u); UPD(0x0C079116u, 3);  /* 0C079114 mov.l @(disp,Rm),Rn */
	T = r2 > r3;  /* 0C079116 cmp/hi Rm,Rn */
	{ u32 c_ = T; W8(r4, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C079180u, 4); goto L_0C079180; } UPD(0x0C07911Cu, 1); goto L_0C07911C; }  /* 0C079118 bt/s */
L_0C07911C: BLKS(0x0C07911Cu);
	r0 = 0xC079124u;  /* 0C07911C mova @(disp,pc),r0 */
	IF(0x0C07911Eu); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C079120u, 2);  /* 0C07911E mov.b @(r0,Rm),Rn */
	IF(0x0C079120u); { u32 tv_ = (r5 + 0x0C079124u); u32 t_ = PHYS(tv_); IF(0x0C079122u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C079130u: goto L_0C079130; case 0x0C079150u: goto L_0C079150; case 0x0C079160u: goto L_0C079160; case 0x0C079170u: goto L_0C079170; default: JUMPD(tv_); } }  /* 0C079120 braf Rn */
L_0C079130: BLKS(0x0C079130u);
	r5 = 0xC18B5CEu; UPD(0x0C079132u, 1);  /* 0C079130 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C079132 mov Rm,Rn */
	UPD(0x0C079134u, 1);
L_0C079134: BLKS(0x0C079134u);
	r6 = 0xC0A17E0u; UPD(0x0C079136u, 1);  /* 0C079134 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C079136 mov Rm,Rn */
	IF(0x0C079138u); PR = R32(r15); r15 += 4; UPD(0x0C07913Au, 2);  /* 0C079138 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07913Cu, 1);  /* 0C07913A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07913Eu, 1);  /* 0C07913C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C079140u, 1);  /* 0C07913E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C079142u, 1);  /* 0C079140 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C079144u, 1);  /* 0C079142 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C079146u, 1);  /* 0C079144 mov.l @Rm+,Rn */
	IF(0x0C079146u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A17E0u: TAIL(f_0C0A17E0); default: JUMPD(tv_); } }  /* 0C079146 jmp @Rn */
L_0C079150: BLKS(0x0C079150u);
	r5 = 0xC18B614u; UPD(0x0C079152u, 1);  /* 0C079150 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C079134u, 3); goto L_0C079134; }  /* 0C079152 bra */
L_0C079160: BLKS(0x0C079160u);
	r5 = 0xC18B65Au; UPD(0x0C079162u, 1);  /* 0C079160 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C079134u, 3); goto L_0C079134; }  /* 0C079162 bra */
L_0C079170: BLKS(0x0C079170u);
	r5 = 0xC18B6A0u; UPD(0x0C079172u, 1);  /* 0C079170 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C079134u, 3); goto L_0C079134; }  /* 0C079172 bra */
L_0C079180: BLKS(0x0C079180u);
	r15 = r14;  /* 0C079180 mov Rm,Rn */
	IF(0x0C079182u); PR = R32(r15); r15 += 4; UPD(0x0C079184u, 2);  /* 0C079182 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C079186u, 1);  /* 0C079184 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C079188u, 1);  /* 0C079186 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07918Au, 1);  /* 0C079188 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07918Cu, 1);  /* 0C07918A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07918Eu, 1);  /* 0C07918C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C079190u, 1);  /* 0C07918E mov.l @Rm+,Rn */
	IF(0x0C079190u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C079190 rts */
L_0C0791A0: BLKS(0x0C0791A0u);
	r8 = 0x9Cu; UPD(0x0C0791A2u, 1);  /* 0C0791A0 mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C0791A2 add Rm,Rn */
	r11 = r8;  /* 0C0791A4 mov Rm,Rn */
	r11 += 0x3u;  /* 0C0791A6 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r11); UPD(0x0C0791AAu, 4);  /* 0C0791A8 mov.b @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C0791AA extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0791AC tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C079210u, 5); goto L_0C079210; } goto L_0C0791B2; }  /* 0C0791AE bt/s */
L_0C0791B2: BLKS(0x0C0791B2u);
	if (!T) { UPD(0x0C079180u, 4); goto L_0C079180; }  /* 0C0791B2 bf */
L_0C0791B4: BLKS(0x0C0791B4u);
	r5 = R32(r10 + 0x8u); UPD(0x0C0791B6u, 1);  /* 0C0791B4 mov.l @(disp,Rm),Rn */
	r6 = 0x3u;  /* 0C0791B6 mov #imm,Rn */
	IF(0x0C0791B8u); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0791B8 shld Rm,Rn */
	r13 = 0xC18B5A4u; UPD(0x0C0791BCu, 3);  /* 0C0791BA mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C0791BC add #imm,Rn */
	r5 += r13;  /* 0C0791BE add Rm,Rn */
	r12 = R32(r5); UPD(0x0C0791C2u, 3);  /* 0C0791C0 mov.l @Rm,Rn */
	r13 = R32(r10 + 0x24u); UPD(0x0C0791C4u, 1);  /* 0C0791C2 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C0791C6u, 1);  /* 0C0791C4 mov.w @(disp,pc),Rn */
	r13 += r12;  /* 0C0791C6 add Rm,Rn */
	IF(0x0C0791C8u); r2 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0791CAu, 2);  /* 0C0791C8 mov.b @(r0,Rm),Rn */
	r4 = R32(r5 + 0x4u); UPD(0x0C0791CCu, 1);  /* 0C0791CA mov.l @(disp,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C0791CC extu.b Rm,Rn */
	r12 = R32(r10 + 0x28u); UPD(0x0C0791D0u, 2);  /* 0C0791CE mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C0791D2u, 1);  /* 0C0791D0 mov.l Rm,@Rn */
	r12 += r4;  /* 0C0791D2 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0791D6u, 2);  /* 0C0791D4 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C0791D6 mov Rm,Rn */
	IF(0x0C0791D8u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0791DAu, 2);  /* 0C0791D8 mov.b @(r0,Rm),Rn */
	r0 = 0xC050D70u; UPD(0x0C0791DCu, 1);  /* 0C0791DA mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C0791DC extu.b Rm,Rn */
	r5 = 0x40000u; UPD(0x0C0791E0u, 2);  /* 0C0791DE mov.l @(disp,pc),Rn */
	r4 = 0x8000u; UPD(0x0C0791E2u, 1);  /* 0C0791E0 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0791E4u, 1);  /* 0C0791E2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0791E4u); { u32 t_ = r0; PR = 0x0C0791E8u; W32(r15 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0791E8u); }  /* 0C0791E4 jsr @Rn */
L_0C0791E8: BLKS(0x0C0791E8u);
	r4 = 0x808080u; UPD(0x0C0791EAu, 1);  /* 0C0791E8 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C0791EA mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0791EEu, 2);  /* 0C0791EC mov.l Rm,@(disp,Rn) */
	r6 = r13;  /* 0C0791EE mov Rm,Rn */
	W32(r15 + 0x10u, r4); UPD(0x0C0791F2u, 2);  /* 0C0791F0 mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C0791F4u, 1);  /* 0C0791F2 mov.l @Rm,Rn */
	r10 = 0xC0ACA40u; UPD(0x0C0791F6u, 1);  /* 0C0791F4 mov.l @(disp,pc),Rn */
	IF(0x0C0791F6u); { u32 t_ = r10; PR = 0x0C0791FAu; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C0791FAu); }  /* 0C0791F6 jsr @Rn */
L_0C0791FA: BLKS(0x0C0791FAu);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0791FCu, 1);  /* 0C0791FA mov.b @Rm,Rn */
	r15 += 0x14u;  /* 0C0791FC add #imm,Rn */
	r1 += 0x1u;  /* 0C0791FE add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C079200 extu.b Rm,Rn */
	T = r0 == 0x78u;  /* 0C079202 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r8, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C079180u, 7); goto L_0C079180; } UPD(0x0C079208u, 1); goto L_0C079208; }  /* 0C079204 bf/s */
L_0C079208: BLKS(0x0C079208u);
	W8(r8, r9); UPD(0x0C07920Au, 1);  /* 0C079208 mov.b Rm,@Rn */
	W8(r11, r9); UPD(0x0C07920Cu, 1);  /* 0C07920A mov.b Rm,@Rn */
L_0C07920C: BLKS(0x0C07920Cu);
	{ IF(0x0C07920Eu); ; /* slot nop */ UPD(0x0C079180u, 3); goto L_0C079180; }  /* 0C07920C bra */
L_0C079210: BLKS(0x0C079210u);
	r1 = 0x99u; UPD(0x0C079212u, 1);  /* 0C079210 mov.w @(disp,pc),Rn */
	r1 += r10;  /* 0C079212 add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r1); UPD(0x0C079216u, 2);  /* 0C079214 mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C079216 add #imm,Rn */
	r0 = r12 & 0xFF;  /* 0C079218 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C07921A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r1, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C079180u, 6); goto L_0C079180; } UPD(0x0C079220u, 1); goto L_0C079220; }  /* 0C07921C bf/s */
L_0C079220: BLKS(0x0C079220u);
	r3 = R32(r10 + 0x8u); UPD(0x0C079222u, 1);  /* 0C079220 mov.l @(disp,Rm),Rn */
	r2 = 0x3u;  /* 0C079222 mov #imm,Rn */
	IF(0x0C079224u); ARG0(0x432Du); { s32 s_ = (s32)r2; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C079224 shld Rm,Rn */
	r13 = 0xC18B5A4u; UPD(0x0C079228u, 3);  /* 0C079226 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C079228 add #imm,Rn */
	W8(r1, r9); UPD(0x0C07922Cu, 2);  /* 0C07922A mov.b Rm,@Rn */
	r3 += r13;  /* 0C07922C add Rm,Rn */
	r12 = R32(r3); UPD(0x0C079230u, 2);  /* 0C07922E mov.l @Rm,Rn */
	r13 = R32(r10 + 0x24u); UPD(0x0C079232u, 1);  /* 0C079230 mov.l @(disp,Rm),Rn */
	r13 += r12;  /* 0C079232 add Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C079236u, 2);  /* 0C079234 mov.l @(disp,Rm),Rn */
	r12 = R32(r10 + 0x28u); UPD(0x0C079238u, 1);  /* 0C079236 mov.l @(disp,Rm),Rn */
	r12 += r0;  /* 0C079238 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07923Cu, 2);  /* 0C07923A mov.w @(disp,pc),Rn */
	IF(0x0C07923Cu); r7 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C07923Eu, 1);  /* 0C07923C mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C07923E extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C079242u, 2);  /* 0C079240 mov.l Rm,@Rn */
	r0 = r10;  /* 0C079242 mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C079246u, 2);  /* 0C079244 mov.w @(disp,pc),Rn */
	IF(0x0C079246u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C079248u, 1);  /* 0C079246 mov.b @(r0,Rm),Rn */
	r0 = 0xC050D70u; UPD(0x0C07924Au, 1);  /* 0C079248 mov.l @(disp,pc),Rn */
	r3 = r4 & 0xFF;  /* 0C07924A extu.b Rm,Rn */
	r2 = 0x10000u; UPD(0x0C07924Eu, 2);  /* 0C07924C mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C079250u, 1);  /* 0C07924E mov.l Rm,@(disp,Rn) */
	r4 = 0x8000u; UPD(0x0C079252u, 1);  /* 0C079250 mov.l @(disp,pc),Rn */
	IF(0x0C079252u); { u32 t_ = r0; PR = 0x0C079256u; W32(r15 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C079256u); }  /* 0C079252 jsr @Rn */
L_0C079256: BLKS(0x0C079256u);
	W32(r15 + 0xCu, r0); UPD(0x0C079258u, 1);  /* 0C079256 mov.l Rm,@(disp,Rn) */
	r6 = r13;  /* 0C079258 mov Rm,Rn */
	r0 = 0x808080u; UPD(0x0C07925Cu, 2);  /* 0C07925A mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C07925C mov #imm,Rn */
	W32(r15 + 0x10u, r0); UPD(0x0C079260u, 2);  /* 0C07925E mov.l Rm,@(disp,Rn) */
	r7 = r12;  /* 0C079260 mov Rm,Rn */
	r13 = 0xC0ACA40u; UPD(0x0C079264u, 2);  /* 0C079262 mov.l @(disp,pc),Rn */
	IF(0x0C079264u); { u32 t_ = r13; PR = 0x0C079268u; r4 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C079268u); }  /* 0C079264 jsr @Rn */
L_0C079268: BLKS(0x0C079268u);
	r10 = (u32)(s32)(s8)R8(r8); UPD(0x0C07926Au, 1);  /* 0C079268 mov.b @Rm,Rn */
	r15 += 0x14u;  /* 0C07926A add #imm,Rn */
	r10 += 0x1u;  /* 0C07926C add #imm,Rn */
	r0 = r10 & 0xFF;  /* 0C07926E extu.b Rm,Rn */
	T = r0 == 0x18u;  /* 0C079270 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r8, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07920Cu, 7); goto L_0C07920C; } UPD(0x0C079276u, 1); goto L_0C079276; }  /* 0C079272 bf/s */
L_0C079276: BLKS(0x0C079276u);
	W8(r8, r9); UPD(0x0C079278u, 1);  /* 0C079276 mov.b Rm,@Rn */
	r8 = (u32)(s32)(s8)R8(r11); UPD(0x0C07927Au, 1);  /* 0C079278 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C07927A add #imm,Rn */
	{ W8(r11, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C079180u, 4); goto L_0C079180; }  /* 0C07927C bra */
L_0C079280: BLKS(0x0C079280u);
	r11 = 0xC0A1700u; UPD(0x0C079282u, 1);  /* 0C079280 mov.l @(disp,pc),Rn */
	IF(0x0C079282u); { u32 t_ = r11; PR = 0x0C079286u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C079286u); }  /* 0C079282 jsr @Rn */
L_0C079286: BLKS(0x0C079286u);
	r11 = 0x9Cu; UPD(0x0C079288u, 1);  /* 0C079286 mov.w @(disp,pc),Rn */
	r11 += r10;  /* 0C079288 add Rm,Rn */
	r2 = r11;  /* 0C07928A mov Rm,Rn */
	r2 += 0x1u;  /* 0C07928C add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C079290u, 4);  /* 0C07928E mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C079290 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0792F0u, 4); goto L_0C0792F0; } goto L_0C079296; }  /* 0C079292 bt/s */
L_0C079296: BLKS(0x0C079296u);
	W8(r2, r1); UPD(0x0C079298u, 2);  /* 0C079296 mov.b Rm,@Rn */
L_0C079298: BLKS(0x0C079298u);
	{ IF(0x0C07929Au); ; /* slot nop */ UPD(0x0C079180u, 3); goto L_0C079180; }  /* 0C079298 bra */
L_0C0792F0: BLKS(0x0C0792F0u);
	r9 = 0x99u; UPD(0x0C0792F2u, 1);  /* 0C0792F0 mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C0792F2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0792F6u, 2);  /* 0C0792F4 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0792F6 add #imm,Rn */
	W8(r9, r0); UPD(0x0C0792FAu, 2);  /* 0C0792F8 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C0792FA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0792FC tst Rm,Rn */
	if (!T) { UPD(0x0C079298u, 5); goto L_0C079298; }  /* 0C0792FE bf */
L_0C079300: BLKS(0x0C079300u);
	r6 = R32(r10 + 0x28u); UPD(0x0C079302u, 1);  /* 0C079300 mov.l @(disp,Rm),Rn */
	r2 = 0xFFFFFFFAu;  /* 0C079302 mov #imm,Rn */
	r5 = (r6 >> 16) | (r6 << 16);  /* 0C079304 swap.w Rm,Rn */
	r4 = 0xFFFFFEA0u; UPD(0x0C079308u, 3);  /* 0C079306 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C079308 exts.w Rm,Rn */
	r9 += r4;  /* 0C07930A add Rm,Rn */
	IF(0x0C07930Cu); ARG0(0x492Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = (u32)((s32)r9 >> 31); else r9 = (u32)((s32)r9 >> ((~s_ & 31) + 1)); }  /* 0C07930C shad Rm,Rn */
	r13 = 0xC050D70u; UPD(0x0C079310u, 4);  /* 0C07930E mov.l @(disp,pc),Rn */
	r9 += r9;  /* 0C079310 add Rm,Rn */
	r0 = 0xC18B5C4u; UPD(0x0C079314u, 2);  /* 0C079312 mov.l @(disp,pc),Rn */
	r4 = 0x40u;  /* 0C079314 mov #imm,Rn */
	IF(0x0C079316u); { u32 t_ = r13; PR = 0x0C07931Au; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C07931Au); }  /* 0C079316 jsr @Rn */
L_0C07931A: BLKS(0x0C07931Au);
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C07931Cu, 1);  /* 0C07931A mov.w @Rm,Rn */
	r7 = r0;  /* 0C07931C mov Rm,Rn */
	r12 = 0xC058060u; UPD(0x0C079320u, 2);  /* 0C07931E mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C079320 add Rm,Rn */
	r13 = 0x48000u; UPD(0x0C079324u, 2);  /* 0C079322 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C079324 exts.w Rm,Rn */
	r4 = r8;  /* 0C079326 mov Rm,Rn */
	IF(0x0C079328u); { u32 t_ = r12; PR = 0x0C07932Cu; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07932Cu); }  /* 0C079328 jsr @Rn */
L_0C07932C: BLKS(0x0C07932Cu);
	r5 = r13;  /* 0C07932C mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C079330u, 2);  /* 0C07932E mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C079330 mov Rm,Rn */
	IF(0x0C079332u); { u32 t_ = r13; PR = 0x0C079336u; r12 = r0; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C079336u); }  /* 0C079332 jsr @Rn */
L_0C079336: BLKS(0x0C079336u);
	r1 = R32(r10); UPD(0x0C079338u, 1);  /* 0C079336 mov.l @Rm,Rn */
	r8 = 0x4000000u; UPD(0x0C07933Au, 1);  /* 0C079338 mov.l @(disp,pc),Rn */
	T = (r1 & r8) == 0;  /* 0C07933A tst Rm,Rn */
	{ u32 c_ = !T; r3 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C079350u, 4); goto L_0C079350; } UPD(0x0C079340u, 1); goto L_0C079340; }  /* 0C07933C bf/s */
L_0C079340: BLKS(0x0C079340u);
	r12 = (u32)(s32)(s8)R8(r11); UPD(0x0C079342u, 1);  /* 0C079340 mov.b @Rm,Rn */
	r12 += 0xFFFFFFFFu;  /* 0C079342 add #imm,Rn */
	r1 = r12 & 0xFF;  /* 0C079344 extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C079346 tst Rm,Rn */
	{ u32 c_ = !T; W8(r11, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C079298u, 6); goto L_0C079298; } UPD(0x0C07934Cu, 1); goto L_0C07934C; }  /* 0C079348 bf/s */
L_0C07934C: BLKS(0x0C07934Cu);
	{ W32(r10, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C079180u, 3); goto L_0C079180; }  /* 0C07934C bra */
L_0C079350: BLKS(0x0C079350u);
	r7 = 0xA9u; UPD(0x0C079352u, 1);  /* 0C079350 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C079352 mov Rm,Rn */
	IF(0x0C079354u); r9 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C079356u, 2);  /* 0C079354 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C079356 add #imm,Rn */
	r8 = 0xC06CC20u; UPD(0x0C07935Au, 2);  /* 0C079358 mov.l @(disp,pc),Rn */
	r7 = r9 & 0xFF;  /* 0C07935A extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C07935Eu, 2);  /* 0C07935C mov.l Rm,@Rn */
	r4 = 0x3u;  /* 0C07935E mov #imm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C079362u, 2);  /* 0C079360 mov.l Rm,@(disp,Rn) */
	r5 = R32(r10 + 0x24u); UPD(0x0C079364u, 1);  /* 0C079362 mov.l @(disp,Rm),Rn */
	IF(0x0C079364u); { u32 t_ = r8; PR = 0x0C079368u; r6 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C079368u); }  /* 0C079364 jsr @Rn */
L_0C079368: BLKS(0x0C079368u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C079340u, 3); goto L_0C079340; }  /* 0C079368 bra */
}

void f_0C079390(sh3_t *c)
{
	LOCALS;
L_0C079390: BLKS(0x0C079390u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C079392u, 1);  /* 0C079390 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C079392 exts.w Rm,Rn */
	r0 = 0xB4u; UPD(0x0C079396u, 2);  /* 0C079394 mov.w @(disp,pc),Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C079398u, 1);  /* 0C079396 mov.l Rm,@-Rn */
	IF(0x0C079398u); MACL = r4 * r0;  /* 0C079398 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07939Cu, 3);  /* 0C07939A mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C07939Eu, 1);  /* 0C07939C mov.l @(disp,pc),Rn */
	IF(0x0C07939Eu); r8 = MACL;  /* 0C07939E sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0793A2u, 2);  /* 0C0793A0 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C0793A2 add Rm,Rn */
	r9 = 0x9Fu; UPD(0x0C0793A6u, 2);  /* 0C0793A4 mov.w @(disp,pc),Rn */
	IF(0x0C0793A6u); r15 -= 4; W32(r15, PR); UPD(0x0C0793A8u, 1);  /* 0C0793A6 sts.l pr,@-Rn */
	r9 += r8;  /* 0C0793A8 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C0793ACu, 2);  /* 0C0793AA mov.b @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C0793AC extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C0793AE cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C079420u, 5); goto L_0C079420; } goto L_0C0793B4; }  /* 0C0793B0 bt/s */
L_0C0793B4: BLKS(0x0C0793B4u);
	r10 = 0x1u;  /* 0C0793B4 mov #imm,Rn */
	T = (s32)r0 > (s32)r10;  /* 0C0793B6 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C079400u, 6); goto L_0C079400; } goto L_0C0793BC; }  /* 0C0793B8 bt/s */
L_0C0793BC: BLKS(0x0C0793BCu);
	T = (r0 & r0) == 0;  /* 0C0793BC tst Rm,Rn */
	if (T) { UPD(0x0C0793D0u, 5); goto L_0C0793D0; }  /* 0C0793BE bt */
L_0C0793C0: BLKS(0x0C0793C0u);
	r15 = r14;  /* 0C0793C0 mov Rm,Rn */
	IF(0x0C0793C2u); PR = R32(r15); r15 += 4; UPD(0x0C0793C4u, 2);  /* 0C0793C2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0793C6u, 1);  /* 0C0793C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0793C8u, 1);  /* 0C0793C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0793CAu, 1);  /* 0C0793C8 mov.l @Rm+,Rn */
	IF(0x0C0793CAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0793CA rts */
L_0C0793D0: BLKS(0x0C0793D0u);
	r0 = 0xC0A1700u; UPD(0x0C0793D2u, 1);  /* 0C0793D0 mov.l @(disp,pc),Rn */
	IF(0x0C0793D2u); { u32 t_ = r0; PR = 0x0C0793D6u; IF(0x0C0793D4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C0793D6u); }  /* 0C0793D2 jsr @Rn */
L_0C0793D6: BLKS(0x0C0793D6u);
	r1 = R32(r8); UPD(0x0C0793D8u, 1);  /* 0C0793D6 mov.l @Rm,Rn */
	r3 = 0x100u; UPD(0x0C0793DAu, 1);  /* 0C0793D8 mov.w @(disp,pc),Rn */
	T = (r1 & r3) == 0;  /* 0C0793DA tst Rm,Rn */
	if (T) { UPD(0x0C0793C0u, 4); goto L_0C0793C0; }  /* 0C0793DC bt */
L_0C0793DE: BLKS(0x0C0793DEu);
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C0793E0u, 1);  /* 0C0793DE mov.b @Rm,Rn */
	r4 = 0x6Du;  /* 0C0793E0 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C0793E4u, 2);  /* 0C0793E2 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0793E4 add #imm,Rn */
	IF(0x0C0793E6u); W16(r0 + r8, r10); UPD(0x0C0793E8u, 2);  /* 0C0793E6 mov.w Rm,@(r0,Rn) */
	W8(r9, r2); UPD(0x0C0793EAu, 1);  /* 0C0793E8 mov.b Rm,@Rn */
L_0C0793EA: BLKS(0x0C0793EAu);
	r5 = 0xC0AFC10u; UPD(0x0C0793ECu, 1);  /* 0C0793EA mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0793EC mov Rm,Rn */
	IF(0x0C0793EEu); PR = R32(r15); r15 += 4; UPD(0x0C0793F0u, 2);  /* 0C0793EE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0793F2u, 1);  /* 0C0793F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0793F4u, 1);  /* 0C0793F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0793F6u, 1);  /* 0C0793F4 mov.l @Rm+,Rn */
	IF(0x0C0793F6u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFC10u: TAIL(f_0C0AFC10); default: JUMPD(tv_); } }  /* 0C0793F6 jmp @Rn */
L_0C079400: BLKS(0x0C079400u);
	if (!T) { UPD(0x0C0793C0u, 3); goto L_0C0793C0; }  /* 0C079400 bf */
L_0C079402: BLKS(0x0C079402u);
	r10 = 0xC0A1700u; UPD(0x0C079404u, 1);  /* 0C079402 mov.l @(disp,pc),Rn */
	IF(0x0C079404u); { u32 t_ = r10; PR = 0x0C079408u; IF(0x0C079406u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C079408u); }  /* 0C079404 jsr @Rn */
L_0C079408: BLKS(0x0C079408u);
	r3 = R32(r8); UPD(0x0C07940Au, 1);  /* 0C079408 mov.l @Rm,Rn */
	r7 = 0x100u; UPD(0x0C07940Cu, 1);  /* 0C07940A mov.w @(disp,pc),Rn */
	T = (r3 & r7) == 0;  /* 0C07940C tst Rm,Rn */
	if (!T) { UPD(0x0C0793C0u, 4); goto L_0C0793C0; }  /* 0C07940E bf */
L_0C079410: BLKS(0x0C079410u);
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C079412u, 1);  /* 0C079410 mov.b @Rm,Rn */
	r4 = 0xFFFFFFFFu;  /* 0C079412 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C079416u, 2);  /* 0C079414 mov.w @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C079416 add #imm,Rn */
	IF(0x0C079418u); W16(r0 + r8, r4); UPD(0x0C07941Au, 2);  /* 0C079418 mov.w Rm,@(r0,Rn) */
	W8(r9, r2); UPD(0x0C07941Cu, 1);  /* 0C07941A mov.b Rm,@Rn */
	{ r4 = 0x75u; /* slot mov #imm,Rn */ UPD(0x0C0793EAu, 3); goto L_0C0793EA; }  /* 0C07941C bra */
L_0C079420: BLKS(0x0C079420u);
	r7 = 0x88u; UPD(0x0C079422u, 1);  /* 0C079420 mov.w @(disp,pc),Rn */
	r10 = 0x11u;  /* 0C079422 mov #imm,Rn */
	r7 += r8;  /* 0C079424 add Rm,Rn */
	r2 = 0x99u; UPD(0x0C079428u, 3);  /* 0C079426 mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C07942Au, 1);  /* 0C079428 mov.w @Rm,Rn */
	r2 += r8;  /* 0C07942A add Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C07942Eu, 2);  /* 0C07942C mov.l @(disp,Rm),Rn */
	IF(0x0C07942Eu); ARG0(0x46ADu); { s32 s_ = (s32)r10; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C07942E shld Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C079432u, 2);  /* 0C079430 mov.b @Rm,Rn */
	r5 -= r6;  /* 0C079432 sub Rm,Rn */
	r4 += 0x1u;  /* 0C079434 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C079436 extu.b Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C07943Au, 4);  /* 0C079438 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x20u;  /* 0C07943A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0793C0u, 4); goto L_0C0793C0; } UPD(0x0C079440u, 1); goto L_0C079440; }  /* 0C07943C bf/s */
L_0C079440: BLKS(0x0C079440u);
	r7 += 0x1u;  /* 0C079440 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r7); UPD(0x0C079444u, 2);  /* 0C079442 mov.b @Rm,Rn */
	r0 = 0x0u;  /* 0C079444 mov #imm,Rn */
	r8 += r3;  /* 0C079446 add Rm,Rn */
	W8(r2, r0); UPD(0x0C07944Au, 3);  /* 0C079448 mov.b Rm,@Rn */
	{ W8(r9, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C0793C0u, 3); goto L_0C0793C0; }  /* 0C07944A bra */
}

void f_0C079470(sh3_t *c)
{
	LOCALS;
L_0C079470: BLKS(0x0C079470u);
	r3 = 0xB4u; UPD(0x0C079472u, 1);  /* 0C079470 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C079472 exts.w Rm,Rn */
	IF(0x0C079474u); MACL = r4 * r3;  /* 0C079474 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C079478u, 4);  /* 0C079476 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07947Au, 1);  /* 0C079478 mov.l Rm,@-Rn */
	IF(0x0C07947Au); r2 = MACL;  /* 0C07947A sts macl,Rn */
	r0 += r2;  /* 0C07947C add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C079480u, 3);  /* 0C07947E mov.l @(disp,Rm),Rn */
	r0 = 0x3u;  /* 0C079480 mov #imm,Rn */
	T = r2 > r0;  /* 0C079482 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C079510u, 5); goto L_0C079510; } goto L_0C079488; }  /* 0C079484 bt/s */
L_0C079488: BLKS(0x0C079488u);
	r0 = 0xC079490u;  /* 0C079488 mova @(disp,pc),r0 */
	IF(0x0C07948Au); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07948Cu, 3);  /* 0C07948A mov.b @(r0,Rm),Rn */
	IF(0x0C07948Cu); { u32 tv_ = (r5 + 0x0C079490u); u32 t_ = PHYS(tv_); IF(0x0C07948Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0794A0u: goto L_0C0794A0; case 0x0C0794D0u: goto L_0C0794D0; case 0x0C0794F0u: goto L_0C0794F0; default: JUMPD(tv_); } }  /* 0C07948C braf Rn */
L_0C0794A0: BLKS(0x0C0794A0u);
	r7 = 0xB4u; UPD(0x0C0794A2u, 1);  /* 0C0794A0 mov.w @(disp,pc),Rn */
	IF(0x0C0794A2u); MACL = r4 * r7;  /* 0C0794A2 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0794A6u, 3);  /* 0C0794A4 mov.l @(disp,pc),Rn */
	IF(0x0C0794A6u); r0 = MACL;  /* 0C0794A6 sts macl,Rn */
	IF(0x0C0794A8u); r0 = R32(r0 + r6); UPD(0x0C0794AAu, 2);  /* 0C0794A8 mov.l @(r0,Rm),Rn */
	IF(0x0C0794AAu); r0 >>= 16;  /* 0C0794AA shlr16 Rn */
	IF(0x0C0794ACu); r0 >>= 8;  /* 0C0794AC shlr8 Rn */
	IF(0x0C0794AEu); r0 >>= 2;  /* 0C0794AE shlr2 Rn */
	r0 &= 0x1u;  /* 0C0794B0 and #imm,r0 */
	r5 = 0xC18C388u; UPD(0x0C0794B4u, 5);  /* 0C0794B2 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C0794B4 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0794C0u, 4); goto L_0C0794C0; }  /* 0C0794B6 bt */
L_0C0794B8: BLKS(0x0C0794B8u);
	r6 = 0xC0A17E0u; UPD(0x0C0794BAu, 1);  /* 0C0794B8 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0794BA mov Rm,Rn */
	IF(0x0C0794BCu); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A17E0u: TAIL(f_0C0A17E0); default: JUMPD(tv_); } }  /* 0C0794BC jmp @Rn */
L_0C0794C0: BLKS(0x0C0794C0u);
	r5 = 0xC18C3D0u; UPD(0x0C0794C2u, 1);  /* 0C0794C0 mov.l @(disp,pc),Rn */
	{ IF(0x0C0794C4u); ; /* slot nop */ UPD(0x0C0794B8u, 3); goto L_0C0794B8; }  /* 0C0794C2 bra */
L_0C0794D0: BLKS(0x0C0794D0u);
	r0 = 0xB4u; UPD(0x0C0794D2u, 1);  /* 0C0794D0 mov.w @(disp,pc),Rn */
	IF(0x0C0794D2u); MACL = r4 * r0;  /* 0C0794D2 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0794D6u, 3);  /* 0C0794D4 mov.l @(disp,pc),Rn */
	IF(0x0C0794D6u); r0 = MACL;  /* 0C0794D6 sts macl,Rn */
	IF(0x0C0794D8u); r0 = R32(r0 + r2); UPD(0x0C0794DAu, 2);  /* 0C0794D8 mov.l @(r0,Rm),Rn */
	IF(0x0C0794DAu); r0 >>= 16;  /* 0C0794DA shlr16 Rn */
	IF(0x0C0794DCu); r0 >>= 8;  /* 0C0794DC shlr8 Rn */
	IF(0x0C0794DEu); r0 >>= 2;  /* 0C0794DE shlr2 Rn */
	r0 &= 0x1u;  /* 0C0794E0 and #imm,r0 */
	r5 = 0xC18C420u; UPD(0x0C0794E4u, 5);  /* 0C0794E2 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C0794E4 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0794B8u, 4); goto L_0C0794B8; }  /* 0C0794E6 bf */
L_0C0794E8: BLKS(0x0C0794E8u);
	r5 = 0xC18C476u; UPD(0x0C0794EAu, 1);  /* 0C0794E8 mov.l @(disp,pc),Rn */
	{ IF(0x0C0794ECu); ; /* slot nop */ UPD(0x0C0794B8u, 3); goto L_0C0794B8; }  /* 0C0794EA bra */
L_0C0794F0: BLKS(0x0C0794F0u);
	r5 = 0xB4u; UPD(0x0C0794F2u, 1);  /* 0C0794F0 mov.w @(disp,pc),Rn */
	IF(0x0C0794F2u); MACL = r4 * r5;  /* 0C0794F2 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0794F6u, 3);  /* 0C0794F4 mov.l @(disp,pc),Rn */
	IF(0x0C0794F6u); r0 = MACL;  /* 0C0794F6 sts macl,Rn */
	IF(0x0C0794F8u); r0 = R32(r0 + r3); UPD(0x0C0794FAu, 2);  /* 0C0794F8 mov.l @(r0,Rm),Rn */
	IF(0x0C0794FAu); r0 >>= 16;  /* 0C0794FA shlr16 Rn */
	IF(0x0C0794FCu); r0 >>= 8;  /* 0C0794FC shlr8 Rn */
	IF(0x0C0794FEu); r0 >>= 2;  /* 0C0794FE shlr2 Rn */
	r0 &= 0x1u;  /* 0C079500 and #imm,r0 */
	r5 = 0xC18C4D4u; UPD(0x0C079504u, 5);  /* 0C079502 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C079504 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0794B8u, 4); goto L_0C0794B8; }  /* 0C079506 bf */
L_0C079508: BLKS(0x0C079508u);
	r5 = 0xC18C52Au; UPD(0x0C07950Au, 1);  /* 0C079508 mov.l @(disp,pc),Rn */
	{ IF(0x0C07950Cu); ; /* slot nop */ UPD(0x0C0794B8u, 3); goto L_0C0794B8; }  /* 0C07950A bra */
L_0C079510: BLKS(0x0C079510u);
	r15 = r14;  /* 0C079510 mov Rm,Rn */
	IF(0x0C079512u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C079512 rts */
}

void f_0C079540(sh3_t *c)
{
	LOCALS;
L_0C079540: BLKS(0x0C079540u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C079542u, 1);  /* 0C079540 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C079544u, 1);  /* 0C079542 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C079546u, 1);  /* 0C079544 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C079548u, 1);  /* 0C079546 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07954Au, 1);  /* 0C079548 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07954Cu, 1);  /* 0C07954A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07954Eu, 1);  /* 0C07954C mov.l Rm,@-Rn */
	r13 = 0xC392D64u; UPD(0x0C079550u, 1);  /* 0C07954E mov.l @(disp,pc),Rn */
	IF(0x0C079550u); r15 -= 4; W32(r15, PR); UPD(0x0C079552u, 1);  /* 0C079550 sts.l pr,@-Rn */
	r3 = R32(r13); UPD(0x0C079554u, 1);  /* 0C079552 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C079554 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r4 = v_; } UPD(0x0C079558u, 2);  /* 0C079556 mov.w @Rm+,Rn */
	r14 = r15;  /* 0C079558 mov Rm,Rn */
	r1 = 0xC286274u; UPD(0x0C07955Cu, 2);  /* 0C07955A mov.l @(disp,pc),Rn */
	r9 = 0xC22C874u; UPD(0x0C07955Eu, 1);  /* 0C07955C mov.l @(disp,pc),Rn */
	r8 = 0xC057A50u; UPD(0x0C079560u, 1);  /* 0C07955E mov.l @(disp,pc),Rn */
	W16(r1, r4); UPD(0x0C079562u, 1);  /* 0C079560 mov.w Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C079564u, 1);  /* 0C079562 mov.w @Rm,Rn */
	W32(r13, r3); UPD(0x0C079566u, 1);  /* 0C079564 mov.l Rm,@Rn */
	r5 = 0x8000u; UPD(0x0C079568u, 1);  /* 0C079566 mov.l @(disp,pc),Rn */
	IF(0x0C079568u); { u32 t_ = r8; PR = 0x0C07956Cu; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C07956Cu); }  /* 0C079568 jsr @Rn */
L_0C07956C: BLKS(0x0C07956Cu);
	T = (r0 & r0) == 0;  /* 0C07956C tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C079590u, 4); goto L_0C079590; } UPD(0x0C079572u, 1); goto L_0C079572; }  /* 0C07956E bf/s */
L_0C079572: BLKS(0x0C079572u);
	r14 += 0x8u;  /* 0C079572 add #imm,Rn */
	r15 = r14;  /* 0C079574 mov Rm,Rn */
	IF(0x0C079576u); PR = R32(r15); r15 += 4; UPD(0x0C079578u, 3);  /* 0C079576 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07957Au, 1);  /* 0C079578 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07957Cu, 1);  /* 0C07957A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07957Eu, 1);  /* 0C07957C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C079580u, 1);  /* 0C07957E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C079582u, 1);  /* 0C079580 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C079584u, 1);  /* 0C079582 mov.l @Rm+,Rn */
	IF(0x0C079584u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C079584 rts */
L_0C079590: BLKS(0x0C079590u);
	r8 = 0xC0606C0u; UPD(0x0C079592u, 1);  /* 0C079590 mov.l @(disp,pc),Rn */
	IF(0x0C079592u); { u32 t_ = r8; PR = 0x0C079596u; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C079596u); }  /* 0C079592 jsr @Rn */
L_0C079596: BLKS(0x0C079596u);
	T = (r0 & r0) == 0;  /* 0C079596 tst Rm,Rn */
	if (!T) { UPD(0x0C0795B0u, 4); goto L_0C0795B0; }  /* 0C079598 bf */
L_0C07959A: BLKS(0x0C07959Au);
	r2 = R32(r13); UPD(0x0C07959Cu, 1);  /* 0C07959A mov.l @Rm,Rn */
	r2 += 0x2u;  /* 0C07959C add #imm,Rn */
	W32(r13, r2); UPD(0x0C0795A0u, 2);  /* 0C07959E mov.l Rm,@Rn */
L_0C0795A0: BLKS(0x0C0795A0u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C079572u, 3); goto L_0C079572; }  /* 0C0795A0 bra */
L_0C0795B0: BLKS(0x0C0795B0u);
	r12 = 0xC2755BCu; UPD(0x0C0795B2u, 1);  /* 0C0795B0 mov.l @(disp,pc),Rn */
	r2 = 0x3u;  /* 0C0795B2 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r11 = v_; } UPD(0x0C0795B6u, 2);  /* 0C0795B4 mov.w @Rm+,Rn */
	r8 = 0xB4u; UPD(0x0C0795B8u, 1);  /* 0C0795B6 mov.w @(disp,pc),Rn */
	IF(0x0C0795B8u); MACL = r11 * r8;  /* 0C0795B8 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0795BCu, 3);  /* 0C0795BA mov.l @(disp,pc),Rn */
	r5 = 0xC286274u; UPD(0x0C0795BEu, 1);  /* 0C0795BC mov.l @(disp,pc),Rn */
	IF(0x0C0795BEu); r8 = MACL;  /* 0C0795BE sts macl,Rn */
	r8 += r0;  /* 0C0795C0 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r5); UPD(0x0C0795C4u, 3);  /* 0C0795C2 mov.w @Rm,Rn */
	r4 = 0xC286509u; UPD(0x0C0795C6u, 1);  /* 0C0795C4 mov.l @(disp,pc),Rn */
	r0 &= 0x3u;  /* 0C0795C6 and #imm,r0 */
	r10 = (u32)(s32)(s8)R8(r4); UPD(0x0C0795CAu, 2);  /* 0C0795C8 mov.b @Rm,Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r2;  /* 0C0795CA mulu.w Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C0795CEu, 3);  /* 0C0795CC mov.w @Rm,Rn */
	r4 = 0x0u;  /* 0C0795CE mov #imm,Rn */
	r0 = 0xC0A02D0u; UPD(0x0C0795D2u, 2);  /* 0C0795D0 mov.l @(disp,pc),Rn */
	IF(0x0C0795D2u); r1 = MACL;  /* 0C0795D2 sts macl,Rn */
	r3 = 0xC1000010u; UPD(0x0C0795D6u, 2);  /* 0C0795D4 mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFFFF;  /* 0C0795D6 extu.w Rm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C0795DAu, 2);  /* 0C0795D8 mov.l Rm,@(disp,Rn) */
	r9 = 0x4Cu;  /* 0C0795DA mov #imm,Rn */
	W32(r8 + 0x8u, r1); UPD(0x0C0795DEu, 2);  /* 0C0795DC mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C0795DE mov Rm,Rn */
	W32(r8, r3); UPD(0x0C0795E2u, 2);  /* 0C0795E0 mov.l Rm,@Rn */
	IF(0x0C0795E2u); { u32 t_ = r0; PR = 0x0C0795E6u; W32(r8 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0795E6u); }  /* 0C0795E2 jsr @Rn */
L_0C0795E6: BLKS(0x0C0795E6u);
	IF(0x0C0795E6u); MACL = r10 * r9;  /* 0C0795E6 mul.l Rm,Rn */
	r7 = 0xC26CAE0u; UPD(0x0C0795EAu, 3);  /* 0C0795E8 mov.l @(disp,pc),Rn */
	r2 = 0xC392D5Eu; UPD(0x0C0795ECu, 1);  /* 0C0795EA mov.l @(disp,pc),Rn */
	IF(0x0C0795ECu); r9 = MACL;  /* 0C0795EC sts macl,Rn */
	r3 = 0xC21F5E2u; UPD(0x0C0795F0u, 2);  /* 0C0795EE mov.l @(disp,pc),Rn */
	r9 += r7;  /* 0C0795F0 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C0795F4u, 2);  /* 0C0795F2 mov.w @Rm,Rn */
	r6 = R32(r9 + 0x8u); UPD(0x0C0795F6u, 1);  /* 0C0795F4 mov.l @(disp,Rm),Rn */
	IF(0x0C0795F6u); r4 <<= 16;  /* 0C0795F6 shll16 Rn */
	r5 = (u32)(s32)(s16)R16(r3); UPD(0x0C0795FAu, 2);  /* 0C0795F8 mov.w @Rm,Rn */
	r9 += 0x42u;  /* 0C0795FA add #imm,Rn */
	r0 = 0xC0A1530u; UPD(0x0C0795FEu, 2);  /* 0C0795FC mov.l @(disp,pc),Rn */
	IF(0x0C0795FEu); r5 <<= 16;  /* 0C0795FE shll16 Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C079602u, 2);  /* 0C079600 mov.l Rm,@(disp,Rn) */
	r5 -= r6;  /* 0C079602 sub Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C079606u, 2);  /* 0C079604 mov.l Rm,@(disp,Rn) */
	IF(0x0C079606u); { u32 t_ = r0; PR = 0x0C07960Au; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C07960Au); }  /* 0C079606 jsr @Rn */
L_0C07960A: BLKS(0x0C07960Au);
	r0 = 0xB0u; UPD(0x0C07960Cu, 1);  /* 0C07960A mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C07960C mov Rm,Rn */
	IF(0x0C07960Eu); W8(r0 + r8, r10); UPD(0x0C079610u, 2);  /* 0C07960E mov.b Rm,@(r0,Rn) */
	r10 = 0xA8u; UPD(0x0C079612u, 1);  /* 0C079610 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFDu;  /* 0C079612 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C079616u, 2);  /* 0C079614 mov.b @Rm,Rn */
	r10 += r8;  /* 0C079616 add Rm,Rn */
	r3 += 0x2u;  /* 0C079618 add #imm,Rn */
	r10 += 0x1u;  /* 0C07961A add #imm,Rn */
	IF(0x0C07961Cu); W8(r0 + r8, r3); UPD(0x0C07961Eu, 4);  /* 0C07961C mov.b Rm,@(r0,Rn) */
	r9 += 0xFFFFFFBEu;  /* 0C07961E add #imm,Rn */
	W8(r10, r3); UPD(0x0C079622u, 2);  /* 0C079620 mov.b Rm,@Rn */
	r8 += 0x50u;  /* 0C079622 add #imm,Rn */
	r7 = R32(r9 + 0x38u); UPD(0x0C079626u, 2);  /* 0C079624 mov.l @(disp,Rm),Rn */
	r9 = R32(r13); UPD(0x0C079628u, 1);  /* 0C079626 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r9); r9 += 2; r0 = v_; } UPD(0x0C07962Au, 1);  /* 0C079628 mov.w @Rm+,Rn */
	r6 = 0xC0A1780u; UPD(0x0C07962Cu, 1);  /* 0C07962A mov.l @(disp,pc),Rn */
	IF(0x0C07962Cu); r0 <<= 2;  /* 0C07962C shll2 Rn */
	IF(0x0C07962Eu); r5 = R32(r0 + r7); UPD(0x0C079630u, 2);  /* 0C07962E mov.l @(r0,Rm),Rn */
	IF(0x0C079630u); { u32 t_ = r6; PR = 0x0C079634u; W32(r13, r9); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C079634u); }  /* 0C079630 jsr @Rn */
L_0C079634: BLKS(0x0C079634u);
	r5 = 0x0u;  /* 0C079634 mov #imm,Rn */
	W32(r8, r5); UPD(0x0C079638u, 2);  /* 0C079636 mov.l Rm,@Rn */
	r13 = 0x0u;  /* 0C079638 mov #imm,Rn */
	r8 += 0xFFFFFFB0u;  /* 0C07963A add #imm,Rn */
	W32(r14, r5); UPD(0x0C07963Eu, 3);  /* 0C07963C mov.l Rm,@Rn */
	r11 = r8;  /* 0C07963E mov Rm,Rn */
	W32(r14 + 0x4u, r10); UPD(0x0C079642u, 2);  /* 0C079640 mov.l Rm,@(disp,Rn) */
	IF(0x0C079642u); ;  /* 0C079642 nop */
	UPD(0x0C079644u, 1);
L_0C079644: BLKS(0x0C079644u);
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C079646u, 1);  /* 0C079644 mov.w @Rm+,Rn */
	r8 = 0xB4u; UPD(0x0C079648u, 1);  /* 0C079646 mov.w @(disp,pc),Rn */
	IF(0x0C079648u); MACL = r10 * r8;  /* 0C079648 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C07964Cu, 3);  /* 0C07964A mov.l @(disp,pc),Rn */
	IF(0x0C07964Cu); r8 = MACL;  /* 0C07964C sts macl,Rn */
	r8 += r9;  /* 0C07964E add Rm,Rn */
	r9 = 0xC18C588u; UPD(0x0C079652u, 3);  /* 0C079650 mov.l @(disp,pc),Rn */
	r8 += 0x7Cu;  /* 0C079652 add #imm,Rn */
	r9 += r13;  /* 0C079654 add Rm,Rn */
	r9 += 0x4u;  /* 0C079656 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r9); UPD(0x0C07965Au, 4);  /* 0C079658 mov.w @Rm,Rn */
	r13 += 0x14u;  /* 0C07965A add #imm,Rn */
	r0 = 0xC2755BCu; UPD(0x0C07965Eu, 2);  /* 0C07965C mov.l @(disp,pc),Rn */
	r5 += r5;  /* 0C07965E add Rm,Rn */
	IF(0x0C079660u); r4 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C079662u, 2);  /* 0C079660 mov.w @(r0,Rm),Rn */
	r9 += 0xFFFFFFFCu;  /* 0C079662 add #imm,Rn */
	W16(r8, r4); UPD(0x0C079666u, 2);  /* 0C079664 mov.w Rm,@Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C079668u, 1);  /* 0C079666 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C079668 add #imm,Rn */
	r6 = R32(r9); UPD(0x0C07966Cu, 2);  /* 0C07966A mov.l @Rm,Rn */
	r4 = 0x0u;  /* 0C07966C mov #imm,Rn */
	r7 = 0x81000000u; UPD(0x0C079670u, 2);  /* 0C07966E mov.l @(disp,pc),Rn */
	W16(r8, r3); UPD(0x0C079672u, 1);  /* 0C079670 mov.w Rm,@Rn */
	r6 |= r7;  /* 0C079672 or Rm,Rn */
	r2 = R32(r11 + 0x4u); UPD(0x0C079676u, 2);  /* 0C079674 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFF82u;  /* 0C079676 add #imm,Rn */
	W32(r8, r6); UPD(0x0C07967Au, 2);  /* 0C079678 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C07967Cu, 1);  /* 0C07967A mov.l Rm,@(disp,Rn) */
	r1 = R32(r9 + 0x8u); UPD(0x0C07967Eu, 1);  /* 0C07967C mov.l @(disp,Rm),Rn */
	r5 = R32(r11 + 0x8u); UPD(0x0C079680u, 1);  /* 0C07967E mov.l @(disp,Rm),Rn */
	r3 = 0xC0A02D0u; UPD(0x0C079682u, 1);  /* 0C079680 mov.l @(disp,pc),Rn */
	r5 += r1;  /* 0C079682 add Rm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C079686u, 2);  /* 0C079684 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r5); UPD(0x0C079688u, 1);  /* 0C079686 mov.l Rm,@(disp,Rn) */
	IF(0x0C079688u); { u32 t_ = r3; PR = 0x0C07968Cu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07968Cu); }  /* 0C079688 jsr @Rn */
L_0C07968C: BLKS(0x0C07968Cu);
	r0 = 0xC0A1530u; UPD(0x0C07968Eu, 1);  /* 0C07968C mov.l @(disp,pc),Rn */
	IF(0x0C07968Eu); { u32 t_ = r0; PR = 0x0C079692u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C079692u); }  /* 0C07968E jsr @Rn */
L_0C079692: BLKS(0x0C079692u);
	r7 = R32(r11 + 0x24u); UPD(0x0C079694u, 1);  /* 0C079692 mov.l @(disp,Rm),Rn */
	r5 = 0x0u;  /* 0C079694 mov #imm,Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C079698u, 2);  /* 0C079696 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C07969Au, 1);  /* 0C079698 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r6); UPD(0x0C07969Cu, 1);  /* 0C07969A mov.l Rm,@(disp,Rn) */
	r0 = 0xB0u; UPD(0x0C07969Eu, 1);  /* 0C07969C mov.w @(disp,pc),Rn */
	r2 = R32(r9 + 0xCu); UPD(0x0C0796A0u, 1);  /* 0C07969E mov.l @(disp,Rm),Rn */
	IF(0x0C0796A0u); r3 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0796A2u, 1);  /* 0C0796A0 mov.b @(r0,Rm),Rn */
	r9 += 0x10u;  /* 0C0796A2 add #imm,Rn */
	IF(0x0C0796A4u); W8(r0 + r8, r3); UPD(0x0C0796A6u, 2);  /* 0C0796A4 mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C0796A8u, 1);  /* 0C0796A6 mov.w @(disp,pc),Rn */
	r10 = R32(r14 + 0x4u); UPD(0x0C0796AAu, 1);  /* 0C0796A8 mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C0796AA add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C0796AEu, 2);  /* 0C0796AC mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0796AE add #imm,Rn */
	W8(r0, r4); UPD(0x0C0796B2u, 2);  /* 0C0796B0 mov.b Rm,@Rn */
	r10 = 0x1u;  /* 0C0796B2 mov #imm,Rn */
	W32(r8 + 0x2Cu, r2); UPD(0x0C0796B6u, 2);  /* 0C0796B4 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r5); UPD(0x0C0796B8u, 1);  /* 0C0796B6 mov.l Rm,@(disp,Rn) */
	r7 = 0xACu; UPD(0x0C0796BAu, 1);  /* 0C0796B8 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C0796BCu, 1);  /* 0C0796BA mov.b @Rm,Rn */
	r8 += r7;  /* 0C0796BC add Rm,Rn */
	r8 += 0x3u;  /* 0C0796BE add #imm,Rn */
	r7 += r11;  /* 0C0796C0 add Rm,Rn */
	W8(r8, r1); UPD(0x0C0796C4u, 4);  /* 0C0796C2 mov.b Rm,@Rn */
	r7 += 0x1u;  /* 0C0796C4 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0796C8u, 2);  /* 0C0796C6 mov.b @Rm,Rn */
	r8 += 0xFFFFFFFEu;  /* 0C0796C8 add #imm,Rn */
	W8(r8, r6); UPD(0x0C0796CCu, 2);  /* 0C0796CA mov.b Rm,@Rn */
	r5 = R32(r14); UPD(0x0C0796CEu, 1);  /* 0C0796CC mov.l @Rm,Rn */
	r5 += 0x1u;  /* 0C0796CE add #imm,Rn */
	r2 = (u32)(s32)(s16)r5;  /* 0C0796D0 exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C0796D4u, 3);  /* 0C0796D2 mov.l Rm,@Rn */
	r9 = R32(r14); UPD(0x0C0796D6u, 1);  /* 0C0796D4 mov.l @Rm,Rn */
	T = (s32)r9 > (s32)r10;  /* 0C0796D6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C079644u, 4); goto L_0C079644; }  /* 0C0796D8 bf */
L_0C0796DA: BLKS(0x0C0796DAu);
	{ IF(0x0C0796DCu); ; /* slot nop */ UPD(0x0C0795A0u, 3); goto L_0C0795A0; }  /* 0C0796DA bra */
}

void f_0C079730(sh3_t *c)
{
	LOCALS;
L_0C079730: BLKS(0x0C079730u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C079732u, 1);  /* 0C079730 mov.l Rm,@-Rn */
	r3 = 0xBu;  /* 0C079732 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C079736u, 2);  /* 0C079734 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C079738u, 1);  /* 0C079736 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07973Au, 1);  /* 0C079738 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C07973Cu, 1);  /* 0C07973A mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07973C exts.w Rm,Rn */
	IF(0x0C07973Eu); MACL = r11 * r0;  /* 0C07973E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C079742u, 4);  /* 0C079740 mov.l Rm,@-Rn */
	r2 = 0xC26CD40u; UPD(0x0C079744u, 1);  /* 0C079742 mov.l @(disp,pc),Rn */
	IF(0x0C079744u); r0 = MACL;  /* 0C079744 sts macl,Rn */
	IF(0x0C079746u); r15 -= 4; W32(r15, PR); UPD(0x0C079748u, 2);  /* 0C079746 sts.l pr,@-Rn */
	r0 += r2;  /* 0C079748 add Rm,Rn */
	r1 = R32(r0 + 0x8u); UPD(0x0C07974Cu, 2);  /* 0C07974A mov.l @(disp,Rm),Rn */
	T = r1 > r3;  /* 0C07974C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07979Au, 4); goto L_0C07979A; } goto L_0C079752; }  /* 0C07974E bt/s */
L_0C079752: BLKS(0x0C079752u);
	r8 = R32(r0 + 0x1Cu); UPD(0x0C079754u, 2);  /* 0C079752 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r3 = v_; } UPD(0x0C079756u, 1);  /* 0C079754 mov.l @Rm+,Rn */
	T = (r3 & r3) == 0;  /* 0C079756 tst Rm,Rn */
	if (T) { UPD(0x0C07978Eu, 4); goto L_0C07978E; }  /* 0C079758 bt */
L_0C07975A: BLKS(0x0C07975Au);
	r9 = r0;  /* 0C07975A mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C07975Eu, 2);  /* 0C07975C mov.w @(disp,pc),Rn */
	r10 += r0;  /* 0C07975E add Rm,Rn */
	UPD(0x0C079760u, 1);
L_0C079760: BLKS(0x0C079760u);
	r8 += 0x4u;  /* 0C079760 add #imm,Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C079764u, 2);  /* 0C079762 mov.l @Rm+,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C079764 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C079768u, 2);  /* 0C079766 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C07976Au, 1);  /* 0C079768 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C07976A add Rm,Rn */
	IF(0x0C07976Cu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07976Eu, 2);  /* 0C07976C mov.b @(r0,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r4 = v_; } UPD(0x0C079770u, 1);  /* 0C07976E mov.l @Rm+,Rn */
	r0 = r3 & 0xFF;  /* 0C079770 extu.b Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C079774u, 2);  /* 0C079772 mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C079776u, 1);  /* 0C079774 mov.l Rm,@Rn */
	r7 += r4;  /* 0C079776 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C07977Au, 2);  /* 0C079778 mov.b @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C07977A extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07977Eu, 2);  /* 0C07977C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C079780u, 1);  /* 0C07977E mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C079780 mov #imm,Rn */
	IF(0x0C079782u); { u32 t_ = r0; PR = 0x0C079786u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C079786u); }  /* 0C079782 jsr @Rn */
L_0C079786: BLKS(0x0C079786u);
	{ u32 v_ = R32(r8); r8 += 4; r4 = v_; } UPD(0x0C079788u, 1);  /* 0C079786 mov.l @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C079788 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C079760u, 4); goto L_0C079760; } UPD(0x0C07978Eu, 1); goto L_0C07978E; }  /* 0C07978A bf/s */
L_0C07978E: BLKS(0x0C07978Eu);
	r9 = 0xB4u; UPD(0x0C079790u, 1);  /* 0C07978E mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C079790 mov #imm,Rn */
	IF(0x0C079792u); MACL = r11 * r9;  /* 0C079792 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C079796u, 4);  /* 0C079794 mov.l @(disp,pc),Rn */
	IF(0x0C079796u); r0 = MACL;  /* 0C079796 sts macl,Rn */
	IF(0x0C079798u); W32(r0 + r6, r8); UPD(0x0C07979Au, 2);  /* 0C079798 mov.l Rm,@(r0,Rn) */
L_0C07979A: BLKS(0x0C07979Au);
	r15 = r14;  /* 0C07979A mov Rm,Rn */
	IF(0x0C07979Cu); PR = R32(r15); r15 += 4; UPD(0x0C07979Eu, 2);  /* 0C07979C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0797A0u, 1);  /* 0C07979E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0797A2u, 1);  /* 0C0797A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0797A4u, 1);  /* 0C0797A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0797A6u, 1);  /* 0C0797A4 mov.l @Rm+,Rn */
	IF(0x0C0797A6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0797A6 rts */
}

void f_0C0797C0(sh3_t *c)
{
	LOCALS;
	goto L_0C0797C0;
L_0C079730: BLKS(0x0C079730u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C079732u, 1);  /* 0C079730 mov.l Rm,@-Rn */
	r3 = 0xBu;  /* 0C079732 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C079736u, 2);  /* 0C079734 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C079738u, 1);  /* 0C079736 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07973Au, 1);  /* 0C079738 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C07973Cu, 1);  /* 0C07973A mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07973C exts.w Rm,Rn */
	IF(0x0C07973Eu); MACL = r11 * r0;  /* 0C07973E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C079742u, 4);  /* 0C079740 mov.l Rm,@-Rn */
	r2 = 0xC26CD40u; UPD(0x0C079744u, 1);  /* 0C079742 mov.l @(disp,pc),Rn */
	IF(0x0C079744u); r0 = MACL;  /* 0C079744 sts macl,Rn */
	IF(0x0C079746u); r15 -= 4; W32(r15, PR); UPD(0x0C079748u, 2);  /* 0C079746 sts.l pr,@-Rn */
	r0 += r2;  /* 0C079748 add Rm,Rn */
	r1 = R32(r0 + 0x8u); UPD(0x0C07974Cu, 2);  /* 0C07974A mov.l @(disp,Rm),Rn */
	T = r1 > r3;  /* 0C07974C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07979Au, 4); goto L_0C07979A; } goto L_0C079752; }  /* 0C07974E bt/s */
L_0C079752: BLKS(0x0C079752u);
	r8 = R32(r0 + 0x1Cu); UPD(0x0C079754u, 2);  /* 0C079752 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r3 = v_; } UPD(0x0C079756u, 1);  /* 0C079754 mov.l @Rm+,Rn */
	T = (r3 & r3) == 0;  /* 0C079756 tst Rm,Rn */
	if (T) { UPD(0x0C07978Eu, 4); goto L_0C07978E; }  /* 0C079758 bt */
L_0C07975A: BLKS(0x0C07975Au);
	r9 = r0;  /* 0C07975A mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C07975Eu, 2);  /* 0C07975C mov.w @(disp,pc),Rn */
	r10 += r0;  /* 0C07975E add Rm,Rn */
	UPD(0x0C079760u, 1);
L_0C079760: BLKS(0x0C079760u);
	r8 += 0x4u;  /* 0C079760 add #imm,Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C079764u, 2);  /* 0C079762 mov.l @Rm+,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C079764 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C079768u, 2);  /* 0C079766 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C07976Au, 1);  /* 0C079768 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C07976A add Rm,Rn */
	IF(0x0C07976Cu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07976Eu, 2);  /* 0C07976C mov.b @(r0,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r4 = v_; } UPD(0x0C079770u, 1);  /* 0C07976E mov.l @Rm+,Rn */
	r0 = r3 & 0xFF;  /* 0C079770 extu.b Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C079774u, 2);  /* 0C079772 mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C079776u, 1);  /* 0C079774 mov.l Rm,@Rn */
	r7 += r4;  /* 0C079776 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C07977Au, 2);  /* 0C079778 mov.b @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C07977A extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07977Eu, 2);  /* 0C07977C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C079780u, 1);  /* 0C07977E mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C079780 mov #imm,Rn */
	IF(0x0C079782u); { u32 t_ = r0; PR = 0x0C079786u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C079786u); }  /* 0C079782 jsr @Rn */
L_0C079786: BLKS(0x0C079786u);
	{ u32 v_ = R32(r8); r8 += 4; r4 = v_; } UPD(0x0C079788u, 1);  /* 0C079786 mov.l @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C079788 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C079760u, 4); goto L_0C079760; } UPD(0x0C07978Eu, 1); goto L_0C07978E; }  /* 0C07978A bf/s */
L_0C07978E: BLKS(0x0C07978Eu);
	r9 = 0xB4u; UPD(0x0C079790u, 1);  /* 0C07978E mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C079790 mov #imm,Rn */
	IF(0x0C079792u); MACL = r11 * r9;  /* 0C079792 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C079796u, 4);  /* 0C079794 mov.l @(disp,pc),Rn */
	IF(0x0C079796u); r0 = MACL;  /* 0C079796 sts macl,Rn */
	IF(0x0C079798u); W32(r0 + r6, r8); UPD(0x0C07979Au, 2);  /* 0C079798 mov.l Rm,@(r0,Rn) */
L_0C07979A: BLKS(0x0C07979Au);
	r15 = r14;  /* 0C07979A mov Rm,Rn */
	IF(0x0C07979Cu); PR = R32(r15); r15 += 4; UPD(0x0C07979Eu, 2);  /* 0C07979C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0797A0u, 1);  /* 0C07979E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0797A2u, 1);  /* 0C0797A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0797A4u, 1);  /* 0C0797A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0797A6u, 1);  /* 0C0797A4 mov.l @Rm+,Rn */
	IF(0x0C0797A6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0797A6 rts */
L_0C0797C0: BLKS(0x0C0797C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0797C2u, 1);  /* 0C0797C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0797C4u, 1);  /* 0C0797C2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0797C4 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0797C8u, 2);  /* 0C0797C6 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0797CAu, 1);  /* 0C0797C8 mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0797CCu, 1);  /* 0C0797CA mov.l Rm,@-Rn */
	IF(0x0C0797CCu); MACL = r8 * r3;  /* 0C0797CC mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0797D0u, 3);  /* 0C0797CE mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C0797D2u, 1);  /* 0C0797D0 mov.l @(disp,pc),Rn */
	IF(0x0C0797D2u); r2 = MACL;  /* 0C0797D2 sts macl,Rn */
	IF(0x0C0797D4u); r15 -= 4; W32(r15, PR); UPD(0x0C0797D6u, 2);  /* 0C0797D4 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0797D6 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0797DAu, 2);  /* 0C0797D8 mov.l @(disp,Rm),Rn */
	r0 = 0xBu;  /* 0C0797DA mov #imm,Rn */
	T = r2 > r0;  /* 0C0797DC cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C079824u, 5); goto L_0C079824; } goto L_0C0797E2; }  /* 0C0797DE bt/s */
L_0C0797E2: BLKS(0x0C0797E2u);
	r0 = 0xC0797F4u;  /* 0C0797E2 mova @(disp,pc),r0 */
	IF(0x0C0797E4u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0797E6u, 3);  /* 0C0797E4 mov.b @(r0,Rm),Rn */
	r4 = r4 & 0xFF;  /* 0C0797E6 extu.b Rm,Rn */
	IF(0x0C0797E8u); { u32 tv_ = (r4 + 0x0C0797ECu); u32 t_ = PHYS(tv_); IF(0x0C0797EAu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C079800u: goto L_0C079800; case 0x0C0798C0u: goto L_0C0798C0; default: JUMPD(tv_); } }  /* 0C0797E8 braf Rn */
L_0C079800: BLKS(0x0C079800u);
	r6 = 0xB4u; UPD(0x0C079802u, 1);  /* 0C079800 mov.w @(disp,pc),Rn */
	IF(0x0C079802u); MACL = r8 * r6;  /* 0C079802 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C079806u, 3);  /* 0C079804 mov.l @(disp,pc),Rn */
	IF(0x0C079806u); r9 = MACL;  /* 0C079806 sts macl,Rn */
	r10 = 0x9Fu; UPD(0x0C07980Au, 2);  /* 0C079808 mov.w @(disp,pc),Rn */
	r9 += r5;  /* 0C07980A add Rm,Rn */
	r10 += r9;  /* 0C07980C add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C079810u, 3);  /* 0C07980E mov.b @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C079810 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C079812 cmp/eq #imm,r0 */
	{ u32 c_ = T; r11 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C079880u, 5); goto L_0C079880; } goto L_0C079818; }  /* 0C079814 bt/s */
L_0C079818: BLKS(0x0C079818u);
	T = (s32)r0 > (s32)r11;  /* 0C079818 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C079860u, 5); goto L_0C079860; } goto L_0C07981E; }  /* 0C07981A bt/s */
L_0C07981E: BLKS(0x0C07981Eu);
	T = (r0 & r0) == 0;  /* 0C07981E tst Rm,Rn */
	if (T) { UPD(0x0C079840u, 5); goto L_0C079840; }  /* 0C079820 bt */
L_0C079822: BLKS(0x0C079822u);
	IF(0x0C079822u); ;  /* 0C079822 nop */
	UPD(0x0C079824u, 1);
L_0C079824: BLKS(0x0C079824u);
	r15 = r14;  /* 0C079824 mov Rm,Rn */
	IF(0x0C079826u); PR = R32(r15); r15 += 4; UPD(0x0C079828u, 2);  /* 0C079826 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07982Au, 1);  /* 0C079828 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07982Cu, 1);  /* 0C07982A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07982Eu, 1);  /* 0C07982C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C079830u, 1);  /* 0C07982E mov.l @Rm+,Rn */
	IF(0x0C079830u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C079830 rts */
L_0C079840: BLKS(0x0C079840u);
	r4 = r8;  /* 0C079840 mov Rm,Rn */
	r8 = 0xC0A1700u; UPD(0x0C079844u, 2);  /* 0C079842 mov.l @(disp,pc),Rn */
	IF(0x0C079844u); { u32 t_ = r8; PR = 0x0C079848u; IF(0x0C079846u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C079848u); }  /* 0C079844 jsr @Rn */
L_0C079848: BLKS(0x0C079848u);
	r1 = R32(r9); UPD(0x0C07984Au, 1);  /* 0C079848 mov.l @Rm,Rn */
	r7 = 0x100u; UPD(0x0C07984Cu, 1);  /* 0C07984A mov.w @(disp,pc),Rn */
	T = (r1 & r7) == 0;  /* 0C07984C tst Rm,Rn */
	if (T) { UPD(0x0C079824u, 4); goto L_0C079824; }  /* 0C07984E bt */
L_0C079850: BLKS(0x0C079850u);
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C079852u, 1);  /* 0C079850 mov.b @Rm,Rn */
	r0 = 0x88u; UPD(0x0C079854u, 1);  /* 0C079852 mov.w @(disp,pc),Rn */
	IF(0x0C079854u); W16(r0 + r9, r11); UPD(0x0C079856u, 1);  /* 0C079854 mov.w Rm,@(r0,Rn) */
	r1 += 0x1u;  /* 0C079856 add #imm,Rn */
	UPD(0x0C079858u, 1);
L_0C079858: BLKS(0x0C079858u);
	{ W8(r10, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C079824u, 3); goto L_0C079824; }  /* 0C079858 bra */
L_0C079860: BLKS(0x0C079860u);
	if (!T) { UPD(0x0C079824u, 3); goto L_0C079824; }  /* 0C079860 bf */
L_0C079862: BLKS(0x0C079862u);
	r4 = r8;  /* 0C079862 mov Rm,Rn */
	r8 = 0xC0A1700u; UPD(0x0C079866u, 2);  /* 0C079864 mov.l @(disp,pc),Rn */
	IF(0x0C079866u); { u32 t_ = r8; PR = 0x0C07986Au; IF(0x0C079868u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C07986Au); }  /* 0C079866 jsr @Rn */
L_0C07986A: BLKS(0x0C07986Au);
	r7 = R32(r9); UPD(0x0C07986Cu, 1);  /* 0C07986A mov.l @Rm,Rn */
	r6 = 0x100u; UPD(0x0C07986Eu, 1);  /* 0C07986C mov.w @(disp,pc),Rn */
	T = (r7 & r6) == 0;  /* 0C07986E tst Rm,Rn */
	if (!T) { UPD(0x0C079824u, 4); goto L_0C079824; }  /* 0C079870 bf */
L_0C079872: BLKS(0x0C079872u);
	r11 = 0xFFFFFFFFu;  /* 0C079872 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C079876u, 2);  /* 0C079874 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C079878u, 1);  /* 0C079876 mov.b @Rm,Rn */
	IF(0x0C079878u); W16(r0 + r9, r11); UPD(0x0C07987Au, 1);  /* 0C079878 mov.w Rm,@(r0,Rn) */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C079858u, 3); goto L_0C079858; }  /* 0C07987A bra */
L_0C079880: BLKS(0x0C079880u);
	r6 = 0x88u; UPD(0x0C079882u, 1);  /* 0C079880 mov.w @(disp,pc),Rn */
	r4 = 0xFu;  /* 0C079882 mov #imm,Rn */
	r6 += r9;  /* 0C079884 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r6); UPD(0x0C079888u, 3);  /* 0C079886 mov.w @Rm,Rn */
	r11 = r9;  /* 0C079888 mov Rm,Rn */
	r2 = R32(r9 + 0x24u); UPD(0x0C07988Cu, 2);  /* 0C07988A mov.l @(disp,Rm),Rn */
	IF(0x0C07988Cu); ARG0(0x434Du); { s32 s_ = (s32)r4; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C07988C shld Rm,Rn */
	r2 += r3;  /* 0C07988E add Rm,Rn */
	W32(r9 + 0x24u, r2); UPD(0x0C079892u, 3);  /* 0C079890 mov.l Rm,@(disp,Rn) */
	r11 += 0x50u;  /* 0C079892 add #imm,Rn */
	r2 = 0x99u; UPD(0x0C079896u, 2);  /* 0C079894 mov.w @(disp,pc),Rn */
	r0 = R32(r11); UPD(0x0C079898u, 1);  /* 0C079896 mov.l @Rm,Rn */
	r2 += r9;  /* 0C079898 add Rm,Rn */
	r0 += r3;  /* 0C07989A add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C07989Eu, 3);  /* 0C07989C mov.b @Rm,Rn */
	W32(r11, r0); UPD(0x0C0798A0u, 1);  /* 0C07989E mov.l Rm,@Rn */
	r9 += 0x1u;  /* 0C0798A0 add #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C0798A2 extu.b Rm,Rn */
	T = r0 == 0x2Au;  /* 0C0798A4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C079824u, 6); goto L_0C079824; } UPD(0x0C0798AAu, 1); goto L_0C0798AA; }  /* 0C0798A6 bf/s */
L_0C0798AA: BLKS(0x0C0798AAu);
	r6 += 0x1u;  /* 0C0798AA add #imm,Rn */
	r5 = 0x0u;  /* 0C0798AC mov #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r6); UPD(0x0C0798B0u, 3);  /* 0C0798AE mov.b @Rm,Rn */
	W8(r2, r5); UPD(0x0C0798B2u, 1);  /* 0C0798B0 mov.b Rm,@Rn */
	{ r1 += r7; /* slot add Rm,Rn */ UPD(0x0C079858u, 3); goto L_0C079858; }  /* 0C0798B2 bra */
L_0C0798C0: BLKS(0x0C0798C0u);
	r10 = 0xC0A03F0u; UPD(0x0C0798C2u, 1);  /* 0C0798C0 mov.l @(disp,pc),Rn */
	IF(0x0C0798C2u); { u32 t_ = r10; PR = 0x0C0798C6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0798C6u); }  /* 0C0798C2 jsr @Rn */
L_0C0798C6: BLKS(0x0C0798C6u);
	IF(0x0C0798C6u); T = (s32)r0 >= 0;  /* 0C0798C6 cmp/pz Rn */
	if (!T) { UPD(0x0C079900u, 4); goto L_0C079900; }  /* 0C0798C8 bf */
L_0C0798CA: BLKS(0x0C0798CAu);
	r2 = 0xB4u; UPD(0x0C0798CCu, 1);  /* 0C0798CA mov.w @(disp,pc),Rn */
	IF(0x0C0798CCu); MACL = r8 * r2;  /* 0C0798CC mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C0798D0u, 3);  /* 0C0798CE mov.l @(disp,pc),Rn */
	IF(0x0C0798D0u); r9 = MACL;  /* 0C0798D0 sts macl,Rn */
	IF(0x0C0798D2u); MACL = r0 * r2;  /* 0C0798D2 mul.l Rm,Rn */
	r9 += r11;  /* 0C0798D4 add Rm,Rn */
	r9 += 0x50u;  /* 0C0798D6 add #imm,Rn */
	IF(0x0C0798D8u); r5 = MACL;  /* 0C0798D8 sts macl,Rn */
	r5 += r11;  /* 0C0798DA add Rm,Rn */
	r5 += 0x50u;  /* 0C0798DC add #imm,Rn */
	r7 = R32(r5); UPD(0x0C0798E0u, 9);  /* 0C0798DE mov.l @Rm,Rn */
	W32(r9, r7); UPD(0x0C0798E2u, 1);  /* 0C0798E0 mov.l Rm,@Rn */
	r5 += 0xFFFFFFB0u;  /* 0C0798E2 add #imm,Rn */
	r9 += 0xFFFFFFB0u;  /* 0C0798E4 add #imm,Rn */
	r3 = R32(r5 + 0x24u); UPD(0x0C0798E8u, 3);  /* 0C0798E6 mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C0798EAu, 1);  /* 0C0798E8 mov.l @(disp,Rm),Rn */
	r4 = R32(r5 + 0x28u); UPD(0x0C0798ECu, 1);  /* 0C0798EA mov.l @(disp,Rm),Rn */
	r3 += r6;  /* 0C0798EC add Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C0798F0u, 2);  /* 0C0798EE mov.l @(disp,Rm),Rn */
	r3 += r7;  /* 0C0798F0 add Rm,Rn */
	r4 += r1;  /* 0C0798F2 add Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C0798F6u, 3);  /* 0C0798F4 mov.l Rm,@(disp,Rn) */
	{ W32(r9 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C079824u, 3); goto L_0C079824; }  /* 0C0798F6 bra */
L_0C079900: BLKS(0x0C079900u);
	r0 = 0xC079730u; UPD(0x0C079902u, 1);  /* 0C079900 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C079902 mov Rm,Rn */
	r15 = r14;  /* 0C079904 mov Rm,Rn */
	IF(0x0C079906u); PR = R32(r15); r15 += 4; UPD(0x0C079908u, 3);  /* 0C079906 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07990Au, 1);  /* 0C079908 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07990Cu, 1);  /* 0C07990A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07990Eu, 1);  /* 0C07990C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C079910u, 1);  /* 0C07990E mov.l @Rm+,Rn */
	IF(0x0C079910u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C079730u: goto L_0C079730; default: JUMPD(tv_); } }  /* 0C079910 jmp @Rn */
}

void f_0C079930(sh3_t *c)
{
	LOCALS;
L_0C079930: BLKS(0x0C079930u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C079932u, 1);  /* 0C079930 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C079934u, 1);  /* 0C079932 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C079936u, 1);  /* 0C079934 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C079938u, 1);  /* 0C079936 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07993Au, 1);  /* 0C079938 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07993Cu, 1);  /* 0C07993A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07993Eu, 1);  /* 0C07993C mov.l Rm,@-Rn */
	r9 = 0xC22C874u; UPD(0x0C079940u, 1);  /* 0C07993E mov.l @(disp,pc),Rn */
	IF(0x0C079940u); r15 -= 4; W32(r15, PR); UPD(0x0C079942u, 1);  /* 0C079940 sts.l pr,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C079944u, 1);  /* 0C079942 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C079944 mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C079948u, 2);  /* 0C079946 mov.w @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C07994Au, 1);  /* 0C079948 mov.l @(disp,pc),Rn */
	IF(0x0C07994Au); { u32 t_ = r8; PR = 0x0C07994Eu; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C07994Eu); }  /* 0C07994A jsr @Rn */
L_0C07994E: BLKS(0x0C07994Eu);
	T = (r0 & r0) == 0;  /* 0C07994E tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C079970u, 4); goto L_0C079970; } UPD(0x0C079954u, 1); goto L_0C079954; }  /* 0C079950 bf/s */
L_0C079954: BLKS(0x0C079954u);
	r15 = r14;  /* 0C079954 mov Rm,Rn */
	IF(0x0C079956u); PR = R32(r15); r15 += 4; UPD(0x0C079958u, 2);  /* 0C079956 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07995Au, 1);  /* 0C079958 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07995Cu, 1);  /* 0C07995A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07995Eu, 1);  /* 0C07995C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C079960u, 1);  /* 0C07995E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C079962u, 1);  /* 0C079960 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C079964u, 1);  /* 0C079962 mov.l @Rm+,Rn */
	IF(0x0C079964u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C079964 rts */
L_0C079970: BLKS(0x0C079970u);
	r8 = 0xC0606C0u; UPD(0x0C079972u, 1);  /* 0C079970 mov.l @(disp,pc),Rn */
	IF(0x0C079972u); { u32 t_ = r8; PR = 0x0C079976u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C079976u); }  /* 0C079972 jsr @Rn */
L_0C079976: BLKS(0x0C079976u);
	T = (r0 & r0) == 0;  /* 0C079976 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C079954u, 4); goto L_0C079954; } goto L_0C07997C; }  /* 0C079978 bt/s */
L_0C07997C: BLKS(0x0C07997Cu);
	r11 = 0xC2755BCu; UPD(0x0C07997Eu, 2);  /* 0C07997C mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C07997E mov #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r11); UPD(0x0C079982u, 2);  /* 0C079980 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C079984u, 1);  /* 0C079982 mov.w @(disp,pc),Rn */
	IF(0x0C079984u); MACL = r13 * r8;  /* 0C079984 mul.l Rm,Rn */
	r6 = 0xC286509u; UPD(0x0C079988u, 3);  /* 0C079986 mov.l @(disp,pc),Rn */
	r5 = 0xC26CD40u; UPD(0x0C07998Au, 1);  /* 0C079988 mov.l @(disp,pc),Rn */
	IF(0x0C07998Au); r8 = MACL;  /* 0C07998A sts macl,Rn */
	r11 = (u32)(s32)(s8)R8(r6); UPD(0x0C07998Eu, 2);  /* 0C07998C mov.b @Rm,Rn */
	r8 += r5;  /* 0C07998E add Rm,Rn */
	r4 = 0xC1008110u; UPD(0x0C079992u, 2);  /* 0C079990 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C079994u, 1);  /* 0C079992 mov.w @Rm,Rn */
	r0 = 0xC0A02D0u; UPD(0x0C079996u, 1);  /* 0C079994 mov.l @(disp,pc),Rn */
	r12 = r3 & 0xFFFF;  /* 0C079996 extu.w Rm,Rn */
	W32(r8, r4); UPD(0x0C07999Au, 2);  /* 0C079998 mov.l Rm,@Rn */
	r9 = 0x4Cu;  /* 0C07999A mov #imm,Rn */
	W32(r8 + 0xCu, r2); UPD(0x0C07999Eu, 2);  /* 0C07999C mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C07999E mov Rm,Rn */
	W32(r8 + 0x8u, r2); UPD(0x0C0799A2u, 2);  /* 0C0799A0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0799A2u); { u32 t_ = r0; PR = 0x0C0799A6u; W32(r8 + 0x4u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C0799A6u); }  /* 0C0799A2 jsr @Rn */
L_0C0799A6: BLKS(0x0C0799A6u);
	IF(0x0C0799A6u); MACL = r11 * r9;  /* 0C0799A6 mul.l Rm,Rn */
	r1 = 0xC26CAE0u; UPD(0x0C0799AAu, 3);  /* 0C0799A8 mov.l @(disp,pc),Rn */
	r5 = 0xC392D5Eu; UPD(0x0C0799ACu, 1);  /* 0C0799AA mov.l @(disp,pc),Rn */
	IF(0x0C0799ACu); r12 = MACL;  /* 0C0799AC sts macl,Rn */
	r10 = 0xC21F5E2u; UPD(0x0C0799B0u, 2);  /* 0C0799AE mov.l @(disp,pc),Rn */
	r12 += r1;  /* 0C0799B0 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C0799B4u, 2);  /* 0C0799B2 mov.w @Rm,Rn */
	r7 = R32(r12 + 0x8u); UPD(0x0C0799B6u, 1);  /* 0C0799B4 mov.l @(disp,Rm),Rn */
	IF(0x0C0799B6u); r4 <<= 16;  /* 0C0799B6 shll16 Rn */
	r6 = (u32)(s32)(s16)R16(r10); UPD(0x0C0799BAu, 2);  /* 0C0799B8 mov.w @Rm,Rn */
	r12 += 0x42u;  /* 0C0799BA add #imm,Rn */
	r3 = 0xC0A1530u; UPD(0x0C0799BEu, 2);  /* 0C0799BC mov.l @(disp,pc),Rn */
	IF(0x0C0799BEu); r6 <<= 16;  /* 0C0799BE shll16 Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C0799C2u, 2);  /* 0C0799C0 mov.l Rm,@(disp,Rn) */
	r6 -= r7;  /* 0C0799C2 sub Rm,Rn */
	r4 = r13;  /* 0C0799C4 mov Rm,Rn */
	IF(0x0C0799C6u); { u32 t_ = r3; PR = 0x0C0799CAu; W32(r8 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0799CAu); }  /* 0C0799C6 jsr @Rn */
L_0C0799CA: BLKS(0x0C0799CAu);
	r0 = 0xB0u; UPD(0x0C0799CCu, 1);  /* 0C0799CA mov.w @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C0799CC mov #imm,Rn */
	IF(0x0C0799CEu); W8(r0 + r8, r11); UPD(0x0C0799D0u, 2);  /* 0C0799CE mov.b Rm,@(r0,Rn) */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C0799D2u, 1);  /* 0C0799D0 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0799D2 add #imm,Rn */
	IF(0x0C0799D4u); W8(r0 + r8, r2); UPD(0x0C0799D6u, 2);  /* 0C0799D4 mov.b Rm,@(r0,Rn) */
	r12 = r8;  /* 0C0799D6 mov Rm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0799D8 add #imm,Rn */
	IF(0x0C0799DAu); W8(r0 + r8, r2); UPD(0x0C0799DCu, 3);  /* 0C0799DA mov.b Rm,@(r0,Rn) */
L_0C0799DC: BLKS(0x0C0799DCu);
	r6 = 0xC2755BCu; UPD(0x0C0799DEu, 1);  /* 0C0799DC mov.l @(disp,pc),Rn */
	r7 = r13;  /* 0C0799DE mov Rm,Rn */
	r7 += r7;  /* 0C0799E0 add Rm,Rn */
	r7 += r6;  /* 0C0799E2 add Rm,Rn */
	r7 += 0x2u;  /* 0C0799E4 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r7); UPD(0x0C0799E8u, 5);  /* 0C0799E6 mov.w @Rm,Rn */
	r2 = 0x0u;  /* 0C0799E8 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C0799ECu, 2);  /* 0C0799EA mov.w @(disp,pc),Rn */
	IF(0x0C0799ECu); MACL = r9 * r8;  /* 0C0799EC mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C0799F0u, 3);  /* 0C0799EE mov.l @(disp,pc),Rn */
	IF(0x0C0799F0u); r8 = MACL;  /* 0C0799F0 sts macl,Rn */
	r8 += r1;  /* 0C0799F2 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0799F6u, 3);  /* 0C0799F4 mov.w @Rm,Rn */
	r4 = r8;  /* 0C0799F6 mov Rm,Rn */
	r8 += 0x7Eu;  /* 0C0799F8 add #imm,Rn */
	W16(r8, r5); UPD(0x0C0799FCu, 3);  /* 0C0799FA mov.w Rm,@Rn */
	r4 += 0x7Cu;  /* 0C0799FC add #imm,Rn */
	r10 = R32(r12 + 0x4u); UPD(0x0C079A00u, 2);  /* 0C0799FE mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFF82u;  /* 0C079A00 add #imm,Rn */
	W32(r8 + 0x4u, r10); UPD(0x0C079A04u, 2);  /* 0C079A02 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A02D0u; UPD(0x0C079A06u, 1);  /* 0C079A04 mov.l @(disp,pc),Rn */
	r10 = r13;  /* 0C079A06 mov Rm,Rn */
	W16(r4, r5); UPD(0x0C079A0Au, 2);  /* 0C079A08 mov.w Rm,@Rn */
	r10 += 0x1u;  /* 0C079A0A add #imm,Rn */
	r3 = 0xC0000010u; UPD(0x0C079A0Eu, 2);  /* 0C079A0C mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C079A0E mov Rm,Rn */
	W32(r8, r3); UPD(0x0C079A12u, 2);  /* 0C079A10 mov.l Rm,@Rn */
	IF(0x0C079A12u); r13 <<= 2;  /* 0C079A12 shll2 Rn */
	W32(r8 + 0xCu, r2); UPD(0x0C079A16u, 2);  /* 0C079A14 mov.l Rm,@(disp,Rn) */
	IF(0x0C079A16u); { u32 t_ = r0; PR = 0x0C079A1Au; W32(r8 + 0x8u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C079A1Au); }  /* 0C079A16 jsr @Rn */
L_0C079A1A: BLKS(0x0C079A1Au);
	r4 = r9;  /* 0C079A1A mov Rm,Rn */
	r9 = 0xC0A1530u; UPD(0x0C079A1Eu, 2);  /* 0C079A1C mov.l @(disp,pc),Rn */
	IF(0x0C079A1Eu); { u32 t_ = r9; PR = 0x0C079A22u; IF(0x0C079A20u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C079A22u); }  /* 0C079A1E jsr @Rn */
L_0C079A22: BLKS(0x0C079A22u);
	r7 = R32(r12 + 0x24u); UPD(0x0C079A24u, 1);  /* 0C079A22 mov.l @(disp,Rm),Rn */
	r0 = r13;  /* 0C079A24 mov Rm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C079A28u, 2);  /* 0C079A26 mov.l @(disp,Rm),Rn */
	r2 = 0x4Cu;  /* 0C079A28 mov #imm,Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C079A2Cu, 2);  /* 0C079A2A mov.l Rm,@(disp,Rn) */
	IF(0x0C079A2Cu); MACL = r11 * r2;  /* 0C079A2C mul.l Rm,Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C079A30u, 3);  /* 0C079A2E mov.l Rm,@(disp,Rn) */
	r7 = 0x2u;  /* 0C079A30 mov #imm,Rn */
	r5 = 0xC18C5B0u; UPD(0x0C079A34u, 2);  /* 0C079A32 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C079A34 add #imm,Rn */
	IF(0x0C079A36u); r4 = R32(r0 + r5); UPD(0x0C079A38u, 2);  /* 0C079A36 mov.l @(r0,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C079A3Au, 1);  /* 0C079A38 mov.w @(disp,pc),Rn */
	W32(r8, r4); UPD(0x0C079A3Cu, 1);  /* 0C079A3A mov.l Rm,@Rn */
	IF(0x0C079A3Cu); r3 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C079A3Eu, 1);  /* 0C079A3C mov.b @(r0,Rm),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C079A3E add #imm,Rn */
	IF(0x0C079A40u); W8(r0 + r8, r3); UPD(0x0C079A42u, 2);  /* 0C079A40 mov.b Rm,@(r0,Rn) */
	r1 = 0xC26CAE0u; UPD(0x0C079A44u, 1);  /* 0C079A42 mov.l @(disp,pc),Rn */
	IF(0x0C079A44u); r0 = MACL;  /* 0C079A44 sts macl,Rn */
	r0 += r1;  /* 0C079A46 add Rm,Rn */
	r0 += 0x42u;  /* 0C079A48 add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r0); UPD(0x0C079A4Cu, 4);  /* 0C079A4A mov.b @Rm,Rn */
	r13 = 0xADu; UPD(0x0C079A4Eu, 1);  /* 0C079A4C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C079A4E mov Rm,Rn */
	IF(0x0C079A50u); W8(r0 + r13, r9); UPD(0x0C079A52u, 2);  /* 0C079A50 mov.b Rm,@(r0,Rn) */
	r13 += 0xFFFFFFFCu;  /* 0C079A52 add #imm,Rn */
	IF(0x0C079A54u); W8(r0 + r13, r9); UPD(0x0C079A56u, 2);  /* 0C079A54 mov.b Rm,@(r0,Rn) */
	r13 = (u32)(s32)(s16)r10;  /* 0C079A56 exts.w Rm,Rn */
	T = (s32)r13 > (s32)r7;  /* 0C079A58 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0799DCu, 5); goto L_0C0799DC; } goto L_0C079A5E; }  /* 0C079A5A bf/s */
L_0C079A5E: BLKS(0x0C079A5Eu);
	{ IF(0x0C079A60u); ; /* slot nop */ UPD(0x0C079954u, 4); goto L_0C079954; }  /* 0C079A5E bra */
}

void f_0C079AB0(sh3_t *c)
{
	LOCALS;
L_0C079AB0: BLKS(0x0C079AB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C079AB2u, 1);  /* 0C079AB0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C079AB4u, 1);  /* 0C079AB2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C079AB6u, 1);  /* 0C079AB4 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C079AB8u, 1);  /* 0C079AB6 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C079AB8 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C079ABCu, 2);  /* 0C079ABA mov.l Rm,@-Rn */
	IF(0x0C079ABCu); MACL = r10 * r3;  /* 0C079ABC mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C079AC0u, 3);  /* 0C079ABE mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C079AC2u, 1);  /* 0C079AC0 mov.l @(disp,pc),Rn */
	IF(0x0C079AC2u); r2 = MACL;  /* 0C079AC2 sts macl,Rn */
	IF(0x0C079AC4u); r15 -= 4; W32(r15, PR); UPD(0x0C079AC6u, 2);  /* 0C079AC4 sts.l pr,@-Rn */
	r0 += r2;  /* 0C079AC6 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C079ACAu, 2);  /* 0C079AC8 mov.l @(disp,Rm),Rn */
	r0 = 0x3u;  /* 0C079ACA mov #imm,Rn */
	T = r2 > r0;  /* 0C079ACC cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C079B08u, 5); goto L_0C079B08; } goto L_0C079AD2; }  /* 0C079ACE bt/s */
L_0C079AD2: BLKS(0x0C079AD2u);
	r0 = 0xC079AE4u;  /* 0C079AD2 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C079AD4 add Rm,Rn */
	IF(0x0C079AD6u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C079AD8u, 4);  /* 0C079AD6 mov.w @(r0,Rm),Rn */
	IF(0x0C079AD8u); { u32 tv_ = (r4 + 0x0C079ADCu); u32 t_ = PHYS(tv_); IF(0x0C079ADAu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C079AF0u: goto L_0C079AF0; case 0x0C079BD0u: goto L_0C079BD0; case 0x0C079C40u: goto L_0C079C40; case 0x0C079C70u: goto L_0C079C70; default: JUMPD(tv_); } }  /* 0C079AD8 braf Rn */
L_0C079AF0: BLKS(0x0C079AF0u);
	r7 = 0xB4u; UPD(0x0C079AF2u, 1);  /* 0C079AF0 mov.w @(disp,pc),Rn */
	IF(0x0C079AF2u); MACL = r10 * r7;  /* 0C079AF2 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C079AF6u, 3);  /* 0C079AF4 mov.l @(disp,pc),Rn */
	IF(0x0C079AF6u); r11 = MACL;  /* 0C079AF6 sts macl,Rn */
	r11 += r6;  /* 0C079AF8 add Rm,Rn */
	r1 = R32(r11 + 0x24u); UPD(0x0C079AFCu, 3);  /* 0C079AFA mov.l @(disp,Rm),Rn */
	r5 = 0xFF800000u; UPD(0x0C079AFEu, 1);  /* 0C079AFC mov.l @(disp,pc),Rn */
	T = (s32)r1 >= (s32)r5;  /* 0C079AFE cmp/ge Rm,Rn */
	{ u32 c_ = T; r8 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C079B20u, 4); goto L_0C079B20; } goto L_0C079B04; }  /* 0C079B00 bt/s */
L_0C079B04: BLKS(0x0C079B04u);
	W32(r11, r8); UPD(0x0C079B06u, 2);  /* 0C079B04 mov.l Rm,@Rn */
	IF(0x0C079B06u); ;  /* 0C079B06 nop */
	UPD(0x0C079B08u, 1);
L_0C079B08: BLKS(0x0C079B08u);
	r15 = r14;  /* 0C079B08 mov Rm,Rn */
	IF(0x0C079B0Au); PR = R32(r15); r15 += 4; UPD(0x0C079B0Cu, 2);  /* 0C079B0A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C079B0Eu, 1);  /* 0C079B0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C079B10u, 1);  /* 0C079B0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C079B12u, 1);  /* 0C079B10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C079B14u, 1);  /* 0C079B12 mov.l @Rm+,Rn */
	IF(0x0C079B14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C079B14 rts */
L_0C079B20: BLKS(0x0C079B20u);
	r8 = 0xC286502u; UPD(0x0C079B22u, 1);  /* 0C079B20 mov.l @(disp,pc),Rn */
	r9 = 0xAu;  /* 0C079B22 mov #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C079B26u, 2);  /* 0C079B24 mov.b @Rm,Rn */
	r4 = 0xFu;  /* 0C079B26 mov #imm,Rn */
	r0 = r7;  /* 0C079B28 mov Rm,Rn */
	r0 &= 0xF0u;  /* 0C079B2A and #imm,r0 */
	IF(0x0C079B2Cu); r0 >>= 2;  /* 0C079B2C shlr2 Rn */
	IF(0x0C079B2Eu); r0 >>= 2;  /* 0C079B2E shlr2 Rn */
	IF(0x0C079B30u); MACL = r0 * r9;  /* 0C079B30 mul.l Rm,Rn */
	r7 &= r4;  /* 0C079B32 and Rm,Rn */
	r5 = 0xCu;  /* 0C079B34 mov #imm,Rn */
	IF(0x0C079B36u); r0 = MACL;  /* 0C079B36 sts macl,Rn */
	r7 += r0;  /* 0C079B38 add Rm,Rn */
	r0 = 0xC0AFDF0u; UPD(0x0C079B3Cu, 12);  /* 0C079B3A mov.l @(disp,pc),Rn */
	r4 = r7;  /* 0C079B3C mov Rm,Rn */
	IF(0x0C079B3Eu); { u32 t_ = r0; PR = 0x0C079B42u; r11 += 0x5Cu; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFDF0, 0x0C0AFDF0u, 0x0C079B42u); }  /* 0C079B3E jsr @Rn */
L_0C079B42: BLKS(0x0C079B42u);
	W32(r11, r1); UPD(0x0C079B44u, 1);  /* 0C079B42 mov.l Rm,@Rn */
	r8 += 0xFFFFFFFEu;  /* 0C079B44 add #imm,Rn */
	r8 += 0x1u;  /* 0C079B46 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C079B4Au, 3);  /* 0C079B48 mov.b @Rm,Rn */
	r6 = 0xFu;  /* 0C079B4A mov #imm,Rn */
	r0 = r3;  /* 0C079B4C mov Rm,Rn */
	r0 &= 0xF0u;  /* 0C079B4E and #imm,r0 */
	IF(0x0C079B50u); r0 >>= 2;  /* 0C079B50 shlr2 Rn */
	IF(0x0C079B52u); r0 >>= 2;  /* 0C079B52 shlr2 Rn */
	IF(0x0C079B54u); MACL = r0 * r9;  /* 0C079B54 mul.l Rm,Rn */
	r3 &= r6;  /* 0C079B56 and Rm,Rn */
	r11 += 0x4u;  /* 0C079B58 add #imm,Rn */
	IF(0x0C079B5Au); r1 = MACL;  /* 0C079B5A sts macl,Rn */
	r3 += r1;  /* 0C079B5C add Rm,Rn */
	W32(r11, r3); UPD(0x0C079B60u, 12);  /* 0C079B5E mov.l Rm,@Rn */
	r8 += 0xFFFFFFFFu;  /* 0C079B60 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C079B64u, 2);  /* 0C079B62 mov.b @Rm,Rn */
	r2 = 0xFu;  /* 0C079B64 mov #imm,Rn */
	r0 = r4;  /* 0C079B66 mov Rm,Rn */
	r0 &= 0xF0u;  /* 0C079B68 and #imm,r0 */
	IF(0x0C079B6Au); r0 >>= 2;  /* 0C079B6A shlr2 Rn */
	IF(0x0C079B6Cu); r0 >>= 2;  /* 0C079B6C shlr2 Rn */
	IF(0x0C079B6Eu); MACL = r0 * r9;  /* 0C079B6E mul.l Rm,Rn */
	r4 &= r2;  /* 0C079B70 and Rm,Rn */
	r11 += 0x4u;  /* 0C079B72 add #imm,Rn */
	IF(0x0C079B74u); r5 = MACL;  /* 0C079B74 sts macl,Rn */
	r4 += r5;  /* 0C079B76 add Rm,Rn */
	W32(r11, r4); UPD(0x0C079B7Au, 12);  /* 0C079B78 mov.l Rm,@Rn */
	r11 += 0xFFFFFF9Cu;  /* 0C079B7A add #imm,Rn */
	r0 = R32(r11 + 0x24u); UPD(0x0C079B7Eu, 2);  /* 0C079B7C mov.l @(disp,Rm),Rn */
	r9 = 0x3FFFFFu; UPD(0x0C079B80u, 1);  /* 0C079B7E mov.l @(disp,pc),Rn */
	T = (s32)r0 > (s32)r9;  /* 0C079B80 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C079B08u, 4); goto L_0C079B08; }  /* 0C079B82 bf */
L_0C079B84: BLKS(0x0C079B84u);
	r0 = r11;  /* 0C079B84 mov Rm,Rn */
	r5 = 0xA5u; UPD(0x0C079B88u, 2);  /* 0C079B86 mov.w @(disp,pc),Rn */
	IF(0x0C079B88u); r8 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C079B8Au, 1);  /* 0C079B88 mov.b @(r0,Rm),Rn */
	r4 = r10;  /* 0C079B8A mov Rm,Rn */
	r9 = 0xC18C5BCu; UPD(0x0C079B8Eu, 2);  /* 0C079B8C mov.l @(disp,pc),Rn */
	r10 = 0xC0A9E40u; UPD(0x0C079B90u, 1);  /* 0C079B8E mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C079B90 mov Rm,Rn */
	IF(0x0C079B92u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C079B94u, 2);  /* 0C079B92 mov.b @(r0,Rm),Rn */
	IF(0x0C079B94u); { u32 t_ = r10; PR = 0x0C079B98u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C079B98u); }  /* 0C079B94 jsr @Rn */
L_0C079B98: BLKS(0x0C079B98u);
	T = (r0 & r0) == 0;  /* 0C079B98 tst Rm,Rn */
	if (T) { UPD(0x0C079B08u, 4); goto L_0C079B08; }  /* 0C079B9A bt */
L_0C079B9C: BLKS(0x0C079B9Cu);
	r0 = r11;  /* 0C079B9C mov Rm,Rn */
	r7 = 0xA9u; UPD(0x0C079BA0u, 2);  /* 0C079B9E mov.w @(disp,pc),Rn */
	IF(0x0C079BA0u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C079BA2u, 1);  /* 0C079BA0 mov.b @(r0,Rm),Rn */
	r9 = 0xC0AFE40u; UPD(0x0C079BA4u, 1);  /* 0C079BA2 mov.l @(disp,pc),Rn */
	r6 += 0xFFFFFFFFu;  /* 0C079BA4 add #imm,Rn */
	IF(0x0C079BA6u); { u32 t_ = r9; PR = 0x0C079BAAu; r10 = (u32)(s32)(s8)r6; /* slot exts.b Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C079BAAu); }  /* 0C079BA6 jsr @Rn */
L_0C079BAA: BLKS(0x0C079BAAu);
	r3 = (u32)(s32)(s16)r0;  /* 0C079BAA exts.w Rm,Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C079BAEu, 2);  /* 0C079BAC mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C079BAE mov Rm,Rn */
	r5 = R32(r11 + 0x28u); UPD(0x0C079BB2u, 2);  /* 0C079BB0 mov.l @(disp,Rm),Rn */
	r7 = r3;  /* 0C079BB2 mov Rm,Rn */
	r2 = 0xC087DA0u; UPD(0x0C079BB6u, 2);  /* 0C079BB4 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C079BB6 mov Rm,Rn */
	IF(0x0C079BB8u); PR = R32(r15); r15 += 4; UPD(0x0C079BBAu, 2);  /* 0C079BB8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C079BBCu, 1);  /* 0C079BBA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C079BBEu, 1);  /* 0C079BBC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C079BC0u, 1);  /* 0C079BBE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C079BC2u, 1);  /* 0C079BC0 mov.l @Rm+,Rn */
	IF(0x0C079BC2u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C087DA0u: TAIL(f_0C087DA0); default: JUMPD(tv_); } }  /* 0C079BC2 jmp @Rn */
L_0C079BD0: BLKS(0x0C079BD0u);
	r11 = 0xC0A0540u; UPD(0x0C079BD2u, 1);  /* 0C079BD0 mov.l @(disp,pc),Rn */
	IF(0x0C079BD2u); { u32 t_ = r11; PR = 0x0C079BD6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C079BD6u); }  /* 0C079BD2 jsr @Rn */
L_0C079BD6: BLKS(0x0C079BD6u);
	IF(0x0C079BD6u); T = (s32)r0 >= 0;  /* 0C079BD6 cmp/pz Rn */
	if (!T) { UPD(0x0C079C30u, 4); goto L_0C079C30; }  /* 0C079BD8 bf */
L_0C079BDA: BLKS(0x0C079BDAu);
	r11 = 0xB4u; UPD(0x0C079BDCu, 1);  /* 0C079BDA mov.w @(disp,pc),Rn */
	IF(0x0C079BDCu); MACL = r10 * r11;  /* 0C079BDC mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C079BE0u, 3);  /* 0C079BDE mov.l @(disp,pc),Rn */
	IF(0x0C079BE0u); r4 = MACL;  /* 0C079BE0 sts macl,Rn */
	IF(0x0C079BE2u); MACL = r0 * r11;  /* 0C079BE2 mul.l Rm,Rn */
	r2 = 0x2AAAAAABu; UPD(0x0C079BE6u, 4);  /* 0C079BE4 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C079BE6 add Rm,Rn */
	IF(0x0C079BE8u); r3 = MACL;  /* 0C079BE8 sts macl,Rn */
	r3 += r7;  /* 0C079BEA add Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C079BEEu, 4);  /* 0C079BEC mov.l @(disp,Rm),Rn */
	r9 = R32(r3 + 0x28u); UPD(0x0C079BF0u, 1);  /* 0C079BEE mov.l @(disp,Rm),Rn */
	r3 += 0x5Cu;  /* 0C079BF0 add #imm,Rn */
	{ u32 v_ = R32(r3); r3 += 4; r1 = v_; } UPD(0x0C079BF4u, 2);  /* 0C079BF2 mov.l @Rm+,Rn */
	r5 = R32(r3); UPD(0x0C079BF6u, 1);  /* 0C079BF4 mov.l @Rm,Rn */
	r0 = r1;  /* 0C079BF6 mov Rm,Rn */
	{ s64 r_ = (s64)(s32)r5 * (s64)(s32)r2; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C079BF8 dmuls.l Rm,Rn */
	IF(0x0C079BFAu); r0 <<= 2;  /* 0C079BFA shll2 Rn */
	r0 += r1;  /* 0C079BFC add Rm,Rn */
	IF(0x0C079BFEu); r8 = MACH;  /* 0C079BFE sts mach,Rn */
	IF(0x0C079C00u); T = r8 & 1; r8 = (u32)((s32)r8 >> 1);  /* 0C079C00 shar Rn */
	IF(0x0C079C02u); T = r5 >> 31; r5 <<= 1;  /* 0C079C02 shll Rn */
	{ u32 a_ = r5, t_ = a_ - r5, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r5 = r_; }  /* 0C079C04 subc Rm,Rn */
	r8 -= r5;  /* 0C079C06 sub Rm,Rn */
	r0 += r8;  /* 0C079C08 add Rm,Rn */
	W32(r4 + 0x24u, r6); UPD(0x0C079C0Cu, 12);  /* 0C079C0A mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x28u, r9); UPD(0x0C079C0Eu, 1);  /* 0C079C0C mov.l Rm,@(disp,Rn) */
	W32(r4 + 0xCu, r0); UPD(0x0C079C10u, 1);  /* 0C079C0E mov.l Rm,@(disp,Rn) */
L_0C079C10: BLKS(0x0C079C10u);
	r5 = 0xC0A0380u; UPD(0x0C079C12u, 1);  /* 0C079C10 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C079C12 mov Rm,Rn */
	r15 = r14;  /* 0C079C14 mov Rm,Rn */
	IF(0x0C079C16u); PR = R32(r15); r15 += 4; UPD(0x0C079C18u, 3);  /* 0C079C16 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C079C1Au, 1);  /* 0C079C18 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C079C1Cu, 1);  /* 0C079C1A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C079C1Eu, 1);  /* 0C079C1C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C079C20u, 1);  /* 0C079C1E mov.l @Rm+,Rn */
	IF(0x0C079C20u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C079C20 jmp @Rn */
L_0C079C30: BLKS(0x0C079C30u);
	r6 = 0xB4u; UPD(0x0C079C32u, 1);  /* 0C079C30 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C079C32 mov #imm,Rn */
	IF(0x0C079C34u); MACL = r10 * r6;  /* 0C079C34 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C079C38u, 4);  /* 0C079C36 mov.l @(disp,pc),Rn */
	IF(0x0C079C38u); r0 = MACL;  /* 0C079C38 sts macl,Rn */
	{ IF(0x0C079C3Cu); W32(r0 + r10, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C079B08u, 4); goto L_0C079B08; }  /* 0C079C3A bra */
L_0C079C40: BLKS(0x0C079C40u);
	r8 = 0xC0A0540u; UPD(0x0C079C42u, 1);  /* 0C079C40 mov.l @(disp,pc),Rn */
	IF(0x0C079C42u); { u32 t_ = r8; PR = 0x0C079C46u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C079C46u); }  /* 0C079C42 jsr @Rn */
L_0C079C46: BLKS(0x0C079C46u);
	IF(0x0C079C46u); T = (s32)r0 >= 0;  /* 0C079C46 cmp/pz Rn */
	if (!T) { UPD(0x0C079C30u, 4); goto L_0C079C30; }  /* 0C079C48 bf */
L_0C079C4A: BLKS(0x0C079C4Au);
	r2 = 0xB4u; UPD(0x0C079C4Cu, 1);  /* 0C079C4A mov.w @(disp,pc),Rn */
	IF(0x0C079C4Cu); MACL = r10 * r2;  /* 0C079C4C mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C079C50u, 3);  /* 0C079C4E mov.l @(disp,pc),Rn */
	IF(0x0C079C50u); r3 = MACL;  /* 0C079C50 sts macl,Rn */
	IF(0x0C079C52u); MACL = r0 * r2;  /* 0C079C52 mul.l Rm,Rn */
	r3 += r5;  /* 0C079C54 add Rm,Rn */
	IF(0x0C079C56u); r1 = MACL;  /* 0C079C56 sts macl,Rn */
	r1 += r5;  /* 0C079C58 add Rm,Rn */
	r0 = R32(r1 + 0x24u); UPD(0x0C079C5Cu, 7);  /* 0C079C5A mov.l @(disp,Rm),Rn */
	r4 = R32(r1 + 0x28u); UPD(0x0C079C5Eu, 1);  /* 0C079C5C mov.l @(disp,Rm),Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C079C60u, 1);  /* 0C079C5E mov.l Rm,@(disp,Rn) */
	r1 += 0x60u;  /* 0C079C60 add #imm,Rn */
	W32(r3 + 0x28u, r4); UPD(0x0C079C64u, 2);  /* 0C079C62 mov.l Rm,@(disp,Rn) */
L_0C079C64: BLKS(0x0C079C64u);
	r0 = R32(r1); UPD(0x0C079C66u, 1);  /* 0C079C64 mov.l @Rm,Rn */
	{ W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C079C10u, 3); goto L_0C079C10; }  /* 0C079C66 bra */
L_0C079C70: BLKS(0x0C079C70u);
	r9 = 0xC0A0540u; UPD(0x0C079C72u, 1);  /* 0C079C70 mov.l @(disp,pc),Rn */
	IF(0x0C079C72u); { u32 t_ = r9; PR = 0x0C079C76u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C079C76u); }  /* 0C079C72 jsr @Rn */
L_0C079C76: BLKS(0x0C079C76u);
	IF(0x0C079C76u); T = (s32)r0 >= 0;  /* 0C079C76 cmp/pz Rn */
	if (!T) { UPD(0x0C079C30u, 4); goto L_0C079C30; }  /* 0C079C78 bf */
L_0C079C7A: BLKS(0x0C079C7Au);
	r4 = 0xB4u; UPD(0x0C079C7Cu, 1);  /* 0C079C7A mov.w @(disp,pc),Rn */
	IF(0x0C079C7Cu); MACL = r10 * r4;  /* 0C079C7C mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C079C80u, 3);  /* 0C079C7E mov.l @(disp,pc),Rn */
	IF(0x0C079C80u); r3 = MACL;  /* 0C079C80 sts macl,Rn */
	IF(0x0C079C82u); MACL = r0 * r4;  /* 0C079C82 mul.l Rm,Rn */
	r3 += r8;  /* 0C079C84 add Rm,Rn */
	IF(0x0C079C86u); r1 = MACL;  /* 0C079C86 sts macl,Rn */
	r1 += r8;  /* 0C079C88 add Rm,Rn */
	r11 = R32(r1 + 0x24u); UPD(0x0C079C8Cu, 7);  /* 0C079C8A mov.l @(disp,Rm),Rn */
	r7 = R32(r1 + 0x28u); UPD(0x0C079C8Eu, 1);  /* 0C079C8C mov.l @(disp,Rm),Rn */
	W32(r3 + 0x24u, r11); UPD(0x0C079C90u, 1);  /* 0C079C8E mov.l Rm,@(disp,Rn) */
	r1 += 0x64u;  /* 0C079C90 add #imm,Rn */
	{ W32(r3 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C079C64u, 4); goto L_0C079C64; }  /* 0C079C92 bra */
}

void f_0C079CD0(sh3_t *c)
{
	LOCALS;
L_0C079CD0: BLKS(0x0C079CD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C079CD2u, 1);  /* 0C079CD0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C079CD4u, 1);  /* 0C079CD2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C079CD6u, 1);  /* 0C079CD4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C079CD8u, 1);  /* 0C079CD6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C079CDAu, 1);  /* 0C079CD8 mov.l Rm,@-Rn */
	r9 = 0xB4u; UPD(0x0C079CDCu, 1);  /* 0C079CDA mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C079CDC exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C079CE0u, 2);  /* 0C079CDE mov.l Rm,@-Rn */
	IF(0x0C079CE0u); MACL = r12 * r9;  /* 0C079CE0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C079CE4u, 3);  /* 0C079CE2 mov.l Rm,@-Rn */
	r10 = 0xC26CD40u; UPD(0x0C079CE6u, 1);  /* 0C079CE4 mov.l @(disp,pc),Rn */
	IF(0x0C079CE6u); r8 = MACL;  /* 0C079CE6 sts macl,Rn */
	IF(0x0C079CE8u); r15 -= 4; W32(r15, PR); UPD(0x0C079CEAu, 2);  /* 0C079CE8 sts.l pr,@-Rn */
	r8 += r10;  /* 0C079CEA add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C079CEEu, 2);  /* 0C079CEC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C079CEE add #imm,Rn */
	T = r0 == 0x20u;  /* 0C079CF0 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C079CFAu, 5); goto L_0C079CFA; } goto L_0C079CF6; }  /* 0C079CF2 bf/s */
L_0C079CF6: BLKS(0x0C079CF6u);
	{ IF(0x0C079CF8u); ; /* slot nop */ UPD(0x0C079F90u, 4); goto L_0C079F90; }  /* 0C079CF6 bra */
L_0C079CFA: BLKS(0x0C079CFAu);
	r2 = 0x99u; UPD(0x0C079CFCu, 1);  /* 0C079CFA mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C079CFC add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C079D00u, 2);  /* 0C079CFE mov.b @Rm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C079D00 cmp/eq #imm,r0 */
	{ u32 c_ = T; r3 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C079D84u, 4); goto L_0C079D84; } goto L_0C079D06; }  /* 0C079D02 bt/s */
L_0C079D06: BLKS(0x0C079D06u);
	r9 = 0xC058130u; UPD(0x0C079D08u, 2);  /* 0C079D06 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C079D08 add #imm,Rn */
	W8(r2, r3); UPD(0x0C079D0Cu, 2);  /* 0C079D0A mov.b Rm,@Rn */
	r13 = 0x9Eu; UPD(0x0C079D0Eu, 1);  /* 0C079D0C mov.w @(disp,pc),Rn */
	IF(0x0C079D0Eu); { u32 t_ = r9; PR = 0x0C079D12u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C079D12u); }  /* 0C079D0E jsr @Rn */
L_0C079D12: BLKS(0x0C079D12u);
	r0 = r8;  /* 0C079D12 mov Rm,Rn */
	IF(0x0C079D14u); r11 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C079D16u, 2);  /* 0C079D14 mov.b @(r0,Rm),Rn */
	r6 = 0x280u; UPD(0x0C079D18u, 1);  /* 0C079D16 mov.w @(disp,pc),Rn */
	r7 = r11 & 0xFF;  /* 0C079D18 extu.b Rm,Rn */
	IF(0x0C079D1Au); MACL = r7 * r6;  /* 0C079D1A mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C079D1Eu, 4);  /* 0C079D1C mov.l @(disp,pc),Rn */
	IF(0x0C079D1Eu); r10 = MACL;  /* 0C079D1E sts macl,Rn */
	r10 += r5;  /* 0C079D20 add Rm,Rn */
	r9 = 0x8Au; UPD(0x0C079D24u, 3);  /* 0C079D22 mov.w @(disp,pc),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C079D26u, 1);  /* 0C079D24 mov.l @(disp,Rm),Rn */
	r9 += r8;  /* 0C079D26 add Rm,Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C079D2Au, 2);  /* 0C079D28 mov.l @(disp,Rm),Rn */
	r8 = 0xC057390u; UPD(0x0C079D2Cu, 1);  /* 0C079D2A mov.l @(disp,pc),Rn */
	r6 = R32(r10 + 0x10u); UPD(0x0C079D2Eu, 1);  /* 0C079D2C mov.l @(disp,Rm),Rn */
	IF(0x0C079D2Eu); { u32 t_ = r8; PR = 0x0C079D32u; r7 = R32(r10 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C079D32u); }  /* 0C079D2E jsr @Rn */
L_0C079D32: BLKS(0x0C079D32u);
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C079D34u, 1);  /* 0C079D32 mov.w @Rm,Rn */
	r4 = 0x1FFu; UPD(0x0C079D36u, 1);  /* 0C079D34 mov.w @(disp,pc),Rn */
	r2 = r3;  /* 0C079D36 mov Rm,Rn */
	r2 -= r0;  /* 0C079D38 sub Rm,Rn */
	r2 &= r4;  /* 0C079D3A and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C079D3C tst Rm,Rn */
	if (T) { UPD(0x0C079D52u, 7); goto L_0C079D52; }  /* 0C079D3E bt */
L_0C079D40: BLKS(0x0C079D40u);
	r0 = 0x100u; UPD(0x0C079D42u, 1);  /* 0C079D40 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C079D42 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C079D4Cu, 4); goto L_0C079D4C; } goto L_0C079D48; }  /* 0C079D44 bt/s */
L_0C079D48: BLKS(0x0C079D48u);
	{ r1 += 0xFFFFFFFEu; /* slot add #imm,Rn */ UPD(0x0C079D50u, 4); goto L_0C079D50; }  /* 0C079D48 bra */
L_0C079D4C: BLKS(0x0C079D4Cu);
	r1 = r3;  /* 0C079D4C mov Rm,Rn */
	r1 += 0x2u;  /* 0C079D4E add #imm,Rn */
	UPD(0x0C079D50u, 2);
L_0C079D50: BLKS(0x0C079D50u);
	W16(r9, r1); UPD(0x0C079D52u, 1);  /* 0C079D50 mov.w Rm,@Rn */
L_0C079D52: BLKS(0x0C079D52u);
	r3 = 0xFFFFFF00u; UPD(0x0C079D54u, 1);  /* 0C079D52 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C079D54 add Rm,Rn */
	IF(0x0C079D56u); T = (s32)r3 >= 0;  /* 0C079D56 cmp/pz Rn */
	if (T) { UPD(0x0C079D5Cu, 5); goto L_0C079D5C; }  /* 0C079D58 bt */
L_0C079D5A: BLKS(0x0C079D5Au);
	r3 = 0u - r3;  /* 0C079D5A neg Rm,Rn */
	UPD(0x0C079D5Cu, 1);
L_0C079D5C: BLKS(0x0C079D5Cu);
	r1 = 0xF8u; UPD(0x0C079D5Eu, 1);  /* 0C079D5C mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r1;  /* 0C079D5E cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C079D68u, 4); goto L_0C079D68; } goto L_0C079D64; }  /* 0C079D60 bt/s */
L_0C079D64: BLKS(0x0C079D64u);
	{ IF(0x0C079D66u); ; /* slot nop */ UPD(0x0C079F70u, 4); goto L_0C079F70; }  /* 0C079D64 bra */
L_0C079D68: BLKS(0x0C079D68u);
	IF(0x0C079D68u); MACL = r12 * r1;  /* 0C079D68 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C079D6Cu, 3);  /* 0C079D6A mov.l @(disp,pc),Rn */
	r2 = 0x8Cu; UPD(0x0C079D6Eu, 1);  /* 0C079D6C mov.w @(disp,pc),Rn */
	IF(0x0C079D6Eu); r3 = MACL;  /* 0C079D6E sts macl,Rn */
	r3 += r8;  /* 0C079D70 add Rm,Rn */
	r3 += r2;  /* 0C079D72 add Rm,Rn */
	r2 = R32(r3); UPD(0x0C079D76u, 4);  /* 0C079D74 mov.l @Rm,Rn */
	r4 = 0x1BFFFu; UPD(0x0C079D78u, 1);  /* 0C079D76 mov.l @(disp,pc),Rn */
	r1 = 0x1000u; UPD(0x0C079D7Au, 1);  /* 0C079D78 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C079D7A cmp/gt Rm,Rn */
	{ u32 c_ = T; r2 += r1; /* slot add Rm,Rn */ if (c_) { UPD(0x0C079D84u, 4); goto L_0C079D84; } goto L_0C079D80; }  /* 0C079D7C bt/s */
L_0C079D80: BLKS(0x0C079D80u);
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C079F62u, 4); goto L_0C079F62; }  /* 0C079D80 bra */
L_0C079D84: BLKS(0x0C079D84u);
	r0 = 0xB4u; UPD(0x0C079D86u, 1);  /* 0C079D84 mov.w @(disp,pc),Rn */
	IF(0x0C079D86u); MACL = r12 * r0;  /* 0C079D86 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C079D8Au, 3);  /* 0C079D88 mov.l @(disp,pc),Rn */
	IF(0x0C079D8Au); r10 = MACL;  /* 0C079D8A sts macl,Rn */
	r11 = 0x8Cu; UPD(0x0C079D8Eu, 2);  /* 0C079D8C mov.w @(disp,pc),Rn */
	r10 += r3;  /* 0C079D8E add Rm,Rn */
	r13 = 0xC058060u; UPD(0x0C079D92u, 2);  /* 0C079D90 mov.l @(disp,pc),Rn */
	r11 += r10;  /* 0C079D92 add Rm,Rn */
	r8 = 0x8Au; UPD(0x0C079D96u, 2);  /* 0C079D94 mov.w @(disp,pc),Rn */
	r5 = R32(r11); UPD(0x0C079D98u, 1);  /* 0C079D96 mov.l @Rm,Rn */
	r8 += r10;  /* 0C079D98 add Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C079D9Cu, 2);  /* 0C079D9A mov.l @(disp,pc),Rn */
	IF(0x0C079D9Cu); { u32 t_ = r13; PR = 0x0C079DA0u; r4 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C079DA0u); }  /* 0C079D9C jsr @Rn */
L_0C079DA0: BLKS(0x0C079DA0u);
	r5 = R32(r11); UPD(0x0C079DA2u, 1);  /* 0C079DA0 mov.l @Rm,Rn */
	W32(r10 + 0x2Cu, r0); UPD(0x0C079DA4u, 1);  /* 0C079DA2 mov.l Rm,@(disp,Rn) */
	IF(0x0C079DA4u); { u32 t_ = r9; PR = 0x0C079DA8u; r4 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C079DA8u); }  /* 0C079DA4 jsr @Rn */
L_0C079DA8: BLKS(0x0C079DA8u);
	r11 = R32(r10 + 0x24u); UPD(0x0C079DAAu, 1);  /* 0C079DA8 mov.l @(disp,Rm),Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C079DACu, 1);  /* 0C079DAA mov.l @(disp,Rm),Rn */
	r13 = R32(r10 + 0x2Cu); UPD(0x0C079DAEu, 1);  /* 0C079DAC mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C079DAE add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C079DB2u, 2);  /* 0C079DB0 mov.l @(disp,pc),Rn */
	r11 += r13;  /* 0C079DB2 add Rm,Rn */
	r3 += r11;  /* 0C079DB4 add Rm,Rn */
	W32(r10 + 0x30u, r0); UPD(0x0C079DB8u, 3);  /* 0C079DB6 mov.l Rm,@(disp,Rn) */
	IF(0x0C079DB8u); T = (s32)r3 >= 0;  /* 0C079DB8 cmp/pz Rn */
	W32(r10 + 0x24u, r11); UPD(0x0C079DBCu, 2);  /* 0C079DBA mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r10 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C079DC4u, 3); goto L_0C079DC4; } UPD(0x0C079DC0u, 1); goto L_0C079DC0; }  /* 0C079DBC bt/s */
L_0C079DC0: BLKS(0x0C079DC0u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C079F50u, 3); goto L_0C079F50; }  /* 0C079DC0 bra */
L_0C079DC4: BLKS(0x0C079DC4u);
	r4 = 0xD00000u; UPD(0x0C079DC6u, 1);  /* 0C079DC4 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r4;  /* 0C079DC6 cmp/gt Rm,Rn */
	{ u32 c_ = T; r9 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C079DEAu, 4); goto L_0C079DEA; } goto L_0C079DCC; }  /* 0C079DC8 bt/s */
L_0C079DCC: BLKS(0x0C079DCCu);
	r2 = 0xC3929E0u; UPD(0x0C079DCEu, 2);  /* 0C079DCC mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C079DD0u, 1);  /* 0C079DCE mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C079DD2u, 1);  /* 0C079DD0 mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C079DD2 mov Rm,Rn */
	r2 -= r6;  /* 0C079DD4 sub Rm,Rn */
	r2 += r5;  /* 0C079DD6 add Rm,Rn */
	IF(0x0C079DD8u); T = (s32)r2 >= 0;  /* 0C079DD8 cmp/pz Rn */
	if (T) { UPD(0x0C079DDEu, 7); goto L_0C079DDE; }  /* 0C079DDA bt */
L_0C079DDC: BLKS(0x0C079DDCu);
	r2 = 0u - r2;  /* 0C079DDC neg Rm,Rn */
	UPD(0x0C079DDEu, 1);
L_0C079DDE: BLKS(0x0C079DDEu);
	r7 = 0xA80000u; UPD(0x0C079DE0u, 1);  /* 0C079DDE mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C079DE0 cmp/gt Rm,Rn */
	{ u32 c_ = T; r9 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C079DEAu, 4); goto L_0C079DEA; } goto L_0C079DE6; }  /* 0C079DE2 bt/s */
L_0C079DE6: BLKS(0x0C079DE6u);
	{ IF(0x0C079DE8u); ; /* slot nop */ UPD(0x0C079F10u, 4); goto L_0C079F10; }  /* 0C079DE6 bra */
L_0C079DEA: BLKS(0x0C079DEAu);
	W32(r10, r9); UPD(0x0C079DECu, 1);  /* 0C079DEA mov.l Rm,@Rn */
	r1 = 0x1u;  /* 0C079DEC mov #imm,Rn */
	UPD(0x0C079DEEu, 1);
L_0C079DEE: BLKS(0x0C079DEEu);
	r0 = (u32)(s32)(s16)r1;  /* 0C079DEE exts.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C079DF0 tst Rm,Rn */
	if (T) { UPD(0x0C079E50u, 5); goto L_0C079E50; }  /* 0C079DF2 bt */
L_0C079DF4: BLKS(0x0C079DF4u);
	r14 += 0x8u;  /* 0C079DF4 add #imm,Rn */
	r15 = r14;  /* 0C079DF6 mov Rm,Rn */
	IF(0x0C079DF8u); PR = R32(r15); r15 += 4; UPD(0x0C079DFAu, 3);  /* 0C079DF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C079DFCu, 1);  /* 0C079DFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C079DFEu, 1);  /* 0C079DFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C079E00u, 1);  /* 0C079DFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C079E02u, 1);  /* 0C079E00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C079E04u, 1);  /* 0C079E02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C079E06u, 1);  /* 0C079E04 mov.l @Rm+,Rn */
	IF(0x0C079E06u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C079E06 rts */
L_0C079E50: BLKS(0x0C079E50u);
	r8 = 0xC0A9E40u; UPD(0x0C079E52u, 1);  /* 0C079E50 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C079E52 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C079E54 mov #imm,Rn */
	IF(0x0C079E56u); { u32 t_ = r8; PR = 0x0C079E5Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C079E5Au); }  /* 0C079E56 jsr @Rn */
L_0C079E5A: BLKS(0x0C079E5Au);
	T = (r0 & r0) == 0;  /* 0C079E5A tst Rm,Rn */
	if (T) { UPD(0x0C079DF4u, 4); goto L_0C079DF4; }  /* 0C079E5C bt */
L_0C079E5E: BLKS(0x0C079E5Eu);
	r4 = 0xB4u; UPD(0x0C079E60u, 1);  /* 0C079E5E mov.w @(disp,pc),Rn */
	IF(0x0C079E60u); MACL = r12 * r4;  /* 0C079E60 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C079E64u, 3);  /* 0C079E62 mov.l @(disp,pc),Rn */
	IF(0x0C079E64u); r8 = MACL;  /* 0C079E64 sts macl,Rn */
	r8 += r3;  /* 0C079E66 add Rm,Rn */
	r7 = 0xA9u; UPD(0x0C079E6Au, 3);  /* 0C079E68 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C079E6A mov Rm,Rn */
	r13 = 0xC0A9BB0u; UPD(0x0C079E6Eu, 2);  /* 0C079E6C mov.l @(disp,pc),Rn */
	IF(0x0C079E6Eu); r2 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C079E70u, 1);  /* 0C079E6E mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C079E72u, 1);  /* 0C079E70 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C079E72 extu.b Rm,Rn */
	IF(0x0C079E74u); { u32 t_ = r13; PR = 0x0C079E78u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C079E78u); }  /* 0C079E74 jsr @Rn */
L_0C079E78: BLKS(0x0C079E78u);
	T = (r0 & r0) == 0;  /* 0C079E78 tst Rm,Rn */
	if (T) { UPD(0x0C079DF4u, 4); goto L_0C079DF4; }  /* 0C079E7A bt */
L_0C079E7C: BLKS(0x0C079E7Cu);
	r9 = r8;  /* 0C079E7C mov Rm,Rn */
	r11 = 0x86u; UPD(0x0C079E80u, 2);  /* 0C079E7E mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C079E80 add Rm,Rn */
	W32(r14, r8); UPD(0x0C079E84u, 2);  /* 0C079E82 mov.l Rm,@Rn */
	r13 = 0x0u;  /* 0C079E84 mov #imm,Rn */
	W32(r14 + 0x4u, r9); UPD(0x0C079E88u, 2);  /* 0C079E86 mov.l Rm,@(disp,Rn) */
L_0C079E88: BLKS(0x0C079E88u);
	r6 = R32(r14 + 0x4u); UPD(0x0C079E8Au, 1);  /* 0C079E88 mov.l @(disp,Rm),Rn */
	r0 = r13;  /* 0C079E8A mov Rm,Rn */
	r5 = 0xC18D464u; UPD(0x0C079E8Eu, 2);  /* 0C079E8C mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C079E8E add Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r6); UPD(0x0C079E92u, 2);  /* 0C079E90 mov.w @Rm,Rn */
	r10 = r13;  /* 0C079E92 mov Rm,Rn */
	IF(0x0C079E94u); r8 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C079E96u, 2);  /* 0C079E94 mov.w @(r0,Rm),Rn */
	IF(0x0C079E96u); r10 <<= 2;  /* 0C079E96 shll2 Rn */
	r9 = 0xC058060u; UPD(0x0C079E9Au, 2);  /* 0C079E98 mov.l @(disp,pc),Rn */
	r11 += r8;  /* 0C079E9A add Rm,Rn */
	r8 = (u32)(s32)(s16)r11;  /* 0C079E9C exts.w Rm,Rn */
	r5 = 0x120000u; UPD(0x0C079EA0u, 3);  /* 0C079E9E mov.l @(disp,pc),Rn */
	IF(0x0C079EA0u); { u32 t_ = r9; PR = 0x0C079EA4u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C079EA4u); }  /* 0C079EA0 jsr @Rn */
L_0C079EA4: BLKS(0x0C079EA4u);
	r9 = 0xC058030u; UPD(0x0C079EA6u, 1);  /* 0C079EA4 mov.l @(disp,pc),Rn */
	r11 = r0;  /* 0C079EA6 mov Rm,Rn */
	r4 = 0xC18D474u; UPD(0x0C079EAAu, 2);  /* 0C079EA8 mov.l @(disp,pc),Rn */
	r10 += r4;  /* 0C079EAA add Rm,Rn */
	r5 = R32(r10); UPD(0x0C079EAEu, 2);  /* 0C079EAC mov.l @Rm,Rn */
	IF(0x0C079EAEu); { u32 t_ = r9; PR = 0x0C079EB2u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C079EB2u); }  /* 0C079EAE jsr @Rn */
L_0C079EB2: BLKS(0x0C079EB2u);
	r3 = R32(r14); UPD(0x0C079EB4u, 1);  /* 0C079EB2 mov.l @Rm,Rn */
	r11 -= r0;  /* 0C079EB4 sub Rm,Rn */
	r7 = R32(r3 + 0x24u); UPD(0x0C079EB8u, 2);  /* 0C079EB6 mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C079EB8 mov Rm,Rn */
	r5 = 0x120000u; UPD(0x0C079EBCu, 2);  /* 0C079EBA mov.l @(disp,pc),Rn */
	IF(0x0C079EBCu); { u32 t_ = r9; PR = 0x0C079EC0u; r11 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C079EC0u); }  /* 0C079EBC jsr @Rn */
L_0C079EC0: BLKS(0x0C079EC0u);
	r2 = R32(r14); UPD(0x0C079EC2u, 1);  /* 0C079EC0 mov.l @Rm,Rn */
	r4 = r8;  /* 0C079EC2 mov Rm,Rn */
	r1 = 0xC058060u; UPD(0x0C079EC6u, 2);  /* 0C079EC4 mov.l @(disp,pc),Rn */
	r9 = R32(r2 + 0x28u); UPD(0x0C079EC8u, 1);  /* 0C079EC6 mov.l @(disp,Rm),Rn */
	r5 = R32(r10); UPD(0x0C079ECAu, 1);  /* 0C079EC8 mov.l @Rm,Rn */
	IF(0x0C079ECAu); { u32 t_ = r1; PR = 0x0C079ECEu; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C079ECEu); }  /* 0C079ECA jsr @Rn */
L_0C079ECE: BLKS(0x0C079ECEu);
	r9 += r0;  /* 0C079ECE add Rm,Rn */
	r10 = 0xC7C17D0u; UPD(0x0C079ED2u, 2);  /* 0C079ED0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C079ED2 add #imm,Rn */
	r0 = 0x20000u; UPD(0x0C079ED6u, 2);  /* 0C079ED4 mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C079ED6 mov Rm,Rn */
	W32(r15, r0); UPD(0x0C079EDAu, 2);  /* 0C079ED8 mov.l Rm,@Rn */
	r6 = r9;  /* 0C079EDA mov Rm,Rn */
	r4 = 0x3u;  /* 0C079EDC mov #imm,Rn */
	IF(0x0C079EDEu); { u32 t_ = r10; PR = 0x0C079EE2u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C7C17D0, 0x0C7C17D0u, 0x0C079EE2u); }  /* 0C079EDE jsr @Rn */
L_0C079EE2: BLKS(0x0C079EE2u);
	r6 = r13;  /* 0C079EE2 mov Rm,Rn */
	r6 += 0x1u;  /* 0C079EE4 add #imm,Rn */
	r13 = (u32)(s32)(s16)r6;  /* 0C079EE6 exts.w Rm,Rn */
	r5 = 0x1u;  /* 0C079EE8 mov #imm,Rn */
	T = (s32)r13 > (s32)r5;  /* 0C079EEA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C079E88u, 8); goto L_0C079E88; } goto L_0C079EF0; }  /* 0C079EEC bf/s */
L_0C079EF0: BLKS(0x0C079EF0u);
	r1 = 0xC0580D0u; UPD(0x0C079EF2u, 2);  /* 0C079EF0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C079EF2 mov Rm,Rn */
	UPD(0x0C079EF4u, 1);
L_0C079EF4: BLKS(0x0C079EF4u);
	r14 += 0x8u;  /* 0C079EF4 add #imm,Rn */
	r15 = r14;  /* 0C079EF6 mov Rm,Rn */
	IF(0x0C079EF8u); PR = R32(r15); r15 += 4; UPD(0x0C079EFAu, 3);  /* 0C079EF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C079EFCu, 1);  /* 0C079EFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C079EFEu, 1);  /* 0C079EFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C079F00u, 1);  /* 0C079EFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C079F02u, 1);  /* 0C079F00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C079F04u, 1);  /* 0C079F02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C079F06u, 1);  /* 0C079F04 mov.l @Rm+,Rn */
	IF(0x0C079F06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0580D0u: TAIL(f_0C0580D0); case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C079F06 jmp @Rn */
L_0C079F10: BLKS(0x0C079F10u);
	r11 = 0xC058130u; UPD(0x0C079F12u, 1);  /* 0C079F10 mov.l @(disp,pc),Rn */
	r9 = 0xC057430u; UPD(0x0C079F14u, 1);  /* 0C079F12 mov.l @(disp,pc),Rn */
	IF(0x0C079F14u); { u32 t_ = r11; PR = 0x0C079F18u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C079F18u); }  /* 0C079F14 jsr @Rn */
L_0C079F18: BLKS(0x0C079F18u);
	r4 = r12;  /* 0C079F18 mov Rm,Rn */
	IF(0x0C079F1Au); { u32 t_ = r9; PR = 0x0C079F1Eu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C079F1Eu); }  /* 0C079F1A jsr @Rn */
L_0C079F1E: BLKS(0x0C079F1Eu);
	r4 = 0x86u; UPD(0x0C079F20u, 1);  /* 0C079F1E mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C079F20 mov Rm,Rn */
	IF(0x0C079F22u); r13 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C079F24u, 2);  /* 0C079F22 mov.w @(r0,Rm),Rn */
	r3 = 0x1Fu;  /* 0C079F24 mov #imm,Rn */
	r8 = 0x9Du; UPD(0x0C079F28u, 2);  /* 0C079F26 mov.w @(disp,pc),Rn */
	r13 += 0x8u;  /* 0C079F28 add #imm,Rn */
	IF(0x0C079F2Au); r13 >>= 2;  /* 0C079F2A shlr2 Rn */
	IF(0x0C079F2Cu); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C079F2Eu, 3);  /* 0C079F2C mov.b @(r0,Rm),Rn */
	IF(0x0C079F2Eu); r13 >>= 2;  /* 0C079F2E shlr2 Rn */
	r13 &= r3;  /* 0C079F30 and Rm,Rn */
	r0 = r11;  /* 0C079F32 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C079F34 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C079F36 tst Rm,Rn */
	{ u32 c_ = !T; W32(r10 + 0x8u, r13); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C079F46u, 8); goto L_0C079F46; } UPD(0x0C079F3Cu, 1); goto L_0C079F3C; }  /* 0C079F38 bf/s */
L_0C079F3C: BLKS(0x0C079F3Cu);
	r0 = R32(r10 + 0xCu); UPD(0x0C079F3Eu, 1);  /* 0C079F3C mov.l @(disp,Rm),Rn */
	r6 = 0xC18D468u; UPD(0x0C079F40u, 1);  /* 0C079F3E mov.l @(disp,pc),Rn */
	IF(0x0C079F40u); r0 <<= 2;  /* 0C079F40 shll2 Rn */
	IF(0x0C079F42u); r5 = R32(r0 + r6); UPD(0x0C079F44u, 2);  /* 0C079F42 mov.l @(r0,Rm),Rn */
	W32(r10 + 0xCu, r5); UPD(0x0C079F46u, 1);  /* 0C079F44 mov.l Rm,@(disp,Rn) */
L_0C079F46: BLKS(0x0C079F46u);
	r10 = 0xC0A03B0u; UPD(0x0C079F48u, 1);  /* 0C079F46 mov.l @(disp,pc),Rn */
	IF(0x0C079F48u); { u32 t_ = r10; PR = 0x0C079F4Cu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C079F4Cu); }  /* 0C079F48 jsr @Rn */
L_0C079F4C: BLKS(0x0C079F4Cu);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C079DEEu, 3); goto L_0C079DEE; }  /* 0C079F4C bra */
L_0C079F50: BLKS(0x0C079F50u);
	{ IF(0x0C079F52u); ; /* slot nop */ UPD(0x0C079DC4u, 3); goto L_0C079DC4; }  /* 0C079F50 bra */
L_0C079F60: BLKS(0x0C079F60u);
	W32(r3, r2); UPD(0x0C079F62u, 1);  /* 0C079F60 mov.l Rm,@Rn */
L_0C079F62: BLKS(0x0C079F62u);
	{ IF(0x0C079F64u); ; /* slot nop */ UPD(0x0C079D84u, 3); goto L_0C079D84; }  /* 0C079F62 bra */
L_0C079F70: BLKS(0x0C079F70u);
	r7 = 0xB4u; UPD(0x0C079F72u, 1);  /* 0C079F70 mov.w @(disp,pc),Rn */
	IF(0x0C079F72u); MACL = r12 * r7;  /* 0C079F72 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C079F76u, 3);  /* 0C079F74 mov.l @(disp,pc),Rn */
	IF(0x0C079F76u); r3 = MACL;  /* 0C079F76 sts macl,Rn */
	r5 = 0x8Cu; UPD(0x0C079F7Au, 2);  /* 0C079F78 mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C079F7A add Rm,Rn */
	r3 += r5;  /* 0C079F7C add Rm,Rn */
	r2 = R32(r3); UPD(0x0C079F80u, 3);  /* 0C079F7E mov.l @Rm,Rn */
	r10 = 0x8000u; UPD(0x0C079F82u, 1);  /* 0C079F80 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r10;  /* 0C079F82 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C079F62u, 4); goto L_0C079F62; }  /* 0C079F84 bf */
L_0C079F86: BLKS(0x0C079F86u);
	r1 = 0xFFFFF000u; UPD(0x0C079F88u, 1);  /* 0C079F86 mov.w @(disp,pc),Rn */
	{ r2 += r1; /* slot add Rm,Rn */ UPD(0x0C079F60u, 3); goto L_0C079F60; }  /* 0C079F88 bra */
L_0C079F90: BLKS(0x0C079F90u);
	r11 = 0xC0A03F0u; UPD(0x0C079F92u, 1);  /* 0C079F90 mov.l @(disp,pc),Rn */
	IF(0x0C079F92u); { u32 t_ = r11; PR = 0x0C079F96u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C079F96u); }  /* 0C079F92 jsr @Rn */
L_0C079F96: BLKS(0x0C079F96u);
	IF(0x0C079F96u); T = (s32)r0 >= 0;  /* 0C079F96 cmp/pz Rn */
	if (!T) { UPD(0x0C079FC0u, 4); goto L_0C079FC0; }  /* 0C079F98 bf */
L_0C079F9A: BLKS(0x0C079F9Au);
	IF(0x0C079F9Au); MACL = r0 * r9;  /* 0C079F9A mul.l Rm,Rn */
	r4 = r12;  /* 0C079F9C mov Rm,Rn */
	IF(0x0C079F9Eu); r3 = MACL;  /* 0C079F9E sts macl,Rn */
	r3 += r10;  /* 0C079FA0 add Rm,Rn */
	r1 = R32(r3 + 0x24u); UPD(0x0C079FA4u, 6);  /* 0C079FA2 mov.l @(disp,Rm),Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C079FA6u, 1);  /* 0C079FA4 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r1); UPD(0x0C079FA8u, 1);  /* 0C079FA6 mov.l Rm,@(disp,Rn) */
	r0 += 0x3u;  /* 0C079FA8 add #imm,Rn */
	r2 = R32(r3 + 0x28u); UPD(0x0C079FACu, 2);  /* 0C079FAA mov.l @(disp,Rm),Rn */
	r0 &= 0x7u;  /* 0C079FAC and #imm,r0 */
	W32(r8 + 0x28u, r2); UPD(0x0C079FB0u, 2);  /* 0C079FAE mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A0380u; UPD(0x0C079FB2u, 1);  /* 0C079FB0 mov.l @(disp,pc),Rn */
	{ W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C079EF4u, 3); goto L_0C079EF4; }  /* 0C079FB2 bra */
L_0C079FC0: BLKS(0x0C079FC0u);
	r0 = 0x0u;  /* 0C079FC0 mov #imm,Rn */
	{ W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C079DF4u, 4); goto L_0C079DF4; }  /* 0C079FC2 bra */
}

void f_0C07A020(sh3_t *c)
{
	LOCALS;
L_0C07A020: BLKS(0x0C07A020u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07A022u, 1);  /* 0C07A020 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07A024u, 1);  /* 0C07A022 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07A026u, 1);  /* 0C07A024 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07A028u, 1);  /* 0C07A026 mov.l Rm,@-Rn */
	r9 = 0xB4u; UPD(0x0C07A02Au, 1);  /* 0C07A028 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07A02A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07A02Eu, 2);  /* 0C07A02C mov.l Rm,@-Rn */
	IF(0x0C07A02Eu); MACL = r11 * r9;  /* 0C07A02E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07A032u, 3);  /* 0C07A030 mov.l Rm,@-Rn */
	r10 = 0xC26CD40u; UPD(0x0C07A034u, 1);  /* 0C07A032 mov.l @(disp,pc),Rn */
	IF(0x0C07A034u); r8 = MACL;  /* 0C07A034 sts macl,Rn */
	IF(0x0C07A036u); r15 -= 4; W32(r15, PR); UPD(0x0C07A038u, 2);  /* 0C07A036 sts.l pr,@-Rn */
	r8 += r10;  /* 0C07A038 add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C07A03Cu, 2);  /* 0C07A03A mov.l @(disp,Rm),Rn */
	T = r0 == 0x20u;  /* 0C07A03C cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07A046u, 4); goto L_0C07A046; } goto L_0C07A042; }  /* 0C07A03E bf/s */
L_0C07A042: BLKS(0x0C07A042u);
	{ IF(0x0C07A044u); ; /* slot nop */ UPD(0x0C07A2B0u, 4); goto L_0C07A2B0; }  /* 0C07A042 bra */
L_0C07A046: BLKS(0x0C07A046u);
	r7 = 0x9Fu; UPD(0x0C07A048u, 1);  /* 0C07A046 mov.w @(disp,pc),Rn */
	r7 += r8;  /* 0C07A048 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C07A04Cu, 2);  /* 0C07A04A mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C07A04C extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C07A04E cmp/eq #imm,r0 */
	{ u32 c_ = !T; r6 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A058u, 5); goto L_0C07A058; } goto L_0C07A054; }  /* 0C07A050 bf/s */
L_0C07A054: BLKS(0x0C07A054u);
	{ IF(0x0C07A056u); ; /* slot nop */ UPD(0x0C07A260u, 4); goto L_0C07A260; }  /* 0C07A054 bra */
L_0C07A058: BLKS(0x0C07A058u);
	T = (s32)r0 > (s32)r6;  /* 0C07A058 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C07A062u, 4); goto L_0C07A062; } goto L_0C07A05E; }  /* 0C07A05A bf/s */
L_0C07A05E: BLKS(0x0C07A05Eu);
	{ IF(0x0C07A060u); ; /* slot nop */ UPD(0x0C07A230u, 4); goto L_0C07A230; }  /* 0C07A05E bra */
L_0C07A062: BLKS(0x0C07A062u);
	T = (r0 & r0) == 0;  /* 0C07A062 tst Rm,Rn */
	if (!T) { UPD(0x0C07A06Cu, 4); goto L_0C07A06C; }  /* 0C07A064 bf */
L_0C07A066: BLKS(0x0C07A066u);
	r9 = R32(r8 + 0x24u); UPD(0x0C07A068u, 1);  /* 0C07A066 mov.l @(disp,Rm),Rn */
	{ IF(0x0C07A06Au); ; /* slot nop */ UPD(0x0C07A1C0u, 3); goto L_0C07A1C0; }  /* 0C07A068 bra */
L_0C07A06C: BLKS(0x0C07A06Cu);
	r3 = 0xB4u; UPD(0x0C07A06Eu, 1);  /* 0C07A06C mov.w @(disp,pc),Rn */
	IF(0x0C07A06Eu); MACL = r11 * r3;  /* 0C07A06E mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C07A072u, 3);  /* 0C07A070 mov.l @(disp,pc),Rn */
	IF(0x0C07A072u); r10 = MACL;  /* 0C07A072 sts macl,Rn */
	r8 = 0x8Au; UPD(0x0C07A076u, 2);  /* 0C07A074 mov.w @(disp,pc),Rn */
	r10 += r2;  /* 0C07A076 add Rm,Rn */
	r12 = 0x8Cu; UPD(0x0C07A07Au, 2);  /* 0C07A078 mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C07A07A add Rm,Rn */
	r9 = 0xC058060u; UPD(0x0C07A07Eu, 2);  /* 0C07A07C mov.l @(disp,pc),Rn */
	r12 += r10;  /* 0C07A07E add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C07A082u, 2);  /* 0C07A080 mov.w @Rm,Rn */
	IF(0x0C07A082u); { u32 t_ = r9; PR = 0x0C07A086u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07A086u); }  /* 0C07A082 jsr @Rn */
L_0C07A086: BLKS(0x0C07A086u);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C07A088u, 1);  /* 0C07A086 mov.w @Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C07A08Au, 1);  /* 0C07A088 mov.l @(disp,pc),Rn */
	W32(r10 + 0x2Cu, r0); UPD(0x0C07A08Cu, 1);  /* 0C07A08A mov.l Rm,@(disp,Rn) */
	IF(0x0C07A08Cu); { u32 t_ = r8; PR = 0x0C07A090u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07A090u); }  /* 0C07A08C jsr @Rn */
L_0C07A090: BLKS(0x0C07A090u);
	r6 = R32(r10 + 0x24u); UPD(0x0C07A092u, 1);  /* 0C07A090 mov.l @(disp,Rm),Rn */
	r7 = R32(r10 + 0x2Cu); UPD(0x0C07A094u, 1);  /* 0C07A092 mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C07A094 add Rm,Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C07A098u, 2);  /* 0C07A096 mov.l @(disp,Rm),Rn */
	r3 = 0xFF600000u; UPD(0x0C07A09Au, 1);  /* 0C07A098 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C07A09A add Rm,Rn */
	r3 += r6;  /* 0C07A09C add Rm,Rn */
	W32(r10 + 0x30u, r0); UPD(0x0C07A0A0u, 3);  /* 0C07A09E mov.l Rm,@(disp,Rn) */
	IF(0x0C07A0A0u); T = (s32)r3 >= 0;  /* 0C07A0A0 cmp/pz Rn */
	W32(r10 + 0x24u, r6); UPD(0x0C07A0A4u, 2);  /* 0C07A0A2 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r10 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07A0ACu, 3); goto L_0C07A0AC; } UPD(0x0C07A0A8u, 1); goto L_0C07A0A8; }  /* 0C07A0A4 bt/s */
L_0C07A0A8: BLKS(0x0C07A0A8u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C07A1B0u, 3); goto L_0C07A1B0; }  /* 0C07A0A8 bra */
L_0C07A0AC: BLKS(0x0C07A0ACu);
	r5 = 0xD00000u; UPD(0x0C07A0AEu, 1);  /* 0C07A0AC mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r5;  /* 0C07A0AE cmp/gt Rm,Rn */
	{ u32 c_ = T; r12 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A0CEu, 4); goto L_0C07A0CE; } goto L_0C07A0B4; }  /* 0C07A0B0 bt/s */
L_0C07A0B4: BLKS(0x0C07A0B4u);
	r6 = 0xC3929E0u; UPD(0x0C07A0B6u, 2);  /* 0C07A0B4 mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C07A0B6 mov Rm,Rn */
	r4 = R32(r6); UPD(0x0C07A0BAu, 2);  /* 0C07A0B8 mov.l @Rm,Rn */
	r0 = 0xFF880000u; UPD(0x0C07A0BCu, 1);  /* 0C07A0BA mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C07A0BC sub Rm,Rn */
	r2 += r0;  /* 0C07A0BE add Rm,Rn */
	IF(0x0C07A0C0u); T = (s32)r2 >= 0;  /* 0C07A0C0 cmp/pz Rn */
	if (T) { UPD(0x0C07A0C6u, 6); goto L_0C07A0C6; }  /* 0C07A0C2 bt */
L_0C07A0C4: BLKS(0x0C07A0C4u);
	r2 = 0u - r2;  /* 0C07A0C4 neg Rm,Rn */
	UPD(0x0C07A0C6u, 1);
L_0C07A0C6: BLKS(0x0C07A0C6u);
	r7 = 0xA80000u; UPD(0x0C07A0C8u, 1);  /* 0C07A0C6 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C07A0C8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A170u, 4); goto L_0C07A170; } UPD(0x0C07A0CEu, 1); goto L_0C07A0CE; }  /* 0C07A0CA bf/s */
L_0C07A0CE: BLKS(0x0C07A0CEu);
	W32(r10, r12); UPD(0x0C07A0D0u, 1);  /* 0C07A0CE mov.l Rm,@Rn */
	r1 = 0x1u;  /* 0C07A0D0 mov #imm,Rn */
	UPD(0x0C07A0D2u, 1);
L_0C07A0D2: BLKS(0x0C07A0D2u);
	r0 = (u32)(s32)(s16)r1;  /* 0C07A0D2 exts.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C07A0D4 tst Rm,Rn */
	if (T) { UPD(0x0C07A0F0u, 5); goto L_0C07A0F0; }  /* 0C07A0D6 bt */
L_0C07A0D8: BLKS(0x0C07A0D8u);
	r15 = r14;  /* 0C07A0D8 mov Rm,Rn */
	IF(0x0C07A0DAu); PR = R32(r15); r15 += 4; UPD(0x0C07A0DCu, 2);  /* 0C07A0DA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A0DEu, 1);  /* 0C07A0DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A0E0u, 1);  /* 0C07A0DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A0E2u, 1);  /* 0C07A0E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A0E4u, 1);  /* 0C07A0E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A0E6u, 1);  /* 0C07A0E4 mov.l @Rm+,Rn */
	IF(0x0C07A0E6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07A0E6 rts */
L_0C07A0F0: BLKS(0x0C07A0F0u);
	r9 = 0xC0A9E40u; UPD(0x0C07A0F2u, 1);  /* 0C07A0F0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07A0F2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C07A0F4 mov #imm,Rn */
	IF(0x0C07A0F6u); { u32 t_ = r9; PR = 0x0C07A0FAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07A0FAu); }  /* 0C07A0F6 jsr @Rn */
L_0C07A0FA: BLKS(0x0C07A0FAu);
	T = (r0 & r0) == 0;  /* 0C07A0FA tst Rm,Rn */
	if (T) { UPD(0x0C07A0D8u, 4); goto L_0C07A0D8; }  /* 0C07A0FC bt */
L_0C07A0FE: BLKS(0x0C07A0FEu);
	r2 = 0xB4u; UPD(0x0C07A100u, 1);  /* 0C07A0FE mov.w @(disp,pc),Rn */
	IF(0x0C07A100u); MACL = r11 * r2;  /* 0C07A100 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C07A104u, 3);  /* 0C07A102 mov.l @(disp,pc),Rn */
	IF(0x0C07A104u); r12 = MACL;  /* 0C07A104 sts macl,Rn */
	r12 += r5;  /* 0C07A106 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C07A10Au, 3);  /* 0C07A108 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C07A10A mov Rm,Rn */
	r8 = 0xC0A9BB0u; UPD(0x0C07A10Eu, 2);  /* 0C07A10C mov.l @(disp,pc),Rn */
	IF(0x0C07A10Eu); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07A110u, 1);  /* 0C07A10E mov.b @(r0,Rm),Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C07A112u, 1);  /* 0C07A110 mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C07A112 extu.b Rm,Rn */
	IF(0x0C07A114u); { u32 t_ = r8; PR = 0x0C07A118u; r5 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C07A118u); }  /* 0C07A114 jsr @Rn */
L_0C07A118: BLKS(0x0C07A118u);
	T = (r0 & r0) == 0;  /* 0C07A118 tst Rm,Rn */
	if (T) { UPD(0x0C07A0D8u, 4); goto L_0C07A0D8; }  /* 0C07A11A bt */
L_0C07A11C: BLKS(0x0C07A11Cu);
	r0 = r12;  /* 0C07A11C mov Rm,Rn */
	r7 = 0x86u; UPD(0x0C07A120u, 2);  /* 0C07A11E mov.w @(disp,pc),Rn */
	r8 = 0xC058060u; UPD(0x0C07A122u, 1);  /* 0C07A120 mov.l @(disp,pc),Rn */
	IF(0x0C07A122u); r9 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C07A124u, 1);  /* 0C07A122 mov.w @(r0,Rm),Rn */
	r10 = 0x100000u; UPD(0x0C07A126u, 1);  /* 0C07A124 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C07A126 mov Rm,Rn */
	IF(0x0C07A128u); { u32 t_ = r8; PR = 0x0C07A12Cu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07A12Cu); }  /* 0C07A128 jsr @Rn */
L_0C07A12C: BLKS(0x0C07A12Cu);
	r5 = r10;  /* 0C07A12C mov Rm,Rn */
	r8 = R32(r12 + 0x24u); UPD(0x0C07A130u, 2);  /* 0C07A12E mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C07A130 mov Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C07A134u, 2);  /* 0C07A132 mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C07A134 add Rm,Rn */
	r6 = 0xFFFC0000u; UPD(0x0C07A138u, 2);  /* 0C07A136 mov.l @(disp,pc),Rn */
	IF(0x0C07A138u); { u32 t_ = r10; PR = 0x0C07A13Cu; r8 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07A13Cu); }  /* 0C07A138 jsr @Rn */
L_0C07A13C: BLKS(0x0C07A13Cu);
	r6 = R32(r12 + 0x28u); UPD(0x0C07A13Eu, 1);  /* 0C07A13C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07A13E add #imm,Rn */
	r4 = 0x20000u; UPD(0x0C07A142u, 2);  /* 0C07A140 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C07A142 add Rm,Rn */
	r12 = 0xC7C17D0u; UPD(0x0C07A146u, 2);  /* 0C07A144 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C07A146 mov Rm,Rn */
	W32(r15, r4); UPD(0x0C07A14Au, 2);  /* 0C07A148 mov.l Rm,@Rn */
	r7 = r9;  /* 0C07A14A mov Rm,Rn */
	IF(0x0C07A14Cu); { u32 t_ = r12; PR = 0x0C07A150u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C7C17D0, 0x0C7C17D0u, 0x0C07A150u); }  /* 0C07A14C jsr @Rn */
L_0C07A150: BLKS(0x0C07A150u);
	r1 = 0xC0580D0u; UPD(0x0C07A152u, 1);  /* 0C07A150 mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C07A152 add #imm,Rn */
	r4 = r11;  /* 0C07A154 mov Rm,Rn */
	UPD(0x0C07A156u, 2);
L_0C07A156: BLKS(0x0C07A156u);
	r15 = r14;  /* 0C07A156 mov Rm,Rn */
	IF(0x0C07A158u); PR = R32(r15); r15 += 4; UPD(0x0C07A15Au, 2);  /* 0C07A158 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A15Cu, 1);  /* 0C07A15A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A15Eu, 1);  /* 0C07A15C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A160u, 1);  /* 0C07A15E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A162u, 1);  /* 0C07A160 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A164u, 1);  /* 0C07A162 mov.l @Rm+,Rn */
	IF(0x0C07A164u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0580D0u: TAIL(f_0C0580D0); case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C07A164 jmp @Rn */
L_0C07A170: BLKS(0x0C07A170u);
	r8 = 0xC058130u; UPD(0x0C07A172u, 1);  /* 0C07A170 mov.l @(disp,pc),Rn */
	r12 = 0xC057430u; UPD(0x0C07A174u, 1);  /* 0C07A172 mov.l @(disp,pc),Rn */
	IF(0x0C07A174u); { u32 t_ = r8; PR = 0x0C07A178u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C07A178u); }  /* 0C07A174 jsr @Rn */
L_0C07A178: BLKS(0x0C07A178u);
	r5 = 0x4u;  /* 0C07A178 mov #imm,Rn */
	IF(0x0C07A17Au); { u32 t_ = r12; PR = 0x0C07A17Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C07A17Eu); }  /* 0C07A17A jsr @Rn */
L_0C07A17E: BLKS(0x0C07A17Eu);
	r2 = 0x86u; UPD(0x0C07A180u, 1);  /* 0C07A17E mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C07A180 mov Rm,Rn */
	IF(0x0C07A182u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07A184u, 2);  /* 0C07A182 mov.w @(r0,Rm),Rn */
	r5 = 0x1Fu;  /* 0C07A184 mov #imm,Rn */
	r9 = 0x9Du; UPD(0x0C07A188u, 2);  /* 0C07A186 mov.w @(disp,pc),Rn */
	r3 += 0x8u;  /* 0C07A188 add #imm,Rn */
	IF(0x0C07A18Au); r3 >>= 2;  /* 0C07A18A shlr2 Rn */
	IF(0x0C07A18Cu); r8 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07A18Eu, 3);  /* 0C07A18C mov.b @(r0,Rm),Rn */
	IF(0x0C07A18Eu); r3 >>= 2;  /* 0C07A18E shlr2 Rn */
	r3 &= r5;  /* 0C07A190 and Rm,Rn */
	r0 = r8;  /* 0C07A192 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C07A194 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07A196 tst Rm,Rn */
	{ u32 c_ = !T; W32(r10 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07A1A6u, 8); goto L_0C07A1A6; } UPD(0x0C07A19Cu, 1); goto L_0C07A19C; }  /* 0C07A198 bf/s */
L_0C07A19C: BLKS(0x0C07A19Cu);
	r0 = R32(r10 + 0xCu); UPD(0x0C07A19Eu, 1);  /* 0C07A19C mov.l @(disp,Rm),Rn */
	r6 = 0xC18D468u; UPD(0x0C07A1A0u, 1);  /* 0C07A19E mov.l @(disp,pc),Rn */
	IF(0x0C07A1A0u); r0 <<= 2;  /* 0C07A1A0 shll2 Rn */
	IF(0x0C07A1A2u); r4 = R32(r0 + r6); UPD(0x0C07A1A4u, 2);  /* 0C07A1A2 mov.l @(r0,Rm),Rn */
	W32(r10 + 0xCu, r4); UPD(0x0C07A1A6u, 1);  /* 0C07A1A4 mov.l Rm,@(disp,Rn) */
L_0C07A1A6: BLKS(0x0C07A1A6u);
	r10 = 0xC0A03B0u; UPD(0x0C07A1A8u, 1);  /* 0C07A1A6 mov.l @(disp,pc),Rn */
	IF(0x0C07A1A8u); { u32 t_ = r10; PR = 0x0C07A1ACu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C07A1ACu); }  /* 0C07A1A8 jsr @Rn */
L_0C07A1AC: BLKS(0x0C07A1ACu);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C07A0D2u, 3); goto L_0C07A0D2; }  /* 0C07A1AC bra */
L_0C07A1B0: BLKS(0x0C07A1B0u);
	{ IF(0x0C07A1B2u); ; /* slot nop */ UPD(0x0C07A0ACu, 3); goto L_0C07A0AC; }  /* 0C07A1B0 bra */
L_0C07A1C0: BLKS(0x0C07A1C0u);
	r8 = 0x11FFFFFu; UPD(0x0C07A1C2u, 1);  /* 0C07A1C0 mov.l @(disp,pc),Rn */
	T = (s32)r9 > (s32)r8;  /* 0C07A1C2 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C07A1C8u, 4); goto L_0C07A1C8; }  /* 0C07A1C4 bt */
L_0C07A1C6: BLKS(0x0C07A1C6u);
	W8(r7, r6); UPD(0x0C07A1C8u, 1);  /* 0C07A1C6 mov.b Rm,@Rn */
L_0C07A1C8: BLKS(0x0C07A1C8u);
	{ IF(0x0C07A1CAu); ; /* slot nop */ UPD(0x0C07A06Cu, 3); goto L_0C07A06C; }  /* 0C07A1C8 bra */
L_0C07A230: BLKS(0x0C07A230u);
	if (!T) { UPD(0x0C07A1C8u, 3); goto L_0C07A1C8; }  /* 0C07A230 bf */
L_0C07A232: BLKS(0x0C07A232u);
	r4 = 0x88u; UPD(0x0C07A234u, 1);  /* 0C07A232 mov.w @(disp,pc),Rn */
	r9 = 0x98u; UPD(0x0C07A236u, 1);  /* 0C07A234 mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C07A236 add Rm,Rn */
	r10 = r4;  /* 0C07A238 mov Rm,Rn */
	r10 += 0x2u;  /* 0C07A23A add #imm,Rn */
	r9 += r8;  /* 0C07A23C add Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r10); UPD(0x0C07A240u, 5);  /* 0C07A23E mov.w @Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r9); UPD(0x0C07A242u, 1);  /* 0C07A240 mov.b @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r4); UPD(0x0C07A244u, 1);  /* 0C07A242 mov.w @Rm,Rn */
	r8 += 0x1u;  /* 0C07A244 add #imm,Rn */
	r12 += r1;  /* 0C07A246 add Rm,Rn */
	r0 = r8 & 0xFF;  /* 0C07A248 extu.b Rm,Rn */
	W16(r10, r12); UPD(0x0C07A24Cu, 4);  /* 0C07A24A mov.w Rm,@Rn */
	T = r0 == 0x3Cu;  /* 0C07A24C cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r9, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07A1C8u, 4); goto L_0C07A1C8; } UPD(0x0C07A252u, 1); goto L_0C07A252; }  /* 0C07A24E bf/s */
L_0C07A252: BLKS(0x0C07A252u);
	{ W8(r7, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C07A1C8u, 3); goto L_0C07A1C8; }  /* 0C07A252 bra */
L_0C07A260: BLKS(0x0C07A260u);
	r9 = 0x99u; UPD(0x0C07A262u, 1);  /* 0C07A260 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C07A262 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C07A266u, 2);  /* 0C07A264 mov.b @Rm,Rn */
	T = r0 == 0x10u;  /* 0C07A266 cmp/eq #imm,r0 */
	{ u32 c_ = T; r4 = 0xFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A2A0u, 4); goto L_0C07A2A0; } goto L_0C07A26C; }  /* 0C07A268 bt/s */
L_0C07A26C: BLKS(0x0C07A26Cu);
	r10 = 0xC050D70u; UPD(0x0C07A26Eu, 2);  /* 0C07A26C mov.l @(disp,pc),Rn */
	r7 = 0x88u; UPD(0x0C07A270u, 1);  /* 0C07A26E mov.w @(disp,pc),Rn */
	IF(0x0C07A270u); { u32 t_ = r10; PR = 0x0C07A274u; r8 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C07A274u); }  /* 0C07A270 jsr @Rn */
L_0C07A274: BLKS(0x0C07A274u);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C07A276u, 1);  /* 0C07A274 mov.b @Rm,Rn */
	r0 += 0xFFFFFFF8u;  /* 0C07A276 add #imm,Rn */
	r6 += 0x1u;  /* 0C07A278 add #imm,Rn */
	W16(r8, r0); UPD(0x0C07A27Cu, 3);  /* 0C07A27A mov.w Rm,@Rn */
	W8(r9, r6); UPD(0x0C07A27Eu, 1);  /* 0C07A27C mov.b Rm,@Rn */
L_0C07A27E: BLKS(0x0C07A27Eu);
	r0 = 0xB4u; UPD(0x0C07A280u, 1);  /* 0C07A27E mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C07A280 mov #imm,Rn */
	IF(0x0C07A282u); MACL = r11 * r0;  /* 0C07A282 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C07A286u, 4);  /* 0C07A284 mov.l @(disp,pc),Rn */
	r2 = 0x2u;  /* 0C07A286 mov #imm,Rn */
	r4 = 0x98u; UPD(0x0C07A28Au, 2);  /* 0C07A288 mov.w @(disp,pc),Rn */
	IF(0x0C07A28Au); r0 = MACL;  /* 0C07A28A sts macl,Rn */
	r0 += r5;  /* 0C07A28C add Rm,Rn */
	IF(0x0C07A28Eu); W8(r0 + r4, r3); UPD(0x0C07A290u, 3);  /* 0C07A28E mov.b Rm,@(r0,Rn) */
	r4 += 0x7u;  /* 0C07A290 add #imm,Rn */
	{ IF(0x0C07A294u); W8(r0 + r4, r2); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C07A06Cu, 4); goto L_0C07A06C; }  /* 0C07A292 bra */
L_0C07A2A0: BLKS(0x0C07A2A0u);
	r0 = 0x88u; UPD(0x0C07A2A2u, 1);  /* 0C07A2A0 mov.w @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C07A2A2 mov #imm,Rn */
	{ IF(0x0C07A2A6u); W16(r0 + r8, r12); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C07A27Eu, 4); goto L_0C07A27E; }  /* 0C07A2A4 bra */
L_0C07A2B0: BLKS(0x0C07A2B0u);
	r12 = 0xC0A03F0u; UPD(0x0C07A2B2u, 1);  /* 0C07A2B0 mov.l @(disp,pc),Rn */
	IF(0x0C07A2B2u); { u32 t_ = r12; PR = 0x0C07A2B6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C07A2B6u); }  /* 0C07A2B2 jsr @Rn */
L_0C07A2B6: BLKS(0x0C07A2B6u);
	IF(0x0C07A2B6u); T = (s32)r0 >= 0;  /* 0C07A2B6 cmp/pz Rn */
	if (!T) { UPD(0x0C07A2E0u, 4); goto L_0C07A2E0; }  /* 0C07A2B8 bf */
L_0C07A2BA: BLKS(0x0C07A2BAu);
	IF(0x0C07A2BAu); MACL = r0 * r9;  /* 0C07A2BA mul.l Rm,Rn */
	r1 = 0x40000u; UPD(0x0C07A2BEu, 3);  /* 0C07A2BC mov.l @(disp,pc),Rn */
	IF(0x0C07A2BEu); r4 = MACL;  /* 0C07A2BE sts macl,Rn */
	r4 += r10;  /* 0C07A2C0 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C07A2C4u, 3);  /* 0C07A2C2 mov.l @(disp,Rm),Rn */
	r3 = R32(r4 + 0x24u); UPD(0x0C07A2C6u, 1);  /* 0C07A2C4 mov.l @(disp,Rm),Rn */
	r0 += 0x3u;  /* 0C07A2C6 add #imm,Rn */
	r2 = R32(r4 + 0x28u); UPD(0x0C07A2CAu, 2);  /* 0C07A2C8 mov.l @(disp,Rm),Rn */
	r3 += r1;  /* 0C07A2CA add Rm,Rn */
	r0 &= 0x7u;  /* 0C07A2CC and #imm,r0 */
	W32(r8 + 0x24u, r3); UPD(0x0C07A2D0u, 3);  /* 0C07A2CE mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C07A2D0 mov Rm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C07A2D4u, 2);  /* 0C07A2D2 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A0380u; UPD(0x0C07A2D6u, 1);  /* 0C07A2D4 mov.l @(disp,pc),Rn */
	{ W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07A156u, 3); goto L_0C07A156; }  /* 0C07A2D6 bra */
L_0C07A2E0: BLKS(0x0C07A2E0u);
	r0 = 0x0u;  /* 0C07A2E0 mov #imm,Rn */
	{ W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C07A0D8u, 4); goto L_0C07A0D8; }  /* 0C07A2E2 bra */
}

void f_0C07A310(sh3_t *c)
{
	LOCALS;
L_0C07A310: BLKS(0x0C07A310u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07A312u, 1);  /* 0C07A310 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07A314u, 1);  /* 0C07A312 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07A316u, 1);  /* 0C07A314 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07A318u, 1);  /* 0C07A316 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07A31Au, 1);  /* 0C07A318 mov.l Rm,@-Rn */
	r9 = 0xB4u; UPD(0x0C07A31Cu, 1);  /* 0C07A31A mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C07A31C exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07A320u, 2);  /* 0C07A31E mov.l Rm,@-Rn */
	IF(0x0C07A320u); MACL = r12 * r9;  /* 0C07A320 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07A324u, 3);  /* 0C07A322 mov.l Rm,@-Rn */
	r10 = 0xC26CD40u; UPD(0x0C07A326u, 1);  /* 0C07A324 mov.l @(disp,pc),Rn */
	IF(0x0C07A326u); r8 = MACL;  /* 0C07A326 sts macl,Rn */
	IF(0x0C07A328u); r15 -= 4; W32(r15, PR); UPD(0x0C07A32Au, 2);  /* 0C07A328 sts.l pr,@-Rn */
	r8 += r10;  /* 0C07A32A add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C07A32Eu, 2);  /* 0C07A32C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07A32E add #imm,Rn */
	T = r0 == 0x20u;  /* 0C07A330 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07A33Au, 5); goto L_0C07A33A; } goto L_0C07A336; }  /* 0C07A332 bf/s */
L_0C07A336: BLKS(0x0C07A336u);
	{ IF(0x0C07A338u); ; /* slot nop */ UPD(0x0C07A5D0u, 4); goto L_0C07A5D0; }  /* 0C07A336 bra */
L_0C07A33A: BLKS(0x0C07A33Au);
	r7 = 0x9Fu; UPD(0x0C07A33Cu, 1);  /* 0C07A33A mov.w @(disp,pc),Rn */
	r7 += r8;  /* 0C07A33C add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C07A340u, 2);  /* 0C07A33E mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C07A340 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C07A342 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r6 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A34Cu, 5); goto L_0C07A34C; } goto L_0C07A348; }  /* 0C07A344 bf/s */
L_0C07A348: BLKS(0x0C07A348u);
	{ IF(0x0C07A34Au); ; /* slot nop */ UPD(0x0C07A580u, 4); goto L_0C07A580; }  /* 0C07A348 bra */
L_0C07A34C: BLKS(0x0C07A34Cu);
	T = (s32)r0 > (s32)r6;  /* 0C07A34C cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C07A356u, 4); goto L_0C07A356; } goto L_0C07A352; }  /* 0C07A34E bf/s */
L_0C07A352: BLKS(0x0C07A352u);
	{ IF(0x0C07A354u); ; /* slot nop */ UPD(0x0C07A550u, 4); goto L_0C07A550; }  /* 0C07A352 bra */
L_0C07A356: BLKS(0x0C07A356u);
	T = (r0 & r0) == 0;  /* 0C07A356 tst Rm,Rn */
	if (!T) { UPD(0x0C07A360u, 4); goto L_0C07A360; }  /* 0C07A358 bf */
L_0C07A35A: BLKS(0x0C07A35Au);
	r9 = R32(r8 + 0x24u); UPD(0x0C07A35Cu, 1);  /* 0C07A35A mov.l @(disp,Rm),Rn */
	{ IF(0x0C07A35Eu); ; /* slot nop */ UPD(0x0C07A540u, 3); goto L_0C07A540; }  /* 0C07A35C bra */
L_0C07A360: BLKS(0x0C07A360u);
	r2 = 0xB4u; UPD(0x0C07A362u, 1);  /* 0C07A360 mov.w @(disp,pc),Rn */
	IF(0x0C07A362u); MACL = r12 * r2;  /* 0C07A362 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C07A366u, 3);  /* 0C07A364 mov.l @(disp,pc),Rn */
	IF(0x0C07A366u); r10 = MACL;  /* 0C07A366 sts macl,Rn */
	r13 = 0x8Au; UPD(0x0C07A36Au, 2);  /* 0C07A368 mov.w @(disp,pc),Rn */
	r10 += r7;  /* 0C07A36A add Rm,Rn */
	r11 = 0x8Cu; UPD(0x0C07A36Eu, 2);  /* 0C07A36C mov.w @(disp,pc),Rn */
	r13 += r10;  /* 0C07A36E add Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C07A372u, 2);  /* 0C07A370 mov.l @(disp,pc),Rn */
	r11 += r10;  /* 0C07A372 add Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C07A376u, 2);  /* 0C07A374 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r13); UPD(0x0C07A378u, 1);  /* 0C07A376 mov.w @Rm,Rn */
	IF(0x0C07A378u); { u32 t_ = r8; PR = 0x0C07A37Cu; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07A37Cu); }  /* 0C07A378 jsr @Rn */
L_0C07A37C: BLKS(0x0C07A37Cu);
	W32(r10 + 0x2Cu, r0); UPD(0x0C07A37Eu, 1);  /* 0C07A37C mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r13); UPD(0x0C07A380u, 1);  /* 0C07A37E mov.w @Rm,Rn */
	IF(0x0C07A380u); { u32 t_ = r9; PR = 0x0C07A384u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07A384u); }  /* 0C07A380 jsr @Rn */
L_0C07A384: BLKS(0x0C07A384u);
	r8 = R32(r10 + 0x24u); UPD(0x0C07A386u, 1);  /* 0C07A384 mov.l @(disp,Rm),Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C07A388u, 1);  /* 0C07A386 mov.l @(disp,Rm),Rn */
	r6 = R32(r10 + 0x2Cu); UPD(0x0C07A38Au, 1);  /* 0C07A388 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C07A38A add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C07A38Eu, 2);  /* 0C07A38C mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C07A38E add Rm,Rn */
	r3 += r8;  /* 0C07A390 add Rm,Rn */
	W32(r10 + 0x30u, r0); UPD(0x0C07A394u, 3);  /* 0C07A392 mov.l Rm,@(disp,Rn) */
	IF(0x0C07A394u); T = (s32)r3 >= 0;  /* 0C07A394 cmp/pz Rn */
	W32(r10 + 0x24u, r8); UPD(0x0C07A398u, 2);  /* 0C07A396 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r10 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07A3A0u, 3); goto L_0C07A3A0; } UPD(0x0C07A39Cu, 1); goto L_0C07A39C; }  /* 0C07A398 bt/s */
L_0C07A39C: BLKS(0x0C07A39Cu);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C07A530u, 3); goto L_0C07A530; }  /* 0C07A39C bra */
L_0C07A3A0: BLKS(0x0C07A3A0u);
	r4 = 0xD00000u; UPD(0x0C07A3A2u, 1);  /* 0C07A3A0 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r4;  /* 0C07A3A2 cmp/gt Rm,Rn */
	{ u32 c_ = T; r9 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A3C6u, 4); goto L_0C07A3C6; } goto L_0C07A3A8; }  /* 0C07A3A4 bt/s */
L_0C07A3A8: BLKS(0x0C07A3A8u);
	r5 = 0xC3929E0u; UPD(0x0C07A3AAu, 2);  /* 0C07A3A8 mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C07A3AA mov Rm,Rn */
	r0 = R32(r5); UPD(0x0C07A3AEu, 2);  /* 0C07A3AC mov.l @Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C07A3B0u, 1);  /* 0C07A3AE mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C07A3B0 sub Rm,Rn */
	r2 += r3;  /* 0C07A3B2 add Rm,Rn */
	IF(0x0C07A3B4u); T = (s32)r2 >= 0;  /* 0C07A3B4 cmp/pz Rn */
	if (T) { UPD(0x0C07A3BAu, 6); goto L_0C07A3BA; }  /* 0C07A3B6 bt */
L_0C07A3B8: BLKS(0x0C07A3B8u);
	r2 = 0u - r2;  /* 0C07A3B8 neg Rm,Rn */
	UPD(0x0C07A3BAu, 1);
L_0C07A3BA: BLKS(0x0C07A3BAu);
	r6 = 0xA80000u; UPD(0x0C07A3BCu, 1);  /* 0C07A3BA mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C07A3BC cmp/gt Rm,Rn */
	{ u32 c_ = T; r9 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A3C6u, 4); goto L_0C07A3C6; } goto L_0C07A3C2; }  /* 0C07A3BE bt/s */
L_0C07A3C2: BLKS(0x0C07A3C2u);
	{ IF(0x0C07A3C4u); ; /* slot nop */ UPD(0x0C07A4F0u, 4); goto L_0C07A4F0; }  /* 0C07A3C2 bra */
L_0C07A3C6: BLKS(0x0C07A3C6u);
	W32(r10, r9); UPD(0x0C07A3C8u, 1);  /* 0C07A3C6 mov.l Rm,@Rn */
	r1 = 0x1u;  /* 0C07A3C8 mov #imm,Rn */
	UPD(0x0C07A3CAu, 1);
L_0C07A3CA: BLKS(0x0C07A3CAu);
	r0 = (u32)(s32)(s16)r1;  /* 0C07A3CA exts.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C07A3CC tst Rm,Rn */
	if (T) { UPD(0x0C07A3F0u, 5); goto L_0C07A3F0; }  /* 0C07A3CE bt */
L_0C07A3D0: BLKS(0x0C07A3D0u);
	r14 += 0x4u;  /* 0C07A3D0 add #imm,Rn */
	r15 = r14;  /* 0C07A3D2 mov Rm,Rn */
	IF(0x0C07A3D4u); PR = R32(r15); r15 += 4; UPD(0x0C07A3D6u, 3);  /* 0C07A3D4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A3D8u, 1);  /* 0C07A3D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07A3DAu, 1);  /* 0C07A3D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A3DCu, 1);  /* 0C07A3DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A3DEu, 1);  /* 0C07A3DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A3E0u, 1);  /* 0C07A3DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A3E2u, 1);  /* 0C07A3E0 mov.l @Rm+,Rn */
	IF(0x0C07A3E2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07A3E2 rts */
L_0C07A3F0: BLKS(0x0C07A3F0u);
	r13 = 0xC0A9E40u; UPD(0x0C07A3F2u, 1);  /* 0C07A3F0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C07A3F2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C07A3F4 mov #imm,Rn */
	IF(0x0C07A3F6u); { u32 t_ = r13; PR = 0x0C07A3FAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07A3FAu); }  /* 0C07A3F6 jsr @Rn */
L_0C07A3FA: BLKS(0x0C07A3FAu);
	T = (r0 & r0) == 0;  /* 0C07A3FA tst Rm,Rn */
	if (T) { UPD(0x0C07A3D0u, 4); goto L_0C07A3D0; }  /* 0C07A3FC bt */
L_0C07A3FE: BLKS(0x0C07A3FEu);
	r8 = 0xB4u; UPD(0x0C07A400u, 1);  /* 0C07A3FE mov.w @(disp,pc),Rn */
	IF(0x0C07A400u); MACL = r12 * r8;  /* 0C07A400 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C07A404u, 3);  /* 0C07A402 mov.l @(disp,pc),Rn */
	IF(0x0C07A404u); r8 = MACL;  /* 0C07A404 sts macl,Rn */
	r8 += r7;  /* 0C07A406 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C07A40Au, 3);  /* 0C07A408 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07A40A mov Rm,Rn */
	IF(0x0C07A40Cu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07A40Eu, 2);  /* 0C07A40C mov.b @(r0,Rm),Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C07A410u, 1);  /* 0C07A40E mov.l @(disp,pc),Rn */
	r6 = r5 & 0xFF;  /* 0C07A410 extu.b Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C07A414u, 2);  /* 0C07A412 mov.l @(disp,Rm),Rn */
	IF(0x0C07A414u); { u32 t_ = r9; PR = 0x0C07A418u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C07A418u); }  /* 0C07A414 jsr @Rn */
L_0C07A418: BLKS(0x0C07A418u);
	T = (r0 & r0) == 0;  /* 0C07A418 tst Rm,Rn */
	if (T) { UPD(0x0C07A3D0u, 4); goto L_0C07A3D0; }  /* 0C07A41A bt */
L_0C07A41C: BLKS(0x0C07A41Cu);
	r0 = r8;  /* 0C07A41C mov Rm,Rn */
	r2 = 0x86u; UPD(0x0C07A420u, 2);  /* 0C07A41E mov.w @(disp,pc),Rn */
	IF(0x0C07A420u); r11 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07A422u, 1);  /* 0C07A420 mov.w @(r0,Rm),Rn */
	r13 = 0x0u;  /* 0C07A422 mov #imm,Rn */
	W32(r14, r8); UPD(0x0C07A426u, 2);  /* 0C07A424 mov.l Rm,@Rn */
	IF(0x0C07A426u); ;  /* 0C07A426 nop */
	UPD(0x0C07A428u, 1);
L_0C07A428: BLKS(0x0C07A428u);
	r10 = 0xC058060u; UPD(0x0C07A42Au, 1);  /* 0C07A428 mov.l @(disp,pc),Rn */
	r5 = 0x120000u; UPD(0x0C07A42Cu, 1);  /* 0C07A42A mov.l @(disp,pc),Rn */
	IF(0x0C07A42Cu); { u32 t_ = r10; PR = 0x0C07A430u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07A430u); }  /* 0C07A42C jsr @Rn */
L_0C07A430: BLKS(0x0C07A430u);
	r2 = 0xC18D47Cu; UPD(0x0C07A432u, 1);  /* 0C07A430 mov.l @(disp,pc),Rn */
	r9 = r13;  /* 0C07A432 mov Rm,Rn */
	r3 = 0xC058030u; UPD(0x0C07A436u, 2);  /* 0C07A434 mov.l @(disp,pc),Rn */
	IF(0x0C07A436u); r9 <<= 2;  /* 0C07A436 shll2 Rn */
	r9 += r2;  /* 0C07A438 add Rm,Rn */
	r5 = R32(r9); UPD(0x0C07A43Cu, 3);  /* 0C07A43A mov.l @Rm,Rn */
	r10 = r0;  /* 0C07A43C mov Rm,Rn */
	IF(0x0C07A43Eu); { u32 t_ = r3; PR = 0x0C07A442u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07A442u); }  /* 0C07A43E jsr @Rn */
L_0C07A442: BLKS(0x0C07A442u);
	r8 = R32(r14); UPD(0x0C07A444u, 1);  /* 0C07A442 mov.l @Rm,Rn */
	r10 -= r0;  /* 0C07A444 sub Rm,Rn */
	r6 = 0xC058030u; UPD(0x0C07A448u, 2);  /* 0C07A446 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07A448 mov Rm,Rn */
	r7 = R32(r8 + 0x24u); UPD(0x0C07A44Cu, 2);  /* 0C07A44A mov.l @(disp,Rm),Rn */
	r5 = 0x120000u; UPD(0x0C07A44Eu, 1);  /* 0C07A44C mov.l @(disp,pc),Rn */
	IF(0x0C07A44Eu); { u32 t_ = r6; PR = 0x0C07A452u; r10 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07A452u); }  /* 0C07A44E jsr @Rn */
L_0C07A452: BLKS(0x0C07A452u);
	r5 = R32(r14); UPD(0x0C07A454u, 1);  /* 0C07A452 mov.l @Rm,Rn */
	r4 = r11;  /* 0C07A454 mov Rm,Rn */
	r8 = R32(r5 + 0x28u); UPD(0x0C07A458u, 2);  /* 0C07A456 mov.l @(disp,Rm),Rn */
	r5 = R32(r9); UPD(0x0C07A45Au, 1);  /* 0C07A458 mov.l @Rm,Rn */
	r9 = 0xC058060u; UPD(0x0C07A45Cu, 1);  /* 0C07A45A mov.l @(disp,pc),Rn */
	IF(0x0C07A45Cu); { u32 t_ = r9; PR = 0x0C07A460u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07A460u); }  /* 0C07A45C jsr @Rn */
L_0C07A460: BLKS(0x0C07A460u);
	r8 += r0;  /* 0C07A460 add Rm,Rn */
	r1 = 0xC7C17D0u; UPD(0x0C07A464u, 2);  /* 0C07A462 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07A464 add #imm,Rn */
	r0 = 0x20000u; UPD(0x0C07A468u, 2);  /* 0C07A466 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C07A468 mov #imm,Rn */
	W32(r15, r0); UPD(0x0C07A46Cu, 2);  /* 0C07A46A mov.l Rm,@Rn */
	r5 = r10;  /* 0C07A46C mov Rm,Rn */
	r6 = r8;  /* 0C07A46E mov Rm,Rn */
	IF(0x0C07A470u); { u32 t_ = r1; PR = 0x0C07A474u; r7 = r11; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C7C17D0, 0x0C7C17D0u, 0x0C07A474u); }  /* 0C07A470 jsr @Rn */
L_0C07A474: BLKS(0x0C07A474u);
	r3 = r13;  /* 0C07A474 mov Rm,Rn */
	r3 += 0x1u;  /* 0C07A476 add #imm,Rn */
	r13 = (u32)(s32)(s16)r3;  /* 0C07A478 exts.w Rm,Rn */
	r4 = 0x1u;  /* 0C07A47A mov #imm,Rn */
	T = (s32)r13 > (s32)r4;  /* 0C07A47C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07A428u, 8); goto L_0C07A428; } goto L_0C07A482; }  /* 0C07A47E bf/s */
L_0C07A482: BLKS(0x0C07A482u);
	r1 = 0xC0580D0u; UPD(0x0C07A484u, 2);  /* 0C07A482 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C07A484 mov Rm,Rn */
	UPD(0x0C07A486u, 1);
L_0C07A486: BLKS(0x0C07A486u);
	r14 += 0x4u;  /* 0C07A486 add #imm,Rn */
	r15 = r14;  /* 0C07A488 mov Rm,Rn */
	IF(0x0C07A48Au); PR = R32(r15); r15 += 4; UPD(0x0C07A48Cu, 3);  /* 0C07A48A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A48Eu, 1);  /* 0C07A48C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07A490u, 1);  /* 0C07A48E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A492u, 1);  /* 0C07A490 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A494u, 1);  /* 0C07A492 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A496u, 1);  /* 0C07A494 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A498u, 1);  /* 0C07A496 mov.l @Rm+,Rn */
	IF(0x0C07A498u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0580D0u: TAIL(f_0C0580D0); case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C07A498 jmp @Rn */
L_0C07A4F0: BLKS(0x0C07A4F0u);
	r11 = 0xC058130u; UPD(0x0C07A4F2u, 1);  /* 0C07A4F0 mov.l @(disp,pc),Rn */
	r9 = 0xC057430u; UPD(0x0C07A4F4u, 1);  /* 0C07A4F2 mov.l @(disp,pc),Rn */
	IF(0x0C07A4F4u); { u32 t_ = r11; PR = 0x0C07A4F8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C07A4F8u); }  /* 0C07A4F4 jsr @Rn */
L_0C07A4F8: BLKS(0x0C07A4F8u);
	r4 = r12;  /* 0C07A4F8 mov Rm,Rn */
	IF(0x0C07A4FAu); { u32 t_ = r9; PR = 0x0C07A4FEu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C07A4FEu); }  /* 0C07A4FA jsr @Rn */
L_0C07A4FE: BLKS(0x0C07A4FEu);
	r2 = 0x86u; UPD(0x0C07A500u, 1);  /* 0C07A4FE mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C07A500 mov Rm,Rn */
	IF(0x0C07A502u); r8 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07A504u, 2);  /* 0C07A502 mov.w @(r0,Rm),Rn */
	r7 = 0x1Fu;  /* 0C07A504 mov #imm,Rn */
	r13 = 0x9Du; UPD(0x0C07A508u, 2);  /* 0C07A506 mov.w @(disp,pc),Rn */
	r8 += 0x8u;  /* 0C07A508 add #imm,Rn */
	IF(0x0C07A50Au); r8 >>= 2;  /* 0C07A50A shlr2 Rn */
	IF(0x0C07A50Cu); r11 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C07A50Eu, 3);  /* 0C07A50C mov.b @(r0,Rm),Rn */
	IF(0x0C07A50Eu); r8 >>= 2;  /* 0C07A50E shlr2 Rn */
	r8 &= r7;  /* 0C07A510 and Rm,Rn */
	r0 = r11;  /* 0C07A512 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C07A514 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07A516 tst Rm,Rn */
	{ u32 c_ = !T; W32(r10 + 0x8u, r8); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07A526u, 8); goto L_0C07A526; } UPD(0x0C07A51Cu, 1); goto L_0C07A51C; }  /* 0C07A518 bf/s */
L_0C07A51C: BLKS(0x0C07A51Cu);
	r0 = R32(r10 + 0xCu); UPD(0x0C07A51Eu, 1);  /* 0C07A51C mov.l @(disp,Rm),Rn */
	r3 = 0xC18D468u; UPD(0x0C07A520u, 1);  /* 0C07A51E mov.l @(disp,pc),Rn */
	IF(0x0C07A520u); r0 <<= 2;  /* 0C07A520 shll2 Rn */
	IF(0x0C07A522u); r4 = R32(r0 + r3); UPD(0x0C07A524u, 2);  /* 0C07A522 mov.l @(r0,Rm),Rn */
	W32(r10 + 0xCu, r4); UPD(0x0C07A526u, 1);  /* 0C07A524 mov.l Rm,@(disp,Rn) */
L_0C07A526: BLKS(0x0C07A526u);
	r10 = 0xC0A03B0u; UPD(0x0C07A528u, 1);  /* 0C07A526 mov.l @(disp,pc),Rn */
	IF(0x0C07A528u); { u32 t_ = r10; PR = 0x0C07A52Cu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C07A52Cu); }  /* 0C07A528 jsr @Rn */
L_0C07A52C: BLKS(0x0C07A52Cu);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C07A3CAu, 3); goto L_0C07A3CA; }  /* 0C07A52C bra */
L_0C07A530: BLKS(0x0C07A530u);
	{ IF(0x0C07A532u); ; /* slot nop */ UPD(0x0C07A3A0u, 3); goto L_0C07A3A0; }  /* 0C07A530 bra */
L_0C07A540: BLKS(0x0C07A540u);
	r8 = 0x11FFFFFu; UPD(0x0C07A542u, 1);  /* 0C07A540 mov.l @(disp,pc),Rn */
	T = (s32)r9 > (s32)r8;  /* 0C07A542 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C07A548u, 4); goto L_0C07A548; }  /* 0C07A544 bt */
L_0C07A546: BLKS(0x0C07A546u);
	W8(r7, r6); UPD(0x0C07A548u, 1);  /* 0C07A546 mov.b Rm,@Rn */
L_0C07A548: BLKS(0x0C07A548u);
	{ IF(0x0C07A54Au); ; /* slot nop */ UPD(0x0C07A360u, 3); goto L_0C07A360; }  /* 0C07A548 bra */
L_0C07A550: BLKS(0x0C07A550u);
	if (!T) { UPD(0x0C07A548u, 3); goto L_0C07A548; }  /* 0C07A550 bf */
L_0C07A552: BLKS(0x0C07A552u);
	r13 = 0x88u; UPD(0x0C07A554u, 1);  /* 0C07A552 mov.w @(disp,pc),Rn */
	r9 = 0x98u; UPD(0x0C07A556u, 1);  /* 0C07A554 mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C07A556 add Rm,Rn */
	r10 = r13;  /* 0C07A558 mov Rm,Rn */
	r10 += 0x2u;  /* 0C07A55A add #imm,Rn */
	r9 += r8;  /* 0C07A55C add Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C07A560u, 5);  /* 0C07A55E mov.w @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C07A562u, 1);  /* 0C07A560 mov.b @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r13); UPD(0x0C07A564u, 1);  /* 0C07A562 mov.w @Rm,Rn */
	r5 += 0x1u;  /* 0C07A564 add #imm,Rn */
	r11 += r1;  /* 0C07A566 add Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C07A568 extu.b Rm,Rn */
	W16(r10, r11); UPD(0x0C07A56Cu, 4);  /* 0C07A56A mov.w Rm,@Rn */
	T = r0 == 0x5Au;  /* 0C07A56C cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r9, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07A548u, 4); goto L_0C07A548; } UPD(0x0C07A572u, 1); goto L_0C07A572; }  /* 0C07A56E bf/s */
L_0C07A572: BLKS(0x0C07A572u);
	{ W8(r7, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C07A548u, 3); goto L_0C07A548; }  /* 0C07A572 bra */
L_0C07A580: BLKS(0x0C07A580u);
	r9 = 0x99u; UPD(0x0C07A582u, 1);  /* 0C07A580 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C07A582 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C07A586u, 2);  /* 0C07A584 mov.b @Rm,Rn */
	T = r0 == 0x8u;  /* 0C07A586 cmp/eq #imm,r0 */
	{ u32 c_ = T; r4 = 0x7u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A5C0u, 4); goto L_0C07A5C0; } goto L_0C07A58C; }  /* 0C07A588 bt/s */
L_0C07A58C: BLKS(0x0C07A58Cu);
	r10 = 0xC050D70u; UPD(0x0C07A58Eu, 2);  /* 0C07A58C mov.l @(disp,pc),Rn */
	r7 = 0x88u; UPD(0x0C07A590u, 1);  /* 0C07A58E mov.w @(disp,pc),Rn */
	IF(0x0C07A590u); { u32 t_ = r10; PR = 0x0C07A594u; r8 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C07A594u); }  /* 0C07A590 jsr @Rn */
L_0C07A594: BLKS(0x0C07A594u);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C07A596u, 1);  /* 0C07A594 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C07A596 add #imm,Rn */
	r6 += 0x1u;  /* 0C07A598 add #imm,Rn */
	W16(r8, r0); UPD(0x0C07A59Cu, 3);  /* 0C07A59A mov.w Rm,@Rn */
	W8(r9, r6); UPD(0x0C07A59Eu, 1);  /* 0C07A59C mov.b Rm,@Rn */
L_0C07A59E: BLKS(0x0C07A59Eu);
	r0 = 0xB4u; UPD(0x0C07A5A0u, 1);  /* 0C07A59E mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C07A5A0 mov #imm,Rn */
	IF(0x0C07A5A2u); MACL = r12 * r0;  /* 0C07A5A2 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C07A5A6u, 4);  /* 0C07A5A4 mov.l @(disp,pc),Rn */
	r2 = 0x2u;  /* 0C07A5A6 mov #imm,Rn */
	r13 = 0x98u; UPD(0x0C07A5AAu, 2);  /* 0C07A5A8 mov.w @(disp,pc),Rn */
	IF(0x0C07A5AAu); r0 = MACL;  /* 0C07A5AA sts macl,Rn */
	r0 += r3;  /* 0C07A5AC add Rm,Rn */
	IF(0x0C07A5AEu); W8(r0 + r13, r4); UPD(0x0C07A5B0u, 3);  /* 0C07A5AE mov.b Rm,@(r0,Rn) */
	r13 += 0x7u;  /* 0C07A5B0 add #imm,Rn */
	{ IF(0x0C07A5B4u); W8(r0 + r13, r2); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C07A360u, 4); goto L_0C07A360; }  /* 0C07A5B2 bra */
L_0C07A5C0: BLKS(0x0C07A5C0u);
	r0 = 0x88u; UPD(0x0C07A5C2u, 1);  /* 0C07A5C0 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C07A5C2 mov #imm,Rn */
	{ IF(0x0C07A5C6u); W16(r0 + r8, r11); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C07A59Eu, 4); goto L_0C07A59E; }  /* 0C07A5C4 bra */
L_0C07A5D0: BLKS(0x0C07A5D0u);
	r11 = 0xC0A03F0u; UPD(0x0C07A5D2u, 1);  /* 0C07A5D0 mov.l @(disp,pc),Rn */
	IF(0x0C07A5D2u); { u32 t_ = r11; PR = 0x0C07A5D6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C07A5D6u); }  /* 0C07A5D2 jsr @Rn */
L_0C07A5D6: BLKS(0x0C07A5D6u);
	IF(0x0C07A5D6u); T = (s32)r0 >= 0;  /* 0C07A5D6 cmp/pz Rn */
	if (!T) { UPD(0x0C07A600u, 4); goto L_0C07A600; }  /* 0C07A5D8 bf */
L_0C07A5DA: BLKS(0x0C07A5DAu);
	IF(0x0C07A5DAu); MACL = r0 * r9;  /* 0C07A5DA mul.l Rm,Rn */
	r1 = 0x80000u; UPD(0x0C07A5DEu, 3);  /* 0C07A5DC mov.l @(disp,pc),Rn */
	IF(0x0C07A5DEu); r4 = MACL;  /* 0C07A5DE sts macl,Rn */
	r4 += r10;  /* 0C07A5E0 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C07A5E4u, 3);  /* 0C07A5E2 mov.l @(disp,Rm),Rn */
	r3 = R32(r4 + 0x24u); UPD(0x0C07A5E6u, 1);  /* 0C07A5E4 mov.l @(disp,Rm),Rn */
	r0 += 0x3u;  /* 0C07A5E6 add #imm,Rn */
	r2 = R32(r4 + 0x28u); UPD(0x0C07A5EAu, 2);  /* 0C07A5E8 mov.l @(disp,Rm),Rn */
	r3 += r1;  /* 0C07A5EA add Rm,Rn */
	r0 &= 0x7u;  /* 0C07A5EC and #imm,r0 */
	W32(r8 + 0x24u, r3); UPD(0x0C07A5F0u, 3);  /* 0C07A5EE mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C07A5F0 mov Rm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C07A5F4u, 2);  /* 0C07A5F2 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A0380u; UPD(0x0C07A5F6u, 1);  /* 0C07A5F4 mov.l @(disp,pc),Rn */
	{ W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07A486u, 3); goto L_0C07A486; }  /* 0C07A5F6 bra */
L_0C07A600: BLKS(0x0C07A600u);
	r0 = 0x0u;  /* 0C07A600 mov #imm,Rn */
	{ W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C07A3D0u, 4); goto L_0C07A3D0; }  /* 0C07A602 bra */
}

void f_0C07A640(sh3_t *c)
{
	LOCALS;
L_0C07A640: BLKS(0x0C07A640u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07A642u, 1);  /* 0C07A640 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07A644u, 1);  /* 0C07A642 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07A646u, 1);  /* 0C07A644 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07A648u, 1);  /* 0C07A646 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07A64Au, 1);  /* 0C07A648 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07A64Cu, 1);  /* 0C07A64A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07A64Eu, 1);  /* 0C07A64C mov.l Rm,@-Rn */
	r4 = 0xC2859A0u; UPD(0x0C07A650u, 1);  /* 0C07A64E mov.l @(disp,pc),Rn */
	IF(0x0C07A650u); r15 -= 4; W32(r15, PR); UPD(0x0C07A652u, 1);  /* 0C07A650 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C07A654u, 1);  /* 0C07A652 mov.l @Rm,Rn */
	r14 = r15;  /* 0C07A654 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r10 = v_; } UPD(0x0C07A658u, 2);  /* 0C07A656 mov.w @Rm+,Rn */
	r12 = 0xC392D5Eu; UPD(0x0C07A65Au, 1);  /* 0C07A658 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C07A65A add #imm,Rn */
	W16(r12, r10); UPD(0x0C07A65Eu, 2);  /* 0C07A65C mov.w Rm,@Rn */
	r8 = 0xC2852D8u; UPD(0x0C07A660u, 1);  /* 0C07A65E mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r3); r3 += 1; r9 = v_; } UPD(0x0C07A662u, 1);  /* 0C07A660 mov.b @Rm+,Rn */
	W8(r8, r9); UPD(0x0C07A664u, 1);  /* 0C07A662 mov.b Rm,@Rn */
	r7 = 0xC283CA0u; UPD(0x0C07A666u, 1);  /* 0C07A664 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C07A668u, 1);  /* 0C07A666 mov.w @Rm+,Rn */
	r6 = R32(r7); UPD(0x0C07A66Au, 1);  /* 0C07A668 mov.l @Rm,Rn */
	IF(0x0C07A66Au); r0 <<= 2;  /* 0C07A66A shll2 Rn */
	IF(0x0C07A66Cu); r5 = R32(r0 + r6); UPD(0x0C07A66Eu, 2);  /* 0C07A66C mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r1 = v_; } UPD(0x0C07A670u, 1);  /* 0C07A66E mov.w @Rm+,Rn */
	r13 = 0xC27DC20u; UPD(0x0C07A672u, 1);  /* 0C07A670 mov.l @(disp,pc),Rn */
	r9 = 0xC22C874u; UPD(0x0C07A674u, 1);  /* 0C07A672 mov.l @(disp,pc),Rn */
	r8 = 0xC057A50u; UPD(0x0C07A676u, 1);  /* 0C07A674 mov.l @(disp,pc),Rn */
	W32(r13, r5); UPD(0x0C07A678u, 1);  /* 0C07A676 mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C07A67Au, 1);  /* 0C07A678 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C07A67Cu, 1);  /* 0C07A67A mov.w @Rm,Rn */
	r10 = 0xC28629Eu; UPD(0x0C07A67Eu, 1);  /* 0C07A67C mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C07A67E extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C07A682u, 2);  /* 0C07A680 mov.l @(disp,pc),Rn */
	IF(0x0C07A682u); { u32 t_ = r8; PR = 0x0C07A686u; W16(r10, r1); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C07A686u); }  /* 0C07A682 jsr @Rn */
L_0C07A686: BLKS(0x0C07A686u);
	T = (r0 & r0) == 0;  /* 0C07A686 tst Rm,Rn */
	if (!T) { UPD(0x0C07A6A0u, 4); goto L_0C07A6A0; }  /* 0C07A688 bf */
L_0C07A68A: BLKS(0x0C07A68Au);
	r0 = 0x1u;  /* 0C07A68A mov #imm,Rn */
	UPD(0x0C07A68Cu, 1);
L_0C07A68C: BLKS(0x0C07A68Cu);
	r15 = r14;  /* 0C07A68C mov Rm,Rn */
	IF(0x0C07A68Eu); PR = R32(r15); r15 += 4; UPD(0x0C07A690u, 2);  /* 0C07A68E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A692u, 1);  /* 0C07A690 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07A694u, 1);  /* 0C07A692 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A696u, 1);  /* 0C07A694 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A698u, 1);  /* 0C07A696 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A69Au, 1);  /* 0C07A698 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A69Cu, 1);  /* 0C07A69A mov.l @Rm+,Rn */
	IF(0x0C07A69Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07A69C rts */
L_0C07A6A0: BLKS(0x0C07A6A0u);
	r11 = 0xC0606C0u; UPD(0x0C07A6A2u, 1);  /* 0C07A6A0 mov.l @(disp,pc),Rn */
	IF(0x0C07A6A2u); { u32 t_ = r11; PR = 0x0C07A6A6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C07A6A6u); }  /* 0C07A6A2 jsr @Rn */
L_0C07A6A6: BLKS(0x0C07A6A6u);
	T = (r0 & r0) == 0;  /* 0C07A6A6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A68Cu, 4); goto L_0C07A68C; } goto L_0C07A6AC; }  /* 0C07A6A8 bt/s */
L_0C07A6AC: BLKS(0x0C07A6ACu);
	r2 = 0xC2755BCu; UPD(0x0C07A6AEu, 2);  /* 0C07A6AC mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C07A6B0u, 1);  /* 0C07A6AE mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r2); UPD(0x0C07A6B2u, 1);  /* 0C07A6B0 mov.w @Rm,Rn */
	IF(0x0C07A6B2u); MACL = r11 * r8;  /* 0C07A6B2 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C07A6B6u, 3);  /* 0C07A6B4 mov.l @(disp,pc),Rn */
	IF(0x0C07A6B6u); r8 = MACL;  /* 0C07A6B6 sts macl,Rn */
	r0 = 0xD3000104u; UPD(0x0C07A6BAu, 2);  /* 0C07A6B8 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C07A6BA add Rm,Rn */
	W32(r8, r0); UPD(0x0C07A6BEu, 2);  /* 0C07A6BC mov.l Rm,@Rn */
	r4 = r11;  /* 0C07A6BE mov Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C07A6C2u, 2);  /* 0C07A6C0 mov.w @Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C07A6C4u, 1);  /* 0C07A6C2 mov.w @Rm,Rn */
	r6 = r7 & 0xFFFF;  /* 0C07A6C4 extu.w Rm,Rn */
	r0 = 0x8Au; UPD(0x0C07A6C8u, 2);  /* 0C07A6C6 mov.w @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C07A6C8 mov #imm,Rn */
	IF(0x0C07A6CAu); W16(r0 + r8, r5); UPD(0x0C07A6CCu, 2);  /* 0C07A6CA mov.w Rm,@(r0,Rn) */
	r3 = 0xC0A02D0u; UPD(0x0C07A6CEu, 1);  /* 0C07A6CC mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C07A6CE add #imm,Rn */
	IF(0x0C07A6D0u); W16(r0 + r8, r5); UPD(0x0C07A6D2u, 2);  /* 0C07A6D0 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0x4u, r6); UPD(0x0C07A6D4u, 1);  /* 0C07A6D2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r9); UPD(0x0C07A6D6u, 1);  /* 0C07A6D4 mov.l Rm,@(disp,Rn) */
	IF(0x0C07A6D6u); { u32 t_ = r3; PR = 0x0C07A6DAu; W32(r8 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07A6DAu); }  /* 0C07A6D6 jsr @Rn */
L_0C07A6DA: BLKS(0x0C07A6DAu);
	r2 = 0xC21F5E2u; UPD(0x0C07A6DCu, 1);  /* 0C07A6DA mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C07A6DEu, 1);  /* 0C07A6DC mov.w @Rm,Rn */
	r3 = r4;  /* 0C07A6DE mov Rm,Rn */
	IF(0x0C07A6E0u); r3 <<= 16;  /* 0C07A6E0 shll16 Rn */
	r0 = 0x180u; UPD(0x0C07A6E4u, 3);  /* 0C07A6E2 mov.w @(disp,pc),Rn */
	T = (s32)r4 > (s32)r0;  /* 0C07A6E4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x24u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07A6F2u, 4); goto L_0C07A6F2; } UPD(0x0C07A6EAu, 1); goto L_0C07A6EA; }  /* 0C07A6E6 bf/s */
L_0C07A6EA: BLKS(0x0C07A6EAu);
	r5 = 0xC283CA4u; UPD(0x0C07A6ECu, 1);  /* 0C07A6EA mov.l @(disp,pc),Rn */
	r10 = R32(r5); UPD(0x0C07A6EEu, 1);  /* 0C07A6EC mov.l @Rm,Rn */
	r3 -= r10;  /* 0C07A6EE sub Rm,Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C07A6F2u, 2);  /* 0C07A6F0 mov.l Rm,@(disp,Rn) */
L_0C07A6F2: BLKS(0x0C07A6F2u);
	r7 = (u32)(s32)(s16)R16(r12); UPD(0x0C07A6F4u, 1);  /* 0C07A6F2 mov.w @Rm,Rn */
	r4 = r11;  /* 0C07A6F4 mov Rm,Rn */
	r6 = 0xC0A1530u; UPD(0x0C07A6F8u, 2);  /* 0C07A6F6 mov.l @(disp,pc),Rn */
	IF(0x0C07A6F8u); r7 <<= 16;  /* 0C07A6F8 shll16 Rn */
	IF(0x0C07A6FAu); { u32 t_ = r6; PR = 0x0C07A6FEu; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C07A6FEu); }  /* 0C07A6FA jsr @Rn */
L_0C07A6FE: BLKS(0x0C07A6FEu);
	r1 = 0xC2852D8u; UPD(0x0C07A700u, 1);  /* 0C07A6FE mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07A700 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C07A704u, 2);  /* 0C07A702 mov.b @Rm,Rn */
	r0 = 0xADu; UPD(0x0C07A706u, 1);  /* 0C07A704 mov.w @(disp,pc),Rn */
	IF(0x0C07A706u); W8(r0 + r8, r3); UPD(0x0C07A708u, 1);  /* 0C07A706 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C07A708 add #imm,Rn */
	IF(0x0C07A70Au); W8(r0 + r8, r3); UPD(0x0C07A70Cu, 2);  /* 0C07A70A mov.b Rm,@(r0,Rn) */
	r11 = 0xC0A1780u; UPD(0x0C07A70Eu, 1);  /* 0C07A70C mov.l @(disp,pc),Rn */
	IF(0x0C07A70Eu); { u32 t_ = r11; PR = 0x0C07A712u; r5 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C07A712u); }  /* 0C07A70E jsr @Rn */
L_0C07A712: BLKS(0x0C07A712u);
	r12 = 0x8Cu; UPD(0x0C07A714u, 1);  /* 0C07A712 mov.w @(disp,pc),Rn */
	r13 = 0x94u; UPD(0x0C07A716u, 1);  /* 0C07A714 mov.w @(disp,pc),Rn */
	r12 += r8;  /* 0C07A716 add Rm,Rn */
	r0 = 0x90u; UPD(0x0C07A71Au, 2);  /* 0C07A718 mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C07A71A add Rm,Rn */
	IF(0x0C07A71Cu); W32(r0 + r8, r9); UPD(0x0C07A71Eu, 2);  /* 0C07A71C mov.l Rm,@(r0,Rn) */
	W32(r13, r9); UPD(0x0C07A720u, 1);  /* 0C07A71E mov.l Rm,@Rn */
	W32(r12, r9); UPD(0x0C07A722u, 1);  /* 0C07A720 mov.l Rm,@Rn */
	W32(r8 + 0x30u, r9); UPD(0x0C07A724u, 1);  /* 0C07A722 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x2Cu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07A68Au, 3); goto L_0C07A68A; }  /* 0C07A724 bra */
}

void f_0C07A780(sh3_t *c)
{
	LOCALS;
L_0C07A780: BLKS(0x0C07A780u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07A782u, 1);  /* 0C07A780 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07A784u, 1);  /* 0C07A782 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C07A786u, 1);  /* 0C07A784 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C07A786 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07A78Au, 2);  /* 0C07A788 mov.l Rm,@-Rn */
	IF(0x0C07A78Au); MACL = r9 * r2;  /* 0C07A78A mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07A78Eu, 3);  /* 0C07A78C mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C07A790u, 1);  /* 0C07A78E mov.l @(disp,pc),Rn */
	IF(0x0C07A790u); r8 = MACL;  /* 0C07A790 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07A794u, 2);  /* 0C07A792 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C07A794 add Rm,Rn */
	IF(0x0C07A796u); r15 -= 4; W32(r15, PR); UPD(0x0C07A798u, 2);  /* 0C07A796 sts.l pr,@-Rn */
	r0 = r8;  /* 0C07A798 mov Rm,Rn */
	r3 = 0xA5u; UPD(0x0C07A79Cu, 2);  /* 0C07A79A mov.w @(disp,pc),Rn */
	IF(0x0C07A79Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07A79Eu, 1);  /* 0C07A79C mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C07A79E tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07A7A8u, 4); goto L_0C07A7A8; } goto L_0C07A7A4; }  /* 0C07A7A0 bf/s */
L_0C07A7A4: BLKS(0x0C07A7A4u);
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C07A940u, 4); goto L_0C07A940; }  /* 0C07A7A4 bra */
L_0C07A7A8: BLKS(0x0C07A7A8u);
	r0 = 0xC050D70u; UPD(0x0C07A7AAu, 1);  /* 0C07A7A8 mov.l @(disp,pc),Rn */
	r4 = 0x6u;  /* 0C07A7AA mov #imm,Rn */
	r10 = R32(r8 + 0x24u); UPD(0x0C07A7AEu, 2);  /* 0C07A7AC mov.l @(disp,Rm),Rn */
	IF(0x0C07A7AEu); { u32 t_ = r0; PR = 0x0C07A7B2u; r11 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C07A7B2u); }  /* 0C07A7AE jsr @Rn */
L_0C07A7B2: BLKS(0x0C07A7B2u);
	r4 = 0x4u;  /* 0C07A7B2 mov #imm,Rn */
	T = r0 > r4;  /* 0C07A7B4 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r2 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07A7BEu, 5); goto L_0C07A7BE; } goto L_0C07A7BA; }  /* 0C07A7B6 bf/s */
L_0C07A7BA: BLKS(0x0C07A7BAu);
	{ r15 += 0xFFFFFFF8u; /* slot add #imm,Rn */ UPD(0x0C07A920u, 4); goto L_0C07A920; }  /* 0C07A7BA bra */
L_0C07A7BE: BLKS(0x0C07A7BEu);
	r0 = 0xC07A7D4u;  /* 0C07A7BE mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07A7C0 add Rm,Rn */
	IF(0x0C07A7C2u); r6 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07A7C4u, 3);  /* 0C07A7C2 mov.w @(r0,Rm),Rn */
	IF(0x0C07A7C4u); { u32 tv_ = (r6 + 0x0C07A7C8u); u32 t_ = PHYS(tv_); IF(0x0C07A7C6u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07A7E0u: goto L_0C07A7E0; case 0x0C07A850u: goto L_0C07A850; case 0x0C07A880u: goto L_0C07A880; case 0x0C07A8C0u: goto L_0C07A8C0; case 0x0C07A8F0u: goto L_0C07A8F0; default: JUMPD(tv_); } }  /* 0C07A7C4 braf Rn */
L_0C07A7E0: BLKS(0x0C07A7E0u);
	r0 = 0xB4u; UPD(0x0C07A7E2u, 1);  /* 0C07A7E0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07A7E2 add #imm,Rn */
	IF(0x0C07A7E4u); MACL = r9 * r0;  /* 0C07A7E4 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C07A7E8u, 4);  /* 0C07A7E6 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C07A7E8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C07A7ECu, 2);  /* 0C07A7EA mov.w @(disp,pc),Rn */
	IF(0x0C07A7ECu); r8 = MACL;  /* 0C07A7EC sts macl,Rn */
	r8 += r2;  /* 0C07A7EE add Rm,Rn */
	IF(0x0C07A7F0u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07A7F2u, 3);  /* 0C07A7F0 mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C07A7F2 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C07A7F6u, 2);  /* 0C07A7F4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07A7F6 add #imm,Rn */
	IF(0x0C07A7F8u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07A7FAu, 2);  /* 0C07A7F8 mov.b @(r0,Rm),Rn */
	r7 = r11;  /* 0C07A7FA mov Rm,Rn */
	r4 = r6 & 0xFF;  /* 0C07A7FC extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07A800u, 3);  /* 0C07A7FE mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C07A800 mov Rm,Rn */
	r4 = R32(r8); UPD(0x0C07A804u, 2);  /* 0C07A802 mov.l @Rm,Rn */
	r0 = 0xC0AD970u; UPD(0x0C07A806u, 1);  /* 0C07A804 mov.l @(disp,pc),Rn */
	IF(0x0C07A806u); ;  /* 0C07A806 nop */
	UPD(0x0C07A808u, 1);
L_0C07A808: BLKS(0x0C07A808u);
	IF(0x0C07A808u); { u32 t_ = r0; PR = 0x0C07A80Cu; IF(0x0C07A80Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C07A80Cu); }  /* 0C07A808 jsr @Rn */
L_0C07A80C: BLKS(0x0C07A80Cu);
	r15 += 0x8u;  /* 0C07A80C add #imm,Rn */
	UPD(0x0C07A80Eu, 1);
L_0C07A80E: BLKS(0x0C07A80Eu);
	r8 = 0xB4u; UPD(0x0C07A810u, 1);  /* 0C07A80E mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07A810 add #imm,Rn */
	IF(0x0C07A812u); MACL = r9 * r8;  /* 0C07A812 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C07A816u, 4);  /* 0C07A814 mov.l @(disp,pc),Rn */
	IF(0x0C07A816u); r8 = MACL;  /* 0C07A816 sts macl,Rn */
	r8 += r4;  /* 0C07A818 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C07A81Cu, 3);  /* 0C07A81A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07A81C mov Rm,Rn */
	IF(0x0C07A81Eu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07A820u, 2);  /* 0C07A81E mov.b @(r0,Rm),Rn */
	r4 = 0x3u;  /* 0C07A820 mov #imm,Rn */
	r7 = r5 & 0xFF;  /* 0C07A822 extu.b Rm,Rn */
	r9 = 0x20000u; UPD(0x0C07A826u, 3);  /* 0C07A824 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C07A826 mov Rm,Rn */
	W32(r15, r9); UPD(0x0C07A82Au, 2);  /* 0C07A828 mov.l Rm,@Rn */
	r6 = r11;  /* 0C07A82A mov Rm,Rn */
	r10 = 0xC06CC20u; UPD(0x0C07A82Eu, 2);  /* 0C07A82C mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C07A82E mov #imm,Rn */
	IF(0x0C07A830u); { u32 t_ = r10; PR = 0x0C07A834u; W32(r15 + 0x4u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C07A834u); }  /* 0C07A830 jsr @Rn */
L_0C07A834: BLKS(0x0C07A834u);
	W32(r8, r9); UPD(0x0C07A836u, 1);  /* 0C07A834 mov.l Rm,@Rn */
	r15 = r14;  /* 0C07A836 mov Rm,Rn */
	IF(0x0C07A838u); PR = R32(r15); r15 += 4; UPD(0x0C07A83Au, 2);  /* 0C07A838 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A83Cu, 1);  /* 0C07A83A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A83Eu, 1);  /* 0C07A83C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A840u, 1);  /* 0C07A83E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A842u, 1);  /* 0C07A840 mov.l @Rm+,Rn */
	IF(0x0C07A842u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07A842 rts */
L_0C07A850: BLKS(0x0C07A850u);
	r2 = 0xB4u; UPD(0x0C07A852u, 1);  /* 0C07A850 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07A852 add #imm,Rn */
	IF(0x0C07A854u); MACL = r9 * r2;  /* 0C07A854 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C07A858u, 4);  /* 0C07A856 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C07A85Au, 1);  /* 0C07A858 mov.w @(disp,pc),Rn */
	IF(0x0C07A85Au); r5 = MACL;  /* 0C07A85A sts macl,Rn */
	r5 += r3;  /* 0C07A85C add Rm,Rn */
	IF(0x0C07A85Eu); r7 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C07A860u, 3);  /* 0C07A85E mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C07A860 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C07A864u, 2);  /* 0C07A862 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07A864 add #imm,Rn */
	IF(0x0C07A866u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C07A868u, 2);  /* 0C07A866 mov.b @(r0,Rm),Rn */
	r6 = r10;  /* 0C07A868 mov Rm,Rn */
	r8 = r4 & 0xFF;  /* 0C07A86A extu.b Rm,Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C07A86Eu, 3);  /* 0C07A86C mov.l Rm,@(disp,Rn) */
	r7 = r11;  /* 0C07A86E mov Rm,Rn */
	r4 = R32(r5); UPD(0x0C07A872u, 2);  /* 0C07A870 mov.l @Rm,Rn */
	r0 = 0xC0AC800u; UPD(0x0C07A874u, 1);  /* 0C07A872 mov.l @(disp,pc),Rn */
	{ r5 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C07A808u, 3); goto L_0C07A808; }  /* 0C07A874 bra */
L_0C07A880: BLKS(0x0C07A880u);
	r5 = 0xB4u; UPD(0x0C07A882u, 1);  /* 0C07A880 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C07A882 add #imm,Rn */
	IF(0x0C07A884u); MACL = r9 * r5;  /* 0C07A884 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C07A888u, 4);  /* 0C07A886 mov.l @(disp,pc),Rn */
	IF(0x0C07A888u); r5 = MACL;  /* 0C07A888 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C07A88Cu, 2);  /* 0C07A88A mov.w @(disp,pc),Rn */
	r5 += r8;  /* 0C07A88C add Rm,Rn */
	IF(0x0C07A88Eu); r2 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C07A890u, 2);  /* 0C07A88E mov.b @(r0,Rm),Rn */
	r3 = r2 & 0xFF;  /* 0C07A890 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C07A894u, 2);  /* 0C07A892 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07A894 add #imm,Rn */
	IF(0x0C07A896u); r7 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C07A898u, 2);  /* 0C07A896 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C07A898 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C07A89Cu, 2);  /* 0C07A89A mov.l Rm,@(disp,Rn) */
	r7 = r11;  /* 0C07A89C mov Rm,Rn */
	r4 = R32(r5 + 0x2Cu); UPD(0x0C07A8A0u, 2);  /* 0C07A89E mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C07A8A0 mov Rm,Rn */
	W32(r15 + 0x8u, r4); UPD(0x0C07A8A4u, 2);  /* 0C07A8A2 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x30u); UPD(0x0C07A8A6u, 1);  /* 0C07A8A4 mov.l @(disp,Rm),Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C07A8A8u, 1);  /* 0C07A8A6 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0AC3B0u; UPD(0x0C07A8AAu, 1);  /* 0C07A8A8 mov.l @(disp,pc),Rn */
	r4 = R32(r5); UPD(0x0C07A8ACu, 1);  /* 0C07A8AA mov.l @Rm,Rn */
	IF(0x0C07A8ACu); { u32 t_ = r8; PR = 0x0C07A8B0u; r5 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC3B0, 0x0C0AC3B0u, 0x0C07A8B0u); }  /* 0C07A8AC jsr @Rn */
L_0C07A8B0: BLKS(0x0C07A8B0u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C07A80Eu, 3); goto L_0C07A80E; }  /* 0C07A8B0 bra */
L_0C07A8C0: BLKS(0x0C07A8C0u);
	r8 = 0xB4u; UPD(0x0C07A8C2u, 1);  /* 0C07A8C0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07A8C2 add #imm,Rn */
	IF(0x0C07A8C4u); MACL = r9 * r8;  /* 0C07A8C4 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C07A8C8u, 4);  /* 0C07A8C6 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C07A8C8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C07A8CCu, 2);  /* 0C07A8CA mov.w @(disp,pc),Rn */
	IF(0x0C07A8CCu); r6 = MACL;  /* 0C07A8CC sts macl,Rn */
	r6 += r2;  /* 0C07A8CE add Rm,Rn */
	IF(0x0C07A8D0u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07A8D2u, 3);  /* 0C07A8D0 mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C07A8D2 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C07A8D6u, 2);  /* 0C07A8D4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07A8D6 add #imm,Rn */
	IF(0x0C07A8D8u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07A8DAu, 2);  /* 0C07A8D8 mov.b @(r0,Rm),Rn */
	r7 = r11;  /* 0C07A8DA mov Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C07A8DC extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C07A8E0u, 3);  /* 0C07A8DE mov.l Rm,@(disp,Rn) */
	r4 = R32(r6); UPD(0x0C07A8E2u, 1);  /* 0C07A8E0 mov.l @Rm,Rn */
	r0 = 0xC0ADB30u; UPD(0x0C07A8E4u, 1);  /* 0C07A8E2 mov.l @(disp,pc),Rn */
	{ r6 = r10; /* slot mov Rm,Rn */ UPD(0x0C07A808u, 3); goto L_0C07A808; }  /* 0C07A8E4 bra */
L_0C07A8F0: BLKS(0x0C07A8F0u);
	r2 = 0xB4u; UPD(0x0C07A8F2u, 1);  /* 0C07A8F0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07A8F2 add #imm,Rn */
	IF(0x0C07A8F4u); MACL = r9 * r2;  /* 0C07A8F4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07A8F8u, 4);  /* 0C07A8F6 mov.l @(disp,pc),Rn */
	IF(0x0C07A8F8u); r5 = MACL;  /* 0C07A8F8 sts macl,Rn */
	r5 += r0;  /* 0C07A8FA add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07A8FEu, 3);  /* 0C07A8FC mov.w @(disp,pc),Rn */
	IF(0x0C07A8FEu); r3 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C07A900u, 1);  /* 0C07A8FE mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C07A900 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C07A904u, 2);  /* 0C07A902 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07A904 add #imm,Rn */
	IF(0x0C07A906u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C07A908u, 2);  /* 0C07A906 mov.b @(r0,Rm),Rn */
	r7 = r11;  /* 0C07A908 mov Rm,Rn */
	r6 = r4 & 0xFF;  /* 0C07A90A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C07A90Eu, 3);  /* 0C07A90C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C07A910u, 1);  /* 0C07A90E mov.l @(disp,pc),Rn */
	r6 = r10;  /* 0C07A910 mov Rm,Rn */
	r4 = R32(r5); UPD(0x0C07A914u, 2);  /* 0C07A912 mov.l @Rm,Rn */
	{ r5 = 0x2u; /* slot mov #imm,Rn */ UPD(0x0C07A808u, 3); goto L_0C07A808; }  /* 0C07A914 bra */
L_0C07A920: BLKS(0x0C07A920u);
	r0 = 0xB0u; UPD(0x0C07A922u, 1);  /* 0C07A920 mov.w @(disp,pc),Rn */
	IF(0x0C07A922u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07A924u, 1);  /* 0C07A922 mov.b @(r0,Rm),Rn */
	r6 = r10;  /* 0C07A924 mov Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C07A926 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C07A92Au, 3);  /* 0C07A928 mov.l Rm,@Rn */
	r5 = 0x3u;  /* 0C07A92A mov #imm,Rn */
	r2 = 0xA9u; UPD(0x0C07A92Eu, 2);  /* 0C07A92C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07A92E mov Rm,Rn */
	IF(0x0C07A930u); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07A932u, 2);  /* 0C07A930 mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C07A932 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C07A936u, 2);  /* 0C07A934 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C07A938u, 1);  /* 0C07A936 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C07A938 mov Rm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C07A808u, 4); goto L_0C07A808; }  /* 0C07A93A bra */
L_0C07A940: BLKS(0x0C07A940u);
	r5 = 0xC0A0E20u; UPD(0x0C07A942u, 1);  /* 0C07A940 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07A942 mov Rm,Rn */
	IF(0x0C07A944u); PR = R32(r15); r15 += 4; UPD(0x0C07A946u, 2);  /* 0C07A944 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A948u, 1);  /* 0C07A946 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A94Au, 1);  /* 0C07A948 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A94Cu, 1);  /* 0C07A94A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A94Eu, 1);  /* 0C07A94C mov.l @Rm+,Rn */
	IF(0x0C07A94Eu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A0E20u: TAIL(f_0C0A0E20); default: JUMPD(tv_); } }  /* 0C07A94E jmp @Rn */
}

/* FUN_0c07a980 */
void f_0C07A980(sh3_t *c)
{
	LOCALS;
L_0C07A980: BLKS(0x0C07A980u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07A982u, 1);  /* 0C07A980 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07A984u, 1);  /* 0C07A982 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C07A986u, 1);  /* 0C07A984 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C07A986 exts.w Rm,Rn */
	IF(0x0C07A988u); MACL = r9 * r0;  /* 0C07A988 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07A98Cu, 4);  /* 0C07A98A mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C07A98Eu, 1);  /* 0C07A98C mov.l @(disp,pc),Rn */
	IF(0x0C07A98Eu); r8 = MACL;  /* 0C07A98E sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07A992u, 2);  /* 0C07A990 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C07A992 add Rm,Rn */
	r2 = 0x99u; UPD(0x0C07A996u, 2);  /* 0C07A994 mov.w @(disp,pc),Rn */
	IF(0x0C07A996u); r15 -= 4; W32(r15, PR); UPD(0x0C07A998u, 1);  /* 0C07A996 sts.l pr,@-Rn */
	r2 += r8;  /* 0C07A998 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C07A99Cu, 2);  /* 0C07A99A mov.b @Rm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C07A99C cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07AA16u, 4); goto L_0C07AA16; } goto L_0C07A9A2; }  /* 0C07A99E bt/s */
L_0C07A9A2: BLKS(0x0C07A9A2u);
	r10 = 0xC058130u; UPD(0x0C07A9A4u, 2);  /* 0C07A9A2 mov.l @(disp,pc),Rn */
	r3 = r0;  /* 0C07A9A4 mov Rm,Rn */
	r3 += 0x1u;  /* 0C07A9A6 add #imm,Rn */
	W8(r2, r3); UPD(0x0C07A9AAu, 3);  /* 0C07A9A8 mov.b Rm,@Rn */
	IF(0x0C07A9AAu); { u32 t_ = r10; PR = 0x0C07A9AEu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C07A9AEu); }  /* 0C07A9AA jsr @Rn */
L_0C07A9AE: BLKS(0x0C07A9AEu);
	r4 = 0x9Eu; UPD(0x0C07A9B0u, 1);  /* 0C07A9AE mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07A9B0 mov Rm,Rn */
	IF(0x0C07A9B2u); r7 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C07A9B4u, 2);  /* 0C07A9B2 mov.b @(r0,Rm),Rn */
	r5 = 0x280u; UPD(0x0C07A9B6u, 1);  /* 0C07A9B4 mov.w @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C07A9B6 extu.b Rm,Rn */
	IF(0x0C07A9B8u); MACL = r6 * r5;  /* 0C07A9B8 mul.l Rm,Rn */
	r10 = 0x86u; UPD(0x0C07A9BCu, 4);  /* 0C07A9BA mov.w @(disp,pc),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C07A9BEu, 1);  /* 0C07A9BC mov.l @(disp,Rm),Rn */
	r10 += r8;  /* 0C07A9BE add Rm,Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C07A9C2u, 2);  /* 0C07A9C0 mov.l @(disp,Rm),Rn */
	IF(0x0C07A9C2u); r3 = MACL;  /* 0C07A9C2 sts macl,Rn */
	r2 = 0xC283794u; UPD(0x0C07A9C6u, 2);  /* 0C07A9C4 mov.l @(disp,pc),Rn */
	r8 = 0xC057390u; UPD(0x0C07A9C8u, 1);  /* 0C07A9C6 mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C07A9C8 add Rm,Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C07A9CCu, 2);  /* 0C07A9CA mov.l @(disp,Rm),Rn */
	IF(0x0C07A9CCu); { u32 t_ = r8; PR = 0x0C07A9D0u; r7 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C07A9D0u); }  /* 0C07A9CC jsr @Rn */
L_0C07A9D0: BLKS(0x0C07A9D0u);
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C07A9D2u, 1);  /* 0C07A9D0 mov.w @Rm,Rn */
	r4 = 0x1FFu; UPD(0x0C07A9D4u, 1);  /* 0C07A9D2 mov.w @(disp,pc),Rn */
	r2 = r3;  /* 0C07A9D4 mov Rm,Rn */
	r2 -= r0;  /* 0C07A9D6 sub Rm,Rn */
	r2 &= r4;  /* 0C07A9D8 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07A9DA tst Rm,Rn */
	if (T) { UPD(0x0C07A9ECu, 7); goto L_0C07A9EC; }  /* 0C07A9DC bt */
L_0C07A9DE: BLKS(0x0C07A9DEu);
	r0 = 0x100u; UPD(0x0C07A9E0u, 1);  /* 0C07A9DE mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C07A9E0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07AA60u, 4); goto L_0C07AA60; } goto L_0C07A9E6; }  /* 0C07A9E2 bf/s */
L_0C07A9E6: BLKS(0x0C07A9E6u);
	r1 = r3;  /* 0C07A9E6 mov Rm,Rn */
	r1 += 0x2u;  /* 0C07A9E8 add #imm,Rn */
	UPD(0x0C07A9EAu, 3);
L_0C07A9EA: BLKS(0x0C07A9EAu);
	W16(r10, r1); UPD(0x0C07A9ECu, 1);  /* 0C07A9EA mov.w Rm,@Rn */
L_0C07A9EC: BLKS(0x0C07A9ECu);
	r3 = 0xFFFFFF00u; UPD(0x0C07A9EEu, 1);  /* 0C07A9EC mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C07A9EE add Rm,Rn */
	IF(0x0C07A9F0u); T = (s32)r3 >= 0;  /* 0C07A9F0 cmp/pz Rn */
	if (!T) { UPD(0x0C07AA50u, 5); goto L_0C07AA50; }  /* 0C07A9F2 bf */
L_0C07A9F4: BLKS(0x0C07A9F4u);
	r1 = 0xF8u; UPD(0x0C07A9F6u, 1);  /* 0C07A9F4 mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r1;  /* 0C07A9F6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07AA30u, 4); goto L_0C07AA30; } goto L_0C07A9FC; }  /* 0C07A9F8 bf/s */
L_0C07A9FC: BLKS(0x0C07A9FCu);
	IF(0x0C07A9FCu); MACL = r9 * r1;  /* 0C07A9FC mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C07AA00u, 4);  /* 0C07A9FE mov.l @(disp,pc),Rn */
	IF(0x0C07AA00u); r3 = MACL;  /* 0C07AA00 sts macl,Rn */
	r8 = 0x8Cu; UPD(0x0C07AA04u, 2);  /* 0C07AA02 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C07AA04 add Rm,Rn */
	r3 += r8;  /* 0C07AA06 add Rm,Rn */
	r2 = R32(r3); UPD(0x0C07AA0Au, 3);  /* 0C07AA08 mov.l @Rm,Rn */
	r9 = 0x2BFFFu; UPD(0x0C07AA0Cu, 1);  /* 0C07AA0A mov.l @(disp,pc),Rn */
	r1 = 0x1000u; UPD(0x0C07AA0Eu, 1);  /* 0C07AA0C mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r9;  /* 0C07AA0E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C07AA16u, 4); goto L_0C07AA16; }  /* 0C07AA10 bt */
L_0C07AA12: BLKS(0x0C07AA12u);
	r2 += r1;  /* 0C07AA12 add Rm,Rn */
	UPD(0x0C07AA14u, 1);
L_0C07AA14: BLKS(0x0C07AA14u);
	W32(r3, r2); UPD(0x0C07AA16u, 1);  /* 0C07AA14 mov.l Rm,@Rn */
L_0C07AA16: BLKS(0x0C07AA16u);
	r15 = r14;  /* 0C07AA16 mov Rm,Rn */
	IF(0x0C07AA18u); PR = R32(r15); r15 += 4; UPD(0x0C07AA1Au, 2);  /* 0C07AA18 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07AA1Cu, 1);  /* 0C07AA1A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07AA1Eu, 1);  /* 0C07AA1C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07AA20u, 1);  /* 0C07AA1E mov.l @Rm+,Rn */
	IF(0x0C07AA20u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07AA20 rts */
L_0C07AA30: BLKS(0x0C07AA30u);
	r4 = 0xB4u; UPD(0x0C07AA32u, 1);  /* 0C07AA30 mov.w @(disp,pc),Rn */
	IF(0x0C07AA32u); MACL = r9 * r4;  /* 0C07AA32 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C07AA36u, 3);  /* 0C07AA34 mov.l @(disp,pc),Rn */
	IF(0x0C07AA36u); r3 = MACL;  /* 0C07AA36 sts macl,Rn */
	r6 = 0x8Cu; UPD(0x0C07AA3Au, 2);  /* 0C07AA38 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C07AA3A add Rm,Rn */
	r3 += r6;  /* 0C07AA3C add Rm,Rn */
	r2 = R32(r3); UPD(0x0C07AA40u, 3);  /* 0C07AA3E mov.l @Rm,Rn */
	r5 = 0x1C000u; UPD(0x0C07AA42u, 1);  /* 0C07AA40 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C07AA42 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07AA16u, 4); goto L_0C07AA16; }  /* 0C07AA44 bf */
L_0C07AA46: BLKS(0x0C07AA46u);
	r1 = 0xFFFFF000u; UPD(0x0C07AA48u, 1);  /* 0C07AA46 mov.w @(disp,pc),Rn */
	{ r2 += r1; /* slot add Rm,Rn */ UPD(0x0C07AA14u, 3); goto L_0C07AA14; }  /* 0C07AA48 bra */
L_0C07AA50: BLKS(0x0C07AA50u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C07A9F4u, 3); goto L_0C07A9F4; }  /* 0C07AA50 bra */
L_0C07AA60: BLKS(0x0C07AA60u);
	{ r1 += 0xFFFFFFFEu; /* slot add #imm,Rn */ UPD(0x0C07A9EAu, 3); goto L_0C07A9EA; }  /* 0C07AA60 bra */
}

void f_0C07AAA0(sh3_t *c)
{
	LOCALS;
L_0C07AAA0: BLKS(0x0C07AAA0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07AAA2u, 1);  /* 0C07AAA0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07AAA4u, 1);  /* 0C07AAA2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07AAA6u, 1);  /* 0C07AAA4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C07AAA6 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07AAAAu, 2);  /* 0C07AAA8 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C07AAAA mov Rm,Rn */
	r8 = 0xC0A1700u; UPD(0x0C07AAAEu, 2);  /* 0C07AAAC mov.l @(disp,pc),Rn */
	IF(0x0C07AAAEu); r15 -= 4; W32(r15, PR); UPD(0x0C07AAB0u, 1);  /* 0C07AAAE sts.l pr,@-Rn */
	r10 = 0xC0A1590u; UPD(0x0C07AAB2u, 1);  /* 0C07AAB0 mov.l @(disp,pc),Rn */
	IF(0x0C07AAB2u); { u32 t_ = r8; PR = 0x0C07AAB6u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C07AAB6u); }  /* 0C07AAB2 jsr @Rn */
L_0C07AAB6: BLKS(0x0C07AAB6u);
	r8 = 0xB4u; UPD(0x0C07AAB8u, 1);  /* 0C07AAB6 mov.w @(disp,pc),Rn */
	IF(0x0C07AAB8u); { u32 t_ = r10; PR = 0x0C07AABCu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1590, 0x0C0A1590u, 0x0C07AABCu); }  /* 0C07AAB8 jsr @Rn */
L_0C07AABC: BLKS(0x0C07AABCu);
	IF(0x0C07AABCu); MACL = r9 * r8;  /* 0C07AABC mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C07AAC0u, 3);  /* 0C07AABE mov.l @(disp,pc),Rn */
	IF(0x0C07AAC0u); r8 = MACL;  /* 0C07AAC0 sts macl,Rn */
	r8 += r7;  /* 0C07AAC2 add Rm,Rn */
	r6 = 0x86u; UPD(0x0C07AAC6u, 3);  /* 0C07AAC4 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07AAC6 mov Rm,Rn */
	IF(0x0C07AAC8u); r4 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C07AACAu, 2);  /* 0C07AAC8 mov.w @(r0,Rm),Rn */
	r5 = 0x200u; UPD(0x0C07AACCu, 1);  /* 0C07AACA mov.w @(disp,pc),Rn */
	r0 = 0x1Fu;  /* 0C07AACC mov #imm,Rn */
	r4 += r5;  /* 0C07AACE add Rm,Rn */
	IF(0x0C07AAD0u); r4 >>= 8;  /* 0C07AAD0 shlr8 Rn */
	IF(0x0C07AAD2u); r4 >>= 2;  /* 0C07AAD2 shlr2 Rn */
	r4 &= r0;  /* 0C07AAD4 and Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C07AAD8u, 6);  /* 0C07AAD6 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C07AADAu, 1);  /* 0C07AAD8 mov.l Rm,@(disp,Rn) */
	IF(0x0C07AADAu); r0 <<= 2;  /* 0C07AADA shll2 Rn */
	r3 = 0xC18DDB8u; UPD(0x0C07AADEu, 2);  /* 0C07AADC mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C07AADE mov Rm,Rn */
	IF(0x0C07AAE0u); r2 = R32(r0 + r3); UPD(0x0C07AAE2u, 2);  /* 0C07AAE0 mov.l @(r0,Rm),Rn */
	r0 = 0xC0A03B0u; UPD(0x0C07AAE4u, 1);  /* 0C07AAE2 mov.l @(disp,pc),Rn */
	IF(0x0C07AAE4u); { u32 t_ = r0; PR = 0x0C07AAE8u; W32(r8 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C07AAE8u); }  /* 0C07AAE4 jsr @Rn */
L_0C07AAE8: BLKS(0x0C07AAE8u);
	r3 = R32(r8 + 0x24u); UPD(0x0C07AAEAu, 1);  /* 0C07AAE8 mov.l @(disp,Rm),Rn */
	r1 = 0xFF600000u; UPD(0x0C07AAECu, 1);  /* 0C07AAEA mov.l @(disp,pc),Rn */
	r1 += r3;  /* 0C07AAEC add Rm,Rn */
	IF(0x0C07AAEEu); T = (s32)r1 >= 0;  /* 0C07AAEE cmp/pz Rn */
	if (!T) { UPD(0x0C07ABC0u, 5); goto L_0C07ABC0; }  /* 0C07AAF0 bf */
L_0C07AAF2: BLKS(0x0C07AAF2u);
	r6 = 0x1000000u; UPD(0x0C07AAF4u, 1);  /* 0C07AAF2 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r6;  /* 0C07AAF4 cmp/gt Rm,Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C07AAF8u, 2);  /* 0C07AAF6 mov.l @(disp,Rm),Rn */
	IF(0x0C07AAF8u); r2 = T;  /* 0C07AAF8 movt Rn */
	r1 = 0xFE000000u; UPD(0x0C07AAFCu, 2);  /* 0C07AAFA mov.l @(disp,pc),Rn */
	r1 += r7;  /* 0C07AAFC add Rm,Rn */
	IF(0x0C07AAFEu); T = (s32)r1 >= 0;  /* 0C07AAFE cmp/pz Rn */
	if (!T) { UPD(0x0C07ABB0u, 5); goto L_0C07ABB0; }  /* 0C07AB00 bf */
L_0C07AB02: BLKS(0x0C07AB02u);
	T = (s32)r1 > (s32)r6;  /* 0C07AB02 cmp/gt Rm,Rn */
	IF(0x0C07AB04u); r4 = T;  /* 0C07AB04 movt Rn */
	r2 |= r4;  /* 0C07AB06 or Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07AB08 tst Rm,Rn */
	{ u32 c_ = T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07AB10u, 7); goto L_0C07AB10; } goto L_0C07AB0E; }  /* 0C07AB0A bt/s */
L_0C07AB0E: BLKS(0x0C07AB0Eu);
	W32(r8, r2); UPD(0x0C07AB10u, 2);  /* 0C07AB0E mov.l Rm,@Rn */
L_0C07AB10: BLKS(0x0C07AB10u);
	r0 = 0xFFFDFFFFu; UPD(0x0C07AB12u, 1);  /* 0C07AB10 mov.l @(disp,pc),Rn */
	r4 = 0x13BFFFEu; UPD(0x0C07AB14u, 1);  /* 0C07AB12 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C07AB14 add Rm,Rn */
	r2 = 0xFE9DFFFFu; UPD(0x0C07AB18u, 2);  /* 0C07AB16 mov.l @(disp,pc),Rn */
	T = r4 >= r3;  /* 0C07AB18 cmp/hs Rm,Rn */
	IF(0x0C07AB1Au); r0 = T;  /* 0C07AB1A movt Rn */
	r7 += r2;  /* 0C07AB1C add Rm,Rn */
	T = r4 >= r7;  /* 0C07AB1E cmp/hs Rm,Rn */
	r7 = 0xA8u; UPD(0x0C07AB22u, 5);  /* 0C07AB20 mov.w @(disp,pc),Rn */
	IF(0x0C07AB22u); r10 = T;  /* 0C07AB22 movt Rn */
	r0 &= r10;  /* 0C07AB24 and Rm,Rn */
	r7 += r8;  /* 0C07AB26 add Rm,Rn */
	r10 = r7;  /* 0C07AB28 mov Rm,Rn */
	r10 += 0x1u;  /* 0C07AB2A add #imm,Rn */
	r7 += 0x3u;  /* 0C07AB2C add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C07AB30u, 7);  /* 0C07AB2E mov.b @Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C07AB32u, 1);  /* 0C07AB30 mov.b @Rm,Rn */
	T = r6 > r5;  /* 0C07AB32 cmp/hi Rm,Rn */
	IF(0x0C07AB34u); r3 = T;  /* 0C07AB34 movt Rn */
	r0 &= r3;  /* 0C07AB36 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C07AB38 tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07AB44u, 7); goto L_0C07AB44; } goto L_0C07AB3E; }  /* 0C07AB3A bt/s */
L_0C07AB3E: BLKS(0x0C07AB3Eu);
	r3 = 0xA5u; UPD(0x0C07AB40u, 2);  /* 0C07AB3E mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07AB40 mov Rm,Rn */
	IF(0x0C07AB42u); W8(r0 + r3, r5); UPD(0x0C07AB44u, 2);  /* 0C07AB42 mov.b Rm,@(r0,Rn) */
L_0C07AB44: BLKS(0x0C07AB44u);
	r0 = 0xC0A9E40u; UPD(0x0C07AB46u, 1);  /* 0C07AB44 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C07AB46 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C07AB48 mov #imm,Rn */
	IF(0x0C07AB4Au); { u32 t_ = r0; PR = 0x0C07AB4Eu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07AB4Eu); }  /* 0C07AB4A jsr @Rn */
L_0C07AB4E: BLKS(0x0C07AB4Eu);
	T = (r0 & r0) == 0;  /* 0C07AB4E tst Rm,Rn */
	if (!T) { UPD(0x0C07AB60u, 4); goto L_0C07AB60; }  /* 0C07AB50 bf */
L_0C07AB52: BLKS(0x0C07AB52u);
	r15 = r14;  /* 0C07AB52 mov Rm,Rn */
	IF(0x0C07AB54u); PR = R32(r15); r15 += 4; UPD(0x0C07AB56u, 2);  /* 0C07AB54 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07AB58u, 1);  /* 0C07AB56 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07AB5Au, 1);  /* 0C07AB58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07AB5Cu, 1);  /* 0C07AB5A mov.l @Rm+,Rn */
	IF(0x0C07AB5Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07AB5C rts */
L_0C07AB60: BLKS(0x0C07AB60u);
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C07AB62u, 1);  /* 0C07AB60 mov.b @Rm,Rn */
	r10 = 0xC0A9BB0u; UPD(0x0C07AB64u, 1);  /* 0C07AB62 mov.l @(disp,pc),Rn */
	r6 = r1 & 0xFF;  /* 0C07AB64 extu.b Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C07AB68u, 2);  /* 0C07AB66 mov.l @(disp,Rm),Rn */
	IF(0x0C07AB68u); { u32 t_ = r10; PR = 0x0C07AB6Cu; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C07AB6Cu); }  /* 0C07AB68 jsr @Rn */
L_0C07AB6C: BLKS(0x0C07AB6Cu);
	T = (r0 & r0) == 0;  /* 0C07AB6C tst Rm,Rn */
	if (T) { UPD(0x0C07AB52u, 4); goto L_0C07AB52; }  /* 0C07AB6E bt */
L_0C07AB70: BLKS(0x0C07AB70u);
	r4 = r9;  /* 0C07AB70 mov Rm,Rn */
	r9 = 0xC058090u; UPD(0x0C07AB74u, 2);  /* 0C07AB72 mov.l @(disp,pc),Rn */
	r10 = 0xC057390u; UPD(0x0C07AB76u, 1);  /* 0C07AB74 mov.l @(disp,pc),Rn */
	IF(0x0C07AB76u); { u32 t_ = r9; PR = 0x0C07AB7Au; IF(0x0C07AB78u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C07AB7Au); }  /* 0C07AB76 jsr @Rn */
L_0C07AB7A: BLKS(0x0C07AB7Au);
	r4 = 0x280u; UPD(0x0C07AB7Cu, 1);  /* 0C07AB7A mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C07AB7C exts.w Rm,Rn */
	IF(0x0C07AB7Eu); MACL = r3 * r4;  /* 0C07AB7E mul.l Rm,Rn */
	r7 = 0xC283794u; UPD(0x0C07AB82u, 4);  /* 0C07AB80 mov.l @(disp,pc),Rn */
	IF(0x0C07AB82u); r0 = MACL;  /* 0C07AB82 sts macl,Rn */
	r0 += r7;  /* 0C07AB84 add Rm,Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C07AB88u, 3);  /* 0C07AB86 mov.l @(disp,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C07AB8Au, 1);  /* 0C07AB88 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C07AB8Cu, 1);  /* 0C07AB8A mov.l @(disp,Rm),Rn */
	IF(0x0C07AB8Cu); { u32 t_ = r10; PR = 0x0C07AB90u; r7 = R32(r0 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C07AB90u); }  /* 0C07AB8C jsr @Rn */
L_0C07AB90: BLKS(0x0C07AB90u);
	r6 = 0x30000u; UPD(0x0C07AB92u, 1);  /* 0C07AB90 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07AB92 add #imm,Rn */
	r9 = 0xC7C17D0u; UPD(0x0C07AB96u, 2);  /* 0C07AB94 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C07AB96 exts.w Rm,Rn */
	W32(r15, r6); UPD(0x0C07AB9Au, 2);  /* 0C07AB98 mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C07AB9A mov #imm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C07AB9Eu, 2);  /* 0C07AB9C mov.l @(disp,Rm),Rn */
	r7 = r2;  /* 0C07AB9E mov Rm,Rn */
	IF(0x0C07ABA0u); { u32 t_ = r9; PR = 0x0C07ABA4u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C7C17D0, 0x0C7C17D0u, 0x0C07ABA4u); }  /* 0C07ABA0 jsr @Rn */
L_0C07ABA4: BLKS(0x0C07ABA4u);
	{ IF(0x0C07ABA6u); ; /* slot nop */ UPD(0x0C07AB52u, 3); goto L_0C07AB52; }  /* 0C07ABA4 bra */
L_0C07ABB0: BLKS(0x0C07ABB0u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C07AB02u, 3); goto L_0C07AB02; }  /* 0C07ABB0 bra */
L_0C07ABC0: BLKS(0x0C07ABC0u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C07AAF2u, 3); goto L_0C07AAF2; }  /* 0C07ABC0 bra */
}

void f_0C07AC20(sh3_t *c)
{
	LOCALS;
L_0C07AC20: BLKS(0x0C07AC20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07AC22u, 1);  /* 0C07AC20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07AC24u, 1);  /* 0C07AC22 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07AC26u, 1);  /* 0C07AC24 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07AC28u, 1);  /* 0C07AC26 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C07AC2Au, 1);  /* 0C07AC28 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07AC2A exts.w Rm,Rn */
	IF(0x0C07AC2Cu); MACL = r11 * r0;  /* 0C07AC2C mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07AC30u, 4);  /* 0C07AC2E mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C07AC32u, 1);  /* 0C07AC30 mov.l @(disp,pc),Rn */
	IF(0x0C07AC32u); r8 = MACL;  /* 0C07AC32 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07AC36u, 2);  /* 0C07AC34 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C07AC36 add Rm,Rn */
	r9 = 0x9Fu; UPD(0x0C07AC3Au, 2);  /* 0C07AC38 mov.w @(disp,pc),Rn */
	IF(0x0C07AC3Au); r15 -= 4; W32(r15, PR); UPD(0x0C07AC3Cu, 1);  /* 0C07AC3A sts.l pr,@-Rn */
	r9 += r8;  /* 0C07AC3C add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C07AC40u, 2);  /* 0C07AC3E mov.b @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C07AC40 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C07AC42 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07AC4Cu, 5); goto L_0C07AC4C; } goto L_0C07AC48; }  /* 0C07AC44 bf/s */
L_0C07AC48: BLKS(0x0C07AC48u);
	{ IF(0x0C07AC4Au); ; /* slot nop */ UPD(0x0C07ADC0u, 4); goto L_0C07ADC0; }  /* 0C07AC48 bra */
L_0C07AC4C: BLKS(0x0C07AC4Cu);
	T = r0 == 0x1u;  /* 0C07AC4C cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C07AC56u, 4); goto L_0C07AC56; }  /* 0C07AC4E bf */
L_0C07AC50: BLKS(0x0C07AC50u);
	r1 = R32(r8 + 0x24u); UPD(0x0C07AC52u, 1);  /* 0C07AC50 mov.l @(disp,Rm),Rn */
	{ r8 += 0x50u; /* slot add #imm,Rn */ UPD(0x0C07ADB0u, 3); goto L_0C07ADB0; }  /* 0C07AC52 bra */
L_0C07AC56: BLKS(0x0C07AC56u);
	r3 = 0xC07A980u; UPD(0x0C07AC58u, 1);  /* 0C07AC56 mov.l @(disp,pc),Rn */
	IF(0x0C07AC58u); { u32 t_ = r3; PR = 0x0C07AC5Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C07A980, 0x0C07A980u, 0x0C07AC5Cu); }  /* 0C07AC58 jsr @Rn */
L_0C07AC5C: BLKS(0x0C07AC5Cu);
	r9 = 0xB4u; UPD(0x0C07AC5Eu, 1);  /* 0C07AC5C mov.w @(disp,pc),Rn */
	IF(0x0C07AC5Eu); MACL = r11 * r9;  /* 0C07AC5E mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C07AC62u, 3);  /* 0C07AC60 mov.l @(disp,pc),Rn */
	IF(0x0C07AC62u); r9 = MACL;  /* 0C07AC62 sts macl,Rn */
	r8 = 0xC058060u; UPD(0x0C07AC66u, 2);  /* 0C07AC64 mov.l @(disp,pc),Rn */
	r9 += r7;  /* 0C07AC66 add Rm,Rn */
	r10 = 0x86u; UPD(0x0C07AC6Au, 2);  /* 0C07AC68 mov.w @(disp,pc),Rn */
	r12 = 0x8Cu; UPD(0x0C07AC6Cu, 1);  /* 0C07AC6A mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C07AC6C add Rm,Rn */
	r12 += r9;  /* 0C07AC6E add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C07AC72u, 3);  /* 0C07AC70 mov.w @Rm,Rn */
	IF(0x0C07AC72u); { u32 t_ = r8; PR = 0x0C07AC76u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07AC76u); }  /* 0C07AC72 jsr @Rn */
L_0C07AC76: BLKS(0x0C07AC76u);
	r8 = 0xC058030u; UPD(0x0C07AC78u, 1);  /* 0C07AC76 mov.l @(disp,pc),Rn */
	r5 = R32(r12); UPD(0x0C07AC7Au, 1);  /* 0C07AC78 mov.l @Rm,Rn */
	W32(r9 + 0x2Cu, r0); UPD(0x0C07AC7Cu, 1);  /* 0C07AC7A mov.l Rm,@(disp,Rn) */
	IF(0x0C07AC7Cu); { u32 t_ = r8; PR = 0x0C07AC80u; r4 = (u32)(s32)(s16)R16(r10); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07AC80u); }  /* 0C07AC7C jsr @Rn */
L_0C07AC80: BLKS(0x0C07AC80u);
	r5 = R32(r9 + 0x24u); UPD(0x0C07AC82u, 1);  /* 0C07AC80 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C07AC84u, 1);  /* 0C07AC82 mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C07AC86u, 1);  /* 0C07AC84 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C07AC86 add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C07AC8Au, 2);  /* 0C07AC88 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C07AC8A add Rm,Rn */
	r3 += r5;  /* 0C07AC8C add Rm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C07AC90u, 3);  /* 0C07AC8E mov.l Rm,@(disp,Rn) */
	IF(0x0C07AC90u); T = (s32)r3 >= 0;  /* 0C07AC90 cmp/pz Rn */
	W32(r9 + 0x24u, r5); UPD(0x0C07AC94u, 2);  /* 0C07AC92 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r9 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07AC9Cu, 3); goto L_0C07AC9C; } UPD(0x0C07AC98u, 1); goto L_0C07AC98; }  /* 0C07AC94 bt/s */
L_0C07AC98: BLKS(0x0C07AC98u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C07ADA0u, 3); goto L_0C07ADA0; }  /* 0C07AC98 bra */
L_0C07AC9C: BLKS(0x0C07AC9Cu);
	r0 = 0xD00000u; UPD(0x0C07AC9Eu, 1);  /* 0C07AC9C mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r0;  /* 0C07AC9E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C07ACBAu, 4); goto L_0C07ACBA; }  /* 0C07ACA0 bt */
L_0C07ACA2: BLKS(0x0C07ACA2u);
	r2 = 0xC3929E0u; UPD(0x0C07ACA4u, 1);  /* 0C07ACA2 mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C07ACA6u, 1);  /* 0C07ACA4 mov.l @Rm,Rn */
	r4 = 0xFF880000u; UPD(0x0C07ACA8u, 1);  /* 0C07ACA6 mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C07ACA8 mov Rm,Rn */
	r2 -= r3;  /* 0C07ACAA sub Rm,Rn */
	r2 += r4;  /* 0C07ACAC add Rm,Rn */
	IF(0x0C07ACAEu); T = (s32)r2 >= 0;  /* 0C07ACAE cmp/pz Rn */
	if (!T) { UPD(0x0C07AD90u, 7); goto L_0C07AD90; }  /* 0C07ACB0 bf */
L_0C07ACB2: BLKS(0x0C07ACB2u);
	r5 = 0xA80000u; UPD(0x0C07ACB4u, 1);  /* 0C07ACB2 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C07ACB4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07AD70u, 4); goto L_0C07AD70; } UPD(0x0C07ACBAu, 1); goto L_0C07ACBA; }  /* 0C07ACB6 bf/s */
L_0C07ACBA: BLKS(0x0C07ACBAu);
	r10 = 0x0u;  /* 0C07ACBA mov #imm,Rn */
	W32(r9, r10); UPD(0x0C07ACBEu, 2);  /* 0C07ACBC mov.l Rm,@Rn */
	r1 = 0x1u;  /* 0C07ACBE mov #imm,Rn */
	UPD(0x0C07ACC0u, 1);
L_0C07ACC0: BLKS(0x0C07ACC0u);
	r7 = (u32)(s32)(s16)r1;  /* 0C07ACC0 exts.w Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C07ACC2 tst Rm,Rn */
	if (T) { UPD(0x0C07ACE0u, 5); goto L_0C07ACE0; }  /* 0C07ACC4 bt */
L_0C07ACC6: BLKS(0x0C07ACC6u);
	r15 = r14;  /* 0C07ACC6 mov Rm,Rn */
	IF(0x0C07ACC8u); PR = R32(r15); r15 += 4; UPD(0x0C07ACCAu, 2);  /* 0C07ACC8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07ACCCu, 1);  /* 0C07ACCA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07ACCEu, 1);  /* 0C07ACCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07ACD0u, 1);  /* 0C07ACCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07ACD2u, 1);  /* 0C07ACD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07ACD4u, 1);  /* 0C07ACD2 mov.l @Rm+,Rn */
	IF(0x0C07ACD4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07ACD4 rts */
L_0C07ACE0: BLKS(0x0C07ACE0u);
	r9 = 0xC0A9E40u; UPD(0x0C07ACE2u, 1);  /* 0C07ACE0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07ACE2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C07ACE4 mov #imm,Rn */
	IF(0x0C07ACE6u); { u32 t_ = r9; PR = 0x0C07ACEAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07ACEAu); }  /* 0C07ACE6 jsr @Rn */
L_0C07ACEA: BLKS(0x0C07ACEAu);
	T = (r0 & r0) == 0;  /* 0C07ACEA tst Rm,Rn */
	if (T) { UPD(0x0C07ACC6u, 4); goto L_0C07ACC6; }  /* 0C07ACEC bt */
L_0C07ACEE: BLKS(0x0C07ACEEu);
	r2 = 0xB4u; UPD(0x0C07ACF0u, 1);  /* 0C07ACEE mov.w @(disp,pc),Rn */
	IF(0x0C07ACF0u); MACL = r11 * r2;  /* 0C07ACF0 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07ACF4u, 3);  /* 0C07ACF2 mov.l @(disp,pc),Rn */
	IF(0x0C07ACF4u); r12 = MACL;  /* 0C07ACF4 sts macl,Rn */
	r12 += r0;  /* 0C07ACF6 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C07ACFAu, 3);  /* 0C07ACF8 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C07ACFA mov Rm,Rn */
	IF(0x0C07ACFCu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07ACFEu, 2);  /* 0C07ACFC mov.b @(r0,Rm),Rn */
	r10 = 0xC0A9BB0u; UPD(0x0C07AD00u, 1);  /* 0C07ACFE mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C07AD00 extu.b Rm,Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C07AD04u, 2);  /* 0C07AD02 mov.l @(disp,Rm),Rn */
	IF(0x0C07AD04u); { u32 t_ = r10; PR = 0x0C07AD08u; r5 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C07AD08u); }  /* 0C07AD04 jsr @Rn */
L_0C07AD08: BLKS(0x0C07AD08u);
	T = (r0 & r0) == 0;  /* 0C07AD08 tst Rm,Rn */
	if (T) { UPD(0x0C07ACC6u, 4); goto L_0C07ACC6; }  /* 0C07AD0A bt */
L_0C07AD0C: BLKS(0x0C07AD0Cu);
	r4 = r11;  /* 0C07AD0C mov Rm,Rn */
	r11 = 0xC058090u; UPD(0x0C07AD10u, 2);  /* 0C07AD0E mov.l @(disp,pc),Rn */
	r10 = 0xC057390u; UPD(0x0C07AD12u, 1);  /* 0C07AD10 mov.l @(disp,pc),Rn */
	IF(0x0C07AD12u); { u32 t_ = r11; PR = 0x0C07AD16u; IF(0x0C07AD14u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C07AD16u); }  /* 0C07AD12 jsr @Rn */
L_0C07AD16: BLKS(0x0C07AD16u);
	r7 = 0x280u; UPD(0x0C07AD18u, 1);  /* 0C07AD16 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C07AD18 exts.w Rm,Rn */
	IF(0x0C07AD1Au); MACL = r4 * r7;  /* 0C07AD1A mul.l Rm,Rn */
	r6 = 0xC283794u; UPD(0x0C07AD1Eu, 4);  /* 0C07AD1C mov.l @(disp,pc),Rn */
	IF(0x0C07AD1Eu); r3 = MACL;  /* 0C07AD1E sts macl,Rn */
	r3 += r6;  /* 0C07AD20 add Rm,Rn */
	r8 = 0x86u; UPD(0x0C07AD24u, 3);  /* 0C07AD22 mov.w @(disp,pc),Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C07AD26u, 1);  /* 0C07AD24 mov.l @(disp,Rm),Rn */
	r8 += r12;  /* 0C07AD26 add Rm,Rn */
	r7 = R32(r3 + 0x14u); UPD(0x0C07AD2Au, 2);  /* 0C07AD28 mov.l @(disp,Rm),Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C07AD2Cu, 1);  /* 0C07AD2A mov.l @(disp,Rm),Rn */
	IF(0x0C07AD2Cu); { u32 t_ = r10; PR = 0x0C07AD30u; r5 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C07AD30u); }  /* 0C07AD2C jsr @Rn */
L_0C07AD30: BLKS(0x0C07AD30u);
	r9 = 0xC058060u; UPD(0x0C07AD32u, 1);  /* 0C07AD30 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C07AD32 exts.w Rm,Rn */
	r10 = 0x80000u; UPD(0x0C07AD36u, 2);  /* 0C07AD34 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C07AD38u, 1);  /* 0C07AD36 mov.w @Rm,Rn */
	IF(0x0C07AD38u); { u32 t_ = r9; PR = 0x0C07AD3Cu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07AD3Cu); }  /* 0C07AD38 jsr @Rn */
L_0C07AD3C: BLKS(0x0C07AD3Cu);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C07AD3Eu, 1);  /* 0C07AD3C mov.w @Rm,Rn */
	r5 = r10;  /* 0C07AD3E mov Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C07AD42u, 2);  /* 0C07AD40 mov.l @(disp,pc),Rn */
	r9 = R32(r12 + 0x24u); UPD(0x0C07AD44u, 1);  /* 0C07AD42 mov.l @(disp,Rm),Rn */
	IF(0x0C07AD44u); { u32 t_ = r8; PR = 0x0C07AD48u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07AD48u); }  /* 0C07AD44 jsr @Rn */
L_0C07AD48: BLKS(0x0C07AD48u);
	r6 = R32(r12 + 0x28u); UPD(0x0C07AD4Au, 1);  /* 0C07AD48 mov.l @(disp,Rm),Rn */
	r7 = r11;  /* 0C07AD4A mov Rm,Rn */
	r5 = 0xC17792Au; UPD(0x0C07AD4Eu, 2);  /* 0C07AD4C mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07AD4E add #imm,Rn */
	r11 = 0xC7C1710u; UPD(0x0C07AD52u, 2);  /* 0C07AD50 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C07AD52 add Rm,Rn */
	r12 = 0x30000u; UPD(0x0C07AD56u, 2);  /* 0C07AD54 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C07AD56 mov #imm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07AD5Au, 2);  /* 0C07AD58 mov.l Rm,@(disp,Rn) */
	W32(r15, r12); UPD(0x0C07AD5Cu, 1);  /* 0C07AD5A mov.l Rm,@Rn */
	IF(0x0C07AD5Cu); { u32 t_ = r11; PR = 0x0C07AD60u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1710, 0x0C7C1710u, 0x0C07AD60u); }  /* 0C07AD5C jsr @Rn */
L_0C07AD60: BLKS(0x0C07AD60u);
	{ IF(0x0C07AD62u); ; /* slot nop */ UPD(0x0C07ACC6u, 3); goto L_0C07ACC6; }  /* 0C07AD60 bra */
L_0C07AD70: BLKS(0x0C07AD70u);
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C07AD72u, 1);  /* 0C07AD70 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C07AD72 add #imm,Rn */
	IF(0x0C07AD74u); r0 >>= 2;  /* 0C07AD74 shlr2 Rn */
	IF(0x0C07AD76u); r0 >>= 2;  /* 0C07AD76 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C07AD78 and #imm,r0 */
	W32(r9 + 0x8u, r0); UPD(0x0C07AD7Cu, 5);  /* 0C07AD7A mov.l Rm,@(disp,Rn) */
	r0 = R32(r9 + 0xCu); UPD(0x0C07AD7Eu, 1);  /* 0C07AD7C mov.l @(disp,Rm),Rn */
	r8 = 0xC18DDC4u; UPD(0x0C07AD80u, 1);  /* 0C07AD7E mov.l @(disp,pc),Rn */
	IF(0x0C07AD80u); r0 <<= 2;  /* 0C07AD80 shll2 Rn */
	r6 = 0xC0A03B0u; UPD(0x0C07AD84u, 2);  /* 0C07AD82 mov.l @(disp,pc),Rn */
	IF(0x0C07AD84u); r12 = R32(r0 + r8); UPD(0x0C07AD86u, 1);  /* 0C07AD84 mov.l @(r0,Rm),Rn */
	IF(0x0C07AD86u); { u32 t_ = r6; PR = 0x0C07AD8Au; W32(r9 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C07AD8Au); }  /* 0C07AD86 jsr @Rn */
L_0C07AD8A: BLKS(0x0C07AD8Au);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C07ACC0u, 3); goto L_0C07ACC0; }  /* 0C07AD8A bra */
L_0C07AD90: BLKS(0x0C07AD90u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C07ACB2u, 3); goto L_0C07ACB2; }  /* 0C07AD90 bra */
L_0C07ADA0: BLKS(0x0C07ADA0u);
	{ IF(0x0C07ADA2u); ; /* slot nop */ UPD(0x0C07AC9Cu, 3); goto L_0C07AC9C; }  /* 0C07ADA0 bra */
L_0C07ADB0: BLKS(0x0C07ADB0u);
	r4 = R32(r8); UPD(0x0C07ADB2u, 1);  /* 0C07ADB0 mov.l @Rm,Rn */
	T = (s32)r1 >= (s32)r4;  /* 0C07ADB2 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07ADBCu, 4); goto L_0C07ADBC; } UPD(0x0C07ADB8u, 1); goto L_0C07ADB8; }  /* 0C07ADB4 bt/s */
L_0C07ADB8: BLKS(0x0C07ADB8u);
	r1 += 0x1u;  /* 0C07ADB8 add #imm,Rn */
	W8(r9, r1); UPD(0x0C07ADBCu, 2);  /* 0C07ADBA mov.b Rm,@Rn */
L_0C07ADBC: BLKS(0x0C07ADBCu);
	{ IF(0x0C07ADBEu); ; /* slot nop */ UPD(0x0C07AC5Cu, 3); goto L_0C07AC5C; }  /* 0C07ADBC bra */
L_0C07ADC0: BLKS(0x0C07ADC0u);
	r10 = 0xC050D70u; UPD(0x0C07ADC2u, 1);  /* 0C07ADC0 mov.l @(disp,pc),Rn */
	r4 = 0xC0u; UPD(0x0C07ADC4u, 1);  /* 0C07ADC2 mov.w @(disp,pc),Rn */
	IF(0x0C07ADC4u); { u32 t_ = r10; PR = 0x0C07ADC8u; r8 += 0x50u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C07ADC8u); }  /* 0C07ADC4 jsr @Rn */
L_0C07ADC8: BLKS(0x0C07ADC8u);
	r2 = 0x80u; UPD(0x0C07ADCAu, 1);  /* 0C07ADC8 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C07ADCA add Rm,Rn */
	IF(0x0C07ADCCu); r0 <<= 16;  /* 0C07ADCC shll16 Rn */
	W32(r8, r0); UPD(0x0C07ADD0u, 3);  /* 0C07ADCE mov.l Rm,@Rn */
	{ r1 = (u32)(s32)(s8)R8(r9); /* slot mov.b @Rm,Rn */ UPD(0x0C07ADB8u, 3); goto L_0C07ADB8; }  /* 0C07ADD0 bra */
}

void f_0C07AE40(sh3_t *c)
{
	LOCALS;
L_0C07AE40: BLKS(0x0C07AE40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07AE42u, 1);  /* 0C07AE40 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07AE44u, 1);  /* 0C07AE42 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C07AE44 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07AE48u, 2);  /* 0C07AE46 mov.l Rm,@-Rn */
	r4 = 0xB4u; UPD(0x0C07AE4Au, 1);  /* 0C07AE48 mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07AE4Cu, 1);  /* 0C07AE4A mov.l Rm,@-Rn */
	IF(0x0C07AE4Cu); MACL = r9 * r4;  /* 0C07AE4C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07AE50u, 3);  /* 0C07AE4E mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C07AE52u, 1);  /* 0C07AE50 mov.l @(disp,pc),Rn */
	IF(0x0C07AE52u); r8 = MACL;  /* 0C07AE52 sts macl,Rn */
	IF(0x0C07AE54u); r15 -= 4; W32(r15, PR); UPD(0x0C07AE56u, 2);  /* 0C07AE54 sts.l pr,@-Rn */
	r8 += r0;  /* 0C07AE56 add Rm,Rn */
	r0 = R32(r8 + 0x24u); UPD(0x0C07AE5Au, 2);  /* 0C07AE58 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C07AE5A mov Rm,Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C07AE5Eu, 2);  /* 0C07AE5C mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C07AE60u, 1);  /* 0C07AE5E mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C07AE60 add Rm,Rn */
	r2 = R32(r8 + 0x30u); UPD(0x0C07AE64u, 2);  /* 0C07AE62 mov.l @(disp,Rm),Rn */
	r3 = 0xFF600000u; UPD(0x0C07AE66u, 1);  /* 0C07AE64 mov.l @(disp,pc),Rn */
	r7 += r2;  /* 0C07AE66 add Rm,Rn */
	r3 += r0;  /* 0C07AE68 add Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C07AE6Cu, 3);  /* 0C07AE6A mov.l Rm,@(disp,Rn) */
	IF(0x0C07AE6Cu); T = (s32)r3 >= 0;  /* 0C07AE6C cmp/pz Rn */
	{ u32 c_ = T; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07AE76u, 4); goto L_0C07AE76; } UPD(0x0C07AE72u, 1); goto L_0C07AE72; }  /* 0C07AE6E bt/s */
L_0C07AE72: BLKS(0x0C07AE72u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C07AF90u, 3); goto L_0C07AF90; }  /* 0C07AE72 bra */
L_0C07AE76: BLKS(0x0C07AE76u);
	r5 = 0xD00000u; UPD(0x0C07AE78u, 1);  /* 0C07AE76 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r5;  /* 0C07AE78 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C07AE94u, 4); goto L_0C07AE94; }  /* 0C07AE7A bt */
L_0C07AE7C: BLKS(0x0C07AE7Cu);
	r2 = r7;  /* 0C07AE7C mov Rm,Rn */
	r11 = 0xC3929E0u; UPD(0x0C07AE80u, 2);  /* 0C07AE7E mov.l @(disp,pc),Rn */
	r10 = R32(r11); UPD(0x0C07AE82u, 1);  /* 0C07AE80 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C07AE84u, 1);  /* 0C07AE82 mov.l @(disp,pc),Rn */
	r2 -= r10;  /* 0C07AE84 sub Rm,Rn */
	r2 += r6;  /* 0C07AE86 add Rm,Rn */
	IF(0x0C07AE88u); T = (s32)r2 >= 0;  /* 0C07AE88 cmp/pz Rn */
	if (T) { UPD(0x0C07AE8Eu, 6); goto L_0C07AE8E; }  /* 0C07AE8A bt */
L_0C07AE8C: BLKS(0x0C07AE8Cu);
	r2 = 0u - r2;  /* 0C07AE8C neg Rm,Rn */
	UPD(0x0C07AE8Eu, 1);
L_0C07AE8E: BLKS(0x0C07AE8Eu);
	r7 = 0xA80000u; UPD(0x0C07AE90u, 1);  /* 0C07AE8E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C07AE90 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07AEB0u, 4); goto L_0C07AEB0; }  /* 0C07AE92 bf */
L_0C07AE94: BLKS(0x0C07AE94u);
	r9 = 0x0u;  /* 0C07AE94 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C07AE98u, 2);  /* 0C07AE96 mov.l Rm,@Rn */
L_0C07AE98: BLKS(0x0C07AE98u);
	r15 = r14;  /* 0C07AE98 mov Rm,Rn */
	IF(0x0C07AE9Au); PR = R32(r15); r15 += 4; UPD(0x0C07AE9Cu, 2);  /* 0C07AE9A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07AE9Eu, 1);  /* 0C07AE9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07AEA0u, 1);  /* 0C07AE9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07AEA2u, 1);  /* 0C07AEA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07AEA4u, 1);  /* 0C07AEA2 mov.l @Rm+,Rn */
	IF(0x0C07AEA4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07AEA4 rts */
L_0C07AEB0: BLKS(0x0C07AEB0u);
	r0 = R32(r8 + 0xCu); UPD(0x0C07AEB2u, 1);  /* 0C07AEB0 mov.l @(disp,Rm),Rn */
	r4 = 0xC18DDD0u; UPD(0x0C07AEB4u, 1);  /* 0C07AEB2 mov.l @(disp,pc),Rn */
	IF(0x0C07AEB4u); r0 <<= 2;  /* 0C07AEB4 shll2 Rn */
	r11 = 0xC0A03B0u; UPD(0x0C07AEB8u, 2);  /* 0C07AEB6 mov.l @(disp,pc),Rn */
	IF(0x0C07AEB8u); r3 = R32(r0 + r4); UPD(0x0C07AEBAu, 1);  /* 0C07AEB8 mov.l @(r0,Rm),Rn */
	r10 = 0x9Fu; UPD(0x0C07AEBCu, 1);  /* 0C07AEBA mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C07AEBC mov Rm,Rn */
	W32(r8 + 0xCu, r3); UPD(0x0C07AEC0u, 2);  /* 0C07AEBE mov.l Rm,@(disp,Rn) */
	IF(0x0C07AEC0u); { u32 t_ = r11; PR = 0x0C07AEC4u; r10 += r8; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C07AEC4u); }  /* 0C07AEC0 jsr @Rn */
L_0C07AEC4: BLKS(0x0C07AEC4u);
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C07AEC6u, 1);  /* 0C07AEC4 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C07AEC6 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C07AEC8 tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C07AF50u, 5); goto L_0C07AF50; } goto L_0C07AECE; }  /* 0C07AECA bt/s */
L_0C07AECE: BLKS(0x0C07AECEu);
	if (!T) { UPD(0x0C07AE98u, 4); goto L_0C07AE98; }  /* 0C07AECE bf */
L_0C07AED0: BLKS(0x0C07AED0u);
	r10 = R32(r8 + 0x30u); UPD(0x0C07AED2u, 1);  /* 0C07AED0 mov.l @(disp,Rm),Rn */
	r0 = 0x8Cu; UPD(0x0C07AED4u, 1);  /* 0C07AED2 mov.w @(disp,pc),Rn */
	r6 = 0x98u; UPD(0x0C07AED6u, 1);  /* 0C07AED4 mov.w @(disp,pc),Rn */
	IF(0x0C07AED6u); r7 = R32(r0 + r8); UPD(0x0C07AED8u, 1);  /* 0C07AED6 mov.l @(r0,Rm),Rn */
	r6 += r8;  /* 0C07AED8 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C07AEDCu, 2);  /* 0C07AEDA mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C07AEDC add #imm,Rn */
	W8(r6, r0); UPD(0x0C07AEE0u, 2);  /* 0C07AEDE mov.b Rm,@Rn */
	r10 += r7;  /* 0C07AEE0 add Rm,Rn */
	r0 &= 0x1u;  /* 0C07AEE2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07AEE4 tst Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x30u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07AF30u, 6); goto L_0C07AF30; } UPD(0x0C07AEEAu, 1); goto L_0C07AEEA; }  /* 0C07AEE6 bf/s */
L_0C07AEEA: BLKS(0x0C07AEEAu);
	r4 = r9;  /* 0C07AEEA mov Rm,Rn */
	UPD(0x0C07AEECu, 1);
L_0C07AEEC: BLKS(0x0C07AEECu);
	r9 = 0xC0A9E40u; UPD(0x0C07AEEEu, 1);  /* 0C07AEEC mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C07AEEE mov #imm,Rn */
	IF(0x0C07AEF0u); { u32 t_ = r9; PR = 0x0C07AEF4u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07AEF4u); }  /* 0C07AEF0 jsr @Rn */
L_0C07AEF4: BLKS(0x0C07AEF4u);
	T = (r0 & r0) == 0;  /* 0C07AEF4 tst Rm,Rn */
	if (T) { UPD(0x0C07AE98u, 4); goto L_0C07AE98; }  /* 0C07AEF6 bt */
L_0C07AEF8: BLKS(0x0C07AEF8u);
	r0 = r8;  /* 0C07AEF8 mov Rm,Rn */
	r2 = 0xA9u; UPD(0x0C07AEFCu, 2);  /* 0C07AEFA mov.w @(disp,pc),Rn */
	r11 = 0xC0A9BB0u; UPD(0x0C07AEFEu, 1);  /* 0C07AEFC mov.l @(disp,pc),Rn */
	IF(0x0C07AEFEu); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07AF00u, 1);  /* 0C07AEFE mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C07AF02u, 1);  /* 0C07AF00 mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C07AF02 extu.b Rm,Rn */
	IF(0x0C07AF04u); { u32 t_ = r11; PR = 0x0C07AF08u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C07AF08u); }  /* 0C07AF04 jsr @Rn */
L_0C07AF08: BLKS(0x0C07AF08u);
	T = (r0 & r0) == 0;  /* 0C07AF08 tst Rm,Rn */
	if (T) { UPD(0x0C07AE98u, 4); goto L_0C07AE98; }  /* 0C07AF0A bt */
L_0C07AF0C: BLKS(0x0C07AF0Cu);
	r15 += 0xFFFFFFFCu;  /* 0C07AF0C add #imm,Rn */
	r0 = 0x30000u; UPD(0x0C07AF10u, 2);  /* 0C07AF0E mov.l @(disp,pc),Rn */
	W32(r15, r0); UPD(0x0C07AF12u, 1);  /* 0C07AF10 mov.l Rm,@Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C07AF14u, 1);  /* 0C07AF12 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C07AF16u, 1);  /* 0C07AF14 mov.l @(disp,Rm),Rn */
	r8 = 0xC7C1608u; UPD(0x0C07AF18u, 1);  /* 0C07AF16 mov.l @(disp,pc),Rn */
	r7 = 0x100u; UPD(0x0C07AF1Au, 1);  /* 0C07AF18 mov.w @(disp,pc),Rn */
	IF(0x0C07AF1Au); { u32 t_ = r8; PR = 0x0C07AF1Eu; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1608, 0x0C7C1608u, 0x0C07AF1Eu); }  /* 0C07AF1A jsr @Rn */
L_0C07AF1E: BLKS(0x0C07AF1Eu);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07AE98u, 3); goto L_0C07AE98; }  /* 0C07AF1E bra */
L_0C07AF30: BLKS(0x0C07AF30u);
	r0 = R32(r8 + 0x8u); UPD(0x0C07AF32u, 1);  /* 0C07AF30 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C07AF32 mov Rm,Rn */
	r8 += 0x50u;  /* 0C07AF34 add #imm,Rn */
	r5 = R32(r8); UPD(0x0C07AF38u, 3);  /* 0C07AF36 mov.l @Rm,Rn */
	r0 += r5;  /* 0C07AF38 add Rm,Rn */
	r8 += 0xFFFFFFB0u;  /* 0C07AF3A add #imm,Rn */
	r0 &= 0x1Fu;  /* 0C07AF3C and #imm,r0 */
	IF(0x0C07AF3Eu); { u32 t_ = r11; PR = 0x0C07AF42u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C07AF42u); }  /* 0C07AF3E jsr @Rn */
L_0C07AF42: BLKS(0x0C07AF42u);
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C07AEECu, 3); goto L_0C07AEEC; }  /* 0C07AF42 bra */
L_0C07AF50: BLKS(0x0C07AF50u);
	W32(r8 + 0x30u, r0); UPD(0x0C07AF52u, 1);  /* 0C07AF50 mov.l Rm,@(disp,Rn) */
	r5 = 0xFFFD8000u; UPD(0x0C07AF54u, 1);  /* 0C07AF52 mov.l @(disp,pc),Rn */
	r1 = R32(r8 + 0x24u); UPD(0x0C07AF56u, 1);  /* 0C07AF54 mov.l @(disp,Rm),Rn */
	r0 = 0x1000000u; UPD(0x0C07AF58u, 1);  /* 0C07AF56 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r0;  /* 0C07AF58 cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x2Cu, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07AE98u, 4); goto L_0C07AE98; } UPD(0x0C07AF5Eu, 1); goto L_0C07AF5E; }  /* 0C07AF5A bt/s */
L_0C07AF5E: BLKS(0x0C07AF5Eu);
	r11 = 0xC058090u; UPD(0x0C07AF60u, 1);  /* 0C07AF5E mov.l @(disp,pc),Rn */
	IF(0x0C07AF60u); { u32 t_ = r11; PR = 0x0C07AF64u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C07AF64u); }  /* 0C07AF60 jsr @Rn */
L_0C07AF64: BLKS(0x0C07AF64u);
	r4 = 0x280u; UPD(0x0C07AF66u, 1);  /* 0C07AF64 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C07AF66 exts.w Rm,Rn */
	IF(0x0C07AF68u); MACL = r1 * r4;  /* 0C07AF68 mul.l Rm,Rn */
	r3 = 0xC283794u; UPD(0x0C07AF6Cu, 4);  /* 0C07AF6A mov.l @(disp,pc),Rn */
	IF(0x0C07AF6Cu); r2 = MACL;  /* 0C07AF6C sts macl,Rn */
	r3 += r2;  /* 0C07AF6E add Rm,Rn */
	r9 = R32(r8 + 0x28u); UPD(0x0C07AF72u, 3);  /* 0C07AF70 mov.l @(disp,Rm),Rn */
	r11 = R32(r3 + 0x14u); UPD(0x0C07AF74u, 1);  /* 0C07AF72 mov.l @(disp,Rm),Rn */
	r7 = 0x1000u; UPD(0x0C07AF76u, 1);  /* 0C07AF74 mov.w @(disp,pc),Rn */
	T = (s32)r9 > (s32)r11;  /* 0C07AF76 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07AF80u, 4); goto L_0C07AF80; } goto L_0C07AF7C; }  /* 0C07AF78 bf/s */
L_0C07AF7C: BLKS(0x0C07AF7Cu);
	r7 = 0xFFFFF000u; UPD(0x0C07AF7Eu, 2);  /* 0C07AF7C mov.w @(disp,pc),Rn */
	r6 = 0xFFFFFFFFu;  /* 0C07AF7E mov #imm,Rn */
	UPD(0x0C07AF80u, 1);
L_0C07AF80: BLKS(0x0C07AF80u);
	r0 = 0x8Cu; UPD(0x0C07AF82u, 1);  /* 0C07AF80 mov.w @(disp,pc),Rn */
	IF(0x0C07AF82u); W32(r0 + r8, r7); UPD(0x0C07AF84u, 1);  /* 0C07AF82 mov.l Rm,@(r0,Rn) */
	r8 += 0x50u;  /* 0C07AF84 add #imm,Rn */
	W32(r8, r6); UPD(0x0C07AF88u, 2);  /* 0C07AF86 mov.l Rm,@Rn */
	r8 = (u32)(s32)(s8)R8(r10); UPD(0x0C07AF8Au, 1);  /* 0C07AF88 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C07AF8A add #imm,Rn */
	{ W8(r10, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C07AE98u, 4); goto L_0C07AE98; }  /* 0C07AF8C bra */
L_0C07AF90: BLKS(0x0C07AF90u);
	{ IF(0x0C07AF92u); ; /* slot nop */ UPD(0x0C07AE76u, 3); goto L_0C07AE76; }  /* 0C07AF90 bra */
}

void f_0C07AFF0(sh3_t *c)
{
	LOCALS;
L_0C07AFF0: BLKS(0x0C07AFF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07AFF2u, 1);  /* 0C07AFF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07AFF4u, 1);  /* 0C07AFF2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07AFF6u, 1);  /* 0C07AFF4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07AFF8u, 1);  /* 0C07AFF6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07AFFAu, 1);  /* 0C07AFF8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07AFFCu, 1);  /* 0C07AFFA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07AFFEu, 1);  /* 0C07AFFC mov.l Rm,@-Rn */
	r10 = 0xC22C874u; UPD(0x0C07B000u, 1);  /* 0C07AFFE mov.l @(disp,pc),Rn */
	IF(0x0C07B000u); r15 -= 4; W32(r15, PR); UPD(0x0C07B002u, 1);  /* 0C07B000 sts.l pr,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C07B004u, 1);  /* 0C07B002 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07B004 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C07B008u, 2);  /* 0C07B006 mov.w @Rm,Rn */
	r14 = r15;  /* 0C07B008 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C07B00Cu, 2);  /* 0C07B00A mov.l @(disp,pc),Rn */
	IF(0x0C07B00Cu); { u32 t_ = r8; PR = 0x0C07B010u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C07B010u); }  /* 0C07B00C jsr @Rn */
L_0C07B010: BLKS(0x0C07B010u);
	T = (r0 & r0) == 0;  /* 0C07B010 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07B030u, 4); goto L_0C07B030; } UPD(0x0C07B016u, 1); goto L_0C07B016; }  /* 0C07B012 bf/s */
L_0C07B016: BLKS(0x0C07B016u);
	r14 += 0x4u;  /* 0C07B016 add #imm,Rn */
	r15 = r14;  /* 0C07B018 mov Rm,Rn */
	IF(0x0C07B01Au); PR = R32(r15); r15 += 4; UPD(0x0C07B01Cu, 3);  /* 0C07B01A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B01Eu, 1);  /* 0C07B01C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07B020u, 1);  /* 0C07B01E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07B022u, 1);  /* 0C07B020 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07B024u, 1);  /* 0C07B022 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07B026u, 1);  /* 0C07B024 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07B028u, 1);  /* 0C07B026 mov.l @Rm+,Rn */
	IF(0x0C07B028u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07B028 rts */
L_0C07B030: BLKS(0x0C07B030u);
	r8 = 0xC0606C0u; UPD(0x0C07B032u, 1);  /* 0C07B030 mov.l @(disp,pc),Rn */
	IF(0x0C07B032u); { u32 t_ = r8; PR = 0x0C07B036u; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C07B036u); }  /* 0C07B032 jsr @Rn */
L_0C07B036: BLKS(0x0C07B036u);
	T = (r0 & r0) == 0;  /* 0C07B036 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07B016u, 4); goto L_0C07B016; } goto L_0C07B03C; }  /* 0C07B038 bt/s */
L_0C07B03C: BLKS(0x0C07B03Cu);
	r13 = 0xC2755BCu; UPD(0x0C07B03Eu, 2);  /* 0C07B03C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C07B040u, 1);  /* 0C07B03E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r12 = v_; } UPD(0x0C07B042u, 1);  /* 0C07B040 mov.w @Rm+,Rn */
	IF(0x0C07B042u); MACL = r12 * r8;  /* 0C07B042 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C07B046u, 3);  /* 0C07B044 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C07B048u, 1);  /* 0C07B046 mov.w @Rm,Rn */
	IF(0x0C07B048u); r8 = MACL;  /* 0C07B048 sts macl,Rn */
	r11 = 0xD3000104u; UPD(0x0C07B04Cu, 2);  /* 0C07B04A mov.l @(disp,pc),Rn */
	r8 += r1;  /* 0C07B04C add Rm,Rn */
	r4 = r2 & 0xFFFF;  /* 0C07B04E extu.w Rm,Rn */
	W32(r8, r11); UPD(0x0C07B052u, 3);  /* 0C07B050 mov.l Rm,@Rn */
	r0 = 0xC0A02D0u; UPD(0x0C07B054u, 1);  /* 0C07B052 mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C07B054 mov #imm,Rn */
	W32(r8 + 0x4u, r4); UPD(0x0C07B058u, 2);  /* 0C07B056 mov.l Rm,@(disp,Rn) */
	r9 = 0xC061380u; UPD(0x0C07B05Au, 1);  /* 0C07B058 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C07B05A mov Rm,Rn */
	r10 = 0x1600000u; UPD(0x0C07B05Eu, 2);  /* 0C07B05C mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r11); UPD(0x0C07B060u, 1);  /* 0C07B05E mov.l Rm,@(disp,Rn) */
	IF(0x0C07B060u); { u32 t_ = r0; PR = 0x0C07B064u; W32(r8 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07B064u); }  /* 0C07B060 jsr @Rn */
L_0C07B064: BLKS(0x0C07B064u);
	r4 = r12;  /* 0C07B064 mov Rm,Rn */
	IF(0x0C07B066u); { u32 t_ = r9; PR = 0x0C07B06Au; W32(r8 + 0x24u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C061380, 0x0C061380u, 0x0C07B06Au); }  /* 0C07B066 jsr @Rn */
L_0C07B06A: BLKS(0x0C07B06Au);
	r7 = 0xC0A1530u; UPD(0x0C07B06Cu, 1);  /* 0C07B06A mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C07B06C mov Rm,Rn */
	IF(0x0C07B06Eu); { u32 t_ = r7; PR = 0x0C07B072u; r12 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C07B072u); }  /* 0C07B06E jsr @Rn */
L_0C07B072: BLKS(0x0C07B072u);
	r0 = 0x86u; UPD(0x0C07B074u, 1);  /* 0C07B072 mov.w @(disp,pc),Rn */
	r4 = r8;  /* 0C07B074 mov Rm,Rn */
	r6 = 0x100u; UPD(0x0C07B078u, 2);  /* 0C07B076 mov.w @(disp,pc),Rn */
	r2 = 0x14u;  /* 0C07B078 mov #imm,Rn */
	IF(0x0C07B07Au); W16(r0 + r8, r6); UPD(0x0C07B07Cu, 2);  /* 0C07B07A mov.w Rm,@(r0,Rn) */
	r5 = 0x30000u; UPD(0x0C07B07Eu, 1);  /* 0C07B07C mov.l @(disp,pc),Rn */
	r0 += 0x6u;  /* 0C07B07E add #imm,Rn */
	r1 = 0xA8u; UPD(0x0C07B082u, 2);  /* 0C07B080 mov.w @(disp,pc),Rn */
	IF(0x0C07B082u); W32(r0 + r8, r5); UPD(0x0C07B084u, 1);  /* 0C07B082 mov.l Rm,@(r0,Rn) */
	r4 += r1;  /* 0C07B084 add Rm,Rn */
	r4 += 0x1u;  /* 0C07B086 add #imm,Rn */
	r0 += 0x21u;  /* 0C07B088 add #imm,Rn */
	r3 = 0xFFFF0000u; UPD(0x0C07B08Cu, 4);  /* 0C07B08A mov.l @(disp,pc),Rn */
	IF(0x0C07B08Cu); W8(r0 + r8, r2); UPD(0x0C07B08Eu, 1);  /* 0C07B08C mov.b Rm,@(r0,Rn) */
	W8(r4, r2); UPD(0x0C07B090u, 1);  /* 0C07B08E mov.b Rm,@Rn */
	W32(r8 + 0x30u, r11); UPD(0x0C07B092u, 1);  /* 0C07B090 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r3); UPD(0x0C07B094u, 1);  /* 0C07B092 mov.l Rm,@(disp,Rn) */
	r11 = r8;  /* 0C07B094 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C07B098u, 2);  /* 0C07B096 mov.l Rm,@Rn */
L_0C07B098: BLKS(0x0C07B098u);
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r10 = v_; } UPD(0x0C07B09Au, 1);  /* 0C07B098 mov.w @Rm+,Rn */
	r1 = 0x4u;  /* 0C07B09A mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C07B09Eu, 2);  /* 0C07B09C mov.w @(disp,pc),Rn */
	IF(0x0C07B09Eu); MACL = r10 * r8;  /* 0C07B09E mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C07B0A2u, 3);  /* 0C07B0A0 mov.l @(disp,pc),Rn */
	r6 = 0xC2755BCu; UPD(0x0C07B0A4u, 1);  /* 0C07B0A2 mov.l @(disp,pc),Rn */
	IF(0x0C07B0A4u); r8 = MACL;  /* 0C07B0A4 sts macl,Rn */
	r9 = (u32)(s32)(s16)R16(r6); UPD(0x0C07B0A8u, 2);  /* 0C07B0A6 mov.w @Rm,Rn */
	r8 += r7;  /* 0C07B0A8 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C07B0AA add #imm,Rn */
	W16(r8, r9); UPD(0x0C07B0AEu, 3);  /* 0C07B0AC mov.w Rm,@Rn */
	r6 = 0x0u;  /* 0C07B0AE mov #imm,Rn */
	r9 = r12;  /* 0C07B0B0 mov Rm,Rn */
	IF(0x0C07B0B2u); ARG0(0x491Du); { s32 s_ = (s32)r1; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C07B0B2 shld Rm,Rn */
	r3 = 0xC22C874u; UPD(0x0C07B0B6u, 4);  /* 0C07B0B4 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C07B0B6 add #imm,Rn */
	r5 = 0xC18E7D0u; UPD(0x0C07B0BAu, 2);  /* 0C07B0B8 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C07B0BCu, 1);  /* 0C07B0BA mov.w @Rm,Rn */
	r9 += r5;  /* 0C07B0BC add Rm,Rn */
	r2 = R32(r9); UPD(0x0C07B0C0u, 2);  /* 0C07B0BE mov.l @Rm,Rn */
	r0 = r4 & 0xFFFF;  /* 0C07B0C0 extu.w Rm,Rn */
	W32(r8, r2); UPD(0x0C07B0C4u, 2);  /* 0C07B0C2 mov.l Rm,@Rn */
	r4 = r10;  /* 0C07B0C4 mov Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C07B0C8u, 2);  /* 0C07B0C6 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A02D0u; UPD(0x0C07B0CAu, 1);  /* 0C07B0C8 mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x4u); UPD(0x0C07B0CCu, 1);  /* 0C07B0CA mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r6); UPD(0x0C07B0CEu, 1);  /* 0C07B0CC mov.l Rm,@(disp,Rn) */
	IF(0x0C07B0CEu); { u32 t_ = r5; PR = 0x0C07B0D2u; W32(r8 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07B0D2u); }  /* 0C07B0CE jsr @Rn */
L_0C07B0D2: BLKS(0x0C07B0D2u);
	r3 = 0x86u; UPD(0x0C07B0D4u, 1);  /* 0C07B0D2 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07B0D4 mov Rm,Rn */
	r2 = 0x100u; UPD(0x0C07B0D8u, 2);  /* 0C07B0D6 mov.w @(disp,pc),Rn */
	IF(0x0C07B0D8u); W16(r0 + r3, r2); UPD(0x0C07B0DAu, 1);  /* 0C07B0D8 mov.w Rm,@(r0,Rn) */
	r4 = R32(r11 + 0x24u); UPD(0x0C07B0DCu, 1);  /* 0C07B0DA mov.l @(disp,Rm),Rn */
	r0 = R32(r11 + 0x28u); UPD(0x0C07B0DEu, 1);  /* 0C07B0DC mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C07B0E0u, 1);  /* 0C07B0DE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C07B0E2u, 1);  /* 0C07B0E0 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C07B0E2 mov Rm,Rn */
	r7 = R32(r9 + 0x8u); UPD(0x0C07B0E6u, 2);  /* 0C07B0E4 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C07B0E8u, 1);  /* 0C07B0E6 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A1530u; UPD(0x0C07B0EAu, 1);  /* 0C07B0E8 mov.l @(disp,pc),Rn */
	r6 = R32(r9 + 0xCu); UPD(0x0C07B0ECu, 1);  /* 0C07B0EA mov.l @(disp,Rm),Rn */
	IF(0x0C07B0ECu); { u32 t_ = r5; PR = 0x0C07B0F0u; W32(r8 + 0x30u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C07B0F0u); }  /* 0C07B0EC jsr @Rn */
L_0C07B0F0: BLKS(0x0C07B0F0u);
	r0 = 0xB0u; UPD(0x0C07B0F2u, 1);  /* 0C07B0F0 mov.w @(disp,pc),Rn */
	r7 = r8;  /* 0C07B0F2 mov Rm,Rn */
	IF(0x0C07B0F4u); r3 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C07B0F6u, 2);  /* 0C07B0F4 mov.b @(r0,Rm),Rn */
	IF(0x0C07B0F6u); W8(r0 + r8, r3); UPD(0x0C07B0F8u, 1);  /* 0C07B0F6 mov.b Rm,@(r0,Rn) */
	r0 = 0xACu; UPD(0x0C07B0FAu, 1);  /* 0C07B0F8 mov.w @(disp,pc),Rn */
	r7 += r0;  /* 0C07B0FA add Rm,Rn */
	r2 = R32(r14); UPD(0x0C07B0FEu, 2);  /* 0C07B0FC mov.l @Rm,Rn */
	r0 += r11;  /* 0C07B0FE add Rm,Rn */
	r4 = 0xA8u; UPD(0x0C07B102u, 2);  /* 0C07B100 mov.w @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C07B102 add #imm,Rn */
	r9 = 0xC0AFE40u; UPD(0x0C07B106u, 2);  /* 0C07B104 mov.l @(disp,pc),Rn */
	r4 += r8;  /* 0C07B106 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C07B10Au, 2);  /* 0C07B108 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C07B10A add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C07B10Eu, 2);  /* 0C07B10C mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C07B10E add #imm,Rn */
	r6 = 0x9Bu; UPD(0x0C07B112u, 2);  /* 0C07B110 mov.w @(disp,pc),Rn */
	W8(r4, r1); UPD(0x0C07B114u, 1);  /* 0C07B112 mov.b Rm,@Rn */
	r8 += r6;  /* 0C07B114 add Rm,Rn */
	IF(0x0C07B116u); { u32 t_ = r9; PR = 0x0C07B11Au; W8(r7, r10); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C07B11Au); }  /* 0C07B116 jsr @Rn */
L_0C07B11A: BLKS(0x0C07B11Au);
	r5 = r12;  /* 0C07B11A mov Rm,Rn */
	r5 += 0x1u;  /* 0C07B11C add #imm,Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C07B11E exts.w Rm,Rn */
	r3 = 0x3u;  /* 0C07B120 mov #imm,Rn */
	T = (s32)r12 > (s32)r3;  /* 0C07B122 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W8(r8, r0); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07B098u, 8); goto L_0C07B098; } UPD(0x0C07B128u, 1); goto L_0C07B128; }  /* 0C07B124 bf/s */
L_0C07B128: BLKS(0x0C07B128u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C07B016u, 3); goto L_0C07B016; }  /* 0C07B128 bra */
}

void f_0C07B180(sh3_t *c)
{
	LOCALS;
L_0C07B180: BLKS(0x0C07B180u);
	r3 = 0xB4u; UPD(0x0C07B182u, 1);  /* 0C07B180 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C07B182 exts.w Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07B186u, 2);  /* 0C07B184 mov.l Rm,@-Rn */
	IF(0x0C07B186u); MACL = r4 * r3;  /* 0C07B186 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B18Au, 3);  /* 0C07B188 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C07B18Cu, 1);  /* 0C07B18A mov.l @(disp,pc),Rn */
	IF(0x0C07B18Cu); r2 = MACL;  /* 0C07B18C sts macl,Rn */
	IF(0x0C07B18Eu); r15 -= 4; W32(r15, PR); UPD(0x0C07B190u, 2);  /* 0C07B18E sts.l pr,@-Rn */
	r0 += r2;  /* 0C07B190 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07B194u, 2);  /* 0C07B192 mov.l @(disp,Rm),Rn */
	r0 = 0x12u;  /* 0C07B194 mov #imm,Rn */
	T = r2 > r0;  /* 0C07B196 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07B1FEu, 5); goto L_0C07B1FE; } goto L_0C07B19C; }  /* 0C07B198 bt/s */
L_0C07B19C: BLKS(0x0C07B19Cu);
	r0 = 0xC07B1ACu;  /* 0C07B19C mova @(disp,pc),r0 */
	IF(0x0C07B19Eu); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07B1A0u, 3);  /* 0C07B19E mov.b @(r0,Rm),Rn */
	IF(0x0C07B1A0u); { u32 tv_ = (r5 + 0x0C07B1A4u); u32 t_ = PHYS(tv_); IF(0x0C07B1A2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07B1C0u: goto L_0C07B1C0; case 0x0C07B1D0u: goto L_0C07B1D0; case 0x0C07B210u: goto L_0C07B210; default: JUMPD(tv_); } }  /* 0C07B1A0 braf Rn */
L_0C07B1C0: BLKS(0x0C07B1C0u);
	r6 = 0xC0A1140u; UPD(0x0C07B1C2u, 1);  /* 0C07B1C0 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07B1C2 mov Rm,Rn */
	IF(0x0C07B1C4u); PR = R32(r15); r15 += 4; UPD(0x0C07B1C6u, 2);  /* 0C07B1C4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B1C8u, 1);  /* 0C07B1C6 mov.l @Rm+,Rn */
	IF(0x0C07B1C8u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A1140u: TAIL(f_0C0A1140); default: JUMPD(tv_); } }  /* 0C07B1C8 jmp @Rn */
L_0C07B1D0: BLKS(0x0C07B1D0u);
	r8 = 0xB4u; UPD(0x0C07B1D2u, 1);  /* 0C07B1D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07B1D2 add #imm,Rn */
	IF(0x0C07B1D4u); MACL = r4 * r8;  /* 0C07B1D4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07B1D8u, 4);  /* 0C07B1D6 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C07B1D8 mov #imm,Rn */
	IF(0x0C07B1DAu); r8 = MACL;  /* 0C07B1DA sts macl,Rn */
	r8 += r0;  /* 0C07B1DC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07B1E0u, 4);  /* 0C07B1DE mov.w @(disp,pc),Rn */
	IF(0x0C07B1E0u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07B1E2u, 1);  /* 0C07B1E0 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C07B1E2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C07B1E6u, 2);  /* 0C07B1E4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07B1E6 add #imm,Rn */
	IF(0x0C07B1E8u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07B1EAu, 2);  /* 0C07B1E8 mov.b @(r0,Rm),Rn */
	r4 = r7 & 0xFF;  /* 0C07B1EA extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07B1EEu, 2);  /* 0C07B1EC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07B1F0u, 1);  /* 0C07B1EE mov.l @Rm,Rn */
L_0C07B1F0: BLKS(0x0C07B1F0u);
	r0 = 0xC0AB240u; UPD(0x0C07B1F2u, 1);  /* 0C07B1F0 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07B1F4u, 1);  /* 0C07B1F2 mov.l @(disp,Rm),Rn */
	IF(0x0C07B1F4u); { u32 t_ = r0; PR = 0x0C07B1F8u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07B1F8u); }  /* 0C07B1F4 jsr @Rn */
L_0C07B1F8: BLKS(0x0C07B1F8u);
	r0 = 0x0u;  /* 0C07B1F8 mov #imm,Rn */
	W32(r8, r0); UPD(0x0C07B1FCu, 2);  /* 0C07B1FA mov.l Rm,@Rn */
	r15 += 0x8u;  /* 0C07B1FC add #imm,Rn */
	UPD(0x0C07B1FEu, 1);
L_0C07B1FE: BLKS(0x0C07B1FEu);
	r15 = r14;  /* 0C07B1FE mov Rm,Rn */
	IF(0x0C07B200u); PR = R32(r15); r15 += 4; UPD(0x0C07B202u, 2);  /* 0C07B200 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B204u, 1);  /* 0C07B202 mov.l @Rm+,Rn */
	IF(0x0C07B204u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07B204 rts */
L_0C07B210: BLKS(0x0C07B210u);
	r3 = 0xB4u; UPD(0x0C07B212u, 1);  /* 0C07B210 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07B212 add #imm,Rn */
	IF(0x0C07B214u); MACL = r4 * r3;  /* 0C07B214 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C07B218u, 4);  /* 0C07B216 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C07B21Au, 1);  /* 0C07B218 mov.w @(disp,pc),Rn */
	IF(0x0C07B21Au); r8 = MACL;  /* 0C07B21A sts macl,Rn */
	r8 += r2;  /* 0C07B21C add Rm,Rn */
	IF(0x0C07B21Eu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07B220u, 3);  /* 0C07B21E mov.b @(r0,Rm),Rn */
	r4 = r7 & 0xFF;  /* 0C07B220 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C07B224u, 2);  /* 0C07B222 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07B224 add #imm,Rn */
	IF(0x0C07B226u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07B228u, 2);  /* 0C07B226 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C07B228 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07B22Cu, 2);  /* 0C07B22A mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07B22Eu, 1);  /* 0C07B22C mov.l @Rm,Rn */
	{ r5 = 0x2u; /* slot mov #imm,Rn */ UPD(0x0C07B1F0u, 3); goto L_0C07B1F0; }  /* 0C07B22E bra */
}

void f_0C07B250(sh3_t *c)
{
	LOCALS;
	goto L_0C07B250;
L_0C07B180: BLKS(0x0C07B180u);
	r3 = 0xB4u; UPD(0x0C07B182u, 1);  /* 0C07B180 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C07B182 exts.w Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07B186u, 2);  /* 0C07B184 mov.l Rm,@-Rn */
	IF(0x0C07B186u); MACL = r4 * r3;  /* 0C07B186 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B18Au, 3);  /* 0C07B188 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C07B18Cu, 1);  /* 0C07B18A mov.l @(disp,pc),Rn */
	IF(0x0C07B18Cu); r2 = MACL;  /* 0C07B18C sts macl,Rn */
	IF(0x0C07B18Eu); r15 -= 4; W32(r15, PR); UPD(0x0C07B190u, 2);  /* 0C07B18E sts.l pr,@-Rn */
	r0 += r2;  /* 0C07B190 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07B194u, 2);  /* 0C07B192 mov.l @(disp,Rm),Rn */
	r0 = 0x12u;  /* 0C07B194 mov #imm,Rn */
	T = r2 > r0;  /* 0C07B196 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07B1FEu, 5); goto L_0C07B1FE; } goto L_0C07B19C; }  /* 0C07B198 bt/s */
L_0C07B19C: BLKS(0x0C07B19Cu);
	r0 = 0xC07B1ACu;  /* 0C07B19C mova @(disp,pc),r0 */
	IF(0x0C07B19Eu); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07B1A0u, 3);  /* 0C07B19E mov.b @(r0,Rm),Rn */
	IF(0x0C07B1A0u); { u32 tv_ = (r5 + 0x0C07B1A4u); u32 t_ = PHYS(tv_); IF(0x0C07B1A2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07B1C0u: goto L_0C07B1C0; case 0x0C07B1D0u: goto L_0C07B1D0; case 0x0C07B210u: goto L_0C07B210; default: JUMPD(tv_); } }  /* 0C07B1A0 braf Rn */
L_0C07B1C0: BLKS(0x0C07B1C0u);
	r6 = 0xC0A1140u; UPD(0x0C07B1C2u, 1);  /* 0C07B1C0 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07B1C2 mov Rm,Rn */
	IF(0x0C07B1C4u); PR = R32(r15); r15 += 4; UPD(0x0C07B1C6u, 2);  /* 0C07B1C4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B1C8u, 1);  /* 0C07B1C6 mov.l @Rm+,Rn */
	IF(0x0C07B1C8u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A1140u: TAIL(f_0C0A1140); default: JUMPD(tv_); } }  /* 0C07B1C8 jmp @Rn */
L_0C07B1D0: BLKS(0x0C07B1D0u);
	r8 = 0xB4u; UPD(0x0C07B1D2u, 1);  /* 0C07B1D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07B1D2 add #imm,Rn */
	IF(0x0C07B1D4u); MACL = r4 * r8;  /* 0C07B1D4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07B1D8u, 4);  /* 0C07B1D6 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C07B1D8 mov #imm,Rn */
	IF(0x0C07B1DAu); r8 = MACL;  /* 0C07B1DA sts macl,Rn */
	r8 += r0;  /* 0C07B1DC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07B1E0u, 4);  /* 0C07B1DE mov.w @(disp,pc),Rn */
	IF(0x0C07B1E0u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07B1E2u, 1);  /* 0C07B1E0 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C07B1E2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C07B1E6u, 2);  /* 0C07B1E4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07B1E6 add #imm,Rn */
	IF(0x0C07B1E8u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07B1EAu, 2);  /* 0C07B1E8 mov.b @(r0,Rm),Rn */
	r4 = r7 & 0xFF;  /* 0C07B1EA extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07B1EEu, 2);  /* 0C07B1EC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07B1F0u, 1);  /* 0C07B1EE mov.l @Rm,Rn */
L_0C07B1F0: BLKS(0x0C07B1F0u);
	r0 = 0xC0AB240u; UPD(0x0C07B1F2u, 1);  /* 0C07B1F0 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07B1F4u, 1);  /* 0C07B1F2 mov.l @(disp,Rm),Rn */
	IF(0x0C07B1F4u); { u32 t_ = r0; PR = 0x0C07B1F8u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07B1F8u); }  /* 0C07B1F4 jsr @Rn */
L_0C07B1F8: BLKS(0x0C07B1F8u);
	r0 = 0x0u;  /* 0C07B1F8 mov #imm,Rn */
	W32(r8, r0); UPD(0x0C07B1FCu, 2);  /* 0C07B1FA mov.l Rm,@Rn */
	r15 += 0x8u;  /* 0C07B1FC add #imm,Rn */
	UPD(0x0C07B1FEu, 1);
L_0C07B1FE: BLKS(0x0C07B1FEu);
	r15 = r14;  /* 0C07B1FE mov Rm,Rn */
	IF(0x0C07B200u); PR = R32(r15); r15 += 4; UPD(0x0C07B202u, 2);  /* 0C07B200 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B204u, 1);  /* 0C07B202 mov.l @Rm+,Rn */
	IF(0x0C07B204u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07B204 rts */
L_0C07B210: BLKS(0x0C07B210u);
	r3 = 0xB4u; UPD(0x0C07B212u, 1);  /* 0C07B210 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07B212 add #imm,Rn */
	IF(0x0C07B214u); MACL = r4 * r3;  /* 0C07B214 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C07B218u, 4);  /* 0C07B216 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C07B21Au, 1);  /* 0C07B218 mov.w @(disp,pc),Rn */
	IF(0x0C07B21Au); r8 = MACL;  /* 0C07B21A sts macl,Rn */
	r8 += r2;  /* 0C07B21C add Rm,Rn */
	IF(0x0C07B21Eu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07B220u, 3);  /* 0C07B21E mov.b @(r0,Rm),Rn */
	r4 = r7 & 0xFF;  /* 0C07B220 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C07B224u, 2);  /* 0C07B222 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07B224 add #imm,Rn */
	IF(0x0C07B226u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07B228u, 2);  /* 0C07B226 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C07B228 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07B22Cu, 2);  /* 0C07B22A mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07B22Eu, 1);  /* 0C07B22C mov.l @Rm,Rn */
	{ r5 = 0x2u; /* slot mov #imm,Rn */ UPD(0x0C07B1F0u, 3); goto L_0C07B1F0; }  /* 0C07B22E bra */
L_0C07B250: BLKS(0x0C07B250u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07B252u, 1);  /* 0C07B250 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07B254u, 1);  /* 0C07B252 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07B256u, 1);  /* 0C07B254 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C07B258u, 1);  /* 0C07B256 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07B258 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07B25Cu, 2);  /* 0C07B25A mov.l Rm,@-Rn */
	IF(0x0C07B25Cu); MACL = r10 * r3;  /* 0C07B25C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B260u, 3);  /* 0C07B25E mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C07B262u, 1);  /* 0C07B260 mov.l @(disp,pc),Rn */
	IF(0x0C07B262u); r2 = MACL;  /* 0C07B262 sts macl,Rn */
	IF(0x0C07B264u); r15 -= 4; W32(r15, PR); UPD(0x0C07B266u, 2);  /* 0C07B264 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07B266 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07B26Au, 2);  /* 0C07B268 mov.l @(disp,Rm),Rn */
	r0 = 0x12u;  /* 0C07B26A mov #imm,Rn */
	T = r2 > r0;  /* 0C07B26C cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07B276u, 5); goto L_0C07B276; } goto L_0C07B272; }  /* 0C07B26E bf/s */
L_0C07B272: BLKS(0x0C07B272u);
	{ IF(0x0C07B274u); ; /* slot nop */ UPD(0x0C07B3ECu, 4); goto L_0C07B3EC; }  /* 0C07B272 bra */
L_0C07B276: BLKS(0x0C07B276u);
	r0 = 0xC07B288u;  /* 0C07B276 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07B278 add Rm,Rn */
	IF(0x0C07B27Au); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07B27Cu, 3);  /* 0C07B27A mov.w @(r0,Rm),Rn */
	IF(0x0C07B27Cu); { u32 tv_ = (r4 + 0x0C07B280u); u32 t_ = PHYS(tv_); IF(0x0C07B27Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07B2B0u: goto L_0C07B2B0; case 0x0C07B330u: goto L_0C07B330; case 0x0C07B380u: goto L_0C07B380; default: JUMPD(tv_); } }  /* 0C07B27C braf Rn */
L_0C07B2B0: BLKS(0x0C07B2B0u);
	r7 = 0xB4u; UPD(0x0C07B2B2u, 1);  /* 0C07B2B0 mov.w @(disp,pc),Rn */
	IF(0x0C07B2B2u); MACL = r10 * r7;  /* 0C07B2B2 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07B2B6u, 3);  /* 0C07B2B4 mov.l @(disp,pc),Rn */
	IF(0x0C07B2B6u); r7 = MACL;  /* 0C07B2B6 sts macl,Rn */
	r7 += r0;  /* 0C07B2B8 add Rm,Rn */
	r6 = R32(r7 + 0x24u); UPD(0x0C07B2BCu, 3);  /* 0C07B2BA mov.l @(disp,Rm),Rn */
	r11 = R32(r7 + 0x2Cu); UPD(0x0C07B2BEu, 1);  /* 0C07B2BC mov.l @(disp,Rm),Rn */
	r8 = R32(r7 + 0x28u); UPD(0x0C07B2C0u, 1);  /* 0C07B2BE mov.l @(disp,Rm),Rn */
	r6 += r11;  /* 0C07B2C0 add Rm,Rn */
	r9 = R32(r7 + 0x30u); UPD(0x0C07B2C4u, 2);  /* 0C07B2C2 mov.l @(disp,Rm),Rn */
	r1 = (r6 >> 16) | (r6 << 16);  /* 0C07B2C4 swap.w Rm,Rn */
	r5 = 0xFFFFFF60u; UPD(0x0C07B2C8u, 2);  /* 0C07B2C6 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C07B2C8 add Rm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C07B2CA exts.w Rm,Rn */
	r3 += r5;  /* 0C07B2CC add Rm,Rn */
	W32(r7 + 0x24u, r6); UPD(0x0C07B2D0u, 4);  /* 0C07B2CE mov.l Rm,@(disp,Rn) */
	IF(0x0C07B2D0u); T = (s32)r3 >= 0;  /* 0C07B2D0 cmp/pz Rn */
	{ u32 c_ = !T; W32(r7 + 0x28u, r8); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07B320u, 4); goto L_0C07B320; } UPD(0x0C07B2D6u, 1); goto L_0C07B2D6; }  /* 0C07B2D2 bf/s */
L_0C07B2D6: BLKS(0x0C07B2D6u);
	r2 = 0xE0u; UPD(0x0C07B2D8u, 1);  /* 0C07B2D6 mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r2;  /* 0C07B2D8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07B2E0u, 4); goto L_0C07B2E0; } goto L_0C07B2DE; }  /* 0C07B2DA bf/s */
L_0C07B2DE: BLKS(0x0C07B2DEu);
	W32(r7, r3); UPD(0x0C07B2E0u, 2);  /* 0C07B2DE mov.l Rm,@Rn */
L_0C07B2E0: BLKS(0x0C07B2E0u);
	r6 = R32(r7 + 0x28u); UPD(0x0C07B2E2u, 1);  /* 0C07B2E0 mov.l @(disp,Rm),Rn */
	r4 = 0xFFFFFE00u; UPD(0x0C07B2E4u, 1);  /* 0C07B2E2 mov.w @(disp,pc),Rn */
	r5 = (r6 >> 16) | (r6 << 16);  /* 0C07B2E4 swap.w Rm,Rn */
	r2 = (u32)(s32)(s16)r5;  /* 0C07B2E6 exts.w Rm,Rn */
	r2 += r4;  /* 0C07B2E8 add Rm,Rn */
	IF(0x0C07B2EAu); T = (s32)r2 >= 0;  /* 0C07B2EA cmp/pz Rn */
	if (!T) { UPD(0x0C07B310u, 7); goto L_0C07B310; }  /* 0C07B2EC bf */
L_0C07B2EE: BLKS(0x0C07B2EEu);
	r8 = 0xB8u; UPD(0x0C07B2F0u, 1);  /* 0C07B2EE mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C07B2F0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07B2F8u, 4); goto L_0C07B2F8; } goto L_0C07B2F6; }  /* 0C07B2F2 bf/s */
L_0C07B2F6: BLKS(0x0C07B2F6u);
	W32(r7, r9); UPD(0x0C07B2F8u, 2);  /* 0C07B2F6 mov.l Rm,@Rn */
L_0C07B2F8: BLKS(0x0C07B2F8u);
	r11 = 0x7u;  /* 0C07B2F8 mov #imm,Rn */
	W32(r7 + 0xCu, r11); UPD(0x0C07B2FCu, 2);  /* 0C07B2FA mov.l Rm,@(disp,Rn) */
L_0C07B2FC: BLKS(0x0C07B2FCu);
	r1 = 0xC0A0380u; UPD(0x0C07B2FEu, 1);  /* 0C07B2FC mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07B2FE mov Rm,Rn */
	UPD(0x0C07B300u, 1);
L_0C07B300: BLKS(0x0C07B300u);
	r15 = r14;  /* 0C07B300 mov Rm,Rn */
	IF(0x0C07B302u); PR = R32(r15); r15 += 4; UPD(0x0C07B304u, 2);  /* 0C07B302 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B306u, 1);  /* 0C07B304 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07B308u, 1);  /* 0C07B306 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07B30Au, 1);  /* 0C07B308 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07B30Cu, 1);  /* 0C07B30A mov.l @Rm+,Rn */
	IF(0x0C07B30Cu); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07B180u: goto L_0C07B180; case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C07B30C jmp @Rn */
L_0C07B310: BLKS(0x0C07B310u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C07B2EEu, 3); goto L_0C07B2EE; }  /* 0C07B310 bra */
L_0C07B320: BLKS(0x0C07B320u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C07B2D6u, 3); goto L_0C07B2D6; }  /* 0C07B320 bra */
L_0C07B330: BLKS(0x0C07B330u);
	r8 = 0xC0A0490u; UPD(0x0C07B332u, 1);  /* 0C07B330 mov.l @(disp,pc),Rn */
	IF(0x0C07B332u); { u32 t_ = r8; PR = 0x0C07B336u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C07B336u); }  /* 0C07B332 jsr @Rn */
L_0C07B336: BLKS(0x0C07B336u);
	IF(0x0C07B336u); T = (s32)r0 >= 0;  /* 0C07B336 cmp/pz Rn */
	if (!T) { UPD(0x0C07B370u, 4); goto L_0C07B370; }  /* 0C07B338 bf */
L_0C07B33A: BLKS(0x0C07B33Au);
	r11 = 0xB4u; UPD(0x0C07B33Cu, 1);  /* 0C07B33A mov.w @(disp,pc),Rn */
	IF(0x0C07B33Cu); MACL = r10 * r11;  /* 0C07B33C mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C07B340u, 3);  /* 0C07B33E mov.l @(disp,pc),Rn */
	IF(0x0C07B340u); r4 = MACL;  /* 0C07B340 sts macl,Rn */
	IF(0x0C07B342u); MACL = r0 * r11;  /* 0C07B342 mul.l Rm,Rn */
	r4 += r9;  /* 0C07B344 add Rm,Rn */
	r1 = R32(r4 + 0x30u); UPD(0x0C07B348u, 5);  /* 0C07B346 mov.l @(disp,Rm),Rn */
	IF(0x0C07B348u); r3 = MACL;  /* 0C07B348 sts macl,Rn */
	r3 += r9;  /* 0C07B34A add Rm,Rn */
	r0 = R32(r3 + 0x28u); UPD(0x0C07B34Eu, 3);  /* 0C07B34C mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C07B34E add Rm,Rn */
	r5 = R32(r3 + 0x24u); UPD(0x0C07B352u, 2);  /* 0C07B350 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x28u, r0); UPD(0x0C07B354u, 1);  /* 0C07B352 mov.l Rm,@(disp,Rn) */
	r6 = R32(r4 + 0x2Cu); UPD(0x0C07B356u, 1);  /* 0C07B354 mov.l @(disp,Rm),Rn */
	r0 = R32(r4 + 0xCu); UPD(0x0C07B358u, 1);  /* 0C07B356 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C07B358 add Rm,Rn */
	W32(r4 + 0x24u, r5); UPD(0x0C07B35Cu, 2);  /* 0C07B35A mov.l Rm,@(disp,Rn) */
	IF(0x0C07B35Cu); r0 <<= 2;  /* 0C07B35C shll2 Rn */
	r2 = 0xC18E810u; UPD(0x0C07B360u, 2);  /* 0C07B35E mov.l @(disp,pc),Rn */
	IF(0x0C07B360u); r7 = R32(r0 + r2); UPD(0x0C07B362u, 1);  /* 0C07B360 mov.l @(r0,Rm),Rn */
	{ W32(r4 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07B2FCu, 3); goto L_0C07B2FC; }  /* 0C07B362 bra */
L_0C07B370: BLKS(0x0C07B370u);
	r1 = 0xC07B180u; UPD(0x0C07B372u, 1);  /* 0C07B370 mov.l @(disp,pc),Rn */
	{ r4 = r10; /* slot mov Rm,Rn */ UPD(0x0C07B300u, 3); goto L_0C07B300; }  /* 0C07B372 bra */
L_0C07B380: BLKS(0x0C07B380u);
	r8 = 0xC0A0490u; UPD(0x0C07B382u, 1);  /* 0C07B380 mov.l @(disp,pc),Rn */
	IF(0x0C07B382u); { u32 t_ = r8; PR = 0x0C07B386u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C07B386u); }  /* 0C07B382 jsr @Rn */
L_0C07B386: BLKS(0x0C07B386u);
	IF(0x0C07B386u); T = (s32)r0 >= 0;  /* 0C07B386 cmp/pz Rn */
	if (!T) { UPD(0x0C07B370u, 4); goto L_0C07B370; }  /* 0C07B388 bf */
L_0C07B38A: BLKS(0x0C07B38Au);
	r4 = 0xB4u; UPD(0x0C07B38Cu, 1);  /* 0C07B38A mov.w @(disp,pc),Rn */
	IF(0x0C07B38Cu); MACL = r10 * r4;  /* 0C07B38C mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C07B390u, 3);  /* 0C07B38E mov.l @(disp,pc),Rn */
	IF(0x0C07B390u); r11 = MACL;  /* 0C07B390 sts macl,Rn */
	IF(0x0C07B392u); MACL = r0 * r4;  /* 0C07B392 mul.l Rm,Rn */
	r11 += r9;  /* 0C07B394 add Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C07B398u, 5);  /* 0C07B396 mov.w @(disp,pc),Rn */
	IF(0x0C07B398u); r3 = MACL;  /* 0C07B398 sts macl,Rn */
	r3 += r9;  /* 0C07B39A add Rm,Rn */
	r0 = R32(r3); UPD(0x0C07B39Eu, 3);  /* 0C07B39C mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C07B3A0u, 1);  /* 0C07B39E mov.w @(disp,pc),Rn */
	r4 = R32(r11); UPD(0x0C07B3A2u, 1);  /* 0C07B3A0 mov.l @Rm,Rn */
	r0 &= r1;  /* 0C07B3A2 and Rm,Rn */
	r7 = R32(r3 + 0x24u); UPD(0x0C07B3A6u, 2);  /* 0C07B3A4 mov.l @(disp,Rm),Rn */
	r4 &= r2;  /* 0C07B3A6 and Rm,Rn */
	r8 = R32(r11 + 0x2Cu); UPD(0x0C07B3AAu, 2);  /* 0C07B3A8 mov.l @(disp,Rm),Rn */
	r4 |= r0;  /* 0C07B3AA or Rm,Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C07B3AEu, 2);  /* 0C07B3AC mov.l @(disp,Rm),Rn */
	r7 += r8;  /* 0C07B3AE add Rm,Rn */
	r6 = R32(r11 + 0x30u); UPD(0x0C07B3B2u, 2);  /* 0C07B3B0 mov.l @(disp,Rm),Rn */
	r9 = 0xC058130u; UPD(0x0C07B3B4u, 1);  /* 0C07B3B2 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C07B3B4 add Rm,Rn */
	W32(r11, r4); UPD(0x0C07B3B8u, 2);  /* 0C07B3B6 mov.l Rm,@Rn */
	r8 = 0xC057430u; UPD(0x0C07B3BAu, 1);  /* 0C07B3B8 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07B3BA mov Rm,Rn */
	W32(r11 + 0x28u, r5); UPD(0x0C07B3BEu, 2);  /* 0C07B3BC mov.l Rm,@(disp,Rn) */
	IF(0x0C07B3BEu); { u32 t_ = r9; PR = 0x0C07B3C2u; W32(r11 + 0x24u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C07B3C2u); }  /* 0C07B3BE jsr @Rn */
L_0C07B3C2: BLKS(0x0C07B3C2u);
	r5 = 0x4u;  /* 0C07B3C2 mov #imm,Rn */
	IF(0x0C07B3C4u); { u32 t_ = r8; PR = 0x0C07B3C8u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C07B3C8u); }  /* 0C07B3C4 jsr @Rn */
L_0C07B3C8: BLKS(0x0C07B3C8u);
	r8 = 0x86u; UPD(0x0C07B3CAu, 1);  /* 0C07B3C8 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C07B3CA mov Rm,Rn */
	r8 += r11;  /* 0C07B3CC add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C07B3D0u, 3);  /* 0C07B3CE mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C07B3D0 add #imm,Rn */
	r7 = 0xC0A0380u; UPD(0x0C07B3D4u, 2);  /* 0C07B3D2 mov.l @(disp,pc),Rn */
	IF(0x0C07B3D4u); r0 >>= 2;  /* 0C07B3D4 shlr2 Rn */
	IF(0x0C07B3D6u); r0 >>= 2;  /* 0C07B3D6 shlr2 Rn */
	r9 = 0xC0A9E40u; UPD(0x0C07B3DAu, 3);  /* 0C07B3D8 mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C07B3DA and #imm,r0 */
	IF(0x0C07B3DCu); { u32 t_ = r7; PR = 0x0C07B3E0u; W32(r11 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C07B3E0u); }  /* 0C07B3DC jsr @Rn */
L_0C07B3E0: BLKS(0x0C07B3E0u);
	r4 = r10;  /* 0C07B3E0 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C07B3E2 mov #imm,Rn */
	IF(0x0C07B3E4u); { u32 t_ = r9; PR = 0x0C07B3E8u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07B3E8u); }  /* 0C07B3E4 jsr @Rn */
L_0C07B3E8: BLKS(0x0C07B3E8u);
	T = (r0 & r0) == 0;  /* 0C07B3E8 tst Rm,Rn */
	if (!T) { UPD(0x0C07B400u, 4); goto L_0C07B400; }  /* 0C07B3EA bf */
L_0C07B3EC: BLKS(0x0C07B3ECu);
	r15 = r14;  /* 0C07B3EC mov Rm,Rn */
	IF(0x0C07B3EEu); PR = R32(r15); r15 += 4; UPD(0x0C07B3F0u, 2);  /* 0C07B3EE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B3F2u, 1);  /* 0C07B3F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07B3F4u, 1);  /* 0C07B3F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07B3F6u, 1);  /* 0C07B3F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07B3F8u, 1);  /* 0C07B3F6 mov.l @Rm+,Rn */
	IF(0x0C07B3F8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07B3F8 rts */
L_0C07B400: BLKS(0x0C07B400u);
	r9 = (u32)(s32)(s16)R16(r8); UPD(0x0C07B402u, 1);  /* 0C07B400 mov.w @Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C07B404u, 1);  /* 0C07B402 mov.l @(disp,pc),Rn */
	r5 = 0xCCCCCu; UPD(0x0C07B406u, 1);  /* 0C07B404 mov.l @(disp,pc),Rn */
	IF(0x0C07B406u); { u32 t_ = r8; PR = 0x0C07B40Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07B40Au); }  /* 0C07B406 jsr @Rn */
L_0C07B40A: BLKS(0x0C07B40Au);
	r8 = R32(r11 + 0x24u); UPD(0x0C07B40Cu, 1);  /* 0C07B40A mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C07B40C mov Rm,Rn */
	r8 += r0;  /* 0C07B40E add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C07B412u, 3);  /* 0C07B410 mov.l @(disp,pc),Rn */
	r3 = 0xFFFD0000u; UPD(0x0C07B414u, 1);  /* 0C07B412 mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C07B416u, 1);  /* 0C07B414 mov.l @(disp,pc),Rn */
	IF(0x0C07B416u); { u32 t_ = r0; PR = 0x0C07B41Au; r8 += r3; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07B41Au); }  /* 0C07B416 jsr @Rn */
L_0C07B41A: BLKS(0x0C07B41Au);
	r6 = R32(r11 + 0x28u); UPD(0x0C07B41Cu, 1);  /* 0C07B41A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07B41C add #imm,Rn */
	r6 += r0;  /* 0C07B41E add Rm,Rn */
	r11 = 0xC7C17D0u; UPD(0x0C07B422u, 3);  /* 0C07B420 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C07B422 mov #imm,Rn */
	r0 = 0x30000u; UPD(0x0C07B426u, 2);  /* 0C07B424 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C07B426 mov Rm,Rn */
	W32(r15, r0); UPD(0x0C07B42Au, 2);  /* 0C07B428 mov.l Rm,@Rn */
	IF(0x0C07B42Au); { u32 t_ = r11; PR = 0x0C07B42Eu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C17D0, 0x0C7C17D0u, 0x0C07B42Eu); }  /* 0C07B42A jsr @Rn */
L_0C07B42E: BLKS(0x0C07B42Eu);
	r4 = r10;  /* 0C07B42E mov Rm,Rn */
	r10 = 0xC0580D0u; UPD(0x0C07B432u, 2);  /* 0C07B430 mov.l @(disp,pc),Rn */
	IF(0x0C07B432u); { u32 t_ = r10; PR = 0x0C07B436u; r15 += 0x4u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C07B436u); }  /* 0C07B432 jsr @Rn */
L_0C07B436: BLKS(0x0C07B436u);
	{ IF(0x0C07B438u); ; /* slot nop */ UPD(0x0C07B3ECu, 3); goto L_0C07B3EC; }  /* 0C07B436 bra */
}

void f_0C07B490(sh3_t *c)
{
	LOCALS;
L_0C07B490: BLKS(0x0C07B490u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07B492u, 1);  /* 0C07B490 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07B494u, 1);  /* 0C07B492 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07B496u, 1);  /* 0C07B494 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07B498u, 1);  /* 0C07B496 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07B49Au, 1);  /* 0C07B498 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07B49Cu, 1);  /* 0C07B49A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B49Eu, 1);  /* 0C07B49C mov.l Rm,@-Rn */
	r10 = 0xC22C874u; UPD(0x0C07B4A0u, 1);  /* 0C07B49E mov.l @(disp,pc),Rn */
	IF(0x0C07B4A0u); r15 -= 4; W32(r15, PR); UPD(0x0C07B4A2u, 1);  /* 0C07B4A0 sts.l pr,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C07B4A4u, 1);  /* 0C07B4A2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE8u;  /* 0C07B4A4 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C07B4A8u, 2);  /* 0C07B4A6 mov.w @Rm,Rn */
	r14 = r15;  /* 0C07B4A8 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C07B4ACu, 2);  /* 0C07B4AA mov.l @(disp,pc),Rn */
	IF(0x0C07B4ACu); { u32 t_ = r8; PR = 0x0C07B4B0u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C07B4B0u); }  /* 0C07B4AC jsr @Rn */
L_0C07B4B0: BLKS(0x0C07B4B0u);
	T = (r0 & r0) == 0;  /* 0C07B4B0 tst Rm,Rn */
	if (!T) { UPD(0x0C07B4D0u, 4); goto L_0C07B4D0; }  /* 0C07B4B2 bf */
L_0C07B4B4: BLKS(0x0C07B4B4u);
	r0 = 0x1u;  /* 0C07B4B4 mov #imm,Rn */
	r14 += 0x18u;  /* 0C07B4B6 add #imm,Rn */
	r15 = r14;  /* 0C07B4B8 mov Rm,Rn */
	IF(0x0C07B4BAu); PR = R32(r15); r15 += 4; UPD(0x0C07B4BCu, 4);  /* 0C07B4BA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B4BEu, 1);  /* 0C07B4BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07B4C0u, 1);  /* 0C07B4BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07B4C2u, 1);  /* 0C07B4C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07B4C4u, 1);  /* 0C07B4C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07B4C6u, 1);  /* 0C07B4C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07B4C8u, 1);  /* 0C07B4C6 mov.l @Rm+,Rn */
	IF(0x0C07B4C8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07B4C8 rts */
L_0C07B4D0: BLKS(0x0C07B4D0u);
	r8 = 0xC0606C0u; UPD(0x0C07B4D2u, 1);  /* 0C07B4D0 mov.l @(disp,pc),Rn */
	IF(0x0C07B4D2u); { u32 t_ = r8; PR = 0x0C07B4D6u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C07B4D6u); }  /* 0C07B4D2 jsr @Rn */
L_0C07B4D6: BLKS(0x0C07B4D6u);
	T = (r0 & r0) == 0;  /* 0C07B4D6 tst Rm,Rn */
	if (T) { UPD(0x0C07B4B4u, 4); goto L_0C07B4B4; }  /* 0C07B4D8 bt */
L_0C07B4DA: BLKS(0x0C07B4DAu);
	r4 = 0x10u;  /* 0C07B4DA mov #imm,Rn */
	r3 = 0xC2755BCu; UPD(0x0C07B4DEu, 2);  /* 0C07B4DC mov.l @(disp,pc),Rn */
	r8 = 0xC050D70u; UPD(0x0C07B4E0u, 1);  /* 0C07B4DE mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r13 = v_; } UPD(0x0C07B4E2u, 1);  /* 0C07B4E0 mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C07B4E4u, 1);  /* 0C07B4E2 mov.w @(disp,pc),Rn */
	IF(0x0C07B4E4u); { u32 t_ = r8; PR = 0x0C07B4E8u; W32(r14, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C07B4E8u); }  /* 0C07B4E4 jsr @Rn */
L_0C07B4E8: BLKS(0x0C07B4E8u);
	IF(0x0C07B4E8u); MACL = r13 * r9;  /* 0C07B4E8 mul.l Rm,Rn */
	r8 = r0;  /* 0C07B4EA mov Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C07B4EEu, 4);  /* 0C07B4EC mov.l @(disp,pc),Rn */
	IF(0x0C07B4EEu); r9 = MACL;  /* 0C07B4EE sts macl,Rn */
	r1 = 0xC0A02D0u; UPD(0x0C07B4F2u, 2);  /* 0C07B4F0 mov.l @(disp,pc),Rn */
	r9 += r2;  /* 0C07B4F2 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C07B4F6u, 2);  /* 0C07B4F4 mov.w @Rm,Rn */
	r6 = 0x0u;  /* 0C07B4F6 mov #imm,Rn */
	r11 = 0xC3000000u; UPD(0x0C07B4FAu, 2);  /* 0C07B4F8 mov.l @(disp,pc),Rn */
	r7 = r0 & 0xFFFF;  /* 0C07B4FA extu.w Rm,Rn */
	r8 += 0x10u;  /* 0C07B4FC add #imm,Rn */
	W32(r9 + 0x4u, r7); UPD(0x0C07B500u, 3);  /* 0C07B4FE mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C07B500 mov Rm,Rn */
	W32(r9 + 0xCu, r6); UPD(0x0C07B504u, 2);  /* 0C07B502 mov.l Rm,@(disp,Rn) */
	W32(r9, r11); UPD(0x0C07B506u, 1);  /* 0C07B504 mov.l Rm,@Rn */
	IF(0x0C07B506u); { u32 t_ = r1; PR = 0x0C07B50Au; W32(r9 + 0x8u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07B50Au); }  /* 0C07B506 jsr @Rn */
L_0C07B50A: BLKS(0x0C07B50Au);
	r4 = 0x1640000u; UPD(0x0C07B50Cu, 1);  /* 0C07B50A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFF0u;  /* 0C07B50C add #imm,Rn */
	r12 = 0xC061380u; UPD(0x0C07B510u, 2);  /* 0C07B50E mov.l @(disp,pc),Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C07B512u, 1);  /* 0C07B510 mov.l Rm,@(disp,Rn) */
	r10 = 0xC0A1530u; UPD(0x0C07B514u, 1);  /* 0C07B512 mov.l @(disp,pc),Rn */
	IF(0x0C07B514u); { u32 t_ = r12; PR = 0x0C07B518u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C061380, 0x0C061380u, 0x0C07B518u); }  /* 0C07B514 jsr @Rn */
L_0C07B518: BLKS(0x0C07B518u);
	IF(0x0C07B518u); { u32 t_ = r10; PR = 0x0C07B51Cu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C07B51Cu); }  /* 0C07B518 jsr @Rn */
L_0C07B51C: BLKS(0x0C07B51Cu);
	r5 = 0x100u; UPD(0x0C07B51Eu, 1);  /* 0C07B51C mov.w @(disp,pc),Rn */
	r3 = r8;  /* 0C07B51E mov Rm,Rn */
	r0 = 0x8Au; UPD(0x0C07B522u, 2);  /* 0C07B520 mov.w @(disp,pc),Rn */
	IF(0x0C07B522u); r3 <<= 2;  /* 0C07B522 shll2 Rn */
	W32(r14 + 0x4u, r3); UPD(0x0C07B526u, 2);  /* 0C07B524 mov.l Rm,@(disp,Rn) */
	r12 = r9;  /* 0C07B526 mov Rm,Rn */
	IF(0x0C07B528u); W16(r0 + r9, r5); UPD(0x0C07B52Au, 2);  /* 0C07B528 mov.w Rm,@(r0,Rn) */
	r2 = 0xC1912BCu; UPD(0x0C07B52Cu, 1);  /* 0C07B52A mov.l @(disp,pc),Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C07B52Eu, 1);  /* 0C07B52C mov.l @(disp,Rm),Rn */
	IF(0x0C07B52Eu); r11 = R32(r0 + r2); UPD(0x0C07B530u, 1);  /* 0C07B52E mov.l @(r0,Rm),Rn */
	r0 = 0x8Cu; UPD(0x0C07B532u, 1);  /* 0C07B530 mov.w @(disp,pc),Rn */
	IF(0x0C07B532u); W32(r0 + r9, r11); UPD(0x0C07B534u, 1);  /* 0C07B532 mov.l Rm,@(r0,Rn) */
	r0 = 0xACu; UPD(0x0C07B536u, 1);  /* 0C07B534 mov.w @(disp,pc),Rn */
	r10 = 0x84u; UPD(0x0C07B538u, 1);  /* 0C07B536 mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C07B538 add Rm,Rn */
	r12 += r10;  /* 0C07B53A add Rm,Rn */
	r0 += 0x1u;  /* 0C07B53C add #imm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C07B540u, 4);  /* 0C07B53E mov.l Rm,@(disp,Rn) */
	r12 += 0x2u;  /* 0C07B540 add #imm,Rn */
	r7 = 0xC191268u; UPD(0x0C07B544u, 2);  /* 0C07B542 mov.l @(disp,pc),Rn */
	W16(r12, r5); UPD(0x0C07B546u, 1);  /* 0C07B544 mov.w Rm,@Rn */
	r0 = r7;  /* 0C07B546 mov Rm,Rn */
	r11 = 0xA8u; UPD(0x0C07B54Au, 2);  /* 0C07B548 mov.w @(disp,pc),Rn */
	IF(0x0C07B54Au); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07B54Cu, 1);  /* 0C07B54A mov.b @(r0,Rm),Rn */
	r11 += r9;  /* 0C07B54C add Rm,Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C07B550u, 2);  /* 0C07B54E mov.l @(disp,Rm),Rn */
	r11 += 0x1u;  /* 0C07B550 add #imm,Rn */
	r5 = 0xC050D70u; UPD(0x0C07B554u, 2);  /* 0C07B552 mov.l @(disp,pc),Rn */
	W8(r6, r4); UPD(0x0C07B556u, 1);  /* 0C07B554 mov.b Rm,@Rn */
	W8(r11, r4); UPD(0x0C07B558u, 1);  /* 0C07B556 mov.b Rm,@Rn */
	r8 = 0x98u; UPD(0x0C07B55Au, 1);  /* 0C07B558 mov.w @(disp,pc),Rn */
	IF(0x0C07B55Au); { u32 t_ = r5; PR = 0x0C07B55Eu; r4 = 0x5Au; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C07B55Eu); }  /* 0C07B55A jsr @Rn */
L_0C07B55E: BLKS(0x0C07B55Eu);
	r8 += r9;  /* 0C07B55E add Rm,Rn */
	r0 += 0x1Eu;  /* 0C07B560 add #imm,Rn */
	W8(r8, r0); UPD(0x0C07B564u, 3);  /* 0C07B562 mov.b Rm,@Rn */
	r4 = 0x10u;  /* 0C07B564 mov #imm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C07B568u, 2);  /* 0C07B566 mov.l @(disp,Rm),Rn */
	r3 = 0xC191278u; UPD(0x0C07B56Au, 1);  /* 0C07B568 mov.l @(disp,pc),Rn */
	IF(0x0C07B56Au); r2 = R32(r0 + r3); UPD(0x0C07B56Cu, 1);  /* 0C07B56A mov.l @(r0,Rm),Rn */
	r0 = R32(r14); UPD(0x0C07B56Eu, 1);  /* 0C07B56C mov.l @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C07B570u, 1);  /* 0C07B56E mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r0); UPD(0x0C07B572u, 1);  /* 0C07B570 mov.w @Rm,Rn */
	IF(0x0C07B572u); MACL = r7 * r8;  /* 0C07B572 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C07B576u, 3);  /* 0C07B574 mov.l @(disp,pc),Rn */
	IF(0x0C07B576u); r8 = MACL;  /* 0C07B576 sts macl,Rn */
	r8 += r1;  /* 0C07B578 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C07B57A add #imm,Rn */
	W16(r8, r13); UPD(0x0C07B57Eu, 4);  /* 0C07B57C mov.w Rm,@Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C07B580u, 1);  /* 0C07B57E mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFF84u;  /* 0C07B580 add #imm,Rn */
	r3 = 0xC0A02D0u; UPD(0x0C07B584u, 2);  /* 0C07B582 mov.l @(disp,pc),Rn */
	r0 &= 0xFu;  /* 0C07B584 and #imm,r0 */
	W32(r14 + 0xCu, r7); UPD(0x0C07B588u, 2);  /* 0C07B586 mov.l Rm,@(disp,Rn) */
	r10 += r8;  /* 0C07B588 add Rm,Rn */
	r6 = 0xC0000000u; UPD(0x0C07B58Cu, 2);  /* 0C07B58A mov.l @(disp,pc),Rn */
	r10 += 0x2u;  /* 0C07B58C add #imm,Rn */
	r5 = R32(r9 + 0x4u); UPD(0x0C07B590u, 2);  /* 0C07B58E mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C07B592u, 1);  /* 0C07B590 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x38u, r2); UPD(0x0C07B594u, 1);  /* 0C07B592 mov.l Rm,@(disp,Rn) */
	W32(r8, r6); UPD(0x0C07B596u, 1);  /* 0C07B594 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C07B598u, 1);  /* 0C07B596 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r0); UPD(0x0C07B59Au, 1);  /* 0C07B598 mov.l Rm,@(disp,Rn) */
	IF(0x0C07B59Au); { u32 t_ = r3; PR = 0x0C07B59Eu; r4 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07B59Eu); }  /* 0C07B59A jsr @Rn */
L_0C07B59E: BLKS(0x0C07B59Eu);
	r2 = (u32)(s32)(s16)R16(r12); UPD(0x0C07B5A0u, 1);  /* 0C07B59E mov.w @Rm,Rn */
	W16(r10, r2); UPD(0x0C07B5A2u, 1);  /* 0C07B5A0 mov.w Rm,@Rn */
	r12 = 0x0u;  /* 0C07B5A2 mov #imm,Rn */
	r0 = R32(r9 + 0x24u); UPD(0x0C07B5A6u, 2);  /* 0C07B5A4 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A1530u; UPD(0x0C07B5A8u, 1);  /* 0C07B5A6 mov.l @(disp,pc),Rn */
	r13 = R32(r9 + 0x28u); UPD(0x0C07B5AAu, 1);  /* 0C07B5A8 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C07B5ACu, 1);  /* 0C07B5AA mov.l Rm,@(disp,Rn) */
	r4 = R32(r14 + 0xCu); UPD(0x0C07B5AEu, 1);  /* 0C07B5AC mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r13); UPD(0x0C07B5B0u, 1);  /* 0C07B5AE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r12); UPD(0x0C07B5B2u, 1);  /* 0C07B5B0 mov.l Rm,@(disp,Rn) */
	IF(0x0C07B5B2u); { u32 t_ = r10; PR = 0x0C07B5B6u; W32(r8 + 0x2Cu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C07B5B6u); }  /* 0C07B5B2 jsr @Rn */
L_0C07B5B6: BLKS(0x0C07B5B6u);
	r0 = 0xB0u; UPD(0x0C07B5B8u, 1);  /* 0C07B5B6 mov.w @(disp,pc),Rn */
	r6 = 0xA8u; UPD(0x0C07B5BAu, 1);  /* 0C07B5B8 mov.w @(disp,pc),Rn */
	IF(0x0C07B5BAu); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07B5BCu, 1);  /* 0C07B5BA mov.b @(r0,Rm),Rn */
	r6 += r8;  /* 0C07B5BC add Rm,Rn */
	IF(0x0C07B5BEu); W8(r0 + r8, r7); UPD(0x0C07B5C0u, 2);  /* 0C07B5BE mov.b Rm,@(r0,Rn) */
	r6 += 0x1u;  /* 0C07B5C0 add #imm,Rn */
	W32(r14 + 0x10u, r6); UPD(0x0C07B5C4u, 2);  /* 0C07B5C2 mov.l Rm,@(disp,Rn) */
	r0 += 0xFFFFFFFDu;  /* 0C07B5C4 add #imm,Rn */
	r4 = R32(r14 + 0x10u); UPD(0x0C07B5C8u, 2);  /* 0C07B5C6 mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C07B5C8 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C07B5CCu, 2);  /* 0C07B5CA mov.b @Rm,Rn */
	W8(r4, r5); UPD(0x0C07B5CEu, 1);  /* 0C07B5CC mov.b Rm,@Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C07B5D0u, 1);  /* 0C07B5CE mov.l @(disp,Rm),Rn */
	r2 = R32(r9 + 0x38u); UPD(0x0C07B5D2u, 1);  /* 0C07B5D0 mov.l @(disp,Rm),Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C07B5D4u, 1);  /* 0C07B5D2 mov.b @Rm,Rn */
	W32(r8 + 0x38u, r2); UPD(0x0C07B5D6u, 1);  /* 0C07B5D4 mov.l Rm,@(disp,Rn) */
	{ W8(r0, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C07B4B4u, 3); goto L_0C07B4B4; }  /* 0C07B5D6 bra */
}

void f_0C07B630(sh3_t *c)
{
	LOCALS;
L_0C07B630: BLKS(0x0C07B630u);
	r2 = 0xB4u; UPD(0x0C07B632u, 1);  /* 0C07B630 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C07B632 exts.w Rm,Rn */
	IF(0x0C07B634u); MACL = r4 * r2;  /* 0C07B634 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07B638u, 4);  /* 0C07B636 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B63Au, 1);  /* 0C07B638 mov.l Rm,@-Rn */
	IF(0x0C07B63Au); r2 = MACL;  /* 0C07B63A sts macl,Rn */
	r2 += r0;  /* 0C07B63C add Rm,Rn */
	r3 = R32(r2 + 0x8u); UPD(0x0C07B640u, 3);  /* 0C07B63E mov.l @(disp,Rm),Rn */
	r0 = 0xFu;  /* 0C07B640 mov #imm,Rn */
	T = r3 > r0;  /* 0C07B642 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07B6A0u, 5); goto L_0C07B6A0; } goto L_0C07B648; }  /* 0C07B644 bt/s */
L_0C07B648: BLKS(0x0C07B648u);
	r0 = 0xC07B658u;  /* 0C07B648 mova @(disp,pc),r0 */
	IF(0x0C07B64Au); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07B64Cu, 3);  /* 0C07B64A mov.b @(r0,Rm),Rn */
	IF(0x0C07B64Cu); { u32 tv_ = (r5 + 0x0C07B650u); u32 t_ = PHYS(tv_); IF(0x0C07B64Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07B670u: goto L_0C07B670; case 0x0C07B680u: goto L_0C07B680; case 0x0C07B690u: goto L_0C07B690; default: JUMPD(tv_); } }  /* 0C07B64C braf Rn */
L_0C07B670: BLKS(0x0C07B670u);
	r1 = 0xC0A0C60u; UPD(0x0C07B672u, 1);  /* 0C07B670 mov.l @(disp,pc),Rn */
L_0C07B672: BLKS(0x0C07B672u);
	r15 = r14;  /* 0C07B672 mov Rm,Rn */
	IF(0x0C07B674u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A0C60u: goto L_0C0A0C60; case 0x0C0A0E20u: TAIL(f_0C0A0E20); default: JUMPD(tv_); } }  /* 0C07B674 jmp @Rn */
L_0C07B680: BLKS(0x0C07B680u);
	r1 = 0xC0A0E20u; UPD(0x0C07B682u, 1);  /* 0C07B680 mov.l @(disp,pc),Rn */
	{ IF(0x0C07B684u); ; /* slot nop */ UPD(0x0C07B672u, 3); goto L_0C07B672; }  /* 0C07B682 bra */
L_0C07B690: BLKS(0x0C07B690u);
	r1 = 0xC0A0FB0u; UPD(0x0C07B692u, 1);  /* 0C07B690 mov.l @(disp,pc),Rn */
	{ IF(0x0C07B694u); ; /* slot nop */ UPD(0x0C07B672u, 3); goto L_0C07B672; }  /* 0C07B692 bra */
L_0C07B6A0: BLKS(0x0C07B6A0u);
	r3 = 0x0u;  /* 0C07B6A0 mov #imm,Rn */
	W32(r2, r3); UPD(0x0C07B6A4u, 2);  /* 0C07B6A2 mov.l Rm,@Rn */
	r15 = r14;  /* 0C07B6A4 mov Rm,Rn */
	IF(0x0C07B6A6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C07B6A6 rts */
L_0C0A0C60: BLKS(0x0C0A0C60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0C62u, 1);  /* 0C0A0C60 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0C64u, 1);  /* 0C0A0C62 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A0C64 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0C68u, 2);  /* 0C0A0C66 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0A0C68 mov #imm,Rn */
	r9 = 0xC050D70u; UPD(0x0C0A0C6Cu, 2);  /* 0C0A0C6A mov.l @(disp,pc),Rn */
	IF(0x0C0A0C6Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0A0C6Eu, 1);  /* 0C0A0C6C sts.l pr,@-Rn */
	IF(0x0C0A0C6Eu); { u32 t_ = r9; PR = 0x0C0A0C72u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A0C72u); }  /* 0C0A0C6E jsr @Rn */
L_0C0A0C72: BLKS(0x0C0A0C72u);
	r2 = r0;  /* 0C0A0C72 mov Rm,Rn */
	r0 = 0x4u;  /* 0C0A0C74 mov #imm,Rn */
	T = r2 > r0;  /* 0C0A0C76 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0A0C80u, 6); goto L_0C0A0C80; }  /* 0C0A0C78 bf */
L_0C0A0C7A: BLKS(0x0C0A0C7Au);
	r15 += 0xFFFFFFF8u;  /* 0C0A0C7A add #imm,Rn */
	{ IF(0x0C0A0C7Eu); ; /* slot nop */ UPD(0x0C0A0DD0u, 4); goto L_0C0A0DD0; }  /* 0C0A0C7C bra */
L_0C0A0C80: BLKS(0x0C0A0C80u);
	r0 = 0xC0A0C90u;  /* 0C0A0C80 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0A0C82 add Rm,Rn */
	IF(0x0C0A0C84u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A0C86u, 3);  /* 0C0A0C84 mov.w @(r0,Rm),Rn */
	IF(0x0C0A0C86u); { u32 tv_ = (r3 + 0x0C0A0C8Au); u32 t_ = PHYS(tv_); IF(0x0C0A0C88u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A0CA0u: goto L_0C0A0CA0; case 0x0C0A0D00u: goto L_0C0A0D00; case 0x0C0A0D30u: goto L_0C0A0D30; case 0x0C0A0D70u: goto L_0C0A0D70; case 0x0C0A0DA0u: goto L_0C0A0DA0; default: JUMPD(tv_); } }  /* 0C0A0C86 braf Rn */
L_0C0A0CA0: BLKS(0x0C0A0CA0u);
	r0 = 0xB4u; UPD(0x0C0A0CA2u, 1);  /* 0C0A0CA0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0CA2 add #imm,Rn */
	IF(0x0C0A0CA4u); MACL = r8 * r0;  /* 0C0A0CA4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0CA8u, 4);  /* 0C0A0CA6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A0CAAu, 1);  /* 0C0A0CA8 mov.w @(disp,pc),Rn */
	IF(0x0C0A0CAAu); r3 = MACL;  /* 0C0A0CAA sts macl,Rn */
	r3 += r9;  /* 0C0A0CAC add Rm,Rn */
	IF(0x0C0A0CAEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0CB0u, 3);  /* 0C0A0CAE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A0CB0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A0CB4u, 2);  /* 0C0A0CB2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0CB4 add #imm,Rn */
	IF(0x0C0A0CB6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0CB8u, 2);  /* 0C0A0CB6 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A0CB8 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A0CBA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A0CBEu, 3);  /* 0C0A0CBC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C0A0CC0u, 1);  /* 0C0A0CBE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A0CC2u, 1);  /* 0C0A0CC0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0CC4u, 1);  /* 0C0A0CC2 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0A0CC6u, 1);  /* 0C0A0CC4 mov.l @(disp,Rm),Rn */
	IF(0x0C0A0CC6u); ;  /* 0C0A0CC6 nop */
	UPD(0x0C0A0CC8u, 1);
L_0C0A0CC8: BLKS(0x0C0A0CC8u);
	IF(0x0C0A0CC8u); { u32 t_ = r0; PR = 0x0C0A0CCCu; IF(0x0C0A0CCAu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A0CCCu); }  /* 0C0A0CC8 jsr @Rn */
L_0C0A0CCC: BLKS(0x0C0A0CCCu);
	r15 += 0x8u;  /* 0C0A0CCC add #imm,Rn */
	UPD(0x0C0A0CCEu, 1);
L_0C0A0CCE: BLKS(0x0C0A0CCEu);
	r4 = 0xB4u; UPD(0x0C0A0CD0u, 1);  /* 0C0A0CCE mov.w @(disp,pc),Rn */
	IF(0x0C0A0CD0u); MACL = r8 * r4;  /* 0C0A0CD0 mul.l Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0A0CD4u, 3);  /* 0C0A0CD2 mov.w @(disp,pc),Rn */
	IF(0x0C0A0CD4u); r8 = MACL;  /* 0C0A0CD4 sts macl,Rn */
	r8 += r9;  /* 0C0A0CD6 add Rm,Rn */
	r9 = 0xC7C37F8u; UPD(0x0C0A0CDAu, 3);  /* 0C0A0CD8 mov.l @(disp,pc),Rn */
	IF(0x0C0A0CDAu); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A0CDCu, 1);  /* 0C0A0CDA mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A0CDEu, 1);  /* 0C0A0CDC mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A0CDE extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A0CE2u, 2);  /* 0C0A0CE0 mov.l @(disp,Rm),Rn */
	IF(0x0C0A0CE2u); { u32 t_ = r9; PR = 0x0C0A0CE6u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C37F8, 0x0C7C37F8u, 0x0C0A0CE6u); }  /* 0C0A0CE2 jsr @Rn */
L_0C0A0CE6: BLKS(0x0C0A0CE6u);
	r9 = 0x0u;  /* 0C0A0CE6 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0A0CEAu, 2);  /* 0C0A0CE8 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A0CEA mov Rm,Rn */
	IF(0x0C0A0CECu); PR = R32(r15); r15 += 4; UPD(0x0C0A0CEEu, 2);  /* 0C0A0CEC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A0CF0u, 1);  /* 0C0A0CEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A0CF2u, 1);  /* 0C0A0CF0 mov.l @Rm+,Rn */
	IF(0x0C0A0CF2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A0CF2 rts */
L_0C0A0D00: BLKS(0x0C0A0D00u);
	r5 = 0xB4u; UPD(0x0C0A0D02u, 1);  /* 0C0A0D00 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0D02 add #imm,Rn */
	IF(0x0C0A0D04u); MACL = r8 * r5;  /* 0C0A0D04 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0D08u, 4);  /* 0C0A0D06 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A0D0Au, 1);  /* 0C0A0D08 mov.w @(disp,pc),Rn */
	IF(0x0C0A0D0Au); r3 = MACL;  /* 0C0A0D0A sts macl,Rn */
	r3 += r9;  /* 0C0A0D0C add Rm,Rn */
	IF(0x0C0A0D0Eu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0D10u, 3);  /* 0C0A0D0E mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A0D10 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A0D12 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A0D16u, 3);  /* 0C0A0D14 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0D16 add #imm,Rn */
	IF(0x0C0A0D18u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0D1Au, 2);  /* 0C0A0D18 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A0D1A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0A0D1Eu, 2);  /* 0C0A0D1C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C0A0D20u, 1);  /* 0C0A0D1E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A0D22u, 1);  /* 0C0A0D20 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0D24u, 1);  /* 0C0A0D22 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A0CC8u, 3); goto L_0C0A0CC8; }  /* 0C0A0D24 bra */
L_0C0A0D30: BLKS(0x0C0A0D30u);
	r3 = 0xB4u; UPD(0x0C0A0D32u, 1);  /* 0C0A0D30 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0A0D32 add #imm,Rn */
	IF(0x0C0A0D34u); MACL = r8 * r3;  /* 0C0A0D34 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0D38u, 4);  /* 0C0A0D36 mov.l @(disp,pc),Rn */
	IF(0x0C0A0D38u); r3 = MACL;  /* 0C0A0D38 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A0D3Cu, 2);  /* 0C0A0D3A mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0A0D3C add Rm,Rn */
	IF(0x0C0A0D3Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0D40u, 2);  /* 0C0A0D3E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A0D40 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A0D44u, 2);  /* 0C0A0D42 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0D44 add #imm,Rn */
	IF(0x0C0A0D46u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0D48u, 2);  /* 0C0A0D46 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A0D48 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A0D4A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A0D4Eu, 3);  /* 0C0A0D4C mov.l Rm,@(disp,Rn) */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0A0D50u, 1);  /* 0C0A0D4E mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r6); UPD(0x0C0A0D52u, 1);  /* 0C0A0D50 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x30u); UPD(0x0C0A0D54u, 1);  /* 0C0A0D52 mov.l @(disp,Rm),Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0A0D56u, 1);  /* 0C0A0D54 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC3B0u; UPD(0x0C0A0D58u, 1);  /* 0C0A0D56 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A0D5Au, 1);  /* 0C0A0D58 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0D5Cu, 1);  /* 0C0A0D5A mov.l @(disp,Rm),Rn */
	IF(0x0C0A0D5Cu); { u32 t_ = r0; PR = 0x0C0A0D60u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC3B0, 0x0C0AC3B0u, 0x0C0A0D60u); }  /* 0C0A0D5C jsr @Rn */
L_0C0A0D60: BLKS(0x0C0A0D60u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0A0CCEu, 3); goto L_0C0A0CCE; }  /* 0C0A0D60 bra */
L_0C0A0D70: BLKS(0x0C0A0D70u);
	r4 = 0xB4u; UPD(0x0C0A0D72u, 1);  /* 0C0A0D70 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0D72 add #imm,Rn */
	IF(0x0C0A0D74u); MACL = r8 * r4;  /* 0C0A0D74 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0D78u, 4);  /* 0C0A0D76 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0A0D78 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0A0D7Cu, 2);  /* 0C0A0D7A mov.w @(disp,pc),Rn */
	IF(0x0C0A0D7Cu); r3 = MACL;  /* 0C0A0D7C sts macl,Rn */
	r3 += r9;  /* 0C0A0D7E add Rm,Rn */
	IF(0x0C0A0D80u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0D82u, 3);  /* 0C0A0D80 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0A0D82 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0A0D86u, 2);  /* 0C0A0D84 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0D86 add #imm,Rn */
	IF(0x0C0A0D88u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0D8Au, 2);  /* 0C0A0D88 mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C0A0D8A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A0D8Eu, 2);  /* 0C0A0D8C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0ADB30u; UPD(0x0C0A0D90u, 1);  /* 0C0A0D8E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A0D92u, 1);  /* 0C0A0D90 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0D94u, 1);  /* 0C0A0D92 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A0CC8u, 3); goto L_0C0A0CC8; }  /* 0C0A0D94 bra */
L_0C0A0DA0: BLKS(0x0C0A0DA0u);
	r0 = 0xB4u; UPD(0x0C0A0DA2u, 1);  /* 0C0A0DA0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0DA2 add #imm,Rn */
	IF(0x0C0A0DA4u); MACL = r8 * r0;  /* 0C0A0DA4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0DA8u, 4);  /* 0C0A0DA6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A0DAAu, 1);  /* 0C0A0DA8 mov.w @(disp,pc),Rn */
	IF(0x0C0A0DAAu); r3 = MACL;  /* 0C0A0DAA sts macl,Rn */
	r3 += r9;  /* 0C0A0DAC add Rm,Rn */
	IF(0x0C0A0DAEu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0DB0u, 3);  /* 0C0A0DAE mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0A0DB0 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0A0DB4u, 2);  /* 0C0A0DB2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0DB4 add #imm,Rn */
	IF(0x0C0A0DB6u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0DB8u, 2);  /* 0C0A0DB6 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A0DB8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0A0DBCu, 2);  /* 0C0A0DBA mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0A0DBEu, 1);  /* 0C0A0DBC mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0A0DBE mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C0A0DC2u, 2);  /* 0C0A0DC0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0DC4u, 1);  /* 0C0A0DC2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A0CC8u, 3); goto L_0C0A0CC8; }  /* 0C0A0DC4 bra */
L_0C0A0DD0: BLKS(0x0C0A0DD0u);
	r6 = 0xB4u; UPD(0x0C0A0DD2u, 1);  /* 0C0A0DD0 mov.w @(disp,pc),Rn */
	IF(0x0C0A0DD2u); MACL = r8 * r6;  /* 0C0A0DD2 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0DD6u, 3);  /* 0C0A0DD4 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A0DD8u, 1);  /* 0C0A0DD6 mov.w @(disp,pc),Rn */
	IF(0x0C0A0DD8u); r3 = MACL;  /* 0C0A0DD8 sts macl,Rn */
	r3 += r9;  /* 0C0A0DDA add Rm,Rn */
	IF(0x0C0A0DDCu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0DDEu, 3);  /* 0C0A0DDC mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A0DDE extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A0DE2u, 2);  /* 0C0A0DE0 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0DE2 add #imm,Rn */
	IF(0x0C0A0DE4u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0DE6u, 2);  /* 0C0A0DE4 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A0DE6 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A0DE8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A0DECu, 3);  /* 0C0A0DEA mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C0A0DEEu, 1);  /* 0C0A0DEC mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A0DF0u, 1);  /* 0C0A0DEE mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0DF2u, 1);  /* 0C0A0DF0 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A0CC8u, 3); goto L_0C0A0CC8; }  /* 0C0A0DF2 bra */
}

void f_0C07B6C0(sh3_t *c)
{
	LOCALS;
	goto L_0C07B6C0;
L_0C07B630: BLKS(0x0C07B630u);
	r2 = 0xB4u; UPD(0x0C07B632u, 1);  /* 0C07B630 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C07B632 exts.w Rm,Rn */
	IF(0x0C07B634u); MACL = r4 * r2;  /* 0C07B634 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07B638u, 4);  /* 0C07B636 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B63Au, 1);  /* 0C07B638 mov.l Rm,@-Rn */
	IF(0x0C07B63Au); r2 = MACL;  /* 0C07B63A sts macl,Rn */
	r2 += r0;  /* 0C07B63C add Rm,Rn */
	r3 = R32(r2 + 0x8u); UPD(0x0C07B640u, 3);  /* 0C07B63E mov.l @(disp,Rm),Rn */
	r0 = 0xFu;  /* 0C07B640 mov #imm,Rn */
	T = r3 > r0;  /* 0C07B642 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07B6A0u, 5); goto L_0C07B6A0; } goto L_0C07B648; }  /* 0C07B644 bt/s */
L_0C07B648: BLKS(0x0C07B648u);
	r0 = 0xC07B658u;  /* 0C07B648 mova @(disp,pc),r0 */
	IF(0x0C07B64Au); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07B64Cu, 3);  /* 0C07B64A mov.b @(r0,Rm),Rn */
	IF(0x0C07B64Cu); { u32 tv_ = (r5 + 0x0C07B650u); u32 t_ = PHYS(tv_); IF(0x0C07B64Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07B670u: goto L_0C07B670; case 0x0C07B680u: goto L_0C07B680; case 0x0C07B690u: goto L_0C07B690; default: JUMPD(tv_); } }  /* 0C07B64C braf Rn */
L_0C07B670: BLKS(0x0C07B670u);
	r1 = 0xC0A0C60u; UPD(0x0C07B672u, 1);  /* 0C07B670 mov.l @(disp,pc),Rn */
L_0C07B672: BLKS(0x0C07B672u);
	r15 = r14;  /* 0C07B672 mov Rm,Rn */
	IF(0x0C07B674u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A0C60u: goto L_0C0A0C60; case 0x0C0A0E20u: TAIL(f_0C0A0E20); default: JUMPD(tv_); } }  /* 0C07B674 jmp @Rn */
L_0C07B680: BLKS(0x0C07B680u);
	r1 = 0xC0A0E20u; UPD(0x0C07B682u, 1);  /* 0C07B680 mov.l @(disp,pc),Rn */
	{ IF(0x0C07B684u); ; /* slot nop */ UPD(0x0C07B672u, 3); goto L_0C07B672; }  /* 0C07B682 bra */
L_0C07B690: BLKS(0x0C07B690u);
	r1 = 0xC0A0FB0u; UPD(0x0C07B692u, 1);  /* 0C07B690 mov.l @(disp,pc),Rn */
	{ IF(0x0C07B694u); ; /* slot nop */ UPD(0x0C07B672u, 3); goto L_0C07B672; }  /* 0C07B692 bra */
L_0C07B6A0: BLKS(0x0C07B6A0u);
	r3 = 0x0u;  /* 0C07B6A0 mov #imm,Rn */
	W32(r2, r3); UPD(0x0C07B6A4u, 2);  /* 0C07B6A2 mov.l Rm,@Rn */
	r15 = r14;  /* 0C07B6A4 mov Rm,Rn */
	IF(0x0C07B6A6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C07B6A6 rts */
L_0C07B6C0: BLKS(0x0C07B6C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07B6C2u, 1);  /* 0C07B6C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07B6C4u, 1);  /* 0C07B6C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07B6C6u, 1);  /* 0C07B6C4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07B6C8u, 1);  /* 0C07B6C6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07B6CAu, 1);  /* 0C07B6C8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07B6CA exts.w Rm,Rn */
	r8 = 0xB4u; UPD(0x0C07B6CEu, 2);  /* 0C07B6CC mov.w @(disp,pc),Rn */
	r12 = 0xFFFFFFFCu;  /* 0C07B6CE mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07B6D2u, 2);  /* 0C07B6D0 mov.l Rm,@-Rn */
	IF(0x0C07B6D2u); MACL = r11 * r8;  /* 0C07B6D2 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B6D6u, 3);  /* 0C07B6D4 mov.l Rm,@-Rn */
	r13 = 0xC26CD40u; UPD(0x0C07B6D8u, 1);  /* 0C07B6D6 mov.l @(disp,pc),Rn */
	IF(0x0C07B6D8u); r9 = MACL;  /* 0C07B6D8 sts macl,Rn */
	IF(0x0C07B6DAu); r15 -= 4; W32(r15, PR); UPD(0x0C07B6DCu, 2);  /* 0C07B6DA sts.l pr,@-Rn */
	r9 += r13;  /* 0C07B6DC add Rm,Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C07B6E0u, 2);  /* 0C07B6DE mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C07B6E0 add #imm,Rn */
	IF(0x0C07B6E2u); ARG0(0x40CCu); { s32 s_ = (s32)r12; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C07B6E2 shad Rm,Rn */
	r14 = r15;  /* 0C07B6E4 mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C07B6E6 cmp/eq #imm,r0 */
	{ u32 c_ = !T; IF(0x0C07B6EAu); r10 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C07B6F0u, 7); goto L_0C07B6F0; } goto L_0C07B6EC; }  /* 0C07B6E8 bf/s */
L_0C07B6EC: BLKS(0x0C07B6ECu);
	{ r8 += 0xFFFFFFD2u; /* slot add #imm,Rn */ UPD(0x0C07B820u, 4); goto L_0C07B820; }  /* 0C07B6EC bra */
L_0C07B6F0: BLKS(0x0C07B6F0u);
	r10 = 0xC0A03F0u; UPD(0x0C07B6F2u, 1);  /* 0C07B6F0 mov.l @(disp,pc),Rn */
	IF(0x0C07B6F2u); { u32 t_ = r10; PR = 0x0C07B6F6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C07B6F6u); }  /* 0C07B6F2 jsr @Rn */
L_0C07B6F6: BLKS(0x0C07B6F6u);
	IF(0x0C07B6F6u); T = (s32)r0 >= 0;  /* 0C07B6F6 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C07B6FAu); MACL = r0 * r8; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C07B700u, 5); goto L_0C07B700; } goto L_0C07B6FC; }  /* 0C07B6F8 bt/s */
L_0C07B6FC: BLKS(0x0C07B6FCu);
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C07B800u, 5); goto L_0C07B800; }  /* 0C07B6FC bra */
L_0C07B700: BLKS(0x0C07B700u);
	r5 = 0xA8u; UPD(0x0C07B702u, 1);  /* 0C07B700 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C07B702 mov Rm,Rn */
	IF(0x0C07B704u); r8 = MACL;  /* 0C07B704 sts macl,Rn */
	r8 += r13;  /* 0C07B706 add Rm,Rn */
	r10 = R32(r8 + 0x28u); UPD(0x0C07B70Au, 4);  /* 0C07B708 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x28u, r10); UPD(0x0C07B70Cu, 1);  /* 0C07B70A mov.l Rm,@(disp,Rn) */
	r10 = r9;  /* 0C07B70C mov Rm,Rn */
	r10 += r5;  /* 0C07B70E add Rm,Rn */
	r5 += r8;  /* 0C07B710 add Rm,Rn */
	r5 += 0x1u;  /* 0C07B712 add #imm,Rn */
	r13 = 0xC058130u; UPD(0x0C07B716u, 5);  /* 0C07B714 mov.l @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C07B716 add #imm,Rn */
	r2 = R32(r8 + 0x24u); UPD(0x0C07B71Au, 2);  /* 0C07B718 mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C07B71Cu, 1);  /* 0C07B71A mov.b @Rm,Rn */
	W32(r9 + 0x24u, r2); UPD(0x0C07B71Eu, 1);  /* 0C07B71C mov.l Rm,@(disp,Rn) */
	IF(0x0C07B71Eu); { u32 t_ = r13; PR = 0x0C07B722u; W8(r10, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C07B722u); }  /* 0C07B71E jsr @Rn */
L_0C07B722: BLKS(0x0C07B722u);
	r0 = R32(r9 + 0x8u); UPD(0x0C07B724u, 1);  /* 0C07B722 mov.l @(disp,Rm),Rn */
	r1 = 0xFu;  /* 0C07B724 mov #imm,Rn */
	r13 = 0xC057430u; UPD(0x0C07B728u, 2);  /* 0C07B726 mov.l @(disp,pc),Rn */
	r0 &= r1;  /* 0C07B728 and Rm,Rn */
	r7 = 0xC191300u; UPD(0x0C07B72Cu, 2);  /* 0C07B72A mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C07B72C add Rm,Rn */
	IF(0x0C07B72Eu); r5 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C07B730u, 2);  /* 0C07B72E mov.w @(r0,Rm),Rn */
	IF(0x0C07B730u); { u32 t_ = r13; PR = 0x0C07B734u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C07B734u); }  /* 0C07B730 jsr @Rn */
L_0C07B734: BLKS(0x0C07B734u);
	r4 = R32(r8 + 0x8u); UPD(0x0C07B736u, 1);  /* 0C07B734 mov.l @(disp,Rm),Rn */
	r8 = 0x86u; UPD(0x0C07B738u, 1);  /* 0C07B736 mov.w @(disp,pc),Rn */
	r4 += 0xFFFFFFF0u;  /* 0C07B738 add #imm,Rn */
	r8 += r9;  /* 0C07B73A add Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C07B73Eu, 3);  /* 0C07B73C mov.w @Rm,Rn */
	r6 = 0x1FFu; UPD(0x0C07B740u, 1);  /* 0C07B73E mov.w @(disp,pc),Rn */
	r13 += 0x8u;  /* 0C07B740 add #imm,Rn */
	r13 &= r6;  /* 0C07B742 and Rm,Rn */
	r3 = 0xC0A03B0u; UPD(0x0C07B746u, 3);  /* 0C07B744 mov.l @(disp,pc),Rn */
	IF(0x0C07B746u); ARG0(0x4DCCu); { s32 s_ = (s32)r12; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = (u32)((s32)r13 >> 31); else r13 = (u32)((s32)r13 >> ((~s_ & 31) + 1)); }  /* 0C07B746 shad Rm,Rn */
	W32(r9 + 0x8u, r4); UPD(0x0C07B74Au, 2);  /* 0C07B748 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r13); UPD(0x0C07B74Cu, 1);  /* 0C07B74A mov.l Rm,@(disp,Rn) */
	IF(0x0C07B74Cu); { u32 t_ = r3; PR = 0x0C07B750u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C07B750u); }  /* 0C07B74C jsr @Rn */
L_0C07B750: BLKS(0x0C07B750u);
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C07B752u, 1);  /* 0C07B750 mov.b @Rm,Rn */
	T = r0 == 0x14u;  /* 0C07B752 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C07B770u, 4); goto L_0C07B770; }  /* 0C07B754 bt */
L_0C07B756: BLKS(0x0C07B756u);
	r14 += 0xCu;  /* 0C07B756 add #imm,Rn */
	UPD(0x0C07B758u, 1);
L_0C07B758: BLKS(0x0C07B758u);
	r15 = r14;  /* 0C07B758 mov Rm,Rn */
	IF(0x0C07B75Au); PR = R32(r15); r15 += 4; UPD(0x0C07B75Cu, 2);  /* 0C07B75A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B75Eu, 1);  /* 0C07B75C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07B760u, 1);  /* 0C07B75E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07B762u, 1);  /* 0C07B760 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07B764u, 1);  /* 0C07B762 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07B766u, 1);  /* 0C07B764 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07B768u, 1);  /* 0C07B766 mov.l @Rm+,Rn */
	IF(0x0C07B768u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07B768 rts */
L_0C07B770: BLKS(0x0C07B770u);
	r12 = 0xC0A9E40u; UPD(0x0C07B772u, 1);  /* 0C07B770 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07B772 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C07B774 mov #imm,Rn */
	IF(0x0C07B776u); { u32 t_ = r12; PR = 0x0C07B77Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07B77Au); }  /* 0C07B776 jsr @Rn */
L_0C07B77A: BLKS(0x0C07B77Au);
	T = (r0 & r0) == 0;  /* 0C07B77A tst Rm,Rn */
	if (T) { UPD(0x0C07B756u, 4); goto L_0C07B756; }  /* 0C07B77C bt */
L_0C07B77E: BLKS(0x0C07B77Eu);
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C07B780u, 1);  /* 0C07B77E mov.b @Rm,Rn */
	r13 = 0xC0A9BB0u; UPD(0x0C07B782u, 1);  /* 0C07B780 mov.l @(disp,pc),Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C07B784u, 1);  /* 0C07B782 mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C07B784 extu.b Rm,Rn */
	IF(0x0C07B786u); { u32 t_ = r13; PR = 0x0C07B78Au; r5 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C07B78Au); }  /* 0C07B786 jsr @Rn */
L_0C07B78A: BLKS(0x0C07B78Au);
	T = (r0 & r0) == 0;  /* 0C07B78A tst Rm,Rn */
	if (T) { UPD(0x0C07B756u, 4); goto L_0C07B756; }  /* 0C07B78C bt */
L_0C07B78E: BLKS(0x0C07B78Eu);
	r12 = (u32)(s32)(s16)R16(r8); UPD(0x0C07B790u, 1);  /* 0C07B78E mov.w @Rm,Rn */
	r13 = 0x0u;  /* 0C07B790 mov #imm,Rn */
	W32(r14 + 0x4u, r9); UPD(0x0C07B794u, 2);  /* 0C07B792 mov.l Rm,@(disp,Rn) */
L_0C07B794: BLKS(0x0C07B794u);
	r10 = 0xC058060u; UPD(0x0C07B796u, 1);  /* 0C07B794 mov.l @(disp,pc),Rn */
	r5 = 0x120000u; UPD(0x0C07B798u, 1);  /* 0C07B796 mov.l @(disp,pc),Rn */
	IF(0x0C07B798u); { u32 t_ = r10; PR = 0x0C07B79Cu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07B79Cu); }  /* 0C07B798 jsr @Rn */
L_0C07B79C: BLKS(0x0C07B79Cu);
	r10 = r0;  /* 0C07B79C mov Rm,Rn */
	r9 = r13;  /* 0C07B79E mov Rm,Rn */
	r0 = 0xC191320u; UPD(0x0C07B7A2u, 3);  /* 0C07B7A0 mov.l @(disp,pc),Rn */
	IF(0x0C07B7A2u); r9 <<= 2;  /* 0C07B7A2 shll2 Rn */
	r8 = 0xC058030u; UPD(0x0C07B7A6u, 2);  /* 0C07B7A4 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C07B7A6 add Rm,Rn */
	r5 = R32(r9); UPD(0x0C07B7AAu, 2);  /* 0C07B7A8 mov.l @Rm,Rn */
	IF(0x0C07B7AAu); { u32 t_ = r8; PR = 0x0C07B7AEu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07B7AEu); }  /* 0C07B7AA jsr @Rn */
L_0C07B7AE: BLKS(0x0C07B7AEu);
	r3 = R32(r14 + 0x4u); UPD(0x0C07B7B0u, 1);  /* 0C07B7AE mov.l @(disp,Rm),Rn */
	r10 -= r0;  /* 0C07B7B0 sub Rm,Rn */
	r5 = R32(r3 + 0x24u); UPD(0x0C07B7B4u, 2);  /* 0C07B7B2 mov.l @(disp,Rm),Rn */
	r2 = 0xC058030u; UPD(0x0C07B7B6u, 1);  /* 0C07B7B4 mov.l @(disp,pc),Rn */
	r10 += r5;  /* 0C07B7B6 add Rm,Rn */
	r5 = 0x120000u; UPD(0x0C07B7BAu, 2);  /* 0C07B7B8 mov.l @(disp,pc),Rn */
	IF(0x0C07B7BAu); { u32 t_ = r2; PR = 0x0C07B7BEu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07B7BEu); }  /* 0C07B7BA jsr @Rn */
L_0C07B7BE: BLKS(0x0C07B7BEu);
	r4 = R32(r14 + 0x4u); UPD(0x0C07B7C0u, 1);  /* 0C07B7BE mov.l @(disp,Rm),Rn */
	r7 = 0xC058060u; UPD(0x0C07B7C2u, 1);  /* 0C07B7C0 mov.l @(disp,pc),Rn */
	r8 = R32(r4 + 0x28u); UPD(0x0C07B7C4u, 1);  /* 0C07B7C2 mov.l @(disp,Rm),Rn */
	r5 = R32(r9); UPD(0x0C07B7C6u, 1);  /* 0C07B7C4 mov.l @Rm,Rn */
	r8 += r0;  /* 0C07B7C6 add Rm,Rn */
	IF(0x0C07B7C8u); { u32 t_ = r7; PR = 0x0C07B7CCu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07B7CCu); }  /* 0C07B7C8 jsr @Rn */
L_0C07B7CC: BLKS(0x0C07B7CCu);
	r6 = 0x20000u; UPD(0x0C07B7CEu, 1);  /* 0C07B7CC mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07B7CE add #imm,Rn */
	W32(r15, r6); UPD(0x0C07B7D2u, 2);  /* 0C07B7D0 mov.l Rm,@Rn */
	r8 += r0;  /* 0C07B7D2 add Rm,Rn */
	r1 = 0xC7C17D0u; UPD(0x0C07B7D6u, 2);  /* 0C07B7D4 mov.l @(disp,pc),Rn */
	r9 = r13;  /* 0C07B7D6 mov Rm,Rn */
	r6 = r8;  /* 0C07B7D8 mov Rm,Rn */
	r9 += 0x1u;  /* 0C07B7DA add #imm,Rn */
	r4 = 0x2u;  /* 0C07B7DC mov #imm,Rn */
	r5 = r10;  /* 0C07B7DE mov Rm,Rn */
	r7 = r12;  /* 0C07B7E0 mov Rm,Rn */
	IF(0x0C07B7E2u); { u32 t_ = r1; PR = 0x0C07B7E6u; r13 = (u32)(s32)(s16)r9; /* slot exts.w Rm,Rn */ UPD(t_, 8); CALLP(t_, f_0C7C17D0, 0x0C7C17D0u, 0x0C07B7E6u); }  /* 0C07B7E2 jsr @Rn */
L_0C07B7E6: BLKS(0x0C07B7E6u);
	r8 = 0x1u;  /* 0C07B7E6 mov #imm,Rn */
	T = (s32)r13 > (s32)r8;  /* 0C07B7E8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07B794u, 5); goto L_0C07B794; } goto L_0C07B7EE; }  /* 0C07B7EA bf/s */
L_0C07B7EE: BLKS(0x0C07B7EEu);
	r4 = r11;  /* 0C07B7EE mov Rm,Rn */
	r11 = 0xC0580D0u; UPD(0x0C07B7F2u, 3);  /* 0C07B7F0 mov.l @(disp,pc),Rn */
	IF(0x0C07B7F2u); { u32 t_ = r11; PR = 0x0C07B7F6u; IF(0x0C07B7F4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C07B7F6u); }  /* 0C07B7F2 jsr @Rn */
L_0C07B7F6: BLKS(0x0C07B7F6u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07B758u, 3); goto L_0C07B758; }  /* 0C07B7F6 bra */
L_0C07B800: BLKS(0x0C07B800u);
	r2 = 0xC07B630u; UPD(0x0C07B802u, 1);  /* 0C07B800 mov.l @(disp,pc),Rn */
	r14 += 0xCu;  /* 0C07B802 add #imm,Rn */
	r15 = r14;  /* 0C07B804 mov Rm,Rn */
	IF(0x0C07B806u); PR = R32(r15); r15 += 4; UPD(0x0C07B808u, 3);  /* 0C07B806 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B80Au, 1);  /* 0C07B808 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07B80Cu, 1);  /* 0C07B80A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07B80Eu, 1);  /* 0C07B80C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07B810u, 1);  /* 0C07B80E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07B812u, 1);  /* 0C07B810 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07B814u, 1);  /* 0C07B812 mov.l @Rm+,Rn */
	IF(0x0C07B814u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07B630u: goto L_0C07B630; default: JUMPD(tv_); } }  /* 0C07B814 jmp @Rn */
L_0C07B820: BLKS(0x0C07B820u);
	r12 = 0x8Cu; UPD(0x0C07B822u, 1);  /* 0C07B820 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C07B822 add Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C07B826u, 2);  /* 0C07B824 mov.l @(disp,pc),Rn */
	r12 += r9;  /* 0C07B826 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C07B82Au, 2);  /* 0C07B828 mov.w @Rm,Rn */
	IF(0x0C07B82Au); { u32 t_ = r0; PR = 0x0C07B82Eu; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07B82Eu); }  /* 0C07B82A jsr @Rn */
L_0C07B82E: BLKS(0x0C07B82Eu);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C07B830u, 1);  /* 0C07B82E mov.w @Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C07B832u, 1);  /* 0C07B830 mov.l @(disp,pc),Rn */
	W32(r9 + 0x2Cu, r0); UPD(0x0C07B834u, 1);  /* 0C07B832 mov.l Rm,@(disp,Rn) */
	IF(0x0C07B834u); { u32 t_ = r8; PR = 0x0C07B838u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07B838u); }  /* 0C07B834 jsr @Rn */
L_0C07B838: BLKS(0x0C07B838u);
	r4 = R32(r9 + 0x24u); UPD(0x0C07B83Au, 1);  /* 0C07B838 mov.l @(disp,Rm),Rn */
	r2 = R32(r9 + 0x2Cu); UPD(0x0C07B83Cu, 1);  /* 0C07B83A mov.l @(disp,Rm),Rn */
	r3 = R32(r9 + 0x28u); UPD(0x0C07B83Eu, 1);  /* 0C07B83C mov.l @(disp,Rm),Rn */
	r4 += r2;  /* 0C07B83E add Rm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C07B842u, 2);  /* 0C07B840 mov.l Rm,@(disp,Rn) */
	r3 += r0;  /* 0C07B842 add Rm,Rn */
	r0 = (r4 >> 16) | (r4 << 16);  /* 0C07B844 swap.w Rm,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C07B846 exts.w Rm,Rn */
	r0 = 0xFFFFFF60u; UPD(0x0C07B84Au, 4);  /* 0C07B848 mov.w @(disp,pc),Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C07B84Cu, 1);  /* 0C07B84A mov.l Rm,@(disp,Rn) */
	r2 += r0;  /* 0C07B84C add Rm,Rn */
	IF(0x0C07B84Eu); T = (s32)r2 >= 0;  /* 0C07B84E cmp/pz Rn */
	{ u32 c_ = T; W32(r9 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07B858u, 5); goto L_0C07B858; } UPD(0x0C07B854u, 1); goto L_0C07B854; }  /* 0C07B850 bt/s */
L_0C07B854: BLKS(0x0C07B854u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C07BA10u, 3); goto L_0C07BA10; }  /* 0C07B854 bra */
L_0C07B858: BLKS(0x0C07B858u);
	r5 = 0xD0u; UPD(0x0C07B85Au, 1);  /* 0C07B858 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C07B85A cmp/gt Rm,Rn */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07B87Au, 4); goto L_0C07B87A; } goto L_0C07B860; }  /* 0C07B85C bt/s */
L_0C07B860: BLKS(0x0C07B860u);
	r1 = (r3 >> 16) | (r3 << 16);  /* 0C07B860 swap.w Rm,Rn */
	r3 = 0xFFFFFE00u; UPD(0x0C07B864u, 3);  /* 0C07B862 mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)r1;  /* 0C07B864 exts.w Rm,Rn */
	r2 += r3;  /* 0C07B866 add Rm,Rn */
	IF(0x0C07B868u); T = (s32)r2 >= 0;  /* 0C07B868 cmp/pz Rn */
	{ u32 c_ = T; W32(r14, r10); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C07B872u, 6); goto L_0C07B872; } UPD(0x0C07B86Eu, 1); goto L_0C07B86E; }  /* 0C07B86A bt/s */
L_0C07B86E: BLKS(0x0C07B86Eu);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C07BA00u, 3); goto L_0C07BA00; }  /* 0C07B86E bra */
L_0C07B872: BLKS(0x0C07B872u);
	r6 = 0xA8u; UPD(0x0C07B874u, 1);  /* 0C07B872 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C07B874 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07B8D0u, 4); goto L_0C07B8D0; } UPD(0x0C07B87Au, 1); goto L_0C07B87A; }  /* 0C07B876 bf/s */
L_0C07B87A: BLKS(0x0C07B87Au);
	{ W32(r9, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C07B756u, 3); goto L_0C07B756; }  /* 0C07B87A bra */
L_0C07B8D0: BLKS(0x0C07B8D0u);
	r10 = 0x98u; UPD(0x0C07B8D2u, 1);  /* 0C07B8D0 mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C07B8D2 add Rm,Rn */
	r8 = r10;  /* 0C07B8D4 mov Rm,Rn */
	r8 += 0x1u;  /* 0C07B8D6 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C07B8DAu, 4);  /* 0C07B8D8 mov.b @Rm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C07B8DA cmp/eq #imm,r0 */
	if (T) { UPD(0x0C07B8FCu, 4); goto L_0C07B8FC; }  /* 0C07B8DC bt */
L_0C07B8DE: BLKS(0x0C07B8DEu);
	r0 = 0xC058130u; UPD(0x0C07B8E0u, 1);  /* 0C07B8DE mov.l @(disp,pc),Rn */
	IF(0x0C07B8E0u); { u32 t_ = r0; PR = 0x0C07B8E4u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C07B8E4u); }  /* 0C07B8E0 jsr @Rn */
L_0C07B8E4: BLKS(0x0C07B8E4u);
	r0 = R32(r9 + 0x8u); UPD(0x0C07B8E6u, 1);  /* 0C07B8E4 mov.l @(disp,Rm),Rn */
	r2 = 0xFu;  /* 0C07B8E6 mov #imm,Rn */
	r0 &= r2;  /* 0C07B8E8 and Rm,Rn */
	r4 = 0xC191300u; UPD(0x0C07B8ECu, 3);  /* 0C07B8EA mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C07B8EC add Rm,Rn */
	IF(0x0C07B8EEu); r5 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C07B8F0u, 2);  /* 0C07B8EE mov.w @(r0,Rm),Rn */
	r0 = 0xC057430u; UPD(0x0C07B8F2u, 1);  /* 0C07B8F0 mov.l @(disp,pc),Rn */
	IF(0x0C07B8F2u); { u32 t_ = r0; PR = 0x0C07B8F6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C07B8F6u); }  /* 0C07B8F2 jsr @Rn */
L_0C07B8F6: BLKS(0x0C07B8F6u);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C07B8F8u, 1);  /* 0C07B8F6 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C07B8F8 add #imm,Rn */
	W8(r8, r0); UPD(0x0C07B8FCu, 2);  /* 0C07B8FA mov.b Rm,@Rn */
L_0C07B8FC: BLKS(0x0C07B8FCu);
	r8 = 0xA8u; UPD(0x0C07B8FEu, 1);  /* 0C07B8FC mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C07B8FE add Rm,Rn */
	r8 += 0x1u;  /* 0C07B900 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C07B904u, 3);  /* 0C07B902 mov.b @Rm,Rn */
	r2 = r5 & 0xFF;  /* 0C07B904 extu.b Rm,Rn */
	r0 = r2;  /* 0C07B906 mov Rm,Rn */
	T = r0 == 0x14u;  /* 0C07B908 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C07B9F0u, 6); goto L_0C07B9F0; }  /* 0C07B90A bt */
L_0C07B90C: BLKS(0x0C07B90Cu);
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C07B90Eu, 1);  /* 0C07B90C mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C07B90E tst Rm,Rn */
	{ u32 c_ = !T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07B9E0u, 4); goto L_0C07B9E0; } goto L_0C07B914; }  /* 0C07B910 bf/s */
L_0C07B914: BLKS(0x0C07B914u);
	r10 = 0xC286298u; UPD(0x0C07B916u, 2);  /* 0C07B914 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C07B918u, 1);  /* 0C07B916 mov.l @Rm,Rn */
	r0 += r11;  /* 0C07B918 add Rm,Rn */
	r0 &= 0x3u;  /* 0C07B91A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07B91C tst Rm,Rn */
	{ u32 c_ = T; r6 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07B950u, 6); goto L_0C07B950; } UPD(0x0C07B922u, 1); goto L_0C07B922; }  /* 0C07B91E bt/s */
L_0C07B922: BLKS(0x0C07B922u);
	r7 = 0xC0A03B0u; UPD(0x0C07B924u, 1);  /* 0C07B922 mov.l @(disp,pc),Rn */
L_0C07B924: BLKS(0x0C07B924u);
	r9 = 0xB4u; UPD(0x0C07B926u, 1);  /* 0C07B924 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C07B926 mov Rm,Rn */
	IF(0x0C07B928u); MACL = r11 * r9;  /* 0C07B928 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C07B92Cu, 4);  /* 0C07B92A mov.l @(disp,pc),Rn */
	r14 += 0xCu;  /* 0C07B92C add #imm,Rn */
	IF(0x0C07B92Eu); r5 = MACL;  /* 0C07B92E sts macl,Rn */
	r5 += r10;  /* 0C07B930 add Rm,Rn */
	r0 = R32(r5 + 0xCu); UPD(0x0C07B934u, 4);  /* 0C07B932 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C07B934 add #imm,Rn */
	r0 &= 0x3u;  /* 0C07B936 and #imm,r0 */
	W32(r5 + 0xCu, r0); UPD(0x0C07B93Au, 3);  /* 0C07B938 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C07B93A mov Rm,Rn */
	IF(0x0C07B93Cu); PR = R32(r15); r15 += 4; UPD(0x0C07B93Eu, 2);  /* 0C07B93C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B940u, 1);  /* 0C07B93E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07B942u, 1);  /* 0C07B940 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07B944u, 1);  /* 0C07B942 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07B946u, 1);  /* 0C07B944 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07B948u, 1);  /* 0C07B946 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07B94Au, 1);  /* 0C07B948 mov.l @Rm+,Rn */
	IF(0x0C07B94Au); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A03B0u: TAIL(f_0C0A03B0); default: JUMPD(tv_); } }  /* 0C07B94A jmp @Rn */
L_0C07B950: BLKS(0x0C07B950u);
	r10 = 0xC0A9BB0u; UPD(0x0C07B952u, 1);  /* 0C07B950 mov.l @(disp,pc),Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C07B954u, 1);  /* 0C07B952 mov.l @(disp,Rm),Rn */
	IF(0x0C07B954u); { u32 t_ = r10; PR = 0x0C07B958u; r5 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C07B958u); }  /* 0C07B954 jsr @Rn */
L_0C07B958: BLKS(0x0C07B958u);
	T = (r0 & r0) == 0;  /* 0C07B958 tst Rm,Rn */
	if (T) { UPD(0x0C07B922u, 4); goto L_0C07B922; }  /* 0C07B95A bt */
L_0C07B95C: BLKS(0x0C07B95Cu);
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C07B95Eu, 1);  /* 0C07B95C mov.b @Rm,Rn */
	r3 = 0x13u;  /* 0C07B95E mov #imm,Rn */
	T = r2 > r3;  /* 0C07B960 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C07B9B0u, 5); goto L_0C07B9B0; }  /* 0C07B962 bf */
L_0C07B964: BLKS(0x0C07B964u);
	r7 = 0xC0A03B0u; UPD(0x0C07B966u, 1);  /* 0C07B964 mov.l @(disp,pc),Rn */
L_0C07B966: BLKS(0x0C07B966u);
	r10 = r2 & 0xFF;  /* 0C07B966 extu.b Rm,Rn */
	r5 = 0x14u;  /* 0C07B968 mov #imm,Rn */
	T = r10 > r5;  /* 0C07B96A cmp/hi Rm,Rn */
	{ u32 c_ = T; r4 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07B990u, 6); goto L_0C07B990; } UPD(0x0C07B970u, 1); goto L_0C07B970; }  /* 0C07B96C bt/s */
L_0C07B970: BLKS(0x0C07B970u);
	r0 = R32(r14); UPD(0x0C07B972u, 1);  /* 0C07B970 mov.l @Rm,Rn */
	r12 = r13;  /* 0C07B972 mov Rm,Rn */
	r12 += r0;  /* 0C07B974 add Rm,Rn */
	r0 = R32(r12 + 0x8u); UPD(0x0C07B978u, 3);  /* 0C07B976 mov.l @(disp,Rm),Rn */
	r4 = 0xFu;  /* 0C07B978 mov #imm,Rn */
	r0 &= r4;  /* 0C07B97A and Rm,Rn */
	r6 = 0xC191278u; UPD(0x0C07B97Eu, 3);  /* 0C07B97C mov.l @(disp,pc),Rn */
	IF(0x0C07B97Eu); r0 <<= 2;  /* 0C07B97E shll2 Rn */
	IF(0x0C07B980u); r13 = R32(r0 + r6); UPD(0x0C07B982u, 2);  /* 0C07B980 mov.l @(r0,Rm),Rn */
	{ W32(r12 + 0x38u, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07B924u, 3); goto L_0C07B924; }  /* 0C07B982 bra */
L_0C07B990: BLKS(0x0C07B990u);
	r3 = R32(r9 + 0x8u); UPD(0x0C07B992u, 1);  /* 0C07B990 mov.l @(disp,Rm),Rn */
	r3 += 0xFFFFFFFFu;  /* 0C07B992 add #imm,Rn */
	W32(r9 + 0x8u, r3); UPD(0x0C07B996u, 2);  /* 0C07B994 mov.l Rm,@(disp,Rn) */
	IF(0x0C07B996u); { u32 t_ = r7; PR = 0x0C07B99Au; W32(r14 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C07B99Au); }  /* 0C07B996 jsr @Rn */
L_0C07B99A: BLKS(0x0C07B99Au);
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C07B99Cu, 1);  /* 0C07B99A mov.b @Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C07B99C add #imm,Rn */
	W8(r8, r2); UPD(0x0C07B9A0u, 2);  /* 0C07B99E mov.b Rm,@Rn */
	r9 = R32(r12); UPD(0x0C07B9A2u, 1);  /* 0C07B9A0 mov.l @Rm,Rn */
	r8 = 0xFFFFF000u; UPD(0x0C07B9A4u, 1);  /* 0C07B9A2 mov.w @(disp,pc),Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C07B9A6u, 1);  /* 0C07B9A4 mov.l @(disp,Rm),Rn */
	r9 += r8;  /* 0C07B9A6 add Rm,Rn */
	{ W32(r12, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C07B970u, 4); goto L_0C07B970; }  /* 0C07B9A8 bra */
L_0C07B9B0: BLKS(0x0C07B9B0u);
	r4 = R32(r9 + 0x8u); UPD(0x0C07B9B2u, 1);  /* 0C07B9B0 mov.l @(disp,Rm),Rn */
	r0 = 0xC0A03B0u; UPD(0x0C07B9B4u, 1);  /* 0C07B9B2 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C07B9B4 add #imm,Rn */
	W32(r9 + 0x8u, r4); UPD(0x0C07B9B8u, 2);  /* 0C07B9B6 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r0); UPD(0x0C07B9BAu, 1);  /* 0C07B9B8 mov.l Rm,@(disp,Rn) */
	IF(0x0C07B9BAu); { u32 t_ = r0; PR = 0x0C07B9BEu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C07B9BEu); }  /* 0C07B9BA jsr @Rn */
L_0C07B9BE: BLKS(0x0C07B9BEu);
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C07B9C0u, 1);  /* 0C07B9BE mov.b @Rm,Rn */
	r7 = R32(r12); UPD(0x0C07B9C2u, 1);  /* 0C07B9C0 mov.l @Rm,Rn */
	r6 += 0x1u;  /* 0C07B9C2 add #imm,Rn */
	r1 = 0x1000u; UPD(0x0C07B9C6u, 2);  /* 0C07B9C4 mov.w @(disp,pc),Rn */
	r2 = r6;  /* 0C07B9C6 mov Rm,Rn */
	r7 += r1;  /* 0C07B9C8 add Rm,Rn */
	W8(r8, r6); UPD(0x0C07B9CCu, 3);  /* 0C07B9CA mov.b Rm,@Rn */
	W32(r12, r7); UPD(0x0C07B9CEu, 1);  /* 0C07B9CC mov.l Rm,@Rn */
	{ r7 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C07B966u, 3); goto L_0C07B966; }  /* 0C07B9CE bra */
L_0C07B9E0: BLKS(0x0C07B9E0u);
	{ W8(r10, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C07B922u, 3); goto L_0C07B922; }  /* 0C07B9E0 bra */
L_0C07B9F0: BLKS(0x0C07B9F0u);
	r7 = R32(r9); UPD(0x0C07B9F2u, 1);  /* 0C07B9F0 mov.l @Rm,Rn */
	r1 = 0x13000000u; UPD(0x0C07B9F4u, 1);  /* 0C07B9F2 mov.l @(disp,pc),Rn */
	r7 |= r1;  /* 0C07B9F4 or Rm,Rn */
	{ W32(r9, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C07B922u, 4); goto L_0C07B922; }  /* 0C07B9F6 bra */
L_0C07BA00: BLKS(0x0C07BA00u);
	{ IF(0x0C07BA02u); ; /* slot nop */ UPD(0x0C07B872u, 3); goto L_0C07B872; }  /* 0C07BA00 bra */
L_0C07BA10: BLKS(0x0C07BA10u);
	{ IF(0x0C07BA12u); ; /* slot nop */ UPD(0x0C07B858u, 3); goto L_0C07B858; }  /* 0C07BA10 bra */
L_0C0A0C60: BLKS(0x0C0A0C60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0C62u, 1);  /* 0C0A0C60 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0C64u, 1);  /* 0C0A0C62 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0A0C64 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0A0C68u, 2);  /* 0C0A0C66 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0A0C68 mov #imm,Rn */
	r9 = 0xC050D70u; UPD(0x0C0A0C6Cu, 2);  /* 0C0A0C6A mov.l @(disp,pc),Rn */
	IF(0x0C0A0C6Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0A0C6Eu, 1);  /* 0C0A0C6C sts.l pr,@-Rn */
	IF(0x0C0A0C6Eu); { u32 t_ = r9; PR = 0x0C0A0C72u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0A0C72u); }  /* 0C0A0C6E jsr @Rn */
L_0C0A0C72: BLKS(0x0C0A0C72u);
	r2 = r0;  /* 0C0A0C72 mov Rm,Rn */
	r0 = 0x4u;  /* 0C0A0C74 mov #imm,Rn */
	T = r2 > r0;  /* 0C0A0C76 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0A0C80u, 6); goto L_0C0A0C80; }  /* 0C0A0C78 bf */
L_0C0A0C7A: BLKS(0x0C0A0C7Au);
	r15 += 0xFFFFFFF8u;  /* 0C0A0C7A add #imm,Rn */
	{ IF(0x0C0A0C7Eu); ; /* slot nop */ UPD(0x0C0A0DD0u, 4); goto L_0C0A0DD0; }  /* 0C0A0C7C bra */
L_0C0A0C80: BLKS(0x0C0A0C80u);
	r0 = 0xC0A0C90u;  /* 0C0A0C80 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0A0C82 add Rm,Rn */
	IF(0x0C0A0C84u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0A0C86u, 3);  /* 0C0A0C84 mov.w @(r0,Rm),Rn */
	IF(0x0C0A0C86u); { u32 tv_ = (r3 + 0x0C0A0C8Au); u32 t_ = PHYS(tv_); IF(0x0C0A0C88u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A0CA0u: goto L_0C0A0CA0; case 0x0C0A0D00u: goto L_0C0A0D00; case 0x0C0A0D30u: goto L_0C0A0D30; case 0x0C0A0D70u: goto L_0C0A0D70; case 0x0C0A0DA0u: goto L_0C0A0DA0; default: JUMPD(tv_); } }  /* 0C0A0C86 braf Rn */
L_0C0A0CA0: BLKS(0x0C0A0CA0u);
	r0 = 0xB4u; UPD(0x0C0A0CA2u, 1);  /* 0C0A0CA0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0CA2 add #imm,Rn */
	IF(0x0C0A0CA4u); MACL = r8 * r0;  /* 0C0A0CA4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0CA8u, 4);  /* 0C0A0CA6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A0CAAu, 1);  /* 0C0A0CA8 mov.w @(disp,pc),Rn */
	IF(0x0C0A0CAAu); r3 = MACL;  /* 0C0A0CAA sts macl,Rn */
	r3 += r9;  /* 0C0A0CAC add Rm,Rn */
	IF(0x0C0A0CAEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0CB0u, 3);  /* 0C0A0CAE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A0CB0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A0CB4u, 2);  /* 0C0A0CB2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0CB4 add #imm,Rn */
	IF(0x0C0A0CB6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0CB8u, 2);  /* 0C0A0CB6 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A0CB8 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A0CBA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A0CBEu, 3);  /* 0C0A0CBC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD970u; UPD(0x0C0A0CC0u, 1);  /* 0C0A0CBE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A0CC2u, 1);  /* 0C0A0CC0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0CC4u, 1);  /* 0C0A0CC2 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0A0CC6u, 1);  /* 0C0A0CC4 mov.l @(disp,Rm),Rn */
	IF(0x0C0A0CC6u); ;  /* 0C0A0CC6 nop */
	UPD(0x0C0A0CC8u, 1);
L_0C0A0CC8: BLKS(0x0C0A0CC8u);
	IF(0x0C0A0CC8u); { u32 t_ = r0; PR = 0x0C0A0CCCu; IF(0x0C0A0CCAu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0A0CCCu); }  /* 0C0A0CC8 jsr @Rn */
L_0C0A0CCC: BLKS(0x0C0A0CCCu);
	r15 += 0x8u;  /* 0C0A0CCC add #imm,Rn */
	UPD(0x0C0A0CCEu, 1);
L_0C0A0CCE: BLKS(0x0C0A0CCEu);
	r4 = 0xB4u; UPD(0x0C0A0CD0u, 1);  /* 0C0A0CCE mov.w @(disp,pc),Rn */
	IF(0x0C0A0CD0u); MACL = r8 * r4;  /* 0C0A0CD0 mul.l Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0A0CD4u, 3);  /* 0C0A0CD2 mov.w @(disp,pc),Rn */
	IF(0x0C0A0CD4u); r8 = MACL;  /* 0C0A0CD4 sts macl,Rn */
	r8 += r9;  /* 0C0A0CD6 add Rm,Rn */
	r9 = 0xC7C37F8u; UPD(0x0C0A0CDAu, 3);  /* 0C0A0CD8 mov.l @(disp,pc),Rn */
	IF(0x0C0A0CDAu); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0A0CDCu, 1);  /* 0C0A0CDA mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0A0CDEu, 1);  /* 0C0A0CDC mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0A0CDE extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0A0CE2u, 2);  /* 0C0A0CE0 mov.l @(disp,Rm),Rn */
	IF(0x0C0A0CE2u); { u32 t_ = r9; PR = 0x0C0A0CE6u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C37F8, 0x0C7C37F8u, 0x0C0A0CE6u); }  /* 0C0A0CE2 jsr @Rn */
L_0C0A0CE6: BLKS(0x0C0A0CE6u);
	r9 = 0x0u;  /* 0C0A0CE6 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0A0CEAu, 2);  /* 0C0A0CE8 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0A0CEA mov Rm,Rn */
	IF(0x0C0A0CECu); PR = R32(r15); r15 += 4; UPD(0x0C0A0CEEu, 2);  /* 0C0A0CEC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0A0CF0u, 1);  /* 0C0A0CEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0A0CF2u, 1);  /* 0C0A0CF0 mov.l @Rm+,Rn */
	IF(0x0C0A0CF2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0A0CF2 rts */
L_0C0A0D00: BLKS(0x0C0A0D00u);
	r5 = 0xB4u; UPD(0x0C0A0D02u, 1);  /* 0C0A0D00 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0D02 add #imm,Rn */
	IF(0x0C0A0D04u); MACL = r8 * r5;  /* 0C0A0D04 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0D08u, 4);  /* 0C0A0D06 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A0D0Au, 1);  /* 0C0A0D08 mov.w @(disp,pc),Rn */
	IF(0x0C0A0D0Au); r3 = MACL;  /* 0C0A0D0A sts macl,Rn */
	r3 += r9;  /* 0C0A0D0C add Rm,Rn */
	IF(0x0C0A0D0Eu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0D10u, 3);  /* 0C0A0D0E mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A0D10 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0A0D12 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0A0D16u, 3);  /* 0C0A0D14 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0D16 add #imm,Rn */
	IF(0x0C0A0D18u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0D1Au, 2);  /* 0C0A0D18 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0A0D1A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0A0D1Eu, 2);  /* 0C0A0D1C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC800u; UPD(0x0C0A0D20u, 1);  /* 0C0A0D1E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A0D22u, 1);  /* 0C0A0D20 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0D24u, 1);  /* 0C0A0D22 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A0CC8u, 3); goto L_0C0A0CC8; }  /* 0C0A0D24 bra */
L_0C0A0D30: BLKS(0x0C0A0D30u);
	r3 = 0xB4u; UPD(0x0C0A0D32u, 1);  /* 0C0A0D30 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0A0D32 add #imm,Rn */
	IF(0x0C0A0D34u); MACL = r8 * r3;  /* 0C0A0D34 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0D38u, 4);  /* 0C0A0D36 mov.l @(disp,pc),Rn */
	IF(0x0C0A0D38u); r3 = MACL;  /* 0C0A0D38 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0A0D3Cu, 2);  /* 0C0A0D3A mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0A0D3C add Rm,Rn */
	IF(0x0C0A0D3Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0D40u, 2);  /* 0C0A0D3E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A0D40 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A0D44u, 2);  /* 0C0A0D42 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0D44 add #imm,Rn */
	IF(0x0C0A0D46u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0D48u, 2);  /* 0C0A0D46 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A0D48 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0A0D4A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0A0D4Eu, 3);  /* 0C0A0D4C mov.l Rm,@(disp,Rn) */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0A0D50u, 1);  /* 0C0A0D4E mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r6); UPD(0x0C0A0D52u, 1);  /* 0C0A0D50 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x30u); UPD(0x0C0A0D54u, 1);  /* 0C0A0D52 mov.l @(disp,Rm),Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0A0D56u, 1);  /* 0C0A0D54 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AC3B0u; UPD(0x0C0A0D58u, 1);  /* 0C0A0D56 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A0D5Au, 1);  /* 0C0A0D58 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0D5Cu, 1);  /* 0C0A0D5A mov.l @(disp,Rm),Rn */
	IF(0x0C0A0D5Cu); { u32 t_ = r0; PR = 0x0C0A0D60u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC3B0, 0x0C0AC3B0u, 0x0C0A0D60u); }  /* 0C0A0D5C jsr @Rn */
L_0C0A0D60: BLKS(0x0C0A0D60u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0A0CCEu, 3); goto L_0C0A0CCE; }  /* 0C0A0D60 bra */
L_0C0A0D70: BLKS(0x0C0A0D70u);
	r4 = 0xB4u; UPD(0x0C0A0D72u, 1);  /* 0C0A0D70 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0D72 add #imm,Rn */
	IF(0x0C0A0D74u); MACL = r8 * r4;  /* 0C0A0D74 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0D78u, 4);  /* 0C0A0D76 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0A0D78 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0A0D7Cu, 2);  /* 0C0A0D7A mov.w @(disp,pc),Rn */
	IF(0x0C0A0D7Cu); r3 = MACL;  /* 0C0A0D7C sts macl,Rn */
	r3 += r9;  /* 0C0A0D7E add Rm,Rn */
	IF(0x0C0A0D80u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0D82u, 3);  /* 0C0A0D80 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0A0D82 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0A0D86u, 2);  /* 0C0A0D84 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0D86 add #imm,Rn */
	IF(0x0C0A0D88u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0D8Au, 2);  /* 0C0A0D88 mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C0A0D8A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A0D8Eu, 2);  /* 0C0A0D8C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0ADB30u; UPD(0x0C0A0D90u, 1);  /* 0C0A0D8E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A0D92u, 1);  /* 0C0A0D90 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0D94u, 1);  /* 0C0A0D92 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A0CC8u, 3); goto L_0C0A0CC8; }  /* 0C0A0D94 bra */
L_0C0A0DA0: BLKS(0x0C0A0DA0u);
	r0 = 0xB4u; UPD(0x0C0A0DA2u, 1);  /* 0C0A0DA0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0A0DA2 add #imm,Rn */
	IF(0x0C0A0DA4u); MACL = r8 * r0;  /* 0C0A0DA4 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0DA8u, 4);  /* 0C0A0DA6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A0DAAu, 1);  /* 0C0A0DA8 mov.w @(disp,pc),Rn */
	IF(0x0C0A0DAAu); r3 = MACL;  /* 0C0A0DAA sts macl,Rn */
	r3 += r9;  /* 0C0A0DAC add Rm,Rn */
	IF(0x0C0A0DAEu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0DB0u, 3);  /* 0C0A0DAE mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0A0DB0 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0A0DB4u, 2);  /* 0C0A0DB2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0DB4 add #imm,Rn */
	IF(0x0C0A0DB6u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0DB8u, 2);  /* 0C0A0DB6 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0A0DB8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0A0DBCu, 2);  /* 0C0A0DBA mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C0A0DBEu, 1);  /* 0C0A0DBC mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0A0DBE mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C0A0DC2u, 2);  /* 0C0A0DC0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0DC4u, 1);  /* 0C0A0DC2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A0CC8u, 3); goto L_0C0A0CC8; }  /* 0C0A0DC4 bra */
L_0C0A0DD0: BLKS(0x0C0A0DD0u);
	r6 = 0xB4u; UPD(0x0C0A0DD2u, 1);  /* 0C0A0DD0 mov.w @(disp,pc),Rn */
	IF(0x0C0A0DD2u); MACL = r8 * r6;  /* 0C0A0DD2 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0A0DD6u, 3);  /* 0C0A0DD4 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0A0DD8u, 1);  /* 0C0A0DD6 mov.w @(disp,pc),Rn */
	IF(0x0C0A0DD8u); r3 = MACL;  /* 0C0A0DD8 sts macl,Rn */
	r3 += r9;  /* 0C0A0DDA add Rm,Rn */
	IF(0x0C0A0DDCu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0DDEu, 3);  /* 0C0A0DDC mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0A0DDE extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0A0DE2u, 2);  /* 0C0A0DE0 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0A0DE2 add #imm,Rn */
	IF(0x0C0A0DE4u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0A0DE6u, 2);  /* 0C0A0DE4 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C0A0DE6 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0A0DE8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0A0DECu, 3);  /* 0C0A0DEA mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C0A0DEEu, 1);  /* 0C0A0DEC mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0A0DF0u, 1);  /* 0C0A0DEE mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0A0DF2u, 1);  /* 0C0A0DF0 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0A0CC8u, 3); goto L_0C0A0CC8; }  /* 0C0A0DF2 bra */
}

void f_0C07BA50(sh3_t *c)
{
	LOCALS;
L_0C07BA50: BLKS(0x0C07BA50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07BA52u, 1);  /* 0C07BA50 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07BA54u, 1);  /* 0C07BA52 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07BA56u, 1);  /* 0C07BA54 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07BA58u, 1);  /* 0C07BA56 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07BA5Au, 1);  /* 0C07BA58 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07BA5Cu, 1);  /* 0C07BA5A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07BA5Eu, 1);  /* 0C07BA5C mov.l Rm,@-Rn */
	r4 = 0xC2859A0u; UPD(0x0C07BA60u, 1);  /* 0C07BA5E mov.l @(disp,pc),Rn */
	IF(0x0C07BA60u); r15 -= 4; W32(r15, PR); UPD(0x0C07BA62u, 1);  /* 0C07BA60 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C07BA64u, 1);  /* 0C07BA62 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C07BA64 add #imm,Rn */
	r8 = 0xC283CA0u; UPD(0x0C07BA68u, 2);  /* 0C07BA66 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07BA68 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C07BA6Cu, 2);  /* 0C07BA6A mov.w @Rm+,Rn */
	r7 = R32(r8); UPD(0x0C07BA6Eu, 1);  /* 0C07BA6C mov.l @Rm,Rn */
	IF(0x0C07BA6Eu); r0 <<= 2;  /* 0C07BA6E shll2 Rn */
	IF(0x0C07BA70u); r6 = R32(r0 + r7); UPD(0x0C07BA72u, 2);  /* 0C07BA70 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r2 = v_; } UPD(0x0C07BA74u, 1);  /* 0C07BA72 mov.w @Rm+,Rn */
	r5 = 0xC27DC20u; UPD(0x0C07BA76u, 1);  /* 0C07BA74 mov.l @(disp,pc),Rn */
	r9 = 0xC22C874u; UPD(0x0C07BA78u, 1);  /* 0C07BA76 mov.l @(disp,pc),Rn */
	r8 = 0xC057A50u; UPD(0x0C07BA7Au, 1);  /* 0C07BA78 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C07BA7Cu, 1);  /* 0C07BA7A mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C07BA7Eu, 1);  /* 0C07BA7C mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C07BA80u, 1);  /* 0C07BA7E mov.w @Rm,Rn */
	r11 = 0xC28629Eu; UPD(0x0C07BA82u, 1);  /* 0C07BA80 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C07BA82 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C07BA86u, 2);  /* 0C07BA84 mov.l @(disp,pc),Rn */
	IF(0x0C07BA86u); { u32 t_ = r8; PR = 0x0C07BA8Au; W16(r11, r2); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C07BA8Au); }  /* 0C07BA86 jsr @Rn */
L_0C07BA8A: BLKS(0x0C07BA8Au);
	T = (r0 & r0) == 0;  /* 0C07BA8A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07BAB0u, 4); goto L_0C07BAB0; } UPD(0x0C07BA90u, 1); goto L_0C07BA90; }  /* 0C07BA8C bf/s */
L_0C07BA90: BLKS(0x0C07BA90u);
	r14 += 0xCu;  /* 0C07BA90 add #imm,Rn */
	UPD(0x0C07BA92u, 1);
L_0C07BA92: BLKS(0x0C07BA92u);
	r15 = r14;  /* 0C07BA92 mov Rm,Rn */
	IF(0x0C07BA94u); PR = R32(r15); r15 += 4; UPD(0x0C07BA96u, 2);  /* 0C07BA94 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07BA98u, 1);  /* 0C07BA96 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07BA9Au, 1);  /* 0C07BA98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07BA9Cu, 1);  /* 0C07BA9A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07BA9Eu, 1);  /* 0C07BA9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07BAA0u, 1);  /* 0C07BA9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07BAA2u, 1);  /* 0C07BAA0 mov.l @Rm+,Rn */
	IF(0x0C07BAA2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07BAA2 rts */
L_0C07BAB0: BLKS(0x0C07BAB0u);
	r10 = 0xC0606C0u; UPD(0x0C07BAB2u, 1);  /* 0C07BAB0 mov.l @(disp,pc),Rn */
	IF(0x0C07BAB2u); { u32 t_ = r10; PR = 0x0C07BAB6u; r4 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C07BAB6u); }  /* 0C07BAB2 jsr @Rn */
L_0C07BAB6: BLKS(0x0C07BAB6u);
	T = (r0 & r0) == 0;  /* 0C07BAB6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07BA90u, 4); goto L_0C07BA90; } goto L_0C07BABC; }  /* 0C07BAB8 bt/s */
L_0C07BABC: BLKS(0x0C07BABCu);
	r12 = 0xC2755BCu; UPD(0x0C07BABEu, 2);  /* 0C07BABC mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C07BAC0u, 1);  /* 0C07BABE mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C07BAC2u, 1);  /* 0C07BAC0 mov.w @Rm+,Rn */
	IF(0x0C07BAC2u); MACL = r10 * r8;  /* 0C07BAC2 mul.l Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C07BAC6u, 3);  /* 0C07BAC4 mov.w @Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C07BAC8u, 1);  /* 0C07BAC6 mov.l @(disp,pc),Rn */
	IF(0x0C07BAC8u); r8 = MACL;  /* 0C07BAC8 sts macl,Rn */
	r8 += r4;  /* 0C07BACA add Rm,Rn */
	r0 = r3 & 0xFFFF;  /* 0C07BACC extu.w Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C07BAD0u, 4);  /* 0C07BACE mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C07BAD0 mov Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r11); UPD(0x0C07BAD4u, 2);  /* 0C07BAD2 mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C07BAD6u, 1);  /* 0C07BAD4 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C07BAD6 mov #imm,Rn */
	r7 = 0xC0A02D0u; UPD(0x0C07BADAu, 2);  /* 0C07BAD8 mov.l @(disp,pc),Rn */
	IF(0x0C07BADAu); W16(r0 + r8, r13); UPD(0x0C07BADCu, 1);  /* 0C07BADA mov.w Rm,@(r0,Rn) */
	r6 = 0xD3000104u; UPD(0x0C07BADEu, 1);  /* 0C07BADC mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C07BADE add #imm,Rn */
	W32(r8, r6); UPD(0x0C07BAE2u, 2);  /* 0C07BAE0 mov.l Rm,@Rn */
	IF(0x0C07BAE2u); W16(r0 + r8, r13); UPD(0x0C07BAE4u, 1);  /* 0C07BAE2 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0xCu, r11); UPD(0x0C07BAE6u, 1);  /* 0C07BAE4 mov.l Rm,@(disp,Rn) */
	IF(0x0C07BAE6u); { u32 t_ = r7; PR = 0x0C07BAEAu; W32(r8 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07BAEAu); }  /* 0C07BAE6 jsr @Rn */
L_0C07BAEA: BLKS(0x0C07BAEAu);
	r9 = 0xC061380u; UPD(0x0C07BAECu, 1);  /* 0C07BAEA mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07BAEC mov Rm,Rn */
	r5 = 0x1600000u; UPD(0x0C07BAF0u, 2);  /* 0C07BAEE mov.l @(disp,pc),Rn */
	IF(0x0C07BAF0u); { u32 t_ = r9; PR = 0x0C07BAF4u; W32(r8 + 0x24u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C061380, 0x0C061380u, 0x0C07BAF4u); }  /* 0C07BAF0 jsr @Rn */
L_0C07BAF4: BLKS(0x0C07BAF4u);
	r2 = 0xC0A1530u; UPD(0x0C07BAF6u, 1);  /* 0C07BAF4 mov.l @(disp,pc),Rn */
	r9 = 0x8Cu; UPD(0x0C07BAF8u, 1);  /* 0C07BAF6 mov.w @(disp,pc),Rn */
	IF(0x0C07BAF8u); { u32 t_ = r2; PR = 0x0C07BAFCu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C07BAFCu); }  /* 0C07BAF8 jsr @Rn */
L_0C07BAFC: BLKS(0x0C07BAFCu);
	r0 = 0xADu; UPD(0x0C07BAFEu, 1);  /* 0C07BAFC mov.w @(disp,pc),Rn */
	r4 = 0x13u;  /* 0C07BAFE mov #imm,Rn */
	r3 = 0xA8u; UPD(0x0C07BB02u, 2);  /* 0C07BB00 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C07BB02 add Rm,Rn */
	IF(0x0C07BB04u); W8(r0 + r8, r4); UPD(0x0C07BB06u, 2);  /* 0C07BB04 mov.b Rm,@(r0,Rn) */
	r3 += r8;  /* 0C07BB06 add Rm,Rn */
	r3 += 0x1u;  /* 0C07BB08 add #imm,Rn */
	r0 = 0xC0A1780u; UPD(0x0C07BB0Cu, 3);  /* 0C07BB0A mov.l @(disp,pc),Rn */
	W8(r3, r4); UPD(0x0C07BB0Eu, 1);  /* 0C07BB0C mov.b Rm,@Rn */
	r6 = 0xC27DC20u; UPD(0x0C07BB10u, 1);  /* 0C07BB0E mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07BB10 mov Rm,Rn */
	r5 = R32(r6); UPD(0x0C07BB14u, 2);  /* 0C07BB12 mov.l @Rm,Rn */
	IF(0x0C07BB14u); { u32 t_ = r0; PR = 0x0C07BB18u; W32(r14 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C07BB18u); }  /* 0C07BB14 jsr @Rn */
L_0C07BB18: BLKS(0x0C07BB18u);
	r13 = 0x94u; UPD(0x0C07BB1Au, 1);  /* 0C07BB18 mov.w @(disp,pc),Rn */
	r0 = 0x90u; UPD(0x0C07BB1Cu, 1);  /* 0C07BB1A mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C07BB1C add Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C07BB20u, 2);  /* 0C07BB1E mov.l @(disp,Rm),Rn */
	W32(r13, r11); UPD(0x0C07BB22u, 1);  /* 0C07BB20 mov.l Rm,@Rn */
	IF(0x0C07BB22u); W32(r0 + r8, r11); UPD(0x0C07BB24u, 1);  /* 0C07BB22 mov.l Rm,@(r0,Rn) */
	r13 = r8;  /* 0C07BB24 mov Rm,Rn */
	W32(r9, r11); UPD(0x0C07BB28u, 2);  /* 0C07BB26 mov.l Rm,@Rn */
	W32(r8 + 0x30u, r11); UPD(0x0C07BB2Au, 1);  /* 0C07BB28 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r11); UPD(0x0C07BB2Cu, 1);  /* 0C07BB2A mov.l Rm,@(disp,Rn) */
	W32(r14, r11); UPD(0x0C07BB2Eu, 1);  /* 0C07BB2C mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C07BB30u, 1);  /* 0C07BB2E mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C07BB30 mov #imm,Rn */
	IF(0x0C07BB32u); ;  /* 0C07BB32 nop */
	UPD(0x0C07BB34u, 2);
L_0C07BB34: BLKS(0x0C07BB34u);
	r9 = 0xC191B8Cu; UPD(0x0C07BB36u, 1);  /* 0C07BB34 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C07BB38u, 1);  /* 0C07BB36 mov.w @Rm+,Rn */
	r9 += r11;  /* 0C07BB38 add Rm,Rn */
	r8 = 0xB4u; UPD(0x0C07BB3Cu, 2);  /* 0C07BB3A mov.w @(disp,pc),Rn */
	r9 += 0x4u;  /* 0C07BB3C add #imm,Rn */
	IF(0x0C07BB3Eu); MACL = r10 * r8;  /* 0C07BB3E mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C07BB42u, 4);  /* 0C07BB40 mov.w @Rm,Rn */
	r11 += 0x14u;  /* 0C07BB42 add #imm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C07BB46u, 2);  /* 0C07BB44 mov.l @(disp,pc),Rn */
	IF(0x0C07BB46u); r8 = MACL;  /* 0C07BB46 sts macl,Rn */
	r0 = 0xC2755BCu; UPD(0x0C07BB4Au, 2);  /* 0C07BB48 mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C07BB4A add Rm,Rn */
	IF(0x0C07BB4Cu); r7 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C07BB4Eu, 2);  /* 0C07BB4C mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C07BB4E add Rm,Rn */
	r8 += 0x7Cu;  /* 0C07BB50 add #imm,Rn */
	W16(r8, r7); UPD(0x0C07BB54u, 3);  /* 0C07BB52 mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C07BB54 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C07BB58u, 2);  /* 0C07BB56 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C07BB58 add #imm,Rn */
	W16(r8, r5); UPD(0x0C07BB5Cu, 2);  /* 0C07BB5A mov.w Rm,@Rn */
	r7 = 0x0u;  /* 0C07BB5C mov #imm,Rn */
	r3 = 0xC22C874u; UPD(0x0C07BB60u, 2);  /* 0C07BB5E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C07BB60 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C07BB64u, 2);  /* 0C07BB62 mov.w @Rm,Rn */
	r2 = R32(r9); UPD(0x0C07BB66u, 1);  /* 0C07BB64 mov.l @Rm,Rn */
	r6 = r4 & 0xFFFF;  /* 0C07BB66 extu.w Rm,Rn */
	W32(r8, r2); UPD(0x0C07BB6Au, 2);  /* 0C07BB68 mov.l Rm,@Rn */
	r4 = r10;  /* 0C07BB6A mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C07BB6Eu, 2);  /* 0C07BB6C mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A02D0u; UPD(0x0C07BB70u, 1);  /* 0C07BB6E mov.l @(disp,pc),Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C07BB72u, 1);  /* 0C07BB70 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C07BB74u, 1);  /* 0C07BB72 mov.l Rm,@(disp,Rn) */
	IF(0x0C07BB74u); { u32 t_ = r5; PR = 0x0C07BB78u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07BB78u); }  /* 0C07BB74 jsr @Rn */
L_0C07BB78: BLKS(0x0C07BB78u);
	r2 = 0xC28629Eu; UPD(0x0C07BB7Au, 1);  /* 0C07BB78 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C07BB7A mov Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C07BB7Eu, 2);  /* 0C07BB7C mov.w @Rm,Rn */
	IF(0x0C07BB7Eu); r3 >>= 2;  /* 0C07BB7E shlr2 Rn */
	r4 = 0x86u; UPD(0x0C07BB82u, 2);  /* 0C07BB80 mov.w @(disp,pc),Rn */
	IF(0x0C07BB82u); r3 >>= 2;  /* 0C07BB82 shlr2 Rn */
	IF(0x0C07BB84u); r3 >>= 2;  /* 0C07BB84 shlr2 Rn */
	IF(0x0C07BB86u); W16(r0 + r4, r3); UPD(0x0C07BB88u, 3);  /* 0C07BB86 mov.w Rm,@(r0,Rn) */
	r6 = R32(r13 + 0x24u); UPD(0x0C07BB8Au, 1);  /* 0C07BB88 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C07BB8A mov Rm,Rn */
	r0 = R32(r13 + 0x28u); UPD(0x0C07BB8Eu, 2);  /* 0C07BB8C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C07BB90u, 1);  /* 0C07BB8E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C07BB92u, 1);  /* 0C07BB90 mov.l Rm,@(disp,Rn) */
	r7 = R32(r9 + 0xCu); UPD(0x0C07BB94u, 1);  /* 0C07BB92 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C07BB96u, 1);  /* 0C07BB94 mov.l Rm,@(disp,Rn) */
	r5 = R32(r9 + 0x10u); UPD(0x0C07BB98u, 1);  /* 0C07BB96 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A1530u; UPD(0x0C07BB9Au, 1);  /* 0C07BB98 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r5); UPD(0x0C07BB9Cu, 1);  /* 0C07BB9A mov.l Rm,@(disp,Rn) */
	r2 = 0xFFFA0000u; UPD(0x0C07BB9Eu, 1);  /* 0C07BB9C mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C07BB9E add #imm,Rn */
	IF(0x0C07BBA0u); { u32 t_ = r10; PR = 0x0C07BBA4u; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C07BBA4u); }  /* 0C07BBA0 jsr @Rn */
L_0C07BBA4: BLKS(0x0C07BBA4u);
	r0 = 0xB0u; UPD(0x0C07BBA6u, 1);  /* 0C07BBA4 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C07BBA6 add #imm,Rn */
	IF(0x0C07BBA8u); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C07BBAAu, 2);  /* 0C07BBA8 mov.b @(r0,Rm),Rn */
	r10 = 0xAu;  /* 0C07BBAA mov #imm,Rn */
	IF(0x0C07BBACu); W8(r0 + r8, r3); UPD(0x0C07BBAEu, 2);  /* 0C07BBAC mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C07BBB0u, 1);  /* 0C07BBAE mov.w @(disp,pc),Rn */
	r7 = 0xACu; UPD(0x0C07BBB2u, 1);  /* 0C07BBB0 mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C07BBB2 add Rm,Rn */
	r8 += r7;  /* 0C07BBB4 add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C07BBB8u, 3);  /* 0C07BBB6 mov.l @(disp,Rm),Rn */
	r7 += r13;  /* 0C07BBB8 add Rm,Rn */
	r7 += 0x1u;  /* 0C07BBBA add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C07BBBEu, 3);  /* 0C07BBBC mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C07BBBE add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C07BBC2u, 2);  /* 0C07BBC0 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C07BBC2 add #imm,Rn */
	W8(r0, r6); UPD(0x0C07BBC6u, 2);  /* 0C07BBC4 mov.b Rm,@Rn */
	W8(r8, r5); UPD(0x0C07BBC8u, 1);  /* 0C07BBC6 mov.b Rm,@Rn */
	r9 = R32(r14); UPD(0x0C07BBCAu, 1);  /* 0C07BBC8 mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C07BBCA add #imm,Rn */
	r2 = (u32)(s32)(s16)r9;  /* 0C07BBCC exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C07BBD0u, 3);  /* 0C07BBCE mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C07BBD2u, 1);  /* 0C07BBD0 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r10;  /* 0C07BBD2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07BB34u, 4); goto L_0C07BB34; } goto L_0C07BBD8; }  /* 0C07BBD4 bf/s */
L_0C07BBD8: BLKS(0x0C07BBD8u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07BA92u, 4); goto L_0C07BA92; }  /* 0C07BBD8 bra */
}

void f_0C07BC40(sh3_t *c)
{
	LOCALS;
L_0C07BC40: BLKS(0x0C07BC40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07BC42u, 1);  /* 0C07BC40 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C07BC44u, 1);  /* 0C07BC42 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C07BC44 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07BC48u, 2);  /* 0C07BC46 mov.l Rm,@-Rn */
	IF(0x0C07BC48u); MACL = r8 * r3;  /* 0C07BC48 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07BC4Cu, 3);  /* 0C07BC4A mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C07BC4Eu, 1);  /* 0C07BC4C mov.l @(disp,pc),Rn */
	IF(0x0C07BC4Eu); r2 = MACL;  /* 0C07BC4E sts macl,Rn */
	IF(0x0C07BC50u); r15 -= 4; W32(r15, PR); UPD(0x0C07BC52u, 2);  /* 0C07BC50 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07BC52 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07BC56u, 2);  /* 0C07BC54 mov.l @(disp,Rm),Rn */
	r0 = 0x8u;  /* 0C07BC56 mov #imm,Rn */
	T = r2 > r0;  /* 0C07BC58 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07BCECu, 5); goto L_0C07BCEC; } goto L_0C07BC5E; }  /* 0C07BC5A bt/s */
L_0C07BC5E: BLKS(0x0C07BC5Eu);
	r0 = 0xC07BC70u;  /* 0C07BC5E mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07BC60 add Rm,Rn */
	IF(0x0C07BC62u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07BC64u, 4);  /* 0C07BC62 mov.w @(r0,Rm),Rn */
	IF(0x0C07BC64u); { u32 tv_ = (r4 + 0x0C07BC68u); u32 t_ = PHYS(tv_); IF(0x0C07BC66u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07BC90u: goto L_0C07BC90; case 0x0C07BCA0u: goto L_0C07BCA0; case 0x0C07BD10u: goto L_0C07BD10; case 0x0C07BD60u: goto L_0C07BD60; case 0x0C07BD90u: goto L_0C07BD90; case 0x0C07BDC0u: goto L_0C07BDC0; case 0x0C07BDF0u: goto L_0C07BDF0; default: JUMPD(tv_); } }  /* 0C07BC64 braf Rn */
L_0C07BC90: BLKS(0x0C07BC90u);
	r5 = 0xC0A14C0u; UPD(0x0C07BC92u, 1);  /* 0C07BC90 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C07BC92 mov Rm,Rn */
	r15 = r14;  /* 0C07BC94 mov Rm,Rn */
	IF(0x0C07BC96u); PR = R32(r15); r15 += 4; UPD(0x0C07BC98u, 3);  /* 0C07BC96 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07BC9Au, 1);  /* 0C07BC98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07BC9Cu, 1);  /* 0C07BC9A mov.l @Rm+,Rn */
	IF(0x0C07BC9Cu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A14C0u: TAIL(f_0C0A14C0); default: JUMPD(tv_); } }  /* 0C07BC9C jmp @Rn */
L_0C07BCA0: BLKS(0x0C07BCA0u);
	r9 = 0xB4u; UPD(0x0C07BCA2u, 1);  /* 0C07BCA0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07BCA2 add #imm,Rn */
	IF(0x0C07BCA4u); MACL = r8 * r9;  /* 0C07BCA4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07BCA8u, 4);  /* 0C07BCA6 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C07BCA8 mov #imm,Rn */
	IF(0x0C07BCAAu); r9 = MACL;  /* 0C07BCAA sts macl,Rn */
	r9 += r0;  /* 0C07BCAC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07BCB0u, 4);  /* 0C07BCAE mov.w @(disp,pc),Rn */
	IF(0x0C07BCB0u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07BCB2u, 1);  /* 0C07BCB0 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C07BCB2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C07BCB6u, 2);  /* 0C07BCB4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07BCB6 add #imm,Rn */
	IF(0x0C07BCB8u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07BCBAu, 2);  /* 0C07BCB8 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C07BCBA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C07BCBEu, 2);  /* 0C07BCBC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C07BCC0u, 1);  /* 0C07BCBE mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C07BCC2u, 1);  /* 0C07BCC0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C07BCC4u, 1);  /* 0C07BCC2 mov.l @(disp,Rm),Rn */
	IF(0x0C07BCC4u); { u32 t_ = r0; PR = 0x0C07BCC8u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07BCC8u); }  /* 0C07BCC4 jsr @Rn */
L_0C07BCC8: BLKS(0x0C07BCC8u);
	r4 = r8;  /* 0C07BCC8 mov Rm,Rn */
	r8 = 0xC0A0540u; UPD(0x0C07BCCCu, 2);  /* 0C07BCCA mov.l @(disp,pc),Rn */
	IF(0x0C07BCCCu); { u32 t_ = r8; PR = 0x0C07BCD0u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C07BCD0u); }  /* 0C07BCCC jsr @Rn */
L_0C07BCD0: BLKS(0x0C07BCD0u);
	IF(0x0C07BCD0u); T = (s32)r0 >= 0;  /* 0C07BCD0 cmp/pz Rn */
	if (!T) { UPD(0x0C07BD00u, 4); goto L_0C07BD00; }  /* 0C07BCD2 bf */
L_0C07BCD4: BLKS(0x0C07BCD4u);
	r15 += 0xFFFFFFF8u;  /* 0C07BCD4 add #imm,Rn */
	r4 = 0x0u;  /* 0C07BCD6 mov #imm,Rn */
	r5 = 0x20000u; UPD(0x0C07BCDAu, 3);  /* 0C07BCD8 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07BCDCu, 1);  /* 0C07BCDA mov.l Rm,@(disp,Rn) */
	W32(r15, r5); UPD(0x0C07BCDEu, 1);  /* 0C07BCDC mov.l Rm,@Rn */
	r4 = 0x8u;  /* 0C07BCDE mov #imm,Rn */
	UPD(0x0C07BCE0u, 1);
L_0C07BCE0: BLKS(0x0C07BCE0u);
	r8 = 0xC06CC20u; UPD(0x0C07BCE2u, 1);  /* 0C07BCE0 mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C07BCE2 mov #imm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C07BCE6u, 2);  /* 0C07BCE4 mov.l @(disp,Rm),Rn */
	IF(0x0C07BCE6u); { u32 t_ = r8; PR = 0x0C07BCEAu; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C07BCEAu); }  /* 0C07BCE6 jsr @Rn */
L_0C07BCEA: BLKS(0x0C07BCEAu);
	r15 += 0x8u;  /* 0C07BCEA add #imm,Rn */
	UPD(0x0C07BCECu, 1);
L_0C07BCEC: BLKS(0x0C07BCECu);
	r15 = r14;  /* 0C07BCEC mov Rm,Rn */
	IF(0x0C07BCEEu); PR = R32(r15); r15 += 4; UPD(0x0C07BCF0u, 2);  /* 0C07BCEE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07BCF2u, 1);  /* 0C07BCF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07BCF4u, 1);  /* 0C07BCF2 mov.l @Rm+,Rn */
	IF(0x0C07BCF4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07BCF4 rts */
L_0C07BD00: BLKS(0x0C07BD00u);
	r7 = 0x0u;  /* 0C07BD00 mov #imm,Rn */
	UPD(0x0C07BD02u, 1);
L_0C07BD02: BLKS(0x0C07BD02u);
	{ W32(r9, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C07BCECu, 3); goto L_0C07BCEC; }  /* 0C07BD02 bra */
L_0C07BD10: BLKS(0x0C07BD10u);
	r9 = 0xB4u; UPD(0x0C07BD12u, 1);  /* 0C07BD10 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07BD12 add #imm,Rn */
	IF(0x0C07BD14u); MACL = r8 * r9;  /* 0C07BD14 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07BD18u, 4);  /* 0C07BD16 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C07BD18 mov #imm,Rn */
	IF(0x0C07BD1Au); r9 = MACL;  /* 0C07BD1A sts macl,Rn */
	r9 += r0;  /* 0C07BD1C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07BD20u, 4);  /* 0C07BD1E mov.w @(disp,pc),Rn */
	IF(0x0C07BD20u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07BD22u, 1);  /* 0C07BD20 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C07BD22 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C07BD26u, 2);  /* 0C07BD24 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07BD26 add #imm,Rn */
	IF(0x0C07BD28u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07BD2Au, 2);  /* 0C07BD28 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C07BD2A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C07BD2Eu, 2);  /* 0C07BD2C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C07BD30u, 1);  /* 0C07BD2E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C07BD32u, 1);  /* 0C07BD30 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C07BD34u, 1);  /* 0C07BD32 mov.l @(disp,Rm),Rn */
	IF(0x0C07BD34u); { u32 t_ = r0; PR = 0x0C07BD38u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07BD38u); }  /* 0C07BD34 jsr @Rn */
L_0C07BD38: BLKS(0x0C07BD38u);
	r4 = r8;  /* 0C07BD38 mov Rm,Rn */
	r8 = 0xC0A0540u; UPD(0x0C07BD3Cu, 2);  /* 0C07BD3A mov.l @(disp,pc),Rn */
	IF(0x0C07BD3Cu); { u32 t_ = r8; PR = 0x0C07BD40u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C07BD40u); }  /* 0C07BD3C jsr @Rn */
L_0C07BD40: BLKS(0x0C07BD40u);
	IF(0x0C07BD40u); T = (s32)r0 >= 0;  /* 0C07BD40 cmp/pz Rn */
	if (!T) { UPD(0x0C07BD00u, 4); goto L_0C07BD00; }  /* 0C07BD42 bf */
L_0C07BD44: BLKS(0x0C07BD44u);
	r15 += 0xFFFFFFF8u;  /* 0C07BD44 add #imm,Rn */
	r4 = 0x0u;  /* 0C07BD46 mov #imm,Rn */
	r5 = 0x20000u; UPD(0x0C07BD4Au, 3);  /* 0C07BD48 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07BD4Cu, 1);  /* 0C07BD4A mov.l Rm,@(disp,Rn) */
	W32(r15, r5); UPD(0x0C07BD4Eu, 1);  /* 0C07BD4C mov.l Rm,@Rn */
	{ r4 = 0xBu; /* slot mov #imm,Rn */ UPD(0x0C07BCE0u, 3); goto L_0C07BCE0; }  /* 0C07BD4E bra */
L_0C07BD60: BLKS(0x0C07BD60u);
	r9 = 0xB4u; UPD(0x0C07BD62u, 1);  /* 0C07BD60 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07BD62 add #imm,Rn */
	IF(0x0C07BD64u); MACL = r8 * r9;  /* 0C07BD64 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07BD68u, 4);  /* 0C07BD66 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C07BD68 mov #imm,Rn */
	IF(0x0C07BD6Au); r8 = MACL;  /* 0C07BD6A sts macl,Rn */
	r8 += r0;  /* 0C07BD6C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07BD70u, 4);  /* 0C07BD6E mov.w @(disp,pc),Rn */
	IF(0x0C07BD70u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07BD72u, 1);  /* 0C07BD70 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C07BD72 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C07BD76u, 2);  /* 0C07BD74 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07BD76 add #imm,Rn */
	IF(0x0C07BD78u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07BD7Au, 2);  /* 0C07BD78 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C07BD7A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C07BD7Eu, 2);  /* 0C07BD7C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C07BD80u, 1);  /* 0C07BD7E mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C07BD82u, 1);  /* 0C07BD80 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07BD84u, 1);  /* 0C07BD82 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C07BD86u, 1);  /* 0C07BD84 mov.l @(disp,Rm),Rn */
L_0C07BD86: BLKS(0x0C07BD86u);
	IF(0x0C07BD86u); { u32 t_ = r0; PR = 0x0C07BD8Au; IF(0x0C07BD88u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C07BD8Au); }  /* 0C07BD86 jsr @Rn */
L_0C07BD8A: BLKS(0x0C07BD8Au);
	r2 = 0x0u;  /* 0C07BD8A mov #imm,Rn */
	{ W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C07BCEAu, 4); goto L_0C07BCEA; }  /* 0C07BD8C bra */
L_0C07BD90: BLKS(0x0C07BD90u);
	r3 = 0xB4u; UPD(0x0C07BD92u, 1);  /* 0C07BD90 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07BD92 add #imm,Rn */
	IF(0x0C07BD94u); MACL = r8 * r3;  /* 0C07BD94 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C07BD98u, 4);  /* 0C07BD96 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C07BD9Au, 1);  /* 0C07BD98 mov.w @(disp,pc),Rn */
	IF(0x0C07BD9Au); r8 = MACL;  /* 0C07BD9A sts macl,Rn */
	r8 += r2;  /* 0C07BD9C add Rm,Rn */
	IF(0x0C07BD9Eu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07BDA0u, 3);  /* 0C07BD9E mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C07BDA0 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C07BDA4u, 2);  /* 0C07BDA2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07BDA4 add #imm,Rn */
	IF(0x0C07BDA6u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07BDA8u, 2);  /* 0C07BDA6 mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C07BDA8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07BDACu, 2);  /* 0C07BDAA mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C07BDAC mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C07BDB0u, 2);  /* 0C07BDAE mov.l @Rm,Rn */
L_0C07BDB0: BLKS(0x0C07BDB0u);
	r6 = R32(r8 + 0x24u); UPD(0x0C07BDB2u, 1);  /* 0C07BDB0 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AC800u; UPD(0x0C07BDB4u, 1);  /* 0C07BDB2 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C07BD86u, 3); goto L_0C07BD86; }  /* 0C07BDB4 bra */
L_0C07BDC0: BLKS(0x0C07BDC0u);
	r7 = 0xB4u; UPD(0x0C07BDC2u, 1);  /* 0C07BDC0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07BDC2 add #imm,Rn */
	IF(0x0C07BDC4u); MACL = r8 * r7;  /* 0C07BDC4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C07BDC8u, 4);  /* 0C07BDC6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C07BDCAu, 1);  /* 0C07BDC8 mov.w @(disp,pc),Rn */
	IF(0x0C07BDCAu); r8 = MACL;  /* 0C07BDCA sts macl,Rn */
	r8 += r6;  /* 0C07BDCC add Rm,Rn */
	IF(0x0C07BDCEu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07BDD0u, 3);  /* 0C07BDCE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C07BDD0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C07BDD4u, 2);  /* 0C07BDD2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07BDD4 add #imm,Rn */
	IF(0x0C07BDD6u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07BDD8u, 2);  /* 0C07BDD6 mov.b @(r0,Rm),Rn */
	r5 = 0x1u;  /* 0C07BDD8 mov #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C07BDDA extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C07BDDEu, 3);  /* 0C07BDDC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C07BDB0u, 3); goto L_0C07BDB0; }  /* 0C07BDDE bra */
L_0C07BDF0: BLKS(0x0C07BDF0u);
	r9 = 0xB4u; UPD(0x0C07BDF2u, 1);  /* 0C07BDF0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07BDF2 add #imm,Rn */
	IF(0x0C07BDF4u); MACL = r8 * r9;  /* 0C07BDF4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07BDF8u, 4);  /* 0C07BDF6 mov.l @(disp,pc),Rn */
	IF(0x0C07BDF8u); r9 = MACL;  /* 0C07BDF8 sts macl,Rn */
	r9 += r0;  /* 0C07BDFA add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07BDFEu, 3);  /* 0C07BDFC mov.w @(disp,pc),Rn */
	IF(0x0C07BDFEu); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07BE00u, 1);  /* 0C07BDFE mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C07BE00 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C07BE04u, 2);  /* 0C07BE02 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07BE04 add #imm,Rn */
	IF(0x0C07BE06u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07BE08u, 2);  /* 0C07BE06 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C07BE08 mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C07BE0A extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C07BE0Eu, 3);  /* 0C07BE0C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C07BE10u, 1);  /* 0C07BE0E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C07BE12u, 1);  /* 0C07BE10 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C07BE14u, 1);  /* 0C07BE12 mov.l @(disp,Rm),Rn */
	IF(0x0C07BE14u); { u32 t_ = r0; PR = 0x0C07BE18u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07BE18u); }  /* 0C07BE14 jsr @Rn */
L_0C07BE18: BLKS(0x0C07BE18u);
	r4 = r8;  /* 0C07BE18 mov Rm,Rn */
	r8 = 0xC0A05D0u; UPD(0x0C07BE1Cu, 2);  /* 0C07BE1A mov.l @(disp,pc),Rn */
	IF(0x0C07BE1Cu); { u32 t_ = r8; PR = 0x0C07BE20u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C07BE20u); }  /* 0C07BE1C jsr @Rn */
L_0C07BE20: BLKS(0x0C07BE20u);
	IF(0x0C07BE20u); T = (s32)r0 >= 0;  /* 0C07BE20 cmp/pz Rn */
	if (!T) { UPD(0x0C07BE30u, 4); goto L_0C07BE30; }  /* 0C07BE22 bf */
L_0C07BE24: BLKS(0x0C07BE24u);
	r4 = 0xEu;  /* 0C07BE24 mov #imm,Rn */
	r8 = 0xC06CD90u; UPD(0x0C07BE28u, 2);  /* 0C07BE26 mov.l @(disp,pc),Rn */
	r5 = r0;  /* 0C07BE28 mov Rm,Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C07BE2Cu, 2);  /* 0C07BE2A mov.l @(disp,Rm),Rn */
	IF(0x0C07BE2Cu); { u32 t_ = r8; PR = 0x0C07BE30u; r7 = R32(r9 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CD90, 0x0C06CD90u, 0x0C07BE30u); }  /* 0C07BE2C jsr @Rn */
L_0C07BE30: BLKS(0x0C07BE30u);
	{ r7 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C07BD02u, 3); goto L_0C07BD02; }  /* 0C07BE30 bra */
}

void f_0C07BE60(sh3_t *c)
{
	LOCALS;
	goto L_0C07BE60;
L_0C07BC40: BLKS(0x0C07BC40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07BC42u, 1);  /* 0C07BC40 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C07BC44u, 1);  /* 0C07BC42 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C07BC44 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07BC48u, 2);  /* 0C07BC46 mov.l Rm,@-Rn */
	IF(0x0C07BC48u); MACL = r8 * r3;  /* 0C07BC48 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07BC4Cu, 3);  /* 0C07BC4A mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C07BC4Eu, 1);  /* 0C07BC4C mov.l @(disp,pc),Rn */
	IF(0x0C07BC4Eu); r2 = MACL;  /* 0C07BC4E sts macl,Rn */
	IF(0x0C07BC50u); r15 -= 4; W32(r15, PR); UPD(0x0C07BC52u, 2);  /* 0C07BC50 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07BC52 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07BC56u, 2);  /* 0C07BC54 mov.l @(disp,Rm),Rn */
	r0 = 0x8u;  /* 0C07BC56 mov #imm,Rn */
	T = r2 > r0;  /* 0C07BC58 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07BCECu, 5); goto L_0C07BCEC; } goto L_0C07BC5E; }  /* 0C07BC5A bt/s */
L_0C07BC5E: BLKS(0x0C07BC5Eu);
	r0 = 0xC07BC70u;  /* 0C07BC5E mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07BC60 add Rm,Rn */
	IF(0x0C07BC62u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07BC64u, 4);  /* 0C07BC62 mov.w @(r0,Rm),Rn */
	IF(0x0C07BC64u); { u32 tv_ = (r4 + 0x0C07BC68u); u32 t_ = PHYS(tv_); IF(0x0C07BC66u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07BC90u: goto L_0C07BC90; case 0x0C07BCA0u: goto L_0C07BCA0; case 0x0C07BD10u: goto L_0C07BD10; case 0x0C07BD60u: goto L_0C07BD60; case 0x0C07BD90u: goto L_0C07BD90; case 0x0C07BDC0u: goto L_0C07BDC0; case 0x0C07BDF0u: goto L_0C07BDF0; default: JUMPD(tv_); } }  /* 0C07BC64 braf Rn */
L_0C07BC90: BLKS(0x0C07BC90u);
	r5 = 0xC0A14C0u; UPD(0x0C07BC92u, 1);  /* 0C07BC90 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C07BC92 mov Rm,Rn */
	r15 = r14;  /* 0C07BC94 mov Rm,Rn */
	IF(0x0C07BC96u); PR = R32(r15); r15 += 4; UPD(0x0C07BC98u, 3);  /* 0C07BC96 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07BC9Au, 1);  /* 0C07BC98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07BC9Cu, 1);  /* 0C07BC9A mov.l @Rm+,Rn */
	IF(0x0C07BC9Cu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A14C0u: TAIL(f_0C0A14C0); default: JUMPD(tv_); } }  /* 0C07BC9C jmp @Rn */
L_0C07BCA0: BLKS(0x0C07BCA0u);
	r9 = 0xB4u; UPD(0x0C07BCA2u, 1);  /* 0C07BCA0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07BCA2 add #imm,Rn */
	IF(0x0C07BCA4u); MACL = r8 * r9;  /* 0C07BCA4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07BCA8u, 4);  /* 0C07BCA6 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C07BCA8 mov #imm,Rn */
	IF(0x0C07BCAAu); r9 = MACL;  /* 0C07BCAA sts macl,Rn */
	r9 += r0;  /* 0C07BCAC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07BCB0u, 4);  /* 0C07BCAE mov.w @(disp,pc),Rn */
	IF(0x0C07BCB0u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07BCB2u, 1);  /* 0C07BCB0 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C07BCB2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C07BCB6u, 2);  /* 0C07BCB4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07BCB6 add #imm,Rn */
	IF(0x0C07BCB8u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07BCBAu, 2);  /* 0C07BCB8 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C07BCBA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C07BCBEu, 2);  /* 0C07BCBC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C07BCC0u, 1);  /* 0C07BCBE mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C07BCC2u, 1);  /* 0C07BCC0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C07BCC4u, 1);  /* 0C07BCC2 mov.l @(disp,Rm),Rn */
	IF(0x0C07BCC4u); { u32 t_ = r0; PR = 0x0C07BCC8u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07BCC8u); }  /* 0C07BCC4 jsr @Rn */
L_0C07BCC8: BLKS(0x0C07BCC8u);
	r4 = r8;  /* 0C07BCC8 mov Rm,Rn */
	r8 = 0xC0A0540u; UPD(0x0C07BCCCu, 2);  /* 0C07BCCA mov.l @(disp,pc),Rn */
	IF(0x0C07BCCCu); { u32 t_ = r8; PR = 0x0C07BCD0u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C07BCD0u); }  /* 0C07BCCC jsr @Rn */
L_0C07BCD0: BLKS(0x0C07BCD0u);
	IF(0x0C07BCD0u); T = (s32)r0 >= 0;  /* 0C07BCD0 cmp/pz Rn */
	if (!T) { UPD(0x0C07BD00u, 4); goto L_0C07BD00; }  /* 0C07BCD2 bf */
L_0C07BCD4: BLKS(0x0C07BCD4u);
	r15 += 0xFFFFFFF8u;  /* 0C07BCD4 add #imm,Rn */
	r4 = 0x0u;  /* 0C07BCD6 mov #imm,Rn */
	r5 = 0x20000u; UPD(0x0C07BCDAu, 3);  /* 0C07BCD8 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07BCDCu, 1);  /* 0C07BCDA mov.l Rm,@(disp,Rn) */
	W32(r15, r5); UPD(0x0C07BCDEu, 1);  /* 0C07BCDC mov.l Rm,@Rn */
	r4 = 0x8u;  /* 0C07BCDE mov #imm,Rn */
	UPD(0x0C07BCE0u, 1);
L_0C07BCE0: BLKS(0x0C07BCE0u);
	r8 = 0xC06CC20u; UPD(0x0C07BCE2u, 1);  /* 0C07BCE0 mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C07BCE2 mov #imm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C07BCE6u, 2);  /* 0C07BCE4 mov.l @(disp,Rm),Rn */
	IF(0x0C07BCE6u); { u32 t_ = r8; PR = 0x0C07BCEAu; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C07BCEAu); }  /* 0C07BCE6 jsr @Rn */
L_0C07BCEA: BLKS(0x0C07BCEAu);
	r15 += 0x8u;  /* 0C07BCEA add #imm,Rn */
	UPD(0x0C07BCECu, 1);
L_0C07BCEC: BLKS(0x0C07BCECu);
	r15 = r14;  /* 0C07BCEC mov Rm,Rn */
	IF(0x0C07BCEEu); PR = R32(r15); r15 += 4; UPD(0x0C07BCF0u, 2);  /* 0C07BCEE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07BCF2u, 1);  /* 0C07BCF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07BCF4u, 1);  /* 0C07BCF2 mov.l @Rm+,Rn */
	IF(0x0C07BCF4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07BCF4 rts */
L_0C07BD00: BLKS(0x0C07BD00u);
	r7 = 0x0u;  /* 0C07BD00 mov #imm,Rn */
	UPD(0x0C07BD02u, 1);
L_0C07BD02: BLKS(0x0C07BD02u);
	{ W32(r9, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C07BCECu, 3); goto L_0C07BCEC; }  /* 0C07BD02 bra */
L_0C07BD10: BLKS(0x0C07BD10u);
	r9 = 0xB4u; UPD(0x0C07BD12u, 1);  /* 0C07BD10 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07BD12 add #imm,Rn */
	IF(0x0C07BD14u); MACL = r8 * r9;  /* 0C07BD14 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07BD18u, 4);  /* 0C07BD16 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C07BD18 mov #imm,Rn */
	IF(0x0C07BD1Au); r9 = MACL;  /* 0C07BD1A sts macl,Rn */
	r9 += r0;  /* 0C07BD1C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07BD20u, 4);  /* 0C07BD1E mov.w @(disp,pc),Rn */
	IF(0x0C07BD20u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07BD22u, 1);  /* 0C07BD20 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C07BD22 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C07BD26u, 2);  /* 0C07BD24 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07BD26 add #imm,Rn */
	IF(0x0C07BD28u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07BD2Au, 2);  /* 0C07BD28 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C07BD2A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C07BD2Eu, 2);  /* 0C07BD2C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C07BD30u, 1);  /* 0C07BD2E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C07BD32u, 1);  /* 0C07BD30 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C07BD34u, 1);  /* 0C07BD32 mov.l @(disp,Rm),Rn */
	IF(0x0C07BD34u); { u32 t_ = r0; PR = 0x0C07BD38u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07BD38u); }  /* 0C07BD34 jsr @Rn */
L_0C07BD38: BLKS(0x0C07BD38u);
	r4 = r8;  /* 0C07BD38 mov Rm,Rn */
	r8 = 0xC0A0540u; UPD(0x0C07BD3Cu, 2);  /* 0C07BD3A mov.l @(disp,pc),Rn */
	IF(0x0C07BD3Cu); { u32 t_ = r8; PR = 0x0C07BD40u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C07BD40u); }  /* 0C07BD3C jsr @Rn */
L_0C07BD40: BLKS(0x0C07BD40u);
	IF(0x0C07BD40u); T = (s32)r0 >= 0;  /* 0C07BD40 cmp/pz Rn */
	if (!T) { UPD(0x0C07BD00u, 4); goto L_0C07BD00; }  /* 0C07BD42 bf */
L_0C07BD44: BLKS(0x0C07BD44u);
	r15 += 0xFFFFFFF8u;  /* 0C07BD44 add #imm,Rn */
	r4 = 0x0u;  /* 0C07BD46 mov #imm,Rn */
	r5 = 0x20000u; UPD(0x0C07BD4Au, 3);  /* 0C07BD48 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07BD4Cu, 1);  /* 0C07BD4A mov.l Rm,@(disp,Rn) */
	W32(r15, r5); UPD(0x0C07BD4Eu, 1);  /* 0C07BD4C mov.l Rm,@Rn */
	{ r4 = 0xBu; /* slot mov #imm,Rn */ UPD(0x0C07BCE0u, 3); goto L_0C07BCE0; }  /* 0C07BD4E bra */
L_0C07BD60: BLKS(0x0C07BD60u);
	r9 = 0xB4u; UPD(0x0C07BD62u, 1);  /* 0C07BD60 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07BD62 add #imm,Rn */
	IF(0x0C07BD64u); MACL = r8 * r9;  /* 0C07BD64 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07BD68u, 4);  /* 0C07BD66 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C07BD68 mov #imm,Rn */
	IF(0x0C07BD6Au); r8 = MACL;  /* 0C07BD6A sts macl,Rn */
	r8 += r0;  /* 0C07BD6C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07BD70u, 4);  /* 0C07BD6E mov.w @(disp,pc),Rn */
	IF(0x0C07BD70u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07BD72u, 1);  /* 0C07BD70 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C07BD72 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C07BD76u, 2);  /* 0C07BD74 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07BD76 add #imm,Rn */
	IF(0x0C07BD78u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07BD7Au, 2);  /* 0C07BD78 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C07BD7A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C07BD7Eu, 2);  /* 0C07BD7C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AD830u; UPD(0x0C07BD80u, 1);  /* 0C07BD7E mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C07BD82u, 1);  /* 0C07BD80 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07BD84u, 1);  /* 0C07BD82 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C07BD86u, 1);  /* 0C07BD84 mov.l @(disp,Rm),Rn */
L_0C07BD86: BLKS(0x0C07BD86u);
	IF(0x0C07BD86u); { u32 t_ = r0; PR = 0x0C07BD8Au; IF(0x0C07BD88u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C07BD8Au); }  /* 0C07BD86 jsr @Rn */
L_0C07BD8A: BLKS(0x0C07BD8Au);
	r2 = 0x0u;  /* 0C07BD8A mov #imm,Rn */
	{ W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C07BCEAu, 4); goto L_0C07BCEA; }  /* 0C07BD8C bra */
L_0C07BD90: BLKS(0x0C07BD90u);
	r3 = 0xB4u; UPD(0x0C07BD92u, 1);  /* 0C07BD90 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07BD92 add #imm,Rn */
	IF(0x0C07BD94u); MACL = r8 * r3;  /* 0C07BD94 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C07BD98u, 4);  /* 0C07BD96 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C07BD9Au, 1);  /* 0C07BD98 mov.w @(disp,pc),Rn */
	IF(0x0C07BD9Au); r8 = MACL;  /* 0C07BD9A sts macl,Rn */
	r8 += r2;  /* 0C07BD9C add Rm,Rn */
	IF(0x0C07BD9Eu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07BDA0u, 3);  /* 0C07BD9E mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C07BDA0 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C07BDA4u, 2);  /* 0C07BDA2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07BDA4 add #imm,Rn */
	IF(0x0C07BDA6u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07BDA8u, 2);  /* 0C07BDA6 mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C07BDA8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07BDACu, 2);  /* 0C07BDAA mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C07BDAC mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C07BDB0u, 2);  /* 0C07BDAE mov.l @Rm,Rn */
L_0C07BDB0: BLKS(0x0C07BDB0u);
	r6 = R32(r8 + 0x24u); UPD(0x0C07BDB2u, 1);  /* 0C07BDB0 mov.l @(disp,Rm),Rn */
	r0 = 0xC0AC800u; UPD(0x0C07BDB4u, 1);  /* 0C07BDB2 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C07BD86u, 3); goto L_0C07BD86; }  /* 0C07BDB4 bra */
L_0C07BDC0: BLKS(0x0C07BDC0u);
	r7 = 0xB4u; UPD(0x0C07BDC2u, 1);  /* 0C07BDC0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07BDC2 add #imm,Rn */
	IF(0x0C07BDC4u); MACL = r8 * r7;  /* 0C07BDC4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C07BDC8u, 4);  /* 0C07BDC6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C07BDCAu, 1);  /* 0C07BDC8 mov.w @(disp,pc),Rn */
	IF(0x0C07BDCAu); r8 = MACL;  /* 0C07BDCA sts macl,Rn */
	r8 += r6;  /* 0C07BDCC add Rm,Rn */
	IF(0x0C07BDCEu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07BDD0u, 3);  /* 0C07BDCE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C07BDD0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C07BDD4u, 2);  /* 0C07BDD2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07BDD4 add #imm,Rn */
	IF(0x0C07BDD6u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07BDD8u, 2);  /* 0C07BDD6 mov.b @(r0,Rm),Rn */
	r5 = 0x1u;  /* 0C07BDD8 mov #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C07BDDA extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C07BDDEu, 3);  /* 0C07BDDC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C07BDB0u, 3); goto L_0C07BDB0; }  /* 0C07BDDE bra */
L_0C07BDF0: BLKS(0x0C07BDF0u);
	r9 = 0xB4u; UPD(0x0C07BDF2u, 1);  /* 0C07BDF0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07BDF2 add #imm,Rn */
	IF(0x0C07BDF4u); MACL = r8 * r9;  /* 0C07BDF4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07BDF8u, 4);  /* 0C07BDF6 mov.l @(disp,pc),Rn */
	IF(0x0C07BDF8u); r9 = MACL;  /* 0C07BDF8 sts macl,Rn */
	r9 += r0;  /* 0C07BDFA add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07BDFEu, 3);  /* 0C07BDFC mov.w @(disp,pc),Rn */
	IF(0x0C07BDFEu); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07BE00u, 1);  /* 0C07BDFE mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C07BE00 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C07BE04u, 2);  /* 0C07BE02 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07BE04 add #imm,Rn */
	IF(0x0C07BE06u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07BE08u, 2);  /* 0C07BE06 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C07BE08 mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C07BE0A extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C07BE0Eu, 3);  /* 0C07BE0C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0AB240u; UPD(0x0C07BE10u, 1);  /* 0C07BE0E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C07BE12u, 1);  /* 0C07BE10 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C07BE14u, 1);  /* 0C07BE12 mov.l @(disp,Rm),Rn */
	IF(0x0C07BE14u); { u32 t_ = r0; PR = 0x0C07BE18u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07BE18u); }  /* 0C07BE14 jsr @Rn */
L_0C07BE18: BLKS(0x0C07BE18u);
	r4 = r8;  /* 0C07BE18 mov Rm,Rn */
	r8 = 0xC0A05D0u; UPD(0x0C07BE1Cu, 2);  /* 0C07BE1A mov.l @(disp,pc),Rn */
	IF(0x0C07BE1Cu); { u32 t_ = r8; PR = 0x0C07BE20u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C07BE20u); }  /* 0C07BE1C jsr @Rn */
L_0C07BE20: BLKS(0x0C07BE20u);
	IF(0x0C07BE20u); T = (s32)r0 >= 0;  /* 0C07BE20 cmp/pz Rn */
	if (!T) { UPD(0x0C07BE30u, 4); goto L_0C07BE30; }  /* 0C07BE22 bf */
L_0C07BE24: BLKS(0x0C07BE24u);
	r4 = 0xEu;  /* 0C07BE24 mov #imm,Rn */
	r8 = 0xC06CD90u; UPD(0x0C07BE28u, 2);  /* 0C07BE26 mov.l @(disp,pc),Rn */
	r5 = r0;  /* 0C07BE28 mov Rm,Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C07BE2Cu, 2);  /* 0C07BE2A mov.l @(disp,Rm),Rn */
	IF(0x0C07BE2Cu); { u32 t_ = r8; PR = 0x0C07BE30u; r7 = R32(r9 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CD90, 0x0C06CD90u, 0x0C07BE30u); }  /* 0C07BE2C jsr @Rn */
L_0C07BE30: BLKS(0x0C07BE30u);
	{ r7 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C07BD02u, 3); goto L_0C07BD02; }  /* 0C07BE30 bra */
L_0C07BE60: BLKS(0x0C07BE60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07BE62u, 1);  /* 0C07BE60 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07BE64u, 1);  /* 0C07BE62 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C07BE64 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07BE68u, 2);  /* 0C07BE66 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07BE6Au, 1);  /* 0C07BE68 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07BE6Cu, 1);  /* 0C07BE6A mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C07BE6Eu, 1);  /* 0C07BE6C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07BE70u, 1);  /* 0C07BE6E mov.l Rm,@-Rn */
	IF(0x0C07BE70u); MACL = r8 * r3;  /* 0C07BE70 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07BE74u, 3);  /* 0C07BE72 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C07BE76u, 1);  /* 0C07BE74 mov.l @(disp,pc),Rn */
	IF(0x0C07BE76u); r2 = MACL;  /* 0C07BE76 sts macl,Rn */
	IF(0x0C07BE78u); r15 -= 4; W32(r15, PR); UPD(0x0C07BE7Au, 2);  /* 0C07BE78 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07BE7A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07BE7Eu, 2);  /* 0C07BE7C mov.l @(disp,Rm),Rn */
	r0 = 0x8u;  /* 0C07BE7E mov #imm,Rn */
	T = r2 > r0;  /* 0C07BE80 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07BED8u, 5); goto L_0C07BED8; } goto L_0C07BE86; }  /* 0C07BE82 bt/s */
L_0C07BE86: BLKS(0x0C07BE86u);
	r0 = 0xC07BE98u;  /* 0C07BE86 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07BE88 add Rm,Rn */
	IF(0x0C07BE8Au); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07BE8Cu, 4);  /* 0C07BE8A mov.w @(r0,Rm),Rn */
	IF(0x0C07BE8Cu); { u32 tv_ = (r4 + 0x0C07BE90u); u32 t_ = PHYS(tv_); IF(0x0C07BE8Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07BEB0u: goto L_0C07BEB0; case 0x0C07BF50u: goto L_0C07BF50; case 0x0C07BFA0u: goto L_0C07BFA0; case 0x0C07BFE0u: goto L_0C07BFE0; case 0x0C07C060u: goto L_0C07C060; case 0x0C07C120u: goto L_0C07C120; case 0x0C07C250u: goto L_0C07C250; default: JUMPD(tv_); } }  /* 0C07BE8C braf Rn */
L_0C07BEB0: BLKS(0x0C07BEB0u);
	r9 = 0xC0A1700u; UPD(0x0C07BEB2u, 1);  /* 0C07BEB0 mov.l @(disp,pc),Rn */
	IF(0x0C07BEB2u); { u32 t_ = r9; PR = 0x0C07BEB6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C07BEB6u); }  /* 0C07BEB2 jsr @Rn */
L_0C07BEB6: BLKS(0x0C07BEB6u);
	r7 = 0xC0A1590u; UPD(0x0C07BEB8u, 1);  /* 0C07BEB6 mov.l @(disp,pc),Rn */
	IF(0x0C07BEB8u); { u32 t_ = r7; PR = 0x0C07BEBCu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1590, 0x0C0A1590u, 0x0C07BEBCu); }  /* 0C07BEB8 jsr @Rn */
L_0C07BEBC: BLKS(0x0C07BEBCu);
	r6 = 0xB4u; UPD(0x0C07BEBEu, 1);  /* 0C07BEBC mov.w @(disp,pc),Rn */
	IF(0x0C07BEBEu); MACL = r8 * r6;  /* 0C07BEBE mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C07BEC2u, 3);  /* 0C07BEC0 mov.l @(disp,pc),Rn */
	IF(0x0C07BEC2u); r2 = MACL;  /* 0C07BEC2 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C07BEC6u, 2);  /* 0C07BEC4 mov.w @(disp,pc),Rn */
	r2 += r5;  /* 0C07BEC6 add Rm,Rn */
	r3 += r2;  /* 0C07BEC8 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C07BECCu, 3);  /* 0C07BECA mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C07BECC add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C07BECE extu.b Rm,Rn */
	T = r0 == 0xCu;  /* 0C07BED0 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07BEF0u, 6); goto L_0C07BEF0; } UPD(0x0C07BED6u, 1); goto L_0C07BED6; }  /* 0C07BED2 bt/s */
L_0C07BED6: BLKS(0x0C07BED6u);
	IF(0x0C07BED6u); ;  /* 0C07BED6 nop */
	UPD(0x0C07BED8u, 1);
L_0C07BED8: BLKS(0x0C07BED8u);
	r15 = r14;  /* 0C07BED8 mov Rm,Rn */
	IF(0x0C07BEDAu); PR = R32(r15); r15 += 4; UPD(0x0C07BEDCu, 2);  /* 0C07BEDA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07BEDEu, 1);  /* 0C07BEDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07BEE0u, 1);  /* 0C07BEDE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07BEE2u, 1);  /* 0C07BEE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07BEE4u, 1);  /* 0C07BEE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07BEE6u, 1);  /* 0C07BEE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07BEE8u, 1);  /* 0C07BEE6 mov.l @Rm+,Rn */
	IF(0x0C07BEE8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07BEE8 rts */
L_0C07BEF0: BLKS(0x0C07BEF0u);
	r8 = 0x0u;  /* 0C07BEF0 mov #imm,Rn */
	W8(r3, r8); UPD(0x0C07BEF4u, 2);  /* 0C07BEF2 mov.b Rm,@Rn */
	r11 = 0x0u;  /* 0C07BEF4 mov #imm,Rn */
	r10 = 0xC191C80u; UPD(0x0C07BEF8u, 2);  /* 0C07BEF6 mov.l @(disp,pc),Rn */
	r8 = r2;  /* 0C07BEF8 mov Rm,Rn */
	r9 = 0xC0ACA40u; UPD(0x0C07BEFCu, 2);  /* 0C07BEFA mov.l @(disp,pc),Rn */
L_0C07BEFC: BLKS(0x0C07BEFCu);
	r0 = r11;  /* 0C07BEFC mov Rm,Rn */
	r5 = 0xC191C68u; UPD(0x0C07BF00u, 2);  /* 0C07BEFE mov.l @(disp,pc),Rn */
	IF(0x0C07BF00u); r0 <<= 2;  /* 0C07BF00 shll2 Rn */
	IF(0x0C07BF02u); r7 = R32(r0 + r5); UPD(0x0C07BF04u, 2);  /* 0C07BF02 mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C07BF04 add #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07BF08u, 2);  /* 0C07BF06 mov.l @(disp,Rm),Rn */
	r0 = r11;  /* 0C07BF08 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C07BF0A and #imm,r0 */
	IF(0x0C07BF0Cu); r0 <<= 2;  /* 0C07BF0C shll2 Rn */
	r6 += r7;  /* 0C07BF0E add Rm,Rn */
	IF(0x0C07BF10u); r3 = R32(r0 + r10); UPD(0x0C07BF12u, 5);  /* 0C07BF10 mov.l @(r0,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C07BF14u, 1);  /* 0C07BF12 mov.l @(disp,Rm),Rn */
	r4 = 0xC191C88u; UPD(0x0C07BF16u, 1);  /* 0C07BF14 mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C07BF16 add Rm,Rn */
	IF(0x0C07BF18u); r3 = R32(r0 + r4); UPD(0x0C07BF1Au, 2);  /* 0C07BF18 mov.l @(r0,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C07BF1Cu, 1);  /* 0C07BF1A mov.w @(disp,pc),Rn */
	IF(0x0C07BF1Cu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07BF1Eu, 1);  /* 0C07BF1C mov.b @(r0,Rm),Rn */
	r13 = r2 & 0xFF;  /* 0C07BF1E extu.b Rm,Rn */
	W32(r15, r13); UPD(0x0C07BF22u, 2);  /* 0C07BF20 mov.l Rm,@Rn */
	r0 = r8;  /* 0C07BF22 mov Rm,Rn */
	r12 = 0xA9u; UPD(0x0C07BF26u, 2);  /* 0C07BF24 mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C07BF26 mov #imm,Rn */
	IF(0x0C07BF28u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C07BF2Au, 2);  /* 0C07BF28 mov.b @(r0,Rm),Rn */
	r13 = r11;  /* 0C07BF2A mov Rm,Rn */
	r0 = 0x808080u; UPD(0x0C07BF2Eu, 2);  /* 0C07BF2C mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C07BF2E extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07BF32u, 2);  /* 0C07BF30 mov.l Rm,@(disp,Rn) */
	r13 += 0x1u;  /* 0C07BF32 add #imm,Rn */
	W32(r15 + 0x8u, r2); UPD(0x0C07BF36u, 2);  /* 0C07BF34 mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C07BF36 mov #imm,Rn */
	W32(r15 + 0xCu, r3); UPD(0x0C07BF3Au, 2);  /* 0C07BF38 mov.l Rm,@(disp,Rn) */
	r11 = (u32)(s32)(s16)r13;  /* 0C07BF3A exts.w Rm,Rn */
	W32(r15 + 0x10u, r0); UPD(0x0C07BF3Eu, 2);  /* 0C07BF3C mov.l Rm,@(disp,Rn) */
	r12 = 0x5u;  /* 0C07BF3E mov #imm,Rn */
	IF(0x0C07BF40u); { u32 t_ = r9; PR = 0x0C07BF44u; r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C07BF44u); }  /* 0C07BF40 jsr @Rn */
L_0C07BF44: BLKS(0x0C07BF44u);
	T = (s32)r11 > (s32)r12;  /* 0C07BF44 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07BEFCu, 4); goto L_0C07BEFC; } goto L_0C07BF4A; }  /* 0C07BF46 bf/s */
L_0C07BF4A: BLKS(0x0C07BF4Au);
	{ IF(0x0C07BF4Cu); ; /* slot nop */ UPD(0x0C07BED8u, 4); goto L_0C07BED8; }  /* 0C07BF4A bra */
L_0C07BF50: BLKS(0x0C07BF50u);
	r10 = 0xC0A0540u; UPD(0x0C07BF52u, 1);  /* 0C07BF50 mov.l @(disp,pc),Rn */
	IF(0x0C07BF52u); { u32 t_ = r10; PR = 0x0C07BF56u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C07BF56u); }  /* 0C07BF52 jsr @Rn */
L_0C07BF56: BLKS(0x0C07BF56u);
	IF(0x0C07BF56u); T = (s32)r0 >= 0;  /* 0C07BF56 cmp/pz Rn */
	if (!T) { UPD(0x0C07BF80u, 4); goto L_0C07BF80; }  /* 0C07BF58 bf */
L_0C07BF5A: BLKS(0x0C07BF5Au);
	r13 = 0xB4u; UPD(0x0C07BF5Cu, 1);  /* 0C07BF5A mov.w @(disp,pc),Rn */
	IF(0x0C07BF5Cu); MACL = r8 * r13;  /* 0C07BF5C mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C07BF60u, 3);  /* 0C07BF5E mov.l @(disp,pc),Rn */
	IF(0x0C07BF60u); r11 = MACL;  /* 0C07BF60 sts macl,Rn */
	IF(0x0C07BF62u); MACL = r0 * r13;  /* 0C07BF62 mul.l Rm,Rn */
	r11 += r12;  /* 0C07BF64 add Rm,Rn */
	r1 = R32(r11 + 0x30u); UPD(0x0C07BF68u, 5);  /* 0C07BF66 mov.l @(disp,Rm),Rn */
	IF(0x0C07BF68u); r9 = MACL;  /* 0C07BF68 sts macl,Rn */
	r9 += r12;  /* 0C07BF6A add Rm,Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C07BF6Eu, 3);  /* 0C07BF6C mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x28u); UPD(0x0C07BF70u, 1);  /* 0C07BF6E mov.l @(disp,Rm),Rn */
	r0 = R32(r11 + 0x2Cu); UPD(0x0C07BF72u, 1);  /* 0C07BF70 mov.l @(disp,Rm),Rn */
	r6 += r1;  /* 0C07BF72 add Rm,Rn */
	r8 += r0;  /* 0C07BF74 add Rm,Rn */
	W32(r11 + 0x24u, r8); UPD(0x0C07BF78u, 3);  /* 0C07BF76 mov.l Rm,@(disp,Rn) */
	{ W32(r11 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07BED8u, 3); goto L_0C07BED8; }  /* 0C07BF78 bra */
L_0C07BF80: BLKS(0x0C07BF80u);
	r1 = 0xC07BC40u; UPD(0x0C07BF82u, 1);  /* 0C07BF80 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C07BF82 mov Rm,Rn */
	UPD(0x0C07BF84u, 1);
L_0C07BF84: BLKS(0x0C07BF84u);
	r15 = r14;  /* 0C07BF84 mov Rm,Rn */
	IF(0x0C07BF86u); PR = R32(r15); r15 += 4; UPD(0x0C07BF88u, 2);  /* 0C07BF86 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07BF8Au, 1);  /* 0C07BF88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07BF8Cu, 1);  /* 0C07BF8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07BF8Eu, 1);  /* 0C07BF8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07BF90u, 1);  /* 0C07BF8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07BF92u, 1);  /* 0C07BF90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07BF94u, 1);  /* 0C07BF92 mov.l @Rm+,Rn */
	IF(0x0C07BF94u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07BC40u: goto L_0C07BC40; case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C07BF94 jmp @Rn */
L_0C07BFA0: BLKS(0x0C07BFA0u);
	r10 = 0xC0A0540u; UPD(0x0C07BFA2u, 1);  /* 0C07BFA0 mov.l @(disp,pc),Rn */
	IF(0x0C07BFA2u); { u32 t_ = r10; PR = 0x0C07BFA6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C07BFA6u); }  /* 0C07BFA2 jsr @Rn */
L_0C07BFA6: BLKS(0x0C07BFA6u);
	IF(0x0C07BFA6u); T = (s32)r0 >= 0;  /* 0C07BFA6 cmp/pz Rn */
	if (!T) { UPD(0x0C07BF80u, 4); goto L_0C07BF80; }  /* 0C07BFA8 bf */
L_0C07BFAA: BLKS(0x0C07BFAAu);
	r2 = 0xB4u; UPD(0x0C07BFACu, 1);  /* 0C07BFAA mov.w @(disp,pc),Rn */
	IF(0x0C07BFACu); MACL = r0 * r2;  /* 0C07BFAC mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C07BFB0u, 3);  /* 0C07BFAE mov.l @(disp,pc),Rn */
	IF(0x0C07BFB0u); r7 = MACL;  /* 0C07BFB0 sts macl,Rn */
	r7 += r6;  /* 0C07BFB2 add Rm,Rn */
	r4 = R32(r7 + 0xCu); UPD(0x0C07BFB6u, 3);  /* 0C07BFB4 mov.l @(disp,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C07BFB6 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C07BFBAu); MACL = r8 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C07BF80u, 5); goto L_0C07BF80; } goto L_0C07BFBC; }  /* 0C07BFB8 bf/s */
L_0C07BFBC: BLKS(0x0C07BFBCu);
	r11 = R32(r7 + 0x24u); UPD(0x0C07BFBEu, 3);  /* 0C07BFBC mov.l @(disp,Rm),Rn */
	r3 = R32(r7 + 0x28u); UPD(0x0C07BFC0u, 1);  /* 0C07BFBE mov.l @(disp,Rm),Rn */
	IF(0x0C07BFC0u); r5 = MACL;  /* 0C07BFC0 sts macl,Rn */
	r5 += r6;  /* 0C07BFC2 add Rm,Rn */
	r6 = R32(r5 + 0x2Cu); UPD(0x0C07BFC6u, 3);  /* 0C07BFC4 mov.l @(disp,Rm),Rn */
	r7 = R32(r5 + 0x30u); UPD(0x0C07BFC8u, 1);  /* 0C07BFC6 mov.l @(disp,Rm),Rn */
	r11 += r6;  /* 0C07BFC8 add Rm,Rn */
	r3 += r7;  /* 0C07BFCA add Rm,Rn */
	W32(r5 + 0x24u, r11); UPD(0x0C07BFCEu, 3);  /* 0C07BFCC mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x28u, r3); UPD(0x0C07BFD0u, 1);  /* 0C07BFCE mov.l Rm,@(disp,Rn) */
L_0C07BFD0: BLKS(0x0C07BFD0u);
	{ IF(0x0C07BFD2u); ; /* slot nop */ UPD(0x0C07BED8u, 3); goto L_0C07BED8; }  /* 0C07BFD0 bra */
L_0C07BFE0: BLKS(0x0C07BFE0u);
	r9 = 0xC0A0540u; UPD(0x0C07BFE2u, 1);  /* 0C07BFE0 mov.l @(disp,pc),Rn */
	IF(0x0C07BFE2u); { u32 t_ = r9; PR = 0x0C07BFE6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C07BFE6u); }  /* 0C07BFE2 jsr @Rn */
L_0C07BFE6: BLKS(0x0C07BFE6u);
	IF(0x0C07BFE6u); T = (s32)r0 >= 0;  /* 0C07BFE6 cmp/pz Rn */
	if (!T) { UPD(0x0C07BF80u, 4); goto L_0C07BF80; }  /* 0C07BFE8 bf */
L_0C07BFEA: BLKS(0x0C07BFEAu);
	r2 = 0xB4u; UPD(0x0C07BFECu, 1);  /* 0C07BFEA mov.w @(disp,pc),Rn */
	IF(0x0C07BFECu); MACL = r0 * r2;  /* 0C07BFEC mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C07BFF0u, 3);  /* 0C07BFEE mov.l @(disp,pc),Rn */
	IF(0x0C07BFF0u); r7 = MACL;  /* 0C07BFF0 sts macl,Rn */
	r7 += r6;  /* 0C07BFF2 add Rm,Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C07BFF6u, 3);  /* 0C07BFF4 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C07BFF6 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C07BFFAu); MACL = r8 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C07BF80u, 5); goto L_0C07BF80; } goto L_0C07BFFC; }  /* 0C07BFF8 bf/s */
L_0C07BFFC: BLKS(0x0C07BFFCu);
	r4 = R32(r7 + 0x24u); UPD(0x0C07BFFEu, 3);  /* 0C07BFFC mov.l @(disp,Rm),Rn */
	IF(0x0C07BFFEu); r12 = MACL;  /* 0C07BFFE sts macl,Rn */
	r12 += r6;  /* 0C07C000 add Rm,Rn */
	r10 = R32(r7 + 0x28u); UPD(0x0C07C004u, 3);  /* 0C07C002 mov.l @(disp,Rm),Rn */
	r5 = R32(r12 + 0x2Cu); UPD(0x0C07C006u, 1);  /* 0C07C004 mov.l @(disp,Rm),Rn */
	r1 = R32(r12 + 0x30u); UPD(0x0C07C008u, 1);  /* 0C07C006 mov.l @(disp,Rm),Rn */
	r4 += r5;  /* 0C07C008 add Rm,Rn */
	r0 = R32(r12 + 0xCu); UPD(0x0C07C00Cu, 2);  /* 0C07C00A mov.l @(disp,Rm),Rn */
	r10 += r1;  /* 0C07C00C add Rm,Rn */
	W32(r12 + 0x24u, r4); UPD(0x0C07C010u, 2);  /* 0C07C00E mov.l Rm,@(disp,Rn) */
	IF(0x0C07C010u); r0 <<= 2;  /* 0C07C010 shll2 Rn */
	W32(r12 + 0x28u, r10); UPD(0x0C07C014u, 2);  /* 0C07C012 mov.l Rm,@(disp,Rn) */
	r13 = 0xC191C90u; UPD(0x0C07C016u, 1);  /* 0C07C014 mov.l @(disp,pc),Rn */
	IF(0x0C07C016u); r2 = R32(r0 + r13); UPD(0x0C07C018u, 1);  /* 0C07C016 mov.l @(r0,Rm),Rn */
	W32(r12 + 0xCu, r2); UPD(0x0C07C01Au, 1);  /* 0C07C018 mov.l Rm,@(disp,Rn) */
L_0C07C01A: BLKS(0x0C07C01Au);
	r1 = 0xC0A0380u; UPD(0x0C07C01Cu, 1);  /* 0C07C01A mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C07BF84u, 3); goto L_0C07BF84; }  /* 0C07C01C bra */
L_0C07C060: BLKS(0x0C07C060u);
	r11 = 0xC0A0540u; UPD(0x0C07C062u, 1);  /* 0C07C060 mov.l @(disp,pc),Rn */
	IF(0x0C07C062u); { u32 t_ = r11; PR = 0x0C07C066u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C07C066u); }  /* 0C07C062 jsr @Rn */
L_0C07C066: BLKS(0x0C07C066u);
	IF(0x0C07C066u); T = (s32)r0 >= 0;  /* 0C07C066 cmp/pz Rn */
	if (!T) { UPD(0x0C07BF80u, 4); goto L_0C07BF80; }  /* 0C07C068 bf */
L_0C07C06A: BLKS(0x0C07C06Au);
	r2 = 0xB4u; UPD(0x0C07C06Cu, 1);  /* 0C07C06A mov.w @(disp,pc),Rn */
	IF(0x0C07C06Cu); MACL = r8 * r2;  /* 0C07C06C mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C07C070u, 3);  /* 0C07C06E mov.l @(disp,pc),Rn */
	IF(0x0C07C070u); r9 = MACL;  /* 0C07C070 sts macl,Rn */
	r9 += r5;  /* 0C07C072 add Rm,Rn */
	r6 = R32(r9); UPD(0x0C07C076u, 3);  /* 0C07C074 mov.l @Rm,Rn */
	IF(0x0C07C076u); MACL = r0 * r2;  /* 0C07C076 mul.l Rm,Rn */
	r12 = 0xFFFFFEFFu; UPD(0x0C07C07Au, 3);  /* 0C07C078 mov.w @(disp,pc),Rn */
	r6 &= r12;  /* 0C07C07A and Rm,Rn */
	W32(r9, r6); UPD(0x0C07C07Eu, 2);  /* 0C07C07C mov.l Rm,@Rn */
	IF(0x0C07C07Eu); r0 = MACL;  /* 0C07C07E sts macl,Rn */
	r0 += r5;  /* 0C07C080 add Rm,Rn */
	r3 = R32(r0); UPD(0x0C07C084u, 3);  /* 0C07C082 mov.l @Rm,Rn */
	r7 = 0x100u; UPD(0x0C07C086u, 1);  /* 0C07C084 mov.w @(disp,pc),Rn */
	r4 = R32(r0 + 0x24u); UPD(0x0C07C088u, 1);  /* 0C07C086 mov.l @(disp,Rm),Rn */
	r3 &= r7;  /* 0C07C088 and Rm,Rn */
	r13 = R32(r0 + 0x28u); UPD(0x0C07C08Cu, 2);  /* 0C07C08A mov.l @(disp,Rm),Rn */
	r6 |= r3;  /* 0C07C08C or Rm,Rn */
	r1 = R32(r9 + 0x2Cu); UPD(0x0C07C090u, 2);  /* 0C07C08E mov.l @(disp,Rm),Rn */
	r10 = R32(r9 + 0x30u); UPD(0x0C07C092u, 1);  /* 0C07C090 mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C07C092 add Rm,Rn */
	r13 += r10;  /* 0C07C094 add Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C07C098u, 3);  /* 0C07C096 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C07C09Au, 1);  /* 0C07C098 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C07C09A tst Rm,Rn */
	W32(r9 + 0x28u, r13); UPD(0x0C07C09Eu, 2);  /* 0C07C09C mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r9, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C07C100u, 3); goto L_0C07C100; } UPD(0x0C07C0A2u, 1); goto L_0C07C0A2; }  /* 0C07C09E bt/s */
L_0C07C0A2: BLKS(0x0C07C0A2u);
	T = r0 == 0x7u;  /* 0C07C0A2 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C07C0D0u, 4); goto L_0C07C0D0; }  /* 0C07C0A4 bt */
L_0C07C0A6: BLKS(0x0C07C0A6u);
	r7 = 0xB4u; UPD(0x0C07C0A8u, 1);  /* 0C07C0A6 mov.w @(disp,pc),Rn */
	IF(0x0C07C0A8u); MACL = r8 * r7;  /* 0C07C0A8 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C07C0ACu, 3);  /* 0C07C0AA mov.l @(disp,pc),Rn */
	IF(0x0C07C0ACu); r2 = MACL;  /* 0C07C0AC sts macl,Rn */
	r2 += r3;  /* 0C07C0AE add Rm,Rn */
	r3 = 0x99u; UPD(0x0C07C0B2u, 3);  /* 0C07C0B0 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C07C0B2 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r3); UPD(0x0C07C0B6u, 2);  /* 0C07C0B4 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C07C0B6 add #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C07C0B8 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C07C0BA cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07BFD0u, 6); goto L_0C07BFD0; } UPD(0x0C07C0C0u, 1); goto L_0C07C0C0; }  /* 0C07C0BC bf/s */
L_0C07C0C0: BLKS(0x0C07C0C0u);
	r0 = R32(r2 + 0xCu); UPD(0x0C07C0C2u, 1);  /* 0C07C0C0 mov.l @(disp,Rm),Rn */
	r12 = 0x0u;  /* 0C07C0C2 mov #imm,Rn */
	r0 += 0x1u;  /* 0C07C0C4 add #imm,Rn */
	W8(r3, r12); UPD(0x0C07C0C8u, 3);  /* 0C07C0C6 mov.b Rm,@Rn */
	{ W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07C01Au, 3); goto L_0C07C01A; }  /* 0C07C0C8 bra */
L_0C07C0D0: BLKS(0x0C07C0D0u);
	r2 = 0x99u; UPD(0x0C07C0D2u, 1);  /* 0C07C0D0 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C07C0D2 add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C07C0D6u, 2);  /* 0C07C0D4 mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C07C0D6 add #imm,Rn */
	r0 = r13 & 0xFF;  /* 0C07C0D8 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C07C0DA cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r13); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07C1B6u, 6); goto L_0C07C1B6; } UPD(0x0C07C0E0u, 1); goto L_0C07C0E0; }  /* 0C07C0DC bf/s */
L_0C07C0E0: BLKS(0x0C07C0E0u);
	r4 = R32(r9 + 0x8u); UPD(0x0C07C0E2u, 1);  /* 0C07C0E0 mov.l @(disp,Rm),Rn */
	r5 = 0x0u;  /* 0C07C0E2 mov #imm,Rn */
	r4 += 0x1u;  /* 0C07C0E4 add #imm,Rn */
	W32(r9 + 0x8u, r4); UPD(0x0C07C0E8u, 3);  /* 0C07C0E6 mov.l Rm,@(disp,Rn) */
	r10 = 0x10u;  /* 0C07C0E8 mov #imm,Rn */
	W8(r2, r5); UPD(0x0C07C0ECu, 2);  /* 0C07C0EA mov.b Rm,@Rn */
	r4 = r8;  /* 0C07C0EC mov Rm,Rn */
	r1 = 0xC0A03B0u; UPD(0x0C07C0F0u, 2);  /* 0C07C0EE mov.l @(disp,pc),Rn */
	{ W32(r9 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07BF84u, 3); goto L_0C07BF84; }  /* 0C07C0F0 bra */
L_0C07C100: BLKS(0x0C07C100u);
	r11 = 0xC0A9E40u; UPD(0x0C07C102u, 1);  /* 0C07C100 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C07C102 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C07C104 mov #imm,Rn */
	IF(0x0C07C106u); { u32 t_ = r11; PR = 0x0C07C10Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07C10Au); }  /* 0C07C106 jsr @Rn */
L_0C07C10A: BLKS(0x0C07C10Au);
	T = (r0 & r0) == 0;  /* 0C07C10A tst Rm,Rn */
	if (T) { UPD(0x0C07C1B6u, 4); goto L_0C07C1B6; }  /* 0C07C10C bt */
L_0C07C10E: BLKS(0x0C07C10Eu);
	r6 = R32(r9 + 0xCu); UPD(0x0C07C110u, 1);  /* 0C07C10E mov.l @(disp,Rm),Rn */
	r6 += 0x1u;  /* 0C07C110 add #imm,Rn */
	{ W32(r9 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07C01Au, 4); goto L_0C07C01A; }  /* 0C07C112 bra */
L_0C07C120: BLKS(0x0C07C120u);
	r11 = 0xC0A0540u; UPD(0x0C07C122u, 1);  /* 0C07C120 mov.l @(disp,pc),Rn */
	IF(0x0C07C122u); { u32 t_ = r11; PR = 0x0C07C126u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C07C126u); }  /* 0C07C122 jsr @Rn */
L_0C07C126: BLKS(0x0C07C126u);
	IF(0x0C07C126u); T = (s32)r0 >= 0;  /* 0C07C126 cmp/pz Rn */
	if (T) { UPD(0x0C07C12Eu, 4); goto L_0C07C12E; }  /* 0C07C128 bt */
L_0C07C12A: BLKS(0x0C07C12Au);
	{ IF(0x0C07C12Cu); ; /* slot nop */ UPD(0x0C07BF80u, 3); goto L_0C07BF80; }  /* 0C07C12A bra */
L_0C07C12E: BLKS(0x0C07C12Eu);
	r5 = 0xB4u; UPD(0x0C07C130u, 1);  /* 0C07C12E mov.w @(disp,pc),Rn */
	IF(0x0C07C130u); MACL = r8 * r5;  /* 0C07C130 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C07C134u, 3);  /* 0C07C132 mov.l @(disp,pc),Rn */
	IF(0x0C07C134u); r11 = MACL;  /* 0C07C134 sts macl,Rn */
	IF(0x0C07C136u); MACL = r0 * r5;  /* 0C07C136 mul.l Rm,Rn */
	r11 += r4;  /* 0C07C138 add Rm,Rn */
	r6 = R32(r11); UPD(0x0C07C13Cu, 5);  /* 0C07C13A mov.l @Rm,Rn */
	IF(0x0C07C13Cu); r3 = MACL;  /* 0C07C13C sts macl,Rn */
	r7 = 0xFFFFFEFFu; UPD(0x0C07C140u, 2);  /* 0C07C13E mov.w @(disp,pc),Rn */
	r3 += r4;  /* 0C07C140 add Rm,Rn */
	r0 = R32(r3 + 0x28u); UPD(0x0C07C144u, 2);  /* 0C07C142 mov.l @(disp,Rm),Rn */
	r6 &= r7;  /* 0C07C144 and Rm,Rn */
	r12 = R32(r11 + 0x30u); UPD(0x0C07C148u, 2);  /* 0C07C146 mov.l @(disp,Rm),Rn */
	W32(r11, r6); UPD(0x0C07C14Au, 1);  /* 0C07C148 mov.l Rm,@Rn */
	r0 += r12;  /* 0C07C14A add Rm,Rn */
	r9 = R32(r3); UPD(0x0C07C14Eu, 2);  /* 0C07C14C mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C07C150u, 1);  /* 0C07C14E mov.w @(disp,pc),Rn */
	r12 = 0x9Cu; UPD(0x0C07C152u, 1);  /* 0C07C150 mov.w @(disp,pc),Rn */
	r9 &= r1;  /* 0C07C152 and Rm,Rn */
	r13 = R32(r3 + 0x24u); UPD(0x0C07C156u, 2);  /* 0C07C154 mov.l @(disp,Rm),Rn */
	r12 += r11;  /* 0C07C156 add Rm,Rn */
	r10 = R32(r11 + 0x2Cu); UPD(0x0C07C15Au, 2);  /* 0C07C158 mov.l @(disp,Rm),Rn */
	r6 |= r9;  /* 0C07C15A or Rm,Rn */
	r13 += r10;  /* 0C07C15C add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C07C160u, 3);  /* 0C07C15E mov.b @Rm,Rn */
	W32(r11 + 0x24u, r13); UPD(0x0C07C162u, 1);  /* 0C07C160 mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C07C162 tst Rm,Rn */
	W32(r11 + 0x28u, r0); UPD(0x0C07C166u, 2);  /* 0C07C164 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r11, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C07C1C0u, 3); goto L_0C07C1C0; } UPD(0x0C07C16Au, 1); goto L_0C07C16A; }  /* 0C07C166 bf/s */
L_0C07C16A: BLKS(0x0C07C16Au);
	r10 = 0xC058130u; UPD(0x0C07C16Cu, 1);  /* 0C07C16A mov.l @(disp,pc),Rn */
	r13 = 0xC057430u; UPD(0x0C07C16Eu, 1);  /* 0C07C16C mov.l @(disp,pc),Rn */
	IF(0x0C07C16Eu); { u32 t_ = r10; PR = 0x0C07C172u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C07C172u); }  /* 0C07C16E jsr @Rn */
L_0C07C172: BLKS(0x0C07C172u);
	r4 = r8;  /* 0C07C172 mov Rm,Rn */
	IF(0x0C07C174u); { u32 t_ = r13; PR = 0x0C07C178u; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C07C178u); }  /* 0C07C174 jsr @Rn */
L_0C07C178: BLKS(0x0C07C178u);
	r3 = 0x86u; UPD(0x0C07C17Au, 1);  /* 0C07C178 mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C07C17A mov Rm,Rn */
	IF(0x0C07C17Cu); r6 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C07C17Eu, 2);  /* 0C07C17C mov.w @(r0,Rm),Rn */
	r9 = 0x1Fu;  /* 0C07C17E mov #imm,Rn */
	r6 += 0x8u;  /* 0C07C180 add #imm,Rn */
	r2 = 0xC0A0380u; UPD(0x0C07C184u, 3);  /* 0C07C182 mov.l @(disp,pc),Rn */
	IF(0x0C07C184u); r6 >>= 2;  /* 0C07C184 shlr2 Rn */
	IF(0x0C07C186u); r6 >>= 2;  /* 0C07C186 shlr2 Rn */
	r6 &= r9;  /* 0C07C188 and Rm,Rn */
	r4 = r8;  /* 0C07C18A mov Rm,Rn */
	IF(0x0C07C18Cu); { u32 t_ = r2; PR = 0x0C07C190u; W32(r11 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 6); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C07C190u); }  /* 0C07C18C jsr @Rn */
L_0C07C190: BLKS(0x0C07C190u);
	r4 = r8;  /* 0C07C190 mov Rm,Rn */
	r8 = 0xC0A9E40u; UPD(0x0C07C194u, 2);  /* 0C07C192 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C07C194 mov #imm,Rn */
	IF(0x0C07C196u); { u32 t_ = r8; PR = 0x0C07C19Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07C19Au); }  /* 0C07C196 jsr @Rn */
L_0C07C19A: BLKS(0x0C07C19Au);
	T = (r0 & r0) == 0;  /* 0C07C19A tst Rm,Rn */
	if (T) { UPD(0x0C07C1B6u, 4); goto L_0C07C1B6; }  /* 0C07C19C bt */
L_0C07C19E: BLKS(0x0C07C19Eu);
	r0 = r11;  /* 0C07C19E mov Rm,Rn */
	r4 = 0xA9u; UPD(0x0C07C1A2u, 2);  /* 0C07C1A0 mov.w @(disp,pc),Rn */
	IF(0x0C07C1A2u); r7 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C07C1A4u, 1);  /* 0C07C1A2 mov.b @(r0,Rm),Rn */
	r5 = R32(r11 + 0x28u); UPD(0x0C07C1A6u, 1);  /* 0C07C1A4 mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C07C1A8u, 1);  /* 0C07C1A6 mov.l @(disp,Rm),Rn */
	r11 = 0xC0A9BB0u; UPD(0x0C07C1AAu, 1);  /* 0C07C1A8 mov.l @(disp,pc),Rn */
	IF(0x0C07C1AAu); { u32 t_ = r11; PR = 0x0C07C1AEu; r6 = r7 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C07C1AEu); }  /* 0C07C1AA jsr @Rn */
L_0C07C1AE: BLKS(0x0C07C1AEu);
	T = (r0 & r0) == 0;  /* 0C07C1AE tst Rm,Rn */
	if (T) { UPD(0x0C07C1B6u, 4); goto L_0C07C1B6; }  /* 0C07C1B0 bt */
L_0C07C1B2: BLKS(0x0C07C1B2u);
	r0 = 0x4u;  /* 0C07C1B2 mov #imm,Rn */
	W8(r12, r0); UPD(0x0C07C1B6u, 2);  /* 0C07C1B4 mov.b Rm,@Rn */
L_0C07C1B6: BLKS(0x0C07C1B6u);
	{ IF(0x0C07C1B8u); ; /* slot nop */ UPD(0x0C07BED8u, 3); goto L_0C07BED8; }  /* 0C07C1B6 bra */
L_0C07C1C0: BLKS(0x0C07C1C0u);
	r4 = r8;  /* 0C07C1C0 mov Rm,Rn */
	r8 = 0xC0A9E40u; UPD(0x0C07C1C4u, 2);  /* 0C07C1C2 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C07C1C4 mov #imm,Rn */
	IF(0x0C07C1C6u); { u32 t_ = r8; PR = 0x0C07C1CAu; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07C1CAu); }  /* 0C07C1C6 jsr @Rn */
L_0C07C1CA: BLKS(0x0C07C1CAu);
	T = (r0 & r0) == 0;  /* 0C07C1CA tst Rm,Rn */
	if (T) { UPD(0x0C07C1B6u, 4); goto L_0C07C1B6; }  /* 0C07C1CC bt */
L_0C07C1CE: BLKS(0x0C07C1CEu);
	r0 = r11;  /* 0C07C1CE mov Rm,Rn */
	r6 = 0x86u; UPD(0x0C07C1D2u, 2);  /* 0C07C1D0 mov.w @(disp,pc),Rn */
	r10 = 0xC058060u; UPD(0x0C07C1D4u, 1);  /* 0C07C1D2 mov.l @(disp,pc),Rn */
	IF(0x0C07C1D4u); r13 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C07C1D6u, 1);  /* 0C07C1D4 mov.w @(r0,Rm),Rn */
	r9 = 0x80000u; UPD(0x0C07C1D8u, 1);  /* 0C07C1D6 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C07C1D8 mov Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C07C1DCu, 2);  /* 0C07C1DA mov.l @(disp,pc),Rn */
	IF(0x0C07C1DCu); { u32 t_ = r10; PR = 0x0C07C1E0u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07C1E0u); }  /* 0C07C1DC jsr @Rn */
L_0C07C1E0: BLKS(0x0C07C1E0u);
	r10 = R32(r11 + 0x24u); UPD(0x0C07C1E2u, 1);  /* 0C07C1E0 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C07C1E2 mov Rm,Rn */
	r10 += r0;  /* 0C07C1E4 add Rm,Rn */
	r9 = 0xC7C17D0u; UPD(0x0C07C1E8u, 3);  /* 0C07C1E6 mov.l @(disp,pc),Rn */
	IF(0x0C07C1E8u); { u32 t_ = r8; PR = 0x0C07C1ECu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07C1ECu); }  /* 0C07C1E8 jsr @Rn */
L_0C07C1EC: BLKS(0x0C07C1ECu);
	r6 = R32(r11 + 0x28u); UPD(0x0C07C1EEu, 1);  /* 0C07C1EC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07C1EE add #imm,Rn */
	r2 = 0x20000u; UPD(0x0C07C1F2u, 2);  /* 0C07C1F0 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C07C1F2 mov Rm,Rn */
	W32(r15, r2); UPD(0x0C07C1F6u, 2);  /* 0C07C1F4 mov.l Rm,@Rn */
	r6 += r0;  /* 0C07C1F6 add Rm,Rn */
	r4 = 0x1u;  /* 0C07C1F8 mov #imm,Rn */
	IF(0x0C07C1FAu); { u32 t_ = r9; PR = 0x0C07C1FEu; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C07C1FEu); }  /* 0C07C1FA jsr @Rn */
L_0C07C1FE: BLKS(0x0C07C1FEu);
	r5 = (u32)(s32)(s8)R8(r12); UPD(0x0C07C200u, 1);  /* 0C07C1FE mov.b @Rm,Rn */
	r15 += 0x4u;  /* 0C07C200 add #imm,Rn */
	r5 += 0xFFFFFFFFu;  /* 0C07C202 add #imm,Rn */
	W8(r12, r5); UPD(0x0C07C206u, 3);  /* 0C07C204 mov.b Rm,@Rn */
L_0C07C206: BLKS(0x0C07C206u);
	{ IF(0x0C07C208u); ; /* slot nop */ UPD(0x0C07BED8u, 3); goto L_0C07BED8; }  /* 0C07C206 bra */
L_0C07C250: BLKS(0x0C07C250u);
	r12 = 0xC0A0540u; UPD(0x0C07C252u, 1);  /* 0C07C250 mov.l @(disp,pc),Rn */
	IF(0x0C07C252u); { u32 t_ = r12; PR = 0x0C07C256u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C07C256u); }  /* 0C07C252 jsr @Rn */
L_0C07C256: BLKS(0x0C07C256u);
	IF(0x0C07C256u); T = (s32)r0 >= 0;  /* 0C07C256 cmp/pz Rn */
	if (T) { UPD(0x0C07C25Eu, 4); goto L_0C07C25E; }  /* 0C07C258 bt */
L_0C07C25A: BLKS(0x0C07C25Au);
	{ IF(0x0C07C25Cu); ; /* slot nop */ UPD(0x0C07BF80u, 3); goto L_0C07BF80; }  /* 0C07C25A bra */
L_0C07C25E: BLKS(0x0C07C25Eu);
	r2 = 0xB4u; UPD(0x0C07C260u, 1);  /* 0C07C25E mov.w @(disp,pc),Rn */
	IF(0x0C07C260u); MACL = r8 * r2;  /* 0C07C260 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C07C264u, 3);  /* 0C07C262 mov.l @(disp,pc),Rn */
	IF(0x0C07C264u); r9 = MACL;  /* 0C07C264 sts macl,Rn */
	r9 += r13;  /* 0C07C266 add Rm,Rn */
	IF(0x0C07C268u); MACL = r0 * r2;  /* 0C07C268 mul.l Rm,Rn */
	r7 = 0xFFFFFEFFu; UPD(0x0C07C26Cu, 5);  /* 0C07C26A mov.w @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C07C26Eu, 1);  /* 0C07C26C mov.l @Rm,Rn */
	IF(0x0C07C26Eu); r5 = MACL;  /* 0C07C26E sts macl,Rn */
	r4 &= r7;  /* 0C07C270 and Rm,Rn */
	W32(r9, r4); UPD(0x0C07C274u, 3);  /* 0C07C272 mov.l Rm,@Rn */
	r5 += r13;  /* 0C07C274 add Rm,Rn */
	r1 = 0x100u; UPD(0x0C07C278u, 2);  /* 0C07C276 mov.w @(disp,pc),Rn */
	r0 = R32(r5); UPD(0x0C07C27Au, 1);  /* 0C07C278 mov.l @Rm,Rn */
	r0 &= r1;  /* 0C07C27A and Rm,Rn */
	r11 = R32(r5 + 0x24u); UPD(0x0C07C27Eu, 2);  /* 0C07C27C mov.l @(disp,Rm),Rn */
	r4 |= r0;  /* 0C07C27E or Rm,Rn */
	r3 = R32(r9 + 0x2Cu); UPD(0x0C07C282u, 2);  /* 0C07C280 mov.l @(disp,Rm),Rn */
	r6 = R32(r5 + 0x28u); UPD(0x0C07C284u, 1);  /* 0C07C282 mov.l @(disp,Rm),Rn */
	r11 += r3;  /* 0C07C284 add Rm,Rn */
	r12 = R32(r9 + 0x30u); UPD(0x0C07C288u, 2);  /* 0C07C286 mov.l @(disp,Rm),Rn */
	r10 = 0xC058130u; UPD(0x0C07C28Au, 1);  /* 0C07C288 mov.l @(disp,pc),Rn */
	r6 += r12;  /* 0C07C28A add Rm,Rn */
	W32(r9, r4); UPD(0x0C07C28Eu, 2);  /* 0C07C28C mov.l Rm,@Rn */
	W32(r9 + 0x28u, r6); UPD(0x0C07C290u, 1);  /* 0C07C28E mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C07C290 mov Rm,Rn */
	IF(0x0C07C292u); { u32 t_ = r10; PR = 0x0C07C296u; W32(r9 + 0x24u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C07C296u); }  /* 0C07C292 jsr @Rn */
L_0C07C296: BLKS(0x0C07C296u);
	r13 = 0xC057430u; UPD(0x0C07C298u, 1);  /* 0C07C296 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C07C298 mov #imm,Rn */
	r10 = 0x86u; UPD(0x0C07C29Cu, 2);  /* 0C07C29A mov.w @(disp,pc),Rn */
	r4 = r8;  /* 0C07C29C mov Rm,Rn */
	IF(0x0C07C29Eu); { u32 t_ = r13; PR = 0x0C07C2A2u; r10 += r9; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C07C2A2u); }  /* 0C07C29E jsr @Rn */
L_0C07C2A2: BLKS(0x0C07C2A2u);
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C07C2A4u, 1);  /* 0C07C2A2 mov.w @Rm,Rn */
	r4 = r8;  /* 0C07C2A4 mov Rm,Rn */
	r0 += 0x4u;  /* 0C07C2A6 add #imm,Rn */
	r3 = 0xC0A0380u; UPD(0x0C07C2AAu, 3);  /* 0C07C2A8 mov.l @(disp,pc),Rn */
	IF(0x0C07C2AAu); r0 >>= 2;  /* 0C07C2AA shlr2 Rn */
	IF(0x0C07C2ACu); T = r0 & 1; r0 >>= 1;  /* 0C07C2AC shlr Rn */
	r11 = 0xC0A9E40u; UPD(0x0C07C2B0u, 3);  /* 0C07C2AE mov.l @(disp,pc),Rn */
	r0 &= 0x3Fu;  /* 0C07C2B0 and #imm,r0 */
	IF(0x0C07C2B2u); { u32 t_ = r3; PR = 0x0C07C2B6u; W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C07C2B6u); }  /* 0C07C2B2 jsr @Rn */
L_0C07C2B6: BLKS(0x0C07C2B6u);
	r4 = r8;  /* 0C07C2B6 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C07C2B8 mov #imm,Rn */
	IF(0x0C07C2BAu); { u32 t_ = r11; PR = 0x0C07C2BEu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07C2BEu); }  /* 0C07C2BA jsr @Rn */
L_0C07C2BE: BLKS(0x0C07C2BEu);
	T = (r0 & r0) == 0;  /* 0C07C2BE tst Rm,Rn */
	if (T) { UPD(0x0C07C206u, 4); goto L_0C07C206; }  /* 0C07C2C0 bt */
L_0C07C2C2: BLKS(0x0C07C2C2u);
	r11 = 0x0u;  /* 0C07C2C2 mov #imm,Rn */
	r13 = 0x100000u; UPD(0x0C07C2C6u, 2);  /* 0C07C2C4 mov.l @(disp,pc),Rn */
	r8 = r9;  /* 0C07C2C6 mov Rm,Rn */
	r12 = r10;  /* 0C07C2C8 mov Rm,Rn */
	IF(0x0C07C2CAu); ;  /* 0C07C2CA nop */
	UPD(0x0C07C2CCu, 3);
L_0C07C2CC: BLKS(0x0C07C2CCu);
	r7 = 0xC191CA8u; UPD(0x0C07C2CEu, 1);  /* 0C07C2CC mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C07C2CE mov Rm,Rn */
	r0 += r0;  /* 0C07C2D0 add Rm,Rn */
	IF(0x0C07C2D2u); r1 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C07C2D4u, 3);  /* 0C07C2D2 mov.w @(r0,Rm),Rn */
	r5 = (u32)(s32)(s16)R16(r12); UPD(0x0C07C2D6u, 1);  /* 0C07C2D4 mov.w @Rm,Rn */
	r9 = 0xC058060u; UPD(0x0C07C2D8u, 1);  /* 0C07C2D6 mov.l @(disp,pc),Rn */
	r5 += r1;  /* 0C07C2D8 add Rm,Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C07C2DA exts.w Rm,Rn */
	r4 = r10;  /* 0C07C2DC mov Rm,Rn */
	IF(0x0C07C2DEu); { u32 t_ = r9; PR = 0x0C07C2E2u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07C2E2u); }  /* 0C07C2DE jsr @Rn */
L_0C07C2E2: BLKS(0x0C07C2E2u);
	r9 = R32(r8 + 0x24u); UPD(0x0C07C2E4u, 1);  /* 0C07C2E2 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C07C2E4 mov Rm,Rn */
	r9 += r0;  /* 0C07C2E6 add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C07C2EAu, 3);  /* 0C07C2E8 mov.l @(disp,pc),Rn */
	IF(0x0C07C2EAu); { u32 t_ = r0; PR = 0x0C07C2EEu; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07C2EEu); }  /* 0C07C2EA jsr @Rn */
L_0C07C2EE: BLKS(0x0C07C2EEu);
	r6 = R32(r8 + 0x28u); UPD(0x0C07C2F0u, 1);  /* 0C07C2EE mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C07C2F0 mov Rm,Rn */
	r4 = 0x30000u; UPD(0x0C07C2F4u, 2);  /* 0C07C2F2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07C2F4 add #imm,Rn */
	r9 = 0xC7C1554u; UPD(0x0C07C2F8u, 2);  /* 0C07C2F6 mov.l @(disp,pc),Rn */
	r7 = r10;  /* 0C07C2F8 mov Rm,Rn */
	W32(r15, r4); UPD(0x0C07C2FCu, 2);  /* 0C07C2FA mov.l Rm,@Rn */
	r10 = r11;  /* 0C07C2FC mov Rm,Rn */
	r6 += r0;  /* 0C07C2FE add Rm,Rn */
	r4 = 0x2u;  /* 0C07C300 mov #imm,Rn */
	IF(0x0C07C302u); { u32 t_ = r9; PR = 0x0C07C306u; r10 += 0x1u; /* slot add #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C7C1554, 0x0C7C1554u, 0x0C07C306u); }  /* 0C07C302 jsr @Rn */
L_0C07C306: BLKS(0x0C07C306u);
	r11 = (u32)(s32)(s16)r10;  /* 0C07C306 exts.w Rm,Rn */
	r9 = 0x6u;  /* 0C07C308 mov #imm,Rn */
	T = (s32)r11 > (s32)r9;  /* 0C07C30A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C2CCu, 6); goto L_0C07C2CC; } goto L_0C07C310; }  /* 0C07C30C bf/s */
L_0C07C310: BLKS(0x0C07C310u);
	{ IF(0x0C07C312u); ; /* slot nop */ UPD(0x0C07BED8u, 4); goto L_0C07BED8; }  /* 0C07C310 bra */
}

/* FUN_0c07c350 */
void f_0C07C350(sh3_t *c)
{
	LOCALS;
L_0C07C350: BLKS(0x0C07C350u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07C352u, 1);  /* 0C07C350 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07C354u, 1);  /* 0C07C352 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07C356u, 1);  /* 0C07C354 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r6;  /* 0C07C356 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07C35Au, 2);  /* 0C07C358 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C07C35A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07C35Eu, 2);  /* 0C07C35C mov.l Rm,@-Rn */
	r11 = r4;  /* 0C07C35E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07C362u, 2);  /* 0C07C360 mov.l Rm,@-Rn */
	r12 = r5;  /* 0C07C362 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07C366u, 2);  /* 0C07C364 mov.l Rm,@-Rn */
	IF(0x0C07C366u); r15 -= 4; W32(r15, PR); UPD(0x0C07C368u, 1);  /* 0C07C366 sts.l pr,@-Rn */
	r8 = 0xC7C1824u; UPD(0x0C07C36Au, 1);  /* 0C07C368 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07C36A add #imm,Rn */
	r14 = r15;  /* 0C07C36C mov Rm,Rn */
	IF(0x0C07C36Eu); { u32 t_ = r8; PR = 0x0C07C372u; r13 = R32(r14 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C7C1824, 0x0C7C1824u, 0x0C07C372u); }  /* 0C07C36E jsr @Rn */
L_0C07C372: BLKS(0x0C07C372u);
	T = (r0 & r0) == 0;  /* 0C07C372 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07C390u, 4); goto L_0C07C390; } UPD(0x0C07C378u, 1); goto L_0C07C378; }  /* 0C07C374 bf/s */
L_0C07C378: BLKS(0x0C07C378u);
	r14 += 0x4u;  /* 0C07C378 add #imm,Rn */
	r15 = r14;  /* 0C07C37A mov Rm,Rn */
	IF(0x0C07C37Cu); PR = R32(r15); r15 += 4; UPD(0x0C07C37Eu, 3);  /* 0C07C37C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C380u, 1);  /* 0C07C37E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07C382u, 1);  /* 0C07C380 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07C384u, 1);  /* 0C07C382 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C386u, 1);  /* 0C07C384 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C388u, 1);  /* 0C07C386 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C38Au, 1);  /* 0C07C388 mov.l @Rm+,Rn */
	IF(0x0C07C38Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07C38A rts */
L_0C07C390: BLKS(0x0C07C390u);
	r8 = 0xC0606C0u; UPD(0x0C07C392u, 1);  /* 0C07C390 mov.l @(disp,pc),Rn */
	IF(0x0C07C392u); { u32 t_ = r8; PR = 0x0C07C396u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C07C396u); }  /* 0C07C392 jsr @Rn */
L_0C07C396: BLKS(0x0C07C396u);
	T = (r0 & r0) == 0;  /* 0C07C396 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07C378u, 4); goto L_0C07C378; } goto L_0C07C39C; }  /* 0C07C398 bt/s */
L_0C07C39C: BLKS(0x0C07C39Cu);
	r3 = 0xC2755BCu; UPD(0x0C07C39Eu, 2);  /* 0C07C39C mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C07C39E mov #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C07C3A2u, 2);  /* 0C07C3A0 mov.w @Rm,Rn */
	r6 = 0x4u;  /* 0C07C3A2 mov #imm,Rn */
	W32(r14, r2); UPD(0x0C07C3A6u, 2);  /* 0C07C3A4 mov.l Rm,@Rn */
	r8 = 0xB4u; UPD(0x0C07C3A8u, 1);  /* 0C07C3A6 mov.w @(disp,pc),Rn */
	r5 = R32(r14); UPD(0x0C07C3AAu, 1);  /* 0C07C3A8 mov.l @Rm,Rn */
	IF(0x0C07C3AAu); MACL = r5 * r8;  /* 0C07C3AA mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07C3AEu, 3);  /* 0C07C3AC mov.l @(disp,pc),Rn */
	IF(0x0C07C3AEu); r8 = MACL;  /* 0C07C3AE sts macl,Rn */
	r8 += r0;  /* 0C07C3B0 add Rm,Rn */
	r0 = r10;  /* 0C07C3B2 mov Rm,Rn */
	r0 += 0x8u;  /* 0C07C3B4 add #imm,Rn */
	r3 = 0xC0A02D0u; UPD(0x0C07C3B8u, 5);  /* 0C07C3B6 mov.l @(disp,pc),Rn */
	IF(0x0C07C3B8u); r0 >>= 2;  /* 0C07C3B8 shlr2 Rn */
	r7 = 0xD3000000u; UPD(0x0C07C3BCu, 2);  /* 0C07C3BA mov.l @(disp,pc),Rn */
	IF(0x0C07C3BCu); r0 >>= 2;  /* 0C07C3BC shlr2 Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C07C3C0u, 2);  /* 0C07C3BE mov.l Rm,@(disp,Rn) */
	r0 &= 0x1Fu;  /* 0C07C3C0 and #imm,r0 */
	W32(r8, r7); UPD(0x0C07C3C4u, 2);  /* 0C07C3C2 mov.l Rm,@Rn */
	r4 = r5;  /* 0C07C3C4 mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C07C3C8u, 2);  /* 0C07C3C6 mov.l Rm,@(disp,Rn) */
	IF(0x0C07C3C8u); { u32 t_ = r3; PR = 0x0C07C3CCu; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07C3CCu); }  /* 0C07C3C8 jsr @Rn */
L_0C07C3CC: BLKS(0x0C07C3CCu);
	r2 = 0xC0A1530u; UPD(0x0C07C3CEu, 1);  /* 0C07C3CC mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r11); UPD(0x0C07C3D0u, 1);  /* 0C07C3CE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r12); UPD(0x0C07C3D2u, 1);  /* 0C07C3D0 mov.l Rm,@(disp,Rn) */
	IF(0x0C07C3D2u); { u32 t_ = r2; PR = 0x0C07C3D6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C07C3D6u); }  /* 0C07C3D2 jsr @Rn */
L_0C07C3D6: BLKS(0x0C07C3D6u);
	r0 = 0x86u; UPD(0x0C07C3D8u, 1);  /* 0C07C3D6 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C07C3D8 mov Rm,Rn */
	IF(0x0C07C3DAu); W16(r0 + r8, r10); UPD(0x0C07C3DCu, 2);  /* 0C07C3DA mov.w Rm,@(r0,Rn) */
	r5 = r13;  /* 0C07C3DC mov Rm,Rn */
	r0 += 0x6u;  /* 0C07C3DE add #imm,Rn */
	IF(0x0C07C3E0u); W32(r0 + r8, r13); UPD(0x0C07C3E2u, 3);  /* 0C07C3E0 mov.l Rm,@(r0,Rn) */
	r11 = 0xC058060u; UPD(0x0C07C3E4u, 1);  /* 0C07C3E2 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C07C3E4 add #imm,Rn */
	r0 = R32(r14 + 0x28u); UPD(0x0C07C3E8u, 2);  /* 0C07C3E6 mov.l @(disp,Rm),Rn */
	IF(0x0C07C3E8u); { u32 t_ = r11; PR = 0x0C07C3ECu; W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07C3ECu); }  /* 0C07C3E8 jsr @Rn */
L_0C07C3EC: BLKS(0x0C07C3ECu);
	r4 = r10;  /* 0C07C3EC mov Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C07C3F0u, 2);  /* 0C07C3EE mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C07C3F0 add #imm,Rn */
	r5 = r13;  /* 0C07C3F2 mov Rm,Rn */
	IF(0x0C07C3F4u); { u32 t_ = r10; PR = 0x0C07C3F8u; W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07C3F8u); }  /* 0C07C3F4 jsr @Rn */
L_0C07C3F8: BLKS(0x0C07C3F8u);
	W32(r8 + 0x30u, r0); UPD(0x0C07C3FAu, 1);  /* 0C07C3F8 mov.l Rm,@(disp,Rn) */
	r0 = 0xADu; UPD(0x0C07C3FCu, 1);  /* 0C07C3FA mov.w @(disp,pc),Rn */
	IF(0x0C07C3FCu); W8(r0 + r8, r9); UPD(0x0C07C3FEu, 1);  /* 0C07C3FC mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C07C3FE add #imm,Rn */
	IF(0x0C07C400u); W8(r0 + r8, r9); UPD(0x0C07C402u, 2);  /* 0C07C400 mov.b Rm,@(r0,Rn) */
	r9 = 0xC0AFC10u; UPD(0x0C07C404u, 1);  /* 0C07C402 mov.l @(disp,pc),Rn */
	IF(0x0C07C404u); { u32 t_ = r9; PR = 0x0C07C408u; r4 = 0x7Bu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C07C408u); }  /* 0C07C404 jsr @Rn */
L_0C07C408: BLKS(0x0C07C408u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C07C378u, 3); goto L_0C07C378; }  /* 0C07C408 bra */
}

void f_0C07C440(sh3_t *c)
{
	LOCALS;
L_0C07C440: BLKS(0x0C07C440u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07C442u, 1);  /* 0C07C440 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07C444u, 1);  /* 0C07C442 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07C446u, 1);  /* 0C07C444 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07C448u, 1);  /* 0C07C446 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C07C44Au, 1);  /* 0C07C448 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07C44A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07C44Eu, 2);  /* 0C07C44C mov.l Rm,@-Rn */
	IF(0x0C07C44Eu); MACL = r11 * r0;  /* 0C07C44E mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07C452u, 3);  /* 0C07C450 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C07C454u, 1);  /* 0C07C452 mov.l @(disp,pc),Rn */
	IF(0x0C07C454u); r8 = MACL;  /* 0C07C454 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07C458u, 2);  /* 0C07C456 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C07C458 add Rm,Rn */
	r9 = 0x99u; UPD(0x0C07C45Cu, 2);  /* 0C07C45A mov.w @(disp,pc),Rn */
	IF(0x0C07C45Cu); r15 -= 4; W32(r15, PR); UPD(0x0C07C45Eu, 1);  /* 0C07C45C sts.l pr,@-Rn */
	r9 += r8;  /* 0C07C45E add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C07C462u, 2);  /* 0C07C460 mov.b @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07C462 add #imm,Rn */
	r12 = 0xFFu; UPD(0x0C07C466u, 2);  /* 0C07C464 mov.w @(disp,pc),Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C07C466 cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C50Cu, 4); goto L_0C07C50C; } goto L_0C07C46C; }  /* 0C07C468 bt/s */
L_0C07C46C: BLKS(0x0C07C46Cu);
	r10 = 0xC058130u; UPD(0x0C07C46Eu, 2);  /* 0C07C46C mov.l @(disp,pc),Rn */
	r6 = r0;  /* 0C07C46E mov Rm,Rn */
	r6 += 0x1u;  /* 0C07C470 add #imm,Rn */
	W8(r9, r6); UPD(0x0C07C474u, 3);  /* 0C07C472 mov.b Rm,@Rn */
	IF(0x0C07C474u); { u32 t_ = r10; PR = 0x0C07C478u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C07C478u); }  /* 0C07C474 jsr @Rn */
L_0C07C478: BLKS(0x0C07C478u);
	r5 = 0x280u; UPD(0x0C07C47Au, 1);  /* 0C07C478 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C07C47A exts.w Rm,Rn */
	IF(0x0C07C47Cu); MACL = r1 * r5;  /* 0C07C47C mul.l Rm,Rn */
	r2 = 0xC283794u; UPD(0x0C07C480u, 4);  /* 0C07C47E mov.l @(disp,pc),Rn */
	IF(0x0C07C480u); r3 = MACL;  /* 0C07C480 sts macl,Rn */
	r13 = 0xC057390u; UPD(0x0C07C484u, 2);  /* 0C07C482 mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C07C484 add Rm,Rn */
	r10 = 0x86u; UPD(0x0C07C488u, 2);  /* 0C07C486 mov.w @(disp,pc),Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C07C48Au, 1);  /* 0C07C488 mov.l @(disp,Rm),Rn */
	r10 += r8;  /* 0C07C48A add Rm,Rn */
	r7 = R32(r3 + 0x14u); UPD(0x0C07C48Eu, 2);  /* 0C07C48C mov.l @(disp,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C07C490u, 1);  /* 0C07C48E mov.l @(disp,Rm),Rn */
	IF(0x0C07C490u); { u32 t_ = r13; PR = 0x0C07C494u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C07C494u); }  /* 0C07C490 jsr @Rn */
L_0C07C494: BLKS(0x0C07C494u);
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C07C496u, 1);  /* 0C07C494 mov.w @Rm,Rn */
	r4 = 0x1FFu; UPD(0x0C07C498u, 1);  /* 0C07C496 mov.w @(disp,pc),Rn */
	r2 = r3;  /* 0C07C498 mov Rm,Rn */
	r2 -= r0;  /* 0C07C49A sub Rm,Rn */
	r2 &= r4;  /* 0C07C49C and Rm,Rn */
	T = (s32)r2 > (s32)r12;  /* 0C07C49E cmp/gt Rm,Rn */
	{ u32 c_ = T; r7 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C4A8u, 7); goto L_0C07C4A8; } goto L_0C07C4A4; }  /* 0C07C4A0 bt/s */
L_0C07C4A4: BLKS(0x0C07C4A4u);
	r7 += 0xFFFFFFFCu;  /* 0C07C4A4 add #imm,Rn */
	W16(r10, r7); UPD(0x0C07C4A8u, 3);  /* 0C07C4A6 mov.w Rm,@Rn */
L_0C07C4A8: BLKS(0x0C07C4A8u);
	r0 = 0x100u; UPD(0x0C07C4AAu, 1);  /* 0C07C4A8 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C07C4AA cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07C4B4u, 4); goto L_0C07C4B4; }  /* 0C07C4AC bf */
L_0C07C4AE: BLKS(0x0C07C4AEu);
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C07C4B0u, 1);  /* 0C07C4AE mov.w @Rm,Rn */
	r4 += 0x4u;  /* 0C07C4B0 add #imm,Rn */
	W16(r10, r4); UPD(0x0C07C4B4u, 2);  /* 0C07C4B2 mov.w Rm,@Rn */
L_0C07C4B4: BLKS(0x0C07C4B4u);
	r2 += 0xFFFFFFF0u;  /* 0C07C4B4 add #imm,Rn */
	r1 = r2 & 0xFFFF;  /* 0C07C4B6 extu.w Rm,Rn */
	r5 = 0x1E0u; UPD(0x0C07C4BAu, 3);  /* 0C07C4B8 mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C07C4BCu, 1);  /* 0C07C4BA mov.b @Rm,Rn */
	T = r1 > r5;  /* 0C07C4BC cmp/hi Rm,Rn */
	IF(0x0C07C4BEu); r13 = T;  /* 0C07C4BE movt Rn */
	r3 = r2 & 0xFF;  /* 0C07C4C0 extu.b Rm,Rn */
	T = r3 == r12;  /* 0C07C4C2 cmp/eq Rm,Rn */
	IF(0x0C07C4C4u); r9 = T;  /* 0C07C4C4 movt Rn */
	r13 |= r9;  /* 0C07C4C6 or Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C07C4C8 tst Rm,Rn */
	if (!T) { UPD(0x0C07C4D0u, 10); goto L_0C07C4D0; }  /* 0C07C4CA bf */
L_0C07C4CC: BLKS(0x0C07C4CCu);
	{ IF(0x0C07C4CEu); ; /* slot nop */ UPD(0x0C07C680u, 3); goto L_0C07C680; }  /* 0C07C4CC bra */
L_0C07C4D0: BLKS(0x0C07C4D0u);
	r3 = 0x8Cu; UPD(0x0C07C4D2u, 1);  /* 0C07C4D0 mov.w @(disp,pc),Rn */
	r3 += r8;  /* 0C07C4D2 add Rm,Rn */
	r8 += 0x50u;  /* 0C07C4D4 add #imm,Rn */
	r2 = R32(r3); UPD(0x0C07C4D8u, 3);  /* 0C07C4D6 mov.l @Rm,Rn */
	r12 = R32(r8); UPD(0x0C07C4DAu, 1);  /* 0C07C4D8 mov.l @Rm,Rn */
	r1 = 0x800u; UPD(0x0C07C4DCu, 1);  /* 0C07C4DA mov.w @(disp,pc),Rn */
	T = (s32)r2 >= (s32)r12;  /* 0C07C4DC cmp/ge Rm,Rn */
	{ u32 c_ = T; r2 += r1; /* slot add Rm,Rn */ if (c_) { UPD(0x0C07C4E6u, 4); goto L_0C07C4E6; } goto L_0C07C4E2; }  /* 0C07C4DE bt/s */
L_0C07C4E2: BLKS(0x0C07C4E2u);
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C07C672u, 4); goto L_0C07C672; }  /* 0C07C4E2 bra */
L_0C07C4E6: BLKS(0x0C07C4E6u);
	r7 = 0xB4u; UPD(0x0C07C4E8u, 1);  /* 0C07C4E6 mov.w @(disp,pc),Rn */
	IF(0x0C07C4E8u); MACL = r11 * r7;  /* 0C07C4E8 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C07C4ECu, 3);  /* 0C07C4EA mov.l @(disp,pc),Rn */
	IF(0x0C07C4ECu); r13 = MACL;  /* 0C07C4EC sts macl,Rn */
	r12 = 0x86u; UPD(0x0C07C4F0u, 2);  /* 0C07C4EE mov.w @(disp,pc),Rn */
	r13 += r6;  /* 0C07C4F0 add Rm,Rn */
	r10 = 0x8Cu; UPD(0x0C07C4F4u, 2);  /* 0C07C4F2 mov.w @(disp,pc),Rn */
	r12 += r13;  /* 0C07C4F4 add Rm,Rn */
	r9 = 0xC058060u; UPD(0x0C07C4F8u, 2);  /* 0C07C4F6 mov.l @(disp,pc),Rn */
	r10 += r13;  /* 0C07C4F8 add Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C07C4FCu, 2);  /* 0C07C4FA mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r12); UPD(0x0C07C4FEu, 1);  /* 0C07C4FC mov.w @Rm,Rn */
	IF(0x0C07C4FEu); { u32 t_ = r9; PR = 0x0C07C502u; r5 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07C502u); }  /* 0C07C4FE jsr @Rn */
L_0C07C502: BLKS(0x0C07C502u);
	W32(r13 + 0x2Cu, r0); UPD(0x0C07C504u, 1);  /* 0C07C502 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r12); UPD(0x0C07C506u, 1);  /* 0C07C504 mov.w @Rm,Rn */
	IF(0x0C07C506u); { u32 t_ = r8; PR = 0x0C07C50Au; r5 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07C50Au); }  /* 0C07C506 jsr @Rn */
L_0C07C50A: BLKS(0x0C07C50Au);
	W32(r13 + 0x30u, r0); UPD(0x0C07C50Cu, 1);  /* 0C07C50A mov.l Rm,@(disp,Rn) */
L_0C07C50C: BLKS(0x0C07C50Cu);
	r5 = 0xB4u; UPD(0x0C07C50Eu, 1);  /* 0C07C50C mov.w @(disp,pc),Rn */
	IF(0x0C07C50Eu); MACL = r11 * r5;  /* 0C07C50E mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C07C512u, 3);  /* 0C07C510 mov.l @(disp,pc),Rn */
	IF(0x0C07C512u); r13 = MACL;  /* 0C07C512 sts macl,Rn */
	r13 += r2;  /* 0C07C514 add Rm,Rn */
	r0 = R32(r13 + 0x24u); UPD(0x0C07C518u, 3);  /* 0C07C516 mov.l @(disp,Rm),Rn */
	r3 = R32(r13 + 0x2Cu); UPD(0x0C07C51Au, 1);  /* 0C07C518 mov.l @(disp,Rm),Rn */
	r7 = R32(r13 + 0x28u); UPD(0x0C07C51Cu, 1);  /* 0C07C51A mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C07C51C add Rm,Rn */
	r4 = R32(r13 + 0x30u); UPD(0x0C07C520u, 2);  /* 0C07C51E mov.l @(disp,Rm),Rn */
	r3 = 0xFF600000u; UPD(0x0C07C522u, 1);  /* 0C07C520 mov.l @(disp,pc),Rn */
	r7 += r4;  /* 0C07C522 add Rm,Rn */
	r3 += r0;  /* 0C07C524 add Rm,Rn */
	W32(r13 + 0x24u, r0); UPD(0x0C07C528u, 3);  /* 0C07C526 mov.l Rm,@(disp,Rn) */
	IF(0x0C07C528u); T = (s32)r3 >= 0;  /* 0C07C528 cmp/pz Rn */
	{ u32 c_ = T; W32(r13 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07C532u, 4); goto L_0C07C532; } UPD(0x0C07C52Eu, 1); goto L_0C07C52E; }  /* 0C07C52A bt/s */
L_0C07C52E: BLKS(0x0C07C52Eu);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C07C660u, 3); goto L_0C07C660; }  /* 0C07C52E bra */
L_0C07C532: BLKS(0x0C07C532u);
	r8 = 0xAC0000u; UPD(0x0C07C534u, 1);  /* 0C07C532 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r8;  /* 0C07C534 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C07C54Eu, 4); goto L_0C07C54E; }  /* 0C07C536 bt */
L_0C07C538: BLKS(0x0C07C538u);
	r2 = r7;  /* 0C07C538 mov Rm,Rn */
	r9 = 0xC3929E0u; UPD(0x0C07C53Cu, 2);  /* 0C07C53A mov.l @(disp,pc),Rn */
	r12 = R32(r9); UPD(0x0C07C53Eu, 1);  /* 0C07C53C mov.l @Rm,Rn */
	r10 = 0xFF880000u; UPD(0x0C07C540u, 1);  /* 0C07C53E mov.l @(disp,pc),Rn */
	r2 -= r12;  /* 0C07C540 sub Rm,Rn */
	r2 += r10;  /* 0C07C542 add Rm,Rn */
	IF(0x0C07C544u); T = (s32)r2 >= 0;  /* 0C07C544 cmp/pz Rn */
	if (!T) { UPD(0x0C07C600u, 6); goto L_0C07C600; }  /* 0C07C546 bf */
L_0C07C548: BLKS(0x0C07C548u);
	r6 = 0x840000u; UPD(0x0C07C54Au, 1);  /* 0C07C548 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C07C54A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07C570u, 4); goto L_0C07C570; }  /* 0C07C54C bf */
L_0C07C54E: BLKS(0x0C07C54Eu);
	r11 = 0x0u;  /* 0C07C54E mov #imm,Rn */
	W32(r13, r11); UPD(0x0C07C552u, 2);  /* 0C07C550 mov.l Rm,@Rn */
	r14 += 0x4u;  /* 0C07C552 add #imm,Rn */
	UPD(0x0C07C554u, 1);
L_0C07C554: BLKS(0x0C07C554u);
	r15 = r14;  /* 0C07C554 mov Rm,Rn */
	IF(0x0C07C556u); PR = R32(r15); r15 += 4; UPD(0x0C07C558u, 2);  /* 0C07C556 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C55Au, 1);  /* 0C07C558 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07C55Cu, 1);  /* 0C07C55A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07C55Eu, 1);  /* 0C07C55C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C560u, 1);  /* 0C07C55E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C562u, 1);  /* 0C07C560 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C564u, 1);  /* 0C07C562 mov.l @Rm+,Rn */
	IF(0x0C07C564u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07C564 rts */
L_0C07C570: BLKS(0x0C07C570u);
	r9 = 0x86u; UPD(0x0C07C572u, 1);  /* 0C07C570 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C07C572 mov Rm,Rn */
	r9 += r13;  /* 0C07C574 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C07C578u, 3);  /* 0C07C576 mov.w @Rm,Rn */
	IF(0x0C07C578u); r0 >>= 2;  /* 0C07C578 shlr2 Rn */
	IF(0x0C07C57Au); r0 >>= 2;  /* 0C07C57A shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C07C57C and #imm,r0 */
	W32(r13 + 0xCu, r0); UPD(0x0C07C580u, 4);  /* 0C07C57E mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A0380u; UPD(0x0C07C582u, 1);  /* 0C07C580 mov.l @(disp,pc),Rn */
	r11 = 0xC0AFE40u; UPD(0x0C07C584u, 1);  /* 0C07C582 mov.l @(disp,pc),Rn */
	IF(0x0C07C584u); { u32 t_ = r0; PR = 0x0C07C588u; IF(0x0C07C586u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C07C588u); }  /* 0C07C584 jsr @Rn */
L_0C07C588: BLKS(0x0C07C588u);
	r8 = 0xF8u; UPD(0x0C07C58Au, 1);  /* 0C07C588 mov.w @(disp,pc),Rn */
	IF(0x0C07C58Au); { u32 t_ = r11; PR = 0x0C07C58Eu; IF(0x0C07C58Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C07C58Eu); }  /* 0C07C58A jsr @Rn */
L_0C07C58E: BLKS(0x0C07C58Eu);
	r12 = (u32)(s32)(s16)R16(r9); UPD(0x0C07C590u, 1);  /* 0C07C58E mov.w @Rm,Rn */
	r0 &= 0xFu;  /* 0C07C590 and #imm,r0 */
	r0 += r12;  /* 0C07C592 add Rm,Rn */
	r0 += r8;  /* 0C07C594 add Rm,Rn */
	r10 = (u32)(s32)(s16)r0;  /* 0C07C596 exts.w Rm,Rn */
	r12 = 0xC058060u; UPD(0x0C07C59Au, 5);  /* 0C07C598 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07C59A mov Rm,Rn */
	r8 = 0x80000u; UPD(0x0C07C59Eu, 2);  /* 0C07C59C mov.l @(disp,pc),Rn */
	r0 = 0x8Cu; UPD(0x0C07C5A0u, 1);  /* 0C07C59E mov.w @(disp,pc),Rn */
	r5 = r8;  /* 0C07C5A0 mov Rm,Rn */
	W32(r14, r10); UPD(0x0C07C5A4u, 2);  /* 0C07C5A2 mov.l Rm,@Rn */
	IF(0x0C07C5A4u); { u32 t_ = r12; PR = 0x0C07C5A8u; IF(0x0C07C5A6u); r9 = R32(r0 + r13); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07C5A8u); }  /* 0C07C5A4 jsr @Rn */
L_0C07C5A8: BLKS(0x0C07C5A8u);
	r11 = 0xC058030u; UPD(0x0C07C5AAu, 1);  /* 0C07C5A8 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C07C5AA mov Rm,Rn */
	r7 = R32(r14); UPD(0x0C07C5AEu, 2);  /* 0C07C5AC mov.l @Rm,Rn */
	IF(0x0C07C5AEu); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C07C5AE shar Rn */
	r10 = R32(r13 + 0x24u); UPD(0x0C07C5B2u, 2);  /* 0C07C5B0 mov.l @(disp,Rm),Rn */
	r4 = r7;  /* 0C07C5B2 mov Rm,Rn */
	IF(0x0C07C5B4u); { u32 t_ = r11; PR = 0x0C07C5B8u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07C5B8u); }  /* 0C07C5B4 jsr @Rn */
L_0C07C5B8: BLKS(0x0C07C5B8u);
	r8 = R32(r13 + 0x28u); UPD(0x0C07C5BAu, 1);  /* 0C07C5B8 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C07C5BA add #imm,Rn */
	r8 += r0;  /* 0C07C5BC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07C5C0u, 3);  /* 0C07C5BE mov.w @(disp,pc),Rn */
	IF(0x0C07C5C0u); r6 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C07C5C2u, 1);  /* 0C07C5C0 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C07C5C2 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C07C5C6u, 2);  /* 0C07C5C4 mov.l Rm,@Rn */
	r0 = r13;  /* 0C07C5C6 mov Rm,Rn */
	r2 = 0xA9u; UPD(0x0C07C5CAu, 2);  /* 0C07C5C8 mov.w @(disp,pc),Rn */
	r5 = r9;  /* 0C07C5CA mov Rm,Rn */
	IF(0x0C07C5CCu); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07C5CEu, 2);  /* 0C07C5CC mov.b @(r0,Rm),Rn */
	r4 = r3 & 0xFF;  /* 0C07C5CE extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07C5D2u, 2);  /* 0C07C5D0 mov.l Rm,@(disp,Rn) */
	r0 = R32(r14); UPD(0x0C07C5D4u, 1);  /* 0C07C5D2 mov.l @Rm,Rn */
	IF(0x0C07C5D4u); { u32 t_ = r12; PR = 0x0C07C5D8u; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07C5D8u); }  /* 0C07C5D4 jsr @Rn */
L_0C07C5D8: BLKS(0x0C07C5D8u);
	r1 = R32(r14); UPD(0x0C07C5DAu, 1);  /* 0C07C5D8 mov.l @Rm,Rn */
	r5 = r9;  /* 0C07C5DA mov Rm,Rn */
	r4 = r1;  /* 0C07C5DC mov Rm,Rn */
	IF(0x0C07C5DEu); { u32 t_ = r11; PR = 0x0C07C5E2u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07C5E2u); }  /* 0C07C5DE jsr @Rn */
L_0C07C5E2: BLKS(0x0C07C5E2u);
	r7 = 0x80C080u; UPD(0x0C07C5E4u, 1);  /* 0C07C5E2 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C07C5E4 mov #imm,Rn */
	W32(r15 + 0x10u, r7); UPD(0x0C07C5E8u, 2);  /* 0C07C5E6 mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C07C5E8 mov Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C07C5ECu, 2);  /* 0C07C5EA mov.l Rm,@(disp,Rn) */
	r4 = R32(r13); UPD(0x0C07C5EEu, 1);  /* 0C07C5EC mov.l @Rm,Rn */
	r13 = 0xC0ACA40u; UPD(0x0C07C5F0u, 1);  /* 0C07C5EE mov.l @(disp,pc),Rn */
	IF(0x0C07C5F0u); { u32 t_ = r13; PR = 0x0C07C5F4u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C07C5F4u); }  /* 0C07C5F0 jsr @Rn */
L_0C07C5F4: BLKS(0x0C07C5F4u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07C554u, 3); goto L_0C07C554; }  /* 0C07C5F4 bra */
L_0C07C600: BLKS(0x0C07C600u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C07C548u, 3); goto L_0C07C548; }  /* 0C07C600 bra */
L_0C07C660: BLKS(0x0C07C660u);
	{ IF(0x0C07C662u); ; /* slot nop */ UPD(0x0C07C532u, 3); goto L_0C07C532; }  /* 0C07C660 bra */
L_0C07C670: BLKS(0x0C07C670u);
	W32(r3, r2); UPD(0x0C07C672u, 1);  /* 0C07C670 mov.l Rm,@Rn */
L_0C07C672: BLKS(0x0C07C672u);
	{ IF(0x0C07C674u); ; /* slot nop */ UPD(0x0C07C4E6u, 3); goto L_0C07C4E6; }  /* 0C07C672 bra */
L_0C07C680: BLKS(0x0C07C680u);
	r3 = 0x8Cu; UPD(0x0C07C682u, 1);  /* 0C07C680 mov.w @(disp,pc),Rn */
	r3 += r8;  /* 0C07C682 add Rm,Rn */
	r8 += 0x50u;  /* 0C07C684 add #imm,Rn */
	r1 = R32(r8); UPD(0x0C07C688u, 3);  /* 0C07C686 mov.l @Rm,Rn */
	IF(0x0C07C688u); T = (s32)r1 >= 0;  /* 0C07C688 cmp/pz Rn */
	if (!T) { UPD(0x0C07C6A0u, 4); goto L_0C07C6A0; }  /* 0C07C68A bf */
L_0C07C68C: BLKS(0x0C07C68Cu);
	IF(0x0C07C68Cu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C07C68C shar Rn */
	r2 = R32(r3); UPD(0x0C07C690u, 2);  /* 0C07C68E mov.l @Rm,Rn */
	IF(0x0C07C690u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C07C690 shar Rn */
	T = (s32)r2 > (s32)r1;  /* 0C07C692 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07C672u, 5); goto L_0C07C672; }  /* 0C07C694 bf */
L_0C07C696: BLKS(0x0C07C696u);
	r1 = 0xFFFFF800u; UPD(0x0C07C698u, 1);  /* 0C07C696 mov.w @(disp,pc),Rn */
	{ r2 += r1; /* slot add Rm,Rn */ UPD(0x0C07C670u, 3); goto L_0C07C670; }  /* 0C07C698 bra */
L_0C07C6A0: BLKS(0x0C07C6A0u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C07C68Cu, 3); goto L_0C07C68C; }  /* 0C07C6A0 bra */
}

/* FUN_0c07c6b0 */
void f_0C07C6B0(sh3_t *c)
{
	LOCALS;
L_0C07C6B0: BLKS(0x0C07C6B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07C6B2u, 1);  /* 0C07C6B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07C6B4u, 1);  /* 0C07C6B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07C6B6u, 1);  /* 0C07C6B4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r6;  /* 0C07C6B6 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07C6BAu, 2);  /* 0C07C6B8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C07C6BA exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07C6BEu, 2);  /* 0C07C6BC mov.l Rm,@-Rn */
	r11 = r4;  /* 0C07C6BE mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07C6C2u, 2);  /* 0C07C6C0 mov.l Rm,@-Rn */
	r12 = r5;  /* 0C07C6C2 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07C6C6u, 2);  /* 0C07C6C4 mov.l Rm,@-Rn */
	IF(0x0C07C6C6u); r15 -= 4; W32(r15, PR); UPD(0x0C07C6C8u, 1);  /* 0C07C6C6 sts.l pr,@-Rn */
	r8 = 0xC7C1824u; UPD(0x0C07C6CAu, 1);  /* 0C07C6C8 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07C6CA add #imm,Rn */
	r14 = r15;  /* 0C07C6CC mov Rm,Rn */
	IF(0x0C07C6CEu); { u32 t_ = r8; PR = 0x0C07C6D2u; r13 = R32(r14 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C7C1824, 0x0C7C1824u, 0x0C07C6D2u); }  /* 0C07C6CE jsr @Rn */
L_0C07C6D2: BLKS(0x0C07C6D2u);
	T = (r0 & r0) == 0;  /* 0C07C6D2 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07C6F0u, 4); goto L_0C07C6F0; } UPD(0x0C07C6D8u, 1); goto L_0C07C6D8; }  /* 0C07C6D4 bf/s */
L_0C07C6D8: BLKS(0x0C07C6D8u);
	r14 += 0x4u;  /* 0C07C6D8 add #imm,Rn */
	r15 = r14;  /* 0C07C6DA mov Rm,Rn */
	IF(0x0C07C6DCu); PR = R32(r15); r15 += 4; UPD(0x0C07C6DEu, 3);  /* 0C07C6DC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C6E0u, 1);  /* 0C07C6DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07C6E2u, 1);  /* 0C07C6E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07C6E4u, 1);  /* 0C07C6E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C6E6u, 1);  /* 0C07C6E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C6E8u, 1);  /* 0C07C6E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C6EAu, 1);  /* 0C07C6E8 mov.l @Rm+,Rn */
	IF(0x0C07C6EAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07C6EA rts */
L_0C07C6F0: BLKS(0x0C07C6F0u);
	r8 = 0xC0606C0u; UPD(0x0C07C6F2u, 1);  /* 0C07C6F0 mov.l @(disp,pc),Rn */
	IF(0x0C07C6F2u); { u32 t_ = r8; PR = 0x0C07C6F6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C07C6F6u); }  /* 0C07C6F2 jsr @Rn */
L_0C07C6F6: BLKS(0x0C07C6F6u);
	T = (r0 & r0) == 0;  /* 0C07C6F6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07C6D8u, 4); goto L_0C07C6D8; } goto L_0C07C6FC; }  /* 0C07C6F8 bt/s */
L_0C07C6FC: BLKS(0x0C07C6FCu);
	r3 = 0xC2755BCu; UPD(0x0C07C6FEu, 2);  /* 0C07C6FC mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C07C6FE mov #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C07C702u, 2);  /* 0C07C700 mov.w @Rm,Rn */
	r6 = 0x15u;  /* 0C07C702 mov #imm,Rn */
	W32(r14, r2); UPD(0x0C07C706u, 2);  /* 0C07C704 mov.l Rm,@Rn */
	r8 = 0xB4u; UPD(0x0C07C708u, 1);  /* 0C07C706 mov.w @(disp,pc),Rn */
	r5 = R32(r14); UPD(0x0C07C70Au, 1);  /* 0C07C708 mov.l @Rm,Rn */
	IF(0x0C07C70Au); MACL = r5 * r8;  /* 0C07C70A mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07C70Eu, 3);  /* 0C07C70C mov.l @(disp,pc),Rn */
	IF(0x0C07C70Eu); r8 = MACL;  /* 0C07C70E sts macl,Rn */
	r8 += r0;  /* 0C07C710 add Rm,Rn */
	r0 = r10;  /* 0C07C712 mov Rm,Rn */
	r0 += 0x8u;  /* 0C07C714 add #imm,Rn */
	r3 = 0xC0A02D0u; UPD(0x0C07C718u, 5);  /* 0C07C716 mov.l @(disp,pc),Rn */
	IF(0x0C07C718u); r0 >>= 2;  /* 0C07C718 shlr2 Rn */
	r7 = 0xD3000000u; UPD(0x0C07C71Cu, 2);  /* 0C07C71A mov.l @(disp,pc),Rn */
	IF(0x0C07C71Cu); r0 >>= 2;  /* 0C07C71C shlr2 Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C07C720u, 2);  /* 0C07C71E mov.l Rm,@(disp,Rn) */
	r0 &= 0x1Fu;  /* 0C07C720 and #imm,r0 */
	W32(r8, r7); UPD(0x0C07C724u, 2);  /* 0C07C722 mov.l Rm,@Rn */
	r4 = r5;  /* 0C07C724 mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C07C728u, 2);  /* 0C07C726 mov.l Rm,@(disp,Rn) */
	IF(0x0C07C728u); { u32 t_ = r3; PR = 0x0C07C72Cu; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07C72Cu); }  /* 0C07C728 jsr @Rn */
L_0C07C72C: BLKS(0x0C07C72Cu);
	r2 = 0xC0A1530u; UPD(0x0C07C72Eu, 1);  /* 0C07C72C mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r11); UPD(0x0C07C730u, 1);  /* 0C07C72E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r12); UPD(0x0C07C732u, 1);  /* 0C07C730 mov.l Rm,@(disp,Rn) */
	IF(0x0C07C732u); { u32 t_ = r2; PR = 0x0C07C736u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C07C736u); }  /* 0C07C732 jsr @Rn */
L_0C07C736: BLKS(0x0C07C736u);
	r0 = 0x86u; UPD(0x0C07C738u, 1);  /* 0C07C736 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C07C738 mov Rm,Rn */
	IF(0x0C07C73Au); W16(r0 + r8, r10); UPD(0x0C07C73Cu, 2);  /* 0C07C73A mov.w Rm,@(r0,Rn) */
	r5 = r13;  /* 0C07C73C mov Rm,Rn */
	r0 += 0x6u;  /* 0C07C73E add #imm,Rn */
	IF(0x0C07C740u); W32(r0 + r8, r13); UPD(0x0C07C742u, 3);  /* 0C07C740 mov.l Rm,@(r0,Rn) */
	r11 = 0xC058060u; UPD(0x0C07C744u, 1);  /* 0C07C742 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C07C744 add #imm,Rn */
	r0 = R32(r14 + 0x28u); UPD(0x0C07C748u, 2);  /* 0C07C746 mov.l @(disp,Rm),Rn */
	IF(0x0C07C748u); { u32 t_ = r11; PR = 0x0C07C74Cu; W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07C74Cu); }  /* 0C07C748 jsr @Rn */
L_0C07C74C: BLKS(0x0C07C74Cu);
	r4 = r10;  /* 0C07C74C mov Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C07C750u, 2);  /* 0C07C74E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C07C750 add #imm,Rn */
	r5 = r13;  /* 0C07C752 mov Rm,Rn */
	IF(0x0C07C754u); { u32 t_ = r10; PR = 0x0C07C758u; W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07C758u); }  /* 0C07C754 jsr @Rn */
L_0C07C758: BLKS(0x0C07C758u);
	W32(r8 + 0x30u, r0); UPD(0x0C07C75Au, 1);  /* 0C07C758 mov.l Rm,@(disp,Rn) */
	r0 = 0xADu; UPD(0x0C07C75Cu, 1);  /* 0C07C75A mov.w @(disp,pc),Rn */
	IF(0x0C07C75Cu); W8(r0 + r8, r9); UPD(0x0C07C75Eu, 1);  /* 0C07C75C mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C07C75E add #imm,Rn */
	IF(0x0C07C760u); W8(r0 + r8, r9); UPD(0x0C07C762u, 2);  /* 0C07C760 mov.b Rm,@(r0,Rn) */
	r9 = 0xC0AFC10u; UPD(0x0C07C764u, 1);  /* 0C07C762 mov.l @(disp,pc),Rn */
	IF(0x0C07C764u); { u32 t_ = r9; PR = 0x0C07C768u; r4 = 0x7Bu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C07C768u); }  /* 0C07C764 jsr @Rn */
L_0C07C768: BLKS(0x0C07C768u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C07C6D8u, 3); goto L_0C07C6D8; }  /* 0C07C768 bra */
}

void f_0C07C7A0(sh3_t *c)
{
	LOCALS;
L_0C07C7A0: BLKS(0x0C07C7A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07C7A2u, 1);  /* 0C07C7A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07C7A4u, 1);  /* 0C07C7A2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07C7A6u, 1);  /* 0C07C7A4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07C7A8u, 1);  /* 0C07C7A6 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C07C7AAu, 1);  /* 0C07C7A8 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07C7AA exts.w Rm,Rn */
	IF(0x0C07C7ACu); MACL = r11 * r0;  /* 0C07C7AC mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07C7B0u, 4);  /* 0C07C7AE mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C07C7B2u, 1);  /* 0C07C7B0 mov.l @(disp,pc),Rn */
	IF(0x0C07C7B2u); r8 = MACL;  /* 0C07C7B2 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C07C7B6u, 2);  /* 0C07C7B4 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C07C7B6 add Rm,Rn */
	IF(0x0C07C7B8u); r15 -= 4; W32(r15, PR); UPD(0x0C07C7BAu, 2);  /* 0C07C7B8 sts.l pr,@-Rn */
	r2 += r8;  /* 0C07C7BA add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C07C7BEu, 2);  /* 0C07C7BC mov.b @Rm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C07C7BE cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C82Cu, 4); goto L_0C07C82C; } goto L_0C07C7C4; }  /* 0C07C7C0 bt/s */
L_0C07C7C4: BLKS(0x0C07C7C4u);
	r9 = 0xC058130u; UPD(0x0C07C7C6u, 2);  /* 0C07C7C4 mov.l @(disp,pc),Rn */
	r6 = r0;  /* 0C07C7C6 mov Rm,Rn */
	r6 += 0x1u;  /* 0C07C7C8 add #imm,Rn */
	W8(r2, r6); UPD(0x0C07C7CCu, 3);  /* 0C07C7CA mov.b Rm,@Rn */
	IF(0x0C07C7CCu); { u32 t_ = r9; PR = 0x0C07C7D0u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C07C7D0u); }  /* 0C07C7CC jsr @Rn */
L_0C07C7D0: BLKS(0x0C07C7D0u);
	r5 = 0x280u; UPD(0x0C07C7D2u, 1);  /* 0C07C7D0 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C07C7D2 exts.w Rm,Rn */
	IF(0x0C07C7D4u); MACL = r1 * r5;  /* 0C07C7D4 mul.l Rm,Rn */
	r9 = 0x86u; UPD(0x0C07C7D8u, 4);  /* 0C07C7D6 mov.w @(disp,pc),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C07C7DAu, 1);  /* 0C07C7D8 mov.l @(disp,Rm),Rn */
	r9 += r8;  /* 0C07C7DA add Rm,Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C07C7DEu, 2);  /* 0C07C7DC mov.l @(disp,Rm),Rn */
	IF(0x0C07C7DEu); r3 = MACL;  /* 0C07C7DE sts macl,Rn */
	r2 = 0xC283794u; UPD(0x0C07C7E2u, 2);  /* 0C07C7E0 mov.l @(disp,pc),Rn */
	r8 = 0xC057390u; UPD(0x0C07C7E4u, 1);  /* 0C07C7E2 mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C07C7E4 add Rm,Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C07C7E8u, 2);  /* 0C07C7E6 mov.l @(disp,Rm),Rn */
	IF(0x0C07C7E8u); { u32 t_ = r8; PR = 0x0C07C7ECu; r7 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C07C7ECu); }  /* 0C07C7E8 jsr @Rn */
L_0C07C7EC: BLKS(0x0C07C7ECu);
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C07C7EEu, 1);  /* 0C07C7EC mov.w @Rm,Rn */
	r4 = 0x1FFu; UPD(0x0C07C7F0u, 1);  /* 0C07C7EE mov.w @(disp,pc),Rn */
	r2 = r3;  /* 0C07C7F0 mov Rm,Rn */
	r2 -= r0;  /* 0C07C7F2 sub Rm,Rn */
	r2 &= r4;  /* 0C07C7F4 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07C7F6 tst Rm,Rn */
	if (T) { UPD(0x0C07C82Cu, 7); goto L_0C07C82C; }  /* 0C07C7F8 bt */
L_0C07C7FA: BLKS(0x0C07C7FAu);
	r7 = 0x100u; UPD(0x0C07C7FCu, 1);  /* 0C07C7FA mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C07C7FC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C8E0u, 4); goto L_0C07C8E0; } goto L_0C07C802; }  /* 0C07C7FE bf/s */
L_0C07C802: BLKS(0x0C07C802u);
	r1 = r3;  /* 0C07C802 mov Rm,Rn */
	r1 += 0x4u;  /* 0C07C804 add #imm,Rn */
	UPD(0x0C07C806u, 3);
L_0C07C806: BLKS(0x0C07C806u);
	r4 = 0xB4u; UPD(0x0C07C808u, 1);  /* 0C07C806 mov.w @(disp,pc),Rn */
	IF(0x0C07C808u); MACL = r11 * r4;  /* 0C07C808 mul.l Rm,Rn */
	W16(r9, r1); UPD(0x0C07C80Cu, 3);  /* 0C07C80A mov.w Rm,@Rn */
	r0 = 0xC26CD40u; UPD(0x0C07C80Eu, 1);  /* 0C07C80C mov.l @(disp,pc),Rn */
	IF(0x0C07C80Eu); r9 = MACL;  /* 0C07C80E sts macl,Rn */
	r9 += r0;  /* 0C07C810 add Rm,Rn */
	r8 = 0x86u; UPD(0x0C07C814u, 3);  /* 0C07C812 mov.w @(disp,pc),Rn */
	r0 = 0xC058060u; UPD(0x0C07C816u, 1);  /* 0C07C814 mov.l @(disp,pc),Rn */
	r8 += r9;  /* 0C07C816 add Rm,Rn */
	r10 = 0x30000u; UPD(0x0C07C81Au, 2);  /* 0C07C818 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C07C81Cu, 1);  /* 0C07C81A mov.w @Rm,Rn */
	IF(0x0C07C81Cu); { u32 t_ = r0; PR = 0x0C07C820u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07C820u); }  /* 0C07C81C jsr @Rn */
L_0C07C820: BLKS(0x0C07C820u);
	r5 = r10;  /* 0C07C820 mov Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C07C824u, 2);  /* 0C07C822 mov.l @(disp,pc),Rn */
	W32(r9 + 0x2Cu, r0); UPD(0x0C07C826u, 1);  /* 0C07C824 mov.l Rm,@(disp,Rn) */
	IF(0x0C07C826u); { u32 t_ = r10; PR = 0x0C07C82Au; r4 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07C82Au); }  /* 0C07C826 jsr @Rn */
L_0C07C82A: BLKS(0x0C07C82Au);
	W32(r9 + 0x30u, r0); UPD(0x0C07C82Cu, 1);  /* 0C07C82A mov.l Rm,@(disp,Rn) */
L_0C07C82C: BLKS(0x0C07C82Cu);
	r3 = 0xB4u; UPD(0x0C07C82Eu, 1);  /* 0C07C82C mov.w @(disp,pc),Rn */
	IF(0x0C07C82Eu); MACL = r11 * r3;  /* 0C07C82E mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C07C832u, 3);  /* 0C07C830 mov.l @(disp,pc),Rn */
	IF(0x0C07C832u); r3 = MACL;  /* 0C07C832 sts macl,Rn */
	r3 += r9;  /* 0C07C834 add Rm,Rn */
	r8 = R32(r3 + 0x24u); UPD(0x0C07C838u, 3);  /* 0C07C836 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C07C83Au, 1);  /* 0C07C838 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x2Cu); UPD(0x0C07C83Cu, 1);  /* 0C07C83A mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C07C83Eu, 1);  /* 0C07C83C mov.l @(disp,Rm),Rn */
	r8 += r5;  /* 0C07C83E add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C07C842u, 2);  /* 0C07C840 mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C07C842 add Rm,Rn */
	r7 += r8;  /* 0C07C844 add Rm,Rn */
	W32(r3 + 0x24u, r8); UPD(0x0C07C848u, 3);  /* 0C07C846 mov.l Rm,@(disp,Rn) */
	IF(0x0C07C848u); T = (s32)r7 >= 0;  /* 0C07C848 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07C8D0u, 4); goto L_0C07C8D0; } UPD(0x0C07C84Eu, 1); goto L_0C07C84E; }  /* 0C07C84A bf/s */
L_0C07C84E: BLKS(0x0C07C84Eu);
	r10 = 0xAC0000u; UPD(0x0C07C850u, 1);  /* 0C07C84E mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r10;  /* 0C07C850 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C07C86Au, 4); goto L_0C07C86A; }  /* 0C07C852 bt */
L_0C07C854: BLKS(0x0C07C854u);
	r2 = r6;  /* 0C07C854 mov Rm,Rn */
	r0 = 0xC3929E0u; UPD(0x0C07C858u, 2);  /* 0C07C856 mov.l @(disp,pc),Rn */
	r7 = R32(r0); UPD(0x0C07C85Au, 1);  /* 0C07C858 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C07C85Cu, 1);  /* 0C07C85A mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C07C85C sub Rm,Rn */
	r2 += r6;  /* 0C07C85E add Rm,Rn */
	IF(0x0C07C860u); T = (s32)r2 >= 0;  /* 0C07C860 cmp/pz Rn */
	if (!T) { UPD(0x0C07C8C0u, 6); goto L_0C07C8C0; }  /* 0C07C862 bf */
L_0C07C864: BLKS(0x0C07C864u);
	r4 = 0x840000u; UPD(0x0C07C866u, 1);  /* 0C07C864 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C07C866 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07C880u, 4); goto L_0C07C880; }  /* 0C07C868 bf */
L_0C07C86A: BLKS(0x0C07C86Au);
	r11 = 0x0u;  /* 0C07C86A mov #imm,Rn */
	W32(r3, r11); UPD(0x0C07C86Eu, 2);  /* 0C07C86C mov.l Rm,@Rn */
	r15 = r14;  /* 0C07C86E mov Rm,Rn */
	IF(0x0C07C870u); PR = R32(r15); r15 += 4; UPD(0x0C07C872u, 2);  /* 0C07C870 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C874u, 1);  /* 0C07C872 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C876u, 1);  /* 0C07C874 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C878u, 1);  /* 0C07C876 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C87Au, 1);  /* 0C07C878 mov.l @Rm+,Rn */
	IF(0x0C07C87Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07C87A rts */
L_0C07C880: BLKS(0x0C07C880u);
	r2 = 0x86u; UPD(0x0C07C882u, 1);  /* 0C07C880 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C07C882 mov Rm,Rn */
	r8 = 0x98u; UPD(0x0C07C886u, 2);  /* 0C07C884 mov.w @(disp,pc),Rn */
	r9 = 0x1Fu;  /* 0C07C886 mov #imm,Rn */
	IF(0x0C07C888u); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07C88Au, 2);  /* 0C07C888 mov.w @(r0,Rm),Rn */
	r8 += r3;  /* 0C07C88A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C07C88Eu, 2);  /* 0C07C88C mov.b @Rm,Rn */
	r5 += 0x8u;  /* 0C07C88E add #imm,Rn */
	r0 += 0x1u;  /* 0C07C890 add #imm,Rn */
	IF(0x0C07C892u); r5 >>= 2;  /* 0C07C892 shlr2 Rn */
	IF(0x0C07C894u); r5 >>= 2;  /* 0C07C894 shlr2 Rn */
	W8(r8, r0); UPD(0x0C07C898u, 5);  /* 0C07C896 mov.b Rm,@Rn */
	r5 &= r9;  /* 0C07C898 and Rm,Rn */
	r0 &= 0x1u;  /* 0C07C89A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07C89C tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07C8ACu, 6); goto L_0C07C8AC; } UPD(0x0C07C8A2u, 1); goto L_0C07C8A2; }  /* 0C07C89E bt/s */
L_0C07C8A2: BLKS(0x0C07C8A2u);
	r0 = R32(r3 + 0xCu); UPD(0x0C07C8A4u, 1);  /* 0C07C8A2 mov.l @(disp,Rm),Rn */
	r6 = 0xC1927C4u; UPD(0x0C07C8A6u, 1);  /* 0C07C8A4 mov.l @(disp,pc),Rn */
	IF(0x0C07C8A6u); r0 <<= 2;  /* 0C07C8A6 shll2 Rn */
	IF(0x0C07C8A8u); r10 = R32(r0 + r6); UPD(0x0C07C8AAu, 2);  /* 0C07C8A8 mov.l @(r0,Rm),Rn */
	W32(r3 + 0xCu, r10); UPD(0x0C07C8ACu, 1);  /* 0C07C8AA mov.l Rm,@(disp,Rn) */
L_0C07C8AC: BLKS(0x0C07C8ACu);
	r3 = 0xC0A03B0u; UPD(0x0C07C8AEu, 1);  /* 0C07C8AC mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07C8AE mov Rm,Rn */
	r15 = r14;  /* 0C07C8B0 mov Rm,Rn */
	IF(0x0C07C8B2u); PR = R32(r15); r15 += 4; UPD(0x0C07C8B4u, 3);  /* 0C07C8B2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C8B6u, 1);  /* 0C07C8B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C8B8u, 1);  /* 0C07C8B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C8BAu, 1);  /* 0C07C8B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C8BCu, 1);  /* 0C07C8BA mov.l @Rm+,Rn */
	IF(0x0C07C8BCu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A03B0u: TAIL(f_0C0A03B0); default: JUMPD(tv_); } }  /* 0C07C8BC jmp @Rn */
L_0C07C8C0: BLKS(0x0C07C8C0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C07C864u, 3); goto L_0C07C864; }  /* 0C07C8C0 bra */
L_0C07C8D0: BLKS(0x0C07C8D0u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C07C84Eu, 3); goto L_0C07C84E; }  /* 0C07C8D0 bra */
L_0C07C8E0: BLKS(0x0C07C8E0u);
	{ r1 += 0xFFFFFFFCu; /* slot add #imm,Rn */ UPD(0x0C07C806u, 3); goto L_0C07C806; }  /* 0C07C8E0 bra */
}

void f_0C07C930(sh3_t *c)
{
	LOCALS;
L_0C07C930: BLKS(0x0C07C930u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07C932u, 1);  /* 0C07C930 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C07C932 exts.w Rm,Rn */
	r0 = 0xB4u; UPD(0x0C07C936u, 2);  /* 0C07C934 mov.w @(disp,pc),Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07C938u, 1);  /* 0C07C936 mov.l Rm,@-Rn */
	IF(0x0C07C938u); MACL = r4 * r0;  /* 0C07C938 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07C93Cu, 3);  /* 0C07C93A mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C07C93Eu, 1);  /* 0C07C93C mov.l @(disp,pc),Rn */
	IF(0x0C07C93Eu); r8 = MACL;  /* 0C07C93E sts macl,Rn */
	IF(0x0C07C940u); r15 -= 4; W32(r15, PR); UPD(0x0C07C942u, 2);  /* 0C07C940 sts.l pr,@-Rn */
	r8 += r0;  /* 0C07C942 add Rm,Rn */
	r7 = R32(r8 + 0x8u); UPD(0x0C07C946u, 2);  /* 0C07C944 mov.l @(disp,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C07C946 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C9E0u, 4); goto L_0C07C9E0; } goto L_0C07C94C; }  /* 0C07C948 bf/s */
L_0C07C94C: BLKS(0x0C07C94Cu);
	r5 = R32(r8 + 0x24u); UPD(0x0C07C94Eu, 2);  /* 0C07C94C mov.l @(disp,Rm),Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C07C950u, 1);  /* 0C07C94E mov.l @(disp,Rm),Rn */
	r5 += r3;  /* 0C07C950 add Rm,Rn */
	r3 = R32(r8 + 0x28u); UPD(0x0C07C954u, 2);  /* 0C07C952 mov.l @(disp,Rm),Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C07C956u, 1);  /* 0C07C954 mov.l @(disp,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C07C958u, 1);  /* 0C07C956 mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C07C958 add Rm,Rn */
	r2 += r5;  /* 0C07C95A add Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C07C95Eu, 3);  /* 0C07C95C mov.l Rm,@(disp,Rn) */
	IF(0x0C07C95Eu); T = (s32)r2 >= 0;  /* 0C07C95E cmp/pz Rn */
	{ u32 c_ = !T; W32(r8 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07C9D0u, 4); goto L_0C07C9D0; } UPD(0x0C07C964u, 1); goto L_0C07C964; }  /* 0C07C960 bf/s */
L_0C07C964: BLKS(0x0C07C964u);
	r6 = 0xA80000u; UPD(0x0C07C966u, 1);  /* 0C07C964 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C07C966 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C07C980u, 4); goto L_0C07C980; }  /* 0C07C968 bt */
L_0C07C96A: BLKS(0x0C07C96Au);
	r2 = 0xC3929E0u; UPD(0x0C07C96Cu, 1);  /* 0C07C96A mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C07C96Eu, 1);  /* 0C07C96C mov.l @Rm,Rn */
	r9 = 0xFF880000u; UPD(0x0C07C970u, 1);  /* 0C07C96E mov.l @(disp,pc),Rn */
	r2 = r3;  /* 0C07C970 mov Rm,Rn */
	r2 -= r0;  /* 0C07C972 sub Rm,Rn */
	r2 += r9;  /* 0C07C974 add Rm,Rn */
	IF(0x0C07C976u); T = (s32)r2 >= 0;  /* 0C07C976 cmp/pz Rn */
	if (!T) { UPD(0x0C07C9C0u, 7); goto L_0C07C9C0; }  /* 0C07C978 bf */
L_0C07C97A: BLKS(0x0C07C97Au);
	r5 = 0x800000u; UPD(0x0C07C97Cu, 1);  /* 0C07C97A mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C07C97C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07C990u, 4); goto L_0C07C990; }  /* 0C07C97E bf */
L_0C07C980: BLKS(0x0C07C980u);
	W32(r8, r7); UPD(0x0C07C982u, 1);  /* 0C07C980 mov.l Rm,@Rn */
L_0C07C982: BLKS(0x0C07C982u);
	r15 = r14;  /* 0C07C982 mov Rm,Rn */
	IF(0x0C07C984u); PR = R32(r15); r15 += 4; UPD(0x0C07C986u, 2);  /* 0C07C984 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C988u, 1);  /* 0C07C986 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C98Au, 1);  /* 0C07C988 mov.l @Rm+,Rn */
	IF(0x0C07C98Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07C98A rts */
L_0C07C990: BLKS(0x0C07C990u);
	r7 = 0x99u; UPD(0x0C07C992u, 1);  /* 0C07C990 mov.w @(disp,pc),Rn */
	r7 += r8;  /* 0C07C992 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C07C996u, 2);  /* 0C07C994 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C07C996 add #imm,Rn */
	W8(r7, r0); UPD(0x0C07C99Au, 2);  /* 0C07C998 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C07C99A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07C99C tst Rm,Rn */
	if (T) { UPD(0x0C07C982u, 5); goto L_0C07C982; }  /* 0C07C99E bt */
L_0C07C9A0: BLKS(0x0C07C9A0u);
	r0 = R32(r8 + 0xCu); UPD(0x0C07C9A2u, 1);  /* 0C07C9A0 mov.l @(disp,Rm),Rn */
	r9 = 0xC1935A8u; UPD(0x0C07C9A4u, 1);  /* 0C07C9A2 mov.l @(disp,pc),Rn */
	IF(0x0C07C9A4u); r0 <<= 2;  /* 0C07C9A4 shll2 Rn */
	IF(0x0C07C9A6u); r6 = R32(r0 + r9); UPD(0x0C07C9A8u, 2);  /* 0C07C9A6 mov.l @(r0,Rm),Rn */
	r3 = 0xC0A0380u; UPD(0x0C07C9AAu, 1);  /* 0C07C9A8 mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r6); UPD(0x0C07C9ACu, 1);  /* 0C07C9AA mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C07C9AC mov Rm,Rn */
	IF(0x0C07C9AEu); PR = R32(r15); r15 += 4; UPD(0x0C07C9B0u, 2);  /* 0C07C9AE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C9B2u, 1);  /* 0C07C9B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C9B4u, 1);  /* 0C07C9B2 mov.l @Rm+,Rn */
	IF(0x0C07C9B4u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C07C9B4 jmp @Rn */
L_0C07C9C0: BLKS(0x0C07C9C0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C07C97Au, 3); goto L_0C07C97A; }  /* 0C07C9C0 bra */
L_0C07C9D0: BLKS(0x0C07C9D0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C07C964u, 3); goto L_0C07C964; }  /* 0C07C9D0 bra */
L_0C07C9E0: BLKS(0x0C07C9E0u);
	r0 = 0x99u; UPD(0x0C07C9E2u, 1);  /* 0C07C9E0 mov.w @(disp,pc),Rn */
	r9 = 0x3u;  /* 0C07C9E2 mov #imm,Rn */
	r0 += r8;  /* 0C07C9E4 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C07C9E8u, 3);  /* 0C07C9E6 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C07C9E8 add #imm,Rn */
	r9 &= r2;  /* 0C07C9EA and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C07C9EC tst Rm,Rn */
	{ u32 c_ = !T; W8(r0, r2); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07C982u, 6); goto L_0C07C982; } UPD(0x0C07C9F2u, 1); goto L_0C07C9F2; }  /* 0C07C9EE bf/s */
L_0C07C9F2: BLKS(0x0C07C9F2u);
	r7 = R32(r8 + 0xCu); UPD(0x0C07C9F4u, 1);  /* 0C07C9F2 mov.l @(disp,Rm),Rn */
	r5 = 0xC0A0380u; UPD(0x0C07C9F6u, 1);  /* 0C07C9F4 mov.l @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C07C9F6 add #imm,Rn */
	IF(0x0C07C9F8u); { u32 t_ = r5; PR = 0x0C07C9FCu; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C07C9FCu); }  /* 0C07C9F8 jsr @Rn */
L_0C07C9FC: BLKS(0x0C07C9FCu);
	r0 = R32(r8 + 0xCu); UPD(0x0C07C9FEu, 1);  /* 0C07C9FC mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C07C9FE cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C07C982u, 4); goto L_0C07C982; }  /* 0C07CA00 bf */
L_0C07CA02: BLKS(0x0C07CA02u);
	W32(r8, r9); UPD(0x0C07CA04u, 1);  /* 0C07CA02 mov.l Rm,@Rn */
	{ IF(0x0C07CA06u); ; /* slot nop */ UPD(0x0C07C982u, 3); goto L_0C07C982; }  /* 0C07CA04 bra */
}

void f_0C07CA30(sh3_t *c)
{
	LOCALS;
L_0C07CA30: BLKS(0x0C07CA30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07CA32u, 1);  /* 0C07CA30 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07CA34u, 1);  /* 0C07CA32 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07CA36u, 1);  /* 0C07CA34 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07CA38u, 1);  /* 0C07CA36 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07CA3Au, 1);  /* 0C07CA38 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07CA3Cu, 1);  /* 0C07CA3A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07CA3Eu, 1);  /* 0C07CA3C mov.l Rm,@-Rn */
	r4 = 0xC2859A0u; UPD(0x0C07CA40u, 1);  /* 0C07CA3E mov.l @(disp,pc),Rn */
	IF(0x0C07CA40u); r15 -= 4; W32(r15, PR); UPD(0x0C07CA42u, 1);  /* 0C07CA40 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C07CA44u, 1);  /* 0C07CA42 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C07CA44 add #imm,Rn */
	r8 = 0xC283CA0u; UPD(0x0C07CA48u, 2);  /* 0C07CA46 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07CA48 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C07CA4Cu, 2);  /* 0C07CA4A mov.w @Rm+,Rn */
	r7 = R32(r8); UPD(0x0C07CA4Eu, 1);  /* 0C07CA4C mov.l @Rm,Rn */
	IF(0x0C07CA4Eu); r0 <<= 2;  /* 0C07CA4E shll2 Rn */
	IF(0x0C07CA50u); r6 = R32(r0 + r7); UPD(0x0C07CA52u, 2);  /* 0C07CA50 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r2 = v_; } UPD(0x0C07CA54u, 1);  /* 0C07CA52 mov.w @Rm+,Rn */
	r5 = 0xC27DC20u; UPD(0x0C07CA56u, 1);  /* 0C07CA54 mov.l @(disp,pc),Rn */
	r9 = 0xC22C874u; UPD(0x0C07CA58u, 1);  /* 0C07CA56 mov.l @(disp,pc),Rn */
	r8 = 0xC057A50u; UPD(0x0C07CA5Au, 1);  /* 0C07CA58 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C07CA5Cu, 1);  /* 0C07CA5A mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C07CA5Eu, 1);  /* 0C07CA5C mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C07CA60u, 1);  /* 0C07CA5E mov.w @Rm,Rn */
	r11 = 0xC28629Eu; UPD(0x0C07CA62u, 1);  /* 0C07CA60 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C07CA62 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C07CA66u, 2);  /* 0C07CA64 mov.l @(disp,pc),Rn */
	IF(0x0C07CA66u); { u32 t_ = r8; PR = 0x0C07CA6Au; W16(r11, r2); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C07CA6Au); }  /* 0C07CA66 jsr @Rn */
L_0C07CA6A: BLKS(0x0C07CA6Au);
	T = (r0 & r0) == 0;  /* 0C07CA6A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07CA90u, 4); goto L_0C07CA90; } UPD(0x0C07CA70u, 1); goto L_0C07CA70; }  /* 0C07CA6C bf/s */
L_0C07CA70: BLKS(0x0C07CA70u);
	r14 += 0xCu;  /* 0C07CA70 add #imm,Rn */
	UPD(0x0C07CA72u, 1);
L_0C07CA72: BLKS(0x0C07CA72u);
	r15 = r14;  /* 0C07CA72 mov Rm,Rn */
	IF(0x0C07CA74u); PR = R32(r15); r15 += 4; UPD(0x0C07CA76u, 2);  /* 0C07CA74 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07CA78u, 1);  /* 0C07CA76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07CA7Au, 1);  /* 0C07CA78 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07CA7Cu, 1);  /* 0C07CA7A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07CA7Eu, 1);  /* 0C07CA7C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07CA80u, 1);  /* 0C07CA7E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07CA82u, 1);  /* 0C07CA80 mov.l @Rm+,Rn */
	IF(0x0C07CA82u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07CA82 rts */
L_0C07CA90: BLKS(0x0C07CA90u);
	r10 = 0xC0606C0u; UPD(0x0C07CA92u, 1);  /* 0C07CA90 mov.l @(disp,pc),Rn */
	IF(0x0C07CA92u); { u32 t_ = r10; PR = 0x0C07CA96u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C07CA96u); }  /* 0C07CA92 jsr @Rn */
L_0C07CA96: BLKS(0x0C07CA96u);
	T = (r0 & r0) == 0;  /* 0C07CA96 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07CA70u, 4); goto L_0C07CA70; } goto L_0C07CA9C; }  /* 0C07CA98 bt/s */
L_0C07CA9C: BLKS(0x0C07CA9Cu);
	r12 = 0xC2755BCu; UPD(0x0C07CA9Eu, 2);  /* 0C07CA9C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C07CAA0u, 1);  /* 0C07CA9E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C07CAA2u, 1);  /* 0C07CAA0 mov.w @Rm+,Rn */
	IF(0x0C07CAA2u); MACL = r10 * r8;  /* 0C07CAA2 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C07CAA6u, 3);  /* 0C07CAA4 mov.l @(disp,pc),Rn */
	IF(0x0C07CAA6u); r8 = MACL;  /* 0C07CAA6 sts macl,Rn */
	r0 = 0xD3000100u; UPD(0x0C07CAAAu, 2);  /* 0C07CAA8 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C07CAAA add Rm,Rn */
	W32(r8, r0); UPD(0x0C07CAAEu, 2);  /* 0C07CAAC mov.l Rm,@Rn */
	r4 = r10;  /* 0C07CAAE mov Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C07CAB2u, 2);  /* 0C07CAB0 mov.w @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r11); UPD(0x0C07CAB4u, 1);  /* 0C07CAB2 mov.w @Rm,Rn */
	r13 = r6 & 0xFFFF;  /* 0C07CAB4 extu.w Rm,Rn */
	r0 = 0x8Au; UPD(0x0C07CAB8u, 2);  /* 0C07CAB6 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C07CAB8 mov #imm,Rn */
	IF(0x0C07CABAu); W16(r0 + r8, r7); UPD(0x0C07CABCu, 2);  /* 0C07CABA mov.w Rm,@(r0,Rn) */
	r5 = 0xC0A02D0u; UPD(0x0C07CABEu, 1);  /* 0C07CABC mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C07CABE add #imm,Rn */
	IF(0x0C07CAC0u); W16(r0 + r8, r7); UPD(0x0C07CAC2u, 2);  /* 0C07CAC0 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0x4u, r13); UPD(0x0C07CAC4u, 1);  /* 0C07CAC2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r11); UPD(0x0C07CAC6u, 1);  /* 0C07CAC4 mov.l Rm,@(disp,Rn) */
	IF(0x0C07CAC6u); { u32 t_ = r5; PR = 0x0C07CACAu; W32(r8 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07CACAu); }  /* 0C07CAC6 jsr @Rn */
L_0C07CACA: BLKS(0x0C07CACAu);
	r9 = 0xC061380u; UPD(0x0C07CACCu, 1);  /* 0C07CACA mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07CACC mov Rm,Rn */
	r2 = 0x1700000u; UPD(0x0C07CAD0u, 2);  /* 0C07CACE mov.l @(disp,pc),Rn */
	IF(0x0C07CAD0u); { u32 t_ = r9; PR = 0x0C07CAD4u; W32(r8 + 0x24u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C061380, 0x0C061380u, 0x0C07CAD4u); }  /* 0C07CAD0 jsr @Rn */
L_0C07CAD4: BLKS(0x0C07CAD4u);
	r3 = 0xC0A1530u; UPD(0x0C07CAD6u, 1);  /* 0C07CAD4 mov.l @(disp,pc),Rn */
	r13 = 0xC0A1780u; UPD(0x0C07CAD8u, 1);  /* 0C07CAD6 mov.l @(disp,pc),Rn */
	IF(0x0C07CAD8u); { u32 t_ = r3; PR = 0x0C07CADCu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C07CADCu); }  /* 0C07CAD8 jsr @Rn */
L_0C07CADC: BLKS(0x0C07CADCu);
	r0 = 0xADu; UPD(0x0C07CADEu, 1);  /* 0C07CADC mov.w @(disp,pc),Rn */
	r4 = 0x12u;  /* 0C07CADE mov #imm,Rn */
	r6 = 0xA8u; UPD(0x0C07CAE2u, 2);  /* 0C07CAE0 mov.w @(disp,pc),Rn */
	IF(0x0C07CAE2u); W8(r0 + r8, r11); UPD(0x0C07CAE4u, 1);  /* 0C07CAE2 mov.b Rm,@(r0,Rn) */
	r6 += r8;  /* 0C07CAE4 add Rm,Rn */
	r6 += 0x1u;  /* 0C07CAE6 add #imm,Rn */
	W8(r6, r4); UPD(0x0C07CAEAu, 3);  /* 0C07CAE8 mov.b Rm,@Rn */
	r0 = 0xC27DC20u; UPD(0x0C07CAECu, 1);  /* 0C07CAEA mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07CAEC mov Rm,Rn */
	r5 = R32(r0); UPD(0x0C07CAF0u, 2);  /* 0C07CAEE mov.l @Rm,Rn */
	IF(0x0C07CAF0u); { u32 t_ = r13; PR = 0x0C07CAF4u; W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C07CAF4u); }  /* 0C07CAF0 jsr @Rn */
L_0C07CAF4: BLKS(0x0C07CAF4u);
	r0 = 0x94u; UPD(0x0C07CAF6u, 1);  /* 0C07CAF4 mov.w @(disp,pc),Rn */
	r13 = r8;  /* 0C07CAF6 mov Rm,Rn */
	IF(0x0C07CAF8u); W32(r0 + r8, r11); UPD(0x0C07CAFAu, 2);  /* 0C07CAF8 mov.l Rm,@(r0,Rn) */
	r9 = 0x8Cu; UPD(0x0C07CAFCu, 1);  /* 0C07CAFA mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C07CAFC add #imm,Rn */
	r9 += r8;  /* 0C07CAFE add Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C07CB02u, 3);  /* 0C07CB00 mov.l @(disp,Rm),Rn */
	W32(r9, r11); UPD(0x0C07CB04u, 1);  /* 0C07CB02 mov.l Rm,@Rn */
	IF(0x0C07CB04u); W32(r0 + r8, r11); UPD(0x0C07CB06u, 1);  /* 0C07CB04 mov.l Rm,@(r0,Rn) */
	W32(r8 + 0x30u, r11); UPD(0x0C07CB08u, 1);  /* 0C07CB06 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r11); UPD(0x0C07CB0Au, 1);  /* 0C07CB08 mov.l Rm,@(disp,Rn) */
	W32(r14, r11); UPD(0x0C07CB0Cu, 1);  /* 0C07CB0A mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C07CB0Eu, 1);  /* 0C07CB0C mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C07CB0E mov #imm,Rn */
	UPD(0x0C07CB10u, 1);
L_0C07CB10: BLKS(0x0C07CB10u);
	r9 = 0xC194CD0u; UPD(0x0C07CB12u, 1);  /* 0C07CB10 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C07CB14u, 1);  /* 0C07CB12 mov.w @Rm+,Rn */
	r9 += r11;  /* 0C07CB14 add Rm,Rn */
	r8 = 0xB4u; UPD(0x0C07CB18u, 2);  /* 0C07CB16 mov.w @(disp,pc),Rn */
	r9 += 0x4u;  /* 0C07CB18 add #imm,Rn */
	IF(0x0C07CB1Au); MACL = r10 * r8;  /* 0C07CB1A mul.l Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C07CB1Eu, 4);  /* 0C07CB1C mov.w @Rm,Rn */
	r11 += 0x14u;  /* 0C07CB1E add #imm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C07CB22u, 2);  /* 0C07CB20 mov.l @(disp,pc),Rn */
	IF(0x0C07CB22u); r8 = MACL;  /* 0C07CB22 sts macl,Rn */
	r0 = 0xC2755BCu; UPD(0x0C07CB26u, 2);  /* 0C07CB24 mov.l @(disp,pc),Rn */
	r7 += r7;  /* 0C07CB26 add Rm,Rn */
	IF(0x0C07CB28u); r5 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C07CB2Au, 2);  /* 0C07CB28 mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C07CB2A add Rm,Rn */
	r8 += 0x7Cu;  /* 0C07CB2C add #imm,Rn */
	W16(r8, r5); UPD(0x0C07CB30u, 3);  /* 0C07CB2E mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C07CB30 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C07CB34u, 2);  /* 0C07CB32 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C07CB34 add #imm,Rn */
	W16(r8, r2); UPD(0x0C07CB38u, 2);  /* 0C07CB36 mov.w Rm,@Rn */
	r5 = 0x0u;  /* 0C07CB38 mov #imm,Rn */
	r3 = 0xC22C874u; UPD(0x0C07CB3Cu, 2);  /* 0C07CB3A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C07CB3C add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C07CB40u, 2);  /* 0C07CB3E mov.w @Rm,Rn */
	r0 = R32(r9); UPD(0x0C07CB42u, 1);  /* 0C07CB40 mov.l @Rm,Rn */
	r6 = r4 & 0xFFFF;  /* 0C07CB42 extu.w Rm,Rn */
	W32(r8, r0); UPD(0x0C07CB46u, 2);  /* 0C07CB44 mov.l Rm,@Rn */
	r4 = r10;  /* 0C07CB46 mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C07CB4Au, 2);  /* 0C07CB48 mov.l Rm,@(disp,Rn) */
	r2 = 0xC0A02D0u; UPD(0x0C07CB4Cu, 1);  /* 0C07CB4A mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x8u); UPD(0x0C07CB4Eu, 1);  /* 0C07CB4C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x8u, r7); UPD(0x0C07CB50u, 1);  /* 0C07CB4E mov.l Rm,@(disp,Rn) */
	IF(0x0C07CB50u); { u32 t_ = r2; PR = 0x0C07CB54u; W32(r8 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07CB54u); }  /* 0C07CB50 jsr @Rn */
L_0C07CB54: BLKS(0x0C07CB54u);
	r6 = R32(r13 + 0x24u); UPD(0x0C07CB56u, 1);  /* 0C07CB54 mov.l @(disp,Rm),Rn */
	r7 = R32(r13 + 0x28u); UPD(0x0C07CB58u, 1);  /* 0C07CB56 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C07CB5Au, 1);  /* 0C07CB58 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r7); UPD(0x0C07CB5Cu, 1);  /* 0C07CB5A mov.l Rm,@(disp,Rn) */
	r0 = 0xC28629Eu; UPD(0x0C07CB5Eu, 1);  /* 0C07CB5C mov.l @(disp,pc),Rn */
	r5 = R32(r9 + 0xCu); UPD(0x0C07CB60u, 1);  /* 0C07CB5E mov.l @(disp,Rm),Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C07CB62u, 1);  /* 0C07CB60 mov.w @Rm,Rn */
	W32(r8 + 0x2Cu, r5); UPD(0x0C07CB64u, 1);  /* 0C07CB62 mov.l Rm,@(disp,Rn) */
	IF(0x0C07CB64u); r3 >>= 2;  /* 0C07CB64 shlr2 Rn */
	r2 = R32(r9 + 0x10u); UPD(0x0C07CB68u, 2);  /* 0C07CB66 mov.l @(disp,Rm),Rn */
	IF(0x0C07CB68u); r3 >>= 2;  /* 0C07CB68 shlr2 Rn */
	r4 = 0x86u; UPD(0x0C07CB6Cu, 2);  /* 0C07CB6A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07CB6C mov Rm,Rn */
	IF(0x0C07CB6Eu); r3 >>= 2;  /* 0C07CB6E shlr2 Rn */
	r9 = 0xC0A1530u; UPD(0x0C07CB72u, 3);  /* 0C07CB70 mov.l @(disp,pc),Rn */
	IF(0x0C07CB72u); W16(r0 + r4, r3); UPD(0x0C07CB74u, 1);  /* 0C07CB72 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0x30u, r2); UPD(0x0C07CB76u, 1);  /* 0C07CB74 mov.l Rm,@(disp,Rn) */
	IF(0x0C07CB76u); { u32 t_ = r9; PR = 0x0C07CB7Au; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C07CB7Au); }  /* 0C07CB76 jsr @Rn */
L_0C07CB7A: BLKS(0x0C07CB7Au);
	r0 = 0xB0u; UPD(0x0C07CB7Cu, 1);  /* 0C07CB7A mov.w @(disp,pc),Rn */
	r5 = r8;  /* 0C07CB7C mov Rm,Rn */
	IF(0x0C07CB7Eu); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C07CB80u, 2);  /* 0C07CB7E mov.b @(r0,Rm),Rn */
	r6 = 0xACu; UPD(0x0C07CB82u, 1);  /* 0C07CB80 mov.w @(disp,pc),Rn */
	IF(0x0C07CB82u); W8(r0 + r8, r3); UPD(0x0C07CB84u, 1);  /* 0C07CB82 mov.b Rm,@(r0,Rn) */
	r5 += r6;  /* 0C07CB84 add Rm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C07CB88u, 2);  /* 0C07CB86 mov.l @(disp,Rm),Rn */
	r6 += r13;  /* 0C07CB88 add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C07CB8Cu, 2);  /* 0C07CB8A mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C07CB8C add #imm,Rn */
	r10 = 0xC0AFE40u; UPD(0x0C07CB90u, 2);  /* 0C07CB8E mov.l @(disp,pc),Rn */
	r0 += r8;  /* 0C07CB90 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C07CB94u, 2);  /* 0C07CB92 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C07CB94 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C07CB98u, 2);  /* 0C07CB96 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C07CB98 add #imm,Rn */
	r2 = 0x9Bu; UPD(0x0C07CB9Cu, 2);  /* 0C07CB9A mov.w @(disp,pc),Rn */
	W8(r0, r4); UPD(0x0C07CB9Eu, 1);  /* 0C07CB9C mov.b Rm,@Rn */
	r8 += r2;  /* 0C07CB9E add Rm,Rn */
	IF(0x0C07CBA0u); { u32 t_ = r10; PR = 0x0C07CBA4u; W8(r5, r7); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C07CBA4u); }  /* 0C07CBA0 jsr @Rn */
L_0C07CBA4: BLKS(0x0C07CBA4u);
	W8(r8, r0); UPD(0x0C07CBA6u, 1);  /* 0C07CBA4 mov.b Rm,@Rn */
	r10 = 0x5u;  /* 0C07CBA6 mov #imm,Rn */
	r9 = R32(r14); UPD(0x0C07CBAAu, 2);  /* 0C07CBA8 mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C07CBAA add #imm,Rn */
	r3 = (u32)(s32)(s16)r9;  /* 0C07CBAC exts.w Rm,Rn */
	W32(r14, r3); UPD(0x0C07CBB0u, 3);  /* 0C07CBAE mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C07CBB2u, 1);  /* 0C07CBB0 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r10;  /* 0C07CBB2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07CB10u, 4); goto L_0C07CB10; } goto L_0C07CBB8; }  /* 0C07CBB4 bf/s */
L_0C07CBB8: BLKS(0x0C07CBB8u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07CA72u, 4); goto L_0C07CA72; }  /* 0C07CBB8 bra */
}

/* FUN_0c07cc20 */
void f_0C07CC20(sh3_t *c)
{
	LOCALS;
L_0C07CC20: BLKS(0x0C07CC20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07CC22u, 1);  /* 0C07CC20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07CC24u, 1);  /* 0C07CC22 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07CC26u, 1);  /* 0C07CC24 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07CC28u, 1);  /* 0C07CC26 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07CC2Au, 1);  /* 0C07CC28 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07CC2Cu, 1);  /* 0C07CC2A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07CC2Eu, 1);  /* 0C07CC2C mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C07CC2E exts.w Rm,Rn */
	IF(0x0C07CC30u); r15 -= 4; W32(r15, PR); UPD(0x0C07CC32u, 2);  /* 0C07CC30 sts.l pr,@-Rn */
	r4 = r13;  /* 0C07CC32 mov Rm,Rn */
	r8 = 0xC0A05D0u; UPD(0x0C07CC36u, 2);  /* 0C07CC34 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C07CC36 add #imm,Rn */
	IF(0x0C07CC38u); { u32 t_ = r8; PR = 0x0C07CC3Cu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C07CC3Cu); }  /* 0C07CC38 jsr @Rn */
L_0C07CC3C: BLKS(0x0C07CC3Cu);
	IF(0x0C07CC3Cu); T = (s32)r0 >= 0;  /* 0C07CC3C cmp/pz Rn */
	{ u32 c_ = T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07CC46u, 4); goto L_0C07CC46; } goto L_0C07CC42; }  /* 0C07CC3E bt/s */
L_0C07CC42: BLKS(0x0C07CC42u);
	{ IF(0x0C07CC44u); ; /* slot nop */ UPD(0x0C07CE80u, 4); goto L_0C07CE80; }  /* 0C07CC42 bra */
L_0C07CC46: BLKS(0x0C07CC46u);
	r2 = 0xB4u; UPD(0x0C07CC48u, 1);  /* 0C07CC46 mov.w @(disp,pc),Rn */
	IF(0x0C07CC48u); MACL = r13 * r2;  /* 0C07CC48 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C07CC4Cu, 3);  /* 0C07CC4A mov.l @(disp,pc),Rn */
	IF(0x0C07CC4Cu); r8 = MACL;  /* 0C07CC4C sts macl,Rn */
	IF(0x0C07CC4Eu); MACL = r0 * r2;  /* 0C07CC4E mul.l Rm,Rn */
	r8 += r3;  /* 0C07CC50 add Rm,Rn */
	r5 = R32(r8); UPD(0x0C07CC54u, 5);  /* 0C07CC52 mov.l @Rm,Rn */
	IF(0x0C07CC54u); r7 = MACL;  /* 0C07CC54 sts macl,Rn */
	r7 += r3;  /* 0C07CC56 add Rm,Rn */
	r6 = R32(r7); UPD(0x0C07CC5Au, 3);  /* 0C07CC58 mov.l @Rm,Rn */
	r4 = 0x100u; UPD(0x0C07CC5Cu, 1);  /* 0C07CC5A mov.w @(disp,pc),Rn */
	r9 = 0xFFFFFEFFu; UPD(0x0C07CC5Eu, 1);  /* 0C07CC5C mov.w @(disp,pc),Rn */
	r6 &= r4;  /* 0C07CC5E and Rm,Rn */
	r11 = R32(r7 + 0x24u); UPD(0x0C07CC62u, 2);  /* 0C07CC60 mov.l @(disp,Rm),Rn */
	r5 &= r9;  /* 0C07CC62 and Rm,Rn */
	r10 = R32(r7 + 0x28u); UPD(0x0C07CC66u, 2);  /* 0C07CC64 mov.l @(disp,Rm),Rn */
	r5 |= r6;  /* 0C07CC66 or Rm,Rn */
	r12 = R32(r8 + 0x2Cu); UPD(0x0C07CC6Au, 2);  /* 0C07CC68 mov.l @(disp,Rm),Rn */
	T = (r5 & r4) == 0;  /* 0C07CC6A tst Rm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C07CC6Eu, 2);  /* 0C07CC6C mov.l @(disp,Rm),Rn */
	r11 += r12;  /* 0C07CC6E add Rm,Rn */
	r10 += r1;  /* 0C07CC70 add Rm,Rn */
	W32(r8 + 0x24u, r11); UPD(0x0C07CC74u, 3);  /* 0C07CC72 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r10); UPD(0x0C07CC76u, 1);  /* 0C07CC74 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r8, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C07CC7Eu, 3); goto L_0C07CC7E; } UPD(0x0C07CC7Au, 1); goto L_0C07CC7A; }  /* 0C07CC76 bt/s */
L_0C07CC7A: BLKS(0x0C07CC7Au);
	{ IF(0x0C07CC7Cu); ; /* slot nop */ UPD(0x0C07CE50u, 3); goto L_0C07CE50; }  /* 0C07CC7A bra */
L_0C07CC7E: BLKS(0x0C07CC7Eu);
	r9 = 0xC057600u; UPD(0x0C07CC80u, 1);  /* 0C07CC7E mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C07CC80 mov Rm,Rn */
	IF(0x0C07CC82u); { u32 t_ = r9; PR = 0x0C07CC86u; r5 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057600, 0x0C057600u, 0x0C07CC86u); }  /* 0C07CC82 jsr @Rn */
L_0C07CC86: BLKS(0x0C07CC86u);
	r5 = 0x86u; UPD(0x0C07CC88u, 1);  /* 0C07CC86 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07CC88 mov Rm,Rn */
	IF(0x0C07CC8Au); r4 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C07CC8Cu, 2);  /* 0C07CC8A mov.w @(r0,Rm),Rn */
	r4 += 0x4u;  /* 0C07CC8C add #imm,Rn */
	IF(0x0C07CC8Eu); r4 >>= 2;  /* 0C07CC8E shlr2 Rn */
	r0 = 0x3Fu;  /* 0C07CC90 mov #imm,Rn */
	IF(0x0C07CC92u); T = r4 & 1; r4 >>= 1;  /* 0C07CC92 shlr Rn */
	r4 &= r0;  /* 0C07CC94 and Rm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C07CC98u, 6);  /* 0C07CC96 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0A0380u; UPD(0x0C07CC9Au, 1);  /* 0C07CC98 mov.l @(disp,pc),Rn */
	IF(0x0C07CC9Au); { u32 t_ = r8; PR = 0x0C07CC9Eu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C07CC9Eu); }  /* 0C07CC9A jsr @Rn */
L_0C07CC9E: BLKS(0x0C07CC9Eu);
	r1 = 0x0u;  /* 0C07CC9E mov #imm,Rn */
	UPD(0x0C07CCA0u, 1);
L_0C07CCA0: BLKS(0x0C07CCA0u);
	r3 = (u32)(s32)(s16)r1;  /* 0C07CCA0 exts.w Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C07CCA2 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07CCC0u, 5); goto L_0C07CCC0; } UPD(0x0C07CCA8u, 1); goto L_0C07CCA8; }  /* 0C07CCA4 bf/s */
L_0C07CCA8: BLKS(0x0C07CCA8u);
	r14 += 0xCu;  /* 0C07CCA8 add #imm,Rn */
	r15 = r14;  /* 0C07CCAA mov Rm,Rn */
	IF(0x0C07CCACu); PR = R32(r15); r15 += 4; UPD(0x0C07CCAEu, 3);  /* 0C07CCAC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07CCB0u, 1);  /* 0C07CCAE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07CCB2u, 1);  /* 0C07CCB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07CCB4u, 1);  /* 0C07CCB2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07CCB6u, 1);  /* 0C07CCB4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07CCB8u, 1);  /* 0C07CCB6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07CCBAu, 1);  /* 0C07CCB8 mov.l @Rm+,Rn */
	IF(0x0C07CCBAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07CCBA rts */
L_0C07CCC0: BLKS(0x0C07CCC0u);
	r8 = 0xC0A9E40u; UPD(0x0C07CCC2u, 1);  /* 0C07CCC0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C07CCC2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C07CCC4 mov #imm,Rn */
	IF(0x0C07CCC6u); { u32 t_ = r8; PR = 0x0C07CCCAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07CCCAu); }  /* 0C07CCC6 jsr @Rn */
L_0C07CCCA: BLKS(0x0C07CCCAu);
	T = (r0 & r0) == 0;  /* 0C07CCCA tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07CCA8u, 4); goto L_0C07CCA8; } goto L_0C07CCD0; }  /* 0C07CCCC bt/s */
L_0C07CCD0: BLKS(0x0C07CCD0u);
	r1 = 0xB4u; UPD(0x0C07CCD2u, 2);  /* 0C07CCD0 mov.w @(disp,pc),Rn */
	IF(0x0C07CCD2u); MACL = r13 * r1;  /* 0C07CCD2 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07CCD6u, 3);  /* 0C07CCD4 mov.l @(disp,pc),Rn */
	IF(0x0C07CCD6u); r8 = MACL;  /* 0C07CCD6 sts macl,Rn */
	r8 += r0;  /* 0C07CCD8 add Rm,Rn */
	r4 = 0xA9u; UPD(0x0C07CCDCu, 3);  /* 0C07CCDA mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07CCDC mov Rm,Rn */
	r10 = 0xC0A9BB0u; UPD(0x0C07CCE0u, 2);  /* 0C07CCDE mov.l @(disp,pc),Rn */
	IF(0x0C07CCE0u); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C07CCE2u, 1);  /* 0C07CCE0 mov.b @(r0,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C07CCE4u, 1);  /* 0C07CCE2 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C07CCE4 extu.b Rm,Rn */
	IF(0x0C07CCE6u); { u32 t_ = r10; PR = 0x0C07CCEAu; r4 = R32(r8 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C07CCEAu); }  /* 0C07CCE6 jsr @Rn */
L_0C07CCEA: BLKS(0x0C07CCEAu);
	T = (r0 & r0) == 0;  /* 0C07CCEA tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07CCA8u, 4); goto L_0C07CCA8; } goto L_0C07CCF0; }  /* 0C07CCEC bt/s */
L_0C07CCF0: BLKS(0x0C07CCF0u);
	r6 = 0x86u; UPD(0x0C07CCF2u, 2);  /* 0C07CCF0 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07CCF2 mov Rm,Rn */
	r5 = 0x0u;  /* 0C07CCF4 mov #imm,Rn */
	IF(0x0C07CCF6u); r11 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C07CCF8u, 3);  /* 0C07CCF6 mov.w @(r0,Rm),Rn */
	W32(r14, r5); UPD(0x0C07CCFAu, 1);  /* 0C07CCF8 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r8); UPD(0x0C07CCFCu, 1);  /* 0C07CCFA mov.l Rm,@(disp,Rn) */
L_0C07CCFC: BLKS(0x0C07CCFCu);
	r1 = 0xC058060u; UPD(0x0C07CCFEu, 1);  /* 0C07CCFC mov.l @(disp,pc),Rn */
	r5 = 0x180000u; UPD(0x0C07CD00u, 1);  /* 0C07CCFE mov.l @(disp,pc),Rn */
	IF(0x0C07CD00u); { u32 t_ = r1; PR = 0x0C07CD04u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07CD04u); }  /* 0C07CD00 jsr @Rn */
L_0C07CD04: BLKS(0x0C07CD04u);
	r2 = R32(r14); UPD(0x0C07CD06u, 1);  /* 0C07CD04 mov.l @Rm,Rn */
	r12 = r0;  /* 0C07CD06 mov Rm,Rn */
	r6 = 0xC194D48u; UPD(0x0C07CD0Au, 2);  /* 0C07CD08 mov.l @(disp,pc),Rn */
	IF(0x0C07CD0Au); r2 <<= 2;  /* 0C07CD0A shll2 Rn */
	r9 = 0xC058030u; UPD(0x0C07CD0Eu, 2);  /* 0C07CD0C mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C07CD0E add Rm,Rn */
	r5 = R32(r2); UPD(0x0C07CD12u, 2);  /* 0C07CD10 mov.l @Rm,Rn */
	r4 = r11;  /* 0C07CD12 mov Rm,Rn */
	IF(0x0C07CD14u); { u32 t_ = r9; PR = 0x0C07CD18u; W32(r14 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07CD18u); }  /* 0C07CD14 jsr @Rn */
L_0C07CD18: BLKS(0x0C07CD18u);
	r12 -= r0;  /* 0C07CD18 sub Rm,Rn */
	r8 = 0x66666667u; UPD(0x0C07CD1Cu, 2);  /* 0C07CD1A mov.l @(disp,pc),Rn */
	IF(0x0C07CD1Cu); r12 <<= 2;  /* 0C07CD1C shll2 Rn */
	{ s64 r_ = (s64)(s32)r12 * (s64)(s32)r8; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C07CD1E dmuls.l Rm,Rn */
	r3 = R32(r14 + 0x4u); UPD(0x0C07CD22u, 4);  /* 0C07CD20 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C07CD22 mov Rm,Rn */
	IF(0x0C07CD24u); r5 = MACH;  /* 0C07CD24 sts mach,Rn */
	IF(0x0C07CD26u); T = r5 & 1; r5 = (u32)((s32)r5 >> 1);  /* 0C07CD26 shar Rn */
	IF(0x0C07CD28u); T = r12 >> 31; r12 <<= 1;  /* 0C07CD28 shll Rn */
	{ u32 a_ = r12, t_ = a_ - r12, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r12 = r_; }  /* 0C07CD2A subc Rm,Rn */
	r10 = 0xB4u; UPD(0x0C07CD2Eu, 6);  /* 0C07CD2C mov.w @(disp,pc),Rn */
	r5 -= r12;  /* 0C07CD2E sub Rm,Rn */
	r12 = R32(r3 + 0x24u); UPD(0x0C07CD32u, 2);  /* 0C07CD30 mov.l @(disp,Rm),Rn */
	IF(0x0C07CD32u); MACL = r13 * r10;  /* 0C07CD32 mul.l Rm,Rn */
	r7 = 0xC058030u; UPD(0x0C07CD36u, 3);  /* 0C07CD34 mov.l @(disp,pc),Rn */
	r12 += r5;  /* 0C07CD36 add Rm,Rn */
	r0 = 0xFFFF0000u; UPD(0x0C07CD3Au, 2);  /* 0C07CD38 mov.l @(disp,pc),Rn */
	IF(0x0C07CD3Au); r10 = MACL;  /* 0C07CD3A sts macl,Rn */
	r5 = 0x180000u; UPD(0x0C07CD3Eu, 2);  /* 0C07CD3C mov.l @(disp,pc),Rn */
	IF(0x0C07CD3Eu); { u32 t_ = r7; PR = 0x0C07CD42u; r12 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07CD42u); }  /* 0C07CD3E jsr @Rn */
L_0C07CD42: BLKS(0x0C07CD42u);
	r4 = R32(r14 + 0x4u); UPD(0x0C07CD44u, 1);  /* 0C07CD42 mov.l @(disp,Rm),Rn */
	r6 = 0xC058060u; UPD(0x0C07CD46u, 1);  /* 0C07CD44 mov.l @(disp,pc),Rn */
	r9 = R32(r4 + 0x28u); UPD(0x0C07CD48u, 1);  /* 0C07CD46 mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C07CD4Au, 1);  /* 0C07CD48 mov.l @(disp,Rm),Rn */
	r9 += r0;  /* 0C07CD4A add Rm,Rn */
	r5 = R32(r1); UPD(0x0C07CD4Eu, 2);  /* 0C07CD4C mov.l @Rm,Rn */
	r8 = 0xC7C1554u; UPD(0x0C07CD50u, 1);  /* 0C07CD4E mov.l @(disp,pc),Rn */
	IF(0x0C07CD50u); { u32 t_ = r6; PR = 0x0C07CD54u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07CD54u); }  /* 0C07CD50 jsr @Rn */
L_0C07CD54: BLKS(0x0C07CD54u);
	r2 = 0x28000u; UPD(0x0C07CD56u, 1);  /* 0C07CD54 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C07CD56 add Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07CD58 add #imm,Rn */
	W32(r15, r2); UPD(0x0C07CD5Cu, 3);  /* 0C07CD5A mov.l Rm,@Rn */
	r5 = r12;  /* 0C07CD5C mov Rm,Rn */
	r6 = r9;  /* 0C07CD5E mov Rm,Rn */
	r7 = r11;  /* 0C07CD60 mov Rm,Rn */
	IF(0x0C07CD62u); { u32 t_ = r8; PR = 0x0C07CD66u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C0A8E70, 0x0C0A8E70u, 0x0C07CD66u); }  /* 0C07CD62 jsr @Rn */
L_0C07CD66: BLKS(0x0C07CD66u);
	r3 = R32(r14); UPD(0x0C07CD68u, 1);  /* 0C07CD66 mov.l @Rm,Rn */
	r7 = 0x1u;  /* 0C07CD68 mov #imm,Rn */
	r3 += 0x1u;  /* 0C07CD6A add #imm,Rn */
	r9 = (u32)(s32)(s16)r3;  /* 0C07CD6C exts.w Rm,Rn */
	W32(r14, r9); UPD(0x0C07CD70u, 4);  /* 0C07CD6E mov.l Rm,@Rn */
	r12 = R32(r14); UPD(0x0C07CD72u, 1);  /* 0C07CD70 mov.l @Rm,Rn */
	T = (s32)r12 > (s32)r7;  /* 0C07CD72 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07CCFCu, 4); goto L_0C07CCFC; } goto L_0C07CD78; }  /* 0C07CD74 bf/s */
L_0C07CD78: BLKS(0x0C07CD78u);
	r9 = 0x100u; UPD(0x0C07CD7Au, 2);  /* 0C07CD78 mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C07CD7A add Rm,Rn */
	r11 = (u32)(s32)(s16)r9;  /* 0C07CD7C exts.w Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C07CD80u, 3);  /* 0C07CD7E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07CD80 mov Rm,Rn */
	r9 += r10;  /* 0C07CD82 add Rm,Rn */
	r12 = 0xC058060u; UPD(0x0C07CD86u, 3);  /* 0C07CD84 mov.l @(disp,pc),Rn */
	r10 = 0x80000u; UPD(0x0C07CD88u, 1);  /* 0C07CD86 mov.l @(disp,pc),Rn */
	r8 = 0xC058030u; UPD(0x0C07CD8Au, 1);  /* 0C07CD88 mov.l @(disp,pc),Rn */
	IF(0x0C07CD8Au); { u32 t_ = r12; PR = 0x0C07CD8Eu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07CD8Eu); }  /* 0C07CD8A jsr @Rn */
L_0C07CD8E: BLKS(0x0C07CD8Eu);
	r12 = R32(r9 + 0x24u); UPD(0x0C07CD90u, 1);  /* 0C07CD8E mov.l @(disp,Rm),Rn */
	r5 = r10;  /* 0C07CD90 mov Rm,Rn */
	r4 = r11;  /* 0C07CD92 mov Rm,Rn */
	r10 = 0xC050D70u; UPD(0x0C07CD96u, 3);  /* 0C07CD94 mov.l @(disp,pc),Rn */
	IF(0x0C07CD96u); { u32 t_ = r8; PR = 0x0C07CD9Au; r12 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07CD9Au); }  /* 0C07CD96 jsr @Rn */
L_0C07CD9A: BLKS(0x0C07CD9Au);
	r8 = R32(r9 + 0x28u); UPD(0x0C07CD9Cu, 1);  /* 0C07CD9A mov.l @(disp,Rm),Rn */
	r4 = 0xFu;  /* 0C07CD9C mov #imm,Rn */
	IF(0x0C07CD9Eu); { u32 t_ = r10; PR = 0x0C07CDA2u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C07CDA2u); }  /* 0C07CD9E jsr @Rn */
L_0C07CDA2: BLKS(0x0C07CDA2u);
	r0 += r11;  /* 0C07CDA2 add Rm,Rn */
	r0 += 0xFFFFFFF8u;  /* 0C07CDA4 add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C07CDA6 exts.w Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07CDAAu, 4);  /* 0C07CDA8 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C07CDAA add #imm,Rn */
	IF(0x0C07CDACu); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07CDAEu, 2);  /* 0C07CDAC mov.b @(r0,Rm),Rn */
	r0 = r4 & 0xFF;  /* 0C07CDAE extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C07CDB2u, 2);  /* 0C07CDB0 mov.l Rm,@Rn */
	r4 = r11;  /* 0C07CDB2 mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C07CDB6u, 2);  /* 0C07CDB4 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C07CDB6 mov Rm,Rn */
	IF(0x0C07CDB8u); r2 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07CDBAu, 2);  /* 0C07CDB8 mov.b @(r0,Rm),Rn */
	r10 = r2 & 0xFF;  /* 0C07CDBA extu.b Rm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C07CDBEu, 2);  /* 0C07CDBC mov.l Rm,@(disp,Rn) */
	r3 = 0xC058060u; UPD(0x0C07CDC0u, 1);  /* 0C07CDBE mov.l @(disp,pc),Rn */
	r10 = 0x8000u; UPD(0x0C07CDC2u, 1);  /* 0C07CDC0 mov.l @(disp,pc),Rn */
	IF(0x0C07CDC2u); { u32 t_ = r3; PR = 0x0C07CDC6u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07CDC6u); }  /* 0C07CDC2 jsr @Rn */
L_0C07CDC6: BLKS(0x0C07CDC6u);
	r5 = 0x4000u; UPD(0x0C07CDC8u, 1);  /* 0C07CDC6 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C07CDC8 mov Rm,Rn */
	r5 += r0;  /* 0C07CDCA add Rm,Rn */
	r7 = 0xC058030u; UPD(0x0C07CDCEu, 3);  /* 0C07CDCC mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C07CDD0u, 1);  /* 0C07CDCE mov.l Rm,@(disp,Rn) */
	IF(0x0C07CDD0u); { u32 t_ = r7; PR = 0x0C07CDD4u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07CDD4u); }  /* 0C07CDD0 jsr @Rn */
L_0C07CDD4: BLKS(0x0C07CDD4u);
	r4 = 0x808080u; UPD(0x0C07CDD6u, 1);  /* 0C07CDD4 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C07CDD6 mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C07CDDAu, 2);  /* 0C07CDD8 mov.l Rm,@(disp,Rn) */
	r6 = r12;  /* 0C07CDDA mov Rm,Rn */
	W32(r15 + 0x10u, r4); UPD(0x0C07CDDEu, 2);  /* 0C07CDDC mov.l Rm,@(disp,Rn) */
	r7 = r8;  /* 0C07CDDE mov Rm,Rn */
	r11 = 0xC0ACA40u; UPD(0x0C07CDE2u, 2);  /* 0C07CDE0 mov.l @(disp,pc),Rn */
	IF(0x0C07CDE2u); { u32 t_ = r11; PR = 0x0C07CDE6u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C07CDE6u); }  /* 0C07CDE2 jsr @Rn */
L_0C07CDE6: BLKS(0x0C07CDE6u);
	r4 = r13;  /* 0C07CDE6 mov Rm,Rn */
	r13 = 0xC0580D0u; UPD(0x0C07CDEAu, 2);  /* 0C07CDE8 mov.l @(disp,pc),Rn */
	IF(0x0C07CDEAu); { u32 t_ = r13; PR = 0x0C07CDEEu; r15 += 0x14u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C07CDEEu); }  /* 0C07CDEA jsr @Rn */
L_0C07CDEE: BLKS(0x0C07CDEEu);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C07CCA8u, 3); goto L_0C07CCA8; }  /* 0C07CDEE bra */
L_0C07CE50: BLKS(0x0C07CE50u);
	r9 = 0xC058130u; UPD(0x0C07CE52u, 1);  /* 0C07CE50 mov.l @(disp,pc),Rn */
	r12 = 0xC057430u; UPD(0x0C07CE54u, 1);  /* 0C07CE52 mov.l @(disp,pc),Rn */
	IF(0x0C07CE54u); { u32 t_ = r9; PR = 0x0C07CE58u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C07CE58u); }  /* 0C07CE54 jsr @Rn */
L_0C07CE58: BLKS(0x0C07CE58u);
	r4 = r13;  /* 0C07CE58 mov Rm,Rn */
	r11 = 0x86u; UPD(0x0C07CE5Cu, 2);  /* 0C07CE5A mov.w @(disp,pc),Rn */
	IF(0x0C07CE5Cu); { u32 t_ = r12; PR = 0x0C07CE60u; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C07CE60u); }  /* 0C07CE5C jsr @Rn */
L_0C07CE60: BLKS(0x0C07CE60u);
	r0 = r8;  /* 0C07CE60 mov Rm,Rn */
	IF(0x0C07CE62u); r7 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C07CE64u, 2);  /* 0C07CE62 mov.w @(r0,Rm),Rn */
	r10 = 0x3Fu;  /* 0C07CE64 mov #imm,Rn */
	r7 += 0x4u;  /* 0C07CE66 add #imm,Rn */
	IF(0x0C07CE68u); r7 >>= 2;  /* 0C07CE68 shlr2 Rn */
	r6 = 0xC0A0380u; UPD(0x0C07CE6Cu, 4);  /* 0C07CE6A mov.l @(disp,pc),Rn */
	IF(0x0C07CE6Cu); T = r7 & 1; r7 >>= 1;  /* 0C07CE6C shlr Rn */
	r7 &= r10;  /* 0C07CE6E and Rm,Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C07CE72u, 3);  /* 0C07CE70 mov.l Rm,@(disp,Rn) */
	IF(0x0C07CE72u); { u32 t_ = r6; PR = 0x0C07CE76u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C07CE76u); }  /* 0C07CE72 jsr @Rn */
L_0C07CE76: BLKS(0x0C07CE76u);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C07CCA0u, 3); goto L_0C07CCA0; }  /* 0C07CE76 bra */
L_0C07CE80: BLKS(0x0C07CE80u);
	r0 = 0xB4u; UPD(0x0C07CE82u, 1);  /* 0C07CE80 mov.w @(disp,pc),Rn */
	IF(0x0C07CE82u); MACL = r13 * r0;  /* 0C07CE82 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C07CE86u, 3);  /* 0C07CE84 mov.l @(disp,pc),Rn */
	IF(0x0C07CE86u); r0 = MACL;  /* 0C07CE86 sts macl,Rn */
	IF(0x0C07CE88u); W32(r0 + r3, r2); UPD(0x0C07CE8Au, 2);  /* 0C07CE88 mov.l Rm,@(r0,Rn) */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C07CCA8u, 3); goto L_0C07CCA8; }  /* 0C07CE8A bra */
}

/* FUN_0c07ceb0 */
void f_0C07CEB0(sh3_t *c)
{
	LOCALS;
L_0C07CEB0: BLKS(0x0C07CEB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07CEB2u, 1);  /* 0C07CEB0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07CEB4u, 1);  /* 0C07CEB2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C07CEB4 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07CEB8u, 2);  /* 0C07CEB6 mov.l Rm,@-Rn */
	r4 = r8;  /* 0C07CEB8 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07CEBCu, 2);  /* 0C07CEBA mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07CEBEu, 1);  /* 0C07CEBC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07CEC0u, 1);  /* 0C07CEBE mov.l Rm,@-Rn */
	r9 = 0xC0A05D0u; UPD(0x0C07CEC2u, 1);  /* 0C07CEC0 mov.l @(disp,pc),Rn */
	IF(0x0C07CEC2u); r15 -= 4; W32(r15, PR); UPD(0x0C07CEC4u, 1);  /* 0C07CEC2 sts.l pr,@-Rn */
	IF(0x0C07CEC4u); { u32 t_ = r9; PR = 0x0C07CEC8u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C07CEC8u); }  /* 0C07CEC4 jsr @Rn */
L_0C07CEC8: BLKS(0x0C07CEC8u);
	IF(0x0C07CEC8u); T = (s32)r0 >= 0;  /* 0C07CEC8 cmp/pz Rn */
	if (T) { UPD(0x0C07CED2u, 4); goto L_0C07CED2; }  /* 0C07CECA bt */
L_0C07CECC: BLKS(0x0C07CECCu);
	r2 = 0x0u;  /* 0C07CECC mov #imm,Rn */
	{ IF(0x0C07CED0u); ; /* slot nop */ UPD(0x0C07D040u, 4); goto L_0C07D040; }  /* 0C07CECE bra */
L_0C07CED2: BLKS(0x0C07CED2u);
	r3 = 0xB4u; UPD(0x0C07CED4u, 1);  /* 0C07CED2 mov.w @(disp,pc),Rn */
	IF(0x0C07CED4u); MACL = r8 * r3;  /* 0C07CED4 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C07CED8u, 3);  /* 0C07CED6 mov.l @(disp,pc),Rn */
	IF(0x0C07CED8u); r10 = MACL;  /* 0C07CED8 sts macl,Rn */
	IF(0x0C07CEDAu); MACL = r0 * r3;  /* 0C07CEDA mul.l Rm,Rn */
	r10 += r4;  /* 0C07CEDC add Rm,Rn */
	r5 = R32(r10 + 0x2Cu); UPD(0x0C07CEE0u, 5);  /* 0C07CEDE mov.l @(disp,Rm),Rn */
	IF(0x0C07CEE0u); r9 = MACL;  /* 0C07CEE0 sts macl,Rn */
	r9 += r4;  /* 0C07CEE2 add Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C07CEE6u, 3);  /* 0C07CEE4 mov.l @(disp,Rm),Rn */
	r6 = R32(r10); UPD(0x0C07CEE8u, 1);  /* 0C07CEE6 mov.l @Rm,Rn */
	r4 += r5;  /* 0C07CEE8 add Rm,Rn */
	r7 = R32(r9); UPD(0x0C07CEECu, 2);  /* 0C07CEEA mov.l @Rm,Rn */
	r3 = 0x100u; UPD(0x0C07CEEEu, 1);  /* 0C07CEEC mov.w @(disp,pc),Rn */
	r11 = 0xFFFFFEFFu; UPD(0x0C07CEF0u, 1);  /* 0C07CEEE mov.w @(disp,pc),Rn */
	r7 &= r3;  /* 0C07CEF0 and Rm,Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C07CEF4u, 2);  /* 0C07CEF2 mov.l @(disp,Rm),Rn */
	r6 &= r11;  /* 0C07CEF4 and Rm,Rn */
	r12 = R32(r10 + 0x30u); UPD(0x0C07CEF8u, 2);  /* 0C07CEF6 mov.l @(disp,Rm),Rn */
	r6 |= r7;  /* 0C07CEF8 or Rm,Rn */
	r5 += r12;  /* 0C07CEFA add Rm,Rn */
	W32(r10 + 0x24u, r4); UPD(0x0C07CEFEu, 3);  /* 0C07CEFC mov.l Rm,@(disp,Rn) */
	T = (r6 & r3) == 0;  /* 0C07CEFE tst Rm,Rn */
	W32(r10 + 0x28u, r5); UPD(0x0C07CF02u, 2);  /* 0C07CF00 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r10, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C07CF60u, 3); goto L_0C07CF60; } UPD(0x0C07CF06u, 1); goto L_0C07CF06; }  /* 0C07CF02 bf/s */
L_0C07CF06: BLKS(0x0C07CF06u);
	r7 = 0x86u; UPD(0x0C07CF08u, 1);  /* 0C07CF06 mov.w @(disp,pc),Rn */
	r7 += r10;  /* 0C07CF08 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r7); UPD(0x0C07CF0Cu, 2);  /* 0C07CF0A mov.w @Rm,Rn */
	r2 = (u32)(s32)(s16)r1;  /* 0C07CF0C exts.w Rm,Rn */
	T = r2 == r3;  /* 0C07CF0E cmp/eq Rm,Rn */
	if (T) { UPD(0x0C07CF1Au, 5); goto L_0C07CF1A; }  /* 0C07CF10 bt */
L_0C07CF12: BLKS(0x0C07CF12u);
	T = (s32)r2 > (s32)r3;  /* 0C07CF12 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07CF50u, 4); goto L_0C07CF50; }  /* 0C07CF14 bf */
L_0C07CF16: BLKS(0x0C07CF16u);
	r1 += 0xFFFFFFFCu;  /* 0C07CF16 add #imm,Rn */
	UPD(0x0C07CF18u, 1);
L_0C07CF18: BLKS(0x0C07CF18u);
	W16(r7, r1); UPD(0x0C07CF1Au, 1);  /* 0C07CF18 mov.w Rm,@Rn */
L_0C07CF1A: BLKS(0x0C07CF1Au);
	r9 = 0xB4u; UPD(0x0C07CF1Cu, 1);  /* 0C07CF1A mov.w @(disp,pc),Rn */
	r4 = r8;  /* 0C07CF1C mov Rm,Rn */
	IF(0x0C07CF1Eu); MACL = r8 * r9;  /* 0C07CF1E mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C07CF22u, 4);  /* 0C07CF20 mov.l @(disp,pc),Rn */
	IF(0x0C07CF22u); r10 = MACL;  /* 0C07CF22 sts macl,Rn */
	r10 += r7;  /* 0C07CF24 add Rm,Rn */
	r6 = 0x86u; UPD(0x0C07CF28u, 3);  /* 0C07CF26 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C07CF28 mov Rm,Rn */
	IF(0x0C07CF2Au); r2 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C07CF2Cu, 2);  /* 0C07CF2A mov.w @(r0,Rm),Rn */
	r2 += 0xFFFFFF84u;  /* 0C07CF2C add #imm,Rn */
	IF(0x0C07CF2Eu); r2 >>= 2;  /* 0C07CF2E shlr2 Rn */
	IF(0x0C07CF30u); T = r2 & 1; r2 >>= 1;  /* 0C07CF30 shlr Rn */
	r0 = 0x3Fu;  /* 0C07CF32 mov #imm,Rn */
	r8 = 0xC0A0380u; UPD(0x0C07CF36u, 5);  /* 0C07CF34 mov.l @(disp,pc),Rn */
	r2 &= r0;  /* 0C07CF36 and Rm,Rn */
	IF(0x0C07CF38u); { u32 t_ = r8; PR = 0x0C07CF3Cu; W32(r10 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C07CF3Cu); }  /* 0C07CF38 jsr @Rn */
L_0C07CF3C: BLKS(0x0C07CF3Cu);
	r0 = 0x0u;  /* 0C07CF3C mov #imm,Rn */
	UPD(0x0C07CF3Eu, 1);
L_0C07CF3E: BLKS(0x0C07CF3Eu);
	r15 = r14;  /* 0C07CF3E mov Rm,Rn */
	IF(0x0C07CF40u); PR = R32(r15); r15 += 4; UPD(0x0C07CF42u, 2);  /* 0C07CF40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07CF44u, 1);  /* 0C07CF42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07CF46u, 1);  /* 0C07CF44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07CF48u, 1);  /* 0C07CF46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07CF4Au, 1);  /* 0C07CF48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07CF4Cu, 1);  /* 0C07CF4A mov.l @Rm+,Rn */
	IF(0x0C07CF4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07CF4C rts */
L_0C07CF50: BLKS(0x0C07CF50u);
	{ r1 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07CF18u, 3); goto L_0C07CF18; }  /* 0C07CF50 bra */
L_0C07CF60: BLKS(0x0C07CF60u);
	r12 = 0x9Cu; UPD(0x0C07CF62u, 1);  /* 0C07CF60 mov.w @(disp,pc),Rn */
	r12 += r10;  /* 0C07CF62 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r12); UPD(0x0C07CF66u, 2);  /* 0C07CF64 mov.b @Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C07CF66 tst Rm,Rn */
	{ u32 c_ = T; r11 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07CFE0u, 4); goto L_0C07CFE0; } goto L_0C07CF6C; }  /* 0C07CF68 bt/s */
L_0C07CF6C: BLKS(0x0C07CF6Cu);
	r11 += 0x1u;  /* 0C07CF6C add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C07CF70u, 3);  /* 0C07CF6E mov.b @Rm,Rn */
	T = r0 == 0x8u;  /* 0C07CF70 cmp/eq #imm,r0 */
	{ u32 c_ = T; r1 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07CF80u, 4); goto L_0C07CF80; } goto L_0C07CF76; }  /* 0C07CF72 bt/s */
L_0C07CF76: BLKS(0x0C07CF76u);
	r1 += 0x1u;  /* 0C07CF76 add #imm,Rn */
	UPD(0x0C07CF78u, 2);
L_0C07CF78: BLKS(0x0C07CF78u);
	W8(r11, r1); UPD(0x0C07CF7Au, 1);  /* 0C07CF78 mov.b Rm,@Rn */
L_0C07CF7A: BLKS(0x0C07CF7Au);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C07CF3Eu, 3); goto L_0C07CF3E; }  /* 0C07CF7A bra */
L_0C07CF80: BLKS(0x0C07CF80u);
	r7 = 0xA9u; UPD(0x0C07CF82u, 1);  /* 0C07CF80 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C07CF82 mov Rm,Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C07CF86u, 2);  /* 0C07CF84 mov.l @(disp,pc),Rn */
	IF(0x0C07CF86u); r2 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C07CF88u, 1);  /* 0C07CF86 mov.b @(r0,Rm),Rn */
	IF(0x0C07CF88u); { u32 t_ = r9; PR = 0x0C07CF8Cu; r6 = r2 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C07CF8Cu); }  /* 0C07CF88 jsr @Rn */
L_0C07CF8C: BLKS(0x0C07CF8Cu);
	T = (r0 & r0) == 0;  /* 0C07CF8C tst Rm,Rn */
	if (!T) { UPD(0x0C07CFA0u, 4); goto L_0C07CFA0; }  /* 0C07CF8E bf */
L_0C07CF90: BLKS(0x0C07CF90u);
	r6 = (u32)(s32)(s8)R8(r12); UPD(0x0C07CF92u, 1);  /* 0C07CF90 mov.b @Rm,Rn */
	r1 = 0x0u;  /* 0C07CF92 mov #imm,Rn */
	r6 += 0xFFFFFFFFu;  /* 0C07CF94 add #imm,Rn */
	{ W8(r12, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C07CF78u, 5); goto L_0C07CF78; }  /* 0C07CF96 bra */
L_0C07CFA0: BLKS(0x0C07CFA0u);
	r4 = 0x86u; UPD(0x0C07CFA2u, 1);  /* 0C07CFA0 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C07CFA2 mov Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C07CFA6u, 2);  /* 0C07CFA4 mov.l @(disp,pc),Rn */
	IF(0x0C07CFA6u); r9 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C07CFA8u, 1);  /* 0C07CFA6 mov.w @(r0,Rm),Rn */
	r5 = 0x133333u; UPD(0x0C07CFAAu, 1);  /* 0C07CFA8 mov.l @(disp,pc),Rn */
	IF(0x0C07CFAAu); { u32 t_ = r8; PR = 0x0C07CFAEu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07CFAEu); }  /* 0C07CFAA jsr @Rn */
L_0C07CFAE: BLKS(0x0C07CFAEu);
	r8 = R32(r10 + 0x24u); UPD(0x0C07CFB0u, 1);  /* 0C07CFAE mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C07CFB0 add Rm,Rn */
	r5 = 0xFFFF0000u; UPD(0x0C07CFB4u, 2);  /* 0C07CFB2 mov.l @(disp,pc),Rn */
	r0 = 0xC058030u; UPD(0x0C07CFB6u, 1);  /* 0C07CFB4 mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C07CFB6 add Rm,Rn */
	r5 = 0x180000u; UPD(0x0C07CFBAu, 2);  /* 0C07CFB8 mov.l @(disp,pc),Rn */
	IF(0x0C07CFBAu); { u32 t_ = r0; PR = 0x0C07CFBEu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07CFBEu); }  /* 0C07CFBA jsr @Rn */
L_0C07CFBE: BLKS(0x0C07CFBEu);
	r6 = R32(r10 + 0x28u); UPD(0x0C07CFC0u, 1);  /* 0C07CFBE mov.l @(disp,Rm),Rn */
	r5 = r8;  /* 0C07CFC0 mov Rm,Rn */
	r6 += r0;  /* 0C07CFC2 add Rm,Rn */
	r0 = 0x30000u; UPD(0x0C07CFC6u, 3);  /* 0C07CFC4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07CFC6 add #imm,Rn */
	r8 = 0xC7C17D0u; UPD(0x0C07CFCAu, 2);  /* 0C07CFC8 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C07CFCA mov #imm,Rn */
	W32(r15, r0); UPD(0x0C07CFCEu, 2);  /* 0C07CFCC mov.l Rm,@Rn */
	IF(0x0C07CFCEu); { u32 t_ = r8; PR = 0x0C07CFD2u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C17D0, 0x0C7C17D0u, 0x0C07CFD2u); }  /* 0C07CFCE jsr @Rn */
L_0C07CFD2: BLKS(0x0C07CFD2u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07CF90u, 3); goto L_0C07CF90; }  /* 0C07CFD2 bra */
L_0C07CFE0: BLKS(0x0C07CFE0u);
	r11 = 0xC058130u; UPD(0x0C07CFE2u, 1);  /* 0C07CFE0 mov.l @(disp,pc),Rn */
	r9 = 0xC057430u; UPD(0x0C07CFE4u, 1);  /* 0C07CFE2 mov.l @(disp,pc),Rn */
	IF(0x0C07CFE4u); { u32 t_ = r11; PR = 0x0C07CFE8u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C07CFE8u); }  /* 0C07CFE4 jsr @Rn */
L_0C07CFE8: BLKS(0x0C07CFE8u);
	r5 = 0x4u;  /* 0C07CFE8 mov #imm,Rn */
	IF(0x0C07CFEAu); { u32 t_ = r9; PR = 0x0C07CFEEu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C07CFEEu); }  /* 0C07CFEA jsr @Rn */
L_0C07CFEE: BLKS(0x0C07CFEEu);
	r3 = 0x86u; UPD(0x0C07CFF0u, 1);  /* 0C07CFEE mov.w @(disp,pc),Rn */
	r5 = 0x7Fu;  /* 0C07CFF0 mov #imm,Rn */
	r3 += r10;  /* 0C07CFF2 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C07CFF6u, 3);  /* 0C07CFF4 mov.w @Rm,Rn */
	T = (s32)r0 > (s32)r5;  /* 0C07CFF6 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C07D000u, 4); goto L_0C07D000; }  /* 0C07CFF8 bt */
L_0C07CFFA: BLKS(0x0C07CFFAu);
	r4 = 0x80u; UPD(0x0C07CFFCu, 1);  /* 0C07CFFA mov.w @(disp,pc),Rn */
	W16(r3, r4); UPD(0x0C07CFFEu, 1);  /* 0C07CFFC mov.w Rm,@Rn */
	r0 = r4;  /* 0C07CFFE mov Rm,Rn */
	UPD(0x0C07D000u, 1);
L_0C07D000: BLKS(0x0C07D000u);
	r7 = 0x180u; UPD(0x0C07D002u, 1);  /* 0C07D000 mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C07D002 exts.w Rm,Rn */
	r2 = (u32)(s32)(s16)r7;  /* 0C07D004 exts.w Rm,Rn */
	T = (s32)r6 > (s32)r2;  /* 0C07D006 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C07D012u, 6); goto L_0C07D012; } goto L_0C07D00C; }  /* 0C07D008 bf/s */
L_0C07D00C: BLKS(0x0C07D00Cu);
	W16(r3, r2); UPD(0x0C07D00Eu, 2);  /* 0C07D00C mov.w Rm,@Rn */
	r0 = r7;  /* 0C07D00E mov Rm,Rn */
	r0 = (u32)(s32)(s16)r0;  /* 0C07D010 exts.w Rm,Rn */
	UPD(0x0C07D012u, 2);
L_0C07D012: BLKS(0x0C07D012u);
	r0 += 0xFFFFFF84u;  /* 0C07D012 add #imm,Rn */
	r3 = 0xC0A0380u; UPD(0x0C07D016u, 2);  /* 0C07D014 mov.l @(disp,pc),Rn */
	IF(0x0C07D016u); r0 >>= 2;  /* 0C07D016 shlr2 Rn */
	IF(0x0C07D018u); T = r0 & 1; r0 >>= 1;  /* 0C07D018 shlr Rn */
	r0 &= 0x3Fu;  /* 0C07D01A and #imm,r0 */
	r4 = r8;  /* 0C07D01C mov Rm,Rn */
	IF(0x0C07D01Eu); { u32 t_ = r3; PR = 0x0C07D022u; W32(r10 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 6); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C07D022u); }  /* 0C07D01E jsr @Rn */
L_0C07D022: BLKS(0x0C07D022u);
	r4 = r8;  /* 0C07D022 mov Rm,Rn */
	r8 = 0xC0A9E40u; UPD(0x0C07D026u, 2);  /* 0C07D024 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C07D026 mov #imm,Rn */
	IF(0x0C07D028u); { u32 t_ = r8; PR = 0x0C07D02Cu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07D02Cu); }  /* 0C07D028 jsr @Rn */
L_0C07D02C: BLKS(0x0C07D02Cu);
	T = (r0 & r0) == 0;  /* 0C07D02C tst Rm,Rn */
	if (T) { UPD(0x0C07CF7Au, 4); goto L_0C07CF7A; }  /* 0C07D02E bt */
L_0C07D030: BLKS(0x0C07D030u);
	r10 = 0x3u;  /* 0C07D030 mov #imm,Rn */
	{ W8(r12, r10); /* slot mov.b Rm,@Rn */ UPD(0x0C07CF3Cu, 4); goto L_0C07CF3C; }  /* 0C07D032 bra */
L_0C07D040: BLKS(0x0C07D040u);
	r0 = 0xB4u; UPD(0x0C07D042u, 1);  /* 0C07D040 mov.w @(disp,pc),Rn */
	IF(0x0C07D042u); MACL = r8 * r0;  /* 0C07D042 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C07D046u, 3);  /* 0C07D044 mov.l @(disp,pc),Rn */
	IF(0x0C07D046u); r0 = MACL;  /* 0C07D046 sts macl,Rn */
	IF(0x0C07D048u); W32(r0 + r3, r2); UPD(0x0C07D04Au, 2);  /* 0C07D048 mov.l Rm,@(r0,Rn) */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C07CF3Eu, 3); goto L_0C07CF3E; }  /* 0C07D04A bra */
}

/* FUN_0c07d0a0 */
void f_0C07D0A0(sh3_t *c)
{
	LOCALS;
L_0C07D0A0: BLKS(0x0C07D0A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07D0A2u, 1);  /* 0C07D0A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07D0A4u, 1);  /* 0C07D0A2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07D0A6u, 1);  /* 0C07D0A4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07D0A8u, 1);  /* 0C07D0A6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07D0A8 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D0ACu, 2);  /* 0C07D0AA mov.l Rm,@-Rn */
	r4 = r10;  /* 0C07D0AC mov Rm,Rn */
	r8 = 0xC0A05D0u; UPD(0x0C07D0B0u, 2);  /* 0C07D0AE mov.l @(disp,pc),Rn */
	IF(0x0C07D0B0u); r15 -= 4; W32(r15, PR); UPD(0x0C07D0B2u, 1);  /* 0C07D0B0 sts.l pr,@-Rn */
	IF(0x0C07D0B2u); { u32 t_ = r8; PR = 0x0C07D0B6u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C07D0B6u); }  /* 0C07D0B2 jsr @Rn */
L_0C07D0B6: BLKS(0x0C07D0B6u);
	IF(0x0C07D0B6u); T = (s32)r0 >= 0;  /* 0C07D0B6 cmp/pz Rn */
	{ u32 c_ = T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07D0C0u, 4); goto L_0C07D0C0; } goto L_0C07D0BC; }  /* 0C07D0B8 bt/s */
L_0C07D0BC: BLKS(0x0C07D0BCu);
	{ IF(0x0C07D0BEu); ; /* slot nop */ UPD(0x0C07D1D0u, 4); goto L_0C07D1D0; }  /* 0C07D0BC bra */
L_0C07D0C0: BLKS(0x0C07D0C0u);
	r2 = 0xB4u; UPD(0x0C07D0C2u, 1);  /* 0C07D0C0 mov.w @(disp,pc),Rn */
	IF(0x0C07D0C2u); MACL = r10 * r2;  /* 0C07D0C2 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C07D0C6u, 3);  /* 0C07D0C4 mov.l @(disp,pc),Rn */
	IF(0x0C07D0C6u); r8 = MACL;  /* 0C07D0C6 sts macl,Rn */
	IF(0x0C07D0C8u); MACL = r0 * r2;  /* 0C07D0C8 mul.l Rm,Rn */
	r8 += r4;  /* 0C07D0CA add Rm,Rn */
	r5 = R32(r8); UPD(0x0C07D0CEu, 5);  /* 0C07D0CC mov.l @Rm,Rn */
	IF(0x0C07D0CEu); r7 = MACL;  /* 0C07D0CE sts macl,Rn */
	r7 += r4;  /* 0C07D0D0 add Rm,Rn */
	r6 = R32(r7); UPD(0x0C07D0D4u, 3);  /* 0C07D0D2 mov.l @Rm,Rn */
	r4 = 0x100u; UPD(0x0C07D0D6u, 1);  /* 0C07D0D4 mov.w @(disp,pc),Rn */
	r9 = 0xFFFFFEFFu; UPD(0x0C07D0D8u, 1);  /* 0C07D0D6 mov.w @(disp,pc),Rn */
	r6 &= r4;  /* 0C07D0D8 and Rm,Rn */
	r3 = R32(r7 + 0x24u); UPD(0x0C07D0DCu, 2);  /* 0C07D0DA mov.l @(disp,Rm),Rn */
	r5 &= r9;  /* 0C07D0DC and Rm,Rn */
	r11 = R32(r7 + 0x28u); UPD(0x0C07D0E0u, 2);  /* 0C07D0DE mov.l @(disp,Rm),Rn */
	r5 |= r6;  /* 0C07D0E0 or Rm,Rn */
	r0 = R32(r8 + 0x2Cu); UPD(0x0C07D0E4u, 2);  /* 0C07D0E2 mov.l @(disp,Rm),Rn */
	T = (r5 & r4) == 0;  /* 0C07D0E4 tst Rm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C07D0E8u, 2);  /* 0C07D0E6 mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C07D0E8 add Rm,Rn */
	r11 += r1;  /* 0C07D0EA add Rm,Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C07D0EEu, 3);  /* 0C07D0EC mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r11); UPD(0x0C07D0F0u, 1);  /* 0C07D0EE mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r8, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C07D1A0u, 3); goto L_0C07D1A0; } UPD(0x0C07D0F4u, 1); goto L_0C07D0F4; }  /* 0C07D0F0 bf/s */
L_0C07D0F4: BLKS(0x0C07D0F4u);
	r9 = 0xC057600u; UPD(0x0C07D0F6u, 1);  /* 0C07D0F4 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07D0F6 mov Rm,Rn */
	IF(0x0C07D0F8u); { u32 t_ = r9; PR = 0x0C07D0FCu; r5 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057600, 0x0C057600u, 0x0C07D0FCu); }  /* 0C07D0F8 jsr @Rn */
L_0C07D0FC: BLKS(0x0C07D0FCu);
	r7 = 0x86u; UPD(0x0C07D0FEu, 1);  /* 0C07D0FC mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07D0FE mov Rm,Rn */
	IF(0x0C07D100u); r5 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C07D102u, 2);  /* 0C07D100 mov.w @(r0,Rm),Rn */
	r6 = 0x3Fu;  /* 0C07D102 mov #imm,Rn */
	r5 += 0x4u;  /* 0C07D104 add #imm,Rn */
	IF(0x0C07D106u); r5 >>= 2;  /* 0C07D106 shlr2 Rn */
	IF(0x0C07D108u); T = r5 & 1; r5 >>= 1;  /* 0C07D108 shlr Rn */
	r5 &= r6;  /* 0C07D10A and Rm,Rn */
	W32(r8 + 0xCu, r5); UPD(0x0C07D10Eu, 6);  /* 0C07D10C mov.l Rm,@(disp,Rn) */
	r8 = 0xC0A0380u; UPD(0x0C07D110u, 1);  /* 0C07D10E mov.l @(disp,pc),Rn */
	IF(0x0C07D110u); { u32 t_ = r8; PR = 0x0C07D114u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C07D114u); }  /* 0C07D110 jsr @Rn */
L_0C07D114: BLKS(0x0C07D114u);
	r1 = 0x0u;  /* 0C07D114 mov #imm,Rn */
	UPD(0x0C07D116u, 1);
L_0C07D116: BLKS(0x0C07D116u);
	r2 = (u32)(s32)(s16)r1;  /* 0C07D116 exts.w Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07D118 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07D130u, 5); goto L_0C07D130; } UPD(0x0C07D11Eu, 1); goto L_0C07D11E; }  /* 0C07D11A bf/s */
L_0C07D11E: BLKS(0x0C07D11Eu);
	r15 = r14;  /* 0C07D11E mov Rm,Rn */
	IF(0x0C07D120u); PR = R32(r15); r15 += 4; UPD(0x0C07D122u, 2);  /* 0C07D120 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07D124u, 1);  /* 0C07D122 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07D126u, 1);  /* 0C07D124 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07D128u, 1);  /* 0C07D126 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07D12Au, 1);  /* 0C07D128 mov.l @Rm+,Rn */
	IF(0x0C07D12Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07D12A rts */
L_0C07D130: BLKS(0x0C07D130u);
	r8 = 0xC0A9E40u; UPD(0x0C07D132u, 1);  /* 0C07D130 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07D132 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C07D134 mov #imm,Rn */
	IF(0x0C07D136u); { u32 t_ = r8; PR = 0x0C07D13Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C07D13Au); }  /* 0C07D136 jsr @Rn */
L_0C07D13A: BLKS(0x0C07D13Au);
	T = (r0 & r0) == 0;  /* 0C07D13A tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07D11Eu, 4); goto L_0C07D11E; } goto L_0C07D140; }  /* 0C07D13C bt/s */
L_0C07D140: BLKS(0x0C07D140u);
	r3 = 0xB4u; UPD(0x0C07D142u, 2);  /* 0C07D140 mov.w @(disp,pc),Rn */
	IF(0x0C07D142u); MACL = r10 * r3;  /* 0C07D142 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C07D146u, 3);  /* 0C07D144 mov.l @(disp,pc),Rn */
	IF(0x0C07D146u); r11 = MACL;  /* 0C07D146 sts macl,Rn */
	r11 += r7;  /* 0C07D148 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C07D14Cu, 3);  /* 0C07D14A mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C07D14C mov Rm,Rn */
	IF(0x0C07D14Eu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07D150u, 2);  /* 0C07D14E mov.b @(r0,Rm),Rn */
	r9 = 0xC0A9BB0u; UPD(0x0C07D152u, 1);  /* 0C07D150 mov.l @(disp,pc),Rn */
	r6 = r5 & 0xFF;  /* 0C07D152 extu.b Rm,Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C07D156u, 2);  /* 0C07D154 mov.l @(disp,Rm),Rn */
	IF(0x0C07D156u); { u32 t_ = r9; PR = 0x0C07D15Au; r5 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9BB0, 0x0C0A9BB0u, 0x0C07D15Au); }  /* 0C07D156 jsr @Rn */
L_0C07D15A: BLKS(0x0C07D15Au);
	T = (r0 & r0) == 0;  /* 0C07D15A tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07D11Eu, 4); goto L_0C07D11E; } goto L_0C07D160; }  /* 0C07D15C bt/s */
L_0C07D160: BLKS(0x0C07D160u);
	r2 = 0x86u; UPD(0x0C07D162u, 2);  /* 0C07D160 mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C07D162 mov Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C07D166u, 2);  /* 0C07D164 mov.l @(disp,pc),Rn */
	IF(0x0C07D166u); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07D168u, 1);  /* 0C07D166 mov.w @(r0,Rm),Rn */
	r5 = 0xCCCCCu; UPD(0x0C07D16Au, 1);  /* 0C07D168 mov.l @(disp,pc),Rn */
	IF(0x0C07D16Au); { u32 t_ = r8; PR = 0x0C07D16Eu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C07D16Eu); }  /* 0C07D16A jsr @Rn */
L_0C07D16E: BLKS(0x0C07D16Eu);
	r8 = R32(r11 + 0x24u); UPD(0x0C07D170u, 1);  /* 0C07D16E mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C07D170 add Rm,Rn */
	r4 = 0xFFFD0000u; UPD(0x0C07D174u, 2);  /* 0C07D172 mov.l @(disp,pc),Rn */
	r0 = 0xC058030u; UPD(0x0C07D176u, 1);  /* 0C07D174 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C07D176 add Rm,Rn */
	r5 = 0x100000u; UPD(0x0C07D17Au, 2);  /* 0C07D178 mov.l @(disp,pc),Rn */
	IF(0x0C07D17Au); { u32 t_ = r0; PR = 0x0C07D17Eu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C07D17Eu); }  /* 0C07D17A jsr @Rn */
L_0C07D17E: BLKS(0x0C07D17Eu);
	r6 = R32(r11 + 0x28u); UPD(0x0C07D180u, 1);  /* 0C07D17E mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07D180 add #imm,Rn */
	r6 += r0;  /* 0C07D182 add Rm,Rn */
	r11 = 0xC7C17D0u; UPD(0x0C07D186u, 3);  /* 0C07D184 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C07D186 mov #imm,Rn */
	r0 = 0x30000u; UPD(0x0C07D18Au, 2);  /* 0C07D188 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C07D18A mov Rm,Rn */
	W32(r15, r0); UPD(0x0C07D18Eu, 2);  /* 0C07D18C mov.l Rm,@Rn */
	IF(0x0C07D18Eu); { u32 t_ = r11; PR = 0x0C07D192u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C17D0, 0x0C7C17D0u, 0x0C07D192u); }  /* 0C07D18E jsr @Rn */
L_0C07D192: BLKS(0x0C07D192u);
	r4 = r10;  /* 0C07D192 mov Rm,Rn */
	r10 = 0xC0580D0u; UPD(0x0C07D196u, 2);  /* 0C07D194 mov.l @(disp,pc),Rn */
	IF(0x0C07D196u); { u32 t_ = r10; PR = 0x0C07D19Au; r15 += 0x4u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C07D19Au); }  /* 0C07D196 jsr @Rn */
L_0C07D19A: BLKS(0x0C07D19Au);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C07D11Eu, 3); goto L_0C07D11E; }  /* 0C07D19A bra */
L_0C07D1A0: BLKS(0x0C07D1A0u);
	r11 = 0xC058130u; UPD(0x0C07D1A2u, 1);  /* 0C07D1A0 mov.l @(disp,pc),Rn */
	r9 = 0xC057430u; UPD(0x0C07D1A4u, 1);  /* 0C07D1A2 mov.l @(disp,pc),Rn */
	IF(0x0C07D1A4u); { u32 t_ = r11; PR = 0x0C07D1A8u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C07D1A8u); }  /* 0C07D1A4 jsr @Rn */
L_0C07D1A8: BLKS(0x0C07D1A8u);
	r4 = r10;  /* 0C07D1A8 mov Rm,Rn */
	IF(0x0C07D1AAu); { u32 t_ = r9; PR = 0x0C07D1AEu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C07D1AEu); }  /* 0C07D1AA jsr @Rn */
L_0C07D1AE: BLKS(0x0C07D1AEu);
	r4 = 0x86u; UPD(0x0C07D1B0u, 1);  /* 0C07D1AE mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07D1B0 mov Rm,Rn */
	IF(0x0C07D1B2u); r3 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C07D1B4u, 2);  /* 0C07D1B2 mov.w @(r0,Rm),Rn */
	r3 += 0x4u;  /* 0C07D1B4 add #imm,Rn */
	IF(0x0C07D1B6u); r3 >>= 2;  /* 0C07D1B6 shlr2 Rn */
	r11 = 0xC0A0380u; UPD(0x0C07D1BAu, 3);  /* 0C07D1B8 mov.l @(disp,pc),Rn */
	r0 = 0x3Fu;  /* 0C07D1BA mov #imm,Rn */
	IF(0x0C07D1BCu); T = r3 & 1; r3 >>= 1;  /* 0C07D1BC shlr Rn */
	r3 &= r0;  /* 0C07D1BE and Rm,Rn */
	W32(r8 + 0xCu, r3); UPD(0x0C07D1C2u, 4);  /* 0C07D1C0 mov.l Rm,@(disp,Rn) */
	IF(0x0C07D1C2u); { u32 t_ = r11; PR = 0x0C07D1C6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C07D1C6u); }  /* 0C07D1C2 jsr @Rn */
L_0C07D1C6: BLKS(0x0C07D1C6u);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C07D116u, 3); goto L_0C07D116; }  /* 0C07D1C6 bra */
L_0C07D1D0: BLKS(0x0C07D1D0u);
	r0 = 0xB4u; UPD(0x0C07D1D2u, 1);  /* 0C07D1D0 mov.w @(disp,pc),Rn */
	IF(0x0C07D1D2u); MACL = r10 * r0;  /* 0C07D1D2 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C07D1D6u, 3);  /* 0C07D1D4 mov.l @(disp,pc),Rn */
	IF(0x0C07D1D6u); r0 = MACL;  /* 0C07D1D6 sts macl,Rn */
	IF(0x0C07D1D8u); W32(r0 + r3, r2); UPD(0x0C07D1DAu, 2);  /* 0C07D1D8 mov.l Rm,@(r0,Rn) */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C07D11Eu, 3); goto L_0C07D11E; }  /* 0C07D1DA bra */
}

void f_0C07D230(sh3_t *c)
{
	LOCALS;
L_0C07D230: BLKS(0x0C07D230u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07D232u, 1);  /* 0C07D230 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07D234u, 1);  /* 0C07D232 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07D236u, 1);  /* 0C07D234 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C07D236 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07D23Au, 2);  /* 0C07D238 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07D23Cu, 1);  /* 0C07D23A mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C07D23Eu, 1);  /* 0C07D23C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07D240u, 1);  /* 0C07D23E mov.l Rm,@-Rn */
	IF(0x0C07D240u); MACL = r9 * r3;  /* 0C07D240 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D244u, 3);  /* 0C07D242 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C07D246u, 1);  /* 0C07D244 mov.l @(disp,pc),Rn */
	IF(0x0C07D246u); r2 = MACL;  /* 0C07D246 sts macl,Rn */
	IF(0x0C07D248u); r15 -= 4; W32(r15, PR); UPD(0x0C07D24Au, 2);  /* 0C07D248 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07D24A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07D24Eu, 2);  /* 0C07D24C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07D24E add #imm,Rn */
	r0 = 0x5u;  /* 0C07D250 mov #imm,Rn */
	T = r2 > r0;  /* 0C07D252 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07D280u, 6); goto L_0C07D280; } goto L_0C07D258; }  /* 0C07D254 bt/s */
L_0C07D258: BLKS(0x0C07D258u);
	r0 = 0xC07D268u;  /* 0C07D258 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07D25A add Rm,Rn */
	IF(0x0C07D25Cu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07D25Eu, 4);  /* 0C07D25C mov.w @(r0,Rm),Rn */
	IF(0x0C07D25Eu); { u32 tv_ = (r4 + 0x0C07D262u); u32 t_ = PHYS(tv_); IF(0x0C07D260u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07D280u: goto L_0C07D280; case 0x0C07D340u: goto L_0C07D340; case 0x0C07D520u: goto L_0C07D520; case 0x0C07D5D0u: goto L_0C07D5D0; case 0x0C07D660u: goto L_0C07D660; default: JUMPD(tv_); } }  /* 0C07D25E braf Rn */
L_0C07D280: BLKS(0x0C07D280u);
	r10 = 0xC0A1700u; UPD(0x0C07D282u, 1);  /* 0C07D280 mov.l @(disp,pc),Rn */
	r8 = 0xC0A1590u; UPD(0x0C07D284u, 1);  /* 0C07D282 mov.l @(disp,pc),Rn */
	IF(0x0C07D284u); { u32 t_ = r10; PR = 0x0C07D288u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C07D288u); }  /* 0C07D284 jsr @Rn */
L_0C07D288: BLKS(0x0C07D288u);
	IF(0x0C07D288u); { u32 t_ = r8; PR = 0x0C07D28Cu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1590, 0x0C0A1590u, 0x0C07D28Cu); }  /* 0C07D288 jsr @Rn */
L_0C07D28C: BLKS(0x0C07D28Cu);
	r7 = 0xB4u; UPD(0x0C07D28Eu, 1);  /* 0C07D28C mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C07D28E mov Rm,Rn */
	IF(0x0C07D290u); MACL = r9 * r7;  /* 0C07D290 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C07D294u, 4);  /* 0C07D292 mov.l @(disp,pc),Rn */
	IF(0x0C07D294u); r8 = MACL;  /* 0C07D294 sts macl,Rn */
	r8 += r6;  /* 0C07D296 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C07D29Au, 3);  /* 0C07D298 mov.l @(disp,Rm),Rn */
	r5 = 0xC0A0380u; UPD(0x0C07D29Cu, 1);  /* 0C07D29A mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C07D29C add #imm,Rn */
	r0 &= 0x1Fu;  /* 0C07D29E and #imm,r0 */
	IF(0x0C07D2A0u); { u32 t_ = r5; PR = 0x0C07D2A4u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C07D2A4u); }  /* 0C07D2A0 jsr @Rn */
L_0C07D2A4: BLKS(0x0C07D2A4u);
	r2 = 0x99u; UPD(0x0C07D2A6u, 1);  /* 0C07D2A4 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C07D2A6 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C07D2AAu, 2);  /* 0C07D2A8 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C07D2AA add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C07D2AC extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C07D2AE cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07D2D0u, 6); goto L_0C07D2D0; } UPD(0x0C07D2B4u, 1); goto L_0C07D2B4; }  /* 0C07D2B0 bt/s */
L_0C07D2B4: BLKS(0x0C07D2B4u);
	r14 += 0x4u;  /* 0C07D2B4 add #imm,Rn */
	UPD(0x0C07D2B6u, 1);
L_0C07D2B6: BLKS(0x0C07D2B6u);
	r15 = r14;  /* 0C07D2B6 mov Rm,Rn */
	IF(0x0C07D2B8u); PR = R32(r15); r15 += 4; UPD(0x0C07D2BAu, 2);  /* 0C07D2B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07D2BCu, 1);  /* 0C07D2BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07D2BEu, 1);  /* 0C07D2BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07D2C0u, 1);  /* 0C07D2BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07D2C2u, 1);  /* 0C07D2C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07D2C4u, 1);  /* 0C07D2C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07D2C6u, 1);  /* 0C07D2C4 mov.l @Rm+,Rn */
	IF(0x0C07D2C6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07D2C6 rts */
L_0C07D2D0: BLKS(0x0C07D2D0u);
	r11 = 0x0u;  /* 0C07D2D0 mov #imm,Rn */
	r9 = 0xA9u; UPD(0x0C07D2D4u, 2);  /* 0C07D2D2 mov.w @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C07D2D4 mov #imm,Rn */
	W8(r2, r11); UPD(0x0C07D2D8u, 2);  /* 0C07D2D6 mov.b Rm,@Rn */
	r9 += r8;  /* 0C07D2D8 add Rm,Rn */
	W32(r14, r9); UPD(0x0C07D2DCu, 2);  /* 0C07D2DA mov.l Rm,@Rn */
	r11 = r8;  /* 0C07D2DC mov Rm,Rn */
	r13 = 0x0u;  /* 0C07D2DE mov #imm,Rn */
	UPD(0x0C07D2E0u, 2);
L_0C07D2E0: BLKS(0x0C07D2E0u);
	r4 = 0xC194D50u; UPD(0x0C07D2E2u, 1);  /* 0C07D2E0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C07D2E2 add #imm,Rn */
	r4 += r13;  /* 0C07D2E4 add Rm,Rn */
	r9 = R32(r4); UPD(0x0C07D2E8u, 3);  /* 0C07D2E6 mov.l @Rm,Rn */
	r13 += 0x8u;  /* 0C07D2E8 add #imm,Rn */
	r10 = R32(r11 + 0x24u); UPD(0x0C07D2ECu, 2);  /* 0C07D2EA mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C07D2EEu, 1);  /* 0C07D2EC mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C07D2EE add Rm,Rn */
	IF(0x0C07D2F0u); r2 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C07D2F2u, 2);  /* 0C07D2F0 mov.b @(r0,Rm),Rn */
	r8 = R32(r4 + 0x4u); UPD(0x0C07D2F4u, 1);  /* 0C07D2F2 mov.l @(disp,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C07D2F4 extu.b Rm,Rn */
	r9 = R32(r11 + 0x28u); UPD(0x0C07D2F8u, 2);  /* 0C07D2F6 mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C07D2FAu, 1);  /* 0C07D2F8 mov.l Rm,@Rn */
	r9 += r8;  /* 0C07D2FA add Rm,Rn */
	r1 = R32(r14); UPD(0x0C07D2FEu, 2);  /* 0C07D2FC mov.l @Rm,Rn */
	r8 = r12;  /* 0C07D2FE mov Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r1); UPD(0x0C07D302u, 2);  /* 0C07D300 mov.b @Rm,Rn */
	IF(0x0C07D302u); r8 <<= 2;  /* 0C07D302 shll2 Rn */
	r0 = 0xC050D70u; UPD(0x0C07D306u, 2);  /* 0C07D304 mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C07D306 extu.b Rm,Rn */
	r3 = 0xC194D68u; UPD(0x0C07D30Au, 2);  /* 0C07D308 mov.l @(disp,pc),Rn */
	r5 = 0xFFFE8000u; UPD(0x0C07D30Cu, 1);  /* 0C07D30A mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C07D30C add Rm,Rn */
	r4 = 0x3FFFu; UPD(0x0C07D310u, 2);  /* 0C07D30E mov.w @(disp,pc),Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C07D312u, 1);  /* 0C07D310 mov.l Rm,@(disp,Rn) */
	IF(0x0C07D312u); { u32 t_ = r0; PR = 0x0C07D316u; W32(r15 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C07D316u); }  /* 0C07D312 jsr @Rn */
L_0C07D316: BLKS(0x0C07D316u);
	r4 = 0xFFFFE000u; UPD(0x0C07D318u, 1);  /* 0C07D316 mov.w @(disp,pc),Rn */
	r6 = r10;  /* 0C07D318 mov Rm,Rn */
	r3 = 0x808080u; UPD(0x0C07D31Cu, 2);  /* 0C07D31A mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C07D31C add Rm,Rn */
	W32(r15 + 0xCu, r4); UPD(0x0C07D320u, 2);  /* 0C07D31E mov.l Rm,@(disp,Rn) */
	r7 = r9;  /* 0C07D320 mov Rm,Rn */
	W32(r15 + 0x10u, r3); UPD(0x0C07D324u, 2);  /* 0C07D322 mov.l Rm,@(disp,Rn) */
	r5 = R32(r8); UPD(0x0C07D326u, 1);  /* 0C07D324 mov.l @Rm,Rn */
	r8 = 0xC0ACA40u; UPD(0x0C07D328u, 1);  /* 0C07D326 mov.l @(disp,pc),Rn */
	IF(0x0C07D328u); { u32 t_ = r8; PR = 0x0C07D32Cu; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C07D32Cu); }  /* 0C07D328 jsr @Rn */
L_0C07D32C: BLKS(0x0C07D32Cu);
	r2 = r12;  /* 0C07D32C mov Rm,Rn */
	r2 += 0x1u;  /* 0C07D32E add #imm,Rn */
	r12 = (u32)(s32)(s16)r2;  /* 0C07D330 exts.w Rm,Rn */
	r0 = 0x2u;  /* 0C07D332 mov #imm,Rn */
	T = (s32)r12 > (s32)r0;  /* 0C07D334 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D2E0u, 8); goto L_0C07D2E0; } UPD(0x0C07D33Au, 1); goto L_0C07D33A; }  /* 0C07D336 bf/s */
L_0C07D33A: BLKS(0x0C07D33Au);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07D2B6u, 3); goto L_0C07D2B6; }  /* 0C07D33A bra */
L_0C07D340: BLKS(0x0C07D340u);
	r10 = 0xB4u; UPD(0x0C07D342u, 1);  /* 0C07D340 mov.w @(disp,pc),Rn */
	IF(0x0C07D342u); MACL = r9 * r10;  /* 0C07D342 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C07D346u, 3);  /* 0C07D344 mov.l @(disp,pc),Rn */
	IF(0x0C07D346u); r8 = MACL;  /* 0C07D346 sts macl,Rn */
	r8 += r11;  /* 0C07D348 add Rm,Rn */
	r8 += 0x3Cu;  /* 0C07D34A add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r8); UPD(0x0C07D34Eu, 4);  /* 0C07D34C mov.w @Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C07D34E tst Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D358u, 4); goto L_0C07D358; } goto L_0C07D354; }  /* 0C07D350 bf/s */
L_0C07D354: BLKS(0x0C07D354u);
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C07D510u, 4); goto L_0C07D510; }  /* 0C07D354 bra */
L_0C07D358: BLKS(0x0C07D358u);
	r13 = 0xC0A0540u; UPD(0x0C07D35Au, 1);  /* 0C07D358 mov.l @(disp,pc),Rn */
	IF(0x0C07D35Au); { u32 t_ = r13; PR = 0x0C07D35Eu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C07D35Eu); }  /* 0C07D35A jsr @Rn */
L_0C07D35E: BLKS(0x0C07D35Eu);
	IF(0x0C07D35Eu); T = (s32)r0 >= 0;  /* 0C07D35E cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C07D362u); MACL = r0 * r10; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C07D3C0u, 5); goto L_0C07D3C0; } goto L_0C07D364; }  /* 0C07D360 bf/s */
L_0C07D364: BLKS(0x0C07D364u);
	r2 = 0xFFFFFEFFu; UPD(0x0C07D366u, 3);  /* 0C07D364 mov.w @(disp,pc),Rn */
	IF(0x0C07D366u); r4 = MACL;  /* 0C07D366 sts macl,Rn */
	r4 += r11;  /* 0C07D368 add Rm,Rn */
	r3 = R32(r4); UPD(0x0C07D36Cu, 3);  /* 0C07D36A mov.l @Rm,Rn */
	r0 = R32(r8); UPD(0x0C07D36Eu, 1);  /* 0C07D36C mov.l @Rm,Rn */
	r7 = 0x100u; UPD(0x0C07D370u, 1);  /* 0C07D36E mov.w @(disp,pc),Rn */
	r0 &= r2;  /* 0C07D370 and Rm,Rn */
	r3 &= r7;  /* 0C07D372 and Rm,Rn */
	r0 |= r3;  /* 0C07D374 or Rm,Rn */
	r5 = 0x9Bu; UPD(0x0C07D378u, 4);  /* 0C07D376 mov.w @(disp,pc),Rn */
	W32(r8, r0); UPD(0x0C07D37Au, 1);  /* 0C07D378 mov.l Rm,@Rn */
	r5 += r8;  /* 0C07D37A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C07D37Eu, 2);  /* 0C07D37C mov.b @Rm,Rn */
	r13 = R32(r4 + 0x24u); UPD(0x0C07D380u, 1);  /* 0C07D37E mov.l @(disp,Rm),Rn */
	r6 = r0;  /* 0C07D380 mov Rm,Rn */
	r12 = R32(r4 + 0x28u); UPD(0x0C07D384u, 2);  /* 0C07D382 mov.l @(disp,Rm),Rn */
	r6 += 0x1u;  /* 0C07D384 add #imm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C07D388u, 2);  /* 0C07D386 mov.l @(disp,Rm),Rn */
	r0 &= 0x1Fu;  /* 0C07D388 and #imm,r0 */
	r10 = R32(r8 + 0x2Cu); UPD(0x0C07D38Cu, 2);  /* 0C07D38A mov.l @(disp,Rm),Rn */
	r12 += r1;  /* 0C07D38C add Rm,Rn */
	r13 += r10;  /* 0C07D38E add Rm,Rn */
	W32(r8 + 0x24u, r13); UPD(0x0C07D392u, 3);  /* 0C07D390 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C07D392 mov Rm,Rn */
	W32(r8 + 0x28u, r12); UPD(0x0C07D396u, 2);  /* 0C07D394 mov.l Rm,@(disp,Rn) */
	W8(r5, r6); UPD(0x0C07D398u, 1);  /* 0C07D396 mov.b Rm,@Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C07D39Au, 1);  /* 0C07D398 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A0380u; UPD(0x0C07D39Cu, 1);  /* 0C07D39A mov.l @(disp,pc),Rn */
L_0C07D39C: BLKS(0x0C07D39Cu);
	r14 += 0x4u;  /* 0C07D39C add #imm,Rn */
	UPD(0x0C07D39Eu, 1);
L_0C07D39E: BLKS(0x0C07D39Eu);
	r15 = r14;  /* 0C07D39E mov Rm,Rn */
	IF(0x0C07D3A0u); PR = R32(r15); r15 += 4; UPD(0x0C07D3A2u, 2);  /* 0C07D3A0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07D3A4u, 1);  /* 0C07D3A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07D3A6u, 1);  /* 0C07D3A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07D3A8u, 1);  /* 0C07D3A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07D3AAu, 1);  /* 0C07D3A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07D3ACu, 1);  /* 0C07D3AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07D3AEu, 1);  /* 0C07D3AC mov.l @Rm+,Rn */
	IF(0x0C07D3AEu); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A14C0u: TAIL(f_0C0A14C0); case 0x0C0A1700u: TAIL(f_0C0A1700); default: JUMPD(tv_); } }  /* 0C07D3AE jmp @Rn */
L_0C07D3C0: BLKS(0x0C07D3C0u);
	r3 = R32(r8 + 0x8u); UPD(0x0C07D3C2u, 1);  /* 0C07D3C0 mov.l @(disp,Rm),Rn */
	r10 = 0x5u;  /* 0C07D3C2 mov #imm,Rn */
	T = r3 > r10;  /* 0C07D3C4 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C07D33Au, 5); goto L_0C07D33A; }  /* 0C07D3C6 bt */
L_0C07D3C8: BLKS(0x0C07D3C8u);
	r0 = 0xC07D410u;  /* 0C07D3C8 mova @(disp,pc),r0 */
	r3 += r3;  /* 0C07D3CA add Rm,Rn */
	IF(0x0C07D3CCu); r11 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C07D3CEu, 3);  /* 0C07D3CC mov.w @(r0,Rm),Rn */
	IF(0x0C07D3CEu); { u32 tv_ = (r11 + 0x0C07D3D2u); u32 t_ = PHYS(tv_); IF(0x0C07D3D0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07D420u: goto L_0C07D420; case 0x0C07D430u: goto L_0C07D430; case 0x0C07D450u: goto L_0C07D450; case 0x0C07D4A0u: goto L_0C07D4A0; case 0x0C07D4D0u: goto L_0C07D4D0; default: JUMPD(tv_); } }  /* 0C07D3CE braf Rn */
L_0C07D420: BLKS(0x0C07D420u);
	r1 = 0xC0A14C0u; UPD(0x0C07D422u, 1);  /* 0C07D420 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C07D39Cu, 3); goto L_0C07D39C; }  /* 0C07D422 bra */
L_0C07D430: BLKS(0x0C07D430u);
	r5 = 0xC194D74u; UPD(0x0C07D432u, 1);  /* 0C07D430 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C07D432 mov Rm,Rn */
	r7 = 0xC0A17E0u; UPD(0x0C07D436u, 2);  /* 0C07D434 mov.l @(disp,pc),Rn */
	r14 += 0x4u;  /* 0C07D436 add #imm,Rn */
	r15 = r14;  /* 0C07D438 mov Rm,Rn */
	IF(0x0C07D43Au); PR = R32(r15); r15 += 4; UPD(0x0C07D43Cu, 3);  /* 0C07D43A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07D43Eu, 1);  /* 0C07D43C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07D440u, 1);  /* 0C07D43E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07D442u, 1);  /* 0C07D440 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07D444u, 1);  /* 0C07D442 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07D446u, 1);  /* 0C07D444 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07D448u, 1);  /* 0C07D446 mov.l @Rm+,Rn */
	IF(0x0C07D448u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A17E0u: TAIL(f_0C0A17E0); default: JUMPD(tv_); } }  /* 0C07D448 jmp @Rn */
L_0C07D450: BLKS(0x0C07D450u);
	r5 = 0xB4u; UPD(0x0C07D452u, 1);  /* 0C07D450 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07D452 add #imm,Rn */
	IF(0x0C07D454u); MACL = r9 * r5;  /* 0C07D454 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C07D458u, 4);  /* 0C07D456 mov.l @(disp,pc),Rn */
	IF(0x0C07D458u); r8 = MACL;  /* 0C07D458 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C07D45Cu, 2);  /* 0C07D45A mov.w @(disp,pc),Rn */
	r8 += r11;  /* 0C07D45C add Rm,Rn */
	IF(0x0C07D45Eu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07D460u, 2);  /* 0C07D45E mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C07D460 mov #imm,Rn */
	r3 = r7 & 0xFF;  /* 0C07D462 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C07D466u, 3);  /* 0C07D464 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07D466 add #imm,Rn */
	IF(0x0C07D468u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07D46Au, 2);  /* 0C07D468 mov.b @(r0,Rm),Rn */
	r0 = r10 & 0xFF;  /* 0C07D46A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C07D46Eu, 2);  /* 0C07D46C mov.l Rm,@(disp,Rn) */
	r13 = 0xC0AC800u; UPD(0x0C07D470u, 1);  /* 0C07D46E mov.l @(disp,pc),Rn */
	r12 = 0xC0A05D0u; UPD(0x0C07D472u, 1);  /* 0C07D470 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C07D474u, 1);  /* 0C07D472 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07D476u, 1);  /* 0C07D474 mov.l @(disp,Rm),Rn */
	IF(0x0C07D476u); { u32 t_ = r13; PR = 0x0C07D47Au; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C07D47Au); }  /* 0C07D476 jsr @Rn */
L_0C07D47A: BLKS(0x0C07D47Au);
	r15 += 0x8u;  /* 0C07D47A add #imm,Rn */
	IF(0x0C07D47Cu); { u32 t_ = r12; PR = 0x0C07D480u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C07D480u); }  /* 0C07D47C jsr @Rn */
L_0C07D480: BLKS(0x0C07D480u);
	IF(0x0C07D480u); T = (s32)r0 >= 0;  /* 0C07D480 cmp/pz Rn */
	if (!T) { UPD(0x0C07D494u, 4); goto L_0C07D494; }  /* 0C07D482 bf */
L_0C07D484: BLKS(0x0C07D484u);
	r6 = R32(r8 + 0x2Cu); UPD(0x0C07D486u, 1);  /* 0C07D484 mov.l @(disp,Rm),Rn */
	r4 = 0x2u;  /* 0C07D486 mov #imm,Rn */
	r9 = 0xFFFE0000u; UPD(0x0C07D48Au, 2);  /* 0C07D488 mov.l @(disp,pc),Rn */
	r5 = r0;  /* 0C07D48A mov Rm,Rn */
	r6 += r9;  /* 0C07D48C add Rm,Rn */
	UPD(0x0C07D48Eu, 2);
L_0C07D48E: BLKS(0x0C07D48Eu);
	r11 = 0xC06CD90u; UPD(0x0C07D490u, 1);  /* 0C07D48E mov.l @(disp,pc),Rn */
	IF(0x0C07D490u); { u32 t_ = r11; PR = 0x0C07D494u; r7 = R32(r8 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CD90, 0x0C06CD90u, 0x0C07D494u); }  /* 0C07D490 jsr @Rn */
L_0C07D494: BLKS(0x0C07D494u);
	r3 = 0x0u;  /* 0C07D494 mov #imm,Rn */
	W32(r8, r3); UPD(0x0C07D498u, 2);  /* 0C07D496 mov.l Rm,@Rn */
L_0C07D498: BLKS(0x0C07D498u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07D2B6u, 3); goto L_0C07D2B6; }  /* 0C07D498 bra */
L_0C07D4A0: BLKS(0x0C07D4A0u);
	r8 = 0xB4u; UPD(0x0C07D4A2u, 1);  /* 0C07D4A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07D4A2 add #imm,Rn */
	IF(0x0C07D4A4u); MACL = r9 * r8;  /* 0C07D4A4 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C07D4A8u, 4);  /* 0C07D4A6 mov.l @(disp,pc),Rn */
	IF(0x0C07D4A8u); r8 = MACL;  /* 0C07D4A8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C07D4ACu, 2);  /* 0C07D4AA mov.w @(disp,pc),Rn */
	r8 += r4;  /* 0C07D4AC add Rm,Rn */
	IF(0x0C07D4AEu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07D4B0u, 2);  /* 0C07D4AE mov.b @(r0,Rm),Rn */
	r2 = r6 & 0xFF;  /* 0C07D4B0 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C07D4B4u, 2);  /* 0C07D4B2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07D4B4 add #imm,Rn */
	IF(0x0C07D4B6u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07D4B8u, 2);  /* 0C07D4B6 mov.b @(r0,Rm),Rn */
	r9 = 0xC0AB240u; UPD(0x0C07D4BAu, 1);  /* 0C07D4B8 mov.l @(disp,pc),Rn */
	r11 = r5 & 0xFF;  /* 0C07D4BA extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C07D4BEu, 2);  /* 0C07D4BC mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C07D4BE mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C07D4C2u, 2);  /* 0C07D4C0 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07D4C4u, 1);  /* 0C07D4C2 mov.l @(disp,Rm),Rn */
	IF(0x0C07D4C4u); { u32 t_ = r9; PR = 0x0C07D4C8u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07D4C8u); }  /* 0C07D4C4 jsr @Rn */
L_0C07D4C8: BLKS(0x0C07D4C8u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C07D494u, 3); goto L_0C07D494; }  /* 0C07D4C8 bra */
L_0C07D4D0: BLKS(0x0C07D4D0u);
	r8 = 0xB4u; UPD(0x0C07D4D2u, 1);  /* 0C07D4D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07D4D2 add #imm,Rn */
	IF(0x0C07D4D4u); MACL = r9 * r8;  /* 0C07D4D4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07D4D8u, 4);  /* 0C07D4D6 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C07D4D8 mov #imm,Rn */
	IF(0x0C07D4DAu); r8 = MACL;  /* 0C07D4DA sts macl,Rn */
	r8 += r0;  /* 0C07D4DC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07D4E0u, 4);  /* 0C07D4DE mov.w @(disp,pc),Rn */
	IF(0x0C07D4E0u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07D4E2u, 1);  /* 0C07D4E0 mov.b @(r0,Rm),Rn */
	r4 = r10 & 0xFF;  /* 0C07D4E2 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C07D4E6u, 2);  /* 0C07D4E4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07D4E6 add #imm,Rn */
	IF(0x0C07D4E8u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07D4EAu, 2);  /* 0C07D4E8 mov.b @(r0,Rm),Rn */
	r2 = r6 & 0xFF;  /* 0C07D4EA extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C07D4EEu, 2);  /* 0C07D4EC mov.l Rm,@(disp,Rn) */
	r13 = 0xC0AC800u; UPD(0x0C07D4F0u, 1);  /* 0C07D4EE mov.l @(disp,pc),Rn */
	r12 = 0xC0A05D0u; UPD(0x0C07D4F2u, 1);  /* 0C07D4F0 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C07D4F4u, 1);  /* 0C07D4F2 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07D4F6u, 1);  /* 0C07D4F4 mov.l @(disp,Rm),Rn */
	IF(0x0C07D4F6u); { u32 t_ = r13; PR = 0x0C07D4FAu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C07D4FAu); }  /* 0C07D4F6 jsr @Rn */
L_0C07D4FA: BLKS(0x0C07D4FAu);
	r15 += 0x8u;  /* 0C07D4FA add #imm,Rn */
	IF(0x0C07D4FCu); { u32 t_ = r12; PR = 0x0C07D500u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C07D500u); }  /* 0C07D4FC jsr @Rn */
L_0C07D500: BLKS(0x0C07D500u);
	IF(0x0C07D500u); T = (s32)r0 >= 0;  /* 0C07D500 cmp/pz Rn */
	if (!T) { UPD(0x0C07D494u, 4); goto L_0C07D494; }  /* 0C07D502 bf */
L_0C07D504: BLKS(0x0C07D504u);
	r6 = R32(r8 + 0x2Cu); UPD(0x0C07D506u, 1);  /* 0C07D504 mov.l @(disp,Rm),Rn */
	r4 = 0x2u;  /* 0C07D506 mov #imm,Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C07D48Eu, 4); goto L_0C07D48E; }  /* 0C07D508 bra */
L_0C07D510: BLKS(0x0C07D510u);
	r1 = 0xC0A1700u; UPD(0x0C07D512u, 1);  /* 0C07D510 mov.l @(disp,pc),Rn */
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07D39Eu, 3); goto L_0C07D39E; }  /* 0C07D512 bra */
L_0C07D520: BLKS(0x0C07D520u);
	r8 = 0xC0A05D0u; UPD(0x0C07D522u, 1);  /* 0C07D520 mov.l @(disp,pc),Rn */
	IF(0x0C07D522u); { u32 t_ = r8; PR = 0x0C07D526u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C07D526u); }  /* 0C07D522 jsr @Rn */
L_0C07D526: BLKS(0x0C07D526u);
	IF(0x0C07D526u); T = (s32)r0 >= 0;  /* 0C07D526 cmp/pz Rn */
	{ u32 c_ = !T; r11 = 0x5u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07D5A0u, 4); goto L_0C07D5A0; } goto L_0C07D52C; }  /* 0C07D528 bf/s */
L_0C07D52C: BLKS(0x0C07D52Cu);
	r2 = 0xB4u; UPD(0x0C07D52Eu, 2);  /* 0C07D52C mov.w @(disp,pc),Rn */
	IF(0x0C07D52Eu); MACL = r0 * r2;  /* 0C07D52E mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C07D532u, 3);  /* 0C07D530 mov.l @(disp,pc),Rn */
	IF(0x0C07D532u); r12 = MACL;  /* 0C07D532 sts macl,Rn */
	r12 += r3;  /* 0C07D534 add Rm,Rn */
	r0 = R32(r12 + 0x8u); UPD(0x0C07D538u, 3);  /* 0C07D536 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C07D538 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C07D53Cu); MACL = r9 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C07D590u, 5); goto L_0C07D590; } goto L_0C07D53E; }  /* 0C07D53A bt/s */
L_0C07D53E: BLKS(0x0C07D53Eu);
	r13 = 0x5u;  /* 0C07D53E mov #imm,Rn */
	IF(0x0C07D540u); r10 = MACL;  /* 0C07D540 sts macl,Rn */
	r10 += r3;  /* 0C07D542 add Rm,Rn */
	r2 = R32(r10 + 0x8u); UPD(0x0C07D546u, 6);  /* 0C07D544 mov.l @(disp,Rm),Rn */
	T = r2 > r13;  /* 0C07D546 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C07D498u, 4); goto L_0C07D498; }  /* 0C07D548 bt */
L_0C07D54A: BLKS(0x0C07D54Au);
	r0 = 0xC07D580u;  /* 0C07D54A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07D54C add Rm,Rn */
	IF(0x0C07D54Eu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07D550u, 3);  /* 0C07D54E mov.w @(r0,Rm),Rn */
	IF(0x0C07D550u); { u32 tv_ = (r3 + 0x0C07D554u); u32 t_ = PHYS(tv_); IF(0x0C07D552u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07D420u: goto L_0C07D420; case 0x0C07D430u: goto L_0C07D430; case 0x0C07D450u: goto L_0C07D450; case 0x0C07D4A0u: goto L_0C07D4A0; case 0x0C07D4D0u: goto L_0C07D4D0; default: JUMPD(tv_); } }  /* 0C07D550 braf Rn */
L_0C07D590: BLKS(0x0C07D590u);
	r1 = 0xC07CC20u; UPD(0x0C07D592u, 1);  /* 0C07D590 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C07D39Cu, 3); goto L_0C07D39C; }  /* 0C07D592 bra */
L_0C07D5A0: BLKS(0x0C07D5A0u);
	r6 = 0xB4u; UPD(0x0C07D5A2u, 1);  /* 0C07D5A0 mov.w @(disp,pc),Rn */
	IF(0x0C07D5A2u); MACL = r9 * r6;  /* 0C07D5A2 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C07D5A6u, 3);  /* 0C07D5A4 mov.l @(disp,pc),Rn */
	IF(0x0C07D5A6u); r2 = MACL;  /* 0C07D5A6 sts macl,Rn */
	r5 += r2;  /* 0C07D5A8 add Rm,Rn */
	r2 = R32(r5 + 0x8u); UPD(0x0C07D5ACu, 3);  /* 0C07D5AA mov.l @(disp,Rm),Rn */
	T = r2 > r11;  /* 0C07D5AC cmp/hi Rm,Rn */
	if (T) { UPD(0x0C07D616u, 4); goto L_0C07D616; }  /* 0C07D5AE bt */
L_0C07D5B0: BLKS(0x0C07D5B0u);
	r0 = 0xC07D5C4u;  /* 0C07D5B0 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07D5B2 add Rm,Rn */
	IF(0x0C07D5B4u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07D5B6u, 3);  /* 0C07D5B4 mov.w @(r0,Rm),Rn */
	IF(0x0C07D5B6u); { u32 tv_ = (r4 + 0x0C07D5BAu); u32 t_ = PHYS(tv_); IF(0x0C07D5B8u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07D420u: goto L_0C07D420; case 0x0C07D430u: goto L_0C07D430; case 0x0C07D450u: goto L_0C07D450; case 0x0C07D4A0u: goto L_0C07D4A0; case 0x0C07D4D0u: goto L_0C07D4D0; default: JUMPD(tv_); } }  /* 0C07D5B6 braf Rn */
L_0C07D5D0: BLKS(0x0C07D5D0u);
	r5 = 0xB4u; UPD(0x0C07D5D2u, 1);  /* 0C07D5D0 mov.w @(disp,pc),Rn */
	IF(0x0C07D5D2u); MACL = r9 * r5;  /* 0C07D5D2 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C07D5D6u, 3);  /* 0C07D5D4 mov.l @(disp,pc),Rn */
	IF(0x0C07D5D6u); r3 = MACL;  /* 0C07D5D6 sts macl,Rn */
	r3 += r11;  /* 0C07D5D8 add Rm,Rn */
	r8 = R32(r3 + 0x2Cu); UPD(0x0C07D5DCu, 3);  /* 0C07D5DA mov.l @(disp,Rm),Rn */
	r2 = 0xF0u; UPD(0x0C07D5DEu, 1);  /* 0C07D5DC mov.w @(disp,pc),Rn */
	IF(0x0C07D5DEu); MACL = r8 * r2;  /* 0C07D5DE mul.l Rm,Rn */
	IF(0x0C07D5E0u); r7 = MACL;  /* 0C07D5E0 sts macl,Rn */
	IF(0x0C07D5E2u); T = (s32)r7 >= 0;  /* 0C07D5E2 cmp/pz Rn */
	if (!T) { UPD(0x0C07D650u, 7); goto L_0C07D650; }  /* 0C07D5E4 bf */
L_0C07D5E6: BLKS(0x0C07D5E6u);
	r0 = R32(r3 + 0x30u); UPD(0x0C07D5E8u, 1);  /* 0C07D5E6 mov.l @(disp,Rm),Rn */
	r6 = 0xFFFFFFF8u;  /* 0C07D5E8 mov #imm,Rn */
	IF(0x0C07D5EAu); MACL = r0 * r2;  /* 0C07D5EA mul.l Rm,Rn */
	IF(0x0C07D5ECu); ARG0(0x476Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C07D5EC shad Rm,Rn */
	IF(0x0C07D5EEu); r2 = MACL;  /* 0C07D5EE sts macl,Rn */
	IF(0x0C07D5F0u); T = (s32)r2 >= 0;  /* 0C07D5F0 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x2Cu, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07D640u, 9); goto L_0C07D640; } UPD(0x0C07D5F6u, 1); goto L_0C07D5F6; }  /* 0C07D5F2 bf/s */
L_0C07D5F6: BLKS(0x0C07D5F6u);
	IF(0x0C07D5F6u); ARG0(0x426Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C07D5F6 shad Rm,Rn */
	r10 = R32(r3 + 0x24u); UPD(0x0C07D5FAu, 2);  /* 0C07D5F8 mov.l @(disp,Rm),Rn */
	r12 = r7;  /* 0C07D5FA mov Rm,Rn */
	r13 = R32(r3 + 0x28u); UPD(0x0C07D5FEu, 2);  /* 0C07D5FC mov.l @(disp,Rm),Rn */
	r10 += r7;  /* 0C07D5FE add Rm,Rn */
	r13 += r2;  /* 0C07D600 add Rm,Rn */
	r12 |= r2;  /* 0C07D602 or Rm,Rn */
	W32(r3 + 0x30u, r2); UPD(0x0C07D606u, 4);  /* 0C07D604 mov.l Rm,@(disp,Rn) */
	T = (r12 & r12) == 0;  /* 0C07D606 tst Rm,Rn */
	W32(r3 + 0x24u, r10); UPD(0x0C07D60Au, 2);  /* 0C07D608 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r3 + 0x28u, r13); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07D616u, 3); goto L_0C07D616; } UPD(0x0C07D60Eu, 1); goto L_0C07D60E; }  /* 0C07D60A bf/s */
L_0C07D60E: BLKS(0x0C07D60Eu);
	r2 = R32(r3 + 0x8u); UPD(0x0C07D610u, 1);  /* 0C07D60E mov.l @(disp,Rm),Rn */
	r3 = 0x5u;  /* 0C07D610 mov #imm,Rn */
	T = r2 > r3;  /* 0C07D612 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C07D61Au, 5); goto L_0C07D61A; }  /* 0C07D614 bf */
L_0C07D616: BLKS(0x0C07D616u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07D2B6u, 3); goto L_0C07D2B6; }  /* 0C07D616 bra */
L_0C07D61A: BLKS(0x0C07D61Au);
	r0 = 0xC07D62Cu;  /* 0C07D61A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07D61C add Rm,Rn */
	IF(0x0C07D61Eu); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07D620u, 3);  /* 0C07D61E mov.w @(r0,Rm),Rn */
	IF(0x0C07D620u); { u32 tv_ = (r7 + 0x0C07D624u); u32 t_ = PHYS(tv_); IF(0x0C07D622u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07D420u: goto L_0C07D420; case 0x0C07D430u: goto L_0C07D430; case 0x0C07D450u: goto L_0C07D450; case 0x0C07D4A0u: goto L_0C07D4A0; case 0x0C07D4D0u: goto L_0C07D4D0; default: JUMPD(tv_); } }  /* 0C07D620 braf Rn */
L_0C07D640: BLKS(0x0C07D640u);
	r4 = 0xFFu; UPD(0x0C07D642u, 1);  /* 0C07D640 mov.w @(disp,pc),Rn */
	{ r2 += r4; /* slot add Rm,Rn */ UPD(0x0C07D5F6u, 3); goto L_0C07D5F6; }  /* 0C07D642 bra */
L_0C07D650: BLKS(0x0C07D650u);
	r6 = 0xFFu; UPD(0x0C07D652u, 1);  /* 0C07D650 mov.w @(disp,pc),Rn */
	{ r7 += r6; /* slot add Rm,Rn */ UPD(0x0C07D5E6u, 3); goto L_0C07D5E6; }  /* 0C07D652 bra */
L_0C07D660: BLKS(0x0C07D660u);
	r1 = 0xC07CEB0u; UPD(0x0C07D662u, 1);  /* 0C07D660 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C07D39Cu, 3); goto L_0C07D39C; }  /* 0C07D662 bra */
}

void f_0C07D670(sh3_t *c)
{
	LOCALS;
L_0C07D670: BLKS(0x0C07D670u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07D672u, 1);  /* 0C07D670 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07D674u, 1);  /* 0C07D672 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07D676u, 1);  /* 0C07D674 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07D678u, 1);  /* 0C07D676 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07D67Au, 1);  /* 0C07D678 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07D67Cu, 1);  /* 0C07D67A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D67Eu, 1);  /* 0C07D67C mov.l Rm,@-Rn */
	r4 = 0xC2859A0u; UPD(0x0C07D680u, 1);  /* 0C07D67E mov.l @(disp,pc),Rn */
	IF(0x0C07D680u); r15 -= 4; W32(r15, PR); UPD(0x0C07D682u, 1);  /* 0C07D680 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C07D684u, 1);  /* 0C07D682 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C07D684 add #imm,Rn */
	r8 = 0xC283CA0u; UPD(0x0C07D688u, 2);  /* 0C07D686 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07D688 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C07D68Cu, 2);  /* 0C07D68A mov.w @Rm+,Rn */
	r7 = R32(r8); UPD(0x0C07D68Eu, 1);  /* 0C07D68C mov.l @Rm,Rn */
	IF(0x0C07D68Eu); r0 <<= 2;  /* 0C07D68E shll2 Rn */
	IF(0x0C07D690u); r6 = R32(r0 + r7); UPD(0x0C07D692u, 2);  /* 0C07D690 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r2 = v_; } UPD(0x0C07D694u, 1);  /* 0C07D692 mov.w @Rm+,Rn */
	r5 = 0xC27DC20u; UPD(0x0C07D696u, 1);  /* 0C07D694 mov.l @(disp,pc),Rn */
	r9 = 0xC22C874u; UPD(0x0C07D698u, 1);  /* 0C07D696 mov.l @(disp,pc),Rn */
	r8 = 0xC057A50u; UPD(0x0C07D69Au, 1);  /* 0C07D698 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C07D69Cu, 1);  /* 0C07D69A mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C07D69Eu, 1);  /* 0C07D69C mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C07D6A0u, 1);  /* 0C07D69E mov.w @Rm,Rn */
	r11 = 0xC28629Eu; UPD(0x0C07D6A2u, 1);  /* 0C07D6A0 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C07D6A2 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C07D6A6u, 2);  /* 0C07D6A4 mov.l @(disp,pc),Rn */
	IF(0x0C07D6A6u); { u32 t_ = r8; PR = 0x0C07D6AAu; W16(r11, r2); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C07D6AAu); }  /* 0C07D6A6 jsr @Rn */
L_0C07D6AA: BLKS(0x0C07D6AAu);
	T = (r0 & r0) == 0;  /* 0C07D6AA tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07D6D0u, 4); goto L_0C07D6D0; } UPD(0x0C07D6B0u, 1); goto L_0C07D6B0; }  /* 0C07D6AC bf/s */
L_0C07D6B0: BLKS(0x0C07D6B0u);
	r14 += 0xCu;  /* 0C07D6B0 add #imm,Rn */
	UPD(0x0C07D6B2u, 1);
L_0C07D6B2: BLKS(0x0C07D6B2u);
	r15 = r14;  /* 0C07D6B2 mov Rm,Rn */
	IF(0x0C07D6B4u); PR = R32(r15); r15 += 4; UPD(0x0C07D6B6u, 2);  /* 0C07D6B4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07D6B8u, 1);  /* 0C07D6B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07D6BAu, 1);  /* 0C07D6B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07D6BCu, 1);  /* 0C07D6BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07D6BEu, 1);  /* 0C07D6BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07D6C0u, 1);  /* 0C07D6BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07D6C2u, 1);  /* 0C07D6C0 mov.l @Rm+,Rn */
	IF(0x0C07D6C2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07D6C2 rts */
L_0C07D6D0: BLKS(0x0C07D6D0u);
	r10 = 0xC0606C0u; UPD(0x0C07D6D2u, 1);  /* 0C07D6D0 mov.l @(disp,pc),Rn */
	IF(0x0C07D6D2u); { u32 t_ = r10; PR = 0x0C07D6D6u; r4 = 0x1Au; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C07D6D6u); }  /* 0C07D6D2 jsr @Rn */
L_0C07D6D6: BLKS(0x0C07D6D6u);
	T = (r0 & r0) == 0;  /* 0C07D6D6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07D6B0u, 4); goto L_0C07D6B0; } goto L_0C07D6DC; }  /* 0C07D6D8 bt/s */
L_0C07D6DC: BLKS(0x0C07D6DCu);
	r12 = 0xC2755BCu; UPD(0x0C07D6DEu, 2);  /* 0C07D6DC mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C07D6E0u, 1);  /* 0C07D6DE mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C07D6E2u, 1);  /* 0C07D6E0 mov.w @Rm+,Rn */
	IF(0x0C07D6E2u); MACL = r10 * r8;  /* 0C07D6E2 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C07D6E6u, 3);  /* 0C07D6E4 mov.l @(disp,pc),Rn */
	IF(0x0C07D6E6u); r8 = MACL;  /* 0C07D6E6 sts macl,Rn */
	r0 = 0xC1008100u; UPD(0x0C07D6EAu, 2);  /* 0C07D6E8 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C07D6EA add Rm,Rn */
	W32(r8, r0); UPD(0x0C07D6EEu, 2);  /* 0C07D6EC mov.l Rm,@Rn */
	r4 = r10;  /* 0C07D6EE mov Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C07D6F2u, 2);  /* 0C07D6F0 mov.w @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r11); UPD(0x0C07D6F4u, 1);  /* 0C07D6F2 mov.w @Rm,Rn */
	r13 = r6 & 0xFFFF;  /* 0C07D6F4 extu.w Rm,Rn */
	r0 = 0x8Au; UPD(0x0C07D6F8u, 2);  /* 0C07D6F6 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C07D6F8 mov #imm,Rn */
	IF(0x0C07D6FAu); W16(r0 + r8, r7); UPD(0x0C07D6FCu, 2);  /* 0C07D6FA mov.w Rm,@(r0,Rn) */
	r5 = 0xC0A02D0u; UPD(0x0C07D6FEu, 1);  /* 0C07D6FC mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C07D6FE add #imm,Rn */
	IF(0x0C07D700u); W16(r0 + r8, r7); UPD(0x0C07D702u, 2);  /* 0C07D700 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0x4u, r13); UPD(0x0C07D704u, 1);  /* 0C07D702 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r11); UPD(0x0C07D706u, 1);  /* 0C07D704 mov.l Rm,@(disp,Rn) */
	IF(0x0C07D706u); { u32 t_ = r5; PR = 0x0C07D70Au; W32(r8 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07D70Au); }  /* 0C07D706 jsr @Rn */
L_0C07D70A: BLKS(0x0C07D70Au);
	r9 = 0xC061380u; UPD(0x0C07D70Cu, 1);  /* 0C07D70A mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07D70C mov Rm,Rn */
	r2 = 0x1A00000u; UPD(0x0C07D710u, 2);  /* 0C07D70E mov.l @(disp,pc),Rn */
	IF(0x0C07D710u); { u32 t_ = r9; PR = 0x0C07D714u; W32(r8 + 0x24u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C061380, 0x0C061380u, 0x0C07D714u); }  /* 0C07D710 jsr @Rn */
L_0C07D714: BLKS(0x0C07D714u);
	r3 = 0xC0A1530u; UPD(0x0C07D716u, 1);  /* 0C07D714 mov.l @(disp,pc),Rn */
	r13 = 0xC0A1780u; UPD(0x0C07D718u, 1);  /* 0C07D716 mov.l @(disp,pc),Rn */
	IF(0x0C07D718u); { u32 t_ = r3; PR = 0x0C07D71Cu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C07D71Cu); }  /* 0C07D718 jsr @Rn */
L_0C07D71C: BLKS(0x0C07D71Cu);
	r0 = 0xADu; UPD(0x0C07D71Eu, 1);  /* 0C07D71C mov.w @(disp,pc),Rn */
	r4 = 0x12u;  /* 0C07D71E mov #imm,Rn */
	r6 = 0xA8u; UPD(0x0C07D722u, 2);  /* 0C07D720 mov.w @(disp,pc),Rn */
	IF(0x0C07D722u); W8(r0 + r8, r11); UPD(0x0C07D724u, 1);  /* 0C07D722 mov.b Rm,@(r0,Rn) */
	r6 += r8;  /* 0C07D724 add Rm,Rn */
	r6 += 0x1u;  /* 0C07D726 add #imm,Rn */
	W8(r6, r4); UPD(0x0C07D72Au, 3);  /* 0C07D728 mov.b Rm,@Rn */
	r0 = 0xC27DC20u; UPD(0x0C07D72Cu, 1);  /* 0C07D72A mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07D72C mov Rm,Rn */
	r5 = R32(r0); UPD(0x0C07D730u, 2);  /* 0C07D72E mov.l @Rm,Rn */
	IF(0x0C07D730u); { u32 t_ = r13; PR = 0x0C07D734u; W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C07D734u); }  /* 0C07D730 jsr @Rn */
L_0C07D734: BLKS(0x0C07D734u);
	r0 = 0x94u; UPD(0x0C07D736u, 1);  /* 0C07D734 mov.w @(disp,pc),Rn */
	r13 = r8;  /* 0C07D736 mov Rm,Rn */
	IF(0x0C07D738u); W32(r0 + r8, r11); UPD(0x0C07D73Au, 2);  /* 0C07D738 mov.l Rm,@(r0,Rn) */
	r9 = 0x8Cu; UPD(0x0C07D73Cu, 1);  /* 0C07D73A mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C07D73C add #imm,Rn */
	r9 += r8;  /* 0C07D73E add Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C07D742u, 3);  /* 0C07D740 mov.l @(disp,Rm),Rn */
	W32(r9, r11); UPD(0x0C07D744u, 1);  /* 0C07D742 mov.l Rm,@Rn */
	IF(0x0C07D744u); W32(r0 + r8, r11); UPD(0x0C07D746u, 1);  /* 0C07D744 mov.l Rm,@(r0,Rn) */
	W32(r8 + 0x30u, r11); UPD(0x0C07D748u, 1);  /* 0C07D746 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r11); UPD(0x0C07D74Au, 1);  /* 0C07D748 mov.l Rm,@(disp,Rn) */
	W32(r14, r11); UPD(0x0C07D74Cu, 1);  /* 0C07D74A mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C07D74Eu, 1);  /* 0C07D74C mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C07D74E mov #imm,Rn */
	UPD(0x0C07D750u, 1);
L_0C07D750: BLKS(0x0C07D750u);
	r9 = 0xC195D74u; UPD(0x0C07D752u, 1);  /* 0C07D750 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C07D754u, 1);  /* 0C07D752 mov.w @Rm+,Rn */
	r9 += r11;  /* 0C07D754 add Rm,Rn */
	r8 = 0xB4u; UPD(0x0C07D758u, 2);  /* 0C07D756 mov.w @(disp,pc),Rn */
	r9 += 0x4u;  /* 0C07D758 add #imm,Rn */
	IF(0x0C07D75Au); MACL = r10 * r8;  /* 0C07D75A mul.l Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C07D75Eu, 4);  /* 0C07D75C mov.w @Rm,Rn */
	r11 += 0x14u;  /* 0C07D75E add #imm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C07D762u, 2);  /* 0C07D760 mov.l @(disp,pc),Rn */
	IF(0x0C07D762u); r8 = MACL;  /* 0C07D762 sts macl,Rn */
	r0 = 0xC2755BCu; UPD(0x0C07D766u, 2);  /* 0C07D764 mov.l @(disp,pc),Rn */
	r7 += r7;  /* 0C07D766 add Rm,Rn */
	IF(0x0C07D768u); r5 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C07D76Au, 2);  /* 0C07D768 mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C07D76A add Rm,Rn */
	r8 += 0x7Cu;  /* 0C07D76C add #imm,Rn */
	W16(r8, r5); UPD(0x0C07D770u, 3);  /* 0C07D76E mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C07D770 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C07D774u, 2);  /* 0C07D772 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C07D774 add #imm,Rn */
	W16(r8, r2); UPD(0x0C07D778u, 2);  /* 0C07D776 mov.w Rm,@Rn */
	r5 = 0x0u;  /* 0C07D778 mov #imm,Rn */
	r3 = 0xC22C874u; UPD(0x0C07D77Cu, 2);  /* 0C07D77A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C07D77C add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C07D780u, 2);  /* 0C07D77E mov.w @Rm,Rn */
	r0 = R32(r9); UPD(0x0C07D782u, 1);  /* 0C07D780 mov.l @Rm,Rn */
	r6 = r4 & 0xFFFF;  /* 0C07D782 extu.w Rm,Rn */
	W32(r8, r0); UPD(0x0C07D786u, 2);  /* 0C07D784 mov.l Rm,@Rn */
	r4 = r10;  /* 0C07D786 mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C07D78Au, 2);  /* 0C07D788 mov.l Rm,@(disp,Rn) */
	r2 = 0xC0A02D0u; UPD(0x0C07D78Cu, 1);  /* 0C07D78A mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x8u); UPD(0x0C07D78Eu, 1);  /* 0C07D78C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x8u, r7); UPD(0x0C07D790u, 1);  /* 0C07D78E mov.l Rm,@(disp,Rn) */
	IF(0x0C07D790u); { u32 t_ = r2; PR = 0x0C07D794u; W32(r8 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C07D794u); }  /* 0C07D790 jsr @Rn */
L_0C07D794: BLKS(0x0C07D794u);
	r6 = R32(r13 + 0x24u); UPD(0x0C07D796u, 1);  /* 0C07D794 mov.l @(disp,Rm),Rn */
	r7 = R32(r13 + 0x28u); UPD(0x0C07D798u, 1);  /* 0C07D796 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C07D79Au, 1);  /* 0C07D798 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r7); UPD(0x0C07D79Cu, 1);  /* 0C07D79A mov.l Rm,@(disp,Rn) */
	r0 = 0xC28629Eu; UPD(0x0C07D79Eu, 1);  /* 0C07D79C mov.l @(disp,pc),Rn */
	r5 = R32(r9 + 0xCu); UPD(0x0C07D7A0u, 1);  /* 0C07D79E mov.l @(disp,Rm),Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C07D7A2u, 1);  /* 0C07D7A0 mov.w @Rm,Rn */
	W32(r8 + 0x2Cu, r5); UPD(0x0C07D7A4u, 1);  /* 0C07D7A2 mov.l Rm,@(disp,Rn) */
	IF(0x0C07D7A4u); r3 >>= 2;  /* 0C07D7A4 shlr2 Rn */
	r2 = R32(r9 + 0x10u); UPD(0x0C07D7A8u, 2);  /* 0C07D7A6 mov.l @(disp,Rm),Rn */
	IF(0x0C07D7A8u); r3 >>= 2;  /* 0C07D7A8 shlr2 Rn */
	r4 = 0x86u; UPD(0x0C07D7ACu, 2);  /* 0C07D7AA mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07D7AC mov Rm,Rn */
	IF(0x0C07D7AEu); r3 >>= 2;  /* 0C07D7AE shlr2 Rn */
	r9 = 0xC0A1530u; UPD(0x0C07D7B2u, 3);  /* 0C07D7B0 mov.l @(disp,pc),Rn */
	IF(0x0C07D7B2u); W16(r0 + r4, r3); UPD(0x0C07D7B4u, 1);  /* 0C07D7B2 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0x30u, r2); UPD(0x0C07D7B6u, 1);  /* 0C07D7B4 mov.l Rm,@(disp,Rn) */
	IF(0x0C07D7B6u); { u32 t_ = r9; PR = 0x0C07D7BAu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C07D7BAu); }  /* 0C07D7B6 jsr @Rn */
L_0C07D7BA: BLKS(0x0C07D7BAu);
	r0 = 0xB0u; UPD(0x0C07D7BCu, 1);  /* 0C07D7BA mov.w @(disp,pc),Rn */
	r5 = r8;  /* 0C07D7BC mov Rm,Rn */
	IF(0x0C07D7BEu); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C07D7C0u, 2);  /* 0C07D7BE mov.b @(r0,Rm),Rn */
	r6 = 0xACu; UPD(0x0C07D7C2u, 1);  /* 0C07D7C0 mov.w @(disp,pc),Rn */
	IF(0x0C07D7C2u); W8(r0 + r8, r3); UPD(0x0C07D7C4u, 1);  /* 0C07D7C2 mov.b Rm,@(r0,Rn) */
	r5 += r6;  /* 0C07D7C4 add Rm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C07D7C8u, 2);  /* 0C07D7C6 mov.l @(disp,Rm),Rn */
	r6 += r13;  /* 0C07D7C8 add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C07D7CCu, 2);  /* 0C07D7CA mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C07D7CC add #imm,Rn */
	r10 = 0xC0AFE40u; UPD(0x0C07D7D0u, 2);  /* 0C07D7CE mov.l @(disp,pc),Rn */
	r0 += r8;  /* 0C07D7D0 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C07D7D4u, 2);  /* 0C07D7D2 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C07D7D4 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C07D7D8u, 2);  /* 0C07D7D6 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C07D7D8 add #imm,Rn */
	r2 = 0x9Bu; UPD(0x0C07D7DCu, 2);  /* 0C07D7DA mov.w @(disp,pc),Rn */
	W8(r0, r4); UPD(0x0C07D7DEu, 1);  /* 0C07D7DC mov.b Rm,@Rn */
	r8 += r2;  /* 0C07D7DE add Rm,Rn */
	IF(0x0C07D7E0u); { u32 t_ = r10; PR = 0x0C07D7E4u; W8(r5, r7); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C07D7E4u); }  /* 0C07D7E0 jsr @Rn */
L_0C07D7E4: BLKS(0x0C07D7E4u);
	W8(r8, r0); UPD(0x0C07D7E6u, 1);  /* 0C07D7E4 mov.b Rm,@Rn */
	r10 = 0x18u;  /* 0C07D7E6 mov #imm,Rn */
	r9 = R32(r14); UPD(0x0C07D7EAu, 2);  /* 0C07D7E8 mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C07D7EA add #imm,Rn */
	r3 = (u32)(s32)(s16)r9;  /* 0C07D7EC exts.w Rm,Rn */
	W32(r14, r3); UPD(0x0C07D7F0u, 3);  /* 0C07D7EE mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C07D7F2u, 1);  /* 0C07D7F0 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r10;  /* 0C07D7F2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07D750u, 4); goto L_0C07D750; } goto L_0C07D7F8; }  /* 0C07D7F4 bf/s */
L_0C07D7F8: BLKS(0x0C07D7F8u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07D6B2u, 4); goto L_0C07D6B2; }  /* 0C07D7F8 bra */
}

/* FUN_0c07d860 */
void f_0C07D860(sh3_t *c)
{
	LOCALS;
L_0C07D860: BLKS(0x0C07D860u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07D862u, 1);  /* 0C07D860 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07D864u, 1);  /* 0C07D862 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07D866u, 1);  /* 0C07D864 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07D868u, 1);  /* 0C07D866 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C07D86Au, 1);  /* 0C07D868 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07D86A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07D86Eu, 2);  /* 0C07D86C mov.l Rm,@-Rn */
	IF(0x0C07D86Eu); MACL = r11 * r3;  /* 0C07D86E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D872u, 3);  /* 0C07D870 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C07D874u, 1);  /* 0C07D872 mov.l @(disp,pc),Rn */
	IF(0x0C07D874u); r2 = MACL;  /* 0C07D874 sts macl,Rn */
	IF(0x0C07D876u); r15 -= 4; W32(r15, PR); UPD(0x0C07D878u, 2);  /* 0C07D876 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07D878 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07D87Cu, 2);  /* 0C07D87A mov.l @(disp,Rm),Rn */
	r0 = 0xEu;  /* 0C07D87C mov #imm,Rn */
	T = r2 > r0;  /* 0C07D87E cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07D8E0u, 5); goto L_0C07D8E0; } goto L_0C07D884; }  /* 0C07D880 bt/s */
L_0C07D884: BLKS(0x0C07D884u);
	r0 = 0xC07D894u;  /* 0C07D884 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07D886 add Rm,Rn */
	IF(0x0C07D888u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07D88Au, 4);  /* 0C07D888 mov.w @(r0,Rm),Rn */
	IF(0x0C07D88Au); { u32 tv_ = (r4 + 0x0C07D88Eu); u32 t_ = PHYS(tv_); IF(0x0C07D88Cu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07D8C0u: goto L_0C07D8C0; case 0x0C07D8E0u: goto L_0C07D8E0; case 0x0C07D900u: goto L_0C07D900; case 0x0C07D930u: goto L_0C07D930; case 0x0C07D940u: goto L_0C07D940; case 0x0C07D970u: goto L_0C07D970; case 0x0C07D9E0u: goto L_0C07D9E0; case 0x0C07DA30u: goto L_0C07DA30; case 0x0C07DA70u: goto L_0C07DA70; case 0x0C07DAD0u: goto L_0C07DAD0; default: JUMPD(tv_); } }  /* 0C07D88A braf Rn */
L_0C07D8C0: BLKS(0x0C07D8C0u);
	r5 = 0xC195F68u; UPD(0x0C07D8C2u, 1);  /* 0C07D8C0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07D8C2 mov Rm,Rn */
	UPD(0x0C07D8C4u, 1);
L_0C07D8C4: BLKS(0x0C07D8C4u);
	r2 = 0xC0A17E0u; UPD(0x0C07D8C6u, 1);  /* 0C07D8C4 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07D8C6 mov Rm,Rn */
	IF(0x0C07D8C8u); PR = R32(r15); r15 += 4; UPD(0x0C07D8CAu, 2);  /* 0C07D8C8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07D8CCu, 1);  /* 0C07D8CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07D8CEu, 1);  /* 0C07D8CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07D8D0u, 1);  /* 0C07D8CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07D8D2u, 1);  /* 0C07D8D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07D8D4u, 1);  /* 0C07D8D2 mov.l @Rm+,Rn */
	IF(0x0C07D8D4u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A17E0u: TAIL(f_0C0A17E0); default: JUMPD(tv_); } }  /* 0C07D8D4 jmp @Rn */
L_0C07D8E0: BLKS(0x0C07D8E0u);
	r15 = r14;  /* 0C07D8E0 mov Rm,Rn */
	IF(0x0C07D8E2u); PR = R32(r15); r15 += 4; UPD(0x0C07D8E4u, 2);  /* 0C07D8E2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07D8E6u, 1);  /* 0C07D8E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07D8E8u, 1);  /* 0C07D8E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07D8EAu, 1);  /* 0C07D8E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07D8ECu, 1);  /* 0C07D8EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07D8EEu, 1);  /* 0C07D8EC mov.l @Rm+,Rn */
	IF(0x0C07D8EEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07D8EE rts */
L_0C07D900: BLKS(0x0C07D900u);
	r0 = 0xB4u; UPD(0x0C07D902u, 1);  /* 0C07D900 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07D902 add #imm,Rn */
	IF(0x0C07D904u); MACL = r11 * r0;  /* 0C07D904 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C07D908u, 4);  /* 0C07D906 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C07D908 mov #imm,Rn */
	IF(0x0C07D90Au); r9 = MACL;  /* 0C07D90A sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C07D90Eu, 3);  /* 0C07D90C mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C07D90E add Rm,Rn */
	IF(0x0C07D910u); r11 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07D912u, 2);  /* 0C07D910 mov.b @(r0,Rm),Rn */
	r10 = r11 & 0xFF;  /* 0C07D912 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C07D916u, 2);  /* 0C07D914 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07D916 add #imm,Rn */
	IF(0x0C07D918u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07D91Au, 2);  /* 0C07D918 mov.b @(r0,Rm),Rn */
	r8 = 0xC0AC800u; UPD(0x0C07D91Cu, 1);  /* 0C07D91A mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C07D91C extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C07D920u, 2);  /* 0C07D91E mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C07D922u, 1);  /* 0C07D920 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C07D924u, 1);  /* 0C07D922 mov.l @(disp,Rm),Rn */
	IF(0x0C07D924u); { u32 t_ = r8; PR = 0x0C07D928u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C07D928u); }  /* 0C07D924 jsr @Rn */
L_0C07D928: BLKS(0x0C07D928u);
	r5 = 0x0u;  /* 0C07D928 mov #imm,Rn */
	W32(r9, r5); UPD(0x0C07D92Cu, 2);  /* 0C07D92A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C07D8E0u, 3); goto L_0C07D8E0; }  /* 0C07D92C bra */
L_0C07D930: BLKS(0x0C07D930u);
	r5 = 0xC196036u; UPD(0x0C07D932u, 1);  /* 0C07D930 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C07D8C4u, 3); goto L_0C07D8C4; }  /* 0C07D932 bra */
L_0C07D940: BLKS(0x0C07D940u);
	r8 = 0xB4u; UPD(0x0C07D942u, 1);  /* 0C07D940 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07D942 add #imm,Rn */
	IF(0x0C07D944u); MACL = r11 * r8;  /* 0C07D944 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07D948u, 4);  /* 0C07D946 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C07D948 mov #imm,Rn */
	IF(0x0C07D94Au); r8 = MACL;  /* 0C07D94A sts macl,Rn */
	r8 += r0;  /* 0C07D94C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07D950u, 4);  /* 0C07D94E mov.w @(disp,pc),Rn */
	IF(0x0C07D950u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07D952u, 1);  /* 0C07D950 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C07D952 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C07D956u, 2);  /* 0C07D954 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07D956 add #imm,Rn */
	IF(0x0C07D958u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07D95Au, 2);  /* 0C07D958 mov.b @(r0,Rm),Rn */
	r6 = r10 & 0xFF;  /* 0C07D95A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C07D95Eu, 2);  /* 0C07D95C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07D960u, 1);  /* 0C07D95E mov.l @Rm,Rn */
L_0C07D960: BLKS(0x0C07D960u);
	r10 = 0xC0AC800u; UPD(0x0C07D962u, 1);  /* 0C07D960 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07D964u, 1);  /* 0C07D962 mov.l @(disp,Rm),Rn */
	IF(0x0C07D964u); { u32 t_ = r10; PR = 0x0C07D968u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C07D968u); }  /* 0C07D964 jsr @Rn */
L_0C07D968: BLKS(0x0C07D968u);
	r15 += 0x8u;  /* 0C07D968 add #imm,Rn */
	UPD(0x0C07D96Au, 1);
L_0C07D96A: BLKS(0x0C07D96Au);
	r2 = 0x0u;  /* 0C07D96A mov #imm,Rn */
	UPD(0x0C07D96Cu, 1);
L_0C07D96C: BLKS(0x0C07D96Cu);
	{ W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C07D8E0u, 3); goto L_0C07D8E0; }  /* 0C07D96C bra */
L_0C07D970: BLKS(0x0C07D970u);
	r12 = 0xB4u; UPD(0x0C07D972u, 1);  /* 0C07D970 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07D972 add #imm,Rn */
	IF(0x0C07D974u); MACL = r11 * r12;  /* 0C07D974 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C07D978u, 4);  /* 0C07D976 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C07D978 mov #imm,Rn */
	IF(0x0C07D97Au); r12 = MACL;  /* 0C07D97A sts macl,Rn */
	r12 += r7;  /* 0C07D97C add Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C07D980u, 4);  /* 0C07D97E mov.l @(disp,Rm),Rn */
	r9 = 0xFFE00000u; UPD(0x0C07D982u, 1);  /* 0C07D980 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C07D982 add Rm,Rn */
	r9 = 0xB0u; UPD(0x0C07D986u, 2);  /* 0C07D984 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C07D986 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C07D98Au, 2);  /* 0C07D988 mov.b @Rm,Rn */
	r8 = r3 & 0xFF;  /* 0C07D98A extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C07D98Eu, 2);  /* 0C07D98C mov.l Rm,@Rn */
	r8 = 0xA9u; UPD(0x0C07D990u, 1);  /* 0C07D98E mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C07D990 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C07D994u, 2);  /* 0C07D992 mov.b @Rm,Rn */
	r10 = r2 & 0xFF;  /* 0C07D994 extu.b Rm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C07D998u, 2);  /* 0C07D996 mov.l Rm,@(disp,Rn) */
	r10 = 0xC0AB240u; UPD(0x0C07D99Au, 1);  /* 0C07D998 mov.l @(disp,pc),Rn */
	r6 = R32(r12 + 0x24u); UPD(0x0C07D99Cu, 1);  /* 0C07D99A mov.l @(disp,Rm),Rn */
	IF(0x0C07D99Cu); { u32 t_ = r10; PR = 0x0C07D9A0u; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07D9A0u); }  /* 0C07D99C jsr @Rn */
L_0C07D9A0: BLKS(0x0C07D9A0u);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C07D9A2u, 1);  /* 0C07D9A0 mov.b @Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C07D9A4u, 1);  /* 0C07D9A2 mov.l @(disp,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C07D9A4 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C07D9A8u, 2);  /* 0C07D9A6 mov.l Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C07D9AAu, 1);  /* 0C07D9A8 mov.b @Rm,Rn */
	r5 = 0x6u;  /* 0C07D9AA mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C07D9AC extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C07D9B0u, 3);  /* 0C07D9AE mov.l Rm,@(disp,Rn) */
	r0 = 0x200000u; UPD(0x0C07D9B2u, 1);  /* 0C07D9B0 mov.l @(disp,pc),Rn */
	r9 = 0xC0A05D0u; UPD(0x0C07D9B4u, 1);  /* 0C07D9B2 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C07D9B4 add Rm,Rn */
	r4 = R32(r12); UPD(0x0C07D9B8u, 2);  /* 0C07D9B6 mov.l @Rm,Rn */
	IF(0x0C07D9B8u); { u32 t_ = r10; PR = 0x0C07D9BCu; r6 = R32(r12 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C07D9BCu); }  /* 0C07D9B8 jsr @Rn */
L_0C07D9BC: BLKS(0x0C07D9BCu);
	r15 += 0x8u;  /* 0C07D9BC add #imm,Rn */
	IF(0x0C07D9BEu); { u32 t_ = r9; PR = 0x0C07D9C2u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C07D9C2u); }  /* 0C07D9BE jsr @Rn */
L_0C07D9C2: BLKS(0x0C07D9C2u);
	IF(0x0C07D9C2u); T = (s32)r0 >= 0;  /* 0C07D9C2 cmp/pz Rn */
	if (!T) { UPD(0x0C07D9D6u, 4); goto L_0C07D9D6; }  /* 0C07D9C4 bf */
L_0C07D9C6: BLKS(0x0C07D9C6u);
	r5 = r0;  /* 0C07D9C6 mov Rm,Rn */
	r4 = 0xFFFE0000u; UPD(0x0C07D9CAu, 2);  /* 0C07D9C8 mov.l @(disp,pc),Rn */
	r6 = R32(r12 + 0x2Cu); UPD(0x0C07D9CCu, 1);  /* 0C07D9CA mov.l @(disp,Rm),Rn */
	r11 = 0xC06CD90u; UPD(0x0C07D9CEu, 1);  /* 0C07D9CC mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C07D9CE add Rm,Rn */
	r4 = 0x8u;  /* 0C07D9D0 mov #imm,Rn */
	IF(0x0C07D9D2u); { u32 t_ = r11; PR = 0x0C07D9D6u; r7 = R32(r12 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C06CD90, 0x0C06CD90u, 0x0C07D9D6u); }  /* 0C07D9D2 jsr @Rn */
L_0C07D9D6: BLKS(0x0C07D9D6u);
	r5 = 0x0u;  /* 0C07D9D6 mov #imm,Rn */
	{ W32(r12, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C07D8E0u, 4); goto L_0C07D8E0; }  /* 0C07D9D8 bra */
L_0C07D9E0: BLKS(0x0C07D9E0u);
	r2 = 0xB4u; UPD(0x0C07D9E2u, 1);  /* 0C07D9E0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07D9E2 add #imm,Rn */
	IF(0x0C07D9E4u); MACL = r11 * r2;  /* 0C07D9E4 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C07D9E8u, 4);  /* 0C07D9E6 mov.l @(disp,pc),Rn */
	IF(0x0C07D9E8u); r8 = MACL;  /* 0C07D9E8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C07D9ECu, 2);  /* 0C07D9EA mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C07D9EC add Rm,Rn */
	IF(0x0C07D9EEu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07D9F0u, 2);  /* 0C07D9EE mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C07D9F0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C07D9F4u, 2);  /* 0C07D9F2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07D9F4 add #imm,Rn */
	IF(0x0C07D9F6u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07D9F8u, 2);  /* 0C07D9F6 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C07D9F8 mov #imm,Rn */
	r7 = r4 & 0xFF;  /* 0C07D9FA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C07D9FEu, 3);  /* 0C07D9FC mov.l Rm,@(disp,Rn) */
	r12 = 0xC0AC800u; UPD(0x0C07DA00u, 1);  /* 0C07D9FE mov.l @(disp,pc),Rn */
	r9 = 0xC0A05D0u; UPD(0x0C07DA02u, 1);  /* 0C07DA00 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C07DA04u, 1);  /* 0C07DA02 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07DA06u, 1);  /* 0C07DA04 mov.l @(disp,Rm),Rn */
	IF(0x0C07DA06u); { u32 t_ = r12; PR = 0x0C07DA0Au; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C07DA0Au); }  /* 0C07DA06 jsr @Rn */
L_0C07DA0A: BLKS(0x0C07DA0Au);
	r15 += 0x8u;  /* 0C07DA0A add #imm,Rn */
	IF(0x0C07DA0Cu); { u32 t_ = r9; PR = 0x0C07DA10u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C07DA10u); }  /* 0C07DA0C jsr @Rn */
L_0C07DA10: BLKS(0x0C07DA10u);
	IF(0x0C07DA10u); T = (s32)r0 >= 0;  /* 0C07DA10 cmp/pz Rn */
	if (!T) { UPD(0x0C07D96Au, 4); goto L_0C07D96A; }  /* 0C07DA12 bf */
L_0C07DA14: BLKS(0x0C07DA14u);
	r6 = R32(r8 + 0x2Cu); UPD(0x0C07DA16u, 1);  /* 0C07DA14 mov.l @(disp,Rm),Rn */
	r4 = 0x2u;  /* 0C07DA16 mov #imm,Rn */
	r11 = 0xFFFE0000u; UPD(0x0C07DA1Au, 2);  /* 0C07DA18 mov.l @(disp,pc),Rn */
	r5 = r0;  /* 0C07DA1A mov Rm,Rn */
	r6 += r11;  /* 0C07DA1C add Rm,Rn */
	UPD(0x0C07DA1Eu, 2);
L_0C07DA1E: BLKS(0x0C07DA1Eu);
	r12 = 0xC06CD90u; UPD(0x0C07DA20u, 1);  /* 0C07DA1E mov.l @(disp,pc),Rn */
	IF(0x0C07DA20u); { u32 t_ = r12; PR = 0x0C07DA24u; r7 = R32(r8 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C06CD90, 0x0C06CD90u, 0x0C07DA24u); }  /* 0C07DA20 jsr @Rn */
L_0C07DA24: BLKS(0x0C07DA24u);
	{ r2 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C07D96Cu, 3); goto L_0C07D96C; }  /* 0C07DA24 bra */
L_0C07DA30: BLKS(0x0C07DA30u);
	r8 = 0xB4u; UPD(0x0C07DA32u, 1);  /* 0C07DA30 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07DA32 add #imm,Rn */
	IF(0x0C07DA34u); MACL = r11 * r8;  /* 0C07DA34 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07DA38u, 4);  /* 0C07DA36 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C07DA38 mov #imm,Rn */
	IF(0x0C07DA3Au); r8 = MACL;  /* 0C07DA3A sts macl,Rn */
	r8 += r0;  /* 0C07DA3C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07DA40u, 4);  /* 0C07DA3E mov.w @(disp,pc),Rn */
	IF(0x0C07DA40u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07DA42u, 1);  /* 0C07DA40 mov.b @(r0,Rm),Rn */
	r12 = r7 & 0xFF;  /* 0C07DA42 extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C07DA46u, 2);  /* 0C07DA44 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07DA46 add #imm,Rn */
	IF(0x0C07DA48u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07DA4Au, 2);  /* 0C07DA48 mov.b @(r0,Rm),Rn */
	r3 = r9 & 0xFF;  /* 0C07DA4A extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C07DA4Eu, 2);  /* 0C07DA4C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07DA50u, 1);  /* 0C07DA4E mov.l @Rm,Rn */
L_0C07DA50: BLKS(0x0C07DA50u);
	r9 = 0xC0AC800u; UPD(0x0C07DA52u, 1);  /* 0C07DA50 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07DA54u, 1);  /* 0C07DA52 mov.l @(disp,Rm),Rn */
	IF(0x0C07DA54u); { u32 t_ = r9; PR = 0x0C07DA58u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC800, 0x0C0AC800u, 0x0C07DA58u); }  /* 0C07DA54 jsr @Rn */
L_0C07DA58: BLKS(0x0C07DA58u);
	r4 = r11;  /* 0C07DA58 mov Rm,Rn */
	r11 = 0xC0A05D0u; UPD(0x0C07DA5Cu, 2);  /* 0C07DA5A mov.l @(disp,pc),Rn */
	IF(0x0C07DA5Cu); { u32 t_ = r11; PR = 0x0C07DA60u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C07DA60u); }  /* 0C07DA5C jsr @Rn */
L_0C07DA60: BLKS(0x0C07DA60u);
	IF(0x0C07DA60u); T = (s32)r0 >= 0;  /* 0C07DA60 cmp/pz Rn */
	if (!T) { UPD(0x0C07DA24u, 4); goto L_0C07DA24; }  /* 0C07DA62 bf */
L_0C07DA64: BLKS(0x0C07DA64u);
	r6 = R32(r8 + 0x2Cu); UPD(0x0C07DA66u, 1);  /* 0C07DA64 mov.l @(disp,Rm),Rn */
	r4 = 0x2u;  /* 0C07DA66 mov #imm,Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C07DA1Eu, 4); goto L_0C07DA1E; }  /* 0C07DA68 bra */
L_0C07DA70: BLKS(0x0C07DA70u);
	r3 = 0xB4u; UPD(0x0C07DA72u, 1);  /* 0C07DA70 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07DA72 add #imm,Rn */
	IF(0x0C07DA74u); MACL = r11 * r3;  /* 0C07DA74 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C07DA78u, 4);  /* 0C07DA76 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C07DA7Au, 1);  /* 0C07DA78 mov.w @(disp,pc),Rn */
	IF(0x0C07DA7Au); r8 = MACL;  /* 0C07DA7A sts macl,Rn */
	r8 += r2;  /* 0C07DA7C add Rm,Rn */
	IF(0x0C07DA7Eu); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07DA80u, 3);  /* 0C07DA7E mov.b @(r0,Rm),Rn */
	r6 = r10 & 0xFF;  /* 0C07DA80 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C07DA84u, 2);  /* 0C07DA82 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07DA84 add #imm,Rn */
	IF(0x0C07DA86u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07DA88u, 2);  /* 0C07DA86 mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C07DA88 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07DA8Cu, 2);  /* 0C07DA8A mov.l Rm,@(disp,Rn) */
	r5 = 0x2u;  /* 0C07DA8C mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C07DA50u, 4); goto L_0C07DA50; }  /* 0C07DA8E bra */
L_0C07DAD0: BLKS(0x0C07DAD0u);
	r8 = 0xB4u; UPD(0x0C07DAD2u, 1);  /* 0C07DAD0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07DAD2 add #imm,Rn */
	IF(0x0C07DAD4u); MACL = r11 * r8;  /* 0C07DAD4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C07DAD8u, 4);  /* 0C07DAD6 mov.l @(disp,pc),Rn */
	IF(0x0C07DAD8u); r8 = MACL;  /* 0C07DAD8 sts macl,Rn */
	r8 += r0;  /* 0C07DADA add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07DADEu, 3);  /* 0C07DADC mov.w @(disp,pc),Rn */
	IF(0x0C07DADEu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07DAE0u, 1);  /* 0C07DADE mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C07DAE0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C07DAE4u, 2);  /* 0C07DAE2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07DAE4 add #imm,Rn */
	IF(0x0C07DAE6u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07DAE8u, 2);  /* 0C07DAE6 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C07DAE8 mov #imm,Rn */
	r7 = r4 & 0xFF;  /* 0C07DAEA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C07DAEEu, 3);  /* 0C07DAEC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C07D960u, 3); goto L_0C07D960; }  /* 0C07DAEE bra */
}


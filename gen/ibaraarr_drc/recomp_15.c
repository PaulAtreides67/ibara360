#include "recomp.h"
#include "recomp_funcs.h"

void f_0C08BF90(sh3_t *c)
{
	LOCALS;
L_0C08BF90: BLKS(0x0C08BF90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08BF92u, 1);  /* 0C08BF90 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C08BF92 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08BF96u, 2);  /* 0C08BF94 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08BF98u, 1);  /* 0C08BF96 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08BF9Au, 1);  /* 0C08BF98 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C08BF9Cu, 1);  /* 0C08BF9A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08BF9Eu, 1);  /* 0C08BF9C mov.l Rm,@-Rn */
	IF(0x0C08BF9Eu); MACL = r4 * r0;  /* 0C08BF9E mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08BFA2u, 3);  /* 0C08BFA0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08BFA4u, 1);  /* 0C08BFA2 mov.l Rm,@-Rn */
	IF(0x0C08BFA4u); r8 = MACL;  /* 0C08BFA4 sts macl,Rn */
	r0 = 0xC26CD40u; UPD(0x0C08BFA8u, 2);  /* 0C08BFA6 mov.l @(disp,pc),Rn */
	IF(0x0C08BFA8u); r15 -= 4; W32(r15, PR); UPD(0x0C08BFAAu, 1);  /* 0C08BFA8 sts.l pr,@-Rn */
	r8 += r0;  /* 0C08BFAA add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C08BFAEu, 2);  /* 0C08BFAC mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C08BFAE tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08C090u, 4); goto L_0C08C090; } goto L_0C08BFB4; }  /* 0C08BFB0 bt/s */
L_0C08BFB4: BLKS(0x0C08BFB4u);
	T = r0 == 0x8u;  /* 0C08BFB4 cmp/eq #imm,r0 */
	{ u32 c_ = T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08C010u, 5); goto L_0C08C010; } goto L_0C08BFBA; }  /* 0C08BFB6 bt/s */
L_0C08BFBA: BLKS(0x0C08BFBAu);
	r8 = 0xB4u; UPD(0x0C08BFBCu, 2);  /* 0C08BFBA mov.w @(disp,pc),Rn */
	IF(0x0C08BFBCu); MACL = r4 * r8;  /* 0C08BFBC mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08BFC0u, 3);  /* 0C08BFBE mov.l @(disp,pc),Rn */
	IF(0x0C08BFC0u); r3 = MACL;  /* 0C08BFC0 sts macl,Rn */
	r6 = 0x98u; UPD(0x0C08BFC4u, 2);  /* 0C08BFC2 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C08BFC4 add Rm,Rn */
	r6 += r3;  /* 0C08BFC6 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C08BFCAu, 3);  /* 0C08BFC8 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C08BFCA add #imm,Rn */
	W8(r6, r0); UPD(0x0C08BFCEu, 2);  /* 0C08BFCC mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C08BFCE and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08BFD0 tst Rm,Rn */
	if (!T) { UPD(0x0C08BFF0u, 5); goto L_0C08BFF0; }  /* 0C08BFD2 bf */
L_0C08BFD4: BLKS(0x0C08BFD4u);
	r15 = r14;  /* 0C08BFD4 mov Rm,Rn */
	IF(0x0C08BFD6u); PR = R32(r15); r15 += 4; UPD(0x0C08BFD8u, 2);  /* 0C08BFD6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08BFDAu, 1);  /* 0C08BFD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08BFDCu, 1);  /* 0C08BFDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08BFDEu, 1);  /* 0C08BFDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08BFE0u, 1);  /* 0C08BFDE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08BFE2u, 1);  /* 0C08BFE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08BFE4u, 1);  /* 0C08BFE2 mov.l @Rm+,Rn */
	IF(0x0C08BFE4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08BFE4 rts */
L_0C08BFF0: BLKS(0x0C08BFF0u);
	r0 = 0x88u; UPD(0x0C08BFF2u, 1);  /* 0C08BFF0 mov.w @(disp,pc),Rn */
	r9 = R32(r3 + 0xCu); UPD(0x0C08BFF4u, 1);  /* 0C08BFF2 mov.l @(disp,Rm),Rn */
	IF(0x0C08BFF4u); r1 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C08BFF6u, 1);  /* 0C08BFF4 mov.w @(r0,Rm),Rn */
	r9 += r1;  /* 0C08BFF6 add Rm,Rn */
	W32(r3 + 0xCu, r9); UPD(0x0C08BFFAu, 2);  /* 0C08BFF8 mov.l Rm,@(disp,Rn) */
L_0C08BFFA: BLKS(0x0C08BFFAu);
	r0 = 0xC0A0380u; UPD(0x0C08BFFCu, 1);  /* 0C08BFFA mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08BFFC mov Rm,Rn */
	IF(0x0C08BFFEu); PR = R32(r15); r15 += 4; UPD(0x0C08C000u, 2);  /* 0C08BFFE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08C002u, 1);  /* 0C08C000 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08C004u, 1);  /* 0C08C002 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08C006u, 1);  /* 0C08C004 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08C008u, 1);  /* 0C08C006 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08C00Au, 1);  /* 0C08C008 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08C00Cu, 1);  /* 0C08C00A mov.l @Rm+,Rn */
	IF(0x0C08C00Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A0380u: TAIL(f_0C0A0380); default: JUMPD(tv_); } }  /* 0C08C00C jmp @Rn */
L_0C08C010: BLKS(0x0C08C010u);
	r11 = 0xA3u; UPD(0x0C08C012u, 1);  /* 0C08C010 mov.w @(disp,pc),Rn */
	IF(0x0C08C012u); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C08C014u, 1);  /* 0C08C012 mov.b @(r0,Rm),Rn */
	IF(0x0C08C014u); T = (s32)r10 >= 0;  /* 0C08C014 cmp/pz Rn */
	{ u32 c_ = T; r5 = 0x32u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08C080u, 4); goto L_0C08C080; } goto L_0C08C01A; }  /* 0C08C016 bt/s */
L_0C08C01A: BLKS(0x0C08C01Au);
	r13 = 0xC0A9E40u; UPD(0x0C08C01Cu, 2);  /* 0C08C01A mov.l @(disp,pc),Rn */
	IF(0x0C08C01Cu); { u32 t_ = r13; PR = 0x0C08C020u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C08C020u); }  /* 0C08C01C jsr @Rn */
L_0C08C020: BLKS(0x0C08C020u);
	T = (r0 & r0) == 0;  /* 0C08C020 tst Rm,Rn */
	if (T) { UPD(0x0C08BFD4u, 4); goto L_0C08BFD4; }  /* 0C08C022 bt */
L_0C08C024: BLKS(0x0C08C024u);
	r11 = 0x0u;  /* 0C08C024 mov #imm,Rn */
	r13 = r8;  /* 0C08C026 mov Rm,Rn */
	r12 = 0x0u;  /* 0C08C028 mov #imm,Rn */
	IF(0x0C08C02Au); ;  /* 0C08C02A nop */
	UPD(0x0C08C02Cu, 4);
L_0C08C02C: BLKS(0x0C08C02Cu);
	r8 = 0xC1BB7BCu; UPD(0x0C08C02Eu, 1);  /* 0C08C02C mov.l @(disp,pc),Rn */
	r4 = 0x20u;  /* 0C08C02E mov #imm,Rn */
	r8 += r12;  /* 0C08C030 add Rm,Rn */
	r9 = R32(r8); UPD(0x0C08C034u, 3);  /* 0C08C032 mov.l @Rm,Rn */
	r12 += 0xCu;  /* 0C08C034 add #imm,Rn */
	r10 = R32(r13 + 0x24u); UPD(0x0C08C038u, 2);  /* 0C08C036 mov.l @(disp,Rm),Rn */
	r10 += r9;  /* 0C08C038 add Rm,Rn */
	r0 = R32(r8 + 0x4u); UPD(0x0C08C03Cu, 2);  /* 0C08C03A mov.l @(disp,Rm),Rn */
	r9 = R32(r13 + 0x28u); UPD(0x0C08C03Eu, 1);  /* 0C08C03C mov.l @(disp,Rm),Rn */
	r9 += r0;  /* 0C08C03E add Rm,Rn */
	r0 = 0xC050D70u; UPD(0x0C08C042u, 2);  /* 0C08C040 mov.l @(disp,pc),Rn */
	IF(0x0C08C042u); { u32 t_ = r0; PR = 0x0C08C046u; r8 += 0xAu; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C08C046u); }  /* 0C08C042 jsr @Rn */
L_0C08C046: BLKS(0x0C08C046u);
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C08C048u, 1);  /* 0C08C046 mov.w @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08C048 add #imm,Rn */
	r6 = 0x30000u; UPD(0x0C08C04Cu, 2);  /* 0C08C04A mov.l @(disp,pc),Rn */
	r0 += r7;  /* 0C08C04C add Rm,Rn */
	r5 = 0xC177942u; UPD(0x0C08C050u, 2);  /* 0C08C04E mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFF0u;  /* 0C08C050 add #imm,Rn */
	r3 = 0xC7C1710u; UPD(0x0C08C054u, 2);  /* 0C08C052 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C08C054 exts.w Rm,Rn */
	W32(r15, r6); UPD(0x0C08C058u, 2);  /* 0C08C056 mov.l Rm,@Rn */
	r4 = 0x3u;  /* 0C08C058 mov #imm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08C05Cu, 2);  /* 0C08C05A mov.l Rm,@(disp,Rn) */
	r6 = r9;  /* 0C08C05C mov Rm,Rn */
	r5 = r10;  /* 0C08C05E mov Rm,Rn */
	IF(0x0C08C060u); { u32 t_ = r3; PR = 0x0C08C064u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C7C1710, 0x0C7C1710u, 0x0C08C064u); }  /* 0C08C060 jsr @Rn */
L_0C08C064: BLKS(0x0C08C064u);
	r2 = r11;  /* 0C08C064 mov Rm,Rn */
	r2 += 0x1u;  /* 0C08C066 add #imm,Rn */
	r11 = (u32)(s32)(s16)r2;  /* 0C08C068 exts.w Rm,Rn */
	r4 = 0x5u;  /* 0C08C06A mov #imm,Rn */
	T = (s32)r11 > (s32)r4;  /* 0C08C06C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08C02Cu, 8); goto L_0C08C02C; } goto L_0C08C072; }  /* 0C08C06E bf/s */
L_0C08C072: BLKS(0x0C08C072u);
	{ IF(0x0C08C074u); ; /* slot nop */ UPD(0x0C08BFD4u, 4); goto L_0C08BFD4; }  /* 0C08C072 bra */
L_0C08C080: BLKS(0x0C08C080u);
	r0 = 0x88u; UPD(0x0C08C082u, 1);  /* 0C08C080 mov.w @(disp,pc),Rn */
	r12 = 0xFFFFFFFFu;  /* 0C08C082 mov #imm,Rn */
	IF(0x0C08C084u); W16(r0 + r8, r12); UPD(0x0C08C086u, 2);  /* 0C08C084 mov.w Rm,@(r0,Rn) */
	r1 = 0x7u;  /* 0C08C086 mov #imm,Rn */
	UPD(0x0C08C088u, 1);
L_0C08C088: BLKS(0x0C08C088u);
	{ W32(r8 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08BFFAu, 3); goto L_0C08BFFA; }  /* 0C08C088 bra */
L_0C08C090: BLKS(0x0C08C090u);
	r3 = 0xA3u; UPD(0x0C08C092u, 1);  /* 0C08C090 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08C092 mov Rm,Rn */
	IF(0x0C08C094u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08C096u, 2);  /* 0C08C094 mov.b @(r0,Rm),Rn */
	IF(0x0C08C096u); T = (s32)r2 >= 0;  /* 0C08C096 cmp/pz Rn */
	if (T) { UPD(0x0C08BFD4u, 4); goto L_0C08BFD4; }  /* 0C08C098 bt */
L_0C08C09A: BLKS(0x0C08C09Au);
	r5 = 0x1u;  /* 0C08C09A mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C08C09Eu, 2);  /* 0C08C09C mov.w @(disp,pc),Rn */
	IF(0x0C08C09Eu); W16(r0 + r8, r5); UPD(0x0C08C0A0u, 1);  /* 0C08C09E mov.w Rm,@(r0,Rn) */
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C08C088u, 3); goto L_0C08C088; }  /* 0C08C0A0 bra */
}

void f_0C08C0D0(sh3_t *c)
{
	LOCALS;
L_0C08C0D0: BLKS(0x0C08C0D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08C0D2u, 1);  /* 0C08C0D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08C0D4u, 1);  /* 0C08C0D2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08C0D6u, 1);  /* 0C08C0D4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08C0D8u, 1);  /* 0C08C0D6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08C0DAu, 1);  /* 0C08C0D8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08C0DCu, 1);  /* 0C08C0DA mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C08C0DEu, 1);  /* 0C08C0DC mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C08C0DE exts.w Rm,Rn */
	IF(0x0C08C0E0u); MACL = r13 * r3;  /* 0C08C0E0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08C0E4u, 4);  /* 0C08C0E2 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C08C0E6u, 1);  /* 0C08C0E4 mov.l @(disp,pc),Rn */
	IF(0x0C08C0E6u); r2 = MACL;  /* 0C08C0E6 sts macl,Rn */
	IF(0x0C08C0E8u); r15 -= 4; W32(r15, PR); UPD(0x0C08C0EAu, 2);  /* 0C08C0E8 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08C0EA add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08C0EEu, 2);  /* 0C08C0EC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFD8u;  /* 0C08C0EE add #imm,Rn */
	r0 = 0x27u;  /* 0C08C0F0 mov #imm,Rn */
	T = r2 > r0;  /* 0C08C0F2 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08C0FCu, 6); goto L_0C08C0FC; } goto L_0C08C0F8; }  /* 0C08C0F4 bf/s */
L_0C08C0F8: BLKS(0x0C08C0F8u);
	{ r14 += 0x28u; /* slot add #imm,Rn */ UPD(0x0C08C20Au, 4); goto L_0C08C20A; }  /* 0C08C0F8 bra */
L_0C08C0FC: BLKS(0x0C08C0FCu);
	r0 = 0xC08C10Cu;  /* 0C08C0FC mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08C0FE add Rm,Rn */
	IF(0x0C08C100u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08C102u, 3);  /* 0C08C100 mov.w @(r0,Rm),Rn */
	IF(0x0C08C102u); { u32 tv_ = (r4 + 0x0C08C106u); u32 t_ = PHYS(tv_); IF(0x0C08C104u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C160u: goto L_0C08C160; case 0x0C08C208u: goto L_0C08C208; case 0x0C08C290u: goto L_0C08C290; case 0x0C08C330u: goto L_0C08C330; case 0x0C08C550u: goto L_0C08C550; case 0x0C08C970u: goto L_0C08C970; case 0x0C08C9C0u: goto L_0C08C9C0; case 0x0C08CAB0u: goto L_0C08CAB0; case 0x0C08CB40u: goto L_0C08CB40; case 0x0C08CB90u: goto L_0C08CB90; case 0x0C08CC40u: goto L_0C08CC40; case 0x0C08CE80u: goto L_0C08CE80; case 0x0C08D070u: goto L_0C08D070; case 0x0C08D290u: goto L_0C08D290; case 0x0C08D520u: goto L_0C08D520; case 0x0C08D720u: goto L_0C08D720; case 0x0C08D860u: goto L_0C08D860; case 0x0C08D900u: goto L_0C08D900; case 0x0C08D9D0u: goto L_0C08D9D0; case 0x0C08DB20u: goto L_0C08DB20; case 0x0C08DD00u: goto L_0C08DD00; case 0x0C08DE30u: goto L_0C08DE30; case 0x0C08DFC0u: goto L_0C08DFC0; default: JUMPD(tv_); } }  /* 0C08C102 braf Rn */
L_0C08C160: BLKS(0x0C08C160u);
	r7 = 0xB4u; UPD(0x0C08C162u, 1);  /* 0C08C160 mov.w @(disp,pc),Rn */
	IF(0x0C08C162u); MACL = r13 * r7;  /* 0C08C162 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C08C166u, 3);  /* 0C08C164 mov.l @(disp,pc),Rn */
	IF(0x0C08C166u); r10 = MACL;  /* 0C08C166 sts macl,Rn */
	r10 += r6;  /* 0C08C168 add Rm,Rn */
	r10 += 0x3Cu;  /* 0C08C16A add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C08C16Eu, 4);  /* 0C08C16C mov.w @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C08C16E tst Rm,Rn */
	{ u32 c_ = !T; r10 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08C240u, 4); goto L_0C08C240; } goto L_0C08C174; }  /* 0C08C170 bf/s */
L_0C08C174: BLKS(0x0C08C174u);
	r9 = 0xC0A1700u; UPD(0x0C08C176u, 2);  /* 0C08C174 mov.l @(disp,pc),Rn */
	IF(0x0C08C176u); { u32 t_ = r9; PR = 0x0C08C17Au; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C08C17Au); }  /* 0C08C176 jsr @Rn */
L_0C08C17A: BLKS(0x0C08C17Au);
	r8 = R32(r10 + 0x2Cu); UPD(0x0C08C17Cu, 1);  /* 0C08C17A mov.l @(disp,Rm),Rn */
	r2 = 0xF0u; UPD(0x0C08C17Eu, 1);  /* 0C08C17C mov.w @(disp,pc),Rn */
	IF(0x0C08C17Eu); MACL = r8 * r2;  /* 0C08C17E mul.l Rm,Rn */
	IF(0x0C08C180u); r3 = MACL;  /* 0C08C180 sts macl,Rn */
	IF(0x0C08C182u); T = (s32)r3 >= 0;  /* 0C08C182 cmp/pz Rn */
	if (!T) { UPD(0x0C08C230u, 7); goto L_0C08C230; }  /* 0C08C184 bf */
L_0C08C186: BLKS(0x0C08C186u);
	r12 = R32(r10 + 0x30u); UPD(0x0C08C188u, 1);  /* 0C08C186 mov.l @(disp,Rm),Rn */
	r7 = 0xFFFFFFF8u;  /* 0C08C188 mov #imm,Rn */
	IF(0x0C08C18Au); MACL = r12 * r2;  /* 0C08C18A mul.l Rm,Rn */
	IF(0x0C08C18Cu); ARG0(0x437Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C08C18C shad Rm,Rn */
	IF(0x0C08C18Eu); r2 = MACL;  /* 0C08C18E sts macl,Rn */
	IF(0x0C08C190u); T = (s32)r2 >= 0;  /* 0C08C190 cmp/pz Rn */
	{ u32 c_ = !T; W32(r10 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08C220u, 9); goto L_0C08C220; } UPD(0x0C08C196u, 1); goto L_0C08C196; }  /* 0C08C192 bf/s */
L_0C08C196: BLKS(0x0C08C196u);
	r0 = R32(r10 + 0x24u); UPD(0x0C08C198u, 1);  /* 0C08C196 mov.l @(disp,Rm),Rn */
	IF(0x0C08C198u); ARG0(0x427Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C08C198 shad Rm,Rn */
	r0 += r3;  /* 0C08C19A add Rm,Rn */
	r3 = R32(r10 + 0x28u); UPD(0x0C08C19Eu, 3);  /* 0C08C19C mov.l @(disp,Rm),Rn */
	r13 = 0xC0AFE40u; UPD(0x0C08C1A0u, 1);  /* 0C08C19E mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C08C1A0 add Rm,Rn */
	r12 = 0xC058060u; UPD(0x0C08C1A4u, 2);  /* 0C08C1A2 mov.l @(disp,pc),Rn */
	W32(r10 + 0x30u, r2); UPD(0x0C08C1A6u, 1);  /* 0C08C1A4 mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x28u, r3); UPD(0x0C08C1A8u, 1);  /* 0C08C1A6 mov.l Rm,@(disp,Rn) */
	r9 = 0x180000u; UPD(0x0C08C1AAu, 1);  /* 0C08C1A8 mov.l @(disp,pc),Rn */
	IF(0x0C08C1AAu); { u32 t_ = r13; PR = 0x0C08C1AEu; W32(r10 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C08C1AEu); }  /* 0C08C1AA jsr @Rn */
L_0C08C1AE: BLKS(0x0C08C1AEu);
	r8 = (u32)(s32)(s16)r0;  /* 0C08C1AE exts.w Rm,Rn */
	r4 = r8;  /* 0C08C1B0 mov Rm,Rn */
	IF(0x0C08C1B2u); { u32 t_ = r12; PR = 0x0C08C1B6u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C08C1B6u); }  /* 0C08C1B2 jsr @Rn */
L_0C08C1B6: BLKS(0x0C08C1B6u);
	r11 = R32(r10 + 0x24u); UPD(0x0C08C1B8u, 1);  /* 0C08C1B6 mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C08C1B8 mov Rm,Rn */
	r12 = 0xC058030u; UPD(0x0C08C1BCu, 2);  /* 0C08C1BA mov.l @(disp,pc),Rn */
	r11 += r0;  /* 0C08C1BC add Rm,Rn */
	r5 = r9;  /* 0C08C1BE mov Rm,Rn */
	IF(0x0C08C1C0u); { u32 t_ = r12; PR = 0x0C08C1C4u; W32(r14 + 0x4u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C08C1C4u); }  /* 0C08C1C0 jsr @Rn */
L_0C08C1C4: BLKS(0x0C08C1C4u);
	r12 = R32(r10 + 0x28u); UPD(0x0C08C1C6u, 1);  /* 0C08C1C4 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C08C1C6 add #imm,Rn */
	IF(0x0C08C1C8u); { u32 t_ = r13; PR = 0x0C08C1CCu; r12 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C08C1CCu); }  /* 0C08C1C8 jsr @Rn */
L_0C08C1CC: BLKS(0x0C08C1CCu);
	r11 = 0xC1BB81Cu; UPD(0x0C08C1CEu, 1);  /* 0C08C1CC mov.l @(disp,pc),Rn */
	r0 &= 0x3u;  /* 0C08C1CE and #imm,r0 */
	IF(0x0C08C1D0u); r0 <<= 2;  /* 0C08C1D0 shll2 Rn */
	r11 += r0;  /* 0C08C1D2 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08C1D6u, 4);  /* 0C08C1D4 mov.w @(disp,pc),Rn */
	IF(0x0C08C1D6u); r9 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C08C1D8u, 1);  /* 0C08C1D6 mov.b @(r0,Rm),Rn */
	r7 = r9 & 0xFF;  /* 0C08C1D8 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C08C1DCu, 2);  /* 0C08C1DA mov.l Rm,@Rn */
	r0 = r10;  /* 0C08C1DC mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C08C1E0u, 2);  /* 0C08C1DE mov.w @(disp,pc),Rn */
	IF(0x0C08C1E0u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08C1E2u, 1);  /* 0C08C1E0 mov.b @(r0,Rm),Rn */
	r8 = 0xC050D70u; UPD(0x0C08C1E4u, 1);  /* 0C08C1E2 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C08C1E4 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C08C1E8u, 2);  /* 0C08C1E6 mov.l Rm,@(disp,Rn) */
	r0 = 0xFFFC0000u; UPD(0x0C08C1EAu, 1);  /* 0C08C1E8 mov.l @(disp,pc),Rn */
	r4 = 0x1000u; UPD(0x0C08C1ECu, 1);  /* 0C08C1EA mov.w @(disp,pc),Rn */
	IF(0x0C08C1ECu); { u32 t_ = r8; PR = 0x0C08C1F0u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C08C1F0u); }  /* 0C08C1EC jsr @Rn */
L_0C08C1F0: BLKS(0x0C08C1F0u);
	r3 = 0xFFFFF800u; UPD(0x0C08C1F2u, 1);  /* 0C08C1F0 mov.w @(disp,pc),Rn */
	r2 = 0x4u;  /* 0C08C1F2 mov #imm,Rn */
	r0 += r3;  /* 0C08C1F4 add Rm,Rn */
	IF(0x0C08C1F6u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C08C1F6 shld Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C08C1FAu, 4);  /* 0C08C1F8 mov.l Rm,@(disp,Rn) */
	r7 = r12;  /* 0C08C1FA mov Rm,Rn */
	r4 = R32(r10); UPD(0x0C08C1FEu, 2);  /* 0C08C1FC mov.l @Rm,Rn */
	r10 = 0xC7C1F94u; UPD(0x0C08C200u, 1);  /* 0C08C1FE mov.l @(disp,pc),Rn */
	r5 = R32(r11); UPD(0x0C08C202u, 1);  /* 0C08C200 mov.l @Rm,Rn */
	IF(0x0C08C202u); { u32 t_ = r10; PR = 0x0C08C206u; r6 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1F94, 0x0C7C1F94u, 0x0C08C206u); }  /* 0C08C202 jsr @Rn */
L_0C08C206: BLKS(0x0C08C206u);
	r15 += 0x10u;  /* 0C08C206 add #imm,Rn */
	UPD(0x0C08C208u, 1);
L_0C08C208: BLKS(0x0C08C208u);
	r14 += 0x28u;  /* 0C08C208 add #imm,Rn */
	UPD(0x0C08C20Au, 1);
L_0C08C20A: BLKS(0x0C08C20Au);
	r15 = r14;  /* 0C08C20A mov Rm,Rn */
	IF(0x0C08C20Cu); PR = R32(r15); r15 += 4; UPD(0x0C08C20Eu, 2);  /* 0C08C20C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08C210u, 1);  /* 0C08C20E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08C212u, 1);  /* 0C08C210 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08C214u, 1);  /* 0C08C212 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08C216u, 1);  /* 0C08C214 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08C218u, 1);  /* 0C08C216 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08C21Au, 1);  /* 0C08C218 mov.l @Rm+,Rn */
	IF(0x0C08C21Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08C21A rts */
L_0C08C220: BLKS(0x0C08C220u);
	r13 = 0xFFu; UPD(0x0C08C222u, 1);  /* 0C08C220 mov.w @(disp,pc),Rn */
	{ r2 += r13; /* slot add Rm,Rn */ UPD(0x0C08C196u, 3); goto L_0C08C196; }  /* 0C08C222 bra */
L_0C08C230: BLKS(0x0C08C230u);
	r11 = 0xFFu; UPD(0x0C08C232u, 1);  /* 0C08C230 mov.w @(disp,pc),Rn */
	{ r3 += r11; /* slot add Rm,Rn */ UPD(0x0C08C186u, 3); goto L_0C08C186; }  /* 0C08C232 bra */
L_0C08C240: BLKS(0x0C08C240u);
	r5 = 0xC08B290u; UPD(0x0C08C242u, 1);  /* 0C08C240 mov.l @(disp,pc),Rn */
	r8 = 0x86u; UPD(0x0C08C244u, 1);  /* 0C08C242 mov.w @(disp,pc),Rn */
	IF(0x0C08C244u); { u32 t_ = r5; PR = 0x0C08C248u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C08B290, 0x0C08B290u, 0x0C08C248u); }  /* 0C08C244 jsr @Rn */
L_0C08C248: BLKS(0x0C08C248u);
	r11 = 0x8Cu; UPD(0x0C08C24Au, 1);  /* 0C08C248 mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C08C24A add Rm,Rn */
	r12 = 0xC058060u; UPD(0x0C08C24Eu, 2);  /* 0C08C24C mov.l @(disp,pc),Rn */
	r11 += r10;  /* 0C08C24E add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C08C252u, 2);  /* 0C08C250 mov.w @Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C08C254u, 1);  /* 0C08C252 mov.l @(disp,pc),Rn */
	IF(0x0C08C254u); { u32 t_ = r12; PR = 0x0C08C258u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C08C258u); }  /* 0C08C254 jsr @Rn */
L_0C08C258: BLKS(0x0C08C258u);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C08C25Au, 1);  /* 0C08C258 mov.w @Rm,Rn */
	W32(r10 + 0x2Cu, r0); UPD(0x0C08C25Cu, 1);  /* 0C08C25A mov.l Rm,@(disp,Rn) */
	IF(0x0C08C25Cu); { u32 t_ = r9; PR = 0x0C08C260u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C08C260u); }  /* 0C08C25C jsr @Rn */
L_0C08C260: BLKS(0x0C08C260u);
	r4 = R32(r10 + 0x24u); UPD(0x0C08C262u, 1);  /* 0C08C260 mov.l @(disp,Rm),Rn */
	r1 = R32(r10 + 0x2Cu); UPD(0x0C08C264u, 1);  /* 0C08C262 mov.l @(disp,Rm),Rn */
	r2 = R32(r10 + 0x28u); UPD(0x0C08C266u, 1);  /* 0C08C264 mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C08C266 add Rm,Rn */
	W32(r10 + 0x24u, r4); UPD(0x0C08C26Au, 2);  /* 0C08C268 mov.l Rm,@(disp,Rn) */
	r2 += r0;  /* 0C08C26A add Rm,Rn */
	W32(r10 + 0x30u, r0); UPD(0x0C08C26Eu, 2);  /* 0C08C26C mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C08C26E mov Rm,Rn */
	W32(r10 + 0x28u, r2); UPD(0x0C08C272u, 2);  /* 0C08C270 mov.l Rm,@(disp,Rn) */
	r1 = 0xC08BF90u; UPD(0x0C08C274u, 1);  /* 0C08C272 mov.l @(disp,pc),Rn */
L_0C08C274: BLKS(0x0C08C274u);
	r14 += 0x28u;  /* 0C08C274 add #imm,Rn */
	UPD(0x0C08C276u, 1);
L_0C08C276: BLKS(0x0C08C276u);
	r15 = r14;  /* 0C08C276 mov Rm,Rn */
	IF(0x0C08C278u); PR = R32(r15); r15 += 4; UPD(0x0C08C27Au, 2);  /* 0C08C278 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08C27Cu, 1);  /* 0C08C27A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08C27Eu, 1);  /* 0C08C27C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08C280u, 1);  /* 0C08C27E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08C282u, 1);  /* 0C08C280 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08C284u, 1);  /* 0C08C282 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08C286u, 1);  /* 0C08C284 mov.l @Rm+,Rn */
	IF(0x0C08C286u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C08ADC0u: TAIL(f_0C08ADC0); case 0x0C0A0380u: TAIL(f_0C0A0380); case 0x0C0AFC10u: TAIL(f_0C0AFC10); default: JUMPD(tv_); } }  /* 0C08C286 jmp @Rn */
L_0C08C290: BLKS(0x0C08C290u);
	r10 = 0xC0A0540u; UPD(0x0C08C292u, 1);  /* 0C08C290 mov.l @(disp,pc),Rn */
	IF(0x0C08C292u); { u32 t_ = r10; PR = 0x0C08C296u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C08C296u); }  /* 0C08C292 jsr @Rn */
L_0C08C296: BLKS(0x0C08C296u);
	IF(0x0C08C296u); T = (s32)r0 >= 0;  /* 0C08C296 cmp/pz Rn */
	if (!T) { UPD(0x0C08C2D0u, 4); goto L_0C08C2D0; }  /* 0C08C298 bf */
L_0C08C29A: BLKS(0x0C08C29Au);
	r5 = 0xB4u; UPD(0x0C08C29Cu, 1);  /* 0C08C29A mov.w @(disp,pc),Rn */
	IF(0x0C08C29Cu); MACL = r13 * r5;  /* 0C08C29C mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C08C2A0u, 3);  /* 0C08C29E mov.l @(disp,pc),Rn */
	IF(0x0C08C2A0u); r13 = MACL;  /* 0C08C2A0 sts macl,Rn */
	r13 += r8;  /* 0C08C2A2 add Rm,Rn */
	r3 = R32(r13); UPD(0x0C08C2A6u, 3);  /* 0C08C2A4 mov.l @Rm,Rn */
	IF(0x0C08C2A6u); MACL = r0 * r5;  /* 0C08C2A6 mul.l Rm,Rn */
	r2 = 0xECFFFFFFu; UPD(0x0C08C2AAu, 3);  /* 0C08C2A8 mov.l @(disp,pc),Rn */
	r3 &= r2;  /* 0C08C2AA and Rm,Rn */
	W32(r13, r3); UPD(0x0C08C2AEu, 2);  /* 0C08C2AC mov.l Rm,@Rn */
	IF(0x0C08C2AEu); r0 = MACL;  /* 0C08C2AE sts macl,Rn */
	r0 += r8;  /* 0C08C2B0 add Rm,Rn */
	r7 = R32(r0); UPD(0x0C08C2B4u, 3);  /* 0C08C2B2 mov.l @Rm,Rn */
	r6 = 0x13000000u; UPD(0x0C08C2B6u, 1);  /* 0C08C2B4 mov.l @(disp,pc),Rn */
	r9 = R32(r0 + 0x24u); UPD(0x0C08C2B8u, 1);  /* 0C08C2B6 mov.l @(disp,Rm),Rn */
	r7 &= r6;  /* 0C08C2B8 and Rm,Rn */
	r4 = R32(r0 + 0x28u); UPD(0x0C08C2BCu, 2);  /* 0C08C2BA mov.l @(disp,Rm),Rn */
	r3 |= r7;  /* 0C08C2BC or Rm,Rn */
	r11 = R32(r13 + 0x2Cu); UPD(0x0C08C2C0u, 2);  /* 0C08C2BE mov.l @(disp,Rm),Rn */
	r1 = R32(r13 + 0x30u); UPD(0x0C08C2C2u, 1);  /* 0C08C2C0 mov.l @(disp,Rm),Rn */
	r9 += r11;  /* 0C08C2C2 add Rm,Rn */
	r4 += r1;  /* 0C08C2C4 add Rm,Rn */
	W32(r13 + 0x24u, r9); UPD(0x0C08C2C8u, 3);  /* 0C08C2C6 mov.l Rm,@(disp,Rn) */
	W32(r13 + 0x28u, r4); UPD(0x0C08C2CAu, 1);  /* 0C08C2C8 mov.l Rm,@(disp,Rn) */
	W32(r13, r3); UPD(0x0C08C2CCu, 1);  /* 0C08C2CA mov.l Rm,@Rn */
L_0C08C2CC: BLKS(0x0C08C2CCu);
	{ r14 += 0x28u; /* slot add #imm,Rn */ UPD(0x0C08C20Au, 3); goto L_0C08C20A; }  /* 0C08C2CC bra */
L_0C08C2D0: BLKS(0x0C08C2D0u);
	r1 = 0xC7C2E5Cu; UPD(0x0C08C2D2u, 1);  /* 0C08C2D0 mov.l @(disp,pc),Rn */
	{ r4 = r13; /* slot mov Rm,Rn */ UPD(0x0C08C274u, 3); goto L_0C08C274; }  /* 0C08C2D2 bra */
L_0C08C330: BLKS(0x0C08C330u);
	r12 = 0xC0A0540u; UPD(0x0C08C332u, 1);  /* 0C08C330 mov.l @(disp,pc),Rn */
	IF(0x0C08C332u); { u32 t_ = r12; PR = 0x0C08C336u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C08C336u); }  /* 0C08C332 jsr @Rn */
L_0C08C336: BLKS(0x0C08C336u);
	IF(0x0C08C336u); T = (s32)r0 >= 0;  /* 0C08C336 cmp/pz Rn */
	{ u32 c_ = !T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08C2D0u, 4); goto L_0C08C2D0; } goto L_0C08C33C; }  /* 0C08C338 bf/s */
L_0C08C33C: BLKS(0x0C08C33Cu);
	r7 = 0xB4u; UPD(0x0C08C33Eu, 2);  /* 0C08C33C mov.w @(disp,pc),Rn */
	IF(0x0C08C33Eu); MACL = r0 * r7;  /* 0C08C33E mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C08C342u, 3);  /* 0C08C340 mov.l @(disp,pc),Rn */
	IF(0x0C08C342u); r0 = MACL;  /* 0C08C342 sts macl,Rn */
	IF(0x0C08C344u); r3 = R32(r0 + r6); UPD(0x0C08C346u, 2);  /* 0C08C344 mov.l @(r0,Rm),Rn */
	r10 = 0x13000000u; UPD(0x0C08C348u, 1);  /* 0C08C346 mov.l @(disp,pc),Rn */
	T = (r3 & r10) == 0;  /* 0C08C348 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C08C34Cu); MACL = r13 * r7; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C08C35Eu, 5); goto L_0C08C35E; } goto L_0C08C34E; }  /* 0C08C34A bf/s */
L_0C08C34E: BLKS(0x0C08C34Eu);
	IF(0x0C08C34Eu); MACL = r13 * r7;  /* 0C08C34E mul.l Rm,Rn */
	r2 = 0xECFFFFFFu; UPD(0x0C08C352u, 5);  /* 0C08C350 mov.l @(disp,pc),Rn */
	IF(0x0C08C352u); r0 = MACL;  /* 0C08C352 sts macl,Rn */
	r0 += r6;  /* 0C08C354 add Rm,Rn */
	r4 = R32(r0); UPD(0x0C08C358u, 3);  /* 0C08C356 mov.l @Rm,Rn */
	r4 &= r2;  /* 0C08C358 and Rm,Rn */
	W32(r0, r4); UPD(0x0C08C35Cu, 2);  /* 0C08C35A mov.l Rm,@Rn */
	IF(0x0C08C35Cu); MACL = r13 * r7;  /* 0C08C35C mul.l Rm,Rn */
	UPD(0x0C08C35Eu, 2);
L_0C08C35E: BLKS(0x0C08C35Eu);
	r9 = 0x9Fu; UPD(0x0C08C360u, 1);  /* 0C08C35E mov.w @(disp,pc),Rn */
	IF(0x0C08C360u); r0 = MACL;  /* 0C08C360 sts macl,Rn */
	r0 += r6;  /* 0C08C362 add Rm,Rn */
	IF(0x0C08C364u); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08C366u, 3);  /* 0C08C364 mov.b @(r0,Rm),Rn */
	r7 = 0x3u;  /* 0C08C366 mov #imm,Rn */
	r2 = r6 & 0xFF;  /* 0C08C368 extu.b Rm,Rn */
	T = r2 > r7;  /* 0C08C36A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C08C2CCu, 6); goto L_0C08C2CC; }  /* 0C08C36C bt */
L_0C08C36E: BLKS(0x0C08C36Eu);
	r0 = 0xC08C38Cu;  /* 0C08C36E mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08C370 add Rm,Rn */
	IF(0x0C08C372u); r11 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08C374u, 3);  /* 0C08C372 mov.w @(r0,Rm),Rn */
	IF(0x0C08C374u); { u32 tv_ = (r11 + 0x0C08C378u); u32 t_ = PHYS(tv_); IF(0x0C08C376u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C3A0u: goto L_0C08C3A0; case 0x0C08C3E0u: goto L_0C08C3E0; case 0x0C08C440u: goto L_0C08C440; case 0x0C08C4C0u: goto L_0C08C4C0; default: JUMPD(tv_); } }  /* 0C08C374 braf Rn */
L_0C08C3A0: BLKS(0x0C08C3A0u);
	r0 = 0xB4u; UPD(0x0C08C3A2u, 1);  /* 0C08C3A0 mov.w @(disp,pc),Rn */
	IF(0x0C08C3A2u); MACL = r13 * r0;  /* 0C08C3A2 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C08C3A6u, 3);  /* 0C08C3A4 mov.l @(disp,pc),Rn */
	IF(0x0C08C3A6u); r3 = MACL;  /* 0C08C3A6 sts macl,Rn */
	IF(0x0C08C3A8u); MACL = r12 * r0;  /* 0C08C3A8 mul.l Rm,Rn */
	r3 += r4;  /* 0C08C3AA add Rm,Rn */
	r10 = R32(r3 + 0x2Cu); UPD(0x0C08C3AEu, 5);  /* 0C08C3AC mov.l @(disp,Rm),Rn */
	IF(0x0C08C3AEu); r0 = MACL;  /* 0C08C3AE sts macl,Rn */
	r0 += r4;  /* 0C08C3B0 add Rm,Rn */
	r12 = R32(r0 + 0x24u); UPD(0x0C08C3B4u, 3);  /* 0C08C3B2 mov.l @(disp,Rm),Rn */
	r5 = R32(r0 + 0x28u); UPD(0x0C08C3B6u, 1);  /* 0C08C3B4 mov.l @(disp,Rm),Rn */
	r12 += r10;  /* 0C08C3B6 add Rm,Rn */
	r1 = R32(r3 + 0x30u); UPD(0x0C08C3BAu, 2);  /* 0C08C3B8 mov.l @(disp,Rm),Rn */
	r8 = 0x9Au; UPD(0x0C08C3BCu, 1);  /* 0C08C3BA mov.w @(disp,pc),Rn */
	r5 += r1;  /* 0C08C3BC add Rm,Rn */
	IF(0x0C08C3BEu); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08C3C0u, 2);  /* 0C08C3BE mov.b @(r0,Rm),Rn */
	W32(r3 + 0x24u, r12); UPD(0x0C08C3C2u, 1);  /* 0C08C3C0 mov.l Rm,@(disp,Rn) */
	T = (r13 & r13) == 0;  /* 0C08C3C2 tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08C438u, 4); goto L_0C08C438; } UPD(0x0C08C3C8u, 1); goto L_0C08C3C8; }  /* 0C08C3C4 bt/s */
L_0C08C3C8: BLKS(0x0C08C3C8u);
	r0 = 0x9Fu; UPD(0x0C08C3CAu, 1);  /* 0C08C3C8 mov.w @(disp,pc),Rn */
	r4 = 0x6Cu;  /* 0C08C3CA mov #imm,Rn */
	IF(0x0C08C3CCu); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08C3CEu, 2);  /* 0C08C3CC mov.b @(r0,Rm),Rn */
	r7 += 0x1u;  /* 0C08C3CE add #imm,Rn */
	IF(0x0C08C3D0u); W8(r0 + r3, r7); UPD(0x0C08C3D2u, 2);  /* 0C08C3D0 mov.b Rm,@(r0,Rn) */
L_0C08C3D2: BLKS(0x0C08C3D2u);
	r1 = 0xC0AFC10u; UPD(0x0C08C3D4u, 1);  /* 0C08C3D2 mov.l @(disp,pc),Rn */
	{ r14 += 0x28u; /* slot add #imm,Rn */ UPD(0x0C08C276u, 3); goto L_0C08C276; }  /* 0C08C3D4 bra */
L_0C08C3E0: BLKS(0x0C08C3E0u);
	r0 = 0xB4u; UPD(0x0C08C3E2u, 1);  /* 0C08C3E0 mov.w @(disp,pc),Rn */
	IF(0x0C08C3E2u); MACL = r13 * r0;  /* 0C08C3E2 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C08C3E6u, 3);  /* 0C08C3E4 mov.l @(disp,pc),Rn */
	IF(0x0C08C3E6u); r11 = MACL;  /* 0C08C3E6 sts macl,Rn */
	IF(0x0C08C3E8u); MACL = r12 * r0;  /* 0C08C3E8 mul.l Rm,Rn */
	r11 += r4;  /* 0C08C3EA add Rm,Rn */
	r9 = 0x88u; UPD(0x0C08C3EEu, 5);  /* 0C08C3EC mov.w @(disp,pc),Rn */
	IF(0x0C08C3EEu); r12 = MACL;  /* 0C08C3EE sts macl,Rn */
	r12 += r4;  /* 0C08C3F0 add Rm,Rn */
	r5 = R32(r11 + 0x2Cu); UPD(0x0C08C3F4u, 3);  /* 0C08C3F2 mov.l @(disp,Rm),Rn */
	r9 += r11;  /* 0C08C3F4 add Rm,Rn */
	r10 = R32(r12 + 0x24u); UPD(0x0C08C3F8u, 2);  /* 0C08C3F6 mov.l @(disp,Rm),Rn */
	r13 = r11;  /* 0C08C3F8 mov Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C08C3FCu, 2);  /* 0C08C3FA mov.l @(disp,pc),Rn */
	r13 += 0x50u;  /* 0C08C3FC add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C08C400u, 2);  /* 0C08C3FE mov.w @Rm,Rn */
	r10 += r5;  /* 0C08C400 add Rm,Rn */
	IF(0x0C08C402u); { u32 t_ = r8; PR = 0x0C08C406u; r5 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C08C406u); }  /* 0C08C402 jsr @Rn */
L_0C08C406: BLKS(0x0C08C406u);
	r10 += r0;  /* 0C08C406 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C08C40Au, 2);  /* 0C08C408 mov.w @Rm,Rn */
	W32(r11 + 0x24u, r10); UPD(0x0C08C40Cu, 1);  /* 0C08C40A mov.l Rm,@(disp,Rn) */
	r9 = 0xC058030u; UPD(0x0C08C40Eu, 1);  /* 0C08C40C mov.l @(disp,pc),Rn */
	r10 = R32(r12 + 0x28u); UPD(0x0C08C410u, 1);  /* 0C08C40E mov.l @(disp,Rm),Rn */
	r6 = R32(r11 + 0x30u); UPD(0x0C08C412u, 1);  /* 0C08C410 mov.l @(disp,Rm),Rn */
	r5 = R32(r13); UPD(0x0C08C414u, 1);  /* 0C08C412 mov.l @Rm,Rn */
	IF(0x0C08C414u); { u32 t_ = r9; PR = 0x0C08C418u; r10 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C08C418u); }  /* 0C08C414 jsr @Rn */
L_0C08C418: BLKS(0x0C08C418u);
	r3 = R32(r13); UPD(0x0C08C41Au, 1);  /* 0C08C418 mov.l @Rm,Rn */
	r10 += r0;  /* 0C08C41A add Rm,Rn */
	r2 = 0x8000u; UPD(0x0C08C41Eu, 2);  /* 0C08C41C mov.l @(disp,pc),Rn */
	r1 = 0xE0000u; UPD(0x0C08C420u, 1);  /* 0C08C41E mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C08C420 add Rm,Rn */
	W32(r11 + 0x28u, r10); UPD(0x0C08C424u, 2);  /* 0C08C422 mov.l Rm,@(disp,Rn) */
	T = r3 == r1;  /* 0C08C424 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r13, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C08C438u, 4); goto L_0C08C438; } UPD(0x0C08C42Au, 1); goto L_0C08C42A; }  /* 0C08C426 bf/s */
L_0C08C42A: BLKS(0x0C08C42Au);
	r7 = 0x9Au; UPD(0x0C08C42Cu, 1);  /* 0C08C42A mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C08C42C mov Rm,Rn */
	IF(0x0C08C42Eu); W8(r0 + r7, r1); UPD(0x0C08C430u, 2);  /* 0C08C42E mov.b Rm,@(r0,Rn) */
	r0 = 0x9Fu; UPD(0x0C08C432u, 1);  /* 0C08C430 mov.w @(disp,pc),Rn */
	IF(0x0C08C432u); r12 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C08C434u, 1);  /* 0C08C432 mov.b @(r0,Rm),Rn */
	r12 += 0x1u;  /* 0C08C434 add #imm,Rn */
	IF(0x0C08C436u); W8(r0 + r11, r12); UPD(0x0C08C438u, 2);  /* 0C08C436 mov.b Rm,@(r0,Rn) */
L_0C08C438: BLKS(0x0C08C438u);
	{ r14 += 0x28u; /* slot add #imm,Rn */ UPD(0x0C08C20Au, 3); goto L_0C08C20A; }  /* 0C08C438 bra */
L_0C08C440: BLKS(0x0C08C440u);
	r2 = 0xB4u; UPD(0x0C08C442u, 1);  /* 0C08C440 mov.w @(disp,pc),Rn */
	IF(0x0C08C442u); MACL = r13 * r2;  /* 0C08C442 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C08C446u, 3);  /* 0C08C444 mov.l @(disp,pc),Rn */
	IF(0x0C08C446u); r10 = MACL;  /* 0C08C446 sts macl,Rn */
	r10 += r3;  /* 0C08C448 add Rm,Rn */
	r9 = 0x88u; UPD(0x0C08C44Cu, 3);  /* 0C08C44A mov.w @(disp,pc),Rn */
	r13 = r10;  /* 0C08C44C mov Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C08C450u, 2);  /* 0C08C44E mov.l @(disp,pc),Rn */
	r9 += r10;  /* 0C08C450 add Rm,Rn */
	r13 += 0x50u;  /* 0C08C452 add #imm,Rn */
	r11 = 0xC058030u; UPD(0x0C08C456u, 3);  /* 0C08C454 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C08C458u, 1);  /* 0C08C456 mov.w @Rm,Rn */
	IF(0x0C08C458u); { u32 t_ = r8; PR = 0x0C08C45Cu; r5 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C08C45Cu); }  /* 0C08C458 jsr @Rn */
L_0C08C45C: BLKS(0x0C08C45Cu);
	W32(r14 + 0x4u, r0); UPD(0x0C08C45Eu, 1);  /* 0C08C45C mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C08C460u, 1);  /* 0C08C45E mov.w @Rm,Rn */
	IF(0x0C08C460u); { u32 t_ = r11; PR = 0x0C08C464u; r5 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C08C464u); }  /* 0C08C460 jsr @Rn */
L_0C08C464: BLKS(0x0C08C464u);
	r11 = r0;  /* 0C08C464 mov Rm,Rn */
	r7 = 0xFFFFu; UPD(0x0C08C468u, 2);  /* 0C08C466 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C08C46Au, 1);  /* 0C08C468 mov.l @(disp,Rm),Rn */
	r3 = 0xFFFF0000u; UPD(0x0C08C46Cu, 1);  /* 0C08C46A mov.l @(disp,pc),Rn */
	r1 &= r7;  /* 0C08C46C and Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C08C470u, 2);  /* 0C08C46E mov.l @(disp,Rm),Rn */
	r2 = 0x8000u; UPD(0x0C08C472u, 1);  /* 0C08C470 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r2;  /* 0C08C472 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 &= r3; /* slot and Rm,Rn */ if (c_) { UPD(0x0C08C47Cu, 4); goto L_0C08C47C; } goto L_0C08C478; }  /* 0C08C474 bf/s */
L_0C08C478: BLKS(0x0C08C478u);
	r6 = 0x10000u; UPD(0x0C08C47Au, 2);  /* 0C08C478 mov.l @(disp,pc),Rn */
	r0 += r6;  /* 0C08C47A add Rm,Rn */
	UPD(0x0C08C47Cu, 1);
L_0C08C47C: BLKS(0x0C08C47Cu);
	r3 &= r11;  /* 0C08C47C and Rm,Rn */
	r11 &= r7;  /* 0C08C47E and Rm,Rn */
	T = (s32)r11 > (s32)r2;  /* 0C08C480 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08C48Au, 6); goto L_0C08C48A; } UPD(0x0C08C486u, 1); goto L_0C08C486; }  /* 0C08C482 bf/s */
L_0C08C486: BLKS(0x0C08C486u);
	r5 = 0x10000u; UPD(0x0C08C488u, 1);  /* 0C08C486 mov.l @(disp,pc),Rn */
	r3 += r5;  /* 0C08C488 add Rm,Rn */
	UPD(0x0C08C48Au, 1);
L_0C08C48A: BLKS(0x0C08C48Au);
	r2 = 0xB4u; UPD(0x0C08C48Cu, 1);  /* 0C08C48A mov.w @(disp,pc),Rn */
	IF(0x0C08C48Cu); MACL = r12 * r2;  /* 0C08C48C mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C08C490u, 3);  /* 0C08C48E mov.l @(disp,pc),Rn */
	IF(0x0C08C490u); r0 = MACL;  /* 0C08C490 sts macl,Rn */
	r0 += r8;  /* 0C08C492 add Rm,Rn */
	r11 = R32(r0 + 0x24u); UPD(0x0C08C496u, 3);  /* 0C08C494 mov.l @(disp,Rm),Rn */
	r7 = R32(r0 + 0x28u); UPD(0x0C08C498u, 1);  /* 0C08C496 mov.l @(disp,Rm),Rn */
	r9 = R32(r10 + 0x2Cu); UPD(0x0C08C49Au, 1);  /* 0C08C498 mov.l @(disp,Rm),Rn */
	r1 = R32(r10 + 0x30u); UPD(0x0C08C49Cu, 1);  /* 0C08C49A mov.l @(disp,Rm),Rn */
	r11 += r9;  /* 0C08C49C add Rm,Rn */
	r13 = R32(r14 + 0x4u); UPD(0x0C08C4A0u, 2);  /* 0C08C49E mov.l @(disp,Rm),Rn */
	r7 += r1;  /* 0C08C4A0 add Rm,Rn */
	r12 = 0x9Au; UPD(0x0C08C4A4u, 2);  /* 0C08C4A2 mov.w @(disp,pc),Rn */
	r11 += r13;  /* 0C08C4A4 add Rm,Rn */
	r7 += r3;  /* 0C08C4A6 add Rm,Rn */
	IF(0x0C08C4A8u); r4 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C08C4AAu, 3);  /* 0C08C4A8 mov.b @(r0,Rm),Rn */
	W32(r10 + 0x24u, r11); UPD(0x0C08C4ACu, 1);  /* 0C08C4AA mov.l Rm,@(disp,Rn) */
	T = (r4 & r4) == 0;  /* 0C08C4AC tst Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08C438u, 4); goto L_0C08C438; } UPD(0x0C08C4B2u, 1); goto L_0C08C4B2; }  /* 0C08C4AE bt/s */
L_0C08C4B2: BLKS(0x0C08C4B2u);
	r0 = 0x9Fu; UPD(0x0C08C4B4u, 1);  /* 0C08C4B2 mov.w @(disp,pc),Rn */
	IF(0x0C08C4B4u); r3 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C08C4B6u, 1);  /* 0C08C4B4 mov.b @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C08C4B6 add #imm,Rn */
	IF(0x0C08C4B8u); W8(r0 + r10, r3); UPD(0x0C08C4BAu, 2);  /* 0C08C4B8 mov.b Rm,@(r0,Rn) */
L_0C08C4BA: BLKS(0x0C08C4BAu);
	{ r14 += 0x28u; /* slot add #imm,Rn */ UPD(0x0C08C20Au, 3); goto L_0C08C20A; }  /* 0C08C4BA bra */
L_0C08C4C0: BLKS(0x0C08C4C0u);
	r11 = 0xB4u; UPD(0x0C08C4C2u, 1);  /* 0C08C4C0 mov.w @(disp,pc),Rn */
	IF(0x0C08C4C2u); MACL = r13 * r11;  /* 0C08C4C2 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08C4C6u, 3);  /* 0C08C4C4 mov.l @(disp,pc),Rn */
	IF(0x0C08C4C6u); r10 = MACL;  /* 0C08C4C6 sts macl,Rn */
	IF(0x0C08C4C8u); MACL = r12 * r11;  /* 0C08C4C8 mul.l Rm,Rn */
	r10 += r7;  /* 0C08C4CA add Rm,Rn */
	r4 = R32(r10 + 0x2Cu); UPD(0x0C08C4CEu, 5);  /* 0C08C4CC mov.l @(disp,Rm),Rn */
	IF(0x0C08C4CEu); r12 = MACL;  /* 0C08C4CE sts macl,Rn */
	r12 += r7;  /* 0C08C4D0 add Rm,Rn */
	r13 = R32(r12 + 0x24u); UPD(0x0C08C4D4u, 3);  /* 0C08C4D2 mov.l @(disp,Rm),Rn */
	r11 = r10;  /* 0C08C4D4 mov Rm,Rn */
	r9 = 0x88u; UPD(0x0C08C4D8u, 2);  /* 0C08C4D6 mov.w @(disp,pc),Rn */
	r13 += r4;  /* 0C08C4D8 add Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C08C4DCu, 2);  /* 0C08C4DA mov.l @(disp,pc),Rn */
	r9 += r10;  /* 0C08C4DC add Rm,Rn */
	r11 += 0x50u;  /* 0C08C4DE add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C08C4E2u, 3);  /* 0C08C4E0 mov.w @Rm,Rn */
	IF(0x0C08C4E2u); { u32 t_ = r8; PR = 0x0C08C4E6u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C08C4E6u); }  /* 0C08C4E2 jsr @Rn */
L_0C08C4E6: BLKS(0x0C08C4E6u);
	r13 += r0;  /* 0C08C4E6 add Rm,Rn */
	W32(r10 + 0x24u, r13); UPD(0x0C08C4EAu, 2);  /* 0C08C4E8 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C08C4ECu, 1);  /* 0C08C4EA mov.w @Rm,Rn */
	r5 = R32(r10 + 0x30u); UPD(0x0C08C4EEu, 1);  /* 0C08C4EC mov.l @(disp,Rm),Rn */
	r13 = R32(r12 + 0x28u); UPD(0x0C08C4F0u, 1);  /* 0C08C4EE mov.l @(disp,Rm),Rn */
	r9 = 0xC058030u; UPD(0x0C08C4F2u, 1);  /* 0C08C4F0 mov.l @(disp,pc),Rn */
	r13 += r5;  /* 0C08C4F2 add Rm,Rn */
	IF(0x0C08C4F4u); { u32 t_ = r9; PR = 0x0C08C4F8u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C08C4F8u); }  /* 0C08C4F4 jsr @Rn */
L_0C08C4F8: BLKS(0x0C08C4F8u);
	r6 = R32(r12 + 0x8u); UPD(0x0C08C4FAu, 1);  /* 0C08C4F8 mov.l @(disp,Rm),Rn */
	r13 += r0;  /* 0C08C4FA add Rm,Rn */
	r6 += 0xFFFFFFEBu;  /* 0C08C4FC add #imm,Rn */
	r0 = 0x1u;  /* 0C08C4FE mov #imm,Rn */
	T = r6 > r0;  /* 0C08C500 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x28u, r13); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08C4BAu, 7); goto L_0C08C4BA; } UPD(0x0C08C506u, 1); goto L_0C08C506; }  /* 0C08C502 bt/s */
L_0C08C506: BLKS(0x0C08C506u);
	r2 = R32(r11); UPD(0x0C08C508u, 1);  /* 0C08C506 mov.l @Rm,Rn */
	r3 = 0xFFFF8000u; UPD(0x0C08C50Au, 1);  /* 0C08C508 mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C08C50A add Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C08C50C tst Rm,Rn */
	{ u32 c_ = !T; W32(r11, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C08C4BAu, 5); goto L_0C08C4BA; } UPD(0x0C08C512u, 1); goto L_0C08C512; }  /* 0C08C50E bf/s */
L_0C08C512: BLKS(0x0C08C512u);
	r1 = 0x9Au; UPD(0x0C08C514u, 1);  /* 0C08C512 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C08C514 mov Rm,Rn */
	IF(0x0C08C516u); W8(r0 + r1, r2); UPD(0x0C08C518u, 2);  /* 0C08C516 mov.b Rm,@(r0,Rn) */
	r1 += 0x5u;  /* 0C08C518 add #imm,Rn */
	r0 = r10;  /* 0C08C51A mov Rm,Rn */
	UPD(0x0C08C51Cu, 2);
L_0C08C51C: BLKS(0x0C08C51Cu);
	IF(0x0C08C51Cu); W8(r0 + r1, r2); UPD(0x0C08C51Eu, 1);  /* 0C08C51C mov.b Rm,@(r0,Rn) */
L_0C08C51E: BLKS(0x0C08C51Eu);
	{ r14 += 0x28u; /* slot add #imm,Rn */ UPD(0x0C08C20Au, 3); goto L_0C08C20A; }  /* 0C08C51E bra */
L_0C08C550: BLKS(0x0C08C550u);
	r10 = 0xC0A0490u; UPD(0x0C08C552u, 1);  /* 0C08C550 mov.l @(disp,pc),Rn */
	IF(0x0C08C552u); { u32 t_ = r10; PR = 0x0C08C556u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C08C556u); }  /* 0C08C552 jsr @Rn */
L_0C08C556: BLKS(0x0C08C556u);
	IF(0x0C08C556u); T = (s32)r0 >= 0;  /* 0C08C556 cmp/pz Rn */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08C560u, 4); goto L_0C08C560; } goto L_0C08C55C; }  /* 0C08C558 bt/s */
L_0C08C55C: BLKS(0x0C08C55Cu);
	{ IF(0x0C08C55Eu); ; /* slot nop */ UPD(0x0C08C2D0u, 4); goto L_0C08C2D0; }  /* 0C08C55C bra */
L_0C08C560: BLKS(0x0C08C560u);
	r2 = 0xB4u; UPD(0x0C08C562u, 1);  /* 0C08C560 mov.w @(disp,pc),Rn */
	r6 = 0x1Fu;  /* 0C08C562 mov #imm,Rn */
	IF(0x0C08C564u); MACL = r13 * r2;  /* 0C08C564 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C08C568u, 4);  /* 0C08C566 mov.l @(disp,pc),Rn */
	IF(0x0C08C568u); r0 = MACL;  /* 0C08C568 sts macl,Rn */
	IF(0x0C08C56Au); MACL = r12 * r2;  /* 0C08C56A mul.l Rm,Rn */
	r0 += r3;  /* 0C08C56C add Rm,Rn */
	r9 = R32(r0); UPD(0x0C08C570u, 5);  /* 0C08C56E mov.l @Rm,Rn */
	IF(0x0C08C570u); r4 = MACL;  /* 0C08C570 sts macl,Rn */
	r4 += r3;  /* 0C08C572 add Rm,Rn */
	r7 = R32(r4 + 0x24u); UPD(0x0C08C576u, 3);  /* 0C08C574 mov.l @(disp,Rm),Rn */
	r5 = R32(r4 + 0x28u); UPD(0x0C08C578u, 1);  /* 0C08C576 mov.l @(disp,Rm),Rn */
	r11 = R32(r0 + 0x2Cu); UPD(0x0C08C57Au, 1);  /* 0C08C578 mov.l @(disp,Rm),Rn */
	r8 = R32(r0 + 0x30u); UPD(0x0C08C57Cu, 1);  /* 0C08C57A mov.l @(disp,Rm),Rn */
	r7 += r11;  /* 0C08C57C add Rm,Rn */
	r1 = 0x100u; UPD(0x0C08C580u, 2);  /* 0C08C57E mov.w @(disp,pc),Rn */
	r5 += r8;  /* 0C08C580 add Rm,Rn */
	r9 |= r1;  /* 0C08C582 or Rm,Rn */
	r2 = R32(r0 + 0xCu); UPD(0x0C08C586u, 3);  /* 0C08C584 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r7); UPD(0x0C08C588u, 1);  /* 0C08C586 mov.l Rm,@(disp,Rn) */
	T = r2 > r6;  /* 0C08C588 cmp/hi Rm,Rn */
	W32(r0 + 0x28u, r5); UPD(0x0C08C58Cu, 2);  /* 0C08C58A mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r0, r9); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C08C594u, 3); goto L_0C08C594; } UPD(0x0C08C590u, 1); goto L_0C08C590; }  /* 0C08C58C bf/s */
L_0C08C590: BLKS(0x0C08C590u);
	{ r3 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C08C690u, 3); goto L_0C08C690; }  /* 0C08C590 bra */
L_0C08C594: BLKS(0x0C08C594u);
	r0 = 0xC08C5ACu;  /* 0C08C594 mova @(disp,pc),r0 */
	IF(0x0C08C596u); r10 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08C598u, 2);  /* 0C08C596 mov.b @(r0,Rm),Rn */
	r10 = r10 & 0xFF;  /* 0C08C598 extu.b Rm,Rn */
	IF(0x0C08C59Au); { u32 tv_ = (r10 + 0x0C08C59Eu); u32 t_ = PHYS(tv_); IF(0x0C08C59Cu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C08C5D0u: goto L_0C08C5D0; case 0x0C08C610u: goto L_0C08C610; case 0x0C08C640u: goto L_0C08C640; default: JUMPD(tv_); } }  /* 0C08C59A braf Rn */
L_0C08C5D0: BLKS(0x0C08C5D0u);
	r2 = 0xB4u; UPD(0x0C08C5D2u, 1);  /* 0C08C5D0 mov.w @(disp,pc),Rn */
	IF(0x0C08C5D2u); MACL = r12 * r2;  /* 0C08C5D2 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C08C5D6u, 3);  /* 0C08C5D4 mov.l @(disp,pc),Rn */
	IF(0x0C08C5D6u); r0 = MACL;  /* 0C08C5D6 sts macl,Rn */
	r6 = 0xA1u; UPD(0x0C08C5DAu, 2);  /* 0C08C5D8 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C08C5DA add Rm,Rn */
	IF(0x0C08C5DCu); r12 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08C5DEu, 2);  /* 0C08C5DC mov.b @(r0,Rm),Rn */
	IF(0x0C08C5DEu); T = (s32)r12 >= 0;  /* 0C08C5DE cmp/pz Rn */
	if (T) { UPD(0x0C08C51Eu, 4); goto L_0C08C51E; }  /* 0C08C5E0 bt */
L_0C08C5E2: BLKS(0x0C08C5E2u);
	IF(0x0C08C5E2u); MACL = r13 * r2;  /* 0C08C5E2 mul.l Rm,Rn */
	r8 = 0x100u; UPD(0x0C08C5E6u, 3);  /* 0C08C5E4 mov.w @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C08C5E6 mov #imm,Rn */
	IF(0x0C08C5E8u); r0 = MACL;  /* 0C08C5E8 sts macl,Rn */
	r0 += r3;  /* 0C08C5EA add Rm,Rn */
	r2 += 0xFFFFFFD2u;  /* 0C08C5EC add #imm,Rn */
	r9 = R32(r0 + 0xCu); UPD(0x0C08C5F0u, 5);  /* 0C08C5EE mov.l @(disp,Rm),Rn */
	IF(0x0C08C5F0u); W16(r0 + r2, r8); UPD(0x0C08C5F2u, 1);  /* 0C08C5F0 mov.w Rm,@(r0,Rn) */
	r9 += 0x1u;  /* 0C08C5F2 add #imm,Rn */
	r2 += 0x2u;  /* 0C08C5F4 add #imm,Rn */
	IF(0x0C08C5F6u); W16(r0 + r2, r5); UPD(0x0C08C5F8u, 3);  /* 0C08C5F6 mov.w Rm,@(r0,Rn) */
	W32(r0 + 0xCu, r9); UPD(0x0C08C5FAu, 1);  /* 0C08C5F8 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A0380u; UPD(0x0C08C5FCu, 1);  /* 0C08C5FA mov.l @(disp,pc),Rn */
	IF(0x0C08C5FCu); { u32 t_ = r0; PR = 0x0C08C600u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08C600u); }  /* 0C08C5FC jsr @Rn */
L_0C08C600: BLKS(0x0C08C600u);
	{ r4 = 0x6Du; /* slot mov #imm,Rn */ UPD(0x0C08C3D2u, 3); goto L_0C08C3D2; }  /* 0C08C600 bra */
L_0C08C610: BLKS(0x0C08C610u);
	r5 = 0xB4u; UPD(0x0C08C612u, 1);  /* 0C08C610 mov.w @(disp,pc),Rn */
	IF(0x0C08C612u); MACL = r13 * r5;  /* 0C08C612 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C08C616u, 3);  /* 0C08C614 mov.l @(disp,pc),Rn */
	IF(0x0C08C616u); r3 = MACL;  /* 0C08C616 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C08C61Au, 2);  /* 0C08C618 mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C08C61A add Rm,Rn */
	r2 += r3;  /* 0C08C61C add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C08C620u, 3);  /* 0C08C61E mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C08C620 add #imm,Rn */
	r0 = r11 & 0xFF;  /* 0C08C622 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C08C624 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r11); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08C710u, 6); goto L_0C08C710; } UPD(0x0C08C62Au, 1); goto L_0C08C62A; }  /* 0C08C626 bf/s */
L_0C08C62A: BLKS(0x0C08C62Au);
	r9 = 0x0u;  /* 0C08C62A mov #imm,Rn */
	W8(r2, r9); UPD(0x0C08C62Eu, 2);  /* 0C08C62C mov.b Rm,@Rn */
L_0C08C62E: BLKS(0x0C08C62Eu);
	r0 = 0x88u; UPD(0x0C08C630u, 1);  /* 0C08C62E mov.w @(disp,pc),Rn */
	r8 = R32(r3 + 0xCu); UPD(0x0C08C632u, 1);  /* 0C08C630 mov.l @(disp,Rm),Rn */
	IF(0x0C08C632u); r10 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C08C634u, 1);  /* 0C08C632 mov.w @(r0,Rm),Rn */
	r8 += r10;  /* 0C08C634 add Rm,Rn */
	W32(r3 + 0xCu, r8); UPD(0x0C08C638u, 2);  /* 0C08C636 mov.l Rm,@(disp,Rn) */
L_0C08C638: BLKS(0x0C08C638u);
	r1 = 0xC0A0380u; UPD(0x0C08C63Au, 1);  /* 0C08C638 mov.l @(disp,pc),Rn */
	{ r4 = r13; /* slot mov Rm,Rn */ UPD(0x0C08C274u, 3); goto L_0C08C274; }  /* 0C08C63A bra */
L_0C08C640: BLKS(0x0C08C640u);
	r11 = 0xB4u; UPD(0x0C08C642u, 1);  /* 0C08C640 mov.w @(disp,pc),Rn */
	IF(0x0C08C642u); MACL = r13 * r11;  /* 0C08C642 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08C646u, 3);  /* 0C08C644 mov.l @(disp,pc),Rn */
	IF(0x0C08C646u); r2 = MACL;  /* 0C08C646 sts macl,Rn */
	r3 = 0x98u; UPD(0x0C08C64Au, 2);  /* 0C08C648 mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C08C64A add Rm,Rn */
	r3 += r2;  /* 0C08C64C add Rm,Rn */
	r1 = r3;  /* 0C08C64E mov Rm,Rn */
	r1 += 0x1u;  /* 0C08C650 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C08C654u, 5);  /* 0C08C652 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C08C654 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C08C656 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C08C658 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r1, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08C710u, 6); goto L_0C08C710; } UPD(0x0C08C65Eu, 1); goto L_0C08C65E; }  /* 0C08C65A bf/s */
L_0C08C65E: BLKS(0x0C08C65Eu);
	r0 = 0x88u; UPD(0x0C08C660u, 1);  /* 0C08C65E mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C08C660 mov #imm,Rn */
	IF(0x0C08C662u); r10 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08C664u, 2);  /* 0C08C662 mov.w @(r0,Rm),Rn */
	IF(0x0C08C664u); T = (s32)r10 > 0;  /* 0C08C664 cmp/pl Rn */
	{ u32 c_ = !T; W8(r1, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08C680u, 4); goto L_0C08C680; } UPD(0x0C08C66Au, 1); goto L_0C08C66A; }  /* 0C08C666 bf/s */
L_0C08C66A: BLKS(0x0C08C66Au);
	r12 = 0x30u;  /* 0C08C66A mov #imm,Rn */
	W32(r2 + 0xCu, r12); UPD(0x0C08C66Eu, 2);  /* 0C08C66C mov.l Rm,@(disp,Rn) */
	{ W8(r3, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C08C638u, 3); goto L_0C08C638; }  /* 0C08C66E bra */
L_0C08C680: BLKS(0x0C08C680u);
	r1 = R32(r2 + 0xCu); UPD(0x0C08C682u, 1);  /* 0C08C680 mov.l @(disp,Rm),Rn */
	r1 += 0xFFFFFFFFu;  /* 0C08C682 add #imm,Rn */
	UPD(0x0C08C684u, 1);
L_0C08C684: BLKS(0x0C08C684u);
	{ W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08C638u, 3); goto L_0C08C638; }  /* 0C08C684 bra */
L_0C08C690: BLKS(0x0C08C690u);
	r2 = 0x9Fu; UPD(0x0C08C692u, 1);  /* 0C08C690 mov.w @(disp,pc),Rn */
	IF(0x0C08C692u); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08C694u, 1);  /* 0C08C692 mov.b @(r0,Rm),Rn */
	r2 = r6 & 0xFF;  /* 0C08C694 extu.b Rm,Rn */
	T = r2 > r3;  /* 0C08C696 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C08C710u, 5); goto L_0C08C710; }  /* 0C08C698 bt */
L_0C08C69A: BLKS(0x0C08C69Au);
	r0 = 0xC08C6BCu;  /* 0C08C69A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08C69C add Rm,Rn */
	IF(0x0C08C69Eu); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08C6A0u, 3);  /* 0C08C69E mov.w @(r0,Rm),Rn */
	IF(0x0C08C6A0u); { u32 tv_ = (r9 + 0x0C08C6A4u); u32 t_ = PHYS(tv_); IF(0x0C08C6A2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C6D0u: goto L_0C08C6D0; case 0x0C08C730u: goto L_0C08C730; case 0x0C08C8C0u: goto L_0C08C8C0; case 0x0C08C940u: goto L_0C08C940; default: JUMPD(tv_); } }  /* 0C08C6A0 braf Rn */
L_0C08C6D0: BLKS(0x0C08C6D0u);
	r12 = 0xC058130u; UPD(0x0C08C6D2u, 1);  /* 0C08C6D0 mov.l @(disp,pc),Rn */
	r10 = 0xC057430u; UPD(0x0C08C6D4u, 1);  /* 0C08C6D2 mov.l @(disp,pc),Rn */
	IF(0x0C08C6D4u); { u32 t_ = r12; PR = 0x0C08C6D8u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C08C6D8u); }  /* 0C08C6D4 jsr @Rn */
L_0C08C6D8: BLKS(0x0C08C6D8u);
	r8 = 0xB4u; UPD(0x0C08C6DAu, 1);  /* 0C08C6D8 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C08C6DA mov Rm,Rn */
	IF(0x0C08C6DCu); { u32 t_ = r10; PR = 0x0C08C6E0u; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C08C6E0u); }  /* 0C08C6DC jsr @Rn */
L_0C08C6E0: BLKS(0x0C08C6E0u);
	IF(0x0C08C6E0u); MACL = r13 * r8;  /* 0C08C6E0 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C08C6E4u, 3);  /* 0C08C6E2 mov.l @(disp,pc),Rn */
	r4 = 0x1Fu;  /* 0C08C6E4 mov #imm,Rn */
	IF(0x0C08C6E6u); r8 = MACL;  /* 0C08C6E6 sts macl,Rn */
	r7 = 0x86u; UPD(0x0C08C6EAu, 3);  /* 0C08C6E8 mov.w @(disp,pc),Rn */
	r8 += r11;  /* 0C08C6EA add Rm,Rn */
	r0 = r8;  /* 0C08C6EC mov Rm,Rn */
	IF(0x0C08C6EEu); r5 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C08C6F0u, 3);  /* 0C08C6EE mov.w @(r0,Rm),Rn */
	r5 += 0x8u;  /* 0C08C6F0 add #imm,Rn */
	IF(0x0C08C6F2u); r5 >>= 2;  /* 0C08C6F2 shlr2 Rn */
	r0 = 0xC0A0380u; UPD(0x0C08C6F6u, 3);  /* 0C08C6F4 mov.l @(disp,pc),Rn */
	IF(0x0C08C6F6u); r5 >>= 2;  /* 0C08C6F6 shlr2 Rn */
	r5 &= r4;  /* 0C08C6F8 and Rm,Rn */
	r5 += 0x20u;  /* 0C08C6FA add #imm,Rn */
	r4 = r13;  /* 0C08C6FC mov Rm,Rn */
	IF(0x0C08C6FEu); { u32 t_ = r0; PR = 0x0C08C702u; W32(r8 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 6); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08C702u); }  /* 0C08C6FE jsr @Rn */
L_0C08C702: BLKS(0x0C08C702u);
	r4 = r13;  /* 0C08C702 mov Rm,Rn */
	r13 = 0xC0A9E40u; UPD(0x0C08C706u, 2);  /* 0C08C704 mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C08C706 mov #imm,Rn */
	IF(0x0C08C708u); { u32 t_ = r13; PR = 0x0C08C70Cu; r6 = 0xFu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C08C70Cu); }  /* 0C08C708 jsr @Rn */
L_0C08C70C: BLKS(0x0C08C70Cu);
	T = (r0 & r0) == 0;  /* 0C08C70C tst Rm,Rn */
	if (!T) { UPD(0x0C08C714u, 4); goto L_0C08C714; }  /* 0C08C70E bf */
L_0C08C710: BLKS(0x0C08C710u);
	{ r14 += 0x28u; /* slot add #imm,Rn */ UPD(0x0C08C20Au, 3); goto L_0C08C20A; }  /* 0C08C710 bra */
L_0C08C714: BLKS(0x0C08C714u);
	r0 = 0x98u; UPD(0x0C08C716u, 1);  /* 0C08C714 mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C08C716 mov #imm,Rn */
	IF(0x0C08C718u); W8(r0 + r8, r2); UPD(0x0C08C71Au, 2);  /* 0C08C718 mov.b Rm,@(r0,Rn) */
	r0 += 0x7u;  /* 0C08C71A add #imm,Rn */
	IF(0x0C08C71Cu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08C71Eu, 2);  /* 0C08C71C mov.b @(r0,Rm),Rn */
	r6 += 0x1u;  /* 0C08C71E add #imm,Rn */
	IF(0x0C08C720u); W8(r0 + r8, r6); UPD(0x0C08C722u, 2);  /* 0C08C720 mov.b Rm,@(r0,Rn) */
	r3 = 0x30000u; UPD(0x0C08C724u, 1);  /* 0C08C722 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFEDu;  /* 0C08C724 add #imm,Rn */
	{ IF(0x0C08C728u); W32(r0 + r8, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C08C208u, 4); goto L_0C08C208; }  /* 0C08C726 bra */
L_0C08C730: BLKS(0x0C08C730u);
	r9 = 0xB4u; UPD(0x0C08C732u, 1);  /* 0C08C730 mov.w @(disp,pc),Rn */
	IF(0x0C08C732u); MACL = r12 * r9;  /* 0C08C732 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C08C736u, 3);  /* 0C08C734 mov.l @(disp,pc),Rn */
	IF(0x0C08C736u); r8 = MACL;  /* 0C08C736 sts macl,Rn */
	r8 += r10;  /* 0C08C738 add Rm,Rn */
	r4 = 0x9Fu; UPD(0x0C08C73Cu, 3);  /* 0C08C73A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08C73C mov Rm,Rn */
	IF(0x0C08C73Eu); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C08C740u, 2);  /* 0C08C73E mov.b @(r0,Rm),Rn */
	r0 = r5;  /* 0C08C740 mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C08C742 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C08C74Au, 5); goto L_0C08C74A; }  /* 0C08C744 bf */
L_0C08C746: BLKS(0x0C08C746u);
	{ IF(0x0C08C748u); ; /* slot nop */ UPD(0x0C08C850u, 3); goto L_0C08C850; }  /* 0C08C746 bra */
L_0C08C74A: BLKS(0x0C08C74Au);
	r9 = 0xC0A9E40u; UPD(0x0C08C74Cu, 1);  /* 0C08C74A mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C08C74C mov Rm,Rn */
	r5 = 0x2u;  /* 0C08C74E mov #imm,Rn */
	IF(0x0C08C750u); { u32 t_ = r9; PR = 0x0C08C754u; r6 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C08C754u); }  /* 0C08C750 jsr @Rn */
L_0C08C754: BLKS(0x0C08C754u);
	T = (r0 & r0) == 0;  /* 0C08C754 tst Rm,Rn */
	{ u32 c_ = T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08C814u, 4); goto L_0C08C814; } goto L_0C08C75A; }  /* 0C08C756 bt/s */
L_0C08C75A: BLKS(0x0C08C75Au);
	r1 = 0xB4u; UPD(0x0C08C75Cu, 2);  /* 0C08C75A mov.w @(disp,pc),Rn */
	IF(0x0C08C75Cu); MACL = r13 * r1;  /* 0C08C75C mul.l Rm,Rn */
	W32(r14, r2); UPD(0x0C08C760u, 3);  /* 0C08C75E mov.l Rm,@Rn */
	IF(0x0C08C760u); r6 = MACL;  /* 0C08C760 sts macl,Rn */
	r6 += r10;  /* 0C08C762 add Rm,Rn */
	W32(r14 + 0xCu, r6); UPD(0x0C08C766u, 3);  /* 0C08C764 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x14u, r8); UPD(0x0C08C768u, 1);  /* 0C08C766 mov.l Rm,@(disp,Rn) */
L_0C08C768: BLKS(0x0C08C768u);
	r0 = R32(r14 + 0xCu); UPD(0x0C08C76Au, 1);  /* 0C08C768 mov.l @(disp,Rm),Rn */
	r6 = 0x4u;  /* 0C08C76A mov #imm,Rn */
	r8 = 0x86u; UPD(0x0C08C76Eu, 2);  /* 0C08C76C mov.w @(disp,pc),Rn */
	IF(0x0C08C76Eu); r11 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C08C770u, 1);  /* 0C08C76E mov.w @(r0,Rm),Rn */
	r8 = R32(r14); UPD(0x0C08C772u, 1);  /* 0C08C770 mov.l @Rm,Rn */
	r4 = 0xB4u; UPD(0x0C08C774u, 1);  /* 0C08C772 mov.w @(disp,pc),Rn */
	IF(0x0C08C774u); ARG0(0x486Du); { s32 s_ = (s32)r6; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C08C774 shld Rm,Rn */
	r3 = 0xC1BB82Cu; UPD(0x0C08C778u, 2);  /* 0C08C776 mov.l @(disp,pc),Rn */
	IF(0x0C08C778u); MACL = r13 * r4;  /* 0C08C778 mul.l Rm,Rn */
	r8 += r3;  /* 0C08C77A add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C08C77Eu, 4);  /* 0C08C77C mov.l @(disp,pc),Rn */
	IF(0x0C08C77Eu); r0 = MACL;  /* 0C08C77E sts macl,Rn */
	r7 = R32(r8 + 0x8u); UPD(0x0C08C782u, 2);  /* 0C08C780 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C08C782 mov Rm,Rn */
	r9 = R32(r8 + 0x4u); UPD(0x0C08C786u, 2);  /* 0C08C784 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x8u, r7); UPD(0x0C08C788u, 1);  /* 0C08C786 mov.l Rm,@(disp,Rn) */
	r5 = r9;  /* 0C08C788 mov Rm,Rn */
	IF(0x0C08C78Au); { u32 t_ = r10; PR = 0x0C08C78Eu; W32(r14 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C08C78Eu); }  /* 0C08C78A jsr @Rn */
L_0C08C78E: BLKS(0x0C08C78Eu);
	r1 = R32(r14 + 0xCu); UPD(0x0C08C790u, 1);  /* 0C08C78E mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C08C790 mov Rm,Rn */
	r2 = 0xC058030u; UPD(0x0C08C794u, 2);  /* 0C08C792 mov.l @(disp,pc),Rn */
	r10 = R32(r1 + 0x24u); UPD(0x0C08C796u, 1);  /* 0C08C794 mov.l @(disp,Rm),Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C08C798u, 1);  /* 0C08C796 mov.l @(disp,Rm),Rn */
	IF(0x0C08C798u); { u32 t_ = r2; PR = 0x0C08C79Cu; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C08C79Cu); }  /* 0C08C798 jsr @Rn */
L_0C08C79C: BLKS(0x0C08C79Cu);
	r5 = r9;  /* 0C08C79C mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C08C7A0u, 2);  /* 0C08C79E mov.l @(disp,pc),Rn */
	r10 -= r0;  /* 0C08C7A0 sub Rm,Rn */
	IF(0x0C08C7A2u); { u32 t_ = r9; PR = 0x0C08C7A6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C08C7A6u); }  /* 0C08C7A2 jsr @Rn */
L_0C08C7A6: BLKS(0x0C08C7A6u);
	r5 = R32(r14 + 0xCu); UPD(0x0C08C7A8u, 1);  /* 0C08C7A6 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C08C7A8 mov Rm,Rn */
	r6 = 0xC058060u; UPD(0x0C08C7ACu, 2);  /* 0C08C7AA mov.l @(disp,pc),Rn */
	r9 = R32(r5 + 0x28u); UPD(0x0C08C7AEu, 1);  /* 0C08C7AC mov.l @(disp,Rm),Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C08C7B0u, 1);  /* 0C08C7AE mov.l @(disp,Rm),Rn */
	IF(0x0C08C7B0u); { u32 t_ = r6; PR = 0x0C08C7B4u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C08C7B4u); }  /* 0C08C7B0 jsr @Rn */
L_0C08C7B4: BLKS(0x0C08C7B4u);
	r3 = 0xC27DFF8u; UPD(0x0C08C7B6u, 1);  /* 0C08C7B4 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C08C7B6 add Rm,Rn */
	r4 = R32(r3); UPD(0x0C08C7BAu, 2);  /* 0C08C7B8 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08C7BA add #imm,Rn */
	r7 = R32(r8); UPD(0x0C08C7BEu, 2);  /* 0C08C7BC mov.l @Rm,Rn */
	IF(0x0C08C7BEu); r4 >>= 16;  /* 0C08C7BE shlr16 Rn */
	IF(0x0C08C7C0u); MACL = r7 * r4;  /* 0C08C7C0 mul.l Rm,Rn */
	r8 += 0x2u;  /* 0C08C7C2 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r8); UPD(0x0C08C7C6u, 5);  /* 0C08C7C4 mov.w @Rm,Rn */
	IF(0x0C08C7C6u); r0 = MACL;  /* 0C08C7C6 sts macl,Rn */
	IF(0x0C08C7C8u); r0 >>= 8;  /* 0C08C7C8 shlr8 Rn */
	r0 += r1;  /* 0C08C7CA add Rm,Rn */
	r0 += r11;  /* 0C08C7CC add Rm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C08C7CE exts.w Rm,Rn */
	r0 = R32(r14 + 0x14u); UPD(0x0C08C7D2u, 6);  /* 0C08C7D0 mov.l @(disp,Rm),Rn */
	r8 = 0x5u;  /* 0C08C7D2 mov #imm,Rn */
	r5 = 0x9Fu; UPD(0x0C08C7D6u, 2);  /* 0C08C7D4 mov.w @(disp,pc),Rn */
	r7 = r3;  /* 0C08C7D6 mov Rm,Rn */
	IF(0x0C08C7D8u); r2 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C08C7DAu, 2);  /* 0C08C7D8 mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C08C7DA mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C08C7DC cmp/eq #imm,r0 */
	IF(0x0C08C7DEu); r4 = T;  /* 0C08C7DE movt Rn */
	IF(0x0C08C7E0u); ARG0(0x448Du); { s32 s_ = (s32)r8; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C08C7E0 shld Rm,Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C08C7E4u, 5);  /* 0C08C7E2 mov.l @(disp,Rm),Rn */
	r5 = r10;  /* 0C08C7E4 mov Rm,Rn */
	r8 = 0x8Cu; UPD(0x0C08C7E8u, 2);  /* 0C08C7E6 mov.w @(disp,pc),Rn */
	r10 = 0x6u;  /* 0C08C7E8 mov #imm,Rn */
	IF(0x0C08C7EAu); r6 = R32(r0 + r8); UPD(0x0C08C7ECu, 2);  /* 0C08C7EA mov.l @(r0,Rm),Rn */
	r11 = 0xC7C144Cu; UPD(0x0C08C7EEu, 1);  /* 0C08C7EC mov.l @(disp,pc),Rn */
	W32(r15, r6); UPD(0x0C08C7F0u, 1);  /* 0C08C7EE mov.l Rm,@Rn */
	IF(0x0C08C7F0u); { u32 t_ = r11; PR = 0x0C08C7F4u; r6 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C144C, 0x0C7C144Cu, 0x0C08C7F4u); }  /* 0C08C7F0 jsr @Rn */
L_0C08C7F4: BLKS(0x0C08C7F4u);
	r7 = R32(r14); UPD(0x0C08C7F6u, 1);  /* 0C08C7F4 mov.l @Rm,Rn */
	r7 += 0x1u;  /* 0C08C7F6 add #imm,Rn */
	r4 = (u32)(s32)(s16)r7;  /* 0C08C7F8 exts.w Rm,Rn */
	W32(r14, r4); UPD(0x0C08C7FCu, 3);  /* 0C08C7FA mov.l Rm,@Rn */
	r5 = R32(r14); UPD(0x0C08C7FEu, 1);  /* 0C08C7FC mov.l @Rm,Rn */
	T = (s32)r5 > (s32)r10;  /* 0C08C7FE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08C768u, 4); goto L_0C08C768; } goto L_0C08C804; }  /* 0C08C800 bf/s */
L_0C08C804: BLKS(0x0C08C804u);
	r11 = 0xC26CD40u; UPD(0x0C08C806u, 2);  /* 0C08C804 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C08C808u, 1);  /* 0C08C806 mov.l @(disp,Rm),Rn */
	r11 += r2;  /* 0C08C808 add Rm,Rn */
	r11 += r8;  /* 0C08C80A add Rm,Rn */
	r5 = R32(r11); UPD(0x0C08C80Eu, 3);  /* 0C08C80C mov.l @Rm,Rn */
	r9 = 0x1000u; UPD(0x0C08C810u, 1);  /* 0C08C80E mov.w @(disp,pc),Rn */
	r5 += r9;  /* 0C08C810 add Rm,Rn */
	W32(r11, r5); UPD(0x0C08C814u, 2);  /* 0C08C812 mov.l Rm,@Rn */
L_0C08C814: BLKS(0x0C08C814u);
	r7 = 0xB4u; UPD(0x0C08C816u, 1);  /* 0C08C814 mov.w @(disp,pc),Rn */
	IF(0x0C08C816u); MACL = r13 * r7;  /* 0C08C816 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C08C81Au, 3);  /* 0C08C818 mov.l @(disp,pc),Rn */
	r0 = 0x98u; UPD(0x0C08C81Cu, 1);  /* 0C08C81A mov.w @(disp,pc),Rn */
	IF(0x0C08C81Cu); r3 = MACL;  /* 0C08C81C sts macl,Rn */
	r3 += r6;  /* 0C08C81E add Rm,Rn */
	IF(0x0C08C820u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08C822u, 3);  /* 0C08C820 mov.b @(r0,Rm),Rn */
	r1 += 0x1u;  /* 0C08C822 add #imm,Rn */
	IF(0x0C08C824u); W8(r0 + r3, r1); UPD(0x0C08C826u, 2);  /* 0C08C824 mov.b Rm,@(r0,Rn) */
	r13 = r1 & 0xFF;  /* 0C08C826 extu.b Rm,Rn */
	r1 = 0xF0u; UPD(0x0C08C82Au, 2);  /* 0C08C828 mov.w @(disp,pc),Rn */
	T = r13 == r1;  /* 0C08C82A cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C08C846u, 4); goto L_0C08C846; }  /* 0C08C82C bf */
L_0C08C82E: BLKS(0x0C08C82Eu);
	IF(0x0C08C82Eu); MACL = r12 * r7;  /* 0C08C82E mul.l Rm,Rn */
	r1 += 0xFFFFFFB1u;  /* 0C08C830 add #imm,Rn */
	IF(0x0C08C832u); r10 = MACL;  /* 0C08C832 sts macl,Rn */
	r10 += r6;  /* 0C08C834 add Rm,Rn */
	r10 += r1;  /* 0C08C836 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C08C83Au, 7);  /* 0C08C838 mov.b @Rm,Rn */
	r0 &= 0x7Fu;  /* 0C08C83A and #imm,r0 */
	W8(r10, r0); UPD(0x0C08C83Eu, 2);  /* 0C08C83C mov.b Rm,@Rn */
	r0 = 0x9Fu; UPD(0x0C08C840u, 1);  /* 0C08C83E mov.w @(disp,pc),Rn */
	IF(0x0C08C840u); r12 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08C842u, 1);  /* 0C08C840 mov.b @(r0,Rm),Rn */
	r12 += 0x1u;  /* 0C08C842 add #imm,Rn */
	IF(0x0C08C844u); W8(r0 + r3, r12); UPD(0x0C08C846u, 2);  /* 0C08C844 mov.b Rm,@(r0,Rn) */
L_0C08C846: BLKS(0x0C08C846u);
	{ r14 += 0x28u; /* slot add #imm,Rn */ UPD(0x0C08C20Au, 3); goto L_0C08C20A; }  /* 0C08C846 bra */
L_0C08C850: BLKS(0x0C08C850u);
	r11 = 0xC058130u; UPD(0x0C08C852u, 1);  /* 0C08C850 mov.l @(disp,pc),Rn */
	IF(0x0C08C852u); { u32 t_ = r11; PR = 0x0C08C856u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C08C856u); }  /* 0C08C852 jsr @Rn */
L_0C08C856: BLKS(0x0C08C856u);
	r11 = 0xC057430u; UPD(0x0C08C858u, 1);  /* 0C08C856 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C08C858 mov Rm,Rn */
	IF(0x0C08C85Au); { u32 t_ = r11; PR = 0x0C08C85Eu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C08C85Eu); }  /* 0C08C85A jsr @Rn */
L_0C08C85E: BLKS(0x0C08C85Eu);
	IF(0x0C08C85Eu); MACL = r13 * r9;  /* 0C08C85E mul.l Rm,Rn */
	r3 = 0x86u; UPD(0x0C08C862u, 3);  /* 0C08C860 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C08C862 mov Rm,Rn */
	IF(0x0C08C864u); r7 = MACL;  /* 0C08C864 sts macl,Rn */
	r7 += r10;  /* 0C08C866 add Rm,Rn */
	r0 = r7;  /* 0C08C868 mov Rm,Rn */
	IF(0x0C08C86Au); r11 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C08C86Cu, 5);  /* 0C08C86A mov.w @(r0,Rm),Rn */
	r11 += 0x8u;  /* 0C08C86C add #imm,Rn */
	IF(0x0C08C86Eu); r11 >>= 2;  /* 0C08C86E shlr2 Rn */
	IF(0x0C08C870u); r11 >>= 2;  /* 0C08C870 shlr2 Rn */
	r0 = 0x1Fu;  /* 0C08C872 mov #imm,Rn */
	r9 = 0xC0A0380u; UPD(0x0C08C876u, 5);  /* 0C08C874 mov.l @(disp,pc),Rn */
	r11 &= r0;  /* 0C08C876 and Rm,Rn */
	r11 += 0x20u;  /* 0C08C878 add #imm,Rn */
	IF(0x0C08C87Au); { u32 t_ = r9; PR = 0x0C08C87Eu; W32(r7 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08C87Eu); }  /* 0C08C87A jsr @Rn */
L_0C08C87E: BLKS(0x0C08C87Eu);
	{ IF(0x0C08C880u); ; /* slot nop */ UPD(0x0C08C74Au, 3); goto L_0C08C74A; }  /* 0C08C87E bra */
L_0C08C8C0: BLKS(0x0C08C8C0u);
	r4 = 0x0u;  /* 0C08C8C0 mov #imm,Rn */
	W32(r14, r4); UPD(0x0C08C8C4u, 2);  /* 0C08C8C2 mov.l Rm,@Rn */
	r4 = 0xB4u; UPD(0x0C08C8C6u, 1);  /* 0C08C8C4 mov.w @(disp,pc),Rn */
	IF(0x0C08C8C6u); MACL = r13 * r4;  /* 0C08C8C6 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08C8CAu, 3);  /* 0C08C8C8 mov.l @(disp,pc),Rn */
	IF(0x0C08C8CAu); r3 = MACL;  /* 0C08C8CA sts macl,Rn */
	r0 = 0x86u; UPD(0x0C08C8CEu, 2);  /* 0C08C8CC mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C08C8CE add Rm,Rn */
	r6 = 0xFFu; UPD(0x0C08C8D2u, 2);  /* 0C08C8D0 mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C08C8D2 add Rm,Rn */
	r5 = 0x100u; UPD(0x0C08C8D6u, 2);  /* 0C08C8D4 mov.w @(disp,pc),Rn */
L_0C08C8D6: BLKS(0x0C08C8D6u);
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C08C8D8u, 1);  /* 0C08C8D6 mov.w @Rm,Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C08C8D8 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r6;  /* 0C08C8DA cmp/gt Rm,Rn */
	{ u32 c_ = T; IF(0x0C08C8DEu); MACL = r13 * r4; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C08C8EAu, 6); goto L_0C08C8EA; } goto L_0C08C8E0; }  /* 0C08C8DC bt/s */
L_0C08C8E0: BLKS(0x0C08C8E0u);
	r11 = r2;  /* 0C08C8E0 mov Rm,Rn */
	r11 += 0x1u;  /* 0C08C8E2 add #imm,Rn */
	W16(r3, r11); UPD(0x0C08C8E6u, 5);  /* 0C08C8E4 mov.w Rm,@Rn */
	r2 = r11;  /* 0C08C8E6 mov Rm,Rn */
	IF(0x0C08C8E8u); MACL = r13 * r4;  /* 0C08C8E8 mul.l Rm,Rn */
	UPD(0x0C08C8EAu, 3);
L_0C08C8EA: BLKS(0x0C08C8EAu);
	r9 = (u32)(s32)(s16)r2;  /* 0C08C8EA exts.w Rm,Rn */
	T = (s32)r9 > (s32)r5;  /* 0C08C8EC cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C08C8F0u); r7 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C08C8F8u, 5); goto L_0C08C8F8; } goto L_0C08C8F2; }  /* 0C08C8EE bf/s */
L_0C08C8F2: BLKS(0x0C08C8F2u);
	r12 = r2;  /* 0C08C8F2 mov Rm,Rn */
	r12 += 0xFFFFFFFFu;  /* 0C08C8F4 add #imm,Rn */
	W16(r3, r12); UPD(0x0C08C8F8u, 4);  /* 0C08C8F6 mov.w Rm,@Rn */
L_0C08C8F8: BLKS(0x0C08C8F8u);
	r0 = R32(r14); UPD(0x0C08C8FAu, 1);  /* 0C08C8F8 mov.l @Rm,Rn */
	r2 = 0x1u;  /* 0C08C8FA mov #imm,Rn */
	r0 += 0x1u;  /* 0C08C8FC add #imm,Rn */
	r10 = (u32)(s32)(s16)r0;  /* 0C08C8FE exts.w Rm,Rn */
	W32(r14, r10); UPD(0x0C08C902u, 4);  /* 0C08C900 mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C08C904u, 1);  /* 0C08C902 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r2;  /* 0C08C904 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08C8D6u, 4); goto L_0C08C8D6; }  /* 0C08C906 bf */
L_0C08C908: BLKS(0x0C08C908u);
	r4 = r13;  /* 0C08C908 mov Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C08C90Cu, 2);  /* 0C08C90A mov.l @(disp,pc),Rn */
	r11 = 0x86u; UPD(0x0C08C90Eu, 1);  /* 0C08C90C mov.w @(disp,pc),Rn */
	r9 += r7;  /* 0C08C90E add Rm,Rn */
	r11 += r9;  /* 0C08C910 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r11); UPD(0x0C08C914u, 3);  /* 0C08C912 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C08C914 add #imm,Rn */
	IF(0x0C08C916u); r0 >>= 2;  /* 0C08C916 shlr2 Rn */
	IF(0x0C08C918u); r0 >>= 2;  /* 0C08C918 shlr2 Rn */
	r5 = 0xC0A0380u; UPD(0x0C08C91Cu, 4);  /* 0C08C91A mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C08C91C and #imm,r0 */
	r0 += 0x20u;  /* 0C08C91E add #imm,Rn */
	IF(0x0C08C920u); { u32 t_ = r5; PR = 0x0C08C924u; W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08C924u); }  /* 0C08C920 jsr @Rn */
L_0C08C924: BLKS(0x0C08C924u);
	r6 = (u32)(s32)(s16)R16(r11); UPD(0x0C08C926u, 1);  /* 0C08C924 mov.w @Rm,Rn */
	r3 = 0x100u; UPD(0x0C08C928u, 1);  /* 0C08C926 mov.w @(disp,pc),Rn */
	T = r6 == r3;  /* 0C08C928 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C08C846u, 4); goto L_0C08C846; }  /* 0C08C92A bf */
L_0C08C92C: BLKS(0x0C08C92Cu);
	r0 = 0x9Fu; UPD(0x0C08C92Eu, 1);  /* 0C08C92C mov.w @(disp,pc),Rn */
	IF(0x0C08C92Eu); r13 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08C930u, 1);  /* 0C08C92E mov.b @(r0,Rm),Rn */
	r13 += 0x1u;  /* 0C08C930 add #imm,Rn */
	{ IF(0x0C08C934u); W8(r0 + r9, r13); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C08C208u, 4); goto L_0C08C208; }  /* 0C08C932 bra */
L_0C08C940: BLKS(0x0C08C940u);
	r2 = 0xB4u; UPD(0x0C08C942u, 1);  /* 0C08C940 mov.w @(disp,pc),Rn */
	r4 = 0x1Fu;  /* 0C08C942 mov #imm,Rn */
	IF(0x0C08C944u); MACL = r13 * r2;  /* 0C08C944 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C08C948u, 4);  /* 0C08C946 mov.l @(disp,pc),Rn */
	r8 = 0xFFFFFFFFu;  /* 0C08C948 mov #imm,Rn */
	IF(0x0C08C94Au); r9 = MACL;  /* 0C08C94A sts macl,Rn */
	r9 += r12;  /* 0C08C94C add Rm,Rn */
	r7 = 0xC0A0380u; UPD(0x0C08C950u, 4);  /* 0C08C94E mov.l @(disp,pc),Rn */
	r0 = 0x88u; UPD(0x0C08C952u, 1);  /* 0C08C950 mov.w @(disp,pc),Rn */
	W32(r9 + 0xCu, r4); UPD(0x0C08C954u, 1);  /* 0C08C952 mov.l Rm,@(disp,Rn) */
	IF(0x0C08C954u); W16(r0 + r9, r8); UPD(0x0C08C956u, 1);  /* 0C08C954 mov.w Rm,@(r0,Rn) */
	IF(0x0C08C956u); { u32 t_ = r7; PR = 0x0C08C95Au; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08C95Au); }  /* 0C08C956 jsr @Rn */
L_0C08C95A: BLKS(0x0C08C95Au);
	r2 = 0x9Fu; UPD(0x0C08C95Cu, 1);  /* 0C08C95A mov.w @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C08C95C mov #imm,Rn */
	r0 = r9;  /* 0C08C95E mov Rm,Rn */
	UPD(0x0C08C960u, 2);
L_0C08C960: BLKS(0x0C08C960u);
	IF(0x0C08C960u); W8(r0 + r2, r1); UPD(0x0C08C962u, 1);  /* 0C08C960 mov.b Rm,@(r0,Rn) */
L_0C08C962: BLKS(0x0C08C962u);
	{ r14 += 0x28u; /* slot add #imm,Rn */ UPD(0x0C08C20Au, 3); goto L_0C08C20A; }  /* 0C08C962 bra */
L_0C08C970: BLKS(0x0C08C970u);
	r9 = 0xC0A0540u; UPD(0x0C08C972u, 1);  /* 0C08C970 mov.l @(disp,pc),Rn */
	IF(0x0C08C972u); { u32 t_ = r9; PR = 0x0C08C976u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C08C976u); }  /* 0C08C972 jsr @Rn */
L_0C08C976: BLKS(0x0C08C976u);
	IF(0x0C08C976u); T = (s32)r0 >= 0;  /* 0C08C976 cmp/pz Rn */
	if (!T) { UPD(0x0C08C9CAu, 4); goto L_0C08C9CA; }  /* 0C08C978 bf */
L_0C08C97A: BLKS(0x0C08C97Au);
	r2 = 0xB4u; UPD(0x0C08C97Cu, 1);  /* 0C08C97A mov.w @(disp,pc),Rn */
	IF(0x0C08C97Cu); MACL = r13 * r2;  /* 0C08C97C mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C08C980u, 3);  /* 0C08C97E mov.l @(disp,pc),Rn */
	IF(0x0C08C980u); r5 = MACL;  /* 0C08C980 sts macl,Rn */
	IF(0x0C08C982u); MACL = r0 * r2;  /* 0C08C982 mul.l Rm,Rn */
	r5 += r6;  /* 0C08C984 add Rm,Rn */
	r3 = R32(r5 + 0x30u); UPD(0x0C08C988u, 5);  /* 0C08C986 mov.l @(disp,Rm),Rn */
	IF(0x0C08C988u); r4 = MACL;  /* 0C08C988 sts macl,Rn */
	r4 += r6;  /* 0C08C98A add Rm,Rn */
	r0 = R32(r4 + 0x28u); UPD(0x0C08C98Eu, 3);  /* 0C08C98C mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C08C98E add Rm,Rn */
	W32(r5 + 0x28u, r0); UPD(0x0C08C992u, 2);  /* 0C08C990 mov.l Rm,@(disp,Rn) */
	r8 = R32(r5); UPD(0x0C08C994u, 1);  /* 0C08C992 mov.l @Rm,Rn */
	r10 = R32(r4); UPD(0x0C08C996u, 1);  /* 0C08C994 mov.l @Rm,Rn */
	r0 = R32(r5 + 0xCu); UPD(0x0C08C998u, 1);  /* 0C08C996 mov.l @(disp,Rm),Rn */
	r7 = 0xECFFFFFFu; UPD(0x0C08C99Au, 1);  /* 0C08C998 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C08C99A add #imm,Rn */
	r1 = 0x13000000u; UPD(0x0C08C99Eu, 2);  /* 0C08C99C mov.l @(disp,pc),Rn */
	r8 &= r7;  /* 0C08C99E and Rm,Rn */
	r12 = R32(r4 + 0x24u); UPD(0x0C08C9A2u, 2);  /* 0C08C9A0 mov.l @(disp,Rm),Rn */
	r10 &= r1;  /* 0C08C9A2 and Rm,Rn */
	r11 = R32(r5 + 0x2Cu); UPD(0x0C08C9A6u, 2);  /* 0C08C9A4 mov.l @(disp,Rm),Rn */
	r8 |= r10;  /* 0C08C9A6 or Rm,Rn */
	r12 += r11;  /* 0C08C9A8 add Rm,Rn */
	r0 &= 0x7u;  /* 0C08C9AA and #imm,r0 */
	W32(r5 + 0x24u, r12); UPD(0x0C08C9AEu, 4);  /* 0C08C9AC mov.l Rm,@(disp,Rn) */
	W32(r5, r8); UPD(0x0C08C9B0u, 1);  /* 0C08C9AE mov.l Rm,@Rn */
	{ W32(r5 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08C638u, 3); goto L_0C08C638; }  /* 0C08C9B0 bra */
L_0C08C9C0: BLKS(0x0C08C9C0u);
	r9 = 0xC0A05D0u; UPD(0x0C08C9C2u, 1);  /* 0C08C9C0 mov.l @(disp,pc),Rn */
	IF(0x0C08C9C2u); { u32 t_ = r9; PR = 0x0C08C9C6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C08C9C6u); }  /* 0C08C9C2 jsr @Rn */
L_0C08C9C6: BLKS(0x0C08C9C6u);
	IF(0x0C08C9C6u); T = (s32)r0 >= 0;  /* 0C08C9C6 cmp/pz Rn */
	if (T) { UPD(0x0C08C9CEu, 4); goto L_0C08C9CE; }  /* 0C08C9C8 bt */
L_0C08C9CA: BLKS(0x0C08C9CAu);
	{ IF(0x0C08C9CCu); ; /* slot nop */ UPD(0x0C08C2D0u, 3); goto L_0C08C2D0; }  /* 0C08C9CA bra */
L_0C08C9CE: BLKS(0x0C08C9CEu);
	r2 = 0xB4u; UPD(0x0C08C9D0u, 1);  /* 0C08C9CE mov.w @(disp,pc),Rn */
	IF(0x0C08C9D0u); MACL = r13 * r2;  /* 0C08C9D0 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C08C9D4u, 3);  /* 0C08C9D2 mov.l @(disp,pc),Rn */
	IF(0x0C08C9D4u); r10 = MACL;  /* 0C08C9D4 sts macl,Rn */
	IF(0x0C08C9D6u); MACL = r0 * r2;  /* 0C08C9D6 mul.l Rm,Rn */
	r10 += r6;  /* 0C08C9D8 add Rm,Rn */
	r11 = R32(r10 + 0x2Cu); UPD(0x0C08C9DCu, 5);  /* 0C08C9DA mov.l @(disp,Rm),Rn */
	IF(0x0C08C9DCu); r12 = MACL;  /* 0C08C9DC sts macl,Rn */
	r12 += r6;  /* 0C08C9DE add Rm,Rn */
	r3 = R32(r12 + 0x24u); UPD(0x0C08C9E2u, 3);  /* 0C08C9E0 mov.l @(disp,Rm),Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08C9E4u, 1);  /* 0C08C9E2 mov.l @(disp,Rm),Rn */
	r3 += r11;  /* 0C08C9E4 add Rm,Rn */
	r0 = R32(r10 + 0x30u); UPD(0x0C08C9E8u, 2);  /* 0C08C9E6 mov.l @(disp,Rm),Rn */
	r4 = R32(r10 + 0xCu); UPD(0x0C08C9EAu, 1);  /* 0C08C9E8 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C08C9EA add Rm,Rn */
	r1 = 0xC1BB8FCu; UPD(0x0C08C9EEu, 2);  /* 0C08C9EC mov.l @(disp,pc),Rn */
	IF(0x0C08C9EEu); r4 <<= 2;  /* 0C08C9EE shll2 Rn */
	W32(r10 + 0x24u, r3); UPD(0x0C08C9F2u, 2);  /* 0C08C9F0 mov.l Rm,@(disp,Rn) */
	r4 += r1;  /* 0C08C9F2 add Rm,Rn */
	W32(r10 + 0x28u, r7); UPD(0x0C08C9F6u, 2);  /* 0C08C9F4 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A0380u; UPD(0x0C08C9F8u, 1);  /* 0C08C9F6 mov.l @(disp,pc),Rn */
	r8 = R32(r4 + 0x4u); UPD(0x0C08C9FAu, 1);  /* 0C08C9F8 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C08C9FA mov Rm,Rn */
	IF(0x0C08C9FCu); { u32 t_ = r5; PR = 0x0C08CA00u; W32(r10 + 0xCu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08CA00u); }  /* 0C08C9FC jsr @Rn */
L_0C08CA00: BLKS(0x0C08CA00u);
	r2 = 0x99u; UPD(0x0C08CA02u, 1);  /* 0C08CA00 mov.w @(disp,pc),Rn */
	r2 += r10;  /* 0C08CA02 add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C08CA06u, 2);  /* 0C08CA04 mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C08CA06 add #imm,Rn */
	r0 = r13 & 0xFF;  /* 0C08CA08 extu.b Rm,Rn */
	T = r0 == 0xAu;  /* 0C08CA0A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r13); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08C962u, 6); goto L_0C08C962; } UPD(0x0C08CA10u, 1); goto L_0C08CA10; }  /* 0C08CA0C bf/s */
L_0C08CA10: BLKS(0x0C08CA10u);
	r9 = R32(r10 + 0x8u); UPD(0x0C08CA12u, 1);  /* 0C08CA10 mov.l @(disp,Rm),Rn */
	r8 = 0x0u;  /* 0C08CA12 mov #imm,Rn */
	W8(r2, r8); UPD(0x0C08CA16u, 2);  /* 0C08CA14 mov.b Rm,@Rn */
	IF(0x0C08CA16u); r9 <<= 2;  /* 0C08CA16 shll2 Rn */
	r0 = 0xC1BB8E0u; UPD(0x0C08CA1Au, 2);  /* 0C08CA18 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C08CA1A add #imm,Rn */
	IF(0x0C08CA1Cu); r2 = R32(r0 + r9); UPD(0x0C08CA1Eu, 2);  /* 0C08CA1C mov.l @(r0,Rm),Rn */
	r8 = R32(r10 + 0x24u); UPD(0x0C08CA20u, 1);  /* 0C08CA1E mov.l @(disp,Rm),Rn */
	r13 = 0xFFF80000u; UPD(0x0C08CA22u, 1);  /* 0C08CA20 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C08CA24u, 1);  /* 0C08CA22 mov.w @(disp,pc),Rn */
	r8 += r13;  /* 0C08CA24 add Rm,Rn */
	IF(0x0C08CA26u); r6 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C08CA28u, 2);  /* 0C08CA26 mov.b @(r0,Rm),Rn */
	r13 = R32(r10 + 0x28u); UPD(0x0C08CA2Au, 1);  /* 0C08CA28 mov.l @(disp,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C08CA2A extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C08CA2Eu, 2);  /* 0C08CA2C mov.l Rm,@Rn */
	r13 += r2;  /* 0C08CA2E add Rm,Rn */
	r11 = 0xA9u; UPD(0x0C08CA32u, 2);  /* 0C08CA30 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C08CA32 mov Rm,Rn */
	IF(0x0C08CA34u); r3 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C08CA36u, 2);  /* 0C08CA34 mov.b @(r0,Rm),Rn */
	r4 = 0xFFFF4000u; UPD(0x0C08CA38u, 1);  /* 0C08CA36 mov.l @(disp,pc),Rn */
	r7 = r3 & 0xFF;  /* 0C08CA38 extu.b Rm,Rn */
	r12 = 0xC050D70u; UPD(0x0C08CA3Cu, 2);  /* 0C08CA3A mov.l @(disp,pc),Rn */
	r7 += 0xFFFFFFFFu;  /* 0C08CA3C add #imm,Rn */
	W32(r15 + 0x8u, r4); UPD(0x0C08CA40u, 2);  /* 0C08CA3E mov.l Rm,@(disp,Rn) */
	r4 = 0x1FFFu; UPD(0x0C08CA42u, 1);  /* 0C08CA40 mov.w @(disp,pc),Rn */
	IF(0x0C08CA42u); { u32 t_ = r12; PR = 0x0C08CA46u; W32(r15 + 0x4u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C08CA46u); }  /* 0C08CA42 jsr @Rn */
L_0C08CA46: BLKS(0x0C08CA46u);
	r5 = 0xFFFFF000u; UPD(0x0C08CA48u, 1);  /* 0C08CA46 mov.w @(disp,pc),Rn */
	r6 = r8;  /* 0C08CA48 mov Rm,Rn */
	r9 = 0x808080u; UPD(0x0C08CA4Cu, 2);  /* 0C08CA4A mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C08CA4C add Rm,Rn */
	W32(r15 + 0xCu, r5); UPD(0x0C08CA50u, 2);  /* 0C08CA4E mov.l Rm,@(disp,Rn) */
	r7 = r13;  /* 0C08CA50 mov Rm,Rn */
	W32(r15 + 0x10u, r9); UPD(0x0C08CA54u, 2);  /* 0C08CA52 mov.l Rm,@(disp,Rn) */
	r5 = 0x8u;  /* 0C08CA54 mov #imm,Rn */
	r4 = R32(r10); UPD(0x0C08CA58u, 2);  /* 0C08CA56 mov.l @Rm,Rn */
L_0C08CA58: BLKS(0x0C08CA58u);
	r9 = 0xC0ACA40u; UPD(0x0C08CA5Au, 1);  /* 0C08CA58 mov.l @(disp,pc),Rn */
	IF(0x0C08CA5Au); { u32 t_ = r9; PR = 0x0C08CA5Eu; IF(0x0C08CA5Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C08CA5Eu); }  /* 0C08CA5A jsr @Rn */
L_0C08CA5E: BLKS(0x0C08CA5Eu);
	r15 += 0x14u;  /* 0C08CA5E add #imm,Rn */
	UPD(0x0C08CA60u, 1);
L_0C08CA60: BLKS(0x0C08CA60u);
	{ r14 += 0x28u; /* slot add #imm,Rn */ UPD(0x0C08C20Au, 3); goto L_0C08C20A; }  /* 0C08CA60 bra */
L_0C08CAB0: BLKS(0x0C08CAB0u);
	r10 = 0xC0A0540u; UPD(0x0C08CAB2u, 1);  /* 0C08CAB0 mov.l @(disp,pc),Rn */
	IF(0x0C08CAB2u); { u32 t_ = r10; PR = 0x0C08CAB6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C08CAB6u); }  /* 0C08CAB2 jsr @Rn */
L_0C08CAB6: BLKS(0x0C08CAB6u);
	IF(0x0C08CAB6u); T = (s32)r0 >= 0;  /* 0C08CAB6 cmp/pz Rn */
	if (!T) { UPD(0x0C08CB9Au, 4); goto L_0C08CB9A; }  /* 0C08CAB8 bf */
L_0C08CABA: BLKS(0x0C08CABAu);
	r2 = 0xB4u; UPD(0x0C08CABCu, 1);  /* 0C08CABA mov.w @(disp,pc),Rn */
	IF(0x0C08CABCu); MACL = r13 * r2;  /* 0C08CABC mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C08CAC0u, 3);  /* 0C08CABE mov.l @(disp,pc),Rn */
	IF(0x0C08CAC0u); r9 = MACL;  /* 0C08CAC0 sts macl,Rn */
	IF(0x0C08CAC2u); MACL = r0 * r2;  /* 0C08CAC2 mul.l Rm,Rn */
	r9 += r10;  /* 0C08CAC4 add Rm,Rn */
	r8 = R32(r9 + 0x2Cu); UPD(0x0C08CAC8u, 5);  /* 0C08CAC6 mov.l @(disp,Rm),Rn */
	IF(0x0C08CAC8u); r0 = MACL;  /* 0C08CAC8 sts macl,Rn */
	r0 += r10;  /* 0C08CACA add Rm,Rn */
	r6 = R32(r0 + 0x24u); UPD(0x0C08CACEu, 3);  /* 0C08CACC mov.l @(disp,Rm),Rn */
	r11 = R32(r0 + 0x28u); UPD(0x0C08CAD0u, 1);  /* 0C08CACE mov.l @(disp,Rm),Rn */
	r6 += r8;  /* 0C08CAD0 add Rm,Rn */
	r3 = R32(r9 + 0x30u); UPD(0x0C08CAD4u, 2);  /* 0C08CAD2 mov.l @(disp,Rm),Rn */
	r4 = R32(r9 + 0xCu); UPD(0x0C08CAD6u, 1);  /* 0C08CAD4 mov.l @(disp,Rm),Rn */
	r11 += r3;  /* 0C08CAD6 add Rm,Rn */
	r7 = 0xC1BB8FCu; UPD(0x0C08CADAu, 2);  /* 0C08CAD8 mov.l @(disp,pc),Rn */
	IF(0x0C08CADAu); r4 <<= 2;  /* 0C08CADA shll2 Rn */
	W32(r9 + 0x24u, r6); UPD(0x0C08CADEu, 2);  /* 0C08CADC mov.l Rm,@(disp,Rn) */
	r4 += r7;  /* 0C08CADE add Rm,Rn */
	W32(r9 + 0x28u, r11); UPD(0x0C08CAE2u, 2);  /* 0C08CAE0 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A0380u; UPD(0x0C08CAE4u, 1);  /* 0C08CAE2 mov.l @(disp,pc),Rn */
	r12 = R32(r4 + 0x4u); UPD(0x0C08CAE6u, 1);  /* 0C08CAE4 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C08CAE6 mov Rm,Rn */
	IF(0x0C08CAE8u); { u32 t_ = r5; PR = 0x0C08CAECu; W32(r9 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08CAECu); }  /* 0C08CAE8 jsr @Rn */
L_0C08CAEC: BLKS(0x0C08CAECu);
	r2 = 0x99u; UPD(0x0C08CAEEu, 1);  /* 0C08CAEC mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C08CAEE add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C08CAF2u, 2);  /* 0C08CAF0 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C08CAF2 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C08CAF4 extu.b Rm,Rn */
	T = r0 == 0xAu;  /* 0C08CAF6 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08CA60u, 6); goto L_0C08CA60; } UPD(0x0C08CAFCu, 1); goto L_0C08CAFC; }  /* 0C08CAF8 bf/s */
L_0C08CAFC: BLKS(0x0C08CAFCu);
	r13 = 0x0u;  /* 0C08CAFC mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C08CB00u, 2);  /* 0C08CAFE mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C08CB00 add #imm,Rn */
	W8(r2, r13); UPD(0x0C08CB04u, 2);  /* 0C08CB02 mov.b Rm,@Rn */
	IF(0x0C08CB04u); r8 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08CB06u, 1);  /* 0C08CB04 mov.b @(r0,Rm),Rn */
	r13 = R32(r9 + 0x24u); UPD(0x0C08CB08u, 1);  /* 0C08CB06 mov.l @(disp,Rm),Rn */
	r0 = r8 & 0xFF;  /* 0C08CB08 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C08CB0Cu, 2);  /* 0C08CB0A mov.l Rm,@Rn */
	r6 = 0xA9u; UPD(0x0C08CB0Eu, 1);  /* 0C08CB0C mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C08CB0E mov Rm,Rn */
	IF(0x0C08CB10u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08CB12u, 2);  /* 0C08CB10 mov.b @(r0,Rm),Rn */
	r4 = 0xFFFF4000u; UPD(0x0C08CB14u, 1);  /* 0C08CB12 mov.l @(disp,pc),Rn */
	r7 = r3 & 0xFF;  /* 0C08CB14 extu.b Rm,Rn */
	r11 = 0xC050D70u; UPD(0x0C08CB18u, 2);  /* 0C08CB16 mov.l @(disp,pc),Rn */
	r7 += 0xFFFFFFFFu;  /* 0C08CB18 add #imm,Rn */
	W32(r15 + 0x8u, r4); UPD(0x0C08CB1Cu, 2);  /* 0C08CB1A mov.l Rm,@(disp,Rn) */
	r4 = 0x1FFFu; UPD(0x0C08CB1Eu, 1);  /* 0C08CB1C mov.w @(disp,pc),Rn */
	IF(0x0C08CB1Eu); { u32 t_ = r11; PR = 0x0C08CB22u; W32(r15 + 0x4u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C08CB22u); }  /* 0C08CB1E jsr @Rn */
L_0C08CB22: BLKS(0x0C08CB22u);
	r12 = 0xFFFFF000u; UPD(0x0C08CB24u, 1);  /* 0C08CB22 mov.w @(disp,pc),Rn */
	r5 = 0x808080u; UPD(0x0C08CB26u, 1);  /* 0C08CB24 mov.l @(disp,pc),Rn */
	r12 += r0;  /* 0C08CB26 add Rm,Rn */
	W32(r15 + 0x10u, r5); UPD(0x0C08CB2Au, 2);  /* 0C08CB28 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r12); UPD(0x0C08CB2Cu, 1);  /* 0C08CB2A mov.l Rm,@(disp,Rn) */
	r5 = 0x9u;  /* 0C08CB2C mov #imm,Rn */
	r10 = 0xFFF40000u; UPD(0x0C08CB30u, 2);  /* 0C08CB2E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C08CB32u, 1);  /* 0C08CB30 mov.l @Rm,Rn */
	r13 += r10;  /* 0C08CB32 add Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C08CB36u, 2);  /* 0C08CB34 mov.l @(disp,Rm),Rn */
	{ r6 = r13; /* slot mov Rm,Rn */ UPD(0x0C08CA58u, 3); goto L_0C08CA58; }  /* 0C08CB36 bra */
L_0C08CB40: BLKS(0x0C08CB40u);
	r12 = 0xC0A0540u; UPD(0x0C08CB42u, 1);  /* 0C08CB40 mov.l @(disp,pc),Rn */
	IF(0x0C08CB42u); { u32 t_ = r12; PR = 0x0C08CB46u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C08CB46u); }  /* 0C08CB42 jsr @Rn */
L_0C08CB46: BLKS(0x0C08CB46u);
	IF(0x0C08CB46u); T = (s32)r0 >= 0;  /* 0C08CB46 cmp/pz Rn */
	{ u32 c_ = !T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08CB9Au, 4); goto L_0C08CB9A; } goto L_0C08CB4C; }  /* 0C08CB48 bf/s */
L_0C08CB4C: BLKS(0x0C08CB4Cu);
	r2 = 0xB4u; UPD(0x0C08CB4Eu, 2);  /* 0C08CB4C mov.w @(disp,pc),Rn */
	IF(0x0C08CB4Eu); MACL = r13 * r2;  /* 0C08CB4E mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C08CB52u, 3);  /* 0C08CB50 mov.l @(disp,pc),Rn */
	IF(0x0C08CB52u); r7 = MACL;  /* 0C08CB52 sts macl,Rn */
	IF(0x0C08CB54u); MACL = r12 * r2;  /* 0C08CB54 mul.l Rm,Rn */
	r7 += r0;  /* 0C08CB56 add Rm,Rn */
	r6 = R32(r7 + 0x2Cu); UPD(0x0C08CB5Au, 5);  /* 0C08CB58 mov.l @(disp,Rm),Rn */
	IF(0x0C08CB5Au); r4 = MACL;  /* 0C08CB5A sts macl,Rn */
	r2 = 0x99u; UPD(0x0C08CB5Eu, 2);  /* 0C08CB5C mov.w @(disp,pc),Rn */
	r4 += r0;  /* 0C08CB5E add Rm,Rn */
	r2 += r7;  /* 0C08CB60 add Rm,Rn */
	r3 = R32(r4 + 0x24u); UPD(0x0C08CB64u, 3);  /* 0C08CB62 mov.l @(disp,Rm),Rn */
	r5 = R32(r4 + 0x28u); UPD(0x0C08CB66u, 1);  /* 0C08CB64 mov.l @(disp,Rm),Rn */
	r3 += r6;  /* 0C08CB66 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C08CB6Au, 2);  /* 0C08CB68 mov.b @Rm,Rn */
	r11 = R32(r7 + 0x30u); UPD(0x0C08CB6Cu, 1);  /* 0C08CB6A mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C08CB6C add #imm,Rn */
	r5 += r11;  /* 0C08CB6E add Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C08CB70 extu.b Rm,Rn */
	W32(r7 + 0x24u, r3); UPD(0x0C08CB74u, 4);  /* 0C08CB72 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x3u;  /* 0C08CB74 cmp/eq #imm,r0 */
	W32(r7 + 0x28u, r5); UPD(0x0C08CB78u, 2);  /* 0C08CB76 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08CBCEu, 3); goto L_0C08CBCE; } UPD(0x0C08CB7Cu, 1); goto L_0C08CB7C; }  /* 0C08CB78 bf/s */
L_0C08CB7C: BLKS(0x0C08CB7Cu);
	r0 = R32(r7 + 0xCu); UPD(0x0C08CB7Eu, 1);  /* 0C08CB7C mov.l @(disp,Rm),Rn */
	r8 = 0x0u;  /* 0C08CB7E mov #imm,Rn */
	r0 += 0x1u;  /* 0C08CB80 add #imm,Rn */
	W8(r2, r8); UPD(0x0C08CB84u, 3);  /* 0C08CB82 mov.b Rm,@Rn */
	r0 &= 0xFu;  /* 0C08CB84 and #imm,r0 */
	UPD(0x0C08CB86u, 1);
L_0C08CB86: BLKS(0x0C08CB86u);
	{ W32(r7 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08C638u, 3); goto L_0C08C638; }  /* 0C08CB86 bra */
L_0C08CB90: BLKS(0x0C08CB90u);
	r10 = 0xC0A05D0u; UPD(0x0C08CB92u, 1);  /* 0C08CB90 mov.l @(disp,pc),Rn */
	IF(0x0C08CB92u); { u32 t_ = r10; PR = 0x0C08CB96u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C08CB96u); }  /* 0C08CB92 jsr @Rn */
L_0C08CB96: BLKS(0x0C08CB96u);
	IF(0x0C08CB96u); T = (s32)r0 >= 0;  /* 0C08CB96 cmp/pz Rn */
	if (T) { UPD(0x0C08CB9Eu, 4); goto L_0C08CB9E; }  /* 0C08CB98 bt */
L_0C08CB9A: BLKS(0x0C08CB9Au);
	{ IF(0x0C08CB9Cu); ; /* slot nop */ UPD(0x0C08C2D0u, 3); goto L_0C08C2D0; }  /* 0C08CB9A bra */
L_0C08CB9E: BLKS(0x0C08CB9Eu);
	r9 = 0xB4u; UPD(0x0C08CBA0u, 1);  /* 0C08CB9E mov.w @(disp,pc),Rn */
	IF(0x0C08CBA0u); MACL = r13 * r9;  /* 0C08CBA0 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C08CBA4u, 3);  /* 0C08CBA2 mov.l @(disp,pc),Rn */
	IF(0x0C08CBA4u); r8 = MACL;  /* 0C08CBA4 sts macl,Rn */
	IF(0x0C08CBA6u); MACL = r0 * r9;  /* 0C08CBA6 mul.l Rm,Rn */
	r2 = 0x99u; UPD(0x0C08CBAAu, 4);  /* 0C08CBA8 mov.w @(disp,pc),Rn */
	r8 += r4;  /* 0C08CBAA add Rm,Rn */
	IF(0x0C08CBACu); r9 = MACL;  /* 0C08CBAC sts macl,Rn */
	r9 += r4;  /* 0C08CBAE add Rm,Rn */
	r2 += r8;  /* 0C08CBB0 add Rm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C08CBB4u, 5);  /* 0C08CBB2 mov.l @(disp,Rm),Rn */
	r12 = R32(r9 + 0x28u); UPD(0x0C08CBB6u, 1);  /* 0C08CBB4 mov.l @(disp,Rm),Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C08CBB8u, 1);  /* 0C08CBB6 mov.b @Rm,Rn */
	r11 = R32(r8 + 0x2Cu); UPD(0x0C08CBBAu, 1);  /* 0C08CBB8 mov.l @(disp,Rm),Rn */
	r7 += 0x1u;  /* 0C08CBBA add #imm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C08CBBEu, 2);  /* 0C08CBBC mov.l @(disp,Rm),Rn */
	r5 += r11;  /* 0C08CBBE add Rm,Rn */
	r12 += r1;  /* 0C08CBC0 add Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C08CBC2 extu.b Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C08CBC6u, 4);  /* 0C08CBC4 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x3u;  /* 0C08CBC6 cmp/eq #imm,r0 */
	W32(r8 + 0x28u, r12); UPD(0x0C08CBCAu, 2);  /* 0C08CBC8 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W8(r2, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08CBD2u, 3); goto L_0C08CBD2; } UPD(0x0C08CBCEu, 1); goto L_0C08CBCE; }  /* 0C08CBCA bt/s */
L_0C08CBCE: BLKS(0x0C08CBCEu);
	{ r14 += 0x28u; /* slot add #imm,Rn */ UPD(0x0C08C20Au, 3); goto L_0C08C20A; }  /* 0C08CBCE bra */
L_0C08CBD2: BLKS(0x0C08CBD2u);
	r0 = R32(r8 + 0xCu); UPD(0x0C08CBD4u, 1);  /* 0C08CBD2 mov.l @(disp,Rm),Rn */
	r7 = 0x0u;  /* 0C08CBD4 mov #imm,Rn */
	r10 = 0xC0A0380u; UPD(0x0C08CBD8u, 2);  /* 0C08CBD6 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C08CBD8 add #imm,Rn */
	r0 &= 0xFu;  /* 0C08CBDA and #imm,r0 */
	W8(r2, r7); UPD(0x0C08CBDEu, 3);  /* 0C08CBDC mov.b Rm,@Rn */
	r4 = r13;  /* 0C08CBDE mov Rm,Rn */
	IF(0x0C08CBE0u); { u32 t_ = r10; PR = 0x0C08CBE4u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08CBE4u); }  /* 0C08CBE0 jsr @Rn */
L_0C08CBE4: BLKS(0x0C08CBE4u);
	r2 = 0xA4u; UPD(0x0C08CBE6u, 1);  /* 0C08CBE4 mov.w @(disp,pc),Rn */
	r13 = 0x1u;  /* 0C08CBE6 mov #imm,Rn */
	r2 += r9;  /* 0C08CBE8 add Rm,Rn */
	r0 = r2;  /* 0C08CBEA mov Rm,Rn */
	r2 += 0x1u;  /* 0C08CBEC add #imm,Rn */
	r0 += 0x2u;  /* 0C08CBEE add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C08CBF2u, 6);  /* 0C08CBF0 mov.b @Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C08CBF4u, 1);  /* 0C08CBF2 mov.b @Rm,Rn */
	r2 = r6;  /* 0C08CBF4 mov Rm,Rn */
	r2 |= r3;  /* 0C08CBF6 or Rm,Rn */
	IF(0x0C08CBF8u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C08CBF8 shar Rn */
	IF(0x0C08CBFAu); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C08CBFA shar Rn */
	r1 = 0xA2u; UPD(0x0C08CBFEu, 5);  /* 0C08CBFC mov.w @(disp,pc),Rn */
	IF(0x0C08CBFEu); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C08CBFE shar Rn */
	r2 &= r13;  /* 0C08CC00 and Rm,Rn */
	{ r0 = r8; /* slot mov Rm,Rn */ UPD(0x0C08C51Cu, 5); goto L_0C08C51C; }  /* 0C08CC02 bra */
L_0C08CC40: BLKS(0x0C08CC40u);
	r12 = 0xC0A0540u; UPD(0x0C08CC42u, 1);  /* 0C08CC40 mov.l @(disp,pc),Rn */
	IF(0x0C08CC42u); { u32 t_ = r12; PR = 0x0C08CC46u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C08CC46u); }  /* 0C08CC42 jsr @Rn */
L_0C08CC46: BLKS(0x0C08CC46u);
	IF(0x0C08CC46u); T = (s32)r0 >= 0;  /* 0C08CC46 cmp/pz Rn */
	if (T) { UPD(0x0C08CC4Eu, 4); goto L_0C08CC4E; }  /* 0C08CC48 bt */
L_0C08CC4A: BLKS(0x0C08CC4Au);
	{ IF(0x0C08CC4Cu); ; /* slot nop */ UPD(0x0C08C2D0u, 3); goto L_0C08C2D0; }  /* 0C08CC4A bra */
L_0C08CC4E: BLKS(0x0C08CC4Eu);
	r6 = 0xB4u; UPD(0x0C08CC50u, 1);  /* 0C08CC4E mov.w @(disp,pc),Rn */
	IF(0x0C08CC50u); MACL = r13 * r6;  /* 0C08CC50 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C08CC54u, 3);  /* 0C08CC52 mov.l @(disp,pc),Rn */
	IF(0x0C08CC54u); r4 = MACL;  /* 0C08CC54 sts macl,Rn */
	IF(0x0C08CC56u); MACL = r0 * r6;  /* 0C08CC56 mul.l Rm,Rn */
	r4 += r5;  /* 0C08CC58 add Rm,Rn */
	r2 = R32(r4 + 0x30u); UPD(0x0C08CC5Cu, 5);  /* 0C08CC5A mov.l @(disp,Rm),Rn */
	IF(0x0C08CC5Cu); r8 = MACL;  /* 0C08CC5C sts macl,Rn */
	r8 += r5;  /* 0C08CC5E add Rm,Rn */
	r7 = R32(r8 + 0x24u); UPD(0x0C08CC62u, 3);  /* 0C08CC60 mov.l @(disp,Rm),Rn */
	r9 = R32(r4 + 0x2Cu); UPD(0x0C08CC64u, 1);  /* 0C08CC62 mov.l @(disp,Rm),Rn */
	r1 = R32(r8 + 0x28u); UPD(0x0C08CC66u, 1);  /* 0C08CC64 mov.l @(disp,Rm),Rn */
	r7 += r9;  /* 0C08CC66 add Rm,Rn */
	r1 += r2;  /* 0C08CC68 add Rm,Rn */
	W32(r4 + 0x24u, r7); UPD(0x0C08CC6Cu, 3);  /* 0C08CC6A mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x28u, r1); UPD(0x0C08CC6Eu, 1);  /* 0C08CC6C mov.l Rm,@(disp,Rn) */
	r4 += 0x7Eu;  /* 0C08CC6E add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C08CC72u, 2);  /* 0C08CC70 mov.w @Rm,Rn */
	r2 = 0xA0u; UPD(0x0C08CC74u, 1);  /* 0C08CC72 mov.w @(disp,pc),Rn */
	r4 += 0xFFFFFF82u;  /* 0C08CC74 add #imm,Rn */
	r4 += r2;  /* 0C08CC76 add Rm,Rn */
	r4 += 0x2u;  /* 0C08CC78 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C08CC7Cu, 4);  /* 0C08CC7A mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08CC7C tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C08CC80u); MACL = r3 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C08CC86u, 5); goto L_0C08CC86; } goto L_0C08CC82; }  /* 0C08CC7E bf/s */
L_0C08CC82: BLKS(0x0C08CC82u);
	{ IF(0x0C08CC84u); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C08CE70u, 5); goto L_0C08CE70; }  /* 0C08CC82 bra */
L_0C08CC86: BLKS(0x0C08CC86u);
	IF(0x0C08CC86u); MACL = r3 * r6;  /* 0C08CC86 mul.l Rm,Rn */
	IF(0x0C08CC88u); r1 = MACL;  /* 0C08CC88 sts macl,Rn */
	r1 += r5;  /* 0C08CC8A add Rm,Rn */
	r1 += r2;  /* 0C08CC8C add Rm,Rn */
	r1 += 0x2u;  /* 0C08CC8E add #imm,Rn */
	UPD(0x0C08CC90u, 6);
L_0C08CC90: BLKS(0x0C08CC90u);
	r12 = 0xB4u; UPD(0x0C08CC92u, 1);  /* 0C08CC90 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)R8(r1); UPD(0x0C08CC94u, 1);  /* 0C08CC92 mov.b @Rm,Rn */
	IF(0x0C08CC94u); MACL = r13 * r12;  /* 0C08CC94 mul.l Rm,Rn */
	W32(r14, r11); UPD(0x0C08CC98u, 3);  /* 0C08CC96 mov.l Rm,@Rn */
	r5 = 0xC26CD40u; UPD(0x0C08CC9Au, 1);  /* 0C08CC98 mov.l @(disp,pc),Rn */
	IF(0x0C08CC9Au); r9 = MACL;  /* 0C08CC9A sts macl,Rn */
	r11 = 0xA0u; UPD(0x0C08CC9Eu, 2);  /* 0C08CC9C mov.w @(disp,pc),Rn */
	r9 += r5;  /* 0C08CC9E add Rm,Rn */
	r11 += r9;  /* 0C08CCA0 add Rm,Rn */
	r0 = r11;  /* 0C08CCA2 mov Rm,Rn */
	r0 += 0x1u;  /* 0C08CCA4 add #imm,Rn */
	W32(r14 + 0x18u, r0); UPD(0x0C08CCA8u, 5);  /* 0C08CCA6 mov.l Rm,@(disp,Rn) */
	r2 = r9;  /* 0C08CCA8 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r0); UPD(0x0C08CCACu, 2);  /* 0C08CCAA mov.b @Rm,Rn */
	r2 += 0x3Cu;  /* 0C08CCAC add #imm,Rn */
	r10 = R32(r14); UPD(0x0C08CCB0u, 2);  /* 0C08CCAE mov.l @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r2); UPD(0x0C08CCB2u, 1);  /* 0C08CCB0 mov.w @Rm,Rn */
	r10 &= r6;  /* 0C08CCB2 and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C08CCB4 tst Rm,Rn */
	{ u32 c_ = T; W32(r14, r10); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C08CCBEu, 5); goto L_0C08CCBE; } UPD(0x0C08CCBAu, 1); goto L_0C08CCBA; }  /* 0C08CCB6 bt/s */
L_0C08CCBA: BLKS(0x0C08CCBAu);
	{ IF(0x0C08CCBCu); MACL = r3 * r12; /* slot mul.l Rm,Rn */ UPD(0x0C08CDD0u, 4); goto L_0C08CDD0; }  /* 0C08CCBA bra */
L_0C08CCBE: BLKS(0x0C08CCBEu);
	r10 = 0x98u; UPD(0x0C08CCC0u, 1);  /* 0C08CCBE mov.w @(disp,pc),Rn */
	r3 = 0x2u;  /* 0C08CCC0 mov #imm,Rn */
	r10 += r9;  /* 0C08CCC2 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C08CCC6u, 3);  /* 0C08CCC4 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C08CCC6 add #imm,Rn */
	r4 = r2 & 0xFF;  /* 0C08CCC8 extu.b Rm,Rn */
	T = r4 > r3;  /* 0C08CCCA cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r10, r2); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08CD7Eu, 6); goto L_0C08CD7E; } UPD(0x0C08CCD0u, 1); goto L_0C08CCD0; }  /* 0C08CCCC bf/s */
L_0C08CCD0: BLKS(0x0C08CCD0u);
	r0 = 0xC0AFE40u; UPD(0x0C08CCD2u, 1);  /* 0C08CCD0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C08CCD2 add #imm,Rn */
	IF(0x0C08CCD4u); { u32 t_ = r0; PR = 0x0C08CCD8u; W8(r10, r7); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C08CCD8u); }  /* 0C08CCD4 jsr @Rn */
L_0C08CCD8: BLKS(0x0C08CCD8u);
	r5 = 0xB0u; UPD(0x0C08CCDAu, 1);  /* 0C08CCD8 mov.w @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C08CCDA and #imm,r0 */
	r5 += r9;  /* 0C08CCDC add Rm,Rn */
	W32(r14 + 0x1Cu, r5); UPD(0x0C08CCE0u, 3);  /* 0C08CCDE mov.l Rm,@(disp,Rn) */
	IF(0x0C08CCE0u); r0 <<= 2;  /* 0C08CCE0 shll2 Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C08CCE4u, 2);  /* 0C08CCE2 mov.b @Rm,Rn */
	r7 = 0xA9u; UPD(0x0C08CCE6u, 1);  /* 0C08CCE4 mov.w @(disp,pc),Rn */
	r2 = r6 & 0xFF;  /* 0C08CCE6 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C08CCEAu, 2);  /* 0C08CCE8 mov.l Rm,@Rn */
	r7 += r9;  /* 0C08CCEA add Rm,Rn */
	r8 = 0xC1BB8F4u; UPD(0x0C08CCEEu, 2);  /* 0C08CCEC mov.l @(disp,pc),Rn */
	W32(r14 + 0x20u, r7); UPD(0x0C08CCF0u, 1);  /* 0C08CCEE mov.l Rm,@(disp,Rn) */
	r8 += r0;  /* 0C08CCF0 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r7); UPD(0x0C08CCF4u, 2);  /* 0C08CCF2 mov.b @Rm,Rn */
	r0 = 0xFFFD0000u; UPD(0x0C08CCF6u, 1);  /* 0C08CCF4 mov.l @(disp,pc),Rn */
	r3 = r4 & 0xFF;  /* 0C08CCF6 extu.b Rm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C08CCFAu, 2);  /* 0C08CCF8 mov.l Rm,@(disp,Rn) */
	r0 = 0xC050D70u; UPD(0x0C08CCFCu, 1);  /* 0C08CCFA mov.l @(disp,pc),Rn */
	r4 = 0x1000u; UPD(0x0C08CCFEu, 1);  /* 0C08CCFC mov.w @(disp,pc),Rn */
	IF(0x0C08CCFEu); { u32 t_ = r0; PR = 0x0C08CD02u; W32(r15 + 0x4u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C08CD02u); }  /* 0C08CCFE jsr @Rn */
L_0C08CD02: BLKS(0x0C08CD02u);
	r5 = 0xFFFFF800u; UPD(0x0C08CD04u, 1);  /* 0C08CD02 mov.w @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C08CD04 mov #imm,Rn */
	r0 += r5;  /* 0C08CD06 add Rm,Rn */
	IF(0x0C08CD08u); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C08CD08 shld Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C08CD0Cu, 4);  /* 0C08CD0A mov.l Rm,@(disp,Rn) */
	r5 = R32(r8); UPD(0x0C08CD0Eu, 1);  /* 0C08CD0C mov.l @Rm,Rn */
	r8 = 0xC0AC3B0u; UPD(0x0C08CD10u, 1);  /* 0C08CD0E mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C08CD12u, 1);  /* 0C08CD10 mov.l @(disp,Rm),Rn */
	r4 = R32(r9); UPD(0x0C08CD14u, 1);  /* 0C08CD12 mov.l @Rm,Rn */
	IF(0x0C08CD14u); { u32 t_ = r8; PR = 0x0C08CD18u; r6 = R32(r9 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC3B0, 0x0C0AC3B0u, 0x0C08CD18u); }  /* 0C08CD14 jsr @Rn */
L_0C08CD18: BLKS(0x0C08CD18u);
	r1 = r10;  /* 0C08CD18 mov Rm,Rn */
	r1 += 0x1u;  /* 0C08CD1A add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r1); UPD(0x0C08CD1Eu, 3);  /* 0C08CD1C mov.b @Rm,Rn */
	r8 = 0x3Bu;  /* 0C08CD1E mov #imm,Rn */
	r10 += 0x1u;  /* 0C08CD20 add #imm,Rn */
	r7 = r10 & 0xFF;  /* 0C08CD22 extu.b Rm,Rn */
	W8(r1, r10); UPD(0x0C08CD26u, 4);  /* 0C08CD24 mov.b Rm,@Rn */
	T = r7 > r8;  /* 0C08CD26 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r15 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08CD7Eu, 4); goto L_0C08CD7E; } goto L_0C08CD2C; }  /* 0C08CD28 bf/s */
L_0C08CD2C: BLKS(0x0C08CD2Cu);
	r2 = R32(r14 + 0x1Cu); UPD(0x0C08CD2Eu, 2);  /* 0C08CD2C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08CD2E add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C08CD32u, 2);  /* 0C08CD30 mov.b @Rm,Rn */
	r5 = 0x4u;  /* 0C08CD32 mov #imm,Rn */
	r4 = r7 & 0xFF;  /* 0C08CD34 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C08CD38u, 3);  /* 0C08CD36 mov.l Rm,@Rn */
	r11 += 0x2u;  /* 0C08CD38 add #imm,Rn */
	r1 = R32(r14 + 0x20u); UPD(0x0C08CD3Cu, 2);  /* 0C08CD3A mov.l @(disp,Rm),Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C08CD3Eu, 1);  /* 0C08CD3C mov.b @Rm,Rn */
	r10 = 0xC0AB240u; UPD(0x0C08CD40u, 1);  /* 0C08CD3E mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C08CD40 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C08CD44u, 2);  /* 0C08CD42 mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C08CD46u, 1);  /* 0C08CD44 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C08CD48u, 1);  /* 0C08CD46 mov.l @(disp,Rm),Rn */
	IF(0x0C08CD48u); { u32 t_ = r10; PR = 0x0C08CD4Cu; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C08CD4Cu); }  /* 0C08CD48 jsr @Rn */
L_0C08CD4C: BLKS(0x0C08CD4Cu);
	r8 = R32(r14 + 0x18u); UPD(0x0C08CD4Eu, 1);  /* 0C08CD4C mov.l @(disp,Rm),Rn */
	r9 += 0x7Eu;  /* 0C08CD4E add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r8); UPD(0x0C08CD52u, 2);  /* 0C08CD50 mov.b @Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C08CD54u, 1);  /* 0C08CD52 mov.w @Rm,Rn */
	W32(r14, r10); UPD(0x0C08CD56u, 1);  /* 0C08CD54 mov.l Rm,@Rn */
	r9 = (u32)(s32)(s8)R8(r11); UPD(0x0C08CD58u, 1);  /* 0C08CD56 mov.b @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C08CD58 tst Rm,Rn */
	{ u32 c_ = T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08CD90u, 4); goto L_0C08CD90; } goto L_0C08CD5E; }  /* 0C08CD5A bt/s */
L_0C08CD5E: BLKS(0x0C08CD5Eu);
	IF(0x0C08CD5Eu); MACL = r3 * r12;  /* 0C08CD5E mul.l Rm,Rn */
	r2 = 0xA6u; UPD(0x0C08CD62u, 4);  /* 0C08CD60 mov.w @(disp,pc),Rn */
	r12 = 0xC26CD40u; UPD(0x0C08CD64u, 1);  /* 0C08CD62 mov.l @(disp,pc),Rn */
	IF(0x0C08CD64u); r1 = MACL;  /* 0C08CD64 sts macl,Rn */
	r1 += r12;  /* 0C08CD66 add Rm,Rn */
	UPD(0x0C08CD68u, 2);
L_0C08CD68: BLKS(0x0C08CD68u);
	r5 = 0xB4u; UPD(0x0C08CD6Au, 1);  /* 0C08CD68 mov.w @(disp,pc),Rn */
	r1 += r2;  /* 0C08CD6A add Rm,Rn */
	IF(0x0C08CD6Cu); MACL = r13 * r5;  /* 0C08CD6C mul.l Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r1); UPD(0x0C08CD70u, 4);  /* 0C08CD6E mov.b @Rm,Rn */
	r6 = 0x0u;  /* 0C08CD70 mov #imm,Rn */
	r9 = R32(r14); UPD(0x0C08CD74u, 2);  /* 0C08CD72 mov.l @Rm,Rn */
	IF(0x0C08CD74u); r0 = MACL;  /* 0C08CD74 sts macl,Rn */
	r13 = 0xC26CD40u; UPD(0x0C08CD78u, 2);  /* 0C08CD76 mov.l @(disp,pc),Rn */
	r9 |= r8;  /* 0C08CD78 or Rm,Rn */
	W8(r1, r9); UPD(0x0C08CD7Cu, 2);  /* 0C08CD7A mov.b Rm,@Rn */
	IF(0x0C08CD7Cu); W32(r0 + r13, r6); UPD(0x0C08CD7Eu, 1);  /* 0C08CD7C mov.l Rm,@(r0,Rn) */
L_0C08CD7E: BLKS(0x0C08CD7Eu);
	{ r14 += 0x28u; /* slot add #imm,Rn */ UPD(0x0C08C20Au, 3); goto L_0C08C20A; }  /* 0C08CD7E bra */
L_0C08CD90: BLKS(0x0C08CD90u);
	IF(0x0C08CD90u); MACL = r3 * r12;  /* 0C08CD90 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C08CD94u, 3);  /* 0C08CD92 mov.l @(disp,pc),Rn */
	r2 = 0xA5u; UPD(0x0C08CD96u, 1);  /* 0C08CD94 mov.w @(disp,pc),Rn */
	IF(0x0C08CD96u); r1 = MACL;  /* 0C08CD96 sts macl,Rn */
	{ r1 += r11; /* slot add Rm,Rn */ UPD(0x0C08CD68u, 4); goto L_0C08CD68; }  /* 0C08CD98 bra */
L_0C08CDD0: BLKS(0x0C08CDD0u);
	r3 = 0xC26CD40u; UPD(0x0C08CDD2u, 1);  /* 0C08CDD0 mov.l @(disp,pc),Rn */
	IF(0x0C08CDD2u); r10 = MACL;  /* 0C08CDD2 sts macl,Rn */
	r10 += r3;  /* 0C08CDD4 add Rm,Rn */
	r10 += 0x3Cu;  /* 0C08CDD6 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C08CDDAu, 4);  /* 0C08CDD8 mov.w @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C08CDDA tst Rm,Rn */
	if (!T) { UPD(0x0C08CDE8u, 4); goto L_0C08CDE8; }  /* 0C08CDDC bf */
L_0C08CDDE: BLKS(0x0C08CDDEu);
	W16(r2, r1); UPD(0x0C08CDE0u, 1);  /* 0C08CDDE mov.w Rm,@Rn */
	r0 = R32(r9); UPD(0x0C08CDE2u, 1);  /* 0C08CDE0 mov.l @Rm,Rn */
	r1 = 0xECFFFFFFu; UPD(0x0C08CDE4u, 1);  /* 0C08CDE2 mov.l @(disp,pc),Rn */
	r0 &= r1;  /* 0C08CDE4 and Rm,Rn */
	W32(r9, r0); UPD(0x0C08CDE8u, 2);  /* 0C08CDE6 mov.l Rm,@Rn */
L_0C08CDE8: BLKS(0x0C08CDE8u);
	r0 = R32(r9 + 0xCu); UPD(0x0C08CDEAu, 1);  /* 0C08CDE8 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C08CDEA tst Rm,Rn */
	{ u32 c_ = T; r4 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C08CE50u, 4); goto L_0C08CE50; } UPD(0x0C08CDF0u, 1); goto L_0C08CDF0; }  /* 0C08CDEC bt/s */
L_0C08CDF0: BLKS(0x0C08CDF0u);
	T = r0 == 0x1Fu;  /* 0C08CDF0 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C08CDF8u, 4); goto L_0C08CDF8; }  /* 0C08CDF2 bt */
L_0C08CDF4: BLKS(0x0C08CDF4u);
	{ IF(0x0C08CDF6u); ; /* slot nop */ UPD(0x0C08C610u, 3); goto L_0C08C610; }  /* 0C08CDF4 bra */
L_0C08CDF8: BLKS(0x0C08CDF8u);
	r10 = 0x9Fu; UPD(0x0C08CDFAu, 1);  /* 0C08CDF8 mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C08CDFA add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C08CDFEu, 2);  /* 0C08CDFC mov.b @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C08CDFE extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08CE00 tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C08CE30u, 5); goto L_0C08CE30; } goto L_0C08CE06; }  /* 0C08CE02 bt/s */
L_0C08CE06: BLKS(0x0C08CE06u);
	if (!T) { UPD(0x0C08CD7Eu, 4); goto L_0C08CD7E; }  /* 0C08CE06 bf */
L_0C08CE08: BLKS(0x0C08CE08u);
	r0 = r9;  /* 0C08CE08 mov Rm,Rn */
	r2 = 0x9Au; UPD(0x0C08CE0Cu, 2);  /* 0C08CE0A mov.w @(disp,pc),Rn */
	IF(0x0C08CE0Cu); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08CE0Eu, 1);  /* 0C08CE0C mov.b @(r0,Rm),Rn */
	r8 = r3 & 0xFF;  /* 0C08CE0E extu.b Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C08CE10 tst Rm,Rn */
	if (!T) { UPD(0x0C08CD7Eu, 5); goto L_0C08CD7E; }  /* 0C08CE12 bf */
L_0C08CE14: BLKS(0x0C08CE14u);
	r6 = 0xFFFFFFFFu;  /* 0C08CE14 mov #imm,Rn */
	r12 = 0xC0A0380u; UPD(0x0C08CE18u, 2);  /* 0C08CE16 mov.l @(disp,pc),Rn */
	r0 = 0x88u; UPD(0x0C08CE1Au, 1);  /* 0C08CE18 mov.w @(disp,pc),Rn */
	r11 = 0x1Eu;  /* 0C08CE1A mov #imm,Rn */
	IF(0x0C08CE1Cu); W16(r0 + r9, r6); UPD(0x0C08CE1Eu, 2);  /* 0C08CE1C mov.w Rm,@(r0,Rn) */
	r4 = r13;  /* 0C08CE1E mov Rm,Rn */
	IF(0x0C08CE20u); { u32 t_ = r12; PR = 0x0C08CE24u; W32(r9 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08CE24u); }  /* 0C08CE20 jsr @Rn */
L_0C08CE24: BLKS(0x0C08CE24u);
	W8(r10, r8); UPD(0x0C08CE26u, 1);  /* 0C08CE24 mov.b Rm,@Rn */
L_0C08CE26: BLKS(0x0C08CE26u);
	{ r14 += 0x28u; /* slot add #imm,Rn */ UPD(0x0C08C20Au, 3); goto L_0C08C20A; }  /* 0C08CE26 bra */
L_0C08CE30: BLKS(0x0C08CE30u);
	r4 = 0x9Au; UPD(0x0C08CE32u, 1);  /* 0C08CE30 mov.w @(disp,pc),Rn */
	r7 = 0x1u;  /* 0C08CE32 mov #imm,Rn */
	r0 = r9;  /* 0C08CE34 mov Rm,Rn */
	IF(0x0C08CE36u); W8(r0 + r4, r7); UPD(0x0C08CE38u, 3);  /* 0C08CE36 mov.b Rm,@(r0,Rn) */
	r13 = R32(r14); UPD(0x0C08CE3Au, 1);  /* 0C08CE38 mov.l @Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C08CE3A tst Rm,Rn */
	if (!T) { UPD(0x0C08CE26u, 4); goto L_0C08CE26; }  /* 0C08CE3C bf */
L_0C08CE3E: BLKS(0x0C08CE3Eu);
	r0 = r3;  /* 0C08CE3E mov Rm,Rn */
	r0 += 0x1u;  /* 0C08CE40 add #imm,Rn */
	W8(r10, r0); UPD(0x0C08CE44u, 3);  /* 0C08CE42 mov.b Rm,@Rn */
L_0C08CE44: BLKS(0x0C08CE44u);
	{ r14 += 0x28u; /* slot add #imm,Rn */ UPD(0x0C08C20Au, 3); goto L_0C08C20A; }  /* 0C08CE44 bra */
L_0C08CE50: BLKS(0x0C08CE50u);
	T = (r4 & r4) == 0;  /* 0C08CE50 tst Rm,Rn */
	if (T) { UPD(0x0C08CE44u, 4); goto L_0C08CE44; }  /* 0C08CE52 bt */
L_0C08CE54: BLKS(0x0C08CE54u);
	r2 = 0x1u;  /* 0C08CE54 mov #imm,Rn */
	r7 = 0xC0A0380u; UPD(0x0C08CE58u, 2);  /* 0C08CE56 mov.l @(disp,pc),Rn */
	r0 = 0x88u; UPD(0x0C08CE5Au, 1);  /* 0C08CE58 mov.w @(disp,pc),Rn */
	r12 = 0x1u;  /* 0C08CE5A mov #imm,Rn */
	r4 = r13;  /* 0C08CE5C mov Rm,Rn */
	IF(0x0C08CE5Eu); W16(r0 + r9, r12); UPD(0x0C08CE60u, 3);  /* 0C08CE5E mov.w Rm,@(r0,Rn) */
	IF(0x0C08CE60u); { u32 t_ = r7; PR = 0x0C08CE64u; W32(r9 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08CE64u); }  /* 0C08CE60 jsr @Rn */
L_0C08CE64: BLKS(0x0C08CE64u);
	{ r4 = 0x72u; /* slot mov #imm,Rn */ UPD(0x0C08C3D2u, 3); goto L_0C08C3D2; }  /* 0C08CE64 bra */
L_0C08CE70: BLKS(0x0C08CE70u);
	r1 += r5;  /* 0C08CE70 add Rm,Rn */
	r1 += r2;  /* 0C08CE72 add Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C08CC90u, 5); goto L_0C08CC90; }  /* 0C08CE74 bra */
L_0C08CE80: BLKS(0x0C08CE80u);
	r10 = 0xC0A0540u; UPD(0x0C08CE82u, 1);  /* 0C08CE80 mov.l @(disp,pc),Rn */
	IF(0x0C08CE82u); { u32 t_ = r10; PR = 0x0C08CE86u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C08CE86u); }  /* 0C08CE82 jsr @Rn */
L_0C08CE86: BLKS(0x0C08CE86u);
	IF(0x0C08CE86u); T = (s32)r0 >= 0;  /* 0C08CE86 cmp/pz Rn */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08CE90u, 4); goto L_0C08CE90; } goto L_0C08CE8C; }  /* 0C08CE88 bt/s */
L_0C08CE8C: BLKS(0x0C08CE8Cu);
	{ IF(0x0C08CE8Eu); ; /* slot nop */ UPD(0x0C08C2D0u, 4); goto L_0C08C2D0; }  /* 0C08CE8C bra */
L_0C08CE90: BLKS(0x0C08CE90u);
	r8 = 0xB4u; UPD(0x0C08CE92u, 1);  /* 0C08CE90 mov.w @(disp,pc),Rn */
	IF(0x0C08CE92u); MACL = r13 * r8;  /* 0C08CE92 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C08CE96u, 3);  /* 0C08CE94 mov.l @(disp,pc),Rn */
	IF(0x0C08CE96u); r0 = MACL;  /* 0C08CE96 sts macl,Rn */
	IF(0x0C08CE98u); MACL = r12 * r8;  /* 0C08CE98 mul.l Rm,Rn */
	r0 += r4;  /* 0C08CE9A add Rm,Rn */
	r7 = R32(r0 + 0x2Cu); UPD(0x0C08CE9Eu, 5);  /* 0C08CE9C mov.l @(disp,Rm),Rn */
	IF(0x0C08CE9Eu); r6 = MACL;  /* 0C08CE9E sts macl,Rn */
	r6 += r4;  /* 0C08CEA0 add Rm,Rn */
	r9 = R32(r6 + 0x24u); UPD(0x0C08CEA4u, 3);  /* 0C08CEA2 mov.l @(disp,Rm),Rn */
	r11 = R32(r6 + 0x28u); UPD(0x0C08CEA6u, 1);  /* 0C08CEA4 mov.l @(disp,Rm),Rn */
	r9 += r7;  /* 0C08CEA6 add Rm,Rn */
	r5 = R32(r0 + 0x30u); UPD(0x0C08CEAAu, 2);  /* 0C08CEA8 mov.l @(disp,Rm),Rn */
	r1 = R32(r6); UPD(0x0C08CEACu, 1);  /* 0C08CEAA mov.l @Rm,Rn */
	r11 += r5;  /* 0C08CEAC add Rm,Rn */
	r3 = 0x13000000u; UPD(0x0C08CEB0u, 2);  /* 0C08CEAE mov.l @(disp,pc),Rn */
	W32(r0 + 0x24u, r9); UPD(0x0C08CEB2u, 1);  /* 0C08CEB0 mov.l Rm,@(disp,Rn) */
	T = (r1 & r3) == 0;  /* 0C08CEB2 tst Rm,Rn */
	{ u32 c_ = !T; W32(r0 + 0x28u, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08CEC0u, 4); goto L_0C08CEC0; } UPD(0x0C08CEB8u, 1); goto L_0C08CEB8; }  /* 0C08CEB4 bf/s */
L_0C08CEB8: BLKS(0x0C08CEB8u);
	r12 = R32(r0); UPD(0x0C08CEBAu, 1);  /* 0C08CEB8 mov.l @Rm,Rn */
	r10 = 0xECFFFFFFu; UPD(0x0C08CEBCu, 1);  /* 0C08CEBA mov.l @(disp,pc),Rn */
	r12 &= r10;  /* 0C08CEBC and Rm,Rn */
	W32(r0, r12); UPD(0x0C08CEC0u, 2);  /* 0C08CEBE mov.l Rm,@Rn */
L_0C08CEC0: BLKS(0x0C08CEC0u);
	r0 += 0x7Eu;  /* 0C08CEC0 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C08CEC4u, 2);  /* 0C08CEC2 mov.w @Rm,Rn */
	r2 = 0x9Fu; UPD(0x0C08CEC6u, 1);  /* 0C08CEC4 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C08CEC6 add #imm,Rn */
	IF(0x0C08CEC8u); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08CECAu, 2);  /* 0C08CEC8 mov.b @(r0,Rm),Rn */
	r0 = 0x5u;  /* 0C08CECA mov #imm,Rn */
	r2 = r6 & 0xFF;  /* 0C08CECC extu.b Rm,Rn */
	T = r2 > r0;  /* 0C08CECE cmp/hi Rm,Rn */
	if (T) { UPD(0x0C08CE44u, 6); goto L_0C08CE44; }  /* 0C08CED0 bt */
L_0C08CED2: BLKS(0x0C08CED2u);
	r0 = 0xC08CEF8u;  /* 0C08CED2 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08CED4 add Rm,Rn */
	IF(0x0C08CED6u); r11 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08CED8u, 3);  /* 0C08CED6 mov.w @(r0,Rm),Rn */
	IF(0x0C08CED8u); { u32 tv_ = (r11 + 0x0C08CEDCu); u32 t_ = PHYS(tv_); IF(0x0C08CEDAu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08CF10u: goto L_0C08CF10; case 0x0C08CF90u: goto L_0C08CF90; case 0x0C08CFD0u: goto L_0C08CFD0; case 0x0C08CFF0u: goto L_0C08CFF0; case 0x0C08D010u: goto L_0C08D010; case 0x0C08D030u: goto L_0C08D030; default: JUMPD(tv_); } }  /* 0C08CED8 braf Rn */
L_0C08CF10: BLKS(0x0C08CF10u);
	r2 = 0xB4u; UPD(0x0C08CF12u, 1);  /* 0C08CF10 mov.w @(disp,pc),Rn */
	IF(0x0C08CF12u); MACL = r13 * r2;  /* 0C08CF12 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C08CF16u, 3);  /* 0C08CF14 mov.l @(disp,pc),Rn */
	IF(0x0C08CF16u); r9 = MACL;  /* 0C08CF16 sts macl,Rn */
	r7 = 0xA0u; UPD(0x0C08CF1Au, 2);  /* 0C08CF18 mov.w @(disp,pc),Rn */
	r9 += r6;  /* 0C08CF1A add Rm,Rn */
	r9 += r7;  /* 0C08CF1C add Rm,Rn */
	r9 += 0x2u;  /* 0C08CF1E add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C08CF22u, 4);  /* 0C08CF20 mov.b @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C08CF22 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C08CF26u); MACL = r3 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C08CF80u, 5); goto L_0C08CF80; } goto L_0C08CF28; }  /* 0C08CF24 bt/s */
L_0C08CF28: BLKS(0x0C08CF28u);
	IF(0x0C08CF28u); MACL = r3 * r2;  /* 0C08CF28 mul.l Rm,Rn */
	IF(0x0C08CF2Au); r1 = MACL;  /* 0C08CF2A sts macl,Rn */
	r1 += r6;  /* 0C08CF2C add Rm,Rn */
	r1 += r7;  /* 0C08CF2E add Rm,Rn */
	r1 += 0x2u;  /* 0C08CF30 add #imm,Rn */
	UPD(0x0C08CF32u, 8);
L_0C08CF32: BLKS(0x0C08CF32u);
	r7 = (u32)(s32)(s8)R8(r1); UPD(0x0C08CF34u, 1);  /* 0C08CF32 mov.b @Rm,Rn */
	r6 = 0xB4u; UPD(0x0C08CF36u, 1);  /* 0C08CF34 mov.w @(disp,pc),Rn */
	W32(r14, r7); UPD(0x0C08CF38u, 1);  /* 0C08CF36 mov.l Rm,@Rn */
	IF(0x0C08CF38u); MACL = r13 * r6;  /* 0C08CF38 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08CF3Cu, 3);  /* 0C08CF3A mov.l @(disp,pc),Rn */
	IF(0x0C08CF3Cu); r0 = MACL;  /* 0C08CF3C sts macl,Rn */
	r0 += r7;  /* 0C08CF3E add Rm,Rn */
	r2 = 0xA0u; UPD(0x0C08CF42u, 3);  /* 0C08CF40 mov.w @(disp,pc),Rn */
	r8 = r0;  /* 0C08CF42 mov Rm,Rn */
	r8 += r2;  /* 0C08CF44 add Rm,Rn */
	r8 += 0x1u;  /* 0C08CF46 add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r8); UPD(0x0C08CF4Au, 4);  /* 0C08CF48 mov.b @Rm,Rn */
	r4 = R32(r14); UPD(0x0C08CF4Cu, 1);  /* 0C08CF4A mov.l @Rm,Rn */
	T = (r4 & r13) == 0;  /* 0C08CF4C tst Rm,Rn */
	if (T) { UPD(0x0C08CF60u, 4); goto L_0C08CF60; }  /* 0C08CF4E bt */
L_0C08CF50: BLKS(0x0C08CF50u);
	r2 += 0xFFFFFFFFu;  /* 0C08CF50 add #imm,Rn */
	IF(0x0C08CF52u); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08CF54u, 2);  /* 0C08CF52 mov.b @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C08CF54 add #imm,Rn */
	IF(0x0C08CF56u); W8(r0 + r2, r3); UPD(0x0C08CF58u, 2);  /* 0C08CF56 mov.b Rm,@(r0,Rn) */
L_0C08CF58: BLKS(0x0C08CF58u);
	r2 += 0xFFFFFFFBu;  /* 0C08CF58 add #imm,Rn */
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C08C960u, 4); goto L_0C08C960; }  /* 0C08CF5A bra */
L_0C08CF60: BLKS(0x0C08CF60u);
	IF(0x0C08CF60u); MACL = r3 * r6;  /* 0C08CF60 mul.l Rm,Rn */
	IF(0x0C08CF62u); r10 = MACL;  /* 0C08CF62 sts macl,Rn */
	r10 += r7;  /* 0C08CF64 add Rm,Rn */
	r10 += r2;  /* 0C08CF66 add Rm,Rn */
	r10 += 0x2u;  /* 0C08CF68 add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r10); UPD(0x0C08CF6Cu, 7);  /* 0C08CF6A mov.b @Rm,Rn */
	IF(0x0C08CF6Cu); T = (s32)r12 >= 0;  /* 0C08CF6C cmp/pz Rn */
	if (T) { UPD(0x0C08CFE8u, 4); goto L_0C08CFE8; }  /* 0C08CF6E bt */
L_0C08CF70: BLKS(0x0C08CF70u);
	r6 = 0x4u;  /* 0C08CF70 mov #imm,Rn */
	r2 = 0x9Fu; UPD(0x0C08CF74u, 2);  /* 0C08CF72 mov.w @(disp,pc),Rn */
	{ IF(0x0C08CF76u); W8(r0 + r2, r6); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C08CF58u, 3); goto L_0C08CF58; }  /* 0C08CF74 bra */
L_0C08CF80: BLKS(0x0C08CF80u);
	IF(0x0C08CF80u); r1 = MACL;  /* 0C08CF80 sts macl,Rn */
	r1 += r6;  /* 0C08CF82 add Rm,Rn */
	r1 += r7;  /* 0C08CF84 add Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C08CF32u, 6); goto L_0C08CF32; }  /* 0C08CF86 bra */
L_0C08CF90: BLKS(0x0C08CF90u);
	r5 = 0xB4u; UPD(0x0C08CF92u, 1);  /* 0C08CF90 mov.w @(disp,pc),Rn */
	IF(0x0C08CF92u); MACL = r13 * r5;  /* 0C08CF92 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C08CF96u, 3);  /* 0C08CF94 mov.l @(disp,pc),Rn */
	IF(0x0C08CF96u); r8 = MACL;  /* 0C08CF96 sts macl,Rn */
	r8 += r0;  /* 0C08CF98 add Rm,Rn */
	r11 = 0x9Au; UPD(0x0C08CF9Cu, 3);  /* 0C08CF9A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08CF9C mov Rm,Rn */
	IF(0x0C08CF9Eu); r2 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C08CFA0u, 2);  /* 0C08CF9E mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C08CFA0 tst Rm,Rn */
	if (!T) { UPD(0x0C08CFE8u, 4); goto L_0C08CFE8; }  /* 0C08CFA2 bf */
L_0C08CFA4: BLKS(0x0C08CFA4u);
	r12 = 0xC050D70u; UPD(0x0C08CFA6u, 1);  /* 0C08CFA4 mov.l @(disp,pc),Rn */
	IF(0x0C08CFA6u); { u32 t_ = r12; PR = 0x0C08CFAAu; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C08CFAAu); }  /* 0C08CFA6 jsr @Rn */
L_0C08CFAA: BLKS(0x0C08CFAAu);
	r4 = R32(r8 + 0x8u); UPD(0x0C08CFACu, 1);  /* 0C08CFAA mov.l @(disp,Rm),Rn */
	r0 += r0;  /* 0C08CFAC add Rm,Rn */
	r4 += r0;  /* 0C08CFAE add Rm,Rn */
	r4 += 0x2u;  /* 0C08CFB0 add #imm,Rn */
	r7 = 0xC0A03B0u; UPD(0x0C08CFB4u, 4);  /* 0C08CFB2 mov.l @(disp,pc),Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C08CFB6u, 1);  /* 0C08CFB4 mov.l Rm,@(disp,Rn) */
	IF(0x0C08CFB6u); { u32 t_ = r7; PR = 0x0C08CFBAu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C08CFBAu); }  /* 0C08CFB6 jsr @Rn */
L_0C08CFBA: BLKS(0x0C08CFBAu);
	r0 = 0x88u; UPD(0x0C08CFBCu, 1);  /* 0C08CFBA mov.w @(disp,pc),Rn */
	r13 = 0x1u;  /* 0C08CFBC mov #imm,Rn */
	IF(0x0C08CFBEu); W16(r0 + r8, r13); UPD(0x0C08CFC0u, 2);  /* 0C08CFBE mov.w Rm,@(r0,Rn) */
	r4 = 0x73u;  /* 0C08CFC0 mov #imm,Rn */
	r0 += 0x17u;  /* 0C08CFC2 add #imm,Rn */
	IF(0x0C08CFC4u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08CFC6u, 3);  /* 0C08CFC4 mov.b @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C08CFC6 add #imm,Rn */
	{ IF(0x0C08CFCAu); W8(r0 + r8, r9); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C08C3D2u, 4); goto L_0C08C3D2; }  /* 0C08CFC8 bra */
L_0C08CFD0: BLKS(0x0C08CFD0u);
	r10 = 0xB4u; UPD(0x0C08CFD2u, 1);  /* 0C08CFD0 mov.w @(disp,pc),Rn */
	r8 = 0x1u;  /* 0C08CFD2 mov #imm,Rn */
	IF(0x0C08CFD4u); MACL = r13 * r10;  /* 0C08CFD4 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C08CFD8u, 4);  /* 0C08CFD6 mov.l @(disp,pc),Rn */
	r2 = 0x9Au; UPD(0x0C08CFDAu, 1);  /* 0C08CFD8 mov.w @(disp,pc),Rn */
	IF(0x0C08CFDAu); r0 = MACL;  /* 0C08CFDA sts macl,Rn */
	r0 += r3;  /* 0C08CFDC add Rm,Rn */
	IF(0x0C08CFDEu); W8(r0 + r2, r8); UPD(0x0C08CFE0u, 3);  /* 0C08CFDE mov.b Rm,@(r0,Rn) */
	r2 += 0x5u;  /* 0C08CFE0 add #imm,Rn */
	IF(0x0C08CFE2u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08CFE4u, 2);  /* 0C08CFE2 mov.b @(r0,Rm),Rn */
L_0C08CFE4: BLKS(0x0C08CFE4u);
	r4 += 0x1u;  /* 0C08CFE4 add #imm,Rn */
	IF(0x0C08CFE6u); W8(r0 + r2, r4); UPD(0x0C08CFE8u, 2);  /* 0C08CFE6 mov.b Rm,@(r0,Rn) */
L_0C08CFE8: BLKS(0x0C08CFE8u);
	{ r14 += 0x28u; /* slot add #imm,Rn */ UPD(0x0C08C20Au, 3); goto L_0C08C20A; }  /* 0C08CFE8 bra */
L_0C08CFF0: BLKS(0x0C08CFF0u);
	r0 = 0xB4u; UPD(0x0C08CFF2u, 1);  /* 0C08CFF0 mov.w @(disp,pc),Rn */
	IF(0x0C08CFF2u); MACL = r13 * r0;  /* 0C08CFF2 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C08CFF6u, 3);  /* 0C08CFF4 mov.l @(disp,pc),Rn */
	r2 = 0x9Au; UPD(0x0C08CFF8u, 1);  /* 0C08CFF6 mov.w @(disp,pc),Rn */
	IF(0x0C08CFF8u); r0 = MACL;  /* 0C08CFF8 sts macl,Rn */
	r0 += r11;  /* 0C08CFFA add Rm,Rn */
	IF(0x0C08CFFCu); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08CFFEu, 3);  /* 0C08CFFC mov.b @(r0,Rm),Rn */
	r1 = 0x9Fu; UPD(0x0C08D000u, 1);  /* 0C08CFFE mov.w @(disp,pc),Rn */
	r2 = r6 & 0xFF;  /* 0C08D000 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C08D002 tst Rm,Rn */
	if (!T) { UPD(0x0C08D00Cu, 5); goto L_0C08D00C; }  /* 0C08D004 bf */
L_0C08D006: BLKS(0x0C08D006u);
	IF(0x0C08D006u); W8(r0 + r1, r2); UPD(0x0C08D008u, 1);  /* 0C08D006 mov.b Rm,@(r0,Rn) */
	{ IF(0x0C08D00Au); ; /* slot nop */ UPD(0x0C08C51Eu, 3); goto L_0C08C51E; }  /* 0C08D008 bra */
L_0C08D00C: BLKS(0x0C08D00Cu);
	{ r14 += 0x28u; /* slot add #imm,Rn */ UPD(0x0C08C20Au, 3); goto L_0C08C20A; }  /* 0C08D00C bra */
L_0C08D010: BLKS(0x0C08D010u);
	r7 = 0xB4u; UPD(0x0C08D012u, 1);  /* 0C08D010 mov.w @(disp,pc),Rn */
	IF(0x0C08D012u); MACL = r13 * r7;  /* 0C08D012 mul.l Rm,Rn */
	r9 = 0x9Au; UPD(0x0C08D016u, 3);  /* 0C08D014 mov.w @(disp,pc),Rn */
	r13 = 0xC26CD40u; UPD(0x0C08D018u, 1);  /* 0C08D016 mov.l @(disp,pc),Rn */
	IF(0x0C08D018u); r0 = MACL;  /* 0C08D018 sts macl,Rn */
	r0 += r13;  /* 0C08D01A add Rm,Rn */
	IF(0x0C08D01Cu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08D01Eu, 3);  /* 0C08D01C mov.b @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C08D01E tst Rm,Rn */
	if (!T) { UPD(0x0C08D00Cu, 4); goto L_0C08D00C; }  /* 0C08D020 bf */
L_0C08D022: BLKS(0x0C08D022u);
	r2 = 0x9Fu; UPD(0x0C08D024u, 1);  /* 0C08D022 mov.w @(disp,pc),Rn */
	{ IF(0x0C08D026u); r4 = (u32)(s32)(s8)R8(r0 + r2); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C08CFE4u, 3); goto L_0C08CFE4; }  /* 0C08D024 bra */
L_0C08D030: BLKS(0x0C08D030u);
	r2 = 0xB4u; UPD(0x0C08D032u, 1);  /* 0C08D030 mov.w @(disp,pc),Rn */
	IF(0x0C08D032u); MACL = r3 * r2;  /* 0C08D032 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08D036u, 3);  /* 0C08D034 mov.l @(disp,pc),Rn */
	IF(0x0C08D036u); r0 = MACL;  /* 0C08D036 sts macl,Rn */
	r8 = 0xA2u; UPD(0x0C08D03Au, 2);  /* 0C08D038 mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C08D03A add Rm,Rn */
	IF(0x0C08D03Cu); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08D03Eu, 2);  /* 0C08D03C mov.b @(r0,Rm),Rn */
	IF(0x0C08D03Eu); T = (s32)r12 >= 0;  /* 0C08D03E cmp/pz Rn */
	if (!T) { UPD(0x0C08D00Cu, 4); goto L_0C08D00C; }  /* 0C08D040 bf */
L_0C08D042: BLKS(0x0C08D042u);
	IF(0x0C08D042u); MACL = r13 * r2;  /* 0C08D042 mul.l Rm,Rn */
	r1 = 0x2u;  /* 0C08D044 mov #imm,Rn */
	IF(0x0C08D046u); r0 = MACL;  /* 0C08D046 sts macl,Rn */
	r0 += r7;  /* 0C08D048 add Rm,Rn */
	{ r2 += 0xFFFFFFEBu; /* slot add #imm,Rn */ UPD(0x0C08C960u, 8); goto L_0C08C960; }  /* 0C08D04A bra */
L_0C08D070: BLKS(0x0C08D070u);
	r10 = 0xC0A0540u; UPD(0x0C08D072u, 1);  /* 0C08D070 mov.l @(disp,pc),Rn */
	IF(0x0C08D072u); { u32 t_ = r10; PR = 0x0C08D076u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C08D076u); }  /* 0C08D072 jsr @Rn */
L_0C08D076: BLKS(0x0C08D076u);
	IF(0x0C08D076u); T = (s32)r0 >= 0;  /* 0C08D076 cmp/pz Rn */
	if (T) { UPD(0x0C08D07Eu, 4); goto L_0C08D07E; }  /* 0C08D078 bt */
L_0C08D07A: BLKS(0x0C08D07Au);
	{ IF(0x0C08D07Cu); ; /* slot nop */ UPD(0x0C08C2D0u, 3); goto L_0C08C2D0; }  /* 0C08D07A bra */
L_0C08D07E: BLKS(0x0C08D07Eu);
	r6 = 0xB4u; UPD(0x0C08D080u, 1);  /* 0C08D07E mov.w @(disp,pc),Rn */
	IF(0x0C08D080u); MACL = r13 * r6;  /* 0C08D080 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C08D084u, 3);  /* 0C08D082 mov.l @(disp,pc),Rn */
	IF(0x0C08D084u); r7 = MACL;  /* 0C08D084 sts macl,Rn */
	IF(0x0C08D086u); MACL = r0 * r6;  /* 0C08D086 mul.l Rm,Rn */
	r7 += r5;  /* 0C08D088 add Rm,Rn */
	r12 = R32(r7 + 0x2Cu); UPD(0x0C08D08Cu, 5);  /* 0C08D08A mov.l @(disp,Rm),Rn */
	IF(0x0C08D08Cu); r11 = MACL;  /* 0C08D08C sts macl,Rn */
	r11 += r5;  /* 0C08D08E add Rm,Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C08D092u, 3);  /* 0C08D090 mov.l @(disp,Rm),Rn */
	r0 = R32(r11 + 0x28u); UPD(0x0C08D094u, 1);  /* 0C08D092 mov.l @(disp,Rm),Rn */
	r4 += r12;  /* 0C08D094 add Rm,Rn */
	r9 = R32(r7 + 0x30u); UPD(0x0C08D098u, 2);  /* 0C08D096 mov.l @(disp,Rm),Rn */
	r1 = R32(r11); UPD(0x0C08D09Au, 1);  /* 0C08D098 mov.l @Rm,Rn */
	r0 += r9;  /* 0C08D09A add Rm,Rn */
	r3 = 0x13000000u; UPD(0x0C08D09Eu, 2);  /* 0C08D09C mov.l @(disp,pc),Rn */
	W32(r7 + 0x24u, r4); UPD(0x0C08D0A0u, 1);  /* 0C08D09E mov.l Rm,@(disp,Rn) */
	T = (r1 & r3) == 0;  /* 0C08D0A0 tst Rm,Rn */
	{ u32 c_ = !T; W32(r7 + 0x28u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08D0AAu, 4); goto L_0C08D0AA; } UPD(0x0C08D0A6u, 1); goto L_0C08D0A6; }  /* 0C08D0A2 bf/s */
L_0C08D0A6: BLKS(0x0C08D0A6u);
	{ r13 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(0x0C08D282u, 3); goto L_0C08D282; }  /* 0C08D0A6 bra */
L_0C08D0AA: BLKS(0x0C08D0AAu);
	r7 += 0x7Eu;  /* 0C08D0AA add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r7); UPD(0x0C08D0AEu, 2);  /* 0C08D0AC mov.w @Rm,Rn */
	IF(0x0C08D0AEu); MACL = r2 * r6;  /* 0C08D0AE mul.l Rm,Rn */
	r7 += 0xFFFFFF82u;  /* 0C08D0B0 add #imm,Rn */
	IF(0x0C08D0B2u); r3 = MACL;  /* 0C08D0B2 sts macl,Rn */
	r3 += r5;  /* 0C08D0B4 add Rm,Rn */
	r3 += 0x3Cu;  /* 0C08D0B6 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r3); UPD(0x0C08D0BAu, 7);  /* 0C08D0B8 mov.w @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C08D0BA tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08D00Cu, 4); goto L_0C08D00C; } goto L_0C08D0C0; }  /* 0C08D0BC bt/s */
L_0C08D0C0: BLKS(0x0C08D0C0u);
	r2 = 0x99u; UPD(0x0C08D0C2u, 2);  /* 0C08D0C0 mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C08D0C2 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C08D0C6u, 2);  /* 0C08D0C4 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C08D0C6 add #imm,Rn */
	r0 = r5 & 0xFF;  /* 0C08D0C8 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C08D0CA cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08D00Cu, 6); goto L_0C08D00C; } UPD(0x0C08D0D0u, 1); goto L_0C08D0D0; }  /* 0C08D0CC bf/s */
L_0C08D0D0: BLKS(0x0C08D0D0u);
	r8 = 0x0u;  /* 0C08D0D0 mov #imm,Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C08D0D4u, 2);  /* 0C08D0D2 mov.l @(disp,Rm),Rn */
	T = r0 == 0x1Eu;  /* 0C08D0D4 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08D100u, 4); goto L_0C08D100; } UPD(0x0C08D0DAu, 1); goto L_0C08D0DA; }  /* 0C08D0D6 bt/s */
L_0C08D0DA: BLKS(0x0C08D0DAu);
	T = r0 == 0x2Fu;  /* 0C08D0DA cmp/eq #imm,r0 */
	{ u32 c_ = T; r0 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08D0E4u, 4); goto L_0C08D0E4; } goto L_0C08D0E0; }  /* 0C08D0DC bt/s */
L_0C08D0E0: BLKS(0x0C08D0E0u);
	{ IF(0x0C08D0E2u); ; /* slot nop */ UPD(0x0C08CB86u, 4); goto L_0C08CB86; }  /* 0C08D0E0 bra */
L_0C08D0E4: BLKS(0x0C08D0E4u);
	r0 = R32(r7 + 0x8u); UPD(0x0C08D0E6u, 1);  /* 0C08D0E4 mov.l @(disp,Rm),Rn */
	r6 = 0x0u;  /* 0C08D0E6 mov #imm,Rn */
	r2 = 0xC1BB840u; UPD(0x0C08D0EAu, 2);  /* 0C08D0E8 mov.l @(disp,pc),Rn */
	IF(0x0C08D0EAu); r0 <<= 2;  /* 0C08D0EA shll2 Rn */
	IF(0x0C08D0ECu); r4 = R32(r0 + r2); UPD(0x0C08D0EEu, 2);  /* 0C08D0EC mov.l @(r0,Rm),Rn */
	W32(r7 + 0xCu, r6); UPD(0x0C08D0F0u, 1);  /* 0C08D0EE mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x8u, r4); UPD(0x0C08D0F2u, 1);  /* 0C08D0F0 mov.l Rm,@(disp,Rn) */
L_0C08D0F2: BLKS(0x0C08D0F2u);
	r1 = 0xC0A03B0u; UPD(0x0C08D0F4u, 1);  /* 0C08D0F2 mov.l @(disp,pc),Rn */
	{ r4 = r13; /* slot mov Rm,Rn */ UPD(0x0C08C274u, 3); goto L_0C08C274; }  /* 0C08D0F4 bra */
L_0C08D100: BLKS(0x0C08D100u);
	r2 = 0xA0u; UPD(0x0C08D102u, 1);  /* 0C08D100 mov.w @(disp,pc),Rn */
	r7 += r2;  /* 0C08D102 add Rm,Rn */
	r7 += 0x2u;  /* 0C08D104 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r7); UPD(0x0C08D108u, 3);  /* 0C08D106 mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C08D108 tst Rm,Rn */
	{ u32 c_ = !T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08D112u, 4); goto L_0C08D112; } goto L_0C08D10E; }  /* 0C08D10A bf/s */
L_0C08D10E: BLKS(0x0C08D10Eu);
	{ r1 += r3; /* slot add Rm,Rn */ UPD(0x0C08D220u, 4); goto L_0C08D220; }  /* 0C08D10E bra */
L_0C08D112: BLKS(0x0C08D112u);
	r1 = r2;  /* 0C08D112 mov Rm,Rn */
	r1 += r3;  /* 0C08D114 add Rm,Rn */
	r1 += 0x2u;  /* 0C08D116 add #imm,Rn */
	UPD(0x0C08D118u, 3);
L_0C08D118: BLKS(0x0C08D118u);
	r4 = 0xB4u; UPD(0x0C08D11Au, 1);  /* 0C08D118 mov.w @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C08D11A mov #imm,Rn */
	IF(0x0C08D11Cu); MACL = r13 * r4;  /* 0C08D11C mul.l Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r1); UPD(0x0C08D120u, 4);  /* 0C08D11E mov.b @Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C08D122u, 1);  /* 0C08D120 mov.l @(disp,pc),Rn */
	IF(0x0C08D122u); r8 = MACL;  /* 0C08D122 sts macl,Rn */
	W32(r14, r6); UPD(0x0C08D126u, 2);  /* 0C08D124 mov.l Rm,@Rn */
	r8 += r12;  /* 0C08D126 add Rm,Rn */
	r4 += 0xFFFFFFEDu;  /* 0C08D128 add #imm,Rn */
	r0 = r8;  /* 0C08D12A mov Rm,Rn */
	IF(0x0C08D12Cu); r9 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C08D12Eu, 4);  /* 0C08D12C mov.b @(r0,Rm),Rn */
	r6 = 0x0u;  /* 0C08D12E mov #imm,Rn */
	r0 = R32(r14); UPD(0x0C08D132u, 2);  /* 0C08D130 mov.l @Rm,Rn */
	r4 = r13;  /* 0C08D132 mov Rm,Rn */
	r11 = 0xC0A9E40u; UPD(0x0C08D136u, 2);  /* 0C08D134 mov.l @(disp,pc),Rn */
	r0 &= r9;  /* 0C08D136 and Rm,Rn */
	IF(0x0C08D138u); { u32 t_ = r11; PR = 0x0C08D13Cu; W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C08D13Cu); }  /* 0C08D138 jsr @Rn */
L_0C08D13C: BLKS(0x0C08D13Cu);
	T = (r0 & r0) == 0;  /* 0C08D13C tst Rm,Rn */
	r1 = R32(r14); UPD(0x0C08D140u, 2);  /* 0C08D13E mov.l @Rm,Rn */
	IF(0x0C08D140u); r10 = T;  /* 0C08D140 movt Rn */
	T = (r1 & r1) == 0;  /* 0C08D142 tst Rm,Rn */
	r3 = 0xFFFFFFFFu;  /* 0C08D144 mov #imm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C08D146 negc Rm,Rn */
	r10 &= r7;  /* 0C08D148 and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C08D14A tst Rm,Rn */
	if (T) { UPD(0x0C08D154u, 9); goto L_0C08D154; }  /* 0C08D14C bt */
L_0C08D14E: BLKS(0x0C08D14Eu);
	r14 += 0x28u;  /* 0C08D14E add #imm,Rn */
	{ IF(0x0C08D152u); ; /* slot nop */ UPD(0x0C08C20Au, 4); goto L_0C08C20A; }  /* 0C08D150 bra */
L_0C08D154: BLKS(0x0C08D154u);
	r7 = R32(r8 + 0x24u); UPD(0x0C08D156u, 1);  /* 0C08D154 mov.l @(disp,Rm),Rn */
	r4 = 0x1u;  /* 0C08D156 mov #imm,Rn */
	r5 = R32(r8 + 0x8u); UPD(0x0C08D15Au, 2);  /* 0C08D158 mov.l @(disp,Rm),Rn */
	r11 = R32(r8 + 0x28u); UPD(0x0C08D15Cu, 1);  /* 0C08D15A mov.l @(disp,Rm),Rn */
	IF(0x0C08D15Cu); r5 <<= 2;  /* 0C08D15C shll2 Rn */
	r0 = 0xC1BB858u; UPD(0x0C08D160u, 2);  /* 0C08D15E mov.l @(disp,pc),Rn */
	r3 = 0xFFF70000u; UPD(0x0C08D162u, 1);  /* 0C08D160 mov.l @(disp,pc),Rn */
	r8 = 0xC0606C0u; UPD(0x0C08D164u, 1);  /* 0C08D162 mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C08D164 add Rm,Rn */
	IF(0x0C08D166u); r2 = R32(r0 + r5); UPD(0x0C08D168u, 2);  /* 0C08D166 mov.l @(r0,Rm),Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C08D16Au, 1);  /* 0C08D168 mov.l Rm,@(disp,Rn) */
	r12 = 0x100u; UPD(0x0C08D16Cu, 1);  /* 0C08D16A mov.w @(disp,pc),Rn */
	IF(0x0C08D16Cu); { u32 t_ = r8; PR = 0x0C08D170u; r11 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C08D170u); }  /* 0C08D16C jsr @Rn */
L_0C08D170: BLKS(0x0C08D170u);
	T = (r0 & r0) == 0;  /* 0C08D170 tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08D1C0u, 4); goto L_0C08D1C0; } UPD(0x0C08D176u, 1); goto L_0C08D176; }  /* 0C08D172 bf/s */
L_0C08D176: BLKS(0x0C08D176u);
	r12 = (u32)(s32)(s8)r1;  /* 0C08D176 exts.b Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C08D178 tst Rm,Rn */
	if (T) { UPD(0x0C08D1B0u, 5); goto L_0C08D1B0; }  /* 0C08D17A bt */
L_0C08D17C: BLKS(0x0C08D17Cu);
	r11 = R32(r14); UPD(0x0C08D17Eu, 1);  /* 0C08D17C mov.l @Rm,Rn */
L_0C08D17E: BLKS(0x0C08D17Eu);
	T = (r11 & r11) == 0;  /* 0C08D17E tst Rm,Rn */
	if (T) { UPD(0x0C08D1A0u, 4); goto L_0C08D1A0; }  /* 0C08D180 bt */
L_0C08D182: BLKS(0x0C08D182u);
	r1 = 0x12u;  /* 0C08D182 mov #imm,Rn */
	r0 = 0xB4u; UPD(0x0C08D186u, 2);  /* 0C08D184 mov.w @(disp,pc),Rn */
	IF(0x0C08D186u); MACL = r13 * r0;  /* 0C08D186 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C08D18Au, 3);  /* 0C08D188 mov.l @(disp,pc),Rn */
	IF(0x0C08D18Au); r9 = MACL;  /* 0C08D18A sts macl,Rn */
	r2 += r9;  /* 0C08D18C add Rm,Rn */
	UPD(0x0C08D18Eu, 2);
L_0C08D18E: BLKS(0x0C08D18Eu);
	{ W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08D0F2u, 3); goto L_0C08D0F2; }  /* 0C08D18E bra */
L_0C08D1A0: BLKS(0x0C08D1A0u);
	r5 = 0xB4u; UPD(0x0C08D1A2u, 1);  /* 0C08D1A0 mov.w @(disp,pc),Rn */
	IF(0x0C08D1A2u); MACL = r13 * r5;  /* 0C08D1A2 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C08D1A6u, 3);  /* 0C08D1A4 mov.l @(disp,pc),Rn */
	IF(0x0C08D1A6u); r2 = MACL;  /* 0C08D1A6 sts macl,Rn */
	r2 += r11;  /* 0C08D1A8 add Rm,Rn */
	r1 = R32(r2 + 0xCu); UPD(0x0C08D1ACu, 3);  /* 0C08D1AA mov.l @(disp,Rm),Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C08C684u, 3); goto L_0C08C684; }  /* 0C08D1AC bra */
L_0C08D1B0: BLKS(0x0C08D1B0u);
	r10 = 0xC0AFC10u; UPD(0x0C08D1B2u, 1);  /* 0C08D1B0 mov.l @(disp,pc),Rn */
	IF(0x0C08D1B2u); { u32 t_ = r10; PR = 0x0C08D1B6u; r4 = 0x70u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C08D1B6u); }  /* 0C08D1B2 jsr @Rn */
L_0C08D1B6: BLKS(0x0C08D1B6u);
	{ r11 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C08D17Eu, 3); goto L_0C08D17E; }  /* 0C08D1B6 bra */
L_0C08D1C0: BLKS(0x0C08D1C0u);
	r3 = 0xC2755BCu; UPD(0x0C08D1C2u, 1);  /* 0C08D1C0 mov.l @(disp,pc),Rn */
	r4 = 0x10u;  /* 0C08D1C2 mov #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r3); UPD(0x0C08D1C6u, 2);  /* 0C08D1C4 mov.w @Rm,Rn */
	r2 = 0x2Bu;  /* 0C08D1C6 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C08D1CAu, 2);  /* 0C08D1C8 mov.w @(disp,pc),Rn */
	IF(0x0C08D1CAu); MACL = r9 * r8;  /* 0C08D1CA mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08D1CEu, 3);  /* 0C08D1CC mov.l @(disp,pc),Rn */
	IF(0x0C08D1CEu); r8 = MACL;  /* 0C08D1CE sts macl,Rn */
	r8 += r7;  /* 0C08D1D0 add Rm,Rn */
	r6 = 0xC0A02D0u; UPD(0x0C08D1D4u, 3);  /* 0C08D1D2 mov.l @(disp,pc),Rn */
	r5 = 0xD3000000u; UPD(0x0C08D1D6u, 1);  /* 0C08D1D4 mov.l @(disp,pc),Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C08D1D8u, 1);  /* 0C08D1D6 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x4u, r2); UPD(0x0C08D1DAu, 1);  /* 0C08D1D8 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C08D1DA mov Rm,Rn */
	W32(r8, r5); UPD(0x0C08D1DEu, 2);  /* 0C08D1DC mov.l Rm,@Rn */
	IF(0x0C08D1DEu); { u32 t_ = r6; PR = 0x0C08D1E2u; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C08D1E2u); }  /* 0C08D1DE jsr @Rn */
L_0C08D1E2: BLKS(0x0C08D1E2u);
	r0 = 0xC0A1530u; UPD(0x0C08D1E4u, 1);  /* 0C08D1E2 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C08D1E4 mov Rm,Rn */
	r9 = 0xC058060u; UPD(0x0C08D1E8u, 2);  /* 0C08D1E6 mov.l @(disp,pc),Rn */
	IF(0x0C08D1E8u); { u32 t_ = r0; PR = 0x0C08D1ECu; r10 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C08D1ECu); }  /* 0C08D1E8 jsr @Rn */
L_0C08D1EC: BLKS(0x0C08D1ECu);
	W32(r8 + 0x28u, r11); UPD(0x0C08D1EEu, 1);  /* 0C08D1EC mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C08D1EE mov Rm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C08D1F2u, 2);  /* 0C08D1F0 mov.l @(disp,Rm),Rn */
	r0 = 0x86u; UPD(0x0C08D1F4u, 1);  /* 0C08D1F2 mov.w @(disp,pc),Rn */
	r11 = 0xC058030u; UPD(0x0C08D1F6u, 1);  /* 0C08D1F4 mov.l @(disp,pc),Rn */
	r5 = 0x20000u; UPD(0x0C08D1F8u, 1);  /* 0C08D1F6 mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r1); UPD(0x0C08D1FAu, 1);  /* 0C08D1F8 mov.l Rm,@(disp,Rn) */
	IF(0x0C08D1FAu); { u32 t_ = r9; PR = 0x0C08D1FEu; IF(0x0C08D1FCu); W16(r0 + r8, r12); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C08D1FEu); }  /* 0C08D1FA jsr @Rn */
L_0C08D1FE: BLKS(0x0C08D1FEu);
	W32(r8 + 0x2Cu, r0); UPD(0x0C08D200u, 1);  /* 0C08D1FE mov.l Rm,@(disp,Rn) */
	r5 = 0x20000u; UPD(0x0C08D202u, 1);  /* 0C08D200 mov.l @(disp,pc),Rn */
	IF(0x0C08D202u); { u32 t_ = r11; PR = 0x0C08D206u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C08D206u); }  /* 0C08D202 jsr @Rn */
L_0C08D206: BLKS(0x0C08D206u);
	W32(r8 + 0x30u, r0); UPD(0x0C08D208u, 1);  /* 0C08D206 mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C08D208 mov #imm,Rn */
	r0 = 0xADu; UPD(0x0C08D20Cu, 2);  /* 0C08D20A mov.w @(disp,pc),Rn */
	IF(0x0C08D20Cu); W8(r0 + r8, r10); UPD(0x0C08D20Eu, 1);  /* 0C08D20C mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C08D20E add #imm,Rn */
	{ IF(0x0C08D212u); W8(r0 + r8, r10); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C08D176u, 4); goto L_0C08D176; }  /* 0C08D210 bra */
L_0C08D220: BLKS(0x0C08D220u);
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C08D118u, 3); goto L_0C08D118; }  /* 0C08D220 bra */
L_0C08D280: BLKS(0x0C08D280u);
	r13 = R32(r7); UPD(0x0C08D282u, 1);  /* 0C08D280 mov.l @Rm,Rn */
L_0C08D282: BLKS(0x0C08D282u);
	r5 = 0xECFFFFFFu; UPD(0x0C08D284u, 1);  /* 0C08D282 mov.l @(disp,pc),Rn */
	r13 &= r5;  /* 0C08D284 and Rm,Rn */
	W32(r7, r13); UPD(0x0C08D288u, 2);  /* 0C08D286 mov.l Rm,@Rn */
L_0C08D288: BLKS(0x0C08D288u);
	r12 = 0xFFFFEF7Cu; UPD(0x0C08D28Au, 1);  /* 0C08D288 mov.w @(disp,pc),Rn */
	IF(0x0C08D28Au); { u32 tv_ = (r12 + 0x0C08D28Eu); u32 t_ = PHYS(tv_); r14 += 0x28u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C20Au: goto L_0C08C20A; default: JUMPD(tv_); } }  /* 0C08D28A braf Rn */
L_0C08D290: BLKS(0x0C08D290u);
	r8 = 0xC0A0540u; UPD(0x0C08D292u, 1);  /* 0C08D290 mov.l @(disp,pc),Rn */
	IF(0x0C08D292u); { u32 t_ = r8; PR = 0x0C08D296u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C08D296u); }  /* 0C08D292 jsr @Rn */
L_0C08D296: BLKS(0x0C08D296u);
	IF(0x0C08D296u); T = (s32)r0 >= 0;  /* 0C08D296 cmp/pz Rn */
	if (T) { UPD(0x0C08D29Eu, 4); goto L_0C08D29E; }  /* 0C08D298 bt */
L_0C08D29A: BLKS(0x0C08D29Au);
	{ IF(0x0C08D29Cu); ; /* slot nop */ UPD(0x0C08C2D0u, 3); goto L_0C08C2D0; }  /* 0C08D29A bra */
L_0C08D29E: BLKS(0x0C08D29Eu);
	r6 = 0xB4u; UPD(0x0C08D2A0u, 1);  /* 0C08D29E mov.w @(disp,pc),Rn */
	IF(0x0C08D2A0u); MACL = r13 * r6;  /* 0C08D2A0 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C08D2A4u, 3);  /* 0C08D2A2 mov.l @(disp,pc),Rn */
	IF(0x0C08D2A4u); r7 = MACL;  /* 0C08D2A4 sts macl,Rn */
	IF(0x0C08D2A6u); MACL = r0 * r6;  /* 0C08D2A6 mul.l Rm,Rn */
	r7 += r5;  /* 0C08D2A8 add Rm,Rn */
	r11 = R32(r7 + 0x30u); UPD(0x0C08D2ACu, 5);  /* 0C08D2AA mov.l @(disp,Rm),Rn */
	IF(0x0C08D2ACu); r12 = MACL;  /* 0C08D2AC sts macl,Rn */
	r12 += r5;  /* 0C08D2AE add Rm,Rn */
	r9 = R32(r12 + 0x24u); UPD(0x0C08D2B2u, 3);  /* 0C08D2B0 mov.l @(disp,Rm),Rn */
	r10 = R32(r12 + 0x28u); UPD(0x0C08D2B4u, 1);  /* 0C08D2B2 mov.l @(disp,Rm),Rn */
	r0 = R32(r7 + 0x2Cu); UPD(0x0C08D2B6u, 1);  /* 0C08D2B4 mov.l @(disp,Rm),Rn */
	r10 += r11;  /* 0C08D2B6 add Rm,Rn */
	r9 += r0;  /* 0C08D2B8 add Rm,Rn */
	r1 = R32(r12); UPD(0x0C08D2BCu, 3);  /* 0C08D2BA mov.l @Rm,Rn */
	r3 = 0x13000000u; UPD(0x0C08D2BEu, 1);  /* 0C08D2BC mov.l @(disp,pc),Rn */
	W32(r7 + 0x24u, r9); UPD(0x0C08D2C0u, 1);  /* 0C08D2BE mov.l Rm,@(disp,Rn) */
	T = (r1 & r3) == 0;  /* 0C08D2C0 tst Rm,Rn */
	{ u32 c_ = T; W32(r7 + 0x28u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08D280u, 4); goto L_0C08D280; } UPD(0x0C08D2C6u, 1); goto L_0C08D2C6; }  /* 0C08D2C2 bt/s */
L_0C08D2C6: BLKS(0x0C08D2C6u);
	r7 += 0x7Eu;  /* 0C08D2C6 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C08D2CAu, 2);  /* 0C08D2C8 mov.w @Rm,Rn */
	IF(0x0C08D2CAu); MACL = r3 * r6;  /* 0C08D2CA mul.l Rm,Rn */
	IF(0x0C08D2CCu); r6 = MACL;  /* 0C08D2CC sts macl,Rn */
	r6 += r5;  /* 0C08D2CE add Rm,Rn */
	r6 += 0x3Cu;  /* 0C08D2D0 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C08D2D4u, 6);  /* 0C08D2D2 mov.w @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C08D2D4 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0xFFFFFF82u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08D288u, 4); goto L_0C08D288; } goto L_0C08D2DA; }  /* 0C08D2D6 bt/s */
L_0C08D2DA: BLKS(0x0C08D2DAu);
	r2 = R32(r7 + 0xCu); UPD(0x0C08D2DCu, 2);  /* 0C08D2DA mov.l @(disp,Rm),Rn */
	r7 = 0x2Fu;  /* 0C08D2DC mov #imm,Rn */
	T = r2 > r7;  /* 0C08D2DE cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C08D2E6u, 5); goto L_0C08D2E6; }  /* 0C08D2E0 bf */
L_0C08D2E2: BLKS(0x0C08D2E2u);
	{ IF(0x0C08D2E4u); ; /* slot nop */ UPD(0x0C08D4B0u, 3); goto L_0C08D4B0; }  /* 0C08D2E2 bra */
L_0C08D2E6: BLKS(0x0C08D2E6u);
	r0 = 0xC08D304u;  /* 0C08D2E6 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08D2E8 add Rm,Rn */
	IF(0x0C08D2EAu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08D2ECu, 3);  /* 0C08D2EA mov.w @(r0,Rm),Rn */
	IF(0x0C08D2ECu); { u32 tv_ = (r4 + 0x0C08D2F0u); u32 t_ = PHYS(tv_); IF(0x0C08D2EEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08D370u: goto L_0C08D370; case 0x0C08D3A0u: goto L_0C08D3A0; case 0x0C08D400u: goto L_0C08D400; case 0x0C08D4B0u: goto L_0C08D4B0; case 0x0C08D4C0u: goto L_0C08D4C0; default: JUMPD(tv_); } }  /* 0C08D2EC braf Rn */
L_0C08D370: BLKS(0x0C08D370u);
	r2 = 0xB4u; UPD(0x0C08D372u, 1);  /* 0C08D370 mov.w @(disp,pc),Rn */
	IF(0x0C08D372u); MACL = r13 * r2;  /* 0C08D372 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C08D376u, 3);  /* 0C08D374 mov.l @(disp,pc),Rn */
	IF(0x0C08D376u); r2 = MACL;  /* 0C08D376 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C08D37Au, 2);  /* 0C08D378 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C08D37A add Rm,Rn */
	IF(0x0C08D37Cu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08D37Eu, 2);  /* 0C08D37C mov.w @(r0,Rm),Rn */
	IF(0x0C08D37Eu); T = (s32)r3 >= 0;  /* 0C08D37E cmp/pz Rn */
	{ u32 c_ = !T; r12 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08D390u, 4); goto L_0C08D390; } goto L_0C08D384; }  /* 0C08D380 bf/s */
L_0C08D384: BLKS(0x0C08D384u);
	r0 = 0x9Cu; UPD(0x0C08D386u, 2);  /* 0C08D384 mov.w @(disp,pc),Rn */
	IF(0x0C08D386u); W8(r0 + r2, r12); UPD(0x0C08D388u, 1);  /* 0C08D386 mov.b Rm,@(r0,Rn) */
L_0C08D388: BLKS(0x0C08D388u);
	r1 = R32(r2 + 0xCu); UPD(0x0C08D38Au, 1);  /* 0C08D388 mov.l @(disp,Rm),Rn */
	{ r1 += r3; /* slot add Rm,Rn */ UPD(0x0C08C684u, 3); goto L_0C08C684; }  /* 0C08D38A bra */
L_0C08D390: BLKS(0x0C08D390u);
	r0 = R32(r2 + 0x8u); UPD(0x0C08D392u, 1);  /* 0C08D390 mov.l @(disp,Rm),Rn */
	r1 = 0x0u;  /* 0C08D392 mov #imm,Rn */
	r11 = 0xC1BB840u; UPD(0x0C08D396u, 2);  /* 0C08D394 mov.l @(disp,pc),Rn */
	IF(0x0C08D396u); r0 <<= 2;  /* 0C08D396 shll2 Rn */
	IF(0x0C08D398u); r6 = R32(r0 + r11); UPD(0x0C08D39Au, 2);  /* 0C08D398 mov.l @(r0,Rm),Rn */
	{ W32(r2 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08D18Eu, 3); goto L_0C08D18E; }  /* 0C08D39A bra */
L_0C08D3A0: BLKS(0x0C08D3A0u);
	r2 = 0xB4u; UPD(0x0C08D3A2u, 1);  /* 0C08D3A0 mov.w @(disp,pc),Rn */
	IF(0x0C08D3A2u); MACL = r13 * r2;  /* 0C08D3A2 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C08D3A6u, 3);  /* 0C08D3A4 mov.l @(disp,pc),Rn */
	IF(0x0C08D3A6u); r9 = MACL;  /* 0C08D3A6 sts macl,Rn */
	r7 = 0xA0u; UPD(0x0C08D3AAu, 2);  /* 0C08D3A8 mov.w @(disp,pc),Rn */
	r9 += r6;  /* 0C08D3AA add Rm,Rn */
	r9 += r7;  /* 0C08D3AC add Rm,Rn */
	r9 += 0x2u;  /* 0C08D3AE add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r9); UPD(0x0C08D3B2u, 4);  /* 0C08D3B0 mov.b @Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C08D3B2 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C08D3B6u); MACL = r3 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C08D3F0u, 5); goto L_0C08D3F0; } goto L_0C08D3B8; }  /* 0C08D3B4 bt/s */
L_0C08D3B8: BLKS(0x0C08D3B8u);
	IF(0x0C08D3B8u); MACL = r3 * r2;  /* 0C08D3B8 mul.l Rm,Rn */
	IF(0x0C08D3BAu); r1 = MACL;  /* 0C08D3BA sts macl,Rn */
	r1 += r6;  /* 0C08D3BC add Rm,Rn */
	r1 += r7;  /* 0C08D3BE add Rm,Rn */
	r1 += 0x2u;  /* 0C08D3C0 add #imm,Rn */
	UPD(0x0C08D3C2u, 8);
L_0C08D3C2: BLKS(0x0C08D3C2u);
	r4 = 0xB4u; UPD(0x0C08D3C4u, 1);  /* 0C08D3C2 mov.w @(disp,pc),Rn */
	IF(0x0C08D3C4u); MACL = r13 * r4;  /* 0C08D3C4 mul.l Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r1); UPD(0x0C08D3C8u, 3);  /* 0C08D3C6 mov.b @Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08D3CAu, 1);  /* 0C08D3C8 mov.l @(disp,pc),Rn */
	IF(0x0C08D3CAu); r3 = MACL;  /* 0C08D3CA sts macl,Rn */
	W32(r14, r8); UPD(0x0C08D3CEu, 2);  /* 0C08D3CC mov.l Rm,@Rn */
	r3 += r7;  /* 0C08D3CE add Rm,Rn */
	r6 = 0xA1u; UPD(0x0C08D3D2u, 2);  /* 0C08D3D0 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C08D3D2 mov Rm,Rn */
	IF(0x0C08D3D4u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08D3D6u, 2);  /* 0C08D3D4 mov.b @(r0,Rm),Rn */
	r0 = R32(r14); UPD(0x0C08D3D8u, 1);  /* 0C08D3D6 mov.l @Rm,Rn */
	T = (r0 & r5) == 0;  /* 0C08D3D8 tst Rm,Rn */
	{ u32 c_ = !T; r2 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08D3E2u, 4); goto L_0C08D3E2; } goto L_0C08D3DE; }  /* 0C08D3DA bf/s */
L_0C08D3DE: BLKS(0x0C08D3DEu);
	r0 = 0x88u; UPD(0x0C08D3E0u, 2);  /* 0C08D3DE mov.w @(disp,pc),Rn */
	IF(0x0C08D3E0u); W16(r0 + r3, r2); UPD(0x0C08D3E2u, 1);  /* 0C08D3E0 mov.w Rm,@(r0,Rn) */
L_0C08D3E2: BLKS(0x0C08D3E2u);
	{ IF(0x0C08D3E4u); ; /* slot nop */ UPD(0x0C08C62Eu, 3); goto L_0C08C62E; }  /* 0C08D3E2 bra */
L_0C08D3F0: BLKS(0x0C08D3F0u);
	IF(0x0C08D3F0u); r1 = MACL;  /* 0C08D3F0 sts macl,Rn */
	r1 += r6;  /* 0C08D3F2 add Rm,Rn */
	r1 += r7;  /* 0C08D3F4 add Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C08D3C2u, 6); goto L_0C08D3C2; }  /* 0C08D3F6 bra */
L_0C08D400: BLKS(0x0C08D400u);
	r12 = 0xC0A9E40u; UPD(0x0C08D402u, 1);  /* 0C08D400 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C08D402 mov Rm,Rn */
	r5 = 0xCu;  /* 0C08D404 mov #imm,Rn */
	IF(0x0C08D406u); { u32 t_ = r12; PR = 0x0C08D40Au; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C08D40Au); }  /* 0C08D406 jsr @Rn */
L_0C08D40A: BLKS(0x0C08D40Au);
	T = (r0 & r0) == 0;  /* 0C08D40A tst Rm,Rn */
	if (!T) { UPD(0x0C08D418u, 4); goto L_0C08D418; }  /* 0C08D40C bf */
L_0C08D40E: BLKS(0x0C08D40Eu);
	r14 += 0x28u;  /* 0C08D40E add #imm,Rn */
	r13 = 0xFFFFEDF4u; UPD(0x0C08D412u, 2);  /* 0C08D410 mov.w @(disp,pc),Rn */
	IF(0x0C08D412u); { u32 tv_ = (r13 + 0x0C08D416u); u32 t_ = PHYS(tv_); IF(0x0C08D414u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C20Au: goto L_0C08C20A; default: JUMPD(tv_); } }  /* 0C08D412 braf Rn */
L_0C08D418: BLKS(0x0C08D418u);
	r11 = 0xB4u; UPD(0x0C08D41Au, 1);  /* 0C08D418 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08D41A add #imm,Rn */
	IF(0x0C08D41Cu); MACL = r13 * r11;  /* 0C08D41C mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C08D420u, 4);  /* 0C08D41E mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C08D420 mov #imm,Rn */
	IF(0x0C08D422u); r11 = MACL;  /* 0C08D422 sts macl,Rn */
	r11 += r5;  /* 0C08D424 add Rm,Rn */
	r0 = R32(r11 + 0x8u); UPD(0x0C08D428u, 4);  /* 0C08D426 mov.l @(disp,Rm),Rn */
	r2 = 0xC1BB8D4u; UPD(0x0C08D42Au, 1);  /* 0C08D428 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C08D42A and #imm,r0 */
	IF(0x0C08D42Cu); r0 <<= 2;  /* 0C08D42C shll2 Rn */
	IF(0x0C08D42Eu); r10 = R32(r0 + r2); UPD(0x0C08D430u, 3);  /* 0C08D42E mov.l @(r0,Rm),Rn */
	r5 = R32(r11 + 0x24u); UPD(0x0C08D432u, 1);  /* 0C08D430 mov.l @(disp,Rm),Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C08D434u, 1);  /* 0C08D432 mov.l @(disp,Rm),Rn */
	r8 = 0x2A000u; UPD(0x0C08D436u, 1);  /* 0C08D434 mov.l @(disp,pc),Rn */
	r6 += r10;  /* 0C08D436 add Rm,Rn */
	W32(r15, r8); UPD(0x0C08D43Au, 2);  /* 0C08D438 mov.l Rm,@Rn */
	r8 = 0xC7C17D0u; UPD(0x0C08D43Cu, 1);  /* 0C08D43A mov.l @(disp,pc),Rn */
	r10 = 0x100u; UPD(0x0C08D43Eu, 1);  /* 0C08D43C mov.w @(disp,pc),Rn */
	r12 = 0xFFE10000u; UPD(0x0C08D440u, 1);  /* 0C08D43E mov.l @(disp,pc),Rn */
	r7 = r10;  /* 0C08D440 mov Rm,Rn */
	IF(0x0C08D442u); { u32 t_ = r8; PR = 0x0C08D446u; r5 += r12; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C7C17D0, 0x0C7C17D0u, 0x0C08D446u); }  /* 0C08D442 jsr @Rn */
L_0C08D446: BLKS(0x0C08D446u);
	r5 = R32(r11 + 0x24u); UPD(0x0C08D448u, 1);  /* 0C08D446 mov.l @(disp,Rm),Rn */
	r0 = 0xFFE30000u; UPD(0x0C08D44Au, 1);  /* 0C08D448 mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C08D44A add Rm,Rn */
	r0 = R32(r11 + 0x8u); UPD(0x0C08D44Eu, 2);  /* 0C08D44C mov.l @(disp,Rm),Rn */
	r4 = 0xC1BB8CCu; UPD(0x0C08D450u, 1);  /* 0C08D44E mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C08D450 and #imm,r0 */
	IF(0x0C08D452u); r0 <<= 2;  /* 0C08D452 shll2 Rn */
	IF(0x0C08D454u); r7 = R32(r0 + r4); UPD(0x0C08D456u, 3);  /* 0C08D454 mov.l @(r0,Rm),Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C08D458u, 1);  /* 0C08D456 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C08D458 mov #imm,Rn */
	r9 = 0x2C000u; UPD(0x0C08D45Cu, 2);  /* 0C08D45A mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C08D45C add Rm,Rn */
	W32(r15, r9); UPD(0x0C08D460u, 2);  /* 0C08D45E mov.l Rm,@Rn */
	IF(0x0C08D460u); { u32 t_ = r8; PR = 0x0C08D464u; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C08D464u); }  /* 0C08D460 jsr @Rn */
L_0C08D464: BLKS(0x0C08D464u);
	r0 = R32(r11 + 0x8u); UPD(0x0C08D466u, 1);  /* 0C08D464 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C08D466 mov #imm,Rn */
	r5 = R32(r11 + 0x24u); UPD(0x0C08D46Au, 2);  /* 0C08D468 mov.l @(disp,Rm),Rn */
	r0 &= 0x1u;  /* 0C08D46A and #imm,r0 */
	r6 = 0xFFE60000u; UPD(0x0C08D46Eu, 2);  /* 0C08D46C mov.l @(disp,pc),Rn */
	IF(0x0C08D46Eu); r0 <<= 2;  /* 0C08D46E shll2 Rn */
	r3 = 0xC1BB8C4u; UPD(0x0C08D472u, 2);  /* 0C08D470 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C08D472 add Rm,Rn */
	IF(0x0C08D474u); r12 = R32(r0 + r3); UPD(0x0C08D476u, 2);  /* 0C08D474 mov.l @(r0,Rm),Rn */
	r7 = r10;  /* 0C08D476 mov Rm,Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C08D47Au, 2);  /* 0C08D478 mov.l @(disp,Rm),Rn */
	r2 = 0x2E000u; UPD(0x0C08D47Cu, 1);  /* 0C08D47A mov.l @(disp,pc),Rn */
	r6 += r12;  /* 0C08D47C add Rm,Rn */
	IF(0x0C08D47Eu); { u32 t_ = r8; PR = 0x0C08D482u; W32(r15, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C08D482u); }  /* 0C08D47E jsr @Rn */
L_0C08D482: BLKS(0x0C08D482u);
	r5 = R32(r11 + 0x24u); UPD(0x0C08D484u, 1);  /* 0C08D482 mov.l @(disp,Rm),Rn */
	r0 = 0xFFE80000u; UPD(0x0C08D486u, 1);  /* 0C08D484 mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C08D486 add Rm,Rn */
	r0 = R32(r11 + 0x8u); UPD(0x0C08D48Au, 2);  /* 0C08D488 mov.l @(disp,Rm),Rn */
	r4 = 0xC1BB8BCu; UPD(0x0C08D48Cu, 1);  /* 0C08D48A mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C08D48C and #imm,r0 */
	IF(0x0C08D48Eu); r0 <<= 2;  /* 0C08D48E shll2 Rn */
	IF(0x0C08D490u); r7 = R32(r0 + r4); UPD(0x0C08D492u, 3);  /* 0C08D490 mov.l @(r0,Rm),Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C08D494u, 1);  /* 0C08D492 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C08D494 mov #imm,Rn */
	r9 = 0x30000u; UPD(0x0C08D498u, 2);  /* 0C08D496 mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C08D498 add Rm,Rn */
	W32(r15, r9); UPD(0x0C08D49Cu, 2);  /* 0C08D49A mov.l Rm,@Rn */
	IF(0x0C08D49Cu); { u32 t_ = r8; PR = 0x0C08D4A0u; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C08D4A0u); }  /* 0C08D49C jsr @Rn */
L_0C08D4A0: BLKS(0x0C08D4A0u);
	r0 = 0x88u; UPD(0x0C08D4A2u, 1);  /* 0C08D4A0 mov.w @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C08D4A2 add #imm,Rn */
	r3 = R32(r11 + 0xCu); UPD(0x0C08D4A6u, 2);  /* 0C08D4A4 mov.l @(disp,Rm),Rn */
	IF(0x0C08D4A6u); r1 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C08D4A8u, 1);  /* 0C08D4A6 mov.w @(r0,Rm),Rn */
	r3 += r1;  /* 0C08D4A8 add Rm,Rn */
	{ W32(r11 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08C638u, 4); goto L_0C08C638; }  /* 0C08D4AA bra */
L_0C08D4B0: BLKS(0x0C08D4B0u);
	r10 = 0xB4u; UPD(0x0C08D4B2u, 1);  /* 0C08D4B0 mov.w @(disp,pc),Rn */
	IF(0x0C08D4B2u); MACL = r13 * r10;  /* 0C08D4B2 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C08D4B6u, 3);  /* 0C08D4B4 mov.l @(disp,pc),Rn */
	IF(0x0C08D4B6u); r2 = MACL;  /* 0C08D4B6 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C08D4BAu, 2);  /* 0C08D4B8 mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C08D4BA add Rm,Rn */
	{ IF(0x0C08D4BEu); r3 = (u32)(s32)(s16)R16(r0 + r2); /* slot mov.w @(r0,Rm),Rn */ UPD(0x0C08D388u, 4); goto L_0C08D388; }  /* 0C08D4BC bra */
L_0C08D4C0: BLKS(0x0C08D4C0u);
	r6 = 0xB4u; UPD(0x0C08D4C2u, 1);  /* 0C08D4C0 mov.w @(disp,pc),Rn */
	r1 = 0x20u;  /* 0C08D4C2 mov #imm,Rn */
	IF(0x0C08D4C4u); MACL = r13 * r6;  /* 0C08D4C4 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C08D4C8u, 4);  /* 0C08D4C6 mov.l @(disp,pc),Rn */
	IF(0x0C08D4C8u); r3 = MACL;  /* 0C08D4C8 sts macl,Rn */
	{ r2 += r3; /* slot add Rm,Rn */ UPD(0x0C08C684u, 4); goto L_0C08C684; }  /* 0C08D4CA bra */
L_0C08D520: BLKS(0x0C08D520u);
	r9 = 0xC0A0540u; UPD(0x0C08D522u, 1);  /* 0C08D520 mov.l @(disp,pc),Rn */
	IF(0x0C08D522u); { u32 t_ = r9; PR = 0x0C08D526u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C08D526u); }  /* 0C08D522 jsr @Rn */
L_0C08D526: BLKS(0x0C08D526u);
	IF(0x0C08D526u); T = (s32)r0 >= 0;  /* 0C08D526 cmp/pz Rn */
	if (T) { UPD(0x0C08D532u, 4); goto L_0C08D532; }  /* 0C08D528 bt */
L_0C08D52A: BLKS(0x0C08D52Au);
	r1 = 0xFFFFEDA0u; UPD(0x0C08D52Cu, 1);  /* 0C08D52A mov.w @(disp,pc),Rn */
	IF(0x0C08D52Cu); { u32 tv_ = (r1 + 0x0C08D530u); u32 t_ = PHYS(tv_); IF(0x0C08D52Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C2D0u: goto L_0C08C2D0; default: JUMPD(tv_); } }  /* 0C08D52C braf Rn */
L_0C08D532: BLKS(0x0C08D532u);
	r6 = 0xB4u; UPD(0x0C08D534u, 1);  /* 0C08D532 mov.w @(disp,pc),Rn */
	IF(0x0C08D534u); MACL = r13 * r6;  /* 0C08D534 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C08D538u, 3);  /* 0C08D536 mov.l @(disp,pc),Rn */
	IF(0x0C08D538u); r7 = MACL;  /* 0C08D538 sts macl,Rn */
	IF(0x0C08D53Au); MACL = r0 * r6;  /* 0C08D53A mul.l Rm,Rn */
	r7 += r5;  /* 0C08D53C add Rm,Rn */
	r11 = R32(r7 + 0x2Cu); UPD(0x0C08D540u, 5);  /* 0C08D53E mov.l @(disp,Rm),Rn */
	IF(0x0C08D540u); r0 = MACL;  /* 0C08D540 sts macl,Rn */
	r0 += r5;  /* 0C08D542 add Rm,Rn */
	r12 = R32(r0 + 0x24u); UPD(0x0C08D546u, 3);  /* 0C08D544 mov.l @(disp,Rm),Rn */
	r8 = R32(r0 + 0x28u); UPD(0x0C08D548u, 1);  /* 0C08D546 mov.l @(disp,Rm),Rn */
	r12 += r11;  /* 0C08D548 add Rm,Rn */
	r10 = R32(r7 + 0x30u); UPD(0x0C08D54Cu, 2);  /* 0C08D54A mov.l @(disp,Rm),Rn */
	r1 = R32(r0); UPD(0x0C08D54Eu, 1);  /* 0C08D54C mov.l @Rm,Rn */
	r8 += r10;  /* 0C08D54E add Rm,Rn */
	r4 = 0x13000000u; UPD(0x0C08D552u, 2);  /* 0C08D550 mov.l @(disp,pc),Rn */
	W32(r7 + 0x24u, r12); UPD(0x0C08D554u, 1);  /* 0C08D552 mov.l Rm,@(disp,Rn) */
	T = (r1 & r4) == 0;  /* 0C08D554 tst Rm,Rn */
	{ u32 c_ = !T; W32(r7 + 0x28u, r8); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08D55Eu, 4); goto L_0C08D55E; } UPD(0x0C08D55Au, 1); goto L_0C08D55A; }  /* 0C08D556 bf/s */
L_0C08D55A: BLKS(0x0C08D55Au);
	{ r13 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(0x0C08D282u, 3); goto L_0C08D282; }  /* 0C08D55A bra */
L_0C08D55E: BLKS(0x0C08D55Eu);
	r7 += 0x7Eu;  /* 0C08D55E add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C08D562u, 2);  /* 0C08D560 mov.w @Rm,Rn */
	IF(0x0C08D562u); MACL = r3 * r6;  /* 0C08D562 mul.l Rm,Rn */
	IF(0x0C08D564u); r6 = MACL;  /* 0C08D564 sts macl,Rn */
	r6 += r5;  /* 0C08D566 add Rm,Rn */
	r6 += 0x3Cu;  /* 0C08D568 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C08D56Cu, 6);  /* 0C08D56A mov.w @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C08D56C tst Rm,Rn */
	{ u32 c_ = T; r7 += 0xFFFFFF82u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08D582u, 4); goto L_0C08D582; } goto L_0C08D572; }  /* 0C08D56E bt/s */
L_0C08D572: BLKS(0x0C08D572u);
	r2 = 0x99u; UPD(0x0C08D574u, 2);  /* 0C08D572 mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C08D574 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C08D578u, 2);  /* 0C08D576 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C08D578 add #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C08D57A extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C08D57C cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08D58Au, 6); goto L_0C08D58A; } UPD(0x0C08D582u, 1); goto L_0C08D582; }  /* 0C08D57E bt/s */
L_0C08D582: BLKS(0x0C08D582u);
	r13 = 0xFFFFEC82u; UPD(0x0C08D584u, 1);  /* 0C08D582 mov.w @(disp,pc),Rn */
	IF(0x0C08D584u); { u32 tv_ = (r13 + 0x0C08D588u); u32 t_ = PHYS(tv_); r14 += 0x28u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C20Au: goto L_0C08C20A; default: JUMPD(tv_); } }  /* 0C08D584 braf Rn */
L_0C08D58A: BLKS(0x0C08D58Au);
	r4 = 0x0u;  /* 0C08D58A mov #imm,Rn */
	W8(r2, r4); UPD(0x0C08D58Eu, 2);  /* 0C08D58C mov.b Rm,@Rn */
	r2 = R32(r7 + 0xCu); UPD(0x0C08D590u, 1);  /* 0C08D58E mov.l @(disp,Rm),Rn */
	r7 = 0x2Fu;  /* 0C08D590 mov #imm,Rn */
	T = r2 > r7;  /* 0C08D592 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C08D620u, 5); goto L_0C08D620; }  /* 0C08D594 bt */
L_0C08D596: BLKS(0x0C08D596u);
	r0 = 0xC08D5B0u;  /* 0C08D596 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08D598 add Rm,Rn */
	IF(0x0C08D59Au); r8 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08D59Cu, 3);  /* 0C08D59A mov.w @(r0,Rm),Rn */
	IF(0x0C08D59Cu); { u32 tv_ = (r8 + 0x0C08D5A0u); u32 t_ = PHYS(tv_); IF(0x0C08D59Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08D1A0u: goto L_0C08D1A0; case 0x0C08D610u: goto L_0C08D610; case 0x0C08D630u: goto L_0C08D630; case 0x0C08D690u: goto L_0C08D690; case 0x0C08D710u: goto L_0C08D710; default: JUMPD(tv_); } }  /* 0C08D59C braf Rn */
L_0C08D610: BLKS(0x0C08D610u);
	r12 = 0xB4u; UPD(0x0C08D612u, 1);  /* 0C08D610 mov.w @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C08D612 mov #imm,Rn */
	IF(0x0C08D614u); MACL = r13 * r12;  /* 0C08D614 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C08D618u, 4);  /* 0C08D616 mov.l @(disp,pc),Rn */
	IF(0x0C08D618u); r0 = MACL;  /* 0C08D618 sts macl,Rn */
	r3 += r0;  /* 0C08D61A add Rm,Rn */
	r0 = 0x9Cu; UPD(0x0C08D61Eu, 3);  /* 0C08D61C mov.w @(disp,pc),Rn */
	IF(0x0C08D61Eu); W8(r0 + r3, r10); UPD(0x0C08D620u, 1);  /* 0C08D61E mov.b Rm,@(r0,Rn) */
L_0C08D620: BLKS(0x0C08D620u);
	{ IF(0x0C08D622u); ; /* slot nop */ UPD(0x0C08D1A0u, 3); goto L_0C08D1A0; }  /* 0C08D620 bra */
L_0C08D630: BLKS(0x0C08D630u);
	r2 = 0xB4u; UPD(0x0C08D632u, 1);  /* 0C08D630 mov.w @(disp,pc),Rn */
	IF(0x0C08D632u); MACL = r13 * r2;  /* 0C08D632 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C08D636u, 3);  /* 0C08D634 mov.l @(disp,pc),Rn */
	IF(0x0C08D636u); r4 = MACL;  /* 0C08D636 sts macl,Rn */
	r7 = 0xA0u; UPD(0x0C08D63Au, 2);  /* 0C08D638 mov.w @(disp,pc),Rn */
	r4 += r6;  /* 0C08D63A add Rm,Rn */
	r4 += r7;  /* 0C08D63C add Rm,Rn */
	r4 += 0x2u;  /* 0C08D63E add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r4); UPD(0x0C08D642u, 4);  /* 0C08D640 mov.b @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C08D642 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C08D646u); MACL = r3 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C08D680u, 5); goto L_0C08D680; } goto L_0C08D648; }  /* 0C08D644 bt/s */
L_0C08D648: BLKS(0x0C08D648u);
	IF(0x0C08D648u); MACL = r3 * r2;  /* 0C08D648 mul.l Rm,Rn */
	IF(0x0C08D64Au); r1 = MACL;  /* 0C08D64A sts macl,Rn */
	r1 += r6;  /* 0C08D64C add Rm,Rn */
	r1 += r7;  /* 0C08D64E add Rm,Rn */
	r1 += 0x2u;  /* 0C08D650 add #imm,Rn */
	UPD(0x0C08D652u, 8);
L_0C08D652: BLKS(0x0C08D652u);
	r8 = 0xB4u; UPD(0x0C08D654u, 1);  /* 0C08D652 mov.w @(disp,pc),Rn */
	IF(0x0C08D654u); MACL = r13 * r8;  /* 0C08D654 mul.l Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C08D658u, 3);  /* 0C08D656 mov.b @Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08D65Au, 1);  /* 0C08D658 mov.l @(disp,pc),Rn */
	IF(0x0C08D65Au); r0 = MACL;  /* 0C08D65A sts macl,Rn */
	W32(r14, r3); UPD(0x0C08D65Eu, 2);  /* 0C08D65C mov.l Rm,@Rn */
	r0 += r7;  /* 0C08D65E add Rm,Rn */
	r2 = 0xA1u; UPD(0x0C08D662u, 2);  /* 0C08D660 mov.w @(disp,pc),Rn */
	IF(0x0C08D662u); r13 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08D664u, 1);  /* 0C08D662 mov.b @(r0,Rm),Rn */
	r6 = R32(r14); UPD(0x0C08D666u, 1);  /* 0C08D664 mov.l @Rm,Rn */
	T = (r6 & r13) == 0;  /* 0C08D666 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x1Cu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08D66Eu, 4); goto L_0C08D66E; } goto L_0C08D66C; }  /* 0C08D668 bt/s */
L_0C08D66C: BLKS(0x0C08D66Cu);
	r1 = 0x17u;  /* 0C08D66C mov #imm,Rn */
	UPD(0x0C08D66Eu, 2);
L_0C08D66E: BLKS(0x0C08D66Eu);
	W32(r0 + 0xCu, r1); UPD(0x0C08D670u, 1);  /* 0C08D66E mov.l Rm,@(disp,Rn) */
L_0C08D670: BLKS(0x0C08D670u);
	r13 = 0xFFFFEB94u; UPD(0x0C08D672u, 1);  /* 0C08D670 mov.w @(disp,pc),Rn */
	IF(0x0C08D672u); { u32 tv_ = (r13 + 0x0C08D676u); u32 t_ = PHYS(tv_); r14 += 0x28u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C20Au: goto L_0C08C20A; default: JUMPD(tv_); } }  /* 0C08D672 braf Rn */
L_0C08D680: BLKS(0x0C08D680u);
	IF(0x0C08D680u); r1 = MACL;  /* 0C08D680 sts macl,Rn */
	r1 += r6;  /* 0C08D682 add Rm,Rn */
	r1 += r7;  /* 0C08D684 add Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C08D652u, 6); goto L_0C08D652; }  /* 0C08D686 bra */
L_0C08D690: BLKS(0x0C08D690u);
	r10 = 0xC0A9E40u; UPD(0x0C08D692u, 1);  /* 0C08D690 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C08D692 mov Rm,Rn */
	r5 = 0xAu;  /* 0C08D694 mov #imm,Rn */
	IF(0x0C08D696u); { u32 t_ = r10; PR = 0x0C08D69Au; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C08D69Au); }  /* 0C08D696 jsr @Rn */
L_0C08D69A: BLKS(0x0C08D69Au);
	T = (r0 & r0) == 0;  /* 0C08D69A tst Rm,Rn */
	if (T) { UPD(0x0C08D670u, 4); goto L_0C08D670; }  /* 0C08D69C bt */
L_0C08D69E: BLKS(0x0C08D69Eu);
	r1 = 0x1u;  /* 0C08D69E mov #imm,Rn */
	r9 = 0xB4u; UPD(0x0C08D6A2u, 2);  /* 0C08D6A0 mov.w @(disp,pc),Rn */
	IF(0x0C08D6A2u); MACL = r13 * r9;  /* 0C08D6A2 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C08D6A6u, 3);  /* 0C08D6A4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08D6A6 add #imm,Rn */
	IF(0x0C08D6A8u); r9 = MACL;  /* 0C08D6A8 sts macl,Rn */
	r9 += r8;  /* 0C08D6AA add Rm,Rn */
	r8 = R32(r9 + 0x8u); UPD(0x0C08D6AEu, 4);  /* 0C08D6AC mov.l @(disp,Rm),Rn */
	r8 &= r1;  /* 0C08D6AE and Rm,Rn */
	r11 = r8;  /* 0C08D6B0 mov Rm,Rn */
	IF(0x0C08D6B2u); r11 <<= 2;  /* 0C08D6B2 shll2 Rn */
	r7 = 0xC1BB8E4u; UPD(0x0C08D6B6u, 4);  /* 0C08D6B4 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C08D6B6 mov Rm,Rn */
	IF(0x0C08D6B8u); r6 = R32(r0 + r7); UPD(0x0C08D6BAu, 2);  /* 0C08D6B8 mov.l @(r0,Rm),Rn */
	r8 += r8;  /* 0C08D6BA add Rm,Rn */
	r4 = 0xC1BB8DCu; UPD(0x0C08D6BEu, 2);  /* 0C08D6BC mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C08D6BE mov Rm,Rn */
	IF(0x0C08D6C0u); r7 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C08D6C2u, 2);  /* 0C08D6C0 mov.w @(r0,Rm),Rn */
	r12 = R32(r9 + 0x28u); UPD(0x0C08D6C4u, 1);  /* 0C08D6C2 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C08D6C4 mov #imm,Rn */
	r10 = R32(r9 + 0x24u); UPD(0x0C08D6C8u, 2);  /* 0C08D6C6 mov.l @(disp,Rm),Rn */
	r6 += r12;  /* 0C08D6C8 add Rm,Rn */
	r0 = 0x3C000u; UPD(0x0C08D6CCu, 2);  /* 0C08D6CA mov.l @(disp,pc),Rn */
	r3 = 0xC7C14A0u; UPD(0x0C08D6CEu, 1);  /* 0C08D6CC mov.l @(disp,pc),Rn */
	W32(r15, r0); UPD(0x0C08D6D0u, 1);  /* 0C08D6CE mov.l Rm,@Rn */
	r5 = 0x80000u; UPD(0x0C08D6D2u, 1);  /* 0C08D6D0 mov.l @(disp,pc),Rn */
	W32(r14 + 0x24u, r12); UPD(0x0C08D6D4u, 1);  /* 0C08D6D2 mov.l Rm,@(disp,Rn) */
	IF(0x0C08D6D4u); { u32 t_ = r3; PR = 0x0C08D6D8u; r5 += r10; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C14A0, 0x0C7C14A0u, 0x0C08D6D8u); }  /* 0C08D6D4 jsr @Rn */
L_0C08D6D8: BLKS(0x0C08D6D8u);
	r2 = 0xC1BB8ECu; UPD(0x0C08D6DAu, 1);  /* 0C08D6D8 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C08D6DA mov Rm,Rn */
	IF(0x0C08D6DCu); r6 = R32(r0 + r2); UPD(0x0C08D6DEu, 2);  /* 0C08D6DC mov.l @(r0,Rm),Rn */
	r4 = 0xC1BB8E0u; UPD(0x0C08D6E0u, 1);  /* 0C08D6DE mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C08D6E0 mov Rm,Rn */
	r5 = 0x40000u; UPD(0x0C08D6E4u, 2);  /* 0C08D6E2 mov.l @(disp,pc),Rn */
	r11 = R32(r14 + 0x24u); UPD(0x0C08D6E6u, 1);  /* 0C08D6E4 mov.l @(disp,Rm),Rn */
	r10 += r5;  /* 0C08D6E6 add Rm,Rn */
	IF(0x0C08D6E8u); r7 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C08D6EAu, 2);  /* 0C08D6E8 mov.w @(r0,Rm),Rn */
	r11 += r6;  /* 0C08D6EA add Rm,Rn */
	r12 = 0xC7C14A0u; UPD(0x0C08D6EEu, 2);  /* 0C08D6EC mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C08D6EE mov #imm,Rn */
	W32(r15, r5); UPD(0x0C08D6F2u, 2);  /* 0C08D6F0 mov.l Rm,@Rn */
	r6 = r11;  /* 0C08D6F2 mov Rm,Rn */
	IF(0x0C08D6F4u); { u32 t_ = r12; PR = 0x0C08D6F8u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C7C14A0, 0x0C7C14A0u, 0x0C08D6F8u); }  /* 0C08D6F4 jsr @Rn */
L_0C08D6F8: BLKS(0x0C08D6F8u);
	r1 = R32(r9 + 0xCu); UPD(0x0C08D6FAu, 1);  /* 0C08D6F8 mov.l @(disp,Rm),Rn */
	r15 += 0x4u;  /* 0C08D6FA add #imm,Rn */
	r1 += 0x1u;  /* 0C08D6FC add #imm,Rn */
	UPD(0x0C08D6FEu, 2);
L_0C08D6FE: BLKS(0x0C08D6FEu);
	r4 = 0xFFFFEF34u; UPD(0x0C08D700u, 1);  /* 0C08D6FE mov.w @(disp,pc),Rn */
	IF(0x0C08D700u); { u32 tv_ = (r4 + 0x0C08D704u); u32 t_ = PHYS(tv_); W32(r9 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C638u: goto L_0C08C638; default: JUMPD(tv_); } }  /* 0C08D700 braf Rn */
L_0C08D710: BLKS(0x0C08D710u);
	r5 = 0xB4u; UPD(0x0C08D712u, 1);  /* 0C08D710 mov.w @(disp,pc),Rn */
	IF(0x0C08D712u); MACL = r13 * r5;  /* 0C08D712 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C08D716u, 3);  /* 0C08D714 mov.l @(disp,pc),Rn */
	IF(0x0C08D716u); r2 = MACL;  /* 0C08D716 sts macl,Rn */
	{ r2 += r10; /* slot add Rm,Rn */ UPD(0x0C08D390u, 4); goto L_0C08D390; }  /* 0C08D718 bra */
L_0C08D720: BLKS(0x0C08D720u);
	r8 = 0xC0A0540u; UPD(0x0C08D722u, 1);  /* 0C08D720 mov.l @(disp,pc),Rn */
	IF(0x0C08D722u); { u32 t_ = r8; PR = 0x0C08D726u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C08D726u); }  /* 0C08D722 jsr @Rn */
L_0C08D726: BLKS(0x0C08D726u);
	IF(0x0C08D726u); T = (s32)r0 >= 0;  /* 0C08D726 cmp/pz Rn */
	if (T) { UPD(0x0C08D732u, 4); goto L_0C08D732; }  /* 0C08D728 bt */
L_0C08D72A: BLKS(0x0C08D72Au);
	r1 = 0xFFFFEBA0u; UPD(0x0C08D72Cu, 1);  /* 0C08D72A mov.w @(disp,pc),Rn */
	IF(0x0C08D72Cu); { u32 tv_ = (r1 + 0x0C08D730u); u32 t_ = PHYS(tv_); IF(0x0C08D72Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C2D0u: goto L_0C08C2D0; default: JUMPD(tv_); } }  /* 0C08D72C braf Rn */
L_0C08D732: BLKS(0x0C08D732u);
	r1 = 0xB4u; UPD(0x0C08D734u, 1);  /* 0C08D732 mov.w @(disp,pc),Rn */
	IF(0x0C08D734u); MACL = r0 * r1;  /* 0C08D734 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C08D738u, 3);  /* 0C08D736 mov.l @(disp,pc),Rn */
	IF(0x0C08D738u); r7 = MACL;  /* 0C08D738 sts macl,Rn */
	r7 += r2;  /* 0C08D73A add Rm,Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C08D73Eu, 3);  /* 0C08D73C mov.l @(disp,Rm),Rn */
	T = r0 == 0x1Fu;  /* 0C08D73E cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C08D742u); MACL = r13 * r1; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C08D7A0u, 5); goto L_0C08D7A0; } goto L_0C08D744; }  /* 0C08D740 bt/s */
L_0C08D744: BLKS(0x0C08D744u);
	r4 = 0x2000000u; UPD(0x0C08D746u, 3);  /* 0C08D744 mov.l @(disp,pc),Rn */
	IF(0x0C08D746u); r0 = MACL;  /* 0C08D746 sts macl,Rn */
	r0 += r2;  /* 0C08D748 add Rm,Rn */
	r12 = R32(r0); UPD(0x0C08D74Cu, 3);  /* 0C08D74A mov.l @Rm,Rn */
	r1 = 0xFFFFFEFFu; UPD(0x0C08D74Eu, 1);  /* 0C08D74C mov.w @(disp,pc),Rn */
	r5 = 0x86u; UPD(0x0C08D750u, 1);  /* 0C08D74E mov.w @(disp,pc),Rn */
	r12 &= r1;  /* 0C08D750 and Rm,Rn */
	r11 = 0x100u; UPD(0x0C08D754u, 2);  /* 0C08D752 mov.w @(disp,pc),Rn */
	W32(r0 + 0x24u, r4); UPD(0x0C08D756u, 1);  /* 0C08D754 mov.l Rm,@(disp,Rn) */
	IF(0x0C08D756u); W16(r0 + r5, r11); UPD(0x0C08D758u, 1);  /* 0C08D756 mov.w Rm,@(r0,Rn) */
	r13 = 0xFFFFEAAAu; UPD(0x0C08D75Au, 1);  /* 0C08D758 mov.w @(disp,pc),Rn */
	IF(0x0C08D75Au); { u32 tv_ = (r13 + 0x0C08D75Eu); u32 t_ = PHYS(tv_); W32(r0, r12); /* slot mov.l Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C208u: goto L_0C08C208; default: JUMPD(tv_); } }  /* 0C08D75A braf Rn */
L_0C08D7A0: BLKS(0x0C08D7A0u);
	IF(0x0C08D7A0u); MACL = r13 * r1;  /* 0C08D7A0 mul.l Rm,Rn */
	r6 = R32(r7 + 0x28u); UPD(0x0C08D7A4u, 3);  /* 0C08D7A2 mov.l @(disp,Rm),Rn */
	IF(0x0C08D7A4u); r8 = MACL;  /* 0C08D7A4 sts macl,Rn */
	r8 += r2;  /* 0C08D7A6 add Rm,Rn */
	r5 = R32(r8); UPD(0x0C08D7AAu, 3);  /* 0C08D7A8 mov.l @Rm,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C08D7ACu, 1);  /* 0C08D7AA mov.l @(disp,pc),Rn */
	r5 &= r2;  /* 0C08D7AC and Rm,Rn */
	W32(r8, r5); UPD(0x0C08D7B0u, 2);  /* 0C08D7AE mov.l Rm,@Rn */
	r0 = R32(r8 + 0x30u); UPD(0x0C08D7B2u, 1);  /* 0C08D7B0 mov.l @(disp,Rm),Rn */
	r11 = R32(r7); UPD(0x0C08D7B4u, 1);  /* 0C08D7B2 mov.l @Rm,Rn */
	r6 += r0;  /* 0C08D7B4 add Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C08D7B8u, 2);  /* 0C08D7B6 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C08D7B8 mov Rm,Rn */
	r10 = R32(r7 + 0x24u); UPD(0x0C08D7BCu, 2);  /* 0C08D7BA mov.l @(disp,Rm),Rn */
	r11 &= r1;  /* 0C08D7BC and Rm,Rn */
	r12 = R32(r8 + 0x2Cu); UPD(0x0C08D7C0u, 2);  /* 0C08D7BE mov.l @(disp,Rm),Rn */
	r5 |= r11;  /* 0C08D7C0 or Rm,Rn */
	r3 = 0x9Fu; UPD(0x0C08D7C4u, 2);  /* 0C08D7C2 mov.w @(disp,pc),Rn */
	r10 += r12;  /* 0C08D7C4 add Rm,Rn */
	IF(0x0C08D7C6u); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08D7C8u, 2);  /* 0C08D7C6 mov.b @(r0,Rm),Rn */
	W32(r8, r5); UPD(0x0C08D7CAu, 1);  /* 0C08D7C8 mov.l Rm,@Rn */
	T = (r9 & r9) == 0;  /* 0C08D7CA tst Rm,Rn */
	W32(r8 + 0x24u, r10); UPD(0x0C08D7CEu, 2);  /* 0C08D7CC mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r8 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08D830u, 3); goto L_0C08D830; } UPD(0x0C08D7D2u, 1); goto L_0C08D7D2; }  /* 0C08D7CE bt/s */
L_0C08D7D2: BLKS(0x0C08D7D2u);
	r4 = 0x86u; UPD(0x0C08D7D4u, 1);  /* 0C08D7D2 mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C08D7D4 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C08D7D8u, 2);  /* 0C08D7D6 mov.w @Rm,Rn */
	r5 = 0x100u; UPD(0x0C08D7DAu, 1);  /* 0C08D7D8 mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)r3;  /* 0C08D7DA exts.w Rm,Rn */
	T = r6 == r5;  /* 0C08D7DC cmp/eq Rm,Rn */
	{ u32 c_ = T; r11 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08D820u, 5); goto L_0C08D820; } UPD(0x0C08D7E2u, 1); goto L_0C08D7E2; }  /* 0C08D7DE bt/s */
L_0C08D7E2: BLKS(0x0C08D7E2u);
	T = (s32)r6 > (s32)r5;  /* 0C08D7E2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08D7EEu, 4); goto L_0C08D7EE; } goto L_0C08D7E8; }  /* 0C08D7E4 bf/s */
L_0C08D7E8: BLKS(0x0C08D7E8u);
	r7 += 0xFFFFFFFFu;  /* 0C08D7E8 add #imm,Rn */
	W16(r4, r7); UPD(0x0C08D7ECu, 3);  /* 0C08D7EA mov.w Rm,@Rn */
	r3 = r7;  /* 0C08D7EC mov Rm,Rn */
	UPD(0x0C08D7EEu, 1);
L_0C08D7EE: BLKS(0x0C08D7EEu);
	r0 = 0xFFu; UPD(0x0C08D7F0u, 1);  /* 0C08D7EE mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r3;  /* 0C08D7F0 exts.w Rm,Rn */
	T = (s32)r5 > (s32)r0;  /* 0C08D7F2 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C08D7FCu, 5); goto L_0C08D7FC; }  /* 0C08D7F4 bt */
L_0C08D7F6: BLKS(0x0C08D7F6u);
	r2 = r3;  /* 0C08D7F6 mov Rm,Rn */
	r2 += 0x1u;  /* 0C08D7F8 add #imm,Rn */
	W16(r4, r2); UPD(0x0C08D7FCu, 3);  /* 0C08D7FA mov.w Rm,@Rn */
L_0C08D7FC: BLKS(0x0C08D7FCu);
	r4 = 0xB4u; UPD(0x0C08D7FEu, 1);  /* 0C08D7FC mov.w @(disp,pc),Rn */
	r8 = 0x1Fu;  /* 0C08D7FE mov #imm,Rn */
	IF(0x0C08D800u); MACL = r13 * r4;  /* 0C08D800 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C08D804u, 4);  /* 0C08D802 mov.l @(disp,pc),Rn */
	IF(0x0C08D804u); r2 = MACL;  /* 0C08D804 sts macl,Rn */
	r2 += r10;  /* 0C08D806 add Rm,Rn */
	r9 = 0x86u; UPD(0x0C08D80Au, 3);  /* 0C08D808 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C08D80A mov Rm,Rn */
	IF(0x0C08D80Cu); r1 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C08D80Eu, 2);  /* 0C08D80C mov.w @(r0,Rm),Rn */
	r1 += 0x8u;  /* 0C08D80E add #imm,Rn */
	IF(0x0C08D810u); r1 >>= 2;  /* 0C08D810 shlr2 Rn */
	IF(0x0C08D812u); r1 >>= 2;  /* 0C08D812 shlr2 Rn */
	r4 = 0xFFFFEE6Au; UPD(0x0C08D816u, 4);  /* 0C08D814 mov.w @(disp,pc),Rn */
	IF(0x0C08D816u); { u32 tv_ = (r4 + 0x0C08D81Au); u32 t_ = PHYS(tv_); r1 &= r8; /* slot and Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C684u: goto L_0C08C684; default: JUMPD(tv_); } }  /* 0C08D816 braf Rn */
L_0C08D820: BLKS(0x0C08D820u);
	r12 = 0x9Au; UPD(0x0C08D822u, 1);  /* 0C08D820 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C08D822 mov Rm,Rn */
	{ IF(0x0C08D826u); W8(r0 + r12, r11); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C08D7E2u, 4); goto L_0C08D7E2; }  /* 0C08D824 bra */
L_0C08D830: BLKS(0x0C08D830u);
	r10 = 0xC058130u; UPD(0x0C08D832u, 1);  /* 0C08D830 mov.l @(disp,pc),Rn */
	r9 = 0xC057430u; UPD(0x0C08D834u, 1);  /* 0C08D832 mov.l @(disp,pc),Rn */
	IF(0x0C08D834u); { u32 t_ = r10; PR = 0x0C08D838u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C08D838u); }  /* 0C08D834 jsr @Rn */
L_0C08D838: BLKS(0x0C08D838u);
	r4 = r13;  /* 0C08D838 mov Rm,Rn */
	IF(0x0C08D83Au); { u32 t_ = r9; PR = 0x0C08D83Eu; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C08D83Eu); }  /* 0C08D83A jsr @Rn */
L_0C08D83E: BLKS(0x0C08D83Eu);
	r7 = 0x86u; UPD(0x0C08D840u, 1);  /* 0C08D83E mov.w @(disp,pc),Rn */
	r7 += r8;  /* 0C08D840 add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r7); UPD(0x0C08D844u, 2);  /* 0C08D842 mov.w @Rm,Rn */
	r6 = 0x160u; UPD(0x0C08D846u, 1);  /* 0C08D844 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C08D846 exts.w Rm,Rn */
	r3 = (u32)(s32)(s16)r6;  /* 0C08D848 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r3;  /* 0C08D84A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08D852u, 6); goto L_0C08D852; }  /* 0C08D84C bf */
L_0C08D84E: BLKS(0x0C08D84Eu);
	W16(r7, r3); UPD(0x0C08D850u, 1);  /* 0C08D84E mov.w Rm,@Rn */
	r2 = r6;  /* 0C08D850 mov Rm,Rn */
	UPD(0x0C08D852u, 1);
L_0C08D852: BLKS(0x0C08D852u);
	r4 = 0x9Fu; UPD(0x0C08D854u, 1);  /* 0C08D852 mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r2;  /* 0C08D854 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r4;  /* 0C08D856 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C08D7FCu, 5); goto L_0C08D7FC; }  /* 0C08D858 bt */
L_0C08D85A: BLKS(0x0C08D85Au);
	r6 = 0xA0u; UPD(0x0C08D85Cu, 1);  /* 0C08D85A mov.w @(disp,pc),Rn */
	{ W16(r7, r6); /* slot mov.w Rm,@Rn */ UPD(0x0C08D7FCu, 3); goto L_0C08D7FC; }  /* 0C08D85C bra */
L_0C08D860: BLKS(0x0C08D860u);
	r12 = 0xC0A0540u; UPD(0x0C08D862u, 1);  /* 0C08D860 mov.l @(disp,pc),Rn */
	IF(0x0C08D862u); { u32 t_ = r12; PR = 0x0C08D866u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C08D866u); }  /* 0C08D862 jsr @Rn */
L_0C08D866: BLKS(0x0C08D866u);
	IF(0x0C08D866u); T = (s32)r0 >= 0;  /* 0C08D866 cmp/pz Rn */
	if (!T) { UPD(0x0C08D90Cu, 4); goto L_0C08D90C; }  /* 0C08D868 bf */
L_0C08D86A: BLKS(0x0C08D86Au);
	r10 = 0xB4u; UPD(0x0C08D86Cu, 1);  /* 0C08D86A mov.w @(disp,pc),Rn */
	IF(0x0C08D86Cu); MACL = r13 * r10;  /* 0C08D86C mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C08D870u, 3);  /* 0C08D86E mov.l @(disp,pc),Rn */
	IF(0x0C08D870u); r8 = MACL;  /* 0C08D870 sts macl,Rn */
	r8 += r11;  /* 0C08D872 add Rm,Rn */
	r4 = R32(r8); UPD(0x0C08D876u, 3);  /* 0C08D874 mov.l @Rm,Rn */
	IF(0x0C08D876u); MACL = r0 * r10;  /* 0C08D876 mul.l Rm,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C08D87Au, 3);  /* 0C08D878 mov.l @(disp,pc),Rn */
	r4 &= r2;  /* 0C08D87A and Rm,Rn */
	W32(r8, r4); UPD(0x0C08D87Eu, 2);  /* 0C08D87C mov.l Rm,@Rn */
	IF(0x0C08D87Eu); r10 = MACL;  /* 0C08D87E sts macl,Rn */
	r10 += r11;  /* 0C08D880 add Rm,Rn */
	r5 = 0x84u; UPD(0x0C08D884u, 3);  /* 0C08D882 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08D884 mov Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C08D888u, 2);  /* 0C08D886 mov.l @(disp,pc),Rn */
	r0 += r5;  /* 0C08D888 add Rm,Rn */
	r3 = R32(r10); UPD(0x0C08D88Cu, 2);  /* 0C08D88A mov.l @Rm,Rn */
	r5 += r10;  /* 0C08D88C add Rm,Rn */
	r3 &= r1;  /* 0C08D88E and Rm,Rn */
	r4 |= r3;  /* 0C08D890 or Rm,Rn */
	r5 += 0x2u;  /* 0C08D892 add #imm,Rn */
	r12 = 0xC058060u; UPD(0x0C08D896u, 5);  /* 0C08D894 mov.l @(disp,pc),Rn */
	r0 += 0x2u;  /* 0C08D896 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r5); UPD(0x0C08D89Au, 2);  /* 0C08D898 mov.w @Rm,Rn */
	W32(r8, r4); UPD(0x0C08D89Cu, 1);  /* 0C08D89A mov.l Rm,@Rn */
	r9 = r7;  /* 0C08D89C mov Rm,Rn */
	r4 = r7;  /* 0C08D89E mov Rm,Rn */
	W16(r0, r7); UPD(0x0C08D8A2u, 3);  /* 0C08D8A0 mov.w Rm,@Rn */
	IF(0x0C08D8A2u); { u32 t_ = r12; PR = 0x0C08D8A6u; r5 = R32(r8 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C08D8A6u); }  /* 0C08D8A2 jsr @Rn */
L_0C08D8A6: BLKS(0x0C08D8A6u);
	r6 = R32(r10 + 0x24u); UPD(0x0C08D8A8u, 1);  /* 0C08D8A6 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C08D8A8 mov Rm,Rn */
	r11 = 0xC058030u; UPD(0x0C08D8ACu, 2);  /* 0C08D8AA mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C08D8AC add Rm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C08D8B0u, 2);  /* 0C08D8AE mov.l Rm,@(disp,Rn) */
	IF(0x0C08D8B0u); { u32 t_ = r11; PR = 0x0C08D8B4u; r5 = R32(r8 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C08D8B4u); }  /* 0C08D8B0 jsr @Rn */
L_0C08D8B4: BLKS(0x0C08D8B4u);
	r3 = R32(r10 + 0x28u); UPD(0x0C08D8B6u, 1);  /* 0C08D8B4 mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C08D8B6 add Rm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C08D8BAu, 2);  /* 0C08D8B8 mov.l Rm,@(disp,Rn) */
	r1 = R32(r10 + 0xCu); UPD(0x0C08D8BCu, 1);  /* 0C08D8BA mov.l @(disp,Rm),Rn */
L_0C08D8BC: BLKS(0x0C08D8BCu);
	r4 = 0xFFFFED76u; UPD(0x0C08D8BEu, 1);  /* 0C08D8BC mov.w @(disp,pc),Rn */
	IF(0x0C08D8BEu); { u32 tv_ = (r4 + 0x0C08D8C2u); u32 t_ = PHYS(tv_); W32(r8 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C638u: goto L_0C08C638; default: JUMPD(tv_); } }  /* 0C08D8BE braf Rn */
L_0C08D900: BLKS(0x0C08D900u);
	r8 = 0xC0A0540u; UPD(0x0C08D902u, 1);  /* 0C08D900 mov.l @(disp,pc),Rn */
	IF(0x0C08D902u); { u32 t_ = r8; PR = 0x0C08D906u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C08D906u); }  /* 0C08D902 jsr @Rn */
L_0C08D906: BLKS(0x0C08D906u);
	IF(0x0C08D906u); T = (s32)r0 >= 0;  /* 0C08D906 cmp/pz Rn */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08D914u, 4); goto L_0C08D914; } UPD(0x0C08D90Cu, 1); goto L_0C08D90C; }  /* 0C08D908 bt/s */
L_0C08D90C: BLKS(0x0C08D90Cu);
	r1 = 0xFFFFE9BEu; UPD(0x0C08D90Eu, 1);  /* 0C08D90C mov.w @(disp,pc),Rn */
	IF(0x0C08D90Eu); { u32 tv_ = (r1 + 0x0C08D912u); u32 t_ = PHYS(tv_); IF(0x0C08D910u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C2D0u: goto L_0C08C2D0; default: JUMPD(tv_); } }  /* 0C08D90E braf Rn */
L_0C08D914: BLKS(0x0C08D914u);
	r5 = 0xB4u; UPD(0x0C08D916u, 1);  /* 0C08D914 mov.w @(disp,pc),Rn */
	IF(0x0C08D916u); MACL = r13 * r5;  /* 0C08D916 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C08D91Au, 3);  /* 0C08D918 mov.l @(disp,pc),Rn */
	IF(0x0C08D91Au); r8 = MACL;  /* 0C08D91A sts macl,Rn */
	r8 += r0;  /* 0C08D91C add Rm,Rn */
	r4 = R32(r8); UPD(0x0C08D920u, 3);  /* 0C08D91E mov.l @Rm,Rn */
	IF(0x0C08D920u); MACL = r12 * r5;  /* 0C08D920 mul.l Rm,Rn */
	r9 = 0xECFFFEFFu; UPD(0x0C08D924u, 3);  /* 0C08D922 mov.l @(disp,pc),Rn */
	r4 &= r9;  /* 0C08D924 and Rm,Rn */
	W32(r8, r4); UPD(0x0C08D928u, 2);  /* 0C08D926 mov.l Rm,@Rn */
	IF(0x0C08D928u); r9 = MACL;  /* 0C08D928 sts macl,Rn */
	r9 += r0;  /* 0C08D92A add Rm,Rn */
	r3 = R32(r9); UPD(0x0C08D92Eu, 3);  /* 0C08D92C mov.l @Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C08D930u, 1);  /* 0C08D92E mov.l @(disp,pc),Rn */
	r3 &= r1;  /* 0C08D930 and Rm,Rn */
	r4 |= r3;  /* 0C08D932 or Rm,Rn */
	W32(r8, r4); UPD(0x0C08D936u, 3);  /* 0C08D934 mov.l Rm,@Rn */
	r8 += 0x7Eu;  /* 0C08D936 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C08D93Au, 2);  /* 0C08D938 mov.w @Rm,Rn */
	IF(0x0C08D93Au); MACL = r7 * r5;  /* 0C08D93A mul.l Rm,Rn */
	IF(0x0C08D93Cu); r12 = MACL;  /* 0C08D93C sts macl,Rn */
	r12 += r0;  /* 0C08D93E add Rm,Rn */
	r12 += 0x3Cu;  /* 0C08D940 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r12); UPD(0x0C08D944u, 6);  /* 0C08D942 mov.w @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C08D944 tst Rm,Rn */
	{ u32 c_ = T; r8 += 0xFFFFFF82u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08D9C8u, 4); goto L_0C08D9C8; } goto L_0C08D94A; }  /* 0C08D946 bt/s */
L_0C08D94A: BLKS(0x0C08D94Au);
	r0 = 0x84u; UPD(0x0C08D94Cu, 2);  /* 0C08D94A mov.w @(disp,pc),Rn */
	r10 = r8;  /* 0C08D94C mov Rm,Rn */
	r10 += r0;  /* 0C08D94E add Rm,Rn */
	r0 += r9;  /* 0C08D950 add Rm,Rn */
	r0 += 0x2u;  /* 0C08D952 add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r0); UPD(0x0C08D956u, 5);  /* 0C08D954 mov.w @Rm,Rn */
	r10 += 0x2u;  /* 0C08D956 add #imm,Rn */
	W16(r10, r12); UPD(0x0C08D95Au, 2);  /* 0C08D958 mov.w Rm,@Rn */
	r11 = r12;  /* 0C08D95A mov Rm,Rn */
	r12 = 0xC058060u; UPD(0x0C08D95Eu, 2);  /* 0C08D95C mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C08D95E mov Rm,Rn */
	IF(0x0C08D960u); { u32 t_ = r12; PR = 0x0C08D964u; r5 = R32(r8 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C08D964u); }  /* 0C08D960 jsr @Rn */
L_0C08D964: BLKS(0x0C08D964u);
	r5 = R32(r9 + 0x24u); UPD(0x0C08D966u, 1);  /* 0C08D964 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C08D966 mov Rm,Rn */
	r5 += r0;  /* 0C08D968 add Rm,Rn */
	r7 = 0xC058030u; UPD(0x0C08D96Cu, 3);  /* 0C08D96A mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C08D96Eu, 1);  /* 0C08D96C mov.l Rm,@(disp,Rn) */
	IF(0x0C08D96Eu); { u32 t_ = r7; PR = 0x0C08D972u; r5 = R32(r8 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C08D972u); }  /* 0C08D96E jsr @Rn */
L_0C08D972: BLKS(0x0C08D972u);
	r6 = R32(r9 + 0x28u); UPD(0x0C08D974u, 1);  /* 0C08D972 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C08D974 mov Rm,Rn */
	r11 = 0xC0A0380u; UPD(0x0C08D978u, 2);  /* 0C08D976 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C08D978 add Rm,Rn */
	r2 = R32(r9 + 0xCu); UPD(0x0C08D97Cu, 2);  /* 0C08D97A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C08D97Eu, 1);  /* 0C08D97C mov.l Rm,@(disp,Rn) */
	IF(0x0C08D97Eu); { u32 t_ = r11; PR = 0x0C08D982u; W32(r8 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08D982u); }  /* 0C08D97E jsr @Rn */
L_0C08D982: BLKS(0x0C08D982u);
	r4 = r13;  /* 0C08D982 mov Rm,Rn */
	r13 = 0xC0A9E40u; UPD(0x0C08D986u, 2);  /* 0C08D984 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C08D986 mov #imm,Rn */
	IF(0x0C08D988u); { u32 t_ = r13; PR = 0x0C08D98Cu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C08D98Cu); }  /* 0C08D988 jsr @Rn */
L_0C08D98C: BLKS(0x0C08D98Cu);
	T = (r0 & r0) == 0;  /* 0C08D98C tst Rm,Rn */
	if (T) { UPD(0x0C08D9C8u, 4); goto L_0C08D9C8; }  /* 0C08D98E bt */
L_0C08D990: BLKS(0x0C08D990u);
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C08D992u, 1);  /* 0C08D990 mov.w @Rm,Rn */
	r5 = 0x80000u; UPD(0x0C08D994u, 1);  /* 0C08D992 mov.l @(disp,pc),Rn */
	IF(0x0C08D994u); { u32 t_ = r12; PR = 0x0C08D998u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C08D998u); }  /* 0C08D994 jsr @Rn */
L_0C08D998: BLKS(0x0C08D998u);
	r13 = R32(r8 + 0x24u); UPD(0x0C08D99Au, 1);  /* 0C08D998 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C08D99A mov Rm,Rn */
	r1 = 0xC058030u; UPD(0x0C08D99Eu, 2);  /* 0C08D99C mov.l @(disp,pc),Rn */
	r13 += r0;  /* 0C08D99E add Rm,Rn */
	r5 = 0xA0000u; UPD(0x0C08D9A2u, 2);  /* 0C08D9A0 mov.l @(disp,pc),Rn */
	IF(0x0C08D9A2u); { u32 t_ = r1; PR = 0x0C08D9A6u; W32(r14 + 0x4u, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C08D9A6u); }  /* 0C08D9A2 jsr @Rn */
L_0C08D9A6: BLKS(0x0C08D9A6u);
	r6 = R32(r8 + 0x28u); UPD(0x0C08D9A8u, 1);  /* 0C08D9A6 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08D9A8 add #imm,Rn */
	r3 = 0x20000u; UPD(0x0C08D9ACu, 2);  /* 0C08D9AA mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C08D9AC add Rm,Rn */
	W32(r15, r3); UPD(0x0C08D9B0u, 2);  /* 0C08D9AE mov.l Rm,@Rn */
	r7 = r9;  /* 0C08D9B0 mov Rm,Rn */
	r0 = 0xA1u; UPD(0x0C08D9B4u, 2);  /* 0C08D9B2 mov.w @(disp,pc),Rn */
	IF(0x0C08D9B4u); r0 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08D9B6u, 1);  /* 0C08D9B4 mov.b @(r0,Rm),Rn */
	r4 = 0xC1BB91Cu; UPD(0x0C08D9B8u, 1);  /* 0C08D9B6 mov.l @(disp,pc),Rn */
	IF(0x0C08D9B8u); r0 <<= 2;  /* 0C08D9B8 shll2 Rn */
	IF(0x0C08D9BAu); r8 = R32(r0 + r4); UPD(0x0C08D9BCu, 2);  /* 0C08D9BA mov.l @(r0,Rm),Rn */
	r10 = 0xC7C1710u; UPD(0x0C08D9BEu, 1);  /* 0C08D9BC mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C08D9BE mov #imm,Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C08D9C2u, 2);  /* 0C08D9C0 mov.l Rm,@(disp,Rn) */
	IF(0x0C08D9C2u); { u32 t_ = r10; PR = 0x0C08D9C6u; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1710, 0x0C7C1710u, 0x0C08D9C6u); }  /* 0C08D9C2 jsr @Rn */
L_0C08D9C6: BLKS(0x0C08D9C6u);
	r15 += 0x8u;  /* 0C08D9C6 add #imm,Rn */
	UPD(0x0C08D9C8u, 1);
L_0C08D9C8: BLKS(0x0C08D9C8u);
	r13 = 0xFFFFE83Cu; UPD(0x0C08D9CAu, 1);  /* 0C08D9C8 mov.w @(disp,pc),Rn */
	IF(0x0C08D9CAu); { u32 tv_ = (r13 + 0x0C08D9CEu); u32 t_ = PHYS(tv_); r14 += 0x28u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C20Au: goto L_0C08C20A; default: JUMPD(tv_); } }  /* 0C08D9CA braf Rn */
L_0C08D9D0: BLKS(0x0C08D9D0u);
	r11 = 0xC0A0490u; UPD(0x0C08D9D2u, 1);  /* 0C08D9D0 mov.l @(disp,pc),Rn */
	IF(0x0C08D9D2u); { u32 t_ = r11; PR = 0x0C08D9D6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C08D9D6u); }  /* 0C08D9D2 jsr @Rn */
L_0C08D9D6: BLKS(0x0C08D9D6u);
	IF(0x0C08D9D6u); T = (s32)r0 >= 0;  /* 0C08D9D6 cmp/pz Rn */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08D9E4u, 4); goto L_0C08D9E4; } goto L_0C08D9DC; }  /* 0C08D9D8 bt/s */
L_0C08D9DC: BLKS(0x0C08D9DCu);
	r1 = 0xFFFFE8EEu; UPD(0x0C08D9DEu, 2);  /* 0C08D9DC mov.w @(disp,pc),Rn */
	IF(0x0C08D9DEu); { u32 tv_ = (r1 + 0x0C08D9E2u); u32 t_ = PHYS(tv_); IF(0x0C08D9E0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C2D0u: goto L_0C08C2D0; default: JUMPD(tv_); } }  /* 0C08D9DE braf Rn */
L_0C08D9E4: BLKS(0x0C08D9E4u);
	r6 = 0xB4u; UPD(0x0C08D9E6u, 1);  /* 0C08D9E4 mov.w @(disp,pc),Rn */
	IF(0x0C08D9E6u); MACL = r13 * r6;  /* 0C08D9E6 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C08D9EAu, 3);  /* 0C08D9E8 mov.l @(disp,pc),Rn */
	IF(0x0C08D9EAu); r0 = MACL;  /* 0C08D9EA sts macl,Rn */
	IF(0x0C08D9ECu); MACL = r12 * r6;  /* 0C08D9EC mul.l Rm,Rn */
	r0 += r5;  /* 0C08D9EE add Rm,Rn */
	r2 = R32(r0 + 0x30u); UPD(0x0C08D9F2u, 5);  /* 0C08D9F0 mov.l @(disp,Rm),Rn */
	IF(0x0C08D9F2u); r10 = MACL;  /* 0C08D9F2 sts macl,Rn */
	r10 += r5;  /* 0C08D9F4 add Rm,Rn */
	r9 = R32(r10 + 0x24u); UPD(0x0C08D9F8u, 3);  /* 0C08D9F6 mov.l @(disp,Rm),Rn */
	r8 = R32(r0 + 0x2Cu); UPD(0x0C08D9FAu, 1);  /* 0C08D9F8 mov.l @(disp,Rm),Rn */
	r12 = R32(r10 + 0x28u); UPD(0x0C08D9FCu, 1);  /* 0C08D9FA mov.l @(disp,Rm),Rn */
	r9 += r8;  /* 0C08D9FC add Rm,Rn */
	r12 += r2;  /* 0C08D9FE add Rm,Rn */
	W32(r0 + 0x24u, r9); UPD(0x0C08DA02u, 3);  /* 0C08DA00 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x28u, r12); UPD(0x0C08DA04u, 1);  /* 0C08DA02 mov.l Rm,@(disp,Rn) */
	r0 += 0x7Eu;  /* 0C08DA04 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C08DA08u, 2);  /* 0C08DA06 mov.w @Rm,Rn */
	r2 = 0xA0u; UPD(0x0C08DA0Au, 1);  /* 0C08DA08 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C08DA0A add #imm,Rn */
	r0 += r2;  /* 0C08DA0C add Rm,Rn */
	r0 += 0x2u;  /* 0C08DA0E add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r0); UPD(0x0C08DA12u, 4);  /* 0C08DA10 mov.b @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C08DA12 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C08DA16u); MACL = r3 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C08DA1Cu, 5); goto L_0C08DA1C; } goto L_0C08DA18; }  /* 0C08DA14 bf/s */
L_0C08DA18: BLKS(0x0C08DA18u);
	{ IF(0x0C08DA1Au); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C08DB10u, 5); goto L_0C08DB10; }  /* 0C08DA18 bra */
L_0C08DA1C: BLKS(0x0C08DA1Cu);
	IF(0x0C08DA1Cu); MACL = r3 * r6;  /* 0C08DA1C mul.l Rm,Rn */
	IF(0x0C08DA1Eu); r1 = MACL;  /* 0C08DA1E sts macl,Rn */
	r1 += r5;  /* 0C08DA20 add Rm,Rn */
	r1 += r2;  /* 0C08DA22 add Rm,Rn */
	r1 += 0x2u;  /* 0C08DA24 add #imm,Rn */
	UPD(0x0C08DA26u, 6);
L_0C08DA26: BLKS(0x0C08DA26u);
	r5 = 0xB4u; UPD(0x0C08DA28u, 1);  /* 0C08DA26 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C08DA2Au, 1);  /* 0C08DA28 mov.b @Rm,Rn */
	IF(0x0C08DA2Au); MACL = r13 * r5;  /* 0C08DA2A mul.l Rm,Rn */
	W32(r14, r4); UPD(0x0C08DA2Eu, 3);  /* 0C08DA2C mov.l Rm,@Rn */
	r6 = 0xC26CD40u; UPD(0x0C08DA30u, 1);  /* 0C08DA2E mov.l @(disp,pc),Rn */
	IF(0x0C08DA30u); r9 = MACL;  /* 0C08DA30 sts macl,Rn */
	r0 = R32(r14); UPD(0x0C08DA34u, 2);  /* 0C08DA32 mov.l @Rm,Rn */
	r9 += r6;  /* 0C08DA34 add Rm,Rn */
	r0 &= 0x8u;  /* 0C08DA36 and #imm,r0 */
	r8 = R32(r9 + 0xCu); UPD(0x0C08DA3Au, 3);  /* 0C08DA38 mov.l @(disp,Rm),Rn */
	T = (r8 & r8) == 0;  /* 0C08DA3A tst Rm,Rn */
	{ u32 c_ = T; W32(r14, r0); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C08DAD0u, 4); goto L_0C08DAD0; } UPD(0x0C08DA40u, 1); goto L_0C08DA40; }  /* 0C08DA3C bt/s */
L_0C08DA40: BLKS(0x0C08DA40u);
	r0 = r8;  /* 0C08DA40 mov Rm,Rn */
	T = r0 == 0x7u;  /* 0C08DA42 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C08DA70u, 5); goto L_0C08DA70; }  /* 0C08DA44 bt */
L_0C08DA46: BLKS(0x0C08DA46u);
	r8 = 0xB4u; UPD(0x0C08DA48u, 1);  /* 0C08DA46 mov.w @(disp,pc),Rn */
	IF(0x0C08DA48u); MACL = r13 * r8;  /* 0C08DA48 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C08DA4Cu, 3);  /* 0C08DA4A mov.l @(disp,pc),Rn */
	IF(0x0C08DA4Cu); r2 = MACL;  /* 0C08DA4C sts macl,Rn */
	r3 = 0x99u; UPD(0x0C08DA50u, 2);  /* 0C08DA4E mov.w @(disp,pc),Rn */
	r2 += r0;  /* 0C08DA50 add Rm,Rn */
	r3 += r2;  /* 0C08DA52 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r3); UPD(0x0C08DA56u, 3);  /* 0C08DA54 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C08DA56 add #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C08DA58 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C08DA5A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08D9C8u, 6); goto L_0C08D9C8; } UPD(0x0C08DA60u, 1); goto L_0C08DA60; }  /* 0C08DA5C bf/s */
L_0C08DA60: BLKS(0x0C08DA60u);
	r6 = 0x0u;  /* 0C08DA60 mov #imm,Rn */
	r1 = 0xFFFFEC18u; UPD(0x0C08DA64u, 2);  /* 0C08DA62 mov.w @(disp,pc),Rn */
	IF(0x0C08DA64u); { u32 tv_ = (r1 + 0x0C08DA68u); u32 t_ = PHYS(tv_); W8(r3, r6); /* slot mov.b Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C680u: goto L_0C08C680; default: JUMPD(tv_); } }  /* 0C08DA64 braf Rn */
L_0C08DA70: BLKS(0x0C08DA70u);
	r2 = 0x99u; UPD(0x0C08DA72u, 1);  /* 0C08DA70 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C08DA72 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C08DA76u, 2);  /* 0C08DA74 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C08DA76 add #imm,Rn */
	r0 = r5 & 0xFF;  /* 0C08DA78 extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C08DA7A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08D9C8u, 6); goto L_0C08D9C8; } UPD(0x0C08DA80u, 1); goto L_0C08DA80; }  /* 0C08DA7C bf/s */
L_0C08DA80: BLKS(0x0C08DA80u);
	r4 = 0x0u;  /* 0C08DA80 mov #imm,Rn */
	W8(r2, r4); UPD(0x0C08DA84u, 2);  /* 0C08DA82 mov.b Rm,@Rn */
	{ r1 = 0x6u; /* slot mov #imm,Rn */ UPD(0x0C08D6FEu, 3); goto L_0C08D6FE; }  /* 0C08DA84 bra */
L_0C08DAD0: BLKS(0x0C08DAD0u);
	r3 = R32(r14); UPD(0x0C08DAD2u, 1);  /* 0C08DAD0 mov.l @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C08DAD2 tst Rm,Rn */
	if (!T) { UPD(0x0C08DAE0u, 4); goto L_0C08DAE0; }  /* 0C08DAD4 bf */
L_0C08DAD6: BLKS(0x0C08DAD6u);
	r14 += 0x28u;  /* 0C08DAD6 add #imm,Rn */
	r13 = 0xFFFFE72Cu; UPD(0x0C08DADAu, 2);  /* 0C08DAD8 mov.w @(disp,pc),Rn */
	IF(0x0C08DADAu); { u32 tv_ = (r13 + 0x0C08DADEu); u32 t_ = PHYS(tv_); IF(0x0C08DADCu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C20Au: goto L_0C08C20A; default: JUMPD(tv_); } }  /* 0C08DADA braf Rn */
L_0C08DAE0: BLKS(0x0C08DAE0u);
	r10 = 0xC050D70u; UPD(0x0C08DAE2u, 1);  /* 0C08DAE0 mov.l @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C08DAE2 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C08DAE6u, 2);  /* 0C08DAE4 mov.w @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C08DAE6 mov #imm,Rn */
	IF(0x0C08DAE8u); { u32 t_ = r10; PR = 0x0C08DAECu; IF(0x0C08DAEAu); W16(r0 + r9, r2); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C08DAECu); }  /* 0C08DAE8 jsr @Rn */
L_0C08DAEC: BLKS(0x0C08DAECu);
	r12 = 0xC1BB928u; UPD(0x0C08DAEEu, 1);  /* 0C08DAEC mov.l @(disp,pc),Rn */
	IF(0x0C08DAEEu); r0 <<= 2;  /* 0C08DAEE shll2 Rn */
	r11 = 0xC0A03B0u; UPD(0x0C08DAF2u, 2);  /* 0C08DAF0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C08DAF2 mov Rm,Rn */
	IF(0x0C08DAF4u); r7 = R32(r0 + r12); UPD(0x0C08DAF6u, 2);  /* 0C08DAF4 mov.l @(r0,Rm),Rn */
	W32(r9 + 0xCu, r8); UPD(0x0C08DAF8u, 1);  /* 0C08DAF6 mov.l Rm,@(disp,Rn) */
	IF(0x0C08DAF8u); { u32 t_ = r11; PR = 0x0C08DAFCu; W32(r9 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C08DAFCu); }  /* 0C08DAF8 jsr @Rn */
L_0C08DAFC: BLKS(0x0C08DAFCu);
	r13 = R32(r9); UPD(0x0C08DAFEu, 1);  /* 0C08DAFC mov.l @Rm,Rn */
	r4 = 0x75u;  /* 0C08DAFE mov #imm,Rn */
	r1 = 0x3004000u; UPD(0x0C08DB02u, 2);  /* 0C08DB00 mov.l @(disp,pc),Rn */
	r13 |= r1;  /* 0C08DB02 or Rm,Rn */
	r1 = 0xFFFFE8C8u; UPD(0x0C08DB06u, 2);  /* 0C08DB04 mov.w @(disp,pc),Rn */
	IF(0x0C08DB06u); { u32 tv_ = (r1 + 0x0C08DB0Au); u32 t_ = PHYS(tv_); W32(r9, r13); /* slot mov.l Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C3D2u: goto L_0C08C3D2; default: JUMPD(tv_); } }  /* 0C08DB06 braf Rn */
L_0C08DB10: BLKS(0x0C08DB10u);
	r1 += r5;  /* 0C08DB10 add Rm,Rn */
	r1 += r2;  /* 0C08DB12 add Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C08DA26u, 5); goto L_0C08DA26; }  /* 0C08DB14 bra */
L_0C08DB20: BLKS(0x0C08DB20u);
	r9 = 0xC0A0490u; UPD(0x0C08DB22u, 1);  /* 0C08DB20 mov.l @(disp,pc),Rn */
	IF(0x0C08DB22u); { u32 t_ = r9; PR = 0x0C08DB26u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C08DB26u); }  /* 0C08DB22 jsr @Rn */
L_0C08DB26: BLKS(0x0C08DB26u);
	IF(0x0C08DB26u); T = (s32)r0 >= 0;  /* 0C08DB26 cmp/pz Rn */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08DB30u, 4); goto L_0C08DB30; } goto L_0C08DB2C; }  /* 0C08DB28 bt/s */
L_0C08DB2C: BLKS(0x0C08DB2Cu);
	{ IF(0x0C08DB2Eu); ; /* slot nop */ UPD(0x0C08DCF0u, 4); goto L_0C08DCF0; }  /* 0C08DB2C bra */
L_0C08DB30: BLKS(0x0C08DB30u);
	r6 = 0xB4u; UPD(0x0C08DB32u, 1);  /* 0C08DB30 mov.w @(disp,pc),Rn */
	IF(0x0C08DB32u); MACL = r13 * r6;  /* 0C08DB32 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C08DB36u, 3);  /* 0C08DB34 mov.l @(disp,pc),Rn */
	IF(0x0C08DB36u); r11 = MACL;  /* 0C08DB36 sts macl,Rn */
	IF(0x0C08DB38u); MACL = r0 * r6;  /* 0C08DB38 mul.l Rm,Rn */
	r11 += r5;  /* 0C08DB3A add Rm,Rn */
	r8 = R32(r11 + 0x30u); UPD(0x0C08DB3Eu, 5);  /* 0C08DB3C mov.l @(disp,Rm),Rn */
	IF(0x0C08DB3Eu); r10 = MACL;  /* 0C08DB3E sts macl,Rn */
	r10 += r5;  /* 0C08DB40 add Rm,Rn */
	r7 = R32(r10 + 0x24u); UPD(0x0C08DB44u, 3);  /* 0C08DB42 mov.l @(disp,Rm),Rn */
	r0 = R32(r11 + 0x2Cu); UPD(0x0C08DB46u, 1);  /* 0C08DB44 mov.l @(disp,Rm),Rn */
	r1 = R32(r10 + 0x28u); UPD(0x0C08DB48u, 1);  /* 0C08DB46 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C08DB48 add Rm,Rn */
	r1 += r8;  /* 0C08DB4A add Rm,Rn */
	W32(r11 + 0x24u, r7); UPD(0x0C08DB4Eu, 3);  /* 0C08DB4C mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r1); UPD(0x0C08DB50u, 1);  /* 0C08DB4E mov.l Rm,@(disp,Rn) */
	r11 += 0x7Eu;  /* 0C08DB50 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r11); UPD(0x0C08DB54u, 2);  /* 0C08DB52 mov.w @Rm,Rn */
	r2 = 0xA0u; UPD(0x0C08DB56u, 1);  /* 0C08DB54 mov.w @(disp,pc),Rn */
	r11 += 0xFFFFFF82u;  /* 0C08DB56 add #imm,Rn */
	r11 += r2;  /* 0C08DB58 add Rm,Rn */
	r11 += 0x2u;  /* 0C08DB5A add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C08DB5Eu, 4);  /* 0C08DB5C mov.b @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C08DB5E tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C08DB62u); MACL = r3 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C08DB68u, 5); goto L_0C08DB68; } goto L_0C08DB64; }  /* 0C08DB60 bf/s */
L_0C08DB64: BLKS(0x0C08DB64u);
	{ IF(0x0C08DB66u); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C08DCE0u, 5); goto L_0C08DCE0; }  /* 0C08DB64 bra */
L_0C08DB68: BLKS(0x0C08DB68u);
	IF(0x0C08DB68u); MACL = r3 * r6;  /* 0C08DB68 mul.l Rm,Rn */
	IF(0x0C08DB6Au); r1 = MACL;  /* 0C08DB6A sts macl,Rn */
	r1 += r5;  /* 0C08DB6C add Rm,Rn */
	r1 += r2;  /* 0C08DB6E add Rm,Rn */
	r1 += 0x2u;  /* 0C08DB70 add #imm,Rn */
	UPD(0x0C08DB72u, 6);
L_0C08DB72: BLKS(0x0C08DB72u);
	r5 = (u32)(s32)(s8)R8(r1); UPD(0x0C08DB74u, 1);  /* 0C08DB72 mov.b @Rm,Rn */
	r10 = 0xB4u; UPD(0x0C08DB76u, 1);  /* 0C08DB74 mov.w @(disp,pc),Rn */
	W32(r14, r5); UPD(0x0C08DB78u, 1);  /* 0C08DB76 mov.l Rm,@Rn */
	IF(0x0C08DB78u); MACL = r13 * r10;  /* 0C08DB78 mul.l Rm,Rn */
	r0 = R32(r14); UPD(0x0C08DB7Cu, 3);  /* 0C08DB7A mov.l @Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C08DB7Eu, 1);  /* 0C08DB7C mov.l @(disp,pc),Rn */
	r0 &= 0x8u;  /* 0C08DB7E and #imm,r0 */
	IF(0x0C08DB80u); r8 = MACL;  /* 0C08DB80 sts macl,Rn */
	r9 = 0x9Cu; UPD(0x0C08DB84u, 3);  /* 0C08DB82 mov.w @(disp,pc),Rn */
	r8 += r11;  /* 0C08DB84 add Rm,Rn */
	W32(r14, r0); UPD(0x0C08DB88u, 2);  /* 0C08DB86 mov.l Rm,@Rn */
	r9 += r8;  /* 0C08DB88 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08DB8Cu, 2);  /* 0C08DB8A mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C08DB8C tst Rm,Rn */
	{ u32 c_ = !T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C08DC30u, 4); goto L_0C08DC30; } goto L_0C08DB92; }  /* 0C08DB8E bf/s */
L_0C08DB92: BLKS(0x0C08DB92u);
	if (!T) { UPD(0x0C08DBE0u, 4); goto L_0C08DBE0; }  /* 0C08DB92 bf */
L_0C08DB94: BLKS(0x0C08DB94u);
	r0 = R32(r8 + 0xCu); UPD(0x0C08DB96u, 1);  /* 0C08DB94 mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C08DB96 cmp/eq #imm,r0 */
	{ u32 c_ = T; r3 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08DBC0u, 4); goto L_0C08DBC0; } goto L_0C08DB9C; }  /* 0C08DB98 bt/s */
L_0C08DB9C: BLKS(0x0C08DB9Cu);
	T = (s32)r0 > (s32)r3;  /* 0C08DB9C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08DBB0u, 5); goto L_0C08DBB0; }  /* 0C08DB9E bf */
L_0C08DBA0: BLKS(0x0C08DBA0u);
	r0 += 0xFFFFFFFFu;  /* 0C08DBA0 add #imm,Rn */
	UPD(0x0C08DBA2u, 1);
L_0C08DBA2: BLKS(0x0C08DBA2u);
	r1 = 0xFFFFEA90u; UPD(0x0C08DBA4u, 1);  /* 0C08DBA2 mov.w @(disp,pc),Rn */
	IF(0x0C08DBA4u); { u32 tv_ = (r1 + 0x0C08DBA8u); u32 t_ = PHYS(tv_); W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C638u: goto L_0C08C638; default: JUMPD(tv_); } }  /* 0C08DBA4 braf Rn */
L_0C08DBB0: BLKS(0x0C08DBB0u);
	{ r0 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C08DBA2u, 3); goto L_0C08DBA2; }  /* 0C08DBB0 bra */
L_0C08DBC0: BLKS(0x0C08DBC0u);
	r10 = R32(r8 + 0x8u); UPD(0x0C08DBC2u, 1);  /* 0C08DBC0 mov.l @(disp,Rm),Rn */
	r5 = 0xFFFFFFFFu;  /* 0C08DBC2 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C08DBC6u, 2);  /* 0C08DBC4 mov.w @(disp,pc),Rn */
	r10 += 0xFFFFFFFFu;  /* 0C08DBC6 add #imm,Rn */
	r9 = 0x17u;  /* 0C08DBC8 mov #imm,Rn */
	IF(0x0C08DBCAu); W16(r0 + r8, r5); UPD(0x0C08DBCCu, 3);  /* 0C08DBCA mov.w Rm,@(r0,Rn) */
	W32(r8 + 0x8u, r10); UPD(0x0C08DBCEu, 1);  /* 0C08DBCC mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08D0F2u, 3); goto L_0C08D0F2; }  /* 0C08DBCE bra */
L_0C08DBE0: BLKS(0x0C08DBE0u);
	r0 = 0xC058130u; UPD(0x0C08DBE2u, 1);  /* 0C08DBE0 mov.l @(disp,pc),Rn */
	IF(0x0C08DBE2u); { u32 t_ = r0; PR = 0x0C08DBE6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C08DBE6u); }  /* 0C08DBE2 jsr @Rn */
L_0C08DBE6: BLKS(0x0C08DBE6u);
	r0 = 0xC057430u; UPD(0x0C08DBE8u, 1);  /* 0C08DBE6 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C08DBE8 mov Rm,Rn */
	IF(0x0C08DBEAu); { u32 t_ = r0; PR = 0x0C08DBEEu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C08DBEEu); }  /* 0C08DBEA jsr @Rn */
L_0C08DBEE: BLKS(0x0C08DBEEu);
	r7 = 0x86u; UPD(0x0C08DBF0u, 1);  /* 0C08DBEE mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08DBF0 mov Rm,Rn */
	IF(0x0C08DBF2u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C08DBF4u, 2);  /* 0C08DBF2 mov.w @(r0,Rm),Rn */
	r4 = 0x1Fu;  /* 0C08DBF4 mov #imm,Rn */
	r6 += 0x8u;  /* 0C08DBF6 add #imm,Rn */
	r2 = 0xC0A0380u; UPD(0x0C08DBFAu, 3);  /* 0C08DBF8 mov.l @(disp,pc),Rn */
	IF(0x0C08DBFAu); r6 >>= 2;  /* 0C08DBFA shlr2 Rn */
	IF(0x0C08DBFCu); r6 >>= 2;  /* 0C08DBFC shlr2 Rn */
	r6 &= r4;  /* 0C08DBFE and Rm,Rn */
	r4 = r13;  /* 0C08DC00 mov Rm,Rn */
	IF(0x0C08DC02u); { u32 t_ = r2; PR = 0x0C08DC06u; W32(r8 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 6); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08DC06u); }  /* 0C08DC02 jsr @Rn */
L_0C08DC06: BLKS(0x0C08DC06u);
	IF(0x0C08DC06u); MACL = r12 * r10;  /* 0C08DC06 mul.l Rm,Rn */
	r4 = r13;  /* 0C08DC08 mov Rm,Rn */
	r13 = 0xC0A9E40u; UPD(0x0C08DC0Cu, 4);  /* 0C08DC0A mov.l @(disp,pc),Rn */
	IF(0x0C08DC0Cu); r0 = MACL;  /* 0C08DC0C sts macl,Rn */
	r12 = 0xA2u; UPD(0x0C08DC10u, 2);  /* 0C08DC0E mov.w @(disp,pc),Rn */
	r0 += r11;  /* 0C08DC10 add Rm,Rn */
	IF(0x0C08DC12u); r0 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C08DC14u, 2);  /* 0C08DC12 mov.b @(r0,Rm),Rn */
	r6 = 0xAu;  /* 0C08DC14 mov #imm,Rn */
	r3 = 0xC1BB944u; UPD(0x0C08DC18u, 2);  /* 0C08DC16 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C08DC18 add Rm,Rn */
	IF(0x0C08DC1Au); { u32 t_ = r13; PR = 0x0C08DC1Eu; IF(0x0C08DC1Cu); r5 = (u32)(s32)(s16)R16(r0 + r3); /* slot mov.w @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C08DC1Eu); }  /* 0C08DC1A jsr @Rn */
L_0C08DC1E: BLKS(0x0C08DC1Eu);
	T = (r0 & r0) == 0;  /* 0C08DC1E tst Rm,Rn */
	if (T) { UPD(0x0C08DC26u, 4); goto L_0C08DC26; }  /* 0C08DC20 bt */
L_0C08DC22: BLKS(0x0C08DC22u);
	r11 = 0x4u;  /* 0C08DC22 mov #imm,Rn */
	W8(r9, r11); UPD(0x0C08DC26u, 2);  /* 0C08DC24 mov.b Rm,@Rn */
L_0C08DC26: BLKS(0x0C08DC26u);
	r13 = 0xFFFFE5DEu; UPD(0x0C08DC28u, 1);  /* 0C08DC26 mov.w @(disp,pc),Rn */
	IF(0x0C08DC28u); { u32 tv_ = (r13 + 0x0C08DC2Cu); u32 t_ = PHYS(tv_); r14 += 0x28u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C20Au: goto L_0C08C20A; default: JUMPD(tv_); } }  /* 0C08DC28 braf Rn */
L_0C08DC30: BLKS(0x0C08DC30u);
	r2 = r9;  /* 0C08DC30 mov Rm,Rn */
	r2 += 0x1u;  /* 0C08DC32 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C08DC36u, 3);  /* 0C08DC34 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C08DC36 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C08DC38 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C08DC3A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08DC26u, 6); goto L_0C08DC26; } UPD(0x0C08DC40u, 1); goto L_0C08DC40; }  /* 0C08DC3C bf/s */
L_0C08DC40: BLKS(0x0C08DC40u);
	r6 = 0x0u;  /* 0C08DC40 mov #imm,Rn */
	r0 = r3;  /* 0C08DC42 mov Rm,Rn */
	W8(r2, r6); UPD(0x0C08DC46u, 3);  /* 0C08DC44 mov.b Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C08DC46 add #imm,Rn */
	W8(r9, r0); UPD(0x0C08DC4Au, 2);  /* 0C08DC48 mov.b Rm,@Rn */
	r2 = 0x86u; UPD(0x0C08DC4Cu, 1);  /* 0C08DC4A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08DC4C mov Rm,Rn */
	r9 = 0xC058060u; UPD(0x0C08DC50u, 2);  /* 0C08DC4E mov.l @(disp,pc),Rn */
	IF(0x0C08DC50u); r11 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08DC52u, 1);  /* 0C08DC50 mov.w @(r0,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C08DC54u, 1);  /* 0C08DC52 mov.l @(disp,pc),Rn */
	IF(0x0C08DC54u); { u32 t_ = r9; PR = 0x0C08DC58u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C08DC58u); }  /* 0C08DC54 jsr @Rn */
L_0C08DC58: BLKS(0x0C08DC58u);
	r12 = R32(r8 + 0x24u); UPD(0x0C08DC5Au, 1);  /* 0C08DC58 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C08DC5A mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C08DC5Eu, 2);  /* 0C08DC5C mov.l @(disp,pc),Rn */
	r12 += r0;  /* 0C08DC5E add Rm,Rn */
	r5 = 0x66666u; UPD(0x0C08DC62u, 2);  /* 0C08DC60 mov.l @(disp,pc),Rn */
	IF(0x0C08DC62u); { u32 t_ = r13; PR = 0x0C08DC66u; W32(r14 + 0x4u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C08DC66u); }  /* 0C08DC62 jsr @Rn */
L_0C08DC66: BLKS(0x0C08DC66u);
	r6 = R32(r8 + 0x28u); UPD(0x0C08DC68u, 1);  /* 0C08DC66 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08DC68 add #imm,Rn */
	r8 = 0x20000u; UPD(0x0C08DC6Cu, 2);  /* 0C08DC6A mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C08DC6C add Rm,Rn */
	W32(r15, r8); UPD(0x0C08DC70u, 2);  /* 0C08DC6E mov.l Rm,@Rn */
	r4 = 0x0u;  /* 0C08DC70 mov #imm,Rn */
	UPD(0x0C08DC72u, 1);
L_0C08DC72: BLKS(0x0C08DC72u);
	r7 = r11;  /* 0C08DC72 mov Rm,Rn */
	r11 = 0xC7C17D0u; UPD(0x0C08DC76u, 2);  /* 0C08DC74 mov.l @(disp,pc),Rn */
	IF(0x0C08DC76u); { u32 t_ = r11; PR = 0x0C08DC7Au; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C17D0, 0x0C7C17D0u, 0x0C08DC7Au); }  /* 0C08DC76 jsr @Rn */
L_0C08DC7A: BLKS(0x0C08DC7Au);
	r13 = 0xFFFFE588u; UPD(0x0C08DC7Cu, 1);  /* 0C08DC7A mov.w @(disp,pc),Rn */
	IF(0x0C08DC7Cu); { u32 tv_ = (r13 + 0x0C08DC80u); u32 t_ = PHYS(tv_); r15 += 0x4u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C208u: goto L_0C08C208; default: JUMPD(tv_); } }  /* 0C08DC7C braf Rn */
L_0C08DCE0: BLKS(0x0C08DCE0u);
	r1 += r5;  /* 0C08DCE0 add Rm,Rn */
	r1 += r2;  /* 0C08DCE2 add Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C08DB72u, 5); goto L_0C08DB72; }  /* 0C08DCE4 bra */
L_0C08DCF0: BLKS(0x0C08DCF0u);
	r1 = 0xC7C2808u; UPD(0x0C08DCF2u, 1);  /* 0C08DCF0 mov.l @(disp,pc),Rn */
	r12 = 0xFFFFE57Cu; UPD(0x0C08DCF4u, 1);  /* 0C08DCF2 mov.w @(disp,pc),Rn */
	IF(0x0C08DCF4u); { u32 tv_ = (r12 + 0x0C08DCF8u); u32 t_ = PHYS(tv_); r4 = r13; /* slot mov Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C274u: goto L_0C08C274; default: JUMPD(tv_); } }  /* 0C08DCF4 braf Rn */
L_0C08DD00: BLKS(0x0C08DD00u);
	r11 = 0xC0A0490u; UPD(0x0C08DD02u, 1);  /* 0C08DD00 mov.l @(disp,pc),Rn */
	IF(0x0C08DD02u); { u32 t_ = r11; PR = 0x0C08DD06u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C08DD06u); }  /* 0C08DD02 jsr @Rn */
L_0C08DD06: BLKS(0x0C08DD06u);
	IF(0x0C08DD06u); T = (s32)r0 >= 0;  /* 0C08DD06 cmp/pz Rn */
	{ u32 c_ = !T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08DCF0u, 4); goto L_0C08DCF0; } goto L_0C08DD0C; }  /* 0C08DD08 bf/s */
L_0C08DD0C: BLKS(0x0C08DD0Cu);
	r6 = 0xB4u; UPD(0x0C08DD0Eu, 2);  /* 0C08DD0C mov.w @(disp,pc),Rn */
	IF(0x0C08DD0Eu); MACL = r13 * r6;  /* 0C08DD0E mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C08DD12u, 3);  /* 0C08DD10 mov.l @(disp,pc),Rn */
	IF(0x0C08DD12u); r10 = MACL;  /* 0C08DD12 sts macl,Rn */
	IF(0x0C08DD14u); MACL = r0 * r6;  /* 0C08DD14 mul.l Rm,Rn */
	r10 += r5;  /* 0C08DD16 add Rm,Rn */
	r2 = R32(r10 + 0x2Cu); UPD(0x0C08DD1Au, 5);  /* 0C08DD18 mov.l @(disp,Rm),Rn */
	IF(0x0C08DD1Au); r8 = MACL;  /* 0C08DD1A sts macl,Rn */
	r8 += r5;  /* 0C08DD1C add Rm,Rn */
	r9 = R32(r8 + 0x24u); UPD(0x0C08DD20u, 3);  /* 0C08DD1E mov.l @(disp,Rm),Rn */
	r1 = R32(r8 + 0x28u); UPD(0x0C08DD22u, 1);  /* 0C08DD20 mov.l @(disp,Rm),Rn */
	r9 += r2;  /* 0C08DD22 add Rm,Rn */
	r7 = R32(r10 + 0x30u); UPD(0x0C08DD26u, 2);  /* 0C08DD24 mov.l @(disp,Rm),Rn */
	r1 += r7;  /* 0C08DD26 add Rm,Rn */
	W32(r10 + 0x24u, r9); UPD(0x0C08DD2Au, 2);  /* 0C08DD28 mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x28u, r1); UPD(0x0C08DD2Cu, 1);  /* 0C08DD2A mov.l Rm,@(disp,Rn) */
	r10 += 0x7Eu;  /* 0C08DD2C add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C08DD30u, 2);  /* 0C08DD2E mov.w @Rm,Rn */
	r2 = 0xA0u; UPD(0x0C08DD32u, 1);  /* 0C08DD30 mov.w @(disp,pc),Rn */
	r10 += 0xFFFFFF82u;  /* 0C08DD32 add #imm,Rn */
	r10 += r2;  /* 0C08DD34 add Rm,Rn */
	r10 += 0x2u;  /* 0C08DD36 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C08DD3Au, 4);  /* 0C08DD38 mov.b @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C08DD3A tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C08DD3Eu); MACL = r3 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C08DE20u, 5); goto L_0C08DE20; } goto L_0C08DD40; }  /* 0C08DD3C bt/s */
L_0C08DD40: BLKS(0x0C08DD40u);
	IF(0x0C08DD40u); MACL = r3 * r6;  /* 0C08DD40 mul.l Rm,Rn */
	IF(0x0C08DD42u); r1 = MACL;  /* 0C08DD42 sts macl,Rn */
	r1 += r5;  /* 0C08DD44 add Rm,Rn */
	r1 += r2;  /* 0C08DD46 add Rm,Rn */
	r1 += 0x2u;  /* 0C08DD48 add #imm,Rn */
	UPD(0x0C08DD4Au, 8);
L_0C08DD4A: BLKS(0x0C08DD4Au);
	r5 = (u32)(s32)(s8)R8(r1); UPD(0x0C08DD4Cu, 1);  /* 0C08DD4A mov.b @Rm,Rn */
	W32(r14, r5); UPD(0x0C08DD4Eu, 1);  /* 0C08DD4C mov.l Rm,@Rn */
	r0 = R32(r14); UPD(0x0C08DD50u, 1);  /* 0C08DD4E mov.l @Rm,Rn */
	r0 &= 0x8u;  /* 0C08DD50 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08DD52 tst Rm,Rn */
	{ u32 c_ = !T; r4 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08DD90u, 5); goto L_0C08DD90; } goto L_0C08DD58; }  /* 0C08DD54 bf/s */
L_0C08DD58: BLKS(0x0C08DD58u);
	r8 = 0xB4u; UPD(0x0C08DD5Au, 2);  /* 0C08DD58 mov.w @(disp,pc),Rn */
	IF(0x0C08DD5Au); MACL = r13 * r8;  /* 0C08DD5A mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C08DD5Eu, 3);  /* 0C08DD5C mov.l @(disp,pc),Rn */
	IF(0x0C08DD5Eu); r2 = MACL;  /* 0C08DD5E sts macl,Rn */
	r2 += r10;  /* 0C08DD60 add Rm,Rn */
	r1 = R32(r2 + 0xCu); UPD(0x0C08DD64u, 3);  /* 0C08DD62 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C08DD64 tst Rm,Rn */
	if (T) { UPD(0x0C08DD72u, 4); goto L_0C08DD72; }  /* 0C08DD66 bt */
L_0C08DD68: BLKS(0x0C08DD68u);
	r1 += 0xFFFFFFFFu;  /* 0C08DD68 add #imm,Rn */
	r4 = 0xFFFFE914u; UPD(0x0C08DD6Cu, 2);  /* 0C08DD6A mov.w @(disp,pc),Rn */
	IF(0x0C08DD6Cu); { u32 tv_ = (r4 + 0x0C08DD70u); u32 t_ = PHYS(tv_); IF(0x0C08DD6Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C684u: goto L_0C08C684; default: JUMPD(tv_); } }  /* 0C08DD6C braf Rn */
L_0C08DD72: BLKS(0x0C08DD72u);
	r10 = R32(r2 + 0x8u); UPD(0x0C08DD74u, 1);  /* 0C08DD72 mov.l @(disp,Rm),Rn */
L_0C08DD74: BLKS(0x0C08DD74u);
	r5 = 0xFFFFFFFFu;  /* 0C08DD74 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C08DD78u, 2);  /* 0C08DD76 mov.w @(disp,pc),Rn */
	r10 += 0xFFFFFFFFu;  /* 0C08DD78 add #imm,Rn */
	IF(0x0C08DD7Au); W16(r0 + r2, r5); UPD(0x0C08DD7Cu, 2);  /* 0C08DD7A mov.w Rm,@(r0,Rn) */
	r1 = 0x17u;  /* 0C08DD7C mov #imm,Rn */
	{ W32(r2 + 0x8u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08D18Eu, 4); goto L_0C08D18E; }  /* 0C08DD7E bra */
L_0C08DD90: BLKS(0x0C08DD90u);
	r8 = 0xB4u; UPD(0x0C08DD92u, 1);  /* 0C08DD90 mov.w @(disp,pc),Rn */
	IF(0x0C08DD92u); MACL = r12 * r8;  /* 0C08DD92 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C08DD96u, 3);  /* 0C08DD94 mov.l @(disp,pc),Rn */
	IF(0x0C08DD96u); r0 = MACL;  /* 0C08DD96 sts macl,Rn */
	r6 = 0xA2u; UPD(0x0C08DD9Au, 2);  /* 0C08DD98 mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C08DD9A add Rm,Rn */
	IF(0x0C08DD9Cu); r0 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08DD9Eu, 2);  /* 0C08DD9C mov.b @(r0,Rm),Rn */
	r12 = 0xC0A9E40u; UPD(0x0C08DDA0u, 1);  /* 0C08DD9E mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C08DDA0 add Rm,Rn */
	r3 = 0xC1BB94Cu; UPD(0x0C08DDA4u, 2);  /* 0C08DDA2 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C08DDA4 mov #imm,Rn */
	IF(0x0C08DDA6u); { u32 t_ = r12; PR = 0x0C08DDAAu; IF(0x0C08DDA8u); r5 = (u32)(s32)(s16)R16(r0 + r3); /* slot mov.w @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C08DDAAu); }  /* 0C08DDA6 jsr @Rn */
L_0C08DDAA: BLKS(0x0C08DDAAu);
	T = (r0 & r0) == 0;  /* 0C08DDAA tst Rm,Rn */
	if (T) { UPD(0x0C08DE18u, 4); goto L_0C08DE18; }  /* 0C08DDAC bt */
L_0C08DDAE: BLKS(0x0C08DDAEu);
	IF(0x0C08DDAEu); MACL = r13 * r8;  /* 0C08DDAE mul.l Rm,Rn */
	r0 = 0x88u; UPD(0x0C08DDB2u, 3);  /* 0C08DDB0 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C08DDB2 mov Rm,Rn */
	IF(0x0C08DDB4u); r8 = MACL;  /* 0C08DDB4 sts macl,Rn */
	r8 += r9;  /* 0C08DDB6 add Rm,Rn */
	IF(0x0C08DDB8u); r11 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C08DDBAu, 4);  /* 0C08DDB8 mov.w @(r0,Rm),Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C08DDBCu, 1);  /* 0C08DDBA mov.l @(disp,Rm),Rn */
	r0 += r11;  /* 0C08DDBC add Rm,Rn */
	r0 &= 0xFu;  /* 0C08DDBE and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C08DDC2u, 3);  /* 0C08DDC0 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A0380u; UPD(0x0C08DDC4u, 1);  /* 0C08DDC2 mov.l @(disp,pc),Rn */
	r9 = 0xC058060u; UPD(0x0C08DDC6u, 1);  /* 0C08DDC4 mov.l @(disp,pc),Rn */
	IF(0x0C08DDC6u); { u32 t_ = r0; PR = 0x0C08DDCAu; r13 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08DDCAu); }  /* 0C08DDC6 jsr @Rn */
L_0C08DDCA: BLKS(0x0C08DDCAu);
	r10 = 0xC7C17D0u; UPD(0x0C08DDCCu, 1);  /* 0C08DDCA mov.l @(disp,pc),Rn */
	W32(r14, r13); UPD(0x0C08DDCEu, 1);  /* 0C08DDCC mov.l Rm,@Rn */
L_0C08DDCE: BLKS(0x0C08DDCEu);
	r6 = R32(r8 + 0xCu); UPD(0x0C08DDD0u, 1);  /* 0C08DDCE mov.l @(disp,Rm),Rn */
	r0 = 0x4u;  /* 0C08DDD0 mov #imm,Rn */
	IF(0x0C08DDD2u); ARG0(0x460Du); { s32 s_ = (s32)r0; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C08DDD2 shld Rm,Rn */
	r0 = R32(r14); UPD(0x0C08DDD6u, 3);  /* 0C08DDD4 mov.l @Rm,Rn */
	r4 = 0xC1BB948u; UPD(0x0C08DDD8u, 1);  /* 0C08DDD6 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C08DDD8 add Rm,Rn */
	IF(0x0C08DDDAu); r11 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C08DDDCu, 2);  /* 0C08DDDA mov.w @(r0,Rm),Rn */
	r6 += r11;  /* 0C08DDDC add Rm,Rn */
	r12 = (u32)(s32)(s16)r6;  /* 0C08DDDE exts.w Rm,Rn */
	r5 = 0x140000u; UPD(0x0C08DDE2u, 3);  /* 0C08DDE0 mov.l @(disp,pc),Rn */
	IF(0x0C08DDE2u); { u32 t_ = r9; PR = 0x0C08DDE6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C08DDE6u); }  /* 0C08DDE2 jsr @Rn */
L_0C08DDE6: BLKS(0x0C08DDE6u);
	r3 = R32(r8 + 0x24u); UPD(0x0C08DDE8u, 1);  /* 0C08DDE6 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C08DDE8 mov Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C08DDECu, 2);  /* 0C08DDEA mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C08DDEC add Rm,Rn */
	r5 = 0x100000u; UPD(0x0C08DDF0u, 2);  /* 0C08DDEE mov.l @(disp,pc),Rn */
	IF(0x0C08DDF0u); { u32 t_ = r13; PR = 0x0C08DDF4u; W32(r14 + 0x4u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C08DDF4u); }  /* 0C08DDF0 jsr @Rn */
L_0C08DDF4: BLKS(0x0C08DDF4u);
	r6 = R32(r8 + 0x28u); UPD(0x0C08DDF6u, 1);  /* 0C08DDF4 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08DDF6 add #imm,Rn */
	r5 = 0x28000u; UPD(0x0C08DDFAu, 2);  /* 0C08DDF8 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C08DDFA mov #imm,Rn */
	W32(r15, r5); UPD(0x0C08DDFEu, 2);  /* 0C08DDFC mov.l Rm,@Rn */
	r7 = r12;  /* 0C08DDFE mov Rm,Rn */
	r6 += r0;  /* 0C08DE00 add Rm,Rn */
	IF(0x0C08DE02u); { u32 t_ = r10; PR = 0x0C08DE06u; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C08DE06u); }  /* 0C08DE02 jsr @Rn */
L_0C08DE06: BLKS(0x0C08DE06u);
	r2 = R32(r14); UPD(0x0C08DE08u, 1);  /* 0C08DE06 mov.l @Rm,Rn */
	r4 = 0x1u;  /* 0C08DE08 mov #imm,Rn */
	r2 += 0x1u;  /* 0C08DE0A add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C08DE0C exts.w Rm,Rn */
	W32(r14, r7); UPD(0x0C08DE10u, 4);  /* 0C08DE0E mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C08DE12u, 1);  /* 0C08DE10 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r4;  /* 0C08DE12 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08DDCEu, 4); goto L_0C08DDCE; } UPD(0x0C08DE18u, 1); goto L_0C08DE18; }  /* 0C08DE14 bf/s */
L_0C08DE18: BLKS(0x0C08DE18u);
	r13 = 0xFFFFE3ECu; UPD(0x0C08DE1Au, 1);  /* 0C08DE18 mov.w @(disp,pc),Rn */
	IF(0x0C08DE1Au); { u32 tv_ = (r13 + 0x0C08DE1Eu); u32 t_ = PHYS(tv_); r14 += 0x28u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C20Au: goto L_0C08C20A; default: JUMPD(tv_); } }  /* 0C08DE1A braf Rn */
L_0C08DE20: BLKS(0x0C08DE20u);
	IF(0x0C08DE20u); r1 = MACL;  /* 0C08DE20 sts macl,Rn */
	r1 += r5;  /* 0C08DE22 add Rm,Rn */
	r1 += r2;  /* 0C08DE24 add Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C08DD4Au, 6); goto L_0C08DD4A; }  /* 0C08DE26 bra */
L_0C08DE30: BLKS(0x0C08DE30u);
	r11 = 0xC0A0490u; UPD(0x0C08DE32u, 1);  /* 0C08DE30 mov.l @(disp,pc),Rn */
	IF(0x0C08DE32u); { u32 t_ = r11; PR = 0x0C08DE36u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C08DE36u); }  /* 0C08DE32 jsr @Rn */
L_0C08DE36: BLKS(0x0C08DE36u);
	IF(0x0C08DE36u); T = (s32)r0 >= 0;  /* 0C08DE36 cmp/pz Rn */
	{ u32 c_ = T; r3 = 0x17u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08DE40u, 4); goto L_0C08DE40; } goto L_0C08DE3C; }  /* 0C08DE38 bt/s */
L_0C08DE3C: BLKS(0x0C08DE3Cu);
	{ IF(0x0C08DE3Eu); ; /* slot nop */ UPD(0x0C08DCF0u, 4); goto L_0C08DCF0; }  /* 0C08DE3C bra */
L_0C08DE40: BLKS(0x0C08DE40u);
	r2 = 0xB4u; UPD(0x0C08DE42u, 1);  /* 0C08DE40 mov.w @(disp,pc),Rn */
	IF(0x0C08DE42u); MACL = r13 * r2;  /* 0C08DE42 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C08DE46u, 3);  /* 0C08DE44 mov.l @(disp,pc),Rn */
	IF(0x0C08DE46u); r10 = MACL;  /* 0C08DE46 sts macl,Rn */
	IF(0x0C08DE48u); MACL = r0 * r2;  /* 0C08DE48 mul.l Rm,Rn */
	r10 += r8;  /* 0C08DE4A add Rm,Rn */
	r1 = R32(r10 + 0x30u); UPD(0x0C08DE4Eu, 5);  /* 0C08DE4C mov.l @(disp,Rm),Rn */
	IF(0x0C08DE4Eu); r9 = MACL;  /* 0C08DE4E sts macl,Rn */
	r9 += r8;  /* 0C08DE50 add Rm,Rn */
	r7 = R32(r9 + 0x24u); UPD(0x0C08DE54u, 3);  /* 0C08DE52 mov.l @(disp,Rm),Rn */
	r12 = R32(r9 + 0x28u); UPD(0x0C08DE56u, 1);  /* 0C08DE54 mov.l @(disp,Rm),Rn */
	r0 = R32(r10 + 0x2Cu); UPD(0x0C08DE58u, 1);  /* 0C08DE56 mov.l @(disp,Rm),Rn */
	r12 += r1;  /* 0C08DE58 add Rm,Rn */
	r7 += r0;  /* 0C08DE5A add Rm,Rn */
	r2 = R32(r10 + 0xCu); UPD(0x0C08DE5Eu, 3);  /* 0C08DE5C mov.l @(disp,Rm),Rn */
	W32(r10 + 0x24u, r7); UPD(0x0C08DE60u, 1);  /* 0C08DE5E mov.l Rm,@(disp,Rn) */
	T = r2 > r3;  /* 0C08DE60 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x28u, r12); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08DE18u, 4); goto L_0C08DE18; } UPD(0x0C08DE66u, 1); goto L_0C08DE66; }  /* 0C08DE62 bt/s */
L_0C08DE66: BLKS(0x0C08DE66u);
	r0 = 0xC08DEACu;  /* 0C08DE66 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08DE68 add Rm,Rn */
	IF(0x0C08DE6Au); r6 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08DE6Cu, 3);  /* 0C08DE6A mov.w @(r0,Rm),Rn */
	IF(0x0C08DE6Cu); { u32 tv_ = (r6 + 0x0C08DE70u); u32 t_ = PHYS(tv_); IF(0x0C08DE6Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08DEE0u: goto L_0C08DEE0; case 0x0C08DEF4u: goto L_0C08DEF4; case 0x0C08DF60u: goto L_0C08DF60; default: JUMPD(tv_); } }  /* 0C08DE6C braf Rn */
L_0C08DEE0: BLKS(0x0C08DEE0u);
	r11 = 0xB4u; UPD(0x0C08DEE2u, 1);  /* 0C08DEE0 mov.w @(disp,pc),Rn */
	IF(0x0C08DEE2u); MACL = r13 * r11;  /* 0C08DEE2 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C08DEE6u, 3);  /* 0C08DEE4 mov.l @(disp,pc),Rn */
	IF(0x0C08DEE6u); r8 = MACL;  /* 0C08DEE6 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C08DEEAu, 2);  /* 0C08DEE8 mov.w @(disp,pc),Rn */
	r8 += r4;  /* 0C08DEEA add Rm,Rn */
	IF(0x0C08DEECu); r5 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C08DEEEu, 2);  /* 0C08DEEC mov.w @(r0,Rm),Rn */
	IF(0x0C08DEEEu); T = (s32)r5 >= 0;  /* 0C08DEEE cmp/pz Rn */
	{ u32 c_ = !T; r4 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08DF40u, 4); goto L_0C08DF40; } UPD(0x0C08DEF4u, 1); goto L_0C08DEF4; }  /* 0C08DEF0 bf/s */
L_0C08DEF4: BLKS(0x0C08DEF4u);
	r7 = 0xB4u; UPD(0x0C08DEF6u, 1);  /* 0C08DEF4 mov.w @(disp,pc),Rn */
	IF(0x0C08DEF6u); MACL = r13 * r7;  /* 0C08DEF6 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C08DEFAu, 3);  /* 0C08DEF8 mov.l @(disp,pc),Rn */
	IF(0x0C08DEFAu); r8 = MACL;  /* 0C08DEFA sts macl,Rn */
	r12 = 0x98u; UPD(0x0C08DEFEu, 2);  /* 0C08DEFC mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C08DEFE add Rm,Rn */
	r12 += r8;  /* 0C08DF00 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C08DF04u, 3);  /* 0C08DF02 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C08DF04 add #imm,Rn */
	W8(r12, r0); UPD(0x0C08DF08u, 2);  /* 0C08DF06 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C08DF08 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08DF0A tst Rm,Rn */
	if (!T) { UPD(0x0C08DF2Cu, 5); goto L_0C08DF2C; }  /* 0C08DF0C bf */
L_0C08DF0E: BLKS(0x0C08DF0Eu);
	r4 = r13;  /* 0C08DF0E mov Rm,Rn */
	r0 = 0x88u; UPD(0x0C08DF12u, 2);  /* 0C08DF10 mov.w @(disp,pc),Rn */
	IF(0x0C08DF12u); r1 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C08DF14u, 1);  /* 0C08DF12 mov.w @(r0,Rm),Rn */
	r6 = R32(r8 + 0xCu); UPD(0x0C08DF16u, 1);  /* 0C08DF14 mov.l @(disp,Rm),Rn */
	r2 = 0xC0A0380u; UPD(0x0C08DF18u, 1);  /* 0C08DF16 mov.l @(disp,pc),Rn */
	r6 += r1;  /* 0C08DF18 add Rm,Rn */
	IF(0x0C08DF1Au); { u32 t_ = r2; PR = 0x0C08DF1Eu; W32(r8 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08DF1Eu); }  /* 0C08DF1A jsr @Rn */
L_0C08DF1E: BLKS(0x0C08DF1Eu);
	r0 = R32(r8 + 0xCu); UPD(0x0C08DF20u, 1);  /* 0C08DF1E mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C08DF20 tst Rm,Rn */
	if (!T) { UPD(0x0C08DF2Cu, 4); goto L_0C08DF2C; }  /* 0C08DF22 bf */
L_0C08DF24: BLKS(0x0C08DF24u);
	r1 = R32(r8); UPD(0x0C08DF26u, 1);  /* 0C08DF24 mov.l @Rm,Rn */
	r5 = 0x4000u; UPD(0x0C08DF28u, 1);  /* 0C08DF26 mov.w @(disp,pc),Rn */
	r1 |= r5;  /* 0C08DF28 or Rm,Rn */
	UPD(0x0C08DF2Au, 1);
L_0C08DF2A: BLKS(0x0C08DF2Au);
	W32(r8, r1); UPD(0x0C08DF2Cu, 1);  /* 0C08DF2A mov.l Rm,@Rn */
L_0C08DF2C: BLKS(0x0C08DF2Cu);
	r13 = 0xFFFFE2D8u; UPD(0x0C08DF2Eu, 1);  /* 0C08DF2C mov.w @(disp,pc),Rn */
	IF(0x0C08DF2Eu); { u32 tv_ = (r13 + 0x0C08DF32u); u32 t_ = PHYS(tv_); r14 += 0x28u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C20Au: goto L_0C08C20A; default: JUMPD(tv_); } }  /* 0C08DF2E braf Rn */
L_0C08DF40: BLKS(0x0C08DF40u);
	r13 = 0xC0A03B0u; UPD(0x0C08DF42u, 1);  /* 0C08DF40 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C08DF42 mov #imm,Rn */
	r10 = 0x21u;  /* 0C08DF44 mov #imm,Rn */
	W32(r8 + 0x8u, r10); UPD(0x0C08DF48u, 3);  /* 0C08DF46 mov.l Rm,@(disp,Rn) */
	IF(0x0C08DF48u); { u32 t_ = r13; PR = 0x0C08DF4Cu; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C08DF4Cu); }  /* 0C08DF48 jsr @Rn */
L_0C08DF4C: BLKS(0x0C08DF4Cu);
	r1 = R32(r8); UPD(0x0C08DF4Eu, 1);  /* 0C08DF4C mov.l @Rm,Rn */
	r2 = 0xFCFFFFFFu; UPD(0x0C08DF50u, 1);  /* 0C08DF4E mov.l @(disp,pc),Rn */
L_0C08DF50: BLKS(0x0C08DF50u);
	{ r1 &= r2; /* slot and Rm,Rn */ UPD(0x0C08DF2Au, 3); goto L_0C08DF2A; }  /* 0C08DF50 bra */
L_0C08DF60: BLKS(0x0C08DF60u);
	r8 = 0xB4u; UPD(0x0C08DF62u, 1);  /* 0C08DF60 mov.w @(disp,pc),Rn */
	IF(0x0C08DF62u); MACL = r13 * r8;  /* 0C08DF62 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C08DF66u, 3);  /* 0C08DF64 mov.l @(disp,pc),Rn */
	IF(0x0C08DF66u); r8 = MACL;  /* 0C08DF66 sts macl,Rn */
	r9 = 0x88u; UPD(0x0C08DF6Au, 2);  /* 0C08DF68 mov.w @(disp,pc),Rn */
	r8 += r11;  /* 0C08DF6A add Rm,Rn */
	r9 += r8;  /* 0C08DF6C add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C08DF70u, 3);  /* 0C08DF6E mov.w @Rm,Rn */
	IF(0x0C08DF70u); T = (s32)r4 >= 0;  /* 0C08DF70 cmp/pz Rn */
	if (!T) { UPD(0x0C08DFB0u, 4); goto L_0C08DFB0; }  /* 0C08DF72 bf */
L_0C08DF74: BLKS(0x0C08DF74u);
	r0 = R32(r8 + 0x8u); UPD(0x0C08DF76u, 1);  /* 0C08DF74 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C08DF76 mov Rm,Rn */
	r0 += 0x1u;  /* 0C08DF78 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C08DF7Cu, 3);  /* 0C08DF7A mov.l Rm,@(disp,Rn) */
	r6 = 0xC1BB8F4u; UPD(0x0C08DF7Eu, 1);  /* 0C08DF7C mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C08DF7E add Rm,Rn */
	IF(0x0C08DF80u); r2 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C08DF82u, 2);  /* 0C08DF80 mov.w @(r0,Rm),Rn */
	r0 = 0xC0A03B0u; UPD(0x0C08DF84u, 1);  /* 0C08DF82 mov.l @(disp,pc),Rn */
	IF(0x0C08DF84u); { u32 t_ = r0; PR = 0x0C08DF88u; W32(r8 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C08DF88u); }  /* 0C08DF84 jsr @Rn */
L_0C08DF88: BLKS(0x0C08DF88u);
	r10 = 0xC0AFE40u; UPD(0x0C08DF8Au, 1);  /* 0C08DF88 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C08DF8A mov Rm,Rn */
	r7 = 0x100u; UPD(0x0C08DF8Eu, 2);  /* 0C08DF8C mov.w @(disp,pc),Rn */
	r12 = 0x86u; UPD(0x0C08DF90u, 1);  /* 0C08DF8E mov.w @(disp,pc),Rn */
	IF(0x0C08DF90u); { u32 t_ = r10; PR = 0x0C08DF94u; IF(0x0C08DF92u); W16(r0 + r12, r7); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C08DF94u); }  /* 0C08DF90 jsr @Rn */
L_0C08DF94: BLKS(0x0C08DF94u);
	r0 &= 0x1u;  /* 0C08DF94 and #imm,r0 */
	r3 = 0xC1BB934u; UPD(0x0C08DF98u, 2);  /* 0C08DF96 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C08DF98 add Rm,Rn */
	IF(0x0C08DF9Au); r13 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C08DF9Cu, 2);  /* 0C08DF9A mov.w @(r0,Rm),Rn */
	r1 = R32(r8); UPD(0x0C08DF9Eu, 1);  /* 0C08DF9C mov.l @Rm,Rn */
	r2 = 0xFFFFBFFFu; UPD(0x0C08DFA0u, 1);  /* 0C08DF9E mov.w @(disp,pc),Rn */
	{ W16(r9, r13); /* slot mov.w Rm,@Rn */ UPD(0x0C08DF50u, 3); goto L_0C08DF50; }  /* 0C08DFA0 bra */
L_0C08DFB0: BLKS(0x0C08DFB0u);
	r1 = R32(r8 + 0xCu); UPD(0x0C08DFB2u, 1);  /* 0C08DFB0 mov.l @(disp,Rm),Rn */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C08D8BCu, 3); goto L_0C08D8BC; }  /* 0C08DFB2 bra */
L_0C08DFC0: BLKS(0x0C08DFC0u);
	r9 = 0xC0A0490u; UPD(0x0C08DFC2u, 1);  /* 0C08DFC0 mov.l @(disp,pc),Rn */
	IF(0x0C08DFC2u); { u32 t_ = r9; PR = 0x0C08DFC6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C08DFC6u); }  /* 0C08DFC2 jsr @Rn */
L_0C08DFC6: BLKS(0x0C08DFC6u);
	IF(0x0C08DFC6u); T = (s32)r0 >= 0;  /* 0C08DFC6 cmp/pz Rn */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08DFD0u, 4); goto L_0C08DFD0; } goto L_0C08DFCC; }  /* 0C08DFC8 bt/s */
L_0C08DFCC: BLKS(0x0C08DFCCu);
	{ IF(0x0C08DFCEu); ; /* slot nop */ UPD(0x0C08DCF0u, 4); goto L_0C08DCF0; }  /* 0C08DFCC bra */
L_0C08DFD0: BLKS(0x0C08DFD0u);
	r6 = 0xB4u; UPD(0x0C08DFD2u, 1);  /* 0C08DFD0 mov.w @(disp,pc),Rn */
	IF(0x0C08DFD2u); MACL = r13 * r6;  /* 0C08DFD2 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C08DFD6u, 3);  /* 0C08DFD4 mov.l @(disp,pc),Rn */
	IF(0x0C08DFD6u); r11 = MACL;  /* 0C08DFD6 sts macl,Rn */
	IF(0x0C08DFD8u); MACL = r0 * r6;  /* 0C08DFD8 mul.l Rm,Rn */
	r11 += r5;  /* 0C08DFDA add Rm,Rn */
	r2 = R32(r11 + 0x30u); UPD(0x0C08DFDEu, 5);  /* 0C08DFDC mov.l @(disp,Rm),Rn */
	IF(0x0C08DFDEu); r4 = MACL;  /* 0C08DFDE sts macl,Rn */
	r4 += r5;  /* 0C08DFE0 add Rm,Rn */
	r0 = R32(r4 + 0x24u); UPD(0x0C08DFE4u, 3);  /* 0C08DFE2 mov.l @(disp,Rm),Rn */
	r10 = R32(r11 + 0x2Cu); UPD(0x0C08DFE6u, 1);  /* 0C08DFE4 mov.l @(disp,Rm),Rn */
	r1 = R32(r4 + 0x28u); UPD(0x0C08DFE8u, 1);  /* 0C08DFE6 mov.l @(disp,Rm),Rn */
	r0 += r10;  /* 0C08DFE8 add Rm,Rn */
	r1 += r2;  /* 0C08DFEA add Rm,Rn */
	W32(r11 + 0x24u, r0); UPD(0x0C08DFEEu, 3);  /* 0C08DFEC mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r1); UPD(0x0C08DFF0u, 1);  /* 0C08DFEE mov.l Rm,@(disp,Rn) */
	r11 += 0x7Eu;  /* 0C08DFF0 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r11); UPD(0x0C08DFF4u, 2);  /* 0C08DFF2 mov.w @Rm,Rn */
	r2 = 0xA0u; UPD(0x0C08DFF6u, 1);  /* 0C08DFF4 mov.w @(disp,pc),Rn */
	r11 += 0xFFFFFF82u;  /* 0C08DFF6 add #imm,Rn */
	r11 += r2;  /* 0C08DFF8 add Rm,Rn */
	r11 += 0x2u;  /* 0C08DFFA add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r11); UPD(0x0C08DFFEu, 4);  /* 0C08DFFC mov.b @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C08DFFE tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C08E002u); MACL = r3 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C08E008u, 5); goto L_0C08E008; } goto L_0C08E004; }  /* 0C08E000 bf/s */
L_0C08E004: BLKS(0x0C08E004u);
	{ IF(0x0C08E006u); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C08E100u, 5); goto L_0C08E100; }  /* 0C08E004 bra */
L_0C08E008: BLKS(0x0C08E008u);
	IF(0x0C08E008u); MACL = r3 * r6;  /* 0C08E008 mul.l Rm,Rn */
	IF(0x0C08E00Au); r1 = MACL;  /* 0C08E00A sts macl,Rn */
	r1 += r5;  /* 0C08E00C add Rm,Rn */
	r1 += r2;  /* 0C08E00E add Rm,Rn */
	r1 += 0x2u;  /* 0C08E010 add #imm,Rn */
	UPD(0x0C08E012u, 6);
L_0C08E012: BLKS(0x0C08E012u);
	r5 = (u32)(s32)(s8)R8(r1); UPD(0x0C08E014u, 1);  /* 0C08E012 mov.b @Rm,Rn */
	W32(r14, r5); UPD(0x0C08E016u, 1);  /* 0C08E014 mov.l Rm,@Rn */
	r0 = R32(r14); UPD(0x0C08E018u, 1);  /* 0C08E016 mov.l @Rm,Rn */
	r0 &= 0x8u;  /* 0C08E018 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08E01A tst Rm,Rn */
	if (!T) { UPD(0x0C08E090u, 5); goto L_0C08E090; }  /* 0C08E01C bf */
L_0C08E01E: BLKS(0x0C08E01Eu);
	r0 = 0xB4u; UPD(0x0C08E020u, 1);  /* 0C08E01E mov.w @(disp,pc),Rn */
	IF(0x0C08E020u); MACL = r13 * r0;  /* 0C08E020 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C08E024u, 3);  /* 0C08E022 mov.l @(disp,pc),Rn */
	IF(0x0C08E024u); r2 = MACL;  /* 0C08E024 sts macl,Rn */
	r2 += r4;  /* 0C08E026 add Rm,Rn */
	r0 = R32(r2 + 0xCu); UPD(0x0C08E02Au, 3);  /* 0C08E028 mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C08E02A cmp/eq #imm,r0 */
	{ u32 c_ = !T; r3 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08E034u, 4); goto L_0C08E034; } goto L_0C08E030; }  /* 0C08E02C bf/s */
L_0C08E030: BLKS(0x0C08E030u);
	{ r10 = R32(r2 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C08DD74u, 4); goto L_0C08DD74; }  /* 0C08E030 bra */
L_0C08E034: BLKS(0x0C08E034u);
	T = (s32)r0 > (s32)r3;  /* 0C08E034 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08E050u, 4); goto L_0C08E050; }  /* 0C08E036 bf */
L_0C08E038: BLKS(0x0C08E038u);
	r0 += 0xFFFFFFFFu;  /* 0C08E038 add #imm,Rn */
	UPD(0x0C08E03Au, 1);
L_0C08E03A: BLKS(0x0C08E03Au);
	r6 = 0xC0A0380u; UPD(0x0C08E03Cu, 1);  /* 0C08E03A mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C08E03C mov Rm,Rn */
	IF(0x0C08E03Eu); { u32 t_ = r6; PR = 0x0C08E042u; W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08E042u); }  /* 0C08E03E jsr @Rn */
L_0C08E042: BLKS(0x0C08E042u);
	r13 = 0xFFFFE1C2u; UPD(0x0C08E044u, 1);  /* 0C08E042 mov.w @(disp,pc),Rn */
	IF(0x0C08E044u); { u32 tv_ = (r13 + 0x0C08E048u); u32 t_ = PHYS(tv_); r14 += 0x28u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08C20Au: goto L_0C08C20A; default: JUMPD(tv_); } }  /* 0C08E044 braf Rn */
L_0C08E050: BLKS(0x0C08E050u);
	{ r0 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C08E03Au, 3); goto L_0C08E03A; }  /* 0C08E050 bra */
L_0C08E090: BLKS(0x0C08E090u);
	r9 = 0xC058130u; UPD(0x0C08E092u, 1);  /* 0C08E090 mov.l @(disp,pc),Rn */
	r8 = 0xC057430u; UPD(0x0C08E094u, 1);  /* 0C08E092 mov.l @(disp,pc),Rn */
	IF(0x0C08E094u); { u32 t_ = r9; PR = 0x0C08E098u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C08E098u); }  /* 0C08E094 jsr @Rn */
L_0C08E098: BLKS(0x0C08E098u);
	r5 = 0x4u;  /* 0C08E098 mov #imm,Rn */
	IF(0x0C08E09Au); { u32 t_ = r8; PR = 0x0C08E09Eu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057430, 0x0C057430u, 0x0C08E09Eu); }  /* 0C08E09A jsr @Rn */
L_0C08E09E: BLKS(0x0C08E09Eu);
	r8 = 0xB4u; UPD(0x0C08E0A0u, 1);  /* 0C08E09E mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C08E0A0 mov Rm,Rn */
	IF(0x0C08E0A2u); MACL = r13 * r8;  /* 0C08E0A2 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C08E0A6u, 4);  /* 0C08E0A4 mov.l @(disp,pc),Rn */
	IF(0x0C08E0A6u); r10 = MACL;  /* 0C08E0A6 sts macl,Rn */
	r11 = 0x86u; UPD(0x0C08E0AAu, 2);  /* 0C08E0A8 mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C08E0AA add Rm,Rn */
	r11 += r10;  /* 0C08E0AC add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r11); UPD(0x0C08E0B0u, 3);  /* 0C08E0AE mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C08E0B0 add #imm,Rn */
	r7 = 0xC0A0380u; UPD(0x0C08E0B4u, 2);  /* 0C08E0B2 mov.l @(disp,pc),Rn */
	IF(0x0C08E0B4u); r0 >>= 2;  /* 0C08E0B4 shlr2 Rn */
	IF(0x0C08E0B6u); r0 >>= 2;  /* 0C08E0B6 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C08E0B8 and #imm,r0 */
	IF(0x0C08E0BAu); { u32 t_ = r7; PR = 0x0C08E0BEu; W32(r10 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08E0BEu); }  /* 0C08E0BA jsr @Rn */
L_0C08E0BE: BLKS(0x0C08E0BEu);
	IF(0x0C08E0BEu); MACL = r12 * r8;  /* 0C08E0BE mul.l Rm,Rn */
	r6 = 0xA2u; UPD(0x0C08E0C2u, 3);  /* 0C08E0C0 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C08E0C2 mov Rm,Rn */
	IF(0x0C08E0C4u); r0 = MACL;  /* 0C08E0C4 sts macl,Rn */
	r0 += r9;  /* 0C08E0C6 add Rm,Rn */
	IF(0x0C08E0C8u); r0 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08E0CAu, 4);  /* 0C08E0C8 mov.b @(r0,Rm),Rn */
	r12 = 0xC0A9E40u; UPD(0x0C08E0CCu, 1);  /* 0C08E0CA mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C08E0CC add Rm,Rn */
	r3 = 0xC1BB950u; UPD(0x0C08E0D0u, 2);  /* 0C08E0CE mov.l @(disp,pc),Rn */
	r6 = 0x3u;  /* 0C08E0D0 mov #imm,Rn */
	IF(0x0C08E0D2u); { u32 t_ = r12; PR = 0x0C08E0D6u; IF(0x0C08E0D4u); r5 = (u32)(s32)(s16)R16(r0 + r3); /* slot mov.w @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C08E0D6u); }  /* 0C08E0D2 jsr @Rn */
L_0C08E0D6: BLKS(0x0C08E0D6u);
	T = (r0 & r0) == 0;  /* 0C08E0D6 tst Rm,Rn */
	if (T) { UPD(0x0C08E042u, 4); goto L_0C08E042; }  /* 0C08E0D8 bt */
L_0C08E0DA: BLKS(0x0C08E0DAu);
	r11 = (u32)(s32)(s16)R16(r11); UPD(0x0C08E0DCu, 1);  /* 0C08E0DA mov.w @Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C08E0DEu, 1);  /* 0C08E0DC mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C08E0E0u, 1);  /* 0C08E0DE mov.l @(disp,pc),Rn */
	IF(0x0C08E0E0u); { u32 t_ = r8; PR = 0x0C08E0E4u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C08E0E4u); }  /* 0C08E0E0 jsr @Rn */
L_0C08E0E4: BLKS(0x0C08E0E4u);
	r2 = R32(r10 + 0x24u); UPD(0x0C08E0E6u, 1);  /* 0C08E0E4 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C08E0E6 mov Rm,Rn */
	r12 = 0xC058030u; UPD(0x0C08E0EAu, 2);  /* 0C08E0E8 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C08E0EA add Rm,Rn */
	r5 = 0xCCCCCu; UPD(0x0C08E0EEu, 2);  /* 0C08E0EC mov.l @(disp,pc),Rn */
	IF(0x0C08E0EEu); { u32 t_ = r12; PR = 0x0C08E0F2u; W32(r14 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C08E0F2u); }  /* 0C08E0EE jsr @Rn */
L_0C08E0F2: BLKS(0x0C08E0F2u);
	r6 = R32(r10 + 0x28u); UPD(0x0C08E0F4u, 1);  /* 0C08E0F2 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08E0F4 add #imm,Rn */
	r13 = 0x30000u; UPD(0x0C08E0F8u, 2);  /* 0C08E0F6 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C08E0F8 add Rm,Rn */
	W32(r15, r13); UPD(0x0C08E0FCu, 2);  /* 0C08E0FA mov.l Rm,@Rn */
	{ r4 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C08DC72u, 3); goto L_0C08DC72; }  /* 0C08E0FC bra */
L_0C08E100: BLKS(0x0C08E100u);
	r1 += r5;  /* 0C08E100 add Rm,Rn */
	r1 += r2;  /* 0C08E102 add Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C08E012u, 5); goto L_0C08E012; }  /* 0C08E104 bra */
}

/* FUN_0c08e140 */
void f_0C08E140(sh3_t *c)
{
	LOCALS;
L_0C08E140: BLKS(0x0C08E140u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08E142u, 1);  /* 0C08E140 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08E144u, 1);  /* 0C08E142 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08E146u, 1);  /* 0C08E144 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08E148u, 1);  /* 0C08E146 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08E14Au, 1);  /* 0C08E148 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08E14Cu, 1);  /* 0C08E14A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08E14Eu, 1);  /* 0C08E14C mov.l Rm,@-Rn */
	r9 = 0xC22C874u; UPD(0x0C08E150u, 1);  /* 0C08E14E mov.l @(disp,pc),Rn */
	IF(0x0C08E150u); r15 -= 4; W32(r15, PR); UPD(0x0C08E152u, 1);  /* 0C08E150 sts.l pr,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C08E154u, 1);  /* 0C08E152 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C08E154 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C08E158u, 2);  /* 0C08E156 mov.w @Rm,Rn */
	r14 = r15;  /* 0C08E158 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C08E15Cu, 2);  /* 0C08E15A mov.l @(disp,pc),Rn */
	IF(0x0C08E15Cu); { u32 t_ = r8; PR = 0x0C08E160u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C08E160u); }  /* 0C08E15C jsr @Rn */
L_0C08E160: BLKS(0x0C08E160u);
	T = (r0 & r0) == 0;  /* 0C08E160 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08E180u, 4); goto L_0C08E180; } UPD(0x0C08E166u, 1); goto L_0C08E166; }  /* 0C08E162 bf/s */
L_0C08E166: BLKS(0x0C08E166u);
	r14 += 0xCu;  /* 0C08E166 add #imm,Rn */
	r15 = r14;  /* 0C08E168 mov Rm,Rn */
	IF(0x0C08E16Au); PR = R32(r15); r15 += 4; UPD(0x0C08E16Cu, 3);  /* 0C08E16A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08E16Eu, 1);  /* 0C08E16C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08E170u, 1);  /* 0C08E16E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08E172u, 1);  /* 0C08E170 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08E174u, 1);  /* 0C08E172 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08E176u, 1);  /* 0C08E174 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08E178u, 1);  /* 0C08E176 mov.l @Rm+,Rn */
	IF(0x0C08E178u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08E178 rts */
L_0C08E180: BLKS(0x0C08E180u);
	r8 = 0xC0606C0u; UPD(0x0C08E182u, 1);  /* 0C08E180 mov.l @(disp,pc),Rn */
	IF(0x0C08E182u); { u32 t_ = r8; PR = 0x0C08E186u; r4 = 0x44u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C08E186u); }  /* 0C08E182 jsr @Rn */
L_0C08E186: BLKS(0x0C08E186u);
	T = (r0 & r0) == 0;  /* 0C08E186 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08E166u, 4); goto L_0C08E166; } goto L_0C08E18C; }  /* 0C08E188 bt/s */
L_0C08E18C: BLKS(0x0C08E18Cu);
	r1 = 0xC2755BCu; UPD(0x0C08E18Eu, 2);  /* 0C08E18C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C08E190u, 1);  /* 0C08E18E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r10 = v_; } UPD(0x0C08E192u, 1);  /* 0C08E190 mov.w @Rm+,Rn */
	IF(0x0C08E192u); MACL = r10 * r8;  /* 0C08E192 mul.l Rm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C08E196u, 3);  /* 0C08E194 mov.l Rm,@(disp,Rn) */
	r5 = 0xC286509u; UPD(0x0C08E198u, 1);  /* 0C08E196 mov.l @(disp,pc),Rn */
	IF(0x0C08E198u); r8 = MACL;  /* 0C08E198 sts macl,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C08E19Cu, 2);  /* 0C08E19A mov.w @Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C08E19Eu, 1);  /* 0C08E19C mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFFFF;  /* 0C08E19E extu.w Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C08E1A2u, 2);  /* 0C08E1A0 mov.b @Rm,Rn */
	r8 += r6;  /* 0C08E1A2 add Rm,Rn */
	r2 = 0xC28629Eu; UPD(0x0C08E1A6u, 2);  /* 0C08E1A4 mov.l @(disp,pc),Rn */
	r9 = 0x4Cu;  /* 0C08E1A6 mov #imm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C08E1AAu, 2);  /* 0C08E1A8 mov.l Rm,@(disp,Rn) */
	r12 = (u32)(s32)(s16)R16(r2); UPD(0x0C08E1ACu, 1);  /* 0C08E1AA mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C08E1AEu, 1);  /* 0C08E1AC mov.w @(disp,pc),Rn */
	IF(0x0C08E1AEu); W16(r0 + r8, r12); UPD(0x0C08E1B0u, 1);  /* 0C08E1AE mov.w Rm,@(r0,Rn) */
	r4 = 0xC0008014u; UPD(0x0C08E1B2u, 1);  /* 0C08E1B0 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C08E1B2 add #imm,Rn */
	IF(0x0C08E1B4u); W16(r0 + r8, r12); UPD(0x0C08E1B6u, 2);  /* 0C08E1B4 mov.w Rm,@(r0,Rn) */
	r13 = 0xC0A02D0u; UPD(0x0C08E1B8u, 1);  /* 0C08E1B6 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C08E1B8 mov #imm,Rn */
	W32(r8, r4); UPD(0x0C08E1BCu, 2);  /* 0C08E1BA mov.l Rm,@Rn */
	W32(r14, r7); UPD(0x0C08E1BEu, 1);  /* 0C08E1BC mov.l Rm,@Rn */
	r4 = r10;  /* 0C08E1BE mov Rm,Rn */
	W32(r8 + 0xCu, r12); UPD(0x0C08E1C2u, 2);  /* 0C08E1C0 mov.l Rm,@(disp,Rn) */
	IF(0x0C08E1C2u); { u32 t_ = r13; PR = 0x0C08E1C6u; W32(r8 + 0x8u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C08E1C6u); }  /* 0C08E1C2 jsr @Rn */
L_0C08E1C6: BLKS(0x0C08E1C6u);
	r1 = R32(r14); UPD(0x0C08E1C8u, 1);  /* 0C08E1C6 mov.l @Rm,Rn */
	r11 = 0xC21F5E2u; UPD(0x0C08E1CAu, 1);  /* 0C08E1C8 mov.l @(disp,pc),Rn */
	IF(0x0C08E1CAu); MACL = r1 * r9;  /* 0C08E1CA mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r11); UPD(0x0C08E1CEu, 3);  /* 0C08E1CC mov.w @Rm,Rn */
	r5 = 0xC26CAE0u; UPD(0x0C08E1D0u, 1);  /* 0C08E1CE mov.l @(disp,pc),Rn */
	IF(0x0C08E1D0u); r11 = MACL;  /* 0C08E1D0 sts macl,Rn */
	r4 = 0xC392D5Eu; UPD(0x0C08E1D4u, 2);  /* 0C08E1D2 mov.l @(disp,pc),Rn */
	r11 += r5;  /* 0C08E1D4 add Rm,Rn */
	r7 = R32(r11 + 0x8u); UPD(0x0C08E1D8u, 2);  /* 0C08E1D6 mov.l @(disp,Rm),Rn */
	IF(0x0C08E1D8u); r6 <<= 16;  /* 0C08E1D8 shll16 Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C08E1DCu, 2);  /* 0C08E1DA mov.w @Rm,Rn */
	r6 -= r7;  /* 0C08E1DC sub Rm,Rn */
	r0 = 0xC0A1530u; UPD(0x0C08E1E0u, 2);  /* 0C08E1DE mov.l @(disp,pc),Rn */
	IF(0x0C08E1E0u); r3 <<= 16;  /* 0C08E1E0 shll16 Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C08E1E4u, 2);  /* 0C08E1E2 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C08E1E4 mov Rm,Rn */
	IF(0x0C08E1E6u); { u32 t_ = r0; PR = 0x0C08E1EAu; W32(r8 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C08E1EAu); }  /* 0C08E1E6 jsr @Rn */
L_0C08E1EA: BLKS(0x0C08E1EAu);
	r2 = 0x3u;  /* 0C08E1EA mov #imm,Rn */
	r2 += r14;  /* 0C08E1EC add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C08E1F0u, 3);  /* 0C08E1EE mov.b @Rm,Rn */
	r11 += 0x42u;  /* 0C08E1F0 add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C08E1F4u, 2);  /* 0C08E1F2 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C08E1F4 mov Rm,Rn */
	IF(0x0C08E1F6u); W8(r0 + r8, r13); UPD(0x0C08E1F8u, 2);  /* 0C08E1F6 mov.b Rm,@(r0,Rn) */
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C08E1FAu, 1);  /* 0C08E1F8 mov.b @Rm,Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E1FA add #imm,Rn */
	r9 = r5;  /* 0C08E1FC mov Rm,Rn */
	r9 += 0x1u;  /* 0C08E1FE add #imm,Rn */
	IF(0x0C08E200u); W8(r0 + r8, r9); UPD(0x0C08E202u, 4);  /* 0C08E200 mov.b Rm,@(r0,Rn) */
	r13 = r8;  /* 0C08E202 mov Rm,Rn */
	r9 = 0xACu; UPD(0x0C08E206u, 2);  /* 0C08E204 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C08E206 add Rm,Rn */
	r9 += 0x1u;  /* 0C08E208 add #imm,Rn */
	r6 = 0xC0A1780u; UPD(0x0C08E20Cu, 3);  /* 0C08E20A mov.l @(disp,pc),Rn */
	W8(r9, r5); UPD(0x0C08E20Eu, 1);  /* 0C08E20C mov.b Rm,@Rn */
	r7 = 0xC27DC20u; UPD(0x0C08E210u, 1);  /* 0C08E20E mov.l @(disp,pc),Rn */
	IF(0x0C08E210u); { u32 t_ = r6; PR = 0x0C08E214u; r5 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1780, 0x0C0A1780u, 0x0C08E214u); }  /* 0C08E210 jsr @Rn */
L_0C08E214: BLKS(0x0C08E214u);
	r2 = 0xA0u; UPD(0x0C08E216u, 1);  /* 0C08E214 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C08E216 add Rm,Rn */
	r2 += 0x2u;  /* 0C08E218 add #imm,Rn */
	W8(r2, r12); UPD(0x0C08E21Cu, 3);  /* 0C08E21A mov.b Rm,@Rn */
	r1 = 0x8Cu; UPD(0x0C08E21Eu, 1);  /* 0C08E21C mov.w @(disp,pc),Rn */
	r4 = 0x94u; UPD(0x0C08E220u, 1);  /* 0C08E21E mov.w @(disp,pc),Rn */
	r1 += r8;  /* 0C08E220 add Rm,Rn */
	r0 = 0x90u; UPD(0x0C08E224u, 2);  /* 0C08E222 mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C08E224 add Rm,Rn */
	{ u32 v_ = r12; r2 -= 1; W8(r2, v_); } UPD(0x0C08E228u, 2);  /* 0C08E226 mov.b Rm,@-Rn */
	r3 = 0x505050u; UPD(0x0C08E22Au, 1);  /* 0C08E228 mov.l @(disp,pc),Rn */
	IF(0x0C08E22Au); W32(r0 + r8, r12); UPD(0x0C08E22Cu, 1);  /* 0C08E22A mov.l Rm,@(r0,Rn) */
	W32(r4, r12); UPD(0x0C08E22Eu, 1);  /* 0C08E22C mov.l Rm,@Rn */
	W32(r1, r12); UPD(0x0C08E230u, 1);  /* 0C08E22E mov.l Rm,@Rn */
	W32(r8 + 0x30u, r12); UPD(0x0C08E232u, 1);  /* 0C08E230 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r12); UPD(0x0C08E234u, 1);  /* 0C08E232 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r3); UPD(0x0C08E236u, 1);  /* 0C08E234 mov.l Rm,@(disp,Rn) */
	r12 = 0x0u;  /* 0C08E236 mov #imm,Rn */
	W32(r14 + 0x4u, r9); UPD(0x0C08E23Au, 2);  /* 0C08E238 mov.l Rm,@(disp,Rn) */
	IF(0x0C08E23Au); ;  /* 0C08E23A nop */
	UPD(0x0C08E23Cu, 1);
L_0C08E23C: BLKS(0x0C08E23Cu);
	r3 = R32(r14 + 0x8u); UPD(0x0C08E23Eu, 1);  /* 0C08E23C mov.l @(disp,Rm),Rn */
	r8 = 0x1Cu;  /* 0C08E23E mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r10 = v_; } UPD(0x0C08E242u, 2);  /* 0C08E240 mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C08E244u, 1);  /* 0C08E242 mov.w @(disp,pc),Rn */
	IF(0x0C08E244u); MACL = r10 * r9;  /* 0C08E244 mul.l Rm,Rn */
	r0 = 0xC1C2118u; UPD(0x0C08E248u, 3);  /* 0C08E246 mov.l @(disp,pc),Rn */
	IF(0x0C08E248u); r9 = MACL;  /* 0C08E248 sts macl,Rn */
	IF(0x0C08E24Au); MACL = r12 * r8;  /* 0C08E24A mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C08E24Eu, 4);  /* 0C08E24C mov.l @(disp,pc),Rn */
	IF(0x0C08E24Eu); r8 = MACL;  /* 0C08E24E sts macl,Rn */
	r8 += r0;  /* 0C08E250 add Rm,Rn */
	r8 += 0x4u;  /* 0C08E252 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r5 = v_; } UPD(0x0C08E256u, 4);  /* 0C08E254 mov.w @Rm+,Rn */
	r9 += r11;  /* 0C08E256 add Rm,Rn */
	r0 = 0xC2755BCu; UPD(0x0C08E25Au, 2);  /* 0C08E258 mov.l @(disp,pc),Rn */
	r5 += r5;  /* 0C08E25A add Rm,Rn */
	IF(0x0C08E25Cu); r7 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C08E25Eu, 2);  /* 0C08E25C mov.w @(r0,Rm),Rn */
	r11 = r9;  /* 0C08E25E mov Rm,Rn */
	r11 += 0x7Cu;  /* 0C08E260 add #imm,Rn */
	W16(r11, r7); UPD(0x0C08E264u, 3);  /* 0C08E262 mov.w Rm,@Rn */
	r9 += 0x7Eu;  /* 0C08E264 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C08E268u, 2);  /* 0C08E266 mov.w @Rm,Rn */
	r6 += r6;  /* 0C08E268 add Rm,Rn */
	IF(0x0C08E26Au); r2 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C08E26Cu, 2);  /* 0C08E26A mov.w @(r0,Rm),Rn */
	r8 += 0xFFFFFFFAu;  /* 0C08E26C add #imm,Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C08E270u, 2);  /* 0C08E26E mov.l Rm,@(disp,Rn) */
	r0 = 0x0u;  /* 0C08E270 mov #imm,Rn */
	W16(r9, r2); UPD(0x0C08E274u, 2);  /* 0C08E272 mov.w Rm,@Rn */
	r3 = 0xC22C874u; UPD(0x0C08E276u, 1);  /* 0C08E274 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFF82u;  /* 0C08E276 add #imm,Rn */
	r4 = R32(r8); UPD(0x0C08E27Au, 2);  /* 0C08E278 mov.l @Rm,Rn */
	r1 = 0xC0000000u; UPD(0x0C08E27Cu, 1);  /* 0C08E27A mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r3); UPD(0x0C08E27Eu, 1);  /* 0C08E27C mov.w @Rm,Rn */
	r4 |= r1;  /* 0C08E27E or Rm,Rn */
	r7 = r5 & 0xFFFF;  /* 0C08E280 extu.w Rm,Rn */
	W32(r9, r4); UPD(0x0C08E284u, 3);  /* 0C08E282 mov.l Rm,@Rn */
	W32(r9 + 0x4u, r7); UPD(0x0C08E286u, 1);  /* 0C08E284 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C08E286 mov Rm,Rn */
	r2 = 0xC0A02D0u; UPD(0x0C08E28Au, 2);  /* 0C08E288 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x8u); UPD(0x0C08E28Cu, 1);  /* 0C08E28A mov.l @(disp,Rm),Rn */
	W32(r9 + 0xCu, r0); UPD(0x0C08E28Eu, 1);  /* 0C08E28C mov.l Rm,@(disp,Rn) */
	IF(0x0C08E28Eu); { u32 t_ = r2; PR = 0x0C08E292u; W32(r9 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C08E292u); }  /* 0C08E28E jsr @Rn */
L_0C08E292: BLKS(0x0C08E292u);
	r5 = R32(r13 + 0x24u); UPD(0x0C08E294u, 1);  /* 0C08E292 mov.l @(disp,Rm),Rn */
	r0 = r9;  /* 0C08E294 mov Rm,Rn */
	r7 = R32(r13 + 0x28u); UPD(0x0C08E298u, 2);  /* 0C08E296 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x24u, r5); UPD(0x0C08E29Au, 1);  /* 0C08E298 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r7); UPD(0x0C08E29Cu, 1);  /* 0C08E29A mov.l Rm,@(disp,Rn) */
	r3 = 0x86u; UPD(0x0C08E29Eu, 1);  /* 0C08E29C mov.w @(disp,pc),Rn */
	r6 = R32(r8 + 0xCu); UPD(0x0C08E2A0u, 1);  /* 0C08E29E mov.l @(disp,Rm),Rn */
	r4 = 0x4000u; UPD(0x0C08E2A2u, 1);  /* 0C08E2A0 mov.w @(disp,pc),Rn */
	W32(r9 + 0x2Cu, r6); UPD(0x0C08E2A4u, 1);  /* 0C08E2A2 mov.l Rm,@(disp,Rn) */
	IF(0x0C08E2A4u); W16(r0 + r3, r4); UPD(0x0C08E2A6u, 1);  /* 0C08E2A4 mov.w Rm,@(r0,Rn) */
	r0 = R32(r8 + 0x10u); UPD(0x0C08E2A8u, 1);  /* 0C08E2A6 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C08E2AAu, 1);  /* 0C08E2A8 mov.l Rm,@(disp,Rn) */
	r8 += 0x14u;  /* 0C08E2AA add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r2 = v_; } UPD(0x0C08E2AEu, 2);  /* 0C08E2AC mov.w @Rm+,Rn */
	r0 = 0x88u; UPD(0x0C08E2B0u, 1);  /* 0C08E2AE mov.w @(disp,pc),Rn */
	r5 = 0xA0u; UPD(0x0C08E2B2u, 1);  /* 0C08E2B0 mov.w @(disp,pc),Rn */
	IF(0x0C08E2B2u); W16(r0 + r9, r2); UPD(0x0C08E2B4u, 1);  /* 0C08E2B2 mov.w Rm,@(r0,Rn) */
	r5 += r9;  /* 0C08E2B4 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r4 = v_; } UPD(0x0C08E2B8u, 2);  /* 0C08E2B6 mov.b @Rm+,Rn */
	r5 += 0x1u;  /* 0C08E2B8 add #imm,Rn */
	W8(r5, r4); UPD(0x0C08E2BCu, 2);  /* 0C08E2BA mov.b Rm,@Rn */
	r7 = 0xC0A1530u; UPD(0x0C08E2BEu, 1);  /* 0C08E2BC mov.l @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C08E2BE add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r3 = v_; } UPD(0x0C08E2C2u, 2);  /* 0C08E2C0 mov.b @Rm+,Rn */
	r4 = r10;  /* 0C08E2C2 mov Rm,Rn */
	IF(0x0C08E2C4u); { u32 t_ = r7; PR = 0x0C08E2C8u; W8(r5, r3); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C08E2C8u); }  /* 0C08E2C4 jsr @Rn */
L_0C08E2C8: BLKS(0x0C08E2C8u);
	r0 = 0xB0u; UPD(0x0C08E2CAu, 1);  /* 0C08E2C8 mov.w @(disp,pc),Rn */
	r5 = r9;  /* 0C08E2CA mov Rm,Rn */
	IF(0x0C08E2CCu); r6 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C08E2CEu, 2);  /* 0C08E2CC mov.b @(r0,Rm),Rn */
	IF(0x0C08E2CEu); W8(r0 + r9, r6); UPD(0x0C08E2D0u, 1);  /* 0C08E2CE mov.b Rm,@(r0,Rn) */
	r0 = (u32)(s32)(s16)R16(r11); UPD(0x0C08E2D2u, 1);  /* 0C08E2D0 mov.w @Rm,Rn */
	r11 = 0xB4u; UPD(0x0C08E2D4u, 1);  /* 0C08E2D2 mov.w @(disp,pc),Rn */
	r2 = r0 & 0xFFFF;  /* 0C08E2D4 extu.w Rm,Rn */
	IF(0x0C08E2D6u); MACL = r2 * r11;  /* 0C08E2D6 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C08E2DAu, 4);  /* 0C08E2D8 mov.l @(disp,pc),Rn */
	r4 = 0xA8u; UPD(0x0C08E2DCu, 1);  /* 0C08E2DA mov.w @(disp,pc),Rn */
	IF(0x0C08E2DCu); r10 = MACL;  /* 0C08E2DC sts macl,Rn */
	r10 += r1;  /* 0C08E2DE add Rm,Rn */
	r10 += r4;  /* 0C08E2E0 add Rm,Rn */
	r10 += 0x1u;  /* 0C08E2E2 add #imm,Rn */
	r0 = 0xACu; UPD(0x0C08E2E6u, 5);  /* 0C08E2E4 mov.w @(disp,pc),Rn */
	r5 += r4;  /* 0C08E2E6 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C08E2EAu, 2);  /* 0C08E2E8 mov.b @Rm,Rn */
	r0 += r9;  /* 0C08E2EA add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C08E2EEu, 2);  /* 0C08E2EC mov.b @Rm,Rn */
	r0 += 0x3u;  /* 0C08E2EE add #imm,Rn */
	r5 += 0x1u;  /* 0C08E2F0 add #imm,Rn */
	r3 += r7;  /* 0C08E2F2 add Rm,Rn */
	W8(r0, r7); UPD(0x0C08E2F6u, 4);  /* 0C08E2F4 mov.b Rm,@Rn */
	r11 = 0x0u;  /* 0C08E2F6 mov #imm,Rn */
	W8(r5, r3); UPD(0x0C08E2FAu, 2);  /* 0C08E2F8 mov.b Rm,@Rn */
	r0 += 0xFFFFFFFEu;  /* 0C08E2FA add #imm,Rn */
	r6 = R32(r14 + 0x4u); UPD(0x0C08E2FEu, 2);  /* 0C08E2FC mov.l @(disp,Rm),Rn */
	r10 = 0x42u;  /* 0C08E2FE mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r6); UPD(0x0C08E302u, 2);  /* 0C08E300 mov.b @Rm,Rn */
	W8(r0, r4); UPD(0x0C08E304u, 1);  /* 0C08E302 mov.b Rm,@Rn */
	r2 = R32(r13 + 0x38u); UPD(0x0C08E306u, 1);  /* 0C08E304 mov.l @(disp,Rm),Rn */
	r0 = 0x8Cu; UPD(0x0C08E308u, 1);  /* 0C08E306 mov.w @(disp,pc),Rn */
	W32(r9 + 0x38u, r2); UPD(0x0C08E30Au, 1);  /* 0C08E308 mov.l Rm,@(disp,Rn) */
	IF(0x0C08E30Au); W32(r0 + r9, r11); UPD(0x0C08E30Cu, 1);  /* 0C08E30A mov.l Rm,@(r0,Rn) */
	r9 += 0x50u;  /* 0C08E30C add #imm,Rn */
	W32(r9, r11); UPD(0x0C08E310u, 2);  /* 0C08E30E mov.l Rm,@Rn */
	r9 = r12;  /* 0C08E310 mov Rm,Rn */
	r9 += 0x1u;  /* 0C08E312 add #imm,Rn */
	r12 = (u32)(s32)(s16)r9;  /* 0C08E314 exts.w Rm,Rn */
	T = (s32)r12 > (s32)r10;  /* 0C08E316 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08E23Cu, 7); goto L_0C08E23C; }  /* 0C08E318 bf */
L_0C08E31A: BLKS(0x0C08E31Au);
	r12 = 0x0u;  /* 0C08E31A mov #imm,Rn */
	r10 = 0xC392AFDu; UPD(0x0C08E31Eu, 2);  /* 0C08E31C mov.l @(disp,pc),Rn */
	r13 = 0xC392AFEu; UPD(0x0C08E320u, 1);  /* 0C08E31E mov.l @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C08E320 mov #imm,Rn */
	W8(r10, r12); UPD(0x0C08E324u, 2);  /* 0C08E322 mov.b Rm,@Rn */
	{ W8(r13, r12); /* slot mov.b Rm,@Rn */ UPD(0x0C08E166u, 3); goto L_0C08E166; }  /* 0C08E324 bra */
}

void f_0C08E3A0(sh3_t *c)
{
	LOCALS;
L_0C08E3A0: BLKS(0x0C08E3A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08E3A2u, 1);  /* 0C08E3A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08E3A4u, 1);  /* 0C08E3A2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08E3A6u, 1);  /* 0C08E3A4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C08E3A6 exts.w Rm,Rn */
	r3 = 0xB4u; UPD(0x0C08E3AAu, 2);  /* 0C08E3A8 mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08E3ACu, 1);  /* 0C08E3AA mov.l Rm,@-Rn */
	IF(0x0C08E3ACu); MACL = r9 * r3;  /* 0C08E3AC mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08E3B0u, 3);  /* 0C08E3AE mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C08E3B2u, 1);  /* 0C08E3B0 mov.l @(disp,pc),Rn */
	IF(0x0C08E3B2u); r2 = MACL;  /* 0C08E3B2 sts macl,Rn */
	IF(0x0C08E3B4u); r15 -= 4; W32(r15, PR); UPD(0x0C08E3B6u, 2);  /* 0C08E3B4 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08E3B6 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08E3BAu, 2);  /* 0C08E3B8 mov.l @(disp,Rm),Rn */
	r0 = 0x4Eu;  /* 0C08E3BA mov #imm,Rn */
	T = r2 > r0;  /* 0C08E3BC cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08E3C6u, 5); goto L_0C08E3C6; } goto L_0C08E3C2; }  /* 0C08E3BE bf/s */
L_0C08E3C2: BLKS(0x0C08E3C2u);
	{ IF(0x0C08E3C4u); ; /* slot nop */ UPD(0x0C08E960u, 4); goto L_0C08E960; }  /* 0C08E3C2 bra */
L_0C08E3C6: BLKS(0x0C08E3C6u);
	r0 = 0xC08E3D8u;  /* 0C08E3C6 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08E3C8 add Rm,Rn */
	IF(0x0C08E3CAu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08E3CCu, 3);  /* 0C08E3CA mov.w @(r0,Rm),Rn */
	IF(0x0C08E3CCu); { u32 tv_ = (r4 + 0x0C08E3D0u); u32 t_ = PHYS(tv_); IF(0x0C08E3CEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08E480u: goto L_0C08E480; case 0x0C08E4B0u: goto L_0C08E4B0; case 0x0C08E4F0u: goto L_0C08E4F0; case 0x0C08E550u: goto L_0C08E550; case 0x0C08E570u: goto L_0C08E570; case 0x0C08E5A0u: goto L_0C08E5A0; case 0x0C08E5D0u: goto L_0C08E5D0; case 0x0C08E670u: goto L_0C08E670; case 0x0C08E6C0u: goto L_0C08E6C0; case 0x0C08E720u: goto L_0C08E720; case 0x0C08E750u: goto L_0C08E750; case 0x0C08E7A0u: goto L_0C08E7A0; case 0x0C08E7E0u: goto L_0C08E7E0; case 0x0C08E800u: goto L_0C08E800; case 0x0C08E850u: goto L_0C08E850; case 0x0C08E8B0u: goto L_0C08E8B0; case 0x0C08E8D0u: goto L_0C08E8D0; case 0x0C08E960u: goto L_0C08E960; case 0x0C08E970u: goto L_0C08E970; case 0x0C08E976u: goto L_0C08E976; case 0x0C08E9A0u: goto L_0C08E9A0; case 0x0C08E9D0u: goto L_0C08E9D0; case 0x0C08EA20u: goto L_0C08EA20; case 0x0C08EA50u: goto L_0C08EA50; case 0x0C08EA80u: goto L_0C08EA80; default: JUMPD(tv_); } }  /* 0C08E3CC braf Rn */
L_0C08E480: BLKS(0x0C08E480u);
	r11 = 0xC061B80u; UPD(0x0C08E482u, 1);  /* 0C08E480 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C08E482 mov #imm,Rn */
	r10 = 0xC0A17E0u; UPD(0x0C08E486u, 2);  /* 0C08E484 mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C08E488u, 1);  /* 0C08E486 mov.w @(disp,pc),Rn */
	IF(0x0C08E488u); { u32 t_ = r11; PR = 0x0C08E48Cu; r5 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C061B80, 0x0C061B80u, 0x0C08E48Cu); }  /* 0C08E488 jsr @Rn */
L_0C08E48C: BLKS(0x0C08E48Cu);
	r5 = 0xC1C286Cu; UPD(0x0C08E48Eu, 1);  /* 0C08E48C mov.l @(disp,pc),Rn */
	IF(0x0C08E48Eu); { u32 t_ = r10; PR = 0x0C08E492u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A17E0, 0x0C0A17E0u, 0x0C08E492u); }  /* 0C08E48E jsr @Rn */
L_0C08E492: BLKS(0x0C08E492u);
	IF(0x0C08E492u); MACL = r9 * r8;  /* 0C08E492 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C08E496u, 3);  /* 0C08E494 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C08E496 mov #imm,Rn */
	IF(0x0C08E498u); r7 = MACL;  /* 0C08E498 sts macl,Rn */
	r0 = 0x8Cu; UPD(0x0C08E49Cu, 3);  /* 0C08E49A mov.w @(disp,pc),Rn */
	r5 += r7;  /* 0C08E49C add Rm,Rn */
	IF(0x0C08E49Eu); W32(r0 + r5, r6); UPD(0x0C08E4A0u, 2);  /* 0C08E49E mov.l Rm,@(r0,Rn) */
L_0C08E4A0: BLKS(0x0C08E4A0u);
	r15 = r14;  /* 0C08E4A0 mov Rm,Rn */
	IF(0x0C08E4A2u); PR = R32(r15); r15 += 4; UPD(0x0C08E4A4u, 2);  /* 0C08E4A2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08E4A6u, 1);  /* 0C08E4A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08E4A8u, 1);  /* 0C08E4A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08E4AAu, 1);  /* 0C08E4A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08E4ACu, 1);  /* 0C08E4AA mov.l @Rm+,Rn */
	IF(0x0C08E4ACu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08E4AC rts */
L_0C08E4B0: BLKS(0x0C08E4B0u);
	r8 = 0xC0A03F0u; UPD(0x0C08E4B2u, 1);  /* 0C08E4B0 mov.l @(disp,pc),Rn */
	IF(0x0C08E4B2u); { u32 t_ = r8; PR = 0x0C08E4B6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C08E4B6u); }  /* 0C08E4B2 jsr @Rn */
L_0C08E4B6: BLKS(0x0C08E4B6u);
	IF(0x0C08E4B6u); T = (s32)r0 >= 0;  /* 0C08E4B6 cmp/pz Rn */
	if (!T) { UPD(0x0C08E4D8u, 4); goto L_0C08E4D8; }  /* 0C08E4B8 bf */
L_0C08E4BA: BLKS(0x0C08E4BAu);
	r5 = 0xB4u; UPD(0x0C08E4BCu, 1);  /* 0C08E4BA mov.w @(disp,pc),Rn */
	IF(0x0C08E4BCu); MACL = r0 * r5;  /* 0C08E4BC mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C08E4C0u, 3);  /* 0C08E4BE mov.l @(disp,pc),Rn */
	IF(0x0C08E4C0u); r4 = MACL;  /* 0C08E4C0 sts macl,Rn */
	r0 = 0xA7u; UPD(0x0C08E4C4u, 2);  /* 0C08E4C2 mov.w @(disp,pc),Rn */
	IF(0x0C08E4C4u); MACL = r9 * r5;  /* 0C08E4C4 mul.l Rm,Rn */
	r4 += r2;  /* 0C08E4C6 add Rm,Rn */
	r4 += r0;  /* 0C08E4C8 add Rm,Rn */
	IF(0x0C08E4CAu); r0 = MACL;  /* 0C08E4CA sts macl,Rn */
	r0 += r2;  /* 0C08E4CC add Rm,Rn */
	r5 += 0xFFFFFFEDu;  /* 0C08E4CE add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C08E4D2u, 8);  /* 0C08E4D0 mov.b @Rm,Rn */
	IF(0x0C08E4D2u); r1 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C08E4D4u, 1);  /* 0C08E4D2 mov.b @(r0,Rm),Rn */
	r3 |= r1;  /* 0C08E4D4 or Rm,Rn */
	W8(r4, r3); UPD(0x0C08E4D8u, 2);  /* 0C08E4D6 mov.b Rm,@Rn */
L_0C08E4D8: BLKS(0x0C08E4D8u);
	r6 = 0xC0A0AE0u; UPD(0x0C08E4DAu, 1);  /* 0C08E4D8 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C08E4DA mov Rm,Rn */
	r15 = r14;  /* 0C08E4DC mov Rm,Rn */
	IF(0x0C08E4DEu); PR = R32(r15); r15 += 4; UPD(0x0C08E4E0u, 3);  /* 0C08E4DE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08E4E2u, 1);  /* 0C08E4E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08E4E4u, 1);  /* 0C08E4E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08E4E6u, 1);  /* 0C08E4E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08E4E8u, 1);  /* 0C08E4E6 mov.l @Rm+,Rn */
	IF(0x0C08E4E8u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A0AE0u: TAIL(f_0C0A0AE0); default: JUMPD(tv_); } }  /* 0C08E4E8 jmp @Rn */
L_0C08E4F0: BLKS(0x0C08E4F0u);
	r10 = 0xC0A03F0u; UPD(0x0C08E4F2u, 1);  /* 0C08E4F0 mov.l @(disp,pc),Rn */
	IF(0x0C08E4F2u); { u32 t_ = r10; PR = 0x0C08E4F6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C08E4F6u); }  /* 0C08E4F2 jsr @Rn */
L_0C08E4F6: BLKS(0x0C08E4F6u);
	IF(0x0C08E4F6u); T = (s32)r0 >= 0;  /* 0C08E4F6 cmp/pz Rn */
	if (!T) { UPD(0x0C08E518u, 4); goto L_0C08E518; }  /* 0C08E4F8 bf */
L_0C08E4FA: BLKS(0x0C08E4FAu);
	r2 = 0xB4u; UPD(0x0C08E4FCu, 1);  /* 0C08E4FA mov.w @(disp,pc),Rn */
	IF(0x0C08E4FCu); MACL = r0 * r2;  /* 0C08E4FC mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08E500u, 3);  /* 0C08E4FE mov.l @(disp,pc),Rn */
	IF(0x0C08E500u); r3 = MACL;  /* 0C08E500 sts macl,Rn */
	r1 = 0xA5u; UPD(0x0C08E504u, 2);  /* 0C08E502 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C08E504 add Rm,Rn */
	UPD(0x0C08E506u, 1);
L_0C08E506: BLKS(0x0C08E506u);
	IF(0x0C08E506u); MACL = r9 * r2;  /* 0C08E506 mul.l Rm,Rn */
	r3 += r1;  /* 0C08E508 add Rm,Rn */
	IF(0x0C08E50Au); r0 = MACL;  /* 0C08E50A sts macl,Rn */
	r0 += r7;  /* 0C08E50C add Rm,Rn */
	r2 += 0xFFFFFFEDu;  /* 0C08E50E add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C08E512u, 7);  /* 0C08E510 mov.b @Rm,Rn */
	IF(0x0C08E512u); r8 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08E514u, 1);  /* 0C08E512 mov.b @(r0,Rm),Rn */
	r7 |= r8;  /* 0C08E514 or Rm,Rn */
	W8(r3, r7); UPD(0x0C08E518u, 2);  /* 0C08E516 mov.b Rm,@Rn */
L_0C08E518: BLKS(0x0C08E518u);
	r0 = 0xB4u; UPD(0x0C08E51Au, 1);  /* 0C08E518 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E51A add #imm,Rn */
	IF(0x0C08E51Cu); MACL = r9 * r0;  /* 0C08E51C mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C08E520u, 4);  /* 0C08E51E mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C08E522u, 1);  /* 0C08E520 mov.w @(disp,pc),Rn */
	IF(0x0C08E522u); r8 = MACL;  /* 0C08E522 sts macl,Rn */
	r8 += r2;  /* 0C08E524 add Rm,Rn */
	IF(0x0C08E526u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E528u, 3);  /* 0C08E526 mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C08E528 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C08E52Cu, 2);  /* 0C08E52A mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E52C add #imm,Rn */
	IF(0x0C08E52Eu); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E530u, 2);  /* 0C08E52E mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C08E530 mov #imm,Rn */
	r9 = r4 & 0xFF;  /* 0C08E532 extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C08E536u, 3);  /* 0C08E534 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C08E538u, 1);  /* 0C08E536 mov.l @Rm,Rn */
L_0C08E538: BLKS(0x0C08E538u);
	r6 = R32(r8 + 0x24u); UPD(0x0C08E53Au, 1);  /* 0C08E538 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C08E53Cu, 1);  /* 0C08E53A mov.l @(disp,Rm),Rn */
	r0 = 0xC0AC800u; UPD(0x0C08E53Eu, 1);  /* 0C08E53C mov.l @(disp,pc),Rn */
L_0C08E53E: BLKS(0x0C08E53Eu);
	IF(0x0C08E53Eu); { u32 t_ = r0; PR = 0x0C08E542u; IF(0x0C08E540u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C08E542u); }  /* 0C08E53E jsr @Rn */
L_0C08E542: BLKS(0x0C08E542u);
	r5 = 0x0u;  /* 0C08E542 mov #imm,Rn */
	W32(r8, r5); UPD(0x0C08E546u, 2);  /* 0C08E544 mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C08E4A0u, 3); goto L_0C08E4A0; }  /* 0C08E546 bra */
L_0C08E550: BLKS(0x0C08E550u);
	r11 = 0xC0A03F0u; UPD(0x0C08E552u, 1);  /* 0C08E550 mov.l @(disp,pc),Rn */
	IF(0x0C08E552u); { u32 t_ = r11; PR = 0x0C08E556u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C08E556u); }  /* 0C08E552 jsr @Rn */
L_0C08E556: BLKS(0x0C08E556u);
	IF(0x0C08E556u); T = (s32)r0 >= 0;  /* 0C08E556 cmp/pz Rn */
	if (!T) { UPD(0x0C08E518u, 4); goto L_0C08E518; }  /* 0C08E558 bf */
L_0C08E55A: BLKS(0x0C08E55Au);
	r2 = 0xB4u; UPD(0x0C08E55Cu, 1);  /* 0C08E55A mov.w @(disp,pc),Rn */
	IF(0x0C08E55Cu); MACL = r0 * r2;  /* 0C08E55C mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08E560u, 3);  /* 0C08E55E mov.l @(disp,pc),Rn */
	r1 = 0xA6u; UPD(0x0C08E562u, 1);  /* 0C08E560 mov.w @(disp,pc),Rn */
	IF(0x0C08E562u); r3 = MACL;  /* 0C08E562 sts macl,Rn */
	{ r3 += r7; /* slot add Rm,Rn */ UPD(0x0C08E506u, 4); goto L_0C08E506; }  /* 0C08E564 bra */
L_0C08E570: BLKS(0x0C08E570u);
	r8 = 0xB4u; UPD(0x0C08E572u, 1);  /* 0C08E570 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E572 add #imm,Rn */
	IF(0x0C08E574u); MACL = r9 * r8;  /* 0C08E574 mul.l Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08E578u, 4);  /* 0C08E576 mov.w @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C08E578 mov #imm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C08E57Cu, 2);  /* 0C08E57A mov.l @(disp,pc),Rn */
	IF(0x0C08E57Cu); r8 = MACL;  /* 0C08E57C sts macl,Rn */
	r8 += r9;  /* 0C08E57E add Rm,Rn */
	IF(0x0C08E580u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E582u, 3);  /* 0C08E580 mov.b @(r0,Rm),Rn */
	r11 = r7 & 0xFF;  /* 0C08E582 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C08E586u, 2);  /* 0C08E584 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E586 add #imm,Rn */
	IF(0x0C08E588u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E58Au, 2);  /* 0C08E588 mov.b @(r0,Rm),Rn */
	r6 = r10 & 0xFF;  /* 0C08E58A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08E58Eu, 2);  /* 0C08E58C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C08E538u, 3); goto L_0C08E538; }  /* 0C08E58E bra */
L_0C08E5A0: BLKS(0x0C08E5A0u);
	r6 = 0xB4u; UPD(0x0C08E5A2u, 1);  /* 0C08E5A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E5A2 add #imm,Rn */
	IF(0x0C08E5A4u); MACL = r9 * r6;  /* 0C08E5A4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C08E5A8u, 4);  /* 0C08E5A6 mov.l @(disp,pc),Rn */
	IF(0x0C08E5A8u); r8 = MACL;  /* 0C08E5A8 sts macl,Rn */
	r8 += r0;  /* 0C08E5AA add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08E5AEu, 3);  /* 0C08E5AC mov.w @(disp,pc),Rn */
	IF(0x0C08E5AEu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E5B0u, 1);  /* 0C08E5AE mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C08E5B0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C08E5B4u, 2);  /* 0C08E5B2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E5B4 add #imm,Rn */
	IF(0x0C08E5B6u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E5B8u, 2);  /* 0C08E5B6 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C08E5B8 mov #imm,Rn */
	r4 = r3 & 0xFF;  /* 0C08E5BA extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C08E5BEu, 3);  /* 0C08E5BC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C08E5C0u, 1);  /* 0C08E5BE mov.l @Rm,Rn */
L_0C08E5C0: BLKS(0x0C08E5C0u);
	r6 = R32(r8 + 0x24u); UPD(0x0C08E5C2u, 1);  /* 0C08E5C0 mov.l @(disp,Rm),Rn */
L_0C08E5C2: BLKS(0x0C08E5C2u);
	r0 = 0xC0AD970u; UPD(0x0C08E5C4u, 1);  /* 0C08E5C2 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C08E53Eu, 3); goto L_0C08E53E; }  /* 0C08E5C4 bra */
L_0C08E5D0: BLKS(0x0C08E5D0u);
	r10 = 0xC0A03F0u; UPD(0x0C08E5D2u, 1);  /* 0C08E5D0 mov.l @(disp,pc),Rn */
	IF(0x0C08E5D2u); { u32 t_ = r10; PR = 0x0C08E5D6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C08E5D6u); }  /* 0C08E5D2 jsr @Rn */
L_0C08E5D6: BLKS(0x0C08E5D6u);
	IF(0x0C08E5D6u); T = (s32)r0 >= 0;  /* 0C08E5D6 cmp/pz Rn */
	if (!T) { UPD(0x0C08E5ECu, 4); goto L_0C08E5EC; }  /* 0C08E5D8 bf */
L_0C08E5DA: BLKS(0x0C08E5DAu);
	r4 = 0xB4u; UPD(0x0C08E5DCu, 1);  /* 0C08E5DA mov.w @(disp,pc),Rn */
	IF(0x0C08E5DCu); MACL = r0 * r4;  /* 0C08E5DC mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C08E5E0u, 3);  /* 0C08E5DE mov.l @(disp,pc),Rn */
	IF(0x0C08E5E0u); r11 = MACL;  /* 0C08E5E0 sts macl,Rn */
	r11 += r8;  /* 0C08E5E2 add Rm,Rn */
	r7 = R32(r11); UPD(0x0C08E5E6u, 3);  /* 0C08E5E4 mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C08E5E8u, 1);  /* 0C08E5E6 mov.w @(disp,pc),Rn */
	r7 |= r1;  /* 0C08E5E8 or Rm,Rn */
	W32(r11, r7); UPD(0x0C08E5ECu, 2);  /* 0C08E5EA mov.l Rm,@Rn */
L_0C08E5EC: BLKS(0x0C08E5ECu);
	r6 = 0xB4u; UPD(0x0C08E5EEu, 1);  /* 0C08E5EC mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E5EE add #imm,Rn */
	IF(0x0C08E5F0u); MACL = r9 * r6;  /* 0C08E5F0 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C08E5F4u, 4);  /* 0C08E5F2 mov.l @(disp,pc),Rn */
	IF(0x0C08E5F4u); r8 = MACL;  /* 0C08E5F4 sts macl,Rn */
	r8 += r0;  /* 0C08E5F6 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08E5FAu, 3);  /* 0C08E5F8 mov.w @(disp,pc),Rn */
	IF(0x0C08E5FAu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E5FCu, 1);  /* 0C08E5FA mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C08E5FC extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C08E600u, 2);  /* 0C08E5FE mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E600 add #imm,Rn */
	IF(0x0C08E602u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E604u, 2);  /* 0C08E602 mov.b @(r0,Rm),Rn */
	r5 = 0x6u;  /* 0C08E604 mov #imm,Rn */
	r9 = r3 & 0xFF;  /* 0C08E606 extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C08E60Au, 3);  /* 0C08E608 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C08E60Cu, 1);  /* 0C08E60A mov.l @Rm,Rn */
L_0C08E60C: BLKS(0x0C08E60Cu);
	r9 = 0xC0AB240u; UPD(0x0C08E60Eu, 1);  /* 0C08E60C mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C08E60E mov #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08E612u, 2);  /* 0C08E610 mov.l @(disp,Rm),Rn */
	IF(0x0C08E612u); { u32 t_ = r9; PR = 0x0C08E616u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C08E616u); }  /* 0C08E612 jsr @Rn */
L_0C08E616: BLKS(0x0C08E616u);
	W32(r8, r11); UPD(0x0C08E618u, 1);  /* 0C08E616 mov.l Rm,@Rn */
	r15 += 0x8u;  /* 0C08E618 add #imm,Rn */
	UPD(0x0C08E61Au, 1);
L_0C08E61A: BLKS(0x0C08E61Au);
	r0 = 0xC7C1FD0u; UPD(0x0C08E61Cu, 1);  /* 0C08E61A mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08E61C mov Rm,Rn */
	IF(0x0C08E61Eu); PR = R32(r15); r15 += 4; UPD(0x0C08E620u, 2);  /* 0C08E61E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08E622u, 1);  /* 0C08E620 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08E624u, 1);  /* 0C08E622 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08E626u, 1);  /* 0C08E624 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08E628u, 1);  /* 0C08E626 mov.l @Rm+,Rn */
	IF(0x0C08E628u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFCF0u: TAIL(f_0C0AFCF0); case 0x0C7C1FD0u: TAIL(f_0C7C1FD0); default: JUMPD(tv_); } }  /* 0C08E628 jmp @Rn */
L_0C08E670: BLKS(0x0C08E670u);
	r10 = 0xC0A03F0u; UPD(0x0C08E672u, 1);  /* 0C08E670 mov.l @(disp,pc),Rn */
	IF(0x0C08E672u); { u32 t_ = r10; PR = 0x0C08E676u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C08E676u); }  /* 0C08E672 jsr @Rn */
L_0C08E676: BLKS(0x0C08E676u);
	IF(0x0C08E676u); T = (s32)r0 >= 0;  /* 0C08E676 cmp/pz Rn */
	if (!T) { UPD(0x0C08E68Cu, 4); goto L_0C08E68C; }  /* 0C08E678 bf */
L_0C08E67A: BLKS(0x0C08E67Au);
	r4 = 0xB4u; UPD(0x0C08E67Cu, 1);  /* 0C08E67A mov.w @(disp,pc),Rn */
	IF(0x0C08E67Cu); MACL = r0 * r4;  /* 0C08E67C mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C08E680u, 3);  /* 0C08E67E mov.l @(disp,pc),Rn */
	IF(0x0C08E680u); r11 = MACL;  /* 0C08E680 sts macl,Rn */
	r11 += r8;  /* 0C08E682 add Rm,Rn */
	r7 = R32(r11); UPD(0x0C08E686u, 3);  /* 0C08E684 mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C08E688u, 1);  /* 0C08E686 mov.w @(disp,pc),Rn */
	r7 |= r1;  /* 0C08E688 or Rm,Rn */
	W32(r11, r7); UPD(0x0C08E68Cu, 2);  /* 0C08E68A mov.l Rm,@Rn */
L_0C08E68C: BLKS(0x0C08E68Cu);
	r6 = 0xB4u; UPD(0x0C08E68Eu, 1);  /* 0C08E68C mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E68E add #imm,Rn */
	IF(0x0C08E690u); MACL = r9 * r6;  /* 0C08E690 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C08E694u, 4);  /* 0C08E692 mov.l @(disp,pc),Rn */
	IF(0x0C08E694u); r8 = MACL;  /* 0C08E694 sts macl,Rn */
	r8 += r0;  /* 0C08E696 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08E69Au, 3);  /* 0C08E698 mov.w @(disp,pc),Rn */
	IF(0x0C08E69Au); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E69Cu, 1);  /* 0C08E69A mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C08E69C extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C08E6A0u, 2);  /* 0C08E69E mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E6A0 add #imm,Rn */
	IF(0x0C08E6A2u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E6A4u, 2);  /* 0C08E6A2 mov.b @(r0,Rm),Rn */
	r5 = 0x6u;  /* 0C08E6A4 mov #imm,Rn */
	r9 = r3 & 0xFF;  /* 0C08E6A6 extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C08E6AAu, 3);  /* 0C08E6A8 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C08E6ACu, 1);  /* 0C08E6AA mov.l @Rm,Rn */
L_0C08E6AC: BLKS(0x0C08E6ACu);
	r6 = R32(r8 + 0x24u); UPD(0x0C08E6AEu, 1);  /* 0C08E6AC mov.l @(disp,Rm),Rn */
	r0 = 0xC0AB240u; UPD(0x0C08E6B0u, 1);  /* 0C08E6AE mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C08E53Eu, 3); goto L_0C08E53E; }  /* 0C08E6B0 bra */
L_0C08E6C0: BLKS(0x0C08E6C0u);
	r10 = 0xC0A0540u; UPD(0x0C08E6C2u, 1);  /* 0C08E6C0 mov.l @(disp,pc),Rn */
	IF(0x0C08E6C2u); { u32 t_ = r10; PR = 0x0C08E6C6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C08E6C6u); }  /* 0C08E6C2 jsr @Rn */
L_0C08E6C6: BLKS(0x0C08E6C6u);
	IF(0x0C08E6C6u); T = (s32)r0 >= 0;  /* 0C08E6C6 cmp/pz Rn */
	if (!T) { UPD(0x0C08E706u, 4); goto L_0C08E706; }  /* 0C08E6C8 bf */
L_0C08E6CA: BLKS(0x0C08E6CAu);
	r15 += 0xFFFFFFF8u;  /* 0C08E6CA add #imm,Rn */
	r10 = 0xB4u; UPD(0x0C08E6CEu, 2);  /* 0C08E6CC mov.w @(disp,pc),Rn */
	IF(0x0C08E6CEu); MACL = r9 * r10;  /* 0C08E6CE mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C08E6D2u, 3);  /* 0C08E6D0 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C08E6D2 mov #imm,Rn */
	IF(0x0C08E6D4u); r0 = MACL;  /* 0C08E6D4 sts macl,Rn */
	r0 += r1;  /* 0C08E6D6 add Rm,Rn */
	r0 += 0x7Eu;  /* 0C08E6D8 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C08E6DCu, 5);  /* 0C08E6DA mov.w @Rm,Rn */
	IF(0x0C08E6DCu); MACL = r3 * r10;  /* 0C08E6DC mul.l Rm,Rn */
	r7 = 0xA9u; UPD(0x0C08E6E0u, 3);  /* 0C08E6DE mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C08E6E0 add #imm,Rn */
	IF(0x0C08E6E2u); r4 = MACL;  /* 0C08E6E2 sts macl,Rn */
	r4 += r1;  /* 0C08E6E4 add Rm,Rn */
	r10 += 0xFFFFFFF2u;  /* 0C08E6E6 add #imm,Rn */
	r4 += r10;  /* 0C08E6E8 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C08E6ECu, 6);  /* 0C08E6EA mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C08E6EC add #imm,Rn */
	W8(r4, r2); UPD(0x0C08E6F0u, 2);  /* 0C08E6EE mov.b Rm,@Rn */
	IF(0x0C08E6F0u); r8 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C08E6F2u, 1);  /* 0C08E6F0 mov.b @(r0,Rm),Rn */
	r4 = 0xCu;  /* 0C08E6F2 mov #imm,Rn */
	r6 = 0x20000u; UPD(0x0C08E6F6u, 2);  /* 0C08E6F4 mov.l @(disp,pc),Rn */
	r7 = r8 & 0xFF;  /* 0C08E6F6 extu.b Rm,Rn */
	r11 = 0xC7C27B0u; UPD(0x0C08E6FAu, 2);  /* 0C08E6F8 mov.l @(disp,pc),Rn */
	W32(r15, r6); UPD(0x0C08E6FCu, 1);  /* 0C08E6FA mov.l Rm,@Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08E6FEu, 1);  /* 0C08E6FC mov.l Rm,@(disp,Rn) */
	r5 = R32(r0 + 0x24u); UPD(0x0C08E700u, 1);  /* 0C08E6FE mov.l @(disp,Rm),Rn */
	IF(0x0C08E700u); { u32 t_ = r11; PR = 0x0C08E704u; r6 = R32(r0 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C27B0, 0x0C7C27B0u, 0x0C08E704u); }  /* 0C08E700 jsr @Rn */
L_0C08E704: BLKS(0x0C08E704u);
	r15 += 0x8u;  /* 0C08E704 add #imm,Rn */
	UPD(0x0C08E706u, 1);
L_0C08E706: BLKS(0x0C08E706u);
	r5 = 0xC1C2AA0u; UPD(0x0C08E708u, 1);  /* 0C08E706 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C08E708 mov Rm,Rn */
	UPD(0x0C08E70Au, 1);
L_0C08E70A: BLKS(0x0C08E70Au);
	r0 = 0xC0A17E0u; UPD(0x0C08E70Cu, 1);  /* 0C08E70A mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08E70C mov Rm,Rn */
	IF(0x0C08E70Eu); PR = R32(r15); r15 += 4; UPD(0x0C08E710u, 2);  /* 0C08E70E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08E712u, 1);  /* 0C08E710 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08E714u, 1);  /* 0C08E712 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08E716u, 1);  /* 0C08E714 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08E718u, 1);  /* 0C08E716 mov.l @Rm+,Rn */
	IF(0x0C08E718u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A17E0u: TAIL(f_0C0A17E0); default: JUMPD(tv_); } }  /* 0C08E718 jmp @Rn */
L_0C08E720: BLKS(0x0C08E720u);
	r8 = 0xB4u; UPD(0x0C08E722u, 1);  /* 0C08E720 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E722 add #imm,Rn */
	IF(0x0C08E724u); MACL = r9 * r8;  /* 0C08E724 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08E728u, 4);  /* 0C08E726 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C08E72Au, 1);  /* 0C08E728 mov.w @(disp,pc),Rn */
	IF(0x0C08E72Au); r8 = MACL;  /* 0C08E72A sts macl,Rn */
	r8 += r7;  /* 0C08E72C add Rm,Rn */
	IF(0x0C08E72Eu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E730u, 3);  /* 0C08E72E mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C08E730 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C08E734u, 2);  /* 0C08E732 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E734 add #imm,Rn */
	IF(0x0C08E736u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E738u, 2);  /* 0C08E736 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C08E738 mov #imm,Rn */
	r9 = r11 & 0xFF;  /* 0C08E73A extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C08E73Eu, 3);  /* 0C08E73C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C08E6ACu, 3); goto L_0C08E6AC; }  /* 0C08E73E bra */
L_0C08E750: BLKS(0x0C08E750u);
	r10 = 0xC0A0540u; UPD(0x0C08E752u, 1);  /* 0C08E750 mov.l @(disp,pc),Rn */
	IF(0x0C08E752u); { u32 t_ = r10; PR = 0x0C08E756u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C08E756u); }  /* 0C08E752 jsr @Rn */
L_0C08E756: BLKS(0x0C08E756u);
	IF(0x0C08E756u); T = (s32)r0 >= 0;  /* 0C08E756 cmp/pz Rn */
	if (!T) { UPD(0x0C08E77Eu, 4); goto L_0C08E77E; }  /* 0C08E758 bf */
L_0C08E75A: BLKS(0x0C08E75Au);
	r5 = 0xB4u; UPD(0x0C08E75Cu, 1);  /* 0C08E75A mov.w @(disp,pc),Rn */
	IF(0x0C08E75Cu); MACL = r9 * r5;  /* 0C08E75C mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08E760u, 3);  /* 0C08E75E mov.l @(disp,pc),Rn */
	IF(0x0C08E760u); r0 = MACL;  /* 0C08E760 sts macl,Rn */
	r0 += r7;  /* 0C08E762 add Rm,Rn */
	r0 += 0x7Eu;  /* 0C08E764 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C08E768u, 4);  /* 0C08E766 mov.w @Rm,Rn */
	IF(0x0C08E768u); MACL = r2 * r5;  /* 0C08E768 mul.l Rm,Rn */
	r11 = 0xA1u; UPD(0x0C08E76Cu, 3);  /* 0C08E76A mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C08E76C add #imm,Rn */
	IF(0x0C08E76Eu); r4 = MACL;  /* 0C08E76E sts macl,Rn */
	r4 += r7;  /* 0C08E770 add Rm,Rn */
	r5 += 0xFFFFFFF1u;  /* 0C08E772 add #imm,Rn */
	r4 += r5;  /* 0C08E774 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C08E778u, 6);  /* 0C08E776 mov.b @Rm,Rn */
	IF(0x0C08E778u); r1 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C08E77Au, 1);  /* 0C08E778 mov.b @(r0,Rm),Rn */
	r3 |= r1;  /* 0C08E77A or Rm,Rn */
	W8(r4, r3); UPD(0x0C08E77Eu, 2);  /* 0C08E77C mov.b Rm,@Rn */
L_0C08E77E: BLKS(0x0C08E77Eu);
	r8 = 0xB4u; UPD(0x0C08E780u, 1);  /* 0C08E77E mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E780 add #imm,Rn */
	IF(0x0C08E782u); MACL = r9 * r8;  /* 0C08E782 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C08E786u, 4);  /* 0C08E784 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C08E786 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C08E78Au, 2);  /* 0C08E788 mov.w @(disp,pc),Rn */
	IF(0x0C08E78Au); r8 = MACL;  /* 0C08E78A sts macl,Rn */
	r8 += r4;  /* 0C08E78C add Rm,Rn */
	IF(0x0C08E78Eu); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E790u, 3);  /* 0C08E78E mov.b @(r0,Rm),Rn */
	r6 = r10 & 0xFF;  /* 0C08E790 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C08E794u, 2);  /* 0C08E792 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E794 add #imm,Rn */
	IF(0x0C08E796u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E798u, 2);  /* 0C08E796 mov.b @(r0,Rm),Rn */
	r0 = r9 & 0xFF;  /* 0C08E798 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C08E79Cu, 2);  /* 0C08E79A mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C08E5C0u, 3); goto L_0C08E5C0; }  /* 0C08E79C bra */
L_0C08E7A0: BLKS(0x0C08E7A0u);
	r11 = 0xC0A03F0u; UPD(0x0C08E7A2u, 1);  /* 0C08E7A0 mov.l @(disp,pc),Rn */
	IF(0x0C08E7A2u); { u32 t_ = r11; PR = 0x0C08E7A6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C08E7A6u); }  /* 0C08E7A2 jsr @Rn */
L_0C08E7A6: BLKS(0x0C08E7A6u);
	IF(0x0C08E7A6u); T = (s32)r0 >= 0;  /* 0C08E7A6 cmp/pz Rn */
	if (!T) { UPD(0x0C08E7BCu, 4); goto L_0C08E7BC; }  /* 0C08E7A8 bf */
L_0C08E7AA: BLKS(0x0C08E7AAu);
	r2 = 0xB4u; UPD(0x0C08E7ACu, 1);  /* 0C08E7AA mov.w @(disp,pc),Rn */
	IF(0x0C08E7ACu); MACL = r0 * r2;  /* 0C08E7AC mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08E7B0u, 3);  /* 0C08E7AE mov.l @(disp,pc),Rn */
	IF(0x0C08E7B0u); r5 = MACL;  /* 0C08E7B0 sts macl,Rn */
	r5 += r7;  /* 0C08E7B2 add Rm,Rn */
	r3 = R32(r5); UPD(0x0C08E7B6u, 3);  /* 0C08E7B4 mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C08E7B8u, 1);  /* 0C08E7B6 mov.w @(disp,pc),Rn */
	r3 |= r1;  /* 0C08E7B8 or Rm,Rn */
	W32(r5, r3); UPD(0x0C08E7BCu, 2);  /* 0C08E7BA mov.l Rm,@Rn */
L_0C08E7BC: BLKS(0x0C08E7BCu);
	r8 = 0xB4u; UPD(0x0C08E7BEu, 1);  /* 0C08E7BC mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E7BE add #imm,Rn */
	IF(0x0C08E7C0u); MACL = r9 * r8;  /* 0C08E7C0 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C08E7C4u, 4);  /* 0C08E7C2 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C08E7C4 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C08E7C8u, 2);  /* 0C08E7C6 mov.w @(disp,pc),Rn */
	IF(0x0C08E7C8u); r8 = MACL;  /* 0C08E7C8 sts macl,Rn */
	r8 += r4;  /* 0C08E7CA add Rm,Rn */
	IF(0x0C08E7CCu); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E7CEu, 3);  /* 0C08E7CC mov.b @(r0,Rm),Rn */
	r6 = r10 & 0xFF;  /* 0C08E7CE extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C08E7D2u, 2);  /* 0C08E7D0 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E7D2 add #imm,Rn */
	IF(0x0C08E7D4u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E7D6u, 2);  /* 0C08E7D4 mov.b @(r0,Rm),Rn */
	r0 = r9 & 0xFF;  /* 0C08E7D6 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C08E7DAu, 2);  /* 0C08E7D8 mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C08E60Cu, 3); goto L_0C08E60C; }  /* 0C08E7DA bra */
L_0C08E7E0: BLKS(0x0C08E7E0u);
	r8 = 0xC0A03F0u; UPD(0x0C08E7E2u, 1);  /* 0C08E7E0 mov.l @(disp,pc),Rn */
	IF(0x0C08E7E2u); { u32 t_ = r8; PR = 0x0C08E7E6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C08E7E6u); }  /* 0C08E7E2 jsr @Rn */
L_0C08E7E6: BLKS(0x0C08E7E6u);
	IF(0x0C08E7E6u); T = (s32)r0 >= 0;  /* 0C08E7E6 cmp/pz Rn */
	if (!T) { UPD(0x0C08E800u, 4); goto L_0C08E800; }  /* 0C08E7E8 bf */
L_0C08E7EA: BLKS(0x0C08E7EAu);
	r3 = 0xB4u; UPD(0x0C08E7ECu, 1);  /* 0C08E7EA mov.w @(disp,pc),Rn */
	IF(0x0C08E7ECu); MACL = r0 * r3;  /* 0C08E7EC mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C08E7F0u, 3);  /* 0C08E7EE mov.l @(disp,pc),Rn */
	IF(0x0C08E7F0u); r11 = MACL;  /* 0C08E7F0 sts macl,Rn */
	r11 += r4;  /* 0C08E7F2 add Rm,Rn */
	r10 = R32(r11 + 0xCu); UPD(0x0C08E7F6u, 3);  /* 0C08E7F4 mov.l @(disp,Rm),Rn */
	r4 = r0;  /* 0C08E7F6 mov Rm,Rn */
	r7 = 0xC0A0380u; UPD(0x0C08E7FAu, 2);  /* 0C08E7F8 mov.l @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C08E7FA add #imm,Rn */
	IF(0x0C08E7FCu); { u32 t_ = r7; PR = 0x0C08E800u; W32(r11 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08E800u); }  /* 0C08E7FC jsr @Rn */
L_0C08E800: BLKS(0x0C08E800u);
	r8 = 0xB4u; UPD(0x0C08E802u, 1);  /* 0C08E800 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E802 add #imm,Rn */
	IF(0x0C08E804u); MACL = r9 * r8;  /* 0C08E804 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C08E808u, 4);  /* 0C08E806 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C08E808 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C08E80Cu, 2);  /* 0C08E80A mov.w @(disp,pc),Rn */
	IF(0x0C08E80Cu); r8 = MACL;  /* 0C08E80C sts macl,Rn */
	r8 += r3;  /* 0C08E80E add Rm,Rn */
	IF(0x0C08E810u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E812u, 3);  /* 0C08E810 mov.b @(r0,Rm),Rn */
	r11 = r4 & 0xFF;  /* 0C08E812 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C08E816u, 2);  /* 0C08E814 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E816 add #imm,Rn */
	IF(0x0C08E818u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E81Au, 2);  /* 0C08E818 mov.b @(r0,Rm),Rn */
	r9 = r10 & 0xFF;  /* 0C08E81A extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C08E81Eu, 2);  /* 0C08E81C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C08E538u, 3); goto L_0C08E538; }  /* 0C08E81E bra */
L_0C08E850: BLKS(0x0C08E850u);
	r8 = 0xC0A03F0u; UPD(0x0C08E852u, 1);  /* 0C08E850 mov.l @(disp,pc),Rn */
	IF(0x0C08E852u); { u32 t_ = r8; PR = 0x0C08E856u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C08E856u); }  /* 0C08E852 jsr @Rn */
L_0C08E856: BLKS(0x0C08E856u);
	IF(0x0C08E856u); T = (s32)r0 >= 0;  /* 0C08E856 cmp/pz Rn */
	{ u32 c_ = !T; r6 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08E876u, 4); goto L_0C08E876; } goto L_0C08E85C; }  /* 0C08E858 bf/s */
L_0C08E85C: BLKS(0x0C08E85Cu);
	r11 = 0xB4u; UPD(0x0C08E85Eu, 2);  /* 0C08E85C mov.w @(disp,pc),Rn */
	r4 = r6;  /* 0C08E85E mov Rm,Rn */
	IF(0x0C08E860u); MACL = r0 * r11;  /* 0C08E860 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08E864u, 4);  /* 0C08E862 mov.l @(disp,pc),Rn */
	IF(0x0C08E864u); r5 = MACL;  /* 0C08E864 sts macl,Rn */
	r0 = 0xA5u; UPD(0x0C08E868u, 2);  /* 0C08E866 mov.w @(disp,pc),Rn */
	r5 += r7;  /* 0C08E868 add Rm,Rn */
	r5 += r0;  /* 0C08E86A add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C08E86Eu, 3);  /* 0C08E86C mov.b @Rm,Rn */
	r6 = 0xC0A0380u; UPD(0x0C08E870u, 1);  /* 0C08E86E mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C08E870 add #imm,Rn */
	IF(0x0C08E872u); { u32 t_ = r6; PR = 0x0C08E876u; W8(r5, r2); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08E876u); }  /* 0C08E872 jsr @Rn */
L_0C08E876: BLKS(0x0C08E876u);
	r8 = 0xB4u; UPD(0x0C08E878u, 1);  /* 0C08E876 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E878 add #imm,Rn */
	IF(0x0C08E87Au); MACL = r9 * r8;  /* 0C08E87A mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C08E87Eu, 4);  /* 0C08E87C mov.l @(disp,pc),Rn */
	IF(0x0C08E87Eu); r8 = MACL;  /* 0C08E87E sts macl,Rn */
	r8 += r2;  /* 0C08E880 add Rm,Rn */
	r7 = R32(r8 + 0x8u); UPD(0x0C08E884u, 3);  /* 0C08E882 mov.l @(disp,Rm),Rn */
	r6 = 0xC1C2AC0u; UPD(0x0C08E886u, 1);  /* 0C08E884 mov.l @(disp,pc),Rn */
	IF(0x0C08E886u); r7 <<= 2;  /* 0C08E886 shll2 Rn */
	r0 = 0xFFFFFF30u; UPD(0x0C08E88Au, 2);  /* 0C08E888 mov.w @(disp,pc),Rn */
	r7 += r6;  /* 0C08E88A add Rm,Rn */
	IF(0x0C08E88Cu); r5 = R32(r0 + r7); UPD(0x0C08E88Eu, 2);  /* 0C08E88C mov.l @(r0,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C08E890u, 1);  /* 0C08E88E mov.w @(disp,pc),Rn */
	IF(0x0C08E890u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E892u, 1);  /* 0C08E890 mov.b @(r0,Rm),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C08E894u, 1);  /* 0C08E892 mov.l @(disp,Rm),Rn */
	r4 = r3 & 0xFF;  /* 0C08E894 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C08E898u, 2);  /* 0C08E896 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E898 add #imm,Rn */
	IF(0x0C08E89Au); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E89Cu, 2);  /* 0C08E89A mov.b @(r0,Rm),Rn */
	r6 += r5;  /* 0C08E89C add Rm,Rn */
	r9 = r10 & 0xFF;  /* 0C08E89E extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C08E8A2u, 3);  /* 0C08E8A0 mov.l Rm,@(disp,Rn) */
	r5 = 0x4u;  /* 0C08E8A2 mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C08E5C2u, 4); goto L_0C08E5C2; }  /* 0C08E8A4 bra */
L_0C08E8B0: BLKS(0x0C08E8B0u);
	r11 = 0xC0A03F0u; UPD(0x0C08E8B2u, 1);  /* 0C08E8B0 mov.l @(disp,pc),Rn */
	IF(0x0C08E8B2u); { u32 t_ = r11; PR = 0x0C08E8B6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C08E8B6u); }  /* 0C08E8B2 jsr @Rn */
L_0C08E8B6: BLKS(0x0C08E8B6u);
	IF(0x0C08E8B6u); T = (s32)r0 >= 0;  /* 0C08E8B6 cmp/pz Rn */
	if (!T) { UPD(0x0C08E800u, 4); goto L_0C08E800; }  /* 0C08E8B8 bf */
L_0C08E8BA: BLKS(0x0C08E8BAu);
	r5 = 0xB4u; UPD(0x0C08E8BCu, 1);  /* 0C08E8BA mov.w @(disp,pc),Rn */
	IF(0x0C08E8BCu); MACL = r0 * r5;  /* 0C08E8BC mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C08E8C0u, 3);  /* 0C08E8BE mov.l @(disp,pc),Rn */
	IF(0x0C08E8C0u); r0 = MACL;  /* 0C08E8C0 sts macl,Rn */
	r4 = 0xA5u; UPD(0x0C08E8C4u, 2);  /* 0C08E8C2 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C08E8C4 add Rm,Rn */
	r0 += r4;  /* 0C08E8C6 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C08E8CAu, 3);  /* 0C08E8C8 mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C08E8CA add #imm,Rn */
	{ W8(r0, r10); /* slot mov.b Rm,@Rn */ UPD(0x0C08E800u, 4); goto L_0C08E800; }  /* 0C08E8CC bra */
L_0C08E8D0: BLKS(0x0C08E8D0u);
	r10 = 0xC0A03F0u; UPD(0x0C08E8D2u, 1);  /* 0C08E8D0 mov.l @(disp,pc),Rn */
	IF(0x0C08E8D2u); { u32 t_ = r10; PR = 0x0C08E8D6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C08E8D6u); }  /* 0C08E8D2 jsr @Rn */
L_0C08E8D6: BLKS(0x0C08E8D6u);
	IF(0x0C08E8D6u); T = (s32)r0 >= 0;  /* 0C08E8D6 cmp/pz Rn */
	{ u32 c_ = !T; r6 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08E916u, 4); goto L_0C08E916; } goto L_0C08E8DC; }  /* 0C08E8D8 bf/s */
L_0C08E8DC: BLKS(0x0C08E8DCu);
	r3 = 0xB4u; UPD(0x0C08E8DEu, 2);  /* 0C08E8DC mov.w @(disp,pc),Rn */
	IF(0x0C08E8DEu); MACL = r9 * r3;  /* 0C08E8DE mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08E8E2u, 3);  /* 0C08E8E0 mov.l @(disp,pc),Rn */
	IF(0x0C08E8E2u); r0 = MACL;  /* 0C08E8E2 sts macl,Rn */
	r0 += r7;  /* 0C08E8E4 add Rm,Rn */
	r5 = R32(r0 + 0xCu); UPD(0x0C08E8E8u, 3);  /* 0C08E8E6 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C08E8E8 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C08E8ECu); MACL = r6 * r3; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C08E8FCu, 5); goto L_0C08E8FC; } goto L_0C08E8EE; }  /* 0C08E8EA bt/s */
L_0C08E8EE: BLKS(0x0C08E8EEu);
	r4 = 0xA5u; UPD(0x0C08E8F0u, 3);  /* 0C08E8EE mov.w @(disp,pc),Rn */
	IF(0x0C08E8F0u); r6 = MACL;  /* 0C08E8F0 sts macl,Rn */
	r6 += r7;  /* 0C08E8F2 add Rm,Rn */
	r6 += r4;  /* 0C08E8F4 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C08E8F8u, 4);  /* 0C08E8F6 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C08E8F8 add #imm,Rn */
	W8(r6, r2); UPD(0x0C08E8FCu, 2);  /* 0C08E8FA mov.b Rm,@Rn */
L_0C08E8FC: BLKS(0x0C08E8FCu);
	r0 += 0x7Eu;  /* 0C08E8FC add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r0); UPD(0x0C08E900u, 2);  /* 0C08E8FE mov.w @Rm,Rn */
	IF(0x0C08E900u); MACL = r10 * r3;  /* 0C08E900 mul.l Rm,Rn */
	r11 = 0xA7u; UPD(0x0C08E904u, 3);  /* 0C08E902 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C08E904 add #imm,Rn */
	IF(0x0C08E906u); r8 = MACL;  /* 0C08E906 sts macl,Rn */
	r8 += r7;  /* 0C08E908 add Rm,Rn */
	r7 = 0xA2u; UPD(0x0C08E90Cu, 4);  /* 0C08E90A mov.w @(disp,pc),Rn */
	r8 += r11;  /* 0C08E90C add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C08E910u, 2);  /* 0C08E90E mov.b @Rm,Rn */
	IF(0x0C08E910u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C08E912u, 1);  /* 0C08E910 mov.b @(r0,Rm),Rn */
	r3 |= r1;  /* 0C08E912 or Rm,Rn */
	W8(r8, r3); UPD(0x0C08E916u, 2);  /* 0C08E914 mov.b Rm,@Rn */
L_0C08E916: BLKS(0x0C08E916u);
	r0 = 0xB4u; UPD(0x0C08E918u, 1);  /* 0C08E916 mov.w @(disp,pc),Rn */
	IF(0x0C08E918u); MACL = r9 * r0;  /* 0C08E918 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C08E91Cu, 3);  /* 0C08E91A mov.l @(disp,pc),Rn */
	IF(0x0C08E91Cu); r0 = MACL;  /* 0C08E91C sts macl,Rn */
	r0 += r6;  /* 0C08E91E add Rm,Rn */
	r8 = R32(r0 + 0x1Cu); UPD(0x0C08E922u, 3);  /* 0C08E920 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r5 = v_; } UPD(0x0C08E924u, 1);  /* 0C08E922 mov.l @Rm+,Rn */
	T = (r5 & r5) == 0;  /* 0C08E924 tst Rm,Rn */
	if (T) { UPD(0x0C08E960u, 4); goto L_0C08E960; }  /* 0C08E926 bt */
L_0C08E928: BLKS(0x0C08E928u);
	r10 = r0;  /* 0C08E928 mov Rm,Rn */
	r11 = 0xA9u; UPD(0x0C08E92Cu, 2);  /* 0C08E92A mov.w @(disp,pc),Rn */
	r11 += r0;  /* 0C08E92C add Rm,Rn */
	IF(0x0C08E92Eu); ;  /* 0C08E92E nop */
	UPD(0x0C08E930u, 2);
L_0C08E930: BLKS(0x0C08E930u);
	r8 += 0x4u;  /* 0C08E930 add #imm,Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C08E934u, 2);  /* 0C08E932 mov.l @Rm+,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E934 add #imm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C08E938u, 2);  /* 0C08E936 mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C08E938 add Rm,Rn */
	{ u32 v_ = R32(r8); r8 += 4; r0 = v_; } UPD(0x0C08E93Cu, 2);  /* 0C08E93A mov.l @Rm+,Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C08E93Eu, 1);  /* 0C08E93C mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C08E93E add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08E942u, 2);  /* 0C08E940 mov.w @(disp,pc),Rn */
	IF(0x0C08E942u); r2 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C08E944u, 1);  /* 0C08E942 mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C08E944 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C08E948u, 2);  /* 0C08E946 mov.l Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C08E94Au, 1);  /* 0C08E948 mov.b @Rm,Rn */
	r5 = 0x4u;  /* 0C08E94A mov #imm,Rn */
	r4 = r3 & 0xFF;  /* 0C08E94C extu.b Rm,Rn */
	r0 = 0xC0AB240u; UPD(0x0C08E950u, 3);  /* 0C08E94E mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C08E952u, 1);  /* 0C08E950 mov.l Rm,@(disp,Rn) */
	IF(0x0C08E952u); { u32 t_ = r0; PR = 0x0C08E956u; r4 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C08E956u); }  /* 0C08E952 jsr @Rn */
L_0C08E956: BLKS(0x0C08E956u);
	{ u32 v_ = R32(r8); r8 += 4; r2 = v_; } UPD(0x0C08E958u, 1);  /* 0C08E956 mov.l @Rm+,Rn */
	T = (r2 & r2) == 0;  /* 0C08E958 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08E930u, 4); goto L_0C08E930; } goto L_0C08E95E; }  /* 0C08E95A bf/s */
L_0C08E95E: BLKS(0x0C08E95Eu);
	IF(0x0C08E95Eu); ;  /* 0C08E95E nop */
	UPD(0x0C08E960u, 2);
L_0C08E960: BLKS(0x0C08E960u);
	r11 = 0xB4u; UPD(0x0C08E962u, 1);  /* 0C08E960 mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C08E962 mov #imm,Rn */
	IF(0x0C08E964u); MACL = r9 * r11;  /* 0C08E964 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C08E968u, 4);  /* 0C08E966 mov.l @(disp,pc),Rn */
	IF(0x0C08E968u); r0 = MACL;  /* 0C08E968 sts macl,Rn */
	{ IF(0x0C08E96Cu); W32(r0 + r9, r8); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C08E4A0u, 4); goto L_0C08E4A0; }  /* 0C08E96A bra */
L_0C08E970: BLKS(0x0C08E970u);
	r10 = 0xC0A03F0u; UPD(0x0C08E972u, 1);  /* 0C08E970 mov.l @(disp,pc),Rn */
	IF(0x0C08E972u); { u32 t_ = r10; PR = 0x0C08E976u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C08E976u); }  /* 0C08E972 jsr @Rn */
L_0C08E976: BLKS(0x0C08E976u);
	r0 = 0xB4u; UPD(0x0C08E978u, 1);  /* 0C08E976 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E978 add #imm,Rn */
	IF(0x0C08E97Au); MACL = r9 * r0;  /* 0C08E97A mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C08E97Eu, 4);  /* 0C08E97C mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C08E980u, 1);  /* 0C08E97E mov.w @(disp,pc),Rn */
	IF(0x0C08E980u); r8 = MACL;  /* 0C08E980 sts macl,Rn */
	r8 += r2;  /* 0C08E982 add Rm,Rn */
	IF(0x0C08E984u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E986u, 3);  /* 0C08E984 mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C08E986 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C08E98Au, 2);  /* 0C08E988 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E98A add #imm,Rn */
	IF(0x0C08E98Cu); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E98Eu, 2);  /* 0C08E98C mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C08E98E mov #imm,Rn */
	r6 = r4 & 0xFF;  /* 0C08E990 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08E994u, 3);  /* 0C08E992 mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C08E538u, 3); goto L_0C08E538; }  /* 0C08E994 bra */
L_0C08E9A0: BLKS(0x0C08E9A0u);
	r8 = 0xC0A03F0u; UPD(0x0C08E9A2u, 1);  /* 0C08E9A0 mov.l @(disp,pc),Rn */
	IF(0x0C08E9A2u); { u32 t_ = r8; PR = 0x0C08E9A6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C08E9A6u); }  /* 0C08E9A2 jsr @Rn */
L_0C08E9A6: BLKS(0x0C08E9A6u);
	IF(0x0C08E9A6u); T = (s32)r0 >= 0;  /* 0C08E9A6 cmp/pz Rn */
	if (!T) { UPD(0x0C08E9BCu, 4); goto L_0C08E9BC; }  /* 0C08E9A8 bf */
L_0C08E9AA: BLKS(0x0C08E9AAu);
	r11 = 0xB4u; UPD(0x0C08E9ACu, 1);  /* 0C08E9AA mov.w @(disp,pc),Rn */
	IF(0x0C08E9ACu); MACL = r0 * r11;  /* 0C08E9AC mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C08E9B0u, 3);  /* 0C08E9AE mov.l @(disp,pc),Rn */
	IF(0x0C08E9B0u); r7 = MACL;  /* 0C08E9B0 sts macl,Rn */
	r7 += r2;  /* 0C08E9B2 add Rm,Rn */
	r6 = R32(r7); UPD(0x0C08E9B6u, 3);  /* 0C08E9B4 mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C08E9B8u, 1);  /* 0C08E9B6 mov.w @(disp,pc),Rn */
	r6 |= r1;  /* 0C08E9B8 or Rm,Rn */
	W32(r7, r6); UPD(0x0C08E9BCu, 2);  /* 0C08E9BA mov.l Rm,@Rn */
L_0C08E9BC: BLKS(0x0C08E9BCu);
	r4 = r9;  /* 0C08E9BC mov Rm,Rn */
	r9 = 0xC0A1300u; UPD(0x0C08E9C0u, 2);  /* 0C08E9BE mov.l @(disp,pc),Rn */
	IF(0x0C08E9C0u); { u32 t_ = r9; PR = 0x0C08E9C4u; IF(0x0C08E9C2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A1300, 0x0C0A1300u, 0x0C08E9C4u); }  /* 0C08E9C0 jsr @Rn */
L_0C08E9C4: BLKS(0x0C08E9C4u);
	{ IF(0x0C08E9C6u); ; /* slot nop */ UPD(0x0C08E61Au, 3); goto L_0C08E61A; }  /* 0C08E9C4 bra */
L_0C08E9D0: BLKS(0x0C08E9D0u);
	r8 = 0xB4u; UPD(0x0C08E9D2u, 1);  /* 0C08E9D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08E9D2 add #imm,Rn */
	IF(0x0C08E9D4u); MACL = r9 * r8;  /* 0C08E9D4 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08E9D8u, 4);  /* 0C08E9D6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C08E9DAu, 1);  /* 0C08E9D8 mov.w @(disp,pc),Rn */
	IF(0x0C08E9DAu); r8 = MACL;  /* 0C08E9DA sts macl,Rn */
	r8 += r7;  /* 0C08E9DC add Rm,Rn */
	IF(0x0C08E9DEu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E9E0u, 3);  /* 0C08E9DE mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C08E9E0 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C08E9E4u, 2);  /* 0C08E9E2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08E9E4 add #imm,Rn */
	IF(0x0C08E9E6u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08E9E8u, 2);  /* 0C08E9E6 mov.b @(r0,Rm),Rn */
	r5 = 0x7u;  /* 0C08E9E8 mov #imm,Rn */
	r10 = r4 & 0xFF;  /* 0C08E9EA extu.b Rm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C08E9EEu, 3);  /* 0C08E9EC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C08E6ACu, 3); goto L_0C08E6AC; }  /* 0C08E9EE bra */
L_0C08EA20: BLKS(0x0C08EA20u);
	r0 = 0xB4u; UPD(0x0C08EA22u, 1);  /* 0C08EA20 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08EA22 add #imm,Rn */
	IF(0x0C08EA24u); MACL = r9 * r0;  /* 0C08EA24 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C08EA28u, 4);  /* 0C08EA26 mov.l @(disp,pc),Rn */
	IF(0x0C08EA28u); r11 = MACL;  /* 0C08EA28 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C08EA2Cu, 2);  /* 0C08EA2A mov.w @(disp,pc),Rn */
	r11 += r2;  /* 0C08EA2C add Rm,Rn */
	IF(0x0C08EA2Eu); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C08EA30u, 2);  /* 0C08EA2E mov.b @(r0,Rm),Rn */
	r7 = r6 & 0xFF;  /* 0C08EA30 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C08EA34u, 2);  /* 0C08EA32 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08EA34 add #imm,Rn */
	IF(0x0C08EA36u); r5 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C08EA38u, 2);  /* 0C08EA36 mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C08EA38 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C08EA3Cu, 2);  /* 0C08EA3A mov.l Rm,@(disp,Rn) */
	r5 = 0x4u;  /* 0C08EA3C mov #imm,Rn */
	r8 = 0xC0AB240u; UPD(0x0C08EA40u, 2);  /* 0C08EA3E mov.l @(disp,pc),Rn */
	r4 = R32(r11); UPD(0x0C08EA42u, 1);  /* 0C08EA40 mov.l @Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C08EA44u, 1);  /* 0C08EA42 mov.l @(disp,Rm),Rn */
	IF(0x0C08EA44u); { u32 t_ = r8; PR = 0x0C08EA48u; r7 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C08EA48u); }  /* 0C08EA44 jsr @Rn */
L_0C08EA48: BLKS(0x0C08EA48u);
	r4 = 0x0u;  /* 0C08EA48 mov #imm,Rn */
	W32(r11, r4); UPD(0x0C08EA4Cu, 2);  /* 0C08EA4A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C08E800u, 3); goto L_0C08E800; }  /* 0C08EA4C bra */
L_0C08EA50: BLKS(0x0C08EA50u);
	r10 = 0xB4u; UPD(0x0C08EA52u, 1);  /* 0C08EA50 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08EA52 add #imm,Rn */
	IF(0x0C08EA54u); MACL = r9 * r10;  /* 0C08EA54 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C08EA58u, 4);  /* 0C08EA56 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C08EA58 mov #imm,Rn */
	IF(0x0C08EA5Au); r8 = MACL;  /* 0C08EA5A sts macl,Rn */
	r8 += r0;  /* 0C08EA5C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08EA60u, 4);  /* 0C08EA5E mov.w @(disp,pc),Rn */
	IF(0x0C08EA60u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08EA62u, 1);  /* 0C08EA60 mov.b @(r0,Rm),Rn */
	r11 = r9 & 0xFF;  /* 0C08EA62 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C08EA66u, 2);  /* 0C08EA64 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C08EA66 add #imm,Rn */
	IF(0x0C08EA68u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08EA6Au, 2);  /* 0C08EA68 mov.b @(r0,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C08EA6A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08EA6Eu, 2);  /* 0C08EA6C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C08E6ACu, 3); goto L_0C08E6AC; }  /* 0C08EA6E bra */
L_0C08EA80: BLKS(0x0C08EA80u);
	r10 = 0xC0A0540u; UPD(0x0C08EA82u, 1);  /* 0C08EA80 mov.l @(disp,pc),Rn */
	IF(0x0C08EA82u); { u32 t_ = r10; PR = 0x0C08EA86u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C08EA86u); }  /* 0C08EA82 jsr @Rn */
L_0C08EA86: BLKS(0x0C08EA86u);
	IF(0x0C08EA86u); T = (s32)r0 >= 0;  /* 0C08EA86 cmp/pz Rn */
	if (!T) { UPD(0x0C08EACAu, 4); goto L_0C08EACA; }  /* 0C08EA88 bf */
L_0C08EA8A: BLKS(0x0C08EA8Au);
	r15 += 0xFFFFFFF8u;  /* 0C08EA8A add #imm,Rn */
	r11 = 0xB4u; UPD(0x0C08EA8Eu, 2);  /* 0C08EA8C mov.w @(disp,pc),Rn */
	IF(0x0C08EA8Eu); MACL = r9 * r11;  /* 0C08EA8E mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C08EA92u, 3);  /* 0C08EA90 mov.l @(disp,pc),Rn */
	IF(0x0C08EA92u); r0 = MACL;  /* 0C08EA92 sts macl,Rn */
	r0 += r8;  /* 0C08EA94 add Rm,Rn */
	r0 += 0x7Eu;  /* 0C08EA96 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C08EA9Au, 4);  /* 0C08EA98 mov.w @Rm,Rn */
	IF(0x0C08EA9Au); MACL = r2 * r11;  /* 0C08EA9A mul.l Rm,Rn */
	r10 = 0xA1u; UPD(0x0C08EA9Eu, 3);  /* 0C08EA9C mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C08EA9E add #imm,Rn */
	IF(0x0C08EAA0u); r5 = MACL;  /* 0C08EAA0 sts macl,Rn */
	r5 += r8;  /* 0C08EAA2 add Rm,Rn */
	r11 += 0xFFFFFFF1u;  /* 0C08EAA4 add #imm,Rn */
	r5 += r11;  /* 0C08EAA6 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C08EAAAu, 6);  /* 0C08EAA8 mov.b @Rm,Rn */
	r8 = 0x0u;  /* 0C08EAAA mov #imm,Rn */
	IF(0x0C08EAACu); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C08EAAEu, 2);  /* 0C08EAAC mov.b @(r0,Rm),Rn */
	r7 = 0xA9u; UPD(0x0C08EAB0u, 1);  /* 0C08EAAE mov.w @(disp,pc),Rn */
	r6 |= r1;  /* 0C08EAB0 or Rm,Rn */
	W8(r5, r6); UPD(0x0C08EAB4u, 2);  /* 0C08EAB2 mov.b Rm,@Rn */
	IF(0x0C08EAB4u); r3 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C08EAB6u, 1);  /* 0C08EAB4 mov.b @(r0,Rm),Rn */
	r4 = 0x20000u; UPD(0x0C08EAB8u, 1);  /* 0C08EAB6 mov.l @(disp,pc),Rn */
	r7 = r3 & 0xFF;  /* 0C08EAB8 extu.b Rm,Rn */
	r11 = 0xC7C27B0u; UPD(0x0C08EABCu, 2);  /* 0C08EABA mov.l @(disp,pc),Rn */
	W32(r15, r4); UPD(0x0C08EABEu, 1);  /* 0C08EABC mov.l Rm,@Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C08EAC0u, 1);  /* 0C08EABE mov.l Rm,@(disp,Rn) */
	r4 = 0x9u;  /* 0C08EAC0 mov #imm,Rn */
	r5 = R32(r0 + 0x24u); UPD(0x0C08EAC4u, 2);  /* 0C08EAC2 mov.l @(disp,Rm),Rn */
	IF(0x0C08EAC4u); { u32 t_ = r11; PR = 0x0C08EAC8u; r6 = R32(r0 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C27B0, 0x0C7C27B0u, 0x0C08EAC8u); }  /* 0C08EAC4 jsr @Rn */
L_0C08EAC8: BLKS(0x0C08EAC8u);
	r15 += 0x8u;  /* 0C08EAC8 add #imm,Rn */
	UPD(0x0C08EACAu, 1);
L_0C08EACA: BLKS(0x0C08EACAu);
	r3 = 0xB4u; UPD(0x0C08EACCu, 1);  /* 0C08EACA mov.w @(disp,pc),Rn */
	IF(0x0C08EACCu); MACL = r9 * r3;  /* 0C08EACC mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C08EAD0u, 3);  /* 0C08EACE mov.l @(disp,pc),Rn */
	IF(0x0C08EAD0u); r0 = MACL;  /* 0C08EAD0 sts macl,Rn */
	r4 += r0;  /* 0C08EAD2 add Rm,Rn */
	r0 = R32(r4 + 0xCu); UPD(0x0C08EAD6u, 3);  /* 0C08EAD4 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C08EAD6 mov Rm,Rn */
	r9 = 0xC1C2A58u; UPD(0x0C08EADAu, 2);  /* 0C08EAD8 mov.l @(disp,pc),Rn */
	IF(0x0C08EADAu); r0 <<= 2;  /* 0C08EADA shll2 Rn */
	{ IF(0x0C08EADEu); r5 = R32(r0 + r9); /* slot mov.l @(r0,Rm),Rn */ UPD(0x0C08E70Au, 4); goto L_0C08E70A; }  /* 0C08EADC bra */
}

void f_0C08EB00(sh3_t *c)
{
	LOCALS;
L_0C08EB00: BLKS(0x0C08EB00u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08EB02u, 1);  /* 0C08EB00 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C08EB02 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08EB06u, 2);  /* 0C08EB04 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08EB08u, 1);  /* 0C08EB06 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08EB0Au, 1);  /* 0C08EB08 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08EB0Cu, 1);  /* 0C08EB0A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08EB0Eu, 1);  /* 0C08EB0C mov.l Rm,@-Rn */
	r1 = 0xB4u; UPD(0x0C08EB10u, 1);  /* 0C08EB0E mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08EB12u, 1);  /* 0C08EB10 mov.l Rm,@-Rn */
	IF(0x0C08EB12u); MACL = r4 * r1;  /* 0C08EB12 mul.l Rm,Rn */
	IF(0x0C08EB14u); r15 -= 4; W32(r15, PR); UPD(0x0C08EB16u, 3);  /* 0C08EB14 sts.l pr,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C08EB18u, 1);  /* 0C08EB16 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C08EB18 add #imm,Rn */
	r14 = r15;  /* 0C08EB1A mov Rm,Rn */
	IF(0x0C08EB1Cu); r3 = MACL;  /* 0C08EB1C sts macl,Rn */
	r8 = 0x9Cu; UPD(0x0C08EB20u, 4);  /* 0C08EB1E mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C08EB20 add Rm,Rn */
	W32(r14, r4); UPD(0x0C08EB24u, 2);  /* 0C08EB22 mov.l Rm,@Rn */
	r8 += r3;  /* 0C08EB24 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C08EB28u, 2);  /* 0C08EB26 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08EB28 tst Rm,Rn */
	{ u32 c_ = !T; r2 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08EB32u, 4); goto L_0C08EB32; } goto L_0C08EB2E; }  /* 0C08EB2A bf/s */
L_0C08EB2E: BLKS(0x0C08EB2Eu);
	{ r5 = 0x5Au; /* slot mov #imm,Rn */ UPD(0x0C08EC40u, 4); goto L_0C08EC40; }  /* 0C08EB2E bra */
L_0C08EB32: BLKS(0x0C08EB32u);
	r2 += 0x1u;  /* 0C08EB32 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C08EB36u, 2);  /* 0C08EB34 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C08EB36 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C08EB38 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C08EB3A cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08EB60u, 6); goto L_0C08EB60; } UPD(0x0C08EB40u, 1); goto L_0C08EB40; }  /* 0C08EB3C bt/s */
L_0C08EB40: BLKS(0x0C08EB40u);
	r14 += 0xCu;  /* 0C08EB40 add #imm,Rn */
	UPD(0x0C08EB42u, 1);
L_0C08EB42: BLKS(0x0C08EB42u);
	r15 = r14;  /* 0C08EB42 mov Rm,Rn */
	IF(0x0C08EB44u); PR = R32(r15); r15 += 4; UPD(0x0C08EB46u, 2);  /* 0C08EB44 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EB48u, 1);  /* 0C08EB46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EB4Au, 1);  /* 0C08EB48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EB4Cu, 1);  /* 0C08EB4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EB4Eu, 1);  /* 0C08EB4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EB50u, 1);  /* 0C08EB4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EB52u, 1);  /* 0C08EB50 mov.l @Rm+,Rn */
	IF(0x0C08EB52u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EB52 rts */
L_0C08EB60: BLKS(0x0C08EB60u);
	r6 = 0x0u;  /* 0C08EB60 mov #imm,Rn */
	W8(r2, r6); UPD(0x0C08EB64u, 2);  /* 0C08EB62 mov.b Rm,@Rn */
	r5 = 0x0u;  /* 0C08EB64 mov #imm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C08EB68u, 2);  /* 0C08EB66 mov.l Rm,@(disp,Rn) */
	r13 = r3;  /* 0C08EB68 mov Rm,Rn */
	IF(0x0C08EB6Au); ;  /* 0C08EB6A nop */
	UPD(0x0C08EB6Cu, 2);
L_0C08EB6C: BLKS(0x0C08EB6Cu);
	r4 = 0x86u; UPD(0x0C08EB6Eu, 1);  /* 0C08EB6C mov.w @(disp,pc),Rn */
	r0 = r13;  /* 0C08EB6E mov Rm,Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C08EB72u, 2);  /* 0C08EB70 mov.l @(disp,Rm),Rn */
	IF(0x0C08EB72u); r10 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C08EB74u, 1);  /* 0C08EB72 mov.w @(r0,Rm),Rn */
	r2 += r2;  /* 0C08EB74 add Rm,Rn */
	r7 = R32(r14); UPD(0x0C08EB78u, 2);  /* 0C08EB76 mov.l @Rm,Rn */
	r0 = r2;  /* 0C08EB78 mov Rm,Rn */
	r3 = 0xB4u; UPD(0x0C08EB7Cu, 2);  /* 0C08EB7A mov.w @(disp,pc),Rn */
	r9 = 0xC1C2AC8u; UPD(0x0C08EB7Eu, 1);  /* 0C08EB7C mov.l @(disp,pc),Rn */
	IF(0x0C08EB7Eu); MACL = r7 * r3;  /* 0C08EB7E mul.l Rm,Rn */
	IF(0x0C08EB80u); r12 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C08EB82u, 3);  /* 0C08EB80 mov.w @(r0,Rm),Rn */
	r11 = 0xC058060u; UPD(0x0C08EB84u, 1);  /* 0C08EB82 mov.l @(disp,pc),Rn */
	r10 += r12;  /* 0C08EB84 add Rm,Rn */
	r12 = (u32)(s32)(s16)r10;  /* 0C08EB86 exts.w Rm,Rn */
	IF(0x0C08EB88u); r8 = MACL;  /* 0C08EB88 sts macl,Rn */
	W32(r14 + 0x8u, r8); UPD(0x0C08EB8Cu, 4);  /* 0C08EB8A mov.l Rm,@(disp,Rn) */
	r5 = 0x1A0000u; UPD(0x0C08EB8Eu, 1);  /* 0C08EB8C mov.l @(disp,pc),Rn */
	IF(0x0C08EB8Eu); { u32 t_ = r11; PR = 0x0C08EB92u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C08EB92u); }  /* 0C08EB8E jsr @Rn */
L_0C08EB92: BLKS(0x0C08EB92u);
	r11 = R32(r14 + 0x4u); UPD(0x0C08EB94u, 1);  /* 0C08EB92 mov.l @(disp,Rm),Rn */
	r9 = r0;  /* 0C08EB94 mov Rm,Rn */
	r6 = 0xC058030u; UPD(0x0C08EB98u, 2);  /* 0C08EB96 mov.l @(disp,pc),Rn */
	IF(0x0C08EB98u); r11 <<= 2;  /* 0C08EB98 shll2 Rn */
	r5 = 0xC1C2ACCu; UPD(0x0C08EB9Cu, 2);  /* 0C08EB9A mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C08EB9C mov Rm,Rn */
	r11 += r5;  /* 0C08EB9E add Rm,Rn */
	IF(0x0C08EBA0u); { u32 t_ = r6; PR = 0x0C08EBA4u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C08EBA4u); }  /* 0C08EBA0 jsr @Rn */
L_0C08EBA4: BLKS(0x0C08EBA4u);
	r9 -= r0;  /* 0C08EBA4 sub Rm,Rn */
	r4 = 0x66666667u; UPD(0x0C08EBA8u, 2);  /* 0C08EBA6 mov.l @(disp,pc),Rn */
	IF(0x0C08EBA8u); r9 <<= 2;  /* 0C08EBA8 shll2 Rn */
	{ s64 r_ = (s64)(s32)r9 * (s64)(s32)r4; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C08EBAA dmuls.l Rm,Rn */
	r2 = 0xC058030u; UPD(0x0C08EBAEu, 4);  /* 0C08EBAC mov.l @(disp,pc),Rn */
	IF(0x0C08EBAEu); r1 = MACH;  /* 0C08EBAE sts mach,Rn */
	IF(0x0C08EBB0u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C08EBB0 shar Rn */
	IF(0x0C08EBB2u); T = r9 >> 31; r9 <<= 1;  /* 0C08EBB2 shll Rn */
	{ u32 a_ = r9, t_ = a_ - r9, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r9 = r_; }  /* 0C08EBB4 subc Rm,Rn */
	r1 -= r9;  /* 0C08EBB6 sub Rm,Rn */
	r9 = R32(r13 + 0x24u); UPD(0x0C08EBBAu, 6);  /* 0C08EBB8 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C08EBBA mov Rm,Rn */
	r0 = 0xFFFC0000u; UPD(0x0C08EBBEu, 2);  /* 0C08EBBC mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C08EBBE add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C08EBC2u, 2);  /* 0C08EBC0 mov.l @(disp,pc),Rn */
	r5 = 0x1A0000u; UPD(0x0C08EBC4u, 1);  /* 0C08EBC2 mov.l @(disp,pc),Rn */
	IF(0x0C08EBC4u); { u32 t_ = r2; PR = 0x0C08EBC8u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C08EBC8u); }  /* 0C08EBC4 jsr @Rn */
L_0C08EBC8: BLKS(0x0C08EBC8u);
	r8 = r0;  /* 0C08EBC8 mov Rm,Rn */
	r4 = r12;  /* 0C08EBCA mov Rm,Rn */
	IF(0x0C08EBCCu); { u32 t_ = r10; PR = 0x0C08EBD0u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLD(t_, 0x0C08EBD0u); }  /* 0C08EBCC jsr @Rn */
L_0C08EBD0: BLKS(0x0C08EBD0u);
	r10 = R32(r13 + 0x28u); UPD(0x0C08EBD2u, 1);  /* 0C08EBD0 mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C08EBD2 add Rm,Rn */
	r10 += r8;  /* 0C08EBD4 add Rm,Rn */
	r7 = 0xA9u; UPD(0x0C08EBD8u, 3);  /* 0C08EBD6 mov.w @(disp,pc),Rn */
	r0 = r13;  /* 0C08EBD8 mov Rm,Rn */
	r8 = 0xC0A9D50u; UPD(0x0C08EBDCu, 2);  /* 0C08EBDA mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C08EBDC mov Rm,Rn */
	IF(0x0C08EBDEu); r3 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C08EBE0u, 2);  /* 0C08EBDE mov.b @(r0,Rm),Rn */
	r5 = r10;  /* 0C08EBE0 mov Rm,Rn */
	IF(0x0C08EBE2u); { u32 t_ = r8; PR = 0x0C08EBE6u; r6 = r3 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9D50, 0x0C0A9D50u, 0x0C08EBE6u); }  /* 0C08EBE2 jsr @Rn */
L_0C08EBE6: BLKS(0x0C08EBE6u);
	T = (r0 & r0) == 0;  /* 0C08EBE6 tst Rm,Rn */
	{ u32 c_ = !T; r4 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08EC20u, 4); goto L_0C08EC20; } UPD(0x0C08EBECu, 1); goto L_0C08EBEC; }  /* 0C08EBE8 bf/s */
L_0C08EBEC: BLKS(0x0C08EBECu);
	r3 = R32(r14 + 0x4u); UPD(0x0C08EBEEu, 1);  /* 0C08EBEC mov.l @(disp,Rm),Rn */
	r5 = 0x1u;  /* 0C08EBEE mov #imm,Rn */
	r3 += 0x1u;  /* 0C08EBF0 add #imm,Rn */
	r8 = (u32)(s32)(s16)r3;  /* 0C08EBF2 exts.w Rm,Rn */
	W32(r14 + 0x4u, r8); UPD(0x0C08EBF6u, 4);  /* 0C08EBF4 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x4u); UPD(0x0C08EBF8u, 1);  /* 0C08EBF6 mov.l @(disp,Rm),Rn */
	T = (s32)r1 > (s32)r5;  /* 0C08EBF8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08EB6Cu, 4); goto L_0C08EB6C; }  /* 0C08EBFA bf */
L_0C08EBFC: BLKS(0x0C08EBFCu);
	r9 = R32(r14 + 0x8u); UPD(0x0C08EBFEu, 1);  /* 0C08EBFC mov.l @(disp,Rm),Rn */
	r10 = 0xC26CD40u; UPD(0x0C08EC00u, 1);  /* 0C08EBFE mov.l @(disp,pc),Rn */
	r12 = 0x9Cu; UPD(0x0C08EC02u, 1);  /* 0C08EC00 mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C08EC02 add Rm,Rn */
	r10 += r12;  /* 0C08EC04 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C08EC08u, 3);  /* 0C08EC06 mov.b @Rm,Rn */
	r7 += 0xFFFFFFFFu;  /* 0C08EC08 add #imm,Rn */
	r13 = r7 & 0xFF;  /* 0C08EC0A extu.b Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C08EC0C tst Rm,Rn */
	{ u32 c_ = !T; W8(r10, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08EB40u, 6); goto L_0C08EB40; } UPD(0x0C08EC12u, 1); goto L_0C08EC12; }  /* 0C08EC0E bf/s */
L_0C08EC12: BLKS(0x0C08EC12u);
	r11 = 0xC0580D0u; UPD(0x0C08EC14u, 1);  /* 0C08EC12 mov.l @(disp,pc),Rn */
	IF(0x0C08EC14u); { u32 t_ = r11; PR = 0x0C08EC18u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C08EC18u); }  /* 0C08EC14 jsr @Rn */
L_0C08EC18: BLKS(0x0C08EC18u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C08EB42u, 3); goto L_0C08EB42; }  /* 0C08EC18 bra */
L_0C08EC20: BLKS(0x0C08EC20u);
	r6 = 0x28000u; UPD(0x0C08EC22u, 1);  /* 0C08EC20 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08EC22 add #imm,Rn */
	r0 = 0xC177992u; UPD(0x0C08EC26u, 2);  /* 0C08EC24 mov.l @(disp,pc),Rn */
	r11 = 0xC7C1770u; UPD(0x0C08EC28u, 1);  /* 0C08EC26 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C08EC28 mov Rm,Rn */
	W32(r15, r6); UPD(0x0C08EC2Cu, 2);  /* 0C08EC2A mov.l Rm,@Rn */
	r7 = r12;  /* 0C08EC2C mov Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C08EC30u, 2);  /* 0C08EC2E mov.l Rm,@(disp,Rn) */
	IF(0x0C08EC30u); { u32 t_ = r11; PR = 0x0C08EC34u; r6 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1770, 0x0C7C1770u, 0x0C08EC34u); }  /* 0C08EC30 jsr @Rn */
L_0C08EC34: BLKS(0x0C08EC34u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C08EBECu, 3); goto L_0C08EBEC; }  /* 0C08EC34 bra */
L_0C08EC40: BLKS(0x0C08EC40u);
	r9 = 0xC0A9E40u; UPD(0x0C08EC42u, 1);  /* 0C08EC40 mov.l @(disp,pc),Rn */
	IF(0x0C08EC42u); { u32 t_ = r9; PR = 0x0C08EC46u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C08EC46u); }  /* 0C08EC42 jsr @Rn */
L_0C08EC46: BLKS(0x0C08EC46u);
	T = (r0 & r0) == 0;  /* 0C08EC46 tst Rm,Rn */
	if (T) { UPD(0x0C08EC18u, 4); goto L_0C08EC18; }  /* 0C08EC48 bt */
L_0C08EC4A: BLKS(0x0C08EC4Au);
	r2 = 0x8u;  /* 0C08EC4A mov #imm,Rn */
	{ W8(r8, r2); /* slot mov.b Rm,@Rn */ UPD(0x0C08EB40u, 4); goto L_0C08EB40; }  /* 0C08EC4C bra */
}

void f_0C08EC90(sh3_t *c)
{
	LOCALS;
L_0C08EC90: BLKS(0x0C08EC90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08EC92u, 1);  /* 0C08EC90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08EC94u, 1);  /* 0C08EC92 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08EC96u, 1);  /* 0C08EC94 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08EC98u, 1);  /* 0C08EC96 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08EC9Au, 1);  /* 0C08EC98 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08EC9Cu, 1);  /* 0C08EC9A mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C08EC9C exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08ECA0u, 2);  /* 0C08EC9E mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C08ECA0 exts.w Rm,Rn */
	IF(0x0C08ECA2u); r15 -= 4; W32(r15, PR); UPD(0x0C08ECA4u, 2);  /* 0C08ECA2 sts.l pr,@-Rn */
	r7 = 0xB4u; UPD(0x0C08ECA6u, 1);  /* 0C08ECA4 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08ECA6 add #imm,Rn */
	r14 = r15;  /* 0C08ECA8 mov Rm,Rn */
	W32(r14, r6); UPD(0x0C08ECACu, 3);  /* 0C08ECAA mov.l Rm,@Rn */
	IF(0x0C08ECACu); MACL = r12 * r7;  /* 0C08ECAC mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C08ECB0u, 3);  /* 0C08ECAE mov.l @(disp,pc),Rn */
	IF(0x0C08ECB0u); r9 = MACL;  /* 0C08ECB0 sts macl,Rn */
	r9 += r6;  /* 0C08ECB2 add Rm,Rn */
	r5 = 0x8Cu; UPD(0x0C08ECB6u, 3);  /* 0C08ECB4 mov.w @(disp,pc),Rn */
	r11 = r9;  /* 0C08ECB6 mov Rm,Rn */
	r11 += r5;  /* 0C08ECB8 add Rm,Rn */
	r2 = R32(r11); UPD(0x0C08ECBCu, 3);  /* 0C08ECBA mov.l @Rm,Rn */
	IF(0x0C08ECBCu); T = (s32)r2 > 0;  /* 0C08ECBC cmp/pl Rn */
	{ u32 c_ = !T; IF(0x0C08ECC0u); T = (s32)r2 >= 0; /* slot cmp/pz Rn */ if (c_) { UPD(0x0C08ECCCu, 4); goto L_0C08ECCC; } goto L_0C08ECC2; }  /* 0C08ECBE bf/s */
L_0C08ECC2: BLKS(0x0C08ECC2u);
	r0 = 0xFFFFC000u; UPD(0x0C08ECC4u, 2);  /* 0C08ECC2 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C08ECC4 add Rm,Rn */
	W32(r11, r0); UPD(0x0C08ECC8u, 2);  /* 0C08ECC6 mov.l Rm,@Rn */
	r2 = r0;  /* 0C08ECC8 mov Rm,Rn */
	IF(0x0C08ECCAu); T = (s32)r2 >= 0;  /* 0C08ECCA cmp/pz Rn */
	UPD(0x0C08ECCCu, 2);
L_0C08ECCC: BLKS(0x0C08ECCCu);
	if (T) { UPD(0x0C08ECD2u, 3); goto L_0C08ECD2; }  /* 0C08ECCC bt */
L_0C08ECCE: BLKS(0x0C08ECCEu);
	{ IF(0x0C08ECD0u); ; /* slot nop */ UPD(0x0C08EDE0u, 3); goto L_0C08EDE0; }  /* 0C08ECCE bra */
L_0C08ECD2: BLKS(0x0C08ECD2u);
	r4 = R32(r9); UPD(0x0C08ECD4u, 1);  /* 0C08ECD2 mov.l @Rm,Rn */
	IF(0x0C08ECD4u); MACL = r13 * r7;  /* 0C08ECD4 mul.l Rm,Rn */
	r8 = 0xECFFFEFFu; UPD(0x0C08ECD8u, 3);  /* 0C08ECD6 mov.l @(disp,pc),Rn */
	r10 = r5;  /* 0C08ECD8 mov Rm,Rn */
	r4 &= r8;  /* 0C08ECDA and Rm,Rn */
	W32(r9, r4); UPD(0x0C08ECDEu, 3);  /* 0C08ECDC mov.l Rm,@Rn */
	IF(0x0C08ECDEu); r8 = MACL;  /* 0C08ECDE sts macl,Rn */
	r8 += r6;  /* 0C08ECE0 add Rm,Rn */
	r6 = R32(r8); UPD(0x0C08ECE4u, 3);  /* 0C08ECE2 mov.l @Rm,Rn */
	r10 += r8;  /* 0C08ECE4 add Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C08ECE8u, 2);  /* 0C08ECE6 mov.l @(disp,pc),Rn */
	r3 = R32(r8 + 0x38u); UPD(0x0C08ECEAu, 1);  /* 0C08ECE8 mov.l @(disp,Rm),Rn */
	r6 &= r1;  /* 0C08ECEA and Rm,Rn */
	r4 |= r6;  /* 0C08ECEC or Rm,Rn */
	r2 = R32(r10); UPD(0x0C08ECF0u, 3);  /* 0C08ECEE mov.l @Rm,Rn */
	W32(r9, r4); UPD(0x0C08ECF2u, 1);  /* 0C08ECF0 mov.l Rm,@Rn */
	T = (r2 & r2) == 0;  /* 0C08ECF2 tst Rm,Rn */
	{ u32 c_ = !T; W32(r9 + 0x38u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08ED60u, 4); goto L_0C08ED60; } UPD(0x0C08ECF8u, 1); goto L_0C08ECF8; }  /* 0C08ECF4 bf/s */
L_0C08ECF8: BLKS(0x0C08ECF8u);
	r2 = 0xB4u; UPD(0x0C08ECFAu, 1);  /* 0C08ECF8 mov.w @(disp,pc),Rn */
	r9 = 0xFFFFFFFAu;  /* 0C08ECFA mov #imm,Rn */
	IF(0x0C08ECFCu); MACL = r12 * r2;  /* 0C08ECFC mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C08ED00u, 4);  /* 0C08ECFE mov.l @(disp,pc),Rn */
	IF(0x0C08ED00u); r11 = MACL;  /* 0C08ED00 sts macl,Rn */
	IF(0x0C08ED02u); MACL = r13 * r2;  /* 0C08ED02 mul.l Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C08ED06u, 4);  /* 0C08ED04 mov.w @(disp,pc),Rn */
	r11 += r7;  /* 0C08ED06 add Rm,Rn */
	IF(0x0C08ED08u); r10 = R32(r0 + r11); UPD(0x0C08ED0Au, 2);  /* 0C08ED08 mov.l @(r0,Rm),Rn */
	IF(0x0C08ED0Au); r13 = MACL;  /* 0C08ED0A sts macl,Rn */
	r13 += r7;  /* 0C08ED0C add Rm,Rn */
	r3 = 0x86u; UPD(0x0C08ED10u, 3);  /* 0C08ED0E mov.w @(disp,pc),Rn */
	r0 = r13;  /* 0C08ED10 mov Rm,Rn */
	IF(0x0C08ED12u); r7 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C08ED14u, 2);  /* 0C08ED12 mov.w @(r0,Rm),Rn */
	IF(0x0C08ED14u); ARG0(0x479Cu); { s32 s_ = (s32)r9; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C08ED14 shad Rm,Rn */
	r8 = R32(r13 + 0x24u); UPD(0x0C08ED18u, 2);  /* 0C08ED16 mov.l @(disp,Rm),Rn */
	r7 += 0x1Eu;  /* 0C08ED18 add #imm,Rn */
	r4 = R32(r13 + 0x28u); UPD(0x0C08ED1Cu, 2);  /* 0C08ED1A mov.l @(disp,Rm),Rn */
	r0 = 0x7Fu;  /* 0C08ED1C mov #imm,Rn */
	IF(0x0C08ED1Eu); r7 >>= 2;  /* 0C08ED1E shlr2 Rn */
	r7 &= r0;  /* 0C08ED20 and Rm,Rn */
	r13 += 0x50u;  /* 0C08ED22 add #imm,Rn */
	r6 = R32(r11 + 0x2Cu); UPD(0x0C08ED26u, 5);  /* 0C08ED24 mov.l @(disp,Rm),Rn */
	r5 = R32(r11 + 0x30u); UPD(0x0C08ED28u, 1);  /* 0C08ED26 mov.l @(disp,Rm),Rn */
	r8 += r6;  /* 0C08ED28 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r13); UPD(0x0C08ED2Cu, 2);  /* 0C08ED2A mov.w @Rm,Rn */
	r4 += r5;  /* 0C08ED2C add Rm,Rn */
	r2 = R32(r14); UPD(0x0C08ED30u, 2);  /* 0C08ED2E mov.l @Rm,Rn */
	IF(0x0C08ED30u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C08ED30 shar Rn */
	r8 += r10;  /* 0C08ED32 add Rm,Rn */
	W32(r11 + 0x28u, r4); UPD(0x0C08ED36u, 3);  /* 0C08ED34 mov.l Rm,@(disp,Rn) */
	r7 += r2;  /* 0C08ED36 add Rm,Rn */
	r0 &= 0x7u;  /* 0C08ED38 and #imm,r0 */
	W32(r11 + 0x24u, r8); UPD(0x0C08ED3Cu, 3);  /* 0C08ED3A mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C08ED3C mov Rm,Rn */
	W32(r11 + 0x8u, r7); UPD(0x0C08ED40u, 2);  /* 0C08ED3E mov.l Rm,@(disp,Rn) */
	r14 += 0x4u;  /* 0C08ED40 add #imm,Rn */
	W32(r11 + 0xCu, r0); UPD(0x0C08ED44u, 2);  /* 0C08ED42 mov.l Rm,@(disp,Rn) */
	r6 = 0xC0A03B0u; UPD(0x0C08ED46u, 1);  /* 0C08ED44 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08ED46 mov Rm,Rn */
	IF(0x0C08ED48u); PR = R32(r15); r15 += 4; UPD(0x0C08ED4Au, 2);  /* 0C08ED48 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08ED4Cu, 1);  /* 0C08ED4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08ED4Eu, 1);  /* 0C08ED4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08ED50u, 1);  /* 0C08ED4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08ED52u, 1);  /* 0C08ED50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08ED54u, 1);  /* 0C08ED52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08ED56u, 1);  /* 0C08ED54 mov.l @Rm+,Rn */
	IF(0x0C08ED56u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A03B0u: TAIL(f_0C0A03B0); default: JUMPD(tv_); } }  /* 0C08ED56 jmp @Rn */
L_0C08ED60: BLKS(0x0C08ED60u);
	r0 = 0xC0AFE40u; UPD(0x0C08ED62u, 1);  /* 0C08ED60 mov.l @(disp,pc),Rn */
	IF(0x0C08ED62u); { u32 t_ = r0; PR = 0x0C08ED66u; IF(0x0C08ED64u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C08ED66u); }  /* 0C08ED62 jsr @Rn */
L_0C08ED66: BLKS(0x0C08ED66u);
	r5 = 0x7FFu; UPD(0x0C08ED68u, 1);  /* 0C08ED66 mov.w @(disp,pc),Rn */
	T = (s32)r0 > (s32)r5;  /* 0C08ED68 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08EDC0u, 4); goto L_0C08EDC0; }  /* 0C08ED6A bf */
L_0C08ED6C: BLKS(0x0C08ED6Cu);
	r0 = 0x86u; UPD(0x0C08ED6Eu, 1);  /* 0C08ED6C mov.w @(disp,pc),Rn */
	r2 = 0xFFFFFFFAu;  /* 0C08ED6E mov #imm,Rn */
	IF(0x0C08ED70u); r11 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C08ED72u, 2);  /* 0C08ED70 mov.w @(r0,Rm),Rn */
	r0 = R32(r10); UPD(0x0C08ED74u, 1);  /* 0C08ED72 mov.l @Rm,Rn */
	IF(0x0C08ED74u); T = (s32)r0 > 0;  /* 0C08ED74 cmp/pl Rn */
	{ u32 c_ = !T; IF(0x0C08ED78u); ARG0(0x4B2Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r11 <<= (s_ & 31); else if ((s_ & 31) == 0) r11 = (u32)((s32)r11 >> 31); else r11 = (u32)((s32)r11 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ if (c_) { UPD(0x0C08ED80u, 4); goto L_0C08ED80; } goto L_0C08ED7A; }  /* 0C08ED76 bf/s */
L_0C08ED7A: BLKS(0x0C08ED7Au);
	r10 = 0x100u; UPD(0x0C08ED7Cu, 2);  /* 0C08ED7A mov.w @(disp,pc),Rn */
	r10 += r11;  /* 0C08ED7C add Rm,Rn */
	r11 = (u32)(s32)(s16)r10;  /* 0C08ED7E exts.w Rm,Rn */
	UPD(0x0C08ED80u, 2);
L_0C08ED80: BLKS(0x0C08ED80u);
	r10 = 0xC058060u; UPD(0x0C08ED82u, 1);  /* 0C08ED80 mov.l @(disp,pc),Rn */
	r5 = 0x99999u; UPD(0x0C08ED84u, 1);  /* 0C08ED82 mov.l @(disp,pc),Rn */
	IF(0x0C08ED84u); { u32 t_ = r10; PR = 0x0C08ED88u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C08ED88u); }  /* 0C08ED84 jsr @Rn */
L_0C08ED88: BLKS(0x0C08ED88u);
	r8 = 0xC058030u; UPD(0x0C08ED8Au, 1);  /* 0C08ED88 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C08ED8A mov Rm,Rn */
	r10 = R32(r9 + 0x24u); UPD(0x0C08ED8Eu, 2);  /* 0C08ED8C mov.l @(disp,Rm),Rn */
	r5 = 0xC0000u; UPD(0x0C08ED90u, 1);  /* 0C08ED8E mov.l @(disp,pc),Rn */
	IF(0x0C08ED90u); { u32 t_ = r8; PR = 0x0C08ED94u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C08ED94u); }  /* 0C08ED90 jsr @Rn */
L_0C08ED94: BLKS(0x0C08ED94u);
	r6 = R32(r9 + 0x28u); UPD(0x0C08ED96u, 1);  /* 0C08ED94 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C08ED96 add #imm,Rn */
	r6 += r0;  /* 0C08ED98 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08ED9Cu, 3);  /* 0C08ED9A mov.w @(disp,pc),Rn */
	r3 = 0x3u;  /* 0C08ED9C mov #imm,Rn */
	IF(0x0C08ED9Eu); r1 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08EDA0u, 2);  /* 0C08ED9E mov.b @(r0,Rm),Rn */
	r5 = 0xA9u; UPD(0x0C08EDA2u, 1);  /* 0C08EDA0 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C08EDA2 mov Rm,Rn */
	IF(0x0C08EDA4u); r8 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C08EDA6u, 2);  /* 0C08EDA4 mov.b @(r0,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C08EDA6 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C08EDAAu, 2);  /* 0C08EDA8 mov.l Rm,@(disp,Rn) */
	r4 = r8 & 0xFF;  /* 0C08EDAA extu.b Rm,Rn */
	r3 += 0x7Du;  /* 0C08EDAC add #imm,Rn */
	W32(r15, r4); UPD(0x0C08EDB0u, 3);  /* 0C08EDAE mov.l Rm,@Rn */
	W32(r15 + 0x8u, r11); UPD(0x0C08EDB2u, 1);  /* 0C08EDB0 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r3); UPD(0x0C08EDB4u, 1);  /* 0C08EDB2 mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C08EDB6u, 1);  /* 0C08EDB4 mov.l @Rm,Rn */
	r9 = 0xC0AA9D0u; UPD(0x0C08EDB8u, 1);  /* 0C08EDB6 mov.l @(disp,pc),Rn */
	IF(0x0C08EDB8u); { u32 t_ = r9; PR = 0x0C08EDBCu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AA9D0, 0x0C0AA9D0u, 0x0C08EDBCu); }  /* 0C08EDB8 jsr @Rn */
L_0C08EDBC: BLKS(0x0C08EDBCu);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C08ECF8u, 3); goto L_0C08ECF8; }  /* 0C08EDBC bra */
L_0C08EDC0: BLKS(0x0C08EDC0u);
	r0 = 0xC050D70u; UPD(0x0C08EDC2u, 1);  /* 0C08EDC0 mov.l @(disp,pc),Rn */
	IF(0x0C08EDC2u); { u32 t_ = r0; PR = 0x0C08EDC6u; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C08EDC6u); }  /* 0C08EDC2 jsr @Rn */
L_0C08EDC6: BLKS(0x0C08EDC6u);
	r7 = R32(r11); UPD(0x0C08EDC8u, 1);  /* 0C08EDC6 mov.l @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C08EDC8 add #imm,Rn */
	IF(0x0C08EDCAu); r0 <<= 16;  /* 0C08EDCA shll16 Rn */
	r7 += r0;  /* 0C08EDCC add Rm,Rn */
	{ W32(r11, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C08ED6Cu, 6); goto L_0C08ED6C; }  /* 0C08EDCE bra */
L_0C08EDE0: BLKS(0x0C08EDE0u);
	r0 = 0x4000u; UPD(0x0C08EDE2u, 1);  /* 0C08EDE0 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C08EDE2 add Rm,Rn */
	{ W32(r11, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C08ECD2u, 4); goto L_0C08ECD2; }  /* 0C08EDE4 bra */
}

void f_0C08EE30(sh3_t *c)
{
	LOCALS;
L_0C08EE30: BLKS(0x0C08EE30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08EE32u, 1);  /* 0C08EE30 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C08EE32 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08EE36u, 2);  /* 0C08EE34 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08EE38u, 1);  /* 0C08EE36 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08EE3Au, 1);  /* 0C08EE38 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08EE3Cu, 1);  /* 0C08EE3A mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C08EE3Eu, 1);  /* 0C08EE3C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08EE40u, 1);  /* 0C08EE3E mov.l Rm,@-Rn */
	IF(0x0C08EE40u); MACL = r1 * r3;  /* 0C08EE40 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08EE44u, 3);  /* 0C08EE42 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C08EE46u, 1);  /* 0C08EE44 mov.l @(disp,pc),Rn */
	IF(0x0C08EE46u); r2 = MACL;  /* 0C08EE46 sts macl,Rn */
	IF(0x0C08EE48u); r15 -= 4; W32(r15, PR); UPD(0x0C08EE4Au, 2);  /* 0C08EE48 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08EE4A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08EE4Eu, 2);  /* 0C08EE4C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFC0u;  /* 0C08EE4E add #imm,Rn */
	r14 = r15;  /* 0C08EE50 mov Rm,Rn */
	r0 = 0x4Eu;  /* 0C08EE52 mov #imm,Rn */
	T = r2 > r0;  /* 0C08EE54 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W32(r14, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C08EE5Eu, 7); goto L_0C08EE5E; } UPD(0x0C08EE5Au, 1); goto L_0C08EE5A; }  /* 0C08EE56 bf/s */
L_0C08EE5A: BLKS(0x0C08EE5Au);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08EE5A bra */
L_0C08EE5E: BLKS(0x0C08EE5Eu);
	r0 = 0xC08EE70u;  /* 0C08EE5E mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08EE60 add Rm,Rn */
	IF(0x0C08EE62u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08EE64u, 3);  /* 0C08EE62 mov.w @(r0,Rm),Rn */
	IF(0x0C08EE64u); { u32 tv_ = (r4 + 0x0C08EE68u); u32 t_ = PHYS(tv_); IF(0x0C08EE66u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08EE64 braf Rn */
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
}

void f_0C08EF10(sh3_t *c)
{
	LOCALS;
L_0C08EF10: BLKS(0x0C08EF10u);
	r7 = 0xB4u; UPD(0x0C08EF12u, 1);  /* 0C08EF10 mov.w @(disp,pc),Rn */
	r2 = R32(r14); UPD(0x0C08EF14u, 1);  /* 0C08EF12 mov.l @Rm,Rn */
	IF(0x0C08EF14u); MACL = r2 * r7;  /* 0C08EF14 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C08EF18u, 3);  /* 0C08EF16 mov.l @(disp,pc),Rn */
	IF(0x0C08EF18u); r8 = MACL;  /* 0C08EF18 sts macl,Rn */
	r8 += r6;  /* 0C08EF1A add Rm,Rn */
	r8 += 0x3Cu;  /* 0C08EF1C add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r8); UPD(0x0C08EF20u, 4);  /* 0C08EF1E mov.w @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C08EF20 tst Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08EF2Au, 4); goto L_0C08EF2A; } goto L_0C08EF26; }  /* 0C08EF22 bf/s */
L_0C08EF26: BLKS(0x0C08EF26u);
	{ IF(0x0C08EF28u); ; /* slot nop */ UPD(0x0C08F210u, 4); goto L_0C08F210; }  /* 0C08EF26 bra */
L_0C08EF2A: BLKS(0x0C08EF2Au);
	r4 = 0xB4u; UPD(0x0C08EF2Cu, 1);  /* 0C08EF2A mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C08EF2Eu, 1);  /* 0C08EF2C mov.l @Rm,Rn */
	IF(0x0C08EF2Eu); MACL = r1 * r4;  /* 0C08EF2E mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C08EF32u, 3);  /* 0C08EF30 mov.l @(disp,pc),Rn */
	IF(0x0C08EF32u); r3 = MACL;  /* 0C08EF32 sts macl,Rn */
	r3 += r0;  /* 0C08EF34 add Rm,Rn */
	r13 = R32(r3 + 0x24u); UPD(0x0C08EF38u, 3);  /* 0C08EF36 mov.l @(disp,Rm),Rn */
	r11 = 0xFF800000u; UPD(0x0C08EF3Au, 1);  /* 0C08EF38 mov.l @(disp,pc),Rn */
	T = (s32)r13 >= (s32)r11;  /* 0C08EF3A cmp/ge Rm,Rn */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08EF70u, 4); goto L_0C08EF70; } goto L_0C08EF40; }  /* 0C08EF3C bt/s */
L_0C08EF40: BLKS(0x0C08EF40u);
	W32(r3, r7); UPD(0x0C08EF42u, 2);  /* 0C08EF40 mov.l Rm,@Rn */
	r5 = 0xC392AFEu; UPD(0x0C08EF44u, 1);  /* 0C08EF42 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C08EF46u, 1);  /* 0C08EF44 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C08EF46 add #imm,Rn */
	W8(r5, r6); UPD(0x0C08EF4Au, 2);  /* 0C08EF48 mov.b Rm,@Rn */
	r2 = 0xC392AFDu; UPD(0x0C08EF4Cu, 1);  /* 0C08EF4A mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s8)R8(r2); UPD(0x0C08EF4Eu, 1);  /* 0C08EF4C mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C08EF4E add #imm,Rn */
	W8(r2, r12); UPD(0x0C08EF52u, 2);  /* 0C08EF50 mov.b Rm,@Rn */
	IF(0x0C08EF52u); ;  /* 0C08EF52 nop */
	UPD(0x0C08EF54u, 1);
L_0C08EF54: BLKS(0x0C08EF54u);
	r14 += 0x40u;  /* 0C08EF54 add #imm,Rn */
	UPD(0x0C08EF56u, 1);
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08EF70: BLKS(0x0C08EF70u);
	r2 = 0xA7u; UPD(0x0C08EF72u, 1);  /* 0C08EF70 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C08EF72 mov Rm,Rn */
	IF(0x0C08EF74u); r10 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08EF76u, 2);  /* 0C08EF74 mov.b @(r0,Rm),Rn */
	r0 = r10;  /* 0C08EF76 mov Rm,Rn */
	T = (r0 & 0x26u) == 0;  /* 0C08EF78 tst #imm,r0 */
	IF(0x0C08EF7Au); r2 = T;  /* 0C08EF7A movt Rn */
	T = (r0 & 0x62u) == 0;  /* 0C08EF7C tst #imm,r0 */
	IF(0x0C08EF7Eu); r9 = T;  /* 0C08EF7E movt Rn */
	r2 |= r9;  /* 0C08EF80 or Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C08EF82 tst Rm,Rn */
	if (T) { UPD(0x0C08EF8Au, 10); goto L_0C08EF8A; }  /* 0C08EF84 bt */
L_0C08EF86: BLKS(0x0C08EF86u);
	{ IF(0x0C08EF88u); ; /* slot nop */ UPD(0x0C08F200u, 3); goto L_0C08F200; }  /* 0C08EF86 bra */
L_0C08EF8A: BLKS(0x0C08EF8Au);
	r0 = 0x8Cu; UPD(0x0C08EF8Cu, 1);  /* 0C08EF8A mov.w @(disp,pc),Rn */
	IF(0x0C08EF8Cu); W32(r0 + r3, r2); UPD(0x0C08EF8Eu, 1);  /* 0C08EF8C mov.l Rm,@(r0,Rn) */
L_0C08EF8E: BLKS(0x0C08EF8Eu);
	r3 = 0xB4u; UPD(0x0C08EF90u, 1);  /* 0C08EF8E mov.w @(disp,pc),Rn */
	r13 = R32(r14); UPD(0x0C08EF92u, 1);  /* 0C08EF90 mov.l @Rm,Rn */
	IF(0x0C08EF92u); MACL = r13 * r3;  /* 0C08EF92 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C08EF96u, 3);  /* 0C08EF94 mov.l @(disp,pc),Rn */
	IF(0x0C08EF96u); r3 = MACL;  /* 0C08EF96 sts macl,Rn */
	r6 = 0x9Fu; UPD(0x0C08EF9Au, 2);  /* 0C08EF98 mov.w @(disp,pc),Rn */
	r3 += r11;  /* 0C08EF9A add Rm,Rn */
	r6 += r3;  /* 0C08EF9C add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r6); UPD(0x0C08EFA0u, 3);  /* 0C08EF9E mov.b @Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C08EFA0 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08EFA2 tst Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C08EFACu, 5); goto L_0C08EFAC; } goto L_0C08EFA8; }  /* 0C08EFA4 bf/s */
L_0C08EFA8: BLKS(0x0C08EFA8u);
	{ IF(0x0C08EFAAu); ; /* slot nop */ UPD(0x0C08F160u, 4); goto L_0C08F160; }  /* 0C08EFA8 bra */
L_0C08EFAC: BLKS(0x0C08EFACu);
	if (!T) { UPD(0x0C08EF54u, 3); goto L_0C08EF54; }  /* 0C08EFAC bf */
L_0C08EFAE: BLKS(0x0C08EFAEu);
	r5 = 0xAu;  /* 0C08EFAE mov #imm,Rn */
	r0 = 0xA0u; UPD(0x0C08EFB2u, 2);  /* 0C08EFB0 mov.w @(disp,pc),Rn */
	IF(0x0C08EFB2u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08EFB4u, 1);  /* 0C08EFB2 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C08EFB4 extu.b Rm,Rn */
	T = r2 > r5;  /* 0C08EFB6 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C08EF54u, 5); goto L_0C08EF54; }  /* 0C08EFB8 bt */
L_0C08EFBA: BLKS(0x0C08EFBAu);
	r0 = 0xC08EFE0u;  /* 0C08EFBA mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08EFBC add Rm,Rn */
	IF(0x0C08EFBEu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08EFC0u, 3);  /* 0C08EFBE mov.w @(r0,Rm),Rn */
	IF(0x0C08EFC0u); { u32 tv_ = (r3 + 0x0C08EFC4u); u32 t_ = PHYS(tv_); IF(0x0C08EFC2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08EFC0 braf Rn */
L_0C08F14E: BLKS(0x0C08F14Eu);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F14E bra */
L_0C08F160: BLKS(0x0C08F160u);
	r5 = 0xA0u; UPD(0x0C08F162u, 1);  /* 0C08F160 mov.w @(disp,pc),Rn */
	r5 += r3;  /* 0C08F162 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C08F166u, 2);  /* 0C08F164 mov.b @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C08F166 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C08F168 cmp/eq #imm,r0 */
	{ u32 c_ = T; r9 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08F1D0u, 5); goto L_0C08F1D0; } goto L_0C08F16E; }  /* 0C08F16A bt/s */
L_0C08F16E: BLKS(0x0C08F16Eu);
	T = (s32)r0 > (s32)r9;  /* 0C08F16E cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C08F190u, 5); goto L_0C08F190; } goto L_0C08F174; }  /* 0C08F170 bt/s */
L_0C08F174: BLKS(0x0C08F174u);
	T = (r0 & r0) == 0;  /* 0C08F174 tst Rm,Rn */
	if (!T) { UPD(0x0C08F14Eu, 5); goto L_0C08F14E; }  /* 0C08F176 bf */
L_0C08F178: BLKS(0x0C08F178u);
	r4 = R32(r3); UPD(0x0C08F17Au, 1);  /* 0C08F178 mov.l @Rm,Rn */
	r0 = 0x100u; UPD(0x0C08F17Cu, 1);  /* 0C08F17A mov.w @(disp,pc),Rn */
	T = (r4 & r0) == 0;  /* 0C08F17C tst Rm,Rn */
	if (T) { UPD(0x0C08F14Eu, 4); goto L_0C08F14E; }  /* 0C08F17E bt */
L_0C08F180: BLKS(0x0C08F180u);
	r11 = r7;  /* 0C08F180 mov Rm,Rn */
	r11 += 0x1u;  /* 0C08F182 add #imm,Rn */
	W8(r5, r11); UPD(0x0C08F186u, 3);  /* 0C08F184 mov.b Rm,@Rn */
L_0C08F186: BLKS(0x0C08F186u);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F186 bra */
L_0C08F190: BLKS(0x0C08F190u);
	if (!T) { UPD(0x0C08F186u, 3); goto L_0C08F186; }  /* 0C08F190 bf */
L_0C08F192: BLKS(0x0C08F192u);
	r5 += 0x1u;  /* 0C08F192 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C08F196u, 2);  /* 0C08F194 mov.b @Rm,Rn */
	r0 &= 0x3u;  /* 0C08F196 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08F198 tst Rm,Rn */
	{ u32 c_ = !T; r5 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08F186u, 5); goto L_0C08F186; } goto L_0C08F19E; }  /* 0C08F19A bf/s */
L_0C08F19E: BLKS(0x0C08F19Eu);
	r13 = R32(r3); UPD(0x0C08F1A0u, 2);  /* 0C08F19E mov.l @Rm,Rn */
	r7 = r4;  /* 0C08F1A0 mov Rm,Rn */
	r9 = 0xDFFFFFFFu; UPD(0x0C08F1A4u, 2);  /* 0C08F1A2 mov.l @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C08F1A4 add #imm,Rn */
	r13 &= r9;  /* 0C08F1A6 and Rm,Rn */
	W32(r3, r13); UPD(0x0C08F1AAu, 3);  /* 0C08F1A8 mov.l Rm,@Rn */
	W8(r6, r7); UPD(0x0C08F1ACu, 1);  /* 0C08F1AA mov.b Rm,@Rn */
	W8(r5, r0); UPD(0x0C08F1AEu, 1);  /* 0C08F1AC mov.b Rm,@Rn */
L_0C08F1AE: BLKS(0x0C08F1AEu);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F1AE bra */
L_0C08F1D0: BLKS(0x0C08F1D0u);
	r10 = R32(r3 + 0x38u); UPD(0x0C08F1D2u, 1);  /* 0C08F1D0 mov.l @(disp,Rm),Rn */
	r1 = 0x10101u; UPD(0x0C08F1D4u, 1);  /* 0C08F1D2 mov.l @(disp,pc),Rn */
	r6 = 0x808080u; UPD(0x0C08F1D6u, 1);  /* 0C08F1D4 mov.l @(disp,pc),Rn */
	r10 += r1;  /* 0C08F1D6 add Rm,Rn */
	T = r10 == r6;  /* 0C08F1D8 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r3 + 0x38u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08F1AEu, 5); goto L_0C08F1AE; } UPD(0x0C08F1DEu, 1); goto L_0C08F1DE; }  /* 0C08F1DA bf/s */
L_0C08F1DE: BLKS(0x0C08F1DEu);
	r2 = r5;  /* 0C08F1DE mov Rm,Rn */
	r2 += 0x1u;  /* 0C08F1E0 add #imm,Rn */
	r12 = R32(r3); UPD(0x0C08F1E4u, 3);  /* 0C08F1E2 mov.l @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C08F1E6u, 1);  /* 0C08F1E4 mov.b @Rm,Rn */
	r8 = 0x23000000u; UPD(0x0C08F1E8u, 1);  /* 0C08F1E6 mov.l @(disp,pc),Rn */
	r0 |= 0x3u;  /* 0C08F1E8 or #imm,r0 */
	r12 |= r8;  /* 0C08F1EA or Rm,Rn */
	W32(r3, r12); UPD(0x0C08F1EEu, 3);  /* 0C08F1EC mov.l Rm,@Rn */
	{ W8(r2, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C08F180u, 3); goto L_0C08F180; }  /* 0C08F1EE bra */
L_0C08F200: BLKS(0x0C08F200u);
	r8 = 0xC7C2118u; UPD(0x0C08F202u, 1);  /* 0C08F200 mov.l @(disp,pc),Rn */
	IF(0x0C08F202u); { u32 t_ = r8; PR = 0x0C08F206u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C2118, 0x0C7C2118u, 0x0C08F206u); }  /* 0C08F202 jsr @Rn */
L_0C08F206: BLKS(0x0C08F206u);
	r12 = 0xC0A1590u; UPD(0x0C08F208u, 1);  /* 0C08F206 mov.l @(disp,pc),Rn */
	IF(0x0C08F208u); { u32 t_ = r12; PR = 0x0C08F20Cu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1590, 0x0C0A1590u, 0x0C08F20Cu); }  /* 0C08F208 jsr @Rn */
L_0C08F20C: BLKS(0x0C08F20Cu);
	{ IF(0x0C08F20Eu); ; /* slot nop */ UPD(0x0C08EF8Eu, 3); goto L_0C08EF8E; }  /* 0C08F20C bra */
L_0C08F210: BLKS(0x0C08F210u);
	r10 = 0xC7C2118u; UPD(0x0C08F212u, 1);  /* 0C08F210 mov.l @(disp,pc),Rn */
	IF(0x0C08F212u); { u32 t_ = r10; PR = 0x0C08F216u; r4 = r2; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C2118, 0x0C7C2118u, 0x0C08F216u); }  /* 0C08F212 jsr @Rn */
L_0C08F216: BLKS(0x0C08F216u);
	r9 = R32(r8); UPD(0x0C08F218u, 1);  /* 0C08F216 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C08F218 tst Rm,Rn */
	if (!T) { UPD(0x0C08F1AEu, 4); goto L_0C08F1AE; }  /* 0C08F21A bf */
L_0C08F21C: BLKS(0x0C08F21Cu);
	r13 = 0x0u;  /* 0C08F21C mov #imm,Rn */
	r10 = 0xC058060u; UPD(0x0C08F220u, 2);  /* 0C08F21E mov.l @(disp,pc),Rn */
	r11 = 0xC0AC960u; UPD(0x0C08F222u, 1);  /* 0C08F220 mov.l @(disp,pc),Rn */
	r9 = r8;  /* 0C08F222 mov Rm,Rn */
	UPD(0x0C08F224u, 1);
L_0C08F224: BLKS(0x0C08F224u);
	r8 = 0xC0AFE40u; UPD(0x0C08F226u, 1);  /* 0C08F224 mov.l @(disp,pc),Rn */
	r12 = 0xC050D70u; UPD(0x0C08F228u, 1);  /* 0C08F226 mov.l @(disp,pc),Rn */
	IF(0x0C08F228u); { u32 t_ = r8; PR = 0x0C08F22Cu; IF(0x0C08F22Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C08F22Cu); }  /* 0C08F228 jsr @Rn */
L_0C08F22C: BLKS(0x0C08F22Cu);
	r3 = (u32)(s32)(s16)r0;  /* 0C08F22C exts.w Rm,Rn */
	W32(r14 + 0x4u, r3); UPD(0x0C08F230u, 2);  /* 0C08F22E mov.l Rm,@(disp,Rn) */
	IF(0x0C08F230u); { u32 t_ = r12; PR = 0x0C08F234u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C08F234u); }  /* 0C08F230 jsr @Rn */
L_0C08F234: BLKS(0x0C08F234u);
	r8 = r0;  /* 0C08F234 mov Rm,Rn */
	IF(0x0C08F236u); r8 <<= 16;  /* 0C08F236 shll16 Rn */
	r5 = r8;  /* 0C08F238 mov Rm,Rn */
	IF(0x0C08F23Au); { u32 t_ = r10; PR = 0x0C08F23Eu; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLD(t_, 0x0C08F23Eu); }  /* 0C08F23A jsr @Rn */
L_0C08F23E: BLKS(0x0C08F23Eu);
	r5 = r8;  /* 0C08F23E mov Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C08F242u, 2);  /* 0C08F240 mov.l @(disp,pc),Rn */
	r12 = R32(r9 + 0x24u); UPD(0x0C08F244u, 1);  /* 0C08F242 mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C08F246u, 1);  /* 0C08F244 mov.l @(disp,Rm),Rn */
	IF(0x0C08F246u); { u32 t_ = r8; PR = 0x0C08F24Au; r12 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C08F24Au); }  /* 0C08F246 jsr @Rn */
L_0C08F24A: BLKS(0x0C08F24Au);
	r6 = R32(r9 + 0x28u); UPD(0x0C08F24Cu, 1);  /* 0C08F24A mov.l @(disp,Rm),Rn */
	r5 = r12;  /* 0C08F24C mov Rm,Rn */
	r6 += r0;  /* 0C08F24E add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08F252u, 3);  /* 0C08F250 mov.w @(disp,pc),Rn */
	r12 = r13;  /* 0C08F252 mov Rm,Rn */
	IF(0x0C08F254u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08F256u, 2);  /* 0C08F254 mov.b @(r0,Rm),Rn */
	r12 += 0x1u;  /* 0C08F256 add #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C08F258 extu.b Rm,Rn */
	r4 = 0x14u;  /* 0C08F25A mov #imm,Rn */
	IF(0x0C08F25Cu); { u32 t_ = r11; PR = 0x0C08F260u; r13 = (u32)(s32)(s16)r12; /* slot exts.w Rm,Rn */ UPD(t_, 5); CALLD(t_, 0x0C08F260u); }  /* 0C08F25C jsr @Rn */
L_0C08F260: BLKS(0x0C08F260u);
	r8 = 0xFu;  /* 0C08F260 mov #imm,Rn */
	T = (s32)r13 > (s32)r8;  /* 0C08F262 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08F224u, 5); goto L_0C08F224; }  /* 0C08F264 bf */
L_0C08F266: BLKS(0x0C08F266u);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F266 bra */
}

void f_0C08EF54(sh3_t *c)
{
	LOCALS;
L_0C08EF54: BLKS(0x0C08EF54u);
	r14 += 0x40u;  /* 0C08EF54 add #imm,Rn */
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 3);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
}

void f_0C08EF56(sh3_t *c)
{
	LOCALS;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
}

void f_0C08F000(sh3_t *c)
{
	LOCALS;
	goto L_0C08F000;
L_0C08EF4C: BLKS(0x0C08EF4Cu);
	r12 = (u32)(s32)(s8)R8(r2); UPD(0x0C08EF4Eu, 1);  /* 0C08EF4C mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C08EF4E add #imm,Rn */
	W8(r2, r12); UPD(0x0C08EF52u, 2);  /* 0C08EF50 mov.b Rm,@Rn */
	IF(0x0C08EF52u); ;  /* 0C08EF52 nop */
	r14 += 0x40u;  /* 0C08EF54 add #imm,Rn */
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 4);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F000: BLKS(0x0C08F000u);
	r1 = R32(r14); UPD(0x0C08F002u, 1);  /* 0C08F000 mov.l @Rm,Rn */
	r10 = 0xFFFFFF80u;  /* 0C08F002 mov #imm,Rn */
	r7 = 0xB4u; UPD(0x0C08F006u, 2);  /* 0C08F004 mov.w @(disp,pc),Rn */
	IF(0x0C08F006u); MACL = r1 * r7;  /* 0C08F006 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C08F00Au, 3);  /* 0C08F008 mov.l @(disp,pc),Rn */
	IF(0x0C08F00Au); r2 = MACL;  /* 0C08F00A sts macl,Rn */
	r8 = 0xA0u; UPD(0x0C08F00Eu, 2);  /* 0C08F00C mov.w @(disp,pc),Rn */
	r2 += r11;  /* 0C08F00E add Rm,Rn */
	r2 += r8;  /* 0C08F010 add Rm,Rn */
	r0 = r2;  /* 0C08F012 mov Rm,Rn */
	r0 += 0x1u;  /* 0C08F014 add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r0); UPD(0x0C08F018u, 5);  /* 0C08F016 mov.b @Rm,Rn */
	r12 |= r10;  /* 0C08F018 or Rm,Rn */
	W8(r0, r12); UPD(0x0C08F01Cu, 2);  /* 0C08F01A mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C08F01C add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r0); UPD(0x0C08F020u, 2);  /* 0C08F01E mov.b @Rm,Rn */
	r6 |= r10;  /* 0C08F020 or Rm,Rn */
	{ W8(r0, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C08EF4Cu, 4); goto L_0C08EF4C; }  /* 0C08F022 bra */
}

void f_0C08F030(sh3_t *c)
{
	LOCALS;
	goto L_0C08F030;
L_0C08EF50: BLKS(0x0C08EF50u);
	W8(r2, r12); UPD(0x0C08EF52u, 1);  /* 0C08EF50 mov.b Rm,@Rn */
	IF(0x0C08EF52u); ;  /* 0C08EF52 nop */
	r14 += 0x40u;  /* 0C08EF54 add #imm,Rn */
	UPD(0x0C08EF56u, 2);
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F030: BLKS(0x0C08F030u);
	r2 = 0xB4u; UPD(0x0C08F032u, 1);  /* 0C08F030 mov.w @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C08F034u, 1);  /* 0C08F032 mov.l @Rm,Rn */
	IF(0x0C08F034u); MACL = r4 * r2;  /* 0C08F034 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C08F038u, 3);  /* 0C08F036 mov.l @(disp,pc),Rn */
	IF(0x0C08F038u); r2 = MACL;  /* 0C08F038 sts macl,Rn */
	r9 = 0xA0u; UPD(0x0C08F03Cu, 2);  /* 0C08F03A mov.w @(disp,pc),Rn */
	r2 += r5;  /* 0C08F03C add Rm,Rn */
	r2 += r9;  /* 0C08F03E add Rm,Rn */
	r2 += 0x2u;  /* 0C08F040 add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C08F044u, 4);  /* 0C08F042 mov.b @Rm,Rn */
	r2 += 0xFFFFFFFEu;  /* 0C08F044 add #imm,Rn */
	IF(0x0C08F046u); T = (s32)r13 >= 0;  /* 0C08F046 cmp/pz Rn */
	if (!T) { UPD(0x0C08F07Cu, 5); goto L_0C08F07C; }  /* 0C08F048 bf */
L_0C08F04A: BLKS(0x0C08F04Au);
	r12 = (u32)(s32)(s8)R8(r2); UPD(0x0C08F04Cu, 1);  /* 0C08F04A mov.b @Rm,Rn */
	{ r12 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C08EF50u, 3); goto L_0C08EF50; }  /* 0C08F04C bra */
L_0C08F07C: BLKS(0x0C08F07Cu);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F07C bra */
}

void f_0C08F050(sh3_t *c)
{
	LOCALS;
	goto L_0C08F050;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F050: BLKS(0x0C08F050u);
	r6 = R32(r14); UPD(0x0C08F052u, 1);  /* 0C08F050 mov.l @Rm,Rn */
	r1 = 0xFFFFFF80u;  /* 0C08F052 mov #imm,Rn */
	r4 = 0xB4u; UPD(0x0C08F056u, 2);  /* 0C08F054 mov.w @(disp,pc),Rn */
	IF(0x0C08F056u); MACL = r6 * r4;  /* 0C08F056 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C08F05Au, 3);  /* 0C08F058 mov.l @(disp,pc),Rn */
	IF(0x0C08F05Au); r3 = MACL;  /* 0C08F05A sts macl,Rn */
	r5 = 0xA0u; UPD(0x0C08F05Eu, 2);  /* 0C08F05C mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C08F05E add Rm,Rn */
	r3 += r5;  /* 0C08F060 add Rm,Rn */
	r13 = r3;  /* 0C08F062 mov Rm,Rn */
	r13 += 0x2u;  /* 0C08F064 add #imm,Rn */
	r9 = r3;  /* 0C08F066 mov Rm,Rn */
	r9 += 0x1u;  /* 0C08F068 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r13); UPD(0x0C08F06Cu, 7);  /* 0C08F06A mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C08F06Eu, 1);  /* 0C08F06C mov.b @Rm,Rn */
	r7 |= r1;  /* 0C08F06E or Rm,Rn */
	r0 &= 0x7Fu;  /* 0C08F070 and #imm,r0 */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C08F074u, 3);  /* 0C08F072 mov.b @Rm,Rn */
	W8(r9, r0); UPD(0x0C08F076u, 1);  /* 0C08F074 mov.b Rm,@Rn */
	r1 += 0x1u;  /* 0C08F076 add #imm,Rn */
	W8(r13, r7); UPD(0x0C08F07Au, 2);  /* 0C08F078 mov.b Rm,@Rn */
	W8(r3, r1); UPD(0x0C08F07Cu, 1);  /* 0C08F07A mov.b Rm,@Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F07C bra */
}

void f_0C08F07A(sh3_t *c)
{
	LOCALS;
	goto L_0C08F07A;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F07A: BLKS(0x0C08F07Au);
	W8(r3, r1); UPD(0x0C08F07Cu, 1);  /* 0C08F07A mov.b Rm,@Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F07C bra */
}

void f_0C08F080(sh3_t *c)
{
	LOCALS;
	goto L_0C08F080;
L_0C08EF4C: BLKS(0x0C08EF4Cu);
	r12 = (u32)(s32)(s8)R8(r2); UPD(0x0C08EF4Eu, 1);  /* 0C08EF4C mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C08EF4E add #imm,Rn */
	W8(r2, r12); UPD(0x0C08EF52u, 2);  /* 0C08EF50 mov.b Rm,@Rn */
	IF(0x0C08EF52u); ;  /* 0C08EF52 nop */
	r14 += 0x40u;  /* 0C08EF54 add #imm,Rn */
	UPD(0x0C08EF56u, 2);
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F07C: BLKS(0x0C08F07Cu);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F07C bra */
L_0C08F080: BLKS(0x0C08F080u);
	r0 = 0xB4u; UPD(0x0C08F082u, 1);  /* 0C08F080 mov.w @(disp,pc),Rn */
	r8 = R32(r14); UPD(0x0C08F084u, 1);  /* 0C08F082 mov.l @Rm,Rn */
	IF(0x0C08F084u); MACL = r8 * r0;  /* 0C08F084 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C08F088u, 3);  /* 0C08F086 mov.l @(disp,pc),Rn */
	IF(0x0C08F088u); r2 = MACL;  /* 0C08F088 sts macl,Rn */
	r10 = 0xA0u; UPD(0x0C08F08Cu, 2);  /* 0C08F08A mov.w @(disp,pc),Rn */
	r2 += r12;  /* 0C08F08C add Rm,Rn */
	r2 += r10;  /* 0C08F08E add Rm,Rn */
	r7 = r2;  /* 0C08F090 mov Rm,Rn */
	r7 += 0x2u;  /* 0C08F092 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C08F096u, 5);  /* 0C08F094 mov.b @Rm,Rn */
	IF(0x0C08F096u); T = (s32)r3 >= 0;  /* 0C08F096 cmp/pz Rn */
	if (!T) { UPD(0x0C08F07Cu, 4); goto L_0C08F07C; }  /* 0C08F098 bf */
L_0C08F09A: BLKS(0x0C08F09Au);
	r11 = r2;  /* 0C08F09A mov Rm,Rn */
	r11 += 0x1u;  /* 0C08F09C add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C08F0A0u, 3);  /* 0C08F09E mov.b @Rm,Rn */
	r0 |= 0x40u;  /* 0C08F0A0 or #imm,r0 */
	W8(r11, r0); UPD(0x0C08F0A4u, 2);  /* 0C08F0A2 mov.b Rm,@Rn */
	r0 = r3;  /* 0C08F0A4 mov Rm,Rn */
	r0 |= 0x40u;  /* 0C08F0A6 or #imm,r0 */
	{ W8(r7, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C08EF4Cu, 5); goto L_0C08EF4C; }  /* 0C08F0A8 bra */
}

void f_0C08F0B0(sh3_t *c)
{
	LOCALS;
	goto L_0C08F0B0;
L_0C08EF50: BLKS(0x0C08EF50u);
	W8(r2, r12); UPD(0x0C08EF52u, 1);  /* 0C08EF50 mov.b Rm,@Rn */
	IF(0x0C08EF52u); ;  /* 0C08EF52 nop */
	r14 += 0x40u;  /* 0C08EF54 add #imm,Rn */
	UPD(0x0C08EF56u, 2);
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F048: BLKS(0x0C08F048u);
	if (!T) { UPD(0x0C08F07Cu, 3); goto L_0C08F07C; }  /* 0C08F048 bf */
L_0C08F04A: BLKS(0x0C08F04Au);
	r12 = (u32)(s32)(s8)R8(r2); UPD(0x0C08F04Cu, 1);  /* 0C08F04A mov.b @Rm,Rn */
	{ r12 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C08EF50u, 3); goto L_0C08EF50; }  /* 0C08F04C bra */
L_0C08F07C: BLKS(0x0C08F07Cu);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F07C bra */
L_0C08F0B0: BLKS(0x0C08F0B0u);
	r7 = 0xB4u; UPD(0x0C08F0B2u, 1);  /* 0C08F0B0 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C08F0B4u, 1);  /* 0C08F0B2 mov.l @Rm,Rn */
	IF(0x0C08F0B4u); MACL = r1 * r7;  /* 0C08F0B4 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C08F0B8u, 3);  /* 0C08F0B6 mov.l @(disp,pc),Rn */
	IF(0x0C08F0B8u); r2 = MACL;  /* 0C08F0B8 sts macl,Rn */
	r3 = 0xA0u; UPD(0x0C08F0BCu, 2);  /* 0C08F0BA mov.w @(disp,pc),Rn */
	r2 += r13;  /* 0C08F0BC add Rm,Rn */
	r2 += r3;  /* 0C08F0BE add Rm,Rn */
	r2 += 0x2u;  /* 0C08F0C0 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C08F0C4u, 4);  /* 0C08F0C2 mov.b @Rm,Rn */
	r0 &= 0x40u;  /* 0C08F0C4 and #imm,r0 */
	r2 += 0xFFFFFFFEu;  /* 0C08F0C6 add #imm,Rn */
	{ T = (r0 & r0) == 0; /* slot tst Rm,Rn */ UPD(0x0C08F048u, 5); goto L_0C08F048; }  /* 0C08F0C8 bra */
}

void f_0C08F0D0(sh3_t *c)
{
	LOCALS;
	goto L_0C08F0D0;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F07C: BLKS(0x0C08F07Cu);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F07C bra */
L_0C08F0D0: BLKS(0x0C08F0D0u);
	r3 = 0xB4u; UPD(0x0C08F0D2u, 1);  /* 0C08F0D0 mov.w @(disp,pc),Rn */
	r8 = R32(r14); UPD(0x0C08F0D4u, 1);  /* 0C08F0D2 mov.l @Rm,Rn */
	IF(0x0C08F0D4u); MACL = r8 * r3;  /* 0C08F0D4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C08F0D8u, 3);  /* 0C08F0D6 mov.l @(disp,pc),Rn */
	IF(0x0C08F0D8u); r3 = MACL;  /* 0C08F0D8 sts macl,Rn */
	r3 += r0;  /* 0C08F0DA add Rm,Rn */
	r0 = 0x99u; UPD(0x0C08F0DEu, 3);  /* 0C08F0DC mov.w @(disp,pc),Rn */
	IF(0x0C08F0DEu); r12 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08F0E0u, 1);  /* 0C08F0DE mov.b @(r0,Rm),Rn */
	r6 = 0xF0u; UPD(0x0C08F0E2u, 1);  /* 0C08F0E0 mov.w @(disp,pc),Rn */
	r12 += 0x1u;  /* 0C08F0E2 add #imm,Rn */
	r10 = r12 & 0xFF;  /* 0C08F0E4 extu.b Rm,Rn */
	T = r10 == r6;  /* 0C08F0E6 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C08F0EAu); W8(r0 + r3, r12); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C08F07Cu, 6); goto L_0C08F07C; } UPD(0x0C08F0ECu, 1); goto L_0C08F0EC; }  /* 0C08F0E8 bf/s */
L_0C08F0EC: BLKS(0x0C08F0ECu);
	r11 = 0x0u;  /* 0C08F0EC mov #imm,Rn */
	IF(0x0C08F0EEu); W8(r0 + r3, r11); UPD(0x0C08F0F0u, 2);  /* 0C08F0EE mov.b Rm,@(r0,Rn) */
	r0 += 0x7u;  /* 0C08F0F0 add #imm,Rn */
	IF(0x0C08F0F2u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08F0F4u, 2);  /* 0C08F0F2 mov.b @(r0,Rm),Rn */
	r2 += 0x1u;  /* 0C08F0F4 add #imm,Rn */
	IF(0x0C08F0F6u); W8(r0 + r3, r2); UPD(0x0C08F0F8u, 2);  /* 0C08F0F6 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F0F8 bra */
}

void f_0C08F0F4(sh3_t *c)
{
	LOCALS;
	goto L_0C08F0F4;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F0F4: BLKS(0x0C08F0F4u);
	r2 += 0x1u;  /* 0C08F0F4 add #imm,Rn */
	IF(0x0C08F0F6u); W8(r0 + r3, r2); UPD(0x0C08F0F8u, 2);  /* 0C08F0F6 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F0F8 bra */
}

void f_0C08F100(sh3_t *c)
{
	LOCALS;
	goto L_0C08F100;
L_0C08EF4C: BLKS(0x0C08EF4Cu);
	r12 = (u32)(s32)(s8)R8(r2); UPD(0x0C08EF4Eu, 1);  /* 0C08EF4C mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C08EF4E add #imm,Rn */
	W8(r2, r12); UPD(0x0C08EF52u, 2);  /* 0C08EF50 mov.b Rm,@Rn */
	IF(0x0C08EF52u); ;  /* 0C08EF52 nop */
	r14 += 0x40u;  /* 0C08EF54 add #imm,Rn */
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 4);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F100: BLKS(0x0C08F100u);
	r10 = R32(r14); UPD(0x0C08F102u, 1);  /* 0C08F100 mov.l @Rm,Rn */
	r6 = 0xB4u; UPD(0x0C08F104u, 1);  /* 0C08F102 mov.w @(disp,pc),Rn */
	IF(0x0C08F104u); MACL = r10 * r6;  /* 0C08F104 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C08F108u, 3);  /* 0C08F106 mov.l @(disp,pc),Rn */
	IF(0x0C08F108u); r2 = MACL;  /* 0C08F108 sts macl,Rn */
	r5 = 0xA0u; UPD(0x0C08F10Cu, 2);  /* 0C08F10A mov.w @(disp,pc),Rn */
	r2 += r4;  /* 0C08F10C add Rm,Rn */
	r2 += r5;  /* 0C08F10E add Rm,Rn */
	r9 = r2;  /* 0C08F110 mov Rm,Rn */
	r9 += 0x1u;  /* 0C08F112 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C08F116u, 5);  /* 0C08F114 mov.b @Rm,Rn */
	r0 &= 0xBFu;  /* 0C08F116 and #imm,r0 */
	W8(r9, r0); UPD(0x0C08F11Au, 2);  /* 0C08F118 mov.b Rm,@Rn */
	r9 += 0x1u;  /* 0C08F11A add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C08F11Eu, 2);  /* 0C08F11C mov.b @Rm,Rn */
	r0 |= 0x20u;  /* 0C08F11E or #imm,r0 */
	{ W8(r9, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C08EF4Cu, 4); goto L_0C08EF4C; }  /* 0C08F120 bra */
}

void f_0C08F130(sh3_t *c)
{
	LOCALS;
	goto L_0C08F130;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F0F8: BLKS(0x0C08F0F8u);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F0F8 bra */
L_0C08F130: BLKS(0x0C08F130u);
	r2 = 0xB4u; UPD(0x0C08F132u, 1);  /* 0C08F130 mov.w @(disp,pc),Rn */
	r11 = R32(r14); UPD(0x0C08F134u, 1);  /* 0C08F132 mov.l @Rm,Rn */
	IF(0x0C08F134u); MACL = r11 * r2;  /* 0C08F134 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C08F138u, 3);  /* 0C08F136 mov.l @(disp,pc),Rn */
	r0 = 0xA0u; UPD(0x0C08F13Au, 1);  /* 0C08F138 mov.w @(disp,pc),Rn */
	IF(0x0C08F13Au); r2 = MACL;  /* 0C08F13A sts macl,Rn */
	r2 += r8;  /* 0C08F13C add Rm,Rn */
	r2 += r0;  /* 0C08F13E add Rm,Rn */
	r2 += 0x2u;  /* 0C08F140 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C08F144u, 5);  /* 0C08F142 mov.b @Rm,Rn */
	r0 &= 0x40u;  /* 0C08F144 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08F146 tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08F0F8u, 5); goto L_0C08F0F8; } goto L_0C08F14C; }  /* 0C08F148 bf/s */
L_0C08F14C: BLKS(0x0C08F14Cu);
	W8(r2, r0); UPD(0x0C08F14Eu, 2);  /* 0C08F14C mov.b Rm,@Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F14E bra */
}

void f_0C08F270(sh3_t *c)
{
	LOCALS;
L_0C08F270: BLKS(0x0C08F270u);
	r13 = 0xC0A0540u; UPD(0x0C08F272u, 1);  /* 0C08F270 mov.l @(disp,pc),Rn */
	IF(0x0C08F272u); { u32 t_ = r13; PR = 0x0C08F276u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C08F276u); }  /* 0C08F272 jsr @Rn */
L_0C08F276: BLKS(0x0C08F276u);
	IF(0x0C08F276u); T = (s32)r0 >= 0;  /* 0C08F276 cmp/pz Rn */
	if (!T) { UPD(0x0C08F2A0u, 4); goto L_0C08F2A0; }  /* 0C08F278 bf */
L_0C08F27A: BLKS(0x0C08F27Au);
	r4 = R32(r14); UPD(0x0C08F27Cu, 1);  /* 0C08F27A mov.l @Rm,Rn */
	r5 = r0;  /* 0C08F27C mov Rm,Rn */
	r6 = 0x1u;  /* 0C08F27E mov #imm,Rn */
	r3 = 0xC08EC90u; UPD(0x0C08F282u, 3);  /* 0C08F280 mov.l @(disp,pc),Rn */
	r14 += 0x40u;  /* 0C08F282 add #imm,Rn */
	r15 = r14;  /* 0C08F284 mov Rm,Rn */
	IF(0x0C08F286u); PR = R32(r15); r15 += 4; UPD(0x0C08F288u, 3);  /* 0C08F286 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F28Au, 1);  /* 0C08F288 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F28Cu, 1);  /* 0C08F28A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F28Eu, 1);  /* 0C08F28C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F290u, 1);  /* 0C08F28E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F292u, 1);  /* 0C08F290 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F294u, 1);  /* 0C08F292 mov.l @Rm+,Rn */
	IF(0x0C08F294u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F294 jmp @Rn */
L_0C08F2A0: BLKS(0x0C08F2A0u);
	r4 = R32(r14); UPD(0x0C08F2A2u, 1);  /* 0C08F2A0 mov.l @Rm,Rn */
	r1 = 0xC7C2DE4u; UPD(0x0C08F2A4u, 1);  /* 0C08F2A2 mov.l @(disp,pc),Rn */
	r14 += 0x40u;  /* 0C08F2A4 add #imm,Rn */
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 3);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C7C2DE4u: TAIL(f_0C7C2DE4); default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
}

void f_0C08F2A2(sh3_t *c)
{
	LOCALS;
L_0C08F2A2: BLKS(0x0C08F2A2u);
	r1 = 0xC7C2DE4u; UPD(0x0C08F2A4u, 1);  /* 0C08F2A2 mov.l @(disp,pc),Rn */
	r14 += 0x40u;  /* 0C08F2A4 add #imm,Rn */
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 3);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C7C2DE4u: TAIL(f_0C7C2DE4); default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
}

void f_0C08F2A4(sh3_t *c)
{
	LOCALS;
L_0C08F2A4: BLKS(0x0C08F2A4u);
	r14 += 0x40u;  /* 0C08F2A4 add #imm,Rn */
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 3);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
}

void f_0C08F2A6(sh3_t *c)
{
	LOCALS;
L_0C08F2A6: BLKS(0x0C08F2A6u);
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 2);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
}

void f_0C08F2C0(sh3_t *c)
{
	LOCALS;
	goto L_0C08F2C0;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F266: BLKS(0x0C08F266u);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F266 bra */
L_0C08F2A0: BLKS(0x0C08F2A0u);
	r4 = R32(r14); UPD(0x0C08F2A2u, 1);  /* 0C08F2A0 mov.l @Rm,Rn */
	r1 = 0xC7C2DE4u; UPD(0x0C08F2A4u, 1);  /* 0C08F2A2 mov.l @(disp,pc),Rn */
	r14 += 0x40u;  /* 0C08F2A4 add #imm,Rn */
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 3);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C7C2DE4u: TAIL(f_0C7C2DE4); default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08F2C0: BLKS(0x0C08F2C0u);
	r10 = 0xC0A0490u; UPD(0x0C08F2C2u, 1);  /* 0C08F2C0 mov.l @(disp,pc),Rn */
	IF(0x0C08F2C2u); { u32 t_ = r10; PR = 0x0C08F2C6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0490, 0x0C0A0490u, 0x0C08F2C6u); }  /* 0C08F2C2 jsr @Rn */
L_0C08F2C6: BLKS(0x0C08F2C6u);
	IF(0x0C08F2C6u); T = (s32)r0 >= 0;  /* 0C08F2C6 cmp/pz Rn */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08F2A0u, 4); goto L_0C08F2A0; } goto L_0C08F2CC; }  /* 0C08F2C8 bf/s */
L_0C08F2CC: BLKS(0x0C08F2CCu);
	r4 = 0xB4u; UPD(0x0C08F2CEu, 2);  /* 0C08F2CC mov.w @(disp,pc),Rn */
	r6 = R32(r14); UPD(0x0C08F2D0u, 1);  /* 0C08F2CE mov.l @Rm,Rn */
	IF(0x0C08F2D0u); MACL = r6 * r4;  /* 0C08F2D0 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C08F2D4u, 3);  /* 0C08F2D2 mov.l @(disp,pc),Rn */
	IF(0x0C08F2D4u); r0 = MACL;  /* 0C08F2D4 sts macl,Rn */
	r0 += r5;  /* 0C08F2D6 add Rm,Rn */
	r6 = R32(r0); UPD(0x0C08F2DAu, 3);  /* 0C08F2D8 mov.l @Rm,Rn */
	IF(0x0C08F2DAu); MACL = r9 * r4;  /* 0C08F2DA mul.l Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C08F2DEu, 3);  /* 0C08F2DC mov.w @(disp,pc),Rn */
	r6 &= r2;  /* 0C08F2DE and Rm,Rn */
	W32(r0, r6); UPD(0x0C08F2E2u, 2);  /* 0C08F2E0 mov.l Rm,@Rn */
	IF(0x0C08F2E2u); r8 = MACL;  /* 0C08F2E2 sts macl,Rn */
	r8 += r5;  /* 0C08F2E4 add Rm,Rn */
	r12 = R32(r8); UPD(0x0C08F2E8u, 3);  /* 0C08F2E6 mov.l @Rm,Rn */
	r1 = 0x100u; UPD(0x0C08F2EAu, 1);  /* 0C08F2E8 mov.w @(disp,pc),Rn */
	r4 = 0x9Fu; UPD(0x0C08F2ECu, 1);  /* 0C08F2EA mov.w @(disp,pc),Rn */
	r12 &= r1;  /* 0C08F2EC and Rm,Rn */
	r10 = R32(r8 + 0x24u); UPD(0x0C08F2F0u, 2);  /* 0C08F2EE mov.l @(disp,Rm),Rn */
	r6 |= r12;  /* 0C08F2F0 or Rm,Rn */
	r7 = R32(r0 + 0x2Cu); UPD(0x0C08F2F4u, 2);  /* 0C08F2F2 mov.l @(disp,Rm),Rn */
	r13 = R32(r8 + 0x28u); UPD(0x0C08F2F6u, 1);  /* 0C08F2F4 mov.l @(disp,Rm),Rn */
	r10 += r7;  /* 0C08F2F6 add Rm,Rn */
	r3 = R32(r0 + 0x30u); UPD(0x0C08F2FAu, 2);  /* 0C08F2F8 mov.l @(disp,Rm),Rn */
	r7 = 0x3u;  /* 0C08F2FA mov #imm,Rn */
	r11 = R32(r8 + 0x38u); UPD(0x0C08F2FEu, 2);  /* 0C08F2FC mov.l @(disp,Rm),Rn */
	r13 += r3;  /* 0C08F2FE add Rm,Rn */
	IF(0x0C08F300u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C08F302u, 2);  /* 0C08F300 mov.b @(r0,Rm),Rn */
	W32(r0 + 0x24u, r10); UPD(0x0C08F304u, 1);  /* 0C08F302 mov.l Rm,@(disp,Rn) */
	r2 = r5 & 0xFF;  /* 0C08F304 extu.b Rm,Rn */
	W32(r0 + 0x28u, r13); UPD(0x0C08F308u, 2);  /* 0C08F306 mov.l Rm,@(disp,Rn) */
	T = r2 > r7;  /* 0C08F308 cmp/hi Rm,Rn */
	W32(r0 + 0x38u, r11); UPD(0x0C08F30Cu, 2);  /* 0C08F30A mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r0, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C08F266u, 3); goto L_0C08F266; } UPD(0x0C08F310u, 1); goto L_0C08F310; }  /* 0C08F30C bt/s */
L_0C08F310: BLKS(0x0C08F310u);
	r0 = 0xC08F360u;  /* 0C08F310 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08F312 add Rm,Rn */
	IF(0x0C08F314u); r12 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08F316u, 3);  /* 0C08F314 mov.w @(r0,Rm),Rn */
	IF(0x0C08F316u); { u32 tv_ = (r12 + 0x0C08F31Au); u32 t_ = PHYS(tv_); IF(0x0C08F318u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F316 braf Rn */
}

void f_0C08F370(sh3_t *c)
{
	LOCALS;
	goto L_0C08F370;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F370: BLKS(0x0C08F370u);
	r2 = 0xB4u; UPD(0x0C08F372u, 1);  /* 0C08F370 mov.w @(disp,pc),Rn */
	IF(0x0C08F372u); MACL = r9 * r2;  /* 0C08F372 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C08F376u, 3);  /* 0C08F374 mov.l @(disp,pc),Rn */
	IF(0x0C08F376u); r0 = MACL;  /* 0C08F376 sts macl,Rn */
	r8 = 0xA1u; UPD(0x0C08F37Au, 2);  /* 0C08F378 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C08F37A add Rm,Rn */
	IF(0x0C08F37Cu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F37Eu, 2);  /* 0C08F37C mov.b @(r0,Rm),Rn */
	IF(0x0C08F37Eu); T = (s32)r9 >= 0;  /* 0C08F37E cmp/pz Rn */
	if (T) { UPD(0x0C08F3A6u, 4); goto L_0C08F3A6; }  /* 0C08F380 bt */
L_0C08F382: BLKS(0x0C08F382u);
	r13 = R32(r14); UPD(0x0C08F384u, 1);  /* 0C08F382 mov.l @Rm,Rn */
	r4 = 0x6Cu;  /* 0C08F384 mov #imm,Rn */
	IF(0x0C08F386u); MACL = r13 * r2;  /* 0C08F386 mul.l Rm,Rn */
	r11 = 0xC0AFC10u; UPD(0x0C08F38Au, 4);  /* 0C08F388 mov.l @(disp,pc),Rn */
	IF(0x0C08F38Au); r8 = MACL;  /* 0C08F38A sts macl,Rn */
	r8 += r3;  /* 0C08F38C add Rm,Rn */
	r0 = R32(r8 + 0x2Cu); UPD(0x0C08F390u, 3);  /* 0C08F38E mov.l @(disp,Rm),Rn */
	r8 += 0x50u;  /* 0C08F390 add #imm,Rn */
	IF(0x0C08F392u); { u32 t_ = r11; PR = 0x0C08F396u; W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C08F396u); }  /* 0C08F392 jsr @Rn */
L_0C08F396: BLKS(0x0C08F396u);
	r0 = 0x88u; UPD(0x0C08F398u, 1);  /* 0C08F396 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C08F398 add #imm,Rn */
	r2 = 0x1u;  /* 0C08F39A mov #imm,Rn */
	IF(0x0C08F39Cu); W16(r0 + r8, r2); UPD(0x0C08F39Eu, 3);  /* 0C08F39C mov.w Rm,@(r0,Rn) */
	r0 += 0x17u;  /* 0C08F39E add #imm,Rn */
	IF(0x0C08F3A0u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F3A2u, 2);  /* 0C08F3A0 mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C08F3A2 add #imm,Rn */
	IF(0x0C08F3A4u); W8(r0 + r8, r4); UPD(0x0C08F3A6u, 2);  /* 0C08F3A4 mov.b Rm,@(r0,Rn) */
L_0C08F3A6: BLKS(0x0C08F3A6u);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F3A6 bra */
}

void f_0C08F3B0(sh3_t *c)
{
	LOCALS;
	goto L_0C08F3B0;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F3A6: BLKS(0x0C08F3A6u);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F3A6 bra */
L_0C08F3B0: BLKS(0x0C08F3B0u);
	r7 = 0xB4u; UPD(0x0C08F3B2u, 1);  /* 0C08F3B0 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C08F3B4u, 1);  /* 0C08F3B2 mov.l @Rm,Rn */
	IF(0x0C08F3B4u); MACL = r1 * r7;  /* 0C08F3B4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C08F3B8u, 3);  /* 0C08F3B6 mov.l @(disp,pc),Rn */
	IF(0x0C08F3B8u); r7 = MACL;  /* 0C08F3B8 sts macl,Rn */
	r7 += r6;  /* 0C08F3BA add Rm,Rn */
	r5 = R32(r7 + 0x2Cu); UPD(0x0C08F3BEu, 3);  /* 0C08F3BC mov.l @(disp,Rm),Rn */
	r4 = 0x8000u; UPD(0x0C08F3C0u, 1);  /* 0C08F3BE mov.l @(disp,pc),Rn */
	r5 += r4;  /* 0C08F3C0 add Rm,Rn */
	W32(r7 + 0x2Cu, r5); UPD(0x0C08F3C4u, 2);  /* 0C08F3C2 mov.l Rm,@(disp,Rn) */
	r7 += 0x50u;  /* 0C08F3C4 add #imm,Rn */
	r10 = R32(r7); UPD(0x0C08F3C8u, 2);  /* 0C08F3C6 mov.l @Rm,Rn */
	r3 = 0x80000u; UPD(0x0C08F3CAu, 1);  /* 0C08F3C8 mov.l @(disp,pc),Rn */
	r10 += r3;  /* 0C08F3CA add Rm,Rn */
	T = r5 == r10;  /* 0C08F3CC cmp/eq Rm,Rn */
	{ u32 c_ = !T; r7 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08F3A6u, 5); goto L_0C08F3A6; } goto L_0C08F3D2; }  /* 0C08F3CE bf/s */
L_0C08F3D2: BLKS(0x0C08F3D2u);
	r0 = 0x9Fu; UPD(0x0C08F3D4u, 2);  /* 0C08F3D2 mov.w @(disp,pc),Rn */
	IF(0x0C08F3D4u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C08F3D6u, 1);  /* 0C08F3D4 mov.b @(r0,Rm),Rn */
	r1 += 0x1u;  /* 0C08F3D6 add #imm,Rn */
	IF(0x0C08F3D8u); W8(r0 + r7, r1); UPD(0x0C08F3DAu, 2);  /* 0C08F3D8 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F3DA bra */
}

void f_0C08F3D4(sh3_t *c)
{
	LOCALS;
	goto L_0C08F3D4;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F3D4: BLKS(0x0C08F3D4u);
	IF(0x0C08F3D4u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C08F3D6u, 1);  /* 0C08F3D4 mov.b @(r0,Rm),Rn */
	r1 += 0x1u;  /* 0C08F3D6 add #imm,Rn */
	IF(0x0C08F3D8u); W8(r0 + r7, r1); UPD(0x0C08F3DAu, 2);  /* 0C08F3D8 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F3DA bra */
}

void f_0C08F3E0(sh3_t *c)
{
	LOCALS;
	goto L_0C08F3E0;
L_0C08EF54: BLKS(0x0C08EF54u);
	r14 += 0x40u;  /* 0C08EF54 add #imm,Rn */
	UPD(0x0C08EF56u, 1);
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F2A6: BLKS(0x0C08F2A6u);
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 2);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08F3DA: BLKS(0x0C08F3DAu);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F3DA bra */
L_0C08F3E0: BLKS(0x0C08F3E0u);
	r10 = 0xB4u; UPD(0x0C08F3E2u, 1);  /* 0C08F3E0 mov.w @(disp,pc),Rn */
	r12 = R32(r14); UPD(0x0C08F3E4u, 1);  /* 0C08F3E2 mov.l @Rm,Rn */
	IF(0x0C08F3E4u); MACL = r12 * r10;  /* 0C08F3E4 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C08F3E8u, 3);  /* 0C08F3E6 mov.l @(disp,pc),Rn */
	IF(0x0C08F3E8u); r13 = MACL;  /* 0C08F3E8 sts macl,Rn */
	r13 += r8;  /* 0C08F3EA add Rm,Rn */
	r0 = R32(r13 + 0xCu); UPD(0x0C08F3EEu, 3);  /* 0C08F3EC mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C08F3EE tst Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x9u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C08F3F8u, 4); goto L_0C08F3F8; } goto L_0C08F3F4; }  /* 0C08F3F0 bf/s */
L_0C08F3F4: BLKS(0x0C08F3F4u);
	{ IF(0x0C08F3F6u); ; /* slot nop */ UPD(0x0C08F540u, 4); goto L_0C08F540; }  /* 0C08F3F4 bra */
L_0C08F3F8: BLKS(0x0C08F3F8u);
	{ u32 c_ = T; r5 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C08F450u, 3); goto L_0C08F450; } UPD(0x0C08F3FCu, 1); goto L_0C08F3FC; }  /* 0C08F3F8 bt/s */
L_0C08F3FC: BLKS(0x0C08F3FCu);
	r11 = 0x2u;  /* 0C08F3FC mov #imm,Rn */
	UPD(0x0C08F3FEu, 1);
L_0C08F3FE: BLKS(0x0C08F3FEu);
	r10 = 0xB4u; UPD(0x0C08F400u, 1);  /* 0C08F3FE mov.w @(disp,pc),Rn */
	IF(0x0C08F400u); MACL = r5 * r10;  /* 0C08F400 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C08F404u, 3);  /* 0C08F402 mov.l @(disp,pc),Rn */
	IF(0x0C08F404u); r3 = MACL;  /* 0C08F404 sts macl,Rn */
	r3 += r0;  /* 0C08F406 add Rm,Rn */
	r0 = 0x99u; UPD(0x0C08F40Au, 3);  /* 0C08F408 mov.w @(disp,pc),Rn */
	IF(0x0C08F40Au); r13 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08F40Cu, 1);  /* 0C08F40A mov.b @(r0,Rm),Rn */
	r13 += 0x1u;  /* 0C08F40C add #imm,Rn */
	r2 = r13 & 0xFF;  /* 0C08F40E extu.b Rm,Rn */
	T = r2 > r11;  /* 0C08F410 cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C08F414u); W8(r0 + r3, r13); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C08F3DAu, 6); goto L_0C08F3DA; } UPD(0x0C08F416u, 1); goto L_0C08F416; }  /* 0C08F412 bf/s */
L_0C08F416: BLKS(0x0C08F416u);
	r4 = 0x0u;  /* 0C08F416 mov #imm,Rn */
	IF(0x0C08F418u); W8(r0 + r3, r4); UPD(0x0C08F41Au, 2);  /* 0C08F418 mov.b Rm,@(r0,Rn) */
	r0 = 0x88u; UPD(0x0C08F41Cu, 1);  /* 0C08F41A mov.w @(disp,pc),Rn */
	r1 = R32(r3 + 0xCu); UPD(0x0C08F41Eu, 1);  /* 0C08F41C mov.l @(disp,Rm),Rn */
	IF(0x0C08F41Eu); r11 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C08F420u, 1);  /* 0C08F41E mov.w @(r0,Rm),Rn */
	r1 += r11;  /* 0C08F420 add Rm,Rn */
	W32(r3 + 0xCu, r1); UPD(0x0C08F424u, 2);  /* 0C08F422 mov.l Rm,@(disp,Rn) */
L_0C08F424: BLKS(0x0C08F424u);
	r4 = R32(r14); UPD(0x0C08F426u, 1);  /* 0C08F424 mov.l @Rm,Rn */
	r1 = 0xC0A0380u; UPD(0x0C08F428u, 1);  /* 0C08F426 mov.l @(disp,pc),Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08F2A6u, 3); goto L_0C08F2A6; }  /* 0C08F428 bra */
L_0C08F450: BLKS(0x0C08F450u);
	r12 = 0xC0A9E40u; UPD(0x0C08F452u, 1);  /* 0C08F450 mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C08F452 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C08F456u, 2);  /* 0C08F454 mov.l @Rm,Rn */
	IF(0x0C08F456u); { u32 t_ = r12; PR = 0x0C08F45Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C08F45Au); }  /* 0C08F456 jsr @Rn */
L_0C08F45A: BLKS(0x0C08F45Au);
	T = (r0 & r0) == 0;  /* 0C08F45A tst Rm,Rn */
	if (T) { UPD(0x0C08F3DAu, 4); goto L_0C08F3DA; }  /* 0C08F45C bt */
L_0C08F45E: BLKS(0x0C08F45Eu);
	IF(0x0C08F45Eu); MACL = r9 * r10;  /* 0C08F45E mul.l Rm,Rn */
	r3 = 0xA1u; UPD(0x0C08F462u, 3);  /* 0C08F460 mov.w @(disp,pc),Rn */
	IF(0x0C08F462u); r0 = MACL;  /* 0C08F462 sts macl,Rn */
	r0 += r8;  /* 0C08F464 add Rm,Rn */
	IF(0x0C08F466u); r0 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08F468u, 3);  /* 0C08F466 mov.b @(r0,Rm),Rn */
	IF(0x0C08F468u); T = r0 >> 31; r0 <<= 1;  /* 0C08F468 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C08F46A subc Rm,Rn */
	r0 += 0x1u;  /* 0C08F46C add #imm,Rn */
	T = r0 == 0x1u;  /* 0C08F46E cmp/eq #imm,r0 */
	if (T) { UPD(0x0C08F530u, 7); goto L_0C08F530; }  /* 0C08F470 bt */
L_0C08F472: BLKS(0x0C08F472u);
	r8 = 0x9Cu; UPD(0x0C08F474u, 1);  /* 0C08F472 mov.w @(disp,pc),Rn */
	r8 += r13;  /* 0C08F474 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C08F478u, 2);  /* 0C08F476 mov.b @Rm,Rn */
	r12 = 0xC058090u; UPD(0x0C08F47Au, 1);  /* 0C08F478 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C08F47A add #imm,Rn */
	W8(r8, r4); UPD(0x0C08F47Eu, 2);  /* 0C08F47C mov.b Rm,@Rn */
	IF(0x0C08F47Eu); { u32 t_ = r12; PR = 0x0C08F482u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C08F482u); }  /* 0C08F47E jsr @Rn */
L_0C08F482: BLKS(0x0C08F482u);
	r5 = 0x280u; UPD(0x0C08F484u, 1);  /* 0C08F482 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C08F484 exts.w Rm,Rn */
	IF(0x0C08F486u); MACL = r1 * r5;  /* 0C08F486 mul.l Rm,Rn */
	r2 = 0xC283794u; UPD(0x0C08F48Au, 4);  /* 0C08F488 mov.l @(disp,pc),Rn */
	IF(0x0C08F48Au); r0 = MACL;  /* 0C08F48A sts macl,Rn */
	r10 = 0xC057390u; UPD(0x0C08F48Eu, 2);  /* 0C08F48C mov.l @(disp,pc),Rn */
	r0 += r2;  /* 0C08F48E add Rm,Rn */
	r4 = R32(r13 + 0x24u); UPD(0x0C08F492u, 2);  /* 0C08F490 mov.l @(disp,Rm),Rn */
	r12 = 0x60000u; UPD(0x0C08F494u, 1);  /* 0C08F492 mov.l @(disp,pc),Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C08F496u, 1);  /* 0C08F494 mov.l @(disp,Rm),Rn */
	r12 += r4;  /* 0C08F496 add Rm,Rn */
	r5 = R32(r13 + 0x28u); UPD(0x0C08F49Au, 2);  /* 0C08F498 mov.l @(disp,Rm),Rn */
	IF(0x0C08F49Au); { u32 t_ = r10; PR = 0x0C08F49Eu; r7 = R32(r0 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C08F49Eu); }  /* 0C08F49A jsr @Rn */
L_0C08F49E: BLKS(0x0C08F49Eu);
	r6 = (u32)(s32)(s16)r0;  /* 0C08F49E exts.w Rm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C08F4A2u, 2);  /* 0C08F4A0 mov.l Rm,@(disp,Rn) */
	r15 += 0xFFFFFFF8u;  /* 0C08F4A2 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C08F4A6u, 2);  /* 0C08F4A4 mov.b @Rm,Rn */
	r5 = r12;  /* 0C08F4A6 mov Rm,Rn */
	r10 = 0xC1C2AD4u; UPD(0x0C08F4AAu, 2);  /* 0C08F4A8 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C08F4AA and #imm,r0 */
	IF(0x0C08F4ACu); r0 <<= 2;  /* 0C08F4AC shll2 Rn */
	IF(0x0C08F4AEu); r11 = R32(r0 + r10); UPD(0x0C08F4B0u, 3);  /* 0C08F4AE mov.l @(r0,Rm),Rn */
	r4 = 0x1u;  /* 0C08F4B0 mov #imm,Rn */
	r6 = R32(r13 + 0x28u); UPD(0x0C08F4B4u, 2);  /* 0C08F4B2 mov.l @(disp,Rm),Rn */
	r9 = 0x1C000u; UPD(0x0C08F4B6u, 1);  /* 0C08F4B4 mov.l @(disp,pc),Rn */
	r6 += r11;  /* 0C08F4B6 add Rm,Rn */
	W32(r15, r9); UPD(0x0C08F4BAu, 2);  /* 0C08F4B8 mov.l Rm,@Rn */
	r9 = 0xC177AB2u; UPD(0x0C08F4BCu, 1);  /* 0C08F4BA mov.l @(disp,pc),Rn */
	r11 = 0xC7C1710u; UPD(0x0C08F4BEu, 1);  /* 0C08F4BC mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C08F4C0u, 1);  /* 0C08F4BE mov.l Rm,@(disp,Rn) */
	IF(0x0C08F4C0u); { u32 t_ = r11; PR = 0x0C08F4C4u; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1710, 0x0C7C1710u, 0x0C08F4C4u); }  /* 0C08F4C0 jsr @Rn */
L_0C08F4C4: BLKS(0x0C08F4C4u);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C08F4C6u, 1);  /* 0C08F4C4 mov.b @Rm,Rn */
	r5 = r12;  /* 0C08F4C6 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C08F4C8 and #imm,r0 */
	IF(0x0C08F4CAu); r0 <<= 2;  /* 0C08F4CA shll2 Rn */
	IF(0x0C08F4CCu); r7 = R32(r0 + r10); UPD(0x0C08F4CEu, 4);  /* 0C08F4CC mov.l @(r0,Rm),Rn */
	r4 = 0x1u;  /* 0C08F4CE mov #imm,Rn */
	r6 = R32(r13 + 0x28u); UPD(0x0C08F4D2u, 2);  /* 0C08F4D0 mov.l @(disp,Rm),Rn */
	r3 = 0x24000u; UPD(0x0C08F4D4u, 1);  /* 0C08F4D2 mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C08F4D4 add Rm,Rn */
	W32(r15, r3); UPD(0x0C08F4D8u, 2);  /* 0C08F4D6 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C08F4DAu, 1);  /* 0C08F4D8 mov.l Rm,@(disp,Rn) */
	IF(0x0C08F4DAu); { u32 t_ = r11; PR = 0x0C08F4DEu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C08F4DEu); }  /* 0C08F4DA jsr @Rn */
L_0C08F4DE: BLKS(0x0C08F4DEu);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C08F4E0u, 1);  /* 0C08F4DE mov.b @Rm,Rn */
	r5 = r12;  /* 0C08F4E0 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C08F4E2 and #imm,r0 */
	IF(0x0C08F4E4u); r0 <<= 2;  /* 0C08F4E4 shll2 Rn */
	IF(0x0C08F4E6u); r4 = R32(r0 + r10); UPD(0x0C08F4E8u, 4);  /* 0C08F4E6 mov.l @(r0,Rm),Rn */
	r6 = R32(r13 + 0x28u); UPD(0x0C08F4EAu, 1);  /* 0C08F4E8 mov.l @(disp,Rm),Rn */
	r0 = 0x28000u; UPD(0x0C08F4ECu, 1);  /* 0C08F4EA mov.l @(disp,pc),Rn */
	r6 += r4;  /* 0C08F4EC add Rm,Rn */
	W32(r15, r0); UPD(0x0C08F4F0u, 2);  /* 0C08F4EE mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C08F4F0 mov #imm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C08F4F4u, 2);  /* 0C08F4F2 mov.l Rm,@(disp,Rn) */
	IF(0x0C08F4F4u); { u32 t_ = r11; PR = 0x0C08F4F8u; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C08F4F8u); }  /* 0C08F4F4 jsr @Rn */
L_0C08F4F8: BLKS(0x0C08F4F8u);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C08F4FAu, 1);  /* 0C08F4F8 mov.b @Rm,Rn */
	r4 = 0x1u;  /* 0C08F4FA mov #imm,Rn */
	r0 &= 0x1u;  /* 0C08F4FC and #imm,r0 */
	IF(0x0C08F4FEu); r0 <<= 2;  /* 0C08F4FE shll2 Rn */
	IF(0x0C08F500u); r5 = R32(r0 + r10); UPD(0x0C08F502u, 4);  /* 0C08F500 mov.l @(r0,Rm),Rn */
	r6 = R32(r13 + 0x28u); UPD(0x0C08F504u, 1);  /* 0C08F502 mov.l @(disp,Rm),Rn */
	r2 = 0x2C000u; UPD(0x0C08F506u, 1);  /* 0C08F504 mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C08F506 add Rm,Rn */
	W32(r15, r2); UPD(0x0C08F50Au, 2);  /* 0C08F508 mov.l Rm,@Rn */
	r5 = r12;  /* 0C08F50A mov Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C08F50Eu, 2);  /* 0C08F50C mov.l Rm,@(disp,Rn) */
	IF(0x0C08F50Eu); { u32 t_ = r11; PR = 0x0C08F512u; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C08F512u); }  /* 0C08F50E jsr @Rn */
L_0C08F512: BLKS(0x0C08F512u);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C08F514u, 1);  /* 0C08F512 mov.b @Rm,Rn */
	r4 = 0x1u;  /* 0C08F514 mov #imm,Rn */
	r0 &= 0x1u;  /* 0C08F516 and #imm,r0 */
	IF(0x0C08F518u); r0 <<= 2;  /* 0C08F518 shll2 Rn */
	r6 = R32(r13 + 0x28u); UPD(0x0C08F51Cu, 4);  /* 0C08F51A mov.l @(disp,Rm),Rn */
	r5 = r12;  /* 0C08F51C mov Rm,Rn */
	IF(0x0C08F51Eu); r8 = R32(r0 + r10); UPD(0x0C08F520u, 2);  /* 0C08F51E mov.l @(r0,Rm),Rn */
	r7 = 0x34000u; UPD(0x0C08F522u, 1);  /* 0C08F520 mov.l @(disp,pc),Rn */
	r6 += r8;  /* 0C08F522 add Rm,Rn */
	W32(r15, r7); UPD(0x0C08F526u, 2);  /* 0C08F524 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C08F528u, 1);  /* 0C08F526 mov.l Rm,@(disp,Rn) */
	IF(0x0C08F528u); { u32 t_ = r11; PR = 0x0C08F52Cu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C08F52Cu); }  /* 0C08F528 jsr @Rn */
L_0C08F52C: BLKS(0x0C08F52Cu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C08EF54u, 3); goto L_0C08EF54; }  /* 0C08F52C bra */
L_0C08F530: BLKS(0x0C08F530u);
	r8 = R32(r13 + 0xCu); UPD(0x0C08F532u, 1);  /* 0C08F530 mov.l @(disp,Rm),Rn */
	r3 = 0xFFFFFFFFu;  /* 0C08F532 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C08F536u, 2);  /* 0C08F534 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFFFu;  /* 0C08F536 add #imm,Rn */
	IF(0x0C08F538u); W16(r0 + r13, r3); UPD(0x0C08F53Au, 2);  /* 0C08F538 mov.w Rm,@(r0,Rn) */
	{ W32(r13 + 0xCu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08F424u, 3); goto L_0C08F424; }  /* 0C08F53A bra */
L_0C08F540: BLKS(0x0C08F540u);
	r0 = 0x88u; UPD(0x0C08F542u, 1);  /* 0C08F540 mov.w @(disp,pc),Rn */
	IF(0x0C08F542u); r9 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C08F544u, 1);  /* 0C08F542 mov.w @(r0,Rm),Rn */
	IF(0x0C08F544u); T = (s32)r9 >= 0;  /* 0C08F544 cmp/pz Rn */
	if (!T) { UPD(0x0C08F54Eu, 4); goto L_0C08F54E; }  /* 0C08F546 bf */
L_0C08F548: BLKS(0x0C08F548u);
	r5 = R32(r14); UPD(0x0C08F54Au, 1);  /* 0C08F548 mov.l @Rm,Rn */
	{ r11 = 0x2u; /* slot mov #imm,Rn */ UPD(0x0C08F3FEu, 3); goto L_0C08F3FE; }  /* 0C08F54A bra */
L_0C08F54E: BLKS(0x0C08F54Eu);
	r0 += 0x17u;  /* 0C08F54E add #imm,Rn */
	IF(0x0C08F550u); r8 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C08F552u, 2);  /* 0C08F550 mov.b @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C08F552 add #imm,Rn */
	IF(0x0C08F554u); W8(r0 + r13, r8); UPD(0x0C08F556u, 2);  /* 0C08F554 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F556 bra */
}

void f_0C08F41A(sh3_t *c)
{
	LOCALS;
	goto L_0C08F41A;
L_0C08F2A6: BLKS(0x0C08F2A6u);
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 2);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08F41A: BLKS(0x0C08F41Au);
	r0 = 0x88u; UPD(0x0C08F41Cu, 1);  /* 0C08F41A mov.w @(disp,pc),Rn */
	r1 = R32(r3 + 0xCu); UPD(0x0C08F41Eu, 1);  /* 0C08F41C mov.l @(disp,Rm),Rn */
	IF(0x0C08F41Eu); r11 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C08F420u, 1);  /* 0C08F41E mov.w @(r0,Rm),Rn */
	r1 += r11;  /* 0C08F420 add Rm,Rn */
	W32(r3 + 0xCu, r1); UPD(0x0C08F424u, 2);  /* 0C08F422 mov.l Rm,@(disp,Rn) */
	r4 = R32(r14); UPD(0x0C08F426u, 1);  /* 0C08F424 mov.l @Rm,Rn */
	r1 = 0xC0A0380u; UPD(0x0C08F428u, 1);  /* 0C08F426 mov.l @(disp,pc),Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08F2A6u, 3); goto L_0C08F2A6; }  /* 0C08F428 bra */
}

void f_0C08F422(sh3_t *c)
{
	LOCALS;
	goto L_0C08F422;
L_0C08F2A6: BLKS(0x0C08F2A6u);
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 2);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08F422: BLKS(0x0C08F422u);
	W32(r3 + 0xCu, r1); UPD(0x0C08F424u, 1);  /* 0C08F422 mov.l Rm,@(disp,Rn) */
	r4 = R32(r14); UPD(0x0C08F426u, 1);  /* 0C08F424 mov.l @Rm,Rn */
	r1 = 0xC0A0380u; UPD(0x0C08F428u, 1);  /* 0C08F426 mov.l @(disp,pc),Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08F2A6u, 3); goto L_0C08F2A6; }  /* 0C08F428 bra */
}

void f_0C08F424(sh3_t *c)
{
	LOCALS;
	goto L_0C08F424;
L_0C08F2A6: BLKS(0x0C08F2A6u);
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 2);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08F424: BLKS(0x0C08F424u);
	r4 = R32(r14); UPD(0x0C08F426u, 1);  /* 0C08F424 mov.l @Rm,Rn */
	r1 = 0xC0A0380u; UPD(0x0C08F428u, 1);  /* 0C08F426 mov.l @(disp,pc),Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08F2A6u, 3); goto L_0C08F2A6; }  /* 0C08F428 bra */
}

void f_0C08F426(sh3_t *c)
{
	LOCALS;
	goto L_0C08F426;
L_0C08F2A6: BLKS(0x0C08F2A6u);
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 2);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08F426: BLKS(0x0C08F426u);
	r1 = 0xC0A0380u; UPD(0x0C08F428u, 1);  /* 0C08F426 mov.l @(disp,pc),Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08F2A6u, 3); goto L_0C08F2A6; }  /* 0C08F428 bra */
}

void f_0C08F52C(sh3_t *c)
{
	LOCALS;
	goto L_0C08F52C;
L_0C08EF54: BLKS(0x0C08EF54u);
	r14 += 0x40u;  /* 0C08EF54 add #imm,Rn */
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 3);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F52C: BLKS(0x0C08F52Cu);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C08EF54u, 3); goto L_0C08EF54; }  /* 0C08F52C bra */
}

void f_0C08F560(sh3_t *c)
{
	LOCALS;
	goto L_0C08F560;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F556: BLKS(0x0C08F556u);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F556 bra */
L_0C08F560: BLKS(0x0C08F560u);
	r6 = 0xB4u; UPD(0x0C08F562u, 1);  /* 0C08F560 mov.w @(disp,pc),Rn */
	r10 = R32(r14); UPD(0x0C08F564u, 1);  /* 0C08F562 mov.l @Rm,Rn */
	IF(0x0C08F564u); MACL = r10 * r6;  /* 0C08F564 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C08F568u, 3);  /* 0C08F566 mov.l @(disp,pc),Rn */
	IF(0x0C08F568u); r0 = MACL;  /* 0C08F568 sts macl,Rn */
	r0 += r11;  /* 0C08F56A add Rm,Rn */
	r7 = R32(r0 + 0x2Cu); UPD(0x0C08F56Eu, 3);  /* 0C08F56C mov.l @(disp,Rm),Rn */
	r9 = 0xFFFF8000u; UPD(0x0C08F570u, 1);  /* 0C08F56E mov.w @(disp,pc),Rn */
	r7 += r9;  /* 0C08F570 add Rm,Rn */
	W32(r0 + 0x2Cu, r7); UPD(0x0C08F574u, 2);  /* 0C08F572 mov.l Rm,@(disp,Rn) */
	r0 += 0x50u;  /* 0C08F574 add #imm,Rn */
	r13 = R32(r0); UPD(0x0C08F578u, 2);  /* 0C08F576 mov.l @Rm,Rn */
	T = r7 == r13;  /* 0C08F578 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r0 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08F556u, 4); goto L_0C08F556; } goto L_0C08F57E; }  /* 0C08F57A bf/s */
L_0C08F57E: BLKS(0x0C08F57Eu);
	r2 = 0x9Fu; UPD(0x0C08F580u, 2);  /* 0C08F57E mov.w @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C08F580 mov #imm,Rn */
	IF(0x0C08F582u); W8(r0 + r2, r1); UPD(0x0C08F584u, 2);  /* 0C08F582 mov.b Rm,@(r0,Rn) */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F584 bra */
}

void f_0C08F590(sh3_t *c)
{
	LOCALS;
	goto L_0C08F590;
L_0C08F280: BLKS(0x0C08F280u);
	r3 = 0xC08EC90u; UPD(0x0C08F282u, 1);  /* 0C08F280 mov.l @(disp,pc),Rn */
	r14 += 0x40u;  /* 0C08F282 add #imm,Rn */
	r15 = r14;  /* 0C08F284 mov Rm,Rn */
	IF(0x0C08F286u); PR = R32(r15); r15 += 4; UPD(0x0C08F288u, 3);  /* 0C08F286 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F28Au, 1);  /* 0C08F288 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F28Cu, 1);  /* 0C08F28A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F28Eu, 1);  /* 0C08F28C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F290u, 1);  /* 0C08F28E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F292u, 1);  /* 0C08F290 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F294u, 1);  /* 0C08F292 mov.l @Rm+,Rn */
	IF(0x0C08F294u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F294 jmp @Rn */
L_0C08F2A2: BLKS(0x0C08F2A2u);
	r1 = 0xC7C2DE4u; UPD(0x0C08F2A4u, 1);  /* 0C08F2A2 mov.l @(disp,pc),Rn */
	r14 += 0x40u;  /* 0C08F2A4 add #imm,Rn */
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 3);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C7C2DE4u: TAIL(f_0C7C2DE4); default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08F590: BLKS(0x0C08F590u);
	r9 = 0xC0A0540u; UPD(0x0C08F592u, 1);  /* 0C08F590 mov.l @(disp,pc),Rn */
	IF(0x0C08F592u); { u32 t_ = r9; PR = 0x0C08F596u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C08F596u); }  /* 0C08F592 jsr @Rn */
L_0C08F596: BLKS(0x0C08F596u);
	IF(0x0C08F596u); T = (s32)r0 >= 0;  /* 0C08F596 cmp/pz Rn */
	if (!T) { UPD(0x0C08F5FCu, 4); goto L_0C08F5FC; }  /* 0C08F598 bf */
L_0C08F59A: BLKS(0x0C08F59Au);
	r4 = R32(r14); UPD(0x0C08F59Cu, 1);  /* 0C08F59A mov.l @Rm,Rn */
	r5 = r0;  /* 0C08F59C mov Rm,Rn */
	{ r6 = 0x11u; /* slot mov #imm,Rn */ UPD(0x0C08F280u, 4); goto L_0C08F280; }  /* 0C08F59E bra */
L_0C08F5FC: BLKS(0x0C08F5FCu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C08F2A2u, 3); goto L_0C08F2A2; }  /* 0C08F5FC bra */
}

void f_0C08F5F0(sh3_t *c)
{
	LOCALS;
	goto L_0C08F5F0;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F14C: BLKS(0x0C08F14Cu);
	W8(r2, r0); UPD(0x0C08F14Eu, 1);  /* 0C08F14C mov.b Rm,@Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F14E bra */
L_0C08F2A2: BLKS(0x0C08F2A2u);
	r1 = 0xC7C2DE4u; UPD(0x0C08F2A4u, 1);  /* 0C08F2A2 mov.l @(disp,pc),Rn */
	r14 += 0x40u;  /* 0C08F2A4 add #imm,Rn */
	UPD(0x0C08F2A6u, 1);
L_0C08F2A6: BLKS(0x0C08F2A6u);
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 2);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08F424: BLKS(0x0C08F424u);
	r4 = R32(r14); UPD(0x0C08F426u, 1);  /* 0C08F424 mov.l @Rm,Rn */
	r1 = 0xC0A0380u; UPD(0x0C08F428u, 1);  /* 0C08F426 mov.l @(disp,pc),Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08F2A6u, 3); goto L_0C08F2A6; }  /* 0C08F428 bra */
L_0C08F584: BLKS(0x0C08F584u);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F584 bra */
L_0C08F5F0: BLKS(0x0C08F5F0u);
	r12 = 0xC0A05D0u; UPD(0x0C08F5F2u, 1);  /* 0C08F5F0 mov.l @(disp,pc),Rn */
	IF(0x0C08F5F2u); { u32 t_ = r12; PR = 0x0C08F5F6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A05D0, 0x0C0A05D0u, 0x0C08F5F6u); }  /* 0C08F5F2 jsr @Rn */
L_0C08F5F6: BLKS(0x0C08F5F6u);
	IF(0x0C08F5F6u); T = (s32)r0 >= 0;  /* 0C08F5F6 cmp/pz Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08F600u, 4); goto L_0C08F600; } goto L_0C08F5FC; }  /* 0C08F5F8 bt/s */
L_0C08F5FC: BLKS(0x0C08F5FCu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C08F2A2u, 4); goto L_0C08F2A2; }  /* 0C08F5FC bra */
L_0C08F600: BLKS(0x0C08F600u);
	r7 = 0xB4u; UPD(0x0C08F602u, 1);  /* 0C08F600 mov.w @(disp,pc),Rn */
	r8 = R32(r14); UPD(0x0C08F604u, 1);  /* 0C08F602 mov.l @Rm,Rn */
	IF(0x0C08F604u); MACL = r8 * r7;  /* 0C08F604 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C08F608u, 3);  /* 0C08F606 mov.l @(disp,pc),Rn */
	IF(0x0C08F608u); r8 = MACL;  /* 0C08F608 sts macl,Rn */
	r8 += r10;  /* 0C08F60A add Rm,Rn */
	IF(0x0C08F60Cu); MACL = r0 * r7;  /* 0C08F60C mul.l Rm,Rn */
	r5 = R32(r8); UPD(0x0C08F610u, 5);  /* 0C08F60E mov.l @Rm,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C08F612u, 1);  /* 0C08F610 mov.l @(disp,pc),Rn */
	IF(0x0C08F612u); r7 = MACL;  /* 0C08F612 sts macl,Rn */
	r5 &= r2;  /* 0C08F614 and Rm,Rn */
	r7 += r10;  /* 0C08F616 add Rm,Rn */
	W32(r8, r5); UPD(0x0C08F61Au, 4);  /* 0C08F618 mov.l Rm,@Rn */
	r0 = R32(r7 + 0x38u); UPD(0x0C08F61Cu, 1);  /* 0C08F61A mov.l @(disp,Rm),Rn */
	r4 = R32(r7); UPD(0x0C08F61Eu, 1);  /* 0C08F61C mov.l @Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C08F620u, 1);  /* 0C08F61E mov.l @(disp,pc),Rn */
	r11 = R32(r7 + 0x24u); UPD(0x0C08F622u, 1);  /* 0C08F620 mov.l @(disp,Rm),Rn */
	r4 &= r1;  /* 0C08F622 and Rm,Rn */
	r3 = R32(r7 + 0x28u); UPD(0x0C08F626u, 2);  /* 0C08F624 mov.l @(disp,Rm),Rn */
	r5 |= r4;  /* 0C08F626 or Rm,Rn */
	r6 = R32(r8 + 0x2Cu); UPD(0x0C08F62Au, 2);  /* 0C08F628 mov.l @(disp,Rm),Rn */
	r13 = R32(r8 + 0x30u); UPD(0x0C08F62Cu, 1);  /* 0C08F62A mov.l @(disp,Rm),Rn */
	r11 += r6;  /* 0C08F62C add Rm,Rn */
	W32(r8 + 0x38u, r0); UPD(0x0C08F630u, 2);  /* 0C08F62E mov.l Rm,@(disp,Rn) */
	r3 += r13;  /* 0C08F630 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C08F634u, 2);  /* 0C08F632 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r11); UPD(0x0C08F636u, 1);  /* 0C08F634 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C08F636 tst Rm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C08F63Au, 2);  /* 0C08F638 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r8, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C08F700u, 3); goto L_0C08F700; } UPD(0x0C08F63Eu, 1); goto L_0C08F63E; }  /* 0C08F63A bt/s */
L_0C08F63E: BLKS(0x0C08F63Eu);
	T = r0 == 0x10u;  /* 0C08F63E cmp/eq #imm,r0 */
	{ u32 c_ = T; r6 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C08F6A0u, 4); goto L_0C08F6A0; } UPD(0x0C08F644u, 1); goto L_0C08F644; }  /* 0C08F640 bt/s */
L_0C08F644: BLKS(0x0C08F644u);
	r10 = 0xB4u; UPD(0x0C08F646u, 1);  /* 0C08F644 mov.w @(disp,pc),Rn */
	IF(0x0C08F646u); MACL = r6 * r10;  /* 0C08F646 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C08F64Au, 3);  /* 0C08F648 mov.l @(disp,pc),Rn */
	IF(0x0C08F64Au); r8 = MACL;  /* 0C08F64A sts macl,Rn */
	r2 = 0x99u; UPD(0x0C08F64Eu, 2);  /* 0C08F64C mov.w @(disp,pc),Rn */
	r8 += r11;  /* 0C08F64E add Rm,Rn */
	r2 += r8;  /* 0C08F650 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C08F654u, 3);  /* 0C08F652 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C08F654 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C08F656 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C08F658 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08F584u, 6); goto L_0C08F584; } UPD(0x0C08F65Eu, 1); goto L_0C08F65E; }  /* 0C08F65A bf/s */
L_0C08F65E: BLKS(0x0C08F65Eu);
	r0 = 0x0u;  /* 0C08F65E mov #imm,Rn */
	W8(r2, r0); UPD(0x0C08F662u, 2);  /* 0C08F660 mov.b Rm,@Rn */
	r0 = 0x88u; UPD(0x0C08F664u, 1);  /* 0C08F662 mov.w @(disp,pc),Rn */
	r12 = R32(r8 + 0xCu); UPD(0x0C08F666u, 1);  /* 0C08F664 mov.l @(disp,Rm),Rn */
	IF(0x0C08F666u); r5 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C08F668u, 1);  /* 0C08F666 mov.w @(r0,Rm),Rn */
	r7 = 0xC0A0380u; UPD(0x0C08F66Au, 1);  /* 0C08F668 mov.l @(disp,pc),Rn */
	r12 += r5;  /* 0C08F66A add Rm,Rn */
	W32(r8 + 0xCu, r12); UPD(0x0C08F66Eu, 2);  /* 0C08F66C mov.l Rm,@(disp,Rn) */
	IF(0x0C08F66Eu); { u32 t_ = r7; PR = 0x0C08F672u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08F672u); }  /* 0C08F66E jsr @Rn */
L_0C08F672: BLKS(0x0C08F672u);
	r0 = R32(r8 + 0xCu); UPD(0x0C08F674u, 1);  /* 0C08F672 mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C08F674 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C08F68Cu, 4); goto L_0C08F68C; }  /* 0C08F676 bt */
L_0C08F678: BLKS(0x0C08F678u);
	T = (r0 & r0) == 0;  /* 0C08F678 tst Rm,Rn */
	if (!T) { UPD(0x0C08F6F4u, 4); goto L_0C08F6F4; }  /* 0C08F67A bf */
L_0C08F67C: BLKS(0x0C08F67Cu);
	r3 = R32(r8); UPD(0x0C08F67Eu, 1);  /* 0C08F67C mov.l @Rm,Rn */
	r0 = 0xA9u; UPD(0x0C08F680u, 1);  /* 0C08F67E mov.w @(disp,pc),Rn */
	IF(0x0C08F680u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F682u, 1);  /* 0C08F680 mov.b @(r0,Rm),Rn */
	r13 = 0x4000u; UPD(0x0C08F684u, 1);  /* 0C08F682 mov.w @(disp,pc),Rn */
	r4 += 0xFFFFFFFFu;  /* 0C08F684 add #imm,Rn */
	r3 |= r13;  /* 0C08F686 or Rm,Rn */
	W32(r8, r3); UPD(0x0C08F68Au, 3);  /* 0C08F688 mov.l Rm,@Rn */
	IF(0x0C08F68Au); W8(r0 + r8, r4); UPD(0x0C08F68Cu, 1);  /* 0C08F68A mov.b Rm,@(r0,Rn) */
L_0C08F68C: BLKS(0x0C08F68Cu);
	IF(0x0C08F68Cu); MACL = r9 * r10;  /* 0C08F68C mul.l Rm,Rn */
	IF(0x0C08F68Eu); r2 = MACL;  /* 0C08F68E sts macl,Rn */
	r2 += r11;  /* 0C08F690 add Rm,Rn */
	r11 = 0xA2u; UPD(0x0C08F694u, 5);  /* 0C08F692 mov.w @(disp,pc),Rn */
	r2 += r11;  /* 0C08F694 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C08F698u, 2);  /* 0C08F696 mov.b @Rm,Rn */
	{ r0 &= 0xBFu; /* slot and #imm,r0 */ UPD(0x0C08F14Cu, 3); goto L_0C08F14C; }  /* 0C08F698 bra */
L_0C08F6A0: BLKS(0x0C08F6A0u);
	r6 = 0x9Fu; UPD(0x0C08F6A2u, 1);  /* 0C08F6A0 mov.w @(disp,pc),Rn */
	r6 += r8;  /* 0C08F6A2 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C08F6A6u, 2);  /* 0C08F6A4 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C08F6A6 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08F6A8 tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C08F6E0u, 5); goto L_0C08F6E0; } goto L_0C08F6AE; }  /* 0C08F6AA bt/s */
L_0C08F6AE: BLKS(0x0C08F6AEu);
	if (!T) { UPD(0x0C08F6F4u, 4); goto L_0C08F6F4; }  /* 0C08F6AE bf */
L_0C08F6B0: BLKS(0x0C08F6B0u);
	r3 = 0xFFFFFFFFu;  /* 0C08F6B0 mov #imm,Rn */
	r12 = 0xA4u; UPD(0x0C08F6B4u, 2);  /* 0C08F6B2 mov.w @(disp,pc),Rn */
	r12 += r8;  /* 0C08F6B4 add Rm,Rn */
	r12 += 0x1u;  /* 0C08F6B6 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r12); r12 += 1; r1 = v_; } UPD(0x0C08F6BAu, 3);  /* 0C08F6B8 mov.b @Rm+,Rn */
	T = (r1 & r1) == 0;  /* 0C08F6BA tst Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C08F6BEu, 2);  /* 0C08F6BC mov.b @Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C08F6BE negc Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C08F6C0 tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C08F6C2 negc Rm,Rn */
	r2 |= r9;  /* 0C08F6C4 or Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C08F6C6 tst Rm,Rn */
	if (!T) { UPD(0x0C08F6F4u, 8); goto L_0C08F6F4; }  /* 0C08F6C8 bf */
L_0C08F6CA: BLKS(0x0C08F6CAu);
	r1 = 0xFu;  /* 0C08F6CA mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C08F6CEu, 2);  /* 0C08F6CC mov.w @(disp,pc),Rn */
	W8(r6, r2); UPD(0x0C08F6D0u, 1);  /* 0C08F6CE mov.b Rm,@Rn */
	IF(0x0C08F6D0u); W16(r0 + r8, r3); UPD(0x0C08F6D2u, 1);  /* 0C08F6D0 mov.w Rm,@(r0,Rn) */
	{ W32(r8 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08F424u, 3); goto L_0C08F424; }  /* 0C08F6D2 bra */
L_0C08F6E0: BLKS(0x0C08F6E0u);
	r8 = 0xA1u; UPD(0x0C08F6E2u, 1);  /* 0C08F6E0 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C08F6E2 mov Rm,Rn */
	IF(0x0C08F6E4u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F6E6u, 2);  /* 0C08F6E4 mov.b @(r0,Rm),Rn */
	r0 = r10;  /* 0C08F6E6 mov Rm,Rn */
	r0 &= 0x40u;  /* 0C08F6E8 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08F6EA tst Rm,Rn */
	{ u32 c_ = !T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08F6F4u, 6); goto L_0C08F6F4; } goto L_0C08F6F0; }  /* 0C08F6EC bf/s */
L_0C08F6F0: BLKS(0x0C08F6F0u);
	r1 += 0x1u;  /* 0C08F6F0 add #imm,Rn */
	W8(r6, r1); UPD(0x0C08F6F4u, 3);  /* 0C08F6F2 mov.b Rm,@Rn */
L_0C08F6F4: BLKS(0x0C08F6F4u);
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F6F4 bra */
L_0C08F700: BLKS(0x0C08F700u);
	r12 = 0xA1u; UPD(0x0C08F702u, 1);  /* 0C08F700 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C08F702 mov Rm,Rn */
	IF(0x0C08F704u); r9 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C08F706u, 2);  /* 0C08F704 mov.b @(r0,Rm),Rn */
	r0 = r9;  /* 0C08F706 mov Rm,Rn */
	r0 &= 0x40u;  /* 0C08F708 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08F70A tst Rm,Rn */
	if (T) { UPD(0x0C08F6F4u, 6); goto L_0C08F6F4; }  /* 0C08F70C bt */
L_0C08F70E: BLKS(0x0C08F70Eu);
	r13 = 0x1u;  /* 0C08F70E mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C08F712u, 2);  /* 0C08F710 mov.w @(disp,pc),Rn */
	r2 = 0xC0A0380u; UPD(0x0C08F714u, 1);  /* 0C08F712 mov.l @(disp,pc),Rn */
	r3 = 0x1u;  /* 0C08F714 mov #imm,Rn */
	IF(0x0C08F716u); W16(r0 + r8, r13); UPD(0x0C08F718u, 2);  /* 0C08F716 mov.w Rm,@(r0,Rn) */
	r4 = R32(r14); UPD(0x0C08F71Au, 1);  /* 0C08F718 mov.l @Rm,Rn */
	IF(0x0C08F71Au); { u32 t_ = r2; PR = 0x0C08F71Eu; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C08F71Eu); }  /* 0C08F71A jsr @Rn */
L_0C08F71E: BLKS(0x0C08F71Eu);
	r0 = R32(r8); UPD(0x0C08F720u, 1);  /* 0C08F71E mov.l @Rm,Rn */
	r4 = 0xFFFFBFFFu; UPD(0x0C08F722u, 1);  /* 0C08F720 mov.w @(disp,pc),Rn */
	r0 &= r4;  /* 0C08F722 and Rm,Rn */
	W32(r8, r0); UPD(0x0C08F726u, 2);  /* 0C08F724 mov.l Rm,@Rn */
	r0 = 0xA9u; UPD(0x0C08F728u, 1);  /* 0C08F726 mov.w @(disp,pc),Rn */
	IF(0x0C08F728u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08F72Au, 1);  /* 0C08F728 mov.b @(r0,Rm),Rn */
	r5 += 0x1u;  /* 0C08F72A add #imm,Rn */
	IF(0x0C08F72Cu); W8(r0 + r8, r5); UPD(0x0C08F72Eu, 2);  /* 0C08F72C mov.b Rm,@(r0,Rn) */
	r4 = 0x6Cu;  /* 0C08F72E mov #imm,Rn */
	r1 = 0xC0AFC10u; UPD(0x0C08F732u, 2);  /* 0C08F730 mov.l @(disp,pc),Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08F2A6u, 3); goto L_0C08F2A6; }  /* 0C08F732 bra */
}

void f_0C08F6D2(sh3_t *c)
{
	LOCALS;
	goto L_0C08F6D2;
L_0C08F2A6: BLKS(0x0C08F2A6u);
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 2);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08F424: BLKS(0x0C08F424u);
	r4 = R32(r14); UPD(0x0C08F426u, 1);  /* 0C08F424 mov.l @Rm,Rn */
	r1 = 0xC0A0380u; UPD(0x0C08F428u, 1);  /* 0C08F426 mov.l @(disp,pc),Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08F2A6u, 3); goto L_0C08F2A6; }  /* 0C08F428 bra */
L_0C08F6D2: BLKS(0x0C08F6D2u);
	{ W32(r8 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08F424u, 3); goto L_0C08F424; }  /* 0C08F6D2 bra */
}

void f_0C08F6F0(sh3_t *c)
{
	LOCALS;
	goto L_0C08F6F0;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08F6F0: BLKS(0x0C08F6F0u);
	r1 += 0x1u;  /* 0C08F6F0 add #imm,Rn */
	W8(r6, r1); UPD(0x0C08F6F4u, 2);  /* 0C08F6F2 mov.b Rm,@Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 3); goto L_0C08EF56; }  /* 0C08F6F4 bra */
}

void f_0C08F730(sh3_t *c)
{
	LOCALS;
	goto L_0C08F730;
L_0C08F2A6: BLKS(0x0C08F2A6u);
	r15 = r14;  /* 0C08F2A6 mov Rm,Rn */
	IF(0x0C08F2A8u); PR = R32(r15); r15 += 4; UPD(0x0C08F2AAu, 2);  /* 0C08F2A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08F2ACu, 1);  /* 0C08F2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08F2AEu, 1);  /* 0C08F2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08F2B0u, 1);  /* 0C08F2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08F2B2u, 1);  /* 0C08F2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08F2B4u, 1);  /* 0C08F2B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08F2B6u, 1);  /* 0C08F2B4 mov.l @Rm+,Rn */
	IF(0x0C08F2B6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08F2B6 jmp @Rn */
L_0C08F730: BLKS(0x0C08F730u);
	r1 = 0xC0AFC10u; UPD(0x0C08F732u, 1);  /* 0C08F730 mov.l @(disp,pc),Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08F2A6u, 3); goto L_0C08F2A6; }  /* 0C08F732 bra */
}

